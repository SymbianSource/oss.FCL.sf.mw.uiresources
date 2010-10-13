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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000d5bd };

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
0x7b60,	// (0x0001511d) Screen

0x7b6c,	// (0x00015129) application_window_ParamLimits

0x7b6c,	// (0x00015129) application_window

0x36de,	// (0x00010c9b) screen_g1

0x552e,	// (0x00012aeb) area_bottom_pane_ParamLimits

0x552e,	// (0x00012aeb) area_bottom_pane

0x55ee,	// (0x00012bab) area_top_pane_ParamLimits

0x55ee,	// (0x00012bab) area_top_pane

0x568c,	// (0x00012c49) main_pane_ParamLimits

0x568c,	// (0x00012c49) main_pane

0x3708,	// (0x00010cc5) misc_graphics

0x8c9e,	// (0x0001625b) battery_pane_ParamLimits

0x8c9e,	// (0x0001625b) battery_pane

0x9a8f,	// (0x0001704c) bg_status_flat_pane_g8

0x9a97,	// (0x00017054) bg_status_flat_pane_g9

0x8d66,	// (0x00016323) context_pane_ParamLimits

0x8d66,	// (0x00016323) context_pane

0x8e7c,	// (0x00016439) navi_pane_ParamLimits

0x8e7c,	// (0x00016439) navi_pane

0x8f00,	// (0x000164bd) signal_pane_ParamLimits

0x8f00,	// (0x000164bd) signal_pane

0x0008,

0xf845,	// (0x0001ce02) bg_status_flat_pane_g

0x8f6d,	// (0x0001652a) status_pane_g1_ParamLimits

0x8f6d,	// (0x0001652a) status_pane_g1

0x8f81,	// (0x0001653e) status_pane_g2_ParamLimits

0x8f81,	// (0x0001653e) status_pane_g2

0x8f8d,	// (0x0001654a) status_pane_g3_ParamLimits

0x8f8d,	// (0x0001654a) status_pane_g3

0x0004,

0xf76c,	// (0x0001cd29) status_pane_g_ParamLimits

0xf76c,	// (0x0001cd29) status_pane_g

0x8fc1,	// (0x0001657e) title_pane_ParamLimits

0x8fc1,	// (0x0001657e) title_pane

0x8ffe,	// (0x000165bb) uni_indicator_pane_ParamLimits

0x8ffe,	// (0x000165bb) uni_indicator_pane

0x4ab2,	// (0x0001206f) bg_list_pane_ParamLimits

0x4ab2,	// (0x0001206f) bg_list_pane

0x8c1a,	// (0x000161d7) find_pane

0x4a49,	// (0x00012006) listscroll_app_pane_ParamLimits

0x4a49,	// (0x00012006) listscroll_app_pane

0x4ad2,	// (0x0001208f) listscroll_form_pane

0x5f56,	// (0x00013513) listscroll_gen_pane_ParamLimits

0x5f56,	// (0x00013513) listscroll_gen_pane

0x5f6a,	// (0x00013527) listscroll_set_pane

0x86de,	// (0x00015c9b) main_idle_act_pane

0x486a,	// (0x00011e27) main_idle_trad_pane

0x486a,	// (0x00011e27) main_list_empty_pane

0x4a49,	// (0x00012006) main_midp_pane

0x4af4,	// (0x000120b1) main_pane_g1_ParamLimits

0x4af4,	// (0x000120b1) main_pane_g1

0x5f80,	// (0x0001353d) popup_ai_message_window_ParamLimits

0x5f80,	// (0x0001353d) popup_ai_message_window

0x6024,	// (0x000135e1) popup_fep_china_uni_window_ParamLimits

0x6024,	// (0x000135e1) popup_fep_china_uni_window

0x607e,	// (0x0001363b) popup_fep_japan_candidate_window_ParamLimits

0x607e,	// (0x0001363b) popup_fep_japan_candidate_window

0x609c,	// (0x00013659) popup_fep_japan_predictive_window_ParamLimits

0x609c,	// (0x00013659) popup_fep_japan_predictive_window

0x60cc,	// (0x00013689) popup_find_window

0x60d9,	// (0x00013696) popup_grid_graphic_window_ParamLimits

0x60d9,	// (0x00013696) popup_grid_graphic_window

0x6103,	// (0x000136c0) popup_large_graphic_colour_window

0x6129,	// (0x000136e6) popup_menu_window_ParamLimits

0x6129,	// (0x000136e6) popup_menu_window

0x62e5,	// (0x000138a2) popup_note_image_window

0x62d1,	// (0x0001388e) popup_note_wait_window_ParamLimits

0x62d1,	// (0x0001388e) popup_note_wait_window

0x62d1,	// (0x0001388e) popup_note_window_ParamLimits

0x62d1,	// (0x0001388e) popup_note_window

0x633b,	// (0x000138f8) popup_query_code_window_ParamLimits

0x633b,	// (0x000138f8) popup_query_code_window

0x634f,	// (0x0001390c) popup_query_data_code_window_ParamLimits

0x634f,	// (0x0001390c) popup_query_data_code_window

0x636c,	// (0x00013929) popup_query_data_window_ParamLimits

0x636c,	// (0x00013929) popup_query_data_window

0x6388,	// (0x00013945) popup_query_sat_info_window_ParamLimits

0x6388,	// (0x00013945) popup_query_sat_info_window

0x63c1,	// (0x0001397e) popup_snote_single_graphic_window_ParamLimits

0x63c1,	// (0x0001397e) popup_snote_single_graphic_window

0x63c1,	// (0x0001397e) popup_snote_single_text_window_ParamLimits

0x63c1,	// (0x0001397e) popup_snote_single_text_window

0x63d6,	// (0x00013993) popup_sub_window_general

0x6506,	// (0x00013ac3) popup_window_general_ParamLimits

0x6506,	// (0x00013ac3) popup_window_general

0x8c22,	// (0x000161df) power_save_pane

0x5ddc,	// (0x00013399) control_pane_g1_ParamLimits

0x5ddc,	// (0x00013399) control_pane_g1

0x5e03,	// (0x000133c0) control_pane_g2_ParamLimits

0x5e03,	// (0x000133c0) control_pane_g2

0x4a75,	// (0x00012032) control_pane_g3_ParamLimits

0x4a75,	// (0x00012032) control_pane_g3

0x0007,

0xf754,	// (0x0001cd11) control_pane_g_ParamLimits

0xf754,	// (0x0001cd11) control_pane_g

0x5e4d,	// (0x0001340a) control_pane_t1_ParamLimits

0x5e4d,	// (0x0001340a) control_pane_t1

0x5ea3,	// (0x00013460) control_pane_t2_ParamLimits

0x5ea3,	// (0x00013460) control_pane_t2

0x0002,

0xf765,	// (0x0001cd22) control_pane_t_ParamLimits

0xf765,	// (0x0001cd22) control_pane_t

0x8b6c,	// (0x00016129) navi_navi_volume_pane_cp1

0x8b74,	// (0x00016131) status_small_icon_pane

0x4a15,	// (0x00011fd2) status_small_pane_g1_ParamLimits

0x4a15,	// (0x00011fd2) status_small_pane_g1

0x8b7c,	// (0x00016139) status_small_pane_g2_ParamLimits

0x8b7c,	// (0x00016139) status_small_pane_g2

0x4a55,	// (0x00012012) status_small_pane_g3_ParamLimits

0x4a55,	// (0x00012012) status_small_pane_g3

0x8b88,	// (0x00016145) status_small_pane_g4_ParamLimits

0x8b88,	// (0x00016145) status_small_pane_g4

0x8b94,	// (0x00016151) status_small_pane_g5_ParamLimits

0x8b94,	// (0x00016151) status_small_pane_g5

0x8ba2,	// (0x0001615f) status_small_pane_g6_ParamLimits

0x8ba2,	// (0x0001615f) status_small_pane_g6

0x0007,

0xf743,	// (0x0001cd00) status_small_pane_g_ParamLimits

0xf743,	// (0x0001cd00) status_small_pane_g

0x8bbd,	// (0x0001617a) status_small_pane_t1

0x8bdf,	// (0x0001619c) status_small_wait_pane_ParamLimits

0x8bdf,	// (0x0001619c) status_small_wait_pane

0x8887,	// (0x00015e44) aid_levels_signal_ParamLimits

0x8887,	// (0x00015e44) aid_levels_signal

0x8899,	// (0x00015e56) signal_pane_g1_ParamLimits

0x8899,	// (0x00015e56) signal_pane_g1

0x88ae,	// (0x00015e6b) signal_pane_g2_ParamLimits

0x88ae,	// (0x00015e6b) signal_pane_g2

0x0003,

0xf6d4,	// (0x0001cc91) signal_pane_g_ParamLimits

0xf6d4,	// (0x0001cc91) signal_pane_g

0x42f5,	// (0x000118b2) context_pane_g1

0x7b7c,	// (0x00015139) title_pane_g1

0x7ba6,	// (0x00015163) title_pane_t1

0x373e,	// (0x00010cfb) title_pane_t2

0x3764,	// (0x00010d21) title_pane_t3

0x0002,

0xf532,	// (0x0001caef) title_pane_t

0x9016,	// (0x000165d3) aid_levels_battery_ParamLimits

0x9016,	// (0x000165d3) aid_levels_battery

0x902a,	// (0x000165e7) battery_pane_g1_ParamLimits

0x902a,	// (0x000165e7) battery_pane_g1

0x9040,	// (0x000165fd) battery_pane_g2_ParamLimits

0x9040,	// (0x000165fd) battery_pane_g2

0x0001,

0xf777,	// (0x0001cd34) battery_pane_g_ParamLimits

0xf777,	// (0x0001cd34) battery_pane_g

0xa3b3,	// (0x00017970) uni_indicator_pane_g1

0xa3c6,	// (0x00017983) uni_indicator_pane_g2

0xa3d8,	// (0x00017995) uni_indicator_pane_g3

0x0005,

0xf8ed,	// (0x0001ceaa) uni_indicator_pane_g

0x4701,	// (0x00011cbe) navi_icon_pane_ParamLimits

0x4701,	// (0x00011cbe) navi_icon_pane

0x4656,	// (0x00011c13) navi_midp_pane

0x471d,	// (0x00011cda) navi_navi_pane

0x4727,	// (0x00011ce4) navi_text_pane_ParamLimits

0x4727,	// (0x00011ce4) navi_text_pane

0x36de,	// (0x00010c9b) status_small_wait_pane_g1

0x39cf,	// (0x00010f8c) status_small_wait_pane_g2

0x0001,

0xf8e8,	// (0x0001cea5) status_small_wait_pane_g

0xa0da,	// (0x00017697) navi_navi_icon_text_pane

0xa0e2,	// (0x0001769f) navi_navi_pane_g1_ParamLimits

0xa0e2,	// (0x0001769f) navi_navi_pane_g1

0xa0f4,	// (0x000176b1) navi_navi_pane_g2_ParamLimits

0xa0f4,	// (0x000176b1) navi_navi_pane_g2

0x0001,

0xf8b6,	// (0x0001ce73) navi_navi_pane_g_ParamLimits

0xf8b6,	// (0x0001ce73) navi_navi_pane_g

0xa106,	// (0x000176c3) navi_navi_tabs_pane

0xa10f,	// (0x000176cc) navi_navi_text_pane

0xa0da,	// (0x00017697) navi_navi_volume_pane

0xa0b6,	// (0x00017673) navi_text_pane_t1

0xa0aa,	// (0x00017667) navi_icon_pane_g1

0x9ffd,	// (0x000175ba) navi_navi_text_pane_t1

0x6822,	// (0x00013ddf) navi_navi_volume_pane_g1

0x682a,	// (0x00013de7) volume_small_pane

0x9f63,	// (0x00017520) navi_navi_icon_text_pane_g1

0x9f6b,	// (0x00017528) navi_navi_icon_text_pane_t1

0x471d,	// (0x00011cda) navi_tabs_2_long_pane

0x471d,	// (0x00011cda) navi_tabs_2_pane

0x471d,	// (0x00011cda) navi_tabs_3_long_pane

0x471d,	// (0x00011cda) navi_tabs_3_pane

0x471d,	// (0x00011cda) navi_tabs_4_pane

0x6802,	// (0x00013dbf) tabs_2_active_pane_ParamLimits

0x6802,	// (0x00013dbf) tabs_2_active_pane

0x6812,	// (0x00013dcf) tabs_2_passive_pane_ParamLimits

0x6812,	// (0x00013dcf) tabs_2_passive_pane

0x67d0,	// (0x00013d8d) tabs_3_active_pane_ParamLimits

0x67d0,	// (0x00013d8d) tabs_3_active_pane

0x67e0,	// (0x00013d9d) tabs_3_passive_pane_ParamLimits

0x67e0,	// (0x00013d9d) tabs_3_passive_pane

0x67f1,	// (0x00013dae) tabs_3_passive_pane_cp_ParamLimits

0x67f1,	// (0x00013dae) tabs_3_passive_pane_cp

0x678c,	// (0x00013d49) tabs_4_active_pane_ParamLimits

0x678c,	// (0x00013d49) tabs_4_active_pane

0x679d,	// (0x00013d5a) tabs_4_passive_pane_ParamLimits

0x679d,	// (0x00013d5a) tabs_4_passive_pane

0x67ae,	// (0x00013d6b) tabs_4_passive_pane_cp_ParamLimits

0x67ae,	// (0x00013d6b) tabs_4_passive_pane_cp

0x67bf,	// (0x00013d7c) tabs_4_passive_pane_cp2_ParamLimits

0x67bf,	// (0x00013d7c) tabs_4_passive_pane_cp2

0x6768,	// (0x00013d25) tabs_2_long_active_pane_ParamLimits

0x6768,	// (0x00013d25) tabs_2_long_active_pane

0x677a,	// (0x00013d37) tabs_2_long_passive_pane_ParamLimits

0x677a,	// (0x00013d37) tabs_2_long_passive_pane

0x6723,	// (0x00013ce0) tabs_3_long_active_pane_ParamLimits

0x6723,	// (0x00013ce0) tabs_3_long_active_pane

0x673c,	// (0x00013cf9) tabs_3_long_passive_pane_ParamLimits

0x673c,	// (0x00013cf9) tabs_3_long_passive_pane

0x674f,	// (0x00013d0c) tabs_3_long_passive_pane_cp_ParamLimits

0x674f,	// (0x00013d0c) tabs_3_long_passive_pane_cp

0x66c9,	// (0x00013c86) volume_small_pane_g1

0x66d2,	// (0x00013c8f) volume_small_pane_g2

0x66db,	// (0x00013c98) volume_small_pane_g3

0x66e4,	// (0x00013ca1) volume_small_pane_g4

0x66ed,	// (0x00013caa) volume_small_pane_g5

0x66f6,	// (0x00013cb3) volume_small_pane_g6

0x66ff,	// (0x00013cbc) volume_small_pane_g7

0x6708,	// (0x00013cc5) volume_small_pane_g8

0x6711,	// (0x00013cce) volume_small_pane_g9

0x671a,	// (0x00013cd7) volume_small_pane_g10

0x0009,

0xf882,	// (0x0001ce3f) volume_small_pane_g

0x3784,	// (0x00010d41) bg_active_tab_pane_cp2_ParamLimits

0x3784,	// (0x00010d41) bg_active_tab_pane_cp2

0x7c0e,	// (0x000151cb) tabs_3_active_pane_g1

0x7c16,	// (0x000151d3) tabs_3_active_pane_t1

0x3784,	// (0x00010d41) bg_passive_tab_pane_cp2_ParamLimits

0x3784,	// (0x00010d41) bg_passive_tab_pane_cp2

0x7c0e,	// (0x000151cb) tabs_3_passive_pane_g1

0x7c16,	// (0x000151d3) tabs_3_passive_pane_t1

0x3784,	// (0x00010d41) bg_active_tab_pane_cp3_ParamLimits

0x3784,	// (0x00010d41) bg_active_tab_pane_cp3

0x7c28,	// (0x000151e5) tabs_4_active_pane_g1

0x7c30,	// (0x000151ed) tabs_4_active_pane_t1

0x3784,	// (0x00010d41) bg_passive_tab_pane_cp3_ParamLimits

0x3784,	// (0x00010d41) bg_passive_tab_pane_cp3

0x7c28,	// (0x000151e5) tabs_4_1_passive_pane_g1

0x7c30,	// (0x000151ed) tabs_4_1_passive_pane_t1

0x4a49,	// (0x00012006) list_highlight_pane_cp2

0xa62d,	// (0x00017bea) list_set_pane_ParamLimits

0xa62d,	// (0x00017bea) list_set_pane

0xa6cf,	// (0x00017c8c) main_pane_set_t1_ParamLimits

0xa6cf,	// (0x00017c8c) main_pane_set_t1

0xa6ef,	// (0x00017cac) main_pane_set_t2_ParamLimits

0xa6ef,	// (0x00017cac) main_pane_set_t2

0xa703,	// (0x00017cc0) main_pane_set_t3_ParamLimits

0xa703,	// (0x00017cc0) main_pane_set_t3

0xa715,	// (0x00017cd2) main_pane_set_t4_ParamLimits

0xa715,	// (0x00017cd2) main_pane_set_t4

0x0003,

0xf952,	// (0x0001cf0f) main_pane_set_t_ParamLimits

0xf952,	// (0x0001cf0f) main_pane_set_t

0xa727,	// (0x00017ce4) setting_code_pane

0xa733,	// (0x00017cf0) setting_slider_graphic_pane

0xa733,	// (0x00017cf0) setting_slider_pane

0xa733,	// (0x00017cf0) setting_text_pane

0xa733,	// (0x00017cf0) setting_volume_pane

0x58cd,	// (0x00012e8a) volume_set_pane

0x3784,	// (0x00010d41) bg_set_opt_pane_cp

0x58d5,	// (0x00012e92) setting_slider_pane_t1

0x58ee,	// (0x00012eab) setting_slider_pane_t2

0x5908,	// (0x00012ec5) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001caf6) setting_slider_pane_t

0x5920,	// (0x00012edd) slider_set_pane

0x3708,	// (0x00010cc5) bg_set_opt_pane_cp2

0x3792,	// (0x00010d4f) setting_slider_graphic_pane_g1

0x5936,	// (0x00012ef3) setting_slider_graphic_pane_t1

0x5946,	// (0x00012f03) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001cafd) setting_slider_graphic_pane_t

0x5956,	// (0x00012f13) slider_set_pane_cp

0x3708,	// (0x00010cc5) input_focus_pane_cp1

0xa5ec,	// (0x00017ba9) list_set_text_pane

0x36de,	// (0x00010c9b) setting_text_pane_g1

0x3708,	// (0x00010cc5) input_focus_pane_cp2

0x36de,	// (0x00010c9b) setting_code_pane_g1

0x379b,	// (0x00010d58) setting_code_pane_t1

0x37a9,	// (0x00010d66) set_text_pane_t1_ParamLimits

0x37a9,	// (0x00010d66) set_text_pane_t1

0x3c6c,	// (0x00011229) set_opt_bg_pane_g1

0x3c74,	// (0x00011231) set_opt_bg_pane_g2

0xa5c6,	// (0x00017b83) set_opt_bg_pane_g3

0x3c84,	// (0x00011241) set_opt_bg_pane_g4

0x3c8c,	// (0x00011249) set_opt_bg_pane_g5

0x3c94,	// (0x00011251) set_opt_bg_pane_g6

0xa5d0,	// (0x00017b8d) set_opt_bg_pane_g7

0xa5d8,	// (0x00017b95) set_opt_bg_pane_g8

0xa5e2,	// (0x00017b9f) set_opt_bg_pane_g9

0x0008,

0xf93f,	// (0x0001cefc) set_opt_bg_pane_g

0xa5b9,	// (0x00017b76) slider_set_pane_g1

0x6897,	// (0x00013e54) slider_set_pane_g2

0x0006,

0xf930,	// (0x0001ceed) slider_set_pane_g

0x6833,	// (0x00013df0) volume_set_pane_g1

0x683b,	// (0x00013df8) volume_set_pane_g2

0x6843,	// (0x00013e00) volume_set_pane_g3

0x684b,	// (0x00013e08) volume_set_pane_g4

0x6853,	// (0x00013e10) volume_set_pane_g5

0x685b,	// (0x00013e18) volume_set_pane_g6

0x6863,	// (0x00013e20) volume_set_pane_g7

0x686b,	// (0x00013e28) volume_set_pane_g8

0x6873,	// (0x00013e30) volume_set_pane_g9

0x687b,	// (0x00013e38) volume_set_pane_g10

0x0009,

0xf908,	// (0x0001cec5) volume_set_pane_g

0x7c42,	// (0x000151ff) indicator_pane_ParamLimits

0x7c42,	// (0x000151ff) indicator_pane

0x7c4e,	// (0x0001520b) main_idle_pane_g2_ParamLimits

0x7c4e,	// (0x0001520b) main_idle_pane_g2

0x7c76,	// (0x00015233) main_pane_idle_g1_ParamLimits

0x7c76,	// (0x00015233) main_pane_idle_g1

0x37c3,	// (0x00010d80) popup_clock_digital_analogue_window_ParamLimits

0x37c3,	// (0x00010d80) popup_clock_digital_analogue_window

0x7c83,	// (0x00015240) soft_indicator_pane_ParamLimits

0x7c83,	// (0x00015240) soft_indicator_pane

0x7c8f,	// (0x0001524c) wallpaper_pane_ParamLimits

0x7c8f,	// (0x0001524c) wallpaper_pane

0x36de,	// (0x00010c9b) wallpaper_pane_g1

0x7c9b,	// (0x00015258) indicator_pane_g1_ParamLimits

0x7c9b,	// (0x00015258) indicator_pane_g1

0xaadd,	// (0x0001809a) navi_navi_icon_text_pane_srt_g1

0x37f1,	// (0x00010dae) soft_indicator_pane_t1

0x380b,	// (0x00010dc8) aid_ps_area_pane

0x7ca7,	// (0x00015264) aid_ps_clock_pane

0x381c,	// (0x00010dd9) aid_ps_indicator_pane

0x3828,	// (0x00010de5) indicator_ps_pane_ParamLimits

0x3828,	// (0x00010de5) indicator_ps_pane

0x3837,	// (0x00010df4) power_save_pane_g1_ParamLimits

0x3837,	// (0x00010df4) power_save_pane_g1

0x3843,	// (0x00010e00) power_save_pane_g2_ParamLimits

0x3843,	// (0x00010e00) power_save_pane_g2

0x54e2,	// (0x00012a9f) aid_navinavi_width_pane

0x380b,	// (0x00010dc8) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001cb02) power_save_pane_g_ParamLimits

0xf545,	// (0x0001cb02) power_save_pane_g

0x3851,	// (0x00010e0e) power_save_pane_t1_ParamLimits

0x3851,	// (0x00010e0e) power_save_pane_t1

0x7ca7,	// (0x00015264) aid_ps_clock_pane_ParamLimits

0x381c,	// (0x00010dd9) aid_ps_indicator_pane_ParamLimits

0x3863,	// (0x00010e20) power_save_pane_t4_ParamLimits

0x3863,	// (0x00010e20) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001cb07) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001cb07) power_save_pane_t

0x388d,	// (0x00010e4a) power_save_t3_ParamLimits

0x388d,	// (0x00010e4a) power_save_t3

0x3878,	// (0x00010e35) power_save_t2_ParamLimits

0x3878,	// (0x00010e35) power_save_t2

0x38a2,	// (0x00010e5f) indicator_ps_pane_g1

0x7cb5,	// (0x00015272) ai_gene_pane_ParamLimits

0x7cb5,	// (0x00015272) ai_gene_pane

0x7cc1,	// (0x0001527e) ai_links_pane_ParamLimits

0x7cc1,	// (0x0001527e) ai_links_pane

0x7ccd,	// (0x0001528a) indicator_pane_cp1_ParamLimits

0x7ccd,	// (0x0001528a) indicator_pane_cp1

0x7cd9,	// (0x00015296) main_pane_idle_g1_cp_ParamLimits

0x7cd9,	// (0x00015296) main_pane_idle_g1_cp

0x7ce5,	// (0x000152a2) popup_ai_links_title_window

0x7cee,	// (0x000152ab) soft_indicator_pane_cp1_ParamLimits

0x7cee,	// (0x000152ab) soft_indicator_pane_cp1

0xa3a1,	// (0x0001795e) ai_links_pane_g1

0xa3aa,	// (0x00017967) grid_ai_links_pane

0xa384,	// (0x00017941) ai_gene_pane_1

0xa38f,	// (0x0001794c) ai_gene_pane_2

0xa398,	// (0x00017955) list_highlight_pane_cp4

0xa368,	// (0x00017925) cell_ai_link_pane_ParamLimits

0xa368,	// (0x00017925) cell_ai_link_pane

0xa360,	// (0x0001791d) cell_ai_link_pane_g1

0x39cf,	// (0x00010f8c) cell_ai_link_pane_g2

0x0001,

0xf8e3,	// (0x0001cea0) cell_ai_link_pane_g

0x3708,	// (0x00010cc5) grid_highlight_cp2

0x3708,	// (0x00010cc5) bg_popup_sub_pane_cp1

0x38b9,	// (0x00010e76) popup_ai_links_title_window_t1

0xa2b0,	// (0x0001786d) ai_gene_pane_1_g1_ParamLimits

0xa2b0,	// (0x0001786d) ai_gene_pane_1_g1

0xa2bc,	// (0x00017879) ai_gene_pane_1_g2_ParamLimits

0xa2bc,	// (0x00017879) ai_gene_pane_1_g2

0x0001,

0xf8d9,	// (0x0001ce96) ai_gene_pane_1_g_ParamLimits

0xf8d9,	// (0x0001ce96) ai_gene_pane_1_g

0xa2c9,	// (0x00017886) ai_gene_pane_1_t1_ParamLimits

0xa2c9,	// (0x00017886) ai_gene_pane_1_t1

0xa2fd,	// (0x000178ba) grid_ai_soft_ind_pane

0xa29b,	// (0x00017858) ai_gene_pane_2_t1_ParamLimits

0xa29b,	// (0x00017858) ai_gene_pane_2_t1

0x7cfa,	// (0x000152b7) main_pane_empty_t1_ParamLimits

0x7cfa,	// (0x000152b7) main_pane_empty_t1

0x7d12,	// (0x000152cf) main_pane_empty_t2_ParamLimits

0x7d12,	// (0x000152cf) main_pane_empty_t2

0x7d27,	// (0x000152e4) main_pane_empty_t3_ParamLimits

0x7d27,	// (0x000152e4) main_pane_empty_t3

0x7d39,	// (0x000152f6) main_pane_empty_t4_ParamLimits

0x7d39,	// (0x000152f6) main_pane_empty_t4

0x7d4b,	// (0x00015308) main_pane_empty_t5_ParamLimits

0x7d4b,	// (0x00015308) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001cb0c) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001cb0c) main_pane_empty_t

0x3cf1,	// (0x000112ae) bg_popup_window_pane_ParamLimits

0x3cf1,	// (0x000112ae) bg_popup_window_pane

0xa00b,	// (0x000175c8) find_popup_pane_cp2_ParamLimits

0xa00b,	// (0x000175c8) find_popup_pane_cp2

0xa017,	// (0x000175d4) heading_pane_ParamLimits

0xa017,	// (0x000175d4) heading_pane

0x3708,	// (0x00010cc5) bg_popup_sub_pane

0x9f85,	// (0x00017542) bg_popup_window_pane_g1_ParamLimits

0x9f85,	// (0x00017542) bg_popup_window_pane_g1

0x9f91,	// (0x0001754e) bg_popup_window_pane_g2_ParamLimits

0x9f91,	// (0x0001754e) bg_popup_window_pane_g2

0x9f9d,	// (0x0001755a) bg_popup_window_pane_g3_ParamLimits

0x9f9d,	// (0x0001755a) bg_popup_window_pane_g3

0x9fa9,	// (0x00017566) bg_popup_window_pane_g4_ParamLimits

0x9fa9,	// (0x00017566) bg_popup_window_pane_g4

0x9fb5,	// (0x00017572) bg_popup_window_pane_g5_ParamLimits

0x9fb5,	// (0x00017572) bg_popup_window_pane_g5

0x9fc1,	// (0x0001757e) bg_popup_window_pane_g6_ParamLimits

0x9fc1,	// (0x0001757e) bg_popup_window_pane_g6

0x9fcd,	// (0x0001758a) bg_popup_window_pane_g7_ParamLimits

0x9fcd,	// (0x0001758a) bg_popup_window_pane_g7

0x9fd9,	// (0x00017596) bg_popup_window_pane_g8_ParamLimits

0x9fd9,	// (0x00017596) bg_popup_window_pane_g8

0x9fe5,	// (0x000175a2) bg_popup_window_pane_g9_ParamLimits

0x9fe5,	// (0x000175a2) bg_popup_window_pane_g9

0x9ff1,	// (0x000175ae) bg_popup_window_pane_g10_ParamLimits

0x9ff1,	// (0x000175ae) bg_popup_window_pane_g10

0x0009,

0xf8a1,	// (0x0001ce5e) bg_popup_window_pane_g_ParamLimits

0xf8a1,	// (0x0001ce5e) bg_popup_window_pane_g

0x9f1a,	// (0x000174d7) bg_popup_heading_pane_ParamLimits

0x9f1a,	// (0x000174d7) bg_popup_heading_pane

0x691f,	// (0x00013edc) tabs_4_passive_pane_cp_srt_ParamLimits

0x691f,	// (0x00013edc) tabs_4_passive_pane_cp_srt

0x6931,	// (0x00013eee) tabs_4_passive_pane_srt_ParamLimits

0x9f2e,	// (0x000174eb) heading_pane_g2

0x6931,	// (0x00013eee) tabs_4_passive_pane_srt

0x4a49,	// (0x00012006) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4a49,	// (0x00012006) bg_passive_tab_pane_cp3_srt

0x9f36,	// (0x000174f3) heading_pane_t1_ParamLimits

0x9f36,	// (0x000174f3) heading_pane_t1

0x9f4d,	// (0x0001750a) heading_pane_t2_ParamLimits

0x9f4d,	// (0x0001750a) heading_pane_t2

0x0001,

0xf89c,	// (0x0001ce59) heading_pane_t_ParamLimits

0xf89c,	// (0x0001ce59) heading_pane_t

0x9a57,	// (0x00017014) bg_popup_heading_pane_g1

0x9b06,	// (0x000170c3) bg_popup_heading_pane_g2

0x9b10,	// (0x000170cd) bg_popup_heading_pane_g3

0x9b1a,	// (0x000170d7) bg_popup_heading_pane_g4

0x9b24,	// (0x000170e1) bg_popup_heading_pane_g5

0x9b2e,	// (0x000170eb) bg_popup_heading_pane_g6

0x9b36,	// (0x000170f3) bg_popup_heading_pane_g7

0x9b3e,	// (0x000170fb) bg_popup_heading_pane_g8

0x9b48,	// (0x00017105) bg_popup_heading_pane_g9

0x0008,

0xf858,	// (0x0001ce15) bg_popup_heading_pane_g

0x9143,	// (0x00016700) bg_popup_sub_pane_g1

0x9153,	// (0x00016710) bg_popup_sub_pane_g2

0x914b,	// (0x00016708) bg_popup_sub_pane_g3

0x9163,	// (0x00016720) bg_popup_sub_pane_g4

0x915b,	// (0x00016718) bg_popup_sub_pane_g5

0x916b,	// (0x00016728) bg_popup_sub_pane_g6

0x9173,	// (0x00016730) bg_popup_sub_pane_g7

0x9183,	// (0x00016740) bg_popup_sub_pane_g8

0x917b,	// (0x00016738) bg_popup_sub_pane_g9

0x0008,

0xf832,	// (0x0001cdef) bg_popup_sub_pane_g

0x3776,	// (0x00010d33) bg_popup_window_pane_cp5_ParamLimits

0x3776,	// (0x00010d33) bg_popup_window_pane_cp5

0x38d6,	// (0x00010e93) popup_note_window_g1_ParamLimits

0x38d6,	// (0x00010e93) popup_note_window_g1

0x38e2,	// (0x00010e9f) popup_note_window_t1_ParamLimits

0x38e2,	// (0x00010e9f) popup_note_window_t1

0x38f8,	// (0x00010eb5) popup_note_window_t2_ParamLimits

0x38f8,	// (0x00010eb5) popup_note_window_t2

0x390e,	// (0x00010ecb) popup_note_window_t3_ParamLimits

0x390e,	// (0x00010ecb) popup_note_window_t3

0x3924,	// (0x00010ee1) popup_note_window_t4_ParamLimits

0x3924,	// (0x00010ee1) popup_note_window_t4

0x394c,	// (0x00010f09) popup_note_window_t5_ParamLimits

0x394c,	// (0x00010f09) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001cb17) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001cb17) popup_note_window_t

0x3970,	// (0x00010f2d) bg_popup_window_pane_cp6_ParamLimits

0x3970,	// (0x00010f2d) bg_popup_window_pane_cp6

0x99d3,	// (0x00016f90) popup_note_image_window_g1_ParamLimits

0x99d3,	// (0x00016f90) popup_note_image_window_g1

0x99df,	// (0x00016f9c) popup_note_image_window_g2_ParamLimits

0x99df,	// (0x00016f9c) popup_note_image_window_g2

0x0001,

0xf826,	// (0x0001cde3) popup_note_image_window_g_ParamLimits

0xf826,	// (0x0001cde3) popup_note_image_window_g

0x99f8,	// (0x00016fb5) popup_note_image_window_t1_ParamLimits

0x99f8,	// (0x00016fb5) popup_note_image_window_t1

0x9a11,	// (0x00016fce) popup_note_image_window_t2_ParamLimits

0x9a11,	// (0x00016fce) popup_note_image_window_t2

0x9a2a,	// (0x00016fe7) popup_note_image_window_t3_ParamLimits

0x9a2a,	// (0x00016fe7) popup_note_image_window_t3

0x0002,

0xf82b,	// (0x0001cde8) popup_note_image_window_t_ParamLimits

0xf82b,	// (0x0001cde8) popup_note_image_window_t

0x989c,	// (0x00016e59) bg_popup_window_pane_cp7_ParamLimits

0x989c,	// (0x00016e59) bg_popup_window_pane_cp7

0x98cc,	// (0x00016e89) popup_note_wait_window_g1_ParamLimits

0x98cc,	// (0x00016e89) popup_note_wait_window_g1

0x98d8,	// (0x00016e95) popup_note_wait_window_g2_ParamLimits

0x98d8,	// (0x00016e95) popup_note_wait_window_g2

0x0002,

0xf814,	// (0x0001cdd1) popup_note_wait_window_g_ParamLimits

0xf814,	// (0x0001cdd1) popup_note_wait_window_g

0x98f0,	// (0x00016ead) popup_note_wait_window_t1_ParamLimits

0x98f0,	// (0x00016ead) popup_note_wait_window_t1

0x9917,	// (0x00016ed4) popup_note_wait_window_t2_ParamLimits

0x9917,	// (0x00016ed4) popup_note_wait_window_t2

0x9934,	// (0x00016ef1) popup_note_wait_window_t3_ParamLimits

0x9934,	// (0x00016ef1) popup_note_wait_window_t3

0x9947,	// (0x00016f04) popup_note_wait_window_t4_ParamLimits

0x9947,	// (0x00016f04) popup_note_wait_window_t4

0x0004,

0xf81b,	// (0x0001cdd8) popup_note_wait_window_t_ParamLimits

0xf81b,	// (0x0001cdd8) popup_note_wait_window_t

0x996c,	// (0x00016f29) wait_bar_pane_ParamLimits

0x996c,	// (0x00016f29) wait_bar_pane

0x3708,	// (0x00010cc5) wait_anim_pane

0x3708,	// (0x00010cc5) wait_border_pane

0x36de,	// (0x00010c9b) wait_anim_pane_g1

0x36de,	// (0x00010c9b) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x0001cc8c) wait_anim_pane_g

0x9848,	// (0x00016e05) wait_border_pane_g1

0x9853,	// (0x00016e10) wait_border_pane_g2

0x985c,	// (0x00016e19) wait_border_pane_g3

0x0002,

0xf80d,	// (0x0001cdca) wait_border_pane_g

0x96b3,	// (0x00016c70) bg_popup_window_pane_cp16_ParamLimits

0x96b3,	// (0x00016c70) bg_popup_window_pane_cp16

0x97b3,	// (0x00016d70) indicator_popup_pane_cp4_ParamLimits

0x97b3,	// (0x00016d70) indicator_popup_pane_cp4

0x97c7,	// (0x00016d84) popup_query_data_window_t1_ParamLimits

0x97c7,	// (0x00016d84) popup_query_data_window_t1

0x97d9,	// (0x00016d96) popup_query_data_window_t2_ParamLimits

0x97d9,	// (0x00016d96) popup_query_data_window_t2

0x97f2,	// (0x00016daf) popup_query_data_window_t3_ParamLimits

0x97f2,	// (0x00016daf) popup_query_data_window_t3

0x0002,

0xf806,	// (0x0001cdc3) popup_query_data_window_t_ParamLimits

0xf806,	// (0x0001cdc3) popup_query_data_window_t

0x980c,	// (0x00016dc9) query_popup_data_pane_ParamLimits

0x980c,	// (0x00016dc9) query_popup_data_pane

0x9820,	// (0x00016ddd) query_popup_data_pane_cp1_ParamLimits

0x9820,	// (0x00016ddd) query_popup_data_pane_cp1

0x96b3,	// (0x00016c70) bg_popup_window_pane_cp10_ParamLimits

0x96b3,	// (0x00016c70) bg_popup_window_pane_cp10

0x96e5,	// (0x00016ca2) indicator_popup_pane_ParamLimits

0x96e5,	// (0x00016ca2) indicator_popup_pane

0x9707,	// (0x00016cc4) popup_query_code_window_t1_ParamLimits

0x9707,	// (0x00016cc4) popup_query_code_window_t1

0x9721,	// (0x00016cde) popup_query_code_window_t2_ParamLimits

0x9721,	// (0x00016cde) popup_query_code_window_t2

0x976a,	// (0x00016d27) popup_query_code_window_t3_ParamLimits

0x976a,	// (0x00016d27) popup_query_code_window_t3

0x0002,

0xf7ff,	// (0x0001cdbc) popup_query_code_window_t_ParamLimits

0xf7ff,	// (0x0001cdbc) popup_query_code_window_t

0x9799,	// (0x00016d56) query_popup_pane_ParamLimits

0x9799,	// (0x00016d56) query_popup_pane

0x3970,	// (0x00010f2d) bg_popup_window_pane_cp15_ParamLimits

0x3970,	// (0x00010f2d) bg_popup_window_pane_cp15

0x7d85,	// (0x00015342) indicator_popup_pane_cp1_ParamLimits

0x7d85,	// (0x00015342) indicator_popup_pane_cp1

0x7d98,	// (0x00015355) indicator_popup_pane_cp2_ParamLimits

0x7d98,	// (0x00015355) indicator_popup_pane_cp2

0x7dab,	// (0x00015368) popup_query_data_code_window_g1_ParamLimits

0x7dab,	// (0x00015368) popup_query_data_code_window_g1

0x398e,	// (0x00010f4b) popup_query_data_code_window_t1_ParamLimits

0x398e,	// (0x00010f4b) popup_query_data_code_window_t1

0x39a0,	// (0x00010f5d) popup_query_data_code_window_t2_ParamLimits

0x39a0,	// (0x00010f5d) popup_query_data_code_window_t2

0x7dbe,	// (0x0001537b) popup_query_data_code_window_t3_ParamLimits

0x7dbe,	// (0x0001537b) popup_query_data_code_window_t3

0x7dd4,	// (0x00015391) popup_query_data_code_window_t4_ParamLimits

0x7dd4,	// (0x00015391) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001cb22) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001cb22) popup_query_data_code_window_t

0x65da,	// (0x00013b97) list_single_midp_graphic_pane_g3

0x7dec,	// (0x000153a9) query_popup_data_pane_cp2_ParamLimits

0x7dff,	// (0x000153bc) query_popup_pane_cp2_ParamLimits

0x7dff,	// (0x000153bc) query_popup_pane_cp2

0x3708,	// (0x00010cc5) bg_popup_window_pane_cp11

0x9697,	// (0x00016c54) heading_pane_cp5

0x969f,	// (0x00016c5c) listscroll_popup_info_pane

0x3708,	// (0x00010cc5) input_focus_pane_cp3

0x39b2,	// (0x00010f6f) query_popup_pane_t1

0x39c0,	// (0x00010f7d) list_popup_info_pane_ParamLimits

0x39c0,	// (0x00010f7d) list_popup_info_pane

0x39cf,	// (0x00010f8c) listscroll_popup_info_pane_g1

0x39d7,	// (0x00010f94) scroll_pane_cp7

0x7e12,	// (0x000153cf) popup_info_list_pane_t1_ParamLimits

0x7e12,	// (0x000153cf) popup_info_list_pane_t1

0x7e2c,	// (0x000153e9) popup_info_list_pane_t2_ParamLimits

0x7e2c,	// (0x000153e9) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001cb2b) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001cb2b) popup_info_list_pane_t

0x3708,	// (0x00010cc5) bg_popup_window_pane_cp12

0xaaf7,	// (0x000180b4) find_popup_pane

0x3784,	// (0x00010d41) bg_popup_window_pane_cp3

0x39e1,	// (0x00010f9e) heading_pane_cp3

0x39f0,	// (0x00010fad) listscroll_popup_graphic_pane

0x3708,	// (0x00010cc5) bg_popup_window_pane_cp4

0x7e96,	// (0x00015453) heading_pane_cp4

0x3a00,	// (0x00010fbd) listscroll_popup_colour_pane

0x7ea0,	// (0x0001545d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7ea0,	// (0x0001545d) cell_large_graphic_colour_none_popup_pane

0x7eb4,	// (0x00015471) grid_large_graphic_colour_popup_pane_ParamLimits

0x7eb4,	// (0x00015471) grid_large_graphic_colour_popup_pane

0x7ed8,	// (0x00015495) listscroll_popup_colour_pane_g1_ParamLimits

0x7ed8,	// (0x00015495) listscroll_popup_colour_pane_g1

0x7eef,	// (0x000154ac) listscroll_popup_colour_pane_g2_ParamLimits

0x7eef,	// (0x000154ac) listscroll_popup_colour_pane_g2

0x7f06,	// (0x000154c3) listscroll_popup_colour_pane_g3_ParamLimits

0x7f06,	// (0x000154c3) listscroll_popup_colour_pane_g3

0x7f16,	// (0x000154d3) listscroll_popup_colour_pane_g4_ParamLimits

0x7f16,	// (0x000154d3) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001cb30) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001cb30) listscroll_popup_colour_pane_g

0x3a08,	// (0x00010fc5) scroll_pane_cp6_ParamLimits

0x3a08,	// (0x00010fc5) scroll_pane_cp6

0x7f26,	// (0x000154e3) cell_large_graphic_colour_popup_pane_ParamLimits

0x7f26,	// (0x000154e3) cell_large_graphic_colour_popup_pane

0x7f45,	// (0x00015502) cell_large_graphic_colour_none_popup_pane_t1

0x3708,	// (0x00010cc5) grid_highlight_pane_cp5

0x3a1a,	// (0x00010fd7) cell_large_graphic_colour_popup_pane_g1

0x3a22,	// (0x00010fdf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001cb39) cell_large_graphic_colour_popup_pane_g

0x3a2a,	// (0x00010fe7) cell_large_graphic_colour_popup_pane_g2_copy1

0x3a33,	// (0x00010ff0) grid_highlight_pane_cp4

0x3a3b,	// (0x00010ff8) bg_popup_window_pane_cp8_ParamLimits

0x3a3b,	// (0x00010ff8) bg_popup_window_pane_cp8

0x7f54,	// (0x00015511) popup_snote_single_text_window_g1_ParamLimits

0x7f54,	// (0x00015511) popup_snote_single_text_window_g1

0x7f66,	// (0x00015523) popup_snote_single_text_window_t1_ParamLimits

0x7f66,	// (0x00015523) popup_snote_single_text_window_t1

0x7f79,	// (0x00015536) popup_snote_single_text_window_t2_ParamLimits

0x7f79,	// (0x00015536) popup_snote_single_text_window_t2

0x7f8c,	// (0x00015549) popup_snote_single_text_window_t3_ParamLimits

0x7f8c,	// (0x00015549) popup_snote_single_text_window_t3

0x7fc5,	// (0x00015582) popup_snote_single_text_window_t4_ParamLimits

0x7fc5,	// (0x00015582) popup_snote_single_text_window_t4

0x7ff9,	// (0x000155b6) popup_snote_single_text_window_t5_ParamLimits

0x7ff9,	// (0x000155b6) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001cb3e) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001cb3e) popup_snote_single_text_window_t

0x3a56,	// (0x00011013) bg_popup_window_pane_cp9_ParamLimits

0x3a56,	// (0x00011013) bg_popup_window_pane_cp9

0x7f54,	// (0x00015511) popup_snote_single_graphic_window_g1_ParamLimits

0x7f54,	// (0x00015511) popup_snote_single_graphic_window_g1

0x3a64,	// (0x00011021) popup_snote_single_graphic_window_g2_ParamLimits

0x3a64,	// (0x00011021) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001cb49) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001cb49) popup_snote_single_graphic_window_g

0x3a70,	// (0x0001102d) popup_snote_single_graphic_window_t1_ParamLimits

0x3a70,	// (0x0001102d) popup_snote_single_graphic_window_t1

0x3a83,	// (0x00011040) popup_snote_single_graphic_window_t2_ParamLimits

0x3a83,	// (0x00011040) popup_snote_single_graphic_window_t2

0x8028,	// (0x000155e5) popup_snote_single_graphic_window_t3_ParamLimits

0x8028,	// (0x000155e5) popup_snote_single_graphic_window_t3

0x8061,	// (0x0001561e) popup_snote_single_graphic_window_t4_ParamLimits

0x8061,	// (0x0001561e) popup_snote_single_graphic_window_t4

0x8095,	// (0x00015652) popup_snote_single_graphic_window_t5_ParamLimits

0x8095,	// (0x00015652) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001cb4e) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001cb4e) popup_snote_single_graphic_window_t

0xaa39,	// (0x00017ff6) grid_graphic_popup_pane_ParamLimits

0xaa39,	// (0x00017ff6) grid_graphic_popup_pane

0xaa63,	// (0x00018020) listscroll_popup_graphic_pane_g1_ParamLimits

0xaa63,	// (0x00018020) listscroll_popup_graphic_pane_g1

0xaa77,	// (0x00018034) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa77,	// (0x00018034) listscroll_popup_graphic_pane_g2

0x0001,

0xf97c,	// (0x0001cf39) listscroll_popup_graphic_pane_g_ParamLimits

0xf97c,	// (0x0001cf39) listscroll_popup_graphic_pane_g

0xaa8b,	// (0x00018048) scroll_pane_cp5

0xa9cf,	// (0x00017f8c) cell_graphic_popup_pane_ParamLimits

0xa9cf,	// (0x00017f8c) cell_graphic_popup_pane

0xa9b0,	// (0x00017f6d) cell_graphic_popup_pane_g1

0xa9b8,	// (0x00017f75) cell_graphic_popup_pane_g2

0x3a2a,	// (0x00010fe7) cell_graphic_popup_pane_g3

0x0002,

0xf975,	// (0x0001cf32) cell_graphic_popup_pane_g

0xa9c1,	// (0x00017f7e) cell_graphic_popup_pane_t2

0x3a33,	// (0x00010ff0) grid_highlight_pane_cp3

0x3aa8,	// (0x00011065) list_gen_pane_ParamLimits

0x3aa8,	// (0x00011065) list_gen_pane

0x3ad0,	// (0x0001108d) scroll_pane

0xa908,	// (0x00017ec5) bg_list_pane_g1_ParamLimits

0xa908,	// (0x00017ec5) bg_list_pane_g1

0xa925,	// (0x00017ee2) bg_list_pane_g2_ParamLimits

0xa925,	// (0x00017ee2) bg_list_pane_g2

0xa93a,	// (0x00017ef7) bg_list_pane_g3_ParamLimits

0xa93a,	// (0x00017ef7) bg_list_pane_g3

0xa94e,	// (0x00017f0b) bg_list_pane_g4_ParamLimits

0xa94e,	// (0x00017f0b) bg_list_pane_g4

0xa962,	// (0x00017f1f) bg_list_pane_g5_ParamLimits

0xa962,	// (0x00017f1f) bg_list_pane_g5

0x0004,

0xf96a,	// (0x0001cf27) bg_list_pane_g_ParamLimits

0xf96a,	// (0x0001cf27) bg_list_pane_g

0xa7ec,	// (0x00017da9) list_double2_graphic_large_graphic_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_double2_graphic_large_graphic_pane

0xa7ec,	// (0x00017da9) list_double2_graphic_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_double2_graphic_pane

0xa7ec,	// (0x00017da9) list_double2_large_graphic_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_double2_large_graphic_pane

0xa7ec,	// (0x00017da9) list_double2_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_double2_pane

0xa7ec,	// (0x00017da9) list_double_graphic_heading_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_double_graphic_heading_pane

0xa7ec,	// (0x00017da9) list_double_graphic_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_double_graphic_pane

0xa7ec,	// (0x00017da9) list_double_heading_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_double_heading_pane

0xa7ec,	// (0x00017da9) list_double_large_graphic_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_double_large_graphic_pane

0xa7ec,	// (0x00017da9) list_double_number_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_double_number_pane

0xa7ec,	// (0x00017da9) list_double_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_double_pane

0xa7ec,	// (0x00017da9) list_double_time_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_double_time_pane

0xa7ec,	// (0x00017da9) list_setting_number_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_setting_number_pane

0xa7ec,	// (0x00017da9) list_setting_pane_ParamLimits

0xa7ec,	// (0x00017da9) list_setting_pane

0xa86a,	// (0x00017e27) list_single_2graphic_pane_ParamLimits

0xa86a,	// (0x00017e27) list_single_2graphic_pane

0xa86a,	// (0x00017e27) list_single_graphic_heading_pane_ParamLimits

0xa86a,	// (0x00017e27) list_single_graphic_heading_pane

0xa86a,	// (0x00017e27) list_single_graphic_pane_ParamLimits

0xa86a,	// (0x00017e27) list_single_graphic_pane

0xa86a,	// (0x00017e27) list_single_heading_pane_ParamLimits

0xa86a,	// (0x00017e27) list_single_heading_pane

0xa8e5,	// (0x00017ea2) list_single_large_graphic_pane_ParamLimits

0xa8e5,	// (0x00017ea2) list_single_large_graphic_pane

0xa86a,	// (0x00017e27) list_single_number_heading_pane_ParamLimits

0xa86a,	// (0x00017e27) list_single_number_heading_pane

0xa86a,	// (0x00017e27) list_single_number_pane_ParamLimits

0xa86a,	// (0x00017e27) list_single_number_pane

0xa86a,	// (0x00017e27) list_single_pane_ParamLimits

0xa86a,	// (0x00017e27) list_single_pane

0x3708,	// (0x00010cc5) list_highlight_pane_cp1

0x80da,	// (0x00015697) list_single_pane_g1_ParamLimits

0x80da,	// (0x00015697) list_single_pane_g1

0x80e6,	// (0x000156a3) list_single_pane_g2_ParamLimits

0x80e6,	// (0x000156a3) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001cb60) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001cb60) list_single_pane_g

0xa7a5,	// (0x00017d62) list_single_pane_t1_ParamLimits

0xa7a5,	// (0x00017d62) list_single_pane_t1

0x80da,	// (0x00015697) list_single_number_pane_g1_ParamLimits

0x80da,	// (0x00015697) list_single_number_pane_g1

0x80e6,	// (0x000156a3) list_single_number_pane_g2_ParamLimits

0x80e6,	// (0x000156a3) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001cb60) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001cb60) list_single_number_pane_g

0x80f2,	// (0x000156af) list_single_number_pane_t1_ParamLimits

0x80f2,	// (0x000156af) list_single_number_pane_t1

0xa54b,	// (0x00017b08) list_single_number_pane_t2_ParamLimits

0xa54b,	// (0x00017b08) list_single_number_pane_t2

0x0001,

0xf92b,	// (0x0001cee8) list_single_number_pane_t_ParamLimits

0xf92b,	// (0x0001cee8) list_single_number_pane_t

0x80ce,	// (0x0001568b) list_single_graphic_pane_g1_ParamLimits

0x80ce,	// (0x0001568b) list_single_graphic_pane_g1

0x80da,	// (0x00015697) list_single_graphic_pane_g2_ParamLimits

0x80da,	// (0x00015697) list_single_graphic_pane_g2

0x80e6,	// (0x000156a3) list_single_graphic_pane_g3_ParamLimits

0x80e6,	// (0x000156a3) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001cb59) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001cb59) list_single_graphic_pane_g

0x80f2,	// (0x000156af) list_single_graphic_pane_t1_ParamLimits

0x80f2,	// (0x000156af) list_single_graphic_pane_t1

0x80da,	// (0x00015697) list_single_heading_pane_g1_ParamLimits

0x80da,	// (0x00015697) list_single_heading_pane_g1

0x80e6,	// (0x000156a3) list_single_heading_pane_g2_ParamLimits

0x80e6,	// (0x000156a3) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001cb60) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001cb60) list_single_heading_pane_g

0x8108,	// (0x000156c5) list_single_heading_pane_t1_ParamLimits

0x8108,	// (0x000156c5) list_single_heading_pane_t1

0x811e,	// (0x000156db) list_single_heading_pane_t2_ParamLimits

0x811e,	// (0x000156db) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001cb65) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001cb65) list_single_heading_pane_t

0x80da,	// (0x00015697) list_single_number_heading_pane_g1_ParamLimits

0x80da,	// (0x00015697) list_single_number_heading_pane_g1

0x80e6,	// (0x000156a3) list_single_number_heading_pane_g2_ParamLimits

0x80e6,	// (0x000156a3) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001cb60) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001cb60) list_single_number_heading_pane_g

0x8108,	// (0x000156c5) list_single_number_heading_pane_t1_ParamLimits

0x8108,	// (0x000156c5) list_single_number_heading_pane_t1

0x8130,	// (0x000156ed) list_single_number_heading_pane_t2_ParamLimits

0x8130,	// (0x000156ed) list_single_number_heading_pane_t2

0x8142,	// (0x000156ff) list_single_number_heading_pane_t3_ParamLimits

0x8142,	// (0x000156ff) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001cb6a) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001cb6a) list_single_number_heading_pane_t

0x8154,	// (0x00015711) list_single_graphic_heading_pane_g1_ParamLimits

0x8154,	// (0x00015711) list_single_graphic_heading_pane_g1

0x8160,	// (0x0001571d) list_single_graphic_heading_pane_g4_ParamLimits

0x8160,	// (0x0001571d) list_single_graphic_heading_pane_g4

0x80e6,	// (0x000156a3) list_single_graphic_heading_pane_g5_ParamLimits

0x80e6,	// (0x000156a3) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001cb71) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001cb71) list_single_graphic_heading_pane_g

0x8108,	// (0x000156c5) list_single_graphic_heading_pane_t1_ParamLimits

0x8108,	// (0x000156c5) list_single_graphic_heading_pane_t1

0x8171,	// (0x0001572e) list_single_graphic_heading_pane_t2_ParamLimits

0x8171,	// (0x0001572e) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001cb78) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001cb78) list_single_graphic_heading_pane_t

0x8183,	// (0x00015740) list_single_large_graphic_pane_g1_ParamLimits

0x8183,	// (0x00015740) list_single_large_graphic_pane_g1

0x80da,	// (0x00015697) list_single_large_graphic_pane_g2_ParamLimits

0x80da,	// (0x00015697) list_single_large_graphic_pane_g2

0x80e6,	// (0x000156a3) list_single_large_graphic_pane_g3_ParamLimits

0x80e6,	// (0x000156a3) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001cb7d) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001cb7d) list_single_large_graphic_pane_g

0x9853,	// (0x00016e10) wait_border_pane_g2_copy1

0x818f,	// (0x0001574c) list_single_large_graphic_pane_g4_cp2

0x80f2,	// (0x000156af) list_single_large_graphic_pane_t1_ParamLimits

0x80f2,	// (0x000156af) list_single_large_graphic_pane_t1

0x3e37,	// (0x000113f4) list_double_pane_g1_ParamLimits

0x3e37,	// (0x000113f4) list_double_pane_g1

0x8197,	// (0x00015754) list_double_pane_g2_ParamLimits

0x8197,	// (0x00015754) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001cb84) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001cb84) list_double_pane_g

0x81a3,	// (0x00015760) list_double_pane_t1_ParamLimits

0x81a3,	// (0x00015760) list_double_pane_t1

0x81b9,	// (0x00015776) list_double_pane_t2_ParamLimits

0x81b9,	// (0x00015776) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001cb89) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001cb89) list_double_pane_t

0x81cb,	// (0x00015788) list_double2_pane_g1_ParamLimits

0x81cb,	// (0x00015788) list_double2_pane_g1

0x81dc,	// (0x00015799) list_double2_pane_g2_ParamLimits

0x81dc,	// (0x00015799) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001cb8e) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001cb8e) list_double2_pane_g

0x81e8,	// (0x000157a5) list_double2_pane_t1_ParamLimits

0x81e8,	// (0x000157a5) list_double2_pane_t1

0x81fe,	// (0x000157bb) list_double2_pane_t2_ParamLimits

0x81fe,	// (0x000157bb) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001cb93) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001cb93) list_double2_pane_t

0x3e37,	// (0x000113f4) list_double_number_pane_g1_ParamLimits

0x3e37,	// (0x000113f4) list_double_number_pane_g1

0x8197,	// (0x00015754) list_double_number_pane_g2_ParamLimits

0x8197,	// (0x00015754) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001cb84) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001cb84) list_double_number_pane_g

0x8210,	// (0x000157cd) list_double_number_pane_t1_ParamLimits

0x8210,	// (0x000157cd) list_double_number_pane_t1

0x8222,	// (0x000157df) list_double_number_pane_t2_ParamLimits

0x8222,	// (0x000157df) list_double_number_pane_t2

0x8238,	// (0x000157f5) list_double_number_pane_t3_ParamLimits

0x8238,	// (0x000157f5) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001cb98) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001cb98) list_double_number_pane_t

0x824a,	// (0x00015807) list_double_graphic_pane_g1_ParamLimits

0x824a,	// (0x00015807) list_double_graphic_pane_g1

0x8256,	// (0x00015813) list_double_graphic_pane_g2_ParamLimits

0x8256,	// (0x00015813) list_double_graphic_pane_g2

0x8265,	// (0x00015822) list_double_graphic_pane_g3_ParamLimits

0x8265,	// (0x00015822) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001cb9f) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001cb9f) list_double_graphic_pane_g

0x8222,	// (0x000157df) list_double_graphic_pane_t1_ParamLimits

0x8222,	// (0x000157df) list_double_graphic_pane_t1

0x8238,	// (0x000157f5) list_double_graphic_pane_t2_ParamLimits

0x8238,	// (0x000157f5) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001cba8) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001cba8) list_double_graphic_pane_t

0x827d,	// (0x0001583a) list_double2_graphic_pane_g1_ParamLimits

0x827d,	// (0x0001583a) list_double2_graphic_pane_g1

0x3e43,	// (0x00011400) list_double2_graphic_pane_g2_ParamLimits

0x3e43,	// (0x00011400) list_double2_graphic_pane_g2

0x81dc,	// (0x00015799) list_double2_graphic_pane_g3_ParamLimits

0x81dc,	// (0x00015799) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001cbad) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001cbad) list_double2_graphic_pane_g

0x8289,	// (0x00015846) list_double2_graphic_pane_t1_ParamLimits

0x8289,	// (0x00015846) list_double2_graphic_pane_t1

0x829f,	// (0x0001585c) list_double2_graphic_pane_t2_ParamLimits

0x829f,	// (0x0001585c) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001cbb4) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001cbb4) list_double2_graphic_pane_t

0x82b1,	// (0x0001586e) list_double_large_graphic_pane_g1_ParamLimits

0x82b1,	// (0x0001586e) list_double_large_graphic_pane_g1

0x82d0,	// (0x0001588d) list_double_large_graphic_pane_g2_ParamLimits

0x82d0,	// (0x0001588d) list_double_large_graphic_pane_g2

0x8197,	// (0x00015754) list_double_large_graphic_pane_g3_ParamLimits

0x8197,	// (0x00015754) list_double_large_graphic_pane_g3

0x82e1,	// (0x0001589e) list_double_large_graphic_pane_g4_ParamLimits

0x82e1,	// (0x0001589e) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001cbb9) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001cbb9) list_double_large_graphic_pane_g

0x82f4,	// (0x000158b1) list_double_large_graphic_pane_t1_ParamLimits

0x82f4,	// (0x000158b1) list_double_large_graphic_pane_t1

0x830d,	// (0x000158ca) list_double_large_graphic_pane_t2_ParamLimits

0x830d,	// (0x000158ca) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001cbc4) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001cbc4) list_double_large_graphic_pane_t

0x831f,	// (0x000158dc) list_double2_large_graphic_pane_g1_ParamLimits

0x831f,	// (0x000158dc) list_double2_large_graphic_pane_g1

0x81cb,	// (0x00015788) list_double2_large_graphic_pane_g2_ParamLimits

0x81cb,	// (0x00015788) list_double2_large_graphic_pane_g2

0x81dc,	// (0x00015799) list_double2_large_graphic_pane_g3_ParamLimits

0x81dc,	// (0x00015799) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001cbc9) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001cbc9) list_double2_large_graphic_pane_g

0x8289,	// (0x00015846) list_double2_large_graphic_pane_t1_ParamLimits

0x8289,	// (0x00015846) list_double2_large_graphic_pane_t1

0x829f,	// (0x0001585c) list_double2_large_graphic_pane_t2_ParamLimits

0x829f,	// (0x0001585c) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001cbb4) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001cbb4) list_double2_large_graphic_pane_t

0x832b,	// (0x000158e8) list_double_heading_pane_g1_ParamLimits

0x832b,	// (0x000158e8) list_double_heading_pane_g1

0x3b04,	// (0x000110c1) list_double_heading_pane_g2_ParamLimits

0x3b04,	// (0x000110c1) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0001cbd0) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0001cbd0) list_double_heading_pane_g

0x833c,	// (0x000158f9) list_double_heading_pane_t1_ParamLimits

0x833c,	// (0x000158f9) list_double_heading_pane_t1

0x829f,	// (0x0001585c) list_double_heading_pane_t2_ParamLimits

0x829f,	// (0x0001585c) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0001cbd5) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0001cbd5) list_double_heading_pane_t

0x824a,	// (0x00015807) list_double_graphic_heading_pane_g1_ParamLimits

0x824a,	// (0x00015807) list_double_graphic_heading_pane_g1

0x832b,	// (0x000158e8) list_double_graphic_heading_pane_g2_ParamLimits

0x832b,	// (0x000158e8) list_double_graphic_heading_pane_g2

0x3b04,	// (0x000110c1) list_double_graphic_heading_pane_g3_ParamLimits

0x3b04,	// (0x000110c1) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0001cbda) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001cbda) list_double_graphic_heading_pane_g

0x833c,	// (0x000158f9) list_double_graphic_heading_pane_t1_ParamLimits

0x833c,	// (0x000158f9) list_double_graphic_heading_pane_t1

0x829f,	// (0x0001585c) list_double_graphic_heading_pane_t2_ParamLimits

0x829f,	// (0x0001585c) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0001cbd5) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0001cbd5) list_double_graphic_heading_pane_t

0x82d0,	// (0x0001588d) list_double_time_pane_g1_ParamLimits

0x82d0,	// (0x0001588d) list_double_time_pane_g1

0x8197,	// (0x00015754) list_double_time_pane_g2_ParamLimits

0x8197,	// (0x00015754) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0001cbe1) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0001cbe1) list_double_time_pane_g

0x8352,	// (0x0001590f) list_double_time_pane_t1_ParamLimits

0x8352,	// (0x0001590f) list_double_time_pane_t1

0x8368,	// (0x00015925) list_double_time_pane_t2_ParamLimits

0x8368,	// (0x00015925) list_double_time_pane_t2

0x837a,	// (0x00015937) list_double_time_pane_t3_ParamLimits

0x837a,	// (0x00015937) list_double_time_pane_t3

0x838c,	// (0x00015949) list_double_time_pane_t4_ParamLimits

0x838c,	// (0x00015949) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0001cbe6) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0001cbe6) list_double_time_pane_t

0x3e43,	// (0x00011400) list_setting_pane_g1_ParamLimits

0x3e43,	// (0x00011400) list_setting_pane_g1

0x81dc,	// (0x00015799) list_setting_pane_g2_ParamLimits

0x81dc,	// (0x00015799) list_setting_pane_g2

0x0001,

0xf632,	// (0x0001cbef) list_setting_pane_g_ParamLimits

0xf632,	// (0x0001cbef) list_setting_pane_g

0x839e,	// (0x0001595b) list_setting_pane_t1_ParamLimits

0x839e,	// (0x0001595b) list_setting_pane_t1

0x83b5,	// (0x00015972) list_setting_pane_t2_ParamLimits

0x83b5,	// (0x00015972) list_setting_pane_t2

0x0002,

0xf637,	// (0x0001cbf4) list_setting_pane_t_ParamLimits

0xf637,	// (0x0001cbf4) list_setting_pane_t

0x83f2,	// (0x000159af) set_value_pane_cp_ParamLimits

0x83f2,	// (0x000159af) set_value_pane_cp

0x3e43,	// (0x00011400) list_setting_number_pane_g1_ParamLimits

0x3e43,	// (0x00011400) list_setting_number_pane_g1

0x81dc,	// (0x00015799) list_setting_number_pane_g2_ParamLimits

0x81dc,	// (0x00015799) list_setting_number_pane_g2

0x0001,

0xf632,	// (0x0001cbef) list_setting_number_pane_g_ParamLimits

0xf632,	// (0x0001cbef) list_setting_number_pane_g

0x83fe,	// (0x000159bb) list_setting_number_pane_t1_ParamLimits

0x83fe,	// (0x000159bb) list_setting_number_pane_t1

0x8412,	// (0x000159cf) list_setting_number_pane_t2_ParamLimits

0x8412,	// (0x000159cf) list_setting_number_pane_t2

0x8429,	// (0x000159e6) list_setting_number_pane_t3_ParamLimits

0x8429,	// (0x000159e6) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x0001cbfb) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x0001cbfb) list_setting_number_pane_t

0x83f2,	// (0x000159af) set_value_pane_ParamLimits

0x83f2,	// (0x000159af) set_value_pane

0x3b25,	// (0x000110e2) bg_set_opt_pane_ParamLimits

0x3b25,	// (0x000110e2) bg_set_opt_pane

0x3b46,	// (0x00011103) set_value_pane_t1

0x3b54,	// (0x00011111) slider_set_pane_cp3

0x846c,	// (0x00015a29) volume_small_pane_cp

0x3b5d,	// (0x0001111a) list_form_gen_pane

0x3b66,	// (0x00011123) scroll_pane_cp8

0x8475,	// (0x00015a32) form_field_data_pane_ParamLimits

0x8475,	// (0x00015a32) form_field_data_pane

0x848d,	// (0x00015a4a) form_field_data_wide_pane_ParamLimits

0x848d,	// (0x00015a4a) form_field_data_wide_pane

0x84ae,	// (0x00015a6b) form_field_popup_pane_ParamLimits

0x84ae,	// (0x00015a6b) form_field_popup_pane

0x84ce,	// (0x00015a8b) form_field_popup_wide_pane_ParamLimits

0x84ce,	// (0x00015a8b) form_field_popup_wide_pane

0x3b87,	// (0x00011144) form_field_slider_pane_ParamLimits

0x3b87,	// (0x00011144) form_field_slider_pane

0x84eb,	// (0x00015aa8) form_field_slider_wide_pane_ParamLimits

0x84eb,	// (0x00015aa8) form_field_slider_wide_pane

0x3b9a,	// (0x00011157) data_form_pane

0x8508,	// (0x00015ac5) form_field_data_pane_t1

0x3ba6,	// (0x00011163) input_focus_pane

0x3bb4,	// (0x00011171) data_form_wide_pane

0x3bf1,	// (0x000111ae) form_field_data_wide_pane_t1

0x3a48,	// (0x00011005) input_focus_pane_cp6

0x8520,	// (0x00015add) form_field_popup_pane_t1

0x3ba6,	// (0x00011163) input_focus_pane_cp7

0x3c13,	// (0x000111d0) list_form_pane

0x3c27,	// (0x000111e4) form_field_popup_wide_pane_t1

0x3ba6,	// (0x00011163) input_focus_pane_cp8

0x3c3c,	// (0x000111f9) list_form_wide_pane

0x8540,	// (0x00015afd) form_field_slider_pane_t1_ParamLimits

0x8540,	// (0x00015afd) form_field_slider_pane_t1

0x8552,	// (0x00015b0f) form_field_slider_pane_t2_ParamLimits

0x8552,	// (0x00015b0f) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x0001cc0b) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x0001cc0b) form_field_slider_pane_t

0x3776,	// (0x00010d33) input_focus_pane_cp9_ParamLimits

0x3776,	// (0x00010d33) input_focus_pane_cp9

0x8564,	// (0x00015b21) slider_cont_pane_ParamLimits

0x8564,	// (0x00015b21) slider_cont_pane

0x3c48,	// (0x00011205) form_field_slider_wide_pane_t1_ParamLimits

0x3c48,	// (0x00011205) form_field_slider_wide_pane_t1

0x3c5a,	// (0x00011217) form_field_slider_wide_pane_t2_ParamLimits

0x3c5a,	// (0x00011217) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x0001cc10) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x0001cc10) form_field_slider_wide_pane_t

0x3776,	// (0x00010d33) input_focus_pane_cp10_ParamLimits

0x3776,	// (0x00010d33) input_focus_pane_cp10

0x8578,	// (0x00015b35) slider_cont_pane_cp1_ParamLimits

0x8578,	// (0x00015b35) slider_cont_pane_cp1

0x858c,	// (0x00015b49) slider_form_pane_cp

0x3c6c,	// (0x00011229) input_focus_pane_g1

0x3c74,	// (0x00011231) input_focus_pane_g2

0x3c7c,	// (0x00011239) input_focus_pane_g3

0x3c84,	// (0x00011241) input_focus_pane_g4

0x3c8c,	// (0x00011249) input_focus_pane_g5

0x3c94,	// (0x00011251) input_focus_pane_g6

0x3c9c,	// (0x00011259) input_focus_pane_g7

0x3ca4,	// (0x00011261) input_focus_pane_g8

0x3cac,	// (0x00011269) input_focus_pane_g9

0x36de,	// (0x00010c9b) input_focus_pane_g10

0x0009,

0xf658,	// (0x0001cc15) input_focus_pane_g

0x985c,	// (0x00016e19) wait_border_pane_g3_copy1

0x8594,	// (0x00015b51) data_form_pane_t1

0x36de,	// (0x00010c9b) wait_anim_pane_g1_copy1

0xa788,	// (0x00017d45) data_form_wide_pane_t1

0x85af,	// (0x00015b6c) list_form_graphic_pane_cp_ParamLimits

0x85af,	// (0x00015b6c) list_form_graphic_pane_cp

0xa75d,	// (0x00017d1a) slider_form_pane_g1

0xa766,	// (0x00017d23) slider_form_pane_g2

0x0006,

0xf95b,	// (0x0001cf18) slider_form_pane_g

0x85c3,	// (0x00015b80) list_form_graphic_pane_ParamLimits

0x85c3,	// (0x00015b80) list_form_graphic_pane

0x85da,	// (0x00015b97) list_form_graphic_pane_g1

0x85e2,	// (0x00015b9f) list_form_graphic_pane_t1_ParamLimits

0x85e2,	// (0x00015b9f) list_form_graphic_pane_t1

0x3784,	// (0x00010d41) list_highlight_pane_cp5_ParamLimits

0x3784,	// (0x00010d41) list_highlight_pane_cp5

0x85f7,	// (0x00015bb4) find_pane_g1

0x3cb4,	// (0x00011271) input_find_pane

0x8600,	// (0x00015bbd) input_find_pane_g1_ParamLimits

0x8600,	// (0x00015bbd) input_find_pane_g1

0x860c,	// (0x00015bc9) input_find_pane_t1_ParamLimits

0x860c,	// (0x00015bc9) input_find_pane_t1

0x8621,	// (0x00015bde) input_find_pane_t2_ParamLimits

0x8621,	// (0x00015bde) input_find_pane_t2

0x0001,

0xf66d,	// (0x0001cc2a) input_find_pane_t_ParamLimits

0xf66d,	// (0x0001cc2a) input_find_pane_t

0x3cbd,	// (0x0001127a) input_focus_pane_cp5_ParamLimits

0x3cbd,	// (0x0001127a) input_focus_pane_cp5

0x3cd0,	// (0x0001128d) bg_popup_window_pane_cp2_ParamLimits

0x3cd0,	// (0x0001128d) bg_popup_window_pane_cp2

0x3cdd,	// (0x0001129a) listscroll_menu_pane_ParamLimits

0x3cdd,	// (0x0001129a) listscroll_menu_pane

0x8642,	// (0x00015bff) popup_submenu_window_ParamLimits

0x8642,	// (0x00015bff) popup_submenu_window

0x3ce9,	// (0x000112a6) find_popup_pane_g1

0x866a,	// (0x00015c27) input_popup_find_pane_cp

0x3cf1,	// (0x000112ae) input_focus_pane_cp4_ParamLimits

0x3cf1,	// (0x000112ae) input_focus_pane_cp4

0x3cff,	// (0x000112bc) input_popup_find_pane_t1_ParamLimits

0x3cff,	// (0x000112bc) input_popup_find_pane_t1

0x3708,	// (0x00010cc5) bg_popup_sub_pane_cp

0x3d2d,	// (0x000112ea) listscroll_popup_sub_pane

0x3d35,	// (0x000112f2) list_submenu_pane_ParamLimits

0x3d35,	// (0x000112f2) list_submenu_pane

0x3d46,	// (0x00011303) scroll_pane_cp4

0x8682,	// (0x00015c3f) list_single_popup_submenu_pane_ParamLimits

0x8682,	// (0x00015c3f) list_single_popup_submenu_pane

0x3e2f,	// (0x000113ec) list_single_popup_submenu_pane_g1

0x8696,	// (0x00015c53) list_single_popup_submenu_pane_t1_ParamLimits

0x8696,	// (0x00015c53) list_single_popup_submenu_pane_t1

0x3784,	// (0x00010d41) bg_active_tab_pane_cp1_ParamLimits

0x3784,	// (0x00010d41) bg_active_tab_pane_cp1

0x3d4e,	// (0x0001130b) tabs_2_active_pane_g1

0x86ab,	// (0x00015c68) tabs_2_active_pane_t1

0x3784,	// (0x00010d41) bg_passive_tab_pane_cp1_ParamLimits

0x3784,	// (0x00010d41) bg_passive_tab_pane_cp1

0x3d4e,	// (0x0001130b) tabs_2_passive_pane_g1

0x86ab,	// (0x00015c68) tabs_2_passive_pane_t1

0x86bd,	// (0x00015c7a) bg_active_tab_pane_cp4

0x86cb,	// (0x00015c88) tabs_2_long_active_pane_t1

0x86de,	// (0x00015c9b) bg_passive_tab_pane_cp4

0x65e2,	// (0x00013b9f) list_single_midp_graphic_pane_g4_ParamLimits

0x86bd,	// (0x00015c7a) bg_active_tab_pane_cp5

0x86ea,	// (0x00015ca7) tabs_3_long_active_pane_t1

0x86de,	// (0x00015c9b) bg_passive_tab_pane_cp5

0x65e2,	// (0x00013b9f) list_single_midp_graphic_pane_g4

0x3784,	// (0x00010d41) bg_popup_window_pane_cp13_ParamLimits

0x3784,	// (0x00010d41) bg_popup_window_pane_cp13

0x3d56,	// (0x00011313) listscroll_popup_fast_pane_ParamLimits

0x3d56,	// (0x00011313) listscroll_popup_fast_pane

0x3d62,	// (0x0001131f) grid_popup_fast_pane_ParamLimits

0x3d62,	// (0x0001131f) grid_popup_fast_pane

0x3d74,	// (0x00011331) scroll_pane_cp9_ParamLimits

0x3d74,	// (0x00011331) scroll_pane_cp9

0xc6d9,	// (0x00019c96) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6d9,	// (0x00019c96) list_single_graphic_hl_pane_t1_cp2

0x3d87,	// (0x00011344) input_focus_pane_cp20_ParamLimits

0x3d87,	// (0x00011344) input_focus_pane_cp20

0x3d95,	// (0x00011352) query_popup_data_pane_t1_ParamLimits

0x3d95,	// (0x00011352) query_popup_data_pane_t1

0x3da8,	// (0x00011365) query_popup_data_pane_t2_ParamLimits

0x3da8,	// (0x00011365) query_popup_data_pane_t2

0x3dee,	// (0x000113ab) query_popup_data_pane_t3_ParamLimits

0x3dee,	// (0x000113ab) query_popup_data_pane_t3

0x3e4f,	// (0x0001140c) query_popup_data_pane_t4_ParamLimits

0x3e4f,	// (0x0001140c) query_popup_data_pane_t4

0x3e8b,	// (0x00011448) query_popup_data_pane_t5_ParamLimits

0x3e8b,	// (0x00011448) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x0001cc2f) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x0001cc2f) query_popup_data_pane_t

0x3c6c,	// (0x00011229) bg_set_opt_pane_g1

0x3c74,	// (0x00011231) bg_set_opt_pane_g2

0x3c7c,	// (0x00011239) bg_set_opt_pane_g3

0x3c84,	// (0x00011241) bg_set_opt_pane_g4

0x3c8c,	// (0x00011249) bg_set_opt_pane_g5

0x3c94,	// (0x00011251) bg_set_opt_pane_g6

0x3c9c,	// (0x00011259) bg_set_opt_pane_g7

0x3ca4,	// (0x00011261) bg_set_opt_pane_g8

0x3cac,	// (0x00011269) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x0001cc3a) bg_set_opt_pane_g

0x5bf2,	// (0x000131af) control_top_pane_stacon_ParamLimits

0x5bf2,	// (0x000131af) control_top_pane_stacon

0x5c45,	// (0x00013202) signal_pane_stacon_ParamLimits

0x5c45,	// (0x00013202) signal_pane_stacon

0x44e0,	// (0x00011a9d) stacon_top_pane_g1_ParamLimits

0x44e0,	// (0x00011a9d) stacon_top_pane_g1

0x5c6a,	// (0x00013227) title_pane_stacon_ParamLimits

0x5c6a,	// (0x00013227) title_pane_stacon

0x5c94,	// (0x00013251) uni_indicator_pane_stacon_ParamLimits

0x5c94,	// (0x00013251) uni_indicator_pane_stacon

0x5ca9,	// (0x00013266) battery_pane_stacon_ParamLimits

0x5ca9,	// (0x00013266) battery_pane_stacon

0x5ced,	// (0x000132aa) control_bottom_pane_stacon_ParamLimits

0x5ced,	// (0x000132aa) control_bottom_pane_stacon

0x5d10,	// (0x000132cd) navi_pane_stacon_ParamLimits

0x5d10,	// (0x000132cd) navi_pane_stacon

0x45cb,	// (0x00011b88) stacon_bottom_pane_g1_ParamLimits

0x45cb,	// (0x00011b88) stacon_bottom_pane_g1

0x595e,	// (0x00012f1b) aid_levels_signal_lsc_ParamLimits

0x595e,	// (0x00012f1b) aid_levels_signal_lsc

0x5974,	// (0x00012f31) signal_pane_stacon_g1_ParamLimits

0x5974,	// (0x00012f31) signal_pane_stacon_g1

0x5988,	// (0x00012f45) signal_pane_stacon_g2_ParamLimits

0x5988,	// (0x00012f45) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x0001cc4d) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x0001cc4d) signal_pane_stacon_g

0x59bd,	// (0x00012f7a) title_pane_stacon_t1_ParamLimits

0x59bd,	// (0x00012f7a) title_pane_stacon_t1

0x3f67,	// (0x00011524) uni_indicator_pane_stacon_g1

0x3f71,	// (0x0001152e) uni_indicator_pane_stacon_g2

0x3f53,	// (0x00011510) uni_indicator_pane_stacon_g3

0x3f5d,	// (0x0001151a) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x0001cc59) uni_indicator_pane_stacon_g

0x59e2,	// (0x00012f9f) control_top_pane_stacon_g1

0x59ea,	// (0x00012fa7) control_top_pane_stacon_t1_ParamLimits

0x59ea,	// (0x00012fa7) control_top_pane_stacon_t1

0x5a21,	// (0x00012fde) aid_levels_battery_lsc_ParamLimits

0x5a21,	// (0x00012fde) aid_levels_battery_lsc

0x5a38,	// (0x00012ff5) battery_pane_stacon_g1_ParamLimits

0x5a38,	// (0x00012ff5) battery_pane_stacon_g1

0x5a4b,	// (0x00013008) battery_pane_stacon_g2_ParamLimits

0x5a4b,	// (0x00013008) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x0001cc62) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x0001cc62) battery_pane_stacon_g

0x5a89,	// (0x00013046) navi_icon_pane_stacon

0x5a9d,	// (0x0001305a) navi_navi_pane_stacon

0x5a89,	// (0x00013046) navi_text_pane_stacon

0x59e2,	// (0x00012f9f) control_bottom_pane_stacon_g1

0x5ab1,	// (0x0001306e) control_bottom_pane_stacon_t1_ParamLimits

0x5ab1,	// (0x0001306e) control_bottom_pane_stacon_t1

0x8716,	// (0x00015cd3) grid_app_pane_ParamLimits

0x8716,	// (0x00015cd3) grid_app_pane

0x8738,	// (0x00015cf5) scroll_pane_cp15_ParamLimits

0x8738,	// (0x00015cf5) scroll_pane_cp15

0x874b,	// (0x00015d08) cell_app_pane_ParamLimits

0x874b,	// (0x00015d08) cell_app_pane

0x8773,	// (0x00015d30) cell_app_pane_g1_ParamLimits

0x8773,	// (0x00015d30) cell_app_pane_g1

0x409b,	// (0x00011658) cell_app_pane_g2_ParamLimits

0x409b,	// (0x00011658) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x0001cc67) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x0001cc67) cell_app_pane_g

0x8797,	// (0x00015d54) cell_app_pane_t1_ParamLimits

0x8797,	// (0x00015d54) cell_app_pane_t1

0x40a7,	// (0x00011664) grid_highlight_pane_ParamLimits

0x40a7,	// (0x00011664) grid_highlight_pane

0x3c6c,	// (0x00011229) cell_highlight_pane_g1

0x3c74,	// (0x00011231) cell_highlight_pane_g2

0x3c7c,	// (0x00011239) cell_highlight_pane_g3

0x3c84,	// (0x00011241) cell_highlight_pane_g4

0x3c8c,	// (0x00011249) cell_highlight_pane_g5

0x3c94,	// (0x00011251) cell_highlight_pane_g6

0x3c9c,	// (0x00011259) cell_highlight_pane_g7

0x3ca4,	// (0x00011261) cell_highlight_pane_g8

0x3cac,	// (0x00011269) cell_highlight_pane_g9

0x36de,	// (0x00010c9b) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x0001cc15) cell_highlight_pane_g

0x40c2,	// (0x0001167f) bg_scroll_pane

0x5afb,	// (0x000130b8) scroll_handle_pane

0x411e,	// (0x000116db) scroll_bg_pane_g1

0x4133,	// (0x000116f0) scroll_bg_pane_g2

0x414b,	// (0x00011708) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x0001cc6c) scroll_bg_pane_g

0x87ae,	// (0x00015d6b) scroll_handle_focus_pane_ParamLimits

0x87ae,	// (0x00015d6b) scroll_handle_focus_pane

0x411e,	// (0x000116db) scroll_handle_pane_g1

0x4160,	// (0x0001171d) scroll_handle_pane_g2

0x414b,	// (0x00011708) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x0001cc73) scroll_handle_pane_g

0x3cf1,	// (0x000112ae) bg_popup_sub_pane_cp21_ParamLimits

0x3cf1,	// (0x000112ae) bg_popup_sub_pane_cp21

0x87bb,	// (0x00015d78) popup_fep_japan_predictive_window_t1_ParamLimits

0x87bb,	// (0x00015d78) popup_fep_japan_predictive_window_t1

0x87d5,	// (0x00015d92) popup_fep_japan_predictive_window_t2_ParamLimits

0x87d5,	// (0x00015d92) popup_fep_japan_predictive_window_t2

0x8808,	// (0x00015dc5) popup_fep_japan_predictive_window_t3_ParamLimits

0x8808,	// (0x00015dc5) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x0001cc7a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x0001cc7a) popup_fep_japan_predictive_window_t

0x3708,	// (0x00010cc5) bg_popup_sub_pane_cp23

0x4388,	// (0x00011945) listscroll_japin_cand_pane

0x4174,	// (0x00011731) popup_fep_japan_candidate_window_t1

0x4182,	// (0x0001173f) candidate_pane_ParamLimits

0x4182,	// (0x0001173f) candidate_pane

0x883f,	// (0x00015dfc) scroll_pane_cp30

0x4194,	// (0x00011751) list_single_popup_jap_candidate_pane_ParamLimits

0x4194,	// (0x00011751) list_single_popup_jap_candidate_pane

0x3708,	// (0x00010cc5) list_highlight_pane_cp30

0x41a9,	// (0x00011766) list_single_popup_jap_candidate_pane_t1

0x41b8,	// (0x00011775) level_1_signal

0x41c5,	// (0x00011782) level_2_signal

0x41d2,	// (0x0001178f) level_3_signal

0x41df,	// (0x0001179c) level_4_signal

0x41ec,	// (0x000117a9) level_5_signal

0x41f9,	// (0x000117b6) level_6_signal

0x4206,	// (0x000117c3) level_7_signal

0x41b8,	// (0x00011775) level_1_battery

0x41c5,	// (0x00011782) level_2_battery

0x41d2,	// (0x0001178f) level_3_battery

0x41df,	// (0x0001179c) level_4_battery

0x41ec,	// (0x000117a9) level_5_battery

0x41f9,	// (0x000117b6) level_6_battery

0x4206,	// (0x000117c3) level_7_battery

0x424a,	// (0x00011807) list_menu_pane_ParamLimits

0x424a,	// (0x00011807) list_menu_pane

0x4260,	// (0x0001181d) scroll_pane_cp25_ParamLimits

0x4260,	// (0x0001181d) scroll_pane_cp25

0x4279,	// (0x00011836) list_double2_graphic_pane_cp2_ParamLimits

0x4279,	// (0x00011836) list_double2_graphic_pane_cp2

0x4279,	// (0x00011836) list_double2_large_graphic_pane_cp2_ParamLimits

0x4279,	// (0x00011836) list_double2_large_graphic_pane_cp2

0x4279,	// (0x00011836) list_double2_pane_cp2_ParamLimits

0x4279,	// (0x00011836) list_double2_pane_cp2

0x4279,	// (0x00011836) list_double_graphic_pane_cp2_ParamLimits

0x4279,	// (0x00011836) list_double_graphic_pane_cp2

0x4279,	// (0x00011836) list_double_large_graphic_pane_cp2_ParamLimits

0x4279,	// (0x00011836) list_double_large_graphic_pane_cp2

0x4279,	// (0x00011836) list_double_number_pane_cp2_ParamLimits

0x4279,	// (0x00011836) list_double_number_pane_cp2

0x4279,	// (0x00011836) list_double_pane_cp2_ParamLimits

0x4279,	// (0x00011836) list_double_pane_cp2

0x885b,	// (0x00015e18) list_single_2graphic_pane_cp2_ParamLimits

0x885b,	// (0x00015e18) list_single_2graphic_pane_cp2

0x885b,	// (0x00015e18) list_single_graphic_heading_pane_cp2_ParamLimits

0x885b,	// (0x00015e18) list_single_graphic_heading_pane_cp2

0x885b,	// (0x00015e18) list_single_graphic_pane_cp2_ParamLimits

0x885b,	// (0x00015e18) list_single_graphic_pane_cp2

0x885b,	// (0x00015e18) list_single_heading_pane_cp2_ParamLimits

0x885b,	// (0x00015e18) list_single_heading_pane_cp2

0x4289,	// (0x00011846) list_single_large_graphic_pane_cp2_ParamLimits

0x4289,	// (0x00011846) list_single_large_graphic_pane_cp2

0x885b,	// (0x00015e18) list_single_number_heading_pane_cp2_ParamLimits

0x885b,	// (0x00015e18) list_single_number_heading_pane_cp2

0x885b,	// (0x00015e18) list_single_number_pane_cp2_ParamLimits

0x885b,	// (0x00015e18) list_single_number_pane_cp2

0x8871,	// (0x00015e2e) list_single_pane_cp2_ParamLimits

0x8871,	// (0x00015e2e) list_single_pane_cp2

0x42fe,	// (0x000118bb) bg_popup_sub_pane_cp22

0x5baa,	// (0x00013167) popup_side_volume_key_window_g1

0x5bce,	// (0x0001318b) popup_side_volume_key_window_t1

0x5bea,	// (0x000131a7) volume_small_pane_cp1

0x3776,	// (0x00010d33) bg_popup_sub_pane_cp24_ParamLimits

0x3776,	// (0x00010d33) bg_popup_sub_pane_cp24

0x432e,	// (0x000118eb) fep_china_uni_candidate_pane_ParamLimits

0x432e,	// (0x000118eb) fep_china_uni_candidate_pane

0x4342,	// (0x000118ff) fep_china_uni_entry_pane

0x4352,	// (0x0001190f) popup_fep_china_uni_window_g1

0x88e2,	// (0x00015e9f) fep_china_uni_entry_pane_g1

0x88ea,	// (0x00015ea7) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x0001ccab) fep_china_uni_entry_pane_g

0x436e,	// (0x0001192b) fep_entry_item_pane

0x4378,	// (0x00011935) fep_candidate_item_pane

0x88f2,	// (0x00015eaf) fep_china_uni_candidate_pane_g1

0x4380,	// (0x0001193d) fep_china_uni_candidate_pane_g2

0x439c,	// (0x00011959) fep_china_uni_candidate_pane_g3

0x88fa,	// (0x00015eb7) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x0001ccb0) fep_china_uni_candidate_pane_g

0x36de,	// (0x00010c9b) fep_entry_item_pane_g1

0x43a4,	// (0x00011961) fep_entry_item_pane_t1_ParamLimits

0x43a4,	// (0x00011961) fep_entry_item_pane_t1

0x43ba,	// (0x00011977) fep_candidate_item_pane_t1_ParamLimits

0x43ba,	// (0x00011977) fep_candidate_item_pane_t1

0x43cf,	// (0x0001198c) fep_candidate_item_pane_t2_ParamLimits

0x43cf,	// (0x0001198c) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x0001ccb9) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x0001ccb9) fep_candidate_item_pane_t

0x3784,	// (0x00010d41) list_highlight_pane_cp31_ParamLimits

0x3784,	// (0x00010d41) list_highlight_pane_cp31

0x43e1,	// (0x0001199e) level_1_signal_lsc

0x43ea,	// (0x000119a7) level_2_signal_lsc

0x43f3,	// (0x000119b0) level_3_signal_lsc

0x43fc,	// (0x000119b9) level_4_signal_lsc

0x4405,	// (0x000119c2) level_5_signal_lsc

0x440e,	// (0x000119cb) level_6_signal_lsc

0x4417,	// (0x000119d4) level_7_signal_lsc

0x4417,	// (0x000119d4) level_1_battery_lsc

0x4420,	// (0x000119dd) level_2_battery_lsc

0x4429,	// (0x000119e6) level_3_battery_lsc

0x4432,	// (0x000119ef) level_4_battery_lsc

0x443b,	// (0x000119f8) level_5_battery_lsc

0x4444,	// (0x00011a01) level_6_battery_lsc

0x43e1,	// (0x0001199e) level_7_battery_lsc

0x444d,	// (0x00011a0a) scroll_handle_focus_pane_g1

0x4456,	// (0x00011a13) scroll_handle_focus_pane_g2

0x445f,	// (0x00011a1c) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x0001ccbe) scroll_handle_focus_pane_g

0x8902,	// (0x00015ebf) list_single_2graphic_pane_g1_ParamLimits

0x8902,	// (0x00015ebf) list_single_2graphic_pane_g1

0x8160,	// (0x0001571d) list_single_2graphic_pane_g2_ParamLimits

0x8160,	// (0x0001571d) list_single_2graphic_pane_g2

0x80e6,	// (0x000156a3) list_single_2graphic_pane_g3_ParamLimits

0x80e6,	// (0x000156a3) list_single_2graphic_pane_g3

0x890e,	// (0x00015ecb) list_single_2graphic_pane_g4_ParamLimits

0x890e,	// (0x00015ecb) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x0001ccc5) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x0001ccc5) list_single_2graphic_pane_g

0x891f,	// (0x00015edc) list_single_2graphic_pane_t1_ParamLimits

0x891f,	// (0x00015edc) list_single_2graphic_pane_t1

0x894d,	// (0x00015f0a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x894d,	// (0x00015f0a) list_double2_graphic_large_graphic_pane_g1

0x81cb,	// (0x00015788) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x81cb,	// (0x00015788) list_double2_graphic_large_graphic_pane_g2

0x81dc,	// (0x00015799) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x81dc,	// (0x00015799) list_double2_graphic_large_graphic_pane_g3

0x895d,	// (0x00015f1a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x895d,	// (0x00015f1a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x0001ccce) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x0001ccce) list_double2_graphic_large_graphic_pane_g

0x8969,	// (0x00015f26) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8969,	// (0x00015f26) list_double2_graphic_large_graphic_pane_t1

0x897f,	// (0x00015f3c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x897f,	// (0x00015f3c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x0001ccd7) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x0001ccd7) list_double2_graphic_large_graphic_pane_t

0x8a22,	// (0x00015fdf) popup_fast_swap_window_ParamLimits

0x8a22,	// (0x00015fdf) popup_fast_swap_window

0x8a3e,	// (0x00015ffb) popup_side_volume_key_window

0x4656,	// (0x00011c13) stacon_top_pane

0x4660,	// (0x00011c1d) status_pane_ParamLimits

0x4660,	// (0x00011c1d) status_pane

0x36d4,	// (0x00010c91) status_small_pane

0x3708,	// (0x00010cc5) control_pane

0x3708,	// (0x00010cc5) stacon_bottom_pane

0x3b66,	// (0x00011123) scroll_pane_cp121

0x3b5d,	// (0x0001111a) set_content_pane

0x8991,	// (0x00015f4e) bg_active_tab_pane_g1_cp1

0x899a,	// (0x00015f57) bg_active_tab_pane_g2_cp1

0x89a3,	// (0x00015f60) bg_active_tab_pane_g3_cp1

0x8991,	// (0x00015f4e) bg_passive_tab_pane_g1_cp1

0x899a,	// (0x00015f57) bg_passive_tab_pane_g2_cp1

0x89a3,	// (0x00015f60) bg_passive_tab_pane_g3_cp1

0x89ac,	// (0x00015f69) bg_active_tab_pane_g1_cp2

0x899a,	// (0x00015f57) bg_active_tab_pane_g2_cp2

0x89b5,	// (0x00015f72) bg_active_tab_pane_g3_cp2

0x89ac,	// (0x00015f69) bg_passive_tab_pane_g1_cp2

0x899a,	// (0x00015f57) bg_passive_tab_pane_g2_cp2

0x89b5,	// (0x00015f72) bg_passive_tab_pane_g3_cp2

0x89be,	// (0x00015f7b) bg_active_tab_pane_g1_cp3

0x899a,	// (0x00015f57) bg_active_tab_pane_g2_cp3

0x89c7,	// (0x00015f84) bg_active_tab_pane_g3_cp3

0x89be,	// (0x00015f7b) bg_passive_tab_pane_g1_cp3

0x899a,	// (0x00015f57) bg_passive_tab_pane_g2_cp3

0x89c7,	// (0x00015f84) bg_passive_tab_pane_g3_cp3

0x89d0,	// (0x00015f8d) bg_active_tab_pane_g1_cp4

0x899a,	// (0x00015f57) bg_active_tab_pane_g2_cp4

0x89db,	// (0x00015f98) bg_active_tab_pane_g3_cp4

0x89d0,	// (0x00015f8d) bg_passive_tab_pane_g1_cp4

0x899a,	// (0x00015f57) bg_passive_tab_pane_g2_cp4

0x89db,	// (0x00015f98) bg_passive_tab_pane_g3_cp4

0x89e6,	// (0x00015fa3) bg_active_tab_pane_g1_cp5

0x899a,	// (0x00015f57) bg_active_tab_pane_g2_cp5

0x89ef,	// (0x00015fac) bg_active_tab_pane_g3_cp5

0x89e6,	// (0x00015fa3) bg_passive_tab_pane_g1_cp5

0x899a,	// (0x00015f57) bg_passive_tab_pane_g2_cp5

0x89ef,	// (0x00015fac) bg_passive_tab_pane_g3_cp5

0x89f8,	// (0x00015fb5) list_set_graphic_pane_ParamLimits

0x89f8,	// (0x00015fb5) list_set_graphic_pane

0x3708,	// (0x00010cc5) bg_set_opt_pane_cp4

0x45e7,	// (0x00011ba4) list_set_graphic_pane_g1_ParamLimits

0x45e7,	// (0x00011ba4) list_set_graphic_pane_g1

0x45f3,	// (0x00011bb0) list_set_graphic_pane_g2_ParamLimits

0x45f3,	// (0x00011bb0) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x0001ccdc) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x0001ccdc) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x0001d074) volume_small_pane_cp_g

0x8a16,	// (0x00015fd3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a16,	// (0x00015fd3) list_double2_large_graphic_pane_g1_cp2

0x4615,	// (0x00011bd2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4615,	// (0x00011bd2) list_double2_large_graphic_pane_g2_cp2

0x4626,	// (0x00011be3) list_double2_large_graphic_pane_g3_cp2

0x462e,	// (0x00011beb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x462e,	// (0x00011beb) list_double2_large_graphic_pane_t1_cp2

0x4644,	// (0x00011c01) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4644,	// (0x00011c01) list_double2_large_graphic_pane_t2_cp2

0xa30d,	// (0x000178ca) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa30d,	// (0x000178ca) list_double_large_graphic_pane_g1_cp2

0xa31e,	// (0x000178db) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa31e,	// (0x000178db) list_double_large_graphic_pane_g2_cp2

0x477c,	// (0x00011d39) list_double_large_graphic_pane_g3_cp2

0xa32f,	// (0x000178ec) list_double_large_graphic_pane_g4_cp

0xa337,	// (0x000178f4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa337,	// (0x000178f4) list_double_large_graphic_pane_t1_cp2

0xa34e,	// (0x0001790b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa34e,	// (0x0001790b) list_double_large_graphic_pane_t2_cp2

0x466e,	// (0x00011c2b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x466e,	// (0x00011c2b) list_double2_graphic_pane_g1_cp2

0x467c,	// (0x00011c39) list_double2_graphic_pane_g2_cp2_ParamLimits

0x467c,	// (0x00011c39) list_double2_graphic_pane_g2_cp2

0x468d,	// (0x00011c4a) list_double2_graphic_pane_g3_cp2

0x4697,	// (0x00011c54) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4697,	// (0x00011c54) list_double2_graphic_pane_t1_cp2

0x46ad,	// (0x00011c6a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x46ad,	// (0x00011c6a) list_double2_graphic_pane_t2_cp2

0x4390,	// (0x0001194d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4390,	// (0x0001194d) list_single_number_heading_pane_g1_cp2

0x46bf,	// (0x00011c7c) list_single_number_heading_pane_g2_cp2

0x46c7,	// (0x00011c84) list_single_number_heading_pane_t1_cp2_ParamLimits

0x46c7,	// (0x00011c84) list_single_number_heading_pane_t1_cp2

0x46dd,	// (0x00011c9a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x46dd,	// (0x00011c9a) list_single_number_heading_pane_t2_cp2

0x46ef,	// (0x00011cac) list_single_number_heading_pane_t3_cp2_ParamLimits

0x46ef,	// (0x00011cac) list_single_number_heading_pane_t3_cp2

0x4390,	// (0x0001194d) list_single_heading_pane_g1_cp2_ParamLimits

0x4390,	// (0x0001194d) list_single_heading_pane_g1_cp2

0x46bf,	// (0x00011c7c) list_single_heading_pane_g2_cp2

0x46c7,	// (0x00011c84) list_single_heading_pane_t1_cp2_ParamLimits

0x46c7,	// (0x00011c84) list_single_heading_pane_t1_cp2

0xa117,	// (0x000176d4) list_single_heading_pane_t2_cp2_ParamLimits

0xa117,	// (0x000176d4) list_single_heading_pane_t2_cp2

0xa05f,	// (0x0001761c) list_double_graphic_pane_g1_cp2_ParamLimits

0xa05f,	// (0x0001761c) list_double_graphic_pane_g1_cp2

0xa06b,	// (0x00017628) list_double_graphic_pane_g2_cp2_ParamLimits

0xa06b,	// (0x00017628) list_double_graphic_pane_g2_cp2

0xa07a,	// (0x00017637) list_double_graphic_pane_g3_cp2

0xa082,	// (0x0001763f) list_double_graphic_pane_t1_cp2_ParamLimits

0xa082,	// (0x0001763f) list_double_graphic_pane_t1_cp2

0xa098,	// (0x00017655) list_double_graphic_pane_t2_cp2_ParamLimits

0xa098,	// (0x00017655) list_double_graphic_pane_t2_cp2

0x4764,	// (0x00011d21) list_double_number_pane_g1_cp2_ParamLimits

0x4764,	// (0x00011d21) list_double_number_pane_g1_cp2

0x477c,	// (0x00011d39) list_double_number_pane_g2_cp2

0xa023,	// (0x000175e0) list_double_number_pane_t1_cp2_ParamLimits

0xa023,	// (0x000175e0) list_double_number_pane_t1_cp2

0xa037,	// (0x000175f4) list_double_number_pane_t2_cp2_ParamLimits

0xa037,	// (0x000175f4) list_double_number_pane_t2_cp2

0xa04d,	// (0x0001760a) list_double_number_pane_t3_cp2_ParamLimits

0xa04d,	// (0x0001760a) list_double_number_pane_t3_cp2

0x9f0c,	// (0x000174c9) list_single_graphic_pane_g1_cp2_ParamLimits

0x9f0c,	// (0x000174c9) list_single_graphic_pane_g1_cp2

0x4770,	// (0x00011d2d) list_single_graphic_pane_g2_cp2_ParamLimits

0x4770,	// (0x00011d2d) list_single_graphic_pane_g2_cp2

0x47d5,	// (0x00011d92) list_single_graphic_pane_g3_cp2

0x9ee2,	// (0x0001749f) list_single_graphic_pane_t1_cp2_ParamLimits

0x9ee2,	// (0x0001749f) list_single_graphic_pane_t1_cp2

0x4770,	// (0x00011d2d) list_single_number_pane_g1_cp2_ParamLimits

0x4770,	// (0x00011d2d) list_single_number_pane_g1_cp2

0x47d5,	// (0x00011d92) list_single_number_pane_g2_cp2

0x9ee2,	// (0x0001749f) list_single_number_pane_t1_cp2_ParamLimits

0x9ee2,	// (0x0001749f) list_single_number_pane_t1_cp2

0x9ef8,	// (0x000174b5) list_single_number_pane_t2_cp2_ParamLimits

0x9ef8,	// (0x000174b5) list_single_number_pane_t2_cp2

0x4615,	// (0x00011bd2) list_double2_pane_g1_cp2_ParamLimits

0x4615,	// (0x00011bd2) list_double2_pane_g1_cp2

0x4626,	// (0x00011be3) list_double2_pane_g2_cp2

0x473c,	// (0x00011cf9) list_double2_pane_t1_cp2_ParamLimits

0x473c,	// (0x00011cf9) list_double2_pane_t1_cp2

0x4752,	// (0x00011d0f) list_double2_pane_t2_cp2_ParamLimits

0x4752,	// (0x00011d0f) list_double2_pane_t2_cp2

0x4764,	// (0x00011d21) list_double_pane_g1_cp2_ParamLimits

0x4764,	// (0x00011d21) list_double_pane_g1_cp2

0x477c,	// (0x00011d39) list_double_pane_g2_cp2

0x4784,	// (0x00011d41) list_double_pane_t1_cp2_ParamLimits

0x4784,	// (0x00011d41) list_double_pane_t1_cp2

0x479a,	// (0x00011d57) list_double_pane_t2_cp2_ParamLimits

0x479a,	// (0x00011d57) list_double_pane_t2_cp2

0x8a58,	// (0x00016015) list_single_pane_cp2_g3

0x4770,	// (0x00011d2d) list_single_pane_g1_cp2_ParamLimits

0x4770,	// (0x00011d2d) list_single_pane_g1_cp2

0x47d5,	// (0x00011d92) list_single_pane_g2_cp2

0x47dd,	// (0x00011d9a) list_single_pane_t1_cp2_ParamLimits

0x47dd,	// (0x00011d9a) list_single_pane_t1_cp2

0x8a60,	// (0x0001601d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a60,	// (0x0001601d) list_single_large_graphic_pane_g1_cp2

0x47f5,	// (0x00011db2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x47f5,	// (0x00011db2) list_single_large_graphic_pane_g2_cp2

0x4801,	// (0x00011dbe) list_single_large_graphic_pane_g3_cp2

0x8a6c,	// (0x00016029) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a6c,	// (0x00016029) list_single_large_graphic_pane_g4_cp1

0x4809,	// (0x00011dc6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4809,	// (0x00011dc6) list_single_large_graphic_pane_t1_cp2

0x9eae,	// (0x0001746b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9eae,	// (0x0001746b) list_single_graphic_heading_pane_g1_cp2

0x9e7b,	// (0x00017438) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e7b,	// (0x00017438) list_single_graphic_heading_pane_g4_cp2

0x47d5,	// (0x00011d92) list_single_graphic_heading_pane_g5_cp2

0x9eba,	// (0x00017477) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9eba,	// (0x00017477) list_single_graphic_heading_pane_t1_cp2

0x9ed0,	// (0x0001748d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9ed0,	// (0x0001748d) list_single_graphic_heading_pane_t2_cp2

0x9e6f,	// (0x0001742c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e6f,	// (0x0001742c) list_single_2graphic_pane_g1_cp2

0x9e7b,	// (0x00017438) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e7b,	// (0x00017438) list_single_2graphic_pane_g2_cp2

0x47d5,	// (0x00011d92) list_single_2graphic_pane_g3_cp2

0x9e8c,	// (0x00017449) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9e8c,	// (0x00017449) list_single_2graphic_pane_g4_cp2

0x9e98,	// (0x00017455) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9e98,	// (0x00017455) list_single_2graphic_pane_t1_cp2

0x36de,	// (0x00010c9b) list_highlight_pane_g10_cp1

0x9a57,	// (0x00017014) list_highlight_pane_g1_cp1

0x9a5f,	// (0x0001701c) list_highlight_pane_g2_cp1

0x9a67,	// (0x00017024) list_highlight_pane_g3_cp1

0x9a6f,	// (0x0001702c) list_highlight_pane_g4_cp1

0x9a77,	// (0x00017034) list_highlight_pane_g5_cp1

0x9a7f,	// (0x0001703c) list_highlight_pane_g6_cp1

0x9a87,	// (0x00017044) list_highlight_pane_g7_cp1

0x9a8f,	// (0x0001704c) list_highlight_pane_g8_cp1

0x9a97,	// (0x00017054) list_highlight_pane_g9_cp1

0x997f,	// (0x00016f3c) form_field_slider_pane_t3

0x998d,	// (0x00016f4a) form_field_slider_pane_t4

0x999b,	// (0x00016f58) slider_form_pane_ParamLimits

0x999b,	// (0x00016f58) slider_form_pane

0x3708,	// (0x00010cc5) control_abbreviations

0x3708,	// (0x00010cc5) control_conventions

0x3708,	// (0x00010cc5) control_definitions

0x3708,	// (0x00010cc5) format_table_attribute

0xa161,	// (0x0001771e) bg_popup_preview_window_pane_g9

0x3708,	// (0x00010cc5) format_table_data2

0x3708,	// (0x00010cc5) format_table_data3

0x3708,	// (0x00010cc5) format_table_data_example

0x0008,

0x3708,	// (0x00010cc5) intro_purpose

0xf8bb,	// (0x0001ce78) bg_popup_preview_window_pane_g

0x3708,	// (0x00010cc5) texts_category

0x3708,	// (0x00010cc5) texts_graphics

0x481f,	// (0x00011ddc) text_digital

0x482e,	// (0x00011deb) text_primary

0x483d,	// (0x00011dfa) text_primary_small

0x484c,	// (0x00011e09) text_secondary

0x485b,	// (0x00011e18) text_title

0xa984,	// (0x00017f41) bg_passive_tab_pane_g1_cp3_srt

0x899a,	// (0x00015f57) bg_passive_tab_pane_g2_cp3_srt

0xa98d,	// (0x00017f4a) bg_passive_tab_pane_g3_cp3_srt

0x3784,	// (0x00010d41) bg_active_tab_pane_cp3_srt_ParamLimits

0x3784,	// (0x00010d41) bg_active_tab_pane_cp3_srt

0xa996,	// (0x00017f53) tabs_4_active_pane_srt_g1

0xa99e,	// (0x00017f5b) tabs_4_active_pane_srt_t1_ParamLimits

0xa99e,	// (0x00017f5b) tabs_4_active_pane_srt_t1

0xa984,	// (0x00017f41) bg_active_tab_pane_g1_cp3_copy1

0x899a,	// (0x00015f57) bg_active_tab_pane_g2_cp3_copy1

0xa98d,	// (0x00017f4a) bg_active_tab_pane_g3_cp3_copy1

0x3784,	// (0x00010d41) tabs_2_long_active_pane_srt_ParamLimits

0x3784,	// (0x00010d41) tabs_2_long_active_pane_srt

0x3784,	// (0x00010d41) tabs_2_long_passive_pane_srt_ParamLimits

0x3784,	// (0x00010d41) tabs_2_long_passive_pane_srt

0x86de,	// (0x00015c9b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86de,	// (0x00015c9b) bg_passive_tab_pane_cp4_srt

0xa594,	// (0x00017b51) bg_passive_tab_pane_g1_cp4_srt

0x899a,	// (0x00015f57) bg_passive_tab_pane_g2_cp4_srt

0xa59d,	// (0x00017b5a) bg_passive_tab_pane_g3_cp4_srt

0x86bd,	// (0x00015c7a) bg_active_tab_pane_cp4_srt_ParamLimits

0x86bd,	// (0x00015c7a) bg_active_tab_pane_cp4_srt

0xa5a6,	// (0x00017b63) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa5a6,	// (0x00017b63) tabs_2_long_active_pane_srt_t1

0xa594,	// (0x00017b51) bg_active_tab_pane_g1_cp4_srt

0x899a,	// (0x00015f57) bg_active_tab_pane_g2_cp4_srt

0xa59d,	// (0x00017b5a) bg_active_tab_pane_g3_cp4_srt

0x3776,	// (0x00010d33) tabs_3_long_active_pane_srt_ParamLimits

0x3776,	// (0x00010d33) tabs_3_long_active_pane_srt

0x3776,	// (0x00010d33) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3776,	// (0x00010d33) tabs_3_long_passive_pane_cp_srt

0x3776,	// (0x00010d33) tabs_3_long_passive_pane_srt_ParamLimits

0x3776,	// (0x00010d33) tabs_3_long_passive_pane_srt

0x86de,	// (0x00015c9b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86de,	// (0x00015c9b) bg_passive_tab_pane_cp5_srt

0x89e6,	// (0x00015fa3) bg_passive_tab_pane_g1_cp5_srt

0x899a,	// (0x00015f57) bg_passive_tab_pane_g2_cp5_srt

0x89ef,	// (0x00015fac) bg_passive_tab_pane_g3_cp5_srt

0x86bd,	// (0x00015c7a) bg_active_tab_pane_cp5_srt_ParamLimits

0x86bd,	// (0x00015c7a) bg_active_tab_pane_cp5_srt

0xa582,	// (0x00017b3f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa582,	// (0x00017b3f) tabs_3_long_active_pane_srt_t1

0x89e6,	// (0x00015fa3) bg_active_tab_pane_g1_cp5_srt

0x899a,	// (0x00015f57) bg_active_tab_pane_g2_cp5_srt

0x89ef,	// (0x00015fac) bg_active_tab_pane_g3_cp5_srt

0xa574,	// (0x00017b31) navi_text_pane_srt_t1

0xa56c,	// (0x00017b29) navi_icon_pane_srt_g1

0x49ef,	// (0x00011fac) midp_editing_number_pane_srt

0x486a,	// (0x00011e27) midp_ticker_pane_srt

0x49f7,	// (0x00011fb4) midp_ticker_pane_srt_g1

0x49ff,	// (0x00011fbc) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x0001ccfb) midp_ticker_pane_srt_g

0x4a07,	// (0x00011fc4) midp_ticker_pane_srt_t1

0xa55d,	// (0x00017b1a) midp_editing_number_pane_t1_copy1

0x8a86,	// (0x00016043) listscroll_midp_pane

0x8a86,	// (0x00016043) midp_form_pane

0x8af8,	// (0x000160b5) midp_info_popup_window_ParamLimits

0x8af8,	// (0x000160b5) midp_info_popup_window

0x3cf1,	// (0x000112ae) bg_popup_sub_pane_cp50_ParamLimits

0x3cf1,	// (0x000112ae) bg_popup_sub_pane_cp50

0x968b,	// (0x00016c48) listscroll_midp_info_pane_ParamLimits

0x968b,	// (0x00016c48) listscroll_midp_info_pane

0x966b,	// (0x00016c28) listscroll_form_midp_pane_ParamLimits

0x966b,	// (0x00016c28) listscroll_form_midp_pane

0x9677,	// (0x00016c34) scroll_bar_cp050

0x964b,	// (0x00016c08) list_midp_pane

0xb723,	// (0x00018ce0) signal_pane_g2_cp

0x9585,	// (0x00016b42) listscroll_midp_info_pane_t1_ParamLimits

0x9585,	// (0x00016b42) listscroll_midp_info_pane_t1

0x959d,	// (0x00016b5a) listscroll_midp_info_pane_t2_ParamLimits

0x959d,	// (0x00016b5a) listscroll_midp_info_pane_t2

0x95db,	// (0x00016b98) listscroll_midp_info_pane_t3_ParamLimits

0x95db,	// (0x00016b98) listscroll_midp_info_pane_t3

0x9615,	// (0x00016bd2) listscroll_midp_info_pane_t4_ParamLimits

0x9615,	// (0x00016bd2) listscroll_midp_info_pane_t4

0x0003,

0xf7f6,	// (0x0001cdb3) listscroll_midp_info_pane_t_ParamLimits

0xf7f6,	// (0x0001cdb3) listscroll_midp_info_pane_t

0x3d46,	// (0x00011303) scroll_pane_cp21

0x9525,	// (0x00016ae2) form_midp_field_choice_group_pane

0x952e,	// (0x00016aeb) form_midp_field_text_pane

0x956b,	// (0x00016b28) form_midp_field_time_pane

0x9573,	// (0x00016b30) form_midp_gauge_slider_pane

0x957c,	// (0x00016b39) form_midp_gauge_wait_pane

0x3708,	// (0x00010cc5) form_midp_image_pane

0x94f3,	// (0x00016ab0) list_single_midp_pane_ParamLimits

0x94f3,	// (0x00016ab0) list_single_midp_pane

0x94a8,	// (0x00016a65) form_midp_field_text_pane_t1

0x9263,	// (0x00016820) input_focus_pane_cp050

0x94e2,	// (0x00016a9f) list_midp_form_text_pane

0x9477,	// (0x00016a34) form_midp_field_choice_group_pane_t1

0x9485,	// (0x00016a42) input_focus_pane_cp051

0x9499,	// (0x00016a56) list_midp_choice_pane

0x3708,	// (0x00010cc5) status_idle_pane

0x945b,	// (0x00016a18) form_midp_field_time_pane_t1

0x36de,	// (0x00010c9b) wait_anim_pane_g2_copy1

0x9469,	// (0x00016a26) form_midp_field_time_pane_t2

0x0001,

0x48ca,	// (0x00011e87) aid_navinavi_width_2_pane

0xf7f1,	// (0x0001cdae) form_midp_field_time_pane_t

0x3708,	// (0x00010cc5) input_focus_pane_cp052

0x3708,	// (0x00010cc5) bg_input_focus_pane_cp040

0x941b,	// (0x000169d8) form_midp_gauge_slider_pane_t1

0x9429,	// (0x000169e6) form_midp_gauge_slider_pane_t2

0x9437,	// (0x000169f4) form_midp_gauge_slider_pane_t3

0x9445,	// (0x00016a02) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e8,	// (0x0001cda5) form_midp_gauge_slider_pane_t

0x9453,	// (0x00016a10) form_midp_slider_pane

0x3784,	// (0x00010d41) bg_input_focus_pane_cp041_ParamLimits

0x3784,	// (0x00010d41) bg_input_focus_pane_cp041

0x93e8,	// (0x000169a5) form_midp_gauge_wait_pane_t1_ParamLimits

0x93e8,	// (0x000169a5) form_midp_gauge_wait_pane_t1

0x93fa,	// (0x000169b7) form_midp_gauge_wait_pane_t2_ParamLimits

0x93fa,	// (0x000169b7) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e3,	// (0x0001cda0) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e3,	// (0x0001cda0) form_midp_gauge_wait_pane_t

0x940c,	// (0x000169c9) form_midp_wait_pane_ParamLimits

0x940c,	// (0x000169c9) form_midp_wait_pane

0x93b2,	// (0x0001696f) form_midp_image_pane_g1

0x93bb,	// (0x00016978) form_midp_image_pane_t1

0x93ca,	// (0x00016987) form_midp_image_pane_t2

0x93d9,	// (0x00016996) form_midp_image_pane_t3

0x0002,

0xf7dc,	// (0x0001cd99) form_midp_image_pane_t

0x939a,	// (0x00016957) list_single_midp_pane_g1

0x93a3,	// (0x00016960) list_single_midp_pane_t1

0x9371,	// (0x0001692e) list_midp_form_item_pane_ParamLimits

0x9371,	// (0x0001692e) list_midp_form_item_pane

0x4872,	// (0x00011e2f) list_midp_form_item_pane_t1

0x4881,	// (0x00011e3e) midp_ticker_pane_g1

0x488d,	// (0x00011e4a) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x0001cce1) midp_ticker_pane_g

0x4899,	// (0x00011e56) midp_ticker_pane_t1

0xa7dd,	// (0x00017d9a) midp_editing_number_pane_t1

0xa7bb,	// (0x00017d78) midp_editing_number_pane

0xa7ca,	// (0x00017d87) midp_ticker_pane

0xa53b,	// (0x00017af8) ai_message_heading_pane

0x3708,	// (0x00010cc5) bg_popup_window_pane_cp14

0xa543,	// (0x00017b00) listscroll_ai_message_pane

0xa4c5,	// (0x00017a82) ai_message_heading_pane_g1_ParamLimits

0xa4c5,	// (0x00017a82) ai_message_heading_pane_g1

0xa4d1,	// (0x00017a8e) ai_message_heading_pane_g2_ParamLimits

0xa4d1,	// (0x00017a8e) ai_message_heading_pane_g2

0xa4dd,	// (0x00017a9a) ai_message_heading_pane_g3_ParamLimits

0xa4dd,	// (0x00017a9a) ai_message_heading_pane_g3

0xa4e9,	// (0x00017aa6) ai_message_heading_pane_g4_ParamLimits

0xa4e9,	// (0x00017aa6) ai_message_heading_pane_g4

0x0003,

0xf91d,	// (0x0001ceda) ai_message_heading_pane_g_ParamLimits

0xf91d,	// (0x0001ceda) ai_message_heading_pane_g

0xa4f5,	// (0x00017ab2) ai_message_heading_pane_t1_ParamLimits

0xa4f5,	// (0x00017ab2) ai_message_heading_pane_t1

0xa50f,	// (0x00017acc) ai_message_heading_pane_t2_ParamLimits

0xa50f,	// (0x00017acc) ai_message_heading_pane_t2

0x0001,

0xf926,	// (0x0001cee3) ai_message_heading_pane_t_ParamLimits

0xf926,	// (0x0001cee3) ai_message_heading_pane_t

0xa521,	// (0x00017ade) bg_popup_heading_pane_cp1_ParamLimits

0xa521,	// (0x00017ade) bg_popup_heading_pane_cp1

0xa4b3,	// (0x00017a70) list_ai_message_pane_ParamLimits

0xa4b3,	// (0x00017a70) list_ai_message_pane

0x3d46,	// (0x00011303) scroll_pane_cp10

0xa44f,	// (0x00017a0c) list_ai_message_pane_g1

0xa457,	// (0x00017a14) list_ai_message_pane_g2

0x0001,

0xf8fa,	// (0x0001ceb7) list_ai_message_pane_g

0xa45f,	// (0x00017a1c) list_ai_message_pane_t1_ParamLimits

0xa45f,	// (0x00017a1c) list_ai_message_pane_t1

0xa474,	// (0x00017a31) list_ai_message_pane_t2_ParamLimits

0xa474,	// (0x00017a31) list_ai_message_pane_t2

0xa489,	// (0x00017a46) list_ai_message_pane_t3_ParamLimits

0xa489,	// (0x00017a46) list_ai_message_pane_t3

0xa49e,	// (0x00017a5b) list_ai_message_pane_t4_ParamLimits

0xa49e,	// (0x00017a5b) list_ai_message_pane_t4

0x0003,

0xf8ff,	// (0x0001cebc) list_ai_message_pane_t_ParamLimits

0xf8ff,	// (0x0001cebc) list_ai_message_pane_t

0xa43a,	// (0x000179f7) cell_ai_soft_ind_pane_ParamLimits

0xa43a,	// (0x000179f7) cell_ai_soft_ind_pane

0x48ab,	// (0x00011e68) cell_ai_soft_ind_pane_g1_ParamLimits

0x48ab,	// (0x00011e68) cell_ai_soft_ind_pane_g1

0x3708,	// (0x00010cc5) grid_highlight_cp1

0x48b8,	// (0x00011e75) text_secondary_cp56_ParamLimits

0x48b8,	// (0x00011e75) text_secondary_cp56

0xa40f,	// (0x000179cc) example_general_pane_ParamLimits

0xa40f,	// (0x000179cc) example_general_pane

0xa41b,	// (0x000179d8) example_parent_pane_g1_ParamLimits

0xa41b,	// (0x000179d8) example_parent_pane_g1

0xa427,	// (0x000179e4) example_parent_pane_t1_ParamLimits

0xa427,	// (0x000179e4) example_parent_pane_t1

0x62f3,	// (0x000138b0) popup_preview_text_window_ParamLimits

0x62f3,	// (0x000138b0) popup_preview_text_window

0x47cd,	// (0x00011d8a) list_single_pane_cp2_g4

0x3970,	// (0x00010f2d) bg_popup_preview_window_pane_ParamLimits

0x3970,	// (0x00010f2d) bg_popup_preview_window_pane

0xa169,	// (0x00017726) popup_preview_text_window_t1_ParamLimits

0xa169,	// (0x00017726) popup_preview_text_window_t1

0xa187,	// (0x00017744) popup_preview_text_window_t2_ParamLimits

0xa187,	// (0x00017744) popup_preview_text_window_t2

0xa1d0,	// (0x0001778d) popup_preview_text_window_t3_ParamLimits

0xa1d0,	// (0x0001778d) popup_preview_text_window_t3

0xa215,	// (0x000177d2) popup_preview_text_window_t4_ParamLimits

0xa215,	// (0x000177d2) popup_preview_text_window_t4

0x0004,

0xf8ce,	// (0x0001ce8b) popup_preview_text_window_t_ParamLimits

0xf8ce,	// (0x0001ce8b) popup_preview_text_window_t

0xa293,	// (0x00017850) scroll_pane_cp11

0x9143,	// (0x00016700) bg_popup_preview_window_pane_g1

0xa129,	// (0x000176e6) bg_popup_preview_window_pane_g2

0xa131,	// (0x000176ee) bg_popup_preview_window_pane_g3

0xa139,	// (0x000176f6) bg_popup_preview_window_pane_g4

0xa141,	// (0x000176fe) bg_popup_preview_window_pane_g5

0xa149,	// (0x00017706) bg_popup_preview_window_pane_g6

0xa151,	// (0x0001770e) bg_popup_preview_window_pane_g7

0xa159,	// (0x00017716) bg_popup_preview_window_pane_g8

0x54ee,	// (0x00012aab) aid_popup_width_pane

0x62d1,	// (0x0001388e) popup_midp_note_alarm_window_ParamLimits

0x62d1,	// (0x0001388e) popup_midp_note_alarm_window

0x3b9a,	// (0x00011157) data_form_pane_ParamLimits

0x84fe,	// (0x00015abb) form_field_data_pane_g1

0x8508,	// (0x00015ac5) form_field_data_pane_t1_ParamLimits

0x3ba6,	// (0x00011163) input_focus_pane_ParamLimits

0x3bb4,	// (0x00011171) data_form_wide_pane_ParamLimits

0x3bc5,	// (0x00011182) form_field_data_wide_pane_g1

0x3bf1,	// (0x000111ae) form_field_data_wide_pane_t1_ParamLimits

0x3a48,	// (0x00011005) input_focus_pane_cp6_ParamLimits

0x8674,	// (0x00015c31) input_popup_find_pane_g1_ParamLimits

0x8674,	// (0x00015c31) input_popup_find_pane_g1

0x5a5c,	// (0x00013019) aid_navi_side_left_pane

0x5a71,	// (0x0001302e) aid_navi_side_right_pane

0x9b52,	// (0x0001710f) bg_popup_window_pane_cp30_ParamLimits

0x9b52,	// (0x0001710f) bg_popup_window_pane_cp30

0x9bcc,	// (0x00017189) popup_midp_note_alarm_window_g1_ParamLimits

0x9bcc,	// (0x00017189) popup_midp_note_alarm_window_g1

0x9bfc,	// (0x000171b9) popup_midp_note_alarm_window_t1_ParamLimits

0x9bfc,	// (0x000171b9) popup_midp_note_alarm_window_t1

0x9c9d,	// (0x0001725a) popup_midp_note_alarm_window_t2_ParamLimits

0x9c9d,	// (0x0001725a) popup_midp_note_alarm_window_t2

0x9d4b,	// (0x00017308) popup_midp_note_alarm_window_t3_ParamLimits

0x9d4b,	// (0x00017308) popup_midp_note_alarm_window_t3

0x9d73,	// (0x00017330) popup_midp_note_alarm_window_t4_ParamLimits

0x9d73,	// (0x00017330) popup_midp_note_alarm_window_t4

0x9d93,	// (0x00017350) popup_midp_note_alarm_window_t5_ParamLimits

0x9d93,	// (0x00017350) popup_midp_note_alarm_window_t5

0x000a,

0xf86b,	// (0x0001ce28) popup_midp_note_alarm_window_t_ParamLimits

0xf86b,	// (0x0001ce28) popup_midp_note_alarm_window_t

0x9e3f,	// (0x000173fc) wait_bar_pane_cp1_ParamLimits

0x9e3f,	// (0x000173fc) wait_bar_pane_cp1

0x3708,	// (0x00010cc5) wait_anim_pane_copy1

0x3708,	// (0x00010cc5) wait_border_pane_copy1

0x9848,	// (0x00016e05) wait_border_pane_g1_copy1

0x3c0b,	// (0x000111c8) form_field_popup_pane_g1

0x8520,	// (0x00015add) form_field_popup_pane_t1_ParamLimits

0x3ba6,	// (0x00011163) input_focus_pane_cp7_ParamLimits

0x3c13,	// (0x000111d0) list_form_pane_ParamLimits

0x3c1f,	// (0x000111dc) form_field_popup_wide_pane_g1

0x3c27,	// (0x000111e4) form_field_popup_wide_pane_t1_ParamLimits

0x3ba6,	// (0x00011163) input_focus_pane_cp8_ParamLimits

0x3c3c,	// (0x000111f9) list_form_wide_pane_ParamLimits

0xaa21,	// (0x00017fde) aid_size_cell_graphic_pane

0x8594,	// (0x00015b51) data_form_pane_t1_ParamLimits

0xa788,	// (0x00017d45) data_form_wide_pane_t1_ParamLimits

0x8cdf,	// (0x0001629c) bg_status_flat_pane

0x7ba6,	// (0x00015163) title_pane_t1_ParamLimits

0x373e,	// (0x00010cfb) title_pane_t2_ParamLimits

0x3764,	// (0x00010d21) title_pane_t3_ParamLimits

0xf532,	// (0x0001caef) title_pane_t_ParamLimits

0x41b8,	// (0x00011775) level_1_signal_ParamLimits

0x41c5,	// (0x00011782) level_2_signal_ParamLimits

0x41d2,	// (0x0001178f) level_3_signal_ParamLimits

0x41df,	// (0x0001179c) level_4_signal_ParamLimits

0x41ec,	// (0x000117a9) level_5_signal_ParamLimits

0x41f9,	// (0x000117b6) level_6_signal_ParamLimits

0x4206,	// (0x000117c3) level_7_signal_ParamLimits

0x41b8,	// (0x00011775) level_1_battery_ParamLimits

0x41c5,	// (0x00011782) level_2_battery_ParamLimits

0x41d2,	// (0x0001178f) level_3_battery_ParamLimits

0x41df,	// (0x0001179c) level_4_battery_ParamLimits

0x41ec,	// (0x000117a9) level_5_battery_ParamLimits

0x41f9,	// (0x000117b6) level_6_battery_ParamLimits

0x4206,	// (0x000117c3) level_7_battery_ParamLimits

0x9a57,	// (0x00017014) bg_status_flat_pane_g1

0x9a5f,	// (0x0001701c) bg_status_flat_pane_g2

0x9a67,	// (0x00017024) bg_status_flat_pane_g3

0x9a6f,	// (0x0001702c) bg_status_flat_pane_g4

0x9a77,	// (0x00017034) bg_status_flat_pane_g5

0x9a7f,	// (0x0001703c) bg_status_flat_pane_g6

0x9a87,	// (0x00017044) bg_status_flat_pane_g7

0x7c16,	// (0x000151d3) tabs_3_active_pane_t1_ParamLimits

0x7c16,	// (0x000151d3) tabs_3_passive_pane_t1_ParamLimits

0x7c30,	// (0x000151ed) tabs_4_active_pane_t1_ParamLimits

0x7c30,	// (0x000151ed) tabs_4_1_passive_pane_t1_ParamLimits

0x86ab,	// (0x00015c68) tabs_2_active_pane_t1_ParamLimits

0x86ab,	// (0x00015c68) tabs_2_passive_pane_t1_ParamLimits

0x86bd,	// (0x00015c7a) bg_active_tab_pane_cp4_ParamLimits

0x86cb,	// (0x00015c88) tabs_2_long_active_pane_t1_ParamLimits

0x86de,	// (0x00015c9b) bg_passive_tab_pane_cp4_ParamLimits

0x6616,	// (0x00013bd3) list_single_midp_graphic_pane_t1_ParamLimits

0x86bd,	// (0x00015c7a) bg_active_tab_pane_cp5_ParamLimits

0x86ea,	// (0x00015ca7) tabs_3_long_active_pane_t1_ParamLimits

0x86de,	// (0x00015c9b) bg_passive_tab_pane_cp5_ParamLimits

0x6616,	// (0x00013bd3) list_single_midp_graphic_pane_t1

0x8cdf,	// (0x0001629c) bg_status_flat_pane_ParamLimits

0x8da8,	// (0x00016365) indicator_pane_cp2_ParamLimits

0x8da8,	// (0x00016365) indicator_pane_cp2

0x8ed3,	// (0x00016490) navi_pane_srt_ParamLimits

0x8ed3,	// (0x00016490) navi_pane_srt

0x8ef7,	// (0x000164b4) popup_clock_digital_analogue_window_cp1

0x37e2,	// (0x00010d9f) indicator_pane_t1

0x486a,	// (0x00011e27) copy_highlight_pane

0x486a,	// (0x00011e27) cursor_graphics_pane

0x486a,	// (0x00011e27) graphic_within_text_pane

0x486a,	// (0x00011e27) link_highlight_pane

0xa256,	// (0x00017813) popup_preview_text_window_t5_ParamLimits

0xa256,	// (0x00017813) popup_preview_text_window_t5

0x48d2,	// (0x00011e8f) cursor_digital_pane

0x48d2,	// (0x00011e8f) cursor_primary_pane

0x48e3,	// (0x00011ea0) cursor_primary_small_pane

0x48eb,	// (0x00011ea8) cursor_secondary_pane

0x48f3,	// (0x00011eb0) cursor_title_pane

0x48d2,	// (0x00011e8f) link_highlight_digital_pane

0x48da,	// (0x00011e97) link_highlight_primary_pane

0x48e3,	// (0x00011ea0) link_highlight_primary_small_pane

0x48eb,	// (0x00011ea8) link_highlight_secondary_pane

0x48f3,	// (0x00011eb0) link_highlight_title_pane

0x48d2,	// (0x00011e8f) copy_highlight_digital_pane

0x48d2,	// (0x00011e8f) copy_highlight_primary_pane

0x48e3,	// (0x00011ea0) copy_highlight_primary_small_pane

0x48eb,	// (0x00011ea8) copy_highlight_secondary_pane

0x48f3,	// (0x00011eb0) copy_highlight_title_pane

0x48eb,	// (0x00011ea8) graphic_text_digital_pane

0x9af5,	// (0x000170b2) graphic_text_primary_pane

0x9afe,	// (0x000170bb) graphic_text_primary_small_pane

0x48e3,	// (0x00011ea0) graphic_text_secondary_pane

0x48d2,	// (0x00011e8f) graphic_text_title_pane

0x8b50,	// (0x0001610d) cursor_primary_pane_g1

0x9ae7,	// (0x000170a4) cursor_text_primary_t1

0x9acf,	// (0x0001708c) cursor_primary_small_pane_g1

0x9ad9,	// (0x00017096) cursor_text_primary_small_t1

0x9ab7,	// (0x00017074) cursor_primary_small_pane_g1_copy1

0x9ac1,	// (0x0001707e) cursor_text_primary_small_t1_copy1

0x9a9f,	// (0x0001705c) cursor_text_title_t1

0x9aad,	// (0x0001706a) cursor_title_pane_g1

0x8b50,	// (0x0001610d) cursor_digital_pane_g1

0x48fb,	// (0x00011eb8) cursor_text_digital_t1

0x4909,	// (0x00011ec6) link_highlight_primary_pane_g1

0x9a48,	// (0x00017005) link_highlight_primary_pane_t1

0x4909,	// (0x00011ec6) link_highlight_primary_small_pane_g1

0x4911,	// (0x00011ece) link_highlight_primary_small_pane_t1

0x4909,	// (0x00011ec6) link_highlight_secondary_pane_g1

0x4920,	// (0x00011edd) link_highlight_secondary_pane_t1

0x99ad,	// (0x00016f6a) link_highlight_title_pane_g1

0x99c4,	// (0x00016f81) link_highlight_title_pane_t1

0x99ad,	// (0x00016f6a) link_highlight_digital_pane_g1

0x99b5,	// (0x00016f72) link_highlight_digital_pane_t1

0x9867,	// (0x00016e24) copy_highlight_primary_pane_g1

0x988d,	// (0x00016e4a) copy_highlight_primary_pane_t1

0x9867,	// (0x00016e24) copy_highlight_primary_small_pane_g1

0x987e,	// (0x00016e3b) copy_highlight_primary_small_pane_t1

0x492f,	// (0x00011eec) copy_highlight_secondary_pane_g1

0x4937,	// (0x00011ef4) copy_highlight_secondary_pane_t1

0x9867,	// (0x00016e24) copy_highlight_title_pane_g1

0x986f,	// (0x00016e2c) copy_highlight_title_pane_t1

0x9867,	// (0x00016e24) copy_highlight_digital_pane_g1

0xabef,	// (0x000181ac) copy_highlight_digital_pane_t1

0xab43,	// (0x00018100) graphic_text_primary_pane_g1

0xabd3,	// (0x00018190) graphic_text_primary_pane_t1

0xabe1,	// (0x0001819e) graphic_text_primary_pane_t2

0x0001,

0xf99a,	// (0x0001cf57) graphic_text_primary_pane_t

0xabaf,	// (0x0001816c) graphic_text_primary_small_pane_g1

0xabb7,	// (0x00018174) graphic_text_primary_small_pane_t1

0xabc5,	// (0x00018182) graphic_text_primary_small_pane_t2

0x0001,

0xf995,	// (0x0001cf52) graphic_text_primary_small_pane_t

0xab8b,	// (0x00018148) graphic_text_secondary_pane_g1

0xab93,	// (0x00018150) graphic_text_secondary_pane_t1

0xaba1,	// (0x0001815e) graphic_text_secondary_pane_t2

0x0001,

0xf990,	// (0x0001cf4d) graphic_text_secondary_pane_t

0xab67,	// (0x00018124) graphic_text_title_pane_g1

0xab6f,	// (0x0001812c) graphic_text_title_pane_t1

0xab7d,	// (0x0001813a) graphic_text_title_pane_t2

0x0001,

0xf98b,	// (0x0001cf48) graphic_text_title_pane_t

0xab43,	// (0x00018100) graphic_text_digital_pane_g1

0xab4b,	// (0x00018108) graphic_text_digital_pane_t1

0xab59,	// (0x00018116) graphic_text_digital_pane_t2

0x0001,

0xf986,	// (0x0001cf43) graphic_text_digital_pane_t

0x3784,	// (0x00010d41) navi_icon_pane_srt_ParamLimits

0x3784,	// (0x00010d41) navi_icon_pane_srt

0x3708,	// (0x00010cc5) navi_midp_pane_srt

0x3708,	// (0x00010cc5) navi_navi_pane_srt

0x3784,	// (0x00010d41) navi_text_pane_srt_ParamLimits

0x3784,	// (0x00010d41) navi_text_pane_srt

0xab0e,	// (0x000180cb) navi_navi_icon_text_pane_srt

0xab16,	// (0x000180d3) navi_navi_pane_srt_g1_ParamLimits

0xab16,	// (0x000180d3) navi_navi_pane_srt_g1

0xab28,	// (0x000180e5) navi_navi_pane_srt_g2_ParamLimits

0xab28,	// (0x000180e5) navi_navi_pane_srt_g2

0x0001,

0xf981,	// (0x0001cf3e) navi_navi_pane_srt_g_ParamLimits

0xf981,	// (0x0001cf3e) navi_navi_pane_srt_g

0xab3a,	// (0x000180f7) navi_navi_tabs_pane_srt

0xab0e,	// (0x000180cb) navi_navi_text_pane_srt

0xab0e,	// (0x000180cb) navi_navi_volume_pane_srt

0xaaff,	// (0x000180bc) navi_navi_text_pane_srt_t1

0x6996,	// (0x00013f53) navi_navi_volume_pane_srt_g1

0x699e,	// (0x00013f5b) volume_small_pane_srt_ParamLimits

0x699e,	// (0x00013f5b) volume_small_pane_srt

0x5d33,	// (0x000132f0) volume_small_pane_srt_g1_ParamLimits

0x5d33,	// (0x000132f0) volume_small_pane_srt_g1

0x5d43,	// (0x00013300) volume_small_pane_srt_g2_ParamLimits

0x5d43,	// (0x00013300) volume_small_pane_srt_g2

0x5d54,	// (0x00013311) volume_small_pane_srt_g3_ParamLimits

0x5d54,	// (0x00013311) volume_small_pane_srt_g3

0x5d65,	// (0x00013322) volume_small_pane_srt_g4_ParamLimits

0x5d65,	// (0x00013322) volume_small_pane_srt_g4

0x5d76,	// (0x00013333) volume_small_pane_srt_g5_ParamLimits

0x5d76,	// (0x00013333) volume_small_pane_srt_g5

0x5d87,	// (0x00013344) volume_small_pane_srt_g6_ParamLimits

0x5d87,	// (0x00013344) volume_small_pane_srt_g6

0x5d98,	// (0x00013355) volume_small_pane_srt_g7_ParamLimits

0x5d98,	// (0x00013355) volume_small_pane_srt_g7

0x5da9,	// (0x00013366) volume_small_pane_srt_g8_ParamLimits

0x5da9,	// (0x00013366) volume_small_pane_srt_g8

0x5dba,	// (0x00013377) volume_small_pane_srt_g9_ParamLimits

0x5dba,	// (0x00013377) volume_small_pane_srt_g9

0x5dcb,	// (0x00013388) volume_small_pane_srt_g10_ParamLimits

0x5dcb,	// (0x00013388) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x0001cce6) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x0001cce6) volume_small_pane_srt_g

0x7dec,	// (0x000153a9) query_popup_data_pane_cp2

0xaae5,	// (0x000180a2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaae5,	// (0x000180a2) navi_navi_icon_text_pane_srt_t1

0x9af5,	// (0x000170b2) navi_tabs_2_long_pane_srt

0x9af5,	// (0x000170b2) navi_tabs_2_pane_srt

0x9af5,	// (0x000170b2) navi_tabs_3_long_pane_srt

0x9af5,	// (0x000170b2) navi_tabs_3_pane_srt

0x9af5,	// (0x000170b2) navi_tabs_4_pane_srt

0x6976,	// (0x00013f33) tabs_2_active_pane_srt_ParamLimits

0x6976,	// (0x00013f33) tabs_2_active_pane_srt

0x6986,	// (0x00013f43) tabs_2_passive_pane_srt_ParamLimits

0x6986,	// (0x00013f43) tabs_2_passive_pane_srt

0x4a49,	// (0x00012006) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4a49,	// (0x00012006) bg_passive_tab_pane_cp1_srt

0xaab1,	// (0x0001806e) bg_passive_tab_pane_g1_cp1_srt

0x899a,	// (0x00015f57) bg_passive_tab_pane_g2_cp1_srt

0xaaba,	// (0x00018077) bg_passive_tab_pane_g3_cp1_srt

0x3784,	// (0x00010d41) bg_active_tab_pane_cp1_srt_ParamLimits

0x3784,	// (0x00010d41) bg_active_tab_pane_cp1_srt

0xaac3,	// (0x00018080) tabs_2_active_pane_srt_g1

0xaacb,	// (0x00018088) tabs_2_active_pane_srt_t1_ParamLimits

0xaacb,	// (0x00018088) tabs_2_active_pane_srt_t1

0xaab1,	// (0x0001806e) bg_active_tab_pane_g1_cp1_srt

0x899a,	// (0x00015f57) bg_active_tab_pane_g2_cp1_srt

0xaaba,	// (0x00018077) bg_active_tab_pane_g3_cp1_srt

0x6943,	// (0x00013f00) tabs_3_active_pane_srt_ParamLimits

0x6943,	// (0x00013f00) tabs_3_active_pane_srt

0x6954,	// (0x00013f11) tabs_3_passive_pane_cp_srt_ParamLimits

0x6954,	// (0x00013f11) tabs_3_passive_pane_cp_srt

0x6965,	// (0x00013f22) tabs_3_passive_pane_srt_ParamLimits

0x6965,	// (0x00013f22) tabs_3_passive_pane_srt

0x4a49,	// (0x00012006) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4a49,	// (0x00012006) bg_passive_tab_pane_cp2_srt

0x8b5a,	// (0x00016117) bg_passive_tab_pane_g1_cp2_srt

0x899a,	// (0x00015f57) bg_passive_tab_pane_g2_cp2_srt

0x8b63,	// (0x00016120) bg_passive_tab_pane_g3_cp2_srt

0x3784,	// (0x00010d41) bg_active_tab_pane_cp2_srt_ParamLimits

0x3784,	// (0x00010d41) bg_active_tab_pane_cp2_srt

0xaa97,	// (0x00018054) tabs_3_active_pane_srt_g1

0xaa9f,	// (0x0001805c) tabs_3_active_pane_srt_t1_ParamLimits

0xaa9f,	// (0x0001805c) tabs_3_active_pane_srt_t1

0x8b5a,	// (0x00016117) bg_active_tab_pane_g1_cp2_srt

0x899a,	// (0x00015f57) bg_active_tab_pane_g2_cp2_srt

0x8b63,	// (0x00016120) bg_active_tab_pane_g3_cp2_srt

0x68fb,	// (0x00013eb8) tabs_4_active_pane_srt_ParamLimits

0x68fb,	// (0x00013eb8) tabs_4_active_pane_srt

0x690d,	// (0x00013eca) tabs_4_passive_pane_cp2_srt_ParamLimits

0x690d,	// (0x00013eca) tabs_4_passive_pane_cp2_srt

0x5f3e,	// (0x000134fb) aid_size_cell_toolbar

0x86de,	// (0x00015c9b) main_idle_act_pane_ParamLimits

0x6103,	// (0x000136c0) popup_large_graphic_colour_window_ParamLimits

0x646e,	// (0x00013a2b) popup_toolbar_window_ParamLimits

0x646e,	// (0x00013a2b) popup_toolbar_window

0xa808,	// (0x00017dc5) list_single_graphic_2heading_pane_ParamLimits

0xa808,	// (0x00017dc5) list_single_graphic_2heading_pane

0x4081,	// (0x0001163e) aid_size_cell_apps_grid_lsc_pane

0x4093,	// (0x00011650) aid_size_cell_apps_grid_prt_pane

0x4a49,	// (0x00012006) bg_wml_button_pane_cp1_ParamLimits

0x4a49,	// (0x00012006) bg_wml_button_pane_cp1

0x94a8,	// (0x00016a65) form_midp_field_text_pane_t1_ParamLimits

0x9263,	// (0x00016820) input_focus_pane_cp050_ParamLimits

0x94e2,	// (0x00016a9f) list_midp_form_text_pane_ParamLimits

0x9485,	// (0x00016a42) input_focus_pane_cp051_ParamLimits

0x9499,	// (0x00016a56) list_midp_choice_pane_ParamLimits

0x9319,	// (0x000168d6) list_single_2graphic_pane_cp3_ParamLimits

0x9319,	// (0x000168d6) list_single_2graphic_pane_cp3

0x933e,	// (0x000168fb) list_single_midp_graphic_pane_ParamLimits

0x933e,	// (0x000168fb) list_single_midp_graphic_pane

0x651b,	// (0x00013ad8) list_single_graphic_2heading_pane_g1_ParamLimits

0x651b,	// (0x00013ad8) list_single_graphic_2heading_pane_g1

0x6527,	// (0x00013ae4) list_single_graphic_2heading_pane_g4_ParamLimits

0x6527,	// (0x00013ae4) list_single_graphic_2heading_pane_g4

0x6533,	// (0x00013af0) list_single_graphic_2heading_pane_g5_ParamLimits

0x6533,	// (0x00013af0) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x0001cd39) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x0001cd39) list_single_graphic_2heading_pane_g

0x653f,	// (0x00013afc) list_single_graphic_2heading_pane_t1_ParamLimits

0x653f,	// (0x00013afc) list_single_graphic_2heading_pane_t1

0x6553,	// (0x00013b10) list_single_graphic_2heading_pane_t2_ParamLimits

0x6553,	// (0x00013b10) list_single_graphic_2heading_pane_t2

0x656d,	// (0x00013b2a) list_single_graphic_2heading_pane_t3_ParamLimits

0x656d,	// (0x00013b2a) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x0001cd40) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x0001cd40) list_single_graphic_2heading_pane_t

0x9053,	// (0x00016610) bg_popup_sub_pane_cp2

0x907d,	// (0x0001663a) grid_toobar_pane

0x6585,	// (0x00013b42) cell_toolbar_pane_ParamLimits

0x6585,	// (0x00013b42) cell_toolbar_pane

0x90e7,	// (0x000166a4) cell_toolbar_pane_g1_ParamLimits

0x90e7,	// (0x000166a4) cell_toolbar_pane_g1

0x90fb,	// (0x000166b8) cell_toolbar_pane_g2_ParamLimits

0x90fb,	// (0x000166b8) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x0001cd4e) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x0001cd4e) cell_toolbar_pane_g

0x911d,	// (0x000166da) grid_highlight_pane_cp2_ParamLimits

0x911d,	// (0x000166da) grid_highlight_pane_cp2

0x9137,	// (0x000166f4) toolbar_button_pane

0x9143,	// (0x00016700) toolbar_button_pane_g1

0x914b,	// (0x00016708) toolbar_button_pane_g2

0x9153,	// (0x00016710) toolbar_button_pane_g3

0x915b,	// (0x00016718) toolbar_button_pane_g4

0x9163,	// (0x00016720) toolbar_button_pane_g5

0x916b,	// (0x00016728) toolbar_button_pane_g6

0x9173,	// (0x00016730) toolbar_button_pane_g7

0x917b,	// (0x00016738) toolbar_button_pane_g8

0x9183,	// (0x00016740) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x0001cd53) toolbar_button_pane_g

0x65bd,	// (0x00013b7a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x65bd,	// (0x00013b7a) list_single_2graphic_pane_g1_cp3

0x65c9,	// (0x00013b86) list_single_2graphic_pane_g2_cp3_ParamLimits

0x65c9,	// (0x00013b86) list_single_2graphic_pane_g2_cp3

0x65da,	// (0x00013b97) list_single_2graphic_pane_g3_cp3

0x65e2,	// (0x00013b9f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x65e2,	// (0x00013b9f) list_single_2graphic_pane_g4_cp3

0x65ee,	// (0x00013bab) list_single_2graphic_pane_t1_cp3_ParamLimits

0x65ee,	// (0x00013bab) list_single_2graphic_pane_t1_cp3

0x660a,	// (0x00013bc7) list_single_midp_graphic_pane_g2_ParamLimits

0x660a,	// (0x00013bc7) list_single_midp_graphic_pane_g2

0x5f46,	// (0x00013503) aid_zoom_text_primary

0x5f4e,	// (0x0001350b) aid_zoom_text_secondary

0x4a61,	// (0x0001201e) status_small_pane_g7_ParamLimits

0x4a61,	// (0x0001201e) status_small_pane_g7

0x8bbd,	// (0x0001617a) status_small_pane_t1_ParamLimits

0x7b89,	// (0x00015146) title_pane_g2

0x0003,

0xf529,	// (0x0001cae6) title_pane_g

0x7e46,	// (0x00015403) aid_size_cell_colour_1_pane_ParamLimits

0x7e46,	// (0x00015403) aid_size_cell_colour_1_pane

0x7e5a,	// (0x00015417) aid_size_cell_colour_2_pane_ParamLimits

0x7e5a,	// (0x00015417) aid_size_cell_colour_2_pane

0x7e6e,	// (0x0001542b) aid_size_cell_colour_3_pane_ParamLimits

0x7e6e,	// (0x0001542b) aid_size_cell_colour_3_pane

0x7e82,	// (0x0001543f) aid_size_cell_colour_4_pane_ParamLimits

0x7e82,	// (0x0001543f) aid_size_cell_colour_4_pane

0x5999,	// (0x00012f56) title_pane_stacon_g1_ParamLimits

0x5999,	// (0x00012f56) title_pane_stacon_g1

0x98e4,	// (0x00016ea1) popup_note_wait_window_g3_ParamLimits

0x98e4,	// (0x00016ea1) popup_note_wait_window_g3

0x995a,	// (0x00016f17) popup_note_wait_window_t5_ParamLimits

0x995a,	// (0x00016f17) popup_note_wait_window_t5

0x3708,	// (0x00010cc5) main_feb_china_hwr_fs_writing_pane

0x5fea,	// (0x000135a7) popup_feb_china_hwr_fs_window_ParamLimits

0x5fea,	// (0x000135a7) popup_feb_china_hwr_fs_window

0x662c,	// (0x00013be9) aid_size_cell_hwr_fs_ParamLimits

0x662c,	// (0x00013be9) aid_size_cell_hwr_fs

0x9263,	// (0x00016820) bg_popup_sub_pane_cp3_ParamLimits

0x9263,	// (0x00016820) bg_popup_sub_pane_cp3

0x6641,	// (0x00013bfe) grid_hwr_fs_pane_ParamLimits

0x6641,	// (0x00013bfe) grid_hwr_fs_pane

0x6659,	// (0x00013c16) linegrid_hwr_fs_pane_ParamLimits

0x6659,	// (0x00013c16) linegrid_hwr_fs_pane

0x6669,	// (0x00013c26) cell_hwr_fs_pane_ParamLimits

0x6669,	// (0x00013c26) cell_hwr_fs_pane

0x926f,	// (0x0001682c) linegrid_hwr_fs_pane_g1_ParamLimits

0x926f,	// (0x0001682c) linegrid_hwr_fs_pane_g1

0x927b,	// (0x00016838) linegrid_hwr_fs_pane_g2_ParamLimits

0x927b,	// (0x00016838) linegrid_hwr_fs_pane_g2

0x928d,	// (0x0001684a) linegrid_hwr_fs_pane_g3_ParamLimits

0x928d,	// (0x0001684a) linegrid_hwr_fs_pane_g3

0x668b,	// (0x00013c48) linegrid_hwr_fs_pane_g4_ParamLimits

0x668b,	// (0x00013c48) linegrid_hwr_fs_pane_g4

0x66a5,	// (0x00013c62) linegrid_hwr_fs_pane_g5_ParamLimits

0x66a5,	// (0x00013c62) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c1,	// (0x0001cd7e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c1,	// (0x0001cd7e) linegrid_hwr_fs_pane_g

0x9299,	// (0x00016856) cell_hwr_fs_pane_g1_ParamLimits

0x9299,	// (0x00016856) cell_hwr_fs_pane_g1

0x8f8d,	// (0x0001654a) cell_hwr_fs_pane_g2_ParamLimits

0x8f8d,	// (0x0001654a) cell_hwr_fs_pane_g2

0x92af,	// (0x0001686c) cell_hwr_fs_pane_g3_ParamLimits

0x92af,	// (0x0001686c) cell_hwr_fs_pane_g3

0x92bc,	// (0x00016879) cell_hwr_fs_pane_g4_ParamLimits

0x92bc,	// (0x00016879) cell_hwr_fs_pane_g4

0x0003,

0xf7cc,	// (0x0001cd89) cell_hwr_fs_pane_g_ParamLimits

0xf7cc,	// (0x0001cd89) cell_hwr_fs_pane_g

0x66bb,	// (0x00013c78) cell_hwr_fs_pane_t1

0x3708,	// (0x00010cc5) grid_highlight_pane_cp6

0x3708,	// (0x00010cc5) main_idle_act2_pane

0x3d2d,	// (0x000112ea) aid_inside_area_popup_secondary

0x9f79,	// (0x00017536) aid_inside_area_window_primary_ParamLimits

0x9f79,	// (0x00017536) aid_inside_area_window_primary

0xabfe,	// (0x000181bb) ai2_news_ticker_pane

0xac06,	// (0x000181c3) aid_size_cell_ai1_link_ParamLimits

0xac06,	// (0x000181c3) aid_size_cell_ai1_link

0xac20,	// (0x000181dd) popup_ai2_data_window_ParamLimits

0xac20,	// (0x000181dd) popup_ai2_data_window

0xac36,	// (0x000181f3) popup_ai2_link_window_ParamLimits

0xac36,	// (0x000181f3) popup_ai2_link_window

0x9263,	// (0x00016820) bg_popup_sub_pane_cp4_ParamLimits

0x9263,	// (0x00016820) bg_popup_sub_pane_cp4

0xac4a,	// (0x00018207) grid_ai2_link_pane_ParamLimits

0xac4a,	// (0x00018207) grid_ai2_link_pane

0xac61,	// (0x0001821e) popup_ai2_link_window_g1_ParamLimits

0xac61,	// (0x0001821e) popup_ai2_link_window_g1

0xac6d,	// (0x0001822a) popup_ai2_link_window_g2_ParamLimits

0xac6d,	// (0x0001822a) popup_ai2_link_window_g2

0x0001,

0xf99f,	// (0x0001cf5c) popup_ai2_link_window_g_ParamLimits

0xf99f,	// (0x0001cf5c) popup_ai2_link_window_g

0xac7c,	// (0x00018239) ai2_mp_button_pane

0xac84,	// (0x00018241) ai2_mp_volume_pane

0x9485,	// (0x00016a42) bg_popup_sub_pane_cp5_ParamLimits

0x9485,	// (0x00016a42) bg_popup_sub_pane_cp5

0xac8c,	// (0x00018249) heading_ai2_gene_pane_ParamLimits

0xac8c,	// (0x00018249) heading_ai2_gene_pane

0xac98,	// (0x00018255) list_ai2_gene_pane_ParamLimits

0xac98,	// (0x00018255) list_ai2_gene_pane

0xace0,	// (0x0001829d) cell_ai2_link_pane_ParamLimits

0xace0,	// (0x0001829d) cell_ai2_link_pane

0xacf6,	// (0x000182b3) cell_ai2_link_pane_g1

0x3708,	// (0x00010cc5) grid_highlight_pane_cp7

0x69b3,	// (0x00013f70) ai2_mp_volume_pane_g1

0xadc6,	// (0x00018383) ai2_mp_volume_pane_g2

0xad3b,	// (0x000182f8) list_ai2_gene_pane_t1

0xadce,	// (0x0001838b) ai2_mp_volume_pane_g3

0x0002,

0xf9b8,	// (0x0001cf75) ai2_mp_volume_pane_g

0x69bb,	// (0x00013f78) volume_small_pane_cp3

0xadd6,	// (0x00018393) aid_size_cell_ai2_button

0xadde,	// (0x0001839b) grid_ai2_button_pane

0xade7,	// (0x000183a4) cell_ai2_button_pane_ParamLimits

0xade7,	// (0x000183a4) cell_ai2_button_pane

0x36de,	// (0x00010c9b) cell_ai2_button_pane_g1

0x3708,	// (0x00010cc5) grid_highlight_pane_cp8

0xad86,	// (0x00018343) ai2_gene_pane_t1_ParamLimits

0xad86,	// (0x00018343) ai2_gene_pane_t1

0x5f34,	// (0x000134f1) aid_height_parent_landscape

0xa5f4,	// (0x00017bb1) aid_height_set_list

0xa605,	// (0x00017bc2) aid_size_parent

0xaa21,	// (0x00017fde) aid_size_cell_graphic_pane_ParamLimits

0xaca8,	// (0x00018265) popup_ai2_data_window_g1_ParamLimits

0xaca8,	// (0x00018265) popup_ai2_data_window_g1

0xacb4,	// (0x00018271) ai2_news_ticker_pane_g1

0xacbc,	// (0x00018279) ai2_news_ticker_pane_g2

0x0001,

0xf9a4,	// (0x0001cf61) ai2_news_ticker_pane_g

0xacc4,	// (0x00018281) ai2_news_ticker_pane_t1

0xacd2,	// (0x0001828f) ai2_news_ticker_pane_t2

0x0001,

0xf9a9,	// (0x0001cf66) ai2_news_ticker_pane_t

0xacff,	// (0x000182bc) heading_ai2_gene_pane_g1

0xad07,	// (0x000182c4) heading_ai2_gene_pane_t1_ParamLimits

0xad07,	// (0x000182c4) heading_ai2_gene_pane_t1

0xad1c,	// (0x000182d9) list_highlight_pane_cp6

0xad24,	// (0x000182e1) ai2_gene_pane_ParamLimits

0xad24,	// (0x000182e1) ai2_gene_pane

0xad49,	// (0x00018306) list_ai2_gene_pane_t2

0x0001,

0xf9ae,	// (0x0001cf6b) list_ai2_gene_pane_t

0xad57,	// (0x00018314) list_highlight_pane_cp8_ParamLimits

0xad57,	// (0x00018314) list_highlight_pane_cp8

0xad68,	// (0x00018325) ai2_gene_pane_g1_ParamLimits

0xad68,	// (0x00018325) ai2_gene_pane_g1

0xad7a,	// (0x00018337) ai2_gene_pane_g2_ParamLimits

0xad7a,	// (0x00018337) ai2_gene_pane_g2

0x0001,

0xf9b3,	// (0x0001cf70) ai2_gene_pane_g_ParamLimits

0xf9b3,	// (0x0001cf70) ai2_gene_pane_g

0x3af3,	// (0x000110b0) scroll_pane_cp12

0x5ef1,	// (0x000134ae) control_pane_t3_ParamLimits

0x5ef1,	// (0x000134ae) control_pane_t3

0x8bae,	// (0x0001616b) status_small_pane_g8_ParamLimits

0x8bae,	// (0x0001616b) status_small_pane_g8

0x60cc,	// (0x00013689) popup_find_window_ParamLimits

0x62e5,	// (0x000138a2) popup_note_image_window_ParamLimits

0x90b9,	// (0x00016676) list_double2_graphic_pane_vc_g1_ParamLimits

0x90b9,	// (0x00016676) list_double2_graphic_pane_vc_g1

0x4770,	// (0x00011d2d) list_double2_graphic_pane_vc_g2_ParamLimits

0x4770,	// (0x00011d2d) list_double2_graphic_pane_vc_g2

0x90c5,	// (0x00016682) list_double2_graphic_pane_vc_g3_ParamLimits

0x90c5,	// (0x00016682) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x0001cd47) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x0001cd47) list_double2_graphic_pane_vc_g

0x90d1,	// (0x0001668e) list_double2_graphic_pane_vc_t1_ParamLimits

0x90d1,	// (0x0001668e) list_double2_graphic_pane_vc_t1

0x4770,	// (0x00011d2d) list_single_heading_pane_vc_g1_ParamLimits

0x4770,	// (0x00011d2d) list_single_heading_pane_vc_g1

0x90c5,	// (0x00016682) list_single_heading_pane_vc_g2_ParamLimits

0x90c5,	// (0x00016682) list_single_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd68) list_single_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd68) list_single_heading_pane_vc_g

0x918b,	// (0x00016748) list_single_heading_pane_vc_t1_ParamLimits

0x918b,	// (0x00016748) list_single_heading_pane_vc_t1

0x91a1,	// (0x0001675e) list_single_heading_pane_vc_t2_ParamLimits

0x91a1,	// (0x0001675e) list_single_heading_pane_vc_t2

0x0001,

0xf7b0,	// (0x0001cd6d) list_single_heading_pane_vc_t_ParamLimits

0xf7b0,	// (0x0001cd6d) list_single_heading_pane_vc_t

0x91b3,	// (0x00016770) list_setting_number_pane_vc_g1_ParamLimits

0x91b3,	// (0x00016770) list_setting_number_pane_vc_g1

0x91bf,	// (0x0001677c) list_setting_number_pane_vc_g2_ParamLimits

0x91bf,	// (0x0001677c) list_setting_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001cd72) list_setting_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001cd72) list_setting_number_pane_vc_g

0x91cb,	// (0x00016788) list_setting_number_pane_vc_t1_ParamLimits

0x91cb,	// (0x00016788) list_setting_number_pane_vc_t1

0x91df,	// (0x0001679c) list_setting_number_pane_vc_t2_ParamLimits

0x91df,	// (0x0001679c) list_setting_number_pane_vc_t2

0x91fb,	// (0x000167b8) list_setting_number_pane_vc_t3_ParamLimits

0x91fb,	// (0x000167b8) list_setting_number_pane_vc_t3

0x0002,

0xf7ba,	// (0x0001cd77) list_setting_number_pane_vc_t_ParamLimits

0xf7ba,	// (0x0001cd77) list_setting_number_pane_vc_t

0x9227,	// (0x000167e4) set_value_pane_vc_ParamLimits

0x9227,	// (0x000167e4) set_value_pane_vc

0xa808,	// (0x00017dc5) list_double2_graphic_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_double2_graphic_pane_vc

0xa81b,	// (0x00017dd8) list_double2_large_graphic_pane_vc_ParamLimits

0xa81b,	// (0x00017dd8) list_double2_large_graphic_pane_vc

0xa808,	// (0x00017dc5) list_double2_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_double2_pane_vc

0xa808,	// (0x00017dc5) list_double_graphic_heading_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_double_graphic_heading_pane_vc

0xa808,	// (0x00017dc5) list_double_graphic_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_double_graphic_pane_vc

0xa808,	// (0x00017dc5) list_double_heading_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_double_heading_pane_vc

0xa82d,	// (0x00017dea) list_double_large_graphic_pane_vc_ParamLimits

0xa82d,	// (0x00017dea) list_double_large_graphic_pane_vc

0xa808,	// (0x00017dc5) list_double_number_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_double_number_pane_vc

0xa808,	// (0x00017dc5) list_double_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_double_pane_vc

0xa808,	// (0x00017dc5) list_double_time_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_double_time_pane_vc

0xa808,	// (0x00017dc5) list_setting_number_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_setting_number_pane_vc

0xa808,	// (0x00017dc5) list_setting_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_setting_pane_vc

0xa808,	// (0x00017dc5) list_single_graphic_heading_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_single_graphic_heading_pane_vc

0xa808,	// (0x00017dc5) list_single_heading_pane_vc_ParamLimits

0xa808,	// (0x00017dc5) list_single_heading_pane_vc

0xa84b,	// (0x00017e08) list_single_number_heading_pane_vc_ParamLimits

0xa84b,	// (0x00017e08) list_single_number_heading_pane_vc

0xae1b,	// (0x000183d8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xae1b,	// (0x000183d8) list_double_graphic_heading_pane_vc_g1

0x4770,	// (0x00011d2d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4770,	// (0x00011d2d) list_double_graphic_heading_pane_vc_g2

0x90c5,	// (0x00016682) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x90c5,	// (0x00016682) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bf,	// (0x0001cf7c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bf,	// (0x0001cf7c) list_double_graphic_heading_pane_vc_g

0xae27,	// (0x000183e4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xae27,	// (0x000183e4) list_double_graphic_heading_pane_vc_t1

0xae3b,	// (0x000183f8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae3b,	// (0x000183f8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c6,	// (0x0001cf83) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c6,	// (0x0001cf83) list_double_graphic_heading_pane_vc_t

0x91b3,	// (0x00016770) list_setting_pane_vc_g1_ParamLimits

0x91b3,	// (0x00016770) list_setting_pane_vc_g1

0x91bf,	// (0x0001677c) list_setting_pane_vc_g2_ParamLimits

0x91bf,	// (0x0001677c) list_setting_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001cd72) list_setting_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001cd72) list_setting_pane_vc_g

0xb058,	// (0x00018615) list_setting_pane_vc_t1_ParamLimits

0xb058,	// (0x00018615) list_setting_pane_vc_t1

0xb074,	// (0x00018631) list_setting_pane_vc_t2_ParamLimits

0xb074,	// (0x00018631) list_setting_pane_vc_t2

0x0001,

0xfa09,	// (0x0001cfc6) list_setting_pane_vc_t_ParamLimits

0xfa09,	// (0x0001cfc6) list_setting_pane_vc_t

0x9227,	// (0x000167e4) set_value_pane_cp_vc_ParamLimits

0x9227,	// (0x000167e4) set_value_pane_cp_vc

0x4770,	// (0x00011d2d) list_single_number_heading_pane_vc_g1_ParamLimits

0x4770,	// (0x00011d2d) list_single_number_heading_pane_vc_g1

0x90c5,	// (0x00016682) list_single_number_heading_pane_vc_g2_ParamLimits

0x90c5,	// (0x00016682) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd68) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd68) list_single_number_heading_pane_vc_g

0xb08e,	// (0x0001864b) list_single_number_heading_pane_vc_t1_ParamLimits

0xb08e,	// (0x0001864b) list_single_number_heading_pane_vc_t1

0xb0a4,	// (0x00018661) list_single_number_heading_pane_vc_t2_ParamLimits

0xb0a4,	// (0x00018661) list_single_number_heading_pane_vc_t2

0xb0ba,	// (0x00018677) list_single_number_heading_pane_vc_t3_ParamLimits

0xb0ba,	// (0x00018677) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001cfcb) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0e,	// (0x0001cfcb) list_single_number_heading_pane_vc_t

0xb0cc,	// (0x00018689) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb0cc,	// (0x00018689) list_single_graphic_heading_pane_vc_g1

0x4770,	// (0x00011d2d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4770,	// (0x00011d2d) list_single_graphic_heading_pane_vc_g4

0x90c5,	// (0x00016682) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x90c5,	// (0x00016682) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa15,	// (0x0001cfd2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa15,	// (0x0001cfd2) list_single_graphic_heading_pane_vc_g

0xb08e,	// (0x0001864b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb08e,	// (0x0001864b) list_single_graphic_heading_pane_vc_t1

0xb0d8,	// (0x00018695) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb0d8,	// (0x00018695) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1c,	// (0x0001cfd9) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1c,	// (0x0001cfd9) list_single_graphic_heading_pane_vc_t

0x4770,	// (0x00011d2d) list_double2_pane_vc_g1_ParamLimits

0x4770,	// (0x00011d2d) list_double2_pane_vc_g1

0x90c5,	// (0x00016682) list_double2_pane_vc_g2_ParamLimits

0x90c5,	// (0x00016682) list_double2_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd68) list_double2_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd68) list_double2_pane_vc_g

0xb0ea,	// (0x000186a7) list_double2_pane_vc_t1_ParamLimits

0xb0ea,	// (0x000186a7) list_double2_pane_vc_t1

0xb102,	// (0x000186bf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb102,	// (0x000186bf) list_double2_large_graphic_pane_vc_g1

0xb10e,	// (0x000186cb) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb10e,	// (0x000186cb) list_double2_large_graphic_pane_vc_g2

0xb11a,	// (0x000186d7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb11a,	// (0x000186d7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa21,	// (0x0001cfde) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa21,	// (0x0001cfde) list_double2_large_graphic_pane_vc_g

0xb126,	// (0x000186e3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb126,	// (0x000186e3) list_double2_large_graphic_pane_vc_t1

0xb13c,	// (0x000186f9) list_double_time_pane_vc_g1_ParamLimits

0xb13c,	// (0x000186f9) list_double_time_pane_vc_g1

0xb148,	// (0x00018705) list_double_time_pane_vc_g2_ParamLimits

0xb148,	// (0x00018705) list_double_time_pane_vc_g2

0x0001,

0xfa28,	// (0x0001cfe5) list_double_time_pane_vc_g_ParamLimits

0xfa28,	// (0x0001cfe5) list_double_time_pane_vc_g

0xb154,	// (0x00018711) list_double_time_pane_vc_t1_ParamLimits

0xb154,	// (0x00018711) list_double_time_pane_vc_t1

0xb178,	// (0x00018735) list_double_time_pane_vc_t2_ParamLimits

0xb178,	// (0x00018735) list_double_time_pane_vc_t2

0xb1a7,	// (0x00018764) list_double_time_pane_vc_t3_ParamLimits

0xb1a7,	// (0x00018764) list_double_time_pane_vc_t3

0xb1b9,	// (0x00018776) list_double_time_pane_vc_t4_ParamLimits

0xb1b9,	// (0x00018776) list_double_time_pane_vc_t4

0x0003,

0xfa2d,	// (0x0001cfea) list_double_time_pane_vc_t_ParamLimits

0xfa2d,	// (0x0001cfea) list_double_time_pane_vc_t

0x4770,	// (0x00011d2d) list_double_pane_vc_g1_ParamLimits

0x4770,	// (0x00011d2d) list_double_pane_vc_g1

0x90c5,	// (0x00016682) list_double_pane_vc_g2_ParamLimits

0x90c5,	// (0x00016682) list_double_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd68) list_double_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd68) list_double_pane_vc_g

0xb1cd,	// (0x0001878a) list_double_pane_vc_t1_ParamLimits

0xb1cd,	// (0x0001878a) list_double_pane_vc_t1

0xb1e1,	// (0x0001879e) list_double_pane_vc_t2_ParamLimits

0xb1e1,	// (0x0001879e) list_double_pane_vc_t2

0x0001,

0xfa36,	// (0x0001cff3) list_double_pane_vc_t_ParamLimits

0xfa36,	// (0x0001cff3) list_double_pane_vc_t

0x4770,	// (0x00011d2d) list_double_number_pane_vc_g1_ParamLimits

0x4770,	// (0x00011d2d) list_double_number_pane_vc_g1

0x90c5,	// (0x00016682) list_double_number_pane_vc_g2_ParamLimits

0x90c5,	// (0x00016682) list_double_number_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd68) list_double_number_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd68) list_double_number_pane_vc_g

0xb1f9,	// (0x000187b6) list_double_number_pane_vc_t1_ParamLimits

0xb1f9,	// (0x000187b6) list_double_number_pane_vc_t1

0xb1cd,	// (0x0001878a) list_double_number_pane_vc_t2_ParamLimits

0xb1cd,	// (0x0001878a) list_double_number_pane_vc_t2

0xb20b,	// (0x000187c8) list_double_number_pane_vc_t3_ParamLimits

0xb20b,	// (0x000187c8) list_double_number_pane_vc_t3

0x0002,

0xfa3b,	// (0x0001cff8) list_double_number_pane_vc_t_ParamLimits

0xfa3b,	// (0x0001cff8) list_double_number_pane_vc_t

0xb223,	// (0x000187e0) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb223,	// (0x000187e0) list_double_large_graphic_pane_vc_g1

0xb23f,	// (0x000187fc) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb23f,	// (0x000187fc) list_double_large_graphic_pane_vc_g2

0xb253,	// (0x00018810) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb253,	// (0x00018810) list_double_large_graphic_pane_vc_g3

0xb262,	// (0x0001881f) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb262,	// (0x0001881f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa42,	// (0x0001cfff) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa42,	// (0x0001cfff) list_double_large_graphic_pane_vc_g

0xb271,	// (0x0001882e) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb271,	// (0x0001882e) list_double_large_graphic_pane_vc_t1

0xb28d,	// (0x0001884a) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb28d,	// (0x0001884a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4b,	// (0x0001d008) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4b,	// (0x0001d008) list_double_large_graphic_pane_vc_t

0x4770,	// (0x00011d2d) list_double_heading_pane_vc_g1_ParamLimits

0x4770,	// (0x00011d2d) list_double_heading_pane_vc_g1

0x90c5,	// (0x00016682) list_double_heading_pane_vc_g2_ParamLimits

0x90c5,	// (0x00016682) list_double_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd68) list_double_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd68) list_double_heading_pane_vc_g

0xb2af,	// (0x0001886c) list_double_heading_pane_vc_t1_ParamLimits

0xb2af,	// (0x0001886c) list_double_heading_pane_vc_t1

0xb2c3,	// (0x00018880) list_double_heading_pane_vc_t2_ParamLimits

0xb2c3,	// (0x00018880) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0001d00d) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0001d00d) list_double_heading_pane_vc_t

0xb2db,	// (0x00018898) list_double_graphic_pane_vc_g1_ParamLimits

0xb2db,	// (0x00018898) list_double_graphic_pane_vc_g1

0xb2ee,	// (0x000188ab) list_double_graphic_pane_vc_g2_ParamLimits

0xb2ee,	// (0x000188ab) list_double_graphic_pane_vc_g2

0x4770,	// (0x00011d2d) list_double_graphic_pane_vc_g3_ParamLimits

0x4770,	// (0x00011d2d) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x0001d012) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001d012) list_double_graphic_pane_vc_g

0xb30b,	// (0x000188c8) list_double_graphic_pane_vc_t1_ParamLimits

0xb30b,	// (0x000188c8) list_double_graphic_pane_vc_t1

0xb32a,	// (0x000188e7) list_double_graphic_pane_vc_t2_ParamLimits

0xb32a,	// (0x000188e7) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001d01b) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001d01b) list_double_graphic_pane_vc_t

0x54fa,	// (0x00012ab7) aid_size_cell_fastswap

0x5502,	// (0x00012abf) aid_size_cell_touch_ParamLimits

0x5502,	// (0x00012abf) aid_size_cell_touch

0x5767,	// (0x00012d24) popup_fast_swap_wide_window_ParamLimits

0x5767,	// (0x00012d24) popup_fast_swap_wide_window

0x586d,	// (0x00012e2a) touch_pane_ParamLimits

0x586d,	// (0x00012e2a) touch_pane

0x3b6f,	// (0x0001112c) button_value_adjust_pane_cp2

0x3b77,	// (0x00011134) button_value_adjust_pane_cp4

0x3b7f,	// (0x0001113c) form_field_data_pane_cp2

0x84a4,	// (0x00015a61) form_field_data_wide_pane_cp2

0x40c2,	// (0x0001167f) bg_scroll_pane_ParamLimits

0x5afb,	// (0x000130b8) scroll_handle_pane_ParamLimits

0x5b0f,	// (0x000130cc) scroll_sc2_down_pane_ParamLimits

0x5b0f,	// (0x000130cc) scroll_sc2_down_pane

0x4108,	// (0x000116c5) scroll_sc2_up_pane_ParamLimits

0x4108,	// (0x000116c5) scroll_sc2_up_pane

0xb7fc,	// (0x00018db9) grid_wheel_folder_pane_g1_ParamLimits

0xb7fc,	// (0x00018db9) grid_wheel_folder_pane_g1

0x5ccb,	// (0x00013288) clock_nsta_pane_cp2_ParamLimits

0x5ccb,	// (0x00013288) clock_nsta_pane_cp2

0x8a86,	// (0x00016043) listscroll_midp_pane_ParamLimits

0x8a92,	// (0x0001604f) midp_canvas_pane

0x4a92,	// (0x0001204f) nsta_clock_indic_pane

0x4ad2,	// (0x0001208f) listscroll_form_pane_vc

0x4ae2,	// (0x0001209f) listscroll_set_pane_vc_ParamLimits

0x4ae2,	// (0x0001209f) listscroll_set_pane_vc

0x8cfb,	// (0x000162b8) clock_nsta_pane

0x8d76,	// (0x00016333) indicator_nsta_pane

0x9053,	// (0x00016610) bg_popup_sub_pane_cp2_ParamLimits

0x9067,	// (0x00016624) find_pane_cp2_ParamLimits

0x9067,	// (0x00016624) find_pane_cp2

0x907d,	// (0x0001663a) grid_toobar_pane_ParamLimits

0x9237,	// (0x000167f4) list_form_gen_pane_vc_ParamLimits

0x9237,	// (0x000167f4) list_form_gen_pane_vc

0x924d,	// (0x0001680a) scroll_pane_cp8_vc_ParamLimits

0x924d,	// (0x0001680a) scroll_pane_cp8_vc

0x92c9,	// (0x00016886) data_form_wide_pane_vc_ParamLimits

0x92c9,	// (0x00016886) data_form_wide_pane_vc

0x92d5,	// (0x00016892) form_field_data_wide_pane_vc_g1

0x92dd,	// (0x0001689a) form_field_data_wide_pane_vc_t1_ParamLimits

0x92dd,	// (0x0001689a) form_field_data_wide_pane_vc_t1

0x3ba6,	// (0x00011163) input_focus_pane_cp6_vc_ParamLimits

0x3ba6,	// (0x00011163) input_focus_pane_cp6_vc

0x964b,	// (0x00016c08) list_midp_pane_ParamLimits

0x9657,	// (0x00016c14) scroll_pane_cp16_ParamLimits

0x9657,	// (0x00016c14) scroll_pane_cp16

0x96c1,	// (0x00016c7e) button_value_adjust_pane_ParamLimits

0x96c1,	// (0x00016c7e) button_value_adjust_pane

0xa617,	// (0x00017bd4) button_value_adjust_pane_cp6_ParamLimits

0xa617,	// (0x00017bd4) button_value_adjust_pane_cp6

0xa73d,	// (0x00017cfa) settings_code_pane_cp_ParamLimits

0xa73d,	// (0x00017cfa) settings_code_pane_cp

0x36de,	// (0x00010c9b) cell_touch_pane_g1

0x36de,	// (0x00010c9b) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x0001cc8c) cell_touch_pane_g

0xadf9,	// (0x000183b6) cell_touch_pane_cp_ParamLimits

0xadf9,	// (0x000183b6) cell_touch_pane_cp

0xae09,	// (0x000183c6) cell_touch_pane_ParamLimits

0xae09,	// (0x000183c6) cell_touch_pane

0x36de,	// (0x00010c9b) scroll_sc2_down_pane_g1

0x36de,	// (0x00010c9b) scroll_sc2_up_pane_g1

0x3708,	// (0x00010cc5) bg_set_opt_pane_cp4_vc

0xae53,	// (0x00018410) list_set_graphic_pane_vc_g1_ParamLimits

0xae53,	// (0x00018410) list_set_graphic_pane_vc_g1

0xae5f,	// (0x0001841c) list_set_graphic_pane_vc_g2_ParamLimits

0xae5f,	// (0x0001841c) list_set_graphic_pane_vc_g2

0x0001,

0xf9cb,	// (0x0001cf88) list_set_graphic_pane_vc_g_ParamLimits

0xf9cb,	// (0x0001cf88) list_set_graphic_pane_vc_g

0xae6b,	// (0x00018428) text_primary_small_cp13_vc_ParamLimits

0xae6b,	// (0x00018428) text_primary_small_cp13_vc

0xae83,	// (0x00018440) list_set_graphic_pane_vc_ParamLimits

0xae83,	// (0x00018440) list_set_graphic_pane_vc

0x3708,	// (0x00010cc5) input_focus_pane_cp2_vc

0x36de,	// (0x00010c9b) setting_code_pane_vc_g1

0x379b,	// (0x00010d58) setting_code_pane_vc_t1

0xae96,	// (0x00018453) set_text_pane_vc_t1_ParamLimits

0xae96,	// (0x00018453) set_text_pane_vc_t1

0x3708,	// (0x00010cc5) input_focus_pane_cp1_vc

0xaeb3,	// (0x00018470) list_set_text_pane_vc

0x36de,	// (0x00010c9b) setting_text_pane_vc_g1

0x3708,	// (0x00010cc5) bg_set_opt_pane_cp2_vc

0x3792,	// (0x00010d4f) setting_slider_graphic_pane_vc_g1

0xaebd,	// (0x0001847a) setting_slider_graphic_pane_vc_t1

0xaecd,	// (0x0001848a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d0,	// (0x0001cf8d) setting_slider_graphic_pane_vc_t

0xaedd,	// (0x0001849a) slider_set_pane_cp_vc

0xaee5,	// (0x000184a2) slider_set_pane_vc_g1

0xaeee,	// (0x000184ab) slider_set_pane_vc_g2

0x0006,

0xf9d5,	// (0x0001cf92) slider_set_pane_vc_g

0x3c6c,	// (0x00011229) set_opt_bg_pane_g1_copy1

0x3c74,	// (0x00011231) set_opt_bg_pane_g2_copy1

0xaf1a,	// (0x000184d7) set_opt_bg_pane_g3_copy1

0x3c84,	// (0x00011241) set_opt_bg_pane_g4_copy1

0x3c8c,	// (0x00011249) set_opt_bg_pane_g5_copy1

0x3c94,	// (0x00011251) set_opt_bg_pane_g6_copy1

0xaf22,	// (0x000184df) set_opt_bg_pane_g7_copy1

0xaf2c,	// (0x000184e9) set_opt_bg_pane_g8_copy1

0xaf34,	// (0x000184f1) set_opt_bg_pane_g9_copy1

0x3708,	// (0x00010cc5) bg_set_opt_pane_cp_vc

0xaf3c,	// (0x000184f9) setting_slider_pane_vc_t1

0xaf4b,	// (0x00018508) setting_slider_pane_vc_t2

0xaf5b,	// (0x00018518) setting_slider_pane_vc_t3

0x0002,

0xf9e4,	// (0x0001cfa1) setting_slider_pane_vc_t

0xaf6b,	// (0x00018528) slider_set_pane_vc

0x66c9,	// (0x00013c86) volume_set_pane_vc_g1

0x69c4,	// (0x00013f81) volume_set_pane_vc_g2

0x69cd,	// (0x00013f8a) volume_set_pane_vc_g3

0x69d6,	// (0x00013f93) volume_set_pane_vc_g4

0x69df,	// (0x00013f9c) volume_set_pane_vc_g5

0x69e8,	// (0x00013fa5) volume_set_pane_vc_g6

0x69f1,	// (0x00013fae) volume_set_pane_vc_g7

0x69fa,	// (0x00013fb7) volume_set_pane_vc_g8

0x6a03,	// (0x00013fc0) volume_set_pane_vc_g9

0x6a0c,	// (0x00013fc9) volume_set_pane_vc_g10

0x0009,

0xf9eb,	// (0x0001cfa8) volume_set_pane_vc_g

0xaf73,	// (0x00018530) volume_set_pane_vc

0xaf7d,	// (0x0001853a) button_value_adjust_pane_cp1_vc

0xaf87,	// (0x00018544) list_highlight_pane_cp2_vc

0xaf90,	// (0x0001854d) list_set_pane_vc_ParamLimits

0xaf90,	// (0x0001854d) list_set_pane_vc

0xafee,	// (0x000185ab) main_pane_set_vc_t1_ParamLimits

0xafee,	// (0x000185ab) main_pane_set_vc_t1

0xb003,	// (0x000185c0) main_pane_set_vc_t2_ParamLimits

0xb003,	// (0x000185c0) main_pane_set_vc_t2

0xb015,	// (0x000185d2) main_pane_set_vc_t3_ParamLimits

0xb015,	// (0x000185d2) main_pane_set_vc_t3

0xb027,	// (0x000185e4) main_pane_set_vc_t4_ParamLimits

0xb027,	// (0x000185e4) main_pane_set_vc_t4

0x0003,

0xfa00,	// (0x0001cfbd) main_pane_set_vc_t_ParamLimits

0xfa00,	// (0x0001cfbd) main_pane_set_vc_t

0xb039,	// (0x000185f6) setting_code_pane_vc_ParamLimits

0xb039,	// (0x000185f6) setting_code_pane_vc

0xb048,	// (0x00018605) setting_slider_graphic_pane_vc

0xb048,	// (0x00018605) setting_slider_pane_vc

0xb048,	// (0x00018605) setting_text_pane_vc

0xb048,	// (0x00018605) setting_volume_pane_vc

0xb050,	// (0x0001860d) scroll_pane_cp121_vc

0x3b5d,	// (0x0001111a) set_content_pane_vc

0xb354,	// (0x00018911) button_value_adjust_pane_g1

0xb35d,	// (0x0001891a) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x0001d020) button_value_adjust_pane_g

0xb366,	// (0x00018923) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb366,	// (0x00018923) form_field_slider_wide_pane_vc_t1

0xb37a,	// (0x00018937) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb37a,	// (0x00018937) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x0001d025) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0001d025) form_field_slider_wide_pane_vc_t

0x3776,	// (0x00010d33) input_focus_pane_cp10_vc_ParamLimits

0x3776,	// (0x00010d33) input_focus_pane_cp10_vc

0xb3a8,	// (0x00018965) slider_cont_pane_cp1_vc_ParamLimits

0xb3a8,	// (0x00018965) slider_cont_pane_cp1_vc

0xb3ba,	// (0x00018977) slider_form_pane_g1_cp2

0xaeee,	// (0x000184ab) slider_form_pane_g2_cp2

0xb3e7,	// (0x000189a4) form_field_slider_pane_vc_t3

0xb3f5,	// (0x000189b2) form_field_slider_pane_vc_t4

0xb403,	// (0x000189c0) slider_form_pane_vc_ParamLimits

0xb403,	// (0x000189c0) slider_form_pane_vc

0xb410,	// (0x000189cd) form_field_slider_pane_vc_t1_ParamLimits

0xb410,	// (0x000189cd) form_field_slider_pane_vc_t1

0xb37a,	// (0x00018937) form_field_slider_pane_vc_t2_ParamLimits

0xb37a,	// (0x00018937) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x0001d037) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001d037) form_field_slider_pane_vc_t

0x3776,	// (0x00010d33) input_focus_pane_cp9_vc_ParamLimits

0x3776,	// (0x00010d33) input_focus_pane_cp9_vc

0xb42c,	// (0x000189e9) slider_cont_pane_vc_ParamLimits

0xb42c,	// (0x000189e9) slider_cont_pane_vc

0xb440,	// (0x000189fd) list_form_graphic_pane_cp_vc_ParamLimits

0xb440,	// (0x000189fd) list_form_graphic_pane_cp_vc

0x92d5,	// (0x00016892) form_field_popup_wide_pane_vc_g1

0xb455,	// (0x00018a12) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb455,	// (0x00018a12) form_field_popup_wide_pane_vc_t1

0x3ba6,	// (0x00011163) input_focus_pane_cp8_vc_ParamLimits

0x3ba6,	// (0x00011163) input_focus_pane_cp8_vc

0xb49a,	// (0x00018a57) list_form_wide_pane_vc_ParamLimits

0xb49a,	// (0x00018a57) list_form_wide_pane_vc

0xb4a6,	// (0x00018a63) list_form_graphic_pane_vc_g1

0xb4ae,	// (0x00018a6b) list_form_graphic_pane_vc_t1_ParamLimits

0xb4ae,	// (0x00018a6b) list_form_graphic_pane_vc_t1

0x3784,	// (0x00010d41) list_highlight_pane_cp5_vc_ParamLimits

0x3784,	// (0x00010d41) list_highlight_pane_cp5_vc

0xb4ca,	// (0x00018a87) list_form_graphic_pane_vc_ParamLimits

0xb4ca,	// (0x00018a87) list_form_graphic_pane_vc

0x92d5,	// (0x00016892) form_field_popup_pane_vc_g1

0xb4e0,	// (0x00018a9d) form_field_popup_pane_vc_t1_ParamLimits

0xb4e0,	// (0x00018a9d) form_field_popup_pane_vc_t1

0x3ba6,	// (0x00011163) input_focus_pane_cp7_vc_ParamLimits

0x3ba6,	// (0x00011163) input_focus_pane_cp7_vc

0xb4f7,	// (0x00018ab4) list_form_pane_vc_ParamLimits

0xb4f7,	// (0x00018ab4) list_form_pane_vc

0xb503,	// (0x00018ac0) data_form_pane_vc_t1_ParamLimits

0xb503,	// (0x00018ac0) data_form_pane_vc_t1

0x3c6c,	// (0x00011229) input_focus_pane_vc_g1

0x3c74,	// (0x00011231) input_focus_pane_vc_g2

0x3c7c,	// (0x00011239) input_focus_pane_vc_g3

0x3c84,	// (0x00011241) input_focus_pane_vc_g4

0x3c8c,	// (0x00011249) input_focus_pane_vc_g5

0x3c94,	// (0x00011251) input_focus_pane_vc_g6

0x3c9c,	// (0x00011259) input_focus_pane_vc_g7

0x3ca4,	// (0x00011261) input_focus_pane_vc_g8

0x3cac,	// (0x00011269) input_focus_pane_vc_g9

0x36de,	// (0x00010c9b) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x0001cc15) input_focus_pane_vc_g

0x92c9,	// (0x00016886) data_form_pane_vc_ParamLimits

0x92c9,	// (0x00016886) data_form_pane_vc

0x92d5,	// (0x00016892) form_field_data_pane_vc_g1

0xb51e,	// (0x00018adb) form_field_data_pane_vc_t1_ParamLimits

0xb51e,	// (0x00018adb) form_field_data_pane_vc_t1

0x3ba6,	// (0x00011163) input_focus_pane_vc_ParamLimits

0x3ba6,	// (0x00011163) input_focus_pane_vc

0xb538,	// (0x00018af5) button_value_adjust_pane_cp3_vc

0xb540,	// (0x00018afd) button_value_adjust_pane_cp5_vc

0xb548,	// (0x00018b05) form_field_data_pane_vc_ParamLimits

0xb548,	// (0x00018b05) form_field_data_pane_vc

0xb55f,	// (0x00018b1c) form_field_data_pane_vc_cp2

0xb567,	// (0x00018b24) form_field_data_wide_pane_vc_ParamLimits

0xb567,	// (0x00018b24) form_field_data_wide_pane_vc

0xb57d,	// (0x00018b3a) form_field_data_wide_pane_vc_cp2

0xb585,	// (0x00018b42) form_field_popup_pane_vc_ParamLimits

0xb585,	// (0x00018b42) form_field_popup_pane_vc

0xb59c,	// (0x00018b59) form_field_popup_wide_pane_vc_ParamLimits

0xb59c,	// (0x00018b59) form_field_popup_wide_pane_vc

0xb5b2,	// (0x00018b6f) form_field_slider_pane_vc_ParamLimits

0xb5b2,	// (0x00018b6f) form_field_slider_pane_vc

0xb5c5,	// (0x00018b82) form_field_slider_wide_pane_vc_ParamLimits

0xb5c5,	// (0x00018b82) form_field_slider_wide_pane_vc

0xb5d8,	// (0x00018b95) grid_touch_1_pane_ParamLimits

0xb5d8,	// (0x00018b95) grid_touch_1_pane

0xb5e4,	// (0x00018ba1) grid_touch_2_pane_ParamLimits

0xb5e4,	// (0x00018ba1) grid_touch_2_pane

0x4a75,	// (0x00012032) touch_pane_g1_ParamLimits

0x4a75,	// (0x00012032) touch_pane_g1

0xb5fc,	// (0x00018bb9) cell_app_pane_cp_wide_ParamLimits

0xb5fc,	// (0x00018bb9) cell_app_pane_cp_wide

0xb60d,	// (0x00018bca) grid_popup_fast_wide_pane_ParamLimits

0xb60d,	// (0x00018bca) grid_popup_fast_wide_pane

0xb621,	// (0x00018bde) scroll_pane_cp19_ParamLimits

0xb621,	// (0x00018bde) scroll_pane_cp19

0x3708,	// (0x00010cc5) bg_popup_window_pane_cp20

0xb635,	// (0x00018bf2) listscroll_popup_fast_wide_pane

0xb63d,	// (0x00018bfa) grid_indicator_nsta_pane

0xb64f,	// (0x00018c0c) clock_nsta_pane_g1

0xb658,	// (0x00018c15) clock_nsta_pane_t1

0xb674,	// (0x00018c31) cell_indicator_nsta_pane_ParamLimits

0xb674,	// (0x00018c31) cell_indicator_nsta_pane

0xb6a9,	// (0x00018c66) cell_indicator_nsta_pane_g1

0xb6b7,	// (0x00018c74) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x0001d048) cell_indicator_nsta_pane_g

0xb6c9,	// (0x00018c86) clock_nsta_pane_cp

0xb6d2,	// (0x00018c8f) indicator_nsta_pane_cp

0xb6dc,	// (0x00018c99) nsta_clock_indic_pane_g1

0x37da,	// (0x00010d97) grid_indicator_pane

0x8837,	// (0x00015df4) scroll_pane_cp29

0x5c1a,	// (0x000131d7) indicator_nsta_pane_cp2_ParamLimits

0x5c1a,	// (0x000131d7) indicator_nsta_pane_cp2

0x3784,	// (0x00010d41) main_apps_wheel_pane

0x952e,	// (0x00016aeb) form_midp_field_text_pane_ParamLimits

0x9677,	// (0x00016c34) scroll_bar_cp050_ParamLimits

0xb735,	// (0x00018cf2) cell_indicator_pane_ParamLimits

0xb735,	// (0x00018cf2) cell_indicator_pane

0xb74e,	// (0x00018d0b) cell_indicator_pane_g1

0xb758,	// (0x00018d15) grid_wheel_folder_pane_ParamLimits

0xb758,	// (0x00018d15) grid_wheel_folder_pane

0xb76e,	// (0x00018d2b) list_wheel_apps_pane_ParamLimits

0xb76e,	// (0x00018d2b) list_wheel_apps_pane

0xb77f,	// (0x00018d3c) main_apps_wheel_pane_g1_ParamLimits

0xb77f,	// (0x00018d3c) main_apps_wheel_pane_g1

0xb793,	// (0x00018d50) main_apps_wheel_pane_g2_ParamLimits

0xb793,	// (0x00018d50) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x0001d064) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x0001d064) main_apps_wheel_pane_g

0xb7ab,	// (0x00018d68) main_apps_wheel_pane_t1_ParamLimits

0xb7ab,	// (0x00018d68) main_apps_wheel_pane_t1

0xb7ce,	// (0x00018d8b) list_wheel_apps_pane_g1

0xb7d6,	// (0x00018d93) list_wheel_apps_pane_g2

0xb7de,	// (0x00018d9b) list_wheel_apps_pane_g3

0xb7e8,	// (0x00018da5) list_wheel_apps_pane_g4

0xb7f2,	// (0x00018daf) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x0001d069) list_wheel_apps_pane_g

0x470f,	// (0x00011ccc) navi_icon_text_pane

0x8c2a,	// (0x000161e7) aid_fill_nsta

0xb815,	// (0x00018dd2) navi_icon_text_pane_g1

0xb821,	// (0x00018dde) navi_icon_text_pane_t1

0x45ff,	// (0x00011bbc) list_set_graphic_pane_t1_ParamLimits

0x45ff,	// (0x00011bbc) list_set_graphic_pane_t1

0x9dc2,	// (0x0001737f) popup_midp_note_alarm_window_t6_ParamLimits

0x9dc2,	// (0x0001737f) popup_midp_note_alarm_window_t6

0x9dd4,	// (0x00017391) popup_midp_note_alarm_window_t7_ParamLimits

0x9dd4,	// (0x00017391) popup_midp_note_alarm_window_t7

0x9de6,	// (0x000173a3) popup_midp_note_alarm_window_t8_ParamLimits

0x9de6,	// (0x000173a3) popup_midp_note_alarm_window_t8

0x9df8,	// (0x000173b5) popup_midp_note_alarm_window_t9_ParamLimits

0x9df8,	// (0x000173b5) popup_midp_note_alarm_window_t9

0x9e0a,	// (0x000173c7) popup_midp_note_alarm_window_t10_ParamLimits

0x9e0a,	// (0x000173c7) popup_midp_note_alarm_window_t10

0x9e1c,	// (0x000173d9) popup_midp_note_alarm_window_t11_ParamLimits

0x9e1c,	// (0x000173d9) popup_midp_note_alarm_window_t11

0x9e2e,	// (0x000173eb) scroll_pane_cp17_ParamLimits

0x9e2e,	// (0x000173eb) scroll_pane_cp17

0x66c9,	// (0x00013c86) volume_small_pane_cp_g1

0x6a15,	// (0x00013fd2) volume_small_pane_cp_g2

0x6a1e,	// (0x00013fdb) volume_small_pane_cp_g3

0x6a27,	// (0x00013fe4) volume_small_pane_cp_g4

0x6a30,	// (0x00013fed) volume_small_pane_cp_g5

0x69df,	// (0x00013f9c) volume_small_pane_cp_g6

0x6a39,	// (0x00013ff6) volume_small_pane_cp_g7

0x6a42,	// (0x00013fff) volume_small_pane_cp_g8

0x6a4b,	// (0x00014008) volume_small_pane_cp_g9

0x6a54,	// (0x00014011) volume_small_pane_cp_g10

0x4881,	// (0x00011e3e) midp_ticker_pane_g1_ParamLimits

0x488d,	// (0x00011e4a) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x0001cce1) midp_ticker_pane_g_ParamLimits

0x4899,	// (0x00011e56) midp_ticker_pane_t1_ParamLimits

0x8c40,	// (0x000161fd) aid_fill_nsta_2

0x9663,	// (0x00016c20) list_form2_midp_pane

0xa7bb,	// (0x00017d78) midp_editing_number_pane_ParamLimits

0xa7ca,	// (0x00017d87) midp_ticker_pane_ParamLimits

0xb833,	// (0x00018df0) form2_midp_field_pane

0xb857,	// (0x00018e14) scroll_pane_cp51

0xb877,	// (0x00018e34) form2_midp_button_pane_ParamLimits

0xb877,	// (0x00018e34) form2_midp_button_pane

0xb889,	// (0x00018e46) form2_midp_content_pane_ParamLimits

0xb889,	// (0x00018e46) form2_midp_content_pane

0xb8a3,	// (0x00018e60) form2_midp_field_choice_group_pane

0xb8ab,	// (0x00018e68) form2_midp_field_pane_g1

0xb8b3,	// (0x00018e70) form2_midp_field_pane_g2

0xb8bb,	// (0x00018e78) form2_midp_field_pane_g3

0xb8c3,	// (0x00018e80) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x0001d08e) form2_midp_field_pane_g

0xb8cb,	// (0x00018e88) form2_midp_gauge_slider_pane

0xb8d3,	// (0x00018e90) form2_midp_gauge_wait_pane

0xb8db,	// (0x00018e98) form2_midp_image_pane_ParamLimits

0xb8db,	// (0x00018e98) form2_midp_image_pane

0xb8f6,	// (0x00018eb3) form2_midp_label_pane_ParamLimits

0xb8f6,	// (0x00018eb3) form2_midp_label_pane

0xb90f,	// (0x00018ecc) form2_midp_label_pane_cp_ParamLimits

0xb90f,	// (0x00018ecc) form2_midp_label_pane_cp

0xb930,	// (0x00018eed) form2_midp_string_pane_ParamLimits

0xb930,	// (0x00018eed) form2_midp_string_pane

0xb942,	// (0x00018eff) form2_midp_text_pane_ParamLimits

0xb942,	// (0x00018eff) form2_midp_text_pane

0xb95d,	// (0x00018f1a) form2_midp_time_pane

0xb96d,	// (0x00018f2a) input_focus_pane_cp51_ParamLimits

0xb96d,	// (0x00018f2a) input_focus_pane_cp51

0xb985,	// (0x00018f42) form2_midp_label_pane_t1_ParamLimits

0xb985,	// (0x00018f42) form2_midp_label_pane_t1

0xb9c6,	// (0x00018f83) form2_mdip_text_pane_t1_ParamLimits

0xb9c6,	// (0x00018f83) form2_mdip_text_pane_t1

0xb9e5,	// (0x00018fa2) form2_midp_time_pane_t1

0xba00,	// (0x00018fbd) form2_midp_gauge_slider_pane_t1

0xba12,	// (0x00018fcf) form2_midp_gauge_slider_pane_t2

0xba24,	// (0x00018fe1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x0001d097) form2_midp_gauge_slider_pane_t

0xba36,	// (0x00018ff3) form2_midp_slider_pane

0xba42,	// (0x00018fff) form2_midp_gauge_wait_pane_t1

0xba50,	// (0x0001900d) form2_midp_wait_pane_ParamLimits

0xba50,	// (0x0001900d) form2_midp_wait_pane

0xba7b,	// (0x00019038) list_single_2graphic_pane_cp4_ParamLimits

0xba7b,	// (0x00019038) list_single_2graphic_pane_cp4

0x933e,	// (0x000168fb) list_single_midp_graphic_pane_cp_ParamLimits

0x933e,	// (0x000168fb) list_single_midp_graphic_pane_cp

0x3708,	// (0x00010cc5) list_highlight_pane_cp20

0xbaa3,	// (0x00019060) list_single_2graphic_pane_g1_cp4

0xacff,	// (0x000182bc) list_single_2graphic_pane_g2_cp4

0xbaab,	// (0x00019068) list_single_2graphic_pane_t1_cp4

0x3784,	// (0x00010d41) list_highlight_pane_cp21

0xbaba,	// (0x00019077) list_single_midp_graphic_pane_g4_cp

0xbac9,	// (0x00019086) list_single_midp_graphic_pane_t1_cp

0xbade,	// (0x0001909b) form2_mdip_string_pane_t1_ParamLimits

0xbade,	// (0x0001909b) form2_mdip_string_pane_t1

0x3708,	// (0x00010cc5) bg_wml_button_pane_cp2

0x36de,	// (0x00010c9b) form2_midp_image_pane_g1

0x3b10,	// (0x000110cd) list_double_large_graphic_pane_g5_ParamLimits

0x3b10,	// (0x000110cd) list_double_large_graphic_pane_g5

0x8a86,	// (0x00016043) midp_form_pane_ParamLimits

0x3784,	// (0x00010d41) main_apps_wheel_pane_ParamLimits

0x630b,	// (0x000138c8) popup_preview_window_ParamLimits

0x630b,	// (0x000138c8) popup_preview_window

0x64c6,	// (0x00013a83) popup_touch_info_window_ParamLimits

0x64c6,	// (0x00013a83) popup_touch_info_window

0x64e4,	// (0x00013aa1) popup_touch_menu_window_ParamLimits

0x64e4,	// (0x00013aa1) popup_touch_menu_window

0x36d4,	// (0x00010c91) bg_popup_sub_pane_cp6

0xbbe5,	// (0x000191a2) list_touch_menu_pane

0xbbed,	// (0x000191aa) list_single_touch_menu_pane_ParamLimits

0xbbed,	// (0x000191aa) list_single_touch_menu_pane

0xbc03,	// (0x000191c0) list_single_touch_menu_pane_t1

0x3784,	// (0x00010d41) bg_popup_sub_pane_cp7_ParamLimits

0x3784,	// (0x00010d41) bg_popup_sub_pane_cp7

0xbc11,	// (0x000191ce) heading_sub_pane

0xbc19,	// (0x000191d6) list_touch_info_pane_ParamLimits

0xbc19,	// (0x000191d6) list_touch_info_pane

0xbc28,	// (0x000191e5) list_single_touch_info_pane_ParamLimits

0xbc28,	// (0x000191e5) list_single_touch_info_pane

0xbc3a,	// (0x000191f7) list_single_touch_info_pane_t1

0xbc48,	// (0x00019205) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x0001d0a5) list_single_touch_info_pane_t

0x486a,	// (0x00011e27) bg_popup_heading_pane_cp

0xbc56,	// (0x00019213) heading_sub_pane_t1

0x9263,	// (0x00016820) bg_popup_preview_window_pane_cp_ParamLimits

0x9263,	// (0x00016820) bg_popup_preview_window_pane_cp

0xbc11,	// (0x000191ce) heading_preview_pane

0xbc19,	// (0x000191d6) list_preview_pane_ParamLimits

0xbc19,	// (0x000191d6) list_preview_pane

0xbc64,	// (0x00019221) popup_preview_window_g1

0xbc28,	// (0x000191e5) list_single_preview_pane_ParamLimits

0xbc28,	// (0x000191e5) list_single_preview_pane

0xbc6c,	// (0x00019229) list_single_preview_pane_g1

0xbc74,	// (0x00019231) list_single_preview_pane_t1

0xbc3a,	// (0x000191f7) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x0001d0aa) list_single_preview_pane_t

0xbc82,	// (0x0001923f) bg_popup_heading_pane_cp2_ParamLimits

0xbc82,	// (0x0001923f) bg_popup_heading_pane_cp2

0xbc98,	// (0x00019255) heading_preview_pane_g1

0xbca0,	// (0x0001925d) heading_preview_pane_t1_ParamLimits

0xbca0,	// (0x0001925d) heading_preview_pane_t1

0x37f1,	// (0x00010dae) soft_indicator_pane_t1_ParamLimits

0x3ad0,	// (0x0001108d) scroll_pane_ParamLimits

0x40ff,	// (0x000116bc) scroll_sc2_left_pane

0x40f6,	// (0x000116b3) scroll_sc2_right_pane

0x411e,	// (0x000116db) scroll_bg_pane_g1_ParamLimits

0x4133,	// (0x000116f0) scroll_bg_pane_g2_ParamLimits

0x414b,	// (0x00011708) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x0001cc6c) scroll_bg_pane_g_ParamLimits

0x411e,	// (0x000116db) scroll_handle_pane_g1_ParamLimits

0x4160,	// (0x0001171d) scroll_handle_pane_g2_ParamLimits

0x414b,	// (0x00011708) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x0001cc73) scroll_handle_pane_g_ParamLimits

0x5f8e,	// (0x0001354b) popup_choice_list_window_ParamLimits

0x5f8e,	// (0x0001354b) popup_choice_list_window

0x905f,	// (0x0001661c) choice_list_pane

0x910f,	// (0x000166cc) cell_toolbar_pane_t1

0x9137,	// (0x000166f4) toolbar_button_pane_ParamLimits

0xa2e8,	// (0x000178a5) ai_gene_pane_1_t2_ParamLimits

0xa2e8,	// (0x000178a5) ai_gene_pane_1_t2

0x0001,

0xf8de,	// (0x0001ce9b) ai_gene_pane_1_t_ParamLimits

0xf8de,	// (0x0001ce9b) ai_gene_pane_1_t

0xbcbd,	// (0x0001927a) scroll_sc2_left_pane_g1

0xbcbd,	// (0x0001927a) scroll_sc2_right_pane_g1

0x4a49,	// (0x00012006) bg_popup_sub_pane_cp10

0xbcc7,	// (0x00019284) list_choice_list_pane

0xbce0,	// (0x0001929d) list_single_choice_list_pane_ParamLimits

0xbce0,	// (0x0001929d) list_single_choice_list_pane

0xbcf3,	// (0x000192b0) list_single_choice_list_pane_g1

0x8696,	// (0x00015c53) list_single_choice_list_pane_t1_ParamLimits

0x8696,	// (0x00015c53) list_single_choice_list_pane_t1

0xbcfb,	// (0x000192b8) choice_list_pane_g1

0xbd03,	// (0x000192c0) choice_list_pane_t1

0x36d4,	// (0x00010c91) input_focus_pane_cp11

0x3f11,	// (0x000114ce) title_pane_stacon_g2_ParamLimits

0x3f11,	// (0x000114ce) title_pane_stacon_g2

0x0002,

0xf695,	// (0x0001cc52) title_pane_stacon_g_ParamLimits

0xf695,	// (0x0001cc52) title_pane_stacon_g

0x486a,	// (0x00011e27) cursor_press_pane

0x6036,	// (0x000135f3) popup_fep_hwr_window_ParamLimits

0x6036,	// (0x000135f3) popup_fep_hwr_window

0x60ae,	// (0x0001366b) popup_fep_vkb_window_ParamLimits

0x60ae,	// (0x0001366b) popup_fep_vkb_window

0xbd11,	// (0x000192ce) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x0001d0d3) fep_vkb_side_pane_g_ParamLimits

0x6a96,	// (0x00014053) fep_hwr_candidate_pane_ParamLimits

0x6a96,	// (0x00014053) fep_hwr_candidate_pane

0x6ac0,	// (0x0001407d) fep_hwr_side_pane_ParamLimits

0x6ac0,	// (0x0001407d) fep_hwr_side_pane

0x6ae0,	// (0x0001409d) fep_hwr_top_pane_ParamLimits

0x6ae0,	// (0x0001409d) fep_hwr_top_pane

0x6af8,	// (0x000140b5) fep_hwr_write_pane_ParamLimits

0x6af8,	// (0x000140b5) fep_hwr_write_pane

0xfb16,	// (0x0001d0d3) fep_vkb_side_pane_g

0xbd19,	// (0x000192d6) fep_hwr_top_pane_g1

0xbd2b,	// (0x000192e8) fep_hwr_top_pane_g2

0x6b32,	// (0x000140ef) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x0001d0af) fep_hwr_top_pane_g

0x6b47,	// (0x00014104) fep_hwr_top_text_pane

0x4223,	// (0x000117e0) fep_hwr_top_text_pane_g1

0xbd61,	// (0x0001931e) fep_hwr_top_text_pane_t1

0x6c3d,	// (0x000141fa) fep_hwr_candidate_pane_g1

0xbfa6,	// (0x00019563) fep_vkb_keypad_pane_g3_ParamLimits

0xbfa6,	// (0x00019563) fep_vkb_keypad_pane_g3

0xbfce,	// (0x0001958b) fep_vkb_keypad_pane_g4_ParamLimits

0xbfce,	// (0x0001958b) fep_vkb_keypad_pane_g4

0xc03d,	// (0x000195fa) fep_vkb_bottom_pane_g2_ParamLimits

0xc03d,	// (0x000195fa) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x0001d0da) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x0001d0da) fep_vkb_bottom_pane_g

0xbcbd,	// (0x0001927a) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x0001d0e4) cell_vkb_side_pane_g

0xc0c8,	// (0x00019685) cell_vkb_side_pane_t1

0xc0d6,	// (0x00019693) cell_vkb_side_pane_t1_copy1

0xbcbd,	// (0x0001927a) bg_fep_vkb_candidate_pane_g2

0xc202,	// (0x000197bf) cell_vkb_candidate_pane_ParamLimits

0xbd6f,	// (0x0001932c) aid_size_cell_vkb_ParamLimits

0xbd6f,	// (0x0001932c) aid_size_cell_vkb

0xc202,	// (0x000197bf) cell_vkb_candidate_pane

0x6c64,	// (0x00014221) bg_popup_fep_shadow_pane_g1

0xbdfd,	// (0x000193ba) fep_vkb_bottom_pane_ParamLimits

0xbdfd,	// (0x000193ba) fep_vkb_bottom_pane

0xbe33,	// (0x000193f0) fep_vkb_candidate_pane_ParamLimits

0xbe33,	// (0x000193f0) fep_vkb_candidate_pane

0xbe4f,	// (0x0001940c) fep_vkb_keypad_pane_ParamLimits

0xbe4f,	// (0x0001940c) fep_vkb_keypad_pane

0xbe8e,	// (0x0001944b) fep_vkb_side_pane_ParamLimits

0xbe8e,	// (0x0001944b) fep_vkb_side_pane

0xbeca,	// (0x00019487) fep_vkb_top_pane_ParamLimits

0xbeca,	// (0x00019487) fep_vkb_top_pane

0xbeff,	// (0x000194bc) fep_vkb_top_pane_g1_ParamLimits

0xbeff,	// (0x000194bc) fep_vkb_top_pane_g1

0xbf0e,	// (0x000194cb) fep_vkb_top_pane_g2_ParamLimits

0xbf0e,	// (0x000194cb) fep_vkb_top_pane_g2

0xbf1d,	// (0x000194da) fep_vkb_top_pane_g3_ParamLimits

0xbf1d,	// (0x000194da) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x0001d0ca) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x0001d0ca) fep_vkb_top_pane_g

0xbf3b,	// (0x000194f8) fep_vkb_top_text_pane_ParamLimits

0xbf3b,	// (0x000194f8) fep_vkb_top_text_pane

0xbf4c,	// (0x00019509) fep_vkb_side_pane_g1_ParamLimits

0xbf4c,	// (0x00019509) fep_vkb_side_pane_g1

0xbf95,	// (0x00019552) grid_vkb_side_pane_ParamLimits

0xbf95,	// (0x00019552) grid_vkb_side_pane

0x6c6c,	// (0x00014229) bg_popup_fep_shadow_pane_g2

0x6c75,	// (0x00014232) bg_popup_fep_shadow_pane_g3

0x6c7d,	// (0x0001423a) bg_popup_fep_shadow_pane_g4

0x6c86,	// (0x00014243) bg_popup_fep_shadow_pane_g5

0x6c90,	// (0x0001424d) bg_popup_fep_shadow_pane_g6

0x6c98,	// (0x00014255) bg_popup_fep_shadow_pane_g7

0x3c84,	// (0x00011241) bg_popup_fep_shadow_pane_g8

0xbfec,	// (0x000195a9) grid_vkb_keypad_number_pane_ParamLimits

0xbfec,	// (0x000195a9) grid_vkb_keypad_number_pane

0xbffc,	// (0x000195b9) grid_vkb_keypad_pane_ParamLimits

0xbffc,	// (0x000195b9) grid_vkb_keypad_pane

0xc022,	// (0x000195df) fep_vkb_bottom_pane_g1_ParamLimits

0xc022,	// (0x000195df) fep_vkb_bottom_pane_g1

0xc04b,	// (0x00019608) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc04b,	// (0x00019608) grid_vkb_keypad_bottom_left_pane

0xc060,	// (0x0001961d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc060,	// (0x0001961d) grid_vkb_keypad_bottom_right_pane

0xc075,	// (0x00019632) fep_vkb_top_text_pane_g1

0xc090,	// (0x0001964d) fep_vkb_top_text_pane_t1

0xc0a5,	// (0x00019662) cell_vkb_side_pane_ParamLimits

0xc0a5,	// (0x00019662) cell_vkb_side_pane

0xbcbd,	// (0x0001927a) cell_vkb_side_pane_g1

0xc0e4,	// (0x000196a1) cell_vkb_keypad_pane_ParamLimits

0xc0e4,	// (0x000196a1) cell_vkb_keypad_pane

0xc159,	// (0x00019716) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x0001d0f7) bg_popup_fep_shadow_pane_g

0x6caa,	// (0x00014267) cell_hwr_side_pane_g1

0x6caa,	// (0x00014267) cell_hwr_side_pane_g2

0xc163,	// (0x00019720) cell_vkb_keypad_pane_t1

0xc171,	// (0x0001972e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc171,	// (0x0001972e) cell_vkb_keypad_bottom_left_pane

0xc18e,	// (0x0001974b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc18e,	// (0x0001974b) cell_vkb_keypad_bottom_right_pane

0xbcbd,	// (0x0001927a) cell_vkb_keypad_bottom_left_pane_g1

0xbcbd,	// (0x0001927a) cell_vkb_keypad_bottom_right_pane_g1

0xc1c7,	// (0x00019784) cell_vkb_keypad_number_pane_ParamLimits

0xc1c7,	// (0x00019784) cell_vkb_keypad_number_pane

0xc1e6,	// (0x000197a3) cell_vkb_keypad_number_pane_g1

0xc1f0,	// (0x000197ad) cell_vkb_keypad_number_pane_g2

0xc1f9,	// (0x000197b6) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x0001d0e9) cell_vkb_keypad_number_pane_g

0xc163,	// (0x00019720) cell_vkb_keypad_number_pane_t1

0xc21d,	// (0x000197da) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x0001d10a) cell_hwr_side_pane_g

0xc236,	// (0x000197f3) cell_hwr_side_pane_t1

0x6cb4,	// (0x00014271) cell_hwr_side_pane_t1_copy1

0x6cc2,	// (0x0001427f) cell_hwr_candidate_pane_g1

0x6cf1,	// (0x000142ae) cell_hwr_candidate_pane_t1

0xbcbd,	// (0x0001927a) cell_vkb_candidate_pane_g2

0xc27a,	// (0x00019837) cell_vkb_candidate_pane_t1

0x6a5d,	// (0x0001401a) bg_popup_fep_shadow_pane_ParamLimits

0x6a5d,	// (0x0001401a) bg_popup_fep_shadow_pane

0x6b12,	// (0x000140cf) bg_fep_hwr_top_pane_g4

0xbd3d,	// (0x000192fa) bg_hwr_side_pane_g1_ParamLimits

0xbd3d,	// (0x000192fa) bg_hwr_side_pane_g1

0x6b83,	// (0x00014140) cell_hwr_side_pane_ParamLimits

0x6b83,	// (0x00014140) cell_hwr_side_pane

0x6bbe,	// (0x0001417b) fep_hwr_write_pane_g1_ParamLimits

0x6bbe,	// (0x0001417b) fep_hwr_write_pane_g1

0x6bcb,	// (0x00014188) fep_hwr_write_pane_g2_ParamLimits

0x6bcb,	// (0x00014188) fep_hwr_write_pane_g2

0x6bd8,	// (0x00014195) fep_hwr_write_pane_g3_ParamLimits

0x6bd8,	// (0x00014195) fep_hwr_write_pane_g3

0x6be6,	// (0x000141a3) fep_hwr_write_pane_g4_ParamLimits

0x6be6,	// (0x000141a3) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x0001d0b6) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x0001d0b6) fep_hwr_write_pane_g

0x6b12,	// (0x000140cf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6b12,	// (0x000140cf) bg_fep_hwr_candidate_pane_g2

0x6bfb,	// (0x000141b8) cell_hwr_candidate_pane_ParamLimits

0x6bfb,	// (0x000141b8) cell_hwr_candidate_pane

0x6c3d,	// (0x000141fa) fep_hwr_candidate_pane_g1_ParamLimits

0xbd9d,	// (0x0001935a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd9d,	// (0x0001935a) bg_popup_fep_shadow_pane_cp2

0xbf2d,	// (0x000194ea) fep_vkb_top_pane_g4_ParamLimits

0xbf2d,	// (0x000194ea) fep_vkb_top_pane_g4

0xbf73,	// (0x00019530) fep_vkb_side_pane_g2_ParamLimits

0xbf73,	// (0x00019530) fep_vkb_side_pane_g2

0x83c7,	// (0x00015984) list_setting_pane_t4_ParamLimits

0x83c7,	// (0x00015984) list_setting_pane_t4

0x8441,	// (0x000159fe) list_setting_number_pane_t5_ParamLimits

0x8441,	// (0x000159fe) list_setting_number_pane_t5

0x8847,	// (0x00015e04) list_double_heading_pane_cp2_ParamLimits

0x8847,	// (0x00015e04) list_double_heading_pane_cp2

0x3e37,	// (0x000113f4) list_double_heading_pane_g1_cp2_ParamLimits

0x3e37,	// (0x000113f4) list_double_heading_pane_g1_cp2

0xc288,	// (0x00019845) list_double_heading_pane_g2_cp2_ParamLimits

0xc288,	// (0x00019845) list_double_heading_pane_g2_cp2

0xc29c,	// (0x00019859) list_double_heading_pane_t1_cp2_ParamLimits

0xc29c,	// (0x00019859) list_double_heading_pane_t1_cp2

0xc2b2,	// (0x0001986f) list_double_heading_pane_t2_cp2_ParamLimits

0xc2b2,	// (0x0001986f) list_double_heading_pane_t2_cp2

0x36cc,	// (0x00010c89) aid_value_unit2

0x57b3,	// (0x00012d70) popup_preview_fixed_window

0x38c8,	// (0x00010e85) bg_popup_preview_window_pane_cp02

0xc2c4,	// (0x00019881) list_preview_fixed_pane

0xc30a,	// (0x000198c7) list_empty_pane_fp_ParamLimits

0xc30a,	// (0x000198c7) list_empty_pane_fp

0xc30a,	// (0x000198c7) list_single_cale_day_pane_fp_ParamLimits

0xc30a,	// (0x000198c7) list_single_cale_day_pane_fp

0xc30a,	// (0x000198c7) list_single_graphic_heading_pane_fp_ParamLimits

0xc30a,	// (0x000198c7) list_single_graphic_heading_pane_fp

0xc30a,	// (0x000198c7) list_single_graphic_pane_fp_ParamLimits

0xc30a,	// (0x000198c7) list_single_graphic_pane_fp

0xc30a,	// (0x000198c7) list_single_heading_pane_fp_ParamLimits

0xc30a,	// (0x000198c7) list_single_heading_pane_fp

0xc30a,	// (0x000198c7) list_single_pane_fp_ParamLimits

0xc30a,	// (0x000198c7) list_single_pane_fp

0xc320,	// (0x000198dd) list_single_pane_fp_g1_ParamLimits

0xc320,	// (0x000198dd) list_single_pane_fp_g1

0x3e43,	// (0x00011400) list_single_pane_fp_g2_ParamLimits

0x3e43,	// (0x00011400) list_single_pane_fp_g2

0xc32c,	// (0x000198e9) list_single_pane_fp_g3_ParamLimits

0xc32c,	// (0x000198e9) list_single_pane_fp_g3

0xc340,	// (0x000198fd) list_single_pane_fp_g4_ParamLimits

0xc340,	// (0x000198fd) list_single_pane_fp_g4

0x0003,

0xfb60,	// (0x0001d11d) list_single_pane_fp_g_ParamLimits

0xfb60,	// (0x0001d11d) list_single_pane_fp_g

0xc34c,	// (0x00019909) list_single_pane_fp_t1_ParamLimits

0xc34c,	// (0x00019909) list_single_pane_fp_t1

0xc363,	// (0x00019920) list_single_graphic_pane_fp_g1_ParamLimits

0xc363,	// (0x00019920) list_single_graphic_pane_fp_g1

0xc320,	// (0x000198dd) list_single_graphic_pane_fp_g2_ParamLimits

0xc320,	// (0x000198dd) list_single_graphic_pane_fp_g2

0x3e43,	// (0x00011400) list_single_graphic_pane_fp_g3_ParamLimits

0x3e43,	// (0x00011400) list_single_graphic_pane_fp_g3

0xc32c,	// (0x000198e9) list_single_graphic_pane_fp_g4_ParamLimits

0xc32c,	// (0x000198e9) list_single_graphic_pane_fp_g4

0xc340,	// (0x000198fd) list_single_graphic_pane_fp_g5_ParamLimits

0xc340,	// (0x000198fd) list_single_graphic_pane_fp_g5

0x0004,

0xfb69,	// (0x0001d126) list_single_graphic_pane_fp_g_ParamLimits

0xfb69,	// (0x0001d126) list_single_graphic_pane_fp_g

0xc36f,	// (0x0001992c) list_single_graphic_pane_fp_t1_ParamLimits

0xc36f,	// (0x0001992c) list_single_graphic_pane_fp_t1

0xc363,	// (0x00019920) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc363,	// (0x00019920) list_single_graphic_heading_pane_fp_g1

0xc320,	// (0x000198dd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc320,	// (0x000198dd) list_single_graphic_heading_pane_fp_g2

0x3e43,	// (0x00011400) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3e43,	// (0x00011400) list_single_graphic_heading_pane_fp_g3

0xc32c,	// (0x000198e9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc32c,	// (0x000198e9) list_single_graphic_heading_pane_fp_g4

0xc340,	// (0x000198fd) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc340,	// (0x000198fd) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0001d126) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0001d126) list_single_graphic_heading_pane_fp_g

0xc385,	// (0x00019942) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc385,	// (0x00019942) list_single_graphic_heading_pane_fp_t1

0xc39b,	// (0x00019958) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc39b,	// (0x00019958) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb74,	// (0x0001d131) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb74,	// (0x0001d131) list_single_graphic_heading_pane_fp_t

0xc3ad,	// (0x0001996a) list_single_cale_day_pane_fp_g1_ParamLimits

0xc3ad,	// (0x0001996a) list_single_cale_day_pane_fp_g1

0xc3e5,	// (0x000199a2) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3e5,	// (0x000199a2) list_single_cale_day_pane_fp_g2

0xc3f1,	// (0x000199ae) list_single_cale_day_pane_fp_g3_ParamLimits

0xc3f1,	// (0x000199ae) list_single_cale_day_pane_fp_g3

0xc419,	// (0x000199d6) list_single_cale_day_pane_fp_g4_ParamLimits

0xc419,	// (0x000199d6) list_single_cale_day_pane_fp_g4

0xc43d,	// (0x000199fa) list_single_cale_day_pane_fp_g5_ParamLimits

0xc43d,	// (0x000199fa) list_single_cale_day_pane_fp_g5

0x0004,

0xfb79,	// (0x0001d136) list_single_cale_day_pane_fp_g_ParamLimits

0xfb79,	// (0x0001d136) list_single_cale_day_pane_fp_g

0xc461,	// (0x00019a1e) list_single_cale_day_pane_fp_t1_ParamLimits

0xc461,	// (0x00019a1e) list_single_cale_day_pane_fp_t1

0xc487,	// (0x00019a44) list_single_cale_day_pane_fp_t2_ParamLimits

0xc487,	// (0x00019a44) list_single_cale_day_pane_fp_t2

0xc4a0,	// (0x00019a5d) list_single_cale_day_pane_fp_t3_ParamLimits

0xc4a0,	// (0x00019a5d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb84,	// (0x0001d141) list_single_cale_day_pane_fp_t_ParamLimits

0xfb84,	// (0x0001d141) list_single_cale_day_pane_fp_t

0xc320,	// (0x000198dd) list_empty_pane_fp_g1_ParamLimits

0xc320,	// (0x000198dd) list_empty_pane_fp_g1

0xc4b9,	// (0x00019a76) list_empty_pane_fp_t1

0xc4c7,	// (0x00019a84) list_empty_pane_fp_t2

0x0001,

0xfb8b,	// (0x0001d148) list_empty_pane_fp_t

0xc320,	// (0x000198dd) list_single_heading_pane_fp_g1_ParamLimits

0xc320,	// (0x000198dd) list_single_heading_pane_fp_g1

0x3e43,	// (0x00011400) list_single_heading_pane_fp_g2_ParamLimits

0x3e43,	// (0x00011400) list_single_heading_pane_fp_g2

0xc32c,	// (0x000198e9) list_single_heading_pane_fp_g3_ParamLimits

0xc32c,	// (0x000198e9) list_single_heading_pane_fp_g3

0x0002,

0xfb90,	// (0x0001d14d) list_single_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x0001d14d) list_single_heading_pane_fp_g

0xc4d5,	// (0x00019a92) list_single_heading_pane_fp_t1_ParamLimits

0xc4d5,	// (0x00019a92) list_single_heading_pane_fp_t1

0xc4e7,	// (0x00019aa4) list_single_heading_pane_fp_t2_ParamLimits

0xc4e7,	// (0x00019aa4) list_single_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0001d154) list_single_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0001d154) list_single_heading_pane_fp_t

0x86fc,	// (0x00015cb9) aid_size_cell_fast

0x38ab,	// (0x00010e68) soft_indicator_pane_cp1_t1

0x8705,	// (0x00015cc2) cell_app_pane_cp2_ParamLimits

0x8705,	// (0x00015cc2) cell_app_pane_cp2

0x6a7f,	// (0x0001403c) fep_hwr_candidate_drop_down_list_pane

0x6c57,	// (0x00014214) fep_hwr_candidate_pane_g3_ParamLimits

0x6c57,	// (0x00014214) fep_hwr_candidate_pane_g3

0x2bc5,	// (0x00010182) fep_hwr_candidate_pane_g4_ParamLimits

0x2bc5,	// (0x00010182) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x0001d0c3) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x0001d0c3) fep_hwr_candidate_pane_g

0xbe22,	// (0x000193df) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe22,	// (0x000193df) fep_vkb_candidate_drop_down_list_pane

0xc225,	// (0x000197e2) fep_vkb_candidate_pane_g3

0xc22d,	// (0x000197ea) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x0001d0f0) fep_vkb_candidate_pane_g

0x6cc2,	// (0x0001427f) cell_hwr_candidate_pane_g1_ParamLimits

0x6cd0,	// (0x0001428d) cell_hwr_candidate_pane_g3_ParamLimits

0x6cd0,	// (0x0001428d) cell_hwr_candidate_pane_g3

0xdfd8,	// (0x0001b595) cell_hwr_candidate_pane_g4_ParamLimits

0xdfd8,	// (0x0001b595) cell_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0001d10f) cell_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0001d10f) cell_hwr_candidate_pane_g

0xc244,	// (0x00019801) cell_vkb_candidate_pane_g3_ParamLimits

0xc244,	// (0x00019801) cell_vkb_candidate_pane_g3

0xc25f,	// (0x0001981c) cell_vkb_candidate_pane_g4_ParamLimits

0xc25f,	// (0x0001981c) cell_vkb_candidate_pane_g4

0xc4fd,	// (0x00019aba) cell_app_pane_cp2_g1_ParamLimits

0xc4fd,	// (0x00019aba) cell_app_pane_cp2_g1

0xc51b,	// (0x00019ad8) cell_app_pane_cp2_g2_ParamLimits

0xc51b,	// (0x00019ad8) cell_app_pane_cp2_g2

0x0001,

0xfb9c,	// (0x0001d159) cell_app_pane_cp2_g_ParamLimits

0xfb9c,	// (0x0001d159) cell_app_pane_cp2_g

0xc527,	// (0x00019ae4) cell_app_pane_cp2_t1_ParamLimits

0xc527,	// (0x00019ae4) cell_app_pane_cp2_t1

0x3ba6,	// (0x00011163) grid_highlight_pane_cp1_ParamLimits

0x3ba6,	// (0x00011163) grid_highlight_pane_cp1

0x6d0f,	// (0x000142cc) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d0f,	// (0x000142cc) cell_hwr_candidate_pane_cp1

0x6cc2,	// (0x0001427f) fep_hwr_candidate_drop_down_list_pane_g1

0x6d2e,	// (0x000142eb) fep_hwr_candidate_drop_down_list_pane_g2

0x6d3b,	// (0x000142f8) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x0001d15e) fep_hwr_candidate_drop_down_list_pane_g

0x6d48,	// (0x00014305) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d51,	// (0x0001430e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d51,	// (0x0001430e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d5e,	// (0x0001431b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d5e,	// (0x0001431b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d6b,	// (0x00014328) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d6b,	// (0x00014328) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d78,	// (0x00014335) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d78,	// (0x00014335) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d93,	// (0x00014350) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d93,	// (0x00014350) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6dae,	// (0x0001436b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6dae,	// (0x0001436b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6dc9,	// (0x00014386) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6dc9,	// (0x00014386) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6de4,	// (0x000143a1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6de4,	// (0x000143a1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x0001d165) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x0001d165) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc539,	// (0x00019af6) cell_vkb_candidate_pane_cp1_ParamLimits

0xc539,	// (0x00019af6) cell_vkb_candidate_pane_cp1

0xbf2d,	// (0x000194ea) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf2d,	// (0x000194ea) fep_vkb_candidate_drop_down_list_pane_g1

0xc559,	// (0x00019b16) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc559,	// (0x00019b16) fep_vkb_candidate_drop_down_list_pane_g2

0xc566,	// (0x00019b23) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc566,	// (0x00019b23) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001d176) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb9,	// (0x0001d176) fep_vkb_candidate_drop_down_list_pane_g

0xc573,	// (0x00019b30) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc573,	// (0x00019b30) fep_vkb_candidate_drop_down_list_scroll_pane

0xc580,	// (0x00019b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc580,	// (0x00019b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc58d,	// (0x00019b4a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc58d,	// (0x00019b4a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc599,	// (0x00019b56) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc599,	// (0x00019b56) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5a5,	// (0x00019b62) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5a5,	// (0x00019b62) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5c6,	// (0x00019b83) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5c6,	// (0x00019b83) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5e7,	// (0x00019ba4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5e7,	// (0x00019ba4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc608,	// (0x00019bc5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc608,	// (0x00019bc5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc629,	// (0x00019be6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc629,	// (0x00019be6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001d17d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001d17d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b7c,	// (0x00015139) title_pane_g1_ParamLimits

0x7b89,	// (0x00015146) title_pane_g2_ParamLimits

0xf529,	// (0x0001cae6) title_pane_g_ParamLimits

0x421b,	// (0x000117d8) aid_call2_pane

0x4213,	// (0x000117d0) aid_call_pane

0x4223,	// (0x000117e0) popup_clock_analogue_window_g1

0x4223,	// (0x000117e0) popup_clock_analogue_window_g2

0x5b24,	// (0x000130e1) popup_clock_analogue_window_g3

0x5b2d,	// (0x000130ea) popup_clock_analogue_window_g4

0x36de,	// (0x00010c9b) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x0001cc81) popup_clock_analogue_window_g

0x5b35,	// (0x000130f2) popup_clock_analogue_window_t1

0x5b43,	// (0x00013100) clock_digital_number_pane_ParamLimits

0x5b43,	// (0x00013100) clock_digital_number_pane

0x5b4f,	// (0x0001310c) clock_digital_number_pane_cp02_ParamLimits

0x5b4f,	// (0x0001310c) clock_digital_number_pane_cp02

0x5b5b,	// (0x00013118) clock_digital_number_pane_cp03_ParamLimits

0x5b5b,	// (0x00013118) clock_digital_number_pane_cp03

0x5b67,	// (0x00013124) clock_digital_number_pane_cp04_ParamLimits

0x5b67,	// (0x00013124) clock_digital_number_pane_cp04

0x5b73,	// (0x00013130) clock_digital_separator_pane_ParamLimits

0x5b73,	// (0x00013130) clock_digital_separator_pane

0x5b7f,	// (0x0001313c) popup_clock_digital_window_t1_ParamLimits

0x5b7f,	// (0x0001313c) popup_clock_digital_window_t1

0x36de,	// (0x00010c9b) clock_digital_number_pane_g1

0x36de,	// (0x00010c9b) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x0001cc8c) clock_digital_number_pane_g

0x36de,	// (0x00010c9b) clock_digital_separator_pane_g1

0x36de,	// (0x00010c9b) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x0001cc8c) clock_digital_separator_pane_g

0x8c2a,	// (0x000161e7) aid_fill_nsta_ParamLimits

0x8d76,	// (0x00016333) indicator_nsta_pane_ParamLimits

0x8eef,	// (0x000164ac) popup_clock_analogue_window

0x8eef,	// (0x000164ac) popup_clock_digital_window

0xb63d,	// (0x00018bfa) grid_indicator_nsta_pane_ParamLimits

0xb666,	// (0x00018c23) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x0001d043) clock_nsta_pane_t

0x5ae8,	// (0x000130a5) aid_size_max_handle

0x5af2,	// (0x000130af) aid_size_min_handle

0x486a,	// (0x00011e27) editor_scroll_pane

0xc644,	// (0x00019c01) ex_editor_pane

0x3d46,	// (0x00011303) scroll_pane_cp13

0x3afc,	// (0x000110b9) scroll_pane_cp14

0x4271,	// (0x0001182e) scroll_pane_cp36

0x885b,	// (0x00015e18) list_single_graphic_hl_pane_cp2_ParamLimits

0x885b,	// (0x00015e18) list_single_graphic_hl_pane_cp2

0xa8aa,	// (0x00017e67) list_single_graphic_hl_pane_ParamLimits

0xa8aa,	// (0x00017e67) list_single_graphic_hl_pane

0xc64c,	// (0x00019c09) aid_size_min_hl_cp1

0xc655,	// (0x00019c12) list_highlight_pane_cp34_ParamLimits

0xc655,	// (0x00019c12) list_highlight_pane_cp34

0xc666,	// (0x00019c23) list_single_graphic_hl_pane_g1_ParamLimits

0xc666,	// (0x00019c23) list_single_graphic_hl_pane_g1

0xc673,	// (0x00019c30) list_single_graphic_hl_pane_g2_ParamLimits

0xc673,	// (0x00019c30) list_single_graphic_hl_pane_g2

0xc673,	// (0x00019c30) list_single_graphic_hl_pane_g3_ParamLimits

0xc673,	// (0x00019c30) list_single_graphic_hl_pane_g3

0x4770,	// (0x00011d2d) list_single_graphic_hl_pane_g4_ParamLimits

0x4770,	// (0x00011d2d) list_single_graphic_hl_pane_g4

0xc67f,	// (0x00019c3c) list_single_graphic_hl_pane_g5_ParamLimits

0xc67f,	// (0x00019c3c) list_single_graphic_hl_pane_g5

0x0004,

0xfbd1,	// (0x0001d18e) list_single_graphic_hl_pane_g_ParamLimits

0xfbd1,	// (0x0001d18e) list_single_graphic_hl_pane_g

0xc693,	// (0x00019c50) list_single_graphic_hl_pane_t1_ParamLimits

0xc693,	// (0x00019c50) list_single_graphic_hl_pane_t1

0xc6a9,	// (0x00019c66) aid_size_min_hl_cp2

0xc6b2,	// (0x00019c6f) list_highlight_pane_cp34_cp2_ParamLimits

0xc6b2,	// (0x00019c6f) list_highlight_pane_cp34_cp2

0xc666,	// (0x00019c23) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc666,	// (0x00019c23) list_single_graphic_hl_pane_g1_cp2

0xc6bf,	// (0x00019c7c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc6bf,	// (0x00019c7c) list_single_graphic_hl_pane_g2_cp2

0xc6cb,	// (0x00019c88) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6cb,	// (0x00019c88) list_single_graphic_hl_pane_g3_cp2

0x4770,	// (0x00011d2d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4770,	// (0x00011d2d) list_single_graphic_hl_pane_g4_cp2

0xc67f,	// (0x00019c3c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc67f,	// (0x00019c3c) list_single_graphic_hl_pane_g5_cp2

0x5e2a,	// (0x000133e7) control_pane_g4_ParamLimits

0x5e2a,	// (0x000133e7) control_pane_g4

0x4a49,	// (0x00012006) bg_popup_sub_pane_cp10_ParamLimits

0xbcc7,	// (0x00019284) list_choice_list_pane_ParamLimits

0xbcd6,	// (0x00019293) scroll_pane_cp23

0x38c8,	// (0x00010e85) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2c4,	// (0x00019881) list_preview_fixed_pane_ParamLimits

0xc2da,	// (0x00019897) list_preview_fixed_pane_cp_ParamLimits

0xc2da,	// (0x00019897) list_preview_fixed_pane_cp

0xc2e6,	// (0x000198a3) popup_preview_fixed_window_g1_ParamLimits

0xc2e6,	// (0x000198a3) popup_preview_fixed_window_g1

0xc2f2,	// (0x000198af) popup_preview_fixed_window_g2_ParamLimits

0xc2f2,	// (0x000198af) popup_preview_fixed_window_g2

0x0002,

0xfb59,	// (0x0001d116) popup_preview_fixed_window_g_ParamLimits

0xfb59,	// (0x0001d116) popup_preview_fixed_window_g

0x5a5c,	// (0x00013019) aid_navi_side_left_pane_ParamLimits

0x5a71,	// (0x0001302e) aid_navi_side_right_pane_ParamLimits

0x5a89,	// (0x00013046) navi_icon_pane_stacon_ParamLimits

0x5a9d,	// (0x0001305a) navi_navi_pane_stacon_ParamLimits

0x5a89,	// (0x00013046) navi_text_pane_stacon_ParamLimits

0x5682,	// (0x00012c3f) main_text_info_pane

0xc6ef,	// (0x00019cac) listscroll_text_info_pane

0xc6f7,	// (0x00019cb4) list_text_info_pane_ParamLimits

0xc6f7,	// (0x00019cb4) list_text_info_pane

0xc706,	// (0x00019cc3) scroll_pane_cp24_ParamLimits

0xc706,	// (0x00019cc3) scroll_pane_cp24

0xc724,	// (0x00019ce1) list_text_info_pane_t1_ParamLimits

0xc724,	// (0x00019ce1) list_text_info_pane_t1

0x5faa,	// (0x00013567) popup_fast_swap2_window_ParamLimits

0x5faa,	// (0x00013567) popup_fast_swap2_window

0xc758,	// (0x00019d15) aid_size_cell_fast2

0x36d4,	// (0x00010c91) bg_popup_window_pane_cp17

0xc762,	// (0x00019d1f) heading_pane_cp2

0xc76a,	// (0x00019d27) listscroll_fast2_pane

0xc772,	// (0x00019d2f) grid_fast2_pane

0xc77c,	// (0x00019d39) listscroll_fast2_pane_g1

0xc784,	// (0x00019d41) listscroll_fast2_pane_g2

0x0001,

0xfbdc,	// (0x0001d199) listscroll_fast2_pane_g

0x3d46,	// (0x00011303) scroll_pane_cp26

0xc78e,	// (0x00019d4b) cell_fast2_pane_ParamLimits

0xc78e,	// (0x00019d4b) cell_fast2_pane

0xc7a3,	// (0x00019d60) cell_fast2_pane_g1

0xc7ac,	// (0x00019d69) cell_fast2_pane_g2

0xc7b5,	// (0x00019d72) cell_fast2_pane_g3

0x0002,

0xfbe1,	// (0x0001d19e) cell_fast2_pane_g

0x3a33,	// (0x00010ff0) grid_highlight_pane_cp9

0x5f72,	// (0x0001352f) main_eswt_pane_ParamLimits

0x5f72,	// (0x0001352f) main_eswt_pane

0xc71b,	// (0x00019cd8) list_single_text_info_pane

0xc7bd,	// (0x00019d7a) eswt_ctrl_button_pane

0xc7bd,	// (0x00019d7a) eswt_ctrl_canvas_pane

0xc7c5,	// (0x00019d82) eswt_ctrl_combo_pane

0xc7bd,	// (0x00019d7a) eswt_ctrl_default_pane

0xc7bd,	// (0x00019d7a) eswt_ctrl_label_pane

0xc7cd,	// (0x00019d8a) eswt_ctrl_wait_pane

0xc7d5,	// (0x00019d92) eswt_shell_pane

0x36d4,	// (0x00010c91) listscroll_eswt_app_pane

0xc7f5,	// (0x00019db2) popup_eswt_tasktip_window_ParamLimits

0xc7f5,	// (0x00019db2) popup_eswt_tasktip_window

0x9263,	// (0x00016820) bg_popup_window_pane_cp18

0xc80e,	// (0x00019dcb) eswt_control_pane_g1_ParamLimits

0xc80e,	// (0x00019dcb) eswt_control_pane_g1

0xc81b,	// (0x00019dd8) eswt_control_pane_g2_ParamLimits

0xc81b,	// (0x00019dd8) eswt_control_pane_g2

0xc828,	// (0x00019de5) eswt_control_pane_g3_ParamLimits

0xc828,	// (0x00019de5) eswt_control_pane_g3

0xc835,	// (0x00019df2) eswt_control_pane_g4_ParamLimits

0xc835,	// (0x00019df2) eswt_control_pane_g4

0x0003,

0xfbe8,	// (0x0001d1a5) eswt_control_pane_g_ParamLimits

0xfbe8,	// (0x0001d1a5) eswt_control_pane_g

0x3ba6,	// (0x00011163) bg_button_pane_ParamLimits

0x3ba6,	// (0x00011163) bg_button_pane

0x3a48,	// (0x00011005) common_borders_pane_copy2_ParamLimits

0x3a48,	// (0x00011005) common_borders_pane_copy2

0xc842,	// (0x00019dff) control_button_pane_g1_ParamLimits

0xc842,	// (0x00019dff) control_button_pane_g1

0xc84e,	// (0x00019e0b) control_button_pane_g2_ParamLimits

0xc84e,	// (0x00019e0b) control_button_pane_g2

0xc85a,	// (0x00019e17) control_button_pane_g3_ParamLimits

0xc85a,	// (0x00019e17) control_button_pane_g3

0x0002,

0xfbf1,	// (0x0001d1ae) control_button_pane_g_ParamLimits

0xfbf1,	// (0x0001d1ae) control_button_pane_g

0xc86e,	// (0x00019e2b) control_button_pane_t1

0xc87c,	// (0x00019e39) control_button_pane_t2

0x0001,

0xfbf8,	// (0x0001d1b5) control_button_pane_t

0x9143,	// (0x00016700) bg_button_pane_g1

0x9153,	// (0x00016710) bg_button_pane_g2

0x914b,	// (0x00016708) bg_button_pane_g3

0x9163,	// (0x00016720) bg_button_pane_g4

0x915b,	// (0x00016718) bg_button_pane_g5

0x916b,	// (0x00016728) bg_button_pane_g6

0x9173,	// (0x00016730) bg_button_pane_g7

0x9183,	// (0x00016740) bg_button_pane_g8

0x917b,	// (0x00016738) bg_button_pane_g9

0x0008,

0xf832,	// (0x0001cdef) bg_button_pane_g

0xbc82,	// (0x0001923f) common_borders_pane_ParamLimits

0xbc82,	// (0x0001923f) common_borders_pane

0xc80e,	// (0x00019dcb) eswt_control_pane_g1_copy1_ParamLimits

0xc80e,	// (0x00019dcb) eswt_control_pane_g1_copy1

0xc81b,	// (0x00019dd8) eswt_control_pane_g2_copy1_ParamLimits

0xc81b,	// (0x00019dd8) eswt_control_pane_g2_copy1

0xc828,	// (0x00019de5) eswt_control_pane_g3_copy1_ParamLimits

0xc828,	// (0x00019de5) eswt_control_pane_g3_copy1

0xc835,	// (0x00019df2) eswt_control_pane_g4_copy1_ParamLimits

0xc835,	// (0x00019df2) eswt_control_pane_g4_copy1

0xbcbd,	// (0x0001927a) bg_eswt_ctrl_canvas_pane_g1

0xbc82,	// (0x0001923f) common_borders_pane_cp2_ParamLimits

0xbc82,	// (0x0001923f) common_borders_pane_cp2

0xbc82,	// (0x0001923f) common_borders_pane_cp3_ParamLimits

0xbc82,	// (0x0001923f) common_borders_pane_cp3

0xc88a,	// (0x00019e47) separator_horizontal_pane

0xc892,	// (0x00019e4f) separator_vertical_pane

0xc80e,	// (0x00019dcb) eswt_control_pane_g1_copy2_ParamLimits

0xc80e,	// (0x00019dcb) eswt_control_pane_g1_copy2

0xc81b,	// (0x00019dd8) eswt_control_pane_g2_copy2_ParamLimits

0xc81b,	// (0x00019dd8) eswt_control_pane_g2_copy2

0xc828,	// (0x00019de5) eswt_control_pane_g3_copy2_ParamLimits

0xc828,	// (0x00019de5) eswt_control_pane_g3_copy2

0xc835,	// (0x00019df2) eswt_control_pane_g4_copy2_ParamLimits

0xc835,	// (0x00019df2) eswt_control_pane_g4_copy2

0x36d4,	// (0x00010c91) common_borders_pane_cp4

0xc89b,	// (0x00019e58) separator_horizontal_pane_g1

0xc8a4,	// (0x00019e61) separator_horizontal_pane_g2

0xc8ad,	// (0x00019e6a) separator_horizontal_pane_g3

0x0002,

0xfbfd,	// (0x0001d1ba) separator_horizontal_pane_g

0xc80e,	// (0x00019dcb) eswt_control_pane_g1_copy3_ParamLimits

0xc80e,	// (0x00019dcb) eswt_control_pane_g1_copy3

0xc81b,	// (0x00019dd8) eswt_control_pane_g2_copy3_ParamLimits

0xc81b,	// (0x00019dd8) eswt_control_pane_g2_copy3

0xc828,	// (0x00019de5) eswt_control_pane_g3_copy3_ParamLimits

0xc828,	// (0x00019de5) eswt_control_pane_g3_copy3

0xc835,	// (0x00019df2) eswt_control_pane_g4_copy3_ParamLimits

0xc835,	// (0x00019df2) eswt_control_pane_g4_copy3

0x36d4,	// (0x00010c91) common_borders_pane_cp5

0xc8b6,	// (0x00019e73) separator_vertical_pane_g1

0xc8bf,	// (0x00019e7c) separator_vertical_pane_g2

0xc8c8,	// (0x00019e85) separator_vertical_pane_g3

0x0002,

0xfc04,	// (0x0001d1c1) separator_vertical_pane_g

0xc80e,	// (0x00019dcb) eswt_control_pane_g1_copy4_ParamLimits

0xc80e,	// (0x00019dcb) eswt_control_pane_g1_copy4

0xc81b,	// (0x00019dd8) eswt_control_pane_g2_copy4_ParamLimits

0xc81b,	// (0x00019dd8) eswt_control_pane_g2_copy4

0xc828,	// (0x00019de5) eswt_control_pane_g3_copy4_ParamLimits

0xc828,	// (0x00019de5) eswt_control_pane_g3_copy4

0xc835,	// (0x00019df2) eswt_control_pane_g4_copy4_ParamLimits

0xc835,	// (0x00019df2) eswt_control_pane_g4_copy4

0xc8d1,	// (0x00019e8e) eswt_ctrl_combo_button_pane

0xc8d9,	// (0x00019e96) eswt_ctrl_input_pane

0xc8e1,	// (0x00019e9e) popup_choice_list_window_cp70

0xc8e9,	// (0x00019ea6) eswt_ctrl_input_pane_t1

0x36d4,	// (0x00010c91) input_focus_pane_cp70

0xbc82,	// (0x0001923f) bg_button_pane_cp70_ParamLimits

0xbc82,	// (0x0001923f) bg_button_pane_cp70

0xc8f7,	// (0x00019eb4) eswt_ctrl_combo_button_pane_g1

0xc8ff,	// (0x00019ebc) wait_bar_pane_cp70

0x9263,	// (0x00016820) bg_popup_window_pane_cp70_ParamLimits

0x9263,	// (0x00016820) bg_popup_window_pane_cp70

0xc907,	// (0x00019ec4) popup_eswt_tasktip_window_t1

0xc91d,	// (0x00019eda) wait_bar_pane_cp71_ParamLimits

0xc91d,	// (0x00019eda) wait_bar_pane_cp71

0xc929,	// (0x00019ee6) grid_eswt_app_pane

0x40ff,	// (0x000116bc) scroll_pane_cp70

0xc932,	// (0x00019eef) cell_eswt_app_pane_ParamLimits

0xc932,	// (0x00019eef) cell_eswt_app_pane

0xc962,	// (0x00019f1f) cell_eswt_app_pane_g1_ParamLimits

0xc962,	// (0x00019f1f) cell_eswt_app_pane_g1

0xc991,	// (0x00019f4e) cell_eswt_app_pane_g2_ParamLimits

0xc991,	// (0x00019f4e) cell_eswt_app_pane_g2

0x0001,

0xfc0b,	// (0x0001d1c8) cell_eswt_app_pane_g_ParamLimits

0xfc0b,	// (0x0001d1c8) cell_eswt_app_pane_g

0xc9b5,	// (0x00019f72) cell_eswt_app_pane_t1_ParamLimits

0xc9b5,	// (0x00019f72) cell_eswt_app_pane_t1

0xc9e7,	// (0x00019fa4) grid_highlight_pane_cp70_ParamLimits

0xc9e7,	// (0x00019fa4) grid_highlight_pane_cp70

0x4764,	// (0x00011d21) set_content_pane_g1

0x8bd7,	// (0x00016194) status_small_volume_pane

0x6dff,	// (0x000143bc) status_small_volume_pane_g1

0x6e07,	// (0x000143c4) volume_small2_pane

0x6e10,	// (0x000143cd) volume_small2_pane_g1

0x6e19,	// (0x000143d6) volume_small2_pane_g2

0x6e22,	// (0x000143df) volume_small2_pane_g3

0x6e2b,	// (0x000143e8) volume_small2_pane_g4

0x6e34,	// (0x000143f1) volume_small2_pane_g5

0x6e3d,	// (0x000143fa) volume_small2_pane_g6

0x6e46,	// (0x00014403) volume_small2_pane_g7

0x6e4f,	// (0x0001440c) volume_small2_pane_g8

0x6e58,	// (0x00014415) volume_small2_pane_g9

0x6e61,	// (0x0001441e) volume_small2_pane_g10

0x0009,

0xfc10,	// (0x0001d1cd) volume_small2_pane_g

0xc075,	// (0x00019632) fep_vkb_top_text_pane_g1_ParamLimits

0xc090,	// (0x0001964d) fep_vkb_top_text_pane_t1_ParamLimits

0xc2fe,	// (0x000198bb) popup_preview_fixed_window_g3_ParamLimits

0xc2fe,	// (0x000198bb) popup_preview_fixed_window_g3

0x6459,	// (0x00013a16) popup_toolbar_trans_pane

0xa5f4,	// (0x00017bb1) aid_height_set_list_ParamLimits

0xa605,	// (0x00017bc2) aid_size_parent_ParamLimits

0x4a49,	// (0x00012006) list_highlight_pane_cp2_ParamLimits

0x4764,	// (0x00011d21) set_content_pane_g1_ParamLimits

0xa8c9,	// (0x00017e86) list_single_image_pane_ParamLimits

0xa8c9,	// (0x00017e86) list_single_image_pane

0xc9f3,	// (0x00019fb0) aid_size_cell_image_ParamLimits

0xc9f3,	// (0x00019fb0) aid_size_cell_image

0xca00,	// (0x00019fbd) grid_single_image_pane_ParamLimits

0xca00,	// (0x00019fbd) grid_single_image_pane

0x3e43,	// (0x00011400) list_single_image_pane_g1_ParamLimits

0x3e43,	// (0x00011400) list_single_image_pane_g1

0xc32c,	// (0x000198e9) list_single_image_pane_g2_ParamLimits

0xc32c,	// (0x000198e9) list_single_image_pane_g2

0x0001,

0xfc25,	// (0x0001d1e2) list_single_image_pane_g_ParamLimits

0xfc25,	// (0x0001d1e2) list_single_image_pane_g

0xca0c,	// (0x00019fc9) list_single_image_pane_t1_ParamLimits

0xca0c,	// (0x00019fc9) list_single_image_pane_t1

0xca22,	// (0x00019fdf) cell_image_list_pane_ParamLimits

0xca22,	// (0x00019fdf) cell_image_list_pane

0xca36,	// (0x00019ff3) cell_image_list_pane_g1

0xca3f,	// (0x00019ffc) cell_image_list_pane_g2

0x0001,

0xfc2a,	// (0x0001d1e7) cell_image_list_pane_g

0xca48,	// (0x0001a005) aid_size_cell_tb_trans_pane

0x3ba6,	// (0x00011163) bg_tb_trans_pane

0xca5a,	// (0x0001a017) grid_tb_trans_pane

0x9143,	// (0x00016700) bg_tb_trans_pane_g1

0x9153,	// (0x00016710) bg_tb_trans_pane_g2

0x914b,	// (0x00016708) bg_tb_trans_pane_g3

0x9163,	// (0x00016720) bg_tb_trans_pane_g4

0x915b,	// (0x00016718) bg_tb_trans_pane_g5

0x9183,	// (0x00016740) bg_tb_trans_pane_g6

0x917b,	// (0x00016738) bg_tb_trans_pane_g7

0x916b,	// (0x00016728) bg_tb_trans_pane_g8

0x9173,	// (0x00016730) bg_tb_trans_pane_g9

0x0008,

0xfc2f,	// (0x0001d1ec) bg_tb_trans_pane_g

0xca6e,	// (0x0001a02b) cell_toolbar_trans_pane_ParamLimits

0xca6e,	// (0x0001a02b) cell_toolbar_trans_pane

0xbcbd,	// (0x0001927a) cell_toolbar_trans_pane_g1

0xb83b,	// (0x00018df8) list_form2_midp_pane_t1

0xb849,	// (0x00018e06) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x0001d089) list_form2_midp_pane_t

0xb857,	// (0x00018e14) scroll_pane_cp51_ParamLimits

0xba60,	// (0x0001901d) form2_midp_wait_pane_g1

0xba69,	// (0x00019026) form2_midp_wait_pane_g2

0xba72,	// (0x0001902f) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x0001d09e) form2_midp_wait_pane_g

0x3784,	// (0x00010d41) list_highlight_pane_cp21_ParamLimits

0xbaba,	// (0x00019077) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbac9,	// (0x00019086) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa84b,	// (0x00017e08) list_single_2graphic_im_pane_ParamLimits

0xa84b,	// (0x00017e08) list_single_2graphic_im_pane

0xca94,	// (0x0001a051) list_single_2graphic_im_pane_g1_ParamLimits

0xca94,	// (0x0001a051) list_single_2graphic_im_pane_g1

0xcaa5,	// (0x0001a062) list_single_2graphic_im_pane_g2_ParamLimits

0xcaa5,	// (0x0001a062) list_single_2graphic_im_pane_g2

0xcab1,	// (0x0001a06e) list_single_2graphic_im_pane_g3_ParamLimits

0xcab1,	// (0x0001a06e) list_single_2graphic_im_pane_g3

0x0003,

0xfc42,	// (0x0001d1ff) list_single_2graphic_im_pane_g_ParamLimits

0xfc42,	// (0x0001d1ff) list_single_2graphic_im_pane_g

0xcad1,	// (0x0001a08e) list_single_2graphic_im_pane_t1_ParamLimits

0xcad1,	// (0x0001a08e) list_single_2graphic_im_pane_t1

0xc30a,	// (0x000198c7) list_single_graphic_2heading_pane_fp_ParamLimits

0xc30a,	// (0x000198c7) list_single_graphic_2heading_pane_fp

0xc363,	// (0x00019920) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc363,	// (0x00019920) list_single_graphic_2heading_pane_fp_g1

0xc320,	// (0x000198dd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc320,	// (0x000198dd) list_single_graphic_2heading_pane_fp_g2

0x3e43,	// (0x00011400) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3e43,	// (0x00011400) list_single_graphic_2heading_pane_fp_g3

0xc32c,	// (0x000198e9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc32c,	// (0x000198e9) list_single_graphic_2heading_pane_fp_g4

0xc340,	// (0x000198fd) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc340,	// (0x000198fd) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0001d126) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0001d126) list_single_graphic_2heading_pane_fp_g

0xcb02,	// (0x0001a0bf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb02,	// (0x0001a0bf) list_single_graphic_2heading_pane_fp_t1

0xc39b,	// (0x00019958) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc39b,	// (0x00019958) list_single_graphic_2heading_pane_fp_t2

0xcb18,	// (0x0001a0d5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb18,	// (0x0001a0d5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4b,	// (0x0001d208) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4b,	// (0x0001d208) list_single_graphic_2heading_pane_fp_t

0xbd49,	// (0x00019306) fep_hwr_write_pane_g5_ParamLimits

0xbd49,	// (0x00019306) fep_hwr_write_pane_g5

0xbd55,	// (0x00019312) fep_hwr_write_pane_g6_ParamLimits

0xbd55,	// (0x00019312) fep_hwr_write_pane_g6

0xc7d5,	// (0x00019d92) eswt_shell_pane_ParamLimits

0x9263,	// (0x00016820) bg_popup_window_pane_cp18_ParamLimits

0xc806,	// (0x00019dc3) heading_pane_cp70

0xc907,	// (0x00019ec4) popup_eswt_tasktip_window_t1_ParamLimits

0x8c7f,	// (0x0001623c) aid_touch_tab_arrow_left

0x8c8e,	// (0x0001624b) aid_touch_tab_arrow_right

0x7b9a,	// (0x00015157) title_pane_g3_ParamLimits

0x7b9a,	// (0x00015157) title_pane_g3

0x3b3d,	// (0x000110fa) set_value_pane_g1

0x6459,	// (0x00013a16) popup_toolbar_trans_pane_ParamLimits

0xca48,	// (0x0001a005) aid_size_cell_tb_trans_pane_ParamLimits

0x3ba6,	// (0x00011163) bg_tb_trans_pane_ParamLimits

0xca5a,	// (0x0001a017) grid_tb_trans_pane_ParamLimits

0x38c8,	// (0x00010e85) cont_note_pane_ParamLimits

0x38c8,	// (0x00010e85) cont_note_pane

0x3a48,	// (0x00011005) cont_snote2_single_text_pane_ParamLimits

0x3a48,	// (0x00011005) cont_snote2_single_text_pane

0x3a48,	// (0x00011005) cont_snote2_single_graphic_pane_ParamLimits

0x3a48,	// (0x00011005) cont_snote2_single_graphic_pane

0x98be,	// (0x00016e7b) cont_note_wait_pane_ParamLimits

0x98be,	// (0x00016e7b) cont_note_wait_pane

0x98be,	// (0x00016e7b) cont_note_image_pane_ParamLimits

0x98be,	// (0x00016e7b) cont_note_image_pane

0xcb2e,	// (0x0001a0eb) popup_note2_window_g1_ParamLimits

0xcb2e,	// (0x0001a0eb) popup_note2_window_g1

0xcb5f,	// (0x0001a11c) popup_note2_window_t1_ParamLimits

0xcb5f,	// (0x0001a11c) popup_note2_window_t1

0xcba4,	// (0x0001a161) popup_note2_window_t2_ParamLimits

0xcba4,	// (0x0001a161) popup_note2_window_t2

0xcbe9,	// (0x0001a1a6) popup_note2_window_t3_ParamLimits

0xcbe9,	// (0x0001a1a6) popup_note2_window_t3

0xcc2e,	// (0x0001a1eb) popup_note2_window_t4_ParamLimits

0xcc2e,	// (0x0001a1eb) popup_note2_window_t4

0x394c,	// (0x00010f09) popup_note2_window_t5_ParamLimits

0x394c,	// (0x00010f09) popup_note2_window_t5

0x0004,

0xfc57,	// (0x0001d214) popup_note2_window_t_ParamLimits

0xfc57,	// (0x0001d214) popup_note2_window_t

0xcc5d,	// (0x0001a21a) popup_note2_image_window_g1_ParamLimits

0xcc5d,	// (0x0001a21a) popup_note2_image_window_g1

0xcc69,	// (0x0001a226) popup_note2_image_window_g2_ParamLimits

0xcc69,	// (0x0001a226) popup_note2_image_window_g2

0x0001,

0xfc62,	// (0x0001d21f) popup_note2_image_window_g_ParamLimits

0xfc62,	// (0x0001d21f) popup_note2_image_window_g

0xcc7b,	// (0x0001a238) popup_note2_image_window_t1_ParamLimits

0xcc7b,	// (0x0001a238) popup_note2_image_window_t1

0xcc93,	// (0x0001a250) popup_note2_image_window_t2_ParamLimits

0xcc93,	// (0x0001a250) popup_note2_image_window_t2

0xccab,	// (0x0001a268) popup_note2_image_window_t3_ParamLimits

0xccab,	// (0x0001a268) popup_note2_image_window_t3

0x0002,

0xfc67,	// (0x0001d224) popup_note2_image_window_t_ParamLimits

0xfc67,	// (0x0001d224) popup_note2_image_window_t

0x98cc,	// (0x00016e89) popup_note2_wait_window_g1_ParamLimits

0x98cc,	// (0x00016e89) popup_note2_wait_window_g1

0x98d8,	// (0x00016e95) popup_note2_wait_window_g2_ParamLimits

0x98d8,	// (0x00016e95) popup_note2_wait_window_g2

0x98e4,	// (0x00016ea1) popup_note2_wait_window_g3_ParamLimits

0x98e4,	// (0x00016ea1) popup_note2_wait_window_g3

0x0002,

0xf814,	// (0x0001cdd1) popup_note2_wait_window_g_ParamLimits

0xf814,	// (0x0001cdd1) popup_note2_wait_window_g

0xccc7,	// (0x0001a284) popup_note2_wait_window_t1_ParamLimits

0xccc7,	// (0x0001a284) popup_note2_wait_window_t1

0xcce5,	// (0x0001a2a2) popup_note2_wait_window_t2_ParamLimits

0xcce5,	// (0x0001a2a2) popup_note2_wait_window_t2

0xcd03,	// (0x0001a2c0) popup_note2_wait_window_t3_ParamLimits

0xcd03,	// (0x0001a2c0) popup_note2_wait_window_t3

0xcd15,	// (0x0001a2d2) popup_note2_wait_window_t4_ParamLimits

0xcd15,	// (0x0001a2d2) popup_note2_wait_window_t4

0x0003,

0xfc6e,	// (0x0001d22b) popup_note2_wait_window_t_ParamLimits

0xfc6e,	// (0x0001d22b) popup_note2_wait_window_t

0xcd27,	// (0x0001a2e4) wait_bar2_pane_ParamLimits

0xcd27,	// (0x0001a2e4) wait_bar2_pane

0xcd3f,	// (0x0001a2fc) popup_snote2_single_text_window_g1_ParamLimits

0xcd3f,	// (0x0001a2fc) popup_snote2_single_text_window_g1

0xcd67,	// (0x0001a324) popup_snote2_single_text_window_t1_ParamLimits

0xcd67,	// (0x0001a324) popup_snote2_single_text_window_t1

0xcdb3,	// (0x0001a370) popup_snote2_single_text_window_t2_ParamLimits

0xcdb3,	// (0x0001a370) popup_snote2_single_text_window_t2

0xcdff,	// (0x0001a3bc) popup_snote2_single_text_window_t3_ParamLimits

0xcdff,	// (0x0001a3bc) popup_snote2_single_text_window_t3

0xce40,	// (0x0001a3fd) popup_snote2_single_text_window_t4_ParamLimits

0xce40,	// (0x0001a3fd) popup_snote2_single_text_window_t4

0xce76,	// (0x0001a433) popup_snote2_single_text_window_t5_ParamLimits

0xce76,	// (0x0001a433) popup_snote2_single_text_window_t5

0x0004,

0xfc77,	// (0x0001d234) popup_snote2_single_text_window_t_ParamLimits

0xfc77,	// (0x0001d234) popup_snote2_single_text_window_t

0xcea1,	// (0x0001a45e) popup_snote2_single_graphic_window_g1_ParamLimits

0xcea1,	// (0x0001a45e) popup_snote2_single_graphic_window_g1

0xcec9,	// (0x0001a486) popup_snote2_single_graphic_window_g2_ParamLimits

0xcec9,	// (0x0001a486) popup_snote2_single_graphic_window_g2

0x0001,

0xfc82,	// (0x0001d23f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc82,	// (0x0001d23f) popup_snote2_single_graphic_window_g

0xcef1,	// (0x0001a4ae) popup_snote2_single_graphic_window_t1_ParamLimits

0xcef1,	// (0x0001a4ae) popup_snote2_single_graphic_window_t1

0xcf3d,	// (0x0001a4fa) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf3d,	// (0x0001a4fa) popup_snote2_single_graphic_window_t2

0xcdff,	// (0x0001a3bc) popup_snote2_single_graphic_window_t3_ParamLimits

0xcdff,	// (0x0001a3bc) popup_snote2_single_graphic_window_t3

0xce40,	// (0x0001a3fd) popup_snote2_single_graphic_window_t4_ParamLimits

0xce40,	// (0x0001a3fd) popup_snote2_single_graphic_window_t4

0xce76,	// (0x0001a433) popup_snote2_single_graphic_window_t5_ParamLimits

0xce76,	// (0x0001a433) popup_snote2_single_graphic_window_t5

0x0004,

0xfc87,	// (0x0001d244) popup_snote2_single_graphic_window_t_ParamLimits

0xfc87,	// (0x0001d244) popup_snote2_single_graphic_window_t

0xb714,	// (0x00018cd1) clock_nsta_pane_cp2_t1

0xb714,	// (0x00018cd1) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x0001d05f) clock_nsta_pane_cp2_t

0x3bc5,	// (0x00011182) form_field_data_wide_pane_g1_ParamLimits

0x3bd1,	// (0x0001118e) form_field_data_wide_pane_g2_ParamLimits

0x3bd1,	// (0x0001118e) form_field_data_wide_pane_g2

0x3bdd,	// (0x0001119a) form_field_data_wide_pane_g3_ParamLimits

0x3bdd,	// (0x0001119a) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x0001cc04) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x0001cc04) form_field_data_wide_pane_g

0xb5f0,	// (0x00018bad) grid_touch_3_pane_ParamLimits

0xb5f0,	// (0x00018bad) grid_touch_3_pane

0xcf89,	// (0x0001a546) cell_touch_3_pane_ParamLimits

0xcf89,	// (0x0001a546) cell_touch_3_pane

0xbcbd,	// (0x0001927a) cell_touch_3_pane_g1

0xbcbd,	// (0x0001927a) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x0001d0e4) cell_touch_3_pane_g

0x397e,	// (0x00010f3b) cont_query_data_pane

0x3986,	// (0x00010f43) cont_query_data_pane_cp1

0xcfb7,	// (0x0001a574) button_value_adjust_pane_cp7

0xcfbf,	// (0x0001a57c) query_popup_pane_cp3

0x42fe,	// (0x000118bb) bg_popup_sub_pane_cp22_ParamLimits

0x5b9e,	// (0x0001315b) navi_navi_volume_pane_cp2

0x5bb6,	// (0x00013173) popup_side_volume_key_window_g2

0x5bc2,	// (0x0001317f) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x0001cc9a) popup_side_volume_key_window_g

0x5bdc,	// (0x00013199) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x0001cca1) popup_side_volume_key_window_t

0x8a3e,	// (0x00015ffb) popup_side_volume_key_window_ParamLimits

0x8271,	// (0x0001582e) list_double_graphic_pane_g4_ParamLimits

0x8271,	// (0x0001582e) list_double_graphic_pane_g4

0xa88a,	// (0x00017e47) list_single_2heading_msg_pane_ParamLimits

0xa88a,	// (0x00017e47) list_single_2heading_msg_pane

0xcfee,	// (0x0001a5ab) list_single_2heading_msg_pane_g1_ParamLimits

0xcfee,	// (0x0001a5ab) list_single_2heading_msg_pane_g1

0x80da,	// (0x00015697) list_single_2heading_msg_pane_g2_ParamLimits

0x80da,	// (0x00015697) list_single_2heading_msg_pane_g2

0xcffa,	// (0x0001a5b7) list_single_2heading_msg_pane_g3_ParamLimits

0xcffa,	// (0x0001a5b7) list_single_2heading_msg_pane_g3

0xd006,	// (0x0001a5c3) list_single_2heading_msg_pane_g4_ParamLimits

0xd006,	// (0x0001a5c3) list_single_2heading_msg_pane_g4

0x0003,

0xfc92,	// (0x0001d24f) list_single_2heading_msg_pane_g_ParamLimits

0xfc92,	// (0x0001d24f) list_single_2heading_msg_pane_g

0xd01e,	// (0x0001a5db) list_single_2heading_msg_pane_t1_ParamLimits

0xd01e,	// (0x0001a5db) list_single_2heading_msg_pane_t1

0xd046,	// (0x0001a603) list_single_2heading_msg_pane_t2_ParamLimits

0xd046,	// (0x0001a603) list_single_2heading_msg_pane_t2

0xd075,	// (0x0001a632) list_single_2heading_msg_pane_t3_ParamLimits

0xd075,	// (0x0001a632) list_single_2heading_msg_pane_t3

0xd0ae,	// (0x0001a66b) list_single_2heading_msg_pane_t4_ParamLimits

0xd0ae,	// (0x0001a66b) list_single_2heading_msg_pane_t4

0x0003,

0xfc9b,	// (0x0001d258) list_single_2heading_msg_pane_t_ParamLimits

0xfc9b,	// (0x0001d258) list_single_2heading_msg_pane_t

0x3732,	// (0x00010cef) title_pane_g4_ParamLimits

0x3732,	// (0x00010cef) title_pane_g4

0x59ad,	// (0x00012f6a) title_pane_stacon_g3_ParamLimits

0x59ad,	// (0x00012f6a) title_pane_stacon_g3

0xcac5,	// (0x0001a082) list_single_2graphic_im_pane_g4_ParamLimits

0xcac5,	// (0x0001a082) list_single_2graphic_im_pane_g4

0xa305,	// (0x000178c2) popup_side_volume_key_window_cp

0xac12,	// (0x000181cf) main_idle_act2_pane_t1

0x65b5,	// (0x00013b72) toolbar_button_pane_g10

0x80c4,	// (0x00015681) popup_toolbar_window_cp1

0xb705,	// (0x00018cc2) clock_nsta_pane_cp_t1

0xb705,	// (0x00018cc2) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x0001d05a) clock_nsta_pane_cp_t

0x5b9e,	// (0x0001315b) navi_navi_volume_pane_cp2_ParamLimits

0x5baa,	// (0x00013167) popup_side_volume_key_window_g1_ParamLimits

0x5bb6,	// (0x00013173) popup_side_volume_key_window_g2_ParamLimits

0x5bc2,	// (0x0001317f) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x0001cc9a) popup_side_volume_key_window_g_ParamLimits

0x6a6b,	// (0x00014028) fep_hwr_aid_pane

0x6b12,	// (0x000140cf) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd19,	// (0x000192d6) fep_hwr_top_pane_g1_ParamLimits

0xbd2b,	// (0x000192e8) fep_hwr_top_pane_g2_ParamLimits

0x6b32,	// (0x000140ef) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x0001d0af) fep_hwr_top_pane_g_ParamLimits

0x6b47,	// (0x00014104) fep_hwr_top_text_pane_ParamLimits

0xa0c8,	// (0x00017685) aid_touch_tab_arrow_arrow_2

0xa0d1,	// (0x0001768e) aid_touch_tab_arrow_left_2

0x6a7f,	// (0x0001403c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6ab6,	// (0x00014073) fep_hwr_prediction_pane

0xbe84,	// (0x00019441) fep_vkb_prediction_pane

0xbf81,	// (0x0001953e) fep_vkb_side_pane_g3_ParamLimits

0xbf81,	// (0x0001953e) fep_vkb_side_pane_g3

0x6cc2,	// (0x0001427f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6d2e,	// (0x000142eb) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6d3b,	// (0x000142f8) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba1,	// (0x0001d15e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6e6a,	// (0x00014427) fep_hwr_prediction_pane_g1

0x6e74,	// (0x00014431) fep_hwr_prediction_pane_g2

0x6e7c,	// (0x00014439) fep_hwr_prediction_pane_g3

0x6e84,	// (0x00014441) fep_hwr_prediction_pane_g4

0x0003,

0xfca4,	// (0x0001d261) fep_hwr_prediction_pane_g

0xd0d3,	// (0x0001a690) fep_vkb_prediction_pane_g1

0xd0dd,	// (0x0001a69a) fep_vkb_prediction_pane_g2

0xd0e5,	// (0x0001a6a2) fep_vkb_prediction_pane_g3

0xd0ed,	// (0x0001a6aa) fep_vkb_prediction_pane_g4

0x0003,

0xfcad,	// (0x0001d26a) fep_vkb_prediction_pane_g

0x68a3,	// (0x00013e60) slider_set_pane_g3

0x68b7,	// (0x00013e74) slider_set_pane_g4

0x68cf,	// (0x00013e8c) slider_set_pane_g5

0x68a3,	// (0x00013e60) slider_set_pane_g6

0x68e5,	// (0x00013ea2) slider_set_pane_g7

0xa766,	// (0x00017d23) slider_form_pane_g3

0xa76f,	// (0x00017d2c) slider_form_pane_g4

0xa777,	// (0x00017d34) slider_form_pane_g5

0xa766,	// (0x00017d23) slider_form_pane_g6

0xa77f,	// (0x00017d3c) slider_form_pane_g7

0xaef6,	// (0x000184b3) slider_set_pane_vc_g3

0xaeff,	// (0x000184bc) slider_set_pane_vc_g4

0xaf08,	// (0x000184c5) slider_set_pane_vc_g5

0xaef6,	// (0x000184b3) slider_set_pane_vc_g6

0xaf11,	// (0x000184ce) slider_set_pane_vc_g7

0xb3c3,	// (0x00018980) slider_form_pane_vc_g1

0xb3cc,	// (0x00018989) slider_form_pane_vc_g2

0xb3d5,	// (0x00018992) slider_form_pane_vc_g3

0xb3c3,	// (0x00018980) slider_form_pane_vc_g4

0xb3de,	// (0x0001899b) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x0001d02c) slider_form_pane_vc_g

0x5682,	// (0x00012c3f) main_idle_act3_pane

0xd0f5,	// (0x0001a6b2) ai3_links_pane

0xd0fe,	// (0x0001a6bb) popup_ai3_data_window_ParamLimits

0xd0fe,	// (0x0001a6bb) popup_ai3_data_window

0x36d4,	// (0x00010c91) grid_ai3_links_pane

0xd116,	// (0x0001a6d3) cell_ai3_links_pane_ParamLimits

0xd116,	// (0x0001a6d3) cell_ai3_links_pane

0xd12e,	// (0x0001a6eb) bg_popup_sub_pane_cp11

0xd13b,	// (0x0001a6f8) cell_ai3_links_pane_g1

0x36d4,	// (0x00010c91) bg_popup_sub_pane_cp12

0xd160,	// (0x0001a71d) heading_ai3_data_pane

0xd168,	// (0x0001a725) list_ai3_gene_pane

0xd174,	// (0x0001a731) popup_ai3_data_window_g1

0xd17c,	// (0x0001a739) heading_ai3_data_pane_g1

0xd184,	// (0x0001a741) heading_ai3_data_pane_t1

0xd192,	// (0x0001a74f) list_double_ai3_gene_pane_ParamLimits

0xd192,	// (0x0001a74f) list_double_ai3_gene_pane

0xd19f,	// (0x0001a75c) list_single_ai3_gene_pane_ParamLimits

0xd19f,	// (0x0001a75c) list_single_ai3_gene_pane

0xbc82,	// (0x0001923f) list_highlight_pane_cp7_ParamLimits

0xbc82,	// (0x0001923f) list_highlight_pane_cp7

0xd1ac,	// (0x0001a769) list_single_a13_gene_pane_t1_ParamLimits

0xd1ac,	// (0x0001a769) list_single_a13_gene_pane_t1

0xd1c3,	// (0x0001a780) list_single_ai3_gene_pane_g1

0xd1cc,	// (0x0001a789) list_single_ai3_gene_pane_g2

0x0001,

0xfcb6,	// (0x0001d273) list_single_ai3_gene_pane_g

0xd1d4,	// (0x0001a791) list_double_ai3_gene_pane_g1_ParamLimits

0xd1d4,	// (0x0001a791) list_double_ai3_gene_pane_g1

0xd1e0,	// (0x0001a79d) list_double_ai3_gene_pane_t1_ParamLimits

0xd1e0,	// (0x0001a79d) list_double_ai3_gene_pane_t1

0xd1fc,	// (0x0001a7b9) list_double_ai3_gene_pane_t2_ParamLimits

0xd1fc,	// (0x0001a7b9) list_double_ai3_gene_pane_t2

0xd211,	// (0x0001a7ce) list_double_ai3_gene_pane_t3_ParamLimits

0xd211,	// (0x0001a7ce) list_double_ai3_gene_pane_t3

0x0002,

0xfcbb,	// (0x0001d278) list_double_ai3_gene_pane_t_ParamLimits

0xfcbb,	// (0x0001d278) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcfd0,	// (0x0001a58d) aid_size_min_col_2

0xcfda,	// (0x0001a597) aid_size_min_msg_ParamLimits

0xcfda,	// (0x0001a597) aid_size_min_msg

0xc081,	// (0x0001963e) fep_vkb_top_text_pane_g2_ParamLimits

0xc081,	// (0x0001963e) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x0001d0df) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x0001d0df) fep_vkb_top_text_pane_g

0x5682,	// (0x00012c3f) main_hc_apps_shell_pane

0xd22e,	// (0x0001a7eb) grid_hc_apps_pane_ParamLimits

0xd22e,	// (0x0001a7eb) grid_hc_apps_pane

0xd240,	// (0x0001a7fd) list_hc_apps_pane

0xd248,	// (0x0001a805) scroll_pane_cp37_ParamLimits

0xd248,	// (0x0001a805) scroll_pane_cp37

0xd254,	// (0x0001a811) cell_hc_apps_pane_ParamLimits

0xd254,	// (0x0001a811) cell_hc_apps_pane

0xd302,	// (0x0001a8bf) cell_hc_apps_pane_g1_ParamLimits

0xd302,	// (0x0001a8bf) cell_hc_apps_pane_g1

0xd332,	// (0x0001a8ef) cell_hc_apps_pane_g2_ParamLimits

0xd332,	// (0x0001a8ef) cell_hc_apps_pane_g2

0xd34e,	// (0x0001a90b) cell_hc_apps_pane_g3_ParamLimits

0xd34e,	// (0x0001a90b) cell_hc_apps_pane_g3

0x0002,

0xfcc2,	// (0x0001d27f) cell_hc_apps_pane_g_ParamLimits

0xfcc2,	// (0x0001d27f) cell_hc_apps_pane_g

0xd370,	// (0x0001a92d) cell_hc_apps_pane_t1_ParamLimits

0xd370,	// (0x0001a92d) cell_hc_apps_pane_t1

0x38c8,	// (0x00010e85) grid_highlight_pane_cp10_ParamLimits

0x38c8,	// (0x00010e85) grid_highlight_pane_cp10

0xd3b0,	// (0x0001a96d) list_single_hc_apps_pane_ParamLimits

0xd3b0,	// (0x0001a96d) list_single_hc_apps_pane

0xd413,	// (0x0001a9d0) list_single_hc_apps_pane_g1

0xd42c,	// (0x0001a9e9) list_single_hc_apps_pane_g2

0x0001,

0xfcc9,	// (0x0001d286) list_single_hc_apps_pane_g

0xd445,	// (0x0001aa02) list_single_hc_apps_pane_g2_copy1

0xd461,	// (0x0001aa1e) list_single_hc_apps_pane_t1

0x3784,	// (0x00010d41) bg_set_opt_pane_cp_ParamLimits

0x58d5,	// (0x00012e92) setting_slider_pane_t1_ParamLimits

0x58ee,	// (0x00012eab) setting_slider_pane_t2_ParamLimits

0x5908,	// (0x00012ec5) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001caf6) setting_slider_pane_t_ParamLimits

0x5920,	// (0x00012edd) slider_set_pane_ParamLimits

0x5e3e,	// (0x000133fb) control_pane_g5_ParamLimits

0x5e3e,	// (0x000133fb) control_pane_g5

0xa5b9,	// (0x00017b76) slider_set_pane_g1_ParamLimits

0x6897,	// (0x00013e54) slider_set_pane_g2_ParamLimits

0x68a3,	// (0x00013e60) slider_set_pane_g3_ParamLimits

0x68b7,	// (0x00013e74) slider_set_pane_g4_ParamLimits

0x68cf,	// (0x00013e8c) slider_set_pane_g5_ParamLimits

0x68a3,	// (0x00013e60) slider_set_pane_g6_ParamLimits

0x68e5,	// (0x00013ea2) slider_set_pane_g7_ParamLimits

0xf930,	// (0x0001ceed) slider_set_pane_g_ParamLimits

0x470f,	// (0x00011ccc) navi_icon_text_pane_ParamLimits

0x8c40,	// (0x000161fd) aid_fill_nsta_2_ParamLimits

0x8c7f,	// (0x0001623c) aid_touch_tab_arrow_left_ParamLimits

0x8c8e,	// (0x0001624b) aid_touch_tab_arrow_right_ParamLimits

0x8cfb,	// (0x000162b8) clock_nsta_pane_ParamLimits

0xa0aa,	// (0x00017667) navi_icon_pane_g1_ParamLimits

0xa0b6,	// (0x00017673) navi_text_pane_t1_ParamLimits

0xb815,	// (0x00018dd2) navi_icon_text_pane_g1_ParamLimits

0xb821,	// (0x00018dde) navi_icon_text_pane_t1_ParamLimits

0xd413,	// (0x0001a9d0) list_single_hc_apps_pane_g1_ParamLimits

0xd42c,	// (0x0001a9e9) list_single_hc_apps_pane_g2_ParamLimits

0xfcc9,	// (0x0001d286) list_single_hc_apps_pane_g_ParamLimits

0xd445,	// (0x0001aa02) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd461,	// (0x0001aa1e) list_single_hc_apps_pane_t1_ParamLimits

0x57df,	// (0x00012d9c) popup_toolbar2_fixed_window_ParamLimits

0x57df,	// (0x00012d9c) popup_toolbar2_fixed_window

0x644f,	// (0x00013a0c) popup_toolbar2_float_window

0x36d4,	// (0x00010c91) bg_popup_sub_pane_cp27

0xd48f,	// (0x0001aa4c) grid_toolbar2_float_pane

0x36d4,	// (0x00010c91) bg_popup_sub_pane_cp26

0xd48f,	// (0x0001aa4c) grid_toolbar2_fixed_pane

0xd497,	// (0x0001aa54) cell_toolbar2_fixed_pane_ParamLimits

0xd497,	// (0x0001aa54) cell_toolbar2_fixed_pane

0xd4a7,	// (0x0001aa64) cell_toolbar2_fixed_pane_g1

0x6321,	// (0x000138de) toolbar2_fixed_button_pane

0x9143,	// (0x00016700) toolbar2_fixed_button_pane_g1

0x9153,	// (0x00016710) toolbar2_fixed_button_pane_g2

0x914b,	// (0x00016708) toolbar2_fixed_button_pane_g3

0x9163,	// (0x00016720) toolbar2_fixed_button_pane_g4

0x915b,	// (0x00016718) toolbar2_fixed_button_pane_g5

0x916b,	// (0x00016728) toolbar2_fixed_button_pane_g6

0x9173,	// (0x00016730) toolbar2_fixed_button_pane_g7

0x9183,	// (0x00016740) toolbar2_fixed_button_pane_g8

0x917b,	// (0x00016738) toolbar2_fixed_button_pane_g9

0x0008,

0xf832,	// (0x0001cdef) toolbar2_fixed_button_pane_g

0xd4b0,	// (0x0001aa6d) cell_toolbar2_float_pane_ParamLimits

0xd4b0,	// (0x0001aa6d) cell_toolbar2_float_pane

0xd4c1,	// (0x0001aa7e) cell_toolbar2_float_pane_g1

0x6321,	// (0x000138de) toolbar2_fixed_button_pane_cp

0xbdeb,	// (0x000193a8) fep_vkb_accented_list_pane_ParamLimits

0xbdeb,	// (0x000193a8) fep_vkb_accented_list_pane

0x6ca2,	// (0x0001425f) bg_popup_fep_shadow_pane_g9

0x486a,	// (0x00011e27) bg_popup_fep_shadow_pane_cp3

0x3d2d,	// (0x000112ea) list_accented_list_pane

0xd4ca,	// (0x0001aa87) list_single_accented_list_pane_ParamLimits

0xd4ca,	// (0x0001aa87) list_single_accented_list_pane

0x486a,	// (0x00011e27) list_highlight_pane_cp10

0xd4db,	// (0x0001aa98) list_single_accented_list_pane_t1

0x639f,	// (0x0001395c) popup_slider_window_ParamLimits

0x639f,	// (0x0001395c) popup_slider_window

0xcfc7,	// (0x0001a584) aid_indentation_list_msg

0xd599,	// (0x0001ab56) bg_popup_window_pane_cp19

0xd601,	// (0x0001abbe) popup_slider_window_g1

0xd61d,	// (0x0001abda) popup_slider_window_g2

0xd639,	// (0x0001abf6) popup_slider_window_g3

0x0005,

0xfcce,	// (0x0001d28b) popup_slider_window_g

0xd69f,	// (0x0001ac5c) popup_slider_window_t1

0xd713,	// (0x0001acd0) small_volume_slider_vertical_pane

0xbcbd,	// (0x0001927a) small_volume_slider_vertical_pane_g1

0xbcbd,	// (0x0001927a) small_volume_slider_vertical_pane_g2

0xd72f,	// (0x0001acec) small_volume_slider_vertical_pane_g3

0x0002,

0xfce0,	// (0x0001d29d) small_volume_slider_vertical_pane_g

0x55a5,	// (0x00012b62) area_side_right_pane_ParamLimits

0x55a5,	// (0x00012b62) area_side_right_pane

0x6e8c,	// (0x00014449) aid_size_side_button_ParamLimits

0x6e8c,	// (0x00014449) aid_size_side_button

0x6ea0,	// (0x0001445d) grid_sctrl_middle_pane_ParamLimits

0x6ea0,	// (0x0001445d) grid_sctrl_middle_pane

0x6ebf,	// (0x0001447c) sctrl_sk_bottom_pane

0x6ed0,	// (0x0001448d) sctrl_sk_top_pane

0x6ee2,	// (0x0001449f) aid_touch_sctrl_top

0x6eef,	// (0x000144ac) bg_sctrl_sk_pane_ParamLimits

0x6eef,	// (0x000144ac) bg_sctrl_sk_pane

0x6efd,	// (0x000144ba) sctrl_sk_top_pane_g1

0x6f0a,	// (0x000144c7) sctrl_sk_top_pane_t1

0x6ee2,	// (0x0001449f) aid_touch_sctrl_bottom

0x6eef,	// (0x000144ac) bg_sctrl_sk_pane_cp_ParamLimits

0x6eef,	// (0x000144ac) bg_sctrl_sk_pane_cp

0x6f25,	// (0x000144e2) sctrl_sk_bottom_pane_g1

0x6f0a,	// (0x000144c7) sctrl_sk_bottom_pane_t1

0x6f2e,	// (0x000144eb) cell_sctrl_middle_pane_ParamLimits

0x6f2e,	// (0x000144eb) cell_sctrl_middle_pane

0x6f49,	// (0x00014506) aid_touch_sctrl_middle_ParamLimits

0x6f49,	// (0x00014506) aid_touch_sctrl_middle

0x6f5b,	// (0x00014518) bg_sctrl_middle_pane_ParamLimits

0x6f5b,	// (0x00014518) bg_sctrl_middle_pane

0x6cc2,	// (0x0001427f) cell_sctrl_middle_pane_g1_ParamLimits

0x6cc2,	// (0x0001427f) cell_sctrl_middle_pane_g1

0x6f69,	// (0x00014526) cell_sctrl_middle_pane_g2_ParamLimits

0x6f69,	// (0x00014526) cell_sctrl_middle_pane_g2

0x0001,

0xfcec,	// (0x0001d2a9) cell_sctrl_middle_pane_g_ParamLimits

0xfcec,	// (0x0001d2a9) cell_sctrl_middle_pane_g

0x9143,	// (0x00016700) bg_sctrl_middle_pane_g1

0x914b,	// (0x00016708) bg_sctrl_middle_pane_g2

0x9153,	// (0x00016710) bg_sctrl_middle_pane_g3

0x915b,	// (0x00016718) bg_sctrl_middle_pane_g4

0x9163,	// (0x00016720) bg_sctrl_middle_pane_g5

0x916b,	// (0x00016728) bg_sctrl_middle_pane_g6

0x9173,	// (0x00016730) bg_sctrl_middle_pane_g7

0x917b,	// (0x00016738) bg_sctrl_middle_pane_g8

0x0007,

0xfcf1,	// (0x0001d2ae) bg_sctrl_middle_pane_g

0x9183,	// (0x00016740) bg_sctrl_middle_pane_g8_copy1

0x9143,	// (0x00016700) bg_sctrl_sk_pane_g1

0x9153,	// (0x00016710) bg_sctrl_sk_pane_g2

0x914b,	// (0x00016708) bg_sctrl_sk_pane_g3

0x0008,

0xf832,	// (0x0001cdef) bg_sctrl_sk_pane_g

0x3a96,	// (0x00011053) aid_size_touch_scroll_bar

0x9163,	// (0x00016720) bg_sctrl_sk_pane_g4

0x915b,	// (0x00016718) bg_sctrl_sk_pane_g5

0x916b,	// (0x00016728) bg_sctrl_sk_pane_g6

0x9173,	// (0x00016730) bg_sctrl_sk_pane_g7

0x9183,	// (0x00016740) bg_sctrl_sk_pane_g8

0x917b,	// (0x00016738) bg_sctrl_sk_pane_g9

0x6008,	// (0x000135c5) popup_fep_china_hwr2_fs_candidate_window

0x6012,	// (0x000135cf) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6012,	// (0x000135cf) popup_fep_china_hwr2_fs_control_window

0x6cc2,	// (0x0001427f) sctrl_sk_top_pane_g2

0x0001,

0xfce7,	// (0x0001d2a4) sctrl_sk_top_pane_g

0xd738,	// (0x0001acf5) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd738,	// (0x0001acf5) aid_fep_china_hwr2_fs_cell

0xd74a,	// (0x0001ad07) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd74a,	// (0x0001ad07) bg_popup_fep_shadow_pane_cp4

0xd761,	// (0x0001ad1e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd761,	// (0x0001ad1e) bg_popup_fep_shadow_pane_cp5

0xd773,	// (0x0001ad30) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd773,	// (0x0001ad30) popup_fep_china_hwr2_fs_control_bar_grid

0xd783,	// (0x0001ad40) popup_fep_china_hwr2_fs_control_funtion_grid

0xd78b,	// (0x0001ad48) aid_fep_china_hwr2_fs_candi_cell

0x36d4,	// (0x00010c91) bg_popup_fep_shadow_pane_cp6

0xd795,	// (0x0001ad52) popup_fep_china_hwr2_fs_candidate_grid

0xd79f,	// (0x0001ad5c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd79f,	// (0x0001ad5c) cell_fep_china_hwr2_fs_funtion_grid

0xbcbd,	// (0x0001927a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7b7,	// (0x0001ad74) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7b7,	// (0x0001ad74) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7c5,	// (0x0001ad82) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7c5,	// (0x0001ad82) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd02,	// (0x0001d2bf) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd02,	// (0x0001d2bf) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7db,	// (0x0001ad98) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7db,	// (0x0001ad98) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7f0,	// (0x0001adad) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7f0,	// (0x0001adad) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd07,	// (0x0001d2c4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd07,	// (0x0001d2c4) cell_fep_china_hwr2_fs_funtion_grid_t

0xd80c,	// (0x0001adc9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd814,	// (0x0001add1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd81c,	// (0x0001add9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0c,	// (0x0001d2c9) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd824,	// (0x0001ade1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd824,	// (0x0001ade1) cell_fep_china_hwr2_fs_candidate_grid

0xd83d,	// (0x0001adfa) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd845,	// (0x0001ae02) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbcbd,	// (0x0001927a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbcbd,	// (0x0001927a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x0001d0e4) cell_fep_china_hwr2_fs_candidate_grid_g

0xd84d,	// (0x0001ae0a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8d0e,	// (0x000162cb) clock_nsta_pane_cp_24_ParamLimits

0x8d0e,	// (0x000162cb) clock_nsta_pane_cp_24

0x8d8c,	// (0x00016349) indicator_nsta_pane_cp_24_ParamLimits

0x8d8c,	// (0x00016349) indicator_nsta_pane_cp_24

0x9f26,	// (0x000174e3) heading_pane_g1

0x0001,

0xf897,	// (0x0001ce54) heading_pane_g

0xaa5b,	// (0x00018018) grid_sct_catagory_button_pane

0xaa8b,	// (0x00018048) scroll_pane_cp5_ParamLimits

0xb863,	// (0x00018e20) button_value_adjust_pane_cp5_ParamLimits

0xb863,	// (0x00018e20) button_value_adjust_pane_cp5

0xb95d,	// (0x00018f1a) form2_midp_time_pane_ParamLimits

0xd85b,	// (0x0001ae18) cell_sct_catagory_button_pane_ParamLimits

0xd85b,	// (0x0001ae18) cell_sct_catagory_button_pane

0xbc82,	// (0x0001923f) bg_button_pane_cp01_ParamLimits

0xbc82,	// (0x0001923f) bg_button_pane_cp01

0xbcbd,	// (0x0001927a) cell_sct_catagory_button_pane_g1

0x63de,	// (0x0001399b) popup_tb_extension_window

0xd86d,	// (0x0001ae2a) aid_size_cell_ext_ParamLimits

0xd86d,	// (0x0001ae2a) aid_size_cell_ext

0x38c8,	// (0x00010e85) bg_tb_trans_pane_cp1_ParamLimits

0x38c8,	// (0x00010e85) bg_tb_trans_pane_cp1

0xd88d,	// (0x0001ae4a) grid_tb_ext_pane_ParamLimits

0xd88d,	// (0x0001ae4a) grid_tb_ext_pane

0xd8bd,	// (0x0001ae7a) cell_tb_ext_pane_ParamLimits

0xd8bd,	// (0x0001ae7a) cell_tb_ext_pane

0xd8d4,	// (0x0001ae91) cell_tb_ext_pane_g1_ParamLimits

0xd8d4,	// (0x0001ae91) cell_tb_ext_pane_g1

0xd8f1,	// (0x0001aeae) cell_tb_ext_pane_t1

0x38c8,	// (0x00010e85) list_highlight_pane_cp11_ParamLimits

0x38c8,	// (0x00010e85) list_highlight_pane_cp11

0x57fe,	// (0x00012dbb) popup_uni_indicator_window_ParamLimits

0x57fe,	// (0x00012dbb) popup_uni_indicator_window

0x3ba6,	// (0x00011163) bg_popup_sub_pane_cp14

0xd90d,	// (0x0001aeca) list_uniindi_pane

0xd919,	// (0x0001aed6) uniindi_top_pane

0x38c8,	// (0x00010e85) bg_uniindi_top_pane

0xd938,	// (0x0001aef5) uniindi_top_pane_g1

0xd94e,	// (0x0001af0b) uniindi_top_pane_g2

0x0003,

0xfd13,	// (0x0001d2d0) uniindi_top_pane_g

0xd978,	// (0x0001af35) uniindi_top_pane_t1

0xd9a2,	// (0x0001af5f) list_single_uniindi_pane_ParamLimits

0xd9a2,	// (0x0001af5f) list_single_uniindi_pane

0xbcbd,	// (0x0001927a) bg_uniindi_top_pane_g1

0xd9b5,	// (0x0001af72) list_single_uniindi_pane_g1

0xd9c8,	// (0x0001af85) list_single_uniindi_pane_t1

0x5682,	// (0x00012c3f) control_bg_pane

0xd9ed,	// (0x0001afaa) bg_sctrl_sk_pane_cp1

0xd9f6,	// (0x0001afb3) bg_sctrl_sk_pane_cp2

0xd9ff,	// (0x0001afbc) control_bg_pane_g1

0xda08,	// (0x0001afc5) control_bg_pane_g2

0x0001,

0xfd1c,	// (0x0001d2d9) control_bg_pane_g

0xb6a9,	// (0x00018c66) cell_indicator_nsta_pane_g1_ParamLimits

0xb6b7,	// (0x00018c74) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x0001d048) cell_indicator_nsta_pane_g_ParamLimits

0xb9e5,	// (0x00018fa2) form2_midp_time_pane_t1_ParamLimits

0x5f72,	// (0x0001352f) main_idle_act4_pane_ParamLimits

0x5f72,	// (0x0001352f) main_idle_act4_pane

0x63de,	// (0x0001399b) popup_tb_extension_window_ParamLimits

0xd8ad,	// (0x0001ae6a) tb_ext_find_pane_ParamLimits

0xd8ad,	// (0x0001ae6a) tb_ext_find_pane

0xda11,	// (0x0001afce) ai_gene_pane_1_cp1

0x48eb,	// (0x00011ea8) ai_gene_pane_2_cp1

0xda19,	// (0x0001afd6) list_single_idle_plugin_calendar_pane

0xda22,	// (0x0001afdf) list_single_idle_plugin_notification_pane

0xda2b,	// (0x0001afe8) list_single_idle_plugin_player_pane

0xda34,	// (0x0001aff1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda34,	// (0x0001aff1) list_single_idle_plugin_shortcut_pane

0xda56,	// (0x0001b013) main_idle_act4_pane_t1

0xda68,	// (0x0001b025) main_idle_act4_pane_t2

0x0001,

0xfd21,	// (0x0001d2de) main_idle_act4_pane_t

0xda7a,	// (0x0001b037) middle_sk_idle_act4_pane_ParamLimits

0xda7a,	// (0x0001b037) middle_sk_idle_act4_pane

0xda90,	// (0x0001b04d) popup_clock_digital_analogue_window_cp2

0xdaaa,	// (0x0001b067) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaaa,	// (0x0001b067) shortcut_wheel_idle_act4_pane

0xbcbd,	// (0x0001927a) shortcut_wheel_idle_act4_pane_g1

0xbcbd,	// (0x0001927a) shortcut_wheel_idle_act4_pane_g2

0xbcbd,	// (0x0001927a) shortcut_wheel_idle_act4_pane_g3

0xbcbd,	// (0x0001927a) shortcut_wheel_idle_act4_pane_g4

0xbcbd,	// (0x0001927a) shortcut_wheel_idle_act4_pane_g5

0xdabe,	// (0x0001b07b) shortcut_wheel_idle_act4_pane_g6

0xdac6,	// (0x0001b083) shortcut_wheel_idle_act4_pane_g7

0xdace,	// (0x0001b08b) shortcut_wheel_idle_act4_pane_g8

0xdad6,	// (0x0001b093) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd26,	// (0x0001d2e3) shortcut_wheel_idle_act4_pane_g

0xbf2d,	// (0x000194ea) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf2d,	// (0x000194ea) middle_sk_idle_act4_pane_g1

0xdb3a,	// (0x0001b0f7) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb3a,	// (0x0001b0f7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd49,	// (0x0001d306) middle_sk_idle_act4_pane_g_ParamLimits

0xfd49,	// (0x0001d306) middle_sk_idle_act4_pane_g

0xdb46,	// (0x0001b103) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb46,	// (0x0001b103) middle_sk_idle_act4_pane_t1

0xdb63,	// (0x0001b120) grid_ai_shortcut_pane_ParamLimits

0xdb63,	// (0x0001b120) grid_ai_shortcut_pane

0xdb7c,	// (0x0001b139) list_highlight_pane_cp16_ParamLimits

0xdb7c,	// (0x0001b139) list_highlight_pane_cp16

0xdb89,	// (0x0001b146) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb89,	// (0x0001b146) list_single_idle_plugin_shortcut_pane_g1

0xdb95,	// (0x0001b152) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb95,	// (0x0001b152) list_single_idle_plugin_shortcut_pane_g2

0xdbad,	// (0x0001b16a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbad,	// (0x0001b16a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4e,	// (0x0001d30b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4e,	// (0x0001d30b) list_single_idle_plugin_shortcut_pane_g

0xdbc0,	// (0x0001b17d) cell_ai_shortcut_pane_ParamLimits

0xdbc0,	// (0x0001b17d) cell_ai_shortcut_pane

0xdbe4,	// (0x0001b1a1) cell_ai_shortcut_pane_g1_ParamLimits

0xdbe4,	// (0x0001b1a1) cell_ai_shortcut_pane_g1

0xda11,	// (0x0001afce) ai_gene_pane_1_cp2

0xdc06,	// (0x0001b1c3) ai_gene_pane_2_cp2

0xdc0e,	// (0x0001b1cb) list_highlight_pane_cp15

0xdc17,	// (0x0001b1d4) list_single_idle_plugin_calendar_pane_g1

0xdc0e,	// (0x0001b1cb) list_highlight_pane_cp17

0xdc1f,	// (0x0001b1dc) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc27,	// (0x0001b1e4) list_single_idle_plugin_player_pane_g1

0xacb4,	// (0x00018271) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd55,	// (0x0001d312) list_single_idle_plugin_player_pane_g

0xdc2f,	// (0x0001b1ec) list_single_idle_plugin_player_pane_t1

0xdc3d,	// (0x0001b1fa) list_single_idle_plugin_player_pane_t2

0xdc4b,	// (0x0001b208) list_single_idle_plugin_player_pane_t3

0xdc59,	// (0x0001b216) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5a,	// (0x0001d317) list_single_idle_plugin_player_pane_t

0xdc67,	// (0x0001b224) wait_bar_pane_cp15

0xdc6f,	// (0x0001b22c) grid_ai_notification_pane

0xacb4,	// (0x00018271) list_single_idle_plugin_notification_pane_g1

0xdc78,	// (0x0001b235) cell_ai_notification_pane_ParamLimits

0xdc78,	// (0x0001b235) cell_ai_notification_pane

0xdc85,	// (0x0001b242) cell_ai_notification_pane_g1

0xdc8d,	// (0x0001b24a) cell_ai_notification_pane_t1

0xdc9b,	// (0x0001b258) tb_ext_find_button_pane

0xdca3,	// (0x0001b260) tb_ext_find_pane_g1

0xdcab,	// (0x0001b268) tb_ext_find_pane_t1

0x4223,	// (0x000117e0) tb_ext_find_button_pane_g1

0xdcb9,	// (0x0001b276) tb_ext_find_button_pane_g2

0x0001,

0xfd63,	// (0x0001d320) tb_ext_find_button_pane_g

0xda56,	// (0x0001b013) main_idle_act4_pane_t1_ParamLimits

0xda68,	// (0x0001b025) main_idle_act4_pane_t2_ParamLimits

0xfd21,	// (0x0001d2de) main_idle_act4_pane_t_ParamLimits

0xda90,	// (0x0001b04d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda9e,	// (0x0001b05b) sat_plugin_idle_act4_pane_ParamLimits

0xda9e,	// (0x0001b05b) sat_plugin_idle_act4_pane

0xdcc2,	// (0x0001b27f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcc2,	// (0x0001b27f) sat_plugin_idle_act4_pane_t1

0xdcd5,	// (0x0001b292) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcd5,	// (0x0001b292) sat_plugin_idle_act4_pane_t2

0xdce8,	// (0x0001b2a5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdce8,	// (0x0001b2a5) sat_plugin_idle_act4_pane_t3

0xdcfb,	// (0x0001b2b8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdcfb,	// (0x0001b2b8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd68,	// (0x0001d325) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd68,	// (0x0001d325) sat_plugin_idle_act4_pane_t

0x5747,	// (0x00012d04) popup_battery_window_ParamLimits

0x5747,	// (0x00012d04) popup_battery_window

0x38c8,	// (0x00010e85) bg_popup_sub_pane_cp25_ParamLimits

0x38c8,	// (0x00010e85) bg_popup_sub_pane_cp25

0xdd0e,	// (0x0001b2cb) popup_battery_window_g1_ParamLimits

0xdd0e,	// (0x0001b2cb) popup_battery_window_g1

0xdd1a,	// (0x0001b2d7) popup_battery_window_t1_ParamLimits

0xdd1a,	// (0x0001b2d7) popup_battery_window_t1

0xdd2c,	// (0x0001b2e9) popup_battery_window_t2_ParamLimits

0xdd2c,	// (0x0001b2e9) popup_battery_window_t2

0x0001,

0xfd71,	// (0x0001d32e) popup_battery_window_t_ParamLimits

0xfd71,	// (0x0001d32e) popup_battery_window_t

0x8a92,	// (0x0001604f) midp_canvas_pane_ParamLimits

0x8b0b,	// (0x000160c8) midp_keypad_pane_ParamLimits

0x8b0b,	// (0x000160c8) midp_keypad_pane

0x4a49,	// (0x00012006) main_midp_pane_ParamLimits

0xb723,	// (0x00018ce0) signal_pane_g2_cp_ParamLimits

0xdd49,	// (0x0001b306) aid_size_cell_midp_keypad_ParamLimits

0xdd49,	// (0x0001b306) aid_size_cell_midp_keypad

0xdd63,	// (0x0001b320) midp_keyp_game_grid_pane_ParamLimits

0xdd63,	// (0x0001b320) midp_keyp_game_grid_pane

0xdd83,	// (0x0001b340) midp_keyp_rocker_pane_ParamLimits

0xdd83,	// (0x0001b340) midp_keyp_rocker_pane

0xddbc,	// (0x0001b379) midp_keyp_sk_left_pane_ParamLimits

0xddbc,	// (0x0001b379) midp_keyp_sk_left_pane

0xde16,	// (0x0001b3d3) midp_keyp_sk_right_pane_ParamLimits

0xde16,	// (0x0001b3d3) midp_keyp_sk_right_pane

0x36d4,	// (0x00010c91) bg_button_pane_cp03

0xde70,	// (0x0001b42d) midp_keyp_sk_left_pane_g1

0x36d4,	// (0x00010c91) bg_button_pane_cp04

0xde70,	// (0x0001b42d) midp_keyp_sk_right_pane_g1

0xbcbd,	// (0x0001927a) midp_keyp_rocker_pane_g1

0xde79,	// (0x0001b436) keyp_game_cell_pane_ParamLimits

0xde79,	// (0x0001b436) keyp_game_cell_pane

0x36d4,	// (0x00010c91) bg_button_pane_cp02

0xde8c,	// (0x0001b449) keyp_game_cell_pane_g1

0x577d,	// (0x00012d3a) popup_fep_vkb2_window_ParamLimits

0x577d,	// (0x00012d3a) popup_fep_vkb2_window

0x6f87,	// (0x00014544) aid_size_cell_vkb2_ParamLimits

0x6f87,	// (0x00014544) aid_size_cell_vkb2

0x6fd3,	// (0x00014590) popup_fep_vkb2_window_g1_ParamLimits

0x6fd3,	// (0x00014590) popup_fep_vkb2_window_g1

0x701b,	// (0x000145d8) vkb2_area_bottom_pane_ParamLimits

0x701b,	// (0x000145d8) vkb2_area_bottom_pane

0x7067,	// (0x00014624) vkb2_area_keypad_pane_ParamLimits

0x7067,	// (0x00014624) vkb2_area_keypad_pane

0x70a9,	// (0x00014666) vkb2_area_top_pane_ParamLimits

0x70a9,	// (0x00014666) vkb2_area_top_pane

0x7128,	// (0x000146e5) vkb2_top_entry_pane_ParamLimits

0x7128,	// (0x000146e5) vkb2_top_entry_pane

0x7152,	// (0x0001470f) vkb2_top_grid_left_pane_ParamLimits

0x7152,	// (0x0001470f) vkb2_top_grid_left_pane

0x7171,	// (0x0001472e) vkb2_top_grid_right_pane_ParamLimits

0x7171,	// (0x0001472e) vkb2_top_grid_right_pane

0x7190,	// (0x0001474d) vkb2_cell_keypad_pane_ParamLimits

0x7190,	// (0x0001474d) vkb2_cell_keypad_pane

0x7261,	// (0x0001481e) vkb2_area_bottom_grid_pane_ParamLimits

0x7261,	// (0x0001481e) vkb2_area_bottom_grid_pane

0x7287,	// (0x00014844) vkb2_area_bottom_pane_g1_ParamLimits

0x7287,	// (0x00014844) vkb2_area_bottom_pane_g1

0x72ab,	// (0x00014868) vkb2_area_bottom_pane_g2_ParamLimits

0x72ab,	// (0x00014868) vkb2_area_bottom_pane_g2

0x72d9,	// (0x00014896) vkb2_area_bottom_pane_g3_ParamLimits

0x72d9,	// (0x00014896) vkb2_area_bottom_pane_g3

0x0002,

0xfd76,	// (0x0001d333) vkb2_area_bottom_pane_g_ParamLimits

0xfd76,	// (0x0001d333) vkb2_area_bottom_pane_g

0x733a,	// (0x000148f7) vkb2_top_cell_left_pane_ParamLimits

0x733a,	// (0x000148f7) vkb2_top_cell_left_pane

0xde9d,	// (0x0001b45a) vkb2_top_entry_pane_g1_ParamLimits

0xde9d,	// (0x0001b45a) vkb2_top_entry_pane_g1

0xdeab,	// (0x0001b468) vkb2_top_entry_pane_t1_ParamLimits

0xdeab,	// (0x0001b468) vkb2_top_entry_pane_t1

0xdedd,	// (0x0001b49a) vkb2_top_entry_pane_t2_ParamLimits

0xdedd,	// (0x0001b49a) vkb2_top_entry_pane_t2

0xdf0f,	// (0x0001b4cc) vkb2_top_entry_pane_t3_ParamLimits

0xdf0f,	// (0x0001b4cc) vkb2_top_entry_pane_t3

0x0002,

0xfd7d,	// (0x0001d33a) vkb2_top_entry_pane_t_ParamLimits

0xfd7d,	// (0x0001d33a) vkb2_top_entry_pane_t

0x7387,	// (0x00014944) vkb2_top_grid_right_pane_g1_ParamLimits

0x7387,	// (0x00014944) vkb2_top_grid_right_pane_g1

0x739d,	// (0x0001495a) vkb2_top_grid_right_pane_g2_ParamLimits

0x739d,	// (0x0001495a) vkb2_top_grid_right_pane_g2

0x73b5,	// (0x00014972) vkb2_top_grid_right_pane_g3_ParamLimits

0x73b5,	// (0x00014972) vkb2_top_grid_right_pane_g3

0x73cd,	// (0x0001498a) vkb2_top_grid_right_pane_g4_ParamLimits

0x73cd,	// (0x0001498a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd84,	// (0x0001d341) vkb2_top_grid_right_pane_g_ParamLimits

0xfd84,	// (0x0001d341) vkb2_top_grid_right_pane_g

0x73e3,	// (0x000149a0) vkb2_top_cell_left_pane_g1

0x7405,	// (0x000149c2) vkb2_cell_keypad_pane_g1_ParamLimits

0x7405,	// (0x000149c2) vkb2_cell_keypad_pane_g1

0xdf33,	// (0x0001b4f0) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf33,	// (0x0001b4f0) vkb2_cell_keypad_pane_t1

0x7413,	// (0x000149d0) vkb2_cell_bottom_grid_pane_ParamLimits

0x7413,	// (0x000149d0) vkb2_cell_bottom_grid_pane

0x744c,	// (0x00014a09) vkb2_cell_bottom_grid_pane_g1

0xdade,	// (0x0001b09b) aid_call2_pane_cp02

0xdae6,	// (0x0001b0a3) aid_call_pane_cp02

0xdaee,	// (0x0001b0ab) clock_digital_number_pane_cp10

0xdaf6,	// (0x0001b0b3) clock_digital_number_pane_cp11

0xdafe,	// (0x0001b0bb) clock_digital_number_pane_cp12

0xdb06,	// (0x0001b0c3) clock_digital_number_pane_cp13

0xdb0e,	// (0x0001b0cb) clock_digital_separator_pane_cp10

0x4223,	// (0x000117e0) popup_clock_digital_analogue_window_cp2_g1

0x4223,	// (0x000117e0) popup_clock_digital_analogue_window_cp2_g2

0xdb16,	// (0x0001b0d3) popup_clock_digital_analogue_window_cp2_g3

0x4223,	// (0x000117e0) popup_clock_digital_analogue_window_cp2_g4

0xdb16,	// (0x0001b0d3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd39,	// (0x0001d2f6) popup_clock_digital_analogue_window_cp2_g

0xdb1e,	// (0x0001b0db) popup_clock_digital_analogue_window_cp2_t1

0xdb2c,	// (0x0001b0e9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd44,	// (0x0001d301) popup_clock_digital_analogue_window_cp2_t

0xbcbd,	// (0x0001927a) clock_digital_number_pane_cp10_g1

0xbcbd,	// (0x0001927a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x0001d0e4) clock_digital_number_pane_cp10_g

0xbcbd,	// (0x0001927a) clock_digital_separator_pane_cp10_g1

0xbcbd,	// (0x0001927a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x0001d0e4) clock_digital_separator_pane_cp10_g

0xd95a,	// (0x0001af17) uniindi_top_pane_g3

0xd96b,	// (0x0001af28) uniindi_top_pane_g4

0x721b,	// (0x000147d8) vkb2_row_keypad_pane_ParamLimits

0x721b,	// (0x000147d8) vkb2_row_keypad_pane

0x746c,	// (0x00014a29) vkb2_cell_t_keypad_pane_ParamLimits

0x746c,	// (0x00014a29) vkb2_cell_t_keypad_pane

0x747c,	// (0x00014a39) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x747c,	// (0x00014a39) vkb2_cell_t_keypad_pane_cp08

0x748f,	// (0x00014a4c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x748f,	// (0x00014a4c) vkb2_cell_t_keypad_pane_cp09

0x74a3,	// (0x00014a60) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x74a3,	// (0x00014a60) vkb2_cell_t_keypad_pane_cp01

0x74b4,	// (0x00014a71) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x74b4,	// (0x00014a71) vkb2_cell_t_keypad_pane_cp02

0x74c5,	// (0x00014a82) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74c5,	// (0x00014a82) vkb2_cell_t_keypad_pane_cp03

0x74d6,	// (0x00014a93) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74d6,	// (0x00014a93) vkb2_cell_t_keypad_pane_cp04

0x74e7,	// (0x00014aa4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74e7,	// (0x00014aa4) vkb2_cell_t_keypad_pane_cp05

0x74f8,	// (0x00014ab5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74f8,	// (0x00014ab5) vkb2_cell_t_keypad_pane_cp06

0x7509,	// (0x00014ac6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7509,	// (0x00014ac6) vkb2_cell_t_keypad_pane_cp07

0x751a,	// (0x00014ad7) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x751a,	// (0x00014ad7) vkb2_cell_t_keypad_pane_cp10

0x6cc2,	// (0x0001427f) vkb2_cell_t_keypad_pane_g1

0xdf4a,	// (0x0001b507) vkb2_cell_t_keypad_pane_t1

0x5682,	// (0x00012c3f) popup_grid_graphic2_window

0xdf5c,	// (0x0001b519) aid_size_cell_graphic2_ParamLimits

0xdf5c,	// (0x0001b519) aid_size_cell_graphic2

0xdf94,	// (0x0001b551) bg_popup_window_pane_cp21_ParamLimits

0xdf94,	// (0x0001b551) bg_popup_window_pane_cp21

0xdfa2,	// (0x0001b55f) graphic2_pages_pane_ParamLimits

0xdfa2,	// (0x0001b55f) graphic2_pages_pane

0xe009,	// (0x0001b5c6) grid_graphic2_control_pane_ParamLimits

0xe009,	// (0x0001b5c6) grid_graphic2_control_pane

0xe047,	// (0x0001b604) grid_graphic2_pane_ParamLimits

0xe047,	// (0x0001b604) grid_graphic2_pane

0xe0bb,	// (0x0001b678) cell_graphic2_pane

0x5682,	// (0x00012c3f) main_comp_mode_pane

0xd168,	// (0x0001a725) list_ai3_gene_pane_ParamLimits

0xd599,	// (0x0001ab56) bg_popup_window_pane_cp19_ParamLimits

0xd5a5,	// (0x0001ab62) bg_touch_area_indi_pane_ParamLimits

0xd5a5,	// (0x0001ab62) bg_touch_area_indi_pane

0xd5bb,	// (0x0001ab78) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5bb,	// (0x0001ab78) bg_touch_area_indi_pane_cp01

0xd5d1,	// (0x0001ab8e) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5d1,	// (0x0001ab8e) bg_touch_area_indi_pane_cp02

0xd5e7,	// (0x0001aba4) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5e7,	// (0x0001aba4) bg_touch_area_indi_pane_cp03

0xd601,	// (0x0001abbe) popup_slider_window_g1_ParamLimits

0xd61d,	// (0x0001abda) popup_slider_window_g2_ParamLimits

0xd639,	// (0x0001abf6) popup_slider_window_g3_ParamLimits

0xfcce,	// (0x0001d28b) popup_slider_window_g_ParamLimits

0xd69f,	// (0x0001ac5c) popup_slider_window_t1_ParamLimits

0xd713,	// (0x0001acd0) small_volume_slider_vertical_pane_ParamLimits

0xe0bb,	// (0x0001b678) cell_graphic2_pane_ParamLimits

0xe10a,	// (0x0001b6c7) bg_button_pane_cp10_ParamLimits

0xe10a,	// (0x0001b6c7) bg_button_pane_cp10

0xe11d,	// (0x0001b6da) bg_button_pane_cp11_ParamLimits

0xe11d,	// (0x0001b6da) bg_button_pane_cp11

0xe130,	// (0x0001b6ed) graphic2_pages_pane_g1_ParamLimits

0xe130,	// (0x0001b6ed) graphic2_pages_pane_g1

0xe14b,	// (0x0001b708) graphic2_pages_pane_g2_ParamLimits

0xe14b,	// (0x0001b708) graphic2_pages_pane_g2

0x0001,

0xfd92,	// (0x0001d34f) graphic2_pages_pane_g_ParamLimits

0xfd92,	// (0x0001d34f) graphic2_pages_pane_g

0xe163,	// (0x0001b720) graphic2_pages_pane_t1_ParamLimits

0xe163,	// (0x0001b720) graphic2_pages_pane_t1

0xe17b,	// (0x0001b738) cell_graphic2_control_pane_ParamLimits

0xe17b,	// (0x0001b738) cell_graphic2_control_pane

0xe199,	// (0x0001b756) cell_graphic2_pane_g1_ParamLimits

0xe199,	// (0x0001b756) cell_graphic2_pane_g1

0xe1a6,	// (0x0001b763) cell_graphic2_pane_g2_ParamLimits

0xe1a6,	// (0x0001b763) cell_graphic2_pane_g2

0xe1b3,	// (0x0001b770) cell_graphic2_pane_g3_ParamLimits

0xe1b3,	// (0x0001b770) cell_graphic2_pane_g3

0xe1c0,	// (0x0001b77d) cell_graphic2_pane_g4_ParamLimits

0xe1c0,	// (0x0001b77d) cell_graphic2_pane_g4

0xe1cd,	// (0x0001b78a) cell_graphic2_pane_g5_ParamLimits

0xe1cd,	// (0x0001b78a) cell_graphic2_pane_g5

0x0004,

0xfd97,	// (0x0001d354) cell_graphic2_pane_g_ParamLimits

0xfd97,	// (0x0001d354) cell_graphic2_pane_g

0xe1e6,	// (0x0001b7a3) cell_graphic2_pane_t1_ParamLimits

0xe1e6,	// (0x0001b7a3) cell_graphic2_pane_t1

0x9263,	// (0x00016820) grid_highlight_pane_cp11_ParamLimits

0x9263,	// (0x00016820) grid_highlight_pane_cp11

0x38c8,	// (0x00010e85) bg_button_pane_cp05

0xe21c,	// (0x0001b7d9) cell_graphic2_control_pane_g1

0xbcbd,	// (0x0001927a) bg_touch_area_indi_pane_g1

0xe244,	// (0x0001b801) aid_cmod_rocker_key_size

0xe24e,	// (0x0001b80b) aid_cmode_itu_key_size

0xe258,	// (0x0001b815) main_cmode_video_pane

0xe262,	// (0x0001b81f) main_comp_mode_itu_pane

0xe26e,	// (0x0001b82b) main_comp_mode_rocker_pane

0xe27a,	// (0x0001b837) cell_cmode_rocker_pane_ParamLimits

0xe27a,	// (0x0001b837) cell_cmode_rocker_pane

0xe28c,	// (0x0001b849) cell_cmode_itu_pane_ParamLimits

0xe28c,	// (0x0001b849) cell_cmode_itu_pane

0x3ba6,	// (0x00011163) bg_button_pane_cp06_ParamLimits

0x3ba6,	// (0x00011163) bg_button_pane_cp06

0xbf2d,	// (0x000194ea) cell_cmode_rocker_pane_g1_ParamLimits

0xbf2d,	// (0x000194ea) cell_cmode_rocker_pane_g1

0xd7b7,	// (0x0001ad74) cell_cmode_rocker_pane_g2_ParamLimits

0xd7b7,	// (0x0001ad74) cell_cmode_rocker_pane_g2

0x0001,

0xfda7,	// (0x0001d364) cell_cmode_rocker_pane_g_ParamLimits

0xfda7,	// (0x0001d364) cell_cmode_rocker_pane_g

0x36d4,	// (0x00010c91) bg_button_pane_cp07

0xe2a1,	// (0x0001b85e) cell_cmode_itu_pane_g1

0xe2aa,	// (0x0001b867) cell_cmode_itu_pane_t1

0xe2b8,	// (0x0001b875) cell_cmode_itu_pane_t2

0x0001,

0xfdac,	// (0x0001d369) cell_cmode_itu_pane_t

0xd9dd,	// (0x0001af9a) aid_touch_ctrl_left

0xd9e5,	// (0x0001afa2) aid_touch_ctrl_right

0x36d4,	// (0x00010c91) compa_mode_pane

0xe2c6,	// (0x0001b883) aid_cmod_rocker_key_size_cp

0xe2d0,	// (0x0001b88d) aid_cmode_itu_key_size_cp

0xe2da,	// (0x0001b897) compa_mode_pane_g1

0xe2e2,	// (0x0001b89f) compa_mode_pane_g2

0xe2ea,	// (0x0001b8a7) compa_mode_pane_g3

0x0002,

0xfdb1,	// (0x0001d36e) compa_mode_pane_g

0xe2f2,	// (0x0001b8af) main_comp_mode_itu_pane_cp

0xe2fa,	// (0x0001b8b7) main_comp_mode_rocker_pane_cp

0xe302,	// (0x0001b8bf) cell_cmode_itu_pane_cp_ParamLimits

0xe302,	// (0x0001b8bf) cell_cmode_itu_pane_cp

0xe317,	// (0x0001b8d4) cell_cmode_rocker_pane_cp_ParamLimits

0xe317,	// (0x0001b8d4) cell_cmode_rocker_pane_cp

0x3ba6,	// (0x00011163) bg_button_pane_cp06_cp_ParamLimits

0x3ba6,	// (0x00011163) bg_button_pane_cp06_cp

0xbf2d,	// (0x000194ea) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf2d,	// (0x000194ea) cell_cmode_rocker_pane_g1_cp

0xbcbd,	// (0x0001927a) cell_cmode_rocker_pane_g2_cp

0x36d4,	// (0x00010c91) bg_button_pane_cp07_cp

0xe329,	// (0x0001b8e6) cell_cmode_itu_pane_g1_cp

0xe332,	// (0x0001b8ef) cell_cmode_itu_pane_t1_cp

0xe332,	// (0x0001b8ef) cell_cmode_itu_pane_t2_cp

0xa753,	// (0x00017d10) settings_code_pane_cp2

0x3784,	// (0x00010d41) bg_popup_window_pane_cp3_ParamLimits

0x39e1,	// (0x00010f9e) heading_pane_cp3_ParamLimits

0x39f0,	// (0x00010fad) listscroll_popup_graphic_pane_ParamLimits

0x6a6b,	// (0x00014028) fep_hwr_aid_pane_ParamLimits

0x6ee2,	// (0x0001449f) aid_touch_sctrl_top_ParamLimits

0x6efd,	// (0x000144ba) sctrl_sk_top_pane_g1_ParamLimits

0x6cc2,	// (0x0001427f) sctrl_sk_top_pane_g2_ParamLimits

0xfce7,	// (0x0001d2a4) sctrl_sk_top_pane_g_ParamLimits

0x6f0a,	// (0x000144c7) sctrl_sk_top_pane_t1_ParamLimits

0x6ee2,	// (0x0001449f) aid_touch_sctrl_bottom_ParamLimits

0x6f0a,	// (0x000144c7) sctrl_sk_bottom_pane_t1_ParamLimits

0xd926,	// (0x0001aee3) aid_area_touch_clock

0x70ef,	// (0x000146ac) aid_vkb2_area_top_pane_cell_ParamLimits

0x70ef,	// (0x000146ac) aid_vkb2_area_top_pane_cell

0x723d,	// (0x000147fa) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x723d,	// (0x000147fa) aid_vkb2_area_bottom_pane_cell

0xde95,	// (0x0001b452) popup_char_count_window

0xe340,	// (0x0001b8fd) popup_char_count_window_g1

0xe349,	// (0x0001b906) popup_char_count_window_g2

0xe352,	// (0x0001b90f) popup_char_count_window_g3

0x0002,

0xfdb8,	// (0x0001d375) popup_char_count_window_g

0xe35b,	// (0x0001b918) popup_char_count_window_t1

0x6fb1,	// (0x0001456e) popup_fep_char_preview_window_ParamLimits

0x6fb1,	// (0x0001456e) popup_fep_char_preview_window

0x710d,	// (0x000146ca) vkb2_top_candi_pane_ParamLimits

0x710d,	// (0x000146ca) vkb2_top_candi_pane

0xe369,	// (0x0001b926) cell_vkb2_top_candi_pane_ParamLimits

0xe369,	// (0x0001b926) cell_vkb2_top_candi_pane

0x752f,	// (0x00014aec) bg_popup_fep_char_preview_window_ParamLimits

0x752f,	// (0x00014aec) bg_popup_fep_char_preview_window

0x753d,	// (0x00014afa) popup_fep_char_preview_window_t1_ParamLimits

0x753d,	// (0x00014afa) popup_fep_char_preview_window_t1

0xe3b3,	// (0x0001b970) bg_popup_fep_char_preview_window_g1

0xe3bb,	// (0x0001b978) bg_popup_fep_char_preview_window_g2

0xe3c3,	// (0x0001b980) bg_popup_fep_char_preview_window_g3

0xe3cb,	// (0x0001b988) bg_popup_fep_char_preview_window_g4

0xe3d3,	// (0x0001b990) bg_popup_fep_char_preview_window_g5

0xe3db,	// (0x0001b998) bg_popup_fep_char_preview_window_g6

0xe3e3,	// (0x0001b9a0) bg_popup_fep_char_preview_window_g7

0xe3eb,	// (0x0001b9a8) bg_popup_fep_char_preview_window_g8

0xe3f3,	// (0x0001b9b0) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbf,	// (0x0001d37c) bg_popup_fep_char_preview_window_g

0x6cc2,	// (0x0001427f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6cc2,	// (0x0001427f) cell_vkb2_top_candi_pane_g1

0x6cd0,	// (0x0001428d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6cd0,	// (0x0001428d) cell_vkb2_top_candi_pane_g2

0xdfd8,	// (0x0001b595) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdfd8,	// (0x0001b595) cell_vkb2_top_candi_pane_g3

0x757f,	// (0x00014b3c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x757f,	// (0x00014b3c) cell_vkb2_top_candi_pane_g4

0xc5c6,	// (0x00019b83) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc5c6,	// (0x00019b83) cell_vkb2_top_candi_pane_g5

0x75a0,	// (0x00014b5d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x75a0,	// (0x00014b5d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd4,	// (0x0001d391) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd4,	// (0x0001d391) cell_vkb2_top_candi_pane_g

0x75ae,	// (0x00014b6b) cell_vkb2_top_candi_pane_t1

0x6883,	// (0x00013e40) aid_size_touch_slider_mark_ParamLimits

0x6883,	// (0x00013e40) aid_size_touch_slider_mark

0xdff9,	// (0x0001b5b6) grid_graphic2_catg_pane_ParamLimits

0xdff9,	// (0x0001b5b6) grid_graphic2_catg_pane

0xe097,	// (0x0001b654) popup_grid_graphic2_window_t1_ParamLimits

0xe097,	// (0x0001b654) popup_grid_graphic2_window_t1

0xe0a9,	// (0x0001b666) popup_grid_graphic2_window_t2_ParamLimits

0xe0a9,	// (0x0001b666) popup_grid_graphic2_window_t2

0x0001,

0xfd8d,	// (0x0001d34a) popup_grid_graphic2_window_t_ParamLimits

0xfd8d,	// (0x0001d34a) popup_grid_graphic2_window_t

0x38c8,	// (0x00010e85) bg_button_pane_cp05_ParamLimits

0xe21c,	// (0x0001b7d9) cell_graphic2_control_pane_g1_ParamLimits

0xe3fb,	// (0x0001b9b8) cell_graphic2_catg_pane_ParamLimits

0xe3fb,	// (0x0001b9b8) cell_graphic2_catg_pane

0x36d4,	// (0x00010c91) bg_button_pane_cp12

0xe40d,	// (0x0001b9ca) cell_graphic2_catg_pane_g1

0xd8f1,	// (0x0001aeae) cell_tb_ext_pane_t1_ParamLimits

0x735a,	// (0x00014917) vkb2_top_cell_right_narrow_pane_ParamLimits

0x735a,	// (0x00014917) vkb2_top_cell_right_narrow_pane

0x7372,	// (0x0001492f) vkb2_top_cell_right_wide_pane_ParamLimits

0x7372,	// (0x0001492f) vkb2_top_cell_right_wide_pane

0x6a5d,	// (0x0001401a) bg_vkb2_func_pane_ParamLimits

0x6a5d,	// (0x0001401a) bg_vkb2_func_pane

0x73e3,	// (0x000149a0) vkb2_top_cell_left_pane_g1_ParamLimits

0x6a5d,	// (0x0001401a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6a5d,	// (0x0001401a) bg_vkb2_fuc_pane_cp03

0x744c,	// (0x00014a09) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x914b,	// (0x00016708) bg_vkb2_func_pane_g1

0x9153,	// (0x00016710) bg_vkb2_func_pane_g2

0x9163,	// (0x00016720) bg_vkb2_func_pane_g3

0x915b,	// (0x00016718) bg_vkb2_func_pane_g4

0x916b,	// (0x00016728) bg_vkb2_func_pane_g5

0x9173,	// (0x00016730) bg_vkb2_func_pane_g6

0x917b,	// (0x00016738) bg_vkb2_func_pane_g7

0x9183,	// (0x00016740) bg_vkb2_func_pane_g8

0x9143,	// (0x00016700) bg_vkb2_func_pane_g9

0x0008,

0xfde1,	// (0x0001d39e) bg_vkb2_func_pane_g

0x6a5d,	// (0x0001401a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6a5d,	// (0x0001401a) bg_vkb2_fuc_pane_cp01

0x73e3,	// (0x000149a0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73e3,	// (0x000149a0) vkb2_top_cell_right_wide_pane_g1

0x6a5d,	// (0x0001401a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6a5d,	// (0x0001401a) bg_vkb2_fuc_pane_cp02

0x75cd,	// (0x00014b8a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x75cd,	// (0x00014b8a) vkb2_top_cell_right_narrow_pane_g1

0xd513,	// (0x0001aad0) aid_touch_area_decrease_ParamLimits

0xd513,	// (0x0001aad0) aid_touch_area_decrease

0xd537,	// (0x0001aaf4) aid_touch_area_increase_ParamLimits

0xd537,	// (0x0001aaf4) aid_touch_area_increase

0xd54f,	// (0x0001ab0c) aid_touch_area_mute_ParamLimits

0xd54f,	// (0x0001ab0c) aid_touch_area_mute

0xd56b,	// (0x0001ab28) aid_touch_area_slider_ParamLimits

0xd56b,	// (0x0001ab28) aid_touch_area_slider

0xd655,	// (0x0001ac12) popup_slider_window_g4_ParamLimits

0xd655,	// (0x0001ac12) popup_slider_window_g4

0xd66d,	// (0x0001ac2a) popup_slider_window_g5_ParamLimits

0xd66d,	// (0x0001ac2a) popup_slider_window_g5

0xd68f,	// (0x0001ac4c) popup_slider_window_g6_ParamLimits

0xd68f,	// (0x0001ac4c) popup_slider_window_g6

0xd6cd,	// (0x0001ac8a) popup_slider_window_t2_ParamLimits

0xd6cd,	// (0x0001ac8a) popup_slider_window_t2

0x0001,

0xfcdb,	// (0x0001d298) popup_slider_window_t_ParamLimits

0xfcdb,	// (0x0001d298) popup_slider_window_t

0xd6e5,	// (0x0001aca2) slider_pane_ParamLimits

0xd6e5,	// (0x0001aca2) slider_pane

0xe416,	// (0x0001b9d3) slider_pane_g1_ParamLimits

0xe416,	// (0x0001b9d3) slider_pane_g1

0xe42a,	// (0x0001b9e7) slider_pane_g2_ParamLimits

0xe42a,	// (0x0001b9e7) slider_pane_g2

0xe440,	// (0x0001b9fd) slider_pane_g3_ParamLimits

0xe440,	// (0x0001b9fd) slider_pane_g3

0x0003,

0xfdf4,	// (0x0001d3b1) slider_pane_g_ParamLimits

0xfdf4,	// (0x0001d3b1) slider_pane_g

0x643a,	// (0x000139f7) popup_tb_float_extension_window_ParamLimits

0x643a,	// (0x000139f7) popup_tb_float_extension_window

0xe46c,	// (0x0001ba29) aid_size_cell_tb_float_ext

0x36d4,	// (0x00010c91) bg_popup_sub_window_cp28

0xe478,	// (0x0001ba35) grid_tb_float_ext_pane

0xe482,	// (0x0001ba3f) cell_tb_float_ext_pane_ParamLimits

0xe482,	// (0x0001ba3f) cell_tb_float_ext_pane

0xe49c,	// (0x0001ba59) cell_tb_float_ext_pane_g1

0xe4a5,	// (0x0001ba62) grid_highlight_pane_cp12

0x6bac,	// (0x00014169) cell_last_hwr_side_pane_ParamLimits

0x6bac,	// (0x00014169) cell_last_hwr_side_pane

0xbcbd,	// (0x0001927a) cell_last_hwr_side_pane_g1

0xe4ae,	// (0x0001ba6b) cell_last_hwr_side_pane_g2

0x0001,

0xfdfd,	// (0x0001d3ba) cell_last_hwr_side_pane_g

0x7309,	// (0x000148c6) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7309,	// (0x000148c6) vkb2_area_bottom_space_btn_pane

0x6cc2,	// (0x0001427f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf4a,	// (0x0001b507) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x75ae,	// (0x00014b6b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x75ed,	// (0x00014baa) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x75ed,	// (0x00014baa) vkb2_area_bottom_space_btn_pane_g1

0x7627,	// (0x00014be4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7627,	// (0x00014be4) vkb2_area_bottom_space_btn_pane_g2

0x765d,	// (0x00014c1a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x765d,	// (0x00014c1a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe02,	// (0x0001d3bf) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe02,	// (0x0001d3bf) vkb2_area_bottom_space_btn_pane_g

0x6b20,	// (0x000140dd) cel_fep_hwr_func_pane_ParamLimits

0x6b20,	// (0x000140dd) cel_fep_hwr_func_pane

0x6b5c,	// (0x00014119) cell_hwr_side_button_pane_ParamLimits

0x6b5c,	// (0x00014119) cell_hwr_side_button_pane

0xd926,	// (0x0001aee3) aid_area_touch_clock_ParamLimits

0x38c8,	// (0x00010e85) bg_uniindi_top_pane_ParamLimits

0xd938,	// (0x0001aef5) uniindi_top_pane_g1_ParamLimits

0xd94e,	// (0x0001af0b) uniindi_top_pane_g2_ParamLimits

0xd95a,	// (0x0001af17) uniindi_top_pane_g3_ParamLimits

0xd96b,	// (0x0001af28) uniindi_top_pane_g4_ParamLimits

0xfd13,	// (0x0001d2d0) uniindi_top_pane_g_ParamLimits

0xd978,	// (0x0001af35) uniindi_top_pane_t1_ParamLimits

0x38c8,	// (0x00010e85) bg_vkb2_func_pane_cp01_ParamLimits

0x38c8,	// (0x00010e85) bg_vkb2_func_pane_cp01

0xe4b7,	// (0x0001ba74) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4b7,	// (0x0001ba74) cel_fep_hwr_func_pane_g1

0x38c8,	// (0x00010e85) bg_vkb2_func_pane_cp02_ParamLimits

0x38c8,	// (0x00010e85) bg_vkb2_func_pane_cp02

0xe4b7,	// (0x0001ba74) cell_hwr_side_button_pane_g1_ParamLimits

0xe4b7,	// (0x0001ba74) cell_hwr_side_button_pane_g1

0x8f99,	// (0x00016556) status_pane_g4_ParamLimits

0x8f99,	// (0x00016556) status_pane_g4

0x8fb3,	// (0x00016570) status_pane_t1

0xb9f8,	// (0x00018fb5) form2_midp_gauge_slider_cont_pane

0xba00,	// (0x00018fbd) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba12,	// (0x00018fcf) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba24,	// (0x00018fe1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x0001d097) form2_midp_gauge_slider_pane_t_ParamLimits

0xba36,	// (0x00018ff3) form2_midp_slider_pane_ParamLimits

0x6f79,	// (0x00014536) aid_size_cell_func_vkb2_ParamLimits

0x6f79,	// (0x00014536) aid_size_cell_func_vkb2

0xe458,	// (0x0001ba15) slider_pane_g4_ParamLimits

0xe458,	// (0x0001ba15) slider_pane_g4

0x76a7,	// (0x00014c64) form2_midp_gauge_slider_pane_t2_cp01

0x76b5,	// (0x00014c72) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x76b5,	// (0x00014c72) form2_midp_gauge_slider_pane_t3_cp01

0x76d2,	// (0x00014c8f) form2_midp_slider_pane_cp01

0x36d4,	// (0x00010c91) navi_smil_pane

0xe4f0,	// (0x0001baad) navi_smil_pane_g1

0xe4f8,	// (0x0001bab5) navi_smil_pane_t1

0xe4c5,	// (0x0001ba82) form2_midp_slider_pane_g1

0xe4ce,	// (0x0001ba8b) form2_midp_slider_pane_g2

0xe4d6,	// (0x0001ba93) form2_midp_slider_pane_g3

0xe4c5,	// (0x0001ba82) form2_midp_slider_pane_g4

0xe4de,	// (0x0001ba9b) form2_midp_slider_pane_g5

0x0004,

0xfe0b,	// (0x0001d3c8) form2_midp_slider_pane_g

0x7697,	// (0x00014c54) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7697,	// (0x00014c54) vkb2_area_bottom_space_btn_pane_g4

0x8dc8,	// (0x00016385) lc0_navi_pane_ParamLimits

0x8dc8,	// (0x00016385) lc0_navi_pane

0x8e3e,	// (0x000163fb) lc0_stat_indi_pane_ParamLimits

0x8e3e,	// (0x000163fb) lc0_stat_indi_pane

0x8e55,	// (0x00016412) ls0_title_pane_ParamLimits

0x8e55,	// (0x00016412) ls0_title_pane

0x3ba6,	// (0x00011163) bg_popup_sub_pane_cp14_ParamLimits

0xd90d,	// (0x0001aeca) list_uniindi_pane_ParamLimits

0xd919,	// (0x0001aed6) uniindi_top_pane_ParamLimits

0xd9b5,	// (0x0001af72) list_single_uniindi_pane_g1_ParamLimits

0xd9c8,	// (0x0001af85) list_single_uniindi_pane_t1_ParamLimits

0x76db,	// (0x00014c98) lc0_stat_clock_pane_ParamLimits

0x76db,	// (0x00014c98) lc0_stat_clock_pane

0xe506,	// (0x0001bac3) lc0_stat_indi_pane_g1_ParamLimits

0xe506,	// (0x0001bac3) lc0_stat_indi_pane_g1

0xe513,	// (0x0001bad0) lc0_stat_indi_pane_g2_ParamLimits

0xe513,	// (0x0001bad0) lc0_stat_indi_pane_g2

0x0001,

0xfe16,	// (0x0001d3d3) lc0_stat_indi_pane_g_ParamLimits

0xfe16,	// (0x0001d3d3) lc0_stat_indi_pane_g

0x76e8,	// (0x00014ca5) lc0_uni_indicator_pane_ParamLimits

0x76e8,	// (0x00014ca5) lc0_uni_indicator_pane

0xe520,	// (0x0001badd) ls0_title_pane_g1_ParamLimits

0xe520,	// (0x0001badd) ls0_title_pane_g1

0xe534,	// (0x0001baf1) ls0_title_pane_t1_ParamLimits

0xe534,	// (0x0001baf1) ls0_title_pane_t1

0x76f5,	// (0x00014cb2) lc0_uni_indicator_pane_g1_ParamLimits

0x76f5,	// (0x00014cb2) lc0_uni_indicator_pane_g1

0xe56a,	// (0x0001bb27) lc0_stat_clock_pane_t1

0x5682,	// (0x00012c3f) main_ai5_pane

0xe578,	// (0x0001bb35) ai5_sk_pane_ParamLimits

0xe578,	// (0x0001bb35) ai5_sk_pane

0xe585,	// (0x0001bb42) cell_ai5_widget_pane_ParamLimits

0xe585,	// (0x0001bb42) cell_ai5_widget_pane

0xe64e,	// (0x0001bc0b) aid_size_cell_widget_grid

0xe65c,	// (0x0001bc19) bg_ai5_widget_pane_ParamLimits

0xe65c,	// (0x0001bc19) bg_ai5_widget_pane

0xe6d8,	// (0x0001bc95) cell_ai5_widget_pane_g2

0xe6ec,	// (0x0001bca9) cell_ai5_widget_pane_g3

0xe706,	// (0x0001bcc3) cell_ai5_widget_pane_g4

0xe716,	// (0x0001bcd3) cell_ai5_widget_pane_g5

0xe726,	// (0x0001bce3) cell_ai5_widget_pane_g6

0xe732,	// (0x0001bcef) cell_ai5_widget_pane_g7

0xe79e,	// (0x0001bd5b) cell_ai5_widget_pane_t1_ParamLimits

0xe79e,	// (0x0001bd5b) cell_ai5_widget_pane_t1

0xe7bb,	// (0x0001bd78) cell_ai5_widget_pane_t2_ParamLimits

0xe7bb,	// (0x0001bd78) cell_ai5_widget_pane_t2

0xe7d3,	// (0x0001bd90) cell_ai5_widget_pane_t3_ParamLimits

0xe7d3,	// (0x0001bd90) cell_ai5_widget_pane_t3

0xe7eb,	// (0x0001bda8) cell_ai5_widget_pane_t4_ParamLimits

0xe7eb,	// (0x0001bda8) cell_ai5_widget_pane_t4

0xe811,	// (0x0001bdce) cell_ai5_widget_pane_t5_ParamLimits

0xe811,	// (0x0001bdce) cell_ai5_widget_pane_t5

0xe830,	// (0x0001bded) cell_ai5_widget_pane_t6_ParamLimits

0xe830,	// (0x0001bded) cell_ai5_widget_pane_t6

0xe842,	// (0x0001bdff) cell_ai5_widget_pane_t7_ParamLimits

0xe842,	// (0x0001bdff) cell_ai5_widget_pane_t7

0xe861,	// (0x0001be1e) cell_ai5_widget_pane_t8_ParamLimits

0xe861,	// (0x0001be1e) cell_ai5_widget_pane_t8

0x000b,

0xfe36,	// (0x0001d3f3) cell_ai5_widget_pane_t_ParamLimits

0xfe36,	// (0x0001d3f3) cell_ai5_widget_pane_t

0xe8e5,	// (0x0001bea2) grid_ai5_widget_pane

0x3ba6,	// (0x00011163) highlight_cell_ai5_widget_pane_ParamLimits

0x3ba6,	// (0x00011163) highlight_cell_ai5_widget_pane

0xe8f3,	// (0x0001beb0) ai5_sk_left_pane

0xe8fd,	// (0x0001beba) ai5_sk_middle_pane

0xe907,	// (0x0001bec4) ai5_sk_right_pane

0xe911,	// (0x0001bece) bg_ai5_widget_pane_g1_ParamLimits

0xe911,	// (0x0001bece) bg_ai5_widget_pane_g1

0xe91d,	// (0x0001beda) bg_ai5_widget_pane_g2_ParamLimits

0xe91d,	// (0x0001beda) bg_ai5_widget_pane_g2

0xe929,	// (0x0001bee6) bg_ai5_widget_pane_g3_ParamLimits

0xe929,	// (0x0001bee6) bg_ai5_widget_pane_g3

0xe935,	// (0x0001bef2) bg_ai5_widget_pane_g4_ParamLimits

0xe935,	// (0x0001bef2) bg_ai5_widget_pane_g4

0xe941,	// (0x0001befe) bg_ai5_widget_pane_g5_ParamLimits

0xe941,	// (0x0001befe) bg_ai5_widget_pane_g5

0xe94d,	// (0x0001bf0a) bg_ai5_widget_pane_g6_ParamLimits

0xe94d,	// (0x0001bf0a) bg_ai5_widget_pane_g6

0xe959,	// (0x0001bf16) bg_ai5_widget_pane_g7_ParamLimits

0xe959,	// (0x0001bf16) bg_ai5_widget_pane_g7

0xe965,	// (0x0001bf22) bg_ai5_widget_pane_g8_ParamLimits

0xe965,	// (0x0001bf22) bg_ai5_widget_pane_g8

0xe971,	// (0x0001bf2e) bg_ai5_widget_pane_g9_ParamLimits

0xe971,	// (0x0001bf2e) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0001d40c) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0001d40c) bg_ai5_widget_pane_g

0xe9a3,	// (0x0001bf60) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x0001bf60) cell_shortcut_ai5_widget_pane

0x486a,	// (0x00011e27) bg_cell_shortcut_ai5_widget_pane

0xe9b4,	// (0x0001bf71) cell_grid_ai5_widget_pane_g1

0x486a,	// (0x00011e27) highlight_cell_shortcut_ai5_widget_pane

0x914b,	// (0x00016708) ai5_sk_left_pane_g1

0xe9bd,	// (0x0001bf7a) ai5_sk_left_pane_g2

0xe9c5,	// (0x0001bf82) ai5_sk_left_pane_g3

0xe9cd,	// (0x0001bf8a) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0001d41f) ai5_sk_left_pane_g

0xe9d5,	// (0x0001bf92) ai5_sk_left_pane_t1

0x9153,	// (0x00016710) ai5_sk_right_pane_g1

0xe9e3,	// (0x0001bfa0) ai5_sk_right_pane_g2

0xe9eb,	// (0x0001bfa8) ai5_sk_right_pane_g3

0xe9f3,	// (0x0001bfb0) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0001d428) ai5_sk_right_pane_g

0xe9fb,	// (0x0001bfb8) ai5_sk_right_pane_t1

0x9153,	// (0x00016710) ai5_sk_middle_pane_g1

0x914b,	// (0x00016708) ai5_sk_middle_pane_g2

0x916b,	// (0x00016728) ai5_sk_middle_pane_g3

0xe9eb,	// (0x0001bfa8) ai5_sk_middle_pane_g4

0xe9c5,	// (0x0001bf82) ai5_sk_middle_pane_g5

0xea09,	// (0x0001bfc6) ai5_sk_middle_pane_g6

0xea11,	// (0x0001bfce) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0001d431) ai5_sk_middle_pane_g

0x8c4e,	// (0x0001620b) aid_touch_area_size_lc0_ParamLimits

0x8c4e,	// (0x0001620b) aid_touch_area_size_lc0

0x6cf1,	// (0x000142ae) cell_hwr_candidate_pane_t1_ParamLimits

0x8c6a,	// (0x00016227) aid_touch_navi_pane

0x8f43,	// (0x00016500) status_dt_navi_pane_ParamLimits

0x8f43,	// (0x00016500) status_dt_navi_pane

0x8f50,	// (0x0001650d) status_dt_sta_pane_ParamLimits

0x8f50,	// (0x0001650d) status_dt_sta_pane

0xea19,	// (0x0001bfd6) dt_sta_controll_pane

0xea26,	// (0x0001bfe3) dt_sta_indi_pane

0xea37,	// (0x0001bff4) dt_sta_title_pane

0x38c8,	// (0x00010e85) bg_dt_sta_indi_pane_ParamLimits

0x38c8,	// (0x00010e85) bg_dt_sta_indi_pane

0xea4a,	// (0x0001c007) dt_sta_battery_pane

0xea52,	// (0x0001c00f) dt_sta_indi_pane_g1

0xea5b,	// (0x0001c018) dt_sta_indi_pane_g2

0xea64,	// (0x0001c021) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0001d440) dt_sta_indi_pane_g

0xea6d,	// (0x0001c02a) dt_sta_signal_pane

0x3ba6,	// (0x00011163) bg_dt_sta_title_pane_ParamLimits

0x3ba6,	// (0x00011163) bg_dt_sta_title_pane

0xa07a,	// (0x00017637) dt_sta_title_pane_g1

0xea76,	// (0x0001c033) dt_sta_title_pane_t1_ParamLimits

0xea76,	// (0x0001c033) dt_sta_title_pane_t1

0x36d4,	// (0x00010c91) bg_dt_sta_control_pane

0xea8b,	// (0x0001c048) dt_sta_controll_pane_g1

0xea94,	// (0x0001c051) bg_dt_sta_title_pane_g1

0xea9d,	// (0x0001c05a) bg_dt_sta_title_pane_g2

0xeaa6,	// (0x0001c063) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0001d447) bg_dt_sta_title_pane_g

0xbcbd,	// (0x0001927a) bg_dt_sta_indi_pane_g1

0xeaaf,	// (0x0001c06c) dt_sta_signal_pane_g1

0xeab7,	// (0x0001c074) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0001d44e) dt_sta_signal_pane_g

0xeabf,	// (0x0001c07c) dt_sta_battery_pane_g1

0xeac8,	// (0x0001c085) dt_sta_battery_pane_t1

0xbcbd,	// (0x0001927a) bg_dt_sta_control_pane_g1

0x433a,	// (0x000118f7) fep_china_uni_eep_pane

0x4342,	// (0x000118ff) fep_china_uni_entry_pane_ParamLimits

0x4352,	// (0x0001190f) popup_fep_china_uni_window_g1_ParamLimits

0x4362,	// (0x0001191f) popup_fep_china_uni_window_g2_ParamLimits

0x4362,	// (0x0001191f) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x0001cca6) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x0001cca6) popup_fep_china_uni_window_g

0xead7,	// (0x0001c094) fep_china_uni_eep_pane_g1

0xeadf,	// (0x0001c09c) fep_china_uni_eep_pane_t1

0xe4e7,	// (0x0001baa4) aid_touch_area_size_smil_player

0x8dc0,	// (0x0001637d) lc0_clock_pane

0x8fa7,	// (0x00016564) status_pane_g5_ParamLimits

0x8fa7,	// (0x00016564) status_pane_g5

0x60fb,	// (0x000136b8) popup_keymap_window

0x8f65,	// (0x00016522) status_icon_pane

0xe6ec,	// (0x0001bca9) cell_ai5_widget_pane_g3_ParamLimits

0xe706,	// (0x0001bcc3) cell_ai5_widget_pane_g4_ParamLimits

0xe716,	// (0x0001bcd3) cell_ai5_widget_pane_g5_ParamLimits

0xe73e,	// (0x0001bcfb) cell_ai5_widget_pane_g8_ParamLimits

0xe73e,	// (0x0001bcfb) cell_ai5_widget_pane_g8

0xe752,	// (0x0001bd0f) cell_ai5_widget_pane_g9_ParamLimits

0xe752,	// (0x0001bd0f) cell_ai5_widget_pane_g9

0xe766,	// (0x0001bd23) cell_ai5_widget_pane_g10_ParamLimits

0xe766,	// (0x0001bd23) cell_ai5_widget_pane_g10

0xeaee,	// (0x0001c0ab) status_icon_pane_g1

0x36d4,	// (0x00010c91) bg_popup_sub_pane_cp13

0xeaf6,	// (0x0001c0b3) popup_keymap_window_t1

0x8bf3,	// (0x000161b0) control_pane_g6_ParamLimits

0x8bf3,	// (0x000161b0) control_pane_g6

0x8c00,	// (0x000161bd) control_pane_g7_ParamLimits

0x8c00,	// (0x000161bd) control_pane_g7

0x8c0d,	// (0x000161ca) control_pane_g8_ParamLimits

0x8c0d,	// (0x000161ca) control_pane_g8

0xea19,	// (0x0001bfd6) dt_sta_controll_pane_ParamLimits

0xea26,	// (0x0001bfe3) dt_sta_indi_pane_ParamLimits

0xea37,	// (0x0001bff4) dt_sta_title_pane_ParamLimits

0x3a9f,	// (0x0001105c) aid_size_touch_scroll_bar_cale

0x575b,	// (0x00012d18) popup_discreet_window_ParamLimits

0x575b,	// (0x00012d18) popup_discreet_window

0x57d5,	// (0x00012d92) popup_sk_window

0x98be,	// (0x00016e7b) bg_popup_sub_pane_cp28_ParamLimits

0x98be,	// (0x00016e7b) bg_popup_sub_pane_cp28

0xeb04,	// (0x0001c0c1) popup_discreet_window_g1_ParamLimits

0xeb04,	// (0x0001c0c1) popup_discreet_window_g1

0xeb24,	// (0x0001c0e1) popup_discreet_window_t1_ParamLimits

0xeb24,	// (0x0001c0e1) popup_discreet_window_t1

0xeb42,	// (0x0001c0ff) popup_discreet_window_t2_ParamLimits

0xeb42,	// (0x0001c0ff) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0001d453) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0001d453) popup_discreet_window_t

0x7709,	// (0x00014cc6) popup_sk_window_g1

0x7713,	// (0x00014cd0) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0001d45a) popup_sk_window_g

0x771b,	// (0x00014cd8) popup_sk_window_t1

0x7729,	// (0x00014ce6) popup_sk_window_t1_copy1

0xe6d8,	// (0x0001bc95) cell_ai5_widget_pane_g2_ParamLimits

0xe873,	// (0x0001be30) cell_ai5_widget_pane_t9_ParamLimits

0xe873,	// (0x0001be30) cell_ai5_widget_pane_t9

0x36d4,	// (0x00010c91) main_fep_fshwr2_pane

0x7737,	// (0x00014cf4) aid_fshwr2_btn_pane

0x774b,	// (0x00014d08) aid_fshwr2_syb_pane

0x775f,	// (0x00014d1c) aid_fshwr2_txt_pane

0x776f,	// (0x00014d2c) fshwr2_func_candi_pane

0x7793,	// (0x00014d50) fshwr2_hwr_syb_pane

0x77ad,	// (0x00014d6a) fshwr2_icf_pane

0x5682,	// (0x00012c3f) fshwr2_icf_bg_pane

0x77db,	// (0x00014d98) fshwr2_icf_pane_t1_ParamLimits

0x77db,	// (0x00014d98) fshwr2_icf_pane_t1

0x4223,	// (0x000117e0) fshwr2_func_candi_pane_g1

0xeb94,	// (0x0001c151) fshwr2_func_candi_row_pane_ParamLimits

0xeb94,	// (0x0001c151) fshwr2_func_candi_row_pane

0x77f4,	// (0x00014db1) cell_fshwr2_syb_pane_ParamLimits

0x77f4,	// (0x00014db1) cell_fshwr2_syb_pane

0x7817,	// (0x00014dd4) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7817,	// (0x00014dd4) fshwr2_hwr_syb_pane_g1

0x5682,	// (0x00012c3f) bg_popup_call_pane_cp01

0x7825,	// (0x00014de2) fshwr2_func_candi_cell_pane_ParamLimits

0x7825,	// (0x00014de2) fshwr2_func_candi_cell_pane

0x9f1a,	// (0x000174d7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f1a,	// (0x000174d7) fshwr2_func_candi_cell_bg_pane

0x7870,	// (0x00014e2d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7870,	// (0x00014e2d) fshwr2_func_candi_cell_pane_g1

0x7890,	// (0x00014e4d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7890,	// (0x00014e4d) fshwr2_func_candi_cell_pane_t1

0x5682,	// (0x00012c3f) bg_button_pane_cp08

0x4a49,	// (0x00012006) cell_fshwr2_syb_bg_pane

0x78a3,	// (0x00014e60) cell_fshwr2_syb_bg_pane_g1

0x78b7,	// (0x00014e74) cell_fshwr2_syb_bg_pane_t1

0x3ba6,	// (0x00011163) main_tmo_pane

0xa3b3,	// (0x00017970) uni_indicator_pane_g1_ParamLimits

0xa3c6,	// (0x00017983) uni_indicator_pane_g2_ParamLimits

0xa3d8,	// (0x00017995) uni_indicator_pane_g3_ParamLimits

0xa3e7,	// (0x000179a4) uni_indicator_pane_g4_ParamLimits

0xa3e7,	// (0x000179a4) uni_indicator_pane_g4

0xa3fb,	// (0x000179b8) uni_indicator_pane_g5_ParamLimits

0xa3fb,	// (0x000179b8) uni_indicator_pane_g5

0xa3fb,	// (0x000179b8) uni_indicator_pane_g6_ParamLimits

0xa3fb,	// (0x000179b8) uni_indicator_pane_g6

0xf8ed,	// (0x0001ceaa) uni_indicator_pane_g_ParamLimits

0xd4f5,	// (0x0001aab2) popup_tmo_note_window_ParamLimits

0xd4f5,	// (0x0001aab2) popup_tmo_note_window

0x6f5b,	// (0x00014518) fshwr2_bg_pane

0x7881,	// (0x00014e3e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7881,	// (0x00014e3e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0001d45f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0001d45f) fshwr2_func_candi_cell_pane_g

0x6caa,	// (0x00014267) bg_popup_window_pane_cp01

0x78cd,	// (0x00014e8a) bg_popup_window_pane_g1_cp01

0xebbb,	// (0x0001c178) bg_popup_window_pane_cp22_ParamLimits

0xebbb,	// (0x0001c178) bg_popup_window_pane_cp22

0xebc9,	// (0x0001c186) listscroll_tmo_link_pane_ParamLimits

0xebc9,	// (0x0001c186) listscroll_tmo_link_pane

0xec09,	// (0x0001c1c6) popup_tmo_note_window_g1_ParamLimits

0xec09,	// (0x0001c1c6) popup_tmo_note_window_g1

0xec16,	// (0x0001c1d3) tmo_note_info_pane_ParamLimits

0xec16,	// (0x0001c1d3) tmo_note_info_pane

0xec30,	// (0x0001c1ed) list_tmo_note_info_pane_g1_ParamLimits

0xec30,	// (0x0001c1ed) list_tmo_note_info_pane_g1

0xec47,	// (0x0001c204) list_tmo_note_info_pane_g2_ParamLimits

0xec47,	// (0x0001c204) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0001d464) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0001d464) list_tmo_note_info_pane_g

0xec63,	// (0x0001c220) list_tmo_note_info_text_pane_ParamLimits

0xec63,	// (0x0001c220) list_tmo_note_info_text_pane

0xece4,	// (0x0001c2a1) list_tmo_link_pane

0xecf1,	// (0x0001c2ae) scroll_pane_cp20

0xecfe,	// (0x0001c2bb) list_single_tmo_link_pane_ParamLimits

0xecfe,	// (0x0001c2bb) list_single_tmo_link_pane

0xed0e,	// (0x0001c2cb) list_single_tmo_link_pane_t1

0xed1c,	// (0x0001c2d9) list_tmo_note_info_text_pane_t1_ParamLimits

0xed1c,	// (0x0001c2d9) list_tmo_note_info_text_pane_t1

0x8636,	// (0x00015bf3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8636,	// (0x00015bf3) aid_size_touch_scroll_bar_cp01

0x8538,	// (0x00015af5) aid_size_touch_slider_marker

0x57bd,	// (0x00012d7a) popup_settings_window_ParamLimits

0x57bd,	// (0x00012d7a) popup_settings_window

0x4b02,	// (0x000120bf) popup_candi_list_indi_window

0x8c6a,	// (0x00016227) aid_touch_navi_pane_ParamLimits

0x6eb6,	// (0x00014473) rs_clock_indi_pane

0x6ebf,	// (0x0001447c) sctrl_sk_bottom_pane_ParamLimits

0x6ed0,	// (0x0001448d) sctrl_sk_top_pane_ParamLimits

0x6fcb,	// (0x00014588) popup_fep_tooltip_window

0xe64e,	// (0x0001bc0b) aid_size_cell_widget_grid_ParamLimits

0xe6c3,	// (0x0001bc80) cell_ai5_widget_pane_g1_ParamLimits

0xe6c3,	// (0x0001bc80) cell_ai5_widget_pane_g1

0xe726,	// (0x0001bce3) cell_ai5_widget_pane_g6_ParamLimits

0xe732,	// (0x0001bcef) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1b,	// (0x0001d3d8) cell_ai5_widget_pane_g_ParamLimits

0xfe1b,	// (0x0001d3d8) cell_ai5_widget_pane_g

0xe8a2,	// (0x0001be5f) cell_ai5_widget_pane_t10_ParamLimits

0xe8a2,	// (0x0001be5f) cell_ai5_widget_pane_t10

0xe8e5,	// (0x0001bea2) grid_ai5_widget_pane_ParamLimits

0xe97d,	// (0x0001bf3a) cell_contacts_ai5_widget_pane_ParamLimits

0xe97d,	// (0x0001bf3a) cell_contacts_ai5_widget_pane

0xeb57,	// (0x0001c114) popup_discreet_window_t3_ParamLimits

0xeb57,	// (0x0001c114) popup_discreet_window_t3

0x77c5,	// (0x00014d82) popup_fshwr2_char_preview_window_ParamLimits

0x77c5,	// (0x00014d82) popup_fshwr2_char_preview_window

0xec81,	// (0x0001c23e) tmo_note_info_pane_t1

0xec96,	// (0x0001c253) tmo_note_info_pane_t2

0xecab,	// (0x0001c268) tmo_note_info_pane_t3

0xecc0,	// (0x0001c27d) tmo_note_info_pane_t4

0xecd2,	// (0x0001c28f) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0001d469) tmo_note_info_pane_t

0xece4,	// (0x0001c2a1) list_tmo_link_pane_ParamLimits

0xecf1,	// (0x0001c2ae) scroll_pane_cp20_ParamLimits

0x5682,	// (0x00012c3f) bg_popup_fep_char_preview_window_cp01

0xed35,	// (0x0001c2f2) popup_fshwr2_char_preview_window_t1

0xed43,	// (0x0001c300) popup_candi_list_indi_window_g1

0xed4c,	// (0x0001c309) bg_cell_contacts_ai5_widget_pane

0xed58,	// (0x0001c315) cell_contacts_ai5_widget_pane_g1

0xc51b,	// (0x00019ad8) cell_contacts_ai5_widget_pane_g2

0xed6d,	// (0x0001c32a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0001d474) cell_contacts_ai5_widget_pane_g

0xed79,	// (0x0001c336) cell_contacts_ai5_widget_pane_t1

0x3ba6,	// (0x00011163) highlight_cell_shortcut_ai5_widget_pane_cp01

0xedf0,	// (0x0001c3ad) settings_container_pane

0x486a,	// (0x00011e27) listscroll_set_pane_copy1

0xb050,	// (0x0001860d) scroll_pane_cp121_copy1

0x9663,	// (0x00016c20) set_content_pane_copy1

0xedfc,	// (0x0001c3b9) aid_height_set_list_copy1_ParamLimits

0xedfc,	// (0x0001c3b9) aid_height_set_list_copy1

0xa605,	// (0x00017bc2) aid_size_parent_copy1_ParamLimits

0xa605,	// (0x00017bc2) aid_size_parent_copy1

0xee08,	// (0x0001c3c5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee08,	// (0x0001c3c5) button_value_adjust_pane_cp6_copy1

0x4a49,	// (0x00012006) list_highlight_pane_cp2_copy1_ParamLimits

0x4a49,	// (0x00012006) list_highlight_pane_cp2_copy1

0xee1c,	// (0x0001c3d9) list_set_pane_copy1_ParamLimits

0xee1c,	// (0x0001c3d9) list_set_pane_copy1

0xed8b,	// (0x0001c348) main_pane_set_t1_copy1_ParamLimits

0xed8b,	// (0x0001c348) main_pane_set_t1_copy1

0xedc5,	// (0x0001c382) main_pane_set_t2_copy1_ParamLimits

0xedc5,	// (0x0001c382) main_pane_set_t2_copy1

0xeec9,	// (0x0001c486) main_pane_set_t3_copy1

0xeed7,	// (0x0001c494) main_pane_set_t4_copy1

0xede4,	// (0x0001c3a1) set_content_pane_g1_copy1_ParamLimits

0xede4,	// (0x0001c3a1) set_content_pane_g1_copy1

0xeee5,	// (0x0001c4a2) setting_code_pane_copy1

0xeeed,	// (0x0001c4aa) setting_slider_graphic_pane_copy1

0xeeed,	// (0x0001c4aa) setting_slider_pane_copy1

0xeef5,	// (0x0001c4b2) setting_text_pane_copy1

0xeef5,	// (0x0001c4b2) setting_volume_pane_copy1

0xeee5,	// (0x0001c4a2) settings_code_pane_cp2_copy1

0xeefd,	// (0x0001c4ba) settings_code_pane_cp_copy1_ParamLimits

0xeefd,	// (0x0001c4ba) settings_code_pane_cp_copy1

0x78d6,	// (0x00014e93) volume_set_pane_copy1

0xef11,	// (0x0001c4ce) volume_set_pane_g10_copy1

0xef19,	// (0x0001c4d6) volume_set_pane_g1_copy1

0xef21,	// (0x0001c4de) volume_set_pane_g2_copy1

0xef29,	// (0x0001c4e6) volume_set_pane_g3_copy1

0xef31,	// (0x0001c4ee) volume_set_pane_g4_copy1

0xef39,	// (0x0001c4f6) volume_set_pane_g5_copy1

0xef41,	// (0x0001c4fe) volume_set_pane_g6_copy1

0xef49,	// (0x0001c506) volume_set_pane_g7_copy1

0xef51,	// (0x0001c50e) volume_set_pane_g8_copy1

0xef59,	// (0x0001c516) volume_set_pane_g9_copy1

0x3784,	// (0x00010d41) bg_set_opt_pane_cp_copy1_ParamLimits

0x3784,	// (0x00010d41) bg_set_opt_pane_cp_copy1

0x78de,	// (0x00014e9b) setting_slider_pane_t1_copy1_ParamLimits

0x78de,	// (0x00014e9b) setting_slider_pane_t1_copy1

0x78fd,	// (0x00014eba) setting_slider_pane_t2_copy1_ParamLimits

0x78fd,	// (0x00014eba) setting_slider_pane_t2_copy1

0x7917,	// (0x00014ed4) setting_slider_pane_t3_copy1_ParamLimits

0x7917,	// (0x00014ed4) setting_slider_pane_t3_copy1

0x792f,	// (0x00014eec) slider_set_pane_copy1_ParamLimits

0x792f,	// (0x00014eec) slider_set_pane_copy1

0x3c6c,	// (0x00011229) set_opt_bg_pane_g1_copy2

0x3c74,	// (0x00011231) set_opt_bg_pane_g2_copy2

0xef61,	// (0x0001c51e) set_opt_bg_pane_g3_copy2

0x3c84,	// (0x00011241) set_opt_bg_pane_g4_copy2

0x3c8c,	// (0x00011249) set_opt_bg_pane_g5_copy2

0x3c94,	// (0x00011251) set_opt_bg_pane_g6_copy2

0xef6b,	// (0x0001c528) set_opt_bg_pane_g7_copy2

0xef73,	// (0x0001c530) set_opt_bg_pane_g8_copy2

0xef7d,	// (0x0001c53a) set_opt_bg_pane_g9_copy2

0x7945,	// (0x00014f02) aid_size_touch_slider_mark_copy1_ParamLimits

0x7945,	// (0x00014f02) aid_size_touch_slider_mark_copy1

0xef87,	// (0x0001c544) slider_set_pane_g1_copy1

0x7959,	// (0x00014f16) slider_set_pane_g2_copy1

0x68a3,	// (0x00013e60) slider_set_pane_g3_copy1_ParamLimits

0x68a3,	// (0x00013e60) slider_set_pane_g3_copy1

0x68b7,	// (0x00013e74) slider_set_pane_g4_copy1_ParamLimits

0x68b7,	// (0x00013e74) slider_set_pane_g4_copy1

0x68cf,	// (0x00013e8c) slider_set_pane_g5_copy1_ParamLimits

0x68cf,	// (0x00013e8c) slider_set_pane_g5_copy1

0x68a3,	// (0x00013e60) slider_set_pane_g6_copy1_ParamLimits

0x68a3,	// (0x00013e60) slider_set_pane_g6_copy1

0x7961,	// (0x00014f1e) slider_set_pane_g7_copy1_ParamLimits

0x7961,	// (0x00014f1e) slider_set_pane_g7_copy1

0x3708,	// (0x00010cc5) bg_set_opt_pane_cp2_copy1

0xef90,	// (0x0001c54d) setting_slider_graphic_pane_g1_copy1

0xef99,	// (0x0001c556) setting_slider_graphic_pane_t1_copy1

0xefa9,	// (0x0001c566) setting_slider_graphic_pane_t2_copy1

0xefb9,	// (0x0001c576) slider_set_pane_cp_copy1

0xefc9,	// (0x0001c586) input_focus_pane_cp1_copy1

0xefd2,	// (0x0001c58f) list_set_text_pane_copy1

0xefda,	// (0x0001c597) setting_text_pane_g1_copy1

0xefe3,	// (0x0001c5a0) set_text_pane_t1_copy1

0xefc9,	// (0x0001c586) input_focus_pane_cp2_copy1

0xefda,	// (0x0001c597) setting_code_pane_g1_copy1

0xeffe,	// (0x0001c5bb) setting_code_pane_t1_copy1

0xf00c,	// (0x0001c5c9) list_set_graphic_pane_copy1

0x3708,	// (0x00010cc5) bg_set_opt_pane_cp4_copy1

0x45e7,	// (0x00011ba4) list_set_graphic_pane_g1_copy1_ParamLimits

0x45e7,	// (0x00011ba4) list_set_graphic_pane_g1_copy1

0xf020,	// (0x0001c5dd) list_set_graphic_pane_g2_copy1

0x45ff,	// (0x00011bbc) list_set_graphic_pane_t1_copy1_ParamLimits

0x45ff,	// (0x00011bbc) list_set_graphic_pane_t1_copy1

0xbcbd,	// (0x0001927a) rs_clock_indi_pane_g1

0xf028,	// (0x0001c5e5) rs_clock_indi_pane_t1

0xf036,	// (0x0001c5f3) rs_indi_pane

0xf03e,	// (0x0001c5fb) rs_indi_pane_g1

0xf047,	// (0x0001c604) rs_indi_pane_g2

0xed43,	// (0x0001c300) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0001d47b) rs_indi_pane_g

0x486a,	// (0x00011e27) bg_popup_preview_window_pane_cp03

0xf050,	// (0x0001c60d) popup_fep_tooltip_window_t1

0xcb52,	// (0x0001a10f) popup_note2_window_g2_ParamLimits

0xcb52,	// (0x0001a10f) popup_note2_window_g2

0x0001,

0xfc52,	// (0x0001d20f) popup_note2_window_g_ParamLimits

0xfc52,	// (0x0001d20f) popup_note2_window_g

0xd12e,	// (0x0001a6eb) bg_popup_sub_pane_cp11_ParamLimits

0xd13b,	// (0x0001a6f8) cell_ai3_links_pane_g1_ParamLimits

0xd152,	// (0x0001a70f) cell_ai3_links_pane_t1

0xefe3,	// (0x0001c5a0) set_text_pane_t1_copy1_ParamLimits

0x47ac,	// (0x00011d69) cell_graphic_popup_pane_cp2_ParamLimits

0x47ac,	// (0x00011d69) cell_graphic_popup_pane_cp2

0xf05e,	// (0x0001c61b) cell_graphic_popup_pane_g1_cp2

0x3a22,	// (0x00010fdf) cell_graphic_popup_pane_g2_cp2

0xf066,	// (0x0001c623) cell_graphic_popup_pane_g3_cp2

0xf06e,	// (0x0001c62b) cell_graphic_popup_pane_t2_cp2

0x3a33,	// (0x00010ff0) grid_highlight_pane_cp3_cp2

0x4081,	// (0x0001163e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3ba6,	// (0x00011163) main_tmo_pane_ParamLimits

0xd4e9,	// (0x0001aaa6) popup_tmo_big_image_note_window

0xe6b2,	// (0x0001bc6f) cell_ai5_widget_list_pane

0xe6ba,	// (0x0001bc77) cell_ai5_widget_lrg_icon_pane

0xec81,	// (0x0001c23e) tmo_note_info_pane_t1_ParamLimits

0xec96,	// (0x0001c253) tmo_note_info_pane_t2_ParamLimits

0xecab,	// (0x0001c268) tmo_note_info_pane_t3_ParamLimits

0xecc0,	// (0x0001c27d) tmo_note_info_pane_t4_ParamLimits

0xecd2,	// (0x0001c28f) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0001d469) tmo_note_info_pane_t_ParamLimits

0xedf0,	// (0x0001c3ad) settings_container_pane_ParamLimits

0xefc1,	// (0x0001c57e) indicator_popup_pane_cp5

0xefc1,	// (0x0001c57e) indicator_popup_pane_cp6

0xf00c,	// (0x0001c5c9) list_set_graphic_pane_copy1_ParamLimits

0x36d4,	// (0x00010c91) bg_popup_window_pane_cp23

0xf07c,	// (0x0001c639) popup_tmo_big_image_note_window_g1

0xf085,	// (0x0001c642) popup_tmo_big_image_note_window_t1

0xf095,	// (0x0001c652) popup_tmo_big_image_note_window_t2

0xf0a5,	// (0x0001c662) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0001d482) popup_tmo_big_image_note_window_t

0xbcbd,	// (0x0001927a) cell_ai5_widget_lrg_icon_pane_g1

0xf0b5,	// (0x0001c672) cell_ai5_widget_lrg_icon_pane_t1

0xf0c3,	// (0x0001c680) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c3,	// (0x0001c680) cell_ai5_widget_list_row_pane

0xf0da,	// (0x0001c697) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0da,	// (0x0001c697) cell_ai5_widget_list_row_pane_g1

0xf0e7,	// (0x0001c6a4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0e7,	// (0x0001c6a4) cell_ai5_widget_list_row_pane_t1

0xf112,	// (0x0001c6cf) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf112,	// (0x0001c6cf) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0001d489) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0001d489) cell_ai5_widget_list_row_pane_t

0x5682,	// (0x00012c3f) main_fep_vtchi_ss_pane

0xf162,	// (0x0001c71f) popup_fep_char_pre_window

0xf16a,	// (0x0001c727) popup_fep_ituss_window

0xf196,	// (0x0001c753) popup_fep_vkbss_window

0x4a49,	// (0x00012006) grid_vkbss_keypad_pane_ParamLimits

0x4a49,	// (0x00012006) grid_vkbss_keypad_pane

0xf1d6,	// (0x0001c793) ituss_keypad_pane

0x7981,	// (0x00014f3e) aid_vkbss_key_offset_ParamLimits

0x7981,	// (0x00014f3e) aid_vkbss_key_offset

0x798d,	// (0x00014f4a) cell_vkbss_key_pane_ParamLimits

0x798d,	// (0x00014f4a) cell_vkbss_key_pane

0xf1e6,	// (0x0001c7a3) bg_cell_vkbss_key_g1_ParamLimits

0xf1e6,	// (0x0001c7a3) bg_cell_vkbss_key_g1

0xf1f2,	// (0x0001c7af) cell_vkbss_key_3p_pane_ParamLimits

0xf1f2,	// (0x0001c7af) cell_vkbss_key_3p_pane

0xf228,	// (0x0001c7e5) cell_vkbss_key_g1_ParamLimits

0xf228,	// (0x0001c7e5) cell_vkbss_key_g1

0xf25e,	// (0x0001c81b) cell_vkbss_key_t1_ParamLimits

0xf25e,	// (0x0001c81b) cell_vkbss_key_t1

0x79d8,	// (0x00014f95) cell_ituss_key_pane_ParamLimits

0x79d8,	// (0x00014f95) cell_ituss_key_pane

0xf2ba,	// (0x0001c877) bg_cell_ituss_key_g1_ParamLimits

0xf2ba,	// (0x0001c877) bg_cell_ituss_key_g1

0xf2c6,	// (0x0001c883) cell_ituss_key_pane_g1_ParamLimits

0xf2c6,	// (0x0001c883) cell_ituss_key_pane_g1

0x79e9,	// (0x00014fa6) cell_ituss_key_pane_g2_ParamLimits

0x79e9,	// (0x00014fa6) cell_ituss_key_pane_g2

0x0005,

0xfed3,	// (0x0001d490) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0001d490) cell_ituss_key_pane_g

0x7a6d,	// (0x0001502a) cell_ituss_key_t1_ParamLimits

0x7a6d,	// (0x0001502a) cell_ituss_key_t1

0x7aa7,	// (0x00015064) cell_ituss_key_t2_ParamLimits

0x7aa7,	// (0x00015064) cell_ituss_key_t2

0x7ad9,	// (0x00015096) cell_ituss_key_t3_ParamLimits

0x7ad9,	// (0x00015096) cell_ituss_key_t3

0x7b0a,	// (0x000150c7) cell_ituss_key_t4_ParamLimits

0x7b0a,	// (0x000150c7) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x0001d49d) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x0001d49d) cell_ituss_key_t

0xf2ec,	// (0x0001c8a9) cell_vkbss_key_3p_pane_g1

0xf2f4,	// (0x0001c8b1) cell_vkbss_key_3p_pane_g2

0xf2fc,	// (0x0001c8b9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x0001d4a8) cell_vkbss_key_3p_pane_g

0x486a,	// (0x00011e27) bg_popup_fep_char_preview_window_cp02

0xf304,	// (0x0001c8c1) popup_fep_char_pre_window_t1

0xe63b,	// (0x0001bbf8) main_ai5_sk_pane

0xed4c,	// (0x0001c309) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed58,	// (0x0001c315) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc51b,	// (0x00019ad8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed6d,	// (0x0001c32a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0001d474) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed79,	// (0x0001c336) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3ba6,	// (0x00011163) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf312,	// (0x0001c8cf) main_ai5_sk_pane_g1

0x96ff,	// (0x00016cbc) popup_query_code_window_g1

0xf180,	// (0x0001c73d) popup_fep_vkb_icf_pane

0xf1ad,	// (0x0001c76a) popup_fep_vtchi_icf_pane

0xf31b,	// (0x0001c8d8) bg_icf_pane

0xf31b,	// (0x0001c8d8) list_vkb_icf_pane

0xf327,	// (0x0001c8e4) bg_icf_pane_cp01

0xf33a,	// (0x0001c8f7) vtchi_icf_list_pane

0xf39a,	// (0x0001c957) list_vkb_icf_pane_t1_ParamLimits

0xf39a,	// (0x0001c957) list_vkb_icf_pane_t1

0xf3bf,	// (0x0001c97c) vtchi_icf_list_pane_t1_ParamLimits

0xf3bf,	// (0x0001c97c) vtchi_icf_list_pane_t1

0xf16a,	// (0x0001c727) popup_fep_ituss_window_ParamLimits

0xf1ad,	// (0x0001c76a) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d6,	// (0x0001c793) ituss_keypad_pane_ParamLimits

0x7977,	// (0x00014f34) ituss_sks_pane

0xf31b,	// (0x0001c8d8) bg_icf_pane_ParamLimits

0xf13a,	// (0x0001c6f7) icf_edit_indi_pane_ParamLimits

0xf13a,	// (0x0001c6f7) icf_edit_indi_pane

0xf31b,	// (0x0001c8d8) list_vkb_icf_pane_ParamLimits

0xf327,	// (0x0001c8e4) bg_icf_pane_cp01_ParamLimits

0xf155,	// (0x0001c712) icf_edit_indi_pane_cp01_ParamLimits

0xf155,	// (0x0001c712) icf_edit_indi_pane_cp01

0xf33a,	// (0x0001c8f7) vtchi_query_pane

0xe4b7,	// (0x0001ba74) icf_edit_indi_pane_g1_ParamLimits

0xe4b7,	// (0x0001ba74) icf_edit_indi_pane_g1

0xf43a,	// (0x0001c9f7) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0001c9f7) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x0001d4d3) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x0001d4d3) icf_edit_indi_pane_g

0xf44e,	// (0x0001ca0b) icf_edit_indi_pane_t1

0xf3e3,	// (0x0001c9a0) bg_input_focus_pane_cp042

0x3a96,	// (0x00011053) vtchi_button_pane

0xf3ec,	// (0x0001c9a9) vtchi_query_pane_t1

0xf3fa,	// (0x0001c9b7) vtchi_query_pane_t2

0xf408,	// (0x0001c9c5) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x0001d4c2) vtchi_query_pane_t

0x5682,	// (0x00012c3f) bg_button_pane_cp13

0xf416,	// (0x0001c9d3) vtchi_button_pane_g1

0x7b4d,	// (0x0001510a) ituss_sks_pane_g1

0x7b58,	// (0x00015115) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x0001d4c9) ituss_sks_pane_g

0xf41e,	// (0x0001c9db) ituss_sks_pane_t1

0xf42c,	// (0x0001c9e9) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x0001d4ce) ituss_sks_pane_t

0xb6e4,	// (0x00018ca1) indicator_nsta_pane_cp_g1

0xb6ed,	// (0x00018caa) indicator_nsta_pane_cp_g2

0xb6f5,	// (0x00018cb2) indicator_nsta_pane_cp_g3

0xb6fd,	// (0x00018cba) indicator_nsta_pane_cp_g4

0xb6ed,	// (0x00018caa) indicator_nsta_pane_cp_g5

0xb6f5,	// (0x00018cb2) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x0001d04d) indicator_nsta_pane_cp_g

0xe20a,	// (0x0001b7c7) cell_graphic2_pane_t2_ParamLimits

0xe20a,	// (0x0001b7c7) cell_graphic2_pane_t2

0x0001,

0xfda2,	// (0x0001d35f) cell_graphic2_pane_t_ParamLimits

0xfda2,	// (0x0001d35f) cell_graphic2_pane_t

0xe236,	// (0x0001b7f3) cell_graphic2_control_pane_t1

0x88c0,	// (0x00015e7d) signal_pane_g3_ParamLimits

0x88c0,	// (0x00015e7d) signal_pane_g3

0x88d2,	// (0x00015e8f) signal_pane_g4_ParamLimits

0x88d2,	// (0x00015e8f) signal_pane_g4

0xf124,	// (0x0001c6e1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf124,	// (0x0001c6e1) cell_ai5_widget_list_row_pane_t3

0xf2da,	// (0x0001c897) cell_ituss_key_pane_t1_ParamLimits

0xf2da,	// (0x0001c897) cell_ituss_key_pane_t1

0x92f1,	// (0x000168ae) form_field_data_wide_pane_vc_t2_ParamLimits

0x92f1,	// (0x000168ae) form_field_data_wide_pane_vc_t2

0x9305,	// (0x000168c2) form_field_data_wide_pane_vc_t3_ParamLimits

0x9305,	// (0x000168c2) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d5,	// (0x0001cd92) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d5,	// (0x0001cd92) form_field_data_wide_pane_vc_t

0xb38e,	// (0x0001894b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb38e,	// (0x0001894b) form_field_slider_wide_pane_vc_t3

0xb46c,	// (0x00018a29) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb46c,	// (0x00018a29) form_field_popup_wide_pane_vc_t2

0xb483,	// (0x00018a40) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb483,	// (0x00018a40) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x0001d03c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0001d03c) form_field_popup_wide_pane_vc_t

0x7737,	// (0x00014cf4) aid_fshwr2_btn_pane_ParamLimits

0x774b,	// (0x00014d08) aid_fshwr2_syb_pane_ParamLimits

0x775f,	// (0x00014d1c) aid_fshwr2_txt_pane_ParamLimits

0x6f5b,	// (0x00014518) fshwr2_bg_pane_ParamLimits

0x776f,	// (0x00014d2c) fshwr2_func_candi_pane_ParamLimits

0x7793,	// (0x00014d50) fshwr2_hwr_syb_pane_ParamLimits

0x77ad,	// (0x00014d6a) fshwr2_icf_pane_ParamLimits

0xb2ff,	// (0x000188bc) list_double_graphic_pane_vc_g4_ParamLimits

0xb2ff,	// (0x000188bc) list_double_graphic_pane_vc_g4

0x7a09,	// (0x00014fc6) cell_ituss_key_pane_g3_ParamLimits

0x7a09,	// (0x00014fc6) cell_ituss_key_pane_g3

0x7b3b,	// (0x000150f8) cell_ituss_key_t5_ParamLimits

0x7b3b,	// (0x000150f8) cell_ituss_key_t5

0xf196,	// (0x0001c753) popup_fep_vkbss_window_ParamLimits

0xe645,	// (0x0001bc02) aid_cell_ai5_quarter

0xf44e,	// (0x0001ca0b) icf_edit_indi_pane_t1_ParamLimits

0x7d5f,	// (0x0001531c) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7d5f,	// (0x0001531c) aid_tch_indicator_popup_pane_cp2

0x7d72,	// (0x0001532f) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7d72,	// (0x0001532f) aid_tch_query_popup_data_pane_cp2

0x96a7,	// (0x00016c64) aid_tch_query_popup_pane_ParamLimits

0x96a7,	// (0x00016c64) aid_tch_query_popup_pane

0x96a7,	// (0x00016c64) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x96a7,	// (0x00016c64) aid_tch_query_popup_data_pane_cp1

0x4a49,	// (0x00012006) cell_fshwr2_syb_bg_pane_ParamLimits

0x78a3,	// (0x00014e60) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x78b7,	// (0x00014e74) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf180,	// (0x0001c73d) popup_fep_vkb_icf_pane_ParamLimits

0x7577,	// (0x00014b34) bg_popup_fep_char_preview_window_g10

0xe77a,	// (0x0001bd37) cell_ai5_widget_pane_g11_ParamLimits

0xe77a,	// (0x0001bd37) cell_ai5_widget_pane_g11

0xe786,	// (0x0001bd43) cell_ai5_widget_pane_g12_ParamLimits

0xe786,	// (0x0001bd43) cell_ai5_widget_pane_g12

0xe792,	// (0x0001bd4f) cell_ai5_widget_pane_g13_ParamLimits

0xe792,	// (0x0001bd4f) cell_ai5_widget_pane_g13

0xe8c1,	// (0x0001be7e) cell_ai5_widget_pane_t11_ParamLimits

0xe8c1,	// (0x0001be7e) cell_ai5_widget_pane_t11

0xe8d3,	// (0x0001be90) cell_ai5_widget_pane_t12_ParamLimits

0xe8d3,	// (0x0001be90) cell_ai5_widget_pane_t12

0x7a15,	// (0x00014fd2) cell_ituss_key_pane_g4_ParamLimits

0x7a15,	// (0x00014fd2) cell_ituss_key_pane_g4

0x7a31,	// (0x00014fee) cell_ituss_key_pane_g5_ParamLimits

0x7a31,	// (0x00014fee) cell_ituss_key_pane_g5

0x7a4d,	// (0x0001500a) cell_ituss_key_pane_g6_ParamLimits

0x7a4d,	// (0x0001500a) cell_ituss_key_pane_g6

0x9143,	// (0x00016700) bg_icf_pane_g1

0xf342,	// (0x0001c8ff) bg_icf_pane_g2

0xf34e,	// (0x0001c90b) bg_icf_pane_g3

0xf358,	// (0x0001c915) bg_icf_pane_g4

0xf364,	// (0x0001c921) bg_icf_pane_g5

0xf36e,	// (0x0001c92b) bg_icf_pane_g6

0xf37a,	// (0x0001c937) bg_icf_pane_g7

0xf384,	// (0x0001c941) bg_icf_pane_g8

0xf390,	// (0x0001c94d) bg_icf_pane_g9

0x0008,

0xfef2,	// (0x0001d4af) bg_icf_pane_g

0xf1c3,	// (0x0001c780) popup_hyb_candi_window_ParamLimits

0xf1c3,	// (0x0001c780) popup_hyb_candi_window

0x9263,	// (0x00016820) bg_popup_sub_pane_cp01_ParamLimits

0x9263,	// (0x00016820) bg_popup_sub_pane_cp01

0xf467,	// (0x0001ca24) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0001ca24) entry_hyb_candi_pane

0xf476,	// (0x0001ca33) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0001ca33) grid_hyb_candi_pane

0xf48b,	// (0x0001ca48) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0001ca48) grid_hyb_phrase_pane

0xf49a,	// (0x0001ca57) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0001ca57) cell_hyb_candi_pane

0xf4bd,	// (0x0001ca7a) cell_hyb_candi_scroll_pane

0x4223,	// (0x000117e0) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0001ca83) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0001ca91) cell_hyb_phrase_pane

0x4223,	// (0x000117e0) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0001ca9a) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0001caa8) entry_hyb_candi_pane_t1

0x486a,	// (0x00011e27) input_focus_pane_cp06

0xf4f9,	// (0x0001cab6) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0001cabe) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0001cac6) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0001cace) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0001cad6) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0001cade) cell_hyb_candi_scroll_pane_g4
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

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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001ff93 };

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
0x655b,	// (0x000264ee) Screen

0x6567,	// (0x000264fa) application_window_ParamLimits

0x6567,	// (0x000264fa) application_window

0x19ed,	// (0x00021980) screen_g1

0x65c3,	// (0x00026556) area_bottom_pane_ParamLimits

0x65c3,	// (0x00026556) area_bottom_pane

0x6683,	// (0x00026616) area_top_pane_ParamLimits

0x6683,	// (0x00026616) area_top_pane

0x6717,	// (0x000266aa) main_pane_ParamLimits

0x6717,	// (0x000266aa) main_pane

0x19f7,	// (0x0002198a) misc_graphics

0x80a8,	// (0x0002803b) battery_pane_ParamLimits

0x80a8,	// (0x0002803b) battery_pane

0xa269,	// (0x0002a1fc) bg_status_flat_pane_g8

0xa271,	// (0x0002a204) bg_status_flat_pane_g9

0x8170,	// (0x00028103) context_pane_ParamLimits

0x8170,	// (0x00028103) context_pane

0x8286,	// (0x00028219) navi_pane_ParamLimits

0x8286,	// (0x00028219) navi_pane

0x830a,	// (0x0002829d) signal_pane_ParamLimits

0x830a,	// (0x0002829d) signal_pane

0x0008,

0xf840,	// (0x0002f7d3) bg_status_flat_pane_g

0x8377,	// (0x0002830a) status_pane_g1_ParamLimits

0x8377,	// (0x0002830a) status_pane_g1

0x838b,	// (0x0002831e) status_pane_g2_ParamLimits

0x838b,	// (0x0002831e) status_pane_g2

0x8397,	// (0x0002832a) status_pane_g3_ParamLimits

0x8397,	// (0x0002832a) status_pane_g3

0x0004,

0xf76c,	// (0x0002f6ff) status_pane_g_ParamLimits

0xf76c,	// (0x0002f6ff) status_pane_g

0x83cb,	// (0x0002835e) title_pane_ParamLimits

0x83cb,	// (0x0002835e) title_pane

0x8408,	// (0x0002839b) uni_indicator_pane_ParamLimits

0x8408,	// (0x0002839b) uni_indicator_pane

0x290b,	// (0x0002289e) bg_list_pane_ParamLimits

0x290b,	// (0x0002289e) bg_list_pane

0x5c04,	// (0x00025b97) find_pane

0x203d,	// (0x00021fd0) listscroll_app_pane_ParamLimits

0x203d,	// (0x00021fd0) listscroll_app_pane

0x292b,	// (0x000228be) listscroll_form_pane

0x5c0c,	// (0x00025b9f) listscroll_gen_pane_ParamLimits

0x5c0c,	// (0x00025b9f) listscroll_gen_pane

0x7a89,	// (0x00027a1c) listscroll_set_pane

0x6fec,	// (0x00026f7f) main_idle_act_pane

0x279f,	// (0x00022732) main_idle_trad_pane

0x279f,	// (0x00022732) main_list_empty_pane

0x203d,	// (0x00021fd0) main_midp_pane

0x2945,	// (0x000228d8) main_pane_g1_ParamLimits

0x2945,	// (0x000228d8) main_pane_g1

0x7a91,	// (0x00027a24) popup_ai_message_window_ParamLimits

0x7a91,	// (0x00027a24) popup_ai_message_window

0x7b35,	// (0x00027ac8) popup_fep_china_uni_window_ParamLimits

0x7b35,	// (0x00027ac8) popup_fep_china_uni_window

0x7b8f,	// (0x00027b22) popup_fep_japan_candidate_window_ParamLimits

0x7b8f,	// (0x00027b22) popup_fep_japan_candidate_window

0x7bad,	// (0x00027b40) popup_fep_japan_predictive_window_ParamLimits

0x7bad,	// (0x00027b40) popup_fep_japan_predictive_window

0x7bdd,	// (0x00027b70) popup_find_window

0x7bea,	// (0x00027b7d) popup_grid_graphic_window_ParamLimits

0x7bea,	// (0x00027b7d) popup_grid_graphic_window

0x7c14,	// (0x00027ba7) popup_large_graphic_colour_window

0x7c3a,	// (0x00027bcd) popup_menu_window_ParamLimits

0x7c3a,	// (0x00027bcd) popup_menu_window

0x7df6,	// (0x00027d89) popup_note_image_window

0x7de2,	// (0x00027d75) popup_note_wait_window_ParamLimits

0x7de2,	// (0x00027d75) popup_note_wait_window

0x7de2,	// (0x00027d75) popup_note_window_ParamLimits

0x7de2,	// (0x00027d75) popup_note_window

0x7e4c,	// (0x00027ddf) popup_query_code_window_ParamLimits

0x7e4c,	// (0x00027ddf) popup_query_code_window

0x7e60,	// (0x00027df3) popup_query_data_code_window_ParamLimits

0x7e60,	// (0x00027df3) popup_query_data_code_window

0x7e7d,	// (0x00027e10) popup_query_data_window_ParamLimits

0x7e7d,	// (0x00027e10) popup_query_data_window

0x7e99,	// (0x00027e2c) popup_query_sat_info_window_ParamLimits

0x7e99,	// (0x00027e2c) popup_query_sat_info_window

0x7ed2,	// (0x00027e65) popup_snote_single_graphic_window_ParamLimits

0x7ed2,	// (0x00027e65) popup_snote_single_graphic_window

0x7ed2,	// (0x00027e65) popup_snote_single_text_window_ParamLimits

0x7ed2,	// (0x00027e65) popup_snote_single_text_window

0x7ee7,	// (0x00027e7a) popup_sub_window_general

0x8017,	// (0x00027faa) popup_window_general_ParamLimits

0x8017,	// (0x00027faa) popup_window_general

0x802c,	// (0x00027fbf) power_save_pane

0x78f0,	// (0x00027883) control_pane_g1_ParamLimits

0x78f0,	// (0x00027883) control_pane_g1

0x7917,	// (0x000278aa) control_pane_g2_ParamLimits

0x7917,	// (0x000278aa) control_pane_g2

0x28f5,	// (0x00022888) control_pane_g3_ParamLimits

0x28f5,	// (0x00022888) control_pane_g3

0x0007,

0xf754,	// (0x0002f6e7) control_pane_g_ParamLimits

0xf754,	// (0x0002f6e7) control_pane_g

0x7988,	// (0x0002791b) control_pane_t1_ParamLimits

0x7988,	// (0x0002791b) control_pane_t1

0x79de,	// (0x00027971) control_pane_t2_ParamLimits

0x79de,	// (0x00027971) control_pane_t2

0x0002,

0xf765,	// (0x0002f6f8) control_pane_t_ParamLimits

0xf765,	// (0x0002f6f8) control_pane_t

0x7869,	// (0x000277fc) navi_navi_volume_pane_cp1

0x7871,	// (0x00027804) status_small_icon_pane

0x28a1,	// (0x00022834) status_small_pane_g1_ParamLimits

0x28a1,	// (0x00022834) status_small_pane_g1

0x7879,	// (0x0002780c) status_small_pane_g2_ParamLimits

0x7879,	// (0x0002780c) status_small_pane_g2

0x28d5,	// (0x00022868) status_small_pane_g3_ParamLimits

0x28d5,	// (0x00022868) status_small_pane_g3

0x7885,	// (0x00027818) status_small_pane_g4_ParamLimits

0x7885,	// (0x00027818) status_small_pane_g4

0x7891,	// (0x00027824) status_small_pane_g5_ParamLimits

0x7891,	// (0x00027824) status_small_pane_g5

0x789f,	// (0x00027832) status_small_pane_g6_ParamLimits

0x789f,	// (0x00027832) status_small_pane_g6

0x0007,

0xf743,	// (0x0002f6d6) status_small_pane_g_ParamLimits

0xf743,	// (0x0002f6d6) status_small_pane_g

0x78ba,	// (0x0002784d) status_small_pane_t1

0x78dc,	// (0x0002786f) status_small_wait_pane_ParamLimits

0x78dc,	// (0x0002786f) status_small_wait_pane

0x73d5,	// (0x00027368) aid_levels_signal_ParamLimits

0x73d5,	// (0x00027368) aid_levels_signal

0x73e7,	// (0x0002737a) signal_pane_g1_ParamLimits

0x73e7,	// (0x0002737a) signal_pane_g1

0x73fc,	// (0x0002738f) signal_pane_g2_ParamLimits

0x73fc,	// (0x0002738f) signal_pane_g2

0x0003,

0xf6d4,	// (0x0002f667) signal_pane_g_ParamLimits

0xf6d4,	// (0x0002f667) signal_pane_g

0x23a5,	// (0x00022338) context_pane_g1

0x6958,	// (0x000268eb) title_pane_g1

0x6982,	// (0x00026915) title_pane_t1

0x1a0d,	// (0x000219a0) title_pane_t2

0x1a33,	// (0x000219c6) title_pane_t3

0x0002,

0xf532,	// (0x0002f4c5) title_pane_t

0x8420,	// (0x000283b3) aid_levels_battery_ParamLimits

0x8420,	// (0x000283b3) aid_levels_battery

0x8434,	// (0x000283c7) battery_pane_g1_ParamLimits

0x8434,	// (0x000283c7) battery_pane_g1

0x844a,	// (0x000283dd) battery_pane_g2_ParamLimits

0x844a,	// (0x000283dd) battery_pane_g2

0x0001,

0xf777,	// (0x0002f70a) battery_pane_g_ParamLimits

0xf777,	// (0x0002f70a) battery_pane_g

0xab8d,	// (0x0002ab20) uni_indicator_pane_g1

0xaba0,	// (0x0002ab33) uni_indicator_pane_g2

0xabb2,	// (0x0002ab45) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x0002f87b) uni_indicator_pane_g

0x2642,	// (0x000225d5) navi_icon_pane_ParamLimits

0x2642,	// (0x000225d5) navi_icon_pane

0x2597,	// (0x0002252a) navi_midp_pane

0x265e,	// (0x000225f1) navi_navi_pane

0x2668,	// (0x000225fb) navi_text_pane_ParamLimits

0x2668,	// (0x000225fb) navi_text_pane

0x19ed,	// (0x00021980) status_small_wait_pane_g1

0x1c9e,	// (0x00021c31) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x0002f876) status_small_wait_pane_g

0xa8b4,	// (0x0002a847) navi_navi_icon_text_pane

0xa8bc,	// (0x0002a84f) navi_navi_pane_g1_ParamLimits

0xa8bc,	// (0x0002a84f) navi_navi_pane_g1

0xa8ce,	// (0x0002a861) navi_navi_pane_g2_ParamLimits

0xa8ce,	// (0x0002a861) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x0002f844) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x0002f844) navi_navi_pane_g

0xa8e0,	// (0x0002a873) navi_navi_tabs_pane

0xa8e9,	// (0x0002a87c) navi_navi_text_pane

0xa8b4,	// (0x0002a847) navi_navi_volume_pane

0xa890,	// (0x0002a823) navi_text_pane_t1

0xa884,	// (0x0002a817) navi_icon_pane_g1

0xa7d7,	// (0x0002a76a) navi_navi_text_pane_t1

0x8fa1,	// (0x00028f34) navi_navi_volume_pane_g1

0x8fa9,	// (0x00028f3c) volume_small_pane

0xa73d,	// (0x0002a6d0) navi_navi_icon_text_pane_g1

0xa745,	// (0x0002a6d8) navi_navi_icon_text_pane_t1

0x265e,	// (0x000225f1) navi_tabs_2_long_pane

0x265e,	// (0x000225f1) navi_tabs_2_pane

0x265e,	// (0x000225f1) navi_tabs_3_long_pane

0x265e,	// (0x000225f1) navi_tabs_3_pane

0x265e,	// (0x000225f1) navi_tabs_4_pane

0x8f81,	// (0x00028f14) tabs_2_active_pane_ParamLimits

0x8f81,	// (0x00028f14) tabs_2_active_pane

0x8f91,	// (0x00028f24) tabs_2_passive_pane_ParamLimits

0x8f91,	// (0x00028f24) tabs_2_passive_pane

0x8f4f,	// (0x00028ee2) tabs_3_active_pane_ParamLimits

0x8f4f,	// (0x00028ee2) tabs_3_active_pane

0x8f5f,	// (0x00028ef2) tabs_3_passive_pane_ParamLimits

0x8f5f,	// (0x00028ef2) tabs_3_passive_pane

0x8f70,	// (0x00028f03) tabs_3_passive_pane_cp_ParamLimits

0x8f70,	// (0x00028f03) tabs_3_passive_pane_cp

0x8f0b,	// (0x00028e9e) tabs_4_active_pane_ParamLimits

0x8f0b,	// (0x00028e9e) tabs_4_active_pane

0x8f1c,	// (0x00028eaf) tabs_4_passive_pane_ParamLimits

0x8f1c,	// (0x00028eaf) tabs_4_passive_pane

0x8f2d,	// (0x00028ec0) tabs_4_passive_pane_cp_ParamLimits

0x8f2d,	// (0x00028ec0) tabs_4_passive_pane_cp

0x8f3e,	// (0x00028ed1) tabs_4_passive_pane_cp2_ParamLimits

0x8f3e,	// (0x00028ed1) tabs_4_passive_pane_cp2

0x8ee7,	// (0x00028e7a) tabs_2_long_active_pane_ParamLimits

0x8ee7,	// (0x00028e7a) tabs_2_long_active_pane

0x8ef9,	// (0x00028e8c) tabs_2_long_passive_pane_ParamLimits

0x8ef9,	// (0x00028e8c) tabs_2_long_passive_pane

0x8ea2,	// (0x00028e35) tabs_3_long_active_pane_ParamLimits

0x8ea2,	// (0x00028e35) tabs_3_long_active_pane

0x8ebb,	// (0x00028e4e) tabs_3_long_passive_pane_ParamLimits

0x8ebb,	// (0x00028e4e) tabs_3_long_passive_pane

0x8ece,	// (0x00028e61) tabs_3_long_passive_pane_cp_ParamLimits

0x8ece,	// (0x00028e61) tabs_3_long_passive_pane_cp

0x8e48,	// (0x00028ddb) volume_small_pane_g1

0x8e51,	// (0x00028de4) volume_small_pane_g2

0x8e5a,	// (0x00028ded) volume_small_pane_g3

0x8e63,	// (0x00028df6) volume_small_pane_g4

0x8e6c,	// (0x00028dff) volume_small_pane_g5

0x8e75,	// (0x00028e08) volume_small_pane_g6

0x8e7e,	// (0x00028e11) volume_small_pane_g7

0x8e87,	// (0x00028e1a) volume_small_pane_g8

0x8e90,	// (0x00028e23) volume_small_pane_g9

0x8e99,	// (0x00028e2c) volume_small_pane_g10

0x0009,

0xf87d,	// (0x0002f810) volume_small_pane_g

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp2_ParamLimits

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp2

0x69ea,	// (0x0002697d) tabs_3_active_pane_g1

0x69f2,	// (0x00026985) tabs_3_active_pane_t1

0x1a53,	// (0x000219e6) bg_passive_tab_pane_cp2_ParamLimits

0x1a53,	// (0x000219e6) bg_passive_tab_pane_cp2

0x69ea,	// (0x0002697d) tabs_3_passive_pane_g1

0x69f2,	// (0x00026985) tabs_3_passive_pane_t1

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp3_ParamLimits

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp3

0x6a04,	// (0x00026997) tabs_4_active_pane_g1

0x6a0c,	// (0x0002699f) tabs_4_active_pane_t1

0x1a53,	// (0x000219e6) bg_passive_tab_pane_cp3_ParamLimits

0x1a53,	// (0x000219e6) bg_passive_tab_pane_cp3

0x6a04,	// (0x00026997) tabs_4_1_passive_pane_g1

0x6a0c,	// (0x0002699f) tabs_4_1_passive_pane_t1

0x203d,	// (0x00021fd0) list_highlight_pane_cp2

0xadf5,	// (0x0002ad88) list_set_pane_ParamLimits

0xadf5,	// (0x0002ad88) list_set_pane

0xae97,	// (0x0002ae2a) main_pane_set_t1_ParamLimits

0xae97,	// (0x0002ae2a) main_pane_set_t1

0xaeb7,	// (0x0002ae4a) main_pane_set_t2_ParamLimits

0xaeb7,	// (0x0002ae4a) main_pane_set_t2

0xaecb,	// (0x0002ae5e) main_pane_set_t3_ParamLimits

0xaecb,	// (0x0002ae5e) main_pane_set_t3

0xaedd,	// (0x0002ae70) main_pane_set_t4_ParamLimits

0xaedd,	// (0x0002ae70) main_pane_set_t4

0x0003,

0xf94d,	// (0x0002f8e0) main_pane_set_t_ParamLimits

0xf94d,	// (0x0002f8e0) main_pane_set_t

0xaeef,	// (0x0002ae82) setting_code_pane

0xaefb,	// (0x0002ae8e) setting_slider_graphic_pane

0xaefb,	// (0x0002ae8e) setting_slider_pane

0xaefb,	// (0x0002ae8e) setting_text_pane

0xaefb,	// (0x0002ae8e) setting_volume_pane

0x6a1e,	// (0x000269b1) volume_set_pane

0x1a53,	// (0x000219e6) bg_set_opt_pane_cp

0x6a26,	// (0x000269b9) setting_slider_pane_t1

0x6a3f,	// (0x000269d2) setting_slider_pane_t2

0x6a59,	// (0x000269ec) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002f4cc) setting_slider_pane_t

0x6a71,	// (0x00026a04) slider_set_pane

0x19f7,	// (0x0002198a) bg_set_opt_pane_cp2

0x1a61,	// (0x000219f4) setting_slider_graphic_pane_g1

0x6a87,	// (0x00026a1a) setting_slider_graphic_pane_t1

0x6a97,	// (0x00026a2a) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002f4d3) setting_slider_graphic_pane_t

0x6aa7,	// (0x00026a3a) slider_set_pane_cp

0x19f7,	// (0x0002198a) input_focus_pane_cp1

0xadb4,	// (0x0002ad47) list_set_text_pane

0x19ed,	// (0x00021980) setting_text_pane_g1

0x19f7,	// (0x0002198a) input_focus_pane_cp2

0x19ed,	// (0x00021980) setting_code_pane_g1

0x1a6a,	// (0x000219fd) setting_code_pane_t1

0x5507,	// (0x0002549a) set_text_pane_t1_ParamLimits

0x5507,	// (0x0002549a) set_text_pane_t1

0x1f53,	// (0x00021ee6) set_opt_bg_pane_g1

0x1f5b,	// (0x00021eee) set_opt_bg_pane_g2

0xad8e,	// (0x0002ad21) set_opt_bg_pane_g3

0x1f6b,	// (0x00021efe) set_opt_bg_pane_g4

0x1f73,	// (0x00021f06) set_opt_bg_pane_g5

0x1f7b,	// (0x00021f0e) set_opt_bg_pane_g6

0xad98,	// (0x0002ad2b) set_opt_bg_pane_g7

0xada0,	// (0x0002ad33) set_opt_bg_pane_g8

0xadaa,	// (0x0002ad3d) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x0002f8cd) set_opt_bg_pane_g

0xad81,	// (0x0002ad14) slider_set_pane_g1

0x9016,	// (0x00028fa9) slider_set_pane_g2

0x0006,

0xf92b,	// (0x0002f8be) slider_set_pane_g

0x8fb2,	// (0x00028f45) volume_set_pane_g1

0x8fba,	// (0x00028f4d) volume_set_pane_g2

0x8fc2,	// (0x00028f55) volume_set_pane_g3

0x8fca,	// (0x00028f5d) volume_set_pane_g4

0x8fd2,	// (0x00028f65) volume_set_pane_g5

0x8fda,	// (0x00028f6d) volume_set_pane_g6

0x8fe2,	// (0x00028f75) volume_set_pane_g7

0x8fea,	// (0x00028f7d) volume_set_pane_g8

0x8ff2,	// (0x00028f85) volume_set_pane_g9

0x8ffa,	// (0x00028f8d) volume_set_pane_g10

0x0009,

0xf903,	// (0x0002f896) volume_set_pane_g

0x6aaf,	// (0x00026a42) indicator_pane_ParamLimits

0x6aaf,	// (0x00026a42) indicator_pane

0x6abb,	// (0x00026a4e) main_idle_pane_g2_ParamLimits

0x6abb,	// (0x00026a4e) main_idle_pane_g2

0x6ae3,	// (0x00026a76) main_pane_idle_g1_ParamLimits

0x6ae3,	// (0x00026a76) main_pane_idle_g1

0x1a92,	// (0x00021a25) popup_clock_digital_analogue_window_ParamLimits

0x1a92,	// (0x00021a25) popup_clock_digital_analogue_window

0x6af0,	// (0x00026a83) soft_indicator_pane_ParamLimits

0x6af0,	// (0x00026a83) soft_indicator_pane

0x6afc,	// (0x00026a8f) wallpaper_pane_ParamLimits

0x6afc,	// (0x00026a8f) wallpaper_pane

0x19ed,	// (0x00021980) wallpaper_pane_g1

0x6b08,	// (0x00026a9b) indicator_pane_g1_ParamLimits

0x6b08,	// (0x00026a9b) indicator_pane_g1

0xb1c7,	// (0x0002b15a) navi_navi_icon_text_pane_srt_g1

0x1ac0,	// (0x00021a53) soft_indicator_pane_t1

0x1ada,	// (0x00021a6d) aid_ps_area_pane

0x6b14,	// (0x00026aa7) aid_ps_clock_pane

0x1aeb,	// (0x00021a7e) aid_ps_indicator_pane

0x1af7,	// (0x00021a8a) indicator_ps_pane_ParamLimits

0x1af7,	// (0x00021a8a) indicator_ps_pane

0x1b06,	// (0x00021a99) power_save_pane_g1_ParamLimits

0x1b06,	// (0x00021a99) power_save_pane_g1

0x1b12,	// (0x00021aa5) power_save_pane_g2_ParamLimits

0x1b12,	// (0x00021aa5) power_save_pane_g2

0x6577,	// (0x0002650a) aid_navinavi_width_pane

0x1ada,	// (0x00021a6d) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002f4d8) power_save_pane_g_ParamLimits

0xf545,	// (0x0002f4d8) power_save_pane_g

0x1b20,	// (0x00021ab3) power_save_pane_t1_ParamLimits

0x1b20,	// (0x00021ab3) power_save_pane_t1

0x6b14,	// (0x00026aa7) aid_ps_clock_pane_ParamLimits

0x1aeb,	// (0x00021a7e) aid_ps_indicator_pane_ParamLimits

0x1b32,	// (0x00021ac5) power_save_pane_t4_ParamLimits

0x1b32,	// (0x00021ac5) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002f4dd) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002f4dd) power_save_pane_t

0x1b5c,	// (0x00021aef) power_save_t3_ParamLimits

0x1b5c,	// (0x00021aef) power_save_t3

0x1b47,	// (0x00021ada) power_save_t2_ParamLimits

0x1b47,	// (0x00021ada) power_save_t2

0x1b71,	// (0x00021b04) indicator_ps_pane_g1

0x6b22,	// (0x00026ab5) ai_gene_pane_ParamLimits

0x6b22,	// (0x00026ab5) ai_gene_pane

0x6b2e,	// (0x00026ac1) ai_links_pane_ParamLimits

0x6b2e,	// (0x00026ac1) ai_links_pane

0x6b3a,	// (0x00026acd) indicator_pane_cp1_ParamLimits

0x6b3a,	// (0x00026acd) indicator_pane_cp1

0x6b46,	// (0x00026ad9) main_pane_idle_g1_cp_ParamLimits

0x6b46,	// (0x00026ad9) main_pane_idle_g1_cp

0x6b52,	// (0x00026ae5) popup_ai_links_title_window

0x6b5b,	// (0x00026aee) soft_indicator_pane_cp1_ParamLimits

0x6b5b,	// (0x00026aee) soft_indicator_pane_cp1

0xab7b,	// (0x0002ab0e) ai_links_pane_g1

0xab84,	// (0x0002ab17) grid_ai_links_pane

0xab5e,	// (0x0002aaf1) ai_gene_pane_1

0xab69,	// (0x0002aafc) ai_gene_pane_2

0xab72,	// (0x0002ab05) list_highlight_pane_cp4

0xab42,	// (0x0002aad5) cell_ai_link_pane_ParamLimits

0xab42,	// (0x0002aad5) cell_ai_link_pane

0xab3a,	// (0x0002aacd) cell_ai_link_pane_g1

0x1c9e,	// (0x00021c31) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x0002f871) cell_ai_link_pane_g

0x19f7,	// (0x0002198a) grid_highlight_cp2

0x19f7,	// (0x0002198a) bg_popup_sub_pane_cp1

0x1b88,	// (0x00021b1b) popup_ai_links_title_window_t1

0xaa8a,	// (0x0002aa1d) ai_gene_pane_1_g1_ParamLimits

0xaa8a,	// (0x0002aa1d) ai_gene_pane_1_g1

0xaa96,	// (0x0002aa29) ai_gene_pane_1_g2_ParamLimits

0xaa96,	// (0x0002aa29) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x0002f867) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x0002f867) ai_gene_pane_1_g

0xaaa3,	// (0x0002aa36) ai_gene_pane_1_t1_ParamLimits

0xaaa3,	// (0x0002aa36) ai_gene_pane_1_t1

0xaad7,	// (0x0002aa6a) grid_ai_soft_ind_pane

0xaa75,	// (0x0002aa08) ai_gene_pane_2_t1_ParamLimits

0xaa75,	// (0x0002aa08) ai_gene_pane_2_t1

0x6b67,	// (0x00026afa) main_pane_empty_t1_ParamLimits

0x6b67,	// (0x00026afa) main_pane_empty_t1

0x6b7f,	// (0x00026b12) main_pane_empty_t2_ParamLimits

0x6b7f,	// (0x00026b12) main_pane_empty_t2

0x6b94,	// (0x00026b27) main_pane_empty_t3_ParamLimits

0x6b94,	// (0x00026b27) main_pane_empty_t3

0x6ba6,	// (0x00026b39) main_pane_empty_t4_ParamLimits

0x6ba6,	// (0x00026b39) main_pane_empty_t4

0x6bb8,	// (0x00026b4b) main_pane_empty_t5_ParamLimits

0x6bb8,	// (0x00026b4b) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002f4e2) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002f4e2) main_pane_empty_t

0x1fd8,	// (0x00021f6b) bg_popup_window_pane_ParamLimits

0x1fd8,	// (0x00021f6b) bg_popup_window_pane

0xa7e5,	// (0x0002a778) find_popup_pane_cp2_ParamLimits

0xa7e5,	// (0x0002a778) find_popup_pane_cp2

0xa7f1,	// (0x0002a784) heading_pane_ParamLimits

0xa7f1,	// (0x0002a784) heading_pane

0x19f7,	// (0x0002198a) bg_popup_sub_pane

0xa75f,	// (0x0002a6f2) bg_popup_window_pane_g1_ParamLimits

0xa75f,	// (0x0002a6f2) bg_popup_window_pane_g1

0xa76b,	// (0x0002a6fe) bg_popup_window_pane_g2_ParamLimits

0xa76b,	// (0x0002a6fe) bg_popup_window_pane_g2

0xa777,	// (0x0002a70a) bg_popup_window_pane_g3_ParamLimits

0xa777,	// (0x0002a70a) bg_popup_window_pane_g3

0xa783,	// (0x0002a716) bg_popup_window_pane_g4_ParamLimits

0xa783,	// (0x0002a716) bg_popup_window_pane_g4

0xa78f,	// (0x0002a722) bg_popup_window_pane_g5_ParamLimits

0xa78f,	// (0x0002a722) bg_popup_window_pane_g5

0xa79b,	// (0x0002a72e) bg_popup_window_pane_g6_ParamLimits

0xa79b,	// (0x0002a72e) bg_popup_window_pane_g6

0xa7a7,	// (0x0002a73a) bg_popup_window_pane_g7_ParamLimits

0xa7a7,	// (0x0002a73a) bg_popup_window_pane_g7

0xa7b3,	// (0x0002a746) bg_popup_window_pane_g8_ParamLimits

0xa7b3,	// (0x0002a746) bg_popup_window_pane_g8

0xa7bf,	// (0x0002a752) bg_popup_window_pane_g9_ParamLimits

0xa7bf,	// (0x0002a752) bg_popup_window_pane_g9

0xa7cb,	// (0x0002a75e) bg_popup_window_pane_g10_ParamLimits

0xa7cb,	// (0x0002a75e) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x0002f82f) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x0002f82f) bg_popup_window_pane_g

0xa6f4,	// (0x0002a687) bg_popup_heading_pane_ParamLimits

0xa6f4,	// (0x0002a687) bg_popup_heading_pane

0x909e,	// (0x00029031) tabs_4_passive_pane_cp_srt_ParamLimits

0x909e,	// (0x00029031) tabs_4_passive_pane_cp_srt

0x90b0,	// (0x00029043) tabs_4_passive_pane_srt_ParamLimits

0xa708,	// (0x0002a69b) heading_pane_g2

0x90b0,	// (0x00029043) tabs_4_passive_pane_srt

0x203d,	// (0x00021fd0) bg_passive_tab_pane_cp3_srt_ParamLimits

0x203d,	// (0x00021fd0) bg_passive_tab_pane_cp3_srt

0xa710,	// (0x0002a6a3) heading_pane_t1_ParamLimits

0xa710,	// (0x0002a6a3) heading_pane_t1

0xa727,	// (0x0002a6ba) heading_pane_t2_ParamLimits

0xa727,	// (0x0002a6ba) heading_pane_t2

0x0001,

0xf897,	// (0x0002f82a) heading_pane_t_ParamLimits

0xf897,	// (0x0002f82a) heading_pane_t

0xa231,	// (0x0002a1c4) bg_popup_heading_pane_g1

0xa2e0,	// (0x0002a273) bg_popup_heading_pane_g2

0xa2ea,	// (0x0002a27d) bg_popup_heading_pane_g3

0xa2f4,	// (0x0002a287) bg_popup_heading_pane_g4

0xa2fe,	// (0x0002a291) bg_popup_heading_pane_g5

0xa308,	// (0x0002a29b) bg_popup_heading_pane_g6

0xa310,	// (0x0002a2a3) bg_popup_heading_pane_g7

0xa318,	// (0x0002a2ab) bg_popup_heading_pane_g8

0xa322,	// (0x0002a2b5) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x0002f7e6) bg_popup_heading_pane_g

0x854f,	// (0x000284e2) bg_popup_sub_pane_g1

0x8557,	// (0x000284ea) bg_popup_sub_pane_g2

0x855f,	// (0x000284f2) bg_popup_sub_pane_g3

0x8567,	// (0x000284fa) bg_popup_sub_pane_g4

0x856f,	// (0x00028502) bg_popup_sub_pane_g5

0x8577,	// (0x0002850a) bg_popup_sub_pane_g6

0x857f,	// (0x00028512) bg_popup_sub_pane_g7

0x8587,	// (0x0002851a) bg_popup_sub_pane_g8

0x858f,	// (0x00028522) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x0002f7c0) bg_popup_sub_pane_g

0x1a45,	// (0x000219d8) bg_popup_window_pane_cp5_ParamLimits

0x1a45,	// (0x000219d8) bg_popup_window_pane_cp5

0x1ba5,	// (0x00021b38) popup_note_window_g1_ParamLimits

0x1ba5,	// (0x00021b38) popup_note_window_g1

0x1bb1,	// (0x00021b44) popup_note_window_t1_ParamLimits

0x1bb1,	// (0x00021b44) popup_note_window_t1

0x1bc7,	// (0x00021b5a) popup_note_window_t2_ParamLimits

0x1bc7,	// (0x00021b5a) popup_note_window_t2

0x1bdd,	// (0x00021b70) popup_note_window_t3_ParamLimits

0x1bdd,	// (0x00021b70) popup_note_window_t3

0x1bf3,	// (0x00021b86) popup_note_window_t4_ParamLimits

0x1bf3,	// (0x00021b86) popup_note_window_t4

0x1c1b,	// (0x00021bae) popup_note_window_t5_ParamLimits

0x1c1b,	// (0x00021bae) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002f4ed) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002f4ed) popup_note_window_t

0x1c3f,	// (0x00021bd2) bg_popup_window_pane_cp6_ParamLimits

0x1c3f,	// (0x00021bd2) bg_popup_window_pane_cp6

0x8e0a,	// (0x00028d9d) popup_note_image_window_g1_ParamLimits

0x8e0a,	// (0x00028d9d) popup_note_image_window_g1

0x8e16,	// (0x00028da9) popup_note_image_window_g2_ParamLimits

0x8e16,	// (0x00028da9) popup_note_image_window_g2

0x0001,

0xf821,	// (0x0002f7b4) popup_note_image_window_g_ParamLimits

0xf821,	// (0x0002f7b4) popup_note_image_window_g

0x8e2f,	// (0x00028dc2) popup_note_image_window_t1_ParamLimits

0x8e2f,	// (0x00028dc2) popup_note_image_window_t1

0xa1eb,	// (0x0002a17e) popup_note_image_window_t2_ParamLimits

0xa1eb,	// (0x0002a17e) popup_note_image_window_t2

0xa204,	// (0x0002a197) popup_note_image_window_t3_ParamLimits

0xa204,	// (0x0002a197) popup_note_image_window_t3

0x0002,

0xf826,	// (0x0002f7b9) popup_note_image_window_t_ParamLimits

0xf826,	// (0x0002f7b9) popup_note_image_window_t

0x8cd3,	// (0x00028c66) bg_popup_window_pane_cp7_ParamLimits

0x8cd3,	// (0x00028c66) bg_popup_window_pane_cp7

0x8d03,	// (0x00028c96) popup_note_wait_window_g1_ParamLimits

0x8d03,	// (0x00028c96) popup_note_wait_window_g1

0x8d0f,	// (0x00028ca2) popup_note_wait_window_g2_ParamLimits

0x8d0f,	// (0x00028ca2) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x0002f7a2) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x0002f7a2) popup_note_wait_window_g

0x8d27,	// (0x00028cba) popup_note_wait_window_t1_ParamLimits

0x8d27,	// (0x00028cba) popup_note_wait_window_t1

0x8d4e,	// (0x00028ce1) popup_note_wait_window_t2_ParamLimits

0x8d4e,	// (0x00028ce1) popup_note_wait_window_t2

0x8d6b,	// (0x00028cfe) popup_note_wait_window_t3_ParamLimits

0x8d6b,	// (0x00028cfe) popup_note_wait_window_t3

0x8d7e,	// (0x00028d11) popup_note_wait_window_t4_ParamLimits

0x8d7e,	// (0x00028d11) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x0002f7a9) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x0002f7a9) popup_note_wait_window_t

0x8da3,	// (0x00028d36) wait_bar_pane_ParamLimits

0x8da3,	// (0x00028d36) wait_bar_pane

0x19f7,	// (0x0002198a) wait_anim_pane

0x19f7,	// (0x0002198a) wait_border_pane

0x19ed,	// (0x00021980) wait_anim_pane_g1

0x19ed,	// (0x00021980) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x0002f662) wait_anim_pane_g

0x8c7f,	// (0x00028c12) wait_border_pane_g1

0x8c8a,	// (0x00028c1d) wait_border_pane_g2

0x8c93,	// (0x00028c26) wait_border_pane_g3

0x0002,

0xf808,	// (0x0002f79b) wait_border_pane_g

0x8aea,	// (0x00028a7d) bg_popup_window_pane_cp16_ParamLimits

0x8aea,	// (0x00028a7d) bg_popup_window_pane_cp16

0x8bea,	// (0x00028b7d) indicator_popup_pane_cp4_ParamLimits

0x8bea,	// (0x00028b7d) indicator_popup_pane_cp4

0x8bfe,	// (0x00028b91) popup_query_data_window_t1_ParamLimits

0x8bfe,	// (0x00028b91) popup_query_data_window_t1

0x8c10,	// (0x00028ba3) popup_query_data_window_t2_ParamLimits

0x8c10,	// (0x00028ba3) popup_query_data_window_t2

0x8c29,	// (0x00028bbc) popup_query_data_window_t3_ParamLimits

0x8c29,	// (0x00028bbc) popup_query_data_window_t3

0x0002,

0xf801,	// (0x0002f794) popup_query_data_window_t_ParamLimits

0xf801,	// (0x0002f794) popup_query_data_window_t

0x8c43,	// (0x00028bd6) query_popup_data_pane_ParamLimits

0x8c43,	// (0x00028bd6) query_popup_data_pane

0x8c57,	// (0x00028bea) query_popup_data_pane_cp1_ParamLimits

0x8c57,	// (0x00028bea) query_popup_data_pane_cp1

0x8aea,	// (0x00028a7d) bg_popup_window_pane_cp10_ParamLimits

0x8aea,	// (0x00028a7d) bg_popup_window_pane_cp10

0x8b1c,	// (0x00028aaf) indicator_popup_pane_ParamLimits

0x8b1c,	// (0x00028aaf) indicator_popup_pane

0x8b3e,	// (0x00028ad1) popup_query_code_window_t1_ParamLimits

0x8b3e,	// (0x00028ad1) popup_query_code_window_t1

0x8b58,	// (0x00028aeb) popup_query_code_window_t2_ParamLimits

0x8b58,	// (0x00028aeb) popup_query_code_window_t2

0x8ba1,	// (0x00028b34) popup_query_code_window_t3_ParamLimits

0x8ba1,	// (0x00028b34) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x0002f78d) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x0002f78d) popup_query_code_window_t

0x8bd0,	// (0x00028b63) query_popup_pane_ParamLimits

0x8bd0,	// (0x00028b63) query_popup_pane

0x1c3f,	// (0x00021bd2) bg_popup_window_pane_cp15_ParamLimits

0x1c3f,	// (0x00021bd2) bg_popup_window_pane_cp15

0x6bf2,	// (0x00026b85) indicator_popup_pane_cp1_ParamLimits

0x6bf2,	// (0x00026b85) indicator_popup_pane_cp1

0x6c05,	// (0x00026b98) indicator_popup_pane_cp2_ParamLimits

0x6c05,	// (0x00026b98) indicator_popup_pane_cp2

0x6c18,	// (0x00026bab) popup_query_data_code_window_g1_ParamLimits

0x6c18,	// (0x00026bab) popup_query_data_code_window_g1

0x1c5d,	// (0x00021bf0) popup_query_data_code_window_t1_ParamLimits

0x1c5d,	// (0x00021bf0) popup_query_data_code_window_t1

0x1c6f,	// (0x00021c02) popup_query_data_code_window_t2_ParamLimits

0x1c6f,	// (0x00021c02) popup_query_data_code_window_t2

0x6c2b,	// (0x00026bbe) popup_query_data_code_window_t3_ParamLimits

0x6c2b,	// (0x00026bbe) popup_query_data_code_window_t3

0x6c41,	// (0x00026bd4) popup_query_data_code_window_t4_ParamLimits

0x6c41,	// (0x00026bd4) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002f4f8) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002f4f8) popup_query_data_code_window_t

0x2600,	// (0x00022593) list_single_midp_graphic_pane_g3

0x6c59,	// (0x00026bec) query_popup_data_pane_cp2_ParamLimits

0x6c6c,	// (0x00026bff) query_popup_pane_cp2_ParamLimits

0x6c6c,	// (0x00026bff) query_popup_pane_cp2

0x19f7,	// (0x0002198a) bg_popup_window_pane_cp11

0x8ace,	// (0x00028a61) heading_pane_cp5

0x8ad6,	// (0x00028a69) listscroll_popup_info_pane

0x19f7,	// (0x0002198a) input_focus_pane_cp3

0x1c81,	// (0x00021c14) query_popup_pane_t1

0x1c8f,	// (0x00021c22) list_popup_info_pane_ParamLimits

0x1c8f,	// (0x00021c22) list_popup_info_pane

0x1c9e,	// (0x00021c31) listscroll_popup_info_pane_g1

0x1ca6,	// (0x00021c39) scroll_pane_cp7

0x6c7f,	// (0x00026c12) popup_info_list_pane_t1_ParamLimits

0x6c7f,	// (0x00026c12) popup_info_list_pane_t1

0x6c99,	// (0x00026c2c) popup_info_list_pane_t2_ParamLimits

0x6c99,	// (0x00026c2c) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002f501) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002f501) popup_info_list_pane_t

0x19f7,	// (0x0002198a) bg_popup_window_pane_cp12

0xb1e1,	// (0x0002b174) find_popup_pane

0x1a53,	// (0x000219e6) bg_popup_window_pane_cp3

0x1cb0,	// (0x00021c43) heading_pane_cp3

0x1cbf,	// (0x00021c52) listscroll_popup_graphic_pane

0x19f7,	// (0x0002198a) bg_popup_window_pane_cp4

0x6d03,	// (0x00026c96) heading_pane_cp4

0x1ccf,	// (0x00021c62) listscroll_popup_colour_pane

0x6d0d,	// (0x00026ca0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6d0d,	// (0x00026ca0) cell_large_graphic_colour_none_popup_pane

0x6d21,	// (0x00026cb4) grid_large_graphic_colour_popup_pane_ParamLimits

0x6d21,	// (0x00026cb4) grid_large_graphic_colour_popup_pane

0x6d45,	// (0x00026cd8) listscroll_popup_colour_pane_g1_ParamLimits

0x6d45,	// (0x00026cd8) listscroll_popup_colour_pane_g1

0x6d5c,	// (0x00026cef) listscroll_popup_colour_pane_g2_ParamLimits

0x6d5c,	// (0x00026cef) listscroll_popup_colour_pane_g2

0x6d73,	// (0x00026d06) listscroll_popup_colour_pane_g3_ParamLimits

0x6d73,	// (0x00026d06) listscroll_popup_colour_pane_g3

0x6d83,	// (0x00026d16) listscroll_popup_colour_pane_g4_ParamLimits

0x6d83,	// (0x00026d16) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002f506) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002f506) listscroll_popup_colour_pane_g

0x1cd7,	// (0x00021c6a) scroll_pane_cp6_ParamLimits

0x1cd7,	// (0x00021c6a) scroll_pane_cp6

0x6d93,	// (0x00026d26) cell_large_graphic_colour_popup_pane_ParamLimits

0x6d93,	// (0x00026d26) cell_large_graphic_colour_popup_pane

0x6db2,	// (0x00026d45) cell_large_graphic_colour_none_popup_pane_t1

0x19f7,	// (0x0002198a) grid_highlight_pane_cp5

0x1ce9,	// (0x00021c7c) cell_large_graphic_colour_popup_pane_g1

0x1cf1,	// (0x00021c84) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002f50f) cell_large_graphic_colour_popup_pane_g

0x1cf9,	// (0x00021c8c) cell_large_graphic_colour_popup_pane_g2_copy1

0x1d02,	// (0x00021c95) grid_highlight_pane_cp4

0x1d0a,	// (0x00021c9d) bg_popup_window_pane_cp8_ParamLimits

0x1d0a,	// (0x00021c9d) bg_popup_window_pane_cp8

0x6dc1,	// (0x00026d54) popup_snote_single_text_window_g1_ParamLimits

0x6dc1,	// (0x00026d54) popup_snote_single_text_window_g1

0x6dd3,	// (0x00026d66) popup_snote_single_text_window_t1_ParamLimits

0x6dd3,	// (0x00026d66) popup_snote_single_text_window_t1

0x6de6,	// (0x00026d79) popup_snote_single_text_window_t2_ParamLimits

0x6de6,	// (0x00026d79) popup_snote_single_text_window_t2

0x6df9,	// (0x00026d8c) popup_snote_single_text_window_t3_ParamLimits

0x6df9,	// (0x00026d8c) popup_snote_single_text_window_t3

0x6e32,	// (0x00026dc5) popup_snote_single_text_window_t4_ParamLimits

0x6e32,	// (0x00026dc5) popup_snote_single_text_window_t4

0x6e66,	// (0x00026df9) popup_snote_single_text_window_t5_ParamLimits

0x6e66,	// (0x00026df9) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002f514) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002f514) popup_snote_single_text_window_t

0x1d25,	// (0x00021cb8) bg_popup_window_pane_cp9_ParamLimits

0x1d25,	// (0x00021cb8) bg_popup_window_pane_cp9

0x6dc1,	// (0x00026d54) popup_snote_single_graphic_window_g1_ParamLimits

0x6dc1,	// (0x00026d54) popup_snote_single_graphic_window_g1

0x1d33,	// (0x00021cc6) popup_snote_single_graphic_window_g2_ParamLimits

0x1d33,	// (0x00021cc6) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002f51f) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002f51f) popup_snote_single_graphic_window_g

0x1d3f,	// (0x00021cd2) popup_snote_single_graphic_window_t1_ParamLimits

0x1d3f,	// (0x00021cd2) popup_snote_single_graphic_window_t1

0x1d52,	// (0x00021ce5) popup_snote_single_graphic_window_t2_ParamLimits

0x1d52,	// (0x00021ce5) popup_snote_single_graphic_window_t2

0x6e95,	// (0x00026e28) popup_snote_single_graphic_window_t3_ParamLimits

0x6e95,	// (0x00026e28) popup_snote_single_graphic_window_t3

0x6ece,	// (0x00026e61) popup_snote_single_graphic_window_t4_ParamLimits

0x6ece,	// (0x00026e61) popup_snote_single_graphic_window_t4

0x6f02,	// (0x00026e95) popup_snote_single_graphic_window_t5_ParamLimits

0x6f02,	// (0x00026e95) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002f524) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002f524) popup_snote_single_graphic_window_t

0xb123,	// (0x0002b0b6) grid_graphic_popup_pane_ParamLimits

0xb123,	// (0x0002b0b6) grid_graphic_popup_pane

0xb14d,	// (0x0002b0e0) listscroll_popup_graphic_pane_g1_ParamLimits

0xb14d,	// (0x0002b0e0) listscroll_popup_graphic_pane_g1

0xb161,	// (0x0002b0f4) listscroll_popup_graphic_pane_g2_ParamLimits

0xb161,	// (0x0002b0f4) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x0002f90a) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x0002f90a) listscroll_popup_graphic_pane_g

0xb175,	// (0x0002b108) scroll_pane_cp5

0xb0b9,	// (0x0002b04c) cell_graphic_popup_pane_ParamLimits

0xb0b9,	// (0x0002b04c) cell_graphic_popup_pane

0xb09a,	// (0x0002b02d) cell_graphic_popup_pane_g1

0xb0a2,	// (0x0002b035) cell_graphic_popup_pane_g2

0x1cf9,	// (0x00021c8c) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x0002f903) cell_graphic_popup_pane_g

0xb0ab,	// (0x0002b03e) cell_graphic_popup_pane_t2

0x1d02,	// (0x00021c95) grid_highlight_pane_cp3

0x1d77,	// (0x00021d0a) list_gen_pane_ParamLimits

0x1d77,	// (0x00021d0a) list_gen_pane

0x1d9f,	// (0x00021d32) scroll_pane

0xaff2,	// (0x0002af85) bg_list_pane_g1_ParamLimits

0xaff2,	// (0x0002af85) bg_list_pane_g1

0xb00f,	// (0x0002afa2) bg_list_pane_g2_ParamLimits

0xb00f,	// (0x0002afa2) bg_list_pane_g2

0xb024,	// (0x0002afb7) bg_list_pane_g3_ParamLimits

0xb024,	// (0x0002afb7) bg_list_pane_g3

0xb038,	// (0x0002afcb) bg_list_pane_g4_ParamLimits

0xb038,	// (0x0002afcb) bg_list_pane_g4

0xb04c,	// (0x0002afdf) bg_list_pane_g5_ParamLimits

0xb04c,	// (0x0002afdf) bg_list_pane_g5

0x0004,

0xf965,	// (0x0002f8f8) bg_list_pane_g_ParamLimits

0xf965,	// (0x0002f8f8) bg_list_pane_g

0x5ddc,	// (0x00025d6f) list_double2_graphic_large_graphic_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_double2_graphic_large_graphic_pane

0x5ddc,	// (0x00025d6f) list_double2_graphic_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_double2_graphic_pane

0x5ddc,	// (0x00025d6f) list_double2_large_graphic_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_double2_large_graphic_pane

0x5ddc,	// (0x00025d6f) list_double2_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_double2_pane

0x5ddc,	// (0x00025d6f) list_double_graphic_heading_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_double_graphic_heading_pane

0x5ddc,	// (0x00025d6f) list_double_graphic_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_double_graphic_pane

0x5ddc,	// (0x00025d6f) list_double_heading_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_double_heading_pane

0x5ddc,	// (0x00025d6f) list_double_large_graphic_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_double_large_graphic_pane

0x5ddc,	// (0x00025d6f) list_double_number_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_double_number_pane

0x5ddc,	// (0x00025d6f) list_double_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_double_pane

0x5ddc,	// (0x00025d6f) list_double_time_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_double_time_pane

0x5ddc,	// (0x00025d6f) list_setting_number_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_setting_number_pane

0x5ddc,	// (0x00025d6f) list_setting_pane_ParamLimits

0x5ddc,	// (0x00025d6f) list_setting_pane

0x5e3c,	// (0x00025dcf) list_single_2graphic_pane_ParamLimits

0x5e3c,	// (0x00025dcf) list_single_2graphic_pane

0x5e3c,	// (0x00025dcf) list_single_graphic_heading_pane_ParamLimits

0x5e3c,	// (0x00025dcf) list_single_graphic_heading_pane

0x5e3c,	// (0x00025dcf) list_single_graphic_pane_ParamLimits

0x5e3c,	// (0x00025dcf) list_single_graphic_pane

0x5e3c,	// (0x00025dcf) list_single_heading_pane_ParamLimits

0x5e3c,	// (0x00025dcf) list_single_heading_pane

0xafcf,	// (0x0002af62) list_single_large_graphic_pane_ParamLimits

0xafcf,	// (0x0002af62) list_single_large_graphic_pane

0x5e3c,	// (0x00025dcf) list_single_number_heading_pane_ParamLimits

0x5e3c,	// (0x00025dcf) list_single_number_heading_pane

0x5e3c,	// (0x00025dcf) list_single_number_pane_ParamLimits

0x5e3c,	// (0x00025dcf) list_single_number_pane

0x5e3c,	// (0x00025dcf) list_single_pane_ParamLimits

0x5e3c,	// (0x00025dcf) list_single_pane

0x19f7,	// (0x0002198a) list_highlight_pane_cp1

0x552e,	// (0x000254c1) list_single_pane_g1_ParamLimits

0x552e,	// (0x000254c1) list_single_pane_g1

0x553a,	// (0x000254cd) list_single_pane_g2_ParamLimits

0x553a,	// (0x000254cd) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002f536) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002f536) list_single_pane_g

0x5dc6,	// (0x00025d59) list_single_pane_t1_ParamLimits

0x5dc6,	// (0x00025d59) list_single_pane_t1

0x552e,	// (0x000254c1) list_single_number_pane_g1_ParamLimits

0x552e,	// (0x000254c1) list_single_number_pane_g1

0x553a,	// (0x000254cd) list_single_number_pane_g2_ParamLimits

0x553a,	// (0x000254cd) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002f536) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002f536) list_single_number_pane_g

0x5546,	// (0x000254d9) list_single_number_pane_t1_ParamLimits

0x5546,	// (0x000254d9) list_single_number_pane_t1

0x5d88,	// (0x00025d1b) list_single_number_pane_t2_ParamLimits

0x5d88,	// (0x00025d1b) list_single_number_pane_t2

0x0001,

0xf926,	// (0x0002f8b9) list_single_number_pane_t_ParamLimits

0xf926,	// (0x0002f8b9) list_single_number_pane_t

0x5522,	// (0x000254b5) list_single_graphic_pane_g1_ParamLimits

0x5522,	// (0x000254b5) list_single_graphic_pane_g1

0x552e,	// (0x000254c1) list_single_graphic_pane_g2_ParamLimits

0x552e,	// (0x000254c1) list_single_graphic_pane_g2

0x553a,	// (0x000254cd) list_single_graphic_pane_g3_ParamLimits

0x553a,	// (0x000254cd) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002f52f) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002f52f) list_single_graphic_pane_g

0x5546,	// (0x000254d9) list_single_graphic_pane_t1_ParamLimits

0x5546,	// (0x000254d9) list_single_graphic_pane_t1

0x552e,	// (0x000254c1) list_single_heading_pane_g1_ParamLimits

0x552e,	// (0x000254c1) list_single_heading_pane_g1

0x553a,	// (0x000254cd) list_single_heading_pane_g2_ParamLimits

0x553a,	// (0x000254cd) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002f536) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002f536) list_single_heading_pane_g

0x555c,	// (0x000254ef) list_single_heading_pane_t1_ParamLimits

0x555c,	// (0x000254ef) list_single_heading_pane_t1

0x5572,	// (0x00025505) list_single_heading_pane_t2_ParamLimits

0x5572,	// (0x00025505) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002f53b) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002f53b) list_single_heading_pane_t

0x552e,	// (0x000254c1) list_single_number_heading_pane_g1_ParamLimits

0x552e,	// (0x000254c1) list_single_number_heading_pane_g1

0x553a,	// (0x000254cd) list_single_number_heading_pane_g2_ParamLimits

0x553a,	// (0x000254cd) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002f536) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002f536) list_single_number_heading_pane_g

0x555c,	// (0x000254ef) list_single_number_heading_pane_t1_ParamLimits

0x555c,	// (0x000254ef) list_single_number_heading_pane_t1

0x5584,	// (0x00025517) list_single_number_heading_pane_t2_ParamLimits

0x5584,	// (0x00025517) list_single_number_heading_pane_t2

0x5596,	// (0x00025529) list_single_number_heading_pane_t3_ParamLimits

0x5596,	// (0x00025529) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002f540) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002f540) list_single_number_heading_pane_t

0x55a8,	// (0x0002553b) list_single_graphic_heading_pane_g1_ParamLimits

0x55a8,	// (0x0002553b) list_single_graphic_heading_pane_g1

0x55b4,	// (0x00025547) list_single_graphic_heading_pane_g4_ParamLimits

0x55b4,	// (0x00025547) list_single_graphic_heading_pane_g4

0x553a,	// (0x000254cd) list_single_graphic_heading_pane_g5_ParamLimits

0x553a,	// (0x000254cd) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002f547) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002f547) list_single_graphic_heading_pane_g

0x555c,	// (0x000254ef) list_single_graphic_heading_pane_t1_ParamLimits

0x555c,	// (0x000254ef) list_single_graphic_heading_pane_t1

0x55c5,	// (0x00025558) list_single_graphic_heading_pane_t2_ParamLimits

0x55c5,	// (0x00025558) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002f54e) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002f54e) list_single_graphic_heading_pane_t

0x55d7,	// (0x0002556a) list_single_large_graphic_pane_g1_ParamLimits

0x55d7,	// (0x0002556a) list_single_large_graphic_pane_g1

0x55e3,	// (0x00025576) list_single_large_graphic_pane_g2_ParamLimits

0x55e3,	// (0x00025576) list_single_large_graphic_pane_g2

0x55ef,	// (0x00025582) list_single_large_graphic_pane_g3_ParamLimits

0x55ef,	// (0x00025582) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002f553) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002f553) list_single_large_graphic_pane_g

0x8c8a,	// (0x00028c1d) wait_border_pane_g2_copy1

0x55fb,	// (0x0002558e) list_single_large_graphic_pane_g4_cp2

0x5603,	// (0x00025596) list_single_large_graphic_pane_t1_ParamLimits

0x5603,	// (0x00025596) list_single_large_graphic_pane_t1

0x5619,	// (0x000255ac) list_double_pane_g1_ParamLimits

0x5619,	// (0x000255ac) list_double_pane_g1

0x5625,	// (0x000255b8) list_double_pane_g2_ParamLimits

0x5625,	// (0x000255b8) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002f55a) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002f55a) list_double_pane_g

0x5631,	// (0x000255c4) list_double_pane_t1_ParamLimits

0x5631,	// (0x000255c4) list_double_pane_t1

0x5647,	// (0x000255da) list_double_pane_t2_ParamLimits

0x5647,	// (0x000255da) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002f55f) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002f55f) list_double_pane_t

0x5659,	// (0x000255ec) list_double2_pane_g1_ParamLimits

0x5659,	// (0x000255ec) list_double2_pane_g1

0x5625,	// (0x000255b8) list_double2_pane_g2_ParamLimits

0x5625,	// (0x000255b8) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002f564) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002f564) list_double2_pane_g

0x5631,	// (0x000255c4) list_double2_pane_t1_ParamLimits

0x5631,	// (0x000255c4) list_double2_pane_t1

0x566a,	// (0x000255fd) list_double2_pane_t2_ParamLimits

0x566a,	// (0x000255fd) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002f569) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002f569) list_double2_pane_t

0x5619,	// (0x000255ac) list_double_number_pane_g1_ParamLimits

0x5619,	// (0x000255ac) list_double_number_pane_g1

0x5625,	// (0x000255b8) list_double_number_pane_g2_ParamLimits

0x5625,	// (0x000255b8) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002f55a) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002f55a) list_double_number_pane_g

0x567c,	// (0x0002560f) list_double_number_pane_t1_ParamLimits

0x567c,	// (0x0002560f) list_double_number_pane_t1

0x568e,	// (0x00025621) list_double_number_pane_t2_ParamLimits

0x568e,	// (0x00025621) list_double_number_pane_t2

0x56a4,	// (0x00025637) list_double_number_pane_t3_ParamLimits

0x56a4,	// (0x00025637) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002f56e) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002f56e) list_double_number_pane_t

0x56b6,	// (0x00025649) list_double_graphic_pane_g1_ParamLimits

0x56b6,	// (0x00025649) list_double_graphic_pane_g1

0x56c2,	// (0x00025655) list_double_graphic_pane_g2_ParamLimits

0x56c2,	// (0x00025655) list_double_graphic_pane_g2

0x56d1,	// (0x00025664) list_double_graphic_pane_g3_ParamLimits

0x56d1,	// (0x00025664) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002f575) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002f575) list_double_graphic_pane_g

0x568e,	// (0x00025621) list_double_graphic_pane_t1_ParamLimits

0x568e,	// (0x00025621) list_double_graphic_pane_t1

0x56a4,	// (0x00025637) list_double_graphic_pane_t2_ParamLimits

0x56a4,	// (0x00025637) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002f57e) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002f57e) list_double_graphic_pane_t

0x56b6,	// (0x00025649) list_double2_graphic_pane_g1_ParamLimits

0x56b6,	// (0x00025649) list_double2_graphic_pane_g1

0x56e9,	// (0x0002567c) list_double2_graphic_pane_g2_ParamLimits

0x56e9,	// (0x0002567c) list_double2_graphic_pane_g2

0x56f5,	// (0x00025688) list_double2_graphic_pane_g3_ParamLimits

0x56f5,	// (0x00025688) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002f583) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002f583) list_double2_graphic_pane_g

0x568e,	// (0x00025621) list_double2_graphic_pane_t1_ParamLimits

0x568e,	// (0x00025621) list_double2_graphic_pane_t1

0x5701,	// (0x00025694) list_double2_graphic_pane_t2_ParamLimits

0x5701,	// (0x00025694) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002f58a) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002f58a) list_double2_graphic_pane_t

0x5713,	// (0x000256a6) list_double_large_graphic_pane_g1_ParamLimits

0x5713,	// (0x000256a6) list_double_large_graphic_pane_g1

0x5659,	// (0x000255ec) list_double_large_graphic_pane_g2_ParamLimits

0x5659,	// (0x000255ec) list_double_large_graphic_pane_g2

0x5625,	// (0x000255b8) list_double_large_graphic_pane_g3_ParamLimits

0x5625,	// (0x000255b8) list_double_large_graphic_pane_g3

0x5726,	// (0x000256b9) list_double_large_graphic_pane_g4_ParamLimits

0x5726,	// (0x000256b9) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002f58f) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002f58f) list_double_large_graphic_pane_g

0x574d,	// (0x000256e0) list_double_large_graphic_pane_t1_ParamLimits

0x574d,	// (0x000256e0) list_double_large_graphic_pane_t1

0x5766,	// (0x000256f9) list_double_large_graphic_pane_t2_ParamLimits

0x5766,	// (0x000256f9) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002f59a) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002f59a) list_double_large_graphic_pane_t

0x5778,	// (0x0002570b) list_double2_large_graphic_pane_g1_ParamLimits

0x5778,	// (0x0002570b) list_double2_large_graphic_pane_g1

0x5659,	// (0x000255ec) list_double2_large_graphic_pane_g2_ParamLimits

0x5659,	// (0x000255ec) list_double2_large_graphic_pane_g2

0x5625,	// (0x000255b8) list_double2_large_graphic_pane_g3_ParamLimits

0x5625,	// (0x000255b8) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002f59f) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002f59f) list_double2_large_graphic_pane_g

0x568e,	// (0x00025621) list_double2_large_graphic_pane_t1_ParamLimits

0x568e,	// (0x00025621) list_double2_large_graphic_pane_t1

0x5701,	// (0x00025694) list_double2_large_graphic_pane_t2_ParamLimits

0x5701,	// (0x00025694) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002f58a) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002f58a) list_double2_large_graphic_pane_t

0x5784,	// (0x00025717) list_double_heading_pane_g1_ParamLimits

0x5784,	// (0x00025717) list_double_heading_pane_g1

0x5795,	// (0x00025728) list_double_heading_pane_g2_ParamLimits

0x5795,	// (0x00025728) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0002f5a6) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0002f5a6) list_double_heading_pane_g

0x57a1,	// (0x00025734) list_double_heading_pane_t1_ParamLimits

0x57a1,	// (0x00025734) list_double_heading_pane_t1

0x5701,	// (0x00025694) list_double_heading_pane_t2_ParamLimits

0x5701,	// (0x00025694) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0002f5ab) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0002f5ab) list_double_heading_pane_t

0x57b7,	// (0x0002574a) list_double_graphic_heading_pane_g1_ParamLimits

0x57b7,	// (0x0002574a) list_double_graphic_heading_pane_g1

0x5784,	// (0x00025717) list_double_graphic_heading_pane_g2_ParamLimits

0x5784,	// (0x00025717) list_double_graphic_heading_pane_g2

0x5795,	// (0x00025728) list_double_graphic_heading_pane_g3_ParamLimits

0x5795,	// (0x00025728) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0002f5b0) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002f5b0) list_double_graphic_heading_pane_g

0x57a1,	// (0x00025734) list_double_graphic_heading_pane_t1_ParamLimits

0x57a1,	// (0x00025734) list_double_graphic_heading_pane_t1

0x5701,	// (0x00025694) list_double_graphic_heading_pane_t2_ParamLimits

0x5701,	// (0x00025694) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0002f5ab) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0002f5ab) list_double_graphic_heading_pane_t

0x5659,	// (0x000255ec) list_double_time_pane_g1_ParamLimits

0x5659,	// (0x000255ec) list_double_time_pane_g1

0x5625,	// (0x000255b8) list_double_time_pane_g2_ParamLimits

0x5625,	// (0x000255b8) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x0002f564) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x0002f564) list_double_time_pane_g

0x57c3,	// (0x00025756) list_double_time_pane_t1_ParamLimits

0x57c3,	// (0x00025756) list_double_time_pane_t1

0x57d9,	// (0x0002576c) list_double_time_pane_t2_ParamLimits

0x57d9,	// (0x0002576c) list_double_time_pane_t2

0x57eb,	// (0x0002577e) list_double_time_pane_t3_ParamLimits

0x57eb,	// (0x0002577e) list_double_time_pane_t3

0x57fd,	// (0x00025790) list_double_time_pane_t4_ParamLimits

0x57fd,	// (0x00025790) list_double_time_pane_t4

0x0003,

0xf624,	// (0x0002f5b7) list_double_time_pane_t_ParamLimits

0xf624,	// (0x0002f5b7) list_double_time_pane_t

0x580f,	// (0x000257a2) list_setting_pane_g1_ParamLimits

0x580f,	// (0x000257a2) list_setting_pane_g1

0x581b,	// (0x000257ae) list_setting_pane_g2_ParamLimits

0x581b,	// (0x000257ae) list_setting_pane_g2

0x0001,

0xf62d,	// (0x0002f5c0) list_setting_pane_g_ParamLimits

0xf62d,	// (0x0002f5c0) list_setting_pane_g

0x5827,	// (0x000257ba) list_setting_pane_t1_ParamLimits

0x5827,	// (0x000257ba) list_setting_pane_t1

0x583e,	// (0x000257d1) list_setting_pane_t2_ParamLimits

0x583e,	// (0x000257d1) list_setting_pane_t2

0x0002,

0xf632,	// (0x0002f5c5) list_setting_pane_t_ParamLimits

0xf632,	// (0x0002f5c5) list_setting_pane_t

0x587b,	// (0x0002580e) set_value_pane_cp_ParamLimits

0x587b,	// (0x0002580e) set_value_pane_cp

0x5887,	// (0x0002581a) list_setting_number_pane_g1_ParamLimits

0x5887,	// (0x0002581a) list_setting_number_pane_g1

0x5893,	// (0x00025826) list_setting_number_pane_g2_ParamLimits

0x5893,	// (0x00025826) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x0002f5cc) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x0002f5cc) list_setting_number_pane_g

0x589f,	// (0x00025832) list_setting_number_pane_t1_ParamLimits

0x589f,	// (0x00025832) list_setting_number_pane_t1

0x58b3,	// (0x00025846) list_setting_number_pane_t2_ParamLimits

0x58b3,	// (0x00025846) list_setting_number_pane_t2

0x58ca,	// (0x0002585d) list_setting_number_pane_t3_ParamLimits

0x58ca,	// (0x0002585d) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x0002f5d1) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x0002f5d1) list_setting_number_pane_t

0x587b,	// (0x0002580e) set_value_pane_ParamLimits

0x587b,	// (0x0002580e) set_value_pane

0x1e0c,	// (0x00021d9f) bg_set_opt_pane_ParamLimits

0x1e0c,	// (0x00021d9f) bg_set_opt_pane

0x590d,	// (0x000258a0) set_value_pane_t1

0x1e3b,	// (0x00021dce) slider_set_pane_cp3

0x6f3b,	// (0x00026ece) volume_small_pane_cp

0x1e44,	// (0x00021dd7) list_form_gen_pane

0x1e4d,	// (0x00021de0) scroll_pane_cp8

0x5923,	// (0x000258b6) form_field_data_pane_ParamLimits

0x5923,	// (0x000258b6) form_field_data_pane

0x5943,	// (0x000258d6) form_field_data_wide_pane_ParamLimits

0x5943,	// (0x000258d6) form_field_data_wide_pane

0x5964,	// (0x000258f7) form_field_popup_pane_ParamLimits

0x5964,	// (0x000258f7) form_field_popup_pane

0x5982,	// (0x00025915) form_field_popup_wide_pane_ParamLimits

0x5982,	// (0x00025915) form_field_popup_wide_pane

0x599f,	// (0x00025932) form_field_slider_pane_ParamLimits

0x599f,	// (0x00025932) form_field_slider_pane

0x59b2,	// (0x00025945) form_field_slider_wide_pane_ParamLimits

0x59b2,	// (0x00025945) form_field_slider_wide_pane

0x1e81,	// (0x00021e14) data_form_pane

0x59cf,	// (0x00025962) form_field_data_pane_t1

0x1e8d,	// (0x00021e20) input_focus_pane

0x59e7,	// (0x0002597a) data_form_wide_pane

0x5a04,	// (0x00025997) form_field_data_wide_pane_t1

0x1d17,	// (0x00021caa) input_focus_pane_cp6

0x5a26,	// (0x000259b9) form_field_popup_pane_t1

0x1e8d,	// (0x00021e20) input_focus_pane_cp7

0x1efa,	// (0x00021e8d) list_form_pane

0x5a46,	// (0x000259d9) form_field_popup_wide_pane_t1

0x1e8d,	// (0x00021e20) input_focus_pane_cp8

0x1f23,	// (0x00021eb6) list_form_wide_pane

0x5a63,	// (0x000259f6) form_field_slider_pane_t1_ParamLimits

0x5a63,	// (0x000259f6) form_field_slider_pane_t1

0x5a79,	// (0x00025a0c) form_field_slider_pane_t2_ParamLimits

0x5a79,	// (0x00025a0c) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x0002f5e1) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x0002f5e1) form_field_slider_pane_t

0x1a45,	// (0x000219d8) input_focus_pane_cp9_ParamLimits

0x1a45,	// (0x000219d8) input_focus_pane_cp9

0x5a8e,	// (0x00025a21) slider_cont_pane_ParamLimits

0x5a8e,	// (0x00025a21) slider_cont_pane

0x1f2f,	// (0x00021ec2) form_field_slider_wide_pane_t1_ParamLimits

0x1f2f,	// (0x00021ec2) form_field_slider_wide_pane_t1

0x5aa2,	// (0x00025a35) form_field_slider_wide_pane_t2_ParamLimits

0x5aa2,	// (0x00025a35) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x0002f5e6) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x0002f5e6) form_field_slider_wide_pane_t

0x1a45,	// (0x000219d8) input_focus_pane_cp10_ParamLimits

0x1a45,	// (0x000219d8) input_focus_pane_cp10

0x5ab4,	// (0x00025a47) slider_cont_pane_cp1_ParamLimits

0x5ab4,	// (0x00025a47) slider_cont_pane_cp1

0x5ac8,	// (0x00025a5b) slider_form_pane_cp

0x1f53,	// (0x00021ee6) input_focus_pane_g1

0x1f5b,	// (0x00021eee) input_focus_pane_g2

0x1f63,	// (0x00021ef6) input_focus_pane_g3

0x1f6b,	// (0x00021efe) input_focus_pane_g4

0x1f73,	// (0x00021f06) input_focus_pane_g5

0x1f7b,	// (0x00021f0e) input_focus_pane_g6

0x1f83,	// (0x00021f16) input_focus_pane_g7

0x1f8b,	// (0x00021f1e) input_focus_pane_g8

0x1f93,	// (0x00021f26) input_focus_pane_g9

0x19ed,	// (0x00021980) input_focus_pane_g10

0x0009,

0xf658,	// (0x0002f5eb) input_focus_pane_g

0x8c93,	// (0x00028c26) wait_border_pane_g3_copy1

0x5ad0,	// (0x00025a63) data_form_pane_t1

0x19ed,	// (0x00021980) wait_anim_pane_g1_copy1

0x5d9a,	// (0x00025d2d) data_form_wide_pane_t1

0x5aeb,	// (0x00025a7e) list_form_graphic_pane_cp_ParamLimits

0x5aeb,	// (0x00025a7e) list_form_graphic_pane_cp

0xaf25,	// (0x0002aeb8) slider_form_pane_g1

0xaf2e,	// (0x0002aec1) slider_form_pane_g2

0x0006,

0xf956,	// (0x0002f8e9) slider_form_pane_g

0x5aff,	// (0x00025a92) list_form_graphic_pane_ParamLimits

0x5aff,	// (0x00025a92) list_form_graphic_pane

0x5b16,	// (0x00025aa9) list_form_graphic_pane_g1

0x5b1e,	// (0x00025ab1) list_form_graphic_pane_t1_ParamLimits

0x5b1e,	// (0x00025ab1) list_form_graphic_pane_t1

0x1a53,	// (0x000219e6) list_highlight_pane_cp5_ParamLimits

0x1a53,	// (0x000219e6) list_highlight_pane_cp5

0x5b33,	// (0x00025ac6) find_pane_g1

0x1f9b,	// (0x00021f2e) input_find_pane

0x5b3c,	// (0x00025acf) input_find_pane_g1_ParamLimits

0x5b3c,	// (0x00025acf) input_find_pane_g1

0x5b48,	// (0x00025adb) input_find_pane_t1_ParamLimits

0x5b48,	// (0x00025adb) input_find_pane_t1

0x5b5d,	// (0x00025af0) input_find_pane_t2_ParamLimits

0x5b5d,	// (0x00025af0) input_find_pane_t2

0x0001,

0xf66d,	// (0x0002f600) input_find_pane_t_ParamLimits

0xf66d,	// (0x0002f600) input_find_pane_t

0x1fa4,	// (0x00021f37) input_focus_pane_cp5_ParamLimits

0x1fa4,	// (0x00021f37) input_focus_pane_cp5

0x1fb7,	// (0x00021f4a) bg_popup_window_pane_cp2_ParamLimits

0x1fb7,	// (0x00021f4a) bg_popup_window_pane_cp2

0x1fc4,	// (0x00021f57) listscroll_menu_pane_ParamLimits

0x1fc4,	// (0x00021f57) listscroll_menu_pane

0x6f50,	// (0x00026ee3) popup_submenu_window_ParamLimits

0x6f50,	// (0x00026ee3) popup_submenu_window

0x1fd0,	// (0x00021f63) find_popup_pane_g1

0x6f78,	// (0x00026f0b) input_popup_find_pane_cp

0x1fd8,	// (0x00021f6b) input_focus_pane_cp4_ParamLimits

0x1fd8,	// (0x00021f6b) input_focus_pane_cp4

0x1fe6,	// (0x00021f79) input_popup_find_pane_t1_ParamLimits

0x1fe6,	// (0x00021f79) input_popup_find_pane_t1

0x19f7,	// (0x0002198a) bg_popup_sub_pane_cp

0x2014,	// (0x00021fa7) listscroll_popup_sub_pane

0x201c,	// (0x00021faf) list_submenu_pane_ParamLimits

0x201c,	// (0x00021faf) list_submenu_pane

0x202d,	// (0x00021fc0) scroll_pane_cp4

0x6f90,	// (0x00026f23) list_single_popup_submenu_pane_ParamLimits

0x6f90,	// (0x00026f23) list_single_popup_submenu_pane

0x295b,	// (0x000228ee) list_single_popup_submenu_pane_g1

0x6fa4,	// (0x00026f37) list_single_popup_submenu_pane_t1_ParamLimits

0x6fa4,	// (0x00026f37) list_single_popup_submenu_pane_t1

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp1_ParamLimits

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp1

0x2035,	// (0x00021fc8) tabs_2_active_pane_g1

0x6fb9,	// (0x00026f4c) tabs_2_active_pane_t1

0x1a53,	// (0x000219e6) bg_passive_tab_pane_cp1_ParamLimits

0x1a53,	// (0x000219e6) bg_passive_tab_pane_cp1

0x2035,	// (0x00021fc8) tabs_2_passive_pane_g1

0x6fb9,	// (0x00026f4c) tabs_2_passive_pane_t1

0x6fcb,	// (0x00026f5e) bg_active_tab_pane_cp4

0x6fd9,	// (0x00026f6c) tabs_2_long_active_pane_t1

0x6fec,	// (0x00026f7f) bg_passive_tab_pane_cp4

0x85bc,	// (0x0002854f) list_single_midp_graphic_pane_g4_ParamLimits

0x6fcb,	// (0x00026f5e) bg_active_tab_pane_cp5

0x6ff8,	// (0x00026f8b) tabs_3_long_active_pane_t1

0x6fec,	// (0x00026f7f) bg_passive_tab_pane_cp5

0x85bc,	// (0x0002854f) list_single_midp_graphic_pane_g4

0x1a53,	// (0x000219e6) bg_popup_window_pane_cp13_ParamLimits

0x1a53,	// (0x000219e6) bg_popup_window_pane_cp13

0x2049,	// (0x00021fdc) listscroll_popup_fast_pane_ParamLimits

0x2049,	// (0x00021fdc) listscroll_popup_fast_pane

0x2055,	// (0x00021fe8) grid_popup_fast_pane_ParamLimits

0x2055,	// (0x00021fe8) grid_popup_fast_pane

0x2067,	// (0x00021ffa) scroll_pane_cp9_ParamLimits

0x2067,	// (0x00021ffa) scroll_pane_cp9

0xc85e,	// (0x0002c7f1) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc85e,	// (0x0002c7f1) list_single_graphic_hl_pane_t1_cp2

0x207a,	// (0x0002200d) input_focus_pane_cp20_ParamLimits

0x207a,	// (0x0002200d) input_focus_pane_cp20

0x2088,	// (0x0002201b) query_popup_data_pane_t1_ParamLimits

0x2088,	// (0x0002201b) query_popup_data_pane_t1

0x209b,	// (0x0002202e) query_popup_data_pane_t2_ParamLimits

0x209b,	// (0x0002202e) query_popup_data_pane_t2

0x20e1,	// (0x00022074) query_popup_data_pane_t3_ParamLimits

0x20e1,	// (0x00022074) query_popup_data_pane_t3

0x2122,	// (0x000220b5) query_popup_data_pane_t4_ParamLimits

0x2122,	// (0x000220b5) query_popup_data_pane_t4

0x215e,	// (0x000220f1) query_popup_data_pane_t5_ParamLimits

0x215e,	// (0x000220f1) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x0002f605) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x0002f605) query_popup_data_pane_t

0x1f53,	// (0x00021ee6) bg_set_opt_pane_g1

0x1f5b,	// (0x00021eee) bg_set_opt_pane_g2

0x1f63,	// (0x00021ef6) bg_set_opt_pane_g3

0x1f6b,	// (0x00021efe) bg_set_opt_pane_g4

0x1f73,	// (0x00021f06) bg_set_opt_pane_g5

0x1f7b,	// (0x00021f0e) bg_set_opt_pane_g6

0x1f83,	// (0x00021f16) bg_set_opt_pane_g7

0x1f8b,	// (0x00021f1e) bg_set_opt_pane_g8

0x1f93,	// (0x00021f26) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x0002f610) bg_set_opt_pane_g

0x74f9,	// (0x0002748c) control_top_pane_stacon_ParamLimits

0x74f9,	// (0x0002748c) control_top_pane_stacon

0x754c,	// (0x000274df) signal_pane_stacon_ParamLimits

0x754c,	// (0x000274df) signal_pane_stacon

0x24ea,	// (0x0002247d) stacon_top_pane_g1_ParamLimits

0x24ea,	// (0x0002247d) stacon_top_pane_g1

0x7571,	// (0x00027504) title_pane_stacon_ParamLimits

0x7571,	// (0x00027504) title_pane_stacon

0x759b,	// (0x0002752e) uni_indicator_pane_stacon_ParamLimits

0x759b,	// (0x0002752e) uni_indicator_pane_stacon

0x75b0,	// (0x00027543) battery_pane_stacon_ParamLimits

0x75b0,	// (0x00027543) battery_pane_stacon

0x75f4,	// (0x00027587) control_bottom_pane_stacon_ParamLimits

0x75f4,	// (0x00027587) control_bottom_pane_stacon

0x7617,	// (0x000275aa) navi_pane_stacon_ParamLimits

0x7617,	// (0x000275aa) navi_pane_stacon

0x250c,	// (0x0002249f) stacon_bottom_pane_g1_ParamLimits

0x250c,	// (0x0002249f) stacon_bottom_pane_g1

0x7024,	// (0x00026fb7) aid_levels_signal_lsc_ParamLimits

0x7024,	// (0x00026fb7) aid_levels_signal_lsc

0x703a,	// (0x00026fcd) signal_pane_stacon_g1_ParamLimits

0x703a,	// (0x00026fcd) signal_pane_stacon_g1

0x704e,	// (0x00026fe1) signal_pane_stacon_g2_ParamLimits

0x704e,	// (0x00026fe1) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x0002f623) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x0002f623) signal_pane_stacon_g

0x7083,	// (0x00027016) title_pane_stacon_t1_ParamLimits

0x7083,	// (0x00027016) title_pane_stacon_t1

0x21b6,	// (0x00022149) uni_indicator_pane_stacon_g1

0x21c0,	// (0x00022153) uni_indicator_pane_stacon_g2

0x21a2,	// (0x00022135) uni_indicator_pane_stacon_g3

0x21ac,	// (0x0002213f) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x0002f62f) uni_indicator_pane_stacon_g

0x70a8,	// (0x0002703b) control_top_pane_stacon_g1

0x70b0,	// (0x00027043) control_top_pane_stacon_t1_ParamLimits

0x70b0,	// (0x00027043) control_top_pane_stacon_t1

0x70e7,	// (0x0002707a) aid_levels_battery_lsc_ParamLimits

0x70e7,	// (0x0002707a) aid_levels_battery_lsc

0x70fe,	// (0x00027091) battery_pane_stacon_g1_ParamLimits

0x70fe,	// (0x00027091) battery_pane_stacon_g1

0x7111,	// (0x000270a4) battery_pane_stacon_g2_ParamLimits

0x7111,	// (0x000270a4) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x0002f638) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x0002f638) battery_pane_stacon_g

0x714f,	// (0x000270e2) navi_icon_pane_stacon

0x7163,	// (0x000270f6) navi_navi_pane_stacon

0x714f,	// (0x000270e2) navi_text_pane_stacon

0x70a8,	// (0x0002703b) control_bottom_pane_stacon_g1

0x7177,	// (0x0002710a) control_bottom_pane_stacon_t1_ParamLimits

0x7177,	// (0x0002710a) control_bottom_pane_stacon_t1

0x71ae,	// (0x00027141) grid_app_pane_ParamLimits

0x71ae,	// (0x00027141) grid_app_pane

0x71d0,	// (0x00027163) scroll_pane_cp15_ParamLimits

0x71d0,	// (0x00027163) scroll_pane_cp15

0x71e3,	// (0x00027176) cell_app_pane_ParamLimits

0x71e3,	// (0x00027176) cell_app_pane

0x720b,	// (0x0002719e) cell_app_pane_g1_ParamLimits

0x720b,	// (0x0002719e) cell_app_pane_g1

0x21e4,	// (0x00022177) cell_app_pane_g2_ParamLimits

0x21e4,	// (0x00022177) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x0002f63d) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x0002f63d) cell_app_pane_g

0x722f,	// (0x000271c2) cell_app_pane_t1_ParamLimits

0x722f,	// (0x000271c2) cell_app_pane_t1

0x21f0,	// (0x00022183) grid_highlight_pane_ParamLimits

0x21f0,	// (0x00022183) grid_highlight_pane

0x1f53,	// (0x00021ee6) cell_highlight_pane_g1

0x1f5b,	// (0x00021eee) cell_highlight_pane_g2

0x1f63,	// (0x00021ef6) cell_highlight_pane_g3

0x1f6b,	// (0x00021efe) cell_highlight_pane_g4

0x1f73,	// (0x00021f06) cell_highlight_pane_g5

0x1f7b,	// (0x00021f0e) cell_highlight_pane_g6

0x1f83,	// (0x00021f16) cell_highlight_pane_g7

0x1f8b,	// (0x00021f1e) cell_highlight_pane_g8

0x1f93,	// (0x00021f26) cell_highlight_pane_g9

0x19ed,	// (0x00021980) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x0002f5eb) cell_highlight_pane_g

0x2201,	// (0x00022194) bg_scroll_pane

0x7259,	// (0x000271ec) scroll_handle_pane

0x2248,	// (0x000221db) scroll_bg_pane_g1

0x225d,	// (0x000221f0) scroll_bg_pane_g2

0x2275,	// (0x00022208) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x0002f642) scroll_bg_pane_g

0x7282,	// (0x00027215) scroll_handle_focus_pane_ParamLimits

0x7282,	// (0x00027215) scroll_handle_focus_pane

0x2248,	// (0x000221db) scroll_handle_pane_g1

0x228a,	// (0x0002221d) scroll_handle_pane_g2

0x2275,	// (0x00022208) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x0002f649) scroll_handle_pane_g

0x1fd8,	// (0x00021f6b) bg_popup_sub_pane_cp21_ParamLimits

0x1fd8,	// (0x00021f6b) bg_popup_sub_pane_cp21

0x728f,	// (0x00027222) popup_fep_japan_predictive_window_t1_ParamLimits

0x728f,	// (0x00027222) popup_fep_japan_predictive_window_t1

0x72a9,	// (0x0002723c) popup_fep_japan_predictive_window_t2_ParamLimits

0x72a9,	// (0x0002723c) popup_fep_japan_predictive_window_t2

0x72dc,	// (0x0002726f) popup_fep_japan_predictive_window_t3_ParamLimits

0x72dc,	// (0x0002726f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x0002f650) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x0002f650) popup_fep_japan_predictive_window_t

0x19f7,	// (0x0002198a) bg_popup_sub_pane_cp23

0x2988,	// (0x0002291b) listscroll_japin_cand_pane

0x229e,	// (0x00022231) popup_fep_japan_candidate_window_t1

0x22ac,	// (0x0002223f) candidate_pane_ParamLimits

0x22ac,	// (0x0002223f) candidate_pane

0x7313,	// (0x000272a6) scroll_pane_cp30

0x22be,	// (0x00022251) list_single_popup_jap_candidate_pane_ParamLimits

0x22be,	// (0x00022251) list_single_popup_jap_candidate_pane

0x19f7,	// (0x0002198a) list_highlight_pane_cp30

0x22d3,	// (0x00022266) list_single_popup_jap_candidate_pane_t1

0x22e2,	// (0x00022275) level_1_signal

0x22ef,	// (0x00022282) level_2_signal

0x22fc,	// (0x0002228f) level_3_signal

0x2309,	// (0x0002229c) level_4_signal

0x2316,	// (0x000222a9) level_5_signal

0x2323,	// (0x000222b6) level_6_signal

0x2330,	// (0x000222c3) level_7_signal

0x22e2,	// (0x00022275) level_1_battery

0x22ef,	// (0x00022282) level_2_battery

0x22fc,	// (0x0002228f) level_3_battery

0x2309,	// (0x0002229c) level_4_battery

0x2316,	// (0x000222a9) level_5_battery

0x2323,	// (0x000222b6) level_6_battery

0x2330,	// (0x000222c3) level_7_battery

0x2355,	// (0x000222e8) list_menu_pane_ParamLimits

0x2355,	// (0x000222e8) list_menu_pane

0x236b,	// (0x000222fe) scroll_pane_cp25_ParamLimits

0x236b,	// (0x000222fe) scroll_pane_cp25

0x2384,	// (0x00022317) list_double2_graphic_pane_cp2_ParamLimits

0x2384,	// (0x00022317) list_double2_graphic_pane_cp2

0x2384,	// (0x00022317) list_double2_large_graphic_pane_cp2_ParamLimits

0x2384,	// (0x00022317) list_double2_large_graphic_pane_cp2

0x2384,	// (0x00022317) list_double2_pane_cp2_ParamLimits

0x2384,	// (0x00022317) list_double2_pane_cp2

0x2384,	// (0x00022317) list_double_graphic_pane_cp2_ParamLimits

0x2384,	// (0x00022317) list_double_graphic_pane_cp2

0x2384,	// (0x00022317) list_double_large_graphic_pane_cp2_ParamLimits

0x2384,	// (0x00022317) list_double_large_graphic_pane_cp2

0x2384,	// (0x00022317) list_double_number_pane_cp2_ParamLimits

0x2384,	// (0x00022317) list_double_number_pane_cp2

0x2384,	// (0x00022317) list_double_pane_cp2_ParamLimits

0x2384,	// (0x00022317) list_double_pane_cp2

0x734e,	// (0x000272e1) list_single_2graphic_pane_cp2_ParamLimits

0x734e,	// (0x000272e1) list_single_2graphic_pane_cp2

0x734e,	// (0x000272e1) list_single_graphic_heading_pane_cp2_ParamLimits

0x734e,	// (0x000272e1) list_single_graphic_heading_pane_cp2

0x734e,	// (0x000272e1) list_single_graphic_pane_cp2_ParamLimits

0x734e,	// (0x000272e1) list_single_graphic_pane_cp2

0x734e,	// (0x000272e1) list_single_heading_pane_cp2_ParamLimits

0x734e,	// (0x000272e1) list_single_heading_pane_cp2

0x2394,	// (0x00022327) list_single_large_graphic_pane_cp2_ParamLimits

0x2394,	// (0x00022327) list_single_large_graphic_pane_cp2

0x734e,	// (0x000272e1) list_single_number_heading_pane_cp2_ParamLimits

0x734e,	// (0x000272e1) list_single_number_heading_pane_cp2

0x734e,	// (0x000272e1) list_single_number_pane_cp2_ParamLimits

0x734e,	// (0x000272e1) list_single_number_pane_cp2

0x7364,	// (0x000272f7) list_single_pane_cp2_ParamLimits

0x7364,	// (0x000272f7) list_single_pane_cp2

0x23ae,	// (0x00022341) bg_popup_sub_pane_cp22

0x743c,	// (0x000273cf) popup_side_volume_key_window_g1

0x7460,	// (0x000273f3) popup_side_volume_key_window_t1

0x747c,	// (0x0002740f) volume_small_pane_cp1

0x1a45,	// (0x000219d8) bg_popup_sub_pane_cp24_ParamLimits

0x1a45,	// (0x000219d8) bg_popup_sub_pane_cp24

0x23c4,	// (0x00022357) fep_china_uni_candidate_pane_ParamLimits

0x23c4,	// (0x00022357) fep_china_uni_candidate_pane

0x23d8,	// (0x0002236b) fep_china_uni_entry_pane

0x23e8,	// (0x0002237b) popup_fep_china_uni_window_g1

0x7484,	// (0x00027417) fep_china_uni_entry_pane_g1

0x748c,	// (0x0002741f) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x0002f681) fep_china_uni_entry_pane_g

0x2404,	// (0x00022397) fep_entry_item_pane

0x240e,	// (0x000223a1) fep_candidate_item_pane

0x7494,	// (0x00027427) fep_china_uni_candidate_pane_g1

0x2416,	// (0x000223a9) fep_china_uni_candidate_pane_g2

0x241e,	// (0x000223b1) fep_china_uni_candidate_pane_g3

0x749c,	// (0x0002742f) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x0002f686) fep_china_uni_candidate_pane_g

0x19ed,	// (0x00021980) fep_entry_item_pane_g1

0x2426,	// (0x000223b9) fep_entry_item_pane_t1_ParamLimits

0x2426,	// (0x000223b9) fep_entry_item_pane_t1

0x243c,	// (0x000223cf) fep_candidate_item_pane_t1_ParamLimits

0x243c,	// (0x000223cf) fep_candidate_item_pane_t1

0x2451,	// (0x000223e4) fep_candidate_item_pane_t2_ParamLimits

0x2451,	// (0x000223e4) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x0002f68f) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x0002f68f) fep_candidate_item_pane_t

0x1a53,	// (0x000219e6) list_highlight_pane_cp31_ParamLimits

0x1a53,	// (0x000219e6) list_highlight_pane_cp31

0x2463,	// (0x000223f6) level_1_signal_lsc

0x246c,	// (0x000223ff) level_2_signal_lsc

0x2475,	// (0x00022408) level_3_signal_lsc

0x247e,	// (0x00022411) level_4_signal_lsc

0x2487,	// (0x0002241a) level_5_signal_lsc

0x2490,	// (0x00022423) level_6_signal_lsc

0x2499,	// (0x0002242c) level_7_signal_lsc

0x2499,	// (0x0002242c) level_1_battery_lsc

0x24a2,	// (0x00022435) level_2_battery_lsc

0x24ab,	// (0x0002243e) level_3_battery_lsc

0x24b4,	// (0x00022447) level_4_battery_lsc

0x24bd,	// (0x00022450) level_5_battery_lsc

0x24c6,	// (0x00022459) level_6_battery_lsc

0x2463,	// (0x000223f6) level_7_battery_lsc

0x24cf,	// (0x00022462) scroll_handle_focus_pane_g1

0x24d8,	// (0x0002246b) scroll_handle_focus_pane_g2

0x24e1,	// (0x00022474) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x0002f694) scroll_handle_focus_pane_g

0x5b72,	// (0x00025b05) list_single_2graphic_pane_g1_ParamLimits

0x5b72,	// (0x00025b05) list_single_2graphic_pane_g1

0x55b4,	// (0x00025547) list_single_2graphic_pane_g2_ParamLimits

0x55b4,	// (0x00025547) list_single_2graphic_pane_g2

0x553a,	// (0x000254cd) list_single_2graphic_pane_g3_ParamLimits

0x553a,	// (0x000254cd) list_single_2graphic_pane_g3

0x5b7e,	// (0x00025b11) list_single_2graphic_pane_g4_ParamLimits

0x5b7e,	// (0x00025b11) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x0002f69b) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x0002f69b) list_single_2graphic_pane_g

0x5b8a,	// (0x00025b1d) list_single_2graphic_pane_t1_ParamLimits

0x5b8a,	// (0x00025b1d) list_single_2graphic_pane_t1

0x5bb8,	// (0x00025b4b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5bb8,	// (0x00025b4b) list_double2_graphic_large_graphic_pane_g1

0x5659,	// (0x000255ec) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5659,	// (0x000255ec) list_double2_graphic_large_graphic_pane_g2

0x5625,	// (0x000255b8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5625,	// (0x000255b8) list_double2_graphic_large_graphic_pane_g3

0x5bc8,	// (0x00025b5b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5bc8,	// (0x00025b5b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x0002f6a4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x0002f6a4) list_double2_graphic_large_graphic_pane_g

0x5bd4,	// (0x00025b67) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5bd4,	// (0x00025b67) list_double2_graphic_large_graphic_pane_t1

0x5bea,	// (0x00025b7d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5bea,	// (0x00025b7d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x0002f6ad) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x0002f6ad) list_double2_graphic_large_graphic_pane_t

0x7676,	// (0x00027609) popup_fast_swap_window_ParamLimits

0x7676,	// (0x00027609) popup_fast_swap_window

0x7692,	// (0x00027625) popup_side_volume_key_window

0x2597,	// (0x0002252a) stacon_top_pane

0x25a1,	// (0x00022534) status_pane_ParamLimits

0x25a1,	// (0x00022534) status_pane

0x19e3,	// (0x00021976) status_small_pane

0x19f7,	// (0x0002198a) control_pane

0x19f7,	// (0x0002198a) stacon_bottom_pane

0x1e4d,	// (0x00021de0) scroll_pane_cp121

0x1e44,	// (0x00021dd7) set_content_pane

0x74a4,	// (0x00027437) bg_active_tab_pane_g1_cp1

0x74ad,	// (0x00027440) bg_active_tab_pane_g2_cp1

0x74b6,	// (0x00027449) bg_active_tab_pane_g3_cp1

0x74a4,	// (0x00027437) bg_passive_tab_pane_g1_cp1

0x74ad,	// (0x00027440) bg_passive_tab_pane_g2_cp1

0x74b6,	// (0x00027449) bg_passive_tab_pane_g3_cp1

0x74bf,	// (0x00027452) bg_active_tab_pane_g1_cp2

0x74ad,	// (0x00027440) bg_active_tab_pane_g2_cp2

0x74c8,	// (0x0002745b) bg_active_tab_pane_g3_cp2

0x74bf,	// (0x00027452) bg_passive_tab_pane_g1_cp2

0x74ad,	// (0x00027440) bg_passive_tab_pane_g2_cp2

0x74c8,	// (0x0002745b) bg_passive_tab_pane_g3_cp2

0x74d1,	// (0x00027464) bg_active_tab_pane_g1_cp3

0x74ad,	// (0x00027440) bg_active_tab_pane_g2_cp3

0x74da,	// (0x0002746d) bg_active_tab_pane_g3_cp3

0x74d1,	// (0x00027464) bg_passive_tab_pane_g1_cp3

0x74ad,	// (0x00027440) bg_passive_tab_pane_g2_cp3

0x74da,	// (0x0002746d) bg_passive_tab_pane_g3_cp3

0x74e3,	// (0x00027476) bg_active_tab_pane_g1_cp4

0x74ad,	// (0x00027440) bg_active_tab_pane_g2_cp4

0x74ee,	// (0x00027481) bg_active_tab_pane_g3_cp4

0x74e3,	// (0x00027476) bg_passive_tab_pane_g1_cp4

0x74ad,	// (0x00027440) bg_passive_tab_pane_g2_cp4

0x74ee,	// (0x00027481) bg_passive_tab_pane_g3_cp4

0x763a,	// (0x000275cd) bg_active_tab_pane_g1_cp5

0x74ad,	// (0x00027440) bg_active_tab_pane_g2_cp5

0x7643,	// (0x000275d6) bg_active_tab_pane_g3_cp5

0x763a,	// (0x000275cd) bg_passive_tab_pane_g1_cp5

0x74ad,	// (0x00027440) bg_passive_tab_pane_g2_cp5

0x7643,	// (0x000275d6) bg_passive_tab_pane_g3_cp5

0x764c,	// (0x000275df) list_set_graphic_pane_ParamLimits

0x764c,	// (0x000275df) list_set_graphic_pane

0x19f7,	// (0x0002198a) bg_set_opt_pane_cp4

0x2528,	// (0x000224bb) list_set_graphic_pane_g1_ParamLimits

0x2528,	// (0x000224bb) list_set_graphic_pane_g1

0x2534,	// (0x000224c7) list_set_graphic_pane_g2_ParamLimits

0x2534,	// (0x000224c7) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x0002f6b2) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x0002f6b2) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x0002fa4a) volume_small_pane_cp_g

0x766a,	// (0x000275fd) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x766a,	// (0x000275fd) list_double2_large_graphic_pane_g1_cp2

0x2556,	// (0x000224e9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2556,	// (0x000224e9) list_double2_large_graphic_pane_g2_cp2

0x2567,	// (0x000224fa) list_double2_large_graphic_pane_g3_cp2

0x256f,	// (0x00022502) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x256f,	// (0x00022502) list_double2_large_graphic_pane_t1_cp2

0x2585,	// (0x00022518) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2585,	// (0x00022518) list_double2_large_graphic_pane_t2_cp2

0xaae7,	// (0x0002aa7a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaae7,	// (0x0002aa7a) list_double_large_graphic_pane_g1_cp2

0xaaf8,	// (0x0002aa8b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaaf8,	// (0x0002aa8b) list_double_large_graphic_pane_g2_cp2

0x26b1,	// (0x00022644) list_double_large_graphic_pane_g3_cp2

0xab09,	// (0x0002aa9c) list_double_large_graphic_pane_g4_cp

0xab11,	// (0x0002aaa4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab11,	// (0x0002aaa4) list_double_large_graphic_pane_t1_cp2

0xab28,	// (0x0002aabb) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab28,	// (0x0002aabb) list_double_large_graphic_pane_t2_cp2

0x25af,	// (0x00022542) list_double2_graphic_pane_g1_cp2_ParamLimits

0x25af,	// (0x00022542) list_double2_graphic_pane_g1_cp2

0x25bd,	// (0x00022550) list_double2_graphic_pane_g2_cp2_ParamLimits

0x25bd,	// (0x00022550) list_double2_graphic_pane_g2_cp2

0x25ce,	// (0x00022561) list_double2_graphic_pane_g3_cp2

0x25d8,	// (0x0002256b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x25d8,	// (0x0002256b) list_double2_graphic_pane_t1_cp2

0x25ee,	// (0x00022581) list_double2_graphic_pane_t2_cp2_ParamLimits

0x25ee,	// (0x00022581) list_double2_graphic_pane_t2_cp2

0x1ddf,	// (0x00021d72) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1ddf,	// (0x00021d72) list_single_number_heading_pane_g1_cp2

0x2600,	// (0x00022593) list_single_number_heading_pane_g2_cp2

0x2608,	// (0x0002259b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2608,	// (0x0002259b) list_single_number_heading_pane_t1_cp2

0x261e,	// (0x000225b1) list_single_number_heading_pane_t2_cp2_ParamLimits

0x261e,	// (0x000225b1) list_single_number_heading_pane_t2_cp2

0x2630,	// (0x000225c3) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2630,	// (0x000225c3) list_single_number_heading_pane_t3_cp2

0x1ddf,	// (0x00021d72) list_single_heading_pane_g1_cp2_ParamLimits

0x1ddf,	// (0x00021d72) list_single_heading_pane_g1_cp2

0x2600,	// (0x00022593) list_single_heading_pane_g2_cp2

0x2608,	// (0x0002259b) list_single_heading_pane_t1_cp2_ParamLimits

0x2608,	// (0x0002259b) list_single_heading_pane_t1_cp2

0xa8f1,	// (0x0002a884) list_single_heading_pane_t2_cp2_ParamLimits

0xa8f1,	// (0x0002a884) list_single_heading_pane_t2_cp2

0xa839,	// (0x0002a7cc) list_double_graphic_pane_g1_cp2_ParamLimits

0xa839,	// (0x0002a7cc) list_double_graphic_pane_g1_cp2

0xa845,	// (0x0002a7d8) list_double_graphic_pane_g2_cp2_ParamLimits

0xa845,	// (0x0002a7d8) list_double_graphic_pane_g2_cp2

0xa854,	// (0x0002a7e7) list_double_graphic_pane_g3_cp2

0xa85c,	// (0x0002a7ef) list_double_graphic_pane_t1_cp2_ParamLimits

0xa85c,	// (0x0002a7ef) list_double_graphic_pane_t1_cp2

0xa872,	// (0x0002a805) list_double_graphic_pane_t2_cp2_ParamLimits

0xa872,	// (0x0002a805) list_double_graphic_pane_t2_cp2

0x26a5,	// (0x00022638) list_double_number_pane_g1_cp2_ParamLimits

0x26a5,	// (0x00022638) list_double_number_pane_g1_cp2

0x26b1,	// (0x00022644) list_double_number_pane_g2_cp2

0xa7fd,	// (0x0002a790) list_double_number_pane_t1_cp2_ParamLimits

0xa7fd,	// (0x0002a790) list_double_number_pane_t1_cp2

0xa811,	// (0x0002a7a4) list_double_number_pane_t2_cp2_ParamLimits

0xa811,	// (0x0002a7a4) list_double_number_pane_t2_cp2

0xa827,	// (0x0002a7ba) list_double_number_pane_t3_cp2_ParamLimits

0xa827,	// (0x0002a7ba) list_double_number_pane_t3_cp2

0xa6e6,	// (0x0002a679) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6e6,	// (0x0002a679) list_single_graphic_pane_g1_cp2

0x1dd3,	// (0x00021d66) list_single_graphic_pane_g2_cp2_ParamLimits

0x1dd3,	// (0x00021d66) list_single_graphic_pane_g2_cp2

0x270a,	// (0x0002269d) list_single_graphic_pane_g3_cp2

0xa6bc,	// (0x0002a64f) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0002a64f) list_single_graphic_pane_t1_cp2

0x1dd3,	// (0x00021d66) list_single_number_pane_g1_cp2_ParamLimits

0x1dd3,	// (0x00021d66) list_single_number_pane_g1_cp2

0x270a,	// (0x0002269d) list_single_number_pane_g2_cp2

0xa6bc,	// (0x0002a64f) list_single_number_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0002a64f) list_single_number_pane_t1_cp2

0xa6d2,	// (0x0002a665) list_single_number_pane_t2_cp2_ParamLimits

0xa6d2,	// (0x0002a665) list_single_number_pane_t2_cp2

0x2556,	// (0x000224e9) list_double2_pane_g1_cp2_ParamLimits

0x2556,	// (0x000224e9) list_double2_pane_g1_cp2

0x2567,	// (0x000224fa) list_double2_pane_g2_cp2

0x267d,	// (0x00022610) list_double2_pane_t1_cp2_ParamLimits

0x267d,	// (0x00022610) list_double2_pane_t1_cp2

0x2693,	// (0x00022626) list_double2_pane_t2_cp2_ParamLimits

0x2693,	// (0x00022626) list_double2_pane_t2_cp2

0x26a5,	// (0x00022638) list_double_pane_g1_cp2_ParamLimits

0x26a5,	// (0x00022638) list_double_pane_g1_cp2

0x26b1,	// (0x00022644) list_double_pane_g2_cp2

0x26b9,	// (0x0002264c) list_double_pane_t1_cp2_ParamLimits

0x26b9,	// (0x0002264c) list_double_pane_t1_cp2

0x26cf,	// (0x00022662) list_double_pane_t2_cp2_ParamLimits

0x26cf,	// (0x00022662) list_double_pane_t2_cp2

0x76ac,	// (0x0002763f) list_single_pane_cp2_g3

0x1dd3,	// (0x00021d66) list_single_pane_g1_cp2_ParamLimits

0x1dd3,	// (0x00021d66) list_single_pane_g1_cp2

0x270a,	// (0x0002269d) list_single_pane_g2_cp2

0x2712,	// (0x000226a5) list_single_pane_t1_cp2_ParamLimits

0x2712,	// (0x000226a5) list_single_pane_t1_cp2

0x76b4,	// (0x00027647) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x76b4,	// (0x00027647) list_single_large_graphic_pane_g1_cp2

0x272a,	// (0x000226bd) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x272a,	// (0x000226bd) list_single_large_graphic_pane_g2_cp2

0x2736,	// (0x000226c9) list_single_large_graphic_pane_g3_cp2

0x76c0,	// (0x00027653) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x76c0,	// (0x00027653) list_single_large_graphic_pane_g4_cp1

0x273e,	// (0x000226d1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x273e,	// (0x000226d1) list_single_large_graphic_pane_t1_cp2

0xa688,	// (0x0002a61b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa688,	// (0x0002a61b) list_single_graphic_heading_pane_g1_cp2

0xa655,	// (0x0002a5e8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa655,	// (0x0002a5e8) list_single_graphic_heading_pane_g4_cp2

0x270a,	// (0x0002269d) list_single_graphic_heading_pane_g5_cp2

0xa694,	// (0x0002a627) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa694,	// (0x0002a627) list_single_graphic_heading_pane_t1_cp2

0xa6aa,	// (0x0002a63d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6aa,	// (0x0002a63d) list_single_graphic_heading_pane_t2_cp2

0xa649,	// (0x0002a5dc) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa649,	// (0x0002a5dc) list_single_2graphic_pane_g1_cp2

0xa655,	// (0x0002a5e8) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa655,	// (0x0002a5e8) list_single_2graphic_pane_g2_cp2

0x270a,	// (0x0002269d) list_single_2graphic_pane_g3_cp2

0xa666,	// (0x0002a5f9) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa666,	// (0x0002a5f9) list_single_2graphic_pane_g4_cp2

0xa672,	// (0x0002a605) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa672,	// (0x0002a605) list_single_2graphic_pane_t1_cp2

0x19ed,	// (0x00021980) list_highlight_pane_g10_cp1

0xa231,	// (0x0002a1c4) list_highlight_pane_g1_cp1

0xa239,	// (0x0002a1cc) list_highlight_pane_g2_cp1

0xa241,	// (0x0002a1d4) list_highlight_pane_g3_cp1

0xa249,	// (0x0002a1dc) list_highlight_pane_g4_cp1

0xa251,	// (0x0002a1e4) list_highlight_pane_g5_cp1

0xa259,	// (0x0002a1ec) list_highlight_pane_g6_cp1

0xa261,	// (0x0002a1f4) list_highlight_pane_g7_cp1

0xa269,	// (0x0002a1fc) list_highlight_pane_g8_cp1

0xa271,	// (0x0002a204) list_highlight_pane_g9_cp1

0x8db6,	// (0x00028d49) form_field_slider_pane_t3

0x8dc4,	// (0x00028d57) form_field_slider_pane_t4

0x8dd2,	// (0x00028d65) slider_form_pane_ParamLimits

0x8dd2,	// (0x00028d65) slider_form_pane

0x19f7,	// (0x0002198a) control_abbreviations

0x19f7,	// (0x0002198a) control_conventions

0x19f7,	// (0x0002198a) control_definitions

0x19f7,	// (0x0002198a) format_table_attribute

0xa93b,	// (0x0002a8ce) bg_popup_preview_window_pane_g9

0x19f7,	// (0x0002198a) format_table_data2

0x19f7,	// (0x0002198a) format_table_data3

0x19f7,	// (0x0002198a) format_table_data_example

0x0008,

0x19f7,	// (0x0002198a) intro_purpose

0xf8b6,	// (0x0002f849) bg_popup_preview_window_pane_g

0x19f7,	// (0x0002198a) texts_category

0x19f7,	// (0x0002198a) texts_graphics

0x2754,	// (0x000226e7) text_digital

0x2763,	// (0x000226f6) text_primary

0x2772,	// (0x00022705) text_primary_small

0x2781,	// (0x00022714) text_secondary

0x2790,	// (0x00022723) text_title

0xb06e,	// (0x0002b001) bg_passive_tab_pane_g1_cp3_srt

0x74ad,	// (0x00027440) bg_passive_tab_pane_g2_cp3_srt

0xb077,	// (0x0002b00a) bg_passive_tab_pane_g3_cp3_srt

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp3_srt_ParamLimits

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp3_srt

0xb080,	// (0x0002b013) tabs_4_active_pane_srt_g1

0xb088,	// (0x0002b01b) tabs_4_active_pane_srt_t1_ParamLimits

0xb088,	// (0x0002b01b) tabs_4_active_pane_srt_t1

0xb06e,	// (0x0002b001) bg_active_tab_pane_g1_cp3_copy1

0x74ad,	// (0x00027440) bg_active_tab_pane_g2_cp3_copy1

0xb077,	// (0x0002b00a) bg_active_tab_pane_g3_cp3_copy1

0x1a53,	// (0x000219e6) tabs_2_long_active_pane_srt_ParamLimits

0x1a53,	// (0x000219e6) tabs_2_long_active_pane_srt

0x1a53,	// (0x000219e6) tabs_2_long_passive_pane_srt_ParamLimits

0x1a53,	// (0x000219e6) tabs_2_long_passive_pane_srt

0x6fec,	// (0x00026f7f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6fec,	// (0x00026f7f) bg_passive_tab_pane_cp4_srt

0xad5c,	// (0x0002acef) bg_passive_tab_pane_g1_cp4_srt

0x74ad,	// (0x00027440) bg_passive_tab_pane_g2_cp4_srt

0xad65,	// (0x0002acf8) bg_passive_tab_pane_g3_cp4_srt

0x6fcb,	// (0x00026f5e) bg_active_tab_pane_cp4_srt_ParamLimits

0x6fcb,	// (0x00026f5e) bg_active_tab_pane_cp4_srt

0xad6e,	// (0x0002ad01) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad6e,	// (0x0002ad01) tabs_2_long_active_pane_srt_t1

0xad5c,	// (0x0002acef) bg_active_tab_pane_g1_cp4_srt

0x74ad,	// (0x00027440) bg_active_tab_pane_g2_cp4_srt

0xad65,	// (0x0002acf8) bg_active_tab_pane_g3_cp4_srt

0x1a45,	// (0x000219d8) tabs_3_long_active_pane_srt_ParamLimits

0x1a45,	// (0x000219d8) tabs_3_long_active_pane_srt

0x1a45,	// (0x000219d8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1a45,	// (0x000219d8) tabs_3_long_passive_pane_cp_srt

0x1a45,	// (0x000219d8) tabs_3_long_passive_pane_srt_ParamLimits

0x1a45,	// (0x000219d8) tabs_3_long_passive_pane_srt

0x6fec,	// (0x00026f7f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6fec,	// (0x00026f7f) bg_passive_tab_pane_cp5_srt

0x763a,	// (0x000275cd) bg_passive_tab_pane_g1_cp5_srt

0x74ad,	// (0x00027440) bg_passive_tab_pane_g2_cp5_srt

0x7643,	// (0x000275d6) bg_passive_tab_pane_g3_cp5_srt

0x6fcb,	// (0x00026f5e) bg_active_tab_pane_cp5_srt_ParamLimits

0x6fcb,	// (0x00026f5e) bg_active_tab_pane_cp5_srt

0xad4a,	// (0x0002acdd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad4a,	// (0x0002acdd) tabs_3_long_active_pane_srt_t1

0x763a,	// (0x000275cd) bg_active_tab_pane_g1_cp5_srt

0x74ad,	// (0x00027440) bg_active_tab_pane_g2_cp5_srt

0x7643,	// (0x000275d6) bg_active_tab_pane_g3_cp5_srt

0xad3c,	// (0x0002accf) navi_text_pane_srt_t1

0xad34,	// (0x0002acc7) navi_icon_pane_srt_g1

0x287b,	// (0x0002280e) midp_editing_number_pane_srt

0x279f,	// (0x00022732) midp_ticker_pane_srt

0x2883,	// (0x00022816) midp_ticker_pane_srt_g1

0x288b,	// (0x0002281e) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x0002f6d1) midp_ticker_pane_srt_g

0x2893,	// (0x00022826) midp_ticker_pane_srt_t1

0xad25,	// (0x0002acb8) midp_editing_number_pane_t1_copy1

0x76da,	// (0x0002766d) listscroll_midp_pane

0x76da,	// (0x0002766d) midp_form_pane

0x774c,	// (0x000276df) midp_info_popup_window_ParamLimits

0x774c,	// (0x000276df) midp_info_popup_window

0x1fd8,	// (0x00021f6b) bg_popup_sub_pane_cp50_ParamLimits

0x1fd8,	// (0x00021f6b) bg_popup_sub_pane_cp50

0x8ac2,	// (0x00028a55) listscroll_midp_info_pane_ParamLimits

0x8ac2,	// (0x00028a55) listscroll_midp_info_pane

0x8aa2,	// (0x00028a35) listscroll_form_midp_pane_ParamLimits

0x8aa2,	// (0x00028a35) listscroll_form_midp_pane

0x8aae,	// (0x00028a41) scroll_bar_cp050

0x8a82,	// (0x00028a15) list_midp_pane

0xbad9,	// (0x0002ba6c) signal_pane_g2_cp

0x89bc,	// (0x0002894f) listscroll_midp_info_pane_t1_ParamLimits

0x89bc,	// (0x0002894f) listscroll_midp_info_pane_t1

0x89d4,	// (0x00028967) listscroll_midp_info_pane_t2_ParamLimits

0x89d4,	// (0x00028967) listscroll_midp_info_pane_t2

0x8a12,	// (0x000289a5) listscroll_midp_info_pane_t3_ParamLimits

0x8a12,	// (0x000289a5) listscroll_midp_info_pane_t3

0x8a4c,	// (0x000289df) listscroll_midp_info_pane_t4_ParamLimits

0x8a4c,	// (0x000289df) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x0002f784) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x0002f784) listscroll_midp_info_pane_t

0x202d,	// (0x00021fc0) scroll_pane_cp21

0x895c,	// (0x000288ef) form_midp_field_choice_group_pane

0x8965,	// (0x000288f8) form_midp_field_text_pane

0x89a2,	// (0x00028935) form_midp_field_time_pane

0x89aa,	// (0x0002893d) form_midp_gauge_slider_pane

0x89b3,	// (0x00028946) form_midp_gauge_wait_pane

0x19f7,	// (0x0002198a) form_midp_image_pane

0x5d55,	// (0x00025ce8) list_single_midp_pane_ParamLimits

0x5d55,	// (0x00025ce8) list_single_midp_pane

0x8911,	// (0x000288a4) form_midp_field_text_pane_t1

0x8653,	// (0x000285e6) input_focus_pane_cp050

0x894b,	// (0x000288de) list_midp_form_text_pane

0x88e0,	// (0x00028873) form_midp_field_choice_group_pane_t1

0x88ee,	// (0x00028881) input_focus_pane_cp051

0x8902,	// (0x00028895) list_midp_choice_pane

0x19f7,	// (0x0002198a) status_idle_pane

0x88c4,	// (0x00028857) form_midp_field_time_pane_t1

0x19ed,	// (0x00021980) wait_anim_pane_g2_copy1

0x88d2,	// (0x00028865) form_midp_field_time_pane_t2

0x0001,

0x27ff,	// (0x00022792) aid_navinavi_width_2_pane

0xf7ec,	// (0x0002f77f) form_midp_field_time_pane_t

0x19f7,	// (0x0002198a) input_focus_pane_cp052

0x19f7,	// (0x0002198a) bg_input_focus_pane_cp040

0x8884,	// (0x00028817) form_midp_gauge_slider_pane_t1

0x8892,	// (0x00028825) form_midp_gauge_slider_pane_t2

0x88a0,	// (0x00028833) form_midp_gauge_slider_pane_t3

0x88ae,	// (0x00028841) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x0002f776) form_midp_gauge_slider_pane_t

0x88bc,	// (0x0002884f) form_midp_slider_pane

0x1a53,	// (0x000219e6) bg_input_focus_pane_cp041_ParamLimits

0x1a53,	// (0x000219e6) bg_input_focus_pane_cp041

0x8851,	// (0x000287e4) form_midp_gauge_wait_pane_t1_ParamLimits

0x8851,	// (0x000287e4) form_midp_gauge_wait_pane_t1

0x8863,	// (0x000287f6) form_midp_gauge_wait_pane_t2_ParamLimits

0x8863,	// (0x000287f6) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x0002f771) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x0002f771) form_midp_gauge_wait_pane_t

0x8875,	// (0x00028808) form_midp_wait_pane_ParamLimits

0x8875,	// (0x00028808) form_midp_wait_pane

0x881b,	// (0x000287ae) form_midp_image_pane_g1

0x8824,	// (0x000287b7) form_midp_image_pane_t1

0x8833,	// (0x000287c6) form_midp_image_pane_t2

0x8842,	// (0x000287d5) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x0002f76a) form_midp_image_pane_t

0x8812,	// (0x000287a5) list_single_midp_pane_g1

0x5d46,	// (0x00025cd9) list_single_midp_pane_t1

0x87e9,	// (0x0002877c) list_midp_form_item_pane_ParamLimits

0x87e9,	// (0x0002877c) list_midp_form_item_pane

0x27a7,	// (0x0002273a) list_midp_form_item_pane_t1

0x27b6,	// (0x00022749) midp_ticker_pane_g1

0x27c2,	// (0x00022755) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x0002f6b7) midp_ticker_pane_g

0x27ce,	// (0x00022761) midp_ticker_pane_t1

0xaf72,	// (0x0002af05) midp_editing_number_pane_t1

0xaf50,	// (0x0002aee3) midp_editing_number_pane

0xaf5f,	// (0x0002aef2) midp_ticker_pane

0xad15,	// (0x0002aca8) ai_message_heading_pane

0x19f7,	// (0x0002198a) bg_popup_window_pane_cp14

0xad1d,	// (0x0002acb0) listscroll_ai_message_pane

0xac9f,	// (0x0002ac32) ai_message_heading_pane_g1_ParamLimits

0xac9f,	// (0x0002ac32) ai_message_heading_pane_g1

0xacab,	// (0x0002ac3e) ai_message_heading_pane_g2_ParamLimits

0xacab,	// (0x0002ac3e) ai_message_heading_pane_g2

0xacb7,	// (0x0002ac4a) ai_message_heading_pane_g3_ParamLimits

0xacb7,	// (0x0002ac4a) ai_message_heading_pane_g3

0xacc3,	// (0x0002ac56) ai_message_heading_pane_g4_ParamLimits

0xacc3,	// (0x0002ac56) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x0002f8ab) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x0002f8ab) ai_message_heading_pane_g

0xaccf,	// (0x0002ac62) ai_message_heading_pane_t1_ParamLimits

0xaccf,	// (0x0002ac62) ai_message_heading_pane_t1

0xace9,	// (0x0002ac7c) ai_message_heading_pane_t2_ParamLimits

0xace9,	// (0x0002ac7c) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x0002f8b4) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x0002f8b4) ai_message_heading_pane_t

0xacfb,	// (0x0002ac8e) bg_popup_heading_pane_cp1_ParamLimits

0xacfb,	// (0x0002ac8e) bg_popup_heading_pane_cp1

0xac8d,	// (0x0002ac20) list_ai_message_pane_ParamLimits

0xac8d,	// (0x0002ac20) list_ai_message_pane

0x202d,	// (0x00021fc0) scroll_pane_cp10

0xac29,	// (0x0002abbc) list_ai_message_pane_g1

0xac31,	// (0x0002abc4) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x0002f888) list_ai_message_pane_g

0xac39,	// (0x0002abcc) list_ai_message_pane_t1_ParamLimits

0xac39,	// (0x0002abcc) list_ai_message_pane_t1

0xac4e,	// (0x0002abe1) list_ai_message_pane_t2_ParamLimits

0xac4e,	// (0x0002abe1) list_ai_message_pane_t2

0xac63,	// (0x0002abf6) list_ai_message_pane_t3_ParamLimits

0xac63,	// (0x0002abf6) list_ai_message_pane_t3

0xac78,	// (0x0002ac0b) list_ai_message_pane_t4_ParamLimits

0xac78,	// (0x0002ac0b) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x0002f88d) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x0002f88d) list_ai_message_pane_t

0xac14,	// (0x0002aba7) cell_ai_soft_ind_pane_ParamLimits

0xac14,	// (0x0002aba7) cell_ai_soft_ind_pane

0x27e0,	// (0x00022773) cell_ai_soft_ind_pane_g1_ParamLimits

0x27e0,	// (0x00022773) cell_ai_soft_ind_pane_g1

0x19f7,	// (0x0002198a) grid_highlight_cp1

0x27ed,	// (0x00022780) text_secondary_cp56_ParamLimits

0x27ed,	// (0x00022780) text_secondary_cp56

0xabe9,	// (0x0002ab7c) example_general_pane_ParamLimits

0xabe9,	// (0x0002ab7c) example_general_pane

0xabf5,	// (0x0002ab88) example_parent_pane_g1_ParamLimits

0xabf5,	// (0x0002ab88) example_parent_pane_g1

0xac01,	// (0x0002ab94) example_parent_pane_t1_ParamLimits

0xac01,	// (0x0002ab94) example_parent_pane_t1

0x7e04,	// (0x00027d97) popup_preview_text_window_ParamLimits

0x7e04,	// (0x00027d97) popup_preview_text_window

0x2702,	// (0x00022695) list_single_pane_cp2_g4

0x1c3f,	// (0x00021bd2) bg_popup_preview_window_pane_ParamLimits

0x1c3f,	// (0x00021bd2) bg_popup_preview_window_pane

0xa943,	// (0x0002a8d6) popup_preview_text_window_t1_ParamLimits

0xa943,	// (0x0002a8d6) popup_preview_text_window_t1

0xa961,	// (0x0002a8f4) popup_preview_text_window_t2_ParamLimits

0xa961,	// (0x0002a8f4) popup_preview_text_window_t2

0xa9aa,	// (0x0002a93d) popup_preview_text_window_t3_ParamLimits

0xa9aa,	// (0x0002a93d) popup_preview_text_window_t3

0xa9ef,	// (0x0002a982) popup_preview_text_window_t4_ParamLimits

0xa9ef,	// (0x0002a982) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x0002f85c) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x0002f85c) popup_preview_text_window_t

0xaa6d,	// (0x0002aa00) scroll_pane_cp11

0x854f,	// (0x000284e2) bg_popup_preview_window_pane_g1

0xa903,	// (0x0002a896) bg_popup_preview_window_pane_g2

0xa90b,	// (0x0002a89e) bg_popup_preview_window_pane_g3

0xa913,	// (0x0002a8a6) bg_popup_preview_window_pane_g4

0xa91b,	// (0x0002a8ae) bg_popup_preview_window_pane_g5

0xa923,	// (0x0002a8b6) bg_popup_preview_window_pane_g6

0xa92b,	// (0x0002a8be) bg_popup_preview_window_pane_g7

0xa933,	// (0x0002a8c6) bg_popup_preview_window_pane_g8

0x6583,	// (0x00026516) aid_popup_width_pane

0x7de2,	// (0x00027d75) popup_midp_note_alarm_window_ParamLimits

0x7de2,	// (0x00027d75) popup_midp_note_alarm_window

0x1e81,	// (0x00021e14) data_form_pane_ParamLimits

0x59c5,	// (0x00025958) form_field_data_pane_g1

0x59cf,	// (0x00025962) form_field_data_pane_t1_ParamLimits

0x1e8d,	// (0x00021e20) input_focus_pane_ParamLimits

0x59e7,	// (0x0002597a) data_form_wide_pane_ParamLimits

0x59f8,	// (0x0002598b) form_field_data_wide_pane_g1

0x5a04,	// (0x00025997) form_field_data_wide_pane_t1_ParamLimits

0x1d17,	// (0x00021caa) input_focus_pane_cp6_ParamLimits

0x6f82,	// (0x00026f15) input_popup_find_pane_g1_ParamLimits

0x6f82,	// (0x00026f15) input_popup_find_pane_g1

0x7122,	// (0x000270b5) aid_navi_side_left_pane

0x7137,	// (0x000270ca) aid_navi_side_right_pane

0xa32c,	// (0x0002a2bf) bg_popup_window_pane_cp30_ParamLimits

0xa32c,	// (0x0002a2bf) bg_popup_window_pane_cp30

0xa3a6,	// (0x0002a339) popup_midp_note_alarm_window_g1_ParamLimits

0xa3a6,	// (0x0002a339) popup_midp_note_alarm_window_g1

0xa3d6,	// (0x0002a369) popup_midp_note_alarm_window_t1_ParamLimits

0xa3d6,	// (0x0002a369) popup_midp_note_alarm_window_t1

0xa477,	// (0x0002a40a) popup_midp_note_alarm_window_t2_ParamLimits

0xa477,	// (0x0002a40a) popup_midp_note_alarm_window_t2

0xa525,	// (0x0002a4b8) popup_midp_note_alarm_window_t3_ParamLimits

0xa525,	// (0x0002a4b8) popup_midp_note_alarm_window_t3

0xa54d,	// (0x0002a4e0) popup_midp_note_alarm_window_t4_ParamLimits

0xa54d,	// (0x0002a4e0) popup_midp_note_alarm_window_t4

0xa56d,	// (0x0002a500) popup_midp_note_alarm_window_t5_ParamLimits

0xa56d,	// (0x0002a500) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x0002f7f9) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x0002f7f9) popup_midp_note_alarm_window_t

0xa619,	// (0x0002a5ac) wait_bar_pane_cp1_ParamLimits

0xa619,	// (0x0002a5ac) wait_bar_pane_cp1

0x19f7,	// (0x0002198a) wait_anim_pane_copy1

0x19f7,	// (0x0002198a) wait_border_pane_copy1

0x8c7f,	// (0x00028c12) wait_border_pane_g1_copy1

0x5a1e,	// (0x000259b1) form_field_popup_pane_g1

0x5a26,	// (0x000259b9) form_field_popup_pane_t1_ParamLimits

0x1e8d,	// (0x00021e20) input_focus_pane_cp7_ParamLimits

0x1efa,	// (0x00021e8d) list_form_pane_ParamLimits

0x5a3e,	// (0x000259d1) form_field_popup_wide_pane_g1

0x5a46,	// (0x000259d9) form_field_popup_wide_pane_t1_ParamLimits

0x1e8d,	// (0x00021e20) input_focus_pane_cp8_ParamLimits

0x1f23,	// (0x00021eb6) list_form_wide_pane_ParamLimits

0xb10b,	// (0x0002b09e) aid_size_cell_graphic_pane

0x5ad0,	// (0x00025a63) data_form_pane_t1_ParamLimits

0x5d9a,	// (0x00025d2d) data_form_wide_pane_t1_ParamLimits

0x80e9,	// (0x0002807c) bg_status_flat_pane

0x6982,	// (0x00026915) title_pane_t1_ParamLimits

0x1a0d,	// (0x000219a0) title_pane_t2_ParamLimits

0x1a33,	// (0x000219c6) title_pane_t3_ParamLimits

0xf532,	// (0x0002f4c5) title_pane_t_ParamLimits

0x22e2,	// (0x00022275) level_1_signal_ParamLimits

0x22ef,	// (0x00022282) level_2_signal_ParamLimits

0x22fc,	// (0x0002228f) level_3_signal_ParamLimits

0x2309,	// (0x0002229c) level_4_signal_ParamLimits

0x2316,	// (0x000222a9) level_5_signal_ParamLimits

0x2323,	// (0x000222b6) level_6_signal_ParamLimits

0x2330,	// (0x000222c3) level_7_signal_ParamLimits

0x22e2,	// (0x00022275) level_1_battery_ParamLimits

0x22ef,	// (0x00022282) level_2_battery_ParamLimits

0x22fc,	// (0x0002228f) level_3_battery_ParamLimits

0x2309,	// (0x0002229c) level_4_battery_ParamLimits

0x2316,	// (0x000222a9) level_5_battery_ParamLimits

0x2323,	// (0x000222b6) level_6_battery_ParamLimits

0x2330,	// (0x000222c3) level_7_battery_ParamLimits

0xa231,	// (0x0002a1c4) bg_status_flat_pane_g1

0xa239,	// (0x0002a1cc) bg_status_flat_pane_g2

0xa241,	// (0x0002a1d4) bg_status_flat_pane_g3

0xa249,	// (0x0002a1dc) bg_status_flat_pane_g4

0xa251,	// (0x0002a1e4) bg_status_flat_pane_g5

0xa259,	// (0x0002a1ec) bg_status_flat_pane_g6

0xa261,	// (0x0002a1f4) bg_status_flat_pane_g7

0x69f2,	// (0x00026985) tabs_3_active_pane_t1_ParamLimits

0x69f2,	// (0x00026985) tabs_3_passive_pane_t1_ParamLimits

0x6a0c,	// (0x0002699f) tabs_4_active_pane_t1_ParamLimits

0x6a0c,	// (0x0002699f) tabs_4_1_passive_pane_t1_ParamLimits

0x6fb9,	// (0x00026f4c) tabs_2_active_pane_t1_ParamLimits

0x6fb9,	// (0x00026f4c) tabs_2_passive_pane_t1_ParamLimits

0x6fcb,	// (0x00026f5e) bg_active_tab_pane_cp4_ParamLimits

0x6fd9,	// (0x00026f6c) tabs_2_long_active_pane_t1_ParamLimits

0x6fec,	// (0x00026f7f) bg_passive_tab_pane_cp4_ParamLimits

0x85e4,	// (0x00028577) list_single_midp_graphic_pane_t1_ParamLimits

0x6fcb,	// (0x00026f5e) bg_active_tab_pane_cp5_ParamLimits

0x6ff8,	// (0x00026f8b) tabs_3_long_active_pane_t1_ParamLimits

0x6fec,	// (0x00026f7f) bg_passive_tab_pane_cp5_ParamLimits

0x85e4,	// (0x00028577) list_single_midp_graphic_pane_t1

0x80e9,	// (0x0002807c) bg_status_flat_pane_ParamLimits

0x81b2,	// (0x00028145) indicator_pane_cp2_ParamLimits

0x81b2,	// (0x00028145) indicator_pane_cp2

0x82dd,	// (0x00028270) navi_pane_srt_ParamLimits

0x82dd,	// (0x00028270) navi_pane_srt

0x8301,	// (0x00028294) popup_clock_digital_analogue_window_cp1

0x1ab1,	// (0x00021a44) indicator_pane_t1

0x279f,	// (0x00022732) copy_highlight_pane

0x279f,	// (0x00022732) cursor_graphics_pane

0x279f,	// (0x00022732) graphic_within_text_pane

0x279f,	// (0x00022732) link_highlight_pane

0xaa30,	// (0x0002a9c3) popup_preview_text_window_t5_ParamLimits

0xaa30,	// (0x0002a9c3) popup_preview_text_window_t5

0x2807,	// (0x0002279a) cursor_digital_pane

0x2807,	// (0x0002279a) cursor_primary_pane

0x2818,	// (0x000227ab) cursor_primary_small_pane

0x2820,	// (0x000227b3) cursor_secondary_pane

0x2828,	// (0x000227bb) cursor_title_pane

0x2807,	// (0x0002279a) link_highlight_digital_pane

0x280f,	// (0x000227a2) link_highlight_primary_pane

0x2818,	// (0x000227ab) link_highlight_primary_small_pane

0x2820,	// (0x000227b3) link_highlight_secondary_pane

0x2828,	// (0x000227bb) link_highlight_title_pane

0x2807,	// (0x0002279a) copy_highlight_digital_pane

0x2807,	// (0x0002279a) copy_highlight_primary_pane

0x2818,	// (0x000227ab) copy_highlight_primary_small_pane

0x2820,	// (0x000227b3) copy_highlight_secondary_pane

0x2828,	// (0x000227bb) copy_highlight_title_pane

0x2820,	// (0x000227b3) graphic_text_digital_pane

0xa2cf,	// (0x0002a262) graphic_text_primary_pane

0xa2d8,	// (0x0002a26b) graphic_text_primary_small_pane

0x2818,	// (0x000227ab) graphic_text_secondary_pane

0x2807,	// (0x0002279a) graphic_text_title_pane

0x77a4,	// (0x00027737) cursor_primary_pane_g1

0xa2c1,	// (0x0002a254) cursor_text_primary_t1

0xa2a9,	// (0x0002a23c) cursor_primary_small_pane_g1

0xa2b3,	// (0x0002a246) cursor_text_primary_small_t1

0xa291,	// (0x0002a224) cursor_primary_small_pane_g1_copy1

0xa29b,	// (0x0002a22e) cursor_text_primary_small_t1_copy1

0xa279,	// (0x0002a20c) cursor_text_title_t1

0xa287,	// (0x0002a21a) cursor_title_pane_g1

0x77a4,	// (0x00027737) cursor_digital_pane_g1

0x2830,	// (0x000227c3) cursor_text_digital_t1

0x283e,	// (0x000227d1) link_highlight_primary_pane_g1

0xa222,	// (0x0002a1b5) link_highlight_primary_pane_t1

0x283e,	// (0x000227d1) link_highlight_primary_small_pane_g1

0x2846,	// (0x000227d9) link_highlight_primary_small_pane_t1

0x283e,	// (0x000227d1) link_highlight_secondary_pane_g1

0x2855,	// (0x000227e8) link_highlight_secondary_pane_t1

0x8de4,	// (0x00028d77) link_highlight_title_pane_g1

0x8dfb,	// (0x00028d8e) link_highlight_title_pane_t1

0x8de4,	// (0x00028d77) link_highlight_digital_pane_g1

0x8dec,	// (0x00028d7f) link_highlight_digital_pane_t1

0x8c9e,	// (0x00028c31) copy_highlight_primary_pane_g1

0x8cc4,	// (0x00028c57) copy_highlight_primary_pane_t1

0x8c9e,	// (0x00028c31) copy_highlight_primary_small_pane_g1

0x8cb5,	// (0x00028c48) copy_highlight_primary_small_pane_t1

0x2864,	// (0x000227f7) copy_highlight_secondary_pane_g1

0x286c,	// (0x000227ff) copy_highlight_secondary_pane_t1

0x8c9e,	// (0x00028c31) copy_highlight_title_pane_g1

0x8ca6,	// (0x00028c39) copy_highlight_title_pane_t1

0x8c9e,	// (0x00028c31) copy_highlight_digital_pane_g1

0xb2d9,	// (0x0002b26c) copy_highlight_digital_pane_t1

0xb22d,	// (0x0002b1c0) graphic_text_primary_pane_g1

0xb2bd,	// (0x0002b250) graphic_text_primary_pane_t1

0xb2cb,	// (0x0002b25e) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x0002f928) graphic_text_primary_pane_t

0xb299,	// (0x0002b22c) graphic_text_primary_small_pane_g1

0xb2a1,	// (0x0002b234) graphic_text_primary_small_pane_t1

0xb2af,	// (0x0002b242) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x0002f923) graphic_text_primary_small_pane_t

0xb275,	// (0x0002b208) graphic_text_secondary_pane_g1

0xb27d,	// (0x0002b210) graphic_text_secondary_pane_t1

0xb28b,	// (0x0002b21e) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x0002f91e) graphic_text_secondary_pane_t

0xb251,	// (0x0002b1e4) graphic_text_title_pane_g1

0xb259,	// (0x0002b1ec) graphic_text_title_pane_t1

0xb267,	// (0x0002b1fa) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x0002f919) graphic_text_title_pane_t

0xb22d,	// (0x0002b1c0) graphic_text_digital_pane_g1

0xb235,	// (0x0002b1c8) graphic_text_digital_pane_t1

0xb243,	// (0x0002b1d6) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x0002f914) graphic_text_digital_pane_t

0x1a53,	// (0x000219e6) navi_icon_pane_srt_ParamLimits

0x1a53,	// (0x000219e6) navi_icon_pane_srt

0x19f7,	// (0x0002198a) navi_midp_pane_srt

0x19f7,	// (0x0002198a) navi_navi_pane_srt

0x1a53,	// (0x000219e6) navi_text_pane_srt_ParamLimits

0x1a53,	// (0x000219e6) navi_text_pane_srt

0xb1f8,	// (0x0002b18b) navi_navi_icon_text_pane_srt

0xb200,	// (0x0002b193) navi_navi_pane_srt_g1_ParamLimits

0xb200,	// (0x0002b193) navi_navi_pane_srt_g1

0xb212,	// (0x0002b1a5) navi_navi_pane_srt_g2_ParamLimits

0xb212,	// (0x0002b1a5) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x0002f90f) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x0002f90f) navi_navi_pane_srt_g

0xb224,	// (0x0002b1b7) navi_navi_tabs_pane_srt

0xb1f8,	// (0x0002b18b) navi_navi_text_pane_srt

0xb1f8,	// (0x0002b18b) navi_navi_volume_pane_srt

0xb1e9,	// (0x0002b17c) navi_navi_text_pane_srt_t1

0x9115,	// (0x000290a8) navi_navi_volume_pane_srt_g1

0x911d,	// (0x000290b0) volume_small_pane_srt_ParamLimits

0x911d,	// (0x000290b0) volume_small_pane_srt

0x77ae,	// (0x00027741) volume_small_pane_srt_g1_ParamLimits

0x77ae,	// (0x00027741) volume_small_pane_srt_g1

0x77be,	// (0x00027751) volume_small_pane_srt_g2_ParamLimits

0x77be,	// (0x00027751) volume_small_pane_srt_g2

0x77cf,	// (0x00027762) volume_small_pane_srt_g3_ParamLimits

0x77cf,	// (0x00027762) volume_small_pane_srt_g3

0x77e0,	// (0x00027773) volume_small_pane_srt_g4_ParamLimits

0x77e0,	// (0x00027773) volume_small_pane_srt_g4

0x77f1,	// (0x00027784) volume_small_pane_srt_g5_ParamLimits

0x77f1,	// (0x00027784) volume_small_pane_srt_g5

0x7802,	// (0x00027795) volume_small_pane_srt_g6_ParamLimits

0x7802,	// (0x00027795) volume_small_pane_srt_g6

0x7813,	// (0x000277a6) volume_small_pane_srt_g7_ParamLimits

0x7813,	// (0x000277a6) volume_small_pane_srt_g7

0x7824,	// (0x000277b7) volume_small_pane_srt_g8_ParamLimits

0x7824,	// (0x000277b7) volume_small_pane_srt_g8

0x7835,	// (0x000277c8) volume_small_pane_srt_g9_ParamLimits

0x7835,	// (0x000277c8) volume_small_pane_srt_g9

0x7846,	// (0x000277d9) volume_small_pane_srt_g10_ParamLimits

0x7846,	// (0x000277d9) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x0002f6bc) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x0002f6bc) volume_small_pane_srt_g

0x6c59,	// (0x00026bec) query_popup_data_pane_cp2

0xb1cf,	// (0x0002b162) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1cf,	// (0x0002b162) navi_navi_icon_text_pane_srt_t1

0xa2cf,	// (0x0002a262) navi_tabs_2_long_pane_srt

0xa2cf,	// (0x0002a262) navi_tabs_2_pane_srt

0xa2cf,	// (0x0002a262) navi_tabs_3_long_pane_srt

0xa2cf,	// (0x0002a262) navi_tabs_3_pane_srt

0xa2cf,	// (0x0002a262) navi_tabs_4_pane_srt

0x90f5,	// (0x00029088) tabs_2_active_pane_srt_ParamLimits

0x90f5,	// (0x00029088) tabs_2_active_pane_srt

0x9105,	// (0x00029098) tabs_2_passive_pane_srt_ParamLimits

0x9105,	// (0x00029098) tabs_2_passive_pane_srt

0x203d,	// (0x00021fd0) bg_passive_tab_pane_cp1_srt_ParamLimits

0x203d,	// (0x00021fd0) bg_passive_tab_pane_cp1_srt

0xb19b,	// (0x0002b12e) bg_passive_tab_pane_g1_cp1_srt

0x74ad,	// (0x00027440) bg_passive_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0002b137) bg_passive_tab_pane_g3_cp1_srt

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp1_srt_ParamLimits

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp1_srt

0xb1ad,	// (0x0002b140) tabs_2_active_pane_srt_g1

0xb1b5,	// (0x0002b148) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b5,	// (0x0002b148) tabs_2_active_pane_srt_t1

0xb19b,	// (0x0002b12e) bg_active_tab_pane_g1_cp1_srt

0x74ad,	// (0x00027440) bg_active_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0002b137) bg_active_tab_pane_g3_cp1_srt

0x90c2,	// (0x00029055) tabs_3_active_pane_srt_ParamLimits

0x90c2,	// (0x00029055) tabs_3_active_pane_srt

0x90d3,	// (0x00029066) tabs_3_passive_pane_cp_srt_ParamLimits

0x90d3,	// (0x00029066) tabs_3_passive_pane_cp_srt

0x90e4,	// (0x00029077) tabs_3_passive_pane_srt_ParamLimits

0x90e4,	// (0x00029077) tabs_3_passive_pane_srt

0x203d,	// (0x00021fd0) bg_passive_tab_pane_cp2_srt_ParamLimits

0x203d,	// (0x00021fd0) bg_passive_tab_pane_cp2_srt

0x7857,	// (0x000277ea) bg_passive_tab_pane_g1_cp2_srt

0x74ad,	// (0x00027440) bg_passive_tab_pane_g2_cp2_srt

0x7860,	// (0x000277f3) bg_passive_tab_pane_g3_cp2_srt

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp2_srt_ParamLimits

0x1a53,	// (0x000219e6) bg_active_tab_pane_cp2_srt

0xb181,	// (0x0002b114) tabs_3_active_pane_srt_g1

0xb189,	// (0x0002b11c) tabs_3_active_pane_srt_t1_ParamLimits

0xb189,	// (0x0002b11c) tabs_3_active_pane_srt_t1

0x7857,	// (0x000277ea) bg_active_tab_pane_g1_cp2_srt

0x74ad,	// (0x00027440) bg_active_tab_pane_g2_cp2_srt

0x7860,	// (0x000277f3) bg_active_tab_pane_g3_cp2_srt

0x907a,	// (0x0002900d) tabs_4_active_pane_srt_ParamLimits

0x907a,	// (0x0002900d) tabs_4_active_pane_srt

0x908c,	// (0x0002901f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x908c,	// (0x0002901f) tabs_4_passive_pane_cp2_srt

0x7a79,	// (0x00027a0c) aid_size_cell_toolbar

0x6fec,	// (0x00026f7f) main_idle_act_pane_ParamLimits

0x7c14,	// (0x00027ba7) popup_large_graphic_colour_window_ParamLimits

0x7f7f,	// (0x00027f12) popup_toolbar_window_ParamLimits

0x7f7f,	// (0x00027f12) popup_toolbar_window

0xaf81,	// (0x0002af14) list_single_graphic_2heading_pane_ParamLimits

0xaf81,	// (0x0002af14) list_single_graphic_2heading_pane

0x21ca,	// (0x0002215d) aid_size_cell_apps_grid_lsc_pane

0x21dc,	// (0x0002216f) aid_size_cell_apps_grid_prt_pane

0x203d,	// (0x00021fd0) bg_wml_button_pane_cp1_ParamLimits

0x203d,	// (0x00021fd0) bg_wml_button_pane_cp1

0x8911,	// (0x000288a4) form_midp_field_text_pane_t1_ParamLimits

0x8653,	// (0x000285e6) input_focus_pane_cp050_ParamLimits

0x894b,	// (0x000288de) list_midp_form_text_pane_ParamLimits

0x88ee,	// (0x00028881) input_focus_pane_cp051_ParamLimits

0x8902,	// (0x00028895) list_midp_choice_pane_ParamLimits

0x8791,	// (0x00028724) list_single_2graphic_pane_cp3_ParamLimits

0x8791,	// (0x00028724) list_single_2graphic_pane_cp3

0x87b6,	// (0x00028749) list_single_midp_graphic_pane_ParamLimits

0x87b6,	// (0x00028749) list_single_midp_graphic_pane

0x5c28,	// (0x00025bbb) list_single_graphic_2heading_pane_g1_ParamLimits

0x5c28,	// (0x00025bbb) list_single_graphic_2heading_pane_g1

0x552e,	// (0x000254c1) list_single_graphic_2heading_pane_g4_ParamLimits

0x552e,	// (0x000254c1) list_single_graphic_2heading_pane_g4

0x553a,	// (0x000254cd) list_single_graphic_2heading_pane_g5_ParamLimits

0x553a,	// (0x000254cd) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x0002f70f) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x0002f70f) list_single_graphic_2heading_pane_g

0x5c34,	// (0x00025bc7) list_single_graphic_2heading_pane_t1_ParamLimits

0x5c34,	// (0x00025bc7) list_single_graphic_2heading_pane_t1

0x5c48,	// (0x00025bdb) list_single_graphic_2heading_pane_t2_ParamLimits

0x5c48,	// (0x00025bdb) list_single_graphic_2heading_pane_t2

0x5c62,	// (0x00025bf5) list_single_graphic_2heading_pane_t3_ParamLimits

0x5c62,	// (0x00025bf5) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x0002f716) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x0002f716) list_single_graphic_2heading_pane_t

0x845d,	// (0x000283f0) bg_popup_sub_pane_cp2

0x8487,	// (0x0002841a) grid_toobar_pane

0x84c3,	// (0x00028456) cell_toolbar_pane_ParamLimits

0x84c3,	// (0x00028456) cell_toolbar_pane

0x84f3,	// (0x00028486) cell_toolbar_pane_g1_ParamLimits

0x84f3,	// (0x00028486) cell_toolbar_pane_g1

0x8507,	// (0x0002849a) cell_toolbar_pane_g2_ParamLimits

0x8507,	// (0x0002849a) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x0002f724) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x0002f724) cell_toolbar_pane_g

0x8529,	// (0x000284bc) grid_highlight_pane_cp2_ParamLimits

0x8529,	// (0x000284bc) grid_highlight_pane_cp2

0x8543,	// (0x000284d6) toolbar_button_pane

0x854f,	// (0x000284e2) toolbar_button_pane_g1

0x8557,	// (0x000284ea) toolbar_button_pane_g2

0x855f,	// (0x000284f2) toolbar_button_pane_g3

0x8567,	// (0x000284fa) toolbar_button_pane_g4

0x856f,	// (0x00028502) toolbar_button_pane_g5

0x8577,	// (0x0002850a) toolbar_button_pane_g6

0x857f,	// (0x00028512) toolbar_button_pane_g7

0x8587,	// (0x0002851a) toolbar_button_pane_g8

0x858f,	// (0x00028522) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x0002f729) toolbar_button_pane_g

0x859f,	// (0x00028532) list_single_2graphic_pane_g1_cp3_ParamLimits

0x859f,	// (0x00028532) list_single_2graphic_pane_g1_cp3

0x85ab,	// (0x0002853e) list_single_2graphic_pane_g2_cp3_ParamLimits

0x85ab,	// (0x0002853e) list_single_2graphic_pane_g2_cp3

0x2600,	// (0x00022593) list_single_2graphic_pane_g3_cp3

0x85bc,	// (0x0002854f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x85bc,	// (0x0002854f) list_single_2graphic_pane_g4_cp3

0x85c8,	// (0x0002855b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x85c8,	// (0x0002855b) list_single_2graphic_pane_t1_cp3

0x1ddf,	// (0x00021d72) list_single_midp_graphic_pane_g2_ParamLimits

0x1ddf,	// (0x00021d72) list_single_midp_graphic_pane_g2

0x7a81,	// (0x00027a14) aid_zoom_text_primary

0x5bfc,	// (0x00025b8f) aid_zoom_text_secondary

0x28e1,	// (0x00022874) status_small_pane_g7_ParamLimits

0x28e1,	// (0x00022874) status_small_pane_g7

0x78ba,	// (0x0002784d) status_small_pane_t1_ParamLimits

0x6965,	// (0x000268f8) title_pane_g2

0x0003,

0xf529,	// (0x0002f4bc) title_pane_g

0x6cb3,	// (0x00026c46) aid_size_cell_colour_1_pane_ParamLimits

0x6cb3,	// (0x00026c46) aid_size_cell_colour_1_pane

0x6cc7,	// (0x00026c5a) aid_size_cell_colour_2_pane_ParamLimits

0x6cc7,	// (0x00026c5a) aid_size_cell_colour_2_pane

0x6cdb,	// (0x00026c6e) aid_size_cell_colour_3_pane_ParamLimits

0x6cdb,	// (0x00026c6e) aid_size_cell_colour_3_pane

0x6cef,	// (0x00026c82) aid_size_cell_colour_4_pane_ParamLimits

0x6cef,	// (0x00026c82) aid_size_cell_colour_4_pane

0x705f,	// (0x00026ff2) title_pane_stacon_g1_ParamLimits

0x705f,	// (0x00026ff2) title_pane_stacon_g1

0x8d1b,	// (0x00028cae) popup_note_wait_window_g3_ParamLimits

0x8d1b,	// (0x00028cae) popup_note_wait_window_g3

0x8d91,	// (0x00028d24) popup_note_wait_window_t5_ParamLimits

0x8d91,	// (0x00028d24) popup_note_wait_window_t5

0x19f7,	// (0x0002198a) main_feb_china_hwr_fs_writing_pane

0x7afb,	// (0x00027a8e) popup_feb_china_hwr_fs_window_ParamLimits

0x7afb,	// (0x00027a8e) popup_feb_china_hwr_fs_window

0x863e,	// (0x000285d1) aid_size_cell_hwr_fs_ParamLimits

0x863e,	// (0x000285d1) aid_size_cell_hwr_fs

0x8653,	// (0x000285e6) bg_popup_sub_pane_cp3_ParamLimits

0x8653,	// (0x000285e6) bg_popup_sub_pane_cp3

0x865f,	// (0x000285f2) grid_hwr_fs_pane_ParamLimits

0x865f,	// (0x000285f2) grid_hwr_fs_pane

0x8677,	// (0x0002860a) linegrid_hwr_fs_pane_ParamLimits

0x8677,	// (0x0002860a) linegrid_hwr_fs_pane

0x8687,	// (0x0002861a) cell_hwr_fs_pane_ParamLimits

0x8687,	// (0x0002861a) cell_hwr_fs_pane

0x86a9,	// (0x0002863c) linegrid_hwr_fs_pane_g1_ParamLimits

0x86a9,	// (0x0002863c) linegrid_hwr_fs_pane_g1

0x86b5,	// (0x00028648) linegrid_hwr_fs_pane_g2_ParamLimits

0x86b5,	// (0x00028648) linegrid_hwr_fs_pane_g2

0x86c7,	// (0x0002865a) linegrid_hwr_fs_pane_g3_ParamLimits

0x86c7,	// (0x0002865a) linegrid_hwr_fs_pane_g3

0x86d3,	// (0x00028666) linegrid_hwr_fs_pane_g4_ParamLimits

0x86d3,	// (0x00028666) linegrid_hwr_fs_pane_g4

0x86ed,	// (0x00028680) linegrid_hwr_fs_pane_g5_ParamLimits

0x86ed,	// (0x00028680) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x0002f74f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x0002f74f) linegrid_hwr_fs_pane_g

0x8703,	// (0x00028696) cell_hwr_fs_pane_g1_ParamLimits

0x8703,	// (0x00028696) cell_hwr_fs_pane_g1

0x8397,	// (0x0002832a) cell_hwr_fs_pane_g2_ParamLimits

0x8397,	// (0x0002832a) cell_hwr_fs_pane_g2

0x8719,	// (0x000286ac) cell_hwr_fs_pane_g3_ParamLimits

0x8719,	// (0x000286ac) cell_hwr_fs_pane_g3

0x8726,	// (0x000286b9) cell_hwr_fs_pane_g4_ParamLimits

0x8726,	// (0x000286b9) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x0002f75a) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x0002f75a) cell_hwr_fs_pane_g

0x8733,	// (0x000286c6) cell_hwr_fs_pane_t1

0x19f7,	// (0x0002198a) grid_highlight_pane_cp6

0x19f7,	// (0x0002198a) main_idle_act2_pane

0x2014,	// (0x00021fa7) aid_inside_area_popup_secondary

0xa753,	// (0x0002a6e6) aid_inside_area_window_primary_ParamLimits

0xa753,	// (0x0002a6e6) aid_inside_area_window_primary

0xb2e8,	// (0x0002b27b) ai2_news_ticker_pane

0xb2f0,	// (0x0002b283) aid_size_cell_ai1_link_ParamLimits

0xb2f0,	// (0x0002b283) aid_size_cell_ai1_link

0xb30a,	// (0x0002b29d) popup_ai2_data_window_ParamLimits

0xb30a,	// (0x0002b29d) popup_ai2_data_window

0xb320,	// (0x0002b2b3) popup_ai2_link_window_ParamLimits

0xb320,	// (0x0002b2b3) popup_ai2_link_window

0x8653,	// (0x000285e6) bg_popup_sub_pane_cp4_ParamLimits

0x8653,	// (0x000285e6) bg_popup_sub_pane_cp4

0xb334,	// (0x0002b2c7) grid_ai2_link_pane_ParamLimits

0xb334,	// (0x0002b2c7) grid_ai2_link_pane

0xb34b,	// (0x0002b2de) popup_ai2_link_window_g1_ParamLimits

0xb34b,	// (0x0002b2de) popup_ai2_link_window_g1

0xb357,	// (0x0002b2ea) popup_ai2_link_window_g2_ParamLimits

0xb357,	// (0x0002b2ea) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x0002f92d) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x0002f92d) popup_ai2_link_window_g

0xb366,	// (0x0002b2f9) ai2_mp_button_pane

0xb36e,	// (0x0002b301) ai2_mp_volume_pane

0x88ee,	// (0x00028881) bg_popup_sub_pane_cp5_ParamLimits

0x88ee,	// (0x00028881) bg_popup_sub_pane_cp5

0xb376,	// (0x0002b309) heading_ai2_gene_pane_ParamLimits

0xb376,	// (0x0002b309) heading_ai2_gene_pane

0xb382,	// (0x0002b315) list_ai2_gene_pane_ParamLimits

0xb382,	// (0x0002b315) list_ai2_gene_pane

0xb3ca,	// (0x0002b35d) cell_ai2_link_pane_ParamLimits

0xb3ca,	// (0x0002b35d) cell_ai2_link_pane

0xb3e0,	// (0x0002b373) cell_ai2_link_pane_g1

0x19f7,	// (0x0002198a) grid_highlight_pane_cp7

0x9132,	// (0x000290c5) ai2_mp_volume_pane_g1

0xb4b0,	// (0x0002b443) ai2_mp_volume_pane_g2

0xb425,	// (0x0002b3b8) list_ai2_gene_pane_t1

0xb4b8,	// (0x0002b44b) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x0002f946) ai2_mp_volume_pane_g

0x913a,	// (0x000290cd) volume_small_pane_cp3

0xb4c0,	// (0x0002b453) aid_size_cell_ai2_button

0xb4c8,	// (0x0002b45b) grid_ai2_button_pane

0xb4d1,	// (0x0002b464) cell_ai2_button_pane_ParamLimits

0xb4d1,	// (0x0002b464) cell_ai2_button_pane

0x19ed,	// (0x00021980) cell_ai2_button_pane_g1

0x19f7,	// (0x0002198a) grid_highlight_pane_cp8

0xb470,	// (0x0002b403) ai2_gene_pane_t1_ParamLimits

0xb470,	// (0x0002b403) ai2_gene_pane_t1

0x7a6f,	// (0x00027a02) aid_height_parent_landscape

0xadbc,	// (0x0002ad4f) aid_height_set_list

0xadcd,	// (0x0002ad60) aid_size_parent

0xb10b,	// (0x0002b09e) aid_size_cell_graphic_pane_ParamLimits

0xb392,	// (0x0002b325) popup_ai2_data_window_g1_ParamLimits

0xb392,	// (0x0002b325) popup_ai2_data_window_g1

0xb39e,	// (0x0002b331) ai2_news_ticker_pane_g1

0xb3a6,	// (0x0002b339) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x0002f932) ai2_news_ticker_pane_g

0xb3ae,	// (0x0002b341) ai2_news_ticker_pane_t1

0xb3bc,	// (0x0002b34f) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x0002f937) ai2_news_ticker_pane_t

0xb3e9,	// (0x0002b37c) heading_ai2_gene_pane_g1

0xb3f1,	// (0x0002b384) heading_ai2_gene_pane_t1_ParamLimits

0xb3f1,	// (0x0002b384) heading_ai2_gene_pane_t1

0xb406,	// (0x0002b399) list_highlight_pane_cp6

0xb40e,	// (0x0002b3a1) ai2_gene_pane_ParamLimits

0xb40e,	// (0x0002b3a1) ai2_gene_pane

0xb433,	// (0x0002b3c6) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x0002f93c) list_ai2_gene_pane_t

0xb441,	// (0x0002b3d4) list_highlight_pane_cp8_ParamLimits

0xb441,	// (0x0002b3d4) list_highlight_pane_cp8

0xb452,	// (0x0002b3e5) ai2_gene_pane_g1_ParamLimits

0xb452,	// (0x0002b3e5) ai2_gene_pane_g1

0xb464,	// (0x0002b3f7) ai2_gene_pane_g2_ParamLimits

0xb464,	// (0x0002b3f7) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x0002f941) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x0002f941) ai2_gene_pane_g

0x1dc2,	// (0x00021d55) scroll_pane_cp12

0x7a2c,	// (0x000279bf) control_pane_t3_ParamLimits

0x7a2c,	// (0x000279bf) control_pane_t3

0x78ab,	// (0x0002783e) status_small_pane_g8_ParamLimits

0x78ab,	// (0x0002783e) status_small_pane_g8

0x7bdd,	// (0x00027b70) popup_find_window_ParamLimits

0x7df6,	// (0x00027d89) popup_note_image_window_ParamLimits

0x5c7a,	// (0x00025c0d) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c7a,	// (0x00025c0d) list_double2_graphic_pane_vc_g1

0x5c86,	// (0x00025c19) list_double2_graphic_pane_vc_g2_ParamLimits

0x5c86,	// (0x00025c19) list_double2_graphic_pane_vc_g2

0x5c92,	// (0x00025c25) list_double2_graphic_pane_vc_g3_ParamLimits

0x5c92,	// (0x00025c25) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x0002f71d) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x0002f71d) list_double2_graphic_pane_vc_g

0x5c9e,	// (0x00025c31) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c9e,	// (0x00025c31) list_double2_graphic_pane_vc_t1

0x552e,	// (0x000254c1) list_single_heading_pane_vc_g1_ParamLimits

0x552e,	// (0x000254c1) list_single_heading_pane_vc_g1

0x553a,	// (0x000254cd) list_single_heading_pane_vc_g2_ParamLimits

0x553a,	// (0x000254cd) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f536) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f536) list_single_heading_pane_vc_g

0x5cb4,	// (0x00025c47) list_single_heading_pane_vc_t1_ParamLimits

0x5cb4,	// (0x00025c47) list_single_heading_pane_vc_t1

0x5cca,	// (0x00025c5d) list_single_heading_pane_vc_t2_ParamLimits

0x5cca,	// (0x00025c5d) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x0002f73e) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x0002f73e) list_single_heading_pane_vc_t

0x85fa,	// (0x0002858d) list_setting_number_pane_vc_g1_ParamLimits

0x85fa,	// (0x0002858d) list_setting_number_pane_vc_g1

0x8606,	// (0x00028599) list_setting_number_pane_vc_g2_ParamLimits

0x8606,	// (0x00028599) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x0002f743) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002f743) list_setting_number_pane_vc_g

0x5cdc,	// (0x00025c6f) list_setting_number_pane_vc_t1_ParamLimits

0x5cdc,	// (0x00025c6f) list_setting_number_pane_vc_t1

0x5cf0,	// (0x00025c83) list_setting_number_pane_vc_t2_ParamLimits

0x5cf0,	// (0x00025c83) list_setting_number_pane_vc_t2

0x5d0c,	// (0x00025c9f) list_setting_number_pane_vc_t3_ParamLimits

0x5d0c,	// (0x00025c9f) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x0002f748) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x0002f748) list_setting_number_pane_vc_t

0x5d36,	// (0x00025cc9) set_value_pane_vc_ParamLimits

0x5d36,	// (0x00025cc9) set_value_pane_vc

0xaf81,	// (0x0002af14) list_double2_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_double2_graphic_pane_vc

0xaf81,	// (0x0002af14) list_double2_large_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_double2_large_graphic_pane_vc

0xaf81,	// (0x0002af14) list_double2_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_double2_pane_vc

0xaf81,	// (0x0002af14) list_double_graphic_heading_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_double_graphic_heading_pane_vc

0xaf81,	// (0x0002af14) list_double_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_double_graphic_pane_vc

0xaf81,	// (0x0002af14) list_double_heading_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_double_heading_pane_vc

0x5dfb,	// (0x00025d8e) list_double_large_graphic_pane_vc_ParamLimits

0x5dfb,	// (0x00025d8e) list_double_large_graphic_pane_vc

0xaf81,	// (0x0002af14) list_double_number_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_double_number_pane_vc

0xaf81,	// (0x0002af14) list_double_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_double_pane_vc

0xaf81,	// (0x0002af14) list_double_time_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_double_time_pane_vc

0xaf81,	// (0x0002af14) list_setting_number_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_setting_number_pane_vc

0xaf81,	// (0x0002af14) list_setting_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_setting_pane_vc

0xaf81,	// (0x0002af14) list_single_graphic_heading_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_single_graphic_heading_pane_vc

0xaf81,	// (0x0002af14) list_single_heading_pane_vc_ParamLimits

0xaf81,	// (0x0002af14) list_single_heading_pane_vc

0x5e1a,	// (0x00025dad) list_single_number_heading_pane_vc_ParamLimits

0x5e1a,	// (0x00025dad) list_single_number_heading_pane_vc

0x5e82,	// (0x00025e15) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5e82,	// (0x00025e15) list_double_graphic_heading_pane_vc_g1

0x5c86,	// (0x00025c19) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5c86,	// (0x00025c19) list_double_graphic_heading_pane_vc_g2

0x5c92,	// (0x00025c25) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5c92,	// (0x00025c25) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x0002f94d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x0002f94d) list_double_graphic_heading_pane_vc_g

0x5e8e,	// (0x00025e21) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5e8e,	// (0x00025e21) list_double_graphic_heading_pane_vc_t1

0x5ea2,	// (0x00025e35) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5ea2,	// (0x00025e35) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x0002f954) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x0002f954) list_double_graphic_heading_pane_vc_t

0x85fa,	// (0x0002858d) list_setting_pane_vc_g1_ParamLimits

0x85fa,	// (0x0002858d) list_setting_pane_vc_g1

0x8606,	// (0x00028599) list_setting_pane_vc_g2_ParamLimits

0x8606,	// (0x00028599) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x0002f743) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002f743) list_setting_pane_vc_g

0x5eba,	// (0x00025e4d) list_setting_pane_vc_t1_ParamLimits

0x5eba,	// (0x00025e4d) list_setting_pane_vc_t1

0x5ed6,	// (0x00025e69) list_setting_pane_vc_t2_ParamLimits

0x5ed6,	// (0x00025e69) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x0002f997) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x0002f997) list_setting_pane_vc_t

0x5d36,	// (0x00025cc9) set_value_pane_cp_vc_ParamLimits

0x5d36,	// (0x00025cc9) set_value_pane_cp_vc

0x552e,	// (0x000254c1) list_single_number_heading_pane_vc_g1_ParamLimits

0x552e,	// (0x000254c1) list_single_number_heading_pane_vc_g1

0x553a,	// (0x000254cd) list_single_number_heading_pane_vc_g2_ParamLimits

0x553a,	// (0x000254cd) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f536) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f536) list_single_number_heading_pane_vc_g

0x555c,	// (0x000254ef) list_single_number_heading_pane_vc_t1_ParamLimits

0x555c,	// (0x000254ef) list_single_number_heading_pane_vc_t1

0x5ef0,	// (0x00025e83) list_single_number_heading_pane_vc_t2_ParamLimits

0x5ef0,	// (0x00025e83) list_single_number_heading_pane_vc_t2

0x5f06,	// (0x00025e99) list_single_number_heading_pane_vc_t3_ParamLimits

0x5f06,	// (0x00025e99) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x0002f99c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0002f99c) list_single_number_heading_pane_vc_t

0x5f18,	// (0x00025eab) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5f18,	// (0x00025eab) list_single_graphic_heading_pane_vc_g1

0x552e,	// (0x000254c1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x552e,	// (0x000254c1) list_single_graphic_heading_pane_vc_g4

0x553a,	// (0x000254cd) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x553a,	// (0x000254cd) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x0002f9a3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x0002f9a3) list_single_graphic_heading_pane_vc_g

0x555c,	// (0x000254ef) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x555c,	// (0x000254ef) list_single_graphic_heading_pane_vc_t1

0x5f24,	// (0x00025eb7) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5f24,	// (0x00025eb7) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x0002f9aa) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x0002f9aa) list_single_graphic_heading_pane_vc_t

0x552e,	// (0x000254c1) list_double2_pane_vc_g1_ParamLimits

0x552e,	// (0x000254c1) list_double2_pane_vc_g1

0x553a,	// (0x000254cd) list_double2_pane_vc_g2_ParamLimits

0x553a,	// (0x000254cd) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f536) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f536) list_double2_pane_vc_g

0x5f36,	// (0x00025ec9) list_double2_pane_vc_t1_ParamLimits

0x5f36,	// (0x00025ec9) list_double2_pane_vc_t1

0x5f4e,	// (0x00025ee1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5f4e,	// (0x00025ee1) list_double2_large_graphic_pane_vc_g1

0x552e,	// (0x000254c1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x552e,	// (0x000254c1) list_double2_large_graphic_pane_vc_g2

0x553a,	// (0x000254cd) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x553a,	// (0x000254cd) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1c,	// (0x0002f9af) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1c,	// (0x0002f9af) list_double2_large_graphic_pane_vc_g

0x5c9e,	// (0x00025c31) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5c9e,	// (0x00025c31) list_double2_large_graphic_pane_vc_t1

0x5f5a,	// (0x00025eed) list_double_time_pane_vc_g1_ParamLimits

0x5f5a,	// (0x00025eed) list_double_time_pane_vc_g1

0x5f66,	// (0x00025ef9) list_double_time_pane_vc_g2_ParamLimits

0x5f66,	// (0x00025ef9) list_double_time_pane_vc_g2

0x0001,

0xfa23,	// (0x0002f9b6) list_double_time_pane_vc_g_ParamLimits

0xfa23,	// (0x0002f9b6) list_double_time_pane_vc_g

0x5f72,	// (0x00025f05) list_double_time_pane_vc_t1_ParamLimits

0x5f72,	// (0x00025f05) list_double_time_pane_vc_t1

0x5f96,	// (0x00025f29) list_double_time_pane_vc_t2_ParamLimits

0x5f96,	// (0x00025f29) list_double_time_pane_vc_t2

0x5fe5,	// (0x00025f78) list_double_time_pane_vc_t3_ParamLimits

0x5fe5,	// (0x00025f78) list_double_time_pane_vc_t3

0x5ff7,	// (0x00025f8a) list_double_time_pane_vc_t4_ParamLimits

0x5ff7,	// (0x00025f8a) list_double_time_pane_vc_t4

0x0003,

0xfa28,	// (0x0002f9bb) list_double_time_pane_vc_t_ParamLimits

0xfa28,	// (0x0002f9bb) list_double_time_pane_vc_t

0x552e,	// (0x000254c1) list_double_pane_vc_g1_ParamLimits

0x552e,	// (0x000254c1) list_double_pane_vc_g1

0x553a,	// (0x000254cd) list_double_pane_vc_g2_ParamLimits

0x553a,	// (0x000254cd) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f536) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f536) list_double_pane_vc_g

0x600b,	// (0x00025f9e) list_double_pane_vc_t1_ParamLimits

0x600b,	// (0x00025f9e) list_double_pane_vc_t1

0x601f,	// (0x00025fb2) list_double_pane_vc_t2_ParamLimits

0x601f,	// (0x00025fb2) list_double_pane_vc_t2

0x0001,

0xfa31,	// (0x0002f9c4) list_double_pane_vc_t_ParamLimits

0xfa31,	// (0x0002f9c4) list_double_pane_vc_t

0x552e,	// (0x000254c1) list_double_number_pane_vc_g1_ParamLimits

0x552e,	// (0x000254c1) list_double_number_pane_vc_g1

0x553a,	// (0x000254cd) list_double_number_pane_vc_g2_ParamLimits

0x553a,	// (0x000254cd) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f536) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f536) list_double_number_pane_vc_g

0x6037,	// (0x00025fca) list_double_number_pane_vc_t1_ParamLimits

0x6037,	// (0x00025fca) list_double_number_pane_vc_t1

0x600b,	// (0x00025f9e) list_double_number_pane_vc_t2_ParamLimits

0x600b,	// (0x00025f9e) list_double_number_pane_vc_t2

0x6049,	// (0x00025fdc) list_double_number_pane_vc_t3_ParamLimits

0x6049,	// (0x00025fdc) list_double_number_pane_vc_t3

0x0002,

0xfa36,	// (0x0002f9c9) list_double_number_pane_vc_t_ParamLimits

0xfa36,	// (0x0002f9c9) list_double_number_pane_vc_t

0x6061,	// (0x00025ff4) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6061,	// (0x00025ff4) list_double_large_graphic_pane_vc_g1

0x607d,	// (0x00026010) list_double_large_graphic_pane_vc_g2_ParamLimits

0x607d,	// (0x00026010) list_double_large_graphic_pane_vc_g2

0x6091,	// (0x00026024) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6091,	// (0x00026024) list_double_large_graphic_pane_vc_g3

0x60a0,	// (0x00026033) list_double_large_graphic_pane_vc_g4_ParamLimits

0x60a0,	// (0x00026033) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3d,	// (0x0002f9d0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0002f9d0) list_double_large_graphic_pane_vc_g

0x60ac,	// (0x0002603f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x60ac,	// (0x0002603f) list_double_large_graphic_pane_vc_t1

0x60c8,	// (0x0002605b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x60c8,	// (0x0002605b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x0002f9d9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x0002f9d9) list_double_large_graphic_pane_vc_t

0x5c86,	// (0x00025c19) list_double_heading_pane_vc_g1_ParamLimits

0x5c86,	// (0x00025c19) list_double_heading_pane_vc_g1

0x5c92,	// (0x00025c25) list_double_heading_pane_vc_g2_ParamLimits

0x5c92,	// (0x00025c25) list_double_heading_pane_vc_g2

0x0001,

0xfa4b,	// (0x0002f9de) list_double_heading_pane_vc_g_ParamLimits

0xfa4b,	// (0x0002f9de) list_double_heading_pane_vc_g

0x60ea,	// (0x0002607d) list_double_heading_pane_vc_t1_ParamLimits

0x60ea,	// (0x0002607d) list_double_heading_pane_vc_t1

0x60fe,	// (0x00026091) list_double_heading_pane_vc_t2_ParamLimits

0x60fe,	// (0x00026091) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0002f9e3) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0002f9e3) list_double_heading_pane_vc_t

0x6116,	// (0x000260a9) list_double_graphic_pane_vc_g1_ParamLimits

0x6116,	// (0x000260a9) list_double_graphic_pane_vc_g1

0x6129,	// (0x000260bc) list_double_graphic_pane_vc_g2_ParamLimits

0x6129,	// (0x000260bc) list_double_graphic_pane_vc_g2

0x552e,	// (0x000254c1) list_double_graphic_pane_vc_g3_ParamLimits

0x552e,	// (0x000254c1) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x0002f9e8) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0002f9e8) list_double_graphic_pane_vc_g

0x6146,	// (0x000260d9) list_double_graphic_pane_vc_t1_ParamLimits

0x6146,	// (0x000260d9) list_double_graphic_pane_vc_t1

0x6165,	// (0x000260f8) list_double_graphic_pane_vc_t2_ParamLimits

0x6165,	// (0x000260f8) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0002f9f1) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0002f9f1) list_double_graphic_pane_vc_t

0x658f,	// (0x00026522) aid_size_cell_fastswap

0x6597,	// (0x0002652a) aid_size_cell_touch_ParamLimits

0x6597,	// (0x0002652a) aid_size_cell_touch

0x67f2,	// (0x00026785) popup_fast_swap_wide_window_ParamLimits

0x67f2,	// (0x00026785) popup_fast_swap_wide_window

0x68f8,	// (0x0002688b) touch_pane_ParamLimits

0x68f8,	// (0x0002688b) touch_pane

0x1e56,	// (0x00021de9) button_value_adjust_pane_cp2

0x591b,	// (0x000258ae) button_value_adjust_pane_cp4

0x593b,	// (0x000258ce) form_field_data_pane_cp2

0x595a,	// (0x000258ed) form_field_data_wide_pane_cp2

0x2201,	// (0x00022194) bg_scroll_pane_ParamLimits

0x7259,	// (0x000271ec) scroll_handle_pane_ParamLimits

0x726d,	// (0x00027200) scroll_sc2_down_pane_ParamLimits

0x726d,	// (0x00027200) scroll_sc2_down_pane

0x2232,	// (0x000221c5) scroll_sc2_up_pane_ParamLimits

0x2232,	// (0x000221c5) scroll_sc2_up_pane

0xbbb2,	// (0x0002bb45) grid_wheel_folder_pane_g1_ParamLimits

0xbbb2,	// (0x0002bb45) grid_wheel_folder_pane_g1

0x75d2,	// (0x00027565) clock_nsta_pane_cp2_ParamLimits

0x75d2,	// (0x00027565) clock_nsta_pane_cp2

0x76da,	// (0x0002766d) listscroll_midp_pane_ParamLimits

0x76e6,	// (0x00027679) midp_canvas_pane

0x2903,	// (0x00022896) nsta_clock_indic_pane

0x292b,	// (0x000228be) listscroll_form_pane_vc

0x2933,	// (0x000228c6) listscroll_set_pane_vc_ParamLimits

0x2933,	// (0x000228c6) listscroll_set_pane_vc

0x8105,	// (0x00028098) clock_nsta_pane

0x8180,	// (0x00028113) indicator_nsta_pane

0x845d,	// (0x000283f0) bg_popup_sub_pane_cp2_ParamLimits

0x8471,	// (0x00028404) find_pane_cp2_ParamLimits

0x8471,	// (0x00028404) find_pane_cp2

0x8487,	// (0x0002841a) grid_toobar_pane_ParamLimits

0x8612,	// (0x000285a5) list_form_gen_pane_vc_ParamLimits

0x8612,	// (0x000285a5) list_form_gen_pane_vc

0x8628,	// (0x000285bb) scroll_pane_cp8_vc_ParamLimits

0x8628,	// (0x000285bb) scroll_pane_cp8_vc

0x8741,	// (0x000286d4) data_form_wide_pane_vc_ParamLimits

0x8741,	// (0x000286d4) data_form_wide_pane_vc

0x874d,	// (0x000286e0) form_field_data_wide_pane_vc_g1

0x8755,	// (0x000286e8) form_field_data_wide_pane_vc_t1_ParamLimits

0x8755,	// (0x000286e8) form_field_data_wide_pane_vc_t1

0x1e8d,	// (0x00021e20) input_focus_pane_cp6_vc_ParamLimits

0x1e8d,	// (0x00021e20) input_focus_pane_cp6_vc

0x8a82,	// (0x00028a15) list_midp_pane_ParamLimits

0x8a8e,	// (0x00028a21) scroll_pane_cp16_ParamLimits

0x8a8e,	// (0x00028a21) scroll_pane_cp16

0x8af8,	// (0x00028a8b) button_value_adjust_pane_ParamLimits

0x8af8,	// (0x00028a8b) button_value_adjust_pane

0xaddf,	// (0x0002ad72) button_value_adjust_pane_cp6_ParamLimits

0xaddf,	// (0x0002ad72) button_value_adjust_pane_cp6

0xaf05,	// (0x0002ae98) settings_code_pane_cp_ParamLimits

0xaf05,	// (0x0002ae98) settings_code_pane_cp

0x19ed,	// (0x00021980) cell_touch_pane_g1

0x19ed,	// (0x00021980) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x0002f662) cell_touch_pane_g

0xb4e3,	// (0x0002b476) cell_touch_pane_cp_ParamLimits

0xb4e3,	// (0x0002b476) cell_touch_pane_cp

0xb4f3,	// (0x0002b486) cell_touch_pane_ParamLimits

0xb4f3,	// (0x0002b486) cell_touch_pane

0x19ed,	// (0x00021980) scroll_sc2_down_pane_g1

0x19ed,	// (0x00021980) scroll_sc2_up_pane_g1

0x19f7,	// (0x0002198a) bg_set_opt_pane_cp4_vc

0xb505,	// (0x0002b498) list_set_graphic_pane_vc_g1_ParamLimits

0xb505,	// (0x0002b498) list_set_graphic_pane_vc_g1

0xb511,	// (0x0002b4a4) list_set_graphic_pane_vc_g2_ParamLimits

0xb511,	// (0x0002b4a4) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x0002f959) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x0002f959) list_set_graphic_pane_vc_g

0xb51d,	// (0x0002b4b0) text_primary_small_cp13_vc_ParamLimits

0xb51d,	// (0x0002b4b0) text_primary_small_cp13_vc

0xb535,	// (0x0002b4c8) list_set_graphic_pane_vc_ParamLimits

0xb535,	// (0x0002b4c8) list_set_graphic_pane_vc

0x19f7,	// (0x0002198a) input_focus_pane_cp2_vc

0x19ed,	// (0x00021980) setting_code_pane_vc_g1

0x1a6a,	// (0x000219fd) setting_code_pane_vc_t1

0xb548,	// (0x0002b4db) set_text_pane_vc_t1_ParamLimits

0xb548,	// (0x0002b4db) set_text_pane_vc_t1

0x19f7,	// (0x0002198a) input_focus_pane_cp1_vc

0xb565,	// (0x0002b4f8) list_set_text_pane_vc

0x19ed,	// (0x00021980) setting_text_pane_vc_g1

0x19f7,	// (0x0002198a) bg_set_opt_pane_cp2_vc

0x1a61,	// (0x000219f4) setting_slider_graphic_pane_vc_g1

0xb56f,	// (0x0002b502) setting_slider_graphic_pane_vc_t1

0xb57f,	// (0x0002b512) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x0002f95e) setting_slider_graphic_pane_vc_t

0xb58f,	// (0x0002b522) slider_set_pane_cp_vc

0xb597,	// (0x0002b52a) slider_set_pane_vc_g1

0xb5a0,	// (0x0002b533) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x0002f963) slider_set_pane_vc_g

0x1f53,	// (0x00021ee6) set_opt_bg_pane_g1_copy1

0x1f5b,	// (0x00021eee) set_opt_bg_pane_g2_copy1

0xb5cc,	// (0x0002b55f) set_opt_bg_pane_g3_copy1

0x1f6b,	// (0x00021efe) set_opt_bg_pane_g4_copy1

0x1f73,	// (0x00021f06) set_opt_bg_pane_g5_copy1

0x1f7b,	// (0x00021f0e) set_opt_bg_pane_g6_copy1

0xb5d4,	// (0x0002b567) set_opt_bg_pane_g7_copy1

0xb5de,	// (0x0002b571) set_opt_bg_pane_g8_copy1

0xb5e6,	// (0x0002b579) set_opt_bg_pane_g9_copy1

0x19f7,	// (0x0002198a) bg_set_opt_pane_cp_vc

0xb5ee,	// (0x0002b581) setting_slider_pane_vc_t1

0xb5fd,	// (0x0002b590) setting_slider_pane_vc_t2

0xb60d,	// (0x0002b5a0) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x0002f972) setting_slider_pane_vc_t

0xb61d,	// (0x0002b5b0) slider_set_pane_vc

0x8e48,	// (0x00028ddb) volume_set_pane_vc_g1

0x9143,	// (0x000290d6) volume_set_pane_vc_g2

0x914c,	// (0x000290df) volume_set_pane_vc_g3

0x9155,	// (0x000290e8) volume_set_pane_vc_g4

0x915e,	// (0x000290f1) volume_set_pane_vc_g5

0x9167,	// (0x000290fa) volume_set_pane_vc_g6

0x9170,	// (0x00029103) volume_set_pane_vc_g7

0x9179,	// (0x0002910c) volume_set_pane_vc_g8

0x9182,	// (0x00029115) volume_set_pane_vc_g9

0x918b,	// (0x0002911e) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x0002f979) volume_set_pane_vc_g

0xb625,	// (0x0002b5b8) volume_set_pane_vc

0xb62f,	// (0x0002b5c2) button_value_adjust_pane_cp1_vc

0xb639,	// (0x0002b5cc) list_highlight_pane_cp2_vc

0xb642,	// (0x0002b5d5) list_set_pane_vc_ParamLimits

0xb642,	// (0x0002b5d5) list_set_pane_vc

0xb6a0,	// (0x0002b633) main_pane_set_vc_t1_ParamLimits

0xb6a0,	// (0x0002b633) main_pane_set_vc_t1

0xb6b5,	// (0x0002b648) main_pane_set_vc_t2_ParamLimits

0xb6b5,	// (0x0002b648) main_pane_set_vc_t2

0xb6c7,	// (0x0002b65a) main_pane_set_vc_t3_ParamLimits

0xb6c7,	// (0x0002b65a) main_pane_set_vc_t3

0xb6d9,	// (0x0002b66c) main_pane_set_vc_t4_ParamLimits

0xb6d9,	// (0x0002b66c) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x0002f98e) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x0002f98e) main_pane_set_vc_t

0xb6eb,	// (0x0002b67e) setting_code_pane_vc_ParamLimits

0xb6eb,	// (0x0002b67e) setting_code_pane_vc

0xb6fa,	// (0x0002b68d) setting_slider_graphic_pane_vc

0xb6fa,	// (0x0002b68d) setting_slider_pane_vc

0xb6fa,	// (0x0002b68d) setting_text_pane_vc

0xb6fa,	// (0x0002b68d) setting_volume_pane_vc

0xb702,	// (0x0002b695) scroll_pane_cp121_vc

0x1e44,	// (0x00021dd7) set_content_pane_vc

0xb70a,	// (0x0002b69d) button_value_adjust_pane_g1

0xb713,	// (0x0002b6a6) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x0002f9f6) button_value_adjust_pane_g

0xb71c,	// (0x0002b6af) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb71c,	// (0x0002b6af) form_field_slider_wide_pane_vc_t1

0xb730,	// (0x0002b6c3) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb730,	// (0x0002b6c3) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x0002f9fb) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0002f9fb) form_field_slider_wide_pane_vc_t

0x1a45,	// (0x000219d8) input_focus_pane_cp10_vc_ParamLimits

0x1a45,	// (0x000219d8) input_focus_pane_cp10_vc

0xb75e,	// (0x0002b6f1) slider_cont_pane_cp1_vc_ParamLimits

0xb75e,	// (0x0002b6f1) slider_cont_pane_cp1_vc

0xb770,	// (0x0002b703) slider_form_pane_g1_cp2

0xb5a0,	// (0x0002b533) slider_form_pane_g2_cp2

0xb79d,	// (0x0002b730) form_field_slider_pane_vc_t3

0xb7ab,	// (0x0002b73e) form_field_slider_pane_vc_t4

0xb7b9,	// (0x0002b74c) slider_form_pane_vc_ParamLimits

0xb7b9,	// (0x0002b74c) slider_form_pane_vc

0xb7c6,	// (0x0002b759) form_field_slider_pane_vc_t1_ParamLimits

0xb7c6,	// (0x0002b759) form_field_slider_pane_vc_t1

0xb730,	// (0x0002b6c3) form_field_slider_pane_vc_t2_ParamLimits

0xb730,	// (0x0002b6c3) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x0002fa0d) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x0002fa0d) form_field_slider_pane_vc_t

0x1a45,	// (0x000219d8) input_focus_pane_cp9_vc_ParamLimits

0x1a45,	// (0x000219d8) input_focus_pane_cp9_vc

0xb7e2,	// (0x0002b775) slider_cont_pane_vc_ParamLimits

0xb7e2,	// (0x0002b775) slider_cont_pane_vc

0xb7f6,	// (0x0002b789) list_form_graphic_pane_cp_vc_ParamLimits

0xb7f6,	// (0x0002b789) list_form_graphic_pane_cp_vc

0x874d,	// (0x000286e0) form_field_popup_wide_pane_vc_g1

0xb80b,	// (0x0002b79e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb80b,	// (0x0002b79e) form_field_popup_wide_pane_vc_t1

0x1e8d,	// (0x00021e20) input_focus_pane_cp8_vc_ParamLimits

0x1e8d,	// (0x00021e20) input_focus_pane_cp8_vc

0xb850,	// (0x0002b7e3) list_form_wide_pane_vc_ParamLimits

0xb850,	// (0x0002b7e3) list_form_wide_pane_vc

0xb85c,	// (0x0002b7ef) list_form_graphic_pane_vc_g1

0xb864,	// (0x0002b7f7) list_form_graphic_pane_vc_t1_ParamLimits

0xb864,	// (0x0002b7f7) list_form_graphic_pane_vc_t1

0x1a53,	// (0x000219e6) list_highlight_pane_cp5_vc_ParamLimits

0x1a53,	// (0x000219e6) list_highlight_pane_cp5_vc

0xb880,	// (0x0002b813) list_form_graphic_pane_vc_ParamLimits

0xb880,	// (0x0002b813) list_form_graphic_pane_vc

0x874d,	// (0x000286e0) form_field_popup_pane_vc_g1

0xb896,	// (0x0002b829) form_field_popup_pane_vc_t1_ParamLimits

0xb896,	// (0x0002b829) form_field_popup_pane_vc_t1

0x1e8d,	// (0x00021e20) input_focus_pane_cp7_vc_ParamLimits

0x1e8d,	// (0x00021e20) input_focus_pane_cp7_vc

0xb8ad,	// (0x0002b840) list_form_pane_vc_ParamLimits

0xb8ad,	// (0x0002b840) list_form_pane_vc

0xb8b9,	// (0x0002b84c) data_form_pane_vc_t1_ParamLimits

0xb8b9,	// (0x0002b84c) data_form_pane_vc_t1

0x1f53,	// (0x00021ee6) input_focus_pane_vc_g1

0x1f5b,	// (0x00021eee) input_focus_pane_vc_g2

0x1f63,	// (0x00021ef6) input_focus_pane_vc_g3

0x1f6b,	// (0x00021efe) input_focus_pane_vc_g4

0x1f73,	// (0x00021f06) input_focus_pane_vc_g5

0x1f7b,	// (0x00021f0e) input_focus_pane_vc_g6

0x1f83,	// (0x00021f16) input_focus_pane_vc_g7

0x1f8b,	// (0x00021f1e) input_focus_pane_vc_g8

0x1f93,	// (0x00021f26) input_focus_pane_vc_g9

0x19ed,	// (0x00021980) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x0002f5eb) input_focus_pane_vc_g

0x8741,	// (0x000286d4) data_form_pane_vc_ParamLimits

0x8741,	// (0x000286d4) data_form_pane_vc

0x874d,	// (0x000286e0) form_field_data_pane_vc_g1

0xb8d4,	// (0x0002b867) form_field_data_pane_vc_t1_ParamLimits

0xb8d4,	// (0x0002b867) form_field_data_pane_vc_t1

0x1e8d,	// (0x00021e20) input_focus_pane_vc_ParamLimits

0x1e8d,	// (0x00021e20) input_focus_pane_vc

0xb8ee,	// (0x0002b881) button_value_adjust_pane_cp3_vc

0xb8f6,	// (0x0002b889) button_value_adjust_pane_cp5_vc

0xb8fe,	// (0x0002b891) form_field_data_pane_vc_ParamLimits

0xb8fe,	// (0x0002b891) form_field_data_pane_vc

0xb915,	// (0x0002b8a8) form_field_data_pane_vc_cp2

0xb91d,	// (0x0002b8b0) form_field_data_wide_pane_vc_ParamLimits

0xb91d,	// (0x0002b8b0) form_field_data_wide_pane_vc

0xb933,	// (0x0002b8c6) form_field_data_wide_pane_vc_cp2

0xb93b,	// (0x0002b8ce) form_field_popup_pane_vc_ParamLimits

0xb93b,	// (0x0002b8ce) form_field_popup_pane_vc

0xb952,	// (0x0002b8e5) form_field_popup_wide_pane_vc_ParamLimits

0xb952,	// (0x0002b8e5) form_field_popup_wide_pane_vc

0xb968,	// (0x0002b8fb) form_field_slider_pane_vc_ParamLimits

0xb968,	// (0x0002b8fb) form_field_slider_pane_vc

0xb97b,	// (0x0002b90e) form_field_slider_wide_pane_vc_ParamLimits

0xb97b,	// (0x0002b90e) form_field_slider_wide_pane_vc

0xb98e,	// (0x0002b921) grid_touch_1_pane_ParamLimits

0xb98e,	// (0x0002b921) grid_touch_1_pane

0xb99a,	// (0x0002b92d) grid_touch_2_pane_ParamLimits

0xb99a,	// (0x0002b92d) grid_touch_2_pane

0x28f5,	// (0x00022888) touch_pane_g1_ParamLimits

0x28f5,	// (0x00022888) touch_pane_g1

0xb9b2,	// (0x0002b945) cell_app_pane_cp_wide_ParamLimits

0xb9b2,	// (0x0002b945) cell_app_pane_cp_wide

0xb9c3,	// (0x0002b956) grid_popup_fast_wide_pane_ParamLimits

0xb9c3,	// (0x0002b956) grid_popup_fast_wide_pane

0xb9d7,	// (0x0002b96a) scroll_pane_cp19_ParamLimits

0xb9d7,	// (0x0002b96a) scroll_pane_cp19

0x19f7,	// (0x0002198a) bg_popup_window_pane_cp20

0xb9eb,	// (0x0002b97e) listscroll_popup_fast_wide_pane

0xb9f3,	// (0x0002b986) grid_indicator_nsta_pane

0xba05,	// (0x0002b998) clock_nsta_pane_g1

0xba0e,	// (0x0002b9a1) clock_nsta_pane_t1

0xba2a,	// (0x0002b9bd) cell_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x0002b9bd) cell_indicator_nsta_pane

0xba5f,	// (0x0002b9f2) cell_indicator_nsta_pane_g1

0xba6d,	// (0x0002ba00) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x0002fa1e) cell_indicator_nsta_pane_g

0xba7f,	// (0x0002ba12) clock_nsta_pane_cp

0xba88,	// (0x0002ba1b) indicator_nsta_pane_cp

0xba92,	// (0x0002ba25) nsta_clock_indic_pane_g1

0x1aa9,	// (0x00021a3c) grid_indicator_pane

0x730b,	// (0x0002729e) scroll_pane_cp29

0x7521,	// (0x000274b4) indicator_nsta_pane_cp2_ParamLimits

0x7521,	// (0x000274b4) indicator_nsta_pane_cp2

0x1a53,	// (0x000219e6) main_apps_wheel_pane

0x8965,	// (0x000288f8) form_midp_field_text_pane_ParamLimits

0x8aae,	// (0x00028a41) scroll_bar_cp050_ParamLimits

0xbaeb,	// (0x0002ba7e) cell_indicator_pane_ParamLimits

0xbaeb,	// (0x0002ba7e) cell_indicator_pane

0xbb04,	// (0x0002ba97) cell_indicator_pane_g1

0xbb0e,	// (0x0002baa1) grid_wheel_folder_pane_ParamLimits

0xbb0e,	// (0x0002baa1) grid_wheel_folder_pane

0xbb24,	// (0x0002bab7) list_wheel_apps_pane_ParamLimits

0xbb24,	// (0x0002bab7) list_wheel_apps_pane

0xbb35,	// (0x0002bac8) main_apps_wheel_pane_g1_ParamLimits

0xbb35,	// (0x0002bac8) main_apps_wheel_pane_g1

0xbb49,	// (0x0002badc) main_apps_wheel_pane_g2_ParamLimits

0xbb49,	// (0x0002badc) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x0002fa3a) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x0002fa3a) main_apps_wheel_pane_g

0xbb61,	// (0x0002baf4) main_apps_wheel_pane_t1_ParamLimits

0xbb61,	// (0x0002baf4) main_apps_wheel_pane_t1

0xbb84,	// (0x0002bb17) list_wheel_apps_pane_g1

0xbb8c,	// (0x0002bb1f) list_wheel_apps_pane_g2

0xbb94,	// (0x0002bb27) list_wheel_apps_pane_g3

0xbb9e,	// (0x0002bb31) list_wheel_apps_pane_g4

0xbba8,	// (0x0002bb3b) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x0002fa3f) list_wheel_apps_pane_g

0x2650,	// (0x000225e3) navi_icon_text_pane

0x8034,	// (0x00027fc7) aid_fill_nsta

0xbbcb,	// (0x0002bb5e) navi_icon_text_pane_g1

0xbbd7,	// (0x0002bb6a) navi_icon_text_pane_t1

0x2540,	// (0x000224d3) list_set_graphic_pane_t1_ParamLimits

0x2540,	// (0x000224d3) list_set_graphic_pane_t1

0xa59c,	// (0x0002a52f) popup_midp_note_alarm_window_t6_ParamLimits

0xa59c,	// (0x0002a52f) popup_midp_note_alarm_window_t6

0xa5ae,	// (0x0002a541) popup_midp_note_alarm_window_t7_ParamLimits

0xa5ae,	// (0x0002a541) popup_midp_note_alarm_window_t7

0xa5c0,	// (0x0002a553) popup_midp_note_alarm_window_t8_ParamLimits

0xa5c0,	// (0x0002a553) popup_midp_note_alarm_window_t8

0xa5d2,	// (0x0002a565) popup_midp_note_alarm_window_t9_ParamLimits

0xa5d2,	// (0x0002a565) popup_midp_note_alarm_window_t9

0xa5e4,	// (0x0002a577) popup_midp_note_alarm_window_t10_ParamLimits

0xa5e4,	// (0x0002a577) popup_midp_note_alarm_window_t10

0xa5f6,	// (0x0002a589) popup_midp_note_alarm_window_t11_ParamLimits

0xa5f6,	// (0x0002a589) popup_midp_note_alarm_window_t11

0xa608,	// (0x0002a59b) scroll_pane_cp17_ParamLimits

0xa608,	// (0x0002a59b) scroll_pane_cp17

0x8e48,	// (0x00028ddb) volume_small_pane_cp_g1

0x9194,	// (0x00029127) volume_small_pane_cp_g2

0x919d,	// (0x00029130) volume_small_pane_cp_g3

0x91a6,	// (0x00029139) volume_small_pane_cp_g4

0x91af,	// (0x00029142) volume_small_pane_cp_g5

0x915e,	// (0x000290f1) volume_small_pane_cp_g6

0x91b8,	// (0x0002914b) volume_small_pane_cp_g7

0x91c1,	// (0x00029154) volume_small_pane_cp_g8

0x91ca,	// (0x0002915d) volume_small_pane_cp_g9

0x91d3,	// (0x00029166) volume_small_pane_cp_g10

0x27b6,	// (0x00022749) midp_ticker_pane_g1_ParamLimits

0x27c2,	// (0x00022755) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x0002f6b7) midp_ticker_pane_g_ParamLimits

0x27ce,	// (0x00022761) midp_ticker_pane_t1_ParamLimits

0x804a,	// (0x00027fdd) aid_fill_nsta_2

0x8a9a,	// (0x00028a2d) list_form2_midp_pane

0xaf50,	// (0x0002aee3) midp_editing_number_pane_ParamLimits

0xaf5f,	// (0x0002aef2) midp_ticker_pane_ParamLimits

0xbbe9,	// (0x0002bb7c) form2_midp_field_pane

0xbc0d,	// (0x0002bba0) scroll_pane_cp51

0xbc2d,	// (0x0002bbc0) form2_midp_button_pane_ParamLimits

0xbc2d,	// (0x0002bbc0) form2_midp_button_pane

0xbc3f,	// (0x0002bbd2) form2_midp_content_pane_ParamLimits

0xbc3f,	// (0x0002bbd2) form2_midp_content_pane

0xbc59,	// (0x0002bbec) form2_midp_field_choice_group_pane

0xbc61,	// (0x0002bbf4) form2_midp_field_pane_g1

0xbc69,	// (0x0002bbfc) form2_midp_field_pane_g2

0xbc71,	// (0x0002bc04) form2_midp_field_pane_g3

0xbc79,	// (0x0002bc0c) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x0002fa64) form2_midp_field_pane_g

0xbc81,	// (0x0002bc14) form2_midp_gauge_slider_pane

0xbc89,	// (0x0002bc1c) form2_midp_gauge_wait_pane

0xbc91,	// (0x0002bc24) form2_midp_image_pane_ParamLimits

0xbc91,	// (0x0002bc24) form2_midp_image_pane

0xbcac,	// (0x0002bc3f) form2_midp_label_pane_ParamLimits

0xbcac,	// (0x0002bc3f) form2_midp_label_pane

0xbcc5,	// (0x0002bc58) form2_midp_label_pane_cp_ParamLimits

0xbcc5,	// (0x0002bc58) form2_midp_label_pane_cp

0xbce6,	// (0x0002bc79) form2_midp_string_pane_ParamLimits

0xbce6,	// (0x0002bc79) form2_midp_string_pane

0x618f,	// (0x00026122) form2_midp_text_pane_ParamLimits

0x618f,	// (0x00026122) form2_midp_text_pane

0xbcf8,	// (0x0002bc8b) form2_midp_time_pane

0xbd08,	// (0x0002bc9b) input_focus_pane_cp51_ParamLimits

0xbd08,	// (0x0002bc9b) input_focus_pane_cp51

0xbd20,	// (0x0002bcb3) form2_midp_label_pane_t1_ParamLimits

0xbd20,	// (0x0002bcb3) form2_midp_label_pane_t1

0x61a8,	// (0x0002613b) form2_mdip_text_pane_t1_ParamLimits

0x61a8,	// (0x0002613b) form2_mdip_text_pane_t1

0x61c6,	// (0x00026159) form2_midp_time_pane_t1

0xbd69,	// (0x0002bcfc) form2_midp_gauge_slider_pane_t1

0xbd7b,	// (0x0002bd0e) form2_midp_gauge_slider_pane_t2

0xbd8d,	// (0x0002bd20) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x0002fa6d) form2_midp_gauge_slider_pane_t

0xbd9f,	// (0x0002bd32) form2_midp_slider_pane

0xbdab,	// (0x0002bd3e) form2_midp_gauge_wait_pane_t1

0xbdb9,	// (0x0002bd4c) form2_midp_wait_pane_ParamLimits

0xbdb9,	// (0x0002bd4c) form2_midp_wait_pane

0xbde4,	// (0x0002bd77) list_single_2graphic_pane_cp4_ParamLimits

0xbde4,	// (0x0002bd77) list_single_2graphic_pane_cp4

0x87b6,	// (0x00028749) list_single_midp_graphic_pane_cp_ParamLimits

0x87b6,	// (0x00028749) list_single_midp_graphic_pane_cp

0x19f7,	// (0x0002198a) list_highlight_pane_cp20

0xbe0c,	// (0x0002bd9f) list_single_2graphic_pane_g1_cp4

0xb3e9,	// (0x0002b37c) list_single_2graphic_pane_g2_cp4

0xbe14,	// (0x0002bda7) list_single_2graphic_pane_t1_cp4

0x1a53,	// (0x000219e6) list_highlight_pane_cp21

0xbe23,	// (0x0002bdb6) list_single_midp_graphic_pane_g4_cp

0xbe32,	// (0x0002bdc5) list_single_midp_graphic_pane_t1_cp

0xbe47,	// (0x0002bdda) form2_mdip_string_pane_t1_ParamLimits

0xbe47,	// (0x0002bdda) form2_mdip_string_pane_t1

0x19f7,	// (0x0002198a) bg_wml_button_pane_cp2

0x19ed,	// (0x00021980) form2_midp_image_pane_g1

0x5738,	// (0x000256cb) list_double_large_graphic_pane_g5_ParamLimits

0x5738,	// (0x000256cb) list_double_large_graphic_pane_g5

0x76da,	// (0x0002766d) midp_form_pane_ParamLimits

0x1a53,	// (0x000219e6) main_apps_wheel_pane_ParamLimits

0x7e1c,	// (0x00027daf) popup_preview_window_ParamLimits

0x7e1c,	// (0x00027daf) popup_preview_window

0x7fd7,	// (0x00027f6a) popup_touch_info_window_ParamLimits

0x7fd7,	// (0x00027f6a) popup_touch_info_window

0x7ff5,	// (0x00027f88) popup_touch_menu_window_ParamLimits

0x7ff5,	// (0x00027f88) popup_touch_menu_window

0x19e3,	// (0x00021976) bg_popup_sub_pane_cp6

0xbf4e,	// (0x0002bee1) list_touch_menu_pane

0xbf56,	// (0x0002bee9) list_single_touch_menu_pane_ParamLimits

0xbf56,	// (0x0002bee9) list_single_touch_menu_pane

0xbf6c,	// (0x0002beff) list_single_touch_menu_pane_t1

0x1a53,	// (0x000219e6) bg_popup_sub_pane_cp7_ParamLimits

0x1a53,	// (0x000219e6) bg_popup_sub_pane_cp7

0xbf7a,	// (0x0002bf0d) heading_sub_pane

0xbf82,	// (0x0002bf15) list_touch_info_pane_ParamLimits

0xbf82,	// (0x0002bf15) list_touch_info_pane

0xbf91,	// (0x0002bf24) list_single_touch_info_pane_ParamLimits

0xbf91,	// (0x0002bf24) list_single_touch_info_pane

0xbfa3,	// (0x0002bf36) list_single_touch_info_pane_t1

0xbfb1,	// (0x0002bf44) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x0002fa7b) list_single_touch_info_pane_t

0x279f,	// (0x00022732) bg_popup_heading_pane_cp

0xbfbf,	// (0x0002bf52) heading_sub_pane_t1

0x8653,	// (0x000285e6) bg_popup_preview_window_pane_cp_ParamLimits

0x8653,	// (0x000285e6) bg_popup_preview_window_pane_cp

0xbf7a,	// (0x0002bf0d) heading_preview_pane

0xbf82,	// (0x0002bf15) list_preview_pane_ParamLimits

0xbf82,	// (0x0002bf15) list_preview_pane

0xbfcd,	// (0x0002bf60) popup_preview_window_g1

0xbf91,	// (0x0002bf24) list_single_preview_pane_ParamLimits

0xbf91,	// (0x0002bf24) list_single_preview_pane

0xbfd5,	// (0x0002bf68) list_single_preview_pane_g1

0xbfdd,	// (0x0002bf70) list_single_preview_pane_t1

0xbfa3,	// (0x0002bf36) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x0002fa80) list_single_preview_pane_t

0xbfeb,	// (0x0002bf7e) bg_popup_heading_pane_cp2_ParamLimits

0xbfeb,	// (0x0002bf7e) bg_popup_heading_pane_cp2

0xc001,	// (0x0002bf94) heading_preview_pane_g1

0xc009,	// (0x0002bf9c) heading_preview_pane_t1_ParamLimits

0xc009,	// (0x0002bf9c) heading_preview_pane_t1

0x1ac0,	// (0x00021a53) soft_indicator_pane_t1_ParamLimits

0x1d9f,	// (0x00021d32) scroll_pane_ParamLimits

0x2229,	// (0x000221bc) scroll_sc2_left_pane

0x2220,	// (0x000221b3) scroll_sc2_right_pane

0x2248,	// (0x000221db) scroll_bg_pane_g1_ParamLimits

0x225d,	// (0x000221f0) scroll_bg_pane_g2_ParamLimits

0x2275,	// (0x00022208) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x0002f642) scroll_bg_pane_g_ParamLimits

0x2248,	// (0x000221db) scroll_handle_pane_g1_ParamLimits

0x228a,	// (0x0002221d) scroll_handle_pane_g2_ParamLimits

0x2275,	// (0x00022208) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x0002f649) scroll_handle_pane_g_ParamLimits

0x7a9f,	// (0x00027a32) popup_choice_list_window_ParamLimits

0x7a9f,	// (0x00027a32) popup_choice_list_window

0x8469,	// (0x000283fc) choice_list_pane

0x851b,	// (0x000284ae) cell_toolbar_pane_t1

0x8543,	// (0x000284d6) toolbar_button_pane_ParamLimits

0xaac2,	// (0x0002aa55) ai_gene_pane_1_t2_ParamLimits

0xaac2,	// (0x0002aa55) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x0002f86c) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x0002f86c) ai_gene_pane_1_t

0xc026,	// (0x0002bfb9) scroll_sc2_left_pane_g1

0xc026,	// (0x0002bfb9) scroll_sc2_right_pane_g1

0x203d,	// (0x00021fd0) bg_popup_sub_pane_cp10

0xc030,	// (0x0002bfc3) list_choice_list_pane

0xc049,	// (0x0002bfdc) list_single_choice_list_pane_ParamLimits

0xc049,	// (0x0002bfdc) list_single_choice_list_pane

0xc05c,	// (0x0002bfef) list_single_choice_list_pane_g1

0x6fa4,	// (0x00026f37) list_single_choice_list_pane_t1_ParamLimits

0x6fa4,	// (0x00026f37) list_single_choice_list_pane_t1

0xc064,	// (0x0002bff7) choice_list_pane_g1

0xc06c,	// (0x0002bfff) choice_list_pane_t1

0x19e3,	// (0x00021976) input_focus_pane_cp11

0x2195,	// (0x00022128) title_pane_stacon_g2_ParamLimits

0x2195,	// (0x00022128) title_pane_stacon_g2

0x0002,

0xf695,	// (0x0002f628) title_pane_stacon_g_ParamLimits

0xf695,	// (0x0002f628) title_pane_stacon_g

0x279f,	// (0x00022732) cursor_press_pane

0x7b47,	// (0x00027ada) popup_fep_hwr_window_ParamLimits

0x7b47,	// (0x00027ada) popup_fep_hwr_window

0x7bbf,	// (0x00027b52) popup_fep_vkb_window_ParamLimits

0x7bbf,	// (0x00027b52) popup_fep_vkb_window

0xc07a,	// (0x0002c00d) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x0002faa9) fep_vkb_side_pane_g_ParamLimits

0x9215,	// (0x000291a8) fep_hwr_candidate_pane_ParamLimits

0x9215,	// (0x000291a8) fep_hwr_candidate_pane

0x923f,	// (0x000291d2) fep_hwr_side_pane_ParamLimits

0x923f,	// (0x000291d2) fep_hwr_side_pane

0x925f,	// (0x000291f2) fep_hwr_top_pane_ParamLimits

0x925f,	// (0x000291f2) fep_hwr_top_pane

0x9277,	// (0x0002920a) fep_hwr_write_pane_ParamLimits

0x9277,	// (0x0002920a) fep_hwr_write_pane

0xfb16,	// (0x0002faa9) fep_vkb_side_pane_g

0xc082,	// (0x0002c015) fep_hwr_top_pane_g1

0xc094,	// (0x0002c027) fep_hwr_top_pane_g2

0x92a3,	// (0x00029236) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x0002fa85) fep_hwr_top_pane_g

0x92b8,	// (0x0002924b) fep_hwr_top_text_pane

0x234d,	// (0x000222e0) fep_hwr_top_text_pane_g1

0xc0ca,	// (0x0002c05d) fep_hwr_top_text_pane_t1

0x93ae,	// (0x00029341) fep_hwr_candidate_pane_g1

0xc30f,	// (0x0002c2a2) fep_vkb_keypad_pane_g3_ParamLimits

0xc30f,	// (0x0002c2a2) fep_vkb_keypad_pane_g3

0xc337,	// (0x0002c2ca) fep_vkb_keypad_pane_g4_ParamLimits

0xc337,	// (0x0002c2ca) fep_vkb_keypad_pane_g4

0xc3a6,	// (0x0002c339) fep_vkb_bottom_pane_g2_ParamLimits

0xc3a6,	// (0x0002c339) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x0002fab0) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x0002fab0) fep_vkb_bottom_pane_g

0xc026,	// (0x0002bfb9) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x0002faba) cell_vkb_side_pane_g

0xc431,	// (0x0002c3c4) cell_vkb_side_pane_t1

0xc43f,	// (0x0002c3d2) cell_vkb_side_pane_t1_copy1

0xc026,	// (0x0002bfb9) bg_fep_vkb_candidate_pane_g2

0xc56b,	// (0x0002c4fe) cell_vkb_candidate_pane_ParamLimits

0xc0d8,	// (0x0002c06b) aid_size_cell_vkb_ParamLimits

0xc0d8,	// (0x0002c06b) aid_size_cell_vkb

0xc56b,	// (0x0002c4fe) cell_vkb_candidate_pane

0x93c8,	// (0x0002935b) bg_popup_fep_shadow_pane_g1

0xc166,	// (0x0002c0f9) fep_vkb_bottom_pane_ParamLimits

0xc166,	// (0x0002c0f9) fep_vkb_bottom_pane

0xc19c,	// (0x0002c12f) fep_vkb_candidate_pane_ParamLimits

0xc19c,	// (0x0002c12f) fep_vkb_candidate_pane

0xc1b8,	// (0x0002c14b) fep_vkb_keypad_pane_ParamLimits

0xc1b8,	// (0x0002c14b) fep_vkb_keypad_pane

0xc1f7,	// (0x0002c18a) fep_vkb_side_pane_ParamLimits

0xc1f7,	// (0x0002c18a) fep_vkb_side_pane

0xc233,	// (0x0002c1c6) fep_vkb_top_pane_ParamLimits

0xc233,	// (0x0002c1c6) fep_vkb_top_pane

0xc268,	// (0x0002c1fb) fep_vkb_top_pane_g1_ParamLimits

0xc268,	// (0x0002c1fb) fep_vkb_top_pane_g1

0xc277,	// (0x0002c20a) fep_vkb_top_pane_g2_ParamLimits

0xc277,	// (0x0002c20a) fep_vkb_top_pane_g2

0xc286,	// (0x0002c219) fep_vkb_top_pane_g3_ParamLimits

0xc286,	// (0x0002c219) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x0002faa0) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x0002faa0) fep_vkb_top_pane_g

0xc2a4,	// (0x0002c237) fep_vkb_top_text_pane_ParamLimits

0xc2a4,	// (0x0002c237) fep_vkb_top_text_pane

0xc2b5,	// (0x0002c248) fep_vkb_side_pane_g1_ParamLimits

0xc2b5,	// (0x0002c248) fep_vkb_side_pane_g1

0xc2fe,	// (0x0002c291) grid_vkb_side_pane_ParamLimits

0xc2fe,	// (0x0002c291) grid_vkb_side_pane

0x93d0,	// (0x00029363) bg_popup_fep_shadow_pane_g2

0x93d9,	// (0x0002936c) bg_popup_fep_shadow_pane_g3

0x93e1,	// (0x00029374) bg_popup_fep_shadow_pane_g4

0x93ea,	// (0x0002937d) bg_popup_fep_shadow_pane_g5

0x93f4,	// (0x00029387) bg_popup_fep_shadow_pane_g6

0x93fc,	// (0x0002938f) bg_popup_fep_shadow_pane_g7

0x1f73,	// (0x00021f06) bg_popup_fep_shadow_pane_g8

0xc355,	// (0x0002c2e8) grid_vkb_keypad_number_pane_ParamLimits

0xc355,	// (0x0002c2e8) grid_vkb_keypad_number_pane

0xc365,	// (0x0002c2f8) grid_vkb_keypad_pane_ParamLimits

0xc365,	// (0x0002c2f8) grid_vkb_keypad_pane

0xc38b,	// (0x0002c31e) fep_vkb_bottom_pane_g1_ParamLimits

0xc38b,	// (0x0002c31e) fep_vkb_bottom_pane_g1

0xc3b4,	// (0x0002c347) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3b4,	// (0x0002c347) grid_vkb_keypad_bottom_left_pane

0xc3c9,	// (0x0002c35c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3c9,	// (0x0002c35c) grid_vkb_keypad_bottom_right_pane

0xc3de,	// (0x0002c371) fep_vkb_top_text_pane_g1

0xc3f9,	// (0x0002c38c) fep_vkb_top_text_pane_t1

0xc40e,	// (0x0002c3a1) cell_vkb_side_pane_ParamLimits

0xc40e,	// (0x0002c3a1) cell_vkb_side_pane

0xc026,	// (0x0002bfb9) cell_vkb_side_pane_g1

0xc44d,	// (0x0002c3e0) cell_vkb_keypad_pane_ParamLimits

0xc44d,	// (0x0002c3e0) cell_vkb_keypad_pane

0xc4c2,	// (0x0002c455) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x0002facd) bg_popup_fep_shadow_pane_g

0xc026,	// (0x0002bfb9) cell_hwr_side_pane_g1

0xc026,	// (0x0002bfb9) cell_hwr_side_pane_g2

0xc4cc,	// (0x0002c45f) cell_vkb_keypad_pane_t1

0xc4da,	// (0x0002c46d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4da,	// (0x0002c46d) cell_vkb_keypad_bottom_left_pane

0xc4f7,	// (0x0002c48a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4f7,	// (0x0002c48a) cell_vkb_keypad_bottom_right_pane

0xc026,	// (0x0002bfb9) cell_vkb_keypad_bottom_left_pane_g1

0xc026,	// (0x0002bfb9) cell_vkb_keypad_bottom_right_pane_g1

0xc530,	// (0x0002c4c3) cell_vkb_keypad_number_pane_ParamLimits

0xc530,	// (0x0002c4c3) cell_vkb_keypad_number_pane

0xc54f,	// (0x0002c4e2) cell_vkb_keypad_number_pane_g1

0xc559,	// (0x0002c4ec) cell_vkb_keypad_number_pane_g2

0xc562,	// (0x0002c4f5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x0002fabf) cell_vkb_keypad_number_pane_g

0xc4cc,	// (0x0002c45f) cell_vkb_keypad_number_pane_t1

0xc586,	// (0x0002c519) fep_vkb_candidate_pane_g1

0x0001,

0xfb27,	// (0x0002faba) cell_hwr_side_pane_g

0xc59f,	// (0x0002c532) cell_hwr_side_pane_t1

0x940e,	// (0x000293a1) cell_hwr_side_pane_t1_copy1

0xc296,	// (0x0002c229) cell_hwr_candidate_pane_g1

0x941c,	// (0x000293af) cell_hwr_candidate_pane_t1

0xc026,	// (0x0002bfb9) cell_vkb_candidate_pane_g2

0xc625,	// (0x0002c5b8) cell_vkb_candidate_pane_t1

0x91dc,	// (0x0002916f) bg_popup_fep_shadow_pane_ParamLimits

0x91dc,	// (0x0002916f) bg_popup_fep_shadow_pane

0x19b3,	// (0x00021946) bg_fep_hwr_top_pane_g4

0xc0a6,	// (0x0002c039) bg_hwr_side_pane_g1_ParamLimits

0xc0a6,	// (0x0002c039) bg_hwr_side_pane_g1

0x92f4,	// (0x00029287) cell_hwr_side_pane_ParamLimits

0x92f4,	// (0x00029287) cell_hwr_side_pane

0x932f,	// (0x000292c2) fep_hwr_write_pane_g1_ParamLimits

0x932f,	// (0x000292c2) fep_hwr_write_pane_g1

0x933c,	// (0x000292cf) fep_hwr_write_pane_g2_ParamLimits

0x933c,	// (0x000292cf) fep_hwr_write_pane_g2

0x9349,	// (0x000292dc) fep_hwr_write_pane_g3_ParamLimits

0x9349,	// (0x000292dc) fep_hwr_write_pane_g3

0x9357,	// (0x000292ea) fep_hwr_write_pane_g4_ParamLimits

0x9357,	// (0x000292ea) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x0002fa8c) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x0002fa8c) fep_hwr_write_pane_g

0x19b3,	// (0x00021946) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x19b3,	// (0x00021946) bg_fep_hwr_candidate_pane_g2

0x936c,	// (0x000292ff) cell_hwr_candidate_pane_ParamLimits

0x936c,	// (0x000292ff) cell_hwr_candidate_pane

0x93ae,	// (0x00029341) fep_hwr_candidate_pane_g1_ParamLimits

0xc106,	// (0x0002c099) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc106,	// (0x0002c099) bg_popup_fep_shadow_pane_cp2

0xc296,	// (0x0002c229) fep_vkb_top_pane_g4_ParamLimits

0xc296,	// (0x0002c229) fep_vkb_top_pane_g4

0xc2dc,	// (0x0002c26f) fep_vkb_side_pane_g2_ParamLimits

0xc2dc,	// (0x0002c26f) fep_vkb_side_pane_g2

0x5850,	// (0x000257e3) list_setting_pane_t4_ParamLimits

0x5850,	// (0x000257e3) list_setting_pane_t4

0x58e2,	// (0x00025875) list_setting_number_pane_t5_ParamLimits

0x58e2,	// (0x00025875) list_setting_number_pane_t5

0x733a,	// (0x000272cd) list_double_heading_pane_cp2_ParamLimits

0x733a,	// (0x000272cd) list_double_heading_pane_cp2

0x2970,	// (0x00022903) list_double_heading_pane_g1_cp2_ParamLimits

0x2970,	// (0x00022903) list_double_heading_pane_g1_cp2

0xc633,	// (0x0002c5c6) list_double_heading_pane_g2_cp2_ParamLimits

0xc633,	// (0x0002c5c6) list_double_heading_pane_g2_cp2

0xc647,	// (0x0002c5da) list_double_heading_pane_t1_cp2_ParamLimits

0xc647,	// (0x0002c5da) list_double_heading_pane_t1_cp2

0xc65d,	// (0x0002c5f0) list_double_heading_pane_t2_cp2_ParamLimits

0xc65d,	// (0x0002c5f0) list_double_heading_pane_t2_cp2

0x19db,	// (0x0002196e) aid_value_unit2

0x683e,	// (0x000267d1) popup_preview_fixed_window

0x1b97,	// (0x00021b2a) bg_popup_preview_window_pane_cp02

0xc66f,	// (0x0002c602) list_preview_fixed_pane

0xc6b5,	// (0x0002c648) list_empty_pane_fp_ParamLimits

0xc6b5,	// (0x0002c648) list_empty_pane_fp

0xc6b5,	// (0x0002c648) list_single_cale_day_pane_fp_ParamLimits

0xc6b5,	// (0x0002c648) list_single_cale_day_pane_fp

0xc6b5,	// (0x0002c648) list_single_graphic_heading_pane_fp_ParamLimits

0xc6b5,	// (0x0002c648) list_single_graphic_heading_pane_fp

0xc6b5,	// (0x0002c648) list_single_graphic_pane_fp_ParamLimits

0xc6b5,	// (0x0002c648) list_single_graphic_pane_fp

0xc6b5,	// (0x0002c648) list_single_heading_pane_fp_ParamLimits

0xc6b5,	// (0x0002c648) list_single_heading_pane_fp

0xc6b5,	// (0x0002c648) list_single_pane_fp_ParamLimits

0xc6b5,	// (0x0002c648) list_single_pane_fp

0xc6cb,	// (0x0002c65e) list_single_pane_fp_g1_ParamLimits

0xc6cb,	// (0x0002c65e) list_single_pane_fp_g1

0x56e9,	// (0x0002567c) list_single_pane_fp_g2_ParamLimits

0x56e9,	// (0x0002567c) list_single_pane_fp_g2

0x61d9,	// (0x0002616c) list_single_pane_fp_g3_ParamLimits

0x61d9,	// (0x0002616c) list_single_pane_fp_g3

0xc6d7,	// (0x0002c66a) list_single_pane_fp_g4_ParamLimits

0xc6d7,	// (0x0002c66a) list_single_pane_fp_g4

0x0003,

0xfb5b,	// (0x0002faee) list_single_pane_fp_g_ParamLimits

0xfb5b,	// (0x0002faee) list_single_pane_fp_g

0x61ed,	// (0x00026180) list_single_pane_fp_t1_ParamLimits

0x61ed,	// (0x00026180) list_single_pane_fp_t1

0x6204,	// (0x00026197) list_single_graphic_pane_fp_g1_ParamLimits

0x6204,	// (0x00026197) list_single_graphic_pane_fp_g1

0xc6cb,	// (0x0002c65e) list_single_graphic_pane_fp_g2_ParamLimits

0xc6cb,	// (0x0002c65e) list_single_graphic_pane_fp_g2

0x56e9,	// (0x0002567c) list_single_graphic_pane_fp_g3_ParamLimits

0x56e9,	// (0x0002567c) list_single_graphic_pane_fp_g3

0x61d9,	// (0x0002616c) list_single_graphic_pane_fp_g4_ParamLimits

0x61d9,	// (0x0002616c) list_single_graphic_pane_fp_g4

0xc6d7,	// (0x0002c66a) list_single_graphic_pane_fp_g5_ParamLimits

0xc6d7,	// (0x0002c66a) list_single_graphic_pane_fp_g5

0x0004,

0xfb64,	// (0x0002faf7) list_single_graphic_pane_fp_g_ParamLimits

0xfb64,	// (0x0002faf7) list_single_graphic_pane_fp_g

0x6210,	// (0x000261a3) list_single_graphic_pane_fp_t1_ParamLimits

0x6210,	// (0x000261a3) list_single_graphic_pane_fp_t1

0x6204,	// (0x00026197) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6204,	// (0x00026197) list_single_graphic_heading_pane_fp_g1

0xc6cb,	// (0x0002c65e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6cb,	// (0x0002c65e) list_single_graphic_heading_pane_fp_g2

0x56e9,	// (0x0002567c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x56e9,	// (0x0002567c) list_single_graphic_heading_pane_fp_g3

0x61d9,	// (0x0002616c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x61d9,	// (0x0002616c) list_single_graphic_heading_pane_fp_g4

0xc6d7,	// (0x0002c66a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6d7,	// (0x0002c66a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb64,	// (0x0002faf7) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb64,	// (0x0002faf7) list_single_graphic_heading_pane_fp_g

0x6226,	// (0x000261b9) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6226,	// (0x000261b9) list_single_graphic_heading_pane_fp_t1

0x623c,	// (0x000261cf) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x623c,	// (0x000261cf) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6f,	// (0x0002fb02) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6f,	// (0x0002fb02) list_single_graphic_heading_pane_fp_t

0x624e,	// (0x000261e1) list_single_cale_day_pane_fp_g1_ParamLimits

0x624e,	// (0x000261e1) list_single_cale_day_pane_fp_g1

0xc6e3,	// (0x0002c676) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6e3,	// (0x0002c676) list_single_cale_day_pane_fp_g2

0x6286,	// (0x00026219) list_single_cale_day_pane_fp_g3_ParamLimits

0x6286,	// (0x00026219) list_single_cale_day_pane_fp_g3

0x62ae,	// (0x00026241) list_single_cale_day_pane_fp_g4_ParamLimits

0x62ae,	// (0x00026241) list_single_cale_day_pane_fp_g4

0x62d2,	// (0x00026265) list_single_cale_day_pane_fp_g5_ParamLimits

0x62d2,	// (0x00026265) list_single_cale_day_pane_fp_g5

0x0004,

0xfb74,	// (0x0002fb07) list_single_cale_day_pane_fp_g_ParamLimits

0xfb74,	// (0x0002fb07) list_single_cale_day_pane_fp_g

0x62f6,	// (0x00026289) list_single_cale_day_pane_fp_t1_ParamLimits

0x62f6,	// (0x00026289) list_single_cale_day_pane_fp_t1

0x631c,	// (0x000262af) list_single_cale_day_pane_fp_t2_ParamLimits

0x631c,	// (0x000262af) list_single_cale_day_pane_fp_t2

0x6335,	// (0x000262c8) list_single_cale_day_pane_fp_t3_ParamLimits

0x6335,	// (0x000262c8) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7f,	// (0x0002fb12) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7f,	// (0x0002fb12) list_single_cale_day_pane_fp_t

0xc6cb,	// (0x0002c65e) list_empty_pane_fp_g1_ParamLimits

0xc6cb,	// (0x0002c65e) list_empty_pane_fp_g1

0x634e,	// (0x000262e1) list_empty_pane_fp_t1

0x635c,	// (0x000262ef) list_empty_pane_fp_t2

0x0001,

0xfb86,	// (0x0002fb19) list_empty_pane_fp_t

0xc6cb,	// (0x0002c65e) list_single_heading_pane_fp_g1_ParamLimits

0xc6cb,	// (0x0002c65e) list_single_heading_pane_fp_g1

0x56e9,	// (0x0002567c) list_single_heading_pane_fp_g2_ParamLimits

0x56e9,	// (0x0002567c) list_single_heading_pane_fp_g2

0x61d9,	// (0x0002616c) list_single_heading_pane_fp_g3_ParamLimits

0x61d9,	// (0x0002616c) list_single_heading_pane_fp_g3

0x0002,

0xfb8b,	// (0x0002fb1e) list_single_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002fb1e) list_single_heading_pane_fp_g

0x636a,	// (0x000262fd) list_single_heading_pane_fp_t1_ParamLimits

0x636a,	// (0x000262fd) list_single_heading_pane_fp_t1

0x637c,	// (0x0002630f) list_single_heading_pane_fp_t2_ParamLimits

0x637c,	// (0x0002630f) list_single_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0002fb25) list_single_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0002fb25) list_single_heading_pane_fp_t

0x700a,	// (0x00026f9d) aid_size_cell_fast

0x1b7a,	// (0x00021b0d) soft_indicator_pane_cp1_t1

0x7013,	// (0x00026fa6) cell_app_pane_cp2_ParamLimits

0x7013,	// (0x00026fa6) cell_app_pane_cp2

0x91fe,	// (0x00029191) fep_hwr_candidate_drop_down_list_pane

0x19c1,	// (0x00021954) fep_hwr_candidate_pane_g3_ParamLimits

0x19c1,	// (0x00021954) fep_hwr_candidate_pane_g3

0x19ce,	// (0x00021961) fep_hwr_candidate_pane_g4_ParamLimits

0x19ce,	// (0x00021961) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x0002fa99) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x0002fa99) fep_hwr_candidate_pane_g

0xc18b,	// (0x0002c11e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc18b,	// (0x0002c11e) fep_vkb_candidate_drop_down_list_pane

0xc58e,	// (0x0002c521) fep_vkb_candidate_pane_g3

0xc596,	// (0x0002c529) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x0002fac6) fep_vkb_candidate_pane_g

0xc296,	// (0x0002c229) cell_hwr_candidate_pane_g1_ParamLimits

0xc5ad,	// (0x0002c540) cell_hwr_candidate_pane_g3_ParamLimits

0xc5ad,	// (0x0002c540) cell_hwr_candidate_pane_g3

0xc5ce,	// (0x0002c561) cell_hwr_candidate_pane_g4_ParamLimits

0xc5ce,	// (0x0002c561) cell_hwr_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0002fae0) cell_hwr_candidate_pane_g_ParamLimits

0xfb4d,	// (0x0002fae0) cell_hwr_candidate_pane_g

0xc5ef,	// (0x0002c582) cell_vkb_candidate_pane_g3_ParamLimits

0xc5ef,	// (0x0002c582) cell_vkb_candidate_pane_g3

0xc60a,	// (0x0002c59d) cell_vkb_candidate_pane_g4_ParamLimits

0xc60a,	// (0x0002c59d) cell_vkb_candidate_pane_g4

0xc6ef,	// (0x0002c682) cell_app_pane_cp2_g1_ParamLimits

0xc6ef,	// (0x0002c682) cell_app_pane_cp2_g1

0xc70d,	// (0x0002c6a0) cell_app_pane_cp2_g2_ParamLimits

0xc70d,	// (0x0002c6a0) cell_app_pane_cp2_g2

0x0001,

0xfb97,	// (0x0002fb2a) cell_app_pane_cp2_g_ParamLimits

0xfb97,	// (0x0002fb2a) cell_app_pane_cp2_g

0xc719,	// (0x0002c6ac) cell_app_pane_cp2_t1_ParamLimits

0xc719,	// (0x0002c6ac) cell_app_pane_cp2_t1

0x1e8d,	// (0x00021e20) grid_highlight_pane_cp1_ParamLimits

0x1e8d,	// (0x00021e20) grid_highlight_pane_cp1

0x943a,	// (0x000293cd) cell_hwr_candidate_pane_cp1_ParamLimits

0x943a,	// (0x000293cd) cell_hwr_candidate_pane_cp1

0xc296,	// (0x0002c229) fep_hwr_candidate_drop_down_list_pane_g1

0xc72b,	// (0x0002c6be) fep_hwr_candidate_drop_down_list_pane_g2

0xc738,	// (0x0002c6cb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9c,	// (0x0002fb2f) fep_hwr_candidate_drop_down_list_pane_g

0x9459,	// (0x000293ec) fep_hwr_candidate_drop_down_list_scroll_pane

0x9462,	// (0x000293f5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9462,	// (0x000293f5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x946f,	// (0x00029402) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x946f,	// (0x00029402) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x947c,	// (0x0002940f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x947c,	// (0x0002940f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5ef,	// (0x0002c582) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5ef,	// (0x0002c582) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc60a,	// (0x0002c59d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc60a,	// (0x0002c59d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9489,	// (0x0002941c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9489,	// (0x0002941c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x94a4,	// (0x00029437) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x94a4,	// (0x00029437) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x94bf,	// (0x00029452) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x94bf,	// (0x00029452) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba3,	// (0x0002fb36) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba3,	// (0x0002fb36) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc745,	// (0x0002c6d8) cell_vkb_candidate_pane_cp1_ParamLimits

0xc745,	// (0x0002c6d8) cell_vkb_candidate_pane_cp1

0xc296,	// (0x0002c229) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc296,	// (0x0002c229) fep_vkb_candidate_drop_down_list_pane_g1

0xc72b,	// (0x0002c6be) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc72b,	// (0x0002c6be) fep_vkb_candidate_drop_down_list_pane_g2

0xc738,	// (0x0002c6cb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc738,	// (0x0002c6cb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9c,	// (0x0002fb2f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9c,	// (0x0002fb2f) fep_vkb_candidate_drop_down_list_pane_g

0xc765,	// (0x0002c6f8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc765,	// (0x0002c6f8) fep_vkb_candidate_drop_down_list_scroll_pane

0xc772,	// (0x0002c705) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc772,	// (0x0002c705) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc77f,	// (0x0002c712) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc77f,	// (0x0002c712) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc78b,	// (0x0002c71e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc78b,	// (0x0002c71e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5ad,	// (0x0002c540) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5ad,	// (0x0002c540) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5ce,	// (0x0002c561) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5ce,	// (0x0002c561) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc797,	// (0x0002c72a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc797,	// (0x0002c72a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7b8,	// (0x0002c74b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7b8,	// (0x0002c74b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7d9,	// (0x0002c76c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7d9,	// (0x0002c76c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb4,	// (0x0002fb47) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb4,	// (0x0002fb47) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6958,	// (0x000268eb) title_pane_g1_ParamLimits

0x6965,	// (0x000268f8) title_pane_g2_ParamLimits

0xf529,	// (0x0002f4bc) title_pane_g_ParamLimits

0x2345,	// (0x000222d8) aid_call2_pane

0x233d,	// (0x000222d0) aid_call_pane

0x234d,	// (0x000222e0) popup_clock_analogue_window_g1

0x234d,	// (0x000222e0) popup_clock_analogue_window_g2

0x731b,	// (0x000272ae) popup_clock_analogue_window_g3

0x7324,	// (0x000272b7) popup_clock_analogue_window_g4

0x19ed,	// (0x00021980) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x0002f657) popup_clock_analogue_window_g

0x732c,	// (0x000272bf) popup_clock_analogue_window_t1

0x737a,	// (0x0002730d) clock_digital_number_pane_ParamLimits

0x737a,	// (0x0002730d) clock_digital_number_pane

0x7386,	// (0x00027319) clock_digital_number_pane_cp02_ParamLimits

0x7386,	// (0x00027319) clock_digital_number_pane_cp02

0x7392,	// (0x00027325) clock_digital_number_pane_cp03_ParamLimits

0x7392,	// (0x00027325) clock_digital_number_pane_cp03

0x739e,	// (0x00027331) clock_digital_number_pane_cp04_ParamLimits

0x739e,	// (0x00027331) clock_digital_number_pane_cp04

0x73aa,	// (0x0002733d) clock_digital_separator_pane_ParamLimits

0x73aa,	// (0x0002733d) clock_digital_separator_pane

0x73b6,	// (0x00027349) popup_clock_digital_window_t1_ParamLimits

0x73b6,	// (0x00027349) popup_clock_digital_window_t1

0x19ed,	// (0x00021980) clock_digital_number_pane_g1

0x19ed,	// (0x00021980) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x0002f662) clock_digital_number_pane_g

0x19ed,	// (0x00021980) clock_digital_separator_pane_g1

0x19ed,	// (0x00021980) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x0002f662) clock_digital_separator_pane_g

0x8034,	// (0x00027fc7) aid_fill_nsta_ParamLimits

0x8180,	// (0x00028113) indicator_nsta_pane_ParamLimits

0x82f9,	// (0x0002828c) popup_clock_analogue_window

0x82f9,	// (0x0002828c) popup_clock_digital_window

0xb9f3,	// (0x0002b986) grid_indicator_nsta_pane_ParamLimits

0xba1c,	// (0x0002b9af) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x0002fa19) clock_nsta_pane_t

0x7246,	// (0x000271d9) aid_size_max_handle

0x7250,	// (0x000271e3) aid_size_min_handle

0x279f,	// (0x00022732) editor_scroll_pane

0xc7f4,	// (0x0002c787) ex_editor_pane

0x202d,	// (0x00021fc0) scroll_pane_cp13

0x1dcb,	// (0x00021d5e) scroll_pane_cp14

0x237c,	// (0x0002230f) scroll_pane_cp36

0x734e,	// (0x000272e1) list_single_graphic_hl_pane_cp2_ParamLimits

0x734e,	// (0x000272e1) list_single_graphic_hl_pane_cp2

0xaf94,	// (0x0002af27) list_single_graphic_hl_pane_ParamLimits

0xaf94,	// (0x0002af27) list_single_graphic_hl_pane

0xd6ba,	// (0x0002d64d) aid_size_min_hl_cp1

0xc7fc,	// (0x0002c78f) list_highlight_pane_cp34_ParamLimits

0xc7fc,	// (0x0002c78f) list_highlight_pane_cp34

0xc80d,	// (0x0002c7a0) list_single_graphic_hl_pane_g1_ParamLimits

0xc80d,	// (0x0002c7a0) list_single_graphic_hl_pane_g1

0x6392,	// (0x00026325) list_single_graphic_hl_pane_g2_ParamLimits

0x6392,	// (0x00026325) list_single_graphic_hl_pane_g2

0x6392,	// (0x00026325) list_single_graphic_hl_pane_g3_ParamLimits

0x6392,	// (0x00026325) list_single_graphic_hl_pane_g3

0x5c86,	// (0x00025c19) list_single_graphic_hl_pane_g4_ParamLimits

0x5c86,	// (0x00025c19) list_single_graphic_hl_pane_g4

0x639e,	// (0x00026331) list_single_graphic_hl_pane_g5_ParamLimits

0x639e,	// (0x00026331) list_single_graphic_hl_pane_g5

0x0004,

0xfbc5,	// (0x0002fb58) list_single_graphic_hl_pane_g_ParamLimits

0xfbc5,	// (0x0002fb58) list_single_graphic_hl_pane_g

0x63b2,	// (0x00026345) list_single_graphic_hl_pane_t1_ParamLimits

0x63b2,	// (0x00026345) list_single_graphic_hl_pane_t1

0xc81a,	// (0x0002c7ad) aid_size_min_hl_cp2

0xc823,	// (0x0002c7b6) list_highlight_pane_cp34_cp2_ParamLimits

0xc823,	// (0x0002c7b6) list_highlight_pane_cp34_cp2

0xc80d,	// (0x0002c7a0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc80d,	// (0x0002c7a0) list_single_graphic_hl_pane_g1_cp2

0xc830,	// (0x0002c7c3) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc830,	// (0x0002c7c3) list_single_graphic_hl_pane_g2_cp2

0xc83c,	// (0x0002c7cf) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc83c,	// (0x0002c7cf) list_single_graphic_hl_pane_g3_cp2

0x1dd3,	// (0x00021d66) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1dd3,	// (0x00021d66) list_single_graphic_hl_pane_g4_cp2

0xc84a,	// (0x0002c7dd) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc84a,	// (0x0002c7dd) list_single_graphic_hl_pane_g5_cp2

0x793e,	// (0x000278d1) control_pane_g4_ParamLimits

0x793e,	// (0x000278d1) control_pane_g4

0x203d,	// (0x00021fd0) bg_popup_sub_pane_cp10_ParamLimits

0xc030,	// (0x0002bfc3) list_choice_list_pane_ParamLimits

0xc03f,	// (0x0002bfd2) scroll_pane_cp23

0x1b97,	// (0x00021b2a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc66f,	// (0x0002c602) list_preview_fixed_pane_ParamLimits

0xc685,	// (0x0002c618) list_preview_fixed_pane_cp_ParamLimits

0xc685,	// (0x0002c618) list_preview_fixed_pane_cp

0xc691,	// (0x0002c624) popup_preview_fixed_window_g1_ParamLimits

0xc691,	// (0x0002c624) popup_preview_fixed_window_g1

0xc69d,	// (0x0002c630) popup_preview_fixed_window_g2_ParamLimits

0xc69d,	// (0x0002c630) popup_preview_fixed_window_g2

0x0002,

0xfb54,	// (0x0002fae7) popup_preview_fixed_window_g_ParamLimits

0xfb54,	// (0x0002fae7) popup_preview_fixed_window_g

0x7122,	// (0x000270b5) aid_navi_side_left_pane_ParamLimits

0x7137,	// (0x000270ca) aid_navi_side_right_pane_ParamLimits

0x714f,	// (0x000270e2) navi_icon_pane_stacon_ParamLimits

0x7163,	// (0x000270f6) navi_navi_pane_stacon_ParamLimits

0x714f,	// (0x000270e2) navi_text_pane_stacon_ParamLimits

0x19e3,	// (0x00021976) main_text_info_pane

0xc874,	// (0x0002c807) listscroll_text_info_pane

0xc87c,	// (0x0002c80f) list_text_info_pane_ParamLimits

0xc87c,	// (0x0002c80f) list_text_info_pane

0xc88b,	// (0x0002c81e) scroll_pane_cp24_ParamLimits

0xc88b,	// (0x0002c81e) scroll_pane_cp24

0xc8a9,	// (0x0002c83c) list_text_info_pane_t1_ParamLimits

0xc8a9,	// (0x0002c83c) list_text_info_pane_t1

0x7abb,	// (0x00027a4e) popup_fast_swap2_window_ParamLimits

0x7abb,	// (0x00027a4e) popup_fast_swap2_window

0xc8dd,	// (0x0002c870) aid_size_cell_fast2

0x19e3,	// (0x00021976) bg_popup_window_pane_cp17

0xc8e7,	// (0x0002c87a) heading_pane_cp2

0xc8ef,	// (0x0002c882) listscroll_fast2_pane

0xc8f7,	// (0x0002c88a) grid_fast2_pane

0xc901,	// (0x0002c894) listscroll_fast2_pane_g1

0xc909,	// (0x0002c89c) listscroll_fast2_pane_g2

0x0001,

0xfbd0,	// (0x0002fb63) listscroll_fast2_pane_g

0x202d,	// (0x00021fc0) scroll_pane_cp26

0xc913,	// (0x0002c8a6) cell_fast2_pane_ParamLimits

0xc913,	// (0x0002c8a6) cell_fast2_pane

0xc928,	// (0x0002c8bb) cell_fast2_pane_g1

0xc931,	// (0x0002c8c4) cell_fast2_pane_g2

0xc93a,	// (0x0002c8cd) cell_fast2_pane_g3

0x0002,

0xfbd5,	// (0x0002fb68) cell_fast2_pane_g

0x1d02,	// (0x00021c95) grid_highlight_pane_cp9

0x1d17,	// (0x00021caa) main_eswt_pane_ParamLimits

0x1d17,	// (0x00021caa) main_eswt_pane

0xc8a0,	// (0x0002c833) list_single_text_info_pane

0xc942,	// (0x0002c8d5) eswt_ctrl_button_pane

0xc942,	// (0x0002c8d5) eswt_ctrl_canvas_pane

0xc94a,	// (0x0002c8dd) eswt_ctrl_combo_pane

0xc942,	// (0x0002c8d5) eswt_ctrl_default_pane

0xc942,	// (0x0002c8d5) eswt_ctrl_label_pane

0xc952,	// (0x0002c8e5) eswt_ctrl_wait_pane

0xc95a,	// (0x0002c8ed) eswt_shell_pane

0x19e3,	// (0x00021976) listscroll_eswt_app_pane

0xc97a,	// (0x0002c90d) popup_eswt_tasktip_window_ParamLimits

0xc97a,	// (0x0002c90d) popup_eswt_tasktip_window

0x8653,	// (0x000285e6) bg_popup_window_pane_cp18

0xc993,	// (0x0002c926) eswt_control_pane_g1_ParamLimits

0xc993,	// (0x0002c926) eswt_control_pane_g1

0xc9a0,	// (0x0002c933) eswt_control_pane_g2_ParamLimits

0xc9a0,	// (0x0002c933) eswt_control_pane_g2

0xc9ad,	// (0x0002c940) eswt_control_pane_g3_ParamLimits

0xc9ad,	// (0x0002c940) eswt_control_pane_g3

0xc9ba,	// (0x0002c94d) eswt_control_pane_g4_ParamLimits

0xc9ba,	// (0x0002c94d) eswt_control_pane_g4

0x0003,

0xfbdc,	// (0x0002fb6f) eswt_control_pane_g_ParamLimits

0xfbdc,	// (0x0002fb6f) eswt_control_pane_g

0x1e8d,	// (0x00021e20) bg_button_pane_ParamLimits

0x1e8d,	// (0x00021e20) bg_button_pane

0x1d17,	// (0x00021caa) common_borders_pane_copy2_ParamLimits

0x1d17,	// (0x00021caa) common_borders_pane_copy2

0xc9c7,	// (0x0002c95a) control_button_pane_g1_ParamLimits

0xc9c7,	// (0x0002c95a) control_button_pane_g1

0xc9d3,	// (0x0002c966) control_button_pane_g2_ParamLimits

0xc9d3,	// (0x0002c966) control_button_pane_g2

0xc9df,	// (0x0002c972) control_button_pane_g3_ParamLimits

0xc9df,	// (0x0002c972) control_button_pane_g3

0x0002,

0xfbe5,	// (0x0002fb78) control_button_pane_g_ParamLimits

0xfbe5,	// (0x0002fb78) control_button_pane_g

0xc9f3,	// (0x0002c986) control_button_pane_t1

0xca01,	// (0x0002c994) control_button_pane_t2

0x0001,

0xfbec,	// (0x0002fb7f) control_button_pane_t

0x854f,	// (0x000284e2) bg_button_pane_g1

0x8557,	// (0x000284ea) bg_button_pane_g2

0x855f,	// (0x000284f2) bg_button_pane_g3

0x8567,	// (0x000284fa) bg_button_pane_g4

0x856f,	// (0x00028502) bg_button_pane_g5

0x8577,	// (0x0002850a) bg_button_pane_g6

0x857f,	// (0x00028512) bg_button_pane_g7

0x8587,	// (0x0002851a) bg_button_pane_g8

0x858f,	// (0x00028522) bg_button_pane_g9

0x0008,

0xf82d,	// (0x0002f7c0) bg_button_pane_g

0xbfeb,	// (0x0002bf7e) common_borders_pane_ParamLimits

0xbfeb,	// (0x0002bf7e) common_borders_pane

0xc993,	// (0x0002c926) eswt_control_pane_g1_copy1_ParamLimits

0xc993,	// (0x0002c926) eswt_control_pane_g1_copy1

0xc9a0,	// (0x0002c933) eswt_control_pane_g2_copy1_ParamLimits

0xc9a0,	// (0x0002c933) eswt_control_pane_g2_copy1

0xc9ad,	// (0x0002c940) eswt_control_pane_g3_copy1_ParamLimits

0xc9ad,	// (0x0002c940) eswt_control_pane_g3_copy1

0xc9ba,	// (0x0002c94d) eswt_control_pane_g4_copy1_ParamLimits

0xc9ba,	// (0x0002c94d) eswt_control_pane_g4_copy1

0xc026,	// (0x0002bfb9) bg_eswt_ctrl_canvas_pane_g1

0xbfeb,	// (0x0002bf7e) common_borders_pane_cp2_ParamLimits

0xbfeb,	// (0x0002bf7e) common_borders_pane_cp2

0xbfeb,	// (0x0002bf7e) common_borders_pane_cp3_ParamLimits

0xbfeb,	// (0x0002bf7e) common_borders_pane_cp3

0xca0f,	// (0x0002c9a2) separator_horizontal_pane

0xca17,	// (0x0002c9aa) separator_vertical_pane

0xc993,	// (0x0002c926) eswt_control_pane_g1_copy2_ParamLimits

0xc993,	// (0x0002c926) eswt_control_pane_g1_copy2

0xc9a0,	// (0x0002c933) eswt_control_pane_g2_copy2_ParamLimits

0xc9a0,	// (0x0002c933) eswt_control_pane_g2_copy2

0xc9ad,	// (0x0002c940) eswt_control_pane_g3_copy2_ParamLimits

0xc9ad,	// (0x0002c940) eswt_control_pane_g3_copy2

0xc9ba,	// (0x0002c94d) eswt_control_pane_g4_copy2_ParamLimits

0xc9ba,	// (0x0002c94d) eswt_control_pane_g4_copy2

0x19e3,	// (0x00021976) common_borders_pane_cp4

0xca20,	// (0x0002c9b3) separator_horizontal_pane_g1

0xca29,	// (0x0002c9bc) separator_horizontal_pane_g2

0xca32,	// (0x0002c9c5) separator_horizontal_pane_g3

0x0002,

0xfbf1,	// (0x0002fb84) separator_horizontal_pane_g

0xc993,	// (0x0002c926) eswt_control_pane_g1_copy3_ParamLimits

0xc993,	// (0x0002c926) eswt_control_pane_g1_copy3

0xc9a0,	// (0x0002c933) eswt_control_pane_g2_copy3_ParamLimits

0xc9a0,	// (0x0002c933) eswt_control_pane_g2_copy3

0xc9ad,	// (0x0002c940) eswt_control_pane_g3_copy3_ParamLimits

0xc9ad,	// (0x0002c940) eswt_control_pane_g3_copy3

0xc9ba,	// (0x0002c94d) eswt_control_pane_g4_copy3_ParamLimits

0xc9ba,	// (0x0002c94d) eswt_control_pane_g4_copy3

0x19e3,	// (0x00021976) common_borders_pane_cp5

0xca3b,	// (0x0002c9ce) separator_vertical_pane_g1

0xca44,	// (0x0002c9d7) separator_vertical_pane_g2

0xca4d,	// (0x0002c9e0) separator_vertical_pane_g3

0x0002,

0xfbf8,	// (0x0002fb8b) separator_vertical_pane_g

0xc993,	// (0x0002c926) eswt_control_pane_g1_copy4_ParamLimits

0xc993,	// (0x0002c926) eswt_control_pane_g1_copy4

0xc9a0,	// (0x0002c933) eswt_control_pane_g2_copy4_ParamLimits

0xc9a0,	// (0x0002c933) eswt_control_pane_g2_copy4

0xc9ad,	// (0x0002c940) eswt_control_pane_g3_copy4_ParamLimits

0xc9ad,	// (0x0002c940) eswt_control_pane_g3_copy4

0xc9ba,	// (0x0002c94d) eswt_control_pane_g4_copy4_ParamLimits

0xc9ba,	// (0x0002c94d) eswt_control_pane_g4_copy4

0xca56,	// (0x0002c9e9) eswt_ctrl_combo_button_pane

0xca5e,	// (0x0002c9f1) eswt_ctrl_input_pane

0xca66,	// (0x0002c9f9) popup_choice_list_window_cp70

0xca6e,	// (0x0002ca01) eswt_ctrl_input_pane_t1

0x19e3,	// (0x00021976) input_focus_pane_cp70

0xbfeb,	// (0x0002bf7e) bg_button_pane_cp70_ParamLimits

0xbfeb,	// (0x0002bf7e) bg_button_pane_cp70

0xca7c,	// (0x0002ca0f) eswt_ctrl_combo_button_pane_g1

0xca84,	// (0x0002ca17) wait_bar_pane_cp70

0x8653,	// (0x000285e6) bg_popup_window_pane_cp70_ParamLimits

0x8653,	// (0x000285e6) bg_popup_window_pane_cp70

0xca8c,	// (0x0002ca1f) popup_eswt_tasktip_window_t1

0xcaa2,	// (0x0002ca35) wait_bar_pane_cp71_ParamLimits

0xcaa2,	// (0x0002ca35) wait_bar_pane_cp71

0xcaae,	// (0x0002ca41) grid_eswt_app_pane

0x2220,	// (0x000221b3) scroll_pane_cp70

0xcab7,	// (0x0002ca4a) cell_eswt_app_pane_ParamLimits

0xcab7,	// (0x0002ca4a) cell_eswt_app_pane

0xcae7,	// (0x0002ca7a) cell_eswt_app_pane_g1_ParamLimits

0xcae7,	// (0x0002ca7a) cell_eswt_app_pane_g1

0xcb16,	// (0x0002caa9) cell_eswt_app_pane_g2_ParamLimits

0xcb16,	// (0x0002caa9) cell_eswt_app_pane_g2

0x0001,

0xfbff,	// (0x0002fb92) cell_eswt_app_pane_g_ParamLimits

0xfbff,	// (0x0002fb92) cell_eswt_app_pane_g

0xcb3a,	// (0x0002cacd) cell_eswt_app_pane_t1_ParamLimits

0xcb3a,	// (0x0002cacd) cell_eswt_app_pane_t1

0xcb6c,	// (0x0002caff) grid_highlight_pane_cp70_ParamLimits

0xcb6c,	// (0x0002caff) grid_highlight_pane_cp70

0x26a5,	// (0x00022638) set_content_pane_g1

0x78d4,	// (0x00027867) status_small_volume_pane

0x94da,	// (0x0002946d) status_small_volume_pane_g1

0x94e2,	// (0x00029475) volume_small2_pane

0x94eb,	// (0x0002947e) volume_small2_pane_g1

0x94f4,	// (0x00029487) volume_small2_pane_g2

0x94fd,	// (0x00029490) volume_small2_pane_g3

0x9506,	// (0x00029499) volume_small2_pane_g4

0x950f,	// (0x000294a2) volume_small2_pane_g5

0x9518,	// (0x000294ab) volume_small2_pane_g6

0x9521,	// (0x000294b4) volume_small2_pane_g7

0x952a,	// (0x000294bd) volume_small2_pane_g8

0x9533,	// (0x000294c6) volume_small2_pane_g9

0x953c,	// (0x000294cf) volume_small2_pane_g10

0x0009,

0xfc04,	// (0x0002fb97) volume_small2_pane_g

0xc3de,	// (0x0002c371) fep_vkb_top_text_pane_g1_ParamLimits

0xc3f9,	// (0x0002c38c) fep_vkb_top_text_pane_t1_ParamLimits

0xc6a9,	// (0x0002c63c) popup_preview_fixed_window_g3_ParamLimits

0xc6a9,	// (0x0002c63c) popup_preview_fixed_window_g3

0x7f6a,	// (0x00027efd) popup_toolbar_trans_pane

0xadbc,	// (0x0002ad4f) aid_height_set_list_ParamLimits

0xadcd,	// (0x0002ad60) aid_size_parent_ParamLimits

0x203d,	// (0x00021fd0) list_highlight_pane_cp2_ParamLimits

0x26a5,	// (0x00022638) set_content_pane_g1_ParamLimits

0xafb3,	// (0x0002af46) list_single_image_pane_ParamLimits

0xafb3,	// (0x0002af46) list_single_image_pane

0xcb78,	// (0x0002cb0b) aid_size_cell_image_ParamLimits

0xcb78,	// (0x0002cb0b) aid_size_cell_image

0xcb85,	// (0x0002cb18) grid_single_image_pane_ParamLimits

0xcb85,	// (0x0002cb18) grid_single_image_pane

0x297c,	// (0x0002290f) list_single_image_pane_g1_ParamLimits

0x297c,	// (0x0002290f) list_single_image_pane_g1

0xcb91,	// (0x0002cb24) list_single_image_pane_g2_ParamLimits

0xcb91,	// (0x0002cb24) list_single_image_pane_g2

0x0001,

0xfc19,	// (0x0002fbac) list_single_image_pane_g_ParamLimits

0xfc19,	// (0x0002fbac) list_single_image_pane_g

0xcba5,	// (0x0002cb38) list_single_image_pane_t1_ParamLimits

0xcba5,	// (0x0002cb38) list_single_image_pane_t1

0xcbbb,	// (0x0002cb4e) cell_image_list_pane_ParamLimits

0xcbbb,	// (0x0002cb4e) cell_image_list_pane

0xcbcf,	// (0x0002cb62) cell_image_list_pane_g1

0xcbd8,	// (0x0002cb6b) cell_image_list_pane_g2

0x0001,

0xfc1e,	// (0x0002fbb1) cell_image_list_pane_g

0xcbe1,	// (0x0002cb74) aid_size_cell_tb_trans_pane

0x1e8d,	// (0x00021e20) bg_tb_trans_pane

0xcbf3,	// (0x0002cb86) grid_tb_trans_pane

0x854f,	// (0x000284e2) bg_tb_trans_pane_g1

0x8557,	// (0x000284ea) bg_tb_trans_pane_g2

0x855f,	// (0x000284f2) bg_tb_trans_pane_g3

0x8567,	// (0x000284fa) bg_tb_trans_pane_g4

0x856f,	// (0x00028502) bg_tb_trans_pane_g5

0x8587,	// (0x0002851a) bg_tb_trans_pane_g6

0x858f,	// (0x00028522) bg_tb_trans_pane_g7

0x8577,	// (0x0002850a) bg_tb_trans_pane_g8

0x857f,	// (0x00028512) bg_tb_trans_pane_g9

0x0008,

0xfc23,	// (0x0002fbb6) bg_tb_trans_pane_g

0xcc07,	// (0x0002cb9a) cell_toolbar_trans_pane_ParamLimits

0xcc07,	// (0x0002cb9a) cell_toolbar_trans_pane

0xc026,	// (0x0002bfb9) cell_toolbar_trans_pane_g1

0xbbf1,	// (0x0002bb84) list_form2_midp_pane_t1

0xbbff,	// (0x0002bb92) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x0002fa5f) list_form2_midp_pane_t

0xbc0d,	// (0x0002bba0) scroll_pane_cp51_ParamLimits

0xbdc9,	// (0x0002bd5c) form2_midp_wait_pane_g1

0xbdd2,	// (0x0002bd65) form2_midp_wait_pane_g2

0xbddb,	// (0x0002bd6e) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x0002fa74) form2_midp_wait_pane_g

0x1a53,	// (0x000219e6) list_highlight_pane_cp21_ParamLimits

0xbe23,	// (0x0002bdb6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe32,	// (0x0002bdc5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5e1a,	// (0x00025dad) list_single_2graphic_im_pane_ParamLimits

0x5e1a,	// (0x00025dad) list_single_2graphic_im_pane

0xcc2d,	// (0x0002cbc0) list_single_2graphic_im_pane_g1_ParamLimits

0xcc2d,	// (0x0002cbc0) list_single_2graphic_im_pane_g1

0xcc3e,	// (0x0002cbd1) list_single_2graphic_im_pane_g2_ParamLimits

0xcc3e,	// (0x0002cbd1) list_single_2graphic_im_pane_g2

0xcc4a,	// (0x0002cbdd) list_single_2graphic_im_pane_g3_ParamLimits

0xcc4a,	// (0x0002cbdd) list_single_2graphic_im_pane_g3

0x0003,

0xfc36,	// (0x0002fbc9) list_single_2graphic_im_pane_g_ParamLimits

0xfc36,	// (0x0002fbc9) list_single_2graphic_im_pane_g

0xcc6a,	// (0x0002cbfd) list_single_2graphic_im_pane_t1_ParamLimits

0xcc6a,	// (0x0002cbfd) list_single_2graphic_im_pane_t1

0xc6b5,	// (0x0002c648) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6b5,	// (0x0002c648) list_single_graphic_2heading_pane_fp

0x6204,	// (0x00026197) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6204,	// (0x00026197) list_single_graphic_2heading_pane_fp_g1

0xc6cb,	// (0x0002c65e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6cb,	// (0x0002c65e) list_single_graphic_2heading_pane_fp_g2

0x56e9,	// (0x0002567c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x56e9,	// (0x0002567c) list_single_graphic_2heading_pane_fp_g3

0x61d9,	// (0x0002616c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x61d9,	// (0x0002616c) list_single_graphic_2heading_pane_fp_g4

0xc6d7,	// (0x0002c66a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6d7,	// (0x0002c66a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb64,	// (0x0002faf7) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb64,	// (0x0002faf7) list_single_graphic_2heading_pane_fp_g

0x63c8,	// (0x0002635b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x63c8,	// (0x0002635b) list_single_graphic_2heading_pane_fp_t1

0x623c,	// (0x000261cf) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x623c,	// (0x000261cf) list_single_graphic_2heading_pane_fp_t2

0x63de,	// (0x00026371) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x63de,	// (0x00026371) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3f,	// (0x0002fbd2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3f,	// (0x0002fbd2) list_single_graphic_2heading_pane_fp_t

0xc0b2,	// (0x0002c045) fep_hwr_write_pane_g5_ParamLimits

0xc0b2,	// (0x0002c045) fep_hwr_write_pane_g5

0xc0be,	// (0x0002c051) fep_hwr_write_pane_g6_ParamLimits

0xc0be,	// (0x0002c051) fep_hwr_write_pane_g6

0xc95a,	// (0x0002c8ed) eswt_shell_pane_ParamLimits

0x8653,	// (0x000285e6) bg_popup_window_pane_cp18_ParamLimits

0xc98b,	// (0x0002c91e) heading_pane_cp70

0xca8c,	// (0x0002ca1f) popup_eswt_tasktip_window_t1_ParamLimits

0x8089,	// (0x0002801c) aid_touch_tab_arrow_left

0x8098,	// (0x0002802b) aid_touch_tab_arrow_right

0x6976,	// (0x00026909) title_pane_g3_ParamLimits

0x6976,	// (0x00026909) title_pane_g3

0x1e24,	// (0x00021db7) set_value_pane_g1

0x7f6a,	// (0x00027efd) popup_toolbar_trans_pane_ParamLimits

0xcbe1,	// (0x0002cb74) aid_size_cell_tb_trans_pane_ParamLimits

0x1e8d,	// (0x00021e20) bg_tb_trans_pane_ParamLimits

0xcbf3,	// (0x0002cb86) grid_tb_trans_pane_ParamLimits

0x1b97,	// (0x00021b2a) cont_note_pane_ParamLimits

0x1b97,	// (0x00021b2a) cont_note_pane

0x1d17,	// (0x00021caa) cont_snote2_single_text_pane_ParamLimits

0x1d17,	// (0x00021caa) cont_snote2_single_text_pane

0x1d17,	// (0x00021caa) cont_snote2_single_graphic_pane_ParamLimits

0x1d17,	// (0x00021caa) cont_snote2_single_graphic_pane

0x8cf5,	// (0x00028c88) cont_note_wait_pane_ParamLimits

0x8cf5,	// (0x00028c88) cont_note_wait_pane

0x8cf5,	// (0x00028c88) cont_note_image_pane_ParamLimits

0x8cf5,	// (0x00028c88) cont_note_image_pane

0xcc9b,	// (0x0002cc2e) popup_note2_window_g1_ParamLimits

0xcc9b,	// (0x0002cc2e) popup_note2_window_g1

0xcccc,	// (0x0002cc5f) popup_note2_window_t1_ParamLimits

0xcccc,	// (0x0002cc5f) popup_note2_window_t1

0xcd11,	// (0x0002cca4) popup_note2_window_t2_ParamLimits

0xcd11,	// (0x0002cca4) popup_note2_window_t2

0xcd56,	// (0x0002cce9) popup_note2_window_t3_ParamLimits

0xcd56,	// (0x0002cce9) popup_note2_window_t3

0xcd9b,	// (0x0002cd2e) popup_note2_window_t4_ParamLimits

0xcd9b,	// (0x0002cd2e) popup_note2_window_t4

0x1c1b,	// (0x00021bae) popup_note2_window_t5_ParamLimits

0x1c1b,	// (0x00021bae) popup_note2_window_t5

0x0004,

0xfc4b,	// (0x0002fbde) popup_note2_window_t_ParamLimits

0xfc4b,	// (0x0002fbde) popup_note2_window_t

0xcdca,	// (0x0002cd5d) popup_note2_image_window_g1_ParamLimits

0xcdca,	// (0x0002cd5d) popup_note2_image_window_g1

0xcdd6,	// (0x0002cd69) popup_note2_image_window_g2_ParamLimits

0xcdd6,	// (0x0002cd69) popup_note2_image_window_g2

0x0001,

0xfc56,	// (0x0002fbe9) popup_note2_image_window_g_ParamLimits

0xfc56,	// (0x0002fbe9) popup_note2_image_window_g

0xcde8,	// (0x0002cd7b) popup_note2_image_window_t1_ParamLimits

0xcde8,	// (0x0002cd7b) popup_note2_image_window_t1

0xce00,	// (0x0002cd93) popup_note2_image_window_t2_ParamLimits

0xce00,	// (0x0002cd93) popup_note2_image_window_t2

0xce18,	// (0x0002cdab) popup_note2_image_window_t3_ParamLimits

0xce18,	// (0x0002cdab) popup_note2_image_window_t3

0x0002,

0xfc5b,	// (0x0002fbee) popup_note2_image_window_t_ParamLimits

0xfc5b,	// (0x0002fbee) popup_note2_image_window_t

0x8d03,	// (0x00028c96) popup_note2_wait_window_g1_ParamLimits

0x8d03,	// (0x00028c96) popup_note2_wait_window_g1

0x8d0f,	// (0x00028ca2) popup_note2_wait_window_g2_ParamLimits

0x8d0f,	// (0x00028ca2) popup_note2_wait_window_g2

0x8d1b,	// (0x00028cae) popup_note2_wait_window_g3_ParamLimits

0x8d1b,	// (0x00028cae) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x0002f7a2) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x0002f7a2) popup_note2_wait_window_g

0xce34,	// (0x0002cdc7) popup_note2_wait_window_t1_ParamLimits

0xce34,	// (0x0002cdc7) popup_note2_wait_window_t1

0xce52,	// (0x0002cde5) popup_note2_wait_window_t2_ParamLimits

0xce52,	// (0x0002cde5) popup_note2_wait_window_t2

0xce70,	// (0x0002ce03) popup_note2_wait_window_t3_ParamLimits

0xce70,	// (0x0002ce03) popup_note2_wait_window_t3

0xce82,	// (0x0002ce15) popup_note2_wait_window_t4_ParamLimits

0xce82,	// (0x0002ce15) popup_note2_wait_window_t4

0x0003,

0xfc62,	// (0x0002fbf5) popup_note2_wait_window_t_ParamLimits

0xfc62,	// (0x0002fbf5) popup_note2_wait_window_t

0xce94,	// (0x0002ce27) wait_bar2_pane_ParamLimits

0xce94,	// (0x0002ce27) wait_bar2_pane

0xceac,	// (0x0002ce3f) popup_snote2_single_text_window_g1_ParamLimits

0xceac,	// (0x0002ce3f) popup_snote2_single_text_window_g1

0xced4,	// (0x0002ce67) popup_snote2_single_text_window_t1_ParamLimits

0xced4,	// (0x0002ce67) popup_snote2_single_text_window_t1

0xcf20,	// (0x0002ceb3) popup_snote2_single_text_window_t2_ParamLimits

0xcf20,	// (0x0002ceb3) popup_snote2_single_text_window_t2

0xcf6c,	// (0x0002ceff) popup_snote2_single_text_window_t3_ParamLimits

0xcf6c,	// (0x0002ceff) popup_snote2_single_text_window_t3

0xcfad,	// (0x0002cf40) popup_snote2_single_text_window_t4_ParamLimits

0xcfad,	// (0x0002cf40) popup_snote2_single_text_window_t4

0xcfe3,	// (0x0002cf76) popup_snote2_single_text_window_t5_ParamLimits

0xcfe3,	// (0x0002cf76) popup_snote2_single_text_window_t5

0x0004,

0xfc6b,	// (0x0002fbfe) popup_snote2_single_text_window_t_ParamLimits

0xfc6b,	// (0x0002fbfe) popup_snote2_single_text_window_t

0xd00e,	// (0x0002cfa1) popup_snote2_single_graphic_window_g1_ParamLimits

0xd00e,	// (0x0002cfa1) popup_snote2_single_graphic_window_g1

0xd036,	// (0x0002cfc9) popup_snote2_single_graphic_window_g2_ParamLimits

0xd036,	// (0x0002cfc9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc76,	// (0x0002fc09) popup_snote2_single_graphic_window_g_ParamLimits

0xfc76,	// (0x0002fc09) popup_snote2_single_graphic_window_g

0xd05e,	// (0x0002cff1) popup_snote2_single_graphic_window_t1_ParamLimits

0xd05e,	// (0x0002cff1) popup_snote2_single_graphic_window_t1

0xd0aa,	// (0x0002d03d) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0aa,	// (0x0002d03d) popup_snote2_single_graphic_window_t2

0xcf6c,	// (0x0002ceff) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf6c,	// (0x0002ceff) popup_snote2_single_graphic_window_t3

0xcfad,	// (0x0002cf40) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfad,	// (0x0002cf40) popup_snote2_single_graphic_window_t4

0xcfe3,	// (0x0002cf76) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfe3,	// (0x0002cf76) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7b,	// (0x0002fc0e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7b,	// (0x0002fc0e) popup_snote2_single_graphic_window_t

0xbaca,	// (0x0002ba5d) clock_nsta_pane_cp2_t1

0xbaca,	// (0x0002ba5d) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x0002fa35) clock_nsta_pane_cp2_t

0x59f8,	// (0x0002598b) form_field_data_wide_pane_g1_ParamLimits

0x1eb8,	// (0x00021e4b) form_field_data_wide_pane_g2_ParamLimits

0x1eb8,	// (0x00021e4b) form_field_data_wide_pane_g2

0x1ec4,	// (0x00021e57) form_field_data_wide_pane_g3_ParamLimits

0x1ec4,	// (0x00021e57) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x0002f5da) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x0002f5da) form_field_data_wide_pane_g

0xb9a6,	// (0x0002b939) grid_touch_3_pane_ParamLimits

0xb9a6,	// (0x0002b939) grid_touch_3_pane

0xd0f6,	// (0x0002d089) cell_touch_3_pane_ParamLimits

0xd0f6,	// (0x0002d089) cell_touch_3_pane

0xc026,	// (0x0002bfb9) cell_touch_3_pane_g1

0xc026,	// (0x0002bfb9) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x0002faba) cell_touch_3_pane_g

0x1c4d,	// (0x00021be0) cont_query_data_pane

0x1c55,	// (0x00021be8) cont_query_data_pane_cp1

0xd124,	// (0x0002d0b7) button_value_adjust_pane_cp7

0xd12c,	// (0x0002d0bf) query_popup_pane_cp3

0x23ae,	// (0x00022341) bg_popup_sub_pane_cp22_ParamLimits

0x7430,	// (0x000273c3) navi_navi_volume_pane_cp2

0x7448,	// (0x000273db) popup_side_volume_key_window_g2

0x7454,	// (0x000273e7) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x0002f670) popup_side_volume_key_window_g

0x746e,	// (0x00027401) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x0002f677) popup_side_volume_key_window_t

0x7692,	// (0x00027625) popup_side_volume_key_window_ParamLimits

0x56dd,	// (0x00025670) list_double_graphic_pane_g4_ParamLimits

0x56dd,	// (0x00025670) list_double_graphic_pane_g4

0x5e5f,	// (0x00025df2) list_single_2heading_msg_pane_ParamLimits

0x5e5f,	// (0x00025df2) list_single_2heading_msg_pane

0x63fe,	// (0x00026391) list_single_2heading_msg_pane_g1_ParamLimits

0x63fe,	// (0x00026391) list_single_2heading_msg_pane_g1

0x552e,	// (0x000254c1) list_single_2heading_msg_pane_g2_ParamLimits

0x552e,	// (0x000254c1) list_single_2heading_msg_pane_g2

0x5f5a,	// (0x00025eed) list_single_2heading_msg_pane_g3_ParamLimits

0x5f5a,	// (0x00025eed) list_single_2heading_msg_pane_g3

0x640a,	// (0x0002639d) list_single_2heading_msg_pane_g4_ParamLimits

0x640a,	// (0x0002639d) list_single_2heading_msg_pane_g4

0x0003,

0xfc86,	// (0x0002fc19) list_single_2heading_msg_pane_g_ParamLimits

0xfc86,	// (0x0002fc19) list_single_2heading_msg_pane_g

0x6422,	// (0x000263b5) list_single_2heading_msg_pane_t1_ParamLimits

0x6422,	// (0x000263b5) list_single_2heading_msg_pane_t1

0x644a,	// (0x000263dd) list_single_2heading_msg_pane_t2_ParamLimits

0x644a,	// (0x000263dd) list_single_2heading_msg_pane_t2

0x647e,	// (0x00026411) list_single_2heading_msg_pane_t3_ParamLimits

0x647e,	// (0x00026411) list_single_2heading_msg_pane_t3

0x64b7,	// (0x0002644a) list_single_2heading_msg_pane_t4_ParamLimits

0x64b7,	// (0x0002644a) list_single_2heading_msg_pane_t4

0x0003,

0xfc8f,	// (0x0002fc22) list_single_2heading_msg_pane_t_ParamLimits

0xfc8f,	// (0x0002fc22) list_single_2heading_msg_pane_t

0x1a01,	// (0x00021994) title_pane_g4_ParamLimits

0x1a01,	// (0x00021994) title_pane_g4

0x7073,	// (0x00027006) title_pane_stacon_g3_ParamLimits

0x7073,	// (0x00027006) title_pane_stacon_g3

0xcc5e,	// (0x0002cbf1) list_single_2graphic_im_pane_g4_ParamLimits

0xcc5e,	// (0x0002cbf1) list_single_2graphic_im_pane_g4

0xaadf,	// (0x0002aa72) popup_side_volume_key_window_cp

0xb2fc,	// (0x0002b28f) main_idle_act2_pane_t1

0x8597,	// (0x0002852a) toolbar_button_pane_g10

0x6f31,	// (0x00026ec4) popup_toolbar_window_cp1

0xbabb,	// (0x0002ba4e) clock_nsta_pane_cp_t1

0xbabb,	// (0x0002ba4e) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x0002fa30) clock_nsta_pane_cp_t

0x7430,	// (0x000273c3) navi_navi_volume_pane_cp2_ParamLimits

0x743c,	// (0x000273cf) popup_side_volume_key_window_g1_ParamLimits

0x7448,	// (0x000273db) popup_side_volume_key_window_g2_ParamLimits

0x7454,	// (0x000273e7) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x0002f670) popup_side_volume_key_window_g_ParamLimits

0x91ea,	// (0x0002917d) fep_hwr_aid_pane

0x19b3,	// (0x00021946) bg_fep_hwr_top_pane_g4_ParamLimits

0xc082,	// (0x0002c015) fep_hwr_top_pane_g1_ParamLimits

0xc094,	// (0x0002c027) fep_hwr_top_pane_g2_ParamLimits

0x92a3,	// (0x00029236) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x0002fa85) fep_hwr_top_pane_g_ParamLimits

0x92b8,	// (0x0002924b) fep_hwr_top_text_pane_ParamLimits

0xa8a2,	// (0x0002a835) aid_touch_tab_arrow_arrow_2

0xa8ab,	// (0x0002a83e) aid_touch_tab_arrow_left_2

0x91fe,	// (0x00029191) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x9235,	// (0x000291c8) fep_hwr_prediction_pane

0xc1ed,	// (0x0002c180) fep_vkb_prediction_pane

0xc2ea,	// (0x0002c27d) fep_vkb_side_pane_g3_ParamLimits

0xc2ea,	// (0x0002c27d) fep_vkb_side_pane_g3

0xc296,	// (0x0002c229) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc72b,	// (0x0002c6be) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc738,	// (0x0002c6cb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9c,	// (0x0002fb2f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd151,	// (0x0002d0e4) fep_hwr_prediction_pane_g1

0x9545,	// (0x000294d8) fep_hwr_prediction_pane_g2

0x954d,	// (0x000294e0) fep_hwr_prediction_pane_g3

0x9555,	// (0x000294e8) fep_hwr_prediction_pane_g4

0x0003,

0xfc98,	// (0x0002fc2b) fep_hwr_prediction_pane_g

0xd151,	// (0x0002d0e4) fep_vkb_prediction_pane_g1

0xd15b,	// (0x0002d0ee) fep_vkb_prediction_pane_g2

0xd163,	// (0x0002d0f6) fep_vkb_prediction_pane_g3

0xd16b,	// (0x0002d0fe) fep_vkb_prediction_pane_g4

0x0003,

0xfca1,	// (0x0002fc34) fep_vkb_prediction_pane_g

0x9022,	// (0x00028fb5) slider_set_pane_g3

0x9036,	// (0x00028fc9) slider_set_pane_g4

0x904e,	// (0x00028fe1) slider_set_pane_g5

0x9022,	// (0x00028fb5) slider_set_pane_g6

0x9064,	// (0x00028ff7) slider_set_pane_g7

0xaf2e,	// (0x0002aec1) slider_form_pane_g3

0xaf37,	// (0x0002aeca) slider_form_pane_g4

0xaf3f,	// (0x0002aed2) slider_form_pane_g5

0xaf2e,	// (0x0002aec1) slider_form_pane_g6

0xaf47,	// (0x0002aeda) slider_form_pane_g7

0xb5a8,	// (0x0002b53b) slider_set_pane_vc_g3

0xb5b1,	// (0x0002b544) slider_set_pane_vc_g4

0xb5ba,	// (0x0002b54d) slider_set_pane_vc_g5

0xb5a8,	// (0x0002b53b) slider_set_pane_vc_g6

0xb5c3,	// (0x0002b556) slider_set_pane_vc_g7

0xb779,	// (0x0002b70c) slider_form_pane_vc_g1

0xb782,	// (0x0002b715) slider_form_pane_vc_g2

0xb78b,	// (0x0002b71e) slider_form_pane_vc_g3

0xb779,	// (0x0002b70c) slider_form_pane_vc_g4

0xb794,	// (0x0002b727) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x0002fa02) slider_form_pane_vc_g

0x19e3,	// (0x00021976) main_idle_act3_pane

0xd173,	// (0x0002d106) ai3_links_pane

0xd17c,	// (0x0002d10f) popup_ai3_data_window_ParamLimits

0xd17c,	// (0x0002d10f) popup_ai3_data_window

0x19e3,	// (0x00021976) grid_ai3_links_pane

0xd194,	// (0x0002d127) cell_ai3_links_pane_ParamLimits

0xd194,	// (0x0002d127) cell_ai3_links_pane

0xd1ac,	// (0x0002d13f) bg_popup_sub_pane_cp11

0xd1b9,	// (0x0002d14c) cell_ai3_links_pane_g1

0x19e3,	// (0x00021976) bg_popup_sub_pane_cp12

0xd1de,	// (0x0002d171) heading_ai3_data_pane

0xd1e6,	// (0x0002d179) list_ai3_gene_pane

0xd1f2,	// (0x0002d185) popup_ai3_data_window_g1

0xd1fa,	// (0x0002d18d) heading_ai3_data_pane_g1

0xd202,	// (0x0002d195) heading_ai3_data_pane_t1

0xd210,	// (0x0002d1a3) list_double_ai3_gene_pane_ParamLimits

0xd210,	// (0x0002d1a3) list_double_ai3_gene_pane

0xd21d,	// (0x0002d1b0) list_single_ai3_gene_pane_ParamLimits

0xd21d,	// (0x0002d1b0) list_single_ai3_gene_pane

0xbfeb,	// (0x0002bf7e) list_highlight_pane_cp7_ParamLimits

0xbfeb,	// (0x0002bf7e) list_highlight_pane_cp7

0xd22a,	// (0x0002d1bd) list_single_a13_gene_pane_t1_ParamLimits

0xd22a,	// (0x0002d1bd) list_single_a13_gene_pane_t1

0xd241,	// (0x0002d1d4) list_single_ai3_gene_pane_g1

0xd24a,	// (0x0002d1dd) list_single_ai3_gene_pane_g2

0x0001,

0xfcaa,	// (0x0002fc3d) list_single_ai3_gene_pane_g

0xd252,	// (0x0002d1e5) list_double_ai3_gene_pane_g1_ParamLimits

0xd252,	// (0x0002d1e5) list_double_ai3_gene_pane_g1

0xd25e,	// (0x0002d1f1) list_double_ai3_gene_pane_t1_ParamLimits

0xd25e,	// (0x0002d1f1) list_double_ai3_gene_pane_t1

0xd27a,	// (0x0002d20d) list_double_ai3_gene_pane_t2_ParamLimits

0xd27a,	// (0x0002d20d) list_double_ai3_gene_pane_t2

0xd28f,	// (0x0002d222) list_double_ai3_gene_pane_t3_ParamLimits

0xd28f,	// (0x0002d222) list_double_ai3_gene_pane_t3

0x0002,

0xfcaf,	// (0x0002fc42) list_double_ai3_gene_pane_t_ParamLimits

0xfcaf,	// (0x0002fc42) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x63f4,	// (0x00026387) aid_size_min_col_2

0xd13d,	// (0x0002d0d0) aid_size_min_msg_ParamLimits

0xd13d,	// (0x0002d0d0) aid_size_min_msg

0xc3ea,	// (0x0002c37d) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ea,	// (0x0002c37d) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x0002fab5) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x0002fab5) fep_vkb_top_text_pane_g

0x19e3,	// (0x00021976) main_hc_apps_shell_pane

0xd2ac,	// (0x0002d23f) grid_hc_apps_pane_ParamLimits

0xd2ac,	// (0x0002d23f) grid_hc_apps_pane

0xd2be,	// (0x0002d251) list_hc_apps_pane

0xd2c6,	// (0x0002d259) scroll_pane_cp37_ParamLimits

0xd2c6,	// (0x0002d259) scroll_pane_cp37

0xd2d2,	// (0x0002d265) cell_hc_apps_pane_ParamLimits

0xd2d2,	// (0x0002d265) cell_hc_apps_pane

0xd380,	// (0x0002d313) cell_hc_apps_pane_g1_ParamLimits

0xd380,	// (0x0002d313) cell_hc_apps_pane_g1

0xd3b0,	// (0x0002d343) cell_hc_apps_pane_g2_ParamLimits

0xd3b0,	// (0x0002d343) cell_hc_apps_pane_g2

0xd3cc,	// (0x0002d35f) cell_hc_apps_pane_g3_ParamLimits

0xd3cc,	// (0x0002d35f) cell_hc_apps_pane_g3

0x0002,

0xfcb6,	// (0x0002fc49) cell_hc_apps_pane_g_ParamLimits

0xfcb6,	// (0x0002fc49) cell_hc_apps_pane_g

0xd3ee,	// (0x0002d381) cell_hc_apps_pane_t1_ParamLimits

0xd3ee,	// (0x0002d381) cell_hc_apps_pane_t1

0x1b97,	// (0x00021b2a) grid_highlight_pane_cp10_ParamLimits

0x1b97,	// (0x00021b2a) grid_highlight_pane_cp10

0xd42e,	// (0x0002d3c1) list_single_hc_apps_pane_ParamLimits

0xd42e,	// (0x0002d3c1) list_single_hc_apps_pane

0xd491,	// (0x0002d424) list_single_hc_apps_pane_g1

0x64dc,	// (0x0002646f) list_single_hc_apps_pane_g2

0x0001,

0xfcbd,	// (0x0002fc50) list_single_hc_apps_pane_g

0x64f5,	// (0x00026488) list_single_hc_apps_pane_g2_copy1

0x6511,	// (0x000264a4) list_single_hc_apps_pane_t1

0x1a53,	// (0x000219e6) bg_set_opt_pane_cp_ParamLimits

0x6a26,	// (0x000269b9) setting_slider_pane_t1_ParamLimits

0x6a3f,	// (0x000269d2) setting_slider_pane_t2_ParamLimits

0x6a59,	// (0x000269ec) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002f4cc) setting_slider_pane_t_ParamLimits

0x6a71,	// (0x00026a04) slider_set_pane_ParamLimits

0x7952,	// (0x000278e5) control_pane_g5_ParamLimits

0x7952,	// (0x000278e5) control_pane_g5

0xad81,	// (0x0002ad14) slider_set_pane_g1_ParamLimits

0x9016,	// (0x00028fa9) slider_set_pane_g2_ParamLimits

0x9022,	// (0x00028fb5) slider_set_pane_g3_ParamLimits

0x9036,	// (0x00028fc9) slider_set_pane_g4_ParamLimits

0x904e,	// (0x00028fe1) slider_set_pane_g5_ParamLimits

0x9022,	// (0x00028fb5) slider_set_pane_g6_ParamLimits

0x9064,	// (0x00028ff7) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x0002f8be) slider_set_pane_g_ParamLimits

0x2650,	// (0x000225e3) navi_icon_text_pane_ParamLimits

0x804a,	// (0x00027fdd) aid_fill_nsta_2_ParamLimits

0x8089,	// (0x0002801c) aid_touch_tab_arrow_left_ParamLimits

0x8098,	// (0x0002802b) aid_touch_tab_arrow_right_ParamLimits

0x8105,	// (0x00028098) clock_nsta_pane_ParamLimits

0xa884,	// (0x0002a817) navi_icon_pane_g1_ParamLimits

0xa890,	// (0x0002a823) navi_text_pane_t1_ParamLimits

0xbbcb,	// (0x0002bb5e) navi_icon_text_pane_g1_ParamLimits

0xbbd7,	// (0x0002bb6a) navi_icon_text_pane_t1_ParamLimits

0xd491,	// (0x0002d424) list_single_hc_apps_pane_g1_ParamLimits

0x64dc,	// (0x0002646f) list_single_hc_apps_pane_g2_ParamLimits

0xfcbd,	// (0x0002fc50) list_single_hc_apps_pane_g_ParamLimits

0x64f5,	// (0x00026488) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6511,	// (0x000264a4) list_single_hc_apps_pane_t1_ParamLimits

0x686a,	// (0x000267fd) popup_toolbar2_fixed_window_ParamLimits

0x686a,	// (0x000267fd) popup_toolbar2_fixed_window

0x7f60,	// (0x00027ef3) popup_toolbar2_float_window

0x19e3,	// (0x00021976) bg_popup_sub_pane_cp27

0xd4aa,	// (0x0002d43d) grid_toolbar2_float_pane

0x19e3,	// (0x00021976) bg_popup_sub_pane_cp26

0xd4aa,	// (0x0002d43d) grid_toolbar2_fixed_pane

0xd4b2,	// (0x0002d445) cell_toolbar2_fixed_pane_ParamLimits

0xd4b2,	// (0x0002d445) cell_toolbar2_fixed_pane

0xd4c2,	// (0x0002d455) cell_toolbar2_fixed_pane_g1

0x849f,	// (0x00028432) toolbar2_fixed_button_pane

0x854f,	// (0x000284e2) toolbar2_fixed_button_pane_g1

0x8557,	// (0x000284ea) toolbar2_fixed_button_pane_g2

0x855f,	// (0x000284f2) toolbar2_fixed_button_pane_g3

0x8567,	// (0x000284fa) toolbar2_fixed_button_pane_g4

0x856f,	// (0x00028502) toolbar2_fixed_button_pane_g5

0x8577,	// (0x0002850a) toolbar2_fixed_button_pane_g6

0x857f,	// (0x00028512) toolbar2_fixed_button_pane_g7

0x8587,	// (0x0002851a) toolbar2_fixed_button_pane_g8

0x858f,	// (0x00028522) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x0002f7c0) toolbar2_fixed_button_pane_g

0xd4cb,	// (0x0002d45e) cell_toolbar2_float_pane_ParamLimits

0xd4cb,	// (0x0002d45e) cell_toolbar2_float_pane

0xd4dc,	// (0x0002d46f) cell_toolbar2_float_pane_g1

0x849f,	// (0x00028432) toolbar2_fixed_button_pane_cp

0xc154,	// (0x0002c0e7) fep_vkb_accented_list_pane_ParamLimits

0xc154,	// (0x0002c0e7) fep_vkb_accented_list_pane

0x9406,	// (0x00029399) bg_popup_fep_shadow_pane_g9

0x279f,	// (0x00022732) bg_popup_fep_shadow_pane_cp3

0x2014,	// (0x00021fa7) list_accented_list_pane

0xd4e5,	// (0x0002d478) list_single_accented_list_pane_ParamLimits

0xd4e5,	// (0x0002d478) list_single_accented_list_pane

0x279f,	// (0x00022732) list_highlight_pane_cp10

0xd4f6,	// (0x0002d489) list_single_accented_list_pane_t1

0x7eb0,	// (0x00027e43) popup_slider_window_ParamLimits

0x7eb0,	// (0x00027e43) popup_slider_window

0xd134,	// (0x0002d0c7) aid_indentation_list_msg

0xd5b4,	// (0x0002d547) bg_popup_window_pane_cp19

0xd61c,	// (0x0002d5af) popup_slider_window_g1

0xd638,	// (0x0002d5cb) popup_slider_window_g2

0xd654,	// (0x0002d5e7) popup_slider_window_g3

0x0005,

0xfcc2,	// (0x0002fc55) popup_slider_window_g

0xd6c3,	// (0x0002d656) popup_slider_window_t1

0xd737,	// (0x0002d6ca) small_volume_slider_vertical_pane

0xc026,	// (0x0002bfb9) small_volume_slider_vertical_pane_g1

0xc026,	// (0x0002bfb9) small_volume_slider_vertical_pane_g2

0xd753,	// (0x0002d6e6) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd4,	// (0x0002fc67) small_volume_slider_vertical_pane_g

0x663a,	// (0x000265cd) area_side_right_pane_ParamLimits

0x663a,	// (0x000265cd) area_side_right_pane

0x955d,	// (0x000294f0) aid_size_side_button_ParamLimits

0x955d,	// (0x000294f0) aid_size_side_button

0x9571,	// (0x00029504) grid_sctrl_middle_pane_ParamLimits

0x9571,	// (0x00029504) grid_sctrl_middle_pane

0x9590,	// (0x00029523) sctrl_sk_bottom_pane

0x95a1,	// (0x00029534) sctrl_sk_top_pane

0x95b3,	// (0x00029546) aid_touch_sctrl_top

0x1b97,	// (0x00021b2a) bg_sctrl_sk_pane_ParamLimits

0x1b97,	// (0x00021b2a) bg_sctrl_sk_pane

0x95c0,	// (0x00029553) sctrl_sk_top_pane_g1

0x95cd,	// (0x00029560) sctrl_sk_top_pane_t1

0x95b3,	// (0x00029546) aid_touch_sctrl_bottom

0x1b97,	// (0x00021b2a) bg_sctrl_sk_pane_cp_ParamLimits

0x1b97,	// (0x00021b2a) bg_sctrl_sk_pane_cp

0x95e8,	// (0x0002957b) sctrl_sk_bottom_pane_g1

0x95cd,	// (0x00029560) sctrl_sk_bottom_pane_t1

0x95f1,	// (0x00029584) cell_sctrl_middle_pane_ParamLimits

0x95f1,	// (0x00029584) cell_sctrl_middle_pane

0x960c,	// (0x0002959f) aid_touch_sctrl_middle_ParamLimits

0x960c,	// (0x0002959f) aid_touch_sctrl_middle

0x1e8d,	// (0x00021e20) bg_sctrl_middle_pane_ParamLimits

0x1e8d,	// (0x00021e20) bg_sctrl_middle_pane

0xc296,	// (0x0002c229) cell_sctrl_middle_pane_g1_ParamLimits

0xc296,	// (0x0002c229) cell_sctrl_middle_pane_g1

0x961e,	// (0x000295b1) cell_sctrl_middle_pane_g2_ParamLimits

0x961e,	// (0x000295b1) cell_sctrl_middle_pane_g2

0x0001,

0xfce0,	// (0x0002fc73) cell_sctrl_middle_pane_g_ParamLimits

0xfce0,	// (0x0002fc73) cell_sctrl_middle_pane_g

0x854f,	// (0x000284e2) bg_sctrl_middle_pane_g1

0x8557,	// (0x000284ea) bg_sctrl_middle_pane_g2

0x855f,	// (0x000284f2) bg_sctrl_middle_pane_g3

0x8567,	// (0x000284fa) bg_sctrl_middle_pane_g4

0x856f,	// (0x00028502) bg_sctrl_middle_pane_g5

0x8577,	// (0x0002850a) bg_sctrl_middle_pane_g6

0x857f,	// (0x00028512) bg_sctrl_middle_pane_g7

0x8587,	// (0x0002851a) bg_sctrl_middle_pane_g8

0x0007,

0xfce5,	// (0x0002fc78) bg_sctrl_middle_pane_g

0x858f,	// (0x00028522) bg_sctrl_middle_pane_g8_copy1

0x854f,	// (0x000284e2) bg_sctrl_sk_pane_g1

0x8557,	// (0x000284ea) bg_sctrl_sk_pane_g2

0x855f,	// (0x000284f2) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x0002f7c0) bg_sctrl_sk_pane_g

0x1d65,	// (0x00021cf8) aid_size_touch_scroll_bar

0x8567,	// (0x000284fa) bg_sctrl_sk_pane_g4

0x856f,	// (0x00028502) bg_sctrl_sk_pane_g5

0x8577,	// (0x0002850a) bg_sctrl_sk_pane_g6

0x857f,	// (0x00028512) bg_sctrl_sk_pane_g7

0x8587,	// (0x0002851a) bg_sctrl_sk_pane_g8

0x858f,	// (0x00028522) bg_sctrl_sk_pane_g9

0x7b19,	// (0x00027aac) popup_fep_china_hwr2_fs_candidate_window

0x7b23,	// (0x00027ab6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7b23,	// (0x00027ab6) popup_fep_china_hwr2_fs_control_window

0xc296,	// (0x0002c229) sctrl_sk_top_pane_g2

0x0001,

0xfcdb,	// (0x0002fc6e) sctrl_sk_top_pane_g

0xd75c,	// (0x0002d6ef) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd75c,	// (0x0002d6ef) aid_fep_china_hwr2_fs_cell

0xd76e,	// (0x0002d701) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd76e,	// (0x0002d701) bg_popup_fep_shadow_pane_cp4

0xd785,	// (0x0002d718) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd785,	// (0x0002d718) bg_popup_fep_shadow_pane_cp5

0xd797,	// (0x0002d72a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd797,	// (0x0002d72a) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a7,	// (0x0002d73a) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7af,	// (0x0002d742) aid_fep_china_hwr2_fs_candi_cell

0x19e3,	// (0x00021976) bg_popup_fep_shadow_pane_cp6

0xd7b9,	// (0x0002d74c) popup_fep_china_hwr2_fs_candidate_grid

0xd7c3,	// (0x0002d756) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7c3,	// (0x0002d756) cell_fep_china_hwr2_fs_funtion_grid

0xc026,	// (0x0002bfb9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7db,	// (0x0002d76e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7db,	// (0x0002d76e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7e9,	// (0x0002d77c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7e9,	// (0x0002d77c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf6,	// (0x0002fc89) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf6,	// (0x0002fc89) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7ff,	// (0x0002d792) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7ff,	// (0x0002d792) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd814,	// (0x0002d7a7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd814,	// (0x0002d7a7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfb,	// (0x0002fc8e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfb,	// (0x0002fc8e) cell_fep_china_hwr2_fs_funtion_grid_t

0xd830,	// (0x0002d7c3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd838,	// (0x0002d7cb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd840,	// (0x0002d7d3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd00,	// (0x0002fc93) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd848,	// (0x0002d7db) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd848,	// (0x0002d7db) cell_fep_china_hwr2_fs_candidate_grid

0xd861,	// (0x0002d7f4) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd869,	// (0x0002d7fc) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc026,	// (0x0002bfb9) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc026,	// (0x0002bfb9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x0002faba) cell_fep_china_hwr2_fs_candidate_grid_g

0xd871,	// (0x0002d804) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8118,	// (0x000280ab) clock_nsta_pane_cp_24_ParamLimits

0x8118,	// (0x000280ab) clock_nsta_pane_cp_24

0x8196,	// (0x00028129) indicator_nsta_pane_cp_24_ParamLimits

0x8196,	// (0x00028129) indicator_nsta_pane_cp_24

0xa700,	// (0x0002a693) heading_pane_g1

0x0001,

0xf892,	// (0x0002f825) heading_pane_g

0xb145,	// (0x0002b0d8) grid_sct_catagory_button_pane

0xb175,	// (0x0002b108) scroll_pane_cp5_ParamLimits

0xbc19,	// (0x0002bbac) button_value_adjust_pane_cp5_ParamLimits

0xbc19,	// (0x0002bbac) button_value_adjust_pane_cp5

0xbcf8,	// (0x0002bc8b) form2_midp_time_pane_ParamLimits

0xd87f,	// (0x0002d812) cell_sct_catagory_button_pane_ParamLimits

0xd87f,	// (0x0002d812) cell_sct_catagory_button_pane

0xbfeb,	// (0x0002bf7e) bg_button_pane_cp01_ParamLimits

0xbfeb,	// (0x0002bf7e) bg_button_pane_cp01

0xc026,	// (0x0002bfb9) cell_sct_catagory_button_pane_g1

0x7eef,	// (0x00027e82) popup_tb_extension_window

0xd891,	// (0x0002d824) aid_size_cell_ext_ParamLimits

0xd891,	// (0x0002d824) aid_size_cell_ext

0x1b97,	// (0x00021b2a) bg_tb_trans_pane_cp1_ParamLimits

0x1b97,	// (0x00021b2a) bg_tb_trans_pane_cp1

0xd8b1,	// (0x0002d844) grid_tb_ext_pane_ParamLimits

0xd8b1,	// (0x0002d844) grid_tb_ext_pane

0xd8e1,	// (0x0002d874) cell_tb_ext_pane_ParamLimits

0xd8e1,	// (0x0002d874) cell_tb_ext_pane

0xd8f8,	// (0x0002d88b) cell_tb_ext_pane_g1_ParamLimits

0xd8f8,	// (0x0002d88b) cell_tb_ext_pane_g1

0xd915,	// (0x0002d8a8) cell_tb_ext_pane_t1

0x1b97,	// (0x00021b2a) list_highlight_pane_cp11_ParamLimits

0x1b97,	// (0x00021b2a) list_highlight_pane_cp11

0x6889,	// (0x0002681c) popup_uni_indicator_window_ParamLimits

0x6889,	// (0x0002681c) popup_uni_indicator_window

0x1e8d,	// (0x00021e20) bg_popup_sub_pane_cp14

0xd931,	// (0x0002d8c4) list_uniindi_pane

0xd93d,	// (0x0002d8d0) uniindi_top_pane

0x1b97,	// (0x00021b2a) bg_uniindi_top_pane

0xd95c,	// (0x0002d8ef) uniindi_top_pane_g1

0xd972,	// (0x0002d905) uniindi_top_pane_g2

0x0003,

0xfd07,	// (0x0002fc9a) uniindi_top_pane_g

0xd99c,	// (0x0002d92f) uniindi_top_pane_t1

0xd9c6,	// (0x0002d959) list_single_uniindi_pane_ParamLimits

0xd9c6,	// (0x0002d959) list_single_uniindi_pane

0xc026,	// (0x0002bfb9) bg_uniindi_top_pane_g1

0xd9d9,	// (0x0002d96c) list_single_uniindi_pane_g1

0xd9ec,	// (0x0002d97f) list_single_uniindi_pane_t1

0x19e3,	// (0x00021976) control_bg_pane

0xda11,	// (0x0002d9a4) bg_sctrl_sk_pane_cp1

0xda1a,	// (0x0002d9ad) bg_sctrl_sk_pane_cp2

0xda23,	// (0x0002d9b6) control_bg_pane_g1

0xda2c,	// (0x0002d9bf) control_bg_pane_g2

0x0001,

0xfd10,	// (0x0002fca3) control_bg_pane_g

0xba5f,	// (0x0002b9f2) cell_indicator_nsta_pane_g1_ParamLimits

0xba6d,	// (0x0002ba00) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x0002fa1e) cell_indicator_nsta_pane_g_ParamLimits

0x61c6,	// (0x00026159) form2_midp_time_pane_t1_ParamLimits

0x1d17,	// (0x00021caa) main_idle_act4_pane_ParamLimits

0x1d17,	// (0x00021caa) main_idle_act4_pane

0x7eef,	// (0x00027e82) popup_tb_extension_window_ParamLimits

0xd8d1,	// (0x0002d864) tb_ext_find_pane_ParamLimits

0xd8d1,	// (0x0002d864) tb_ext_find_pane

0xda35,	// (0x0002d9c8) ai_gene_pane_1_cp1

0x2820,	// (0x000227b3) ai_gene_pane_2_cp1

0xda3d,	// (0x0002d9d0) list_single_idle_plugin_calendar_pane

0xda46,	// (0x0002d9d9) list_single_idle_plugin_notification_pane

0xda4f,	// (0x0002d9e2) list_single_idle_plugin_player_pane

0xda58,	// (0x0002d9eb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda58,	// (0x0002d9eb) list_single_idle_plugin_shortcut_pane

0xda7a,	// (0x0002da0d) main_idle_act4_pane_t1

0xda8c,	// (0x0002da1f) main_idle_act4_pane_t2

0x0001,

0xfd15,	// (0x0002fca8) main_idle_act4_pane_t

0xda9e,	// (0x0002da31) middle_sk_idle_act4_pane_ParamLimits

0xda9e,	// (0x0002da31) middle_sk_idle_act4_pane

0xdab4,	// (0x0002da47) popup_clock_digital_analogue_window_cp2

0xdace,	// (0x0002da61) shortcut_wheel_idle_act4_pane_ParamLimits

0xdace,	// (0x0002da61) shortcut_wheel_idle_act4_pane

0xc026,	// (0x0002bfb9) shortcut_wheel_idle_act4_pane_g1

0xc026,	// (0x0002bfb9) shortcut_wheel_idle_act4_pane_g2

0xc026,	// (0x0002bfb9) shortcut_wheel_idle_act4_pane_g3

0xc026,	// (0x0002bfb9) shortcut_wheel_idle_act4_pane_g4

0xc026,	// (0x0002bfb9) shortcut_wheel_idle_act4_pane_g5

0xdae2,	// (0x0002da75) shortcut_wheel_idle_act4_pane_g6

0xdaea,	// (0x0002da7d) shortcut_wheel_idle_act4_pane_g7

0xdaf2,	// (0x0002da85) shortcut_wheel_idle_act4_pane_g8

0xdafa,	// (0x0002da8d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1a,	// (0x0002fcad) shortcut_wheel_idle_act4_pane_g

0xc296,	// (0x0002c229) middle_sk_idle_act4_pane_g1_ParamLimits

0xc296,	// (0x0002c229) middle_sk_idle_act4_pane_g1

0xdb5e,	// (0x0002daf1) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb5e,	// (0x0002daf1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3d,	// (0x0002fcd0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3d,	// (0x0002fcd0) middle_sk_idle_act4_pane_g

0xdb6a,	// (0x0002dafd) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb6a,	// (0x0002dafd) middle_sk_idle_act4_pane_t1

0xdb87,	// (0x0002db1a) grid_ai_shortcut_pane_ParamLimits

0xdb87,	// (0x0002db1a) grid_ai_shortcut_pane

0xdba0,	// (0x0002db33) list_highlight_pane_cp16_ParamLimits

0xdba0,	// (0x0002db33) list_highlight_pane_cp16

0xdbad,	// (0x0002db40) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbad,	// (0x0002db40) list_single_idle_plugin_shortcut_pane_g1

0xdbb9,	// (0x0002db4c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb9,	// (0x0002db4c) list_single_idle_plugin_shortcut_pane_g2

0xdbd1,	// (0x0002db64) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd1,	// (0x0002db64) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd42,	// (0x0002fcd5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd42,	// (0x0002fcd5) list_single_idle_plugin_shortcut_pane_g

0xdbe4,	// (0x0002db77) cell_ai_shortcut_pane_ParamLimits

0xdbe4,	// (0x0002db77) cell_ai_shortcut_pane

0xdc08,	// (0x0002db9b) cell_ai_shortcut_pane_g1_ParamLimits

0xdc08,	// (0x0002db9b) cell_ai_shortcut_pane_g1

0xda35,	// (0x0002d9c8) ai_gene_pane_1_cp2

0xdc2a,	// (0x0002dbbd) ai_gene_pane_2_cp2

0xdc32,	// (0x0002dbc5) list_highlight_pane_cp15

0xdc3b,	// (0x0002dbce) list_single_idle_plugin_calendar_pane_g1

0xdc32,	// (0x0002dbc5) list_highlight_pane_cp17

0xdc43,	// (0x0002dbd6) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc4b,	// (0x0002dbde) list_single_idle_plugin_player_pane_g1

0xb39e,	// (0x0002b331) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd49,	// (0x0002fcdc) list_single_idle_plugin_player_pane_g

0xdc53,	// (0x0002dbe6) list_single_idle_plugin_player_pane_t1

0xdc61,	// (0x0002dbf4) list_single_idle_plugin_player_pane_t2

0xdc6f,	// (0x0002dc02) list_single_idle_plugin_player_pane_t3

0xdc7d,	// (0x0002dc10) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4e,	// (0x0002fce1) list_single_idle_plugin_player_pane_t

0xdc8b,	// (0x0002dc1e) wait_bar_pane_cp15

0xdc93,	// (0x0002dc26) grid_ai_notification_pane

0xb39e,	// (0x0002b331) list_single_idle_plugin_notification_pane_g1

0xdc9c,	// (0x0002dc2f) cell_ai_notification_pane_ParamLimits

0xdc9c,	// (0x0002dc2f) cell_ai_notification_pane

0xdca9,	// (0x0002dc3c) cell_ai_notification_pane_g1

0xdcb1,	// (0x0002dc44) cell_ai_notification_pane_t1

0xdcbf,	// (0x0002dc52) tb_ext_find_button_pane

0xdcc7,	// (0x0002dc5a) tb_ext_find_pane_g1

0xdccf,	// (0x0002dc62) tb_ext_find_pane_t1

0x234d,	// (0x000222e0) tb_ext_find_button_pane_g1

0xdcdd,	// (0x0002dc70) tb_ext_find_button_pane_g2

0x0001,

0xfd57,	// (0x0002fcea) tb_ext_find_button_pane_g

0xda7a,	// (0x0002da0d) main_idle_act4_pane_t1_ParamLimits

0xda8c,	// (0x0002da1f) main_idle_act4_pane_t2_ParamLimits

0xfd15,	// (0x0002fca8) main_idle_act4_pane_t_ParamLimits

0xdab4,	// (0x0002da47) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac2,	// (0x0002da55) sat_plugin_idle_act4_pane_ParamLimits

0xdac2,	// (0x0002da55) sat_plugin_idle_act4_pane

0xdce6,	// (0x0002dc79) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdce6,	// (0x0002dc79) sat_plugin_idle_act4_pane_t1

0xdcf9,	// (0x0002dc8c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf9,	// (0x0002dc8c) sat_plugin_idle_act4_pane_t2

0xdd0c,	// (0x0002dc9f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd0c,	// (0x0002dc9f) sat_plugin_idle_act4_pane_t3

0xdd1f,	// (0x0002dcb2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd1f,	// (0x0002dcb2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5c,	// (0x0002fcef) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5c,	// (0x0002fcef) sat_plugin_idle_act4_pane_t

0x67d2,	// (0x00026765) popup_battery_window_ParamLimits

0x67d2,	// (0x00026765) popup_battery_window

0x1b97,	// (0x00021b2a) bg_popup_sub_pane_cp25_ParamLimits

0x1b97,	// (0x00021b2a) bg_popup_sub_pane_cp25

0xdd32,	// (0x0002dcc5) popup_battery_window_g1_ParamLimits

0xdd32,	// (0x0002dcc5) popup_battery_window_g1

0xdd3e,	// (0x0002dcd1) popup_battery_window_t1_ParamLimits

0xdd3e,	// (0x0002dcd1) popup_battery_window_t1

0xdd50,	// (0x0002dce3) popup_battery_window_t2_ParamLimits

0xdd50,	// (0x0002dce3) popup_battery_window_t2

0x0001,

0xfd65,	// (0x0002fcf8) popup_battery_window_t_ParamLimits

0xfd65,	// (0x0002fcf8) popup_battery_window_t

0x76e6,	// (0x00027679) midp_canvas_pane_ParamLimits

0x775f,	// (0x000276f2) midp_keypad_pane_ParamLimits

0x775f,	// (0x000276f2) midp_keypad_pane

0x203d,	// (0x00021fd0) main_midp_pane_ParamLimits

0xbad9,	// (0x0002ba6c) signal_pane_g2_cp_ParamLimits

0xdd6d,	// (0x0002dd00) aid_size_cell_midp_keypad_ParamLimits

0xdd6d,	// (0x0002dd00) aid_size_cell_midp_keypad

0xdd87,	// (0x0002dd1a) midp_keyp_game_grid_pane_ParamLimits

0xdd87,	// (0x0002dd1a) midp_keyp_game_grid_pane

0xdda7,	// (0x0002dd3a) midp_keyp_rocker_pane_ParamLimits

0xdda7,	// (0x0002dd3a) midp_keyp_rocker_pane

0xdde0,	// (0x0002dd73) midp_keyp_sk_left_pane_ParamLimits

0xdde0,	// (0x0002dd73) midp_keyp_sk_left_pane

0xde3a,	// (0x0002ddcd) midp_keyp_sk_right_pane_ParamLimits

0xde3a,	// (0x0002ddcd) midp_keyp_sk_right_pane

0x19e3,	// (0x00021976) bg_button_pane_cp03

0xde94,	// (0x0002de27) midp_keyp_sk_left_pane_g1

0x19e3,	// (0x00021976) bg_button_pane_cp04

0xde94,	// (0x0002de27) midp_keyp_sk_right_pane_g1

0xc026,	// (0x0002bfb9) midp_keyp_rocker_pane_g1

0xde9d,	// (0x0002de30) keyp_game_cell_pane_ParamLimits

0xde9d,	// (0x0002de30) keyp_game_cell_pane

0x19e3,	// (0x00021976) bg_button_pane_cp02

0xdeb0,	// (0x0002de43) keyp_game_cell_pane_g1

0x6808,	// (0x0002679b) popup_fep_vkb2_window_ParamLimits

0x6808,	// (0x0002679b) popup_fep_vkb2_window

0x963c,	// (0x000295cf) aid_size_cell_vkb2_ParamLimits

0x963c,	// (0x000295cf) aid_size_cell_vkb2

0x9688,	// (0x0002961b) popup_fep_vkb2_window_g1_ParamLimits

0x9688,	// (0x0002961b) popup_fep_vkb2_window_g1

0x96d0,	// (0x00029663) vkb2_area_bottom_pane_ParamLimits

0x96d0,	// (0x00029663) vkb2_area_bottom_pane

0x971c,	// (0x000296af) vkb2_area_keypad_pane_ParamLimits

0x971c,	// (0x000296af) vkb2_area_keypad_pane

0x975e,	// (0x000296f1) vkb2_area_top_pane_ParamLimits

0x975e,	// (0x000296f1) vkb2_area_top_pane

0x97dd,	// (0x00029770) vkb2_top_entry_pane_ParamLimits

0x97dd,	// (0x00029770) vkb2_top_entry_pane

0x9807,	// (0x0002979a) vkb2_top_grid_left_pane_ParamLimits

0x9807,	// (0x0002979a) vkb2_top_grid_left_pane

0x9826,	// (0x000297b9) vkb2_top_grid_right_pane_ParamLimits

0x9826,	// (0x000297b9) vkb2_top_grid_right_pane

0x9845,	// (0x000297d8) vkb2_cell_keypad_pane_ParamLimits

0x9845,	// (0x000297d8) vkb2_cell_keypad_pane

0x9916,	// (0x000298a9) vkb2_area_bottom_grid_pane_ParamLimits

0x9916,	// (0x000298a9) vkb2_area_bottom_grid_pane

0x993c,	// (0x000298cf) vkb2_area_bottom_pane_g1_ParamLimits

0x993c,	// (0x000298cf) vkb2_area_bottom_pane_g1

0x9960,	// (0x000298f3) vkb2_area_bottom_pane_g2_ParamLimits

0x9960,	// (0x000298f3) vkb2_area_bottom_pane_g2

0x998e,	// (0x00029921) vkb2_area_bottom_pane_g3_ParamLimits

0x998e,	// (0x00029921) vkb2_area_bottom_pane_g3

0x0002,

0xfd6a,	// (0x0002fcfd) vkb2_area_bottom_pane_g_ParamLimits

0xfd6a,	// (0x0002fcfd) vkb2_area_bottom_pane_g

0x99ef,	// (0x00029982) vkb2_top_cell_left_pane_ParamLimits

0x99ef,	// (0x00029982) vkb2_top_cell_left_pane

0xdec1,	// (0x0002de54) vkb2_top_entry_pane_g1_ParamLimits

0xdec1,	// (0x0002de54) vkb2_top_entry_pane_g1

0xdecf,	// (0x0002de62) vkb2_top_entry_pane_t1_ParamLimits

0xdecf,	// (0x0002de62) vkb2_top_entry_pane_t1

0xdf01,	// (0x0002de94) vkb2_top_entry_pane_t2_ParamLimits

0xdf01,	// (0x0002de94) vkb2_top_entry_pane_t2

0xdf33,	// (0x0002dec6) vkb2_top_entry_pane_t3_ParamLimits

0xdf33,	// (0x0002dec6) vkb2_top_entry_pane_t3

0x0002,

0xfd71,	// (0x0002fd04) vkb2_top_entry_pane_t_ParamLimits

0xfd71,	// (0x0002fd04) vkb2_top_entry_pane_t

0x9a3c,	// (0x000299cf) vkb2_top_grid_right_pane_g1_ParamLimits

0x9a3c,	// (0x000299cf) vkb2_top_grid_right_pane_g1

0x9a52,	// (0x000299e5) vkb2_top_grid_right_pane_g2_ParamLimits

0x9a52,	// (0x000299e5) vkb2_top_grid_right_pane_g2

0x9a6a,	// (0x000299fd) vkb2_top_grid_right_pane_g3_ParamLimits

0x9a6a,	// (0x000299fd) vkb2_top_grid_right_pane_g3

0x9a82,	// (0x00029a15) vkb2_top_grid_right_pane_g4_ParamLimits

0x9a82,	// (0x00029a15) vkb2_top_grid_right_pane_g4

0x0003,

0xfd78,	// (0x0002fd0b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd78,	// (0x0002fd0b) vkb2_top_grid_right_pane_g

0x9a98,	// (0x00029a2b) vkb2_top_cell_left_pane_g1

0x9aba,	// (0x00029a4d) vkb2_cell_keypad_pane_g1_ParamLimits

0x9aba,	// (0x00029a4d) vkb2_cell_keypad_pane_g1

0xdf57,	// (0x0002deea) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf57,	// (0x0002deea) vkb2_cell_keypad_pane_t1

0x9ac8,	// (0x00029a5b) vkb2_cell_bottom_grid_pane_ParamLimits

0x9ac8,	// (0x00029a5b) vkb2_cell_bottom_grid_pane

0x9b01,	// (0x00029a94) vkb2_cell_bottom_grid_pane_g1

0xdb02,	// (0x0002da95) aid_call2_pane_cp02

0xdb0a,	// (0x0002da9d) aid_call_pane_cp02

0xdb12,	// (0x0002daa5) clock_digital_number_pane_cp10

0xdb1a,	// (0x0002daad) clock_digital_number_pane_cp11

0xdb22,	// (0x0002dab5) clock_digital_number_pane_cp12

0xdb2a,	// (0x0002dabd) clock_digital_number_pane_cp13

0xdb32,	// (0x0002dac5) clock_digital_separator_pane_cp10

0x234d,	// (0x000222e0) popup_clock_digital_analogue_window_cp2_g1

0x234d,	// (0x000222e0) popup_clock_digital_analogue_window_cp2_g2

0xdb3a,	// (0x0002dacd) popup_clock_digital_analogue_window_cp2_g3

0x234d,	// (0x000222e0) popup_clock_digital_analogue_window_cp2_g4

0xdb3a,	// (0x0002dacd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2d,	// (0x0002fcc0) popup_clock_digital_analogue_window_cp2_g

0xdb42,	// (0x0002dad5) popup_clock_digital_analogue_window_cp2_t1

0xdb50,	// (0x0002dae3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd38,	// (0x0002fccb) popup_clock_digital_analogue_window_cp2_t

0xc026,	// (0x0002bfb9) clock_digital_number_pane_cp10_g1

0xc026,	// (0x0002bfb9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x0002faba) clock_digital_number_pane_cp10_g

0xc026,	// (0x0002bfb9) clock_digital_separator_pane_cp10_g1

0xc026,	// (0x0002bfb9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x0002faba) clock_digital_separator_pane_cp10_g

0xd97e,	// (0x0002d911) uniindi_top_pane_g3

0xd98f,	// (0x0002d922) uniindi_top_pane_g4

0x98d0,	// (0x00029863) vkb2_row_keypad_pane_ParamLimits

0x98d0,	// (0x00029863) vkb2_row_keypad_pane

0x9b21,	// (0x00029ab4) vkb2_cell_t_keypad_pane_ParamLimits

0x9b21,	// (0x00029ab4) vkb2_cell_t_keypad_pane

0x9b31,	// (0x00029ac4) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9b31,	// (0x00029ac4) vkb2_cell_t_keypad_pane_cp08

0x9b44,	// (0x00029ad7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9b44,	// (0x00029ad7) vkb2_cell_t_keypad_pane_cp09

0x9b58,	// (0x00029aeb) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9b58,	// (0x00029aeb) vkb2_cell_t_keypad_pane_cp01

0x9b69,	// (0x00029afc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9b69,	// (0x00029afc) vkb2_cell_t_keypad_pane_cp02

0x9b7a,	// (0x00029b0d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9b7a,	// (0x00029b0d) vkb2_cell_t_keypad_pane_cp03

0x9b8b,	// (0x00029b1e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9b8b,	// (0x00029b1e) vkb2_cell_t_keypad_pane_cp04

0x9b9c,	// (0x00029b2f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9b9c,	// (0x00029b2f) vkb2_cell_t_keypad_pane_cp05

0x9bad,	// (0x00029b40) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9bad,	// (0x00029b40) vkb2_cell_t_keypad_pane_cp06

0x9bbe,	// (0x00029b51) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9bbe,	// (0x00029b51) vkb2_cell_t_keypad_pane_cp07

0x9bcf,	// (0x00029b62) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9bcf,	// (0x00029b62) vkb2_cell_t_keypad_pane_cp10

0xc296,	// (0x0002c229) vkb2_cell_t_keypad_pane_g1

0xdf6e,	// (0x0002df01) vkb2_cell_t_keypad_pane_t1

0x19e3,	// (0x00021976) popup_grid_graphic2_window

0xdf80,	// (0x0002df13) aid_size_cell_graphic2_ParamLimits

0xdf80,	// (0x0002df13) aid_size_cell_graphic2

0xdfb8,	// (0x0002df4b) bg_popup_window_pane_cp21_ParamLimits

0xdfb8,	// (0x0002df4b) bg_popup_window_pane_cp21

0xdfc6,	// (0x0002df59) graphic2_pages_pane_ParamLimits

0xdfc6,	// (0x0002df59) graphic2_pages_pane

0xe00c,	// (0x0002df9f) grid_graphic2_control_pane_ParamLimits

0xe00c,	// (0x0002df9f) grid_graphic2_control_pane

0xe04a,	// (0x0002dfdd) grid_graphic2_pane_ParamLimits

0xe04a,	// (0x0002dfdd) grid_graphic2_pane

0xe0be,	// (0x0002e051) cell_graphic2_pane

0x19e3,	// (0x00021976) main_comp_mode_pane

0xd1e6,	// (0x0002d179) list_ai3_gene_pane_ParamLimits

0xd5b4,	// (0x0002d547) bg_popup_window_pane_cp19_ParamLimits

0xd5c0,	// (0x0002d553) bg_touch_area_indi_pane_ParamLimits

0xd5c0,	// (0x0002d553) bg_touch_area_indi_pane

0xd5d6,	// (0x0002d569) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5d6,	// (0x0002d569) bg_touch_area_indi_pane_cp01

0xd5ec,	// (0x0002d57f) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ec,	// (0x0002d57f) bg_touch_area_indi_pane_cp02

0xd602,	// (0x0002d595) bg_touch_area_indi_pane_cp03_ParamLimits

0xd602,	// (0x0002d595) bg_touch_area_indi_pane_cp03

0xd61c,	// (0x0002d5af) popup_slider_window_g1_ParamLimits

0xd638,	// (0x0002d5cb) popup_slider_window_g2_ParamLimits

0xd654,	// (0x0002d5e7) popup_slider_window_g3_ParamLimits

0xfcc2,	// (0x0002fc55) popup_slider_window_g_ParamLimits

0xd6c3,	// (0x0002d656) popup_slider_window_t1_ParamLimits

0xd737,	// (0x0002d6ca) small_volume_slider_vertical_pane_ParamLimits

0xe0be,	// (0x0002e051) cell_graphic2_pane_ParamLimits

0xe10d,	// (0x0002e0a0) bg_button_pane_cp10_ParamLimits

0xe10d,	// (0x0002e0a0) bg_button_pane_cp10

0xe120,	// (0x0002e0b3) bg_button_pane_cp11_ParamLimits

0xe120,	// (0x0002e0b3) bg_button_pane_cp11

0xe133,	// (0x0002e0c6) graphic2_pages_pane_g1_ParamLimits

0xe133,	// (0x0002e0c6) graphic2_pages_pane_g1

0xe14e,	// (0x0002e0e1) graphic2_pages_pane_g2_ParamLimits

0xe14e,	// (0x0002e0e1) graphic2_pages_pane_g2

0x0001,

0xfd86,	// (0x0002fd19) graphic2_pages_pane_g_ParamLimits

0xfd86,	// (0x0002fd19) graphic2_pages_pane_g

0xe166,	// (0x0002e0f9) graphic2_pages_pane_t1_ParamLimits

0xe166,	// (0x0002e0f9) graphic2_pages_pane_t1

0xe17e,	// (0x0002e111) cell_graphic2_control_pane_ParamLimits

0xe17e,	// (0x0002e111) cell_graphic2_control_pane

0xe19c,	// (0x0002e12f) cell_graphic2_pane_g1_ParamLimits

0xe19c,	// (0x0002e12f) cell_graphic2_pane_g1

0xe1a9,	// (0x0002e13c) cell_graphic2_pane_g2_ParamLimits

0xe1a9,	// (0x0002e13c) cell_graphic2_pane_g2

0xe1b6,	// (0x0002e149) cell_graphic2_pane_g3_ParamLimits

0xe1b6,	// (0x0002e149) cell_graphic2_pane_g3

0xe1c3,	// (0x0002e156) cell_graphic2_pane_g4_ParamLimits

0xe1c3,	// (0x0002e156) cell_graphic2_pane_g4

0xe1d0,	// (0x0002e163) cell_graphic2_pane_g5_ParamLimits

0xe1d0,	// (0x0002e163) cell_graphic2_pane_g5

0x0004,

0xfd8b,	// (0x0002fd1e) cell_graphic2_pane_g_ParamLimits

0xfd8b,	// (0x0002fd1e) cell_graphic2_pane_g

0xe1e9,	// (0x0002e17c) cell_graphic2_pane_t1_ParamLimits

0xe1e9,	// (0x0002e17c) cell_graphic2_pane_t1

0x8653,	// (0x000285e6) grid_highlight_pane_cp11_ParamLimits

0x8653,	// (0x000285e6) grid_highlight_pane_cp11

0x1b97,	// (0x00021b2a) bg_button_pane_cp05

0xe21f,	// (0x0002e1b2) cell_graphic2_control_pane_g1

0xc026,	// (0x0002bfb9) bg_touch_area_indi_pane_g1

0xe247,	// (0x0002e1da) aid_cmod_rocker_key_size

0xe251,	// (0x0002e1e4) aid_cmode_itu_key_size

0xe25b,	// (0x0002e1ee) main_cmode_video_pane

0xe265,	// (0x0002e1f8) main_comp_mode_itu_pane

0xe271,	// (0x0002e204) main_comp_mode_rocker_pane

0xe27d,	// (0x0002e210) cell_cmode_rocker_pane_ParamLimits

0xe27d,	// (0x0002e210) cell_cmode_rocker_pane

0xe28f,	// (0x0002e222) cell_cmode_itu_pane_ParamLimits

0xe28f,	// (0x0002e222) cell_cmode_itu_pane

0x1e8d,	// (0x00021e20) bg_button_pane_cp06_ParamLimits

0x1e8d,	// (0x00021e20) bg_button_pane_cp06

0xc296,	// (0x0002c229) cell_cmode_rocker_pane_g1_ParamLimits

0xc296,	// (0x0002c229) cell_cmode_rocker_pane_g1

0xd7db,	// (0x0002d76e) cell_cmode_rocker_pane_g2_ParamLimits

0xd7db,	// (0x0002d76e) cell_cmode_rocker_pane_g2

0x0001,

0xfd9b,	// (0x0002fd2e) cell_cmode_rocker_pane_g_ParamLimits

0xfd9b,	// (0x0002fd2e) cell_cmode_rocker_pane_g

0x19e3,	// (0x00021976) bg_button_pane_cp07

0xe2a4,	// (0x0002e237) cell_cmode_itu_pane_g1

0xe2ad,	// (0x0002e240) cell_cmode_itu_pane_t1

0xe2bb,	// (0x0002e24e) cell_cmode_itu_pane_t2

0x0001,

0xfda0,	// (0x0002fd33) cell_cmode_itu_pane_t

0xda01,	// (0x0002d994) aid_touch_ctrl_left

0xda09,	// (0x0002d99c) aid_touch_ctrl_right

0x19e3,	// (0x00021976) compa_mode_pane

0xe2c9,	// (0x0002e25c) aid_cmod_rocker_key_size_cp

0xe2d3,	// (0x0002e266) aid_cmode_itu_key_size_cp

0xe2dd,	// (0x0002e270) compa_mode_pane_g1

0xe2e5,	// (0x0002e278) compa_mode_pane_g2

0xe2ed,	// (0x0002e280) compa_mode_pane_g3

0x0002,

0xfda5,	// (0x0002fd38) compa_mode_pane_g

0xe2f5,	// (0x0002e288) main_comp_mode_itu_pane_cp

0xe2fd,	// (0x0002e290) main_comp_mode_rocker_pane_cp

0xe305,	// (0x0002e298) cell_cmode_itu_pane_cp_ParamLimits

0xe305,	// (0x0002e298) cell_cmode_itu_pane_cp

0xe31a,	// (0x0002e2ad) cell_cmode_rocker_pane_cp_ParamLimits

0xe31a,	// (0x0002e2ad) cell_cmode_rocker_pane_cp

0x1e8d,	// (0x00021e20) bg_button_pane_cp06_cp_ParamLimits

0x1e8d,	// (0x00021e20) bg_button_pane_cp06_cp

0xc296,	// (0x0002c229) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc296,	// (0x0002c229) cell_cmode_rocker_pane_g1_cp

0xc026,	// (0x0002bfb9) cell_cmode_rocker_pane_g2_cp

0x19e3,	// (0x00021976) bg_button_pane_cp07_cp

0xe32c,	// (0x0002e2bf) cell_cmode_itu_pane_g1_cp

0xe335,	// (0x0002e2c8) cell_cmode_itu_pane_t1_cp

0xe335,	// (0x0002e2c8) cell_cmode_itu_pane_t2_cp

0xaf1b,	// (0x0002aeae) settings_code_pane_cp2

0x1a53,	// (0x000219e6) bg_popup_window_pane_cp3_ParamLimits

0x1cb0,	// (0x00021c43) heading_pane_cp3_ParamLimits

0x1cbf,	// (0x00021c52) listscroll_popup_graphic_pane_ParamLimits

0x91ea,	// (0x0002917d) fep_hwr_aid_pane_ParamLimits

0x95b3,	// (0x00029546) aid_touch_sctrl_top_ParamLimits

0x95c0,	// (0x00029553) sctrl_sk_top_pane_g1_ParamLimits

0xc296,	// (0x0002c229) sctrl_sk_top_pane_g2_ParamLimits

0xfcdb,	// (0x0002fc6e) sctrl_sk_top_pane_g_ParamLimits

0x95cd,	// (0x00029560) sctrl_sk_top_pane_t1_ParamLimits

0x95b3,	// (0x00029546) aid_touch_sctrl_bottom_ParamLimits

0x95cd,	// (0x00029560) sctrl_sk_bottom_pane_t1_ParamLimits

0xd94a,	// (0x0002d8dd) aid_area_touch_clock

0x97a4,	// (0x00029737) aid_vkb2_area_top_pane_cell_ParamLimits

0x97a4,	// (0x00029737) aid_vkb2_area_top_pane_cell

0x98f2,	// (0x00029885) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x98f2,	// (0x00029885) aid_vkb2_area_bottom_pane_cell

0xdeb9,	// (0x0002de4c) popup_char_count_window

0xe343,	// (0x0002e2d6) popup_char_count_window_g1

0xe34c,	// (0x0002e2df) popup_char_count_window_g2

0xe355,	// (0x0002e2e8) popup_char_count_window_g3

0x0002,

0xfdac,	// (0x0002fd3f) popup_char_count_window_g

0xe35e,	// (0x0002e2f1) popup_char_count_window_t1

0x9666,	// (0x000295f9) popup_fep_char_preview_window_ParamLimits

0x9666,	// (0x000295f9) popup_fep_char_preview_window

0x97c2,	// (0x00029755) vkb2_top_candi_pane_ParamLimits

0x97c2,	// (0x00029755) vkb2_top_candi_pane

0xe36c,	// (0x0002e2ff) cell_vkb2_top_candi_pane_ParamLimits

0xe36c,	// (0x0002e2ff) cell_vkb2_top_candi_pane

0x8cf5,	// (0x00028c88) bg_popup_fep_char_preview_window_ParamLimits

0x8cf5,	// (0x00028c88) bg_popup_fep_char_preview_window

0x9be4,	// (0x00029b77) popup_fep_char_preview_window_t1_ParamLimits

0x9be4,	// (0x00029b77) popup_fep_char_preview_window_t1

0xe3b6,	// (0x0002e349) bg_popup_fep_char_preview_window_g1

0xe3be,	// (0x0002e351) bg_popup_fep_char_preview_window_g2

0xe3c6,	// (0x0002e359) bg_popup_fep_char_preview_window_g3

0xe3ce,	// (0x0002e361) bg_popup_fep_char_preview_window_g4

0xe3d6,	// (0x0002e369) bg_popup_fep_char_preview_window_g5

0xe3de,	// (0x0002e371) bg_popup_fep_char_preview_window_g6

0xe3e6,	// (0x0002e379) bg_popup_fep_char_preview_window_g7

0xe3ee,	// (0x0002e381) bg_popup_fep_char_preview_window_g8

0xe3f6,	// (0x0002e389) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb3,	// (0x0002fd46) bg_popup_fep_char_preview_window_g

0xc296,	// (0x0002c229) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc296,	// (0x0002c229) cell_vkb2_top_candi_pane_g1

0xc5ad,	// (0x0002c540) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5ad,	// (0x0002c540) cell_vkb2_top_candi_pane_g2

0xc5ce,	// (0x0002c561) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5ce,	// (0x0002c561) cell_vkb2_top_candi_pane_g3

0x9c26,	// (0x00029bb9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9c26,	// (0x00029bb9) cell_vkb2_top_candi_pane_g4

0xe3fe,	// (0x0002e391) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3fe,	// (0x0002e391) cell_vkb2_top_candi_pane_g5

0xd7db,	// (0x0002d76e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7db,	// (0x0002d76e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc8,	// (0x0002fd5b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc8,	// (0x0002fd5b) cell_vkb2_top_candi_pane_g

0x9c47,	// (0x00029bda) cell_vkb2_top_candi_pane_t1

0x9002,	// (0x00028f95) aid_size_touch_slider_mark_ParamLimits

0x9002,	// (0x00028f95) aid_size_touch_slider_mark

0xdffc,	// (0x0002df8f) grid_graphic2_catg_pane_ParamLimits

0xdffc,	// (0x0002df8f) grid_graphic2_catg_pane

0xe09a,	// (0x0002e02d) popup_grid_graphic2_window_t1_ParamLimits

0xe09a,	// (0x0002e02d) popup_grid_graphic2_window_t1

0xe0ac,	// (0x0002e03f) popup_grid_graphic2_window_t2_ParamLimits

0xe0ac,	// (0x0002e03f) popup_grid_graphic2_window_t2

0x0001,

0xfd81,	// (0x0002fd14) popup_grid_graphic2_window_t_ParamLimits

0xfd81,	// (0x0002fd14) popup_grid_graphic2_window_t

0x1b97,	// (0x00021b2a) bg_button_pane_cp05_ParamLimits

0xe21f,	// (0x0002e1b2) cell_graphic2_control_pane_g1_ParamLimits

0xe41f,	// (0x0002e3b2) cell_graphic2_catg_pane_ParamLimits

0xe41f,	// (0x0002e3b2) cell_graphic2_catg_pane

0x19e3,	// (0x00021976) bg_button_pane_cp12

0xe431,	// (0x0002e3c4) cell_graphic2_catg_pane_g1

0xd915,	// (0x0002d8a8) cell_tb_ext_pane_t1_ParamLimits

0x9a0f,	// (0x000299a2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9a0f,	// (0x000299a2) vkb2_top_cell_right_narrow_pane

0x9a27,	// (0x000299ba) vkb2_top_cell_right_wide_pane_ParamLimits

0x9a27,	// (0x000299ba) vkb2_top_cell_right_wide_pane

0x91dc,	// (0x0002916f) bg_vkb2_func_pane_ParamLimits

0x91dc,	// (0x0002916f) bg_vkb2_func_pane

0x9a98,	// (0x00029a2b) vkb2_top_cell_left_pane_g1_ParamLimits

0x91dc,	// (0x0002916f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x91dc,	// (0x0002916f) bg_vkb2_fuc_pane_cp03

0x9b01,	// (0x00029a94) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8557,	// (0x000284ea) bg_vkb2_func_pane_g1

0x855f,	// (0x000284f2) bg_vkb2_func_pane_g2

0x856f,	// (0x00028502) bg_vkb2_func_pane_g3

0x8567,	// (0x000284fa) bg_vkb2_func_pane_g4

0x8577,	// (0x0002850a) bg_vkb2_func_pane_g5

0x857f,	// (0x00028512) bg_vkb2_func_pane_g6

0x8587,	// (0x0002851a) bg_vkb2_func_pane_g7

0x858f,	// (0x00028522) bg_vkb2_func_pane_g8

0x854f,	// (0x000284e2) bg_vkb2_func_pane_g9

0x0008,

0xfdd5,	// (0x0002fd68) bg_vkb2_func_pane_g

0x91dc,	// (0x0002916f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x91dc,	// (0x0002916f) bg_vkb2_fuc_pane_cp01

0x9a98,	// (0x00029a2b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9a98,	// (0x00029a2b) vkb2_top_cell_right_wide_pane_g1

0x91dc,	// (0x0002916f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x91dc,	// (0x0002916f) bg_vkb2_fuc_pane_cp02

0x9c66,	// (0x00029bf9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9c66,	// (0x00029bf9) vkb2_top_cell_right_narrow_pane_g1

0xd52e,	// (0x0002d4c1) aid_touch_area_decrease_ParamLimits

0xd52e,	// (0x0002d4c1) aid_touch_area_decrease

0xd552,	// (0x0002d4e5) aid_touch_area_increase_ParamLimits

0xd552,	// (0x0002d4e5) aid_touch_area_increase

0xd56a,	// (0x0002d4fd) aid_touch_area_mute_ParamLimits

0xd56a,	// (0x0002d4fd) aid_touch_area_mute

0xd586,	// (0x0002d519) aid_touch_area_slider_ParamLimits

0xd586,	// (0x0002d519) aid_touch_area_slider

0xd670,	// (0x0002d603) popup_slider_window_g4_ParamLimits

0xd670,	// (0x0002d603) popup_slider_window_g4

0xd688,	// (0x0002d61b) popup_slider_window_g5_ParamLimits

0xd688,	// (0x0002d61b) popup_slider_window_g5

0xd6aa,	// (0x0002d63d) popup_slider_window_g6_ParamLimits

0xd6aa,	// (0x0002d63d) popup_slider_window_g6

0xd6f1,	// (0x0002d684) popup_slider_window_t2_ParamLimits

0xd6f1,	// (0x0002d684) popup_slider_window_t2

0x0001,

0xfccf,	// (0x0002fc62) popup_slider_window_t_ParamLimits

0xfccf,	// (0x0002fc62) popup_slider_window_t

0xd709,	// (0x0002d69c) slider_pane_ParamLimits

0xd709,	// (0x0002d69c) slider_pane

0xe43a,	// (0x0002e3cd) slider_pane_g1_ParamLimits

0xe43a,	// (0x0002e3cd) slider_pane_g1

0xe44e,	// (0x0002e3e1) slider_pane_g2_ParamLimits

0xe44e,	// (0x0002e3e1) slider_pane_g2

0xe464,	// (0x0002e3f7) slider_pane_g3_ParamLimits

0xe464,	// (0x0002e3f7) slider_pane_g3

0x0003,

0xfde8,	// (0x0002fd7b) slider_pane_g_ParamLimits

0xfde8,	// (0x0002fd7b) slider_pane_g

0x7f4b,	// (0x00027ede) popup_tb_float_extension_window_ParamLimits

0x7f4b,	// (0x00027ede) popup_tb_float_extension_window

0xe490,	// (0x0002e423) aid_size_cell_tb_float_ext

0x19e3,	// (0x00021976) bg_popup_sub_window_cp28

0xe49c,	// (0x0002e42f) grid_tb_float_ext_pane

0xe4a6,	// (0x0002e439) cell_tb_float_ext_pane_ParamLimits

0xe4a6,	// (0x0002e439) cell_tb_float_ext_pane

0xe4c0,	// (0x0002e453) cell_tb_float_ext_pane_g1

0xe4c9,	// (0x0002e45c) grid_highlight_pane_cp12

0x931d,	// (0x000292b0) cell_last_hwr_side_pane_ParamLimits

0x931d,	// (0x000292b0) cell_last_hwr_side_pane

0xc026,	// (0x0002bfb9) cell_last_hwr_side_pane_g1

0xe4d2,	// (0x0002e465) cell_last_hwr_side_pane_g2

0x0001,

0xfdf1,	// (0x0002fd84) cell_last_hwr_side_pane_g

0x99be,	// (0x00029951) vkb2_area_bottom_space_btn_pane_ParamLimits

0x99be,	// (0x00029951) vkb2_area_bottom_space_btn_pane

0xc296,	// (0x0002c229) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf6e,	// (0x0002df01) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9c47,	// (0x00029bda) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9c86,	// (0x00029c19) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9c86,	// (0x00029c19) vkb2_area_bottom_space_btn_pane_g1

0x9cc0,	// (0x00029c53) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9cc0,	// (0x00029c53) vkb2_area_bottom_space_btn_pane_g2

0x9cf6,	// (0x00029c89) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9cf6,	// (0x00029c89) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf6,	// (0x0002fd89) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf6,	// (0x0002fd89) vkb2_area_bottom_space_btn_pane_g

0x9291,	// (0x00029224) cel_fep_hwr_func_pane_ParamLimits

0x9291,	// (0x00029224) cel_fep_hwr_func_pane

0x92cd,	// (0x00029260) cell_hwr_side_button_pane_ParamLimits

0x92cd,	// (0x00029260) cell_hwr_side_button_pane

0xd94a,	// (0x0002d8dd) aid_area_touch_clock_ParamLimits

0x1b97,	// (0x00021b2a) bg_uniindi_top_pane_ParamLimits

0xd95c,	// (0x0002d8ef) uniindi_top_pane_g1_ParamLimits

0xd972,	// (0x0002d905) uniindi_top_pane_g2_ParamLimits

0xd97e,	// (0x0002d911) uniindi_top_pane_g3_ParamLimits

0xd98f,	// (0x0002d922) uniindi_top_pane_g4_ParamLimits

0xfd07,	// (0x0002fc9a) uniindi_top_pane_g_ParamLimits

0xd99c,	// (0x0002d92f) uniindi_top_pane_t1_ParamLimits

0x1b97,	// (0x00021b2a) bg_vkb2_func_pane_cp01_ParamLimits

0x1b97,	// (0x00021b2a) bg_vkb2_func_pane_cp01

0xe4db,	// (0x0002e46e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4db,	// (0x0002e46e) cel_fep_hwr_func_pane_g1

0x1b97,	// (0x00021b2a) bg_vkb2_func_pane_cp02_ParamLimits

0x1b97,	// (0x00021b2a) bg_vkb2_func_pane_cp02

0xe4db,	// (0x0002e46e) cell_hwr_side_button_pane_g1_ParamLimits

0xe4db,	// (0x0002e46e) cell_hwr_side_button_pane_g1

0x83a3,	// (0x00028336) status_pane_g4_ParamLimits

0x83a3,	// (0x00028336) status_pane_g4

0x83bd,	// (0x00028350) status_pane_t1

0xbd61,	// (0x0002bcf4) form2_midp_gauge_slider_cont_pane

0xbd69,	// (0x0002bcfc) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd7b,	// (0x0002bd0e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd8d,	// (0x0002bd20) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x0002fa6d) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd9f,	// (0x0002bd32) form2_midp_slider_pane_ParamLimits

0x962e,	// (0x000295c1) aid_size_cell_func_vkb2_ParamLimits

0x962e,	// (0x000295c1) aid_size_cell_func_vkb2

0xe47c,	// (0x0002e40f) slider_pane_g4_ParamLimits

0xe47c,	// (0x0002e40f) slider_pane_g4

0x9d40,	// (0x00029cd3) form2_midp_gauge_slider_pane_t2_cp01

0x9d4e,	// (0x00029ce1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9d4e,	// (0x00029ce1) form2_midp_gauge_slider_pane_t3_cp01

0x9d6b,	// (0x00029cfe) form2_midp_slider_pane_cp01

0x19e3,	// (0x00021976) navi_smil_pane

0xe514,	// (0x0002e4a7) navi_smil_pane_g1

0xe51c,	// (0x0002e4af) navi_smil_pane_t1

0xe4e9,	// (0x0002e47c) form2_midp_slider_pane_g1

0xe4f2,	// (0x0002e485) form2_midp_slider_pane_g2

0xe4fa,	// (0x0002e48d) form2_midp_slider_pane_g3

0xe4e9,	// (0x0002e47c) form2_midp_slider_pane_g4

0xe502,	// (0x0002e495) form2_midp_slider_pane_g5

0x0004,

0xfdff,	// (0x0002fd92) form2_midp_slider_pane_g

0x9d30,	// (0x00029cc3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9d30,	// (0x00029cc3) vkb2_area_bottom_space_btn_pane_g4

0x81d2,	// (0x00028165) lc0_navi_pane_ParamLimits

0x81d2,	// (0x00028165) lc0_navi_pane

0x8248,	// (0x000281db) lc0_stat_indi_pane_ParamLimits

0x8248,	// (0x000281db) lc0_stat_indi_pane

0x825f,	// (0x000281f2) ls0_title_pane_ParamLimits

0x825f,	// (0x000281f2) ls0_title_pane

0x1e8d,	// (0x00021e20) bg_popup_sub_pane_cp14_ParamLimits

0xd931,	// (0x0002d8c4) list_uniindi_pane_ParamLimits

0xd93d,	// (0x0002d8d0) uniindi_top_pane_ParamLimits

0xd9d9,	// (0x0002d96c) list_single_uniindi_pane_g1_ParamLimits

0xd9ec,	// (0x0002d97f) list_single_uniindi_pane_t1_ParamLimits

0x9d74,	// (0x00029d07) lc0_stat_clock_pane_ParamLimits

0x9d74,	// (0x00029d07) lc0_stat_clock_pane

0xe52a,	// (0x0002e4bd) lc0_stat_indi_pane_g1_ParamLimits

0xe52a,	// (0x0002e4bd) lc0_stat_indi_pane_g1

0xe537,	// (0x0002e4ca) lc0_stat_indi_pane_g2_ParamLimits

0xe537,	// (0x0002e4ca) lc0_stat_indi_pane_g2

0x0001,

0xfe0a,	// (0x0002fd9d) lc0_stat_indi_pane_g_ParamLimits

0xfe0a,	// (0x0002fd9d) lc0_stat_indi_pane_g

0x9d81,	// (0x00029d14) lc0_uni_indicator_pane_ParamLimits

0x9d81,	// (0x00029d14) lc0_uni_indicator_pane

0xe544,	// (0x0002e4d7) ls0_title_pane_g1_ParamLimits

0xe544,	// (0x0002e4d7) ls0_title_pane_g1

0xe558,	// (0x0002e4eb) ls0_title_pane_t1_ParamLimits

0xe558,	// (0x0002e4eb) ls0_title_pane_t1

0x9d8e,	// (0x00029d21) lc0_uni_indicator_pane_g1_ParamLimits

0x9d8e,	// (0x00029d21) lc0_uni_indicator_pane_g1

0xe58e,	// (0x0002e521) lc0_stat_clock_pane_t1

0x19e3,	// (0x00021976) main_ai5_pane

0xe59c,	// (0x0002e52f) ai5_sk_pane_ParamLimits

0xe59c,	// (0x0002e52f) ai5_sk_pane

0xe5a9,	// (0x0002e53c) cell_ai5_widget_pane_ParamLimits

0xe5a9,	// (0x0002e53c) cell_ai5_widget_pane

0xe669,	// (0x0002e5fc) aid_size_cell_widget_grid

0xe677,	// (0x0002e60a) bg_ai5_widget_pane_ParamLimits

0xe677,	// (0x0002e60a) bg_ai5_widget_pane

0xe6f3,	// (0x0002e686) cell_ai5_widget_pane_g2

0xe707,	// (0x0002e69a) cell_ai5_widget_pane_g3

0xe721,	// (0x0002e6b4) cell_ai5_widget_pane_g4

0xe731,	// (0x0002e6c4) cell_ai5_widget_pane_g5

0xe741,	// (0x0002e6d4) cell_ai5_widget_pane_g6

0xe74d,	// (0x0002e6e0) cell_ai5_widget_pane_g7

0xe7b9,	// (0x0002e74c) cell_ai5_widget_pane_t1_ParamLimits

0xe7b9,	// (0x0002e74c) cell_ai5_widget_pane_t1

0xe7d6,	// (0x0002e769) cell_ai5_widget_pane_t2_ParamLimits

0xe7d6,	// (0x0002e769) cell_ai5_widget_pane_t2

0xe7ee,	// (0x0002e781) cell_ai5_widget_pane_t3_ParamLimits

0xe7ee,	// (0x0002e781) cell_ai5_widget_pane_t3

0xe806,	// (0x0002e799) cell_ai5_widget_pane_t4_ParamLimits

0xe806,	// (0x0002e799) cell_ai5_widget_pane_t4

0xe82c,	// (0x0002e7bf) cell_ai5_widget_pane_t5_ParamLimits

0xe82c,	// (0x0002e7bf) cell_ai5_widget_pane_t5

0xe84b,	// (0x0002e7de) cell_ai5_widget_pane_t6_ParamLimits

0xe84b,	// (0x0002e7de) cell_ai5_widget_pane_t6

0xe85d,	// (0x0002e7f0) cell_ai5_widget_pane_t7_ParamLimits

0xe85d,	// (0x0002e7f0) cell_ai5_widget_pane_t7

0xe87c,	// (0x0002e80f) cell_ai5_widget_pane_t8_ParamLimits

0xe87c,	// (0x0002e80f) cell_ai5_widget_pane_t8

0x000b,

0xfe2a,	// (0x0002fdbd) cell_ai5_widget_pane_t_ParamLimits

0xfe2a,	// (0x0002fdbd) cell_ai5_widget_pane_t

0xe900,	// (0x0002e893) grid_ai5_widget_pane

0x1e8d,	// (0x00021e20) highlight_cell_ai5_widget_pane_ParamLimits

0x1e8d,	// (0x00021e20) highlight_cell_ai5_widget_pane

0xe90e,	// (0x0002e8a1) ai5_sk_left_pane

0xe918,	// (0x0002e8ab) ai5_sk_middle_pane

0xe922,	// (0x0002e8b5) ai5_sk_right_pane

0xe92c,	// (0x0002e8bf) bg_ai5_widget_pane_g1_ParamLimits

0xe92c,	// (0x0002e8bf) bg_ai5_widget_pane_g1

0xe938,	// (0x0002e8cb) bg_ai5_widget_pane_g2_ParamLimits

0xe938,	// (0x0002e8cb) bg_ai5_widget_pane_g2

0xe944,	// (0x0002e8d7) bg_ai5_widget_pane_g3_ParamLimits

0xe944,	// (0x0002e8d7) bg_ai5_widget_pane_g3

0xe950,	// (0x0002e8e3) bg_ai5_widget_pane_g4_ParamLimits

0xe950,	// (0x0002e8e3) bg_ai5_widget_pane_g4

0xe95c,	// (0x0002e8ef) bg_ai5_widget_pane_g5_ParamLimits

0xe95c,	// (0x0002e8ef) bg_ai5_widget_pane_g5

0xe968,	// (0x0002e8fb) bg_ai5_widget_pane_g6_ParamLimits

0xe968,	// (0x0002e8fb) bg_ai5_widget_pane_g6

0xe974,	// (0x0002e907) bg_ai5_widget_pane_g7_ParamLimits

0xe974,	// (0x0002e907) bg_ai5_widget_pane_g7

0xe980,	// (0x0002e913) bg_ai5_widget_pane_g8_ParamLimits

0xe980,	// (0x0002e913) bg_ai5_widget_pane_g8

0xe98c,	// (0x0002e91f) bg_ai5_widget_pane_g9_ParamLimits

0xe98c,	// (0x0002e91f) bg_ai5_widget_pane_g9

0x0008,

0xfe43,	// (0x0002fdd6) bg_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x0002fdd6) bg_ai5_widget_pane_g

0xe9be,	// (0x0002e951) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9be,	// (0x0002e951) cell_shortcut_ai5_widget_pane

0x279f,	// (0x00022732) bg_cell_shortcut_ai5_widget_pane

0xe9cf,	// (0x0002e962) cell_grid_ai5_widget_pane_g1

0x279f,	// (0x00022732) highlight_cell_shortcut_ai5_widget_pane

0x855f,	// (0x000284f2) ai5_sk_left_pane_g1

0xe9d8,	// (0x0002e96b) ai5_sk_left_pane_g2

0xe9e0,	// (0x0002e973) ai5_sk_left_pane_g3

0xe9e8,	// (0x0002e97b) ai5_sk_left_pane_g4

0x0003,

0xfe56,	// (0x0002fde9) ai5_sk_left_pane_g

0xe9f0,	// (0x0002e983) ai5_sk_left_pane_t1

0x8557,	// (0x000284ea) ai5_sk_right_pane_g1

0xe9fe,	// (0x0002e991) ai5_sk_right_pane_g2

0xea06,	// (0x0002e999) ai5_sk_right_pane_g3

0xea0e,	// (0x0002e9a1) ai5_sk_right_pane_g4

0x0003,

0xfe5f,	// (0x0002fdf2) ai5_sk_right_pane_g

0xea16,	// (0x0002e9a9) ai5_sk_right_pane_t1

0x8557,	// (0x000284ea) ai5_sk_middle_pane_g1

0x855f,	// (0x000284f2) ai5_sk_middle_pane_g2

0x8577,	// (0x0002850a) ai5_sk_middle_pane_g3

0xea06,	// (0x0002e999) ai5_sk_middle_pane_g4

0xe9e0,	// (0x0002e973) ai5_sk_middle_pane_g5

0xea24,	// (0x0002e9b7) ai5_sk_middle_pane_g6

0xea2c,	// (0x0002e9bf) ai5_sk_middle_pane_g7

0x0006,

0xfe68,	// (0x0002fdfb) ai5_sk_middle_pane_g

0x8058,	// (0x00027feb) aid_touch_area_size_lc0_ParamLimits

0x8058,	// (0x00027feb) aid_touch_area_size_lc0

0x941c,	// (0x000293af) cell_hwr_candidate_pane_t1_ParamLimits

0x8074,	// (0x00028007) aid_touch_navi_pane

0x834d,	// (0x000282e0) status_dt_navi_pane_ParamLimits

0x834d,	// (0x000282e0) status_dt_navi_pane

0x835a,	// (0x000282ed) status_dt_sta_pane_ParamLimits

0x835a,	// (0x000282ed) status_dt_sta_pane

0xea34,	// (0x0002e9c7) dt_sta_controll_pane

0xea41,	// (0x0002e9d4) dt_sta_indi_pane

0xea52,	// (0x0002e9e5) dt_sta_title_pane

0x1b97,	// (0x00021b2a) bg_dt_sta_indi_pane_ParamLimits

0x1b97,	// (0x00021b2a) bg_dt_sta_indi_pane

0xea65,	// (0x0002e9f8) dt_sta_battery_pane

0xea6d,	// (0x0002ea00) dt_sta_indi_pane_g1

0xea76,	// (0x0002ea09) dt_sta_indi_pane_g2

0xea7f,	// (0x0002ea12) dt_sta_indi_pane_g3

0x0002,

0xfe77,	// (0x0002fe0a) dt_sta_indi_pane_g

0xea88,	// (0x0002ea1b) dt_sta_signal_pane

0x1e8d,	// (0x00021e20) bg_dt_sta_title_pane_ParamLimits

0x1e8d,	// (0x00021e20) bg_dt_sta_title_pane

0xa854,	// (0x0002a7e7) dt_sta_title_pane_g1

0xea91,	// (0x0002ea24) dt_sta_title_pane_t1_ParamLimits

0xea91,	// (0x0002ea24) dt_sta_title_pane_t1

0x19e3,	// (0x00021976) bg_dt_sta_control_pane

0xeaa6,	// (0x0002ea39) dt_sta_controll_pane_g1

0xeaaf,	// (0x0002ea42) bg_dt_sta_title_pane_g1

0xeab8,	// (0x0002ea4b) bg_dt_sta_title_pane_g2

0xeac1,	// (0x0002ea54) bg_dt_sta_title_pane_g3

0x0002,

0xfe7e,	// (0x0002fe11) bg_dt_sta_title_pane_g

0xc026,	// (0x0002bfb9) bg_dt_sta_indi_pane_g1

0xeaca,	// (0x0002ea5d) dt_sta_signal_pane_g1

0xead2,	// (0x0002ea65) dt_sta_signal_pane_g2

0x0001,

0xfe85,	// (0x0002fe18) dt_sta_signal_pane_g

0xeada,	// (0x0002ea6d) dt_sta_battery_pane_g1

0xeae3,	// (0x0002ea76) dt_sta_battery_pane_t1

0xc026,	// (0x0002bfb9) bg_dt_sta_control_pane_g1

0x23d0,	// (0x00022363) fep_china_uni_eep_pane

0x23d8,	// (0x0002236b) fep_china_uni_entry_pane_ParamLimits

0x23e8,	// (0x0002237b) popup_fep_china_uni_window_g1_ParamLimits

0x23f8,	// (0x0002238b) popup_fep_china_uni_window_g2_ParamLimits

0x23f8,	// (0x0002238b) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x0002f67c) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x0002f67c) popup_fep_china_uni_window_g

0xeaf2,	// (0x0002ea85) fep_china_uni_eep_pane_g1

0xeafa,	// (0x0002ea8d) fep_china_uni_eep_pane_t1

0xe50b,	// (0x0002e49e) aid_touch_area_size_smil_player

0x81ca,	// (0x0002815d) lc0_clock_pane

0x83b1,	// (0x00028344) status_pane_g5_ParamLimits

0x83b1,	// (0x00028344) status_pane_g5

0x7c0c,	// (0x00027b9f) popup_keymap_window

0x836f,	// (0x00028302) status_icon_pane

0xe707,	// (0x0002e69a) cell_ai5_widget_pane_g3_ParamLimits

0xe721,	// (0x0002e6b4) cell_ai5_widget_pane_g4_ParamLimits

0xe731,	// (0x0002e6c4) cell_ai5_widget_pane_g5_ParamLimits

0xe759,	// (0x0002e6ec) cell_ai5_widget_pane_g8_ParamLimits

0xe759,	// (0x0002e6ec) cell_ai5_widget_pane_g8

0xe76d,	// (0x0002e700) cell_ai5_widget_pane_g9_ParamLimits

0xe76d,	// (0x0002e700) cell_ai5_widget_pane_g9

0xe781,	// (0x0002e714) cell_ai5_widget_pane_g10_ParamLimits

0xe781,	// (0x0002e714) cell_ai5_widget_pane_g10

0xeb09,	// (0x0002ea9c) status_icon_pane_g1

0x19e3,	// (0x00021976) bg_popup_sub_pane_cp13

0xeb11,	// (0x0002eaa4) popup_keymap_window_t1

0x7961,	// (0x000278f4) control_pane_g6_ParamLimits

0x7961,	// (0x000278f4) control_pane_g6

0x796e,	// (0x00027901) control_pane_g7_ParamLimits

0x796e,	// (0x00027901) control_pane_g7

0x797b,	// (0x0002790e) control_pane_g8_ParamLimits

0x797b,	// (0x0002790e) control_pane_g8

0xea34,	// (0x0002e9c7) dt_sta_controll_pane_ParamLimits

0xea41,	// (0x0002e9d4) dt_sta_indi_pane_ParamLimits

0xea52,	// (0x0002e9e5) dt_sta_title_pane_ParamLimits

0x1d6e,	// (0x00021d01) aid_size_touch_scroll_bar_cale

0x67e6,	// (0x00026779) popup_discreet_window_ParamLimits

0x67e6,	// (0x00026779) popup_discreet_window

0x6860,	// (0x000267f3) popup_sk_window

0x8cf5,	// (0x00028c88) bg_popup_sub_pane_cp28_ParamLimits

0x8cf5,	// (0x00028c88) bg_popup_sub_pane_cp28

0xeb1f,	// (0x0002eab2) popup_discreet_window_g1_ParamLimits

0xeb1f,	// (0x0002eab2) popup_discreet_window_g1

0xeb3f,	// (0x0002ead2) popup_discreet_window_t1_ParamLimits

0xeb3f,	// (0x0002ead2) popup_discreet_window_t1

0xeb5d,	// (0x0002eaf0) popup_discreet_window_t2_ParamLimits

0xeb5d,	// (0x0002eaf0) popup_discreet_window_t2

0x0002,

0xfe8a,	// (0x0002fe1d) popup_discreet_window_t_ParamLimits

0xfe8a,	// (0x0002fe1d) popup_discreet_window_t

0x9da2,	// (0x00029d35) popup_sk_window_g1

0x9dac,	// (0x00029d3f) popup_sk_window_g2

0x0001,

0xfe91,	// (0x0002fe24) popup_sk_window_g

0x9db4,	// (0x00029d47) popup_sk_window_t1

0x9dc2,	// (0x00029d55) popup_sk_window_t1_copy1

0xe6f3,	// (0x0002e686) cell_ai5_widget_pane_g2_ParamLimits

0xe88e,	// (0x0002e821) cell_ai5_widget_pane_t9_ParamLimits

0xe88e,	// (0x0002e821) cell_ai5_widget_pane_t9

0x19e3,	// (0x00021976) main_fep_fshwr2_pane

0x9dd0,	// (0x00029d63) aid_fshwr2_btn_pane

0x9de4,	// (0x00029d77) aid_fshwr2_syb_pane

0x9df8,	// (0x00029d8b) aid_fshwr2_txt_pane

0x9e08,	// (0x00029d9b) fshwr2_func_candi_pane

0x9e2c,	// (0x00029dbf) fshwr2_hwr_syb_pane

0x9e46,	// (0x00029dd9) fshwr2_icf_pane

0x19e3,	// (0x00021976) fshwr2_icf_bg_pane

0x9e74,	// (0x00029e07) fshwr2_icf_pane_t1_ParamLimits

0x9e74,	// (0x00029e07) fshwr2_icf_pane_t1

0x234d,	// (0x000222e0) fshwr2_func_candi_pane_g1

0xebaf,	// (0x0002eb42) fshwr2_func_candi_row_pane_ParamLimits

0xebaf,	// (0x0002eb42) fshwr2_func_candi_row_pane

0x9e8d,	// (0x00029e20) cell_fshwr2_syb_pane_ParamLimits

0x9e8d,	// (0x00029e20) cell_fshwr2_syb_pane

0xe4db,	// (0x0002e46e) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4db,	// (0x0002e46e) fshwr2_hwr_syb_pane_g1

0x19e3,	// (0x00021976) bg_popup_call_pane_cp01

0x9eb0,	// (0x00029e43) fshwr2_func_candi_cell_pane_ParamLimits

0x9eb0,	// (0x00029e43) fshwr2_func_candi_cell_pane

0xa6f4,	// (0x0002a687) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6f4,	// (0x0002a687) fshwr2_func_candi_cell_bg_pane

0x9efb,	// (0x00029e8e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9efb,	// (0x00029e8e) fshwr2_func_candi_cell_pane_g1

0x9f1b,	// (0x00029eae) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f1b,	// (0x00029eae) fshwr2_func_candi_cell_pane_t1

0x19e3,	// (0x00021976) bg_button_pane_cp08

0x203d,	// (0x00021fd0) cell_fshwr2_syb_bg_pane

0x9f2e,	// (0x00029ec1) cell_fshwr2_syb_bg_pane_g1

0x9f42,	// (0x00029ed5) cell_fshwr2_syb_bg_pane_t1

0x1e8d,	// (0x00021e20) main_tmo_pane

0xab8d,	// (0x0002ab20) uni_indicator_pane_g1_ParamLimits

0xaba0,	// (0x0002ab33) uni_indicator_pane_g2_ParamLimits

0xabb2,	// (0x0002ab45) uni_indicator_pane_g3_ParamLimits

0xabc1,	// (0x0002ab54) uni_indicator_pane_g4_ParamLimits

0xabc1,	// (0x0002ab54) uni_indicator_pane_g4

0xabd5,	// (0x0002ab68) uni_indicator_pane_g5_ParamLimits

0xabd5,	// (0x0002ab68) uni_indicator_pane_g5

0xabd5,	// (0x0002ab68) uni_indicator_pane_g6_ParamLimits

0xabd5,	// (0x0002ab68) uni_indicator_pane_g6

0xf8e8,	// (0x0002f87b) uni_indicator_pane_g_ParamLimits

0xd510,	// (0x0002d4a3) popup_tmo_note_window_ParamLimits

0xd510,	// (0x0002d4a3) popup_tmo_note_window

0x1e8d,	// (0x00021e20) fshwr2_bg_pane

0x9f0c,	// (0x00029e9f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f0c,	// (0x00029e9f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe96,	// (0x0002fe29) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe96,	// (0x0002fe29) fshwr2_func_candi_cell_pane_g

0xc026,	// (0x0002bfb9) bg_popup_window_pane_cp01

0x9f58,	// (0x00029eeb) bg_popup_window_pane_g1_cp01

0xebd6,	// (0x0002eb69) bg_popup_window_pane_cp22_ParamLimits

0xebd6,	// (0x0002eb69) bg_popup_window_pane_cp22

0xebe4,	// (0x0002eb77) listscroll_tmo_link_pane_ParamLimits

0xebe4,	// (0x0002eb77) listscroll_tmo_link_pane

0xec24,	// (0x0002ebb7) popup_tmo_note_window_g1_ParamLimits

0xec24,	// (0x0002ebb7) popup_tmo_note_window_g1

0xec31,	// (0x0002ebc4) tmo_note_info_pane_ParamLimits

0xec31,	// (0x0002ebc4) tmo_note_info_pane

0xec4b,	// (0x0002ebde) list_tmo_note_info_pane_g1_ParamLimits

0xec4b,	// (0x0002ebde) list_tmo_note_info_pane_g1

0xec62,	// (0x0002ebf5) list_tmo_note_info_pane_g2_ParamLimits

0xec62,	// (0x0002ebf5) list_tmo_note_info_pane_g2

0x0001,

0xfe9b,	// (0x0002fe2e) list_tmo_note_info_pane_g_ParamLimits

0xfe9b,	// (0x0002fe2e) list_tmo_note_info_pane_g

0xec7e,	// (0x0002ec11) list_tmo_note_info_text_pane_ParamLimits

0xec7e,	// (0x0002ec11) list_tmo_note_info_text_pane

0xecff,	// (0x0002ec92) list_tmo_link_pane

0xed0c,	// (0x0002ec9f) scroll_pane_cp20

0xed19,	// (0x0002ecac) list_single_tmo_link_pane_ParamLimits

0xed19,	// (0x0002ecac) list_single_tmo_link_pane

0xed29,	// (0x0002ecbc) list_single_tmo_link_pane_t1

0xed37,	// (0x0002ecca) list_tmo_note_info_text_pane_t1_ParamLimits

0xed37,	// (0x0002ecca) list_tmo_note_info_text_pane_t1

0x6f44,	// (0x00026ed7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6f44,	// (0x00026ed7) aid_size_touch_scroll_bar_cp01

0x5a5b,	// (0x000259ee) aid_size_touch_slider_marker

0x6848,	// (0x000267db) popup_settings_window_ParamLimits

0x6848,	// (0x000267db) popup_settings_window

0x5c20,	// (0x00025bb3) popup_candi_list_indi_window

0x8074,	// (0x00028007) aid_touch_navi_pane_ParamLimits

0x9587,	// (0x0002951a) rs_clock_indi_pane

0x9590,	// (0x00029523) sctrl_sk_bottom_pane_ParamLimits

0x95a1,	// (0x00029534) sctrl_sk_top_pane_ParamLimits

0x9680,	// (0x00029613) popup_fep_tooltip_window

0xe669,	// (0x0002e5fc) aid_size_cell_widget_grid_ParamLimits

0xe6de,	// (0x0002e671) cell_ai5_widget_pane_g1_ParamLimits

0xe6de,	// (0x0002e671) cell_ai5_widget_pane_g1

0xe741,	// (0x0002e6d4) cell_ai5_widget_pane_g6_ParamLimits

0xe74d,	// (0x0002e6e0) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0f,	// (0x0002fda2) cell_ai5_widget_pane_g_ParamLimits

0xfe0f,	// (0x0002fda2) cell_ai5_widget_pane_g

0xe8bd,	// (0x0002e850) cell_ai5_widget_pane_t10_ParamLimits

0xe8bd,	// (0x0002e850) cell_ai5_widget_pane_t10

0xe900,	// (0x0002e893) grid_ai5_widget_pane_ParamLimits

0xe998,	// (0x0002e92b) cell_contacts_ai5_widget_pane_ParamLimits

0xe998,	// (0x0002e92b) cell_contacts_ai5_widget_pane

0xeb72,	// (0x0002eb05) popup_discreet_window_t3_ParamLimits

0xeb72,	// (0x0002eb05) popup_discreet_window_t3

0x9e5e,	// (0x00029df1) popup_fshwr2_char_preview_window_ParamLimits

0x9e5e,	// (0x00029df1) popup_fshwr2_char_preview_window

0xec9c,	// (0x0002ec2f) tmo_note_info_pane_t1

0xecb1,	// (0x0002ec44) tmo_note_info_pane_t2

0xecc6,	// (0x0002ec59) tmo_note_info_pane_t3

0xecdb,	// (0x0002ec6e) tmo_note_info_pane_t4

0xeced,	// (0x0002ec80) tmo_note_info_pane_t5

0x0004,

0xfea0,	// (0x0002fe33) tmo_note_info_pane_t

0xecff,	// (0x0002ec92) list_tmo_link_pane_ParamLimits

0xed0c,	// (0x0002ec9f) scroll_pane_cp20_ParamLimits

0x19e3,	// (0x00021976) bg_popup_fep_char_preview_window_cp01

0xed50,	// (0x0002ece3) popup_fshwr2_char_preview_window_t1

0xed5e,	// (0x0002ecf1) popup_candi_list_indi_window_g1

0xed67,	// (0x0002ecfa) bg_cell_contacts_ai5_widget_pane

0xed73,	// (0x0002ed06) cell_contacts_ai5_widget_pane_g1

0xc70d,	// (0x0002c6a0) cell_contacts_ai5_widget_pane_g2

0xed88,	// (0x0002ed1b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeab,	// (0x0002fe3e) cell_contacts_ai5_widget_pane_g

0xed94,	// (0x0002ed27) cell_contacts_ai5_widget_pane_t1

0x1e8d,	// (0x00021e20) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0b,	// (0x0002ed9e) settings_container_pane

0x279f,	// (0x00022732) listscroll_set_pane_copy1

0xb702,	// (0x0002b695) scroll_pane_cp121_copy1

0x8a9a,	// (0x00028a2d) set_content_pane_copy1

0xee17,	// (0x0002edaa) aid_height_set_list_copy1_ParamLimits

0xee17,	// (0x0002edaa) aid_height_set_list_copy1

0xadcd,	// (0x0002ad60) aid_size_parent_copy1_ParamLimits

0xadcd,	// (0x0002ad60) aid_size_parent_copy1

0xee23,	// (0x0002edb6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee23,	// (0x0002edb6) button_value_adjust_pane_cp6_copy1

0x203d,	// (0x00021fd0) list_highlight_pane_cp2_copy1_ParamLimits

0x203d,	// (0x00021fd0) list_highlight_pane_cp2_copy1

0xee37,	// (0x0002edca) list_set_pane_copy1_ParamLimits

0xee37,	// (0x0002edca) list_set_pane_copy1

0xeda6,	// (0x0002ed39) main_pane_set_t1_copy1_ParamLimits

0xeda6,	// (0x0002ed39) main_pane_set_t1_copy1

0xede0,	// (0x0002ed73) main_pane_set_t2_copy1_ParamLimits

0xede0,	// (0x0002ed73) main_pane_set_t2_copy1

0xeee4,	// (0x0002ee77) main_pane_set_t3_copy1

0xeef2,	// (0x0002ee85) main_pane_set_t4_copy1

0xedff,	// (0x0002ed92) set_content_pane_g1_copy1_ParamLimits

0xedff,	// (0x0002ed92) set_content_pane_g1_copy1

0xef00,	// (0x0002ee93) setting_code_pane_copy1

0xef08,	// (0x0002ee9b) setting_slider_graphic_pane_copy1

0xef08,	// (0x0002ee9b) setting_slider_pane_copy1

0xef10,	// (0x0002eea3) setting_text_pane_copy1

0xef10,	// (0x0002eea3) setting_volume_pane_copy1

0xef00,	// (0x0002ee93) settings_code_pane_cp2_copy1

0xef18,	// (0x0002eeab) settings_code_pane_cp_copy1_ParamLimits

0xef18,	// (0x0002eeab) settings_code_pane_cp_copy1

0x9f61,	// (0x00029ef4) volume_set_pane_copy1

0xef2c,	// (0x0002eebf) volume_set_pane_g10_copy1

0xef34,	// (0x0002eec7) volume_set_pane_g1_copy1

0xef3c,	// (0x0002eecf) volume_set_pane_g2_copy1

0xef44,	// (0x0002eed7) volume_set_pane_g3_copy1

0xef4c,	// (0x0002eedf) volume_set_pane_g4_copy1

0xef54,	// (0x0002eee7) volume_set_pane_g5_copy1

0xef5c,	// (0x0002eeef) volume_set_pane_g6_copy1

0xef64,	// (0x0002eef7) volume_set_pane_g7_copy1

0xef6c,	// (0x0002eeff) volume_set_pane_g8_copy1

0xef74,	// (0x0002ef07) volume_set_pane_g9_copy1

0x1a53,	// (0x000219e6) bg_set_opt_pane_cp_copy1_ParamLimits

0x1a53,	// (0x000219e6) bg_set_opt_pane_cp_copy1

0x9f69,	// (0x00029efc) setting_slider_pane_t1_copy1_ParamLimits

0x9f69,	// (0x00029efc) setting_slider_pane_t1_copy1

0x9f88,	// (0x00029f1b) setting_slider_pane_t2_copy1_ParamLimits

0x9f88,	// (0x00029f1b) setting_slider_pane_t2_copy1

0x9fa2,	// (0x00029f35) setting_slider_pane_t3_copy1_ParamLimits

0x9fa2,	// (0x00029f35) setting_slider_pane_t3_copy1

0x9fba,	// (0x00029f4d) slider_set_pane_copy1_ParamLimits

0x9fba,	// (0x00029f4d) slider_set_pane_copy1

0x1f53,	// (0x00021ee6) set_opt_bg_pane_g1_copy2

0x1f5b,	// (0x00021eee) set_opt_bg_pane_g2_copy2

0xef7c,	// (0x0002ef0f) set_opt_bg_pane_g3_copy2

0x1f6b,	// (0x00021efe) set_opt_bg_pane_g4_copy2

0x1f73,	// (0x00021f06) set_opt_bg_pane_g5_copy2

0x1f7b,	// (0x00021f0e) set_opt_bg_pane_g6_copy2

0xef86,	// (0x0002ef19) set_opt_bg_pane_g7_copy2

0xef8e,	// (0x0002ef21) set_opt_bg_pane_g8_copy2

0xef98,	// (0x0002ef2b) set_opt_bg_pane_g9_copy2

0x9fd0,	// (0x00029f63) aid_size_touch_slider_mark_copy1_ParamLimits

0x9fd0,	// (0x00029f63) aid_size_touch_slider_mark_copy1

0xefa2,	// (0x0002ef35) slider_set_pane_g1_copy1

0x9fe4,	// (0x00029f77) slider_set_pane_g2_copy1

0x9022,	// (0x00028fb5) slider_set_pane_g3_copy1_ParamLimits

0x9022,	// (0x00028fb5) slider_set_pane_g3_copy1

0x9036,	// (0x00028fc9) slider_set_pane_g4_copy1_ParamLimits

0x9036,	// (0x00028fc9) slider_set_pane_g4_copy1

0x904e,	// (0x00028fe1) slider_set_pane_g5_copy1_ParamLimits

0x904e,	// (0x00028fe1) slider_set_pane_g5_copy1

0x9022,	// (0x00028fb5) slider_set_pane_g6_copy1_ParamLimits

0x9022,	// (0x00028fb5) slider_set_pane_g6_copy1

0x9fec,	// (0x00029f7f) slider_set_pane_g7_copy1_ParamLimits

0x9fec,	// (0x00029f7f) slider_set_pane_g7_copy1

0x19f7,	// (0x0002198a) bg_set_opt_pane_cp2_copy1

0xefab,	// (0x0002ef3e) setting_slider_graphic_pane_g1_copy1

0xefb4,	// (0x0002ef47) setting_slider_graphic_pane_t1_copy1

0xefc4,	// (0x0002ef57) setting_slider_graphic_pane_t2_copy1

0xefd4,	// (0x0002ef67) slider_set_pane_cp_copy1

0xefe4,	// (0x0002ef77) input_focus_pane_cp1_copy1

0xefed,	// (0x0002ef80) list_set_text_pane_copy1

0xeff5,	// (0x0002ef88) setting_text_pane_g1_copy1

0x653f,	// (0x000264d2) set_text_pane_t1_copy1

0xefe4,	// (0x0002ef77) input_focus_pane_cp2_copy1

0xeff5,	// (0x0002ef88) setting_code_pane_g1_copy1

0xeffe,	// (0x0002ef91) setting_code_pane_t1_copy1

0xf00c,	// (0x0002ef9f) list_set_graphic_pane_copy1

0x19f7,	// (0x0002198a) bg_set_opt_pane_cp4_copy1

0x2528,	// (0x000224bb) list_set_graphic_pane_g1_copy1_ParamLimits

0x2528,	// (0x000224bb) list_set_graphic_pane_g1_copy1

0xf020,	// (0x0002efb3) list_set_graphic_pane_g2_copy1

0x2540,	// (0x000224d3) list_set_graphic_pane_t1_copy1_ParamLimits

0x2540,	// (0x000224d3) list_set_graphic_pane_t1_copy1

0xc026,	// (0x0002bfb9) rs_clock_indi_pane_g1

0xf028,	// (0x0002efbb) rs_clock_indi_pane_t1

0xf036,	// (0x0002efc9) rs_indi_pane

0xf03e,	// (0x0002efd1) rs_indi_pane_g1

0xf047,	// (0x0002efda) rs_indi_pane_g2

0xed5e,	// (0x0002ecf1) rs_indi_pane_g3

0x0002,

0xfeb2,	// (0x0002fe45) rs_indi_pane_g

0x279f,	// (0x00022732) bg_popup_preview_window_pane_cp03

0xf050,	// (0x0002efe3) popup_fep_tooltip_window_t1

0xccbf,	// (0x0002cc52) popup_note2_window_g2_ParamLimits

0xccbf,	// (0x0002cc52) popup_note2_window_g2

0x0001,

0xfc46,	// (0x0002fbd9) popup_note2_window_g_ParamLimits

0xfc46,	// (0x0002fbd9) popup_note2_window_g

0xd1ac,	// (0x0002d13f) bg_popup_sub_pane_cp11_ParamLimits

0xd1b9,	// (0x0002d14c) cell_ai3_links_pane_g1_ParamLimits

0xd1d0,	// (0x0002d163) cell_ai3_links_pane_t1

0x653f,	// (0x000264d2) set_text_pane_t1_copy1_ParamLimits

0x26e1,	// (0x00022674) cell_graphic_popup_pane_cp2_ParamLimits

0x26e1,	// (0x00022674) cell_graphic_popup_pane_cp2

0xf05e,	// (0x0002eff1) cell_graphic_popup_pane_g1_cp2

0x1cf1,	// (0x00021c84) cell_graphic_popup_pane_g2_cp2

0xf066,	// (0x0002eff9) cell_graphic_popup_pane_g3_cp2

0xf06e,	// (0x0002f001) cell_graphic_popup_pane_t2_cp2

0x1d02,	// (0x00021c95) grid_highlight_pane_cp3_cp2

0x21ca,	// (0x0002215d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1e8d,	// (0x00021e20) main_tmo_pane_ParamLimits

0xd504,	// (0x0002d497) popup_tmo_big_image_note_window

0xe6cd,	// (0x0002e660) cell_ai5_widget_list_pane

0xe6d5,	// (0x0002e668) cell_ai5_widget_lrg_icon_pane

0xec9c,	// (0x0002ec2f) tmo_note_info_pane_t1_ParamLimits

0xecb1,	// (0x0002ec44) tmo_note_info_pane_t2_ParamLimits

0xecc6,	// (0x0002ec59) tmo_note_info_pane_t3_ParamLimits

0xecdb,	// (0x0002ec6e) tmo_note_info_pane_t4_ParamLimits

0xeced,	// (0x0002ec80) tmo_note_info_pane_t5_ParamLimits

0xfea0,	// (0x0002fe33) tmo_note_info_pane_t_ParamLimits

0xee0b,	// (0x0002ed9e) settings_container_pane_ParamLimits

0xefdc,	// (0x0002ef6f) indicator_popup_pane_cp5

0xefdc,	// (0x0002ef6f) indicator_popup_pane_cp6

0xf00c,	// (0x0002ef9f) list_set_graphic_pane_copy1_ParamLimits

0x19e3,	// (0x00021976) bg_popup_window_pane_cp23

0xf07c,	// (0x0002f00f) popup_tmo_big_image_note_window_g1

0xf085,	// (0x0002f018) popup_tmo_big_image_note_window_t1

0xf095,	// (0x0002f028) popup_tmo_big_image_note_window_t2

0xf0a5,	// (0x0002f038) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb9,	// (0x0002fe4c) popup_tmo_big_image_note_window_t

0xc026,	// (0x0002bfb9) cell_ai5_widget_lrg_icon_pane_g1

0xf0b5,	// (0x0002f048) cell_ai5_widget_lrg_icon_pane_t1

0xf0c3,	// (0x0002f056) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c3,	// (0x0002f056) cell_ai5_widget_list_row_pane

0xf0da,	// (0x0002f06d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0da,	// (0x0002f06d) cell_ai5_widget_list_row_pane_g1

0xf0e7,	// (0x0002f07a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0e7,	// (0x0002f07a) cell_ai5_widget_list_row_pane_t1

0xf112,	// (0x0002f0a5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf112,	// (0x0002f0a5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec0,	// (0x0002fe53) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec0,	// (0x0002fe53) cell_ai5_widget_list_row_pane_t

0x19e3,	// (0x00021976) main_fep_vtchi_ss_pane

0xf162,	// (0x0002f0f5) popup_fep_char_pre_window

0xf16a,	// (0x0002f0fd) popup_fep_ituss_window

0xf196,	// (0x0002f129) popup_fep_vkbss_window

0x203d,	// (0x00021fd0) grid_vkbss_keypad_pane_ParamLimits

0x203d,	// (0x00021fd0) grid_vkbss_keypad_pane

0xf1d6,	// (0x0002f169) ituss_keypad_pane

0xa00c,	// (0x00029f9f) aid_vkbss_key_offset_ParamLimits

0xa00c,	// (0x00029f9f) aid_vkbss_key_offset

0xa018,	// (0x00029fab) cell_vkbss_key_pane_ParamLimits

0xa018,	// (0x00029fab) cell_vkbss_key_pane

0xf1e6,	// (0x0002f179) bg_cell_vkbss_key_g1_ParamLimits

0xf1e6,	// (0x0002f179) bg_cell_vkbss_key_g1

0xf1f2,	// (0x0002f185) cell_vkbss_key_3p_pane_ParamLimits

0xf1f2,	// (0x0002f185) cell_vkbss_key_3p_pane

0xf228,	// (0x0002f1bb) cell_vkbss_key_g1_ParamLimits

0xf228,	// (0x0002f1bb) cell_vkbss_key_g1

0xf25e,	// (0x0002f1f1) cell_vkbss_key_t1_ParamLimits

0xf25e,	// (0x0002f1f1) cell_vkbss_key_t1

0xa063,	// (0x00029ff6) cell_ituss_key_pane_ParamLimits

0xa063,	// (0x00029ff6) cell_ituss_key_pane

0xf2ba,	// (0x0002f24d) bg_cell_ituss_key_g1_ParamLimits

0xf2ba,	// (0x0002f24d) bg_cell_ituss_key_g1

0xf2c6,	// (0x0002f259) cell_ituss_key_pane_g1_ParamLimits

0xf2c6,	// (0x0002f259) cell_ituss_key_pane_g1

0xa074,	// (0x0002a007) cell_ituss_key_pane_g2_ParamLimits

0xa074,	// (0x0002a007) cell_ituss_key_pane_g2

0x0005,

0xfec7,	// (0x0002fe5a) cell_ituss_key_pane_g_ParamLimits

0xfec7,	// (0x0002fe5a) cell_ituss_key_pane_g

0xa0f8,	// (0x0002a08b) cell_ituss_key_t1_ParamLimits

0xa0f8,	// (0x0002a08b) cell_ituss_key_t1

0xa132,	// (0x0002a0c5) cell_ituss_key_t2_ParamLimits

0xa132,	// (0x0002a0c5) cell_ituss_key_t2

0xa164,	// (0x0002a0f7) cell_ituss_key_t3_ParamLimits

0xa164,	// (0x0002a0f7) cell_ituss_key_t3

0xa195,	// (0x0002a128) cell_ituss_key_t4_ParamLimits

0xa195,	// (0x0002a128) cell_ituss_key_t4

0x0004,

0xfed4,	// (0x0002fe67) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x0002fe67) cell_ituss_key_t

0xf2ec,	// (0x0002f27f) cell_vkbss_key_3p_pane_g1

0xf2f4,	// (0x0002f287) cell_vkbss_key_3p_pane_g2

0xf2fc,	// (0x0002f28f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedf,	// (0x0002fe72) cell_vkbss_key_3p_pane_g

0x279f,	// (0x00022732) bg_popup_fep_char_preview_window_cp02

0xf304,	// (0x0002f297) popup_fep_char_pre_window_t1

0xe65f,	// (0x0002e5f2) main_ai5_sk_pane

0xed67,	// (0x0002ecfa) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed73,	// (0x0002ed06) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc70d,	// (0x0002c6a0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed88,	// (0x0002ed1b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeab,	// (0x0002fe3e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed94,	// (0x0002ed27) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1e8d,	// (0x00021e20) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf312,	// (0x0002f2a5) main_ai5_sk_pane_g1

0x8b36,	// (0x00028ac9) popup_query_code_window_g1

0xf180,	// (0x0002f113) popup_fep_vkb_icf_pane

0xf1ad,	// (0x0002f140) popup_fep_vtchi_icf_pane

0xf31b,	// (0x0002f2ae) bg_icf_pane

0xf31b,	// (0x0002f2ae) list_vkb_icf_pane

0xf327,	// (0x0002f2ba) bg_icf_pane_cp01

0xf33a,	// (0x0002f2cd) vtchi_icf_list_pane

0xf39a,	// (0x0002f32d) list_vkb_icf_pane_t1_ParamLimits

0xf39a,	// (0x0002f32d) list_vkb_icf_pane_t1

0xf3bf,	// (0x0002f352) vtchi_icf_list_pane_t1_ParamLimits

0xf3bf,	// (0x0002f352) vtchi_icf_list_pane_t1

0xf16a,	// (0x0002f0fd) popup_fep_ituss_window_ParamLimits

0xf1ad,	// (0x0002f140) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d6,	// (0x0002f169) ituss_keypad_pane_ParamLimits

0xa002,	// (0x00029f95) ituss_sks_pane

0xf31b,	// (0x0002f2ae) bg_icf_pane_ParamLimits

0xf13a,	// (0x0002f0cd) icf_edit_indi_pane_ParamLimits

0xf13a,	// (0x0002f0cd) icf_edit_indi_pane

0xf31b,	// (0x0002f2ae) list_vkb_icf_pane_ParamLimits

0xf327,	// (0x0002f2ba) bg_icf_pane_cp01_ParamLimits

0xf155,	// (0x0002f0e8) icf_edit_indi_pane_cp01_ParamLimits

0xf155,	// (0x0002f0e8) icf_edit_indi_pane_cp01

0xf33a,	// (0x0002f2cd) vtchi_query_pane

0xe4db,	// (0x0002e46e) icf_edit_indi_pane_g1_ParamLimits

0xe4db,	// (0x0002e46e) icf_edit_indi_pane_g1

0xf43a,	// (0x0002f3cd) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0002f3cd) icf_edit_indi_pane_g2

0x0001,

0xff0a,	// (0x0002fe9d) icf_edit_indi_pane_g_ParamLimits

0xff0a,	// (0x0002fe9d) icf_edit_indi_pane_g

0xf44e,	// (0x0002f3e1) icf_edit_indi_pane_t1

0xf3e3,	// (0x0002f376) bg_input_focus_pane_cp042

0x1d65,	// (0x00021cf8) vtchi_button_pane

0xf3ec,	// (0x0002f37f) vtchi_query_pane_t1

0xf3fa,	// (0x0002f38d) vtchi_query_pane_t2

0xf408,	// (0x0002f39b) vtchi_query_pane_t3

0x0002,

0xfef9,	// (0x0002fe8c) vtchi_query_pane_t

0x19e3,	// (0x00021976) bg_button_pane_cp13

0xf416,	// (0x0002f3a9) vtchi_button_pane_g1

0xa1d8,	// (0x0002a16b) ituss_sks_pane_g1

0xa1e3,	// (0x0002a176) ituss_sks_pane_g2

0x0001,

0xff00,	// (0x0002fe93) ituss_sks_pane_g

0xf41e,	// (0x0002f3b1) ituss_sks_pane_t1

0xf42c,	// (0x0002f3bf) ituss_sks_pane_t2

0x0001,

0xff05,	// (0x0002fe98) ituss_sks_pane_t

0xba9a,	// (0x0002ba2d) indicator_nsta_pane_cp_g1

0xbaa3,	// (0x0002ba36) indicator_nsta_pane_cp_g2

0xbaab,	// (0x0002ba3e) indicator_nsta_pane_cp_g3

0xbab3,	// (0x0002ba46) indicator_nsta_pane_cp_g4

0xbaa3,	// (0x0002ba36) indicator_nsta_pane_cp_g5

0xbaab,	// (0x0002ba3e) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x0002fa23) indicator_nsta_pane_cp_g

0xe20d,	// (0x0002e1a0) cell_graphic2_pane_t2_ParamLimits

0xe20d,	// (0x0002e1a0) cell_graphic2_pane_t2

0x0001,

0xfd96,	// (0x0002fd29) cell_graphic2_pane_t_ParamLimits

0xfd96,	// (0x0002fd29) cell_graphic2_pane_t

0xe239,	// (0x0002e1cc) cell_graphic2_control_pane_t1

0x740e,	// (0x000273a1) signal_pane_g3_ParamLimits

0x740e,	// (0x000273a1) signal_pane_g3

0x7420,	// (0x000273b3) signal_pane_g4_ParamLimits

0x7420,	// (0x000273b3) signal_pane_g4

0xf124,	// (0x0002f0b7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf124,	// (0x0002f0b7) cell_ai5_widget_list_row_pane_t3

0xf2da,	// (0x0002f26d) cell_ituss_key_pane_t1_ParamLimits

0xf2da,	// (0x0002f26d) cell_ituss_key_pane_t1

0x8769,	// (0x000286fc) form_field_data_wide_pane_vc_t2_ParamLimits

0x8769,	// (0x000286fc) form_field_data_wide_pane_vc_t2

0x877d,	// (0x00028710) form_field_data_wide_pane_vc_t3_ParamLimits

0x877d,	// (0x00028710) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x0002f763) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x0002f763) form_field_data_wide_pane_vc_t

0xb744,	// (0x0002b6d7) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb744,	// (0x0002b6d7) form_field_slider_wide_pane_vc_t3

0xb822,	// (0x0002b7b5) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb822,	// (0x0002b7b5) form_field_popup_wide_pane_vc_t2

0xb839,	// (0x0002b7cc) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb839,	// (0x0002b7cc) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x0002fa12) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002fa12) form_field_popup_wide_pane_vc_t

0x9dd0,	// (0x00029d63) aid_fshwr2_btn_pane_ParamLimits

0x9de4,	// (0x00029d77) aid_fshwr2_syb_pane_ParamLimits

0x9df8,	// (0x00029d8b) aid_fshwr2_txt_pane_ParamLimits

0x1e8d,	// (0x00021e20) fshwr2_bg_pane_ParamLimits

0x9e08,	// (0x00029d9b) fshwr2_func_candi_pane_ParamLimits

0x9e2c,	// (0x00029dbf) fshwr2_hwr_syb_pane_ParamLimits

0x9e46,	// (0x00029dd9) fshwr2_icf_pane_ParamLimits

0x613a,	// (0x000260cd) list_double_graphic_pane_vc_g4_ParamLimits

0x613a,	// (0x000260cd) list_double_graphic_pane_vc_g4

0xa094,	// (0x0002a027) cell_ituss_key_pane_g3_ParamLimits

0xa094,	// (0x0002a027) cell_ituss_key_pane_g3

0xa1c6,	// (0x0002a159) cell_ituss_key_t5_ParamLimits

0xa1c6,	// (0x0002a159) cell_ituss_key_t5

0xf196,	// (0x0002f129) popup_fep_vkbss_window_ParamLimits

0xd6ba,	// (0x0002d64d) aid_cell_ai5_quarter

0xf44e,	// (0x0002f3e1) icf_edit_indi_pane_t1_ParamLimits

0x6bcc,	// (0x00026b5f) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6bcc,	// (0x00026b5f) aid_tch_indicator_popup_pane_cp2

0x6bdf,	// (0x00026b72) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6bdf,	// (0x00026b72) aid_tch_query_popup_data_pane_cp2

0x8ade,	// (0x00028a71) aid_tch_query_popup_pane_ParamLimits

0x8ade,	// (0x00028a71) aid_tch_query_popup_pane

0x8ade,	// (0x00028a71) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x8ade,	// (0x00028a71) aid_tch_query_popup_data_pane_cp1

0x203d,	// (0x00021fd0) cell_fshwr2_syb_bg_pane_ParamLimits

0x9f2e,	// (0x00029ec1) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9f42,	// (0x00029ed5) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf180,	// (0x0002f113) popup_fep_vkb_icf_pane_ParamLimits

0x9c1e,	// (0x00029bb1) bg_popup_fep_char_preview_window_g10

0xe795,	// (0x0002e728) cell_ai5_widget_pane_g11_ParamLimits

0xe795,	// (0x0002e728) cell_ai5_widget_pane_g11

0xe7a1,	// (0x0002e734) cell_ai5_widget_pane_g12_ParamLimits

0xe7a1,	// (0x0002e734) cell_ai5_widget_pane_g12

0xe7ad,	// (0x0002e740) cell_ai5_widget_pane_g13_ParamLimits

0xe7ad,	// (0x0002e740) cell_ai5_widget_pane_g13

0xe8dc,	// (0x0002e86f) cell_ai5_widget_pane_t11_ParamLimits

0xe8dc,	// (0x0002e86f) cell_ai5_widget_pane_t11

0xe8ee,	// (0x0002e881) cell_ai5_widget_pane_t12_ParamLimits

0xe8ee,	// (0x0002e881) cell_ai5_widget_pane_t12

0xa0a0,	// (0x0002a033) cell_ituss_key_pane_g4_ParamLimits

0xa0a0,	// (0x0002a033) cell_ituss_key_pane_g4

0xa0bc,	// (0x0002a04f) cell_ituss_key_pane_g5_ParamLimits

0xa0bc,	// (0x0002a04f) cell_ituss_key_pane_g5

0xa0d8,	// (0x0002a06b) cell_ituss_key_pane_g6_ParamLimits

0xa0d8,	// (0x0002a06b) cell_ituss_key_pane_g6

0x854f,	// (0x000284e2) bg_icf_pane_g1

0xf342,	// (0x0002f2d5) bg_icf_pane_g2

0xf34e,	// (0x0002f2e1) bg_icf_pane_g3

0xf358,	// (0x0002f2eb) bg_icf_pane_g4

0xf364,	// (0x0002f2f7) bg_icf_pane_g5

0xf36e,	// (0x0002f301) bg_icf_pane_g6

0xf37a,	// (0x0002f30d) bg_icf_pane_g7

0xf384,	// (0x0002f317) bg_icf_pane_g8

0xf390,	// (0x0002f323) bg_icf_pane_g9

0x0008,

0xfee6,	// (0x0002fe79) bg_icf_pane_g

0xf1c3,	// (0x0002f156) popup_hyb_candi_window_ParamLimits

0xf1c3,	// (0x0002f156) popup_hyb_candi_window

0x8653,	// (0x000285e6) bg_popup_sub_pane_cp01_ParamLimits

0x8653,	// (0x000285e6) bg_popup_sub_pane_cp01

0xf467,	// (0x0002f3fa) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0002f3fa) entry_hyb_candi_pane

0xf476,	// (0x0002f409) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0002f409) grid_hyb_candi_pane

0xf48b,	// (0x0002f41e) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0002f41e) grid_hyb_phrase_pane

0xf49a,	// (0x0002f42d) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0002f42d) cell_hyb_candi_pane

0xf4bd,	// (0x0002f450) cell_hyb_candi_scroll_pane

0x234d,	// (0x000222e0) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0002f459) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0002f467) cell_hyb_phrase_pane

0x234d,	// (0x000222e0) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0002f470) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0002f47e) entry_hyb_candi_pane_t1

0x279f,	// (0x00022732) input_focus_pane_cp06

0xf4f9,	// (0x0002f48c) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0002f494) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0002f49c) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0002f4a4) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0002f4ac) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0002f4b4) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small

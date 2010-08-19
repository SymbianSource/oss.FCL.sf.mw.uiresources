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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001bceb };

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
0x7b66,	// (0x00023851) Screen

0x7b72,	// (0x0002385d) application_window_ParamLimits

0x7b72,	// (0x0002385d) application_window

0x31e3,	// (0x0001eece) screen_g1

0x5771,	// (0x0002145c) area_bottom_pane_ParamLimits

0x5771,	// (0x0002145c) area_bottom_pane

0x5831,	// (0x0002151c) area_top_pane_ParamLimits

0x5831,	// (0x0002151c) area_top_pane

0x58c5,	// (0x000215b0) main_pane_ParamLimits

0x58c5,	// (0x000215b0) main_pane

0x7b82,	// (0x0002386d) misc_graphics

0x956e,	// (0x00025259) battery_pane_ParamLimits

0x956e,	// (0x00025259) battery_pane

0xa250,	// (0x00025f3b) bg_status_flat_pane_g8

0xa258,	// (0x00025f43) bg_status_flat_pane_g9

0x9636,	// (0x00025321) context_pane_ParamLimits

0x9636,	// (0x00025321) context_pane

0x974c,	// (0x00025437) navi_pane_ParamLimits

0x974c,	// (0x00025437) navi_pane

0x97d0,	// (0x000254bb) signal_pane_ParamLimits

0x97d0,	// (0x000254bb) signal_pane

0x0008,

0xf854,	// (0x0002b53f) bg_status_flat_pane_g

0x983d,	// (0x00025528) status_pane_g1_ParamLimits

0x983d,	// (0x00025528) status_pane_g1

0x9851,	// (0x0002553c) status_pane_g2_ParamLimits

0x9851,	// (0x0002553c) status_pane_g2

0x985d,	// (0x00025548) status_pane_g3_ParamLimits

0x985d,	// (0x00025548) status_pane_g3

0x0004,

0xf77b,	// (0x0002b466) status_pane_g_ParamLimits

0xf77b,	// (0x0002b466) status_pane_g

0x9891,	// (0x0002557c) title_pane_ParamLimits

0x9891,	// (0x0002557c) title_pane

0x98ce,	// (0x000255b9) uni_indicator_pane_ParamLimits

0x98ce,	// (0x000255b9) uni_indicator_pane

0x949e,	// (0x00025189) bg_list_pane_ParamLimits

0x949e,	// (0x00025189) bg_list_pane

0x4d2b,	// (0x00020a16) find_pane

0x94be,	// (0x000251a9) listscroll_app_pane_ParamLimits

0x94be,	// (0x000251a9) listscroll_app_pane

0x94ca,	// (0x000251b5) listscroll_form_pane

0x4d33,	// (0x00020a1e) listscroll_gen_pane_ParamLimits

0x4d33,	// (0x00020a1e) listscroll_gen_pane

0x619a,	// (0x00021e85) listscroll_set_pane

0x86e3,	// (0x000243ce) main_idle_act_pane

0x919a,	// (0x00024e85) main_idle_trad_pane

0x919a,	// (0x00024e85) main_list_empty_pane

0x94be,	// (0x000251a9) main_midp_pane

0x94e4,	// (0x000251cf) main_pane_g1_ParamLimits

0x94e4,	// (0x000251cf) main_pane_g1

0x61a2,	// (0x00021e8d) popup_ai_message_window_ParamLimits

0x61a2,	// (0x00021e8d) popup_ai_message_window

0x6248,	// (0x00021f33) popup_fep_china_uni_window_ParamLimits

0x6248,	// (0x00021f33) popup_fep_china_uni_window

0x62a4,	// (0x00021f8f) popup_fep_japan_candidate_window_ParamLimits

0x62a4,	// (0x00021f8f) popup_fep_japan_candidate_window

0x62c4,	// (0x00021faf) popup_fep_japan_predictive_window_ParamLimits

0x62c4,	// (0x00021faf) popup_fep_japan_predictive_window

0x62f4,	// (0x00021fdf) popup_find_window

0x6301,	// (0x00021fec) popup_grid_graphic_window_ParamLimits

0x6301,	// (0x00021fec) popup_grid_graphic_window

0x632d,	// (0x00022018) popup_large_graphic_colour_window

0x6353,	// (0x0002203e) popup_menu_window_ParamLimits

0x6353,	// (0x0002203e) popup_menu_window

0x650b,	// (0x000221f6) popup_note_image_window

0x64f7,	// (0x000221e2) popup_note_wait_window_ParamLimits

0x64f7,	// (0x000221e2) popup_note_wait_window

0x64f7,	// (0x000221e2) popup_note_window_ParamLimits

0x64f7,	// (0x000221e2) popup_note_window

0x6561,	// (0x0002224c) popup_query_code_window_ParamLimits

0x6561,	// (0x0002224c) popup_query_code_window

0x6575,	// (0x00022260) popup_query_data_code_window_ParamLimits

0x6575,	// (0x00022260) popup_query_data_code_window

0x6592,	// (0x0002227d) popup_query_data_window_ParamLimits

0x6592,	// (0x0002227d) popup_query_data_window

0x65ae,	// (0x00022299) popup_query_sat_info_window_ParamLimits

0x65ae,	// (0x00022299) popup_query_sat_info_window

0x65e7,	// (0x000222d2) popup_snote_single_graphic_window_ParamLimits

0x65e7,	// (0x000222d2) popup_snote_single_graphic_window

0x65e7,	// (0x000222d2) popup_snote_single_text_window_ParamLimits

0x65e7,	// (0x000222d2) popup_snote_single_text_window

0x65fc,	// (0x000222e7) popup_sub_window_general

0x672c,	// (0x00022417) popup_window_general_ParamLimits

0x672c,	// (0x00022417) popup_window_general

0x94f2,	// (0x000251dd) power_save_pane

0x602c,	// (0x00021d17) control_pane_g1_ParamLimits

0x602c,	// (0x00021d17) control_pane_g1

0x6053,	// (0x00021d3e) control_pane_g2_ParamLimits

0x6053,	// (0x00021d3e) control_pane_g2

0x9461,	// (0x0002514c) control_pane_g3_ParamLimits

0x9461,	// (0x0002514c) control_pane_g3

0x0007,

0xf763,	// (0x0002b44e) control_pane_g_ParamLimits

0xf763,	// (0x0002b44e) control_pane_g

0x609d,	// (0x00021d88) control_pane_t1_ParamLimits

0x609d,	// (0x00021d88) control_pane_t1

0x60f1,	// (0x00021ddc) control_pane_t2_ParamLimits

0x60f1,	// (0x00021ddc) control_pane_t2

0x0002,

0xf774,	// (0x0002b45f) control_pane_t_ParamLimits

0xf774,	// (0x0002b45f) control_pane_t

0x9386,	// (0x00025071) navi_navi_volume_pane_cp1

0x938e,	// (0x00025079) status_small_icon_pane

0x9396,	// (0x00025081) status_small_pane_g1_ParamLimits

0x9396,	// (0x00025081) status_small_pane_g1

0x93ca,	// (0x000250b5) status_small_pane_g2_ParamLimits

0x93ca,	// (0x000250b5) status_small_pane_g2

0x93d6,	// (0x000250c1) status_small_pane_g3_ParamLimits

0x93d6,	// (0x000250c1) status_small_pane_g3

0x93e2,	// (0x000250cd) status_small_pane_g4_ParamLimits

0x93e2,	// (0x000250cd) status_small_pane_g4

0x93ee,	// (0x000250d9) status_small_pane_g5_ParamLimits

0x93ee,	// (0x000250d9) status_small_pane_g5

0x93fc,	// (0x000250e7) status_small_pane_g6_ParamLimits

0x93fc,	// (0x000250e7) status_small_pane_g6

0x0007,

0xf752,	// (0x0002b43d) status_small_pane_g_ParamLimits

0xf752,	// (0x0002b43d) status_small_pane_g

0x942b,	// (0x00025116) status_small_pane_t1

0x944d,	// (0x00025138) status_small_wait_pane_ParamLimits

0x944d,	// (0x00025138) status_small_wait_pane

0x8c09,	// (0x000248f4) aid_levels_signal_ParamLimits

0x8c09,	// (0x000248f4) aid_levels_signal

0x8c1b,	// (0x00024906) signal_pane_g1_ParamLimits

0x8c1b,	// (0x00024906) signal_pane_g1

0x8c30,	// (0x0002491b) signal_pane_g2_ParamLimits

0x8c30,	// (0x0002491b) signal_pane_g2

0x0003,

0xf6e3,	// (0x0002b3ce) signal_pane_g_ParamLimits

0xf6e3,	// (0x0002b3ce) signal_pane_g

0x8c6b,	// (0x00024956) context_pane_g1

0x7b8c,	// (0x00023877) title_pane_g1

0x7bc2,	// (0x000238ad) title_pane_t1

0x7c2a,	// (0x00023915) title_pane_t2

0x7c50,	// (0x0002393b) title_pane_t3

0x0002,

0xf532,	// (0x0002b21d) title_pane_t

0x98e6,	// (0x000255d1) aid_levels_battery_ParamLimits

0x98e6,	// (0x000255d1) aid_levels_battery

0x98fa,	// (0x000255e5) battery_pane_g1_ParamLimits

0x98fa,	// (0x000255e5) battery_pane_g1

0x9910,	// (0x000255fb) battery_pane_g2_ParamLimits

0x9910,	// (0x000255fb) battery_pane_g2

0x0001,

0xf786,	// (0x0002b471) battery_pane_g_ParamLimits

0xf786,	// (0x0002b471) battery_pane_g

0xab92,	// (0x0002687d) uni_indicator_pane_g1

0xaba8,	// (0x00026893) uni_indicator_pane_g2

0xabbe,	// (0x000268a9) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0002b5e7) uni_indicator_pane_g

0x900c,	// (0x00024cf7) navi_icon_pane_ParamLimits

0x900c,	// (0x00024cf7) navi_icon_pane

0x8f4a,	// (0x00024c35) navi_midp_pane

0x9028,	// (0x00024d13) navi_navi_pane

0x9032,	// (0x00024d1d) navi_text_pane_ParamLimits

0x9032,	// (0x00024d1d) navi_text_pane

0x31e3,	// (0x0001eece) status_small_wait_pane_g1

0x80a5,	// (0x00023d90) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0002b5e2) status_small_wait_pane_g

0xa8b7,	// (0x000265a2) navi_navi_icon_text_pane

0xa8bf,	// (0x000265aa) navi_navi_pane_g1_ParamLimits

0xa8bf,	// (0x000265aa) navi_navi_pane_g1

0xa8d1,	// (0x000265bc) navi_navi_pane_g2_ParamLimits

0xa8d1,	// (0x000265bc) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0002b5b0) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0002b5b0) navi_navi_pane_g

0xa8e3,	// (0x000265ce) navi_navi_tabs_pane

0xa8ec,	// (0x000265d7) navi_navi_text_pane

0xa8b7,	// (0x000265a2) navi_navi_volume_pane

0xa893,	// (0x0002657e) navi_text_pane_t1

0xa887,	// (0x00026572) navi_icon_pane_g1

0xa7da,	// (0x000264c5) navi_navi_text_pane_t1

0x69cc,	// (0x000226b7) navi_navi_volume_pane_g1

0x69d4,	// (0x000226bf) volume_small_pane

0xa740,	// (0x0002642b) navi_navi_icon_text_pane_g1

0xa748,	// (0x00026433) navi_navi_icon_text_pane_t1

0x9028,	// (0x00024d13) navi_tabs_2_long_pane

0x9028,	// (0x00024d13) navi_tabs_2_pane

0x9028,	// (0x00024d13) navi_tabs_3_long_pane

0x9028,	// (0x00024d13) navi_tabs_3_pane

0x9028,	// (0x00024d13) navi_tabs_4_pane

0x69ac,	// (0x00022697) tabs_2_active_pane_ParamLimits

0x69ac,	// (0x00022697) tabs_2_active_pane

0x69bc,	// (0x000226a7) tabs_2_passive_pane_ParamLimits

0x69bc,	// (0x000226a7) tabs_2_passive_pane

0x697a,	// (0x00022665) tabs_3_active_pane_ParamLimits

0x697a,	// (0x00022665) tabs_3_active_pane

0x698a,	// (0x00022675) tabs_3_passive_pane_ParamLimits

0x698a,	// (0x00022675) tabs_3_passive_pane

0x699b,	// (0x00022686) tabs_3_passive_pane_cp_ParamLimits

0x699b,	// (0x00022686) tabs_3_passive_pane_cp

0x6936,	// (0x00022621) tabs_4_active_pane_ParamLimits

0x6936,	// (0x00022621) tabs_4_active_pane

0x6947,	// (0x00022632) tabs_4_passive_pane_ParamLimits

0x6947,	// (0x00022632) tabs_4_passive_pane

0x6958,	// (0x00022643) tabs_4_passive_pane_cp_ParamLimits

0x6958,	// (0x00022643) tabs_4_passive_pane_cp

0x6969,	// (0x00022654) tabs_4_passive_pane_cp2_ParamLimits

0x6969,	// (0x00022654) tabs_4_passive_pane_cp2

0x6912,	// (0x000225fd) tabs_2_long_active_pane_ParamLimits

0x6912,	// (0x000225fd) tabs_2_long_active_pane

0x6924,	// (0x0002260f) tabs_2_long_passive_pane_ParamLimits

0x6924,	// (0x0002260f) tabs_2_long_passive_pane

0x68d3,	// (0x000225be) tabs_3_long_active_pane_ParamLimits

0x68d3,	// (0x000225be) tabs_3_long_active_pane

0x68e6,	// (0x000225d1) tabs_3_long_passive_pane_ParamLimits

0x68e6,	// (0x000225d1) tabs_3_long_passive_pane

0x68ff,	// (0x000225ea) tabs_3_long_passive_pane_cp_ParamLimits

0x68ff,	// (0x000225ea) tabs_3_long_passive_pane_cp

0x6879,	// (0x00022564) volume_small_pane_g1

0x6882,	// (0x0002256d) volume_small_pane_g2

0x688b,	// (0x00022576) volume_small_pane_g3

0x6894,	// (0x0002257f) volume_small_pane_g4

0x689d,	// (0x00022588) volume_small_pane_g5

0x68a6,	// (0x00022591) volume_small_pane_g6

0x68af,	// (0x0002259a) volume_small_pane_g7

0x68b8,	// (0x000225a3) volume_small_pane_g8

0x68c1,	// (0x000225ac) volume_small_pane_g9

0x68ca,	// (0x000225b5) volume_small_pane_g10

0x0009,

0xf891,	// (0x0002b57c) volume_small_pane_g

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp2_ParamLimits

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp2

0x7c70,	// (0x0002395b) tabs_3_active_pane_g1

0x7c78,	// (0x00023963) tabs_3_active_pane_t1

0x7c62,	// (0x0002394d) bg_passive_tab_pane_cp2_ParamLimits

0x7c62,	// (0x0002394d) bg_passive_tab_pane_cp2

0x7c70,	// (0x0002395b) tabs_3_passive_pane_g1

0x7c78,	// (0x00023963) tabs_3_passive_pane_t1

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp3_ParamLimits

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp3

0x7c8a,	// (0x00023975) tabs_4_active_pane_g1

0x7c92,	// (0x0002397d) tabs_4_active_pane_t1

0x7c62,	// (0x0002394d) bg_passive_tab_pane_cp3_ParamLimits

0x7c62,	// (0x0002394d) bg_passive_tab_pane_cp3

0x7c8a,	// (0x00023975) tabs_4_1_passive_pane_g1

0x7c92,	// (0x0002397d) tabs_4_1_passive_pane_t1

0x94be,	// (0x000251a9) list_highlight_pane_cp2

0xae05,	// (0x00026af0) list_set_pane_ParamLimits

0xae05,	// (0x00026af0) list_set_pane

0xaeab,	// (0x00026b96) main_pane_set_t1_ParamLimits

0xaeab,	// (0x00026b96) main_pane_set_t1

0xaecb,	// (0x00026bb6) main_pane_set_t2_ParamLimits

0xaecb,	// (0x00026bb6) main_pane_set_t2

0xaedf,	// (0x00026bca) main_pane_set_t3_ParamLimits

0xaedf,	// (0x00026bca) main_pane_set_t3

0xaef1,	// (0x00026bdc) main_pane_set_t4_ParamLimits

0xaef1,	// (0x00026bdc) main_pane_set_t4

0x0003,

0xf961,	// (0x0002b64c) main_pane_set_t_ParamLimits

0xf961,	// (0x0002b64c) main_pane_set_t

0xaf03,	// (0x00026bee) setting_code_pane

0xaf0f,	// (0x00026bfa) setting_slider_graphic_pane

0xaf0f,	// (0x00026bfa) setting_slider_pane

0xaf0f,	// (0x00026bfa) setting_text_pane

0xaf0f,	// (0x00026bfa) setting_volume_pane

0x5b14,	// (0x000217ff) volume_set_pane

0x7c62,	// (0x0002394d) bg_set_opt_pane_cp

0x5b1c,	// (0x00021807) setting_slider_pane_t1

0x5b35,	// (0x00021820) setting_slider_pane_t2

0x5b4f,	// (0x0002183a) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002b224) setting_slider_pane_t

0x5b67,	// (0x00021852) slider_set_pane

0x7b82,	// (0x0002386d) bg_set_opt_pane_cp2

0x7ca4,	// (0x0002398f) setting_slider_graphic_pane_g1

0x5b7d,	// (0x00021868) setting_slider_graphic_pane_t1

0x5b8d,	// (0x00021878) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002b22b) setting_slider_graphic_pane_t

0x5b9d,	// (0x00021888) slider_set_pane_cp

0x7b82,	// (0x0002386d) input_focus_pane_cp1

0xadc4,	// (0x00026aaf) list_set_text_pane

0x31e3,	// (0x0001eece) setting_text_pane_g1

0x7b82,	// (0x0002386d) input_focus_pane_cp2

0x31e3,	// (0x0001eece) setting_code_pane_g1

0x7cad,	// (0x00023998) setting_code_pane_t1

0x4572,	// (0x0002025d) set_text_pane_t1_ParamLimits

0x4572,	// (0x0002025d) set_text_pane_t1

0x8547,	// (0x00024232) set_opt_bg_pane_g1

0x854f,	// (0x0002423a) set_opt_bg_pane_g2

0xad9e,	// (0x00026a89) set_opt_bg_pane_g3

0x855f,	// (0x0002424a) set_opt_bg_pane_g4

0x8567,	// (0x00024252) set_opt_bg_pane_g5

0x856f,	// (0x0002425a) set_opt_bg_pane_g6

0xada8,	// (0x00026a93) set_opt_bg_pane_g7

0xadb0,	// (0x00026a9b) set_opt_bg_pane_g8

0xadba,	// (0x00026aa5) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0002b639) set_opt_bg_pane_g

0xad91,	// (0x00026a7c) slider_set_pane_g1

0x6a41,	// (0x0002272c) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0002b62a) slider_set_pane_g

0x69dd,	// (0x000226c8) volume_set_pane_g1

0x69e5,	// (0x000226d0) volume_set_pane_g2

0x69ed,	// (0x000226d8) volume_set_pane_g3

0x69f5,	// (0x000226e0) volume_set_pane_g4

0x69fd,	// (0x000226e8) volume_set_pane_g5

0x6a05,	// (0x000226f0) volume_set_pane_g6

0x6a0d,	// (0x000226f8) volume_set_pane_g7

0x6a15,	// (0x00022700) volume_set_pane_g8

0x6a1d,	// (0x00022708) volume_set_pane_g9

0x6a25,	// (0x00022710) volume_set_pane_g10

0x0009,

0xf917,	// (0x0002b602) volume_set_pane_g

0x7cbb,	// (0x000239a6) indicator_pane_ParamLimits

0x7cbb,	// (0x000239a6) indicator_pane

0x7cc7,	// (0x000239b2) main_idle_pane_g2_ParamLimits

0x7cc7,	// (0x000239b2) main_idle_pane_g2

0x7cef,	// (0x000239da) main_pane_idle_g1_ParamLimits

0x7cef,	// (0x000239da) main_pane_idle_g1

0x7cfc,	// (0x000239e7) popup_clock_digital_analogue_window_ParamLimits

0x7cfc,	// (0x000239e7) popup_clock_digital_analogue_window

0x7d13,	// (0x000239fe) soft_indicator_pane_ParamLimits

0x7d13,	// (0x000239fe) soft_indicator_pane

0x7d1f,	// (0x00023a0a) wallpaper_pane_ParamLimits

0x7d1f,	// (0x00023a0a) wallpaper_pane

0x31e3,	// (0x0001eece) wallpaper_pane_g1

0x7d33,	// (0x00023a1e) indicator_pane_g1_ParamLimits

0x7d33,	// (0x00023a1e) indicator_pane_g1

0xb1df,	// (0x00026eca) navi_navi_icon_text_pane_srt_g1

0x7d4e,	// (0x00023a39) soft_indicator_pane_t1

0x7d68,	// (0x00023a53) aid_ps_area_pane

0x7d79,	// (0x00023a64) aid_ps_clock_pane

0x7d87,	// (0x00023a72) aid_ps_indicator_pane

0x7d93,	// (0x00023a7e) indicator_ps_pane_ParamLimits

0x7d93,	// (0x00023a7e) indicator_ps_pane

0x7da2,	// (0x00023a8d) power_save_pane_g1_ParamLimits

0x7da2,	// (0x00023a8d) power_save_pane_g1

0x7dae,	// (0x00023a99) power_save_pane_g2_ParamLimits

0x7dae,	// (0x00023a99) power_save_pane_g2

0x5725,	// (0x00021410) aid_navinavi_width_pane

0x7d68,	// (0x00023a53) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002b230) power_save_pane_g_ParamLimits

0xf545,	// (0x0002b230) power_save_pane_g

0x7dbc,	// (0x00023aa7) power_save_pane_t1_ParamLimits

0x7dbc,	// (0x00023aa7) power_save_pane_t1

0x7d79,	// (0x00023a64) aid_ps_clock_pane_ParamLimits

0x7d87,	// (0x00023a72) aid_ps_indicator_pane_ParamLimits

0x7dce,	// (0x00023ab9) power_save_pane_t4_ParamLimits

0x7dce,	// (0x00023ab9) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002b235) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002b235) power_save_pane_t

0x7df8,	// (0x00023ae3) power_save_t3_ParamLimits

0x7df8,	// (0x00023ae3) power_save_t3

0x7de3,	// (0x00023ace) power_save_t2_ParamLimits

0x7de3,	// (0x00023ace) power_save_t2

0x7e0d,	// (0x00023af8) indicator_ps_pane_g1

0x7e16,	// (0x00023b01) ai_gene_pane_ParamLimits

0x7e16,	// (0x00023b01) ai_gene_pane

0x7e22,	// (0x00023b0d) ai_links_pane_ParamLimits

0x7e22,	// (0x00023b0d) ai_links_pane

0x7e2e,	// (0x00023b19) indicator_pane_cp1_ParamLimits

0x7e2e,	// (0x00023b19) indicator_pane_cp1

0x7e3a,	// (0x00023b25) main_pane_idle_g1_cp_ParamLimits

0x7e3a,	// (0x00023b25) main_pane_idle_g1_cp

0x7e46,	// (0x00023b31) popup_ai_links_title_window

0x7e4f,	// (0x00023b3a) soft_indicator_pane_cp1_ParamLimits

0x7e4f,	// (0x00023b3a) soft_indicator_pane_cp1

0xab80,	// (0x0002686b) ai_links_pane_g1

0xab89,	// (0x00026874) grid_ai_links_pane

0xab63,	// (0x0002684e) ai_gene_pane_1

0xab6e,	// (0x00026859) ai_gene_pane_2

0xab77,	// (0x00026862) list_highlight_pane_cp4

0xab47,	// (0x00026832) cell_ai_link_pane_ParamLimits

0xab47,	// (0x00026832) cell_ai_link_pane

0xab3f,	// (0x0002682a) cell_ai_link_pane_g1

0x80a5,	// (0x00023d90) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0002b5dd) cell_ai_link_pane_g

0x7b82,	// (0x0002386d) grid_highlight_cp2

0x7b82,	// (0x0002386d) bg_popup_sub_pane_cp1

0x7e69,	// (0x00023b54) popup_ai_links_title_window_t1

0xaa8d,	// (0x00026778) ai_gene_pane_1_g1_ParamLimits

0xaa8d,	// (0x00026778) ai_gene_pane_1_g1

0xaa99,	// (0x00026784) ai_gene_pane_1_g2_ParamLimits

0xaa99,	// (0x00026784) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0002b5d3) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0002b5d3) ai_gene_pane_1_g

0xaaa6,	// (0x00026791) ai_gene_pane_1_t1_ParamLimits

0xaaa6,	// (0x00026791) ai_gene_pane_1_t1

0xaada,	// (0x000267c5) grid_ai_soft_ind_pane

0xaa78,	// (0x00026763) ai_gene_pane_2_t1_ParamLimits

0xaa78,	// (0x00026763) ai_gene_pane_2_t1

0x7e78,	// (0x00023b63) main_pane_empty_t1_ParamLimits

0x7e78,	// (0x00023b63) main_pane_empty_t1

0x7e90,	// (0x00023b7b) main_pane_empty_t2_ParamLimits

0x7e90,	// (0x00023b7b) main_pane_empty_t2

0x7ea5,	// (0x00023b90) main_pane_empty_t3_ParamLimits

0x7ea5,	// (0x00023b90) main_pane_empty_t3

0x7eb7,	// (0x00023ba2) main_pane_empty_t4_ParamLimits

0x7eb7,	// (0x00023ba2) main_pane_empty_t4

0x7ec9,	// (0x00023bb4) main_pane_empty_t5_ParamLimits

0x7ec9,	// (0x00023bb4) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002b23a) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002b23a) main_pane_empty_t

0x860e,	// (0x000242f9) bg_popup_window_pane_ParamLimits

0x860e,	// (0x000242f9) bg_popup_window_pane

0xa7e8,	// (0x000264d3) find_popup_pane_cp2_ParamLimits

0xa7e8,	// (0x000264d3) find_popup_pane_cp2

0xa7f4,	// (0x000264df) heading_pane_ParamLimits

0xa7f4,	// (0x000264df) heading_pane

0x7b82,	// (0x0002386d) bg_popup_sub_pane

0xa762,	// (0x0002644d) bg_popup_window_pane_g1_ParamLimits

0xa762,	// (0x0002644d) bg_popup_window_pane_g1

0xa76e,	// (0x00026459) bg_popup_window_pane_g2_ParamLimits

0xa76e,	// (0x00026459) bg_popup_window_pane_g2

0xa77a,	// (0x00026465) bg_popup_window_pane_g3_ParamLimits

0xa77a,	// (0x00026465) bg_popup_window_pane_g3

0xa786,	// (0x00026471) bg_popup_window_pane_g4_ParamLimits

0xa786,	// (0x00026471) bg_popup_window_pane_g4

0xa792,	// (0x0002647d) bg_popup_window_pane_g5_ParamLimits

0xa792,	// (0x0002647d) bg_popup_window_pane_g5

0xa79e,	// (0x00026489) bg_popup_window_pane_g6_ParamLimits

0xa79e,	// (0x00026489) bg_popup_window_pane_g6

0xa7aa,	// (0x00026495) bg_popup_window_pane_g7_ParamLimits

0xa7aa,	// (0x00026495) bg_popup_window_pane_g7

0xa7b6,	// (0x000264a1) bg_popup_window_pane_g8_ParamLimits

0xa7b6,	// (0x000264a1) bg_popup_window_pane_g8

0xa7c2,	// (0x000264ad) bg_popup_window_pane_g9_ParamLimits

0xa7c2,	// (0x000264ad) bg_popup_window_pane_g9

0xa7ce,	// (0x000264b9) bg_popup_window_pane_g10_ParamLimits

0xa7ce,	// (0x000264b9) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0002b59b) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0002b59b) bg_popup_window_pane_g

0xa6f7,	// (0x000263e2) bg_popup_heading_pane_ParamLimits

0xa6f7,	// (0x000263e2) bg_popup_heading_pane

0x6ac9,	// (0x000227b4) tabs_4_passive_pane_cp_srt_ParamLimits

0x6ac9,	// (0x000227b4) tabs_4_passive_pane_cp_srt

0x6adb,	// (0x000227c6) tabs_4_passive_pane_srt_ParamLimits

0xa70b,	// (0x000263f6) heading_pane_g2

0x6adb,	// (0x000227c6) tabs_4_passive_pane_srt

0x94be,	// (0x000251a9) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94be,	// (0x000251a9) bg_passive_tab_pane_cp3_srt

0xa713,	// (0x000263fe) heading_pane_t1_ParamLimits

0xa713,	// (0x000263fe) heading_pane_t1

0xa72a,	// (0x00026415) heading_pane_t2_ParamLimits

0xa72a,	// (0x00026415) heading_pane_t2

0x0001,

0xf8ab,	// (0x0002b596) heading_pane_t_ParamLimits

0xf8ab,	// (0x0002b596) heading_pane_t

0xa218,	// (0x00025f03) bg_popup_heading_pane_g1

0xa2c7,	// (0x00025fb2) bg_popup_heading_pane_g2

0xa2d1,	// (0x00025fbc) bg_popup_heading_pane_g3

0xa2db,	// (0x00025fc6) bg_popup_heading_pane_g4

0xa2e5,	// (0x00025fd0) bg_popup_heading_pane_g5

0xa2ef,	// (0x00025fda) bg_popup_heading_pane_g6

0xa2f7,	// (0x00025fe2) bg_popup_heading_pane_g7

0xa2ff,	// (0x00025fea) bg_popup_heading_pane_g8

0xa309,	// (0x00025ff4) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0002b552) bg_popup_heading_pane_g

0x99e8,	// (0x000256d3) bg_popup_sub_pane_g1

0x99f0,	// (0x000256db) bg_popup_sub_pane_g2

0x99f8,	// (0x000256e3) bg_popup_sub_pane_g3

0x9a00,	// (0x000256eb) bg_popup_sub_pane_g4

0x9a08,	// (0x000256f3) bg_popup_sub_pane_g5

0x9a10,	// (0x000256fb) bg_popup_sub_pane_g6

0x9a18,	// (0x00025703) bg_popup_sub_pane_g7

0x9a20,	// (0x0002570b) bg_popup_sub_pane_g8

0x9a28,	// (0x00025713) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0002b52c) bg_popup_sub_pane_g

0x7edd,	// (0x00023bc8) bg_popup_window_pane_cp5_ParamLimits

0x7edd,	// (0x00023bc8) bg_popup_window_pane_cp5

0x7ef9,	// (0x00023be4) popup_note_window_g1_ParamLimits

0x7ef9,	// (0x00023be4) popup_note_window_g1

0x7f05,	// (0x00023bf0) popup_note_window_t1_ParamLimits

0x7f05,	// (0x00023bf0) popup_note_window_t1

0x7f1b,	// (0x00023c06) popup_note_window_t2_ParamLimits

0x7f1b,	// (0x00023c06) popup_note_window_t2

0x7f31,	// (0x00023c1c) popup_note_window_t3_ParamLimits

0x7f31,	// (0x00023c1c) popup_note_window_t3

0x7f47,	// (0x00023c32) popup_note_window_t4_ParamLimits

0x7f47,	// (0x00023c32) popup_note_window_t4

0x7f6f,	// (0x00023c5a) popup_note_window_t5_ParamLimits

0x7f6f,	// (0x00023c5a) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002b245) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002b245) popup_note_window_t

0x7fb9,	// (0x00023ca4) bg_popup_window_pane_cp6_ParamLimits

0x7fb9,	// (0x00023ca4) bg_popup_window_pane_cp6

0xa194,	// (0x00025e7f) popup_note_image_window_g1_ParamLimits

0xa194,	// (0x00025e7f) popup_note_image_window_g1

0xa1a0,	// (0x00025e8b) popup_note_image_window_g2_ParamLimits

0xa1a0,	// (0x00025e8b) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0002b520) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0002b520) popup_note_image_window_g

0xa1b9,	// (0x00025ea4) popup_note_image_window_t1_ParamLimits

0xa1b9,	// (0x00025ea4) popup_note_image_window_t1

0xa1d2,	// (0x00025ebd) popup_note_image_window_t2_ParamLimits

0xa1d2,	// (0x00025ebd) popup_note_image_window_t2

0xa1eb,	// (0x00025ed6) popup_note_image_window_t3_ParamLimits

0xa1eb,	// (0x00025ed6) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0002b525) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0002b525) popup_note_image_window_t

0xa055,	// (0x00025d40) bg_popup_window_pane_cp7_ParamLimits

0xa055,	// (0x00025d40) bg_popup_window_pane_cp7

0xa085,	// (0x00025d70) popup_note_wait_window_g1_ParamLimits

0xa085,	// (0x00025d70) popup_note_wait_window_g1

0xa091,	// (0x00025d7c) popup_note_wait_window_g2_ParamLimits

0xa091,	// (0x00025d7c) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0002b50e) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0002b50e) popup_note_wait_window_g

0xa0a9,	// (0x00025d94) popup_note_wait_window_t1_ParamLimits

0xa0a9,	// (0x00025d94) popup_note_wait_window_t1

0xa0d0,	// (0x00025dbb) popup_note_wait_window_t2_ParamLimits

0xa0d0,	// (0x00025dbb) popup_note_wait_window_t2

0xa0ed,	// (0x00025dd8) popup_note_wait_window_t3_ParamLimits

0xa0ed,	// (0x00025dd8) popup_note_wait_window_t3

0xa100,	// (0x00025deb) popup_note_wait_window_t4_ParamLimits

0xa100,	// (0x00025deb) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0002b515) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0002b515) popup_note_wait_window_t

0xa125,	// (0x00025e10) wait_bar_pane_ParamLimits

0xa125,	// (0x00025e10) wait_bar_pane

0x7b82,	// (0x0002386d) wait_anim_pane

0x7b82,	// (0x0002386d) wait_border_pane

0x31e3,	// (0x0001eece) wait_anim_pane_g1

0x31e3,	// (0x0001eece) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0002b3c9) wait_anim_pane_g

0x9ff9,	// (0x00025ce4) wait_border_pane_g1

0xa004,	// (0x00025cef) wait_border_pane_g2

0xa00d,	// (0x00025cf8) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0002b507) wait_border_pane_g

0x9e64,	// (0x00025b4f) bg_popup_window_pane_cp16_ParamLimits

0x9e64,	// (0x00025b4f) bg_popup_window_pane_cp16

0x9f64,	// (0x00025c4f) indicator_popup_pane_cp4_ParamLimits

0x9f64,	// (0x00025c4f) indicator_popup_pane_cp4

0x9f78,	// (0x00025c63) popup_query_data_window_t1_ParamLimits

0x9f78,	// (0x00025c63) popup_query_data_window_t1

0x9f8a,	// (0x00025c75) popup_query_data_window_t2_ParamLimits

0x9f8a,	// (0x00025c75) popup_query_data_window_t2

0x9fa3,	// (0x00025c8e) popup_query_data_window_t3_ParamLimits

0x9fa3,	// (0x00025c8e) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0002b500) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0002b500) popup_query_data_window_t

0x9fbd,	// (0x00025ca8) query_popup_data_pane_ParamLimits

0x9fbd,	// (0x00025ca8) query_popup_data_pane

0x9fd1,	// (0x00025cbc) query_popup_data_pane_cp1_ParamLimits

0x9fd1,	// (0x00025cbc) query_popup_data_pane_cp1

0x9e64,	// (0x00025b4f) bg_popup_window_pane_cp10_ParamLimits

0x9e64,	// (0x00025b4f) bg_popup_window_pane_cp10

0x9e96,	// (0x00025b81) indicator_popup_pane_ParamLimits

0x9e96,	// (0x00025b81) indicator_popup_pane

0x9eb8,	// (0x00025ba3) popup_query_code_window_t1_ParamLimits

0x9eb8,	// (0x00025ba3) popup_query_code_window_t1

0x9ed2,	// (0x00025bbd) popup_query_code_window_t2_ParamLimits

0x9ed2,	// (0x00025bbd) popup_query_code_window_t2

0x9f1b,	// (0x00025c06) popup_query_code_window_t3_ParamLimits

0x9f1b,	// (0x00025c06) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0002b4f9) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0002b4f9) popup_query_code_window_t

0x9f4a,	// (0x00025c35) query_popup_pane_ParamLimits

0x9f4a,	// (0x00025c35) query_popup_pane

0x7fb9,	// (0x00023ca4) bg_popup_window_pane_cp15_ParamLimits

0x7fb9,	// (0x00023ca4) bg_popup_window_pane_cp15

0x7fd7,	// (0x00023cc2) indicator_popup_pane_cp1_ParamLimits

0x7fd7,	// (0x00023cc2) indicator_popup_pane_cp1

0x7fea,	// (0x00023cd5) indicator_popup_pane_cp2_ParamLimits

0x7fea,	// (0x00023cd5) indicator_popup_pane_cp2

0x7ffd,	// (0x00023ce8) popup_query_data_code_window_g1_ParamLimits

0x7ffd,	// (0x00023ce8) popup_query_data_code_window_g1

0x8010,	// (0x00023cfb) popup_query_data_code_window_t1_ParamLimits

0x8010,	// (0x00023cfb) popup_query_data_code_window_t1

0x8022,	// (0x00023d0d) popup_query_data_code_window_t2_ParamLimits

0x8022,	// (0x00023d0d) popup_query_data_code_window_t2

0x8034,	// (0x00023d1f) popup_query_data_code_window_t3_ParamLimits

0x8034,	// (0x00023d1f) popup_query_data_code_window_t3

0x804a,	// (0x00023d35) popup_query_data_code_window_t4_ParamLimits

0x804a,	// (0x00023d35) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002b250) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002b250) popup_query_data_code_window_t

0x6796,	// (0x00022481) list_single_midp_graphic_pane_g3

0x8062,	// (0x00023d4d) query_popup_data_pane_cp2_ParamLimits

0x8075,	// (0x00023d60) query_popup_pane_cp2_ParamLimits

0x8075,	// (0x00023d60) query_popup_pane_cp2

0x7b82,	// (0x0002386d) bg_popup_window_pane_cp11

0x9e48,	// (0x00025b33) heading_pane_cp5

0x9e50,	// (0x00025b3b) listscroll_popup_info_pane

0x7b82,	// (0x0002386d) input_focus_pane_cp3

0x8088,	// (0x00023d73) query_popup_pane_t1

0x8096,	// (0x00023d81) list_popup_info_pane_ParamLimits

0x8096,	// (0x00023d81) list_popup_info_pane

0x80a5,	// (0x00023d90) listscroll_popup_info_pane_g1

0x80ad,	// (0x00023d98) scroll_pane_cp7

0x80b7,	// (0x00023da2) popup_info_list_pane_t1_ParamLimits

0x80b7,	// (0x00023da2) popup_info_list_pane_t1

0x80d1,	// (0x00023dbc) popup_info_list_pane_t2_ParamLimits

0x80d1,	// (0x00023dbc) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002b259) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002b259) popup_info_list_pane_t

0x7b82,	// (0x0002386d) bg_popup_window_pane_cp12

0xb1f9,	// (0x00026ee4) find_popup_pane

0x7c62,	// (0x0002394d) bg_popup_window_pane_cp3

0x80eb,	// (0x00023dd6) heading_pane_cp3

0x80fa,	// (0x00023de5) listscroll_popup_graphic_pane

0x7b82,	// (0x0002386d) bg_popup_window_pane_cp4

0x815a,	// (0x00023e45) heading_pane_cp4

0x8164,	// (0x00023e4f) listscroll_popup_colour_pane

0x816c,	// (0x00023e57) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x816c,	// (0x00023e57) cell_large_graphic_colour_none_popup_pane

0x8180,	// (0x00023e6b) grid_large_graphic_colour_popup_pane_ParamLimits

0x8180,	// (0x00023e6b) grid_large_graphic_colour_popup_pane

0x81a4,	// (0x00023e8f) listscroll_popup_colour_pane_g1_ParamLimits

0x81a4,	// (0x00023e8f) listscroll_popup_colour_pane_g1

0x81bb,	// (0x00023ea6) listscroll_popup_colour_pane_g2_ParamLimits

0x81bb,	// (0x00023ea6) listscroll_popup_colour_pane_g2

0x81d2,	// (0x00023ebd) listscroll_popup_colour_pane_g3_ParamLimits

0x81d2,	// (0x00023ebd) listscroll_popup_colour_pane_g3

0x81e2,	// (0x00023ecd) listscroll_popup_colour_pane_g4_ParamLimits

0x81e2,	// (0x00023ecd) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002b25e) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002b25e) listscroll_popup_colour_pane_g

0x81f2,	// (0x00023edd) scroll_pane_cp6_ParamLimits

0x81f2,	// (0x00023edd) scroll_pane_cp6

0x8204,	// (0x00023eef) cell_large_graphic_colour_popup_pane_ParamLimits

0x8204,	// (0x00023eef) cell_large_graphic_colour_popup_pane

0x8223,	// (0x00023f0e) cell_large_graphic_colour_none_popup_pane_t1

0x7b82,	// (0x0002386d) grid_highlight_pane_cp5

0x8232,	// (0x00023f1d) cell_large_graphic_colour_popup_pane_g1

0x823a,	// (0x00023f25) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002b267) cell_large_graphic_colour_popup_pane_g

0x8242,	// (0x00023f2d) cell_large_graphic_colour_popup_pane_g2_copy1

0x824b,	// (0x00023f36) grid_highlight_pane_cp4

0x8253,	// (0x00023f3e) bg_popup_window_pane_cp8_ParamLimits

0x8253,	// (0x00023f3e) bg_popup_window_pane_cp8

0x826e,	// (0x00023f59) popup_snote_single_text_window_g1_ParamLimits

0x826e,	// (0x00023f59) popup_snote_single_text_window_g1

0x8280,	// (0x00023f6b) popup_snote_single_text_window_t1_ParamLimits

0x8280,	// (0x00023f6b) popup_snote_single_text_window_t1

0x8293,	// (0x00023f7e) popup_snote_single_text_window_t2_ParamLimits

0x8293,	// (0x00023f7e) popup_snote_single_text_window_t2

0x82a6,	// (0x00023f91) popup_snote_single_text_window_t3_ParamLimits

0x82a6,	// (0x00023f91) popup_snote_single_text_window_t3

0x82df,	// (0x00023fca) popup_snote_single_text_window_t4_ParamLimits

0x82df,	// (0x00023fca) popup_snote_single_text_window_t4

0x8313,	// (0x00023ffe) popup_snote_single_text_window_t5_ParamLimits

0x8313,	// (0x00023ffe) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002b26c) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002b26c) popup_snote_single_text_window_t

0x8342,	// (0x0002402d) bg_popup_window_pane_cp9_ParamLimits

0x8342,	// (0x0002402d) bg_popup_window_pane_cp9

0x826e,	// (0x00023f59) popup_snote_single_graphic_window_g1_ParamLimits

0x826e,	// (0x00023f59) popup_snote_single_graphic_window_g1

0x8350,	// (0x0002403b) popup_snote_single_graphic_window_g2_ParamLimits

0x8350,	// (0x0002403b) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002b277) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002b277) popup_snote_single_graphic_window_g

0x835c,	// (0x00024047) popup_snote_single_graphic_window_t1_ParamLimits

0x835c,	// (0x00024047) popup_snote_single_graphic_window_t1

0x836f,	// (0x0002405a) popup_snote_single_graphic_window_t2_ParamLimits

0x836f,	// (0x0002405a) popup_snote_single_graphic_window_t2

0x8382,	// (0x0002406d) popup_snote_single_graphic_window_t3_ParamLimits

0x8382,	// (0x0002406d) popup_snote_single_graphic_window_t3

0x83bb,	// (0x000240a6) popup_snote_single_graphic_window_t4_ParamLimits

0x83bb,	// (0x000240a6) popup_snote_single_graphic_window_t4

0x83ef,	// (0x000240da) popup_snote_single_graphic_window_t5_ParamLimits

0x83ef,	// (0x000240da) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002b27c) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002b27c) popup_snote_single_graphic_window_t

0xb13b,	// (0x00026e26) grid_graphic_popup_pane_ParamLimits

0xb13b,	// (0x00026e26) grid_graphic_popup_pane

0xb165,	// (0x00026e50) listscroll_popup_graphic_pane_g1_ParamLimits

0xb165,	// (0x00026e50) listscroll_popup_graphic_pane_g1

0xb179,	// (0x00026e64) listscroll_popup_graphic_pane_g2_ParamLimits

0xb179,	// (0x00026e64) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0002b676) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0002b676) listscroll_popup_graphic_pane_g

0xb18d,	// (0x00026e78) scroll_pane_cp5

0xb0cc,	// (0x00026db7) cell_graphic_popup_pane_ParamLimits

0xb0cc,	// (0x00026db7) cell_graphic_popup_pane

0xb0ad,	// (0x00026d98) cell_graphic_popup_pane_g1

0xb0b5,	// (0x00026da0) cell_graphic_popup_pane_g2

0x8242,	// (0x00023f2d) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0002b66f) cell_graphic_popup_pane_g

0xb0be,	// (0x00026da9) cell_graphic_popup_pane_t2

0x824b,	// (0x00023f36) grid_highlight_pane_cp3

0x8430,	// (0x0002411b) list_gen_pane_ParamLimits

0x8430,	// (0x0002411b) list_gen_pane

0x8462,	// (0x0002414d) scroll_pane

0xb005,	// (0x00026cf0) bg_list_pane_g1_ParamLimits

0xb005,	// (0x00026cf0) bg_list_pane_g1

0xb022,	// (0x00026d0d) bg_list_pane_g2_ParamLimits

0xb022,	// (0x00026d0d) bg_list_pane_g2

0xb037,	// (0x00026d22) bg_list_pane_g3_ParamLimits

0xb037,	// (0x00026d22) bg_list_pane_g3

0xb04b,	// (0x00026d36) bg_list_pane_g4_ParamLimits

0xb04b,	// (0x00026d36) bg_list_pane_g4

0xb05f,	// (0x00026d4a) bg_list_pane_g5_ParamLimits

0xb05f,	// (0x00026d4a) bg_list_pane_g5

0x0004,

0xf979,	// (0x0002b664) bg_list_pane_g_ParamLimits

0xf979,	// (0x0002b664) bg_list_pane_g

0x4f32,	// (0x00020c1d) list_double2_graphic_large_graphic_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_double2_graphic_large_graphic_pane

0x4f32,	// (0x00020c1d) list_double2_graphic_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_double2_graphic_pane

0x4f32,	// (0x00020c1d) list_double2_large_graphic_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_double2_large_graphic_pane

0x4f32,	// (0x00020c1d) list_double2_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_double2_pane

0x4f32,	// (0x00020c1d) list_double_graphic_heading_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_double_graphic_heading_pane

0x4f32,	// (0x00020c1d) list_double_graphic_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_double_graphic_pane

0x4f32,	// (0x00020c1d) list_double_heading_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_double_heading_pane

0x4f32,	// (0x00020c1d) list_double_large_graphic_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_double_large_graphic_pane

0x4f32,	// (0x00020c1d) list_double_number_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_double_number_pane

0x4f32,	// (0x00020c1d) list_double_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_double_pane

0x4f32,	// (0x00020c1d) list_double_time_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_double_time_pane

0x4f32,	// (0x00020c1d) list_setting_number_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_setting_number_pane

0x4f32,	// (0x00020c1d) list_setting_pane_ParamLimits

0x4f32,	// (0x00020c1d) list_setting_pane

0x4f80,	// (0x00020c6b) list_single_2graphic_pane_ParamLimits

0x4f80,	// (0x00020c6b) list_single_2graphic_pane

0x4f80,	// (0x00020c6b) list_single_graphic_heading_pane_ParamLimits

0x4f80,	// (0x00020c6b) list_single_graphic_heading_pane

0x4f80,	// (0x00020c6b) list_single_graphic_pane_ParamLimits

0x4f80,	// (0x00020c6b) list_single_graphic_pane

0x4f80,	// (0x00020c6b) list_single_heading_pane_ParamLimits

0x4f80,	// (0x00020c6b) list_single_heading_pane

0xafe3,	// (0x00026cce) list_single_large_graphic_pane_ParamLimits

0xafe3,	// (0x00026cce) list_single_large_graphic_pane

0x4f80,	// (0x00020c6b) list_single_number_heading_pane_ParamLimits

0x4f80,	// (0x00020c6b) list_single_number_heading_pane

0x4f80,	// (0x00020c6b) list_single_number_pane_ParamLimits

0x4f80,	// (0x00020c6b) list_single_number_pane

0x4f80,	// (0x00020c6b) list_single_pane_ParamLimits

0x4f80,	// (0x00020c6b) list_single_pane

0x7b82,	// (0x0002386d) list_highlight_pane_cp1

0x4599,	// (0x00020284) list_single_pane_g1_ParamLimits

0x4599,	// (0x00020284) list_single_pane_g1

0x45a5,	// (0x00020290) list_single_pane_g2_ParamLimits

0x45a5,	// (0x00020290) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002b28e) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002b28e) list_single_pane_g

0x4f1c,	// (0x00020c07) list_single_pane_t1_ParamLimits

0x4f1c,	// (0x00020c07) list_single_pane_t1

0x4599,	// (0x00020284) list_single_number_pane_g1_ParamLimits

0x4599,	// (0x00020284) list_single_number_pane_g1

0x45a5,	// (0x00020290) list_single_number_pane_g2_ParamLimits

0x45a5,	// (0x00020290) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002b28e) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002b28e) list_single_number_pane_g

0x4ec6,	// (0x00020bb1) list_single_number_pane_t1_ParamLimits

0x4ec6,	// (0x00020bb1) list_single_number_pane_t1

0x4edc,	// (0x00020bc7) list_single_number_pane_t2_ParamLimits

0x4edc,	// (0x00020bc7) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0002b625) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0002b625) list_single_number_pane_t

0x458d,	// (0x00020278) list_single_graphic_pane_g1_ParamLimits

0x458d,	// (0x00020278) list_single_graphic_pane_g1

0x4599,	// (0x00020284) list_single_graphic_pane_g2_ParamLimits

0x4599,	// (0x00020284) list_single_graphic_pane_g2

0x45a5,	// (0x00020290) list_single_graphic_pane_g3_ParamLimits

0x45a5,	// (0x00020290) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002b287) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002b287) list_single_graphic_pane_g

0x45b1,	// (0x0002029c) list_single_graphic_pane_t1_ParamLimits

0x45b1,	// (0x0002029c) list_single_graphic_pane_t1

0x4599,	// (0x00020284) list_single_heading_pane_g1_ParamLimits

0x4599,	// (0x00020284) list_single_heading_pane_g1

0x45a5,	// (0x00020290) list_single_heading_pane_g2_ParamLimits

0x45a5,	// (0x00020290) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002b28e) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002b28e) list_single_heading_pane_g

0x45c7,	// (0x000202b2) list_single_heading_pane_t1_ParamLimits

0x45c7,	// (0x000202b2) list_single_heading_pane_t1

0x45dd,	// (0x000202c8) list_single_heading_pane_t2_ParamLimits

0x45dd,	// (0x000202c8) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002b293) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002b293) list_single_heading_pane_t

0x4599,	// (0x00020284) list_single_number_heading_pane_g1_ParamLimits

0x4599,	// (0x00020284) list_single_number_heading_pane_g1

0x45a5,	// (0x00020290) list_single_number_heading_pane_g2_ParamLimits

0x45a5,	// (0x00020290) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002b28e) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002b28e) list_single_number_heading_pane_g

0x45c7,	// (0x000202b2) list_single_number_heading_pane_t1_ParamLimits

0x45c7,	// (0x000202b2) list_single_number_heading_pane_t1

0x45ef,	// (0x000202da) list_single_number_heading_pane_t2_ParamLimits

0x45ef,	// (0x000202da) list_single_number_heading_pane_t2

0x4601,	// (0x000202ec) list_single_number_heading_pane_t3_ParamLimits

0x4601,	// (0x000202ec) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002b298) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002b298) list_single_number_heading_pane_t

0x4613,	// (0x000202fe) list_single_graphic_heading_pane_g1_ParamLimits

0x4613,	// (0x000202fe) list_single_graphic_heading_pane_g1

0x461f,	// (0x0002030a) list_single_graphic_heading_pane_g4_ParamLimits

0x461f,	// (0x0002030a) list_single_graphic_heading_pane_g4

0x45a5,	// (0x00020290) list_single_graphic_heading_pane_g5_ParamLimits

0x45a5,	// (0x00020290) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002b29f) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002b29f) list_single_graphic_heading_pane_g

0x45c7,	// (0x000202b2) list_single_graphic_heading_pane_t1_ParamLimits

0x45c7,	// (0x000202b2) list_single_graphic_heading_pane_t1

0x4630,	// (0x0002031b) list_single_graphic_heading_pane_t2_ParamLimits

0x4630,	// (0x0002031b) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002b2a6) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002b2a6) list_single_graphic_heading_pane_t

0x4642,	// (0x0002032d) list_single_large_graphic_pane_g1_ParamLimits

0x4642,	// (0x0002032d) list_single_large_graphic_pane_g1

0x464e,	// (0x00020339) list_single_large_graphic_pane_g2_ParamLimits

0x464e,	// (0x00020339) list_single_large_graphic_pane_g2

0x465a,	// (0x00020345) list_single_large_graphic_pane_g3_ParamLimits

0x465a,	// (0x00020345) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002b2ab) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002b2ab) list_single_large_graphic_pane_g

0xa004,	// (0x00025cef) wait_border_pane_g2_copy1

0x4666,	// (0x00020351) list_single_large_graphic_pane_g4_cp2

0x466e,	// (0x00020359) list_single_large_graphic_pane_t1_ParamLimits

0x466e,	// (0x00020359) list_single_large_graphic_pane_t1

0x4684,	// (0x0002036f) list_double_pane_g1_ParamLimits

0x4684,	// (0x0002036f) list_double_pane_g1

0x4690,	// (0x0002037b) list_double_pane_g2_ParamLimits

0x4690,	// (0x0002037b) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002b2b2) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002b2b2) list_double_pane_g

0x469c,	// (0x00020387) list_double_pane_t1_ParamLimits

0x469c,	// (0x00020387) list_double_pane_t1

0x46b2,	// (0x0002039d) list_double_pane_t2_ParamLimits

0x46b2,	// (0x0002039d) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002b2b7) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002b2b7) list_double_pane_t

0x46c4,	// (0x000203af) list_double2_pane_g1_ParamLimits

0x46c4,	// (0x000203af) list_double2_pane_g1

0x46d5,	// (0x000203c0) list_double2_pane_g2_ParamLimits

0x46d5,	// (0x000203c0) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002b2bc) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002b2bc) list_double2_pane_g

0x46e1,	// (0x000203cc) list_double2_pane_t1_ParamLimits

0x46e1,	// (0x000203cc) list_double2_pane_t1

0x46f7,	// (0x000203e2) list_double2_pane_t2_ParamLimits

0x46f7,	// (0x000203e2) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002b2c1) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002b2c1) list_double2_pane_t

0x4684,	// (0x0002036f) list_double_number_pane_g1_ParamLimits

0x4684,	// (0x0002036f) list_double_number_pane_g1

0x4690,	// (0x0002037b) list_double_number_pane_g2_ParamLimits

0x4690,	// (0x0002037b) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002b2b2) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002b2b2) list_double_number_pane_g

0x4709,	// (0x000203f4) list_double_number_pane_t1_ParamLimits

0x4709,	// (0x000203f4) list_double_number_pane_t1

0x471b,	// (0x00020406) list_double_number_pane_t2_ParamLimits

0x471b,	// (0x00020406) list_double_number_pane_t2

0x4731,	// (0x0002041c) list_double_number_pane_t3_ParamLimits

0x4731,	// (0x0002041c) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002b2c6) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002b2c6) list_double_number_pane_t

0x4743,	// (0x0002042e) list_double_graphic_pane_g1_ParamLimits

0x4743,	// (0x0002042e) list_double_graphic_pane_g1

0x474f,	// (0x0002043a) list_double_graphic_pane_g2_ParamLimits

0x474f,	// (0x0002043a) list_double_graphic_pane_g2

0x475e,	// (0x00020449) list_double_graphic_pane_g3_ParamLimits

0x475e,	// (0x00020449) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002b2cd) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002b2cd) list_double_graphic_pane_g

0x4776,	// (0x00020461) list_double_graphic_pane_t1_ParamLimits

0x4776,	// (0x00020461) list_double_graphic_pane_t1

0x478c,	// (0x00020477) list_double_graphic_pane_t2_ParamLimits

0x478c,	// (0x00020477) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002b2d6) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002b2d6) list_double_graphic_pane_t

0x479e,	// (0x00020489) list_double2_graphic_pane_g1_ParamLimits

0x479e,	// (0x00020489) list_double2_graphic_pane_g1

0x47aa,	// (0x00020495) list_double2_graphic_pane_g2_ParamLimits

0x47aa,	// (0x00020495) list_double2_graphic_pane_g2

0x46d5,	// (0x000203c0) list_double2_graphic_pane_g3_ParamLimits

0x46d5,	// (0x000203c0) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002b2db) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002b2db) list_double2_graphic_pane_g

0x47b6,	// (0x000204a1) list_double2_graphic_pane_t1_ParamLimits

0x47b6,	// (0x000204a1) list_double2_graphic_pane_t1

0x47cc,	// (0x000204b7) list_double2_graphic_pane_t2_ParamLimits

0x47cc,	// (0x000204b7) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002b2e2) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002b2e2) list_double2_graphic_pane_t

0x47de,	// (0x000204c9) list_double_large_graphic_pane_g1_ParamLimits

0x47de,	// (0x000204c9) list_double_large_graphic_pane_g1

0x47fd,	// (0x000204e8) list_double_large_graphic_pane_g2_ParamLimits

0x47fd,	// (0x000204e8) list_double_large_graphic_pane_g2

0x4690,	// (0x0002037b) list_double_large_graphic_pane_g3_ParamLimits

0x4690,	// (0x0002037b) list_double_large_graphic_pane_g3

0x480e,	// (0x000204f9) list_double_large_graphic_pane_g4_ParamLimits

0x480e,	// (0x000204f9) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002b2e7) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002b2e7) list_double_large_graphic_pane_g

0x4835,	// (0x00020520) list_double_large_graphic_pane_t1_ParamLimits

0x4835,	// (0x00020520) list_double_large_graphic_pane_t1

0x484e,	// (0x00020539) list_double_large_graphic_pane_t2_ParamLimits

0x484e,	// (0x00020539) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002b2f2) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002b2f2) list_double_large_graphic_pane_t

0x4860,	// (0x0002054b) list_double2_large_graphic_pane_g1_ParamLimits

0x4860,	// (0x0002054b) list_double2_large_graphic_pane_g1

0x46c4,	// (0x000203af) list_double2_large_graphic_pane_g2_ParamLimits

0x46c4,	// (0x000203af) list_double2_large_graphic_pane_g2

0x46d5,	// (0x000203c0) list_double2_large_graphic_pane_g3_ParamLimits

0x46d5,	// (0x000203c0) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002b2f7) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002b2f7) list_double2_large_graphic_pane_g

0x486c,	// (0x00020557) list_double2_large_graphic_pane_t1_ParamLimits

0x486c,	// (0x00020557) list_double2_large_graphic_pane_t1

0x4882,	// (0x0002056d) list_double2_large_graphic_pane_t2_ParamLimits

0x4882,	// (0x0002056d) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002b2fe) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002b2fe) list_double2_large_graphic_pane_t

0x4894,	// (0x0002057f) list_double_heading_pane_g1_ParamLimits

0x4894,	// (0x0002057f) list_double_heading_pane_g1

0x48a5,	// (0x00020590) list_double_heading_pane_g2_ParamLimits

0x48a5,	// (0x00020590) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002b303) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002b303) list_double_heading_pane_g

0x48b1,	// (0x0002059c) list_double_heading_pane_t1_ParamLimits

0x48b1,	// (0x0002059c) list_double_heading_pane_t1

0x46f7,	// (0x000203e2) list_double_heading_pane_t2_ParamLimits

0x46f7,	// (0x000203e2) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002b308) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002b308) list_double_heading_pane_t

0x48c7,	// (0x000205b2) list_double_graphic_heading_pane_g1_ParamLimits

0x48c7,	// (0x000205b2) list_double_graphic_heading_pane_g1

0x4894,	// (0x0002057f) list_double_graphic_heading_pane_g2_ParamLimits

0x4894,	// (0x0002057f) list_double_graphic_heading_pane_g2

0x48a5,	// (0x00020590) list_double_graphic_heading_pane_g3_ParamLimits

0x48a5,	// (0x00020590) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002b30d) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002b30d) list_double_graphic_heading_pane_g

0x48d3,	// (0x000205be) list_double_graphic_heading_pane_t1_ParamLimits

0x48d3,	// (0x000205be) list_double_graphic_heading_pane_t1

0x47cc,	// (0x000204b7) list_double_graphic_heading_pane_t2_ParamLimits

0x47cc,	// (0x000204b7) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002b314) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002b314) list_double_graphic_heading_pane_t

0x47fd,	// (0x000204e8) list_double_time_pane_g1_ParamLimits

0x47fd,	// (0x000204e8) list_double_time_pane_g1

0x4690,	// (0x0002037b) list_double_time_pane_g2_ParamLimits

0x4690,	// (0x0002037b) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002b319) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002b319) list_double_time_pane_g

0x48e9,	// (0x000205d4) list_double_time_pane_t1_ParamLimits

0x48e9,	// (0x000205d4) list_double_time_pane_t1

0x48ff,	// (0x000205ea) list_double_time_pane_t2_ParamLimits

0x48ff,	// (0x000205ea) list_double_time_pane_t2

0x4911,	// (0x000205fc) list_double_time_pane_t3_ParamLimits

0x4911,	// (0x000205fc) list_double_time_pane_t3

0x4923,	// (0x0002060e) list_double_time_pane_t4_ParamLimits

0x4923,	// (0x0002060e) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002b31e) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002b31e) list_double_time_pane_t

0x47aa,	// (0x00020495) list_setting_pane_g1_ParamLimits

0x47aa,	// (0x00020495) list_setting_pane_g1

0x46d5,	// (0x000203c0) list_setting_pane_g2_ParamLimits

0x46d5,	// (0x000203c0) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002b327) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002b327) list_setting_pane_g

0x4935,	// (0x00020620) list_setting_pane_t1_ParamLimits

0x4935,	// (0x00020620) list_setting_pane_t1

0x494f,	// (0x0002063a) list_setting_pane_t2_ParamLimits

0x494f,	// (0x0002063a) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002b32c) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002b32c) list_setting_pane_t

0x498e,	// (0x00020679) set_value_pane_cp_ParamLimits

0x498e,	// (0x00020679) set_value_pane_cp

0x499a,	// (0x00020685) list_setting_number_pane_g1_ParamLimits

0x499a,	// (0x00020685) list_setting_number_pane_g1

0x49a6,	// (0x00020691) list_setting_number_pane_g2_ParamLimits

0x49a6,	// (0x00020691) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002b333) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002b333) list_setting_number_pane_g

0x49b2,	// (0x0002069d) list_setting_number_pane_t1_ParamLimits

0x49b2,	// (0x0002069d) list_setting_number_pane_t1

0x49cb,	// (0x000206b6) list_setting_number_pane_t2_ParamLimits

0x49cb,	// (0x000206b6) list_setting_number_pane_t2

0x49e5,	// (0x000206d0) list_setting_number_pane_t3_ParamLimits

0x49e5,	// (0x000206d0) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002b338) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002b338) list_setting_number_pane_t

0x498e,	// (0x00020679) set_value_pane_ParamLimits

0x498e,	// (0x00020679) set_value_pane

0x8496,	// (0x00024181) bg_set_opt_pane_ParamLimits

0x8496,	// (0x00024181) bg_set_opt_pane

0x4a28,	// (0x00020713) set_value_pane_t1

0x84b7,	// (0x000241a2) slider_set_pane_cp3

0x84c0,	// (0x000241ab) volume_small_pane_cp

0x84c9,	// (0x000241b4) list_form_gen_pane

0x84d2,	// (0x000241bd) scroll_pane_cp8

0x4a3e,	// (0x00020729) form_field_data_pane_ParamLimits

0x4a3e,	// (0x00020729) form_field_data_pane

0x4a5e,	// (0x00020749) form_field_data_wide_pane_ParamLimits

0x4a5e,	// (0x00020749) form_field_data_wide_pane

0x4a7f,	// (0x0002076a) form_field_popup_pane_ParamLimits

0x4a7f,	// (0x0002076a) form_field_popup_pane

0x4a9f,	// (0x0002078a) form_field_popup_wide_pane_ParamLimits

0x4a9f,	// (0x0002078a) form_field_popup_wide_pane

0x4abc,	// (0x000207a7) form_field_slider_pane_ParamLimits

0x4abc,	// (0x000207a7) form_field_slider_pane

0x4acf,	// (0x000207ba) form_field_slider_wide_pane_ParamLimits

0x4acf,	// (0x000207ba) form_field_slider_wide_pane

0x84e3,	// (0x000241ce) data_form_pane

0x4aec,	// (0x000207d7) form_field_data_pane_t1

0x84ef,	// (0x000241da) input_focus_pane

0x4b04,	// (0x000207ef) data_form_wide_pane

0x4b21,	// (0x0002080c) form_field_data_wide_pane_t1

0x8260,	// (0x00023f4b) input_focus_pane_cp6

0x4b43,	// (0x0002082e) form_field_popup_pane_t1

0x84ef,	// (0x000241da) input_focus_pane_cp7

0x851d,	// (0x00024208) list_form_pane

0x4b63,	// (0x0002084e) form_field_popup_wide_pane_t1

0x84ef,	// (0x000241da) input_focus_pane_cp8

0x8529,	// (0x00024214) list_form_wide_pane

0x4b80,	// (0x0002086b) form_field_slider_pane_t1_ParamLimits

0x4b80,	// (0x0002086b) form_field_slider_pane_t1

0x4b96,	// (0x00020881) form_field_slider_pane_t2_ParamLimits

0x4b96,	// (0x00020881) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002b348) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002b348) form_field_slider_pane_t

0x7edd,	// (0x00023bc8) input_focus_pane_cp9_ParamLimits

0x7edd,	// (0x00023bc8) input_focus_pane_cp9

0x4bab,	// (0x00020896) slider_cont_pane_ParamLimits

0x4bab,	// (0x00020896) slider_cont_pane

0x8535,	// (0x00024220) form_field_slider_wide_pane_t1_ParamLimits

0x8535,	// (0x00024220) form_field_slider_wide_pane_t1

0x4bbf,	// (0x000208aa) form_field_slider_wide_pane_t2_ParamLimits

0x4bbf,	// (0x000208aa) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002b34d) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002b34d) form_field_slider_wide_pane_t

0x7edd,	// (0x00023bc8) input_focus_pane_cp10_ParamLimits

0x7edd,	// (0x00023bc8) input_focus_pane_cp10

0x4bd1,	// (0x000208bc) slider_cont_pane_cp1_ParamLimits

0x4bd1,	// (0x000208bc) slider_cont_pane_cp1

0x4be5,	// (0x000208d0) slider_form_pane_cp

0x8547,	// (0x00024232) input_focus_pane_g1

0x854f,	// (0x0002423a) input_focus_pane_g2

0x8557,	// (0x00024242) input_focus_pane_g3

0x855f,	// (0x0002424a) input_focus_pane_g4

0x8567,	// (0x00024252) input_focus_pane_g5

0x856f,	// (0x0002425a) input_focus_pane_g6

0x8577,	// (0x00024262) input_focus_pane_g7

0x857f,	// (0x0002426a) input_focus_pane_g8

0x8587,	// (0x00024272) input_focus_pane_g9

0x31e3,	// (0x0001eece) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002b352) input_focus_pane_g

0xa00d,	// (0x00025cf8) wait_border_pane_g3_copy1

0x4bed,	// (0x000208d8) data_form_pane_t1

0x31e3,	// (0x0001eece) wait_anim_pane_g1_copy1

0x4eee,	// (0x00020bd9) data_form_wide_pane_t1

0x4c08,	// (0x000208f3) list_form_graphic_pane_cp_ParamLimits

0x4c08,	// (0x000208f3) list_form_graphic_pane_cp

0xaf39,	// (0x00026c24) slider_form_pane_g1

0xaf42,	// (0x00026c2d) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0002b655) slider_form_pane_g

0x4c21,	// (0x0002090c) list_form_graphic_pane_ParamLimits

0x4c21,	// (0x0002090c) list_form_graphic_pane

0x4c3d,	// (0x00020928) list_form_graphic_pane_g1

0x4c45,	// (0x00020930) list_form_graphic_pane_t1_ParamLimits

0x4c45,	// (0x00020930) list_form_graphic_pane_t1

0x7c62,	// (0x0002394d) list_highlight_pane_cp5_ParamLimits

0x7c62,	// (0x0002394d) list_highlight_pane_cp5

0x4c5a,	// (0x00020945) find_pane_g1

0x858f,	// (0x0002427a) input_find_pane

0x4c63,	// (0x0002094e) input_find_pane_g1_ParamLimits

0x4c63,	// (0x0002094e) input_find_pane_g1

0x4c6f,	// (0x0002095a) input_find_pane_t1_ParamLimits

0x4c6f,	// (0x0002095a) input_find_pane_t1

0x4c84,	// (0x0002096f) input_find_pane_t2_ParamLimits

0x4c84,	// (0x0002096f) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002b367) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002b367) input_find_pane_t

0x8598,	// (0x00024283) input_focus_pane_cp5_ParamLimits

0x8598,	// (0x00024283) input_focus_pane_cp5

0x85b7,	// (0x000242a2) bg_popup_window_pane_cp2_ParamLimits

0x85b7,	// (0x000242a2) bg_popup_window_pane_cp2

0x85c4,	// (0x000242af) listscroll_menu_pane_ParamLimits

0x85c4,	// (0x000242af) listscroll_menu_pane

0x85d0,	// (0x000242bb) popup_submenu_window_ParamLimits

0x85d0,	// (0x000242bb) popup_submenu_window

0x85fc,	// (0x000242e7) find_popup_pane_g1

0x8604,	// (0x000242ef) input_popup_find_pane_cp

0x860e,	// (0x000242f9) input_focus_pane_cp4_ParamLimits

0x860e,	// (0x000242f9) input_focus_pane_cp4

0x8628,	// (0x00024313) input_popup_find_pane_t1_ParamLimits

0x8628,	// (0x00024313) input_popup_find_pane_t1

0x7b82,	// (0x0002386d) bg_popup_sub_pane_cp

0x8656,	// (0x00024341) listscroll_popup_sub_pane

0x865e,	// (0x00024349) list_submenu_pane_ParamLimits

0x865e,	// (0x00024349) list_submenu_pane

0x866f,	// (0x0002435a) scroll_pane_cp4

0x8677,	// (0x00024362) list_single_popup_submenu_pane_ParamLimits

0x8677,	// (0x00024362) list_single_popup_submenu_pane

0x868b,	// (0x00024376) list_single_popup_submenu_pane_g1

0x8693,	// (0x0002437e) list_single_popup_submenu_pane_t1_ParamLimits

0x8693,	// (0x0002437e) list_single_popup_submenu_pane_t1

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp1_ParamLimits

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp1

0x86a8,	// (0x00024393) tabs_2_active_pane_g1

0x86b0,	// (0x0002439b) tabs_2_active_pane_t1

0x7c62,	// (0x0002394d) bg_passive_tab_pane_cp1_ParamLimits

0x7c62,	// (0x0002394d) bg_passive_tab_pane_cp1

0x86a8,	// (0x00024393) tabs_2_passive_pane_g1

0x86b0,	// (0x0002439b) tabs_2_passive_pane_t1

0x86c2,	// (0x000243ad) bg_active_tab_pane_cp4

0x86d0,	// (0x000243bb) tabs_2_long_active_pane_t1

0x86e3,	// (0x000243ce) bg_passive_tab_pane_cp4

0x679e,	// (0x00022489) list_single_midp_graphic_pane_g4_ParamLimits

0x86c2,	// (0x000243ad) bg_active_tab_pane_cp5

0x86ef,	// (0x000243da) tabs_3_long_active_pane_t1

0x86e3,	// (0x000243ce) bg_passive_tab_pane_cp5

0x679e,	// (0x00022489) list_single_midp_graphic_pane_g4

0x7c62,	// (0x0002394d) bg_popup_window_pane_cp13_ParamLimits

0x7c62,	// (0x0002394d) bg_popup_window_pane_cp13

0x870a,	// (0x000243f5) listscroll_popup_fast_pane_ParamLimits

0x870a,	// (0x000243f5) listscroll_popup_fast_pane

0x8719,	// (0x00024404) grid_popup_fast_pane_ParamLimits

0x8719,	// (0x00024404) grid_popup_fast_pane

0x872b,	// (0x00024416) scroll_pane_cp9_ParamLimits

0x872b,	// (0x00024416) scroll_pane_cp9

0xc878,	// (0x00028563) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc878,	// (0x00028563) list_single_graphic_hl_pane_t1_cp2

0x874f,	// (0x0002443a) input_focus_pane_cp20_ParamLimits

0x874f,	// (0x0002443a) input_focus_pane_cp20

0x875d,	// (0x00024448) query_popup_data_pane_t1_ParamLimits

0x875d,	// (0x00024448) query_popup_data_pane_t1

0x8770,	// (0x0002445b) query_popup_data_pane_t2_ParamLimits

0x8770,	// (0x0002445b) query_popup_data_pane_t2

0x87b6,	// (0x000244a1) query_popup_data_pane_t3_ParamLimits

0x87b6,	// (0x000244a1) query_popup_data_pane_t3

0x87f7,	// (0x000244e2) query_popup_data_pane_t4_ParamLimits

0x87f7,	// (0x000244e2) query_popup_data_pane_t4

0x8833,	// (0x0002451e) query_popup_data_pane_t5_ParamLimits

0x8833,	// (0x0002451e) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002b36c) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002b36c) query_popup_data_pane_t

0x8547,	// (0x00024232) bg_set_opt_pane_g1

0x854f,	// (0x0002423a) bg_set_opt_pane_g2

0x8557,	// (0x00024242) bg_set_opt_pane_g3

0x855f,	// (0x0002424a) bg_set_opt_pane_g4

0x8567,	// (0x00024252) bg_set_opt_pane_g5

0x856f,	// (0x0002425a) bg_set_opt_pane_g6

0x8577,	// (0x00024262) bg_set_opt_pane_g7

0x857f,	// (0x0002426a) bg_set_opt_pane_g8

0x8587,	// (0x00024272) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002b377) bg_set_opt_pane_g

0x5e42,	// (0x00021b2d) control_top_pane_stacon_ParamLimits

0x5e42,	// (0x00021b2d) control_top_pane_stacon

0x5e95,	// (0x00021b80) signal_pane_stacon_ParamLimits

0x5e95,	// (0x00021b80) signal_pane_stacon

0x8e25,	// (0x00024b10) stacon_top_pane_g1_ParamLimits

0x8e25,	// (0x00024b10) stacon_top_pane_g1

0x5eba,	// (0x00021ba5) title_pane_stacon_ParamLimits

0x5eba,	// (0x00021ba5) title_pane_stacon

0x5ee4,	// (0x00021bcf) uni_indicator_pane_stacon_ParamLimits

0x5ee4,	// (0x00021bcf) uni_indicator_pane_stacon

0x5ef9,	// (0x00021be4) battery_pane_stacon_ParamLimits

0x5ef9,	// (0x00021be4) battery_pane_stacon

0x5f3d,	// (0x00021c28) control_bottom_pane_stacon_ParamLimits

0x5f3d,	// (0x00021c28) control_bottom_pane_stacon

0x5f60,	// (0x00021c4b) navi_pane_stacon_ParamLimits

0x5f60,	// (0x00021c4b) navi_pane_stacon

0x8e47,	// (0x00024b32) stacon_bottom_pane_g1_ParamLimits

0x8e47,	// (0x00024b32) stacon_bottom_pane_g1

0x5ba5,	// (0x00021890) aid_levels_signal_lsc_ParamLimits

0x5ba5,	// (0x00021890) aid_levels_signal_lsc

0x5bbb,	// (0x000218a6) signal_pane_stacon_g1_ParamLimits

0x5bbb,	// (0x000218a6) signal_pane_stacon_g1

0x5bcf,	// (0x000218ba) signal_pane_stacon_g2_ParamLimits

0x5bcf,	// (0x000218ba) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002b38a) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002b38a) signal_pane_stacon_g

0x5c04,	// (0x000218ef) title_pane_stacon_t1_ParamLimits

0x5c04,	// (0x000218ef) title_pane_stacon_t1

0x8877,	// (0x00024562) uni_indicator_pane_stacon_g1

0x8881,	// (0x0002456c) uni_indicator_pane_stacon_g2

0x888b,	// (0x00024576) uni_indicator_pane_stacon_g3

0x8895,	// (0x00024580) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002b396) uni_indicator_pane_stacon_g

0x5c29,	// (0x00021914) control_top_pane_stacon_g1

0x5c31,	// (0x0002191c) control_top_pane_stacon_t1_ParamLimits

0x5c31,	// (0x0002191c) control_top_pane_stacon_t1

0x5c68,	// (0x00021953) aid_levels_battery_lsc_ParamLimits

0x5c68,	// (0x00021953) aid_levels_battery_lsc

0x5c7f,	// (0x0002196a) battery_pane_stacon_g1_ParamLimits

0x5c7f,	// (0x0002196a) battery_pane_stacon_g1

0x5c92,	// (0x0002197d) battery_pane_stacon_g2_ParamLimits

0x5c92,	// (0x0002197d) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002b39f) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002b39f) battery_pane_stacon_g

0x5cd0,	// (0x000219bb) navi_icon_pane_stacon

0x5ce4,	// (0x000219cf) navi_navi_pane_stacon

0x5cd0,	// (0x000219bb) navi_text_pane_stacon

0x5c29,	// (0x00021914) control_bottom_pane_stacon_g1

0x5cf8,	// (0x000219e3) control_bottom_pane_stacon_t1_ParamLimits

0x5cf8,	// (0x000219e3) control_bottom_pane_stacon_t1

0x88b9,	// (0x000245a4) grid_app_pane_ParamLimits

0x88b9,	// (0x000245a4) grid_app_pane

0x88db,	// (0x000245c6) scroll_pane_cp15_ParamLimits

0x88db,	// (0x000245c6) scroll_pane_cp15

0x88ee,	// (0x000245d9) cell_app_pane_ParamLimits

0x88ee,	// (0x000245d9) cell_app_pane

0x8916,	// (0x00024601) cell_app_pane_g1_ParamLimits

0x8916,	// (0x00024601) cell_app_pane_g1

0x893a,	// (0x00024625) cell_app_pane_g2_ParamLimits

0x893a,	// (0x00024625) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002b3a4) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002b3a4) cell_app_pane_g

0x8946,	// (0x00024631) cell_app_pane_t1_ParamLimits

0x8946,	// (0x00024631) cell_app_pane_t1

0x895d,	// (0x00024648) grid_highlight_pane_ParamLimits

0x895d,	// (0x00024648) grid_highlight_pane

0x8547,	// (0x00024232) cell_highlight_pane_g1

0x854f,	// (0x0002423a) cell_highlight_pane_g2

0x8557,	// (0x00024242) cell_highlight_pane_g3

0x855f,	// (0x0002424a) cell_highlight_pane_g4

0x8567,	// (0x00024252) cell_highlight_pane_g5

0x856f,	// (0x0002425a) cell_highlight_pane_g6

0x8577,	// (0x00024262) cell_highlight_pane_g7

0x857f,	// (0x0002426a) cell_highlight_pane_g8

0x8587,	// (0x00024272) cell_highlight_pane_g9

0x31e3,	// (0x0001eece) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002b352) cell_highlight_pane_g

0x896e,	// (0x00024659) bg_scroll_pane

0x5d42,	// (0x00021a2d) scroll_handle_pane

0x89b5,	// (0x000246a0) scroll_bg_pane_g1

0x89ca,	// (0x000246b5) scroll_bg_pane_g2

0x89e2,	// (0x000246cd) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002b3a9) scroll_bg_pane_g

0x89f7,	// (0x000246e2) scroll_handle_focus_pane_ParamLimits

0x89f7,	// (0x000246e2) scroll_handle_focus_pane

0x89b5,	// (0x000246a0) scroll_handle_pane_g1

0x8a04,	// (0x000246ef) scroll_handle_pane_g2

0x89e2,	// (0x000246cd) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002b3b0) scroll_handle_pane_g

0x860e,	// (0x000242f9) bg_popup_sub_pane_cp21_ParamLimits

0x860e,	// (0x000242f9) bg_popup_sub_pane_cp21

0x8a18,	// (0x00024703) popup_fep_japan_predictive_window_t1_ParamLimits

0x8a18,	// (0x00024703) popup_fep_japan_predictive_window_t1

0x8a32,	// (0x0002471d) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a32,	// (0x0002471d) popup_fep_japan_predictive_window_t2

0x8a65,	// (0x00024750) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a65,	// (0x00024750) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002b3b7) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002b3b7) popup_fep_japan_predictive_window_t

0x7b82,	// (0x0002386d) bg_popup_sub_pane_cp23

0x8a9c,	// (0x00024787) listscroll_japin_cand_pane

0x8aa4,	// (0x0002478f) popup_fep_japan_candidate_window_t1

0x8ab2,	// (0x0002479d) candidate_pane_ParamLimits

0x8ab2,	// (0x0002479d) candidate_pane

0x8ac4,	// (0x000247af) scroll_pane_cp30

0x8acc,	// (0x000247b7) list_single_popup_jap_candidate_pane_ParamLimits

0x8acc,	// (0x000247b7) list_single_popup_jap_candidate_pane

0x7b82,	// (0x0002386d) list_highlight_pane_cp30

0x8ae1,	// (0x000247cc) list_single_popup_jap_candidate_pane_t1

0x8af0,	// (0x000247db) level_1_signal

0x8b02,	// (0x000247ed) level_2_signal

0x8b15,	// (0x00024800) level_3_signal

0x8b28,	// (0x00024813) level_4_signal

0x8b3b,	// (0x00024826) level_5_signal

0x8b4e,	// (0x00024839) level_6_signal

0x8b61,	// (0x0002484c) level_7_signal

0x8af0,	// (0x000247db) level_1_battery

0x8b02,	// (0x000247ed) level_2_battery

0x8b15,	// (0x00024800) level_3_battery

0x8b28,	// (0x00024813) level_4_battery

0x8b3b,	// (0x00024826) level_5_battery

0x8b4e,	// (0x00024839) level_6_battery

0x8b61,	// (0x0002484c) level_7_battery

0x8b8c,	// (0x00024877) list_menu_pane_ParamLimits

0x8b8c,	// (0x00024877) list_menu_pane

0x8ba2,	// (0x0002488d) scroll_pane_cp25_ParamLimits

0x8ba2,	// (0x0002488d) scroll_pane_cp25

0x8bbb,	// (0x000248a6) list_double2_graphic_pane_cp2_ParamLimits

0x8bbb,	// (0x000248a6) list_double2_graphic_pane_cp2

0x8bbb,	// (0x000248a6) list_double2_large_graphic_pane_cp2_ParamLimits

0x8bbb,	// (0x000248a6) list_double2_large_graphic_pane_cp2

0x8bbb,	// (0x000248a6) list_double2_pane_cp2_ParamLimits

0x8bbb,	// (0x000248a6) list_double2_pane_cp2

0x8bbb,	// (0x000248a6) list_double_graphic_pane_cp2_ParamLimits

0x8bbb,	// (0x000248a6) list_double_graphic_pane_cp2

0x8bbb,	// (0x000248a6) list_double_large_graphic_pane_cp2_ParamLimits

0x8bbb,	// (0x000248a6) list_double_large_graphic_pane_cp2

0x8bbb,	// (0x000248a6) list_double_number_pane_cp2_ParamLimits

0x8bbb,	// (0x000248a6) list_double_number_pane_cp2

0x8bbb,	// (0x000248a6) list_double_pane_cp2_ParamLimits

0x8bbb,	// (0x000248a6) list_double_pane_cp2

0x8bdf,	// (0x000248ca) list_single_2graphic_pane_cp2_ParamLimits

0x8bdf,	// (0x000248ca) list_single_2graphic_pane_cp2

0x8bdf,	// (0x000248ca) list_single_graphic_heading_pane_cp2_ParamLimits

0x8bdf,	// (0x000248ca) list_single_graphic_heading_pane_cp2

0x8bdf,	// (0x000248ca) list_single_graphic_pane_cp2_ParamLimits

0x8bdf,	// (0x000248ca) list_single_graphic_pane_cp2

0x8bdf,	// (0x000248ca) list_single_heading_pane_cp2_ParamLimits

0x8bdf,	// (0x000248ca) list_single_heading_pane_cp2

0x8bf8,	// (0x000248e3) list_single_large_graphic_pane_cp2_ParamLimits

0x8bf8,	// (0x000248e3) list_single_large_graphic_pane_cp2

0x8bdf,	// (0x000248ca) list_single_number_heading_pane_cp2_ParamLimits

0x8bdf,	// (0x000248ca) list_single_number_heading_pane_cp2

0x8bdf,	// (0x000248ca) list_single_number_pane_cp2_ParamLimits

0x8bdf,	// (0x000248ca) list_single_number_pane_cp2

0x8bdf,	// (0x000248ca) list_single_pane_cp2_ParamLimits

0x8bdf,	// (0x000248ca) list_single_pane_cp2

0x8c74,	// (0x0002495f) bg_popup_sub_pane_cp22

0x5df4,	// (0x00021adf) popup_side_volume_key_window_g1

0x5e1e,	// (0x00021b09) popup_side_volume_key_window_t1

0x5e3a,	// (0x00021b25) volume_small_pane_cp1

0x7edd,	// (0x00023bc8) bg_popup_sub_pane_cp24_ParamLimits

0x7edd,	// (0x00023bc8) bg_popup_sub_pane_cp24

0x8c8a,	// (0x00024975) fep_china_uni_candidate_pane_ParamLimits

0x8c8a,	// (0x00024975) fep_china_uni_candidate_pane

0x8c9e,	// (0x00024989) fep_china_uni_entry_pane

0x8cae,	// (0x00024999) popup_fep_china_uni_window_g1

0x8cca,	// (0x000249b5) fep_china_uni_entry_pane_g1

0x8cd2,	// (0x000249bd) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0002b3e8) fep_china_uni_entry_pane_g

0x8cda,	// (0x000249c5) fep_entry_item_pane

0x8ce4,	// (0x000249cf) fep_candidate_item_pane

0x8cec,	// (0x000249d7) fep_china_uni_candidate_pane_g1

0x8cf4,	// (0x000249df) fep_china_uni_candidate_pane_g2

0x8cfc,	// (0x000249e7) fep_china_uni_candidate_pane_g3

0x8d04,	// (0x000249ef) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0002b3ed) fep_china_uni_candidate_pane_g

0x31e3,	// (0x0001eece) fep_entry_item_pane_g1

0x8d0c,	// (0x000249f7) fep_entry_item_pane_t1_ParamLimits

0x8d0c,	// (0x000249f7) fep_entry_item_pane_t1

0x8d22,	// (0x00024a0d) fep_candidate_item_pane_t1_ParamLimits

0x8d22,	// (0x00024a0d) fep_candidate_item_pane_t1

0x8d37,	// (0x00024a22) fep_candidate_item_pane_t2_ParamLimits

0x8d37,	// (0x00024a22) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0002b3f6) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0002b3f6) fep_candidate_item_pane_t

0x7c62,	// (0x0002394d) list_highlight_pane_cp31_ParamLimits

0x7c62,	// (0x0002394d) list_highlight_pane_cp31

0x8d49,	// (0x00024a34) level_1_signal_lsc

0x8d52,	// (0x00024a3d) level_2_signal_lsc

0x8d5b,	// (0x00024a46) level_3_signal_lsc

0x8d64,	// (0x00024a4f) level_4_signal_lsc

0x8d6d,	// (0x00024a58) level_5_signal_lsc

0x8d76,	// (0x00024a61) level_6_signal_lsc

0x8d7f,	// (0x00024a6a) level_7_signal_lsc

0x8d7f,	// (0x00024a6a) level_1_battery_lsc

0x8d88,	// (0x00024a73) level_2_battery_lsc

0x8d91,	// (0x00024a7c) level_3_battery_lsc

0x8d9a,	// (0x00024a85) level_4_battery_lsc

0x8da3,	// (0x00024a8e) level_5_battery_lsc

0x8dac,	// (0x00024a97) level_6_battery_lsc

0x8d49,	// (0x00024a34) level_7_battery_lsc

0x8db5,	// (0x00024aa0) scroll_handle_focus_pane_g1

0x8dbe,	// (0x00024aa9) scroll_handle_focus_pane_g2

0x8dc7,	// (0x00024ab2) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0002b3fb) scroll_handle_focus_pane_g

0x4c99,	// (0x00020984) list_single_2graphic_pane_g1_ParamLimits

0x4c99,	// (0x00020984) list_single_2graphic_pane_g1

0x461f,	// (0x0002030a) list_single_2graphic_pane_g2_ParamLimits

0x461f,	// (0x0002030a) list_single_2graphic_pane_g2

0x45a5,	// (0x00020290) list_single_2graphic_pane_g3_ParamLimits

0x45a5,	// (0x00020290) list_single_2graphic_pane_g3

0x4ca5,	// (0x00020990) list_single_2graphic_pane_g4_ParamLimits

0x4ca5,	// (0x00020990) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002b402) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002b402) list_single_2graphic_pane_g

0x4cb1,	// (0x0002099c) list_single_2graphic_pane_t1_ParamLimits

0x4cb1,	// (0x0002099c) list_single_2graphic_pane_t1

0x4cdf,	// (0x000209ca) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x4cdf,	// (0x000209ca) list_double2_graphic_large_graphic_pane_g1

0x46c4,	// (0x000203af) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x46c4,	// (0x000203af) list_double2_graphic_large_graphic_pane_g2

0x46d5,	// (0x000203c0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x46d5,	// (0x000203c0) list_double2_graphic_large_graphic_pane_g3

0x4cef,	// (0x000209da) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x4cef,	// (0x000209da) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0002b40b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0002b40b) list_double2_graphic_large_graphic_pane_g

0x4cfb,	// (0x000209e6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4cfb,	// (0x000209e6) list_double2_graphic_large_graphic_pane_t1

0x4d11,	// (0x000209fc) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4d11,	// (0x000209fc) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002b414) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002b414) list_double2_graphic_large_graphic_pane_t

0x8f12,	// (0x00024bfd) popup_fast_swap_window_ParamLimits

0x8f12,	// (0x00024bfd) popup_fast_swap_window

0x8f2e,	// (0x00024c19) popup_side_volume_key_window

0x8f4a,	// (0x00024c35) stacon_top_pane

0x8f54,	// (0x00024c3f) status_pane_ParamLimits

0x8f54,	// (0x00024c3f) status_pane

0x8f62,	// (0x00024c4d) status_small_pane

0x7b82,	// (0x0002386d) control_pane

0x7b82,	// (0x0002386d) stacon_bottom_pane

0x84d2,	// (0x000241bd) scroll_pane_cp121

0x84c9,	// (0x000241b4) set_content_pane

0x8dd0,	// (0x00024abb) bg_active_tab_pane_g1_cp1

0x8dd9,	// (0x00024ac4) bg_active_tab_pane_g2_cp1

0x8de2,	// (0x00024acd) bg_active_tab_pane_g3_cp1

0x8dd0,	// (0x00024abb) bg_passive_tab_pane_g1_cp1

0x8dd9,	// (0x00024ac4) bg_passive_tab_pane_g2_cp1

0x8de2,	// (0x00024acd) bg_passive_tab_pane_g3_cp1

0x8deb,	// (0x00024ad6) bg_active_tab_pane_g1_cp2

0x8dd9,	// (0x00024ac4) bg_active_tab_pane_g2_cp2

0x8df4,	// (0x00024adf) bg_active_tab_pane_g3_cp2

0x8deb,	// (0x00024ad6) bg_passive_tab_pane_g1_cp2

0x8dd9,	// (0x00024ac4) bg_passive_tab_pane_g2_cp2

0x8df4,	// (0x00024adf) bg_passive_tab_pane_g3_cp2

0x8dfd,	// (0x00024ae8) bg_active_tab_pane_g1_cp3

0x8dd9,	// (0x00024ac4) bg_active_tab_pane_g2_cp3

0x8e06,	// (0x00024af1) bg_active_tab_pane_g3_cp3

0x8dfd,	// (0x00024ae8) bg_passive_tab_pane_g1_cp3

0x8dd9,	// (0x00024ac4) bg_passive_tab_pane_g2_cp3

0x8e06,	// (0x00024af1) bg_passive_tab_pane_g3_cp3

0x8e0f,	// (0x00024afa) bg_active_tab_pane_g1_cp4

0x8dd9,	// (0x00024ac4) bg_active_tab_pane_g2_cp4

0x8e1a,	// (0x00024b05) bg_active_tab_pane_g3_cp4

0x8e0f,	// (0x00024afa) bg_passive_tab_pane_g1_cp4

0x8dd9,	// (0x00024ac4) bg_passive_tab_pane_g2_cp4

0x8e1a,	// (0x00024b05) bg_passive_tab_pane_g3_cp4

0x8e63,	// (0x00024b4e) bg_active_tab_pane_g1_cp5

0x8dd9,	// (0x00024ac4) bg_active_tab_pane_g2_cp5

0x8e6c,	// (0x00024b57) bg_active_tab_pane_g3_cp5

0x8e63,	// (0x00024b4e) bg_passive_tab_pane_g1_cp5

0x8dd9,	// (0x00024ac4) bg_passive_tab_pane_g2_cp5

0x8e6c,	// (0x00024b57) bg_passive_tab_pane_g3_cp5

0x8e75,	// (0x00024b60) list_set_graphic_pane_ParamLimits

0x8e75,	// (0x00024b60) list_set_graphic_pane

0x7b82,	// (0x0002386d) bg_set_opt_pane_cp4

0x8e95,	// (0x00024b80) list_set_graphic_pane_g1_ParamLimits

0x8e95,	// (0x00024b80) list_set_graphic_pane_g1

0x8ea1,	// (0x00024b8c) list_set_graphic_pane_g2_ParamLimits

0x8ea1,	// (0x00024b8c) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0002b419) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0002b419) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0002b795) volume_small_pane_cp_g

0x8ec5,	// (0x00024bb0) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8ec5,	// (0x00024bb0) list_double2_large_graphic_pane_g1_cp2

0x8ed1,	// (0x00024bbc) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8ed1,	// (0x00024bbc) list_double2_large_graphic_pane_g2_cp2

0x8ee2,	// (0x00024bcd) list_double2_large_graphic_pane_g3_cp2

0x8eea,	// (0x00024bd5) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8eea,	// (0x00024bd5) list_double2_large_graphic_pane_t1_cp2

0x8f00,	// (0x00024beb) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8f00,	// (0x00024beb) list_double2_large_graphic_pane_t2_cp2

0xaaec,	// (0x000267d7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaaec,	// (0x000267d7) list_double_large_graphic_pane_g1_cp2

0xaafd,	// (0x000267e8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaafd,	// (0x000267e8) list_double_large_graphic_pane_g2_cp2

0x907b,	// (0x00024d66) list_double_large_graphic_pane_g3_cp2

0xab0e,	// (0x000267f9) list_double_large_graphic_pane_g4_cp

0xab16,	// (0x00026801) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab16,	// (0x00026801) list_double_large_graphic_pane_t1_cp2

0xab2d,	// (0x00026818) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab2d,	// (0x00026818) list_double_large_graphic_pane_t2_cp2

0x8f6d,	// (0x00024c58) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f6d,	// (0x00024c58) list_double2_graphic_pane_g1_cp2

0x8f7b,	// (0x00024c66) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f7b,	// (0x00024c66) list_double2_graphic_pane_g2_cp2

0x8f8c,	// (0x00024c77) list_double2_graphic_pane_g3_cp2

0x8f96,	// (0x00024c81) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f96,	// (0x00024c81) list_double2_graphic_pane_t1_cp2

0x8fac,	// (0x00024c97) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8fac,	// (0x00024c97) list_double2_graphic_pane_t2_cp2

0x8fbe,	// (0x00024ca9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fbe,	// (0x00024ca9) list_single_number_heading_pane_g1_cp2

0x8fca,	// (0x00024cb5) list_single_number_heading_pane_g2_cp2

0x8fd2,	// (0x00024cbd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fd2,	// (0x00024cbd) list_single_number_heading_pane_t1_cp2

0x8fe8,	// (0x00024cd3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8fe8,	// (0x00024cd3) list_single_number_heading_pane_t2_cp2

0x8ffa,	// (0x00024ce5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8ffa,	// (0x00024ce5) list_single_number_heading_pane_t3_cp2

0x8fbe,	// (0x00024ca9) list_single_heading_pane_g1_cp2_ParamLimits

0x8fbe,	// (0x00024ca9) list_single_heading_pane_g1_cp2

0x8fca,	// (0x00024cb5) list_single_heading_pane_g2_cp2

0x8fd2,	// (0x00024cbd) list_single_heading_pane_t1_cp2_ParamLimits

0x8fd2,	// (0x00024cbd) list_single_heading_pane_t1_cp2

0xa8f4,	// (0x000265df) list_single_heading_pane_t2_cp2_ParamLimits

0xa8f4,	// (0x000265df) list_single_heading_pane_t2_cp2

0xa83c,	// (0x00026527) list_double_graphic_pane_g1_cp2_ParamLimits

0xa83c,	// (0x00026527) list_double_graphic_pane_g1_cp2

0xa848,	// (0x00026533) list_double_graphic_pane_g2_cp2_ParamLimits

0xa848,	// (0x00026533) list_double_graphic_pane_g2_cp2

0xa857,	// (0x00026542) list_double_graphic_pane_g3_cp2

0xa85f,	// (0x0002654a) list_double_graphic_pane_t1_cp2_ParamLimits

0xa85f,	// (0x0002654a) list_double_graphic_pane_t1_cp2

0xa875,	// (0x00026560) list_double_graphic_pane_t2_cp2_ParamLimits

0xa875,	// (0x00026560) list_double_graphic_pane_t2_cp2

0x906f,	// (0x00024d5a) list_double_number_pane_g1_cp2_ParamLimits

0x906f,	// (0x00024d5a) list_double_number_pane_g1_cp2

0x907b,	// (0x00024d66) list_double_number_pane_g2_cp2

0xa800,	// (0x000264eb) list_double_number_pane_t1_cp2_ParamLimits

0xa800,	// (0x000264eb) list_double_number_pane_t1_cp2

0xa814,	// (0x000264ff) list_double_number_pane_t2_cp2_ParamLimits

0xa814,	// (0x000264ff) list_double_number_pane_t2_cp2

0xa82a,	// (0x00026515) list_double_number_pane_t3_cp2_ParamLimits

0xa82a,	// (0x00026515) list_double_number_pane_t3_cp2

0xa6e9,	// (0x000263d4) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6e9,	// (0x000263d4) list_single_graphic_pane_g1_cp2

0x90d3,	// (0x00024dbe) list_single_graphic_pane_g2_cp2_ParamLimits

0x90d3,	// (0x00024dbe) list_single_graphic_pane_g2_cp2

0x90df,	// (0x00024dca) list_single_graphic_pane_g3_cp2

0xa6bf,	// (0x000263aa) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6bf,	// (0x000263aa) list_single_graphic_pane_t1_cp2

0x90d3,	// (0x00024dbe) list_single_number_pane_g1_cp2_ParamLimits

0x90d3,	// (0x00024dbe) list_single_number_pane_g1_cp2

0x90df,	// (0x00024dca) list_single_number_pane_g2_cp2

0xa6bf,	// (0x000263aa) list_single_number_pane_t1_cp2_ParamLimits

0xa6bf,	// (0x000263aa) list_single_number_pane_t1_cp2

0xa6d5,	// (0x000263c0) list_single_number_pane_t2_cp2_ParamLimits

0xa6d5,	// (0x000263c0) list_single_number_pane_t2_cp2

0x8ed1,	// (0x00024bbc) list_double2_pane_g1_cp2_ParamLimits

0x8ed1,	// (0x00024bbc) list_double2_pane_g1_cp2

0x8ee2,	// (0x00024bcd) list_double2_pane_g2_cp2

0x9047,	// (0x00024d32) list_double2_pane_t1_cp2_ParamLimits

0x9047,	// (0x00024d32) list_double2_pane_t1_cp2

0x905d,	// (0x00024d48) list_double2_pane_t2_cp2_ParamLimits

0x905d,	// (0x00024d48) list_double2_pane_t2_cp2

0x906f,	// (0x00024d5a) list_double_pane_g1_cp2_ParamLimits

0x906f,	// (0x00024d5a) list_double_pane_g1_cp2

0x907b,	// (0x00024d66) list_double_pane_g2_cp2

0x9083,	// (0x00024d6e) list_double_pane_t1_cp2_ParamLimits

0x9083,	// (0x00024d6e) list_double_pane_t1_cp2

0x9099,	// (0x00024d84) list_double_pane_t2_cp2_ParamLimits

0x9099,	// (0x00024d84) list_double_pane_t2_cp2

0x90c3,	// (0x00024dae) list_single_pane_cp2_g3

0x90d3,	// (0x00024dbe) list_single_pane_g1_cp2_ParamLimits

0x90d3,	// (0x00024dbe) list_single_pane_g1_cp2

0x90df,	// (0x00024dca) list_single_pane_g2_cp2

0x90e7,	// (0x00024dd2) list_single_pane_t1_cp2_ParamLimits

0x90e7,	// (0x00024dd2) list_single_pane_t1_cp2

0x90ff,	// (0x00024dea) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90ff,	// (0x00024dea) list_single_large_graphic_pane_g1_cp2

0x910b,	// (0x00024df6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x910b,	// (0x00024df6) list_single_large_graphic_pane_g2_cp2

0x9117,	// (0x00024e02) list_single_large_graphic_pane_g3_cp2

0x911f,	// (0x00024e0a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x911f,	// (0x00024e0a) list_single_large_graphic_pane_g4_cp1

0x9139,	// (0x00024e24) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9139,	// (0x00024e24) list_single_large_graphic_pane_t1_cp2

0xa67f,	// (0x0002636a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa67f,	// (0x0002636a) list_single_graphic_heading_pane_g1_cp2

0xa64c,	// (0x00026337) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa64c,	// (0x00026337) list_single_graphic_heading_pane_g4_cp2

0x90df,	// (0x00024dca) list_single_graphic_heading_pane_g5_cp2

0xa68b,	// (0x00026376) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa68b,	// (0x00026376) list_single_graphic_heading_pane_t1_cp2

0xa6ad,	// (0x00026398) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6ad,	// (0x00026398) list_single_graphic_heading_pane_t2_cp2

0xa640,	// (0x0002632b) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa640,	// (0x0002632b) list_single_2graphic_pane_g1_cp2

0xa64c,	// (0x00026337) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa64c,	// (0x00026337) list_single_2graphic_pane_g2_cp2

0x90df,	// (0x00024dca) list_single_2graphic_pane_g3_cp2

0xa65d,	// (0x00026348) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa65d,	// (0x00026348) list_single_2graphic_pane_g4_cp2

0xa669,	// (0x00026354) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa669,	// (0x00026354) list_single_2graphic_pane_t1_cp2

0x31e3,	// (0x0001eece) list_highlight_pane_g10_cp1

0xa218,	// (0x00025f03) list_highlight_pane_g1_cp1

0xa220,	// (0x00025f0b) list_highlight_pane_g2_cp1

0xa228,	// (0x00025f13) list_highlight_pane_g3_cp1

0xa230,	// (0x00025f1b) list_highlight_pane_g4_cp1

0xa238,	// (0x00025f23) list_highlight_pane_g5_cp1

0xa240,	// (0x00025f2b) list_highlight_pane_g6_cp1

0xa248,	// (0x00025f33) list_highlight_pane_g7_cp1

0xa250,	// (0x00025f3b) list_highlight_pane_g8_cp1

0xa258,	// (0x00025f43) list_highlight_pane_g9_cp1

0xa138,	// (0x00025e23) form_field_slider_pane_t3

0xa146,	// (0x00025e31) form_field_slider_pane_t4

0xa154,	// (0x00025e3f) slider_form_pane_ParamLimits

0xa154,	// (0x00025e3f) slider_form_pane

0x7b82,	// (0x0002386d) control_abbreviations

0x7b82,	// (0x0002386d) control_conventions

0x7b82,	// (0x0002386d) control_definitions

0x7b82,	// (0x0002386d) format_table_attribute

0xa93e,	// (0x00026629) bg_popup_preview_window_pane_g9

0x7b82,	// (0x0002386d) format_table_data2

0x7b82,	// (0x0002386d) format_table_data3

0x7b82,	// (0x0002386d) format_table_data_example

0x0008,

0x7b82,	// (0x0002386d) intro_purpose

0xf8ca,	// (0x0002b5b5) bg_popup_preview_window_pane_g

0x7b82,	// (0x0002386d) texts_category

0x7b82,	// (0x0002386d) texts_graphics

0x914f,	// (0x00024e3a) text_digital

0x915e,	// (0x00024e49) text_primary

0x916d,	// (0x00024e58) text_primary_small

0x917c,	// (0x00024e67) text_secondary

0x918b,	// (0x00024e76) text_title

0xb081,	// (0x00026d6c) bg_passive_tab_pane_g1_cp3_srt

0x8dd9,	// (0x00024ac4) bg_passive_tab_pane_g2_cp3_srt

0xb08a,	// (0x00026d75) bg_passive_tab_pane_g3_cp3_srt

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp3_srt_ParamLimits

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp3_srt

0xb093,	// (0x00026d7e) tabs_4_active_pane_srt_g1

0xb09b,	// (0x00026d86) tabs_4_active_pane_srt_t1_ParamLimits

0xb09b,	// (0x00026d86) tabs_4_active_pane_srt_t1

0xb081,	// (0x00026d6c) bg_active_tab_pane_g1_cp3_copy1

0x8dd9,	// (0x00024ac4) bg_active_tab_pane_g2_cp3_copy1

0xb08a,	// (0x00026d75) bg_active_tab_pane_g3_cp3_copy1

0x7c62,	// (0x0002394d) tabs_2_long_active_pane_srt_ParamLimits

0x7c62,	// (0x0002394d) tabs_2_long_active_pane_srt

0x7c62,	// (0x0002394d) tabs_2_long_passive_pane_srt_ParamLimits

0x7c62,	// (0x0002394d) tabs_2_long_passive_pane_srt

0x86e3,	// (0x000243ce) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86e3,	// (0x000243ce) bg_passive_tab_pane_cp4_srt

0xad6c,	// (0x00026a57) bg_passive_tab_pane_g1_cp4_srt

0x8dd9,	// (0x00024ac4) bg_passive_tab_pane_g2_cp4_srt

0xad75,	// (0x00026a60) bg_passive_tab_pane_g3_cp4_srt

0x86c2,	// (0x000243ad) bg_active_tab_pane_cp4_srt_ParamLimits

0x86c2,	// (0x000243ad) bg_active_tab_pane_cp4_srt

0xad7e,	// (0x00026a69) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad7e,	// (0x00026a69) tabs_2_long_active_pane_srt_t1

0xad6c,	// (0x00026a57) bg_active_tab_pane_g1_cp4_srt

0x8dd9,	// (0x00024ac4) bg_active_tab_pane_g2_cp4_srt

0xad75,	// (0x00026a60) bg_active_tab_pane_g3_cp4_srt

0x7edd,	// (0x00023bc8) tabs_3_long_active_pane_srt_ParamLimits

0x7edd,	// (0x00023bc8) tabs_3_long_active_pane_srt

0x7edd,	// (0x00023bc8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7edd,	// (0x00023bc8) tabs_3_long_passive_pane_cp_srt

0x7edd,	// (0x00023bc8) tabs_3_long_passive_pane_srt_ParamLimits

0x7edd,	// (0x00023bc8) tabs_3_long_passive_pane_srt

0x86e3,	// (0x000243ce) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86e3,	// (0x000243ce) bg_passive_tab_pane_cp5_srt

0x8e63,	// (0x00024b4e) bg_passive_tab_pane_g1_cp5_srt

0x8dd9,	// (0x00024ac4) bg_passive_tab_pane_g2_cp5_srt

0x8e6c,	// (0x00024b57) bg_passive_tab_pane_g3_cp5_srt

0x86c2,	// (0x000243ad) bg_active_tab_pane_cp5_srt_ParamLimits

0x86c2,	// (0x000243ad) bg_active_tab_pane_cp5_srt

0xad5a,	// (0x00026a45) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad5a,	// (0x00026a45) tabs_3_long_active_pane_srt_t1

0x8e63,	// (0x00024b4e) bg_active_tab_pane_g1_cp5_srt

0x8dd9,	// (0x00024ac4) bg_active_tab_pane_g2_cp5_srt

0x8e6c,	// (0x00024b57) bg_active_tab_pane_g3_cp5_srt

0xad4c,	// (0x00026a37) navi_text_pane_srt_t1

0xad44,	// (0x00026a2f) navi_icon_pane_srt_g1

0x9360,	// (0x0002504b) midp_editing_number_pane_srt

0x919a,	// (0x00024e85) midp_ticker_pane_srt

0x9368,	// (0x00025053) midp_ticker_pane_srt_g1

0x9370,	// (0x0002505b) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002b438) midp_ticker_pane_srt_g

0x9378,	// (0x00025063) midp_ticker_pane_srt_t1

0xad35,	// (0x00026a20) midp_editing_number_pane_t1_copy1

0x91a2,	// (0x00024e8d) listscroll_midp_pane

0x91a2,	// (0x00024e8d) midp_form_pane

0x9212,	// (0x00024efd) midp_info_popup_window_ParamLimits

0x9212,	// (0x00024efd) midp_info_popup_window

0x860e,	// (0x000242f9) bg_popup_sub_pane_cp50_ParamLimits

0x860e,	// (0x000242f9) bg_popup_sub_pane_cp50

0x9e3c,	// (0x00025b27) listscroll_midp_info_pane_ParamLimits

0x9e3c,	// (0x00025b27) listscroll_midp_info_pane

0x9e1c,	// (0x00025b07) listscroll_form_midp_pane_ParamLimits

0x9e1c,	// (0x00025b07) listscroll_form_midp_pane

0x9e28,	// (0x00025b13) scroll_bar_cp050

0x9dfc,	// (0x00025ae7) list_midp_pane

0xbafc,	// (0x000277e7) signal_pane_g2_cp

0x9d36,	// (0x00025a21) listscroll_midp_info_pane_t1_ParamLimits

0x9d36,	// (0x00025a21) listscroll_midp_info_pane_t1

0x9d4e,	// (0x00025a39) listscroll_midp_info_pane_t2_ParamLimits

0x9d4e,	// (0x00025a39) listscroll_midp_info_pane_t2

0x9d8c,	// (0x00025a77) listscroll_midp_info_pane_t3_ParamLimits

0x9d8c,	// (0x00025a77) listscroll_midp_info_pane_t3

0x9dc6,	// (0x00025ab1) listscroll_midp_info_pane_t4_ParamLimits

0x9dc6,	// (0x00025ab1) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0002b4f0) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0002b4f0) listscroll_midp_info_pane_t

0x866f,	// (0x0002435a) scroll_pane_cp21

0x9cd4,	// (0x000259bf) form_midp_field_choice_group_pane

0x9cdd,	// (0x000259c8) form_midp_field_text_pane

0x9d1c,	// (0x00025a07) form_midp_field_time_pane

0x9d24,	// (0x00025a0f) form_midp_gauge_slider_pane

0x9d2d,	// (0x00025a18) form_midp_gauge_wait_pane

0x7b82,	// (0x0002386d) form_midp_image_pane

0x4e94,	// (0x00020b7f) list_single_midp_pane_ParamLimits

0x4e94,	// (0x00020b7f) list_single_midp_pane

0x9c8c,	// (0x00025977) form_midp_field_text_pane_t1

0x9a5c,	// (0x00025747) input_focus_pane_cp050

0x9cc3,	// (0x000259ae) list_midp_form_text_pane

0x9c5b,	// (0x00025946) form_midp_field_choice_group_pane_t1

0x9c69,	// (0x00025954) input_focus_pane_cp051

0x9c7d,	// (0x00025968) list_midp_choice_pane

0x7b82,	// (0x0002386d) status_idle_pane

0x9c3f,	// (0x0002592a) form_midp_field_time_pane_t1

0x31e3,	// (0x0001eece) wait_anim_pane_g2_copy1

0x9c4d,	// (0x00025938) form_midp_field_time_pane_t2

0x0001,

0x92c0,	// (0x00024fab) aid_navinavi_width_2_pane

0xf800,	// (0x0002b4eb) form_midp_field_time_pane_t

0x7b82,	// (0x0002386d) input_focus_pane_cp052

0x7b82,	// (0x0002386d) bg_input_focus_pane_cp040

0x9bff,	// (0x000258ea) form_midp_gauge_slider_pane_t1

0x9c0d,	// (0x000258f8) form_midp_gauge_slider_pane_t2

0x9c1b,	// (0x00025906) form_midp_gauge_slider_pane_t3

0x9c29,	// (0x00025914) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0002b4e2) form_midp_gauge_slider_pane_t

0x9c37,	// (0x00025922) form_midp_slider_pane

0x7c62,	// (0x0002394d) bg_input_focus_pane_cp041_ParamLimits

0x7c62,	// (0x0002394d) bg_input_focus_pane_cp041

0x9bcc,	// (0x000258b7) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bcc,	// (0x000258b7) form_midp_gauge_wait_pane_t1

0x9bde,	// (0x000258c9) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bde,	// (0x000258c9) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0002b4dd) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0002b4dd) form_midp_gauge_wait_pane_t

0x9bf0,	// (0x000258db) form_midp_wait_pane_ParamLimits

0x9bf0,	// (0x000258db) form_midp_wait_pane

0x9b96,	// (0x00025881) form_midp_image_pane_g1

0x9b9f,	// (0x0002588a) form_midp_image_pane_t1

0x9bae,	// (0x00025899) form_midp_image_pane_t2

0x9bbd,	// (0x000258a8) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0002b4d6) form_midp_image_pane_t

0x9b8d,	// (0x00025878) list_single_midp_pane_g1

0x4e85,	// (0x00020b70) list_single_midp_pane_t1

0x9b65,	// (0x00025850) list_midp_form_item_pane_ParamLimits

0x9b65,	// (0x00025850) list_midp_form_item_pane

0x9268,	// (0x00024f53) list_midp_form_item_pane_t1

0x9277,	// (0x00024f62) midp_ticker_pane_g1

0x9283,	// (0x00024f6e) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0002b41e) midp_ticker_pane_g

0x928f,	// (0x00024f7a) midp_ticker_pane_t1

0xaf86,	// (0x00026c71) midp_editing_number_pane_t1

0xaf64,	// (0x00026c4f) midp_editing_number_pane

0xaf73,	// (0x00026c5e) midp_ticker_pane

0xad25,	// (0x00026a10) ai_message_heading_pane

0x7b82,	// (0x0002386d) bg_popup_window_pane_cp14

0xad2d,	// (0x00026a18) listscroll_ai_message_pane

0xacaf,	// (0x0002699a) ai_message_heading_pane_g1_ParamLimits

0xacaf,	// (0x0002699a) ai_message_heading_pane_g1

0xacbb,	// (0x000269a6) ai_message_heading_pane_g2_ParamLimits

0xacbb,	// (0x000269a6) ai_message_heading_pane_g2

0xacc7,	// (0x000269b2) ai_message_heading_pane_g3_ParamLimits

0xacc7,	// (0x000269b2) ai_message_heading_pane_g3

0xacd3,	// (0x000269be) ai_message_heading_pane_g4_ParamLimits

0xacd3,	// (0x000269be) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0002b617) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0002b617) ai_message_heading_pane_g

0xacdf,	// (0x000269ca) ai_message_heading_pane_t1_ParamLimits

0xacdf,	// (0x000269ca) ai_message_heading_pane_t1

0xacf9,	// (0x000269e4) ai_message_heading_pane_t2_ParamLimits

0xacf9,	// (0x000269e4) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0002b620) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0002b620) ai_message_heading_pane_t

0xad0b,	// (0x000269f6) bg_popup_heading_pane_cp1_ParamLimits

0xad0b,	// (0x000269f6) bg_popup_heading_pane_cp1

0xac9d,	// (0x00026988) list_ai_message_pane_ParamLimits

0xac9d,	// (0x00026988) list_ai_message_pane

0x866f,	// (0x0002435a) scroll_pane_cp10

0xac39,	// (0x00026924) list_ai_message_pane_g1

0xac41,	// (0x0002692c) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0002b5f4) list_ai_message_pane_g

0xac49,	// (0x00026934) list_ai_message_pane_t1_ParamLimits

0xac49,	// (0x00026934) list_ai_message_pane_t1

0xac5e,	// (0x00026949) list_ai_message_pane_t2_ParamLimits

0xac5e,	// (0x00026949) list_ai_message_pane_t2

0xac73,	// (0x0002695e) list_ai_message_pane_t3_ParamLimits

0xac73,	// (0x0002695e) list_ai_message_pane_t3

0xac88,	// (0x00026973) list_ai_message_pane_t4_ParamLimits

0xac88,	// (0x00026973) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0002b5f9) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0002b5f9) list_ai_message_pane_t

0xac24,	// (0x0002690f) cell_ai_soft_ind_pane_ParamLimits

0xac24,	// (0x0002690f) cell_ai_soft_ind_pane

0x92a1,	// (0x00024f8c) cell_ai_soft_ind_pane_g1_ParamLimits

0x92a1,	// (0x00024f8c) cell_ai_soft_ind_pane_g1

0x7b82,	// (0x0002386d) grid_highlight_cp1

0x92ae,	// (0x00024f99) text_secondary_cp56_ParamLimits

0x92ae,	// (0x00024f99) text_secondary_cp56

0xabf9,	// (0x000268e4) example_general_pane_ParamLimits

0xabf9,	// (0x000268e4) example_general_pane

0xac05,	// (0x000268f0) example_parent_pane_g1_ParamLimits

0xac05,	// (0x000268f0) example_parent_pane_g1

0xac11,	// (0x000268fc) example_parent_pane_t1_ParamLimits

0xac11,	// (0x000268fc) example_parent_pane_t1

0x6519,	// (0x00022204) popup_preview_text_window_ParamLimits

0x6519,	// (0x00022204) popup_preview_text_window

0x90cb,	// (0x00024db6) list_single_pane_cp2_g4

0x7fb9,	// (0x00023ca4) bg_popup_preview_window_pane_ParamLimits

0x7fb9,	// (0x00023ca4) bg_popup_preview_window_pane

0xa946,	// (0x00026631) popup_preview_text_window_t1_ParamLimits

0xa946,	// (0x00026631) popup_preview_text_window_t1

0xa964,	// (0x0002664f) popup_preview_text_window_t2_ParamLimits

0xa964,	// (0x0002664f) popup_preview_text_window_t2

0xa9ad,	// (0x00026698) popup_preview_text_window_t3_ParamLimits

0xa9ad,	// (0x00026698) popup_preview_text_window_t3

0xa9f2,	// (0x000266dd) popup_preview_text_window_t4_ParamLimits

0xa9f2,	// (0x000266dd) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0002b5c8) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0002b5c8) popup_preview_text_window_t

0xaa70,	// (0x0002675b) scroll_pane_cp11

0x99e8,	// (0x000256d3) bg_popup_preview_window_pane_g1

0xa906,	// (0x000265f1) bg_popup_preview_window_pane_g2

0xa90e,	// (0x000265f9) bg_popup_preview_window_pane_g3

0xa916,	// (0x00026601) bg_popup_preview_window_pane_g4

0xa91e,	// (0x00026609) bg_popup_preview_window_pane_g5

0xa926,	// (0x00026611) bg_popup_preview_window_pane_g6

0xa92e,	// (0x00026619) bg_popup_preview_window_pane_g7

0xa936,	// (0x00026621) bg_popup_preview_window_pane_g8

0x5731,	// (0x0002141c) aid_popup_width_pane

0x64f7,	// (0x000221e2) popup_midp_note_alarm_window_ParamLimits

0x64f7,	// (0x000221e2) popup_midp_note_alarm_window

0x84e3,	// (0x000241ce) data_form_pane_ParamLimits

0x4ae2,	// (0x000207cd) form_field_data_pane_g1

0x4aec,	// (0x000207d7) form_field_data_pane_t1_ParamLimits

0x84ef,	// (0x000241da) input_focus_pane_ParamLimits

0x4b04,	// (0x000207ef) data_form_wide_pane_ParamLimits

0x4b15,	// (0x00020800) form_field_data_wide_pane_g1

0x4b21,	// (0x0002080c) form_field_data_wide_pane_t1_ParamLimits

0x8260,	// (0x00023f4b) input_focus_pane_cp6_ParamLimits

0x861c,	// (0x00024307) input_popup_find_pane_g1_ParamLimits

0x861c,	// (0x00024307) input_popup_find_pane_g1

0x5ca3,	// (0x0002198e) aid_navi_side_left_pane

0x5cb8,	// (0x000219a3) aid_navi_side_right_pane

0xa313,	// (0x00025ffe) bg_popup_window_pane_cp30_ParamLimits

0xa313,	// (0x00025ffe) bg_popup_window_pane_cp30

0xa38d,	// (0x00026078) popup_midp_note_alarm_window_g1_ParamLimits

0xa38d,	// (0x00026078) popup_midp_note_alarm_window_g1

0xa3bd,	// (0x000260a8) popup_midp_note_alarm_window_t1_ParamLimits

0xa3bd,	// (0x000260a8) popup_midp_note_alarm_window_t1

0xa45e,	// (0x00026149) popup_midp_note_alarm_window_t2_ParamLimits

0xa45e,	// (0x00026149) popup_midp_note_alarm_window_t2

0xa50c,	// (0x000261f7) popup_midp_note_alarm_window_t3_ParamLimits

0xa50c,	// (0x000261f7) popup_midp_note_alarm_window_t3

0xa53e,	// (0x00026229) popup_midp_note_alarm_window_t4_ParamLimits

0xa53e,	// (0x00026229) popup_midp_note_alarm_window_t4

0xa564,	// (0x0002624f) popup_midp_note_alarm_window_t5_ParamLimits

0xa564,	// (0x0002624f) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0002b565) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0002b565) popup_midp_note_alarm_window_t

0xa610,	// (0x000262fb) wait_bar_pane_cp1_ParamLimits

0xa610,	// (0x000262fb) wait_bar_pane_cp1

0x7b82,	// (0x0002386d) wait_anim_pane_copy1

0x7b82,	// (0x0002386d) wait_border_pane_copy1

0x9ff9,	// (0x00025ce4) wait_border_pane_g1_copy1

0x4b3b,	// (0x00020826) form_field_popup_pane_g1

0x4b43,	// (0x0002082e) form_field_popup_pane_t1_ParamLimits

0x84ef,	// (0x000241da) input_focus_pane_cp7_ParamLimits

0x851d,	// (0x00024208) list_form_pane_ParamLimits

0x4b5b,	// (0x00020846) form_field_popup_wide_pane_g1

0x4b63,	// (0x0002084e) form_field_popup_wide_pane_t1_ParamLimits

0x84ef,	// (0x000241da) input_focus_pane_cp8_ParamLimits

0x8529,	// (0x00024214) list_form_wide_pane_ParamLimits

0xb123,	// (0x00026e0e) aid_size_cell_graphic_pane

0x4bed,	// (0x000208d8) data_form_pane_t1_ParamLimits

0x4eee,	// (0x00020bd9) data_form_wide_pane_t1_ParamLimits

0x95af,	// (0x0002529a) bg_status_flat_pane

0x7bc2,	// (0x000238ad) title_pane_t1_ParamLimits

0x7c2a,	// (0x00023915) title_pane_t2_ParamLimits

0x7c50,	// (0x0002393b) title_pane_t3_ParamLimits

0xf532,	// (0x0002b21d) title_pane_t_ParamLimits

0x8af0,	// (0x000247db) level_1_signal_ParamLimits

0x8b02,	// (0x000247ed) level_2_signal_ParamLimits

0x8b15,	// (0x00024800) level_3_signal_ParamLimits

0x8b28,	// (0x00024813) level_4_signal_ParamLimits

0x8b3b,	// (0x00024826) level_5_signal_ParamLimits

0x8b4e,	// (0x00024839) level_6_signal_ParamLimits

0x8b61,	// (0x0002484c) level_7_signal_ParamLimits

0x8af0,	// (0x000247db) level_1_battery_ParamLimits

0x8b02,	// (0x000247ed) level_2_battery_ParamLimits

0x8b15,	// (0x00024800) level_3_battery_ParamLimits

0x8b28,	// (0x00024813) level_4_battery_ParamLimits

0x8b3b,	// (0x00024826) level_5_battery_ParamLimits

0x8b4e,	// (0x00024839) level_6_battery_ParamLimits

0x8b61,	// (0x0002484c) level_7_battery_ParamLimits

0xa218,	// (0x00025f03) bg_status_flat_pane_g1

0xa220,	// (0x00025f0b) bg_status_flat_pane_g2

0xa228,	// (0x00025f13) bg_status_flat_pane_g3

0xa230,	// (0x00025f1b) bg_status_flat_pane_g4

0xa238,	// (0x00025f23) bg_status_flat_pane_g5

0xa240,	// (0x00025f2b) bg_status_flat_pane_g6

0xa248,	// (0x00025f33) bg_status_flat_pane_g7

0x7c78,	// (0x00023963) tabs_3_active_pane_t1_ParamLimits

0x7c78,	// (0x00023963) tabs_3_passive_pane_t1_ParamLimits

0x7c92,	// (0x0002397d) tabs_4_active_pane_t1_ParamLimits

0x7c92,	// (0x0002397d) tabs_4_1_passive_pane_t1_ParamLimits

0x86b0,	// (0x0002439b) tabs_2_active_pane_t1_ParamLimits

0x86b0,	// (0x0002439b) tabs_2_passive_pane_t1_ParamLimits

0x86c2,	// (0x000243ad) bg_active_tab_pane_cp4_ParamLimits

0x86d0,	// (0x000243bb) tabs_2_long_active_pane_t1_ParamLimits

0x86e3,	// (0x000243ce) bg_passive_tab_pane_cp4_ParamLimits

0x67c6,	// (0x000224b1) list_single_midp_graphic_pane_t1_ParamLimits

0x86c2,	// (0x000243ad) bg_active_tab_pane_cp5_ParamLimits

0x86ef,	// (0x000243da) tabs_3_long_active_pane_t1_ParamLimits

0x86e3,	// (0x000243ce) bg_passive_tab_pane_cp5_ParamLimits

0x67c6,	// (0x000224b1) list_single_midp_graphic_pane_t1

0x95af,	// (0x0002529a) bg_status_flat_pane_ParamLimits

0x9678,	// (0x00025363) indicator_pane_cp2_ParamLimits

0x9678,	// (0x00025363) indicator_pane_cp2

0x97a3,	// (0x0002548e) navi_pane_srt_ParamLimits

0x97a3,	// (0x0002548e) navi_pane_srt

0x97c7,	// (0x000254b2) popup_clock_digital_analogue_window_cp1

0x7d3f,	// (0x00023a2a) indicator_pane_t1

0x919a,	// (0x00024e85) copy_highlight_pane

0x919a,	// (0x00024e85) cursor_graphics_pane

0x919a,	// (0x00024e85) graphic_within_text_pane

0x919a,	// (0x00024e85) link_highlight_pane

0xaa33,	// (0x0002671e) popup_preview_text_window_t5_ParamLimits

0xaa33,	// (0x0002671e) popup_preview_text_window_t5

0x92c8,	// (0x00024fb3) cursor_digital_pane

0x92c8,	// (0x00024fb3) cursor_primary_pane

0x92d9,	// (0x00024fc4) cursor_primary_small_pane

0x92e1,	// (0x00024fcc) cursor_secondary_pane

0x92e9,	// (0x00024fd4) cursor_title_pane

0x92c8,	// (0x00024fb3) link_highlight_digital_pane

0x92d0,	// (0x00024fbb) link_highlight_primary_pane

0x92d9,	// (0x00024fc4) link_highlight_primary_small_pane

0x92e1,	// (0x00024fcc) link_highlight_secondary_pane

0x92e9,	// (0x00024fd4) link_highlight_title_pane

0x92c8,	// (0x00024fb3) copy_highlight_digital_pane

0x92c8,	// (0x00024fb3) copy_highlight_primary_pane

0x92d9,	// (0x00024fc4) copy_highlight_primary_small_pane

0x92e1,	// (0x00024fcc) copy_highlight_secondary_pane

0x92e9,	// (0x00024fd4) copy_highlight_title_pane

0x92e1,	// (0x00024fcc) graphic_text_digital_pane

0xa2b6,	// (0x00025fa1) graphic_text_primary_pane

0xa2bf,	// (0x00025faa) graphic_text_primary_small_pane

0x92d9,	// (0x00024fc4) graphic_text_secondary_pane

0x92c8,	// (0x00024fb3) graphic_text_title_pane

0x92f1,	// (0x00024fdc) cursor_primary_pane_g1

0xa2a8,	// (0x00025f93) cursor_text_primary_t1

0xa290,	// (0x00025f7b) cursor_primary_small_pane_g1

0xa29a,	// (0x00025f85) cursor_text_primary_small_t1

0xa278,	// (0x00025f63) cursor_primary_small_pane_g1_copy1

0xa282,	// (0x00025f6d) cursor_text_primary_small_t1_copy1

0xa260,	// (0x00025f4b) cursor_text_title_t1

0xa26e,	// (0x00025f59) cursor_title_pane_g1

0x92f1,	// (0x00024fdc) cursor_digital_pane_g1

0x92fb,	// (0x00024fe6) cursor_text_digital_t1

0x9320,	// (0x0002500b) link_highlight_primary_pane_g1

0xa209,	// (0x00025ef4) link_highlight_primary_pane_t1

0x9309,	// (0x00024ff4) link_highlight_primary_small_pane_g1

0x9311,	// (0x00024ffc) link_highlight_primary_small_pane_t1

0x9320,	// (0x0002500b) link_highlight_secondary_pane_g1

0x9328,	// (0x00025013) link_highlight_secondary_pane_t1

0xa17d,	// (0x00025e68) link_highlight_title_pane_g1

0xa185,	// (0x00025e70) link_highlight_title_pane_t1

0xa166,	// (0x00025e51) link_highlight_digital_pane_g1

0xa16e,	// (0x00025e59) link_highlight_digital_pane_t1

0xa03e,	// (0x00025d29) copy_highlight_primary_pane_g1

0xa046,	// (0x00025d31) copy_highlight_primary_pane_t1

0xa018,	// (0x00025d03) copy_highlight_primary_small_pane_g1

0xa02f,	// (0x00025d1a) copy_highlight_primary_small_pane_t1

0x9337,	// (0x00025022) copy_highlight_secondary_pane_g1

0x933f,	// (0x0002502a) copy_highlight_secondary_pane_t1

0xa018,	// (0x00025d03) copy_highlight_title_pane_g1

0xa020,	// (0x00025d0b) copy_highlight_title_pane_t1

0xa03e,	// (0x00025d29) copy_highlight_digital_pane_g1

0xb2f1,	// (0x00026fdc) copy_highlight_digital_pane_t1

0xb245,	// (0x00026f30) graphic_text_primary_pane_g1

0xb2d5,	// (0x00026fc0) graphic_text_primary_pane_t1

0xb2e3,	// (0x00026fce) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0002b694) graphic_text_primary_pane_t

0xb2b1,	// (0x00026f9c) graphic_text_primary_small_pane_g1

0xb2b9,	// (0x00026fa4) graphic_text_primary_small_pane_t1

0xb2c7,	// (0x00026fb2) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0002b68f) graphic_text_primary_small_pane_t

0xb28d,	// (0x00026f78) graphic_text_secondary_pane_g1

0xb295,	// (0x00026f80) graphic_text_secondary_pane_t1

0xb2a3,	// (0x00026f8e) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0002b68a) graphic_text_secondary_pane_t

0xb269,	// (0x00026f54) graphic_text_title_pane_g1

0xb271,	// (0x00026f5c) graphic_text_title_pane_t1

0xb27f,	// (0x00026f6a) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0002b685) graphic_text_title_pane_t

0xb245,	// (0x00026f30) graphic_text_digital_pane_g1

0xb24d,	// (0x00026f38) graphic_text_digital_pane_t1

0xb25b,	// (0x00026f46) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0002b680) graphic_text_digital_pane_t

0x7c62,	// (0x0002394d) navi_icon_pane_srt_ParamLimits

0x7c62,	// (0x0002394d) navi_icon_pane_srt

0x7b82,	// (0x0002386d) navi_midp_pane_srt

0x7b82,	// (0x0002386d) navi_navi_pane_srt

0x7c62,	// (0x0002394d) navi_text_pane_srt_ParamLimits

0x7c62,	// (0x0002394d) navi_text_pane_srt

0xb210,	// (0x00026efb) navi_navi_icon_text_pane_srt

0xb218,	// (0x00026f03) navi_navi_pane_srt_g1_ParamLimits

0xb218,	// (0x00026f03) navi_navi_pane_srt_g1

0xb22a,	// (0x00026f15) navi_navi_pane_srt_g2_ParamLimits

0xb22a,	// (0x00026f15) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0002b67b) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0002b67b) navi_navi_pane_srt_g

0xb23c,	// (0x00026f27) navi_navi_tabs_pane_srt

0xb210,	// (0x00026efb) navi_navi_text_pane_srt

0xb210,	// (0x00026efb) navi_navi_volume_pane_srt

0xb201,	// (0x00026eec) navi_navi_text_pane_srt_t1

0x6b40,	// (0x0002282b) navi_navi_volume_pane_srt_g1

0x6b48,	// (0x00022833) volume_small_pane_srt_ParamLimits

0x6b48,	// (0x00022833) volume_small_pane_srt

0x5f83,	// (0x00021c6e) volume_small_pane_srt_g1_ParamLimits

0x5f83,	// (0x00021c6e) volume_small_pane_srt_g1

0x5f93,	// (0x00021c7e) volume_small_pane_srt_g2_ParamLimits

0x5f93,	// (0x00021c7e) volume_small_pane_srt_g2

0x5fa4,	// (0x00021c8f) volume_small_pane_srt_g3_ParamLimits

0x5fa4,	// (0x00021c8f) volume_small_pane_srt_g3

0x5fb5,	// (0x00021ca0) volume_small_pane_srt_g4_ParamLimits

0x5fb5,	// (0x00021ca0) volume_small_pane_srt_g4

0x5fc6,	// (0x00021cb1) volume_small_pane_srt_g5_ParamLimits

0x5fc6,	// (0x00021cb1) volume_small_pane_srt_g5

0x5fd7,	// (0x00021cc2) volume_small_pane_srt_g6_ParamLimits

0x5fd7,	// (0x00021cc2) volume_small_pane_srt_g6

0x5fe8,	// (0x00021cd3) volume_small_pane_srt_g7_ParamLimits

0x5fe8,	// (0x00021cd3) volume_small_pane_srt_g7

0x5ff9,	// (0x00021ce4) volume_small_pane_srt_g8_ParamLimits

0x5ff9,	// (0x00021ce4) volume_small_pane_srt_g8

0x600a,	// (0x00021cf5) volume_small_pane_srt_g9_ParamLimits

0x600a,	// (0x00021cf5) volume_small_pane_srt_g9

0x601b,	// (0x00021d06) volume_small_pane_srt_g10_ParamLimits

0x601b,	// (0x00021d06) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002b423) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002b423) volume_small_pane_srt_g

0x8062,	// (0x00023d4d) query_popup_data_pane_cp2

0xb1e7,	// (0x00026ed2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1e7,	// (0x00026ed2) navi_navi_icon_text_pane_srt_t1

0xa2b6,	// (0x00025fa1) navi_tabs_2_long_pane_srt

0xa2b6,	// (0x00025fa1) navi_tabs_2_pane_srt

0xa2b6,	// (0x00025fa1) navi_tabs_3_long_pane_srt

0xa2b6,	// (0x00025fa1) navi_tabs_3_pane_srt

0xa2b6,	// (0x00025fa1) navi_tabs_4_pane_srt

0x6b20,	// (0x0002280b) tabs_2_active_pane_srt_ParamLimits

0x6b20,	// (0x0002280b) tabs_2_active_pane_srt

0x6b30,	// (0x0002281b) tabs_2_passive_pane_srt_ParamLimits

0x6b30,	// (0x0002281b) tabs_2_passive_pane_srt

0x94be,	// (0x000251a9) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94be,	// (0x000251a9) bg_passive_tab_pane_cp1_srt

0xb1b3,	// (0x00026e9e) bg_passive_tab_pane_g1_cp1_srt

0x8dd9,	// (0x00024ac4) bg_passive_tab_pane_g2_cp1_srt

0xb1bc,	// (0x00026ea7) bg_passive_tab_pane_g3_cp1_srt

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp1_srt_ParamLimits

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp1_srt

0xb1c5,	// (0x00026eb0) tabs_2_active_pane_srt_g1

0xb1cd,	// (0x00026eb8) tabs_2_active_pane_srt_t1_ParamLimits

0xb1cd,	// (0x00026eb8) tabs_2_active_pane_srt_t1

0xb1b3,	// (0x00026e9e) bg_active_tab_pane_g1_cp1_srt

0x8dd9,	// (0x00024ac4) bg_active_tab_pane_g2_cp1_srt

0xb1bc,	// (0x00026ea7) bg_active_tab_pane_g3_cp1_srt

0x6aed,	// (0x000227d8) tabs_3_active_pane_srt_ParamLimits

0x6aed,	// (0x000227d8) tabs_3_active_pane_srt

0x6afe,	// (0x000227e9) tabs_3_passive_pane_cp_srt_ParamLimits

0x6afe,	// (0x000227e9) tabs_3_passive_pane_cp_srt

0x6b0f,	// (0x000227fa) tabs_3_passive_pane_srt_ParamLimits

0x6b0f,	// (0x000227fa) tabs_3_passive_pane_srt

0x94be,	// (0x000251a9) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94be,	// (0x000251a9) bg_passive_tab_pane_cp2_srt

0x934e,	// (0x00025039) bg_passive_tab_pane_g1_cp2_srt

0x8dd9,	// (0x00024ac4) bg_passive_tab_pane_g2_cp2_srt

0x9357,	// (0x00025042) bg_passive_tab_pane_g3_cp2_srt

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp2_srt_ParamLimits

0x7c62,	// (0x0002394d) bg_active_tab_pane_cp2_srt

0xb199,	// (0x00026e84) tabs_3_active_pane_srt_g1

0xb1a1,	// (0x00026e8c) tabs_3_active_pane_srt_t1_ParamLimits

0xb1a1,	// (0x00026e8c) tabs_3_active_pane_srt_t1

0x934e,	// (0x00025039) bg_active_tab_pane_g1_cp2_srt

0x8dd9,	// (0x00024ac4) bg_active_tab_pane_g2_cp2_srt

0x9357,	// (0x00025042) bg_active_tab_pane_g3_cp2_srt

0x6aa5,	// (0x00022790) tabs_4_active_pane_srt_ParamLimits

0x6aa5,	// (0x00022790) tabs_4_active_pane_srt

0x6ab7,	// (0x000227a2) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6ab7,	// (0x000227a2) tabs_4_passive_pane_cp2_srt

0x618a,	// (0x00021e75) aid_size_cell_toolbar

0x86e3,	// (0x000243ce) main_idle_act_pane_ParamLimits

0x632d,	// (0x00022018) popup_large_graphic_colour_window_ParamLimits

0x6694,	// (0x0002237f) popup_toolbar_window_ParamLimits

0x6694,	// (0x0002237f) popup_toolbar_window

0x4f4e,	// (0x00020c39) list_single_graphic_2heading_pane_ParamLimits

0x4f4e,	// (0x00020c39) list_single_graphic_2heading_pane

0x889f,	// (0x0002458a) aid_size_cell_apps_grid_lsc_pane

0x88b1,	// (0x0002459c) aid_size_cell_apps_grid_prt_pane

0x94be,	// (0x000251a9) bg_wml_button_pane_cp1_ParamLimits

0x94be,	// (0x000251a9) bg_wml_button_pane_cp1

0x9c8c,	// (0x00025977) form_midp_field_text_pane_t1_ParamLimits

0x9a5c,	// (0x00025747) input_focus_pane_cp050_ParamLimits

0x9cc3,	// (0x000259ae) list_midp_form_text_pane_ParamLimits

0x9c69,	// (0x00025954) input_focus_pane_cp051_ParamLimits

0x9c7d,	// (0x00025968) list_midp_choice_pane_ParamLimits

0x9b15,	// (0x00025800) list_single_2graphic_pane_cp3_ParamLimits

0x9b15,	// (0x00025800) list_single_2graphic_pane_cp3

0x9b36,	// (0x00025821) list_single_midp_graphic_pane_ParamLimits

0x9b36,	// (0x00025821) list_single_midp_graphic_pane

0x4d4f,	// (0x00020a3a) list_single_graphic_2heading_pane_g1_ParamLimits

0x4d4f,	// (0x00020a3a) list_single_graphic_2heading_pane_g1

0x4d5b,	// (0x00020a46) list_single_graphic_2heading_pane_g4_ParamLimits

0x4d5b,	// (0x00020a46) list_single_graphic_2heading_pane_g4

0x4d67,	// (0x00020a52) list_single_graphic_2heading_pane_g5_ParamLimits

0x4d67,	// (0x00020a52) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0002b476) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0002b476) list_single_graphic_2heading_pane_g

0x4d73,	// (0x00020a5e) list_single_graphic_2heading_pane_t1_ParamLimits

0x4d73,	// (0x00020a5e) list_single_graphic_2heading_pane_t1

0x4d87,	// (0x00020a72) list_single_graphic_2heading_pane_t2_ParamLimits

0x4d87,	// (0x00020a72) list_single_graphic_2heading_pane_t2

0x4da1,	// (0x00020a8c) list_single_graphic_2heading_pane_t3_ParamLimits

0x4da1,	// (0x00020a8c) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0002b47d) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0002b47d) list_single_graphic_2heading_pane_t

0x9926,	// (0x00025611) bg_popup_sub_pane_cp2

0x9950,	// (0x0002563b) grid_toobar_pane

0x6741,	// (0x0002242c) cell_toolbar_pane_ParamLimits

0x6741,	// (0x0002242c) cell_toolbar_pane

0x998c,	// (0x00025677) cell_toolbar_pane_g1_ParamLimits

0x998c,	// (0x00025677) cell_toolbar_pane_g1

0x99a0,	// (0x0002568b) cell_toolbar_pane_g2_ParamLimits

0x99a0,	// (0x0002568b) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0002b48b) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0002b48b) cell_toolbar_pane_g

0x99c2,	// (0x000256ad) grid_highlight_pane_cp2_ParamLimits

0x99c2,	// (0x000256ad) grid_highlight_pane_cp2

0x99dc,	// (0x000256c7) toolbar_button_pane

0x99e8,	// (0x000256d3) toolbar_button_pane_g1

0x99f0,	// (0x000256db) toolbar_button_pane_g2

0x99f8,	// (0x000256e3) toolbar_button_pane_g3

0x9a00,	// (0x000256eb) toolbar_button_pane_g4

0x9a08,	// (0x000256f3) toolbar_button_pane_g5

0x9a10,	// (0x000256fb) toolbar_button_pane_g6

0x9a18,	// (0x00025703) toolbar_button_pane_g7

0x9a20,	// (0x0002570b) toolbar_button_pane_g8

0x9a28,	// (0x00025713) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0002b490) toolbar_button_pane_g

0x6779,	// (0x00022464) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6779,	// (0x00022464) list_single_2graphic_pane_g1_cp3

0x6785,	// (0x00022470) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6785,	// (0x00022470) list_single_2graphic_pane_g2_cp3

0x6796,	// (0x00022481) list_single_2graphic_pane_g3_cp3

0x679e,	// (0x00022489) list_single_2graphic_pane_g4_cp3_ParamLimits

0x679e,	// (0x00022489) list_single_2graphic_pane_g4_cp3

0x67aa,	// (0x00022495) list_single_2graphic_pane_t1_cp3_ParamLimits

0x67aa,	// (0x00022495) list_single_2graphic_pane_t1_cp3

0xa6a1,	// (0x0002638c) list_single_midp_graphic_pane_g2_ParamLimits

0xa6a1,	// (0x0002638c) list_single_midp_graphic_pane_g2

0x6192,	// (0x00021e7d) aid_zoom_text_primary

0x4d23,	// (0x00020a0e) aid_zoom_text_secondary

0x9408,	// (0x000250f3) status_small_pane_g7_ParamLimits

0x9408,	// (0x000250f3) status_small_pane_g7

0x942b,	// (0x00025116) status_small_pane_t1_ParamLimits

0x7b99,	// (0x00023884) title_pane_g2

0x0003,

0xf529,	// (0x0002b214) title_pane_g

0x810a,	// (0x00023df5) aid_size_cell_colour_1_pane_ParamLimits

0x810a,	// (0x00023df5) aid_size_cell_colour_1_pane

0x811e,	// (0x00023e09) aid_size_cell_colour_2_pane_ParamLimits

0x811e,	// (0x00023e09) aid_size_cell_colour_2_pane

0x8132,	// (0x00023e1d) aid_size_cell_colour_3_pane_ParamLimits

0x8132,	// (0x00023e1d) aid_size_cell_colour_3_pane

0x8146,	// (0x00023e31) aid_size_cell_colour_4_pane_ParamLimits

0x8146,	// (0x00023e31) aid_size_cell_colour_4_pane

0x5be0,	// (0x000218cb) title_pane_stacon_g1_ParamLimits

0x5be0,	// (0x000218cb) title_pane_stacon_g1

0xa09d,	// (0x00025d88) popup_note_wait_window_g3_ParamLimits

0xa09d,	// (0x00025d88) popup_note_wait_window_g3

0xa113,	// (0x00025dfe) popup_note_wait_window_t5_ParamLimits

0xa113,	// (0x00025dfe) popup_note_wait_window_t5

0x7b82,	// (0x0002386d) main_feb_china_hwr_fs_writing_pane

0x620e,	// (0x00021ef9) popup_feb_china_hwr_fs_window_ParamLimits

0x620e,	// (0x00021ef9) popup_feb_china_hwr_fs_window

0x67dc,	// (0x000224c7) aid_size_cell_hwr_fs_ParamLimits

0x67dc,	// (0x000224c7) aid_size_cell_hwr_fs

0x9a5c,	// (0x00025747) bg_popup_sub_pane_cp3_ParamLimits

0x9a5c,	// (0x00025747) bg_popup_sub_pane_cp3

0x67f1,	// (0x000224dc) grid_hwr_fs_pane_ParamLimits

0x67f1,	// (0x000224dc) grid_hwr_fs_pane

0x6809,	// (0x000224f4) linegrid_hwr_fs_pane_ParamLimits

0x6809,	// (0x000224f4) linegrid_hwr_fs_pane

0x6819,	// (0x00022504) cell_hwr_fs_pane_ParamLimits

0x6819,	// (0x00022504) cell_hwr_fs_pane

0x9a68,	// (0x00025753) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a68,	// (0x00025753) linegrid_hwr_fs_pane_g1

0x9a74,	// (0x0002575f) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a74,	// (0x0002575f) linegrid_hwr_fs_pane_g2

0x9a86,	// (0x00025771) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a86,	// (0x00025771) linegrid_hwr_fs_pane_g3

0x683b,	// (0x00022526) linegrid_hwr_fs_pane_g4_ParamLimits

0x683b,	// (0x00022526) linegrid_hwr_fs_pane_g4

0x6855,	// (0x00022540) linegrid_hwr_fs_pane_g5_ParamLimits

0x6855,	// (0x00022540) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0002b4bb) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0002b4bb) linegrid_hwr_fs_pane_g

0x9a92,	// (0x0002577d) cell_hwr_fs_pane_g1_ParamLimits

0x9a92,	// (0x0002577d) cell_hwr_fs_pane_g1

0x985d,	// (0x00025548) cell_hwr_fs_pane_g2_ParamLimits

0x985d,	// (0x00025548) cell_hwr_fs_pane_g2

0x9aa8,	// (0x00025793) cell_hwr_fs_pane_g3_ParamLimits

0x9aa8,	// (0x00025793) cell_hwr_fs_pane_g3

0x9ab5,	// (0x000257a0) cell_hwr_fs_pane_g4_ParamLimits

0x9ab5,	// (0x000257a0) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0002b4c6) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0002b4c6) cell_hwr_fs_pane_g

0x686b,	// (0x00022556) cell_hwr_fs_pane_t1

0x7b82,	// (0x0002386d) grid_highlight_pane_cp6

0x7b82,	// (0x0002386d) main_idle_act2_pane

0x8656,	// (0x00024341) aid_inside_area_popup_secondary

0xa756,	// (0x00026441) aid_inside_area_window_primary_ParamLimits

0xa756,	// (0x00026441) aid_inside_area_window_primary

0xb300,	// (0x00026feb) ai2_news_ticker_pane

0xb308,	// (0x00026ff3) aid_size_cell_ai1_link_ParamLimits

0xb308,	// (0x00026ff3) aid_size_cell_ai1_link

0xb322,	// (0x0002700d) popup_ai2_data_window_ParamLimits

0xb322,	// (0x0002700d) popup_ai2_data_window

0xb338,	// (0x00027023) popup_ai2_link_window_ParamLimits

0xb338,	// (0x00027023) popup_ai2_link_window

0x9a5c,	// (0x00025747) bg_popup_sub_pane_cp4_ParamLimits

0x9a5c,	// (0x00025747) bg_popup_sub_pane_cp4

0xb34c,	// (0x00027037) grid_ai2_link_pane_ParamLimits

0xb34c,	// (0x00027037) grid_ai2_link_pane

0xb363,	// (0x0002704e) popup_ai2_link_window_g1_ParamLimits

0xb363,	// (0x0002704e) popup_ai2_link_window_g1

0xb36f,	// (0x0002705a) popup_ai2_link_window_g2_ParamLimits

0xb36f,	// (0x0002705a) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0002b699) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0002b699) popup_ai2_link_window_g

0xb37e,	// (0x00027069) ai2_mp_button_pane

0xb386,	// (0x00027071) ai2_mp_volume_pane

0x9c69,	// (0x00025954) bg_popup_sub_pane_cp5_ParamLimits

0x9c69,	// (0x00025954) bg_popup_sub_pane_cp5

0xb38e,	// (0x00027079) heading_ai2_gene_pane_ParamLimits

0xb38e,	// (0x00027079) heading_ai2_gene_pane

0xb39a,	// (0x00027085) list_ai2_gene_pane_ParamLimits

0xb39a,	// (0x00027085) list_ai2_gene_pane

0xb3e2,	// (0x000270cd) cell_ai2_link_pane_ParamLimits

0xb3e2,	// (0x000270cd) cell_ai2_link_pane

0xb3f8,	// (0x000270e3) cell_ai2_link_pane_g1

0x7b82,	// (0x0002386d) grid_highlight_pane_cp7

0x6b5d,	// (0x00022848) ai2_mp_volume_pane_g1

0xb4c8,	// (0x000271b3) ai2_mp_volume_pane_g2

0xb43d,	// (0x00027128) list_ai2_gene_pane_t1

0xb4d0,	// (0x000271bb) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0002b6b2) ai2_mp_volume_pane_g

0x6b65,	// (0x00022850) volume_small_pane_cp3

0xb4d8,	// (0x000271c3) aid_size_cell_ai2_button

0xb4e0,	// (0x000271cb) grid_ai2_button_pane

0xb4e9,	// (0x000271d4) cell_ai2_button_pane_ParamLimits

0xb4e9,	// (0x000271d4) cell_ai2_button_pane

0x31e3,	// (0x0001eece) cell_ai2_button_pane_g1

0x7b82,	// (0x0002386d) grid_highlight_pane_cp8

0xb488,	// (0x00027173) ai2_gene_pane_t1_ParamLimits

0xb488,	// (0x00027173) ai2_gene_pane_t1

0x6180,	// (0x00021e6b) aid_height_parent_landscape

0xadcc,	// (0x00026ab7) aid_height_set_list

0xaddd,	// (0x00026ac8) aid_size_parent

0xb123,	// (0x00026e0e) aid_size_cell_graphic_pane_ParamLimits

0xb3aa,	// (0x00027095) popup_ai2_data_window_g1_ParamLimits

0xb3aa,	// (0x00027095) popup_ai2_data_window_g1

0xb3b6,	// (0x000270a1) ai2_news_ticker_pane_g1

0xb3be,	// (0x000270a9) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0002b69e) ai2_news_ticker_pane_g

0xb3c6,	// (0x000270b1) ai2_news_ticker_pane_t1

0xb3d4,	// (0x000270bf) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0002b6a3) ai2_news_ticker_pane_t

0xb401,	// (0x000270ec) heading_ai2_gene_pane_g1

0xb409,	// (0x000270f4) heading_ai2_gene_pane_t1_ParamLimits

0xb409,	// (0x000270f4) heading_ai2_gene_pane_t1

0xb41e,	// (0x00027109) list_highlight_pane_cp6

0xb426,	// (0x00027111) ai2_gene_pane_ParamLimits

0xb426,	// (0x00027111) ai2_gene_pane

0xb44b,	// (0x00027136) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0002b6a8) list_ai2_gene_pane_t

0xb459,	// (0x00027144) list_highlight_pane_cp8_ParamLimits

0xb459,	// (0x00027144) list_highlight_pane_cp8

0xb46a,	// (0x00027155) ai2_gene_pane_g1_ParamLimits

0xb46a,	// (0x00027155) ai2_gene_pane_g1

0xb47c,	// (0x00027167) ai2_gene_pane_g2_ParamLimits

0xb47c,	// (0x00027167) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0002b6ad) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0002b6ad) ai2_gene_pane_g

0x8485,	// (0x00024170) scroll_pane_cp12

0x613d,	// (0x00021e28) control_pane_t3_ParamLimits

0x613d,	// (0x00021e28) control_pane_t3

0x941c,	// (0x00025107) status_small_pane_g8_ParamLimits

0x941c,	// (0x00025107) status_small_pane_g8

0x62f4,	// (0x00021fdf) popup_find_window_ParamLimits

0x650b,	// (0x000221f6) popup_note_image_window_ParamLimits

0x4d4f,	// (0x00020a3a) list_double2_graphic_pane_vc_g1_ParamLimits

0x4d4f,	// (0x00020a3a) list_double2_graphic_pane_vc_g1

0x4db9,	// (0x00020aa4) list_double2_graphic_pane_vc_g2_ParamLimits

0x4db9,	// (0x00020aa4) list_double2_graphic_pane_vc_g2

0x4dc5,	// (0x00020ab0) list_double2_graphic_pane_vc_g3_ParamLimits

0x4dc5,	// (0x00020ab0) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0002b484) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0002b484) list_double2_graphic_pane_vc_g

0x4dd1,	// (0x00020abc) list_double2_graphic_pane_vc_t1_ParamLimits

0x4dd1,	// (0x00020abc) list_double2_graphic_pane_vc_t1

0x4d5b,	// (0x00020a46) list_single_heading_pane_vc_g1_ParamLimits

0x4d5b,	// (0x00020a46) list_single_heading_pane_vc_g1

0x4d67,	// (0x00020a52) list_single_heading_pane_vc_g2_ParamLimits

0x4d67,	// (0x00020a52) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b4a5) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b4a5) list_single_heading_pane_vc_g

0x4de7,	// (0x00020ad2) list_single_heading_pane_vc_t1_ParamLimits

0x4de7,	// (0x00020ad2) list_single_heading_pane_vc_t1

0x4dfd,	// (0x00020ae8) list_single_heading_pane_vc_t2_ParamLimits

0x4dfd,	// (0x00020ae8) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0002b4aa) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0002b4aa) list_single_heading_pane_vc_t

0x4e0f,	// (0x00020afa) list_setting_number_pane_vc_g1_ParamLimits

0x4e0f,	// (0x00020afa) list_setting_number_pane_vc_g1

0x4e1b,	// (0x00020b06) list_setting_number_pane_vc_g2_ParamLimits

0x4e1b,	// (0x00020b06) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002b4af) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002b4af) list_setting_number_pane_vc_g

0x4e27,	// (0x00020b12) list_setting_number_pane_vc_t1_ParamLimits

0x4e27,	// (0x00020b12) list_setting_number_pane_vc_t1

0x4e3b,	// (0x00020b26) list_setting_number_pane_vc_t2_ParamLimits

0x4e3b,	// (0x00020b26) list_setting_number_pane_vc_t2

0x4e57,	// (0x00020b42) list_setting_number_pane_vc_t3_ParamLimits

0x4e57,	// (0x00020b42) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0002b4b4) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0002b4b4) list_setting_number_pane_vc_t

0x4e75,	// (0x00020b60) set_value_pane_vc_ParamLimits

0x4e75,	// (0x00020b60) set_value_pane_vc

0x4f4e,	// (0x00020c39) list_double2_graphic_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_double2_graphic_pane_vc

0xaf95,	// (0x00026c80) list_double2_large_graphic_pane_vc_ParamLimits

0xaf95,	// (0x00026c80) list_double2_large_graphic_pane_vc

0x4f4e,	// (0x00020c39) list_double2_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_double2_pane_vc

0x4f4e,	// (0x00020c39) list_double_graphic_heading_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_double_graphic_heading_pane_vc

0x4f4e,	// (0x00020c39) list_double_graphic_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_double_graphic_pane_vc

0x4f4e,	// (0x00020c39) list_double_heading_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_double_heading_pane_vc

0xafa7,	// (0x00026c92) list_double_large_graphic_pane_vc_ParamLimits

0xafa7,	// (0x00026c92) list_double_large_graphic_pane_vc

0x4f4e,	// (0x00020c39) list_double_number_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_double_number_pane_vc

0x4f4e,	// (0x00020c39) list_double_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_double_pane_vc

0x4f4e,	// (0x00020c39) list_double_time_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_double_time_pane_vc

0x4f4e,	// (0x00020c39) list_setting_number_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_setting_number_pane_vc

0x4f4e,	// (0x00020c39) list_setting_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_setting_pane_vc

0x4f4e,	// (0x00020c39) list_single_graphic_heading_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_single_graphic_heading_pane_vc

0x4f4e,	// (0x00020c39) list_single_heading_pane_vc_ParamLimits

0x4f4e,	// (0x00020c39) list_single_heading_pane_vc

0x4f61,	// (0x00020c4c) list_single_number_heading_pane_vc_ParamLimits

0x4f61,	// (0x00020c4c) list_single_number_heading_pane_vc

0x4fdc,	// (0x00020cc7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4fdc,	// (0x00020cc7) list_double_graphic_heading_pane_vc_g1

0x4d5b,	// (0x00020a46) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4d5b,	// (0x00020a46) list_double_graphic_heading_pane_vc_g2

0x4d67,	// (0x00020a52) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4d67,	// (0x00020a52) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0002b6b9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0002b6b9) list_double_graphic_heading_pane_vc_g

0x4fe8,	// (0x00020cd3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4fe8,	// (0x00020cd3) list_double_graphic_heading_pane_vc_t1

0x5004,	// (0x00020cef) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5004,	// (0x00020cef) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0002b6c0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0002b6c0) list_double_graphic_heading_pane_vc_t

0x4e0f,	// (0x00020afa) list_setting_pane_vc_g1_ParamLimits

0x4e0f,	// (0x00020afa) list_setting_pane_vc_g1

0x4e1b,	// (0x00020b06) list_setting_pane_vc_g2_ParamLimits

0x4e1b,	// (0x00020b06) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002b4af) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002b4af) list_setting_pane_vc_g

0x5022,	// (0x00020d0d) list_setting_pane_vc_t1_ParamLimits

0x5022,	// (0x00020d0d) list_setting_pane_vc_t1

0x503e,	// (0x00020d29) list_setting_pane_vc_t2_ParamLimits

0x503e,	// (0x00020d29) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0002b6ee) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0002b6ee) list_setting_pane_vc_t

0x4e75,	// (0x00020b60) set_value_pane_cp_vc_ParamLimits

0x4e75,	// (0x00020b60) set_value_pane_cp_vc

0x4d5b,	// (0x00020a46) list_single_number_heading_pane_vc_g1_ParamLimits

0x4d5b,	// (0x00020a46) list_single_number_heading_pane_vc_g1

0x4d67,	// (0x00020a52) list_single_number_heading_pane_vc_g2_ParamLimits

0x4d67,	// (0x00020a52) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b4a5) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b4a5) list_single_number_heading_pane_vc_g

0x505a,	// (0x00020d45) list_single_number_heading_pane_vc_t1_ParamLimits

0x505a,	// (0x00020d45) list_single_number_heading_pane_vc_t1

0x5070,	// (0x00020d5b) list_single_number_heading_pane_vc_t2_ParamLimits

0x5070,	// (0x00020d5b) list_single_number_heading_pane_vc_t2

0x5082,	// (0x00020d6d) list_single_number_heading_pane_vc_t3_ParamLimits

0x5082,	// (0x00020d6d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0002b6f3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0002b6f3) list_single_number_heading_pane_vc_t

0x4d4f,	// (0x00020a3a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4d4f,	// (0x00020a3a) list_single_graphic_heading_pane_vc_g1

0x4d5b,	// (0x00020a46) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4d5b,	// (0x00020a46) list_single_graphic_heading_pane_vc_g4

0x4d67,	// (0x00020a52) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4d67,	// (0x00020a52) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf78b,	// (0x0002b476) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf78b,	// (0x0002b476) list_single_graphic_heading_pane_vc_g

0x5094,	// (0x00020d7f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5094,	// (0x00020d7f) list_single_graphic_heading_pane_vc_t1

0x50aa,	// (0x00020d95) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x50aa,	// (0x00020d95) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0002b6fa) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0002b6fa) list_single_graphic_heading_pane_vc_t

0x4d5b,	// (0x00020a46) list_double2_pane_vc_g1_ParamLimits

0x4d5b,	// (0x00020a46) list_double2_pane_vc_g1

0x4d67,	// (0x00020a52) list_double2_pane_vc_g2_ParamLimits

0x4d67,	// (0x00020a52) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b4a5) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b4a5) list_double2_pane_vc_g

0x50bc,	// (0x00020da7) list_double2_pane_vc_t1_ParamLimits

0x50bc,	// (0x00020da7) list_double2_pane_vc_t1

0x50d2,	// (0x00020dbd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x50d2,	// (0x00020dbd) list_double2_large_graphic_pane_vc_g1

0x464e,	// (0x00020339) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x464e,	// (0x00020339) list_double2_large_graphic_pane_vc_g2

0x465a,	// (0x00020345) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x465a,	// (0x00020345) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa14,	// (0x0002b6ff) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa14,	// (0x0002b6ff) list_double2_large_graphic_pane_vc_g

0x50de,	// (0x00020dc9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x50de,	// (0x00020dc9) list_double2_large_graphic_pane_vc_t1

0x50f4,	// (0x00020ddf) list_double_time_pane_vc_g1_ParamLimits

0x50f4,	// (0x00020ddf) list_double_time_pane_vc_g1

0x5100,	// (0x00020deb) list_double_time_pane_vc_g2_ParamLimits

0x5100,	// (0x00020deb) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0002b706) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0002b706) list_double_time_pane_vc_g

0x510c,	// (0x00020df7) list_double_time_pane_vc_t1_ParamLimits

0x510c,	// (0x00020df7) list_double_time_pane_vc_t1

0x5130,	// (0x00020e1b) list_double_time_pane_vc_t2_ParamLimits

0x5130,	// (0x00020e1b) list_double_time_pane_vc_t2

0x517a,	// (0x00020e65) list_double_time_pane_vc_t3_ParamLimits

0x517a,	// (0x00020e65) list_double_time_pane_vc_t3

0x518c,	// (0x00020e77) list_double_time_pane_vc_t4_ParamLimits

0x518c,	// (0x00020e77) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0002b70b) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0002b70b) list_double_time_pane_vc_t

0x4d5b,	// (0x00020a46) list_double_pane_vc_g1_ParamLimits

0x4d5b,	// (0x00020a46) list_double_pane_vc_g1

0x4d67,	// (0x00020a52) list_double_pane_vc_g2_ParamLimits

0x4d67,	// (0x00020a52) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b4a5) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b4a5) list_double_pane_vc_g

0x51a0,	// (0x00020e8b) list_double_pane_vc_t1_ParamLimits

0x51a0,	// (0x00020e8b) list_double_pane_vc_t1

0x51b4,	// (0x00020e9f) list_double_pane_vc_t2_ParamLimits

0x51b4,	// (0x00020e9f) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0002b714) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0002b714) list_double_pane_vc_t

0x4d5b,	// (0x00020a46) list_double_number_pane_vc_g1_ParamLimits

0x4d5b,	// (0x00020a46) list_double_number_pane_vc_g1

0x4d67,	// (0x00020a52) list_double_number_pane_vc_g2_ParamLimits

0x4d67,	// (0x00020a52) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b4a5) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b4a5) list_double_number_pane_vc_g

0x51cc,	// (0x00020eb7) list_double_number_pane_vc_t1_ParamLimits

0x51cc,	// (0x00020eb7) list_double_number_pane_vc_t1

0x51de,	// (0x00020ec9) list_double_number_pane_vc_t2_ParamLimits

0x51de,	// (0x00020ec9) list_double_number_pane_vc_t2

0x51f2,	// (0x00020edd) list_double_number_pane_vc_t3_ParamLimits

0x51f2,	// (0x00020edd) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0002b719) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002b719) list_double_number_pane_vc_t

0x520a,	// (0x00020ef5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x520a,	// (0x00020ef5) list_double_large_graphic_pane_vc_g1

0x5226,	// (0x00020f11) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5226,	// (0x00020f11) list_double_large_graphic_pane_vc_g2

0x523a,	// (0x00020f25) list_double_large_graphic_pane_vc_g3_ParamLimits

0x523a,	// (0x00020f25) list_double_large_graphic_pane_vc_g3

0x5249,	// (0x00020f34) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5249,	// (0x00020f34) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0002b720) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0002b720) list_double_large_graphic_pane_vc_g

0x5258,	// (0x00020f43) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5258,	// (0x00020f43) list_double_large_graphic_pane_vc_t1

0x5274,	// (0x00020f5f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5274,	// (0x00020f5f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0002b729) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002b729) list_double_large_graphic_pane_vc_t

0x4d5b,	// (0x00020a46) list_double_heading_pane_vc_g1_ParamLimits

0x4d5b,	// (0x00020a46) list_double_heading_pane_vc_g1

0x4d67,	// (0x00020a52) list_double_heading_pane_vc_g2_ParamLimits

0x4d67,	// (0x00020a52) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b4a5) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b4a5) list_double_heading_pane_vc_g

0x5296,	// (0x00020f81) list_double_heading_pane_vc_t1_ParamLimits

0x5296,	// (0x00020f81) list_double_heading_pane_vc_t1

0x52aa,	// (0x00020f95) list_double_heading_pane_vc_t2_ParamLimits

0x52aa,	// (0x00020f95) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0002b72e) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0002b72e) list_double_heading_pane_vc_t

0x52c2,	// (0x00020fad) list_double_graphic_pane_vc_g1_ParamLimits

0x52c2,	// (0x00020fad) list_double_graphic_pane_vc_g1

0x52d5,	// (0x00020fc0) list_double_graphic_pane_vc_g2_ParamLimits

0x52d5,	// (0x00020fc0) list_double_graphic_pane_vc_g2

0x4d5b,	// (0x00020a46) list_double_graphic_pane_vc_g3_ParamLimits

0x4d5b,	// (0x00020a46) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0002b733) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0002b733) list_double_graphic_pane_vc_g

0x52f2,	// (0x00020fdd) list_double_graphic_pane_vc_t1_ParamLimits

0x52f2,	// (0x00020fdd) list_double_graphic_pane_vc_t1

0x531c,	// (0x00021007) list_double_graphic_pane_vc_t2_ParamLimits

0x531c,	// (0x00021007) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0002b73c) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0002b73c) list_double_graphic_pane_vc_t

0x573d,	// (0x00021428) aid_size_cell_fastswap

0x5745,	// (0x00021430) aid_size_cell_touch_ParamLimits

0x5745,	// (0x00021430) aid_size_cell_touch

0x59a0,	// (0x0002168b) popup_fast_swap_wide_window_ParamLimits

0x59a0,	// (0x0002168b) popup_fast_swap_wide_window

0x5ab4,	// (0x0002179f) touch_pane_ParamLimits

0x5ab4,	// (0x0002179f) touch_pane

0x84db,	// (0x000241c6) button_value_adjust_pane_cp2

0x4a36,	// (0x00020721) button_value_adjust_pane_cp4

0x4a56,	// (0x00020741) form_field_data_pane_cp2

0x4a75,	// (0x00020760) form_field_data_wide_pane_cp2

0x896e,	// (0x00024659) bg_scroll_pane_ParamLimits

0x5d42,	// (0x00021a2d) scroll_handle_pane_ParamLimits

0x5d56,	// (0x00021a41) scroll_sc2_down_pane_ParamLimits

0x5d56,	// (0x00021a41) scroll_sc2_down_pane

0x899f,	// (0x0002468a) scroll_sc2_up_pane_ParamLimits

0x899f,	// (0x0002468a) scroll_sc2_up_pane

0xbbd1,	// (0x000278bc) grid_wheel_folder_pane_g1_ParamLimits

0xbbd1,	// (0x000278bc) grid_wheel_folder_pane_g1

0x5f1b,	// (0x00021c06) clock_nsta_pane_cp2_ParamLimits

0x5f1b,	// (0x00021c06) clock_nsta_pane_cp2

0x91a2,	// (0x00024e8d) listscroll_midp_pane_ParamLimits

0x91ae,	// (0x00024e99) midp_canvas_pane

0x9496,	// (0x00025181) nsta_clock_indic_pane

0x94ca,	// (0x000251b5) listscroll_form_pane_vc

0x94d2,	// (0x000251bd) listscroll_set_pane_vc_ParamLimits

0x94d2,	// (0x000251bd) listscroll_set_pane_vc

0x95cb,	// (0x000252b6) clock_nsta_pane

0x9646,	// (0x00025331) indicator_nsta_pane

0x9926,	// (0x00025611) bg_popup_sub_pane_cp2_ParamLimits

0x993a,	// (0x00025625) find_pane_cp2_ParamLimits

0x993a,	// (0x00025625) find_pane_cp2

0x9950,	// (0x0002563b) grid_toobar_pane_ParamLimits

0x9a30,	// (0x0002571b) list_form_gen_pane_vc_ParamLimits

0x9a30,	// (0x0002571b) list_form_gen_pane_vc

0x9a46,	// (0x00025731) scroll_pane_cp8_vc_ParamLimits

0x9a46,	// (0x00025731) scroll_pane_cp8_vc

0x9ac2,	// (0x000257ad) data_form_wide_pane_vc_ParamLimits

0x9ac2,	// (0x000257ad) data_form_wide_pane_vc

0x9ace,	// (0x000257b9) form_field_data_wide_pane_vc_g1

0x9ad6,	// (0x000257c1) form_field_data_wide_pane_vc_t1_ParamLimits

0x9ad6,	// (0x000257c1) form_field_data_wide_pane_vc_t1

0x84ef,	// (0x000241da) input_focus_pane_cp6_vc_ParamLimits

0x84ef,	// (0x000241da) input_focus_pane_cp6_vc

0x9dfc,	// (0x00025ae7) list_midp_pane_ParamLimits

0x9e08,	// (0x00025af3) scroll_pane_cp16_ParamLimits

0x9e08,	// (0x00025af3) scroll_pane_cp16

0x9e72,	// (0x00025b5d) button_value_adjust_pane_ParamLimits

0x9e72,	// (0x00025b5d) button_value_adjust_pane

0xadef,	// (0x00026ada) button_value_adjust_pane_cp6_ParamLimits

0xadef,	// (0x00026ada) button_value_adjust_pane_cp6

0xaf19,	// (0x00026c04) settings_code_pane_cp_ParamLimits

0xaf19,	// (0x00026c04) settings_code_pane_cp

0x31e3,	// (0x0001eece) cell_touch_pane_g1

0x31e3,	// (0x0001eece) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0002b3c9) cell_touch_pane_g

0xb4fb,	// (0x000271e6) cell_touch_pane_cp_ParamLimits

0xb4fb,	// (0x000271e6) cell_touch_pane_cp

0xb50b,	// (0x000271f6) cell_touch_pane_ParamLimits

0xb50b,	// (0x000271f6) cell_touch_pane

0x31e3,	// (0x0001eece) scroll_sc2_down_pane_g1

0x31e3,	// (0x0001eece) scroll_sc2_up_pane_g1

0x7b82,	// (0x0002386d) bg_set_opt_pane_cp4_vc

0xb51d,	// (0x00027208) list_set_graphic_pane_vc_g1_ParamLimits

0xb51d,	// (0x00027208) list_set_graphic_pane_vc_g1

0xb529,	// (0x00027214) list_set_graphic_pane_vc_g2_ParamLimits

0xb529,	// (0x00027214) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0002b6c5) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0002b6c5) list_set_graphic_pane_vc_g

0xb535,	// (0x00027220) text_primary_small_cp13_vc_ParamLimits

0xb535,	// (0x00027220) text_primary_small_cp13_vc

0xb54d,	// (0x00027238) list_set_graphic_pane_vc_ParamLimits

0xb54d,	// (0x00027238) list_set_graphic_pane_vc

0x7b82,	// (0x0002386d) input_focus_pane_cp2_vc

0x31e3,	// (0x0001eece) setting_code_pane_vc_g1

0x7cad,	// (0x00023998) setting_code_pane_vc_t1

0xb560,	// (0x0002724b) set_text_pane_vc_t1_ParamLimits

0xb560,	// (0x0002724b) set_text_pane_vc_t1

0x7b82,	// (0x0002386d) input_focus_pane_cp1_vc

0xb57c,	// (0x00027267) list_set_text_pane_vc

0x31e3,	// (0x0001eece) setting_text_pane_vc_g1

0x7b82,	// (0x0002386d) bg_set_opt_pane_cp2_vc

0x7ca4,	// (0x0002398f) setting_slider_graphic_pane_vc_g1

0xb586,	// (0x00027271) setting_slider_graphic_pane_vc_t1

0xb596,	// (0x00027281) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0002b6ca) setting_slider_graphic_pane_vc_t

0xb5a6,	// (0x00027291) slider_set_pane_cp_vc

0xb5ae,	// (0x00027299) slider_set_pane_vc_g1

0xb5b7,	// (0x000272a2) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0002b6cf) slider_set_pane_vc_g

0x8547,	// (0x00024232) set_opt_bg_pane_g1_copy1

0x854f,	// (0x0002423a) set_opt_bg_pane_g2_copy1

0xb5e3,	// (0x000272ce) set_opt_bg_pane_g3_copy1

0x855f,	// (0x0002424a) set_opt_bg_pane_g4_copy1

0x8567,	// (0x00024252) set_opt_bg_pane_g5_copy1

0x856f,	// (0x0002425a) set_opt_bg_pane_g6_copy1

0xb5ed,	// (0x000272d8) set_opt_bg_pane_g7_copy1

0xb5f7,	// (0x000272e2) set_opt_bg_pane_g8_copy1

0xb601,	// (0x000272ec) set_opt_bg_pane_g9_copy1

0x7b82,	// (0x0002386d) bg_set_opt_pane_cp_vc

0xb60b,	// (0x000272f6) setting_slider_pane_vc_t1

0xb61a,	// (0x00027305) setting_slider_pane_vc_t2

0xb62a,	// (0x00027315) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0002b6de) setting_slider_pane_vc_t

0xb63a,	// (0x00027325) slider_set_pane_vc

0x6879,	// (0x00022564) volume_set_pane_vc_g1

0x6882,	// (0x0002256d) volume_set_pane_vc_g2

0x688b,	// (0x00022576) volume_set_pane_vc_g3

0x6894,	// (0x0002257f) volume_set_pane_vc_g4

0x689d,	// (0x00022588) volume_set_pane_vc_g5

0x68a6,	// (0x00022591) volume_set_pane_vc_g6

0x68af,	// (0x0002259a) volume_set_pane_vc_g7

0x68b8,	// (0x000225a3) volume_set_pane_vc_g8

0x68c1,	// (0x000225ac) volume_set_pane_vc_g9

0x68ca,	// (0x000225b5) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0002b57c) volume_set_pane_vc_g

0xb642,	// (0x0002732d) volume_set_pane_vc

0xb64a,	// (0x00027335) button_value_adjust_pane_cp1_vc

0xb654,	// (0x0002733f) list_highlight_pane_cp2_vc

0xb65d,	// (0x00027348) list_set_pane_vc_ParamLimits

0xb65d,	// (0x00027348) list_set_pane_vc

0xb6bb,	// (0x000273a6) main_pane_set_vc_t1_ParamLimits

0xb6bb,	// (0x000273a6) main_pane_set_vc_t1

0xb6d0,	// (0x000273bb) main_pane_set_vc_t2_ParamLimits

0xb6d0,	// (0x000273bb) main_pane_set_vc_t2

0xb6e2,	// (0x000273cd) main_pane_set_vc_t3_ParamLimits

0xb6e2,	// (0x000273cd) main_pane_set_vc_t3

0xb6f6,	// (0x000273e1) main_pane_set_vc_t4_ParamLimits

0xb6f6,	// (0x000273e1) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0002b6e5) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0002b6e5) main_pane_set_vc_t

0xb70a,	// (0x000273f5) setting_code_pane_vc_ParamLimits

0xb70a,	// (0x000273f5) setting_code_pane_vc

0xb71b,	// (0x00027406) setting_slider_graphic_pane_vc

0xb71b,	// (0x00027406) setting_slider_pane_vc

0xb71b,	// (0x00027406) setting_text_pane_vc

0xb71b,	// (0x00027406) setting_volume_pane_vc

0xb725,	// (0x00027410) scroll_pane_cp121_vc

0x84c9,	// (0x000241b4) set_content_pane_vc

0xb72d,	// (0x00027418) button_value_adjust_pane_g1

0xb736,	// (0x00027421) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0002b741) button_value_adjust_pane_g

0xb73f,	// (0x0002742a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb73f,	// (0x0002742a) form_field_slider_wide_pane_vc_t1

0xb753,	// (0x0002743e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb753,	// (0x0002743e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0002b746) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002b746) form_field_slider_wide_pane_vc_t

0x7edd,	// (0x00023bc8) input_focus_pane_cp10_vc_ParamLimits

0x7edd,	// (0x00023bc8) input_focus_pane_cp10_vc

0xb781,	// (0x0002746c) slider_cont_pane_cp1_vc_ParamLimits

0xb781,	// (0x0002746c) slider_cont_pane_cp1_vc

0xb793,	// (0x0002747e) slider_form_pane_g1_cp2

0xb5b7,	// (0x000272a2) slider_form_pane_g2_cp2

0xb7c0,	// (0x000274ab) form_field_slider_pane_vc_t3

0xb7ce,	// (0x000274b9) form_field_slider_pane_vc_t4

0xb7dc,	// (0x000274c7) slider_form_pane_vc_ParamLimits

0xb7dc,	// (0x000274c7) slider_form_pane_vc

0xb7e9,	// (0x000274d4) form_field_slider_pane_vc_t1_ParamLimits

0xb7e9,	// (0x000274d4) form_field_slider_pane_vc_t1

0xb753,	// (0x0002743e) form_field_slider_pane_vc_t2_ParamLimits

0xb753,	// (0x0002743e) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0002b758) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002b758) form_field_slider_pane_vc_t

0x7edd,	// (0x00023bc8) input_focus_pane_cp9_vc_ParamLimits

0x7edd,	// (0x00023bc8) input_focus_pane_cp9_vc

0xb805,	// (0x000274f0) slider_cont_pane_vc_ParamLimits

0xb805,	// (0x000274f0) slider_cont_pane_vc

0xb819,	// (0x00027504) list_form_graphic_pane_cp_vc_ParamLimits

0xb819,	// (0x00027504) list_form_graphic_pane_cp_vc

0x9ace,	// (0x000257b9) form_field_popup_wide_pane_vc_g1

0xb82e,	// (0x00027519) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb82e,	// (0x00027519) form_field_popup_wide_pane_vc_t1

0x84ef,	// (0x000241da) input_focus_pane_cp8_vc_ParamLimits

0x84ef,	// (0x000241da) input_focus_pane_cp8_vc

0xb873,	// (0x0002755e) list_form_wide_pane_vc_ParamLimits

0xb873,	// (0x0002755e) list_form_wide_pane_vc

0xb87f,	// (0x0002756a) list_form_graphic_pane_vc_g1

0xb887,	// (0x00027572) list_form_graphic_pane_vc_t1_ParamLimits

0xb887,	// (0x00027572) list_form_graphic_pane_vc_t1

0x7c62,	// (0x0002394d) list_highlight_pane_cp5_vc_ParamLimits

0x7c62,	// (0x0002394d) list_highlight_pane_cp5_vc

0xb8a3,	// (0x0002758e) list_form_graphic_pane_vc_ParamLimits

0xb8a3,	// (0x0002758e) list_form_graphic_pane_vc

0x9ace,	// (0x000257b9) form_field_popup_pane_vc_g1

0xb8b9,	// (0x000275a4) form_field_popup_pane_vc_t1_ParamLimits

0xb8b9,	// (0x000275a4) form_field_popup_pane_vc_t1

0x84ef,	// (0x000241da) input_focus_pane_cp7_vc_ParamLimits

0x84ef,	// (0x000241da) input_focus_pane_cp7_vc

0xb8d0,	// (0x000275bb) list_form_pane_vc_ParamLimits

0xb8d0,	// (0x000275bb) list_form_pane_vc

0xb8dc,	// (0x000275c7) data_form_pane_vc_t1_ParamLimits

0xb8dc,	// (0x000275c7) data_form_pane_vc_t1

0x8547,	// (0x00024232) input_focus_pane_vc_g1

0x854f,	// (0x0002423a) input_focus_pane_vc_g2

0x8557,	// (0x00024242) input_focus_pane_vc_g3

0x855f,	// (0x0002424a) input_focus_pane_vc_g4

0x8567,	// (0x00024252) input_focus_pane_vc_g5

0x856f,	// (0x0002425a) input_focus_pane_vc_g6

0x8577,	// (0x00024262) input_focus_pane_vc_g7

0x857f,	// (0x0002426a) input_focus_pane_vc_g8

0x8587,	// (0x00024272) input_focus_pane_vc_g9

0x31e3,	// (0x0001eece) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002b352) input_focus_pane_vc_g

0x9ac2,	// (0x000257ad) data_form_pane_vc_ParamLimits

0x9ac2,	// (0x000257ad) data_form_pane_vc

0x9ace,	// (0x000257b9) form_field_data_pane_vc_g1

0xb8f7,	// (0x000275e2) form_field_data_pane_vc_t1_ParamLimits

0xb8f7,	// (0x000275e2) form_field_data_pane_vc_t1

0x84ef,	// (0x000241da) input_focus_pane_vc_ParamLimits

0x84ef,	// (0x000241da) input_focus_pane_vc

0xb911,	// (0x000275fc) button_value_adjust_pane_cp3_vc

0xb919,	// (0x00027604) button_value_adjust_pane_cp5_vc

0xb921,	// (0x0002760c) form_field_data_pane_vc_ParamLimits

0xb921,	// (0x0002760c) form_field_data_pane_vc

0xb938,	// (0x00027623) form_field_data_pane_vc_cp2

0xb940,	// (0x0002762b) form_field_data_wide_pane_vc_ParamLimits

0xb940,	// (0x0002762b) form_field_data_wide_pane_vc

0xb956,	// (0x00027641) form_field_data_wide_pane_vc_cp2

0xb95e,	// (0x00027649) form_field_popup_pane_vc_ParamLimits

0xb95e,	// (0x00027649) form_field_popup_pane_vc

0xb975,	// (0x00027660) form_field_popup_wide_pane_vc_ParamLimits

0xb975,	// (0x00027660) form_field_popup_wide_pane_vc

0xb98b,	// (0x00027676) form_field_slider_pane_vc_ParamLimits

0xb98b,	// (0x00027676) form_field_slider_pane_vc

0xb99e,	// (0x00027689) form_field_slider_wide_pane_vc_ParamLimits

0xb99e,	// (0x00027689) form_field_slider_wide_pane_vc

0xb9b1,	// (0x0002769c) grid_touch_1_pane_ParamLimits

0xb9b1,	// (0x0002769c) grid_touch_1_pane

0xb9bd,	// (0x000276a8) grid_touch_2_pane_ParamLimits

0xb9bd,	// (0x000276a8) grid_touch_2_pane

0x9461,	// (0x0002514c) touch_pane_g1_ParamLimits

0x9461,	// (0x0002514c) touch_pane_g1

0xb9d5,	// (0x000276c0) cell_app_pane_cp_wide_ParamLimits

0xb9d5,	// (0x000276c0) cell_app_pane_cp_wide

0xb9e6,	// (0x000276d1) grid_popup_fast_wide_pane_ParamLimits

0xb9e6,	// (0x000276d1) grid_popup_fast_wide_pane

0xb9fa,	// (0x000276e5) scroll_pane_cp19_ParamLimits

0xb9fa,	// (0x000276e5) scroll_pane_cp19

0x7b82,	// (0x0002386d) bg_popup_window_pane_cp20

0xba0e,	// (0x000276f9) listscroll_popup_fast_wide_pane

0xba16,	// (0x00027701) grid_indicator_nsta_pane

0xba28,	// (0x00027713) clock_nsta_pane_g1

0xba31,	// (0x0002771c) clock_nsta_pane_t1

0xba4d,	// (0x00027738) cell_indicator_nsta_pane_ParamLimits

0xba4d,	// (0x00027738) cell_indicator_nsta_pane

0xba82,	// (0x0002776d) cell_indicator_nsta_pane_g1

0xba90,	// (0x0002777b) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0002b769) cell_indicator_nsta_pane_g

0xbaa2,	// (0x0002778d) clock_nsta_pane_cp

0xbaab,	// (0x00027796) indicator_nsta_pane_cp

0xbab5,	// (0x000277a0) nsta_clock_indic_pane_g1

0x7d2b,	// (0x00023a16) grid_indicator_pane

0x8a94,	// (0x0002477f) scroll_pane_cp29

0x5e6a,	// (0x00021b55) indicator_nsta_pane_cp2_ParamLimits

0x5e6a,	// (0x00021b55) indicator_nsta_pane_cp2

0x7c62,	// (0x0002394d) main_apps_wheel_pane

0x9cdd,	// (0x000259c8) form_midp_field_text_pane_ParamLimits

0x9e28,	// (0x00025b13) scroll_bar_cp050_ParamLimits

0xbb0e,	// (0x000277f9) cell_indicator_pane_ParamLimits

0xbb0e,	// (0x000277f9) cell_indicator_pane

0xbb25,	// (0x00027810) cell_indicator_pane_g1

0xbb2f,	// (0x0002781a) grid_wheel_folder_pane_ParamLimits

0xbb2f,	// (0x0002781a) grid_wheel_folder_pane

0xbb45,	// (0x00027830) list_wheel_apps_pane_ParamLimits

0xbb45,	// (0x00027830) list_wheel_apps_pane

0xbb56,	// (0x00027841) main_apps_wheel_pane_g1_ParamLimits

0xbb56,	// (0x00027841) main_apps_wheel_pane_g1

0xbb6a,	// (0x00027855) main_apps_wheel_pane_g2_ParamLimits

0xbb6a,	// (0x00027855) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0002b785) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0002b785) main_apps_wheel_pane_g

0xbb82,	// (0x0002786d) main_apps_wheel_pane_t1_ParamLimits

0xbb82,	// (0x0002786d) main_apps_wheel_pane_t1

0xbba5,	// (0x00027890) list_wheel_apps_pane_g1

0xbbad,	// (0x00027898) list_wheel_apps_pane_g2

0xbbb5,	// (0x000278a0) list_wheel_apps_pane_g3

0xbbbd,	// (0x000278a8) list_wheel_apps_pane_g4

0xbbc7,	// (0x000278b2) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0002b78a) list_wheel_apps_pane_g

0x901a,	// (0x00024d05) navi_icon_text_pane

0x94fa,	// (0x000251e5) aid_fill_nsta

0xbbea,	// (0x000278d5) navi_icon_text_pane_g1

0xbbf6,	// (0x000278e1) navi_icon_text_pane_t1

0x8ead,	// (0x00024b98) list_set_graphic_pane_t1_ParamLimits

0x8ead,	// (0x00024b98) list_set_graphic_pane_t1

0xa593,	// (0x0002627e) popup_midp_note_alarm_window_t6_ParamLimits

0xa593,	// (0x0002627e) popup_midp_note_alarm_window_t6

0xa5a5,	// (0x00026290) popup_midp_note_alarm_window_t7_ParamLimits

0xa5a5,	// (0x00026290) popup_midp_note_alarm_window_t7

0xa5b7,	// (0x000262a2) popup_midp_note_alarm_window_t8_ParamLimits

0xa5b7,	// (0x000262a2) popup_midp_note_alarm_window_t8

0xa5c9,	// (0x000262b4) popup_midp_note_alarm_window_t9_ParamLimits

0xa5c9,	// (0x000262b4) popup_midp_note_alarm_window_t9

0xa5db,	// (0x000262c6) popup_midp_note_alarm_window_t10_ParamLimits

0xa5db,	// (0x000262c6) popup_midp_note_alarm_window_t10

0xa5ed,	// (0x000262d8) popup_midp_note_alarm_window_t11_ParamLimits

0xa5ed,	// (0x000262d8) popup_midp_note_alarm_window_t11

0xa5ff,	// (0x000262ea) scroll_pane_cp17_ParamLimits

0xa5ff,	// (0x000262ea) scroll_pane_cp17

0x6879,	// (0x00022564) volume_small_pane_cp_g1

0x6b6e,	// (0x00022859) volume_small_pane_cp_g2

0x6b77,	// (0x00022862) volume_small_pane_cp_g3

0x6b80,	// (0x0002286b) volume_small_pane_cp_g4

0x6b89,	// (0x00022874) volume_small_pane_cp_g5

0x6b92,	// (0x0002287d) volume_small_pane_cp_g6

0x6b9b,	// (0x00022886) volume_small_pane_cp_g7

0x6ba4,	// (0x0002288f) volume_small_pane_cp_g8

0x6bad,	// (0x00022898) volume_small_pane_cp_g9

0x6bb6,	// (0x000228a1) volume_small_pane_cp_g10

0x9277,	// (0x00024f62) midp_ticker_pane_g1_ParamLimits

0x9283,	// (0x00024f6e) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0002b41e) midp_ticker_pane_g_ParamLimits

0x928f,	// (0x00024f7a) midp_ticker_pane_t1_ParamLimits

0x9510,	// (0x000251fb) aid_fill_nsta_2

0x9e14,	// (0x00025aff) list_form2_midp_pane

0xaf64,	// (0x00026c4f) midp_editing_number_pane_ParamLimits

0xaf73,	// (0x00026c5e) midp_ticker_pane_ParamLimits

0xbc08,	// (0x000278f3) form2_midp_field_pane

0xbc2c,	// (0x00027917) scroll_pane_cp51

0xbc4c,	// (0x00027937) form2_midp_button_pane_ParamLimits

0xbc4c,	// (0x00027937) form2_midp_button_pane

0xbc5e,	// (0x00027949) form2_midp_content_pane_ParamLimits

0xbc5e,	// (0x00027949) form2_midp_content_pane

0xbc78,	// (0x00027963) form2_midp_field_choice_group_pane

0xbc80,	// (0x0002796b) form2_midp_field_pane_g1

0xbc88,	// (0x00027973) form2_midp_field_pane_g2

0xbc90,	// (0x0002797b) form2_midp_field_pane_g3

0xbc98,	// (0x00027983) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0002b7af) form2_midp_field_pane_g

0xbca0,	// (0x0002798b) form2_midp_gauge_slider_pane

0xbca8,	// (0x00027993) form2_midp_gauge_wait_pane

0xbcb0,	// (0x0002799b) form2_midp_image_pane_ParamLimits

0xbcb0,	// (0x0002799b) form2_midp_image_pane

0xbccb,	// (0x000279b6) form2_midp_label_pane_ParamLimits

0xbccb,	// (0x000279b6) form2_midp_label_pane

0xbce4,	// (0x000279cf) form2_midp_label_pane_cp_ParamLimits

0xbce4,	// (0x000279cf) form2_midp_label_pane_cp

0xbd05,	// (0x000279f0) form2_midp_string_pane_ParamLimits

0xbd05,	// (0x000279f0) form2_midp_string_pane

0x5346,	// (0x00021031) form2_midp_text_pane_ParamLimits

0x5346,	// (0x00021031) form2_midp_text_pane

0xbd17,	// (0x00027a02) form2_midp_time_pane

0xbd27,	// (0x00027a12) input_focus_pane_cp51_ParamLimits

0xbd27,	// (0x00027a12) input_focus_pane_cp51

0xbd3f,	// (0x00027a2a) form2_midp_label_pane_t1_ParamLimits

0xbd3f,	// (0x00027a2a) form2_midp_label_pane_t1

0x5361,	// (0x0002104c) form2_mdip_text_pane_t1_ParamLimits

0x5361,	// (0x0002104c) form2_mdip_text_pane_t1

0x537f,	// (0x0002106a) form2_midp_time_pane_t1

0xbd88,	// (0x00027a73) form2_midp_gauge_slider_pane_t1

0xbd9a,	// (0x00027a85) form2_midp_gauge_slider_pane_t2

0xbdac,	// (0x00027a97) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0002b7b8) form2_midp_gauge_slider_pane_t

0xbdbe,	// (0x00027aa9) form2_midp_slider_pane

0xbdca,	// (0x00027ab5) form2_midp_gauge_wait_pane_t1

0xbdd8,	// (0x00027ac3) form2_midp_wait_pane_ParamLimits

0xbdd8,	// (0x00027ac3) form2_midp_wait_pane

0xbe03,	// (0x00027aee) list_single_2graphic_pane_cp4_ParamLimits

0xbe03,	// (0x00027aee) list_single_2graphic_pane_cp4

0x9b36,	// (0x00025821) list_single_midp_graphic_pane_cp_ParamLimits

0x9b36,	// (0x00025821) list_single_midp_graphic_pane_cp

0x7b82,	// (0x0002386d) list_highlight_pane_cp20

0xbe27,	// (0x00027b12) list_single_2graphic_pane_g1_cp4

0xbe2f,	// (0x00027b1a) list_single_2graphic_pane_g2_cp4

0xbe37,	// (0x00027b22) list_single_2graphic_pane_t1_cp4

0x7c62,	// (0x0002394d) list_highlight_pane_cp21

0xbe46,	// (0x00027b31) list_single_midp_graphic_pane_g4_cp

0xbe55,	// (0x00027b40) list_single_midp_graphic_pane_t1_cp

0xbe6a,	// (0x00027b55) form2_mdip_string_pane_t1_ParamLimits

0xbe6a,	// (0x00027b55) form2_mdip_string_pane_t1

0x7b82,	// (0x0002386d) bg_wml_button_pane_cp2

0x31e3,	// (0x0001eece) form2_midp_image_pane_g1

0x4820,	// (0x0002050b) list_double_large_graphic_pane_g5_ParamLimits

0x4820,	// (0x0002050b) list_double_large_graphic_pane_g5

0x91a2,	// (0x00024e8d) midp_form_pane_ParamLimits

0x7c62,	// (0x0002394d) main_apps_wheel_pane_ParamLimits

0x6531,	// (0x0002221c) popup_preview_window_ParamLimits

0x6531,	// (0x0002221c) popup_preview_window

0x66ec,	// (0x000223d7) popup_touch_info_window_ParamLimits

0x66ec,	// (0x000223d7) popup_touch_info_window

0x670a,	// (0x000223f5) popup_touch_menu_window_ParamLimits

0x670a,	// (0x000223f5) popup_touch_menu_window

0x31d9,	// (0x0001eec4) bg_popup_sub_pane_cp6

0xbf63,	// (0x00027c4e) list_touch_menu_pane

0xbf6b,	// (0x00027c56) list_single_touch_menu_pane_ParamLimits

0xbf6b,	// (0x00027c56) list_single_touch_menu_pane

0xbf81,	// (0x00027c6c) list_single_touch_menu_pane_t1

0x7c62,	// (0x0002394d) bg_popup_sub_pane_cp7_ParamLimits

0x7c62,	// (0x0002394d) bg_popup_sub_pane_cp7

0xbf8f,	// (0x00027c7a) heading_sub_pane

0xbf97,	// (0x00027c82) list_touch_info_pane_ParamLimits

0xbf97,	// (0x00027c82) list_touch_info_pane

0xbfa6,	// (0x00027c91) list_single_touch_info_pane_ParamLimits

0xbfa6,	// (0x00027c91) list_single_touch_info_pane

0xbfb8,	// (0x00027ca3) list_single_touch_info_pane_t1

0xbfc6,	// (0x00027cb1) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0002b7c6) list_single_touch_info_pane_t

0x919a,	// (0x00024e85) bg_popup_heading_pane_cp

0xbfd4,	// (0x00027cbf) heading_sub_pane_t1

0x9a5c,	// (0x00025747) bg_popup_preview_window_pane_cp_ParamLimits

0x9a5c,	// (0x00025747) bg_popup_preview_window_pane_cp

0xbf8f,	// (0x00027c7a) heading_preview_pane

0xbf97,	// (0x00027c82) list_preview_pane_ParamLimits

0xbf97,	// (0x00027c82) list_preview_pane

0xbfe2,	// (0x00027ccd) popup_preview_window_g1

0xbfa6,	// (0x00027c91) list_single_preview_pane_ParamLimits

0xbfa6,	// (0x00027c91) list_single_preview_pane

0xbfea,	// (0x00027cd5) list_single_preview_pane_g1

0xbff2,	// (0x00027cdd) list_single_preview_pane_t1

0xbfb8,	// (0x00027ca3) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0002b7cb) list_single_preview_pane_t

0xc000,	// (0x00027ceb) bg_popup_heading_pane_cp2_ParamLimits

0xc000,	// (0x00027ceb) bg_popup_heading_pane_cp2

0xc016,	// (0x00027d01) heading_preview_pane_g1

0xc01e,	// (0x00027d09) heading_preview_pane_t1_ParamLimits

0xc01e,	// (0x00027d09) heading_preview_pane_t1

0x7d4e,	// (0x00023a39) soft_indicator_pane_t1_ParamLimits

0x8462,	// (0x0002414d) scroll_pane_ParamLimits

0x898d,	// (0x00024678) scroll_sc2_left_pane

0x8996,	// (0x00024681) scroll_sc2_right_pane

0x89b5,	// (0x000246a0) scroll_bg_pane_g1_ParamLimits

0x89ca,	// (0x000246b5) scroll_bg_pane_g2_ParamLimits

0x89e2,	// (0x000246cd) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002b3a9) scroll_bg_pane_g_ParamLimits

0x89b5,	// (0x000246a0) scroll_handle_pane_g1_ParamLimits

0x8a04,	// (0x000246ef) scroll_handle_pane_g2_ParamLimits

0x89e2,	// (0x000246cd) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002b3b0) scroll_handle_pane_g_ParamLimits

0x61b0,	// (0x00021e9b) popup_choice_list_window_ParamLimits

0x61b0,	// (0x00021e9b) popup_choice_list_window

0x9932,	// (0x0002561d) choice_list_pane

0x99b4,	// (0x0002569f) cell_toolbar_pane_t1

0x99dc,	// (0x000256c7) toolbar_button_pane_ParamLimits

0xaac5,	// (0x000267b0) ai_gene_pane_1_t2_ParamLimits

0xaac5,	// (0x000267b0) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0002b5d8) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0002b5d8) ai_gene_pane_1_t

0xc03b,	// (0x00027d26) scroll_sc2_left_pane_g1

0xc03b,	// (0x00027d26) scroll_sc2_right_pane_g1

0x94be,	// (0x000251a9) bg_popup_sub_pane_cp10

0xc045,	// (0x00027d30) list_choice_list_pane

0xc05e,	// (0x00027d49) list_single_choice_list_pane_ParamLimits

0xc05e,	// (0x00027d49) list_single_choice_list_pane

0xc071,	// (0x00027d5c) list_single_choice_list_pane_g1

0x8693,	// (0x0002437e) list_single_choice_list_pane_t1_ParamLimits

0x8693,	// (0x0002437e) list_single_choice_list_pane_t1

0xc079,	// (0x00027d64) choice_list_pane_g1

0xc081,	// (0x00027d6c) choice_list_pane_t1

0x31d9,	// (0x0001eec4) input_focus_pane_cp11

0x886a,	// (0x00024555) title_pane_stacon_g2_ParamLimits

0x886a,	// (0x00024555) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002b38f) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002b38f) title_pane_stacon_g

0x919a,	// (0x00024e85) cursor_press_pane

0x625c,	// (0x00021f47) popup_fep_hwr_window_ParamLimits

0x625c,	// (0x00021f47) popup_fep_hwr_window

0x62d6,	// (0x00021fc1) popup_fep_vkb_window_ParamLimits

0x62d6,	// (0x00021fc1) popup_fep_vkb_window

0xc08f,	// (0x00027d7a) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0002b7f4) fep_vkb_side_pane_g_ParamLimits

0x6bf8,	// (0x000228e3) fep_hwr_candidate_pane_ParamLimits

0x6bf8,	// (0x000228e3) fep_hwr_candidate_pane

0x6c22,	// (0x0002290d) fep_hwr_side_pane_ParamLimits

0x6c22,	// (0x0002290d) fep_hwr_side_pane

0x6c42,	// (0x0002292d) fep_hwr_top_pane_ParamLimits

0x6c42,	// (0x0002292d) fep_hwr_top_pane

0x6c5a,	// (0x00022945) fep_hwr_write_pane_ParamLimits

0x6c5a,	// (0x00022945) fep_hwr_write_pane

0xfb09,	// (0x0002b7f4) fep_vkb_side_pane_g

0xc097,	// (0x00027d82) fep_hwr_top_pane_g1

0xc0a9,	// (0x00027d94) fep_hwr_top_pane_g2

0x6c86,	// (0x00022971) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0002b7d0) fep_hwr_top_pane_g

0x6c9b,	// (0x00022986) fep_hwr_top_text_pane

0x8b84,	// (0x0002486f) fep_hwr_top_text_pane_g1

0xc0df,	// (0x00027dca) fep_hwr_top_text_pane_t1

0x6d91,	// (0x00022a7c) fep_hwr_candidate_pane_g1

0xc332,	// (0x0002801d) fep_vkb_keypad_pane_g3_ParamLimits

0xc332,	// (0x0002801d) fep_vkb_keypad_pane_g3

0xc35a,	// (0x00028045) fep_vkb_keypad_pane_g4_ParamLimits

0xc35a,	// (0x00028045) fep_vkb_keypad_pane_g4

0xc3c9,	// (0x000280b4) fep_vkb_bottom_pane_g2_ParamLimits

0xc3c9,	// (0x000280b4) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0002b7fb) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0002b7fb) fep_vkb_bottom_pane_g

0xc03b,	// (0x00027d26) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0002b805) cell_vkb_side_pane_g

0xc454,	// (0x0002813f) cell_vkb_side_pane_t1

0xc462,	// (0x0002814d) cell_vkb_side_pane_t1_copy1

0xc03b,	// (0x00027d26) bg_fep_vkb_candidate_pane_g2

0xc58e,	// (0x00028279) cell_vkb_candidate_pane_ParamLimits

0xc0ed,	// (0x00027dd8) aid_size_cell_vkb_ParamLimits

0xc0ed,	// (0x00027dd8) aid_size_cell_vkb

0xc58e,	// (0x00028279) cell_vkb_candidate_pane

0x6dab,	// (0x00022a96) bg_popup_fep_shadow_pane_g1

0xc17b,	// (0x00027e66) fep_vkb_bottom_pane_ParamLimits

0xc17b,	// (0x00027e66) fep_vkb_bottom_pane

0xc1b1,	// (0x00027e9c) fep_vkb_candidate_pane_ParamLimits

0xc1b1,	// (0x00027e9c) fep_vkb_candidate_pane

0xc1cd,	// (0x00027eb8) fep_vkb_keypad_pane_ParamLimits

0xc1cd,	// (0x00027eb8) fep_vkb_keypad_pane

0xc213,	// (0x00027efe) fep_vkb_side_pane_ParamLimits

0xc213,	// (0x00027efe) fep_vkb_side_pane

0xc24f,	// (0x00027f3a) fep_vkb_top_pane_ParamLimits

0xc24f,	// (0x00027f3a) fep_vkb_top_pane

0xc28b,	// (0x00027f76) fep_vkb_top_pane_g1_ParamLimits

0xc28b,	// (0x00027f76) fep_vkb_top_pane_g1

0xc29a,	// (0x00027f85) fep_vkb_top_pane_g2_ParamLimits

0xc29a,	// (0x00027f85) fep_vkb_top_pane_g2

0xc2a9,	// (0x00027f94) fep_vkb_top_pane_g3_ParamLimits

0xc2a9,	// (0x00027f94) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0002b7eb) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0002b7eb) fep_vkb_top_pane_g

0xc2c7,	// (0x00027fb2) fep_vkb_top_text_pane_ParamLimits

0xc2c7,	// (0x00027fb2) fep_vkb_top_text_pane

0xc2d8,	// (0x00027fc3) fep_vkb_side_pane_g1_ParamLimits

0xc2d8,	// (0x00027fc3) fep_vkb_side_pane_g1

0xc321,	// (0x0002800c) grid_vkb_side_pane_ParamLimits

0xc321,	// (0x0002800c) grid_vkb_side_pane

0x6db3,	// (0x00022a9e) bg_popup_fep_shadow_pane_g2

0x6dbc,	// (0x00022aa7) bg_popup_fep_shadow_pane_g3

0x6dc4,	// (0x00022aaf) bg_popup_fep_shadow_pane_g4

0x6dcd,	// (0x00022ab8) bg_popup_fep_shadow_pane_g5

0x6dd7,	// (0x00022ac2) bg_popup_fep_shadow_pane_g6

0x6ddf,	// (0x00022aca) bg_popup_fep_shadow_pane_g7

0x8567,	// (0x00024252) bg_popup_fep_shadow_pane_g8

0xc378,	// (0x00028063) grid_vkb_keypad_number_pane_ParamLimits

0xc378,	// (0x00028063) grid_vkb_keypad_number_pane

0xc388,	// (0x00028073) grid_vkb_keypad_pane_ParamLimits

0xc388,	// (0x00028073) grid_vkb_keypad_pane

0xc3ae,	// (0x00028099) fep_vkb_bottom_pane_g1_ParamLimits

0xc3ae,	// (0x00028099) fep_vkb_bottom_pane_g1

0xc3d7,	// (0x000280c2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3d7,	// (0x000280c2) grid_vkb_keypad_bottom_left_pane

0xc3ec,	// (0x000280d7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3ec,	// (0x000280d7) grid_vkb_keypad_bottom_right_pane

0xc401,	// (0x000280ec) fep_vkb_top_text_pane_g1

0xc41c,	// (0x00028107) fep_vkb_top_text_pane_t1

0xc431,	// (0x0002811c) cell_vkb_side_pane_ParamLimits

0xc431,	// (0x0002811c) cell_vkb_side_pane

0xc03b,	// (0x00027d26) cell_vkb_side_pane_g1

0xc470,	// (0x0002815b) cell_vkb_keypad_pane_ParamLimits

0xc470,	// (0x0002815b) cell_vkb_keypad_pane

0xc4e5,	// (0x000281d0) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0002b818) bg_popup_fep_shadow_pane_g

0xc03b,	// (0x00027d26) cell_hwr_side_pane_g1

0xc03b,	// (0x00027d26) cell_hwr_side_pane_g2

0xc4ef,	// (0x000281da) cell_vkb_keypad_pane_t1

0xc4fd,	// (0x000281e8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4fd,	// (0x000281e8) cell_vkb_keypad_bottom_left_pane

0xc51a,	// (0x00028205) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc51a,	// (0x00028205) cell_vkb_keypad_bottom_right_pane

0xc03b,	// (0x00027d26) cell_vkb_keypad_bottom_left_pane_g1

0xc03b,	// (0x00027d26) cell_vkb_keypad_bottom_right_pane_g1

0xc553,	// (0x0002823e) cell_vkb_keypad_number_pane_ParamLimits

0xc553,	// (0x0002823e) cell_vkb_keypad_number_pane

0xc572,	// (0x0002825d) cell_vkb_keypad_number_pane_g1

0xc57c,	// (0x00028267) cell_vkb_keypad_number_pane_g2

0xc585,	// (0x00028270) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0002b80a) cell_vkb_keypad_number_pane_g

0xc4ef,	// (0x000281da) cell_vkb_keypad_number_pane_t1

0xc5a9,	// (0x00028294) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x0002b805) cell_hwr_side_pane_g

0xc5c2,	// (0x000282ad) cell_hwr_side_pane_t1

0x6df1,	// (0x00022adc) cell_hwr_side_pane_t1_copy1

0xc2b9,	// (0x00027fa4) cell_hwr_candidate_pane_g1

0x6dff,	// (0x00022aea) cell_hwr_candidate_pane_t1

0xc03b,	// (0x00027d26) cell_vkb_candidate_pane_g2

0xc606,	// (0x000282f1) cell_vkb_candidate_pane_t1

0x6bbf,	// (0x000228aa) bg_popup_fep_shadow_pane_ParamLimits

0x6bbf,	// (0x000228aa) bg_popup_fep_shadow_pane

0x1fd6,	// (0x0001dcc1) bg_fep_hwr_top_pane_g4

0xc0bb,	// (0x00027da6) bg_hwr_side_pane_g1_ParamLimits

0xc0bb,	// (0x00027da6) bg_hwr_side_pane_g1

0x6cd7,	// (0x000229c2) cell_hwr_side_pane_ParamLimits

0x6cd7,	// (0x000229c2) cell_hwr_side_pane

0x6d12,	// (0x000229fd) fep_hwr_write_pane_g1_ParamLimits

0x6d12,	// (0x000229fd) fep_hwr_write_pane_g1

0x6d1f,	// (0x00022a0a) fep_hwr_write_pane_g2_ParamLimits

0x6d1f,	// (0x00022a0a) fep_hwr_write_pane_g2

0x6d2c,	// (0x00022a17) fep_hwr_write_pane_g3_ParamLimits

0x6d2c,	// (0x00022a17) fep_hwr_write_pane_g3

0x6d3a,	// (0x00022a25) fep_hwr_write_pane_g4_ParamLimits

0x6d3a,	// (0x00022a25) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0002b7d7) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0002b7d7) fep_hwr_write_pane_g

0x1fd6,	// (0x0001dcc1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1fd6,	// (0x0001dcc1) bg_fep_hwr_candidate_pane_g2

0x6d4f,	// (0x00022a3a) cell_hwr_candidate_pane_ParamLimits

0x6d4f,	// (0x00022a3a) cell_hwr_candidate_pane

0x6d91,	// (0x00022a7c) fep_hwr_candidate_pane_g1_ParamLimits

0xc11b,	// (0x00027e06) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc11b,	// (0x00027e06) bg_popup_fep_shadow_pane_cp2

0xc2b9,	// (0x00027fa4) fep_vkb_top_pane_g4_ParamLimits

0xc2b9,	// (0x00027fa4) fep_vkb_top_pane_g4

0xc2ff,	// (0x00027fea) fep_vkb_side_pane_g2_ParamLimits

0xc2ff,	// (0x00027fea) fep_vkb_side_pane_g2

0x4963,	// (0x0002064e) list_setting_pane_t4_ParamLimits

0x4963,	// (0x0002064e) list_setting_pane_t4

0x49fd,	// (0x000206e8) list_setting_number_pane_t5_ParamLimits

0x49fd,	// (0x000206e8) list_setting_number_pane_t5

0x8bcb,	// (0x000248b6) list_double_heading_pane_cp2_ParamLimits

0x8bcb,	// (0x000248b6) list_double_heading_pane_cp2

0x84fd,	// (0x000241e8) list_double_heading_pane_g1_cp2_ParamLimits

0x84fd,	// (0x000241e8) list_double_heading_pane_g1_cp2

0x8509,	// (0x000241f4) list_double_heading_pane_g2_cp2_ParamLimits

0x8509,	// (0x000241f4) list_double_heading_pane_g2_cp2

0xc614,	// (0x000282ff) list_double_heading_pane_t1_cp2_ParamLimits

0xc614,	// (0x000282ff) list_double_heading_pane_t1_cp2

0xc62a,	// (0x00028315) list_double_heading_pane_t2_cp2_ParamLimits

0xc62a,	// (0x00028315) list_double_heading_pane_t2_cp2

0x31d1,	// (0x0001eebc) aid_value_unit2

0x59fa,	// (0x000216e5) popup_preview_fixed_window

0x7eeb,	// (0x00023bd6) bg_popup_preview_window_pane_cp02

0xc63c,	// (0x00028327) list_preview_fixed_pane

0xc682,	// (0x0002836d) list_empty_pane_fp_ParamLimits

0xc682,	// (0x0002836d) list_empty_pane_fp

0xc682,	// (0x0002836d) list_single_cale_day_pane_fp_ParamLimits

0xc682,	// (0x0002836d) list_single_cale_day_pane_fp

0xc682,	// (0x0002836d) list_single_graphic_heading_pane_fp_ParamLimits

0xc682,	// (0x0002836d) list_single_graphic_heading_pane_fp

0xc682,	// (0x0002836d) list_single_graphic_pane_fp_ParamLimits

0xc682,	// (0x0002836d) list_single_graphic_pane_fp

0xc682,	// (0x0002836d) list_single_heading_pane_fp_ParamLimits

0xc682,	// (0x0002836d) list_single_heading_pane_fp

0xc682,	// (0x0002836d) list_single_pane_fp_ParamLimits

0xc682,	// (0x0002836d) list_single_pane_fp

0xc697,	// (0x00028382) list_single_pane_fp_g1_ParamLimits

0xc697,	// (0x00028382) list_single_pane_fp_g1

0x5392,	// (0x0002107d) list_single_pane_fp_g2_ParamLimits

0x5392,	// (0x0002107d) list_single_pane_fp_g2

0x539e,	// (0x00021089) list_single_pane_fp_g3_ParamLimits

0x539e,	// (0x00021089) list_single_pane_fp_g3

0xc6a3,	// (0x0002838e) list_single_pane_fp_g4_ParamLimits

0xc6a3,	// (0x0002838e) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0002b839) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0002b839) list_single_pane_fp_g

0x53b2,	// (0x0002109d) list_single_pane_fp_t1_ParamLimits

0x53b2,	// (0x0002109d) list_single_pane_fp_t1

0x53c9,	// (0x000210b4) list_single_graphic_pane_fp_g1_ParamLimits

0x53c9,	// (0x000210b4) list_single_graphic_pane_fp_g1

0xc697,	// (0x00028382) list_single_graphic_pane_fp_g2_ParamLimits

0xc697,	// (0x00028382) list_single_graphic_pane_fp_g2

0x5392,	// (0x0002107d) list_single_graphic_pane_fp_g3_ParamLimits

0x5392,	// (0x0002107d) list_single_graphic_pane_fp_g3

0x539e,	// (0x00021089) list_single_graphic_pane_fp_g4_ParamLimits

0x539e,	// (0x00021089) list_single_graphic_pane_fp_g4

0xc6a3,	// (0x0002838e) list_single_graphic_pane_fp_g5_ParamLimits

0xc6a3,	// (0x0002838e) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0002b842) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0002b842) list_single_graphic_pane_fp_g

0x53d5,	// (0x000210c0) list_single_graphic_pane_fp_t1_ParamLimits

0x53d5,	// (0x000210c0) list_single_graphic_pane_fp_t1

0x53c9,	// (0x000210b4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x53c9,	// (0x000210b4) list_single_graphic_heading_pane_fp_g1

0xc697,	// (0x00028382) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc697,	// (0x00028382) list_single_graphic_heading_pane_fp_g2

0x5392,	// (0x0002107d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5392,	// (0x0002107d) list_single_graphic_heading_pane_fp_g3

0x539e,	// (0x00021089) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x539e,	// (0x00021089) list_single_graphic_heading_pane_fp_g4

0xc6a3,	// (0x0002838e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6a3,	// (0x0002838e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002b842) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002b842) list_single_graphic_heading_pane_fp_g

0x53eb,	// (0x000210d6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x53eb,	// (0x000210d6) list_single_graphic_heading_pane_fp_t1

0x5401,	// (0x000210ec) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5401,	// (0x000210ec) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0002b84d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0002b84d) list_single_graphic_heading_pane_fp_t

0x5413,	// (0x000210fe) list_single_cale_day_pane_fp_g1_ParamLimits

0x5413,	// (0x000210fe) list_single_cale_day_pane_fp_g1

0xc6af,	// (0x0002839a) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6af,	// (0x0002839a) list_single_cale_day_pane_fp_g2

0x544b,	// (0x00021136) list_single_cale_day_pane_fp_g3_ParamLimits

0x544b,	// (0x00021136) list_single_cale_day_pane_fp_g3

0x5473,	// (0x0002115e) list_single_cale_day_pane_fp_g4_ParamLimits

0x5473,	// (0x0002115e) list_single_cale_day_pane_fp_g4

0x5497,	// (0x00021182) list_single_cale_day_pane_fp_g5_ParamLimits

0x5497,	// (0x00021182) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0002b852) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0002b852) list_single_cale_day_pane_fp_g

0x54bb,	// (0x000211a6) list_single_cale_day_pane_fp_t1_ParamLimits

0x54bb,	// (0x000211a6) list_single_cale_day_pane_fp_t1

0x54e1,	// (0x000211cc) list_single_cale_day_pane_fp_t2_ParamLimits

0x54e1,	// (0x000211cc) list_single_cale_day_pane_fp_t2

0x54fa,	// (0x000211e5) list_single_cale_day_pane_fp_t3_ParamLimits

0x54fa,	// (0x000211e5) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0002b85d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0002b85d) list_single_cale_day_pane_fp_t

0xc697,	// (0x00028382) list_empty_pane_fp_g1_ParamLimits

0xc697,	// (0x00028382) list_empty_pane_fp_g1

0x5513,	// (0x000211fe) list_empty_pane_fp_t1

0x5521,	// (0x0002120c) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0002b864) list_empty_pane_fp_t

0xc697,	// (0x00028382) list_single_heading_pane_fp_g1_ParamLimits

0xc697,	// (0x00028382) list_single_heading_pane_fp_g1

0x5392,	// (0x0002107d) list_single_heading_pane_fp_g2_ParamLimits

0x5392,	// (0x0002107d) list_single_heading_pane_fp_g2

0x539e,	// (0x00021089) list_single_heading_pane_fp_g3_ParamLimits

0x539e,	// (0x00021089) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0002b869) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002b869) list_single_heading_pane_fp_g

0x552f,	// (0x0002121a) list_single_heading_pane_fp_t1_ParamLimits

0x552f,	// (0x0002121a) list_single_heading_pane_fp_t1

0x5541,	// (0x0002122c) list_single_heading_pane_fp_t2_ParamLimits

0x5541,	// (0x0002122c) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0002b870) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0002b870) list_single_heading_pane_fp_t

0x8701,	// (0x000243ec) aid_size_cell_fast

0x7e5b,	// (0x00023b46) soft_indicator_pane_cp1_t1

0x873e,	// (0x00024429) cell_app_pane_cp2_ParamLimits

0x873e,	// (0x00024429) cell_app_pane_cp2

0x6be1,	// (0x000228cc) fep_hwr_candidate_drop_down_list_pane

0x1fe4,	// (0x0001dccf) fep_hwr_candidate_pane_g3_ParamLimits

0x1fe4,	// (0x0001dccf) fep_hwr_candidate_pane_g3

0x1ff1,	// (0x0001dcdc) fep_hwr_candidate_pane_g4_ParamLimits

0x1ff1,	// (0x0001dcdc) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0002b7e4) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0002b7e4) fep_hwr_candidate_pane_g

0xc1a0,	// (0x00027e8b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1a0,	// (0x00027e8b) fep_vkb_candidate_drop_down_list_pane

0xc5b1,	// (0x0002829c) fep_vkb_candidate_pane_g3

0xc5b9,	// (0x000282a4) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0002b811) fep_vkb_candidate_pane_g

0xc2b9,	// (0x00027fa4) cell_hwr_candidate_pane_g1_ParamLimits

0xc6d9,	// (0x000283c4) cell_hwr_candidate_pane_g3_ParamLimits

0xc6d9,	// (0x000283c4) cell_hwr_candidate_pane_g3

0xc6fa,	// (0x000283e5) cell_hwr_candidate_pane_g4_ParamLimits

0xc6fa,	// (0x000283e5) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0002b82b) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0002b82b) cell_hwr_candidate_pane_g

0xc5d0,	// (0x000282bb) cell_vkb_candidate_pane_g3_ParamLimits

0xc5d0,	// (0x000282bb) cell_vkb_candidate_pane_g3

0xc5eb,	// (0x000282d6) cell_vkb_candidate_pane_g4_ParamLimits

0xc5eb,	// (0x000282d6) cell_vkb_candidate_pane_g4

0xc6bb,	// (0x000283a6) cell_app_pane_cp2_g1_ParamLimits

0xc6bb,	// (0x000283a6) cell_app_pane_cp2_g1

0xc71b,	// (0x00028406) cell_app_pane_cp2_g2_ParamLimits

0xc71b,	// (0x00028406) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0002b875) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0002b875) cell_app_pane_cp2_g

0xc727,	// (0x00028412) cell_app_pane_cp2_t1_ParamLimits

0xc727,	// (0x00028412) cell_app_pane_cp2_t1

0x84ef,	// (0x000241da) grid_highlight_pane_cp1_ParamLimits

0x84ef,	// (0x000241da) grid_highlight_pane_cp1

0x6e1d,	// (0x00022b08) cell_hwr_candidate_pane_cp1_ParamLimits

0x6e1d,	// (0x00022b08) cell_hwr_candidate_pane_cp1

0xc2b9,	// (0x00027fa4) fep_hwr_candidate_drop_down_list_pane_g1

0xc739,	// (0x00028424) fep_hwr_candidate_drop_down_list_pane_g2

0xc746,	// (0x00028431) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002b87a) fep_hwr_candidate_drop_down_list_pane_g

0x6e3c,	// (0x00022b27) fep_hwr_candidate_drop_down_list_scroll_pane

0x6e45,	// (0x00022b30) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6e45,	// (0x00022b30) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6e52,	// (0x00022b3d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6e52,	// (0x00022b3d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6e5f,	// (0x00022b4a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6e5f,	// (0x00022b4a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5d0,	// (0x000282bb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5d0,	// (0x000282bb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5eb,	// (0x000282d6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5eb,	// (0x000282d6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6e6c,	// (0x00022b57) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6e6c,	// (0x00022b57) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6e87,	// (0x00022b72) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6e87,	// (0x00022b72) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6ea2,	// (0x00022b8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6ea2,	// (0x00022b8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0002b881) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0002b881) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc753,	// (0x0002843e) cell_vkb_candidate_pane_cp1_ParamLimits

0xc753,	// (0x0002843e) cell_vkb_candidate_pane_cp1

0xc2b9,	// (0x00027fa4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2b9,	// (0x00027fa4) fep_vkb_candidate_drop_down_list_pane_g1

0xc739,	// (0x00028424) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc739,	// (0x00028424) fep_vkb_candidate_drop_down_list_pane_g2

0xc746,	// (0x00028431) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc746,	// (0x00028431) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002b87a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x0002b87a) fep_vkb_candidate_drop_down_list_pane_g

0xc773,	// (0x0002845e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc773,	// (0x0002845e) fep_vkb_candidate_drop_down_list_scroll_pane

0xc780,	// (0x0002846b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc780,	// (0x0002846b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc78d,	// (0x00028478) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc78d,	// (0x00028478) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc799,	// (0x00028484) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc799,	// (0x00028484) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc6d9,	// (0x000283c4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6d9,	// (0x000283c4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc6fa,	// (0x000283e5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6fa,	// (0x000283e5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7a5,	// (0x00028490) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7a5,	// (0x00028490) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7c6,	// (0x000284b1) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7c6,	// (0x000284b1) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7e7,	// (0x000284d2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7e7,	// (0x000284d2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0002b892) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0002b892) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b8c,	// (0x00023877) title_pane_g1_ParamLimits

0x7b99,	// (0x00023884) title_pane_g2_ParamLimits

0xf529,	// (0x0002b214) title_pane_g_ParamLimits

0x8b74,	// (0x0002485f) aid_call2_pane

0x8b7c,	// (0x00024867) aid_call_pane

0x8b84,	// (0x0002486f) popup_clock_analogue_window_g1

0x8b84,	// (0x0002486f) popup_clock_analogue_window_g2

0x5d6b,	// (0x00021a56) popup_clock_analogue_window_g3

0x5d74,	// (0x00021a5f) popup_clock_analogue_window_g4

0x31e3,	// (0x0001eece) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002b3be) popup_clock_analogue_window_g

0x5d7c,	// (0x00021a67) popup_clock_analogue_window_t1

0x5d8a,	// (0x00021a75) clock_digital_number_pane_ParamLimits

0x5d8a,	// (0x00021a75) clock_digital_number_pane

0x5d96,	// (0x00021a81) clock_digital_number_pane_cp02_ParamLimits

0x5d96,	// (0x00021a81) clock_digital_number_pane_cp02

0x5da2,	// (0x00021a8d) clock_digital_number_pane_cp03_ParamLimits

0x5da2,	// (0x00021a8d) clock_digital_number_pane_cp03

0x5dae,	// (0x00021a99) clock_digital_number_pane_cp04_ParamLimits

0x5dae,	// (0x00021a99) clock_digital_number_pane_cp04

0x5dba,	// (0x00021aa5) clock_digital_separator_pane_ParamLimits

0x5dba,	// (0x00021aa5) clock_digital_separator_pane

0x5dc6,	// (0x00021ab1) popup_clock_digital_window_t1_ParamLimits

0x5dc6,	// (0x00021ab1) popup_clock_digital_window_t1

0x31e3,	// (0x0001eece) clock_digital_number_pane_g1

0x31e3,	// (0x0001eece) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0002b3c9) clock_digital_number_pane_g

0x31e3,	// (0x0001eece) clock_digital_separator_pane_g1

0x31e3,	// (0x0001eece) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0002b3c9) clock_digital_separator_pane_g

0x94fa,	// (0x000251e5) aid_fill_nsta_ParamLimits

0x9646,	// (0x00025331) indicator_nsta_pane_ParamLimits

0x97bf,	// (0x000254aa) popup_clock_analogue_window

0x97bf,	// (0x000254aa) popup_clock_digital_window

0xba16,	// (0x00027701) grid_indicator_nsta_pane_ParamLimits

0xba3f,	// (0x0002772a) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0002b764) clock_nsta_pane_t

0x5d2f,	// (0x00021a1a) aid_size_max_handle

0x5d39,	// (0x00021a24) aid_size_min_handle

0x919a,	// (0x00024e85) editor_scroll_pane

0xc802,	// (0x000284ed) ex_editor_pane

0x866f,	// (0x0002435a) scroll_pane_cp13

0x848e,	// (0x00024179) scroll_pane_cp14

0x8bb3,	// (0x0002489e) scroll_pane_cp36

0x8bdf,	// (0x000248ca) list_single_graphic_hl_pane_cp2_ParamLimits

0x8bdf,	// (0x000248ca) list_single_graphic_hl_pane_cp2

0xafc5,	// (0x00026cb0) list_single_graphic_hl_pane_ParamLimits

0xafc5,	// (0x00026cb0) list_single_graphic_hl_pane

0x5557,	// (0x00021242) aid_size_min_hl_cp1

0xc80a,	// (0x000284f5) list_highlight_pane_cp34_ParamLimits

0xc80a,	// (0x000284f5) list_highlight_pane_cp34

0xc81b,	// (0x00028506) list_single_graphic_hl_pane_g1_ParamLimits

0xc81b,	// (0x00028506) list_single_graphic_hl_pane_g1

0x5560,	// (0x0002124b) list_single_graphic_hl_pane_g2_ParamLimits

0x5560,	// (0x0002124b) list_single_graphic_hl_pane_g2

0x5560,	// (0x0002124b) list_single_graphic_hl_pane_g3_ParamLimits

0x5560,	// (0x0002124b) list_single_graphic_hl_pane_g3

0x556c,	// (0x00021257) list_single_graphic_hl_pane_g4_ParamLimits

0x556c,	// (0x00021257) list_single_graphic_hl_pane_g4

0x5578,	// (0x00021263) list_single_graphic_hl_pane_g5_ParamLimits

0x5578,	// (0x00021263) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0002b8a3) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0002b8a3) list_single_graphic_hl_pane_g

0x558c,	// (0x00021277) list_single_graphic_hl_pane_t1_ParamLimits

0x558c,	// (0x00021277) list_single_graphic_hl_pane_t1

0xc828,	// (0x00028513) aid_size_min_hl_cp2

0xc831,	// (0x0002851c) list_highlight_pane_cp34_cp2_ParamLimits

0xc831,	// (0x0002851c) list_highlight_pane_cp34_cp2

0xc81b,	// (0x00028506) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc81b,	// (0x00028506) list_single_graphic_hl_pane_g1_cp2

0xc83e,	// (0x00028529) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc83e,	// (0x00028529) list_single_graphic_hl_pane_g2_cp2

0xc84a,	// (0x00028535) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc84a,	// (0x00028535) list_single_graphic_hl_pane_g3_cp2

0xc858,	// (0x00028543) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc858,	// (0x00028543) list_single_graphic_hl_pane_g4_cp2

0xc864,	// (0x0002854f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc864,	// (0x0002854f) list_single_graphic_hl_pane_g5_cp2

0x607a,	// (0x00021d65) control_pane_g4_ParamLimits

0x607a,	// (0x00021d65) control_pane_g4

0x94be,	// (0x000251a9) bg_popup_sub_pane_cp10_ParamLimits

0xc045,	// (0x00027d30) list_choice_list_pane_ParamLimits

0xc054,	// (0x00027d3f) scroll_pane_cp23

0x7eeb,	// (0x00023bd6) bg_popup_preview_window_pane_cp02_ParamLimits

0xc63c,	// (0x00028327) list_preview_fixed_pane_ParamLimits

0xc652,	// (0x0002833d) list_preview_fixed_pane_cp_ParamLimits

0xc652,	// (0x0002833d) list_preview_fixed_pane_cp

0xc65e,	// (0x00028349) popup_preview_fixed_window_g1_ParamLimits

0xc65e,	// (0x00028349) popup_preview_fixed_window_g1

0xc66a,	// (0x00028355) popup_preview_fixed_window_g2_ParamLimits

0xc66a,	// (0x00028355) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0002b832) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0002b832) popup_preview_fixed_window_g

0x5ca3,	// (0x0002198e) aid_navi_side_left_pane_ParamLimits

0x5cb8,	// (0x000219a3) aid_navi_side_right_pane_ParamLimits

0x5cd0,	// (0x000219bb) navi_icon_pane_stacon_ParamLimits

0x5ce4,	// (0x000219cf) navi_navi_pane_stacon_ParamLimits

0x5cd0,	// (0x000219bb) navi_text_pane_stacon_ParamLimits

0x31d9,	// (0x0001eec4) main_text_info_pane

0xc88e,	// (0x00028579) listscroll_text_info_pane

0xc896,	// (0x00028581) list_text_info_pane_ParamLimits

0xc896,	// (0x00028581) list_text_info_pane

0xc8a5,	// (0x00028590) scroll_pane_cp24_ParamLimits

0xc8a5,	// (0x00028590) scroll_pane_cp24

0xc8c3,	// (0x000285ae) list_text_info_pane_t1_ParamLimits

0xc8c3,	// (0x000285ae) list_text_info_pane_t1

0x61ce,	// (0x00021eb9) popup_fast_swap2_window_ParamLimits

0x61ce,	// (0x00021eb9) popup_fast_swap2_window

0xc8f4,	// (0x000285df) aid_size_cell_fast2

0x31d9,	// (0x0001eec4) bg_popup_window_pane_cp17

0x9e48,	// (0x00025b33) heading_pane_cp2

0x9e50,	// (0x00025b3b) listscroll_fast2_pane

0xc8fe,	// (0x000285e9) grid_fast2_pane

0xc908,	// (0x000285f3) listscroll_fast2_pane_g1

0xc910,	// (0x000285fb) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0002b8ae) listscroll_fast2_pane_g

0x866f,	// (0x0002435a) scroll_pane_cp26

0xc91a,	// (0x00028605) cell_fast2_pane_ParamLimits

0xc91a,	// (0x00028605) cell_fast2_pane

0xc92f,	// (0x0002861a) cell_fast2_pane_g1

0xc938,	// (0x00028623) cell_fast2_pane_g2

0xc941,	// (0x0002862c) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0002b8b3) cell_fast2_pane_g

0x824b,	// (0x00023f36) grid_highlight_pane_cp9

0x8260,	// (0x00023f4b) main_eswt_pane_ParamLimits

0x8260,	// (0x00023f4b) main_eswt_pane

0xc8ba,	// (0x000285a5) list_single_text_info_pane

0xc949,	// (0x00028634) eswt_ctrl_button_pane

0xc949,	// (0x00028634) eswt_ctrl_canvas_pane

0xc951,	// (0x0002863c) eswt_ctrl_combo_pane

0xc949,	// (0x00028634) eswt_ctrl_default_pane

0xc949,	// (0x00028634) eswt_ctrl_label_pane

0xc959,	// (0x00028644) eswt_ctrl_wait_pane

0xc961,	// (0x0002864c) eswt_shell_pane

0x31d9,	// (0x0001eec4) listscroll_eswt_app_pane

0xc981,	// (0x0002866c) popup_eswt_tasktip_window_ParamLimits

0xc981,	// (0x0002866c) popup_eswt_tasktip_window

0x9a5c,	// (0x00025747) bg_popup_window_pane_cp18

0xc992,	// (0x0002867d) eswt_control_pane_g1_ParamLimits

0xc992,	// (0x0002867d) eswt_control_pane_g1

0xc99f,	// (0x0002868a) eswt_control_pane_g2_ParamLimits

0xc99f,	// (0x0002868a) eswt_control_pane_g2

0xc9ac,	// (0x00028697) eswt_control_pane_g3_ParamLimits

0xc9ac,	// (0x00028697) eswt_control_pane_g3

0xc9b9,	// (0x000286a4) eswt_control_pane_g4_ParamLimits

0xc9b9,	// (0x000286a4) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0002b8ba) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0002b8ba) eswt_control_pane_g

0x84ef,	// (0x000241da) bg_button_pane_ParamLimits

0x84ef,	// (0x000241da) bg_button_pane

0x8260,	// (0x00023f4b) common_borders_pane_copy2_ParamLimits

0x8260,	// (0x00023f4b) common_borders_pane_copy2

0xc9c6,	// (0x000286b1) control_button_pane_g1_ParamLimits

0xc9c6,	// (0x000286b1) control_button_pane_g1

0xc9d2,	// (0x000286bd) control_button_pane_g2_ParamLimits

0xc9d2,	// (0x000286bd) control_button_pane_g2

0xc9de,	// (0x000286c9) control_button_pane_g3_ParamLimits

0xc9de,	// (0x000286c9) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0002b8c3) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0002b8c3) control_button_pane_g

0xc9f2,	// (0x000286dd) control_button_pane_t1

0xca00,	// (0x000286eb) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0002b8ca) control_button_pane_t

0x99e8,	// (0x000256d3) bg_button_pane_g1

0x99f0,	// (0x000256db) bg_button_pane_g2

0x99f8,	// (0x000256e3) bg_button_pane_g3

0x9a00,	// (0x000256eb) bg_button_pane_g4

0x9a08,	// (0x000256f3) bg_button_pane_g5

0x9a10,	// (0x000256fb) bg_button_pane_g6

0x9a18,	// (0x00025703) bg_button_pane_g7

0x9a20,	// (0x0002570b) bg_button_pane_g8

0x9a28,	// (0x00025713) bg_button_pane_g9

0x0008,

0xf841,	// (0x0002b52c) bg_button_pane_g

0xc000,	// (0x00027ceb) common_borders_pane_ParamLimits

0xc000,	// (0x00027ceb) common_borders_pane

0xc992,	// (0x0002867d) eswt_control_pane_g1_copy1_ParamLimits

0xc992,	// (0x0002867d) eswt_control_pane_g1_copy1

0xc99f,	// (0x0002868a) eswt_control_pane_g2_copy1_ParamLimits

0xc99f,	// (0x0002868a) eswt_control_pane_g2_copy1

0xc9ac,	// (0x00028697) eswt_control_pane_g3_copy1_ParamLimits

0xc9ac,	// (0x00028697) eswt_control_pane_g3_copy1

0xc9b9,	// (0x000286a4) eswt_control_pane_g4_copy1_ParamLimits

0xc9b9,	// (0x000286a4) eswt_control_pane_g4_copy1

0xc03b,	// (0x00027d26) bg_eswt_ctrl_canvas_pane_g1

0xc000,	// (0x00027ceb) common_borders_pane_cp2_ParamLimits

0xc000,	// (0x00027ceb) common_borders_pane_cp2

0xc000,	// (0x00027ceb) common_borders_pane_cp3_ParamLimits

0xc000,	// (0x00027ceb) common_borders_pane_cp3

0xca0e,	// (0x000286f9) separator_horizontal_pane

0xca16,	// (0x00028701) separator_vertical_pane

0xc992,	// (0x0002867d) eswt_control_pane_g1_copy2_ParamLimits

0xc992,	// (0x0002867d) eswt_control_pane_g1_copy2

0xc99f,	// (0x0002868a) eswt_control_pane_g2_copy2_ParamLimits

0xc99f,	// (0x0002868a) eswt_control_pane_g2_copy2

0xc9ac,	// (0x00028697) eswt_control_pane_g3_copy2_ParamLimits

0xc9ac,	// (0x00028697) eswt_control_pane_g3_copy2

0xc9b9,	// (0x000286a4) eswt_control_pane_g4_copy2_ParamLimits

0xc9b9,	// (0x000286a4) eswt_control_pane_g4_copy2

0x31d9,	// (0x0001eec4) common_borders_pane_cp4

0xca1f,	// (0x0002870a) separator_horizontal_pane_g1

0xca28,	// (0x00028713) separator_horizontal_pane_g2

0xca31,	// (0x0002871c) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0002b8cf) separator_horizontal_pane_g

0xc992,	// (0x0002867d) eswt_control_pane_g1_copy3_ParamLimits

0xc992,	// (0x0002867d) eswt_control_pane_g1_copy3

0xc99f,	// (0x0002868a) eswt_control_pane_g2_copy3_ParamLimits

0xc99f,	// (0x0002868a) eswt_control_pane_g2_copy3

0xc9ac,	// (0x00028697) eswt_control_pane_g3_copy3_ParamLimits

0xc9ac,	// (0x00028697) eswt_control_pane_g3_copy3

0xc9b9,	// (0x000286a4) eswt_control_pane_g4_copy3_ParamLimits

0xc9b9,	// (0x000286a4) eswt_control_pane_g4_copy3

0x31d9,	// (0x0001eec4) common_borders_pane_cp5

0xca3a,	// (0x00028725) separator_vertical_pane_g1

0xca43,	// (0x0002872e) separator_vertical_pane_g2

0xca4c,	// (0x00028737) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0002b8d6) separator_vertical_pane_g

0xc992,	// (0x0002867d) eswt_control_pane_g1_copy4_ParamLimits

0xc992,	// (0x0002867d) eswt_control_pane_g1_copy4

0xc99f,	// (0x0002868a) eswt_control_pane_g2_copy4_ParamLimits

0xc99f,	// (0x0002868a) eswt_control_pane_g2_copy4

0xc9ac,	// (0x00028697) eswt_control_pane_g3_copy4_ParamLimits

0xc9ac,	// (0x00028697) eswt_control_pane_g3_copy4

0xc9b9,	// (0x000286a4) eswt_control_pane_g4_copy4_ParamLimits

0xc9b9,	// (0x000286a4) eswt_control_pane_g4_copy4

0xca55,	// (0x00028740) eswt_ctrl_combo_button_pane

0xca5d,	// (0x00028748) eswt_ctrl_input_pane

0xca65,	// (0x00028750) popup_choice_list_window_cp70

0xca6d,	// (0x00028758) eswt_ctrl_input_pane_t1

0x31d9,	// (0x0001eec4) input_focus_pane_cp70

0xc000,	// (0x00027ceb) bg_button_pane_cp70_ParamLimits

0xc000,	// (0x00027ceb) bg_button_pane_cp70

0xca7b,	// (0x00028766) eswt_ctrl_combo_button_pane_g1

0xca83,	// (0x0002876e) wait_bar_pane_cp70

0x9a5c,	// (0x00025747) bg_popup_window_pane_cp70_ParamLimits

0x9a5c,	// (0x00025747) bg_popup_window_pane_cp70

0xca8b,	// (0x00028776) popup_eswt_tasktip_window_t1

0xcaa1,	// (0x0002878c) wait_bar_pane_cp71_ParamLimits

0xcaa1,	// (0x0002878c) wait_bar_pane_cp71

0xcaad,	// (0x00028798) grid_eswt_app_pane

0x8996,	// (0x00024681) scroll_pane_cp70

0xcab6,	// (0x000287a1) cell_eswt_app_pane_ParamLimits

0xcab6,	// (0x000287a1) cell_eswt_app_pane

0xcae6,	// (0x000287d1) cell_eswt_app_pane_g1_ParamLimits

0xcae6,	// (0x000287d1) cell_eswt_app_pane_g1

0xcb15,	// (0x00028800) cell_eswt_app_pane_g2_ParamLimits

0xcb15,	// (0x00028800) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0002b8dd) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0002b8dd) cell_eswt_app_pane_g

0xcb3e,	// (0x00028829) cell_eswt_app_pane_t1_ParamLimits

0xcb3e,	// (0x00028829) cell_eswt_app_pane_t1

0xcb70,	// (0x0002885b) grid_highlight_pane_cp70_ParamLimits

0xcb70,	// (0x0002885b) grid_highlight_pane_cp70

0x906f,	// (0x00024d5a) set_content_pane_g1

0x9445,	// (0x00025130) status_small_volume_pane

0x6ebd,	// (0x00022ba8) status_small_volume_pane_g1

0x6ec5,	// (0x00022bb0) volume_small2_pane

0x6ece,	// (0x00022bb9) volume_small2_pane_g1

0x6ed7,	// (0x00022bc2) volume_small2_pane_g2

0x6ee0,	// (0x00022bcb) volume_small2_pane_g3

0x6ee9,	// (0x00022bd4) volume_small2_pane_g4

0x6ef2,	// (0x00022bdd) volume_small2_pane_g5

0x6efb,	// (0x00022be6) volume_small2_pane_g6

0x6f04,	// (0x00022bef) volume_small2_pane_g7

0x6f0d,	// (0x00022bf8) volume_small2_pane_g8

0x6f16,	// (0x00022c01) volume_small2_pane_g9

0x6f1f,	// (0x00022c0a) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0002b8e2) volume_small2_pane_g

0xc401,	// (0x000280ec) fep_vkb_top_text_pane_g1_ParamLimits

0xc41c,	// (0x00028107) fep_vkb_top_text_pane_t1_ParamLimits

0xc676,	// (0x00028361) popup_preview_fixed_window_g3_ParamLimits

0xc676,	// (0x00028361) popup_preview_fixed_window_g3

0x667f,	// (0x0002236a) popup_toolbar_trans_pane

0xadcc,	// (0x00026ab7) aid_height_set_list_ParamLimits

0xaddd,	// (0x00026ac8) aid_size_parent_ParamLimits

0x94be,	// (0x000251a9) list_highlight_pane_cp2_ParamLimits

0x906f,	// (0x00024d5a) set_content_pane_g1_ParamLimits

0x4fc0,	// (0x00020cab) list_single_image_pane_ParamLimits

0x4fc0,	// (0x00020cab) list_single_image_pane

0xcb7c,	// (0x00028867) aid_size_cell_image_ParamLimits

0xcb7c,	// (0x00028867) aid_size_cell_image

0xcb89,	// (0x00028874) grid_single_image_pane_ParamLimits

0xcb89,	// (0x00028874) grid_single_image_pane

0xa6a1,	// (0x0002638c) list_single_image_pane_g1_ParamLimits

0xa6a1,	// (0x0002638c) list_single_image_pane_g1

0xcb95,	// (0x00028880) list_single_image_pane_g2_ParamLimits

0xcb95,	// (0x00028880) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0002b8f7) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0002b8f7) list_single_image_pane_g

0xcba9,	// (0x00028894) list_single_image_pane_t1_ParamLimits

0xcba9,	// (0x00028894) list_single_image_pane_t1

0xcbbf,	// (0x000288aa) cell_image_list_pane_ParamLimits

0xcbbf,	// (0x000288aa) cell_image_list_pane

0xcbd3,	// (0x000288be) cell_image_list_pane_g1

0xcbdc,	// (0x000288c7) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0002b8fc) cell_image_list_pane_g

0xcbe5,	// (0x000288d0) aid_size_cell_tb_trans_pane

0x84ef,	// (0x000241da) bg_tb_trans_pane

0xcbf7,	// (0x000288e2) grid_tb_trans_pane

0x99e8,	// (0x000256d3) bg_tb_trans_pane_g1

0x99f0,	// (0x000256db) bg_tb_trans_pane_g2

0x99f8,	// (0x000256e3) bg_tb_trans_pane_g3

0x9a00,	// (0x000256eb) bg_tb_trans_pane_g4

0x9a08,	// (0x000256f3) bg_tb_trans_pane_g5

0x9a20,	// (0x0002570b) bg_tb_trans_pane_g6

0x9a28,	// (0x00025713) bg_tb_trans_pane_g7

0x9a10,	// (0x000256fb) bg_tb_trans_pane_g8

0x9a18,	// (0x00025703) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0002b901) bg_tb_trans_pane_g

0xcc0b,	// (0x000288f6) cell_toolbar_trans_pane_ParamLimits

0xcc0b,	// (0x000288f6) cell_toolbar_trans_pane

0xc03b,	// (0x00027d26) cell_toolbar_trans_pane_g1

0xbc10,	// (0x000278fb) list_form2_midp_pane_t1

0xbc1e,	// (0x00027909) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0002b7aa) list_form2_midp_pane_t

0xbc2c,	// (0x00027917) scroll_pane_cp51_ParamLimits

0xbde8,	// (0x00027ad3) form2_midp_wait_pane_g1

0xbdf1,	// (0x00027adc) form2_midp_wait_pane_g2

0xbdfa,	// (0x00027ae5) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0002b7bf) form2_midp_wait_pane_g

0x7c62,	// (0x0002394d) list_highlight_pane_cp21_ParamLimits

0xbe46,	// (0x00027b31) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe55,	// (0x00027b40) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4f61,	// (0x00020c4c) list_single_2graphic_im_pane_ParamLimits

0x4f61,	// (0x00020c4c) list_single_2graphic_im_pane

0xcc31,	// (0x0002891c) list_single_2graphic_im_pane_g1_ParamLimits

0xcc31,	// (0x0002891c) list_single_2graphic_im_pane_g1

0xcc42,	// (0x0002892d) list_single_2graphic_im_pane_g2_ParamLimits

0xcc42,	// (0x0002892d) list_single_2graphic_im_pane_g2

0xcc4e,	// (0x00028939) list_single_2graphic_im_pane_g3_ParamLimits

0xcc4e,	// (0x00028939) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0002b914) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0002b914) list_single_2graphic_im_pane_g

0xcc6e,	// (0x00028959) list_single_2graphic_im_pane_t1_ParamLimits

0xcc6e,	// (0x00028959) list_single_2graphic_im_pane_t1

0xc682,	// (0x0002836d) list_single_graphic_2heading_pane_fp_ParamLimits

0xc682,	// (0x0002836d) list_single_graphic_2heading_pane_fp

0x53c9,	// (0x000210b4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x53c9,	// (0x000210b4) list_single_graphic_2heading_pane_fp_g1

0xc697,	// (0x00028382) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc697,	// (0x00028382) list_single_graphic_2heading_pane_fp_g2

0x5392,	// (0x0002107d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5392,	// (0x0002107d) list_single_graphic_2heading_pane_fp_g3

0x539e,	// (0x00021089) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x539e,	// (0x00021089) list_single_graphic_2heading_pane_fp_g4

0xc6a3,	// (0x0002838e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6a3,	// (0x0002838e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002b842) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002b842) list_single_graphic_2heading_pane_fp_g

0x55a2,	// (0x0002128d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x55a2,	// (0x0002128d) list_single_graphic_2heading_pane_fp_t1

0x5401,	// (0x000210ec) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5401,	// (0x000210ec) list_single_graphic_2heading_pane_fp_t2

0x55b8,	// (0x000212a3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x55b8,	// (0x000212a3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0002b91d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0002b91d) list_single_graphic_2heading_pane_fp_t

0xc0c7,	// (0x00027db2) fep_hwr_write_pane_g5_ParamLimits

0xc0c7,	// (0x00027db2) fep_hwr_write_pane_g5

0xc0d3,	// (0x00027dbe) fep_hwr_write_pane_g6_ParamLimits

0xc0d3,	// (0x00027dbe) fep_hwr_write_pane_g6

0xc961,	// (0x0002864c) eswt_shell_pane_ParamLimits

0x9a5c,	// (0x00025747) bg_popup_window_pane_cp18_ParamLimits

0xad25,	// (0x00026a10) heading_pane_cp70

0xca8b,	// (0x00028776) popup_eswt_tasktip_window_t1_ParamLimits

0x954f,	// (0x0002523a) aid_touch_tab_arrow_left

0x955e,	// (0x00025249) aid_touch_tab_arrow_right

0x7baa,	// (0x00023895) title_pane_g3_ParamLimits

0x7baa,	// (0x00023895) title_pane_g3

0x84ae,	// (0x00024199) set_value_pane_g1

0x667f,	// (0x0002236a) popup_toolbar_trans_pane_ParamLimits

0xcbe5,	// (0x000288d0) aid_size_cell_tb_trans_pane_ParamLimits

0x84ef,	// (0x000241da) bg_tb_trans_pane_ParamLimits

0xcbf7,	// (0x000288e2) grid_tb_trans_pane_ParamLimits

0x7eeb,	// (0x00023bd6) cont_note_pane_ParamLimits

0x7eeb,	// (0x00023bd6) cont_note_pane

0x8260,	// (0x00023f4b) cont_snote2_single_text_pane_ParamLimits

0x8260,	// (0x00023f4b) cont_snote2_single_text_pane

0x8260,	// (0x00023f4b) cont_snote2_single_graphic_pane_ParamLimits

0x8260,	// (0x00023f4b) cont_snote2_single_graphic_pane

0xa077,	// (0x00025d62) cont_note_wait_pane_ParamLimits

0xa077,	// (0x00025d62) cont_note_wait_pane

0xa077,	// (0x00025d62) cont_note_image_pane_ParamLimits

0xa077,	// (0x00025d62) cont_note_image_pane

0xcc9f,	// (0x0002898a) popup_note2_window_g1_ParamLimits

0xcc9f,	// (0x0002898a) popup_note2_window_g1

0xccd0,	// (0x000289bb) popup_note2_window_t1_ParamLimits

0xccd0,	// (0x000289bb) popup_note2_window_t1

0xcd15,	// (0x00028a00) popup_note2_window_t2_ParamLimits

0xcd15,	// (0x00028a00) popup_note2_window_t2

0xcd5a,	// (0x00028a45) popup_note2_window_t3_ParamLimits

0xcd5a,	// (0x00028a45) popup_note2_window_t3

0xcd9f,	// (0x00028a8a) popup_note2_window_t4_ParamLimits

0xcd9f,	// (0x00028a8a) popup_note2_window_t4

0x7f6f,	// (0x00023c5a) popup_note2_window_t5_ParamLimits

0x7f6f,	// (0x00023c5a) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0002b929) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0002b929) popup_note2_window_t

0xcdce,	// (0x00028ab9) popup_note2_image_window_g1_ParamLimits

0xcdce,	// (0x00028ab9) popup_note2_image_window_g1

0xcdda,	// (0x00028ac5) popup_note2_image_window_g2_ParamLimits

0xcdda,	// (0x00028ac5) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0002b934) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0002b934) popup_note2_image_window_g

0xcdec,	// (0x00028ad7) popup_note2_image_window_t1_ParamLimits

0xcdec,	// (0x00028ad7) popup_note2_image_window_t1

0xce04,	// (0x00028aef) popup_note2_image_window_t2_ParamLimits

0xce04,	// (0x00028aef) popup_note2_image_window_t2

0xce1c,	// (0x00028b07) popup_note2_image_window_t3_ParamLimits

0xce1c,	// (0x00028b07) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0002b939) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0002b939) popup_note2_image_window_t

0xa085,	// (0x00025d70) popup_note2_wait_window_g1_ParamLimits

0xa085,	// (0x00025d70) popup_note2_wait_window_g1

0xce38,	// (0x00028b23) popup_note2_wait_window_g2_ParamLimits

0xce38,	// (0x00028b23) popup_note2_wait_window_g2

0xa09d,	// (0x00025d88) popup_note2_wait_window_g3_ParamLimits

0xa09d,	// (0x00025d88) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x0002b940) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x0002b940) popup_note2_wait_window_g

0xce44,	// (0x00028b2f) popup_note2_wait_window_t1_ParamLimits

0xce44,	// (0x00028b2f) popup_note2_wait_window_t1

0xce62,	// (0x00028b4d) popup_note2_wait_window_t2_ParamLimits

0xce62,	// (0x00028b4d) popup_note2_wait_window_t2

0xce80,	// (0x00028b6b) popup_note2_wait_window_t3_ParamLimits

0xce80,	// (0x00028b6b) popup_note2_wait_window_t3

0xce92,	// (0x00028b7d) popup_note2_wait_window_t4_ParamLimits

0xce92,	// (0x00028b7d) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x0002b947) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x0002b947) popup_note2_wait_window_t

0xcea4,	// (0x00028b8f) wait_bar2_pane_ParamLimits

0xcea4,	// (0x00028b8f) wait_bar2_pane

0xcebc,	// (0x00028ba7) popup_snote2_single_text_window_g1_ParamLimits

0xcebc,	// (0x00028ba7) popup_snote2_single_text_window_g1

0xcee4,	// (0x00028bcf) popup_snote2_single_text_window_t1_ParamLimits

0xcee4,	// (0x00028bcf) popup_snote2_single_text_window_t1

0xcf30,	// (0x00028c1b) popup_snote2_single_text_window_t2_ParamLimits

0xcf30,	// (0x00028c1b) popup_snote2_single_text_window_t2

0xcf7c,	// (0x00028c67) popup_snote2_single_text_window_t3_ParamLimits

0xcf7c,	// (0x00028c67) popup_snote2_single_text_window_t3

0xcfbd,	// (0x00028ca8) popup_snote2_single_text_window_t4_ParamLimits

0xcfbd,	// (0x00028ca8) popup_snote2_single_text_window_t4

0xcff3,	// (0x00028cde) popup_snote2_single_text_window_t5_ParamLimits

0xcff3,	// (0x00028cde) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x0002b950) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x0002b950) popup_snote2_single_text_window_t

0xd01e,	// (0x00028d09) popup_snote2_single_graphic_window_g1_ParamLimits

0xd01e,	// (0x00028d09) popup_snote2_single_graphic_window_g1

0xd046,	// (0x00028d31) popup_snote2_single_graphic_window_g2_ParamLimits

0xd046,	// (0x00028d31) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x0002b95b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x0002b95b) popup_snote2_single_graphic_window_g

0xd06e,	// (0x00028d59) popup_snote2_single_graphic_window_t1_ParamLimits

0xd06e,	// (0x00028d59) popup_snote2_single_graphic_window_t1

0xd0ba,	// (0x00028da5) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0ba,	// (0x00028da5) popup_snote2_single_graphic_window_t2

0xcf7c,	// (0x00028c67) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf7c,	// (0x00028c67) popup_snote2_single_graphic_window_t3

0xcfbd,	// (0x00028ca8) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfbd,	// (0x00028ca8) popup_snote2_single_graphic_window_t4

0xcff3,	// (0x00028cde) popup_snote2_single_graphic_window_t5_ParamLimits

0xcff3,	// (0x00028cde) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x0002b960) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x0002b960) popup_snote2_single_graphic_window_t

0xbaed,	// (0x000277d8) clock_nsta_pane_cp2_t1

0xbaed,	// (0x000277d8) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0002b780) clock_nsta_pane_cp2_t

0x4b15,	// (0x00020800) form_field_data_wide_pane_g1_ParamLimits

0x84fd,	// (0x000241e8) form_field_data_wide_pane_g2_ParamLimits

0x84fd,	// (0x000241e8) form_field_data_wide_pane_g2

0x8509,	// (0x000241f4) form_field_data_wide_pane_g3_ParamLimits

0x8509,	// (0x000241f4) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002b341) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002b341) form_field_data_wide_pane_g

0xb9c9,	// (0x000276b4) grid_touch_3_pane_ParamLimits

0xb9c9,	// (0x000276b4) grid_touch_3_pane

0xd106,	// (0x00028df1) cell_touch_3_pane_ParamLimits

0xd106,	// (0x00028df1) cell_touch_3_pane

0xc03b,	// (0x00027d26) cell_touch_3_pane_g1

0xc03b,	// (0x00027d26) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0002b805) cell_touch_3_pane_g

0x7fc7,	// (0x00023cb2) cont_query_data_pane

0x7fcf,	// (0x00023cba) cont_query_data_pane_cp1

0xd134,	// (0x00028e1f) button_value_adjust_pane_cp7

0xd13c,	// (0x00028e27) query_popup_pane_cp3

0x8c74,	// (0x0002495f) bg_popup_sub_pane_cp22_ParamLimits

0x5de5,	// (0x00021ad0) navi_navi_volume_pane_cp2

0x5e00,	// (0x00021aeb) popup_side_volume_key_window_g2

0x5e0f,	// (0x00021afa) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0002b3d7) popup_side_volume_key_window_g

0x5e2c,	// (0x00021b17) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0002b3de) popup_side_volume_key_window_t

0x8f2e,	// (0x00024c19) popup_side_volume_key_window_ParamLimits

0x476a,	// (0x00020455) list_double_graphic_pane_g4_ParamLimits

0x476a,	// (0x00020455) list_double_graphic_pane_g4

0x4fa0,	// (0x00020c8b) list_single_2heading_msg_pane_ParamLimits

0x4fa0,	// (0x00020c8b) list_single_2heading_msg_pane

0x55d8,	// (0x000212c3) list_single_2heading_msg_pane_g1_ParamLimits

0x55d8,	// (0x000212c3) list_single_2heading_msg_pane_g1

0x4599,	// (0x00020284) list_single_2heading_msg_pane_g2_ParamLimits

0x4599,	// (0x00020284) list_single_2heading_msg_pane_g2

0x55e4,	// (0x000212cf) list_single_2heading_msg_pane_g3_ParamLimits

0x55e4,	// (0x000212cf) list_single_2heading_msg_pane_g3

0x55f0,	// (0x000212db) list_single_2heading_msg_pane_g4_ParamLimits

0x55f0,	// (0x000212db) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x0002b96b) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x0002b96b) list_single_2heading_msg_pane_g

0x5608,	// (0x000212f3) list_single_2heading_msg_pane_t1_ParamLimits

0x5608,	// (0x000212f3) list_single_2heading_msg_pane_t1

0x5630,	// (0x0002131b) list_single_2heading_msg_pane_t2_ParamLimits

0x5630,	// (0x0002131b) list_single_2heading_msg_pane_t2

0x5664,	// (0x0002134f) list_single_2heading_msg_pane_t3_ParamLimits

0x5664,	// (0x0002134f) list_single_2heading_msg_pane_t3

0x569d,	// (0x00021388) list_single_2heading_msg_pane_t4_ParamLimits

0x569d,	// (0x00021388) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x0002b974) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x0002b974) list_single_2heading_msg_pane_t

0x7bb6,	// (0x000238a1) title_pane_g4_ParamLimits

0x7bb6,	// (0x000238a1) title_pane_g4

0x5bf4,	// (0x000218df) title_pane_stacon_g3_ParamLimits

0x5bf4,	// (0x000218df) title_pane_stacon_g3

0xcc62,	// (0x0002894d) list_single_2graphic_im_pane_g4_ParamLimits

0xcc62,	// (0x0002894d) list_single_2graphic_im_pane_g4

0xaae2,	// (0x000267cd) popup_side_volume_key_window_cp

0xb314,	// (0x00026fff) main_idle_act2_pane_t1

0x6771,	// (0x0002245c) toolbar_button_pane_g10

0x8458,	// (0x00024143) popup_toolbar_window_cp1

0xbade,	// (0x000277c9) clock_nsta_pane_cp_t1

0xbade,	// (0x000277c9) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0002b77b) clock_nsta_pane_cp_t

0x5de5,	// (0x00021ad0) navi_navi_volume_pane_cp2_ParamLimits

0x5df4,	// (0x00021adf) popup_side_volume_key_window_g1_ParamLimits

0x5e00,	// (0x00021aeb) popup_side_volume_key_window_g2_ParamLimits

0x5e0f,	// (0x00021afa) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0002b3d7) popup_side_volume_key_window_g_ParamLimits

0x6bcd,	// (0x000228b8) fep_hwr_aid_pane

0x1fd6,	// (0x0001dcc1) bg_fep_hwr_top_pane_g4_ParamLimits

0xc097,	// (0x00027d82) fep_hwr_top_pane_g1_ParamLimits

0xc0a9,	// (0x00027d94) fep_hwr_top_pane_g2_ParamLimits

0x6c86,	// (0x00022971) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0002b7d0) fep_hwr_top_pane_g_ParamLimits

0x6c9b,	// (0x00022986) fep_hwr_top_text_pane_ParamLimits

0xa8a5,	// (0x00026590) aid_touch_tab_arrow_arrow_2

0xa8ae,	// (0x00026599) aid_touch_tab_arrow_left_2

0x6be1,	// (0x000228cc) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6c18,	// (0x00022903) fep_hwr_prediction_pane

0xc209,	// (0x00027ef4) fep_vkb_prediction_pane

0xc30d,	// (0x00027ff8) fep_vkb_side_pane_g3_ParamLimits

0xc30d,	// (0x00027ff8) fep_vkb_side_pane_g3

0xc2b9,	// (0x00027fa4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc739,	// (0x00028424) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc746,	// (0x00028431) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0002b87a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd161,	// (0x00028e4c) fep_hwr_prediction_pane_g1

0x6f28,	// (0x00022c13) fep_hwr_prediction_pane_g2

0x6f30,	// (0x00022c1b) fep_hwr_prediction_pane_g3

0x6f38,	// (0x00022c23) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x0002b97d) fep_hwr_prediction_pane_g

0xd161,	// (0x00028e4c) fep_vkb_prediction_pane_g1

0xd16b,	// (0x00028e56) fep_vkb_prediction_pane_g2

0xd173,	// (0x00028e5e) fep_vkb_prediction_pane_g3

0xd17b,	// (0x00028e66) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x0002b986) fep_vkb_prediction_pane_g

0x6a4d,	// (0x00022738) slider_set_pane_g3

0x6a61,	// (0x0002274c) slider_set_pane_g4

0x6a79,	// (0x00022764) slider_set_pane_g5

0x6a4d,	// (0x00022738) slider_set_pane_g6

0x6a8f,	// (0x0002277a) slider_set_pane_g7

0xaf42,	// (0x00026c2d) slider_form_pane_g3

0xaf4b,	// (0x00026c36) slider_form_pane_g4

0xaf53,	// (0x00026c3e) slider_form_pane_g5

0xaf42,	// (0x00026c2d) slider_form_pane_g6

0xaf5b,	// (0x00026c46) slider_form_pane_g7

0xb5bf,	// (0x000272aa) slider_set_pane_vc_g3

0xb5c8,	// (0x000272b3) slider_set_pane_vc_g4

0xb5d1,	// (0x000272bc) slider_set_pane_vc_g5

0xb5bf,	// (0x000272aa) slider_set_pane_vc_g6

0xb5da,	// (0x000272c5) slider_set_pane_vc_g7

0xb79c,	// (0x00027487) slider_form_pane_vc_g1

0xb7a5,	// (0x00027490) slider_form_pane_vc_g2

0xb7ae,	// (0x00027499) slider_form_pane_vc_g3

0xb79c,	// (0x00027487) slider_form_pane_vc_g4

0xb7b7,	// (0x000274a2) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0002b74d) slider_form_pane_vc_g

0x31d9,	// (0x0001eec4) main_idle_act3_pane

0xd183,	// (0x00028e6e) ai3_links_pane

0xd18c,	// (0x00028e77) popup_ai3_data_window_ParamLimits

0xd18c,	// (0x00028e77) popup_ai3_data_window

0x31d9,	// (0x0001eec4) grid_ai3_links_pane

0xd1a6,	// (0x00028e91) cell_ai3_links_pane_ParamLimits

0xd1a6,	// (0x00028e91) cell_ai3_links_pane

0xd1be,	// (0x00028ea9) bg_popup_sub_pane_cp11

0xd1cb,	// (0x00028eb6) cell_ai3_links_pane_g1

0x31d9,	// (0x0001eec4) bg_popup_sub_pane_cp12

0xd1f0,	// (0x00028edb) heading_ai3_data_pane

0xd1f8,	// (0x00028ee3) list_ai3_gene_pane

0xd204,	// (0x00028eef) popup_ai3_data_window_g1

0xd20c,	// (0x00028ef7) heading_ai3_data_pane_g1

0xd214,	// (0x00028eff) heading_ai3_data_pane_t1

0xd222,	// (0x00028f0d) list_double_ai3_gene_pane_ParamLimits

0xd222,	// (0x00028f0d) list_double_ai3_gene_pane

0xd22f,	// (0x00028f1a) list_single_ai3_gene_pane_ParamLimits

0xd22f,	// (0x00028f1a) list_single_ai3_gene_pane

0xc000,	// (0x00027ceb) list_highlight_pane_cp7_ParamLimits

0xc000,	// (0x00027ceb) list_highlight_pane_cp7

0xd23c,	// (0x00028f27) list_single_a13_gene_pane_t1_ParamLimits

0xd23c,	// (0x00028f27) list_single_a13_gene_pane_t1

0xd253,	// (0x00028f3e) list_single_ai3_gene_pane_g1

0xd25c,	// (0x00028f47) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x0002b98f) list_single_ai3_gene_pane_g

0xd264,	// (0x00028f4f) list_double_ai3_gene_pane_g1_ParamLimits

0xd264,	// (0x00028f4f) list_double_ai3_gene_pane_g1

0xd270,	// (0x00028f5b) list_double_ai3_gene_pane_t1_ParamLimits

0xd270,	// (0x00028f5b) list_double_ai3_gene_pane_t1

0xd28c,	// (0x00028f77) list_double_ai3_gene_pane_t2_ParamLimits

0xd28c,	// (0x00028f77) list_double_ai3_gene_pane_t2

0xd2a2,	// (0x00028f8d) list_double_ai3_gene_pane_t3_ParamLimits

0xd2a2,	// (0x00028f8d) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x0002b994) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x0002b994) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x55ce,	// (0x000212b9) aid_size_min_col_2

0xd14d,	// (0x00028e38) aid_size_min_msg_ParamLimits

0xd14d,	// (0x00028e38) aid_size_min_msg

0xc40d,	// (0x000280f8) fep_vkb_top_text_pane_g2_ParamLimits

0xc40d,	// (0x000280f8) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0002b800) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0002b800) fep_vkb_top_text_pane_g

0x31d9,	// (0x0001eec4) main_hc_apps_shell_pane

0xd2bf,	// (0x00028faa) grid_hc_apps_pane_ParamLimits

0xd2bf,	// (0x00028faa) grid_hc_apps_pane

0xd2d1,	// (0x00028fbc) list_hc_apps_pane

0xd2d9,	// (0x00028fc4) scroll_pane_cp37_ParamLimits

0xd2d9,	// (0x00028fc4) scroll_pane_cp37

0xd2e5,	// (0x00028fd0) cell_hc_apps_pane_ParamLimits

0xd2e5,	// (0x00028fd0) cell_hc_apps_pane

0xd393,	// (0x0002907e) cell_hc_apps_pane_g1_ParamLimits

0xd393,	// (0x0002907e) cell_hc_apps_pane_g1

0xd3c3,	// (0x000290ae) cell_hc_apps_pane_g2_ParamLimits

0xd3c3,	// (0x000290ae) cell_hc_apps_pane_g2

0xd3df,	// (0x000290ca) cell_hc_apps_pane_g3_ParamLimits

0xd3df,	// (0x000290ca) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x0002b99b) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x0002b99b) cell_hc_apps_pane_g

0xd401,	// (0x000290ec) cell_hc_apps_pane_t1_ParamLimits

0xd401,	// (0x000290ec) cell_hc_apps_pane_t1

0x7eeb,	// (0x00023bd6) grid_highlight_pane_cp10_ParamLimits

0x7eeb,	// (0x00023bd6) grid_highlight_pane_cp10

0xd441,	// (0x0002912c) list_single_hc_apps_pane_ParamLimits

0xd441,	// (0x0002912c) list_single_hc_apps_pane

0xd49d,	// (0x00029188) list_single_hc_apps_pane_g1

0x56c2,	// (0x000213ad) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x0002b9a2) list_single_hc_apps_pane_g

0x56db,	// (0x000213c6) list_single_hc_apps_pane_g2_copy1

0x56f7,	// (0x000213e2) list_single_hc_apps_pane_t1

0x7c62,	// (0x0002394d) bg_set_opt_pane_cp_ParamLimits

0x5b1c,	// (0x00021807) setting_slider_pane_t1_ParamLimits

0x5b35,	// (0x00021820) setting_slider_pane_t2_ParamLimits

0x5b4f,	// (0x0002183a) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002b224) setting_slider_pane_t_ParamLimits

0x5b67,	// (0x00021852) slider_set_pane_ParamLimits

0x608e,	// (0x00021d79) control_pane_g5_ParamLimits

0x608e,	// (0x00021d79) control_pane_g5

0xad91,	// (0x00026a7c) slider_set_pane_g1_ParamLimits

0x6a41,	// (0x0002272c) slider_set_pane_g2_ParamLimits

0x6a4d,	// (0x00022738) slider_set_pane_g3_ParamLimits

0x6a61,	// (0x0002274c) slider_set_pane_g4_ParamLimits

0x6a79,	// (0x00022764) slider_set_pane_g5_ParamLimits

0x6a4d,	// (0x00022738) slider_set_pane_g6_ParamLimits

0x6a8f,	// (0x0002277a) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0002b62a) slider_set_pane_g_ParamLimits

0x901a,	// (0x00024d05) navi_icon_text_pane_ParamLimits

0x9510,	// (0x000251fb) aid_fill_nsta_2_ParamLimits

0x954f,	// (0x0002523a) aid_touch_tab_arrow_left_ParamLimits

0x955e,	// (0x00025249) aid_touch_tab_arrow_right_ParamLimits

0x95cb,	// (0x000252b6) clock_nsta_pane_ParamLimits

0xa887,	// (0x00026572) navi_icon_pane_g1_ParamLimits

0xa893,	// (0x0002657e) navi_text_pane_t1_ParamLimits

0xbbea,	// (0x000278d5) navi_icon_text_pane_g1_ParamLimits

0xbbf6,	// (0x000278e1) navi_icon_text_pane_t1_ParamLimits

0xd49d,	// (0x00029188) list_single_hc_apps_pane_g1_ParamLimits

0x56c2,	// (0x000213ad) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x0002b9a2) list_single_hc_apps_pane_g_ParamLimits

0x56db,	// (0x000213c6) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x56f7,	// (0x000213e2) list_single_hc_apps_pane_t1_ParamLimits

0x5a26,	// (0x00021711) popup_toolbar2_fixed_window_ParamLimits

0x5a26,	// (0x00021711) popup_toolbar2_fixed_window

0x6675,	// (0x00022360) popup_toolbar2_float_window

0x31d9,	// (0x0001eec4) bg_popup_sub_pane_cp27

0xd4b6,	// (0x000291a1) grid_toolbar2_float_pane

0x31d9,	// (0x0001eec4) bg_popup_sub_pane_cp26

0xd4b6,	// (0x000291a1) grid_toolbar2_fixed_pane

0xd4be,	// (0x000291a9) cell_toolbar2_fixed_pane_ParamLimits

0xd4be,	// (0x000291a9) cell_toolbar2_fixed_pane

0xd4ce,	// (0x000291b9) cell_toolbar2_fixed_pane_g1

0xd4d7,	// (0x000291c2) toolbar2_fixed_button_pane

0x99e8,	// (0x000256d3) toolbar2_fixed_button_pane_g1

0x99f0,	// (0x000256db) toolbar2_fixed_button_pane_g2

0x99f8,	// (0x000256e3) toolbar2_fixed_button_pane_g3

0x9a00,	// (0x000256eb) toolbar2_fixed_button_pane_g4

0x9a08,	// (0x000256f3) toolbar2_fixed_button_pane_g5

0x9a10,	// (0x000256fb) toolbar2_fixed_button_pane_g6

0x9a18,	// (0x00025703) toolbar2_fixed_button_pane_g7

0x9a20,	// (0x0002570b) toolbar2_fixed_button_pane_g8

0x9a28,	// (0x00025713) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0002b52c) toolbar2_fixed_button_pane_g

0xd4df,	// (0x000291ca) cell_toolbar2_float_pane_ParamLimits

0xd4df,	// (0x000291ca) cell_toolbar2_float_pane

0xd4f0,	// (0x000291db) cell_toolbar2_float_pane_g1

0xd4d7,	// (0x000291c2) toolbar2_fixed_button_pane_cp

0xc169,	// (0x00027e54) fep_vkb_accented_list_pane_ParamLimits

0xc169,	// (0x00027e54) fep_vkb_accented_list_pane

0x6de9,	// (0x00022ad4) bg_popup_fep_shadow_pane_g9

0x919a,	// (0x00024e85) bg_popup_fep_shadow_pane_cp3

0x8656,	// (0x00024341) list_accented_list_pane

0xd4f9,	// (0x000291e4) list_single_accented_list_pane_ParamLimits

0xd4f9,	// (0x000291e4) list_single_accented_list_pane

0x919a,	// (0x00024e85) list_highlight_pane_cp10

0xd50a,	// (0x000291f5) list_single_accented_list_pane_t1

0x65c5,	// (0x000222b0) popup_slider_window_ParamLimits

0x65c5,	// (0x000222b0) popup_slider_window

0xd144,	// (0x00028e2f) aid_indentation_list_msg

0xd5ce,	// (0x000292b9) bg_popup_window_pane_cp19

0xd636,	// (0x00029321) popup_slider_window_g1

0xd652,	// (0x0002933d) popup_slider_window_g2

0xd66e,	// (0x00029359) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x0002b9a7) popup_slider_window_g

0xd6d4,	// (0x000293bf) popup_slider_window_t1

0xd748,	// (0x00029433) small_volume_slider_vertical_pane

0xc03b,	// (0x00027d26) small_volume_slider_vertical_pane_g1

0xc03b,	// (0x00027d26) small_volume_slider_vertical_pane_g2

0xd764,	// (0x0002944f) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x0002b9b9) small_volume_slider_vertical_pane_g

0x57e8,	// (0x000214d3) area_side_right_pane_ParamLimits

0x57e8,	// (0x000214d3) area_side_right_pane

0x6f40,	// (0x00022c2b) aid_size_side_button_ParamLimits

0x6f40,	// (0x00022c2b) aid_size_side_button

0x6f54,	// (0x00022c3f) grid_sctrl_middle_pane_ParamLimits

0x6f54,	// (0x00022c3f) grid_sctrl_middle_pane

0x6f73,	// (0x00022c5e) sctrl_sk_bottom_pane

0x6f84,	// (0x00022c6f) sctrl_sk_top_pane

0x6f96,	// (0x00022c81) aid_touch_sctrl_top

0x7eeb,	// (0x00023bd6) bg_sctrl_sk_pane_ParamLimits

0x7eeb,	// (0x00023bd6) bg_sctrl_sk_pane

0x6fa3,	// (0x00022c8e) sctrl_sk_top_pane_g1

0x6fb0,	// (0x00022c9b) sctrl_sk_top_pane_t1

0x6f96,	// (0x00022c81) aid_touch_sctrl_bottom

0x7eeb,	// (0x00023bd6) bg_sctrl_sk_pane_cp_ParamLimits

0x7eeb,	// (0x00023bd6) bg_sctrl_sk_pane_cp

0x6fcb,	// (0x00022cb6) sctrl_sk_bottom_pane_g1

0x6fb0,	// (0x00022c9b) sctrl_sk_bottom_pane_t1

0x6fd4,	// (0x00022cbf) cell_sctrl_middle_pane_ParamLimits

0x6fd4,	// (0x00022cbf) cell_sctrl_middle_pane

0x6fef,	// (0x00022cda) aid_touch_sctrl_middle_ParamLimits

0x6fef,	// (0x00022cda) aid_touch_sctrl_middle

0x84ef,	// (0x000241da) bg_sctrl_middle_pane_ParamLimits

0x84ef,	// (0x000241da) bg_sctrl_middle_pane

0xc2b9,	// (0x00027fa4) cell_sctrl_middle_pane_g1_ParamLimits

0xc2b9,	// (0x00027fa4) cell_sctrl_middle_pane_g1

0x7001,	// (0x00022cec) cell_sctrl_middle_pane_g2_ParamLimits

0x7001,	// (0x00022cec) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x0002b9c5) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x0002b9c5) cell_sctrl_middle_pane_g

0x99e8,	// (0x000256d3) bg_sctrl_middle_pane_g1

0x99f0,	// (0x000256db) bg_sctrl_middle_pane_g2

0x99f8,	// (0x000256e3) bg_sctrl_middle_pane_g3

0x9a00,	// (0x000256eb) bg_sctrl_middle_pane_g4

0x9a08,	// (0x000256f3) bg_sctrl_middle_pane_g5

0x9a10,	// (0x000256fb) bg_sctrl_middle_pane_g6

0x9a18,	// (0x00025703) bg_sctrl_middle_pane_g7

0x9a20,	// (0x0002570b) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x0002b9ca) bg_sctrl_middle_pane_g

0x9a28,	// (0x00025713) bg_sctrl_middle_pane_g8_copy1

0x99e8,	// (0x000256d3) bg_sctrl_sk_pane_g1

0x99f0,	// (0x000256db) bg_sctrl_sk_pane_g2

0x99f8,	// (0x000256e3) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0002b52c) bg_sctrl_sk_pane_g

0x841e,	// (0x00024109) aid_size_touch_scroll_bar

0x9a00,	// (0x000256eb) bg_sctrl_sk_pane_g4

0x9a08,	// (0x000256f3) bg_sctrl_sk_pane_g5

0x9a10,	// (0x000256fb) bg_sctrl_sk_pane_g6

0x9a18,	// (0x00025703) bg_sctrl_sk_pane_g7

0x9a20,	// (0x0002570b) bg_sctrl_sk_pane_g8

0x9a28,	// (0x00025713) bg_sctrl_sk_pane_g9

0x622c,	// (0x00021f17) popup_fep_china_hwr2_fs_candidate_window

0x6236,	// (0x00021f21) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6236,	// (0x00021f21) popup_fep_china_hwr2_fs_control_window

0xc2b9,	// (0x00027fa4) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x0002b9c0) sctrl_sk_top_pane_g

0xd76d,	// (0x00029458) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd76d,	// (0x00029458) aid_fep_china_hwr2_fs_cell

0xd77f,	// (0x0002946a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd77f,	// (0x0002946a) bg_popup_fep_shadow_pane_cp4

0xd796,	// (0x00029481) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd796,	// (0x00029481) bg_popup_fep_shadow_pane_cp5

0xd7a8,	// (0x00029493) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7a8,	// (0x00029493) popup_fep_china_hwr2_fs_control_bar_grid

0xd7b8,	// (0x000294a3) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7c0,	// (0x000294ab) aid_fep_china_hwr2_fs_candi_cell

0x31d9,	// (0x0001eec4) bg_popup_fep_shadow_pane_cp6

0xd7ca,	// (0x000294b5) popup_fep_china_hwr2_fs_candidate_grid

0xd7d4,	// (0x000294bf) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7d4,	// (0x000294bf) cell_fep_china_hwr2_fs_funtion_grid

0xc03b,	// (0x00027d26) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7ec,	// (0x000294d7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7ec,	// (0x000294d7) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7fa,	// (0x000294e5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7fa,	// (0x000294e5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x0002b9db) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x0002b9db) cell_fep_china_hwr2_fs_funtion_grid_g

0xd810,	// (0x000294fb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd810,	// (0x000294fb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd825,	// (0x00029510) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd825,	// (0x00029510) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x0002b9e0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x0002b9e0) cell_fep_china_hwr2_fs_funtion_grid_t

0xd841,	// (0x0002952c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd849,	// (0x00029534) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd851,	// (0x0002953c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x0002b9e5) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd859,	// (0x00029544) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd859,	// (0x00029544) cell_fep_china_hwr2_fs_candidate_grid

0xd872,	// (0x0002955d) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd87a,	// (0x00029565) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc03b,	// (0x00027d26) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc03b,	// (0x00027d26) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0002b805) cell_fep_china_hwr2_fs_candidate_grid_g

0xd882,	// (0x0002956d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95de,	// (0x000252c9) clock_nsta_pane_cp_24_ParamLimits

0x95de,	// (0x000252c9) clock_nsta_pane_cp_24

0x965c,	// (0x00025347) indicator_nsta_pane_cp_24_ParamLimits

0x965c,	// (0x00025347) indicator_nsta_pane_cp_24

0xa703,	// (0x000263ee) heading_pane_g1

0x0001,

0xf8a6,	// (0x0002b591) heading_pane_g

0xb15d,	// (0x00026e48) grid_sct_catagory_button_pane

0xb18d,	// (0x00026e78) scroll_pane_cp5_ParamLimits

0xbc38,	// (0x00027923) button_value_adjust_pane_cp5_ParamLimits

0xbc38,	// (0x00027923) button_value_adjust_pane_cp5

0xbd17,	// (0x00027a02) form2_midp_time_pane_ParamLimits

0xd890,	// (0x0002957b) cell_sct_catagory_button_pane_ParamLimits

0xd890,	// (0x0002957b) cell_sct_catagory_button_pane

0xc000,	// (0x00027ceb) bg_button_pane_cp01_ParamLimits

0xc000,	// (0x00027ceb) bg_button_pane_cp01

0xc03b,	// (0x00027d26) cell_sct_catagory_button_pane_g1

0x6604,	// (0x000222ef) popup_tb_extension_window

0xd8a2,	// (0x0002958d) aid_size_cell_ext_ParamLimits

0xd8a2,	// (0x0002958d) aid_size_cell_ext

0x7eeb,	// (0x00023bd6) bg_tb_trans_pane_cp1_ParamLimits

0x7eeb,	// (0x00023bd6) bg_tb_trans_pane_cp1

0xd8c2,	// (0x000295ad) grid_tb_ext_pane_ParamLimits

0xd8c2,	// (0x000295ad) grid_tb_ext_pane

0xd8f0,	// (0x000295db) cell_tb_ext_pane_ParamLimits

0xd8f0,	// (0x000295db) cell_tb_ext_pane

0xd907,	// (0x000295f2) cell_tb_ext_pane_g1_ParamLimits

0xd907,	// (0x000295f2) cell_tb_ext_pane_g1

0xd924,	// (0x0002960f) cell_tb_ext_pane_t1

0x7eeb,	// (0x00023bd6) list_highlight_pane_cp11_ParamLimits

0x7eeb,	// (0x00023bd6) list_highlight_pane_cp11

0x5a45,	// (0x00021730) popup_uni_indicator_window_ParamLimits

0x5a45,	// (0x00021730) popup_uni_indicator_window

0x84ef,	// (0x000241da) bg_popup_sub_pane_cp14

0xd93f,	// (0x0002962a) list_uniindi_pane

0xd94b,	// (0x00029636) uniindi_top_pane

0x7eeb,	// (0x00023bd6) bg_uniindi_top_pane

0xd96a,	// (0x00029655) uniindi_top_pane_g1

0xd980,	// (0x0002966b) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x0002b9ec) uniindi_top_pane_g

0xd9aa,	// (0x00029695) uniindi_top_pane_t1

0xd9d4,	// (0x000296bf) list_single_uniindi_pane_ParamLimits

0xd9d4,	// (0x000296bf) list_single_uniindi_pane

0xc03b,	// (0x00027d26) bg_uniindi_top_pane_g1

0xd9e7,	// (0x000296d2) list_single_uniindi_pane_g1

0xd9fa,	// (0x000296e5) list_single_uniindi_pane_t1

0x31d9,	// (0x0001eec4) control_bg_pane

0xda1f,	// (0x0002970a) bg_sctrl_sk_pane_cp1

0xda28,	// (0x00029713) bg_sctrl_sk_pane_cp2

0xda31,	// (0x0002971c) control_bg_pane_g1

0xda3a,	// (0x00029725) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x0002b9f5) control_bg_pane_g

0xba82,	// (0x0002776d) cell_indicator_nsta_pane_g1_ParamLimits

0xba90,	// (0x0002777b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0002b769) cell_indicator_nsta_pane_g_ParamLimits

0x537f,	// (0x0002106a) form2_midp_time_pane_t1_ParamLimits

0x8260,	// (0x00023f4b) main_idle_act4_pane_ParamLimits

0x8260,	// (0x00023f4b) main_idle_act4_pane

0x6604,	// (0x000222ef) popup_tb_extension_window_ParamLimits

0xd8e0,	// (0x000295cb) tb_ext_find_pane_ParamLimits

0xd8e0,	// (0x000295cb) tb_ext_find_pane

0xda43,	// (0x0002972e) ai_gene_pane_1_cp1

0x92e1,	// (0x00024fcc) ai_gene_pane_2_cp1

0xda4b,	// (0x00029736) list_single_idle_plugin_calendar_pane

0xda54,	// (0x0002973f) list_single_idle_plugin_notification_pane

0xda5d,	// (0x00029748) list_single_idle_plugin_player_pane

0xda66,	// (0x00029751) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda66,	// (0x00029751) list_single_idle_plugin_shortcut_pane

0xda88,	// (0x00029773) main_idle_act4_pane_t1

0xda9a,	// (0x00029785) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x0002b9fa) main_idle_act4_pane_t

0xdaac,	// (0x00029797) middle_sk_idle_act4_pane_ParamLimits

0xdaac,	// (0x00029797) middle_sk_idle_act4_pane

0xdac2,	// (0x000297ad) popup_clock_digital_analogue_window_cp2

0xdadc,	// (0x000297c7) shortcut_wheel_idle_act4_pane_ParamLimits

0xdadc,	// (0x000297c7) shortcut_wheel_idle_act4_pane

0xc03b,	// (0x00027d26) shortcut_wheel_idle_act4_pane_g1

0xc03b,	// (0x00027d26) shortcut_wheel_idle_act4_pane_g2

0xc03b,	// (0x00027d26) shortcut_wheel_idle_act4_pane_g3

0xc03b,	// (0x00027d26) shortcut_wheel_idle_act4_pane_g4

0xc03b,	// (0x00027d26) shortcut_wheel_idle_act4_pane_g5

0xdaf0,	// (0x000297db) shortcut_wheel_idle_act4_pane_g6

0xdaf8,	// (0x000297e3) shortcut_wheel_idle_act4_pane_g7

0xdb00,	// (0x000297eb) shortcut_wheel_idle_act4_pane_g8

0xdb08,	// (0x000297f3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x0002b9ff) shortcut_wheel_idle_act4_pane_g

0xc2b9,	// (0x00027fa4) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2b9,	// (0x00027fa4) middle_sk_idle_act4_pane_g1

0xdb6c,	// (0x00029857) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb6c,	// (0x00029857) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x0002ba22) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x0002ba22) middle_sk_idle_act4_pane_g

0xdb78,	// (0x00029863) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb78,	// (0x00029863) middle_sk_idle_act4_pane_t1

0xdb95,	// (0x00029880) grid_ai_shortcut_pane_ParamLimits

0xdb95,	// (0x00029880) grid_ai_shortcut_pane

0xdbae,	// (0x00029899) list_highlight_pane_cp16_ParamLimits

0xdbae,	// (0x00029899) list_highlight_pane_cp16

0xdbbb,	// (0x000298a6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbbb,	// (0x000298a6) list_single_idle_plugin_shortcut_pane_g1

0xdbc7,	// (0x000298b2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc7,	// (0x000298b2) list_single_idle_plugin_shortcut_pane_g2

0xdbdf,	// (0x000298ca) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbdf,	// (0x000298ca) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x0002ba27) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x0002ba27) list_single_idle_plugin_shortcut_pane_g

0xdbf2,	// (0x000298dd) cell_ai_shortcut_pane_ParamLimits

0xdbf2,	// (0x000298dd) cell_ai_shortcut_pane

0xdc16,	// (0x00029901) cell_ai_shortcut_pane_g1_ParamLimits

0xdc16,	// (0x00029901) cell_ai_shortcut_pane_g1

0xda43,	// (0x0002972e) ai_gene_pane_1_cp2

0xdc38,	// (0x00029923) ai_gene_pane_2_cp2

0xdc40,	// (0x0002992b) list_highlight_pane_cp15

0xdc49,	// (0x00029934) list_single_idle_plugin_calendar_pane_g1

0xdc40,	// (0x0002992b) list_highlight_pane_cp17

0xdc51,	// (0x0002993c) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc59,	// (0x00029944) list_single_idle_plugin_player_pane_g1

0xb3b6,	// (0x000270a1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x0002ba2e) list_single_idle_plugin_player_pane_g

0xdc61,	// (0x0002994c) list_single_idle_plugin_player_pane_t1

0xdc6f,	// (0x0002995a) list_single_idle_plugin_player_pane_t2

0xdc7d,	// (0x00029968) list_single_idle_plugin_player_pane_t3

0xdc8b,	// (0x00029976) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x0002ba33) list_single_idle_plugin_player_pane_t

0xdc99,	// (0x00029984) wait_bar_pane_cp15

0xdca1,	// (0x0002998c) grid_ai_notification_pane

0xb3b6,	// (0x000270a1) list_single_idle_plugin_notification_pane_g1

0xdcaa,	// (0x00029995) cell_ai_notification_pane_ParamLimits

0xdcaa,	// (0x00029995) cell_ai_notification_pane

0xdcb7,	// (0x000299a2) cell_ai_notification_pane_g1

0xdcbf,	// (0x000299aa) cell_ai_notification_pane_t1

0xdccd,	// (0x000299b8) tb_ext_find_button_pane

0xdcd5,	// (0x000299c0) tb_ext_find_pane_g1

0xdcdd,	// (0x000299c8) tb_ext_find_pane_t1

0x8b84,	// (0x0002486f) tb_ext_find_button_pane_g1

0xdceb,	// (0x000299d6) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x0002ba3c) tb_ext_find_button_pane_g

0xda88,	// (0x00029773) main_idle_act4_pane_t1_ParamLimits

0xda9a,	// (0x00029785) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x0002b9fa) main_idle_act4_pane_t_ParamLimits

0xdac2,	// (0x000297ad) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdad0,	// (0x000297bb) sat_plugin_idle_act4_pane_ParamLimits

0xdad0,	// (0x000297bb) sat_plugin_idle_act4_pane

0xdcf4,	// (0x000299df) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcf4,	// (0x000299df) sat_plugin_idle_act4_pane_t1

0xdd07,	// (0x000299f2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd07,	// (0x000299f2) sat_plugin_idle_act4_pane_t2

0xdd1a,	// (0x00029a05) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd1a,	// (0x00029a05) sat_plugin_idle_act4_pane_t3

0xdd2d,	// (0x00029a18) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd2d,	// (0x00029a18) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x0002ba41) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x0002ba41) sat_plugin_idle_act4_pane_t

0x5980,	// (0x0002166b) popup_battery_window_ParamLimits

0x5980,	// (0x0002166b) popup_battery_window

0x7eeb,	// (0x00023bd6) bg_popup_sub_pane_cp25_ParamLimits

0x7eeb,	// (0x00023bd6) bg_popup_sub_pane_cp25

0xdd40,	// (0x00029a2b) popup_battery_window_g1_ParamLimits

0xdd40,	// (0x00029a2b) popup_battery_window_g1

0xdd4c,	// (0x00029a37) popup_battery_window_t1_ParamLimits

0xdd4c,	// (0x00029a37) popup_battery_window_t1

0xdd5e,	// (0x00029a49) popup_battery_window_t2_ParamLimits

0xdd5e,	// (0x00029a49) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x0002ba4a) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x0002ba4a) popup_battery_window_t

0x91ae,	// (0x00024e99) midp_canvas_pane_ParamLimits

0x9225,	// (0x00024f10) midp_keypad_pane_ParamLimits

0x9225,	// (0x00024f10) midp_keypad_pane

0x94be,	// (0x000251a9) main_midp_pane_ParamLimits

0xbafc,	// (0x000277e7) signal_pane_g2_cp_ParamLimits

0xdd7b,	// (0x00029a66) aid_size_cell_midp_keypad_ParamLimits

0xdd7b,	// (0x00029a66) aid_size_cell_midp_keypad

0xdd95,	// (0x00029a80) midp_keyp_game_grid_pane_ParamLimits

0xdd95,	// (0x00029a80) midp_keyp_game_grid_pane

0xddb5,	// (0x00029aa0) midp_keyp_rocker_pane_ParamLimits

0xddb5,	// (0x00029aa0) midp_keyp_rocker_pane

0xddee,	// (0x00029ad9) midp_keyp_sk_left_pane_ParamLimits

0xddee,	// (0x00029ad9) midp_keyp_sk_left_pane

0xde48,	// (0x00029b33) midp_keyp_sk_right_pane_ParamLimits

0xde48,	// (0x00029b33) midp_keyp_sk_right_pane

0x31d9,	// (0x0001eec4) bg_button_pane_cp03

0xdea2,	// (0x00029b8d) midp_keyp_sk_left_pane_g1

0x31d9,	// (0x0001eec4) bg_button_pane_cp04

0xdea2,	// (0x00029b8d) midp_keyp_sk_right_pane_g1

0xc03b,	// (0x00027d26) midp_keyp_rocker_pane_g1

0xdeab,	// (0x00029b96) keyp_game_cell_pane_ParamLimits

0xdeab,	// (0x00029b96) keyp_game_cell_pane

0x31d9,	// (0x0001eec4) bg_button_pane_cp02

0xdebe,	// (0x00029ba9) keyp_game_cell_pane_g1

0x59c4,	// (0x000216af) popup_fep_vkb2_window_ParamLimits

0x59c4,	// (0x000216af) popup_fep_vkb2_window

0x701f,	// (0x00022d0a) aid_size_cell_vkb2_ParamLimits

0x701f,	// (0x00022d0a) aid_size_cell_vkb2

0x7073,	// (0x00022d5e) popup_fep_vkb2_window_g1_ParamLimits

0x7073,	// (0x00022d5e) popup_fep_vkb2_window_g1

0x70bb,	// (0x00022da6) vkb2_area_bottom_pane_ParamLimits

0x70bb,	// (0x00022da6) vkb2_area_bottom_pane

0x7107,	// (0x00022df2) vkb2_area_keypad_pane_ParamLimits

0x7107,	// (0x00022df2) vkb2_area_keypad_pane

0x7149,	// (0x00022e34) vkb2_area_top_pane_ParamLimits

0x7149,	// (0x00022e34) vkb2_area_top_pane

0x71c3,	// (0x00022eae) vkb2_top_entry_pane_ParamLimits

0x71c3,	// (0x00022eae) vkb2_top_entry_pane

0x71ed,	// (0x00022ed8) vkb2_top_grid_left_pane_ParamLimits

0x71ed,	// (0x00022ed8) vkb2_top_grid_left_pane

0x720b,	// (0x00022ef6) vkb2_top_grid_right_pane_ParamLimits

0x720b,	// (0x00022ef6) vkb2_top_grid_right_pane

0x7229,	// (0x00022f14) vkb2_cell_keypad_pane_ParamLimits

0x7229,	// (0x00022f14) vkb2_cell_keypad_pane

0x72fa,	// (0x00022fe5) vkb2_area_bottom_grid_pane_ParamLimits

0x72fa,	// (0x00022fe5) vkb2_area_bottom_grid_pane

0x7320,	// (0x0002300b) vkb2_area_bottom_pane_g1_ParamLimits

0x7320,	// (0x0002300b) vkb2_area_bottom_pane_g1

0x7344,	// (0x0002302f) vkb2_area_bottom_pane_g2_ParamLimits

0x7344,	// (0x0002302f) vkb2_area_bottom_pane_g2

0x7372,	// (0x0002305d) vkb2_area_bottom_pane_g3_ParamLimits

0x7372,	// (0x0002305d) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x0002ba4f) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x0002ba4f) vkb2_area_bottom_pane_g

0x73d3,	// (0x000230be) vkb2_top_cell_left_pane_ParamLimits

0x73d3,	// (0x000230be) vkb2_top_cell_left_pane

0xdecf,	// (0x00029bba) vkb2_top_entry_pane_g1_ParamLimits

0xdecf,	// (0x00029bba) vkb2_top_entry_pane_g1

0xdedd,	// (0x00029bc8) vkb2_top_entry_pane_t1_ParamLimits

0xdedd,	// (0x00029bc8) vkb2_top_entry_pane_t1

0xdf0f,	// (0x00029bfa) vkb2_top_entry_pane_t2_ParamLimits

0xdf0f,	// (0x00029bfa) vkb2_top_entry_pane_t2

0xdf41,	// (0x00029c2c) vkb2_top_entry_pane_t3_ParamLimits

0xdf41,	// (0x00029c2c) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x0002ba56) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x0002ba56) vkb2_top_entry_pane_t

0x7420,	// (0x0002310b) vkb2_top_grid_right_pane_g1_ParamLimits

0x7420,	// (0x0002310b) vkb2_top_grid_right_pane_g1

0x7436,	// (0x00023121) vkb2_top_grid_right_pane_g2_ParamLimits

0x7436,	// (0x00023121) vkb2_top_grid_right_pane_g2

0x744e,	// (0x00023139) vkb2_top_grid_right_pane_g3_ParamLimits

0x744e,	// (0x00023139) vkb2_top_grid_right_pane_g3

0x7466,	// (0x00023151) vkb2_top_grid_right_pane_g4_ParamLimits

0x7466,	// (0x00023151) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x0002ba5d) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x0002ba5d) vkb2_top_grid_right_pane_g

0x747c,	// (0x00023167) vkb2_top_cell_left_pane_g1

0x7493,	// (0x0002317e) vkb2_cell_keypad_pane_g1_ParamLimits

0x7493,	// (0x0002317e) vkb2_cell_keypad_pane_g1

0xdf65,	// (0x00029c50) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf65,	// (0x00029c50) vkb2_cell_keypad_pane_t1

0x74a1,	// (0x0002318c) vkb2_cell_bottom_grid_pane_ParamLimits

0x74a1,	// (0x0002318c) vkb2_cell_bottom_grid_pane

0x74da,	// (0x000231c5) vkb2_cell_bottom_grid_pane_g1

0xdb10,	// (0x000297fb) aid_call2_pane_cp02

0xdb18,	// (0x00029803) aid_call_pane_cp02

0xdb20,	// (0x0002980b) clock_digital_number_pane_cp10

0xdb28,	// (0x00029813) clock_digital_number_pane_cp11

0xdb30,	// (0x0002981b) clock_digital_number_pane_cp12

0xdb38,	// (0x00029823) clock_digital_number_pane_cp13

0xdb40,	// (0x0002982b) clock_digital_separator_pane_cp10

0x8b84,	// (0x0002486f) popup_clock_digital_analogue_window_cp2_g1

0x8b84,	// (0x0002486f) popup_clock_digital_analogue_window_cp2_g2

0xdb48,	// (0x00029833) popup_clock_digital_analogue_window_cp2_g3

0x8b84,	// (0x0002486f) popup_clock_digital_analogue_window_cp2_g4

0xdb48,	// (0x00029833) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x0002ba12) popup_clock_digital_analogue_window_cp2_g

0xdb50,	// (0x0002983b) popup_clock_digital_analogue_window_cp2_t1

0xdb5e,	// (0x00029849) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x0002ba1d) popup_clock_digital_analogue_window_cp2_t

0xc03b,	// (0x00027d26) clock_digital_number_pane_cp10_g1

0xc03b,	// (0x00027d26) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002b805) clock_digital_number_pane_cp10_g

0xc03b,	// (0x00027d26) clock_digital_separator_pane_cp10_g1

0xc03b,	// (0x00027d26) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002b805) clock_digital_separator_pane_cp10_g

0xd98c,	// (0x00029677) uniindi_top_pane_g3

0xd99d,	// (0x00029688) uniindi_top_pane_g4

0x72b4,	// (0x00022f9f) vkb2_row_keypad_pane_ParamLimits

0x72b4,	// (0x00022f9f) vkb2_row_keypad_pane

0x74f6,	// (0x000231e1) vkb2_cell_t_keypad_pane_ParamLimits

0x74f6,	// (0x000231e1) vkb2_cell_t_keypad_pane

0x7506,	// (0x000231f1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7506,	// (0x000231f1) vkb2_cell_t_keypad_pane_cp08

0x7519,	// (0x00023204) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7519,	// (0x00023204) vkb2_cell_t_keypad_pane_cp09

0x752d,	// (0x00023218) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x752d,	// (0x00023218) vkb2_cell_t_keypad_pane_cp01

0x753e,	// (0x00023229) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x753e,	// (0x00023229) vkb2_cell_t_keypad_pane_cp02

0x754f,	// (0x0002323a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x754f,	// (0x0002323a) vkb2_cell_t_keypad_pane_cp03

0x7560,	// (0x0002324b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7560,	// (0x0002324b) vkb2_cell_t_keypad_pane_cp04

0x7571,	// (0x0002325c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7571,	// (0x0002325c) vkb2_cell_t_keypad_pane_cp05

0x7582,	// (0x0002326d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7582,	// (0x0002326d) vkb2_cell_t_keypad_pane_cp06

0x7593,	// (0x0002327e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7593,	// (0x0002327e) vkb2_cell_t_keypad_pane_cp07

0x75a4,	// (0x0002328f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x75a4,	// (0x0002328f) vkb2_cell_t_keypad_pane_cp10

0xc2b9,	// (0x00027fa4) vkb2_cell_t_keypad_pane_g1

0xdf7c,	// (0x00029c67) vkb2_cell_t_keypad_pane_t1

0x31d9,	// (0x0001eec4) popup_grid_graphic2_window

0xdf8e,	// (0x00029c79) aid_size_cell_graphic2_ParamLimits

0xdf8e,	// (0x00029c79) aid_size_cell_graphic2

0xdfc6,	// (0x00029cb1) bg_popup_window_pane_cp21_ParamLimits

0xdfc6,	// (0x00029cb1) bg_popup_window_pane_cp21

0xdfd4,	// (0x00029cbf) graphic2_pages_pane_ParamLimits

0xdfd4,	// (0x00029cbf) graphic2_pages_pane

0xe01a,	// (0x00029d05) grid_graphic2_control_pane_ParamLimits

0xe01a,	// (0x00029d05) grid_graphic2_control_pane

0xe058,	// (0x00029d43) grid_graphic2_pane_ParamLimits

0xe058,	// (0x00029d43) grid_graphic2_pane

0xe0cc,	// (0x00029db7) cell_graphic2_pane

0x31d9,	// (0x0001eec4) main_comp_mode_pane

0xd1f8,	// (0x00028ee3) list_ai3_gene_pane_ParamLimits

0xd5ce,	// (0x000292b9) bg_popup_window_pane_cp19_ParamLimits

0xd5da,	// (0x000292c5) bg_touch_area_indi_pane_ParamLimits

0xd5da,	// (0x000292c5) bg_touch_area_indi_pane

0xd5f0,	// (0x000292db) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5f0,	// (0x000292db) bg_touch_area_indi_pane_cp01

0xd606,	// (0x000292f1) bg_touch_area_indi_pane_cp02_ParamLimits

0xd606,	// (0x000292f1) bg_touch_area_indi_pane_cp02

0xd61c,	// (0x00029307) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61c,	// (0x00029307) bg_touch_area_indi_pane_cp03

0xd636,	// (0x00029321) popup_slider_window_g1_ParamLimits

0xd652,	// (0x0002933d) popup_slider_window_g2_ParamLimits

0xd66e,	// (0x00029359) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x0002b9a7) popup_slider_window_g_ParamLimits

0xd6d4,	// (0x000293bf) popup_slider_window_t1_ParamLimits

0xd748,	// (0x00029433) small_volume_slider_vertical_pane_ParamLimits

0xe0cc,	// (0x00029db7) cell_graphic2_pane_ParamLimits

0xe11b,	// (0x00029e06) bg_button_pane_cp10_ParamLimits

0xe11b,	// (0x00029e06) bg_button_pane_cp10

0xe12e,	// (0x00029e19) bg_button_pane_cp11_ParamLimits

0xe12e,	// (0x00029e19) bg_button_pane_cp11

0xe141,	// (0x00029e2c) graphic2_pages_pane_g1_ParamLimits

0xe141,	// (0x00029e2c) graphic2_pages_pane_g1

0xe15c,	// (0x00029e47) graphic2_pages_pane_g2_ParamLimits

0xe15c,	// (0x00029e47) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x0002ba6b) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x0002ba6b) graphic2_pages_pane_g

0xe174,	// (0x00029e5f) graphic2_pages_pane_t1_ParamLimits

0xe174,	// (0x00029e5f) graphic2_pages_pane_t1

0xe18c,	// (0x00029e77) cell_graphic2_control_pane_ParamLimits

0xe18c,	// (0x00029e77) cell_graphic2_control_pane

0xe1aa,	// (0x00029e95) cell_graphic2_pane_g1_ParamLimits

0xe1aa,	// (0x00029e95) cell_graphic2_pane_g1

0xe1b7,	// (0x00029ea2) cell_graphic2_pane_g2_ParamLimits

0xe1b7,	// (0x00029ea2) cell_graphic2_pane_g2

0xe1c4,	// (0x00029eaf) cell_graphic2_pane_g3_ParamLimits

0xe1c4,	// (0x00029eaf) cell_graphic2_pane_g3

0xe1d1,	// (0x00029ebc) cell_graphic2_pane_g4_ParamLimits

0xe1d1,	// (0x00029ebc) cell_graphic2_pane_g4

0xe1de,	// (0x00029ec9) cell_graphic2_pane_g5_ParamLimits

0xe1de,	// (0x00029ec9) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x0002ba70) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x0002ba70) cell_graphic2_pane_g

0xe1f7,	// (0x00029ee2) cell_graphic2_pane_t1_ParamLimits

0xe1f7,	// (0x00029ee2) cell_graphic2_pane_t1

0x9a5c,	// (0x00025747) grid_highlight_pane_cp11_ParamLimits

0x9a5c,	// (0x00025747) grid_highlight_pane_cp11

0x7eeb,	// (0x00023bd6) bg_button_pane_cp05

0xe24e,	// (0x00029f39) cell_graphic2_control_pane_g1

0xc03b,	// (0x00027d26) bg_touch_area_indi_pane_g1

0xe276,	// (0x00029f61) aid_cmod_rocker_key_size

0xe280,	// (0x00029f6b) aid_cmode_itu_key_size

0xe28a,	// (0x00029f75) main_cmode_video_pane

0xe294,	// (0x00029f7f) main_comp_mode_itu_pane

0xe2a0,	// (0x00029f8b) main_comp_mode_rocker_pane

0xe2ac,	// (0x00029f97) cell_cmode_rocker_pane_ParamLimits

0xe2ac,	// (0x00029f97) cell_cmode_rocker_pane

0xe2be,	// (0x00029fa9) cell_cmode_itu_pane_ParamLimits

0xe2be,	// (0x00029fa9) cell_cmode_itu_pane

0x84ef,	// (0x000241da) bg_button_pane_cp06_ParamLimits

0x84ef,	// (0x000241da) bg_button_pane_cp06

0xc2b9,	// (0x00027fa4) cell_cmode_rocker_pane_g1_ParamLimits

0xc2b9,	// (0x00027fa4) cell_cmode_rocker_pane_g1

0xd7ec,	// (0x000294d7) cell_cmode_rocker_pane_g2_ParamLimits

0xd7ec,	// (0x000294d7) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x0002ba80) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x0002ba80) cell_cmode_rocker_pane_g

0x31d9,	// (0x0001eec4) bg_button_pane_cp07

0xe2d3,	// (0x00029fbe) cell_cmode_itu_pane_g1

0xe2dc,	// (0x00029fc7) cell_cmode_itu_pane_t1

0xe2ea,	// (0x00029fd5) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x0002ba85) cell_cmode_itu_pane_t

0xda0f,	// (0x000296fa) aid_touch_ctrl_left

0xda17,	// (0x00029702) aid_touch_ctrl_right

0x31d9,	// (0x0001eec4) compa_mode_pane

0xe2f8,	// (0x00029fe3) aid_cmod_rocker_key_size_cp

0xe302,	// (0x00029fed) aid_cmode_itu_key_size_cp

0xe30c,	// (0x00029ff7) compa_mode_pane_g1

0xe314,	// (0x00029fff) compa_mode_pane_g2

0xe31c,	// (0x0002a007) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x0002ba8a) compa_mode_pane_g

0xe324,	// (0x0002a00f) main_comp_mode_itu_pane_cp

0xe32c,	// (0x0002a017) main_comp_mode_rocker_pane_cp

0xe334,	// (0x0002a01f) cell_cmode_itu_pane_cp_ParamLimits

0xe334,	// (0x0002a01f) cell_cmode_itu_pane_cp

0xe349,	// (0x0002a034) cell_cmode_rocker_pane_cp_ParamLimits

0xe349,	// (0x0002a034) cell_cmode_rocker_pane_cp

0x84ef,	// (0x000241da) bg_button_pane_cp06_cp_ParamLimits

0x84ef,	// (0x000241da) bg_button_pane_cp06_cp

0xc2b9,	// (0x00027fa4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2b9,	// (0x00027fa4) cell_cmode_rocker_pane_g1_cp

0xc03b,	// (0x00027d26) cell_cmode_rocker_pane_g2_cp

0x31d9,	// (0x0001eec4) bg_button_pane_cp07_cp

0xaf42,	// (0x00026c2d) cell_cmode_itu_pane_g1_cp

0xe35b,	// (0x0002a046) cell_cmode_itu_pane_t1_cp

0xe35b,	// (0x0002a046) cell_cmode_itu_pane_t2_cp

0xaf2f,	// (0x00026c1a) settings_code_pane_cp2

0x7c62,	// (0x0002394d) bg_popup_window_pane_cp3_ParamLimits

0x80eb,	// (0x00023dd6) heading_pane_cp3_ParamLimits

0x80fa,	// (0x00023de5) listscroll_popup_graphic_pane_ParamLimits

0x6bcd,	// (0x000228b8) fep_hwr_aid_pane_ParamLimits

0x6f96,	// (0x00022c81) aid_touch_sctrl_top_ParamLimits

0x6fa3,	// (0x00022c8e) sctrl_sk_top_pane_g1_ParamLimits

0xc2b9,	// (0x00027fa4) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x0002b9c0) sctrl_sk_top_pane_g_ParamLimits

0x6fb0,	// (0x00022c9b) sctrl_sk_top_pane_t1_ParamLimits

0x6f96,	// (0x00022c81) aid_touch_sctrl_bottom_ParamLimits

0x6fb0,	// (0x00022c9b) sctrl_sk_bottom_pane_t1_ParamLimits

0xd958,	// (0x00029643) aid_area_touch_clock

0x718b,	// (0x00022e76) aid_vkb2_area_top_pane_cell_ParamLimits

0x718b,	// (0x00022e76) aid_vkb2_area_top_pane_cell

0x72d6,	// (0x00022fc1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x72d6,	// (0x00022fc1) aid_vkb2_area_bottom_pane_cell

0xdec7,	// (0x00029bb2) popup_char_count_window

0xe369,	// (0x0002a054) popup_char_count_window_g1

0xe372,	// (0x0002a05d) popup_char_count_window_g2

0xe37b,	// (0x0002a066) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x0002ba91) popup_char_count_window_g

0xe384,	// (0x0002a06f) popup_char_count_window_t1

0x7051,	// (0x00022d3c) popup_fep_char_preview_window_ParamLimits

0x7051,	// (0x00022d3c) popup_fep_char_preview_window

0x71a9,	// (0x00022e94) vkb2_top_candi_pane_ParamLimits

0x71a9,	// (0x00022e94) vkb2_top_candi_pane

0xe392,	// (0x0002a07d) cell_vkb2_top_candi_pane_ParamLimits

0xe392,	// (0x0002a07d) cell_vkb2_top_candi_pane

0xa077,	// (0x00025d62) bg_popup_fep_char_preview_window_ParamLimits

0xa077,	// (0x00025d62) bg_popup_fep_char_preview_window

0x75b9,	// (0x000232a4) popup_fep_char_preview_window_t1_ParamLimits

0x75b9,	// (0x000232a4) popup_fep_char_preview_window_t1

0xe3df,	// (0x0002a0ca) bg_popup_fep_char_preview_window_g1

0xe3e7,	// (0x0002a0d2) bg_popup_fep_char_preview_window_g2

0xe3ef,	// (0x0002a0da) bg_popup_fep_char_preview_window_g3

0xe3f7,	// (0x0002a0e2) bg_popup_fep_char_preview_window_g4

0xe3ff,	// (0x0002a0ea) bg_popup_fep_char_preview_window_g5

0xe407,	// (0x0002a0f2) bg_popup_fep_char_preview_window_g6

0xe40f,	// (0x0002a0fa) bg_popup_fep_char_preview_window_g7

0xe417,	// (0x0002a102) bg_popup_fep_char_preview_window_g8

0xe41f,	// (0x0002a10a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x0002ba98) bg_popup_fep_char_preview_window_g

0xc2b9,	// (0x00027fa4) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2b9,	// (0x00027fa4) cell_vkb2_top_candi_pane_g1

0xc6d9,	// (0x000283c4) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc6d9,	// (0x000283c4) cell_vkb2_top_candi_pane_g2

0xc6fa,	// (0x000283e5) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc6fa,	// (0x000283e5) cell_vkb2_top_candi_pane_g3

0x75fb,	// (0x000232e6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x75fb,	// (0x000232e6) cell_vkb2_top_candi_pane_g4

0xe21b,	// (0x00029f06) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe21b,	// (0x00029f06) cell_vkb2_top_candi_pane_g5

0xd7ec,	// (0x000294d7) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7ec,	// (0x000294d7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x0002baad) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x0002baad) cell_vkb2_top_candi_pane_g

0x761c,	// (0x00023307) cell_vkb2_top_candi_pane_t1

0x6a2d,	// (0x00022718) aid_size_touch_slider_mark_ParamLimits

0x6a2d,	// (0x00022718) aid_size_touch_slider_mark

0xe00a,	// (0x00029cf5) grid_graphic2_catg_pane_ParamLimits

0xe00a,	// (0x00029cf5) grid_graphic2_catg_pane

0xe0a8,	// (0x00029d93) popup_grid_graphic2_window_t1_ParamLimits

0xe0a8,	// (0x00029d93) popup_grid_graphic2_window_t1

0xe0ba,	// (0x00029da5) popup_grid_graphic2_window_t2_ParamLimits

0xe0ba,	// (0x00029da5) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x0002ba66) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x0002ba66) popup_grid_graphic2_window_t

0x7eeb,	// (0x00023bd6) bg_button_pane_cp05_ParamLimits

0xe24e,	// (0x00029f39) cell_graphic2_control_pane_g1_ParamLimits

0xe427,	// (0x0002a112) cell_graphic2_catg_pane_ParamLimits

0xe427,	// (0x0002a112) cell_graphic2_catg_pane

0x31d9,	// (0x0001eec4) bg_button_pane_cp12

0xe439,	// (0x0002a124) cell_graphic2_catg_pane_g1

0xd924,	// (0x0002960f) cell_tb_ext_pane_t1_ParamLimits

0x73f3,	// (0x000230de) vkb2_top_cell_right_narrow_pane_ParamLimits

0x73f3,	// (0x000230de) vkb2_top_cell_right_narrow_pane

0x740b,	// (0x000230f6) vkb2_top_cell_right_wide_pane_ParamLimits

0x740b,	// (0x000230f6) vkb2_top_cell_right_wide_pane

0x6bbf,	// (0x000228aa) bg_vkb2_func_pane_ParamLimits

0x6bbf,	// (0x000228aa) bg_vkb2_func_pane

0x747c,	// (0x00023167) vkb2_top_cell_left_pane_g1_ParamLimits

0x6bbf,	// (0x000228aa) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6bbf,	// (0x000228aa) bg_vkb2_fuc_pane_cp03

0x74da,	// (0x000231c5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99f0,	// (0x000256db) bg_vkb2_func_pane_g1

0x99f8,	// (0x000256e3) bg_vkb2_func_pane_g2

0x9a08,	// (0x000256f3) bg_vkb2_func_pane_g3

0x9a00,	// (0x000256eb) bg_vkb2_func_pane_g4

0x9a10,	// (0x000256fb) bg_vkb2_func_pane_g5

0x9a18,	// (0x00025703) bg_vkb2_func_pane_g6

0x9a20,	// (0x0002570b) bg_vkb2_func_pane_g7

0x9a28,	// (0x00025713) bg_vkb2_func_pane_g8

0x99e8,	// (0x000256d3) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x0002baba) bg_vkb2_func_pane_g

0x6bbf,	// (0x000228aa) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6bbf,	// (0x000228aa) bg_vkb2_fuc_pane_cp01

0x747c,	// (0x00023167) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x747c,	// (0x00023167) vkb2_top_cell_right_wide_pane_g1

0x6bbf,	// (0x000228aa) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6bbf,	// (0x000228aa) bg_vkb2_fuc_pane_cp02

0x74da,	// (0x000231c5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x74da,	// (0x000231c5) vkb2_top_cell_right_narrow_pane_g1

0xd548,	// (0x00029233) aid_touch_area_decrease_ParamLimits

0xd548,	// (0x00029233) aid_touch_area_decrease

0xd56c,	// (0x00029257) aid_touch_area_increase_ParamLimits

0xd56c,	// (0x00029257) aid_touch_area_increase

0xd584,	// (0x0002926f) aid_touch_area_mute_ParamLimits

0xd584,	// (0x0002926f) aid_touch_area_mute

0xd5a0,	// (0x0002928b) aid_touch_area_slider_ParamLimits

0xd5a0,	// (0x0002928b) aid_touch_area_slider

0xd68a,	// (0x00029375) popup_slider_window_g4_ParamLimits

0xd68a,	// (0x00029375) popup_slider_window_g4

0xd6a2,	// (0x0002938d) popup_slider_window_g5_ParamLimits

0xd6a2,	// (0x0002938d) popup_slider_window_g5

0xd6c4,	// (0x000293af) popup_slider_window_g6_ParamLimits

0xd6c4,	// (0x000293af) popup_slider_window_g6

0xd702,	// (0x000293ed) popup_slider_window_t2_ParamLimits

0xd702,	// (0x000293ed) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x0002b9b4) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x0002b9b4) popup_slider_window_t

0xd71a,	// (0x00029405) slider_pane_ParamLimits

0xd71a,	// (0x00029405) slider_pane

0xe442,	// (0x0002a12d) slider_pane_g1_ParamLimits

0xe442,	// (0x0002a12d) slider_pane_g1

0xe456,	// (0x0002a141) slider_pane_g2_ParamLimits

0xe456,	// (0x0002a141) slider_pane_g2

0xe46c,	// (0x0002a157) slider_pane_g3_ParamLimits

0xe46c,	// (0x0002a157) slider_pane_g3

0x0003,

0xfde2,	// (0x0002bacd) slider_pane_g_ParamLimits

0xfde2,	// (0x0002bacd) slider_pane_g

0x6660,	// (0x0002234b) popup_tb_float_extension_window_ParamLimits

0x6660,	// (0x0002234b) popup_tb_float_extension_window

0xe498,	// (0x0002a183) aid_size_cell_tb_float_ext

0x31d9,	// (0x0001eec4) bg_popup_sub_window_cp28

0xe4a4,	// (0x0002a18f) grid_tb_float_ext_pane

0xe4ae,	// (0x0002a199) cell_tb_float_ext_pane_ParamLimits

0xe4ae,	// (0x0002a199) cell_tb_float_ext_pane

0xe4c8,	// (0x0002a1b3) cell_tb_float_ext_pane_g1

0xe4d1,	// (0x0002a1bc) grid_highlight_pane_cp12

0x6d00,	// (0x000229eb) cell_last_hwr_side_pane_ParamLimits

0x6d00,	// (0x000229eb) cell_last_hwr_side_pane

0xc03b,	// (0x00027d26) cell_last_hwr_side_pane_g1

0xe4da,	// (0x0002a1c5) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x0002bad6) cell_last_hwr_side_pane_g

0x73a2,	// (0x0002308d) vkb2_area_bottom_space_btn_pane_ParamLimits

0x73a2,	// (0x0002308d) vkb2_area_bottom_space_btn_pane

0xc2b9,	// (0x00027fa4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf7c,	// (0x00029c67) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x761c,	// (0x00023307) cell_vkb2_top_candi_pane_t1_ParamLimits

0x763b,	// (0x00023326) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x763b,	// (0x00023326) vkb2_area_bottom_space_btn_pane_g1

0x7675,	// (0x00023360) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7675,	// (0x00023360) vkb2_area_bottom_space_btn_pane_g2

0x76ab,	// (0x00023396) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x76ab,	// (0x00023396) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x0002badb) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x0002badb) vkb2_area_bottom_space_btn_pane_g

0x6c74,	// (0x0002295f) cel_fep_hwr_func_pane_ParamLimits

0x6c74,	// (0x0002295f) cel_fep_hwr_func_pane

0x6cb0,	// (0x0002299b) cell_hwr_side_button_pane_ParamLimits

0x6cb0,	// (0x0002299b) cell_hwr_side_button_pane

0xd958,	// (0x00029643) aid_area_touch_clock_ParamLimits

0x7eeb,	// (0x00023bd6) bg_uniindi_top_pane_ParamLimits

0xd96a,	// (0x00029655) uniindi_top_pane_g1_ParamLimits

0xd980,	// (0x0002966b) uniindi_top_pane_g2_ParamLimits

0xd98c,	// (0x00029677) uniindi_top_pane_g3_ParamLimits

0xd99d,	// (0x00029688) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x0002b9ec) uniindi_top_pane_g_ParamLimits

0xd9aa,	// (0x00029695) uniindi_top_pane_t1_ParamLimits

0x7eeb,	// (0x00023bd6) bg_vkb2_func_pane_cp01_ParamLimits

0x7eeb,	// (0x00023bd6) bg_vkb2_func_pane_cp01

0xe4e3,	// (0x0002a1ce) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e3,	// (0x0002a1ce) cel_fep_hwr_func_pane_g1

0x7eeb,	// (0x00023bd6) bg_vkb2_func_pane_cp02_ParamLimits

0x7eeb,	// (0x00023bd6) bg_vkb2_func_pane_cp02

0xe4e3,	// (0x0002a1ce) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e3,	// (0x0002a1ce) cell_hwr_side_button_pane_g1

0x9869,	// (0x00025554) status_pane_g4_ParamLimits

0x9869,	// (0x00025554) status_pane_g4

0x9883,	// (0x0002556e) status_pane_t1

0xbd80,	// (0x00027a6b) form2_midp_gauge_slider_cont_pane

0xbd88,	// (0x00027a73) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd9a,	// (0x00027a85) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdac,	// (0x00027a97) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0002b7b8) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdbe,	// (0x00027aa9) form2_midp_slider_pane_ParamLimits

0x7011,	// (0x00022cfc) aid_size_cell_func_vkb2_ParamLimits

0x7011,	// (0x00022cfc) aid_size_cell_func_vkb2

0xe484,	// (0x0002a16f) slider_pane_g4_ParamLimits

0xe484,	// (0x0002a16f) slider_pane_g4

0x76f5,	// (0x000233e0) form2_midp_gauge_slider_pane_t2_cp01

0x7703,	// (0x000233ee) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7703,	// (0x000233ee) form2_midp_gauge_slider_pane_t3_cp01

0x7720,	// (0x0002340b) form2_midp_slider_pane_cp01

0x31d9,	// (0x0001eec4) navi_smil_pane

0xe51c,	// (0x0002a207) navi_smil_pane_g1

0xe524,	// (0x0002a20f) navi_smil_pane_t1

0xe4f1,	// (0x0002a1dc) form2_midp_slider_pane_g1

0xe4fa,	// (0x0002a1e5) form2_midp_slider_pane_g2

0xe502,	// (0x0002a1ed) form2_midp_slider_pane_g3

0xe4f1,	// (0x0002a1dc) form2_midp_slider_pane_g4

0xe50a,	// (0x0002a1f5) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0002bae4) form2_midp_slider_pane_g

0x76e5,	// (0x000233d0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x76e5,	// (0x000233d0) vkb2_area_bottom_space_btn_pane_g4

0x9698,	// (0x00025383) lc0_navi_pane_ParamLimits

0x9698,	// (0x00025383) lc0_navi_pane

0x970e,	// (0x000253f9) lc0_stat_indi_pane_ParamLimits

0x970e,	// (0x000253f9) lc0_stat_indi_pane

0x9725,	// (0x00025410) ls0_title_pane_ParamLimits

0x9725,	// (0x00025410) ls0_title_pane

0x84ef,	// (0x000241da) bg_popup_sub_pane_cp14_ParamLimits

0xd93f,	// (0x0002962a) list_uniindi_pane_ParamLimits

0xd94b,	// (0x00029636) uniindi_top_pane_ParamLimits

0xd9e7,	// (0x000296d2) list_single_uniindi_pane_g1_ParamLimits

0xd9fa,	// (0x000296e5) list_single_uniindi_pane_t1_ParamLimits

0x7729,	// (0x00023414) lc0_stat_clock_pane_ParamLimits

0x7729,	// (0x00023414) lc0_stat_clock_pane

0xe532,	// (0x0002a21d) lc0_stat_indi_pane_g1_ParamLimits

0xe532,	// (0x0002a21d) lc0_stat_indi_pane_g1

0xe53f,	// (0x0002a22a) lc0_stat_indi_pane_g2_ParamLimits

0xe53f,	// (0x0002a22a) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x0002baef) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x0002baef) lc0_stat_indi_pane_g

0x7736,	// (0x00023421) lc0_uni_indicator_pane_ParamLimits

0x7736,	// (0x00023421) lc0_uni_indicator_pane

0xe54c,	// (0x0002a237) ls0_title_pane_g1_ParamLimits

0xe54c,	// (0x0002a237) ls0_title_pane_g1

0xe560,	// (0x0002a24b) ls0_title_pane_t1_ParamLimits

0xe560,	// (0x0002a24b) ls0_title_pane_t1

0x7743,	// (0x0002342e) lc0_uni_indicator_pane_g1_ParamLimits

0x7743,	// (0x0002342e) lc0_uni_indicator_pane_g1

0xe596,	// (0x0002a281) lc0_stat_clock_pane_t1

0x31d9,	// (0x0001eec4) main_ai5_pane

0xe5a4,	// (0x0002a28f) ai5_sk_pane_ParamLimits

0xe5a4,	// (0x0002a28f) ai5_sk_pane

0xe5b1,	// (0x0002a29c) cell_ai5_widget_pane_ParamLimits

0xe5b1,	// (0x0002a29c) cell_ai5_widget_pane

0xe67a,	// (0x0002a365) aid_size_cell_widget_grid

0xe690,	// (0x0002a37b) bg_ai5_widget_pane_ParamLimits

0xe690,	// (0x0002a37b) bg_ai5_widget_pane

0xe70c,	// (0x0002a3f7) cell_ai5_widget_pane_g2

0xe720,	// (0x0002a40b) cell_ai5_widget_pane_g3

0xe73a,	// (0x0002a425) cell_ai5_widget_pane_g4

0xe74a,	// (0x0002a435) cell_ai5_widget_pane_g5

0xe75a,	// (0x0002a445) cell_ai5_widget_pane_g6

0xe766,	// (0x0002a451) cell_ai5_widget_pane_g7

0xe7d2,	// (0x0002a4bd) cell_ai5_widget_pane_t1_ParamLimits

0xe7d2,	// (0x0002a4bd) cell_ai5_widget_pane_t1

0xe7ef,	// (0x0002a4da) cell_ai5_widget_pane_t2_ParamLimits

0xe7ef,	// (0x0002a4da) cell_ai5_widget_pane_t2

0xe807,	// (0x0002a4f2) cell_ai5_widget_pane_t3_ParamLimits

0xe807,	// (0x0002a4f2) cell_ai5_widget_pane_t3

0xe81f,	// (0x0002a50a) cell_ai5_widget_pane_t4_ParamLimits

0xe81f,	// (0x0002a50a) cell_ai5_widget_pane_t4

0xe845,	// (0x0002a530) cell_ai5_widget_pane_t5_ParamLimits

0xe845,	// (0x0002a530) cell_ai5_widget_pane_t5

0xe864,	// (0x0002a54f) cell_ai5_widget_pane_t6_ParamLimits

0xe864,	// (0x0002a54f) cell_ai5_widget_pane_t6

0xe876,	// (0x0002a561) cell_ai5_widget_pane_t7_ParamLimits

0xe876,	// (0x0002a561) cell_ai5_widget_pane_t7

0xe895,	// (0x0002a580) cell_ai5_widget_pane_t8_ParamLimits

0xe895,	// (0x0002a580) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x0002bb0f) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x0002bb0f) cell_ai5_widget_pane_t

0xe919,	// (0x0002a604) grid_ai5_widget_pane

0x84ef,	// (0x000241da) highlight_cell_ai5_widget_pane_ParamLimits

0x84ef,	// (0x000241da) highlight_cell_ai5_widget_pane

0xe930,	// (0x0002a61b) ai5_sk_left_pane

0xe93a,	// (0x0002a625) ai5_sk_middle_pane

0xe944,	// (0x0002a62f) ai5_sk_right_pane

0xe94e,	// (0x0002a639) bg_ai5_widget_pane_g1_ParamLimits

0xe94e,	// (0x0002a639) bg_ai5_widget_pane_g1

0xe95a,	// (0x0002a645) bg_ai5_widget_pane_g2_ParamLimits

0xe95a,	// (0x0002a645) bg_ai5_widget_pane_g2

0xe966,	// (0x0002a651) bg_ai5_widget_pane_g3_ParamLimits

0xe966,	// (0x0002a651) bg_ai5_widget_pane_g3

0xe972,	// (0x0002a65d) bg_ai5_widget_pane_g4_ParamLimits

0xe972,	// (0x0002a65d) bg_ai5_widget_pane_g4

0xe97e,	// (0x0002a669) bg_ai5_widget_pane_g5_ParamLimits

0xe97e,	// (0x0002a669) bg_ai5_widget_pane_g5

0xe98a,	// (0x0002a675) bg_ai5_widget_pane_g6_ParamLimits

0xe98a,	// (0x0002a675) bg_ai5_widget_pane_g6

0xe996,	// (0x0002a681) bg_ai5_widget_pane_g7_ParamLimits

0xe996,	// (0x0002a681) bg_ai5_widget_pane_g7

0xe9a2,	// (0x0002a68d) bg_ai5_widget_pane_g8_ParamLimits

0xe9a2,	// (0x0002a68d) bg_ai5_widget_pane_g8

0xe9ae,	// (0x0002a699) bg_ai5_widget_pane_g9_ParamLimits

0xe9ae,	// (0x0002a699) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x0002bb28) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x0002bb28) bg_ai5_widget_pane_g

0xe9e0,	// (0x0002a6cb) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9e0,	// (0x0002a6cb) cell_shortcut_ai5_widget_pane

0x919a,	// (0x00024e85) bg_cell_shortcut_ai5_widget_pane

0xe9f1,	// (0x0002a6dc) cell_grid_ai5_widget_pane_g1

0x919a,	// (0x00024e85) highlight_cell_shortcut_ai5_widget_pane

0x99f8,	// (0x000256e3) ai5_sk_left_pane_g1

0xe9fa,	// (0x0002a6e5) ai5_sk_left_pane_g2

0xea02,	// (0x0002a6ed) ai5_sk_left_pane_g3

0xea0a,	// (0x0002a6f5) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x0002bb3b) ai5_sk_left_pane_g

0xea12,	// (0x0002a6fd) ai5_sk_left_pane_t1

0x99f0,	// (0x000256db) ai5_sk_right_pane_g1

0xea20,	// (0x0002a70b) ai5_sk_right_pane_g2

0xea28,	// (0x0002a713) ai5_sk_right_pane_g3

0xea30,	// (0x0002a71b) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x0002bb44) ai5_sk_right_pane_g

0xea38,	// (0x0002a723) ai5_sk_right_pane_t1

0x99f0,	// (0x000256db) ai5_sk_middle_pane_g1

0x99f8,	// (0x000256e3) ai5_sk_middle_pane_g2

0x9a10,	// (0x000256fb) ai5_sk_middle_pane_g3

0xea28,	// (0x0002a713) ai5_sk_middle_pane_g4

0xea02,	// (0x0002a6ed) ai5_sk_middle_pane_g5

0xea46,	// (0x0002a731) ai5_sk_middle_pane_g6

0xea4e,	// (0x0002a739) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x0002bb4d) ai5_sk_middle_pane_g

0x951e,	// (0x00025209) aid_touch_area_size_lc0_ParamLimits

0x951e,	// (0x00025209) aid_touch_area_size_lc0

0x6dff,	// (0x00022aea) cell_hwr_candidate_pane_t1_ParamLimits

0x953a,	// (0x00025225) aid_touch_navi_pane

0x9813,	// (0x000254fe) status_dt_navi_pane_ParamLimits

0x9813,	// (0x000254fe) status_dt_navi_pane

0x9820,	// (0x0002550b) status_dt_sta_pane_ParamLimits

0x9820,	// (0x0002550b) status_dt_sta_pane

0xea56,	// (0x0002a741) dt_sta_controll_pane

0xea63,	// (0x0002a74e) dt_sta_indi_pane

0xea74,	// (0x0002a75f) dt_sta_title_pane

0x7eeb,	// (0x00023bd6) bg_dt_sta_indi_pane_ParamLimits

0x7eeb,	// (0x00023bd6) bg_dt_sta_indi_pane

0xea87,	// (0x0002a772) dt_sta_battery_pane

0xea8f,	// (0x0002a77a) dt_sta_indi_pane_g1

0xea98,	// (0x0002a783) dt_sta_indi_pane_g2

0xeaa1,	// (0x0002a78c) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x0002bb5c) dt_sta_indi_pane_g

0xeaaa,	// (0x0002a795) dt_sta_signal_pane

0x84ef,	// (0x000241da) bg_dt_sta_title_pane_ParamLimits

0x84ef,	// (0x000241da) bg_dt_sta_title_pane

0xeab3,	// (0x0002a79e) dt_sta_title_pane_g1

0xeabb,	// (0x0002a7a6) dt_sta_title_pane_t1_ParamLimits

0xeabb,	// (0x0002a7a6) dt_sta_title_pane_t1

0x31d9,	// (0x0001eec4) bg_dt_sta_control_pane

0xead0,	// (0x0002a7bb) dt_sta_controll_pane_g1

0xead9,	// (0x0002a7c4) bg_dt_sta_title_pane_g1

0xeae2,	// (0x0002a7cd) bg_dt_sta_title_pane_g2

0xeaeb,	// (0x0002a7d6) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x0002bb63) bg_dt_sta_title_pane_g

0xc03b,	// (0x00027d26) bg_dt_sta_indi_pane_g1

0xeaf4,	// (0x0002a7df) dt_sta_signal_pane_g1

0xeafc,	// (0x0002a7e7) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x0002bb6a) dt_sta_signal_pane_g

0xeb04,	// (0x0002a7ef) dt_sta_battery_pane_g1

0xeb0d,	// (0x0002a7f8) dt_sta_battery_pane_t1

0xc03b,	// (0x00027d26) bg_dt_sta_control_pane_g1

0x8c96,	// (0x00024981) fep_china_uni_eep_pane

0x8c9e,	// (0x00024989) fep_china_uni_entry_pane_ParamLimits

0x8cae,	// (0x00024999) popup_fep_china_uni_window_g1_ParamLimits

0x8cbe,	// (0x000249a9) popup_fep_china_uni_window_g2_ParamLimits

0x8cbe,	// (0x000249a9) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0002b3e3) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0002b3e3) popup_fep_china_uni_window_g

0xeb1c,	// (0x0002a807) fep_china_uni_eep_pane_g1

0xeb24,	// (0x0002a80f) fep_china_uni_eep_pane_t1

0xe513,	// (0x0002a1fe) aid_touch_area_size_smil_player

0x9690,	// (0x0002537b) lc0_clock_pane

0x9877,	// (0x00025562) status_pane_g5_ParamLimits

0x9877,	// (0x00025562) status_pane_g5

0x6325,	// (0x00022010) popup_keymap_window

0x9835,	// (0x00025520) status_icon_pane

0xe720,	// (0x0002a40b) cell_ai5_widget_pane_g3_ParamLimits

0xe73a,	// (0x0002a425) cell_ai5_widget_pane_g4_ParamLimits

0xe74a,	// (0x0002a435) cell_ai5_widget_pane_g5_ParamLimits

0xe772,	// (0x0002a45d) cell_ai5_widget_pane_g8_ParamLimits

0xe772,	// (0x0002a45d) cell_ai5_widget_pane_g8

0xe786,	// (0x0002a471) cell_ai5_widget_pane_g9_ParamLimits

0xe786,	// (0x0002a471) cell_ai5_widget_pane_g9

0xe79a,	// (0x0002a485) cell_ai5_widget_pane_g10_ParamLimits

0xe79a,	// (0x0002a485) cell_ai5_widget_pane_g10

0xeb33,	// (0x0002a81e) status_icon_pane_g1

0x31d9,	// (0x0001eec4) bg_popup_sub_pane_cp13

0xeb3b,	// (0x0002a826) popup_keymap_window_t1

0x946f,	// (0x0002515a) control_pane_g6_ParamLimits

0x946f,	// (0x0002515a) control_pane_g6

0x947c,	// (0x00025167) control_pane_g7_ParamLimits

0x947c,	// (0x00025167) control_pane_g7

0x9489,	// (0x00025174) control_pane_g8_ParamLimits

0x9489,	// (0x00025174) control_pane_g8

0xea56,	// (0x0002a741) dt_sta_controll_pane_ParamLimits

0xea63,	// (0x0002a74e) dt_sta_indi_pane_ParamLimits

0xea74,	// (0x0002a75f) dt_sta_title_pane_ParamLimits

0x8427,	// (0x00024112) aid_size_touch_scroll_bar_cale

0x5994,	// (0x0002167f) popup_discreet_window_ParamLimits

0x5994,	// (0x0002167f) popup_discreet_window

0x5a1c,	// (0x00021707) popup_sk_window

0xa077,	// (0x00025d62) bg_popup_sub_pane_cp28_ParamLimits

0xa077,	// (0x00025d62) bg_popup_sub_pane_cp28

0xeb49,	// (0x0002a834) popup_discreet_window_g1_ParamLimits

0xeb49,	// (0x0002a834) popup_discreet_window_g1

0xeb69,	// (0x0002a854) popup_discreet_window_t1_ParamLimits

0xeb69,	// (0x0002a854) popup_discreet_window_t1

0xeb87,	// (0x0002a872) popup_discreet_window_t2_ParamLimits

0xeb87,	// (0x0002a872) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x0002bb6f) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x0002bb6f) popup_discreet_window_t

0x7757,	// (0x00023442) popup_sk_window_g1

0x7761,	// (0x0002344c) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x0002bb76) popup_sk_window_g

0x7769,	// (0x00023454) popup_sk_window_t1

0x7777,	// (0x00023462) popup_sk_window_t1_copy1

0xe70c,	// (0x0002a3f7) cell_ai5_widget_pane_g2_ParamLimits

0xe8a7,	// (0x0002a592) cell_ai5_widget_pane_t9_ParamLimits

0xe8a7,	// (0x0002a592) cell_ai5_widget_pane_t9

0x31d9,	// (0x0001eec4) main_fep_fshwr2_pane

0x7785,	// (0x00023470) aid_fshwr2_btn_pane

0x7791,	// (0x0002347c) aid_fshwr2_syb_pane

0x77a3,	// (0x0002348e) aid_fshwr2_txt_pane

0x77af,	// (0x0002349a) fshwr2_func_candi_pane

0x77cb,	// (0x000234b6) fshwr2_hwr_syb_pane

0x77e5,	// (0x000234d0) fshwr2_icf_pane

0x31d9,	// (0x0001eec4) fshwr2_icf_bg_pane

0x7813,	// (0x000234fe) fshwr2_icf_pane_t1_ParamLimits

0x7813,	// (0x000234fe) fshwr2_icf_pane_t1

0x8b84,	// (0x0002486f) fshwr2_func_candi_pane_g1

0xebd9,	// (0x0002a8c4) fshwr2_func_candi_row_pane_ParamLimits

0xebd9,	// (0x0002a8c4) fshwr2_func_candi_row_pane

0x782b,	// (0x00023516) cell_fshwr2_syb_pane_ParamLimits

0x782b,	// (0x00023516) cell_fshwr2_syb_pane

0xe4e3,	// (0x0002a1ce) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4e3,	// (0x0002a1ce) fshwr2_hwr_syb_pane_g1

0x31d9,	// (0x0001eec4) bg_popup_call_pane_cp01

0x784e,	// (0x00023539) fshwr2_func_candi_cell_pane_ParamLimits

0x784e,	// (0x00023539) fshwr2_func_candi_cell_pane

0xa6f7,	// (0x000263e2) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6f7,	// (0x000263e2) fshwr2_func_candi_cell_bg_pane

0x7899,	// (0x00023584) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7899,	// (0x00023584) fshwr2_func_candi_cell_pane_g1

0x78b9,	// (0x000235a4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x78b9,	// (0x000235a4) fshwr2_func_candi_cell_pane_t1

0x31d9,	// (0x0001eec4) bg_button_pane_cp08

0x94be,	// (0x000251a9) cell_fshwr2_syb_bg_pane

0x78cc,	// (0x000235b7) cell_fshwr2_syb_bg_pane_g1

0x78e0,	// (0x000235cb) cell_fshwr2_syb_bg_pane_t1

0x84ef,	// (0x000241da) main_tmo_pane

0xab92,	// (0x0002687d) uni_indicator_pane_g1_ParamLimits

0xaba8,	// (0x00026893) uni_indicator_pane_g2_ParamLimits

0xabbe,	// (0x000268a9) uni_indicator_pane_g3_ParamLimits

0xabd1,	// (0x000268bc) uni_indicator_pane_g4_ParamLimits

0xabd1,	// (0x000268bc) uni_indicator_pane_g4

0xabe5,	// (0x000268d0) uni_indicator_pane_g5_ParamLimits

0xabe5,	// (0x000268d0) uni_indicator_pane_g5

0xabe5,	// (0x000268d0) uni_indicator_pane_g6_ParamLimits

0xabe5,	// (0x000268d0) uni_indicator_pane_g6

0xf8fc,	// (0x0002b5e7) uni_indicator_pane_g_ParamLimits

0xd524,	// (0x0002920f) popup_tmo_note_window_ParamLimits

0xd524,	// (0x0002920f) popup_tmo_note_window

0x84ef,	// (0x000241da) fshwr2_bg_pane

0x78aa,	// (0x00023595) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x78aa,	// (0x00023595) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x0002bb7b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x0002bb7b) fshwr2_func_candi_cell_pane_g

0xc03b,	// (0x00027d26) bg_popup_window_pane_cp01

0x78f6,	// (0x000235e1) bg_popup_window_pane_g1_cp01

0xec00,	// (0x0002a8eb) bg_popup_window_pane_cp22_ParamLimits

0xec00,	// (0x0002a8eb) bg_popup_window_pane_cp22

0xec0e,	// (0x0002a8f9) listscroll_tmo_link_pane_ParamLimits

0xec0e,	// (0x0002a8f9) listscroll_tmo_link_pane

0xec4e,	// (0x0002a939) popup_tmo_note_window_g1_ParamLimits

0xec4e,	// (0x0002a939) popup_tmo_note_window_g1

0xec5b,	// (0x0002a946) tmo_note_info_pane_ParamLimits

0xec5b,	// (0x0002a946) tmo_note_info_pane

0xec75,	// (0x0002a960) list_tmo_note_info_pane_g1_ParamLimits

0xec75,	// (0x0002a960) list_tmo_note_info_pane_g1

0xec8c,	// (0x0002a977) list_tmo_note_info_pane_g2_ParamLimits

0xec8c,	// (0x0002a977) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x0002bb80) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x0002bb80) list_tmo_note_info_pane_g

0xeca8,	// (0x0002a993) list_tmo_note_info_text_pane_ParamLimits

0xeca8,	// (0x0002a993) list_tmo_note_info_text_pane

0xed29,	// (0x0002aa14) list_tmo_link_pane

0xed36,	// (0x0002aa21) scroll_pane_cp20

0xed43,	// (0x0002aa2e) list_single_tmo_link_pane_ParamLimits

0xed43,	// (0x0002aa2e) list_single_tmo_link_pane

0xed53,	// (0x0002aa3e) list_single_tmo_link_pane_t1

0xed61,	// (0x0002aa4c) list_tmo_note_info_text_pane_t1_ParamLimits

0xed61,	// (0x0002aa4c) list_tmo_note_info_text_pane_t1

0x85ab,	// (0x00024296) aid_size_touch_scroll_bar_cp01_ParamLimits

0x85ab,	// (0x00024296) aid_size_touch_scroll_bar_cp01

0x4b78,	// (0x00020863) aid_size_touch_slider_marker

0x5a04,	// (0x000216ef) popup_settings_window_ParamLimits

0x5a04,	// (0x000216ef) popup_settings_window

0x4d47,	// (0x00020a32) popup_candi_list_indi_window

0x953a,	// (0x00025225) aid_touch_navi_pane_ParamLimits

0x6f6a,	// (0x00022c55) rs_clock_indi_pane

0x6f73,	// (0x00022c5e) sctrl_sk_bottom_pane_ParamLimits

0x6f84,	// (0x00022c6f) sctrl_sk_top_pane_ParamLimits

0x706b,	// (0x00022d56) popup_fep_tooltip_window

0xe67a,	// (0x0002a365) aid_size_cell_widget_grid_ParamLimits

0xe6f7,	// (0x0002a3e2) cell_ai5_widget_pane_g1_ParamLimits

0xe6f7,	// (0x0002a3e2) cell_ai5_widget_pane_g1

0xe75a,	// (0x0002a445) cell_ai5_widget_pane_g6_ParamLimits

0xe766,	// (0x0002a451) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x0002baf4) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0002baf4) cell_ai5_widget_pane_g

0xe8d6,	// (0x0002a5c1) cell_ai5_widget_pane_t10_ParamLimits

0xe8d6,	// (0x0002a5c1) cell_ai5_widget_pane_t10

0xe919,	// (0x0002a604) grid_ai5_widget_pane_ParamLimits

0xe9ba,	// (0x0002a6a5) cell_contacts_ai5_widget_pane_ParamLimits

0xe9ba,	// (0x0002a6a5) cell_contacts_ai5_widget_pane

0xeb9c,	// (0x0002a887) popup_discreet_window_t3_ParamLimits

0xeb9c,	// (0x0002a887) popup_discreet_window_t3

0x77fd,	// (0x000234e8) popup_fshwr2_char_preview_window_ParamLimits

0x77fd,	// (0x000234e8) popup_fshwr2_char_preview_window

0xecc6,	// (0x0002a9b1) tmo_note_info_pane_t1

0xecdb,	// (0x0002a9c6) tmo_note_info_pane_t2

0xecf0,	// (0x0002a9db) tmo_note_info_pane_t3

0xed05,	// (0x0002a9f0) tmo_note_info_pane_t4

0xed17,	// (0x0002aa02) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x0002bb85) tmo_note_info_pane_t

0xed29,	// (0x0002aa14) list_tmo_link_pane_ParamLimits

0xed36,	// (0x0002aa21) scroll_pane_cp20_ParamLimits

0x31d9,	// (0x0001eec4) bg_popup_fep_char_preview_window_cp01

0xed7a,	// (0x0002aa65) popup_fshwr2_char_preview_window_t1

0xed88,	// (0x0002aa73) popup_candi_list_indi_window_g1

0xed91,	// (0x0002aa7c) bg_cell_contacts_ai5_widget_pane

0xed9d,	// (0x0002aa88) cell_contacts_ai5_widget_pane_g1

0xc71b,	// (0x00028406) cell_contacts_ai5_widget_pane_g2

0xedb2,	// (0x0002aa9d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x0002bb90) cell_contacts_ai5_widget_pane_g

0xedbe,	// (0x0002aaa9) cell_contacts_ai5_widget_pane_t1

0x84ef,	// (0x000241da) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee35,	// (0x0002ab20) settings_container_pane

0x919a,	// (0x00024e85) listscroll_set_pane_copy1

0xb725,	// (0x00027410) scroll_pane_cp121_copy1

0x9e14,	// (0x00025aff) set_content_pane_copy1

0xee41,	// (0x0002ab2c) aid_height_set_list_copy1_ParamLimits

0xee41,	// (0x0002ab2c) aid_height_set_list_copy1

0xaddd,	// (0x00026ac8) aid_size_parent_copy1_ParamLimits

0xaddd,	// (0x00026ac8) aid_size_parent_copy1

0xee4d,	// (0x0002ab38) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee4d,	// (0x0002ab38) button_value_adjust_pane_cp6_copy1

0x94be,	// (0x000251a9) list_highlight_pane_cp2_copy1_ParamLimits

0x94be,	// (0x000251a9) list_highlight_pane_cp2_copy1

0xee61,	// (0x0002ab4c) list_set_pane_copy1_ParamLimits

0xee61,	// (0x0002ab4c) list_set_pane_copy1

0xedd0,	// (0x0002aabb) main_pane_set_t1_copy1_ParamLimits

0xedd0,	// (0x0002aabb) main_pane_set_t1_copy1

0xee0a,	// (0x0002aaf5) main_pane_set_t2_copy1_ParamLimits

0xee0a,	// (0x0002aaf5) main_pane_set_t2_copy1

0xef0e,	// (0x0002abf9) main_pane_set_t3_copy1

0xef1c,	// (0x0002ac07) main_pane_set_t4_copy1

0xee29,	// (0x0002ab14) set_content_pane_g1_copy1_ParamLimits

0xee29,	// (0x0002ab14) set_content_pane_g1_copy1

0xef2a,	// (0x0002ac15) setting_code_pane_copy1

0xef32,	// (0x0002ac1d) setting_slider_graphic_pane_copy1

0xef32,	// (0x0002ac1d) setting_slider_pane_copy1

0xef3a,	// (0x0002ac25) setting_text_pane_copy1

0xef3a,	// (0x0002ac25) setting_volume_pane_copy1

0xef2a,	// (0x0002ac15) settings_code_pane_cp2_copy1

0xef42,	// (0x0002ac2d) settings_code_pane_cp_copy1_ParamLimits

0xef42,	// (0x0002ac2d) settings_code_pane_cp_copy1

0x78ff,	// (0x000235ea) volume_set_pane_copy1

0xef56,	// (0x0002ac41) volume_set_pane_g10_copy1

0xef5e,	// (0x0002ac49) volume_set_pane_g1_copy1

0xef66,	// (0x0002ac51) volume_set_pane_g2_copy1

0xef6e,	// (0x0002ac59) volume_set_pane_g3_copy1

0xef76,	// (0x0002ac61) volume_set_pane_g4_copy1

0xef7e,	// (0x0002ac69) volume_set_pane_g5_copy1

0xef86,	// (0x0002ac71) volume_set_pane_g6_copy1

0xef8e,	// (0x0002ac79) volume_set_pane_g7_copy1

0xef96,	// (0x0002ac81) volume_set_pane_g8_copy1

0xef9e,	// (0x0002ac89) volume_set_pane_g9_copy1

0x7c62,	// (0x0002394d) bg_set_opt_pane_cp_copy1_ParamLimits

0x7c62,	// (0x0002394d) bg_set_opt_pane_cp_copy1

0x7907,	// (0x000235f2) setting_slider_pane_t1_copy1_ParamLimits

0x7907,	// (0x000235f2) setting_slider_pane_t1_copy1

0x7926,	// (0x00023611) setting_slider_pane_t2_copy1_ParamLimits

0x7926,	// (0x00023611) setting_slider_pane_t2_copy1

0x7940,	// (0x0002362b) setting_slider_pane_t3_copy1_ParamLimits

0x7940,	// (0x0002362b) setting_slider_pane_t3_copy1

0x7958,	// (0x00023643) slider_set_pane_copy1_ParamLimits

0x7958,	// (0x00023643) slider_set_pane_copy1

0x8547,	// (0x00024232) set_opt_bg_pane_g1_copy2

0x854f,	// (0x0002423a) set_opt_bg_pane_g2_copy2

0xefa6,	// (0x0002ac91) set_opt_bg_pane_g3_copy2

0x855f,	// (0x0002424a) set_opt_bg_pane_g4_copy2

0x8567,	// (0x00024252) set_opt_bg_pane_g5_copy2

0x856f,	// (0x0002425a) set_opt_bg_pane_g6_copy2

0xefb0,	// (0x0002ac9b) set_opt_bg_pane_g7_copy2

0xefb8,	// (0x0002aca3) set_opt_bg_pane_g8_copy2

0xefc2,	// (0x0002acad) set_opt_bg_pane_g9_copy2

0x796e,	// (0x00023659) aid_size_touch_slider_mark_copy1_ParamLimits

0x796e,	// (0x00023659) aid_size_touch_slider_mark_copy1

0xefcc,	// (0x0002acb7) slider_set_pane_g1_copy1

0x7982,	// (0x0002366d) slider_set_pane_g2_copy1

0x6a4d,	// (0x00022738) slider_set_pane_g3_copy1_ParamLimits

0x6a4d,	// (0x00022738) slider_set_pane_g3_copy1

0x6a61,	// (0x0002274c) slider_set_pane_g4_copy1_ParamLimits

0x6a61,	// (0x0002274c) slider_set_pane_g4_copy1

0x6a79,	// (0x00022764) slider_set_pane_g5_copy1_ParamLimits

0x6a79,	// (0x00022764) slider_set_pane_g5_copy1

0x6a4d,	// (0x00022738) slider_set_pane_g6_copy1_ParamLimits

0x6a4d,	// (0x00022738) slider_set_pane_g6_copy1

0x798a,	// (0x00023675) slider_set_pane_g7_copy1_ParamLimits

0x798a,	// (0x00023675) slider_set_pane_g7_copy1

0x7b82,	// (0x0002386d) bg_set_opt_pane_cp2_copy1

0xefd5,	// (0x0002acc0) setting_slider_graphic_pane_g1_copy1

0xefde,	// (0x0002acc9) setting_slider_graphic_pane_t1_copy1

0xefee,	// (0x0002acd9) setting_slider_graphic_pane_t2_copy1

0xeffe,	// (0x0002ace9) slider_set_pane_cp_copy1

0xf00e,	// (0x0002acf9) input_focus_pane_cp1_copy1

0xf017,	// (0x0002ad02) list_set_text_pane_copy1

0xf01f,	// (0x0002ad0a) setting_text_pane_g1_copy1

0x4572,	// (0x0002025d) set_text_pane_t1_copy1

0xf00e,	// (0x0002acf9) input_focus_pane_cp2_copy1

0xf01f,	// (0x0002ad0a) setting_code_pane_g1_copy1

0xf028,	// (0x0002ad13) setting_code_pane_t1_copy1

0xb54d,	// (0x00027238) list_set_graphic_pane_copy1

0x7b82,	// (0x0002386d) bg_set_opt_pane_cp4_copy1

0x8e95,	// (0x00024b80) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e95,	// (0x00024b80) list_set_graphic_pane_g1_copy1

0xf036,	// (0x0002ad21) list_set_graphic_pane_g2_copy1

0x8ead,	// (0x00024b98) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ead,	// (0x00024b98) list_set_graphic_pane_t1_copy1

0xc03b,	// (0x00027d26) rs_clock_indi_pane_g1

0xf03e,	// (0x0002ad29) rs_clock_indi_pane_t1

0xf04c,	// (0x0002ad37) rs_indi_pane

0xf054,	// (0x0002ad3f) rs_indi_pane_g1

0xf05d,	// (0x0002ad48) rs_indi_pane_g2

0xf066,	// (0x0002ad51) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x0002bb97) rs_indi_pane_g

0x919a,	// (0x00024e85) bg_popup_preview_window_pane_cp03

0xf06f,	// (0x0002ad5a) popup_fep_tooltip_window_t1

0xccc3,	// (0x000289ae) popup_note2_window_g2_ParamLimits

0xccc3,	// (0x000289ae) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0002b924) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0002b924) popup_note2_window_g

0xd1be,	// (0x00028ea9) bg_popup_sub_pane_cp11_ParamLimits

0xd1cb,	// (0x00028eb6) cell_ai3_links_pane_g1_ParamLimits

0xd1e2,	// (0x00028ecd) cell_ai3_links_pane_t1

0x4572,	// (0x0002025d) set_text_pane_t1_copy1_ParamLimits

0x90ab,	// (0x00024d96) cell_graphic_popup_pane_cp2_ParamLimits

0x90ab,	// (0x00024d96) cell_graphic_popup_pane_cp2

0xf07d,	// (0x0002ad68) cell_graphic_popup_pane_g1_cp2

0x823a,	// (0x00023f25) cell_graphic_popup_pane_g2_cp2

0xf085,	// (0x0002ad70) cell_graphic_popup_pane_g3_cp2

0xf08d,	// (0x0002ad78) cell_graphic_popup_pane_t2_cp2

0x824b,	// (0x00023f36) grid_highlight_pane_cp3_cp2

0x889f,	// (0x0002458a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84ef,	// (0x000241da) main_tmo_pane_ParamLimits

0xd518,	// (0x00029203) popup_tmo_big_image_note_window

0xe6e6,	// (0x0002a3d1) cell_ai5_widget_list_pane

0xe6ee,	// (0x0002a3d9) cell_ai5_widget_lrg_icon_pane

0xecc6,	// (0x0002a9b1) tmo_note_info_pane_t1_ParamLimits

0xecdb,	// (0x0002a9c6) tmo_note_info_pane_t2_ParamLimits

0xecf0,	// (0x0002a9db) tmo_note_info_pane_t3_ParamLimits

0xed05,	// (0x0002a9f0) tmo_note_info_pane_t4_ParamLimits

0xed17,	// (0x0002aa02) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x0002bb85) tmo_note_info_pane_t_ParamLimits

0xee35,	// (0x0002ab20) settings_container_pane_ParamLimits

0xf006,	// (0x0002acf1) indicator_popup_pane_cp5

0xf006,	// (0x0002acf1) indicator_popup_pane_cp6

0xb54d,	// (0x00027238) list_set_graphic_pane_copy1_ParamLimits

0x31d9,	// (0x0001eec4) bg_popup_window_pane_cp23

0xf09b,	// (0x0002ad86) popup_tmo_big_image_note_window_g1

0xf0a5,	// (0x0002ad90) popup_tmo_big_image_note_window_t1

0xf0b5,	// (0x0002ada0) popup_tmo_big_image_note_window_t2

0xf0c5,	// (0x0002adb0) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x0002bb9e) popup_tmo_big_image_note_window_t

0xc03b,	// (0x00027d26) cell_ai5_widget_lrg_icon_pane_g1

0xf0d5,	// (0x0002adc0) cell_ai5_widget_lrg_icon_pane_t1

0xf0e3,	// (0x0002adce) cell_ai5_widget_list_row_pane_ParamLimits

0xf0e3,	// (0x0002adce) cell_ai5_widget_list_row_pane

0xf0fa,	// (0x0002ade5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0fa,	// (0x0002ade5) cell_ai5_widget_list_row_pane_g1

0xf107,	// (0x0002adf2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf107,	// (0x0002adf2) cell_ai5_widget_list_row_pane_t1

0xf138,	// (0x0002ae23) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf138,	// (0x0002ae23) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x0002bba5) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x0002bba5) cell_ai5_widget_list_row_pane_t

0x31d9,	// (0x0001eec4) main_fep_vtchi_ss_pane

0xf188,	// (0x0002ae73) popup_fep_char_pre_window

0xf190,	// (0x0002ae7b) popup_fep_ituss_window

0xf1bc,	// (0x0002aea7) popup_fep_vkbss_window

0x94be,	// (0x000251a9) grid_vkbss_keypad_pane_ParamLimits

0x94be,	// (0x000251a9) grid_vkbss_keypad_pane

0x94be,	// (0x000251a9) ituss_keypad_pane

0x79ac,	// (0x00023697) aid_vkbss_key_offset_ParamLimits

0x79ac,	// (0x00023697) aid_vkbss_key_offset

0x79b8,	// (0x000236a3) cell_vkbss_key_pane_ParamLimits

0x79b8,	// (0x000236a3) cell_vkbss_key_pane

0xf1fc,	// (0x0002aee7) bg_cell_vkbss_key_g1_ParamLimits

0xf1fc,	// (0x0002aee7) bg_cell_vkbss_key_g1

0xf208,	// (0x0002aef3) cell_vkbss_key_3p_pane_ParamLimits

0xf208,	// (0x0002aef3) cell_vkbss_key_3p_pane

0xf23e,	// (0x0002af29) cell_vkbss_key_g1_ParamLimits

0xf23e,	// (0x0002af29) cell_vkbss_key_g1

0xf274,	// (0x0002af5f) cell_vkbss_key_t1_ParamLimits

0xf274,	// (0x0002af5f) cell_vkbss_key_t1

0x7a10,	// (0x000236fb) cell_ituss_key_pane_ParamLimits

0x7a10,	// (0x000236fb) cell_ituss_key_pane

0xf2d0,	// (0x0002afbb) bg_cell_ituss_key_g1_ParamLimits

0xf2d0,	// (0x0002afbb) bg_cell_ituss_key_g1

0xf2dc,	// (0x0002afc7) cell_ituss_key_pane_g1_ParamLimits

0xf2dc,	// (0x0002afc7) cell_ituss_key_pane_g1

0x7a21,	// (0x0002370c) cell_ituss_key_pane_g2_ParamLimits

0x7a21,	// (0x0002370c) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x0002bbac) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x0002bbac) cell_ituss_key_pane_g

0x7aa5,	// (0x00023790) cell_ituss_key_t1_ParamLimits

0x7aa5,	// (0x00023790) cell_ituss_key_t1

0x7adf,	// (0x000237ca) cell_ituss_key_t2_ParamLimits

0x7adf,	// (0x000237ca) cell_ituss_key_t2

0x7b10,	// (0x000237fb) cell_ituss_key_t3_ParamLimits

0x7b10,	// (0x000237fb) cell_ituss_key_t3

0x7adf,	// (0x000237ca) cell_ituss_key_t4_ParamLimits

0x7adf,	// (0x000237ca) cell_ituss_key_t4

0x0004,

0xfece,	// (0x0002bbb9) cell_ituss_key_t_ParamLimits

0xfece,	// (0x0002bbb9) cell_ituss_key_t

0xf302,	// (0x0002afed) cell_vkbss_key_3p_pane_g1

0xf30a,	// (0x0002aff5) cell_vkbss_key_3p_pane_g2

0xf312,	// (0x0002affd) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x0002bbc4) cell_vkbss_key_3p_pane_g

0x919a,	// (0x00024e85) bg_popup_fep_char_preview_window_cp02

0xf31a,	// (0x0002b005) popup_fep_char_pre_window_t1

0xe667,	// (0x0002a352) main_ai5_sk_pane

0xed91,	// (0x0002aa7c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed9d,	// (0x0002aa88) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc71b,	// (0x00028406) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedb2,	// (0x0002aa9d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x0002bb90) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedbe,	// (0x0002aaa9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84ef,	// (0x000241da) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf328,	// (0x0002b013) main_ai5_sk_pane_g1

0x9eb0,	// (0x00025b9b) popup_query_code_window_g1

0xf1a6,	// (0x0002ae91) popup_fep_vkb_icf_pane

0xf1d3,	// (0x0002aebe) popup_fep_vtchi_icf_pane

0x94be,	// (0x000251a9) bg_icf_pane

0x94be,	// (0x000251a9) list_vkb_icf_pane

0xf331,	// (0x0002b01c) bg_icf_pane_cp01

0x919a,	// (0x00024e85) vtchi_icf_list_pane

0xf3a4,	// (0x0002b08f) list_vkb_icf_pane_t1_ParamLimits

0xf3a4,	// (0x0002b08f) list_vkb_icf_pane_t1

0xf3c5,	// (0x0002b0b0) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0002b0b0) vtchi_icf_list_pane_t1

0xf190,	// (0x0002ae7b) popup_fep_ituss_window_ParamLimits

0xf1d3,	// (0x0002aebe) popup_fep_vtchi_icf_pane_ParamLimits

0x94be,	// (0x000251a9) ituss_keypad_pane_ParamLimits

0x79a0,	// (0x0002368b) ituss_sks_pane

0x94be,	// (0x000251a9) bg_icf_pane_ParamLimits

0xf160,	// (0x0002ae4b) icf_edit_indi_pane_ParamLimits

0xf160,	// (0x0002ae4b) icf_edit_indi_pane

0x94be,	// (0x000251a9) list_vkb_icf_pane_ParamLimits

0xf331,	// (0x0002b01c) bg_icf_pane_cp01_ParamLimits

0xf17b,	// (0x0002ae66) icf_edit_indi_pane_cp01_ParamLimits

0xf17b,	// (0x0002ae66) icf_edit_indi_pane_cp01

0xf344,	// (0x0002b02f) vtchi_query_pane

0xe4e3,	// (0x0002a1ce) icf_edit_indi_pane_g1_ParamLimits

0xe4e3,	// (0x0002a1ce) icf_edit_indi_pane_g1

0xf43a,	// (0x0002b125) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0002b125) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0002bbef) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0002bbef) icf_edit_indi_pane_g

0xf44e,	// (0x0002b139) icf_edit_indi_pane_t1

0xf3e3,	// (0x0002b0ce) bg_input_focus_pane_cp042

0x841e,	// (0x00024109) vtchi_button_pane

0xf3ec,	// (0x0002b0d7) vtchi_query_pane_t1

0xf3fa,	// (0x0002b0e5) vtchi_query_pane_t2

0xf408,	// (0x0002b0f3) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0002bbde) vtchi_query_pane_t

0x31d9,	// (0x0001eec4) bg_button_pane_cp13

0xf416,	// (0x0002b101) vtchi_button_pane_g1

0x7b53,	// (0x0002383e) ituss_sks_pane_g1

0x7b5e,	// (0x00023849) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0002bbe5) ituss_sks_pane_g

0xf41e,	// (0x0002b109) ituss_sks_pane_t1

0xf42c,	// (0x0002b117) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002bbea) ituss_sks_pane_t

0xbabd,	// (0x000277a8) indicator_nsta_pane_cp_g1

0xbac6,	// (0x000277b1) indicator_nsta_pane_cp_g2

0xbace,	// (0x000277b9) indicator_nsta_pane_cp_g3

0xbad6,	// (0x000277c1) indicator_nsta_pane_cp_g4

0xbac6,	// (0x000277b1) indicator_nsta_pane_cp_g5

0xbace,	// (0x000277b9) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0002b76e) indicator_nsta_pane_cp_g

0xe23c,	// (0x00029f27) cell_graphic2_pane_t2_ParamLimits

0xe23c,	// (0x00029f27) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x0002ba7b) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x0002ba7b) cell_graphic2_pane_t

0xe268,	// (0x00029f53) cell_graphic2_control_pane_t1

0x8c45,	// (0x00024930) signal_pane_g3_ParamLimits

0x8c45,	// (0x00024930) signal_pane_g3

0x8c57,	// (0x00024942) signal_pane_g4_ParamLimits

0x8c57,	// (0x00024942) signal_pane_g4

0xf14a,	// (0x0002ae35) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14a,	// (0x0002ae35) cell_ai5_widget_list_row_pane_t3

0xf2f0,	// (0x0002afdb) cell_ituss_key_pane_t1_ParamLimits

0xf2f0,	// (0x0002afdb) cell_ituss_key_pane_t1

0x9aed,	// (0x000257d8) form_field_data_wide_pane_vc_t2_ParamLimits

0x9aed,	// (0x000257d8) form_field_data_wide_pane_vc_t2

0x9b01,	// (0x000257ec) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b01,	// (0x000257ec) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0002b4cf) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0002b4cf) form_field_data_wide_pane_vc_t

0xb767,	// (0x00027452) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb767,	// (0x00027452) form_field_slider_wide_pane_vc_t3

0xb845,	// (0x00027530) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb845,	// (0x00027530) form_field_popup_wide_pane_vc_t2

0xb85c,	// (0x00027547) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb85c,	// (0x00027547) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0002b75d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002b75d) form_field_popup_wide_pane_vc_t

0x7785,	// (0x00023470) aid_fshwr2_btn_pane_ParamLimits

0x7791,	// (0x0002347c) aid_fshwr2_syb_pane_ParamLimits

0x77a3,	// (0x0002348e) aid_fshwr2_txt_pane_ParamLimits

0x84ef,	// (0x000241da) fshwr2_bg_pane_ParamLimits

0x77af,	// (0x0002349a) fshwr2_func_candi_pane_ParamLimits

0x77cb,	// (0x000234b6) fshwr2_hwr_syb_pane_ParamLimits

0x77e5,	// (0x000234d0) fshwr2_icf_pane_ParamLimits

0x52e6,	// (0x00020fd1) list_double_graphic_pane_vc_g4_ParamLimits

0x52e6,	// (0x00020fd1) list_double_graphic_pane_vc_g4

0x7a41,	// (0x0002372c) cell_ituss_key_pane_g3_ParamLimits

0x7a41,	// (0x0002372c) cell_ituss_key_pane_g3

0x7b41,	// (0x0002382c) cell_ituss_key_t5_ParamLimits

0x7b41,	// (0x0002382c) cell_ituss_key_t5

0xf1bc,	// (0x0002aea7) popup_fep_vkbss_window_ParamLimits

0xe671,	// (0x0002a35c) aid_cell_ai5_quarter

0xf44e,	// (0x0002b139) icf_edit_indi_pane_t1_ParamLimits

0x7f93,	// (0x00023c7e) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7f93,	// (0x00023c7e) aid_tch_indicator_popup_pane_cp2

0x7fa6,	// (0x00023c91) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7fa6,	// (0x00023c91) aid_tch_query_popup_data_pane_cp2

0x9e58,	// (0x00025b43) aid_tch_query_popup_pane_ParamLimits

0x9e58,	// (0x00025b43) aid_tch_query_popup_pane

0x9e58,	// (0x00025b43) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e58,	// (0x00025b43) aid_tch_query_popup_data_pane_cp1

0x94be,	// (0x000251a9) cell_fshwr2_syb_bg_pane_ParamLimits

0x78cc,	// (0x000235b7) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x78e0,	// (0x000235cb) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a6,	// (0x0002ae91) popup_fep_vkb_icf_pane_ParamLimits

0x75f3,	// (0x000232de) bg_popup_fep_char_preview_window_g10

0xe7ae,	// (0x0002a499) cell_ai5_widget_pane_g11_ParamLimits

0xe7ae,	// (0x0002a499) cell_ai5_widget_pane_g11

0xe7ba,	// (0x0002a4a5) cell_ai5_widget_pane_g12_ParamLimits

0xe7ba,	// (0x0002a4a5) cell_ai5_widget_pane_g12

0xe7c6,	// (0x0002a4b1) cell_ai5_widget_pane_g13_ParamLimits

0xe7c6,	// (0x0002a4b1) cell_ai5_widget_pane_g13

0xe8f5,	// (0x0002a5e0) cell_ai5_widget_pane_t11_ParamLimits

0xe8f5,	// (0x0002a5e0) cell_ai5_widget_pane_t11

0xe907,	// (0x0002a5f2) cell_ai5_widget_pane_t12_ParamLimits

0xe907,	// (0x0002a5f2) cell_ai5_widget_pane_t12

0x7a4d,	// (0x00023738) cell_ituss_key_pane_g4_ParamLimits

0x7a4d,	// (0x00023738) cell_ituss_key_pane_g4

0x7a69,	// (0x00023754) cell_ituss_key_pane_g5_ParamLimits

0x7a69,	// (0x00023754) cell_ituss_key_pane_g5

0x7a85,	// (0x00023770) cell_ituss_key_pane_g6_ParamLimits

0x7a85,	// (0x00023770) cell_ituss_key_pane_g6

0x99e8,	// (0x000256d3) bg_icf_pane_g1

0xf34c,	// (0x0002b037) bg_icf_pane_g2

0xf358,	// (0x0002b043) bg_icf_pane_g3

0xf362,	// (0x0002b04d) bg_icf_pane_g4

0xf36e,	// (0x0002b059) bg_icf_pane_g5

0xf378,	// (0x0002b063) bg_icf_pane_g6

0xf384,	// (0x0002b06f) bg_icf_pane_g7

0xf38e,	// (0x0002b079) bg_icf_pane_g8

0xf39a,	// (0x0002b085) bg_icf_pane_g9

0x0008,

0xfee0,	// (0x0002bbcb) bg_icf_pane_g

0xf1e9,	// (0x0002aed4) popup_hyb_candi_window_ParamLimits

0xf1e9,	// (0x0002aed4) popup_hyb_candi_window

0x9a5c,	// (0x00025747) bg_popup_sub_pane_cp01_ParamLimits

0x9a5c,	// (0x00025747) bg_popup_sub_pane_cp01

0xf467,	// (0x0002b152) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0002b152) entry_hyb_candi_pane

0xf476,	// (0x0002b161) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0002b161) grid_hyb_candi_pane

0xf48b,	// (0x0002b176) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0002b176) grid_hyb_phrase_pane

0xf49a,	// (0x0002b185) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0002b185) cell_hyb_candi_pane

0xf4bd,	// (0x0002b1a8) cell_hyb_candi_scroll_pane

0x8b84,	// (0x0002486f) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0002b1b1) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0002b1bf) cell_hyb_phrase_pane

0x8b84,	// (0x0002486f) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0002b1c8) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0002b1d6) entry_hyb_candi_pane_t1

0x919a,	// (0x00024e85) input_focus_pane_cp06

0xf4f9,	// (0x0002b1e4) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0002b1ec) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0002b1f4) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0002b1fc) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0002b204) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0002b20c) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small

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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001efa3 };

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
0xcf70,	// (0x0002bf13) Screen

0xcf7c,	// (0x0002bf1f) application_window_ParamLimits

0xcf7c,	// (0x0002bf1f) application_window

0x35bf,	// (0x00022562) screen_g1

0xbf82,	// (0x0002af25) area_bottom_pane_ParamLimits

0xbf82,	// (0x0002af25) area_bottom_pane

0x1506,	// (0x000204a9) area_top_pane_ParamLimits

0x1506,	// (0x000204a9) area_top_pane

0x159a,	// (0x0002053d) main_pane_ParamLimits

0x159a,	// (0x0002053d) main_pane

0x35c9,	// (0x0002256c) misc_graphics

0xd624,	// (0x0002c5c7) battery_pane_ParamLimits

0xd624,	// (0x0002c5c7) battery_pane

0x5c44,	// (0x00024be7) bg_status_flat_pane_g8

0x5c4c,	// (0x00024bef) bg_status_flat_pane_g9

0x5034,	// (0x00023fd7) context_pane_ParamLimits

0x5034,	// (0x00023fd7) context_pane

0xd78f,	// (0x0002c732) navi_pane_ParamLimits

0xd78f,	// (0x0002c732) navi_pane

0xd80d,	// (0x0002c7b0) signal_pane_ParamLimits

0xd80d,	// (0x0002c7b0) signal_pane

0x0008,

0xf873,	// (0x0002e816) bg_status_flat_pane_g

0xd8c5,	// (0x0002c868) status_pane_g1_ParamLimits

0xd8c5,	// (0x0002c868) status_pane_g1

0xd8db,	// (0x0002c87e) status_pane_g2_ParamLimits

0xd8db,	// (0x0002c87e) status_pane_g2

0x525b,	// (0x000241fe) status_pane_g3_ParamLimits

0x525b,	// (0x000241fe) status_pane_g3

0x0004,

0xf7a6,	// (0x0002e749) status_pane_g_ParamLimits

0xf7a6,	// (0x0002e749) status_pane_g

0xd8e7,	// (0x0002c88a) title_pane_ParamLimits

0xd8e7,	// (0x0002c88a) title_pane

0xd94a,	// (0x0002c8ed) uni_indicator_pane_ParamLimits

0xd94a,	// (0x0002c8ed) uni_indicator_pane

0x4e96,	// (0x00023e39) bg_list_pane_ParamLimits

0x4e96,	// (0x00023e39) bg_list_pane

0xd597,	// (0x0002c53a) find_pane

0xc2da,	// (0x0002b27d) listscroll_app_pane_ParamLimits

0xc2da,	// (0x0002b27d) listscroll_app_pane

0x4ec2,	// (0x00023e65) listscroll_form_pane

0xc2ea,	// (0x0002b28d) listscroll_gen_pane_ParamLimits

0xc2ea,	// (0x0002b28d) listscroll_gen_pane

0x1e65,	// (0x00020e08) listscroll_set_pane

0x6804,	// (0x000257a7) main_idle_act_pane

0x4b9c,	// (0x00023b3f) main_idle_trad_pane

0x4b9c,	// (0x00023b3f) main_list_empty_pane

0x4edc,	// (0x00023e7f) main_midp_pane

0x4ee8,	// (0x00023e8b) main_pane_g1_ParamLimits

0x4ee8,	// (0x00023e8b) main_pane_g1

0xc2fe,	// (0x0002b2a1) popup_ai_message_window_ParamLimits

0xc2fe,	// (0x0002b2a1) popup_ai_message_window

0xc38f,	// (0x0002b332) popup_fep_china_uni_window_ParamLimits

0xc38f,	// (0x0002b332) popup_fep_china_uni_window

0x1f6f,	// (0x00020f12) popup_fep_japan_candidate_window_ParamLimits

0x1f6f,	// (0x00020f12) popup_fep_japan_candidate_window

0x1f8f,	// (0x00020f32) popup_fep_japan_predictive_window_ParamLimits

0x1f8f,	// (0x00020f32) popup_fep_japan_predictive_window

0xc3eb,	// (0x0002b38e) popup_find_window

0xc408,	// (0x0002b3ab) popup_grid_graphic_window_ParamLimits

0xc408,	// (0x0002b3ab) popup_grid_graphic_window

0x1ff4,	// (0x00020f97) popup_large_graphic_colour_window

0xc4a0,	// (0x0002b443) popup_menu_window_ParamLimits

0xc4a0,	// (0x0002b443) popup_menu_window

0xc672,	// (0x0002b615) popup_note_image_window

0xc638,	// (0x0002b5db) popup_note_wait_window_ParamLimits

0xc638,	// (0x0002b5db) popup_note_wait_window

0xc68a,	// (0x0002b62d) popup_note_window_ParamLimits

0xc68a,	// (0x0002b62d) popup_note_window

0xc730,	// (0x0002b6d3) popup_query_code_window_ParamLimits

0xc730,	// (0x0002b6d3) popup_query_code_window

0x223c,	// (0x000211df) popup_query_data_code_window_ParamLimits

0x223c,	// (0x000211df) popup_query_data_code_window

0xc76a,	// (0x0002b70d) popup_query_data_window_ParamLimits

0xc76a,	// (0x0002b70d) popup_query_data_window

0xc7ec,	// (0x0002b78f) popup_query_sat_info_window_ParamLimits

0xc7ec,	// (0x0002b78f) popup_query_sat_info_window

0xc883,	// (0x0002b826) popup_snote_single_graphic_window_ParamLimits

0xc883,	// (0x0002b826) popup_snote_single_graphic_window

0xc883,	// (0x0002b826) popup_snote_single_text_window_ParamLimits

0xc883,	// (0x0002b826) popup_snote_single_text_window

0x22c3,	// (0x00021266) popup_sub_window_general

0x23f3,	// (0x00021396) popup_window_general_ParamLimits

0x23f3,	// (0x00021396) popup_window_general

0x4ef6,	// (0x00023e99) power_save_pane

0xc169,	// (0x0002b10c) control_pane_g1_ParamLimits

0xc169,	// (0x0002b10c) control_pane_g1

0xc192,	// (0x0002b135) control_pane_g2_ParamLimits

0xc192,	// (0x0002b135) control_pane_g2

0x4e59,	// (0x00023dfc) control_pane_g3_ParamLimits

0x4e59,	// (0x00023dfc) control_pane_g3

0x0007,

0xf78e,	// (0x0002e731) control_pane_g_ParamLimits

0xf78e,	// (0x0002e731) control_pane_g

0xc1d3,	// (0x0002b176) control_pane_t1_ParamLimits

0xc1d3,	// (0x0002b176) control_pane_t1

0xc231,	// (0x0002b1d4) control_pane_t2_ParamLimits

0xc231,	// (0x0002b1d4) control_pane_t2

0x0002,

0xf79f,	// (0x0002e742) control_pane_t_ParamLimits

0xf79f,	// (0x0002e742) control_pane_t

0x4d7a,	// (0x00023d1d) navi_navi_volume_pane_cp1

0x4d83,	// (0x00023d26) status_small_icon_pane

0x4d8b,	// (0x00023d2e) status_small_pane_g1_ParamLimits

0x4d8b,	// (0x00023d2e) status_small_pane_g1

0x4dbf,	// (0x00023d62) status_small_pane_g2_ParamLimits

0x4dbf,	// (0x00023d62) status_small_pane_g2

0x4dcb,	// (0x00023d6e) status_small_pane_g3_ParamLimits

0x4dcb,	// (0x00023d6e) status_small_pane_g3

0x4dd7,	// (0x00023d7a) status_small_pane_g4_ParamLimits

0x4dd7,	// (0x00023d7a) status_small_pane_g4

0x4de3,	// (0x00023d86) status_small_pane_g5_ParamLimits

0x4de3,	// (0x00023d86) status_small_pane_g5

0x4df2,	// (0x00023d95) status_small_pane_g6_ParamLimits

0x4df2,	// (0x00023d95) status_small_pane_g6

0x0007,

0xf77d,	// (0x0002e720) status_small_pane_g_ParamLimits

0xf77d,	// (0x0002e720) status_small_pane_g

0x4e22,	// (0x00023dc5) status_small_pane_t1

0x4e45,	// (0x00023de8) status_small_wait_pane_ParamLimits

0x4e45,	// (0x00023de8) status_small_wait_pane

0xd424,	// (0x0002c3c7) aid_levels_signal_ParamLimits

0xd424,	// (0x0002c3c7) aid_levels_signal

0xd43c,	// (0x0002c3df) signal_pane_g1_ParamLimits

0xd43c,	// (0x0002c3df) signal_pane_g1

0xd457,	// (0x0002c3fa) signal_pane_g2_ParamLimits

0xd457,	// (0x0002c3fa) signal_pane_g2

0x0003,

0xf70e,	// (0x0002e6b1) signal_pane_g_ParamLimits

0xf70e,	// (0x0002e6b1) signal_pane_g

0x467b,	// (0x0002361e) context_pane_g1

0xcf8c,	// (0x0002bf2f) title_pane_g1

0xcfc3,	// (0x0002bf66) title_pane_t1

0x3671,	// (0x00022614) title_pane_t2

0x3697,	// (0x0002263a) title_pane_t3

0x0002,

0xf55d,	// (0x0002e500) title_pane_t

0xd972,	// (0x0002c915) aid_levels_battery_ParamLimits

0xd972,	// (0x0002c915) aid_levels_battery

0xd98e,	// (0x0002c931) battery_pane_g1_ParamLimits

0xd98e,	// (0x0002c931) battery_pane_g1

0xd9ab,	// (0x0002c94e) battery_pane_g2_ParamLimits

0xd9ab,	// (0x0002c94e) battery_pane_g2

0x0001,

0xf7b1,	// (0x0002e754) battery_pane_g_ParamLimits

0xf7b1,	// (0x0002e754) battery_pane_g

0xdb7a,	// (0x0002cb1d) uni_indicator_pane_g1

0xdb91,	// (0x0002cb34) uni_indicator_pane_g2

0xdba7,	// (0x0002cb4a) uni_indicator_pane_g3

0x0005,

0xf91b,	// (0x0002e8be) uni_indicator_pane_g

0x4a0e,	// (0x000239b1) navi_icon_pane_ParamLimits

0x4a0e,	// (0x000239b1) navi_icon_pane

0x4957,	// (0x000238fa) navi_midp_pane

0x4a2a,	// (0x000239cd) navi_navi_pane

0x4a34,	// (0x000239d7) navi_text_pane_ParamLimits

0x4a34,	// (0x000239d7) navi_text_pane

0x35bf,	// (0x00022562) status_small_wait_pane_g1

0x3ac6,	// (0x00022a69) status_small_wait_pane_g2

0x0001,

0xf916,	// (0x0002e8b9) status_small_wait_pane_g

0x629f,	// (0x00025242) navi_navi_icon_text_pane

0x62a7,	// (0x0002524a) navi_navi_pane_g1_ParamLimits

0x62a7,	// (0x0002524a) navi_navi_pane_g1

0x62b9,	// (0x0002525c) navi_navi_pane_g2_ParamLimits

0x62b9,	// (0x0002525c) navi_navi_pane_g2

0x0001,

0xf8e4,	// (0x0002e887) navi_navi_pane_g_ParamLimits

0xf8e4,	// (0x0002e887) navi_navi_pane_g

0x62cb,	// (0x0002526e) navi_navi_tabs_pane

0x62d4,	// (0x00025277) navi_navi_text_pane

0x629f,	// (0x00025242) navi_navi_volume_pane

0x627b,	// (0x0002521e) navi_text_pane_t1

0x626f,	// (0x00025212) navi_icon_pane_g1

0x61c2,	// (0x00025165) navi_navi_text_pane_t1

0x2693,	// (0x00021636) navi_navi_volume_pane_g1

0x269b,	// (0x0002163e) volume_small_pane

0x6128,	// (0x000250cb) navi_navi_icon_text_pane_g1

0x6130,	// (0x000250d3) navi_navi_icon_text_pane_t1

0x4a2a,	// (0x000239cd) navi_tabs_2_long_pane

0x4a2a,	// (0x000239cd) navi_tabs_2_pane

0x4a2a,	// (0x000239cd) navi_tabs_3_long_pane

0x4a2a,	// (0x000239cd) navi_tabs_3_pane

0x4a2a,	// (0x000239cd) navi_tabs_4_pane

0x2673,	// (0x00021616) tabs_2_active_pane_ParamLimits

0x2673,	// (0x00021616) tabs_2_active_pane

0x2683,	// (0x00021626) tabs_2_passive_pane_ParamLimits

0x2683,	// (0x00021626) tabs_2_passive_pane

0x2641,	// (0x000215e4) tabs_3_active_pane_ParamLimits

0x2641,	// (0x000215e4) tabs_3_active_pane

0x2651,	// (0x000215f4) tabs_3_passive_pane_ParamLimits

0x2651,	// (0x000215f4) tabs_3_passive_pane

0x2662,	// (0x00021605) tabs_3_passive_pane_cp_ParamLimits

0x2662,	// (0x00021605) tabs_3_passive_pane_cp

0x25fd,	// (0x000215a0) tabs_4_active_pane_ParamLimits

0x25fd,	// (0x000215a0) tabs_4_active_pane

0x260e,	// (0x000215b1) tabs_4_passive_pane_ParamLimits

0x260e,	// (0x000215b1) tabs_4_passive_pane

0x261f,	// (0x000215c2) tabs_4_passive_pane_cp_ParamLimits

0x261f,	// (0x000215c2) tabs_4_passive_pane_cp

0x2630,	// (0x000215d3) tabs_4_passive_pane_cp2_ParamLimits

0x2630,	// (0x000215d3) tabs_4_passive_pane_cp2

0x25d9,	// (0x0002157c) tabs_2_long_active_pane_ParamLimits

0x25d9,	// (0x0002157c) tabs_2_long_active_pane

0x25eb,	// (0x0002158e) tabs_2_long_passive_pane_ParamLimits

0x25eb,	// (0x0002158e) tabs_2_long_passive_pane

0x259a,	// (0x0002153d) tabs_3_long_active_pane_ParamLimits

0x259a,	// (0x0002153d) tabs_3_long_active_pane

0x25ad,	// (0x00021550) tabs_3_long_passive_pane_ParamLimits

0x25ad,	// (0x00021550) tabs_3_long_passive_pane

0x25c6,	// (0x00021569) tabs_3_long_passive_pane_cp_ParamLimits

0x25c6,	// (0x00021569) tabs_3_long_passive_pane_cp

0x2540,	// (0x000214e3) volume_small_pane_g1

0x2549,	// (0x000214ec) volume_small_pane_g2

0x2552,	// (0x000214f5) volume_small_pane_g3

0x255b,	// (0x000214fe) volume_small_pane_g4

0x2564,	// (0x00021507) volume_small_pane_g5

0x256d,	// (0x00021510) volume_small_pane_g6

0x2576,	// (0x00021519) volume_small_pane_g7

0x257f,	// (0x00021522) volume_small_pane_g8

0x2588,	// (0x0002152b) volume_small_pane_g9

0x2591,	// (0x00021534) volume_small_pane_g10

0x0009,

0xf8b0,	// (0x0002e853) volume_small_pane_g

0x3924,	// (0x000228c7) bg_active_tab_pane_cp2_ParamLimits

0x3924,	// (0x000228c7) bg_active_tab_pane_cp2

0x36b7,	// (0x0002265a) tabs_3_active_pane_g1

0xd04f,	// (0x0002bff2) tabs_3_active_pane_t1

0x3924,	// (0x000228c7) bg_passive_tab_pane_cp2_ParamLimits

0x3924,	// (0x000228c7) bg_passive_tab_pane_cp2

0x36b7,	// (0x0002265a) tabs_3_passive_pane_g1

0xd04f,	// (0x0002bff2) tabs_3_passive_pane_t1

0x3924,	// (0x000228c7) bg_active_tab_pane_cp3_ParamLimits

0x3924,	// (0x000228c7) bg_active_tab_pane_cp3

0x36d1,	// (0x00022674) tabs_4_active_pane_g1

0xd061,	// (0x0002c004) tabs_4_active_pane_t1

0x3924,	// (0x000228c7) bg_passive_tab_pane_cp3_ParamLimits

0x3924,	// (0x000228c7) bg_passive_tab_pane_cp3

0x36d1,	// (0x00022674) tabs_4_1_passive_pane_g1

0xd061,	// (0x0002c004) tabs_4_1_passive_pane_t1

0x4edc,	// (0x00023e7f) list_highlight_pane_cp2

0xdc2f,	// (0x0002cbd2) list_set_pane_ParamLimits

0xdc2f,	// (0x0002cbd2) list_set_pane

0xdcc9,	// (0x0002cc6c) main_pane_set_t1_ParamLimits

0xdcc9,	// (0x0002cc6c) main_pane_set_t1

0xdce9,	// (0x0002cc8c) main_pane_set_t2_ParamLimits

0xdce9,	// (0x0002cc8c) main_pane_set_t2

0xdcfd,	// (0x0002cca0) main_pane_set_t3_ParamLimits

0xdcfd,	// (0x0002cca0) main_pane_set_t3

0xdd0f,	// (0x0002ccb2) main_pane_set_t4_ParamLimits

0xdd0f,	// (0x0002ccb2) main_pane_set_t4

0x0003,

0xf980,	// (0x0002e923) main_pane_set_t_ParamLimits

0xf980,	// (0x0002e923) main_pane_set_t

0xdd21,	// (0x0002ccc4) setting_code_pane

0xdd2b,	// (0x0002ccce) setting_slider_graphic_pane

0xdd2b,	// (0x0002ccce) setting_slider_pane

0xdd2b,	// (0x0002ccce) setting_text_pane

0xdd2b,	// (0x0002ccce) setting_volume_pane

0x17e9,	// (0x0002078c) volume_set_pane

0x36a9,	// (0x0002264c) bg_set_opt_pane_cp

0x17f1,	// (0x00020794) setting_slider_pane_t1

0x180a,	// (0x000207ad) setting_slider_pane_t2

0x1824,	// (0x000207c7) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002e507) setting_slider_pane_t

0x183c,	// (0x000207df) slider_set_pane

0x35c9,	// (0x0002256c) bg_set_opt_pane_cp2

0x36eb,	// (0x0002268e) setting_slider_graphic_pane_g1

0x1852,	// (0x000207f5) setting_slider_graphic_pane_t1

0x1862,	// (0x00020805) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002e50e) setting_slider_graphic_pane_t

0x1872,	// (0x00020815) slider_set_pane_cp

0x35c9,	// (0x0002256c) input_focus_pane_cp1

0x67eb,	// (0x0002578e) list_set_text_pane

0x35bf,	// (0x00022562) setting_text_pane_g1

0x35c9,	// (0x0002256c) input_focus_pane_cp2

0x35bf,	// (0x00022562) setting_code_pane_g1

0x36f4,	// (0x00022697) setting_code_pane_t1

0x0326,	// (0x0001f2c9) set_text_pane_t1_ParamLimits

0x0326,	// (0x0001f2c9) set_text_pane_t1

0x3f70,	// (0x00022f13) set_opt_bg_pane_g1

0x3f78,	// (0x00022f1b) set_opt_bg_pane_g2

0x67c5,	// (0x00025768) set_opt_bg_pane_g3

0x3f88,	// (0x00022f2b) set_opt_bg_pane_g4

0x3f90,	// (0x00022f33) set_opt_bg_pane_g5

0x3f98,	// (0x00022f3b) set_opt_bg_pane_g6

0x67cf,	// (0x00025772) set_opt_bg_pane_g7

0x67d7,	// (0x0002577a) set_opt_bg_pane_g8

0x67e1,	// (0x00025784) set_opt_bg_pane_g9

0x0008,

0xf96d,	// (0x0002e910) set_opt_bg_pane_g

0x6776,	// (0x00025719) slider_set_pane_g1

0x2708,	// (0x000216ab) slider_set_pane_g2

0x0006,

0xf95e,	// (0x0002e901) slider_set_pane_g

0x26a4,	// (0x00021647) volume_set_pane_g1

0x26ac,	// (0x0002164f) volume_set_pane_g2

0x26b4,	// (0x00021657) volume_set_pane_g3

0x26bc,	// (0x0002165f) volume_set_pane_g4

0x26c4,	// (0x00021667) volume_set_pane_g5

0x26cc,	// (0x0002166f) volume_set_pane_g6

0x26d4,	// (0x00021677) volume_set_pane_g7

0x26dc,	// (0x0002167f) volume_set_pane_g8

0x26e4,	// (0x00021687) volume_set_pane_g9

0x26ec,	// (0x0002168f) volume_set_pane_g10

0x0009,

0xf936,	// (0x0002e8d9) volume_set_pane_g

0xd073,	// (0x0002c016) indicator_pane_ParamLimits

0xd073,	// (0x0002c016) indicator_pane

0xd09b,	// (0x0002c03e) main_idle_pane_g2_ParamLimits

0xd09b,	// (0x0002c03e) main_idle_pane_g2

0xd0d3,	// (0x0002c076) main_pane_idle_g1_ParamLimits

0xd0d3,	// (0x0002c076) main_pane_idle_g1

0x3743,	// (0x000226e6) popup_clock_digital_analogue_window_ParamLimits

0x3743,	// (0x000226e6) popup_clock_digital_analogue_window

0xd0fa,	// (0x0002c09d) soft_indicator_pane_ParamLimits

0xd0fa,	// (0x0002c09d) soft_indicator_pane

0xd114,	// (0x0002c0b7) wallpaper_pane_ParamLimits

0xd114,	// (0x0002c0b7) wallpaper_pane

0x35bf,	// (0x00022562) wallpaper_pane_g1

0xd126,	// (0x0002c0c9) indicator_pane_g1_ParamLimits

0xd126,	// (0x0002c0c9) indicator_pane_g1

0x6bc5,	// (0x00025b68) navi_navi_icon_text_pane_srt_g1

0x3795,	// (0x00022738) soft_indicator_pane_t1

0x37af,	// (0x00022752) aid_ps_area_pane

0xd13c,	// (0x0002c0df) aid_ps_clock_pane

0x37ce,	// (0x00022771) aid_ps_indicator_pane

0x37da,	// (0x0002277d) indicator_ps_pane_ParamLimits

0x37da,	// (0x0002277d) indicator_ps_pane

0x37e9,	// (0x0002278c) power_save_pane_g1_ParamLimits

0x37e9,	// (0x0002278c) power_save_pane_g1

0x37f5,	// (0x00022798) power_save_pane_g2_ParamLimits

0x37f5,	// (0x00022798) power_save_pane_g2

0x13fa,	// (0x0002039d) aid_navinavi_width_pane

0x37af,	// (0x00022752) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002e513) power_save_pane_g_ParamLimits

0xf570,	// (0x0002e513) power_save_pane_g

0x3803,	// (0x000227a6) power_save_pane_t1_ParamLimits

0x3803,	// (0x000227a6) power_save_pane_t1

0xd13c,	// (0x0002c0df) aid_ps_clock_pane_ParamLimits

0x37ce,	// (0x00022771) aid_ps_indicator_pane_ParamLimits

0x3815,	// (0x000227b8) power_save_pane_t4_ParamLimits

0x3815,	// (0x000227b8) power_save_pane_t4

0x0001,

0xf575,	// (0x0002e518) power_save_pane_t_ParamLimits

0xf575,	// (0x0002e518) power_save_pane_t

0x383f,	// (0x000227e2) power_save_t3_ParamLimits

0x383f,	// (0x000227e2) power_save_t3

0x382a,	// (0x000227cd) power_save_t2_ParamLimits

0x382a,	// (0x000227cd) power_save_t2

0x3854,	// (0x000227f7) indicator_ps_pane_g1

0xd14a,	// (0x0002c0ed) ai_gene_pane_ParamLimits

0xd14a,	// (0x0002c0ed) ai_gene_pane

0xd161,	// (0x0002c104) ai_links_pane_ParamLimits

0xd161,	// (0x0002c104) ai_links_pane

0xd179,	// (0x0002c11c) indicator_pane_cp1_ParamLimits

0xd179,	// (0x0002c11c) indicator_pane_cp1

0xd188,	// (0x0002c12b) main_pane_idle_g1_cp_ParamLimits

0xd188,	// (0x0002c12b) main_pane_idle_g1_cp

0x388d,	// (0x00022830) popup_ai_links_title_window

0xd1a0,	// (0x0002c143) soft_indicator_pane_cp1_ParamLimits

0xd1a0,	// (0x0002c143) soft_indicator_pane_cp1

0x6568,	// (0x0002550b) ai_links_pane_g1

0x6571,	// (0x00025514) grid_ai_links_pane

0xdb71,	// (0x0002cb14) ai_gene_pane_1

0x6556,	// (0x000254f9) ai_gene_pane_2

0x655f,	// (0x00025502) list_highlight_pane_cp4

0xdb4d,	// (0x0002caf0) cell_ai_link_pane_ParamLimits

0xdb4d,	// (0x0002caf0) cell_ai_link_pane

0x6527,	// (0x000254ca) cell_ai_link_pane_g1

0x3ac6,	// (0x00022a69) cell_ai_link_pane_g2

0x0001,

0xf911,	// (0x0002e8b4) cell_ai_link_pane_g

0x35c9,	// (0x0002256c) grid_highlight_cp2

0x35c9,	// (0x0002256c) bg_popup_sub_pane_cp1

0x38b0,	// (0x00022853) popup_ai_links_title_window_t1

0x6475,	// (0x00025418) ai_gene_pane_1_g1_ParamLimits

0x6475,	// (0x00025418) ai_gene_pane_1_g1

0x6481,	// (0x00025424) ai_gene_pane_1_g2_ParamLimits

0x6481,	// (0x00025424) ai_gene_pane_1_g2

0x0001,

0xf907,	// (0x0002e8aa) ai_gene_pane_1_g_ParamLimits

0xf907,	// (0x0002e8aa) ai_gene_pane_1_g

0x648e,	// (0x00025431) ai_gene_pane_1_t1_ParamLimits

0x648e,	// (0x00025431) ai_gene_pane_1_t1

0x64c2,	// (0x00025465) grid_ai_soft_ind_pane

0x6460,	// (0x00025403) ai_gene_pane_2_t1_ParamLimits

0x6460,	// (0x00025403) ai_gene_pane_2_t1

0xd1b4,	// (0x0002c157) main_pane_empty_t1_ParamLimits

0xd1b4,	// (0x0002c157) main_pane_empty_t1

0xd1cc,	// (0x0002c16f) main_pane_empty_t2_ParamLimits

0xd1cc,	// (0x0002c16f) main_pane_empty_t2

0xd1e1,	// (0x0002c184) main_pane_empty_t3_ParamLimits

0xd1e1,	// (0x0002c184) main_pane_empty_t3

0xd1f3,	// (0x0002c196) main_pane_empty_t4_ParamLimits

0xd1f3,	// (0x0002c196) main_pane_empty_t4

0xd205,	// (0x0002c1a8) main_pane_empty_t5_ParamLimits

0xd205,	// (0x0002c1a8) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002e51d) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002e51d) main_pane_empty_t

0x3fc1,	// (0x00022f64) bg_popup_window_pane_ParamLimits

0x3fc1,	// (0x00022f64) bg_popup_window_pane

0x61d0,	// (0x00025173) find_popup_pane_cp2_ParamLimits

0x61d0,	// (0x00025173) find_popup_pane_cp2

0x61dc,	// (0x0002517f) heading_pane_ParamLimits

0x61dc,	// (0x0002517f) heading_pane

0x35c9,	// (0x0002256c) bg_popup_sub_pane

0xdace,	// (0x0002ca71) bg_popup_window_pane_g1_ParamLimits

0xdace,	// (0x0002ca71) bg_popup_window_pane_g1

0xdadd,	// (0x0002ca80) bg_popup_window_pane_g2_ParamLimits

0xdadd,	// (0x0002ca80) bg_popup_window_pane_g2

0xdae9,	// (0x0002ca8c) bg_popup_window_pane_g3_ParamLimits

0xdae9,	// (0x0002ca8c) bg_popup_window_pane_g3

0xdaf5,	// (0x0002ca98) bg_popup_window_pane_g4_ParamLimits

0xdaf5,	// (0x0002ca98) bg_popup_window_pane_g4

0xdb04,	// (0x0002caa7) bg_popup_window_pane_g5_ParamLimits

0xdb04,	// (0x0002caa7) bg_popup_window_pane_g5

0xdb14,	// (0x0002cab7) bg_popup_window_pane_g6_ParamLimits

0xdb14,	// (0x0002cab7) bg_popup_window_pane_g6

0xdb20,	// (0x0002cac3) bg_popup_window_pane_g7_ParamLimits

0xdb20,	// (0x0002cac3) bg_popup_window_pane_g7

0xdb2f,	// (0x0002cad2) bg_popup_window_pane_g8_ParamLimits

0xdb2f,	// (0x0002cad2) bg_popup_window_pane_g8

0xdb3e,	// (0x0002cae1) bg_popup_window_pane_g9_ParamLimits

0xdb3e,	// (0x0002cae1) bg_popup_window_pane_g9

0x61b6,	// (0x00025159) bg_popup_window_pane_g10_ParamLimits

0x61b6,	// (0x00025159) bg_popup_window_pane_g10

0x0009,

0xf8cf,	// (0x0002e872) bg_popup_window_pane_g_ParamLimits

0xf8cf,	// (0x0002e872) bg_popup_window_pane_g

0x60df,	// (0x00025082) bg_popup_heading_pane_ParamLimits

0x60df,	// (0x00025082) bg_popup_heading_pane

0x274e,	// (0x000216f1) tabs_4_passive_pane_cp_srt_ParamLimits

0x274e,	// (0x000216f1) tabs_4_passive_pane_cp_srt

0x2760,	// (0x00021703) tabs_4_passive_pane_srt_ParamLimits

0x60f3,	// (0x00025096) heading_pane_g2

0x2760,	// (0x00021703) tabs_4_passive_pane_srt

0x545a,	// (0x000243fd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x545a,	// (0x000243fd) bg_passive_tab_pane_cp3_srt

0x60fb,	// (0x0002509e) heading_pane_t1_ParamLimits

0x60fb,	// (0x0002509e) heading_pane_t1

0x6112,	// (0x000250b5) heading_pane_t2_ParamLimits

0x6112,	// (0x000250b5) heading_pane_t2

0x0001,

0xf8ca,	// (0x0002e86d) heading_pane_t_ParamLimits

0xf8ca,	// (0x0002e86d) heading_pane_t

0x5c0c,	// (0x00024baf) bg_popup_heading_pane_g1

0x5cbb,	// (0x00024c5e) bg_popup_heading_pane_g2

0x5cc5,	// (0x00024c68) bg_popup_heading_pane_g3

0x5ccf,	// (0x00024c72) bg_popup_heading_pane_g4

0x5cd9,	// (0x00024c7c) bg_popup_heading_pane_g5

0x5ce3,	// (0x00024c86) bg_popup_heading_pane_g6

0x5ceb,	// (0x00024c8e) bg_popup_heading_pane_g7

0x5cf3,	// (0x00024c96) bg_popup_heading_pane_g8

0x5cfd,	// (0x00024ca0) bg_popup_heading_pane_g9

0x0008,

0xf886,	// (0x0002e829) bg_popup_heading_pane_g

0x53e6,	// (0x00024389) bg_popup_sub_pane_g1

0x53ee,	// (0x00024391) bg_popup_sub_pane_g2

0x53f6,	// (0x00024399) bg_popup_sub_pane_g3

0x53fe,	// (0x000243a1) bg_popup_sub_pane_g4

0x5406,	// (0x000243a9) bg_popup_sub_pane_g5

0x540e,	// (0x000243b1) bg_popup_sub_pane_g6

0x5416,	// (0x000243b9) bg_popup_sub_pane_g7

0x541e,	// (0x000243c1) bg_popup_sub_pane_g8

0x5426,	// (0x000243c9) bg_popup_sub_pane_g9

0x0008,

0xf860,	// (0x0002e803) bg_popup_sub_pane_g

0x3924,	// (0x000228c7) bg_popup_window_pane_cp5_ParamLimits

0x3924,	// (0x000228c7) bg_popup_window_pane_cp5

0x3940,	// (0x000228e3) popup_note_window_g1_ParamLimits

0x3940,	// (0x000228e3) popup_note_window_g1

0x394c,	// (0x000228ef) popup_note_window_t1_ParamLimits

0x394c,	// (0x000228ef) popup_note_window_t1

0x3962,	// (0x00022905) popup_note_window_t2_ParamLimits

0x3962,	// (0x00022905) popup_note_window_t2

0x3978,	// (0x0002291b) popup_note_window_t3_ParamLimits

0x3978,	// (0x0002291b) popup_note_window_t3

0x398e,	// (0x00022931) popup_note_window_t4_ParamLimits

0x398e,	// (0x00022931) popup_note_window_t4

0x39b6,	// (0x00022959) popup_note_window_t5_ParamLimits

0x39b6,	// (0x00022959) popup_note_window_t5

0x0004,

0xf585,	// (0x0002e528) popup_note_window_t_ParamLimits

0xf585,	// (0x0002e528) popup_note_window_t

0x39da,	// (0x0002297d) bg_popup_window_pane_cp6_ParamLimits

0x39da,	// (0x0002297d) bg_popup_window_pane_cp6

0x5b88,	// (0x00024b2b) popup_note_image_window_g1_ParamLimits

0x5b88,	// (0x00024b2b) popup_note_image_window_g1

0x5b94,	// (0x00024b37) popup_note_image_window_g2_ParamLimits

0x5b94,	// (0x00024b37) popup_note_image_window_g2

0x0001,

0xf854,	// (0x0002e7f7) popup_note_image_window_g_ParamLimits

0xf854,	// (0x0002e7f7) popup_note_image_window_g

0x5bad,	// (0x00024b50) popup_note_image_window_t1_ParamLimits

0x5bad,	// (0x00024b50) popup_note_image_window_t1

0x5bc6,	// (0x00024b69) popup_note_image_window_t2_ParamLimits

0x5bc6,	// (0x00024b69) popup_note_image_window_t2

0x5bdf,	// (0x00024b82) popup_note_image_window_t3_ParamLimits

0x5bdf,	// (0x00024b82) popup_note_image_window_t3

0x0002,

0xf859,	// (0x0002e7fc) popup_note_image_window_t_ParamLimits

0xf859,	// (0x0002e7fc) popup_note_image_window_t

0x5a49,	// (0x000249ec) bg_popup_window_pane_cp7_ParamLimits

0x5a49,	// (0x000249ec) bg_popup_window_pane_cp7

0x5a79,	// (0x00024a1c) popup_note_wait_window_g1_ParamLimits

0x5a79,	// (0x00024a1c) popup_note_wait_window_g1

0x5a85,	// (0x00024a28) popup_note_wait_window_g2_ParamLimits

0x5a85,	// (0x00024a28) popup_note_wait_window_g2

0x0002,

0xf842,	// (0x0002e7e5) popup_note_wait_window_g_ParamLimits

0xf842,	// (0x0002e7e5) popup_note_wait_window_g

0x5a9d,	// (0x00024a40) popup_note_wait_window_t1_ParamLimits

0x5a9d,	// (0x00024a40) popup_note_wait_window_t1

0x5ac4,	// (0x00024a67) popup_note_wait_window_t2_ParamLimits

0x5ac4,	// (0x00024a67) popup_note_wait_window_t2

0x5ae1,	// (0x00024a84) popup_note_wait_window_t3_ParamLimits

0x5ae1,	// (0x00024a84) popup_note_wait_window_t3

0x5af4,	// (0x00024a97) popup_note_wait_window_t4_ParamLimits

0x5af4,	// (0x00024a97) popup_note_wait_window_t4

0x0004,

0xf849,	// (0x0002e7ec) popup_note_wait_window_t_ParamLimits

0xf849,	// (0x0002e7ec) popup_note_wait_window_t

0x5b19,	// (0x00024abc) wait_bar_pane_ParamLimits

0x5b19,	// (0x00024abc) wait_bar_pane

0x35c9,	// (0x0002256c) wait_anim_pane

0x35c9,	// (0x0002256c) wait_border_pane

0x35bf,	// (0x00022562) wait_anim_pane_g1

0x35bf,	// (0x00022562) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0002e6ac) wait_anim_pane_g

0x59ed,	// (0x00024990) wait_border_pane_g1

0x59f8,	// (0x0002499b) wait_border_pane_g2

0x5a01,	// (0x000249a4) wait_border_pane_g3

0x0002,

0xf83b,	// (0x0002e7de) wait_border_pane_g

0x5858,	// (0x000247fb) bg_popup_window_pane_cp16_ParamLimits

0x5858,	// (0x000247fb) bg_popup_window_pane_cp16

0x5958,	// (0x000248fb) indicator_popup_pane_cp4_ParamLimits

0x5958,	// (0x000248fb) indicator_popup_pane_cp4

0x596c,	// (0x0002490f) popup_query_data_window_t1_ParamLimits

0x596c,	// (0x0002490f) popup_query_data_window_t1

0x597e,	// (0x00024921) popup_query_data_window_t2_ParamLimits

0x597e,	// (0x00024921) popup_query_data_window_t2

0x5997,	// (0x0002493a) popup_query_data_window_t3_ParamLimits

0x5997,	// (0x0002493a) popup_query_data_window_t3

0x0002,

0xf834,	// (0x0002e7d7) popup_query_data_window_t_ParamLimits

0xf834,	// (0x0002e7d7) popup_query_data_window_t

0x59b1,	// (0x00024954) query_popup_data_pane_ParamLimits

0x59b1,	// (0x00024954) query_popup_data_pane

0x59c5,	// (0x00024968) query_popup_data_pane_cp1_ParamLimits

0x59c5,	// (0x00024968) query_popup_data_pane_cp1

0x5858,	// (0x000247fb) bg_popup_window_pane_cp10_ParamLimits

0x5858,	// (0x000247fb) bg_popup_window_pane_cp10

0x588a,	// (0x0002482d) indicator_popup_pane_ParamLimits

0x588a,	// (0x0002482d) indicator_popup_pane

0x58ac,	// (0x0002484f) popup_query_code_window_t1_ParamLimits

0x58ac,	// (0x0002484f) popup_query_code_window_t1

0x58c6,	// (0x00024869) popup_query_code_window_t2_ParamLimits

0x58c6,	// (0x00024869) popup_query_code_window_t2

0x590f,	// (0x000248b2) popup_query_code_window_t3_ParamLimits

0x590f,	// (0x000248b2) popup_query_code_window_t3

0x0002,

0xf82d,	// (0x0002e7d0) popup_query_code_window_t_ParamLimits

0xf82d,	// (0x0002e7d0) popup_query_code_window_t

0x593e,	// (0x000248e1) query_popup_pane_ParamLimits

0x593e,	// (0x000248e1) query_popup_pane

0x39da,	// (0x0002297d) bg_popup_window_pane_cp15_ParamLimits

0x39da,	// (0x0002297d) bg_popup_window_pane_cp15

0x39f8,	// (0x0002299b) indicator_popup_pane_cp1_ParamLimits

0x39f8,	// (0x0002299b) indicator_popup_pane_cp1

0x3a0b,	// (0x000229ae) indicator_popup_pane_cp2_ParamLimits

0x3a0b,	// (0x000229ae) indicator_popup_pane_cp2

0x3a1e,	// (0x000229c1) popup_query_data_code_window_g1_ParamLimits

0x3a1e,	// (0x000229c1) popup_query_data_code_window_g1

0x3a31,	// (0x000229d4) popup_query_data_code_window_t1_ParamLimits

0x3a31,	// (0x000229d4) popup_query_data_code_window_t1

0x3a43,	// (0x000229e6) popup_query_data_code_window_t2_ParamLimits

0x3a43,	// (0x000229e6) popup_query_data_code_window_t2

0x3a55,	// (0x000229f8) popup_query_data_code_window_t3_ParamLimits

0x3a55,	// (0x000229f8) popup_query_data_code_window_t3

0x3a6b,	// (0x00022a0e) popup_query_data_code_window_t4_ParamLimits

0x3a6b,	// (0x00022a0e) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002e533) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002e533) popup_query_data_code_window_t

0x245d,	// (0x00021400) list_single_midp_graphic_pane_g3

0x3a83,	// (0x00022a26) query_popup_data_pane_cp2_ParamLimits

0x3a96,	// (0x00022a39) query_popup_pane_cp2_ParamLimits

0x3a96,	// (0x00022a39) query_popup_pane_cp2

0x35c9,	// (0x0002256c) bg_popup_window_pane_cp11

0x5850,	// (0x000247f3) heading_pane_cp5

0x3b7e,	// (0x00022b21) listscroll_popup_info_pane

0x35c9,	// (0x0002256c) input_focus_pane_cp3

0x3aa9,	// (0x00022a4c) query_popup_pane_t1

0x3ab7,	// (0x00022a5a) list_popup_info_pane_ParamLimits

0x3ab7,	// (0x00022a5a) list_popup_info_pane

0x3ac6,	// (0x00022a69) listscroll_popup_info_pane_g1

0x3ace,	// (0x00022a71) scroll_pane_cp7

0x3ad8,	// (0x00022a7b) popup_info_list_pane_t1_ParamLimits

0x3ad8,	// (0x00022a7b) popup_info_list_pane_t1

0x3af2,	// (0x00022a95) popup_info_list_pane_t2_ParamLimits

0x3af2,	// (0x00022a95) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002e53c) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002e53c) popup_info_list_pane_t

0x35c9,	// (0x0002256c) bg_popup_window_pane_cp12

0x6bdf,	// (0x00025b82) find_popup_pane

0x36a9,	// (0x0002264c) bg_popup_window_pane_cp3

0x3b0c,	// (0x00022aaf) heading_pane_cp3

0x3b18,	// (0x00022abb) listscroll_popup_graphic_pane

0x35c9,	// (0x0002256c) bg_popup_window_pane_cp4

0xd267,	// (0x0002c20a) heading_pane_cp4

0x3b7e,	// (0x00022b21) listscroll_popup_colour_pane

0x3b86,	// (0x00022b29) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3b86,	// (0x00022b29) cell_large_graphic_colour_none_popup_pane

0xd26f,	// (0x0002c212) grid_large_graphic_colour_popup_pane_ParamLimits

0xd26f,	// (0x0002c212) grid_large_graphic_colour_popup_pane

0x3bc6,	// (0x00022b69) listscroll_popup_colour_pane_g1_ParamLimits

0x3bc6,	// (0x00022b69) listscroll_popup_colour_pane_g1

0x3bdd,	// (0x00022b80) listscroll_popup_colour_pane_g2_ParamLimits

0x3bdd,	// (0x00022b80) listscroll_popup_colour_pane_g2

0x3bf4,	// (0x00022b97) listscroll_popup_colour_pane_g3_ParamLimits

0x3bf4,	// (0x00022b97) listscroll_popup_colour_pane_g3

0xd293,	// (0x0002c236) listscroll_popup_colour_pane_g4_ParamLimits

0xd293,	// (0x0002c236) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002e541) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002e541) listscroll_popup_colour_pane_g

0x3c18,	// (0x00022bbb) scroll_pane_cp6_ParamLimits

0x3c18,	// (0x00022bbb) scroll_pane_cp6

0xd2a3,	// (0x0002c246) cell_large_graphic_colour_popup_pane_ParamLimits

0xd2a3,	// (0x0002c246) cell_large_graphic_colour_popup_pane

0x3c49,	// (0x00022bec) cell_large_graphic_colour_none_popup_pane_t1

0x35c9,	// (0x0002256c) grid_highlight_pane_cp5

0x3c58,	// (0x00022bfb) cell_large_graphic_colour_popup_pane_g1

0x3c60,	// (0x00022c03) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002e54a) cell_large_graphic_colour_popup_pane_g

0x3c68,	// (0x00022c0b) cell_large_graphic_colour_popup_pane_g2_copy1

0x3c71,	// (0x00022c14) grid_highlight_pane_cp4

0x3c79,	// (0x00022c1c) bg_popup_window_pane_cp8_ParamLimits

0x3c79,	// (0x00022c1c) bg_popup_window_pane_cp8

0x3c94,	// (0x00022c37) popup_snote_single_text_window_g1_ParamLimits

0x3c94,	// (0x00022c37) popup_snote_single_text_window_g1

0x3ca6,	// (0x00022c49) popup_snote_single_text_window_t1_ParamLimits

0x3ca6,	// (0x00022c49) popup_snote_single_text_window_t1

0x3cb9,	// (0x00022c5c) popup_snote_single_text_window_t2_ParamLimits

0x3cb9,	// (0x00022c5c) popup_snote_single_text_window_t2

0x3ccc,	// (0x00022c6f) popup_snote_single_text_window_t3_ParamLimits

0x3ccc,	// (0x00022c6f) popup_snote_single_text_window_t3

0x3d05,	// (0x00022ca8) popup_snote_single_text_window_t4_ParamLimits

0x3d05,	// (0x00022ca8) popup_snote_single_text_window_t4

0x3d39,	// (0x00022cdc) popup_snote_single_text_window_t5_ParamLimits

0x3d39,	// (0x00022cdc) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002e54f) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002e54f) popup_snote_single_text_window_t

0x3d68,	// (0x00022d0b) bg_popup_window_pane_cp9_ParamLimits

0x3d68,	// (0x00022d0b) bg_popup_window_pane_cp9

0x3c94,	// (0x00022c37) popup_snote_single_graphic_window_g1_ParamLimits

0x3c94,	// (0x00022c37) popup_snote_single_graphic_window_g1

0x3d76,	// (0x00022d19) popup_snote_single_graphic_window_g2_ParamLimits

0x3d76,	// (0x00022d19) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002e55a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002e55a) popup_snote_single_graphic_window_g

0x3d82,	// (0x00022d25) popup_snote_single_graphic_window_t1_ParamLimits

0x3d82,	// (0x00022d25) popup_snote_single_graphic_window_t1

0x3d95,	// (0x00022d38) popup_snote_single_graphic_window_t2_ParamLimits

0x3d95,	// (0x00022d38) popup_snote_single_graphic_window_t2

0x3da8,	// (0x00022d4b) popup_snote_single_graphic_window_t3_ParamLimits

0x3da8,	// (0x00022d4b) popup_snote_single_graphic_window_t3

0x3de1,	// (0x00022d84) popup_snote_single_graphic_window_t4_ParamLimits

0x3de1,	// (0x00022d84) popup_snote_single_graphic_window_t4

0x3e15,	// (0x00022db8) popup_snote_single_graphic_window_t5_ParamLimits

0x3e15,	// (0x00022db8) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002e55f) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002e55f) popup_snote_single_graphic_window_t

0x6b23,	// (0x00025ac6) grid_graphic_popup_pane_ParamLimits

0x6b23,	// (0x00025ac6) grid_graphic_popup_pane

0x6b4b,	// (0x00025aee) listscroll_popup_graphic_pane_g1_ParamLimits

0x6b4b,	// (0x00025aee) listscroll_popup_graphic_pane_g1

0xde1c,	// (0x0002cdbf) listscroll_popup_graphic_pane_g2_ParamLimits

0xde1c,	// (0x0002cdbf) listscroll_popup_graphic_pane_g2

0x0001,

0xf9aa,	// (0x0002e94d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9aa,	// (0x0002e94d) listscroll_popup_graphic_pane_g

0x6b73,	// (0x00025b16) scroll_pane_cp5

0xdddf,	// (0x0002cd82) cell_graphic_popup_pane_ParamLimits

0xdddf,	// (0x0002cd82) cell_graphic_popup_pane

0x6aad,	// (0x00025a50) cell_graphic_popup_pane_g1

0x6ab5,	// (0x00025a58) cell_graphic_popup_pane_g2

0x3c68,	// (0x00022c0b) cell_graphic_popup_pane_g3

0x0002,

0xf9a3,	// (0x0002e946) cell_graphic_popup_pane_g

0x6abe,	// (0x00025a61) cell_graphic_popup_pane_t2

0x3c71,	// (0x00022c14) grid_highlight_pane_cp3

0x3e56,	// (0x00022df9) list_gen_pane_ParamLimits

0x3e56,	// (0x00022df9) list_gen_pane

0x3e88,	// (0x00022e2b) scroll_pane

0xdd96,	// (0x0002cd39) bg_list_pane_g1_ParamLimits

0xdd96,	// (0x0002cd39) bg_list_pane_g1

0x6a22,	// (0x000259c5) bg_list_pane_g2_ParamLimits

0x6a22,	// (0x000259c5) bg_list_pane_g2

0x6a37,	// (0x000259da) bg_list_pane_g3_ParamLimits

0x6a37,	// (0x000259da) bg_list_pane_g3

0x6a4b,	// (0x000259ee) bg_list_pane_g4_ParamLimits

0x6a4b,	// (0x000259ee) bg_list_pane_g4

0xddb3,	// (0x0002cd56) bg_list_pane_g5_ParamLimits

0xddb3,	// (0x0002cd56) bg_list_pane_g5

0x0004,

0xf998,	// (0x0002e93b) bg_list_pane_g_ParamLimits

0xf998,	// (0x0002e93b) bg_list_pane_g

0xdd5e,	// (0x0002cd01) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_double2_graphic_large_graphic_pane

0xdd5e,	// (0x0002cd01) list_double2_graphic_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_double2_graphic_pane

0xdd5e,	// (0x0002cd01) list_double2_large_graphic_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_double2_large_graphic_pane

0xdd5e,	// (0x0002cd01) list_double2_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_double2_pane

0xdd5e,	// (0x0002cd01) list_double_graphic_heading_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_double_graphic_heading_pane

0xdd5e,	// (0x0002cd01) list_double_graphic_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_double_graphic_pane

0xdd5e,	// (0x0002cd01) list_double_heading_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_double_heading_pane

0xdd5e,	// (0x0002cd01) list_double_large_graphic_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_double_large_graphic_pane

0xdd5e,	// (0x0002cd01) list_double_number_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_double_number_pane

0xdd5e,	// (0x0002cd01) list_double_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_double_pane

0xdd5e,	// (0x0002cd01) list_double_time_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_double_time_pane

0xdd5e,	// (0x0002cd01) list_setting_number_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_setting_number_pane

0xdd5e,	// (0x0002cd01) list_setting_pane_ParamLimits

0xdd5e,	// (0x0002cd01) list_setting_pane

0xdd70,	// (0x0002cd13) list_single_2graphic_pane_ParamLimits

0xdd70,	// (0x0002cd13) list_single_2graphic_pane

0xdd70,	// (0x0002cd13) list_single_graphic_heading_pane_ParamLimits

0xdd70,	// (0x0002cd13) list_single_graphic_heading_pane

0xdd70,	// (0x0002cd13) list_single_graphic_pane_ParamLimits

0xdd70,	// (0x0002cd13) list_single_graphic_pane

0xdd70,	// (0x0002cd13) list_single_heading_pane_ParamLimits

0xdd70,	// (0x0002cd13) list_single_heading_pane

0xdd70,	// (0x0002cd13) list_single_large_graphic_pane_ParamLimits

0xdd70,	// (0x0002cd13) list_single_large_graphic_pane

0xdd70,	// (0x0002cd13) list_single_number_heading_pane_ParamLimits

0xdd70,	// (0x0002cd13) list_single_number_heading_pane

0xdd70,	// (0x0002cd13) list_single_number_pane_ParamLimits

0xdd70,	// (0x0002cd13) list_single_number_pane

0xdd70,	// (0x0002cd13) list_single_pane_ParamLimits

0xdd70,	// (0x0002cd13) list_single_pane

0x35c9,	// (0x0002256c) list_highlight_pane_cp1

0x0b03,	// (0x0001faa6) list_single_pane_g1_ParamLimits

0x0b03,	// (0x0001faa6) list_single_pane_g1

0x0b0f,	// (0x0001fab2) list_single_pane_g2_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002e571) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002e571) list_single_pane_g

0x0e19,	// (0x0001fdbc) list_single_pane_t1_ParamLimits

0x0e19,	// (0x0001fdbc) list_single_pane_t1

0x0b03,	// (0x0001faa6) list_single_number_pane_g1_ParamLimits

0x0b03,	// (0x0001faa6) list_single_number_pane_g1

0x0b0f,	// (0x0001fab2) list_single_number_pane_g2_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002e571) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002e571) list_single_number_pane_g

0x0b63,	// (0x0001fb06) list_single_number_pane_t1_ParamLimits

0x0b63,	// (0x0001fb06) list_single_number_pane_t1

0xbcbf,	// (0x0002ac62) list_single_number_pane_t2_ParamLimits

0xbcbf,	// (0x0002ac62) list_single_number_pane_t2

0x0001,

0xf959,	// (0x0002e8fc) list_single_number_pane_t_ParamLimits

0xf959,	// (0x0002e8fc) list_single_number_pane_t

0xb6a9,	// (0x0002a64c) list_single_graphic_pane_g1_ParamLimits

0xb6a9,	// (0x0002a64c) list_single_graphic_pane_g1

0x0b03,	// (0x0001faa6) list_single_graphic_pane_g2_ParamLimits

0x0b03,	// (0x0001faa6) list_single_graphic_pane_g2

0x0b0f,	// (0x0001fab2) list_single_graphic_pane_g3_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002e56a) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002e56a) list_single_graphic_pane_g

0xb6b5,	// (0x0002a658) list_single_graphic_pane_t1_ParamLimits

0xb6b5,	// (0x0002a658) list_single_graphic_pane_t1

0x0b03,	// (0x0001faa6) list_single_heading_pane_g1_ParamLimits

0x0b03,	// (0x0001faa6) list_single_heading_pane_g1

0x0b0f,	// (0x0001fab2) list_single_heading_pane_g2_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002e571) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002e571) list_single_heading_pane_g

0xb6cb,	// (0x0002a66e) list_single_heading_pane_t1_ParamLimits

0xb6cb,	// (0x0002a66e) list_single_heading_pane_t1

0xb6e1,	// (0x0002a684) list_single_heading_pane_t2_ParamLimits

0xb6e1,	// (0x0002a684) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002e576) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002e576) list_single_heading_pane_t

0x0b03,	// (0x0001faa6) list_single_number_heading_pane_g1_ParamLimits

0x0b03,	// (0x0001faa6) list_single_number_heading_pane_g1

0x0b0f,	// (0x0001fab2) list_single_number_heading_pane_g2_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002e571) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002e571) list_single_number_heading_pane_g

0xb6cb,	// (0x0002a66e) list_single_number_heading_pane_t1_ParamLimits

0xb6cb,	// (0x0002a66e) list_single_number_heading_pane_t1

0xb6f3,	// (0x0002a696) list_single_number_heading_pane_t2_ParamLimits

0xb6f3,	// (0x0002a696) list_single_number_heading_pane_t2

0x0df3,	// (0x0001fd96) list_single_number_heading_pane_t3_ParamLimits

0x0df3,	// (0x0001fd96) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002e57b) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002e57b) list_single_number_heading_pane_t

0x0af7,	// (0x0001fa9a) list_single_graphic_heading_pane_g1_ParamLimits

0x0af7,	// (0x0001fa9a) list_single_graphic_heading_pane_g1

0xb705,	// (0x0002a6a8) list_single_graphic_heading_pane_g4_ParamLimits

0xb705,	// (0x0002a6a8) list_single_graphic_heading_pane_g4

0x0b0f,	// (0x0001fab2) list_single_graphic_heading_pane_g5_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002e582) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002e582) list_single_graphic_heading_pane_g

0xb6cb,	// (0x0002a66e) list_single_graphic_heading_pane_t1_ParamLimits

0xb6cb,	// (0x0002a66e) list_single_graphic_heading_pane_t1

0xb716,	// (0x0002a6b9) list_single_graphic_heading_pane_t2_ParamLimits

0xb716,	// (0x0002a6b9) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002e589) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002e589) list_single_graphic_heading_pane_t

0x0e2f,	// (0x0001fdd2) list_single_large_graphic_pane_g1_ParamLimits

0x0e2f,	// (0x0001fdd2) list_single_large_graphic_pane_g1

0x0b03,	// (0x0001faa6) list_single_large_graphic_pane_g2_ParamLimits

0x0b03,	// (0x0001faa6) list_single_large_graphic_pane_g2

0x0b0f,	// (0x0001fab2) list_single_large_graphic_pane_g3_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002e58e) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002e58e) list_single_large_graphic_pane_g

0x59f8,	// (0x0002499b) wait_border_pane_g2_copy1

0xb728,	// (0x0002a6cb) list_single_large_graphic_pane_g4_cp2

0x0e3b,	// (0x0001fdde) list_single_large_graphic_pane_t1_ParamLimits

0x0e3b,	// (0x0001fdde) list_single_large_graphic_pane_t1

0xb730,	// (0x0002a6d3) list_double_pane_g1_ParamLimits

0xb730,	// (0x0002a6d3) list_double_pane_g1

0xb73c,	// (0x0002a6df) list_double_pane_g2_ParamLimits

0xb73c,	// (0x0002a6df) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002e595) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002e595) list_double_pane_g

0xb748,	// (0x0002a6eb) list_double_pane_t1_ParamLimits

0xb748,	// (0x0002a6eb) list_double_pane_t1

0xb75e,	// (0x0002a701) list_double_pane_t2_ParamLimits

0xb75e,	// (0x0002a701) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002e59a) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002e59a) list_double_pane_t

0xb770,	// (0x0002a713) list_double2_pane_g1_ParamLimits

0xb770,	// (0x0002a713) list_double2_pane_g1

0xb781,	// (0x0002a724) list_double2_pane_g2_ParamLimits

0xb781,	// (0x0002a724) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002e59f) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002e59f) list_double2_pane_g

0xb78d,	// (0x0002a730) list_double2_pane_t1_ParamLimits

0xb78d,	// (0x0002a730) list_double2_pane_t1

0xb7a3,	// (0x0002a746) list_double2_pane_t2_ParamLimits

0xb7a3,	// (0x0002a746) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002e5a4) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002e5a4) list_double2_pane_t

0xb730,	// (0x0002a6d3) list_double_number_pane_g1_ParamLimits

0xb730,	// (0x0002a6d3) list_double_number_pane_g1

0xb73c,	// (0x0002a6df) list_double_number_pane_g2_ParamLimits

0xb73c,	// (0x0002a6df) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002e595) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002e595) list_double_number_pane_g

0xb7b5,	// (0x0002a758) list_double_number_pane_t1_ParamLimits

0xb7b5,	// (0x0002a758) list_double_number_pane_t1

0xb7c7,	// (0x0002a76a) list_double_number_pane_t2_ParamLimits

0xb7c7,	// (0x0002a76a) list_double_number_pane_t2

0xb7dd,	// (0x0002a780) list_double_number_pane_t3_ParamLimits

0xb7dd,	// (0x0002a780) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002e5a9) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002e5a9) list_double_number_pane_t

0xb7ef,	// (0x0002a792) list_double_graphic_pane_g1_ParamLimits

0xb7ef,	// (0x0002a792) list_double_graphic_pane_g1

0xb7fb,	// (0x0002a79e) list_double_graphic_pane_g2_ParamLimits

0xb7fb,	// (0x0002a79e) list_double_graphic_pane_g2

0xb80a,	// (0x0002a7ad) list_double_graphic_pane_g3_ParamLimits

0xb80a,	// (0x0002a7ad) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002e5b0) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002e5b0) list_double_graphic_pane_g

0xb822,	// (0x0002a7c5) list_double_graphic_pane_t1_ParamLimits

0xb822,	// (0x0002a7c5) list_double_graphic_pane_t1

0xb838,	// (0x0002a7db) list_double_graphic_pane_t2_ParamLimits

0xb838,	// (0x0002a7db) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002e5b9) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002e5b9) list_double_graphic_pane_t

0x066f,	// (0x0001f612) list_double2_graphic_pane_g1_ParamLimits

0x066f,	// (0x0001f612) list_double2_graphic_pane_g1

0x1067,	// (0x0002000a) list_double2_graphic_pane_g2_ParamLimits

0x1067,	// (0x0002000a) list_double2_graphic_pane_g2

0xb781,	// (0x0002a724) list_double2_graphic_pane_g3_ParamLimits

0xb781,	// (0x0002a724) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002e5be) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002e5be) list_double2_graphic_pane_g

0xb84a,	// (0x0002a7ed) list_double2_graphic_pane_t1_ParamLimits

0xb84a,	// (0x0002a7ed) list_double2_graphic_pane_t1

0xb860,	// (0x0002a803) list_double2_graphic_pane_t2_ParamLimits

0xb860,	// (0x0002a803) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002e5c5) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002e5c5) list_double2_graphic_pane_t

0xb872,	// (0x0002a815) list_double_large_graphic_pane_g1_ParamLimits

0xb872,	// (0x0002a815) list_double_large_graphic_pane_g1

0xb891,	// (0x0002a834) list_double_large_graphic_pane_g2_ParamLimits

0xb891,	// (0x0002a834) list_double_large_graphic_pane_g2

0xb73c,	// (0x0002a6df) list_double_large_graphic_pane_g3_ParamLimits

0xb73c,	// (0x0002a6df) list_double_large_graphic_pane_g3

0xb8a2,	// (0x0002a845) list_double_large_graphic_pane_g4_ParamLimits

0xb8a2,	// (0x0002a845) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002e5ca) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002e5ca) list_double_large_graphic_pane_g

0xb8b5,	// (0x0002a858) list_double_large_graphic_pane_t1_ParamLimits

0xb8b5,	// (0x0002a858) list_double_large_graphic_pane_t1

0xb8ce,	// (0x0002a871) list_double_large_graphic_pane_t2_ParamLimits

0xb8ce,	// (0x0002a871) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002e5d5) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002e5d5) list_double_large_graphic_pane_t

0xb8e0,	// (0x0002a883) list_double2_large_graphic_pane_g1_ParamLimits

0xb8e0,	// (0x0002a883) list_double2_large_graphic_pane_g1

0xb770,	// (0x0002a713) list_double2_large_graphic_pane_g2_ParamLimits

0xb770,	// (0x0002a713) list_double2_large_graphic_pane_g2

0xb781,	// (0x0002a724) list_double2_large_graphic_pane_g3_ParamLimits

0xb781,	// (0x0002a724) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002e5da) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002e5da) list_double2_large_graphic_pane_g

0xb8ec,	// (0x0002a88f) list_double2_large_graphic_pane_t1_ParamLimits

0xb8ec,	// (0x0002a88f) list_double2_large_graphic_pane_t1

0xb902,	// (0x0002a8a5) list_double2_large_graphic_pane_t2_ParamLimits

0xb902,	// (0x0002a8a5) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002e5e1) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002e5e1) list_double2_large_graphic_pane_t

0xb914,	// (0x0002a8b7) list_double_heading_pane_g1_ParamLimits

0xb914,	// (0x0002a8b7) list_double_heading_pane_g1

0x0444,	// (0x0001f3e7) list_double_heading_pane_g2_ParamLimits

0x0444,	// (0x0001f3e7) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002e5e6) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002e5e6) list_double_heading_pane_g

0xb925,	// (0x0002a8c8) list_double_heading_pane_t1_ParamLimits

0xb925,	// (0x0002a8c8) list_double_heading_pane_t1

0xb7a3,	// (0x0002a746) list_double_heading_pane_t2_ParamLimits

0xb7a3,	// (0x0002a746) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002e5eb) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002e5eb) list_double_heading_pane_t

0x066f,	// (0x0001f612) list_double_graphic_heading_pane_g1_ParamLimits

0x066f,	// (0x0001f612) list_double_graphic_heading_pane_g1

0xb914,	// (0x0002a8b7) list_double_graphic_heading_pane_g2_ParamLimits

0xb914,	// (0x0002a8b7) list_double_graphic_heading_pane_g2

0x0444,	// (0x0001f3e7) list_double_graphic_heading_pane_g3_ParamLimits

0x0444,	// (0x0001f3e7) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002e5f0) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002e5f0) list_double_graphic_heading_pane_g

0xb93b,	// (0x0002a8de) list_double_graphic_heading_pane_t1_ParamLimits

0xb93b,	// (0x0002a8de) list_double_graphic_heading_pane_t1

0xb860,	// (0x0002a803) list_double_graphic_heading_pane_t2_ParamLimits

0xb860,	// (0x0002a803) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002e5f7) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002e5f7) list_double_graphic_heading_pane_t

0xb891,	// (0x0002a834) list_double_time_pane_g1_ParamLimits

0xb891,	// (0x0002a834) list_double_time_pane_g1

0xb73c,	// (0x0002a6df) list_double_time_pane_g2_ParamLimits

0xb73c,	// (0x0002a6df) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0002e5fc) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0002e5fc) list_double_time_pane_g

0xb951,	// (0x0002a8f4) list_double_time_pane_t1_ParamLimits

0xb951,	// (0x0002a8f4) list_double_time_pane_t1

0xb967,	// (0x0002a90a) list_double_time_pane_t2_ParamLimits

0xb967,	// (0x0002a90a) list_double_time_pane_t2

0xb979,	// (0x0002a91c) list_double_time_pane_t3_ParamLimits

0xb979,	// (0x0002a91c) list_double_time_pane_t3

0xb98b,	// (0x0002a92e) list_double_time_pane_t4_ParamLimits

0xb98b,	// (0x0002a92e) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0002e601) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0002e601) list_double_time_pane_t

0xb99d,	// (0x0002a940) list_setting_pane_g1_ParamLimits

0xb99d,	// (0x0002a940) list_setting_pane_g1

0xb9a9,	// (0x0002a94c) list_setting_pane_g2_ParamLimits

0xb9a9,	// (0x0002a94c) list_setting_pane_g2

0x0001,

0xf667,	// (0x0002e60a) list_setting_pane_g_ParamLimits

0xf667,	// (0x0002e60a) list_setting_pane_g

0xb9b5,	// (0x0002a958) list_setting_pane_t1_ParamLimits

0xb9b5,	// (0x0002a958) list_setting_pane_t1

0xb9cf,	// (0x0002a972) list_setting_pane_t2_ParamLimits

0xb9cf,	// (0x0002a972) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0002e60f) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0002e60f) list_setting_pane_t

0xba0e,	// (0x0002a9b1) set_value_pane_cp_ParamLimits

0xba0e,	// (0x0002a9b1) set_value_pane_cp

0xba1a,	// (0x0002a9bd) list_setting_number_pane_g1_ParamLimits

0xba1a,	// (0x0002a9bd) list_setting_number_pane_g1

0xba26,	// (0x0002a9c9) list_setting_number_pane_g2_ParamLimits

0xba26,	// (0x0002a9c9) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0002e616) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0002e616) list_setting_number_pane_g

0xba32,	// (0x0002a9d5) list_setting_number_pane_t1_ParamLimits

0xba32,	// (0x0002a9d5) list_setting_number_pane_t1

0xba4b,	// (0x0002a9ee) list_setting_number_pane_t2_ParamLimits

0xba4b,	// (0x0002a9ee) list_setting_number_pane_t2

0xba65,	// (0x0002aa08) list_setting_number_pane_t3_ParamLimits

0xba65,	// (0x0002aa08) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0002e61b) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0002e61b) list_setting_number_pane_t

0xba0e,	// (0x0002a9b1) set_value_pane_ParamLimits

0xba0e,	// (0x0002a9b1) set_value_pane

0x3ebc,	// (0x00022e5f) bg_set_opt_pane_ParamLimits

0x3ebc,	// (0x00022e5f) bg_set_opt_pane

0x07d0,	// (0x0001f773) set_value_pane_t1

0x3edd,	// (0x00022e80) slider_set_pane_cp3

0x3ee6,	// (0x00022e89) volume_small_pane_cp

0x3eef,	// (0x00022e92) list_form_gen_pane

0x3ef8,	// (0x00022e9b) scroll_pane_cp8

0xbaa8,	// (0x0002aa4b) form_field_data_pane_ParamLimits

0xbaa8,	// (0x0002aa4b) form_field_data_pane

0xbabf,	// (0x0002aa62) form_field_data_wide_pane_ParamLimits

0xbabf,	// (0x0002aa62) form_field_data_wide_pane

0xbadf,	// (0x0002aa82) form_field_popup_pane_ParamLimits

0xbadf,	// (0x0002aa82) form_field_popup_pane

0xbaf7,	// (0x0002aa9a) form_field_popup_wide_pane_ParamLimits

0xbaf7,	// (0x0002aa9a) form_field_popup_wide_pane

0x0864,	// (0x0001f807) form_field_slider_pane_ParamLimits

0x0864,	// (0x0001f807) form_field_slider_pane

0x0877,	// (0x0001f81a) form_field_slider_wide_pane_ParamLimits

0x0877,	// (0x0001f81a) form_field_slider_wide_pane

0x3f09,	// (0x00022eac) data_form_pane

0xbb18,	// (0x0002aabb) form_field_data_pane_t1

0x3f15,	// (0x00022eb8) input_focus_pane

0x08ac,	// (0x0001f84f) data_form_wide_pane

0x08c9,	// (0x0001f86c) form_field_data_wide_pane_t1

0x3c86,	// (0x00022c29) input_focus_pane_cp6

0xbb32,	// (0x0002aad5) form_field_popup_pane_t1

0x3f15,	// (0x00022eb8) input_focus_pane_cp7

0x3f43,	// (0x00022ee6) list_form_pane

0x090b,	// (0x0001f8ae) form_field_popup_wide_pane_t1

0x3f15,	// (0x00022eb8) input_focus_pane_cp8

0x3f4f,	// (0x00022ef2) list_form_wide_pane

0xbb54,	// (0x0002aaf7) form_field_slider_pane_t1_ParamLimits

0xbb54,	// (0x0002aaf7) form_field_slider_pane_t1

0xbb6c,	// (0x0002ab0f) form_field_slider_pane_t2_ParamLimits

0xbb6c,	// (0x0002ab0f) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0002e62b) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0002e62b) form_field_slider_pane_t

0x3924,	// (0x000228c7) input_focus_pane_cp9_ParamLimits

0x3924,	// (0x000228c7) input_focus_pane_cp9

0xbb81,	// (0x0002ab24) slider_cont_pane_ParamLimits

0xbb81,	// (0x0002ab24) slider_cont_pane

0x3f5e,	// (0x00022f01) form_field_slider_wide_pane_t1_ParamLimits

0x3f5e,	// (0x00022f01) form_field_slider_wide_pane_t1

0x0967,	// (0x0001f90a) form_field_slider_wide_pane_t2_ParamLimits

0x0967,	// (0x0001f90a) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0002e630) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0002e630) form_field_slider_wide_pane_t

0x3924,	// (0x000228c7) input_focus_pane_cp10_ParamLimits

0x3924,	// (0x000228c7) input_focus_pane_cp10

0xbb95,	// (0x0002ab38) slider_cont_pane_cp1_ParamLimits

0xbb95,	// (0x0002ab38) slider_cont_pane_cp1

0xbba9,	// (0x0002ab4c) slider_form_pane_cp

0x3f70,	// (0x00022f13) input_focus_pane_g1

0x3f78,	// (0x00022f1b) input_focus_pane_g2

0x3f80,	// (0x00022f23) input_focus_pane_g3

0x3f88,	// (0x00022f2b) input_focus_pane_g4

0x3f90,	// (0x00022f33) input_focus_pane_g5

0x3f98,	// (0x00022f3b) input_focus_pane_g6

0x3fa0,	// (0x00022f43) input_focus_pane_g7

0x3fa8,	// (0x00022f4b) input_focus_pane_g8

0x3fb0,	// (0x00022f53) input_focus_pane_g9

0x35bf,	// (0x00022562) input_focus_pane_g10

0x0009,

0xf692,	// (0x0002e635) input_focus_pane_g

0x5a01,	// (0x000249a4) wait_border_pane_g3_copy1

0xbbb1,	// (0x0002ab54) data_form_pane_t1

0x35bf,	// (0x00022562) wait_anim_pane_g1_copy1

0xbcd1,	// (0x0002ac74) data_form_wide_pane_t1

0xbbcb,	// (0x0002ab6e) list_form_graphic_pane_cp_ParamLimits

0xbbcb,	// (0x0002ab6e) list_form_graphic_pane_cp

0x6960,	// (0x00025903) slider_form_pane_g1

0x6969,	// (0x0002590c) slider_form_pane_g2

0x0006,

0xf989,	// (0x0002e92c) slider_form_pane_g

0xbbcb,	// (0x0002ab6e) list_form_graphic_pane_ParamLimits

0xbbcb,	// (0x0002ab6e) list_form_graphic_pane

0x09e5,	// (0x0001f988) list_form_graphic_pane_g1

0x09ed,	// (0x0001f990) list_form_graphic_pane_t1_ParamLimits

0x09ed,	// (0x0001f990) list_form_graphic_pane_t1

0x36a9,	// (0x0002264c) list_highlight_pane_cp5_ParamLimits

0x36a9,	// (0x0002264c) list_highlight_pane_cp5

0xbbdd,	// (0x0002ab80) find_pane_g1

0x3fb8,	// (0x00022f5b) input_find_pane

0xbbe6,	// (0x0002ab89) input_find_pane_g1_ParamLimits

0xbbe6,	// (0x0002ab89) input_find_pane_g1

0xbbf2,	// (0x0002ab95) input_find_pane_t1_ParamLimits

0xbbf2,	// (0x0002ab95) input_find_pane_t1

0xbc07,	// (0x0002abaa) input_find_pane_t2_ParamLimits

0xbc07,	// (0x0002abaa) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0002e64a) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0002e64a) input_find_pane_t

0x3fc1,	// (0x00022f64) input_focus_pane_cp5_ParamLimits

0x3fc1,	// (0x00022f64) input_focus_pane_cp5

0x3fdb,	// (0x00022f7e) bg_popup_window_pane_cp2_ParamLimits

0x3fdb,	// (0x00022f7e) bg_popup_window_pane_cp2

0x3fe8,	// (0x00022f8b) listscroll_menu_pane_ParamLimits

0x3fe8,	// (0x00022f8b) listscroll_menu_pane

0xd2d8,	// (0x0002c27b) popup_submenu_window_ParamLimits

0xd2d8,	// (0x0002c27b) popup_submenu_window

0x4020,	// (0x00022fc3) find_popup_pane_g1

0x4028,	// (0x00022fcb) input_popup_find_pane_cp

0x3fc1,	// (0x00022f64) input_focus_pane_cp4_ParamLimits

0x3fc1,	// (0x00022f64) input_focus_pane_cp4

0x403e,	// (0x00022fe1) input_popup_find_pane_t1_ParamLimits

0x403e,	// (0x00022fe1) input_popup_find_pane_t1

0x35c9,	// (0x0002256c) bg_popup_sub_pane_cp

0x406c,	// (0x0002300f) listscroll_popup_sub_pane

0x4074,	// (0x00023017) list_submenu_pane_ParamLimits

0x4074,	// (0x00023017) list_submenu_pane

0x4085,	// (0x00023028) scroll_pane_cp4

0x408d,	// (0x00023030) list_single_popup_submenu_pane_ParamLimits

0x408d,	// (0x00023030) list_single_popup_submenu_pane

0x40a1,	// (0x00023044) list_single_popup_submenu_pane_g1

0x40a9,	// (0x0002304c) list_single_popup_submenu_pane_t1_ParamLimits

0x40a9,	// (0x0002304c) list_single_popup_submenu_pane_t1

0x3924,	// (0x000228c7) bg_active_tab_pane_cp1_ParamLimits

0x3924,	// (0x000228c7) bg_active_tab_pane_cp1

0x40be,	// (0x00023061) tabs_2_active_pane_g1

0xd312,	// (0x0002c2b5) tabs_2_active_pane_t1

0x3924,	// (0x000228c7) bg_passive_tab_pane_cp1_ParamLimits

0x3924,	// (0x000228c7) bg_passive_tab_pane_cp1

0x40be,	// (0x00023061) tabs_2_passive_pane_g1

0xd312,	// (0x0002c2b5) tabs_2_passive_pane_t1

0x36a9,	// (0x0002264c) bg_active_tab_pane_cp4

0xd324,	// (0x0002c2c7) tabs_2_long_active_pane_t1

0x4edc,	// (0x00023e7f) bg_passive_tab_pane_cp4

0x2465,	// (0x00021408) list_single_midp_graphic_pane_g4_ParamLimits

0x36a9,	// (0x0002264c) bg_active_tab_pane_cp5

0xd337,	// (0x0002c2da) tabs_3_long_active_pane_t1

0x4edc,	// (0x00023e7f) bg_passive_tab_pane_cp5

0x2465,	// (0x00021408) list_single_midp_graphic_pane_g4

0x36a9,	// (0x0002264c) bg_popup_window_pane_cp13_ParamLimits

0x36a9,	// (0x0002264c) bg_popup_window_pane_cp13

0x4120,	// (0x000230c3) listscroll_popup_fast_pane_ParamLimits

0x4120,	// (0x000230c3) listscroll_popup_fast_pane

0x412f,	// (0x000230d2) grid_popup_fast_pane_ParamLimits

0x412f,	// (0x000230d2) grid_popup_fast_pane

0x4141,	// (0x000230e4) scroll_pane_cp9_ParamLimits

0x4141,	// (0x000230e4) scroll_pane_cp9

0x8258,	// (0x000271fb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8258,	// (0x000271fb) list_single_graphic_hl_pane_t1_cp2

0x4165,	// (0x00023108) input_focus_pane_cp20_ParamLimits

0x4165,	// (0x00023108) input_focus_pane_cp20

0x4173,	// (0x00023116) query_popup_data_pane_t1_ParamLimits

0x4173,	// (0x00023116) query_popup_data_pane_t1

0x4186,	// (0x00023129) query_popup_data_pane_t2_ParamLimits

0x4186,	// (0x00023129) query_popup_data_pane_t2

0x41cc,	// (0x0002316f) query_popup_data_pane_t3_ParamLimits

0x41cc,	// (0x0002316f) query_popup_data_pane_t3

0x420d,	// (0x000231b0) query_popup_data_pane_t4_ParamLimits

0x420d,	// (0x000231b0) query_popup_data_pane_t4

0x4249,	// (0x000231ec) query_popup_data_pane_t5_ParamLimits

0x4249,	// (0x000231ec) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0002e64f) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0002e64f) query_popup_data_pane_t

0x3f70,	// (0x00022f13) bg_set_opt_pane_g1

0x3f78,	// (0x00022f1b) bg_set_opt_pane_g2

0x3f80,	// (0x00022f23) bg_set_opt_pane_g3

0x3f88,	// (0x00022f2b) bg_set_opt_pane_g4

0x3f90,	// (0x00022f33) bg_set_opt_pane_g5

0x3f98,	// (0x00022f3b) bg_set_opt_pane_g6

0x3fa0,	// (0x00022f43) bg_set_opt_pane_g7

0x3fa8,	// (0x00022f4b) bg_set_opt_pane_g8

0x3fb0,	// (0x00022f53) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0002e65a) bg_set_opt_pane_g

0x1b17,	// (0x00020aba) control_top_pane_stacon_ParamLimits

0x1b17,	// (0x00020aba) control_top_pane_stacon

0x1b6a,	// (0x00020b0d) signal_pane_stacon_ParamLimits

0x1b6a,	// (0x00020b0d) signal_pane_stacon

0x4835,	// (0x000237d8) stacon_top_pane_g1_ParamLimits

0x4835,	// (0x000237d8) stacon_top_pane_g1

0x1b8f,	// (0x00020b32) title_pane_stacon_ParamLimits

0x1b8f,	// (0x00020b32) title_pane_stacon

0x1bb9,	// (0x00020b5c) uni_indicator_pane_stacon_ParamLimits

0x1bb9,	// (0x00020b5c) uni_indicator_pane_stacon

0x1bce,	// (0x00020b71) battery_pane_stacon_ParamLimits

0x1bce,	// (0x00020b71) battery_pane_stacon

0x1c12,	// (0x00020bb5) control_bottom_pane_stacon_ParamLimits

0x1c12,	// (0x00020bb5) control_bottom_pane_stacon

0x1c35,	// (0x00020bd8) navi_pane_stacon_ParamLimits

0x1c35,	// (0x00020bd8) navi_pane_stacon

0x4857,	// (0x000237fa) stacon_bottom_pane_g1_ParamLimits

0x4857,	// (0x000237fa) stacon_bottom_pane_g1

0x187a,	// (0x0002081d) aid_levels_signal_lsc_ParamLimits

0x187a,	// (0x0002081d) aid_levels_signal_lsc

0x1890,	// (0x00020833) signal_pane_stacon_g1_ParamLimits

0x1890,	// (0x00020833) signal_pane_stacon_g1

0x18a4,	// (0x00020847) signal_pane_stacon_g2_ParamLimits

0x18a4,	// (0x00020847) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0002e66d) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002e66d) signal_pane_stacon_g

0x18d9,	// (0x0002087c) title_pane_stacon_t1_ParamLimits

0x18d9,	// (0x0002087c) title_pane_stacon_t1

0x428d,	// (0x00023230) uni_indicator_pane_stacon_g1

0x4297,	// (0x0002323a) uni_indicator_pane_stacon_g2

0x42a1,	// (0x00023244) uni_indicator_pane_stacon_g3

0x42ab,	// (0x0002324e) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0002e679) uni_indicator_pane_stacon_g

0x18fe,	// (0x000208a1) control_top_pane_stacon_g1

0x1906,	// (0x000208a9) control_top_pane_stacon_t1_ParamLimits

0x1906,	// (0x000208a9) control_top_pane_stacon_t1

0x193d,	// (0x000208e0) aid_levels_battery_lsc_ParamLimits

0x193d,	// (0x000208e0) aid_levels_battery_lsc

0x1954,	// (0x000208f7) battery_pane_stacon_g1_ParamLimits

0x1954,	// (0x000208f7) battery_pane_stacon_g1

0x1967,	// (0x0002090a) battery_pane_stacon_g2_ParamLimits

0x1967,	// (0x0002090a) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0002e682) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0002e682) battery_pane_stacon_g

0x19a5,	// (0x00020948) navi_icon_pane_stacon

0x19b9,	// (0x0002095c) navi_navi_pane_stacon

0x19a5,	// (0x00020948) navi_text_pane_stacon

0x18fe,	// (0x000208a1) control_bottom_pane_stacon_g1

0x19cd,	// (0x00020970) control_bottom_pane_stacon_t1_ParamLimits

0x19cd,	// (0x00020970) control_bottom_pane_stacon_t1

0xd349,	// (0x0002c2ec) grid_app_pane_ParamLimits

0xd349,	// (0x0002c2ec) grid_app_pane

0xd381,	// (0x0002c324) scroll_pane_cp15_ParamLimits

0xd381,	// (0x0002c324) scroll_pane_cp15

0xd396,	// (0x0002c339) cell_app_pane_ParamLimits

0xd396,	// (0x0002c339) cell_app_pane

0xd3db,	// (0x0002c37e) cell_app_pane_g1_ParamLimits

0xd3db,	// (0x0002c37e) cell_app_pane_g1

0x434a,	// (0x000232ed) cell_app_pane_g2_ParamLimits

0x434a,	// (0x000232ed) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0002e687) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0002e687) cell_app_pane_g

0xd3fb,	// (0x0002c39e) cell_app_pane_t1_ParamLimits

0xd3fb,	// (0x0002c39e) cell_app_pane_t1

0x436d,	// (0x00023310) grid_highlight_pane_ParamLimits

0x436d,	// (0x00023310) grid_highlight_pane

0x3f70,	// (0x00022f13) cell_highlight_pane_g1

0x3f78,	// (0x00022f1b) cell_highlight_pane_g2

0x3f80,	// (0x00022f23) cell_highlight_pane_g3

0x3f88,	// (0x00022f2b) cell_highlight_pane_g4

0x3f90,	// (0x00022f33) cell_highlight_pane_g5

0x3f98,	// (0x00022f3b) cell_highlight_pane_g6

0x3fa0,	// (0x00022f43) cell_highlight_pane_g7

0x3fa8,	// (0x00022f4b) cell_highlight_pane_g8

0x3fb0,	// (0x00022f53) cell_highlight_pane_g9

0x35bf,	// (0x00022562) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0002e635) cell_highlight_pane_g

0x437e,	// (0x00023321) bg_scroll_pane

0x1a17,	// (0x000209ba) scroll_handle_pane

0x43c5,	// (0x00023368) scroll_bg_pane_g1

0x43da,	// (0x0002337d) scroll_bg_pane_g2

0x43f2,	// (0x00023395) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0002e68c) scroll_bg_pane_g

0x4407,	// (0x000233aa) scroll_handle_focus_pane_ParamLimits

0x4407,	// (0x000233aa) scroll_handle_focus_pane

0x43c5,	// (0x00023368) scroll_handle_pane_g1

0x4414,	// (0x000233b7) scroll_handle_pane_g2

0x43f2,	// (0x00023395) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0002e693) scroll_handle_pane_g

0x3fc1,	// (0x00022f64) bg_popup_sub_pane_cp21_ParamLimits

0x3fc1,	// (0x00022f64) bg_popup_sub_pane_cp21

0x4428,	// (0x000233cb) popup_fep_japan_predictive_window_t1_ParamLimits

0x4428,	// (0x000233cb) popup_fep_japan_predictive_window_t1

0x4442,	// (0x000233e5) popup_fep_japan_predictive_window_t2_ParamLimits

0x4442,	// (0x000233e5) popup_fep_japan_predictive_window_t2

0x4475,	// (0x00023418) popup_fep_japan_predictive_window_t3_ParamLimits

0x4475,	// (0x00023418) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0002e69a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0002e69a) popup_fep_japan_predictive_window_t

0x35c9,	// (0x0002256c) bg_popup_sub_pane_cp23

0x44ac,	// (0x0002344f) listscroll_japin_cand_pane

0x44b4,	// (0x00023457) popup_fep_japan_candidate_window_t1

0x44c2,	// (0x00023465) candidate_pane_ParamLimits

0x44c2,	// (0x00023465) candidate_pane

0x44d4,	// (0x00023477) scroll_pane_cp30

0x44dc,	// (0x0002347f) list_single_popup_jap_candidate_pane_ParamLimits

0x44dc,	// (0x0002347f) list_single_popup_jap_candidate_pane

0x35c9,	// (0x0002256c) list_highlight_pane_cp30

0x44f1,	// (0x00023494) list_single_popup_jap_candidate_pane_t1

0x4500,	// (0x000234a3) level_1_signal

0x4512,	// (0x000234b5) level_2_signal

0x4525,	// (0x000234c8) level_3_signal

0x4538,	// (0x000234db) level_4_signal

0x454b,	// (0x000234ee) level_5_signal

0x455e,	// (0x00023501) level_6_signal

0x4571,	// (0x00023514) level_7_signal

0x4500,	// (0x000234a3) level_1_battery

0x4512,	// (0x000234b5) level_2_battery

0x4525,	// (0x000234c8) level_3_battery

0x4538,	// (0x000234db) level_4_battery

0x454b,	// (0x000234ee) level_5_battery

0x455e,	// (0x00023501) level_6_battery

0x4571,	// (0x00023514) level_7_battery

0x459c,	// (0x0002353f) list_menu_pane_ParamLimits

0x459c,	// (0x0002353f) list_menu_pane

0x45b2,	// (0x00023555) scroll_pane_cp25_ParamLimits

0x45b2,	// (0x00023555) scroll_pane_cp25

0x45cb,	// (0x0002356e) list_double2_graphic_pane_cp2_ParamLimits

0x45cb,	// (0x0002356e) list_double2_graphic_pane_cp2

0x45cb,	// (0x0002356e) list_double2_large_graphic_pane_cp2_ParamLimits

0x45cb,	// (0x0002356e) list_double2_large_graphic_pane_cp2

0x45cb,	// (0x0002356e) list_double2_pane_cp2_ParamLimits

0x45cb,	// (0x0002356e) list_double2_pane_cp2

0x45cb,	// (0x0002356e) list_double_graphic_pane_cp2_ParamLimits

0x45cb,	// (0x0002356e) list_double_graphic_pane_cp2

0x45cb,	// (0x0002356e) list_double_large_graphic_pane_cp2_ParamLimits

0x45cb,	// (0x0002356e) list_double_large_graphic_pane_cp2

0x45cb,	// (0x0002356e) list_double_number_pane_cp2_ParamLimits

0x45cb,	// (0x0002356e) list_double_number_pane_cp2

0x45cb,	// (0x0002356e) list_double_pane_cp2_ParamLimits

0x45cb,	// (0x0002356e) list_double_pane_cp2

0xd412,	// (0x0002c3b5) list_single_2graphic_pane_cp2_ParamLimits

0xd412,	// (0x0002c3b5) list_single_2graphic_pane_cp2

0xd412,	// (0x0002c3b5) list_single_graphic_heading_pane_cp2_ParamLimits

0xd412,	// (0x0002c3b5) list_single_graphic_heading_pane_cp2

0xd412,	// (0x0002c3b5) list_single_graphic_pane_cp2_ParamLimits

0xd412,	// (0x0002c3b5) list_single_graphic_pane_cp2

0xd412,	// (0x0002c3b5) list_single_heading_pane_cp2_ParamLimits

0xd412,	// (0x0002c3b5) list_single_heading_pane_cp2

0x4608,	// (0x000235ab) list_single_large_graphic_pane_cp2_ParamLimits

0x4608,	// (0x000235ab) list_single_large_graphic_pane_cp2

0xd412,	// (0x0002c3b5) list_single_number_heading_pane_cp2_ParamLimits

0xd412,	// (0x0002c3b5) list_single_number_heading_pane_cp2

0xd412,	// (0x0002c3b5) list_single_number_pane_cp2_ParamLimits

0xd412,	// (0x0002c3b5) list_single_number_pane_cp2

0xd412,	// (0x0002c3b5) list_single_pane_cp2_ParamLimits

0xd412,	// (0x0002c3b5) list_single_pane_cp2

0x4684,	// (0x00023627) bg_popup_sub_pane_cp22

0x1ac9,	// (0x00020a6c) popup_side_volume_key_window_g1

0x1af3,	// (0x00020a96) popup_side_volume_key_window_t1

0x1b0f,	// (0x00020ab2) volume_small_pane_cp1

0x3924,	// (0x000228c7) bg_popup_sub_pane_cp24_ParamLimits

0x3924,	// (0x000228c7) bg_popup_sub_pane_cp24

0x469a,	// (0x0002363d) fep_china_uni_candidate_pane_ParamLimits

0x469a,	// (0x0002363d) fep_china_uni_candidate_pane

0x46ae,	// (0x00023651) fep_china_uni_entry_pane

0x46be,	// (0x00023661) popup_fep_china_uni_window_g1

0x46da,	// (0x0002367d) fep_china_uni_entry_pane_g1

0x46e2,	// (0x00023685) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0002e6cb) fep_china_uni_entry_pane_g

0x46ea,	// (0x0002368d) fep_entry_item_pane

0x46f4,	// (0x00023697) fep_candidate_item_pane

0x46fc,	// (0x0002369f) fep_china_uni_candidate_pane_g1

0x4704,	// (0x000236a7) fep_china_uni_candidate_pane_g2

0x470c,	// (0x000236af) fep_china_uni_candidate_pane_g3

0x4714,	// (0x000236b7) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0002e6d0) fep_china_uni_candidate_pane_g

0x35bf,	// (0x00022562) fep_entry_item_pane_g1

0x471c,	// (0x000236bf) fep_entry_item_pane_t1_ParamLimits

0x471c,	// (0x000236bf) fep_entry_item_pane_t1

0x4732,	// (0x000236d5) fep_candidate_item_pane_t1_ParamLimits

0x4732,	// (0x000236d5) fep_candidate_item_pane_t1

0x4747,	// (0x000236ea) fep_candidate_item_pane_t2_ParamLimits

0x4747,	// (0x000236ea) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0002e6d9) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0002e6d9) fep_candidate_item_pane_t

0x36a9,	// (0x0002264c) list_highlight_pane_cp31_ParamLimits

0x36a9,	// (0x0002264c) list_highlight_pane_cp31

0x4759,	// (0x000236fc) level_1_signal_lsc

0x4762,	// (0x00023705) level_2_signal_lsc

0x476b,	// (0x0002370e) level_3_signal_lsc

0x4774,	// (0x00023717) level_4_signal_lsc

0x477d,	// (0x00023720) level_5_signal_lsc

0x4786,	// (0x00023729) level_6_signal_lsc

0x478f,	// (0x00023732) level_7_signal_lsc

0x478f,	// (0x00023732) level_1_battery_lsc

0x4798,	// (0x0002373b) level_2_battery_lsc

0x47a1,	// (0x00023744) level_3_battery_lsc

0x47aa,	// (0x0002374d) level_4_battery_lsc

0x47b3,	// (0x00023756) level_5_battery_lsc

0x47bc,	// (0x0002375f) level_6_battery_lsc

0x4759,	// (0x000236fc) level_7_battery_lsc

0x47c5,	// (0x00023768) scroll_handle_focus_pane_g1

0x47ce,	// (0x00023771) scroll_handle_focus_pane_g2

0x47d7,	// (0x0002377a) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0002e6de) scroll_handle_focus_pane_g

0xbc1c,	// (0x0002abbf) list_single_2graphic_pane_g1_ParamLimits

0xbc1c,	// (0x0002abbf) list_single_2graphic_pane_g1

0xb705,	// (0x0002a6a8) list_single_2graphic_pane_g2_ParamLimits

0xb705,	// (0x0002a6a8) list_single_2graphic_pane_g2

0x0b0f,	// (0x0001fab2) list_single_2graphic_pane_g3_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_2graphic_pane_g3

0xbc28,	// (0x0002abcb) list_single_2graphic_pane_g4_ParamLimits

0xbc28,	// (0x0002abcb) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0002e6e5) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0002e6e5) list_single_2graphic_pane_g

0xbc34,	// (0x0002abd7) list_single_2graphic_pane_t1_ParamLimits

0xbc34,	// (0x0002abd7) list_single_2graphic_pane_t1

0xbc62,	// (0x0002ac05) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbc62,	// (0x0002ac05) list_double2_graphic_large_graphic_pane_g1

0xb770,	// (0x0002a713) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb770,	// (0x0002a713) list_double2_graphic_large_graphic_pane_g2

0xb781,	// (0x0002a724) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb781,	// (0x0002a724) list_double2_graphic_large_graphic_pane_g3

0xbc74,	// (0x0002ac17) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbc74,	// (0x0002ac17) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0002e6ee) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0002e6ee) list_double2_graphic_large_graphic_pane_g

0xbc80,	// (0x0002ac23) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbc80,	// (0x0002ac23) list_double2_graphic_large_graphic_pane_t1

0xbc96,	// (0x0002ac39) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbc96,	// (0x0002ac39) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0002e6f7) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0002e6f7) list_double2_graphic_large_graphic_pane_t

0x491f,	// (0x000238c2) popup_fast_swap_window_ParamLimits

0x491f,	// (0x000238c2) popup_fast_swap_window

0x493b,	// (0x000238de) popup_side_volume_key_window

0x4957,	// (0x000238fa) stacon_top_pane

0x4961,	// (0x00023904) status_pane_ParamLimits

0x4961,	// (0x00023904) status_pane

0x4957,	// (0x000238fa) status_small_pane

0x35c9,	// (0x0002256c) control_pane

0x35c9,	// (0x0002256c) stacon_bottom_pane

0x3ef8,	// (0x00022e9b) scroll_pane_cp121

0x3eef,	// (0x00022e92) set_content_pane

0x47e0,	// (0x00023783) bg_active_tab_pane_g1_cp1

0x47e9,	// (0x0002378c) bg_active_tab_pane_g2_cp1

0x47f2,	// (0x00023795) bg_active_tab_pane_g3_cp1

0x47e0,	// (0x00023783) bg_passive_tab_pane_g1_cp1

0x47e9,	// (0x0002378c) bg_passive_tab_pane_g2_cp1

0x47f2,	// (0x00023795) bg_passive_tab_pane_g3_cp1

0x47fb,	// (0x0002379e) bg_active_tab_pane_g1_cp2

0x47e9,	// (0x0002378c) bg_active_tab_pane_g2_cp2

0x4804,	// (0x000237a7) bg_active_tab_pane_g3_cp2

0x47fb,	// (0x0002379e) bg_passive_tab_pane_g1_cp2

0x47e9,	// (0x0002378c) bg_passive_tab_pane_g2_cp2

0x4804,	// (0x000237a7) bg_passive_tab_pane_g3_cp2

0x480d,	// (0x000237b0) bg_active_tab_pane_g1_cp3

0x47e9,	// (0x0002378c) bg_active_tab_pane_g2_cp3

0x4816,	// (0x000237b9) bg_active_tab_pane_g3_cp3

0x480d,	// (0x000237b0) bg_passive_tab_pane_g1_cp3

0x47e9,	// (0x0002378c) bg_passive_tab_pane_g2_cp3

0x4816,	// (0x000237b9) bg_passive_tab_pane_g3_cp3

0x481f,	// (0x000237c2) bg_active_tab_pane_g1_cp4

0x47e9,	// (0x0002378c) bg_active_tab_pane_g2_cp4

0x482a,	// (0x000237cd) bg_active_tab_pane_g3_cp4

0x481f,	// (0x000237c2) bg_passive_tab_pane_g1_cp4

0x47e9,	// (0x0002378c) bg_passive_tab_pane_g2_cp4

0x482a,	// (0x000237cd) bg_passive_tab_pane_g3_cp4

0x4873,	// (0x00023816) bg_active_tab_pane_g1_cp5

0x47e9,	// (0x0002378c) bg_active_tab_pane_g2_cp5

0x487c,	// (0x0002381f) bg_active_tab_pane_g3_cp5

0x4873,	// (0x00023816) bg_passive_tab_pane_g1_cp5

0x47e9,	// (0x0002378c) bg_passive_tab_pane_g2_cp5

0x487c,	// (0x0002381f) bg_passive_tab_pane_g3_cp5

0x6f33,	// (0x00025ed6) list_set_graphic_pane_ParamLimits

0x6f33,	// (0x00025ed6) list_set_graphic_pane

0x35c9,	// (0x0002256c) bg_set_opt_pane_cp4

0xd49f,	// (0x0002c442) list_set_graphic_pane_g1_ParamLimits

0xd49f,	// (0x0002c442) list_set_graphic_pane_g1

0xd4ab,	// (0x0002c44e) list_set_graphic_pane_g2_ParamLimits

0xd4ab,	// (0x0002c44e) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0002e6fc) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0002e6fc) list_set_graphic_pane_g

0x0009,

0xfab9,	// (0x0002ea5c) volume_small_pane_cp_g

0x48d2,	// (0x00023875) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x48d2,	// (0x00023875) list_double2_large_graphic_pane_g1_cp2

0x48de,	// (0x00023881) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x48de,	// (0x00023881) list_double2_large_graphic_pane_g2_cp2

0x48ef,	// (0x00023892) list_double2_large_graphic_pane_g3_cp2

0x48f7,	// (0x0002389a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x48f7,	// (0x0002389a) list_double2_large_graphic_pane_t1_cp2

0x490d,	// (0x000238b0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x490d,	// (0x000238b0) list_double2_large_graphic_pane_t2_cp2

0x64d4,	// (0x00025477) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x64d4,	// (0x00025477) list_double_large_graphic_pane_g1_cp2

0x64e5,	// (0x00025488) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x64e5,	// (0x00025488) list_double_large_graphic_pane_g2_cp2

0x4a7d,	// (0x00023a20) list_double_large_graphic_pane_g3_cp2

0x64f6,	// (0x00025499) list_double_large_graphic_pane_g4_cp

0x64fe,	// (0x000254a1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x64fe,	// (0x000254a1) list_double_large_graphic_pane_t1_cp2

0x6515,	// (0x000254b8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6515,	// (0x000254b8) list_double_large_graphic_pane_t2_cp2

0x496f,	// (0x00023912) list_double2_graphic_pane_g1_cp2_ParamLimits

0x496f,	// (0x00023912) list_double2_graphic_pane_g1_cp2

0x497d,	// (0x00023920) list_double2_graphic_pane_g2_cp2_ParamLimits

0x497d,	// (0x00023920) list_double2_graphic_pane_g2_cp2

0x498e,	// (0x00023931) list_double2_graphic_pane_g3_cp2

0x4998,	// (0x0002393b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4998,	// (0x0002393b) list_double2_graphic_pane_t1_cp2

0x49ae,	// (0x00023951) list_double2_graphic_pane_t2_cp2_ParamLimits

0x49ae,	// (0x00023951) list_double2_graphic_pane_t2_cp2

0x49c0,	// (0x00023963) list_single_number_heading_pane_g1_cp2_ParamLimits

0x49c0,	// (0x00023963) list_single_number_heading_pane_g1_cp2

0x49cc,	// (0x0002396f) list_single_number_heading_pane_g2_cp2

0x49d4,	// (0x00023977) list_single_number_heading_pane_t1_cp2_ParamLimits

0x49d4,	// (0x00023977) list_single_number_heading_pane_t1_cp2

0x49ea,	// (0x0002398d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x49ea,	// (0x0002398d) list_single_number_heading_pane_t2_cp2

0x49fc,	// (0x0002399f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x49fc,	// (0x0002399f) list_single_number_heading_pane_t3_cp2

0x49c0,	// (0x00023963) list_single_heading_pane_g1_cp2_ParamLimits

0x49c0,	// (0x00023963) list_single_heading_pane_g1_cp2

0x49cc,	// (0x0002396f) list_single_heading_pane_g2_cp2

0x49d4,	// (0x00023977) list_single_heading_pane_t1_cp2_ParamLimits

0x49d4,	// (0x00023977) list_single_heading_pane_t1_cp2

0x62dc,	// (0x0002527f) list_single_heading_pane_t2_cp2_ParamLimits

0x62dc,	// (0x0002527f) list_single_heading_pane_t2_cp2

0x6224,	// (0x000251c7) list_double_graphic_pane_g1_cp2_ParamLimits

0x6224,	// (0x000251c7) list_double_graphic_pane_g1_cp2

0x6230,	// (0x000251d3) list_double_graphic_pane_g2_cp2_ParamLimits

0x6230,	// (0x000251d3) list_double_graphic_pane_g2_cp2

0x623f,	// (0x000251e2) list_double_graphic_pane_g3_cp2

0x6247,	// (0x000251ea) list_double_graphic_pane_t1_cp2_ParamLimits

0x6247,	// (0x000251ea) list_double_graphic_pane_t1_cp2

0x625d,	// (0x00025200) list_double_graphic_pane_t2_cp2_ParamLimits

0x625d,	// (0x00025200) list_double_graphic_pane_t2_cp2

0x4a71,	// (0x00023a14) list_double_number_pane_g1_cp2_ParamLimits

0x4a71,	// (0x00023a14) list_double_number_pane_g1_cp2

0x4a7d,	// (0x00023a20) list_double_number_pane_g2_cp2

0x61e8,	// (0x0002518b) list_double_number_pane_t1_cp2_ParamLimits

0x61e8,	// (0x0002518b) list_double_number_pane_t1_cp2

0x61fc,	// (0x0002519f) list_double_number_pane_t2_cp2_ParamLimits

0x61fc,	// (0x0002519f) list_double_number_pane_t2_cp2

0x6212,	// (0x000251b5) list_double_number_pane_t3_cp2_ParamLimits

0x6212,	// (0x000251b5) list_double_number_pane_t3_cp2

0x60d1,	// (0x00025074) list_single_graphic_pane_g1_cp2_ParamLimits

0x60d1,	// (0x00025074) list_single_graphic_pane_g1_cp2

0x4ad5,	// (0x00023a78) list_single_graphic_pane_g2_cp2_ParamLimits

0x4ad5,	// (0x00023a78) list_single_graphic_pane_g2_cp2

0x4ae1,	// (0x00023a84) list_single_graphic_pane_g3_cp2

0x60a7,	// (0x0002504a) list_single_graphic_pane_t1_cp2_ParamLimits

0x60a7,	// (0x0002504a) list_single_graphic_pane_t1_cp2

0x4ad5,	// (0x00023a78) list_single_number_pane_g1_cp2_ParamLimits

0x4ad5,	// (0x00023a78) list_single_number_pane_g1_cp2

0x4ae1,	// (0x00023a84) list_single_number_pane_g2_cp2

0x60a7,	// (0x0002504a) list_single_number_pane_t1_cp2_ParamLimits

0x60a7,	// (0x0002504a) list_single_number_pane_t1_cp2

0x60bd,	// (0x00025060) list_single_number_pane_t2_cp2_ParamLimits

0x60bd,	// (0x00025060) list_single_number_pane_t2_cp2

0x48de,	// (0x00023881) list_double2_pane_g1_cp2_ParamLimits

0x48de,	// (0x00023881) list_double2_pane_g1_cp2

0x48ef,	// (0x00023892) list_double2_pane_g2_cp2

0x4a49,	// (0x000239ec) list_double2_pane_t1_cp2_ParamLimits

0x4a49,	// (0x000239ec) list_double2_pane_t1_cp2

0x4a5f,	// (0x00023a02) list_double2_pane_t2_cp2_ParamLimits

0x4a5f,	// (0x00023a02) list_double2_pane_t2_cp2

0x4a71,	// (0x00023a14) list_double_pane_g1_cp2_ParamLimits

0x4a71,	// (0x00023a14) list_double_pane_g1_cp2

0x4a7d,	// (0x00023a20) list_double_pane_g2_cp2

0x4a85,	// (0x00023a28) list_double_pane_t1_cp2_ParamLimits

0x4a85,	// (0x00023a28) list_double_pane_t1_cp2

0x4a9b,	// (0x00023a3e) list_double_pane_t2_cp2_ParamLimits

0x4a9b,	// (0x00023a3e) list_double_pane_t2_cp2

0x4ac5,	// (0x00023a68) list_single_pane_cp2_g3

0x4ad5,	// (0x00023a78) list_single_pane_g1_cp2_ParamLimits

0x4ad5,	// (0x00023a78) list_single_pane_g1_cp2

0x4ae1,	// (0x00023a84) list_single_pane_g2_cp2

0x4ae9,	// (0x00023a8c) list_single_pane_t1_cp2_ParamLimits

0x4ae9,	// (0x00023a8c) list_single_pane_t1_cp2

0x4b01,	// (0x00023aa4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4b01,	// (0x00023aa4) list_single_large_graphic_pane_g1_cp2

0x4b0d,	// (0x00023ab0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4b0d,	// (0x00023ab0) list_single_large_graphic_pane_g2_cp2

0x4b19,	// (0x00023abc) list_single_large_graphic_pane_g3_cp2

0x4b21,	// (0x00023ac4) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4b21,	// (0x00023ac4) list_single_large_graphic_pane_g4_cp1

0x4b3b,	// (0x00023ade) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4b3b,	// (0x00023ade) list_single_large_graphic_pane_t1_cp2

0x6073,	// (0x00025016) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6073,	// (0x00025016) list_single_graphic_heading_pane_g1_cp2

0x6040,	// (0x00024fe3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6040,	// (0x00024fe3) list_single_graphic_heading_pane_g4_cp2

0x4ae1,	// (0x00023a84) list_single_graphic_heading_pane_g5_cp2

0x607f,	// (0x00025022) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x607f,	// (0x00025022) list_single_graphic_heading_pane_t1_cp2

0x6095,	// (0x00025038) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6095,	// (0x00025038) list_single_graphic_heading_pane_t2_cp2

0x6034,	// (0x00024fd7) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6034,	// (0x00024fd7) list_single_2graphic_pane_g1_cp2

0x6040,	// (0x00024fe3) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6040,	// (0x00024fe3) list_single_2graphic_pane_g2_cp2

0x4ae1,	// (0x00023a84) list_single_2graphic_pane_g3_cp2

0x6051,	// (0x00024ff4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6051,	// (0x00024ff4) list_single_2graphic_pane_g4_cp2

0x605d,	// (0x00025000) list_single_2graphic_pane_t1_cp2_ParamLimits

0x605d,	// (0x00025000) list_single_2graphic_pane_t1_cp2

0x35bf,	// (0x00022562) list_highlight_pane_g10_cp1

0x5c0c,	// (0x00024baf) list_highlight_pane_g1_cp1

0x5c14,	// (0x00024bb7) list_highlight_pane_g2_cp1

0x5c1c,	// (0x00024bbf) list_highlight_pane_g3_cp1

0x5c24,	// (0x00024bc7) list_highlight_pane_g4_cp1

0x5c2c,	// (0x00024bcf) list_highlight_pane_g5_cp1

0x5c34,	// (0x00024bd7) list_highlight_pane_g6_cp1

0x5c3c,	// (0x00024bdf) list_highlight_pane_g7_cp1

0x5c44,	// (0x00024be7) list_highlight_pane_g8_cp1

0x5c4c,	// (0x00024bef) list_highlight_pane_g9_cp1

0xda85,	// (0x0002ca28) form_field_slider_pane_t3

0xda93,	// (0x0002ca36) form_field_slider_pane_t4

0x5b48,	// (0x00024aeb) slider_form_pane_ParamLimits

0x5b48,	// (0x00024aeb) slider_form_pane

0x35c9,	// (0x0002256c) control_abbreviations

0x35c9,	// (0x0002256c) control_conventions

0x35c9,	// (0x0002256c) control_definitions

0x35c9,	// (0x0002256c) format_table_attribute

0x6326,	// (0x000252c9) bg_popup_preview_window_pane_g9

0x35c9,	// (0x0002256c) format_table_data2

0x35c9,	// (0x0002256c) format_table_data3

0x35c9,	// (0x0002256c) format_table_data_example

0x0008,

0x35c9,	// (0x0002256c) intro_purpose

0xf8e9,	// (0x0002e88c) bg_popup_preview_window_pane_g

0x35c9,	// (0x0002256c) texts_category

0x35c9,	// (0x0002256c) texts_graphics

0x4b51,	// (0x00023af4) text_digital

0x4b60,	// (0x00023b03) text_primary

0x4b6f,	// (0x00023b12) text_primary_small

0x4b7e,	// (0x00023b21) text_secondary

0x4b8d,	// (0x00023b30) text_title

0x6a81,	// (0x00025a24) bg_passive_tab_pane_g1_cp3_srt

0x47e9,	// (0x0002378c) bg_passive_tab_pane_g2_cp3_srt

0x6a8a,	// (0x00025a2d) bg_passive_tab_pane_g3_cp3_srt

0x3924,	// (0x000228c7) bg_active_tab_pane_cp3_srt_ParamLimits

0x3924,	// (0x000228c7) bg_active_tab_pane_cp3_srt

0x6a93,	// (0x00025a36) tabs_4_active_pane_srt_g1

0xddc9,	// (0x0002cd6c) tabs_4_active_pane_srt_t1_ParamLimits

0xddc9,	// (0x0002cd6c) tabs_4_active_pane_srt_t1

0x6a81,	// (0x00025a24) bg_active_tab_pane_g1_cp3_copy1

0x47e9,	// (0x0002378c) bg_active_tab_pane_g2_cp3_copy1

0x6a8a,	// (0x00025a2d) bg_active_tab_pane_g3_cp3_copy1

0x36a9,	// (0x0002264c) tabs_2_long_active_pane_srt_ParamLimits

0x36a9,	// (0x0002264c) tabs_2_long_active_pane_srt

0x36a9,	// (0x0002264c) tabs_2_long_passive_pane_srt_ParamLimits

0x36a9,	// (0x0002264c) tabs_2_long_passive_pane_srt

0x4edc,	// (0x00023e7f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4edc,	// (0x00023e7f) bg_passive_tab_pane_cp4_srt

0x6751,	// (0x000256f4) bg_passive_tab_pane_g1_cp4_srt

0x47e9,	// (0x0002378c) bg_passive_tab_pane_g2_cp4_srt

0x675a,	// (0x000256fd) bg_passive_tab_pane_g3_cp4_srt

0x36a9,	// (0x0002264c) bg_active_tab_pane_cp4_srt_ParamLimits

0x36a9,	// (0x0002264c) bg_active_tab_pane_cp4_srt

0xdbf3,	// (0x0002cb96) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbf3,	// (0x0002cb96) tabs_2_long_active_pane_srt_t1

0x6751,	// (0x000256f4) bg_active_tab_pane_g1_cp4_srt

0x47e9,	// (0x0002378c) bg_active_tab_pane_g2_cp4_srt

0x675a,	// (0x000256fd) bg_active_tab_pane_g3_cp4_srt

0x3924,	// (0x000228c7) tabs_3_long_active_pane_srt_ParamLimits

0x3924,	// (0x000228c7) tabs_3_long_active_pane_srt

0x3924,	// (0x000228c7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3924,	// (0x000228c7) tabs_3_long_passive_pane_cp_srt

0x3924,	// (0x000228c7) tabs_3_long_passive_pane_srt_ParamLimits

0x3924,	// (0x000228c7) tabs_3_long_passive_pane_srt

0x4edc,	// (0x00023e7f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4edc,	// (0x00023e7f) bg_passive_tab_pane_cp5_srt

0x4873,	// (0x00023816) bg_passive_tab_pane_g1_cp5_srt

0x47e9,	// (0x0002378c) bg_passive_tab_pane_g2_cp5_srt

0x487c,	// (0x0002381f) bg_passive_tab_pane_g3_cp5_srt

0x36a9,	// (0x0002264c) bg_active_tab_pane_cp5_srt_ParamLimits

0x36a9,	// (0x0002264c) bg_active_tab_pane_cp5_srt

0xdbdd,	// (0x0002cb80) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdbdd,	// (0x0002cb80) tabs_3_long_active_pane_srt_t1

0x4873,	// (0x00023816) bg_active_tab_pane_g1_cp5_srt

0x47e9,	// (0x0002378c) bg_active_tab_pane_g2_cp5_srt

0x487c,	// (0x0002381f) bg_active_tab_pane_g3_cp5_srt

0x6731,	// (0x000256d4) navi_text_pane_srt_t1

0x6729,	// (0x000256cc) navi_icon_pane_srt_g1

0x4d54,	// (0x00023cf7) midp_editing_number_pane_srt

0x4b9c,	// (0x00023b3f) midp_ticker_pane_srt

0x4d5c,	// (0x00023cff) midp_ticker_pane_srt_g1

0x4d64,	// (0x00023d07) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0002e71b) midp_ticker_pane_srt_g

0x4d6c,	// (0x00023d0f) midp_ticker_pane_srt_t1

0x671a,	// (0x000256bd) midp_editing_number_pane_t1_copy1

0x4edc,	// (0x00023e7f) listscroll_midp_pane

0x4edc,	// (0x00023e7f) midp_form_pane

0x4c06,	// (0x00023ba9) midp_info_popup_window_ParamLimits

0x4c06,	// (0x00023ba9) midp_info_popup_window

0x3fc1,	// (0x00022f64) bg_popup_sub_pane_cp50_ParamLimits

0x3fc1,	// (0x00022f64) bg_popup_sub_pane_cp50

0x5844,	// (0x000247e7) listscroll_midp_info_pane_ParamLimits

0x5844,	// (0x000247e7) listscroll_midp_info_pane

0x582c,	// (0x000247cf) listscroll_form_midp_pane_ParamLimits

0x582c,	// (0x000247cf) listscroll_form_midp_pane

0x5838,	// (0x000247db) scroll_bar_cp050

0xda79,	// (0x0002ca1c) list_midp_pane

0x74dd,	// (0x00026480) signal_pane_g2_cp

0x5746,	// (0x000246e9) listscroll_midp_info_pane_t1_ParamLimits

0x5746,	// (0x000246e9) listscroll_midp_info_pane_t1

0x575e,	// (0x00024701) listscroll_midp_info_pane_t2_ParamLimits

0x575e,	// (0x00024701) listscroll_midp_info_pane_t2

0x579c,	// (0x0002473f) listscroll_midp_info_pane_t3_ParamLimits

0x579c,	// (0x0002473f) listscroll_midp_info_pane_t3

0x57d6,	// (0x00024779) listscroll_midp_info_pane_t4_ParamLimits

0x57d6,	// (0x00024779) listscroll_midp_info_pane_t4

0x0003,

0xf824,	// (0x0002e7c7) listscroll_midp_info_pane_t_ParamLimits

0xf824,	// (0x0002e7c7) listscroll_midp_info_pane_t

0x4085,	// (0x00023028) scroll_pane_cp21

0x56e4,	// (0x00024687) form_midp_field_choice_group_pane

0x56ed,	// (0x00024690) form_midp_field_text_pane

0x572c,	// (0x000246cf) form_midp_field_time_pane

0x5734,	// (0x000246d7) form_midp_gauge_slider_pane

0x573d,	// (0x000246e0) form_midp_gauge_wait_pane

0x35c9,	// (0x0002256c) form_midp_image_pane

0xbca8,	// (0x0002ac4b) list_single_midp_pane_ParamLimits

0xbca8,	// (0x0002ac4b) list_single_midp_pane

0xda57,	// (0x0002c9fa) form_midp_field_text_pane_t1

0x545a,	// (0x000243fd) input_focus_pane_cp050

0x56d3,	// (0x00024676) list_midp_form_text_pane

0x566b,	// (0x0002460e) form_midp_field_choice_group_pane_t1

0x5679,	// (0x0002461c) input_focus_pane_cp051

0x568d,	// (0x00024630) list_midp_choice_pane

0x35c9,	// (0x0002256c) status_idle_pane

0x564f,	// (0x000245f2) form_midp_field_time_pane_t1

0x35bf,	// (0x00022562) wait_anim_pane_g2_copy1

0x565d,	// (0x00024600) form_midp_field_time_pane_t2

0x0001,

0x4cb4,	// (0x00023c57) aid_navinavi_width_2_pane

0xf81f,	// (0x0002e7c2) form_midp_field_time_pane_t

0x35c9,	// (0x0002256c) input_focus_pane_cp052

0x35c9,	// (0x0002256c) bg_input_focus_pane_cp040

0x560f,	// (0x000245b2) form_midp_gauge_slider_pane_t1

0x561d,	// (0x000245c0) form_midp_gauge_slider_pane_t2

0xda3b,	// (0x0002c9de) form_midp_gauge_slider_pane_t3

0xda49,	// (0x0002c9ec) form_midp_gauge_slider_pane_t4

0x0003,

0xf816,	// (0x0002e7b9) form_midp_gauge_slider_pane_t

0x5647,	// (0x000245ea) form_midp_slider_pane

0x36a9,	// (0x0002264c) bg_input_focus_pane_cp041_ParamLimits

0x36a9,	// (0x0002264c) bg_input_focus_pane_cp041

0x55dc,	// (0x0002457f) form_midp_gauge_wait_pane_t1_ParamLimits

0x55dc,	// (0x0002457f) form_midp_gauge_wait_pane_t1

0x55ee,	// (0x00024591) form_midp_gauge_wait_pane_t2_ParamLimits

0x55ee,	// (0x00024591) form_midp_gauge_wait_pane_t2

0x0001,

0xf811,	// (0x0002e7b4) form_midp_gauge_wait_pane_t_ParamLimits

0xf811,	// (0x0002e7b4) form_midp_gauge_wait_pane_t

0x5600,	// (0x000245a3) form_midp_wait_pane_ParamLimits

0x5600,	// (0x000245a3) form_midp_wait_pane

0x55a6,	// (0x00024549) form_midp_image_pane_g1

0x55af,	// (0x00024552) form_midp_image_pane_t1

0x55be,	// (0x00024561) form_midp_image_pane_t2

0x55cd,	// (0x00024570) form_midp_image_pane_t3

0x0002,

0xf80a,	// (0x0002e7ad) form_midp_image_pane_t

0x559d,	// (0x00024540) list_single_midp_pane_g1

0x0c23,	// (0x0001fbc6) list_single_midp_pane_t1

0xda26,	// (0x0002c9c9) list_midp_form_item_pane_ParamLimits

0xda26,	// (0x0002c9c9) list_midp_form_item_pane

0x4c5c,	// (0x00023bff) list_midp_form_item_pane_t1

0x4c6b,	// (0x00023c0e) midp_ticker_pane_g1

0x4c77,	// (0x00023c1a) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0002e701) midp_ticker_pane_g

0x4c83,	// (0x00023c26) midp_ticker_pane_t1

0x69ad,	// (0x00025950) midp_editing_number_pane_t1

0x698b,	// (0x0002592e) midp_editing_number_pane

0x699a,	// (0x0002593d) midp_ticker_pane

0x670a,	// (0x000256ad) ai_message_heading_pane

0x35c9,	// (0x0002256c) bg_popup_window_pane_cp14

0x6712,	// (0x000256b5) listscroll_ai_message_pane

0x6694,	// (0x00025637) ai_message_heading_pane_g1_ParamLimits

0x6694,	// (0x00025637) ai_message_heading_pane_g1

0x66a0,	// (0x00025643) ai_message_heading_pane_g2_ParamLimits

0x66a0,	// (0x00025643) ai_message_heading_pane_g2

0x66ac,	// (0x0002564f) ai_message_heading_pane_g3_ParamLimits

0x66ac,	// (0x0002564f) ai_message_heading_pane_g3

0x66b8,	// (0x0002565b) ai_message_heading_pane_g4_ParamLimits

0x66b8,	// (0x0002565b) ai_message_heading_pane_g4

0x0003,

0xf94b,	// (0x0002e8ee) ai_message_heading_pane_g_ParamLimits

0xf94b,	// (0x0002e8ee) ai_message_heading_pane_g

0x66c4,	// (0x00025667) ai_message_heading_pane_t1_ParamLimits

0x66c4,	// (0x00025667) ai_message_heading_pane_t1

0x66de,	// (0x00025681) ai_message_heading_pane_t2_ParamLimits

0x66de,	// (0x00025681) ai_message_heading_pane_t2

0x0001,

0xf954,	// (0x0002e8f7) ai_message_heading_pane_t_ParamLimits

0xf954,	// (0x0002e8f7) ai_message_heading_pane_t

0x66f0,	// (0x00025693) bg_popup_heading_pane_cp1_ParamLimits

0x66f0,	// (0x00025693) bg_popup_heading_pane_cp1

0x6682,	// (0x00025625) list_ai_message_pane_ParamLimits

0x6682,	// (0x00025625) list_ai_message_pane

0x4085,	// (0x00023028) scroll_pane_cp10

0x661e,	// (0x000255c1) list_ai_message_pane_g1

0x6626,	// (0x000255c9) list_ai_message_pane_g2

0x0001,

0xf928,	// (0x0002e8cb) list_ai_message_pane_g

0x662e,	// (0x000255d1) list_ai_message_pane_t1_ParamLimits

0x662e,	// (0x000255d1) list_ai_message_pane_t1

0x6643,	// (0x000255e6) list_ai_message_pane_t2_ParamLimits

0x6643,	// (0x000255e6) list_ai_message_pane_t2

0x6658,	// (0x000255fb) list_ai_message_pane_t3_ParamLimits

0x6658,	// (0x000255fb) list_ai_message_pane_t3

0x666d,	// (0x00025610) list_ai_message_pane_t4_ParamLimits

0x666d,	// (0x00025610) list_ai_message_pane_t4

0x0003,

0xf92d,	// (0x0002e8d0) list_ai_message_pane_t_ParamLimits

0xf92d,	// (0x0002e8d0) list_ai_message_pane_t

0xdbbc,	// (0x0002cb5f) cell_ai_soft_ind_pane_ParamLimits

0xdbbc,	// (0x0002cb5f) cell_ai_soft_ind_pane

0x4c95,	// (0x00023c38) cell_ai_soft_ind_pane_g1_ParamLimits

0x4c95,	// (0x00023c38) cell_ai_soft_ind_pane_g1

0x35c9,	// (0x0002256c) grid_highlight_cp1

0x4ca2,	// (0x00023c45) text_secondary_cp56_ParamLimits

0x4ca2,	// (0x00023c45) text_secondary_cp56

0x65de,	// (0x00025581) example_general_pane_ParamLimits

0x65de,	// (0x00025581) example_general_pane

0x65ea,	// (0x0002558d) example_parent_pane_g1_ParamLimits

0x65ea,	// (0x0002558d) example_parent_pane_g1

0x65f6,	// (0x00025599) example_parent_pane_t1_ParamLimits

0x65f6,	// (0x00025599) example_parent_pane_t1

0xc6bc,	// (0x0002b65f) popup_preview_text_window_ParamLimits

0xc6bc,	// (0x0002b65f) popup_preview_text_window

0x4acd,	// (0x00023a70) list_single_pane_cp2_g4

0x39da,	// (0x0002297d) bg_popup_preview_window_pane_ParamLimits

0x39da,	// (0x0002297d) bg_popup_preview_window_pane

0x632e,	// (0x000252d1) popup_preview_text_window_t1_ParamLimits

0x632e,	// (0x000252d1) popup_preview_text_window_t1

0x634c,	// (0x000252ef) popup_preview_text_window_t2_ParamLimits

0x634c,	// (0x000252ef) popup_preview_text_window_t2

0x6395,	// (0x00025338) popup_preview_text_window_t3_ParamLimits

0x6395,	// (0x00025338) popup_preview_text_window_t3

0x63da,	// (0x0002537d) popup_preview_text_window_t4_ParamLimits

0x63da,	// (0x0002537d) popup_preview_text_window_t4

0x0004,

0xf8fc,	// (0x0002e89f) popup_preview_text_window_t_ParamLimits

0xf8fc,	// (0x0002e89f) popup_preview_text_window_t

0x6458,	// (0x000253fb) scroll_pane_cp11

0x53e6,	// (0x00024389) bg_popup_preview_window_pane_g1

0x62ee,	// (0x00025291) bg_popup_preview_window_pane_g2

0x62f6,	// (0x00025299) bg_popup_preview_window_pane_g3

0x62fe,	// (0x000252a1) bg_popup_preview_window_pane_g4

0x6306,	// (0x000252a9) bg_popup_preview_window_pane_g5

0x630e,	// (0x000252b1) bg_popup_preview_window_pane_g6

0x6316,	// (0x000252b9) bg_popup_preview_window_pane_g7

0x631e,	// (0x000252c1) bg_popup_preview_window_pane_g8

0x1406,	// (0x000203a9) aid_popup_width_pane

0xc638,	// (0x0002b5db) popup_midp_note_alarm_window_ParamLimits

0xc638,	// (0x0002b5db) popup_midp_note_alarm_window

0x3f09,	// (0x00022eac) data_form_pane_ParamLimits

0xbb0e,	// (0x0002aab1) form_field_data_pane_g1

0xbb18,	// (0x0002aabb) form_field_data_pane_t1_ParamLimits

0x3f15,	// (0x00022eb8) input_focus_pane_ParamLimits

0x08ac,	// (0x0001f84f) data_form_wide_pane_ParamLimits

0x08bd,	// (0x0001f860) form_field_data_wide_pane_g1

0x08c9,	// (0x0001f86c) form_field_data_wide_pane_t1_ParamLimits

0x3c86,	// (0x00022c29) input_focus_pane_cp6_ParamLimits

0xd304,	// (0x0002c2a7) input_popup_find_pane_g1_ParamLimits

0xd304,	// (0x0002c2a7) input_popup_find_pane_g1

0x1978,	// (0x0002091b) aid_navi_side_left_pane

0x198d,	// (0x00020930) aid_navi_side_right_pane

0x5d07,	// (0x00024caa) bg_popup_window_pane_cp30_ParamLimits

0x5d07,	// (0x00024caa) bg_popup_window_pane_cp30

0x5d81,	// (0x00024d24) popup_midp_note_alarm_window_g1_ParamLimits

0x5d81,	// (0x00024d24) popup_midp_note_alarm_window_g1

0x5db1,	// (0x00024d54) popup_midp_note_alarm_window_t1_ParamLimits

0x5db1,	// (0x00024d54) popup_midp_note_alarm_window_t1

0x5e52,	// (0x00024df5) popup_midp_note_alarm_window_t2_ParamLimits

0x5e52,	// (0x00024df5) popup_midp_note_alarm_window_t2

0x5f00,	// (0x00024ea3) popup_midp_note_alarm_window_t3_ParamLimits

0x5f00,	// (0x00024ea3) popup_midp_note_alarm_window_t3

0x5f32,	// (0x00024ed5) popup_midp_note_alarm_window_t4_ParamLimits

0x5f32,	// (0x00024ed5) popup_midp_note_alarm_window_t4

0x5f58,	// (0x00024efb) popup_midp_note_alarm_window_t5_ParamLimits

0x5f58,	// (0x00024efb) popup_midp_note_alarm_window_t5

0x000a,

0xf899,	// (0x0002e83c) popup_midp_note_alarm_window_t_ParamLimits

0xf899,	// (0x0002e83c) popup_midp_note_alarm_window_t

0x6004,	// (0x00024fa7) wait_bar_pane_cp1_ParamLimits

0x6004,	// (0x00024fa7) wait_bar_pane_cp1

0x35c9,	// (0x0002256c) wait_anim_pane_copy1

0x35c9,	// (0x0002256c) wait_border_pane_copy1

0x59ed,	// (0x00024990) wait_border_pane_g1_copy1

0x08e3,	// (0x0001f886) form_field_popup_pane_g1

0xbb32,	// (0x0002aad5) form_field_popup_pane_t1_ParamLimits

0x3f15,	// (0x00022eb8) input_focus_pane_cp7_ParamLimits

0x3f43,	// (0x00022ee6) list_form_pane_ParamLimits

0x0903,	// (0x0001f8a6) form_field_popup_wide_pane_g1

0x090b,	// (0x0001f8ae) form_field_popup_wide_pane_t1_ParamLimits

0x3f15,	// (0x00022eb8) input_focus_pane_cp8_ParamLimits

0x3f4f,	// (0x00022ef2) list_form_wide_pane_ParamLimits

0x6b0d,	// (0x00025ab0) aid_size_cell_graphic_pane

0xbbb1,	// (0x0002ab54) data_form_pane_t1_ParamLimits

0xbcd1,	// (0x0002ac74) data_form_wide_pane_t1_ParamLimits

0xd683,	// (0x0002c626) bg_status_flat_pane

0xcfc3,	// (0x0002bf66) title_pane_t1_ParamLimits

0x3671,	// (0x00022614) title_pane_t2_ParamLimits

0x3697,	// (0x0002263a) title_pane_t3_ParamLimits

0xf55d,	// (0x0002e500) title_pane_t_ParamLimits

0x4500,	// (0x000234a3) level_1_signal_ParamLimits

0x4512,	// (0x000234b5) level_2_signal_ParamLimits

0x4525,	// (0x000234c8) level_3_signal_ParamLimits

0x4538,	// (0x000234db) level_4_signal_ParamLimits

0x454b,	// (0x000234ee) level_5_signal_ParamLimits

0x455e,	// (0x00023501) level_6_signal_ParamLimits

0x4571,	// (0x00023514) level_7_signal_ParamLimits

0x4500,	// (0x000234a3) level_1_battery_ParamLimits

0x4512,	// (0x000234b5) level_2_battery_ParamLimits

0x4525,	// (0x000234c8) level_3_battery_ParamLimits

0x4538,	// (0x000234db) level_4_battery_ParamLimits

0x454b,	// (0x000234ee) level_5_battery_ParamLimits

0x455e,	// (0x00023501) level_6_battery_ParamLimits

0x4571,	// (0x00023514) level_7_battery_ParamLimits

0x5c0c,	// (0x00024baf) bg_status_flat_pane_g1

0x5c14,	// (0x00024bb7) bg_status_flat_pane_g2

0x5c1c,	// (0x00024bbf) bg_status_flat_pane_g3

0x5c24,	// (0x00024bc7) bg_status_flat_pane_g4

0x5c2c,	// (0x00024bcf) bg_status_flat_pane_g5

0x5c34,	// (0x00024bd7) bg_status_flat_pane_g6

0x5c3c,	// (0x00024bdf) bg_status_flat_pane_g7

0xd04f,	// (0x0002bff2) tabs_3_active_pane_t1_ParamLimits

0xd04f,	// (0x0002bff2) tabs_3_passive_pane_t1_ParamLimits

0xd061,	// (0x0002c004) tabs_4_active_pane_t1_ParamLimits

0xd061,	// (0x0002c004) tabs_4_1_passive_pane_t1_ParamLimits

0xd312,	// (0x0002c2b5) tabs_2_active_pane_t1_ParamLimits

0xd312,	// (0x0002c2b5) tabs_2_passive_pane_t1_ParamLimits

0x36a9,	// (0x0002264c) bg_active_tab_pane_cp4_ParamLimits

0xd324,	// (0x0002c2c7) tabs_2_long_active_pane_t1_ParamLimits

0x4edc,	// (0x00023e7f) bg_passive_tab_pane_cp4_ParamLimits

0x248d,	// (0x00021430) list_single_midp_graphic_pane_t1_ParamLimits

0x36a9,	// (0x0002264c) bg_active_tab_pane_cp5_ParamLimits

0xd337,	// (0x0002c2da) tabs_3_long_active_pane_t1_ParamLimits

0x4edc,	// (0x00023e7f) bg_passive_tab_pane_cp5_ParamLimits

0x248d,	// (0x00021430) list_single_midp_graphic_pane_t1

0xd683,	// (0x0002c626) bg_status_flat_pane_ParamLimits

0x5076,	// (0x00024019) indicator_pane_cp2_ParamLimits

0x5076,	// (0x00024019) indicator_pane_cp2

0xd801,	// (0x0002c7a4) navi_pane_srt_ParamLimits

0xd801,	// (0x0002c7a4) navi_pane_srt

0x51c5,	// (0x00024168) popup_clock_digital_analogue_window_cp1

0x3786,	// (0x00022729) indicator_pane_t1

0x4b9c,	// (0x00023b3f) copy_highlight_pane

0x4b9c,	// (0x00023b3f) cursor_graphics_pane

0x4b9c,	// (0x00023b3f) graphic_within_text_pane

0x4b9c,	// (0x00023b3f) link_highlight_pane

0x641b,	// (0x000253be) popup_preview_text_window_t5_ParamLimits

0x641b,	// (0x000253be) popup_preview_text_window_t5

0x4cbc,	// (0x00023c5f) cursor_digital_pane

0x4cbc,	// (0x00023c5f) cursor_primary_pane

0x4ccd,	// (0x00023c70) cursor_primary_small_pane

0x4cd5,	// (0x00023c78) cursor_secondary_pane

0x4cdd,	// (0x00023c80) cursor_title_pane

0x4cbc,	// (0x00023c5f) link_highlight_digital_pane

0x4cc4,	// (0x00023c67) link_highlight_primary_pane

0x4ccd,	// (0x00023c70) link_highlight_primary_small_pane

0x4cd5,	// (0x00023c78) link_highlight_secondary_pane

0x4cdd,	// (0x00023c80) link_highlight_title_pane

0x4cbc,	// (0x00023c5f) copy_highlight_digital_pane

0x4cbc,	// (0x00023c5f) copy_highlight_primary_pane

0x4ccd,	// (0x00023c70) copy_highlight_primary_small_pane

0x4cd5,	// (0x00023c78) copy_highlight_secondary_pane

0x4cdd,	// (0x00023c80) copy_highlight_title_pane

0x4cd5,	// (0x00023c78) graphic_text_digital_pane

0x5caa,	// (0x00024c4d) graphic_text_primary_pane

0x5cb3,	// (0x00024c56) graphic_text_primary_small_pane

0x4ccd,	// (0x00023c70) graphic_text_secondary_pane

0x4cbc,	// (0x00023c5f) graphic_text_title_pane

0xd566,	// (0x0002c509) cursor_primary_pane_g1

0x5c9c,	// (0x00024c3f) cursor_text_primary_t1

0xdab5,	// (0x0002ca58) cursor_primary_small_pane_g1

0x5c8e,	// (0x00024c31) cursor_text_primary_small_t1

0xdaab,	// (0x0002ca4e) cursor_primary_small_pane_g1_copy1

0x5c76,	// (0x00024c19) cursor_text_primary_small_t1_copy1

0x5c54,	// (0x00024bf7) cursor_text_title_t1

0xdaa1,	// (0x0002ca44) cursor_title_pane_g1

0xd566,	// (0x0002c509) cursor_digital_pane_g1

0x4cef,	// (0x00023c92) cursor_text_digital_t1

0x4d14,	// (0x00023cb7) link_highlight_primary_pane_g1

0x5bfd,	// (0x00024ba0) link_highlight_primary_pane_t1

0x4cfd,	// (0x00023ca0) link_highlight_primary_small_pane_g1

0x4d05,	// (0x00023ca8) link_highlight_primary_small_pane_t1

0x4d14,	// (0x00023cb7) link_highlight_secondary_pane_g1

0x4d1c,	// (0x00023cbf) link_highlight_secondary_pane_t1

0x5b71,	// (0x00024b14) link_highlight_title_pane_g1

0x5b79,	// (0x00024b1c) link_highlight_title_pane_t1

0x5b5a,	// (0x00024afd) link_highlight_digital_pane_g1

0x5b62,	// (0x00024b05) link_highlight_digital_pane_t1

0x5a32,	// (0x000249d5) copy_highlight_primary_pane_g1

0x5a3a,	// (0x000249dd) copy_highlight_primary_pane_t1

0x5a0c,	// (0x000249af) copy_highlight_primary_small_pane_g1

0x5a23,	// (0x000249c6) copy_highlight_primary_small_pane_t1

0x4d2b,	// (0x00023cce) copy_highlight_secondary_pane_g1

0x4d33,	// (0x00023cd6) copy_highlight_secondary_pane_t1

0x5a0c,	// (0x000249af) copy_highlight_title_pane_g1

0x5a14,	// (0x000249b7) copy_highlight_title_pane_t1

0x5a32,	// (0x000249d5) copy_highlight_digital_pane_g1

0x6cd7,	// (0x00025c7a) copy_highlight_digital_pane_t1

0x6c2b,	// (0x00025bce) graphic_text_primary_pane_g1

0x6cbb,	// (0x00025c5e) graphic_text_primary_pane_t1

0x6cc9,	// (0x00025c6c) graphic_text_primary_pane_t2

0x0001,

0xf9c8,	// (0x0002e96b) graphic_text_primary_pane_t

0x6c97,	// (0x00025c3a) graphic_text_primary_small_pane_g1

0x6c9f,	// (0x00025c42) graphic_text_primary_small_pane_t1

0x6cad,	// (0x00025c50) graphic_text_primary_small_pane_t2

0x0001,

0xf9c3,	// (0x0002e966) graphic_text_primary_small_pane_t

0x6c73,	// (0x00025c16) graphic_text_secondary_pane_g1

0x6c7b,	// (0x00025c1e) graphic_text_secondary_pane_t1

0x6c89,	// (0x00025c2c) graphic_text_secondary_pane_t2

0x0001,

0xf9be,	// (0x0002e961) graphic_text_secondary_pane_t

0x6c4f,	// (0x00025bf2) graphic_text_title_pane_g1

0x6c57,	// (0x00025bfa) graphic_text_title_pane_t1

0x6c65,	// (0x00025c08) graphic_text_title_pane_t2

0x0001,

0xf9b9,	// (0x0002e95c) graphic_text_title_pane_t

0x6c2b,	// (0x00025bce) graphic_text_digital_pane_g1

0x6c33,	// (0x00025bd6) graphic_text_digital_pane_t1

0x6c41,	// (0x00025be4) graphic_text_digital_pane_t2

0x0001,

0xf9b4,	// (0x0002e957) graphic_text_digital_pane_t

0x36a9,	// (0x0002264c) navi_icon_pane_srt_ParamLimits

0x36a9,	// (0x0002264c) navi_icon_pane_srt

0x35c9,	// (0x0002256c) navi_midp_pane_srt

0x35c9,	// (0x0002256c) navi_navi_pane_srt

0x36a9,	// (0x0002264c) navi_text_pane_srt_ParamLimits

0x36a9,	// (0x0002264c) navi_text_pane_srt

0x6bf6,	// (0x00025b99) navi_navi_icon_text_pane_srt

0x6bfe,	// (0x00025ba1) navi_navi_pane_srt_g1_ParamLimits

0x6bfe,	// (0x00025ba1) navi_navi_pane_srt_g1

0x6c10,	// (0x00025bb3) navi_navi_pane_srt_g2_ParamLimits

0x6c10,	// (0x00025bb3) navi_navi_pane_srt_g2

0x0001,

0xf9af,	// (0x0002e952) navi_navi_pane_srt_g_ParamLimits

0xf9af,	// (0x0002e952) navi_navi_pane_srt_g

0x6c22,	// (0x00025bc5) navi_navi_tabs_pane_srt

0x6bf6,	// (0x00025b99) navi_navi_text_pane_srt

0x6bf6,	// (0x00025b99) navi_navi_volume_pane_srt

0x6be7,	// (0x00025b8a) navi_navi_text_pane_srt_t1

0x27c5,	// (0x00021768) navi_navi_volume_pane_srt_g1

0x27cd,	// (0x00021770) volume_small_pane_srt_ParamLimits

0x27cd,	// (0x00021770) volume_small_pane_srt

0x1c58,	// (0x00020bfb) volume_small_pane_srt_g1_ParamLimits

0x1c58,	// (0x00020bfb) volume_small_pane_srt_g1

0x1c68,	// (0x00020c0b) volume_small_pane_srt_g2_ParamLimits

0x1c68,	// (0x00020c0b) volume_small_pane_srt_g2

0x1c79,	// (0x00020c1c) volume_small_pane_srt_g3_ParamLimits

0x1c79,	// (0x00020c1c) volume_small_pane_srt_g3

0x1c8a,	// (0x00020c2d) volume_small_pane_srt_g4_ParamLimits

0x1c8a,	// (0x00020c2d) volume_small_pane_srt_g4

0x1c9b,	// (0x00020c3e) volume_small_pane_srt_g5_ParamLimits

0x1c9b,	// (0x00020c3e) volume_small_pane_srt_g5

0x1cac,	// (0x00020c4f) volume_small_pane_srt_g6_ParamLimits

0x1cac,	// (0x00020c4f) volume_small_pane_srt_g6

0x1cbd,	// (0x00020c60) volume_small_pane_srt_g7_ParamLimits

0x1cbd,	// (0x00020c60) volume_small_pane_srt_g7

0x1cce,	// (0x00020c71) volume_small_pane_srt_g8_ParamLimits

0x1cce,	// (0x00020c71) volume_small_pane_srt_g8

0x1cdf,	// (0x00020c82) volume_small_pane_srt_g9_ParamLimits

0x1cdf,	// (0x00020c82) volume_small_pane_srt_g9

0x1cf0,	// (0x00020c93) volume_small_pane_srt_g10_ParamLimits

0x1cf0,	// (0x00020c93) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0002e706) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0002e706) volume_small_pane_srt_g

0x3a83,	// (0x00022a26) query_popup_data_pane_cp2

0x6bcd,	// (0x00025b70) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6bcd,	// (0x00025b70) navi_navi_icon_text_pane_srt_t1

0x5caa,	// (0x00024c4d) navi_tabs_2_long_pane_srt

0x5caa,	// (0x00024c4d) navi_tabs_2_pane_srt

0x5caa,	// (0x00024c4d) navi_tabs_3_long_pane_srt

0x5caa,	// (0x00024c4d) navi_tabs_3_pane_srt

0x5caa,	// (0x00024c4d) navi_tabs_4_pane_srt

0x27a5,	// (0x00021748) tabs_2_active_pane_srt_ParamLimits

0x27a5,	// (0x00021748) tabs_2_active_pane_srt

0x27b5,	// (0x00021758) tabs_2_passive_pane_srt_ParamLimits

0x27b5,	// (0x00021758) tabs_2_passive_pane_srt

0x545a,	// (0x000243fd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x545a,	// (0x000243fd) bg_passive_tab_pane_cp1_srt

0x6b99,	// (0x00025b3c) bg_passive_tab_pane_g1_cp1_srt

0x47e9,	// (0x0002378c) bg_passive_tab_pane_g2_cp1_srt

0x6ba2,	// (0x00025b45) bg_passive_tab_pane_g3_cp1_srt

0x3924,	// (0x000228c7) bg_active_tab_pane_cp1_srt_ParamLimits

0x3924,	// (0x000228c7) bg_active_tab_pane_cp1_srt

0x6bab,	// (0x00025b4e) tabs_2_active_pane_srt_g1

0xde46,	// (0x0002cde9) tabs_2_active_pane_srt_t1_ParamLimits

0xde46,	// (0x0002cde9) tabs_2_active_pane_srt_t1

0x6b99,	// (0x00025b3c) bg_active_tab_pane_g1_cp1_srt

0x47e9,	// (0x0002378c) bg_active_tab_pane_g2_cp1_srt

0x6ba2,	// (0x00025b45) bg_active_tab_pane_g3_cp1_srt

0x2772,	// (0x00021715) tabs_3_active_pane_srt_ParamLimits

0x2772,	// (0x00021715) tabs_3_active_pane_srt

0x2783,	// (0x00021726) tabs_3_passive_pane_cp_srt_ParamLimits

0x2783,	// (0x00021726) tabs_3_passive_pane_cp_srt

0x2794,	// (0x00021737) tabs_3_passive_pane_srt_ParamLimits

0x2794,	// (0x00021737) tabs_3_passive_pane_srt

0x545a,	// (0x000243fd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x545a,	// (0x000243fd) bg_passive_tab_pane_cp2_srt

0x4d42,	// (0x00023ce5) bg_passive_tab_pane_g1_cp2_srt

0x47e9,	// (0x0002378c) bg_passive_tab_pane_g2_cp2_srt

0x4d4b,	// (0x00023cee) bg_passive_tab_pane_g3_cp2_srt

0x3924,	// (0x000228c7) bg_active_tab_pane_cp2_srt_ParamLimits

0x3924,	// (0x000228c7) bg_active_tab_pane_cp2_srt

0x6b7f,	// (0x00025b22) tabs_3_active_pane_srt_g1

0xde30,	// (0x0002cdd3) tabs_3_active_pane_srt_t1_ParamLimits

0xde30,	// (0x0002cdd3) tabs_3_active_pane_srt_t1

0x4d42,	// (0x00023ce5) bg_active_tab_pane_g1_cp2_srt

0x47e9,	// (0x0002378c) bg_active_tab_pane_g2_cp2_srt

0x4d4b,	// (0x00023cee) bg_active_tab_pane_g3_cp2_srt

0x272a,	// (0x000216cd) tabs_4_active_pane_srt_ParamLimits

0x272a,	// (0x000216cd) tabs_4_active_pane_srt

0x273c,	// (0x000216df) tabs_4_passive_pane_cp2_srt_ParamLimits

0x273c,	// (0x000216df) tabs_4_passive_pane_cp2_srt

0x1e55,	// (0x00020df8) aid_size_cell_toolbar

0x6804,	// (0x000257a7) main_idle_act_pane_ParamLimits

0x1ff4,	// (0x00020f97) popup_large_graphic_colour_window_ParamLimits

0xc948,	// (0x0002b8eb) popup_toolbar_window_ParamLimits

0xc948,	// (0x0002b8eb) popup_toolbar_window

0x69bc,	// (0x0002595f) list_single_graphic_2heading_pane_ParamLimits

0x69bc,	// (0x0002595f) list_single_graphic_2heading_pane

0x42b5,	// (0x00023258) aid_size_cell_apps_grid_lsc_pane

0x42c7,	// (0x0002326a) aid_size_cell_apps_grid_prt_pane

0x4edc,	// (0x00023e7f) bg_wml_button_pane_cp1_ParamLimits

0x4edc,	// (0x00023e7f) bg_wml_button_pane_cp1

0xda57,	// (0x0002c9fa) form_midp_field_text_pane_t1_ParamLimits

0x545a,	// (0x000243fd) input_focus_pane_cp050_ParamLimits

0x56d3,	// (0x00024676) list_midp_form_text_pane_ParamLimits

0x5679,	// (0x0002461c) input_focus_pane_cp051_ParamLimits

0x568d,	// (0x00024630) list_midp_choice_pane_ParamLimits

0xd9f4,	// (0x0002c997) list_single_2graphic_pane_cp3_ParamLimits

0xd9f4,	// (0x0002c997) list_single_2graphic_pane_cp3

0xda07,	// (0x0002c9aa) list_single_midp_graphic_pane_ParamLimits

0xda07,	// (0x0002c9aa) list_single_midp_graphic_pane

0x0af7,	// (0x0001fa9a) list_single_graphic_2heading_pane_g1_ParamLimits

0x0af7,	// (0x0001fa9a) list_single_graphic_2heading_pane_g1

0x0b03,	// (0x0001faa6) list_single_graphic_2heading_pane_g4_ParamLimits

0x0b03,	// (0x0001faa6) list_single_graphic_2heading_pane_g4

0x0b0f,	// (0x0001fab2) list_single_graphic_2heading_pane_g5_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0002e759) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0002e759) list_single_graphic_2heading_pane_g

0x0b1b,	// (0x0001fabe) list_single_graphic_2heading_pane_t1_ParamLimits

0x0b1b,	// (0x0001fabe) list_single_graphic_2heading_pane_t1

0x0b2f,	// (0x0001fad2) list_single_graphic_2heading_pane_t2_ParamLimits

0x0b2f,	// (0x0001fad2) list_single_graphic_2heading_pane_t2

0x0b4b,	// (0x0001faee) list_single_graphic_2heading_pane_t3_ParamLimits

0x0b4b,	// (0x0001faee) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0002e760) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0002e760) list_single_graphic_2heading_pane_t

0x5324,	// (0x000242c7) bg_popup_sub_pane_cp2

0x534e,	// (0x000242f1) grid_toobar_pane

0x2408,	// (0x000213ab) cell_toolbar_pane_ParamLimits

0x2408,	// (0x000213ab) cell_toolbar_pane

0x538a,	// (0x0002432d) cell_toolbar_pane_g1_ParamLimits

0x538a,	// (0x0002432d) cell_toolbar_pane_g1

0x539e,	// (0x00024341) cell_toolbar_pane_g2_ParamLimits

0x539e,	// (0x00024341) cell_toolbar_pane_g2

0x0001,

0xf7c4,	// (0x0002e767) cell_toolbar_pane_g_ParamLimits

0xf7c4,	// (0x0002e767) cell_toolbar_pane_g

0x53c0,	// (0x00024363) grid_highlight_pane_cp2_ParamLimits

0x53c0,	// (0x00024363) grid_highlight_pane_cp2

0x53da,	// (0x0002437d) toolbar_button_pane

0x53e6,	// (0x00024389) toolbar_button_pane_g1

0x53ee,	// (0x00024391) toolbar_button_pane_g2

0x53f6,	// (0x00024399) toolbar_button_pane_g3

0x53fe,	// (0x000243a1) toolbar_button_pane_g4

0x5406,	// (0x000243a9) toolbar_button_pane_g5

0x540e,	// (0x000243b1) toolbar_button_pane_g6

0x5416,	// (0x000243b9) toolbar_button_pane_g7

0x541e,	// (0x000243c1) toolbar_button_pane_g8

0x5426,	// (0x000243c9) toolbar_button_pane_g9

0x0009,

0xf7c9,	// (0x0002e76c) toolbar_button_pane_g

0x2440,	// (0x000213e3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2440,	// (0x000213e3) list_single_2graphic_pane_g1_cp3

0xc9a0,	// (0x0002b943) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc9a0,	// (0x0002b943) list_single_2graphic_pane_g2_cp3

0x245d,	// (0x00021400) list_single_2graphic_pane_g3_cp3

0x2465,	// (0x00021408) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2465,	// (0x00021408) list_single_2graphic_pane_g4_cp3

0x2471,	// (0x00021414) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2471,	// (0x00021414) list_single_2graphic_pane_t1_cp3

0x54a6,	// (0x00024449) list_single_midp_graphic_pane_g2_ParamLimits

0x54a6,	// (0x00024449) list_single_midp_graphic_pane_g2

0x1e5d,	// (0x00020e00) aid_zoom_text_primary

0x0acb,	// (0x0001fa6e) aid_zoom_text_secondary

0x4dff,	// (0x00023da2) status_small_pane_g7_ParamLimits

0x4dff,	// (0x00023da2) status_small_pane_g7

0x4e22,	// (0x00023dc5) status_small_pane_t1_ParamLimits

0xcf9f,	// (0x0002bf42) title_pane_g2

0x0003,

0xf554,	// (0x0002e4f7) title_pane_g

0xd217,	// (0x0002c1ba) aid_size_cell_colour_1_pane_ParamLimits

0xd217,	// (0x0002c1ba) aid_size_cell_colour_1_pane

0xd22b,	// (0x0002c1ce) aid_size_cell_colour_2_pane_ParamLimits

0xd22b,	// (0x0002c1ce) aid_size_cell_colour_2_pane

0xd23f,	// (0x0002c1e2) aid_size_cell_colour_3_pane_ParamLimits

0xd23f,	// (0x0002c1e2) aid_size_cell_colour_3_pane

0xd253,	// (0x0002c1f6) aid_size_cell_colour_4_pane_ParamLimits

0xd253,	// (0x0002c1f6) aid_size_cell_colour_4_pane

0x18b5,	// (0x00020858) title_pane_stacon_g1_ParamLimits

0x18b5,	// (0x00020858) title_pane_stacon_g1

0x5a91,	// (0x00024a34) popup_note_wait_window_g3_ParamLimits

0x5a91,	// (0x00024a34) popup_note_wait_window_g3

0x5b07,	// (0x00024aaa) popup_note_wait_window_t5_ParamLimits

0x5b07,	// (0x00024aaa) popup_note_wait_window_t5

0x35c9,	// (0x0002256c) main_feb_china_hwr_fs_writing_pane

0xc356,	// (0x0002b2f9) popup_feb_china_hwr_fs_window_ParamLimits

0xc356,	// (0x0002b2f9) popup_feb_china_hwr_fs_window

0xc9b1,	// (0x0002b954) aid_size_cell_hwr_fs_ParamLimits

0xc9b1,	// (0x0002b954) aid_size_cell_hwr_fs

0x545a,	// (0x000243fd) bg_popup_sub_pane_cp3_ParamLimits

0x545a,	// (0x000243fd) bg_popup_sub_pane_cp3

0xc9c6,	// (0x0002b969) grid_hwr_fs_pane_ParamLimits

0xc9c6,	// (0x0002b969) grid_hwr_fs_pane

0x24d0,	// (0x00021473) linegrid_hwr_fs_pane_ParamLimits

0x24d0,	// (0x00021473) linegrid_hwr_fs_pane

0xc9de,	// (0x0002b981) cell_hwr_fs_pane_ParamLimits

0xc9de,	// (0x0002b981) cell_hwr_fs_pane

0x5466,	// (0x00024409) linegrid_hwr_fs_pane_g1_ParamLimits

0x5466,	// (0x00024409) linegrid_hwr_fs_pane_g1

0xd9c8,	// (0x0002c96b) linegrid_hwr_fs_pane_g2_ParamLimits

0xd9c8,	// (0x0002c96b) linegrid_hwr_fs_pane_g2

0x5484,	// (0x00024427) linegrid_hwr_fs_pane_g3_ParamLimits

0x5484,	// (0x00024427) linegrid_hwr_fs_pane_g3

0x2502,	// (0x000214a5) linegrid_hwr_fs_pane_g4_ParamLimits

0x2502,	// (0x000214a5) linegrid_hwr_fs_pane_g4

0x251c,	// (0x000214bf) linegrid_hwr_fs_pane_g5_ParamLimits

0x251c,	// (0x000214bf) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ef,	// (0x0002e792) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x0002e792) linegrid_hwr_fs_pane_g

0x5490,	// (0x00024433) cell_hwr_fs_pane_g1_ParamLimits

0x5490,	// (0x00024433) cell_hwr_fs_pane_g1

0x525b,	// (0x000241fe) cell_hwr_fs_pane_g2_ParamLimits

0x525b,	// (0x000241fe) cell_hwr_fs_pane_g2

0xd9da,	// (0x0002c97d) cell_hwr_fs_pane_g3_ParamLimits

0xd9da,	// (0x0002c97d) cell_hwr_fs_pane_g3

0xd9e7,	// (0x0002c98a) cell_hwr_fs_pane_g4_ParamLimits

0xd9e7,	// (0x0002c98a) cell_hwr_fs_pane_g4

0x0003,

0xf7fa,	// (0x0002e79d) cell_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0002e79d) cell_hwr_fs_pane_g

0xca04,	// (0x0002b9a7) cell_hwr_fs_pane_t1

0x35c9,	// (0x0002256c) grid_highlight_pane_cp6

0x35c9,	// (0x0002256c) main_idle_act2_pane

0x406c,	// (0x0002300f) aid_inside_area_popup_secondary

0xdabf,	// (0x0002ca62) aid_inside_area_window_primary_ParamLimits

0xdabf,	// (0x0002ca62) aid_inside_area_window_primary

0x6ce6,	// (0x00025c89) ai2_news_ticker_pane

0x6cee,	// (0x00025c91) aid_size_cell_ai1_link_ParamLimits

0x6cee,	// (0x00025c91) aid_size_cell_ai1_link

0xde5c,	// (0x0002cdff) popup_ai2_data_window_ParamLimits

0xde5c,	// (0x0002cdff) popup_ai2_data_window

0x6d1e,	// (0x00025cc1) popup_ai2_link_window_ParamLimits

0x6d1e,	// (0x00025cc1) popup_ai2_link_window

0x545a,	// (0x000243fd) bg_popup_sub_pane_cp4_ParamLimits

0x545a,	// (0x000243fd) bg_popup_sub_pane_cp4

0x6d32,	// (0x00025cd5) grid_ai2_link_pane_ParamLimits

0x6d32,	// (0x00025cd5) grid_ai2_link_pane

0x6d49,	// (0x00025cec) popup_ai2_link_window_g1_ParamLimits

0x6d49,	// (0x00025cec) popup_ai2_link_window_g1

0x6d55,	// (0x00025cf8) popup_ai2_link_window_g2_ParamLimits

0x6d55,	// (0x00025cf8) popup_ai2_link_window_g2

0x0001,

0xf9cd,	// (0x0002e970) popup_ai2_link_window_g_ParamLimits

0xf9cd,	// (0x0002e970) popup_ai2_link_window_g

0x6d64,	// (0x00025d07) ai2_mp_button_pane

0x6d6c,	// (0x00025d0f) ai2_mp_volume_pane

0x5679,	// (0x0002461c) bg_popup_sub_pane_cp5_ParamLimits

0x5679,	// (0x0002461c) bg_popup_sub_pane_cp5

0x6d74,	// (0x00025d17) heading_ai2_gene_pane_ParamLimits

0x6d74,	// (0x00025d17) heading_ai2_gene_pane

0x6d80,	// (0x00025d23) list_ai2_gene_pane_ParamLimits

0x6d80,	// (0x00025d23) list_ai2_gene_pane

0x6dc8,	// (0x00025d6b) cell_ai2_link_pane_ParamLimits

0x6dc8,	// (0x00025d6b) cell_ai2_link_pane

0x6dde,	// (0x00025d81) cell_ai2_link_pane_g1

0x35c9,	// (0x0002256c) grid_highlight_pane_cp7

0x27e2,	// (0x00021785) ai2_mp_volume_pane_g1

0x6eae,	// (0x00025e51) ai2_mp_volume_pane_g2

0xde86,	// (0x0002ce29) list_ai2_gene_pane_t1

0x6eb6,	// (0x00025e59) ai2_mp_volume_pane_g3

0x0002,

0xf9e6,	// (0x0002e989) ai2_mp_volume_pane_g

0x27ea,	// (0x0002178d) volume_small_pane_cp3

0x6ebe,	// (0x00025e61) aid_size_cell_ai2_button

0x6ec6,	// (0x00025e69) grid_ai2_button_pane

0x6ecf,	// (0x00025e72) cell_ai2_button_pane_ParamLimits

0x6ecf,	// (0x00025e72) cell_ai2_button_pane

0x35bf,	// (0x00022562) cell_ai2_button_pane_g1

0x35c9,	// (0x0002256c) grid_highlight_pane_cp8

0x6e6e,	// (0x00025e11) ai2_gene_pane_t1_ParamLimits

0x6e6e,	// (0x00025e11) ai2_gene_pane_t1

0xc2d0,	// (0x0002b273) aid_height_parent_landscape

0xdc0a,	// (0x0002cbad) aid_height_set_list

0x6804,	// (0x000257a7) aid_size_parent

0x6b0d,	// (0x00025ab0) aid_size_cell_graphic_pane_ParamLimits

0x6d90,	// (0x00025d33) popup_ai2_data_window_g1_ParamLimits

0x6d90,	// (0x00025d33) popup_ai2_data_window_g1

0x6d9c,	// (0x00025d3f) ai2_news_ticker_pane_g1

0x6da4,	// (0x00025d47) ai2_news_ticker_pane_g2

0x0001,

0xf9d2,	// (0x0002e975) ai2_news_ticker_pane_g

0x6dac,	// (0x00025d4f) ai2_news_ticker_pane_t1

0x6dba,	// (0x00025d5d) ai2_news_ticker_pane_t2

0x0001,

0xf9d7,	// (0x0002e97a) ai2_news_ticker_pane_t

0x6de7,	// (0x00025d8a) heading_ai2_gene_pane_g1

0x6def,	// (0x00025d92) heading_ai2_gene_pane_t1_ParamLimits

0x6def,	// (0x00025d92) heading_ai2_gene_pane_t1

0x6e04,	// (0x00025da7) list_highlight_pane_cp6

0xde70,	// (0x0002ce13) ai2_gene_pane_ParamLimits

0xde70,	// (0x0002ce13) ai2_gene_pane

0xde94,	// (0x0002ce37) list_ai2_gene_pane_t2

0x0001,

0xf9dc,	// (0x0002e97f) list_ai2_gene_pane_t

0x6e3f,	// (0x00025de2) list_highlight_pane_cp8_ParamLimits

0x6e3f,	// (0x00025de2) list_highlight_pane_cp8

0x6e50,	// (0x00025df3) ai2_gene_pane_g1_ParamLimits

0x6e50,	// (0x00025df3) ai2_gene_pane_g1

0x6e62,	// (0x00025e05) ai2_gene_pane_g2_ParamLimits

0x6e62,	// (0x00025e05) ai2_gene_pane_g2

0x0001,

0xf9e1,	// (0x0002e984) ai2_gene_pane_g_ParamLimits

0xf9e1,	// (0x0002e984) ai2_gene_pane_g

0x3eab,	// (0x00022e4e) scroll_pane_cp12

0xc28f,	// (0x0002b232) control_pane_t3_ParamLimits

0xc28f,	// (0x0002b232) control_pane_t3

0x4e13,	// (0x00023db6) status_small_pane_g8_ParamLimits

0x4e13,	// (0x00023db6) status_small_pane_g8

0xc3eb,	// (0x0002b38e) popup_find_window_ParamLimits

0xc672,	// (0x0002b615) popup_note_image_window_ParamLimits

0x0af7,	// (0x0001fa9a) list_double2_graphic_pane_vc_g1_ParamLimits

0x0af7,	// (0x0001fa9a) list_double2_graphic_pane_vc_g1

0x0b03,	// (0x0001faa6) list_double2_graphic_pane_vc_g2_ParamLimits

0x0b03,	// (0x0001faa6) list_double2_graphic_pane_vc_g2

0x0b0f,	// (0x0001fab2) list_double2_graphic_pane_vc_g3_ParamLimits

0x0b0f,	// (0x0001fab2) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b6,	// (0x0002e759) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002e759) list_double2_graphic_pane_vc_g

0x0b63,	// (0x0001fb06) list_double2_graphic_pane_vc_t1_ParamLimits

0x0b63,	// (0x0001fb06) list_double2_graphic_pane_vc_t1

0x0b03,	// (0x0001faa6) list_single_heading_pane_vc_g1_ParamLimits

0x0b03,	// (0x0001faa6) list_single_heading_pane_vc_g1

0x0b0f,	// (0x0001fab2) list_single_heading_pane_vc_g2_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002e571) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002e571) list_single_heading_pane_vc_g

0x0b79,	// (0x0001fb1c) list_single_heading_pane_vc_t1_ParamLimits

0x0b79,	// (0x0001fb1c) list_single_heading_pane_vc_t1

0x0b91,	// (0x0001fb34) list_single_heading_pane_vc_t2_ParamLimits

0x0b91,	// (0x0001fb34) list_single_heading_pane_vc_t2

0x0001,

0xf7de,	// (0x0002e781) list_single_heading_pane_vc_t_ParamLimits

0xf7de,	// (0x0002e781) list_single_heading_pane_vc_t

0x0bad,	// (0x0001fb50) list_setting_number_pane_vc_g1_ParamLimits

0x0bad,	// (0x0001fb50) list_setting_number_pane_vc_g1

0x0bb9,	// (0x0001fb5c) list_setting_number_pane_vc_g2_ParamLimits

0x0bb9,	// (0x0001fb5c) list_setting_number_pane_vc_g2

0x0001,

0xf7e3,	// (0x0002e786) list_setting_number_pane_vc_g_ParamLimits

0xf7e3,	// (0x0002e786) list_setting_number_pane_vc_g

0x0bc5,	// (0x0001fb68) list_setting_number_pane_vc_t1_ParamLimits

0x0bc5,	// (0x0001fb68) list_setting_number_pane_vc_t1

0x0bd9,	// (0x0001fb7c) list_setting_number_pane_vc_t2_ParamLimits

0x0bd9,	// (0x0001fb7c) list_setting_number_pane_vc_t2

0x0bf5,	// (0x0001fb98) list_setting_number_pane_vc_t3_ParamLimits

0x0bf5,	// (0x0001fb98) list_setting_number_pane_vc_t3

0x0002,

0xf7e8,	// (0x0002e78b) list_setting_number_pane_vc_t_ParamLimits

0xf7e8,	// (0x0002e78b) list_setting_number_pane_vc_t

0x0c13,	// (0x0001fbb6) set_value_pane_vc_ParamLimits

0x0c13,	// (0x0001fbb6) set_value_pane_vc

0x69bc,	// (0x0002595f) list_double2_graphic_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_double2_graphic_pane_vc

0x69bc,	// (0x0002595f) list_double2_large_graphic_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_double2_large_graphic_pane_vc

0x69bc,	// (0x0002595f) list_double2_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_double2_pane_vc

0x69bc,	// (0x0002595f) list_double_graphic_heading_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_double_graphic_heading_pane_vc

0x69bc,	// (0x0002595f) list_double_graphic_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_double_graphic_pane_vc

0x69bc,	// (0x0002595f) list_double_heading_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_double_heading_pane_vc

0x69bc,	// (0x0002595f) list_double_large_graphic_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_double_large_graphic_pane_vc

0x69bc,	// (0x0002595f) list_double_number_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_double_number_pane_vc

0x69bc,	// (0x0002595f) list_double_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_double_pane_vc

0x69bc,	// (0x0002595f) list_double_time_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_double_time_pane_vc

0x69bc,	// (0x0002595f) list_setting_number_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_setting_number_pane_vc

0x69bc,	// (0x0002595f) list_setting_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_setting_pane_vc

0x69bc,	// (0x0002595f) list_single_graphic_heading_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_single_graphic_heading_pane_vc

0x69bc,	// (0x0002595f) list_single_heading_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_single_heading_pane_vc

0x69bc,	// (0x0002595f) list_single_number_heading_pane_vc_ParamLimits

0x69bc,	// (0x0002595f) list_single_number_heading_pane_vc

0x0af7,	// (0x0001fa9a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0af7,	// (0x0001fa9a) list_double_graphic_heading_pane_vc_g1

0x0b03,	// (0x0001faa6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0b03,	// (0x0001faa6) list_double_graphic_heading_pane_vc_g2

0x0b0f,	// (0x0001fab2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0b0f,	// (0x0001fab2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b6,	// (0x0002e759) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002e759) list_double_graphic_heading_pane_vc_g

0x0d6d,	// (0x0001fd10) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0d6d,	// (0x0001fd10) list_double_graphic_heading_pane_vc_t1

0x0d89,	// (0x0001fd2c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0d89,	// (0x0001fd2c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ed,	// (0x0002e990) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ed,	// (0x0002e990) list_double_graphic_heading_pane_vc_t

0x0bad,	// (0x0001fb50) list_setting_pane_vc_g1_ParamLimits

0x0bad,	// (0x0001fb50) list_setting_pane_vc_g1

0x0bb9,	// (0x0001fb5c) list_setting_pane_vc_g2_ParamLimits

0x0bb9,	// (0x0001fb5c) list_setting_pane_vc_g2

0x0001,

0xf7e3,	// (0x0002e786) list_setting_pane_vc_g_ParamLimits

0xf7e3,	// (0x0002e786) list_setting_pane_vc_g

0x0da7,	// (0x0001fd4a) list_setting_pane_vc_t1_ParamLimits

0x0da7,	// (0x0001fd4a) list_setting_pane_vc_t1

0x0dc3,	// (0x0001fd66) list_setting_pane_vc_t2_ParamLimits

0x0dc3,	// (0x0001fd66) list_setting_pane_vc_t2

0x0001,

0xfa1b,	// (0x0002e9be) list_setting_pane_vc_t_ParamLimits

0xfa1b,	// (0x0002e9be) list_setting_pane_vc_t

0x0c13,	// (0x0001fbb6) set_value_pane_cp_vc_ParamLimits

0x0c13,	// (0x0001fbb6) set_value_pane_cp_vc

0x0b03,	// (0x0001faa6) list_single_number_heading_pane_vc_g1_ParamLimits

0x0b03,	// (0x0001faa6) list_single_number_heading_pane_vc_g1

0x0b0f,	// (0x0001fab2) list_single_number_heading_pane_vc_g2_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002e571) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002e571) list_single_number_heading_pane_vc_g

0x0b79,	// (0x0001fb1c) list_single_number_heading_pane_vc_t1_ParamLimits

0x0b79,	// (0x0001fb1c) list_single_number_heading_pane_vc_t1

0x0ddf,	// (0x0001fd82) list_single_number_heading_pane_vc_t2_ParamLimits

0x0ddf,	// (0x0001fd82) list_single_number_heading_pane_vc_t2

0x0df3,	// (0x0001fd96) list_single_number_heading_pane_vc_t3_ParamLimits

0x0df3,	// (0x0001fd96) list_single_number_heading_pane_vc_t3

0x0002,

0xfa20,	// (0x0002e9c3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa20,	// (0x0002e9c3) list_single_number_heading_pane_vc_t

0x0af7,	// (0x0001fa9a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0af7,	// (0x0001fa9a) list_single_graphic_heading_pane_vc_g1

0x0b03,	// (0x0001faa6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0b03,	// (0x0001faa6) list_single_graphic_heading_pane_vc_g4

0x0b0f,	// (0x0001fab2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0b0f,	// (0x0001fab2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b6,	// (0x0002e759) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002e759) list_single_graphic_heading_pane_vc_g

0x0b79,	// (0x0001fb1c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0b79,	// (0x0001fb1c) list_single_graphic_heading_pane_vc_t1

0x0e05,	// (0x0001fda8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0e05,	// (0x0001fda8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa27,	// (0x0002e9ca) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x0002e9ca) list_single_graphic_heading_pane_vc_t

0x0b03,	// (0x0001faa6) list_double2_pane_vc_g1_ParamLimits

0x0b03,	// (0x0001faa6) list_double2_pane_vc_g1

0x0b0f,	// (0x0001fab2) list_double2_pane_vc_g2_ParamLimits

0x0b0f,	// (0x0001fab2) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002e571) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002e571) list_double2_pane_vc_g

0x0e19,	// (0x0001fdbc) list_double2_pane_vc_t1_ParamLimits

0x0e19,	// (0x0001fdbc) list_double2_pane_vc_t1

0x0e2f,	// (0x0001fdd2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0e2f,	// (0x0001fdd2) list_double2_large_graphic_pane_vc_g1

0x0b03,	// (0x0001faa6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0b03,	// (0x0001faa6) list_double2_large_graphic_pane_vc_g2

0x0b0f,	// (0x0001fab2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0b0f,	// (0x0001fab2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0002e58e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0002e58e) list_double2_large_graphic_pane_vc_g

0x0e3b,	// (0x0001fdde) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0e3b,	// (0x0001fdde) list_double2_large_graphic_pane_vc_t1

0x0e51,	// (0x0001fdf4) list_double_time_pane_vc_g1_ParamLimits

0x0e51,	// (0x0001fdf4) list_double_time_pane_vc_g1

0x0e5d,	// (0x0001fe00) list_double_time_pane_vc_g2_ParamLimits

0x0e5d,	// (0x0001fe00) list_double_time_pane_vc_g2

0x0001,

0xfa2c,	// (0x0002e9cf) list_double_time_pane_vc_g_ParamLimits

0xfa2c,	// (0x0002e9cf) list_double_time_pane_vc_g

0x0e69,	// (0x0001fe0c) list_double_time_pane_vc_t1_ParamLimits

0x0e69,	// (0x0001fe0c) list_double_time_pane_vc_t1

0x0e8d,	// (0x0001fe30) list_double_time_pane_vc_t2_ParamLimits

0x0e8d,	// (0x0001fe30) list_double_time_pane_vc_t2

0x0edc,	// (0x0001fe7f) list_double_time_pane_vc_t3_ParamLimits

0x0edc,	// (0x0001fe7f) list_double_time_pane_vc_t3

0x0eee,	// (0x0001fe91) list_double_time_pane_vc_t4_ParamLimits

0x0eee,	// (0x0001fe91) list_double_time_pane_vc_t4

0x0003,

0xfa31,	// (0x0002e9d4) list_double_time_pane_vc_t_ParamLimits

0xfa31,	// (0x0002e9d4) list_double_time_pane_vc_t

0x0b03,	// (0x0001faa6) list_double_pane_vc_g1_ParamLimits

0x0b03,	// (0x0001faa6) list_double_pane_vc_g1

0x0b0f,	// (0x0001fab2) list_double_pane_vc_g2_ParamLimits

0x0b0f,	// (0x0001fab2) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002e571) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002e571) list_double_pane_vc_g

0x0f02,	// (0x0001fea5) list_double_pane_vc_t1_ParamLimits

0x0f02,	// (0x0001fea5) list_double_pane_vc_t1

0x0f16,	// (0x0001feb9) list_double_pane_vc_t2_ParamLimits

0x0f16,	// (0x0001feb9) list_double_pane_vc_t2

0x0001,

0xfa3a,	// (0x0002e9dd) list_double_pane_vc_t_ParamLimits

0xfa3a,	// (0x0002e9dd) list_double_pane_vc_t

0x0b03,	// (0x0001faa6) list_double_number_pane_vc_g1_ParamLimits

0x0b03,	// (0x0001faa6) list_double_number_pane_vc_g1

0x0b0f,	// (0x0001fab2) list_double_number_pane_vc_g2_ParamLimits

0x0b0f,	// (0x0001fab2) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002e571) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002e571) list_double_number_pane_vc_g

0x0f2e,	// (0x0001fed1) list_double_number_pane_vc_t1_ParamLimits

0x0f2e,	// (0x0001fed1) list_double_number_pane_vc_t1

0x0f40,	// (0x0001fee3) list_double_number_pane_vc_t2_ParamLimits

0x0f40,	// (0x0001fee3) list_double_number_pane_vc_t2

0x0f54,	// (0x0001fef7) list_double_number_pane_vc_t3_ParamLimits

0x0f54,	// (0x0001fef7) list_double_number_pane_vc_t3

0x0002,

0xfa3f,	// (0x0002e9e2) list_double_number_pane_vc_t_ParamLimits

0xfa3f,	// (0x0002e9e2) list_double_number_pane_vc_t

0x0f6c,	// (0x0001ff0f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0f6c,	// (0x0001ff0f) list_double_large_graphic_pane_vc_g1

0x0f78,	// (0x0001ff1b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0f78,	// (0x0001ff1b) list_double_large_graphic_pane_vc_g2

0x0b0f,	// (0x0001fab2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0b0f,	// (0x0001fab2) list_double_large_graphic_pane_vc_g3

0x0f87,	// (0x0001ff2a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0f87,	// (0x0001ff2a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa46,	// (0x0002e9e9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0002e9e9) list_double_large_graphic_pane_vc_g

0x0f93,	// (0x0001ff36) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0f93,	// (0x0001ff36) list_double_large_graphic_pane_vc_t1

0x0fa7,	// (0x0001ff4a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0fa7,	// (0x0001ff4a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4f,	// (0x0002e9f2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4f,	// (0x0002e9f2) list_double_large_graphic_pane_vc_t

0x0b03,	// (0x0001faa6) list_double_heading_pane_vc_g1_ParamLimits

0x0b03,	// (0x0001faa6) list_double_heading_pane_vc_g1

0x0b0f,	// (0x0001fab2) list_double_heading_pane_vc_g2_ParamLimits

0x0b0f,	// (0x0001fab2) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002e571) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002e571) list_double_heading_pane_vc_g

0x0fc0,	// (0x0001ff63) list_double_heading_pane_vc_t1_ParamLimits

0x0fc0,	// (0x0001ff63) list_double_heading_pane_vc_t1

0x0b79,	// (0x0001fb1c) list_double_heading_pane_vc_t2_ParamLimits

0x0b79,	// (0x0001fb1c) list_double_heading_pane_vc_t2

0x0001,

0xfa54,	// (0x0002e9f7) list_double_heading_pane_vc_t_ParamLimits

0xfa54,	// (0x0002e9f7) list_double_heading_pane_vc_t

0x0af7,	// (0x0001fa9a) list_double_graphic_pane_vc_g1_ParamLimits

0x0af7,	// (0x0001fa9a) list_double_graphic_pane_vc_g1

0x0fd4,	// (0x0001ff77) list_double_graphic_pane_vc_g2_ParamLimits

0x0fd4,	// (0x0001ff77) list_double_graphic_pane_vc_g2

0x0fe3,	// (0x0001ff86) list_double_graphic_pane_vc_g3_ParamLimits

0x0fe3,	// (0x0001ff86) list_double_graphic_pane_vc_g3

0x0002,

0xfa59,	// (0x0002e9fc) list_double_graphic_pane_vc_g_ParamLimits

0xfa59,	// (0x0002e9fc) list_double_graphic_pane_vc_g

0x0fef,	// (0x0001ff92) list_double_graphic_pane_vc_t1_ParamLimits

0x0fef,	// (0x0001ff92) list_double_graphic_pane_vc_t1

0x1003,	// (0x0001ffa6) list_double_graphic_pane_vc_t2_ParamLimits

0x1003,	// (0x0001ffa6) list_double_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x0002ea03) list_double_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x0002ea03) list_double_graphic_pane_vc_t

0x1412,	// (0x000203b5) aid_size_cell_fastswap

0xbf5a,	// (0x0002aefd) aid_size_cell_touch_ParamLimits

0xbf5a,	// (0x0002aefd) aid_size_cell_touch

0x1675,	// (0x00020618) popup_fast_swap_wide_window_ParamLimits

0x1675,	// (0x00020618) popup_fast_swap_wide_window

0xc10a,	// (0x0002b0ad) touch_pane_ParamLimits

0xc10a,	// (0x0002b0ad) touch_pane

0x3f01,	// (0x00022ea4) button_value_adjust_pane_cp2

0x07de,	// (0x0001f781) button_value_adjust_pane_cp4

0x07fe,	// (0x0001f7a1) form_field_data_pane_cp2

0xbad5,	// (0x0002aa78) form_field_data_wide_pane_cp2

0x437e,	// (0x00023321) bg_scroll_pane_ParamLimits

0x1a17,	// (0x000209ba) scroll_handle_pane_ParamLimits

0x1a2b,	// (0x000209ce) scroll_sc2_down_pane_ParamLimits

0x1a2b,	// (0x000209ce) scroll_sc2_down_pane

0x43af,	// (0x00023352) scroll_sc2_up_pane_ParamLimits

0x43af,	// (0x00023352) scroll_sc2_up_pane

0xdfbe,	// (0x0002cf61) grid_wheel_folder_pane_g1_ParamLimits

0xdfbe,	// (0x0002cf61) grid_wheel_folder_pane_g1

0x1bf0,	// (0x00020b93) clock_nsta_pane_cp2_ParamLimits

0x1bf0,	// (0x00020b93) clock_nsta_pane_cp2

0x4edc,	// (0x00023e7f) listscroll_midp_pane_ParamLimits

0xd4cf,	// (0x0002c472) midp_canvas_pane

0x4e8e,	// (0x00023e31) nsta_clock_indic_pane

0x4ec2,	// (0x00023e65) listscroll_form_pane_vc

0x4eca,	// (0x00023e6d) listscroll_set_pane_vc_ParamLimits

0x4eca,	// (0x00023e6d) listscroll_set_pane_vc

0xd6ab,	// (0x0002c64e) clock_nsta_pane

0xd6d5,	// (0x0002c678) indicator_nsta_pane

0x5324,	// (0x000242c7) bg_popup_sub_pane_cp2_ParamLimits

0x5338,	// (0x000242db) find_pane_cp2_ParamLimits

0x5338,	// (0x000242db) find_pane_cp2

0x534e,	// (0x000242f1) grid_toobar_pane_ParamLimits

0x542e,	// (0x000243d1) list_form_gen_pane_vc_ParamLimits

0x542e,	// (0x000243d1) list_form_gen_pane_vc

0x5444,	// (0x000243e7) scroll_pane_cp8_vc_ParamLimits

0x5444,	// (0x000243e7) scroll_pane_cp8_vc

0x54cc,	// (0x0002446f) data_form_wide_pane_vc_ParamLimits

0x54cc,	// (0x0002446f) data_form_wide_pane_vc

0x54d8,	// (0x0002447b) form_field_data_wide_pane_vc_g1

0x54e0,	// (0x00024483) form_field_data_wide_pane_vc_t1_ParamLimits

0x54e0,	// (0x00024483) form_field_data_wide_pane_vc_t1

0x3f15,	// (0x00022eb8) input_focus_pane_cp6_vc_ParamLimits

0x3f15,	// (0x00022eb8) input_focus_pane_cp6_vc

0xda79,	// (0x0002ca1c) list_midp_pane_ParamLimits

0x6b73,	// (0x00025b16) scroll_pane_cp16_ParamLimits

0x6b73,	// (0x00025b16) scroll_pane_cp16

0x5866,	// (0x00024809) button_value_adjust_pane_ParamLimits

0x5866,	// (0x00024809) button_value_adjust_pane

0xdc1b,	// (0x0002cbbe) button_value_adjust_pane_cp6_ParamLimits

0xdc1b,	// (0x0002cbbe) button_value_adjust_pane_cp6

0xdd35,	// (0x0002ccd8) settings_code_pane_cp_ParamLimits

0xdd35,	// (0x0002ccd8) settings_code_pane_cp

0x35bf,	// (0x00022562) cell_touch_pane_g1

0x35bf,	// (0x00022562) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0002e6ac) cell_touch_pane_g

0xdea2,	// (0x0002ce45) cell_touch_pane_cp_ParamLimits

0xdea2,	// (0x0002ce45) cell_touch_pane_cp

0xdebe,	// (0x0002ce61) cell_touch_pane_ParamLimits

0xdebe,	// (0x0002ce61) cell_touch_pane

0x35bf,	// (0x00022562) scroll_sc2_down_pane_g1

0x35bf,	// (0x00022562) scroll_sc2_up_pane_g1

0x35c9,	// (0x0002256c) bg_set_opt_pane_cp4_vc

0x6f03,	// (0x00025ea6) list_set_graphic_pane_vc_g1_ParamLimits

0x6f03,	// (0x00025ea6) list_set_graphic_pane_vc_g1

0x6f0f,	// (0x00025eb2) list_set_graphic_pane_vc_g2_ParamLimits

0x6f0f,	// (0x00025eb2) list_set_graphic_pane_vc_g2

0x0001,

0xf9f2,	// (0x0002e995) list_set_graphic_pane_vc_g_ParamLimits

0xf9f2,	// (0x0002e995) list_set_graphic_pane_vc_g

0x6f1b,	// (0x00025ebe) text_primary_small_cp13_vc_ParamLimits

0x6f1b,	// (0x00025ebe) text_primary_small_cp13_vc

0x6f33,	// (0x00025ed6) list_set_graphic_pane_vc_ParamLimits

0x6f33,	// (0x00025ed6) list_set_graphic_pane_vc

0x35c9,	// (0x0002256c) input_focus_pane_cp2_vc

0x35bf,	// (0x00022562) setting_code_pane_vc_g1

0x36f4,	// (0x00022697) setting_code_pane_vc_t1

0x6f45,	// (0x00025ee8) set_text_pane_vc_t1_ParamLimits

0x6f45,	// (0x00025ee8) set_text_pane_vc_t1

0x35c9,	// (0x0002256c) input_focus_pane_cp1_vc

0x6f61,	// (0x00025f04) list_set_text_pane_vc

0x35bf,	// (0x00022562) setting_text_pane_vc_g1

0x35c9,	// (0x0002256c) bg_set_opt_pane_cp2_vc

0x36eb,	// (0x0002268e) setting_slider_graphic_pane_vc_g1

0x6f6b,	// (0x00025f0e) setting_slider_graphic_pane_vc_t1

0x6f7b,	// (0x00025f1e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f7,	// (0x0002e99a) setting_slider_graphic_pane_vc_t

0x6f8b,	// (0x00025f2e) slider_set_pane_cp_vc

0x6f93,	// (0x00025f36) slider_set_pane_vc_g1

0x6f9c,	// (0x00025f3f) slider_set_pane_vc_g2

0x0006,

0xf9fc,	// (0x0002e99f) slider_set_pane_vc_g

0x3f70,	// (0x00022f13) set_opt_bg_pane_g1_copy1

0x3f78,	// (0x00022f1b) set_opt_bg_pane_g2_copy1

0x6fc8,	// (0x00025f6b) set_opt_bg_pane_g3_copy1

0x3f88,	// (0x00022f2b) set_opt_bg_pane_g4_copy1

0x3f90,	// (0x00022f33) set_opt_bg_pane_g5_copy1

0x3f98,	// (0x00022f3b) set_opt_bg_pane_g6_copy1

0x6fd2,	// (0x00025f75) set_opt_bg_pane_g7_copy1

0x6fda,	// (0x00025f7d) set_opt_bg_pane_g8_copy1

0x6fe4,	// (0x00025f87) set_opt_bg_pane_g9_copy1

0x35c9,	// (0x0002256c) bg_set_opt_pane_cp_vc

0x6fee,	// (0x00025f91) setting_slider_pane_vc_t1

0x6ffd,	// (0x00025fa0) setting_slider_pane_vc_t2

0x700d,	// (0x00025fb0) setting_slider_pane_vc_t3

0x0002,

0xfa0b,	// (0x0002e9ae) setting_slider_pane_vc_t

0x701d,	// (0x00025fc0) slider_set_pane_vc

0x2540,	// (0x000214e3) volume_set_pane_vc_g1

0x2549,	// (0x000214ec) volume_set_pane_vc_g2

0x2552,	// (0x000214f5) volume_set_pane_vc_g3

0x255b,	// (0x000214fe) volume_set_pane_vc_g4

0x2564,	// (0x00021507) volume_set_pane_vc_g5

0x256d,	// (0x00021510) volume_set_pane_vc_g6

0x2576,	// (0x00021519) volume_set_pane_vc_g7

0x257f,	// (0x00021522) volume_set_pane_vc_g8

0x2588,	// (0x0002152b) volume_set_pane_vc_g9

0x2591,	// (0x00021534) volume_set_pane_vc_g10

0x0009,

0xf8b0,	// (0x0002e853) volume_set_pane_vc_g

0x7025,	// (0x00025fc8) volume_set_pane_vc

0x702d,	// (0x00025fd0) button_value_adjust_pane_cp1_vc

0x7037,	// (0x00025fda) list_highlight_pane_cp2_vc

0x7040,	// (0x00025fe3) list_set_pane_vc_ParamLimits

0x7040,	// (0x00025fe3) list_set_pane_vc

0x70aa,	// (0x0002604d) main_pane_set_vc_t1_ParamLimits

0x70aa,	// (0x0002604d) main_pane_set_vc_t1

0x70bf,	// (0x00026062) main_pane_set_vc_t2_ParamLimits

0x70bf,	// (0x00026062) main_pane_set_vc_t2

0x70d1,	// (0x00026074) main_pane_set_vc_t3_ParamLimits

0x70d1,	// (0x00026074) main_pane_set_vc_t3

0x70e5,	// (0x00026088) main_pane_set_vc_t4_ParamLimits

0x70e5,	// (0x00026088) main_pane_set_vc_t4

0x0003,

0xfa12,	// (0x0002e9b5) main_pane_set_vc_t_ParamLimits

0xfa12,	// (0x0002e9b5) main_pane_set_vc_t

0x70f9,	// (0x0002609c) setting_code_pane_vc_ParamLimits

0x70f9,	// (0x0002609c) setting_code_pane_vc

0x710a,	// (0x000260ad) setting_slider_graphic_pane_vc

0x710a,	// (0x000260ad) setting_slider_pane_vc

0x710a,	// (0x000260ad) setting_text_pane_vc

0x710a,	// (0x000260ad) setting_volume_pane_vc

0x7114,	// (0x000260b7) scroll_pane_cp121_vc

0x3eef,	// (0x00022e92) set_content_pane_vc

0x711c,	// (0x000260bf) button_value_adjust_pane_g1

0x7125,	// (0x000260c8) button_value_adjust_pane_g2

0x0001,

0xfa65,	// (0x0002ea08) button_value_adjust_pane_g

0x712e,	// (0x000260d1) form_field_slider_wide_pane_vc_t1_ParamLimits

0x712e,	// (0x000260d1) form_field_slider_wide_pane_vc_t1

0x7142,	// (0x000260e5) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7142,	// (0x000260e5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6a,	// (0x0002ea0d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6a,	// (0x0002ea0d) form_field_slider_wide_pane_vc_t

0x3924,	// (0x000228c7) input_focus_pane_cp10_vc_ParamLimits

0x3924,	// (0x000228c7) input_focus_pane_cp10_vc

0x7170,	// (0x00026113) slider_cont_pane_cp1_vc_ParamLimits

0x7170,	// (0x00026113) slider_cont_pane_cp1_vc

0x7182,	// (0x00026125) slider_form_pane_g1_cp2

0x6f9c,	// (0x00025f3f) slider_form_pane_g2_cp2

0x71af,	// (0x00026152) form_field_slider_pane_vc_t3

0x71bd,	// (0x00026160) form_field_slider_pane_vc_t4

0x71cb,	// (0x0002616e) slider_form_pane_vc_ParamLimits

0x71cb,	// (0x0002616e) slider_form_pane_vc

0x71d8,	// (0x0002617b) form_field_slider_pane_vc_t1_ParamLimits

0x71d8,	// (0x0002617b) form_field_slider_pane_vc_t1

0x7142,	// (0x000260e5) form_field_slider_pane_vc_t2_ParamLimits

0x7142,	// (0x000260e5) form_field_slider_pane_vc_t2

0x0001,

0xfa7c,	// (0x0002ea1f) form_field_slider_pane_vc_t_ParamLimits

0xfa7c,	// (0x0002ea1f) form_field_slider_pane_vc_t

0x3924,	// (0x000228c7) input_focus_pane_cp9_vc_ParamLimits

0x3924,	// (0x000228c7) input_focus_pane_cp9_vc

0x71f4,	// (0x00026197) slider_cont_pane_vc_ParamLimits

0x71f4,	// (0x00026197) slider_cont_pane_vc

0x7208,	// (0x000261ab) list_form_graphic_pane_cp_vc_ParamLimits

0x7208,	// (0x000261ab) list_form_graphic_pane_cp_vc

0x54d8,	// (0x0002447b) form_field_popup_wide_pane_vc_g1

0x721d,	// (0x000261c0) form_field_popup_wide_pane_vc_t1_ParamLimits

0x721d,	// (0x000261c0) form_field_popup_wide_pane_vc_t1

0x3f15,	// (0x00022eb8) input_focus_pane_cp8_vc_ParamLimits

0x3f15,	// (0x00022eb8) input_focus_pane_cp8_vc

0x7262,	// (0x00026205) list_form_wide_pane_vc_ParamLimits

0x7262,	// (0x00026205) list_form_wide_pane_vc

0x726e,	// (0x00026211) list_form_graphic_pane_vc_g1

0x7276,	// (0x00026219) list_form_graphic_pane_vc_t1_ParamLimits

0x7276,	// (0x00026219) list_form_graphic_pane_vc_t1

0x36a9,	// (0x0002264c) list_highlight_pane_cp5_vc_ParamLimits

0x36a9,	// (0x0002264c) list_highlight_pane_cp5_vc

0x7292,	// (0x00026235) list_form_graphic_pane_vc_ParamLimits

0x7292,	// (0x00026235) list_form_graphic_pane_vc

0x54d8,	// (0x0002447b) form_field_popup_pane_vc_g1

0x72a8,	// (0x0002624b) form_field_popup_pane_vc_t1_ParamLimits

0x72a8,	// (0x0002624b) form_field_popup_pane_vc_t1

0x3f15,	// (0x00022eb8) input_focus_pane_cp7_vc_ParamLimits

0x3f15,	// (0x00022eb8) input_focus_pane_cp7_vc

0x72bf,	// (0x00026262) list_form_pane_vc_ParamLimits

0x72bf,	// (0x00026262) list_form_pane_vc

0x72cb,	// (0x0002626e) data_form_pane_vc_t1_ParamLimits

0x72cb,	// (0x0002626e) data_form_pane_vc_t1

0x3f70,	// (0x00022f13) input_focus_pane_vc_g1

0x3f78,	// (0x00022f1b) input_focus_pane_vc_g2

0x3f80,	// (0x00022f23) input_focus_pane_vc_g3

0x3f88,	// (0x00022f2b) input_focus_pane_vc_g4

0x3f90,	// (0x00022f33) input_focus_pane_vc_g5

0x3f98,	// (0x00022f3b) input_focus_pane_vc_g6

0x3fa0,	// (0x00022f43) input_focus_pane_vc_g7

0x3fa8,	// (0x00022f4b) input_focus_pane_vc_g8

0x3fb0,	// (0x00022f53) input_focus_pane_vc_g9

0x35bf,	// (0x00022562) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0002e635) input_focus_pane_vc_g

0x54cc,	// (0x0002446f) data_form_pane_vc_ParamLimits

0x54cc,	// (0x0002446f) data_form_pane_vc

0x54d8,	// (0x0002447b) form_field_data_pane_vc_g1

0x72e6,	// (0x00026289) form_field_data_pane_vc_t1_ParamLimits

0x72e6,	// (0x00026289) form_field_data_pane_vc_t1

0x3f15,	// (0x00022eb8) input_focus_pane_vc_ParamLimits

0x3f15,	// (0x00022eb8) input_focus_pane_vc

0x7300,	// (0x000262a3) button_value_adjust_pane_cp3_vc

0x7308,	// (0x000262ab) button_value_adjust_pane_cp5_vc

0x7310,	// (0x000262b3) form_field_data_pane_vc_ParamLimits

0x7310,	// (0x000262b3) form_field_data_pane_vc

0x7327,	// (0x000262ca) form_field_data_pane_vc_cp2

0x732f,	// (0x000262d2) form_field_data_wide_pane_vc_ParamLimits

0x732f,	// (0x000262d2) form_field_data_wide_pane_vc

0x7345,	// (0x000262e8) form_field_data_wide_pane_vc_cp2

0x734d,	// (0x000262f0) form_field_popup_pane_vc_ParamLimits

0x734d,	// (0x000262f0) form_field_popup_pane_vc

0x7364,	// (0x00026307) form_field_popup_wide_pane_vc_ParamLimits

0x7364,	// (0x00026307) form_field_popup_wide_pane_vc

0x737a,	// (0x0002631d) form_field_slider_pane_vc_ParamLimits

0x737a,	// (0x0002631d) form_field_slider_pane_vc

0x738d,	// (0x00026330) form_field_slider_wide_pane_vc_ParamLimits

0x738d,	// (0x00026330) form_field_slider_wide_pane_vc

0xdedc,	// (0x0002ce7f) grid_touch_1_pane_ParamLimits

0xdedc,	// (0x0002ce7f) grid_touch_1_pane

0xdef0,	// (0x0002ce93) grid_touch_2_pane_ParamLimits

0xdef0,	// (0x0002ce93) grid_touch_2_pane

0x7462,	// (0x00026405) touch_pane_g1_ParamLimits

0x7462,	// (0x00026405) touch_pane_g1

0x73c4,	// (0x00026367) cell_app_pane_cp_wide_ParamLimits

0x73c4,	// (0x00026367) cell_app_pane_cp_wide

0x73d5,	// (0x00026378) grid_popup_fast_wide_pane_ParamLimits

0x73d5,	// (0x00026378) grid_popup_fast_wide_pane

0x73e9,	// (0x0002638c) scroll_pane_cp19_ParamLimits

0x73e9,	// (0x0002638c) scroll_pane_cp19

0x35c9,	// (0x0002256c) bg_popup_window_pane_cp20

0x73fd,	// (0x000263a0) listscroll_popup_fast_wide_pane

0x40d8,	// (0x0002307b) grid_indicator_nsta_pane

0x7405,	// (0x000263a8) clock_nsta_pane_g1

0x740e,	// (0x000263b1) clock_nsta_pane_t1

0xdf1a,	// (0x0002cebd) cell_indicator_nsta_pane_ParamLimits

0xdf1a,	// (0x0002cebd) cell_indicator_nsta_pane

0x7462,	// (0x00026405) cell_indicator_nsta_pane_g1

0xdf33,	// (0x0002ced6) cell_indicator_nsta_pane_g2

0x0001,

0xfa8d,	// (0x0002ea30) cell_indicator_nsta_pane_g

0x7486,	// (0x00026429) clock_nsta_pane_cp

0x748e,	// (0x00026431) indicator_nsta_pane_cp

0x7496,	// (0x00026439) nsta_clock_indic_pane_g1

0x3772,	// (0x00022715) grid_indicator_pane

0x44a4,	// (0x00023447) scroll_pane_cp29

0x1b3f,	// (0x00020ae2) indicator_nsta_pane_cp2_ParamLimits

0x1b3f,	// (0x00020ae2) indicator_nsta_pane_cp2

0x36a9,	// (0x0002264c) main_apps_wheel_pane

0x56ed,	// (0x00024690) form_midp_field_text_pane_ParamLimits

0x5838,	// (0x000247db) scroll_bar_cp050_ParamLimits

0x74ef,	// (0x00026492) cell_indicator_pane_ParamLimits

0x74ef,	// (0x00026492) cell_indicator_pane

0x7506,	// (0x000264a9) cell_indicator_pane_g1

0xdf48,	// (0x0002ceeb) grid_wheel_folder_pane_ParamLimits

0xdf48,	// (0x0002ceeb) grid_wheel_folder_pane

0xdf56,	// (0x0002cef9) list_wheel_apps_pane_ParamLimits

0xdf56,	// (0x0002cef9) list_wheel_apps_pane

0xdf64,	// (0x0002cf07) main_apps_wheel_pane_g1_ParamLimits

0xdf64,	// (0x0002cf07) main_apps_wheel_pane_g1

0xdf70,	// (0x0002cf13) main_apps_wheel_pane_g2_ParamLimits

0xdf70,	// (0x0002cf13) main_apps_wheel_pane_g2

0x0001,

0xfaa9,	// (0x0002ea4c) main_apps_wheel_pane_g_ParamLimits

0xfaa9,	// (0x0002ea4c) main_apps_wheel_pane_g

0xdf7e,	// (0x0002cf21) main_apps_wheel_pane_t1_ParamLimits

0xdf7e,	// (0x0002cf21) main_apps_wheel_pane_t1

0xdf92,	// (0x0002cf35) list_wheel_apps_pane_g1

0xdf9a,	// (0x0002cf3d) list_wheel_apps_pane_g2

0xdfa2,	// (0x0002cf45) list_wheel_apps_pane_g3

0xdfaa,	// (0x0002cf4d) list_wheel_apps_pane_g4

0xdfb4,	// (0x0002cf57) list_wheel_apps_pane_g5

0x0004,

0xfaae,	// (0x0002ea51) list_wheel_apps_pane_g

0x4a1c,	// (0x000239bf) navi_icon_text_pane

0xd59f,	// (0x0002c542) aid_fill_nsta

0x75cb,	// (0x0002656e) navi_icon_text_pane_g1

0x75d7,	// (0x0002657a) navi_icon_text_pane_t1

0xd4b7,	// (0x0002c45a) list_set_graphic_pane_t1_ParamLimits

0xd4b7,	// (0x0002c45a) list_set_graphic_pane_t1

0x5f87,	// (0x00024f2a) popup_midp_note_alarm_window_t6_ParamLimits

0x5f87,	// (0x00024f2a) popup_midp_note_alarm_window_t6

0x5f99,	// (0x00024f3c) popup_midp_note_alarm_window_t7_ParamLimits

0x5f99,	// (0x00024f3c) popup_midp_note_alarm_window_t7

0x5fab,	// (0x00024f4e) popup_midp_note_alarm_window_t8_ParamLimits

0x5fab,	// (0x00024f4e) popup_midp_note_alarm_window_t8

0x5fbd,	// (0x00024f60) popup_midp_note_alarm_window_t9_ParamLimits

0x5fbd,	// (0x00024f60) popup_midp_note_alarm_window_t9

0x5fcf,	// (0x00024f72) popup_midp_note_alarm_window_t10_ParamLimits

0x5fcf,	// (0x00024f72) popup_midp_note_alarm_window_t10

0x5fe1,	// (0x00024f84) popup_midp_note_alarm_window_t11_ParamLimits

0x5fe1,	// (0x00024f84) popup_midp_note_alarm_window_t11

0x5ff3,	// (0x00024f96) scroll_pane_cp17_ParamLimits

0x5ff3,	// (0x00024f96) scroll_pane_cp17

0x2540,	// (0x000214e3) volume_small_pane_cp_g1

0x27f3,	// (0x00021796) volume_small_pane_cp_g2

0x27fc,	// (0x0002179f) volume_small_pane_cp_g3

0x2805,	// (0x000217a8) volume_small_pane_cp_g4

0x280e,	// (0x000217b1) volume_small_pane_cp_g5

0x2817,	// (0x000217ba) volume_small_pane_cp_g6

0x2820,	// (0x000217c3) volume_small_pane_cp_g7

0x2829,	// (0x000217cc) volume_small_pane_cp_g8

0x2832,	// (0x000217d5) volume_small_pane_cp_g9

0x283b,	// (0x000217de) volume_small_pane_cp_g10

0x4c6b,	// (0x00023c0e) midp_ticker_pane_g1_ParamLimits

0x4c77,	// (0x00023c1a) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0002e701) midp_ticker_pane_g_ParamLimits

0x4c83,	// (0x00023c26) midp_ticker_pane_t1_ParamLimits

0xd5c3,	// (0x0002c566) aid_fill_nsta_2

0x5824,	// (0x000247c7) list_form2_midp_pane

0x698b,	// (0x0002592e) midp_editing_number_pane_ParamLimits

0x699a,	// (0x0002593d) midp_ticker_pane_ParamLimits

0x75e9,	// (0x0002658c) form2_midp_field_pane

0x760d,	// (0x000265b0) scroll_pane_cp51

0x762d,	// (0x000265d0) form2_midp_button_pane_ParamLimits

0x762d,	// (0x000265d0) form2_midp_button_pane

0x763f,	// (0x000265e2) form2_midp_content_pane_ParamLimits

0x763f,	// (0x000265e2) form2_midp_content_pane

0x7659,	// (0x000265fc) form2_midp_field_choice_group_pane

0x7661,	// (0x00026604) form2_midp_field_pane_g1

0x7669,	// (0x0002660c) form2_midp_field_pane_g2

0x7671,	// (0x00026614) form2_midp_field_pane_g3

0x7679,	// (0x0002661c) form2_midp_field_pane_g4

0x0003,

0xfad3,	// (0x0002ea76) form2_midp_field_pane_g

0x7681,	// (0x00026624) form2_midp_gauge_slider_pane

0x7689,	// (0x0002662c) form2_midp_gauge_wait_pane

0x7691,	// (0x00026634) form2_midp_image_pane_ParamLimits

0x7691,	// (0x00026634) form2_midp_image_pane

0x76ac,	// (0x0002664f) form2_midp_label_pane_ParamLimits

0x76ac,	// (0x0002664f) form2_midp_label_pane

0xdfe7,	// (0x0002cf8a) form2_midp_label_pane_cp_ParamLimits

0xdfe7,	// (0x0002cf8a) form2_midp_label_pane_cp

0x76e6,	// (0x00026689) form2_midp_string_pane_ParamLimits

0x76e6,	// (0x00026689) form2_midp_string_pane

0xbd21,	// (0x0002acc4) form2_midp_text_pane_ParamLimits

0xbd21,	// (0x0002acc4) form2_midp_text_pane

0x76f8,	// (0x0002669b) form2_midp_time_pane

0x7708,	// (0x000266ab) input_focus_pane_cp51_ParamLimits

0x7708,	// (0x000266ab) input_focus_pane_cp51

0x7720,	// (0x000266c3) form2_midp_label_pane_t1_ParamLimits

0x7720,	// (0x000266c3) form2_midp_label_pane_t1

0xbd3a,	// (0x0002acdd) form2_mdip_text_pane_t1_ParamLimits

0xbd3a,	// (0x0002acdd) form2_mdip_text_pane_t1

0x1054,	// (0x0001fff7) form2_midp_time_pane_t1

0x7769,	// (0x0002670c) form2_midp_gauge_slider_pane_t1

0xe006,	// (0x0002cfa9) form2_midp_gauge_slider_pane_t2

0xe018,	// (0x0002cfbb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadc,	// (0x0002ea7f) form2_midp_gauge_slider_pane_t

0x779f,	// (0x00026742) form2_midp_slider_pane

0x77ab,	// (0x0002674e) form2_midp_gauge_wait_pane_t1

0x77b9,	// (0x0002675c) form2_midp_wait_pane_ParamLimits

0x77b9,	// (0x0002675c) form2_midp_wait_pane

0xe02a,	// (0x0002cfcd) list_single_2graphic_pane_cp4_ParamLimits

0xe02a,	// (0x0002cfcd) list_single_2graphic_pane_cp4

0xda07,	// (0x0002c9aa) list_single_midp_graphic_pane_cp_ParamLimits

0xda07,	// (0x0002c9aa) list_single_midp_graphic_pane_cp

0x35c9,	// (0x0002256c) list_highlight_pane_cp20

0x7813,	// (0x000267b6) list_single_2graphic_pane_g1_cp4

0x781b,	// (0x000267be) list_single_2graphic_pane_g2_cp4

0x7823,	// (0x000267c6) list_single_2graphic_pane_t1_cp4

0x36a9,	// (0x0002264c) list_highlight_pane_cp21

0x7832,	// (0x000267d5) list_single_midp_graphic_pane_g4_cp

0x7841,	// (0x000267e4) list_single_midp_graphic_pane_t1_cp

0xe03e,	// (0x0002cfe1) form2_mdip_string_pane_t1_ParamLimits

0xe03e,	// (0x0002cfe1) form2_mdip_string_pane_t1

0x35c9,	// (0x0002256c) bg_wml_button_pane_cp2

0x35bf,	// (0x00022562) form2_midp_image_pane_g1

0x05c8,	// (0x0001f56b) list_double_large_graphic_pane_g5_ParamLimits

0x05c8,	// (0x0001f56b) list_double_large_graphic_pane_g5

0x4edc,	// (0x00023e7f) midp_form_pane_ParamLimits

0x36a9,	// (0x0002264c) main_apps_wheel_pane_ParamLimits

0xc6f0,	// (0x0002b693) popup_preview_window_ParamLimits

0xc6f0,	// (0x0002b693) popup_preview_window

0x23b3,	// (0x00021356) popup_touch_info_window_ParamLimits

0x23b3,	// (0x00021356) popup_touch_info_window

0x23d1,	// (0x00021374) popup_touch_menu_window_ParamLimits

0x23d1,	// (0x00021374) popup_touch_menu_window

0x35b5,	// (0x00022558) bg_popup_sub_pane_cp6

0x794f,	// (0x000268f2) list_touch_menu_pane

0x7957,	// (0x000268fa) list_single_touch_menu_pane_ParamLimits

0x7957,	// (0x000268fa) list_single_touch_menu_pane

0x796d,	// (0x00026910) list_single_touch_menu_pane_t1

0x36a9,	// (0x0002264c) bg_popup_sub_pane_cp7_ParamLimits

0x36a9,	// (0x0002264c) bg_popup_sub_pane_cp7

0x797b,	// (0x0002691e) heading_sub_pane

0x7983,	// (0x00026926) list_touch_info_pane_ParamLimits

0x7983,	// (0x00026926) list_touch_info_pane

0x7992,	// (0x00026935) list_single_touch_info_pane_ParamLimits

0x7992,	// (0x00026935) list_single_touch_info_pane

0x79a4,	// (0x00026947) list_single_touch_info_pane_t1

0x79b2,	// (0x00026955) list_single_touch_info_pane_t2

0x0001,

0xfaea,	// (0x0002ea8d) list_single_touch_info_pane_t

0x4b9c,	// (0x00023b3f) bg_popup_heading_pane_cp

0x79c0,	// (0x00026963) heading_sub_pane_t1

0x545a,	// (0x000243fd) bg_popup_preview_window_pane_cp_ParamLimits

0x545a,	// (0x000243fd) bg_popup_preview_window_pane_cp

0x797b,	// (0x0002691e) heading_preview_pane

0x7983,	// (0x00026926) list_preview_pane_ParamLimits

0x7983,	// (0x00026926) list_preview_pane

0x79ce,	// (0x00026971) popup_preview_window_g1

0x7992,	// (0x00026935) list_single_preview_pane_ParamLimits

0x7992,	// (0x00026935) list_single_preview_pane

0x79d6,	// (0x00026979) list_single_preview_pane_g1

0x79de,	// (0x00026981) list_single_preview_pane_t1

0x79a4,	// (0x00026947) list_single_preview_pane_t2

0x0001,

0xfaef,	// (0x0002ea92) list_single_preview_pane_t

0x79ec,	// (0x0002698f) bg_popup_heading_pane_cp2_ParamLimits

0x79ec,	// (0x0002698f) bg_popup_heading_pane_cp2

0x7a02,	// (0x000269a5) heading_preview_pane_g1

0x7a0a,	// (0x000269ad) heading_preview_pane_t1_ParamLimits

0x7a0a,	// (0x000269ad) heading_preview_pane_t1

0x3795,	// (0x00022738) soft_indicator_pane_t1_ParamLimits

0x3e88,	// (0x00022e2b) scroll_pane_ParamLimits

0x439d,	// (0x00023340) scroll_sc2_left_pane

0x43a6,	// (0x00023349) scroll_sc2_right_pane

0x43c5,	// (0x00023368) scroll_bg_pane_g1_ParamLimits

0x43da,	// (0x0002337d) scroll_bg_pane_g2_ParamLimits

0x43f2,	// (0x00023395) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0002e68c) scroll_bg_pane_g_ParamLimits

0x43c5,	// (0x00023368) scroll_handle_pane_g1_ParamLimits

0x4414,	// (0x000233b7) scroll_handle_pane_g2_ParamLimits

0x43f2,	// (0x00023395) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0002e693) scroll_handle_pane_g_ParamLimits

0x1e7b,	// (0x00020e1e) popup_choice_list_window_ParamLimits

0x1e7b,	// (0x00020e1e) popup_choice_list_window

0x5330,	// (0x000242d3) choice_list_pane

0x53b2,	// (0x00024355) cell_toolbar_pane_t1

0x53da,	// (0x0002437d) toolbar_button_pane_ParamLimits

0x64ad,	// (0x00025450) ai_gene_pane_1_t2_ParamLimits

0x64ad,	// (0x00025450) ai_gene_pane_1_t2

0x0001,

0xf90c,	// (0x0002e8af) ai_gene_pane_1_t_ParamLimits

0xf90c,	// (0x0002e8af) ai_gene_pane_1_t

0x7a27,	// (0x000269ca) scroll_sc2_left_pane_g1

0x7a27,	// (0x000269ca) scroll_sc2_right_pane_g1

0x4edc,	// (0x00023e7f) bg_popup_sub_pane_cp10

0x7a31,	// (0x000269d4) list_choice_list_pane

0x7a4a,	// (0x000269ed) list_single_choice_list_pane_ParamLimits

0x7a4a,	// (0x000269ed) list_single_choice_list_pane

0x7a5d,	// (0x00026a00) list_single_choice_list_pane_g1

0x40a9,	// (0x0002304c) list_single_choice_list_pane_t1_ParamLimits

0x40a9,	// (0x0002304c) list_single_choice_list_pane_t1

0x7a65,	// (0x00026a08) choice_list_pane_g1

0x7a6d,	// (0x00026a10) choice_list_pane_t1

0x35b5,	// (0x00022558) input_focus_pane_cp11

0x4280,	// (0x00023223) title_pane_stacon_g2_ParamLimits

0x4280,	// (0x00023223) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0002e672) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002e672) title_pane_stacon_g

0x4b9c,	// (0x00023b3f) cursor_press_pane

0xc3a3,	// (0x0002b346) popup_fep_hwr_window_ParamLimits

0xc3a3,	// (0x0002b346) popup_fep_hwr_window

0x1fa1,	// (0x00020f44) popup_fep_vkb_window_ParamLimits

0x1fa1,	// (0x00020f44) popup_fep_vkb_window

0x7a7b,	// (0x00026a1e) cursor_press_pane_g1

0x0002,

0xfb18,	// (0x0002eabb) fep_vkb_side_pane_g_ParamLimits

0x287d,	// (0x00021820) fep_hwr_candidate_pane_ParamLimits

0x287d,	// (0x00021820) fep_hwr_candidate_pane

0x28a7,	// (0x0002184a) fep_hwr_side_pane_ParamLimits

0x28a7,	// (0x0002184a) fep_hwr_side_pane

0x28c7,	// (0x0002186a) fep_hwr_top_pane_ParamLimits

0x28c7,	// (0x0002186a) fep_hwr_top_pane

0x28df,	// (0x00021882) fep_hwr_write_pane_ParamLimits

0x28df,	// (0x00021882) fep_hwr_write_pane

0xfb18,	// (0x0002eabb) fep_vkb_side_pane_g

0x7a83,	// (0x00026a26) fep_hwr_top_pane_g1

0x7a95,	// (0x00026a38) fep_hwr_top_pane_g2

0x290b,	// (0x000218ae) fep_hwr_top_pane_g3

0x0002,

0xfaf4,	// (0x0002ea97) fep_hwr_top_pane_g

0x2920,	// (0x000218c3) fep_hwr_top_text_pane

0x4594,	// (0x00023537) fep_hwr_top_text_pane_g1

0x7acb,	// (0x00026a6e) fep_hwr_top_text_pane_t1

0x2a16,	// (0x000219b9) fep_hwr_candidate_pane_g1

0x7d1e,	// (0x00026cc1) fep_vkb_keypad_pane_g3_ParamLimits

0x7d1e,	// (0x00026cc1) fep_vkb_keypad_pane_g3

0x7d46,	// (0x00026ce9) fep_vkb_keypad_pane_g4_ParamLimits

0x7d46,	// (0x00026ce9) fep_vkb_keypad_pane_g4

0x7db5,	// (0x00026d58) fep_vkb_bottom_pane_g2_ParamLimits

0x7db5,	// (0x00026d58) fep_vkb_bottom_pane_g2

0x0001,

0xfb1f,	// (0x0002eac2) fep_vkb_bottom_pane_g_ParamLimits

0xfb1f,	// (0x0002eac2) fep_vkb_bottom_pane_g

0x7a27,	// (0x000269ca) cell_vkb_side_pane_g2

0x0001,

0xfb29,	// (0x0002eacc) cell_vkb_side_pane_g

0x7e40,	// (0x00026de3) cell_vkb_side_pane_t1

0x7e4e,	// (0x00026df1) cell_vkb_side_pane_t1_copy1

0x7a27,	// (0x000269ca) bg_fep_vkb_candidate_pane_g2

0x7f7a,	// (0x00026f1d) cell_vkb_candidate_pane_ParamLimits

0x7ad9,	// (0x00026a7c) aid_size_cell_vkb_ParamLimits

0x7ad9,	// (0x00026a7c) aid_size_cell_vkb

0x7f7a,	// (0x00026f1d) cell_vkb_candidate_pane

0x2a30,	// (0x000219d3) bg_popup_fep_shadow_pane_g1

0xe0c2,	// (0x0002d065) fep_vkb_bottom_pane_ParamLimits

0xe0c2,	// (0x0002d065) fep_vkb_bottom_pane

0x7b9d,	// (0x00026b40) fep_vkb_candidate_pane_ParamLimits

0x7b9d,	// (0x00026b40) fep_vkb_candidate_pane

0xe0e7,	// (0x0002d08a) fep_vkb_keypad_pane_ParamLimits

0xe0e7,	// (0x0002d08a) fep_vkb_keypad_pane

0xe123,	// (0x0002d0c6) fep_vkb_side_pane_ParamLimits

0xe123,	// (0x0002d0c6) fep_vkb_side_pane

0xe15f,	// (0x0002d102) fep_vkb_top_pane_ParamLimits

0xe15f,	// (0x0002d102) fep_vkb_top_pane

0x7c77,	// (0x00026c1a) fep_vkb_top_pane_g1_ParamLimits

0x7c77,	// (0x00026c1a) fep_vkb_top_pane_g1

0x7c86,	// (0x00026c29) fep_vkb_top_pane_g2_ParamLimits

0x7c86,	// (0x00026c29) fep_vkb_top_pane_g2

0x7c95,	// (0x00026c38) fep_vkb_top_pane_g3_ParamLimits

0x7c95,	// (0x00026c38) fep_vkb_top_pane_g3

0x0003,

0xfb0f,	// (0x0002eab2) fep_vkb_top_pane_g_ParamLimits

0xfb0f,	// (0x0002eab2) fep_vkb_top_pane_g

0x7cb3,	// (0x00026c56) fep_vkb_top_text_pane_ParamLimits

0x7cb3,	// (0x00026c56) fep_vkb_top_text_pane

0xe19b,	// (0x0002d13e) fep_vkb_side_pane_g1_ParamLimits

0xe19b,	// (0x0002d13e) fep_vkb_side_pane_g1

0x7d0d,	// (0x00026cb0) grid_vkb_side_pane_ParamLimits

0x7d0d,	// (0x00026cb0) grid_vkb_side_pane

0x2a38,	// (0x000219db) bg_popup_fep_shadow_pane_g2

0x2a41,	// (0x000219e4) bg_popup_fep_shadow_pane_g3

0x2a49,	// (0x000219ec) bg_popup_fep_shadow_pane_g4

0x2a52,	// (0x000219f5) bg_popup_fep_shadow_pane_g5

0x2a5c,	// (0x000219ff) bg_popup_fep_shadow_pane_g6

0x2a64,	// (0x00021a07) bg_popup_fep_shadow_pane_g7

0x3f90,	// (0x00022f33) bg_popup_fep_shadow_pane_g8

0x7d64,	// (0x00026d07) grid_vkb_keypad_number_pane_ParamLimits

0x7d64,	// (0x00026d07) grid_vkb_keypad_number_pane

0x7d74,	// (0x00026d17) grid_vkb_keypad_pane_ParamLimits

0x7d74,	// (0x00026d17) grid_vkb_keypad_pane

0x7d9a,	// (0x00026d3d) fep_vkb_bottom_pane_g1_ParamLimits

0x7d9a,	// (0x00026d3d) fep_vkb_bottom_pane_g1

0x7dc3,	// (0x00026d66) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7dc3,	// (0x00026d66) grid_vkb_keypad_bottom_left_pane

0x7dd8,	// (0x00026d7b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7dd8,	// (0x00026d7b) grid_vkb_keypad_bottom_right_pane

0x7ded,	// (0x00026d90) fep_vkb_top_text_pane_g1

0xe1e2,	// (0x0002d185) fep_vkb_top_text_pane_t1

0xe1f4,	// (0x0002d197) cell_vkb_side_pane_ParamLimits

0xe1f4,	// (0x0002d197) cell_vkb_side_pane

0x7a27,	// (0x000269ca) cell_vkb_side_pane_g1

0x7e5c,	// (0x00026dff) cell_vkb_keypad_pane_ParamLimits

0x7e5c,	// (0x00026dff) cell_vkb_keypad_pane

0x7ed1,	// (0x00026e74) cell_vkb_keypad_pane_g1

0x0008,

0xfb3c,	// (0x0002eadf) bg_popup_fep_shadow_pane_g

0x7a27,	// (0x000269ca) cell_hwr_side_pane_g1

0x7a27,	// (0x000269ca) cell_hwr_side_pane_g2

0x7edb,	// (0x00026e7e) cell_vkb_keypad_pane_t1

0xe20a,	// (0x0002d1ad) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe20a,	// (0x0002d1ad) cell_vkb_keypad_bottom_left_pane

0xe21f,	// (0x0002d1c2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe21f,	// (0x0002d1c2) cell_vkb_keypad_bottom_right_pane

0x7a27,	// (0x000269ca) cell_vkb_keypad_bottom_left_pane_g1

0x7a27,	// (0x000269ca) cell_vkb_keypad_bottom_right_pane_g1

0x7f3f,	// (0x00026ee2) cell_vkb_keypad_number_pane_ParamLimits

0x7f3f,	// (0x00026ee2) cell_vkb_keypad_number_pane

0x7f5e,	// (0x00026f01) cell_vkb_keypad_number_pane_g1

0x7f68,	// (0x00026f0b) cell_vkb_keypad_number_pane_g2

0x7f71,	// (0x00026f14) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2e,	// (0x0002ead1) cell_vkb_keypad_number_pane_g

0x7edb,	// (0x00026e7e) cell_vkb_keypad_number_pane_t1

0x7f95,	// (0x00026f38) fep_vkb_candidate_pane_g1

0x0001,

0xfb29,	// (0x0002eacc) cell_hwr_side_pane_g

0x7fae,	// (0x00026f51) cell_hwr_side_pane_t1

0x2a76,	// (0x00021a19) cell_hwr_side_pane_t1_copy1

0x7ca5,	// (0x00026c48) cell_hwr_candidate_pane_g1

0x2a84,	// (0x00021a27) cell_hwr_candidate_pane_t1

0x7a27,	// (0x000269ca) cell_vkb_candidate_pane_g2

0x8034,	// (0x00026fd7) cell_vkb_candidate_pane_t1

0x2844,	// (0x000217e7) bg_popup_fep_shadow_pane_ParamLimits

0x2844,	// (0x000217e7) bg_popup_fep_shadow_pane

0xd86e,	// (0x0002c811) bg_fep_hwr_top_pane_g4

0x7aa7,	// (0x00026a4a) bg_hwr_side_pane_g1_ParamLimits

0x7aa7,	// (0x00026a4a) bg_hwr_side_pane_g1

0xca2a,	// (0x0002b9cd) cell_hwr_side_pane_ParamLimits

0xca2a,	// (0x0002b9cd) cell_hwr_side_pane

0x2997,	// (0x0002193a) fep_hwr_write_pane_g1_ParamLimits

0x2997,	// (0x0002193a) fep_hwr_write_pane_g1

0x29a4,	// (0x00021947) fep_hwr_write_pane_g2_ParamLimits

0x29a4,	// (0x00021947) fep_hwr_write_pane_g2

0x29b1,	// (0x00021954) fep_hwr_write_pane_g3_ParamLimits

0x29b1,	// (0x00021954) fep_hwr_write_pane_g3

0xca4a,	// (0x0002b9ed) fep_hwr_write_pane_g4_ParamLimits

0xca4a,	// (0x0002b9ed) fep_hwr_write_pane_g4

0x0005,

0xfafb,	// (0x0002ea9e) fep_hwr_write_pane_g_ParamLimits

0xfafb,	// (0x0002ea9e) fep_hwr_write_pane_g

0xd86e,	// (0x0002c811) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd86e,	// (0x0002c811) bg_fep_hwr_candidate_pane_g2

0x29d4,	// (0x00021977) cell_hwr_candidate_pane_ParamLimits

0x29d4,	// (0x00021977) cell_hwr_candidate_pane

0x2a16,	// (0x000219b9) fep_hwr_candidate_pane_g1_ParamLimits

0x7b07,	// (0x00026aaa) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7b07,	// (0x00026aaa) bg_popup_fep_shadow_pane_cp2

0x7ca5,	// (0x00026c48) fep_vkb_top_pane_g4_ParamLimits

0x7ca5,	// (0x00026c48) fep_vkb_top_pane_g4

0x7ceb,	// (0x00026c8e) fep_vkb_side_pane_g2_ParamLimits

0x7ceb,	// (0x00026c8e) fep_vkb_side_pane_g2

0xb9e3,	// (0x0002a986) list_setting_pane_t4_ParamLimits

0xb9e3,	// (0x0002a986) list_setting_pane_t4

0xba7d,	// (0x0002aa20) list_setting_number_pane_t5_ParamLimits

0xba7d,	// (0x0002aa20) list_setting_number_pane_t5

0x45cb,	// (0x0002356e) list_double_heading_pane_cp2_ParamLimits

0x45cb,	// (0x0002356e) list_double_heading_pane_cp2

0x3f23,	// (0x00022ec6) list_double_heading_pane_g1_cp2_ParamLimits

0x3f23,	// (0x00022ec6) list_double_heading_pane_g1_cp2

0x3f2f,	// (0x00022ed2) list_double_heading_pane_g2_cp2_ParamLimits

0x3f2f,	// (0x00022ed2) list_double_heading_pane_g2_cp2

0x8042,	// (0x00026fe5) list_double_heading_pane_t1_cp2_ParamLimits

0x8042,	// (0x00026fe5) list_double_heading_pane_t1_cp2

0x8058,	// (0x00026ffb) list_double_heading_pane_t2_cp2_ParamLimits

0x8058,	// (0x00026ffb) list_double_heading_pane_t2_cp2

0x359d,	// (0x00022540) aid_value_unit2

0x16cf,	// (0x00020672) popup_preview_fixed_window

0x3932,	// (0x000228d5) bg_popup_preview_window_pane_cp02

0x806a,	// (0x0002700d) list_preview_fixed_pane

0x80b0,	// (0x00027053) list_empty_pane_fp_ParamLimits

0x80b0,	// (0x00027053) list_empty_pane_fp

0x80b0,	// (0x00027053) list_single_cale_day_pane_fp_ParamLimits

0x80b0,	// (0x00027053) list_single_cale_day_pane_fp

0x80b0,	// (0x00027053) list_single_graphic_heading_pane_fp_ParamLimits

0x80b0,	// (0x00027053) list_single_graphic_heading_pane_fp

0x80b0,	// (0x00027053) list_single_graphic_pane_fp_ParamLimits

0x80b0,	// (0x00027053) list_single_graphic_pane_fp

0x80b0,	// (0x00027053) list_single_heading_pane_fp_ParamLimits

0x80b0,	// (0x00027053) list_single_heading_pane_fp

0x80b0,	// (0x00027053) list_single_pane_fp_ParamLimits

0x80b0,	// (0x00027053) list_single_pane_fp

0x80c5,	// (0x00027068) list_single_pane_fp_g1_ParamLimits

0x80c5,	// (0x00027068) list_single_pane_fp_g1

0x1067,	// (0x0002000a) list_single_pane_fp_g2_ParamLimits

0x1067,	// (0x0002000a) list_single_pane_fp_g2

0x1073,	// (0x00020016) list_single_pane_fp_g3_ParamLimits

0x1073,	// (0x00020016) list_single_pane_fp_g3

0x80d1,	// (0x00027074) list_single_pane_fp_g4_ParamLimits

0x80d1,	// (0x00027074) list_single_pane_fp_g4

0x0003,

0xfb5d,	// (0x0002eb00) list_single_pane_fp_g_ParamLimits

0xfb5d,	// (0x0002eb00) list_single_pane_fp_g

0x1087,	// (0x0002002a) list_single_pane_fp_t1_ParamLimits

0x1087,	// (0x0002002a) list_single_pane_fp_t1

0x109e,	// (0x00020041) list_single_graphic_pane_fp_g1_ParamLimits

0x109e,	// (0x00020041) list_single_graphic_pane_fp_g1

0x80c5,	// (0x00027068) list_single_graphic_pane_fp_g2_ParamLimits

0x80c5,	// (0x00027068) list_single_graphic_pane_fp_g2

0x1067,	// (0x0002000a) list_single_graphic_pane_fp_g3_ParamLimits

0x1067,	// (0x0002000a) list_single_graphic_pane_fp_g3

0x1073,	// (0x00020016) list_single_graphic_pane_fp_g4_ParamLimits

0x1073,	// (0x00020016) list_single_graphic_pane_fp_g4

0x80d1,	// (0x00027074) list_single_graphic_pane_fp_g5_ParamLimits

0x80d1,	// (0x00027074) list_single_graphic_pane_fp_g5

0x0004,

0xfb66,	// (0x0002eb09) list_single_graphic_pane_fp_g_ParamLimits

0xfb66,	// (0x0002eb09) list_single_graphic_pane_fp_g

0x10aa,	// (0x0002004d) list_single_graphic_pane_fp_t1_ParamLimits

0x10aa,	// (0x0002004d) list_single_graphic_pane_fp_t1

0x109e,	// (0x00020041) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x109e,	// (0x00020041) list_single_graphic_heading_pane_fp_g1

0x80c5,	// (0x00027068) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x80c5,	// (0x00027068) list_single_graphic_heading_pane_fp_g2

0x1067,	// (0x0002000a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1067,	// (0x0002000a) list_single_graphic_heading_pane_fp_g3

0x1073,	// (0x00020016) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1073,	// (0x00020016) list_single_graphic_heading_pane_fp_g4

0x80d1,	// (0x00027074) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x80d1,	// (0x00027074) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb66,	// (0x0002eb09) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb66,	// (0x0002eb09) list_single_graphic_heading_pane_fp_g

0x10c0,	// (0x00020063) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x10c0,	// (0x00020063) list_single_graphic_heading_pane_fp_t1

0x10d6,	// (0x00020079) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x10d6,	// (0x00020079) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb71,	// (0x0002eb14) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb71,	// (0x0002eb14) list_single_graphic_heading_pane_fp_t

0x10e8,	// (0x0002008b) list_single_cale_day_pane_fp_g1_ParamLimits

0x10e8,	// (0x0002008b) list_single_cale_day_pane_fp_g1

0x80dd,	// (0x00027080) list_single_cale_day_pane_fp_g2_ParamLimits

0x80dd,	// (0x00027080) list_single_cale_day_pane_fp_g2

0x1120,	// (0x000200c3) list_single_cale_day_pane_fp_g3_ParamLimits

0x1120,	// (0x000200c3) list_single_cale_day_pane_fp_g3

0x1148,	// (0x000200eb) list_single_cale_day_pane_fp_g4_ParamLimits

0x1148,	// (0x000200eb) list_single_cale_day_pane_fp_g4

0x116c,	// (0x0002010f) list_single_cale_day_pane_fp_g5_ParamLimits

0x116c,	// (0x0002010f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb76,	// (0x0002eb19) list_single_cale_day_pane_fp_g_ParamLimits

0xfb76,	// (0x0002eb19) list_single_cale_day_pane_fp_g

0x1190,	// (0x00020133) list_single_cale_day_pane_fp_t1_ParamLimits

0x1190,	// (0x00020133) list_single_cale_day_pane_fp_t1

0x11b6,	// (0x00020159) list_single_cale_day_pane_fp_t2_ParamLimits

0x11b6,	// (0x00020159) list_single_cale_day_pane_fp_t2

0x11cf,	// (0x00020172) list_single_cale_day_pane_fp_t3_ParamLimits

0x11cf,	// (0x00020172) list_single_cale_day_pane_fp_t3

0x0002,

0xfb81,	// (0x0002eb24) list_single_cale_day_pane_fp_t_ParamLimits

0xfb81,	// (0x0002eb24) list_single_cale_day_pane_fp_t

0x80c5,	// (0x00027068) list_empty_pane_fp_g1_ParamLimits

0x80c5,	// (0x00027068) list_empty_pane_fp_g1

0x11e8,	// (0x0002018b) list_empty_pane_fp_t1

0x11f6,	// (0x00020199) list_empty_pane_fp_t2

0x0001,

0xfb88,	// (0x0002eb2b) list_empty_pane_fp_t

0x80c5,	// (0x00027068) list_single_heading_pane_fp_g1_ParamLimits

0x80c5,	// (0x00027068) list_single_heading_pane_fp_g1

0x1067,	// (0x0002000a) list_single_heading_pane_fp_g2_ParamLimits

0x1067,	// (0x0002000a) list_single_heading_pane_fp_g2

0x1073,	// (0x00020016) list_single_heading_pane_fp_g3_ParamLimits

0x1073,	// (0x00020016) list_single_heading_pane_fp_g3

0x0002,

0xfb8d,	// (0x0002eb30) list_single_heading_pane_fp_g_ParamLimits

0xfb8d,	// (0x0002eb30) list_single_heading_pane_fp_g

0x1204,	// (0x000201a7) list_single_heading_pane_fp_t1_ParamLimits

0x1204,	// (0x000201a7) list_single_heading_pane_fp_t1

0x1216,	// (0x000201b9) list_single_heading_pane_fp_t2_ParamLimits

0x1216,	// (0x000201b9) list_single_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0002eb37) list_single_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0002eb37) list_single_heading_pane_fp_t

0x4117,	// (0x000230ba) aid_size_cell_fast

0x38a2,	// (0x00022845) soft_indicator_pane_cp1_t1

0x4154,	// (0x000230f7) cell_app_pane_cp2_ParamLimits

0x4154,	// (0x000230f7) cell_app_pane_cp2

0x2866,	// (0x00021809) fep_hwr_candidate_drop_down_list_pane

0xd87c,	// (0x0002c81f) fep_hwr_candidate_pane_g3_ParamLimits

0xd87c,	// (0x0002c81f) fep_hwr_candidate_pane_g3

0xd889,	// (0x0002c82c) fep_hwr_candidate_pane_g4_ParamLimits

0xd889,	// (0x0002c82c) fep_hwr_candidate_pane_g4

0x0002,

0xfb08,	// (0x0002eaab) fep_hwr_candidate_pane_g_ParamLimits

0xfb08,	// (0x0002eaab) fep_hwr_candidate_pane_g

0x7b8c,	// (0x00026b2f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7b8c,	// (0x00026b2f) fep_vkb_candidate_drop_down_list_pane

0x7f9d,	// (0x00026f40) fep_vkb_candidate_pane_g3

0x7fa5,	// (0x00026f48) fep_vkb_candidate_pane_g4

0x0002,

0xfb35,	// (0x0002ead8) fep_vkb_candidate_pane_g

0x7ca5,	// (0x00026c48) cell_hwr_candidate_pane_g1_ParamLimits

0x7fbc,	// (0x00026f5f) cell_hwr_candidate_pane_g3_ParamLimits

0x7fbc,	// (0x00026f5f) cell_hwr_candidate_pane_g3

0x7fdd,	// (0x00026f80) cell_hwr_candidate_pane_g4_ParamLimits

0x7fdd,	// (0x00026f80) cell_hwr_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0002eaf2) cell_hwr_candidate_pane_g_ParamLimits

0xfb4f,	// (0x0002eaf2) cell_hwr_candidate_pane_g

0x7ffe,	// (0x00026fa1) cell_vkb_candidate_pane_g3_ParamLimits

0x7ffe,	// (0x00026fa1) cell_vkb_candidate_pane_g3

0x8019,	// (0x00026fbc) cell_vkb_candidate_pane_g4_ParamLimits

0x8019,	// (0x00026fbc) cell_vkb_candidate_pane_g4

0x80e9,	// (0x0002708c) cell_app_pane_cp2_g1_ParamLimits

0x80e9,	// (0x0002708c) cell_app_pane_cp2_g1

0x8107,	// (0x000270aa) cell_app_pane_cp2_g2_ParamLimits

0x8107,	// (0x000270aa) cell_app_pane_cp2_g2

0x0001,

0xfb99,	// (0x0002eb3c) cell_app_pane_cp2_g_ParamLimits

0xfb99,	// (0x0002eb3c) cell_app_pane_cp2_g

0x8113,	// (0x000270b6) cell_app_pane_cp2_t1_ParamLimits

0x8113,	// (0x000270b6) cell_app_pane_cp2_t1

0x3f15,	// (0x00022eb8) grid_highlight_pane_cp1_ParamLimits

0x3f15,	// (0x00022eb8) grid_highlight_pane_cp1

0x2aa2,	// (0x00021a45) cell_hwr_candidate_pane_cp1_ParamLimits

0x2aa2,	// (0x00021a45) cell_hwr_candidate_pane_cp1

0x7ca5,	// (0x00026c48) fep_hwr_candidate_drop_down_list_pane_g1

0x8125,	// (0x000270c8) fep_hwr_candidate_drop_down_list_pane_g2

0x8132,	// (0x000270d5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9e,	// (0x0002eb41) fep_hwr_candidate_drop_down_list_pane_g

0x2ac1,	// (0x00021a64) fep_hwr_candidate_drop_down_list_scroll_pane

0x2aca,	// (0x00021a6d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2aca,	// (0x00021a6d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2ad7,	// (0x00021a7a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2ad7,	// (0x00021a7a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2ae4,	// (0x00021a87) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2ae4,	// (0x00021a87) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7ffe,	// (0x00026fa1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ffe,	// (0x00026fa1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8019,	// (0x00026fbc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8019,	// (0x00026fbc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2af1,	// (0x00021a94) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2af1,	// (0x00021a94) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2b0c,	// (0x00021aaf) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2b0c,	// (0x00021aaf) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2b27,	// (0x00021aca) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2b27,	// (0x00021aca) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba5,	// (0x0002eb48) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba5,	// (0x0002eb48) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x813f,	// (0x000270e2) cell_vkb_candidate_pane_cp1_ParamLimits

0x813f,	// (0x000270e2) cell_vkb_candidate_pane_cp1

0x7ca5,	// (0x00026c48) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7ca5,	// (0x00026c48) fep_vkb_candidate_drop_down_list_pane_g1

0x8125,	// (0x000270c8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8125,	// (0x000270c8) fep_vkb_candidate_drop_down_list_pane_g2

0x8132,	// (0x000270d5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8132,	// (0x000270d5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9e,	// (0x0002eb41) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9e,	// (0x0002eb41) fep_vkb_candidate_drop_down_list_pane_g

0x815f,	// (0x00027102) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x815f,	// (0x00027102) fep_vkb_candidate_drop_down_list_scroll_pane

0x816c,	// (0x0002710f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x816c,	// (0x0002710f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8179,	// (0x0002711c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8179,	// (0x0002711c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8185,	// (0x00027128) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8185,	// (0x00027128) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7fbc,	// (0x00026f5f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7fbc,	// (0x00026f5f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7fdd,	// (0x00026f80) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7fdd,	// (0x00026f80) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8191,	// (0x00027134) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8191,	// (0x00027134) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x81b2,	// (0x00027155) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x81b2,	// (0x00027155) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x81d3,	// (0x00027176) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x81d3,	// (0x00027176) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x0002eb59) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x0002eb59) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcf8c,	// (0x0002bf2f) title_pane_g1_ParamLimits

0xcf9f,	// (0x0002bf42) title_pane_g2_ParamLimits

0xf554,	// (0x0002e4f7) title_pane_g_ParamLimits

0x4584,	// (0x00023527) aid_call2_pane

0x458c,	// (0x0002352f) aid_call_pane

0x4594,	// (0x00023537) popup_clock_analogue_window_g1

0x4594,	// (0x00023537) popup_clock_analogue_window_g2

0x1a40,	// (0x000209e3) popup_clock_analogue_window_g3

0x1a49,	// (0x000209ec) popup_clock_analogue_window_g4

0x35bf,	// (0x00022562) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0002e6a1) popup_clock_analogue_window_g

0x1a51,	// (0x000209f4) popup_clock_analogue_window_t1

0x1a5f,	// (0x00020a02) clock_digital_number_pane_ParamLimits

0x1a5f,	// (0x00020a02) clock_digital_number_pane

0x1a6b,	// (0x00020a0e) clock_digital_number_pane_cp02_ParamLimits

0x1a6b,	// (0x00020a0e) clock_digital_number_pane_cp02

0x1a77,	// (0x00020a1a) clock_digital_number_pane_cp03_ParamLimits

0x1a77,	// (0x00020a1a) clock_digital_number_pane_cp03

0x1a83,	// (0x00020a26) clock_digital_number_pane_cp04_ParamLimits

0x1a83,	// (0x00020a26) clock_digital_number_pane_cp04

0x1a8f,	// (0x00020a32) clock_digital_separator_pane_ParamLimits

0x1a8f,	// (0x00020a32) clock_digital_separator_pane

0x1a9b,	// (0x00020a3e) popup_clock_digital_window_t1_ParamLimits

0x1a9b,	// (0x00020a3e) popup_clock_digital_window_t1

0x35bf,	// (0x00022562) clock_digital_number_pane_g1

0x35bf,	// (0x00022562) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0002e6ac) clock_digital_number_pane_g

0x35bf,	// (0x00022562) clock_digital_separator_pane_g1

0x35bf,	// (0x00022562) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0002e6ac) clock_digital_separator_pane_g

0xd59f,	// (0x0002c542) aid_fill_nsta_ParamLimits

0xd6d5,	// (0x0002c678) indicator_nsta_pane_ParamLimits

0x51bd,	// (0x00024160) popup_clock_analogue_window

0x51bd,	// (0x00024160) popup_clock_digital_window

0x40d8,	// (0x0002307b) grid_indicator_nsta_pane_ParamLimits

0x741c,	// (0x000263bf) clock_nsta_pane_t2

0x0001,

0xfa88,	// (0x0002ea2b) clock_nsta_pane_t

0x1a04,	// (0x000209a7) aid_size_max_handle

0xc160,	// (0x0002b103) aid_size_min_handle

0x4b9c,	// (0x00023b3f) editor_scroll_pane

0x81ee,	// (0x00027191) ex_editor_pane

0x4085,	// (0x00023028) scroll_pane_cp13

0x3eb4,	// (0x00022e57) scroll_pane_cp14

0x45c3,	// (0x00023566) scroll_pane_cp36

0xd412,	// (0x0002c3b5) list_single_graphic_hl_pane_cp2_ParamLimits

0xd412,	// (0x0002c3b5) list_single_graphic_hl_pane_cp2

0xbcfd,	// (0x0002aca0) list_single_graphic_hl_pane_ParamLimits

0xbcfd,	// (0x0002aca0) list_single_graphic_hl_pane

0x122c,	// (0x000201cf) aid_size_min_hl_cp1

0x81f6,	// (0x00027199) list_highlight_pane_cp34_ParamLimits

0x81f6,	// (0x00027199) list_highlight_pane_cp34

0x8207,	// (0x000271aa) list_single_graphic_hl_pane_g1_ParamLimits

0x8207,	// (0x000271aa) list_single_graphic_hl_pane_g1

0xbd57,	// (0x0002acfa) list_single_graphic_hl_pane_g2_ParamLimits

0xbd57,	// (0x0002acfa) list_single_graphic_hl_pane_g2

0xbd57,	// (0x0002acfa) list_single_graphic_hl_pane_g3_ParamLimits

0xbd57,	// (0x0002acfa) list_single_graphic_hl_pane_g3

0xbd63,	// (0x0002ad06) list_single_graphic_hl_pane_g4_ParamLimits

0xbd63,	// (0x0002ad06) list_single_graphic_hl_pane_g4

0xbd6f,	// (0x0002ad12) list_single_graphic_hl_pane_g5_ParamLimits

0xbd6f,	// (0x0002ad12) list_single_graphic_hl_pane_g5

0x0004,

0xfbc7,	// (0x0002eb6a) list_single_graphic_hl_pane_g_ParamLimits

0xfbc7,	// (0x0002eb6a) list_single_graphic_hl_pane_g

0xbd83,	// (0x0002ad26) list_single_graphic_hl_pane_t1_ParamLimits

0xbd83,	// (0x0002ad26) list_single_graphic_hl_pane_t1

0x8214,	// (0x000271b7) aid_size_min_hl_cp2

0x821d,	// (0x000271c0) list_highlight_pane_cp34_cp2_ParamLimits

0x821d,	// (0x000271c0) list_highlight_pane_cp34_cp2

0x8207,	// (0x000271aa) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8207,	// (0x000271aa) list_single_graphic_hl_pane_g1_cp2

0x822a,	// (0x000271cd) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x822a,	// (0x000271cd) list_single_graphic_hl_pane_g2_cp2

0x8236,	// (0x000271d9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8236,	// (0x000271d9) list_single_graphic_hl_pane_g3_cp2

0x709e,	// (0x00026041) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x709e,	// (0x00026041) list_single_graphic_hl_pane_g4_cp2

0x8244,	// (0x000271e7) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8244,	// (0x000271e7) list_single_graphic_hl_pane_g5_cp2

0xc1bb,	// (0x0002b15e) control_pane_g4_ParamLimits

0xc1bb,	// (0x0002b15e) control_pane_g4

0x4edc,	// (0x00023e7f) bg_popup_sub_pane_cp10_ParamLimits

0x7a31,	// (0x000269d4) list_choice_list_pane_ParamLimits

0x7a40,	// (0x000269e3) scroll_pane_cp23

0x3932,	// (0x000228d5) bg_popup_preview_window_pane_cp02_ParamLimits

0x806a,	// (0x0002700d) list_preview_fixed_pane_ParamLimits

0x8080,	// (0x00027023) list_preview_fixed_pane_cp_ParamLimits

0x8080,	// (0x00027023) list_preview_fixed_pane_cp

0x808c,	// (0x0002702f) popup_preview_fixed_window_g1_ParamLimits

0x808c,	// (0x0002702f) popup_preview_fixed_window_g1

0x8098,	// (0x0002703b) popup_preview_fixed_window_g2_ParamLimits

0x8098,	// (0x0002703b) popup_preview_fixed_window_g2

0x0002,

0xfb56,	// (0x0002eaf9) popup_preview_fixed_window_g_ParamLimits

0xfb56,	// (0x0002eaf9) popup_preview_fixed_window_g

0x1978,	// (0x0002091b) aid_navi_side_left_pane_ParamLimits

0x198d,	// (0x00020930) aid_navi_side_right_pane_ParamLimits

0x19a5,	// (0x00020948) navi_icon_pane_stacon_ParamLimits

0x19b9,	// (0x0002095c) navi_navi_pane_stacon_ParamLimits

0x19a5,	// (0x00020948) navi_text_pane_stacon_ParamLimits

0x35b5,	// (0x00022558) main_text_info_pane

0x826e,	// (0x00027211) listscroll_text_info_pane

0x8276,	// (0x00027219) list_text_info_pane_ParamLimits

0x8276,	// (0x00027219) list_text_info_pane

0x8285,	// (0x00027228) scroll_pane_cp24_ParamLimits

0x8285,	// (0x00027228) scroll_pane_cp24

0xe23a,	// (0x0002d1dd) list_text_info_pane_t1_ParamLimits

0xe23a,	// (0x0002d1dd) list_text_info_pane_t1

0xc316,	// (0x0002b2b9) popup_fast_swap2_window_ParamLimits

0xc316,	// (0x0002b2b9) popup_fast_swap2_window

0x82d4,	// (0x00027277) aid_size_cell_fast2

0x35b5,	// (0x00022558) bg_popup_window_pane_cp17

0x5850,	// (0x000247f3) heading_pane_cp2

0x3b7e,	// (0x00022b21) listscroll_fast2_pane

0x82de,	// (0x00027281) grid_fast2_pane

0x82e8,	// (0x0002728b) listscroll_fast2_pane_g1

0x82f0,	// (0x00027293) listscroll_fast2_pane_g2

0x0001,

0xfbd2,	// (0x0002eb75) listscroll_fast2_pane_g

0x4085,	// (0x00023028) scroll_pane_cp26

0x82fa,	// (0x0002729d) cell_fast2_pane_ParamLimits

0x82fa,	// (0x0002729d) cell_fast2_pane

0x830f,	// (0x000272b2) cell_fast2_pane_g1

0x8318,	// (0x000272bb) cell_fast2_pane_g2

0x8321,	// (0x000272c4) cell_fast2_pane_g3

0x0002,

0xfbd7,	// (0x0002eb7a) cell_fast2_pane_g

0x3c71,	// (0x00022c14) grid_highlight_pane_cp9

0x3c86,	// (0x00022c29) main_eswt_pane_ParamLimits

0x3c86,	// (0x00022c29) main_eswt_pane

0x829a,	// (0x0002723d) list_single_text_info_pane

0x8329,	// (0x000272cc) eswt_ctrl_button_pane

0x8329,	// (0x000272cc) eswt_ctrl_canvas_pane

0x8331,	// (0x000272d4) eswt_ctrl_combo_pane

0x8329,	// (0x000272cc) eswt_ctrl_default_pane

0x8329,	// (0x000272cc) eswt_ctrl_label_pane

0x8339,	// (0x000272dc) eswt_ctrl_wait_pane

0x8341,	// (0x000272e4) eswt_shell_pane

0x35b5,	// (0x00022558) listscroll_eswt_app_pane

0x8361,	// (0x00027304) popup_eswt_tasktip_window_ParamLimits

0x8361,	// (0x00027304) popup_eswt_tasktip_window

0x545a,	// (0x000243fd) bg_popup_window_pane_cp18

0x8372,	// (0x00027315) eswt_control_pane_g1_ParamLimits

0x8372,	// (0x00027315) eswt_control_pane_g1

0x837f,	// (0x00027322) eswt_control_pane_g2_ParamLimits

0x837f,	// (0x00027322) eswt_control_pane_g2

0x838c,	// (0x0002732f) eswt_control_pane_g3_ParamLimits

0x838c,	// (0x0002732f) eswt_control_pane_g3

0x8399,	// (0x0002733c) eswt_control_pane_g4_ParamLimits

0x8399,	// (0x0002733c) eswt_control_pane_g4

0x0003,

0xfbde,	// (0x0002eb81) eswt_control_pane_g_ParamLimits

0xfbde,	// (0x0002eb81) eswt_control_pane_g

0x3f15,	// (0x00022eb8) bg_button_pane_ParamLimits

0x3f15,	// (0x00022eb8) bg_button_pane

0x3c86,	// (0x00022c29) common_borders_pane_copy2_ParamLimits

0x3c86,	// (0x00022c29) common_borders_pane_copy2

0x83a6,	// (0x00027349) control_button_pane_g1_ParamLimits

0x83a6,	// (0x00027349) control_button_pane_g1

0x83b2,	// (0x00027355) control_button_pane_g2_ParamLimits

0x83b2,	// (0x00027355) control_button_pane_g2

0x83be,	// (0x00027361) control_button_pane_g3_ParamLimits

0x83be,	// (0x00027361) control_button_pane_g3

0x0002,

0xfbe7,	// (0x0002eb8a) control_button_pane_g_ParamLimits

0xfbe7,	// (0x0002eb8a) control_button_pane_g

0x83d2,	// (0x00027375) control_button_pane_t1

0x83e0,	// (0x00027383) control_button_pane_t2

0x0001,

0xfbee,	// (0x0002eb91) control_button_pane_t

0x53e6,	// (0x00024389) bg_button_pane_g1

0x53ee,	// (0x00024391) bg_button_pane_g2

0x53f6,	// (0x00024399) bg_button_pane_g3

0x53fe,	// (0x000243a1) bg_button_pane_g4

0x5406,	// (0x000243a9) bg_button_pane_g5

0x540e,	// (0x000243b1) bg_button_pane_g6

0x5416,	// (0x000243b9) bg_button_pane_g7

0x541e,	// (0x000243c1) bg_button_pane_g8

0x5426,	// (0x000243c9) bg_button_pane_g9

0x0008,

0xf860,	// (0x0002e803) bg_button_pane_g

0x79ec,	// (0x0002698f) common_borders_pane_ParamLimits

0x79ec,	// (0x0002698f) common_borders_pane

0x8372,	// (0x00027315) eswt_control_pane_g1_copy1_ParamLimits

0x8372,	// (0x00027315) eswt_control_pane_g1_copy1

0x837f,	// (0x00027322) eswt_control_pane_g2_copy1_ParamLimits

0x837f,	// (0x00027322) eswt_control_pane_g2_copy1

0x838c,	// (0x0002732f) eswt_control_pane_g3_copy1_ParamLimits

0x838c,	// (0x0002732f) eswt_control_pane_g3_copy1

0x8399,	// (0x0002733c) eswt_control_pane_g4_copy1_ParamLimits

0x8399,	// (0x0002733c) eswt_control_pane_g4_copy1

0x7a27,	// (0x000269ca) bg_eswt_ctrl_canvas_pane_g1

0x79ec,	// (0x0002698f) common_borders_pane_cp2_ParamLimits

0x79ec,	// (0x0002698f) common_borders_pane_cp2

0x79ec,	// (0x0002698f) common_borders_pane_cp3_ParamLimits

0x79ec,	// (0x0002698f) common_borders_pane_cp3

0x83ee,	// (0x00027391) separator_horizontal_pane

0x83f6,	// (0x00027399) separator_vertical_pane

0x8372,	// (0x00027315) eswt_control_pane_g1_copy2_ParamLimits

0x8372,	// (0x00027315) eswt_control_pane_g1_copy2

0x837f,	// (0x00027322) eswt_control_pane_g2_copy2_ParamLimits

0x837f,	// (0x00027322) eswt_control_pane_g2_copy2

0x838c,	// (0x0002732f) eswt_control_pane_g3_copy2_ParamLimits

0x838c,	// (0x0002732f) eswt_control_pane_g3_copy2

0x8399,	// (0x0002733c) eswt_control_pane_g4_copy2_ParamLimits

0x8399,	// (0x0002733c) eswt_control_pane_g4_copy2

0x35b5,	// (0x00022558) common_borders_pane_cp4

0x83ff,	// (0x000273a2) separator_horizontal_pane_g1

0x8408,	// (0x000273ab) separator_horizontal_pane_g2

0x8411,	// (0x000273b4) separator_horizontal_pane_g3

0x0002,

0xfbf3,	// (0x0002eb96) separator_horizontal_pane_g

0x8372,	// (0x00027315) eswt_control_pane_g1_copy3_ParamLimits

0x8372,	// (0x00027315) eswt_control_pane_g1_copy3

0x837f,	// (0x00027322) eswt_control_pane_g2_copy3_ParamLimits

0x837f,	// (0x00027322) eswt_control_pane_g2_copy3

0x838c,	// (0x0002732f) eswt_control_pane_g3_copy3_ParamLimits

0x838c,	// (0x0002732f) eswt_control_pane_g3_copy3

0x8399,	// (0x0002733c) eswt_control_pane_g4_copy3_ParamLimits

0x8399,	// (0x0002733c) eswt_control_pane_g4_copy3

0x35b5,	// (0x00022558) common_borders_pane_cp5

0x841a,	// (0x000273bd) separator_vertical_pane_g1

0x8423,	// (0x000273c6) separator_vertical_pane_g2

0x842c,	// (0x000273cf) separator_vertical_pane_g3

0x0002,

0xfbfa,	// (0x0002eb9d) separator_vertical_pane_g

0x8372,	// (0x00027315) eswt_control_pane_g1_copy4_ParamLimits

0x8372,	// (0x00027315) eswt_control_pane_g1_copy4

0x837f,	// (0x00027322) eswt_control_pane_g2_copy4_ParamLimits

0x837f,	// (0x00027322) eswt_control_pane_g2_copy4

0x838c,	// (0x0002732f) eswt_control_pane_g3_copy4_ParamLimits

0x838c,	// (0x0002732f) eswt_control_pane_g3_copy4

0x8399,	// (0x0002733c) eswt_control_pane_g4_copy4_ParamLimits

0x8399,	// (0x0002733c) eswt_control_pane_g4_copy4

0xe255,	// (0x0002d1f8) eswt_ctrl_combo_button_pane

0xe25d,	// (0x0002d200) eswt_ctrl_input_pane

0xe265,	// (0x0002d208) popup_choice_list_window_cp70

0xe26d,	// (0x0002d210) eswt_ctrl_input_pane_t1

0x35b5,	// (0x00022558) input_focus_pane_cp70

0x79ec,	// (0x0002698f) bg_button_pane_cp70_ParamLimits

0x79ec,	// (0x0002698f) bg_button_pane_cp70

0xe27b,	// (0x0002d21e) eswt_ctrl_combo_button_pane_g1

0x8463,	// (0x00027406) wait_bar_pane_cp70

0x545a,	// (0x000243fd) bg_popup_window_pane_cp70_ParamLimits

0x545a,	// (0x000243fd) bg_popup_window_pane_cp70

0x846b,	// (0x0002740e) popup_eswt_tasktip_window_t1

0x8481,	// (0x00027424) wait_bar_pane_cp71_ParamLimits

0x8481,	// (0x00027424) wait_bar_pane_cp71

0x848d,	// (0x00027430) grid_eswt_app_pane

0x43a6,	// (0x00023349) scroll_pane_cp70

0xe283,	// (0x0002d226) cell_eswt_app_pane_ParamLimits

0xe283,	// (0x0002d226) cell_eswt_app_pane

0xe2ad,	// (0x0002d250) cell_eswt_app_pane_g1_ParamLimits

0xe2ad,	// (0x0002d250) cell_eswt_app_pane_g1

0xe2dc,	// (0x0002d27f) cell_eswt_app_pane_g2_ParamLimits

0xe2dc,	// (0x0002d27f) cell_eswt_app_pane_g2

0x0001,

0xfc01,	// (0x0002eba4) cell_eswt_app_pane_g_ParamLimits

0xfc01,	// (0x0002eba4) cell_eswt_app_pane_g

0xe305,	// (0x0002d2a8) cell_eswt_app_pane_t1_ParamLimits

0xe305,	// (0x0002d2a8) cell_eswt_app_pane_t1

0x8550,	// (0x000274f3) grid_highlight_pane_cp70_ParamLimits

0x8550,	// (0x000274f3) grid_highlight_pane_cp70

0x4a71,	// (0x00023a14) set_content_pane_g1

0x4e3c,	// (0x00023ddf) status_small_volume_pane

0x2b42,	// (0x00021ae5) status_small_volume_pane_g1

0x2b4a,	// (0x00021aed) volume_small2_pane

0x2b53,	// (0x00021af6) volume_small2_pane_g1

0x2b5c,	// (0x00021aff) volume_small2_pane_g2

0x2b65,	// (0x00021b08) volume_small2_pane_g3

0x2b6e,	// (0x00021b11) volume_small2_pane_g4

0x2b77,	// (0x00021b1a) volume_small2_pane_g5

0x2b80,	// (0x00021b23) volume_small2_pane_g6

0x2b89,	// (0x00021b2c) volume_small2_pane_g7

0x2b92,	// (0x00021b35) volume_small2_pane_g8

0x2b9b,	// (0x00021b3e) volume_small2_pane_g9

0x2ba4,	// (0x00021b47) volume_small2_pane_g10

0x0009,

0xfc06,	// (0x0002eba9) volume_small2_pane_g

0x7ded,	// (0x00026d90) fep_vkb_top_text_pane_g1_ParamLimits

0xe1e2,	// (0x0002d185) fep_vkb_top_text_pane_t1_ParamLimits

0x80a4,	// (0x00027047) popup_preview_fixed_window_g3_ParamLimits

0x80a4,	// (0x00027047) popup_preview_fixed_window_g3

0xc933,	// (0x0002b8d6) popup_toolbar_trans_pane

0xdc0a,	// (0x0002cbad) aid_height_set_list_ParamLimits

0x6804,	// (0x000257a7) aid_size_parent_ParamLimits

0x4edc,	// (0x00023e7f) list_highlight_pane_cp2_ParamLimits

0x4a71,	// (0x00023a14) set_content_pane_g1_ParamLimits

0xbd0f,	// (0x0002acb2) list_single_image_pane_ParamLimits

0xbd0f,	// (0x0002acb2) list_single_image_pane

0xe337,	// (0x0002d2da) aid_size_cell_image_ParamLimits

0xe337,	// (0x0002d2da) aid_size_cell_image

0xe344,	// (0x0002d2e7) grid_single_image_pane_ParamLimits

0xe344,	// (0x0002d2e7) grid_single_image_pane

0x54a6,	// (0x00024449) list_single_image_pane_g1_ParamLimits

0x54a6,	// (0x00024449) list_single_image_pane_g1

0x8575,	// (0x00027518) list_single_image_pane_g2_ParamLimits

0x8575,	// (0x00027518) list_single_image_pane_g2

0x0001,

0xfc1b,	// (0x0002ebbe) list_single_image_pane_g_ParamLimits

0xfc1b,	// (0x0002ebbe) list_single_image_pane_g

0x8589,	// (0x0002752c) list_single_image_pane_t1_ParamLimits

0x8589,	// (0x0002752c) list_single_image_pane_t1

0xe352,	// (0x0002d2f5) cell_image_list_pane_ParamLimits

0xe352,	// (0x0002d2f5) cell_image_list_pane

0xe368,	// (0x0002d30b) cell_image_list_pane_g1

0xe371,	// (0x0002d314) cell_image_list_pane_g2

0x0001,

0xfc20,	// (0x0002ebc3) cell_image_list_pane_g

0x85c5,	// (0x00027568) aid_size_cell_tb_trans_pane

0x3f15,	// (0x00022eb8) bg_tb_trans_pane

0x85d7,	// (0x0002757a) grid_tb_trans_pane

0x53e6,	// (0x00024389) bg_tb_trans_pane_g1

0x53ee,	// (0x00024391) bg_tb_trans_pane_g2

0x53f6,	// (0x00024399) bg_tb_trans_pane_g3

0x53fe,	// (0x000243a1) bg_tb_trans_pane_g4

0x5406,	// (0x000243a9) bg_tb_trans_pane_g5

0x541e,	// (0x000243c1) bg_tb_trans_pane_g6

0x5426,	// (0x000243c9) bg_tb_trans_pane_g7

0x540e,	// (0x000243b1) bg_tb_trans_pane_g8

0x5416,	// (0x000243b9) bg_tb_trans_pane_g9

0x0008,

0xfc25,	// (0x0002ebc8) bg_tb_trans_pane_g

0x85eb,	// (0x0002758e) cell_toolbar_trans_pane_ParamLimits

0x85eb,	// (0x0002758e) cell_toolbar_trans_pane

0x7a27,	// (0x000269ca) cell_toolbar_trans_pane_g1

0xdfcb,	// (0x0002cf6e) list_form2_midp_pane_t1

0xdfd9,	// (0x0002cf7c) list_form2_midp_pane_t2

0x0001,

0xface,	// (0x0002ea71) list_form2_midp_pane_t

0x760d,	// (0x000265b0) scroll_pane_cp51_ParamLimits

0x77c9,	// (0x0002676c) form2_midp_wait_pane_g1

0x77d2,	// (0x00026775) form2_midp_wait_pane_g2

0x77db,	// (0x0002677e) form2_midp_wait_pane_g3

0x0002,

0xfae3,	// (0x0002ea86) form2_midp_wait_pane_g

0x36a9,	// (0x0002264c) list_highlight_pane_cp21_ParamLimits

0x7832,	// (0x000267d5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7841,	// (0x000267e4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x69bc,	// (0x0002595f) list_single_2graphic_im_pane_ParamLimits

0x69bc,	// (0x0002595f) list_single_2graphic_im_pane

0xe37a,	// (0x0002d31d) list_single_2graphic_im_pane_g1_ParamLimits

0xe37a,	// (0x0002d31d) list_single_2graphic_im_pane_g1

0xe38b,	// (0x0002d32e) list_single_2graphic_im_pane_g2_ParamLimits

0xe38b,	// (0x0002d32e) list_single_2graphic_im_pane_g2

0xe397,	// (0x0002d33a) list_single_2graphic_im_pane_g3_ParamLimits

0xe397,	// (0x0002d33a) list_single_2graphic_im_pane_g3

0x0003,

0xfc38,	// (0x0002ebdb) list_single_2graphic_im_pane_g_ParamLimits

0xfc38,	// (0x0002ebdb) list_single_2graphic_im_pane_g

0xe3ab,	// (0x0002d34e) list_single_2graphic_im_pane_t1_ParamLimits

0xe3ab,	// (0x0002d34e) list_single_2graphic_im_pane_t1

0x80b0,	// (0x00027053) list_single_graphic_2heading_pane_fp_ParamLimits

0x80b0,	// (0x00027053) list_single_graphic_2heading_pane_fp

0x109e,	// (0x00020041) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x109e,	// (0x00020041) list_single_graphic_2heading_pane_fp_g1

0x80c5,	// (0x00027068) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x80c5,	// (0x00027068) list_single_graphic_2heading_pane_fp_g2

0x1067,	// (0x0002000a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1067,	// (0x0002000a) list_single_graphic_2heading_pane_fp_g3

0x1073,	// (0x00020016) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1073,	// (0x00020016) list_single_graphic_2heading_pane_fp_g4

0x80d1,	// (0x00027074) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x80d1,	// (0x00027074) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb66,	// (0x0002eb09) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb66,	// (0x0002eb09) list_single_graphic_2heading_pane_fp_g

0x1277,	// (0x0002021a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1277,	// (0x0002021a) list_single_graphic_2heading_pane_fp_t1

0x10d6,	// (0x00020079) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x10d6,	// (0x00020079) list_single_graphic_2heading_pane_fp_t2

0x128d,	// (0x00020230) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x128d,	// (0x00020230) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc41,	// (0x0002ebe4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc41,	// (0x0002ebe4) list_single_graphic_2heading_pane_fp_t

0x7ab3,	// (0x00026a56) fep_hwr_write_pane_g5_ParamLimits

0x7ab3,	// (0x00026a56) fep_hwr_write_pane_g5

0x7abf,	// (0x00026a62) fep_hwr_write_pane_g6_ParamLimits

0x7abf,	// (0x00026a62) fep_hwr_write_pane_g6

0x8341,	// (0x000272e4) eswt_shell_pane_ParamLimits

0x545a,	// (0x000243fd) bg_popup_window_pane_cp18_ParamLimits

0x670a,	// (0x000256ad) heading_pane_cp70

0x846b,	// (0x0002740e) popup_eswt_tasktip_window_t1_ParamLimits

0xd5fa,	// (0x0002c59d) aid_touch_tab_arrow_left

0xd610,	// (0x0002c5b3) aid_touch_tab_arrow_right

0xcfb7,	// (0x0002bf5a) title_pane_g3_ParamLimits

0xcfb7,	// (0x0002bf5a) title_pane_g3

0x3ed4,	// (0x00022e77) set_value_pane_g1

0xc933,	// (0x0002b8d6) popup_toolbar_trans_pane_ParamLimits

0x85c5,	// (0x00027568) aid_size_cell_tb_trans_pane_ParamLimits

0x3f15,	// (0x00022eb8) bg_tb_trans_pane_ParamLimits

0x85d7,	// (0x0002757a) grid_tb_trans_pane_ParamLimits

0x3932,	// (0x000228d5) cont_note_pane_ParamLimits

0x3932,	// (0x000228d5) cont_note_pane

0x3c86,	// (0x00022c29) cont_snote2_single_text_pane_ParamLimits

0x3c86,	// (0x00022c29) cont_snote2_single_text_pane

0x3c86,	// (0x00022c29) cont_snote2_single_graphic_pane_ParamLimits

0x3c86,	// (0x00022c29) cont_snote2_single_graphic_pane

0x5a6b,	// (0x00024a0e) cont_note_wait_pane_ParamLimits

0x5a6b,	// (0x00024a0e) cont_note_wait_pane

0x5a6b,	// (0x00024a0e) cont_note_image_pane_ParamLimits

0x5a6b,	// (0x00024a0e) cont_note_image_pane

0x867f,	// (0x00027622) popup_note2_window_g1_ParamLimits

0x867f,	// (0x00027622) popup_note2_window_g1

0x86b0,	// (0x00027653) popup_note2_window_t1_ParamLimits

0x86b0,	// (0x00027653) popup_note2_window_t1

0x86f5,	// (0x00027698) popup_note2_window_t2_ParamLimits

0x86f5,	// (0x00027698) popup_note2_window_t2

0x873a,	// (0x000276dd) popup_note2_window_t3_ParamLimits

0x873a,	// (0x000276dd) popup_note2_window_t3

0x877f,	// (0x00027722) popup_note2_window_t4_ParamLimits

0x877f,	// (0x00027722) popup_note2_window_t4

0x39b6,	// (0x00022959) popup_note2_window_t5_ParamLimits

0x39b6,	// (0x00022959) popup_note2_window_t5

0x0004,

0xfc4d,	// (0x0002ebf0) popup_note2_window_t_ParamLimits

0xfc4d,	// (0x0002ebf0) popup_note2_window_t

0x87ae,	// (0x00027751) popup_note2_image_window_g1_ParamLimits

0x87ae,	// (0x00027751) popup_note2_image_window_g1

0x87ba,	// (0x0002775d) popup_note2_image_window_g2_ParamLimits

0x87ba,	// (0x0002775d) popup_note2_image_window_g2

0x0001,

0xfc58,	// (0x0002ebfb) popup_note2_image_window_g_ParamLimits

0xfc58,	// (0x0002ebfb) popup_note2_image_window_g

0x87cc,	// (0x0002776f) popup_note2_image_window_t1_ParamLimits

0x87cc,	// (0x0002776f) popup_note2_image_window_t1

0x87e4,	// (0x00027787) popup_note2_image_window_t2_ParamLimits

0x87e4,	// (0x00027787) popup_note2_image_window_t2

0x87fc,	// (0x0002779f) popup_note2_image_window_t3_ParamLimits

0x87fc,	// (0x0002779f) popup_note2_image_window_t3

0x0002,

0xfc5d,	// (0x0002ec00) popup_note2_image_window_t_ParamLimits

0xfc5d,	// (0x0002ec00) popup_note2_image_window_t

0x5a79,	// (0x00024a1c) popup_note2_wait_window_g1_ParamLimits

0x5a79,	// (0x00024a1c) popup_note2_wait_window_g1

0x8818,	// (0x000277bb) popup_note2_wait_window_g2_ParamLimits

0x8818,	// (0x000277bb) popup_note2_wait_window_g2

0x5a91,	// (0x00024a34) popup_note2_wait_window_g3_ParamLimits

0x5a91,	// (0x00024a34) popup_note2_wait_window_g3

0x0002,

0xfc64,	// (0x0002ec07) popup_note2_wait_window_g_ParamLimits

0xfc64,	// (0x0002ec07) popup_note2_wait_window_g

0x8824,	// (0x000277c7) popup_note2_wait_window_t1_ParamLimits

0x8824,	// (0x000277c7) popup_note2_wait_window_t1

0x8842,	// (0x000277e5) popup_note2_wait_window_t2_ParamLimits

0x8842,	// (0x000277e5) popup_note2_wait_window_t2

0x8860,	// (0x00027803) popup_note2_wait_window_t3_ParamLimits

0x8860,	// (0x00027803) popup_note2_wait_window_t3

0x8872,	// (0x00027815) popup_note2_wait_window_t4_ParamLimits

0x8872,	// (0x00027815) popup_note2_wait_window_t4

0x0003,

0xfc6b,	// (0x0002ec0e) popup_note2_wait_window_t_ParamLimits

0xfc6b,	// (0x0002ec0e) popup_note2_wait_window_t

0x8884,	// (0x00027827) wait_bar2_pane_ParamLimits

0x8884,	// (0x00027827) wait_bar2_pane

0x889c,	// (0x0002783f) popup_snote2_single_text_window_g1_ParamLimits

0x889c,	// (0x0002783f) popup_snote2_single_text_window_g1

0x88c4,	// (0x00027867) popup_snote2_single_text_window_t1_ParamLimits

0x88c4,	// (0x00027867) popup_snote2_single_text_window_t1

0x8910,	// (0x000278b3) popup_snote2_single_text_window_t2_ParamLimits

0x8910,	// (0x000278b3) popup_snote2_single_text_window_t2

0x895c,	// (0x000278ff) popup_snote2_single_text_window_t3_ParamLimits

0x895c,	// (0x000278ff) popup_snote2_single_text_window_t3

0x899d,	// (0x00027940) popup_snote2_single_text_window_t4_ParamLimits

0x899d,	// (0x00027940) popup_snote2_single_text_window_t4

0x89d3,	// (0x00027976) popup_snote2_single_text_window_t5_ParamLimits

0x89d3,	// (0x00027976) popup_snote2_single_text_window_t5

0x0004,

0xfc74,	// (0x0002ec17) popup_snote2_single_text_window_t_ParamLimits

0xfc74,	// (0x0002ec17) popup_snote2_single_text_window_t

0x89fe,	// (0x000279a1) popup_snote2_single_graphic_window_g1_ParamLimits

0x89fe,	// (0x000279a1) popup_snote2_single_graphic_window_g1

0x8a26,	// (0x000279c9) popup_snote2_single_graphic_window_g2_ParamLimits

0x8a26,	// (0x000279c9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7f,	// (0x0002ec22) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7f,	// (0x0002ec22) popup_snote2_single_graphic_window_g

0x8a4e,	// (0x000279f1) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a4e,	// (0x000279f1) popup_snote2_single_graphic_window_t1

0x8a9a,	// (0x00027a3d) popup_snote2_single_graphic_window_t2_ParamLimits

0x8a9a,	// (0x00027a3d) popup_snote2_single_graphic_window_t2

0x895c,	// (0x000278ff) popup_snote2_single_graphic_window_t3_ParamLimits

0x895c,	// (0x000278ff) popup_snote2_single_graphic_window_t3

0x899d,	// (0x00027940) popup_snote2_single_graphic_window_t4_ParamLimits

0x899d,	// (0x00027940) popup_snote2_single_graphic_window_t4

0x89d3,	// (0x00027976) popup_snote2_single_graphic_window_t5_ParamLimits

0x89d3,	// (0x00027976) popup_snote2_single_graphic_window_t5

0x0004,

0xfc84,	// (0x0002ec27) popup_snote2_single_graphic_window_t_ParamLimits

0xfc84,	// (0x0002ec27) popup_snote2_single_graphic_window_t

0x74ce,	// (0x00026471) clock_nsta_pane_cp2_t1

0x74ce,	// (0x00026471) clock_nsta_pane_cp2_t2

0x0001,

0xfaa4,	// (0x0002ea47) clock_nsta_pane_cp2_t

0x08bd,	// (0x0001f860) form_field_data_wide_pane_g1_ParamLimits

0x3f23,	// (0x00022ec6) form_field_data_wide_pane_g2_ParamLimits

0x3f23,	// (0x00022ec6) form_field_data_wide_pane_g2

0x3f2f,	// (0x00022ed2) form_field_data_wide_pane_g3_ParamLimits

0x3f2f,	// (0x00022ed2) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0002e624) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0002e624) form_field_data_wide_pane_g

0xdf04,	// (0x0002cea7) grid_touch_3_pane_ParamLimits

0xdf04,	// (0x0002cea7) grid_touch_3_pane

0xe3dc,	// (0x0002d37f) cell_touch_3_pane_ParamLimits

0xe3dc,	// (0x0002d37f) cell_touch_3_pane

0x7a27,	// (0x000269ca) cell_touch_3_pane_g1

0x7a27,	// (0x000269ca) cell_touch_3_pane_g2

0x0001,

0xfb29,	// (0x0002eacc) cell_touch_3_pane_g

0x39e8,	// (0x0002298b) cont_query_data_pane

0x39f0,	// (0x00022993) cont_query_data_pane_cp1

0x8b14,	// (0x00027ab7) button_value_adjust_pane_cp7

0x8b1c,	// (0x00027abf) query_popup_pane_cp3

0x4684,	// (0x00023627) bg_popup_sub_pane_cp22_ParamLimits

0x1aba,	// (0x00020a5d) navi_navi_volume_pane_cp2

0x1ad5,	// (0x00020a78) popup_side_volume_key_window_g2

0x1ae4,	// (0x00020a87) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0002e6ba) popup_side_volume_key_window_g

0x1b01,	// (0x00020aa4) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0002e6c1) popup_side_volume_key_window_t

0x493b,	// (0x000238de) popup_side_volume_key_window_ParamLimits

0xb816,	// (0x0002a7b9) list_double_graphic_pane_g4_ParamLimits

0xb816,	// (0x0002a7b9) list_double_graphic_pane_g4

0xdd83,	// (0x0002cd26) list_single_2heading_msg_pane_ParamLimits

0xdd83,	// (0x0002cd26) list_single_2heading_msg_pane

0xbd99,	// (0x0002ad3c) list_single_2heading_msg_pane_g1_ParamLimits

0xbd99,	// (0x0002ad3c) list_single_2heading_msg_pane_g1

0xbda5,	// (0x0002ad48) list_single_2heading_msg_pane_g2_ParamLimits

0xbda5,	// (0x0002ad48) list_single_2heading_msg_pane_g2

0xbdb8,	// (0x0002ad5b) list_single_2heading_msg_pane_g3_ParamLimits

0xbdb8,	// (0x0002ad5b) list_single_2heading_msg_pane_g3

0xbdc4,	// (0x0002ad67) list_single_2heading_msg_pane_g4_ParamLimits

0xbdc4,	// (0x0002ad67) list_single_2heading_msg_pane_g4

0x0003,

0xfc8f,	// (0x0002ec32) list_single_2heading_msg_pane_g_ParamLimits

0xfc8f,	// (0x0002ec32) list_single_2heading_msg_pane_g

0xbddc,	// (0x0002ad7f) list_single_2heading_msg_pane_t1_ParamLimits

0xbddc,	// (0x0002ad7f) list_single_2heading_msg_pane_t1

0xbe04,	// (0x0002ada7) list_single_2heading_msg_pane_t2_ParamLimits

0xbe04,	// (0x0002ada7) list_single_2heading_msg_pane_t2

0xbe6f,	// (0x0002ae12) list_single_2heading_msg_pane_t3_ParamLimits

0xbe6f,	// (0x0002ae12) list_single_2heading_msg_pane_t3

0x1372,	// (0x00020315) list_single_2heading_msg_pane_t4_ParamLimits

0x1372,	// (0x00020315) list_single_2heading_msg_pane_t4

0x0003,

0xfc98,	// (0x0002ec3b) list_single_2heading_msg_pane_t_ParamLimits

0xfc98,	// (0x0002ec3b) list_single_2heading_msg_pane_t

0x35fd,	// (0x000225a0) title_pane_g4_ParamLimits

0x35fd,	// (0x000225a0) title_pane_g4

0x18c9,	// (0x0002086c) title_pane_stacon_g3_ParamLimits

0x18c9,	// (0x0002086c) title_pane_stacon_g3

0x8642,	// (0x000275e5) list_single_2graphic_im_pane_g4_ParamLimits

0x8642,	// (0x000275e5) list_single_2graphic_im_pane_g4

0x64ca,	// (0x0002546d) popup_side_volume_key_window_cp

0x6cfa,	// (0x00025c9d) main_idle_act2_pane_t1

0x2438,	// (0x000213db) toolbar_button_pane_g10

0xd2c2,	// (0x0002c265) popup_toolbar_window_cp1

0x74bf,	// (0x00026462) clock_nsta_pane_cp_t1

0x74bf,	// (0x00026462) clock_nsta_pane_cp_t2

0x0001,

0xfa9f,	// (0x0002ea42) clock_nsta_pane_cp_t

0x1aba,	// (0x00020a5d) navi_navi_volume_pane_cp2_ParamLimits

0x1ac9,	// (0x00020a6c) popup_side_volume_key_window_g1_ParamLimits

0x1ad5,	// (0x00020a78) popup_side_volume_key_window_g2_ParamLimits

0x1ae4,	// (0x00020a87) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0002e6ba) popup_side_volume_key_window_g_ParamLimits

0x2852,	// (0x000217f5) fep_hwr_aid_pane

0xd86e,	// (0x0002c811) bg_fep_hwr_top_pane_g4_ParamLimits

0x7a83,	// (0x00026a26) fep_hwr_top_pane_g1_ParamLimits

0x7a95,	// (0x00026a38) fep_hwr_top_pane_g2_ParamLimits

0x290b,	// (0x000218ae) fep_hwr_top_pane_g3_ParamLimits

0xfaf4,	// (0x0002ea97) fep_hwr_top_pane_g_ParamLimits

0x2920,	// (0x000218c3) fep_hwr_top_text_pane_ParamLimits

0x628d,	// (0x00025230) aid_touch_tab_arrow_arrow_2

0x6296,	// (0x00025239) aid_touch_tab_arrow_left_2

0x2866,	// (0x00021809) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x289d,	// (0x00021840) fep_hwr_prediction_pane

0x7bf5,	// (0x00026b98) fep_vkb_prediction_pane

0xe1c2,	// (0x0002d165) fep_vkb_side_pane_g3_ParamLimits

0xe1c2,	// (0x0002d165) fep_vkb_side_pane_g3

0x7ca5,	// (0x00026c48) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8125,	// (0x000270c8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8132,	// (0x000270d5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9e,	// (0x0002eb41) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8b41,	// (0x00027ae4) fep_hwr_prediction_pane_g1

0x2bad,	// (0x00021b50) fep_hwr_prediction_pane_g2

0x2bb5,	// (0x00021b58) fep_hwr_prediction_pane_g3

0x2bbd,	// (0x00021b60) fep_hwr_prediction_pane_g4

0x0003,

0xfca1,	// (0x0002ec44) fep_hwr_prediction_pane_g

0x8b41,	// (0x00027ae4) fep_vkb_prediction_pane_g1

0x8b4b,	// (0x00027aee) fep_vkb_prediction_pane_g2

0x8b53,	// (0x00027af6) fep_vkb_prediction_pane_g3

0x8b5b,	// (0x00027afe) fep_vkb_prediction_pane_g4

0x0003,

0xfcaa,	// (0x0002ec4d) fep_vkb_prediction_pane_g

0x6783,	// (0x00025726) slider_set_pane_g3

0x6797,	// (0x0002573a) slider_set_pane_g4

0x67af,	// (0x00025752) slider_set_pane_g5

0x6783,	// (0x00025726) slider_set_pane_g6

0x2714,	// (0x000216b7) slider_set_pane_g7

0x6969,	// (0x0002590c) slider_form_pane_g3

0x6972,	// (0x00025915) slider_form_pane_g4

0x697a,	// (0x0002591d) slider_form_pane_g5

0x6969,	// (0x0002590c) slider_form_pane_g6

0xdd55,	// (0x0002ccf8) slider_form_pane_g7

0x6fa4,	// (0x00025f47) slider_set_pane_vc_g3

0x6fad,	// (0x00025f50) slider_set_pane_vc_g4

0x6fb6,	// (0x00025f59) slider_set_pane_vc_g5

0x6fa4,	// (0x00025f47) slider_set_pane_vc_g6

0x6fbf,	// (0x00025f62) slider_set_pane_vc_g7

0x718b,	// (0x0002612e) slider_form_pane_vc_g1

0x7194,	// (0x00026137) slider_form_pane_vc_g2

0x719d,	// (0x00026140) slider_form_pane_vc_g3

0x718b,	// (0x0002612e) slider_form_pane_vc_g4

0x71a6,	// (0x00026149) slider_form_pane_vc_g5

0x0004,

0xfa71,	// (0x0002ea14) slider_form_pane_vc_g

0x35b5,	// (0x00022558) main_idle_act3_pane

0x8b63,	// (0x00027b06) ai3_links_pane

0xe424,	// (0x0002d3c7) popup_ai3_data_window_ParamLimits

0xe424,	// (0x0002d3c7) popup_ai3_data_window

0x35b5,	// (0x00022558) grid_ai3_links_pane

0xe43e,	// (0x0002d3e1) cell_ai3_links_pane_ParamLimits

0xe43e,	// (0x0002d3e1) cell_ai3_links_pane

0x8b9e,	// (0x00027b41) bg_popup_sub_pane_cp11

0x8bab,	// (0x00027b4e) cell_ai3_links_pane_g1

0x35b5,	// (0x00022558) bg_popup_sub_pane_cp12

0x8bd0,	// (0x00027b73) heading_ai3_data_pane

0x8bd8,	// (0x00027b7b) list_ai3_gene_pane

0x8be4,	// (0x00027b87) popup_ai3_data_window_g1

0x8bec,	// (0x00027b8f) heading_ai3_data_pane_g1

0x8bf4,	// (0x00027b97) heading_ai3_data_pane_t1

0x8c02,	// (0x00027ba5) list_double_ai3_gene_pane_ParamLimits

0x8c02,	// (0x00027ba5) list_double_ai3_gene_pane

0x8c0f,	// (0x00027bb2) list_single_ai3_gene_pane_ParamLimits

0x8c0f,	// (0x00027bb2) list_single_ai3_gene_pane

0x79ec,	// (0x0002698f) list_highlight_pane_cp7_ParamLimits

0x79ec,	// (0x0002698f) list_highlight_pane_cp7

0x8c1c,	// (0x00027bbf) list_single_a13_gene_pane_t1_ParamLimits

0x8c1c,	// (0x00027bbf) list_single_a13_gene_pane_t1

0x8c33,	// (0x00027bd6) list_single_ai3_gene_pane_g1

0x8c3c,	// (0x00027bdf) list_single_ai3_gene_pane_g2

0x0001,

0xfcb3,	// (0x0002ec56) list_single_ai3_gene_pane_g

0x8c44,	// (0x00027be7) list_double_ai3_gene_pane_g1_ParamLimits

0x8c44,	// (0x00027be7) list_double_ai3_gene_pane_g1

0x8c50,	// (0x00027bf3) list_double_ai3_gene_pane_t1_ParamLimits

0x8c50,	// (0x00027bf3) list_double_ai3_gene_pane_t1

0x8c6c,	// (0x00027c0f) list_double_ai3_gene_pane_t2_ParamLimits

0x8c6c,	// (0x00027c0f) list_double_ai3_gene_pane_t2

0x8c82,	// (0x00027c25) list_double_ai3_gene_pane_t3_ParamLimits

0x8c82,	// (0x00027c25) list_double_ai3_gene_pane_t3

0x0002,

0xfcb8,	// (0x0002ec5b) list_double_ai3_gene_pane_t_ParamLimits

0xfcb8,	// (0x0002ec5b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x12a3,	// (0x00020246) aid_size_min_col_2

0xe40e,	// (0x0002d3b1) aid_size_min_msg_ParamLimits

0xe40e,	// (0x0002d3b1) aid_size_min_msg

0xe1d6,	// (0x0002d179) fep_vkb_top_text_pane_g2_ParamLimits

0xe1d6,	// (0x0002d179) fep_vkb_top_text_pane_g2

0x0001,

0xfb24,	// (0x0002eac7) fep_vkb_top_text_pane_g_ParamLimits

0xfb24,	// (0x0002eac7) fep_vkb_top_text_pane_g

0x35b5,	// (0x00022558) main_hc_apps_shell_pane

0x8c9f,	// (0x00027c42) grid_hc_apps_pane_ParamLimits

0x8c9f,	// (0x00027c42) grid_hc_apps_pane

0x8cae,	// (0x00027c51) list_hc_apps_pane

0x8cb6,	// (0x00027c59) scroll_pane_cp37_ParamLimits

0x8cb6,	// (0x00027c59) scroll_pane_cp37

0xe458,	// (0x0002d3fb) cell_hc_apps_pane_ParamLimits

0xe458,	// (0x0002d3fb) cell_hc_apps_pane

0xe516,	// (0x0002d4b9) cell_hc_apps_pane_g1_ParamLimits

0xe516,	// (0x0002d4b9) cell_hc_apps_pane_g1

0x8da1,	// (0x00027d44) cell_hc_apps_pane_g2_ParamLimits

0x8da1,	// (0x00027d44) cell_hc_apps_pane_g2

0x8dbd,	// (0x00027d60) cell_hc_apps_pane_g3_ParamLimits

0x8dbd,	// (0x00027d60) cell_hc_apps_pane_g3

0x0002,

0xfcbf,	// (0x0002ec62) cell_hc_apps_pane_g_ParamLimits

0xfcbf,	// (0x0002ec62) cell_hc_apps_pane_g

0xe543,	// (0x0002d4e6) cell_hc_apps_pane_t1_ParamLimits

0xe543,	// (0x0002d4e6) cell_hc_apps_pane_t1

0x3932,	// (0x000228d5) grid_highlight_pane_cp10_ParamLimits

0x3932,	// (0x000228d5) grid_highlight_pane_cp10

0xe581,	// (0x0002d524) list_single_hc_apps_pane_ParamLimits

0xe581,	// (0x0002d524) list_single_hc_apps_pane

0xe5ae,	// (0x0002d551) list_single_hc_apps_pane_g1

0xbedd,	// (0x0002ae80) list_single_hc_apps_pane_g2

0x0001,

0xfcc6,	// (0x0002ec69) list_single_hc_apps_pane_g

0xbef6,	// (0x0002ae99) list_single_hc_apps_pane_g2_copy1

0xbf12,	// (0x0002aeb5) list_single_hc_apps_pane_t1

0x36a9,	// (0x0002264c) bg_set_opt_pane_cp_ParamLimits

0x17f1,	// (0x00020794) setting_slider_pane_t1_ParamLimits

0x180a,	// (0x000207ad) setting_slider_pane_t2_ParamLimits

0x1824,	// (0x000207c7) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002e507) setting_slider_pane_t_ParamLimits

0x183c,	// (0x000207df) slider_set_pane_ParamLimits

0x1d63,	// (0x00020d06) control_pane_g5_ParamLimits

0x1d63,	// (0x00020d06) control_pane_g5

0x6776,	// (0x00025719) slider_set_pane_g1_ParamLimits

0x2708,	// (0x000216ab) slider_set_pane_g2_ParamLimits

0x6783,	// (0x00025726) slider_set_pane_g3_ParamLimits

0x6797,	// (0x0002573a) slider_set_pane_g4_ParamLimits

0x67af,	// (0x00025752) slider_set_pane_g5_ParamLimits

0x6783,	// (0x00025726) slider_set_pane_g6_ParamLimits

0x2714,	// (0x000216b7) slider_set_pane_g7_ParamLimits

0xf95e,	// (0x0002e901) slider_set_pane_g_ParamLimits

0x4a1c,	// (0x000239bf) navi_icon_text_pane_ParamLimits

0xd5c3,	// (0x0002c566) aid_fill_nsta_2_ParamLimits

0xd5fa,	// (0x0002c59d) aid_touch_tab_arrow_left_ParamLimits

0xd610,	// (0x0002c5b3) aid_touch_tab_arrow_right_ParamLimits

0xd6ab,	// (0x0002c64e) clock_nsta_pane_ParamLimits

0x626f,	// (0x00025212) navi_icon_pane_g1_ParamLimits

0x627b,	// (0x0002521e) navi_text_pane_t1_ParamLimits

0x75cb,	// (0x0002656e) navi_icon_text_pane_g1_ParamLimits

0x75d7,	// (0x0002657a) navi_icon_text_pane_t1_ParamLimits

0xe5ae,	// (0x0002d551) list_single_hc_apps_pane_g1_ParamLimits

0xbedd,	// (0x0002ae80) list_single_hc_apps_pane_g2_ParamLimits

0xfcc6,	// (0x0002ec69) list_single_hc_apps_pane_g_ParamLimits

0xbef6,	// (0x0002ae99) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbf12,	// (0x0002aeb5) list_single_hc_apps_pane_t1_ParamLimits

0xc090,	// (0x0002b033) popup_toolbar2_fixed_window_ParamLimits

0xc090,	// (0x0002b033) popup_toolbar2_fixed_window

0xc929,	// (0x0002b8cc) popup_toolbar2_float_window

0x35b5,	// (0x00022558) bg_popup_sub_pane_cp27

0x8e94,	// (0x00027e37) grid_toolbar2_float_pane

0x35b5,	// (0x00022558) bg_popup_sub_pane_cp26

0x8e94,	// (0x00027e37) grid_toolbar2_fixed_pane

0xe5c7,	// (0x0002d56a) cell_toolbar2_fixed_pane_ParamLimits

0xe5c7,	// (0x0002d56a) cell_toolbar2_fixed_pane

0xe5e1,	// (0x0002d584) cell_toolbar2_fixed_pane_g1

0x8eb5,	// (0x00027e58) toolbar2_fixed_button_pane

0x53e6,	// (0x00024389) toolbar2_fixed_button_pane_g1

0x53ee,	// (0x00024391) toolbar2_fixed_button_pane_g2

0x53f6,	// (0x00024399) toolbar2_fixed_button_pane_g3

0x53fe,	// (0x000243a1) toolbar2_fixed_button_pane_g4

0x5406,	// (0x000243a9) toolbar2_fixed_button_pane_g5

0x540e,	// (0x000243b1) toolbar2_fixed_button_pane_g6

0x5416,	// (0x000243b9) toolbar2_fixed_button_pane_g7

0x541e,	// (0x000243c1) toolbar2_fixed_button_pane_g8

0x5426,	// (0x000243c9) toolbar2_fixed_button_pane_g9

0x0008,

0xf860,	// (0x0002e803) toolbar2_fixed_button_pane_g

0x8ebd,	// (0x00027e60) cell_toolbar2_float_pane_ParamLimits

0x8ebd,	// (0x00027e60) cell_toolbar2_float_pane

0x8ece,	// (0x00027e71) cell_toolbar2_float_pane_g1

0x8eb5,	// (0x00027e58) toolbar2_fixed_button_pane_cp

0xe0b0,	// (0x0002d053) fep_vkb_accented_list_pane_ParamLimits

0xe0b0,	// (0x0002d053) fep_vkb_accented_list_pane

0x2a6e,	// (0x00021a11) bg_popup_fep_shadow_pane_g9

0x4b9c,	// (0x00023b3f) bg_popup_fep_shadow_pane_cp3

0x406c,	// (0x0002300f) list_accented_list_pane

0x8ed7,	// (0x00027e7a) list_single_accented_list_pane_ParamLimits

0x8ed7,	// (0x00027e7a) list_single_accented_list_pane

0x4b9c,	// (0x00023b3f) list_highlight_pane_cp10

0x8ee8,	// (0x00027e8b) list_single_accented_list_pane_t1

0xc853,	// (0x0002b7f6) popup_slider_window_ParamLimits

0xc853,	// (0x0002b7f6) popup_slider_window

0x8b24,	// (0x00027ac7) aid_indentation_list_msg

0xe6da,	// (0x0002d67d) bg_popup_window_pane_cp19

0x900c,	// (0x00027faf) popup_slider_window_g1

0x9028,	// (0x00027fcb) popup_slider_window_g2

0x9044,	// (0x00027fe7) popup_slider_window_g3

0x0005,

0xfccb,	// (0x0002ec6e) popup_slider_window_g

0x90a0,	// (0x00028043) popup_slider_window_t1

0x9114,	// (0x000280b7) small_volume_slider_vertical_pane

0x7a27,	// (0x000269ca) small_volume_slider_vertical_pane_g1

0x7a27,	// (0x000269ca) small_volume_slider_vertical_pane_g2

0x9130,	// (0x000280d3) small_volume_slider_vertical_pane_g3

0x0002,

0xfcdd,	// (0x0002ec80) small_volume_slider_vertical_pane_g

0xbffe,	// (0x0002afa1) area_side_right_pane_ParamLimits

0xbffe,	// (0x0002afa1) area_side_right_pane

0xca5f,	// (0x0002ba02) aid_size_side_button_ParamLimits

0xca5f,	// (0x0002ba02) aid_size_side_button

0xca78,	// (0x0002ba1b) grid_sctrl_middle_pane_ParamLimits

0xca78,	// (0x0002ba1b) grid_sctrl_middle_pane

0x2bf8,	// (0x00021b9b) sctrl_sk_bottom_pane

0x2c09,	// (0x00021bac) sctrl_sk_top_pane

0x2c1b,	// (0x00021bbe) aid_touch_sctrl_top

0x3932,	// (0x000228d5) bg_sctrl_sk_pane_ParamLimits

0x3932,	// (0x000228d5) bg_sctrl_sk_pane

0x2c28,	// (0x00021bcb) sctrl_sk_top_pane_g1

0x2c35,	// (0x00021bd8) sctrl_sk_top_pane_t1

0x2c1b,	// (0x00021bbe) aid_touch_sctrl_bottom

0x3932,	// (0x000228d5) bg_sctrl_sk_pane_cp_ParamLimits

0x3932,	// (0x000228d5) bg_sctrl_sk_pane_cp

0x2c50,	// (0x00021bf3) sctrl_sk_bottom_pane_g1

0x2c35,	// (0x00021bd8) sctrl_sk_bottom_pane_t1

0xca92,	// (0x0002ba35) cell_sctrl_middle_pane_ParamLimits

0xca92,	// (0x0002ba35) cell_sctrl_middle_pane

0xcaa3,	// (0x0002ba46) aid_touch_sctrl_middle_ParamLimits

0xcaa3,	// (0x0002ba46) aid_touch_sctrl_middle

0xcab0,	// (0x0002ba53) bg_sctrl_middle_pane_ParamLimits

0xcab0,	// (0x0002ba53) bg_sctrl_middle_pane

0x91b8,	// (0x0002815b) cell_sctrl_middle_pane_g1_ParamLimits

0x91b8,	// (0x0002815b) cell_sctrl_middle_pane_g1

0xcabe,	// (0x0002ba61) cell_sctrl_middle_pane_g2_ParamLimits

0xcabe,	// (0x0002ba61) cell_sctrl_middle_pane_g2

0x0001,

0xfce9,	// (0x0002ec8c) cell_sctrl_middle_pane_g_ParamLimits

0xfce9,	// (0x0002ec8c) cell_sctrl_middle_pane_g

0x53e6,	// (0x00024389) bg_sctrl_middle_pane_g1

0x53ee,	// (0x00024391) bg_sctrl_middle_pane_g2

0x53f6,	// (0x00024399) bg_sctrl_middle_pane_g3

0x53fe,	// (0x000243a1) bg_sctrl_middle_pane_g4

0x5406,	// (0x000243a9) bg_sctrl_middle_pane_g5

0x540e,	// (0x000243b1) bg_sctrl_middle_pane_g6

0x5416,	// (0x000243b9) bg_sctrl_middle_pane_g7

0x541e,	// (0x000243c1) bg_sctrl_middle_pane_g8

0x0007,

0xfcee,	// (0x0002ec91) bg_sctrl_middle_pane_g

0x5426,	// (0x000243c9) bg_sctrl_middle_pane_g8_copy1

0x53e6,	// (0x00024389) bg_sctrl_sk_pane_g1

0x53ee,	// (0x00024391) bg_sctrl_sk_pane_g2

0x53f6,	// (0x00024399) bg_sctrl_sk_pane_g3

0x0008,

0xf860,	// (0x0002e803) bg_sctrl_sk_pane_g

0x3e44,	// (0x00022de7) aid_size_touch_scroll_bar

0x53fe,	// (0x000243a1) bg_sctrl_sk_pane_g4

0x5406,	// (0x000243a9) bg_sctrl_sk_pane_g5

0x540e,	// (0x000243b1) bg_sctrl_sk_pane_g6

0x5416,	// (0x000243b9) bg_sctrl_sk_pane_g7

0x541e,	// (0x000243c1) bg_sctrl_sk_pane_g8

0x5426,	// (0x000243c9) bg_sctrl_sk_pane_g9

0x1ef7,	// (0x00020e9a) popup_fep_china_hwr2_fs_candidate_window

0xc373,	// (0x0002b316) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc373,	// (0x0002b316) popup_fep_china_hwr2_fs_control_window

0x7ca5,	// (0x00026c48) sctrl_sk_top_pane_g2

0x0001,

0xfce4,	// (0x0002ec87) sctrl_sk_top_pane_g

0xe792,	// (0x0002d735) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe792,	// (0x0002d735) aid_fep_china_hwr2_fs_cell

0xe7a6,	// (0x0002d749) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7a6,	// (0x0002d749) bg_popup_fep_shadow_pane_cp4

0xe7bd,	// (0x0002d760) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7bd,	// (0x0002d760) bg_popup_fep_shadow_pane_cp5

0xe7cf,	// (0x0002d772) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7cf,	// (0x0002d772) popup_fep_china_hwr2_fs_control_bar_grid

0xe7e3,	// (0x0002d786) popup_fep_china_hwr2_fs_control_funtion_grid

0x918c,	// (0x0002812f) aid_fep_china_hwr2_fs_candi_cell

0x35b5,	// (0x00022558) bg_popup_fep_shadow_pane_cp6

0x9196,	// (0x00028139) popup_fep_china_hwr2_fs_candidate_grid

0xe7eb,	// (0x0002d78e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe7eb,	// (0x0002d78e) cell_fep_china_hwr2_fs_funtion_grid

0x7a27,	// (0x000269ca) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x91b8,	// (0x0002815b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x91b8,	// (0x0002815b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x91c6,	// (0x00028169) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x91c6,	// (0x00028169) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcff,	// (0x0002eca2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcff,	// (0x0002eca2) cell_fep_china_hwr2_fs_funtion_grid_g

0xe803,	// (0x0002d7a6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe803,	// (0x0002d7a6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe818,	// (0x0002d7bb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe818,	// (0x0002d7bb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x013b,	// (0x0001f0de) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x013b,	// (0x0001f0de) cell_fep_china_hwr2_fs_funtion_grid_t

0x920d,	// (0x000281b0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9215,	// (0x000281b8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x921d,	// (0x000281c0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd04,	// (0x0002eca7) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9225,	// (0x000281c8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9225,	// (0x000281c8) cell_fep_china_hwr2_fs_candidate_grid

0x923e,	// (0x000281e1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9246,	// (0x000281e9) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7a27,	// (0x000269ca) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7a27,	// (0x000269ca) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb29,	// (0x0002eacc) cell_fep_china_hwr2_fs_candidate_grid_g

0x924e,	// (0x000281f1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4fdc,	// (0x00023f7f) clock_nsta_pane_cp_24_ParamLimits

0x4fdc,	// (0x00023f7f) clock_nsta_pane_cp_24

0x505a,	// (0x00023ffd) indicator_nsta_pane_cp_24_ParamLimits

0x505a,	// (0x00023ffd) indicator_nsta_pane_cp_24

0x60eb,	// (0x0002508e) heading_pane_g1

0x0001,

0xf8c5,	// (0x0002e868) heading_pane_g

0x6b43,	// (0x00025ae6) grid_sct_catagory_button_pane

0x6b73,	// (0x00025b16) scroll_pane_cp5_ParamLimits

0x7619,	// (0x000265bc) button_value_adjust_pane_cp5_ParamLimits

0x7619,	// (0x000265bc) button_value_adjust_pane_cp5

0x76f8,	// (0x0002669b) form2_midp_time_pane_ParamLimits

0x925c,	// (0x000281ff) cell_sct_catagory_button_pane_ParamLimits

0x925c,	// (0x000281ff) cell_sct_catagory_button_pane

0x79ec,	// (0x0002698f) bg_button_pane_cp01_ParamLimits

0x79ec,	// (0x0002698f) bg_button_pane_cp01

0x7a27,	// (0x000269ca) cell_sct_catagory_button_pane_g1

0xc8cc,	// (0x0002b86f) popup_tb_extension_window

0xe834,	// (0x0002d7d7) aid_size_cell_ext_ParamLimits

0xe834,	// (0x0002d7d7) aid_size_cell_ext

0x3c86,	// (0x00022c29) bg_tb_trans_pane_cp1_ParamLimits

0x3c86,	// (0x00022c29) bg_tb_trans_pane_cp1

0xe85a,	// (0x0002d7fd) grid_tb_ext_pane_ParamLimits

0xe85a,	// (0x0002d7fd) grid_tb_ext_pane

0xe895,	// (0x0002d838) cell_tb_ext_pane_ParamLimits

0xe895,	// (0x0002d838) cell_tb_ext_pane

0xe8bd,	// (0x0002d860) cell_tb_ext_pane_g1_ParamLimits

0xe8bd,	// (0x0002d860) cell_tb_ext_pane_g1

0x92f0,	// (0x00028293) cell_tb_ext_pane_t1

0x3932,	// (0x000228d5) list_highlight_pane_cp11_ParamLimits

0x3932,	// (0x000228d5) list_highlight_pane_cp11

0xc0a5,	// (0x0002b048) popup_uni_indicator_window_ParamLimits

0xc0a5,	// (0x0002b048) popup_uni_indicator_window

0x3f15,	// (0x00022eb8) bg_popup_sub_pane_cp14

0x930b,	// (0x000282ae) list_uniindi_pane

0x9317,	// (0x000282ba) uniindi_top_pane

0x3932,	// (0x000228d5) bg_uniindi_top_pane

0x9336,	// (0x000282d9) uniindi_top_pane_g1

0x934c,	// (0x000282ef) uniindi_top_pane_g2

0x0003,

0xfd0b,	// (0x0002ecae) uniindi_top_pane_g

0x9376,	// (0x00028319) uniindi_top_pane_t1

0x93a0,	// (0x00028343) list_single_uniindi_pane_ParamLimits

0x93a0,	// (0x00028343) list_single_uniindi_pane

0x7a27,	// (0x000269ca) bg_uniindi_top_pane_g1

0x93b3,	// (0x00028356) list_single_uniindi_pane_g1

0x93c6,	// (0x00028369) list_single_uniindi_pane_t1

0x35b5,	// (0x00022558) control_bg_pane

0x93eb,	// (0x0002838e) bg_sctrl_sk_pane_cp1

0x93f4,	// (0x00028397) bg_sctrl_sk_pane_cp2

0x93fd,	// (0x000283a0) control_bg_pane_g1

0x9406,	// (0x000283a9) control_bg_pane_g2

0x0001,

0xfd14,	// (0x0002ecb7) control_bg_pane_g

0x7462,	// (0x00026405) cell_indicator_nsta_pane_g1_ParamLimits

0xdf33,	// (0x0002ced6) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8d,	// (0x0002ea30) cell_indicator_nsta_pane_g_ParamLimits

0x1054,	// (0x0001fff7) form2_midp_time_pane_t1_ParamLimits

0x2844,	// (0x000217e7) main_idle_act4_pane_ParamLimits

0x2844,	// (0x000217e7) main_idle_act4_pane

0xc8cc,	// (0x0002b86f) popup_tb_extension_window_ParamLimits

0xe87c,	// (0x0002d81f) tb_ext_find_pane_ParamLimits

0xe87c,	// (0x0002d81f) tb_ext_find_pane

0x940f,	// (0x000283b2) ai_gene_pane_1_cp1

0x4cd5,	// (0x00023c78) ai_gene_pane_2_cp1

0x9417,	// (0x000283ba) list_single_idle_plugin_calendar_pane

0x9420,	// (0x000283c3) list_single_idle_plugin_notification_pane

0x9429,	// (0x000283cc) list_single_idle_plugin_player_pane

0xe8da,	// (0x0002d87d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8da,	// (0x0002d87d) list_single_idle_plugin_shortcut_pane

0xe902,	// (0x0002d8a5) main_idle_act4_pane_t1

0xe918,	// (0x0002d8bb) main_idle_act4_pane_t2

0x0001,

0x0155,	// (0x0001f0f8) main_idle_act4_pane_t

0xe92e,	// (0x0002d8d1) middle_sk_idle_act4_pane_ParamLimits

0xe92e,	// (0x0002d8d1) middle_sk_idle_act4_pane

0xe94a,	// (0x0002d8ed) popup_clock_digital_analogue_window_cp2

0xe972,	// (0x0002d915) shortcut_wheel_idle_act4_pane_ParamLimits

0xe972,	// (0x0002d915) shortcut_wheel_idle_act4_pane

0x7a27,	// (0x000269ca) shortcut_wheel_idle_act4_pane_g1

0x7a27,	// (0x000269ca) shortcut_wheel_idle_act4_pane_g2

0x7a27,	// (0x000269ca) shortcut_wheel_idle_act4_pane_g3

0x7a27,	// (0x000269ca) shortcut_wheel_idle_act4_pane_g4

0x7a27,	// (0x000269ca) shortcut_wheel_idle_act4_pane_g5

0x94bc,	// (0x0002845f) shortcut_wheel_idle_act4_pane_g6

0x94c4,	// (0x00028467) shortcut_wheel_idle_act4_pane_g7

0x94cc,	// (0x0002846f) shortcut_wheel_idle_act4_pane_g8

0x94d4,	// (0x00028477) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd19,	// (0x0002ecbc) shortcut_wheel_idle_act4_pane_g

0xd86e,	// (0x0002c811) middle_sk_idle_act4_pane_g1_ParamLimits

0xd86e,	// (0x0002c811) middle_sk_idle_act4_pane_g1

0xe9ef,	// (0x0002d992) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9ef,	// (0x0002d992) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x0002ecda) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x0002ecda) middle_sk_idle_act4_pane_g

0xea07,	// (0x0002d9aa) middle_sk_idle_act4_pane_t1_ParamLimits

0xea07,	// (0x0002d9aa) middle_sk_idle_act4_pane_t1

0xea36,	// (0x0002d9d9) grid_ai_shortcut_pane_ParamLimits

0xea36,	// (0x0002d9d9) grid_ai_shortcut_pane

0xea53,	// (0x0002d9f6) list_highlight_pane_cp16_ParamLimits

0xea53,	// (0x0002d9f6) list_highlight_pane_cp16

0xea60,	// (0x0002da03) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea60,	// (0x0002da03) list_single_idle_plugin_shortcut_pane_g1

0xea6c,	// (0x0002da0f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea6c,	// (0x0002da0f) list_single_idle_plugin_shortcut_pane_g2

0xea88,	// (0x0002da2b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea88,	// (0x0002da2b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x0182,	// (0x0001f125) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x0182,	// (0x0001f125) list_single_idle_plugin_shortcut_pane_g

0xea9d,	// (0x0002da40) cell_ai_shortcut_pane_ParamLimits

0xea9d,	// (0x0002da40) cell_ai_shortcut_pane

0xeab3,	// (0x0002da56) cell_ai_shortcut_pane_g1_ParamLimits

0xeab3,	// (0x0002da56) cell_ai_shortcut_pane_g1

0x940f,	// (0x000283b2) ai_gene_pane_1_cp2

0x9604,	// (0x000285a7) ai_gene_pane_2_cp2

0x960c,	// (0x000285af) list_highlight_pane_cp15

0x9615,	// (0x000285b8) list_single_idle_plugin_calendar_pane_g1

0x960c,	// (0x000285af) list_highlight_pane_cp17

0x961d,	// (0x000285c0) list_single_idle_plugin_calendar_pane_g1_copy1

0x9625,	// (0x000285c8) list_single_idle_plugin_player_pane_g1

0x6d9c,	// (0x00025d3f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3c,	// (0x0002ecdf) list_single_idle_plugin_player_pane_g

0x962d,	// (0x000285d0) list_single_idle_plugin_player_pane_t1

0x963b,	// (0x000285de) list_single_idle_plugin_player_pane_t2

0x9649,	// (0x000285ec) list_single_idle_plugin_player_pane_t3

0x9657,	// (0x000285fa) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd41,	// (0x0002ece4) list_single_idle_plugin_player_pane_t

0x9665,	// (0x00028608) wait_bar_pane_cp15

0x966d,	// (0x00028610) grid_ai_notification_pane

0x6d9c,	// (0x00025d3f) list_single_idle_plugin_notification_pane_g1

0xead5,	// (0x0002da78) cell_ai_notification_pane_ParamLimits

0xead5,	// (0x0002da78) cell_ai_notification_pane

0x9683,	// (0x00028626) cell_ai_notification_pane_g1

0x968b,	// (0x0002862e) cell_ai_notification_pane_t1

0xeae2,	// (0x0002da85) tb_ext_find_button_pane

0xeaea,	// (0x0002da8d) tb_ext_find_pane_g1

0xeaf2,	// (0x0002da95) tb_ext_find_pane_t1

0x4594,	// (0x00023537) tb_ext_find_button_pane_g1

0x96b7,	// (0x0002865a) tb_ext_find_button_pane_g2

0x0001,

0xfd4a,	// (0x0002eced) tb_ext_find_button_pane_g

0xe902,	// (0x0002d8a5) main_idle_act4_pane_t1_ParamLimits

0xe918,	// (0x0002d8bb) main_idle_act4_pane_t2_ParamLimits

0x0155,	// (0x0001f0f8) main_idle_act4_pane_t_ParamLimits

0xe94a,	// (0x0002d8ed) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe962,	// (0x0002d905) sat_plugin_idle_act4_pane_ParamLimits

0xe962,	// (0x0002d905) sat_plugin_idle_act4_pane

0xeb00,	// (0x0002daa3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb00,	// (0x0002daa3) sat_plugin_idle_act4_pane_t1

0xeb18,	// (0x0002dabb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb18,	// (0x0002dabb) sat_plugin_idle_act4_pane_t2

0xeb30,	// (0x0002dad3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb30,	// (0x0002dad3) sat_plugin_idle_act4_pane_t3

0xeb48,	// (0x0002daeb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb48,	// (0x0002daeb) sat_plugin_idle_act4_pane_t4

0x0003,

0x019c,	// (0x0001f13f) sat_plugin_idle_act4_pane_t_ParamLimits

0x019c,	// (0x0001f13f) sat_plugin_idle_act4_pane_t

0x1655,	// (0x000205f8) popup_battery_window_ParamLimits

0x1655,	// (0x000205f8) popup_battery_window

0x3932,	// (0x000228d5) bg_popup_sub_pane_cp25_ParamLimits

0x3932,	// (0x000228d5) bg_popup_sub_pane_cp25

0x970c,	// (0x000286af) popup_battery_window_g1_ParamLimits

0x970c,	// (0x000286af) popup_battery_window_g1

0x9718,	// (0x000286bb) popup_battery_window_t1_ParamLimits

0x9718,	// (0x000286bb) popup_battery_window_t1

0x972a,	// (0x000286cd) popup_battery_window_t2_ParamLimits

0x972a,	// (0x000286cd) popup_battery_window_t2

0x0001,

0xfd4f,	// (0x0002ecf2) popup_battery_window_t_ParamLimits

0xfd4f,	// (0x0002ecf2) popup_battery_window_t

0xd4cf,	// (0x0002c472) midp_canvas_pane_ParamLimits

0xd52a,	// (0x0002c4cd) midp_keypad_pane_ParamLimits

0xd52a,	// (0x0002c4cd) midp_keypad_pane

0x4edc,	// (0x00023e7f) main_midp_pane_ParamLimits

0x74dd,	// (0x00026480) signal_pane_g2_cp_ParamLimits

0xeb60,	// (0x0002db03) aid_size_cell_midp_keypad_ParamLimits

0xeb60,	// (0x0002db03) aid_size_cell_midp_keypad

0xeb7e,	// (0x0002db21) midp_keyp_game_grid_pane_ParamLimits

0xeb7e,	// (0x0002db21) midp_keyp_game_grid_pane

0xeba5,	// (0x0002db48) midp_keyp_rocker_pane_ParamLimits

0xeba5,	// (0x0002db48) midp_keyp_rocker_pane

0xebee,	// (0x0002db91) midp_keyp_sk_left_pane_ParamLimits

0xebee,	// (0x0002db91) midp_keyp_sk_left_pane

0xec40,	// (0x0002dbe3) midp_keyp_sk_right_pane_ParamLimits

0xec40,	// (0x0002dbe3) midp_keyp_sk_right_pane

0x35b5,	// (0x00022558) bg_button_pane_cp03

0xec92,	// (0x0002dc35) midp_keyp_sk_left_pane_g1

0x35b5,	// (0x00022558) bg_button_pane_cp04

0xec92,	// (0x0002dc35) midp_keyp_sk_right_pane_g1

0x7a27,	// (0x000269ca) midp_keyp_rocker_pane_g1

0xec9b,	// (0x0002dc3e) keyp_game_cell_pane_ParamLimits

0xec9b,	// (0x0002dc3e) keyp_game_cell_pane

0x35b5,	// (0x00022558) bg_button_pane_cp02

0xecbf,	// (0x0002dc62) keyp_game_cell_pane_g1

0xc040,	// (0x0002afe3) popup_fep_vkb2_window_ParamLimits

0xc040,	// (0x0002afe3) popup_fep_vkb2_window

0xcaca,	// (0x0002ba6d) aid_size_cell_vkb2_ParamLimits

0xcaca,	// (0x0002ba6d) aid_size_cell_vkb2

0xcb00,	// (0x0002baa3) popup_fep_vkb2_window_g1_ParamLimits

0xcb00,	// (0x0002baa3) popup_fep_vkb2_window_g1

0xcb50,	// (0x0002baf3) vkb2_area_bottom_pane_ParamLimits

0xcb50,	// (0x0002baf3) vkb2_area_bottom_pane

0xcba4,	// (0x0002bb47) vkb2_area_keypad_pane_ParamLimits

0xcba4,	// (0x0002bb47) vkb2_area_keypad_pane

0xcbec,	// (0x0002bb8f) vkb2_area_top_pane_ParamLimits

0xcbec,	// (0x0002bb8f) vkb2_area_top_pane

0xcc72,	// (0x0002bc15) vkb2_top_entry_pane_ParamLimits

0xcc72,	// (0x0002bc15) vkb2_top_entry_pane

0xcc9f,	// (0x0002bc42) vkb2_top_grid_left_pane_ParamLimits

0xcc9f,	// (0x0002bc42) vkb2_top_grid_left_pane

0xccbf,	// (0x0002bc62) vkb2_top_grid_right_pane_ParamLimits

0xccbf,	// (0x0002bc62) vkb2_top_grid_right_pane

0x2eae,	// (0x00021e51) vkb2_cell_keypad_pane_ParamLimits

0x2eae,	// (0x00021e51) vkb2_cell_keypad_pane

0xcd05,	// (0x0002bca8) vkb2_area_bottom_grid_pane_ParamLimits

0xcd05,	// (0x0002bca8) vkb2_area_bottom_grid_pane

0xcd2f,	// (0x0002bcd2) vkb2_area_bottom_pane_g1_ParamLimits

0xcd2f,	// (0x0002bcd2) vkb2_area_bottom_pane_g1

0xcd55,	// (0x0002bcf8) vkb2_area_bottom_pane_g2_ParamLimits

0xcd55,	// (0x0002bcf8) vkb2_area_bottom_pane_g2

0xcd86,	// (0x0002bd29) vkb2_area_bottom_pane_g3_ParamLimits

0xcd86,	// (0x0002bd29) vkb2_area_bottom_pane_g3

0x0002,

0xfd54,	// (0x0002ecf7) vkb2_area_bottom_pane_g_ParamLimits

0xfd54,	// (0x0002ecf7) vkb2_area_bottom_pane_g

0x3058,	// (0x00021ffb) vkb2_top_cell_left_pane_ParamLimits

0x3058,	// (0x00021ffb) vkb2_top_cell_left_pane

0xecc8,	// (0x0002dc6b) vkb2_top_entry_pane_g1_ParamLimits

0xecc8,	// (0x0002dc6b) vkb2_top_entry_pane_g1

0xecd6,	// (0x0002dc79) vkb2_top_entry_pane_t1_ParamLimits

0xecd6,	// (0x0002dc79) vkb2_top_entry_pane_t1

0x98d3,	// (0x00028876) vkb2_top_entry_pane_t2_ParamLimits

0x98d3,	// (0x00028876) vkb2_top_entry_pane_t2

0x9905,	// (0x000288a8) vkb2_top_entry_pane_t3_ParamLimits

0x9905,	// (0x000288a8) vkb2_top_entry_pane_t3

0x0002,

0xfd5b,	// (0x0002ecfe) vkb2_top_entry_pane_t_ParamLimits

0xfd5b,	// (0x0002ecfe) vkb2_top_entry_pane_t

0xcdf0,	// (0x0002bd93) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdf0,	// (0x0002bd93) vkb2_top_grid_right_pane_g1

0x30bb,	// (0x0002205e) vkb2_top_grid_right_pane_g2_ParamLimits

0x30bb,	// (0x0002205e) vkb2_top_grid_right_pane_g2

0x30d3,	// (0x00022076) vkb2_top_grid_right_pane_g3_ParamLimits

0x30d3,	// (0x00022076) vkb2_top_grid_right_pane_g3

0xce06,	// (0x0002bda9) vkb2_top_grid_right_pane_g4_ParamLimits

0xce06,	// (0x0002bda9) vkb2_top_grid_right_pane_g4

0x0003,

0xfd62,	// (0x0002ed05) vkb2_top_grid_right_pane_g_ParamLimits

0xfd62,	// (0x0002ed05) vkb2_top_grid_right_pane_g

0x3101,	// (0x000220a4) vkb2_top_cell_left_pane_g1

0x3118,	// (0x000220bb) vkb2_cell_keypad_pane_g1_ParamLimits

0x3118,	// (0x000220bb) vkb2_cell_keypad_pane_g1

0x9929,	// (0x000288cc) vkb2_cell_keypad_pane_t1_ParamLimits

0x9929,	// (0x000288cc) vkb2_cell_keypad_pane_t1

0x3126,	// (0x000220c9) vkb2_cell_bottom_grid_pane_ParamLimits

0x3126,	// (0x000220c9) vkb2_cell_bottom_grid_pane

0x315f,	// (0x00022102) vkb2_cell_bottom_grid_pane_g1

0xe993,	// (0x0002d936) aid_call2_pane_cp02

0xe99b,	// (0x0002d93e) aid_call_pane_cp02

0xe9a3,	// (0x0002d946) clock_digital_number_pane_cp10

0xe9ab,	// (0x0002d94e) clock_digital_number_pane_cp11

0xe9b3,	// (0x0002d956) clock_digital_number_pane_cp12

0xe9bb,	// (0x0002d95e) clock_digital_number_pane_cp13

0xe9c3,	// (0x0002d966) clock_digital_separator_pane_cp10

0x4594,	// (0x00023537) popup_clock_digital_analogue_window_cp2_g1

0x4594,	// (0x00023537) popup_clock_digital_analogue_window_cp2_g2

0xe9cb,	// (0x0002d96e) popup_clock_digital_analogue_window_cp2_g3

0x4594,	// (0x00023537) popup_clock_digital_analogue_window_cp2_g4

0xe9cb,	// (0x0002d96e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2c,	// (0x0002eccf) popup_clock_digital_analogue_window_cp2_g

0xe9d3,	// (0x0002d976) popup_clock_digital_analogue_window_cp2_t1

0xe9e1,	// (0x0002d984) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0178,	// (0x0001f11b) popup_clock_digital_analogue_window_cp2_t

0x7a27,	// (0x000269ca) clock_digital_number_pane_cp10_g1

0x7a27,	// (0x000269ca) clock_digital_number_pane_cp10_g2

0x0001,

0xfb29,	// (0x0002eacc) clock_digital_number_pane_cp10_g

0x7a27,	// (0x000269ca) clock_digital_separator_pane_cp10_g1

0x7a27,	// (0x000269ca) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb29,	// (0x0002eacc) clock_digital_separator_pane_cp10_g

0x9358,	// (0x000282fb) uniindi_top_pane_g3

0x9369,	// (0x0002830c) uniindi_top_pane_g4

0x2f39,	// (0x00021edc) vkb2_row_keypad_pane_ParamLimits

0x2f39,	// (0x00021edc) vkb2_row_keypad_pane

0x317b,	// (0x0002211e) vkb2_cell_t_keypad_pane_ParamLimits

0x317b,	// (0x0002211e) vkb2_cell_t_keypad_pane

0x318b,	// (0x0002212e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x318b,	// (0x0002212e) vkb2_cell_t_keypad_pane_cp08

0x319e,	// (0x00022141) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x319e,	// (0x00022141) vkb2_cell_t_keypad_pane_cp09

0x31b2,	// (0x00022155) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x31b2,	// (0x00022155) vkb2_cell_t_keypad_pane_cp01

0x31c3,	// (0x00022166) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x31c3,	// (0x00022166) vkb2_cell_t_keypad_pane_cp02

0x31d4,	// (0x00022177) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x31d4,	// (0x00022177) vkb2_cell_t_keypad_pane_cp03

0x31e5,	// (0x00022188) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x31e5,	// (0x00022188) vkb2_cell_t_keypad_pane_cp04

0x31f6,	// (0x00022199) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x31f6,	// (0x00022199) vkb2_cell_t_keypad_pane_cp05

0x3207,	// (0x000221aa) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3207,	// (0x000221aa) vkb2_cell_t_keypad_pane_cp06

0x3218,	// (0x000221bb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3218,	// (0x000221bb) vkb2_cell_t_keypad_pane_cp07

0x3229,	// (0x000221cc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3229,	// (0x000221cc) vkb2_cell_t_keypad_pane_cp10

0x7ca5,	// (0x00026c48) vkb2_cell_t_keypad_pane_g1

0x9940,	// (0x000288e3) vkb2_cell_t_keypad_pane_t1

0x35b5,	// (0x00022558) popup_grid_graphic2_window

0xed0f,	// (0x0002dcb2) aid_size_cell_graphic2_ParamLimits

0xed0f,	// (0x0002dcb2) aid_size_cell_graphic2

0xed4d,	// (0x0002dcf0) bg_popup_window_pane_cp21_ParamLimits

0xed4d,	// (0x0002dcf0) bg_popup_window_pane_cp21

0xed5b,	// (0x0002dcfe) graphic2_pages_pane_ParamLimits

0xed5b,	// (0x0002dcfe) graphic2_pages_pane

0xedb1,	// (0x0002dd54) grid_graphic2_control_pane_ParamLimits

0xedb1,	// (0x0002dd54) grid_graphic2_control_pane

0xedf9,	// (0x0002dd9c) grid_graphic2_pane_ParamLimits

0xedf9,	// (0x0002dd9c) grid_graphic2_pane

0xee80,	// (0x0002de23) cell_graphic2_pane

0x35b5,	// (0x00022558) main_comp_mode_pane

0x8bd8,	// (0x00027b7b) list_ai3_gene_pane_ParamLimits

0xe6da,	// (0x0002d67d) bg_popup_window_pane_cp19_ParamLimits

0x8fae,	// (0x00027f51) bg_touch_area_indi_pane_ParamLimits

0x8fae,	// (0x00027f51) bg_touch_area_indi_pane

0x8fc4,	// (0x00027f67) bg_touch_area_indi_pane_cp01_ParamLimits

0x8fc4,	// (0x00027f67) bg_touch_area_indi_pane_cp01

0x8fda,	// (0x00027f7d) bg_touch_area_indi_pane_cp02_ParamLimits

0x8fda,	// (0x00027f7d) bg_touch_area_indi_pane_cp02

0x8ff2,	// (0x00027f95) bg_touch_area_indi_pane_cp03_ParamLimits

0x8ff2,	// (0x00027f95) bg_touch_area_indi_pane_cp03

0x900c,	// (0x00027faf) popup_slider_window_g1_ParamLimits

0x9028,	// (0x00027fcb) popup_slider_window_g2_ParamLimits

0x9044,	// (0x00027fe7) popup_slider_window_g3_ParamLimits

0xfccb,	// (0x0002ec6e) popup_slider_window_g_ParamLimits

0x90a0,	// (0x00028043) popup_slider_window_t1_ParamLimits

0x9114,	// (0x000280b7) small_volume_slider_vertical_pane_ParamLimits

0xee80,	// (0x0002de23) cell_graphic2_pane_ParamLimits

0xeedd,	// (0x0002de80) bg_button_pane_cp10_ParamLimits

0xeedd,	// (0x0002de80) bg_button_pane_cp10

0xeef0,	// (0x0002de93) bg_button_pane_cp11_ParamLimits

0xeef0,	// (0x0002de93) bg_button_pane_cp11

0xef03,	// (0x0002dea6) graphic2_pages_pane_g1_ParamLimits

0xef03,	// (0x0002dea6) graphic2_pages_pane_g1

0xef1e,	// (0x0002dec1) graphic2_pages_pane_g2_ParamLimits

0xef1e,	// (0x0002dec1) graphic2_pages_pane_g2

0x0001,

0x01c6,	// (0x0001f169) graphic2_pages_pane_g_ParamLimits

0x01c6,	// (0x0001f169) graphic2_pages_pane_g

0xef36,	// (0x0002ded9) graphic2_pages_pane_t1_ParamLimits

0xef36,	// (0x0002ded9) graphic2_pages_pane_t1

0xef4e,	// (0x0002def1) cell_graphic2_control_pane_ParamLimits

0xef4e,	// (0x0002def1) cell_graphic2_control_pane

0xef80,	// (0x0002df23) cell_graphic2_pane_g1_ParamLimits

0xef80,	// (0x0002df23) cell_graphic2_pane_g1

0xd87c,	// (0x0002c81f) cell_graphic2_pane_g2_ParamLimits

0xd87c,	// (0x0002c81f) cell_graphic2_pane_g2

0xef8d,	// (0x0002df30) cell_graphic2_pane_g3_ParamLimits

0xef8d,	// (0x0002df30) cell_graphic2_pane_g3

0xd889,	// (0x0002c82c) cell_graphic2_pane_g4_ParamLimits

0xd889,	// (0x0002c82c) cell_graphic2_pane_g4

0xef9a,	// (0x0002df3d) cell_graphic2_pane_g5_ParamLimits

0xef9a,	// (0x0002df3d) cell_graphic2_pane_g5

0x0004,

0xfd6b,	// (0x0002ed0e) cell_graphic2_pane_g_ParamLimits

0xfd6b,	// (0x0002ed0e) cell_graphic2_pane_g

0xefba,	// (0x0002df5d) cell_graphic2_pane_t1_ParamLimits

0xefba,	// (0x0002df5d) cell_graphic2_pane_t1

0x60df,	// (0x00025082) grid_highlight_pane_cp11_ParamLimits

0x60df,	// (0x00025082) grid_highlight_pane_cp11

0x3932,	// (0x000228d5) bg_button_pane_cp05

0xefef,	// (0x0002df92) cell_graphic2_control_pane_g1

0x7a27,	// (0x000269ca) bg_touch_area_indi_pane_g1

0x9c10,	// (0x00028bb3) aid_cmod_rocker_key_size

0x9c1a,	// (0x00028bbd) aid_cmode_itu_key_size

0x9c24,	// (0x00028bc7) main_cmode_video_pane

0x9c2e,	// (0x00028bd1) main_comp_mode_itu_pane

0x9c3a,	// (0x00028bdd) main_comp_mode_rocker_pane

0x9c46,	// (0x00028be9) cell_cmode_rocker_pane_ParamLimits

0x9c46,	// (0x00028be9) cell_cmode_rocker_pane

0x9c58,	// (0x00028bfb) cell_cmode_itu_pane_ParamLimits

0x9c58,	// (0x00028bfb) cell_cmode_itu_pane

0x3f15,	// (0x00022eb8) bg_button_pane_cp06_ParamLimits

0x3f15,	// (0x00022eb8) bg_button_pane_cp06

0x7ca5,	// (0x00026c48) cell_cmode_rocker_pane_g1_ParamLimits

0x7ca5,	// (0x00026c48) cell_cmode_rocker_pane_g1

0x91b8,	// (0x0002815b) cell_cmode_rocker_pane_g2_ParamLimits

0x91b8,	// (0x0002815b) cell_cmode_rocker_pane_g2

0x0001,

0xfd76,	// (0x0002ed19) cell_cmode_rocker_pane_g_ParamLimits

0xfd76,	// (0x0002ed19) cell_cmode_rocker_pane_g

0x35b5,	// (0x00022558) bg_button_pane_cp07

0x9c6d,	// (0x00028c10) cell_cmode_itu_pane_g1

0x9c76,	// (0x00028c19) cell_cmode_itu_pane_t1

0x9c84,	// (0x00028c27) cell_cmode_itu_pane_t2

0x0001,

0xfd7b,	// (0x0002ed1e) cell_cmode_itu_pane_t

0x93db,	// (0x0002837e) aid_touch_ctrl_left

0x93e3,	// (0x00028386) aid_touch_ctrl_right

0x35b5,	// (0x00022558) compa_mode_pane

0xf015,	// (0x0002dfb8) aid_cmod_rocker_key_size_cp

0xf01f,	// (0x0002dfc2) aid_cmode_itu_key_size_cp

0x9ca6,	// (0x00028c49) compa_mode_pane_g1

0x9cae,	// (0x00028c51) compa_mode_pane_g2

0x9cb6,	// (0x00028c59) compa_mode_pane_g3

0x0002,

0xfd80,	// (0x0002ed23) compa_mode_pane_g

0xf029,	// (0x0002dfcc) main_comp_mode_itu_pane_cp

0xf031,	// (0x0002dfd4) main_comp_mode_rocker_pane_cp

0xf039,	// (0x0002dfdc) cell_cmode_itu_pane_cp_ParamLimits

0xf039,	// (0x0002dfdc) cell_cmode_itu_pane_cp

0xf04e,	// (0x0002dff1) cell_cmode_rocker_pane_cp_ParamLimits

0xf04e,	// (0x0002dff1) cell_cmode_rocker_pane_cp

0x3f15,	// (0x00022eb8) bg_button_pane_cp06_cp_ParamLimits

0x3f15,	// (0x00022eb8) bg_button_pane_cp06_cp

0x7ca5,	// (0x00026c48) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7ca5,	// (0x00026c48) cell_cmode_rocker_pane_g1_cp

0x7a27,	// (0x000269ca) cell_cmode_rocker_pane_g2_cp

0x35b5,	// (0x00022558) bg_button_pane_cp07_cp

0xf060,	// (0x0002e003) cell_cmode_itu_pane_g1_cp

0xf069,	// (0x0002e00c) cell_cmode_itu_pane_t1_cp

0xf069,	// (0x0002e00c) cell_cmode_itu_pane_t2_cp

0xdd4b,	// (0x0002ccee) settings_code_pane_cp2

0x36a9,	// (0x0002264c) bg_popup_window_pane_cp3_ParamLimits

0x3b0c,	// (0x00022aaf) heading_pane_cp3_ParamLimits

0x3b18,	// (0x00022abb) listscroll_popup_graphic_pane_ParamLimits

0x2852,	// (0x000217f5) fep_hwr_aid_pane_ParamLimits

0x2c1b,	// (0x00021bbe) aid_touch_sctrl_top_ParamLimits

0x2c28,	// (0x00021bcb) sctrl_sk_top_pane_g1_ParamLimits

0x7ca5,	// (0x00026c48) sctrl_sk_top_pane_g2_ParamLimits

0xfce4,	// (0x0002ec87) sctrl_sk_top_pane_g_ParamLimits

0x2c35,	// (0x00021bd8) sctrl_sk_top_pane_t1_ParamLimits

0x2c1b,	// (0x00021bbe) aid_touch_sctrl_bottom_ParamLimits

0x2c35,	// (0x00021bd8) sctrl_sk_bottom_pane_t1_ParamLimits

0x9324,	// (0x000282c7) aid_area_touch_clock

0xcc34,	// (0x0002bbd7) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc34,	// (0x0002bbd7) aid_vkb2_area_top_pane_cell

0xccdf,	// (0x0002bc82) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xccdf,	// (0x0002bc82) aid_vkb2_area_bottom_pane_cell

0x988b,	// (0x0002882e) popup_char_count_window

0x9d03,	// (0x00028ca6) popup_char_count_window_g1

0x9d0c,	// (0x00028caf) popup_char_count_window_g2

0x9d15,	// (0x00028cb8) popup_char_count_window_g3

0x0002,

0xfd87,	// (0x0002ed2a) popup_char_count_window_g

0x9d1e,	// (0x00028cc1) popup_char_count_window_t1

0x2cd6,	// (0x00021c79) popup_fep_char_preview_window_ParamLimits

0x2cd6,	// (0x00021c79) popup_fep_char_preview_window

0xcc54,	// (0x0002bbf7) vkb2_top_candi_pane_ParamLimits

0xcc54,	// (0x0002bbf7) vkb2_top_candi_pane

0xf077,	// (0x0002e01a) cell_vkb2_top_candi_pane_ParamLimits

0xf077,	// (0x0002e01a) cell_vkb2_top_candi_pane

0x5a6b,	// (0x00024a0e) bg_popup_fep_char_preview_window_ParamLimits

0x5a6b,	// (0x00024a0e) bg_popup_fep_char_preview_window

0x323e,	// (0x000221e1) popup_fep_char_preview_window_t1_ParamLimits

0x323e,	// (0x000221e1) popup_fep_char_preview_window_t1

0x9d79,	// (0x00028d1c) bg_popup_fep_char_preview_window_g1

0x9d81,	// (0x00028d24) bg_popup_fep_char_preview_window_g2

0x9d89,	// (0x00028d2c) bg_popup_fep_char_preview_window_g3

0x9d91,	// (0x00028d34) bg_popup_fep_char_preview_window_g4

0x9d99,	// (0x00028d3c) bg_popup_fep_char_preview_window_g5

0x3278,	// (0x0002221b) bg_popup_fep_char_preview_window_g6

0x9da1,	// (0x00028d44) bg_popup_fep_char_preview_window_g7

0x9da9,	// (0x00028d4c) bg_popup_fep_char_preview_window_g8

0x9db1,	// (0x00028d54) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd8e,	// (0x0002ed31) bg_popup_fep_char_preview_window_g

0x7ca5,	// (0x00026c48) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7ca5,	// (0x00026c48) cell_vkb2_top_candi_pane_g1

0x7fbc,	// (0x00026f5f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7fbc,	// (0x00026f5f) cell_vkb2_top_candi_pane_g2

0x7fdd,	// (0x00026f80) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7fdd,	// (0x00026f80) cell_vkb2_top_candi_pane_g3

0x3280,	// (0x00022223) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3280,	// (0x00022223) cell_vkb2_top_candi_pane_g4

0x9db9,	// (0x00028d5c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9db9,	// (0x00028d5c) cell_vkb2_top_candi_pane_g5

0x91b8,	// (0x0002815b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x91b8,	// (0x0002815b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfda1,	// (0x0002ed44) cell_vkb2_top_candi_pane_g_ParamLimits

0xfda1,	// (0x0002ed44) cell_vkb2_top_candi_pane_g

0x32a1,	// (0x00022244) cell_vkb2_top_candi_pane_t1

0x26f4,	// (0x00021697) aid_size_touch_slider_mark_ParamLimits

0x26f4,	// (0x00021697) aid_size_touch_slider_mark

0xed97,	// (0x0002dd3a) grid_graphic2_catg_pane_ParamLimits

0xed97,	// (0x0002dd3a) grid_graphic2_catg_pane

0xee53,	// (0x0002ddf6) popup_grid_graphic2_window_t1_ParamLimits

0xee53,	// (0x0002ddf6) popup_grid_graphic2_window_t1

0xee69,	// (0x0002de0c) popup_grid_graphic2_window_t2_ParamLimits

0xee69,	// (0x0002de0c) popup_grid_graphic2_window_t2

0x0001,

0x01c1,	// (0x0001f164) popup_grid_graphic2_window_t_ParamLimits

0x01c1,	// (0x0001f164) popup_grid_graphic2_window_t

0x3932,	// (0x000228d5) bg_button_pane_cp05_ParamLimits

0xefef,	// (0x0002df92) cell_graphic2_control_pane_g1_ParamLimits

0xf0dd,	// (0x0002e080) cell_graphic2_catg_pane_ParamLimits

0xf0dd,	// (0x0002e080) cell_graphic2_catg_pane

0x35b5,	// (0x00022558) bg_button_pane_cp12

0xf0ef,	// (0x0002e092) cell_graphic2_catg_pane_g1

0x92f0,	// (0x00028293) cell_tb_ext_pane_t1_ParamLimits

0x3078,	// (0x0002201b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3078,	// (0x0002201b) vkb2_top_cell_right_narrow_pane

0x3090,	// (0x00022033) vkb2_top_cell_right_wide_pane_ParamLimits

0x3090,	// (0x00022033) vkb2_top_cell_right_wide_pane

0x2844,	// (0x000217e7) bg_vkb2_func_pane_ParamLimits

0x2844,	// (0x000217e7) bg_vkb2_func_pane

0x3101,	// (0x000220a4) vkb2_top_cell_left_pane_g1_ParamLimits

0x2844,	// (0x000217e7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2844,	// (0x000217e7) bg_vkb2_fuc_pane_cp03

0x315f,	// (0x00022102) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x53ee,	// (0x00024391) bg_vkb2_func_pane_g1

0x53f6,	// (0x00024399) bg_vkb2_func_pane_g2

0x5406,	// (0x000243a9) bg_vkb2_func_pane_g3

0x53fe,	// (0x000243a1) bg_vkb2_func_pane_g4

0x540e,	// (0x000243b1) bg_vkb2_func_pane_g5

0x5416,	// (0x000243b9) bg_vkb2_func_pane_g6

0x541e,	// (0x000243c1) bg_vkb2_func_pane_g7

0x5426,	// (0x000243c9) bg_vkb2_func_pane_g8

0x53e6,	// (0x00024389) bg_vkb2_func_pane_g9

0x0008,

0xfdae,	// (0x0002ed51) bg_vkb2_func_pane_g

0x2844,	// (0x000217e7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2844,	// (0x000217e7) bg_vkb2_fuc_pane_cp01

0x3101,	// (0x000220a4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3101,	// (0x000220a4) vkb2_top_cell_right_wide_pane_g1

0x2844,	// (0x000217e7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2844,	// (0x000217e7) bg_vkb2_fuc_pane_cp02

0x315f,	// (0x00022102) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x315f,	// (0x00022102) vkb2_top_cell_right_narrow_pane_g1

0xe61a,	// (0x0002d5bd) aid_touch_area_decrease_ParamLimits

0xe61a,	// (0x0002d5bd) aid_touch_area_decrease

0xe64e,	// (0x0002d5f1) aid_touch_area_increase_ParamLimits

0xe64e,	// (0x0002d5f1) aid_touch_area_increase

0xe676,	// (0x0002d619) aid_touch_area_mute_ParamLimits

0xe676,	// (0x0002d619) aid_touch_area_mute

0xe6a6,	// (0x0002d649) aid_touch_area_slider_ParamLimits

0xe6a6,	// (0x0002d649) aid_touch_area_slider

0xe6e6,	// (0x0002d689) popup_slider_window_g4_ParamLimits

0xe6e6,	// (0x0002d689) popup_slider_window_g4

0xe70e,	// (0x0002d6b1) popup_slider_window_g5_ParamLimits

0xe70e,	// (0x0002d6b1) popup_slider_window_g5

0xe742,	// (0x0002d6e5) popup_slider_window_g6_ParamLimits

0xe742,	// (0x0002d6e5) popup_slider_window_g6

0x90ce,	// (0x00028071) popup_slider_window_t2_ParamLimits

0x90ce,	// (0x00028071) popup_slider_window_t2

0x0001,

0xfcd8,	// (0x0002ec7b) popup_slider_window_t_ParamLimits

0xfcd8,	// (0x0002ec7b) popup_slider_window_t

0xe75e,	// (0x0002d701) slider_pane_ParamLimits

0xe75e,	// (0x0002d701) slider_pane

0x9df5,	// (0x00028d98) slider_pane_g1_ParamLimits

0x9df5,	// (0x00028d98) slider_pane_g1

0x9e09,	// (0x00028dac) slider_pane_g2_ParamLimits

0x9e09,	// (0x00028dac) slider_pane_g2

0x9e1f,	// (0x00028dc2) slider_pane_g3_ParamLimits

0x9e1f,	// (0x00028dc2) slider_pane_g3

0x0003,

0xfdc1,	// (0x0002ed64) slider_pane_g_ParamLimits

0xfdc1,	// (0x0002ed64) slider_pane_g

0xc914,	// (0x0002b8b7) popup_tb_float_extension_window_ParamLimits

0xc914,	// (0x0002b8b7) popup_tb_float_extension_window

0x9e4b,	// (0x00028dee) aid_size_cell_tb_float_ext

0x35b5,	// (0x00022558) bg_popup_sub_window_cp28

0x9e57,	// (0x00028dfa) grid_tb_float_ext_pane

0x9e61,	// (0x00028e04) cell_tb_float_ext_pane_ParamLimits

0x9e61,	// (0x00028e04) cell_tb_float_ext_pane

0x9e7b,	// (0x00028e1e) cell_tb_float_ext_pane_g1

0x9e84,	// (0x00028e27) grid_highlight_pane_cp12

0xca3d,	// (0x0002b9e0) cell_last_hwr_side_pane_ParamLimits

0xca3d,	// (0x0002b9e0) cell_last_hwr_side_pane

0x7a27,	// (0x000269ca) cell_last_hwr_side_pane_g1

0x9e8d,	// (0x00028e30) cell_last_hwr_side_pane_g2

0x0001,

0xfdca,	// (0x0002ed6d) cell_last_hwr_side_pane_g

0xcdbb,	// (0x0002bd5e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcdbb,	// (0x0002bd5e) vkb2_area_bottom_space_btn_pane

0x7ca5,	// (0x00026c48) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9940,	// (0x000288e3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x32a1,	// (0x00022244) cell_vkb2_top_candi_pane_t1_ParamLimits

0x32c0,	// (0x00022263) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x32c0,	// (0x00022263) vkb2_area_bottom_space_btn_pane_g1

0x32fa,	// (0x0002229d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x32fa,	// (0x0002229d) vkb2_area_bottom_space_btn_pane_g2

0x3330,	// (0x000222d3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3330,	// (0x000222d3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdcf,	// (0x0002ed72) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdcf,	// (0x0002ed72) vkb2_area_bottom_space_btn_pane_g

0x28f9,	// (0x0002189c) cel_fep_hwr_func_pane_ParamLimits

0x28f9,	// (0x0002189c) cel_fep_hwr_func_pane

0xca12,	// (0x0002b9b5) cell_hwr_side_button_pane_ParamLimits

0xca12,	// (0x0002b9b5) cell_hwr_side_button_pane

0x9324,	// (0x000282c7) aid_area_touch_clock_ParamLimits

0x3932,	// (0x000228d5) bg_uniindi_top_pane_ParamLimits

0x9336,	// (0x000282d9) uniindi_top_pane_g1_ParamLimits

0x934c,	// (0x000282ef) uniindi_top_pane_g2_ParamLimits

0x9358,	// (0x000282fb) uniindi_top_pane_g3_ParamLimits

0x9369,	// (0x0002830c) uniindi_top_pane_g4_ParamLimits

0xfd0b,	// (0x0002ecae) uniindi_top_pane_g_ParamLimits

0x9376,	// (0x00028319) uniindi_top_pane_t1_ParamLimits

0x3932,	// (0x000228d5) bg_vkb2_func_pane_cp01_ParamLimits

0x3932,	// (0x000228d5) bg_vkb2_func_pane_cp01

0x9e96,	// (0x00028e39) cel_fep_hwr_func_pane_g1_ParamLimits

0x9e96,	// (0x00028e39) cel_fep_hwr_func_pane_g1

0x3932,	// (0x000228d5) bg_vkb2_func_pane_cp02_ParamLimits

0x3932,	// (0x000228d5) bg_vkb2_func_pane_cp02

0x9e96,	// (0x00028e39) cell_hwr_side_button_pane_g1_ParamLimits

0x9e96,	// (0x00028e39) cell_hwr_side_button_pane_g1

0x5267,	// (0x0002420a) status_pane_g4_ParamLimits

0x5267,	// (0x0002420a) status_pane_g4

0x5281,	// (0x00024224) status_pane_t1

0x7761,	// (0x00026704) form2_midp_gauge_slider_cont_pane

0x7769,	// (0x0002670c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe006,	// (0x0002cfa9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe018,	// (0x0002cfbb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadc,	// (0x0002ea7f) form2_midp_gauge_slider_pane_t_ParamLimits

0x779f,	// (0x00026742) form2_midp_slider_pane_ParamLimits

0x2c96,	// (0x00021c39) aid_size_cell_func_vkb2_ParamLimits

0x2c96,	// (0x00021c39) aid_size_cell_func_vkb2

0x9e37,	// (0x00028dda) slider_pane_g4_ParamLimits

0x9e37,	// (0x00028dda) slider_pane_g4

0xce1c,	// (0x0002bdbf) form2_midp_gauge_slider_pane_t2_cp01

0xce2a,	// (0x0002bdcd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce2a,	// (0x0002bdcd) form2_midp_gauge_slider_pane_t3_cp01

0x33a5,	// (0x00022348) form2_midp_slider_pane_cp01

0x35b5,	// (0x00022558) navi_smil_pane

0x9ecf,	// (0x00028e72) navi_smil_pane_g1

0x9ed7,	// (0x00028e7a) navi_smil_pane_t1

0x9ea4,	// (0x00028e47) form2_midp_slider_pane_g1

0x9ead,	// (0x00028e50) form2_midp_slider_pane_g2

0x9eb5,	// (0x00028e58) form2_midp_slider_pane_g3

0x9ea4,	// (0x00028e47) form2_midp_slider_pane_g4

0xf0f8,	// (0x0002e09b) form2_midp_slider_pane_g5

0x0004,

0xfdd8,	// (0x0002ed7b) form2_midp_slider_pane_g

0x336a,	// (0x0002230d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x336a,	// (0x0002230d) vkb2_area_bottom_space_btn_pane_g4

0xd6f6,	// (0x0002c699) lc0_navi_pane_ParamLimits

0xd6f6,	// (0x0002c699) lc0_navi_pane

0xd760,	// (0x0002c703) lc0_stat_indi_pane_ParamLimits

0xd760,	// (0x0002c703) lc0_stat_indi_pane

0xd775,	// (0x0002c718) ls0_title_pane_ParamLimits

0xd775,	// (0x0002c718) ls0_title_pane

0x3f15,	// (0x00022eb8) bg_popup_sub_pane_cp14_ParamLimits

0x930b,	// (0x000282ae) list_uniindi_pane_ParamLimits

0x9317,	// (0x000282ba) uniindi_top_pane_ParamLimits

0x93b3,	// (0x00028356) list_single_uniindi_pane_g1_ParamLimits

0x93c6,	// (0x00028369) list_single_uniindi_pane_t1_ParamLimits

0xce47,	// (0x0002bdea) lc0_stat_clock_pane_ParamLimits

0xce47,	// (0x0002bdea) lc0_stat_clock_pane

0xf103,	// (0x0002e0a6) lc0_stat_indi_pane_g1_ParamLimits

0xf103,	// (0x0002e0a6) lc0_stat_indi_pane_g1

0xf110,	// (0x0002e0b3) lc0_stat_indi_pane_g2_ParamLimits

0xf110,	// (0x0002e0b3) lc0_stat_indi_pane_g2

0x0001,

0x0248,	// (0x0001f1eb) lc0_stat_indi_pane_g_ParamLimits

0x0248,	// (0x0001f1eb) lc0_stat_indi_pane_g

0xce54,	// (0x0002bdf7) lc0_uni_indicator_pane_ParamLimits

0xce54,	// (0x0002bdf7) lc0_uni_indicator_pane

0xf11d,	// (0x0002e0c0) ls0_title_pane_g1_ParamLimits

0xf11d,	// (0x0002e0c0) ls0_title_pane_g1

0xf131,	// (0x0002e0d4) ls0_title_pane_t1_ParamLimits

0xf131,	// (0x0002e0d4) ls0_title_pane_t1

0xce61,	// (0x0002be04) lc0_uni_indicator_pane_g1_ParamLimits

0xce61,	// (0x0002be04) lc0_uni_indicator_pane_g1

0x9f49,	// (0x00028eec) lc0_stat_clock_pane_t1

0x35b5,	// (0x00022558) main_ai5_pane

0x9f57,	// (0x00028efa) ai5_sk_pane_ParamLimits

0x9f57,	// (0x00028efa) ai5_sk_pane

0xf15f,	// (0x0002e102) cell_ai5_widget_pane_ParamLimits

0xf15f,	// (0x0002e102) cell_ai5_widget_pane

0xa01a,	// (0x00028fbd) aid_size_cell_widget_grid

0xa030,	// (0x00028fd3) bg_ai5_widget_pane_ParamLimits

0xa030,	// (0x00028fd3) bg_ai5_widget_pane

0xa0a4,	// (0x00029047) cell_ai5_widget_pane_g2

0xa0b4,	// (0x00029057) cell_ai5_widget_pane_g3

0xa0cb,	// (0x0002906e) cell_ai5_widget_pane_g4

0xa0d7,	// (0x0002907a) cell_ai5_widget_pane_g5

0xa0e3,	// (0x00029086) cell_ai5_widget_pane_g6

0xa0ef,	// (0x00029092) cell_ai5_widget_pane_g7

0xa137,	// (0x000290da) cell_ai5_widget_pane_t1_ParamLimits

0xa137,	// (0x000290da) cell_ai5_widget_pane_t1

0xa154,	// (0x000290f7) cell_ai5_widget_pane_t2_ParamLimits

0xa154,	// (0x000290f7) cell_ai5_widget_pane_t2

0xa16c,	// (0x0002910f) cell_ai5_widget_pane_t3_ParamLimits

0xa16c,	// (0x0002910f) cell_ai5_widget_pane_t3

0xa184,	// (0x00029127) cell_ai5_widget_pane_t4_ParamLimits

0xa184,	// (0x00029127) cell_ai5_widget_pane_t4

0xa1a1,	// (0x00029144) cell_ai5_widget_pane_t5_ParamLimits

0xa1a1,	// (0x00029144) cell_ai5_widget_pane_t5

0xa1c0,	// (0x00029163) cell_ai5_widget_pane_t6_ParamLimits

0xa1c0,	// (0x00029163) cell_ai5_widget_pane_t6

0xa1d2,	// (0x00029175) cell_ai5_widget_pane_t7_ParamLimits

0xa1d2,	// (0x00029175) cell_ai5_widget_pane_t7

0xa1eb,	// (0x0002918e) cell_ai5_widget_pane_t8_ParamLimits

0xa1eb,	// (0x0002918e) cell_ai5_widget_pane_t8

0x0009,

0xfdf8,	// (0x0002ed9b) cell_ai5_widget_pane_t_ParamLimits

0xfdf8,	// (0x0002ed9b) cell_ai5_widget_pane_t

0xa23f,	// (0x000291e2) grid_ai5_widget_pane

0x3f15,	// (0x00022eb8) highlight_cell_ai5_widget_pane_ParamLimits

0x3f15,	// (0x00022eb8) highlight_cell_ai5_widget_pane

0xf1c9,	// (0x0002e16c) ai5_sk_left_pane

0xf1d3,	// (0x0002e176) ai5_sk_middle_pane

0xf1dd,	// (0x0002e180) ai5_sk_right_pane

0xa275,	// (0x00029218) bg_ai5_widget_pane_g1_ParamLimits

0xa275,	// (0x00029218) bg_ai5_widget_pane_g1

0xa281,	// (0x00029224) bg_ai5_widget_pane_g2_ParamLimits

0xa281,	// (0x00029224) bg_ai5_widget_pane_g2

0xa28d,	// (0x00029230) bg_ai5_widget_pane_g3_ParamLimits

0xa28d,	// (0x00029230) bg_ai5_widget_pane_g3

0xa299,	// (0x0002923c) bg_ai5_widget_pane_g4_ParamLimits

0xa299,	// (0x0002923c) bg_ai5_widget_pane_g4

0xa2a5,	// (0x00029248) bg_ai5_widget_pane_g5_ParamLimits

0xa2a5,	// (0x00029248) bg_ai5_widget_pane_g5

0xa2b1,	// (0x00029254) bg_ai5_widget_pane_g6_ParamLimits

0xa2b1,	// (0x00029254) bg_ai5_widget_pane_g6

0xa2bd,	// (0x00029260) bg_ai5_widget_pane_g7_ParamLimits

0xa2bd,	// (0x00029260) bg_ai5_widget_pane_g7

0xa2c9,	// (0x0002926c) bg_ai5_widget_pane_g8_ParamLimits

0xa2c9,	// (0x0002926c) bg_ai5_widget_pane_g8

0xa2d5,	// (0x00029278) bg_ai5_widget_pane_g9_ParamLimits

0xa2d5,	// (0x00029278) bg_ai5_widget_pane_g9

0x0008,

0xfe0d,	// (0x0002edb0) bg_ai5_widget_pane_g_ParamLimits

0xfe0d,	// (0x0002edb0) bg_ai5_widget_pane_g

0xa307,	// (0x000292aa) cell_shortcut_ai5_widget_pane_ParamLimits

0xa307,	// (0x000292aa) cell_shortcut_ai5_widget_pane

0x4b9c,	// (0x00023b3f) bg_cell_shortcut_ai5_widget_pane

0xa318,	// (0x000292bb) cell_grid_ai5_widget_pane_g1

0xa321,	// (0x000292c4) highlight_cell_shortcut_ai5_widget_pane

0x53f6,	// (0x00024399) ai5_sk_left_pane_g1

0xa329,	// (0x000292cc) ai5_sk_left_pane_g2

0xa331,	// (0x000292d4) ai5_sk_left_pane_g3

0xa339,	// (0x000292dc) ai5_sk_left_pane_g4

0x0003,

0xfe20,	// (0x0002edc3) ai5_sk_left_pane_g

0xa341,	// (0x000292e4) ai5_sk_left_pane_t1

0x53ee,	// (0x00024391) ai5_sk_right_pane_g1

0xa34f,	// (0x000292f2) ai5_sk_right_pane_g2

0xa357,	// (0x000292fa) ai5_sk_right_pane_g3

0xa35f,	// (0x00029302) ai5_sk_right_pane_g4

0x0003,

0xfe29,	// (0x0002edcc) ai5_sk_right_pane_g

0xa367,	// (0x0002930a) ai5_sk_right_pane_t1

0x53ee,	// (0x00024391) ai5_sk_middle_pane_g1

0x53f6,	// (0x00024399) ai5_sk_middle_pane_g2

0x540e,	// (0x000243b1) ai5_sk_middle_pane_g3

0xa357,	// (0x000292fa) ai5_sk_middle_pane_g4

0xa331,	// (0x000292d4) ai5_sk_middle_pane_g5

0xa375,	// (0x00029318) ai5_sk_middle_pane_g6

0xf1e7,	// (0x0002e18a) ai5_sk_middle_pane_g7

0x0006,

0xfe32,	// (0x0002edd5) ai5_sk_middle_pane_g

0xd5e2,	// (0x0002c585) aid_touch_area_size_lc0_ParamLimits

0xd5e2,	// (0x0002c585) aid_touch_area_size_lc0

0x2a84,	// (0x00021a27) cell_hwr_candidate_pane_t1_ParamLimits

0x4f3e,	// (0x00023ee1) aid_touch_navi_pane

0xd896,	// (0x0002c839) status_dt_navi_pane_ParamLimits

0xd896,	// (0x0002c839) status_dt_navi_pane

0xd8ae,	// (0x0002c851) status_dt_sta_pane_ParamLimits

0xd8ae,	// (0x0002c851) status_dt_sta_pane

0xf1ef,	// (0x0002e192) dt_sta_controll_pane

0xf1fc,	// (0x0002e19f) dt_sta_indi_pane

0xf209,	// (0x0002e1ac) dt_sta_title_pane

0x3932,	// (0x000228d5) bg_dt_sta_indi_pane_ParamLimits

0x3932,	// (0x000228d5) bg_dt_sta_indi_pane

0xf21b,	// (0x0002e1be) dt_sta_battery_pane

0xf223,	// (0x0002e1c6) dt_sta_indi_pane_g1

0xa3c7,	// (0x0002936a) dt_sta_indi_pane_g2

0xa3d0,	// (0x00029373) dt_sta_indi_pane_g3

0x0002,

0xfe41,	// (0x0002ede4) dt_sta_indi_pane_g

0xa3d9,	// (0x0002937c) dt_sta_signal_pane

0x3f15,	// (0x00022eb8) bg_dt_sta_title_pane_ParamLimits

0x3f15,	// (0x00022eb8) bg_dt_sta_title_pane

0xa3e2,	// (0x00029385) dt_sta_title_pane_g1

0xa3ea,	// (0x0002938d) dt_sta_title_pane_t1_ParamLimits

0xa3ea,	// (0x0002938d) dt_sta_title_pane_t1

0x35b5,	// (0x00022558) bg_dt_sta_control_pane

0xf22c,	// (0x0002e1cf) dt_sta_controll_pane_g1

0xa408,	// (0x000293ab) bg_dt_sta_title_pane_g1

0xa411,	// (0x000293b4) bg_dt_sta_title_pane_g2

0xa41a,	// (0x000293bd) bg_dt_sta_title_pane_g3

0x0002,

0xfe48,	// (0x0002edeb) bg_dt_sta_title_pane_g

0x7a27,	// (0x000269ca) bg_dt_sta_indi_pane_g1

0xa423,	// (0x000293c6) dt_sta_signal_pane_g1

0xa42b,	// (0x000293ce) dt_sta_signal_pane_g2

0x0001,

0xfe4f,	// (0x0002edf2) dt_sta_signal_pane_g

0xa433,	// (0x000293d6) dt_sta_battery_pane_g1

0xa43c,	// (0x000293df) dt_sta_battery_pane_t1

0x7a27,	// (0x000269ca) bg_dt_sta_control_pane_g1

0x46a6,	// (0x00023649) fep_china_uni_eep_pane

0x46ae,	// (0x00023651) fep_china_uni_entry_pane_ParamLimits

0x46be,	// (0x00023661) popup_fep_china_uni_window_g1_ParamLimits

0x46ce,	// (0x00023671) popup_fep_china_uni_window_g2_ParamLimits

0x46ce,	// (0x00023671) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0002e6c6) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0002e6c6) popup_fep_china_uni_window_g

0xa44b,	// (0x000293ee) fep_china_uni_eep_pane_g1

0xa453,	// (0x000293f6) fep_china_uni_eep_pane_t1

0x9ec6,	// (0x00028e69) aid_touch_area_size_smil_player

0x508e,	// (0x00024031) lc0_clock_pane

0x5275,	// (0x00024218) status_pane_g5_ParamLimits

0x5275,	// (0x00024218) status_pane_g5

0xc496,	// (0x0002b439) popup_keymap_window

0x5233,	// (0x000241d6) status_icon_pane

0xa0b4,	// (0x00029057) cell_ai5_widget_pane_g3_ParamLimits

0xa0cb,	// (0x0002906e) cell_ai5_widget_pane_g4_ParamLimits

0xa0d7,	// (0x0002907a) cell_ai5_widget_pane_g5_ParamLimits

0xa0fb,	// (0x0002909e) cell_ai5_widget_pane_g8_ParamLimits

0xa0fb,	// (0x0002909e) cell_ai5_widget_pane_g8

0xa10f,	// (0x000290b2) cell_ai5_widget_pane_g9_ParamLimits

0xa10f,	// (0x000290b2) cell_ai5_widget_pane_g9

0xa123,	// (0x000290c6) cell_ai5_widget_pane_g10_ParamLimits

0xa123,	// (0x000290c6) cell_ai5_widget_pane_g10

0xa462,	// (0x00029405) status_icon_pane_g1

0x35b5,	// (0x00022558) bg_popup_sub_pane_cp13

0xa46a,	// (0x0002940d) popup_keymap_window_t1

0xd570,	// (0x0002c513) control_pane_g6_ParamLimits

0xd570,	// (0x0002c513) control_pane_g6

0xd57d,	// (0x0002c520) control_pane_g7_ParamLimits

0xd57d,	// (0x0002c520) control_pane_g7

0xd58a,	// (0x0002c52d) control_pane_g8_ParamLimits

0xd58a,	// (0x0002c52d) control_pane_g8

0xf1ef,	// (0x0002e192) dt_sta_controll_pane_ParamLimits

0xf1fc,	// (0x0002e19f) dt_sta_indi_pane_ParamLimits

0xf209,	// (0x0002e1ac) dt_sta_title_pane_ParamLimits

0x3e4d,	// (0x00022df0) aid_size_touch_scroll_bar_cale

0x1669,	// (0x0002060c) popup_discreet_window_ParamLimits

0x1669,	// (0x0002060c) popup_discreet_window

0xc086,	// (0x0002b029) popup_sk_window

0x5a6b,	// (0x00024a0e) bg_popup_sub_pane_cp28_ParamLimits

0x5a6b,	// (0x00024a0e) bg_popup_sub_pane_cp28

0xa478,	// (0x0002941b) popup_discreet_window_g1_ParamLimits

0xa478,	// (0x0002941b) popup_discreet_window_g1

0xa498,	// (0x0002943b) popup_discreet_window_t1_ParamLimits

0xa498,	// (0x0002943b) popup_discreet_window_t1

0xa4b6,	// (0x00029459) popup_discreet_window_t2_ParamLimits

0xa4b6,	// (0x00029459) popup_discreet_window_t2

0x0002,

0xfe54,	// (0x0002edf7) popup_discreet_window_t_ParamLimits

0xfe54,	// (0x0002edf7) popup_discreet_window_t

0x33dc,	// (0x0002237f) popup_sk_window_g1

0x33e6,	// (0x00022389) popup_sk_window_g2

0x0001,

0xfe5b,	// (0x0002edfe) popup_sk_window_g

0x33f0,	// (0x00022393) popup_sk_window_t1

0x33fe,	// (0x000223a1) popup_sk_window_t1_copy1

0xa0a4,	// (0x00029047) cell_ai5_widget_pane_g2_ParamLimits

0xa1fd,	// (0x000291a0) cell_ai5_widget_pane_t9_ParamLimits

0xa1fd,	// (0x000291a0) cell_ai5_widget_pane_t9

0x35b5,	// (0x00022558) main_fep_fshwr2_pane

0xce88,	// (0x0002be2b) aid_fshwr2_btn_pane

0xce99,	// (0x0002be3c) aid_fshwr2_syb_pane

0xceaa,	// (0x0002be4d) aid_fshwr2_txt_pane

0xceb6,	// (0x0002be59) fshwr2_func_candi_pane

0xced5,	// (0x0002be78) fshwr2_hwr_syb_pane

0xcef0,	// (0x0002be93) fshwr2_icf_pane

0x35b5,	// (0x00022558) fshwr2_icf_bg_pane

0xa508,	// (0x000294ab) fshwr2_icf_pane_t1_ParamLimits

0xa508,	// (0x000294ab) fshwr2_icf_pane_t1

0x4594,	// (0x00023537) fshwr2_func_candi_pane_g1

0xf235,	// (0x0002e1d8) fshwr2_func_candi_row_pane_ParamLimits

0xf235,	// (0x0002e1d8) fshwr2_func_candi_row_pane

0xf24d,	// (0x0002e1f0) cell_fshwr2_syb_pane_ParamLimits

0xf24d,	// (0x0002e1f0) cell_fshwr2_syb_pane

0x7ca5,	// (0x00026c48) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7ca5,	// (0x00026c48) fshwr2_hwr_syb_pane_g1

0x35b5,	// (0x00022558) bg_popup_call_pane_cp01

0xf267,	// (0x0002e20a) fshwr2_func_candi_cell_pane_ParamLimits

0xf267,	// (0x0002e20a) fshwr2_func_candi_cell_pane

0xa575,	// (0x00029518) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa575,	// (0x00029518) fshwr2_func_candi_cell_bg_pane

0xf292,	// (0x0002e235) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf292,	// (0x0002e235) fshwr2_func_candi_cell_pane_g1

0xa5a9,	// (0x0002954c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa5a9,	// (0x0002954c) fshwr2_func_candi_cell_pane_t1

0x35b5,	// (0x00022558) bg_button_pane_cp08

0x4b9c,	// (0x00023b3f) cell_fshwr2_syb_bg_pane

0xf2ba,	// (0x0002e25d) cell_fshwr2_syb_bg_pane_g1

0xf2c2,	// (0x0002e265) cell_fshwr2_syb_bg_pane_t1

0x3f15,	// (0x00022eb8) main_tmo_pane

0xdb7a,	// (0x0002cb1d) uni_indicator_pane_g1_ParamLimits

0xdb91,	// (0x0002cb34) uni_indicator_pane_g2_ParamLimits

0xdba7,	// (0x0002cb4a) uni_indicator_pane_g3_ParamLimits

0x65b6,	// (0x00025559) uni_indicator_pane_g4_ParamLimits

0x65b6,	// (0x00025559) uni_indicator_pane_g4

0x65ca,	// (0x0002556d) uni_indicator_pane_g5_ParamLimits

0x65ca,	// (0x0002556d) uni_indicator_pane_g5

0x65ca,	// (0x0002556d) uni_indicator_pane_g6_ParamLimits

0x65ca,	// (0x0002556d) uni_indicator_pane_g6

0xf91b,	// (0x0002e8be) uni_indicator_pane_g_ParamLimits

0xe5f6,	// (0x0002d599) popup_tmo_note_window_ParamLimits

0xe5f6,	// (0x0002d599) popup_tmo_note_window

0x3f15,	// (0x00022eb8) fshwr2_bg_pane

0xf2ab,	// (0x0002e24e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf2ab,	// (0x0002e24e) fshwr2_func_candi_cell_pane_g2

0x0001,

0x02ca,	// (0x0001f26d) fshwr2_func_candi_cell_pane_g_ParamLimits

0x02ca,	// (0x0001f26d) fshwr2_func_candi_cell_pane_g

0x7a27,	// (0x000269ca) bg_popup_window_pane_cp01

0xa5d3,	// (0x00029576) bg_popup_window_pane_g1_cp01

0xa5dc,	// (0x0002957f) bg_popup_window_pane_cp22_ParamLimits

0xa5dc,	// (0x0002957f) bg_popup_window_pane_cp22

0xa5ea,	// (0x0002958d) listscroll_tmo_link_pane_ParamLimits

0xa5ea,	// (0x0002958d) listscroll_tmo_link_pane

0xa62a,	// (0x000295cd) popup_tmo_note_window_g1_ParamLimits

0xa62a,	// (0x000295cd) popup_tmo_note_window_g1

0xa637,	// (0x000295da) tmo_note_info_pane_ParamLimits

0xa637,	// (0x000295da) tmo_note_info_pane

0xf2d1,	// (0x0002e274) list_tmo_note_info_pane_g1_ParamLimits

0xf2d1,	// (0x0002e274) list_tmo_note_info_pane_g1

0xa668,	// (0x0002960b) list_tmo_note_info_pane_g2_ParamLimits

0xa668,	// (0x0002960b) list_tmo_note_info_pane_g2

0x0001,

0xfe60,	// (0x0002ee03) list_tmo_note_info_pane_g_ParamLimits

0xfe60,	// (0x0002ee03) list_tmo_note_info_pane_g

0xa684,	// (0x00029627) list_tmo_note_info_text_pane_ParamLimits

0xa684,	// (0x00029627) list_tmo_note_info_text_pane

0xa705,	// (0x000296a8) list_tmo_link_pane

0xa712,	// (0x000296b5) scroll_pane_cp20

0xa71f,	// (0x000296c2) list_single_tmo_link_pane_ParamLimits

0xa71f,	// (0x000296c2) list_single_tmo_link_pane

0xa72f,	// (0x000296d2) list_single_tmo_link_pane_t1

0xa73d,	// (0x000296e0) list_tmo_note_info_text_pane_t1_ParamLimits

0xa73d,	// (0x000296e0) list_tmo_note_info_text_pane_t1

0xd2cc,	// (0x0002c26f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd2cc,	// (0x0002c26f) aid_size_touch_scroll_bar_cp01

0xbb4c,	// (0x0002aaef) aid_size_touch_slider_marker

0xc076,	// (0x0002b019) popup_settings_window_ParamLimits

0xc076,	// (0x0002b019) popup_settings_window

0x0aef,	// (0x0001fa92) popup_candi_list_indi_window

0x4f3e,	// (0x00023ee1) aid_touch_navi_pane_ParamLimits

0x2bef,	// (0x00021b92) rs_clock_indi_pane

0x2bf8,	// (0x00021b9b) sctrl_sk_bottom_pane_ParamLimits

0x2c09,	// (0x00021bac) sctrl_sk_top_pane_ParamLimits

0x2cf0,	// (0x00021c93) popup_fep_tooltip_window

0xa01a,	// (0x00028fbd) aid_size_cell_widget_grid_ParamLimits

0xa08f,	// (0x00029032) cell_ai5_widget_pane_g1_ParamLimits

0xa08f,	// (0x00029032) cell_ai5_widget_pane_g1

0xa0e3,	// (0x00029086) cell_ai5_widget_pane_g6_ParamLimits

0xa0ef,	// (0x00029092) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfde3,	// (0x0002ed86) cell_ai5_widget_pane_g_ParamLimits

0xfde3,	// (0x0002ed86) cell_ai5_widget_pane_g

0xa221,	// (0x000291c4) cell_ai5_widget_pane_t10_ParamLimits

0xa221,	// (0x000291c4) cell_ai5_widget_pane_t10

0xa23f,	// (0x000291e2) grid_ai5_widget_pane_ParamLimits

0xa2e1,	// (0x00029284) cell_contacts_ai5_widget_pane_ParamLimits

0xa2e1,	// (0x00029284) cell_contacts_ai5_widget_pane

0xa4cb,	// (0x0002946e) popup_discreet_window_t3_ParamLimits

0xa4cb,	// (0x0002946e) popup_discreet_window_t3

0xcf08,	// (0x0002beab) popup_fshwr2_char_preview_window_ParamLimits

0xcf08,	// (0x0002beab) popup_fshwr2_char_preview_window

0xf2e8,	// (0x0002e28b) tmo_note_info_pane_t1

0xf2fd,	// (0x0002e2a0) tmo_note_info_pane_t2

0xf314,	// (0x0002e2b7) tmo_note_info_pane_t3

0xa6e1,	// (0x00029684) tmo_note_info_pane_t4

0xa6f3,	// (0x00029696) tmo_note_info_pane_t5

0x0004,

0xfe65,	// (0x0002ee08) tmo_note_info_pane_t

0xa705,	// (0x000296a8) list_tmo_link_pane_ParamLimits

0xa712,	// (0x000296b5) scroll_pane_cp20_ParamLimits

0x35b5,	// (0x00022558) bg_popup_fep_char_preview_window_cp01

0xa756,	// (0x000296f9) popup_fshwr2_char_preview_window_t1

0xa764,	// (0x00029707) popup_candi_list_indi_window_g1

0xa76d,	// (0x00029710) bg_cell_contacts_ai5_widget_pane

0xa779,	// (0x0002971c) cell_contacts_ai5_widget_pane_g1

0x8107,	// (0x000270aa) cell_contacts_ai5_widget_pane_g2

0xa78c,	// (0x0002972f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe70,	// (0x0002ee13) cell_contacts_ai5_widget_pane_g

0xa79e,	// (0x00029741) cell_contacts_ai5_widget_pane_t1

0x3f15,	// (0x00022eb8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf38e,	// (0x0002e331) settings_container_pane

0x4b9c,	// (0x00023b3f) listscroll_set_pane_copy1

0x7114,	// (0x000260b7) scroll_pane_cp121_copy1

0xa821,	// (0x000297c4) set_content_pane_copy1

0xf39a,	// (0x0002e33d) aid_height_set_list_copy1_ParamLimits

0xf39a,	// (0x0002e33d) aid_height_set_list_copy1

0x6804,	// (0x000257a7) aid_size_parent_copy1_ParamLimits

0x6804,	// (0x000257a7) aid_size_parent_copy1

0xf3a6,	// (0x0002e349) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3a6,	// (0x0002e349) button_value_adjust_pane_cp6_copy1

0x4edc,	// (0x00023e7f) list_highlight_pane_cp2_copy1_ParamLimits

0x4edc,	// (0x00023e7f) list_highlight_pane_cp2_copy1

0xf3ba,	// (0x0002e35d) list_set_pane_copy1_ParamLimits

0xf3ba,	// (0x0002e35d) list_set_pane_copy1

0xf329,	// (0x0002e2cc) main_pane_set_t1_copy1_ParamLimits

0xf329,	// (0x0002e2cc) main_pane_set_t1_copy1

0xf363,	// (0x0002e306) main_pane_set_t2_copy1_ParamLimits

0xf363,	// (0x0002e306) main_pane_set_t2_copy1

0xf467,	// (0x0002e40a) main_pane_set_t3_copy1

0xf475,	// (0x0002e418) main_pane_set_t4_copy1

0xf382,	// (0x0002e325) set_content_pane_g1_copy1_ParamLimits

0xf382,	// (0x0002e325) set_content_pane_g1_copy1

0xf483,	// (0x0002e426) setting_code_pane_copy1

0xa91a,	// (0x000298bd) setting_slider_graphic_pane_copy1

0xa91a,	// (0x000298bd) setting_slider_pane_copy1

0xa91a,	// (0x000298bd) setting_text_pane_copy1

0xa91a,	// (0x000298bd) setting_volume_pane_copy1

0xf483,	// (0x0002e426) settings_code_pane_cp2_copy1

0xf48b,	// (0x0002e42e) settings_code_pane_cp_copy1_ParamLimits

0xf48b,	// (0x0002e42e) settings_code_pane_cp_copy1

0xcf20,	// (0x0002bec3) volume_set_pane_copy1

0xf49f,	// (0x0002e442) volume_set_pane_g10_copy1

0xf4a7,	// (0x0002e44a) volume_set_pane_g1_copy1

0xf4af,	// (0x0002e452) volume_set_pane_g2_copy1

0xf4b7,	// (0x0002e45a) volume_set_pane_g3_copy1

0xf4bf,	// (0x0002e462) volume_set_pane_g4_copy1

0xf4c7,	// (0x0002e46a) volume_set_pane_g5_copy1

0xf4cf,	// (0x0002e472) volume_set_pane_g6_copy1

0xf4d7,	// (0x0002e47a) volume_set_pane_g7_copy1

0xf4df,	// (0x0002e482) volume_set_pane_g8_copy1

0xf4e7,	// (0x0002e48a) volume_set_pane_g9_copy1

0x36a9,	// (0x0002264c) bg_set_opt_pane_cp_copy1_ParamLimits

0x36a9,	// (0x0002264c) bg_set_opt_pane_cp_copy1

0x3495,	// (0x00022438) setting_slider_pane_t1_copy1_ParamLimits

0x3495,	// (0x00022438) setting_slider_pane_t1_copy1

0xcf28,	// (0x0002becb) setting_slider_pane_t2_copy1_ParamLimits

0xcf28,	// (0x0002becb) setting_slider_pane_t2_copy1

0xcf42,	// (0x0002bee5) setting_slider_pane_t3_copy1_ParamLimits

0xcf42,	// (0x0002bee5) setting_slider_pane_t3_copy1

0xcf5a,	// (0x0002befd) slider_set_pane_copy1_ParamLimits

0xcf5a,	// (0x0002befd) slider_set_pane_copy1

0x3f70,	// (0x00022f13) set_opt_bg_pane_g1_copy2

0x3f78,	// (0x00022f1b) set_opt_bg_pane_g2_copy2

0xa986,	// (0x00029929) set_opt_bg_pane_g3_copy2

0x3f88,	// (0x00022f2b) set_opt_bg_pane_g4_copy2

0x3f90,	// (0x00022f33) set_opt_bg_pane_g5_copy2

0x3f98,	// (0x00022f3b) set_opt_bg_pane_g6_copy2

0xf4ef,	// (0x0002e492) set_opt_bg_pane_g7_copy2

0xa998,	// (0x0002993b) set_opt_bg_pane_g8_copy2

0xa9a2,	// (0x00029945) set_opt_bg_pane_g9_copy2

0xa9ac,	// (0x0002994f) aid_size_touch_slider_mark_copy1_ParamLimits

0xa9ac,	// (0x0002994f) aid_size_touch_slider_mark_copy1

0xa9c0,	// (0x00029963) slider_set_pane_g1_copy1

0xa9c9,	// (0x0002996c) slider_set_pane_g2_copy1

0x6783,	// (0x00025726) slider_set_pane_g3_copy1_ParamLimits

0x6783,	// (0x00025726) slider_set_pane_g3_copy1

0x6797,	// (0x0002573a) slider_set_pane_g4_copy1_ParamLimits

0x6797,	// (0x0002573a) slider_set_pane_g4_copy1

0x67af,	// (0x00025752) slider_set_pane_g5_copy1_ParamLimits

0x67af,	// (0x00025752) slider_set_pane_g5_copy1

0x6783,	// (0x00025726) slider_set_pane_g6_copy1_ParamLimits

0x6783,	// (0x00025726) slider_set_pane_g6_copy1

0xf4f7,	// (0x0002e49a) slider_set_pane_g7_copy1_ParamLimits

0xf4f7,	// (0x0002e49a) slider_set_pane_g7_copy1

0x35c9,	// (0x0002256c) bg_set_opt_pane_cp2_copy1

0xa9e7,	// (0x0002998a) setting_slider_graphic_pane_g1_copy1

0xf50d,	// (0x0002e4b0) setting_slider_graphic_pane_t1_copy1

0xf51d,	// (0x0002e4c0) setting_slider_graphic_pane_t2_copy1

0xf52d,	// (0x0002e4d0) slider_set_pane_cp_copy1

0xaa20,	// (0x000299c3) input_focus_pane_cp1_copy1

0xaa29,	// (0x000299cc) list_set_text_pane_copy1

0xaa31,	// (0x000299d4) setting_text_pane_g1_copy1

0xbf40,	// (0x0002aee3) set_text_pane_t1_copy1

0xaa20,	// (0x000299c3) input_focus_pane_cp2_copy1

0xaa31,	// (0x000299d4) setting_code_pane_g1_copy1

0xf535,	// (0x0002e4d8) setting_code_pane_t1_copy1

0x6f33,	// (0x00025ed6) list_set_graphic_pane_copy1

0x35c9,	// (0x0002256c) bg_set_opt_pane_cp4_copy1

0xd49f,	// (0x0002c442) list_set_graphic_pane_g1_copy1_ParamLimits

0xd49f,	// (0x0002c442) list_set_graphic_pane_g1_copy1

0xf543,	// (0x0002e4e6) list_set_graphic_pane_g2_copy1

0xd4b7,	// (0x0002c45a) list_set_graphic_pane_t1_copy1_ParamLimits

0xd4b7,	// (0x0002c45a) list_set_graphic_pane_t1_copy1

0x7a27,	// (0x000269ca) rs_clock_indi_pane_g1

0xaa62,	// (0x00029a05) rs_clock_indi_pane_t1

0xaa70,	// (0x00029a13) rs_indi_pane

0xaa78,	// (0x00029a1b) rs_indi_pane_g1

0xaa81,	// (0x00029a24) rs_indi_pane_g2

0xaa8a,	// (0x00029a2d) rs_indi_pane_g3

0x0002,

0xfe77,	// (0x0002ee1a) rs_indi_pane_g

0x4b9c,	// (0x00023b3f) bg_popup_preview_window_pane_cp03

0xaa93,	// (0x00029a36) popup_fep_tooltip_window_t1

0x86a3,	// (0x00027646) popup_note2_window_g2_ParamLimits

0x86a3,	// (0x00027646) popup_note2_window_g2

0x0001,

0xfc48,	// (0x0002ebeb) popup_note2_window_g_ParamLimits

0xfc48,	// (0x0002ebeb) popup_note2_window_g

0x8b9e,	// (0x00027b41) bg_popup_sub_pane_cp11_ParamLimits

0x8bab,	// (0x00027b4e) cell_ai3_links_pane_g1_ParamLimits

0x8bc2,	// (0x00027b65) cell_ai3_links_pane_t1

0xbf40,	// (0x0002aee3) set_text_pane_t1_copy1_ParamLimits

0x4aad,	// (0x00023a50) cell_graphic_popup_pane_cp2_ParamLimits

0x4aad,	// (0x00023a50) cell_graphic_popup_pane_cp2

0xaaa1,	// (0x00029a44) cell_graphic_popup_pane_g1_cp2

0x3c60,	// (0x00022c03) cell_graphic_popup_pane_g2_cp2

0xaaa9,	// (0x00029a4c) cell_graphic_popup_pane_g3_cp2

0xaab1,	// (0x00029a54) cell_graphic_popup_pane_t2_cp2

0x3c71,	// (0x00022c14) grid_highlight_pane_cp3_cp2

0x42b5,	// (0x00023258) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3f15,	// (0x00022eb8) main_tmo_pane_ParamLimits

0xe5ea,	// (0x0002d58d) popup_tmo_big_image_note_window

0xa07e,	// (0x00029021) cell_ai5_widget_list_pane

0xa086,	// (0x00029029) cell_ai5_widget_lrg_icon_pane

0xf2e8,	// (0x0002e28b) tmo_note_info_pane_t1_ParamLimits

0xf2fd,	// (0x0002e2a0) tmo_note_info_pane_t2_ParamLimits

0xf314,	// (0x0002e2b7) tmo_note_info_pane_t3_ParamLimits

0xa6e1,	// (0x00029684) tmo_note_info_pane_t4_ParamLimits

0xa6f3,	// (0x00029696) tmo_note_info_pane_t5_ParamLimits

0xfe65,	// (0x0002ee08) tmo_note_info_pane_t_ParamLimits

0xf38e,	// (0x0002e331) settings_container_pane_ParamLimits

0xaa18,	// (0x000299bb) indicator_popup_pane_cp5

0xaa18,	// (0x000299bb) indicator_popup_pane_cp6

0x6f33,	// (0x00025ed6) list_set_graphic_pane_copy1_ParamLimits

0x35b5,	// (0x00022558) bg_popup_window_pane_cp23

0xaabf,	// (0x00029a62) popup_tmo_big_image_note_window_g1

0xaac9,	// (0x00029a6c) popup_tmo_big_image_note_window_t1

0xaad9,	// (0x00029a7c) popup_tmo_big_image_note_window_t2

0xaae9,	// (0x00029a8c) popup_tmo_big_image_note_window_t3

0x0002,

0xfe7e,	// (0x0002ee21) popup_tmo_big_image_note_window_t

0x7a27,	// (0x000269ca) cell_ai5_widget_lrg_icon_pane_g1

0xaaf9,	// (0x00029a9c) cell_ai5_widget_lrg_icon_pane_t1

0xab07,	// (0x00029aaa) cell_ai5_widget_list_row_pane_ParamLimits

0xab07,	// (0x00029aaa) cell_ai5_widget_list_row_pane

0xab20,	// (0x00029ac3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab20,	// (0x00029ac3) cell_ai5_widget_list_row_pane_g1

0xab2d,	// (0x00029ad0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab2d,	// (0x00029ad0) cell_ai5_widget_list_row_pane_t1

0xab5e,	// (0x00029b01) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xab5e,	// (0x00029b01) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfe85,	// (0x0002ee28) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe85,	// (0x0002ee28) cell_ai5_widget_list_row_pane_t

0x35b5,	// (0x00022558) main_fep_vtchi_ss_pane

0x350a,	// (0x000224ad) popup_fep_char_pre_window

0x3512,	// (0x000224b5) popup_fep_ituss_window

0x3533,	// (0x000224d6) popup_fep_vkbss_window

0xab86,	// (0x00029b29) grid_vkbss_keypad_pane_ParamLimits

0xab86,	// (0x00029b29) grid_vkbss_keypad_pane

0xab96,	// (0x00029b39) ituss_keypad_pane

0x355e,	// (0x00022501) aid_vkbss_key_offset_ParamLimits

0x355e,	// (0x00022501) aid_vkbss_key_offset

0x356a,	// (0x0002250d) cell_vkbss_key_pane_ParamLimits

0x356a,	// (0x0002250d) cell_vkbss_key_pane

0xaba6,	// (0x00029b49) bg_cell_vkbss_key_g1_ParamLimits

0xaba6,	// (0x00029b49) bg_cell_vkbss_key_g1

0xabb2,	// (0x00029b55) cell_vkbss_key_3p_pane_ParamLimits

0xabb2,	// (0x00029b55) cell_vkbss_key_3p_pane

0xabcc,	// (0x00029b6f) cell_vkbss_key_g1_ParamLimits

0xabcc,	// (0x00029b6f) cell_vkbss_key_g1

0xabe6,	// (0x00029b89) cell_vkbss_key_t1_ParamLimits

0xabe6,	// (0x00029b89) cell_vkbss_key_t1

0x3580,	// (0x00022523) cell_ituss_key_pane_ParamLimits

0x3580,	// (0x00022523) cell_ituss_key_pane

0xac11,	// (0x00029bb4) bg_cell_ituss_key_g1_ParamLimits

0xac11,	// (0x00029bb4) bg_cell_ituss_key_g1

0xac1d,	// (0x00029bc0) cell_ituss_key_pane_g1_ParamLimits

0xac1d,	// (0x00029bc0) cell_ituss_key_pane_g1

0xac37,	// (0x00029bda) cell_ituss_key_pane_g2_ParamLimits

0xac37,	// (0x00029bda) cell_ituss_key_pane_g2

0x0001,

0xfe8c,	// (0x0002ee2f) cell_ituss_key_pane_g_ParamLimits

0xfe8c,	// (0x0002ee2f) cell_ituss_key_pane_g

0xac65,	// (0x00029c08) cell_ituss_key_t1_ParamLimits

0xac65,	// (0x00029c08) cell_ituss_key_t1

0xac9f,	// (0x00029c42) cell_ituss_key_t2_ParamLimits

0xac9f,	// (0x00029c42) cell_ituss_key_t2

0xacd0,	// (0x00029c73) cell_ituss_key_t3_ParamLimits

0xacd0,	// (0x00029c73) cell_ituss_key_t3

0xad0a,	// (0x00029cad) cell_ituss_key_t4_ParamLimits

0xad0a,	// (0x00029cad) cell_ituss_key_t4

0x0003,

0xfe91,	// (0x0002ee34) cell_ituss_key_t_ParamLimits

0xfe91,	// (0x0002ee34) cell_ituss_key_t

0xad44,	// (0x00029ce7) cell_vkbss_key_3p_pane_g1

0xad4c,	// (0x00029cef) cell_vkbss_key_3p_pane_g2

0xad54,	// (0x00029cf7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe9a,	// (0x0002ee3d) cell_vkbss_key_3p_pane_g

0x35b5,	// (0x00022558) bg_popup_fep_char_preview_window_cp02

0xad5c,	// (0x00029cff) popup_fep_char_pre_window_t1

0xf1bf,	// (0x0002e162) main_ai5_sk_pane

0xa76d,	// (0x00029710) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa779,	// (0x0002971c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8107,	// (0x000270aa) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa78c,	// (0x0002972f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe70,	// (0x0002ee13) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa79e,	// (0x00029741) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3f15,	// (0x00022eb8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf54b,	// (0x0002e4ee) main_ai5_sk_pane_g1

0x58a4,	// (0x00024847) popup_query_code_window_g1

0x3528,	// (0x000224cb) popup_fep_vkb_icf_pane

0x353c,	// (0x000224df) popup_fep_vtchi_icf_pane

0x3f15,	// (0x00022eb8) bg_icf_pane

0xad74,	// (0x00029d17) list_vkb_icf_pane

0x3f15,	// (0x00022eb8) bg_icf_pane_cp01

0xad80,	// (0x00029d23) vtchi_icf_list_pane

0xad91,	// (0x00029d34) list_vkb_icf_pane_t1_ParamLimits

0xad91,	// (0x00029d34) list_vkb_icf_pane_t1

0xada7,	// (0x00029d4a) vtchi_icf_list_pane_t1_ParamLimits

0xada7,	// (0x00029d4a) vtchi_icf_list_pane_t1

0x3512,	// (0x000224b5) popup_fep_ituss_window_ParamLimits

0x353c,	// (0x000224df) popup_fep_vtchi_icf_pane_ParamLimits

0xab96,	// (0x00029b39) ituss_keypad_pane_ParamLimits

0x3552,	// (0x000224f5) ituss_sks_pane

0x3f15,	// (0x00022eb8) bg_icf_pane_ParamLimits

0x34fb,	// (0x0002249e) icf_edit_indi_pane_ParamLimits

0x34fb,	// (0x0002249e) icf_edit_indi_pane

0xad74,	// (0x00029d17) list_vkb_icf_pane_ParamLimits

0x3f15,	// (0x00022eb8) bg_icf_pane_cp01_ParamLimits

0x34fb,	// (0x0002249e) icf_edit_indi_pane_cp01_ParamLimits

0x34fb,	// (0x0002249e) icf_edit_indi_pane_cp01

0xad88,	// (0x00029d2b) vtchi_query_pane

0x7ca5,	// (0x00026c48) icf_edit_indi_pane_g1_ParamLimits

0x7ca5,	// (0x00026c48) icf_edit_indi_pane_g1

0xae2b,	// (0x00029dce) icf_edit_indi_pane_g2_ParamLimits

0xae2b,	// (0x00029dce) icf_edit_indi_pane_g2

0x0001,

0xfeb2,	// (0x0002ee55) icf_edit_indi_pane_g_ParamLimits

0xfeb2,	// (0x0002ee55) icf_edit_indi_pane_g

0xae3a,	// (0x00029ddd) icf_edit_indi_pane_t1

0xadc1,	// (0x00029d64) bg_input_focus_pane_cp042

0x3e44,	// (0x00022de7) vtchi_button_pane

0xadca,	// (0x00029d6d) vtchi_query_pane_t1

0xadd8,	// (0x00029d7b) vtchi_query_pane_t2

0xade6,	// (0x00029d89) vtchi_query_pane_t3

0x0002,

0xfea1,	// (0x0002ee44) vtchi_query_pane_t

0x35b5,	// (0x00022558) bg_button_pane_cp13

0xadf4,	// (0x00029d97) vtchi_button_pane_g1

0xadfc,	// (0x00029d9f) ituss_sks_pane_g1

0xae07,	// (0x00029daa) ituss_sks_pane_g2

0x0001,

0xfea8,	// (0x0002ee4b) ituss_sks_pane_g

0xae0f,	// (0x00029db2) ituss_sks_pane_t1

0xae1d,	// (0x00029dc0) ituss_sks_pane_t2

0x0001,

0xfead,	// (0x0002ee50) ituss_sks_pane_t

0x749e,	// (0x00026441) indicator_nsta_pane_cp_g1

0x74a7,	// (0x0002644a) indicator_nsta_pane_cp_g2

0x74af,	// (0x00026452) indicator_nsta_pane_cp_g3

0x74b7,	// (0x0002645a) indicator_nsta_pane_cp_g4

0x74b7,	// (0x0002645a) indicator_nsta_pane_cp_g5

0x74b7,	// (0x0002645a) indicator_nsta_pane_cp_g6

0x0005,

0xfa92,	// (0x0002ea35) indicator_nsta_pane_cp_g

0xefd1,	// (0x0002df74) cell_graphic2_pane_t2_ParamLimits

0xefd1,	// (0x0002df74) cell_graphic2_pane_t2

0x0001,

0x01d6,	// (0x0001f179) cell_graphic2_pane_t_ParamLimits

0x01d6,	// (0x0001f179) cell_graphic2_pane_t

0xf007,	// (0x0002dfaa) cell_graphic2_control_pane_t1

0xd473,	// (0x0002c416) signal_pane_g3_ParamLimits

0xd473,	// (0x0002c416) signal_pane_g3

0xd487,	// (0x0002c42a) signal_pane_g4_ParamLimits

0xd487,	// (0x0002c42a) signal_pane_g4

0xab70,	// (0x00029b13) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xab70,	// (0x00029b13) cell_ai5_widget_list_row_pane_t3

0xac53,	// (0x00029bf6) cell_ituss_key_pane_t1_ParamLimits

0xac53,	// (0x00029bf6) cell_ituss_key_pane_t1

0x54f7,	// (0x0002449a) form_field_data_wide_pane_vc_t2_ParamLimits

0x54f7,	// (0x0002449a) form_field_data_wide_pane_vc_t2

0x550b,	// (0x000244ae) form_field_data_wide_pane_vc_t3_ParamLimits

0x550b,	// (0x000244ae) form_field_data_wide_pane_vc_t3

0x0002,

0xf803,	// (0x0002e7a6) form_field_data_wide_pane_vc_t_ParamLimits

0xf803,	// (0x0002e7a6) form_field_data_wide_pane_vc_t

0x7156,	// (0x000260f9) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7156,	// (0x000260f9) form_field_slider_wide_pane_vc_t3

0x7234,	// (0x000261d7) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7234,	// (0x000261d7) form_field_popup_wide_pane_vc_t2

0x724b,	// (0x000261ee) form_field_popup_wide_pane_vc_t3_ParamLimits

0x724b,	// (0x000261ee) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa81,	// (0x0002ea24) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa81,	// (0x0002ea24) form_field_popup_wide_pane_vc_t

0xce88,	// (0x0002be2b) aid_fshwr2_btn_pane_ParamLimits

0xce99,	// (0x0002be3c) aid_fshwr2_syb_pane_ParamLimits

0xceaa,	// (0x0002be4d) aid_fshwr2_txt_pane_ParamLimits

0x3f15,	// (0x00022eb8) fshwr2_bg_pane_ParamLimits

0xceb6,	// (0x0002be59) fshwr2_func_candi_pane_ParamLimits

0xced5,	// (0x0002be78) fshwr2_hwr_syb_pane_ParamLimits

0xcef0,	// (0x0002be93) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small

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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001b9cc };

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
0xf109,	// (0x0002aad5) Screen

0xf115,	// (0x0002aae1) application_window_ParamLimits

0xf115,	// (0x0002aae1) application_window

0x5f71,	// (0x0002193d) screen_g1

0xc199,	// (0x00027b65) area_bottom_pane_ParamLimits

0xc199,	// (0x00027b65) area_bottom_pane

0x3c5e,	// (0x0001f62a) area_top_pane_ParamLimits

0x3c5e,	// (0x0001f62a) area_top_pane

0x3cf2,	// (0x0001f6be) main_pane_ParamLimits

0x3cf2,	// (0x0001f6be) main_pane

0x5f7b,	// (0x00021947) misc_graphics

0x0824,	// (0x0001c1f0) battery_pane_ParamLimits

0x0824,	// (0x0001c1f0) battery_pane

0x85ae,	// (0x00023f7a) bg_status_flat_pane_g8

0x85b6,	// (0x00023f82) bg_status_flat_pane_g9

0x799b,	// (0x00023367) context_pane_ParamLimits

0x799b,	// (0x00023367) context_pane

0x098f,	// (0x0001c35b) navi_pane_ParamLimits

0x098f,	// (0x0001c35b) navi_pane

0x0a07,	// (0x0001c3d3) signal_pane_ParamLimits

0x0a07,	// (0x0001c3d3) signal_pane

0x0008,

0xf873,	// (0x0002b23f) bg_status_flat_pane_g

0x0a97,	// (0x0001c463) status_pane_g1_ParamLimits

0x0a97,	// (0x0001c463) status_pane_g1

0x0aad,	// (0x0001c479) status_pane_g2_ParamLimits

0x0aad,	// (0x0001c479) status_pane_g2

0x7bbc,	// (0x00023588) status_pane_g3_ParamLimits

0x7bbc,	// (0x00023588) status_pane_g3

0x0004,

0xf7a6,	// (0x0002b172) status_pane_g_ParamLimits

0xf7a6,	// (0x0002b172) status_pane_g

0x0ab9,	// (0x0001c485) title_pane_ParamLimits

0x0ab9,	// (0x0001c485) title_pane

0x0b1c,	// (0x0001c4e8) uni_indicator_pane_ParamLimits

0x0b1c,	// (0x0001c4e8) uni_indicator_pane

0x77fd,	// (0x000231c9) bg_list_pane_ParamLimits

0x77fd,	// (0x000231c9) bg_list_pane

0xc483,	// (0x00027e4f) find_pane

0x0793,	// (0x0001c15f) listscroll_app_pane_ParamLimits

0x0793,	// (0x0001c15f) listscroll_app_pane

0x7829,	// (0x000231f5) listscroll_form_pane

0xc48b,	// (0x00027e57) listscroll_gen_pane_ParamLimits

0xc48b,	// (0x00027e57) listscroll_gen_pane

0x7829,	// (0x000231f5) listscroll_set_pane

0x913e,	// (0x00024b0a) main_idle_act_pane

0x7507,	// (0x00022ed3) main_idle_trad_pane

0x7507,	// (0x00022ed3) main_list_empty_pane

0x7843,	// (0x0002320f) main_midp_pane

0x784f,	// (0x0002321b) main_pane_g1_ParamLimits

0x784f,	// (0x0002321b) main_pane_g1

0xc49f,	// (0x00027e6b) popup_ai_message_window_ParamLimits

0xc49f,	// (0x00027e6b) popup_ai_message_window

0xc530,	// (0x00027efc) popup_fep_china_uni_window_ParamLimits

0xc530,	// (0x00027efc) popup_fep_china_uni_window

0x469a,	// (0x00020066) popup_fep_japan_candidate_window_ParamLimits

0x469a,	// (0x00020066) popup_fep_japan_candidate_window

0x46b8,	// (0x00020084) popup_fep_japan_predictive_window_ParamLimits

0x46b8,	// (0x00020084) popup_fep_japan_predictive_window

0xc58a,	// (0x00027f56) popup_find_window

0xc5a7,	// (0x00027f73) popup_grid_graphic_window_ParamLimits

0xc5a7,	// (0x00027f73) popup_grid_graphic_window

0x471d,	// (0x000200e9) popup_large_graphic_colour_window

0xc63f,	// (0x0002800b) popup_menu_window_ParamLimits

0xc63f,	// (0x0002800b) popup_menu_window

0xc80b,	// (0x000281d7) popup_note_image_window

0xc7d1,	// (0x0002819d) popup_note_wait_window_ParamLimits

0xc7d1,	// (0x0002819d) popup_note_wait_window

0xc823,	// (0x000281ef) popup_note_window_ParamLimits

0xc823,	// (0x000281ef) popup_note_window

0xc8c9,	// (0x00028295) popup_query_code_window_ParamLimits

0xc8c9,	// (0x00028295) popup_query_code_window

0x4967,	// (0x00020333) popup_query_data_code_window_ParamLimits

0x4967,	// (0x00020333) popup_query_data_code_window

0xc903,	// (0x000282cf) popup_query_data_window_ParamLimits

0xc903,	// (0x000282cf) popup_query_data_window

0xc97f,	// (0x0002834b) popup_query_sat_info_window_ParamLimits

0xc97f,	// (0x0002834b) popup_query_sat_info_window

0xca16,	// (0x000283e2) popup_snote_single_graphic_window_ParamLimits

0xca16,	// (0x000283e2) popup_snote_single_graphic_window

0xca16,	// (0x000283e2) popup_snote_single_text_window_ParamLimits

0xca16,	// (0x000283e2) popup_snote_single_text_window

0x49ea,	// (0x000203b6) popup_sub_window_general

0x4b18,	// (0x000204e4) popup_window_general_ParamLimits

0x4b18,	// (0x000204e4) popup_window_general

0x785d,	// (0x00023229) power_save_pane

0xc312,	// (0x00027cde) control_pane_g1_ParamLimits

0xc312,	// (0x00027cde) control_pane_g1

0xc33b,	// (0x00027d07) control_pane_g2_ParamLimits

0xc33b,	// (0x00027d07) control_pane_g2

0x77c0,	// (0x0002318c) control_pane_g3_ParamLimits

0x77c0,	// (0x0002318c) control_pane_g3

0x0007,

0xf78e,	// (0x0002b15a) control_pane_g_ParamLimits

0xf78e,	// (0x0002b15a) control_pane_g

0xc37c,	// (0x00027d48) control_pane_t1_ParamLimits

0xc37c,	// (0x00027d48) control_pane_t1

0xc3da,	// (0x00027da6) control_pane_t2_ParamLimits

0xc3da,	// (0x00027da6) control_pane_t2

0x0002,

0xf79f,	// (0x0002b16b) control_pane_t_ParamLimits

0xf79f,	// (0x0002b16b) control_pane_t

0x76e1,	// (0x000230ad) navi_navi_volume_pane_cp1

0x76ea,	// (0x000230b6) status_small_icon_pane

0x76f2,	// (0x000230be) status_small_pane_g1_ParamLimits

0x76f2,	// (0x000230be) status_small_pane_g1

0x7726,	// (0x000230f2) status_small_pane_g2_ParamLimits

0x7726,	// (0x000230f2) status_small_pane_g2

0x7732,	// (0x000230fe) status_small_pane_g3_ParamLimits

0x7732,	// (0x000230fe) status_small_pane_g3

0x773e,	// (0x0002310a) status_small_pane_g4_ParamLimits

0x773e,	// (0x0002310a) status_small_pane_g4

0x774a,	// (0x00023116) status_small_pane_g5_ParamLimits

0x774a,	// (0x00023116) status_small_pane_g5

0x7759,	// (0x00023125) status_small_pane_g6_ParamLimits

0x7759,	// (0x00023125) status_small_pane_g6

0x0007,

0xf77d,	// (0x0002b149) status_small_pane_g_ParamLimits

0xf77d,	// (0x0002b149) status_small_pane_g

0x7789,	// (0x00023155) status_small_pane_t1

0x77ac,	// (0x00023178) status_small_wait_pane_ParamLimits

0x77ac,	// (0x00023178) status_small_wait_pane

0x054e,	// (0x0001bf1a) aid_levels_signal_ParamLimits

0x054e,	// (0x0001bf1a) aid_levels_signal

0x0566,	// (0x0001bf32) signal_pane_g1_ParamLimits

0x0566,	// (0x0001bf32) signal_pane_g1

0x0581,	// (0x0001bf4d) signal_pane_g2_ParamLimits

0x0581,	// (0x0001bf4d) signal_pane_g2

0x0003,

0xf70e,	// (0x0002b0da) signal_pane_g_ParamLimits

0xf70e,	// (0x0002b0da) signal_pane_g

0x6ff3,	// (0x000229bf) context_pane_g1

0xf125,	// (0x0002aaf1) title_pane_g1

0xf23c,	// (0x0002ac08) title_pane_t1

0x6023,	// (0x000219ef) title_pane_t2

0x6049,	// (0x00021a15) title_pane_t3

0x0002,

0xf55d,	// (0x0002af29) title_pane_t

0x0b44,	// (0x0001c510) aid_levels_battery_ParamLimits

0x0b44,	// (0x0001c510) aid_levels_battery

0x0b60,	// (0x0001c52c) battery_pane_g1_ParamLimits

0x0b60,	// (0x0001c52c) battery_pane_g1

0x0b7d,	// (0x0001c549) battery_pane_g2_ParamLimits

0x0b7d,	// (0x0001c549) battery_pane_g2

0x0001,

0xf7b1,	// (0x0002b17d) battery_pane_g_ParamLimits

0xf7b1,	// (0x0002b17d) battery_pane_g

0x0e2f,	// (0x0001c7fb) uni_indicator_pane_g1

0x0e44,	// (0x0001c810) uni_indicator_pane_g2

0x8f0d,	// (0x000248d9) uni_indicator_pane_g3

0x0005,

0xf91b,	// (0x0002b2e7) uni_indicator_pane_g

0x7385,	// (0x00022d51) navi_icon_pane_ParamLimits

0x7385,	// (0x00022d51) navi_icon_pane

0x72ce,	// (0x00022c9a) navi_midp_pane

0x73a1,	// (0x00022d6d) navi_navi_pane

0x73ab,	// (0x00022d77) navi_text_pane_ParamLimits

0x73ab,	// (0x00022d77) navi_text_pane

0x5f71,	// (0x0002193d) status_small_wait_pane_g1

0x646c,	// (0x00021e38) status_small_wait_pane_g2

0x0001,

0xf916,	// (0x0002b2e2) status_small_wait_pane_g

0x8c09,	// (0x000245d5) navi_navi_icon_text_pane

0x8c11,	// (0x000245dd) navi_navi_pane_g1_ParamLimits

0x8c11,	// (0x000245dd) navi_navi_pane_g1

0x8c23,	// (0x000245ef) navi_navi_pane_g2_ParamLimits

0x8c23,	// (0x000245ef) navi_navi_pane_g2

0x0001,

0xf8e4,	// (0x0002b2b0) navi_navi_pane_g_ParamLimits

0xf8e4,	// (0x0002b2b0) navi_navi_pane_g

0x8c35,	// (0x00024601) navi_navi_tabs_pane

0x8c3e,	// (0x0002460a) navi_navi_text_pane

0x8c09,	// (0x000245d5) navi_navi_volume_pane

0x0db8,	// (0x0001c784) navi_text_pane_t1

0x8bd9,	// (0x000245a5) navi_icon_pane_g1

0x8b2c,	// (0x000244f8) navi_navi_text_pane_t1

0xccd0,	// (0x0002869c) navi_navi_volume_pane_g1

0xccd8,	// (0x000286a4) volume_small_pane

0x0d00,	// (0x0001c6cc) navi_navi_icon_text_pane_g1

0x0d08,	// (0x0001c6d4) navi_navi_icon_text_pane_t1

0x73a1,	// (0x00022d6d) navi_tabs_2_long_pane

0x73a1,	// (0x00022d6d) navi_tabs_2_pane

0x73a1,	// (0x00022d6d) navi_tabs_3_long_pane

0x73a1,	// (0x00022d6d) navi_tabs_3_pane

0x73a1,	// (0x00022d6d) navi_tabs_4_pane

0xccb0,	// (0x0002867c) tabs_2_active_pane_ParamLimits

0xccb0,	// (0x0002867c) tabs_2_active_pane

0xccc0,	// (0x0002868c) tabs_2_passive_pane_ParamLimits

0xccc0,	// (0x0002868c) tabs_2_passive_pane

0xcc7e,	// (0x0002864a) tabs_3_active_pane_ParamLimits

0xcc7e,	// (0x0002864a) tabs_3_active_pane

0xcc8e,	// (0x0002865a) tabs_3_passive_pane_ParamLimits

0xcc8e,	// (0x0002865a) tabs_3_passive_pane

0xcc9f,	// (0x0002866b) tabs_3_passive_pane_cp_ParamLimits

0xcc9f,	// (0x0002866b) tabs_3_passive_pane_cp

0xcc3a,	// (0x00028606) tabs_4_active_pane_ParamLimits

0xcc3a,	// (0x00028606) tabs_4_active_pane

0xcc4b,	// (0x00028617) tabs_4_passive_pane_ParamLimits

0xcc4b,	// (0x00028617) tabs_4_passive_pane

0xcc5c,	// (0x00028628) tabs_4_passive_pane_cp_ParamLimits

0xcc5c,	// (0x00028628) tabs_4_passive_pane_cp

0xcc6d,	// (0x00028639) tabs_4_passive_pane_cp2_ParamLimits

0xcc6d,	// (0x00028639) tabs_4_passive_pane_cp2

0xcc1a,	// (0x000285e6) tabs_2_long_active_pane_ParamLimits

0xcc1a,	// (0x000285e6) tabs_2_long_active_pane

0xcc2a,	// (0x000285f6) tabs_2_long_passive_pane_ParamLimits

0xcc2a,	// (0x000285f6) tabs_2_long_passive_pane

0xcbe5,	// (0x000285b1) tabs_3_long_active_pane_ParamLimits

0xcbe5,	// (0x000285b1) tabs_3_long_active_pane

0xcbf6,	// (0x000285c2) tabs_3_long_passive_pane_ParamLimits

0xcbf6,	// (0x000285c2) tabs_3_long_passive_pane

0xcc09,	// (0x000285d5) tabs_3_long_passive_pane_cp_ParamLimits

0xcc09,	// (0x000285d5) tabs_3_long_passive_pane_cp

0x4c5b,	// (0x00020627) volume_small_pane_g1

0xcb94,	// (0x00028560) volume_small_pane_g2

0xcb9d,	// (0x00028569) volume_small_pane_g3

0xcba6,	// (0x00028572) volume_small_pane_g4

0xcbaf,	// (0x0002857b) volume_small_pane_g5

0xcbb8,	// (0x00028584) volume_small_pane_g6

0xcbc1,	// (0x0002858d) volume_small_pane_g7

0xcbca,	// (0x00028596) volume_small_pane_g8

0xcbd3,	// (0x0002859f) volume_small_pane_g9

0xcbdc,	// (0x000285a8) volume_small_pane_g10

0x0009,

0xf8b0,	// (0x0002b27c) volume_small_pane_g

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp2_ParamLimits

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp2

0xf2c8,	// (0x0002ac94) tabs_3_active_pane_g1

0xf2d0,	// (0x0002ac9c) tabs_3_active_pane_t1

0x62d6,	// (0x00021ca2) bg_passive_tab_pane_cp2_ParamLimits

0x62d6,	// (0x00021ca2) bg_passive_tab_pane_cp2

0xf2c8,	// (0x0002ac94) tabs_3_passive_pane_g1

0xf2d0,	// (0x0002ac9c) tabs_3_passive_pane_t1

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp3_ParamLimits

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp3

0xf2e2,	// (0x0002acae) tabs_4_active_pane_g1

0xf2ea,	// (0x0002acb6) tabs_4_active_pane_t1

0x62d6,	// (0x00021ca2) bg_passive_tab_pane_cp3_ParamLimits

0x62d6,	// (0x00021ca2) bg_passive_tab_pane_cp3

0xf2e2,	// (0x0002acae) tabs_4_1_passive_pane_g1

0xf2ea,	// (0x0002acb6) tabs_4_1_passive_pane_t1

0x7843,	// (0x0002320f) list_highlight_pane_cp2

0x0ece,	// (0x0001c89a) list_set_pane_ParamLimits

0x0ece,	// (0x0001c89a) list_set_pane

0x0f68,	// (0x0001c934) main_pane_set_t1_ParamLimits

0x0f68,	// (0x0001c934) main_pane_set_t1

0x0f88,	// (0x0001c954) main_pane_set_t2_ParamLimits

0x0f88,	// (0x0001c954) main_pane_set_t2

0x0f9c,	// (0x0001c968) main_pane_set_t3_ParamLimits

0x0f9c,	// (0x0001c968) main_pane_set_t3

0x0fae,	// (0x0001c97a) main_pane_set_t4_ParamLimits

0x0fae,	// (0x0001c97a) main_pane_set_t4

0x0003,

0xf980,	// (0x0002b34c) main_pane_set_t_ParamLimits

0xf980,	// (0x0002b34c) main_pane_set_t

0x0fc0,	// (0x0001c98c) setting_code_pane

0x0fc8,	// (0x0001c994) setting_slider_graphic_pane

0x0fc8,	// (0x0001c994) setting_slider_pane

0x0fc8,	// (0x0001c994) setting_text_pane

0x0fc8,	// (0x0001c994) setting_volume_pane

0x3f29,	// (0x0001f8f5) volume_set_pane

0x605b,	// (0x00021a27) bg_set_opt_pane_cp

0x3f31,	// (0x0001f8fd) setting_slider_pane_t1

0x3f4a,	// (0x0001f916) setting_slider_pane_t2

0x3f64,	// (0x0001f930) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002af30) setting_slider_pane_t

0x3f7c,	// (0x0001f948) slider_set_pane

0x5f7b,	// (0x00021947) bg_set_opt_pane_cp2

0x609d,	// (0x00021a69) setting_slider_graphic_pane_g1

0x3f92,	// (0x0001f95e) setting_slider_graphic_pane_t1

0x3fa2,	// (0x0001f96e) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002af37) setting_slider_graphic_pane_t

0x3fb2,	// (0x0001f97e) slider_set_pane_cp

0x5f7b,	// (0x00021947) input_focus_pane_cp1

0x9125,	// (0x00024af1) list_set_text_pane

0x5f71,	// (0x0002193d) setting_text_pane_g1

0x5f7b,	// (0x00021947) input_focus_pane_cp2

0x5f71,	// (0x0002193d) setting_code_pane_g1

0x60a6,	// (0x00021a72) setting_code_pane_t1

0x2a5f,	// (0x0001e42b) set_text_pane_t1_ParamLimits

0x2a5f,	// (0x0001e42b) set_text_pane_t1

0x6919,	// (0x000222e5) set_opt_bg_pane_g1

0x6921,	// (0x000222ed) set_opt_bg_pane_g2

0x9105,	// (0x00024ad1) set_opt_bg_pane_g3

0x6931,	// (0x000222fd) set_opt_bg_pane_g4

0x6939,	// (0x00022305) set_opt_bg_pane_g5

0x6941,	// (0x0002230d) set_opt_bg_pane_g6

0x910d,	// (0x00024ad9) set_opt_bg_pane_g7

0x9115,	// (0x00024ae1) set_opt_bg_pane_g8

0x911d,	// (0x00024ae9) set_opt_bg_pane_g9

0x0008,

0xf96d,	// (0x0002b339) set_opt_bg_pane_g

0x90f8,	// (0x00024ac4) slider_set_pane_g1

0x4e1d,	// (0x000207e9) slider_set_pane_g2

0x0006,

0xf95e,	// (0x0002b32a) slider_set_pane_g

0x4db9,	// (0x00020785) volume_set_pane_g1

0x4dc1,	// (0x0002078d) volume_set_pane_g2

0x4dc9,	// (0x00020795) volume_set_pane_g3

0x4dd1,	// (0x0002079d) volume_set_pane_g4

0x4dd9,	// (0x000207a5) volume_set_pane_g5

0x4de1,	// (0x000207ad) volume_set_pane_g6

0x4de9,	// (0x000207b5) volume_set_pane_g7

0x4df1,	// (0x000207bd) volume_set_pane_g8

0x4df9,	// (0x000207c5) volume_set_pane_g9

0x4e01,	// (0x000207cd) volume_set_pane_g10

0x0009,

0xf936,	// (0x0002b302) volume_set_pane_g

0xf2fc,	// (0x0002acc8) indicator_pane_ParamLimits

0xf2fc,	// (0x0002acc8) indicator_pane

0xf324,	// (0x0002acf0) main_idle_pane_g2_ParamLimits

0xf324,	// (0x0002acf0) main_idle_pane_g2

0xf35c,	// (0x0002ad28) main_pane_idle_g1_ParamLimits

0xf35c,	// (0x0002ad28) main_pane_idle_g1

0x60f5,	// (0x00021ac1) popup_clock_digital_analogue_window_ParamLimits

0x60f5,	// (0x00021ac1) popup_clock_digital_analogue_window

0xf383,	// (0x0002ad4f) soft_indicator_pane_ParamLimits

0xf383,	// (0x0002ad4f) soft_indicator_pane

0xf39d,	// (0x0002ad69) wallpaper_pane_ParamLimits

0xf39d,	// (0x0002ad69) wallpaper_pane

0x5f71,	// (0x0002193d) wallpaper_pane_g1

0xf3af,	// (0x0002ad7b) indicator_pane_g1_ParamLimits

0xf3af,	// (0x0002ad7b) indicator_pane_g1

0x94fb,	// (0x00024ec7) navi_navi_icon_text_pane_srt_g1

0x6147,	// (0x00021b13) soft_indicator_pane_t1

0x6161,	// (0x00021b2d) aid_ps_area_pane

0xf3c5,	// (0x0002ad91) aid_ps_clock_pane

0x6180,	// (0x00021b4c) aid_ps_indicator_pane

0x618c,	// (0x00021b58) indicator_ps_pane_ParamLimits

0x618c,	// (0x00021b58) indicator_ps_pane

0x619b,	// (0x00021b67) power_save_pane_g1_ParamLimits

0x619b,	// (0x00021b67) power_save_pane_g1

0x61a7,	// (0x00021b73) power_save_pane_g2_ParamLimits

0x61a7,	// (0x00021b73) power_save_pane_g2

0x3b52,	// (0x0001f51e) aid_navinavi_width_pane

0x6161,	// (0x00021b2d) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002af3c) power_save_pane_g_ParamLimits

0xf570,	// (0x0002af3c) power_save_pane_g

0x61b5,	// (0x00021b81) power_save_pane_t1_ParamLimits

0x61b5,	// (0x00021b81) power_save_pane_t1

0xf3c5,	// (0x0002ad91) aid_ps_clock_pane_ParamLimits

0x6180,	// (0x00021b4c) aid_ps_indicator_pane_ParamLimits

0x61c7,	// (0x00021b93) power_save_pane_t4_ParamLimits

0x61c7,	// (0x00021b93) power_save_pane_t4

0x0001,

0xf575,	// (0x0002af41) power_save_pane_t_ParamLimits

0xf575,	// (0x0002af41) power_save_pane_t

0x61f1,	// (0x00021bbd) power_save_t3_ParamLimits

0x61f1,	// (0x00021bbd) power_save_t3

0x61dc,	// (0x00021ba8) power_save_t2_ParamLimits

0x61dc,	// (0x00021ba8) power_save_t2

0x6206,	// (0x00021bd2) indicator_ps_pane_g1

0xf3d3,	// (0x0002ad9f) ai_gene_pane_ParamLimits

0xf3d3,	// (0x0002ad9f) ai_gene_pane

0xf3ea,	// (0x0002adb6) ai_links_pane_ParamLimits

0xf3ea,	// (0x0002adb6) ai_links_pane

0xf402,	// (0x0002adce) indicator_pane_cp1_ParamLimits

0xf402,	// (0x0002adce) indicator_pane_cp1

0xf411,	// (0x0002addd) main_pane_idle_g1_cp_ParamLimits

0xf411,	// (0x0002addd) main_pane_idle_g1_cp

0x623f,	// (0x00021c0b) popup_ai_links_title_window

0xf429,	// (0x0002adf5) soft_indicator_pane_cp1_ParamLimits

0xf429,	// (0x0002adf5) soft_indicator_pane_cp1

0x8ed0,	// (0x0002489c) ai_links_pane_g1

0x8ed9,	// (0x000248a5) grid_ai_links_pane

0x0e26,	// (0x0001c7f2) ai_gene_pane_1

0x8ebe,	// (0x0002488a) ai_gene_pane_2

0x8ec7,	// (0x00024893) list_highlight_pane_cp4

0x0e02,	// (0x0001c7ce) cell_ai_link_pane_ParamLimits

0x0e02,	// (0x0001c7ce) cell_ai_link_pane

0x8e8f,	// (0x0002485b) cell_ai_link_pane_g1

0x646c,	// (0x00021e38) cell_ai_link_pane_g2

0x0001,

0xf911,	// (0x0002b2dd) cell_ai_link_pane_g

0x5f7b,	// (0x00021947) grid_highlight_cp2

0x5f7b,	// (0x00021947) bg_popup_sub_pane_cp1

0x6262,	// (0x00021c2e) popup_ai_links_title_window_t1

0x8ddf,	// (0x000247ab) ai_gene_pane_1_g1_ParamLimits

0x8ddf,	// (0x000247ab) ai_gene_pane_1_g1

0x8deb,	// (0x000247b7) ai_gene_pane_1_g2_ParamLimits

0x8deb,	// (0x000247b7) ai_gene_pane_1_g2

0x0001,

0xf907,	// (0x0002b2d3) ai_gene_pane_1_g_ParamLimits

0xf907,	// (0x0002b2d3) ai_gene_pane_1_g

0x8df8,	// (0x000247c4) ai_gene_pane_1_t1_ParamLimits

0x8df8,	// (0x000247c4) ai_gene_pane_1_t1

0x8e2c,	// (0x000247f8) grid_ai_soft_ind_pane

0x8dca,	// (0x00024796) ai_gene_pane_2_t1_ParamLimits

0x8dca,	// (0x00024796) ai_gene_pane_2_t1

0xf43d,	// (0x0002ae09) main_pane_empty_t1_ParamLimits

0xf43d,	// (0x0002ae09) main_pane_empty_t1

0xf455,	// (0x0002ae21) main_pane_empty_t2_ParamLimits

0xf455,	// (0x0002ae21) main_pane_empty_t2

0xf46a,	// (0x0002ae36) main_pane_empty_t3_ParamLimits

0xf46a,	// (0x0002ae36) main_pane_empty_t3

0xf47c,	// (0x0002ae48) main_pane_empty_t4_ParamLimits

0xf47c,	// (0x0002ae48) main_pane_empty_t4

0xf48e,	// (0x0002ae5a) main_pane_empty_t5_ParamLimits

0xf48e,	// (0x0002ae5a) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002af46) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002af46) main_pane_empty_t

0x696a,	// (0x00022336) bg_popup_window_pane_ParamLimits

0x696a,	// (0x00022336) bg_popup_window_pane

0x8b3a,	// (0x00024506) find_popup_pane_cp2_ParamLimits

0x8b3a,	// (0x00024506) find_popup_pane_cp2

0x8b46,	// (0x00024512) heading_pane_ParamLimits

0x8b46,	// (0x00024512) heading_pane

0x5f7b,	// (0x00021947) bg_popup_sub_pane

0x0d25,	// (0x0001c6f1) bg_popup_window_pane_g1_ParamLimits

0x0d25,	// (0x0001c6f1) bg_popup_window_pane_g1

0x0d34,	// (0x0001c700) bg_popup_window_pane_g2_ParamLimits

0x0d34,	// (0x0001c700) bg_popup_window_pane_g2

0x0d40,	// (0x0001c70c) bg_popup_window_pane_g3_ParamLimits

0x0d40,	// (0x0001c70c) bg_popup_window_pane_g3

0x0d4c,	// (0x0001c718) bg_popup_window_pane_g4_ParamLimits

0x0d4c,	// (0x0001c718) bg_popup_window_pane_g4

0x0d5b,	// (0x0001c727) bg_popup_window_pane_g5_ParamLimits

0x0d5b,	// (0x0001c727) bg_popup_window_pane_g5

0x0d6b,	// (0x0001c737) bg_popup_window_pane_g6_ParamLimits

0x0d6b,	// (0x0001c737) bg_popup_window_pane_g6

0x0d77,	// (0x0001c743) bg_popup_window_pane_g7_ParamLimits

0x0d77,	// (0x0001c743) bg_popup_window_pane_g7

0x0d86,	// (0x0001c752) bg_popup_window_pane_g8_ParamLimits

0x0d86,	// (0x0001c752) bg_popup_window_pane_g8

0x0d95,	// (0x0001c761) bg_popup_window_pane_g9_ParamLimits

0x0d95,	// (0x0001c761) bg_popup_window_pane_g9

0x8b20,	// (0x000244ec) bg_popup_window_pane_g10_ParamLimits

0x8b20,	// (0x000244ec) bg_popup_window_pane_g10

0x0009,

0xf8cf,	// (0x0002b29b) bg_popup_window_pane_g_ParamLimits

0xf8cf,	// (0x0002b29b) bg_popup_window_pane_g

0x8a49,	// (0x00024415) bg_popup_heading_pane_ParamLimits

0x8a49,	// (0x00024415) bg_popup_heading_pane

0x4e63,	// (0x0002082f) tabs_4_passive_pane_cp_srt_ParamLimits

0x4e63,	// (0x0002082f) tabs_4_passive_pane_cp_srt

0x4e75,	// (0x00020841) tabs_4_passive_pane_srt_ParamLimits

0x8a5d,	// (0x00024429) heading_pane_g2

0x4e75,	// (0x00020841) tabs_4_passive_pane_srt

0x7dbb,	// (0x00023787) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7dbb,	// (0x00023787) bg_passive_tab_pane_cp3_srt

0x8a65,	// (0x00024431) heading_pane_t1_ParamLimits

0x8a65,	// (0x00024431) heading_pane_t1

0x8a7c,	// (0x00024448) heading_pane_t2_ParamLimits

0x8a7c,	// (0x00024448) heading_pane_t2

0x0001,

0xf8ca,	// (0x0002b296) heading_pane_t_ParamLimits

0xf8ca,	// (0x0002b296) heading_pane_t

0x8576,	// (0x00023f42) bg_popup_heading_pane_g1

0x8625,	// (0x00023ff1) bg_popup_heading_pane_g2

0x862f,	// (0x00023ffb) bg_popup_heading_pane_g3

0x8639,	// (0x00024005) bg_popup_heading_pane_g4

0x8643,	// (0x0002400f) bg_popup_heading_pane_g5

0x864d,	// (0x00024019) bg_popup_heading_pane_g6

0x8655,	// (0x00024021) bg_popup_heading_pane_g7

0x865d,	// (0x00024029) bg_popup_heading_pane_g8

0x8667,	// (0x00024033) bg_popup_heading_pane_g9

0x0008,

0xf886,	// (0x0002b252) bg_popup_heading_pane_g

0x7d47,	// (0x00023713) bg_popup_sub_pane_g1

0x7d4f,	// (0x0002371b) bg_popup_sub_pane_g2

0x7d57,	// (0x00023723) bg_popup_sub_pane_g3

0x7d5f,	// (0x0002372b) bg_popup_sub_pane_g4

0x7d67,	// (0x00023733) bg_popup_sub_pane_g5

0x7d6f,	// (0x0002373b) bg_popup_sub_pane_g6

0x7d77,	// (0x00023743) bg_popup_sub_pane_g7

0x7d7f,	// (0x0002374b) bg_popup_sub_pane_g8

0x7d87,	// (0x00023753) bg_popup_sub_pane_g9

0x0008,

0xf860,	// (0x0002b22c) bg_popup_sub_pane_g

0x62d6,	// (0x00021ca2) bg_popup_window_pane_cp5_ParamLimits

0x62d6,	// (0x00021ca2) bg_popup_window_pane_cp5

0x62f2,	// (0x00021cbe) popup_note_window_g1_ParamLimits

0x62f2,	// (0x00021cbe) popup_note_window_g1

0x62fe,	// (0x00021cca) popup_note_window_t1_ParamLimits

0x62fe,	// (0x00021cca) popup_note_window_t1

0x6310,	// (0x00021cdc) popup_note_window_t2_ParamLimits

0x6310,	// (0x00021cdc) popup_note_window_t2

0x6322,	// (0x00021cee) popup_note_window_t3_ParamLimits

0x6322,	// (0x00021cee) popup_note_window_t3

0x6334,	// (0x00021d00) popup_note_window_t4_ParamLimits

0x6334,	// (0x00021d00) popup_note_window_t4

0x635c,	// (0x00021d28) popup_note_window_t5_ParamLimits

0x635c,	// (0x00021d28) popup_note_window_t5

0x0004,

0xf585,	// (0x0002af51) popup_note_window_t_ParamLimits

0xf585,	// (0x0002af51) popup_note_window_t

0x6380,	// (0x00021d4c) bg_popup_window_pane_cp6_ParamLimits

0x6380,	// (0x00021d4c) bg_popup_window_pane_cp6

0x84ea,	// (0x00023eb6) popup_note_image_window_g1_ParamLimits

0x84ea,	// (0x00023eb6) popup_note_image_window_g1

0x84f6,	// (0x00023ec2) popup_note_image_window_g2_ParamLimits

0x84f6,	// (0x00023ec2) popup_note_image_window_g2

0x0001,

0xf854,	// (0x0002b220) popup_note_image_window_g_ParamLimits

0xf854,	// (0x0002b220) popup_note_image_window_g

0x850f,	// (0x00023edb) popup_note_image_window_t1_ParamLimits

0x850f,	// (0x00023edb) popup_note_image_window_t1

0x8528,	// (0x00023ef4) popup_note_image_window_t2_ParamLimits

0x8528,	// (0x00023ef4) popup_note_image_window_t2

0x8541,	// (0x00023f0d) popup_note_image_window_t3_ParamLimits

0x8541,	// (0x00023f0d) popup_note_image_window_t3

0x0002,

0xf859,	// (0x0002b225) popup_note_image_window_t_ParamLimits

0xf859,	// (0x0002b225) popup_note_image_window_t

0x83ab,	// (0x00023d77) bg_popup_window_pane_cp7_ParamLimits

0x83ab,	// (0x00023d77) bg_popup_window_pane_cp7

0x83db,	// (0x00023da7) popup_note_wait_window_g1_ParamLimits

0x83db,	// (0x00023da7) popup_note_wait_window_g1

0x83e7,	// (0x00023db3) popup_note_wait_window_g2_ParamLimits

0x83e7,	// (0x00023db3) popup_note_wait_window_g2

0x0002,

0xf842,	// (0x0002b20e) popup_note_wait_window_g_ParamLimits

0xf842,	// (0x0002b20e) popup_note_wait_window_g

0x83ff,	// (0x00023dcb) popup_note_wait_window_t1_ParamLimits

0x83ff,	// (0x00023dcb) popup_note_wait_window_t1

0x8426,	// (0x00023df2) popup_note_wait_window_t2_ParamLimits

0x8426,	// (0x00023df2) popup_note_wait_window_t2

0x8443,	// (0x00023e0f) popup_note_wait_window_t3_ParamLimits

0x8443,	// (0x00023e0f) popup_note_wait_window_t3

0x8456,	// (0x00023e22) popup_note_wait_window_t4_ParamLimits

0x8456,	// (0x00023e22) popup_note_wait_window_t4

0x0004,

0xf849,	// (0x0002b215) popup_note_wait_window_t_ParamLimits

0xf849,	// (0x0002b215) popup_note_wait_window_t

0x847b,	// (0x00023e47) wait_bar_pane_ParamLimits

0x847b,	// (0x00023e47) wait_bar_pane

0x5f7b,	// (0x00021947) wait_anim_pane

0x5f7b,	// (0x00021947) wait_border_pane

0x5f71,	// (0x0002193d) wait_anim_pane_g1

0x5f71,	// (0x0002193d) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0002b0d5) wait_anim_pane_g

0x834f,	// (0x00023d1b) wait_border_pane_g1

0x835a,	// (0x00023d26) wait_border_pane_g2

0x8363,	// (0x00023d2f) wait_border_pane_g3

0x0002,

0xf83b,	// (0x0002b207) wait_border_pane_g

0x81bf,	// (0x00023b8b) bg_popup_window_pane_cp16_ParamLimits

0x81bf,	// (0x00023b8b) bg_popup_window_pane_cp16

0x82bf,	// (0x00023c8b) indicator_popup_pane_cp4_ParamLimits

0x82bf,	// (0x00023c8b) indicator_popup_pane_cp4

0x82d3,	// (0x00023c9f) popup_query_data_window_t1_ParamLimits

0x82d3,	// (0x00023c9f) popup_query_data_window_t1

0x82e5,	// (0x00023cb1) popup_query_data_window_t2_ParamLimits

0x82e5,	// (0x00023cb1) popup_query_data_window_t2

0x82fe,	// (0x00023cca) popup_query_data_window_t3_ParamLimits

0x82fe,	// (0x00023cca) popup_query_data_window_t3

0x0002,

0xf834,	// (0x0002b200) popup_query_data_window_t_ParamLimits

0xf834,	// (0x0002b200) popup_query_data_window_t

0x8318,	// (0x00023ce4) query_popup_data_pane_ParamLimits

0x8318,	// (0x00023ce4) query_popup_data_pane

0x832c,	// (0x00023cf8) query_popup_data_pane_cp1_ParamLimits

0x832c,	// (0x00023cf8) query_popup_data_pane_cp1

0x81bf,	// (0x00023b8b) bg_popup_window_pane_cp10_ParamLimits

0x81bf,	// (0x00023b8b) bg_popup_window_pane_cp10

0x81f1,	// (0x00023bbd) indicator_popup_pane_ParamLimits

0x81f1,	// (0x00023bbd) indicator_popup_pane

0x8213,	// (0x00023bdf) popup_query_code_window_t1_ParamLimits

0x8213,	// (0x00023bdf) popup_query_code_window_t1

0x822d,	// (0x00023bf9) popup_query_code_window_t2_ParamLimits

0x822d,	// (0x00023bf9) popup_query_code_window_t2

0x8276,	// (0x00023c42) popup_query_code_window_t3_ParamLimits

0x8276,	// (0x00023c42) popup_query_code_window_t3

0x0002,

0xf82d,	// (0x0002b1f9) popup_query_code_window_t_ParamLimits

0xf82d,	// (0x0002b1f9) popup_query_code_window_t

0x82a5,	// (0x00023c71) query_popup_pane_ParamLimits

0x82a5,	// (0x00023c71) query_popup_pane

0x6380,	// (0x00021d4c) bg_popup_window_pane_cp15_ParamLimits

0x6380,	// (0x00021d4c) bg_popup_window_pane_cp15

0x639e,	// (0x00021d6a) indicator_popup_pane_cp1_ParamLimits

0x639e,	// (0x00021d6a) indicator_popup_pane_cp1

0x63b1,	// (0x00021d7d) indicator_popup_pane_cp2_ParamLimits

0x63b1,	// (0x00021d7d) indicator_popup_pane_cp2

0x63c4,	// (0x00021d90) popup_query_data_code_window_g1_ParamLimits

0x63c4,	// (0x00021d90) popup_query_data_code_window_g1

0x63d7,	// (0x00021da3) popup_query_data_code_window_t1_ParamLimits

0x63d7,	// (0x00021da3) popup_query_data_code_window_t1

0x63e9,	// (0x00021db5) popup_query_data_code_window_t2_ParamLimits

0x63e9,	// (0x00021db5) popup_query_data_code_window_t2

0x63fb,	// (0x00021dc7) popup_query_data_code_window_t3_ParamLimits

0x63fb,	// (0x00021dc7) popup_query_data_code_window_t3

0x6411,	// (0x00021ddd) popup_query_data_code_window_t4_ParamLimits

0x6411,	// (0x00021ddd) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002af5c) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002af5c) popup_query_data_code_window_t

0x7343,	// (0x00022d0f) list_single_midp_graphic_pane_g3

0x6429,	// (0x00021df5) query_popup_data_pane_cp2_ParamLimits

0x643c,	// (0x00021e08) query_popup_pane_cp2_ParamLimits

0x643c,	// (0x00021e08) query_popup_pane_cp2

0x5f7b,	// (0x00021947) bg_popup_window_pane_cp11

0x81b7,	// (0x00023b83) heading_pane_cp5

0x6524,	// (0x00021ef0) listscroll_popup_info_pane

0x5f7b,	// (0x00021947) input_focus_pane_cp3

0x644f,	// (0x00021e1b) query_popup_pane_t1

0x645d,	// (0x00021e29) list_popup_info_pane_ParamLimits

0x645d,	// (0x00021e29) list_popup_info_pane

0x646c,	// (0x00021e38) listscroll_popup_info_pane_g1

0x6474,	// (0x00021e40) scroll_pane_cp7

0x647e,	// (0x00021e4a) popup_info_list_pane_t1_ParamLimits

0x647e,	// (0x00021e4a) popup_info_list_pane_t1

0x6498,	// (0x00021e64) popup_info_list_pane_t2_ParamLimits

0x6498,	// (0x00021e64) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002af65) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002af65) popup_info_list_pane_t

0x5f7b,	// (0x00021947) bg_popup_window_pane_cp12

0x9515,	// (0x00024ee1) find_popup_pane

0x605b,	// (0x00021a27) bg_popup_window_pane_cp3

0x64b2,	// (0x00021e7e) heading_pane_cp3

0x64be,	// (0x00021e8a) listscroll_popup_graphic_pane

0x5f7b,	// (0x00021947) bg_popup_window_pane_cp4

0xf4f0,	// (0x0002aebc) heading_pane_cp4

0x6524,	// (0x00021ef0) listscroll_popup_colour_pane

0x652c,	// (0x00021ef8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x652c,	// (0x00021ef8) cell_large_graphic_colour_none_popup_pane

0xf4f8,	// (0x0002aec4) grid_large_graphic_colour_popup_pane_ParamLimits

0xf4f8,	// (0x0002aec4) grid_large_graphic_colour_popup_pane

0x6568,	// (0x00021f34) listscroll_popup_colour_pane_g1_ParamLimits

0x6568,	// (0x00021f34) listscroll_popup_colour_pane_g1

0x657f,	// (0x00021f4b) listscroll_popup_colour_pane_g2_ParamLimits

0x657f,	// (0x00021f4b) listscroll_popup_colour_pane_g2

0x6596,	// (0x00021f62) listscroll_popup_colour_pane_g3_ParamLimits

0x6596,	// (0x00021f62) listscroll_popup_colour_pane_g3

0xf51c,	// (0x0002aee8) listscroll_popup_colour_pane_g4_ParamLimits

0xf51c,	// (0x0002aee8) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002af6a) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002af6a) listscroll_popup_colour_pane_g

0x65b5,	// (0x00021f81) scroll_pane_cp6_ParamLimits

0x65b5,	// (0x00021f81) scroll_pane_cp6

0xf52b,	// (0x0002aef7) cell_large_graphic_colour_popup_pane_ParamLimits

0xf52b,	// (0x0002aef7) cell_large_graphic_colour_popup_pane

0x65e6,	// (0x00021fb2) cell_large_graphic_colour_none_popup_pane_t1

0x5f7b,	// (0x00021947) grid_highlight_pane_cp5

0x65f5,	// (0x00021fc1) cell_large_graphic_colour_popup_pane_g1

0x65fd,	// (0x00021fc9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002af73) cell_large_graphic_colour_popup_pane_g

0x6605,	// (0x00021fd1) cell_large_graphic_colour_popup_pane_g2_copy1

0x660e,	// (0x00021fda) grid_highlight_pane_cp4

0x6616,	// (0x00021fe2) bg_popup_window_pane_cp8_ParamLimits

0x6616,	// (0x00021fe2) bg_popup_window_pane_cp8

0x6631,	// (0x00021ffd) popup_snote_single_text_window_g1_ParamLimits

0x6631,	// (0x00021ffd) popup_snote_single_text_window_g1

0x6643,	// (0x0002200f) popup_snote_single_text_window_t1_ParamLimits

0x6643,	// (0x0002200f) popup_snote_single_text_window_t1

0x6656,	// (0x00022022) popup_snote_single_text_window_t2_ParamLimits

0x6656,	// (0x00022022) popup_snote_single_text_window_t2

0x6669,	// (0x00022035) popup_snote_single_text_window_t3_ParamLimits

0x6669,	// (0x00022035) popup_snote_single_text_window_t3

0x66a2,	// (0x0002206e) popup_snote_single_text_window_t4_ParamLimits

0x66a2,	// (0x0002206e) popup_snote_single_text_window_t4

0x66d6,	// (0x000220a2) popup_snote_single_text_window_t5_ParamLimits

0x66d6,	// (0x000220a2) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002af78) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002af78) popup_snote_single_text_window_t

0x6705,	// (0x000220d1) bg_popup_window_pane_cp9_ParamLimits

0x6705,	// (0x000220d1) bg_popup_window_pane_cp9

0x6631,	// (0x00021ffd) popup_snote_single_graphic_window_g1_ParamLimits

0x6631,	// (0x00021ffd) popup_snote_single_graphic_window_g1

0x6713,	// (0x000220df) popup_snote_single_graphic_window_g2_ParamLimits

0x6713,	// (0x000220df) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002af83) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002af83) popup_snote_single_graphic_window_g

0x671f,	// (0x000220eb) popup_snote_single_graphic_window_t1_ParamLimits

0x671f,	// (0x000220eb) popup_snote_single_graphic_window_t1

0x6732,	// (0x000220fe) popup_snote_single_graphic_window_t2_ParamLimits

0x6732,	// (0x000220fe) popup_snote_single_graphic_window_t2

0x6745,	// (0x00022111) popup_snote_single_graphic_window_t3_ParamLimits

0x6745,	// (0x00022111) popup_snote_single_graphic_window_t3

0x677e,	// (0x0002214a) popup_snote_single_graphic_window_t4_ParamLimits

0x677e,	// (0x0002214a) popup_snote_single_graphic_window_t4

0x67b2,	// (0x0002217e) popup_snote_single_graphic_window_t5_ParamLimits

0x67b2,	// (0x0002217e) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002af88) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002af88) popup_snote_single_graphic_window_t

0x9417,	// (0x00024de3) grid_graphic_popup_pane_ParamLimits

0x9417,	// (0x00024de3) grid_graphic_popup_pane

0x943f,	// (0x00024e0b) listscroll_popup_graphic_pane_g1_ParamLimits

0x943f,	// (0x00024e0b) listscroll_popup_graphic_pane_g1

0x1109,	// (0x0001cad5) listscroll_popup_graphic_pane_g2_ParamLimits

0x1109,	// (0x0001cad5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9aa,	// (0x0002b376) listscroll_popup_graphic_pane_g_ParamLimits

0xf9aa,	// (0x0002b376) listscroll_popup_graphic_pane_g

0x94a9,	// (0x00024e75) scroll_pane_cp5

0x10cd,	// (0x0001ca99) cell_graphic_popup_pane_ParamLimits

0x10cd,	// (0x0001ca99) cell_graphic_popup_pane

0x93a3,	// (0x00024d6f) cell_graphic_popup_pane_g1

0x93ab,	// (0x00024d77) cell_graphic_popup_pane_g2

0x6605,	// (0x00021fd1) cell_graphic_popup_pane_g3

0x0002,

0xf9a3,	// (0x0002b36f) cell_graphic_popup_pane_g

0x93b4,	// (0x00024d80) cell_graphic_popup_pane_t2

0x660e,	// (0x00021fda) grid_highlight_pane_cp3

0x67f3,	// (0x000221bf) list_gen_pane_ParamLimits

0x67f3,	// (0x000221bf) list_gen_pane

0x6825,	// (0x000221f1) scroll_pane

0x1088,	// (0x0001ca54) bg_list_pane_g1_ParamLimits

0x1088,	// (0x0001ca54) bg_list_pane_g1

0x9320,	// (0x00024cec) bg_list_pane_g2_ParamLimits

0x9320,	// (0x00024cec) bg_list_pane_g2

0x9333,	// (0x00024cff) bg_list_pane_g3_ParamLimits

0x9333,	// (0x00024cff) bg_list_pane_g3

0x9345,	// (0x00024d11) bg_list_pane_g4_ParamLimits

0x9345,	// (0x00024d11) bg_list_pane_g4

0x10a3,	// (0x0001ca6f) bg_list_pane_g5_ParamLimits

0x10a3,	// (0x0001ca6f) bg_list_pane_g5

0x0004,

0xf998,	// (0x0002b364) bg_list_pane_g_ParamLimits

0xf998,	// (0x0002b364) bg_list_pane_g

0x1017,	// (0x0001c9e3) list_double2_graphic_large_graphic_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_double2_graphic_large_graphic_pane

0x1017,	// (0x0001c9e3) list_double2_graphic_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_double2_graphic_pane

0x1017,	// (0x0001c9e3) list_double2_large_graphic_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_double2_large_graphic_pane

0x1017,	// (0x0001c9e3) list_double2_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_double2_pane

0x1017,	// (0x0001c9e3) list_double_graphic_heading_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_double_graphic_heading_pane

0x1017,	// (0x0001c9e3) list_double_graphic_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_double_graphic_pane

0x1017,	// (0x0001c9e3) list_double_heading_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_double_heading_pane

0x1017,	// (0x0001c9e3) list_double_large_graphic_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_double_large_graphic_pane

0x1017,	// (0x0001c9e3) list_double_number_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_double_number_pane

0x1017,	// (0x0001c9e3) list_double_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_double_pane

0x1017,	// (0x0001c9e3) list_double_time_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_double_time_pane

0x1017,	// (0x0001c9e3) list_setting_number_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_setting_number_pane

0x1017,	// (0x0001c9e3) list_setting_pane_ParamLimits

0x1017,	// (0x0001c9e3) list_setting_pane

0x103c,	// (0x0001ca08) list_single_2graphic_pane_ParamLimits

0x103c,	// (0x0001ca08) list_single_2graphic_pane

0x103c,	// (0x0001ca08) list_single_graphic_heading_pane_ParamLimits

0x103c,	// (0x0001ca08) list_single_graphic_heading_pane

0x103c,	// (0x0001ca08) list_single_graphic_pane_ParamLimits

0x103c,	// (0x0001ca08) list_single_graphic_pane

0x103c,	// (0x0001ca08) list_single_heading_pane_ParamLimits

0x103c,	// (0x0001ca08) list_single_heading_pane

0x103c,	// (0x0001ca08) list_single_large_graphic_pane_ParamLimits

0x103c,	// (0x0001ca08) list_single_large_graphic_pane

0x103c,	// (0x0001ca08) list_single_number_heading_pane_ParamLimits

0x103c,	// (0x0001ca08) list_single_number_heading_pane

0x103c,	// (0x0001ca08) list_single_number_pane_ParamLimits

0x103c,	// (0x0001ca08) list_single_number_pane

0x103c,	// (0x0001ca08) list_single_pane_ParamLimits

0x103c,	// (0x0001ca08) list_single_pane

0x5f7b,	// (0x00021947) list_highlight_pane_cp1

0x2b3a,	// (0x0001e506) list_single_pane_g1_ParamLimits

0x2b3a,	// (0x0001e506) list_single_pane_g1

0x2b46,	// (0x0001e512) list_single_pane_g2_ParamLimits

0x2b46,	// (0x0001e512) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002af9a) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002af9a) list_single_pane_g

0x3564,	// (0x0001ef30) list_single_pane_t1_ParamLimits

0x3564,	// (0x0001ef30) list_single_pane_t1

0x2b3a,	// (0x0001e506) list_single_number_pane_g1_ParamLimits

0x2b3a,	// (0x0001e506) list_single_number_pane_g1

0x2b46,	// (0x0001e512) list_single_number_pane_g2_ParamLimits

0x2b46,	// (0x0001e512) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002af9a) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002af9a) list_single_number_pane_g

0x3262,	// (0x0001ec2e) list_single_number_pane_t1_ParamLimits

0x3262,	// (0x0001ec2e) list_single_number_pane_t1

0xbf30,	// (0x000278fc) list_single_number_pane_t2_ParamLimits

0xbf30,	// (0x000278fc) list_single_number_pane_t2

0x0001,

0xf959,	// (0x0002b325) list_single_number_pane_t_ParamLimits

0xf959,	// (0x0002b325) list_single_number_pane_t

0xb987,	// (0x00027353) list_single_graphic_pane_g1_ParamLimits

0xb987,	// (0x00027353) list_single_graphic_pane_g1

0x2b3a,	// (0x0001e506) list_single_graphic_pane_g2_ParamLimits

0x2b3a,	// (0x0001e506) list_single_graphic_pane_g2

0x2b46,	// (0x0001e512) list_single_graphic_pane_g3_ParamLimits

0x2b46,	// (0x0001e512) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002af93) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002af93) list_single_graphic_pane_g

0xb993,	// (0x0002735f) list_single_graphic_pane_t1_ParamLimits

0xb993,	// (0x0002735f) list_single_graphic_pane_t1

0x2b3a,	// (0x0001e506) list_single_heading_pane_g1_ParamLimits

0x2b3a,	// (0x0001e506) list_single_heading_pane_g1

0x2b46,	// (0x0001e512) list_single_heading_pane_g2_ParamLimits

0x2b46,	// (0x0001e512) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002af9a) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002af9a) list_single_heading_pane_g

0x3586,	// (0x0001ef52) list_single_heading_pane_t1_ParamLimits

0x3586,	// (0x0001ef52) list_single_heading_pane_t1

0xb9a9,	// (0x00027375) list_single_heading_pane_t2_ParamLimits

0xb9a9,	// (0x00027375) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002af9f) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002af9f) list_single_heading_pane_t

0x2b3a,	// (0x0001e506) list_single_number_heading_pane_g1_ParamLimits

0x2b3a,	// (0x0001e506) list_single_number_heading_pane_g1

0x2b46,	// (0x0001e512) list_single_number_heading_pane_g2_ParamLimits

0x2b46,	// (0x0001e512) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002af9a) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002af9a) list_single_number_heading_pane_g

0x3586,	// (0x0001ef52) list_single_number_heading_pane_t1_ParamLimits

0x3586,	// (0x0001ef52) list_single_number_heading_pane_t1

0xb9bb,	// (0x00027387) list_single_number_heading_pane_t2_ParamLimits

0xb9bb,	// (0x00027387) list_single_number_heading_pane_t2

0x353e,	// (0x0001ef0a) list_single_number_heading_pane_t3_ParamLimits

0x353e,	// (0x0001ef0a) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002afa4) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002afa4) list_single_number_heading_pane_t

0x3210,	// (0x0001ebdc) list_single_graphic_heading_pane_g1_ParamLimits

0x3210,	// (0x0001ebdc) list_single_graphic_heading_pane_g1

0xb9cd,	// (0x00027399) list_single_graphic_heading_pane_g4_ParamLimits

0xb9cd,	// (0x00027399) list_single_graphic_heading_pane_g4

0x2b46,	// (0x0001e512) list_single_graphic_heading_pane_g5_ParamLimits

0x2b46,	// (0x0001e512) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002afab) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002afab) list_single_graphic_heading_pane_g

0x3586,	// (0x0001ef52) list_single_graphic_heading_pane_t1_ParamLimits

0x3586,	// (0x0001ef52) list_single_graphic_heading_pane_t1

0xb9de,	// (0x000273aa) list_single_graphic_heading_pane_t2_ParamLimits

0xb9de,	// (0x000273aa) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002afb2) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002afb2) list_single_graphic_heading_pane_t

0x357a,	// (0x0001ef46) list_single_large_graphic_pane_g1_ParamLimits

0x357a,	// (0x0001ef46) list_single_large_graphic_pane_g1

0x2b3a,	// (0x0001e506) list_single_large_graphic_pane_g2_ParamLimits

0x2b3a,	// (0x0001e506) list_single_large_graphic_pane_g2

0x2b46,	// (0x0001e512) list_single_large_graphic_pane_g3_ParamLimits

0x2b46,	// (0x0001e512) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002afb7) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002afb7) list_single_large_graphic_pane_g

0x835a,	// (0x00023d26) wait_border_pane_g2_copy1

0xb9f0,	// (0x000273bc) list_single_large_graphic_pane_g4_cp2

0x3586,	// (0x0001ef52) list_single_large_graphic_pane_t1_ParamLimits

0x3586,	// (0x0001ef52) list_single_large_graphic_pane_t1

0xb9f8,	// (0x000273c4) list_double_pane_g1_ParamLimits

0xb9f8,	// (0x000273c4) list_double_pane_g1

0x2bc1,	// (0x0001e58d) list_double_pane_g2_ParamLimits

0x2bc1,	// (0x0001e58d) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002afbe) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002afbe) list_double_pane_g

0x2bcd,	// (0x0001e599) list_double_pane_t1_ParamLimits

0x2bcd,	// (0x0001e599) list_double_pane_t1

0xba04,	// (0x000273d0) list_double_pane_t2_ParamLimits

0xba04,	// (0x000273d0) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002afc3) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002afc3) list_double_pane_t

0xba16,	// (0x000273e2) list_double2_pane_g1_ParamLimits

0xba16,	// (0x000273e2) list_double2_pane_g1

0x2d92,	// (0x0001e75e) list_double2_pane_g2_ParamLimits

0x2d92,	// (0x0001e75e) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002afc8) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002afc8) list_double2_pane_g

0xba27,	// (0x000273f3) list_double2_pane_t1_ParamLimits

0xba27,	// (0x000273f3) list_double2_pane_t1

0xba3d,	// (0x00027409) list_double2_pane_t2_ParamLimits

0xba3d,	// (0x00027409) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002afcd) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002afcd) list_double2_pane_t

0xb9f8,	// (0x000273c4) list_double_number_pane_g1_ParamLimits

0xb9f8,	// (0x000273c4) list_double_number_pane_g1

0x2bc1,	// (0x0001e58d) list_double_number_pane_g2_ParamLimits

0x2bc1,	// (0x0001e58d) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002afbe) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002afbe) list_double_number_pane_g

0xba4f,	// (0x0002741b) list_double_number_pane_t1_ParamLimits

0xba4f,	// (0x0002741b) list_double_number_pane_t1

0x2c96,	// (0x0001e662) list_double_number_pane_t2_ParamLimits

0x2c96,	// (0x0001e662) list_double_number_pane_t2

0xba61,	// (0x0002742d) list_double_number_pane_t3_ParamLimits

0xba61,	// (0x0002742d) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002afd2) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002afd2) list_double_number_pane_t

0x2c8a,	// (0x0001e656) list_double_graphic_pane_g1_ParamLimits

0x2c8a,	// (0x0001e656) list_double_graphic_pane_g1

0xba73,	// (0x0002743f) list_double_graphic_pane_g2_ParamLimits

0xba73,	// (0x0002743f) list_double_graphic_pane_g2

0xba82,	// (0x0002744e) list_double_graphic_pane_g3_ParamLimits

0xba82,	// (0x0002744e) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002afd9) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002afd9) list_double_graphic_pane_g

0xba9a,	// (0x00027466) list_double_graphic_pane_t1_ParamLimits

0xba9a,	// (0x00027466) list_double_graphic_pane_t1

0xbab0,	// (0x0002747c) list_double_graphic_pane_t2_ParamLimits

0xbab0,	// (0x0002747c) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002afe2) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002afe2) list_double_graphic_pane_t

0xbac2,	// (0x0002748e) list_double2_graphic_pane_g1_ParamLimits

0xbac2,	// (0x0002748e) list_double2_graphic_pane_g1

0xb9f8,	// (0x000273c4) list_double2_graphic_pane_g2_ParamLimits

0xb9f8,	// (0x000273c4) list_double2_graphic_pane_g2

0x2bc1,	// (0x0001e58d) list_double2_graphic_pane_g3_ParamLimits

0x2bc1,	// (0x0001e58d) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002afe7) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002afe7) list_double2_graphic_pane_g

0xbace,	// (0x0002749a) list_double2_graphic_pane_t1_ParamLimits

0xbace,	// (0x0002749a) list_double2_graphic_pane_t1

0xbae4,	// (0x000274b0) list_double2_graphic_pane_t2_ParamLimits

0xbae4,	// (0x000274b0) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002afee) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002afee) list_double2_graphic_pane_t

0xbaf6,	// (0x000274c2) list_double_large_graphic_pane_g1_ParamLimits

0xbaf6,	// (0x000274c2) list_double_large_graphic_pane_g1

0xbb21,	// (0x000274ed) list_double_large_graphic_pane_g2_ParamLimits

0xbb21,	// (0x000274ed) list_double_large_graphic_pane_g2

0x2bc1,	// (0x0001e58d) list_double_large_graphic_pane_g3_ParamLimits

0x2bc1,	// (0x0001e58d) list_double_large_graphic_pane_g3

0xbb32,	// (0x000274fe) list_double_large_graphic_pane_g4_ParamLimits

0xbb32,	// (0x000274fe) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002aff3) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002aff3) list_double_large_graphic_pane_g

0xbb45,	// (0x00027511) list_double_large_graphic_pane_t1_ParamLimits

0xbb45,	// (0x00027511) list_double_large_graphic_pane_t1

0xbb5e,	// (0x0002752a) list_double_large_graphic_pane_t2_ParamLimits

0xbb5e,	// (0x0002752a) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002affe) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002affe) list_double_large_graphic_pane_t

0xbb70,	// (0x0002753c) list_double2_large_graphic_pane_g1_ParamLimits

0xbb70,	// (0x0002753c) list_double2_large_graphic_pane_g1

0xba16,	// (0x000273e2) list_double2_large_graphic_pane_g2_ParamLimits

0xba16,	// (0x000273e2) list_double2_large_graphic_pane_g2

0x2d92,	// (0x0001e75e) list_double2_large_graphic_pane_g3_ParamLimits

0x2d92,	// (0x0001e75e) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002b003) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002b003) list_double2_large_graphic_pane_g

0xbb7c,	// (0x00027548) list_double2_large_graphic_pane_t1_ParamLimits

0xbb7c,	// (0x00027548) list_double2_large_graphic_pane_t1

0xbb92,	// (0x0002755e) list_double2_large_graphic_pane_t2_ParamLimits

0xbb92,	// (0x0002755e) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002b00a) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002b00a) list_double2_large_graphic_pane_t

0xbba4,	// (0x00027570) list_double_heading_pane_g1_ParamLimits

0xbba4,	// (0x00027570) list_double_heading_pane_g1

0xbbb5,	// (0x00027581) list_double_heading_pane_g2_ParamLimits

0xbbb5,	// (0x00027581) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002b00f) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002b00f) list_double_heading_pane_g

0xbbc1,	// (0x0002758d) list_double_heading_pane_t1_ParamLimits

0xbbc1,	// (0x0002758d) list_double_heading_pane_t1

0xba3d,	// (0x00027409) list_double_heading_pane_t2_ParamLimits

0xba3d,	// (0x00027409) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002b014) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002b014) list_double_heading_pane_t

0x2c8a,	// (0x0001e656) list_double_graphic_heading_pane_g1_ParamLimits

0x2c8a,	// (0x0001e656) list_double_graphic_heading_pane_g1

0xbba4,	// (0x00027570) list_double_graphic_heading_pane_g2_ParamLimits

0xbba4,	// (0x00027570) list_double_graphic_heading_pane_g2

0xbbb5,	// (0x00027581) list_double_graphic_heading_pane_g3_ParamLimits

0xbbb5,	// (0x00027581) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002b019) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002b019) list_double_graphic_heading_pane_g

0xbbd7,	// (0x000275a3) list_double_graphic_heading_pane_t1_ParamLimits

0xbbd7,	// (0x000275a3) list_double_graphic_heading_pane_t1

0xbae4,	// (0x000274b0) list_double_graphic_heading_pane_t2_ParamLimits

0xbae4,	// (0x000274b0) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002b020) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002b020) list_double_graphic_heading_pane_t

0xbb21,	// (0x000274ed) list_double_time_pane_g1_ParamLimits

0xbb21,	// (0x000274ed) list_double_time_pane_g1

0x2bc1,	// (0x0001e58d) list_double_time_pane_g2_ParamLimits

0x2bc1,	// (0x0001e58d) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0002b025) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0002b025) list_double_time_pane_g

0x2d59,	// (0x0001e725) list_double_time_pane_t1_ParamLimits

0x2d59,	// (0x0001e725) list_double_time_pane_t1

0xbbed,	// (0x000275b9) list_double_time_pane_t2_ParamLimits

0xbbed,	// (0x000275b9) list_double_time_pane_t2

0xbbff,	// (0x000275cb) list_double_time_pane_t3_ParamLimits

0xbbff,	// (0x000275cb) list_double_time_pane_t3

0xbc11,	// (0x000275dd) list_double_time_pane_t4_ParamLimits

0xbc11,	// (0x000275dd) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0002b02a) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0002b02a) list_double_time_pane_t

0x2e16,	// (0x0001e7e2) list_setting_pane_g1_ParamLimits

0x2e16,	// (0x0001e7e2) list_setting_pane_g1

0x2d92,	// (0x0001e75e) list_setting_pane_g2_ParamLimits

0x2d92,	// (0x0001e75e) list_setting_pane_g2

0x0001,

0xf667,	// (0x0002b033) list_setting_pane_g_ParamLimits

0xf667,	// (0x0002b033) list_setting_pane_g

0xbc23,	// (0x000275ef) list_setting_pane_t1_ParamLimits

0xbc23,	// (0x000275ef) list_setting_pane_t1

0xbc3d,	// (0x00027609) list_setting_pane_t2_ParamLimits

0xbc3d,	// (0x00027609) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0002b038) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0002b038) list_setting_pane_t

0xbc7a,	// (0x00027646) set_value_pane_cp_ParamLimits

0xbc7a,	// (0x00027646) set_value_pane_cp

0x2e82,	// (0x0001e84e) list_setting_number_pane_g1_ParamLimits

0x2e82,	// (0x0001e84e) list_setting_number_pane_g1

0x2e8e,	// (0x0001e85a) list_setting_number_pane_g2_ParamLimits

0x2e8e,	// (0x0001e85a) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0002b03f) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0002b03f) list_setting_number_pane_g

0xbc86,	// (0x00027652) list_setting_number_pane_t1_ParamLimits

0xbc86,	// (0x00027652) list_setting_number_pane_t1

0xbc9f,	// (0x0002766b) list_setting_number_pane_t2_ParamLimits

0xbc9f,	// (0x0002766b) list_setting_number_pane_t2

0xbcb9,	// (0x00027685) list_setting_number_pane_t3_ParamLimits

0xbcb9,	// (0x00027685) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0002b044) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0002b044) list_setting_number_pane_t

0xbc7a,	// (0x00027646) set_value_pane_ParamLimits

0xbc7a,	// (0x00027646) set_value_pane

0x6859,	// (0x00022225) bg_set_opt_pane_ParamLimits

0x6859,	// (0x00022225) bg_set_opt_pane

0x2f08,	// (0x0001e8d4) set_value_pane_t1

0x687a,	// (0x00022246) slider_set_pane_cp3

0x6883,	// (0x0002224f) volume_small_pane_cp

0x688c,	// (0x00022258) list_form_gen_pane

0x6895,	// (0x00022261) scroll_pane_cp8

0xbcfc,	// (0x000276c8) form_field_data_pane_ParamLimits

0xbcfc,	// (0x000276c8) form_field_data_pane

0xbd13,	// (0x000276df) form_field_data_wide_pane_ParamLimits

0xbd13,	// (0x000276df) form_field_data_wide_pane

0xbd33,	// (0x000276ff) form_field_popup_pane_ParamLimits

0xbd33,	// (0x000276ff) form_field_popup_pane

0xbd4b,	// (0x00027717) form_field_popup_wide_pane_ParamLimits

0xbd4b,	// (0x00027717) form_field_popup_wide_pane

0x2f9a,	// (0x0001e966) form_field_slider_pane_ParamLimits

0x2f9a,	// (0x0001e966) form_field_slider_pane

0x2fad,	// (0x0001e979) form_field_slider_wide_pane_ParamLimits

0x2fad,	// (0x0001e979) form_field_slider_wide_pane

0x68be,	// (0x0002228a) data_form_pane

0xbd72,	// (0x0002773e) form_field_data_pane_t1

0x68ca,	// (0x00022296) input_focus_pane

0x2fe4,	// (0x0001e9b0) data_form_wide_pane

0x3001,	// (0x0001e9cd) form_field_data_wide_pane_t1

0x6623,	// (0x00021fef) input_focus_pane_cp6

0xbd8c,	// (0x00027758) form_field_popup_pane_t1

0x68ca,	// (0x00022296) input_focus_pane_cp7

0x68ec,	// (0x000222b8) list_form_pane

0x3045,	// (0x0001ea11) form_field_popup_wide_pane_t1

0x68ca,	// (0x00022296) input_focus_pane_cp8

0x68f8,	// (0x000222c4) list_form_wide_pane

0xbdae,	// (0x0002777a) form_field_slider_pane_t1_ParamLimits

0xbdae,	// (0x0002777a) form_field_slider_pane_t1

0xbdc6,	// (0x00027792) form_field_slider_pane_t2_ParamLimits

0xbdc6,	// (0x00027792) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0002b054) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0002b054) form_field_slider_pane_t

0x62d6,	// (0x00021ca2) input_focus_pane_cp9_ParamLimits

0x62d6,	// (0x00021ca2) input_focus_pane_cp9

0xbddb,	// (0x000277a7) slider_cont_pane_ParamLimits

0xbddb,	// (0x000277a7) slider_cont_pane

0x6907,	// (0x000222d3) form_field_slider_wide_pane_t1_ParamLimits

0x6907,	// (0x000222d3) form_field_slider_wide_pane_t1

0x309c,	// (0x0001ea68) form_field_slider_wide_pane_t2_ParamLimits

0x309c,	// (0x0001ea68) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0002b059) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0002b059) form_field_slider_wide_pane_t

0x62d6,	// (0x00021ca2) input_focus_pane_cp10_ParamLimits

0x62d6,	// (0x00021ca2) input_focus_pane_cp10

0xbdef,	// (0x000277bb) slider_cont_pane_cp1_ParamLimits

0xbdef,	// (0x000277bb) slider_cont_pane_cp1

0xbe03,	// (0x000277cf) slider_form_pane_cp

0x6919,	// (0x000222e5) input_focus_pane_g1

0x6921,	// (0x000222ed) input_focus_pane_g2

0x6929,	// (0x000222f5) input_focus_pane_g3

0x6931,	// (0x000222fd) input_focus_pane_g4

0x6939,	// (0x00022305) input_focus_pane_g5

0x6941,	// (0x0002230d) input_focus_pane_g6

0x6949,	// (0x00022315) input_focus_pane_g7

0x6951,	// (0x0002231d) input_focus_pane_g8

0x6959,	// (0x00022325) input_focus_pane_g9

0x5f71,	// (0x0002193d) input_focus_pane_g10

0x0009,

0xf692,	// (0x0002b05e) input_focus_pane_g

0x8363,	// (0x00023d2f) wait_border_pane_g3_copy1

0xbe0b,	// (0x000277d7) data_form_pane_t1

0x5f71,	// (0x0002193d) wait_anim_pane_g1_copy1

0xbf42,	// (0x0002790e) data_form_wide_pane_t1

0xbe25,	// (0x000277f1) list_form_graphic_pane_cp_ParamLimits

0xbe25,	// (0x000277f1) list_form_graphic_pane_cp

0x9296,	// (0x00024c62) slider_form_pane_g1

0x929f,	// (0x00024c6b) slider_form_pane_g2

0x0006,

0xf989,	// (0x0002b355) slider_form_pane_g

0xbe38,	// (0x00027804) list_form_graphic_pane_ParamLimits

0xbe38,	// (0x00027804) list_form_graphic_pane

0x30fc,	// (0x0001eac8) list_form_graphic_pane_g1

0x3104,	// (0x0001ead0) list_form_graphic_pane_t1_ParamLimits

0x3104,	// (0x0001ead0) list_form_graphic_pane_t1

0x605b,	// (0x00021a27) list_highlight_pane_cp5_ParamLimits

0x605b,	// (0x00021a27) list_highlight_pane_cp5

0xbe4a,	// (0x00027816) find_pane_g1

0x6961,	// (0x0002232d) input_find_pane

0xbe53,	// (0x0002781f) input_find_pane_g1_ParamLimits

0xbe53,	// (0x0002781f) input_find_pane_g1

0xbe5f,	// (0x0002782b) input_find_pane_t1_ParamLimits

0xbe5f,	// (0x0002782b) input_find_pane_t1

0xbe74,	// (0x00027840) input_find_pane_t2_ParamLimits

0xbe74,	// (0x00027840) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0002b073) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0002b073) input_find_pane_t

0x696a,	// (0x00022336) input_focus_pane_cp5_ParamLimits

0x696a,	// (0x00022336) input_focus_pane_cp5

0x6984,	// (0x00022350) bg_popup_window_pane_cp2_ParamLimits

0x6984,	// (0x00022350) bg_popup_window_pane_cp2

0x6991,	// (0x0002235d) listscroll_menu_pane_ParamLimits

0x6991,	// (0x0002235d) listscroll_menu_pane

0x03e8,	// (0x0001bdb4) popup_submenu_window_ParamLimits

0x03e8,	// (0x0001bdb4) popup_submenu_window

0x69c5,	// (0x00022391) find_popup_pane_g1

0x69cd,	// (0x00022399) input_popup_find_pane_cp

0x696a,	// (0x00022336) input_focus_pane_cp4_ParamLimits

0x696a,	// (0x00022336) input_focus_pane_cp4

0x69e5,	// (0x000223b1) input_popup_find_pane_t1_ParamLimits

0x69e5,	// (0x000223b1) input_popup_find_pane_t1

0x5f7b,	// (0x00021947) bg_popup_sub_pane_cp

0x6a13,	// (0x000223df) listscroll_popup_sub_pane

0x6a1b,	// (0x000223e7) list_submenu_pane_ParamLimits

0x6a1b,	// (0x000223e7) list_submenu_pane

0x6a2c,	// (0x000223f8) scroll_pane_cp4

0x6a34,	// (0x00022400) list_single_popup_submenu_pane_ParamLimits

0x6a34,	// (0x00022400) list_single_popup_submenu_pane

0x6a48,	// (0x00022414) list_single_popup_submenu_pane_g1

0x6a50,	// (0x0002241c) list_single_popup_submenu_pane_t1_ParamLimits

0x6a50,	// (0x0002241c) list_single_popup_submenu_pane_t1

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp1_ParamLimits

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp1

0x041e,	// (0x0001bdea) tabs_2_active_pane_g1

0x0426,	// (0x0001bdf2) tabs_2_active_pane_t1

0x62d6,	// (0x00021ca2) bg_passive_tab_pane_cp1_ParamLimits

0x62d6,	// (0x00021ca2) bg_passive_tab_pane_cp1

0x041e,	// (0x0001bdea) tabs_2_passive_pane_g1

0x0426,	// (0x0001bdf2) tabs_2_passive_pane_t1

0x605b,	// (0x00021a27) bg_active_tab_pane_cp4

0x0438,	// (0x0001be04) tabs_2_long_active_pane_t1

0x7843,	// (0x0002320f) bg_passive_tab_pane_cp4

0x4b82,	// (0x0002054e) list_single_midp_graphic_pane_g4_ParamLimits

0x605b,	// (0x00021a27) bg_active_tab_pane_cp5

0x044b,	// (0x0001be17) tabs_3_long_active_pane_t1

0x7843,	// (0x0002320f) bg_passive_tab_pane_cp5

0x4b82,	// (0x0002054e) list_single_midp_graphic_pane_g4

0x605b,	// (0x00021a27) bg_popup_window_pane_cp13_ParamLimits

0x605b,	// (0x00021a27) bg_popup_window_pane_cp13

0x6ac7,	// (0x00022493) listscroll_popup_fast_pane_ParamLimits

0x6ac7,	// (0x00022493) listscroll_popup_fast_pane

0x6ad3,	// (0x0002249f) grid_popup_fast_pane_ParamLimits

0x6ad3,	// (0x0002249f) grid_popup_fast_pane

0x6ae5,	// (0x000224b1) scroll_pane_cp9_ParamLimits

0x6ae5,	// (0x000224b1) scroll_pane_cp9

0xab8e,	// (0x0002655a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xab8e,	// (0x0002655a) list_single_graphic_hl_pane_t1_cp2

0x6b09,	// (0x000224d5) input_focus_pane_cp20_ParamLimits

0x6b09,	// (0x000224d5) input_focus_pane_cp20

0x6b17,	// (0x000224e3) query_popup_data_pane_t1_ParamLimits

0x6b17,	// (0x000224e3) query_popup_data_pane_t1

0x6b2a,	// (0x000224f6) query_popup_data_pane_t2_ParamLimits

0x6b2a,	// (0x000224f6) query_popup_data_pane_t2

0x6b70,	// (0x0002253c) query_popup_data_pane_t3_ParamLimits

0x6b70,	// (0x0002253c) query_popup_data_pane_t3

0x6bb1,	// (0x0002257d) query_popup_data_pane_t4_ParamLimits

0x6bb1,	// (0x0002257d) query_popup_data_pane_t4

0x6bed,	// (0x000225b9) query_popup_data_pane_t5_ParamLimits

0x6bed,	// (0x000225b9) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0002b078) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0002b078) query_popup_data_pane_t

0x6919,	// (0x000222e5) bg_set_opt_pane_g1

0x6921,	// (0x000222ed) bg_set_opt_pane_g2

0x6929,	// (0x000222f5) bg_set_opt_pane_g3

0x6931,	// (0x000222fd) bg_set_opt_pane_g4

0x6939,	// (0x00022305) bg_set_opt_pane_g5

0x6941,	// (0x0002230d) bg_set_opt_pane_g6

0x6949,	// (0x00022315) bg_set_opt_pane_g7

0x6951,	// (0x0002231d) bg_set_opt_pane_g8

0x6959,	// (0x00022325) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0002b083) bg_set_opt_pane_g

0x4250,	// (0x0001fc1c) control_top_pane_stacon_ParamLimits

0x4250,	// (0x0001fc1c) control_top_pane_stacon

0x42a3,	// (0x0001fc6f) signal_pane_stacon_ParamLimits

0x42a3,	// (0x0001fc6f) signal_pane_stacon

0x71ad,	// (0x00022b79) stacon_top_pane_g1_ParamLimits

0x71ad,	// (0x00022b79) stacon_top_pane_g1

0x42c8,	// (0x0001fc94) title_pane_stacon_ParamLimits

0x42c8,	// (0x0001fc94) title_pane_stacon

0x42f2,	// (0x0001fcbe) uni_indicator_pane_stacon_ParamLimits

0x42f2,	// (0x0001fcbe) uni_indicator_pane_stacon

0x4307,	// (0x0001fcd3) battery_pane_stacon_ParamLimits

0x4307,	// (0x0001fcd3) battery_pane_stacon

0x434b,	// (0x0001fd17) control_bottom_pane_stacon_ParamLimits

0x434b,	// (0x0001fd17) control_bottom_pane_stacon

0x436e,	// (0x0001fd3a) navi_pane_stacon_ParamLimits

0x436e,	// (0x0001fd3a) navi_pane_stacon

0x71cf,	// (0x00022b9b) stacon_bottom_pane_g1_ParamLimits

0x71cf,	// (0x00022b9b) stacon_bottom_pane_g1

0x3fba,	// (0x0001f986) aid_levels_signal_lsc_ParamLimits

0x3fba,	// (0x0001f986) aid_levels_signal_lsc

0x3fd1,	// (0x0001f99d) signal_pane_stacon_g1_ParamLimits

0x3fd1,	// (0x0001f99d) signal_pane_stacon_g1

0x3fe5,	// (0x0001f9b1) signal_pane_stacon_g2_ParamLimits

0x3fe5,	// (0x0001f9b1) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0002b096) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002b096) signal_pane_stacon_g

0x401a,	// (0x0001f9e6) title_pane_stacon_t1_ParamLimits

0x401a,	// (0x0001f9e6) title_pane_stacon_t1

0x6c31,	// (0x000225fd) uni_indicator_pane_stacon_g1

0x6c3b,	// (0x00022607) uni_indicator_pane_stacon_g2

0x6c45,	// (0x00022611) uni_indicator_pane_stacon_g3

0x6c4f,	// (0x0002261b) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0002b0a2) uni_indicator_pane_stacon_g

0x403f,	// (0x0001fa0b) control_top_pane_stacon_g1

0x4047,	// (0x0001fa13) control_top_pane_stacon_t1_ParamLimits

0x4047,	// (0x0001fa13) control_top_pane_stacon_t1

0x407e,	// (0x0001fa4a) aid_levels_battery_lsc_ParamLimits

0x407e,	// (0x0001fa4a) aid_levels_battery_lsc

0x4096,	// (0x0001fa62) battery_pane_stacon_g1_ParamLimits

0x4096,	// (0x0001fa62) battery_pane_stacon_g1

0x40a9,	// (0x0001fa75) battery_pane_stacon_g2_ParamLimits

0x40a9,	// (0x0001fa75) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0002b0ab) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0002b0ab) battery_pane_stacon_g

0x40e7,	// (0x0001fab3) navi_icon_pane_stacon

0x40fb,	// (0x0001fac7) navi_navi_pane_stacon

0x40e7,	// (0x0001fab3) navi_text_pane_stacon

0x403f,	// (0x0001fa0b) control_bottom_pane_stacon_g1

0x410f,	// (0x0001fadb) control_bottom_pane_stacon_t1_ParamLimits

0x410f,	// (0x0001fadb) control_bottom_pane_stacon_t1

0x045d,	// (0x0001be29) grid_app_pane_ParamLimits

0x045d,	// (0x0001be29) grid_app_pane

0x0493,	// (0x0001be5f) scroll_pane_cp15_ParamLimits

0x0493,	// (0x0001be5f) scroll_pane_cp15

0x04ac,	// (0x0001be78) cell_app_pane_ParamLimits

0x04ac,	// (0x0001be78) cell_app_pane

0x04f3,	// (0x0001bebf) cell_app_pane_g1_ParamLimits

0x04f3,	// (0x0001bebf) cell_app_pane_g1

0x6cf0,	// (0x000226bc) cell_app_pane_g2_ParamLimits

0x6cf0,	// (0x000226bc) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0002b0b0) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0002b0b0) cell_app_pane_g

0x0513,	// (0x0001bedf) cell_app_pane_t1_ParamLimits

0x0513,	// (0x0001bedf) cell_app_pane_t1

0x6d13,	// (0x000226df) grid_highlight_pane_ParamLimits

0x6d13,	// (0x000226df) grid_highlight_pane

0x6919,	// (0x000222e5) cell_highlight_pane_g1

0x6921,	// (0x000222ed) cell_highlight_pane_g2

0x6929,	// (0x000222f5) cell_highlight_pane_g3

0x6931,	// (0x000222fd) cell_highlight_pane_g4

0x6939,	// (0x00022305) cell_highlight_pane_g5

0x6941,	// (0x0002230d) cell_highlight_pane_g6

0x6949,	// (0x00022315) cell_highlight_pane_g7

0x6951,	// (0x0002231d) cell_highlight_pane_g8

0x6959,	// (0x00022325) cell_highlight_pane_g9

0x5f71,	// (0x0002193d) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0002b05e) cell_highlight_pane_g

0x6d24,	// (0x000226f0) bg_scroll_pane

0x4159,	// (0x0001fb25) scroll_handle_pane

0x6d6b,	// (0x00022737) scroll_bg_pane_g1

0x6d80,	// (0x0002274c) scroll_bg_pane_g2

0x6d98,	// (0x00022764) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0002b0b5) scroll_bg_pane_g

0x6dad,	// (0x00022779) scroll_handle_focus_pane_ParamLimits

0x6dad,	// (0x00022779) scroll_handle_focus_pane

0x6d6b,	// (0x00022737) scroll_handle_pane_g1

0x6dba,	// (0x00022786) scroll_handle_pane_g2

0x6d98,	// (0x00022764) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0002b0bc) scroll_handle_pane_g

0x696a,	// (0x00022336) bg_popup_sub_pane_cp21_ParamLimits

0x696a,	// (0x00022336) bg_popup_sub_pane_cp21

0x6dce,	// (0x0002279a) popup_fep_japan_predictive_window_t1_ParamLimits

0x6dce,	// (0x0002279a) popup_fep_japan_predictive_window_t1

0x6de8,	// (0x000227b4) popup_fep_japan_predictive_window_t2_ParamLimits

0x6de8,	// (0x000227b4) popup_fep_japan_predictive_window_t2

0x6e1b,	// (0x000227e7) popup_fep_japan_predictive_window_t3_ParamLimits

0x6e1b,	// (0x000227e7) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0002b0c3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0002b0c3) popup_fep_japan_predictive_window_t

0x5f7b,	// (0x00021947) bg_popup_sub_pane_cp23

0x6e52,	// (0x0002281e) listscroll_japin_cand_pane

0x6e5a,	// (0x00022826) popup_fep_japan_candidate_window_t1

0x6e68,	// (0x00022834) candidate_pane_ParamLimits

0x6e68,	// (0x00022834) candidate_pane

0x6e7a,	// (0x00022846) scroll_pane_cp30

0x6e82,	// (0x0002284e) list_single_popup_jap_candidate_pane_ParamLimits

0x6e82,	// (0x0002284e) list_single_popup_jap_candidate_pane

0x5f7b,	// (0x00021947) list_highlight_pane_cp30

0x6e96,	// (0x00022862) list_single_popup_jap_candidate_pane_t1

0x6ea5,	// (0x00022871) level_1_signal

0x6eb2,	// (0x0002287e) level_2_signal

0x6ebf,	// (0x0002288b) level_3_signal

0x6ecc,	// (0x00022898) level_4_signal

0x6ed9,	// (0x000228a5) level_5_signal

0x6ee6,	// (0x000228b2) level_6_signal

0x6ef3,	// (0x000228bf) level_7_signal

0x6ea5,	// (0x00022871) level_1_battery

0x6eb2,	// (0x0002287e) level_2_battery

0x6ebf,	// (0x0002288b) level_3_battery

0x6ecc,	// (0x00022898) level_4_battery

0x6ed9,	// (0x000228a5) level_5_battery

0x6ee6,	// (0x000228b2) level_6_battery

0x6ef3,	// (0x000228bf) level_7_battery

0x6f18,	// (0x000228e4) list_menu_pane_ParamLimits

0x6f18,	// (0x000228e4) list_menu_pane

0x6f2e,	// (0x000228fa) scroll_pane_cp25_ParamLimits

0x6f2e,	// (0x000228fa) scroll_pane_cp25

0x6f47,	// (0x00022913) list_double2_graphic_pane_cp2_ParamLimits

0x6f47,	// (0x00022913) list_double2_graphic_pane_cp2

0x6f47,	// (0x00022913) list_double2_large_graphic_pane_cp2_ParamLimits

0x6f47,	// (0x00022913) list_double2_large_graphic_pane_cp2

0x6f47,	// (0x00022913) list_double2_pane_cp2_ParamLimits

0x6f47,	// (0x00022913) list_double2_pane_cp2

0x6f47,	// (0x00022913) list_double_graphic_pane_cp2_ParamLimits

0x6f47,	// (0x00022913) list_double_graphic_pane_cp2

0x6f47,	// (0x00022913) list_double_large_graphic_pane_cp2_ParamLimits

0x6f47,	// (0x00022913) list_double_large_graphic_pane_cp2

0x6f47,	// (0x00022913) list_double_number_pane_cp2_ParamLimits

0x6f47,	// (0x00022913) list_double_number_pane_cp2

0x6f47,	// (0x00022913) list_double_pane_cp2_ParamLimits

0x6f47,	// (0x00022913) list_double_pane_cp2

0x053b,	// (0x0001bf07) list_single_2graphic_pane_cp2_ParamLimits

0x053b,	// (0x0001bf07) list_single_2graphic_pane_cp2

0x053b,	// (0x0001bf07) list_single_graphic_heading_pane_cp2_ParamLimits

0x053b,	// (0x0001bf07) list_single_graphic_heading_pane_cp2

0x053b,	// (0x0001bf07) list_single_graphic_pane_cp2_ParamLimits

0x053b,	// (0x0001bf07) list_single_graphic_pane_cp2

0x053b,	// (0x0001bf07) list_single_heading_pane_cp2_ParamLimits

0x053b,	// (0x0001bf07) list_single_heading_pane_cp2

0x6f81,	// (0x0002294d) list_single_large_graphic_pane_cp2_ParamLimits

0x6f81,	// (0x0002294d) list_single_large_graphic_pane_cp2

0x053b,	// (0x0001bf07) list_single_number_heading_pane_cp2_ParamLimits

0x053b,	// (0x0001bf07) list_single_number_heading_pane_cp2

0x053b,	// (0x0001bf07) list_single_number_pane_cp2_ParamLimits

0x053b,	// (0x0001bf07) list_single_number_pane_cp2

0x053b,	// (0x0001bf07) list_single_pane_cp2_ParamLimits

0x053b,	// (0x0001bf07) list_single_pane_cp2

0x6ffc,	// (0x000229c8) bg_popup_sub_pane_cp22

0x4208,	// (0x0001fbd4) popup_side_volume_key_window_g1

0x422c,	// (0x0001fbf8) popup_side_volume_key_window_t1

0x4248,	// (0x0001fc14) volume_small_pane_cp1

0x62d6,	// (0x00021ca2) bg_popup_sub_pane_cp24_ParamLimits

0x62d6,	// (0x00021ca2) bg_popup_sub_pane_cp24

0x7012,	// (0x000229de) fep_china_uni_candidate_pane_ParamLimits

0x7012,	// (0x000229de) fep_china_uni_candidate_pane

0x7026,	// (0x000229f2) fep_china_uni_entry_pane

0x7036,	// (0x00022a02) popup_fep_china_uni_window_g1

0x7052,	// (0x00022a1e) fep_china_uni_entry_pane_g1

0x705a,	// (0x00022a26) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0002b0f4) fep_china_uni_entry_pane_g

0x7062,	// (0x00022a2e) fep_entry_item_pane

0x706c,	// (0x00022a38) fep_candidate_item_pane

0x7074,	// (0x00022a40) fep_china_uni_candidate_pane_g1

0x707c,	// (0x00022a48) fep_china_uni_candidate_pane_g2

0x7084,	// (0x00022a50) fep_china_uni_candidate_pane_g3

0x708c,	// (0x00022a58) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0002b0f9) fep_china_uni_candidate_pane_g

0x5f71,	// (0x0002193d) fep_entry_item_pane_g1

0x7094,	// (0x00022a60) fep_entry_item_pane_t1_ParamLimits

0x7094,	// (0x00022a60) fep_entry_item_pane_t1

0x70aa,	// (0x00022a76) fep_candidate_item_pane_t1_ParamLimits

0x70aa,	// (0x00022a76) fep_candidate_item_pane_t1

0x70bf,	// (0x00022a8b) fep_candidate_item_pane_t2_ParamLimits

0x70bf,	// (0x00022a8b) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0002b102) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0002b102) fep_candidate_item_pane_t

0x605b,	// (0x00021a27) list_highlight_pane_cp31_ParamLimits

0x605b,	// (0x00021a27) list_highlight_pane_cp31

0x70d1,	// (0x00022a9d) level_1_signal_lsc

0x70da,	// (0x00022aa6) level_2_signal_lsc

0x70e3,	// (0x00022aaf) level_3_signal_lsc

0x70ec,	// (0x00022ab8) level_4_signal_lsc

0x70f5,	// (0x00022ac1) level_5_signal_lsc

0x70fe,	// (0x00022aca) level_6_signal_lsc

0x7107,	// (0x00022ad3) level_7_signal_lsc

0x7107,	// (0x00022ad3) level_1_battery_lsc

0x7110,	// (0x00022adc) level_2_battery_lsc

0x7119,	// (0x00022ae5) level_3_battery_lsc

0x7122,	// (0x00022aee) level_4_battery_lsc

0x712b,	// (0x00022af7) level_5_battery_lsc

0x7134,	// (0x00022b00) level_6_battery_lsc

0x70d1,	// (0x00022a9d) level_7_battery_lsc

0x713d,	// (0x00022b09) scroll_handle_focus_pane_g1

0x7146,	// (0x00022b12) scroll_handle_focus_pane_g2

0x714f,	// (0x00022b1b) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0002b107) scroll_handle_focus_pane_g

0xbe89,	// (0x00027855) list_single_2graphic_pane_g1_ParamLimits

0xbe89,	// (0x00027855) list_single_2graphic_pane_g1

0xb9cd,	// (0x00027399) list_single_2graphic_pane_g2_ParamLimits

0xb9cd,	// (0x00027399) list_single_2graphic_pane_g2

0x2b46,	// (0x0001e512) list_single_2graphic_pane_g3_ParamLimits

0x2b46,	// (0x0001e512) list_single_2graphic_pane_g3

0xbe95,	// (0x00027861) list_single_2graphic_pane_g4_ParamLimits

0xbe95,	// (0x00027861) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0002b10e) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0002b10e) list_single_2graphic_pane_g

0xbea1,	// (0x0002786d) list_single_2graphic_pane_t1_ParamLimits

0xbea1,	// (0x0002786d) list_single_2graphic_pane_t1

0xbecf,	// (0x0002789b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbecf,	// (0x0002789b) list_double2_graphic_large_graphic_pane_g1

0xba16,	// (0x000273e2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xba16,	// (0x000273e2) list_double2_graphic_large_graphic_pane_g2

0x2d92,	// (0x0001e75e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x2d92,	// (0x0001e75e) list_double2_graphic_large_graphic_pane_g3

0xbee1,	// (0x000278ad) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbee1,	// (0x000278ad) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0002b117) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0002b117) list_double2_graphic_large_graphic_pane_g

0xbeed,	// (0x000278b9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbeed,	// (0x000278b9) list_double2_graphic_large_graphic_pane_t1

0xbf03,	// (0x000278cf) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf03,	// (0x000278cf) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0002b120) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0002b120) list_double2_graphic_large_graphic_pane_t

0x7298,	// (0x00022c64) popup_fast_swap_window_ParamLimits

0x7298,	// (0x00022c64) popup_fast_swap_window

0x72b4,	// (0x00022c80) popup_side_volume_key_window

0x72ce,	// (0x00022c9a) stacon_top_pane

0x72d8,	// (0x00022ca4) status_pane_ParamLimits

0x72d8,	// (0x00022ca4) status_pane

0x72ce,	// (0x00022c9a) status_small_pane

0x5f7b,	// (0x00021947) control_pane

0x5f7b,	// (0x00021947) stacon_bottom_pane

0x6895,	// (0x00022261) scroll_pane_cp121

0x688c,	// (0x00022258) set_content_pane

0x7173,	// (0x00022b3f) bg_active_tab_pane_g1_cp1

0x7161,	// (0x00022b2d) bg_active_tab_pane_g2_cp1

0x717c,	// (0x00022b48) bg_active_tab_pane_g3_cp1

0x7173,	// (0x00022b3f) bg_passive_tab_pane_g1_cp1

0x7161,	// (0x00022b2d) bg_passive_tab_pane_g2_cp1

0x717c,	// (0x00022b48) bg_passive_tab_pane_g3_cp1

0x0618,	// (0x0001bfe4) bg_active_tab_pane_g1_cp2

0x7161,	// (0x00022b2d) bg_active_tab_pane_g2_cp2

0x060f,	// (0x0001bfdb) bg_active_tab_pane_g3_cp2

0x0618,	// (0x0001bfe4) bg_passive_tab_pane_g1_cp2

0x7161,	// (0x00022b2d) bg_passive_tab_pane_g2_cp2

0x060f,	// (0x0001bfdb) bg_passive_tab_pane_g3_cp2

0x062a,	// (0x0001bff6) bg_active_tab_pane_g1_cp3

0x7161,	// (0x00022b2d) bg_active_tab_pane_g2_cp3

0x0621,	// (0x0001bfed) bg_active_tab_pane_g3_cp3

0x062a,	// (0x0001bff6) bg_passive_tab_pane_g1_cp3

0x7161,	// (0x00022b2d) bg_passive_tab_pane_g2_cp3

0x0621,	// (0x0001bfed) bg_passive_tab_pane_g3_cp3

0x063c,	// (0x0001c008) bg_active_tab_pane_g1_cp4

0x7161,	// (0x00022b2d) bg_active_tab_pane_g2_cp4

0x0633,	// (0x0001bfff) bg_active_tab_pane_g3_cp4

0x063c,	// (0x0001c008) bg_passive_tab_pane_g1_cp4

0x7161,	// (0x00022b2d) bg_passive_tab_pane_g2_cp4

0x0633,	// (0x0001bfff) bg_passive_tab_pane_g3_cp4

0x71eb,	// (0x00022bb7) bg_active_tab_pane_g1_cp5

0x7161,	// (0x00022b2d) bg_active_tab_pane_g2_cp5

0x71f4,	// (0x00022bc0) bg_active_tab_pane_g3_cp5

0x71eb,	// (0x00022bb7) bg_passive_tab_pane_g1_cp5

0x7161,	// (0x00022b2d) bg_passive_tab_pane_g2_cp5

0x71f4,	// (0x00022bc0) bg_passive_tab_pane_g3_cp5

0x9867,	// (0x00025233) list_set_graphic_pane_ParamLimits

0x9867,	// (0x00025233) list_set_graphic_pane

0x5f7b,	// (0x00021947) bg_set_opt_pane_cp4

0x721d,	// (0x00022be9) list_set_graphic_pane_g1_ParamLimits

0x721d,	// (0x00022be9) list_set_graphic_pane_g1

0x7229,	// (0x00022bf5) list_set_graphic_pane_g2_ParamLimits

0x7229,	// (0x00022bf5) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0002b125) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0002b125) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0002b4a1) volume_small_pane_cp_g

0x0645,	// (0x0001c011) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x0645,	// (0x0001c011) list_double2_large_graphic_pane_g1_cp2

0x0653,	// (0x0001c01f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0653,	// (0x0001c01f) list_double2_large_graphic_pane_g2_cp2

0x7268,	// (0x00022c34) list_double2_large_graphic_pane_g3_cp2

0x7270,	// (0x00022c3c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7270,	// (0x00022c3c) list_double2_large_graphic_pane_t1_cp2

0x7286,	// (0x00022c52) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7286,	// (0x00022c52) list_double2_large_graphic_pane_t2_cp2

0x0dde,	// (0x0001c7aa) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x0dde,	// (0x0001c7aa) list_double_large_graphic_pane_g1_cp2

0x0df1,	// (0x0001c7bd) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x0df1,	// (0x0001c7bd) list_double_large_graphic_pane_g2_cp2

0x73f4,	// (0x00022dc0) list_double_large_graphic_pane_g3_cp2

0x8e5e,	// (0x0002482a) list_double_large_graphic_pane_g4_cp

0x8e66,	// (0x00024832) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x8e66,	// (0x00024832) list_double_large_graphic_pane_t1_cp2

0x8e7d,	// (0x00024849) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x8e7d,	// (0x00024849) list_double_large_graphic_pane_t2_cp2

0x0664,	// (0x0001c030) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0664,	// (0x0001c030) list_double2_graphic_pane_g1_cp2

0x0672,	// (0x0001c03e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0672,	// (0x0001c03e) list_double2_graphic_pane_g2_cp2

0x0683,	// (0x0001c04f) list_double2_graphic_pane_g3_cp2

0x730f,	// (0x00022cdb) list_double2_graphic_pane_t1_cp2_ParamLimits

0x730f,	// (0x00022cdb) list_double2_graphic_pane_t1_cp2

0x7325,	// (0x00022cf1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7325,	// (0x00022cf1) list_double2_graphic_pane_t2_cp2

0x7337,	// (0x00022d03) list_single_number_heading_pane_g1_cp2_ParamLimits

0x7337,	// (0x00022d03) list_single_number_heading_pane_g1_cp2

0x7343,	// (0x00022d0f) list_single_number_heading_pane_g2_cp2

0x734b,	// (0x00022d17) list_single_number_heading_pane_t1_cp2_ParamLimits

0x734b,	// (0x00022d17) list_single_number_heading_pane_t1_cp2

0x068d,	// (0x0001c059) list_single_number_heading_pane_t2_cp2_ParamLimits

0x068d,	// (0x0001c059) list_single_number_heading_pane_t2_cp2

0x7373,	// (0x00022d3f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7373,	// (0x00022d3f) list_single_number_heading_pane_t3_cp2

0x7337,	// (0x00022d03) list_single_heading_pane_g1_cp2_ParamLimits

0x7337,	// (0x00022d03) list_single_heading_pane_g1_cp2

0x7343,	// (0x00022d0f) list_single_heading_pane_g2_cp2

0x734b,	// (0x00022d17) list_single_heading_pane_t1_cp2_ParamLimits

0x734b,	// (0x00022d17) list_single_heading_pane_t1_cp2

0x0dca,	// (0x0001c796) list_single_heading_pane_t2_cp2_ParamLimits

0x0dca,	// (0x0001c796) list_single_heading_pane_t2_cp2

0x8b8e,	// (0x0002455a) list_double_graphic_pane_g1_cp2_ParamLimits

0x8b8e,	// (0x0002455a) list_double_graphic_pane_g1_cp2

0x8b9a,	// (0x00024566) list_double_graphic_pane_g2_cp2_ParamLimits

0x8b9a,	// (0x00024566) list_double_graphic_pane_g2_cp2

0x8ba9,	// (0x00024575) list_double_graphic_pane_g3_cp2

0x8bb1,	// (0x0002457d) list_double_graphic_pane_t1_cp2_ParamLimits

0x8bb1,	// (0x0002457d) list_double_graphic_pane_t1_cp2

0x8bc7,	// (0x00024593) list_double_graphic_pane_t2_cp2_ParamLimits

0x8bc7,	// (0x00024593) list_double_graphic_pane_t2_cp2

0x73e8,	// (0x00022db4) list_double_number_pane_g1_cp2_ParamLimits

0x73e8,	// (0x00022db4) list_double_number_pane_g1_cp2

0x73f4,	// (0x00022dc0) list_double_number_pane_g2_cp2

0x0da4,	// (0x0001c770) list_double_number_pane_t1_cp2_ParamLimits

0x0da4,	// (0x0001c770) list_double_number_pane_t1_cp2

0x8b66,	// (0x00024532) list_double_number_pane_t2_cp2_ParamLimits

0x8b66,	// (0x00024532) list_double_number_pane_t2_cp2

0x8b7c,	// (0x00024548) list_double_number_pane_t3_cp2_ParamLimits

0x8b7c,	// (0x00024548) list_double_number_pane_t3_cp2

0x0cf2,	// (0x0001c6be) list_single_graphic_pane_g1_cp2_ParamLimits

0x0cf2,	// (0x0001c6be) list_single_graphic_pane_g1_cp2

0x68b2,	// (0x0002227e) list_single_graphic_pane_g2_cp2_ParamLimits

0x68b2,	// (0x0002227e) list_single_graphic_pane_g2_cp2

0x744c,	// (0x00022e18) list_single_graphic_pane_g3_cp2

0x8a11,	// (0x000243dd) list_single_graphic_pane_t1_cp2_ParamLimits

0x8a11,	// (0x000243dd) list_single_graphic_pane_t1_cp2

0x68b2,	// (0x0002227e) list_single_number_pane_g1_cp2_ParamLimits

0x68b2,	// (0x0002227e) list_single_number_pane_g1_cp2

0x744c,	// (0x00022e18) list_single_number_pane_g2_cp2

0x8a11,	// (0x000243dd) list_single_number_pane_t1_cp2_ParamLimits

0x8a11,	// (0x000243dd) list_single_number_pane_t1_cp2

0x0cde,	// (0x0001c6aa) list_single_number_pane_t2_cp2_ParamLimits

0x0cde,	// (0x0001c6aa) list_single_number_pane_t2_cp2

0x0653,	// (0x0001c01f) list_double2_pane_g1_cp2_ParamLimits

0x0653,	// (0x0001c01f) list_double2_pane_g1_cp2

0x7268,	// (0x00022c34) list_double2_pane_g2_cp2

0x73c0,	// (0x00022d8c) list_double2_pane_t1_cp2_ParamLimits

0x73c0,	// (0x00022d8c) list_double2_pane_t1_cp2

0x73d6,	// (0x00022da2) list_double2_pane_t2_cp2_ParamLimits

0x73d6,	// (0x00022da2) list_double2_pane_t2_cp2

0x73e8,	// (0x00022db4) list_double_pane_g1_cp2_ParamLimits

0x73e8,	// (0x00022db4) list_double_pane_g1_cp2

0x73f4,	// (0x00022dc0) list_double_pane_g2_cp2

0x73fc,	// (0x00022dc8) list_double_pane_t1_cp2_ParamLimits

0x73fc,	// (0x00022dc8) list_double_pane_t1_cp2

0x7412,	// (0x00022dde) list_double_pane_t2_cp2_ParamLimits

0x7412,	// (0x00022dde) list_double_pane_t2_cp2

0x743c,	// (0x00022e08) list_single_pane_cp2_g3

0x68b2,	// (0x0002227e) list_single_pane_g1_cp2_ParamLimits

0x68b2,	// (0x0002227e) list_single_pane_g1_cp2

0x744c,	// (0x00022e18) list_single_pane_g2_cp2

0x7454,	// (0x00022e20) list_single_pane_t1_cp2_ParamLimits

0x7454,	// (0x00022e20) list_single_pane_t1_cp2

0x06b9,	// (0x0001c085) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x06b9,	// (0x0001c085) list_single_large_graphic_pane_g1_cp2

0x7478,	// (0x00022e44) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7478,	// (0x00022e44) list_single_large_graphic_pane_g2_cp2

0x7484,	// (0x00022e50) list_single_large_graphic_pane_g3_cp2

0x748c,	// (0x00022e58) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x748c,	// (0x00022e58) list_single_large_graphic_pane_g4_cp1

0x74a6,	// (0x00022e72) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x74a6,	// (0x00022e72) list_single_large_graphic_pane_t1_cp2

0x89dd,	// (0x000243a9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x89dd,	// (0x000243a9) list_single_graphic_heading_pane_g1_cp2

0x0cb9,	// (0x0001c685) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x0cb9,	// (0x0001c685) list_single_graphic_heading_pane_g4_cp2

0x744c,	// (0x00022e18) list_single_graphic_heading_pane_g5_cp2

0x89e9,	// (0x000243b5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x89e9,	// (0x000243b5) list_single_graphic_heading_pane_t1_cp2

0x0cca,	// (0x0001c696) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x0cca,	// (0x0001c696) list_single_graphic_heading_pane_t2_cp2

0x899e,	// (0x0002436a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x899e,	// (0x0002436a) list_single_2graphic_pane_g1_cp2

0x0cb9,	// (0x0001c685) list_single_2graphic_pane_g2_cp2_ParamLimits

0x0cb9,	// (0x0001c685) list_single_2graphic_pane_g2_cp2

0x744c,	// (0x00022e18) list_single_2graphic_pane_g3_cp2

0x89bb,	// (0x00024387) list_single_2graphic_pane_g4_cp2_ParamLimits

0x89bb,	// (0x00024387) list_single_2graphic_pane_g4_cp2

0x89c7,	// (0x00024393) list_single_2graphic_pane_t1_cp2_ParamLimits

0x89c7,	// (0x00024393) list_single_2graphic_pane_t1_cp2

0x5f71,	// (0x0002193d) list_highlight_pane_g10_cp1

0x8576,	// (0x00023f42) list_highlight_pane_g1_cp1

0x857e,	// (0x00023f4a) list_highlight_pane_g2_cp1

0x8586,	// (0x00023f52) list_highlight_pane_g3_cp1

0x858e,	// (0x00023f5a) list_highlight_pane_g4_cp1

0x8596,	// (0x00023f62) list_highlight_pane_g5_cp1

0x859e,	// (0x00023f6a) list_highlight_pane_g6_cp1

0x85a6,	// (0x00023f72) list_highlight_pane_g7_cp1

0x85ae,	// (0x00023f7a) list_highlight_pane_g8_cp1

0x85b6,	// (0x00023f82) list_highlight_pane_g9_cp1

0x0c7b,	// (0x0001c647) form_field_slider_pane_t3

0x0c8b,	// (0x0001c657) form_field_slider_pane_t4

0x84aa,	// (0x00023e76) slider_form_pane_ParamLimits

0x84aa,	// (0x00023e76) slider_form_pane

0x5f7b,	// (0x00021947) control_abbreviations

0x5f7b,	// (0x00021947) control_conventions

0x5f7b,	// (0x00021947) control_definitions

0x5f7b,	// (0x00021947) format_table_attribute

0x8c90,	// (0x0002465c) bg_popup_preview_window_pane_g9

0x5f7b,	// (0x00021947) format_table_data2

0x5f7b,	// (0x00021947) format_table_data3

0x5f7b,	// (0x00021947) format_table_data_example

0x0008,

0x5f7b,	// (0x00021947) intro_purpose

0xf8e9,	// (0x0002b2b5) bg_popup_preview_window_pane_g

0x5f7b,	// (0x00021947) texts_category

0x5f7b,	// (0x00021947) texts_graphics

0x74bc,	// (0x00022e88) text_digital

0x74cb,	// (0x00022e97) text_primary

0x74da,	// (0x00022ea6) text_primary_small

0x74e9,	// (0x00022eb5) text_secondary

0x74f8,	// (0x00022ec4) text_title

0x9377,	// (0x00024d43) bg_passive_tab_pane_g1_cp3_srt

0x7161,	// (0x00022b2d) bg_passive_tab_pane_g2_cp3_srt

0x9380,	// (0x00024d4c) bg_passive_tab_pane_g3_cp3_srt

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp3_srt_ParamLimits

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp3_srt

0x9389,	// (0x00024d55) tabs_4_active_pane_srt_g1

0x10b7,	// (0x0001ca83) tabs_4_active_pane_srt_t1_ParamLimits

0x10b7,	// (0x0001ca83) tabs_4_active_pane_srt_t1

0x9377,	// (0x00024d43) bg_active_tab_pane_g1_cp3_copy1

0x7161,	// (0x00022b2d) bg_active_tab_pane_g2_cp3_copy1

0x9380,	// (0x00024d4c) bg_active_tab_pane_g3_cp3_copy1

0x605b,	// (0x00021a27) tabs_2_long_active_pane_srt_ParamLimits

0x605b,	// (0x00021a27) tabs_2_long_active_pane_srt

0x605b,	// (0x00021a27) tabs_2_long_passive_pane_srt_ParamLimits

0x605b,	// (0x00021a27) tabs_2_long_passive_pane_srt

0x7843,	// (0x0002320f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7843,	// (0x0002320f) bg_passive_tab_pane_cp4_srt

0x90d3,	// (0x00024a9f) bg_passive_tab_pane_g1_cp4_srt

0x7161,	// (0x00022b2d) bg_passive_tab_pane_g2_cp4_srt

0x90dc,	// (0x00024aa8) bg_passive_tab_pane_g3_cp4_srt

0x605b,	// (0x00021a27) bg_active_tab_pane_cp4_srt_ParamLimits

0x605b,	// (0x00021a27) bg_active_tab_pane_cp4_srt

0x0e92,	// (0x0001c85e) tabs_2_long_active_pane_srt_t1_ParamLimits

0x0e92,	// (0x0001c85e) tabs_2_long_active_pane_srt_t1

0x90d3,	// (0x00024a9f) bg_active_tab_pane_g1_cp4_srt

0x7161,	// (0x00022b2d) bg_active_tab_pane_g2_cp4_srt

0x90dc,	// (0x00024aa8) bg_active_tab_pane_g3_cp4_srt

0x62d6,	// (0x00021ca2) tabs_3_long_active_pane_srt_ParamLimits

0x62d6,	// (0x00021ca2) tabs_3_long_active_pane_srt

0x62d6,	// (0x00021ca2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x62d6,	// (0x00021ca2) tabs_3_long_passive_pane_cp_srt

0x62d6,	// (0x00021ca2) tabs_3_long_passive_pane_srt_ParamLimits

0x62d6,	// (0x00021ca2) tabs_3_long_passive_pane_srt

0x7843,	// (0x0002320f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7843,	// (0x0002320f) bg_passive_tab_pane_cp5_srt

0x71eb,	// (0x00022bb7) bg_passive_tab_pane_g1_cp5_srt

0x7161,	// (0x00022b2d) bg_passive_tab_pane_g2_cp5_srt

0x71f4,	// (0x00022bc0) bg_passive_tab_pane_g3_cp5_srt

0x605b,	// (0x00021a27) bg_active_tab_pane_cp5_srt_ParamLimits

0x605b,	// (0x00021a27) bg_active_tab_pane_cp5_srt

0x0e7c,	// (0x0001c848) tabs_3_long_active_pane_srt_t1_ParamLimits

0x0e7c,	// (0x0001c848) tabs_3_long_active_pane_srt_t1

0x71eb,	// (0x00022bb7) bg_active_tab_pane_g1_cp5_srt

0x7161,	// (0x00022b2d) bg_active_tab_pane_g2_cp5_srt

0x71f4,	// (0x00022bc0) bg_active_tab_pane_g3_cp5_srt

0x90b3,	// (0x00024a7f) navi_text_pane_srt_t1

0x90ab,	// (0x00024a77) navi_icon_pane_srt_g1

0x76bb,	// (0x00023087) midp_editing_number_pane_srt

0x7507,	// (0x00022ed3) midp_ticker_pane_srt

0x76c3,	// (0x0002308f) midp_ticker_pane_srt_g1

0x76cb,	// (0x00023097) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0002b144) midp_ticker_pane_srt_g

0x76d3,	// (0x0002309f) midp_ticker_pane_srt_t1

0x909c,	// (0x00024a68) midp_editing_number_pane_t1_copy1

0x7843,	// (0x0002320f) listscroll_midp_pane

0x7843,	// (0x0002320f) midp_form_pane

0x7573,	// (0x00022f3f) midp_info_popup_window_ParamLimits

0x7573,	// (0x00022f3f) midp_info_popup_window

0x696a,	// (0x00022336) bg_popup_sub_pane_cp50_ParamLimits

0x696a,	// (0x00022336) bg_popup_sub_pane_cp50

0x81ab,	// (0x00023b77) listscroll_midp_info_pane_ParamLimits

0x81ab,	// (0x00023b77) listscroll_midp_info_pane

0x8193,	// (0x00023b5f) listscroll_form_midp_pane_ParamLimits

0x8193,	// (0x00023b5f) listscroll_form_midp_pane

0x819f,	// (0x00023b6b) scroll_bar_cp050

0x0c6f,	// (0x0001c63b) list_midp_pane

0x9dfd,	// (0x000257c9) signal_pane_g2_cp

0x80ad,	// (0x00023a79) listscroll_midp_info_pane_t1_ParamLimits

0x80ad,	// (0x00023a79) listscroll_midp_info_pane_t1

0x80c5,	// (0x00023a91) listscroll_midp_info_pane_t2_ParamLimits

0x80c5,	// (0x00023a91) listscroll_midp_info_pane_t2

0x8103,	// (0x00023acf) listscroll_midp_info_pane_t3_ParamLimits

0x8103,	// (0x00023acf) listscroll_midp_info_pane_t3

0x813d,	// (0x00023b09) listscroll_midp_info_pane_t4_ParamLimits

0x813d,	// (0x00023b09) listscroll_midp_info_pane_t4

0x0003,

0xf824,	// (0x0002b1f0) listscroll_midp_info_pane_t_ParamLimits

0xf824,	// (0x0002b1f0) listscroll_midp_info_pane_t

0x6a2c,	// (0x000223f8) scroll_pane_cp21

0x804f,	// (0x00023a1b) form_midp_field_choice_group_pane

0x8058,	// (0x00023a24) form_midp_field_text_pane

0x8093,	// (0x00023a5f) form_midp_field_time_pane

0x809b,	// (0x00023a67) form_midp_gauge_slider_pane

0x80a4,	// (0x00023a70) form_midp_gauge_wait_pane

0x5f7b,	// (0x00021947) form_midp_image_pane

0xbf15,	// (0x000278e1) list_single_midp_pane_ParamLimits

0xbf15,	// (0x000278e1) list_single_midp_pane

0x0c32,	// (0x0001c5fe) form_midp_field_text_pane_t1

0x7dbb,	// (0x00023787) input_focus_pane_cp050

0x803e,	// (0x00023a0a) list_midp_form_text_pane

0x7fd2,	// (0x0002399e) form_midp_field_choice_group_pane_t1

0x7fe0,	// (0x000239ac) input_focus_pane_cp051

0x7ff4,	// (0x000239c0) list_midp_choice_pane

0x5f7b,	// (0x00021947) status_idle_pane

0x7fb6,	// (0x00023982) form_midp_field_time_pane_t1

0x5f71,	// (0x0002193d) wait_anim_pane_g2_copy1

0x7fc4,	// (0x00023990) form_midp_field_time_pane_t2

0x0001,

0x7623,	// (0x00022fef) aid_navinavi_width_2_pane

0xf81f,	// (0x0002b1eb) form_midp_field_time_pane_t

0x5f7b,	// (0x00021947) input_focus_pane_cp052

0x5f7b,	// (0x00021947) bg_input_focus_pane_cp040

0x7f76,	// (0x00023942) form_midp_gauge_slider_pane_t1

0x7f84,	// (0x00023950) form_midp_gauge_slider_pane_t2

0x0c12,	// (0x0001c5de) form_midp_gauge_slider_pane_t3

0x0c22,	// (0x0001c5ee) form_midp_gauge_slider_pane_t4

0x0003,

0xf816,	// (0x0002b1e2) form_midp_gauge_slider_pane_t

0x7fae,	// (0x0002397a) form_midp_slider_pane

0x605b,	// (0x00021a27) bg_input_focus_pane_cp041_ParamLimits

0x605b,	// (0x00021a27) bg_input_focus_pane_cp041

0x7f43,	// (0x0002390f) form_midp_gauge_wait_pane_t1_ParamLimits

0x7f43,	// (0x0002390f) form_midp_gauge_wait_pane_t1

0x7f55,	// (0x00023921) form_midp_gauge_wait_pane_t2_ParamLimits

0x7f55,	// (0x00023921) form_midp_gauge_wait_pane_t2

0x0001,

0xf811,	// (0x0002b1dd) form_midp_gauge_wait_pane_t_ParamLimits

0xf811,	// (0x0002b1dd) form_midp_gauge_wait_pane_t

0x7f67,	// (0x00023933) form_midp_wait_pane_ParamLimits

0x7f67,	// (0x00023933) form_midp_wait_pane

0x7f0d,	// (0x000238d9) form_midp_image_pane_g1

0x7f16,	// (0x000238e2) form_midp_image_pane_t1

0x7f25,	// (0x000238f1) form_midp_image_pane_t2

0x7f34,	// (0x00023900) form_midp_image_pane_t3

0x0002,

0xf80a,	// (0x0002b1d6) form_midp_image_pane_t

0x7f04,	// (0x000238d0) list_single_midp_pane_g1

0x3312,	// (0x0001ecde) list_single_midp_pane_t1

0x0bfc,	// (0x0001c5c8) list_midp_form_item_pane_ParamLimits

0x0bfc,	// (0x0001c5c8) list_midp_form_item_pane

0x75cb,	// (0x00022f97) list_midp_form_item_pane_t1

0x75da,	// (0x00022fa6) midp_ticker_pane_g1

0x75e6,	// (0x00022fb2) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0002b12a) midp_ticker_pane_g

0x75f2,	// (0x00022fbe) midp_ticker_pane_t1

0x92e3,	// (0x00024caf) midp_editing_number_pane_t1

0x92c1,	// (0x00024c8d) midp_editing_number_pane

0x92d0,	// (0x00024c9c) midp_ticker_pane

0x908c,	// (0x00024a58) ai_message_heading_pane

0x5f7b,	// (0x00021947) bg_popup_window_pane_cp14

0x9094,	// (0x00024a60) listscroll_ai_message_pane

0x9016,	// (0x000249e2) ai_message_heading_pane_g1_ParamLimits

0x9016,	// (0x000249e2) ai_message_heading_pane_g1

0x9022,	// (0x000249ee) ai_message_heading_pane_g2_ParamLimits

0x9022,	// (0x000249ee) ai_message_heading_pane_g2

0x902e,	// (0x000249fa) ai_message_heading_pane_g3_ParamLimits

0x902e,	// (0x000249fa) ai_message_heading_pane_g3

0x903a,	// (0x00024a06) ai_message_heading_pane_g4_ParamLimits

0x903a,	// (0x00024a06) ai_message_heading_pane_g4

0x0003,

0xf94b,	// (0x0002b317) ai_message_heading_pane_g_ParamLimits

0xf94b,	// (0x0002b317) ai_message_heading_pane_g

0x9046,	// (0x00024a12) ai_message_heading_pane_t1_ParamLimits

0x9046,	// (0x00024a12) ai_message_heading_pane_t1

0x9060,	// (0x00024a2c) ai_message_heading_pane_t2_ParamLimits

0x9060,	// (0x00024a2c) ai_message_heading_pane_t2

0x0001,

0xf954,	// (0x0002b320) ai_message_heading_pane_t_ParamLimits

0xf954,	// (0x0002b320) ai_message_heading_pane_t

0x9072,	// (0x00024a3e) bg_popup_heading_pane_cp1_ParamLimits

0x9072,	// (0x00024a3e) bg_popup_heading_pane_cp1

0x9004,	// (0x000249d0) list_ai_message_pane_ParamLimits

0x9004,	// (0x000249d0) list_ai_message_pane

0x6a2c,	// (0x000223f8) scroll_pane_cp10

0x8fa0,	// (0x0002496c) list_ai_message_pane_g1

0x8fa8,	// (0x00024974) list_ai_message_pane_g2

0x0001,

0xf928,	// (0x0002b2f4) list_ai_message_pane_g

0x8fb0,	// (0x0002497c) list_ai_message_pane_t1_ParamLimits

0x8fb0,	// (0x0002497c) list_ai_message_pane_t1

0x8fc5,	// (0x00024991) list_ai_message_pane_t2_ParamLimits

0x8fc5,	// (0x00024991) list_ai_message_pane_t2

0x8fda,	// (0x000249a6) list_ai_message_pane_t3_ParamLimits

0x8fda,	// (0x000249a6) list_ai_message_pane_t3

0x8fef,	// (0x000249bb) list_ai_message_pane_t4_ParamLimits

0x8fef,	// (0x000249bb) list_ai_message_pane_t4

0x0003,

0xf92d,	// (0x0002b2f9) list_ai_message_pane_t_ParamLimits

0xf92d,	// (0x0002b2f9) list_ai_message_pane_t

0x0e5a,	// (0x0001c826) cell_ai_soft_ind_pane_ParamLimits

0x0e5a,	// (0x0001c826) cell_ai_soft_ind_pane

0x7604,	// (0x00022fd0) cell_ai_soft_ind_pane_g1_ParamLimits

0x7604,	// (0x00022fd0) cell_ai_soft_ind_pane_g1

0x5f7b,	// (0x00021947) grid_highlight_cp1

0x7611,	// (0x00022fdd) text_secondary_cp56_ParamLimits

0x7611,	// (0x00022fdd) text_secondary_cp56

0x8f5f,	// (0x0002492b) example_general_pane_ParamLimits

0x8f5f,	// (0x0002492b) example_general_pane

0x8f6b,	// (0x00024937) example_parent_pane_g1_ParamLimits

0x8f6b,	// (0x00024937) example_parent_pane_g1

0x8f77,	// (0x00024943) example_parent_pane_t1_ParamLimits

0x8f77,	// (0x00024943) example_parent_pane_t1

0xc855,	// (0x00028221) popup_preview_text_window_ParamLimits

0xc855,	// (0x00028221) popup_preview_text_window

0x7444,	// (0x00022e10) list_single_pane_cp2_g4

0x6380,	// (0x00021d4c) bg_popup_preview_window_pane_ParamLimits

0x6380,	// (0x00021d4c) bg_popup_preview_window_pane

0x8c98,	// (0x00024664) popup_preview_text_window_t1_ParamLimits

0x8c98,	// (0x00024664) popup_preview_text_window_t1

0x8cb6,	// (0x00024682) popup_preview_text_window_t2_ParamLimits

0x8cb6,	// (0x00024682) popup_preview_text_window_t2

0x8cff,	// (0x000246cb) popup_preview_text_window_t3_ParamLimits

0x8cff,	// (0x000246cb) popup_preview_text_window_t3

0x8d44,	// (0x00024710) popup_preview_text_window_t4_ParamLimits

0x8d44,	// (0x00024710) popup_preview_text_window_t4

0x0004,

0xf8fc,	// (0x0002b2c8) popup_preview_text_window_t_ParamLimits

0xf8fc,	// (0x0002b2c8) popup_preview_text_window_t

0x8dc2,	// (0x0002478e) scroll_pane_cp11

0x7d47,	// (0x00023713) bg_popup_preview_window_pane_g1

0x8c58,	// (0x00024624) bg_popup_preview_window_pane_g2

0x8c60,	// (0x0002462c) bg_popup_preview_window_pane_g3

0x8c68,	// (0x00024634) bg_popup_preview_window_pane_g4

0x8c70,	// (0x0002463c) bg_popup_preview_window_pane_g5

0x8c78,	// (0x00024644) bg_popup_preview_window_pane_g6

0x8c80,	// (0x0002464c) bg_popup_preview_window_pane_g7

0x8c88,	// (0x00024654) bg_popup_preview_window_pane_g8

0x3b5e,	// (0x0001f52a) aid_popup_width_pane

0xc7d1,	// (0x0002819d) popup_midp_note_alarm_window_ParamLimits

0xc7d1,	// (0x0002819d) popup_midp_note_alarm_window

0x68be,	// (0x0002228a) data_form_pane_ParamLimits

0xbd68,	// (0x00027734) form_field_data_pane_g1

0xbd72,	// (0x0002773e) form_field_data_pane_t1_ParamLimits

0x68ca,	// (0x00022296) input_focus_pane_ParamLimits

0x2fe4,	// (0x0001e9b0) data_form_wide_pane_ParamLimits

0x2ff5,	// (0x0001e9c1) form_field_data_wide_pane_g1

0x3001,	// (0x0001e9cd) form_field_data_wide_pane_t1_ParamLimits

0x6623,	// (0x00021fef) input_focus_pane_cp6_ParamLimits

0x0410,	// (0x0001bddc) input_popup_find_pane_g1_ParamLimits

0x0410,	// (0x0001bddc) input_popup_find_pane_g1

0x40ba,	// (0x0001fa86) aid_navi_side_left_pane

0x40cf,	// (0x0001fa9b) aid_navi_side_right_pane

0x8671,	// (0x0002403d) bg_popup_window_pane_cp30_ParamLimits

0x8671,	// (0x0002403d) bg_popup_window_pane_cp30

0x86eb,	// (0x000240b7) popup_midp_note_alarm_window_g1_ParamLimits

0x86eb,	// (0x000240b7) popup_midp_note_alarm_window_g1

0x871b,	// (0x000240e7) popup_midp_note_alarm_window_t1_ParamLimits

0x871b,	// (0x000240e7) popup_midp_note_alarm_window_t1

0x87bc,	// (0x00024188) popup_midp_note_alarm_window_t2_ParamLimits

0x87bc,	// (0x00024188) popup_midp_note_alarm_window_t2

0x886a,	// (0x00024236) popup_midp_note_alarm_window_t3_ParamLimits

0x886a,	// (0x00024236) popup_midp_note_alarm_window_t3

0x889c,	// (0x00024268) popup_midp_note_alarm_window_t4_ParamLimits

0x889c,	// (0x00024268) popup_midp_note_alarm_window_t4

0x88c2,	// (0x0002428e) popup_midp_note_alarm_window_t5_ParamLimits

0x88c2,	// (0x0002428e) popup_midp_note_alarm_window_t5

0x000a,

0xf899,	// (0x0002b265) popup_midp_note_alarm_window_t_ParamLimits

0xf899,	// (0x0002b265) popup_midp_note_alarm_window_t

0x896e,	// (0x0002433a) wait_bar_pane_cp1_ParamLimits

0x896e,	// (0x0002433a) wait_bar_pane_cp1

0x5f7b,	// (0x00021947) wait_anim_pane_copy1

0x5f7b,	// (0x00021947) wait_border_pane_copy1

0x834f,	// (0x00023d1b) wait_border_pane_g1_copy1

0x301b,	// (0x0001e9e7) form_field_popup_pane_g1

0xbd8c,	// (0x00027758) form_field_popup_pane_t1_ParamLimits

0x68ca,	// (0x00022296) input_focus_pane_cp7_ParamLimits

0x68ec,	// (0x000222b8) list_form_pane_ParamLimits

0x303d,	// (0x0001ea09) form_field_popup_wide_pane_g1

0x3045,	// (0x0001ea11) form_field_popup_wide_pane_t1_ParamLimits

0x68ca,	// (0x00022296) input_focus_pane_cp8_ParamLimits

0x68f8,	// (0x000222c4) list_form_wide_pane_ParamLimits

0x9401,	// (0x00024dcd) aid_size_cell_graphic_pane

0xbe0b,	// (0x000277d7) data_form_pane_t1_ParamLimits

0xbf42,	// (0x0002790e) data_form_wide_pane_t1_ParamLimits

0x0883,	// (0x0001c24f) bg_status_flat_pane

0xf23c,	// (0x0002ac08) title_pane_t1_ParamLimits

0x6023,	// (0x000219ef) title_pane_t2_ParamLimits

0x6049,	// (0x00021a15) title_pane_t3_ParamLimits

0xf55d,	// (0x0002af29) title_pane_t_ParamLimits

0x6ea5,	// (0x00022871) level_1_signal_ParamLimits

0x6eb2,	// (0x0002287e) level_2_signal_ParamLimits

0x6ebf,	// (0x0002288b) level_3_signal_ParamLimits

0x6ecc,	// (0x00022898) level_4_signal_ParamLimits

0x6ed9,	// (0x000228a5) level_5_signal_ParamLimits

0x6ee6,	// (0x000228b2) level_6_signal_ParamLimits

0x6ef3,	// (0x000228bf) level_7_signal_ParamLimits

0x6ea5,	// (0x00022871) level_1_battery_ParamLimits

0x6eb2,	// (0x0002287e) level_2_battery_ParamLimits

0x6ebf,	// (0x0002288b) level_3_battery_ParamLimits

0x6ecc,	// (0x00022898) level_4_battery_ParamLimits

0x6ed9,	// (0x000228a5) level_5_battery_ParamLimits

0x6ee6,	// (0x000228b2) level_6_battery_ParamLimits

0x6ef3,	// (0x000228bf) level_7_battery_ParamLimits

0x8576,	// (0x00023f42) bg_status_flat_pane_g1

0x857e,	// (0x00023f4a) bg_status_flat_pane_g2

0x8586,	// (0x00023f52) bg_status_flat_pane_g3

0x858e,	// (0x00023f5a) bg_status_flat_pane_g4

0x8596,	// (0x00023f62) bg_status_flat_pane_g5

0x859e,	// (0x00023f6a) bg_status_flat_pane_g6

0x85a6,	// (0x00023f72) bg_status_flat_pane_g7

0xf2d0,	// (0x0002ac9c) tabs_3_active_pane_t1_ParamLimits

0xf2d0,	// (0x0002ac9c) tabs_3_passive_pane_t1_ParamLimits

0xf2ea,	// (0x0002acb6) tabs_4_active_pane_t1_ParamLimits

0xf2ea,	// (0x0002acb6) tabs_4_1_passive_pane_t1_ParamLimits

0x0426,	// (0x0001bdf2) tabs_2_active_pane_t1_ParamLimits

0x0426,	// (0x0001bdf2) tabs_2_passive_pane_t1_ParamLimits

0x605b,	// (0x00021a27) bg_active_tab_pane_cp4_ParamLimits

0x0438,	// (0x0001be04) tabs_2_long_active_pane_t1_ParamLimits

0x7843,	// (0x0002320f) bg_passive_tab_pane_cp4_ParamLimits

0x4ba8,	// (0x00020574) list_single_midp_graphic_pane_t1_ParamLimits

0x605b,	// (0x00021a27) bg_active_tab_pane_cp5_ParamLimits

0x044b,	// (0x0001be17) tabs_3_long_active_pane_t1_ParamLimits

0x7843,	// (0x0002320f) bg_passive_tab_pane_cp5_ParamLimits

0x4ba8,	// (0x00020574) list_single_midp_graphic_pane_t1

0x0883,	// (0x0001c24f) bg_status_flat_pane_ParamLimits

0x79dd,	// (0x000233a9) indicator_pane_cp2_ParamLimits

0x79dd,	// (0x000233a9) indicator_pane_cp2

0x09fb,	// (0x0001c3c7) navi_pane_srt_ParamLimits

0x09fb,	// (0x0001c3c7) navi_pane_srt

0x7b26,	// (0x000234f2) popup_clock_digital_analogue_window_cp1

0x6138,	// (0x00021b04) indicator_pane_t1

0x7507,	// (0x00022ed3) copy_highlight_pane

0x7507,	// (0x00022ed3) cursor_graphics_pane

0x7507,	// (0x00022ed3) graphic_within_text_pane

0x7507,	// (0x00022ed3) link_highlight_pane

0x8d85,	// (0x00024751) popup_preview_text_window_t5_ParamLimits

0x8d85,	// (0x00024751) popup_preview_text_window_t5

0x762b,	// (0x00022ff7) cursor_digital_pane

0x762b,	// (0x00022ff7) cursor_primary_pane

0x763c,	// (0x00023008) cursor_primary_small_pane

0x7644,	// (0x00023010) cursor_secondary_pane

0x764c,	// (0x00023018) cursor_title_pane

0x762b,	// (0x00022ff7) link_highlight_digital_pane

0x7633,	// (0x00022fff) link_highlight_primary_pane

0x763c,	// (0x00023008) link_highlight_primary_small_pane

0x7644,	// (0x00023010) link_highlight_secondary_pane

0x764c,	// (0x00023018) link_highlight_title_pane

0x762b,	// (0x00022ff7) copy_highlight_digital_pane

0x762b,	// (0x00022ff7) copy_highlight_primary_pane

0x763c,	// (0x00023008) copy_highlight_primary_small_pane

0x7644,	// (0x00023010) copy_highlight_secondary_pane

0x764c,	// (0x00023018) copy_highlight_title_pane

0x7644,	// (0x00023010) graphic_text_digital_pane

0x8614,	// (0x00023fe0) graphic_text_primary_pane

0x861d,	// (0x00023fe9) graphic_text_primary_small_pane

0x763c,	// (0x00023008) graphic_text_secondary_pane

0x762b,	// (0x00022ff7) graphic_text_title_pane

0x0762,	// (0x0001c12e) cursor_primary_pane_g1

0x8606,	// (0x00023fd2) cursor_text_primary_t1

0x0caf,	// (0x0001c67b) cursor_primary_small_pane_g1

0x85f8,	// (0x00023fc4) cursor_text_primary_small_t1

0x0ca5,	// (0x0001c671) cursor_primary_small_pane_g1_copy1

0x85e0,	// (0x00023fac) cursor_text_primary_small_t1_copy1

0x85be,	// (0x00023f8a) cursor_text_title_t1

0x0c9b,	// (0x0001c667) cursor_title_pane_g1

0x0762,	// (0x0001c12e) cursor_digital_pane_g1

0x765e,	// (0x0002302a) cursor_text_digital_t1

0x855f,	// (0x00023f2b) link_highlight_primary_pane_g1

0x8567,	// (0x00023f33) link_highlight_primary_pane_t1

0x766c,	// (0x00023038) link_highlight_primary_small_pane_g1

0x7674,	// (0x00023040) link_highlight_primary_small_pane_t1

0x766c,	// (0x00023038) link_highlight_secondary_pane_g1

0x7683,	// (0x0002304f) link_highlight_secondary_pane_t1

0x84d3,	// (0x00023e9f) link_highlight_title_pane_g1

0x84db,	// (0x00023ea7) link_highlight_title_pane_t1

0x84bc,	// (0x00023e88) link_highlight_digital_pane_g1

0x84c4,	// (0x00023e90) link_highlight_digital_pane_t1

0x8394,	// (0x00023d60) copy_highlight_primary_pane_g1

0x839c,	// (0x00023d68) copy_highlight_primary_pane_t1

0x836e,	// (0x00023d3a) copy_highlight_primary_small_pane_g1

0x8385,	// (0x00023d51) copy_highlight_primary_small_pane_t1

0x7692,	// (0x0002305e) copy_highlight_secondary_pane_g1

0x769a,	// (0x00023066) copy_highlight_secondary_pane_t1

0x836e,	// (0x00023d3a) copy_highlight_title_pane_g1

0x8376,	// (0x00023d42) copy_highlight_title_pane_t1

0x8394,	// (0x00023d60) copy_highlight_digital_pane_g1

0x960d,	// (0x00024fd9) copy_highlight_digital_pane_t1

0x9561,	// (0x00024f2d) graphic_text_primary_pane_g1

0x95f1,	// (0x00024fbd) graphic_text_primary_pane_t1

0x95ff,	// (0x00024fcb) graphic_text_primary_pane_t2

0x0001,

0xf9c8,	// (0x0002b394) graphic_text_primary_pane_t

0x95cd,	// (0x00024f99) graphic_text_primary_small_pane_g1

0x95d5,	// (0x00024fa1) graphic_text_primary_small_pane_t1

0x95e3,	// (0x00024faf) graphic_text_primary_small_pane_t2

0x0001,

0xf9c3,	// (0x0002b38f) graphic_text_primary_small_pane_t

0x95a9,	// (0x00024f75) graphic_text_secondary_pane_g1

0x95b1,	// (0x00024f7d) graphic_text_secondary_pane_t1

0x95bf,	// (0x00024f8b) graphic_text_secondary_pane_t2

0x0001,

0xf9be,	// (0x0002b38a) graphic_text_secondary_pane_t

0x9585,	// (0x00024f51) graphic_text_title_pane_g1

0x958d,	// (0x00024f59) graphic_text_title_pane_t1

0x959b,	// (0x00024f67) graphic_text_title_pane_t2

0x0001,

0xf9b9,	// (0x0002b385) graphic_text_title_pane_t

0x9561,	// (0x00024f2d) graphic_text_digital_pane_g1

0x9569,	// (0x00024f35) graphic_text_digital_pane_t1

0x9577,	// (0x00024f43) graphic_text_digital_pane_t2

0x0001,

0xf9b4,	// (0x0002b380) graphic_text_digital_pane_t

0x605b,	// (0x00021a27) navi_icon_pane_srt_ParamLimits

0x605b,	// (0x00021a27) navi_icon_pane_srt

0x5f7b,	// (0x00021947) navi_midp_pane_srt

0x5f7b,	// (0x00021947) navi_navi_pane_srt

0x605b,	// (0x00021a27) navi_text_pane_srt_ParamLimits

0x605b,	// (0x00021a27) navi_text_pane_srt

0x952c,	// (0x00024ef8) navi_navi_icon_text_pane_srt

0x9534,	// (0x00024f00) navi_navi_pane_srt_g1_ParamLimits

0x9534,	// (0x00024f00) navi_navi_pane_srt_g1

0x9546,	// (0x00024f12) navi_navi_pane_srt_g2_ParamLimits

0x9546,	// (0x00024f12) navi_navi_pane_srt_g2

0x0001,

0xf9af,	// (0x0002b37b) navi_navi_pane_srt_g_ParamLimits

0xf9af,	// (0x0002b37b) navi_navi_pane_srt_g

0x9558,	// (0x00024f24) navi_navi_tabs_pane_srt

0x952c,	// (0x00024ef8) navi_navi_text_pane_srt

0x952c,	// (0x00024ef8) navi_navi_volume_pane_srt

0x951d,	// (0x00024ee9) navi_navi_text_pane_srt_t1

0x4eda,	// (0x000208a6) navi_navi_volume_pane_srt_g1

0x4ee2,	// (0x000208ae) volume_small_pane_srt_ParamLimits

0x4ee2,	// (0x000208ae) volume_small_pane_srt

0x4391,	// (0x0001fd5d) volume_small_pane_srt_g1_ParamLimits

0x4391,	// (0x0001fd5d) volume_small_pane_srt_g1

0x43a1,	// (0x0001fd6d) volume_small_pane_srt_g2_ParamLimits

0x43a1,	// (0x0001fd6d) volume_small_pane_srt_g2

0x43b2,	// (0x0001fd7e) volume_small_pane_srt_g3_ParamLimits

0x43b2,	// (0x0001fd7e) volume_small_pane_srt_g3

0x43c3,	// (0x0001fd8f) volume_small_pane_srt_g4_ParamLimits

0x43c3,	// (0x0001fd8f) volume_small_pane_srt_g4

0x43d4,	// (0x0001fda0) volume_small_pane_srt_g5_ParamLimits

0x43d4,	// (0x0001fda0) volume_small_pane_srt_g5

0x43e5,	// (0x0001fdb1) volume_small_pane_srt_g6_ParamLimits

0x43e5,	// (0x0001fdb1) volume_small_pane_srt_g6

0x43f6,	// (0x0001fdc2) volume_small_pane_srt_g7_ParamLimits

0x43f6,	// (0x0001fdc2) volume_small_pane_srt_g7

0x4407,	// (0x0001fdd3) volume_small_pane_srt_g8_ParamLimits

0x4407,	// (0x0001fdd3) volume_small_pane_srt_g8

0x4418,	// (0x0001fde4) volume_small_pane_srt_g9_ParamLimits

0x4418,	// (0x0001fde4) volume_small_pane_srt_g9

0x4429,	// (0x0001fdf5) volume_small_pane_srt_g10_ParamLimits

0x4429,	// (0x0001fdf5) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0002b12f) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0002b12f) volume_small_pane_srt_g

0x6429,	// (0x00021df5) query_popup_data_pane_cp2

0x9503,	// (0x00024ecf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x9503,	// (0x00024ecf) navi_navi_icon_text_pane_srt_t1

0x8614,	// (0x00023fe0) navi_tabs_2_long_pane_srt

0x8614,	// (0x00023fe0) navi_tabs_2_pane_srt

0x8614,	// (0x00023fe0) navi_tabs_3_long_pane_srt

0x8614,	// (0x00023fe0) navi_tabs_3_pane_srt

0x8614,	// (0x00023fe0) navi_tabs_4_pane_srt

0x4eba,	// (0x00020886) tabs_2_active_pane_srt_ParamLimits

0x4eba,	// (0x00020886) tabs_2_active_pane_srt

0x4eca,	// (0x00020896) tabs_2_passive_pane_srt_ParamLimits

0x4eca,	// (0x00020896) tabs_2_passive_pane_srt

0x7dbb,	// (0x00023787) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7dbb,	// (0x00023787) bg_passive_tab_pane_cp1_srt

0x94cf,	// (0x00024e9b) bg_passive_tab_pane_g1_cp1_srt

0x7161,	// (0x00022b2d) bg_passive_tab_pane_g2_cp1_srt

0x94d8,	// (0x00024ea4) bg_passive_tab_pane_g3_cp1_srt

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp1_srt_ParamLimits

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp1_srt

0x94e1,	// (0x00024ead) tabs_2_active_pane_srt_g1

0x1133,	// (0x0001caff) tabs_2_active_pane_srt_t1_ParamLimits

0x1133,	// (0x0001caff) tabs_2_active_pane_srt_t1

0x94cf,	// (0x00024e9b) bg_active_tab_pane_g1_cp1_srt

0x7161,	// (0x00022b2d) bg_active_tab_pane_g2_cp1_srt

0x94d8,	// (0x00024ea4) bg_active_tab_pane_g3_cp1_srt

0x4e87,	// (0x00020853) tabs_3_active_pane_srt_ParamLimits

0x4e87,	// (0x00020853) tabs_3_active_pane_srt

0x4e98,	// (0x00020864) tabs_3_passive_pane_cp_srt_ParamLimits

0x4e98,	// (0x00020864) tabs_3_passive_pane_cp_srt

0x4ea9,	// (0x00020875) tabs_3_passive_pane_srt_ParamLimits

0x4ea9,	// (0x00020875) tabs_3_passive_pane_srt

0x7dbb,	// (0x00023787) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7dbb,	// (0x00023787) bg_passive_tab_pane_cp2_srt

0x76a9,	// (0x00023075) bg_passive_tab_pane_g1_cp2_srt

0x7161,	// (0x00022b2d) bg_passive_tab_pane_g2_cp2_srt

0x76b2,	// (0x0002307e) bg_passive_tab_pane_g3_cp2_srt

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp2_srt_ParamLimits

0x62d6,	// (0x00021ca2) bg_active_tab_pane_cp2_srt

0x94b5,	// (0x00024e81) tabs_3_active_pane_srt_g1

0x111d,	// (0x0001cae9) tabs_3_active_pane_srt_t1_ParamLimits

0x111d,	// (0x0001cae9) tabs_3_active_pane_srt_t1

0x76a9,	// (0x00023075) bg_active_tab_pane_g1_cp2_srt

0x7161,	// (0x00022b2d) bg_active_tab_pane_g2_cp2_srt

0x76b2,	// (0x0002307e) bg_active_tab_pane_g3_cp2_srt

0x4e3f,	// (0x0002080b) tabs_4_active_pane_srt_ParamLimits

0x4e3f,	// (0x0002080b) tabs_4_active_pane_srt

0x4e51,	// (0x0002081d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4e51,	// (0x0002081d) tabs_4_passive_pane_cp2_srt

0x458c,	// (0x0001ff58) aid_size_cell_toolbar

0x913e,	// (0x00024b0a) main_idle_act_pane_ParamLimits

0x471d,	// (0x000200e9) popup_large_graphic_colour_window_ParamLimits

0xcadb,	// (0x000284a7) popup_toolbar_window_ParamLimits

0xcadb,	// (0x000284a7) popup_toolbar_window

0x92f2,	// (0x00024cbe) list_single_graphic_2heading_pane_ParamLimits

0x92f2,	// (0x00024cbe) list_single_graphic_2heading_pane

0x6c59,	// (0x00022625) aid_size_cell_apps_grid_lsc_pane

0x6c6b,	// (0x00022637) aid_size_cell_apps_grid_prt_pane

0x7843,	// (0x0002320f) bg_wml_button_pane_cp1_ParamLimits

0x7843,	// (0x0002320f) bg_wml_button_pane_cp1

0x0c32,	// (0x0001c5fe) form_midp_field_text_pane_t1_ParamLimits

0x7dbb,	// (0x00023787) input_focus_pane_cp050_ParamLimits

0x803e,	// (0x00023a0a) list_midp_form_text_pane_ParamLimits

0x7fe0,	// (0x000239ac) input_focus_pane_cp051_ParamLimits

0x7ff4,	// (0x000239c0) list_midp_choice_pane_ParamLimits

0x0bc6,	// (0x0001c592) list_single_2graphic_pane_cp3_ParamLimits

0x0bc6,	// (0x0001c592) list_single_2graphic_pane_cp3

0x0bdb,	// (0x0001c5a7) list_single_midp_graphic_pane_ParamLimits

0x0bdb,	// (0x0001c5a7) list_single_midp_graphic_pane

0x3210,	// (0x0001ebdc) list_single_graphic_2heading_pane_g1_ParamLimits

0x3210,	// (0x0001ebdc) list_single_graphic_2heading_pane_g1

0x2b3a,	// (0x0001e506) list_single_graphic_2heading_pane_g4_ParamLimits

0x2b3a,	// (0x0001e506) list_single_graphic_2heading_pane_g4

0x2b46,	// (0x0001e512) list_single_graphic_2heading_pane_g5_ParamLimits

0x2b46,	// (0x0001e512) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0002b182) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0002b182) list_single_graphic_2heading_pane_g

0x321c,	// (0x0001ebe8) list_single_graphic_2heading_pane_t1_ParamLimits

0x321c,	// (0x0001ebe8) list_single_graphic_2heading_pane_t1

0x3230,	// (0x0001ebfc) list_single_graphic_2heading_pane_t2_ParamLimits

0x3230,	// (0x0001ebfc) list_single_graphic_2heading_pane_t2

0x324a,	// (0x0001ec16) list_single_graphic_2heading_pane_t3_ParamLimits

0x324a,	// (0x0001ec16) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0002b189) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0002b189) list_single_graphic_2heading_pane_t

0x7c85,	// (0x00023651) bg_popup_sub_pane_cp2

0x7caf,	// (0x0002367b) grid_toobar_pane

0x4b2d,	// (0x000204f9) cell_toolbar_pane_ParamLimits

0x4b2d,	// (0x000204f9) cell_toolbar_pane

0x7ceb,	// (0x000236b7) cell_toolbar_pane_g1_ParamLimits

0x7ceb,	// (0x000236b7) cell_toolbar_pane_g1

0x7cff,	// (0x000236cb) cell_toolbar_pane_g2_ParamLimits

0x7cff,	// (0x000236cb) cell_toolbar_pane_g2

0x0001,

0xf7c4,	// (0x0002b190) cell_toolbar_pane_g_ParamLimits

0xf7c4,	// (0x0002b190) cell_toolbar_pane_g

0x7d21,	// (0x000236ed) grid_highlight_pane_cp2_ParamLimits

0x7d21,	// (0x000236ed) grid_highlight_pane_cp2

0x7d3b,	// (0x00023707) toolbar_button_pane

0x7d47,	// (0x00023713) toolbar_button_pane_g1

0x7d4f,	// (0x0002371b) toolbar_button_pane_g2

0x7d57,	// (0x00023723) toolbar_button_pane_g3

0x7d5f,	// (0x0002372b) toolbar_button_pane_g4

0x7d67,	// (0x00023733) toolbar_button_pane_g5

0x7d6f,	// (0x0002373b) toolbar_button_pane_g6

0x7d77,	// (0x00023743) toolbar_button_pane_g7

0x7d7f,	// (0x0002374b) toolbar_button_pane_g8

0x7d87,	// (0x00023753) toolbar_button_pane_g9

0x0009,

0xf7c9,	// (0x0002b195) toolbar_button_pane_g

0x4b65,	// (0x00020531) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4b65,	// (0x00020531) list_single_2graphic_pane_g1_cp3

0x0073,	// (0x0001ba3f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x0073,	// (0x0001ba3f) list_single_2graphic_pane_g2_cp3

0x7343,	// (0x00022d0f) list_single_2graphic_pane_g3_cp3

0x4b82,	// (0x0002054e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4b82,	// (0x0002054e) list_single_2graphic_pane_g4_cp3

0x4b8e,	// (0x0002055a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4b8e,	// (0x0002055a) list_single_2graphic_pane_t1_cp3

0x7337,	// (0x00022d03) list_single_midp_graphic_pane_g2_ParamLimits

0x7337,	// (0x00022d03) list_single_midp_graphic_pane_g2

0x4594,	// (0x0001ff60) aid_zoom_text_primary

0x31e4,	// (0x0001ebb0) aid_zoom_text_secondary

0x7766,	// (0x00023132) status_small_pane_g7_ParamLimits

0x7766,	// (0x00023132) status_small_pane_g7

0x7789,	// (0x00023155) status_small_pane_t1_ParamLimits

0xf218,	// (0x0002abe4) title_pane_g2

0x0003,

0xf554,	// (0x0002af20) title_pane_g

0xf4a0,	// (0x0002ae6c) aid_size_cell_colour_1_pane_ParamLimits

0xf4a0,	// (0x0002ae6c) aid_size_cell_colour_1_pane

0xf4b4,	// (0x0002ae80) aid_size_cell_colour_2_pane_ParamLimits

0xf4b4,	// (0x0002ae80) aid_size_cell_colour_2_pane

0xf4c8,	// (0x0002ae94) aid_size_cell_colour_3_pane_ParamLimits

0xf4c8,	// (0x0002ae94) aid_size_cell_colour_3_pane

0xf4dc,	// (0x0002aea8) aid_size_cell_colour_4_pane_ParamLimits

0xf4dc,	// (0x0002aea8) aid_size_cell_colour_4_pane

0x3ff6,	// (0x0001f9c2) title_pane_stacon_g1_ParamLimits

0x3ff6,	// (0x0001f9c2) title_pane_stacon_g1

0x83f3,	// (0x00023dbf) popup_note_wait_window_g3_ParamLimits

0x83f3,	// (0x00023dbf) popup_note_wait_window_g3

0x8469,	// (0x00023e35) popup_note_wait_window_t5_ParamLimits

0x8469,	// (0x00023e35) popup_note_wait_window_t5

0x5f7b,	// (0x00021947) main_feb_china_hwr_fs_writing_pane

0xc4f7,	// (0x00027ec3) popup_feb_china_hwr_fs_window_ParamLimits

0xc4f7,	// (0x00027ec3) popup_feb_china_hwr_fs_window

0xcb33,	// (0x000284ff) aid_size_cell_hwr_fs_ParamLimits

0xcb33,	// (0x000284ff) aid_size_cell_hwr_fs

0x7dbb,	// (0x00023787) bg_popup_sub_pane_cp3_ParamLimits

0x7dbb,	// (0x00023787) bg_popup_sub_pane_cp3

0xcb48,	// (0x00028514) grid_hwr_fs_pane_ParamLimits

0xcb48,	// (0x00028514) grid_hwr_fs_pane

0x4beb,	// (0x000205b7) linegrid_hwr_fs_pane_ParamLimits

0x4beb,	// (0x000205b7) linegrid_hwr_fs_pane

0xcb60,	// (0x0002852c) cell_hwr_fs_pane_ParamLimits

0xcb60,	// (0x0002852c) cell_hwr_fs_pane

0x7dc7,	// (0x00023793) linegrid_hwr_fs_pane_g1_ParamLimits

0x7dc7,	// (0x00023793) linegrid_hwr_fs_pane_g1

0x0b9a,	// (0x0001c566) linegrid_hwr_fs_pane_g2_ParamLimits

0x0b9a,	// (0x0001c566) linegrid_hwr_fs_pane_g2

0x7de5,	// (0x000237b1) linegrid_hwr_fs_pane_g3_ParamLimits

0x7de5,	// (0x000237b1) linegrid_hwr_fs_pane_g3

0x4c1d,	// (0x000205e9) linegrid_hwr_fs_pane_g4_ParamLimits

0x4c1d,	// (0x000205e9) linegrid_hwr_fs_pane_g4

0x4c37,	// (0x00020603) linegrid_hwr_fs_pane_g5_ParamLimits

0x4c37,	// (0x00020603) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ef,	// (0x0002b1bb) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x0002b1bb) linegrid_hwr_fs_pane_g

0x7df1,	// (0x000237bd) cell_hwr_fs_pane_g1_ParamLimits

0x7df1,	// (0x000237bd) cell_hwr_fs_pane_g1

0x7bbc,	// (0x00023588) cell_hwr_fs_pane_g2_ParamLimits

0x7bbc,	// (0x00023588) cell_hwr_fs_pane_g2

0x0bac,	// (0x0001c578) cell_hwr_fs_pane_g3_ParamLimits

0x0bac,	// (0x0001c578) cell_hwr_fs_pane_g3

0x0bb9,	// (0x0001c585) cell_hwr_fs_pane_g4_ParamLimits

0x0bb9,	// (0x0001c585) cell_hwr_fs_pane_g4

0x0003,

0xf7fa,	// (0x0002b1c6) cell_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0002b1c6) cell_hwr_fs_pane_g

0xcb86,	// (0x00028552) cell_hwr_fs_pane_t1

0x5f7b,	// (0x00021947) grid_highlight_pane_cp6

0x5f7b,	// (0x00021947) main_idle_act2_pane

0x6a13,	// (0x000223df) aid_inside_area_popup_secondary

0x0d16,	// (0x0001c6e2) aid_inside_area_window_primary_ParamLimits

0x0d16,	// (0x0001c6e2) aid_inside_area_window_primary

0x961c,	// (0x00024fe8) ai2_news_ticker_pane

0x9624,	// (0x00024ff0) aid_size_cell_ai1_link_ParamLimits

0x9624,	// (0x00024ff0) aid_size_cell_ai1_link

0x963e,	// (0x0002500a) popup_ai2_data_window_ParamLimits

0x963e,	// (0x0002500a) popup_ai2_data_window

0x9652,	// (0x0002501e) popup_ai2_link_window_ParamLimits

0x9652,	// (0x0002501e) popup_ai2_link_window

0x7dbb,	// (0x00023787) bg_popup_sub_pane_cp4_ParamLimits

0x7dbb,	// (0x00023787) bg_popup_sub_pane_cp4

0x9666,	// (0x00025032) grid_ai2_link_pane_ParamLimits

0x9666,	// (0x00025032) grid_ai2_link_pane

0x967d,	// (0x00025049) popup_ai2_link_window_g1_ParamLimits

0x967d,	// (0x00025049) popup_ai2_link_window_g1

0x9689,	// (0x00025055) popup_ai2_link_window_g2_ParamLimits

0x9689,	// (0x00025055) popup_ai2_link_window_g2

0x0001,

0xf9cd,	// (0x0002b399) popup_ai2_link_window_g_ParamLimits

0xf9cd,	// (0x0002b399) popup_ai2_link_window_g

0x9698,	// (0x00025064) ai2_mp_button_pane

0x96a0,	// (0x0002506c) ai2_mp_volume_pane

0x7fe0,	// (0x000239ac) bg_popup_sub_pane_cp5_ParamLimits

0x7fe0,	// (0x000239ac) bg_popup_sub_pane_cp5

0x96a8,	// (0x00025074) heading_ai2_gene_pane_ParamLimits

0x96a8,	// (0x00025074) heading_ai2_gene_pane

0x96b4,	// (0x00025080) list_ai2_gene_pane_ParamLimits

0x96b4,	// (0x00025080) list_ai2_gene_pane

0x96fc,	// (0x000250c8) cell_ai2_link_pane_ParamLimits

0x96fc,	// (0x000250c8) cell_ai2_link_pane

0x9712,	// (0x000250de) cell_ai2_link_pane_g1

0x5f7b,	// (0x00021947) grid_highlight_pane_cp7

0x4ef7,	// (0x000208c3) ai2_mp_volume_pane_g1

0x97e3,	// (0x000251af) ai2_mp_volume_pane_g2

0x9758,	// (0x00025124) list_ai2_gene_pane_t1

0x97eb,	// (0x000251b7) ai2_mp_volume_pane_g3

0x0002,

0xf9e6,	// (0x0002b3b2) ai2_mp_volume_pane_g

0x4eff,	// (0x000208cb) volume_small_pane_cp3

0x97f3,	// (0x000251bf) aid_size_cell_ai2_button

0x97fb,	// (0x000251c7) grid_ai2_button_pane

0x9804,	// (0x000251d0) cell_ai2_button_pane_ParamLimits

0x9804,	// (0x000251d0) cell_ai2_button_pane

0x5f71,	// (0x0002193d) cell_ai2_button_pane_g1

0x5f7b,	// (0x00021947) grid_highlight_pane_cp8

0x97a3,	// (0x0002516f) ai2_gene_pane_t1_ParamLimits

0x97a3,	// (0x0002516f) ai2_gene_pane_t1

0xc479,	// (0x00027e45) aid_height_parent_landscape

0x0ea9,	// (0x0001c875) aid_height_set_list

0x913e,	// (0x00024b0a) aid_size_parent

0x9401,	// (0x00024dcd) aid_size_cell_graphic_pane_ParamLimits

0x96c4,	// (0x00025090) popup_ai2_data_window_g1_ParamLimits

0x96c4,	// (0x00025090) popup_ai2_data_window_g1

0x96d0,	// (0x0002509c) ai2_news_ticker_pane_g1

0x96d8,	// (0x000250a4) ai2_news_ticker_pane_g2

0x0001,

0xf9d2,	// (0x0002b39e) ai2_news_ticker_pane_g

0x96e0,	// (0x000250ac) ai2_news_ticker_pane_t1

0x96ee,	// (0x000250ba) ai2_news_ticker_pane_t2

0x0001,

0xf9d7,	// (0x0002b3a3) ai2_news_ticker_pane_t

0x971b,	// (0x000250e7) heading_ai2_gene_pane_g1

0x9723,	// (0x000250ef) heading_ai2_gene_pane_t1_ParamLimits

0x9723,	// (0x000250ef) heading_ai2_gene_pane_t1

0x9738,	// (0x00025104) list_highlight_pane_cp6

0x9740,	// (0x0002510c) ai2_gene_pane_ParamLimits

0x9740,	// (0x0002510c) ai2_gene_pane

0x9766,	// (0x00025132) list_ai2_gene_pane_t2

0x0001,

0xf9dc,	// (0x0002b3a8) list_ai2_gene_pane_t

0x9774,	// (0x00025140) list_highlight_pane_cp8_ParamLimits

0x9774,	// (0x00025140) list_highlight_pane_cp8

0x9785,	// (0x00025151) ai2_gene_pane_g1_ParamLimits

0x9785,	// (0x00025151) ai2_gene_pane_g1

0x9797,	// (0x00025163) ai2_gene_pane_g2_ParamLimits

0x9797,	// (0x00025163) ai2_gene_pane_g2

0x0001,

0xf9e1,	// (0x0002b3ad) ai2_gene_pane_g_ParamLimits

0xf9e1,	// (0x0002b3ad) ai2_gene_pane_g

0x6848,	// (0x00022214) scroll_pane_cp12

0xc438,	// (0x00027e04) control_pane_t3_ParamLimits

0xc438,	// (0x00027e04) control_pane_t3

0x777a,	// (0x00023146) status_small_pane_g8_ParamLimits

0x777a,	// (0x00023146) status_small_pane_g8

0xc58a,	// (0x00027f56) popup_find_window_ParamLimits

0xc80b,	// (0x000281d7) popup_note_image_window_ParamLimits

0x3210,	// (0x0001ebdc) list_double2_graphic_pane_vc_g1_ParamLimits

0x3210,	// (0x0001ebdc) list_double2_graphic_pane_vc_g1

0x2b3a,	// (0x0001e506) list_double2_graphic_pane_vc_g2_ParamLimits

0x2b3a,	// (0x0001e506) list_double2_graphic_pane_vc_g2

0x2b46,	// (0x0001e512) list_double2_graphic_pane_vc_g3_ParamLimits

0x2b46,	// (0x0001e512) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b6,	// (0x0002b182) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002b182) list_double2_graphic_pane_vc_g

0x3262,	// (0x0001ec2e) list_double2_graphic_pane_vc_t1_ParamLimits

0x3262,	// (0x0001ec2e) list_double2_graphic_pane_vc_t1

0x2b3a,	// (0x0001e506) list_single_heading_pane_vc_g1_ParamLimits

0x2b3a,	// (0x0001e506) list_single_heading_pane_vc_g1

0x2b46,	// (0x0001e512) list_single_heading_pane_vc_g2_ParamLimits

0x2b46,	// (0x0001e512) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002af9a) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002af9a) list_single_heading_pane_vc_g

0x3278,	// (0x0001ec44) list_single_heading_pane_vc_t1_ParamLimits

0x3278,	// (0x0001ec44) list_single_heading_pane_vc_t1

0x328e,	// (0x0001ec5a) list_single_heading_pane_vc_t2_ParamLimits

0x328e,	// (0x0001ec5a) list_single_heading_pane_vc_t2

0x0001,

0xf7de,	// (0x0002b1aa) list_single_heading_pane_vc_t_ParamLimits

0xf7de,	// (0x0002b1aa) list_single_heading_pane_vc_t

0x32a2,	// (0x0001ec6e) list_setting_number_pane_vc_g1_ParamLimits

0x32a2,	// (0x0001ec6e) list_setting_number_pane_vc_g1

0x32ae,	// (0x0001ec7a) list_setting_number_pane_vc_g2_ParamLimits

0x32ae,	// (0x0001ec7a) list_setting_number_pane_vc_g2

0x0001,

0xf7e3,	// (0x0002b1af) list_setting_number_pane_vc_g_ParamLimits

0xf7e3,	// (0x0002b1af) list_setting_number_pane_vc_g

0x32ba,	// (0x0001ec86) list_setting_number_pane_vc_t1_ParamLimits

0x32ba,	// (0x0001ec86) list_setting_number_pane_vc_t1

0x32ce,	// (0x0001ec9a) list_setting_number_pane_vc_t2_ParamLimits

0x32ce,	// (0x0001ec9a) list_setting_number_pane_vc_t2

0x32e8,	// (0x0001ecb4) list_setting_number_pane_vc_t3_ParamLimits

0x32e8,	// (0x0001ecb4) list_setting_number_pane_vc_t3

0x0002,

0xf7e8,	// (0x0002b1b4) list_setting_number_pane_vc_t_ParamLimits

0xf7e8,	// (0x0002b1b4) list_setting_number_pane_vc_t

0x3302,	// (0x0001ecce) set_value_pane_vc_ParamLimits

0x3302,	// (0x0001ecce) set_value_pane_vc

0x92f2,	// (0x00024cbe) list_double2_graphic_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_double2_graphic_pane_vc

0x92f2,	// (0x00024cbe) list_double2_large_graphic_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_double2_large_graphic_pane_vc

0x92f2,	// (0x00024cbe) list_double2_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_double2_pane_vc

0x92f2,	// (0x00024cbe) list_double_graphic_heading_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_double_graphic_heading_pane_vc

0x92f2,	// (0x00024cbe) list_double_graphic_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_double_graphic_pane_vc

0x92f2,	// (0x00024cbe) list_double_heading_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_double_heading_pane_vc

0x92f2,	// (0x00024cbe) list_double_large_graphic_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_double_large_graphic_pane_vc

0x92f2,	// (0x00024cbe) list_double_number_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_double_number_pane_vc

0x92f2,	// (0x00024cbe) list_double_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_double_pane_vc

0x92f2,	// (0x00024cbe) list_double_time_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_double_time_pane_vc

0x92f2,	// (0x00024cbe) list_setting_number_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_setting_number_pane_vc

0x92f2,	// (0x00024cbe) list_setting_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_setting_pane_vc

0x92f2,	// (0x00024cbe) list_single_graphic_heading_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_single_graphic_heading_pane_vc

0x92f2,	// (0x00024cbe) list_single_heading_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_single_heading_pane_vc

0x92f2,	// (0x00024cbe) list_single_number_heading_pane_vc_ParamLimits

0x92f2,	// (0x00024cbe) list_single_number_heading_pane_vc

0x34b8,	// (0x0001ee84) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x34b8,	// (0x0001ee84) list_double_graphic_heading_pane_vc_g1

0x2b3a,	// (0x0001e506) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2b3a,	// (0x0001e506) list_double_graphic_heading_pane_vc_g2

0x2b46,	// (0x0001e512) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2b46,	// (0x0001e512) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ed,	// (0x0002b3b9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ed,	// (0x0002b3b9) list_double_graphic_heading_pane_vc_g

0x34c4,	// (0x0001ee90) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x34c4,	// (0x0001ee90) list_double_graphic_heading_pane_vc_t1

0x34e0,	// (0x0001eeac) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x34e0,	// (0x0001eeac) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f4,	// (0x0002b3c0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f4,	// (0x0002b3c0) list_double_graphic_heading_pane_vc_t

0x32a2,	// (0x0001ec6e) list_setting_pane_vc_g1_ParamLimits

0x32a2,	// (0x0001ec6e) list_setting_pane_vc_g1

0x32ae,	// (0x0001ec7a) list_setting_pane_vc_g2_ParamLimits

0x32ae,	// (0x0001ec7a) list_setting_pane_vc_g2

0x0001,

0xf7e3,	// (0x0002b1af) list_setting_pane_vc_g_ParamLimits

0xf7e3,	// (0x0002b1af) list_setting_pane_vc_g

0x34f8,	// (0x0001eec4) list_setting_pane_vc_t1_ParamLimits

0x34f8,	// (0x0001eec4) list_setting_pane_vc_t1

0x3512,	// (0x0001eede) list_setting_pane_vc_t2_ParamLimits

0x3512,	// (0x0001eede) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x0002b403) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x0002b403) list_setting_pane_vc_t

0x3302,	// (0x0001ecce) set_value_pane_cp_vc_ParamLimits

0x3302,	// (0x0001ecce) set_value_pane_cp_vc

0x2b3a,	// (0x0001e506) list_single_number_heading_pane_vc_g1_ParamLimits

0x2b3a,	// (0x0001e506) list_single_number_heading_pane_vc_g1

0x2b46,	// (0x0001e512) list_single_number_heading_pane_vc_g2_ParamLimits

0x2b46,	// (0x0001e512) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002af9a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002af9a) list_single_number_heading_pane_vc_g

0x3278,	// (0x0001ec44) list_single_number_heading_pane_vc_t1_ParamLimits

0x3278,	// (0x0001ec44) list_single_number_heading_pane_vc_t1

0x352a,	// (0x0001eef6) list_single_number_heading_pane_vc_t2_ParamLimits

0x352a,	// (0x0001eef6) list_single_number_heading_pane_vc_t2

0x353e,	// (0x0001ef0a) list_single_number_heading_pane_vc_t3_ParamLimits

0x353e,	// (0x0001ef0a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x0002b408) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0002b408) list_single_number_heading_pane_vc_t

0x3210,	// (0x0001ebdc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3210,	// (0x0001ebdc) list_single_graphic_heading_pane_vc_g1

0x2b3a,	// (0x0001e506) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2b3a,	// (0x0001e506) list_single_graphic_heading_pane_vc_g4

0x2b46,	// (0x0001e512) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2b46,	// (0x0001e512) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b6,	// (0x0002b182) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002b182) list_single_graphic_heading_pane_vc_g

0x3278,	// (0x0001ec44) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3278,	// (0x0001ec44) list_single_graphic_heading_pane_vc_t1

0x3550,	// (0x0001ef1c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3550,	// (0x0001ef1c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0002b40f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0002b40f) list_single_graphic_heading_pane_vc_t

0x2b3a,	// (0x0001e506) list_double2_pane_vc_g1_ParamLimits

0x2b3a,	// (0x0001e506) list_double2_pane_vc_g1

0x2b46,	// (0x0001e512) list_double2_pane_vc_g2_ParamLimits

0x2b46,	// (0x0001e512) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002af9a) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002af9a) list_double2_pane_vc_g

0x3564,	// (0x0001ef30) list_double2_pane_vc_t1_ParamLimits

0x3564,	// (0x0001ef30) list_double2_pane_vc_t1

0x357a,	// (0x0001ef46) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x357a,	// (0x0001ef46) list_double2_large_graphic_pane_vc_g1

0x2b3a,	// (0x0001e506) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2b3a,	// (0x0001e506) list_double2_large_graphic_pane_vc_g2

0x2b46,	// (0x0001e512) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2b46,	// (0x0001e512) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0002afb7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0002afb7) list_double2_large_graphic_pane_vc_g

0x3586,	// (0x0001ef52) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3586,	// (0x0001ef52) list_double2_large_graphic_pane_vc_t1

0x359c,	// (0x0001ef68) list_double_time_pane_vc_g1_ParamLimits

0x359c,	// (0x0001ef68) list_double_time_pane_vc_g1

0x35a8,	// (0x0001ef74) list_double_time_pane_vc_g2_ParamLimits

0x35a8,	// (0x0001ef74) list_double_time_pane_vc_g2

0x0001,

0xfa48,	// (0x0002b414) list_double_time_pane_vc_g_ParamLimits

0xfa48,	// (0x0002b414) list_double_time_pane_vc_g

0x35b4,	// (0x0001ef80) list_double_time_pane_vc_t1_ParamLimits

0x35b4,	// (0x0001ef80) list_double_time_pane_vc_t1

0x35d8,	// (0x0001efa4) list_double_time_pane_vc_t2_ParamLimits

0x35d8,	// (0x0001efa4) list_double_time_pane_vc_t2

0x3622,	// (0x0001efee) list_double_time_pane_vc_t3_ParamLimits

0x3622,	// (0x0001efee) list_double_time_pane_vc_t3

0x3634,	// (0x0001f000) list_double_time_pane_vc_t4_ParamLimits

0x3634,	// (0x0001f000) list_double_time_pane_vc_t4

0x0003,

0xfa4d,	// (0x0002b419) list_double_time_pane_vc_t_ParamLimits

0xfa4d,	// (0x0002b419) list_double_time_pane_vc_t

0x2b3a,	// (0x0001e506) list_double_pane_vc_g1_ParamLimits

0x2b3a,	// (0x0001e506) list_double_pane_vc_g1

0x2b46,	// (0x0001e512) list_double_pane_vc_g2_ParamLimits

0x2b46,	// (0x0001e512) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002af9a) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002af9a) list_double_pane_vc_g

0x3648,	// (0x0001f014) list_double_pane_vc_t1_ParamLimits

0x3648,	// (0x0001f014) list_double_pane_vc_t1

0x365c,	// (0x0001f028) list_double_pane_vc_t2_ParamLimits

0x365c,	// (0x0001f028) list_double_pane_vc_t2

0x0001,

0xfa56,	// (0x0002b422) list_double_pane_vc_t_ParamLimits

0xfa56,	// (0x0002b422) list_double_pane_vc_t

0x2b3a,	// (0x0001e506) list_double_number_pane_vc_g1_ParamLimits

0x2b3a,	// (0x0001e506) list_double_number_pane_vc_g1

0x2b46,	// (0x0001e512) list_double_number_pane_vc_g2_ParamLimits

0x2b46,	// (0x0001e512) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002af9a) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002af9a) list_double_number_pane_vc_g

0x3674,	// (0x0001f040) list_double_number_pane_vc_t1_ParamLimits

0x3674,	// (0x0001f040) list_double_number_pane_vc_t1

0x3688,	// (0x0001f054) list_double_number_pane_vc_t2_ParamLimits

0x3688,	// (0x0001f054) list_double_number_pane_vc_t2

0x365c,	// (0x0001f028) list_double_number_pane_vc_t3_ParamLimits

0x365c,	// (0x0001f028) list_double_number_pane_vc_t3

0x0002,

0xfa5b,	// (0x0002b427) list_double_number_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002b427) list_double_number_pane_vc_t

0x369c,	// (0x0001f068) list_double_large_graphic_pane_vc_g1_ParamLimits

0x369c,	// (0x0001f068) list_double_large_graphic_pane_vc_g1

0x36ad,	// (0x0001f079) list_double_large_graphic_pane_vc_g2_ParamLimits

0x36ad,	// (0x0001f079) list_double_large_graphic_pane_vc_g2

0x2b46,	// (0x0001e512) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2b46,	// (0x0001e512) list_double_large_graphic_pane_vc_g3

0x36bc,	// (0x0001f088) list_double_large_graphic_pane_vc_g4_ParamLimits

0x36bc,	// (0x0001f088) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa62,	// (0x0002b42e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x0002b42e) list_double_large_graphic_pane_vc_g

0x36c8,	// (0x0001f094) list_double_large_graphic_pane_vc_t1_ParamLimits

0x36c8,	// (0x0001f094) list_double_large_graphic_pane_vc_t1

0x36e1,	// (0x0001f0ad) list_double_large_graphic_pane_vc_t2_ParamLimits

0x36e1,	// (0x0001f0ad) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6b,	// (0x0002b437) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6b,	// (0x0002b437) list_double_large_graphic_pane_vc_t

0x2b3a,	// (0x0001e506) list_double_heading_pane_vc_g1_ParamLimits

0x2b3a,	// (0x0001e506) list_double_heading_pane_vc_g1

0x2b46,	// (0x0001e512) list_double_heading_pane_vc_g2_ParamLimits

0x2b46,	// (0x0001e512) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002af9a) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002af9a) list_double_heading_pane_vc_g

0x36fa,	// (0x0001f0c6) list_double_heading_pane_vc_t1_ParamLimits

0x36fa,	// (0x0001f0c6) list_double_heading_pane_vc_t1

0x3278,	// (0x0001ec44) list_double_heading_pane_vc_t2_ParamLimits

0x3278,	// (0x0001ec44) list_double_heading_pane_vc_t2

0x0001,

0xfa70,	// (0x0002b43c) list_double_heading_pane_vc_t_ParamLimits

0xfa70,	// (0x0002b43c) list_double_heading_pane_vc_t

0x370e,	// (0x0001f0da) list_double_graphic_pane_vc_g1_ParamLimits

0x370e,	// (0x0001f0da) list_double_graphic_pane_vc_g1

0x371e,	// (0x0001f0ea) list_double_graphic_pane_vc_g2_ParamLimits

0x371e,	// (0x0001f0ea) list_double_graphic_pane_vc_g2

0x372d,	// (0x0001f0f9) list_double_graphic_pane_vc_g3_ParamLimits

0x372d,	// (0x0001f0f9) list_double_graphic_pane_vc_g3

0x0002,

0xfa75,	// (0x0002b441) list_double_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x0002b441) list_double_graphic_pane_vc_g

0x3739,	// (0x0001f105) list_double_graphic_pane_vc_t1_ParamLimits

0x3739,	// (0x0001f105) list_double_graphic_pane_vc_t1

0x374d,	// (0x0001f119) list_double_graphic_pane_vc_t2_ParamLimits

0x374d,	// (0x0001f119) list_double_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x0002b448) list_double_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x0002b448) list_double_graphic_pane_vc_t

0x3b6a,	// (0x0001f536) aid_size_cell_fastswap

0xc171,	// (0x00027b3d) aid_size_cell_touch_ParamLimits

0xc171,	// (0x00027b3d) aid_size_cell_touch

0x3dcd,	// (0x0001f799) popup_fast_swap_wide_window_ParamLimits

0x3dcd,	// (0x0001f799) popup_fast_swap_wide_window

0xc2bc,	// (0x00027c88) touch_pane_ParamLimits

0xc2bc,	// (0x00027c88) touch_pane

0x689e,	// (0x0002226a) button_value_adjust_pane_cp2

0x2f16,	// (0x0001e8e2) button_value_adjust_pane_cp4

0x2f36,	// (0x0001e902) form_field_data_pane_cp2

0xbd29,	// (0x000276f5) form_field_data_wide_pane_cp2

0x6d24,	// (0x000226f0) bg_scroll_pane_ParamLimits

0x4159,	// (0x0001fb25) scroll_handle_pane_ParamLimits

0x416d,	// (0x0001fb39) scroll_sc2_down_pane_ParamLimits

0x416d,	// (0x0001fb39) scroll_sc2_down_pane

0x6d55,	// (0x00022721) scroll_sc2_up_pane_ParamLimits

0x6d55,	// (0x00022721) scroll_sc2_up_pane

0x126a,	// (0x0001cc36) grid_wheel_folder_pane_g1_ParamLimits

0x126a,	// (0x0001cc36) grid_wheel_folder_pane_g1

0x4329,	// (0x0001fcf5) clock_nsta_pane_cp2_ParamLimits

0x4329,	// (0x0001fcf5) clock_nsta_pane_cp2

0x7843,	// (0x0002320f) listscroll_midp_pane_ParamLimits

0x06c7,	// (0x0001c093) midp_canvas_pane

0x77f5,	// (0x000231c1) nsta_clock_indic_pane

0x7829,	// (0x000231f5) listscroll_form_pane_vc

0x7831,	// (0x000231fd) listscroll_set_pane_vc_ParamLimits

0x7831,	// (0x000231fd) listscroll_set_pane_vc

0x08ab,	// (0x0001c277) clock_nsta_pane

0x08d5,	// (0x0001c2a1) indicator_nsta_pane

0x7c85,	// (0x00023651) bg_popup_sub_pane_cp2_ParamLimits

0x7c99,	// (0x00023665) find_pane_cp2_ParamLimits

0x7c99,	// (0x00023665) find_pane_cp2

0x7caf,	// (0x0002367b) grid_toobar_pane_ParamLimits

0x7d8f,	// (0x0002375b) list_form_gen_pane_vc_ParamLimits

0x7d8f,	// (0x0002375b) list_form_gen_pane_vc

0x7da5,	// (0x00023771) scroll_pane_cp8_vc_ParamLimits

0x7da5,	// (0x00023771) scroll_pane_cp8_vc

0x7e21,	// (0x000237ed) data_form_wide_pane_vc_ParamLimits

0x7e21,	// (0x000237ed) data_form_wide_pane_vc

0x7e2d,	// (0x000237f9) form_field_data_wide_pane_vc_g1

0x7e35,	// (0x00023801) form_field_data_wide_pane_vc_t1_ParamLimits

0x7e35,	// (0x00023801) form_field_data_wide_pane_vc_t1

0x68ca,	// (0x00022296) input_focus_pane_cp6_vc_ParamLimits

0x68ca,	// (0x00022296) input_focus_pane_cp6_vc

0x0c6f,	// (0x0001c63b) list_midp_pane_ParamLimits

0x94a9,	// (0x00024e75) scroll_pane_cp16_ParamLimits

0x94a9,	// (0x00024e75) scroll_pane_cp16

0x81cd,	// (0x00023b99) button_value_adjust_pane_ParamLimits

0x81cd,	// (0x00023b99) button_value_adjust_pane

0x0eba,	// (0x0001c886) button_value_adjust_pane_cp6_ParamLimits

0x0eba,	// (0x0001c886) button_value_adjust_pane_cp6

0x0fd0,	// (0x0001c99c) settings_code_pane_cp_ParamLimits

0x0fd0,	// (0x0001c99c) settings_code_pane_cp

0x5f71,	// (0x0002193d) cell_touch_pane_g1

0x5f71,	// (0x0002193d) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0002b0d5) cell_touch_pane_g

0x1149,	// (0x0001cb15) cell_touch_pane_cp_ParamLimits

0x1149,	// (0x0001cb15) cell_touch_pane_cp

0x1165,	// (0x0001cb31) cell_touch_pane_ParamLimits

0x1165,	// (0x0001cb31) cell_touch_pane

0x5f71,	// (0x0002193d) scroll_sc2_down_pane_g1

0x5f71,	// (0x0002193d) scroll_sc2_up_pane_g1

0x5f7b,	// (0x00021947) bg_set_opt_pane_cp4_vc

0x9837,	// (0x00025203) list_set_graphic_pane_vc_g1_ParamLimits

0x9837,	// (0x00025203) list_set_graphic_pane_vc_g1

0x9843,	// (0x0002520f) list_set_graphic_pane_vc_g2_ParamLimits

0x9843,	// (0x0002520f) list_set_graphic_pane_vc_g2

0x0001,

0xf9f9,	// (0x0002b3c5) list_set_graphic_pane_vc_g_ParamLimits

0xf9f9,	// (0x0002b3c5) list_set_graphic_pane_vc_g

0x984f,	// (0x0002521b) text_primary_small_cp13_vc_ParamLimits

0x984f,	// (0x0002521b) text_primary_small_cp13_vc

0x9867,	// (0x00025233) list_set_graphic_pane_vc_ParamLimits

0x9867,	// (0x00025233) list_set_graphic_pane_vc

0x5f7b,	// (0x00021947) input_focus_pane_cp2_vc

0x5f71,	// (0x0002193d) setting_code_pane_vc_g1

0x60a6,	// (0x00021a72) setting_code_pane_vc_t1

0x987a,	// (0x00025246) set_text_pane_vc_t1_ParamLimits

0x987a,	// (0x00025246) set_text_pane_vc_t1

0x5f7b,	// (0x00021947) input_focus_pane_cp1_vc

0x9897,	// (0x00025263) list_set_text_pane_vc

0x5f71,	// (0x0002193d) setting_text_pane_vc_g1

0x5f7b,	// (0x00021947) bg_set_opt_pane_cp2_vc

0x609d,	// (0x00021a69) setting_slider_graphic_pane_vc_g1

0x98a1,	// (0x0002526d) setting_slider_graphic_pane_vc_t1

0x98b1,	// (0x0002527d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fe,	// (0x0002b3ca) setting_slider_graphic_pane_vc_t

0x98c1,	// (0x0002528d) slider_set_pane_cp_vc

0x98c9,	// (0x00025295) slider_set_pane_vc_g1

0x98d2,	// (0x0002529e) slider_set_pane_vc_g2

0x0006,

0xfa03,	// (0x0002b3cf) slider_set_pane_vc_g

0x6919,	// (0x000222e5) set_opt_bg_pane_g1_copy1

0x6921,	// (0x000222ed) set_opt_bg_pane_g2_copy1

0x98fe,	// (0x000252ca) set_opt_bg_pane_g3_copy1

0x6931,	// (0x000222fd) set_opt_bg_pane_g4_copy1

0x6939,	// (0x00022305) set_opt_bg_pane_g5_copy1

0x6941,	// (0x0002230d) set_opt_bg_pane_g6_copy1

0x9906,	// (0x000252d2) set_opt_bg_pane_g7_copy1

0x9910,	// (0x000252dc) set_opt_bg_pane_g8_copy1

0x9918,	// (0x000252e4) set_opt_bg_pane_g9_copy1

0x5f7b,	// (0x00021947) bg_set_opt_pane_cp_vc

0x9920,	// (0x000252ec) setting_slider_pane_vc_t1

0x992f,	// (0x000252fb) setting_slider_pane_vc_t2

0x993f,	// (0x0002530b) setting_slider_pane_vc_t3

0x0002,

0xfa12,	// (0x0002b3de) setting_slider_pane_vc_t

0x994f,	// (0x0002531b) slider_set_pane_vc

0x4c5b,	// (0x00020627) volume_set_pane_vc_g1

0x4f08,	// (0x000208d4) volume_set_pane_vc_g2

0x4f11,	// (0x000208dd) volume_set_pane_vc_g3

0x4f1a,	// (0x000208e6) volume_set_pane_vc_g4

0x4f23,	// (0x000208ef) volume_set_pane_vc_g5

0x4f2c,	// (0x000208f8) volume_set_pane_vc_g6

0x4c88,	// (0x00020654) volume_set_pane_vc_g7

0x4f35,	// (0x00020901) volume_set_pane_vc_g8

0x4f3e,	// (0x0002090a) volume_set_pane_vc_g9

0x4f47,	// (0x00020913) volume_set_pane_vc_g10

0x0009,

0xfa19,	// (0x0002b3e5) volume_set_pane_vc_g

0x9957,	// (0x00025323) volume_set_pane_vc

0x995f,	// (0x0002532b) button_value_adjust_pane_cp1_vc

0x9969,	// (0x00025335) list_highlight_pane_cp2_vc

0x9972,	// (0x0002533e) list_set_pane_vc_ParamLimits

0x9972,	// (0x0002533e) list_set_pane_vc

0x99d0,	// (0x0002539c) main_pane_set_vc_t1_ParamLimits

0x99d0,	// (0x0002539c) main_pane_set_vc_t1

0x99e5,	// (0x000253b1) main_pane_set_vc_t2_ParamLimits

0x99e5,	// (0x000253b1) main_pane_set_vc_t2

0x99f7,	// (0x000253c3) main_pane_set_vc_t3_ParamLimits

0x99f7,	// (0x000253c3) main_pane_set_vc_t3

0x9a09,	// (0x000253d5) main_pane_set_vc_t4_ParamLimits

0x9a09,	// (0x000253d5) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x0002b3fa) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x0002b3fa) main_pane_set_vc_t

0x9a1b,	// (0x000253e7) setting_code_pane_vc_ParamLimits

0x9a1b,	// (0x000253e7) setting_code_pane_vc

0x9a2a,	// (0x000253f6) setting_slider_graphic_pane_vc

0x9a2a,	// (0x000253f6) setting_slider_pane_vc

0x9a2a,	// (0x000253f6) setting_text_pane_vc

0x9a2a,	// (0x000253f6) setting_volume_pane_vc

0x9a32,	// (0x000253fe) scroll_pane_cp121_vc

0x688c,	// (0x00022258) set_content_pane_vc

0x9a3a,	// (0x00025406) button_value_adjust_pane_g1

0x9a43,	// (0x0002540f) button_value_adjust_pane_g2

0x0001,

0xfa81,	// (0x0002b44d) button_value_adjust_pane_g

0x9a4c,	// (0x00025418) form_field_slider_wide_pane_vc_t1_ParamLimits

0x9a4c,	// (0x00025418) form_field_slider_wide_pane_vc_t1

0x9a60,	// (0x0002542c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x9a60,	// (0x0002542c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa86,	// (0x0002b452) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa86,	// (0x0002b452) form_field_slider_wide_pane_vc_t

0x62d6,	// (0x00021ca2) input_focus_pane_cp10_vc_ParamLimits

0x62d6,	// (0x00021ca2) input_focus_pane_cp10_vc

0x9a8c,	// (0x00025458) slider_cont_pane_cp1_vc_ParamLimits

0x9a8c,	// (0x00025458) slider_cont_pane_cp1_vc

0x9a9c,	// (0x00025468) slider_form_pane_g1_cp2

0x98d2,	// (0x0002529e) slider_form_pane_g2_cp2

0x9ac9,	// (0x00025495) form_field_slider_pane_vc_t3

0x9ad7,	// (0x000254a3) form_field_slider_pane_vc_t4

0x9ae5,	// (0x000254b1) slider_form_pane_vc_ParamLimits

0x9ae5,	// (0x000254b1) slider_form_pane_vc

0x9af2,	// (0x000254be) form_field_slider_pane_vc_t1_ParamLimits

0x9af2,	// (0x000254be) form_field_slider_pane_vc_t1

0x9a60,	// (0x0002542c) form_field_slider_pane_vc_t2_ParamLimits

0x9a60,	// (0x0002542c) form_field_slider_pane_vc_t2

0x0001,

0xfa98,	// (0x0002b464) form_field_slider_pane_vc_t_ParamLimits

0xfa98,	// (0x0002b464) form_field_slider_pane_vc_t

0x62d6,	// (0x00021ca2) input_focus_pane_cp9_vc_ParamLimits

0x62d6,	// (0x00021ca2) input_focus_pane_cp9_vc

0x9b0e,	// (0x000254da) slider_cont_pane_vc_ParamLimits

0x9b0e,	// (0x000254da) slider_cont_pane_vc

0x9b20,	// (0x000254ec) list_form_graphic_pane_cp_vc_ParamLimits

0x9b20,	// (0x000254ec) list_form_graphic_pane_cp_vc

0x7e2d,	// (0x000237f9) form_field_popup_wide_pane_vc_g1

0x9b35,	// (0x00025501) form_field_popup_wide_pane_vc_t1_ParamLimits

0x9b35,	// (0x00025501) form_field_popup_wide_pane_vc_t1

0x68ca,	// (0x00022296) input_focus_pane_cp8_vc_ParamLimits

0x68ca,	// (0x00022296) input_focus_pane_cp8_vc

0x9b7a,	// (0x00025546) list_form_wide_pane_vc_ParamLimits

0x9b7a,	// (0x00025546) list_form_wide_pane_vc

0x9b86,	// (0x00025552) list_form_graphic_pane_vc_g1

0x9b8e,	// (0x0002555a) list_form_graphic_pane_vc_t1_ParamLimits

0x9b8e,	// (0x0002555a) list_form_graphic_pane_vc_t1

0x605b,	// (0x00021a27) list_highlight_pane_cp5_vc_ParamLimits

0x605b,	// (0x00021a27) list_highlight_pane_cp5_vc

0x9baa,	// (0x00025576) list_form_graphic_pane_vc_ParamLimits

0x9baa,	// (0x00025576) list_form_graphic_pane_vc

0x7e2d,	// (0x000237f9) form_field_popup_pane_vc_g1

0x9bc0,	// (0x0002558c) form_field_popup_pane_vc_t1_ParamLimits

0x9bc0,	// (0x0002558c) form_field_popup_pane_vc_t1

0x68ca,	// (0x00022296) input_focus_pane_cp7_vc_ParamLimits

0x68ca,	// (0x00022296) input_focus_pane_cp7_vc

0x9bd7,	// (0x000255a3) list_form_pane_vc_ParamLimits

0x9bd7,	// (0x000255a3) list_form_pane_vc

0x9be3,	// (0x000255af) data_form_pane_vc_t1_ParamLimits

0x9be3,	// (0x000255af) data_form_pane_vc_t1

0x6919,	// (0x000222e5) input_focus_pane_vc_g1

0x6921,	// (0x000222ed) input_focus_pane_vc_g2

0x6929,	// (0x000222f5) input_focus_pane_vc_g3

0x6931,	// (0x000222fd) input_focus_pane_vc_g4

0x6939,	// (0x00022305) input_focus_pane_vc_g5

0x6941,	// (0x0002230d) input_focus_pane_vc_g6

0x6949,	// (0x00022315) input_focus_pane_vc_g7

0x6951,	// (0x0002231d) input_focus_pane_vc_g8

0x6959,	// (0x00022325) input_focus_pane_vc_g9

0x5f71,	// (0x0002193d) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0002b05e) input_focus_pane_vc_g

0x7e21,	// (0x000237ed) data_form_pane_vc_ParamLimits

0x7e21,	// (0x000237ed) data_form_pane_vc

0x7e2d,	// (0x000237f9) form_field_data_pane_vc_g1

0x9bfe,	// (0x000255ca) form_field_data_pane_vc_t1_ParamLimits

0x9bfe,	// (0x000255ca) form_field_data_pane_vc_t1

0x68ca,	// (0x00022296) input_focus_pane_vc_ParamLimits

0x68ca,	// (0x00022296) input_focus_pane_vc

0x9c18,	// (0x000255e4) button_value_adjust_pane_cp3_vc

0x9c20,	// (0x000255ec) button_value_adjust_pane_cp5_vc

0x9c28,	// (0x000255f4) form_field_data_pane_vc_ParamLimits

0x9c28,	// (0x000255f4) form_field_data_pane_vc

0x9c3f,	// (0x0002560b) form_field_data_pane_vc_cp2

0x9c47,	// (0x00025613) form_field_data_wide_pane_vc_ParamLimits

0x9c47,	// (0x00025613) form_field_data_wide_pane_vc

0x9c5d,	// (0x00025629) form_field_data_wide_pane_vc_cp2

0x9c65,	// (0x00025631) form_field_popup_pane_vc_ParamLimits

0x9c65,	// (0x00025631) form_field_popup_pane_vc

0x9c7c,	// (0x00025648) form_field_popup_wide_pane_vc_ParamLimits

0x9c7c,	// (0x00025648) form_field_popup_wide_pane_vc

0x9c92,	// (0x0002565e) form_field_slider_pane_vc_ParamLimits

0x9c92,	// (0x0002565e) form_field_slider_pane_vc

0x9ca5,	// (0x00025671) form_field_slider_wide_pane_vc_ParamLimits

0x9ca5,	// (0x00025671) form_field_slider_wide_pane_vc

0x1183,	// (0x0001cb4f) grid_touch_1_pane_ParamLimits

0x1183,	// (0x0001cb4f) grid_touch_1_pane

0x1197,	// (0x0001cb63) grid_touch_2_pane_ParamLimits

0x1197,	// (0x0001cb63) grid_touch_2_pane

0x9d7a,	// (0x00025746) touch_pane_g1_ParamLimits

0x9d7a,	// (0x00025746) touch_pane_g1

0x9cdc,	// (0x000256a8) cell_app_pane_cp_wide_ParamLimits

0x9cdc,	// (0x000256a8) cell_app_pane_cp_wide

0x9ced,	// (0x000256b9) grid_popup_fast_wide_pane_ParamLimits

0x9ced,	// (0x000256b9) grid_popup_fast_wide_pane

0x9d01,	// (0x000256cd) scroll_pane_cp19_ParamLimits

0x9d01,	// (0x000256cd) scroll_pane_cp19

0x5f7b,	// (0x00021947) bg_popup_window_pane_cp20

0x9d15,	// (0x000256e1) listscroll_popup_fast_wide_pane

0x6a7f,	// (0x0002244b) grid_indicator_nsta_pane

0x9d1d,	// (0x000256e9) clock_nsta_pane_g1

0x9d26,	// (0x000256f2) clock_nsta_pane_t1

0x11c1,	// (0x0001cb8d) cell_indicator_nsta_pane_ParamLimits

0x11c1,	// (0x0001cb8d) cell_indicator_nsta_pane

0x9d7a,	// (0x00025746) cell_indicator_nsta_pane_g1

0x11de,	// (0x0001cbaa) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0002b475) cell_indicator_nsta_pane_g

0x9d9e,	// (0x0002576a) clock_nsta_pane_cp

0x9da6,	// (0x00025772) indicator_nsta_pane_cp

0x9dae,	// (0x0002577a) nsta_clock_indic_pane_g1

0x6124,	// (0x00021af0) grid_indicator_pane

0x6e4a,	// (0x00022816) scroll_pane_cp29

0x4278,	// (0x0001fc44) indicator_nsta_pane_cp2_ParamLimits

0x4278,	// (0x0001fc44) indicator_nsta_pane_cp2

0x605b,	// (0x00021a27) main_apps_wheel_pane

0x8058,	// (0x00023a24) form_midp_field_text_pane_ParamLimits

0x819f,	// (0x00023b6b) scroll_bar_cp050_ParamLimits

0x9e0f,	// (0x000257db) cell_indicator_pane_ParamLimits

0x9e0f,	// (0x000257db) cell_indicator_pane

0x9e2a,	// (0x000257f6) cell_indicator_pane_g1

0x11f4,	// (0x0001cbc0) grid_wheel_folder_pane_ParamLimits

0x11f4,	// (0x0001cbc0) grid_wheel_folder_pane

0x1202,	// (0x0001cbce) list_wheel_apps_pane_ParamLimits

0x1202,	// (0x0001cbce) list_wheel_apps_pane

0x1210,	// (0x0001cbdc) main_apps_wheel_pane_g1_ParamLimits

0x1210,	// (0x0001cbdc) main_apps_wheel_pane_g1

0x121c,	// (0x0001cbe8) main_apps_wheel_pane_g2_ParamLimits

0x121c,	// (0x0001cbe8) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0002b491) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0002b491) main_apps_wheel_pane_g

0x122a,	// (0x0001cbf6) main_apps_wheel_pane_t1_ParamLimits

0x122a,	// (0x0001cbf6) main_apps_wheel_pane_t1

0x123e,	// (0x0001cc0a) list_wheel_apps_pane_g1

0x1246,	// (0x0001cc12) list_wheel_apps_pane_g2

0x124e,	// (0x0001cc1a) list_wheel_apps_pane_g3

0x1256,	// (0x0001cc22) list_wheel_apps_pane_g4

0x1260,	// (0x0001cc2c) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0002b496) list_wheel_apps_pane_g

0x7393,	// (0x00022d5f) navi_icon_text_pane

0x079f,	// (0x0001c16b) aid_fill_nsta

0x9ef1,	// (0x000258bd) navi_icon_text_pane_g1

0x9efd,	// (0x000258c9) navi_icon_text_pane_t1

0x7235,	// (0x00022c01) list_set_graphic_pane_t1_ParamLimits

0x7235,	// (0x00022c01) list_set_graphic_pane_t1

0x88f1,	// (0x000242bd) popup_midp_note_alarm_window_t6_ParamLimits

0x88f1,	// (0x000242bd) popup_midp_note_alarm_window_t6

0x8903,	// (0x000242cf) popup_midp_note_alarm_window_t7_ParamLimits

0x8903,	// (0x000242cf) popup_midp_note_alarm_window_t7

0x8915,	// (0x000242e1) popup_midp_note_alarm_window_t8_ParamLimits

0x8915,	// (0x000242e1) popup_midp_note_alarm_window_t8

0x8927,	// (0x000242f3) popup_midp_note_alarm_window_t9_ParamLimits

0x8927,	// (0x000242f3) popup_midp_note_alarm_window_t9

0x8939,	// (0x00024305) popup_midp_note_alarm_window_t10_ParamLimits

0x8939,	// (0x00024305) popup_midp_note_alarm_window_t10

0x894b,	// (0x00024317) popup_midp_note_alarm_window_t11_ParamLimits

0x894b,	// (0x00024317) popup_midp_note_alarm_window_t11

0x895d,	// (0x00024329) scroll_pane_cp17_ParamLimits

0x895d,	// (0x00024329) scroll_pane_cp17

0x4c5b,	// (0x00020627) volume_small_pane_cp_g1

0x4f50,	// (0x0002091c) volume_small_pane_cp_g2

0x4f59,	// (0x00020925) volume_small_pane_cp_g3

0x4c6d,	// (0x00020639) volume_small_pane_cp_g4

0x4f62,	// (0x0002092e) volume_small_pane_cp_g5

0x4f23,	// (0x000208ef) volume_small_pane_cp_g6

0x4c7f,	// (0x0002064b) volume_small_pane_cp_g7

0x4f6b,	// (0x00020937) volume_small_pane_cp_g8

0x4f74,	// (0x00020940) volume_small_pane_cp_g9

0x4c91,	// (0x0002065d) volume_small_pane_cp_g10

0x75da,	// (0x00022fa6) midp_ticker_pane_g1_ParamLimits

0x75e6,	// (0x00022fb2) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0002b12a) midp_ticker_pane_g_ParamLimits

0x75f2,	// (0x00022fbe) midp_ticker_pane_t1_ParamLimits

0x07c3,	// (0x0001c18f) aid_fill_nsta_2

0x818b,	// (0x00023b57) list_form2_midp_pane

0x92c1,	// (0x00024c8d) midp_editing_number_pane_ParamLimits

0x92d0,	// (0x00024c9c) midp_ticker_pane_ParamLimits

0x9f0f,	// (0x000258db) form2_midp_field_pane

0x9f33,	// (0x000258ff) scroll_pane_cp51

0x9f53,	// (0x0002591f) form2_midp_button_pane_ParamLimits

0x9f53,	// (0x0002591f) form2_midp_button_pane

0x9f65,	// (0x00025931) form2_midp_content_pane_ParamLimits

0x9f65,	// (0x00025931) form2_midp_content_pane

0x9f7f,	// (0x0002594b) form2_midp_field_choice_group_pane

0x9f87,	// (0x00025953) form2_midp_field_pane_g1

0x9f8f,	// (0x0002595b) form2_midp_field_pane_g2

0x9f97,	// (0x00025963) form2_midp_field_pane_g3

0x9f9f,	// (0x0002596b) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0002b4bb) form2_midp_field_pane_g

0x9fa7,	// (0x00025973) form2_midp_gauge_slider_pane

0x9faf,	// (0x0002597b) form2_midp_gauge_wait_pane

0x9fb7,	// (0x00025983) form2_midp_image_pane_ParamLimits

0x9fb7,	// (0x00025983) form2_midp_image_pane

0x9fd2,	// (0x0002599e) form2_midp_label_pane_ParamLimits

0x9fd2,	// (0x0002599e) form2_midp_label_pane

0x1293,	// (0x0001cc5f) form2_midp_label_pane_cp_ParamLimits

0x1293,	// (0x0001cc5f) form2_midp_label_pane_cp

0xa00c,	// (0x000259d8) form2_midp_string_pane_ParamLimits

0xa00c,	// (0x000259d8) form2_midp_string_pane

0x3765,	// (0x0001f131) form2_midp_text_pane_ParamLimits

0x3765,	// (0x0001f131) form2_midp_text_pane

0xa01e,	// (0x000259ea) form2_midp_time_pane

0xa02e,	// (0x000259fa) input_focus_pane_cp51_ParamLimits

0xa02e,	// (0x000259fa) input_focus_pane_cp51

0xa046,	// (0x00025a12) form2_midp_label_pane_t1_ParamLimits

0xa046,	// (0x00025a12) form2_midp_label_pane_t1

0x377e,	// (0x0001f14a) form2_mdip_text_pane_t1_ParamLimits

0x377e,	// (0x0001f14a) form2_mdip_text_pane_t1

0x379c,	// (0x0001f168) form2_midp_time_pane_t1

0xa08e,	// (0x00025a5a) form2_midp_gauge_slider_pane_t1

0x12b4,	// (0x0001cc80) form2_midp_gauge_slider_pane_t2

0x12c8,	// (0x0001cc94) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0002b4c4) form2_midp_gauge_slider_pane_t

0xa0c4,	// (0x00025a90) form2_midp_slider_pane

0xa0d0,	// (0x00025a9c) form2_midp_gauge_wait_pane_t1

0xa0de,	// (0x00025aaa) form2_midp_wait_pane_ParamLimits

0xa0de,	// (0x00025aaa) form2_midp_wait_pane

0x12dc,	// (0x0001cca8) list_single_2graphic_pane_cp4_ParamLimits

0x12dc,	// (0x0001cca8) list_single_2graphic_pane_cp4

0x0bdb,	// (0x0001c5a7) list_single_midp_graphic_pane_cp_ParamLimits

0x0bdb,	// (0x0001c5a7) list_single_midp_graphic_pane_cp

0x5f7b,	// (0x00021947) list_highlight_pane_cp20

0xa138,	// (0x00025b04) list_single_2graphic_pane_g1_cp4

0x971b,	// (0x000250e7) list_single_2graphic_pane_g2_cp4

0xa140,	// (0x00025b0c) list_single_2graphic_pane_t1_cp4

0x605b,	// (0x00021a27) list_highlight_pane_cp21

0xa14f,	// (0x00025b1b) list_single_midp_graphic_pane_g4_cp

0xa15e,	// (0x00025b2a) list_single_midp_graphic_pane_t1_cp

0x12f2,	// (0x0001ccbe) form2_mdip_string_pane_t1_ParamLimits

0x12f2,	// (0x0001ccbe) form2_mdip_string_pane_t1

0x5f7b,	// (0x00021947) bg_wml_button_pane_cp2

0x5f71,	// (0x0002193d) form2_midp_image_pane_g1

0x2d0d,	// (0x0001e6d9) list_double_large_graphic_pane_g5_ParamLimits

0x2d0d,	// (0x0001e6d9) list_double_large_graphic_pane_g5

0x7843,	// (0x0002320f) midp_form_pane_ParamLimits

0x605b,	// (0x00021a27) main_apps_wheel_pane_ParamLimits

0xc889,	// (0x00028255) popup_preview_window_ParamLimits

0xc889,	// (0x00028255) popup_preview_window

0x4ada,	// (0x000204a6) popup_touch_info_window_ParamLimits

0x4ada,	// (0x000204a6) popup_touch_info_window

0x4af8,	// (0x000204c4) popup_touch_menu_window_ParamLimits

0x4af8,	// (0x000204c4) popup_touch_menu_window

0x5f67,	// (0x00021933) bg_popup_sub_pane_cp6

0xa296,	// (0x00025c62) list_touch_menu_pane

0xa29e,	// (0x00025c6a) list_single_touch_menu_pane_ParamLimits

0xa29e,	// (0x00025c6a) list_single_touch_menu_pane

0xa2b2,	// (0x00025c7e) list_single_touch_menu_pane_t1

0x605b,	// (0x00021a27) bg_popup_sub_pane_cp7_ParamLimits

0x605b,	// (0x00021a27) bg_popup_sub_pane_cp7

0xa2c0,	// (0x00025c8c) heading_sub_pane

0xa2c8,	// (0x00025c94) list_touch_info_pane_ParamLimits

0xa2c8,	// (0x00025c94) list_touch_info_pane

0xa2d7,	// (0x00025ca3) list_single_touch_info_pane_ParamLimits

0xa2d7,	// (0x00025ca3) list_single_touch_info_pane

0xa2e9,	// (0x00025cb5) list_single_touch_info_pane_t1

0xa2f7,	// (0x00025cc3) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0002b4d2) list_single_touch_info_pane_t

0x7507,	// (0x00022ed3) bg_popup_heading_pane_cp

0xa305,	// (0x00025cd1) heading_sub_pane_t1

0x7dbb,	// (0x00023787) bg_popup_preview_window_pane_cp_ParamLimits

0x7dbb,	// (0x00023787) bg_popup_preview_window_pane_cp

0xa2c0,	// (0x00025c8c) heading_preview_pane

0xa2c8,	// (0x00025c94) list_preview_pane_ParamLimits

0xa2c8,	// (0x00025c94) list_preview_pane

0xa313,	// (0x00025cdf) popup_preview_window_g1

0xa2d7,	// (0x00025ca3) list_single_preview_pane_ParamLimits

0xa2d7,	// (0x00025ca3) list_single_preview_pane

0xa31b,	// (0x00025ce7) list_single_preview_pane_g1

0xa323,	// (0x00025cef) list_single_preview_pane_t1

0xa2e9,	// (0x00025cb5) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0002b4d7) list_single_preview_pane_t

0xa331,	// (0x00025cfd) bg_popup_heading_pane_cp2_ParamLimits

0xa331,	// (0x00025cfd) bg_popup_heading_pane_cp2

0xa347,	// (0x00025d13) heading_preview_pane_g1

0xa34f,	// (0x00025d1b) heading_preview_pane_t1_ParamLimits

0xa34f,	// (0x00025d1b) heading_preview_pane_t1

0x6147,	// (0x00021b13) soft_indicator_pane_t1_ParamLimits

0x6825,	// (0x000221f1) scroll_pane_ParamLimits

0x6d43,	// (0x0002270f) scroll_sc2_left_pane

0x6d4c,	// (0x00022718) scroll_sc2_right_pane

0x6d6b,	// (0x00022737) scroll_bg_pane_g1_ParamLimits

0x6d80,	// (0x0002274c) scroll_bg_pane_g2_ParamLimits

0x6d98,	// (0x00022764) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0002b0b5) scroll_bg_pane_g_ParamLimits

0x6d6b,	// (0x00022737) scroll_handle_pane_g1_ParamLimits

0x6dba,	// (0x00022786) scroll_handle_pane_g2_ParamLimits

0x6d98,	// (0x00022764) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0002b0bc) scroll_handle_pane_g_ParamLimits

0x45aa,	// (0x0001ff76) popup_choice_list_window_ParamLimits

0x45aa,	// (0x0001ff76) popup_choice_list_window

0x7c91,	// (0x0002365d) choice_list_pane

0x7d13,	// (0x000236df) cell_toolbar_pane_t1

0x7d3b,	// (0x00023707) toolbar_button_pane_ParamLimits

0x8e17,	// (0x000247e3) ai_gene_pane_1_t2_ParamLimits

0x8e17,	// (0x000247e3) ai_gene_pane_1_t2

0x0001,

0xf90c,	// (0x0002b2d8) ai_gene_pane_1_t_ParamLimits

0xf90c,	// (0x0002b2d8) ai_gene_pane_1_t

0xa36c,	// (0x00025d38) scroll_sc2_left_pane_g1

0xa36c,	// (0x00025d38) scroll_sc2_right_pane_g1

0x7843,	// (0x0002320f) bg_popup_sub_pane_cp10

0xa376,	// (0x00025d42) list_choice_list_pane

0xa38f,	// (0x00025d5b) list_single_choice_list_pane_ParamLimits

0xa38f,	// (0x00025d5b) list_single_choice_list_pane

0xa3a2,	// (0x00025d6e) list_single_choice_list_pane_g1

0x6a50,	// (0x0002241c) list_single_choice_list_pane_t1_ParamLimits

0x6a50,	// (0x0002241c) list_single_choice_list_pane_t1

0xa3aa,	// (0x00025d76) choice_list_pane_g1

0xa3b2,	// (0x00025d7e) choice_list_pane_t1

0x5f67,	// (0x00021933) input_focus_pane_cp11

0x6c24,	// (0x000225f0) title_pane_stacon_g2_ParamLimits

0x6c24,	// (0x000225f0) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0002b09b) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002b09b) title_pane_stacon_g

0x7507,	// (0x00022ed3) cursor_press_pane

0xc542,	// (0x00027f0e) popup_fep_hwr_window_ParamLimits

0xc542,	// (0x00027f0e) popup_fep_hwr_window

0x46ca,	// (0x00020096) popup_fep_vkb_window_ParamLimits

0x46ca,	// (0x00020096) popup_fep_vkb_window

0xa3c0,	// (0x00025d8c) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0002b500) fep_vkb_side_pane_g_ParamLimits

0x4fb6,	// (0x00020982) fep_hwr_candidate_pane_ParamLimits

0x4fb6,	// (0x00020982) fep_hwr_candidate_pane

0x4fe0,	// (0x000209ac) fep_hwr_side_pane_ParamLimits

0x4fe0,	// (0x000209ac) fep_hwr_side_pane

0x5000,	// (0x000209cc) fep_hwr_top_pane_ParamLimits

0x5000,	// (0x000209cc) fep_hwr_top_pane

0x5018,	// (0x000209e4) fep_hwr_write_pane_ParamLimits

0x5018,	// (0x000209e4) fep_hwr_write_pane

0xfb34,	// (0x0002b500) fep_vkb_side_pane_g

0xa3c8,	// (0x00025d94) fep_hwr_top_pane_g1

0xa3da,	// (0x00025da6) fep_hwr_top_pane_g2

0x5044,	// (0x00020a10) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0002b4dc) fep_hwr_top_pane_g

0x5059,	// (0x00020a25) fep_hwr_top_text_pane

0x6f10,	// (0x000228dc) fep_hwr_top_text_pane_g1

0xa410,	// (0x00025ddc) fep_hwr_top_text_pane_t1

0x514f,	// (0x00020b1b) fep_hwr_candidate_pane_g1

0xa653,	// (0x0002601f) fep_vkb_keypad_pane_g3_ParamLimits

0xa653,	// (0x0002601f) fep_vkb_keypad_pane_g3

0xa67b,	// (0x00026047) fep_vkb_keypad_pane_g4_ParamLimits

0xa67b,	// (0x00026047) fep_vkb_keypad_pane_g4

0xa6ea,	// (0x000260b6) fep_vkb_bottom_pane_g2_ParamLimits

0xa6ea,	// (0x000260b6) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0002b507) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0002b507) fep_vkb_bottom_pane_g

0xa36c,	// (0x00025d38) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0002b511) cell_vkb_side_pane_g

0xa775,	// (0x00026141) cell_vkb_side_pane_t1

0xa783,	// (0x0002614f) cell_vkb_side_pane_t1_copy1

0xa36c,	// (0x00025d38) bg_fep_vkb_candidate_pane_g2

0xa8af,	// (0x0002627b) cell_vkb_candidate_pane_ParamLimits

0xa41e,	// (0x00025dea) aid_size_cell_vkb_ParamLimits

0xa41e,	// (0x00025dea) aid_size_cell_vkb

0xa8af,	// (0x0002627b) cell_vkb_candidate_pane

0x5169,	// (0x00020b35) bg_popup_fep_shadow_pane_g1

0x1382,	// (0x0001cd4e) fep_vkb_bottom_pane_ParamLimits

0x1382,	// (0x0001cd4e) fep_vkb_bottom_pane

0xa4e0,	// (0x00025eac) fep_vkb_candidate_pane_ParamLimits

0xa4e0,	// (0x00025eac) fep_vkb_candidate_pane

0x13a7,	// (0x0001cd73) fep_vkb_keypad_pane_ParamLimits

0x13a7,	// (0x0001cd73) fep_vkb_keypad_pane

0x13dc,	// (0x0001cda8) fep_vkb_side_pane_ParamLimits

0x13dc,	// (0x0001cda8) fep_vkb_side_pane

0x1418,	// (0x0001cde4) fep_vkb_top_pane_ParamLimits

0x1418,	// (0x0001cde4) fep_vkb_top_pane

0xa5ac,	// (0x00025f78) fep_vkb_top_pane_g1_ParamLimits

0xa5ac,	// (0x00025f78) fep_vkb_top_pane_g1

0xa5bb,	// (0x00025f87) fep_vkb_top_pane_g2_ParamLimits

0xa5bb,	// (0x00025f87) fep_vkb_top_pane_g2

0xa5ca,	// (0x00025f96) fep_vkb_top_pane_g3_ParamLimits

0xa5ca,	// (0x00025f96) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0002b4f7) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0002b4f7) fep_vkb_top_pane_g

0xa5e8,	// (0x00025fb4) fep_vkb_top_text_pane_ParamLimits

0xa5e8,	// (0x00025fb4) fep_vkb_top_text_pane

0x144d,	// (0x0001ce19) fep_vkb_side_pane_g1_ParamLimits

0x144d,	// (0x0001ce19) fep_vkb_side_pane_g1

0xa642,	// (0x0002600e) grid_vkb_side_pane_ParamLimits

0xa642,	// (0x0002600e) grid_vkb_side_pane

0x5171,	// (0x00020b3d) bg_popup_fep_shadow_pane_g2

0x517a,	// (0x00020b46) bg_popup_fep_shadow_pane_g3

0x5182,	// (0x00020b4e) bg_popup_fep_shadow_pane_g4

0x518b,	// (0x00020b57) bg_popup_fep_shadow_pane_g5

0x5195,	// (0x00020b61) bg_popup_fep_shadow_pane_g6

0x519d,	// (0x00020b69) bg_popup_fep_shadow_pane_g7

0x6939,	// (0x00022305) bg_popup_fep_shadow_pane_g8

0xa699,	// (0x00026065) grid_vkb_keypad_number_pane_ParamLimits

0xa699,	// (0x00026065) grid_vkb_keypad_number_pane

0xa6a9,	// (0x00026075) grid_vkb_keypad_pane_ParamLimits

0xa6a9,	// (0x00026075) grid_vkb_keypad_pane

0xa6cf,	// (0x0002609b) fep_vkb_bottom_pane_g1_ParamLimits

0xa6cf,	// (0x0002609b) fep_vkb_bottom_pane_g1

0xa6f8,	// (0x000260c4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xa6f8,	// (0x000260c4) grid_vkb_keypad_bottom_left_pane

0xa70d,	// (0x000260d9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xa70d,	// (0x000260d9) grid_vkb_keypad_bottom_right_pane

0xa722,	// (0x000260ee) fep_vkb_top_text_pane_g1

0x1494,	// (0x0001ce60) fep_vkb_top_text_pane_t1

0x14a6,	// (0x0001ce72) cell_vkb_side_pane_ParamLimits

0x14a6,	// (0x0001ce72) cell_vkb_side_pane

0xa36c,	// (0x00025d38) cell_vkb_side_pane_g1

0xa791,	// (0x0002615d) cell_vkb_keypad_pane_ParamLimits

0xa791,	// (0x0002615d) cell_vkb_keypad_pane

0xa806,	// (0x000261d2) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0002b524) bg_popup_fep_shadow_pane_g

0xa36c,	// (0x00025d38) cell_hwr_side_pane_g1

0xa36c,	// (0x00025d38) cell_hwr_side_pane_g2

0xa810,	// (0x000261dc) cell_vkb_keypad_pane_t1

0x14bc,	// (0x0001ce88) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x14bc,	// (0x0001ce88) cell_vkb_keypad_bottom_left_pane

0x14d1,	// (0x0001ce9d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x14d1,	// (0x0001ce9d) cell_vkb_keypad_bottom_right_pane

0xa36c,	// (0x00025d38) cell_vkb_keypad_bottom_left_pane_g1

0xa36c,	// (0x00025d38) cell_vkb_keypad_bottom_right_pane_g1

0xa874,	// (0x00026240) cell_vkb_keypad_number_pane_ParamLimits

0xa874,	// (0x00026240) cell_vkb_keypad_number_pane

0xa893,	// (0x0002625f) cell_vkb_keypad_number_pane_g1

0xa89d,	// (0x00026269) cell_vkb_keypad_number_pane_g2

0xa8a6,	// (0x00026272) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0002b516) cell_vkb_keypad_number_pane_g

0xa810,	// (0x000261dc) cell_vkb_keypad_number_pane_t1

0xa8ca,	// (0x00026296) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x0002b511) cell_hwr_side_pane_g

0xa8e3,	// (0x000262af) cell_hwr_side_pane_t1

0x51af,	// (0x00020b7b) cell_hwr_side_pane_t1_copy1

0xa5da,	// (0x00025fa6) cell_hwr_candidate_pane_g1

0x51bd,	// (0x00020b89) cell_hwr_candidate_pane_t1

0xa36c,	// (0x00025d38) cell_vkb_candidate_pane_g2

0xa927,	// (0x000262f3) cell_vkb_candidate_pane_t1

0x4f7d,	// (0x00020949) bg_popup_fep_shadow_pane_ParamLimits

0x4f7d,	// (0x00020949) bg_popup_fep_shadow_pane

0xe4ab,	// (0x00029e77) bg_fep_hwr_top_pane_g4

0xa3ec,	// (0x00025db8) bg_hwr_side_pane_g1_ParamLimits

0xa3ec,	// (0x00025db8) bg_hwr_side_pane_g1

0xccf9,	// (0x000286c5) cell_hwr_side_pane_ParamLimits

0xccf9,	// (0x000286c5) cell_hwr_side_pane

0x50d0,	// (0x00020a9c) fep_hwr_write_pane_g1_ParamLimits

0x50d0,	// (0x00020a9c) fep_hwr_write_pane_g1

0x50dd,	// (0x00020aa9) fep_hwr_write_pane_g2_ParamLimits

0x50dd,	// (0x00020aa9) fep_hwr_write_pane_g2

0x50ea,	// (0x00020ab6) fep_hwr_write_pane_g3_ParamLimits

0x50ea,	// (0x00020ab6) fep_hwr_write_pane_g3

0xcd19,	// (0x000286e5) fep_hwr_write_pane_g4_ParamLimits

0xcd19,	// (0x000286e5) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0002b4e3) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0002b4e3) fep_hwr_write_pane_g

0xe4ab,	// (0x00029e77) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe4ab,	// (0x00029e77) bg_fep_hwr_candidate_pane_g2

0x510d,	// (0x00020ad9) cell_hwr_candidate_pane_ParamLimits

0x510d,	// (0x00020ad9) cell_hwr_candidate_pane

0x514f,	// (0x00020b1b) fep_hwr_candidate_pane_g1_ParamLimits

0xa44c,	// (0x00025e18) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xa44c,	// (0x00025e18) bg_popup_fep_shadow_pane_cp2

0xa5da,	// (0x00025fa6) fep_vkb_top_pane_g4_ParamLimits

0xa5da,	// (0x00025fa6) fep_vkb_top_pane_g4

0xa620,	// (0x00025fec) fep_vkb_side_pane_g2_ParamLimits

0xa620,	// (0x00025fec) fep_vkb_side_pane_g2

0xbc4f,	// (0x0002761b) list_setting_pane_t4_ParamLimits

0xbc4f,	// (0x0002761b) list_setting_pane_t4

0xbcd1,	// (0x0002769d) list_setting_number_pane_t5_ParamLimits

0xbcd1,	// (0x0002769d) list_setting_number_pane_t5

0x052a,	// (0x0001bef6) list_double_heading_pane_cp2_ParamLimits

0x052a,	// (0x0001bef6) list_double_heading_pane_cp2

0x68a6,	// (0x00022272) list_double_heading_pane_g1_cp2_ParamLimits

0x68a6,	// (0x00022272) list_double_heading_pane_g1_cp2

0x68d8,	// (0x000222a4) list_double_heading_pane_g2_cp2_ParamLimits

0x68d8,	// (0x000222a4) list_double_heading_pane_g2_cp2

0xa935,	// (0x00026301) list_double_heading_pane_t1_cp2_ParamLimits

0xa935,	// (0x00026301) list_double_heading_pane_t1_cp2

0xa94b,	// (0x00026317) list_double_heading_pane_t2_cp2_ParamLimits

0xa94b,	// (0x00026317) list_double_heading_pane_t2_cp2

0x5f4f,	// (0x0002191b) aid_value_unit2

0x3e19,	// (0x0001f7e5) popup_preview_fixed_window

0x62e4,	// (0x00021cb0) bg_popup_preview_window_pane_cp02

0xa95d,	// (0x00026329) list_preview_fixed_pane

0xa9a3,	// (0x0002636f) list_empty_pane_fp_ParamLimits

0xa9a3,	// (0x0002636f) list_empty_pane_fp

0xa9a3,	// (0x0002636f) list_single_cale_day_pane_fp_ParamLimits

0xa9a3,	// (0x0002636f) list_single_cale_day_pane_fp

0xa9a3,	// (0x0002636f) list_single_graphic_heading_pane_fp_ParamLimits

0xa9a3,	// (0x0002636f) list_single_graphic_heading_pane_fp

0xa9a3,	// (0x0002636f) list_single_graphic_pane_fp_ParamLimits

0xa9a3,	// (0x0002636f) list_single_graphic_pane_fp

0xa9a3,	// (0x0002636f) list_single_heading_pane_fp_ParamLimits

0xa9a3,	// (0x0002636f) list_single_heading_pane_fp

0xa9a3,	// (0x0002636f) list_single_pane_fp_ParamLimits

0xa9a3,	// (0x0002636f) list_single_pane_fp

0xa9b9,	// (0x00026385) list_single_pane_fp_g1_ParamLimits

0xa9b9,	// (0x00026385) list_single_pane_fp_g1

0x2b70,	// (0x0001e53c) list_single_pane_fp_g2_ParamLimits

0x2b70,	// (0x0001e53c) list_single_pane_fp_g2

0x37af,	// (0x0001f17b) list_single_pane_fp_g3_ParamLimits

0x37af,	// (0x0001f17b) list_single_pane_fp_g3

0xa9c5,	// (0x00026391) list_single_pane_fp_g4_ParamLimits

0xa9c5,	// (0x00026391) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x0002b545) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x0002b545) list_single_pane_fp_g

0x37c3,	// (0x0001f18f) list_single_pane_fp_t1_ParamLimits

0x37c3,	// (0x0001f18f) list_single_pane_fp_t1

0x37da,	// (0x0001f1a6) list_single_graphic_pane_fp_g1_ParamLimits

0x37da,	// (0x0001f1a6) list_single_graphic_pane_fp_g1

0xa9b9,	// (0x00026385) list_single_graphic_pane_fp_g2_ParamLimits

0xa9b9,	// (0x00026385) list_single_graphic_pane_fp_g2

0x2b70,	// (0x0001e53c) list_single_graphic_pane_fp_g3_ParamLimits

0x2b70,	// (0x0001e53c) list_single_graphic_pane_fp_g3

0x37af,	// (0x0001f17b) list_single_graphic_pane_fp_g4_ParamLimits

0x37af,	// (0x0001f17b) list_single_graphic_pane_fp_g4

0xa9c5,	// (0x00026391) list_single_graphic_pane_fp_g5_ParamLimits

0xa9c5,	// (0x00026391) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x0002b54e) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x0002b54e) list_single_graphic_pane_fp_g

0x37e6,	// (0x0001f1b2) list_single_graphic_pane_fp_t1_ParamLimits

0x37e6,	// (0x0001f1b2) list_single_graphic_pane_fp_t1

0x37da,	// (0x0001f1a6) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x37da,	// (0x0001f1a6) list_single_graphic_heading_pane_fp_g1

0xa9b9,	// (0x00026385) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xa9b9,	// (0x00026385) list_single_graphic_heading_pane_fp_g2

0x2b70,	// (0x0001e53c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2b70,	// (0x0001e53c) list_single_graphic_heading_pane_fp_g3

0x37af,	// (0x0001f17b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x37af,	// (0x0001f17b) list_single_graphic_heading_pane_fp_g4

0xa9c5,	// (0x00026391) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xa9c5,	// (0x00026391) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002b54e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002b54e) list_single_graphic_heading_pane_fp_g

0x37fc,	// (0x0001f1c8) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x37fc,	// (0x0001f1c8) list_single_graphic_heading_pane_fp_t1

0x3812,	// (0x0001f1de) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3812,	// (0x0001f1de) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x0002b559) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x0002b559) list_single_graphic_heading_pane_fp_t

0x3824,	// (0x0001f1f0) list_single_cale_day_pane_fp_g1_ParamLimits

0x3824,	// (0x0001f1f0) list_single_cale_day_pane_fp_g1

0xa9d1,	// (0x0002639d) list_single_cale_day_pane_fp_g2_ParamLimits

0xa9d1,	// (0x0002639d) list_single_cale_day_pane_fp_g2

0x385c,	// (0x0001f228) list_single_cale_day_pane_fp_g3_ParamLimits

0x385c,	// (0x0001f228) list_single_cale_day_pane_fp_g3

0x3884,	// (0x0001f250) list_single_cale_day_pane_fp_g4_ParamLimits

0x3884,	// (0x0001f250) list_single_cale_day_pane_fp_g4

0x38a8,	// (0x0001f274) list_single_cale_day_pane_fp_g5_ParamLimits

0x38a8,	// (0x0001f274) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x0002b55e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x0002b55e) list_single_cale_day_pane_fp_g

0x38cc,	// (0x0001f298) list_single_cale_day_pane_fp_t1_ParamLimits

0x38cc,	// (0x0001f298) list_single_cale_day_pane_fp_t1

0x38f2,	// (0x0001f2be) list_single_cale_day_pane_fp_t2_ParamLimits

0x38f2,	// (0x0001f2be) list_single_cale_day_pane_fp_t2

0x390b,	// (0x0001f2d7) list_single_cale_day_pane_fp_t3_ParamLimits

0x390b,	// (0x0001f2d7) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x0002b569) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x0002b569) list_single_cale_day_pane_fp_t

0xa9b9,	// (0x00026385) list_empty_pane_fp_g1_ParamLimits

0xa9b9,	// (0x00026385) list_empty_pane_fp_g1

0x3924,	// (0x0001f2f0) list_empty_pane_fp_t1

0x3932,	// (0x0001f2fe) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x0002b570) list_empty_pane_fp_t

0xa9b9,	// (0x00026385) list_single_heading_pane_fp_g1_ParamLimits

0xa9b9,	// (0x00026385) list_single_heading_pane_fp_g1

0x2b70,	// (0x0001e53c) list_single_heading_pane_fp_g2_ParamLimits

0x2b70,	// (0x0001e53c) list_single_heading_pane_fp_g2

0x37af,	// (0x0001f17b) list_single_heading_pane_fp_g3_ParamLimits

0x37af,	// (0x0001f17b) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x0002b575) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0002b575) list_single_heading_pane_fp_g

0x3940,	// (0x0001f30c) list_single_heading_pane_fp_t1_ParamLimits

0x3940,	// (0x0001f30c) list_single_heading_pane_fp_t1

0x3952,	// (0x0001f31e) list_single_heading_pane_fp_t2_ParamLimits

0x3952,	// (0x0001f31e) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x0002b57c) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x0002b57c) list_single_heading_pane_fp_t

0x6abe,	// (0x0002248a) aid_size_cell_fast

0x6254,	// (0x00021c20) soft_indicator_pane_cp1_t1

0x6af8,	// (0x000224c4) cell_app_pane_cp2_ParamLimits

0x6af8,	// (0x000224c4) cell_app_pane_cp2

0x4f9f,	// (0x0002096b) fep_hwr_candidate_drop_down_list_pane

0xe4b9,	// (0x00029e85) fep_hwr_candidate_pane_g3_ParamLimits

0xe4b9,	// (0x00029e85) fep_hwr_candidate_pane_g3

0xe4c6,	// (0x00029e92) fep_hwr_candidate_pane_g4_ParamLimits

0xe4c6,	// (0x00029e92) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0002b4f0) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0002b4f0) fep_hwr_candidate_pane_g

0xa4cf,	// (0x00025e9b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xa4cf,	// (0x00025e9b) fep_vkb_candidate_drop_down_list_pane

0xa8d2,	// (0x0002629e) fep_vkb_candidate_pane_g3

0xa8da,	// (0x000262a6) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0002b51d) fep_vkb_candidate_pane_g

0xa5da,	// (0x00025fa6) cell_hwr_candidate_pane_g1_ParamLimits

0xaa85,	// (0x00026451) cell_hwr_candidate_pane_g3_ParamLimits

0xaa85,	// (0x00026451) cell_hwr_candidate_pane_g3

0xaaa6,	// (0x00026472) cell_hwr_candidate_pane_g4_ParamLimits

0xaaa6,	// (0x00026472) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x0002b537) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x0002b537) cell_hwr_candidate_pane_g

0xa8f1,	// (0x000262bd) cell_vkb_candidate_pane_g3_ParamLimits

0xa8f1,	// (0x000262bd) cell_vkb_candidate_pane_g3

0xa90c,	// (0x000262d8) cell_vkb_candidate_pane_g4_ParamLimits

0xa90c,	// (0x000262d8) cell_vkb_candidate_pane_g4

0xa9dd,	// (0x000263a9) cell_app_pane_cp2_g1_ParamLimits

0xa9dd,	// (0x000263a9) cell_app_pane_cp2_g1

0xa9fb,	// (0x000263c7) cell_app_pane_cp2_g2_ParamLimits

0xa9fb,	// (0x000263c7) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x0002b581) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x0002b581) cell_app_pane_cp2_g

0xaa07,	// (0x000263d3) cell_app_pane_cp2_t1_ParamLimits

0xaa07,	// (0x000263d3) cell_app_pane_cp2_t1

0x68ca,	// (0x00022296) grid_highlight_pane_cp1_ParamLimits

0x68ca,	// (0x00022296) grid_highlight_pane_cp1

0x51db,	// (0x00020ba7) cell_hwr_candidate_pane_cp1_ParamLimits

0x51db,	// (0x00020ba7) cell_hwr_candidate_pane_cp1

0xa5da,	// (0x00025fa6) fep_hwr_candidate_drop_down_list_pane_g1

0xaa39,	// (0x00026405) fep_hwr_candidate_drop_down_list_pane_g2

0xaa46,	// (0x00026412) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002b586) fep_hwr_candidate_drop_down_list_pane_g

0x51fa,	// (0x00020bc6) fep_hwr_candidate_drop_down_list_scroll_pane

0x5203,	// (0x00020bcf) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5203,	// (0x00020bcf) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5210,	// (0x00020bdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5210,	// (0x00020bdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x521d,	// (0x00020be9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x521d,	// (0x00020be9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xa8f1,	// (0x000262bd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xa8f1,	// (0x000262bd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xa90c,	// (0x000262d8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xa90c,	// (0x000262d8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x522a,	// (0x00020bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x522a,	// (0x00020bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5245,	// (0x00020c11) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5245,	// (0x00020c11) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5260,	// (0x00020c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5260,	// (0x00020c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x0002b58d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x0002b58d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xaa19,	// (0x000263e5) cell_vkb_candidate_pane_cp1_ParamLimits

0xaa19,	// (0x000263e5) cell_vkb_candidate_pane_cp1

0xa5da,	// (0x00025fa6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xa5da,	// (0x00025fa6) fep_vkb_candidate_drop_down_list_pane_g1

0xaa39,	// (0x00026405) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xaa39,	// (0x00026405) fep_vkb_candidate_drop_down_list_pane_g2

0xaa46,	// (0x00026412) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xaa46,	// (0x00026412) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002b586) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x0002b586) fep_vkb_candidate_drop_down_list_pane_g

0xaa53,	// (0x0002641f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xaa53,	// (0x0002641f) fep_vkb_candidate_drop_down_list_scroll_pane

0xaa60,	// (0x0002642c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xaa60,	// (0x0002642c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xaa6d,	// (0x00026439) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xaa6d,	// (0x00026439) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xaa79,	// (0x00026445) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xaa79,	// (0x00026445) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xaa85,	// (0x00026451) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xaa85,	// (0x00026451) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xaaa6,	// (0x00026472) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xaaa6,	// (0x00026472) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xaac7,	// (0x00026493) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xaac7,	// (0x00026493) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xaae8,	// (0x000264b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xaae8,	// (0x000264b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xab09,	// (0x000264d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xab09,	// (0x000264d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x0002b59e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x0002b59e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xf125,	// (0x0002aaf1) title_pane_g1_ParamLimits

0xf218,	// (0x0002abe4) title_pane_g2_ParamLimits

0xf554,	// (0x0002af20) title_pane_g_ParamLimits

0x6f00,	// (0x000228cc) aid_call2_pane

0x6f08,	// (0x000228d4) aid_call_pane

0x6f10,	// (0x000228dc) popup_clock_analogue_window_g1

0x6f10,	// (0x000228dc) popup_clock_analogue_window_g2

0x4182,	// (0x0001fb4e) popup_clock_analogue_window_g3

0x418b,	// (0x0001fb57) popup_clock_analogue_window_g4

0x5f71,	// (0x0002193d) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0002b0ca) popup_clock_analogue_window_g

0x4193,	// (0x0001fb5f) popup_clock_analogue_window_t1

0x41a1,	// (0x0001fb6d) clock_digital_number_pane_ParamLimits

0x41a1,	// (0x0001fb6d) clock_digital_number_pane

0x41ad,	// (0x0001fb79) clock_digital_number_pane_cp02_ParamLimits

0x41ad,	// (0x0001fb79) clock_digital_number_pane_cp02

0x41b9,	// (0x0001fb85) clock_digital_number_pane_cp03_ParamLimits

0x41b9,	// (0x0001fb85) clock_digital_number_pane_cp03

0x41c5,	// (0x0001fb91) clock_digital_number_pane_cp04_ParamLimits

0x41c5,	// (0x0001fb91) clock_digital_number_pane_cp04

0x41d1,	// (0x0001fb9d) clock_digital_separator_pane_ParamLimits

0x41d1,	// (0x0001fb9d) clock_digital_separator_pane

0x41dd,	// (0x0001fba9) popup_clock_digital_window_t1_ParamLimits

0x41dd,	// (0x0001fba9) popup_clock_digital_window_t1

0x5f71,	// (0x0002193d) clock_digital_number_pane_g1

0x5f71,	// (0x0002193d) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0002b0d5) clock_digital_number_pane_g

0x5f71,	// (0x0002193d) clock_digital_separator_pane_g1

0x5f71,	// (0x0002193d) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0002b0d5) clock_digital_separator_pane_g

0x079f,	// (0x0001c16b) aid_fill_nsta_ParamLimits

0x08d5,	// (0x0001c2a1) indicator_nsta_pane_ParamLimits

0x7b1e,	// (0x000234ea) popup_clock_analogue_window

0x7b1e,	// (0x000234ea) popup_clock_digital_window

0x6a7f,	// (0x0002244b) grid_indicator_nsta_pane_ParamLimits

0x9d34,	// (0x00025700) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0002b470) clock_nsta_pane_t

0x4146,	// (0x0001fb12) aid_size_max_handle

0x4150,	// (0x0001fb1c) aid_size_min_handle

0x7507,	// (0x00022ed3) editor_scroll_pane

0xab24,	// (0x000264f0) ex_editor_pane

0x6a2c,	// (0x000223f8) scroll_pane_cp13

0x6851,	// (0x0002221d) scroll_pane_cp14

0x6f3f,	// (0x0002290b) scroll_pane_cp36

0x053b,	// (0x0001bf07) list_single_graphic_hl_pane_cp2_ParamLimits

0x053b,	// (0x0001bf07) list_single_graphic_hl_pane_cp2

0xbf6e,	// (0x0002793a) list_single_graphic_hl_pane_ParamLimits

0xbf6e,	// (0x0002793a) list_single_graphic_hl_pane

0x3968,	// (0x0001f334) aid_size_min_hl_cp1

0xab2c,	// (0x000264f8) list_highlight_pane_cp34_ParamLimits

0xab2c,	// (0x000264f8) list_highlight_pane_cp34

0xab3d,	// (0x00026509) list_single_graphic_hl_pane_g1_ParamLimits

0xab3d,	// (0x00026509) list_single_graphic_hl_pane_g1

0xbf94,	// (0x00027960) list_single_graphic_hl_pane_g2_ParamLimits

0xbf94,	// (0x00027960) list_single_graphic_hl_pane_g2

0xbf94,	// (0x00027960) list_single_graphic_hl_pane_g3_ParamLimits

0xbf94,	// (0x00027960) list_single_graphic_hl_pane_g3

0x2a85,	// (0x0001e451) list_single_graphic_hl_pane_g4_ParamLimits

0x2a85,	// (0x0001e451) list_single_graphic_hl_pane_g4

0xbfa0,	// (0x0002796c) list_single_graphic_hl_pane_g5_ParamLimits

0xbfa0,	// (0x0002796c) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x0002b5af) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x0002b5af) list_single_graphic_hl_pane_g

0xbfb4,	// (0x00027980) list_single_graphic_hl_pane_t1_ParamLimits

0xbfb4,	// (0x00027980) list_single_graphic_hl_pane_t1

0xab4a,	// (0x00026516) aid_size_min_hl_cp2

0xab53,	// (0x0002651f) list_highlight_pane_cp34_cp2_ParamLimits

0xab53,	// (0x0002651f) list_highlight_pane_cp34_cp2

0xab3d,	// (0x00026509) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xab3d,	// (0x00026509) list_single_graphic_hl_pane_g1_cp2

0xab60,	// (0x0002652c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xab60,	// (0x0002652c) list_single_graphic_hl_pane_g2_cp2

0x1522,	// (0x0001ceee) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x1522,	// (0x0001ceee) list_single_graphic_hl_pane_g3_cp2

0x68b2,	// (0x0002227e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x68b2,	// (0x0002227e) list_single_graphic_hl_pane_g4_cp2

0xab7a,	// (0x00026546) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xab7a,	// (0x00026546) list_single_graphic_hl_pane_g5_cp2

0xc364,	// (0x00027d30) control_pane_g4_ParamLimits

0xc364,	// (0x00027d30) control_pane_g4

0x7843,	// (0x0002320f) bg_popup_sub_pane_cp10_ParamLimits

0xa376,	// (0x00025d42) list_choice_list_pane_ParamLimits

0xa385,	// (0x00025d51) scroll_pane_cp23

0x62e4,	// (0x00021cb0) bg_popup_preview_window_pane_cp02_ParamLimits

0xa95d,	// (0x00026329) list_preview_fixed_pane_ParamLimits

0xa973,	// (0x0002633f) list_preview_fixed_pane_cp_ParamLimits

0xa973,	// (0x0002633f) list_preview_fixed_pane_cp

0xa97f,	// (0x0002634b) popup_preview_fixed_window_g1_ParamLimits

0xa97f,	// (0x0002634b) popup_preview_fixed_window_g1

0xa98b,	// (0x00026357) popup_preview_fixed_window_g2_ParamLimits

0xa98b,	// (0x00026357) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x0002b53e) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x0002b53e) popup_preview_fixed_window_g

0x40ba,	// (0x0001fa86) aid_navi_side_left_pane_ParamLimits

0x40cf,	// (0x0001fa9b) aid_navi_side_right_pane_ParamLimits

0x40e7,	// (0x0001fab3) navi_icon_pane_stacon_ParamLimits

0x40fb,	// (0x0001fac7) navi_navi_pane_stacon_ParamLimits

0x40e7,	// (0x0001fab3) navi_text_pane_stacon_ParamLimits

0x5f67,	// (0x00021933) main_text_info_pane

0xaba4,	// (0x00026570) listscroll_text_info_pane

0xabac,	// (0x00026578) list_text_info_pane_ParamLimits

0xabac,	// (0x00026578) list_text_info_pane

0xabbb,	// (0x00026587) scroll_pane_cp24_ParamLimits

0xabbb,	// (0x00026587) scroll_pane_cp24

0x1530,	// (0x0001cefc) list_text_info_pane_t1_ParamLimits

0x1530,	// (0x0001cefc) list_text_info_pane_t1

0xc4b7,	// (0x00027e83) popup_fast_swap2_window_ParamLimits

0xc4b7,	// (0x00027e83) popup_fast_swap2_window

0xac0e,	// (0x000265da) aid_size_cell_fast2

0x5f67,	// (0x00021933) bg_popup_window_pane_cp17

0x81b7,	// (0x00023b83) heading_pane_cp2

0x6524,	// (0x00021ef0) listscroll_fast2_pane

0xac18,	// (0x000265e4) grid_fast2_pane

0xac22,	// (0x000265ee) listscroll_fast2_pane_g1

0xac2a,	// (0x000265f6) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x0002b5ba) listscroll_fast2_pane_g

0x6a2c,	// (0x000223f8) scroll_pane_cp26

0xac34,	// (0x00026600) cell_fast2_pane_ParamLimits

0xac34,	// (0x00026600) cell_fast2_pane

0xac49,	// (0x00026615) cell_fast2_pane_g1

0xac52,	// (0x0002661e) cell_fast2_pane_g2

0xac5b,	// (0x00026627) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x0002b5bf) cell_fast2_pane_g

0x660e,	// (0x00021fda) grid_highlight_pane_cp9

0x6623,	// (0x00021fef) main_eswt_pane_ParamLimits

0x6623,	// (0x00021fef) main_eswt_pane

0xabd0,	// (0x0002659c) list_single_text_info_pane

0xac63,	// (0x0002662f) eswt_ctrl_button_pane

0xac63,	// (0x0002662f) eswt_ctrl_canvas_pane

0xac6b,	// (0x00026637) eswt_ctrl_combo_pane

0xac63,	// (0x0002662f) eswt_ctrl_default_pane

0xac63,	// (0x0002662f) eswt_ctrl_label_pane

0xac73,	// (0x0002663f) eswt_ctrl_wait_pane

0xac7b,	// (0x00026647) eswt_shell_pane

0x5f67,	// (0x00021933) listscroll_eswt_app_pane

0xac9b,	// (0x00026667) popup_eswt_tasktip_window_ParamLimits

0xac9b,	// (0x00026667) popup_eswt_tasktip_window

0x7dbb,	// (0x00023787) bg_popup_window_pane_cp18

0xacac,	// (0x00026678) eswt_control_pane_g1_ParamLimits

0xacac,	// (0x00026678) eswt_control_pane_g1

0xacb9,	// (0x00026685) eswt_control_pane_g2_ParamLimits

0xacb9,	// (0x00026685) eswt_control_pane_g2

0xacc6,	// (0x00026692) eswt_control_pane_g3_ParamLimits

0xacc6,	// (0x00026692) eswt_control_pane_g3

0xacd3,	// (0x0002669f) eswt_control_pane_g4_ParamLimits

0xacd3,	// (0x0002669f) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x0002b5c6) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x0002b5c6) eswt_control_pane_g

0x68ca,	// (0x00022296) bg_button_pane_ParamLimits

0x68ca,	// (0x00022296) bg_button_pane

0x6623,	// (0x00021fef) common_borders_pane_copy2_ParamLimits

0x6623,	// (0x00021fef) common_borders_pane_copy2

0xace0,	// (0x000266ac) control_button_pane_g1_ParamLimits

0xace0,	// (0x000266ac) control_button_pane_g1

0xacec,	// (0x000266b8) control_button_pane_g2_ParamLimits

0xacec,	// (0x000266b8) control_button_pane_g2

0xacf8,	// (0x000266c4) control_button_pane_g3_ParamLimits

0xacf8,	// (0x000266c4) control_button_pane_g3

0x0002,

0xfc03,	// (0x0002b5cf) control_button_pane_g_ParamLimits

0xfc03,	// (0x0002b5cf) control_button_pane_g

0xad0c,	// (0x000266d8) control_button_pane_t1

0xad1a,	// (0x000266e6) control_button_pane_t2

0x0001,

0xfc0a,	// (0x0002b5d6) control_button_pane_t

0x7d47,	// (0x00023713) bg_button_pane_g1

0x7d4f,	// (0x0002371b) bg_button_pane_g2

0x7d57,	// (0x00023723) bg_button_pane_g3

0x7d5f,	// (0x0002372b) bg_button_pane_g4

0x7d67,	// (0x00023733) bg_button_pane_g5

0x7d6f,	// (0x0002373b) bg_button_pane_g6

0x7d77,	// (0x00023743) bg_button_pane_g7

0x7d7f,	// (0x0002374b) bg_button_pane_g8

0x7d87,	// (0x00023753) bg_button_pane_g9

0x0008,

0xf860,	// (0x0002b22c) bg_button_pane_g

0xa331,	// (0x00025cfd) common_borders_pane_ParamLimits

0xa331,	// (0x00025cfd) common_borders_pane

0xacac,	// (0x00026678) eswt_control_pane_g1_copy1_ParamLimits

0xacac,	// (0x00026678) eswt_control_pane_g1_copy1

0xacb9,	// (0x00026685) eswt_control_pane_g2_copy1_ParamLimits

0xacb9,	// (0x00026685) eswt_control_pane_g2_copy1

0xacc6,	// (0x00026692) eswt_control_pane_g3_copy1_ParamLimits

0xacc6,	// (0x00026692) eswt_control_pane_g3_copy1

0xacd3,	// (0x0002669f) eswt_control_pane_g4_copy1_ParamLimits

0xacd3,	// (0x0002669f) eswt_control_pane_g4_copy1

0xa36c,	// (0x00025d38) bg_eswt_ctrl_canvas_pane_g1

0xa331,	// (0x00025cfd) common_borders_pane_cp2_ParamLimits

0xa331,	// (0x00025cfd) common_borders_pane_cp2

0xa331,	// (0x00025cfd) common_borders_pane_cp3_ParamLimits

0xa331,	// (0x00025cfd) common_borders_pane_cp3

0xad28,	// (0x000266f4) separator_horizontal_pane

0xad30,	// (0x000266fc) separator_vertical_pane

0xacac,	// (0x00026678) eswt_control_pane_g1_copy2_ParamLimits

0xacac,	// (0x00026678) eswt_control_pane_g1_copy2

0xacb9,	// (0x00026685) eswt_control_pane_g2_copy2_ParamLimits

0xacb9,	// (0x00026685) eswt_control_pane_g2_copy2

0xacc6,	// (0x00026692) eswt_control_pane_g3_copy2_ParamLimits

0xacc6,	// (0x00026692) eswt_control_pane_g3_copy2

0xacd3,	// (0x0002669f) eswt_control_pane_g4_copy2_ParamLimits

0xacd3,	// (0x0002669f) eswt_control_pane_g4_copy2

0x5f67,	// (0x00021933) common_borders_pane_cp4

0xad39,	// (0x00026705) separator_horizontal_pane_g1

0xad42,	// (0x0002670e) separator_horizontal_pane_g2

0xad4b,	// (0x00026717) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x0002b5db) separator_horizontal_pane_g

0xacac,	// (0x00026678) eswt_control_pane_g1_copy3_ParamLimits

0xacac,	// (0x00026678) eswt_control_pane_g1_copy3

0xacb9,	// (0x00026685) eswt_control_pane_g2_copy3_ParamLimits

0xacb9,	// (0x00026685) eswt_control_pane_g2_copy3

0xacc6,	// (0x00026692) eswt_control_pane_g3_copy3_ParamLimits

0xacc6,	// (0x00026692) eswt_control_pane_g3_copy3

0xacd3,	// (0x0002669f) eswt_control_pane_g4_copy3_ParamLimits

0xacd3,	// (0x0002669f) eswt_control_pane_g4_copy3

0x5f67,	// (0x00021933) common_borders_pane_cp5

0xad54,	// (0x00026720) separator_vertical_pane_g1

0xad5d,	// (0x00026729) separator_vertical_pane_g2

0xad66,	// (0x00026732) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x0002b5e2) separator_vertical_pane_g

0xacac,	// (0x00026678) eswt_control_pane_g1_copy4_ParamLimits

0xacac,	// (0x00026678) eswt_control_pane_g1_copy4

0xacb9,	// (0x00026685) eswt_control_pane_g2_copy4_ParamLimits

0xacb9,	// (0x00026685) eswt_control_pane_g2_copy4

0xacc6,	// (0x00026692) eswt_control_pane_g3_copy4_ParamLimits

0xacc6,	// (0x00026692) eswt_control_pane_g3_copy4

0xacd3,	// (0x0002669f) eswt_control_pane_g4_copy4_ParamLimits

0xacd3,	// (0x0002669f) eswt_control_pane_g4_copy4

0xad6f,	// (0x0002673b) eswt_ctrl_combo_button_pane

0xad77,	// (0x00026743) eswt_ctrl_input_pane

0xad7f,	// (0x0002674b) popup_choice_list_window_cp70

0xad87,	// (0x00026753) eswt_ctrl_input_pane_t1

0x5f67,	// (0x00021933) input_focus_pane_cp70

0xa331,	// (0x00025cfd) bg_button_pane_cp70_ParamLimits

0xa331,	// (0x00025cfd) bg_button_pane_cp70

0xad95,	// (0x00026761) eswt_ctrl_combo_button_pane_g1

0xad9d,	// (0x00026769) wait_bar_pane_cp70

0x7dbb,	// (0x00023787) bg_popup_window_pane_cp70_ParamLimits

0x7dbb,	// (0x00023787) bg_popup_window_pane_cp70

0xada5,	// (0x00026771) popup_eswt_tasktip_window_t1

0xadbb,	// (0x00026787) wait_bar_pane_cp71_ParamLimits

0xadbb,	// (0x00026787) wait_bar_pane_cp71

0xadc7,	// (0x00026793) grid_eswt_app_pane

0x6d4c,	// (0x00022718) scroll_pane_cp70

0x154d,	// (0x0001cf19) cell_eswt_app_pane_ParamLimits

0x154d,	// (0x0001cf19) cell_eswt_app_pane

0x1577,	// (0x0001cf43) cell_eswt_app_pane_g1_ParamLimits

0x1577,	// (0x0001cf43) cell_eswt_app_pane_g1

0x15a6,	// (0x0001cf72) cell_eswt_app_pane_g2_ParamLimits

0x15a6,	// (0x0001cf72) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x0002b5e9) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x0002b5e9) cell_eswt_app_pane_g

0x15ca,	// (0x0001cf96) cell_eswt_app_pane_t1_ParamLimits

0x15ca,	// (0x0001cf96) cell_eswt_app_pane_t1

0xae89,	// (0x00026855) grid_highlight_pane_cp70_ParamLimits

0xae89,	// (0x00026855) grid_highlight_pane_cp70

0x73e8,	// (0x00022db4) set_content_pane_g1

0x77a3,	// (0x0002316f) status_small_volume_pane

0x527b,	// (0x00020c47) status_small_volume_pane_g1

0x5283,	// (0x00020c4f) volume_small2_pane

0x528c,	// (0x00020c58) volume_small2_pane_g1

0x5295,	// (0x00020c61) volume_small2_pane_g2

0x529e,	// (0x00020c6a) volume_small2_pane_g3

0x52a7,	// (0x00020c73) volume_small2_pane_g4

0x52b0,	// (0x00020c7c) volume_small2_pane_g5

0x52b9,	// (0x00020c85) volume_small2_pane_g6

0x52c2,	// (0x00020c8e) volume_small2_pane_g7

0x52cb,	// (0x00020c97) volume_small2_pane_g8

0x52d4,	// (0x00020ca0) volume_small2_pane_g9

0x52dd,	// (0x00020ca9) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x0002b5ee) volume_small2_pane_g

0xa722,	// (0x000260ee) fep_vkb_top_text_pane_g1_ParamLimits

0x1494,	// (0x0001ce60) fep_vkb_top_text_pane_t1_ParamLimits

0xa997,	// (0x00026363) popup_preview_fixed_window_g3_ParamLimits

0xa997,	// (0x00026363) popup_preview_fixed_window_g3

0xcac6,	// (0x00028492) popup_toolbar_trans_pane

0x0ea9,	// (0x0001c875) aid_height_set_list_ParamLimits

0x913e,	// (0x00024b0a) aid_size_parent_ParamLimits

0x7843,	// (0x0002320f) list_highlight_pane_cp2_ParamLimits

0x73e8,	// (0x00022db4) set_content_pane_g1_ParamLimits

0xbf81,	// (0x0002794d) list_single_image_pane_ParamLimits

0xbf81,	// (0x0002794d) list_single_image_pane

0x15fc,	// (0x0001cfc8) aid_size_cell_image_ParamLimits

0x15fc,	// (0x0001cfc8) aid_size_cell_image

0x1609,	// (0x0001cfd5) grid_single_image_pane_ParamLimits

0x1609,	// (0x0001cfd5) grid_single_image_pane

0xaeae,	// (0x0002687a) list_single_image_pane_g1_ParamLimits

0xaeae,	// (0x0002687a) list_single_image_pane_g1

0xaeba,	// (0x00026886) list_single_image_pane_g2_ParamLimits

0xaeba,	// (0x00026886) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x0002b603) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x0002b603) list_single_image_pane_g

0xaece,	// (0x0002689a) list_single_image_pane_t1_ParamLimits

0xaece,	// (0x0002689a) list_single_image_pane_t1

0x1615,	// (0x0001cfe1) cell_image_list_pane_ParamLimits

0x1615,	// (0x0001cfe1) cell_image_list_pane

0x1629,	// (0x0001cff5) cell_image_list_pane_g1

0x1632,	// (0x0001cffe) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x0002b608) cell_image_list_pane_g

0xaf0a,	// (0x000268d6) aid_size_cell_tb_trans_pane

0x68ca,	// (0x00022296) bg_tb_trans_pane

0xaf1c,	// (0x000268e8) grid_tb_trans_pane

0x7d47,	// (0x00023713) bg_tb_trans_pane_g1

0x7d4f,	// (0x0002371b) bg_tb_trans_pane_g2

0x7d57,	// (0x00023723) bg_tb_trans_pane_g3

0x7d5f,	// (0x0002372b) bg_tb_trans_pane_g4

0x7d67,	// (0x00023733) bg_tb_trans_pane_g5

0x7d7f,	// (0x0002374b) bg_tb_trans_pane_g6

0x7d87,	// (0x00023753) bg_tb_trans_pane_g7

0x7d6f,	// (0x0002373b) bg_tb_trans_pane_g8

0x7d77,	// (0x00023743) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x0002b60d) bg_tb_trans_pane_g

0xaf30,	// (0x000268fc) cell_toolbar_trans_pane_ParamLimits

0xaf30,	// (0x000268fc) cell_toolbar_trans_pane

0xa36c,	// (0x00025d38) cell_toolbar_trans_pane_g1

0x1277,	// (0x0001cc43) list_form2_midp_pane_t1

0x1285,	// (0x0001cc51) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0002b4b6) list_form2_midp_pane_t

0x9f33,	// (0x000258ff) scroll_pane_cp51_ParamLimits

0xa0ef,	// (0x00025abb) form2_midp_wait_pane_g1

0xa0f8,	// (0x00025ac4) form2_midp_wait_pane_g2

0xa101,	// (0x00025acd) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0002b4cb) form2_midp_wait_pane_g

0x605b,	// (0x00021a27) list_highlight_pane_cp21_ParamLimits

0xa14f,	// (0x00025b1b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xa15e,	// (0x00025b2a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x92f2,	// (0x00024cbe) list_single_2graphic_im_pane_ParamLimits

0x92f2,	// (0x00024cbe) list_single_2graphic_im_pane

0xaf56,	// (0x00026922) list_single_2graphic_im_pane_g1_ParamLimits

0xaf56,	// (0x00026922) list_single_2graphic_im_pane_g1

0xaf67,	// (0x00026933) list_single_2graphic_im_pane_g2_ParamLimits

0xaf67,	// (0x00026933) list_single_2graphic_im_pane_g2

0xaf73,	// (0x0002693f) list_single_2graphic_im_pane_g3_ParamLimits

0xaf73,	// (0x0002693f) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x0002b620) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x0002b620) list_single_2graphic_im_pane_g

0xaf93,	// (0x0002695f) list_single_2graphic_im_pane_t1_ParamLimits

0xaf93,	// (0x0002695f) list_single_2graphic_im_pane_t1

0xa9a3,	// (0x0002636f) list_single_graphic_2heading_pane_fp_ParamLimits

0xa9a3,	// (0x0002636f) list_single_graphic_2heading_pane_fp

0x37da,	// (0x0001f1a6) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x37da,	// (0x0001f1a6) list_single_graphic_2heading_pane_fp_g1

0xa9b9,	// (0x00026385) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xa9b9,	// (0x00026385) list_single_graphic_2heading_pane_fp_g2

0x2b70,	// (0x0001e53c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2b70,	// (0x0001e53c) list_single_graphic_2heading_pane_fp_g3

0x37af,	// (0x0001f17b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x37af,	// (0x0001f17b) list_single_graphic_2heading_pane_fp_g4

0xa9c5,	// (0x00026391) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xa9c5,	// (0x00026391) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002b54e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002b54e) list_single_graphic_2heading_pane_fp_g

0x39b3,	// (0x0001f37f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x39b3,	// (0x0001f37f) list_single_graphic_2heading_pane_fp_t1

0x3812,	// (0x0001f1de) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3812,	// (0x0001f1de) list_single_graphic_2heading_pane_fp_t2

0x39c9,	// (0x0001f395) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x39c9,	// (0x0001f395) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x0002b629) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x0002b629) list_single_graphic_2heading_pane_fp_t

0xa3f8,	// (0x00025dc4) fep_hwr_write_pane_g5_ParamLimits

0xa3f8,	// (0x00025dc4) fep_hwr_write_pane_g5

0xa404,	// (0x00025dd0) fep_hwr_write_pane_g6_ParamLimits

0xa404,	// (0x00025dd0) fep_hwr_write_pane_g6

0xac7b,	// (0x00026647) eswt_shell_pane_ParamLimits

0x7dbb,	// (0x00023787) bg_popup_window_pane_cp18_ParamLimits

0x908c,	// (0x00024a58) heading_pane_cp70

0xada5,	// (0x00026771) popup_eswt_tasktip_window_t1_ParamLimits

0x07fa,	// (0x0001c1c6) aid_touch_tab_arrow_left

0x0810,	// (0x0001c1dc) aid_touch_tab_arrow_right

0xf230,	// (0x0002abfc) title_pane_g3_ParamLimits

0xf230,	// (0x0002abfc) title_pane_g3

0x6871,	// (0x0002223d) set_value_pane_g1

0xcac6,	// (0x00028492) popup_toolbar_trans_pane_ParamLimits

0xaf0a,	// (0x000268d6) aid_size_cell_tb_trans_pane_ParamLimits

0x68ca,	// (0x00022296) bg_tb_trans_pane_ParamLimits

0xaf1c,	// (0x000268e8) grid_tb_trans_pane_ParamLimits

0x62e4,	// (0x00021cb0) cont_note_pane_ParamLimits

0x62e4,	// (0x00021cb0) cont_note_pane

0x6623,	// (0x00021fef) cont_snote2_single_text_pane_ParamLimits

0x6623,	// (0x00021fef) cont_snote2_single_text_pane

0x6623,	// (0x00021fef) cont_snote2_single_graphic_pane_ParamLimits

0x6623,	// (0x00021fef) cont_snote2_single_graphic_pane

0x83cd,	// (0x00023d99) cont_note_wait_pane_ParamLimits

0x83cd,	// (0x00023d99) cont_note_wait_pane

0x83cd,	// (0x00023d99) cont_note_image_pane_ParamLimits

0x83cd,	// (0x00023d99) cont_note_image_pane

0xcd2e,	// (0x000286fa) popup_note2_window_g1_ParamLimits

0xcd2e,	// (0x000286fa) popup_note2_window_g1

0xcd5f,	// (0x0002872b) popup_note2_window_t1_ParamLimits

0xcd5f,	// (0x0002872b) popup_note2_window_t1

0xcda4,	// (0x00028770) popup_note2_window_t2_ParamLimits

0xcda4,	// (0x00028770) popup_note2_window_t2

0xcde9,	// (0x000287b5) popup_note2_window_t3_ParamLimits

0xcde9,	// (0x000287b5) popup_note2_window_t3

0xce2e,	// (0x000287fa) popup_note2_window_t4_ParamLimits

0xce2e,	// (0x000287fa) popup_note2_window_t4

0x635c,	// (0x00021d28) popup_note2_window_t5_ParamLimits

0x635c,	// (0x00021d28) popup_note2_window_t5

0x0004,

0xfc69,	// (0x0002b635) popup_note2_window_t_ParamLimits

0xfc69,	// (0x0002b635) popup_note2_window_t

0xce5d,	// (0x00028829) popup_note2_image_window_g1_ParamLimits

0xce5d,	// (0x00028829) popup_note2_image_window_g1

0xce69,	// (0x00028835) popup_note2_image_window_g2_ParamLimits

0xce69,	// (0x00028835) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x0002b640) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x0002b640) popup_note2_image_window_g

0xce7b,	// (0x00028847) popup_note2_image_window_t1_ParamLimits

0xce7b,	// (0x00028847) popup_note2_image_window_t1

0xce93,	// (0x0002885f) popup_note2_image_window_t2_ParamLimits

0xce93,	// (0x0002885f) popup_note2_image_window_t2

0xceab,	// (0x00028877) popup_note2_image_window_t3_ParamLimits

0xceab,	// (0x00028877) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x0002b645) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x0002b645) popup_note2_image_window_t

0x83db,	// (0x00023da7) popup_note2_wait_window_g1_ParamLimits

0x83db,	// (0x00023da7) popup_note2_wait_window_g1

0xcec7,	// (0x00028893) popup_note2_wait_window_g2_ParamLimits

0xcec7,	// (0x00028893) popup_note2_wait_window_g2

0x83f3,	// (0x00023dbf) popup_note2_wait_window_g3_ParamLimits

0x83f3,	// (0x00023dbf) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x0002b64c) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x0002b64c) popup_note2_wait_window_g

0xced3,	// (0x0002889f) popup_note2_wait_window_t1_ParamLimits

0xced3,	// (0x0002889f) popup_note2_wait_window_t1

0xcef1,	// (0x000288bd) popup_note2_wait_window_t2_ParamLimits

0xcef1,	// (0x000288bd) popup_note2_wait_window_t2

0xcf0f,	// (0x000288db) popup_note2_wait_window_t3_ParamLimits

0xcf0f,	// (0x000288db) popup_note2_wait_window_t3

0xcf21,	// (0x000288ed) popup_note2_wait_window_t4_ParamLimits

0xcf21,	// (0x000288ed) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x0002b653) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x0002b653) popup_note2_wait_window_t

0xcf33,	// (0x000288ff) wait_bar2_pane_ParamLimits

0xcf33,	// (0x000288ff) wait_bar2_pane

0xcf4b,	// (0x00028917) popup_snote2_single_text_window_g1_ParamLimits

0xcf4b,	// (0x00028917) popup_snote2_single_text_window_g1

0xcf73,	// (0x0002893f) popup_snote2_single_text_window_t1_ParamLimits

0xcf73,	// (0x0002893f) popup_snote2_single_text_window_t1

0xcfbf,	// (0x0002898b) popup_snote2_single_text_window_t2_ParamLimits

0xcfbf,	// (0x0002898b) popup_snote2_single_text_window_t2

0xd00b,	// (0x000289d7) popup_snote2_single_text_window_t3_ParamLimits

0xd00b,	// (0x000289d7) popup_snote2_single_text_window_t3

0xd04c,	// (0x00028a18) popup_snote2_single_text_window_t4_ParamLimits

0xd04c,	// (0x00028a18) popup_snote2_single_text_window_t4

0xd082,	// (0x00028a4e) popup_snote2_single_text_window_t5_ParamLimits

0xd082,	// (0x00028a4e) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0002b65c) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0002b65c) popup_snote2_single_text_window_t

0xd0ad,	// (0x00028a79) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0ad,	// (0x00028a79) popup_snote2_single_graphic_window_g1

0xd0d5,	// (0x00028aa1) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0d5,	// (0x00028aa1) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x0002b667) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x0002b667) popup_snote2_single_graphic_window_g

0xd0fd,	// (0x00028ac9) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0fd,	// (0x00028ac9) popup_snote2_single_graphic_window_t1

0xd149,	// (0x00028b15) popup_snote2_single_graphic_window_t2_ParamLimits

0xd149,	// (0x00028b15) popup_snote2_single_graphic_window_t2

0xd00b,	// (0x000289d7) popup_snote2_single_graphic_window_t3_ParamLimits

0xd00b,	// (0x000289d7) popup_snote2_single_graphic_window_t3

0xd04c,	// (0x00028a18) popup_snote2_single_graphic_window_t4_ParamLimits

0xd04c,	// (0x00028a18) popup_snote2_single_graphic_window_t4

0xd082,	// (0x00028a4e) popup_snote2_single_graphic_window_t5_ParamLimits

0xd082,	// (0x00028a4e) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0002b66c) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0002b66c) popup_snote2_single_graphic_window_t

0x9dee,	// (0x000257ba) clock_nsta_pane_cp2_t1

0x9dee,	// (0x000257ba) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0002b48c) clock_nsta_pane_cp2_t

0x2ff5,	// (0x0001e9c1) form_field_data_wide_pane_g1_ParamLimits

0x68a6,	// (0x00022272) form_field_data_wide_pane_g2_ParamLimits

0x68a6,	// (0x00022272) form_field_data_wide_pane_g2

0x68d8,	// (0x000222a4) form_field_data_wide_pane_g3_ParamLimits

0x68d8,	// (0x000222a4) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0002b04d) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0002b04d) form_field_data_wide_pane_g

0x11ab,	// (0x0001cb77) grid_touch_3_pane_ParamLimits

0x11ab,	// (0x0001cb77) grid_touch_3_pane

0x163b,	// (0x0001d007) cell_touch_3_pane_ParamLimits

0x163b,	// (0x0001d007) cell_touch_3_pane

0xa36c,	// (0x00025d38) cell_touch_3_pane_g1

0xa36c,	// (0x00025d38) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0002b511) cell_touch_3_pane_g

0x638e,	// (0x00021d5a) cont_query_data_pane

0x6396,	// (0x00021d62) cont_query_data_pane_cp1

0xd195,	// (0x00028b61) button_value_adjust_pane_cp7

0xd19d,	// (0x00028b69) query_popup_pane_cp3

0x6ffc,	// (0x000229c8) bg_popup_sub_pane_cp22_ParamLimits

0x41fc,	// (0x0001fbc8) navi_navi_volume_pane_cp2

0x4214,	// (0x0001fbe0) popup_side_volume_key_window_g2

0x4220,	// (0x0001fbec) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0002b0e3) popup_side_volume_key_window_g

0x423a,	// (0x0001fc06) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0002b0ea) popup_side_volume_key_window_t

0x72b4,	// (0x00022c80) popup_side_volume_key_window_ParamLimits

0xba8e,	// (0x0002745a) list_double_graphic_pane_g4_ParamLimits

0xba8e,	// (0x0002745a) list_double_graphic_pane_g4

0x1050,	// (0x0001ca1c) list_single_2heading_msg_pane_ParamLimits

0x1050,	// (0x0001ca1c) list_single_2heading_msg_pane

0xbfca,	// (0x00027996) list_single_2heading_msg_pane_g1_ParamLimits

0xbfca,	// (0x00027996) list_single_2heading_msg_pane_g1

0xbfd6,	// (0x000279a2) list_single_2heading_msg_pane_g2_ParamLimits

0xbfd6,	// (0x000279a2) list_single_2heading_msg_pane_g2

0xbfe9,	// (0x000279b5) list_single_2heading_msg_pane_g3_ParamLimits

0xbfe9,	// (0x000279b5) list_single_2heading_msg_pane_g3

0xbff5,	// (0x000279c1) list_single_2heading_msg_pane_g4_ParamLimits

0xbff5,	// (0x000279c1) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x0002b677) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x0002b677) list_single_2heading_msg_pane_g

0xc00d,	// (0x000279d9) list_single_2heading_msg_pane_t1_ParamLimits

0xc00d,	// (0x000279d9) list_single_2heading_msg_pane_t1

0xc035,	// (0x00027a01) list_single_2heading_msg_pane_t2_ParamLimits

0xc035,	// (0x00027a01) list_single_2heading_msg_pane_t2

0xc0a0,	// (0x00027a6c) list_single_2heading_msg_pane_t3_ParamLimits

0xc0a0,	// (0x00027a6c) list_single_2heading_msg_pane_t3

0x3aae,	// (0x0001f47a) list_single_2heading_msg_pane_t4_ParamLimits

0x3aae,	// (0x0001f47a) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x0002b680) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x0002b680) list_single_2heading_msg_pane_t

0x5faf,	// (0x0002197b) title_pane_g4_ParamLimits

0x5faf,	// (0x0002197b) title_pane_g4

0x400a,	// (0x0001f9d6) title_pane_stacon_g3_ParamLimits

0x400a,	// (0x0001f9d6) title_pane_stacon_g3

0xaf87,	// (0x00026953) list_single_2graphic_im_pane_g4_ParamLimits

0xaf87,	// (0x00026953) list_single_2graphic_im_pane_g4

0x8e34,	// (0x00024800) popup_side_volume_key_window_cp

0x9630,	// (0x00024ffc) main_idle_act2_pane_t1

0x4b5d,	// (0x00020529) toolbar_button_pane_g10

0xf54a,	// (0x0002af16) popup_toolbar_window_cp1

0x9ddf,	// (0x000257ab) clock_nsta_pane_cp_t1

0x9ddf,	// (0x000257ab) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0002b487) clock_nsta_pane_cp_t

0x41fc,	// (0x0001fbc8) navi_navi_volume_pane_cp2_ParamLimits

0x4208,	// (0x0001fbd4) popup_side_volume_key_window_g1_ParamLimits

0x4214,	// (0x0001fbe0) popup_side_volume_key_window_g2_ParamLimits

0x4220,	// (0x0001fbec) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0002b0e3) popup_side_volume_key_window_g_ParamLimits

0x4f8b,	// (0x00020957) fep_hwr_aid_pane

0xe4ab,	// (0x00029e77) bg_fep_hwr_top_pane_g4_ParamLimits

0xa3c8,	// (0x00025d94) fep_hwr_top_pane_g1_ParamLimits

0xa3da,	// (0x00025da6) fep_hwr_top_pane_g2_ParamLimits

0x5044,	// (0x00020a10) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0002b4dc) fep_hwr_top_pane_g_ParamLimits

0x5059,	// (0x00020a25) fep_hwr_top_text_pane_ParamLimits

0x8bf7,	// (0x000245c3) aid_touch_tab_arrow_arrow_2

0x8c00,	// (0x000245cc) aid_touch_tab_arrow_left_2

0x4f9f,	// (0x0002096b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x4fd6,	// (0x000209a2) fep_hwr_prediction_pane

0xa531,	// (0x00025efd) fep_vkb_prediction_pane

0x1474,	// (0x0001ce40) fep_vkb_side_pane_g3_ParamLimits

0x1474,	// (0x0001ce40) fep_vkb_side_pane_g3

0xa5da,	// (0x00025fa6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xaa39,	// (0x00026405) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xaa46,	// (0x00026412) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x0002b586) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd1ae,	// (0x00028b7a) fep_hwr_prediction_pane_g1

0x52e6,	// (0x00020cb2) fep_hwr_prediction_pane_g2

0x52ee,	// (0x00020cba) fep_hwr_prediction_pane_g3

0x52f6,	// (0x00020cc2) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0002b689) fep_hwr_prediction_pane_g

0xd1ae,	// (0x00028b7a) fep_vkb_prediction_pane_g1

0xd1b8,	// (0x00028b84) fep_vkb_prediction_pane_g2

0xd1c0,	// (0x00028b8c) fep_vkb_prediction_pane_g3

0xd1c8,	// (0x00028b94) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002b692) fep_vkb_prediction_pane_g

0x9467,	// (0x00024e33) slider_set_pane_g3

0x947b,	// (0x00024e47) slider_set_pane_g4

0x9493,	// (0x00024e5f) slider_set_pane_g5

0x9467,	// (0x00024e33) slider_set_pane_g6

0x4e29,	// (0x000207f5) slider_set_pane_g7

0x929f,	// (0x00024c6b) slider_form_pane_g3

0x92a8,	// (0x00024c74) slider_form_pane_g4

0x92b0,	// (0x00024c7c) slider_form_pane_g5

0x929f,	// (0x00024c6b) slider_form_pane_g6

0x0ff0,	// (0x0001c9bc) slider_form_pane_g7

0x98da,	// (0x000252a6) slider_set_pane_vc_g3

0x98e3,	// (0x000252af) slider_set_pane_vc_g4

0x98ec,	// (0x000252b8) slider_set_pane_vc_g5

0x98da,	// (0x000252a6) slider_set_pane_vc_g6

0x98f5,	// (0x000252c1) slider_set_pane_vc_g7

0x9aa5,	// (0x00025471) slider_form_pane_vc_g1

0x9aae,	// (0x0002547a) slider_form_pane_vc_g2

0x9ab7,	// (0x00025483) slider_form_pane_vc_g3

0x9aa5,	// (0x00025471) slider_form_pane_vc_g4

0x9ac0,	// (0x0002548c) slider_form_pane_vc_g5

0x0004,

0xfa8d,	// (0x0002b459) slider_form_pane_vc_g

0x5f67,	// (0x00021933) main_idle_act3_pane

0xd1d0,	// (0x00028b9c) ai3_links_pane

0x1788,	// (0x0001d154) popup_ai3_data_window_ParamLimits

0x1788,	// (0x0001d154) popup_ai3_data_window

0x5f67,	// (0x00021933) grid_ai3_links_pane

0x17a0,	// (0x0001d16c) cell_ai3_links_pane_ParamLimits

0x17a0,	// (0x0001d16c) cell_ai3_links_pane

0xd1d9,	// (0x00028ba5) bg_popup_sub_pane_cp11

0xd1e6,	// (0x00028bb2) cell_ai3_links_pane_g1

0x5f67,	// (0x00021933) bg_popup_sub_pane_cp12

0xd20b,	// (0x00028bd7) heading_ai3_data_pane

0xd213,	// (0x00028bdf) list_ai3_gene_pane

0xd21f,	// (0x00028beb) popup_ai3_data_window_g1

0xd227,	// (0x00028bf3) heading_ai3_data_pane_g1

0xd22f,	// (0x00028bfb) heading_ai3_data_pane_t1

0xd23d,	// (0x00028c09) list_double_ai3_gene_pane_ParamLimits

0xd23d,	// (0x00028c09) list_double_ai3_gene_pane

0xd24a,	// (0x00028c16) list_single_ai3_gene_pane_ParamLimits

0xd24a,	// (0x00028c16) list_single_ai3_gene_pane

0xa331,	// (0x00025cfd) list_highlight_pane_cp7_ParamLimits

0xa331,	// (0x00025cfd) list_highlight_pane_cp7

0xd257,	// (0x00028c23) list_single_a13_gene_pane_t1_ParamLimits

0xd257,	// (0x00028c23) list_single_a13_gene_pane_t1

0xd26e,	// (0x00028c3a) list_single_ai3_gene_pane_g1

0xd277,	// (0x00028c43) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0002b69b) list_single_ai3_gene_pane_g

0xd27f,	// (0x00028c4b) list_double_ai3_gene_pane_g1_ParamLimits

0xd27f,	// (0x00028c4b) list_double_ai3_gene_pane_g1

0xd28b,	// (0x00028c57) list_double_ai3_gene_pane_t1_ParamLimits

0xd28b,	// (0x00028c57) list_double_ai3_gene_pane_t1

0xd2a7,	// (0x00028c73) list_double_ai3_gene_pane_t2_ParamLimits

0xd2a7,	// (0x00028c73) list_double_ai3_gene_pane_t2

0xd2bc,	// (0x00028c88) list_double_ai3_gene_pane_t3_ParamLimits

0xd2bc,	// (0x00028c88) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x0002b6a0) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x0002b6a0) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x39df,	// (0x0001f3ab) aid_size_min_col_2

0x166e,	// (0x0001d03a) aid_size_min_msg_ParamLimits

0x166e,	// (0x0001d03a) aid_size_min_msg

0x1488,	// (0x0001ce54) fep_vkb_top_text_pane_g2_ParamLimits

0x1488,	// (0x0001ce54) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0002b50c) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0002b50c) fep_vkb_top_text_pane_g

0x5f67,	// (0x00021933) main_hc_apps_shell_pane

0xd2d9,	// (0x00028ca5) grid_hc_apps_pane_ParamLimits

0xd2d9,	// (0x00028ca5) grid_hc_apps_pane

0xd2e8,	// (0x00028cb4) list_hc_apps_pane

0xd2f0,	// (0x00028cbc) scroll_pane_cp37_ParamLimits

0xd2f0,	// (0x00028cbc) scroll_pane_cp37

0x17ba,	// (0x0001d186) cell_hc_apps_pane_ParamLimits

0x17ba,	// (0x0001d186) cell_hc_apps_pane

0x1878,	// (0x0001d244) cell_hc_apps_pane_g1_ParamLimits

0x1878,	// (0x0001d244) cell_hc_apps_pane_g1

0xd2fc,	// (0x00028cc8) cell_hc_apps_pane_g2_ParamLimits

0xd2fc,	// (0x00028cc8) cell_hc_apps_pane_g2

0xd318,	// (0x00028ce4) cell_hc_apps_pane_g3_ParamLimits

0xd318,	// (0x00028ce4) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x0002b6a7) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x0002b6a7) cell_hc_apps_pane_g

0x18a5,	// (0x0001d271) cell_hc_apps_pane_t1_ParamLimits

0x18a5,	// (0x0001d271) cell_hc_apps_pane_t1

0x62e4,	// (0x00021cb0) grid_highlight_pane_cp10_ParamLimits

0x62e4,	// (0x00021cb0) grid_highlight_pane_cp10

0x18e3,	// (0x0001d2af) list_single_hc_apps_pane_ParamLimits

0x18e3,	// (0x0001d2af) list_single_hc_apps_pane

0x1914,	// (0x0001d2e0) list_single_hc_apps_pane_g1

0xc10e,	// (0x00027ada) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x0002b6ae) list_single_hc_apps_pane_g

0xc127,	// (0x00027af3) list_single_hc_apps_pane_g2_copy1

0xc143,	// (0x00027b0f) list_single_hc_apps_pane_t1

0x605b,	// (0x00021a27) bg_set_opt_pane_cp_ParamLimits

0x3f31,	// (0x0001f8fd) setting_slider_pane_t1_ParamLimits

0x3f4a,	// (0x0001f916) setting_slider_pane_t2_ParamLimits

0x3f64,	// (0x0001f930) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002af30) setting_slider_pane_t_ParamLimits

0x3f7c,	// (0x0001f948) slider_set_pane_ParamLimits

0x449c,	// (0x0001fe68) control_pane_g5_ParamLimits

0x449c,	// (0x0001fe68) control_pane_g5

0x90f8,	// (0x00024ac4) slider_set_pane_g1_ParamLimits

0x4e1d,	// (0x000207e9) slider_set_pane_g2_ParamLimits

0x9467,	// (0x00024e33) slider_set_pane_g3_ParamLimits

0x947b,	// (0x00024e47) slider_set_pane_g4_ParamLimits

0x9493,	// (0x00024e5f) slider_set_pane_g5_ParamLimits

0x9467,	// (0x00024e33) slider_set_pane_g6_ParamLimits

0x4e29,	// (0x000207f5) slider_set_pane_g7_ParamLimits

0xf95e,	// (0x0002b32a) slider_set_pane_g_ParamLimits

0x7393,	// (0x00022d5f) navi_icon_text_pane_ParamLimits

0x07c3,	// (0x0001c18f) aid_fill_nsta_2_ParamLimits

0x07fa,	// (0x0001c1c6) aid_touch_tab_arrow_left_ParamLimits

0x0810,	// (0x0001c1dc) aid_touch_tab_arrow_right_ParamLimits

0x08ab,	// (0x0001c277) clock_nsta_pane_ParamLimits

0x8bd9,	// (0x000245a5) navi_icon_pane_g1_ParamLimits

0x0db8,	// (0x0001c784) navi_text_pane_t1_ParamLimits

0x9ef1,	// (0x000258bd) navi_icon_text_pane_g1_ParamLimits

0x9efd,	// (0x000258c9) navi_icon_text_pane_t1_ParamLimits

0x1914,	// (0x0001d2e0) list_single_hc_apps_pane_g1_ParamLimits

0xc10e,	// (0x00027ada) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x0002b6ae) list_single_hc_apps_pane_g_ParamLimits

0xc127,	// (0x00027af3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc143,	// (0x00027b0f) list_single_hc_apps_pane_t1_ParamLimits

0xc2a7,	// (0x00027c73) popup_toolbar2_fixed_window_ParamLimits

0xc2a7,	// (0x00027c73) popup_toolbar2_fixed_window

0xcabc,	// (0x00028488) popup_toolbar2_float_window

0x5f67,	// (0x00021933) bg_popup_sub_pane_cp27

0xd33a,	// (0x00028d06) grid_toolbar2_float_pane

0x5f67,	// (0x00021933) bg_popup_sub_pane_cp26

0xd33a,	// (0x00028d06) grid_toolbar2_fixed_pane

0x1990,	// (0x0001d35c) cell_toolbar2_fixed_pane_ParamLimits

0x1990,	// (0x0001d35c) cell_toolbar2_fixed_pane

0x19ab,	// (0x0001d377) cell_toolbar2_fixed_pane_g1

0x7cc7,	// (0x00023693) toolbar2_fixed_button_pane

0x7d47,	// (0x00023713) toolbar2_fixed_button_pane_g1

0x7d4f,	// (0x0002371b) toolbar2_fixed_button_pane_g2

0x7d57,	// (0x00023723) toolbar2_fixed_button_pane_g3

0x7d5f,	// (0x0002372b) toolbar2_fixed_button_pane_g4

0x7d67,	// (0x00023733) toolbar2_fixed_button_pane_g5

0x7d6f,	// (0x0002373b) toolbar2_fixed_button_pane_g6

0x7d77,	// (0x00023743) toolbar2_fixed_button_pane_g7

0x7d7f,	// (0x0002374b) toolbar2_fixed_button_pane_g8

0x7d87,	// (0x00023753) toolbar2_fixed_button_pane_g9

0x0008,

0xf860,	// (0x0002b22c) toolbar2_fixed_button_pane_g

0xd342,	// (0x00028d0e) cell_toolbar2_float_pane_ParamLimits

0xd342,	// (0x00028d0e) cell_toolbar2_float_pane

0xd356,	// (0x00028d22) cell_toolbar2_float_pane_g1

0x7cc7,	// (0x00023693) toolbar2_fixed_button_pane_cp

0x1370,	// (0x0001cd3c) fep_vkb_accented_list_pane_ParamLimits

0x1370,	// (0x0001cd3c) fep_vkb_accented_list_pane

0x51a7,	// (0x00020b73) bg_popup_fep_shadow_pane_g9

0x7507,	// (0x00022ed3) bg_popup_fep_shadow_pane_cp3

0x6a13,	// (0x000223df) list_accented_list_pane

0xd35f,	// (0x00028d2b) list_single_accented_list_pane_ParamLimits

0xd35f,	// (0x00028d2b) list_single_accented_list_pane

0x7507,	// (0x00022ed3) list_highlight_pane_cp10

0xd370,	// (0x00028d3c) list_single_accented_list_pane_t1

0xc9e6,	// (0x000283b2) popup_slider_window_ParamLimits

0xc9e6,	// (0x000283b2) popup_slider_window

0xd1a5,	// (0x00028b71) aid_indentation_list_msg

0x1aa4,	// (0x0001d470) bg_popup_window_pane_cp19

0xd3dc,	// (0x00028da8) popup_slider_window_g1

0xd3f8,	// (0x00028dc4) popup_slider_window_g2

0xd414,	// (0x00028de0) popup_slider_window_g3

0x0005,

0xfce7,	// (0x0002b6b3) popup_slider_window_g

0xd430,	// (0x00028dfc) popup_slider_window_t1

0xd476,	// (0x00028e42) small_volume_slider_vertical_pane

0xa36c,	// (0x00025d38) small_volume_slider_vertical_pane_g1

0xa36c,	// (0x00025d38) small_volume_slider_vertical_pane_g2

0xd492,	// (0x00028e5e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x0002b6c5) small_volume_slider_vertical_pane_g

0xc215,	// (0x00027be1) area_side_right_pane_ParamLimits

0xc215,	// (0x00027be1) area_side_right_pane

0xd49b,	// (0x00028e67) aid_size_side_button_ParamLimits

0xd49b,	// (0x00028e67) aid_size_side_button

0xd4b4,	// (0x00028e80) grid_sctrl_middle_pane_ParamLimits

0xd4b4,	// (0x00028e80) grid_sctrl_middle_pane

0x5331,	// (0x00020cfd) sctrl_sk_bottom_pane

0x5342,	// (0x00020d0e) sctrl_sk_top_pane

0x5354,	// (0x00020d20) aid_touch_sctrl_top

0x62e4,	// (0x00021cb0) bg_sctrl_sk_pane_ParamLimits

0x62e4,	// (0x00021cb0) bg_sctrl_sk_pane

0x5361,	// (0x00020d2d) sctrl_sk_top_pane_g1

0x536e,	// (0x00020d3a) sctrl_sk_top_pane_t1

0x5354,	// (0x00020d20) aid_touch_sctrl_bottom

0x62e4,	// (0x00021cb0) bg_sctrl_sk_pane_cp_ParamLimits

0x62e4,	// (0x00021cb0) bg_sctrl_sk_pane_cp

0x5389,	// (0x00020d55) sctrl_sk_bottom_pane_g1

0x536e,	// (0x00020d3a) sctrl_sk_bottom_pane_t1

0xd4ce,	// (0x00028e9a) cell_sctrl_middle_pane_ParamLimits

0xd4ce,	// (0x00028e9a) cell_sctrl_middle_pane

0xd4df,	// (0x00028eab) aid_touch_sctrl_middle_ParamLimits

0xd4df,	// (0x00028eab) aid_touch_sctrl_middle

0xd4ec,	// (0x00028eb8) bg_sctrl_middle_pane_ParamLimits

0xd4ec,	// (0x00028eb8) bg_sctrl_middle_pane

0xd4fa,	// (0x00028ec6) cell_sctrl_middle_pane_g1_ParamLimits

0xd4fa,	// (0x00028ec6) cell_sctrl_middle_pane_g1

0xd508,	// (0x00028ed4) cell_sctrl_middle_pane_g2_ParamLimits

0xd508,	// (0x00028ed4) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x0002b6d1) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x0002b6d1) cell_sctrl_middle_pane_g

0x7d47,	// (0x00023713) bg_sctrl_middle_pane_g1

0x7d4f,	// (0x0002371b) bg_sctrl_middle_pane_g2

0x7d57,	// (0x00023723) bg_sctrl_middle_pane_g3

0x7d5f,	// (0x0002372b) bg_sctrl_middle_pane_g4

0x7d67,	// (0x00023733) bg_sctrl_middle_pane_g5

0x7d6f,	// (0x0002373b) bg_sctrl_middle_pane_g6

0x7d77,	// (0x00023743) bg_sctrl_middle_pane_g7

0x7d7f,	// (0x0002374b) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x0002b6d6) bg_sctrl_middle_pane_g

0x7d87,	// (0x00023753) bg_sctrl_middle_pane_g8_copy1

0x7d47,	// (0x00023713) bg_sctrl_sk_pane_g1

0x7d4f,	// (0x0002371b) bg_sctrl_sk_pane_g2

0x7d57,	// (0x00023723) bg_sctrl_sk_pane_g3

0x0008,

0xf860,	// (0x0002b22c) bg_sctrl_sk_pane_g

0x67e1,	// (0x000221ad) aid_size_touch_scroll_bar

0x7d5f,	// (0x0002372b) bg_sctrl_sk_pane_g4

0x7d67,	// (0x00023733) bg_sctrl_sk_pane_g5

0x7d6f,	// (0x0002373b) bg_sctrl_sk_pane_g6

0x7d77,	// (0x00023743) bg_sctrl_sk_pane_g7

0x7d7f,	// (0x0002374b) bg_sctrl_sk_pane_g8

0x7d87,	// (0x00023753) bg_sctrl_sk_pane_g9

0x4624,	// (0x0001fff0) popup_fep_china_hwr2_fs_candidate_window

0xc514,	// (0x00027ee0) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc514,	// (0x00027ee0) popup_fep_china_hwr2_fs_control_window

0xa5da,	// (0x00025fa6) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0002b6cc) sctrl_sk_top_pane_g

0x1b5c,	// (0x0001d528) aid_fep_china_hwr2_fs_cell_ParamLimits

0x1b5c,	// (0x0001d528) aid_fep_china_hwr2_fs_cell

0x1b70,	// (0x0001d53c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x1b70,	// (0x0001d53c) bg_popup_fep_shadow_pane_cp4

0x1b87,	// (0x0001d553) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x1b87,	// (0x0001d553) bg_popup_fep_shadow_pane_cp5

0x1b99,	// (0x0001d565) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x1b99,	// (0x0001d565) popup_fep_china_hwr2_fs_control_bar_grid

0x1bad,	// (0x0001d579) popup_fep_china_hwr2_fs_control_funtion_grid

0xd514,	// (0x00028ee0) aid_fep_china_hwr2_fs_candi_cell

0x5f67,	// (0x00021933) bg_popup_fep_shadow_pane_cp6

0xd51e,	// (0x00028eea) popup_fep_china_hwr2_fs_candidate_grid

0x1bb5,	// (0x0001d581) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x1bb5,	// (0x0001d581) cell_fep_china_hwr2_fs_funtion_grid

0xa36c,	// (0x00025d38) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd4fa,	// (0x00028ec6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd4fa,	// (0x00028ec6) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd528,	// (0x00028ef4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd528,	// (0x00028ef4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x0002b6e7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x0002b6e7) cell_fep_china_hwr2_fs_funtion_grid_g

0x1bcd,	// (0x0001d599) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x1bcd,	// (0x0001d599) cell_fep_china_hwr2_fs_funtion_grid_t1

0x1be2,	// (0x0001d5ae) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x1be2,	// (0x0001d5ae) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x0002b6ec) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x0002b6ec) cell_fep_china_hwr2_fs_funtion_grid_t

0xd53e,	// (0x00028f0a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd546,	// (0x00028f12) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd54e,	// (0x00028f1a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x0002b6f1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd556,	// (0x00028f22) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd556,	// (0x00028f22) cell_fep_china_hwr2_fs_candidate_grid

0xd56f,	// (0x00028f3b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd577,	// (0x00028f43) popup_fep_china_hwr2_fs_candidate_grid_g21

0xa36c,	// (0x00025d38) cell_fep_china_hwr2_fs_candidate_grid_g1

0xa36c,	// (0x00025d38) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0002b511) cell_fep_china_hwr2_fs_candidate_grid_g

0xd57f,	// (0x00028f4b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7943,	// (0x0002330f) clock_nsta_pane_cp_24_ParamLimits

0x7943,	// (0x0002330f) clock_nsta_pane_cp_24

0x79c1,	// (0x0002338d) indicator_nsta_pane_cp_24_ParamLimits

0x79c1,	// (0x0002338d) indicator_nsta_pane_cp_24

0x8a55,	// (0x00024421) heading_pane_g1

0x0001,

0xf8c5,	// (0x0002b291) heading_pane_g

0x9437,	// (0x00024e03) grid_sct_catagory_button_pane

0x94a9,	// (0x00024e75) scroll_pane_cp5_ParamLimits

0x9f3f,	// (0x0002590b) button_value_adjust_pane_cp5_ParamLimits

0x9f3f,	// (0x0002590b) button_value_adjust_pane_cp5

0xa01e,	// (0x000259ea) form2_midp_time_pane_ParamLimits

0xd58d,	// (0x00028f59) cell_sct_catagory_button_pane_ParamLimits

0xd58d,	// (0x00028f59) cell_sct_catagory_button_pane

0xa331,	// (0x00025cfd) bg_button_pane_cp01_ParamLimits

0xa331,	// (0x00025cfd) bg_button_pane_cp01

0xa36c,	// (0x00025d38) cell_sct_catagory_button_pane_g1

0xca5f,	// (0x0002842b) popup_tb_extension_window

0x1bfe,	// (0x0001d5ca) aid_size_cell_ext_ParamLimits

0x1bfe,	// (0x0001d5ca) aid_size_cell_ext

0x6623,	// (0x00021fef) bg_tb_trans_pane_cp1_ParamLimits

0x6623,	// (0x00021fef) bg_tb_trans_pane_cp1

0x1c24,	// (0x0001d5f0) grid_tb_ext_pane_ParamLimits

0x1c24,	// (0x0001d5f0) grid_tb_ext_pane

0x1c66,	// (0x0001d632) cell_tb_ext_pane_ParamLimits

0x1c66,	// (0x0001d632) cell_tb_ext_pane

0x1c8e,	// (0x0001d65a) cell_tb_ext_pane_g1_ParamLimits

0x1c8e,	// (0x0001d65a) cell_tb_ext_pane_g1

0xd59f,	// (0x00028f6b) cell_tb_ext_pane_t1

0x62e4,	// (0x00021cb0) list_highlight_pane_cp11_ParamLimits

0x62e4,	// (0x00021cb0) list_highlight_pane_cp11

0x3e64,	// (0x0001f830) popup_uni_indicator_window_ParamLimits

0x3e64,	// (0x0001f830) popup_uni_indicator_window

0x68ca,	// (0x00022296) bg_popup_sub_pane_cp14

0xd5ba,	// (0x00028f86) list_uniindi_pane

0xd5c6,	// (0x00028f92) uniindi_top_pane

0x62e4,	// (0x00021cb0) bg_uniindi_top_pane

0xd5e5,	// (0x00028fb1) uniindi_top_pane_g1

0xd5fb,	// (0x00028fc7) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x0002b6f8) uniindi_top_pane_g

0xd625,	// (0x00028ff1) uniindi_top_pane_t1

0xd64f,	// (0x0002901b) list_single_uniindi_pane_ParamLimits

0xd64f,	// (0x0002901b) list_single_uniindi_pane

0xa36c,	// (0x00025d38) bg_uniindi_top_pane_g1

0xd662,	// (0x0002902e) list_single_uniindi_pane_g1

0xd675,	// (0x00029041) list_single_uniindi_pane_t1

0x5f67,	// (0x00021933) control_bg_pane

0xd69a,	// (0x00029066) bg_sctrl_sk_pane_cp1

0xd6a3,	// (0x0002906f) bg_sctrl_sk_pane_cp2

0xd6ac,	// (0x00029078) control_bg_pane_g1

0xd6b5,	// (0x00029081) control_bg_pane_g2

0x0001,

0xfd35,	// (0x0002b701) control_bg_pane_g

0x9d7a,	// (0x00025746) cell_indicator_nsta_pane_g1_ParamLimits

0x11de,	// (0x0001cbaa) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0002b475) cell_indicator_nsta_pane_g_ParamLimits

0x379c,	// (0x0001f168) form2_midp_time_pane_t1_ParamLimits

0x4f7d,	// (0x00020949) main_idle_act4_pane_ParamLimits

0x4f7d,	// (0x00020949) main_idle_act4_pane

0xca5f,	// (0x0002842b) popup_tb_extension_window_ParamLimits

0x1c4c,	// (0x0001d618) tb_ext_find_pane_ParamLimits

0x1c4c,	// (0x0001d618) tb_ext_find_pane

0xd6be,	// (0x0002908a) ai_gene_pane_1_cp1

0x7644,	// (0x00023010) ai_gene_pane_2_cp1

0xd6c6,	// (0x00029092) list_single_idle_plugin_calendar_pane

0xd6cf,	// (0x0002909b) list_single_idle_plugin_notification_pane

0xd6d8,	// (0x000290a4) list_single_idle_plugin_player_pane

0x1cab,	// (0x0001d677) list_single_idle_plugin_shortcut_pane_ParamLimits

0x1cab,	// (0x0001d677) list_single_idle_plugin_shortcut_pane

0x1cd3,	// (0x0001d69f) main_idle_act4_pane_t1

0x1ce9,	// (0x0001d6b5) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x0002b706) main_idle_act4_pane_t

0x1d01,	// (0x0001d6cd) middle_sk_idle_act4_pane_ParamLimits

0x1d01,	// (0x0001d6cd) middle_sk_idle_act4_pane

0x1d1d,	// (0x0001d6e9) popup_clock_digital_analogue_window_cp2

0x1d44,	// (0x0001d710) shortcut_wheel_idle_act4_pane_ParamLimits

0x1d44,	// (0x0001d710) shortcut_wheel_idle_act4_pane

0xa36c,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g1

0xa36c,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g2

0xa36c,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g3

0xa36c,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g4

0xa36c,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g5

0xd6e1,	// (0x000290ad) shortcut_wheel_idle_act4_pane_g6

0xd6e9,	// (0x000290b5) shortcut_wheel_idle_act4_pane_g7

0xd6f1,	// (0x000290bd) shortcut_wheel_idle_act4_pane_g8

0xd6f9,	// (0x000290c5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x0002b70b) shortcut_wheel_idle_act4_pane_g

0xe4ab,	// (0x00029e77) middle_sk_idle_act4_pane_g1_ParamLimits

0xe4ab,	// (0x00029e77) middle_sk_idle_act4_pane_g1

0x1dc1,	// (0x0001d78d) middle_sk_idle_act4_pane_g2_ParamLimits

0x1dc1,	// (0x0001d78d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0002b72e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0002b72e) middle_sk_idle_act4_pane_g

0x1dd9,	// (0x0001d7a5) middle_sk_idle_act4_pane_t1_ParamLimits

0x1dd9,	// (0x0001d7a5) middle_sk_idle_act4_pane_t1

0x1e08,	// (0x0001d7d4) grid_ai_shortcut_pane_ParamLimits

0x1e08,	// (0x0001d7d4) grid_ai_shortcut_pane

0x1e25,	// (0x0001d7f1) list_highlight_pane_cp16_ParamLimits

0x1e25,	// (0x0001d7f1) list_highlight_pane_cp16

0x1e32,	// (0x0001d7fe) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x1e32,	// (0x0001d7fe) list_single_idle_plugin_shortcut_pane_g1

0x1e3e,	// (0x0001d80a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x1e3e,	// (0x0001d80a) list_single_idle_plugin_shortcut_pane_g2

0x1e5a,	// (0x0001d826) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x1e5a,	// (0x0001d826) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x0002b733) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x0002b733) list_single_idle_plugin_shortcut_pane_g

0x1e6f,	// (0x0001d83b) cell_ai_shortcut_pane_ParamLimits

0x1e6f,	// (0x0001d83b) cell_ai_shortcut_pane

0x1e85,	// (0x0001d851) cell_ai_shortcut_pane_g1_ParamLimits

0x1e85,	// (0x0001d851) cell_ai_shortcut_pane_g1

0xd6be,	// (0x0002908a) ai_gene_pane_1_cp2

0xd701,	// (0x000290cd) ai_gene_pane_2_cp2

0xd709,	// (0x000290d5) list_highlight_pane_cp15

0xd712,	// (0x000290de) list_single_idle_plugin_calendar_pane_g1

0xd709,	// (0x000290d5) list_highlight_pane_cp17

0xd71a,	// (0x000290e6) list_single_idle_plugin_calendar_pane_g1_copy1

0xd722,	// (0x000290ee) list_single_idle_plugin_player_pane_g1

0x96d0,	// (0x0002509c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0002b73a) list_single_idle_plugin_player_pane_g

0xd72a,	// (0x000290f6) list_single_idle_plugin_player_pane_t1

0xd738,	// (0x00029104) list_single_idle_plugin_player_pane_t2

0xd746,	// (0x00029112) list_single_idle_plugin_player_pane_t3

0xd754,	// (0x00029120) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x0002b73f) list_single_idle_plugin_player_pane_t

0xd762,	// (0x0002912e) wait_bar_pane_cp15

0xd76a,	// (0x00029136) grid_ai_notification_pane

0x96d0,	// (0x0002509c) list_single_idle_plugin_notification_pane_g1

0x1ea7,	// (0x0001d873) cell_ai_notification_pane_ParamLimits

0x1ea7,	// (0x0001d873) cell_ai_notification_pane

0xd773,	// (0x0002913f) cell_ai_notification_pane_g1

0xd77b,	// (0x00029147) cell_ai_notification_pane_t1

0x1eb4,	// (0x0001d880) tb_ext_find_button_pane

0x1ebc,	// (0x0001d888) tb_ext_find_pane_g1

0x1ec4,	// (0x0001d890) tb_ext_find_pane_t1

0x6f10,	// (0x000228dc) tb_ext_find_button_pane_g1

0xe20d,	// (0x00029bd9) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x0002b748) tb_ext_find_button_pane_g

0x1cd3,	// (0x0001d69f) main_idle_act4_pane_t1_ParamLimits

0x1ce9,	// (0x0001d6b5) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x0002b706) main_idle_act4_pane_t_ParamLimits

0x1d1d,	// (0x0001d6e9) popup_clock_digital_analogue_window_cp2_ParamLimits

0x1d34,	// (0x0001d700) sat_plugin_idle_act4_pane_ParamLimits

0x1d34,	// (0x0001d700) sat_plugin_idle_act4_pane

0x1ed2,	// (0x0001d89e) sat_plugin_idle_act4_pane_t1_ParamLimits

0x1ed2,	// (0x0001d89e) sat_plugin_idle_act4_pane_t1

0x1eea,	// (0x0001d8b6) sat_plugin_idle_act4_pane_t2_ParamLimits

0x1eea,	// (0x0001d8b6) sat_plugin_idle_act4_pane_t2

0x1f02,	// (0x0001d8ce) sat_plugin_idle_act4_pane_t3_ParamLimits

0x1f02,	// (0x0001d8ce) sat_plugin_idle_act4_pane_t3

0x1f1a,	// (0x0001d8e6) sat_plugin_idle_act4_pane_t4_ParamLimits

0x1f1a,	// (0x0001d8e6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x0002b74d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x0002b74d) sat_plugin_idle_act4_pane_t

0x3dad,	// (0x0001f779) popup_battery_window_ParamLimits

0x3dad,	// (0x0001f779) popup_battery_window

0x62e4,	// (0x00021cb0) bg_popup_sub_pane_cp25_ParamLimits

0x62e4,	// (0x00021cb0) bg_popup_sub_pane_cp25

0xe216,	// (0x00029be2) popup_battery_window_g1_ParamLimits

0xe216,	// (0x00029be2) popup_battery_window_g1

0xe222,	// (0x00029bee) popup_battery_window_t1_ParamLimits

0xe222,	// (0x00029bee) popup_battery_window_t1

0xe234,	// (0x00029c00) popup_battery_window_t2_ParamLimits

0xe234,	// (0x00029c00) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x0002b756) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x0002b756) popup_battery_window_t

0x06c7,	// (0x0001c093) midp_canvas_pane_ParamLimits

0x0724,	// (0x0001c0f0) midp_keypad_pane_ParamLimits

0x0724,	// (0x0001c0f0) midp_keypad_pane

0x7843,	// (0x0002320f) main_midp_pane_ParamLimits

0x9dfd,	// (0x000257c9) signal_pane_g2_cp_ParamLimits

0x1f32,	// (0x0001d8fe) aid_size_cell_midp_keypad_ParamLimits

0x1f32,	// (0x0001d8fe) aid_size_cell_midp_keypad

0x1f50,	// (0x0001d91c) midp_keyp_game_grid_pane_ParamLimits

0x1f50,	// (0x0001d91c) midp_keyp_game_grid_pane

0x1f77,	// (0x0001d943) midp_keyp_rocker_pane_ParamLimits

0x1f77,	// (0x0001d943) midp_keyp_rocker_pane

0x1fc0,	// (0x0001d98c) midp_keyp_sk_left_pane_ParamLimits

0x1fc0,	// (0x0001d98c) midp_keyp_sk_left_pane

0x2012,	// (0x0001d9de) midp_keyp_sk_right_pane_ParamLimits

0x2012,	// (0x0001d9de) midp_keyp_sk_right_pane

0x5f67,	// (0x00021933) bg_button_pane_cp03

0x2064,	// (0x0001da30) midp_keyp_sk_left_pane_g1

0x5f67,	// (0x00021933) bg_button_pane_cp04

0x2064,	// (0x0001da30) midp_keyp_sk_right_pane_g1

0xa36c,	// (0x00025d38) midp_keyp_rocker_pane_g1

0x206d,	// (0x0001da39) keyp_game_cell_pane_ParamLimits

0x206d,	// (0x0001da39) keyp_game_cell_pane

0x5f67,	// (0x00021933) bg_button_pane_cp02

0x2091,	// (0x0001da5d) keyp_game_cell_pane_g1

0xc257,	// (0x00027c23) popup_fep_vkb2_window_ParamLimits

0xc257,	// (0x00027c23) popup_fep_vkb2_window

0xd789,	// (0x00029155) aid_size_cell_vkb2_ParamLimits

0xd789,	// (0x00029155) aid_size_cell_vkb2

0xd7bf,	// (0x0002918b) popup_fep_vkb2_window_g1_ParamLimits

0xd7bf,	// (0x0002918b) popup_fep_vkb2_window_g1

0xd80f,	// (0x000291db) vkb2_area_bottom_pane_ParamLimits

0xd80f,	// (0x000291db) vkb2_area_bottom_pane

0xd863,	// (0x0002922f) vkb2_area_keypad_pane_ParamLimits

0xd863,	// (0x0002922f) vkb2_area_keypad_pane

0xd8ab,	// (0x00029277) vkb2_area_top_pane_ParamLimits

0xd8ab,	// (0x00029277) vkb2_area_top_pane

0xd931,	// (0x000292fd) vkb2_top_entry_pane_ParamLimits

0xd931,	// (0x000292fd) vkb2_top_entry_pane

0xd95e,	// (0x0002932a) vkb2_top_grid_left_pane_ParamLimits

0xd95e,	// (0x0002932a) vkb2_top_grid_left_pane

0xd97e,	// (0x0002934a) vkb2_top_grid_right_pane_ParamLimits

0xd97e,	// (0x0002934a) vkb2_top_grid_right_pane

0x55e7,	// (0x00020fb3) vkb2_cell_keypad_pane_ParamLimits

0x55e7,	// (0x00020fb3) vkb2_cell_keypad_pane

0xd9c4,	// (0x00029390) vkb2_area_bottom_grid_pane_ParamLimits

0xd9c4,	// (0x00029390) vkb2_area_bottom_grid_pane

0xd9ee,	// (0x000293ba) vkb2_area_bottom_pane_g1_ParamLimits

0xd9ee,	// (0x000293ba) vkb2_area_bottom_pane_g1

0xda14,	// (0x000293e0) vkb2_area_bottom_pane_g2_ParamLimits

0xda14,	// (0x000293e0) vkb2_area_bottom_pane_g2

0xda45,	// (0x00029411) vkb2_area_bottom_pane_g3_ParamLimits

0xda45,	// (0x00029411) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x0002b75b) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x0002b75b) vkb2_area_bottom_pane_g

0x5791,	// (0x0002115d) vkb2_top_cell_left_pane_ParamLimits

0x5791,	// (0x0002115d) vkb2_top_cell_left_pane

0xdaaf,	// (0x0002947b) vkb2_top_entry_pane_g1_ParamLimits

0xdaaf,	// (0x0002947b) vkb2_top_entry_pane_g1

0xdabd,	// (0x00029489) vkb2_top_entry_pane_t1_ParamLimits

0xdabd,	// (0x00029489) vkb2_top_entry_pane_t1

0xe259,	// (0x00029c25) vkb2_top_entry_pane_t2_ParamLimits

0xe259,	// (0x00029c25) vkb2_top_entry_pane_t2

0xe28b,	// (0x00029c57) vkb2_top_entry_pane_t3_ParamLimits

0xe28b,	// (0x00029c57) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x0002b762) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x0002b762) vkb2_top_entry_pane_t

0xdaf6,	// (0x000294c2) vkb2_top_grid_right_pane_g1_ParamLimits

0xdaf6,	// (0x000294c2) vkb2_top_grid_right_pane_g1

0x57f4,	// (0x000211c0) vkb2_top_grid_right_pane_g2_ParamLimits

0x57f4,	// (0x000211c0) vkb2_top_grid_right_pane_g2

0x580c,	// (0x000211d8) vkb2_top_grid_right_pane_g3_ParamLimits

0x580c,	// (0x000211d8) vkb2_top_grid_right_pane_g3

0xdb0c,	// (0x000294d8) vkb2_top_grid_right_pane_g4_ParamLimits

0xdb0c,	// (0x000294d8) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x0002b769) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x0002b769) vkb2_top_grid_right_pane_g

0x583a,	// (0x00021206) vkb2_top_cell_left_pane_g1

0x5851,	// (0x0002121d) vkb2_cell_keypad_pane_g1_ParamLimits

0x5851,	// (0x0002121d) vkb2_cell_keypad_pane_g1

0xe2af,	// (0x00029c7b) vkb2_cell_keypad_pane_t1_ParamLimits

0xe2af,	// (0x00029c7b) vkb2_cell_keypad_pane_t1

0x585f,	// (0x0002122b) vkb2_cell_bottom_grid_pane_ParamLimits

0x585f,	// (0x0002122b) vkb2_cell_bottom_grid_pane

0x5898,	// (0x00021264) vkb2_cell_bottom_grid_pane_g1

0x1d65,	// (0x0001d731) aid_call2_pane_cp02

0x1d6d,	// (0x0001d739) aid_call_pane_cp02

0x1d75,	// (0x0001d741) clock_digital_number_pane_cp10

0x1d7d,	// (0x0001d749) clock_digital_number_pane_cp11

0x1d85,	// (0x0001d751) clock_digital_number_pane_cp12

0x1d8d,	// (0x0001d759) clock_digital_number_pane_cp13

0x1d95,	// (0x0001d761) clock_digital_separator_pane_cp10

0x6f10,	// (0x000228dc) popup_clock_digital_analogue_window_cp2_g1

0x6f10,	// (0x000228dc) popup_clock_digital_analogue_window_cp2_g2

0x1d9d,	// (0x0001d769) popup_clock_digital_analogue_window_cp2_g3

0x6f10,	// (0x000228dc) popup_clock_digital_analogue_window_cp2_g4

0x1d9d,	// (0x0001d769) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x0002b71e) popup_clock_digital_analogue_window_cp2_g

0x1da5,	// (0x0001d771) popup_clock_digital_analogue_window_cp2_t1

0x1db3,	// (0x0001d77f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x0002b729) popup_clock_digital_analogue_window_cp2_t

0xa36c,	// (0x00025d38) clock_digital_number_pane_cp10_g1

0xa36c,	// (0x00025d38) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002b511) clock_digital_number_pane_cp10_g

0xa36c,	// (0x00025d38) clock_digital_separator_pane_cp10_g1

0xa36c,	// (0x00025d38) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002b511) clock_digital_separator_pane_cp10_g

0xd607,	// (0x00028fd3) uniindi_top_pane_g3

0xd618,	// (0x00028fe4) uniindi_top_pane_g4

0x5672,	// (0x0002103e) vkb2_row_keypad_pane_ParamLimits

0x5672,	// (0x0002103e) vkb2_row_keypad_pane

0x58b8,	// (0x00021284) vkb2_cell_t_keypad_pane_ParamLimits

0x58b8,	// (0x00021284) vkb2_cell_t_keypad_pane

0x58c8,	// (0x00021294) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x58c8,	// (0x00021294) vkb2_cell_t_keypad_pane_cp08

0x58db,	// (0x000212a7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x58db,	// (0x000212a7) vkb2_cell_t_keypad_pane_cp09

0x58ef,	// (0x000212bb) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x58ef,	// (0x000212bb) vkb2_cell_t_keypad_pane_cp01

0x5900,	// (0x000212cc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5900,	// (0x000212cc) vkb2_cell_t_keypad_pane_cp02

0x5911,	// (0x000212dd) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5911,	// (0x000212dd) vkb2_cell_t_keypad_pane_cp03

0x5922,	// (0x000212ee) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5922,	// (0x000212ee) vkb2_cell_t_keypad_pane_cp04

0x5933,	// (0x000212ff) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5933,	// (0x000212ff) vkb2_cell_t_keypad_pane_cp05

0x5944,	// (0x00021310) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5944,	// (0x00021310) vkb2_cell_t_keypad_pane_cp06

0x5955,	// (0x00021321) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5955,	// (0x00021321) vkb2_cell_t_keypad_pane_cp07

0x5966,	// (0x00021332) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5966,	// (0x00021332) vkb2_cell_t_keypad_pane_cp10

0xa5da,	// (0x00025fa6) vkb2_cell_t_keypad_pane_g1

0xe2c6,	// (0x00029c92) vkb2_cell_t_keypad_pane_t1

0x5f67,	// (0x00021933) popup_grid_graphic2_window

0xdb22,	// (0x000294ee) aid_size_cell_graphic2_ParamLimits

0xdb22,	// (0x000294ee) aid_size_cell_graphic2

0xdb60,	// (0x0002952c) bg_popup_window_pane_cp21_ParamLimits

0xdb60,	// (0x0002952c) bg_popup_window_pane_cp21

0xdb6e,	// (0x0002953a) graphic2_pages_pane_ParamLimits

0xdb6e,	// (0x0002953a) graphic2_pages_pane

0xdbc4,	// (0x00029590) grid_graphic2_control_pane_ParamLimits

0xdbc4,	// (0x00029590) grid_graphic2_control_pane

0xdc0c,	// (0x000295d8) grid_graphic2_pane_ParamLimits

0xdc0c,	// (0x000295d8) grid_graphic2_pane

0xdc93,	// (0x0002965f) cell_graphic2_pane

0x5f67,	// (0x00021933) main_comp_mode_pane

0xd213,	// (0x00028bdf) list_ai3_gene_pane_ParamLimits

0x1aa4,	// (0x0001d470) bg_popup_window_pane_cp19_ParamLimits

0xd37e,	// (0x00028d4a) bg_touch_area_indi_pane_ParamLimits

0xd37e,	// (0x00028d4a) bg_touch_area_indi_pane

0xd394,	// (0x00028d60) bg_touch_area_indi_pane_cp01_ParamLimits

0xd394,	// (0x00028d60) bg_touch_area_indi_pane_cp01

0xd3aa,	// (0x00028d76) bg_touch_area_indi_pane_cp02_ParamLimits

0xd3aa,	// (0x00028d76) bg_touch_area_indi_pane_cp02

0xd3c2,	// (0x00028d8e) bg_touch_area_indi_pane_cp03_ParamLimits

0xd3c2,	// (0x00028d8e) bg_touch_area_indi_pane_cp03

0xd3dc,	// (0x00028da8) popup_slider_window_g1_ParamLimits

0xd3f8,	// (0x00028dc4) popup_slider_window_g2_ParamLimits

0xd414,	// (0x00028de0) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x0002b6b3) popup_slider_window_g_ParamLimits

0xd430,	// (0x00028dfc) popup_slider_window_t1_ParamLimits

0xd476,	// (0x00028e42) small_volume_slider_vertical_pane_ParamLimits

0xdc93,	// (0x0002965f) cell_graphic2_pane_ParamLimits

0xdcf0,	// (0x000296bc) bg_button_pane_cp10_ParamLimits

0xdcf0,	// (0x000296bc) bg_button_pane_cp10

0xdd03,	// (0x000296cf) bg_button_pane_cp11_ParamLimits

0xdd03,	// (0x000296cf) bg_button_pane_cp11

0xdd16,	// (0x000296e2) graphic2_pages_pane_g1_ParamLimits

0xdd16,	// (0x000296e2) graphic2_pages_pane_g1

0xdd31,	// (0x000296fd) graphic2_pages_pane_g2_ParamLimits

0xdd31,	// (0x000296fd) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x0002b777) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x0002b777) graphic2_pages_pane_g

0xdd49,	// (0x00029715) graphic2_pages_pane_t1_ParamLimits

0xdd49,	// (0x00029715) graphic2_pages_pane_t1

0xdd61,	// (0x0002972d) cell_graphic2_control_pane_ParamLimits

0xdd61,	// (0x0002972d) cell_graphic2_control_pane

0xdd93,	// (0x0002975f) cell_graphic2_pane_g1_ParamLimits

0xdd93,	// (0x0002975f) cell_graphic2_pane_g1

0xe4b9,	// (0x00029e85) cell_graphic2_pane_g2_ParamLimits

0xe4b9,	// (0x00029e85) cell_graphic2_pane_g2

0xdda0,	// (0x0002976c) cell_graphic2_pane_g3_ParamLimits

0xdda0,	// (0x0002976c) cell_graphic2_pane_g3

0xe4c6,	// (0x00029e92) cell_graphic2_pane_g4_ParamLimits

0xe4c6,	// (0x00029e92) cell_graphic2_pane_g4

0xddad,	// (0x00029779) cell_graphic2_pane_g5_ParamLimits

0xddad,	// (0x00029779) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x0002b77c) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x0002b77c) cell_graphic2_pane_g

0xddcd,	// (0x00029799) cell_graphic2_pane_t1_ParamLimits

0xddcd,	// (0x00029799) cell_graphic2_pane_t1

0x8a49,	// (0x00024415) grid_highlight_pane_cp11_ParamLimits

0x8a49,	// (0x00024415) grid_highlight_pane_cp11

0x62e4,	// (0x00021cb0) bg_button_pane_cp05

0xde01,	// (0x000297cd) cell_graphic2_control_pane_g1

0xa36c,	// (0x00025d38) bg_touch_area_indi_pane_g1

0xe2d8,	// (0x00029ca4) aid_cmod_rocker_key_size

0xe2e2,	// (0x00029cae) aid_cmode_itu_key_size

0xe2ec,	// (0x00029cb8) main_cmode_video_pane

0xe2f6,	// (0x00029cc2) main_comp_mode_itu_pane

0xe302,	// (0x00029cce) main_comp_mode_rocker_pane

0xe30e,	// (0x00029cda) cell_cmode_rocker_pane_ParamLimits

0xe30e,	// (0x00029cda) cell_cmode_rocker_pane

0xe320,	// (0x00029cec) cell_cmode_itu_pane_ParamLimits

0xe320,	// (0x00029cec) cell_cmode_itu_pane

0x68ca,	// (0x00022296) bg_button_pane_cp06_ParamLimits

0x68ca,	// (0x00022296) bg_button_pane_cp06

0xa5da,	// (0x00025fa6) cell_cmode_rocker_pane_g1_ParamLimits

0xa5da,	// (0x00025fa6) cell_cmode_rocker_pane_g1

0xd4fa,	// (0x00028ec6) cell_cmode_rocker_pane_g2_ParamLimits

0xd4fa,	// (0x00028ec6) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x0002b78c) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x0002b78c) cell_cmode_rocker_pane_g

0x5f67,	// (0x00021933) bg_button_pane_cp07

0xe335,	// (0x00029d01) cell_cmode_itu_pane_g1

0xe33e,	// (0x00029d0a) cell_cmode_itu_pane_t1

0xe34c,	// (0x00029d18) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x0002b791) cell_cmode_itu_pane_t

0xd68a,	// (0x00029056) aid_touch_ctrl_left

0xd692,	// (0x0002905e) aid_touch_ctrl_right

0x5f67,	// (0x00021933) compa_mode_pane

0xde25,	// (0x000297f1) aid_cmod_rocker_key_size_cp

0xde2f,	// (0x000297fb) aid_cmode_itu_key_size_cp

0xe35a,	// (0x00029d26) compa_mode_pane_g1

0xe362,	// (0x00029d2e) compa_mode_pane_g2

0xe36a,	// (0x00029d36) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x0002b796) compa_mode_pane_g

0xde39,	// (0x00029805) main_comp_mode_itu_pane_cp

0xde41,	// (0x0002980d) main_comp_mode_rocker_pane_cp

0xde49,	// (0x00029815) cell_cmode_itu_pane_cp_ParamLimits

0xde49,	// (0x00029815) cell_cmode_itu_pane_cp

0xde5e,	// (0x0002982a) cell_cmode_rocker_pane_cp_ParamLimits

0xde5e,	// (0x0002982a) cell_cmode_rocker_pane_cp

0x68ca,	// (0x00022296) bg_button_pane_cp06_cp_ParamLimits

0x68ca,	// (0x00022296) bg_button_pane_cp06_cp

0xa5da,	// (0x00025fa6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xa5da,	// (0x00025fa6) cell_cmode_rocker_pane_g1_cp

0xa36c,	// (0x00025d38) cell_cmode_rocker_pane_g2_cp

0x5f67,	// (0x00021933) bg_button_pane_cp07_cp

0xde70,	// (0x0002983c) cell_cmode_itu_pane_g1_cp

0xde79,	// (0x00029845) cell_cmode_itu_pane_t1_cp

0xde79,	// (0x00029845) cell_cmode_itu_pane_t2_cp

0x0fe6,	// (0x0001c9b2) settings_code_pane_cp2

0x605b,	// (0x00021a27) bg_popup_window_pane_cp3_ParamLimits

0x64b2,	// (0x00021e7e) heading_pane_cp3_ParamLimits

0x64be,	// (0x00021e8a) listscroll_popup_graphic_pane_ParamLimits

0x4f8b,	// (0x00020957) fep_hwr_aid_pane_ParamLimits

0x5354,	// (0x00020d20) aid_touch_sctrl_top_ParamLimits

0x5361,	// (0x00020d2d) sctrl_sk_top_pane_g1_ParamLimits

0xa5da,	// (0x00025fa6) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0002b6cc) sctrl_sk_top_pane_g_ParamLimits

0x536e,	// (0x00020d3a) sctrl_sk_top_pane_t1_ParamLimits

0x5354,	// (0x00020d20) aid_touch_sctrl_bottom_ParamLimits

0x536e,	// (0x00020d3a) sctrl_sk_bottom_pane_t1_ParamLimits

0xd5d3,	// (0x00028f9f) aid_area_touch_clock

0xd8f3,	// (0x000292bf) aid_vkb2_area_top_pane_cell_ParamLimits

0xd8f3,	// (0x000292bf) aid_vkb2_area_top_pane_cell

0xd99e,	// (0x0002936a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd99e,	// (0x0002936a) aid_vkb2_area_bottom_pane_cell

0xe251,	// (0x00029c1d) popup_char_count_window

0xe372,	// (0x00029d3e) popup_char_count_window_g1

0xe37b,	// (0x00029d47) popup_char_count_window_g2

0xe384,	// (0x00029d50) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x0002b79d) popup_char_count_window_g

0xe38d,	// (0x00029d59) popup_char_count_window_t1

0x540f,	// (0x00020ddb) popup_fep_char_preview_window_ParamLimits

0x540f,	// (0x00020ddb) popup_fep_char_preview_window

0xd913,	// (0x000292df) vkb2_top_candi_pane_ParamLimits

0xd913,	// (0x000292df) vkb2_top_candi_pane

0xde87,	// (0x00029853) cell_vkb2_top_candi_pane_ParamLimits

0xde87,	// (0x00029853) cell_vkb2_top_candi_pane

0x83cd,	// (0x00023d99) bg_popup_fep_char_preview_window_ParamLimits

0x83cd,	// (0x00023d99) bg_popup_fep_char_preview_window

0x597b,	// (0x00021347) popup_fep_char_preview_window_t1_ParamLimits

0x597b,	// (0x00021347) popup_fep_char_preview_window_t1

0xe39b,	// (0x00029d67) bg_popup_fep_char_preview_window_g1

0xe3a3,	// (0x00029d6f) bg_popup_fep_char_preview_window_g2

0xe3ab,	// (0x00029d77) bg_popup_fep_char_preview_window_g3

0xe3b3,	// (0x00029d7f) bg_popup_fep_char_preview_window_g4

0xe3bb,	// (0x00029d87) bg_popup_fep_char_preview_window_g5

0x59b5,	// (0x00021381) bg_popup_fep_char_preview_window_g6

0xe3c3,	// (0x00029d8f) bg_popup_fep_char_preview_window_g7

0xe3cb,	// (0x00029d97) bg_popup_fep_char_preview_window_g8

0xe3d3,	// (0x00029d9f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x0002b7a4) bg_popup_fep_char_preview_window_g

0xa5da,	// (0x00025fa6) cell_vkb2_top_candi_pane_g1_ParamLimits

0xa5da,	// (0x00025fa6) cell_vkb2_top_candi_pane_g1

0xaa85,	// (0x00026451) cell_vkb2_top_candi_pane_g2_ParamLimits

0xaa85,	// (0x00026451) cell_vkb2_top_candi_pane_g2

0xaaa6,	// (0x00026472) cell_vkb2_top_candi_pane_g3_ParamLimits

0xaaa6,	// (0x00026472) cell_vkb2_top_candi_pane_g3

0x59bd,	// (0x00021389) cell_vkb2_top_candi_pane_g4_ParamLimits

0x59bd,	// (0x00021389) cell_vkb2_top_candi_pane_g4

0xe3db,	// (0x00029da7) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3db,	// (0x00029da7) cell_vkb2_top_candi_pane_g5

0xd4fa,	// (0x00028ec6) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd4fa,	// (0x00028ec6) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x0002b7b7) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x0002b7b7) cell_vkb2_top_candi_pane_g

0x59de,	// (0x000213aa) cell_vkb2_top_candi_pane_t1

0x4e09,	// (0x000207d5) aid_size_touch_slider_mark_ParamLimits

0x4e09,	// (0x000207d5) aid_size_touch_slider_mark

0xdbaa,	// (0x00029576) grid_graphic2_catg_pane_ParamLimits

0xdbaa,	// (0x00029576) grid_graphic2_catg_pane

0xdc66,	// (0x00029632) popup_grid_graphic2_window_t1_ParamLimits

0xdc66,	// (0x00029632) popup_grid_graphic2_window_t1

0xdc7c,	// (0x00029648) popup_grid_graphic2_window_t2_ParamLimits

0xdc7c,	// (0x00029648) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x0002b772) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x0002b772) popup_grid_graphic2_window_t

0x62e4,	// (0x00021cb0) bg_button_pane_cp05_ParamLimits

0xde01,	// (0x000297cd) cell_graphic2_control_pane_g1_ParamLimits

0xdeed,	// (0x000298b9) cell_graphic2_catg_pane_ParamLimits

0xdeed,	// (0x000298b9) cell_graphic2_catg_pane

0x5f67,	// (0x00021933) bg_button_pane_cp12

0xdeff,	// (0x000298cb) cell_graphic2_catg_pane_g1

0xd59f,	// (0x00028f6b) cell_tb_ext_pane_t1_ParamLimits

0x57b1,	// (0x0002117d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x57b1,	// (0x0002117d) vkb2_top_cell_right_narrow_pane

0x57c9,	// (0x00021195) vkb2_top_cell_right_wide_pane_ParamLimits

0x57c9,	// (0x00021195) vkb2_top_cell_right_wide_pane

0x4f7d,	// (0x00020949) bg_vkb2_func_pane_ParamLimits

0x4f7d,	// (0x00020949) bg_vkb2_func_pane

0x583a,	// (0x00021206) vkb2_top_cell_left_pane_g1_ParamLimits

0x4f7d,	// (0x00020949) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4f7d,	// (0x00020949) bg_vkb2_fuc_pane_cp03

0x5898,	// (0x00021264) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x7d4f,	// (0x0002371b) bg_vkb2_func_pane_g1

0x7d57,	// (0x00023723) bg_vkb2_func_pane_g2

0x7d67,	// (0x00023733) bg_vkb2_func_pane_g3

0x7d5f,	// (0x0002372b) bg_vkb2_func_pane_g4

0x7d6f,	// (0x0002373b) bg_vkb2_func_pane_g5

0x7d77,	// (0x00023743) bg_vkb2_func_pane_g6

0x7d7f,	// (0x0002374b) bg_vkb2_func_pane_g7

0x7d87,	// (0x00023753) bg_vkb2_func_pane_g8

0x7d47,	// (0x00023713) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x0002b7c4) bg_vkb2_func_pane_g

0x4f7d,	// (0x00020949) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4f7d,	// (0x00020949) bg_vkb2_fuc_pane_cp01

0x583a,	// (0x00021206) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x583a,	// (0x00021206) vkb2_top_cell_right_wide_pane_g1

0x4f7d,	// (0x00020949) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4f7d,	// (0x00020949) bg_vkb2_fuc_pane_cp02

0x5898,	// (0x00021264) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5898,	// (0x00021264) vkb2_top_cell_right_narrow_pane_g1

0x19de,	// (0x0001d3aa) aid_touch_area_decrease_ParamLimits

0x19de,	// (0x0001d3aa) aid_touch_area_decrease

0x1a18,	// (0x0001d3e4) aid_touch_area_increase_ParamLimits

0x1a18,	// (0x0001d3e4) aid_touch_area_increase

0x1a40,	// (0x0001d40c) aid_touch_area_mute_ParamLimits

0x1a40,	// (0x0001d40c) aid_touch_area_mute

0x1a70,	// (0x0001d43c) aid_touch_area_slider_ParamLimits

0x1a70,	// (0x0001d43c) aid_touch_area_slider

0x1ab0,	// (0x0001d47c) popup_slider_window_g4_ParamLimits

0x1ab0,	// (0x0001d47c) popup_slider_window_g4

0x1ad8,	// (0x0001d4a4) popup_slider_window_g5_ParamLimits

0x1ad8,	// (0x0001d4a4) popup_slider_window_g5

0x1b0c,	// (0x0001d4d8) popup_slider_window_g6_ParamLimits

0x1b0c,	// (0x0001d4d8) popup_slider_window_g6

0xd45e,	// (0x00028e2a) popup_slider_window_t2_ParamLimits

0xd45e,	// (0x00028e2a) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x0002b6c0) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x0002b6c0) popup_slider_window_t

0x1b28,	// (0x0001d4f4) slider_pane_ParamLimits

0x1b28,	// (0x0001d4f4) slider_pane

0xe3fc,	// (0x00029dc8) slider_pane_g1_ParamLimits

0xe3fc,	// (0x00029dc8) slider_pane_g1

0xe410,	// (0x00029ddc) slider_pane_g2_ParamLimits

0xe410,	// (0x00029ddc) slider_pane_g2

0xe426,	// (0x00029df2) slider_pane_g3_ParamLimits

0xe426,	// (0x00029df2) slider_pane_g3

0x0003,

0xfe0b,	// (0x0002b7d7) slider_pane_g_ParamLimits

0xfe0b,	// (0x0002b7d7) slider_pane_g

0xcaa7,	// (0x00028473) popup_tb_float_extension_window_ParamLimits

0xcaa7,	// (0x00028473) popup_tb_float_extension_window

0xe452,	// (0x00029e1e) aid_size_cell_tb_float_ext

0x5f67,	// (0x00021933) bg_popup_sub_window_cp28

0xe45e,	// (0x00029e2a) grid_tb_float_ext_pane

0xe468,	// (0x00029e34) cell_tb_float_ext_pane_ParamLimits

0xe468,	// (0x00029e34) cell_tb_float_ext_pane

0xe482,	// (0x00029e4e) cell_tb_float_ext_pane_g1

0xe48b,	// (0x00029e57) grid_highlight_pane_cp12

0xcd0c,	// (0x000286d8) cell_last_hwr_side_pane_ParamLimits

0xcd0c,	// (0x000286d8) cell_last_hwr_side_pane

0xa36c,	// (0x00025d38) cell_last_hwr_side_pane_g1

0xe494,	// (0x00029e60) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x0002b7e0) cell_last_hwr_side_pane_g

0xda7a,	// (0x00029446) vkb2_area_bottom_space_btn_pane_ParamLimits

0xda7a,	// (0x00029446) vkb2_area_bottom_space_btn_pane

0xa5da,	// (0x00025fa6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe2c6,	// (0x00029c92) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x59de,	// (0x000213aa) cell_vkb2_top_candi_pane_t1_ParamLimits

0x59fd,	// (0x000213c9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x59fd,	// (0x000213c9) vkb2_area_bottom_space_btn_pane_g1

0x5a37,	// (0x00021403) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5a37,	// (0x00021403) vkb2_area_bottom_space_btn_pane_g2

0x5a6d,	// (0x00021439) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5a6d,	// (0x00021439) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x0002b7e5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x0002b7e5) vkb2_area_bottom_space_btn_pane_g

0x5032,	// (0x000209fe) cel_fep_hwr_func_pane_ParamLimits

0x5032,	// (0x000209fe) cel_fep_hwr_func_pane

0xcce1,	// (0x000286ad) cell_hwr_side_button_pane_ParamLimits

0xcce1,	// (0x000286ad) cell_hwr_side_button_pane

0xd5d3,	// (0x00028f9f) aid_area_touch_clock_ParamLimits

0x62e4,	// (0x00021cb0) bg_uniindi_top_pane_ParamLimits

0xd5e5,	// (0x00028fb1) uniindi_top_pane_g1_ParamLimits

0xd5fb,	// (0x00028fc7) uniindi_top_pane_g2_ParamLimits

0xd607,	// (0x00028fd3) uniindi_top_pane_g3_ParamLimits

0xd618,	// (0x00028fe4) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x0002b6f8) uniindi_top_pane_g_ParamLimits

0xd625,	// (0x00028ff1) uniindi_top_pane_t1_ParamLimits

0x62e4,	// (0x00021cb0) bg_vkb2_func_pane_cp01_ParamLimits

0x62e4,	// (0x00021cb0) bg_vkb2_func_pane_cp01

0xe49d,	// (0x00029e69) cel_fep_hwr_func_pane_g1_ParamLimits

0xe49d,	// (0x00029e69) cel_fep_hwr_func_pane_g1

0x62e4,	// (0x00021cb0) bg_vkb2_func_pane_cp02_ParamLimits

0x62e4,	// (0x00021cb0) bg_vkb2_func_pane_cp02

0xe49d,	// (0x00029e69) cell_hwr_side_button_pane_g1_ParamLimits

0xe49d,	// (0x00029e69) cell_hwr_side_button_pane_g1

0x7bc8,	// (0x00023594) status_pane_g4_ParamLimits

0x7bc8,	// (0x00023594) status_pane_g4

0x7be2,	// (0x000235ae) status_pane_t1

0xa086,	// (0x00025a52) form2_midp_gauge_slider_cont_pane

0xa08e,	// (0x00025a5a) form2_midp_gauge_slider_pane_t1_ParamLimits

0x12b4,	// (0x0001cc80) form2_midp_gauge_slider_pane_t2_ParamLimits

0x12c8,	// (0x0001cc94) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0002b4c4) form2_midp_gauge_slider_pane_t_ParamLimits

0xa0c4,	// (0x00025a90) form2_midp_slider_pane_ParamLimits

0x53cf,	// (0x00020d9b) aid_size_cell_func_vkb2_ParamLimits

0x53cf,	// (0x00020d9b) aid_size_cell_func_vkb2

0xe43e,	// (0x00029e0a) slider_pane_g4_ParamLimits

0xe43e,	// (0x00029e0a) slider_pane_g4

0xdf08,	// (0x000298d4) form2_midp_gauge_slider_pane_t2_cp01

0xdf18,	// (0x000298e4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdf18,	// (0x000298e4) form2_midp_gauge_slider_pane_t3_cp01

0x5ae2,	// (0x000214ae) form2_midp_slider_pane_cp01

0x5f67,	// (0x00021933) navi_smil_pane

0xe4f5,	// (0x00029ec1) navi_smil_pane_g1

0xe4fd,	// (0x00029ec9) navi_smil_pane_t1

0xe4d3,	// (0x00029e9f) form2_midp_slider_pane_g1

0xe4dc,	// (0x00029ea8) form2_midp_slider_pane_g2

0xe4e4,	// (0x00029eb0) form2_midp_slider_pane_g3

0xe4d3,	// (0x00029e9f) form2_midp_slider_pane_g4

0xdf37,	// (0x00029903) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x0002b7ee) form2_midp_slider_pane_g

0x5aa7,	// (0x00021473) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5aa7,	// (0x00021473) vkb2_area_bottom_space_btn_pane_g4

0x08f6,	// (0x0001c2c2) lc0_navi_pane_ParamLimits

0x08f6,	// (0x0001c2c2) lc0_navi_pane

0x0960,	// (0x0001c32c) lc0_stat_indi_pane_ParamLimits

0x0960,	// (0x0001c32c) lc0_stat_indi_pane

0x0975,	// (0x0001c341) ls0_title_pane_ParamLimits

0x0975,	// (0x0001c341) ls0_title_pane

0x68ca,	// (0x00022296) bg_popup_sub_pane_cp14_ParamLimits

0xd5ba,	// (0x00028f86) list_uniindi_pane_ParamLimits

0xd5c6,	// (0x00028f92) uniindi_top_pane_ParamLimits

0xd662,	// (0x0002902e) list_single_uniindi_pane_g1_ParamLimits

0xd675,	// (0x00029041) list_single_uniindi_pane_t1_ParamLimits

0xdf42,	// (0x0002990e) lc0_stat_clock_pane_ParamLimits

0xdf42,	// (0x0002990e) lc0_stat_clock_pane

0xdf4f,	// (0x0002991b) lc0_stat_indi_pane_g1_ParamLimits

0xdf4f,	// (0x0002991b) lc0_stat_indi_pane_g1

0xdf5c,	// (0x00029928) lc0_stat_indi_pane_g2_ParamLimits

0xdf5c,	// (0x00029928) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x0002b7f9) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x0002b7f9) lc0_stat_indi_pane_g

0xdf69,	// (0x00029935) lc0_uni_indicator_pane_ParamLimits

0xdf69,	// (0x00029935) lc0_uni_indicator_pane

0xdf76,	// (0x00029942) ls0_title_pane_g1_ParamLimits

0xdf76,	// (0x00029942) ls0_title_pane_g1

0xdf8a,	// (0x00029956) ls0_title_pane_t1_ParamLimits

0xdf8a,	// (0x00029956) ls0_title_pane_t1

0xdfb8,	// (0x00029984) lc0_uni_indicator_pane_g1_ParamLimits

0xdfb8,	// (0x00029984) lc0_uni_indicator_pane_g1

0xe50b,	// (0x00029ed7) lc0_stat_clock_pane_t1

0x5f67,	// (0x00021933) main_ai5_pane

0xe519,	// (0x00029ee5) ai5_sk_pane_ParamLimits

0xe519,	// (0x00029ee5) ai5_sk_pane

0xdfe6,	// (0x000299b2) cell_ai5_widget_pane_ParamLimits

0xdfe6,	// (0x000299b2) cell_ai5_widget_pane

0xe526,	// (0x00029ef2) aid_size_cell_widget_grid

0xe53c,	// (0x00029f08) bg_ai5_widget_pane_ParamLimits

0xe53c,	// (0x00029f08) bg_ai5_widget_pane

0xe5a6,	// (0x00029f72) cell_ai5_widget_pane_g2

0xe5b6,	// (0x00029f82) cell_ai5_widget_pane_g3

0xe5d5,	// (0x00029fa1) cell_ai5_widget_pane_g4

0xe5e1,	// (0x00029fad) cell_ai5_widget_pane_g5

0xe5ed,	// (0x00029fb9) cell_ai5_widget_pane_g6

0xe5f9,	// (0x00029fc5) cell_ai5_widget_pane_g7

0xe641,	// (0x0002a00d) cell_ai5_widget_pane_t1_ParamLimits

0xe641,	// (0x0002a00d) cell_ai5_widget_pane_t1

0xe65e,	// (0x0002a02a) cell_ai5_widget_pane_t2_ParamLimits

0xe65e,	// (0x0002a02a) cell_ai5_widget_pane_t2

0xe676,	// (0x0002a042) cell_ai5_widget_pane_t3_ParamLimits

0xe676,	// (0x0002a042) cell_ai5_widget_pane_t3

0xe68e,	// (0x0002a05a) cell_ai5_widget_pane_t4_ParamLimits

0xe68e,	// (0x0002a05a) cell_ai5_widget_pane_t4

0xe6a8,	// (0x0002a074) cell_ai5_widget_pane_t5_ParamLimits

0xe6a8,	// (0x0002a074) cell_ai5_widget_pane_t5

0xe6c7,	// (0x0002a093) cell_ai5_widget_pane_t6_ParamLimits

0xe6c7,	// (0x0002a093) cell_ai5_widget_pane_t6

0xe6d9,	// (0x0002a0a5) cell_ai5_widget_pane_t7_ParamLimits

0xe6d9,	// (0x0002a0a5) cell_ai5_widget_pane_t7

0xe6f2,	// (0x0002a0be) cell_ai5_widget_pane_t8_ParamLimits

0xe6f2,	// (0x0002a0be) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x0002b813) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x0002b813) cell_ai5_widget_pane_t

0xe73e,	// (0x0002a10a) grid_ai5_widget_pane

0x68ca,	// (0x00022296) highlight_cell_ai5_widget_pane_ParamLimits

0x68ca,	// (0x00022296) highlight_cell_ai5_widget_pane

0xe050,	// (0x00029a1c) ai5_sk_left_pane

0xe05a,	// (0x00029a26) ai5_sk_middle_pane

0xe064,	// (0x00029a30) ai5_sk_right_pane

0xe756,	// (0x0002a122) bg_ai5_widget_pane_g1_ParamLimits

0xe756,	// (0x0002a122) bg_ai5_widget_pane_g1

0xe762,	// (0x0002a12e) bg_ai5_widget_pane_g2_ParamLimits

0xe762,	// (0x0002a12e) bg_ai5_widget_pane_g2

0xe76e,	// (0x0002a13a) bg_ai5_widget_pane_g3_ParamLimits

0xe76e,	// (0x0002a13a) bg_ai5_widget_pane_g3

0xe77a,	// (0x0002a146) bg_ai5_widget_pane_g4_ParamLimits

0xe77a,	// (0x0002a146) bg_ai5_widget_pane_g4

0xe786,	// (0x0002a152) bg_ai5_widget_pane_g5_ParamLimits

0xe786,	// (0x0002a152) bg_ai5_widget_pane_g5

0xe792,	// (0x0002a15e) bg_ai5_widget_pane_g6_ParamLimits

0xe792,	// (0x0002a15e) bg_ai5_widget_pane_g6

0xe79e,	// (0x0002a16a) bg_ai5_widget_pane_g7_ParamLimits

0xe79e,	// (0x0002a16a) bg_ai5_widget_pane_g7

0xe7aa,	// (0x0002a176) bg_ai5_widget_pane_g8_ParamLimits

0xe7aa,	// (0x0002a176) bg_ai5_widget_pane_g8

0xe7b6,	// (0x0002a182) bg_ai5_widget_pane_g9_ParamLimits

0xe7b6,	// (0x0002a182) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x0002b828) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x0002b828) bg_ai5_widget_pane_g

0xe7e9,	// (0x0002a1b5) cell_shortcut_ai5_widget_pane_ParamLimits

0xe7e9,	// (0x0002a1b5) cell_shortcut_ai5_widget_pane

0x7507,	// (0x00022ed3) bg_cell_shortcut_ai5_widget_pane

0xe7fa,	// (0x0002a1c6) cell_grid_ai5_widget_pane_g1

0xe803,	// (0x0002a1cf) highlight_cell_shortcut_ai5_widget_pane

0x7d57,	// (0x00023723) ai5_sk_left_pane_g1

0xe80b,	// (0x0002a1d7) ai5_sk_left_pane_g2

0xe813,	// (0x0002a1df) ai5_sk_left_pane_g3

0xe81b,	// (0x0002a1e7) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0002b83b) ai5_sk_left_pane_g

0xe823,	// (0x0002a1ef) ai5_sk_left_pane_t1

0x7d4f,	// (0x0002371b) ai5_sk_right_pane_g1

0xe831,	// (0x0002a1fd) ai5_sk_right_pane_g2

0xe839,	// (0x0002a205) ai5_sk_right_pane_g3

0xe841,	// (0x0002a20d) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x0002b844) ai5_sk_right_pane_g

0xe849,	// (0x0002a215) ai5_sk_right_pane_t1

0x7d4f,	// (0x0002371b) ai5_sk_middle_pane_g1

0x7d57,	// (0x00023723) ai5_sk_middle_pane_g2

0x7d6f,	// (0x0002373b) ai5_sk_middle_pane_g3

0xe839,	// (0x0002a205) ai5_sk_middle_pane_g4

0xe813,	// (0x0002a1df) ai5_sk_middle_pane_g5

0xe857,	// (0x0002a223) ai5_sk_middle_pane_g6

0xe06e,	// (0x00029a3a) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0002b84d) ai5_sk_middle_pane_g

0x07e2,	// (0x0001c1ae) aid_touch_area_size_lc0_ParamLimits

0x07e2,	// (0x0001c1ae) aid_touch_area_size_lc0

0x51bd,	// (0x00020b89) cell_hwr_candidate_pane_t1_ParamLimits

0x78a5,	// (0x00023271) aid_touch_navi_pane

0x0a68,	// (0x0001c434) status_dt_navi_pane_ParamLimits

0x0a68,	// (0x0001c434) status_dt_navi_pane

0x0a80,	// (0x0001c44c) status_dt_sta_pane_ParamLimits

0x0a80,	// (0x0001c44c) status_dt_sta_pane

0xe076,	// (0x00029a42) dt_sta_controll_pane

0xe083,	// (0x00029a4f) dt_sta_indi_pane

0xe090,	// (0x00029a5c) dt_sta_title_pane

0x62e4,	// (0x00021cb0) bg_dt_sta_indi_pane_ParamLimits

0x62e4,	// (0x00021cb0) bg_dt_sta_indi_pane

0xe85f,	// (0x0002a22b) dt_sta_battery_pane

0xe0a2,	// (0x00029a6e) dt_sta_indi_pane_g1

0xe0ab,	// (0x00029a77) dt_sta_indi_pane_g2

0xe0b4,	// (0x00029a80) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x0002b85c) dt_sta_indi_pane_g

0xe0bd,	// (0x00029a89) dt_sta_signal_pane

0x68ca,	// (0x00022296) bg_dt_sta_title_pane_ParamLimits

0x68ca,	// (0x00022296) bg_dt_sta_title_pane

0xe867,	// (0x0002a233) dt_sta_title_pane_g1

0xe0c6,	// (0x00029a92) dt_sta_title_pane_t1_ParamLimits

0xe0c6,	// (0x00029a92) dt_sta_title_pane_t1

0x5f67,	// (0x00021933) bg_dt_sta_control_pane

0xe0db,	// (0x00029aa7) dt_sta_controll_pane_g1

0xe86f,	// (0x0002a23b) bg_dt_sta_title_pane_g1

0xe878,	// (0x0002a244) bg_dt_sta_title_pane_g2

0xe881,	// (0x0002a24d) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x0002b863) bg_dt_sta_title_pane_g

0xa36c,	// (0x00025d38) bg_dt_sta_indi_pane_g1

0xe88a,	// (0x0002a256) dt_sta_signal_pane_g1

0xe892,	// (0x0002a25e) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x0002b86a) dt_sta_signal_pane_g

0xe89a,	// (0x0002a266) dt_sta_battery_pane_g1

0xe8a3,	// (0x0002a26f) dt_sta_battery_pane_t1

0xa36c,	// (0x00025d38) bg_dt_sta_control_pane_g1

0x701e,	// (0x000229ea) fep_china_uni_eep_pane

0x7026,	// (0x000229f2) fep_china_uni_entry_pane_ParamLimits

0x7036,	// (0x00022a02) popup_fep_china_uni_window_g1_ParamLimits

0x7046,	// (0x00022a12) popup_fep_china_uni_window_g2_ParamLimits

0x7046,	// (0x00022a12) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0002b0ef) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0002b0ef) popup_fep_china_uni_window_g

0xe8b2,	// (0x0002a27e) fep_china_uni_eep_pane_g1

0xe8ba,	// (0x0002a286) fep_china_uni_eep_pane_t1

0xe4ec,	// (0x00029eb8) aid_touch_area_size_smil_player

0x79f5,	// (0x000233c1) lc0_clock_pane

0x7bd6,	// (0x000235a2) status_pane_g5_ParamLimits

0x7bd6,	// (0x000235a2) status_pane_g5

0xc635,	// (0x00028001) popup_keymap_window

0x7b94,	// (0x00023560) status_icon_pane

0xe5b6,	// (0x00029f82) cell_ai5_widget_pane_g3_ParamLimits

0xe5d5,	// (0x00029fa1) cell_ai5_widget_pane_g4_ParamLimits

0xe5e1,	// (0x00029fad) cell_ai5_widget_pane_g5_ParamLimits

0xe605,	// (0x00029fd1) cell_ai5_widget_pane_g8_ParamLimits

0xe605,	// (0x00029fd1) cell_ai5_widget_pane_g8

0xe619,	// (0x00029fe5) cell_ai5_widget_pane_g9_ParamLimits

0xe619,	// (0x00029fe5) cell_ai5_widget_pane_g9

0xe62d,	// (0x00029ff9) cell_ai5_widget_pane_g10_ParamLimits

0xe62d,	// (0x00029ff9) cell_ai5_widget_pane_g10

0xe8c9,	// (0x0002a295) status_icon_pane_g1

0x5f67,	// (0x00021933) bg_popup_sub_pane_cp13

0xe8d1,	// (0x0002a29d) popup_keymap_window_t1

0x0786,	// (0x0001c152) control_pane_g6_ParamLimits

0x0786,	// (0x0001c152) control_pane_g6

0x0779,	// (0x0001c145) control_pane_g7_ParamLimits

0x0779,	// (0x0001c145) control_pane_g7

0x076c,	// (0x0001c138) control_pane_g8_ParamLimits

0x076c,	// (0x0001c138) control_pane_g8

0xe076,	// (0x00029a42) dt_sta_controll_pane_ParamLimits

0xe083,	// (0x00029a4f) dt_sta_indi_pane_ParamLimits

0xe090,	// (0x00029a5c) dt_sta_title_pane_ParamLimits

0x67ea,	// (0x000221b6) aid_size_touch_scroll_bar_cale

0x3dc1,	// (0x0001f78d) popup_discreet_window_ParamLimits

0x3dc1,	// (0x0001f78d) popup_discreet_window

0xc29d,	// (0x00027c69) popup_sk_window

0x83cd,	// (0x00023d99) bg_popup_sub_pane_cp28_ParamLimits

0x83cd,	// (0x00023d99) bg_popup_sub_pane_cp28

0xe8df,	// (0x0002a2ab) popup_discreet_window_g1_ParamLimits

0xe8df,	// (0x0002a2ab) popup_discreet_window_g1

0xe8ff,	// (0x0002a2cb) popup_discreet_window_t1_ParamLimits

0xe8ff,	// (0x0002a2cb) popup_discreet_window_t1

0xe91d,	// (0x0002a2e9) popup_discreet_window_t2_ParamLimits

0xe91d,	// (0x0002a2e9) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x0002b86f) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x0002b86f) popup_discreet_window_t

0x5cea,	// (0x000216b6) popup_sk_window_g1

0x5cf4,	// (0x000216c0) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x0002b876) popup_sk_window_g

0x5cfe,	// (0x000216ca) popup_sk_window_t1

0x5d0c,	// (0x000216d8) popup_sk_window_t1_copy1

0xe5a6,	// (0x00029f72) cell_ai5_widget_pane_g2_ParamLimits

0xe704,	// (0x0002a0d0) cell_ai5_widget_pane_t9_ParamLimits

0xe704,	// (0x0002a0d0) cell_ai5_widget_pane_t9

0x5f67,	// (0x00021933) main_fep_fshwr2_pane

0xe0e4,	// (0x00029ab0) aid_fshwr2_btn_pane

0xe0f3,	// (0x00029abf) aid_fshwr2_syb_pane

0xe105,	// (0x00029ad1) aid_fshwr2_txt_pane

0xe114,	// (0x00029ae0) fshwr2_func_candi_pane

0xe125,	// (0x00029af1) fshwr2_hwr_syb_pane

0xe140,	// (0x00029b0c) fshwr2_icf_pane

0x5f67,	// (0x00021933) fshwr2_icf_bg_pane

0xe158,	// (0x00029b24) fshwr2_icf_pane_t1_ParamLimits

0xe158,	// (0x00029b24) fshwr2_icf_pane_t1

0xa36c,	// (0x00025d38) fshwr2_func_candi_pane_g1

0xe96f,	// (0x0002a33b) fshwr2_func_candi_row_pane_ParamLimits

0xe96f,	// (0x0002a33b) fshwr2_func_candi_row_pane

0xe171,	// (0x00029b3d) cell_fshwr2_syb_pane_ParamLimits

0xe171,	// (0x00029b3d) cell_fshwr2_syb_pane

0xa5da,	// (0x00025fa6) fshwr2_hwr_syb_pane_g1_ParamLimits

0xa5da,	// (0x00025fa6) fshwr2_hwr_syb_pane_g1

0x5f67,	// (0x00021933) bg_popup_call_pane_cp01

0xe980,	// (0x0002a34c) fshwr2_func_candi_cell_pane_ParamLimits

0xe980,	// (0x0002a34c) fshwr2_func_candi_cell_pane

0xe9ae,	// (0x0002a37a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe9ae,	// (0x0002a37a) fshwr2_func_candi_cell_bg_pane

0xe9c8,	// (0x0002a394) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe9c8,	// (0x0002a394) fshwr2_func_candi_cell_pane_g1

0xe9e8,	// (0x0002a3b4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe9e8,	// (0x0002a3b4) fshwr2_func_candi_cell_pane_t1

0x5f67,	// (0x00021933) bg_button_pane_cp08

0x7507,	// (0x00022ed3) cell_fshwr2_syb_bg_pane

0xe18b,	// (0x00029b57) cell_fshwr2_syb_bg_pane_g1

0xe193,	// (0x00029b5f) cell_fshwr2_syb_bg_pane_t1

0x68ca,	// (0x00022296) main_tmo_pane

0x0e2f,	// (0x0001c7fb) uni_indicator_pane_g1_ParamLimits

0x0e44,	// (0x0001c810) uni_indicator_pane_g2_ParamLimits

0x8f0d,	// (0x000248d9) uni_indicator_pane_g3_ParamLimits

0x8f23,	// (0x000248ef) uni_indicator_pane_g4_ParamLimits

0x8f23,	// (0x000248ef) uni_indicator_pane_g4

0x8f37,	// (0x00024903) uni_indicator_pane_g5_ParamLimits

0x8f37,	// (0x00024903) uni_indicator_pane_g5

0x8f4b,	// (0x00024917) uni_indicator_pane_g6_ParamLimits

0x8f4b,	// (0x00024917) uni_indicator_pane_g6

0xf91b,	// (0x0002b2e7) uni_indicator_pane_g_ParamLimits

0x19c0,	// (0x0001d38c) popup_tmo_note_window_ParamLimits

0x19c0,	// (0x0001d38c) popup_tmo_note_window

0x68ca,	// (0x00022296) fshwr2_bg_pane

0xe9d9,	// (0x0002a3a5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe9d9,	// (0x0002a3a5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x0002b87b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x0002b87b) fshwr2_func_candi_cell_pane_g

0xa36c,	// (0x00025d38) bg_popup_window_pane_cp01

0xe9fb,	// (0x0002a3c7) bg_popup_window_pane_g1_cp01

0xea04,	// (0x0002a3d0) bg_popup_window_pane_cp22_ParamLimits

0xea04,	// (0x0002a3d0) bg_popup_window_pane_cp22

0xea12,	// (0x0002a3de) listscroll_tmo_link_pane_ParamLimits

0xea12,	// (0x0002a3de) listscroll_tmo_link_pane

0xea52,	// (0x0002a41e) popup_tmo_note_window_g1_ParamLimits

0xea52,	// (0x0002a41e) popup_tmo_note_window_g1

0xea5f,	// (0x0002a42b) tmo_note_info_pane_ParamLimits

0xea5f,	// (0x0002a42b) tmo_note_info_pane

0xe1a2,	// (0x00029b6e) list_tmo_note_info_pane_g1_ParamLimits

0xe1a2,	// (0x00029b6e) list_tmo_note_info_pane_g1

0xea79,	// (0x0002a445) list_tmo_note_info_pane_g2_ParamLimits

0xea79,	// (0x0002a445) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x0002b880) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x0002b880) list_tmo_note_info_pane_g

0xea95,	// (0x0002a461) list_tmo_note_info_text_pane_ParamLimits

0xea95,	// (0x0002a461) list_tmo_note_info_text_pane

0xead7,	// (0x0002a4a3) list_tmo_link_pane

0xeae4,	// (0x0002a4b0) scroll_pane_cp20

0xeaf1,	// (0x0002a4bd) list_single_tmo_link_pane_ParamLimits

0xeaf1,	// (0x0002a4bd) list_single_tmo_link_pane

0xeb01,	// (0x0002a4cd) list_single_tmo_link_pane_t1

0xeb0f,	// (0x0002a4db) list_tmo_note_info_text_pane_t1_ParamLimits

0xeb0f,	// (0x0002a4db) list_tmo_note_info_text_pane_t1

0x03dc,	// (0x0001bda8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x03dc,	// (0x0001bda8) aid_size_touch_scroll_bar_cp01

0xbda6,	// (0x00027772) aid_size_touch_slider_marker

0xc28d,	// (0x00027c59) popup_settings_window_ParamLimits

0xc28d,	// (0x00027c59) popup_settings_window

0x3208,	// (0x0001ebd4) popup_candi_list_indi_window

0x78a5,	// (0x00023271) aid_touch_navi_pane_ParamLimits

0x5328,	// (0x00020cf4) rs_clock_indi_pane

0x5331,	// (0x00020cfd) sctrl_sk_bottom_pane_ParamLimits

0x5342,	// (0x00020d0e) sctrl_sk_top_pane_ParamLimits

0x5429,	// (0x00020df5) popup_fep_tooltip_window

0xe526,	// (0x00029ef2) aid_size_cell_widget_grid_ParamLimits

0xe59a,	// (0x00029f66) cell_ai5_widget_pane_g1_ParamLimits

0xe59a,	// (0x00029f66) cell_ai5_widget_pane_g1

0xe5ed,	// (0x00029fb9) cell_ai5_widget_pane_g6_ParamLimits

0xe5f9,	// (0x00029fc5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x0002b7fe) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x0002b7fe) cell_ai5_widget_pane_g

0xe728,	// (0x0002a0f4) cell_ai5_widget_pane_t10_ParamLimits

0xe728,	// (0x0002a0f4) cell_ai5_widget_pane_t10

0xe73e,	// (0x0002a10a) grid_ai5_widget_pane_ParamLimits

0xe7c2,	// (0x0002a18e) cell_contacts_ai5_widget_pane_ParamLimits

0xe7c2,	// (0x0002a18e) cell_contacts_ai5_widget_pane

0xe932,	// (0x0002a2fe) popup_discreet_window_t3_ParamLimits

0xe932,	// (0x0002a2fe) popup_discreet_window_t3

0x5d78,	// (0x00021744) popup_fshwr2_char_preview_window_ParamLimits

0x5d78,	// (0x00021744) popup_fshwr2_char_preview_window

0xe1b9,	// (0x00029b85) tmo_note_info_pane_t1

0xe1ce,	// (0x00029b9a) tmo_note_info_pane_t2

0xe1e7,	// (0x00029bb3) tmo_note_info_pane_t3

0xeab3,	// (0x0002a47f) tmo_note_info_pane_t4

0xeac5,	// (0x0002a491) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x0002b885) tmo_note_info_pane_t

0xead7,	// (0x0002a4a3) list_tmo_link_pane_ParamLimits

0xeae4,	// (0x0002a4b0) scroll_pane_cp20_ParamLimits

0x5f67,	// (0x00021933) bg_popup_fep_char_preview_window_cp01

0xeb28,	// (0x0002a4f4) popup_fshwr2_char_preview_window_t1

0xeb36,	// (0x0002a502) popup_candi_list_indi_window_g1

0xeb3f,	// (0x0002a50b) bg_cell_contacts_ai5_widget_pane

0xeb4b,	// (0x0002a517) cell_contacts_ai5_widget_pane_g1

0xeb5e,	// (0x0002a52a) cell_contacts_ai5_widget_pane_g2

0xeb6a,	// (0x0002a536) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x0002b890) cell_contacts_ai5_widget_pane_g

0xeb7c,	// (0x0002a548) cell_contacts_ai5_widget_pane_t1

0x68ca,	// (0x00022296) highlight_cell_shortcut_ai5_widget_pane_cp01

0xebf6,	// (0x0002a5c2) settings_container_pane

0x7507,	// (0x00022ed3) listscroll_set_pane_copy1

0x9a32,	// (0x000253fe) scroll_pane_cp121_copy1

0xec02,	// (0x0002a5ce) set_content_pane_copy1

0xec0a,	// (0x0002a5d6) aid_height_set_list_copy1_ParamLimits

0xec0a,	// (0x0002a5d6) aid_height_set_list_copy1

0x913e,	// (0x00024b0a) aid_size_parent_copy1_ParamLimits

0x913e,	// (0x00024b0a) aid_size_parent_copy1

0xec16,	// (0x0002a5e2) button_value_adjust_pane_cp6_copy1_ParamLimits

0xec16,	// (0x0002a5e2) button_value_adjust_pane_cp6_copy1

0x7843,	// (0x0002320f) list_highlight_pane_cp2_copy1_ParamLimits

0x7843,	// (0x0002320f) list_highlight_pane_cp2_copy1

0xec2a,	// (0x0002a5f6) list_set_pane_copy1_ParamLimits

0xec2a,	// (0x0002a5f6) list_set_pane_copy1

0xeb91,	// (0x0002a55d) main_pane_set_t1_copy1_ParamLimits

0xeb91,	// (0x0002a55d) main_pane_set_t1_copy1

0xebcb,	// (0x0002a597) main_pane_set_t2_copy1_ParamLimits

0xebcb,	// (0x0002a597) main_pane_set_t2_copy1

0xecd7,	// (0x0002a6a3) main_pane_set_t3_copy1

0xece5,	// (0x0002a6b1) main_pane_set_t4_copy1

0xebea,	// (0x0002a5b6) set_content_pane_g1_copy1_ParamLimits

0xebea,	// (0x0002a5b6) set_content_pane_g1_copy1

0xecf3,	// (0x0002a6bf) setting_code_pane_copy1

0xecfb,	// (0x0002a6c7) setting_slider_graphic_pane_copy1

0xecfb,	// (0x0002a6c7) setting_slider_pane_copy1

0xecfb,	// (0x0002a6c7) setting_text_pane_copy1

0xecfb,	// (0x0002a6c7) setting_volume_pane_copy1

0xecf3,	// (0x0002a6bf) settings_code_pane_cp2_copy1

0xed03,	// (0x0002a6cf) settings_code_pane_cp_copy1_ParamLimits

0xed03,	// (0x0002a6cf) settings_code_pane_cp_copy1

0x5e2e,	// (0x000217fa) volume_set_pane_copy1

0xed17,	// (0x0002a6e3) volume_set_pane_g10_copy1

0xed1f,	// (0x0002a6eb) volume_set_pane_g1_copy1

0xed27,	// (0x0002a6f3) volume_set_pane_g2_copy1

0xed2f,	// (0x0002a6fb) volume_set_pane_g3_copy1

0xed37,	// (0x0002a703) volume_set_pane_g4_copy1

0xed3f,	// (0x0002a70b) volume_set_pane_g5_copy1

0xed47,	// (0x0002a713) volume_set_pane_g6_copy1

0xed4f,	// (0x0002a71b) volume_set_pane_g7_copy1

0xed57,	// (0x0002a723) volume_set_pane_g8_copy1

0xed5f,	// (0x0002a72b) volume_set_pane_g9_copy1

0x605b,	// (0x00021a27) bg_set_opt_pane_cp_copy1_ParamLimits

0x605b,	// (0x00021a27) bg_set_opt_pane_cp_copy1

0x5e36,	// (0x00021802) setting_slider_pane_t1_copy1_ParamLimits

0x5e36,	// (0x00021802) setting_slider_pane_t1_copy1

0x5e54,	// (0x00021820) setting_slider_pane_t2_copy1_ParamLimits

0x5e54,	// (0x00021820) setting_slider_pane_t2_copy1

0x5e6e,	// (0x0002183a) setting_slider_pane_t3_copy1_ParamLimits

0x5e6e,	// (0x0002183a) setting_slider_pane_t3_copy1

0x5e86,	// (0x00021852) slider_set_pane_copy1_ParamLimits

0x5e86,	// (0x00021852) slider_set_pane_copy1

0x6919,	// (0x000222e5) set_opt_bg_pane_g1_copy2

0x6921,	// (0x000222ed) set_opt_bg_pane_g2_copy2

0xed67,	// (0x0002a733) set_opt_bg_pane_g3_copy2

0x6931,	// (0x000222fd) set_opt_bg_pane_g4_copy2

0x6939,	// (0x00022305) set_opt_bg_pane_g5_copy2

0x6941,	// (0x0002230d) set_opt_bg_pane_g6_copy2

0xed71,	// (0x0002a73d) set_opt_bg_pane_g7_copy2

0xed79,	// (0x0002a745) set_opt_bg_pane_g8_copy2

0xed83,	// (0x0002a74f) set_opt_bg_pane_g9_copy2

0xed8d,	// (0x0002a759) aid_size_touch_slider_mark_copy1_ParamLimits

0xed8d,	// (0x0002a759) aid_size_touch_slider_mark_copy1

0xeda1,	// (0x0002a76d) slider_set_pane_g1_copy1

0xedaa,	// (0x0002a776) slider_set_pane_g2_copy1

0x9467,	// (0x00024e33) slider_set_pane_g3_copy1_ParamLimits

0x9467,	// (0x00024e33) slider_set_pane_g3_copy1

0x947b,	// (0x00024e47) slider_set_pane_g4_copy1_ParamLimits

0x947b,	// (0x00024e47) slider_set_pane_g4_copy1

0x9493,	// (0x00024e5f) slider_set_pane_g5_copy1_ParamLimits

0x9493,	// (0x00024e5f) slider_set_pane_g5_copy1

0x9467,	// (0x00024e33) slider_set_pane_g6_copy1_ParamLimits

0x9467,	// (0x00024e33) slider_set_pane_g6_copy1

0xedb2,	// (0x0002a77e) slider_set_pane_g7_copy1_ParamLimits

0xedb2,	// (0x0002a77e) slider_set_pane_g7_copy1

0x5f7b,	// (0x00021947) bg_set_opt_pane_cp2_copy1

0xedc8,	// (0x0002a794) setting_slider_graphic_pane_g1_copy1

0xedd1,	// (0x0002a79d) setting_slider_graphic_pane_t1_copy1

0xede1,	// (0x0002a7ad) setting_slider_graphic_pane_t2_copy1

0xedf1,	// (0x0002a7bd) slider_set_pane_cp_copy1

0xee01,	// (0x0002a7cd) input_focus_pane_cp1_copy1

0xee0a,	// (0x0002a7d6) list_set_text_pane_copy1

0xee12,	// (0x0002a7de) setting_text_pane_g1_copy1

0x3b36,	// (0x0001f502) set_text_pane_t1_copy1

0xee01,	// (0x0002a7cd) input_focus_pane_cp2_copy1

0xee12,	// (0x0002a7de) setting_code_pane_g1_copy1

0xee1b,	// (0x0002a7e7) setting_code_pane_t1_copy1

0x9867,	// (0x00025233) list_set_graphic_pane_copy1

0x5f7b,	// (0x00021947) bg_set_opt_pane_cp4_copy1

0x721d,	// (0x00022be9) list_set_graphic_pane_g1_copy1_ParamLimits

0x721d,	// (0x00022be9) list_set_graphic_pane_g1_copy1

0xee29,	// (0x0002a7f5) list_set_graphic_pane_g2_copy1

0x7235,	// (0x00022c01) list_set_graphic_pane_t1_copy1_ParamLimits

0x7235,	// (0x00022c01) list_set_graphic_pane_t1_copy1

0xa36c,	// (0x00025d38) rs_clock_indi_pane_g1

0xee31,	// (0x0002a7fd) rs_clock_indi_pane_t1

0xee3f,	// (0x0002a80b) rs_indi_pane

0xee47,	// (0x0002a813) rs_indi_pane_g1

0xee50,	// (0x0002a81c) rs_indi_pane_g2

0xee59,	// (0x0002a825) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x0002b897) rs_indi_pane_g

0x7507,	// (0x00022ed3) bg_popup_preview_window_pane_cp03

0xee62,	// (0x0002a82e) popup_fep_tooltip_window_t1

0xcd52,	// (0x0002871e) popup_note2_window_g2_ParamLimits

0xcd52,	// (0x0002871e) popup_note2_window_g2

0x0001,

0xfc64,	// (0x0002b630) popup_note2_window_g_ParamLimits

0xfc64,	// (0x0002b630) popup_note2_window_g

0xd1d9,	// (0x00028ba5) bg_popup_sub_pane_cp11_ParamLimits

0xd1e6,	// (0x00028bb2) cell_ai3_links_pane_g1_ParamLimits

0xd1fd,	// (0x00028bc9) cell_ai3_links_pane_t1

0x3b36,	// (0x0001f502) set_text_pane_t1_copy1_ParamLimits

0x06a1,	// (0x0001c06d) cell_graphic_popup_pane_cp2_ParamLimits

0x06a1,	// (0x0001c06d) cell_graphic_popup_pane_cp2

0xe1fc,	// (0x00029bc8) cell_graphic_popup_pane_g1_cp2

0x65fd,	// (0x00021fc9) cell_graphic_popup_pane_g2_cp2

0xee70,	// (0x0002a83c) cell_graphic_popup_pane_g3_cp2

0xee78,	// (0x0002a844) cell_graphic_popup_pane_t2_cp2

0x660e,	// (0x00021fda) grid_highlight_pane_cp3_cp2

0x6c59,	// (0x00022625) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x68ca,	// (0x00022296) main_tmo_pane_ParamLimits

0x19b4,	// (0x0001d380) popup_tmo_big_image_note_window

0xe58a,	// (0x00029f56) cell_ai5_widget_list_pane

0xe592,	// (0x00029f5e) cell_ai5_widget_lrg_icon_pane

0xe1b9,	// (0x00029b85) tmo_note_info_pane_t1_ParamLimits

0xe1ce,	// (0x00029b9a) tmo_note_info_pane_t2_ParamLimits

0xe1e7,	// (0x00029bb3) tmo_note_info_pane_t3_ParamLimits

0xeab3,	// (0x0002a47f) tmo_note_info_pane_t4_ParamLimits

0xeac5,	// (0x0002a491) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x0002b885) tmo_note_info_pane_t_ParamLimits

0xebf6,	// (0x0002a5c2) settings_container_pane_ParamLimits

0xedf9,	// (0x0002a7c5) indicator_popup_pane_cp5

0xedf9,	// (0x0002a7c5) indicator_popup_pane_cp6

0x9867,	// (0x00025233) list_set_graphic_pane_copy1_ParamLimits

0x5f67,	// (0x00021933) bg_popup_window_pane_cp23

0xee86,	// (0x0002a852) popup_tmo_big_image_note_window_g1

0xee8f,	// (0x0002a85b) popup_tmo_big_image_note_window_t1

0xee9f,	// (0x0002a86b) popup_tmo_big_image_note_window_t2

0xeeaf,	// (0x0002a87b) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x0002b89e) popup_tmo_big_image_note_window_t

0xeebf,	// (0x0002a88b) cell_ai5_widget_lrg_icon_pane_g1

0xeec7,	// (0x0002a893) cell_ai5_widget_lrg_icon_pane_t1

0xeed5,	// (0x0002a8a1) cell_ai5_widget_list_row_pane_ParamLimits

0xeed5,	// (0x0002a8a1) cell_ai5_widget_list_row_pane

0xeeed,	// (0x0002a8b9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeeed,	// (0x0002a8b9) cell_ai5_widget_list_row_pane_g1

0xeefa,	// (0x0002a8c6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeefa,	// (0x0002a8c6) cell_ai5_widget_list_row_pane_t1

0xef12,	// (0x0002a8de) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xef12,	// (0x0002a8de) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x0002b8a5) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x0002b8a5) cell_ai5_widget_list_row_pane_t

0x5f67,	// (0x00021933) main_fep_vtchi_ss_pane

0x5eb3,	// (0x0002187f) popup_fep_char_pre_window

0x5ebb,	// (0x00021887) popup_fep_ituss_window

0x5edc,	// (0x000218a8) popup_fep_vkbss_window

0xef3a,	// (0x0002a906) grid_vkbss_keypad_pane_ParamLimits

0xef3a,	// (0x0002a906) grid_vkbss_keypad_pane

0xef4a,	// (0x0002a916) ituss_keypad_pane

0x5f07,	// (0x000218d3) aid_vkbss_key_offset_ParamLimits

0x5f07,	// (0x000218d3) aid_vkbss_key_offset

0x5f13,	// (0x000218df) cell_vkbss_key_pane_ParamLimits

0x5f13,	// (0x000218df) cell_vkbss_key_pane

0x7bb0,	// (0x0002357c) bg_cell_vkbss_key_g1_ParamLimits

0x7bb0,	// (0x0002357c) bg_cell_vkbss_key_g1

0xef5a,	// (0x0002a926) cell_vkbss_key_3p_pane_ParamLimits

0xef5a,	// (0x0002a926) cell_vkbss_key_3p_pane

0xef74,	// (0x0002a940) cell_vkbss_key_g1_ParamLimits

0xef74,	// (0x0002a940) cell_vkbss_key_g1

0xef8e,	// (0x0002a95a) cell_vkbss_key_t1_ParamLimits

0xef8e,	// (0x0002a95a) cell_vkbss_key_t1

0x5f29,	// (0x000218f5) cell_ituss_key_pane_ParamLimits

0x5f29,	// (0x000218f5) cell_ituss_key_pane

0xefb9,	// (0x0002a985) bg_cell_ituss_key_g1_ParamLimits

0xefb9,	// (0x0002a985) bg_cell_ituss_key_g1

0xefc5,	// (0x0002a991) cell_ituss_key_pane_g1_ParamLimits

0xefc5,	// (0x0002a991) cell_ituss_key_pane_g1

0xefd9,	// (0x0002a9a5) cell_ituss_key_pane_g2_ParamLimits

0xefd9,	// (0x0002a9a5) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x0002b8ac) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x0002b8ac) cell_ituss_key_pane_g

0xf007,	// (0x0002a9d3) cell_ituss_key_t1_ParamLimits

0xf007,	// (0x0002a9d3) cell_ituss_key_t1

0xf03d,	// (0x0002aa09) cell_ituss_key_t2_ParamLimits

0xf03d,	// (0x0002aa09) cell_ituss_key_t2

0xf06e,	// (0x0002aa3a) cell_ituss_key_t3_ParamLimits

0xf06e,	// (0x0002aa3a) cell_ituss_key_t3

0xf0a8,	// (0x0002aa74) cell_ituss_key_t4_ParamLimits

0xf0a8,	// (0x0002aa74) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x0002b8b1) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x0002b8b1) cell_ituss_key_t

0xf0e2,	// (0x0002aaae) cell_vkbss_key_3p_pane_g1

0xf0ea,	// (0x0002aab6) cell_vkbss_key_3p_pane_g2

0xf0f2,	// (0x0002aabe) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0002b8ba) cell_vkbss_key_3p_pane_g

0x5f67,	// (0x00021933) bg_popup_fep_char_preview_window_cp02

0xf0fa,	// (0x0002aac6) popup_fep_char_pre_window_t1

0xe046,	// (0x00029a12) main_ai5_sk_pane

0xeb3f,	// (0x0002a50b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeb4b,	// (0x0002a517) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeb5e,	// (0x0002a52a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeb6a,	// (0x0002a536) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x0002b890) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeb7c,	// (0x0002a548) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x68ca,	// (0x00022296) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe204,	// (0x00029bd0) main_ai5_sk_pane_g1

0x820b,	// (0x00023bd7) popup_query_code_window_g1

0x5ed1,	// (0x0002189d) popup_fep_vkb_icf_pane

0x5ee5,	// (0x000218b1) popup_fep_vtchi_icf_pane

0x68ca,	// (0x00022296) bg_icf_pane

0xf138,	// (0x0002ab04) list_vkb_icf_pane

0x68ca,	// (0x00022296) bg_icf_pane_cp01

0xf144,	// (0x0002ab10) vtchi_icf_list_pane

0xf155,	// (0x0002ab21) list_vkb_icf_pane_t1_ParamLimits

0xf155,	// (0x0002ab21) list_vkb_icf_pane_t1

0xf16e,	// (0x0002ab3a) vtchi_icf_list_pane_t1_ParamLimits

0xf16e,	// (0x0002ab3a) vtchi_icf_list_pane_t1

0x5ebb,	// (0x00021887) popup_fep_ituss_window_ParamLimits

0x5ee5,	// (0x000218b1) popup_fep_vtchi_icf_pane_ParamLimits

0xef4a,	// (0x0002a916) ituss_keypad_pane_ParamLimits

0x5efb,	// (0x000218c7) ituss_sks_pane

0x68ca,	// (0x00022296) bg_icf_pane_ParamLimits

0x5ea4,	// (0x00021870) icf_edit_indi_pane_ParamLimits

0x5ea4,	// (0x00021870) icf_edit_indi_pane

0xf138,	// (0x0002ab04) list_vkb_icf_pane_ParamLimits

0x68ca,	// (0x00022296) bg_icf_pane_cp01_ParamLimits

0x5ea4,	// (0x00021870) icf_edit_indi_pane_cp01_ParamLimits

0x5ea4,	// (0x00021870) icf_edit_indi_pane_cp01

0xf14c,	// (0x0002ab18) vtchi_query_pane

0xa5da,	// (0x00025fa6) icf_edit_indi_pane_g1_ParamLimits

0xa5da,	// (0x00025fa6) icf_edit_indi_pane_g1

0xf1fb,	// (0x0002abc7) icf_edit_indi_pane_g2_ParamLimits

0xf1fb,	// (0x0002abc7) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x0002b8d2) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x0002b8d2) icf_edit_indi_pane_g

0xf20a,	// (0x0002abd6) icf_edit_indi_pane_t1

0xf191,	// (0x0002ab5d) bg_input_focus_pane_cp042

0x67e1,	// (0x000221ad) vtchi_button_pane

0xf19a,	// (0x0002ab66) vtchi_query_pane_t1

0xf1a8,	// (0x0002ab74) vtchi_query_pane_t2

0xf1b6,	// (0x0002ab82) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x0002b8c1) vtchi_query_pane_t

0x5f67,	// (0x00021933) bg_button_pane_cp13

0xf1c4,	// (0x0002ab90) vtchi_button_pane_g1

0xf1cc,	// (0x0002ab98) ituss_sks_pane_g1

0xf1d7,	// (0x0002aba3) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x0002b8c8) ituss_sks_pane_g

0xf1df,	// (0x0002abab) ituss_sks_pane_t1

0xf1ed,	// (0x0002abb9) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x0002b8cd) ituss_sks_pane_t

0x9db6,	// (0x00025782) indicator_nsta_pane_cp_g1

0x9dbf,	// (0x0002578b) indicator_nsta_pane_cp_g2

0x9dc7,	// (0x00025793) indicator_nsta_pane_cp_g3

0x9dcf,	// (0x0002579b) indicator_nsta_pane_cp_g4

0x9dd7,	// (0x000257a3) indicator_nsta_pane_cp_g5

0x9dd7,	// (0x000257a3) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0002b47a) indicator_nsta_pane_cp_g

0xdde4,	// (0x000297b0) cell_graphic2_pane_t2_ParamLimits

0xdde4,	// (0x000297b0) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x0002b787) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x0002b787) cell_graphic2_pane_t

0xde17,	// (0x000297e3) cell_graphic2_control_pane_t1

0x059d,	// (0x0001bf69) signal_pane_g3_ParamLimits

0x059d,	// (0x0001bf69) signal_pane_g3

0x05b1,	// (0x0001bf7d) signal_pane_g4_ParamLimits

0x05b1,	// (0x0001bf7d) signal_pane_g4

0xef24,	// (0x0002a8f0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xef24,	// (0x0002a8f0) cell_ai5_widget_list_row_pane_t3

0xeff5,	// (0x0002a9c1) cell_ituss_key_pane_t1_ParamLimits

0xeff5,	// (0x0002a9c1) cell_ituss_key_pane_t1

0x7e49,	// (0x00023815) form_field_data_wide_pane_vc_t2_ParamLimits

0x7e49,	// (0x00023815) form_field_data_wide_pane_vc_t2

0x7e5d,	// (0x00023829) form_field_data_wide_pane_vc_t3_ParamLimits

0x7e5d,	// (0x00023829) form_field_data_wide_pane_vc_t3

0x0002,

0xf803,	// (0x0002b1cf) form_field_data_wide_pane_vc_t_ParamLimits

0xf803,	// (0x0002b1cf) form_field_data_wide_pane_vc_t

0x9a72,	// (0x0002543e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x9a72,	// (0x0002543e) form_field_slider_wide_pane_vc_t3

0x9b4c,	// (0x00025518) form_field_popup_wide_pane_vc_t2_ParamLimits

0x9b4c,	// (0x00025518) form_field_popup_wide_pane_vc_t2

0x9b63,	// (0x0002552f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x9b63,	// (0x0002552f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9d,	// (0x0002b469) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9d,	// (0x0002b469) form_field_popup_wide_pane_vc_t

0xe0e4,	// (0x00029ab0) aid_fshwr2_btn_pane_ParamLimits

0xe0f3,	// (0x00029abf) aid_fshwr2_syb_pane_ParamLimits

0xe105,	// (0x00029ad1) aid_fshwr2_txt_pane_ParamLimits

0x68ca,	// (0x00022296) fshwr2_bg_pane_ParamLimits

0xe114,	// (0x00029ae0) fshwr2_func_candi_pane_ParamLimits

0xe125,	// (0x00029af1) fshwr2_hwr_syb_pane_ParamLimits

0xe140,	// (0x00029b0c) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small

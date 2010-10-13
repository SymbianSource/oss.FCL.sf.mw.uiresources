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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005d68a };

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
0x8e49,	// (0x000664d3) Screen

0x8e55,	// (0x000664df) application_window_ParamLimits

0x8e55,	// (0x000664df) application_window

0x6fd1,	// (0x0006465b) screen_g1

0x8e8d,	// (0x00066517) area_bottom_pane_ParamLimits

0x8e8d,	// (0x00066517) area_bottom_pane

0x8f4b,	// (0x000665d5) area_top_pane_ParamLimits

0x8f4b,	// (0x000665d5) area_top_pane

0x8fdf,	// (0x00066669) main_pane_ParamLimits

0x8fdf,	// (0x00066669) main_pane

0x6fdb,	// (0x00064665) misc_graphics

0xadb6,	// (0x00068440) battery_pane_ParamLimits

0xadb6,	// (0x00068440) battery_pane

0x27c9,	// (0x0005fe53) bg_status_flat_pane_g8

0x27d1,	// (0x0005fe5b) bg_status_flat_pane_g9

0x037c,	// (0x0005da06) context_pane_ParamLimits

0x037c,	// (0x0005da06) context_pane

0xaf21,	// (0x000685ab) navi_pane_ParamLimits

0xaf21,	// (0x000685ab) navi_pane

0xaf9f,	// (0x00068629) signal_pane_ParamLimits

0xaf9f,	// (0x00068629) signal_pane

0x0008,

0xf83e,	// (0x0006cec8) bg_status_flat_pane_g

0xb02f,	// (0x000686b9) status_pane_g1_ParamLimits

0xb02f,	// (0x000686b9) status_pane_g1

0xb045,	// (0x000686cf) status_pane_g2_ParamLimits

0xb045,	// (0x000686cf) status_pane_g2

0x1dca,	// (0x0005f454) status_pane_g3_ParamLimits

0x1dca,	// (0x0005f454) status_pane_g3

0x0004,

0xf771,	// (0x0006cdfb) status_pane_g_ParamLimits

0xf771,	// (0x0006cdfb) status_pane_g

0xb051,	// (0x000686db) title_pane_ParamLimits

0xb051,	// (0x000686db) title_pane

0xb0b4,	// (0x0006873e) uni_indicator_pane_ParamLimits

0xb0b4,	// (0x0006873e) uni_indicator_pane

0xc55d,	// (0x00069be7) bg_list_pane_ParamLimits

0xc55d,	// (0x00069be7) bg_list_pane

0xa5a4,	// (0x00067c2e) find_pane

0x1fde,	// (0x0005f668) listscroll_app_pane_ParamLimits

0x1fde,	// (0x0005f668) listscroll_app_pane

0xc57d,	// (0x00069c07) listscroll_form_pane

0xa5ac,	// (0x00067c36) listscroll_gen_pane_ParamLimits

0xa5ac,	// (0x00067c36) listscroll_gen_pane

0xf4c5,	// (0x0006cb4f) listscroll_set_pane

0x332d,	// (0x000609b7) main_idle_act_pane

0xc3f1,	// (0x00069a7b) main_idle_trad_pane

0xc3f1,	// (0x00069a7b) main_list_empty_pane

0x8441,	// (0x00065acb) main_midp_pane

0xc597,	// (0x00069c21) main_pane_g1_ParamLimits

0xc597,	// (0x00069c21) main_pane_g1

0xa5c0,	// (0x00067c4a) popup_ai_message_window_ParamLimits

0xa5c0,	// (0x00067c4a) popup_ai_message_window

0xa671,	// (0x00067cfb) popup_fep_china_uni_window_ParamLimits

0xa671,	// (0x00067cfb) popup_fep_china_uni_window

0xa6cb,	// (0x00067d55) popup_fep_japan_candidate_window_ParamLimits

0xa6cb,	// (0x00067d55) popup_fep_japan_candidate_window

0xa6e9,	// (0x00067d73) popup_fep_japan_predictive_window_ParamLimits

0xa6e9,	// (0x00067d73) popup_fep_japan_predictive_window

0xa6fb,	// (0x00067d85) popup_find_window

0xa718,	// (0x00067da2) popup_grid_graphic_window_ParamLimits

0xa718,	// (0x00067da2) popup_grid_graphic_window

0xf503,	// (0x0006cb8d) popup_large_graphic_colour_window

0xa7b6,	// (0x00067e40) popup_menu_window_ParamLimits

0xa7b6,	// (0x00067e40) popup_menu_window

0xa988,	// (0x00068012) popup_note_image_window

0xa94e,	// (0x00067fd8) popup_note_wait_window_ParamLimits

0xa94e,	// (0x00067fd8) popup_note_wait_window

0xa9a0,	// (0x0006802a) popup_note_window_ParamLimits

0xa9a0,	// (0x0006802a) popup_note_window

0xaa4f,	// (0x000680d9) popup_query_code_window_ParamLimits

0xaa4f,	// (0x000680d9) popup_query_code_window

0xaa89,	// (0x00068113) popup_query_data_code_window_ParamLimits

0xaa89,	// (0x00068113) popup_query_data_code_window

0xaaa6,	// (0x00068130) popup_query_data_window_ParamLimits

0xaaa6,	// (0x00068130) popup_query_data_window

0xab28,	// (0x000681b2) popup_query_sat_info_window_ParamLimits

0xab28,	// (0x000681b2) popup_query_sat_info_window

0xabbf,	// (0x00068249) popup_snote_single_graphic_window_ParamLimits

0xabbf,	// (0x00068249) popup_snote_single_graphic_window

0xabbf,	// (0x00068249) popup_snote_single_text_window_ParamLimits

0xabbf,	// (0x00068249) popup_snote_single_text_window

0x00f3,	// (0x0005d77d) popup_sub_window_general

0xad1c,	// (0x000683a6) popup_window_general_ParamLimits

0xad1c,	// (0x000683a6) popup_window_general

0x0238,	// (0x0005d8c2) power_save_pane

0xa3fe,	// (0x00067a88) control_pane_g1_ParamLimits

0xa3fe,	// (0x00067a88) control_pane_g1

0xa427,	// (0x00067ab1) control_pane_g2_ParamLimits

0xa427,	// (0x00067ab1) control_pane_g2

0xc547,	// (0x00069bd1) control_pane_g3_ParamLimits

0xc547,	// (0x00069bd1) control_pane_g3

0x0007,

0xf759,	// (0x0006cde3) control_pane_g_ParamLimits

0xf759,	// (0x0006cde3) control_pane_g

0xa48f,	// (0x00067b19) control_pane_t1_ParamLimits

0xa48f,	// (0x00067b19) control_pane_t1

0xa4f7,	// (0x00067b81) control_pane_t2_ParamLimits

0xa4f7,	// (0x00067b81) control_pane_t2

0x0002,

0xf76a,	// (0x0006cdf4) control_pane_t_ParamLimits

0xf76a,	// (0x0006cdf4) control_pane_t

0xa375,	// (0x000679ff) navi_navi_volume_pane_cp1

0xa37d,	// (0x00067a07) status_small_icon_pane

0xc4f3,	// (0x00069b7d) status_small_pane_g1_ParamLimits

0xc4f3,	// (0x00069b7d) status_small_pane_g1

0xa385,	// (0x00067a0f) status_small_pane_g2_ParamLimits

0xa385,	// (0x00067a0f) status_small_pane_g2

0xc527,	// (0x00069bb1) status_small_pane_g3_ParamLimits

0xc527,	// (0x00069bb1) status_small_pane_g3

0xa391,	// (0x00067a1b) status_small_pane_g4_ParamLimits

0xa391,	// (0x00067a1b) status_small_pane_g4

0xa39f,	// (0x00067a29) status_small_pane_g5_ParamLimits

0xa39f,	// (0x00067a29) status_small_pane_g5

0xa3ad,	// (0x00067a37) status_small_pane_g6_ParamLimits

0xa3ad,	// (0x00067a37) status_small_pane_g6

0x0007,

0xf748,	// (0x0006cdd2) status_small_pane_g_ParamLimits

0xf748,	// (0x0006cdd2) status_small_pane_g

0xa3c8,	// (0x00067a52) status_small_pane_t1

0xa3ea,	// (0x00067a74) status_small_wait_pane_ParamLimits

0xa3ea,	// (0x00067a74) status_small_wait_pane

0xa05c,	// (0x000676e6) aid_levels_signal_ParamLimits

0xa05c,	// (0x000676e6) aid_levels_signal

0xa074,	// (0x000676fe) signal_pane_g1_ParamLimits

0xa074,	// (0x000676fe) signal_pane_g1

0xa08f,	// (0x00067719) signal_pane_g2_ParamLimits

0xa08f,	// (0x00067719) signal_pane_g2

0x0003,

0xf6d9,	// (0x0006cd63) signal_pane_g_ParamLimits

0xf6d9,	// (0x0006cd63) signal_pane_g

0xbfeb,	// (0x00069675) context_pane_g1

0x91da,	// (0x00066864) title_pane_g1

0x9211,	// (0x0006689b) title_pane_t1

0x6ff1,	// (0x0006467b) title_pane_t2

0x7017,	// (0x000646a1) title_pane_t3

0x0002,

0xf532,	// (0x0006cbbc) title_pane_t

0xb0dc,	// (0x00068766) aid_levels_battery_ParamLimits

0xb0dc,	// (0x00068766) aid_levels_battery

0xb0f8,	// (0x00068782) battery_pane_g1_ParamLimits

0xb0f8,	// (0x00068782) battery_pane_g1

0xb115,	// (0x0006879f) battery_pane_g2_ParamLimits

0xb115,	// (0x0006879f) battery_pane_g2

0x0001,

0xf77c,	// (0x0006ce06) battery_pane_g_ParamLimits

0xf77c,	// (0x0006ce06) battery_pane_g

0xc966,	// (0x00069ff0) uni_indicator_pane_g1

0xc97c,	// (0x0006a006) uni_indicator_pane_g2

0xc992,	// (0x0006a01c) uni_indicator_pane_g3

0x0005,

0xf8e6,	// (0x0006cf70) uni_indicator_pane_g

0xc294,	// (0x0006991e) navi_icon_pane_ParamLimits

0xc294,	// (0x0006991e) navi_icon_pane

0xc1dd,	// (0x00069867) navi_midp_pane

0xc2b0,	// (0x0006993a) navi_navi_pane

0xc2ba,	// (0x00069944) navi_text_pane_ParamLimits

0xc2ba,	// (0x00069944) navi_text_pane

0x6fd1,	// (0x0006465b) status_small_wait_pane_g1

0x7268,	// (0x000648f2) status_small_wait_pane_g2

0x0001,

0xf8e1,	// (0x0006cf6b) status_small_wait_pane_g

0xc8bf,	// (0x00069f49) navi_navi_icon_text_pane

0x2e1c,	// (0x000604a6) navi_navi_pane_g1_ParamLimits

0x2e1c,	// (0x000604a6) navi_navi_pane_g1

0x2e2e,	// (0x000604b8) navi_navi_pane_g2_ParamLimits

0x2e2e,	// (0x000604b8) navi_navi_pane_g2

0x0001,

0xf8af,	// (0x0006cf39) navi_navi_pane_g_ParamLimits

0xf8af,	// (0x0006cf39) navi_navi_pane_g

0x2e40,	// (0x000604ca) navi_navi_tabs_pane

0x2e49,	// (0x000604d3) navi_navi_text_pane

0xc8bf,	// (0x00069f49) navi_navi_volume_pane

0x2df0,	// (0x0006047a) navi_text_pane_t1

0x2de4,	// (0x0006046e) navi_icon_pane_g1

0x2d37,	// (0x000603c1) navi_navi_text_pane_t1

0xb3d8,	// (0x00068a62) navi_navi_volume_pane_g1

0x0838,	// (0x0005dec2) volume_small_pane

0x2c9d,	// (0x00060327) navi_navi_icon_text_pane_g1

0xc817,	// (0x00069ea1) navi_navi_icon_text_pane_t1

0xc2b0,	// (0x0006993a) navi_tabs_2_long_pane

0xc2b0,	// (0x0006993a) navi_tabs_2_pane

0xc2b0,	// (0x0006993a) navi_tabs_3_long_pane

0xc2b0,	// (0x0006993a) navi_tabs_3_pane

0xc2b0,	// (0x0006993a) navi_tabs_4_pane

0x0810,	// (0x0005de9a) tabs_2_active_pane_ParamLimits

0x0810,	// (0x0005de9a) tabs_2_active_pane

0x0820,	// (0x0005deaa) tabs_2_passive_pane_ParamLimits

0x0820,	// (0x0005deaa) tabs_2_passive_pane

0x07de,	// (0x0005de68) tabs_3_active_pane_ParamLimits

0x07de,	// (0x0005de68) tabs_3_active_pane

0x07ee,	// (0x0005de78) tabs_3_passive_pane_ParamLimits

0x07ee,	// (0x0005de78) tabs_3_passive_pane

0x07ff,	// (0x0005de89) tabs_3_passive_pane_cp_ParamLimits

0x07ff,	// (0x0005de89) tabs_3_passive_pane_cp

0x079a,	// (0x0005de24) tabs_4_active_pane_ParamLimits

0x079a,	// (0x0005de24) tabs_4_active_pane

0x07ab,	// (0x0005de35) tabs_4_passive_pane_ParamLimits

0x07ab,	// (0x0005de35) tabs_4_passive_pane

0x07bc,	// (0x0005de46) tabs_4_passive_pane_cp_ParamLimits

0x07bc,	// (0x0005de46) tabs_4_passive_pane_cp

0x07cd,	// (0x0005de57) tabs_4_passive_pane_cp2_ParamLimits

0x07cd,	// (0x0005de57) tabs_4_passive_pane_cp2

0x0776,	// (0x0005de00) tabs_2_long_active_pane_ParamLimits

0x0776,	// (0x0005de00) tabs_2_long_active_pane

0x0788,	// (0x0005de12) tabs_2_long_passive_pane_ParamLimits

0x0788,	// (0x0005de12) tabs_2_long_passive_pane

0x0731,	// (0x0005ddbb) tabs_3_long_active_pane_ParamLimits

0x0731,	// (0x0005ddbb) tabs_3_long_active_pane

0x074a,	// (0x0005ddd4) tabs_3_long_passive_pane_ParamLimits

0x074a,	// (0x0005ddd4) tabs_3_long_passive_pane

0x075d,	// (0x0005dde7) tabs_3_long_passive_pane_cp_ParamLimits

0x075d,	// (0x0005dde7) tabs_3_long_passive_pane_cp

0x06d7,	// (0x0005dd61) volume_small_pane_g1

0x06e0,	// (0x0005dd6a) volume_small_pane_g2

0x06e9,	// (0x0005dd73) volume_small_pane_g3

0x06f2,	// (0x0005dd7c) volume_small_pane_g4

0x06fb,	// (0x0005dd85) volume_small_pane_g5

0x0704,	// (0x0005dd8e) volume_small_pane_g6

0x070d,	// (0x0005dd97) volume_small_pane_g7

0x0716,	// (0x0005dda0) volume_small_pane_g8

0x071f,	// (0x0005dda9) volume_small_pane_g9

0x0728,	// (0x0005ddb2) volume_small_pane_g10

0x0009,

0xf87b,	// (0x0006cf05) volume_small_pane_g

0x7153,	// (0x000647dd) bg_active_tab_pane_cp2_ParamLimits

0x7153,	// (0x000647dd) bg_active_tab_pane_cp2

0x929d,	// (0x00066927) tabs_3_active_pane_g1

0x92a5,	// (0x0006692f) tabs_3_active_pane_t1

0x7153,	// (0x000647dd) bg_passive_tab_pane_cp2_ParamLimits

0x7153,	// (0x000647dd) bg_passive_tab_pane_cp2

0x929d,	// (0x00066927) tabs_3_passive_pane_g1

0x92a5,	// (0x0006692f) tabs_3_passive_pane_t1

0x7153,	// (0x000647dd) bg_active_tab_pane_cp3_ParamLimits

0x7153,	// (0x000647dd) bg_active_tab_pane_cp3

0x92b7,	// (0x00066941) tabs_4_active_pane_g1

0x92bf,	// (0x00066949) tabs_4_active_pane_t1

0x7153,	// (0x000647dd) bg_passive_tab_pane_cp3_ParamLimits

0x7153,	// (0x000647dd) bg_passive_tab_pane_cp3

0x92b7,	// (0x00066941) tabs_4_1_passive_pane_g1

0x92bf,	// (0x00066949) tabs_4_1_passive_pane_t1

0x8441,	// (0x00065acb) list_highlight_pane_cp2

0xcaa0,	// (0x0006a12a) list_set_pane_ParamLimits

0xcaa0,	// (0x0006a12a) list_set_pane

0xcb3a,	// (0x0006a1c4) main_pane_set_t1_ParamLimits

0xcb3a,	// (0x0006a1c4) main_pane_set_t1

0xcb5a,	// (0x0006a1e4) main_pane_set_t2_ParamLimits

0xcb5a,	// (0x0006a1e4) main_pane_set_t2

0xcb6e,	// (0x0006a1f8) main_pane_set_t3_ParamLimits

0xcb6e,	// (0x0006a1f8) main_pane_set_t3

0xcb80,	// (0x0006a20a) main_pane_set_t4_ParamLimits

0xcb80,	// (0x0006a20a) main_pane_set_t4

0x0003,

0xf94b,	// (0x0006cfd5) main_pane_set_t_ParamLimits

0xf94b,	// (0x0006cfd5) main_pane_set_t

0xcb92,	// (0x0006a21c) setting_code_pane

0xcb9c,	// (0x0006a226) setting_slider_graphic_pane

0xcb9c,	// (0x0006a226) setting_slider_pane

0xcb9c,	// (0x0006a226) setting_text_pane

0xcb9c,	// (0x0006a226) setting_volume_pane

0x92d1,	// (0x0006695b) volume_set_pane

0x7029,	// (0x000646b3) bg_set_opt_pane_cp

0x92d9,	// (0x00066963) setting_slider_pane_t1

0x92f2,	// (0x0006697c) setting_slider_pane_t2

0x930c,	// (0x00066996) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0006cbc3) setting_slider_pane_t

0x9324,	// (0x000669ae) slider_set_pane

0x6fdb,	// (0x00064665) bg_set_opt_pane_cp2

0x7037,	// (0x000646c1) setting_slider_graphic_pane_g1

0x933a,	// (0x000669c4) setting_slider_graphic_pane_t1

0x934a,	// (0x000669d4) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0006cbca) setting_slider_graphic_pane_t

0x935a,	// (0x000669e4) slider_set_pane_cp

0x6fdb,	// (0x00064665) input_focus_pane_cp1

0x3314,	// (0x0006099e) list_set_text_pane

0x6fd1,	// (0x0006465b) setting_text_pane_g1

0x6fdb,	// (0x00064665) input_focus_pane_cp2

0x6fd1,	// (0x0006465b) setting_code_pane_g1

0x7040,	// (0x000646ca) setting_code_pane_t1

0xbec2,	// (0x0006954c) set_text_pane_t1_ParamLimits

0xbec2,	// (0x0006954c) set_text_pane_t1

0x80b1,	// (0x0006573b) set_opt_bg_pane_g1

0x80b9,	// (0x00065743) set_opt_bg_pane_g2

0xca55,	// (0x0006a0df) set_opt_bg_pane_g3

0x80c9,	// (0x00065753) set_opt_bg_pane_g4

0x80d1,	// (0x0006575b) set_opt_bg_pane_g5

0x80d9,	// (0x00065763) set_opt_bg_pane_g6

0xca5f,	// (0x0006a0e9) set_opt_bg_pane_g7

0xca67,	// (0x0006a0f1) set_opt_bg_pane_g8

0xca71,	// (0x0006a0fb) set_opt_bg_pane_g9

0x0008,

0xf938,	// (0x0006cfc2) set_opt_bg_pane_g

0xca48,	// (0x0006a0d2) slider_set_pane_g1

0x08b7,	// (0x0005df41) slider_set_pane_g2

0x0006,

0xf929,	// (0x0006cfb3) slider_set_pane_g

0xb3e0,	// (0x00068a6a) volume_set_pane_g1

0xb3e8,	// (0x00068a72) volume_set_pane_g2

0xb3f0,	// (0x00068a7a) volume_set_pane_g3

0xb3f8,	// (0x00068a82) volume_set_pane_g4

0xb400,	// (0x00068a8a) volume_set_pane_g5

0xb408,	// (0x00068a92) volume_set_pane_g6

0xb410,	// (0x00068a9a) volume_set_pane_g7

0xb418,	// (0x00068aa2) volume_set_pane_g8

0xb420,	// (0x00068aaa) volume_set_pane_g9

0xb428,	// (0x00068ab2) volume_set_pane_g10

0x0009,

0xf901,	// (0x0006cf8b) volume_set_pane_g

0x9362,	// (0x000669ec) indicator_pane_ParamLimits

0x9362,	// (0x000669ec) indicator_pane

0x938a,	// (0x00066a14) main_idle_pane_g2_ParamLimits

0x938a,	// (0x00066a14) main_idle_pane_g2

0x93c2,	// (0x00066a4c) main_pane_idle_g1_ParamLimits

0x93c2,	// (0x00066a4c) main_pane_idle_g1

0x704e,	// (0x000646d8) popup_clock_digital_analogue_window_ParamLimits

0x704e,	// (0x000646d8) popup_clock_digital_analogue_window

0x93e9,	// (0x00066a73) soft_indicator_pane_ParamLimits

0x93e9,	// (0x00066a73) soft_indicator_pane

0x940d,	// (0x00066a97) wallpaper_pane_ParamLimits

0x940d,	// (0x00066a97) wallpaper_pane

0x6fd1,	// (0x0006465b) wallpaper_pane_g1

0x941f,	// (0x00066aa9) indicator_pane_g1_ParamLimits

0x941f,	// (0x00066aa9) indicator_pane_g1

0x3774,	// (0x00060dfe) navi_navi_icon_text_pane_srt_g1

0x707c,	// (0x00064706) soft_indicator_pane_t1

0x7096,	// (0x00064720) aid_ps_area_pane

0x9435,	// (0x00066abf) aid_ps_clock_pane

0x70a7,	// (0x00064731) aid_ps_indicator_pane

0x70b3,	// (0x0006473d) indicator_ps_pane_ParamLimits

0x70b3,	// (0x0006473d) indicator_ps_pane

0x70c2,	// (0x0006474c) power_save_pane_g1_ParamLimits

0x70c2,	// (0x0006474c) power_save_pane_g1

0x70ce,	// (0x00064758) power_save_pane_g2_ParamLimits

0x70ce,	// (0x00064758) power_save_pane_g2

0xe79f,	// (0x0006be29) aid_navinavi_width_pane

0x7096,	// (0x00064720) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0006cbcf) power_save_pane_g_ParamLimits

0xf545,	// (0x0006cbcf) power_save_pane_g

0x70dc,	// (0x00064766) power_save_pane_t1_ParamLimits

0x70dc,	// (0x00064766) power_save_pane_t1

0x9435,	// (0x00066abf) aid_ps_clock_pane_ParamLimits

0x70a7,	// (0x00064731) aid_ps_indicator_pane_ParamLimits

0x70ee,	// (0x00064778) power_save_pane_t4_ParamLimits

0x70ee,	// (0x00064778) power_save_pane_t4

0x0001,

0xf54a,	// (0x0006cbd4) power_save_pane_t_ParamLimits

0xf54a,	// (0x0006cbd4) power_save_pane_t

0x7118,	// (0x000647a2) power_save_t3_ParamLimits

0x7118,	// (0x000647a2) power_save_t3

0x7103,	// (0x0006478d) power_save_t2_ParamLimits

0x7103,	// (0x0006478d) power_save_t2

0x712d,	// (0x000647b7) indicator_ps_pane_g1

0x9443,	// (0x00066acd) ai_gene_pane_ParamLimits

0x9443,	// (0x00066acd) ai_gene_pane

0x945a,	// (0x00066ae4) ai_links_pane_ParamLimits

0x945a,	// (0x00066ae4) ai_links_pane

0x9472,	// (0x00066afc) indicator_pane_cp1_ParamLimits

0x9472,	// (0x00066afc) indicator_pane_cp1

0x9481,	// (0x00066b0b) main_pane_idle_g1_cp_ParamLimits

0x9481,	// (0x00066b0b) main_pane_idle_g1_cp

0x9499,	// (0x00066b23) popup_ai_links_title_window

0x94a2,	// (0x00066b2c) soft_indicator_pane_cp1_ParamLimits

0x94a2,	// (0x00066b2c) soft_indicator_pane_cp1

0x30db,	// (0x00060765) ai_links_pane_g1

0x30e4,	// (0x0006076e) grid_ai_links_pane

0xc95d,	// (0x00069fe7) ai_gene_pane_1

0x30c9,	// (0x00060753) ai_gene_pane_2

0x30d2,	// (0x0006075c) list_highlight_pane_cp4

0xc939,	// (0x00069fc3) cell_ai_link_pane_ParamLimits

0xc939,	// (0x00069fc3) cell_ai_link_pane

0x309a,	// (0x00060724) cell_ai_link_pane_g1

0x7268,	// (0x000648f2) cell_ai_link_pane_g2

0x0001,

0xf8dc,	// (0x0006cf66) cell_ai_link_pane_g

0x6fdb,	// (0x00064665) grid_highlight_cp2

0x6fdb,	// (0x00064665) bg_popup_sub_pane_cp1

0x7144,	// (0x000647ce) popup_ai_links_title_window_t1

0x2fea,	// (0x00060674) ai_gene_pane_1_g1_ParamLimits

0x2fea,	// (0x00060674) ai_gene_pane_1_g1

0x2ff6,	// (0x00060680) ai_gene_pane_1_g2_ParamLimits

0x2ff6,	// (0x00060680) ai_gene_pane_1_g2

0x0001,

0xf8d2,	// (0x0006cf5c) ai_gene_pane_1_g_ParamLimits

0xf8d2,	// (0x0006cf5c) ai_gene_pane_1_g

0x3003,	// (0x0006068d) ai_gene_pane_1_t1_ParamLimits

0x3003,	// (0x0006068d) ai_gene_pane_1_t1

0x3037,	// (0x000606c1) grid_ai_soft_ind_pane

0x2fd5,	// (0x0006065f) ai_gene_pane_2_t1_ParamLimits

0x2fd5,	// (0x0006065f) ai_gene_pane_2_t1

0x94b6,	// (0x00066b40) main_pane_empty_t1_ParamLimits

0x94b6,	// (0x00066b40) main_pane_empty_t1

0x94ce,	// (0x00066b58) main_pane_empty_t2_ParamLimits

0x94ce,	// (0x00066b58) main_pane_empty_t2

0x94e3,	// (0x00066b6d) main_pane_empty_t3_ParamLimits

0x94e3,	// (0x00066b6d) main_pane_empty_t3

0x94f5,	// (0x00066b7f) main_pane_empty_t4_ParamLimits

0x94f5,	// (0x00066b7f) main_pane_empty_t4

0x9507,	// (0x00066b91) main_pane_empty_t5_ParamLimits

0x9507,	// (0x00066b91) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0006cbd9) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0006cbd9) main_pane_empty_t

0x8136,	// (0x000657c0) bg_popup_window_pane_ParamLimits

0x8136,	// (0x000657c0) bg_popup_window_pane

0xc8b3,	// (0x00069f3d) find_popup_pane_cp2_ParamLimits

0xc8b3,	// (0x00069f3d) find_popup_pane_cp2

0x2d51,	// (0x000603db) heading_pane_ParamLimits

0x2d51,	// (0x000603db) heading_pane

0x6fdb,	// (0x00064665) bg_popup_sub_pane

0xc834,	// (0x00069ebe) bg_popup_window_pane_g1_ParamLimits

0xc834,	// (0x00069ebe) bg_popup_window_pane_g1

0xc843,	// (0x00069ecd) bg_popup_window_pane_g2_ParamLimits

0xc843,	// (0x00069ecd) bg_popup_window_pane_g2

0xc84f,	// (0x00069ed9) bg_popup_window_pane_g3_ParamLimits

0xc84f,	// (0x00069ed9) bg_popup_window_pane_g3

0xc85b,	// (0x00069ee5) bg_popup_window_pane_g4_ParamLimits

0xc85b,	// (0x00069ee5) bg_popup_window_pane_g4

0xc86a,	// (0x00069ef4) bg_popup_window_pane_g5_ParamLimits

0xc86a,	// (0x00069ef4) bg_popup_window_pane_g5

0xc87a,	// (0x00069f04) bg_popup_window_pane_g6_ParamLimits

0xc87a,	// (0x00069f04) bg_popup_window_pane_g6

0xc886,	// (0x00069f10) bg_popup_window_pane_g7_ParamLimits

0xc886,	// (0x00069f10) bg_popup_window_pane_g7

0xc895,	// (0x00069f1f) bg_popup_window_pane_g8_ParamLimits

0xc895,	// (0x00069f1f) bg_popup_window_pane_g8

0xc8a4,	// (0x00069f2e) bg_popup_window_pane_g9_ParamLimits

0xc8a4,	// (0x00069f2e) bg_popup_window_pane_g9

0x2d2b,	// (0x000603b5) bg_popup_window_pane_g10_ParamLimits

0x2d2b,	// (0x000603b5) bg_popup_window_pane_g10

0x0009,

0xf89a,	// (0x0006cf24) bg_popup_window_pane_g_ParamLimits

0xf89a,	// (0x0006cf24) bg_popup_window_pane_g

0x2c54,	// (0x000602de) bg_popup_heading_pane_ParamLimits

0x2c54,	// (0x000602de) bg_popup_heading_pane

0x09fb,	// (0x0005e085) tabs_4_passive_pane_cp_srt_ParamLimits

0x09fb,	// (0x0005e085) tabs_4_passive_pane_cp_srt

0x0a0d,	// (0x0005e097) tabs_4_passive_pane_srt_ParamLimits

0x2c68,	// (0x000602f2) heading_pane_g2

0x0a0d,	// (0x0005e097) tabs_4_passive_pane_srt

0x1fde,	// (0x0005f668) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1fde,	// (0x0005f668) bg_passive_tab_pane_cp3_srt

0x2c70,	// (0x000602fa) heading_pane_t1_ParamLimits

0x2c70,	// (0x000602fa) heading_pane_t1

0x2c87,	// (0x00060311) heading_pane_t2_ParamLimits

0x2c87,	// (0x00060311) heading_pane_t2

0x0001,

0xf895,	// (0x0006cf1f) heading_pane_t_ParamLimits

0xf895,	// (0x0006cf1f) heading_pane_t

0x2791,	// (0x0005fe1b) bg_popup_heading_pane_g1

0x2840,	// (0x0005feca) bg_popup_heading_pane_g2

0x284a,	// (0x0005fed4) bg_popup_heading_pane_g3

0x2854,	// (0x0005fede) bg_popup_heading_pane_g4

0x285e,	// (0x0005fee8) bg_popup_heading_pane_g5

0x2868,	// (0x0005fef2) bg_popup_heading_pane_g6

0x2870,	// (0x0005fefa) bg_popup_heading_pane_g7

0x2878,	// (0x0005ff02) bg_popup_heading_pane_g8

0x2882,	// (0x0005ff0c) bg_popup_heading_pane_g9

0x0008,

0xf851,	// (0x0006cedb) bg_popup_heading_pane_g

0x1f52,	// (0x0005f5dc) bg_popup_sub_pane_g1

0x1f62,	// (0x0005f5ec) bg_popup_sub_pane_g2

0x1f5a,	// (0x0005f5e4) bg_popup_sub_pane_g3

0x1f72,	// (0x0005f5fc) bg_popup_sub_pane_g4

0x1f6a,	// (0x0005f5f4) bg_popup_sub_pane_g5

0x1f7a,	// (0x0005f604) bg_popup_sub_pane_g6

0x1f82,	// (0x0005f60c) bg_popup_sub_pane_g7

0x1f92,	// (0x0005f61c) bg_popup_sub_pane_g8

0x1f8a,	// (0x0005f614) bg_popup_sub_pane_g9

0x0008,

0xf82b,	// (0x0006ceb5) bg_popup_sub_pane_g

0x7153,	// (0x000647dd) bg_popup_window_pane_cp5_ParamLimits

0x7153,	// (0x000647dd) bg_popup_window_pane_cp5

0x716f,	// (0x000647f9) popup_note_window_g1_ParamLimits

0x716f,	// (0x000647f9) popup_note_window_g1

0x717b,	// (0x00064805) popup_note_window_t1_ParamLimits

0x717b,	// (0x00064805) popup_note_window_t1

0x7191,	// (0x0006481b) popup_note_window_t2_ParamLimits

0x7191,	// (0x0006481b) popup_note_window_t2

0x71a7,	// (0x00064831) popup_note_window_t3_ParamLimits

0x71a7,	// (0x00064831) popup_note_window_t3

0x71bd,	// (0x00064847) popup_note_window_t4_ParamLimits

0x71bd,	// (0x00064847) popup_note_window_t4

0x71e5,	// (0x0006486f) popup_note_window_t5_ParamLimits

0x71e5,	// (0x0006486f) popup_note_window_t5

0x0004,

0xf55a,	// (0x0006cbe4) popup_note_window_t_ParamLimits

0xf55a,	// (0x0006cbe4) popup_note_window_t

0x7209,	// (0x00064893) bg_popup_window_pane_cp6_ParamLimits

0x7209,	// (0x00064893) bg_popup_window_pane_cp6

0x270d,	// (0x0005fd97) popup_note_image_window_g1_ParamLimits

0x270d,	// (0x0005fd97) popup_note_image_window_g1

0xc6d9,	// (0x00069d63) popup_note_image_window_g2_ParamLimits

0xc6d9,	// (0x00069d63) popup_note_image_window_g2

0x0001,

0xf81f,	// (0x0006cea9) popup_note_image_window_g_ParamLimits

0xf81f,	// (0x0006cea9) popup_note_image_window_g

0x2732,	// (0x0005fdbc) popup_note_image_window_t1_ParamLimits

0x2732,	// (0x0005fdbc) popup_note_image_window_t1

0x274b,	// (0x0005fdd5) popup_note_image_window_t2_ParamLimits

0x274b,	// (0x0005fdd5) popup_note_image_window_t2

0x2764,	// (0x0005fdee) popup_note_image_window_t3_ParamLimits

0x2764,	// (0x0005fdee) popup_note_image_window_t3

0x0002,

0xf824,	// (0x0006ceae) popup_note_image_window_t_ParamLimits

0xf824,	// (0x0006ceae) popup_note_image_window_t

0x25d6,	// (0x0005fc60) bg_popup_window_pane_cp7_ParamLimits

0x25d6,	// (0x0005fc60) bg_popup_window_pane_cp7

0x2606,	// (0x0005fc90) popup_note_wait_window_g1_ParamLimits

0x2606,	// (0x0005fc90) popup_note_wait_window_g1

0x2612,	// (0x0005fc9c) popup_note_wait_window_g2_ParamLimits

0x2612,	// (0x0005fc9c) popup_note_wait_window_g2

0x0002,

0xf80d,	// (0x0006ce97) popup_note_wait_window_g_ParamLimits

0xf80d,	// (0x0006ce97) popup_note_wait_window_g

0x262a,	// (0x0005fcb4) popup_note_wait_window_t1_ParamLimits

0x262a,	// (0x0005fcb4) popup_note_wait_window_t1

0xc67a,	// (0x00069d04) popup_note_wait_window_t2_ParamLimits

0xc67a,	// (0x00069d04) popup_note_wait_window_t2

0xc697,	// (0x00069d21) popup_note_wait_window_t3_ParamLimits

0xc697,	// (0x00069d21) popup_note_wait_window_t3

0xc6aa,	// (0x00069d34) popup_note_wait_window_t4_ParamLimits

0xc6aa,	// (0x00069d34) popup_note_wait_window_t4

0x0004,

0xf814,	// (0x0006ce9e) popup_note_wait_window_t_ParamLimits

0xf814,	// (0x0006ce9e) popup_note_wait_window_t

0x26a6,	// (0x0005fd30) wait_bar_pane_ParamLimits

0x26a6,	// (0x0005fd30) wait_bar_pane

0x6fdb,	// (0x00064665) wait_anim_pane

0x6fdb,	// (0x00064665) wait_border_pane

0x6fd1,	// (0x0006465b) wait_anim_pane_g1

0x6fd1,	// (0x0006465b) wait_anim_pane_g2

0x0001,

0xf6d4,	// (0x0006cd5e) wait_anim_pane_g

0x2582,	// (0x0005fc0c) wait_border_pane_g1

0x258d,	// (0x0005fc17) wait_border_pane_g2

0x2596,	// (0x0005fc20) wait_border_pane_g3

0x0002,

0xf806,	// (0x0006ce90) wait_border_pane_g

0x23ed,	// (0x0005fa77) bg_popup_window_pane_cp16_ParamLimits

0x23ed,	// (0x0005fa77) bg_popup_window_pane_cp16

0xc62a,	// (0x00069cb4) indicator_popup_pane_cp4_ParamLimits

0xc62a,	// (0x00069cb4) indicator_popup_pane_cp4

0x2501,	// (0x0005fb8b) popup_query_data_window_t1_ParamLimits

0x2501,	// (0x0005fb8b) popup_query_data_window_t1

0x2513,	// (0x0005fb9d) popup_query_data_window_t2_ParamLimits

0x2513,	// (0x0005fb9d) popup_query_data_window_t2

0x252c,	// (0x0005fbb6) popup_query_data_window_t3_ParamLimits

0x252c,	// (0x0005fbb6) popup_query_data_window_t3

0x0002,

0xf7ff,	// (0x0006ce89) popup_query_data_window_t_ParamLimits

0xf7ff,	// (0x0006ce89) popup_query_data_window_t

0xc63e,	// (0x00069cc8) query_popup_data_pane_ParamLimits

0xc63e,	// (0x00069cc8) query_popup_data_pane

0xc652,	// (0x00069cdc) query_popup_data_pane_cp1_ParamLimits

0xc652,	// (0x00069cdc) query_popup_data_pane_cp1

0x23ed,	// (0x0005fa77) bg_popup_window_pane_cp10_ParamLimits

0x23ed,	// (0x0005fa77) bg_popup_window_pane_cp10

0xc5a5,	// (0x00069c2f) indicator_popup_pane_ParamLimits

0xc5a5,	// (0x00069c2f) indicator_popup_pane

0xc5c7,	// (0x00069c51) popup_query_code_window_t1_ParamLimits

0xc5c7,	// (0x00069c51) popup_query_code_window_t1

0xc5e1,	// (0x00069c6b) popup_query_code_window_t2_ParamLimits

0xc5e1,	// (0x00069c6b) popup_query_code_window_t2

0x24a4,	// (0x0005fb2e) popup_query_code_window_t3_ParamLimits

0x24a4,	// (0x0005fb2e) popup_query_code_window_t3

0x0002,

0xf7f8,	// (0x0006ce82) popup_query_code_window_t_ParamLimits

0xf7f8,	// (0x0006ce82) popup_query_code_window_t

0x24d3,	// (0x0005fb5d) query_popup_pane_ParamLimits

0x24d3,	// (0x0005fb5d) query_popup_pane

0x7209,	// (0x00064893) bg_popup_window_pane_cp15_ParamLimits

0x7209,	// (0x00064893) bg_popup_window_pane_cp15

0x953f,	// (0x00066bc9) indicator_popup_pane_cp1_ParamLimits

0x953f,	// (0x00066bc9) indicator_popup_pane_cp1

0x9552,	// (0x00066bdc) indicator_popup_pane_cp2_ParamLimits

0x9552,	// (0x00066bdc) indicator_popup_pane_cp2

0x9565,	// (0x00066bef) popup_query_data_code_window_g1_ParamLimits

0x9565,	// (0x00066bef) popup_query_data_code_window_g1

0x7227,	// (0x000648b1) popup_query_data_code_window_t1_ParamLimits

0x7227,	// (0x000648b1) popup_query_data_code_window_t1

0x7239,	// (0x000648c3) popup_query_data_code_window_t2_ParamLimits

0x7239,	// (0x000648c3) popup_query_data_code_window_t2

0x9578,	// (0x00066c02) popup_query_data_code_window_t3_ParamLimits

0x9578,	// (0x00066c02) popup_query_data_code_window_t3

0x958e,	// (0x00066c18) popup_query_data_code_window_t4_ParamLimits

0x958e,	// (0x00066c18) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0006cbef) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0006cbef) popup_query_data_code_window_t

0x05ba,	// (0x0005dc44) list_single_midp_graphic_pane_g3

0x95a6,	// (0x00066c30) query_popup_data_pane_cp2_ParamLimits

0x95b9,	// (0x00066c43) query_popup_pane_cp2_ParamLimits

0x95b9,	// (0x00066c43) query_popup_pane_cp2

0x6fdb,	// (0x00064665) bg_popup_window_pane_cp11

0x23d1,	// (0x0005fa5b) heading_pane_cp5

0x23d9,	// (0x0005fa63) listscroll_popup_info_pane

0x6fdb,	// (0x00064665) input_focus_pane_cp3

0x724b,	// (0x000648d5) query_popup_pane_t1

0x7259,	// (0x000648e3) list_popup_info_pane_ParamLimits

0x7259,	// (0x000648e3) list_popup_info_pane

0x7268,	// (0x000648f2) listscroll_popup_info_pane_g1

0x7270,	// (0x000648fa) scroll_pane_cp7

0x95cc,	// (0x00066c56) popup_info_list_pane_t1_ParamLimits

0x95cc,	// (0x00066c56) popup_info_list_pane_t1

0x95e6,	// (0x00066c70) popup_info_list_pane_t2_ParamLimits

0x95e6,	// (0x00066c70) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0006cbf8) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0006cbf8) popup_info_list_pane_t

0x6fdb,	// (0x00064665) bg_popup_window_pane_cp12

0xcd41,	// (0x0006a3cb) find_popup_pane

0x7029,	// (0x000646b3) bg_popup_window_pane_cp3

0x727a,	// (0x00064904) heading_pane_cp3

0x7289,	// (0x00064913) listscroll_popup_graphic_pane

0x6fdb,	// (0x00064665) bg_popup_window_pane_cp4

0x9650,	// (0x00066cda) heading_pane_cp4

0x7f05,	// (0x0006558f) listscroll_popup_colour_pane

0x965a,	// (0x00066ce4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x965a,	// (0x00066ce4) cell_large_graphic_colour_none_popup_pane

0x966e,	// (0x00066cf8) grid_large_graphic_colour_popup_pane_ParamLimits

0x966e,	// (0x00066cf8) grid_large_graphic_colour_popup_pane

0x9692,	// (0x00066d1c) listscroll_popup_colour_pane_g1_ParamLimits

0x9692,	// (0x00066d1c) listscroll_popup_colour_pane_g1

0x96a9,	// (0x00066d33) listscroll_popup_colour_pane_g2_ParamLimits

0x96a9,	// (0x00066d33) listscroll_popup_colour_pane_g2

0x96bd,	// (0x00066d47) listscroll_popup_colour_pane_g3_ParamLimits

0x96bd,	// (0x00066d47) listscroll_popup_colour_pane_g3

0x96cd,	// (0x00066d57) listscroll_popup_colour_pane_g4_ParamLimits

0x96cd,	// (0x00066d57) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0006cbfd) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0006cbfd) listscroll_popup_colour_pane_g

0x7f0d,	// (0x00065597) scroll_pane_cp6_ParamLimits

0x7f0d,	// (0x00065597) scroll_pane_cp6

0x96dd,	// (0x00066d67) cell_large_graphic_colour_popup_pane_ParamLimits

0x96dd,	// (0x00066d67) cell_large_graphic_colour_popup_pane

0x96fc,	// (0x00066d86) cell_large_graphic_colour_none_popup_pane_t1

0x6fdb,	// (0x00064665) grid_highlight_pane_cp5

0x7f1f,	// (0x000655a9) cell_large_graphic_colour_popup_pane_g1

0x7f27,	// (0x000655b1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0006cc06) cell_large_graphic_colour_popup_pane_g

0x7f2f,	// (0x000655b9) cell_large_graphic_colour_popup_pane_g2_copy1

0x7f38,	// (0x000655c2) grid_highlight_pane_cp4

0x7f40,	// (0x000655ca) bg_popup_window_pane_cp8_ParamLimits

0x7f40,	// (0x000655ca) bg_popup_window_pane_cp8

0x970b,	// (0x00066d95) popup_snote_single_text_window_g1_ParamLimits

0x970b,	// (0x00066d95) popup_snote_single_text_window_g1

0x971d,	// (0x00066da7) popup_snote_single_text_window_t1_ParamLimits

0x971d,	// (0x00066da7) popup_snote_single_text_window_t1

0x9730,	// (0x00066dba) popup_snote_single_text_window_t2_ParamLimits

0x9730,	// (0x00066dba) popup_snote_single_text_window_t2

0x9743,	// (0x00066dcd) popup_snote_single_text_window_t3_ParamLimits

0x9743,	// (0x00066dcd) popup_snote_single_text_window_t3

0x977c,	// (0x00066e06) popup_snote_single_text_window_t4_ParamLimits

0x977c,	// (0x00066e06) popup_snote_single_text_window_t4

0x97b0,	// (0x00066e3a) popup_snote_single_text_window_t5_ParamLimits

0x97b0,	// (0x00066e3a) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0006cc0b) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0006cc0b) popup_snote_single_text_window_t

0x7f5b,	// (0x000655e5) bg_popup_window_pane_cp9_ParamLimits

0x7f5b,	// (0x000655e5) bg_popup_window_pane_cp9

0x970b,	// (0x00066d95) popup_snote_single_graphic_window_g1_ParamLimits

0x970b,	// (0x00066d95) popup_snote_single_graphic_window_g1

0x7f69,	// (0x000655f3) popup_snote_single_graphic_window_g2_ParamLimits

0x7f69,	// (0x000655f3) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0006cc16) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0006cc16) popup_snote_single_graphic_window_g

0x7f75,	// (0x000655ff) popup_snote_single_graphic_window_t1_ParamLimits

0x7f75,	// (0x000655ff) popup_snote_single_graphic_window_t1

0x7f88,	// (0x00065612) popup_snote_single_graphic_window_t2_ParamLimits

0x7f88,	// (0x00065612) popup_snote_single_graphic_window_t2

0x9743,	// (0x00066dcd) popup_snote_single_graphic_window_t3_ParamLimits

0x9743,	// (0x00066dcd) popup_snote_single_graphic_window_t3

0x977c,	// (0x00066e06) popup_snote_single_graphic_window_t4_ParamLimits

0x977c,	// (0x00066e06) popup_snote_single_graphic_window_t4

0x97df,	// (0x00066e69) popup_snote_single_graphic_window_t5_ParamLimits

0x97df,	// (0x00066e69) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0006cc1b) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0006cc1b) popup_snote_single_graphic_window_t

0x36d0,	// (0x00060d5a) grid_graphic_popup_pane_ParamLimits

0x36d0,	// (0x00060d5a) grid_graphic_popup_pane

0x36fa,	// (0x00060d84) listscroll_popup_graphic_pane_g1_ParamLimits

0x36fa,	// (0x00060d84) listscroll_popup_graphic_pane_g1

0xccdf,	// (0x0006a369) listscroll_popup_graphic_pane_g2_ParamLimits

0xccdf,	// (0x0006a369) listscroll_popup_graphic_pane_g2

0x0001,

0xf975,	// (0x0006cfff) listscroll_popup_graphic_pane_g_ParamLimits

0xf975,	// (0x0006cfff) listscroll_popup_graphic_pane_g

0x3722,	// (0x00060dac) scroll_pane_cp5

0xcc9e,	// (0x0006a328) cell_graphic_popup_pane_ParamLimits

0xcc9e,	// (0x0006a328) cell_graphic_popup_pane

0x3647,	// (0x00060cd1) cell_graphic_popup_pane_g1

0x364f,	// (0x00060cd9) cell_graphic_popup_pane_g2

0x7f2f,	// (0x000655b9) cell_graphic_popup_pane_g3

0x0002,

0xf96e,	// (0x0006cff8) cell_graphic_popup_pane_g

0x3658,	// (0x00060ce2) cell_graphic_popup_pane_t2

0x7f38,	// (0x000655c2) grid_highlight_pane_cp3

0x7fad,	// (0x00065637) list_gen_pane_ParamLimits

0x7fad,	// (0x00065637) list_gen_pane

0x7fd5,	// (0x0006565f) scroll_pane

0xcc08,	// (0x0006a292) bg_list_pane_g1_ParamLimits

0xcc08,	// (0x0006a292) bg_list_pane_g1

0xcc23,	// (0x0006a2ad) bg_list_pane_g2_ParamLimits

0xcc23,	// (0x0006a2ad) bg_list_pane_g2

0xcc36,	// (0x0006a2c0) bg_list_pane_g3_ParamLimits

0xcc36,	// (0x0006a2c0) bg_list_pane_g3

0xcc48,	// (0x0006a2d2) bg_list_pane_g4_ParamLimits

0xcc48,	// (0x0006a2d2) bg_list_pane_g4

0xcc5a,	// (0x0006a2e4) bg_list_pane_g5_ParamLimits

0xcc5a,	// (0x0006a2e4) bg_list_pane_g5

0x0004,

0xf963,	// (0x0006cfed) bg_list_pane_g_ParamLimits

0xf963,	// (0x0006cfed) bg_list_pane_g

0xb4f2,	// (0x00068b7c) list_double2_graphic_large_graphic_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_double2_graphic_large_graphic_pane

0xb4f2,	// (0x00068b7c) list_double2_graphic_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_double2_graphic_pane

0xb4f2,	// (0x00068b7c) list_double2_large_graphic_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_double2_large_graphic_pane

0xb4f2,	// (0x00068b7c) list_double2_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_double2_pane

0xb4f2,	// (0x00068b7c) list_double_graphic_heading_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_double_graphic_heading_pane

0xb4f2,	// (0x00068b7c) list_double_graphic_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_double_graphic_pane

0xb4f2,	// (0x00068b7c) list_double_heading_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_double_heading_pane

0xb4f2,	// (0x00068b7c) list_double_large_graphic_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_double_large_graphic_pane

0xb4f2,	// (0x00068b7c) list_double_number_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_double_number_pane

0xb4f2,	// (0x00068b7c) list_double_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_double_pane

0xb4f2,	// (0x00068b7c) list_double_time_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_double_time_pane

0xb4f2,	// (0x00068b7c) list_setting_number_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_setting_number_pane

0xb4f2,	// (0x00068b7c) list_setting_pane_ParamLimits

0xb4f2,	// (0x00068b7c) list_setting_pane

0x9e1f,	// (0x000674a9) list_single_2graphic_pane_ParamLimits

0x9e1f,	// (0x000674a9) list_single_2graphic_pane

0x9e1f,	// (0x000674a9) list_single_graphic_heading_pane_ParamLimits

0x9e1f,	// (0x000674a9) list_single_graphic_heading_pane

0x9e1f,	// (0x000674a9) list_single_graphic_pane_ParamLimits

0x9e1f,	// (0x000674a9) list_single_graphic_pane

0x9e1f,	// (0x000674a9) list_single_heading_pane_ParamLimits

0x9e1f,	// (0x000674a9) list_single_heading_pane

0xcbf5,	// (0x0006a27f) list_single_large_graphic_pane_ParamLimits

0xcbf5,	// (0x0006a27f) list_single_large_graphic_pane

0x9e1f,	// (0x000674a9) list_single_number_heading_pane_ParamLimits

0x9e1f,	// (0x000674a9) list_single_number_heading_pane

0x9e1f,	// (0x000674a9) list_single_number_pane_ParamLimits

0x9e1f,	// (0x000674a9) list_single_number_pane

0x9e1f,	// (0x000674a9) list_single_pane_ParamLimits

0x9e1f,	// (0x000674a9) list_single_pane

0x6fdb,	// (0x00064665) list_highlight_pane_cp1

0xbee7,	// (0x00069571) list_single_pane_g1_ParamLimits

0xbee7,	// (0x00069571) list_single_pane_g1

0x0589,	// (0x0005dc13) list_single_pane_g2_ParamLimits

0x0589,	// (0x0005dc13) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0006cc37) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0006cc37) list_single_pane_g

0xb4dc,	// (0x00068b66) list_single_pane_t1_ParamLimits

0xb4dc,	// (0x00068b66) list_single_pane_t1

0xbee7,	// (0x00069571) list_single_number_pane_g1_ParamLimits

0xbee7,	// (0x00069571) list_single_number_pane_g1

0x0589,	// (0x0005dc13) list_single_number_pane_g2_ParamLimits

0x0589,	// (0x0005dc13) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0006cc37) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0006cc37) list_single_number_pane_g

0xbef3,	// (0x0006957d) list_single_number_pane_t1_ParamLimits

0xbef3,	// (0x0006957d) list_single_number_pane_t1

0xb430,	// (0x00068aba) list_single_number_pane_t2_ParamLimits

0xb430,	// (0x00068aba) list_single_number_pane_t2

0x0001,

0xf924,	// (0x0006cfae) list_single_number_pane_t_ParamLimits

0xf924,	// (0x0006cfae) list_single_number_pane_t

0xbedb,	// (0x00069565) list_single_graphic_pane_g1_ParamLimits

0xbedb,	// (0x00069565) list_single_graphic_pane_g1

0xbee7,	// (0x00069571) list_single_graphic_pane_g2_ParamLimits

0xbee7,	// (0x00069571) list_single_graphic_pane_g2

0x0589,	// (0x0005dc13) list_single_graphic_pane_g3_ParamLimits

0x0589,	// (0x0005dc13) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0006cc26) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0006cc26) list_single_graphic_pane_g

0xbef3,	// (0x0006957d) list_single_graphic_pane_t1_ParamLimits

0xbef3,	// (0x0006957d) list_single_graphic_pane_t1

0x9818,	// (0x00066ea2) list_single_heading_pane_g1_ParamLimits

0x9818,	// (0x00066ea2) list_single_heading_pane_g1

0x0589,	// (0x0005dc13) list_single_heading_pane_g2_ParamLimits

0x0589,	// (0x0005dc13) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0006cc2d) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0006cc2d) list_single_heading_pane_g

0x982b,	// (0x00066eb5) list_single_heading_pane_t1_ParamLimits

0x982b,	// (0x00066eb5) list_single_heading_pane_t1

0x9841,	// (0x00066ecb) list_single_heading_pane_t2_ParamLimits

0x9841,	// (0x00066ecb) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0006cc32) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0006cc32) list_single_heading_pane_t

0xbee7,	// (0x00069571) list_single_number_heading_pane_g1_ParamLimits

0xbee7,	// (0x00069571) list_single_number_heading_pane_g1

0x0589,	// (0x0005dc13) list_single_number_heading_pane_g2_ParamLimits

0x0589,	// (0x0005dc13) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0006cc37) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0006cc37) list_single_number_heading_pane_g

0xbf09,	// (0x00069593) list_single_number_heading_pane_t1_ParamLimits

0xbf09,	// (0x00069593) list_single_number_heading_pane_t1

0x9853,	// (0x00066edd) list_single_number_heading_pane_t2_ParamLimits

0x9853,	// (0x00066edd) list_single_number_heading_pane_t2

0x9865,	// (0x00066eef) list_single_number_heading_pane_t3_ParamLimits

0x9865,	// (0x00066eef) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0006cc3c) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0006cc3c) list_single_number_heading_pane_t

0x9877,	// (0x00066f01) list_single_graphic_heading_pane_g1_ParamLimits

0x9877,	// (0x00066f01) list_single_graphic_heading_pane_g1

0x9883,	// (0x00066f0d) list_single_graphic_heading_pane_g4_ParamLimits

0x9883,	// (0x00066f0d) list_single_graphic_heading_pane_g4

0x0589,	// (0x0005dc13) list_single_graphic_heading_pane_g5_ParamLimits

0x0589,	// (0x0005dc13) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0006cc43) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0006cc43) list_single_graphic_heading_pane_g

0xbf09,	// (0x00069593) list_single_graphic_heading_pane_t1_ParamLimits

0xbf09,	// (0x00069593) list_single_graphic_heading_pane_t1

0x9894,	// (0x00066f1e) list_single_graphic_heading_pane_t2_ParamLimits

0x9894,	// (0x00066f1e) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0006cc4a) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0006cc4a) list_single_graphic_heading_pane_t

0x3cb7,	// (0x00061341) list_single_large_graphic_pane_g1_ParamLimits

0x3cb7,	// (0x00061341) list_single_large_graphic_pane_g1

0xe7e9,	// (0x0006be73) list_single_large_graphic_pane_g2_ParamLimits

0xe7e9,	// (0x0006be73) list_single_large_graphic_pane_g2

0xe7f5,	// (0x0006be7f) list_single_large_graphic_pane_g3_ParamLimits

0xe7f5,	// (0x0006be7f) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0006cc4f) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0006cc4f) list_single_large_graphic_pane_g

0x258d,	// (0x0005fc17) wait_border_pane_g2_copy1

0x98a6,	// (0x00066f30) list_single_large_graphic_pane_g4_cp2

0xbf1f,	// (0x000695a9) list_single_large_graphic_pane_t1_ParamLimits

0xbf1f,	// (0x000695a9) list_single_large_graphic_pane_t1

0x98ae,	// (0x00066f38) list_double_pane_g1_ParamLimits

0x98ae,	// (0x00066f38) list_double_pane_g1

0x98ba,	// (0x00066f44) list_double_pane_g2_ParamLimits

0x98ba,	// (0x00066f44) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0006cc56) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0006cc56) list_double_pane_g

0x98c6,	// (0x00066f50) list_double_pane_t1_ParamLimits

0x98c6,	// (0x00066f50) list_double_pane_t1

0x98dc,	// (0x00066f66) list_double_pane_t2_ParamLimits

0x98dc,	// (0x00066f66) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0006cc5b) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0006cc5b) list_double_pane_t

0x98ee,	// (0x00066f78) list_double2_pane_g1_ParamLimits

0x98ee,	// (0x00066f78) list_double2_pane_g1

0x98ff,	// (0x00066f89) list_double2_pane_g2_ParamLimits

0x98ff,	// (0x00066f89) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0006cc60) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0006cc60) list_double2_pane_g

0x990b,	// (0x00066f95) list_double2_pane_t1_ParamLimits

0x990b,	// (0x00066f95) list_double2_pane_t1

0x9921,	// (0x00066fab) list_double2_pane_t2_ParamLimits

0x9921,	// (0x00066fab) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0006cc65) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0006cc65) list_double2_pane_t

0x98ae,	// (0x00066f38) list_double_number_pane_g1_ParamLimits

0x98ae,	// (0x00066f38) list_double_number_pane_g1

0x98ba,	// (0x00066f44) list_double_number_pane_g2_ParamLimits

0x98ba,	// (0x00066f44) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0006cc56) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0006cc56) list_double_number_pane_g

0x9933,	// (0x00066fbd) list_double_number_pane_t1_ParamLimits

0x9933,	// (0x00066fbd) list_double_number_pane_t1

0x9945,	// (0x00066fcf) list_double_number_pane_t2_ParamLimits

0x9945,	// (0x00066fcf) list_double_number_pane_t2

0x995b,	// (0x00066fe5) list_double_number_pane_t3_ParamLimits

0x995b,	// (0x00066fe5) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0006cc6a) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0006cc6a) list_double_number_pane_t

0x996d,	// (0x00066ff7) list_double_graphic_pane_g1_ParamLimits

0x996d,	// (0x00066ff7) list_double_graphic_pane_g1

0x9979,	// (0x00067003) list_double_graphic_pane_g2_ParamLimits

0x9979,	// (0x00067003) list_double_graphic_pane_g2

0x3abe,	// (0x00061148) list_double_graphic_pane_g3_ParamLimits

0x3abe,	// (0x00061148) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0006cc71) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0006cc71) list_double_graphic_pane_g

0x98c6,	// (0x00066f50) list_double_graphic_pane_t1_ParamLimits

0x98c6,	// (0x00066f50) list_double_graphic_pane_t1

0x98dc,	// (0x00066f66) list_double_graphic_pane_t2_ParamLimits

0x98dc,	// (0x00066f66) list_double_graphic_pane_t2

0x0001,

0xf5d1,	// (0x0006cc5b) list_double_graphic_pane_t_ParamLimits

0xf5d1,	// (0x0006cc5b) list_double_graphic_pane_t

0x9994,	// (0x0006701e) list_double2_graphic_pane_g1_ParamLimits

0x9994,	// (0x0006701e) list_double2_graphic_pane_g1

0x99a0,	// (0x0006702a) list_double2_graphic_pane_g2_ParamLimits

0x99a0,	// (0x0006702a) list_double2_graphic_pane_g2

0x99ac,	// (0x00067036) list_double2_graphic_pane_g3_ParamLimits

0x99ac,	// (0x00067036) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0006cc7a) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0006cc7a) list_double2_graphic_pane_g

0x99b8,	// (0x00067042) list_double2_graphic_pane_t1_ParamLimits

0x99b8,	// (0x00067042) list_double2_graphic_pane_t1

0x99ce,	// (0x00067058) list_double2_graphic_pane_t2_ParamLimits

0x99ce,	// (0x00067058) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0006cc81) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0006cc81) list_double2_graphic_pane_t

0x99e0,	// (0x0006706a) list_double_large_graphic_pane_g1_ParamLimits

0x99e0,	// (0x0006706a) list_double_large_graphic_pane_g1

0x99ff,	// (0x00067089) list_double_large_graphic_pane_g2_ParamLimits

0x99ff,	// (0x00067089) list_double_large_graphic_pane_g2

0x98ba,	// (0x00066f44) list_double_large_graphic_pane_g3_ParamLimits

0x98ba,	// (0x00066f44) list_double_large_graphic_pane_g3

0x9a15,	// (0x0006709f) list_double_large_graphic_pane_g4_ParamLimits

0x9a15,	// (0x0006709f) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0006cc86) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0006cc86) list_double_large_graphic_pane_g

0x9a28,	// (0x000670b2) list_double_large_graphic_pane_t1_ParamLimits

0x9a28,	// (0x000670b2) list_double_large_graphic_pane_t1

0x9a41,	// (0x000670cb) list_double_large_graphic_pane_t2_ParamLimits

0x9a41,	// (0x000670cb) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0006cc91) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0006cc91) list_double_large_graphic_pane_t

0x9a53,	// (0x000670dd) list_double2_large_graphic_pane_g1_ParamLimits

0x9a53,	// (0x000670dd) list_double2_large_graphic_pane_g1

0x9a5f,	// (0x000670e9) list_double2_large_graphic_pane_g2_ParamLimits

0x9a5f,	// (0x000670e9) list_double2_large_graphic_pane_g2

0x99ac,	// (0x00067036) list_double2_large_graphic_pane_g3_ParamLimits

0x99ac,	// (0x00067036) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0006cc96) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0006cc96) list_double2_large_graphic_pane_g

0x99b8,	// (0x00067042) list_double2_large_graphic_pane_t1_ParamLimits

0x99b8,	// (0x00067042) list_double2_large_graphic_pane_t1

0x99ce,	// (0x00067058) list_double2_large_graphic_pane_t2_ParamLimits

0x99ce,	// (0x00067058) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0006cc81) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0006cc81) list_double2_large_graphic_pane_t

0x9a70,	// (0x000670fa) list_double_heading_pane_g1_ParamLimits

0x9a70,	// (0x000670fa) list_double_heading_pane_g1

0xe816,	// (0x0006bea0) list_double_heading_pane_g2_ParamLimits

0xe816,	// (0x0006bea0) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0006cc9d) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0006cc9d) list_double_heading_pane_g

0x9a81,	// (0x0006710b) list_double_heading_pane_t1_ParamLimits

0x9a81,	// (0x0006710b) list_double_heading_pane_t1

0x99ce,	// (0x00067058) list_double_heading_pane_t2_ParamLimits

0x99ce,	// (0x00067058) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0006cca2) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0006cca2) list_double_heading_pane_t

0x9a97,	// (0x00067121) list_double_graphic_heading_pane_g1_ParamLimits

0x9a97,	// (0x00067121) list_double_graphic_heading_pane_g1

0x9a70,	// (0x000670fa) list_double_graphic_heading_pane_g2_ParamLimits

0x9a70,	// (0x000670fa) list_double_graphic_heading_pane_g2

0xe816,	// (0x0006bea0) list_double_graphic_heading_pane_g3_ParamLimits

0xe816,	// (0x0006bea0) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0006cca7) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0006cca7) list_double_graphic_heading_pane_g

0x9a81,	// (0x0006710b) list_double_graphic_heading_pane_t1_ParamLimits

0x9a81,	// (0x0006710b) list_double_graphic_heading_pane_t1

0x99ce,	// (0x00067058) list_double_graphic_heading_pane_t2_ParamLimits

0x99ce,	// (0x00067058) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0006cca2) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0006cca2) list_double_graphic_heading_pane_t

0x9aa3,	// (0x0006712d) list_double_time_pane_g1_ParamLimits

0x9aa3,	// (0x0006712d) list_double_time_pane_g1

0xe822,	// (0x0006beac) list_double_time_pane_g2_ParamLimits

0xe822,	// (0x0006beac) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0006ccae) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0006ccae) list_double_time_pane_g

0x9ab4,	// (0x0006713e) list_double_time_pane_t1_ParamLimits

0x9ab4,	// (0x0006713e) list_double_time_pane_t1

0x9aca,	// (0x00067154) list_double_time_pane_t2_ParamLimits

0x9aca,	// (0x00067154) list_double_time_pane_t2

0x9adc,	// (0x00067166) list_double_time_pane_t3_ParamLimits

0x9adc,	// (0x00067166) list_double_time_pane_t3

0x9aee,	// (0x00067178) list_double_time_pane_t4_ParamLimits

0x9aee,	// (0x00067178) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0006ccb3) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0006ccb3) list_double_time_pane_t

0x9b00,	// (0x0006718a) list_setting_pane_g1_ParamLimits

0x9b00,	// (0x0006718a) list_setting_pane_g1

0x9b0c,	// (0x00067196) list_setting_pane_g2_ParamLimits

0x9b0c,	// (0x00067196) list_setting_pane_g2

0x0001,

0xf632,	// (0x0006ccbc) list_setting_pane_g_ParamLimits

0xf632,	// (0x0006ccbc) list_setting_pane_g

0x9b18,	// (0x000671a2) list_setting_pane_t1_ParamLimits

0x9b18,	// (0x000671a2) list_setting_pane_t1

0x9b32,	// (0x000671bc) list_setting_pane_t2_ParamLimits

0x9b32,	// (0x000671bc) list_setting_pane_t2

0x0002,

0xf637,	// (0x0006ccc1) list_setting_pane_t_ParamLimits

0xf637,	// (0x0006ccc1) list_setting_pane_t

0x9b71,	// (0x000671fb) set_value_pane_cp_ParamLimits

0x9b71,	// (0x000671fb) set_value_pane_cp

0x9b7d,	// (0x00067207) list_setting_number_pane_g1_ParamLimits

0x9b7d,	// (0x00067207) list_setting_number_pane_g1

0x9b89,	// (0x00067213) list_setting_number_pane_g2_ParamLimits

0x9b89,	// (0x00067213) list_setting_number_pane_g2

0x0001,

0xf63e,	// (0x0006ccc8) list_setting_number_pane_g_ParamLimits

0xf63e,	// (0x0006ccc8) list_setting_number_pane_g

0x9b95,	// (0x0006721f) list_setting_number_pane_t1_ParamLimits

0x9b95,	// (0x0006721f) list_setting_number_pane_t1

0x9bae,	// (0x00067238) list_setting_number_pane_t2_ParamLimits

0x9bae,	// (0x00067238) list_setting_number_pane_t2

0x9bc8,	// (0x00067252) list_setting_number_pane_t3_ParamLimits

0x9bc8,	// (0x00067252) list_setting_number_pane_t3

0x0003,

0xf643,	// (0x0006cccd) list_setting_number_pane_t_ParamLimits

0xf643,	// (0x0006cccd) list_setting_number_pane_t

0x9b71,	// (0x000671fb) set_value_pane_ParamLimits

0x9b71,	// (0x000671fb) set_value_pane

0x8009,	// (0x00065693) bg_set_opt_pane_ParamLimits

0x8009,	// (0x00065693) bg_set_opt_pane

0xe82e,	// (0x0006beb8) set_value_pane_t1

0x802a,	// (0x000656b4) slider_set_pane_cp3

0x9c0b,	// (0x00067295) volume_small_pane_cp

0x8033,	// (0x000656bd) list_form_gen_pane

0x803c,	// (0x000656c6) scroll_pane_cp8

0x9c14,	// (0x0006729e) form_field_data_pane_ParamLimits

0x9c14,	// (0x0006729e) form_field_data_pane

0x9c2b,	// (0x000672b5) form_field_data_wide_pane_ParamLimits

0x9c2b,	// (0x000672b5) form_field_data_wide_pane

0x9c4b,	// (0x000672d5) form_field_popup_pane_ParamLimits

0x9c4b,	// (0x000672d5) form_field_popup_pane

0x9c6b,	// (0x000672f5) form_field_popup_wide_pane_ParamLimits

0x9c6b,	// (0x000672f5) form_field_popup_wide_pane

0xe84c,	// (0x0006bed6) form_field_slider_pane_ParamLimits

0xe84c,	// (0x0006bed6) form_field_slider_pane

0x9c82,	// (0x0006730c) form_field_slider_wide_pane_ParamLimits

0x9c82,	// (0x0006730c) form_field_slider_wide_pane

0x804d,	// (0x000656d7) data_form_pane

0x9c9f,	// (0x00067329) form_field_data_pane_t1

0x8059,	// (0x000656e3) input_focus_pane

0xe85f,	// (0x0006bee9) data_form_wide_pane

0xe87c,	// (0x0006bf06) form_field_data_wide_pane_t1

0x7f4d,	// (0x000655d7) input_focus_pane_cp6

0x9cb9,	// (0x00067343) form_field_popup_pane_t1

0x8059,	// (0x000656e3) input_focus_pane_cp7

0x8087,	// (0x00065711) list_form_pane

0xe8a6,	// (0x0006bf30) form_field_popup_wide_pane_t1

0x8059,	// (0x000656e3) input_focus_pane_cp8

0x8093,	// (0x0006571d) list_form_wide_pane

0x9cdb,	// (0x00067365) form_field_slider_pane_t1_ParamLimits

0x9cdb,	// (0x00067365) form_field_slider_pane_t1

0x9cf3,	// (0x0006737d) form_field_slider_pane_t2_ParamLimits

0x9cf3,	// (0x0006737d) form_field_slider_pane_t2

0x0001,

0xf653,	// (0x0006ccdd) form_field_slider_pane_t_ParamLimits

0xf653,	// (0x0006ccdd) form_field_slider_pane_t

0x7153,	// (0x000647dd) input_focus_pane_cp9_ParamLimits

0x7153,	// (0x000647dd) input_focus_pane_cp9

0x9d08,	// (0x00067392) slider_cont_pane_ParamLimits

0x9d08,	// (0x00067392) slider_cont_pane

0x809f,	// (0x00065729) form_field_slider_wide_pane_t1_ParamLimits

0x809f,	// (0x00065729) form_field_slider_wide_pane_t1

0xe8bb,	// (0x0006bf45) form_field_slider_wide_pane_t2_ParamLimits

0xe8bb,	// (0x0006bf45) form_field_slider_wide_pane_t2

0x0001,

0xf658,	// (0x0006cce2) form_field_slider_wide_pane_t_ParamLimits

0xf658,	// (0x0006cce2) form_field_slider_wide_pane_t

0x7153,	// (0x000647dd) input_focus_pane_cp10_ParamLimits

0x7153,	// (0x000647dd) input_focus_pane_cp10

0x9d1c,	// (0x000673a6) slider_cont_pane_cp1_ParamLimits

0x9d1c,	// (0x000673a6) slider_cont_pane_cp1

0x9d30,	// (0x000673ba) slider_form_pane_cp

0x80b1,	// (0x0006573b) input_focus_pane_g1

0x80b9,	// (0x00065743) input_focus_pane_g2

0x80c1,	// (0x0006574b) input_focus_pane_g3

0x80c9,	// (0x00065753) input_focus_pane_g4

0x80d1,	// (0x0006575b) input_focus_pane_g5

0x80d9,	// (0x00065763) input_focus_pane_g6

0x80e1,	// (0x0006576b) input_focus_pane_g7

0x80e9,	// (0x00065773) input_focus_pane_g8

0x80f1,	// (0x0006577b) input_focus_pane_g9

0x6fd1,	// (0x0006465b) input_focus_pane_g10

0x0009,

0xf65d,	// (0x0006cce7) input_focus_pane_g

0x2596,	// (0x0005fc20) wait_border_pane_g3_copy1

0x9d38,	// (0x000673c2) data_form_pane_t1

0x6fd1,	// (0x0006465b) wait_anim_pane_g1_copy1

0xb4ae,	// (0x00068b38) data_form_wide_pane_t1

0x9d52,	// (0x000673dc) list_form_graphic_pane_cp_ParamLimits

0x9d52,	// (0x000673dc) list_form_graphic_pane_cp

0x3485,	// (0x00060b0f) slider_form_pane_g1

0x348e,	// (0x00060b18) slider_form_pane_g2

0x0006,

0xf954,	// (0x0006cfde) slider_form_pane_g

0x9d64,	// (0x000673ee) list_form_graphic_pane_ParamLimits

0x9d64,	// (0x000673ee) list_form_graphic_pane

0x9d77,	// (0x00067401) list_form_graphic_pane_g1

0x9d7f,	// (0x00067409) list_form_graphic_pane_t1_ParamLimits

0x9d7f,	// (0x00067409) list_form_graphic_pane_t1

0x7029,	// (0x000646b3) list_highlight_pane_cp5_ParamLimits

0x7029,	// (0x000646b3) list_highlight_pane_cp5

0x9d94,	// (0x0006741e) find_pane_g1

0x80f9,	// (0x00065783) input_find_pane

0x9d9d,	// (0x00067427) input_find_pane_g1_ParamLimits

0x9d9d,	// (0x00067427) input_find_pane_g1

0x9da9,	// (0x00067433) input_find_pane_t1_ParamLimits

0x9da9,	// (0x00067433) input_find_pane_t1

0x9dbe,	// (0x00067448) input_find_pane_t2_ParamLimits

0x9dbe,	// (0x00067448) input_find_pane_t2

0x0001,

0xf672,	// (0x0006ccfc) input_find_pane_t_ParamLimits

0xf672,	// (0x0006ccfc) input_find_pane_t

0x8102,	// (0x0006578c) input_focus_pane_cp5_ParamLimits

0x8102,	// (0x0006578c) input_focus_pane_cp5

0x8115,	// (0x0006579f) bg_popup_window_pane_cp2_ParamLimits

0x8115,	// (0x0006579f) bg_popup_window_pane_cp2

0x8122,	// (0x000657ac) listscroll_menu_pane_ParamLimits

0x8122,	// (0x000657ac) listscroll_menu_pane

0x9ddf,	// (0x00067469) popup_submenu_window_ParamLimits

0x9ddf,	// (0x00067469) popup_submenu_window

0x812e,	// (0x000657b8) find_popup_pane_g1

0x9e07,	// (0x00067491) input_popup_find_pane_cp

0x8136,	// (0x000657c0) input_focus_pane_cp4_ParamLimits

0x8136,	// (0x000657c0) input_focus_pane_cp4

0x8144,	// (0x000657ce) input_popup_find_pane_t1_ParamLimits

0x8144,	// (0x000657ce) input_popup_find_pane_t1

0x6fdb,	// (0x00064665) bg_popup_sub_pane_cp

0x8172,	// (0x000657fc) listscroll_popup_sub_pane

0x817a,	// (0x00065804) list_submenu_pane_ParamLimits

0x817a,	// (0x00065804) list_submenu_pane

0x818b,	// (0x00065815) scroll_pane_cp4

0x9e1f,	// (0x000674a9) list_single_popup_submenu_pane_ParamLimits

0x9e1f,	// (0x000674a9) list_single_popup_submenu_pane

0x9e33,	// (0x000674bd) list_single_popup_submenu_pane_g1

0x9e3b,	// (0x000674c5) list_single_popup_submenu_pane_t1_ParamLimits

0x9e3b,	// (0x000674c5) list_single_popup_submenu_pane_t1

0x7153,	// (0x000647dd) bg_active_tab_pane_cp1_ParamLimits

0x7153,	// (0x000647dd) bg_active_tab_pane_cp1

0x8193,	// (0x0006581d) tabs_2_active_pane_g1

0x9e50,	// (0x000674da) tabs_2_active_pane_t1

0x7153,	// (0x000647dd) bg_passive_tab_pane_cp1_ParamLimits

0x7153,	// (0x000647dd) bg_passive_tab_pane_cp1

0x8193,	// (0x0006581d) tabs_2_passive_pane_g1

0x9e50,	// (0x000674da) tabs_2_passive_pane_t1

0x7029,	// (0x000646b3) bg_active_tab_pane_cp4

0x9e62,	// (0x000674ec) tabs_2_long_active_pane_t1

0x8441,	// (0x00065acb) bg_passive_tab_pane_cp4

0x05c2,	// (0x0005dc4c) list_single_midp_graphic_pane_g4_ParamLimits

0x7029,	// (0x000646b3) bg_active_tab_pane_cp5

0x9e75,	// (0x000674ff) tabs_3_long_active_pane_t1

0x8441,	// (0x00065acb) bg_passive_tab_pane_cp5

0x05c2,	// (0x0005dc4c) list_single_midp_graphic_pane_g4

0x7029,	// (0x000646b3) bg_popup_window_pane_cp13_ParamLimits

0x7029,	// (0x000646b3) bg_popup_window_pane_cp13

0x819b,	// (0x00065825) listscroll_popup_fast_pane_ParamLimits

0x819b,	// (0x00065825) listscroll_popup_fast_pane

0x81a7,	// (0x00065831) grid_popup_fast_pane_ParamLimits

0x81a7,	// (0x00065831) grid_popup_fast_pane

0x81b9,	// (0x00065843) scroll_pane_cp9_ParamLimits

0x81b9,	// (0x00065843) scroll_pane_cp9

0x4f95,	// (0x0006261f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f95,	// (0x0006261f) list_single_graphic_hl_pane_t1_cp2

0x81cc,	// (0x00065856) input_focus_pane_cp20_ParamLimits

0x81cc,	// (0x00065856) input_focus_pane_cp20

0x81da,	// (0x00065864) query_popup_data_pane_t1_ParamLimits

0x81da,	// (0x00065864) query_popup_data_pane_t1

0x81ed,	// (0x00065877) query_popup_data_pane_t2_ParamLimits

0x81ed,	// (0x00065877) query_popup_data_pane_t2

0x8233,	// (0x000658bd) query_popup_data_pane_t3_ParamLimits

0x8233,	// (0x000658bd) query_popup_data_pane_t3

0x8274,	// (0x000658fe) query_popup_data_pane_t4_ParamLimits

0x8274,	// (0x000658fe) query_popup_data_pane_t4

0x82b0,	// (0x0006593a) query_popup_data_pane_t5_ParamLimits

0x82b0,	// (0x0006593a) query_popup_data_pane_t5

0x0004,

0xf677,	// (0x0006cd01) query_popup_data_pane_t_ParamLimits

0xf677,	// (0x0006cd01) query_popup_data_pane_t

0x80b1,	// (0x0006573b) bg_set_opt_pane_g1

0x80b9,	// (0x00065743) bg_set_opt_pane_g2

0x80c1,	// (0x0006574b) bg_set_opt_pane_g3

0x80c9,	// (0x00065753) bg_set_opt_pane_g4

0x80d1,	// (0x0006575b) bg_set_opt_pane_g5

0x80d9,	// (0x00065763) bg_set_opt_pane_g6

0x80e1,	// (0x0006576b) bg_set_opt_pane_g7

0x80e9,	// (0x00065773) bg_set_opt_pane_g8

0x80f1,	// (0x0006577b) bg_set_opt_pane_g9

0x0008,

0xf682,	// (0x0006cd0c) bg_set_opt_pane_g

0xf2bc,	// (0x0006c946) control_top_pane_stacon_ParamLimits

0xf2bc,	// (0x0006c946) control_top_pane_stacon

0xf30f,	// (0x0006c999) signal_pane_stacon_ParamLimits

0xf30f,	// (0x0006c999) signal_pane_stacon

0xc130,	// (0x000697ba) stacon_top_pane_g1_ParamLimits

0xc130,	// (0x000697ba) stacon_top_pane_g1

0xf334,	// (0x0006c9be) title_pane_stacon_ParamLimits

0xf334,	// (0x0006c9be) title_pane_stacon

0xf35e,	// (0x0006c9e8) uni_indicator_pane_stacon_ParamLimits

0xf35e,	// (0x0006c9e8) uni_indicator_pane_stacon

0xf373,	// (0x0006c9fd) battery_pane_stacon_ParamLimits

0xf373,	// (0x0006c9fd) battery_pane_stacon

0xf3b7,	// (0x0006ca41) control_bottom_pane_stacon_ParamLimits

0xf3b7,	// (0x0006ca41) control_bottom_pane_stacon

0xf3da,	// (0x0006ca64) navi_pane_stacon_ParamLimits

0xf3da,	// (0x0006ca64) navi_pane_stacon

0xc152,	// (0x000697dc) stacon_bottom_pane_g1_ParamLimits

0xc152,	// (0x000697dc) stacon_bottom_pane_g1

0xe8cd,	// (0x0006bf57) aid_levels_signal_lsc_ParamLimits

0xe8cd,	// (0x0006bf57) aid_levels_signal_lsc

0xe8e3,	// (0x0006bf6d) signal_pane_stacon_g1_ParamLimits

0xe8e3,	// (0x0006bf6d) signal_pane_stacon_g1

0xe8f7,	// (0x0006bf81) signal_pane_stacon_g2_ParamLimits

0xe8f7,	// (0x0006bf81) signal_pane_stacon_g2

0x0001,

0xf695,	// (0x0006cd1f) signal_pane_stacon_g_ParamLimits

0xf695,	// (0x0006cd1f) signal_pane_stacon_g

0xe92c,	// (0x0006bfb6) title_pane_stacon_t1_ParamLimits

0xe92c,	// (0x0006bfb6) title_pane_stacon_t1

0x82f4,	// (0x0006597e) uni_indicator_pane_stacon_g1

0x82fe,	// (0x00065988) uni_indicator_pane_stacon_g2

0x8308,	// (0x00065992) uni_indicator_pane_stacon_g3

0x8312,	// (0x0006599c) uni_indicator_pane_stacon_g4

0x0003,

0xf6a1,	// (0x0006cd2b) uni_indicator_pane_stacon_g

0xe951,	// (0x0006bfdb) control_top_pane_stacon_g1

0xe959,	// (0x0006bfe3) control_top_pane_stacon_t1_ParamLimits

0xe959,	// (0x0006bfe3) control_top_pane_stacon_t1

0xe990,	// (0x0006c01a) aid_levels_battery_lsc_ParamLimits

0xe990,	// (0x0006c01a) aid_levels_battery_lsc

0xe9a7,	// (0x0006c031) battery_pane_stacon_g1_ParamLimits

0xe9a7,	// (0x0006c031) battery_pane_stacon_g1

0xe9ba,	// (0x0006c044) battery_pane_stacon_g2_ParamLimits

0xe9ba,	// (0x0006c044) battery_pane_stacon_g2

0x0001,

0xf6aa,	// (0x0006cd34) battery_pane_stacon_g_ParamLimits

0xf6aa,	// (0x0006cd34) battery_pane_stacon_g

0xf1aa,	// (0x0006c834) navi_icon_pane_stacon

0xf1be,	// (0x0006c848) navi_navi_pane_stacon

0xf1aa,	// (0x0006c834) navi_text_pane_stacon

0xe951,	// (0x0006bfdb) control_bottom_pane_stacon_g1

0xf1d2,	// (0x0006c85c) control_bottom_pane_stacon_t1_ParamLimits

0xf1d2,	// (0x0006c85c) control_bottom_pane_stacon_t1

0x9ea1,	// (0x0006752b) grid_app_pane_ParamLimits

0x9ea1,	// (0x0006752b) grid_app_pane

0x9ed9,	// (0x00067563) scroll_pane_cp15_ParamLimits

0x9ed9,	// (0x00067563) scroll_pane_cp15

0x9eee,	// (0x00067578) cell_app_pane_ParamLimits

0x9eee,	// (0x00067578) cell_app_pane

0x9f33,	// (0x000675bd) cell_app_pane_g1_ParamLimits

0x9f33,	// (0x000675bd) cell_app_pane_g1

0x8336,	// (0x000659c0) cell_app_pane_g2_ParamLimits

0x8336,	// (0x000659c0) cell_app_pane_g2

0x0001,

0xf6af,	// (0x0006cd39) cell_app_pane_g_ParamLimits

0xf6af,	// (0x0006cd39) cell_app_pane_g

0x9f57,	// (0x000675e1) cell_app_pane_t1_ParamLimits

0x9f57,	// (0x000675e1) cell_app_pane_t1

0x8342,	// (0x000659cc) grid_highlight_pane_ParamLimits

0x8342,	// (0x000659cc) grid_highlight_pane

0x80b1,	// (0x0006573b) cell_highlight_pane_g1

0x80b9,	// (0x00065743) cell_highlight_pane_g2

0x80c1,	// (0x0006574b) cell_highlight_pane_g3

0x80c9,	// (0x00065753) cell_highlight_pane_g4

0x80d1,	// (0x0006575b) cell_highlight_pane_g5

0x80d9,	// (0x00065763) cell_highlight_pane_g6

0x80e1,	// (0x0006576b) cell_highlight_pane_g7

0x80e9,	// (0x00065773) cell_highlight_pane_g8

0x80f1,	// (0x0006577b) cell_highlight_pane_g9

0x6fd1,	// (0x0006465b) cell_highlight_pane_g10

0x0009,

0xf65d,	// (0x0006cce7) cell_highlight_pane_g

0x8353,	// (0x000659dd) bg_scroll_pane

0x9f77,	// (0x00067601) scroll_handle_pane

0x839a,	// (0x00065a24) scroll_bg_pane_g1

0x83af,	// (0x00065a39) scroll_bg_pane_g2

0x83c7,	// (0x00065a51) scroll_bg_pane_g3

0x0002,

0xf6b4,	// (0x0006cd3e) scroll_bg_pane_g

0x9f8b,	// (0x00067615) scroll_handle_focus_pane_ParamLimits

0x9f8b,	// (0x00067615) scroll_handle_focus_pane

0x839a,	// (0x00065a24) scroll_handle_pane_g1

0x83dc,	// (0x00065a66) scroll_handle_pane_g2

0x83c7,	// (0x00065a51) scroll_handle_pane_g3

0x0002,

0xf6bb,	// (0x0006cd45) scroll_handle_pane_g

0x8136,	// (0x000657c0) bg_popup_sub_pane_cp21_ParamLimits

0x8136,	// (0x000657c0) bg_popup_sub_pane_cp21

0x9f98,	// (0x00067622) popup_fep_japan_predictive_window_t1_ParamLimits

0x9f98,	// (0x00067622) popup_fep_japan_predictive_window_t1

0x9faf,	// (0x00067639) popup_fep_japan_predictive_window_t2_ParamLimits

0x9faf,	// (0x00067639) popup_fep_japan_predictive_window_t2

0x9fe2,	// (0x0006766c) popup_fep_japan_predictive_window_t3_ParamLimits

0x9fe2,	// (0x0006766c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c2,	// (0x0006cd4c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c2,	// (0x0006cd4c) popup_fep_japan_predictive_window_t

0x6fdb,	// (0x00064665) bg_popup_sub_pane_cp23

0xa019,	// (0x000676a3) listscroll_japin_cand_pane

0x83f0,	// (0x00065a7a) popup_fep_japan_candidate_window_t1

0x83fe,	// (0x00065a88) candidate_pane_ParamLimits

0x83fe,	// (0x00065a88) candidate_pane

0xa021,	// (0x000676ab) scroll_pane_cp30

0x8410,	// (0x00065a9a) list_single_popup_jap_candidate_pane_ParamLimits

0x8410,	// (0x00065a9a) list_single_popup_jap_candidate_pane

0x6fdb,	// (0x00064665) list_highlight_pane_cp30

0x8425,	// (0x00065aaf) list_single_popup_jap_candidate_pane_t1

0x8434,	// (0x00065abe) level_1_signal

0xbf35,	// (0x000695bf) level_2_signal

0xbf42,	// (0x000695cc) level_3_signal

0xbf4f,	// (0x000695d9) level_4_signal

0xbf5c,	// (0x000695e6) level_5_signal

0xbf69,	// (0x000695f3) level_6_signal

0xbf76,	// (0x00069600) level_7_signal

0x8434,	// (0x00065abe) level_1_battery

0xbf35,	// (0x000695bf) level_2_battery

0xbf42,	// (0x000695cc) level_3_battery

0xbf4f,	// (0x000695d9) level_4_battery

0xbf5c,	// (0x000695e6) level_5_battery

0xbf69,	// (0x000695f3) level_6_battery

0xbf76,	// (0x00069600) level_7_battery

0xbf9b,	// (0x00069625) list_menu_pane_ParamLimits

0xbf9b,	// (0x00069625) list_menu_pane

0xbfb1,	// (0x0006963b) scroll_pane_cp25_ParamLimits

0xbfb1,	// (0x0006963b) scroll_pane_cp25

0xa029,	// (0x000676b3) list_double2_graphic_pane_cp2_ParamLimits

0xa029,	// (0x000676b3) list_double2_graphic_pane_cp2

0xa029,	// (0x000676b3) list_double2_large_graphic_pane_cp2_ParamLimits

0xa029,	// (0x000676b3) list_double2_large_graphic_pane_cp2

0xa029,	// (0x000676b3) list_double2_pane_cp2_ParamLimits

0xa029,	// (0x000676b3) list_double2_pane_cp2

0xa029,	// (0x000676b3) list_double_graphic_pane_cp2_ParamLimits

0xa029,	// (0x000676b3) list_double_graphic_pane_cp2

0xa029,	// (0x000676b3) list_double_large_graphic_pane_cp2_ParamLimits

0xa029,	// (0x000676b3) list_double_large_graphic_pane_cp2

0xa029,	// (0x000676b3) list_double_number_pane_cp2_ParamLimits

0xa029,	// (0x000676b3) list_double_number_pane_cp2

0xa029,	// (0x000676b3) list_double_pane_cp2_ParamLimits

0xa029,	// (0x000676b3) list_double_pane_cp2

0xa038,	// (0x000676c2) list_single_2graphic_pane_cp2_ParamLimits

0xa038,	// (0x000676c2) list_single_2graphic_pane_cp2

0xa038,	// (0x000676c2) list_single_graphic_heading_pane_cp2_ParamLimits

0xa038,	// (0x000676c2) list_single_graphic_heading_pane_cp2

0xa038,	// (0x000676c2) list_single_graphic_pane_cp2_ParamLimits

0xa038,	// (0x000676c2) list_single_graphic_pane_cp2

0xa038,	// (0x000676c2) list_single_heading_pane_cp2_ParamLimits

0xa038,	// (0x000676c2) list_single_heading_pane_cp2

0xbfda,	// (0x00069664) list_single_large_graphic_pane_cp2_ParamLimits

0xbfda,	// (0x00069664) list_single_large_graphic_pane_cp2

0xa038,	// (0x000676c2) list_single_number_heading_pane_cp2_ParamLimits

0xa038,	// (0x000676c2) list_single_number_heading_pane_cp2

0xa038,	// (0x000676c2) list_single_number_pane_cp2_ParamLimits

0xa038,	// (0x000676c2) list_single_number_pane_cp2

0xa04a,	// (0x000676d4) list_single_pane_cp2_ParamLimits

0xa04a,	// (0x000676d4) list_single_pane_cp2

0xbff4,	// (0x0006967e) bg_popup_sub_pane_cp22

0xf2a2,	// (0x0006c92c) popup_side_volume_key_window_g1

0xf2ae,	// (0x0006c938) popup_side_volume_key_window_t1

0xa112,	// (0x0006779c) volume_small_pane_cp1

0x7153,	// (0x000647dd) bg_popup_sub_pane_cp24_ParamLimits

0x7153,	// (0x000647dd) bg_popup_sub_pane_cp24

0xc00a,	// (0x00069694) fep_china_uni_candidate_pane_ParamLimits

0xc00a,	// (0x00069694) fep_china_uni_candidate_pane

0xc01e,	// (0x000696a8) fep_china_uni_entry_pane

0xc02e,	// (0x000696b8) popup_fep_china_uni_window_g1

0xa11a,	// (0x000677a4) fep_china_uni_entry_pane_g1

0xa122,	// (0x000677ac) fep_china_uni_entry_pane_g2

0x0001,

0xf6f3,	// (0x0006cd7d) fep_china_uni_entry_pane_g

0xc04a,	// (0x000696d4) fep_entry_item_pane

0xc054,	// (0x000696de) fep_candidate_item_pane

0xa12a,	// (0x000677b4) fep_china_uni_candidate_pane_g1

0xc05c,	// (0x000696e6) fep_china_uni_candidate_pane_g2

0xc064,	// (0x000696ee) fep_china_uni_candidate_pane_g3

0xa132,	// (0x000677bc) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f8,	// (0x0006cd82) fep_china_uni_candidate_pane_g

0x6fd1,	// (0x0006465b) fep_entry_item_pane_g1

0xc06c,	// (0x000696f6) fep_entry_item_pane_t1_ParamLimits

0xc06c,	// (0x000696f6) fep_entry_item_pane_t1

0xc082,	// (0x0006970c) fep_candidate_item_pane_t1_ParamLimits

0xc082,	// (0x0006970c) fep_candidate_item_pane_t1

0xc097,	// (0x00069721) fep_candidate_item_pane_t2_ParamLimits

0xc097,	// (0x00069721) fep_candidate_item_pane_t2

0x0001,

0xf701,	// (0x0006cd8b) fep_candidate_item_pane_t_ParamLimits

0xf701,	// (0x0006cd8b) fep_candidate_item_pane_t

0x7029,	// (0x000646b3) list_highlight_pane_cp31_ParamLimits

0x7029,	// (0x000646b3) list_highlight_pane_cp31

0xc0a9,	// (0x00069733) level_1_signal_lsc

0xc0b2,	// (0x0006973c) level_2_signal_lsc

0xc0bb,	// (0x00069745) level_3_signal_lsc

0xc0c4,	// (0x0006974e) level_4_signal_lsc

0xc0cd,	// (0x00069757) level_5_signal_lsc

0xc0d6,	// (0x00069760) level_6_signal_lsc

0xc0df,	// (0x00069769) level_7_signal_lsc

0xc0df,	// (0x00069769) level_1_battery_lsc

0xc0e8,	// (0x00069772) level_2_battery_lsc

0xc0f1,	// (0x0006977b) level_3_battery_lsc

0xc0fa,	// (0x00069784) level_4_battery_lsc

0xc103,	// (0x0006978d) level_5_battery_lsc

0xc10c,	// (0x00069796) level_6_battery_lsc

0xc0a9,	// (0x00069733) level_7_battery_lsc

0xc115,	// (0x0006979f) scroll_handle_focus_pane_g1

0xc11e,	// (0x000697a8) scroll_handle_focus_pane_g2

0xc127,	// (0x000697b1) scroll_handle_focus_pane_g3

0x0002,

0xf706,	// (0x0006cd90) scroll_handle_focus_pane_g

0xa13a,	// (0x000677c4) list_single_2graphic_pane_g1_ParamLimits

0xa13a,	// (0x000677c4) list_single_2graphic_pane_g1

0x9883,	// (0x00066f0d) list_single_2graphic_pane_g2_ParamLimits

0x9883,	// (0x00066f0d) list_single_2graphic_pane_g2

0x0589,	// (0x0005dc13) list_single_2graphic_pane_g3_ParamLimits

0x0589,	// (0x0005dc13) list_single_2graphic_pane_g3

0xa146,	// (0x000677d0) list_single_2graphic_pane_g4_ParamLimits

0xa146,	// (0x000677d0) list_single_2graphic_pane_g4

0x0003,

0xf70d,	// (0x0006cd97) list_single_2graphic_pane_g_ParamLimits

0xf70d,	// (0x0006cd97) list_single_2graphic_pane_g

0xa152,	// (0x000677dc) list_single_2graphic_pane_t1_ParamLimits

0xa152,	// (0x000677dc) list_single_2graphic_pane_t1

0xa180,	// (0x0006780a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa180,	// (0x0006780a) list_double2_graphic_large_graphic_pane_g1

0x9a5f,	// (0x000670e9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9a5f,	// (0x000670e9) list_double2_graphic_large_graphic_pane_g2

0x99ac,	// (0x00067036) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x99ac,	// (0x00067036) list_double2_graphic_large_graphic_pane_g3

0xa192,	// (0x0006781c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa192,	// (0x0006781c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf716,	// (0x0006cda0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf716,	// (0x0006cda0) list_double2_graphic_large_graphic_pane_g

0xa19e,	// (0x00067828) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa19e,	// (0x00067828) list_double2_graphic_large_graphic_pane_t1

0xa1b4,	// (0x0006783e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa1b4,	// (0x0006783e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71f,	// (0x0006cda9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71f,	// (0x0006cda9) list_double2_graphic_large_graphic_pane_t

0xa239,	// (0x000678c3) popup_fast_swap_window_ParamLimits

0xa239,	// (0x000678c3) popup_fast_swap_window

0xa255,	// (0x000678df) popup_side_volume_key_window

0xc1dd,	// (0x00069867) stacon_top_pane

0xc1e7,	// (0x00069871) status_pane_ParamLimits

0xc1e7,	// (0x00069871) status_pane

0x6fc7,	// (0x00064651) status_small_pane

0x6fdb,	// (0x00064665) control_pane

0x6fdb,	// (0x00064665) stacon_bottom_pane

0x803c,	// (0x000656c6) scroll_pane_cp121

0x8033,	// (0x000656bd) set_content_pane

0xa1c6,	// (0x00067850) bg_active_tab_pane_g1_cp1

0xa1cf,	// (0x00067859) bg_active_tab_pane_g2_cp1

0xa1d8,	// (0x00067862) bg_active_tab_pane_g3_cp1

0xa1c6,	// (0x00067850) bg_passive_tab_pane_g1_cp1

0xa1cf,	// (0x00067859) bg_passive_tab_pane_g2_cp1

0xa1d8,	// (0x00067862) bg_passive_tab_pane_g3_cp1

0xa1e1,	// (0x0006786b) bg_active_tab_pane_g1_cp2

0xa1cf,	// (0x00067859) bg_active_tab_pane_g2_cp2

0xa1ea,	// (0x00067874) bg_active_tab_pane_g3_cp2

0xa1e1,	// (0x0006786b) bg_passive_tab_pane_g1_cp2

0xa1cf,	// (0x00067859) bg_passive_tab_pane_g2_cp2

0xa1ea,	// (0x00067874) bg_passive_tab_pane_g3_cp2

0xa1f3,	// (0x0006787d) bg_active_tab_pane_g1_cp3

0xa1cf,	// (0x00067859) bg_active_tab_pane_g2_cp3

0xa1fc,	// (0x00067886) bg_active_tab_pane_g3_cp3

0xa1f3,	// (0x0006787d) bg_passive_tab_pane_g1_cp3

0xa1cf,	// (0x00067859) bg_passive_tab_pane_g2_cp3

0xa1fc,	// (0x00067886) bg_passive_tab_pane_g3_cp3

0xa205,	// (0x0006788f) bg_active_tab_pane_g1_cp4

0xa1cf,	// (0x00067859) bg_active_tab_pane_g2_cp4

0xa210,	// (0x0006789a) bg_active_tab_pane_g3_cp4

0xa205,	// (0x0006788f) bg_passive_tab_pane_g1_cp4

0xa1cf,	// (0x00067859) bg_passive_tab_pane_g2_cp4

0xa210,	// (0x0006789a) bg_passive_tab_pane_g3_cp4

0xa21b,	// (0x000678a5) bg_active_tab_pane_g1_cp5

0xa1cf,	// (0x00067859) bg_active_tab_pane_g2_cp5

0xa224,	// (0x000678ae) bg_active_tab_pane_g3_cp5

0xa21b,	// (0x000678a5) bg_passive_tab_pane_g1_cp5

0xa1cf,	// (0x00067859) bg_passive_tab_pane_g2_cp5

0xa224,	// (0x000678ae) bg_passive_tab_pane_g3_cp5

0x3ae2,	// (0x0006116c) list_set_graphic_pane_ParamLimits

0x3ae2,	// (0x0006116c) list_set_graphic_pane

0x6fdb,	// (0x00064665) bg_set_opt_pane_cp4

0xc16e,	// (0x000697f8) list_set_graphic_pane_g1_ParamLimits

0xc16e,	// (0x000697f8) list_set_graphic_pane_g1

0xc17a,	// (0x00069804) list_set_graphic_pane_g2_ParamLimits

0xc17a,	// (0x00069804) list_set_graphic_pane_g2

0x0001,

0xf724,	// (0x0006cdae) list_set_graphic_pane_g_ParamLimits

0xf724,	// (0x0006cdae) list_set_graphic_pane_g

0x0009,

0xfaa9,	// (0x0006d133) volume_small_pane_cp_g

0xa22d,	// (0x000678b7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa22d,	// (0x000678b7) list_double2_large_graphic_pane_g1_cp2

0xc19c,	// (0x00069826) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc19c,	// (0x00069826) list_double2_large_graphic_pane_g2_cp2

0xc1ad,	// (0x00069837) list_double2_large_graphic_pane_g3_cp2

0xc1b5,	// (0x0006983f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc1b5,	// (0x0006983f) list_double2_large_graphic_pane_t1_cp2

0xc1cb,	// (0x00069855) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc1cb,	// (0x00069855) list_double2_large_graphic_pane_t2_cp2

0xc928,	// (0x00069fb2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc928,	// (0x00069fb2) list_double_large_graphic_pane_g1_cp2

0x3058,	// (0x000606e2) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3058,	// (0x000606e2) list_double_large_graphic_pane_g2_cp2

0xc303,	// (0x0006998d) list_double_large_graphic_pane_g3_cp2

0x3069,	// (0x000606f3) list_double_large_graphic_pane_g4_cp

0x3071,	// (0x000606fb) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3071,	// (0x000606fb) list_double_large_graphic_pane_t1_cp2

0x3088,	// (0x00060712) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3088,	// (0x00060712) list_double_large_graphic_pane_t2_cp2

0xc1f5,	// (0x0006987f) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc1f5,	// (0x0006987f) list_double2_graphic_pane_g1_cp2

0xc203,	// (0x0006988d) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc203,	// (0x0006988d) list_double2_graphic_pane_g2_cp2

0xc214,	// (0x0006989e) list_double2_graphic_pane_g3_cp2

0xc21e,	// (0x000698a8) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc21e,	// (0x000698a8) list_double2_graphic_pane_t1_cp2

0xc234,	// (0x000698be) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc234,	// (0x000698be) list_double2_graphic_pane_t2_cp2

0xc246,	// (0x000698d0) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc246,	// (0x000698d0) list_single_number_heading_pane_g1_cp2

0xc252,	// (0x000698dc) list_single_number_heading_pane_g2_cp2

0xc25a,	// (0x000698e4) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc25a,	// (0x000698e4) list_single_number_heading_pane_t1_cp2

0xc270,	// (0x000698fa) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc270,	// (0x000698fa) list_single_number_heading_pane_t2_cp2

0xc282,	// (0x0006990c) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc282,	// (0x0006990c) list_single_number_heading_pane_t3_cp2

0xc246,	// (0x000698d0) list_single_heading_pane_g1_cp2_ParamLimits

0xc246,	// (0x000698d0) list_single_heading_pane_g1_cp2

0xc252,	// (0x000698dc) list_single_heading_pane_g2_cp2

0xc25a,	// (0x000698e4) list_single_heading_pane_t1_cp2_ParamLimits

0xc25a,	// (0x000698e4) list_single_heading_pane_t1_cp2

0x2e51,	// (0x000604db) list_single_heading_pane_t2_cp2_ParamLimits

0x2e51,	// (0x000604db) list_single_heading_pane_t2_cp2

0x2d99,	// (0x00060423) list_double_graphic_pane_g1_cp2_ParamLimits

0x2d99,	// (0x00060423) list_double_graphic_pane_g1_cp2

0x2da5,	// (0x0006042f) list_double_graphic_pane_g2_cp2_ParamLimits

0x2da5,	// (0x0006042f) list_double_graphic_pane_g2_cp2

0x2db4,	// (0x0006043e) list_double_graphic_pane_g3_cp2

0x2dbc,	// (0x00060446) list_double_graphic_pane_t1_cp2_ParamLimits

0x2dbc,	// (0x00060446) list_double_graphic_pane_t1_cp2

0x2dd2,	// (0x0006045c) list_double_graphic_pane_t2_cp2_ParamLimits

0x2dd2,	// (0x0006045c) list_double_graphic_pane_t2_cp2

0xc2f7,	// (0x00069981) list_double_number_pane_g1_cp2_ParamLimits

0xc2f7,	// (0x00069981) list_double_number_pane_g1_cp2

0xc303,	// (0x0006998d) list_double_number_pane_g2_cp2

0x2d5d,	// (0x000603e7) list_double_number_pane_t1_cp2_ParamLimits

0x2d5d,	// (0x000603e7) list_double_number_pane_t1_cp2

0x2d71,	// (0x000603fb) list_double_number_pane_t2_cp2_ParamLimits

0x2d71,	// (0x000603fb) list_double_number_pane_t2_cp2

0x2d87,	// (0x00060411) list_double_number_pane_t3_cp2_ParamLimits

0x2d87,	// (0x00060411) list_double_number_pane_t3_cp2

0x2c46,	// (0x000602d0) list_single_graphic_pane_g1_cp2_ParamLimits

0x2c46,	// (0x000602d0) list_single_graphic_pane_g1_cp2

0xbee7,	// (0x00069571) list_single_graphic_pane_g2_cp2_ParamLimits

0xbee7,	// (0x00069571) list_single_graphic_pane_g2_cp2

0xc35c,	// (0x000699e6) list_single_graphic_pane_g3_cp2

0x2c1c,	// (0x000602a6) list_single_graphic_pane_t1_cp2_ParamLimits

0x2c1c,	// (0x000602a6) list_single_graphic_pane_t1_cp2

0xbee7,	// (0x00069571) list_single_number_pane_g1_cp2_ParamLimits

0xbee7,	// (0x00069571) list_single_number_pane_g1_cp2

0xc35c,	// (0x000699e6) list_single_number_pane_g2_cp2

0x2c1c,	// (0x000602a6) list_single_number_pane_t1_cp2_ParamLimits

0x2c1c,	// (0x000602a6) list_single_number_pane_t1_cp2

0x2c32,	// (0x000602bc) list_single_number_pane_t2_cp2_ParamLimits

0x2c32,	// (0x000602bc) list_single_number_pane_t2_cp2

0xc19c,	// (0x00069826) list_double2_pane_g1_cp2_ParamLimits

0xc19c,	// (0x00069826) list_double2_pane_g1_cp2

0xc1ad,	// (0x00069837) list_double2_pane_g2_cp2

0xc2cf,	// (0x00069959) list_double2_pane_t1_cp2_ParamLimits

0xc2cf,	// (0x00069959) list_double2_pane_t1_cp2

0xc2e5,	// (0x0006996f) list_double2_pane_t2_cp2_ParamLimits

0xc2e5,	// (0x0006996f) list_double2_pane_t2_cp2

0xc2f7,	// (0x00069981) list_double_pane_g1_cp2_ParamLimits

0xc2f7,	// (0x00069981) list_double_pane_g1_cp2

0xc303,	// (0x0006998d) list_double_pane_g2_cp2

0xc30b,	// (0x00069995) list_double_pane_t1_cp2_ParamLimits

0xc30b,	// (0x00069995) list_double_pane_t1_cp2

0xc321,	// (0x000699ab) list_double_pane_t2_cp2_ParamLimits

0xc321,	// (0x000699ab) list_double_pane_t2_cp2

0xa26f,	// (0x000678f9) list_single_pane_cp2_g3

0xbee7,	// (0x00069571) list_single_pane_g1_cp2_ParamLimits

0xbee7,	// (0x00069571) list_single_pane_g1_cp2

0xc35c,	// (0x000699e6) list_single_pane_g2_cp2

0xc364,	// (0x000699ee) list_single_pane_t1_cp2_ParamLimits

0xc364,	// (0x000699ee) list_single_pane_t1_cp2

0xa277,	// (0x00067901) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa277,	// (0x00067901) list_single_large_graphic_pane_g1_cp2

0xc37c,	// (0x00069a06) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc37c,	// (0x00069a06) list_single_large_graphic_pane_g2_cp2

0xc388,	// (0x00069a12) list_single_large_graphic_pane_g3_cp2

0xa283,	// (0x0006790d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa283,	// (0x0006790d) list_single_large_graphic_pane_g4_cp1

0xc390,	// (0x00069a1a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc390,	// (0x00069a1a) list_single_large_graphic_pane_t1_cp2

0x2be8,	// (0x00060272) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2be8,	// (0x00060272) list_single_graphic_heading_pane_g1_cp2

0x2bb5,	// (0x0006023f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2bb5,	// (0x0006023f) list_single_graphic_heading_pane_g4_cp2

0xc35c,	// (0x000699e6) list_single_graphic_heading_pane_g5_cp2

0x2bf4,	// (0x0006027e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2bf4,	// (0x0006027e) list_single_graphic_heading_pane_t1_cp2

0x2c0a,	// (0x00060294) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2c0a,	// (0x00060294) list_single_graphic_heading_pane_t2_cp2

0x2ba9,	// (0x00060233) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2ba9,	// (0x00060233) list_single_2graphic_pane_g1_cp2

0x2bb5,	// (0x0006023f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2bb5,	// (0x0006023f) list_single_2graphic_pane_g2_cp2

0xc35c,	// (0x000699e6) list_single_2graphic_pane_g3_cp2

0x2bc6,	// (0x00060250) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2bc6,	// (0x00060250) list_single_2graphic_pane_g4_cp2

0x2bd2,	// (0x0006025c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2bd2,	// (0x0006025c) list_single_2graphic_pane_t1_cp2

0x6fd1,	// (0x0006465b) list_highlight_pane_g10_cp1

0x2791,	// (0x0005fe1b) list_highlight_pane_g1_cp1

0x2799,	// (0x0005fe23) list_highlight_pane_g2_cp1

0x27a1,	// (0x0005fe2b) list_highlight_pane_g3_cp1

0x27a9,	// (0x0005fe33) list_highlight_pane_g4_cp1

0x27b1,	// (0x0005fe3b) list_highlight_pane_g5_cp1

0x27b9,	// (0x0005fe43) list_highlight_pane_g6_cp1

0x27c1,	// (0x0005fe4b) list_highlight_pane_g7_cp1

0x27c9,	// (0x0005fe53) list_highlight_pane_g8_cp1

0x27d1,	// (0x0005fe5b) list_highlight_pane_g9_cp1

0xc6bd,	// (0x00069d47) form_field_slider_pane_t3

0xc6cb,	// (0x00069d55) form_field_slider_pane_t4

0x26d5,	// (0x0005fd5f) slider_form_pane_ParamLimits

0x26d5,	// (0x0005fd5f) slider_form_pane

0x6fdb,	// (0x00064665) control_abbreviations

0x6fdb,	// (0x00064665) control_conventions

0x6fdb,	// (0x00064665) control_definitions

0x6fdb,	// (0x00064665) format_table_attribute

0xc8ff,	// (0x00069f89) bg_popup_preview_window_pane_g9

0x6fdb,	// (0x00064665) format_table_data2

0x6fdb,	// (0x00064665) format_table_data3

0x6fdb,	// (0x00064665) format_table_data_example

0x0008,

0x6fdb,	// (0x00064665) intro_purpose

0xf8b4,	// (0x0006cf3e) bg_popup_preview_window_pane_g

0x6fdb,	// (0x00064665) texts_category

0x6fdb,	// (0x00064665) texts_graphics

0xc3a6,	// (0x00069a30) text_digital

0xc3b5,	// (0x00069a3f) text_primary

0xc3c4,	// (0x00069a4e) text_primary_small

0xc3d3,	// (0x00069a5d) text_secondary

0xc3e2,	// (0x00069a6c) text_title

0xcc6e,	// (0x0006a2f8) bg_passive_tab_pane_g1_cp3_srt

0xa1cf,	// (0x00067859) bg_passive_tab_pane_g2_cp3_srt

0xcc77,	// (0x0006a301) bg_passive_tab_pane_g3_cp3_srt

0x7153,	// (0x000647dd) bg_active_tab_pane_cp3_srt_ParamLimits

0x7153,	// (0x000647dd) bg_active_tab_pane_cp3_srt

0xcc80,	// (0x0006a30a) tabs_4_active_pane_srt_g1

0xcc88,	// (0x0006a312) tabs_4_active_pane_srt_t1_ParamLimits

0xcc88,	// (0x0006a312) tabs_4_active_pane_srt_t1

0xcc6e,	// (0x0006a2f8) bg_active_tab_pane_g1_cp3_copy1

0xa1cf,	// (0x00067859) bg_active_tab_pane_g2_cp3_copy1

0xcc77,	// (0x0006a301) bg_active_tab_pane_g3_cp3_copy1

0x7029,	// (0x000646b3) tabs_2_long_active_pane_srt_ParamLimits

0x7029,	// (0x000646b3) tabs_2_long_active_pane_srt

0x7029,	// (0x000646b3) tabs_2_long_passive_pane_srt_ParamLimits

0x7029,	// (0x000646b3) tabs_2_long_passive_pane_srt

0x8441,	// (0x00065acb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8441,	// (0x00065acb) bg_passive_tab_pane_cp4_srt

0xca1f,	// (0x0006a0a9) bg_passive_tab_pane_g1_cp4_srt

0xa1cf,	// (0x00067859) bg_passive_tab_pane_g2_cp4_srt

0xca28,	// (0x0006a0b2) bg_passive_tab_pane_g3_cp4_srt

0x7029,	// (0x000646b3) bg_active_tab_pane_cp4_srt_ParamLimits

0x7029,	// (0x000646b3) bg_active_tab_pane_cp4_srt

0xca31,	// (0x0006a0bb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xca31,	// (0x0006a0bb) tabs_2_long_active_pane_srt_t1

0xca1f,	// (0x0006a0a9) bg_active_tab_pane_g1_cp4_srt

0xa1cf,	// (0x00067859) bg_active_tab_pane_g2_cp4_srt

0xca28,	// (0x0006a0b2) bg_active_tab_pane_g3_cp4_srt

0x7153,	// (0x000647dd) tabs_3_long_active_pane_srt_ParamLimits

0x7153,	// (0x000647dd) tabs_3_long_active_pane_srt

0x7153,	// (0x000647dd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7153,	// (0x000647dd) tabs_3_long_passive_pane_cp_srt

0x7153,	// (0x000647dd) tabs_3_long_passive_pane_srt_ParamLimits

0x7153,	// (0x000647dd) tabs_3_long_passive_pane_srt

0x8441,	// (0x00065acb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8441,	// (0x00065acb) bg_passive_tab_pane_cp5_srt

0xa21b,	// (0x000678a5) bg_passive_tab_pane_g1_cp5_srt

0xa1cf,	// (0x00067859) bg_passive_tab_pane_g2_cp5_srt

0xa224,	// (0x000678ae) bg_passive_tab_pane_g3_cp5_srt

0x7029,	// (0x000646b3) bg_active_tab_pane_cp5_srt_ParamLimits

0x7029,	// (0x000646b3) bg_active_tab_pane_cp5_srt

0xca09,	// (0x0006a093) tabs_3_long_active_pane_srt_t1_ParamLimits

0xca09,	// (0x0006a093) tabs_3_long_active_pane_srt_t1

0xa21b,	// (0x000678a5) bg_active_tab_pane_g1_cp5_srt

0xa1cf,	// (0x00067859) bg_active_tab_pane_g2_cp5_srt

0xa224,	// (0x000678ae) bg_active_tab_pane_g3_cp5_srt

0x329c,	// (0x00060926) navi_text_pane_srt_t1

0x3294,	// (0x0006091e) navi_icon_pane_srt_g1

0xc4cd,	// (0x00069b57) midp_editing_number_pane_srt

0xc3f1,	// (0x00069a7b) midp_ticker_pane_srt

0xc4d5,	// (0x00069b5f) midp_ticker_pane_srt_g1

0xc4dd,	// (0x00069b67) midp_ticker_pane_srt_g2

0x0001,

0xf743,	// (0x0006cdcd) midp_ticker_pane_srt_g

0xc4e5,	// (0x00069b6f) midp_ticker_pane_srt_t1

0x3285,	// (0x0006090f) midp_editing_number_pane_t1_copy1

0xa29d,	// (0x00067927) listscroll_midp_pane

0xa29d,	// (0x00067927) midp_form_pane

0xa308,	// (0x00067992) midp_info_popup_window_ParamLimits

0xa308,	// (0x00067992) midp_info_popup_window

0x8136,	// (0x000657c0) bg_popup_sub_pane_cp50_ParamLimits

0x8136,	// (0x000657c0) bg_popup_sub_pane_cp50

0x23c5,	// (0x0005fa4f) listscroll_midp_info_pane_ParamLimits

0x23c5,	// (0x0005fa4f) listscroll_midp_info_pane

0x23a5,	// (0x0005fa2f) listscroll_form_midp_pane_ParamLimits

0x23a5,	// (0x0005fa2f) listscroll_form_midp_pane

0x23b1,	// (0x0005fa3b) scroll_bar_cp050

0x23a5,	// (0x0005fa2f) list_midp_pane

0xce12,	// (0x0006a49c) signal_pane_g2_cp

0x22bf,	// (0x0005f949) listscroll_midp_info_pane_t1_ParamLimits

0x22bf,	// (0x0005f949) listscroll_midp_info_pane_t1

0xb32a,	// (0x000689b4) listscroll_midp_info_pane_t2_ParamLimits

0xb32a,	// (0x000689b4) listscroll_midp_info_pane_t2

0xb368,	// (0x000689f2) listscroll_midp_info_pane_t3_ParamLimits

0xb368,	// (0x000689f2) listscroll_midp_info_pane_t3

0xb3a2,	// (0x00068a2c) listscroll_midp_info_pane_t4_ParamLimits

0xb3a2,	// (0x00068a2c) listscroll_midp_info_pane_t4

0x0003,

0xf7ef,	// (0x0006ce79) listscroll_midp_info_pane_t_ParamLimits

0xf7ef,	// (0x0006ce79) listscroll_midp_info_pane_t

0x818b,	// (0x00065815) scroll_pane_cp21

0x225f,	// (0x0005f8e9) form_midp_field_choice_group_pane

0xb2ed,	// (0x00068977) form_midp_field_text_pane

0x22a5,	// (0x0005f92f) form_midp_field_time_pane

0x22ad,	// (0x0005f937) form_midp_gauge_slider_pane

0x22b6,	// (0x0005f940) form_midp_gauge_wait_pane

0x6fdb,	// (0x00064665) form_midp_image_pane

0xb2d7,	// (0x00068961) list_single_midp_pane_ParamLimits

0xb2d7,	// (0x00068961) list_single_midp_pane

0xb2b5,	// (0x0006893f) form_midp_field_text_pane_t1

0x1fde,	// (0x0005f668) input_focus_pane_cp050

0x224e,	// (0x0005f8d8) list_midp_form_text_pane

0x21e3,	// (0x0005f86d) form_midp_field_choice_group_pane_t1

0x21f1,	// (0x0005f87b) input_focus_pane_cp051

0x2205,	// (0x0005f88f) list_midp_choice_pane

0x6fdb,	// (0x00064665) status_idle_pane

0x21c7,	// (0x0005f851) form_midp_field_time_pane_t1

0x6fd1,	// (0x0006465b) wait_anim_pane_g2_copy1

0x21d5,	// (0x0005f85f) form_midp_field_time_pane_t2

0x0001,

0xc451,	// (0x00069adb) aid_navinavi_width_2_pane

0xf7ea,	// (0x0006ce74) form_midp_field_time_pane_t

0x6fdb,	// (0x00064665) input_focus_pane_cp052

0x6fdb,	// (0x00064665) bg_input_focus_pane_cp040

0x2187,	// (0x0005f811) form_midp_gauge_slider_pane_t1

0x2195,	// (0x0005f81f) form_midp_gauge_slider_pane_t2

0xb299,	// (0x00068923) form_midp_gauge_slider_pane_t3

0xb2a7,	// (0x00068931) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e1,	// (0x0006ce6b) form_midp_gauge_slider_pane_t

0x21bf,	// (0x0005f849) form_midp_slider_pane

0x7029,	// (0x000646b3) bg_input_focus_pane_cp041_ParamLimits

0x7029,	// (0x000646b3) bg_input_focus_pane_cp041

0x2154,	// (0x0005f7de) form_midp_gauge_wait_pane_t1_ParamLimits

0x2154,	// (0x0005f7de) form_midp_gauge_wait_pane_t1

0x2166,	// (0x0005f7f0) form_midp_gauge_wait_pane_t2_ParamLimits

0x2166,	// (0x0005f7f0) form_midp_gauge_wait_pane_t2

0x0001,

0xf7dc,	// (0x0006ce66) form_midp_gauge_wait_pane_t_ParamLimits

0xf7dc,	// (0x0006ce66) form_midp_gauge_wait_pane_t

0x2178,	// (0x0005f802) form_midp_wait_pane_ParamLimits

0x2178,	// (0x0005f802) form_midp_wait_pane

0xb263,	// (0x000688ed) form_midp_image_pane_g1

0xb26c,	// (0x000688f6) form_midp_image_pane_t1

0xb27b,	// (0x00068905) form_midp_image_pane_t2

0xb28a,	// (0x00068914) form_midp_image_pane_t3

0x0002,

0xf7d5,	// (0x0006ce5f) form_midp_image_pane_t

0x2115,	// (0x0005f79f) list_single_midp_pane_g1

0xead7,	// (0x0006c161) list_single_midp_pane_t1

0xb24e,	// (0x000688d8) list_midp_form_item_pane_ParamLimits

0xb24e,	// (0x000688d8) list_midp_form_item_pane

0xc3f9,	// (0x00069a83) list_midp_form_item_pane_t1

0xc408,	// (0x00069a92) midp_ticker_pane_g1

0xc414,	// (0x00069a9e) midp_ticker_pane_g2

0x0001,

0xf729,	// (0x0006cdb3) midp_ticker_pane_g

0xc420,	// (0x00069aaa) midp_ticker_pane_t1

0x34d2,	// (0x00060b5c) midp_editing_number_pane_t1

0x34b0,	// (0x00060b3a) midp_editing_number_pane

0x34bf,	// (0x00060b49) midp_ticker_pane

0x3275,	// (0x000608ff) ai_message_heading_pane

0x6fdb,	// (0x00064665) bg_popup_window_pane_cp14

0x327d,	// (0x00060907) listscroll_ai_message_pane

0x31ff,	// (0x00060889) ai_message_heading_pane_g1_ParamLimits

0x31ff,	// (0x00060889) ai_message_heading_pane_g1

0xc9d1,	// (0x0006a05b) ai_message_heading_pane_g2_ParamLimits

0xc9d1,	// (0x0006a05b) ai_message_heading_pane_g2

0x3217,	// (0x000608a1) ai_message_heading_pane_g3_ParamLimits

0x3217,	// (0x000608a1) ai_message_heading_pane_g3

0x3223,	// (0x000608ad) ai_message_heading_pane_g4_ParamLimits

0x3223,	// (0x000608ad) ai_message_heading_pane_g4

0x0003,

0xf916,	// (0x0006cfa0) ai_message_heading_pane_g_ParamLimits

0xf916,	// (0x0006cfa0) ai_message_heading_pane_g

0xc9dd,	// (0x0006a067) ai_message_heading_pane_t1_ParamLimits

0xc9dd,	// (0x0006a067) ai_message_heading_pane_t1

0xc9f7,	// (0x0006a081) ai_message_heading_pane_t2_ParamLimits

0xc9f7,	// (0x0006a081) ai_message_heading_pane_t2

0x0001,

0xf91f,	// (0x0006cfa9) ai_message_heading_pane_t_ParamLimits

0xf91f,	// (0x0006cfa9) ai_message_heading_pane_t

0x325b,	// (0x000608e5) bg_popup_heading_pane_cp1_ParamLimits

0x325b,	// (0x000608e5) bg_popup_heading_pane_cp1

0x31ed,	// (0x00060877) list_ai_message_pane_ParamLimits

0x31ed,	// (0x00060877) list_ai_message_pane

0x818b,	// (0x00065815) scroll_pane_cp10

0xc9c9,	// (0x0006a053) list_ai_message_pane_g1

0x3191,	// (0x0006081b) list_ai_message_pane_g2

0x0001,

0xf8f3,	// (0x0006cf7d) list_ai_message_pane_g

0x3199,	// (0x00060823) list_ai_message_pane_t1_ParamLimits

0x3199,	// (0x00060823) list_ai_message_pane_t1

0x31ae,	// (0x00060838) list_ai_message_pane_t2_ParamLimits

0x31ae,	// (0x00060838) list_ai_message_pane_t2

0x31c3,	// (0x0006084d) list_ai_message_pane_t3_ParamLimits

0x31c3,	// (0x0006084d) list_ai_message_pane_t3

0x31d8,	// (0x00060862) list_ai_message_pane_t4_ParamLimits

0x31d8,	// (0x00060862) list_ai_message_pane_t4

0x0003,

0xf8f8,	// (0x0006cf82) list_ai_message_pane_t_ParamLimits

0xf8f8,	// (0x0006cf82) list_ai_message_pane_t

0xc9a5,	// (0x0006a02f) cell_ai_soft_ind_pane_ParamLimits

0xc9a5,	// (0x0006a02f) cell_ai_soft_ind_pane

0xc432,	// (0x00069abc) cell_ai_soft_ind_pane_g1_ParamLimits

0xc432,	// (0x00069abc) cell_ai_soft_ind_pane_g1

0x6fdb,	// (0x00064665) grid_highlight_cp1

0xc43f,	// (0x00069ac9) text_secondary_cp56_ParamLimits

0xc43f,	// (0x00069ac9) text_secondary_cp56

0x3149,	// (0x000607d3) example_general_pane_ParamLimits

0x3149,	// (0x000607d3) example_general_pane

0x3155,	// (0x000607df) example_parent_pane_g1_ParamLimits

0x3155,	// (0x000607df) example_parent_pane_g1

0x3161,	// (0x000607eb) example_parent_pane_t1_ParamLimits

0x3161,	// (0x000607eb) example_parent_pane_t1

0xa9d2,	// (0x0006805c) popup_preview_text_window_ParamLimits

0xa9d2,	// (0x0006805c) popup_preview_text_window

0xc354,	// (0x000699de) list_single_pane_cp2_g4

0x7209,	// (0x00064893) bg_popup_preview_window_pane_ParamLimits

0x7209,	// (0x00064893) bg_popup_preview_window_pane

0xc907,	// (0x00069f91) popup_preview_text_window_t1_ParamLimits

0xc907,	// (0x00069f91) popup_preview_text_window_t1

0x2ec1,	// (0x0006054b) popup_preview_text_window_t2_ParamLimits

0x2ec1,	// (0x0006054b) popup_preview_text_window_t2

0x2f0a,	// (0x00060594) popup_preview_text_window_t3_ParamLimits

0x2f0a,	// (0x00060594) popup_preview_text_window_t3

0x2f4f,	// (0x000605d9) popup_preview_text_window_t4_ParamLimits

0x2f4f,	// (0x000605d9) popup_preview_text_window_t4

0x0004,

0xf8c7,	// (0x0006cf51) popup_preview_text_window_t_ParamLimits

0xf8c7,	// (0x0006cf51) popup_preview_text_window_t

0x2fcd,	// (0x00060657) scroll_pane_cp11

0x1f52,	// (0x0005f5dc) bg_popup_preview_window_pane_g1

0xc8c7,	// (0x00069f51) bg_popup_preview_window_pane_g2

0xc8cf,	// (0x00069f59) bg_popup_preview_window_pane_g3

0xc8d7,	// (0x00069f61) bg_popup_preview_window_pane_g4

0xc8df,	// (0x00069f69) bg_popup_preview_window_pane_g5

0xc8e7,	// (0x00069f71) bg_popup_preview_window_pane_g6

0xc8ef,	// (0x00069f79) bg_popup_preview_window_pane_g7

0xc8f7,	// (0x00069f81) bg_popup_preview_window_pane_g8

0xe7ab,	// (0x0006be35) aid_popup_width_pane

0xa94e,	// (0x00067fd8) popup_midp_note_alarm_window_ParamLimits

0xa94e,	// (0x00067fd8) popup_midp_note_alarm_window

0x804d,	// (0x000656d7) data_form_pane_ParamLimits

0x9c95,	// (0x0006731f) form_field_data_pane_g1

0x9c9f,	// (0x00067329) form_field_data_pane_t1_ParamLimits

0x8059,	// (0x000656e3) input_focus_pane_ParamLimits

0xe85f,	// (0x0006bee9) data_form_wide_pane_ParamLimits

0xe870,	// (0x0006befa) form_field_data_wide_pane_g1

0xe87c,	// (0x0006bf06) form_field_data_wide_pane_t1_ParamLimits

0x7f4d,	// (0x000655d7) input_focus_pane_cp6_ParamLimits

0x9e11,	// (0x0006749b) input_popup_find_pane_g1_ParamLimits

0x9e11,	// (0x0006749b) input_popup_find_pane_g1

0xf17d,	// (0x0006c807) aid_navi_side_left_pane

0xf192,	// (0x0006c81c) aid_navi_side_right_pane

0x288c,	// (0x0005ff16) bg_popup_window_pane_cp30_ParamLimits

0x288c,	// (0x0005ff16) bg_popup_window_pane_cp30

0x2906,	// (0x0005ff90) popup_midp_note_alarm_window_g1_ParamLimits

0x2906,	// (0x0005ff90) popup_midp_note_alarm_window_g1

0x2936,	// (0x0005ffc0) popup_midp_note_alarm_window_t1_ParamLimits

0x2936,	// (0x0005ffc0) popup_midp_note_alarm_window_t1

0xc710,	// (0x00069d9a) popup_midp_note_alarm_window_t2_ParamLimits

0xc710,	// (0x00069d9a) popup_midp_note_alarm_window_t2

0xc7be,	// (0x00069e48) popup_midp_note_alarm_window_t3_ParamLimits

0xc7be,	// (0x00069e48) popup_midp_note_alarm_window_t3

0xc7e6,	// (0x00069e70) popup_midp_note_alarm_window_t4_ParamLimits

0xc7e6,	// (0x00069e70) popup_midp_note_alarm_window_t4

0x2acd,	// (0x00060157) popup_midp_note_alarm_window_t5_ParamLimits

0x2acd,	// (0x00060157) popup_midp_note_alarm_window_t5

0x000a,

0xf864,	// (0x0006ceee) popup_midp_note_alarm_window_t_ParamLimits

0xf864,	// (0x0006ceee) popup_midp_note_alarm_window_t

0x2b79,	// (0x00060203) wait_bar_pane_cp1_ParamLimits

0x2b79,	// (0x00060203) wait_bar_pane_cp1

0x6fdb,	// (0x00064665) wait_anim_pane_copy1

0x6fdb,	// (0x00064665) wait_border_pane_copy1

0x2582,	// (0x0005fc0c) wait_border_pane_g1_copy1

0xe896,	// (0x0006bf20) form_field_popup_pane_g1

0x9cb9,	// (0x00067343) form_field_popup_pane_t1_ParamLimits

0x8059,	// (0x000656e3) input_focus_pane_cp7_ParamLimits

0x8087,	// (0x00065711) list_form_pane_ParamLimits

0xe89e,	// (0x0006bf28) form_field_popup_wide_pane_g1

0xe8a6,	// (0x0006bf30) form_field_popup_wide_pane_t1_ParamLimits

0x8059,	// (0x000656e3) input_focus_pane_cp8_ParamLimits

0x8093,	// (0x0006571d) list_form_wide_pane_ParamLimits

0x36b8,	// (0x00060d42) aid_size_cell_graphic_pane

0x9d38,	// (0x000673c2) data_form_pane_t1_ParamLimits

0xb4ae,	// (0x00068b38) data_form_wide_pane_t1_ParamLimits

0xae15,	// (0x0006849f) bg_status_flat_pane

0x9211,	// (0x0006689b) title_pane_t1_ParamLimits

0x6ff1,	// (0x0006467b) title_pane_t2_ParamLimits

0x7017,	// (0x000646a1) title_pane_t3_ParamLimits

0xf532,	// (0x0006cbbc) title_pane_t_ParamLimits

0x8434,	// (0x00065abe) level_1_signal_ParamLimits

0xbf35,	// (0x000695bf) level_2_signal_ParamLimits

0xbf42,	// (0x000695cc) level_3_signal_ParamLimits

0xbf4f,	// (0x000695d9) level_4_signal_ParamLimits

0xbf5c,	// (0x000695e6) level_5_signal_ParamLimits

0xbf69,	// (0x000695f3) level_6_signal_ParamLimits

0xbf76,	// (0x00069600) level_7_signal_ParamLimits

0x8434,	// (0x00065abe) level_1_battery_ParamLimits

0xbf35,	// (0x000695bf) level_2_battery_ParamLimits

0xbf42,	// (0x000695cc) level_3_battery_ParamLimits

0xbf4f,	// (0x000695d9) level_4_battery_ParamLimits

0xbf5c,	// (0x000695e6) level_5_battery_ParamLimits

0xbf69,	// (0x000695f3) level_6_battery_ParamLimits

0xbf76,	// (0x00069600) level_7_battery_ParamLimits

0x2791,	// (0x0005fe1b) bg_status_flat_pane_g1

0x2799,	// (0x0005fe23) bg_status_flat_pane_g2

0x27a1,	// (0x0005fe2b) bg_status_flat_pane_g3

0x27a9,	// (0x0005fe33) bg_status_flat_pane_g4

0x27b1,	// (0x0005fe3b) bg_status_flat_pane_g5

0x27b9,	// (0x0005fe43) bg_status_flat_pane_g6

0x27c1,	// (0x0005fe4b) bg_status_flat_pane_g7

0x92a5,	// (0x0006692f) tabs_3_active_pane_t1_ParamLimits

0x92a5,	// (0x0006692f) tabs_3_passive_pane_t1_ParamLimits

0x92bf,	// (0x00066949) tabs_4_active_pane_t1_ParamLimits

0x92bf,	// (0x00066949) tabs_4_1_passive_pane_t1_ParamLimits

0x9e50,	// (0x000674da) tabs_2_active_pane_t1_ParamLimits

0x9e50,	// (0x000674da) tabs_2_passive_pane_t1_ParamLimits

0x7029,	// (0x000646b3) bg_active_tab_pane_cp4_ParamLimits

0x9e62,	// (0x000674ec) tabs_2_long_active_pane_t1_ParamLimits

0x8441,	// (0x00065acb) bg_passive_tab_pane_cp4_ParamLimits

0x05f6,	// (0x0005dc80) list_single_midp_graphic_pane_t1_ParamLimits

0x7029,	// (0x000646b3) bg_active_tab_pane_cp5_ParamLimits

0x9e75,	// (0x000674ff) tabs_3_long_active_pane_t1_ParamLimits

0x8441,	// (0x00065acb) bg_passive_tab_pane_cp5_ParamLimits

0x05f6,	// (0x0005dc80) list_single_midp_graphic_pane_t1

0xae15,	// (0x0006849f) bg_status_flat_pane_ParamLimits

0x03be,	// (0x0005da48) indicator_pane_cp2_ParamLimits

0x03be,	// (0x0005da48) indicator_pane_cp2

0xaf93,	// (0x0006861d) navi_pane_srt_ParamLimits

0xaf93,	// (0x0006861d) navi_pane_srt

0x050d,	// (0x0005db97) popup_clock_digital_analogue_window_cp1

0x706d,	// (0x000646f7) indicator_pane_t1

0xc3f1,	// (0x00069a7b) copy_highlight_pane

0xc3f1,	// (0x00069a7b) cursor_graphics_pane

0xc3f1,	// (0x00069a7b) graphic_within_text_pane

0xc3f1,	// (0x00069a7b) link_highlight_pane

0x2f90,	// (0x0006061a) popup_preview_text_window_t5_ParamLimits

0x2f90,	// (0x0006061a) popup_preview_text_window_t5

0xc459,	// (0x00069ae3) cursor_digital_pane

0xc459,	// (0x00069ae3) cursor_primary_pane

0xc46a,	// (0x00069af4) cursor_primary_small_pane

0xc472,	// (0x00069afc) cursor_secondary_pane

0xc47a,	// (0x00069b04) cursor_title_pane

0xc459,	// (0x00069ae3) link_highlight_digital_pane

0xc461,	// (0x00069aeb) link_highlight_primary_pane

0xc46a,	// (0x00069af4) link_highlight_primary_small_pane

0xc472,	// (0x00069afc) link_highlight_secondary_pane

0xc47a,	// (0x00069b04) link_highlight_title_pane

0xc459,	// (0x00069ae3) copy_highlight_digital_pane

0xc459,	// (0x00069ae3) copy_highlight_primary_pane

0xc46a,	// (0x00069af4) copy_highlight_primary_small_pane

0xc472,	// (0x00069afc) copy_highlight_secondary_pane

0xc47a,	// (0x00069b04) copy_highlight_title_pane

0xc472,	// (0x00069afc) graphic_text_digital_pane

0x282f,	// (0x0005feb9) graphic_text_primary_pane

0x2838,	// (0x0005fec2) graphic_text_primary_small_pane

0xc46a,	// (0x00069af4) graphic_text_secondary_pane

0xc459,	// (0x00069ae3) graphic_text_title_pane

0xa359,	// (0x000679e3) cursor_primary_pane_g1

0x2821,	// (0x0005feab) cursor_text_primary_t1

0xc706,	// (0x00069d90) cursor_primary_small_pane_g1

0x2813,	// (0x0005fe9d) cursor_text_primary_small_t1

0xc6fc,	// (0x00069d86) cursor_primary_small_pane_g1_copy1

0x27fb,	// (0x0005fe85) cursor_text_primary_small_t1_copy1

0x27d9,	// (0x0005fe63) cursor_text_title_t1

0xc6f2,	// (0x00069d7c) cursor_title_pane_g1

0xa359,	// (0x000679e3) cursor_digital_pane_g1

0xc482,	// (0x00069b0c) cursor_text_digital_t1

0xc490,	// (0x00069b1a) link_highlight_primary_pane_g1

0x2782,	// (0x0005fe0c) link_highlight_primary_pane_t1

0xc490,	// (0x00069b1a) link_highlight_primary_small_pane_g1

0xc498,	// (0x00069b22) link_highlight_primary_small_pane_t1

0xc490,	// (0x00069b1a) link_highlight_secondary_pane_g1

0xc4a7,	// (0x00069b31) link_highlight_secondary_pane_t1

0x26e7,	// (0x0005fd71) link_highlight_title_pane_g1

0x26fe,	// (0x0005fd88) link_highlight_title_pane_t1

0x26e7,	// (0x0005fd71) link_highlight_digital_pane_g1

0x26ef,	// (0x0005fd79) link_highlight_digital_pane_t1

0x25a1,	// (0x0005fc2b) copy_highlight_primary_pane_g1

0x25c7,	// (0x0005fc51) copy_highlight_primary_pane_t1

0x25a1,	// (0x0005fc2b) copy_highlight_primary_small_pane_g1

0x25b8,	// (0x0005fc42) copy_highlight_primary_small_pane_t1

0xc4b6,	// (0x00069b40) copy_highlight_secondary_pane_g1

0xc4be,	// (0x00069b48) copy_highlight_secondary_pane_t1

0x25a1,	// (0x0005fc2b) copy_highlight_title_pane_g1

0x25a9,	// (0x0005fc33) copy_highlight_title_pane_t1

0x25a1,	// (0x0005fc2b) copy_highlight_digital_pane_g1

0x3886,	// (0x00060f10) copy_highlight_digital_pane_t1

0x37da,	// (0x00060e64) graphic_text_primary_pane_g1

0x386a,	// (0x00060ef4) graphic_text_primary_pane_t1

0x3878,	// (0x00060f02) graphic_text_primary_pane_t2

0x0001,

0xf993,	// (0x0006d01d) graphic_text_primary_pane_t

0x3846,	// (0x00060ed0) graphic_text_primary_small_pane_g1

0x384e,	// (0x00060ed8) graphic_text_primary_small_pane_t1

0x385c,	// (0x00060ee6) graphic_text_primary_small_pane_t2

0x0001,

0xf98e,	// (0x0006d018) graphic_text_primary_small_pane_t

0x3822,	// (0x00060eac) graphic_text_secondary_pane_g1

0x382a,	// (0x00060eb4) graphic_text_secondary_pane_t1

0x3838,	// (0x00060ec2) graphic_text_secondary_pane_t2

0x0001,

0xf989,	// (0x0006d013) graphic_text_secondary_pane_t

0x37fe,	// (0x00060e88) graphic_text_title_pane_g1

0x3806,	// (0x00060e90) graphic_text_title_pane_t1

0x3814,	// (0x00060e9e) graphic_text_title_pane_t2

0x0001,

0xf984,	// (0x0006d00e) graphic_text_title_pane_t

0x37da,	// (0x00060e64) graphic_text_digital_pane_g1

0x37e2,	// (0x00060e6c) graphic_text_digital_pane_t1

0x37f0,	// (0x00060e7a) graphic_text_digital_pane_t2

0x0001,

0xf97f,	// (0x0006d009) graphic_text_digital_pane_t

0x7029,	// (0x000646b3) navi_icon_pane_srt_ParamLimits

0x7029,	// (0x000646b3) navi_icon_pane_srt

0x6fdb,	// (0x00064665) navi_midp_pane_srt

0x6fdb,	// (0x00064665) navi_navi_pane_srt

0x7029,	// (0x000646b3) navi_text_pane_srt_ParamLimits

0x7029,	// (0x000646b3) navi_text_pane_srt

0x37a5,	// (0x00060e2f) navi_navi_icon_text_pane_srt

0x37ad,	// (0x00060e37) navi_navi_pane_srt_g1_ParamLimits

0x37ad,	// (0x00060e37) navi_navi_pane_srt_g1

0x37bf,	// (0x00060e49) navi_navi_pane_srt_g2_ParamLimits

0x37bf,	// (0x00060e49) navi_navi_pane_srt_g2

0x0001,

0xf97a,	// (0x0006d004) navi_navi_pane_srt_g_ParamLimits

0xf97a,	// (0x0006d004) navi_navi_pane_srt_g

0x37d1,	// (0x00060e5b) navi_navi_tabs_pane_srt

0x37a5,	// (0x00060e2f) navi_navi_text_pane_srt

0x37a5,	// (0x00060e2f) navi_navi_volume_pane_srt

0x3796,	// (0x00060e20) navi_navi_text_pane_srt_t1

0x0a72,	// (0x0005e0fc) navi_navi_volume_pane_srt_g1

0x0a7a,	// (0x0005e104) volume_small_pane_srt_ParamLimits

0x0a7a,	// (0x0005e104) volume_small_pane_srt

0xf3fd,	// (0x0006ca87) volume_small_pane_srt_g1_ParamLimits

0xf3fd,	// (0x0006ca87) volume_small_pane_srt_g1

0xf40d,	// (0x0006ca97) volume_small_pane_srt_g2_ParamLimits

0xf40d,	// (0x0006ca97) volume_small_pane_srt_g2

0xf41e,	// (0x0006caa8) volume_small_pane_srt_g3_ParamLimits

0xf41e,	// (0x0006caa8) volume_small_pane_srt_g3

0xf42f,	// (0x0006cab9) volume_small_pane_srt_g4_ParamLimits

0xf42f,	// (0x0006cab9) volume_small_pane_srt_g4

0xf440,	// (0x0006caca) volume_small_pane_srt_g5_ParamLimits

0xf440,	// (0x0006caca) volume_small_pane_srt_g5

0xf451,	// (0x0006cadb) volume_small_pane_srt_g6_ParamLimits

0xf451,	// (0x0006cadb) volume_small_pane_srt_g6

0xf462,	// (0x0006caec) volume_small_pane_srt_g7_ParamLimits

0xf462,	// (0x0006caec) volume_small_pane_srt_g7

0xf473,	// (0x0006cafd) volume_small_pane_srt_g8_ParamLimits

0xf473,	// (0x0006cafd) volume_small_pane_srt_g8

0xf484,	// (0x0006cb0e) volume_small_pane_srt_g9_ParamLimits

0xf484,	// (0x0006cb0e) volume_small_pane_srt_g9

0xf495,	// (0x0006cb1f) volume_small_pane_srt_g10_ParamLimits

0xf495,	// (0x0006cb1f) volume_small_pane_srt_g10

0x0009,

0xf72e,	// (0x0006cdb8) volume_small_pane_srt_g_ParamLimits

0xf72e,	// (0x0006cdb8) volume_small_pane_srt_g

0x95a6,	// (0x00066c30) query_popup_data_pane_cp2

0x377c,	// (0x00060e06) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x377c,	// (0x00060e06) navi_navi_icon_text_pane_srt_t1

0x282f,	// (0x0005feb9) navi_tabs_2_long_pane_srt

0x282f,	// (0x0005feb9) navi_tabs_2_pane_srt

0x282f,	// (0x0005feb9) navi_tabs_3_long_pane_srt

0x282f,	// (0x0005feb9) navi_tabs_3_pane_srt

0x282f,	// (0x0005feb9) navi_tabs_4_pane_srt

0xb549,	// (0x00068bd3) tabs_2_active_pane_srt_ParamLimits

0xb549,	// (0x00068bd3) tabs_2_active_pane_srt

0xb559,	// (0x00068be3) tabs_2_passive_pane_srt_ParamLimits

0xb559,	// (0x00068be3) tabs_2_passive_pane_srt

0x1fde,	// (0x0005f668) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1fde,	// (0x0005f668) bg_passive_tab_pane_cp1_srt

0xcd11,	// (0x0006a39b) bg_passive_tab_pane_g1_cp1_srt

0xa1cf,	// (0x00067859) bg_passive_tab_pane_g2_cp1_srt

0xcd1a,	// (0x0006a3a4) bg_passive_tab_pane_g3_cp1_srt

0x7153,	// (0x000647dd) bg_active_tab_pane_cp1_srt_ParamLimits

0x7153,	// (0x000647dd) bg_active_tab_pane_cp1_srt

0xcd23,	// (0x0006a3ad) tabs_2_active_pane_srt_g1

0xcd2b,	// (0x0006a3b5) tabs_2_active_pane_srt_t1_ParamLimits

0xcd2b,	// (0x0006a3b5) tabs_2_active_pane_srt_t1

0xcd11,	// (0x0006a39b) bg_active_tab_pane_g1_cp1_srt

0xa1cf,	// (0x00067859) bg_active_tab_pane_g2_cp1_srt

0xcd1a,	// (0x0006a3a4) bg_active_tab_pane_g3_cp1_srt

0xb516,	// (0x00068ba0) tabs_3_active_pane_srt_ParamLimits

0xb516,	// (0x00068ba0) tabs_3_active_pane_srt

0xb527,	// (0x00068bb1) tabs_3_passive_pane_cp_srt_ParamLimits

0xb527,	// (0x00068bb1) tabs_3_passive_pane_cp_srt

0xb538,	// (0x00068bc2) tabs_3_passive_pane_srt_ParamLimits

0xb538,	// (0x00068bc2) tabs_3_passive_pane_srt

0x1fde,	// (0x0005f668) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1fde,	// (0x0005f668) bg_passive_tab_pane_cp2_srt

0xa363,	// (0x000679ed) bg_passive_tab_pane_g1_cp2_srt

0xa1cf,	// (0x00067859) bg_passive_tab_pane_g2_cp2_srt

0xa36c,	// (0x000679f6) bg_passive_tab_pane_g3_cp2_srt

0x7153,	// (0x000647dd) bg_active_tab_pane_cp2_srt_ParamLimits

0x7153,	// (0x000647dd) bg_active_tab_pane_cp2_srt

0xccf3,	// (0x0006a37d) tabs_3_active_pane_srt_g1

0xccfb,	// (0x0006a385) tabs_3_active_pane_srt_t1_ParamLimits

0xccfb,	// (0x0006a385) tabs_3_active_pane_srt_t1

0xa363,	// (0x000679ed) bg_active_tab_pane_g1_cp2_srt

0xa1cf,	// (0x00067859) bg_active_tab_pane_g2_cp2_srt

0xa36c,	// (0x000679f6) bg_active_tab_pane_g3_cp2_srt

0x09d7,	// (0x0005e061) tabs_4_active_pane_srt_ParamLimits

0x09d7,	// (0x0005e061) tabs_4_active_pane_srt

0x09e9,	// (0x0005e073) tabs_4_passive_pane_cp2_srt_ParamLimits

0x09e9,	// (0x0005e073) tabs_4_passive_pane_cp2_srt

0xf4b5,	// (0x0006cb3f) aid_size_cell_toolbar

0x332d,	// (0x000609b7) main_idle_act_pane_ParamLimits

0xf503,	// (0x0006cb8d) popup_large_graphic_colour_window_ParamLimits

0xac84,	// (0x0006830e) popup_toolbar_window_ParamLimits

0xac84,	// (0x0006830e) popup_toolbar_window

0x34fd,	// (0x00060b87) list_single_graphic_2heading_pane_ParamLimits

0x34fd,	// (0x00060b87) list_single_graphic_2heading_pane

0x831c,	// (0x000659a6) aid_size_cell_apps_grid_lsc_pane

0x832e,	// (0x000659b8) aid_size_cell_apps_grid_prt_pane

0x8441,	// (0x00065acb) bg_wml_button_pane_cp1_ParamLimits

0x8441,	// (0x00065acb) bg_wml_button_pane_cp1

0xb2b5,	// (0x0006893f) form_midp_field_text_pane_t1_ParamLimits

0x1fde,	// (0x0005f668) input_focus_pane_cp050_ParamLimits

0x224e,	// (0x0005f8d8) list_midp_form_text_pane_ParamLimits

0x21f1,	// (0x0005f87b) input_focus_pane_cp051_ParamLimits

0x2205,	// (0x0005f88f) list_midp_choice_pane_ParamLimits

0xb21a,	// (0x000688a4) list_single_2graphic_pane_cp3_ParamLimits

0xb21a,	// (0x000688a4) list_single_2graphic_pane_cp3

0xb22e,	// (0x000688b8) list_single_midp_graphic_pane_ParamLimits

0xb22e,	// (0x000688b8) list_single_midp_graphic_pane

0xe9db,	// (0x0006c065) list_single_graphic_2heading_pane_g1_ParamLimits

0xe9db,	// (0x0006c065) list_single_graphic_2heading_pane_g1

0xe9e7,	// (0x0006c071) list_single_graphic_2heading_pane_g4_ParamLimits

0xe9e7,	// (0x0006c071) list_single_graphic_2heading_pane_g4

0xe9f3,	// (0x0006c07d) list_single_graphic_2heading_pane_g5_ParamLimits

0xe9f3,	// (0x0006c07d) list_single_graphic_2heading_pane_g5

0x0002,

0xf781,	// (0x0006ce0b) list_single_graphic_2heading_pane_g_ParamLimits

0xf781,	// (0x0006ce0b) list_single_graphic_2heading_pane_g

0xe9ff,	// (0x0006c089) list_single_graphic_2heading_pane_t1_ParamLimits

0xe9ff,	// (0x0006c089) list_single_graphic_2heading_pane_t1

0xea13,	// (0x0006c09d) list_single_graphic_2heading_pane_t2_ParamLimits

0xea13,	// (0x0006c09d) list_single_graphic_2heading_pane_t2

0xea2d,	// (0x0006c0b7) list_single_graphic_2heading_pane_t3_ParamLimits

0xea2d,	// (0x0006c0b7) list_single_graphic_2heading_pane_t3

0x0002,

0xf788,	// (0x0006ce12) list_single_graphic_2heading_pane_t_ParamLimits

0xf788,	// (0x0006ce12) list_single_graphic_2heading_pane_t

0x1e90,	// (0x0005f51a) bg_popup_sub_pane_cp2

0x1eba,	// (0x0005f544) grid_toobar_pane

0x0559,	// (0x0005dbe3) cell_toolbar_pane_ParamLimits

0x0559,	// (0x0005dbe3) cell_toolbar_pane

0x1ef6,	// (0x0005f580) cell_toolbar_pane_g1_ParamLimits

0x1ef6,	// (0x0005f580) cell_toolbar_pane_g1

0xb132,	// (0x000687bc) cell_toolbar_pane_g2_ParamLimits

0xb132,	// (0x000687bc) cell_toolbar_pane_g2

0x0001,

0xf78f,	// (0x0006ce19) cell_toolbar_pane_g_ParamLimits

0xf78f,	// (0x0006ce19) cell_toolbar_pane_g

0x1f2c,	// (0x0005f5b6) grid_highlight_pane_cp2_ParamLimits

0x1f2c,	// (0x0005f5b6) grid_highlight_pane_cp2

0x1f46,	// (0x0005f5d0) toolbar_button_pane

0x1f52,	// (0x0005f5dc) toolbar_button_pane_g1

0x1f5a,	// (0x0005f5e4) toolbar_button_pane_g2

0x1f62,	// (0x0005f5ec) toolbar_button_pane_g3

0x1f6a,	// (0x0005f5f4) toolbar_button_pane_g4

0x1f72,	// (0x0005f5fc) toolbar_button_pane_g5

0x1f7a,	// (0x0005f604) toolbar_button_pane_g6

0x1f82,	// (0x0005f60c) toolbar_button_pane_g7

0x1f8a,	// (0x0005f614) toolbar_button_pane_g8

0x1f92,	// (0x0005f61c) toolbar_button_pane_g9

0x0009,

0xf794,	// (0x0006ce1e) toolbar_button_pane_g

0x059d,	// (0x0005dc27) list_single_2graphic_pane_g1_cp3_ParamLimits

0x059d,	// (0x0005dc27) list_single_2graphic_pane_g1_cp3

0xb146,	// (0x000687d0) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb146,	// (0x000687d0) list_single_2graphic_pane_g2_cp3

0x05ba,	// (0x0005dc44) list_single_2graphic_pane_g3_cp3

0x05c2,	// (0x0005dc4c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x05c2,	// (0x0005dc4c) list_single_2graphic_pane_g4_cp3

0xb157,	// (0x000687e1) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb157,	// (0x000687e1) list_single_2graphic_pane_t1_cp3

0x05ea,	// (0x0005dc74) list_single_midp_graphic_pane_g2_ParamLimits

0x05ea,	// (0x0005dc74) list_single_midp_graphic_pane_g2

0xe9cb,	// (0x0006c055) aid_zoom_text_primary

0xf4bd,	// (0x0006cb47) aid_zoom_text_secondary

0xc533,	// (0x00069bbd) status_small_pane_g7_ParamLimits

0xc533,	// (0x00069bbd) status_small_pane_g7

0xa3c8,	// (0x00067a52) status_small_pane_t1_ParamLimits

0x91ed,	// (0x00066877) title_pane_g2

0x0003,

0xf529,	// (0x0006cbb3) title_pane_g

0x9600,	// (0x00066c8a) aid_size_cell_colour_1_pane_ParamLimits

0x9600,	// (0x00066c8a) aid_size_cell_colour_1_pane

0x9614,	// (0x00066c9e) aid_size_cell_colour_2_pane_ParamLimits

0x9614,	// (0x00066c9e) aid_size_cell_colour_2_pane

0x9628,	// (0x00066cb2) aid_size_cell_colour_3_pane_ParamLimits

0x9628,	// (0x00066cb2) aid_size_cell_colour_3_pane

0x963c,	// (0x00066cc6) aid_size_cell_colour_4_pane_ParamLimits

0x963c,	// (0x00066cc6) aid_size_cell_colour_4_pane

0xe908,	// (0x0006bf92) title_pane_stacon_g1_ParamLimits

0xe908,	// (0x0006bf92) title_pane_stacon_g1

0x261e,	// (0x0005fca8) popup_note_wait_window_g3_ParamLimits

0x261e,	// (0x0005fca8) popup_note_wait_window_g3

0x2694,	// (0x0005fd1e) popup_note_wait_window_t5_ParamLimits

0x2694,	// (0x0005fd1e) popup_note_wait_window_t5

0x6fdb,	// (0x00064665) main_feb_china_hwr_fs_writing_pane

0xa638,	// (0x00067cc2) popup_feb_china_hwr_fs_window_ParamLimits

0xa638,	// (0x00067cc2) popup_feb_china_hwr_fs_window

0xb173,	// (0x000687fd) aid_size_cell_hwr_fs_ParamLimits

0xb173,	// (0x000687fd) aid_size_cell_hwr_fs

0x1fde,	// (0x0005f668) bg_popup_sub_pane_cp3_ParamLimits

0x1fde,	// (0x0005f668) bg_popup_sub_pane_cp3

0xb188,	// (0x00068812) grid_hwr_fs_pane_ParamLimits

0xb188,	// (0x00068812) grid_hwr_fs_pane

0x0639,	// (0x0005dcc3) linegrid_hwr_fs_pane_ParamLimits

0x0639,	// (0x0005dcc3) linegrid_hwr_fs_pane

0xb1a0,	// (0x0006882a) cell_hwr_fs_pane_ParamLimits

0xb1a0,	// (0x0006882a) cell_hwr_fs_pane

0x1fea,	// (0x0005f674) linegrid_hwr_fs_pane_g1_ParamLimits

0x1fea,	// (0x0005f674) linegrid_hwr_fs_pane_g1

0xb1c6,	// (0x00068850) linegrid_hwr_fs_pane_g2_ParamLimits

0xb1c6,	// (0x00068850) linegrid_hwr_fs_pane_g2

0x2008,	// (0x0005f692) linegrid_hwr_fs_pane_g3_ParamLimits

0x2008,	// (0x0005f692) linegrid_hwr_fs_pane_g3

0xb1d8,	// (0x00068862) linegrid_hwr_fs_pane_g4_ParamLimits

0xb1d8,	// (0x00068862) linegrid_hwr_fs_pane_g4

0x0685,	// (0x0005dd0f) linegrid_hwr_fs_pane_g5_ParamLimits

0x0685,	// (0x0005dd0f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ba,	// (0x0006ce44) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ba,	// (0x0006ce44) linegrid_hwr_fs_pane_g

0x2014,	// (0x0005f69e) cell_hwr_fs_pane_g1_ParamLimits

0x2014,	// (0x0005f69e) cell_hwr_fs_pane_g1

0x1dca,	// (0x0005f454) cell_hwr_fs_pane_g2_ParamLimits

0x1dca,	// (0x0005f454) cell_hwr_fs_pane_g2

0xb1f2,	// (0x0006887c) cell_hwr_fs_pane_g3_ParamLimits

0xb1f2,	// (0x0006887c) cell_hwr_fs_pane_g3

0xb1ff,	// (0x00068889) cell_hwr_fs_pane_g4_ParamLimits

0xb1ff,	// (0x00068889) cell_hwr_fs_pane_g4

0x0003,

0xf7c5,	// (0x0006ce4f) cell_hwr_fs_pane_g_ParamLimits

0xf7c5,	// (0x0006ce4f) cell_hwr_fs_pane_g

0xb20c,	// (0x00068896) cell_hwr_fs_pane_t1

0x6fdb,	// (0x00064665) grid_highlight_pane_cp6

0x6fdb,	// (0x00064665) main_idle_act2_pane

0x8172,	// (0x000657fc) aid_inside_area_popup_secondary

0xc825,	// (0x00069eaf) aid_inside_area_window_primary_ParamLimits

0xc825,	// (0x00069eaf) aid_inside_area_window_primary

0xcd49,	// (0x0006a3d3) ai2_news_ticker_pane

0x389d,	// (0x00060f27) aid_size_cell_ai1_link_ParamLimits

0x389d,	// (0x00060f27) aid_size_cell_ai1_link

0xcd51,	// (0x0006a3db) popup_ai2_data_window_ParamLimits

0xcd51,	// (0x0006a3db) popup_ai2_data_window

0x38cd,	// (0x00060f57) popup_ai2_link_window_ParamLimits

0x38cd,	// (0x00060f57) popup_ai2_link_window

0x1fde,	// (0x0005f668) bg_popup_sub_pane_cp4_ParamLimits

0x1fde,	// (0x0005f668) bg_popup_sub_pane_cp4

0x38e1,	// (0x00060f6b) grid_ai2_link_pane_ParamLimits

0x38e1,	// (0x00060f6b) grid_ai2_link_pane

0x38f8,	// (0x00060f82) popup_ai2_link_window_g1_ParamLimits

0x38f8,	// (0x00060f82) popup_ai2_link_window_g1

0x3904,	// (0x00060f8e) popup_ai2_link_window_g2_ParamLimits

0x3904,	// (0x00060f8e) popup_ai2_link_window_g2

0x0001,

0xf998,	// (0x0006d022) popup_ai2_link_window_g_ParamLimits

0xf998,	// (0x0006d022) popup_ai2_link_window_g

0x3913,	// (0x00060f9d) ai2_mp_button_pane

0x391b,	// (0x00060fa5) ai2_mp_volume_pane

0x21f1,	// (0x0005f87b) bg_popup_sub_pane_cp5_ParamLimits

0x21f1,	// (0x0005f87b) bg_popup_sub_pane_cp5

0x3923,	// (0x00060fad) heading_ai2_gene_pane_ParamLimits

0x3923,	// (0x00060fad) heading_ai2_gene_pane

0x392f,	// (0x00060fb9) list_ai2_gene_pane_ParamLimits

0x392f,	// (0x00060fb9) list_ai2_gene_pane

0x3977,	// (0x00061001) cell_ai2_link_pane_ParamLimits

0x3977,	// (0x00061001) cell_ai2_link_pane

0x398d,	// (0x00061017) cell_ai2_link_pane_g1

0x6fdb,	// (0x00064665) grid_highlight_pane_cp7

0x0a8f,	// (0x0005e119) ai2_mp_volume_pane_g1

0x3a5d,	// (0x000610e7) ai2_mp_volume_pane_g2

0x39d2,	// (0x0006105c) list_ai2_gene_pane_t1

0x3a65,	// (0x000610ef) ai2_mp_volume_pane_g3

0x0002,

0xf9b1,	// (0x0006d03b) ai2_mp_volume_pane_g

0xb569,	// (0x00068bf3) volume_small_pane_cp3

0x3a6d,	// (0x000610f7) aid_size_cell_ai2_button

0x3a75,	// (0x000610ff) grid_ai2_button_pane

0x3a7e,	// (0x00061108) cell_ai2_button_pane_ParamLimits

0x3a7e,	// (0x00061108) cell_ai2_button_pane

0x6fd1,	// (0x0006465b) cell_ai2_button_pane_g1

0x6fdb,	// (0x00064665) grid_highlight_pane_cp8

0x3a1d,	// (0x000610a7) ai2_gene_pane_t1_ParamLimits

0x3a1d,	// (0x000610a7) ai2_gene_pane_t1

0xa59a,	// (0x00067c24) aid_height_parent_landscape

0xca7b,	// (0x0006a105) aid_height_set_list

0x332d,	// (0x000609b7) aid_size_parent

0x36b8,	// (0x00060d42) aid_size_cell_graphic_pane_ParamLimits

0x393f,	// (0x00060fc9) popup_ai2_data_window_g1_ParamLimits

0x393f,	// (0x00060fc9) popup_ai2_data_window_g1

0x394b,	// (0x00060fd5) ai2_news_ticker_pane_g1

0x3953,	// (0x00060fdd) ai2_news_ticker_pane_g2

0x0001,

0xf99d,	// (0x0006d027) ai2_news_ticker_pane_g

0x395b,	// (0x00060fe5) ai2_news_ticker_pane_t1

0x3969,	// (0x00060ff3) ai2_news_ticker_pane_t2

0x0001,

0xf9a2,	// (0x0006d02c) ai2_news_ticker_pane_t

0x3996,	// (0x00061020) heading_ai2_gene_pane_g1

0x399e,	// (0x00061028) heading_ai2_gene_pane_t1_ParamLimits

0x399e,	// (0x00061028) heading_ai2_gene_pane_t1

0x39b3,	// (0x0006103d) list_highlight_pane_cp6

0x39bb,	// (0x00061045) ai2_gene_pane_ParamLimits

0x39bb,	// (0x00061045) ai2_gene_pane

0x39e0,	// (0x0006106a) list_ai2_gene_pane_t2

0x0001,

0xf9a7,	// (0x0006d031) list_ai2_gene_pane_t

0x39ee,	// (0x00061078) list_highlight_pane_cp8_ParamLimits

0x39ee,	// (0x00061078) list_highlight_pane_cp8

0x39ff,	// (0x00061089) ai2_gene_pane_g1_ParamLimits

0x39ff,	// (0x00061089) ai2_gene_pane_g1

0x3a11,	// (0x0006109b) ai2_gene_pane_g2_ParamLimits

0x3a11,	// (0x0006109b) ai2_gene_pane_g2

0x0001,

0xf9ac,	// (0x0006d036) ai2_gene_pane_g_ParamLimits

0xf9ac,	// (0x0006d036) ai2_gene_pane_g

0x7ff8,	// (0x00065682) scroll_pane_cp12

0xa557,	// (0x00067be1) control_pane_t3_ParamLimits

0xa557,	// (0x00067be1) control_pane_t3

0xa3b9,	// (0x00067a43) status_small_pane_g8_ParamLimits

0xa3b9,	// (0x00067a43) status_small_pane_g8

0xa6fb,	// (0x00067d85) popup_find_window_ParamLimits

0xa988,	// (0x00068012) popup_note_image_window_ParamLimits

0xbedb,	// (0x00069565) list_double2_graphic_pane_vc_g1_ParamLimits

0xbedb,	// (0x00069565) list_double2_graphic_pane_vc_g1

0xbee7,	// (0x00069571) list_double2_graphic_pane_vc_g2_ParamLimits

0xbee7,	// (0x00069571) list_double2_graphic_pane_vc_g2

0x0589,	// (0x0005dc13) list_double2_graphic_pane_vc_g3_ParamLimits

0x0589,	// (0x0005dc13) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0006cc26) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0006cc26) list_double2_graphic_pane_vc_g

0xbef3,	// (0x0006957d) list_double2_graphic_pane_vc_t1_ParamLimits

0xbef3,	// (0x0006957d) list_double2_graphic_pane_vc_t1

0xbee7,	// (0x00069571) list_single_heading_pane_vc_g1_ParamLimits

0xbee7,	// (0x00069571) list_single_heading_pane_vc_g1

0x0589,	// (0x0005dc13) list_single_heading_pane_vc_g2_ParamLimits

0x0589,	// (0x0005dc13) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cc37) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cc37) list_single_heading_pane_vc_g

0xea45,	// (0x0006c0cf) list_single_heading_pane_vc_t1_ParamLimits

0xea45,	// (0x0006c0cf) list_single_heading_pane_vc_t1

0xea5b,	// (0x0006c0e5) list_single_heading_pane_vc_t2_ParamLimits

0xea5b,	// (0x0006c0e5) list_single_heading_pane_vc_t2

0x0001,

0xf7a9,	// (0x0006ce33) list_single_heading_pane_vc_t_ParamLimits

0xf7a9,	// (0x0006ce33) list_single_heading_pane_vc_t

0x1f9a,	// (0x0005f624) list_setting_number_pane_vc_g1_ParamLimits

0x1f9a,	// (0x0005f624) list_setting_number_pane_vc_g1

0x1fa6,	// (0x0005f630) list_setting_number_pane_vc_g2_ParamLimits

0x1fa6,	// (0x0005f630) list_setting_number_pane_vc_g2

0x0001,

0xf7ae,	// (0x0006ce38) list_setting_number_pane_vc_g_ParamLimits

0xf7ae,	// (0x0006ce38) list_setting_number_pane_vc_g

0xea6d,	// (0x0006c0f7) list_setting_number_pane_vc_t1_ParamLimits

0xea6d,	// (0x0006c0f7) list_setting_number_pane_vc_t1

0xea81,	// (0x0006c10b) list_setting_number_pane_vc_t2_ParamLimits

0xea81,	// (0x0006c10b) list_setting_number_pane_vc_t2

0xea9d,	// (0x0006c127) list_setting_number_pane_vc_t3_ParamLimits

0xea9d,	// (0x0006c127) list_setting_number_pane_vc_t3

0x0002,

0xf7b3,	// (0x0006ce3d) list_setting_number_pane_vc_t_ParamLimits

0xf7b3,	// (0x0006ce3d) list_setting_number_pane_vc_t

0xeac7,	// (0x0006c151) set_value_pane_vc_ParamLimits

0xeac7,	// (0x0006c151) set_value_pane_vc

0x34fd,	// (0x00060b87) list_double2_graphic_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_double2_graphic_pane_vc

0x3510,	// (0x00060b9a) list_double2_large_graphic_pane_vc_ParamLimits

0x3510,	// (0x00060b9a) list_double2_large_graphic_pane_vc

0x34fd,	// (0x00060b87) list_double2_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_double2_pane_vc

0x34fd,	// (0x00060b87) list_double_graphic_heading_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_double_graphic_heading_pane_vc

0x34fd,	// (0x00060b87) list_double_graphic_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_double_graphic_pane_vc

0x34fd,	// (0x00060b87) list_double_heading_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_double_heading_pane_vc

0x3522,	// (0x00060bac) list_double_large_graphic_pane_vc_ParamLimits

0x3522,	// (0x00060bac) list_double_large_graphic_pane_vc

0x34fd,	// (0x00060b87) list_double_number_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_double_number_pane_vc

0x34fd,	// (0x00060b87) list_double_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_double_pane_vc

0x34fd,	// (0x00060b87) list_double_time_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_double_time_pane_vc

0x34fd,	// (0x00060b87) list_setting_number_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_setting_number_pane_vc

0x34fd,	// (0x00060b87) list_setting_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_setting_pane_vc

0x34fd,	// (0x00060b87) list_single_graphic_heading_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_single_graphic_heading_pane_vc

0x34fd,	// (0x00060b87) list_single_heading_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_single_heading_pane_vc

0x34fd,	// (0x00060b87) list_single_number_heading_pane_vc_ParamLimits

0x34fd,	// (0x00060b87) list_single_number_heading_pane_vc

0xeae6,	// (0x0006c170) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeae6,	// (0x0006c170) list_double_graphic_heading_pane_vc_g1

0xbee7,	// (0x00069571) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbee7,	// (0x00069571) list_double_graphic_heading_pane_vc_g2

0x0589,	// (0x0005dc13) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0589,	// (0x0005dc13) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b8,	// (0x0006d042) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b8,	// (0x0006d042) list_double_graphic_heading_pane_vc_g

0xeaf2,	// (0x0006c17c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeaf2,	// (0x0006c17c) list_double_graphic_heading_pane_vc_t1

0xeb06,	// (0x0006c190) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeb06,	// (0x0006c190) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bf,	// (0x0006d049) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bf,	// (0x0006d049) list_double_graphic_heading_pane_vc_t

0x1f9a,	// (0x0005f624) list_setting_pane_vc_g1_ParamLimits

0x1f9a,	// (0x0005f624) list_setting_pane_vc_g1

0x1fa6,	// (0x0005f630) list_setting_pane_vc_g2_ParamLimits

0x1fa6,	// (0x0005f630) list_setting_pane_vc_g2

0x0001,

0xf7ae,	// (0x0006ce38) list_setting_pane_vc_g_ParamLimits

0xf7ae,	// (0x0006ce38) list_setting_pane_vc_g

0xeb1e,	// (0x0006c1a8) list_setting_pane_vc_t1_ParamLimits

0xeb1e,	// (0x0006c1a8) list_setting_pane_vc_t1

0xeb3a,	// (0x0006c1c4) list_setting_pane_vc_t2_ParamLimits

0xeb3a,	// (0x0006c1c4) list_setting_pane_vc_t2

0x0001,

0xfa02,	// (0x0006d08c) list_setting_pane_vc_t_ParamLimits

0xfa02,	// (0x0006d08c) list_setting_pane_vc_t

0xeac7,	// (0x0006c151) set_value_pane_cp_vc_ParamLimits

0xeac7,	// (0x0006c151) set_value_pane_cp_vc

0xbee7,	// (0x00069571) list_single_number_heading_pane_vc_g1_ParamLimits

0xbee7,	// (0x00069571) list_single_number_heading_pane_vc_g1

0x0589,	// (0x0005dc13) list_single_number_heading_pane_vc_g2_ParamLimits

0x0589,	// (0x0005dc13) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cc37) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cc37) list_single_number_heading_pane_vc_g

0xbf09,	// (0x00069593) list_single_number_heading_pane_vc_t1_ParamLimits

0xbf09,	// (0x00069593) list_single_number_heading_pane_vc_t1

0xeb54,	// (0x0006c1de) list_single_number_heading_pane_vc_t2_ParamLimits

0xeb54,	// (0x0006c1de) list_single_number_heading_pane_vc_t2

0xeb6a,	// (0x0006c1f4) list_single_number_heading_pane_vc_t3_ParamLimits

0xeb6a,	// (0x0006c1f4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa07,	// (0x0006d091) list_single_number_heading_pane_vc_t_ParamLimits

0xfa07,	// (0x0006d091) list_single_number_heading_pane_vc_t

0xeb7c,	// (0x0006c206) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeb7c,	// (0x0006c206) list_single_graphic_heading_pane_vc_g1

0xbee7,	// (0x00069571) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbee7,	// (0x00069571) list_single_graphic_heading_pane_vc_g4

0x0589,	// (0x0005dc13) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0589,	// (0x0005dc13) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0e,	// (0x0006d098) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0e,	// (0x0006d098) list_single_graphic_heading_pane_vc_g

0xbf09,	// (0x00069593) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xbf09,	// (0x00069593) list_single_graphic_heading_pane_vc_t1

0xeb88,	// (0x0006c212) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeb88,	// (0x0006c212) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa15,	// (0x0006d09f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa15,	// (0x0006d09f) list_single_graphic_heading_pane_vc_t

0xbee7,	// (0x00069571) list_double2_pane_vc_g1_ParamLimits

0xbee7,	// (0x00069571) list_double2_pane_vc_g1

0x0589,	// (0x0005dc13) list_double2_pane_vc_g2_ParamLimits

0x0589,	// (0x0005dc13) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cc37) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cc37) list_double2_pane_vc_g

0xeb9a,	// (0x0006c224) list_double2_pane_vc_t1_ParamLimits

0xeb9a,	// (0x0006c224) list_double2_pane_vc_t1

0x3cb7,	// (0x00061341) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3cb7,	// (0x00061341) list_double2_large_graphic_pane_vc_g1

0xe7e9,	// (0x0006be73) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe7e9,	// (0x0006be73) list_double2_large_graphic_pane_vc_g2

0xe7f5,	// (0x0006be7f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe7f5,	// (0x0006be7f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0006cc4f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0006cc4f) list_double2_large_graphic_pane_vc_g

0xbf1f,	// (0x000695a9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xbf1f,	// (0x000695a9) list_double2_large_graphic_pane_vc_t1

0x3cc3,	// (0x0006134d) list_double_time_pane_vc_g1_ParamLimits

0x3cc3,	// (0x0006134d) list_double_time_pane_vc_g1

0x3ccf,	// (0x00061359) list_double_time_pane_vc_g2_ParamLimits

0x3ccf,	// (0x00061359) list_double_time_pane_vc_g2

0x0001,

0xfa1a,	// (0x0006d0a4) list_double_time_pane_vc_g_ParamLimits

0xfa1a,	// (0x0006d0a4) list_double_time_pane_vc_g

0xebb2,	// (0x0006c23c) list_double_time_pane_vc_t1_ParamLimits

0xebb2,	// (0x0006c23c) list_double_time_pane_vc_t1

0xebd6,	// (0x0006c260) list_double_time_pane_vc_t2_ParamLimits

0xebd6,	// (0x0006c260) list_double_time_pane_vc_t2

0xec25,	// (0x0006c2af) list_double_time_pane_vc_t3_ParamLimits

0xec25,	// (0x0006c2af) list_double_time_pane_vc_t3

0xec37,	// (0x0006c2c1) list_double_time_pane_vc_t4_ParamLimits

0xec37,	// (0x0006c2c1) list_double_time_pane_vc_t4

0x0003,

0xfa1f,	// (0x0006d0a9) list_double_time_pane_vc_t_ParamLimits

0xfa1f,	// (0x0006d0a9) list_double_time_pane_vc_t

0xbee7,	// (0x00069571) list_double_pane_vc_g1_ParamLimits

0xbee7,	// (0x00069571) list_double_pane_vc_g1

0x0589,	// (0x0005dc13) list_double_pane_vc_g2_ParamLimits

0x0589,	// (0x0005dc13) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cc37) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cc37) list_double_pane_vc_g

0xec4b,	// (0x0006c2d5) list_double_pane_vc_t1_ParamLimits

0xec4b,	// (0x0006c2d5) list_double_pane_vc_t1

0xec5f,	// (0x0006c2e9) list_double_pane_vc_t2_ParamLimits

0xec5f,	// (0x0006c2e9) list_double_pane_vc_t2

0x0001,

0xfa28,	// (0x0006d0b2) list_double_pane_vc_t_ParamLimits

0xfa28,	// (0x0006d0b2) list_double_pane_vc_t

0xbee7,	// (0x00069571) list_double_number_pane_vc_g1_ParamLimits

0xbee7,	// (0x00069571) list_double_number_pane_vc_g1

0x0589,	// (0x0005dc13) list_double_number_pane_vc_g2_ParamLimits

0x0589,	// (0x0005dc13) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cc37) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cc37) list_double_number_pane_vc_g

0xec77,	// (0x0006c301) list_double_number_pane_vc_t1_ParamLimits

0xec77,	// (0x0006c301) list_double_number_pane_vc_t1

0xec4b,	// (0x0006c2d5) list_double_number_pane_vc_t2_ParamLimits

0xec4b,	// (0x0006c2d5) list_double_number_pane_vc_t2

0xec89,	// (0x0006c313) list_double_number_pane_vc_t3_ParamLimits

0xec89,	// (0x0006c313) list_double_number_pane_vc_t3

0x0002,

0xfa2d,	// (0x0006d0b7) list_double_number_pane_vc_t_ParamLimits

0xfa2d,	// (0x0006d0b7) list_double_number_pane_vc_t

0x3cdb,	// (0x00061365) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3cdb,	// (0x00061365) list_double_large_graphic_pane_vc_g1

0x3cf7,	// (0x00061381) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3cf7,	// (0x00061381) list_double_large_graphic_pane_vc_g2

0x3d0b,	// (0x00061395) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3d0b,	// (0x00061395) list_double_large_graphic_pane_vc_g3

0xeca1,	// (0x0006c32b) list_double_large_graphic_pane_vc_g4_ParamLimits

0xeca1,	// (0x0006c32b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa34,	// (0x0006d0be) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0006d0be) list_double_large_graphic_pane_vc_g

0xecb0,	// (0x0006c33a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xecb0,	// (0x0006c33a) list_double_large_graphic_pane_vc_t1

0xeccc,	// (0x0006c356) list_double_large_graphic_pane_vc_t2_ParamLimits

0xeccc,	// (0x0006c356) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0006d0c7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3d,	// (0x0006d0c7) list_double_large_graphic_pane_vc_t

0xbee7,	// (0x00069571) list_double_heading_pane_vc_g1_ParamLimits

0xbee7,	// (0x00069571) list_double_heading_pane_vc_g1

0x0589,	// (0x0005dc13) list_double_heading_pane_vc_g2_ParamLimits

0x0589,	// (0x0005dc13) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cc37) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cc37) list_double_heading_pane_vc_g

0xecee,	// (0x0006c378) list_double_heading_pane_vc_t1_ParamLimits

0xecee,	// (0x0006c378) list_double_heading_pane_vc_t1

0xed02,	// (0x0006c38c) list_double_heading_pane_vc_t2_ParamLimits

0xed02,	// (0x0006c38c) list_double_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0006d0cc) list_double_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0006d0cc) list_double_heading_pane_vc_t

0xed1a,	// (0x0006c3a4) list_double_graphic_pane_vc_g1_ParamLimits

0xed1a,	// (0x0006c3a4) list_double_graphic_pane_vc_g1

0x3d1a,	// (0x000613a4) list_double_graphic_pane_vc_g2_ParamLimits

0x3d1a,	// (0x000613a4) list_double_graphic_pane_vc_g2

0xbee7,	// (0x00069571) list_double_graphic_pane_vc_g3_ParamLimits

0xbee7,	// (0x00069571) list_double_graphic_pane_vc_g3

0x0003,

0xfa47,	// (0x0006d0d1) list_double_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0006d0d1) list_double_graphic_pane_vc_g

0xed2d,	// (0x0006c3b7) list_double_graphic_pane_vc_t1_ParamLimits

0xed2d,	// (0x0006c3b7) list_double_graphic_pane_vc_t1

0xed4c,	// (0x0006c3d6) list_double_graphic_pane_vc_t2_ParamLimits

0xed4c,	// (0x0006c3d6) list_double_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0006d0da) list_double_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0006d0da) list_double_graphic_pane_vc_t

0xe7b7,	// (0x0006be41) aid_size_cell_fastswap

0x8e65,	// (0x000664ef) aid_size_cell_touch_ParamLimits

0x8e65,	// (0x000664ef) aid_size_cell_touch

0xe7c9,	// (0x0006be53) popup_fast_swap_wide_window_ParamLimits

0xe7c9,	// (0x0006be53) popup_fast_swap_wide_window

0x9184,	// (0x0006680e) touch_pane_ParamLimits

0x9184,	// (0x0006680e) touch_pane

0x8045,	// (0x000656cf) button_value_adjust_pane_cp2

0xe83c,	// (0x0006bec6) button_value_adjust_pane_cp4

0xe844,	// (0x0006bece) form_field_data_pane_cp2

0x9c41,	// (0x000672cb) form_field_data_wide_pane_cp2

0x8353,	// (0x000659dd) bg_scroll_pane_ParamLimits

0x9f77,	// (0x00067601) scroll_handle_pane_ParamLimits

0xf213,	// (0x0006c89d) scroll_sc2_down_pane_ParamLimits

0xf213,	// (0x0006c89d) scroll_sc2_down_pane

0x8384,	// (0x00065a0e) scroll_sc2_up_pane_ParamLimits

0x8384,	// (0x00065a0e) scroll_sc2_up_pane

0xce9a,	// (0x0006a524) grid_wheel_folder_pane_g1_ParamLimits

0xce9a,	// (0x0006a524) grid_wheel_folder_pane_g1

0xf395,	// (0x0006ca1f) clock_nsta_pane_cp2_ParamLimits

0xf395,	// (0x0006ca1f) clock_nsta_pane_cp2

0xa29d,	// (0x00067927) listscroll_midp_pane_ParamLimits

0xa2a9,	// (0x00067933) midp_canvas_pane

0xc555,	// (0x00069bdf) nsta_clock_indic_pane

0xc57d,	// (0x00069c07) listscroll_form_pane_vc

0xc585,	// (0x00069c0f) listscroll_set_pane_vc_ParamLimits

0xc585,	// (0x00069c0f) listscroll_set_pane_vc

0xae3d,	// (0x000684c7) clock_nsta_pane

0xae67,	// (0x000684f1) indicator_nsta_pane

0x1e90,	// (0x0005f51a) bg_popup_sub_pane_cp2_ParamLimits

0x1ea4,	// (0x0005f52e) find_pane_cp2_ParamLimits

0x1ea4,	// (0x0005f52e) find_pane_cp2

0x1eba,	// (0x0005f544) grid_toobar_pane_ParamLimits

0x1fb2,	// (0x0005f63c) list_form_gen_pane_vc_ParamLimits

0x1fb2,	// (0x0005f63c) list_form_gen_pane_vc

0x1fc8,	// (0x0005f652) scroll_pane_cp8_vc_ParamLimits

0x1fc8,	// (0x0005f652) scroll_pane_cp8_vc

0x2044,	// (0x0005f6ce) data_form_wide_pane_vc_ParamLimits

0x2044,	// (0x0005f6ce) data_form_wide_pane_vc

0x2050,	// (0x0005f6da) form_field_data_wide_pane_vc_g1

0x2058,	// (0x0005f6e2) form_field_data_wide_pane_vc_t1_ParamLimits

0x2058,	// (0x0005f6e2) form_field_data_wide_pane_vc_t1

0x8059,	// (0x000656e3) input_focus_pane_cp6_vc_ParamLimits

0x8059,	// (0x000656e3) input_focus_pane_cp6_vc

0x23a5,	// (0x0005fa2f) list_midp_pane_ParamLimits

0x3722,	// (0x00060dac) scroll_pane_cp16_ParamLimits

0x3722,	// (0x00060dac) scroll_pane_cp16

0x23fb,	// (0x0005fa85) button_value_adjust_pane_ParamLimits

0x23fb,	// (0x0005fa85) button_value_adjust_pane

0xca8c,	// (0x0006a116) button_value_adjust_pane_cp6_ParamLimits

0xca8c,	// (0x0006a116) button_value_adjust_pane_cp6

0xcba6,	// (0x0006a230) settings_code_pane_cp_ParamLimits

0xcba6,	// (0x0006a230) settings_code_pane_cp

0x6fd1,	// (0x0006465b) cell_touch_pane_g1

0x6fd1,	// (0x0006465b) cell_touch_pane_g2

0x0001,

0xf6d4,	// (0x0006cd5e) cell_touch_pane_g

0xcd67,	// (0x0006a3f1) cell_touch_pane_cp_ParamLimits

0xcd67,	// (0x0006a3f1) cell_touch_pane_cp

0xcd83,	// (0x0006a40d) cell_touch_pane_ParamLimits

0xcd83,	// (0x0006a40d) cell_touch_pane

0x6fd1,	// (0x0006465b) scroll_sc2_down_pane_g1

0x6fd1,	// (0x0006465b) scroll_sc2_up_pane_g1

0x6fdb,	// (0x00064665) bg_set_opt_pane_cp4_vc

0x3ab2,	// (0x0006113c) list_set_graphic_pane_vc_g1_ParamLimits

0x3ab2,	// (0x0006113c) list_set_graphic_pane_vc_g1

0x3abe,	// (0x00061148) list_set_graphic_pane_vc_g2_ParamLimits

0x3abe,	// (0x00061148) list_set_graphic_pane_vc_g2

0x0001,

0xf9c4,	// (0x0006d04e) list_set_graphic_pane_vc_g_ParamLimits

0xf9c4,	// (0x0006d04e) list_set_graphic_pane_vc_g

0x3aca,	// (0x00061154) text_primary_small_cp13_vc_ParamLimits

0x3aca,	// (0x00061154) text_primary_small_cp13_vc

0x3ae2,	// (0x0006116c) list_set_graphic_pane_vc_ParamLimits

0x3ae2,	// (0x0006116c) list_set_graphic_pane_vc

0x6fdb,	// (0x00064665) input_focus_pane_cp2_vc

0x6fd1,	// (0x0006465b) setting_code_pane_vc_g1

0x7040,	// (0x000646ca) setting_code_pane_vc_t1

0x3af5,	// (0x0006117f) set_text_pane_vc_t1_ParamLimits

0x3af5,	// (0x0006117f) set_text_pane_vc_t1

0x6fdb,	// (0x00064665) input_focus_pane_cp1_vc

0x3b12,	// (0x0006119c) list_set_text_pane_vc

0x6fd1,	// (0x0006465b) setting_text_pane_vc_g1

0x6fdb,	// (0x00064665) bg_set_opt_pane_cp2_vc

0x7037,	// (0x000646c1) setting_slider_graphic_pane_vc_g1

0x3b1c,	// (0x000611a6) setting_slider_graphic_pane_vc_t1

0x3b2c,	// (0x000611b6) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x0006d053) setting_slider_graphic_pane_vc_t

0x3b3c,	// (0x000611c6) slider_set_pane_cp_vc

0x3b44,	// (0x000611ce) slider_set_pane_vc_g1

0x3b4d,	// (0x000611d7) slider_set_pane_vc_g2

0x0006,

0xf9ce,	// (0x0006d058) slider_set_pane_vc_g

0x80b1,	// (0x0006573b) set_opt_bg_pane_g1_copy1

0x80b9,	// (0x00065743) set_opt_bg_pane_g2_copy1

0x3b79,	// (0x00061203) set_opt_bg_pane_g3_copy1

0x80c9,	// (0x00065753) set_opt_bg_pane_g4_copy1

0x80d1,	// (0x0006575b) set_opt_bg_pane_g5_copy1

0x80d9,	// (0x00065763) set_opt_bg_pane_g6_copy1

0x3b81,	// (0x0006120b) set_opt_bg_pane_g7_copy1

0x3b8b,	// (0x00061215) set_opt_bg_pane_g8_copy1

0x3b93,	// (0x0006121d) set_opt_bg_pane_g9_copy1

0x6fdb,	// (0x00064665) bg_set_opt_pane_cp_vc

0x3b9b,	// (0x00061225) setting_slider_pane_vc_t1

0x3baa,	// (0x00061234) setting_slider_pane_vc_t2

0x3bba,	// (0x00061244) setting_slider_pane_vc_t3

0x0002,

0xf9dd,	// (0x0006d067) setting_slider_pane_vc_t

0x3bca,	// (0x00061254) slider_set_pane_vc

0x06d7,	// (0x0005dd61) volume_set_pane_vc_g1

0x0aa0,	// (0x0005e12a) volume_set_pane_vc_g2

0x0aa9,	// (0x0005e133) volume_set_pane_vc_g3

0x0ab2,	// (0x0005e13c) volume_set_pane_vc_g4

0x0abb,	// (0x0005e145) volume_set_pane_vc_g5

0x0ac4,	// (0x0005e14e) volume_set_pane_vc_g6

0x0acd,	// (0x0005e157) volume_set_pane_vc_g7

0x0ad6,	// (0x0005e160) volume_set_pane_vc_g8

0x0adf,	// (0x0005e169) volume_set_pane_vc_g9

0x0ae8,	// (0x0005e172) volume_set_pane_vc_g10

0x0009,

0xf9e4,	// (0x0006d06e) volume_set_pane_vc_g

0x3bd2,	// (0x0006125c) volume_set_pane_vc

0x3bdc,	// (0x00061266) button_value_adjust_pane_cp1_vc

0x3be6,	// (0x00061270) list_highlight_pane_cp2_vc

0x3bef,	// (0x00061279) list_set_pane_vc_ParamLimits

0x3bef,	// (0x00061279) list_set_pane_vc

0x3c4d,	// (0x000612d7) main_pane_set_vc_t1_ParamLimits

0x3c4d,	// (0x000612d7) main_pane_set_vc_t1

0x3c62,	// (0x000612ec) main_pane_set_vc_t2_ParamLimits

0x3c62,	// (0x000612ec) main_pane_set_vc_t2

0x3c74,	// (0x000612fe) main_pane_set_vc_t3_ParamLimits

0x3c74,	// (0x000612fe) main_pane_set_vc_t3

0x3c86,	// (0x00061310) main_pane_set_vc_t4_ParamLimits

0x3c86,	// (0x00061310) main_pane_set_vc_t4

0x0003,

0xf9f9,	// (0x0006d083) main_pane_set_vc_t_ParamLimits

0xf9f9,	// (0x0006d083) main_pane_set_vc_t

0x3c98,	// (0x00061322) setting_code_pane_vc_ParamLimits

0x3c98,	// (0x00061322) setting_code_pane_vc

0x3ca7,	// (0x00061331) setting_slider_graphic_pane_vc

0x3ca7,	// (0x00061331) setting_slider_pane_vc

0x3ca7,	// (0x00061331) setting_text_pane_vc

0x3ca7,	// (0x00061331) setting_volume_pane_vc

0x3caf,	// (0x00061339) scroll_pane_cp121_vc

0x8033,	// (0x000656bd) set_content_pane_vc

0x3d37,	// (0x000613c1) button_value_adjust_pane_g1

0x3d40,	// (0x000613ca) button_value_adjust_pane_g2

0x0001,

0xfa55,	// (0x0006d0df) button_value_adjust_pane_g

0x3d49,	// (0x000613d3) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3d49,	// (0x000613d3) form_field_slider_wide_pane_vc_t1

0x3d5d,	// (0x000613e7) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3d5d,	// (0x000613e7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5a,	// (0x0006d0e4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5a,	// (0x0006d0e4) form_field_slider_wide_pane_vc_t

0x7153,	// (0x000647dd) input_focus_pane_cp10_vc_ParamLimits

0x7153,	// (0x000647dd) input_focus_pane_cp10_vc

0x3d8b,	// (0x00061415) slider_cont_pane_cp1_vc_ParamLimits

0x3d8b,	// (0x00061415) slider_cont_pane_cp1_vc

0x3d9d,	// (0x00061427) slider_form_pane_g1_cp2

0x3b4d,	// (0x000611d7) slider_form_pane_g2_cp2

0x3dca,	// (0x00061454) form_field_slider_pane_vc_t3

0x3dd8,	// (0x00061462) form_field_slider_pane_vc_t4

0x3de6,	// (0x00061470) slider_form_pane_vc_ParamLimits

0x3de6,	// (0x00061470) slider_form_pane_vc

0x3df3,	// (0x0006147d) form_field_slider_pane_vc_t1_ParamLimits

0x3df3,	// (0x0006147d) form_field_slider_pane_vc_t1

0x3d5d,	// (0x000613e7) form_field_slider_pane_vc_t2_ParamLimits

0x3d5d,	// (0x000613e7) form_field_slider_pane_vc_t2

0x0001,

0xfa6c,	// (0x0006d0f6) form_field_slider_pane_vc_t_ParamLimits

0xfa6c,	// (0x0006d0f6) form_field_slider_pane_vc_t

0x7153,	// (0x000647dd) input_focus_pane_cp9_vc_ParamLimits

0x7153,	// (0x000647dd) input_focus_pane_cp9_vc

0x3e0f,	// (0x00061499) slider_cont_pane_vc_ParamLimits

0x3e0f,	// (0x00061499) slider_cont_pane_vc

0x3e23,	// (0x000614ad) list_form_graphic_pane_cp_vc_ParamLimits

0x3e23,	// (0x000614ad) list_form_graphic_pane_cp_vc

0x2050,	// (0x0005f6da) form_field_popup_wide_pane_vc_g1

0x3e38,	// (0x000614c2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3e38,	// (0x000614c2) form_field_popup_wide_pane_vc_t1

0x8059,	// (0x000656e3) input_focus_pane_cp8_vc_ParamLimits

0x8059,	// (0x000656e3) input_focus_pane_cp8_vc

0x3e7d,	// (0x00061507) list_form_wide_pane_vc_ParamLimits

0x3e7d,	// (0x00061507) list_form_wide_pane_vc

0x3e89,	// (0x00061513) list_form_graphic_pane_vc_g1

0x3e91,	// (0x0006151b) list_form_graphic_pane_vc_t1_ParamLimits

0x3e91,	// (0x0006151b) list_form_graphic_pane_vc_t1

0x7029,	// (0x000646b3) list_highlight_pane_cp5_vc_ParamLimits

0x7029,	// (0x000646b3) list_highlight_pane_cp5_vc

0x3ead,	// (0x00061537) list_form_graphic_pane_vc_ParamLimits

0x3ead,	// (0x00061537) list_form_graphic_pane_vc

0x2050,	// (0x0005f6da) form_field_popup_pane_vc_g1

0x3ec3,	// (0x0006154d) form_field_popup_pane_vc_t1_ParamLimits

0x3ec3,	// (0x0006154d) form_field_popup_pane_vc_t1

0x8059,	// (0x000656e3) input_focus_pane_cp7_vc_ParamLimits

0x8059,	// (0x000656e3) input_focus_pane_cp7_vc

0x3eda,	// (0x00061564) list_form_pane_vc_ParamLimits

0x3eda,	// (0x00061564) list_form_pane_vc

0x3ee6,	// (0x00061570) data_form_pane_vc_t1_ParamLimits

0x3ee6,	// (0x00061570) data_form_pane_vc_t1

0x80b1,	// (0x0006573b) input_focus_pane_vc_g1

0x80b9,	// (0x00065743) input_focus_pane_vc_g2

0x80c1,	// (0x0006574b) input_focus_pane_vc_g3

0x80c9,	// (0x00065753) input_focus_pane_vc_g4

0x80d1,	// (0x0006575b) input_focus_pane_vc_g5

0x80d9,	// (0x00065763) input_focus_pane_vc_g6

0x80e1,	// (0x0006576b) input_focus_pane_vc_g7

0x80e9,	// (0x00065773) input_focus_pane_vc_g8

0x80f1,	// (0x0006577b) input_focus_pane_vc_g9

0x6fd1,	// (0x0006465b) input_focus_pane_vc_g10

0x0009,

0xf65d,	// (0x0006cce7) input_focus_pane_vc_g

0x2044,	// (0x0005f6ce) data_form_pane_vc_ParamLimits

0x2044,	// (0x0005f6ce) data_form_pane_vc

0x2050,	// (0x0005f6da) form_field_data_pane_vc_g1

0x3f01,	// (0x0006158b) form_field_data_pane_vc_t1_ParamLimits

0x3f01,	// (0x0006158b) form_field_data_pane_vc_t1

0x8059,	// (0x000656e3) input_focus_pane_vc_ParamLimits

0x8059,	// (0x000656e3) input_focus_pane_vc

0x3f1b,	// (0x000615a5) button_value_adjust_pane_cp3_vc

0x3f23,	// (0x000615ad) button_value_adjust_pane_cp5_vc

0x3f2b,	// (0x000615b5) form_field_data_pane_vc_ParamLimits

0x3f2b,	// (0x000615b5) form_field_data_pane_vc

0x3f42,	// (0x000615cc) form_field_data_pane_vc_cp2

0x3f4a,	// (0x000615d4) form_field_data_wide_pane_vc_ParamLimits

0x3f4a,	// (0x000615d4) form_field_data_wide_pane_vc

0x3f60,	// (0x000615ea) form_field_data_wide_pane_vc_cp2

0x3f68,	// (0x000615f2) form_field_popup_pane_vc_ParamLimits

0x3f68,	// (0x000615f2) form_field_popup_pane_vc

0x3f7f,	// (0x00061609) form_field_popup_wide_pane_vc_ParamLimits

0x3f7f,	// (0x00061609) form_field_popup_wide_pane_vc

0x3f95,	// (0x0006161f) form_field_slider_pane_vc_ParamLimits

0x3f95,	// (0x0006161f) form_field_slider_pane_vc

0x3fa8,	// (0x00061632) form_field_slider_wide_pane_vc_ParamLimits

0x3fa8,	// (0x00061632) form_field_slider_wide_pane_vc

0xcda0,	// (0x0006a42a) grid_touch_1_pane_ParamLimits

0xcda0,	// (0x0006a42a) grid_touch_1_pane

0xcdb4,	// (0x0006a43e) grid_touch_2_pane_ParamLimits

0xcdb4,	// (0x0006a43e) grid_touch_2_pane

0x408c,	// (0x00061716) touch_pane_g1_ParamLimits

0x408c,	// (0x00061716) touch_pane_g1

0x3fdf,	// (0x00061669) cell_app_pane_cp_wide_ParamLimits

0x3fdf,	// (0x00061669) cell_app_pane_cp_wide

0x3ff0,	// (0x0006167a) grid_popup_fast_wide_pane_ParamLimits

0x3ff0,	// (0x0006167a) grid_popup_fast_wide_pane

0x4004,	// (0x0006168e) scroll_pane_cp19_ParamLimits

0x4004,	// (0x0006168e) scroll_pane_cp19

0x6fdb,	// (0x00064665) bg_popup_window_pane_cp20

0x4018,	// (0x000616a2) listscroll_popup_fast_wide_pane

0xcdde,	// (0x0006a468) grid_indicator_nsta_pane

0x4032,	// (0x000616bc) clock_nsta_pane_g1

0x403b,	// (0x000616c5) clock_nsta_pane_t1

0xcdea,	// (0x0006a474) cell_indicator_nsta_pane_ParamLimits

0xcdea,	// (0x0006a474) cell_indicator_nsta_pane

0x408c,	// (0x00061716) cell_indicator_nsta_pane_g1

0xce05,	// (0x0006a48f) cell_indicator_nsta_pane_g2

0x0001,

0xfa7d,	// (0x0006d107) cell_indicator_nsta_pane_g

0x40ac,	// (0x00061736) clock_nsta_pane_cp

0x40b5,	// (0x0006173f) indicator_nsta_pane_cp

0x40bf,	// (0x00061749) nsta_clock_indic_pane_g1

0x7065,	// (0x000646ef) grid_indicator_pane

0xa011,	// (0x0006769b) scroll_pane_cp29

0xf2e4,	// (0x0006c96e) indicator_nsta_pane_cp2_ParamLimits

0xf2e4,	// (0x0006c96e) indicator_nsta_pane_cp2

0x7029,	// (0x000646b3) main_apps_wheel_pane

0xb2ed,	// (0x00068977) form_midp_field_text_pane_ParamLimits

0x23b1,	// (0x0005fa3b) scroll_bar_cp050_ParamLimits

0x4118,	// (0x000617a2) cell_indicator_pane_ParamLimits

0x4118,	// (0x000617a2) cell_indicator_pane

0x4131,	// (0x000617bb) cell_indicator_pane_g1

0xce24,	// (0x0006a4ae) grid_wheel_folder_pane_ParamLimits

0xce24,	// (0x0006a4ae) grid_wheel_folder_pane

0xce32,	// (0x0006a4bc) list_wheel_apps_pane_ParamLimits

0xce32,	// (0x0006a4bc) list_wheel_apps_pane

0xce40,	// (0x0006a4ca) main_apps_wheel_pane_g1_ParamLimits

0xce40,	// (0x0006a4ca) main_apps_wheel_pane_g1

0xce4c,	// (0x0006a4d6) main_apps_wheel_pane_g2_ParamLimits

0xce4c,	// (0x0006a4d6) main_apps_wheel_pane_g2

0x0001,

0xfa99,	// (0x0006d123) main_apps_wheel_pane_g_ParamLimits

0xfa99,	// (0x0006d123) main_apps_wheel_pane_g

0xce5a,	// (0x0006a4e4) main_apps_wheel_pane_t1_ParamLimits

0xce5a,	// (0x0006a4e4) main_apps_wheel_pane_t1

0xce6e,	// (0x0006a4f8) list_wheel_apps_pane_g1

0xce76,	// (0x0006a500) list_wheel_apps_pane_g2

0xce7e,	// (0x0006a508) list_wheel_apps_pane_g3

0xce86,	// (0x0006a510) list_wheel_apps_pane_g4

0xce90,	// (0x0006a51a) list_wheel_apps_pane_g5

0x0004,

0xfa9e,	// (0x0006d128) list_wheel_apps_pane_g

0xc2a2,	// (0x0006992c) navi_icon_text_pane

0xad31,	// (0x000683bb) aid_fill_nsta

0x41f8,	// (0x00061882) navi_icon_text_pane_g1

0x4204,	// (0x0006188e) navi_icon_text_pane_t1

0xc186,	// (0x00069810) list_set_graphic_pane_t1_ParamLimits

0xc186,	// (0x00069810) list_set_graphic_pane_t1

0x2afc,	// (0x00060186) popup_midp_note_alarm_window_t6_ParamLimits

0x2afc,	// (0x00060186) popup_midp_note_alarm_window_t6

0x2b0e,	// (0x00060198) popup_midp_note_alarm_window_t7_ParamLimits

0x2b0e,	// (0x00060198) popup_midp_note_alarm_window_t7

0x2b20,	// (0x000601aa) popup_midp_note_alarm_window_t8_ParamLimits

0x2b20,	// (0x000601aa) popup_midp_note_alarm_window_t8

0x2b32,	// (0x000601bc) popup_midp_note_alarm_window_t9_ParamLimits

0x2b32,	// (0x000601bc) popup_midp_note_alarm_window_t9

0x2b44,	// (0x000601ce) popup_midp_note_alarm_window_t10_ParamLimits

0x2b44,	// (0x000601ce) popup_midp_note_alarm_window_t10

0x2b56,	// (0x000601e0) popup_midp_note_alarm_window_t11_ParamLimits

0x2b56,	// (0x000601e0) popup_midp_note_alarm_window_t11

0xc806,	// (0x00069e90) scroll_pane_cp17_ParamLimits

0xc806,	// (0x00069e90) scroll_pane_cp17

0x06d7,	// (0x0005dd61) volume_small_pane_cp_g1

0x0af1,	// (0x0005e17b) volume_small_pane_cp_g2

0x0afa,	// (0x0005e184) volume_small_pane_cp_g3

0x0b03,	// (0x0005e18d) volume_small_pane_cp_g4

0x0b0c,	// (0x0005e196) volume_small_pane_cp_g5

0x0abb,	// (0x0005e145) volume_small_pane_cp_g6

0x0b15,	// (0x0005e19f) volume_small_pane_cp_g7

0x0b1e,	// (0x0005e1a8) volume_small_pane_cp_g8

0x0b27,	// (0x0005e1b1) volume_small_pane_cp_g9

0x0b30,	// (0x0005e1ba) volume_small_pane_cp_g10

0xc408,	// (0x00069a92) midp_ticker_pane_g1_ParamLimits

0xc414,	// (0x00069a9e) midp_ticker_pane_g2_ParamLimits

0xf729,	// (0x0006cdb3) midp_ticker_pane_g_ParamLimits

0xc420,	// (0x00069aaa) midp_ticker_pane_t1_ParamLimits

0xad55,	// (0x000683df) aid_fill_nsta_2

0x239d,	// (0x0005fa27) list_form2_midp_pane

0x34b0,	// (0x00060b3a) midp_editing_number_pane_ParamLimits

0x34bf,	// (0x00060b49) midp_ticker_pane_ParamLimits

0x4216,	// (0x000618a0) form2_midp_field_pane

0x423a,	// (0x000618c4) scroll_pane_cp51

0x425a,	// (0x000618e4) form2_midp_button_pane_ParamLimits

0x425a,	// (0x000618e4) form2_midp_button_pane

0x426c,	// (0x000618f6) form2_midp_content_pane_ParamLimits

0x426c,	// (0x000618f6) form2_midp_content_pane

0x4286,	// (0x00061910) form2_midp_field_choice_group_pane

0x428e,	// (0x00061918) form2_midp_field_pane_g1

0x4296,	// (0x00061920) form2_midp_field_pane_g2

0x429e,	// (0x00061928) form2_midp_field_pane_g3

0x42a6,	// (0x00061930) form2_midp_field_pane_g4

0x0003,

0xfac3,	// (0x0006d14d) form2_midp_field_pane_g

0x42ae,	// (0x00061938) form2_midp_gauge_slider_pane

0x42b6,	// (0x00061940) form2_midp_gauge_wait_pane

0x42be,	// (0x00061948) form2_midp_image_pane_ParamLimits

0x42be,	// (0x00061948) form2_midp_image_pane

0xcec3,	// (0x0006a54d) form2_midp_label_pane_ParamLimits

0xcec3,	// (0x0006a54d) form2_midp_label_pane

0xcedc,	// (0x0006a566) form2_midp_label_pane_cp_ParamLimits

0xcedc,	// (0x0006a566) form2_midp_label_pane_cp

0x4313,	// (0x0006199d) form2_midp_string_pane_ParamLimits

0x4313,	// (0x0006199d) form2_midp_string_pane

0xb572,	// (0x00068bfc) form2_midp_text_pane_ParamLimits

0xb572,	// (0x00068bfc) form2_midp_text_pane

0x4325,	// (0x000619af) form2_midp_time_pane

0x4335,	// (0x000619bf) input_focus_pane_cp51_ParamLimits

0x4335,	// (0x000619bf) input_focus_pane_cp51

0xcefb,	// (0x0006a585) form2_midp_label_pane_t1_ParamLimits

0xcefb,	// (0x0006a585) form2_midp_label_pane_t1

0xb58b,	// (0x00068c15) form2_mdip_text_pane_t1_ParamLimits

0xb58b,	// (0x00068c15) form2_mdip_text_pane_t1

0xed76,	// (0x0006c400) form2_midp_time_pane_t1

0x4396,	// (0x00061a20) form2_midp_gauge_slider_pane_t1

0xcf3b,	// (0x0006a5c5) form2_midp_gauge_slider_pane_t2

0xcf4d,	// (0x0006a5d7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacc,	// (0x0006d156) form2_midp_gauge_slider_pane_t

0x43cc,	// (0x00061a56) form2_midp_slider_pane

0x43d8,	// (0x00061a62) form2_midp_gauge_wait_pane_t1

0x43e6,	// (0x00061a70) form2_midp_wait_pane_ParamLimits

0x43e6,	// (0x00061a70) form2_midp_wait_pane

0xcf5f,	// (0x0006a5e9) list_single_2graphic_pane_cp4_ParamLimits

0xcf5f,	// (0x0006a5e9) list_single_2graphic_pane_cp4

0xb22e,	// (0x000688b8) list_single_midp_graphic_pane_cp_ParamLimits

0xb22e,	// (0x000688b8) list_single_midp_graphic_pane_cp

0x6fdb,	// (0x00064665) list_highlight_pane_cp20

0x4439,	// (0x00061ac3) list_single_2graphic_pane_g1_cp4

0x3996,	// (0x00061020) list_single_2graphic_pane_g2_cp4

0x4441,	// (0x00061acb) list_single_2graphic_pane_t1_cp4

0x7029,	// (0x000646b3) list_highlight_pane_cp21

0x4450,	// (0x00061ada) list_single_midp_graphic_pane_g4_cp

0x445f,	// (0x00061ae9) list_single_midp_graphic_pane_t1_cp

0xcf74,	// (0x0006a5fe) form2_mdip_string_pane_t1_ParamLimits

0xcf74,	// (0x0006a5fe) form2_mdip_string_pane_t1

0x6fdb,	// (0x00064665) bg_wml_button_pane_cp2

0x6fd1,	// (0x0006465b) form2_midp_image_pane_g1

0xe801,	// (0x0006be8b) list_double_large_graphic_pane_g5_ParamLimits

0xe801,	// (0x0006be8b) list_double_large_graphic_pane_g5

0xa29d,	// (0x00067927) midp_form_pane_ParamLimits

0x7029,	// (0x000646b3) main_apps_wheel_pane_ParamLimits

0xaa0f,	// (0x00068099) popup_preview_window_ParamLimits

0xaa0f,	// (0x00068099) popup_preview_window

0xacdc,	// (0x00068366) popup_touch_info_window_ParamLimits

0xacdc,	// (0x00068366) popup_touch_info_window

0xacfa,	// (0x00068384) popup_touch_menu_window_ParamLimits

0xacfa,	// (0x00068384) popup_touch_menu_window

0x6fc7,	// (0x00064651) bg_popup_sub_pane_cp6

0x457b,	// (0x00061c05) list_touch_menu_pane

0xcfea,	// (0x0006a674) list_single_touch_menu_pane_ParamLimits

0xcfea,	// (0x0006a674) list_single_touch_menu_pane

0xcffe,	// (0x0006a688) list_single_touch_menu_pane_t1

0x7029,	// (0x000646b3) bg_popup_sub_pane_cp7_ParamLimits

0x7029,	// (0x000646b3) bg_popup_sub_pane_cp7

0x45a7,	// (0x00061c31) heading_sub_pane

0x45af,	// (0x00061c39) list_touch_info_pane_ParamLimits

0x45af,	// (0x00061c39) list_touch_info_pane

0x4693,	// (0x00061d1d) list_single_touch_info_pane_ParamLimits

0x4693,	// (0x00061d1d) list_single_touch_info_pane

0x46a5,	// (0x00061d2f) list_single_touch_info_pane_t1

0x46b3,	// (0x00061d3d) list_single_touch_info_pane_t2

0x0001,

0xfada,	// (0x0006d164) list_single_touch_info_pane_t

0xc3f1,	// (0x00069a7b) bg_popup_heading_pane_cp

0x46c1,	// (0x00061d4b) heading_sub_pane_t1

0x1fde,	// (0x0005f668) bg_popup_preview_window_pane_cp_ParamLimits

0x1fde,	// (0x0005f668) bg_popup_preview_window_pane_cp

0x45a7,	// (0x00061c31) heading_preview_pane

0x45af,	// (0x00061c39) list_preview_pane_ParamLimits

0x45af,	// (0x00061c39) list_preview_pane

0x46cf,	// (0x00061d59) popup_preview_window_g1

0x4693,	// (0x00061d1d) list_single_preview_pane_ParamLimits

0x4693,	// (0x00061d1d) list_single_preview_pane

0x46d7,	// (0x00061d61) list_single_preview_pane_g1

0x46df,	// (0x00061d69) list_single_preview_pane_t1

0x46a5,	// (0x00061d2f) list_single_preview_pane_t2

0x0001,

0xfadf,	// (0x0006d169) list_single_preview_pane_t

0x46ed,	// (0x00061d77) bg_popup_heading_pane_cp2_ParamLimits

0x46ed,	// (0x00061d77) bg_popup_heading_pane_cp2

0x4703,	// (0x00061d8d) heading_preview_pane_g1

0x470b,	// (0x00061d95) heading_preview_pane_t1_ParamLimits

0x470b,	// (0x00061d95) heading_preview_pane_t1

0x707c,	// (0x00064706) soft_indicator_pane_t1_ParamLimits

0x7fd5,	// (0x0006565f) scroll_pane_ParamLimits

0x8372,	// (0x000659fc) scroll_sc2_left_pane

0x837b,	// (0x00065a05) scroll_sc2_right_pane

0x839a,	// (0x00065a24) scroll_bg_pane_g1_ParamLimits

0x83af,	// (0x00065a39) scroll_bg_pane_g2_ParamLimits

0x83c7,	// (0x00065a51) scroll_bg_pane_g3_ParamLimits

0xf6b4,	// (0x0006cd3e) scroll_bg_pane_g_ParamLimits

0x839a,	// (0x00065a24) scroll_handle_pane_g1_ParamLimits

0x83dc,	// (0x00065a66) scroll_handle_pane_g2_ParamLimits

0x83c7,	// (0x00065a51) scroll_handle_pane_g3_ParamLimits

0xf6bb,	// (0x0006cd45) scroll_handle_pane_g_ParamLimits

0xa5dc,	// (0x00067c66) popup_choice_list_window_ParamLimits

0xa5dc,	// (0x00067c66) popup_choice_list_window

0x1e9c,	// (0x0005f526) choice_list_pane

0x1f1e,	// (0x0005f5a8) cell_toolbar_pane_t1

0x1f46,	// (0x0005f5d0) toolbar_button_pane_ParamLimits

0x3022,	// (0x000606ac) ai_gene_pane_1_t2_ParamLimits

0x3022,	// (0x000606ac) ai_gene_pane_1_t2

0x0001,

0xf8d7,	// (0x0006cf61) ai_gene_pane_1_t_ParamLimits

0xf8d7,	// (0x0006cf61) ai_gene_pane_1_t

0x4728,	// (0x00061db2) scroll_sc2_left_pane_g1

0x4728,	// (0x00061db2) scroll_sc2_right_pane_g1

0x8441,	// (0x00065acb) bg_popup_sub_pane_cp10

0x4732,	// (0x00061dbc) list_choice_list_pane

0xcbcf,	// (0x0006a259) list_single_choice_list_pane_ParamLimits

0xcbcf,	// (0x0006a259) list_single_choice_list_pane

0xd00c,	// (0x0006a696) list_single_choice_list_pane_g1

0x9e3b,	// (0x000674c5) list_single_choice_list_pane_t1_ParamLimits

0x9e3b,	// (0x000674c5) list_single_choice_list_pane_t1

0x4766,	// (0x00061df0) choice_list_pane_g1

0xd014,	// (0x0006a69e) choice_list_pane_t1

0x6fc7,	// (0x00064651) input_focus_pane_cp11

0x82e7,	// (0x00065971) title_pane_stacon_g2_ParamLimits

0x82e7,	// (0x00065971) title_pane_stacon_g2

0x0002,

0xf69a,	// (0x0006cd24) title_pane_stacon_g_ParamLimits

0xf69a,	// (0x0006cd24) title_pane_stacon_g

0xc3f1,	// (0x00069a7b) cursor_press_pane

0xa683,	// (0x00067d0d) popup_fep_hwr_window_ParamLimits

0xa683,	// (0x00067d0d) popup_fep_hwr_window

0xf4e5,	// (0x0006cb6f) popup_fep_vkb_window_ParamLimits

0xf4e5,	// (0x0006cb6f) popup_fep_vkb_window

0xd022,	// (0x0006a6ac) cursor_press_pane_g1

0x0002,

0xfb08,	// (0x0006d192) fep_vkb_side_pane_g_ParamLimits

0x0bad,	// (0x0005e237) fep_hwr_candidate_pane_ParamLimits

0x0bad,	// (0x0005e237) fep_hwr_candidate_pane

0x0bd7,	// (0x0005e261) fep_hwr_side_pane_ParamLimits

0x0bd7,	// (0x0005e261) fep_hwr_side_pane

0x0bf7,	// (0x0005e281) fep_hwr_top_pane_ParamLimits

0x0bf7,	// (0x0005e281) fep_hwr_top_pane

0x0c0f,	// (0x0005e299) fep_hwr_write_pane_ParamLimits

0x0c0f,	// (0x0005e299) fep_hwr_write_pane

0xfb08,	// (0x0006d192) fep_vkb_side_pane_g

0x4784,	// (0x00061e0e) fep_hwr_top_pane_g1

0x4796,	// (0x00061e20) fep_hwr_top_pane_g2

0x0c49,	// (0x0005e2d3) fep_hwr_top_pane_g3

0x0002,

0xfae4,	// (0x0006d16e) fep_hwr_top_pane_g

0x0c5e,	// (0x0005e2e8) fep_hwr_top_text_pane

0xbf93,	// (0x0006961d) fep_hwr_top_text_pane_g1

0x47cc,	// (0x00061e56) fep_hwr_top_text_pane_t1

0x0d54,	// (0x0005e3de) fep_hwr_candidate_pane_g1

0x4a11,	// (0x0006209b) fep_vkb_keypad_pane_g3_ParamLimits

0x4a11,	// (0x0006209b) fep_vkb_keypad_pane_g3

0x4a39,	// (0x000620c3) fep_vkb_keypad_pane_g4_ParamLimits

0x4a39,	// (0x000620c3) fep_vkb_keypad_pane_g4

0x4aa8,	// (0x00062132) fep_vkb_bottom_pane_g2_ParamLimits

0x4aa8,	// (0x00062132) fep_vkb_bottom_pane_g2

0x0001,

0xfb0f,	// (0x0006d199) fep_vkb_bottom_pane_g_ParamLimits

0xfb0f,	// (0x0006d199) fep_vkb_bottom_pane_g

0x4728,	// (0x00061db2) cell_vkb_side_pane_g2

0x0001,

0xfb19,	// (0x0006d1a3) cell_vkb_side_pane_g

0x4b33,	// (0x000621bd) cell_vkb_side_pane_t1

0x4b41,	// (0x000621cb) cell_vkb_side_pane_t1_copy1

0x4728,	// (0x00061db2) bg_fep_vkb_candidate_pane_g2

0x4c6d,	// (0x000622f7) cell_vkb_candidate_pane_ParamLimits

0x47da,	// (0x00061e64) aid_size_cell_vkb_ParamLimits

0x47da,	// (0x00061e64) aid_size_cell_vkb

0x4c6d,	// (0x000622f7) cell_vkb_candidate_pane

0x0d7b,	// (0x0005e405) bg_popup_fep_shadow_pane_g1

0xd049,	// (0x0006a6d3) fep_vkb_bottom_pane_ParamLimits

0xd049,	// (0x0006a6d3) fep_vkb_bottom_pane

0x489e,	// (0x00061f28) fep_vkb_candidate_pane_ParamLimits

0x489e,	// (0x00061f28) fep_vkb_candidate_pane

0xd06e,	// (0x0006a6f8) fep_vkb_keypad_pane_ParamLimits

0xd06e,	// (0x0006a6f8) fep_vkb_keypad_pane

0xd0a3,	// (0x0006a72d) fep_vkb_side_pane_ParamLimits

0xd0a3,	// (0x0006a72d) fep_vkb_side_pane

0xd0df,	// (0x0006a769) fep_vkb_top_pane_ParamLimits

0xd0df,	// (0x0006a769) fep_vkb_top_pane

0x496a,	// (0x00061ff4) fep_vkb_top_pane_g1_ParamLimits

0x496a,	// (0x00061ff4) fep_vkb_top_pane_g1

0x4979,	// (0x00062003) fep_vkb_top_pane_g2_ParamLimits

0x4979,	// (0x00062003) fep_vkb_top_pane_g2

0x4988,	// (0x00062012) fep_vkb_top_pane_g3_ParamLimits

0x4988,	// (0x00062012) fep_vkb_top_pane_g3

0x0003,

0xfaff,	// (0x0006d189) fep_vkb_top_pane_g_ParamLimits

0xfaff,	// (0x0006d189) fep_vkb_top_pane_g

0x49a6,	// (0x00062030) fep_vkb_top_text_pane_ParamLimits

0x49a6,	// (0x00062030) fep_vkb_top_text_pane

0xd114,	// (0x0006a79e) fep_vkb_side_pane_g1_ParamLimits

0xd114,	// (0x0006a79e) fep_vkb_side_pane_g1

0x4a00,	// (0x0006208a) grid_vkb_side_pane_ParamLimits

0x4a00,	// (0x0006208a) grid_vkb_side_pane

0x0d83,	// (0x0005e40d) bg_popup_fep_shadow_pane_g2

0x0d8c,	// (0x0005e416) bg_popup_fep_shadow_pane_g3

0x0d94,	// (0x0005e41e) bg_popup_fep_shadow_pane_g4

0x0d9d,	// (0x0005e427) bg_popup_fep_shadow_pane_g5

0x0da7,	// (0x0005e431) bg_popup_fep_shadow_pane_g6

0x0daf,	// (0x0005e439) bg_popup_fep_shadow_pane_g7

0x80c9,	// (0x00065753) bg_popup_fep_shadow_pane_g8

0x4a57,	// (0x000620e1) grid_vkb_keypad_number_pane_ParamLimits

0x4a57,	// (0x000620e1) grid_vkb_keypad_number_pane

0x4a67,	// (0x000620f1) grid_vkb_keypad_pane_ParamLimits

0x4a67,	// (0x000620f1) grid_vkb_keypad_pane

0x4a8d,	// (0x00062117) fep_vkb_bottom_pane_g1_ParamLimits

0x4a8d,	// (0x00062117) fep_vkb_bottom_pane_g1

0x4ab6,	// (0x00062140) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4ab6,	// (0x00062140) grid_vkb_keypad_bottom_left_pane

0x4acb,	// (0x00062155) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4acb,	// (0x00062155) grid_vkb_keypad_bottom_right_pane

0x4ae0,	// (0x0006216a) fep_vkb_top_text_pane_g1

0xd15b,	// (0x0006a7e5) fep_vkb_top_text_pane_t1

0xd16d,	// (0x0006a7f7) cell_vkb_side_pane_ParamLimits

0xd16d,	// (0x0006a7f7) cell_vkb_side_pane

0x4728,	// (0x00061db2) cell_vkb_side_pane_g1

0x4b4f,	// (0x000621d9) cell_vkb_keypad_pane_ParamLimits

0x4b4f,	// (0x000621d9) cell_vkb_keypad_pane

0x4bc4,	// (0x0006224e) cell_vkb_keypad_pane_g1

0x0008,

0xfb2c,	// (0x0006d1b6) bg_popup_fep_shadow_pane_g

0x0dc1,	// (0x0005e44b) cell_hwr_side_pane_g1

0x0dc1,	// (0x0005e44b) cell_hwr_side_pane_g2

0x4bce,	// (0x00062258) cell_vkb_keypad_pane_t1

0xd183,	// (0x0006a80d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd183,	// (0x0006a80d) cell_vkb_keypad_bottom_left_pane

0xd198,	// (0x0006a822) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd198,	// (0x0006a822) cell_vkb_keypad_bottom_right_pane

0x4728,	// (0x00061db2) cell_vkb_keypad_bottom_left_pane_g1

0x4728,	// (0x00061db2) cell_vkb_keypad_bottom_right_pane_g1

0x4c32,	// (0x000622bc) cell_vkb_keypad_number_pane_ParamLimits

0x4c32,	// (0x000622bc) cell_vkb_keypad_number_pane

0x4c51,	// (0x000622db) cell_vkb_keypad_number_pane_g1

0x4c5b,	// (0x000622e5) cell_vkb_keypad_number_pane_g2

0x4c64,	// (0x000622ee) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1e,	// (0x0006d1a8) cell_vkb_keypad_number_pane_g

0x4bce,	// (0x00062258) cell_vkb_keypad_number_pane_t1

0x4c88,	// (0x00062312) fep_vkb_candidate_pane_g1

0x0001,

0xfb3f,	// (0x0006d1c9) cell_hwr_side_pane_g

0x4ca1,	// (0x0006232b) cell_hwr_side_pane_t1

0x0dcb,	// (0x0005e455) cell_hwr_side_pane_t1_copy1

0x0dd9,	// (0x0005e463) cell_hwr_candidate_pane_g1

0x0e08,	// (0x0005e492) cell_hwr_candidate_pane_t1

0x4728,	// (0x00061db2) cell_vkb_candidate_pane_g2

0x4d06,	// (0x00062390) cell_vkb_candidate_pane_t1

0x0b74,	// (0x0005e1fe) bg_popup_fep_shadow_pane_ParamLimits

0x0b74,	// (0x0005e1fe) bg_popup_fep_shadow_pane

0x0c29,	// (0x0005e2b3) bg_fep_hwr_top_pane_g4

0x47a8,	// (0x00061e32) bg_hwr_side_pane_g1_ParamLimits

0x47a8,	// (0x00061e32) bg_hwr_side_pane_g1

0xb5bd,	// (0x00068c47) cell_hwr_side_pane_ParamLimits

0xb5bd,	// (0x00068c47) cell_hwr_side_pane

0x0cd5,	// (0x0005e35f) fep_hwr_write_pane_g1_ParamLimits

0x0cd5,	// (0x0005e35f) fep_hwr_write_pane_g1

0x0ce2,	// (0x0005e36c) fep_hwr_write_pane_g2_ParamLimits

0x0ce2,	// (0x0005e36c) fep_hwr_write_pane_g2

0x0cef,	// (0x0005e379) fep_hwr_write_pane_g3_ParamLimits

0x0cef,	// (0x0005e379) fep_hwr_write_pane_g3

0xb5dd,	// (0x00068c67) fep_hwr_write_pane_g4_ParamLimits

0xb5dd,	// (0x00068c67) fep_hwr_write_pane_g4

0x0005,

0xfaeb,	// (0x0006d175) fep_hwr_write_pane_g_ParamLimits

0xfaeb,	// (0x0006d175) fep_hwr_write_pane_g

0x0c29,	// (0x0005e2b3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0c29,	// (0x0005e2b3) bg_fep_hwr_candidate_pane_g2

0x0d12,	// (0x0005e39c) cell_hwr_candidate_pane_ParamLimits

0x0d12,	// (0x0005e39c) cell_hwr_candidate_pane

0x0d54,	// (0x0005e3de) fep_hwr_candidate_pane_g1_ParamLimits

0x4808,	// (0x00061e92) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4808,	// (0x00061e92) bg_popup_fep_shadow_pane_cp2

0x4998,	// (0x00062022) fep_vkb_top_pane_g4_ParamLimits

0x4998,	// (0x00062022) fep_vkb_top_pane_g4

0x49de,	// (0x00062068) fep_vkb_side_pane_g2_ParamLimits

0x49de,	// (0x00062068) fep_vkb_side_pane_g2

0x9b46,	// (0x000671d0) list_setting_pane_t4_ParamLimits

0x9b46,	// (0x000671d0) list_setting_pane_t4

0x9be0,	// (0x0006726a) list_setting_number_pane_t5_ParamLimits

0x9be0,	// (0x0006726a) list_setting_number_pane_t5

0xbfca,	// (0x00069654) list_double_heading_pane_cp2_ParamLimits

0xbfca,	// (0x00069654) list_double_heading_pane_cp2

0xd1b3,	// (0x0006a83d) list_double_heading_pane_g1_cp2_ParamLimits

0xd1b3,	// (0x0006a83d) list_double_heading_pane_g1_cp2

0x4d14,	// (0x0006239e) list_double_heading_pane_g2_cp2_ParamLimits

0x4d14,	// (0x0006239e) list_double_heading_pane_g2_cp2

0x4d28,	// (0x000623b2) list_double_heading_pane_t1_cp2_ParamLimits

0x4d28,	// (0x000623b2) list_double_heading_pane_t1_cp2

0x4d3e,	// (0x000623c8) list_double_heading_pane_t2_cp2_ParamLimits

0x4d3e,	// (0x000623c8) list_double_heading_pane_t2_cp2

0x6fbf,	// (0x00064649) aid_value_unit2

0xe7df,	// (0x0006be69) popup_preview_fixed_window

0x7161,	// (0x000647eb) bg_popup_preview_window_pane_cp02

0x4d50,	// (0x000623da) list_preview_fixed_pane

0x4d96,	// (0x00062420) list_empty_pane_fp_ParamLimits

0x4d96,	// (0x00062420) list_empty_pane_fp

0x4d96,	// (0x00062420) list_single_cale_day_pane_fp_ParamLimits

0x4d96,	// (0x00062420) list_single_cale_day_pane_fp

0x4d96,	// (0x00062420) list_single_graphic_heading_pane_fp_ParamLimits

0x4d96,	// (0x00062420) list_single_graphic_heading_pane_fp

0x4d96,	// (0x00062420) list_single_graphic_pane_fp_ParamLimits

0x4d96,	// (0x00062420) list_single_graphic_pane_fp

0x4d96,	// (0x00062420) list_single_heading_pane_fp_ParamLimits

0x4d96,	// (0x00062420) list_single_heading_pane_fp

0x4d96,	// (0x00062420) list_single_pane_fp_ParamLimits

0x4d96,	// (0x00062420) list_single_pane_fp

0x4dac,	// (0x00062436) list_single_pane_fp_g1_ParamLimits

0x4dac,	// (0x00062436) list_single_pane_fp_g1

0xd1bf,	// (0x0006a849) list_single_pane_fp_g2_ParamLimits

0xd1bf,	// (0x0006a849) list_single_pane_fp_g2

0x4db8,	// (0x00062442) list_single_pane_fp_g3_ParamLimits

0x4db8,	// (0x00062442) list_single_pane_fp_g3

0x4dcc,	// (0x00062456) list_single_pane_fp_g4_ParamLimits

0x4dcc,	// (0x00062456) list_single_pane_fp_g4

0x0003,

0xfb52,	// (0x0006d1dc) list_single_pane_fp_g_ParamLimits

0xfb52,	// (0x0006d1dc) list_single_pane_fp_g

0xed89,	// (0x0006c413) list_single_pane_fp_t1_ParamLimits

0xed89,	// (0x0006c413) list_single_pane_fp_t1

0xeda0,	// (0x0006c42a) list_single_graphic_pane_fp_g1_ParamLimits

0xeda0,	// (0x0006c42a) list_single_graphic_pane_fp_g1

0x4dac,	// (0x00062436) list_single_graphic_pane_fp_g2_ParamLimits

0x4dac,	// (0x00062436) list_single_graphic_pane_fp_g2

0xd1bf,	// (0x0006a849) list_single_graphic_pane_fp_g3_ParamLimits

0xd1bf,	// (0x0006a849) list_single_graphic_pane_fp_g3

0x4db8,	// (0x00062442) list_single_graphic_pane_fp_g4_ParamLimits

0x4db8,	// (0x00062442) list_single_graphic_pane_fp_g4

0x4dcc,	// (0x00062456) list_single_graphic_pane_fp_g5_ParamLimits

0x4dcc,	// (0x00062456) list_single_graphic_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006d1e5) list_single_graphic_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006d1e5) list_single_graphic_pane_fp_g

0xedac,	// (0x0006c436) list_single_graphic_pane_fp_t1_ParamLimits

0xedac,	// (0x0006c436) list_single_graphic_pane_fp_t1

0xeda0,	// (0x0006c42a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeda0,	// (0x0006c42a) list_single_graphic_heading_pane_fp_g1

0x4dac,	// (0x00062436) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4dac,	// (0x00062436) list_single_graphic_heading_pane_fp_g2

0xd1bf,	// (0x0006a849) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd1bf,	// (0x0006a849) list_single_graphic_heading_pane_fp_g3

0x4db8,	// (0x00062442) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4db8,	// (0x00062442) list_single_graphic_heading_pane_fp_g4

0x4dcc,	// (0x00062456) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4dcc,	// (0x00062456) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006d1e5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006d1e5) list_single_graphic_heading_pane_fp_g

0xedc2,	// (0x0006c44c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xedc2,	// (0x0006c44c) list_single_graphic_heading_pane_fp_t1

0xedd8,	// (0x0006c462) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xedd8,	// (0x0006c462) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb66,	// (0x0006d1f0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb66,	// (0x0006d1f0) list_single_graphic_heading_pane_fp_t

0xedea,	// (0x0006c474) list_single_cale_day_pane_fp_g1_ParamLimits

0xedea,	// (0x0006c474) list_single_cale_day_pane_fp_g1

0x4dd8,	// (0x00062462) list_single_cale_day_pane_fp_g2_ParamLimits

0x4dd8,	// (0x00062462) list_single_cale_day_pane_fp_g2

0x45be,	// (0x00061c48) list_single_cale_day_pane_fp_g3_ParamLimits

0x45be,	// (0x00061c48) list_single_cale_day_pane_fp_g3

0x45e6,	// (0x00061c70) list_single_cale_day_pane_fp_g4_ParamLimits

0x45e6,	// (0x00061c70) list_single_cale_day_pane_fp_g4

0x460a,	// (0x00061c94) list_single_cale_day_pane_fp_g5_ParamLimits

0x460a,	// (0x00061c94) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6b,	// (0x0006d1f5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6b,	// (0x0006d1f5) list_single_cale_day_pane_fp_g

0xee22,	// (0x0006c4ac) list_single_cale_day_pane_fp_t1_ParamLimits

0xee22,	// (0x0006c4ac) list_single_cale_day_pane_fp_t1

0xee48,	// (0x0006c4d2) list_single_cale_day_pane_fp_t2_ParamLimits

0xee48,	// (0x0006c4d2) list_single_cale_day_pane_fp_t2

0xee61,	// (0x0006c4eb) list_single_cale_day_pane_fp_t3_ParamLimits

0xee61,	// (0x0006c4eb) list_single_cale_day_pane_fp_t3

0x0002,

0xfb76,	// (0x0006d200) list_single_cale_day_pane_fp_t_ParamLimits

0xfb76,	// (0x0006d200) list_single_cale_day_pane_fp_t

0x4dac,	// (0x00062436) list_empty_pane_fp_g1_ParamLimits

0x4dac,	// (0x00062436) list_empty_pane_fp_g1

0xee7a,	// (0x0006c504) list_empty_pane_fp_t1

0xee88,	// (0x0006c512) list_empty_pane_fp_t2

0x0001,

0xfb7d,	// (0x0006d207) list_empty_pane_fp_t

0x4dac,	// (0x00062436) list_single_heading_pane_fp_g1_ParamLimits

0x4dac,	// (0x00062436) list_single_heading_pane_fp_g1

0xd1bf,	// (0x0006a849) list_single_heading_pane_fp_g2_ParamLimits

0xd1bf,	// (0x0006a849) list_single_heading_pane_fp_g2

0x4db8,	// (0x00062442) list_single_heading_pane_fp_g3_ParamLimits

0x4db8,	// (0x00062442) list_single_heading_pane_fp_g3

0x0002,

0xfb82,	// (0x0006d20c) list_single_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0006d20c) list_single_heading_pane_fp_g

0xee96,	// (0x0006c520) list_single_heading_pane_fp_t1_ParamLimits

0xee96,	// (0x0006c520) list_single_heading_pane_fp_t1

0xeea8,	// (0x0006c532) list_single_heading_pane_fp_t2_ParamLimits

0xeea8,	// (0x0006c532) list_single_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0006d213) list_single_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0006d213) list_single_heading_pane_fp_t

0x9e87,	// (0x00067511) aid_size_cell_fast

0x7136,	// (0x000647c0) soft_indicator_pane_cp1_t1

0x9e90,	// (0x0006751a) cell_app_pane_cp2_ParamLimits

0x9e90,	// (0x0006751a) cell_app_pane_cp2

0x0b96,	// (0x0005e220) fep_hwr_candidate_drop_down_list_pane

0x0d6e,	// (0x0005e3f8) fep_hwr_candidate_pane_g3_ParamLimits

0x0d6e,	// (0x0005e3f8) fep_hwr_candidate_pane_g3

0xd02a,	// (0x0006a6b4) fep_hwr_candidate_pane_g4_ParamLimits

0xd02a,	// (0x0006a6b4) fep_hwr_candidate_pane_g4

0x0002,

0xfaf8,	// (0x0006d182) fep_hwr_candidate_pane_g_ParamLimits

0xfaf8,	// (0x0006d182) fep_hwr_candidate_pane_g

0x488d,	// (0x00061f17) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x488d,	// (0x00061f17) fep_vkb_candidate_drop_down_list_pane

0x4c90,	// (0x0006231a) fep_vkb_candidate_pane_g3

0x4c98,	// (0x00062322) fep_vkb_candidate_pane_g4

0x0002,

0xfb25,	// (0x0006d1af) fep_vkb_candidate_pane_g

0x0dd9,	// (0x0005e463) cell_hwr_candidate_pane_g1_ParamLimits

0x0de7,	// (0x0005e471) cell_hwr_candidate_pane_g3_ParamLimits

0x0de7,	// (0x0005e471) cell_hwr_candidate_pane_g3

0x4caf,	// (0x00062339) cell_hwr_candidate_pane_g4_ParamLimits

0x4caf,	// (0x00062339) cell_hwr_candidate_pane_g4

0x0002,

0xfb44,	// (0x0006d1ce) cell_hwr_candidate_pane_g_ParamLimits

0xfb44,	// (0x0006d1ce) cell_hwr_candidate_pane_g

0x4cd0,	// (0x0006235a) cell_vkb_candidate_pane_g3_ParamLimits

0x4cd0,	// (0x0006235a) cell_vkb_candidate_pane_g3

0x4ceb,	// (0x00062375) cell_vkb_candidate_pane_g4_ParamLimits

0x4ceb,	// (0x00062375) cell_vkb_candidate_pane_g4

0xd1cb,	// (0x0006a855) cell_app_pane_cp2_g1_ParamLimits

0xd1cb,	// (0x0006a855) cell_app_pane_cp2_g1

0x4e02,	// (0x0006248c) cell_app_pane_cp2_g2_ParamLimits

0x4e02,	// (0x0006248c) cell_app_pane_cp2_g2

0x0001,

0xfb8e,	// (0x0006d218) cell_app_pane_cp2_g_ParamLimits

0xfb8e,	// (0x0006d218) cell_app_pane_cp2_g

0x4e0e,	// (0x00062498) cell_app_pane_cp2_t1_ParamLimits

0x4e0e,	// (0x00062498) cell_app_pane_cp2_t1

0x8059,	// (0x000656e3) grid_highlight_pane_cp1_ParamLimits

0x8059,	// (0x000656e3) grid_highlight_pane_cp1

0x0e26,	// (0x0005e4b0) cell_hwr_candidate_pane_cp1_ParamLimits

0x0e26,	// (0x0005e4b0) cell_hwr_candidate_pane_cp1

0x0dd9,	// (0x0005e463) fep_hwr_candidate_drop_down_list_pane_g1

0x0e45,	// (0x0005e4cf) fep_hwr_candidate_drop_down_list_pane_g2

0x0e52,	// (0x0005e4dc) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb93,	// (0x0006d21d) fep_hwr_candidate_drop_down_list_pane_g

0x0e5f,	// (0x0005e4e9) fep_hwr_candidate_drop_down_list_scroll_pane

0x0e68,	// (0x0005e4f2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0e68,	// (0x0005e4f2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0e75,	// (0x0005e4ff) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0e75,	// (0x0005e4ff) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0e82,	// (0x0005e50c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0e82,	// (0x0005e50c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0e8f,	// (0x0005e519) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0e8f,	// (0x0005e519) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0eaa,	// (0x0005e534) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0eaa,	// (0x0005e534) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0ec5,	// (0x0005e54f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0ec5,	// (0x0005e54f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0ee0,	// (0x0005e56a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0ee0,	// (0x0005e56a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0efb,	// (0x0005e585) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0efb,	// (0x0005e585) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9a,	// (0x0006d224) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9a,	// (0x0006d224) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e20,	// (0x000624aa) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e20,	// (0x000624aa) cell_vkb_candidate_pane_cp1

0x4998,	// (0x00062022) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4998,	// (0x00062022) fep_vkb_candidate_drop_down_list_pane_g1

0x4e40,	// (0x000624ca) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e40,	// (0x000624ca) fep_vkb_candidate_drop_down_list_pane_g2

0x4e4d,	// (0x000624d7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e4d,	// (0x000624d7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0006d235) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbab,	// (0x0006d235) fep_vkb_candidate_drop_down_list_pane_g

0x4e5a,	// (0x000624e4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e5a,	// (0x000624e4) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e67,	// (0x000624f1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e67,	// (0x000624f1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e74,	// (0x000624fe) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e74,	// (0x000624fe) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e80,	// (0x0006250a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e80,	// (0x0006250a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e8c,	// (0x00062516) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e8c,	// (0x00062516) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4ead,	// (0x00062537) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4ead,	// (0x00062537) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ece,	// (0x00062558) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ece,	// (0x00062558) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4eef,	// (0x00062579) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4eef,	// (0x00062579) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f10,	// (0x0006259a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f10,	// (0x0006259a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0006d23c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0006d23c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x91da,	// (0x00066864) title_pane_g1_ParamLimits

0x91ed,	// (0x00066877) title_pane_g2_ParamLimits

0xf529,	// (0x0006cbb3) title_pane_g_ParamLimits

0xbf83,	// (0x0006960d) aid_call2_pane

0xbf8b,	// (0x00069615) aid_call_pane

0xbf93,	// (0x0006961d) popup_clock_analogue_window_g1

0xbf93,	// (0x0006961d) popup_clock_analogue_window_g2

0xf228,	// (0x0006c8b2) popup_clock_analogue_window_g3

0xf231,	// (0x0006c8bb) popup_clock_analogue_window_g4

0x6fd1,	// (0x0006465b) popup_clock_analogue_window_g5

0x0004,

0xf6c9,	// (0x0006cd53) popup_clock_analogue_window_g

0xf239,	// (0x0006c8c3) popup_clock_analogue_window_t1

0xf247,	// (0x0006c8d1) clock_digital_number_pane_ParamLimits

0xf247,	// (0x0006c8d1) clock_digital_number_pane

0xf253,	// (0x0006c8dd) clock_digital_number_pane_cp02_ParamLimits

0xf253,	// (0x0006c8dd) clock_digital_number_pane_cp02

0xf25f,	// (0x0006c8e9) clock_digital_number_pane_cp03_ParamLimits

0xf25f,	// (0x0006c8e9) clock_digital_number_pane_cp03

0xf26b,	// (0x0006c8f5) clock_digital_number_pane_cp04_ParamLimits

0xf26b,	// (0x0006c8f5) clock_digital_number_pane_cp04

0xf277,	// (0x0006c901) clock_digital_separator_pane_ParamLimits

0xf277,	// (0x0006c901) clock_digital_separator_pane

0xf283,	// (0x0006c90d) popup_clock_digital_window_t1_ParamLimits

0xf283,	// (0x0006c90d) popup_clock_digital_window_t1

0x6fd1,	// (0x0006465b) clock_digital_number_pane_g1

0x6fd1,	// (0x0006465b) clock_digital_number_pane_g2

0x0001,

0xf6d4,	// (0x0006cd5e) clock_digital_number_pane_g

0x6fd1,	// (0x0006465b) clock_digital_separator_pane_g1

0x6fd1,	// (0x0006465b) clock_digital_separator_pane_g2

0x0001,

0xf6d4,	// (0x0006cd5e) clock_digital_separator_pane_g

0xad31,	// (0x000683bb) aid_fill_nsta_ParamLimits

0xae67,	// (0x000684f1) indicator_nsta_pane_ParamLimits

0x0505,	// (0x0005db8f) popup_clock_analogue_window

0x0505,	// (0x0005db8f) popup_clock_digital_window

0xcdde,	// (0x0006a468) grid_indicator_nsta_pane_ParamLimits

0x4049,	// (0x000616d3) clock_nsta_pane_t2

0x0001,

0xfa78,	// (0x0006d102) clock_nsta_pane_t

0xf209,	// (0x0006c893) aid_size_max_handle

0x9f6e,	// (0x000675f8) aid_size_min_handle

0xc3f1,	// (0x00069a7b) editor_scroll_pane

0x4f2b,	// (0x000625b5) ex_editor_pane

0x818b,	// (0x00065815) scroll_pane_cp13

0x8001,	// (0x0006568b) scroll_pane_cp14

0xbfc2,	// (0x0006964c) scroll_pane_cp36

0xa038,	// (0x000676c2) list_single_graphic_hl_pane_cp2_ParamLimits

0xa038,	// (0x000676c2) list_single_graphic_hl_pane_cp2

0xb504,	// (0x00068b8e) list_single_graphic_hl_pane_ParamLimits

0xb504,	// (0x00068b8e) list_single_graphic_hl_pane

0xb5f2,	// (0x00068c7c) aid_size_min_hl_cp1

0x4f33,	// (0x000625bd) list_highlight_pane_cp34_ParamLimits

0x4f33,	// (0x000625bd) list_highlight_pane_cp34

0x4f44,	// (0x000625ce) list_single_graphic_hl_pane_g1_ParamLimits

0x4f44,	// (0x000625ce) list_single_graphic_hl_pane_g1

0xb5fb,	// (0x00068c85) list_single_graphic_hl_pane_g2_ParamLimits

0xb5fb,	// (0x00068c85) list_single_graphic_hl_pane_g2

0xb5fb,	// (0x00068c85) list_single_graphic_hl_pane_g3_ParamLimits

0xb5fb,	// (0x00068c85) list_single_graphic_hl_pane_g3

0xc37c,	// (0x00069a06) list_single_graphic_hl_pane_g4_ParamLimits

0xc37c,	// (0x00069a06) list_single_graphic_hl_pane_g4

0xb607,	// (0x00068c91) list_single_graphic_hl_pane_g5_ParamLimits

0xb607,	// (0x00068c91) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0006d24d) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0006d24d) list_single_graphic_hl_pane_g

0xb61b,	// (0x00068ca5) list_single_graphic_hl_pane_t1_ParamLimits

0xb61b,	// (0x00068ca5) list_single_graphic_hl_pane_t1

0x4f51,	// (0x000625db) aid_size_min_hl_cp2

0x4f5a,	// (0x000625e4) list_highlight_pane_cp34_cp2_ParamLimits

0x4f5a,	// (0x000625e4) list_highlight_pane_cp34_cp2

0x4f44,	// (0x000625ce) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f44,	// (0x000625ce) list_single_graphic_hl_pane_g1_cp2

0x4f67,	// (0x000625f1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f67,	// (0x000625f1) list_single_graphic_hl_pane_g2_cp2

0xd1e9,	// (0x0006a873) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd1e9,	// (0x0006a873) list_single_graphic_hl_pane_g3_cp2

0xbee7,	// (0x00069571) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbee7,	// (0x00069571) list_single_graphic_hl_pane_g4_cp2

0x4f81,	// (0x0006260b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f81,	// (0x0006260b) list_single_graphic_hl_pane_g5_cp2

0xa450,	// (0x00067ada) control_pane_g4_ParamLimits

0xa450,	// (0x00067ada) control_pane_g4

0x8441,	// (0x00065acb) bg_popup_sub_pane_cp10_ParamLimits

0x4732,	// (0x00061dbc) list_choice_list_pane_ParamLimits

0x4741,	// (0x00061dcb) scroll_pane_cp23

0x7161,	// (0x000647eb) bg_popup_preview_window_pane_cp02_ParamLimits

0x4d50,	// (0x000623da) list_preview_fixed_pane_ParamLimits

0x4d66,	// (0x000623f0) list_preview_fixed_pane_cp_ParamLimits

0x4d66,	// (0x000623f0) list_preview_fixed_pane_cp

0x4d72,	// (0x000623fc) popup_preview_fixed_window_g1_ParamLimits

0x4d72,	// (0x000623fc) popup_preview_fixed_window_g1

0x4d7e,	// (0x00062408) popup_preview_fixed_window_g2_ParamLimits

0x4d7e,	// (0x00062408) popup_preview_fixed_window_g2

0x0002,

0xfb4b,	// (0x0006d1d5) popup_preview_fixed_window_g_ParamLimits

0xfb4b,	// (0x0006d1d5) popup_preview_fixed_window_g

0xf17d,	// (0x0006c807) aid_navi_side_left_pane_ParamLimits

0xf192,	// (0x0006c81c) aid_navi_side_right_pane_ParamLimits

0xf1aa,	// (0x0006c834) navi_icon_pane_stacon_ParamLimits

0xf1be,	// (0x0006c848) navi_navi_pane_stacon_ParamLimits

0xf1aa,	// (0x0006c834) navi_text_pane_stacon_ParamLimits

0xe7bf,	// (0x0006be49) main_text_info_pane

0x4fab,	// (0x00062635) listscroll_text_info_pane

0x4fb3,	// (0x0006263d) list_text_info_pane_ParamLimits

0x4fb3,	// (0x0006263d) list_text_info_pane

0x4fc2,	// (0x0006264c) scroll_pane_cp24_ParamLimits

0x4fc2,	// (0x0006264c) scroll_pane_cp24

0xd1f7,	// (0x0006a881) list_text_info_pane_t1_ParamLimits

0xd1f7,	// (0x0006a881) list_text_info_pane_t1

0xa5f8,	// (0x00067c82) popup_fast_swap2_window_ParamLimits

0xa5f8,	// (0x00067c82) popup_fast_swap2_window

0x5014,	// (0x0006269e) aid_size_cell_fast2

0x6fc7,	// (0x00064651) bg_popup_window_pane_cp17

0x501e,	// (0x000626a8) heading_pane_cp2

0x5026,	// (0x000626b0) listscroll_fast2_pane

0x502e,	// (0x000626b8) grid_fast2_pane

0x5038,	// (0x000626c2) listscroll_fast2_pane_g1

0x5040,	// (0x000626ca) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x0006d258) listscroll_fast2_pane_g

0x818b,	// (0x00065815) scroll_pane_cp26

0x504a,	// (0x000626d4) cell_fast2_pane_ParamLimits

0x504a,	// (0x000626d4) cell_fast2_pane

0x505f,	// (0x000626e9) cell_fast2_pane_g1

0x5068,	// (0x000626f2) cell_fast2_pane_g2

0x5071,	// (0x000626fb) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0006d25d) cell_fast2_pane_g

0x7f38,	// (0x000655c2) grid_highlight_pane_cp9

0xf4cd,	// (0x0006cb57) main_eswt_pane_ParamLimits

0xf4cd,	// (0x0006cb57) main_eswt_pane

0x4fd7,	// (0x00062661) list_single_text_info_pane

0x5079,	// (0x00062703) eswt_ctrl_button_pane

0x5079,	// (0x00062703) eswt_ctrl_canvas_pane

0xd213,	// (0x0006a89d) eswt_ctrl_combo_pane

0x5079,	// (0x00062703) eswt_ctrl_default_pane

0x5079,	// (0x00062703) eswt_ctrl_label_pane

0x5089,	// (0x00062713) eswt_ctrl_wait_pane

0xd21b,	// (0x0006a8a5) eswt_shell_pane

0x6fc7,	// (0x00064651) listscroll_eswt_app_pane

0x50b1,	// (0x0006273b) popup_eswt_tasktip_window_ParamLimits

0x50b1,	// (0x0006273b) popup_eswt_tasktip_window

0x1fde,	// (0x0005f668) bg_popup_window_pane_cp18

0x50ca,	// (0x00062754) eswt_control_pane_g1_ParamLimits

0x50ca,	// (0x00062754) eswt_control_pane_g1

0x50d7,	// (0x00062761) eswt_control_pane_g2_ParamLimits

0x50d7,	// (0x00062761) eswt_control_pane_g2

0x50e4,	// (0x0006276e) eswt_control_pane_g3_ParamLimits

0x50e4,	// (0x0006276e) eswt_control_pane_g3

0x50f1,	// (0x0006277b) eswt_control_pane_g4_ParamLimits

0x50f1,	// (0x0006277b) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x0006d264) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x0006d264) eswt_control_pane_g

0x8059,	// (0x000656e3) bg_button_pane_ParamLimits

0x8059,	// (0x000656e3) bg_button_pane

0x7f4d,	// (0x000655d7) common_borders_pane_copy2_ParamLimits

0x7f4d,	// (0x000655d7) common_borders_pane_copy2

0x50fe,	// (0x00062788) control_button_pane_g1_ParamLimits

0x50fe,	// (0x00062788) control_button_pane_g1

0x510a,	// (0x00062794) control_button_pane_g2_ParamLimits

0x510a,	// (0x00062794) control_button_pane_g2

0x5116,	// (0x000627a0) control_button_pane_g3_ParamLimits

0x5116,	// (0x000627a0) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0006d26d) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0006d26d) control_button_pane_g

0x512a,	// (0x000627b4) control_button_pane_t1

0x5138,	// (0x000627c2) control_button_pane_t2

0x0001,

0xfbea,	// (0x0006d274) control_button_pane_t

0x1f52,	// (0x0005f5dc) bg_button_pane_g1

0x1f62,	// (0x0005f5ec) bg_button_pane_g2

0x1f5a,	// (0x0005f5e4) bg_button_pane_g3

0x1f72,	// (0x0005f5fc) bg_button_pane_g4

0x1f6a,	// (0x0005f5f4) bg_button_pane_g5

0x1f7a,	// (0x0005f604) bg_button_pane_g6

0x1f82,	// (0x0005f60c) bg_button_pane_g7

0x1f92,	// (0x0005f61c) bg_button_pane_g8

0x1f8a,	// (0x0005f614) bg_button_pane_g9

0x0008,

0xf82b,	// (0x0006ceb5) bg_button_pane_g

0x46ed,	// (0x00061d77) common_borders_pane_ParamLimits

0x46ed,	// (0x00061d77) common_borders_pane

0x50ca,	// (0x00062754) eswt_control_pane_g1_copy1_ParamLimits

0x50ca,	// (0x00062754) eswt_control_pane_g1_copy1

0x50d7,	// (0x00062761) eswt_control_pane_g2_copy1_ParamLimits

0x50d7,	// (0x00062761) eswt_control_pane_g2_copy1

0x50e4,	// (0x0006276e) eswt_control_pane_g3_copy1_ParamLimits

0x50e4,	// (0x0006276e) eswt_control_pane_g3_copy1

0x50f1,	// (0x0006277b) eswt_control_pane_g4_copy1_ParamLimits

0x50f1,	// (0x0006277b) eswt_control_pane_g4_copy1

0x4728,	// (0x00061db2) bg_eswt_ctrl_canvas_pane_g1

0x46ed,	// (0x00061d77) common_borders_pane_cp2_ParamLimits

0x46ed,	// (0x00061d77) common_borders_pane_cp2

0x46ed,	// (0x00061d77) common_borders_pane_cp3_ParamLimits

0x46ed,	// (0x00061d77) common_borders_pane_cp3

0x5146,	// (0x000627d0) separator_horizontal_pane

0x514e,	// (0x000627d8) separator_vertical_pane

0x50ca,	// (0x00062754) eswt_control_pane_g1_copy2_ParamLimits

0x50ca,	// (0x00062754) eswt_control_pane_g1_copy2

0x50d7,	// (0x00062761) eswt_control_pane_g2_copy2_ParamLimits

0x50d7,	// (0x00062761) eswt_control_pane_g2_copy2

0x50e4,	// (0x0006276e) eswt_control_pane_g3_copy2_ParamLimits

0x50e4,	// (0x0006276e) eswt_control_pane_g3_copy2

0x50f1,	// (0x0006277b) eswt_control_pane_g4_copy2_ParamLimits

0x50f1,	// (0x0006277b) eswt_control_pane_g4_copy2

0x6fc7,	// (0x00064651) common_borders_pane_cp4

0x5157,	// (0x000627e1) separator_horizontal_pane_g1

0x5160,	// (0x000627ea) separator_horizontal_pane_g2

0x5169,	// (0x000627f3) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x0006d279) separator_horizontal_pane_g

0x50ca,	// (0x00062754) eswt_control_pane_g1_copy3_ParamLimits

0x50ca,	// (0x00062754) eswt_control_pane_g1_copy3

0x50d7,	// (0x00062761) eswt_control_pane_g2_copy3_ParamLimits

0x50d7,	// (0x00062761) eswt_control_pane_g2_copy3

0x50e4,	// (0x0006276e) eswt_control_pane_g3_copy3_ParamLimits

0x50e4,	// (0x0006276e) eswt_control_pane_g3_copy3

0x50f1,	// (0x0006277b) eswt_control_pane_g4_copy3_ParamLimits

0x50f1,	// (0x0006277b) eswt_control_pane_g4_copy3

0x6fc7,	// (0x00064651) common_borders_pane_cp5

0x5172,	// (0x000627fc) separator_vertical_pane_g1

0x517b,	// (0x00062805) separator_vertical_pane_g2

0x5184,	// (0x0006280e) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0006d280) separator_vertical_pane_g

0x50ca,	// (0x00062754) eswt_control_pane_g1_copy4_ParamLimits

0x50ca,	// (0x00062754) eswt_control_pane_g1_copy4

0x50d7,	// (0x00062761) eswt_control_pane_g2_copy4_ParamLimits

0x50d7,	// (0x00062761) eswt_control_pane_g2_copy4

0x50e4,	// (0x0006276e) eswt_control_pane_g3_copy4_ParamLimits

0x50e4,	// (0x0006276e) eswt_control_pane_g3_copy4

0x50f1,	// (0x0006277b) eswt_control_pane_g4_copy4_ParamLimits

0x50f1,	// (0x0006277b) eswt_control_pane_g4_copy4

0xd23b,	// (0x0006a8c5) eswt_ctrl_combo_button_pane

0xd243,	// (0x0006a8cd) eswt_ctrl_input_pane

0xd24b,	// (0x0006a8d5) popup_choice_list_window_cp70

0xd253,	// (0x0006a8dd) eswt_ctrl_input_pane_t1

0x6fc7,	// (0x00064651) input_focus_pane_cp70

0x46ed,	// (0x00061d77) bg_button_pane_cp70_ParamLimits

0x46ed,	// (0x00061d77) bg_button_pane_cp70

0xd261,	// (0x0006a8eb) eswt_ctrl_combo_button_pane_g1

0x51bb,	// (0x00062845) wait_bar_pane_cp70

0x1fde,	// (0x0005f668) bg_popup_window_pane_cp70_ParamLimits

0x1fde,	// (0x0005f668) bg_popup_window_pane_cp70

0x51c3,	// (0x0006284d) popup_eswt_tasktip_window_t1

0x51d9,	// (0x00062863) wait_bar_pane_cp71_ParamLimits

0x51d9,	// (0x00062863) wait_bar_pane_cp71

0x51e5,	// (0x0006286f) grid_eswt_app_pane

0x8372,	// (0x000659fc) scroll_pane_cp70

0xd269,	// (0x0006a8f3) cell_eswt_app_pane_ParamLimits

0xd269,	// (0x0006a8f3) cell_eswt_app_pane

0xd293,	// (0x0006a91d) cell_eswt_app_pane_g1_ParamLimits

0xd293,	// (0x0006a91d) cell_eswt_app_pane_g1

0xd2c2,	// (0x0006a94c) cell_eswt_app_pane_g2_ParamLimits

0xd2c2,	// (0x0006a94c) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x0006d287) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x0006d287) cell_eswt_app_pane_g

0xd2e6,	// (0x0006a970) cell_eswt_app_pane_t1_ParamLimits

0xd2e6,	// (0x0006a970) cell_eswt_app_pane_t1

0x52a3,	// (0x0006292d) grid_highlight_pane_cp70_ParamLimits

0x52a3,	// (0x0006292d) grid_highlight_pane_cp70

0xc2f7,	// (0x00069981) set_content_pane_g1

0xa3e2,	// (0x00067a6c) status_small_volume_pane

0xb631,	// (0x00068cbb) status_small_volume_pane_g1

0xb639,	// (0x00068cc3) volume_small2_pane

0xb642,	// (0x00068ccc) volume_small2_pane_g1

0xb64b,	// (0x00068cd5) volume_small2_pane_g2

0xb654,	// (0x00068cde) volume_small2_pane_g3

0xb65d,	// (0x00068ce7) volume_small2_pane_g4

0xb666,	// (0x00068cf0) volume_small2_pane_g5

0xb66f,	// (0x00068cf9) volume_small2_pane_g6

0xb678,	// (0x00068d02) volume_small2_pane_g7

0xb681,	// (0x00068d0b) volume_small2_pane_g8

0xb68a,	// (0x00068d14) volume_small2_pane_g9

0xb693,	// (0x00068d1d) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0006d28c) volume_small2_pane_g

0x4ae0,	// (0x0006216a) fep_vkb_top_text_pane_g1_ParamLimits

0xd15b,	// (0x0006a7e5) fep_vkb_top_text_pane_t1_ParamLimits

0x4d8a,	// (0x00062414) popup_preview_fixed_window_g3_ParamLimits

0x4d8a,	// (0x00062414) popup_preview_fixed_window_g3

0xac6f,	// (0x000682f9) popup_toolbar_trans_pane

0xca7b,	// (0x0006a105) aid_height_set_list_ParamLimits

0x332d,	// (0x000609b7) aid_size_parent_ParamLimits

0x8441,	// (0x00065acb) list_highlight_pane_cp2_ParamLimits

0xc2f7,	// (0x00069981) set_content_pane_g1_ParamLimits

0xcbe3,	// (0x0006a26d) list_single_image_pane_ParamLimits

0xcbe3,	// (0x0006a26d) list_single_image_pane

0xd318,	// (0x0006a9a2) aid_size_cell_image_ParamLimits

0xd318,	// (0x0006a9a2) aid_size_cell_image

0xd325,	// (0x0006a9af) grid_single_image_pane_ParamLimits

0xd325,	// (0x0006a9af) grid_single_image_pane

0xd1bf,	// (0x0006a849) list_single_image_pane_g1_ParamLimits

0xd1bf,	// (0x0006a849) list_single_image_pane_g1

0x4db8,	// (0x00062442) list_single_image_pane_g2_ParamLimits

0x4db8,	// (0x00062442) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0006d2a1) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0006d2a1) list_single_image_pane_g

0x52c8,	// (0x00062952) list_single_image_pane_t1_ParamLimits

0x52c8,	// (0x00062952) list_single_image_pane_t1

0xd331,	// (0x0006a9bb) cell_image_list_pane_ParamLimits

0xd331,	// (0x0006a9bb) cell_image_list_pane

0xd345,	// (0x0006a9cf) cell_image_list_pane_g1

0xd34e,	// (0x0006a9d8) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x0006d2a6) cell_image_list_pane_g

0xd357,	// (0x0006a9e1) aid_size_cell_tb_trans_pane

0x8059,	// (0x000656e3) bg_tb_trans_pane

0xd369,	// (0x0006a9f3) grid_tb_trans_pane

0x1f52,	// (0x0005f5dc) bg_tb_trans_pane_g1

0x1f62,	// (0x0005f5ec) bg_tb_trans_pane_g2

0x1f5a,	// (0x0005f5e4) bg_tb_trans_pane_g3

0x1f72,	// (0x0005f5fc) bg_tb_trans_pane_g4

0x1f6a,	// (0x0005f5f4) bg_tb_trans_pane_g5

0x1f92,	// (0x0005f61c) bg_tb_trans_pane_g6

0x1f8a,	// (0x0005f614) bg_tb_trans_pane_g7

0x1f7a,	// (0x0005f604) bg_tb_trans_pane_g8

0x1f82,	// (0x0005f60c) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x0006d2ab) bg_tb_trans_pane_g

0xd37d,	// (0x0006aa07) cell_toolbar_trans_pane_ParamLimits

0xd37d,	// (0x0006aa07) cell_toolbar_trans_pane

0x4728,	// (0x00061db2) cell_toolbar_trans_pane_g1

0xcea7,	// (0x0006a531) list_form2_midp_pane_t1

0xceb5,	// (0x0006a53f) list_form2_midp_pane_t2

0x0001,

0xfabe,	// (0x0006d148) list_form2_midp_pane_t

0x423a,	// (0x000618c4) scroll_pane_cp51_ParamLimits

0x43f6,	// (0x00061a80) form2_midp_wait_pane_g1

0x43ff,	// (0x00061a89) form2_midp_wait_pane_g2

0x4408,	// (0x00061a92) form2_midp_wait_pane_g3

0x0002,

0xfad3,	// (0x0006d15d) form2_midp_wait_pane_g

0x7029,	// (0x000646b3) list_highlight_pane_cp21_ParamLimits

0x4450,	// (0x00061ada) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x445f,	// (0x00061ae9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x34fd,	// (0x00060b87) list_single_2graphic_im_pane_ParamLimits

0x34fd,	// (0x00060b87) list_single_2graphic_im_pane

0xd3a3,	// (0x0006aa2d) list_single_2graphic_im_pane_g1_ParamLimits

0xd3a3,	// (0x0006aa2d) list_single_2graphic_im_pane_g1

0xd3b4,	// (0x0006aa3e) list_single_2graphic_im_pane_g2_ParamLimits

0xd3b4,	// (0x0006aa3e) list_single_2graphic_im_pane_g2

0xd3c0,	// (0x0006aa4a) list_single_2graphic_im_pane_g3_ParamLimits

0xd3c0,	// (0x0006aa4a) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x0006d2be) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x0006d2be) list_single_2graphic_im_pane_g

0xd3d4,	// (0x0006aa5e) list_single_2graphic_im_pane_t1_ParamLimits

0xd3d4,	// (0x0006aa5e) list_single_2graphic_im_pane_t1

0x4d96,	// (0x00062420) list_single_graphic_2heading_pane_fp_ParamLimits

0x4d96,	// (0x00062420) list_single_graphic_2heading_pane_fp

0xeda0,	// (0x0006c42a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeda0,	// (0x0006c42a) list_single_graphic_2heading_pane_fp_g1

0x4dac,	// (0x00062436) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4dac,	// (0x00062436) list_single_graphic_2heading_pane_fp_g2

0xd1bf,	// (0x0006a849) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd1bf,	// (0x0006a849) list_single_graphic_2heading_pane_fp_g3

0x4db8,	// (0x00062442) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4db8,	// (0x00062442) list_single_graphic_2heading_pane_fp_g4

0x4dcc,	// (0x00062456) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4dcc,	// (0x00062456) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006d1e5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006d1e5) list_single_graphic_2heading_pane_fp_g

0xeebe,	// (0x0006c548) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xeebe,	// (0x0006c548) list_single_graphic_2heading_pane_fp_t1

0xedd8,	// (0x0006c462) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xedd8,	// (0x0006c462) list_single_graphic_2heading_pane_fp_t2

0xeed4,	// (0x0006c55e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xeed4,	// (0x0006c55e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x0006d2c7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x0006d2c7) list_single_graphic_2heading_pane_fp_t

0x47b4,	// (0x00061e3e) fep_hwr_write_pane_g5_ParamLimits

0x47b4,	// (0x00061e3e) fep_hwr_write_pane_g5

0x47c0,	// (0x00061e4a) fep_hwr_write_pane_g6_ParamLimits

0x47c0,	// (0x00061e4a) fep_hwr_write_pane_g6

0xd21b,	// (0x0006a8a5) eswt_shell_pane_ParamLimits

0x1fde,	// (0x0005f668) bg_popup_window_pane_cp18_ParamLimits

0x50c2,	// (0x0006274c) heading_pane_cp70

0x51c3,	// (0x0006284d) popup_eswt_tasktip_window_t1_ParamLimits

0xad8c,	// (0x00068416) aid_touch_tab_arrow_left

0xada2,	// (0x0006842c) aid_touch_tab_arrow_right

0x9205,	// (0x0006688f) title_pane_g3_ParamLimits

0x9205,	// (0x0006688f) title_pane_g3

0x8021,	// (0x000656ab) set_value_pane_g1

0xac6f,	// (0x000682f9) popup_toolbar_trans_pane_ParamLimits

0xd357,	// (0x0006a9e1) aid_size_cell_tb_trans_pane_ParamLimits

0x8059,	// (0x000656e3) bg_tb_trans_pane_ParamLimits

0xd369,	// (0x0006a9f3) grid_tb_trans_pane_ParamLimits

0x7161,	// (0x000647eb) cont_note_pane_ParamLimits

0x7161,	// (0x000647eb) cont_note_pane

0x7f4d,	// (0x000655d7) cont_snote2_single_text_pane_ParamLimits

0x7f4d,	// (0x000655d7) cont_snote2_single_text_pane

0x7f4d,	// (0x000655d7) cont_snote2_single_graphic_pane_ParamLimits

0x7f4d,	// (0x000655d7) cont_snote2_single_graphic_pane

0x25f8,	// (0x0005fc82) cont_note_wait_pane_ParamLimits

0x25f8,	// (0x0005fc82) cont_note_wait_pane

0x25f8,	// (0x0005fc82) cont_note_image_pane_ParamLimits

0x25f8,	// (0x0005fc82) cont_note_image_pane

0x53be,	// (0x00062a48) popup_note2_window_g1_ParamLimits

0x53be,	// (0x00062a48) popup_note2_window_g1

0xd412,	// (0x0006aa9c) popup_note2_window_t1_ParamLimits

0xd412,	// (0x0006aa9c) popup_note2_window_t1

0xd457,	// (0x0006aae1) popup_note2_window_t2_ParamLimits

0xd457,	// (0x0006aae1) popup_note2_window_t2

0xd49c,	// (0x0006ab26) popup_note2_window_t3_ParamLimits

0xd49c,	// (0x0006ab26) popup_note2_window_t3

0x54be,	// (0x00062b48) popup_note2_window_t4_ParamLimits

0x54be,	// (0x00062b48) popup_note2_window_t4

0x71e5,	// (0x0006486f) popup_note2_window_t5_ParamLimits

0x71e5,	// (0x0006486f) popup_note2_window_t5

0x0004,

0xfc49,	// (0x0006d2d3) popup_note2_window_t_ParamLimits

0xfc49,	// (0x0006d2d3) popup_note2_window_t

0x54ed,	// (0x00062b77) popup_note2_image_window_g1_ParamLimits

0x54ed,	// (0x00062b77) popup_note2_image_window_g1

0xd4e1,	// (0x0006ab6b) popup_note2_image_window_g2_ParamLimits

0xd4e1,	// (0x0006ab6b) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x0006d2de) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x0006d2de) popup_note2_image_window_g

0x550b,	// (0x00062b95) popup_note2_image_window_t1_ParamLimits

0x550b,	// (0x00062b95) popup_note2_image_window_t1

0x5523,	// (0x00062bad) popup_note2_image_window_t2_ParamLimits

0x5523,	// (0x00062bad) popup_note2_image_window_t2

0x553b,	// (0x00062bc5) popup_note2_image_window_t3_ParamLimits

0x553b,	// (0x00062bc5) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x0006d2e3) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x0006d2e3) popup_note2_image_window_t

0x2606,	// (0x0005fc90) popup_note2_wait_window_g1_ParamLimits

0x2606,	// (0x0005fc90) popup_note2_wait_window_g1

0x2612,	// (0x0005fc9c) popup_note2_wait_window_g2_ParamLimits

0x2612,	// (0x0005fc9c) popup_note2_wait_window_g2

0x261e,	// (0x0005fca8) popup_note2_wait_window_g3_ParamLimits

0x261e,	// (0x0005fca8) popup_note2_wait_window_g3

0x0002,

0xf80d,	// (0x0006ce97) popup_note2_wait_window_g_ParamLimits

0xf80d,	// (0x0006ce97) popup_note2_wait_window_g

0x5557,	// (0x00062be1) popup_note2_wait_window_t1_ParamLimits

0x5557,	// (0x00062be1) popup_note2_wait_window_t1

0x5575,	// (0x00062bff) popup_note2_wait_window_t2_ParamLimits

0x5575,	// (0x00062bff) popup_note2_wait_window_t2

0x5593,	// (0x00062c1d) popup_note2_wait_window_t3_ParamLimits

0x5593,	// (0x00062c1d) popup_note2_wait_window_t3

0x55a5,	// (0x00062c2f) popup_note2_wait_window_t4_ParamLimits

0x55a5,	// (0x00062c2f) popup_note2_wait_window_t4

0x0003,

0xfc60,	// (0x0006d2ea) popup_note2_wait_window_t_ParamLimits

0xfc60,	// (0x0006d2ea) popup_note2_wait_window_t

0x55b7,	// (0x00062c41) wait_bar2_pane_ParamLimits

0x55b7,	// (0x00062c41) wait_bar2_pane

0x55cf,	// (0x00062c59) popup_snote2_single_text_window_g1_ParamLimits

0x55cf,	// (0x00062c59) popup_snote2_single_text_window_g1

0x55f7,	// (0x00062c81) popup_snote2_single_text_window_t1_ParamLimits

0x55f7,	// (0x00062c81) popup_snote2_single_text_window_t1

0x5643,	// (0x00062ccd) popup_snote2_single_text_window_t2_ParamLimits

0x5643,	// (0x00062ccd) popup_snote2_single_text_window_t2

0x568f,	// (0x00062d19) popup_snote2_single_text_window_t3_ParamLimits

0x568f,	// (0x00062d19) popup_snote2_single_text_window_t3

0x56d0,	// (0x00062d5a) popup_snote2_single_text_window_t4_ParamLimits

0x56d0,	// (0x00062d5a) popup_snote2_single_text_window_t4

0x5706,	// (0x00062d90) popup_snote2_single_text_window_t5_ParamLimits

0x5706,	// (0x00062d90) popup_snote2_single_text_window_t5

0x0004,

0xfc69,	// (0x0006d2f3) popup_snote2_single_text_window_t_ParamLimits

0xfc69,	// (0x0006d2f3) popup_snote2_single_text_window_t

0xd4f3,	// (0x0006ab7d) popup_snote2_single_graphic_window_g1_ParamLimits

0xd4f3,	// (0x0006ab7d) popup_snote2_single_graphic_window_g1

0x5759,	// (0x00062de3) popup_snote2_single_graphic_window_g2_ParamLimits

0x5759,	// (0x00062de3) popup_snote2_single_graphic_window_g2

0x0001,

0xfc74,	// (0x0006d2fe) popup_snote2_single_graphic_window_g_ParamLimits

0xfc74,	// (0x0006d2fe) popup_snote2_single_graphic_window_g

0x5781,	// (0x00062e0b) popup_snote2_single_graphic_window_t1_ParamLimits

0x5781,	// (0x00062e0b) popup_snote2_single_graphic_window_t1

0x57cd,	// (0x00062e57) popup_snote2_single_graphic_window_t2_ParamLimits

0x57cd,	// (0x00062e57) popup_snote2_single_graphic_window_t2

0x568f,	// (0x00062d19) popup_snote2_single_graphic_window_t3_ParamLimits

0x568f,	// (0x00062d19) popup_snote2_single_graphic_window_t3

0x56d0,	// (0x00062d5a) popup_snote2_single_graphic_window_t4_ParamLimits

0x56d0,	// (0x00062d5a) popup_snote2_single_graphic_window_t4

0x5706,	// (0x00062d90) popup_snote2_single_graphic_window_t5_ParamLimits

0x5706,	// (0x00062d90) popup_snote2_single_graphic_window_t5

0x0004,

0xfc79,	// (0x0006d303) popup_snote2_single_graphic_window_t_ParamLimits

0xfc79,	// (0x0006d303) popup_snote2_single_graphic_window_t

0x40f7,	// (0x00061781) clock_nsta_pane_cp2_t1

0x40f7,	// (0x00061781) clock_nsta_pane_cp2_t2

0x0001,

0xfa94,	// (0x0006d11e) clock_nsta_pane_cp2_t

0xe870,	// (0x0006befa) form_field_data_wide_pane_g1_ParamLimits

0x8067,	// (0x000656f1) form_field_data_wide_pane_g2_ParamLimits

0x8067,	// (0x000656f1) form_field_data_wide_pane_g2

0x8073,	// (0x000656fd) form_field_data_wide_pane_g3_ParamLimits

0x8073,	// (0x000656fd) form_field_data_wide_pane_g3

0x0002,

0xf64c,	// (0x0006ccd6) form_field_data_wide_pane_g_ParamLimits

0xf64c,	// (0x0006ccd6) form_field_data_wide_pane_g

0xcdc8,	// (0x0006a452) grid_touch_3_pane_ParamLimits

0xcdc8,	// (0x0006a452) grid_touch_3_pane

0xd51b,	// (0x0006aba5) cell_touch_3_pane_ParamLimits

0xd51b,	// (0x0006aba5) cell_touch_3_pane

0x4728,	// (0x00061db2) cell_touch_3_pane_g1

0x4728,	// (0x00061db2) cell_touch_3_pane_g2

0x0001,

0xfb19,	// (0x0006d1a3) cell_touch_3_pane_g

0x7217,	// (0x000648a1) cont_query_data_pane

0x721f,	// (0x000648a9) cont_query_data_pane_cp1

0x5847,	// (0x00062ed1) button_value_adjust_pane_cp7

0x584f,	// (0x00062ed9) query_popup_pane_cp3

0xbff4,	// (0x0006967e) bg_popup_sub_pane_cp22_ParamLimits

0xa0d7,	// (0x00067761) navi_navi_volume_pane_cp2

0xa0e6,	// (0x00067770) popup_side_volume_key_window_g2

0xa0f5,	// (0x0006777f) popup_side_volume_key_window_g3

0x0002,

0xf6e2,	// (0x0006cd6c) popup_side_volume_key_window_g

0xa104,	// (0x0006778e) popup_side_volume_key_window_t2

0x0001,

0xf6e9,	// (0x0006cd73) popup_side_volume_key_window_t

0xa255,	// (0x000678df) popup_side_volume_key_window_ParamLimits

0x9988,	// (0x00067012) list_double_graphic_pane_g4_ParamLimits

0x9988,	// (0x00067012) list_double_graphic_pane_g4

0xcbcf,	// (0x0006a259) list_single_2heading_msg_pane_ParamLimits

0xcbcf,	// (0x0006a259) list_single_2heading_msg_pane

0xd564,	// (0x0006abee) list_single_2heading_msg_pane_g1_ParamLimits

0xd564,	// (0x0006abee) list_single_2heading_msg_pane_g1

0xd570,	// (0x0006abfa) list_single_2heading_msg_pane_g2_ParamLimits

0xd570,	// (0x0006abfa) list_single_2heading_msg_pane_g2

0xd583,	// (0x0006ac0d) list_single_2heading_msg_pane_g3_ParamLimits

0xd583,	// (0x0006ac0d) list_single_2heading_msg_pane_g3

0xd58f,	// (0x0006ac19) list_single_2heading_msg_pane_g4_ParamLimits

0xd58f,	// (0x0006ac19) list_single_2heading_msg_pane_g4

0x0003,

0xfc84,	// (0x0006d30e) list_single_2heading_msg_pane_g_ParamLimits

0xfc84,	// (0x0006d30e) list_single_2heading_msg_pane_g

0xb69c,	// (0x00068d26) list_single_2heading_msg_pane_t1_ParamLimits

0xb69c,	// (0x00068d26) list_single_2heading_msg_pane_t1

0xb6c4,	// (0x00068d4e) list_single_2heading_msg_pane_t2_ParamLimits

0xb6c4,	// (0x00068d4e) list_single_2heading_msg_pane_t2

0xb72f,	// (0x00068db9) list_single_2heading_msg_pane_t3_ParamLimits

0xb72f,	// (0x00068db9) list_single_2heading_msg_pane_t3

0xeef4,	// (0x0006c57e) list_single_2heading_msg_pane_t4_ParamLimits

0xeef4,	// (0x0006c57e) list_single_2heading_msg_pane_t4

0x0003,

0xfc8d,	// (0x0006d317) list_single_2heading_msg_pane_t_ParamLimits

0xfc8d,	// (0x0006d317) list_single_2heading_msg_pane_t

0x6fe5,	// (0x0006466f) title_pane_g4_ParamLimits

0x6fe5,	// (0x0006466f) title_pane_g4

0xe91c,	// (0x0006bfa6) title_pane_stacon_g3_ParamLimits

0xe91c,	// (0x0006bfa6) title_pane_stacon_g3

0x5381,	// (0x00062a0b) list_single_2graphic_im_pane_g4_ParamLimits

0x5381,	// (0x00062a0b) list_single_2graphic_im_pane_g4

0xc920,	// (0x00069faa) popup_side_volume_key_window_cp

0x38a9,	// (0x00060f33) main_idle_act2_pane_t1

0x0595,	// (0x0005dc1f) toolbar_button_pane_g10

0x980e,	// (0x00066e98) popup_toolbar_window_cp1

0x40e8,	// (0x00061772) clock_nsta_pane_cp_t1

0x40e8,	// (0x00061772) clock_nsta_pane_cp_t2

0x0001,

0xfa8f,	// (0x0006d119) clock_nsta_pane_cp_t

0xa0d7,	// (0x00067761) navi_navi_volume_pane_cp2_ParamLimits

0xf2a2,	// (0x0006c92c) popup_side_volume_key_window_g1_ParamLimits

0xa0e6,	// (0x00067770) popup_side_volume_key_window_g2_ParamLimits

0xa0f5,	// (0x0006777f) popup_side_volume_key_window_g3_ParamLimits

0xf6e2,	// (0x0006cd6c) popup_side_volume_key_window_g_ParamLimits

0x0b82,	// (0x0005e20c) fep_hwr_aid_pane

0x0c29,	// (0x0005e2b3) bg_fep_hwr_top_pane_g4_ParamLimits

0x4784,	// (0x00061e0e) fep_hwr_top_pane_g1_ParamLimits

0x4796,	// (0x00061e20) fep_hwr_top_pane_g2_ParamLimits

0x0c49,	// (0x0005e2d3) fep_hwr_top_pane_g3_ParamLimits

0xfae4,	// (0x0006d16e) fep_hwr_top_pane_g_ParamLimits

0x0c5e,	// (0x0005e2e8) fep_hwr_top_text_pane_ParamLimits

0x2e02,	// (0x0006048c) aid_touch_tab_arrow_arrow_2

0x2e0b,	// (0x00060495) aid_touch_tab_arrow_left_2

0x0b96,	// (0x0005e220) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0bcd,	// (0x0005e257) fep_hwr_prediction_pane

0x48ef,	// (0x00061f79) fep_vkb_prediction_pane

0xd13b,	// (0x0006a7c5) fep_vkb_side_pane_g3_ParamLimits

0xd13b,	// (0x0006a7c5) fep_vkb_side_pane_g3

0x0dd9,	// (0x0005e463) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0e45,	// (0x0005e4cf) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0e52,	// (0x0005e4dc) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb93,	// (0x0006d21d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x105c,	// (0x0005e6e6) fep_hwr_prediction_pane_g1

0x1066,	// (0x0005e6f0) fep_hwr_prediction_pane_g2

0x106e,	// (0x0005e6f8) fep_hwr_prediction_pane_g3

0x1076,	// (0x0005e700) fep_hwr_prediction_pane_g4

0x0003,

0xfc96,	// (0x0006d320) fep_hwr_prediction_pane_g

0x5874,	// (0x00062efe) fep_vkb_prediction_pane_g1

0x587e,	// (0x00062f08) fep_vkb_prediction_pane_g2

0x5886,	// (0x00062f10) fep_vkb_prediction_pane_g3

0x588e,	// (0x00062f18) fep_vkb_prediction_pane_g4

0x0003,

0xfc9f,	// (0x0006d329) fep_vkb_prediction_pane_g

0xb456,	// (0x00068ae0) slider_set_pane_g3

0xb46a,	// (0x00068af4) slider_set_pane_g4

0xb482,	// (0x00068b0c) slider_set_pane_g5

0xb456,	// (0x00068ae0) slider_set_pane_g6

0xb498,	// (0x00068b22) slider_set_pane_g7

0x348e,	// (0x00060b18) slider_form_pane_g3

0x3497,	// (0x00060b21) slider_form_pane_g4

0x349f,	// (0x00060b29) slider_form_pane_g5

0x348e,	// (0x00060b18) slider_form_pane_g6

0xcbc6,	// (0x0006a250) slider_form_pane_g7

0x3b55,	// (0x000611df) slider_set_pane_vc_g3

0x3b5e,	// (0x000611e8) slider_set_pane_vc_g4

0x3b67,	// (0x000611f1) slider_set_pane_vc_g5

0x3b55,	// (0x000611df) slider_set_pane_vc_g6

0x3b70,	// (0x000611fa) slider_set_pane_vc_g7

0x3da6,	// (0x00061430) slider_form_pane_vc_g1

0x3daf,	// (0x00061439) slider_form_pane_vc_g2

0x3db8,	// (0x00061442) slider_form_pane_vc_g3

0x3da6,	// (0x00061430) slider_form_pane_vc_g4

0x3dc1,	// (0x0006144b) slider_form_pane_vc_g5

0x0004,

0xfa61,	// (0x0006d0eb) slider_form_pane_vc_g

0xe7bf,	// (0x0006be49) main_idle_act3_pane

0x5896,	// (0x00062f20) ai3_links_pane

0xd5a7,	// (0x0006ac31) popup_ai3_data_window_ParamLimits

0xd5a7,	// (0x0006ac31) popup_ai3_data_window

0x6fc7,	// (0x00064651) grid_ai3_links_pane

0xd5bf,	// (0x0006ac49) cell_ai3_links_pane_ParamLimits

0xd5bf,	// (0x0006ac49) cell_ai3_links_pane

0x58cf,	// (0x00062f59) bg_popup_sub_pane_cp11

0x58dc,	// (0x00062f66) cell_ai3_links_pane_g1

0x6fc7,	// (0x00064651) bg_popup_sub_pane_cp12

0x5901,	// (0x00062f8b) heading_ai3_data_pane

0x5909,	// (0x00062f93) list_ai3_gene_pane

0x5915,	// (0x00062f9f) popup_ai3_data_window_g1

0x591d,	// (0x00062fa7) heading_ai3_data_pane_g1

0x5925,	// (0x00062faf) heading_ai3_data_pane_t1

0xd5d9,	// (0x0006ac63) list_double_ai3_gene_pane_ParamLimits

0xd5d9,	// (0x0006ac63) list_double_ai3_gene_pane

0x5940,	// (0x00062fca) list_single_ai3_gene_pane_ParamLimits

0x5940,	// (0x00062fca) list_single_ai3_gene_pane

0x46ed,	// (0x00061d77) list_highlight_pane_cp7_ParamLimits

0x46ed,	// (0x00061d77) list_highlight_pane_cp7

0x594d,	// (0x00062fd7) list_single_a13_gene_pane_t1_ParamLimits

0x594d,	// (0x00062fd7) list_single_a13_gene_pane_t1

0x5964,	// (0x00062fee) list_single_ai3_gene_pane_g1

0x596d,	// (0x00062ff7) list_single_ai3_gene_pane_g2

0x0001,

0xfca8,	// (0x0006d332) list_single_ai3_gene_pane_g

0x5975,	// (0x00062fff) list_double_ai3_gene_pane_g1_ParamLimits

0x5975,	// (0x00062fff) list_double_ai3_gene_pane_g1

0xd5e6,	// (0x0006ac70) list_double_ai3_gene_pane_t1_ParamLimits

0xd5e6,	// (0x0006ac70) list_double_ai3_gene_pane_t1

0x599d,	// (0x00063027) list_double_ai3_gene_pane_t2_ParamLimits

0x599d,	// (0x00063027) list_double_ai3_gene_pane_t2

0x59b2,	// (0x0006303c) list_double_ai3_gene_pane_t3_ParamLimits

0x59b2,	// (0x0006303c) list_double_ai3_gene_pane_t3

0x0002,

0xfcad,	// (0x0006d337) list_double_ai3_gene_pane_t_ParamLimits

0xfcad,	// (0x0006d337) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xeeea,	// (0x0006c574) aid_size_min_col_2

0xd54e,	// (0x0006abd8) aid_size_min_msg_ParamLimits

0xd54e,	// (0x0006abd8) aid_size_min_msg

0xd14f,	// (0x0006a7d9) fep_vkb_top_text_pane_g2_ParamLimits

0xd14f,	// (0x0006a7d9) fep_vkb_top_text_pane_g2

0x0001,

0xfb14,	// (0x0006d19e) fep_vkb_top_text_pane_g_ParamLimits

0xfb14,	// (0x0006d19e) fep_vkb_top_text_pane_g

0xe7bf,	// (0x0006be49) main_hc_apps_shell_pane

0x59cf,	// (0x00063059) grid_hc_apps_pane_ParamLimits

0x59cf,	// (0x00063059) grid_hc_apps_pane

0x59e1,	// (0x0006306b) list_hc_apps_pane

0x59e9,	// (0x00063073) scroll_pane_cp37_ParamLimits

0x59e9,	// (0x00063073) scroll_pane_cp37

0xd602,	// (0x0006ac8c) cell_hc_apps_pane_ParamLimits

0xd602,	// (0x0006ac8c) cell_hc_apps_pane

0xd6c0,	// (0x0006ad4a) cell_hc_apps_pane_g1_ParamLimits

0xd6c0,	// (0x0006ad4a) cell_hc_apps_pane_g1

0x5ad3,	// (0x0006315d) cell_hc_apps_pane_g2_ParamLimits

0x5ad3,	// (0x0006315d) cell_hc_apps_pane_g2

0x5aef,	// (0x00063179) cell_hc_apps_pane_g3_ParamLimits

0x5aef,	// (0x00063179) cell_hc_apps_pane_g3

0x0002,

0xfcb4,	// (0x0006d33e) cell_hc_apps_pane_g_ParamLimits

0xfcb4,	// (0x0006d33e) cell_hc_apps_pane_g

0xd6ec,	// (0x0006ad76) cell_hc_apps_pane_t1_ParamLimits

0xd6ec,	// (0x0006ad76) cell_hc_apps_pane_t1

0x7161,	// (0x000647eb) grid_highlight_pane_cp10_ParamLimits

0x7161,	// (0x000647eb) grid_highlight_pane_cp10

0xd72a,	// (0x0006adb4) list_single_hc_apps_pane_ParamLimits

0xd72a,	// (0x0006adb4) list_single_hc_apps_pane

0xd75a,	// (0x0006ade4) list_single_hc_apps_pane_g1

0xd773,	// (0x0006adfd) list_single_hc_apps_pane_g2

0x0001,

0xfcbb,	// (0x0006d345) list_single_hc_apps_pane_g

0xd78c,	// (0x0006ae16) list_single_hc_apps_pane_g2_copy1

0xb79d,	// (0x00068e27) list_single_hc_apps_pane_t1

0x7029,	// (0x000646b3) bg_set_opt_pane_cp_ParamLimits

0x92d9,	// (0x00066963) setting_slider_pane_t1_ParamLimits

0x92f2,	// (0x0006697c) setting_slider_pane_t2_ParamLimits

0x930c,	// (0x00066996) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0006cbc3) setting_slider_pane_t_ParamLimits

0x9324,	// (0x000669ae) slider_set_pane_ParamLimits

0xf4a6,	// (0x0006cb30) control_pane_g5_ParamLimits

0xf4a6,	// (0x0006cb30) control_pane_g5

0xca48,	// (0x0006a0d2) slider_set_pane_g1_ParamLimits

0x08b7,	// (0x0005df41) slider_set_pane_g2_ParamLimits

0xb456,	// (0x00068ae0) slider_set_pane_g3_ParamLimits

0xb46a,	// (0x00068af4) slider_set_pane_g4_ParamLimits

0xb482,	// (0x00068b0c) slider_set_pane_g5_ParamLimits

0xb456,	// (0x00068ae0) slider_set_pane_g6_ParamLimits

0xb498,	// (0x00068b22) slider_set_pane_g7_ParamLimits

0xf929,	// (0x0006cfb3) slider_set_pane_g_ParamLimits

0xc2a2,	// (0x0006992c) navi_icon_text_pane_ParamLimits

0xad55,	// (0x000683df) aid_fill_nsta_2_ParamLimits

0xad8c,	// (0x00068416) aid_touch_tab_arrow_left_ParamLimits

0xada2,	// (0x0006842c) aid_touch_tab_arrow_right_ParamLimits

0xae3d,	// (0x000684c7) clock_nsta_pane_ParamLimits

0x2de4,	// (0x0006046e) navi_icon_pane_g1_ParamLimits

0x2df0,	// (0x0006047a) navi_text_pane_t1_ParamLimits

0x41f8,	// (0x00061882) navi_icon_text_pane_g1_ParamLimits

0x4204,	// (0x0006188e) navi_icon_text_pane_t1_ParamLimits

0xd75a,	// (0x0006ade4) list_single_hc_apps_pane_g1_ParamLimits

0xd773,	// (0x0006adfd) list_single_hc_apps_pane_g2_ParamLimits

0xfcbb,	// (0x0006d345) list_single_hc_apps_pane_g_ParamLimits

0xd78c,	// (0x0006ae16) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb79d,	// (0x00068e27) list_single_hc_apps_pane_t1_ParamLimits

0x910a,	// (0x00066794) popup_toolbar2_fixed_window_ParamLimits

0x910a,	// (0x00066794) popup_toolbar2_fixed_window

0xac65,	// (0x000682ef) popup_toolbar2_float_window

0x6fc7,	// (0x00064651) bg_popup_sub_pane_cp27

0x5bcd,	// (0x00063257) grid_toolbar2_float_pane

0x6fc7,	// (0x00064651) bg_popup_sub_pane_cp26

0x5bcd,	// (0x00063257) grid_toolbar2_fixed_pane

0xd7a8,	// (0x0006ae32) cell_toolbar2_fixed_pane_ParamLimits

0xd7a8,	// (0x0006ae32) cell_toolbar2_fixed_pane

0xd7c2,	// (0x0006ae4c) cell_toolbar2_fixed_pane_g1

0x003e,	// (0x0005d6c8) toolbar2_fixed_button_pane

0x1f52,	// (0x0005f5dc) toolbar2_fixed_button_pane_g1

0x1f62,	// (0x0005f5ec) toolbar2_fixed_button_pane_g2

0x1f5a,	// (0x0005f5e4) toolbar2_fixed_button_pane_g3

0x1f72,	// (0x0005f5fc) toolbar2_fixed_button_pane_g4

0x1f6a,	// (0x0005f5f4) toolbar2_fixed_button_pane_g5

0x1f7a,	// (0x0005f604) toolbar2_fixed_button_pane_g6

0x1f82,	// (0x0005f60c) toolbar2_fixed_button_pane_g7

0x1f92,	// (0x0005f61c) toolbar2_fixed_button_pane_g8

0x1f8a,	// (0x0005f614) toolbar2_fixed_button_pane_g9

0x0008,

0xf82b,	// (0x0006ceb5) toolbar2_fixed_button_pane_g

0x5bee,	// (0x00063278) cell_toolbar2_float_pane_ParamLimits

0x5bee,	// (0x00063278) cell_toolbar2_float_pane

0x5bff,	// (0x00063289) cell_toolbar2_float_pane_g1

0x003e,	// (0x0005d6c8) toolbar2_fixed_button_pane_cp

0xd037,	// (0x0006a6c1) fep_vkb_accented_list_pane_ParamLimits

0xd037,	// (0x0006a6c1) fep_vkb_accented_list_pane

0x0db9,	// (0x0005e443) bg_popup_fep_shadow_pane_g9

0xc3f1,	// (0x00069a7b) bg_popup_fep_shadow_pane_cp3

0x8172,	// (0x000657fc) list_accented_list_pane

0x5c08,	// (0x00063292) list_single_accented_list_pane_ParamLimits

0x5c08,	// (0x00063292) list_single_accented_list_pane

0xc3f1,	// (0x00069a7b) list_highlight_pane_cp10

0x5c19,	// (0x000632a3) list_single_accented_list_pane_t1

0xab8f,	// (0x00068219) popup_slider_window_ParamLimits

0xab8f,	// (0x00068219) popup_slider_window

0x5857,	// (0x00062ee1) aid_indentation_list_msg

0xd8b3,	// (0x0006af3d) bg_popup_window_pane_cp19

0x5d3f,	// (0x000633c9) popup_slider_window_g1

0x5d5b,	// (0x000633e5) popup_slider_window_g2

0x5d77,	// (0x00063401) popup_slider_window_g3

0x0005,

0xfcc0,	// (0x0006d34a) popup_slider_window_g

0x5ddd,	// (0x00063467) popup_slider_window_t1

0x5e51,	// (0x000634db) small_volume_slider_vertical_pane

0x4728,	// (0x00061db2) small_volume_slider_vertical_pane_g1

0x4728,	// (0x00061db2) small_volume_slider_vertical_pane_g2

0x5e6d,	// (0x000634f7) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd2,	// (0x0006d35c) small_volume_slider_vertical_pane_g

0x8f09,	// (0x00066593) area_side_right_pane_ParamLimits

0x8f09,	// (0x00066593) area_side_right_pane

0xb7cb,	// (0x00068e55) aid_size_side_button_ParamLimits

0xb7cb,	// (0x00068e55) aid_size_side_button

0xb7e4,	// (0x00068e6e) grid_sctrl_middle_pane_ParamLimits

0xb7e4,	// (0x00068e6e) grid_sctrl_middle_pane

0x10df,	// (0x0005e769) sctrl_sk_bottom_pane

0x10f0,	// (0x0005e77a) sctrl_sk_top_pane

0x1102,	// (0x0005e78c) aid_touch_sctrl_top

0x110f,	// (0x0005e799) bg_sctrl_sk_pane_ParamLimits

0x110f,	// (0x0005e799) bg_sctrl_sk_pane

0x111d,	// (0x0005e7a7) sctrl_sk_top_pane_g1

0x112a,	// (0x0005e7b4) sctrl_sk_top_pane_t1

0x1102,	// (0x0005e78c) aid_touch_sctrl_bottom

0x110f,	// (0x0005e799) bg_sctrl_sk_pane_cp_ParamLimits

0x110f,	// (0x0005e799) bg_sctrl_sk_pane_cp

0x1145,	// (0x0005e7cf) sctrl_sk_bottom_pane_g1

0x112a,	// (0x0005e7b4) sctrl_sk_bottom_pane_t1

0xb7fe,	// (0x00068e88) cell_sctrl_middle_pane_ParamLimits

0xb7fe,	// (0x00068e88) cell_sctrl_middle_pane

0xb80f,	// (0x00068e99) aid_touch_sctrl_middle_ParamLimits

0xb80f,	// (0x00068e99) aid_touch_sctrl_middle

0xb81c,	// (0x00068ea6) bg_sctrl_middle_pane_ParamLimits

0xb81c,	// (0x00068ea6) bg_sctrl_middle_pane

0x17c0,	// (0x0005ee4a) cell_sctrl_middle_pane_g1_ParamLimits

0x17c0,	// (0x0005ee4a) cell_sctrl_middle_pane_g1

0xb82a,	// (0x00068eb4) cell_sctrl_middle_pane_g2_ParamLimits

0xb82a,	// (0x00068eb4) cell_sctrl_middle_pane_g2

0x0001,

0xfcde,	// (0x0006d368) cell_sctrl_middle_pane_g_ParamLimits

0xfcde,	// (0x0006d368) cell_sctrl_middle_pane_g

0x1f52,	// (0x0005f5dc) bg_sctrl_middle_pane_g1

0x1f5a,	// (0x0005f5e4) bg_sctrl_middle_pane_g2

0x1f62,	// (0x0005f5ec) bg_sctrl_middle_pane_g3

0x1f6a,	// (0x0005f5f4) bg_sctrl_middle_pane_g4

0x1f72,	// (0x0005f5fc) bg_sctrl_middle_pane_g5

0x1f7a,	// (0x0005f604) bg_sctrl_middle_pane_g6

0x1f82,	// (0x0005f60c) bg_sctrl_middle_pane_g7

0x1f8a,	// (0x0005f614) bg_sctrl_middle_pane_g8

0x0007,

0xfce3,	// (0x0006d36d) bg_sctrl_middle_pane_g

0x1f92,	// (0x0005f61c) bg_sctrl_middle_pane_g8_copy1

0x1f52,	// (0x0005f5dc) bg_sctrl_sk_pane_g1

0x1f62,	// (0x0005f5ec) bg_sctrl_sk_pane_g2

0x1f5a,	// (0x0005f5e4) bg_sctrl_sk_pane_g3

0x0008,

0xf82b,	// (0x0006ceb5) bg_sctrl_sk_pane_g

0x7f9b,	// (0x00065625) aid_size_touch_scroll_bar

0x1f72,	// (0x0005f5fc) bg_sctrl_sk_pane_g4

0x1f6a,	// (0x0005f5f4) bg_sctrl_sk_pane_g5

0x1f7a,	// (0x0005f604) bg_sctrl_sk_pane_g6

0x1f82,	// (0x0005f60c) bg_sctrl_sk_pane_g7

0x1f92,	// (0x0005f61c) bg_sctrl_sk_pane_g8

0x1f8a,	// (0x0005f614) bg_sctrl_sk_pane_g9

0xf4db,	// (0x0006cb65) popup_fep_china_hwr2_fs_candidate_window

0xa655,	// (0x00067cdf) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa655,	// (0x00067cdf) popup_fep_china_hwr2_fs_control_window

0x0dd9,	// (0x0005e463) sctrl_sk_top_pane_g2

0x0001,

0xfcd9,	// (0x0006d363) sctrl_sk_top_pane_g

0xd949,	// (0x0006afd3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd949,	// (0x0006afd3) aid_fep_china_hwr2_fs_cell

0xd95d,	// (0x0006afe7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd95d,	// (0x0006afe7) bg_popup_fep_shadow_pane_cp4

0xd974,	// (0x0006affe) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd974,	// (0x0006affe) bg_popup_fep_shadow_pane_cp5

0xd986,	// (0x0006b010) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd986,	// (0x0006b010) popup_fep_china_hwr2_fs_control_bar_grid

0xd99a,	// (0x0006b024) popup_fep_china_hwr2_fs_control_funtion_grid

0x5ec9,	// (0x00063553) aid_fep_china_hwr2_fs_candi_cell

0x6fc7,	// (0x00064651) bg_popup_fep_shadow_pane_cp6

0x5ed3,	// (0x0006355d) popup_fep_china_hwr2_fs_candidate_grid

0xd9a2,	// (0x0006b02c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9a2,	// (0x0006b02c) cell_fep_china_hwr2_fs_funtion_grid

0x4728,	// (0x00061db2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5ef5,	// (0x0006357f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5ef5,	// (0x0006357f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f03,	// (0x0006358d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f03,	// (0x0006358d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf4,	// (0x0006d37e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf4,	// (0x0006d37e) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9ba,	// (0x0006b044) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9ba,	// (0x0006b044) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9cf,	// (0x0006b059) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9cf,	// (0x0006b059) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf9,	// (0x0006d383) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf9,	// (0x0006d383) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f4a,	// (0x000635d4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f52,	// (0x000635dc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5f5a,	// (0x000635e4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfe,	// (0x0006d388) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5f62,	// (0x000635ec) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5f62,	// (0x000635ec) cell_fep_china_hwr2_fs_candidate_grid

0x5f7b,	// (0x00063605) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5f83,	// (0x0006360d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4728,	// (0x00061db2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4728,	// (0x00061db2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb19,	// (0x0006d1a3) cell_fep_china_hwr2_fs_candidate_grid_g

0x5f8b,	// (0x00063615) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0324,	// (0x0005d9ae) clock_nsta_pane_cp_24_ParamLimits

0x0324,	// (0x0005d9ae) clock_nsta_pane_cp_24

0x03a2,	// (0x0005da2c) indicator_nsta_pane_cp_24_ParamLimits

0x03a2,	// (0x0005da2c) indicator_nsta_pane_cp_24

0x2c60,	// (0x000602ea) heading_pane_g1

0x0001,

0xf890,	// (0x0006cf1a) heading_pane_g

0x36f2,	// (0x00060d7c) grid_sct_catagory_button_pane

0x3722,	// (0x00060dac) scroll_pane_cp5_ParamLimits

0x4246,	// (0x000618d0) button_value_adjust_pane_cp5_ParamLimits

0x4246,	// (0x000618d0) button_value_adjust_pane_cp5

0x4325,	// (0x000619af) form2_midp_time_pane_ParamLimits

0x5f99,	// (0x00063623) cell_sct_catagory_button_pane_ParamLimits

0x5f99,	// (0x00063623) cell_sct_catagory_button_pane

0x46ed,	// (0x00061d77) bg_button_pane_cp01_ParamLimits

0x46ed,	// (0x00061d77) bg_button_pane_cp01

0x4728,	// (0x00061db2) cell_sct_catagory_button_pane_g1

0xac08,	// (0x00068292) popup_tb_extension_window

0xd9eb,	// (0x0006b075) aid_size_cell_ext_ParamLimits

0xd9eb,	// (0x0006b075) aid_size_cell_ext

0x7f4d,	// (0x000655d7) bg_tb_trans_pane_cp1_ParamLimits

0x7f4d,	// (0x000655d7) bg_tb_trans_pane_cp1

0xda11,	// (0x0006b09b) grid_tb_ext_pane_ParamLimits

0xda11,	// (0x0006b09b) grid_tb_ext_pane

0xda50,	// (0x0006b0da) cell_tb_ext_pane_ParamLimits

0xda50,	// (0x0006b0da) cell_tb_ext_pane

0xda78,	// (0x0006b102) cell_tb_ext_pane_g1_ParamLimits

0xda78,	// (0x0006b102) cell_tb_ext_pane_g1

0x602f,	// (0x000636b9) cell_tb_ext_pane_t1

0x7161,	// (0x000647eb) list_highlight_pane_cp11_ParamLimits

0x7161,	// (0x000647eb) list_highlight_pane_cp11

0x911f,	// (0x000667a9) popup_uni_indicator_window_ParamLimits

0x911f,	// (0x000667a9) popup_uni_indicator_window

0x8059,	// (0x000656e3) bg_popup_sub_pane_cp14

0xda95,	// (0x0006b11f) list_uniindi_pane

0xdaa1,	// (0x0006b12b) uniindi_top_pane

0x7161,	// (0x000647eb) bg_uniindi_top_pane

0xdac0,	// (0x0006b14a) uniindi_top_pane_g1

0xdad6,	// (0x0006b160) uniindi_top_pane_g2

0x0003,

0xfd05,	// (0x0006d38f) uniindi_top_pane_g

0xdaf3,	// (0x0006b17d) uniindi_top_pane_t1

0x60e0,	// (0x0006376a) list_single_uniindi_pane_ParamLimits

0x60e0,	// (0x0006376a) list_single_uniindi_pane

0x4728,	// (0x00061db2) bg_uniindi_top_pane_g1

0x60f3,	// (0x0006377d) list_single_uniindi_pane_g1

0x6106,	// (0x00063790) list_single_uniindi_pane_t1

0xe7bf,	// (0x0006be49) control_bg_pane

0x612b,	// (0x000637b5) bg_sctrl_sk_pane_cp1

0x6134,	// (0x000637be) bg_sctrl_sk_pane_cp2

0x613d,	// (0x000637c7) control_bg_pane_g1

0x6146,	// (0x000637d0) control_bg_pane_g2

0x0001,

0xfd0e,	// (0x0006d398) control_bg_pane_g

0x408c,	// (0x00061716) cell_indicator_nsta_pane_g1_ParamLimits

0xce05,	// (0x0006a48f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7d,	// (0x0006d107) cell_indicator_nsta_pane_g_ParamLimits

0xed76,	// (0x0006c400) form2_midp_time_pane_t1_ParamLimits

0x0b74,	// (0x0005e1fe) main_idle_act4_pane_ParamLimits

0x0b74,	// (0x0005e1fe) main_idle_act4_pane

0xac08,	// (0x00068292) popup_tb_extension_window_ParamLimits

0xda36,	// (0x0006b0c0) tb_ext_find_pane_ParamLimits

0xda36,	// (0x0006b0c0) tb_ext_find_pane

0x614f,	// (0x000637d9) ai_gene_pane_1_cp1

0xc472,	// (0x00069afc) ai_gene_pane_2_cp1

0xdb1d,	// (0x0006b1a7) list_single_idle_plugin_calendar_pane

0x6160,	// (0x000637ea) list_single_idle_plugin_notification_pane

0x6169,	// (0x000637f3) list_single_idle_plugin_player_pane

0xdb26,	// (0x0006b1b0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb26,	// (0x0006b1b0) list_single_idle_plugin_shortcut_pane

0xdb4e,	// (0x0006b1d8) main_idle_act4_pane_t1

0xdb65,	// (0x0006b1ef) main_idle_act4_pane_t2

0x0001,

0xfd13,	// (0x0006d39d) main_idle_act4_pane_t

0xdb7c,	// (0x0006b206) middle_sk_idle_act4_pane_ParamLimits

0xdb7c,	// (0x0006b206) middle_sk_idle_act4_pane

0xdb98,	// (0x0006b222) popup_clock_digital_analogue_window_cp2

0xdbc4,	// (0x0006b24e) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbc4,	// (0x0006b24e) shortcut_wheel_idle_act4_pane

0x4728,	// (0x00061db2) shortcut_wheel_idle_act4_pane_g1

0x4728,	// (0x00061db2) shortcut_wheel_idle_act4_pane_g2

0x4728,	// (0x00061db2) shortcut_wheel_idle_act4_pane_g3

0x4728,	// (0x00061db2) shortcut_wheel_idle_act4_pane_g4

0x4728,	// (0x00061db2) shortcut_wheel_idle_act4_pane_g5

0x61fc,	// (0x00063886) shortcut_wheel_idle_act4_pane_g6

0x6204,	// (0x0006388e) shortcut_wheel_idle_act4_pane_g7

0x620c,	// (0x00063896) shortcut_wheel_idle_act4_pane_g8

0x6214,	// (0x0006389e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd18,	// (0x0006d3a2) shortcut_wheel_idle_act4_pane_g

0xdc41,	// (0x0006b2cb) middle_sk_idle_act4_pane_g1_ParamLimits

0xdc41,	// (0x0006b2cb) middle_sk_idle_act4_pane_g1

0xdc4f,	// (0x0006b2d9) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc4f,	// (0x0006b2d9) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3b,	// (0x0006d3c5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3b,	// (0x0006d3c5) middle_sk_idle_act4_pane_g

0xdc67,	// (0x0006b2f1) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc67,	// (0x0006b2f1) middle_sk_idle_act4_pane_t1

0xdc96,	// (0x0006b320) grid_ai_shortcut_pane_ParamLimits

0xdc96,	// (0x0006b320) grid_ai_shortcut_pane

0xdcb3,	// (0x0006b33d) list_highlight_pane_cp16_ParamLimits

0xdcb3,	// (0x0006b33d) list_highlight_pane_cp16

0xdcc0,	// (0x0006b34a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdcc0,	// (0x0006b34a) list_single_idle_plugin_shortcut_pane_g1

0xdccc,	// (0x0006b356) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdccc,	// (0x0006b356) list_single_idle_plugin_shortcut_pane_g2

0xdce8,	// (0x0006b372) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdce8,	// (0x0006b372) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd40,	// (0x0006d3ca) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd40,	// (0x0006d3ca) list_single_idle_plugin_shortcut_pane_g

0xdcfd,	// (0x0006b387) cell_ai_shortcut_pane_ParamLimits

0xdcfd,	// (0x0006b387) cell_ai_shortcut_pane

0xdd13,	// (0x0006b39d) cell_ai_shortcut_pane_g1_ParamLimits

0xdd13,	// (0x0006b39d) cell_ai_shortcut_pane_g1

0x614f,	// (0x000637d9) ai_gene_pane_1_cp2

0x6344,	// (0x000639ce) ai_gene_pane_2_cp2

0x634c,	// (0x000639d6) list_highlight_pane_cp15

0xdd35,	// (0x0006b3bf) list_single_idle_plugin_calendar_pane_g1

0x634c,	// (0x000639d6) list_highlight_pane_cp17

0x635d,	// (0x000639e7) list_single_idle_plugin_calendar_pane_g1_copy1

0x6365,	// (0x000639ef) list_single_idle_plugin_player_pane_g1

0x394b,	// (0x00060fd5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd47,	// (0x0006d3d1) list_single_idle_plugin_player_pane_g

0x636d,	// (0x000639f7) list_single_idle_plugin_player_pane_t1

0x637b,	// (0x00063a05) list_single_idle_plugin_player_pane_t2

0x6389,	// (0x00063a13) list_single_idle_plugin_player_pane_t3

0x6397,	// (0x00063a21) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4c,	// (0x0006d3d6) list_single_idle_plugin_player_pane_t

0x63a5,	// (0x00063a2f) wait_bar_pane_cp15

0x63ad,	// (0x00063a37) grid_ai_notification_pane

0x394b,	// (0x00060fd5) list_single_idle_plugin_notification_pane_g1

0xdd3d,	// (0x0006b3c7) cell_ai_notification_pane_ParamLimits

0xdd3d,	// (0x0006b3c7) cell_ai_notification_pane

0x63c3,	// (0x00063a4d) cell_ai_notification_pane_g1

0x63cb,	// (0x00063a55) cell_ai_notification_pane_t1

0xdd4a,	// (0x0006b3d4) tb_ext_find_button_pane

0xdd52,	// (0x0006b3dc) tb_ext_find_pane_g1

0xdd5a,	// (0x0006b3e4) tb_ext_find_pane_t1

0xbf93,	// (0x0006961d) tb_ext_find_button_pane_g1

0xdd68,	// (0x0006b3f2) tb_ext_find_button_pane_g2

0x0001,

0xfd55,	// (0x0006d3df) tb_ext_find_button_pane_g

0xdb4e,	// (0x0006b1d8) main_idle_act4_pane_t1_ParamLimits

0xdb65,	// (0x0006b1ef) main_idle_act4_pane_t2_ParamLimits

0xfd13,	// (0x0006d39d) main_idle_act4_pane_t_ParamLimits

0xdb98,	// (0x0006b222) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdbb0,	// (0x0006b23a) sat_plugin_idle_act4_pane_ParamLimits

0xdbb0,	// (0x0006b23a) sat_plugin_idle_act4_pane

0xdd71,	// (0x0006b3fb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd71,	// (0x0006b3fb) sat_plugin_idle_act4_pane_t1

0xdd89,	// (0x0006b413) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd89,	// (0x0006b413) sat_plugin_idle_act4_pane_t2

0xdda1,	// (0x0006b42b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdda1,	// (0x0006b42b) sat_plugin_idle_act4_pane_t3

0xddb9,	// (0x0006b443) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddb9,	// (0x0006b443) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5a,	// (0x0006d3e4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5a,	// (0x0006d3e4) sat_plugin_idle_act4_pane_t

0x909a,	// (0x00066724) popup_battery_window_ParamLimits

0x909a,	// (0x00066724) popup_battery_window

0x7161,	// (0x000647eb) bg_popup_sub_pane_cp25_ParamLimits

0x7161,	// (0x000647eb) bg_popup_sub_pane_cp25

0x644c,	// (0x00063ad6) popup_battery_window_g1_ParamLimits

0x644c,	// (0x00063ad6) popup_battery_window_g1

0x6458,	// (0x00063ae2) popup_battery_window_t1_ParamLimits

0x6458,	// (0x00063ae2) popup_battery_window_t1

0x646a,	// (0x00063af4) popup_battery_window_t2_ParamLimits

0x646a,	// (0x00063af4) popup_battery_window_t2

0x0001,

0xfd63,	// (0x0006d3ed) popup_battery_window_t_ParamLimits

0xfd63,	// (0x0006d3ed) popup_battery_window_t

0xa2a9,	// (0x00067933) midp_canvas_pane_ParamLimits

0xa31b,	// (0x000679a5) midp_keypad_pane_ParamLimits

0xa31b,	// (0x000679a5) midp_keypad_pane

0x8441,	// (0x00065acb) main_midp_pane_ParamLimits

0xce12,	// (0x0006a49c) signal_pane_g2_cp_ParamLimits

0xddd1,	// (0x0006b45b) aid_size_cell_midp_keypad_ParamLimits

0xddd1,	// (0x0006b45b) aid_size_cell_midp_keypad

0xddef,	// (0x0006b479) midp_keyp_game_grid_pane_ParamLimits

0xddef,	// (0x0006b479) midp_keyp_game_grid_pane

0xde16,	// (0x0006b4a0) midp_keyp_rocker_pane_ParamLimits

0xde16,	// (0x0006b4a0) midp_keyp_rocker_pane

0xde67,	// (0x0006b4f1) midp_keyp_sk_left_pane_ParamLimits

0xde67,	// (0x0006b4f1) midp_keyp_sk_left_pane

0xdebb,	// (0x0006b545) midp_keyp_sk_right_pane_ParamLimits

0xdebb,	// (0x0006b545) midp_keyp_sk_right_pane

0x6fc7,	// (0x00064651) bg_button_pane_cp03

0xdf0f,	// (0x0006b599) midp_keyp_sk_left_pane_g1

0x6fc7,	// (0x00064651) bg_button_pane_cp04

0xdf0f,	// (0x0006b599) midp_keyp_sk_right_pane_g1

0x4728,	// (0x00061db2) midp_keyp_rocker_pane_g1

0xdf18,	// (0x0006b5a2) keyp_game_cell_pane_ParamLimits

0xdf18,	// (0x0006b5a2) keyp_game_cell_pane

0x6fc7,	// (0x00064651) bg_button_pane_cp02

0xdf3c,	// (0x0006b5c6) keyp_game_cell_pane_g1

0x90ba,	// (0x00066744) popup_fep_vkb2_window_ParamLimits

0x90ba,	// (0x00066744) popup_fep_vkb2_window

0xb836,	// (0x00068ec0) aid_size_cell_vkb2_ParamLimits

0xb836,	// (0x00068ec0) aid_size_cell_vkb2

0xb86a,	// (0x00068ef4) popup_fep_vkb2_window_g1_ParamLimits

0xb86a,	// (0x00068ef4) popup_fep_vkb2_window_g1

0xb8ba,	// (0x00068f44) vkb2_area_bottom_pane_ParamLimits

0xb8ba,	// (0x00068f44) vkb2_area_bottom_pane

0xb90e,	// (0x00068f98) vkb2_area_keypad_pane_ParamLimits

0xb90e,	// (0x00068f98) vkb2_area_keypad_pane

0xb956,	// (0x00068fe0) vkb2_area_top_pane_ParamLimits

0xb956,	// (0x00068fe0) vkb2_area_top_pane

0xb9e2,	// (0x0006906c) vkb2_top_entry_pane_ParamLimits

0xb9e2,	// (0x0006906c) vkb2_top_entry_pane

0xba0f,	// (0x00069099) vkb2_top_grid_left_pane_ParamLimits

0xba0f,	// (0x00069099) vkb2_top_grid_left_pane

0xba30,	// (0x000690ba) vkb2_top_grid_right_pane_ParamLimits

0xba30,	// (0x000690ba) vkb2_top_grid_right_pane

0x13b0,	// (0x0005ea3a) vkb2_cell_keypad_pane_ParamLimits

0x13b0,	// (0x0005ea3a) vkb2_cell_keypad_pane

0xba78,	// (0x00069102) vkb2_area_bottom_grid_pane_ParamLimits

0xba78,	// (0x00069102) vkb2_area_bottom_grid_pane

0xbaa2,	// (0x0006912c) vkb2_area_bottom_pane_g1_ParamLimits

0xbaa2,	// (0x0006912c) vkb2_area_bottom_pane_g1

0xbac8,	// (0x00069152) vkb2_area_bottom_pane_g2_ParamLimits

0xbac8,	// (0x00069152) vkb2_area_bottom_pane_g2

0xbaf9,	// (0x00069183) vkb2_area_bottom_pane_g3_ParamLimits

0xbaf9,	// (0x00069183) vkb2_area_bottom_pane_g3

0x0002,

0xfd68,	// (0x0006d3f2) vkb2_area_bottom_pane_g_ParamLimits

0xfd68,	// (0x0006d3f2) vkb2_area_bottom_pane_g

0x155a,	// (0x0005ebe4) vkb2_top_cell_left_pane_ParamLimits

0x155a,	// (0x0005ebe4) vkb2_top_cell_left_pane

0xdf45,	// (0x0006b5cf) vkb2_top_entry_pane_g1_ParamLimits

0xdf45,	// (0x0006b5cf) vkb2_top_entry_pane_g1

0xdf53,	// (0x0006b5dd) vkb2_top_entry_pane_t1_ParamLimits

0xdf53,	// (0x0006b5dd) vkb2_top_entry_pane_t1

0x661b,	// (0x00063ca5) vkb2_top_entry_pane_t2_ParamLimits

0x661b,	// (0x00063ca5) vkb2_top_entry_pane_t2

0x664d,	// (0x00063cd7) vkb2_top_entry_pane_t3_ParamLimits

0x664d,	// (0x00063cd7) vkb2_top_entry_pane_t3

0x0002,

0xfd6f,	// (0x0006d3f9) vkb2_top_entry_pane_t_ParamLimits

0xfd6f,	// (0x0006d3f9) vkb2_top_entry_pane_t

0xbb63,	// (0x000691ed) vkb2_top_grid_right_pane_g1_ParamLimits

0xbb63,	// (0x000691ed) vkb2_top_grid_right_pane_g1

0x15bd,	// (0x0005ec47) vkb2_top_grid_right_pane_g2_ParamLimits

0x15bd,	// (0x0005ec47) vkb2_top_grid_right_pane_g2

0x15d5,	// (0x0005ec5f) vkb2_top_grid_right_pane_g3_ParamLimits

0x15d5,	// (0x0005ec5f) vkb2_top_grid_right_pane_g3

0xbb79,	// (0x00069203) vkb2_top_grid_right_pane_g4_ParamLimits

0xbb79,	// (0x00069203) vkb2_top_grid_right_pane_g4

0x0003,

0xfd76,	// (0x0006d400) vkb2_top_grid_right_pane_g_ParamLimits

0xfd76,	// (0x0006d400) vkb2_top_grid_right_pane_g

0x1603,	// (0x0005ec8d) vkb2_top_cell_left_pane_g1

0x1625,	// (0x0005ecaf) vkb2_cell_keypad_pane_g1_ParamLimits

0x1625,	// (0x0005ecaf) vkb2_cell_keypad_pane_g1

0x6671,	// (0x00063cfb) vkb2_cell_keypad_pane_t1_ParamLimits

0x6671,	// (0x00063cfb) vkb2_cell_keypad_pane_t1

0x1633,	// (0x0005ecbd) vkb2_cell_bottom_grid_pane_ParamLimits

0x1633,	// (0x0005ecbd) vkb2_cell_bottom_grid_pane

0x166c,	// (0x0005ecf6) vkb2_cell_bottom_grid_pane_g1

0xdbe5,	// (0x0006b26f) aid_call2_pane_cp02

0xdbed,	// (0x0006b277) aid_call_pane_cp02

0xdbf5,	// (0x0006b27f) clock_digital_number_pane_cp10

0xdbfd,	// (0x0006b287) clock_digital_number_pane_cp11

0xdc05,	// (0x0006b28f) clock_digital_number_pane_cp12

0xdc0d,	// (0x0006b297) clock_digital_number_pane_cp13

0xdc15,	// (0x0006b29f) clock_digital_separator_pane_cp10

0xbf93,	// (0x0006961d) popup_clock_digital_analogue_window_cp2_g1

0xbf93,	// (0x0006961d) popup_clock_digital_analogue_window_cp2_g2

0xdc1d,	// (0x0006b2a7) popup_clock_digital_analogue_window_cp2_g3

0xbf93,	// (0x0006961d) popup_clock_digital_analogue_window_cp2_g4

0xdc1d,	// (0x0006b2a7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2b,	// (0x0006d3b5) popup_clock_digital_analogue_window_cp2_g

0xdc25,	// (0x0006b2af) popup_clock_digital_analogue_window_cp2_t1

0xdc33,	// (0x0006b2bd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd36,	// (0x0006d3c0) popup_clock_digital_analogue_window_cp2_t

0x4728,	// (0x00061db2) clock_digital_number_pane_cp10_g1

0x4728,	// (0x00061db2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb19,	// (0x0006d1a3) clock_digital_number_pane_cp10_g

0x4728,	// (0x00061db2) clock_digital_separator_pane_cp10_g1

0x4728,	// (0x00061db2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb19,	// (0x0006d1a3) clock_digital_separator_pane_cp10_g

0xdae2,	// (0x0006b16c) uniindi_top_pane_g3

0x60a9,	// (0x00063733) uniindi_top_pane_g4

0x143b,	// (0x0005eac5) vkb2_row_keypad_pane_ParamLimits

0x143b,	// (0x0005eac5) vkb2_row_keypad_pane

0x168c,	// (0x0005ed16) vkb2_cell_t_keypad_pane_ParamLimits

0x168c,	// (0x0005ed16) vkb2_cell_t_keypad_pane

0x169c,	// (0x0005ed26) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x169c,	// (0x0005ed26) vkb2_cell_t_keypad_pane_cp08

0x16af,	// (0x0005ed39) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x16af,	// (0x0005ed39) vkb2_cell_t_keypad_pane_cp09

0x16c3,	// (0x0005ed4d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x16c3,	// (0x0005ed4d) vkb2_cell_t_keypad_pane_cp01

0x16d4,	// (0x0005ed5e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x16d4,	// (0x0005ed5e) vkb2_cell_t_keypad_pane_cp02

0x16e5,	// (0x0005ed6f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x16e5,	// (0x0005ed6f) vkb2_cell_t_keypad_pane_cp03

0x16f6,	// (0x0005ed80) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x16f6,	// (0x0005ed80) vkb2_cell_t_keypad_pane_cp04

0x1707,	// (0x0005ed91) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1707,	// (0x0005ed91) vkb2_cell_t_keypad_pane_cp05

0x1718,	// (0x0005eda2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1718,	// (0x0005eda2) vkb2_cell_t_keypad_pane_cp06

0x1729,	// (0x0005edb3) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1729,	// (0x0005edb3) vkb2_cell_t_keypad_pane_cp07

0x173a,	// (0x0005edc4) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x173a,	// (0x0005edc4) vkb2_cell_t_keypad_pane_cp10

0x0dd9,	// (0x0005e463) vkb2_cell_t_keypad_pane_g1

0x6688,	// (0x00063d12) vkb2_cell_t_keypad_pane_t1

0xe7bf,	// (0x0006be49) popup_grid_graphic2_window

0xdf8c,	// (0x0006b616) aid_size_cell_graphic2_ParamLimits

0xdf8c,	// (0x0006b616) aid_size_cell_graphic2

0xdfca,	// (0x0006b654) bg_popup_window_pane_cp21_ParamLimits

0xdfca,	// (0x0006b654) bg_popup_window_pane_cp21

0xdfd8,	// (0x0006b662) graphic2_pages_pane_ParamLimits

0xdfd8,	// (0x0006b662) graphic2_pages_pane

0xe02e,	// (0x0006b6b8) grid_graphic2_control_pane_ParamLimits

0xe02e,	// (0x0006b6b8) grid_graphic2_control_pane

0xe076,	// (0x0006b700) grid_graphic2_pane_ParamLimits

0xe076,	// (0x0006b700) grid_graphic2_pane

0xe0fd,	// (0x0006b787) cell_graphic2_pane

0xe7bf,	// (0x0006be49) main_comp_mode_pane

0x5909,	// (0x00062f93) list_ai3_gene_pane_ParamLimits

0xd8b3,	// (0x0006af3d) bg_popup_window_pane_cp19_ParamLimits

0x5ce3,	// (0x0006336d) bg_touch_area_indi_pane_ParamLimits

0x5ce3,	// (0x0006336d) bg_touch_area_indi_pane

0x5cf9,	// (0x00063383) bg_touch_area_indi_pane_cp01_ParamLimits

0x5cf9,	// (0x00063383) bg_touch_area_indi_pane_cp01

0x5d0f,	// (0x00063399) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d0f,	// (0x00063399) bg_touch_area_indi_pane_cp02

0x5d25,	// (0x000633af) bg_touch_area_indi_pane_cp03_ParamLimits

0x5d25,	// (0x000633af) bg_touch_area_indi_pane_cp03

0x5d3f,	// (0x000633c9) popup_slider_window_g1_ParamLimits

0x5d5b,	// (0x000633e5) popup_slider_window_g2_ParamLimits

0x5d77,	// (0x00063401) popup_slider_window_g3_ParamLimits

0xfcc0,	// (0x0006d34a) popup_slider_window_g_ParamLimits

0x5ddd,	// (0x00063467) popup_slider_window_t1_ParamLimits

0x5e51,	// (0x000634db) small_volume_slider_vertical_pane_ParamLimits

0xe0fd,	// (0x0006b787) cell_graphic2_pane_ParamLimits

0xe158,	// (0x0006b7e2) bg_button_pane_cp10_ParamLimits

0xe158,	// (0x0006b7e2) bg_button_pane_cp10

0xe16b,	// (0x0006b7f5) bg_button_pane_cp11_ParamLimits

0xe16b,	// (0x0006b7f5) bg_button_pane_cp11

0xe17e,	// (0x0006b808) graphic2_pages_pane_g1_ParamLimits

0xe17e,	// (0x0006b808) graphic2_pages_pane_g1

0xe199,	// (0x0006b823) graphic2_pages_pane_g2_ParamLimits

0xe199,	// (0x0006b823) graphic2_pages_pane_g2

0x0001,

0xfd84,	// (0x0006d40e) graphic2_pages_pane_g_ParamLimits

0xfd84,	// (0x0006d40e) graphic2_pages_pane_g

0xe1b1,	// (0x0006b83b) graphic2_pages_pane_t1_ParamLimits

0xe1b1,	// (0x0006b83b) graphic2_pages_pane_t1

0xe1c9,	// (0x0006b853) cell_graphic2_control_pane_ParamLimits

0xe1c9,	// (0x0006b853) cell_graphic2_control_pane

0xe1fb,	// (0x0006b885) cell_graphic2_pane_g1_ParamLimits

0xe1fb,	// (0x0006b885) cell_graphic2_pane_g1

0xe208,	// (0x0006b892) cell_graphic2_pane_g2_ParamLimits

0xe208,	// (0x0006b892) cell_graphic2_pane_g2

0xd02a,	// (0x0006a6b4) cell_graphic2_pane_g3_ParamLimits

0xd02a,	// (0x0006a6b4) cell_graphic2_pane_g3

0xe215,	// (0x0006b89f) cell_graphic2_pane_g4_ParamLimits

0xe215,	// (0x0006b89f) cell_graphic2_pane_g4

0xe222,	// (0x0006b8ac) cell_graphic2_pane_g5_ParamLimits

0xe222,	// (0x0006b8ac) cell_graphic2_pane_g5

0x0004,

0xfd89,	// (0x0006d413) cell_graphic2_pane_g_ParamLimits

0xfd89,	// (0x0006d413) cell_graphic2_pane_g

0xe23f,	// (0x0006b8c9) cell_graphic2_pane_t1_ParamLimits

0xe23f,	// (0x0006b8c9) cell_graphic2_pane_t1

0x2c54,	// (0x000602de) grid_highlight_pane_cp11_ParamLimits

0x2c54,	// (0x000602de) grid_highlight_pane_cp11

0x7161,	// (0x000647eb) bg_button_pane_cp05

0xe289,	// (0x0006b913) cell_graphic2_control_pane_g1

0x4728,	// (0x00061db2) bg_touch_area_indi_pane_g1

0x6961,	// (0x00063feb) aid_cmod_rocker_key_size

0x696b,	// (0x00063ff5) aid_cmode_itu_key_size

0x6975,	// (0x00063fff) main_cmode_video_pane

0x697f,	// (0x00064009) main_comp_mode_itu_pane

0x698b,	// (0x00064015) main_comp_mode_rocker_pane

0x6997,	// (0x00064021) cell_cmode_rocker_pane_ParamLimits

0x6997,	// (0x00064021) cell_cmode_rocker_pane

0x69a9,	// (0x00064033) cell_cmode_itu_pane_ParamLimits

0x69a9,	// (0x00064033) cell_cmode_itu_pane

0x8059,	// (0x000656e3) bg_button_pane_cp06_ParamLimits

0x8059,	// (0x000656e3) bg_button_pane_cp06

0x4998,	// (0x00062022) cell_cmode_rocker_pane_g1_ParamLimits

0x4998,	// (0x00062022) cell_cmode_rocker_pane_g1

0x5ef5,	// (0x0006357f) cell_cmode_rocker_pane_g2_ParamLimits

0x5ef5,	// (0x0006357f) cell_cmode_rocker_pane_g2

0x0001,

0xfd99,	// (0x0006d423) cell_cmode_rocker_pane_g_ParamLimits

0xfd99,	// (0x0006d423) cell_cmode_rocker_pane_g

0x6fc7,	// (0x00064651) bg_button_pane_cp07

0x69be,	// (0x00064048) cell_cmode_itu_pane_g1

0x69c7,	// (0x00064051) cell_cmode_itu_pane_t1

0x69d5,	// (0x0006405f) cell_cmode_itu_pane_t2

0x0001,

0xfd9e,	// (0x0006d428) cell_cmode_itu_pane_t

0x611b,	// (0x000637a5) aid_touch_ctrl_left

0x6123,	// (0x000637ad) aid_touch_ctrl_right

0x6fc7,	// (0x00064651) compa_mode_pane

0xe2af,	// (0x0006b939) aid_cmod_rocker_key_size_cp

0xe2b9,	// (0x0006b943) aid_cmode_itu_key_size_cp

0x69f7,	// (0x00064081) compa_mode_pane_g1

0x69ff,	// (0x00064089) compa_mode_pane_g2

0x6a07,	// (0x00064091) compa_mode_pane_g3

0x0002,

0xfda3,	// (0x0006d42d) compa_mode_pane_g

0xe2c3,	// (0x0006b94d) main_comp_mode_itu_pane_cp

0xe2cb,	// (0x0006b955) main_comp_mode_rocker_pane_cp

0xe2d3,	// (0x0006b95d) cell_cmode_itu_pane_cp_ParamLimits

0xe2d3,	// (0x0006b95d) cell_cmode_itu_pane_cp

0xe2e8,	// (0x0006b972) cell_cmode_rocker_pane_cp_ParamLimits

0xe2e8,	// (0x0006b972) cell_cmode_rocker_pane_cp

0x8059,	// (0x000656e3) bg_button_pane_cp06_cp_ParamLimits

0x8059,	// (0x000656e3) bg_button_pane_cp06_cp

0x4998,	// (0x00062022) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4998,	// (0x00062022) cell_cmode_rocker_pane_g1_cp

0x4728,	// (0x00061db2) cell_cmode_rocker_pane_g2_cp

0x6fc7,	// (0x00064651) bg_button_pane_cp07_cp

0xe2fa,	// (0x0006b984) cell_cmode_itu_pane_g1_cp

0xe303,	// (0x0006b98d) cell_cmode_itu_pane_t1_cp

0xe303,	// (0x0006b98d) cell_cmode_itu_pane_t2_cp

0xcbbc,	// (0x0006a246) settings_code_pane_cp2

0x7029,	// (0x000646b3) bg_popup_window_pane_cp3_ParamLimits

0x727a,	// (0x00064904) heading_pane_cp3_ParamLimits

0x7289,	// (0x00064913) listscroll_popup_graphic_pane_ParamLimits

0x0b82,	// (0x0005e20c) fep_hwr_aid_pane_ParamLimits

0x1102,	// (0x0005e78c) aid_touch_sctrl_top_ParamLimits

0x111d,	// (0x0005e7a7) sctrl_sk_top_pane_g1_ParamLimits

0x0dd9,	// (0x0005e463) sctrl_sk_top_pane_g2_ParamLimits

0xfcd9,	// (0x0006d363) sctrl_sk_top_pane_g_ParamLimits

0x112a,	// (0x0005e7b4) sctrl_sk_top_pane_t1_ParamLimits

0x1102,	// (0x0005e78c) aid_touch_sctrl_bottom_ParamLimits

0x112a,	// (0x0005e7b4) sctrl_sk_bottom_pane_t1_ParamLimits

0xdaae,	// (0x0006b138) aid_area_touch_clock

0xb9a2,	// (0x0006902c) aid_vkb2_area_top_pane_cell_ParamLimits

0xb9a2,	// (0x0006902c) aid_vkb2_area_top_pane_cell

0xba51,	// (0x000690db) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xba51,	// (0x000690db) aid_vkb2_area_bottom_pane_cell

0x65d3,	// (0x00063c5d) popup_char_count_window

0x6a5d,	// (0x000640e7) popup_char_count_window_g1

0x6a66,	// (0x000640f0) popup_char_count_window_g2

0x6a6f,	// (0x000640f9) popup_char_count_window_g3

0x0002,

0xfdaa,	// (0x0006d434) popup_char_count_window_g

0x6a78,	// (0x00064102) popup_char_count_window_t1

0x11d1,	// (0x0005e85b) popup_fep_char_preview_window_ParamLimits

0x11d1,	// (0x0005e85b) popup_fep_char_preview_window

0xb9c2,	// (0x0006904c) vkb2_top_candi_pane_ParamLimits

0xb9c2,	// (0x0006904c) vkb2_top_candi_pane

0xe311,	// (0x0006b99b) cell_vkb2_top_candi_pane_ParamLimits

0xe311,	// (0x0006b99b) cell_vkb2_top_candi_pane

0x174f,	// (0x0005edd9) bg_popup_fep_char_preview_window_ParamLimits

0x174f,	// (0x0005edd9) bg_popup_fep_char_preview_window

0x175d,	// (0x0005ede7) popup_fep_char_preview_window_t1_ParamLimits

0x175d,	// (0x0005ede7) popup_fep_char_preview_window_t1

0x6ad0,	// (0x0006415a) bg_popup_fep_char_preview_window_g1

0x6ad8,	// (0x00064162) bg_popup_fep_char_preview_window_g2

0x6ae0,	// (0x0006416a) bg_popup_fep_char_preview_window_g3

0x6ae8,	// (0x00064172) bg_popup_fep_char_preview_window_g4

0x6af0,	// (0x0006417a) bg_popup_fep_char_preview_window_g5

0x6af8,	// (0x00064182) bg_popup_fep_char_preview_window_g6

0x6b00,	// (0x0006418a) bg_popup_fep_char_preview_window_g7

0x6b08,	// (0x00064192) bg_popup_fep_char_preview_window_g8

0x6b10,	// (0x0006419a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb1,	// (0x0006d43b) bg_popup_fep_char_preview_window_g

0x0dd9,	// (0x0005e463) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0dd9,	// (0x0005e463) cell_vkb2_top_candi_pane_g1

0x0de7,	// (0x0005e471) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0de7,	// (0x0005e471) cell_vkb2_top_candi_pane_g2

0x4caf,	// (0x00062339) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4caf,	// (0x00062339) cell_vkb2_top_candi_pane_g3

0x179f,	// (0x0005ee29) cell_vkb2_top_candi_pane_g4_ParamLimits

0x179f,	// (0x0005ee29) cell_vkb2_top_candi_pane_g4

0x4ead,	// (0x00062537) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4ead,	// (0x00062537) cell_vkb2_top_candi_pane_g5

0x17c0,	// (0x0005ee4a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x17c0,	// (0x0005ee4a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc6,	// (0x0006d450) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc6,	// (0x0006d450) cell_vkb2_top_candi_pane_g

0x17ce,	// (0x0005ee58) cell_vkb2_top_candi_pane_t1

0xb442,	// (0x00068acc) aid_size_touch_slider_mark_ParamLimits

0xb442,	// (0x00068acc) aid_size_touch_slider_mark

0xe014,	// (0x0006b69e) grid_graphic2_catg_pane_ParamLimits

0xe014,	// (0x0006b69e) grid_graphic2_catg_pane

0xe0d0,	// (0x0006b75a) popup_grid_graphic2_window_t1_ParamLimits

0xe0d0,	// (0x0006b75a) popup_grid_graphic2_window_t1

0xe0e6,	// (0x0006b770) popup_grid_graphic2_window_t2_ParamLimits

0xe0e6,	// (0x0006b770) popup_grid_graphic2_window_t2

0x0001,

0xfd7f,	// (0x0006d409) popup_grid_graphic2_window_t_ParamLimits

0xfd7f,	// (0x0006d409) popup_grid_graphic2_window_t

0x7161,	// (0x000647eb) bg_button_pane_cp05_ParamLimits

0xe289,	// (0x0006b913) cell_graphic2_control_pane_g1_ParamLimits

0xe371,	// (0x0006b9fb) cell_graphic2_catg_pane_ParamLimits

0xe371,	// (0x0006b9fb) cell_graphic2_catg_pane

0x6fc7,	// (0x00064651) bg_button_pane_cp12

0xe383,	// (0x0006ba0d) cell_graphic2_catg_pane_g1

0x602f,	// (0x000636b9) cell_tb_ext_pane_t1_ParamLimits

0x157a,	// (0x0005ec04) vkb2_top_cell_right_narrow_pane_ParamLimits

0x157a,	// (0x0005ec04) vkb2_top_cell_right_narrow_pane

0x1592,	// (0x0005ec1c) vkb2_top_cell_right_wide_pane_ParamLimits

0x1592,	// (0x0005ec1c) vkb2_top_cell_right_wide_pane

0x0b74,	// (0x0005e1fe) bg_vkb2_func_pane_ParamLimits

0x0b74,	// (0x0005e1fe) bg_vkb2_func_pane

0x1603,	// (0x0005ec8d) vkb2_top_cell_left_pane_g1_ParamLimits

0x0b74,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0b74,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp03

0x166c,	// (0x0005ecf6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1f5a,	// (0x0005f5e4) bg_vkb2_func_pane_g1

0x1f62,	// (0x0005f5ec) bg_vkb2_func_pane_g2

0x1f72,	// (0x0005f5fc) bg_vkb2_func_pane_g3

0x1f6a,	// (0x0005f5f4) bg_vkb2_func_pane_g4

0x1f7a,	// (0x0005f604) bg_vkb2_func_pane_g5

0x1f82,	// (0x0005f60c) bg_vkb2_func_pane_g6

0x1f8a,	// (0x0005f614) bg_vkb2_func_pane_g7

0x1f92,	// (0x0005f61c) bg_vkb2_func_pane_g8

0x1f52,	// (0x0005f5dc) bg_vkb2_func_pane_g9

0x0008,

0xfdd3,	// (0x0006d45d) bg_vkb2_func_pane_g

0x0b74,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0b74,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp01

0x1603,	// (0x0005ec8d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1603,	// (0x0005ec8d) vkb2_top_cell_right_wide_pane_g1

0x0b74,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0b74,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp02

0x17ed,	// (0x0005ee77) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x17ed,	// (0x0005ee77) vkb2_top_cell_right_narrow_pane_g1

0xd7f5,	// (0x0006ae7f) aid_touch_area_decrease_ParamLimits

0xd7f5,	// (0x0006ae7f) aid_touch_area_decrease

0xd82f,	// (0x0006aeb9) aid_touch_area_increase_ParamLimits

0xd82f,	// (0x0006aeb9) aid_touch_area_increase

0xd857,	// (0x0006aee1) aid_touch_area_mute_ParamLimits

0xd857,	// (0x0006aee1) aid_touch_area_mute

0xd87f,	// (0x0006af09) aid_touch_area_slider_ParamLimits

0xd87f,	// (0x0006af09) aid_touch_area_slider

0xd8bf,	// (0x0006af49) popup_slider_window_g4_ParamLimits

0xd8bf,	// (0x0006af49) popup_slider_window_g4

0xd8d9,	// (0x0006af63) popup_slider_window_g5_ParamLimits

0xd8d9,	// (0x0006af63) popup_slider_window_g5

0xd8ff,	// (0x0006af89) popup_slider_window_g6_ParamLimits

0xd8ff,	// (0x0006af89) popup_slider_window_g6

0x5e0b,	// (0x00063495) popup_slider_window_t2_ParamLimits

0x5e0b,	// (0x00063495) popup_slider_window_t2

0x0001,

0xfccd,	// (0x0006d357) popup_slider_window_t_ParamLimits

0xfccd,	// (0x0006d357) popup_slider_window_t

0xd915,	// (0x0006af9f) slider_pane_ParamLimits

0xd915,	// (0x0006af9f) slider_pane

0x6b33,	// (0x000641bd) slider_pane_g1_ParamLimits

0x6b33,	// (0x000641bd) slider_pane_g1

0x6b47,	// (0x000641d1) slider_pane_g2_ParamLimits

0x6b47,	// (0x000641d1) slider_pane_g2

0x6b5d,	// (0x000641e7) slider_pane_g3_ParamLimits

0x6b5d,	// (0x000641e7) slider_pane_g3

0x0003,

0xfde6,	// (0x0006d470) slider_pane_g_ParamLimits

0xfde6,	// (0x0006d470) slider_pane_g

0xac50,	// (0x000682da) popup_tb_float_extension_window_ParamLimits

0xac50,	// (0x000682da) popup_tb_float_extension_window

0x6b89,	// (0x00064213) aid_size_cell_tb_float_ext

0x6fc7,	// (0x00064651) bg_popup_sub_window_cp28

0xe38c,	// (0x0006ba16) grid_tb_float_ext_pane

0xe396,	// (0x0006ba20) cell_tb_float_ext_pane_ParamLimits

0xe396,	// (0x0006ba20) cell_tb_float_ext_pane

0xe3b0,	// (0x0006ba3a) cell_tb_float_ext_pane_g1

0xe3b9,	// (0x0006ba43) grid_highlight_pane_cp12

0xb5d0,	// (0x00068c5a) cell_last_hwr_side_pane_ParamLimits

0xb5d0,	// (0x00068c5a) cell_last_hwr_side_pane

0x4728,	// (0x00061db2) cell_last_hwr_side_pane_g1

0x6bcb,	// (0x00064255) cell_last_hwr_side_pane_g2

0x0001,

0xfdef,	// (0x0006d479) cell_last_hwr_side_pane_g

0xbb2e,	// (0x000691b8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbb2e,	// (0x000691b8) vkb2_area_bottom_space_btn_pane

0x0dd9,	// (0x0005e463) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6688,	// (0x00063d12) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x17ce,	// (0x0005ee58) cell_vkb2_top_candi_pane_t1_ParamLimits

0x180d,	// (0x0005ee97) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x180d,	// (0x0005ee97) vkb2_area_bottom_space_btn_pane_g1

0x1847,	// (0x0005eed1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1847,	// (0x0005eed1) vkb2_area_bottom_space_btn_pane_g2

0x187d,	// (0x0005ef07) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x187d,	// (0x0005ef07) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf4,	// (0x0006d47e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf4,	// (0x0006d47e) vkb2_area_bottom_space_btn_pane_g

0x0c37,	// (0x0005e2c1) cel_fep_hwr_func_pane_ParamLimits

0x0c37,	// (0x0005e2c1) cel_fep_hwr_func_pane

0xb5a5,	// (0x00068c2f) cell_hwr_side_button_pane_ParamLimits

0xb5a5,	// (0x00068c2f) cell_hwr_side_button_pane

0xdaae,	// (0x0006b138) aid_area_touch_clock_ParamLimits

0x7161,	// (0x000647eb) bg_uniindi_top_pane_ParamLimits

0xdac0,	// (0x0006b14a) uniindi_top_pane_g1_ParamLimits

0xdad6,	// (0x0006b160) uniindi_top_pane_g2_ParamLimits

0xdae2,	// (0x0006b16c) uniindi_top_pane_g3_ParamLimits

0x60a9,	// (0x00063733) uniindi_top_pane_g4_ParamLimits

0xfd05,	// (0x0006d38f) uniindi_top_pane_g_ParamLimits

0xdaf3,	// (0x0006b17d) uniindi_top_pane_t1_ParamLimits

0x7161,	// (0x000647eb) bg_vkb2_func_pane_cp01_ParamLimits

0x7161,	// (0x000647eb) bg_vkb2_func_pane_cp01

0x6bd4,	// (0x0006425e) cel_fep_hwr_func_pane_g1_ParamLimits

0x6bd4,	// (0x0006425e) cel_fep_hwr_func_pane_g1

0x7161,	// (0x000647eb) bg_vkb2_func_pane_cp02_ParamLimits

0x7161,	// (0x000647eb) bg_vkb2_func_pane_cp02

0x6bd4,	// (0x0006425e) cell_hwr_side_button_pane_g1_ParamLimits

0x6bd4,	// (0x0006425e) cell_hwr_side_button_pane_g1

0x1dd6,	// (0x0005f460) status_pane_g4_ParamLimits

0x1dd6,	// (0x0005f460) status_pane_g4

0x1df0,	// (0x0005f47a) status_pane_t1

0x438e,	// (0x00061a18) form2_midp_gauge_slider_cont_pane

0x4396,	// (0x00061a20) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcf3b,	// (0x0006a5c5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcf4d,	// (0x0006a5d7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacc,	// (0x0006d156) form2_midp_gauge_slider_pane_t_ParamLimits

0x43cc,	// (0x00061a56) form2_midp_slider_pane_ParamLimits

0x1199,	// (0x0005e823) aid_size_cell_func_vkb2_ParamLimits

0x1199,	// (0x0005e823) aid_size_cell_func_vkb2

0x6b75,	// (0x000641ff) slider_pane_g4_ParamLimits

0x6b75,	// (0x000641ff) slider_pane_g4

0xbb97,	// (0x00069221) form2_midp_gauge_slider_pane_t2_cp01

0xbba5,	// (0x0006922f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbba5,	// (0x0006922f) form2_midp_gauge_slider_pane_t3_cp01

0x18f2,	// (0x0005ef7c) form2_midp_slider_pane_cp01

0x6fc7,	// (0x00064651) navi_smil_pane

0x6c0d,	// (0x00064297) navi_smil_pane_g1

0x6c15,	// (0x0006429f) navi_smil_pane_t1

0x6be2,	// (0x0006426c) form2_midp_slider_pane_g1

0x6beb,	// (0x00064275) form2_midp_slider_pane_g2

0x6bf3,	// (0x0006427d) form2_midp_slider_pane_g3

0x6be2,	// (0x0006426c) form2_midp_slider_pane_g4

0xe3c2,	// (0x0006ba4c) form2_midp_slider_pane_g5

0x0004,

0xfdfd,	// (0x0006d487) form2_midp_slider_pane_g

0x18b7,	// (0x0005ef41) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x18b7,	// (0x0005ef41) vkb2_area_bottom_space_btn_pane_g4

0xae88,	// (0x00068512) lc0_navi_pane_ParamLimits

0xae88,	// (0x00068512) lc0_navi_pane

0xaef2,	// (0x0006857c) lc0_stat_indi_pane_ParamLimits

0xaef2,	// (0x0006857c) lc0_stat_indi_pane

0xaf07,	// (0x00068591) ls0_title_pane_ParamLimits

0xaf07,	// (0x00068591) ls0_title_pane

0x8059,	// (0x000656e3) bg_popup_sub_pane_cp14_ParamLimits

0xda95,	// (0x0006b11f) list_uniindi_pane_ParamLimits

0xdaa1,	// (0x0006b12b) uniindi_top_pane_ParamLimits

0x60f3,	// (0x0006377d) list_single_uniindi_pane_g1_ParamLimits

0x6106,	// (0x00063790) list_single_uniindi_pane_t1_ParamLimits

0xbbc2,	// (0x0006924c) lc0_stat_clock_pane_ParamLimits

0xbbc2,	// (0x0006924c) lc0_stat_clock_pane

0xe3cd,	// (0x0006ba57) lc0_stat_indi_pane_g1_ParamLimits

0xe3cd,	// (0x0006ba57) lc0_stat_indi_pane_g1

0xe3da,	// (0x0006ba64) lc0_stat_indi_pane_g2_ParamLimits

0xe3da,	// (0x0006ba64) lc0_stat_indi_pane_g2

0x0001,

0xfe08,	// (0x0006d492) lc0_stat_indi_pane_g_ParamLimits

0xfe08,	// (0x0006d492) lc0_stat_indi_pane_g

0xbbd2,	// (0x0006925c) lc0_uni_indicator_pane_ParamLimits

0xbbd2,	// (0x0006925c) lc0_uni_indicator_pane

0xe3e7,	// (0x0006ba71) ls0_title_pane_g1_ParamLimits

0xe3e7,	// (0x0006ba71) ls0_title_pane_g1

0xe3fb,	// (0x0006ba85) ls0_title_pane_t1_ParamLimits

0xe3fb,	// (0x0006ba85) ls0_title_pane_t1

0xbbe2,	// (0x0006926c) lc0_uni_indicator_pane_g1_ParamLimits

0xbbe2,	// (0x0006926c) lc0_uni_indicator_pane_g1

0x6c87,	// (0x00064311) lc0_stat_clock_pane_t1

0xe7bf,	// (0x0006be49) main_ai5_pane

0x6c95,	// (0x0006431f) ai5_sk_pane_ParamLimits

0x6c95,	// (0x0006431f) ai5_sk_pane

0xe429,	// (0x0006bab3) cell_ai5_widget_pane_ParamLimits

0xe429,	// (0x0006bab3) cell_ai5_widget_pane

0x6d6b,	// (0x000643f5) aid_size_cell_widget_grid

0x6d79,	// (0x00064403) bg_ai5_widget_pane_ParamLimits

0x6d79,	// (0x00064403) bg_ai5_widget_pane

0x6df5,	// (0x0006447f) cell_ai5_widget_pane_g2

0x6e09,	// (0x00064493) cell_ai5_widget_pane_g3

0x6e23,	// (0x000644ad) cell_ai5_widget_pane_g4

0x6e33,	// (0x000644bd) cell_ai5_widget_pane_g5

0x6e43,	// (0x000644cd) cell_ai5_widget_pane_g6

0x6e4f,	// (0x000644d9) cell_ai5_widget_pane_g7

0x6ebb,	// (0x00064545) cell_ai5_widget_pane_t1_ParamLimits

0x6ebb,	// (0x00064545) cell_ai5_widget_pane_t1

0x6ed8,	// (0x00064562) cell_ai5_widget_pane_t2_ParamLimits

0x6ed8,	// (0x00064562) cell_ai5_widget_pane_t2

0x6ef0,	// (0x0006457a) cell_ai5_widget_pane_t3_ParamLimits

0x6ef0,	// (0x0006457a) cell_ai5_widget_pane_t3

0x6f08,	// (0x00064592) cell_ai5_widget_pane_t4_ParamLimits

0x6f08,	// (0x00064592) cell_ai5_widget_pane_t4

0xe495,	// (0x0006bb1f) cell_ai5_widget_pane_t5_ParamLimits

0xe495,	// (0x0006bb1f) cell_ai5_widget_pane_t5

0x6f4d,	// (0x000645d7) cell_ai5_widget_pane_t6_ParamLimits

0x6f4d,	// (0x000645d7) cell_ai5_widget_pane_t6

0x6f5f,	// (0x000645e9) cell_ai5_widget_pane_t7_ParamLimits

0x6f5f,	// (0x000645e9) cell_ai5_widget_pane_t7

0x6f7e,	// (0x00064608) cell_ai5_widget_pane_t8_ParamLimits

0x6f7e,	// (0x00064608) cell_ai5_widget_pane_t8

0x000b,

0xfe28,	// (0x0006d4b2) cell_ai5_widget_pane_t_ParamLimits

0xfe28,	// (0x0006d4b2) cell_ai5_widget_pane_t

0x72dc,	// (0x00064966) grid_ai5_widget_pane

0x8059,	// (0x000656e3) highlight_cell_ai5_widget_pane_ParamLimits

0x8059,	// (0x000656e3) highlight_cell_ai5_widget_pane

0xe4b5,	// (0x0006bb3f) ai5_sk_left_pane

0xe4bf,	// (0x0006bb49) ai5_sk_middle_pane

0xe4c9,	// (0x0006bb53) ai5_sk_right_pane

0x7308,	// (0x00064992) bg_ai5_widget_pane_g1_ParamLimits

0x7308,	// (0x00064992) bg_ai5_widget_pane_g1

0x7314,	// (0x0006499e) bg_ai5_widget_pane_g2_ParamLimits

0x7314,	// (0x0006499e) bg_ai5_widget_pane_g2

0x7320,	// (0x000649aa) bg_ai5_widget_pane_g3_ParamLimits

0x7320,	// (0x000649aa) bg_ai5_widget_pane_g3

0x732c,	// (0x000649b6) bg_ai5_widget_pane_g4_ParamLimits

0x732c,	// (0x000649b6) bg_ai5_widget_pane_g4

0x7338,	// (0x000649c2) bg_ai5_widget_pane_g5_ParamLimits

0x7338,	// (0x000649c2) bg_ai5_widget_pane_g5

0x7344,	// (0x000649ce) bg_ai5_widget_pane_g6_ParamLimits

0x7344,	// (0x000649ce) bg_ai5_widget_pane_g6

0x7350,	// (0x000649da) bg_ai5_widget_pane_g7_ParamLimits

0x7350,	// (0x000649da) bg_ai5_widget_pane_g7

0x735c,	// (0x000649e6) bg_ai5_widget_pane_g8_ParamLimits

0x735c,	// (0x000649e6) bg_ai5_widget_pane_g8

0x7368,	// (0x000649f2) bg_ai5_widget_pane_g9_ParamLimits

0x7368,	// (0x000649f2) bg_ai5_widget_pane_g9

0x0008,

0xfe41,	// (0x0006d4cb) bg_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x0006d4cb) bg_ai5_widget_pane_g

0x739a,	// (0x00064a24) cell_shortcut_ai5_widget_pane_ParamLimits

0x739a,	// (0x00064a24) cell_shortcut_ai5_widget_pane

0xc3f1,	// (0x00069a7b) bg_cell_shortcut_ai5_widget_pane

0x73ab,	// (0x00064a35) cell_grid_ai5_widget_pane_g1

0xc3f1,	// (0x00069a7b) highlight_cell_shortcut_ai5_widget_pane

0x1f5a,	// (0x0005f5e4) ai5_sk_left_pane_g1

0x73b4,	// (0x00064a3e) ai5_sk_left_pane_g2

0x73bc,	// (0x00064a46) ai5_sk_left_pane_g3

0x73c4,	// (0x00064a4e) ai5_sk_left_pane_g4

0x0003,

0xfe54,	// (0x0006d4de) ai5_sk_left_pane_g

0x73cc,	// (0x00064a56) ai5_sk_left_pane_t1

0x1f62,	// (0x0005f5ec) ai5_sk_right_pane_g1

0x73da,	// (0x00064a64) ai5_sk_right_pane_g2

0x73e2,	// (0x00064a6c) ai5_sk_right_pane_g3

0x73ea,	// (0x00064a74) ai5_sk_right_pane_g4

0x0003,

0xfe5d,	// (0x0006d4e7) ai5_sk_right_pane_g

0x73f2,	// (0x00064a7c) ai5_sk_right_pane_t1

0x1f62,	// (0x0005f5ec) ai5_sk_middle_pane_g1

0x1f5a,	// (0x0005f5e4) ai5_sk_middle_pane_g2

0x1f7a,	// (0x0005f604) ai5_sk_middle_pane_g3

0x73e2,	// (0x00064a6c) ai5_sk_middle_pane_g4

0x73bc,	// (0x00064a46) ai5_sk_middle_pane_g5

0x7400,	// (0x00064a8a) ai5_sk_middle_pane_g6

0xe4d3,	// (0x0006bb5d) ai5_sk_middle_pane_g7

0x0006,

0xfe66,	// (0x0006d4f0) ai5_sk_middle_pane_g

0xad74,	// (0x000683fe) aid_touch_area_size_lc0_ParamLimits

0xad74,	// (0x000683fe) aid_touch_area_size_lc0

0x0e08,	// (0x0005e492) cell_hwr_candidate_pane_t1_ParamLimits

0x0280,	// (0x0005d90a) aid_touch_navi_pane

0xb000,	// (0x0006868a) status_dt_navi_pane_ParamLimits

0xb000,	// (0x0006868a) status_dt_navi_pane

0xb018,	// (0x000686a2) status_dt_sta_pane_ParamLimits

0xb018,	// (0x000686a2) status_dt_sta_pane

0xe4db,	// (0x0006bb65) dt_sta_controll_pane

0xe4e8,	// (0x0006bb72) dt_sta_indi_pane

0xe4f5,	// (0x0006bb7f) dt_sta_title_pane

0x7161,	// (0x000647eb) bg_dt_sta_indi_pane_ParamLimits

0x7161,	// (0x000647eb) bg_dt_sta_indi_pane

0xe507,	// (0x0006bb91) dt_sta_battery_pane

0xe50f,	// (0x0006bb99) dt_sta_indi_pane_g1

0x7452,	// (0x00064adc) dt_sta_indi_pane_g2

0x745b,	// (0x00064ae5) dt_sta_indi_pane_g3

0x0002,

0xfe75,	// (0x0006d4ff) dt_sta_indi_pane_g

0x7464,	// (0x00064aee) dt_sta_signal_pane

0x8059,	// (0x000656e3) bg_dt_sta_title_pane_ParamLimits

0x8059,	// (0x000656e3) bg_dt_sta_title_pane

0x2db4,	// (0x0006043e) dt_sta_title_pane_g1

0xe518,	// (0x0006bba2) dt_sta_title_pane_t1_ParamLimits

0xe518,	// (0x0006bba2) dt_sta_title_pane_t1

0x6fc7,	// (0x00064651) bg_dt_sta_control_pane

0xe52d,	// (0x0006bbb7) dt_sta_controll_pane_g1

0xe536,	// (0x0006bbc0) bg_dt_sta_title_pane_g1

0xe53f,	// (0x0006bbc9) bg_dt_sta_title_pane_g2

0xe548,	// (0x0006bbd2) bg_dt_sta_title_pane_g3

0x0002,

0xfe7c,	// (0x0006d506) bg_dt_sta_title_pane_g

0x4728,	// (0x00061db2) bg_dt_sta_indi_pane_g1

0x74a6,	// (0x00064b30) dt_sta_signal_pane_g1

0x74ae,	// (0x00064b38) dt_sta_signal_pane_g2

0x0001,

0xfe83,	// (0x0006d50d) dt_sta_signal_pane_g

0x74b6,	// (0x00064b40) dt_sta_battery_pane_g1

0x74bf,	// (0x00064b49) dt_sta_battery_pane_t1

0x4728,	// (0x00061db2) bg_dt_sta_control_pane_g1

0xc016,	// (0x000696a0) fep_china_uni_eep_pane

0xc01e,	// (0x000696a8) fep_china_uni_entry_pane_ParamLimits

0xc02e,	// (0x000696b8) popup_fep_china_uni_window_g1_ParamLimits

0xc03e,	// (0x000696c8) popup_fep_china_uni_window_g2_ParamLimits

0xc03e,	// (0x000696c8) popup_fep_china_uni_window_g2

0x0001,

0xf6ee,	// (0x0006cd78) popup_fep_china_uni_window_g_ParamLimits

0xf6ee,	// (0x0006cd78) popup_fep_china_uni_window_g

0x74ce,	// (0x00064b58) fep_china_uni_eep_pane_g1

0x74d6,	// (0x00064b60) fep_china_uni_eep_pane_t1

0x6c04,	// (0x0006428e) aid_touch_area_size_smil_player

0x03d6,	// (0x0005da60) lc0_clock_pane

0x1de4,	// (0x0005f46e) status_pane_g5_ParamLimits

0x1de4,	// (0x0005f46e) status_pane_g5

0xa7ac,	// (0x00067e36) popup_keymap_window

0x1da2,	// (0x0005f42c) status_icon_pane

0x6e09,	// (0x00064493) cell_ai5_widget_pane_g3_ParamLimits

0x6e23,	// (0x000644ad) cell_ai5_widget_pane_g4_ParamLimits

0x6e33,	// (0x000644bd) cell_ai5_widget_pane_g5_ParamLimits

0x6e5b,	// (0x000644e5) cell_ai5_widget_pane_g8_ParamLimits

0x6e5b,	// (0x000644e5) cell_ai5_widget_pane_g8

0x6e6f,	// (0x000644f9) cell_ai5_widget_pane_g9_ParamLimits

0x6e6f,	// (0x000644f9) cell_ai5_widget_pane_g9

0x6e83,	// (0x0006450d) cell_ai5_widget_pane_g10_ParamLimits

0x6e83,	// (0x0006450d) cell_ai5_widget_pane_g10

0x74e5,	// (0x00064b6f) status_icon_pane_g1

0x6fc7,	// (0x00064651) bg_popup_sub_pane_cp13

0x74ed,	// (0x00064b77) popup_keymap_window_t1

0xa468,	// (0x00067af2) control_pane_g6_ParamLimits

0xa468,	// (0x00067af2) control_pane_g6

0xa475,	// (0x00067aff) control_pane_g7_ParamLimits

0xa475,	// (0x00067aff) control_pane_g7

0xa482,	// (0x00067b0c) control_pane_g8_ParamLimits

0xa482,	// (0x00067b0c) control_pane_g8

0xe4db,	// (0x0006bb65) dt_sta_controll_pane_ParamLimits

0xe4e8,	// (0x0006bb72) dt_sta_indi_pane_ParamLimits

0xe4f5,	// (0x0006bb7f) dt_sta_title_pane_ParamLimits

0x7fa4,	// (0x0006562e) aid_size_touch_scroll_bar_cale

0x90ae,	// (0x00066738) popup_discreet_window_ParamLimits

0x90ae,	// (0x00066738) popup_discreet_window

0x9100,	// (0x0006678a) popup_sk_window

0x25f8,	// (0x0005fc82) bg_popup_sub_pane_cp28_ParamLimits

0x25f8,	// (0x0005fc82) bg_popup_sub_pane_cp28

0x74fb,	// (0x00064b85) popup_discreet_window_g1_ParamLimits

0x74fb,	// (0x00064b85) popup_discreet_window_g1

0xe551,	// (0x0006bbdb) popup_discreet_window_t1_ParamLimits

0xe551,	// (0x0006bbdb) popup_discreet_window_t1

0x7539,	// (0x00064bc3) popup_discreet_window_t2_ParamLimits

0x7539,	// (0x00064bc3) popup_discreet_window_t2

0x0002,

0xfe88,	// (0x0006d512) popup_discreet_window_t_ParamLimits

0xfe88,	// (0x0006d512) popup_discreet_window_t

0x1929,	// (0x0005efb3) popup_sk_window_g1

0x1933,	// (0x0005efbd) popup_sk_window_g2

0x0001,

0xfe8f,	// (0x0006d519) popup_sk_window_g

0xbc0d,	// (0x00069297) popup_sk_window_t1

0xbc1b,	// (0x000692a5) popup_sk_window_t1_copy1

0x6df5,	// (0x0006447f) cell_ai5_widget_pane_g2_ParamLimits

0x6f90,	// (0x0006461a) cell_ai5_widget_pane_t9_ParamLimits

0x6f90,	// (0x0006461a) cell_ai5_widget_pane_t9

0x6fc7,	// (0x00064651) main_fep_fshwr2_pane

0xbc29,	// (0x000692b3) aid_fshwr2_btn_pane

0xbc3d,	// (0x000692c7) aid_fshwr2_syb_pane

0xbc51,	// (0x000692db) aid_fshwr2_txt_pane

0xbc61,	// (0x000692eb) fshwr2_func_candi_pane

0xbc81,	// (0x0006930b) fshwr2_hwr_syb_pane

0xbca3,	// (0x0006932d) fshwr2_icf_pane

0xe7bf,	// (0x0006be49) fshwr2_icf_bg_pane

0x19fb,	// (0x0005f085) fshwr2_icf_pane_t1_ParamLimits

0x19fb,	// (0x0005f085) fshwr2_icf_pane_t1

0xbf93,	// (0x0006961d) fshwr2_func_candi_pane_g1

0xe56f,	// (0x0006bbf9) fshwr2_func_candi_row_pane_ParamLimits

0xe56f,	// (0x0006bbf9) fshwr2_func_candi_row_pane

0xbcd3,	// (0x0006935d) cell_fshwr2_syb_pane_ParamLimits

0xbcd3,	// (0x0006935d) cell_fshwr2_syb_pane

0x1a37,	// (0x0005f0c1) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1a37,	// (0x0005f0c1) fshwr2_hwr_syb_pane_g1

0xe7bf,	// (0x0006be49) bg_popup_call_pane_cp01

0xbcf9,	// (0x00069383) fshwr2_func_candi_cell_pane_ParamLimits

0xbcf9,	// (0x00069383) fshwr2_func_candi_cell_pane

0x23e1,	// (0x0005fa6b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x23e1,	// (0x0005fa6b) fshwr2_func_candi_cell_bg_pane

0xbd44,	// (0x000693ce) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbd44,	// (0x000693ce) fshwr2_func_candi_cell_pane_g1

0xbd7b,	// (0x00069405) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbd7b,	// (0x00069405) fshwr2_func_candi_cell_pane_t1

0xe7bf,	// (0x0006be49) bg_button_pane_cp08

0x8441,	// (0x00065acb) cell_fshwr2_syb_bg_pane

0xbd96,	// (0x00069420) cell_fshwr2_syb_bg_pane_g1

0xbda9,	// (0x00069433) cell_fshwr2_syb_bg_pane_t1

0x8059,	// (0x000656e3) main_tmo_pane

0xc966,	// (0x00069ff0) uni_indicator_pane_g1_ParamLimits

0xc97c,	// (0x0006a006) uni_indicator_pane_g2_ParamLimits

0xc992,	// (0x0006a01c) uni_indicator_pane_g3_ParamLimits

0x3121,	// (0x000607ab) uni_indicator_pane_g4_ParamLimits

0x3121,	// (0x000607ab) uni_indicator_pane_g4

0x3135,	// (0x000607bf) uni_indicator_pane_g5_ParamLimits

0x3135,	// (0x000607bf) uni_indicator_pane_g5

0x3135,	// (0x000607bf) uni_indicator_pane_g6_ParamLimits

0x3135,	// (0x000607bf) uni_indicator_pane_g6

0xf8e6,	// (0x0006cf70) uni_indicator_pane_g_ParamLimits

0xd7d7,	// (0x0006ae61) popup_tmo_note_window_ParamLimits

0xd7d7,	// (0x0006ae61) popup_tmo_note_window

0x117b,	// (0x0005e805) fshwr2_bg_pane

0xbd6c,	// (0x000693f6) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbd6c,	// (0x000693f6) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe94,	// (0x0006d51e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe94,	// (0x0006d51e) fshwr2_func_candi_cell_pane_g

0x0dc1,	// (0x0005e44b) bg_popup_window_pane_cp01

0x1aed,	// (0x0005f177) bg_popup_window_pane_g1_cp01

0x75b2,	// (0x00064c3c) bg_popup_window_pane_cp22_ParamLimits

0x75b2,	// (0x00064c3c) bg_popup_window_pane_cp22

0xe592,	// (0x0006bc1c) listscroll_tmo_link_pane_ParamLimits

0xe592,	// (0x0006bc1c) listscroll_tmo_link_pane

0x7600,	// (0x00064c8a) popup_tmo_note_window_g1_ParamLimits

0x7600,	// (0x00064c8a) popup_tmo_note_window_g1

0xe5d2,	// (0x0006bc5c) tmo_note_info_pane_ParamLimits

0xe5d2,	// (0x0006bc5c) tmo_note_info_pane

0xe5ec,	// (0x0006bc76) list_tmo_note_info_pane_g1_ParamLimits

0xe5ec,	// (0x0006bc76) list_tmo_note_info_pane_g1

0x763e,	// (0x00064cc8) list_tmo_note_info_pane_g2_ParamLimits

0x763e,	// (0x00064cc8) list_tmo_note_info_pane_g2

0x0001,

0xfe99,	// (0x0006d523) list_tmo_note_info_pane_g_ParamLimits

0xfe99,	// (0x0006d523) list_tmo_note_info_pane_g

0x765a,	// (0x00064ce4) list_tmo_note_info_text_pane_ParamLimits

0x765a,	// (0x00064ce4) list_tmo_note_info_text_pane

0x76db,	// (0x00064d65) list_tmo_link_pane

0x76e8,	// (0x00064d72) scroll_pane_cp20

0x76f5,	// (0x00064d7f) list_single_tmo_link_pane_ParamLimits

0x76f5,	// (0x00064d7f) list_single_tmo_link_pane

0x7705,	// (0x00064d8f) list_single_tmo_link_pane_t1

0x7713,	// (0x00064d9d) list_tmo_note_info_text_pane_t1_ParamLimits

0x7713,	// (0x00064d9d) list_tmo_note_info_text_pane_t1

0x9dd3,	// (0x0006745d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9dd3,	// (0x0006745d) aid_size_touch_scroll_bar_cp01

0x9cd3,	// (0x0006735d) aid_size_touch_slider_marker

0x90f0,	// (0x0006677a) popup_settings_window_ParamLimits

0x90f0,	// (0x0006677a) popup_settings_window

0xe9d3,	// (0x0006c05d) popup_candi_list_indi_window

0x0280,	// (0x0005d90a) aid_touch_navi_pane_ParamLimits

0x10d6,	// (0x0005e760) rs_clock_indi_pane

0x10df,	// (0x0005e769) sctrl_sk_bottom_pane_ParamLimits

0x10f0,	// (0x0005e77a) sctrl_sk_top_pane_ParamLimits

0xb862,	// (0x00068eec) popup_fep_tooltip_window

0x6d6b,	// (0x000643f5) aid_size_cell_widget_grid_ParamLimits

0x6de0,	// (0x0006446a) cell_ai5_widget_pane_g1_ParamLimits

0x6de0,	// (0x0006446a) cell_ai5_widget_pane_g1

0x6e43,	// (0x000644cd) cell_ai5_widget_pane_g6_ParamLimits

0x6e4f,	// (0x000644d9) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0d,	// (0x0006d497) cell_ai5_widget_pane_g_ParamLimits

0xfe0d,	// (0x0006d497) cell_ai5_widget_pane_g

0x7299,	// (0x00064923) cell_ai5_widget_pane_t10_ParamLimits

0x7299,	// (0x00064923) cell_ai5_widget_pane_t10

0x72dc,	// (0x00064966) grid_ai5_widget_pane_ParamLimits

0x7374,	// (0x000649fe) cell_contacts_ai5_widget_pane_ParamLimits

0x7374,	// (0x000649fe) cell_contacts_ai5_widget_pane

0x754e,	// (0x00064bd8) popup_discreet_window_t3_ParamLimits

0x754e,	// (0x00064bd8) popup_discreet_window_t3

0xbcbf,	// (0x00069349) popup_fshwr2_char_preview_window_ParamLimits

0xbcbf,	// (0x00069349) popup_fshwr2_char_preview_window

0xe603,	// (0x0006bc8d) tmo_note_info_pane_t1

0xe618,	// (0x0006bca2) tmo_note_info_pane_t2

0xe62f,	// (0x0006bcb9) tmo_note_info_pane_t3

0x76b7,	// (0x00064d41) tmo_note_info_pane_t4

0x76c9,	// (0x00064d53) tmo_note_info_pane_t5

0x0004,

0xfe9e,	// (0x0006d528) tmo_note_info_pane_t

0x76db,	// (0x00064d65) list_tmo_link_pane_ParamLimits

0x76e8,	// (0x00064d72) scroll_pane_cp20_ParamLimits

0xe7bf,	// (0x0006be49) bg_popup_fep_char_preview_window_cp01

0xe644,	// (0x0006bcce) popup_fshwr2_char_preview_window_t1

0x773a,	// (0x00064dc4) popup_candi_list_indi_window_g1

0x7743,	// (0x00064dcd) bg_cell_contacts_ai5_widget_pane

0x774f,	// (0x00064dd9) cell_contacts_ai5_widget_pane_g1

0x4e02,	// (0x0006248c) cell_contacts_ai5_widget_pane_g2

0x7764,	// (0x00064dee) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea9,	// (0x0006d533) cell_contacts_ai5_widget_pane_g

0x7770,	// (0x00064dfa) cell_contacts_ai5_widget_pane_t1

0x8059,	// (0x000656e3) highlight_cell_shortcut_ai5_widget_pane_cp01

0x77e7,	// (0x00064e71) settings_container_pane

0xc3f1,	// (0x00069a7b) listscroll_set_pane_copy1

0x3caf,	// (0x00061339) scroll_pane_cp121_copy1

0x239d,	// (0x0005fa27) set_content_pane_copy1

0xe652,	// (0x0006bcdc) aid_height_set_list_copy1_ParamLimits

0xe652,	// (0x0006bcdc) aid_height_set_list_copy1

0x332d,	// (0x000609b7) aid_size_parent_copy1_ParamLimits

0x332d,	// (0x000609b7) aid_size_parent_copy1

0xe65e,	// (0x0006bce8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe65e,	// (0x0006bce8) button_value_adjust_pane_cp6_copy1

0x8441,	// (0x00065acb) list_highlight_pane_cp2_copy1_ParamLimits

0x8441,	// (0x00065acb) list_highlight_pane_cp2_copy1

0xe672,	// (0x0006bcfc) list_set_pane_copy1_ParamLimits

0xe672,	// (0x0006bcfc) list_set_pane_copy1

0x7782,	// (0x00064e0c) main_pane_set_t1_copy1_ParamLimits

0x7782,	// (0x00064e0c) main_pane_set_t1_copy1

0x77bc,	// (0x00064e46) main_pane_set_t2_copy1_ParamLimits

0x77bc,	// (0x00064e46) main_pane_set_t2_copy1

0xe71f,	// (0x0006bda9) main_pane_set_t3_copy1

0xe72d,	// (0x0006bdb7) main_pane_set_t4_copy1

0x77db,	// (0x00064e65) set_content_pane_g1_copy1_ParamLimits

0x77db,	// (0x00064e65) set_content_pane_g1_copy1

0xe73b,	// (0x0006bdc5) setting_code_pane_copy1

0x78e4,	// (0x00064f6e) setting_slider_graphic_pane_copy1

0x78e4,	// (0x00064f6e) setting_slider_pane_copy1

0x78ec,	// (0x00064f76) setting_text_pane_copy1

0x78ec,	// (0x00064f76) setting_volume_pane_copy1

0xe73b,	// (0x0006bdc5) settings_code_pane_cp2_copy1

0xe743,	// (0x0006bdcd) settings_code_pane_cp_copy1_ParamLimits

0xe743,	// (0x0006bdcd) settings_code_pane_cp_copy1

0xbdbf,	// (0x00069449) volume_set_pane_copy1

0xe757,	// (0x0006bde1) volume_set_pane_g10_copy1

0xe75f,	// (0x0006bde9) volume_set_pane_g1_copy1

0xe767,	// (0x0006bdf1) volume_set_pane_g2_copy1

0xe76f,	// (0x0006bdf9) volume_set_pane_g3_copy1

0xe777,	// (0x0006be01) volume_set_pane_g4_copy1

0xe77f,	// (0x0006be09) volume_set_pane_g5_copy1

0xe787,	// (0x0006be11) volume_set_pane_g6_copy1

0xe78f,	// (0x0006be19) volume_set_pane_g7_copy1

0xe797,	// (0x0006be21) volume_set_pane_g8_copy1

0xef19,	// (0x0006c5a3) volume_set_pane_g9_copy1

0x7029,	// (0x000646b3) bg_set_opt_pane_cp_copy1_ParamLimits

0x7029,	// (0x000646b3) bg_set_opt_pane_cp_copy1

0xbdc7,	// (0x00069451) setting_slider_pane_t1_copy1_ParamLimits

0xbdc7,	// (0x00069451) setting_slider_pane_t1_copy1

0xbde6,	// (0x00069470) setting_slider_pane_t2_copy1_ParamLimits

0xbde6,	// (0x00069470) setting_slider_pane_t2_copy1

0xbe00,	// (0x0006948a) setting_slider_pane_t3_copy1_ParamLimits

0xbe00,	// (0x0006948a) setting_slider_pane_t3_copy1

0xbe18,	// (0x000694a2) slider_set_pane_copy1_ParamLimits

0xbe18,	// (0x000694a2) slider_set_pane_copy1

0x80b1,	// (0x0006573b) set_opt_bg_pane_g1_copy2

0x80b9,	// (0x00065743) set_opt_bg_pane_g2_copy2

0x7958,	// (0x00064fe2) set_opt_bg_pane_g3_copy2

0x80c9,	// (0x00065753) set_opt_bg_pane_g4_copy2

0x80d1,	// (0x0006575b) set_opt_bg_pane_g5_copy2

0x80d9,	// (0x00065763) set_opt_bg_pane_g6_copy2

0xef21,	// (0x0006c5ab) set_opt_bg_pane_g7_copy2

0x796a,	// (0x00064ff4) set_opt_bg_pane_g8_copy2

0x7974,	// (0x00064ffe) set_opt_bg_pane_g9_copy2

0xbe2e,	// (0x000694b8) aid_size_touch_slider_mark_copy1_ParamLimits

0xbe2e,	// (0x000694b8) aid_size_touch_slider_mark_copy1

0xef29,	// (0x0006c5b3) slider_set_pane_g1_copy1

0x1b79,	// (0x0005f203) slider_set_pane_g2_copy1

0xb456,	// (0x00068ae0) slider_set_pane_g3_copy1_ParamLimits

0xb456,	// (0x00068ae0) slider_set_pane_g3_copy1

0xb46a,	// (0x00068af4) slider_set_pane_g4_copy1_ParamLimits

0xb46a,	// (0x00068af4) slider_set_pane_g4_copy1

0xb482,	// (0x00068b0c) slider_set_pane_g5_copy1_ParamLimits

0xb482,	// (0x00068b0c) slider_set_pane_g5_copy1

0xb456,	// (0x00068ae0) slider_set_pane_g6_copy1_ParamLimits

0xb456,	// (0x00068ae0) slider_set_pane_g6_copy1

0xbe42,	// (0x000694cc) slider_set_pane_g7_copy1_ParamLimits

0xbe42,	// (0x000694cc) slider_set_pane_g7_copy1

0x6fdb,	// (0x00064665) bg_set_opt_pane_cp2_copy1

0xef32,	// (0x0006c5bc) setting_slider_graphic_pane_g1_copy1

0xef3b,	// (0x0006c5c5) setting_slider_graphic_pane_t1_copy1

0xef4b,	// (0x0006c5d5) setting_slider_graphic_pane_t2_copy1

0xef5b,	// (0x0006c5e5) slider_set_pane_cp_copy1

0x79c0,	// (0x0006504a) input_focus_pane_cp1_copy1

0x79c9,	// (0x00065053) list_set_text_pane_copy1

0x79d1,	// (0x0006505b) setting_text_pane_g1_copy1

0xef6b,	// (0x0006c5f5) set_text_pane_t1_copy1

0x79c0,	// (0x0006504a) input_focus_pane_cp2_copy1

0x79d1,	// (0x0006505b) setting_code_pane_g1_copy1

0x79da,	// (0x00065064) setting_code_pane_t1_copy1

0x79e8,	// (0x00065072) list_set_graphic_pane_copy1

0x6fdb,	// (0x00064665) bg_set_opt_pane_cp4_copy1

0xc16e,	// (0x000697f8) list_set_graphic_pane_g1_copy1_ParamLimits

0xc16e,	// (0x000697f8) list_set_graphic_pane_g1_copy1

0x79fc,	// (0x00065086) list_set_graphic_pane_g2_copy1

0xc186,	// (0x00069810) list_set_graphic_pane_t1_copy1_ParamLimits

0xc186,	// (0x00069810) list_set_graphic_pane_t1_copy1

0x4728,	// (0x00061db2) rs_clock_indi_pane_g1

0x7a04,	// (0x0006508e) rs_clock_indi_pane_t1

0x7a12,	// (0x0006509c) rs_indi_pane

0x7a1a,	// (0x000650a4) rs_indi_pane_g1

0x7a23,	// (0x000650ad) rs_indi_pane_g2

0x773a,	// (0x00064dc4) rs_indi_pane_g3

0x0002,

0xfeb0,	// (0x0006d53a) rs_indi_pane_g

0xc3f1,	// (0x00069a7b) bg_popup_preview_window_pane_cp03

0x7a2c,	// (0x000650b6) popup_fep_tooltip_window_t1

0xd405,	// (0x0006aa8f) popup_note2_window_g2_ParamLimits

0xd405,	// (0x0006aa8f) popup_note2_window_g2

0x0001,

0xfc44,	// (0x0006d2ce) popup_note2_window_g_ParamLimits

0xfc44,	// (0x0006d2ce) popup_note2_window_g

0x58cf,	// (0x00062f59) bg_popup_sub_pane_cp11_ParamLimits

0x58dc,	// (0x00062f66) cell_ai3_links_pane_g1_ParamLimits

0x58f3,	// (0x00062f7d) cell_ai3_links_pane_t1

0xef6b,	// (0x0006c5f5) set_text_pane_t1_copy1_ParamLimits

0xc333,	// (0x000699bd) cell_graphic_popup_pane_cp2_ParamLimits

0xc333,	// (0x000699bd) cell_graphic_popup_pane_cp2

0xef85,	// (0x0006c60f) cell_graphic_popup_pane_g1_cp2

0x7f27,	// (0x000655b1) cell_graphic_popup_pane_g2_cp2

0x7a42,	// (0x000650cc) cell_graphic_popup_pane_g3_cp2

0xef8d,	// (0x0006c617) cell_graphic_popup_pane_t2_cp2

0x7f38,	// (0x000655c2) grid_highlight_pane_cp3_cp2

0x831c,	// (0x000659a6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8059,	// (0x000656e3) main_tmo_pane_ParamLimits

0xd7cb,	// (0x0006ae55) popup_tmo_big_image_note_window

0x6dcf,	// (0x00064459) cell_ai5_widget_list_pane

0x6dd7,	// (0x00064461) cell_ai5_widget_lrg_icon_pane

0xe603,	// (0x0006bc8d) tmo_note_info_pane_t1_ParamLimits

0xe618,	// (0x0006bca2) tmo_note_info_pane_t2_ParamLimits

0xe62f,	// (0x0006bcb9) tmo_note_info_pane_t3_ParamLimits

0x76b7,	// (0x00064d41) tmo_note_info_pane_t4_ParamLimits

0x76c9,	// (0x00064d53) tmo_note_info_pane_t5_ParamLimits

0xfe9e,	// (0x0006d528) tmo_note_info_pane_t_ParamLimits

0x77e7,	// (0x00064e71) settings_container_pane_ParamLimits

0xef63,	// (0x0006c5ed) indicator_popup_pane_cp5

0xef63,	// (0x0006c5ed) indicator_popup_pane_cp6

0x79e8,	// (0x00065072) list_set_graphic_pane_copy1_ParamLimits

0x6fc7,	// (0x00064651) bg_popup_window_pane_cp23

0x7a58,	// (0x000650e2) popup_tmo_big_image_note_window_g1

0x7a61,	// (0x000650eb) popup_tmo_big_image_note_window_t1

0x7a71,	// (0x000650fb) popup_tmo_big_image_note_window_t2

0x7a81,	// (0x0006510b) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb7,	// (0x0006d541) popup_tmo_big_image_note_window_t

0x4728,	// (0x00061db2) cell_ai5_widget_lrg_icon_pane_g1

0x7a91,	// (0x0006511b) cell_ai5_widget_lrg_icon_pane_t1

0x7a9f,	// (0x00065129) cell_ai5_widget_list_row_pane_ParamLimits

0x7a9f,	// (0x00065129) cell_ai5_widget_list_row_pane

0x7ab6,	// (0x00065140) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7ab6,	// (0x00065140) cell_ai5_widget_list_row_pane_g1

0xef9b,	// (0x0006c625) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xef9b,	// (0x0006c625) cell_ai5_widget_list_row_pane_t1

0x7aee,	// (0x00065178) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7aee,	// (0x00065178) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebe,	// (0x0006d548) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebe,	// (0x0006d548) cell_ai5_widget_list_row_pane_t

0xe7bf,	// (0x0006be49) main_fep_vtchi_ss_pane

0x7b3e,	// (0x000651c8) popup_fep_char_pre_window

0x7b46,	// (0x000651d0) popup_fep_ituss_window

0xeff6,	// (0x0006c680) popup_fep_vkbss_window

0x8441,	// (0x00065acb) grid_vkbss_keypad_pane_ParamLimits

0x8441,	// (0x00065acb) grid_vkbss_keypad_pane

0x7bb2,	// (0x0006523c) ituss_keypad_pane

0x1ba1,	// (0x0005f22b) aid_vkbss_key_offset_ParamLimits

0x1ba1,	// (0x0005f22b) aid_vkbss_key_offset

0xbe58,	// (0x000694e2) cell_vkbss_key_pane_ParamLimits

0xbe58,	// (0x000694e2) cell_vkbss_key_pane

0x7bc2,	// (0x0006524c) bg_cell_vkbss_key_g1_ParamLimits

0x7bc2,	// (0x0006524c) bg_cell_vkbss_key_g1

0xf003,	// (0x0006c68d) cell_vkbss_key_3p_pane_ParamLimits

0xf003,	// (0x0006c68d) cell_vkbss_key_3p_pane

0xf039,	// (0x0006c6c3) cell_vkbss_key_g1_ParamLimits

0xf039,	// (0x0006c6c3) cell_vkbss_key_g1

0xf06f,	// (0x0006c6f9) cell_vkbss_key_t1_ParamLimits

0xf06f,	// (0x0006c6f9) cell_vkbss_key_t1

0x1bf8,	// (0x0005f282) cell_ituss_key_pane_ParamLimits

0x1bf8,	// (0x0005f282) cell_ituss_key_pane

0x7c96,	// (0x00065320) bg_cell_ituss_key_g1_ParamLimits

0x7c96,	// (0x00065320) bg_cell_ituss_key_g1

0x7ca2,	// (0x0006532c) cell_ituss_key_pane_g1_ParamLimits

0x7ca2,	// (0x0006532c) cell_ituss_key_pane_g1

0x1c09,	// (0x0005f293) cell_ituss_key_pane_g2_ParamLimits

0x1c09,	// (0x0005f293) cell_ituss_key_pane_g2

0x0005,

0xfec5,	// (0x0006d54f) cell_ituss_key_pane_g_ParamLimits

0xfec5,	// (0x0006d54f) cell_ituss_key_pane_g

0x1c8d,	// (0x0005f317) cell_ituss_key_t1_ParamLimits

0x1c8d,	// (0x0005f317) cell_ituss_key_t1

0x1cc7,	// (0x0005f351) cell_ituss_key_t2_ParamLimits

0x1cc7,	// (0x0005f351) cell_ituss_key_t2

0x1cf9,	// (0x0005f383) cell_ituss_key_t3_ParamLimits

0x1cf9,	// (0x0005f383) cell_ituss_key_t3

0x1d2a,	// (0x0005f3b4) cell_ituss_key_t4_ParamLimits

0x1d2a,	// (0x0005f3b4) cell_ituss_key_t4

0x0004,

0xfed2,	// (0x0006d55c) cell_ituss_key_t_ParamLimits

0xfed2,	// (0x0006d55c) cell_ituss_key_t

0xf0cb,	// (0x0006c755) cell_vkbss_key_3p_pane_g1

0xf0d3,	// (0x0006c75d) cell_vkbss_key_3p_pane_g2

0xf0db,	// (0x0006c765) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedd,	// (0x0006d567) cell_vkbss_key_3p_pane_g

0xc3f1,	// (0x00069a7b) bg_popup_fep_char_preview_window_cp02

0x7ce0,	// (0x0006536a) popup_fep_char_pre_window_t1

0xe48b,	// (0x0006bb15) main_ai5_sk_pane

0x7743,	// (0x00064dcd) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x774f,	// (0x00064dd9) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e02,	// (0x0006248c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7764,	// (0x00064dee) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea9,	// (0x0006d533) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7770,	// (0x00064dfa) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8059,	// (0x000656e3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf0e3,	// (0x0006c76d) main_ai5_sk_pane_g1

0xc5bf,	// (0x00069c49) popup_query_code_window_g1

0xefe7,	// (0x0006c671) popup_fep_vkb_icf_pane

0x7b89,	// (0x00065213) popup_fep_vtchi_icf_pane

0x7cf7,	// (0x00065381) bg_icf_pane

0x7cf7,	// (0x00065381) list_vkb_icf_pane

0x7d03,	// (0x0006538d) bg_icf_pane_cp01

0x7d16,	// (0x000653a0) vtchi_icf_list_pane

0xf138,	// (0x0006c7c2) list_vkb_icf_pane_t1_ParamLimits

0xf138,	// (0x0006c7c2) list_vkb_icf_pane_t1

0x7d9b,	// (0x00065425) vtchi_icf_list_pane_t1_ParamLimits

0x7d9b,	// (0x00065425) vtchi_icf_list_pane_t1

0x7b46,	// (0x000651d0) popup_fep_ituss_window_ParamLimits

0x7b89,	// (0x00065213) popup_fep_vtchi_icf_pane_ParamLimits

0x7bb2,	// (0x0006523c) ituss_keypad_pane_ParamLimits

0x1b97,	// (0x0005f221) ituss_sks_pane

0x7cf7,	// (0x00065381) bg_icf_pane_ParamLimits

0xefcc,	// (0x0006c656) icf_edit_indi_pane_ParamLimits

0xefcc,	// (0x0006c656) icf_edit_indi_pane

0x7cf7,	// (0x00065381) list_vkb_icf_pane_ParamLimits

0x7d03,	// (0x0006538d) bg_icf_pane_cp01_ParamLimits

0x7b31,	// (0x000651bb) icf_edit_indi_pane_cp01_ParamLimits

0x7b31,	// (0x000651bb) icf_edit_indi_pane_cp01

0x7d16,	// (0x000653a0) vtchi_query_pane

0x6bd4,	// (0x0006425e) icf_edit_indi_pane_g1_ParamLimits

0x6bd4,	// (0x0006425e) icf_edit_indi_pane_g1

0xf150,	// (0x0006c7da) icf_edit_indi_pane_g2_ParamLimits

0xf150,	// (0x0006c7da) icf_edit_indi_pane_g2

0x0001,

0xff08,	// (0x0006d592) icf_edit_indi_pane_g_ParamLimits

0xff08,	// (0x0006d592) icf_edit_indi_pane_g

0xf164,	// (0x0006c7ee) icf_edit_indi_pane_t1

0x7dbf,	// (0x00065449) bg_input_focus_pane_cp042

0x7f9b,	// (0x00065625) vtchi_button_pane

0x7dc8,	// (0x00065452) vtchi_query_pane_t1

0x7dd6,	// (0x00065460) vtchi_query_pane_t2

0x7de4,	// (0x0006546e) vtchi_query_pane_t3

0x0002,

0xfef7,	// (0x0006d581) vtchi_query_pane_t

0xe7bf,	// (0x0006be49) bg_button_pane_cp13

0x7df2,	// (0x0006547c) vtchi_button_pane_g1

0x1d6d,	// (0x0005f3f7) ituss_sks_pane_g1

0x1d78,	// (0x0005f402) ituss_sks_pane_g2

0x0001,

0xfefe,	// (0x0006d588) ituss_sks_pane_g

0x7dfa,	// (0x00065484) ituss_sks_pane_t1

0x7e08,	// (0x00065492) ituss_sks_pane_t2

0x0001,

0xff03,	// (0x0006d58d) ituss_sks_pane_t

0x40c7,	// (0x00061751) indicator_nsta_pane_cp_g1

0x40d0,	// (0x0006175a) indicator_nsta_pane_cp_g2

0x40d8,	// (0x00061762) indicator_nsta_pane_cp_g3

0x40e0,	// (0x0006176a) indicator_nsta_pane_cp_g4

0x40d0,	// (0x0006175a) indicator_nsta_pane_cp_g5

0x40d8,	// (0x00061762) indicator_nsta_pane_cp_g6

0x0005,

0xfa82,	// (0x0006d10c) indicator_nsta_pane_cp_g

0xe26a,	// (0x0006b8f4) cell_graphic2_pane_t2_ParamLimits

0xe26a,	// (0x0006b8f4) cell_graphic2_pane_t2

0x0001,

0xfd94,	// (0x0006d41e) cell_graphic2_pane_t_ParamLimits

0xfd94,	// (0x0006d41e) cell_graphic2_pane_t

0xe2a1,	// (0x0006b92b) cell_graphic2_control_pane_t1

0xa0ab,	// (0x00067735) signal_pane_g3_ParamLimits

0xa0ab,	// (0x00067735) signal_pane_g3

0xa0bf,	// (0x00067749) signal_pane_g4_ParamLimits

0xa0bf,	// (0x00067749) signal_pane_g4

0x7b00,	// (0x0006518a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7b00,	// (0x0006518a) cell_ai5_widget_list_row_pane_t3

0x7cb6,	// (0x00065340) cell_ituss_key_pane_t1_ParamLimits

0x7cb6,	// (0x00065340) cell_ituss_key_pane_t1

0x206c,	// (0x0005f6f6) form_field_data_wide_pane_vc_t2_ParamLimits

0x206c,	// (0x0005f6f6) form_field_data_wide_pane_vc_t2

0x2080,	// (0x0005f70a) form_field_data_wide_pane_vc_t3_ParamLimits

0x2080,	// (0x0005f70a) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ce,	// (0x0006ce58) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ce,	// (0x0006ce58) form_field_data_wide_pane_vc_t

0x3d71,	// (0x000613fb) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3d71,	// (0x000613fb) form_field_slider_wide_pane_vc_t3

0x3e4f,	// (0x000614d9) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3e4f,	// (0x000614d9) form_field_popup_wide_pane_vc_t2

0x3e66,	// (0x000614f0) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3e66,	// (0x000614f0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa71,	// (0x0006d0fb) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x0006d0fb) form_field_popup_wide_pane_vc_t

0xbc29,	// (0x000692b3) aid_fshwr2_btn_pane_ParamLimits

0xbc3d,	// (0x000692c7) aid_fshwr2_syb_pane_ParamLimits

0xbc51,	// (0x000692db) aid_fshwr2_txt_pane_ParamLimits

0x117b,	// (0x0005e805) fshwr2_bg_pane_ParamLimits

0xbc61,	// (0x000692eb) fshwr2_func_candi_pane_ParamLimits

0xbc81,	// (0x0006930b) fshwr2_hwr_syb_pane_ParamLimits

0xbca3,	// (0x0006932d) fshwr2_icf_pane_ParamLimits

0x3d2b,	// (0x000613b5) list_double_graphic_pane_vc_g4_ParamLimits

0x3d2b,	// (0x000613b5) list_double_graphic_pane_vc_g4

0x1c29,	// (0x0005f2b3) cell_ituss_key_pane_g3_ParamLimits

0x1c29,	// (0x0005f2b3) cell_ituss_key_pane_g3

0x1d5b,	// (0x0005f3e5) cell_ituss_key_t5_ParamLimits

0x1d5b,	// (0x0005f3e5) cell_ituss_key_t5

0xeff6,	// (0x0006c680) popup_fep_vkbss_window_ParamLimits

0x6d62,	// (0x000643ec) aid_cell_ai5_quarter

0xf164,	// (0x0006c7ee) icf_edit_indi_pane_t1_ParamLimits

0x9519,	// (0x00066ba3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9519,	// (0x00066ba3) aid_tch_indicator_popup_pane_cp2

0x952c,	// (0x00066bb6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x952c,	// (0x00066bb6) aid_tch_query_popup_data_pane_cp2

0x23e1,	// (0x0005fa6b) aid_tch_query_popup_pane_ParamLimits

0x23e1,	// (0x0005fa6b) aid_tch_query_popup_pane

0x23e1,	// (0x0005fa6b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x23e1,	// (0x0005fa6b) aid_tch_query_popup_data_pane_cp1

0x8441,	// (0x00065acb) cell_fshwr2_syb_bg_pane_ParamLimits

0xbd96,	// (0x00069420) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbda9,	// (0x00069433) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xefe7,	// (0x0006c671) popup_fep_vkb_icf_pane_ParamLimits

0xbb8f,	// (0x00069219) bg_popup_fep_char_preview_window_g10

0x6e97,	// (0x00064521) cell_ai5_widget_pane_g11_ParamLimits

0x6e97,	// (0x00064521) cell_ai5_widget_pane_g11

0x6ea3,	// (0x0006452d) cell_ai5_widget_pane_g12_ParamLimits

0x6ea3,	// (0x0006452d) cell_ai5_widget_pane_g12

0x6eaf,	// (0x00064539) cell_ai5_widget_pane_g13_ParamLimits

0x6eaf,	// (0x00064539) cell_ai5_widget_pane_g13

0x72b8,	// (0x00064942) cell_ai5_widget_pane_t11_ParamLimits

0x72b8,	// (0x00064942) cell_ai5_widget_pane_t11

0x72ca,	// (0x00064954) cell_ai5_widget_pane_t12_ParamLimits

0x72ca,	// (0x00064954) cell_ai5_widget_pane_t12

0x1c35,	// (0x0005f2bf) cell_ituss_key_pane_g4_ParamLimits

0x1c35,	// (0x0005f2bf) cell_ituss_key_pane_g4

0x1c51,	// (0x0005f2db) cell_ituss_key_pane_g5_ParamLimits

0x1c51,	// (0x0005f2db) cell_ituss_key_pane_g5

0x1c6d,	// (0x0005f2f7) cell_ituss_key_pane_g6_ParamLimits

0x1c6d,	// (0x0005f2f7) cell_ituss_key_pane_g6

0x1f52,	// (0x0005f5dc) bg_icf_pane_g1

0xf0ec,	// (0x0006c776) bg_icf_pane_g2

0xf0f6,	// (0x0006c780) bg_icf_pane_g3

0xf0fe,	// (0x0006c788) bg_icf_pane_g4

0xf108,	// (0x0006c792) bg_icf_pane_g5

0xf112,	// (0x0006c79c) bg_icf_pane_g6

0xf11c,	// (0x0006c7a6) bg_icf_pane_g7

0xf124,	// (0x0006c7ae) bg_icf_pane_g8

0xf12e,	// (0x0006c7b8) bg_icf_pane_g9

0x0008,

0xfee4,	// (0x0006d56e) bg_icf_pane_g

0x7b9f,	// (0x00065229) popup_hyb_candi_window_ParamLimits

0x7b9f,	// (0x00065229) popup_hyb_candi_window

0x1fde,	// (0x0005f668) bg_popup_sub_pane_cp01_ParamLimits

0x1fde,	// (0x0005f668) bg_popup_sub_pane_cp01

0x7e43,	// (0x000654cd) entry_hyb_candi_pane_ParamLimits

0x7e43,	// (0x000654cd) entry_hyb_candi_pane

0x7e52,	// (0x000654dc) grid_hyb_candi_pane_ParamLimits

0x7e52,	// (0x000654dc) grid_hyb_candi_pane

0x7e67,	// (0x000654f1) grid_hyb_phrase_pane_ParamLimits

0x7e67,	// (0x000654f1) grid_hyb_phrase_pane

0x7e76,	// (0x00065500) cell_hyb_candi_pane_ParamLimits

0x7e76,	// (0x00065500) cell_hyb_candi_pane

0x7e99,	// (0x00065523) cell_hyb_candi_scroll_pane

0xbf93,	// (0x0006961d) cell_hyb_candi_pane_g1

0x7ea2,	// (0x0006552c) cell_hyb_candi_pane_t1

0x7eb0,	// (0x0006553a) cell_hyb_phrase_pane

0xbf93,	// (0x0006961d) cell_hyb_phrase_pane_g1

0x7eb9,	// (0x00065543) cell_hyb_phrase_pane_t1

0x7ec7,	// (0x00065551) entry_hyb_candi_pane_t1

0xc3f1,	// (0x00069a7b) input_focus_pane_cp06

0x7ed5,	// (0x0006555f) cell_hyb_candi_scroll_pane_g1

0x7edd,	// (0x00065567) cell_hyb_candi_scroll_pane_g1_aid

0x7ee5,	// (0x0006556f) cell_hyb_candi_scroll_pane_g2

0x7eed,	// (0x00065577) cell_hyb_candi_scroll_pane_g2_aid

0x7ef5,	// (0x0006557f) cell_hyb_candi_scroll_pane_g3

0x7efd,	// (0x00065587) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large

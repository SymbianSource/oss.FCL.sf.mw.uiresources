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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000bdad };

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
0x6b4a,	// (0x000128f7) Screen

0x6b56,	// (0x00012903) application_window_ParamLimits

0x6b56,	// (0x00012903) application_window

0x38a0,	// (0x0000f64d) screen_g1

0x44d6,	// (0x00010283) area_bottom_pane_ParamLimits

0x44d6,	// (0x00010283) area_bottom_pane

0x459c,	// (0x00010349) area_top_pane_ParamLimits

0x459c,	// (0x00010349) area_top_pane

0x463a,	// (0x000103e7) main_pane_ParamLimits

0x463a,	// (0x000103e7) main_pane

0x3a68,	// (0x0000f815) misc_graphics

0x8cea,	// (0x00014a97) battery_pane_ParamLimits

0x8cea,	// (0x00014a97) battery_pane

0x9acd,	// (0x0001587a) bg_status_flat_pane_g8

0x9ad5,	// (0x00015882) bg_status_flat_pane_g9

0x8db2,	// (0x00014b5f) context_pane_ParamLimits

0x8db2,	// (0x00014b5f) context_pane

0x8ec8,	// (0x00014c75) navi_pane_ParamLimits

0x8ec8,	// (0x00014c75) navi_pane

0x8f4c,	// (0x00014cf9) signal_pane_ParamLimits

0x8f4c,	// (0x00014cf9) signal_pane

0x0008,

0xf848,	// (0x0001b5f5) bg_status_flat_pane_g

0x8fb9,	// (0x00014d66) status_pane_g1_ParamLimits

0x8fb9,	// (0x00014d66) status_pane_g1

0x8fcd,	// (0x00014d7a) status_pane_g2_ParamLimits

0x8fcd,	// (0x00014d7a) status_pane_g2

0x8fd9,	// (0x00014d86) status_pane_g3_ParamLimits

0x8fd9,	// (0x00014d86) status_pane_g3

0x0004,

0xf774,	// (0x0001b521) status_pane_g_ParamLimits

0xf774,	// (0x0001b521) status_pane_g

0x900d,	// (0x00014dba) title_pane_ParamLimits

0x900d,	// (0x00014dba) title_pane

0x904a,	// (0x00014df7) uni_indicator_pane_ParamLimits

0x904a,	// (0x00014df7) uni_indicator_pane

0x8c0a,	// (0x000149b7) bg_list_pane_ParamLimits

0x8c0a,	// (0x000149b7) bg_list_pane

0x8c2a,	// (0x000149d7) find_pane

0x8c32,	// (0x000149df) listscroll_app_pane_ParamLimits

0x8c32,	// (0x000149df) listscroll_app_pane

0x8c3e,	// (0x000149eb) listscroll_form_pane

0x4f1b,	// (0x00010cc8) listscroll_gen_pane_ParamLimits

0x4f1b,	// (0x00010cc8) listscroll_gen_pane

0x4f2f,	// (0x00010cdc) listscroll_set_pane

0x7db1,	// (0x00013b5e) main_idle_act_pane

0x8906,	// (0x000146b3) main_idle_trad_pane

0x8906,	// (0x000146b3) main_list_empty_pane

0x8c32,	// (0x000149df) main_midp_pane

0x8c58,	// (0x00014a05) main_pane_g1_ParamLimits

0x8c58,	// (0x00014a05) main_pane_g1

0x4f45,	// (0x00010cf2) popup_ai_message_window_ParamLimits

0x4f45,	// (0x00010cf2) popup_ai_message_window

0x4feb,	// (0x00010d98) popup_fep_china_uni_window_ParamLimits

0x4feb,	// (0x00010d98) popup_fep_china_uni_window

0x5047,	// (0x00010df4) popup_fep_japan_candidate_window_ParamLimits

0x5047,	// (0x00010df4) popup_fep_japan_candidate_window

0x5067,	// (0x00010e14) popup_fep_japan_predictive_window_ParamLimits

0x5067,	// (0x00010e14) popup_fep_japan_predictive_window

0x5097,	// (0x00010e44) popup_find_window

0x50a4,	// (0x00010e51) popup_grid_graphic_window_ParamLimits

0x50a4,	// (0x00010e51) popup_grid_graphic_window

0x50d0,	// (0x00010e7d) popup_large_graphic_colour_window

0x50f6,	// (0x00010ea3) popup_menu_window_ParamLimits

0x50f6,	// (0x00010ea3) popup_menu_window

0x52ae,	// (0x0001105b) popup_note_image_window

0x529a,	// (0x00011047) popup_note_wait_window_ParamLimits

0x529a,	// (0x00011047) popup_note_wait_window

0x529a,	// (0x00011047) popup_note_window_ParamLimits

0x529a,	// (0x00011047) popup_note_window

0x5304,	// (0x000110b1) popup_query_code_window_ParamLimits

0x5304,	// (0x000110b1) popup_query_code_window

0x5318,	// (0x000110c5) popup_query_data_code_window_ParamLimits

0x5318,	// (0x000110c5) popup_query_data_code_window

0x5335,	// (0x000110e2) popup_query_data_window_ParamLimits

0x5335,	// (0x000110e2) popup_query_data_window

0x5351,	// (0x000110fe) popup_query_sat_info_window_ParamLimits

0x5351,	// (0x000110fe) popup_query_sat_info_window

0x538a,	// (0x00011137) popup_snote_single_graphic_window_ParamLimits

0x538a,	// (0x00011137) popup_snote_single_graphic_window

0x538a,	// (0x00011137) popup_snote_single_text_window_ParamLimits

0x538a,	// (0x00011137) popup_snote_single_text_window

0x539f,	// (0x0001114c) popup_sub_window_general

0x54cf,	// (0x0001127c) popup_window_general_ParamLimits

0x54cf,	// (0x0001127c) popup_window_general

0x8c6e,	// (0x00014a1b) power_save_pane

0x4da1,	// (0x00010b4e) control_pane_g1_ParamLimits

0x4da1,	// (0x00010b4e) control_pane_g1

0x4dc8,	// (0x00010b75) control_pane_g2_ParamLimits

0x4dc8,	// (0x00010b75) control_pane_g2

0x8bcd,	// (0x0001497a) control_pane_g3_ParamLimits

0x8bcd,	// (0x0001497a) control_pane_g3

0x0007,

0xf75c,	// (0x0001b509) control_pane_g_ParamLimits

0xf75c,	// (0x0001b509) control_pane_g

0x4e12,	// (0x00010bbf) control_pane_t1_ParamLimits

0x4e12,	// (0x00010bbf) control_pane_t1

0x4e68,	// (0x00010c15) control_pane_t2_ParamLimits

0x4e68,	// (0x00010c15) control_pane_t2

0x0002,

0xf76d,	// (0x0001b51a) control_pane_t_ParamLimits

0xf76d,	// (0x0001b51a) control_pane_t

0x8af2,	// (0x0001489f) navi_navi_volume_pane_cp1

0x8afa,	// (0x000148a7) status_small_icon_pane

0x8b02,	// (0x000148af) status_small_pane_g1_ParamLimits

0x8b02,	// (0x000148af) status_small_pane_g1

0x8b36,	// (0x000148e3) status_small_pane_g2_ParamLimits

0x8b36,	// (0x000148e3) status_small_pane_g2

0x8b42,	// (0x000148ef) status_small_pane_g3_ParamLimits

0x8b42,	// (0x000148ef) status_small_pane_g3

0x8b4e,	// (0x000148fb) status_small_pane_g4_ParamLimits

0x8b4e,	// (0x000148fb) status_small_pane_g4

0x8b5a,	// (0x00014907) status_small_pane_g5_ParamLimits

0x8b5a,	// (0x00014907) status_small_pane_g5

0x8b68,	// (0x00014915) status_small_pane_g6_ParamLimits

0x8b68,	// (0x00014915) status_small_pane_g6

0x0007,

0xf74b,	// (0x0001b4f8) status_small_pane_g_ParamLimits

0xf74b,	// (0x0001b4f8) status_small_pane_g

0x8b97,	// (0x00014944) status_small_pane_t1

0x8bb9,	// (0x00014966) status_small_wait_pane_ParamLimits

0x8bb9,	// (0x00014966) status_small_wait_pane

0x82f0,	// (0x0001409d) aid_levels_signal_ParamLimits

0x82f0,	// (0x0001409d) aid_levels_signal

0x8302,	// (0x000140af) signal_pane_g1_ParamLimits

0x8302,	// (0x000140af) signal_pane_g1

0x8317,	// (0x000140c4) signal_pane_g2_ParamLimits

0x8317,	// (0x000140c4) signal_pane_g2

0x0003,

0xf6dc,	// (0x0001b489) signal_pane_g_ParamLimits

0xf6dc,	// (0x0001b489) signal_pane_g

0x8352,	// (0x000140ff) context_pane_g1

0x6b66,	// (0x00012913) title_pane_g1

0x6b9c,	// (0x00012949) title_pane_t1

0x6c04,	// (0x000129b1) title_pane_t2

0x6c2a,	// (0x000129d7) title_pane_t3

0x0002,

0xf530,	// (0x0001b2dd) title_pane_t

0x9062,	// (0x00014e0f) aid_levels_battery_ParamLimits

0x9062,	// (0x00014e0f) aid_levels_battery

0x9076,	// (0x00014e23) battery_pane_g1_ParamLimits

0x9076,	// (0x00014e23) battery_pane_g1

0x908c,	// (0x00014e39) battery_pane_g2_ParamLimits

0x908c,	// (0x00014e39) battery_pane_g2

0x0001,

0xf77f,	// (0x0001b52c) battery_pane_g_ParamLimits

0xf77f,	// (0x0001b52c) battery_pane_g

0xa403,	// (0x000161b0) uni_indicator_pane_g1

0xa419,	// (0x000161c6) uni_indicator_pane_g2

0xa42f,	// (0x000161dc) uni_indicator_pane_g3

0x0005,

0xf8f0,	// (0x0001b69d) uni_indicator_pane_g

0x8777,	// (0x00014524) navi_icon_pane_ParamLimits

0x8777,	// (0x00014524) navi_icon_pane

0x86c0,	// (0x0001446d) navi_midp_pane

0x8793,	// (0x00014540) navi_navi_pane

0x879d,	// (0x0001454a) navi_text_pane_ParamLimits

0x879d,	// (0x0001454a) navi_text_pane

0x38a0,	// (0x0000f64d) status_small_wait_pane_g1

0x7099,	// (0x00012e46) status_small_wait_pane_g2

0x0001,

0xf8eb,	// (0x0001b698) status_small_wait_pane_g

0xa128,	// (0x00015ed5) navi_navi_icon_text_pane

0xa130,	// (0x00015edd) navi_navi_pane_g1_ParamLimits

0xa130,	// (0x00015edd) navi_navi_pane_g1

0xa142,	// (0x00015eef) navi_navi_pane_g2_ParamLimits

0xa142,	// (0x00015eef) navi_navi_pane_g2

0x0001,

0xf8b9,	// (0x0001b666) navi_navi_pane_g_ParamLimits

0xf8b9,	// (0x0001b666) navi_navi_pane_g

0xa154,	// (0x00015f01) navi_navi_tabs_pane

0xa15d,	// (0x00015f0a) navi_navi_text_pane

0xa128,	// (0x00015ed5) navi_navi_volume_pane

0xa104,	// (0x00015eb1) navi_text_pane_t1

0xa0f8,	// (0x00015ea5) navi_icon_pane_g1

0xa04b,	// (0x00015df8) navi_navi_text_pane_t1

0x57e7,	// (0x00011594) navi_navi_volume_pane_g1

0x57ef,	// (0x0001159c) volume_small_pane

0x9fb1,	// (0x00015d5e) navi_navi_icon_text_pane_g1

0x9fb9,	// (0x00015d66) navi_navi_icon_text_pane_t1

0x8793,	// (0x00014540) navi_tabs_2_long_pane

0x8793,	// (0x00014540) navi_tabs_2_pane

0x8793,	// (0x00014540) navi_tabs_3_long_pane

0x8793,	// (0x00014540) navi_tabs_3_pane

0x8793,	// (0x00014540) navi_tabs_4_pane

0x57c7,	// (0x00011574) tabs_2_active_pane_ParamLimits

0x57c7,	// (0x00011574) tabs_2_active_pane

0x57d7,	// (0x00011584) tabs_2_passive_pane_ParamLimits

0x57d7,	// (0x00011584) tabs_2_passive_pane

0x5795,	// (0x00011542) tabs_3_active_pane_ParamLimits

0x5795,	// (0x00011542) tabs_3_active_pane

0x57a5,	// (0x00011552) tabs_3_passive_pane_ParamLimits

0x57a5,	// (0x00011552) tabs_3_passive_pane

0x57b6,	// (0x00011563) tabs_3_passive_pane_cp_ParamLimits

0x57b6,	// (0x00011563) tabs_3_passive_pane_cp

0x5751,	// (0x000114fe) tabs_4_active_pane_ParamLimits

0x5751,	// (0x000114fe) tabs_4_active_pane

0x5762,	// (0x0001150f) tabs_4_passive_pane_ParamLimits

0x5762,	// (0x0001150f) tabs_4_passive_pane

0x5773,	// (0x00011520) tabs_4_passive_pane_cp_ParamLimits

0x5773,	// (0x00011520) tabs_4_passive_pane_cp

0x5784,	// (0x00011531) tabs_4_passive_pane_cp2_ParamLimits

0x5784,	// (0x00011531) tabs_4_passive_pane_cp2

0x572d,	// (0x000114da) tabs_2_long_active_pane_ParamLimits

0x572d,	// (0x000114da) tabs_2_long_active_pane

0x573f,	// (0x000114ec) tabs_2_long_passive_pane_ParamLimits

0x573f,	// (0x000114ec) tabs_2_long_passive_pane

0x56ee,	// (0x0001149b) tabs_3_long_active_pane_ParamLimits

0x56ee,	// (0x0001149b) tabs_3_long_active_pane

0x5701,	// (0x000114ae) tabs_3_long_passive_pane_ParamLimits

0x5701,	// (0x000114ae) tabs_3_long_passive_pane

0x571a,	// (0x000114c7) tabs_3_long_passive_pane_cp_ParamLimits

0x571a,	// (0x000114c7) tabs_3_long_passive_pane_cp

0x5694,	// (0x00011441) volume_small_pane_g1

0x569d,	// (0x0001144a) volume_small_pane_g2

0x56a6,	// (0x00011453) volume_small_pane_g3

0x56af,	// (0x0001145c) volume_small_pane_g4

0x56b8,	// (0x00011465) volume_small_pane_g5

0x56c1,	// (0x0001146e) volume_small_pane_g6

0x56ca,	// (0x00011477) volume_small_pane_g7

0x56d3,	// (0x00011480) volume_small_pane_g8

0x56dc,	// (0x00011489) volume_small_pane_g9

0x56e5,	// (0x00011492) volume_small_pane_g10

0x0009,

0xf885,	// (0x0001b632) volume_small_pane_g

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp2_ParamLimits

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp2

0x6c4a,	// (0x000129f7) tabs_3_active_pane_g1

0x6c52,	// (0x000129ff) tabs_3_active_pane_t1

0x6c3c,	// (0x000129e9) bg_passive_tab_pane_cp2_ParamLimits

0x6c3c,	// (0x000129e9) bg_passive_tab_pane_cp2

0x6c4a,	// (0x000129f7) tabs_3_passive_pane_g1

0x6c52,	// (0x000129ff) tabs_3_passive_pane_t1

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp3_ParamLimits

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp3

0x6c64,	// (0x00012a11) tabs_4_active_pane_g1

0x6c6c,	// (0x00012a19) tabs_4_active_pane_t1

0x6c3c,	// (0x000129e9) bg_passive_tab_pane_cp3_ParamLimits

0x6c3c,	// (0x000129e9) bg_passive_tab_pane_cp3

0x6c64,	// (0x00012a11) tabs_4_1_passive_pane_g1

0x6c6c,	// (0x00012a19) tabs_4_1_passive_pane_t1

0x8c32,	// (0x000149df) list_highlight_pane_cp2

0xa678,	// (0x00016425) list_set_pane_ParamLimits

0xa678,	// (0x00016425) list_set_pane

0xa71e,	// (0x000164cb) main_pane_set_t1_ParamLimits

0xa71e,	// (0x000164cb) main_pane_set_t1

0xa73e,	// (0x000164eb) main_pane_set_t2_ParamLimits

0xa73e,	// (0x000164eb) main_pane_set_t2

0xa752,	// (0x000164ff) main_pane_set_t3_ParamLimits

0xa752,	// (0x000164ff) main_pane_set_t3

0xa764,	// (0x00016511) main_pane_set_t4_ParamLimits

0xa764,	// (0x00016511) main_pane_set_t4

0x0003,

0xf955,	// (0x0001b702) main_pane_set_t_ParamLimits

0xf955,	// (0x0001b702) main_pane_set_t

0xa776,	// (0x00016523) setting_code_pane

0xa782,	// (0x0001652f) setting_slider_graphic_pane

0xa782,	// (0x0001652f) setting_slider_pane

0xa782,	// (0x0001652f) setting_text_pane

0xa782,	// (0x0001652f) setting_volume_pane

0x4889,	// (0x00010636) volume_set_pane

0x6c3c,	// (0x000129e9) bg_set_opt_pane_cp

0x4891,	// (0x0001063e) setting_slider_pane_t1

0x48aa,	// (0x00010657) setting_slider_pane_t2

0x48c4,	// (0x00010671) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0001b2e4) setting_slider_pane_t

0x48dc,	// (0x00010689) slider_set_pane

0x3a68,	// (0x0000f815) bg_set_opt_pane_cp2

0x6c7e,	// (0x00012a2b) setting_slider_graphic_pane_g1

0x48f2,	// (0x0001069f) setting_slider_graphic_pane_t1

0x4902,	// (0x000106af) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0001b2eb) setting_slider_graphic_pane_t

0x4912,	// (0x000106bf) slider_set_pane_cp

0x3a68,	// (0x0000f815) input_focus_pane_cp1

0xa637,	// (0x000163e4) list_set_text_pane

0x38a0,	// (0x0000f64d) setting_text_pane_g1

0x3a68,	// (0x0000f815) input_focus_pane_cp2

0x38a0,	// (0x0000f64d) setting_code_pane_g1

0x6c87,	// (0x00012a34) setting_code_pane_t1

0x6c95,	// (0x00012a42) set_text_pane_t1_ParamLimits

0x6c95,	// (0x00012a42) set_text_pane_t1

0x7b69,	// (0x00013916) set_opt_bg_pane_g1

0x7b71,	// (0x0001391e) set_opt_bg_pane_g2

0xa611,	// (0x000163be) set_opt_bg_pane_g3

0x7b81,	// (0x0001392e) set_opt_bg_pane_g4

0x7b89,	// (0x00013936) set_opt_bg_pane_g5

0x7b91,	// (0x0001393e) set_opt_bg_pane_g6

0xa61b,	// (0x000163c8) set_opt_bg_pane_g7

0xa623,	// (0x000163d0) set_opt_bg_pane_g8

0xa62d,	// (0x000163da) set_opt_bg_pane_g9

0x0008,

0xf942,	// (0x0001b6ef) set_opt_bg_pane_g

0xa604,	// (0x000163b1) slider_set_pane_g1

0x585c,	// (0x00011609) slider_set_pane_g2

0x0006,

0xf933,	// (0x0001b6e0) slider_set_pane_g

0x57f8,	// (0x000115a5) volume_set_pane_g1

0x5800,	// (0x000115ad) volume_set_pane_g2

0x5808,	// (0x000115b5) volume_set_pane_g3

0x5810,	// (0x000115bd) volume_set_pane_g4

0x5818,	// (0x000115c5) volume_set_pane_g5

0x5820,	// (0x000115cd) volume_set_pane_g6

0x5828,	// (0x000115d5) volume_set_pane_g7

0x5830,	// (0x000115dd) volume_set_pane_g8

0x5838,	// (0x000115e5) volume_set_pane_g9

0x5840,	// (0x000115ed) volume_set_pane_g10

0x0009,

0xf90b,	// (0x0001b6b8) volume_set_pane_g

0x6caf,	// (0x00012a5c) indicator_pane_ParamLimits

0x6caf,	// (0x00012a5c) indicator_pane

0x6cbb,	// (0x00012a68) main_idle_pane_g2_ParamLimits

0x6cbb,	// (0x00012a68) main_idle_pane_g2

0x6ce3,	// (0x00012a90) main_pane_idle_g1_ParamLimits

0x6ce3,	// (0x00012a90) main_pane_idle_g1

0x6cf0,	// (0x00012a9d) popup_clock_digital_analogue_window_ParamLimits

0x6cf0,	// (0x00012a9d) popup_clock_digital_analogue_window

0x6d07,	// (0x00012ab4) soft_indicator_pane_ParamLimits

0x6d07,	// (0x00012ab4) soft_indicator_pane

0x6d13,	// (0x00012ac0) wallpaper_pane_ParamLimits

0x6d13,	// (0x00012ac0) wallpaper_pane

0x38a0,	// (0x0000f64d) wallpaper_pane_g1

0x6d27,	// (0x00012ad4) indicator_pane_g1_ParamLimits

0x6d27,	// (0x00012ad4) indicator_pane_g1

0xab1a,	// (0x000168c7) navi_navi_icon_text_pane_srt_g1

0x6d42,	// (0x00012aef) soft_indicator_pane_t1

0x6d5c,	// (0x00012b09) aid_ps_area_pane

0x6d6d,	// (0x00012b1a) aid_ps_clock_pane

0x6d7b,	// (0x00012b28) aid_ps_indicator_pane

0x6d87,	// (0x00012b34) indicator_ps_pane_ParamLimits

0x6d87,	// (0x00012b34) indicator_ps_pane

0x6d96,	// (0x00012b43) power_save_pane_g1_ParamLimits

0x6d96,	// (0x00012b43) power_save_pane_g1

0x6da2,	// (0x00012b4f) power_save_pane_g2_ParamLimits

0x6da2,	// (0x00012b4f) power_save_pane_g2

0x448a,	// (0x00010237) aid_navinavi_width_pane

0x6d5c,	// (0x00012b09) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0001b2f0) power_save_pane_g_ParamLimits

0xf543,	// (0x0001b2f0) power_save_pane_g

0x6db0,	// (0x00012b5d) power_save_pane_t1_ParamLimits

0x6db0,	// (0x00012b5d) power_save_pane_t1

0x6d6d,	// (0x00012b1a) aid_ps_clock_pane_ParamLimits

0x6d7b,	// (0x00012b28) aid_ps_indicator_pane_ParamLimits

0x6dc2,	// (0x00012b6f) power_save_pane_t4_ParamLimits

0x6dc2,	// (0x00012b6f) power_save_pane_t4

0x0001,

0xf548,	// (0x0001b2f5) power_save_pane_t_ParamLimits

0xf548,	// (0x0001b2f5) power_save_pane_t

0x6dec,	// (0x00012b99) power_save_t3_ParamLimits

0x6dec,	// (0x00012b99) power_save_t3

0x6dd7,	// (0x00012b84) power_save_t2_ParamLimits

0x6dd7,	// (0x00012b84) power_save_t2

0x6e01,	// (0x00012bae) indicator_ps_pane_g1

0x6e0a,	// (0x00012bb7) ai_gene_pane_ParamLimits

0x6e0a,	// (0x00012bb7) ai_gene_pane

0x6e16,	// (0x00012bc3) ai_links_pane_ParamLimits

0x6e16,	// (0x00012bc3) ai_links_pane

0x6e22,	// (0x00012bcf) indicator_pane_cp1_ParamLimits

0x6e22,	// (0x00012bcf) indicator_pane_cp1

0x6e2e,	// (0x00012bdb) main_pane_idle_g1_cp_ParamLimits

0x6e2e,	// (0x00012bdb) main_pane_idle_g1_cp

0x6e3a,	// (0x00012be7) popup_ai_links_title_window

0x6e43,	// (0x00012bf0) soft_indicator_pane_cp1_ParamLimits

0x6e43,	// (0x00012bf0) soft_indicator_pane_cp1

0xa3f1,	// (0x0001619e) ai_links_pane_g1

0xa3fa,	// (0x000161a7) grid_ai_links_pane

0xa3d4,	// (0x00016181) ai_gene_pane_1

0xa3df,	// (0x0001618c) ai_gene_pane_2

0xa3e8,	// (0x00016195) list_highlight_pane_cp4

0xa3b8,	// (0x00016165) cell_ai_link_pane_ParamLimits

0xa3b8,	// (0x00016165) cell_ai_link_pane

0xa3b0,	// (0x0001615d) cell_ai_link_pane_g1

0x7099,	// (0x00012e46) cell_ai_link_pane_g2

0x0001,

0xf8e6,	// (0x0001b693) cell_ai_link_pane_g

0x3a68,	// (0x0000f815) grid_highlight_cp2

0x3a68,	// (0x0000f815) bg_popup_sub_pane_cp1

0x6e5d,	// (0x00012c0a) popup_ai_links_title_window_t1

0xa2fe,	// (0x000160ab) ai_gene_pane_1_g1_ParamLimits

0xa2fe,	// (0x000160ab) ai_gene_pane_1_g1

0xa30a,	// (0x000160b7) ai_gene_pane_1_g2_ParamLimits

0xa30a,	// (0x000160b7) ai_gene_pane_1_g2

0x0001,

0xf8dc,	// (0x0001b689) ai_gene_pane_1_g_ParamLimits

0xf8dc,	// (0x0001b689) ai_gene_pane_1_g

0xa317,	// (0x000160c4) ai_gene_pane_1_t1_ParamLimits

0xa317,	// (0x000160c4) ai_gene_pane_1_t1

0xa34b,	// (0x000160f8) grid_ai_soft_ind_pane

0xa2e9,	// (0x00016096) ai_gene_pane_2_t1_ParamLimits

0xa2e9,	// (0x00016096) ai_gene_pane_2_t1

0x6e6c,	// (0x00012c19) main_pane_empty_t1_ParamLimits

0x6e6c,	// (0x00012c19) main_pane_empty_t1

0x6e84,	// (0x00012c31) main_pane_empty_t2_ParamLimits

0x6e84,	// (0x00012c31) main_pane_empty_t2

0x6e99,	// (0x00012c46) main_pane_empty_t3_ParamLimits

0x6e99,	// (0x00012c46) main_pane_empty_t3

0x6eab,	// (0x00012c58) main_pane_empty_t4_ParamLimits

0x6eab,	// (0x00012c58) main_pane_empty_t4

0x6ebd,	// (0x00012c6a) main_pane_empty_t5_ParamLimits

0x6ebd,	// (0x00012c6a) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0001b2fa) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0001b2fa) main_pane_empty_t

0x7cdc,	// (0x00013a89) bg_popup_window_pane_ParamLimits

0x7cdc,	// (0x00013a89) bg_popup_window_pane

0xa059,	// (0x00015e06) find_popup_pane_cp2_ParamLimits

0xa059,	// (0x00015e06) find_popup_pane_cp2

0xa065,	// (0x00015e12) heading_pane_ParamLimits

0xa065,	// (0x00015e12) heading_pane

0x3a68,	// (0x0000f815) bg_popup_sub_pane

0x9fd3,	// (0x00015d80) bg_popup_window_pane_g1_ParamLimits

0x9fd3,	// (0x00015d80) bg_popup_window_pane_g1

0x9fdf,	// (0x00015d8c) bg_popup_window_pane_g2_ParamLimits

0x9fdf,	// (0x00015d8c) bg_popup_window_pane_g2

0x9feb,	// (0x00015d98) bg_popup_window_pane_g3_ParamLimits

0x9feb,	// (0x00015d98) bg_popup_window_pane_g3

0x9ff7,	// (0x00015da4) bg_popup_window_pane_g4_ParamLimits

0x9ff7,	// (0x00015da4) bg_popup_window_pane_g4

0xa003,	// (0x00015db0) bg_popup_window_pane_g5_ParamLimits

0xa003,	// (0x00015db0) bg_popup_window_pane_g5

0xa00f,	// (0x00015dbc) bg_popup_window_pane_g6_ParamLimits

0xa00f,	// (0x00015dbc) bg_popup_window_pane_g6

0xa01b,	// (0x00015dc8) bg_popup_window_pane_g7_ParamLimits

0xa01b,	// (0x00015dc8) bg_popup_window_pane_g7

0xa027,	// (0x00015dd4) bg_popup_window_pane_g8_ParamLimits

0xa027,	// (0x00015dd4) bg_popup_window_pane_g8

0xa033,	// (0x00015de0) bg_popup_window_pane_g9_ParamLimits

0xa033,	// (0x00015de0) bg_popup_window_pane_g9

0xa03f,	// (0x00015dec) bg_popup_window_pane_g10_ParamLimits

0xa03f,	// (0x00015dec) bg_popup_window_pane_g10

0x0009,

0xf8a4,	// (0x0001b651) bg_popup_window_pane_g_ParamLimits

0xf8a4,	// (0x0001b651) bg_popup_window_pane_g

0x9f68,	// (0x00015d15) bg_popup_heading_pane_ParamLimits

0x9f68,	// (0x00015d15) bg_popup_heading_pane

0x58e4,	// (0x00011691) tabs_4_passive_pane_cp_srt_ParamLimits

0x58e4,	// (0x00011691) tabs_4_passive_pane_cp_srt

0x58f6,	// (0x000116a3) tabs_4_passive_pane_srt_ParamLimits

0x9f7c,	// (0x00015d29) heading_pane_g2

0x58f6,	// (0x000116a3) tabs_4_passive_pane_srt

0x8c32,	// (0x000149df) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8c32,	// (0x000149df) bg_passive_tab_pane_cp3_srt

0x9f84,	// (0x00015d31) heading_pane_t1_ParamLimits

0x9f84,	// (0x00015d31) heading_pane_t1

0x9f9b,	// (0x00015d48) heading_pane_t2_ParamLimits

0x9f9b,	// (0x00015d48) heading_pane_t2

0x0001,

0xf89f,	// (0x0001b64c) heading_pane_t_ParamLimits

0xf89f,	// (0x0001b64c) heading_pane_t

0x9a95,	// (0x00015842) bg_popup_heading_pane_g1

0x9b44,	// (0x000158f1) bg_popup_heading_pane_g2

0x9b4e,	// (0x000158fb) bg_popup_heading_pane_g3

0x9b58,	// (0x00015905) bg_popup_heading_pane_g4

0x9b62,	// (0x0001590f) bg_popup_heading_pane_g5

0x9b6c,	// (0x00015919) bg_popup_heading_pane_g6

0x9b74,	// (0x00015921) bg_popup_heading_pane_g7

0x9b7c,	// (0x00015929) bg_popup_heading_pane_g8

0x9b86,	// (0x00015933) bg_popup_heading_pane_g9

0x0008,

0xf85b,	// (0x0001b608) bg_popup_heading_pane_g

0x917a,	// (0x00014f27) bg_popup_sub_pane_g1

0x918a,	// (0x00014f37) bg_popup_sub_pane_g2

0x9182,	// (0x00014f2f) bg_popup_sub_pane_g3

0x919a,	// (0x00014f47) bg_popup_sub_pane_g4

0x9192,	// (0x00014f3f) bg_popup_sub_pane_g5

0x91a2,	// (0x00014f4f) bg_popup_sub_pane_g6

0x91aa,	// (0x00014f57) bg_popup_sub_pane_g7

0x91ba,	// (0x00014f67) bg_popup_sub_pane_g8

0x91b2,	// (0x00014f5f) bg_popup_sub_pane_g9

0x0008,

0xf835,	// (0x0001b5e2) bg_popup_sub_pane_g

0x6ed1,	// (0x00012c7e) bg_popup_window_pane_cp5_ParamLimits

0x6ed1,	// (0x00012c7e) bg_popup_window_pane_cp5

0x6eed,	// (0x00012c9a) popup_note_window_g1_ParamLimits

0x6eed,	// (0x00012c9a) popup_note_window_g1

0x6ef9,	// (0x00012ca6) popup_note_window_t1_ParamLimits

0x6ef9,	// (0x00012ca6) popup_note_window_t1

0x6f0f,	// (0x00012cbc) popup_note_window_t2_ParamLimits

0x6f0f,	// (0x00012cbc) popup_note_window_t2

0x6f25,	// (0x00012cd2) popup_note_window_t3_ParamLimits

0x6f25,	// (0x00012cd2) popup_note_window_t3

0x6f3b,	// (0x00012ce8) popup_note_window_t4_ParamLimits

0x6f3b,	// (0x00012ce8) popup_note_window_t4

0x6f63,	// (0x00012d10) popup_note_window_t5_ParamLimits

0x6f63,	// (0x00012d10) popup_note_window_t5

0x0004,

0xf558,	// (0x0001b305) popup_note_window_t_ParamLimits

0xf558,	// (0x0001b305) popup_note_window_t

0x6fad,	// (0x00012d5a) bg_popup_window_pane_cp6_ParamLimits

0x6fad,	// (0x00012d5a) bg_popup_window_pane_cp6

0x9a11,	// (0x000157be) popup_note_image_window_g1_ParamLimits

0x9a11,	// (0x000157be) popup_note_image_window_g1

0x9a1d,	// (0x000157ca) popup_note_image_window_g2_ParamLimits

0x9a1d,	// (0x000157ca) popup_note_image_window_g2

0x0001,

0xf829,	// (0x0001b5d6) popup_note_image_window_g_ParamLimits

0xf829,	// (0x0001b5d6) popup_note_image_window_g

0x9a36,	// (0x000157e3) popup_note_image_window_t1_ParamLimits

0x9a36,	// (0x000157e3) popup_note_image_window_t1

0x9a4f,	// (0x000157fc) popup_note_image_window_t2_ParamLimits

0x9a4f,	// (0x000157fc) popup_note_image_window_t2

0x9a68,	// (0x00015815) popup_note_image_window_t3_ParamLimits

0x9a68,	// (0x00015815) popup_note_image_window_t3

0x0002,

0xf82e,	// (0x0001b5db) popup_note_image_window_t_ParamLimits

0xf82e,	// (0x0001b5db) popup_note_image_window_t

0x98d2,	// (0x0001567f) bg_popup_window_pane_cp7_ParamLimits

0x98d2,	// (0x0001567f) bg_popup_window_pane_cp7

0x9902,	// (0x000156af) popup_note_wait_window_g1_ParamLimits

0x9902,	// (0x000156af) popup_note_wait_window_g1

0x990e,	// (0x000156bb) popup_note_wait_window_g2_ParamLimits

0x990e,	// (0x000156bb) popup_note_wait_window_g2

0x0002,

0xf817,	// (0x0001b5c4) popup_note_wait_window_g_ParamLimits

0xf817,	// (0x0001b5c4) popup_note_wait_window_g

0x9926,	// (0x000156d3) popup_note_wait_window_t1_ParamLimits

0x9926,	// (0x000156d3) popup_note_wait_window_t1

0x994d,	// (0x000156fa) popup_note_wait_window_t2_ParamLimits

0x994d,	// (0x000156fa) popup_note_wait_window_t2

0x996a,	// (0x00015717) popup_note_wait_window_t3_ParamLimits

0x996a,	// (0x00015717) popup_note_wait_window_t3

0x997d,	// (0x0001572a) popup_note_wait_window_t4_ParamLimits

0x997d,	// (0x0001572a) popup_note_wait_window_t4

0x0004,

0xf81e,	// (0x0001b5cb) popup_note_wait_window_t_ParamLimits

0xf81e,	// (0x0001b5cb) popup_note_wait_window_t

0x99a2,	// (0x0001574f) wait_bar_pane_ParamLimits

0x99a2,	// (0x0001574f) wait_bar_pane

0x3a68,	// (0x0000f815) wait_anim_pane

0x3a68,	// (0x0000f815) wait_border_pane

0x38a0,	// (0x0000f64d) wait_anim_pane_g1

0x38a0,	// (0x0000f64d) wait_anim_pane_g2

0x0001,

0xf6d7,	// (0x0001b484) wait_anim_pane_g

0x9876,	// (0x00015623) wait_border_pane_g1

0x9881,	// (0x0001562e) wait_border_pane_g2

0x988a,	// (0x00015637) wait_border_pane_g3

0x0002,

0xf810,	// (0x0001b5bd) wait_border_pane_g

0x96e1,	// (0x0001548e) bg_popup_window_pane_cp16_ParamLimits

0x96e1,	// (0x0001548e) bg_popup_window_pane_cp16

0x97e1,	// (0x0001558e) indicator_popup_pane_cp4_ParamLimits

0x97e1,	// (0x0001558e) indicator_popup_pane_cp4

0x97f5,	// (0x000155a2) popup_query_data_window_t1_ParamLimits

0x97f5,	// (0x000155a2) popup_query_data_window_t1

0x9807,	// (0x000155b4) popup_query_data_window_t2_ParamLimits

0x9807,	// (0x000155b4) popup_query_data_window_t2

0x9820,	// (0x000155cd) popup_query_data_window_t3_ParamLimits

0x9820,	// (0x000155cd) popup_query_data_window_t3

0x0002,

0xf809,	// (0x0001b5b6) popup_query_data_window_t_ParamLimits

0xf809,	// (0x0001b5b6) popup_query_data_window_t

0x983a,	// (0x000155e7) query_popup_data_pane_ParamLimits

0x983a,	// (0x000155e7) query_popup_data_pane

0x984e,	// (0x000155fb) query_popup_data_pane_cp1_ParamLimits

0x984e,	// (0x000155fb) query_popup_data_pane_cp1

0x96e1,	// (0x0001548e) bg_popup_window_pane_cp10_ParamLimits

0x96e1,	// (0x0001548e) bg_popup_window_pane_cp10

0x9713,	// (0x000154c0) indicator_popup_pane_ParamLimits

0x9713,	// (0x000154c0) indicator_popup_pane

0x9735,	// (0x000154e2) popup_query_code_window_t1_ParamLimits

0x9735,	// (0x000154e2) popup_query_code_window_t1

0x974f,	// (0x000154fc) popup_query_code_window_t2_ParamLimits

0x974f,	// (0x000154fc) popup_query_code_window_t2

0x9798,	// (0x00015545) popup_query_code_window_t3_ParamLimits

0x9798,	// (0x00015545) popup_query_code_window_t3

0x0002,

0xf802,	// (0x0001b5af) popup_query_code_window_t_ParamLimits

0xf802,	// (0x0001b5af) popup_query_code_window_t

0x97c7,	// (0x00015574) query_popup_pane_ParamLimits

0x97c7,	// (0x00015574) query_popup_pane

0x6fad,	// (0x00012d5a) bg_popup_window_pane_cp15_ParamLimits

0x6fad,	// (0x00012d5a) bg_popup_window_pane_cp15

0x6fcb,	// (0x00012d78) indicator_popup_pane_cp1_ParamLimits

0x6fcb,	// (0x00012d78) indicator_popup_pane_cp1

0x6fde,	// (0x00012d8b) indicator_popup_pane_cp2_ParamLimits

0x6fde,	// (0x00012d8b) indicator_popup_pane_cp2

0x6ff1,	// (0x00012d9e) popup_query_data_code_window_g1_ParamLimits

0x6ff1,	// (0x00012d9e) popup_query_data_code_window_g1

0x7004,	// (0x00012db1) popup_query_data_code_window_t1_ParamLimits

0x7004,	// (0x00012db1) popup_query_data_code_window_t1

0x7016,	// (0x00012dc3) popup_query_data_code_window_t2_ParamLimits

0x7016,	// (0x00012dc3) popup_query_data_code_window_t2

0x7028,	// (0x00012dd5) popup_query_data_code_window_t3_ParamLimits

0x7028,	// (0x00012dd5) popup_query_data_code_window_t3

0x703e,	// (0x00012deb) popup_query_data_code_window_t4_ParamLimits

0x703e,	// (0x00012deb) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0001b310) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0001b310) popup_query_data_code_window_t

0x55a5,	// (0x00011352) list_single_midp_graphic_pane_g3

0x7056,	// (0x00012e03) query_popup_data_pane_cp2_ParamLimits

0x7069,	// (0x00012e16) query_popup_pane_cp2_ParamLimits

0x7069,	// (0x00012e16) query_popup_pane_cp2

0x3a68,	// (0x0000f815) bg_popup_window_pane_cp11

0x96c5,	// (0x00015472) heading_pane_cp5

0x96cd,	// (0x0001547a) listscroll_popup_info_pane

0x3a68,	// (0x0000f815) input_focus_pane_cp3

0x707c,	// (0x00012e29) query_popup_pane_t1

0x708a,	// (0x00012e37) list_popup_info_pane_ParamLimits

0x708a,	// (0x00012e37) list_popup_info_pane

0x7099,	// (0x00012e46) listscroll_popup_info_pane_g1

0x70a1,	// (0x00012e4e) scroll_pane_cp7

0x70ab,	// (0x00012e58) popup_info_list_pane_t1_ParamLimits

0x70ab,	// (0x00012e58) popup_info_list_pane_t1

0x70c5,	// (0x00012e72) popup_info_list_pane_t2_ParamLimits

0x70c5,	// (0x00012e72) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0001b319) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0001b319) popup_info_list_pane_t

0x3a68,	// (0x0000f815) bg_popup_window_pane_cp12

0xab34,	// (0x000168e1) find_popup_pane

0x6c3c,	// (0x000129e9) bg_popup_window_pane_cp3

0x70df,	// (0x00012e8c) heading_pane_cp3

0x70ee,	// (0x00012e9b) listscroll_popup_graphic_pane

0x3a68,	// (0x0000f815) bg_popup_window_pane_cp4

0x714e,	// (0x00012efb) heading_pane_cp4

0x7158,	// (0x00012f05) listscroll_popup_colour_pane

0x7160,	// (0x00012f0d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7160,	// (0x00012f0d) cell_large_graphic_colour_none_popup_pane

0x7174,	// (0x00012f21) grid_large_graphic_colour_popup_pane_ParamLimits

0x7174,	// (0x00012f21) grid_large_graphic_colour_popup_pane

0x7198,	// (0x00012f45) listscroll_popup_colour_pane_g1_ParamLimits

0x7198,	// (0x00012f45) listscroll_popup_colour_pane_g1

0x71af,	// (0x00012f5c) listscroll_popup_colour_pane_g2_ParamLimits

0x71af,	// (0x00012f5c) listscroll_popup_colour_pane_g2

0x71c6,	// (0x00012f73) listscroll_popup_colour_pane_g3_ParamLimits

0x71c6,	// (0x00012f73) listscroll_popup_colour_pane_g3

0x71d6,	// (0x00012f83) listscroll_popup_colour_pane_g4_ParamLimits

0x71d6,	// (0x00012f83) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0001b31e) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0001b31e) listscroll_popup_colour_pane_g

0x71e6,	// (0x00012f93) scroll_pane_cp6_ParamLimits

0x71e6,	// (0x00012f93) scroll_pane_cp6

0x71f8,	// (0x00012fa5) cell_large_graphic_colour_popup_pane_ParamLimits

0x71f8,	// (0x00012fa5) cell_large_graphic_colour_popup_pane

0x7217,	// (0x00012fc4) cell_large_graphic_colour_none_popup_pane_t1

0x3a68,	// (0x0000f815) grid_highlight_pane_cp5

0x7226,	// (0x00012fd3) cell_large_graphic_colour_popup_pane_g1

0x722e,	// (0x00012fdb) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0001b327) cell_large_graphic_colour_popup_pane_g

0x7236,	// (0x00012fe3) cell_large_graphic_colour_popup_pane_g2_copy1

0x723f,	// (0x00012fec) grid_highlight_pane_cp4

0x7247,	// (0x00012ff4) bg_popup_window_pane_cp8_ParamLimits

0x7247,	// (0x00012ff4) bg_popup_window_pane_cp8

0x7262,	// (0x0001300f) popup_snote_single_text_window_g1_ParamLimits

0x7262,	// (0x0001300f) popup_snote_single_text_window_g1

0x7274,	// (0x00013021) popup_snote_single_text_window_t1_ParamLimits

0x7274,	// (0x00013021) popup_snote_single_text_window_t1

0x7287,	// (0x00013034) popup_snote_single_text_window_t2_ParamLimits

0x7287,	// (0x00013034) popup_snote_single_text_window_t2

0x729a,	// (0x00013047) popup_snote_single_text_window_t3_ParamLimits

0x729a,	// (0x00013047) popup_snote_single_text_window_t3

0x72d3,	// (0x00013080) popup_snote_single_text_window_t4_ParamLimits

0x72d3,	// (0x00013080) popup_snote_single_text_window_t4

0x7307,	// (0x000130b4) popup_snote_single_text_window_t5_ParamLimits

0x7307,	// (0x000130b4) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0001b32c) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0001b32c) popup_snote_single_text_window_t

0x7336,	// (0x000130e3) bg_popup_window_pane_cp9_ParamLimits

0x7336,	// (0x000130e3) bg_popup_window_pane_cp9

0x7262,	// (0x0001300f) popup_snote_single_graphic_window_g1_ParamLimits

0x7262,	// (0x0001300f) popup_snote_single_graphic_window_g1

0x7344,	// (0x000130f1) popup_snote_single_graphic_window_g2_ParamLimits

0x7344,	// (0x000130f1) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0001b337) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0001b337) popup_snote_single_graphic_window_g

0x7350,	// (0x000130fd) popup_snote_single_graphic_window_t1_ParamLimits

0x7350,	// (0x000130fd) popup_snote_single_graphic_window_t1

0x7363,	// (0x00013110) popup_snote_single_graphic_window_t2_ParamLimits

0x7363,	// (0x00013110) popup_snote_single_graphic_window_t2

0x7376,	// (0x00013123) popup_snote_single_graphic_window_t3_ParamLimits

0x7376,	// (0x00013123) popup_snote_single_graphic_window_t3

0x73af,	// (0x0001315c) popup_snote_single_graphic_window_t4_ParamLimits

0x73af,	// (0x0001315c) popup_snote_single_graphic_window_t4

0x73e3,	// (0x00013190) popup_snote_single_graphic_window_t5_ParamLimits

0x73e3,	// (0x00013190) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0001b33c) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0001b33c) popup_snote_single_graphic_window_t

0xaa76,	// (0x00016823) grid_graphic_popup_pane_ParamLimits

0xaa76,	// (0x00016823) grid_graphic_popup_pane

0xaaa0,	// (0x0001684d) listscroll_popup_graphic_pane_g1_ParamLimits

0xaaa0,	// (0x0001684d) listscroll_popup_graphic_pane_g1

0xaab4,	// (0x00016861) listscroll_popup_graphic_pane_g2_ParamLimits

0xaab4,	// (0x00016861) listscroll_popup_graphic_pane_g2

0x0001,

0xf97f,	// (0x0001b72c) listscroll_popup_graphic_pane_g_ParamLimits

0xf97f,	// (0x0001b72c) listscroll_popup_graphic_pane_g

0xaac8,	// (0x00016875) scroll_pane_cp5

0xaa04,	// (0x000167b1) cell_graphic_popup_pane_ParamLimits

0xaa04,	// (0x000167b1) cell_graphic_popup_pane

0xa9e5,	// (0x00016792) cell_graphic_popup_pane_g1

0xa9ed,	// (0x0001679a) cell_graphic_popup_pane_g2

0x7236,	// (0x00012fe3) cell_graphic_popup_pane_g3

0x0002,

0xf978,	// (0x0001b725) cell_graphic_popup_pane_g

0xa9f6,	// (0x000167a3) cell_graphic_popup_pane_t2

0x723f,	// (0x00012fec) grid_highlight_pane_cp3

0x7424,	// (0x000131d1) list_gen_pane_ParamLimits

0x7424,	// (0x000131d1) list_gen_pane

0x7456,	// (0x00013203) scroll_pane

0xa93d,	// (0x000166ea) bg_list_pane_g1_ParamLimits

0xa93d,	// (0x000166ea) bg_list_pane_g1

0xa95a,	// (0x00016707) bg_list_pane_g2_ParamLimits

0xa95a,	// (0x00016707) bg_list_pane_g2

0xa96f,	// (0x0001671c) bg_list_pane_g3_ParamLimits

0xa96f,	// (0x0001671c) bg_list_pane_g3

0xa983,	// (0x00016730) bg_list_pane_g4_ParamLimits

0xa983,	// (0x00016730) bg_list_pane_g4

0xa997,	// (0x00016744) bg_list_pane_g5_ParamLimits

0xa997,	// (0x00016744) bg_list_pane_g5

0x0004,

0xf96d,	// (0x0001b71a) bg_list_pane_g_ParamLimits

0xf96d,	// (0x0001b71a) bg_list_pane_g

0xa83b,	// (0x000165e8) list_double2_graphic_large_graphic_pane_ParamLimits

0xa83b,	// (0x000165e8) list_double2_graphic_large_graphic_pane

0xa83b,	// (0x000165e8) list_double2_graphic_pane_ParamLimits

0xa83b,	// (0x000165e8) list_double2_graphic_pane

0xa83b,	// (0x000165e8) list_double2_large_graphic_pane_ParamLimits

0xa83b,	// (0x000165e8) list_double2_large_graphic_pane

0xa83b,	// (0x000165e8) list_double2_pane_ParamLimits

0xa83b,	// (0x000165e8) list_double2_pane

0xa83b,	// (0x000165e8) list_double_graphic_heading_pane_ParamLimits

0xa83b,	// (0x000165e8) list_double_graphic_heading_pane

0xa83b,	// (0x000165e8) list_double_graphic_pane_ParamLimits

0xa83b,	// (0x000165e8) list_double_graphic_pane

0xa83b,	// (0x000165e8) list_double_heading_pane_ParamLimits

0xa83b,	// (0x000165e8) list_double_heading_pane

0xa83b,	// (0x000165e8) list_double_large_graphic_pane_ParamLimits

0xa83b,	// (0x000165e8) list_double_large_graphic_pane

0xa83b,	// (0x000165e8) list_double_number_pane_ParamLimits

0xa83b,	// (0x000165e8) list_double_number_pane

0xa83b,	// (0x000165e8) list_double_pane_ParamLimits

0xa83b,	// (0x000165e8) list_double_pane

0xa83b,	// (0x000165e8) list_double_time_pane_ParamLimits

0xa83b,	// (0x000165e8) list_double_time_pane

0xa83b,	// (0x000165e8) list_setting_number_pane_ParamLimits

0xa83b,	// (0x000165e8) list_setting_number_pane

0xa83b,	// (0x000165e8) list_setting_pane_ParamLimits

0xa83b,	// (0x000165e8) list_setting_pane

0xa8a4,	// (0x00016651) list_single_2graphic_pane_ParamLimits

0xa8a4,	// (0x00016651) list_single_2graphic_pane

0xa8a4,	// (0x00016651) list_single_graphic_heading_pane_ParamLimits

0xa8a4,	// (0x00016651) list_single_graphic_heading_pane

0xa8a4,	// (0x00016651) list_single_graphic_pane_ParamLimits

0xa8a4,	// (0x00016651) list_single_graphic_pane

0xa8a4,	// (0x00016651) list_single_heading_pane_ParamLimits

0xa8a4,	// (0x00016651) list_single_heading_pane

0xa91b,	// (0x000166c8) list_single_large_graphic_pane_ParamLimits

0xa91b,	// (0x000166c8) list_single_large_graphic_pane

0xa8a4,	// (0x00016651) list_single_number_heading_pane_ParamLimits

0xa8a4,	// (0x00016651) list_single_number_heading_pane

0xa8a4,	// (0x00016651) list_single_number_pane_ParamLimits

0xa8a4,	// (0x00016651) list_single_number_pane

0xa8a4,	// (0x00016651) list_single_pane_ParamLimits

0xa8a4,	// (0x00016651) list_single_pane

0x3a68,	// (0x0000f815) list_highlight_pane_cp1

0x7496,	// (0x00013243) list_single_pane_g1_ParamLimits

0x7496,	// (0x00013243) list_single_pane_g1

0x74a2,	// (0x0001324f) list_single_pane_g2_ParamLimits

0x74a2,	// (0x0001324f) list_single_pane_g2

0x0001,

0xf5a1,	// (0x0001b34e) list_single_pane_g_ParamLimits

0xf5a1,	// (0x0001b34e) list_single_pane_g

0xa7f4,	// (0x000165a1) list_single_pane_t1_ParamLimits

0xa7f4,	// (0x000165a1) list_single_pane_t1

0x7496,	// (0x00013243) list_single_number_pane_g1_ParamLimits

0x7496,	// (0x00013243) list_single_number_pane_g1

0x74a2,	// (0x0001324f) list_single_number_pane_g2_ParamLimits

0x74a2,	// (0x0001324f) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x0001b34e) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x0001b34e) list_single_number_pane_g

0x9108,	// (0x00014eb5) list_single_number_pane_t1_ParamLimits

0x9108,	// (0x00014eb5) list_single_number_pane_t1

0xa596,	// (0x00016343) list_single_number_pane_t2_ParamLimits

0xa596,	// (0x00016343) list_single_number_pane_t2

0x0001,

0xf92e,	// (0x0001b6db) list_single_number_pane_t_ParamLimits

0xf92e,	// (0x0001b6db) list_single_number_pane_t

0x748a,	// (0x00013237) list_single_graphic_pane_g1_ParamLimits

0x748a,	// (0x00013237) list_single_graphic_pane_g1

0x7496,	// (0x00013243) list_single_graphic_pane_g2_ParamLimits

0x7496,	// (0x00013243) list_single_graphic_pane_g2

0x74a2,	// (0x0001324f) list_single_graphic_pane_g3_ParamLimits

0x74a2,	// (0x0001324f) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0001b347) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0001b347) list_single_graphic_pane_g

0x74ae,	// (0x0001325b) list_single_graphic_pane_t1_ParamLimits

0x74ae,	// (0x0001325b) list_single_graphic_pane_t1

0x7496,	// (0x00013243) list_single_heading_pane_g1_ParamLimits

0x7496,	// (0x00013243) list_single_heading_pane_g1

0x74a2,	// (0x0001324f) list_single_heading_pane_g2_ParamLimits

0x74a2,	// (0x0001324f) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0001b34e) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0001b34e) list_single_heading_pane_g

0x74c4,	// (0x00013271) list_single_heading_pane_t1_ParamLimits

0x74c4,	// (0x00013271) list_single_heading_pane_t1

0x74da,	// (0x00013287) list_single_heading_pane_t2_ParamLimits

0x74da,	// (0x00013287) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0001b353) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0001b353) list_single_heading_pane_t

0x7496,	// (0x00013243) list_single_number_heading_pane_g1_ParamLimits

0x7496,	// (0x00013243) list_single_number_heading_pane_g1

0x74a2,	// (0x0001324f) list_single_number_heading_pane_g2_ParamLimits

0x74a2,	// (0x0001324f) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x0001b34e) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x0001b34e) list_single_number_heading_pane_g

0x74c4,	// (0x00013271) list_single_number_heading_pane_t1_ParamLimits

0x74c4,	// (0x00013271) list_single_number_heading_pane_t1

0x74ec,	// (0x00013299) list_single_number_heading_pane_t2_ParamLimits

0x74ec,	// (0x00013299) list_single_number_heading_pane_t2

0x74fe,	// (0x000132ab) list_single_number_heading_pane_t3_ParamLimits

0x74fe,	// (0x000132ab) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x0001b358) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x0001b358) list_single_number_heading_pane_t

0x7510,	// (0x000132bd) list_single_graphic_heading_pane_g1_ParamLimits

0x7510,	// (0x000132bd) list_single_graphic_heading_pane_g1

0x751c,	// (0x000132c9) list_single_graphic_heading_pane_g4_ParamLimits

0x751c,	// (0x000132c9) list_single_graphic_heading_pane_g4

0x74a2,	// (0x0001324f) list_single_graphic_heading_pane_g5_ParamLimits

0x74a2,	// (0x0001324f) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0001b35f) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0001b35f) list_single_graphic_heading_pane_g

0x74c4,	// (0x00013271) list_single_graphic_heading_pane_t1_ParamLimits

0x74c4,	// (0x00013271) list_single_graphic_heading_pane_t1

0x752d,	// (0x000132da) list_single_graphic_heading_pane_t2_ParamLimits

0x752d,	// (0x000132da) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x0001b366) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x0001b366) list_single_graphic_heading_pane_t

0x753f,	// (0x000132ec) list_single_large_graphic_pane_g1_ParamLimits

0x753f,	// (0x000132ec) list_single_large_graphic_pane_g1

0x7496,	// (0x00013243) list_single_large_graphic_pane_g2_ParamLimits

0x7496,	// (0x00013243) list_single_large_graphic_pane_g2

0x74a2,	// (0x0001324f) list_single_large_graphic_pane_g3_ParamLimits

0x74a2,	// (0x0001324f) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x0001b36b) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x0001b36b) list_single_large_graphic_pane_g

0x9881,	// (0x0001562e) wait_border_pane_g2_copy1

0x754b,	// (0x000132f8) list_single_large_graphic_pane_g4_cp2

0x7553,	// (0x00013300) list_single_large_graphic_pane_t1_ParamLimits

0x7553,	// (0x00013300) list_single_large_graphic_pane_t1

0x7569,	// (0x00013316) list_double_pane_g1_ParamLimits

0x7569,	// (0x00013316) list_double_pane_g1

0x7575,	// (0x00013322) list_double_pane_g2_ParamLimits

0x7575,	// (0x00013322) list_double_pane_g2

0x0001,

0xf5c5,	// (0x0001b372) list_double_pane_g_ParamLimits

0xf5c5,	// (0x0001b372) list_double_pane_g

0x7581,	// (0x0001332e) list_double_pane_t1_ParamLimits

0x7581,	// (0x0001332e) list_double_pane_t1

0x7597,	// (0x00013344) list_double_pane_t2_ParamLimits

0x7597,	// (0x00013344) list_double_pane_t2

0x0001,

0xf5ca,	// (0x0001b377) list_double_pane_t_ParamLimits

0xf5ca,	// (0x0001b377) list_double_pane_t

0x75a9,	// (0x00013356) list_double2_pane_g1_ParamLimits

0x75a9,	// (0x00013356) list_double2_pane_g1

0x75ba,	// (0x00013367) list_double2_pane_g2_ParamLimits

0x75ba,	// (0x00013367) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x0001b37c) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x0001b37c) list_double2_pane_g

0x75c6,	// (0x00013373) list_double2_pane_t1_ParamLimits

0x75c6,	// (0x00013373) list_double2_pane_t1

0x75dc,	// (0x00013389) list_double2_pane_t2_ParamLimits

0x75dc,	// (0x00013389) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x0001b381) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x0001b381) list_double2_pane_t

0x7569,	// (0x00013316) list_double_number_pane_g1_ParamLimits

0x7569,	// (0x00013316) list_double_number_pane_g1

0x7575,	// (0x00013322) list_double_number_pane_g2_ParamLimits

0x7575,	// (0x00013322) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x0001b372) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x0001b372) list_double_number_pane_g

0x75ee,	// (0x0001339b) list_double_number_pane_t1_ParamLimits

0x75ee,	// (0x0001339b) list_double_number_pane_t1

0x7600,	// (0x000133ad) list_double_number_pane_t2_ParamLimits

0x7600,	// (0x000133ad) list_double_number_pane_t2

0x7616,	// (0x000133c3) list_double_number_pane_t3_ParamLimits

0x7616,	// (0x000133c3) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x0001b386) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x0001b386) list_double_number_pane_t

0x7628,	// (0x000133d5) list_double_graphic_pane_g1_ParamLimits

0x7628,	// (0x000133d5) list_double_graphic_pane_g1

0x7634,	// (0x000133e1) list_double_graphic_pane_g2_ParamLimits

0x7634,	// (0x000133e1) list_double_graphic_pane_g2

0x7643,	// (0x000133f0) list_double_graphic_pane_g3_ParamLimits

0x7643,	// (0x000133f0) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0001b38d) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0001b38d) list_double_graphic_pane_g

0x765b,	// (0x00013408) list_double_graphic_pane_t1_ParamLimits

0x765b,	// (0x00013408) list_double_graphic_pane_t1

0x7671,	// (0x0001341e) list_double_graphic_pane_t2_ParamLimits

0x7671,	// (0x0001341e) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x0001b396) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x0001b396) list_double_graphic_pane_t

0x7683,	// (0x00013430) list_double2_graphic_pane_g1_ParamLimits

0x7683,	// (0x00013430) list_double2_graphic_pane_g1

0x768f,	// (0x0001343c) list_double2_graphic_pane_g2_ParamLimits

0x768f,	// (0x0001343c) list_double2_graphic_pane_g2

0x75ba,	// (0x00013367) list_double2_graphic_pane_g3_ParamLimits

0x75ba,	// (0x00013367) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x0001b39b) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x0001b39b) list_double2_graphic_pane_g

0x769b,	// (0x00013448) list_double2_graphic_pane_t1_ParamLimits

0x769b,	// (0x00013448) list_double2_graphic_pane_t1

0x76b1,	// (0x0001345e) list_double2_graphic_pane_t2_ParamLimits

0x76b1,	// (0x0001345e) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x0001b3a2) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x0001b3a2) list_double2_graphic_pane_t

0x76c3,	// (0x00013470) list_double_large_graphic_pane_g1_ParamLimits

0x76c3,	// (0x00013470) list_double_large_graphic_pane_g1

0x76e2,	// (0x0001348f) list_double_large_graphic_pane_g2_ParamLimits

0x76e2,	// (0x0001348f) list_double_large_graphic_pane_g2

0x7575,	// (0x00013322) list_double_large_graphic_pane_g3_ParamLimits

0x7575,	// (0x00013322) list_double_large_graphic_pane_g3

0x76f3,	// (0x000134a0) list_double_large_graphic_pane_g4_ParamLimits

0x76f3,	// (0x000134a0) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x0001b3a7) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x0001b3a7) list_double_large_graphic_pane_g

0x7719,	// (0x000134c6) list_double_large_graphic_pane_t1_ParamLimits

0x7719,	// (0x000134c6) list_double_large_graphic_pane_t1

0x7732,	// (0x000134df) list_double_large_graphic_pane_t2_ParamLimits

0x7732,	// (0x000134df) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x0001b3b2) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x0001b3b2) list_double_large_graphic_pane_t

0x7744,	// (0x000134f1) list_double2_large_graphic_pane_g1_ParamLimits

0x7744,	// (0x000134f1) list_double2_large_graphic_pane_g1

0x75a9,	// (0x00013356) list_double2_large_graphic_pane_g2_ParamLimits

0x75a9,	// (0x00013356) list_double2_large_graphic_pane_g2

0x75ba,	// (0x00013367) list_double2_large_graphic_pane_g3_ParamLimits

0x75ba,	// (0x00013367) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x0001b3b7) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x0001b3b7) list_double2_large_graphic_pane_g

0x7750,	// (0x000134fd) list_double2_large_graphic_pane_t1_ParamLimits

0x7750,	// (0x000134fd) list_double2_large_graphic_pane_t1

0x7766,	// (0x00013513) list_double2_large_graphic_pane_t2_ParamLimits

0x7766,	// (0x00013513) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x0001b3be) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x0001b3be) list_double2_large_graphic_pane_t

0x7778,	// (0x00013525) list_double_heading_pane_g1_ParamLimits

0x7778,	// (0x00013525) list_double_heading_pane_g1

0x7789,	// (0x00013536) list_double_heading_pane_g2_ParamLimits

0x7789,	// (0x00013536) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x0001b3c3) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x0001b3c3) list_double_heading_pane_g

0x7795,	// (0x00013542) list_double_heading_pane_t1_ParamLimits

0x7795,	// (0x00013542) list_double_heading_pane_t1

0x77ab,	// (0x00013558) list_double_heading_pane_t2_ParamLimits

0x77ab,	// (0x00013558) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x0001b3c8) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x0001b3c8) list_double_heading_pane_t

0x7628,	// (0x000133d5) list_double_graphic_heading_pane_g1_ParamLimits

0x7628,	// (0x000133d5) list_double_graphic_heading_pane_g1

0x7778,	// (0x00013525) list_double_graphic_heading_pane_g2_ParamLimits

0x7778,	// (0x00013525) list_double_graphic_heading_pane_g2

0x7789,	// (0x00013536) list_double_graphic_heading_pane_g3_ParamLimits

0x7789,	// (0x00013536) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x0001b3cd) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x0001b3cd) list_double_graphic_heading_pane_g

0x77bd,	// (0x0001356a) list_double_graphic_heading_pane_t1_ParamLimits

0x77bd,	// (0x0001356a) list_double_graphic_heading_pane_t1

0x77d3,	// (0x00013580) list_double_graphic_heading_pane_t2_ParamLimits

0x77d3,	// (0x00013580) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x0001b3d4) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x0001b3d4) list_double_graphic_heading_pane_t

0x76e2,	// (0x0001348f) list_double_time_pane_g1_ParamLimits

0x76e2,	// (0x0001348f) list_double_time_pane_g1

0x7575,	// (0x00013322) list_double_time_pane_g2_ParamLimits

0x7575,	// (0x00013322) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x0001b3d9) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x0001b3d9) list_double_time_pane_g

0x77e5,	// (0x00013592) list_double_time_pane_t1_ParamLimits

0x77e5,	// (0x00013592) list_double_time_pane_t1

0x77fb,	// (0x000135a8) list_double_time_pane_t2_ParamLimits

0x77fb,	// (0x000135a8) list_double_time_pane_t2

0x780d,	// (0x000135ba) list_double_time_pane_t3_ParamLimits

0x780d,	// (0x000135ba) list_double_time_pane_t3

0x781f,	// (0x000135cc) list_double_time_pane_t4_ParamLimits

0x781f,	// (0x000135cc) list_double_time_pane_t4

0x0003,

0xf631,	// (0x0001b3de) list_double_time_pane_t_ParamLimits

0xf631,	// (0x0001b3de) list_double_time_pane_t

0x768f,	// (0x0001343c) list_setting_pane_g1_ParamLimits

0x768f,	// (0x0001343c) list_setting_pane_g1

0x75ba,	// (0x00013367) list_setting_pane_g2_ParamLimits

0x75ba,	// (0x00013367) list_setting_pane_g2

0x0001,

0xf63a,	// (0x0001b3e7) list_setting_pane_g_ParamLimits

0xf63a,	// (0x0001b3e7) list_setting_pane_g

0x7831,	// (0x000135de) list_setting_pane_t1_ParamLimits

0x7831,	// (0x000135de) list_setting_pane_t1

0x7848,	// (0x000135f5) list_setting_pane_t2_ParamLimits

0x7848,	// (0x000135f5) list_setting_pane_t2

0x0002,

0xf63f,	// (0x0001b3ec) list_setting_pane_t_ParamLimits

0xf63f,	// (0x0001b3ec) list_setting_pane_t

0x7887,	// (0x00013634) set_value_pane_cp_ParamLimits

0x7887,	// (0x00013634) set_value_pane_cp

0x768f,	// (0x0001343c) list_setting_number_pane_g1_ParamLimits

0x768f,	// (0x0001343c) list_setting_number_pane_g1

0x75ba,	// (0x00013367) list_setting_number_pane_g2_ParamLimits

0x75ba,	// (0x00013367) list_setting_number_pane_g2

0x0001,

0xf63a,	// (0x0001b3e7) list_setting_number_pane_g_ParamLimits

0xf63a,	// (0x0001b3e7) list_setting_number_pane_g

0x7893,	// (0x00013640) list_setting_number_pane_t1_ParamLimits

0x7893,	// (0x00013640) list_setting_number_pane_t1

0x78a7,	// (0x00013654) list_setting_number_pane_t2_ParamLimits

0x78a7,	// (0x00013654) list_setting_number_pane_t2

0x78be,	// (0x0001366b) list_setting_number_pane_t3_ParamLimits

0x78be,	// (0x0001366b) list_setting_number_pane_t3

0x0003,

0xf646,	// (0x0001b3f3) list_setting_number_pane_t_ParamLimits

0xf646,	// (0x0001b3f3) list_setting_number_pane_t

0x7887,	// (0x00013634) set_value_pane_ParamLimits

0x7887,	// (0x00013634) set_value_pane

0x7901,	// (0x000136ae) bg_set_opt_pane_ParamLimits

0x7901,	// (0x000136ae) bg_set_opt_pane

0x7922,	// (0x000136cf) set_value_pane_t1

0x7930,	// (0x000136dd) slider_set_pane_cp3

0x7939,	// (0x000136e6) volume_small_pane_cp

0x7942,	// (0x000136ef) list_form_gen_pane

0x794b,	// (0x000136f8) scroll_pane_cp8

0x7964,	// (0x00013711) form_field_data_pane_ParamLimits

0x7964,	// (0x00013711) form_field_data_pane

0x7986,	// (0x00013733) form_field_data_wide_pane_ParamLimits

0x7986,	// (0x00013733) form_field_data_wide_pane

0x79a9,	// (0x00013756) form_field_popup_pane_ParamLimits

0x79a9,	// (0x00013756) form_field_popup_pane

0x79c9,	// (0x00013776) form_field_popup_wide_pane_ParamLimits

0x79c9,	// (0x00013776) form_field_popup_wide_pane

0x79e6,	// (0x00013793) form_field_slider_pane_ParamLimits

0x79e6,	// (0x00013793) form_field_slider_pane

0x79f9,	// (0x000137a6) form_field_slider_wide_pane_ParamLimits

0x79f9,	// (0x000137a6) form_field_slider_wide_pane

0x7a0c,	// (0x000137b9) data_form_pane

0x7a22,	// (0x000137cf) form_field_data_pane_t1

0x7a3a,	// (0x000137e7) input_focus_pane

0x7a48,	// (0x000137f5) data_form_wide_pane

0x7a80,	// (0x0001382d) form_field_data_wide_pane_t1

0x7254,	// (0x00013001) input_focus_pane_cp6

0x7a9f,	// (0x0001384c) form_field_popup_pane_t1

0x7a3a,	// (0x000137e7) input_focus_pane_cp7

0x7ab7,	// (0x00013864) list_form_pane

0x7acb,	// (0x00013878) form_field_popup_wide_pane_t1

0x7a3a,	// (0x000137e7) input_focus_pane_cp8

0x7add,	// (0x0001388a) list_form_wide_pane

0x7af1,	// (0x0001389e) form_field_slider_pane_t1_ParamLimits

0x7af1,	// (0x0001389e) form_field_slider_pane_t1

0x7b03,	// (0x000138b0) form_field_slider_pane_t2_ParamLimits

0x7b03,	// (0x000138b0) form_field_slider_pane_t2

0x0001,

0xf656,	// (0x0001b403) form_field_slider_pane_t_ParamLimits

0xf656,	// (0x0001b403) form_field_slider_pane_t

0x6ed1,	// (0x00012c7e) input_focus_pane_cp9_ParamLimits

0x6ed1,	// (0x00012c7e) input_focus_pane_cp9

0x7b15,	// (0x000138c2) slider_cont_pane_ParamLimits

0x7b15,	// (0x000138c2) slider_cont_pane

0x7b29,	// (0x000138d6) form_field_slider_wide_pane_t1_ParamLimits

0x7b29,	// (0x000138d6) form_field_slider_wide_pane_t1

0x7b3b,	// (0x000138e8) form_field_slider_wide_pane_t2_ParamLimits

0x7b3b,	// (0x000138e8) form_field_slider_wide_pane_t2

0x0001,

0xf65b,	// (0x0001b408) form_field_slider_wide_pane_t_ParamLimits

0xf65b,	// (0x0001b408) form_field_slider_wide_pane_t

0x6ed1,	// (0x00012c7e) input_focus_pane_cp10_ParamLimits

0x6ed1,	// (0x00012c7e) input_focus_pane_cp10

0x7b4d,	// (0x000138fa) slider_cont_pane_cp1_ParamLimits

0x7b4d,	// (0x000138fa) slider_cont_pane_cp1

0x7b61,	// (0x0001390e) slider_form_pane_cp

0x7b69,	// (0x00013916) input_focus_pane_g1

0x7b71,	// (0x0001391e) input_focus_pane_g2

0x7b79,	// (0x00013926) input_focus_pane_g3

0x7b81,	// (0x0001392e) input_focus_pane_g4

0x7b89,	// (0x00013936) input_focus_pane_g5

0x7b91,	// (0x0001393e) input_focus_pane_g6

0x7b99,	// (0x00013946) input_focus_pane_g7

0x7ba1,	// (0x0001394e) input_focus_pane_g8

0x7ba9,	// (0x00013956) input_focus_pane_g9

0x38a0,	// (0x0000f64d) input_focus_pane_g10

0x0009,

0xf660,	// (0x0001b40d) input_focus_pane_g

0x988a,	// (0x00015637) wait_border_pane_g3_copy1

0x7bb1,	// (0x0001395e) data_form_pane_t1

0x38a0,	// (0x0000f64d) wait_anim_pane_g1_copy1

0xa7d7,	// (0x00016584) data_form_wide_pane_t1

0x7bcc,	// (0x00013979) list_form_graphic_pane_cp_ParamLimits

0x7bcc,	// (0x00013979) list_form_graphic_pane_cp

0xa7ac,	// (0x00016559) slider_form_pane_g1

0xa7b5,	// (0x00016562) slider_form_pane_g2

0x0006,

0xf95e,	// (0x0001b70b) slider_form_pane_g

0x7be5,	// (0x00013992) list_form_graphic_pane_ParamLimits

0x7be5,	// (0x00013992) list_form_graphic_pane

0x7c01,	// (0x000139ae) list_form_graphic_pane_g1

0x7c09,	// (0x000139b6) list_form_graphic_pane_t1_ParamLimits

0x7c09,	// (0x000139b6) list_form_graphic_pane_t1

0x6c3c,	// (0x000129e9) list_highlight_pane_cp5_ParamLimits

0x6c3c,	// (0x000129e9) list_highlight_pane_cp5

0x7c1e,	// (0x000139cb) find_pane_g1

0x7c27,	// (0x000139d4) input_find_pane

0x7c30,	// (0x000139dd) input_find_pane_g1_ParamLimits

0x7c30,	// (0x000139dd) input_find_pane_g1

0x7c3c,	// (0x000139e9) input_find_pane_t1_ParamLimits

0x7c3c,	// (0x000139e9) input_find_pane_t1

0x7c51,	// (0x000139fe) input_find_pane_t2_ParamLimits

0x7c51,	// (0x000139fe) input_find_pane_t2

0x0001,

0xf675,	// (0x0001b422) input_find_pane_t_ParamLimits

0xf675,	// (0x0001b422) input_find_pane_t

0x7c66,	// (0x00013a13) input_focus_pane_cp5_ParamLimits

0x7c66,	// (0x00013a13) input_focus_pane_cp5

0x7c85,	// (0x00013a32) bg_popup_window_pane_cp2_ParamLimits

0x7c85,	// (0x00013a32) bg_popup_window_pane_cp2

0x7c92,	// (0x00013a3f) listscroll_menu_pane_ParamLimits

0x7c92,	// (0x00013a3f) listscroll_menu_pane

0x7c9e,	// (0x00013a4b) popup_submenu_window_ParamLimits

0x7c9e,	// (0x00013a4b) popup_submenu_window

0x7cca,	// (0x00013a77) find_popup_pane_g1

0x7cd2,	// (0x00013a7f) input_popup_find_pane_cp

0x7cdc,	// (0x00013a89) input_focus_pane_cp4_ParamLimits

0x7cdc,	// (0x00013a89) input_focus_pane_cp4

0x7cf6,	// (0x00013aa3) input_popup_find_pane_t1_ParamLimits

0x7cf6,	// (0x00013aa3) input_popup_find_pane_t1

0x3a68,	// (0x0000f815) bg_popup_sub_pane_cp

0x7d24,	// (0x00013ad1) listscroll_popup_sub_pane

0x7d2c,	// (0x00013ad9) list_submenu_pane_ParamLimits

0x7d2c,	// (0x00013ad9) list_submenu_pane

0x7d3d,	// (0x00013aea) scroll_pane_cp4

0x7d45,	// (0x00013af2) list_single_popup_submenu_pane_ParamLimits

0x7d45,	// (0x00013af2) list_single_popup_submenu_pane

0x7d59,	// (0x00013b06) list_single_popup_submenu_pane_g1

0x7d61,	// (0x00013b0e) list_single_popup_submenu_pane_t1_ParamLimits

0x7d61,	// (0x00013b0e) list_single_popup_submenu_pane_t1

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp1_ParamLimits

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp1

0x7d76,	// (0x00013b23) tabs_2_active_pane_g1

0x7d7e,	// (0x00013b2b) tabs_2_active_pane_t1

0x6c3c,	// (0x000129e9) bg_passive_tab_pane_cp1_ParamLimits

0x6c3c,	// (0x000129e9) bg_passive_tab_pane_cp1

0x7d76,	// (0x00013b23) tabs_2_passive_pane_g1

0x7d7e,	// (0x00013b2b) tabs_2_passive_pane_t1

0x7d90,	// (0x00013b3d) bg_active_tab_pane_cp4

0x7d9e,	// (0x00013b4b) tabs_2_long_active_pane_t1

0x7db1,	// (0x00013b5e) bg_passive_tab_pane_cp4

0x55ad,	// (0x0001135a) list_single_midp_graphic_pane_g4_ParamLimits

0x7d90,	// (0x00013b3d) bg_active_tab_pane_cp5

0x7dbd,	// (0x00013b6a) tabs_3_long_active_pane_t1

0x7db1,	// (0x00013b5e) bg_passive_tab_pane_cp5

0x55ad,	// (0x0001135a) list_single_midp_graphic_pane_g4

0x6c3c,	// (0x000129e9) bg_popup_window_pane_cp13_ParamLimits

0x6c3c,	// (0x000129e9) bg_popup_window_pane_cp13

0x7dd8,	// (0x00013b85) listscroll_popup_fast_pane_ParamLimits

0x7dd8,	// (0x00013b85) listscroll_popup_fast_pane

0x7de7,	// (0x00013b94) grid_popup_fast_pane_ParamLimits

0x7de7,	// (0x00013b94) grid_popup_fast_pane

0x7df9,	// (0x00013ba6) scroll_pane_cp9_ParamLimits

0x7df9,	// (0x00013ba6) scroll_pane_cp9

0xc6cf,	// (0x0001847c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6cf,	// (0x0001847c) list_single_graphic_hl_pane_t1_cp2

0x7e1d,	// (0x00013bca) input_focus_pane_cp20_ParamLimits

0x7e1d,	// (0x00013bca) input_focus_pane_cp20

0x7e2b,	// (0x00013bd8) query_popup_data_pane_t1_ParamLimits

0x7e2b,	// (0x00013bd8) query_popup_data_pane_t1

0x7e3e,	// (0x00013beb) query_popup_data_pane_t2_ParamLimits

0x7e3e,	// (0x00013beb) query_popup_data_pane_t2

0x7e84,	// (0x00013c31) query_popup_data_pane_t3_ParamLimits

0x7e84,	// (0x00013c31) query_popup_data_pane_t3

0x7ec5,	// (0x00013c72) query_popup_data_pane_t4_ParamLimits

0x7ec5,	// (0x00013c72) query_popup_data_pane_t4

0x7f01,	// (0x00013cae) query_popup_data_pane_t5_ParamLimits

0x7f01,	// (0x00013cae) query_popup_data_pane_t5

0x0004,

0xf67a,	// (0x0001b427) query_popup_data_pane_t_ParamLimits

0xf67a,	// (0x0001b427) query_popup_data_pane_t

0x7b69,	// (0x00013916) bg_set_opt_pane_g1

0x7b71,	// (0x0001391e) bg_set_opt_pane_g2

0x7b79,	// (0x00013926) bg_set_opt_pane_g3

0x7b81,	// (0x0001392e) bg_set_opt_pane_g4

0x7b89,	// (0x00013936) bg_set_opt_pane_g5

0x7b91,	// (0x0001393e) bg_set_opt_pane_g6

0x7b99,	// (0x00013946) bg_set_opt_pane_g7

0x7ba1,	// (0x0001394e) bg_set_opt_pane_g8

0x7ba9,	// (0x00013956) bg_set_opt_pane_g9

0x0008,

0xf685,	// (0x0001b432) bg_set_opt_pane_g

0x4bb7,	// (0x00010964) control_top_pane_stacon_ParamLimits

0x4bb7,	// (0x00010964) control_top_pane_stacon

0x4c0a,	// (0x000109b7) signal_pane_stacon_ParamLimits

0x4c0a,	// (0x000109b7) signal_pane_stacon

0x859b,	// (0x00014348) stacon_top_pane_g1_ParamLimits

0x859b,	// (0x00014348) stacon_top_pane_g1

0x4c2f,	// (0x000109dc) title_pane_stacon_ParamLimits

0x4c2f,	// (0x000109dc) title_pane_stacon

0x4c59,	// (0x00010a06) uni_indicator_pane_stacon_ParamLimits

0x4c59,	// (0x00010a06) uni_indicator_pane_stacon

0x4c6e,	// (0x00010a1b) battery_pane_stacon_ParamLimits

0x4c6e,	// (0x00010a1b) battery_pane_stacon

0x4cb2,	// (0x00010a5f) control_bottom_pane_stacon_ParamLimits

0x4cb2,	// (0x00010a5f) control_bottom_pane_stacon

0x4cd5,	// (0x00010a82) navi_pane_stacon_ParamLimits

0x4cd5,	// (0x00010a82) navi_pane_stacon

0x85bd,	// (0x0001436a) stacon_bottom_pane_g1_ParamLimits

0x85bd,	// (0x0001436a) stacon_bottom_pane_g1

0x491a,	// (0x000106c7) aid_levels_signal_lsc_ParamLimits

0x491a,	// (0x000106c7) aid_levels_signal_lsc

0x4930,	// (0x000106dd) signal_pane_stacon_g1_ParamLimits

0x4930,	// (0x000106dd) signal_pane_stacon_g1

0x4944,	// (0x000106f1) signal_pane_stacon_g2_ParamLimits

0x4944,	// (0x000106f1) signal_pane_stacon_g2

0x0001,

0xf698,	// (0x0001b445) signal_pane_stacon_g_ParamLimits

0xf698,	// (0x0001b445) signal_pane_stacon_g

0x4979,	// (0x00010726) title_pane_stacon_t1_ParamLimits

0x4979,	// (0x00010726) title_pane_stacon_t1

0x7f45,	// (0x00013cf2) uni_indicator_pane_stacon_g1

0x7f4f,	// (0x00013cfc) uni_indicator_pane_stacon_g2

0x7f59,	// (0x00013d06) uni_indicator_pane_stacon_g3

0x7f63,	// (0x00013d10) uni_indicator_pane_stacon_g4

0x0003,

0xf6a4,	// (0x0001b451) uni_indicator_pane_stacon_g

0x499e,	// (0x0001074b) control_top_pane_stacon_g1

0x49a6,	// (0x00010753) control_top_pane_stacon_t1_ParamLimits

0x49a6,	// (0x00010753) control_top_pane_stacon_t1

0x49dd,	// (0x0001078a) aid_levels_battery_lsc_ParamLimits

0x49dd,	// (0x0001078a) aid_levels_battery_lsc

0x49f4,	// (0x000107a1) battery_pane_stacon_g1_ParamLimits

0x49f4,	// (0x000107a1) battery_pane_stacon_g1

0x4a07,	// (0x000107b4) battery_pane_stacon_g2_ParamLimits

0x4a07,	// (0x000107b4) battery_pane_stacon_g2

0x0001,

0xf6ad,	// (0x0001b45a) battery_pane_stacon_g_ParamLimits

0xf6ad,	// (0x0001b45a) battery_pane_stacon_g

0x4a45,	// (0x000107f2) navi_icon_pane_stacon

0x4a59,	// (0x00010806) navi_navi_pane_stacon

0x4a45,	// (0x000107f2) navi_text_pane_stacon

0x499e,	// (0x0001074b) control_bottom_pane_stacon_g1

0x4a6d,	// (0x0001081a) control_bottom_pane_stacon_t1_ParamLimits

0x4a6d,	// (0x0001081a) control_bottom_pane_stacon_t1

0x7f87,	// (0x00013d34) grid_app_pane_ParamLimits

0x7f87,	// (0x00013d34) grid_app_pane

0x7fa9,	// (0x00013d56) scroll_pane_cp15_ParamLimits

0x7fa9,	// (0x00013d56) scroll_pane_cp15

0x7fbc,	// (0x00013d69) cell_app_pane_ParamLimits

0x7fbc,	// (0x00013d69) cell_app_pane

0x7fe4,	// (0x00013d91) cell_app_pane_g1_ParamLimits

0x7fe4,	// (0x00013d91) cell_app_pane_g1

0x8008,	// (0x00013db5) cell_app_pane_g2_ParamLimits

0x8008,	// (0x00013db5) cell_app_pane_g2

0x0001,

0xf6b2,	// (0x0001b45f) cell_app_pane_g_ParamLimits

0xf6b2,	// (0x0001b45f) cell_app_pane_g

0x8014,	// (0x00013dc1) cell_app_pane_t1_ParamLimits

0x8014,	// (0x00013dc1) cell_app_pane_t1

0x802b,	// (0x00013dd8) grid_highlight_pane_ParamLimits

0x802b,	// (0x00013dd8) grid_highlight_pane

0x7b69,	// (0x00013916) cell_highlight_pane_g1

0x7b71,	// (0x0001391e) cell_highlight_pane_g2

0x7b79,	// (0x00013926) cell_highlight_pane_g3

0x7b81,	// (0x0001392e) cell_highlight_pane_g4

0x7b89,	// (0x00013936) cell_highlight_pane_g5

0x7b91,	// (0x0001393e) cell_highlight_pane_g6

0x7b99,	// (0x00013946) cell_highlight_pane_g7

0x7ba1,	// (0x0001394e) cell_highlight_pane_g8

0x7ba9,	// (0x00013956) cell_highlight_pane_g9

0x38a0,	// (0x0000f64d) cell_highlight_pane_g10

0x0009,

0xf660,	// (0x0001b40d) cell_highlight_pane_g

0x803c,	// (0x00013de9) bg_scroll_pane

0x4ab7,	// (0x00010864) scroll_handle_pane

0x8083,	// (0x00013e30) scroll_bg_pane_g1

0x8098,	// (0x00013e45) scroll_bg_pane_g2

0x80b0,	// (0x00013e5d) scroll_bg_pane_g3

0x0002,

0xf6b7,	// (0x0001b464) scroll_bg_pane_g

0x80c5,	// (0x00013e72) scroll_handle_focus_pane_ParamLimits

0x80c5,	// (0x00013e72) scroll_handle_focus_pane

0x8083,	// (0x00013e30) scroll_handle_pane_g1

0x80d2,	// (0x00013e7f) scroll_handle_pane_g2

0x80b0,	// (0x00013e5d) scroll_handle_pane_g3

0x0002,

0xf6be,	// (0x0001b46b) scroll_handle_pane_g

0x7cdc,	// (0x00013a89) bg_popup_sub_pane_cp21_ParamLimits

0x7cdc,	// (0x00013a89) bg_popup_sub_pane_cp21

0x80e6,	// (0x00013e93) popup_fep_japan_predictive_window_t1_ParamLimits

0x80e6,	// (0x00013e93) popup_fep_japan_predictive_window_t1

0x8100,	// (0x00013ead) popup_fep_japan_predictive_window_t2_ParamLimits

0x8100,	// (0x00013ead) popup_fep_japan_predictive_window_t2

0x8133,	// (0x00013ee0) popup_fep_japan_predictive_window_t3_ParamLimits

0x8133,	// (0x00013ee0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c5,	// (0x0001b472) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c5,	// (0x0001b472) popup_fep_japan_predictive_window_t

0x3a68,	// (0x0000f815) bg_popup_sub_pane_cp23

0x816a,	// (0x00013f17) listscroll_japin_cand_pane

0x8172,	// (0x00013f1f) popup_fep_japan_candidate_window_t1

0x8180,	// (0x00013f2d) candidate_pane_ParamLimits

0x8180,	// (0x00013f2d) candidate_pane

0x8192,	// (0x00013f3f) scroll_pane_cp30

0x819a,	// (0x00013f47) list_single_popup_jap_candidate_pane_ParamLimits

0x819a,	// (0x00013f47) list_single_popup_jap_candidate_pane

0x3a68,	// (0x0000f815) list_highlight_pane_cp30

0x81af,	// (0x00013f5c) list_single_popup_jap_candidate_pane_t1

0x81be,	// (0x00013f6b) level_1_signal

0x81d0,	// (0x00013f7d) level_2_signal

0x81e3,	// (0x00013f90) level_3_signal

0x81f6,	// (0x00013fa3) level_4_signal

0x8209,	// (0x00013fb6) level_5_signal

0x821c,	// (0x00013fc9) level_6_signal

0x822f,	// (0x00013fdc) level_7_signal

0x81be,	// (0x00013f6b) level_1_battery

0x81d0,	// (0x00013f7d) level_2_battery

0x81e3,	// (0x00013f90) level_3_battery

0x81f6,	// (0x00013fa3) level_4_battery

0x8209,	// (0x00013fb6) level_5_battery

0x821c,	// (0x00013fc9) level_6_battery

0x822f,	// (0x00013fdc) level_7_battery

0x825a,	// (0x00014007) list_menu_pane_ParamLimits

0x825a,	// (0x00014007) list_menu_pane

0x8270,	// (0x0001401d) scroll_pane_cp25_ParamLimits

0x8270,	// (0x0001401d) scroll_pane_cp25

0x8289,	// (0x00014036) list_double2_graphic_pane_cp2_ParamLimits

0x8289,	// (0x00014036) list_double2_graphic_pane_cp2

0x8289,	// (0x00014036) list_double2_large_graphic_pane_cp2_ParamLimits

0x8289,	// (0x00014036) list_double2_large_graphic_pane_cp2

0x8289,	// (0x00014036) list_double2_pane_cp2_ParamLimits

0x8289,	// (0x00014036) list_double2_pane_cp2

0x8289,	// (0x00014036) list_double_graphic_pane_cp2_ParamLimits

0x8289,	// (0x00014036) list_double_graphic_pane_cp2

0x8289,	// (0x00014036) list_double_large_graphic_pane_cp2_ParamLimits

0x8289,	// (0x00014036) list_double_large_graphic_pane_cp2

0x8289,	// (0x00014036) list_double_number_pane_cp2_ParamLimits

0x8289,	// (0x00014036) list_double_number_pane_cp2

0x8289,	// (0x00014036) list_double_pane_cp2_ParamLimits

0x8289,	// (0x00014036) list_double_pane_cp2

0x82ad,	// (0x0001405a) list_single_2graphic_pane_cp2_ParamLimits

0x82ad,	// (0x0001405a) list_single_2graphic_pane_cp2

0x82ad,	// (0x0001405a) list_single_graphic_heading_pane_cp2_ParamLimits

0x82ad,	// (0x0001405a) list_single_graphic_heading_pane_cp2

0x82ad,	// (0x0001405a) list_single_graphic_pane_cp2_ParamLimits

0x82ad,	// (0x0001405a) list_single_graphic_pane_cp2

0x82ad,	// (0x0001405a) list_single_heading_pane_cp2_ParamLimits

0x82ad,	// (0x0001405a) list_single_heading_pane_cp2

0x82c6,	// (0x00014073) list_single_large_graphic_pane_cp2_ParamLimits

0x82c6,	// (0x00014073) list_single_large_graphic_pane_cp2

0x82ad,	// (0x0001405a) list_single_number_heading_pane_cp2_ParamLimits

0x82ad,	// (0x0001405a) list_single_number_heading_pane_cp2

0x82ad,	// (0x0001405a) list_single_number_pane_cp2_ParamLimits

0x82ad,	// (0x0001405a) list_single_number_pane_cp2

0x82d7,	// (0x00014084) list_single_pane_cp2_ParamLimits

0x82d7,	// (0x00014084) list_single_pane_cp2

0x835b,	// (0x00014108) bg_popup_sub_pane_cp22

0x4b69,	// (0x00010916) popup_side_volume_key_window_g1

0x4b93,	// (0x00010940) popup_side_volume_key_window_t1

0x4baf,	// (0x0001095c) volume_small_pane_cp1

0x6ed1,	// (0x00012c7e) bg_popup_sub_pane_cp24_ParamLimits

0x6ed1,	// (0x00012c7e) bg_popup_sub_pane_cp24

0x8371,	// (0x0001411e) fep_china_uni_candidate_pane_ParamLimits

0x8371,	// (0x0001411e) fep_china_uni_candidate_pane

0x8385,	// (0x00014132) fep_china_uni_entry_pane

0x8395,	// (0x00014142) popup_fep_china_uni_window_g1

0x83b1,	// (0x0001415e) fep_china_uni_entry_pane_g1

0x83b9,	// (0x00014166) fep_china_uni_entry_pane_g2

0x0001,

0xf6f6,	// (0x0001b4a3) fep_china_uni_entry_pane_g

0x83c1,	// (0x0001416e) fep_entry_item_pane

0x83cb,	// (0x00014178) fep_candidate_item_pane

0x83d3,	// (0x00014180) fep_china_uni_candidate_pane_g1

0x83db,	// (0x00014188) fep_china_uni_candidate_pane_g2

0x83e3,	// (0x00014190) fep_china_uni_candidate_pane_g3

0x83eb,	// (0x00014198) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fb,	// (0x0001b4a8) fep_china_uni_candidate_pane_g

0x38a0,	// (0x0000f64d) fep_entry_item_pane_g1

0x83f3,	// (0x000141a0) fep_entry_item_pane_t1_ParamLimits

0x83f3,	// (0x000141a0) fep_entry_item_pane_t1

0x8409,	// (0x000141b6) fep_candidate_item_pane_t1_ParamLimits

0x8409,	// (0x000141b6) fep_candidate_item_pane_t1

0x841e,	// (0x000141cb) fep_candidate_item_pane_t2_ParamLimits

0x841e,	// (0x000141cb) fep_candidate_item_pane_t2

0x0001,

0xf704,	// (0x0001b4b1) fep_candidate_item_pane_t_ParamLimits

0xf704,	// (0x0001b4b1) fep_candidate_item_pane_t

0x6c3c,	// (0x000129e9) list_highlight_pane_cp31_ParamLimits

0x6c3c,	// (0x000129e9) list_highlight_pane_cp31

0x8430,	// (0x000141dd) level_1_signal_lsc

0x8439,	// (0x000141e6) level_2_signal_lsc

0x8442,	// (0x000141ef) level_3_signal_lsc

0x844b,	// (0x000141f8) level_4_signal_lsc

0x8454,	// (0x00014201) level_5_signal_lsc

0x845d,	// (0x0001420a) level_6_signal_lsc

0x8466,	// (0x00014213) level_7_signal_lsc

0x8466,	// (0x00014213) level_1_battery_lsc

0x846f,	// (0x0001421c) level_2_battery_lsc

0x8478,	// (0x00014225) level_3_battery_lsc

0x8481,	// (0x0001422e) level_4_battery_lsc

0x848a,	// (0x00014237) level_5_battery_lsc

0x8493,	// (0x00014240) level_6_battery_lsc

0x8430,	// (0x000141dd) level_7_battery_lsc

0x849c,	// (0x00014249) scroll_handle_focus_pane_g1

0x84a5,	// (0x00014252) scroll_handle_focus_pane_g2

0x84ae,	// (0x0001425b) scroll_handle_focus_pane_g3

0x0002,

0xf709,	// (0x0001b4b6) scroll_handle_focus_pane_g

0x84b7,	// (0x00014264) list_single_2graphic_pane_g1_ParamLimits

0x84b7,	// (0x00014264) list_single_2graphic_pane_g1

0x751c,	// (0x000132c9) list_single_2graphic_pane_g2_ParamLimits

0x751c,	// (0x000132c9) list_single_2graphic_pane_g2

0x74a2,	// (0x0001324f) list_single_2graphic_pane_g3_ParamLimits

0x74a2,	// (0x0001324f) list_single_2graphic_pane_g3

0x84c3,	// (0x00014270) list_single_2graphic_pane_g4_ParamLimits

0x84c3,	// (0x00014270) list_single_2graphic_pane_g4

0x0003,

0xf710,	// (0x0001b4bd) list_single_2graphic_pane_g_ParamLimits

0xf710,	// (0x0001b4bd) list_single_2graphic_pane_g

0x84d4,	// (0x00014281) list_single_2graphic_pane_t1_ParamLimits

0x84d4,	// (0x00014281) list_single_2graphic_pane_t1

0x8502,	// (0x000142af) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8502,	// (0x000142af) list_double2_graphic_large_graphic_pane_g1

0x75a9,	// (0x00013356) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x75a9,	// (0x00013356) list_double2_graphic_large_graphic_pane_g2

0x75ba,	// (0x00013367) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x75ba,	// (0x00013367) list_double2_graphic_large_graphic_pane_g3

0x8512,	// (0x000142bf) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8512,	// (0x000142bf) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf719,	// (0x0001b4c6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf719,	// (0x0001b4c6) list_double2_graphic_large_graphic_pane_g

0x851e,	// (0x000142cb) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x851e,	// (0x000142cb) list_double2_graphic_large_graphic_pane_t1

0x8534,	// (0x000142e1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8534,	// (0x000142e1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf722,	// (0x0001b4cf) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf722,	// (0x0001b4cf) list_double2_graphic_large_graphic_pane_t

0x8688,	// (0x00014435) popup_fast_swap_window_ParamLimits

0x8688,	// (0x00014435) popup_fast_swap_window

0x86a4,	// (0x00014451) popup_side_volume_key_window

0x86c0,	// (0x0001446d) stacon_top_pane

0x86ca,	// (0x00014477) status_pane_ParamLimits

0x86ca,	// (0x00014477) status_pane

0x3896,	// (0x0000f643) status_small_pane

0x3a68,	// (0x0000f815) control_pane

0x3a68,	// (0x0000f815) stacon_bottom_pane

0x794b,	// (0x000136f8) scroll_pane_cp121

0x7942,	// (0x000136ef) set_content_pane

0x8546,	// (0x000142f3) bg_active_tab_pane_g1_cp1

0x854f,	// (0x000142fc) bg_active_tab_pane_g2_cp1

0x8558,	// (0x00014305) bg_active_tab_pane_g3_cp1

0x8546,	// (0x000142f3) bg_passive_tab_pane_g1_cp1

0x854f,	// (0x000142fc) bg_passive_tab_pane_g2_cp1

0x8558,	// (0x00014305) bg_passive_tab_pane_g3_cp1

0x8561,	// (0x0001430e) bg_active_tab_pane_g1_cp2

0x854f,	// (0x000142fc) bg_active_tab_pane_g2_cp2

0x856a,	// (0x00014317) bg_active_tab_pane_g3_cp2

0x8561,	// (0x0001430e) bg_passive_tab_pane_g1_cp2

0x854f,	// (0x000142fc) bg_passive_tab_pane_g2_cp2

0x856a,	// (0x00014317) bg_passive_tab_pane_g3_cp2

0x8573,	// (0x00014320) bg_active_tab_pane_g1_cp3

0x854f,	// (0x000142fc) bg_active_tab_pane_g2_cp3

0x857c,	// (0x00014329) bg_active_tab_pane_g3_cp3

0x8573,	// (0x00014320) bg_passive_tab_pane_g1_cp3

0x854f,	// (0x000142fc) bg_passive_tab_pane_g2_cp3

0x857c,	// (0x00014329) bg_passive_tab_pane_g3_cp3

0x8585,	// (0x00014332) bg_active_tab_pane_g1_cp4

0x854f,	// (0x000142fc) bg_active_tab_pane_g2_cp4

0x8590,	// (0x0001433d) bg_active_tab_pane_g3_cp4

0x8585,	// (0x00014332) bg_passive_tab_pane_g1_cp4

0x854f,	// (0x000142fc) bg_passive_tab_pane_g2_cp4

0x8590,	// (0x0001433d) bg_passive_tab_pane_g3_cp4

0x85d9,	// (0x00014386) bg_active_tab_pane_g1_cp5

0x854f,	// (0x000142fc) bg_active_tab_pane_g2_cp5

0x85e2,	// (0x0001438f) bg_active_tab_pane_g3_cp5

0x85d9,	// (0x00014386) bg_passive_tab_pane_g1_cp5

0x854f,	// (0x000142fc) bg_passive_tab_pane_g2_cp5

0x85e2,	// (0x0001438f) bg_passive_tab_pane_g3_cp5

0x85eb,	// (0x00014398) list_set_graphic_pane_ParamLimits

0x85eb,	// (0x00014398) list_set_graphic_pane

0x3a68,	// (0x0000f815) bg_set_opt_pane_cp4

0x860b,	// (0x000143b8) list_set_graphic_pane_g1_ParamLimits

0x860b,	// (0x000143b8) list_set_graphic_pane_g1

0x8617,	// (0x000143c4) list_set_graphic_pane_g2_ParamLimits

0x8617,	// (0x000143c4) list_set_graphic_pane_g2

0x0001,

0xf727,	// (0x0001b4d4) list_set_graphic_pane_g_ParamLimits

0xf727,	// (0x0001b4d4) list_set_graphic_pane_g

0x0009,

0xfa9e,	// (0x0001b84b) volume_small_pane_cp_g

0x863b,	// (0x000143e8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x863b,	// (0x000143e8) list_double2_large_graphic_pane_g1_cp2

0x8647,	// (0x000143f4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8647,	// (0x000143f4) list_double2_large_graphic_pane_g2_cp2

0x8658,	// (0x00014405) list_double2_large_graphic_pane_g3_cp2

0x8660,	// (0x0001440d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8660,	// (0x0001440d) list_double2_large_graphic_pane_t1_cp2

0x8676,	// (0x00014423) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8676,	// (0x00014423) list_double2_large_graphic_pane_t2_cp2

0xa35d,	// (0x0001610a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa35d,	// (0x0001610a) list_double_large_graphic_pane_g1_cp2

0xa36e,	// (0x0001611b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa36e,	// (0x0001611b) list_double_large_graphic_pane_g2_cp2

0x87e6,	// (0x00014593) list_double_large_graphic_pane_g3_cp2

0xa37f,	// (0x0001612c) list_double_large_graphic_pane_g4_cp

0xa387,	// (0x00016134) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa387,	// (0x00016134) list_double_large_graphic_pane_t1_cp2

0xa39e,	// (0x0001614b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa39e,	// (0x0001614b) list_double_large_graphic_pane_t2_cp2

0x86d8,	// (0x00014485) list_double2_graphic_pane_g1_cp2_ParamLimits

0x86d8,	// (0x00014485) list_double2_graphic_pane_g1_cp2

0x86e6,	// (0x00014493) list_double2_graphic_pane_g2_cp2_ParamLimits

0x86e6,	// (0x00014493) list_double2_graphic_pane_g2_cp2

0x86f7,	// (0x000144a4) list_double2_graphic_pane_g3_cp2

0x8701,	// (0x000144ae) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8701,	// (0x000144ae) list_double2_graphic_pane_t1_cp2

0x8717,	// (0x000144c4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8717,	// (0x000144c4) list_double2_graphic_pane_t2_cp2

0x8729,	// (0x000144d6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8729,	// (0x000144d6) list_single_number_heading_pane_g1_cp2

0x8735,	// (0x000144e2) list_single_number_heading_pane_g2_cp2

0x873d,	// (0x000144ea) list_single_number_heading_pane_t1_cp2_ParamLimits

0x873d,	// (0x000144ea) list_single_number_heading_pane_t1_cp2

0x8753,	// (0x00014500) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8753,	// (0x00014500) list_single_number_heading_pane_t2_cp2

0x8765,	// (0x00014512) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8765,	// (0x00014512) list_single_number_heading_pane_t3_cp2

0x8729,	// (0x000144d6) list_single_heading_pane_g1_cp2_ParamLimits

0x8729,	// (0x000144d6) list_single_heading_pane_g1_cp2

0x8735,	// (0x000144e2) list_single_heading_pane_g2_cp2

0x873d,	// (0x000144ea) list_single_heading_pane_t1_cp2_ParamLimits

0x873d,	// (0x000144ea) list_single_heading_pane_t1_cp2

0xa165,	// (0x00015f12) list_single_heading_pane_t2_cp2_ParamLimits

0xa165,	// (0x00015f12) list_single_heading_pane_t2_cp2

0xa0ad,	// (0x00015e5a) list_double_graphic_pane_g1_cp2_ParamLimits

0xa0ad,	// (0x00015e5a) list_double_graphic_pane_g1_cp2

0xa0b9,	// (0x00015e66) list_double_graphic_pane_g2_cp2_ParamLimits

0xa0b9,	// (0x00015e66) list_double_graphic_pane_g2_cp2

0xa0c8,	// (0x00015e75) list_double_graphic_pane_g3_cp2

0xa0d0,	// (0x00015e7d) list_double_graphic_pane_t1_cp2_ParamLimits

0xa0d0,	// (0x00015e7d) list_double_graphic_pane_t1_cp2

0xa0e6,	// (0x00015e93) list_double_graphic_pane_t2_cp2_ParamLimits

0xa0e6,	// (0x00015e93) list_double_graphic_pane_t2_cp2

0x87da,	// (0x00014587) list_double_number_pane_g1_cp2_ParamLimits

0x87da,	// (0x00014587) list_double_number_pane_g1_cp2

0x87e6,	// (0x00014593) list_double_number_pane_g2_cp2

0xa071,	// (0x00015e1e) list_double_number_pane_t1_cp2_ParamLimits

0xa071,	// (0x00015e1e) list_double_number_pane_t1_cp2

0xa085,	// (0x00015e32) list_double_number_pane_t2_cp2_ParamLimits

0xa085,	// (0x00015e32) list_double_number_pane_t2_cp2

0xa09b,	// (0x00015e48) list_double_number_pane_t3_cp2_ParamLimits

0xa09b,	// (0x00015e48) list_double_number_pane_t3_cp2

0x9f5a,	// (0x00015d07) list_single_graphic_pane_g1_cp2_ParamLimits

0x9f5a,	// (0x00015d07) list_single_graphic_pane_g1_cp2

0x884b,	// (0x000145f8) list_single_graphic_pane_g2_cp2_ParamLimits

0x884b,	// (0x000145f8) list_single_graphic_pane_g2_cp2

0x8857,	// (0x00014604) list_single_graphic_pane_g3_cp2

0x9f30,	// (0x00015cdd) list_single_graphic_pane_t1_cp2_ParamLimits

0x9f30,	// (0x00015cdd) list_single_graphic_pane_t1_cp2

0x884b,	// (0x000145f8) list_single_number_pane_g1_cp2_ParamLimits

0x884b,	// (0x000145f8) list_single_number_pane_g1_cp2

0x8857,	// (0x00014604) list_single_number_pane_g2_cp2

0x9f30,	// (0x00015cdd) list_single_number_pane_t1_cp2_ParamLimits

0x9f30,	// (0x00015cdd) list_single_number_pane_t1_cp2

0x9f46,	// (0x00015cf3) list_single_number_pane_t2_cp2_ParamLimits

0x9f46,	// (0x00015cf3) list_single_number_pane_t2_cp2

0x8647,	// (0x000143f4) list_double2_pane_g1_cp2_ParamLimits

0x8647,	// (0x000143f4) list_double2_pane_g1_cp2

0x8658,	// (0x00014405) list_double2_pane_g2_cp2

0x87b2,	// (0x0001455f) list_double2_pane_t1_cp2_ParamLimits

0x87b2,	// (0x0001455f) list_double2_pane_t1_cp2

0x87c8,	// (0x00014575) list_double2_pane_t2_cp2_ParamLimits

0x87c8,	// (0x00014575) list_double2_pane_t2_cp2

0x87da,	// (0x00014587) list_double_pane_g1_cp2_ParamLimits

0x87da,	// (0x00014587) list_double_pane_g1_cp2

0x87e6,	// (0x00014593) list_double_pane_g2_cp2

0x87ee,	// (0x0001459b) list_double_pane_t1_cp2_ParamLimits

0x87ee,	// (0x0001459b) list_double_pane_t1_cp2

0x8804,	// (0x000145b1) list_double_pane_t2_cp2_ParamLimits

0x8804,	// (0x000145b1) list_double_pane_t2_cp2

0x883b,	// (0x000145e8) list_single_pane_cp2_g3

0x884b,	// (0x000145f8) list_single_pane_g1_cp2_ParamLimits

0x884b,	// (0x000145f8) list_single_pane_g1_cp2

0x8857,	// (0x00014604) list_single_pane_g2_cp2

0x885f,	// (0x0001460c) list_single_pane_t1_cp2_ParamLimits

0x885f,	// (0x0001460c) list_single_pane_t1_cp2

0x8877,	// (0x00014624) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8877,	// (0x00014624) list_single_large_graphic_pane_g1_cp2

0x7496,	// (0x00013243) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7496,	// (0x00013243) list_single_large_graphic_pane_g2_cp2

0x8883,	// (0x00014630) list_single_large_graphic_pane_g3_cp2

0x888b,	// (0x00014638) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x888b,	// (0x00014638) list_single_large_graphic_pane_g4_cp1

0x88a5,	// (0x00014652) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x88a5,	// (0x00014652) list_single_large_graphic_pane_t1_cp2

0x9efc,	// (0x00015ca9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9efc,	// (0x00015ca9) list_single_graphic_heading_pane_g1_cp2

0x9ec9,	// (0x00015c76) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9ec9,	// (0x00015c76) list_single_graphic_heading_pane_g4_cp2

0x8857,	// (0x00014604) list_single_graphic_heading_pane_g5_cp2

0x9f08,	// (0x00015cb5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9f08,	// (0x00015cb5) list_single_graphic_heading_pane_t1_cp2

0x9f1e,	// (0x00015ccb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9f1e,	// (0x00015ccb) list_single_graphic_heading_pane_t2_cp2

0x9ebd,	// (0x00015c6a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9ebd,	// (0x00015c6a) list_single_2graphic_pane_g1_cp2

0x9ec9,	// (0x00015c76) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9ec9,	// (0x00015c76) list_single_2graphic_pane_g2_cp2

0x8857,	// (0x00014604) list_single_2graphic_pane_g3_cp2

0x9eda,	// (0x00015c87) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9eda,	// (0x00015c87) list_single_2graphic_pane_g4_cp2

0x9ee6,	// (0x00015c93) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9ee6,	// (0x00015c93) list_single_2graphic_pane_t1_cp2

0x38a0,	// (0x0000f64d) list_highlight_pane_g10_cp1

0x9a95,	// (0x00015842) list_highlight_pane_g1_cp1

0x9a9d,	// (0x0001584a) list_highlight_pane_g2_cp1

0x9aa5,	// (0x00015852) list_highlight_pane_g3_cp1

0x9aad,	// (0x0001585a) list_highlight_pane_g4_cp1

0x9ab5,	// (0x00015862) list_highlight_pane_g5_cp1

0x9abd,	// (0x0001586a) list_highlight_pane_g6_cp1

0x9ac5,	// (0x00015872) list_highlight_pane_g7_cp1

0x9acd,	// (0x0001587a) list_highlight_pane_g8_cp1

0x9ad5,	// (0x00015882) list_highlight_pane_g9_cp1

0x99b5,	// (0x00015762) form_field_slider_pane_t3

0x99c3,	// (0x00015770) form_field_slider_pane_t4

0x99d1,	// (0x0001577e) slider_form_pane_ParamLimits

0x99d1,	// (0x0001577e) slider_form_pane

0x3a68,	// (0x0000f815) control_abbreviations

0x3a68,	// (0x0000f815) control_conventions

0x3a68,	// (0x0000f815) control_definitions

0x3a68,	// (0x0000f815) format_table_attribute

0xa1af,	// (0x00015f5c) bg_popup_preview_window_pane_g9

0x3a68,	// (0x0000f815) format_table_data2

0x3a68,	// (0x0000f815) format_table_data3

0x3a68,	// (0x0000f815) format_table_data_example

0x0008,

0x3a68,	// (0x0000f815) intro_purpose

0xf8be,	// (0x0001b66b) bg_popup_preview_window_pane_g

0x3a68,	// (0x0000f815) texts_category

0x3a68,	// (0x0000f815) texts_graphics

0x88bb,	// (0x00014668) text_digital

0x88ca,	// (0x00014677) text_primary

0x88d9,	// (0x00014686) text_primary_small

0x88e8,	// (0x00014695) text_secondary

0x88f7,	// (0x000146a4) text_title

0xa9b9,	// (0x00016766) bg_passive_tab_pane_g1_cp3_srt

0x854f,	// (0x000142fc) bg_passive_tab_pane_g2_cp3_srt

0xa9c2,	// (0x0001676f) bg_passive_tab_pane_g3_cp3_srt

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp3_srt_ParamLimits

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp3_srt

0xa9cb,	// (0x00016778) tabs_4_active_pane_srt_g1

0xa9d3,	// (0x00016780) tabs_4_active_pane_srt_t1_ParamLimits

0xa9d3,	// (0x00016780) tabs_4_active_pane_srt_t1

0xa9b9,	// (0x00016766) bg_active_tab_pane_g1_cp3_copy1

0x854f,	// (0x000142fc) bg_active_tab_pane_g2_cp3_copy1

0xa9c2,	// (0x0001676f) bg_active_tab_pane_g3_cp3_copy1

0x6c3c,	// (0x000129e9) tabs_2_long_active_pane_srt_ParamLimits

0x6c3c,	// (0x000129e9) tabs_2_long_active_pane_srt

0x6c3c,	// (0x000129e9) tabs_2_long_passive_pane_srt_ParamLimits

0x6c3c,	// (0x000129e9) tabs_2_long_passive_pane_srt

0x7db1,	// (0x00013b5e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7db1,	// (0x00013b5e) bg_passive_tab_pane_cp4_srt

0xa5df,	// (0x0001638c) bg_passive_tab_pane_g1_cp4_srt

0x854f,	// (0x000142fc) bg_passive_tab_pane_g2_cp4_srt

0xa5e8,	// (0x00016395) bg_passive_tab_pane_g3_cp4_srt

0x7d90,	// (0x00013b3d) bg_active_tab_pane_cp4_srt_ParamLimits

0x7d90,	// (0x00013b3d) bg_active_tab_pane_cp4_srt

0xa5f1,	// (0x0001639e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa5f1,	// (0x0001639e) tabs_2_long_active_pane_srt_t1

0xa5df,	// (0x0001638c) bg_active_tab_pane_g1_cp4_srt

0x854f,	// (0x000142fc) bg_active_tab_pane_g2_cp4_srt

0xa5e8,	// (0x00016395) bg_active_tab_pane_g3_cp4_srt

0x6ed1,	// (0x00012c7e) tabs_3_long_active_pane_srt_ParamLimits

0x6ed1,	// (0x00012c7e) tabs_3_long_active_pane_srt

0x6ed1,	// (0x00012c7e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6ed1,	// (0x00012c7e) tabs_3_long_passive_pane_cp_srt

0x6ed1,	// (0x00012c7e) tabs_3_long_passive_pane_srt_ParamLimits

0x6ed1,	// (0x00012c7e) tabs_3_long_passive_pane_srt

0x7db1,	// (0x00013b5e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7db1,	// (0x00013b5e) bg_passive_tab_pane_cp5_srt

0x85d9,	// (0x00014386) bg_passive_tab_pane_g1_cp5_srt

0x854f,	// (0x000142fc) bg_passive_tab_pane_g2_cp5_srt

0x85e2,	// (0x0001438f) bg_passive_tab_pane_g3_cp5_srt

0x7d90,	// (0x00013b3d) bg_active_tab_pane_cp5_srt_ParamLimits

0x7d90,	// (0x00013b3d) bg_active_tab_pane_cp5_srt

0xa5cd,	// (0x0001637a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa5cd,	// (0x0001637a) tabs_3_long_active_pane_srt_t1

0x85d9,	// (0x00014386) bg_active_tab_pane_g1_cp5_srt

0x854f,	// (0x000142fc) bg_active_tab_pane_g2_cp5_srt

0x85e2,	// (0x0001438f) bg_active_tab_pane_g3_cp5_srt

0xa5bf,	// (0x0001636c) navi_text_pane_srt_t1

0xa5b7,	// (0x00016364) navi_icon_pane_srt_g1

0x8acc,	// (0x00014879) midp_editing_number_pane_srt

0x8906,	// (0x000146b3) midp_ticker_pane_srt

0x8ad4,	// (0x00014881) midp_ticker_pane_srt_g1

0x8adc,	// (0x00014889) midp_ticker_pane_srt_g2

0x0001,

0xf746,	// (0x0001b4f3) midp_ticker_pane_srt_g

0x8ae4,	// (0x00014891) midp_ticker_pane_srt_t1

0xa5a8,	// (0x00016355) midp_editing_number_pane_t1_copy1

0x890e,	// (0x000146bb) listscroll_midp_pane

0x890e,	// (0x000146bb) midp_form_pane

0x897e,	// (0x0001472b) midp_info_popup_window_ParamLimits

0x897e,	// (0x0001472b) midp_info_popup_window

0x7cdc,	// (0x00013a89) bg_popup_sub_pane_cp50_ParamLimits

0x7cdc,	// (0x00013a89) bg_popup_sub_pane_cp50

0x96b9,	// (0x00015466) listscroll_midp_info_pane_ParamLimits

0x96b9,	// (0x00015466) listscroll_midp_info_pane

0x9699,	// (0x00015446) listscroll_form_midp_pane_ParamLimits

0x9699,	// (0x00015446) listscroll_form_midp_pane

0x96a5,	// (0x00015452) scroll_bar_cp050

0x9679,	// (0x00015426) list_midp_pane

0xb73d,	// (0x000174ea) signal_pane_g2_cp

0x95b3,	// (0x00015360) listscroll_midp_info_pane_t1_ParamLimits

0x95b3,	// (0x00015360) listscroll_midp_info_pane_t1

0x95cb,	// (0x00015378) listscroll_midp_info_pane_t2_ParamLimits

0x95cb,	// (0x00015378) listscroll_midp_info_pane_t2

0x9609,	// (0x000153b6) listscroll_midp_info_pane_t3_ParamLimits

0x9609,	// (0x000153b6) listscroll_midp_info_pane_t3

0x9643,	// (0x000153f0) listscroll_midp_info_pane_t4_ParamLimits

0x9643,	// (0x000153f0) listscroll_midp_info_pane_t4

0x0003,

0xf7f9,	// (0x0001b5a6) listscroll_midp_info_pane_t_ParamLimits

0xf7f9,	// (0x0001b5a6) listscroll_midp_info_pane_t

0x7d3d,	// (0x00013aea) scroll_pane_cp21

0x9551,	// (0x000152fe) form_midp_field_choice_group_pane

0x955a,	// (0x00015307) form_midp_field_text_pane

0x9599,	// (0x00015346) form_midp_field_time_pane

0x95a1,	// (0x0001534e) form_midp_gauge_slider_pane

0x95aa,	// (0x00015357) form_midp_gauge_wait_pane

0x3a68,	// (0x0000f815) form_midp_image_pane

0x9523,	// (0x000152d0) list_single_midp_pane_ParamLimits

0x9523,	// (0x000152d0) list_single_midp_pane

0x94db,	// (0x00015288) form_midp_field_text_pane_t1

0x929c,	// (0x00015049) input_focus_pane_cp050

0x9512,	// (0x000152bf) list_midp_form_text_pane

0x94aa,	// (0x00015257) form_midp_field_choice_group_pane_t1

0x94b8,	// (0x00015265) input_focus_pane_cp051

0x94cc,	// (0x00015279) list_midp_choice_pane

0x3a68,	// (0x0000f815) status_idle_pane

0x948e,	// (0x0001523b) form_midp_field_time_pane_t1

0x38a0,	// (0x0000f64d) wait_anim_pane_g2_copy1

0x949c,	// (0x00015249) form_midp_field_time_pane_t2

0x0001,

0x8a2c,	// (0x000147d9) aid_navinavi_width_2_pane

0xf7f4,	// (0x0001b5a1) form_midp_field_time_pane_t

0x3a68,	// (0x0000f815) input_focus_pane_cp052

0x3a68,	// (0x0000f815) bg_input_focus_pane_cp040

0x944e,	// (0x000151fb) form_midp_gauge_slider_pane_t1

0x945c,	// (0x00015209) form_midp_gauge_slider_pane_t2

0x946a,	// (0x00015217) form_midp_gauge_slider_pane_t3

0x9478,	// (0x00015225) form_midp_gauge_slider_pane_t4

0x0003,

0xf7eb,	// (0x0001b598) form_midp_gauge_slider_pane_t

0x9486,	// (0x00015233) form_midp_slider_pane

0x6c3c,	// (0x000129e9) bg_input_focus_pane_cp041_ParamLimits

0x6c3c,	// (0x000129e9) bg_input_focus_pane_cp041

0x941b,	// (0x000151c8) form_midp_gauge_wait_pane_t1_ParamLimits

0x941b,	// (0x000151c8) form_midp_gauge_wait_pane_t1

0x942d,	// (0x000151da) form_midp_gauge_wait_pane_t2_ParamLimits

0x942d,	// (0x000151da) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e6,	// (0x0001b593) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e6,	// (0x0001b593) form_midp_gauge_wait_pane_t

0x943f,	// (0x000151ec) form_midp_wait_pane_ParamLimits

0x943f,	// (0x000151ec) form_midp_wait_pane

0x93e5,	// (0x00015192) form_midp_image_pane_g1

0x93ee,	// (0x0001519b) form_midp_image_pane_t1

0x93fd,	// (0x000151aa) form_midp_image_pane_t2

0x940c,	// (0x000151b9) form_midp_image_pane_t3

0x0002,

0xf7df,	// (0x0001b58c) form_midp_image_pane_t

0x93cd,	// (0x0001517a) list_single_midp_pane_g1

0x93d6,	// (0x00015183) list_single_midp_pane_t1

0x93a5,	// (0x00015152) list_midp_form_item_pane_ParamLimits

0x93a5,	// (0x00015152) list_midp_form_item_pane

0x89d4,	// (0x00014781) list_midp_form_item_pane_t1

0x89e3,	// (0x00014790) midp_ticker_pane_g1

0x89ef,	// (0x0001479c) midp_ticker_pane_g2

0x0001,

0xf72c,	// (0x0001b4d9) midp_ticker_pane_g

0x89fb,	// (0x000147a8) midp_ticker_pane_t1

0xa82c,	// (0x000165d9) midp_editing_number_pane_t1

0xa80a,	// (0x000165b7) midp_editing_number_pane

0xa819,	// (0x000165c6) midp_ticker_pane

0x96c5,	// (0x00015472) ai_message_heading_pane

0x3a68,	// (0x0000f815) bg_popup_window_pane_cp14

0x96cd,	// (0x0001547a) listscroll_ai_message_pane

0xa520,	// (0x000162cd) ai_message_heading_pane_g1_ParamLimits

0xa520,	// (0x000162cd) ai_message_heading_pane_g1

0xa52c,	// (0x000162d9) ai_message_heading_pane_g2_ParamLimits

0xa52c,	// (0x000162d9) ai_message_heading_pane_g2

0xa538,	// (0x000162e5) ai_message_heading_pane_g3_ParamLimits

0xa538,	// (0x000162e5) ai_message_heading_pane_g3

0xa544,	// (0x000162f1) ai_message_heading_pane_g4_ParamLimits

0xa544,	// (0x000162f1) ai_message_heading_pane_g4

0x0003,

0xf920,	// (0x0001b6cd) ai_message_heading_pane_g_ParamLimits

0xf920,	// (0x0001b6cd) ai_message_heading_pane_g

0xa550,	// (0x000162fd) ai_message_heading_pane_t1_ParamLimits

0xa550,	// (0x000162fd) ai_message_heading_pane_t1

0xa56a,	// (0x00016317) ai_message_heading_pane_t2_ParamLimits

0xa56a,	// (0x00016317) ai_message_heading_pane_t2

0x0001,

0xf929,	// (0x0001b6d6) ai_message_heading_pane_t_ParamLimits

0xf929,	// (0x0001b6d6) ai_message_heading_pane_t

0xa57c,	// (0x00016329) bg_popup_heading_pane_cp1_ParamLimits

0xa57c,	// (0x00016329) bg_popup_heading_pane_cp1

0xa50e,	// (0x000162bb) list_ai_message_pane_ParamLimits

0xa50e,	// (0x000162bb) list_ai_message_pane

0x7d3d,	// (0x00013aea) scroll_pane_cp10

0xa4aa,	// (0x00016257) list_ai_message_pane_g1

0xa4b2,	// (0x0001625f) list_ai_message_pane_g2

0x0001,

0xf8fd,	// (0x0001b6aa) list_ai_message_pane_g

0xa4ba,	// (0x00016267) list_ai_message_pane_t1_ParamLimits

0xa4ba,	// (0x00016267) list_ai_message_pane_t1

0xa4cf,	// (0x0001627c) list_ai_message_pane_t2_ParamLimits

0xa4cf,	// (0x0001627c) list_ai_message_pane_t2

0xa4e4,	// (0x00016291) list_ai_message_pane_t3_ParamLimits

0xa4e4,	// (0x00016291) list_ai_message_pane_t3

0xa4f9,	// (0x000162a6) list_ai_message_pane_t4_ParamLimits

0xa4f9,	// (0x000162a6) list_ai_message_pane_t4

0x0003,

0xf902,	// (0x0001b6af) list_ai_message_pane_t_ParamLimits

0xf902,	// (0x0001b6af) list_ai_message_pane_t

0xa495,	// (0x00016242) cell_ai_soft_ind_pane_ParamLimits

0xa495,	// (0x00016242) cell_ai_soft_ind_pane

0x8a0d,	// (0x000147ba) cell_ai_soft_ind_pane_g1_ParamLimits

0x8a0d,	// (0x000147ba) cell_ai_soft_ind_pane_g1

0x3a68,	// (0x0000f815) grid_highlight_cp1

0x8a1a,	// (0x000147c7) text_secondary_cp56_ParamLimits

0x8a1a,	// (0x000147c7) text_secondary_cp56

0xa46a,	// (0x00016217) example_general_pane_ParamLimits

0xa46a,	// (0x00016217) example_general_pane

0xa476,	// (0x00016223) example_parent_pane_g1_ParamLimits

0xa476,	// (0x00016223) example_parent_pane_g1

0xa482,	// (0x0001622f) example_parent_pane_t1_ParamLimits

0xa482,	// (0x0001622f) example_parent_pane_t1

0x52bc,	// (0x00011069) popup_preview_text_window_ParamLimits

0x52bc,	// (0x00011069) popup_preview_text_window

0x8843,	// (0x000145f0) list_single_pane_cp2_g4

0x6fad,	// (0x00012d5a) bg_popup_preview_window_pane_ParamLimits

0x6fad,	// (0x00012d5a) bg_popup_preview_window_pane

0xa1b7,	// (0x00015f64) popup_preview_text_window_t1_ParamLimits

0xa1b7,	// (0x00015f64) popup_preview_text_window_t1

0xa1d5,	// (0x00015f82) popup_preview_text_window_t2_ParamLimits

0xa1d5,	// (0x00015f82) popup_preview_text_window_t2

0xa21e,	// (0x00015fcb) popup_preview_text_window_t3_ParamLimits

0xa21e,	// (0x00015fcb) popup_preview_text_window_t3

0xa263,	// (0x00016010) popup_preview_text_window_t4_ParamLimits

0xa263,	// (0x00016010) popup_preview_text_window_t4

0x0004,

0xf8d1,	// (0x0001b67e) popup_preview_text_window_t_ParamLimits

0xf8d1,	// (0x0001b67e) popup_preview_text_window_t

0xa2e1,	// (0x0001608e) scroll_pane_cp11

0x917a,	// (0x00014f27) bg_popup_preview_window_pane_g1

0xa177,	// (0x00015f24) bg_popup_preview_window_pane_g2

0xa17f,	// (0x00015f2c) bg_popup_preview_window_pane_g3

0xa187,	// (0x00015f34) bg_popup_preview_window_pane_g4

0xa18f,	// (0x00015f3c) bg_popup_preview_window_pane_g5

0xa197,	// (0x00015f44) bg_popup_preview_window_pane_g6

0xa19f,	// (0x00015f4c) bg_popup_preview_window_pane_g7

0xa1a7,	// (0x00015f54) bg_popup_preview_window_pane_g8

0x4496,	// (0x00010243) aid_popup_width_pane

0x529a,	// (0x00011047) popup_midp_note_alarm_window_ParamLimits

0x529a,	// (0x00011047) popup_midp_note_alarm_window

0x7a0c,	// (0x000137b9) data_form_pane_ParamLimits

0x7a18,	// (0x000137c5) form_field_data_pane_g1

0x7a22,	// (0x000137cf) form_field_data_pane_t1_ParamLimits

0x7a3a,	// (0x000137e7) input_focus_pane_ParamLimits

0x7a48,	// (0x000137f5) data_form_wide_pane_ParamLimits

0x7a54,	// (0x00013801) form_field_data_wide_pane_g1

0x7a80,	// (0x0001382d) form_field_data_wide_pane_t1_ParamLimits

0x7254,	// (0x00013001) input_focus_pane_cp6_ParamLimits

0x7cea,	// (0x00013a97) input_popup_find_pane_g1_ParamLimits

0x7cea,	// (0x00013a97) input_popup_find_pane_g1

0x4a18,	// (0x000107c5) aid_navi_side_left_pane

0x4a2d,	// (0x000107da) aid_navi_side_right_pane

0x9b90,	// (0x0001593d) bg_popup_window_pane_cp30_ParamLimits

0x9b90,	// (0x0001593d) bg_popup_window_pane_cp30

0x9c0a,	// (0x000159b7) popup_midp_note_alarm_window_g1_ParamLimits

0x9c0a,	// (0x000159b7) popup_midp_note_alarm_window_g1

0x9c3a,	// (0x000159e7) popup_midp_note_alarm_window_t1_ParamLimits

0x9c3a,	// (0x000159e7) popup_midp_note_alarm_window_t1

0x9cdb,	// (0x00015a88) popup_midp_note_alarm_window_t2_ParamLimits

0x9cdb,	// (0x00015a88) popup_midp_note_alarm_window_t2

0x9d89,	// (0x00015b36) popup_midp_note_alarm_window_t3_ParamLimits

0x9d89,	// (0x00015b36) popup_midp_note_alarm_window_t3

0x9dbb,	// (0x00015b68) popup_midp_note_alarm_window_t4_ParamLimits

0x9dbb,	// (0x00015b68) popup_midp_note_alarm_window_t4

0x9de1,	// (0x00015b8e) popup_midp_note_alarm_window_t5_ParamLimits

0x9de1,	// (0x00015b8e) popup_midp_note_alarm_window_t5

0x000a,

0xf86e,	// (0x0001b61b) popup_midp_note_alarm_window_t_ParamLimits

0xf86e,	// (0x0001b61b) popup_midp_note_alarm_window_t

0x9e8d,	// (0x00015c3a) wait_bar_pane_cp1_ParamLimits

0x9e8d,	// (0x00015c3a) wait_bar_pane_cp1

0x3a68,	// (0x0000f815) wait_anim_pane_copy1

0x3a68,	// (0x0000f815) wait_border_pane_copy1

0x9876,	// (0x00015623) wait_border_pane_g1_copy1

0x7a97,	// (0x00013844) form_field_popup_pane_g1

0x7a9f,	// (0x0001384c) form_field_popup_pane_t1_ParamLimits

0x7a3a,	// (0x000137e7) input_focus_pane_cp7_ParamLimits

0x7ab7,	// (0x00013864) list_form_pane_ParamLimits

0x7ac3,	// (0x00013870) form_field_popup_wide_pane_g1

0x7acb,	// (0x00013878) form_field_popup_wide_pane_t1_ParamLimits

0x7a3a,	// (0x000137e7) input_focus_pane_cp8_ParamLimits

0x7add,	// (0x0001388a) list_form_wide_pane_ParamLimits

0xaa5e,	// (0x0001680b) aid_size_cell_graphic_pane

0x7bb1,	// (0x0001395e) data_form_pane_t1_ParamLimits

0xa7d7,	// (0x00016584) data_form_wide_pane_t1_ParamLimits

0x8d2b,	// (0x00014ad8) bg_status_flat_pane

0x6b9c,	// (0x00012949) title_pane_t1_ParamLimits

0x6c04,	// (0x000129b1) title_pane_t2_ParamLimits

0x6c2a,	// (0x000129d7) title_pane_t3_ParamLimits

0xf530,	// (0x0001b2dd) title_pane_t_ParamLimits

0x81be,	// (0x00013f6b) level_1_signal_ParamLimits

0x81d0,	// (0x00013f7d) level_2_signal_ParamLimits

0x81e3,	// (0x00013f90) level_3_signal_ParamLimits

0x81f6,	// (0x00013fa3) level_4_signal_ParamLimits

0x8209,	// (0x00013fb6) level_5_signal_ParamLimits

0x821c,	// (0x00013fc9) level_6_signal_ParamLimits

0x822f,	// (0x00013fdc) level_7_signal_ParamLimits

0x81be,	// (0x00013f6b) level_1_battery_ParamLimits

0x81d0,	// (0x00013f7d) level_2_battery_ParamLimits

0x81e3,	// (0x00013f90) level_3_battery_ParamLimits

0x81f6,	// (0x00013fa3) level_4_battery_ParamLimits

0x8209,	// (0x00013fb6) level_5_battery_ParamLimits

0x821c,	// (0x00013fc9) level_6_battery_ParamLimits

0x822f,	// (0x00013fdc) level_7_battery_ParamLimits

0x9a95,	// (0x00015842) bg_status_flat_pane_g1

0x9a9d,	// (0x0001584a) bg_status_flat_pane_g2

0x9aa5,	// (0x00015852) bg_status_flat_pane_g3

0x9aad,	// (0x0001585a) bg_status_flat_pane_g4

0x9ab5,	// (0x00015862) bg_status_flat_pane_g5

0x9abd,	// (0x0001586a) bg_status_flat_pane_g6

0x9ac5,	// (0x00015872) bg_status_flat_pane_g7

0x6c52,	// (0x000129ff) tabs_3_active_pane_t1_ParamLimits

0x6c52,	// (0x000129ff) tabs_3_passive_pane_t1_ParamLimits

0x6c6c,	// (0x00012a19) tabs_4_active_pane_t1_ParamLimits

0x6c6c,	// (0x00012a19) tabs_4_1_passive_pane_t1_ParamLimits

0x7d7e,	// (0x00013b2b) tabs_2_active_pane_t1_ParamLimits

0x7d7e,	// (0x00013b2b) tabs_2_passive_pane_t1_ParamLimits

0x7d90,	// (0x00013b3d) bg_active_tab_pane_cp4_ParamLimits

0x7d9e,	// (0x00013b4b) tabs_2_long_active_pane_t1_ParamLimits

0x7db1,	// (0x00013b5e) bg_passive_tab_pane_cp4_ParamLimits

0x55e1,	// (0x0001138e) list_single_midp_graphic_pane_t1_ParamLimits

0x7d90,	// (0x00013b3d) bg_active_tab_pane_cp5_ParamLimits

0x7dbd,	// (0x00013b6a) tabs_3_long_active_pane_t1_ParamLimits

0x7db1,	// (0x00013b5e) bg_passive_tab_pane_cp5_ParamLimits

0x55e1,	// (0x0001138e) list_single_midp_graphic_pane_t1

0x8d2b,	// (0x00014ad8) bg_status_flat_pane_ParamLimits

0x8df4,	// (0x00014ba1) indicator_pane_cp2_ParamLimits

0x8df4,	// (0x00014ba1) indicator_pane_cp2

0x8f1f,	// (0x00014ccc) navi_pane_srt_ParamLimits

0x8f1f,	// (0x00014ccc) navi_pane_srt

0x8f43,	// (0x00014cf0) popup_clock_digital_analogue_window_cp1

0x6d33,	// (0x00012ae0) indicator_pane_t1

0x8906,	// (0x000146b3) copy_highlight_pane

0x8906,	// (0x000146b3) cursor_graphics_pane

0x8906,	// (0x000146b3) graphic_within_text_pane

0x8906,	// (0x000146b3) link_highlight_pane

0xa2a4,	// (0x00016051) popup_preview_text_window_t5_ParamLimits

0xa2a4,	// (0x00016051) popup_preview_text_window_t5

0x8a34,	// (0x000147e1) cursor_digital_pane

0x8a34,	// (0x000147e1) cursor_primary_pane

0x8a45,	// (0x000147f2) cursor_primary_small_pane

0x8a4d,	// (0x000147fa) cursor_secondary_pane

0x8a55,	// (0x00014802) cursor_title_pane

0x8a34,	// (0x000147e1) link_highlight_digital_pane

0x8a3c,	// (0x000147e9) link_highlight_primary_pane

0x8a45,	// (0x000147f2) link_highlight_primary_small_pane

0x8a4d,	// (0x000147fa) link_highlight_secondary_pane

0x8a55,	// (0x00014802) link_highlight_title_pane

0x8a34,	// (0x000147e1) copy_highlight_digital_pane

0x8a34,	// (0x000147e1) copy_highlight_primary_pane

0x8a45,	// (0x000147f2) copy_highlight_primary_small_pane

0x8a4d,	// (0x000147fa) copy_highlight_secondary_pane

0x8a55,	// (0x00014802) copy_highlight_title_pane

0x8a4d,	// (0x000147fa) graphic_text_digital_pane

0x9b33,	// (0x000158e0) graphic_text_primary_pane

0x9b3c,	// (0x000158e9) graphic_text_primary_small_pane

0x8a45,	// (0x000147f2) graphic_text_secondary_pane

0x8a34,	// (0x000147e1) graphic_text_title_pane

0x8a5d,	// (0x0001480a) cursor_primary_pane_g1

0x9b25,	// (0x000158d2) cursor_text_primary_t1

0x9b0d,	// (0x000158ba) cursor_primary_small_pane_g1

0x9b17,	// (0x000158c4) cursor_text_primary_small_t1

0x9af5,	// (0x000158a2) cursor_primary_small_pane_g1_copy1

0x9aff,	// (0x000158ac) cursor_text_primary_small_t1_copy1

0x9add,	// (0x0001588a) cursor_text_title_t1

0x9aeb,	// (0x00015898) cursor_title_pane_g1

0x8a5d,	// (0x0001480a) cursor_digital_pane_g1

0x8a67,	// (0x00014814) cursor_text_digital_t1

0x8a8c,	// (0x00014839) link_highlight_primary_pane_g1

0x9a86,	// (0x00015833) link_highlight_primary_pane_t1

0x8a75,	// (0x00014822) link_highlight_primary_small_pane_g1

0x8a7d,	// (0x0001482a) link_highlight_primary_small_pane_t1

0x8a8c,	// (0x00014839) link_highlight_secondary_pane_g1

0x8a94,	// (0x00014841) link_highlight_secondary_pane_t1

0x99fa,	// (0x000157a7) link_highlight_title_pane_g1

0x9a02,	// (0x000157af) link_highlight_title_pane_t1

0x99e3,	// (0x00015790) link_highlight_digital_pane_g1

0x99eb,	// (0x00015798) link_highlight_digital_pane_t1

0x98bb,	// (0x00015668) copy_highlight_primary_pane_g1

0x98c3,	// (0x00015670) copy_highlight_primary_pane_t1

0x9895,	// (0x00015642) copy_highlight_primary_small_pane_g1

0x98ac,	// (0x00015659) copy_highlight_primary_small_pane_t1

0x8aa3,	// (0x00014850) copy_highlight_secondary_pane_g1

0x8aab,	// (0x00014858) copy_highlight_secondary_pane_t1

0x9895,	// (0x00015642) copy_highlight_title_pane_g1

0x989d,	// (0x0001564a) copy_highlight_title_pane_t1

0x98bb,	// (0x00015668) copy_highlight_digital_pane_g1

0xac2c,	// (0x000169d9) copy_highlight_digital_pane_t1

0xab80,	// (0x0001692d) graphic_text_primary_pane_g1

0xac10,	// (0x000169bd) graphic_text_primary_pane_t1

0xac1e,	// (0x000169cb) graphic_text_primary_pane_t2

0x0001,

0xf99d,	// (0x0001b74a) graphic_text_primary_pane_t

0xabec,	// (0x00016999) graphic_text_primary_small_pane_g1

0xabf4,	// (0x000169a1) graphic_text_primary_small_pane_t1

0xac02,	// (0x000169af) graphic_text_primary_small_pane_t2

0x0001,

0xf998,	// (0x0001b745) graphic_text_primary_small_pane_t

0xabc8,	// (0x00016975) graphic_text_secondary_pane_g1

0xabd0,	// (0x0001697d) graphic_text_secondary_pane_t1

0xabde,	// (0x0001698b) graphic_text_secondary_pane_t2

0x0001,

0xf993,	// (0x0001b740) graphic_text_secondary_pane_t

0xaba4,	// (0x00016951) graphic_text_title_pane_g1

0xabac,	// (0x00016959) graphic_text_title_pane_t1

0xabba,	// (0x00016967) graphic_text_title_pane_t2

0x0001,

0xf98e,	// (0x0001b73b) graphic_text_title_pane_t

0xab80,	// (0x0001692d) graphic_text_digital_pane_g1

0xab88,	// (0x00016935) graphic_text_digital_pane_t1

0xab96,	// (0x00016943) graphic_text_digital_pane_t2

0x0001,

0xf989,	// (0x0001b736) graphic_text_digital_pane_t

0x6c3c,	// (0x000129e9) navi_icon_pane_srt_ParamLimits

0x6c3c,	// (0x000129e9) navi_icon_pane_srt

0x3a68,	// (0x0000f815) navi_midp_pane_srt

0x3a68,	// (0x0000f815) navi_navi_pane_srt

0x6c3c,	// (0x000129e9) navi_text_pane_srt_ParamLimits

0x6c3c,	// (0x000129e9) navi_text_pane_srt

0xab4b,	// (0x000168f8) navi_navi_icon_text_pane_srt

0xab53,	// (0x00016900) navi_navi_pane_srt_g1_ParamLimits

0xab53,	// (0x00016900) navi_navi_pane_srt_g1

0xab65,	// (0x00016912) navi_navi_pane_srt_g2_ParamLimits

0xab65,	// (0x00016912) navi_navi_pane_srt_g2

0x0001,

0xf984,	// (0x0001b731) navi_navi_pane_srt_g_ParamLimits

0xf984,	// (0x0001b731) navi_navi_pane_srt_g

0xab77,	// (0x00016924) navi_navi_tabs_pane_srt

0xab4b,	// (0x000168f8) navi_navi_text_pane_srt

0xab4b,	// (0x000168f8) navi_navi_volume_pane_srt

0xab3c,	// (0x000168e9) navi_navi_text_pane_srt_t1

0x595b,	// (0x00011708) navi_navi_volume_pane_srt_g1

0x5963,	// (0x00011710) volume_small_pane_srt_ParamLimits

0x5963,	// (0x00011710) volume_small_pane_srt

0x4cf8,	// (0x00010aa5) volume_small_pane_srt_g1_ParamLimits

0x4cf8,	// (0x00010aa5) volume_small_pane_srt_g1

0x4d08,	// (0x00010ab5) volume_small_pane_srt_g2_ParamLimits

0x4d08,	// (0x00010ab5) volume_small_pane_srt_g2

0x4d19,	// (0x00010ac6) volume_small_pane_srt_g3_ParamLimits

0x4d19,	// (0x00010ac6) volume_small_pane_srt_g3

0x4d2a,	// (0x00010ad7) volume_small_pane_srt_g4_ParamLimits

0x4d2a,	// (0x00010ad7) volume_small_pane_srt_g4

0x4d3b,	// (0x00010ae8) volume_small_pane_srt_g5_ParamLimits

0x4d3b,	// (0x00010ae8) volume_small_pane_srt_g5

0x4d4c,	// (0x00010af9) volume_small_pane_srt_g6_ParamLimits

0x4d4c,	// (0x00010af9) volume_small_pane_srt_g6

0x4d5d,	// (0x00010b0a) volume_small_pane_srt_g7_ParamLimits

0x4d5d,	// (0x00010b0a) volume_small_pane_srt_g7

0x4d6e,	// (0x00010b1b) volume_small_pane_srt_g8_ParamLimits

0x4d6e,	// (0x00010b1b) volume_small_pane_srt_g8

0x4d7f,	// (0x00010b2c) volume_small_pane_srt_g9_ParamLimits

0x4d7f,	// (0x00010b2c) volume_small_pane_srt_g9

0x4d90,	// (0x00010b3d) volume_small_pane_srt_g10_ParamLimits

0x4d90,	// (0x00010b3d) volume_small_pane_srt_g10

0x0009,

0xf731,	// (0x0001b4de) volume_small_pane_srt_g_ParamLimits

0xf731,	// (0x0001b4de) volume_small_pane_srt_g

0x7056,	// (0x00012e03) query_popup_data_pane_cp2

0xab22,	// (0x000168cf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xab22,	// (0x000168cf) navi_navi_icon_text_pane_srt_t1

0x9b33,	// (0x000158e0) navi_tabs_2_long_pane_srt

0x9b33,	// (0x000158e0) navi_tabs_2_pane_srt

0x9b33,	// (0x000158e0) navi_tabs_3_long_pane_srt

0x9b33,	// (0x000158e0) navi_tabs_3_pane_srt

0x9b33,	// (0x000158e0) navi_tabs_4_pane_srt

0x593b,	// (0x000116e8) tabs_2_active_pane_srt_ParamLimits

0x593b,	// (0x000116e8) tabs_2_active_pane_srt

0x594b,	// (0x000116f8) tabs_2_passive_pane_srt_ParamLimits

0x594b,	// (0x000116f8) tabs_2_passive_pane_srt

0x8c32,	// (0x000149df) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8c32,	// (0x000149df) bg_passive_tab_pane_cp1_srt

0xaaee,	// (0x0001689b) bg_passive_tab_pane_g1_cp1_srt

0x854f,	// (0x000142fc) bg_passive_tab_pane_g2_cp1_srt

0xaaf7,	// (0x000168a4) bg_passive_tab_pane_g3_cp1_srt

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp1_srt_ParamLimits

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp1_srt

0xab00,	// (0x000168ad) tabs_2_active_pane_srt_g1

0xab08,	// (0x000168b5) tabs_2_active_pane_srt_t1_ParamLimits

0xab08,	// (0x000168b5) tabs_2_active_pane_srt_t1

0xaaee,	// (0x0001689b) bg_active_tab_pane_g1_cp1_srt

0x854f,	// (0x000142fc) bg_active_tab_pane_g2_cp1_srt

0xaaf7,	// (0x000168a4) bg_active_tab_pane_g3_cp1_srt

0x5908,	// (0x000116b5) tabs_3_active_pane_srt_ParamLimits

0x5908,	// (0x000116b5) tabs_3_active_pane_srt

0x5919,	// (0x000116c6) tabs_3_passive_pane_cp_srt_ParamLimits

0x5919,	// (0x000116c6) tabs_3_passive_pane_cp_srt

0x592a,	// (0x000116d7) tabs_3_passive_pane_srt_ParamLimits

0x592a,	// (0x000116d7) tabs_3_passive_pane_srt

0x8c32,	// (0x000149df) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8c32,	// (0x000149df) bg_passive_tab_pane_cp2_srt

0x8aba,	// (0x00014867) bg_passive_tab_pane_g1_cp2_srt

0x854f,	// (0x000142fc) bg_passive_tab_pane_g2_cp2_srt

0x8ac3,	// (0x00014870) bg_passive_tab_pane_g3_cp2_srt

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp2_srt_ParamLimits

0x6c3c,	// (0x000129e9) bg_active_tab_pane_cp2_srt

0xaad4,	// (0x00016881) tabs_3_active_pane_srt_g1

0xaadc,	// (0x00016889) tabs_3_active_pane_srt_t1_ParamLimits

0xaadc,	// (0x00016889) tabs_3_active_pane_srt_t1

0x8aba,	// (0x00014867) bg_active_tab_pane_g1_cp2_srt

0x854f,	// (0x000142fc) bg_active_tab_pane_g2_cp2_srt

0x8ac3,	// (0x00014870) bg_active_tab_pane_g3_cp2_srt

0x58c0,	// (0x0001166d) tabs_4_active_pane_srt_ParamLimits

0x58c0,	// (0x0001166d) tabs_4_active_pane_srt

0x58d2,	// (0x0001167f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x58d2,	// (0x0001167f) tabs_4_passive_pane_cp2_srt

0x4f03,	// (0x00010cb0) aid_size_cell_toolbar

0x7db1,	// (0x00013b5e) main_idle_act_pane_ParamLimits

0x50d0,	// (0x00010e7d) popup_large_graphic_colour_window_ParamLimits

0x5437,	// (0x000111e4) popup_toolbar_window_ParamLimits

0x5437,	// (0x000111e4) popup_toolbar_window

0xa856,	// (0x00016603) list_single_graphic_2heading_pane_ParamLimits

0xa856,	// (0x00016603) list_single_graphic_2heading_pane

0x7f6d,	// (0x00013d1a) aid_size_cell_apps_grid_lsc_pane

0x7f7f,	// (0x00013d2c) aid_size_cell_apps_grid_prt_pane

0x8c32,	// (0x000149df) bg_wml_button_pane_cp1_ParamLimits

0x8c32,	// (0x000149df) bg_wml_button_pane_cp1

0x94db,	// (0x00015288) form_midp_field_text_pane_t1_ParamLimits

0x929c,	// (0x00015049) input_focus_pane_cp050_ParamLimits

0x9512,	// (0x000152bf) list_midp_form_text_pane_ParamLimits

0x94b8,	// (0x00015265) input_focus_pane_cp051_ParamLimits

0x94cc,	// (0x00015279) list_midp_choice_pane_ParamLimits

0x9355,	// (0x00015102) list_single_2graphic_pane_cp3_ParamLimits

0x9355,	// (0x00015102) list_single_2graphic_pane_cp3

0x9376,	// (0x00015123) list_single_midp_graphic_pane_ParamLimits

0x9376,	// (0x00015123) list_single_midp_graphic_pane

0x54e4,	// (0x00011291) list_single_graphic_2heading_pane_g1_ParamLimits

0x54e4,	// (0x00011291) list_single_graphic_2heading_pane_g1

0x54f0,	// (0x0001129d) list_single_graphic_2heading_pane_g4_ParamLimits

0x54f0,	// (0x0001129d) list_single_graphic_2heading_pane_g4

0x54fc,	// (0x000112a9) list_single_graphic_2heading_pane_g5_ParamLimits

0x54fc,	// (0x000112a9) list_single_graphic_2heading_pane_g5

0x0002,

0xf784,	// (0x0001b531) list_single_graphic_2heading_pane_g_ParamLimits

0xf784,	// (0x0001b531) list_single_graphic_2heading_pane_g

0x5508,	// (0x000112b5) list_single_graphic_2heading_pane_t1_ParamLimits

0x5508,	// (0x000112b5) list_single_graphic_2heading_pane_t1

0x551c,	// (0x000112c9) list_single_graphic_2heading_pane_t2_ParamLimits

0x551c,	// (0x000112c9) list_single_graphic_2heading_pane_t2

0x5538,	// (0x000112e5) list_single_graphic_2heading_pane_t3_ParamLimits

0x5538,	// (0x000112e5) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x0001b538) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x0001b538) list_single_graphic_2heading_pane_t

0x90a2,	// (0x00014e4f) bg_popup_sub_pane_cp2

0x90cc,	// (0x00014e79) grid_toobar_pane

0x5550,	// (0x000112fd) cell_toolbar_pane_ParamLimits

0x5550,	// (0x000112fd) cell_toolbar_pane

0x911e,	// (0x00014ecb) cell_toolbar_pane_g1_ParamLimits

0x911e,	// (0x00014ecb) cell_toolbar_pane_g1

0x9132,	// (0x00014edf) cell_toolbar_pane_g2_ParamLimits

0x9132,	// (0x00014edf) cell_toolbar_pane_g2

0x0001,

0xf799,	// (0x0001b546) cell_toolbar_pane_g_ParamLimits

0xf799,	// (0x0001b546) cell_toolbar_pane_g

0x9154,	// (0x00014f01) grid_highlight_pane_cp2_ParamLimits

0x9154,	// (0x00014f01) grid_highlight_pane_cp2

0x916e,	// (0x00014f1b) toolbar_button_pane

0x917a,	// (0x00014f27) toolbar_button_pane_g1

0x9182,	// (0x00014f2f) toolbar_button_pane_g2

0x918a,	// (0x00014f37) toolbar_button_pane_g3

0x9192,	// (0x00014f3f) toolbar_button_pane_g4

0x919a,	// (0x00014f47) toolbar_button_pane_g5

0x91a2,	// (0x00014f4f) toolbar_button_pane_g6

0x91aa,	// (0x00014f57) toolbar_button_pane_g7

0x91b2,	// (0x00014f5f) toolbar_button_pane_g8

0x91ba,	// (0x00014f67) toolbar_button_pane_g9

0x0009,

0xf79e,	// (0x0001b54b) toolbar_button_pane_g

0x5588,	// (0x00011335) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5588,	// (0x00011335) list_single_2graphic_pane_g1_cp3

0x5594,	// (0x00011341) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5594,	// (0x00011341) list_single_2graphic_pane_g2_cp3

0x55a5,	// (0x00011352) list_single_2graphic_pane_g3_cp3

0x55ad,	// (0x0001135a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x55ad,	// (0x0001135a) list_single_2graphic_pane_g4_cp3

0x55b9,	// (0x00011366) list_single_2graphic_pane_t1_cp3_ParamLimits

0x55b9,	// (0x00011366) list_single_2graphic_pane_t1_cp3

0x55d5,	// (0x00011382) list_single_midp_graphic_pane_g2_ParamLimits

0x55d5,	// (0x00011382) list_single_midp_graphic_pane_g2

0x4f0b,	// (0x00010cb8) aid_zoom_text_primary

0x4f13,	// (0x00010cc0) aid_zoom_text_secondary

0x8b74,	// (0x00014921) status_small_pane_g7_ParamLimits

0x8b74,	// (0x00014921) status_small_pane_g7

0x8b97,	// (0x00014944) status_small_pane_t1_ParamLimits

0x6b73,	// (0x00012920) title_pane_g2

0x0003,

0xf527,	// (0x0001b2d4) title_pane_g

0x70fe,	// (0x00012eab) aid_size_cell_colour_1_pane_ParamLimits

0x70fe,	// (0x00012eab) aid_size_cell_colour_1_pane

0x7112,	// (0x00012ebf) aid_size_cell_colour_2_pane_ParamLimits

0x7112,	// (0x00012ebf) aid_size_cell_colour_2_pane

0x7126,	// (0x00012ed3) aid_size_cell_colour_3_pane_ParamLimits

0x7126,	// (0x00012ed3) aid_size_cell_colour_3_pane

0x713a,	// (0x00012ee7) aid_size_cell_colour_4_pane_ParamLimits

0x713a,	// (0x00012ee7) aid_size_cell_colour_4_pane

0x4955,	// (0x00010702) title_pane_stacon_g1_ParamLimits

0x4955,	// (0x00010702) title_pane_stacon_g1

0x991a,	// (0x000156c7) popup_note_wait_window_g3_ParamLimits

0x991a,	// (0x000156c7) popup_note_wait_window_g3

0x9990,	// (0x0001573d) popup_note_wait_window_t5_ParamLimits

0x9990,	// (0x0001573d) popup_note_wait_window_t5

0x3a68,	// (0x0000f815) main_feb_china_hwr_fs_writing_pane

0x4fb1,	// (0x00010d5e) popup_feb_china_hwr_fs_window_ParamLimits

0x4fb1,	// (0x00010d5e) popup_feb_china_hwr_fs_window

0x55f7,	// (0x000113a4) aid_size_cell_hwr_fs_ParamLimits

0x55f7,	// (0x000113a4) aid_size_cell_hwr_fs

0x929c,	// (0x00015049) bg_popup_sub_pane_cp3_ParamLimits

0x929c,	// (0x00015049) bg_popup_sub_pane_cp3

0x560c,	// (0x000113b9) grid_hwr_fs_pane_ParamLimits

0x560c,	// (0x000113b9) grid_hwr_fs_pane

0x5624,	// (0x000113d1) linegrid_hwr_fs_pane_ParamLimits

0x5624,	// (0x000113d1) linegrid_hwr_fs_pane

0x5634,	// (0x000113e1) cell_hwr_fs_pane_ParamLimits

0x5634,	// (0x000113e1) cell_hwr_fs_pane

0x92a8,	// (0x00015055) linegrid_hwr_fs_pane_g1_ParamLimits

0x92a8,	// (0x00015055) linegrid_hwr_fs_pane_g1

0x92b4,	// (0x00015061) linegrid_hwr_fs_pane_g2_ParamLimits

0x92b4,	// (0x00015061) linegrid_hwr_fs_pane_g2

0x92c6,	// (0x00015073) linegrid_hwr_fs_pane_g3_ParamLimits

0x92c6,	// (0x00015073) linegrid_hwr_fs_pane_g3

0x5656,	// (0x00011403) linegrid_hwr_fs_pane_g4_ParamLimits

0x5656,	// (0x00011403) linegrid_hwr_fs_pane_g4

0x5670,	// (0x0001141d) linegrid_hwr_fs_pane_g5_ParamLimits

0x5670,	// (0x0001141d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c4,	// (0x0001b571) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c4,	// (0x0001b571) linegrid_hwr_fs_pane_g

0x92d2,	// (0x0001507f) cell_hwr_fs_pane_g1_ParamLimits

0x92d2,	// (0x0001507f) cell_hwr_fs_pane_g1

0x8fd9,	// (0x00014d86) cell_hwr_fs_pane_g2_ParamLimits

0x8fd9,	// (0x00014d86) cell_hwr_fs_pane_g2

0x92e8,	// (0x00015095) cell_hwr_fs_pane_g3_ParamLimits

0x92e8,	// (0x00015095) cell_hwr_fs_pane_g3

0x92f5,	// (0x000150a2) cell_hwr_fs_pane_g4_ParamLimits

0x92f5,	// (0x000150a2) cell_hwr_fs_pane_g4

0x0003,

0xf7cf,	// (0x0001b57c) cell_hwr_fs_pane_g_ParamLimits

0xf7cf,	// (0x0001b57c) cell_hwr_fs_pane_g

0x5686,	// (0x00011433) cell_hwr_fs_pane_t1

0x3a68,	// (0x0000f815) grid_highlight_pane_cp6

0x3a68,	// (0x0000f815) main_idle_act2_pane

0x7d24,	// (0x00013ad1) aid_inside_area_popup_secondary

0x9fc7,	// (0x00015d74) aid_inside_area_window_primary_ParamLimits

0x9fc7,	// (0x00015d74) aid_inside_area_window_primary

0xac3b,	// (0x000169e8) ai2_news_ticker_pane

0xac43,	// (0x000169f0) aid_size_cell_ai1_link_ParamLimits

0xac43,	// (0x000169f0) aid_size_cell_ai1_link

0xac5d,	// (0x00016a0a) popup_ai2_data_window_ParamLimits

0xac5d,	// (0x00016a0a) popup_ai2_data_window

0xac73,	// (0x00016a20) popup_ai2_link_window_ParamLimits

0xac73,	// (0x00016a20) popup_ai2_link_window

0x929c,	// (0x00015049) bg_popup_sub_pane_cp4_ParamLimits

0x929c,	// (0x00015049) bg_popup_sub_pane_cp4

0xac87,	// (0x00016a34) grid_ai2_link_pane_ParamLimits

0xac87,	// (0x00016a34) grid_ai2_link_pane

0xac9e,	// (0x00016a4b) popup_ai2_link_window_g1_ParamLimits

0xac9e,	// (0x00016a4b) popup_ai2_link_window_g1

0xacaa,	// (0x00016a57) popup_ai2_link_window_g2_ParamLimits

0xacaa,	// (0x00016a57) popup_ai2_link_window_g2

0x0001,

0xf9a2,	// (0x0001b74f) popup_ai2_link_window_g_ParamLimits

0xf9a2,	// (0x0001b74f) popup_ai2_link_window_g

0xacb9,	// (0x00016a66) ai2_mp_button_pane

0xacc1,	// (0x00016a6e) ai2_mp_volume_pane

0x94b8,	// (0x00015265) bg_popup_sub_pane_cp5_ParamLimits

0x94b8,	// (0x00015265) bg_popup_sub_pane_cp5

0xacc9,	// (0x00016a76) heading_ai2_gene_pane_ParamLimits

0xacc9,	// (0x00016a76) heading_ai2_gene_pane

0xacd5,	// (0x00016a82) list_ai2_gene_pane_ParamLimits

0xacd5,	// (0x00016a82) list_ai2_gene_pane

0xad1d,	// (0x00016aca) cell_ai2_link_pane_ParamLimits

0xad1d,	// (0x00016aca) cell_ai2_link_pane

0xad33,	// (0x00016ae0) cell_ai2_link_pane_g1

0x3a68,	// (0x0000f815) grid_highlight_pane_cp7

0x5978,	// (0x00011725) ai2_mp_volume_pane_g1

0xae0f,	// (0x00016bbc) ai2_mp_volume_pane_g2

0xad78,	// (0x00016b25) list_ai2_gene_pane_t1

0xae17,	// (0x00016bc4) ai2_mp_volume_pane_g3

0x0002,

0xf9bb,	// (0x0001b768) ai2_mp_volume_pane_g

0x5980,	// (0x0001172d) volume_small_pane_cp3

0xae1f,	// (0x00016bcc) aid_size_cell_ai2_button

0xae27,	// (0x00016bd4) grid_ai2_button_pane

0xae30,	// (0x00016bdd) cell_ai2_button_pane_ParamLimits

0xae30,	// (0x00016bdd) cell_ai2_button_pane

0x38a0,	// (0x0000f64d) cell_ai2_button_pane_g1

0x3a68,	// (0x0000f815) grid_highlight_pane_cp8

0xadcf,	// (0x00016b7c) ai2_gene_pane_t1_ParamLimits

0xadcf,	// (0x00016b7c) ai2_gene_pane_t1

0x4ef9,	// (0x00010ca6) aid_height_parent_landscape

0xa63f,	// (0x000163ec) aid_height_set_list

0xa650,	// (0x000163fd) aid_size_parent

0xaa5e,	// (0x0001680b) aid_size_cell_graphic_pane_ParamLimits

0xace5,	// (0x00016a92) popup_ai2_data_window_g1_ParamLimits

0xace5,	// (0x00016a92) popup_ai2_data_window_g1

0xacf1,	// (0x00016a9e) ai2_news_ticker_pane_g1

0xacf9,	// (0x00016aa6) ai2_news_ticker_pane_g2

0x0001,

0xf9a7,	// (0x0001b754) ai2_news_ticker_pane_g

0xad01,	// (0x00016aae) ai2_news_ticker_pane_t1

0xad0f,	// (0x00016abc) ai2_news_ticker_pane_t2

0x0001,

0xf9ac,	// (0x0001b759) ai2_news_ticker_pane_t

0xad3c,	// (0x00016ae9) heading_ai2_gene_pane_g1

0xad44,	// (0x00016af1) heading_ai2_gene_pane_t1_ParamLimits

0xad44,	// (0x00016af1) heading_ai2_gene_pane_t1

0xad59,	// (0x00016b06) list_highlight_pane_cp6

0xad61,	// (0x00016b0e) ai2_gene_pane_ParamLimits

0xad61,	// (0x00016b0e) ai2_gene_pane

0xad86,	// (0x00016b33) list_ai2_gene_pane_t2

0x0001,

0xf9b1,	// (0x0001b75e) list_ai2_gene_pane_t

0xad94,	// (0x00016b41) list_highlight_pane_cp8_ParamLimits

0xad94,	// (0x00016b41) list_highlight_pane_cp8

0xada5,	// (0x00016b52) ai2_gene_pane_g1_ParamLimits

0xada5,	// (0x00016b52) ai2_gene_pane_g1

0xadb7,	// (0x00016b64) ai2_gene_pane_g2_ParamLimits

0xadb7,	// (0x00016b64) ai2_gene_pane_g2

0x0001,

0xf9b6,	// (0x0001b763) ai2_gene_pane_g_ParamLimits

0xf9b6,	// (0x0001b763) ai2_gene_pane_g

0x7479,	// (0x00013226) scroll_pane_cp12

0x4eb6,	// (0x00010c63) control_pane_t3_ParamLimits

0x4eb6,	// (0x00010c63) control_pane_t3

0x8b88,	// (0x00014935) status_small_pane_g8_ParamLimits

0x8b88,	// (0x00014935) status_small_pane_g8

0x5097,	// (0x00010e44) popup_find_window_ParamLimits

0x52ae,	// (0x0001105b) popup_note_image_window_ParamLimits

0x7510,	// (0x000132bd) list_double2_graphic_pane_vc_g1_ParamLimits

0x7510,	// (0x000132bd) list_double2_graphic_pane_vc_g1

0x7496,	// (0x00013243) list_double2_graphic_pane_vc_g2_ParamLimits

0x7496,	// (0x00013243) list_double2_graphic_pane_vc_g2

0x74a2,	// (0x0001324f) list_double2_graphic_pane_vc_g3_ParamLimits

0x74a2,	// (0x0001324f) list_double2_graphic_pane_vc_g3

0x0002,

0xf792,	// (0x0001b53f) list_double2_graphic_pane_vc_g_ParamLimits

0xf792,	// (0x0001b53f) list_double2_graphic_pane_vc_g

0x9108,	// (0x00014eb5) list_double2_graphic_pane_vc_t1_ParamLimits

0x9108,	// (0x00014eb5) list_double2_graphic_pane_vc_t1

0x7496,	// (0x00013243) list_single_heading_pane_vc_g1_ParamLimits

0x7496,	// (0x00013243) list_single_heading_pane_vc_g1

0x74a2,	// (0x0001324f) list_single_heading_pane_vc_g2_ParamLimits

0x74a2,	// (0x0001324f) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0001b34e) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0001b34e) list_single_heading_pane_vc_g

0x91c2,	// (0x00014f6f) list_single_heading_pane_vc_t1_ParamLimits

0x91c2,	// (0x00014f6f) list_single_heading_pane_vc_t1

0x91d8,	// (0x00014f85) list_single_heading_pane_vc_t2_ParamLimits

0x91d8,	// (0x00014f85) list_single_heading_pane_vc_t2

0x0001,

0xf7b3,	// (0x0001b560) list_single_heading_pane_vc_t_ParamLimits

0xf7b3,	// (0x0001b560) list_single_heading_pane_vc_t

0x91ea,	// (0x00014f97) list_setting_number_pane_vc_g1_ParamLimits

0x91ea,	// (0x00014f97) list_setting_number_pane_vc_g1

0x91f6,	// (0x00014fa3) list_setting_number_pane_vc_g2_ParamLimits

0x91f6,	// (0x00014fa3) list_setting_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x0001b565) list_setting_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x0001b565) list_setting_number_pane_vc_g

0x9202,	// (0x00014faf) list_setting_number_pane_vc_t1_ParamLimits

0x9202,	// (0x00014faf) list_setting_number_pane_vc_t1

0x9216,	// (0x00014fc3) list_setting_number_pane_vc_t2_ParamLimits

0x9216,	// (0x00014fc3) list_setting_number_pane_vc_t2

0x9232,	// (0x00014fdf) list_setting_number_pane_vc_t3_ParamLimits

0x9232,	// (0x00014fdf) list_setting_number_pane_vc_t3

0x0002,

0xf7bd,	// (0x0001b56a) list_setting_number_pane_vc_t_ParamLimits

0xf7bd,	// (0x0001b56a) list_setting_number_pane_vc_t

0x9260,	// (0x0001500d) set_value_pane_vc_ParamLimits

0x9260,	// (0x0001500d) set_value_pane_vc

0xa856,	// (0x00016603) list_double2_graphic_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_double2_graphic_pane_vc

0xa856,	// (0x00016603) list_double2_large_graphic_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_double2_large_graphic_pane_vc

0xa856,	// (0x00016603) list_double2_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_double2_pane_vc

0xa856,	// (0x00016603) list_double_graphic_heading_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_double_graphic_heading_pane_vc

0xa856,	// (0x00016603) list_double_graphic_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_double_graphic_pane_vc

0xa856,	// (0x00016603) list_double_heading_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_double_heading_pane_vc

0xa868,	// (0x00016615) list_double_large_graphic_pane_vc_ParamLimits

0xa868,	// (0x00016615) list_double_large_graphic_pane_vc

0xa856,	// (0x00016603) list_double_number_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_double_number_pane_vc

0xa856,	// (0x00016603) list_double_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_double_pane_vc

0xa856,	// (0x00016603) list_double_time_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_double_time_pane_vc

0xa856,	// (0x00016603) list_setting_number_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_setting_number_pane_vc

0xa856,	// (0x00016603) list_setting_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_setting_pane_vc

0xa856,	// (0x00016603) list_single_graphic_heading_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_single_graphic_heading_pane_vc

0xa856,	// (0x00016603) list_single_heading_pane_vc_ParamLimits

0xa856,	// (0x00016603) list_single_heading_pane_vc

0xa886,	// (0x00016633) list_single_number_heading_pane_vc_ParamLimits

0xa886,	// (0x00016633) list_single_number_heading_pane_vc

0xae64,	// (0x00016c11) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xae64,	// (0x00016c11) list_double_graphic_heading_pane_vc_g1

0x7496,	// (0x00013243) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7496,	// (0x00013243) list_double_graphic_heading_pane_vc_g2

0x74a2,	// (0x0001324f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x74a2,	// (0x0001324f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c2,	// (0x0001b76f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c2,	// (0x0001b76f) list_double_graphic_heading_pane_vc_g

0xae70,	// (0x00016c1d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xae70,	// (0x00016c1d) list_double_graphic_heading_pane_vc_t1

0xae8c,	// (0x00016c39) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae8c,	// (0x00016c39) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c9,	// (0x0001b776) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c9,	// (0x0001b776) list_double_graphic_heading_pane_vc_t

0x91ea,	// (0x00014f97) list_setting_pane_vc_g1_ParamLimits

0x91ea,	// (0x00014f97) list_setting_pane_vc_g1

0x91f6,	// (0x00014fa3) list_setting_pane_vc_g2_ParamLimits

0x91f6,	// (0x00014fa3) list_setting_pane_vc_g2

0x0001,

0xf7b8,	// (0x0001b565) list_setting_pane_vc_g_ParamLimits

0xf7b8,	// (0x0001b565) list_setting_pane_vc_g

0xb0ba,	// (0x00016e67) list_setting_pane_vc_t1_ParamLimits

0xb0ba,	// (0x00016e67) list_setting_pane_vc_t1

0xb0d6,	// (0x00016e83) list_setting_pane_vc_t2_ParamLimits

0xb0d6,	// (0x00016e83) list_setting_pane_vc_t2

0x0001,

0xf9f7,	// (0x0001b7a4) list_setting_pane_vc_t_ParamLimits

0xf9f7,	// (0x0001b7a4) list_setting_pane_vc_t

0x9260,	// (0x0001500d) set_value_pane_cp_vc_ParamLimits

0x9260,	// (0x0001500d) set_value_pane_cp_vc

0x7496,	// (0x00013243) list_single_number_heading_pane_vc_g1_ParamLimits

0x7496,	// (0x00013243) list_single_number_heading_pane_vc_g1

0x74a2,	// (0x0001324f) list_single_number_heading_pane_vc_g2_ParamLimits

0x74a2,	// (0x0001324f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0001b34e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0001b34e) list_single_number_heading_pane_vc_g

0x74c4,	// (0x00013271) list_single_number_heading_pane_vc_t1_ParamLimits

0x74c4,	// (0x00013271) list_single_number_heading_pane_vc_t1

0xb0f2,	// (0x00016e9f) list_single_number_heading_pane_vc_t2_ParamLimits

0xb0f2,	// (0x00016e9f) list_single_number_heading_pane_vc_t2

0x74fe,	// (0x000132ab) list_single_number_heading_pane_vc_t3_ParamLimits

0x74fe,	// (0x000132ab) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fc,	// (0x0001b7a9) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fc,	// (0x0001b7a9) list_single_number_heading_pane_vc_t

0x7510,	// (0x000132bd) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x7510,	// (0x000132bd) list_single_graphic_heading_pane_vc_g1

0x7496,	// (0x00013243) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7496,	// (0x00013243) list_single_graphic_heading_pane_vc_g4

0x74a2,	// (0x0001324f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x74a2,	// (0x0001324f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf792,	// (0x0001b53f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf792,	// (0x0001b53f) list_single_graphic_heading_pane_vc_g

0x74c4,	// (0x00013271) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x74c4,	// (0x00013271) list_single_graphic_heading_pane_vc_t1

0xb108,	// (0x00016eb5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb108,	// (0x00016eb5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa03,	// (0x0001b7b0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x0001b7b0) list_single_graphic_heading_pane_vc_t

0x7496,	// (0x00013243) list_double2_pane_vc_g1_ParamLimits

0x7496,	// (0x00013243) list_double2_pane_vc_g1

0x74a2,	// (0x0001324f) list_double2_pane_vc_g2_ParamLimits

0x74a2,	// (0x0001324f) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x0001b34e) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x0001b34e) list_double2_pane_vc_g

0xa7f4,	// (0x000165a1) list_double2_pane_vc_t1_ParamLimits

0xa7f4,	// (0x000165a1) list_double2_pane_vc_t1

0xb11a,	// (0x00016ec7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb11a,	// (0x00016ec7) list_double2_large_graphic_pane_vc_g1

0x7496,	// (0x00013243) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7496,	// (0x00013243) list_double2_large_graphic_pane_vc_g2

0x74a2,	// (0x0001324f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x74a2,	// (0x0001324f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa08,	// (0x0001b7b5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa08,	// (0x0001b7b5) list_double2_large_graphic_pane_vc_g

0xb126,	// (0x00016ed3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb126,	// (0x00016ed3) list_double2_large_graphic_pane_vc_t1

0xb13c,	// (0x00016ee9) list_double_time_pane_vc_g1_ParamLimits

0xb13c,	// (0x00016ee9) list_double_time_pane_vc_g1

0xb148,	// (0x00016ef5) list_double_time_pane_vc_g2_ParamLimits

0xb148,	// (0x00016ef5) list_double_time_pane_vc_g2

0x0001,

0xfa0f,	// (0x0001b7bc) list_double_time_pane_vc_g_ParamLimits

0xfa0f,	// (0x0001b7bc) list_double_time_pane_vc_g

0xb154,	// (0x00016f01) list_double_time_pane_vc_t1_ParamLimits

0xb154,	// (0x00016f01) list_double_time_pane_vc_t1

0xb178,	// (0x00016f25) list_double_time_pane_vc_t2_ParamLimits

0xb178,	// (0x00016f25) list_double_time_pane_vc_t2

0xb1a2,	// (0x00016f4f) list_double_time_pane_vc_t3_ParamLimits

0xb1a2,	// (0x00016f4f) list_double_time_pane_vc_t3

0xb1b4,	// (0x00016f61) list_double_time_pane_vc_t4_ParamLimits

0xb1b4,	// (0x00016f61) list_double_time_pane_vc_t4

0x0003,

0xfa14,	// (0x0001b7c1) list_double_time_pane_vc_t_ParamLimits

0xfa14,	// (0x0001b7c1) list_double_time_pane_vc_t

0x7496,	// (0x00013243) list_double_pane_vc_g1_ParamLimits

0x7496,	// (0x00013243) list_double_pane_vc_g1

0x74a2,	// (0x0001324f) list_double_pane_vc_g2_ParamLimits

0x74a2,	// (0x0001324f) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x0001b34e) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x0001b34e) list_double_pane_vc_g

0xb1c8,	// (0x00016f75) list_double_pane_vc_t1_ParamLimits

0xb1c8,	// (0x00016f75) list_double_pane_vc_t1

0xb1dc,	// (0x00016f89) list_double_pane_vc_t2_ParamLimits

0xb1dc,	// (0x00016f89) list_double_pane_vc_t2

0x0001,

0xfa1d,	// (0x0001b7ca) list_double_pane_vc_t_ParamLimits

0xfa1d,	// (0x0001b7ca) list_double_pane_vc_t

0x7496,	// (0x00013243) list_double_number_pane_vc_g1_ParamLimits

0x7496,	// (0x00013243) list_double_number_pane_vc_g1

0x74a2,	// (0x0001324f) list_double_number_pane_vc_g2_ParamLimits

0x74a2,	// (0x0001324f) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x0001b34e) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x0001b34e) list_double_number_pane_vc_g

0xb1f4,	// (0x00016fa1) list_double_number_pane_vc_t1_ParamLimits

0xb1f4,	// (0x00016fa1) list_double_number_pane_vc_t1

0xb206,	// (0x00016fb3) list_double_number_pane_vc_t2_ParamLimits

0xb206,	// (0x00016fb3) list_double_number_pane_vc_t2

0xb21a,	// (0x00016fc7) list_double_number_pane_vc_t3_ParamLimits

0xb21a,	// (0x00016fc7) list_double_number_pane_vc_t3

0x0002,

0xfa22,	// (0x0001b7cf) list_double_number_pane_vc_t_ParamLimits

0xfa22,	// (0x0001b7cf) list_double_number_pane_vc_t

0xb234,	// (0x00016fe1) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb234,	// (0x00016fe1) list_double_large_graphic_pane_vc_g1

0xb250,	// (0x00016ffd) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb250,	// (0x00016ffd) list_double_large_graphic_pane_vc_g2

0xb264,	// (0x00017011) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb264,	// (0x00017011) list_double_large_graphic_pane_vc_g3

0xb273,	// (0x00017020) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb273,	// (0x00017020) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa29,	// (0x0001b7d6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa29,	// (0x0001b7d6) list_double_large_graphic_pane_vc_g

0xb282,	// (0x0001702f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb282,	// (0x0001702f) list_double_large_graphic_pane_vc_t1

0xb29e,	// (0x0001704b) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb29e,	// (0x0001704b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa32,	// (0x0001b7df) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa32,	// (0x0001b7df) list_double_large_graphic_pane_vc_t

0x7496,	// (0x00013243) list_double_heading_pane_vc_g1_ParamLimits

0x7496,	// (0x00013243) list_double_heading_pane_vc_g1

0x74a2,	// (0x0001324f) list_double_heading_pane_vc_g2_ParamLimits

0x74a2,	// (0x0001324f) list_double_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0001b34e) list_double_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0001b34e) list_double_heading_pane_vc_g

0xb2c0,	// (0x0001706d) list_double_heading_pane_vc_t1_ParamLimits

0xb2c0,	// (0x0001706d) list_double_heading_pane_vc_t1

0xb2d4,	// (0x00017081) list_double_heading_pane_vc_t2_ParamLimits

0xb2d4,	// (0x00017081) list_double_heading_pane_vc_t2

0x0001,

0xfa37,	// (0x0001b7e4) list_double_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x0001b7e4) list_double_heading_pane_vc_t

0xb2ec,	// (0x00017099) list_double_graphic_pane_vc_g1_ParamLimits

0xb2ec,	// (0x00017099) list_double_graphic_pane_vc_g1

0xb2f8,	// (0x000170a5) list_double_graphic_pane_vc_g2_ParamLimits

0xb2f8,	// (0x000170a5) list_double_graphic_pane_vc_g2

0x7496,	// (0x00013243) list_double_graphic_pane_vc_g3_ParamLimits

0x7496,	// (0x00013243) list_double_graphic_pane_vc_g3

0x0003,

0xfa3c,	// (0x0001b7e9) list_double_graphic_pane_vc_g_ParamLimits

0xfa3c,	// (0x0001b7e9) list_double_graphic_pane_vc_g

0xb315,	// (0x000170c2) list_double_graphic_pane_vc_t1_ParamLimits

0xb315,	// (0x000170c2) list_double_graphic_pane_vc_t1

0xb33f,	// (0x000170ec) list_double_graphic_pane_vc_t2_ParamLimits

0xb33f,	// (0x000170ec) list_double_graphic_pane_vc_t2

0x0001,

0xfa45,	// (0x0001b7f2) list_double_graphic_pane_vc_t_ParamLimits

0xfa45,	// (0x0001b7f2) list_double_graphic_pane_vc_t

0x44a2,	// (0x0001024f) aid_size_cell_fastswap

0x44aa,	// (0x00010257) aid_size_cell_touch_ParamLimits

0x44aa,	// (0x00010257) aid_size_cell_touch

0x4715,	// (0x000104c2) popup_fast_swap_wide_window_ParamLimits

0x4715,	// (0x000104c2) popup_fast_swap_wide_window

0x4829,	// (0x000105d6) touch_pane_ParamLimits

0x4829,	// (0x000105d6) touch_pane

0x7954,	// (0x00013701) button_value_adjust_pane_cp2

0x795c,	// (0x00013709) button_value_adjust_pane_cp4

0x797e,	// (0x0001372b) form_field_data_pane_cp2

0x799f,	// (0x0001374c) form_field_data_wide_pane_cp2

0x803c,	// (0x00013de9) bg_scroll_pane_ParamLimits

0x4ab7,	// (0x00010864) scroll_handle_pane_ParamLimits

0x4acb,	// (0x00010878) scroll_sc2_down_pane_ParamLimits

0x4acb,	// (0x00010878) scroll_sc2_down_pane

0x806d,	// (0x00013e1a) scroll_sc2_up_pane_ParamLimits

0x806d,	// (0x00013e1a) scroll_sc2_up_pane

0xb812,	// (0x000175bf) grid_wheel_folder_pane_g1_ParamLimits

0xb812,	// (0x000175bf) grid_wheel_folder_pane_g1

0x4c90,	// (0x00010a3d) clock_nsta_pane_cp2_ParamLimits

0x4c90,	// (0x00010a3d) clock_nsta_pane_cp2

0x890e,	// (0x000146bb) listscroll_midp_pane_ParamLimits

0x891a,	// (0x000146c7) midp_canvas_pane

0x8c02,	// (0x000149af) nsta_clock_indic_pane

0x8c3e,	// (0x000149eb) listscroll_form_pane_vc

0x8c46,	// (0x000149f3) listscroll_set_pane_vc_ParamLimits

0x8c46,	// (0x000149f3) listscroll_set_pane_vc

0x8d47,	// (0x00014af4) clock_nsta_pane

0x8dc2,	// (0x00014b6f) indicator_nsta_pane

0x90a2,	// (0x00014e4f) bg_popup_sub_pane_cp2_ParamLimits

0x90b6,	// (0x00014e63) find_pane_cp2_ParamLimits

0x90b6,	// (0x00014e63) find_pane_cp2

0x90cc,	// (0x00014e79) grid_toobar_pane_ParamLimits

0x9270,	// (0x0001501d) list_form_gen_pane_vc_ParamLimits

0x9270,	// (0x0001501d) list_form_gen_pane_vc

0x9286,	// (0x00015033) scroll_pane_cp8_vc_ParamLimits

0x9286,	// (0x00015033) scroll_pane_cp8_vc

0x9302,	// (0x000150af) data_form_wide_pane_vc_ParamLimits

0x9302,	// (0x000150af) data_form_wide_pane_vc

0x930e,	// (0x000150bb) form_field_data_wide_pane_vc_g1

0x9316,	// (0x000150c3) form_field_data_wide_pane_vc_t1_ParamLimits

0x9316,	// (0x000150c3) form_field_data_wide_pane_vc_t1

0x7a3a,	// (0x000137e7) input_focus_pane_cp6_vc_ParamLimits

0x7a3a,	// (0x000137e7) input_focus_pane_cp6_vc

0x9679,	// (0x00015426) list_midp_pane_ParamLimits

0x9685,	// (0x00015432) scroll_pane_cp16_ParamLimits

0x9685,	// (0x00015432) scroll_pane_cp16

0x96ef,	// (0x0001549c) button_value_adjust_pane_ParamLimits

0x96ef,	// (0x0001549c) button_value_adjust_pane

0xa662,	// (0x0001640f) button_value_adjust_pane_cp6_ParamLimits

0xa662,	// (0x0001640f) button_value_adjust_pane_cp6

0xa78c,	// (0x00016539) settings_code_pane_cp_ParamLimits

0xa78c,	// (0x00016539) settings_code_pane_cp

0x38a0,	// (0x0000f64d) cell_touch_pane_g1

0x38a0,	// (0x0000f64d) cell_touch_pane_g2

0x0001,

0xf6d7,	// (0x0001b484) cell_touch_pane_g

0xae42,	// (0x00016bef) cell_touch_pane_cp_ParamLimits

0xae42,	// (0x00016bef) cell_touch_pane_cp

0xae52,	// (0x00016bff) cell_touch_pane_ParamLimits

0xae52,	// (0x00016bff) cell_touch_pane

0x38a0,	// (0x0000f64d) scroll_sc2_down_pane_g1

0x38a0,	// (0x0000f64d) scroll_sc2_up_pane_g1

0x3a68,	// (0x0000f815) bg_set_opt_pane_cp4_vc

0xaeaa,	// (0x00016c57) list_set_graphic_pane_vc_g1_ParamLimits

0xaeaa,	// (0x00016c57) list_set_graphic_pane_vc_g1

0xaeb6,	// (0x00016c63) list_set_graphic_pane_vc_g2_ParamLimits

0xaeb6,	// (0x00016c63) list_set_graphic_pane_vc_g2

0x0001,

0xf9ce,	// (0x0001b77b) list_set_graphic_pane_vc_g_ParamLimits

0xf9ce,	// (0x0001b77b) list_set_graphic_pane_vc_g

0xaec2,	// (0x00016c6f) text_primary_small_cp13_vc_ParamLimits

0xaec2,	// (0x00016c6f) text_primary_small_cp13_vc

0xaeda,	// (0x00016c87) list_set_graphic_pane_vc_ParamLimits

0xaeda,	// (0x00016c87) list_set_graphic_pane_vc

0x3a68,	// (0x0000f815) input_focus_pane_cp2_vc

0x38a0,	// (0x0000f64d) setting_code_pane_vc_g1

0x6c87,	// (0x00012a34) setting_code_pane_vc_t1

0xaeed,	// (0x00016c9a) set_text_pane_vc_t1_ParamLimits

0xaeed,	// (0x00016c9a) set_text_pane_vc_t1

0x3a68,	// (0x0000f815) input_focus_pane_cp1_vc

0xaf09,	// (0x00016cb6) list_set_text_pane_vc

0x38a0,	// (0x0000f64d) setting_text_pane_vc_g1

0x3a68,	// (0x0000f815) bg_set_opt_pane_cp2_vc

0x6c7e,	// (0x00012a2b) setting_slider_graphic_pane_vc_g1

0xaf13,	// (0x00016cc0) setting_slider_graphic_pane_vc_t1

0xaf23,	// (0x00016cd0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d3,	// (0x0001b780) setting_slider_graphic_pane_vc_t

0xaf33,	// (0x00016ce0) slider_set_pane_cp_vc

0xaf3b,	// (0x00016ce8) slider_set_pane_vc_g1

0xaf44,	// (0x00016cf1) slider_set_pane_vc_g2

0x0006,

0xf9d8,	// (0x0001b785) slider_set_pane_vc_g

0x7b69,	// (0x00013916) set_opt_bg_pane_g1_copy1

0x7b71,	// (0x0001391e) set_opt_bg_pane_g2_copy1

0xaf70,	// (0x00016d1d) set_opt_bg_pane_g3_copy1

0x7b81,	// (0x0001392e) set_opt_bg_pane_g4_copy1

0x7b89,	// (0x00013936) set_opt_bg_pane_g5_copy1

0x7b91,	// (0x0001393e) set_opt_bg_pane_g6_copy1

0xaf7a,	// (0x00016d27) set_opt_bg_pane_g7_copy1

0xaf84,	// (0x00016d31) set_opt_bg_pane_g8_copy1

0xaf8e,	// (0x00016d3b) set_opt_bg_pane_g9_copy1

0x3a68,	// (0x0000f815) bg_set_opt_pane_cp_vc

0xaf98,	// (0x00016d45) setting_slider_pane_vc_t1

0xafa7,	// (0x00016d54) setting_slider_pane_vc_t2

0xafb7,	// (0x00016d64) setting_slider_pane_vc_t3

0x0002,

0xf9e7,	// (0x0001b794) setting_slider_pane_vc_t

0xafc7,	// (0x00016d74) slider_set_pane_vc

0x5694,	// (0x00011441) volume_set_pane_vc_g1

0x569d,	// (0x0001144a) volume_set_pane_vc_g2

0x56a6,	// (0x00011453) volume_set_pane_vc_g3

0x56af,	// (0x0001145c) volume_set_pane_vc_g4

0x56b8,	// (0x00011465) volume_set_pane_vc_g5

0x56c1,	// (0x0001146e) volume_set_pane_vc_g6

0x56ca,	// (0x00011477) volume_set_pane_vc_g7

0x56d3,	// (0x00011480) volume_set_pane_vc_g8

0x56dc,	// (0x00011489) volume_set_pane_vc_g9

0x56e5,	// (0x00011492) volume_set_pane_vc_g10

0x0009,

0xf885,	// (0x0001b632) volume_set_pane_vc_g

0xafcf,	// (0x00016d7c) volume_set_pane_vc

0xafd7,	// (0x00016d84) button_value_adjust_pane_cp1_vc

0xafe1,	// (0x00016d8e) list_highlight_pane_cp2_vc

0xafea,	// (0x00016d97) list_set_pane_vc_ParamLimits

0xafea,	// (0x00016d97) list_set_pane_vc

0xb048,	// (0x00016df5) main_pane_set_vc_t1_ParamLimits

0xb048,	// (0x00016df5) main_pane_set_vc_t1

0xb05d,	// (0x00016e0a) main_pane_set_vc_t2_ParamLimits

0xb05d,	// (0x00016e0a) main_pane_set_vc_t2

0xb06f,	// (0x00016e1c) main_pane_set_vc_t3_ParamLimits

0xb06f,	// (0x00016e1c) main_pane_set_vc_t3

0xb083,	// (0x00016e30) main_pane_set_vc_t4_ParamLimits

0xb083,	// (0x00016e30) main_pane_set_vc_t4

0x0003,

0xf9ee,	// (0x0001b79b) main_pane_set_vc_t_ParamLimits

0xf9ee,	// (0x0001b79b) main_pane_set_vc_t

0xb097,	// (0x00016e44) setting_code_pane_vc_ParamLimits

0xb097,	// (0x00016e44) setting_code_pane_vc

0xb0a8,	// (0x00016e55) setting_slider_graphic_pane_vc

0xb0a8,	// (0x00016e55) setting_slider_pane_vc

0xb0a8,	// (0x00016e55) setting_text_pane_vc

0xb0a8,	// (0x00016e55) setting_volume_pane_vc

0xb0b2,	// (0x00016e5f) scroll_pane_cp121_vc

0x7942,	// (0x000136ef) set_content_pane_vc

0xb36e,	// (0x0001711b) button_value_adjust_pane_g1

0xb377,	// (0x00017124) button_value_adjust_pane_g2

0x0001,

0xfa4a,	// (0x0001b7f7) button_value_adjust_pane_g

0xb380,	// (0x0001712d) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb380,	// (0x0001712d) form_field_slider_wide_pane_vc_t1

0xb394,	// (0x00017141) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb394,	// (0x00017141) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4f,	// (0x0001b7fc) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001b7fc) form_field_slider_wide_pane_vc_t

0x6ed1,	// (0x00012c7e) input_focus_pane_cp10_vc_ParamLimits

0x6ed1,	// (0x00012c7e) input_focus_pane_cp10_vc

0xb3c2,	// (0x0001716f) slider_cont_pane_cp1_vc_ParamLimits

0xb3c2,	// (0x0001716f) slider_cont_pane_cp1_vc

0xb3d4,	// (0x00017181) slider_form_pane_g1_cp2

0xaf44,	// (0x00016cf1) slider_form_pane_g2_cp2

0xb401,	// (0x000171ae) form_field_slider_pane_vc_t3

0xb40f,	// (0x000171bc) form_field_slider_pane_vc_t4

0xb41d,	// (0x000171ca) slider_form_pane_vc_ParamLimits

0xb41d,	// (0x000171ca) slider_form_pane_vc

0xb42a,	// (0x000171d7) form_field_slider_pane_vc_t1_ParamLimits

0xb42a,	// (0x000171d7) form_field_slider_pane_vc_t1

0xb394,	// (0x00017141) form_field_slider_pane_vc_t2_ParamLimits

0xb394,	// (0x00017141) form_field_slider_pane_vc_t2

0x0001,

0xfa61,	// (0x0001b80e) form_field_slider_pane_vc_t_ParamLimits

0xfa61,	// (0x0001b80e) form_field_slider_pane_vc_t

0x6ed1,	// (0x00012c7e) input_focus_pane_cp9_vc_ParamLimits

0x6ed1,	// (0x00012c7e) input_focus_pane_cp9_vc

0xb446,	// (0x000171f3) slider_cont_pane_vc_ParamLimits

0xb446,	// (0x000171f3) slider_cont_pane_vc

0xb45a,	// (0x00017207) list_form_graphic_pane_cp_vc_ParamLimits

0xb45a,	// (0x00017207) list_form_graphic_pane_cp_vc

0x930e,	// (0x000150bb) form_field_popup_wide_pane_vc_g1

0xb46f,	// (0x0001721c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb46f,	// (0x0001721c) form_field_popup_wide_pane_vc_t1

0x7a3a,	// (0x000137e7) input_focus_pane_cp8_vc_ParamLimits

0x7a3a,	// (0x000137e7) input_focus_pane_cp8_vc

0xb4b4,	// (0x00017261) list_form_wide_pane_vc_ParamLimits

0xb4b4,	// (0x00017261) list_form_wide_pane_vc

0xb4c0,	// (0x0001726d) list_form_graphic_pane_vc_g1

0xb4c8,	// (0x00017275) list_form_graphic_pane_vc_t1_ParamLimits

0xb4c8,	// (0x00017275) list_form_graphic_pane_vc_t1

0x6c3c,	// (0x000129e9) list_highlight_pane_cp5_vc_ParamLimits

0x6c3c,	// (0x000129e9) list_highlight_pane_cp5_vc

0xb4e4,	// (0x00017291) list_form_graphic_pane_vc_ParamLimits

0xb4e4,	// (0x00017291) list_form_graphic_pane_vc

0x930e,	// (0x000150bb) form_field_popup_pane_vc_g1

0xb4fa,	// (0x000172a7) form_field_popup_pane_vc_t1_ParamLimits

0xb4fa,	// (0x000172a7) form_field_popup_pane_vc_t1

0x7a3a,	// (0x000137e7) input_focus_pane_cp7_vc_ParamLimits

0x7a3a,	// (0x000137e7) input_focus_pane_cp7_vc

0xb511,	// (0x000172be) list_form_pane_vc_ParamLimits

0xb511,	// (0x000172be) list_form_pane_vc

0xb51d,	// (0x000172ca) data_form_pane_vc_t1_ParamLimits

0xb51d,	// (0x000172ca) data_form_pane_vc_t1

0x7b69,	// (0x00013916) input_focus_pane_vc_g1

0x7b71,	// (0x0001391e) input_focus_pane_vc_g2

0x7b79,	// (0x00013926) input_focus_pane_vc_g3

0x7b81,	// (0x0001392e) input_focus_pane_vc_g4

0x7b89,	// (0x00013936) input_focus_pane_vc_g5

0x7b91,	// (0x0001393e) input_focus_pane_vc_g6

0x7b99,	// (0x00013946) input_focus_pane_vc_g7

0x7ba1,	// (0x0001394e) input_focus_pane_vc_g8

0x7ba9,	// (0x00013956) input_focus_pane_vc_g9

0x38a0,	// (0x0000f64d) input_focus_pane_vc_g10

0x0009,

0xf660,	// (0x0001b40d) input_focus_pane_vc_g

0x9302,	// (0x000150af) data_form_pane_vc_ParamLimits

0x9302,	// (0x000150af) data_form_pane_vc

0x930e,	// (0x000150bb) form_field_data_pane_vc_g1

0xb538,	// (0x000172e5) form_field_data_pane_vc_t1_ParamLimits

0xb538,	// (0x000172e5) form_field_data_pane_vc_t1

0x7a3a,	// (0x000137e7) input_focus_pane_vc_ParamLimits

0x7a3a,	// (0x000137e7) input_focus_pane_vc

0xb552,	// (0x000172ff) button_value_adjust_pane_cp3_vc

0xb55a,	// (0x00017307) button_value_adjust_pane_cp5_vc

0xb562,	// (0x0001730f) form_field_data_pane_vc_ParamLimits

0xb562,	// (0x0001730f) form_field_data_pane_vc

0xb579,	// (0x00017326) form_field_data_pane_vc_cp2

0xb581,	// (0x0001732e) form_field_data_wide_pane_vc_ParamLimits

0xb581,	// (0x0001732e) form_field_data_wide_pane_vc

0xb597,	// (0x00017344) form_field_data_wide_pane_vc_cp2

0xb59f,	// (0x0001734c) form_field_popup_pane_vc_ParamLimits

0xb59f,	// (0x0001734c) form_field_popup_pane_vc

0xb5b6,	// (0x00017363) form_field_popup_wide_pane_vc_ParamLimits

0xb5b6,	// (0x00017363) form_field_popup_wide_pane_vc

0xb5cc,	// (0x00017379) form_field_slider_pane_vc_ParamLimits

0xb5cc,	// (0x00017379) form_field_slider_pane_vc

0xb5df,	// (0x0001738c) form_field_slider_wide_pane_vc_ParamLimits

0xb5df,	// (0x0001738c) form_field_slider_wide_pane_vc

0xb5f2,	// (0x0001739f) grid_touch_1_pane_ParamLimits

0xb5f2,	// (0x0001739f) grid_touch_1_pane

0xb5fe,	// (0x000173ab) grid_touch_2_pane_ParamLimits

0xb5fe,	// (0x000173ab) grid_touch_2_pane

0x8bcd,	// (0x0001497a) touch_pane_g1_ParamLimits

0x8bcd,	// (0x0001497a) touch_pane_g1

0xb616,	// (0x000173c3) cell_app_pane_cp_wide_ParamLimits

0xb616,	// (0x000173c3) cell_app_pane_cp_wide

0xb627,	// (0x000173d4) grid_popup_fast_wide_pane_ParamLimits

0xb627,	// (0x000173d4) grid_popup_fast_wide_pane

0xb63b,	// (0x000173e8) scroll_pane_cp19_ParamLimits

0xb63b,	// (0x000173e8) scroll_pane_cp19

0x3a68,	// (0x0000f815) bg_popup_window_pane_cp20

0xb64f,	// (0x000173fc) listscroll_popup_fast_wide_pane

0xb657,	// (0x00017404) grid_indicator_nsta_pane

0xb669,	// (0x00017416) clock_nsta_pane_g1

0xb672,	// (0x0001741f) clock_nsta_pane_t1

0xb68e,	// (0x0001743b) cell_indicator_nsta_pane_ParamLimits

0xb68e,	// (0x0001743b) cell_indicator_nsta_pane

0xb6c3,	// (0x00017470) cell_indicator_nsta_pane_g1

0xb6d1,	// (0x0001747e) cell_indicator_nsta_pane_g2

0x0001,

0xfa72,	// (0x0001b81f) cell_indicator_nsta_pane_g

0xb6e3,	// (0x00017490) clock_nsta_pane_cp

0xb6ec,	// (0x00017499) indicator_nsta_pane_cp

0xb6f6,	// (0x000174a3) nsta_clock_indic_pane_g1

0x6d1f,	// (0x00012acc) grid_indicator_pane

0x8162,	// (0x00013f0f) scroll_pane_cp29

0x4bdf,	// (0x0001098c) indicator_nsta_pane_cp2_ParamLimits

0x4bdf,	// (0x0001098c) indicator_nsta_pane_cp2

0x6c3c,	// (0x000129e9) main_apps_wheel_pane

0x955a,	// (0x00015307) form_midp_field_text_pane_ParamLimits

0x96a5,	// (0x00015452) scroll_bar_cp050_ParamLimits

0xb74f,	// (0x000174fc) cell_indicator_pane_ParamLimits

0xb74f,	// (0x000174fc) cell_indicator_pane

0xb766,	// (0x00017513) cell_indicator_pane_g1

0xb770,	// (0x0001751d) grid_wheel_folder_pane_ParamLimits

0xb770,	// (0x0001751d) grid_wheel_folder_pane

0xb786,	// (0x00017533) list_wheel_apps_pane_ParamLimits

0xb786,	// (0x00017533) list_wheel_apps_pane

0xb797,	// (0x00017544) main_apps_wheel_pane_g1_ParamLimits

0xb797,	// (0x00017544) main_apps_wheel_pane_g1

0xb7ab,	// (0x00017558) main_apps_wheel_pane_g2_ParamLimits

0xb7ab,	// (0x00017558) main_apps_wheel_pane_g2

0x0001,

0xfa8e,	// (0x0001b83b) main_apps_wheel_pane_g_ParamLimits

0xfa8e,	// (0x0001b83b) main_apps_wheel_pane_g

0xb7c3,	// (0x00017570) main_apps_wheel_pane_t1_ParamLimits

0xb7c3,	// (0x00017570) main_apps_wheel_pane_t1

0xb7e6,	// (0x00017593) list_wheel_apps_pane_g1

0xb7ee,	// (0x0001759b) list_wheel_apps_pane_g2

0xb7f6,	// (0x000175a3) list_wheel_apps_pane_g3

0xb7fe,	// (0x000175ab) list_wheel_apps_pane_g4

0xb808,	// (0x000175b5) list_wheel_apps_pane_g5

0x0004,

0xfa93,	// (0x0001b840) list_wheel_apps_pane_g

0x8785,	// (0x00014532) navi_icon_text_pane

0x8c76,	// (0x00014a23) aid_fill_nsta

0xb82b,	// (0x000175d8) navi_icon_text_pane_g1

0xb837,	// (0x000175e4) navi_icon_text_pane_t1

0x8623,	// (0x000143d0) list_set_graphic_pane_t1_ParamLimits

0x8623,	// (0x000143d0) list_set_graphic_pane_t1

0x9e10,	// (0x00015bbd) popup_midp_note_alarm_window_t6_ParamLimits

0x9e10,	// (0x00015bbd) popup_midp_note_alarm_window_t6

0x9e22,	// (0x00015bcf) popup_midp_note_alarm_window_t7_ParamLimits

0x9e22,	// (0x00015bcf) popup_midp_note_alarm_window_t7

0x9e34,	// (0x00015be1) popup_midp_note_alarm_window_t8_ParamLimits

0x9e34,	// (0x00015be1) popup_midp_note_alarm_window_t8

0x9e46,	// (0x00015bf3) popup_midp_note_alarm_window_t9_ParamLimits

0x9e46,	// (0x00015bf3) popup_midp_note_alarm_window_t9

0x9e58,	// (0x00015c05) popup_midp_note_alarm_window_t10_ParamLimits

0x9e58,	// (0x00015c05) popup_midp_note_alarm_window_t10

0x9e6a,	// (0x00015c17) popup_midp_note_alarm_window_t11_ParamLimits

0x9e6a,	// (0x00015c17) popup_midp_note_alarm_window_t11

0x9e7c,	// (0x00015c29) scroll_pane_cp17_ParamLimits

0x9e7c,	// (0x00015c29) scroll_pane_cp17

0x5694,	// (0x00011441) volume_small_pane_cp_g1

0x5989,	// (0x00011736) volume_small_pane_cp_g2

0x5992,	// (0x0001173f) volume_small_pane_cp_g3

0x599b,	// (0x00011748) volume_small_pane_cp_g4

0x59a4,	// (0x00011751) volume_small_pane_cp_g5

0x59ad,	// (0x0001175a) volume_small_pane_cp_g6

0x59b6,	// (0x00011763) volume_small_pane_cp_g7

0x59bf,	// (0x0001176c) volume_small_pane_cp_g8

0x59c8,	// (0x00011775) volume_small_pane_cp_g9

0x59d1,	// (0x0001177e) volume_small_pane_cp_g10

0x89e3,	// (0x00014790) midp_ticker_pane_g1_ParamLimits

0x89ef,	// (0x0001479c) midp_ticker_pane_g2_ParamLimits

0xf72c,	// (0x0001b4d9) midp_ticker_pane_g_ParamLimits

0x89fb,	// (0x000147a8) midp_ticker_pane_t1_ParamLimits

0x8c8c,	// (0x00014a39) aid_fill_nsta_2

0x9691,	// (0x0001543e) list_form2_midp_pane

0xa80a,	// (0x000165b7) midp_editing_number_pane_ParamLimits

0xa819,	// (0x000165c6) midp_ticker_pane_ParamLimits

0xb849,	// (0x000175f6) form2_midp_field_pane

0xb86d,	// (0x0001761a) scroll_pane_cp51

0xb88d,	// (0x0001763a) form2_midp_button_pane_ParamLimits

0xb88d,	// (0x0001763a) form2_midp_button_pane

0xb89f,	// (0x0001764c) form2_midp_content_pane_ParamLimits

0xb89f,	// (0x0001764c) form2_midp_content_pane

0xb8b9,	// (0x00017666) form2_midp_field_choice_group_pane

0xb8c1,	// (0x0001766e) form2_midp_field_pane_g1

0xb8c9,	// (0x00017676) form2_midp_field_pane_g2

0xb8d1,	// (0x0001767e) form2_midp_field_pane_g3

0xb8d9,	// (0x00017686) form2_midp_field_pane_g4

0x0003,

0xfab8,	// (0x0001b865) form2_midp_field_pane_g

0xb8e1,	// (0x0001768e) form2_midp_gauge_slider_pane

0xb8e9,	// (0x00017696) form2_midp_gauge_wait_pane

0xb8f1,	// (0x0001769e) form2_midp_image_pane_ParamLimits

0xb8f1,	// (0x0001769e) form2_midp_image_pane

0xb90c,	// (0x000176b9) form2_midp_label_pane_ParamLimits

0xb90c,	// (0x000176b9) form2_midp_label_pane

0xb925,	// (0x000176d2) form2_midp_label_pane_cp_ParamLimits

0xb925,	// (0x000176d2) form2_midp_label_pane_cp

0xb946,	// (0x000176f3) form2_midp_string_pane_ParamLimits

0xb946,	// (0x000176f3) form2_midp_string_pane

0xb958,	// (0x00017705) form2_midp_text_pane_ParamLimits

0xb958,	// (0x00017705) form2_midp_text_pane

0xb975,	// (0x00017722) form2_midp_time_pane

0xb985,	// (0x00017732) input_focus_pane_cp51_ParamLimits

0xb985,	// (0x00017732) input_focus_pane_cp51

0xb99d,	// (0x0001774a) form2_midp_label_pane_t1_ParamLimits

0xb99d,	// (0x0001774a) form2_midp_label_pane_t1

0xb9de,	// (0x0001778b) form2_mdip_text_pane_t1_ParamLimits

0xb9de,	// (0x0001778b) form2_mdip_text_pane_t1

0xb9fd,	// (0x000177aa) form2_midp_time_pane_t1

0xba18,	// (0x000177c5) form2_midp_gauge_slider_pane_t1

0xba2a,	// (0x000177d7) form2_midp_gauge_slider_pane_t2

0xba3c,	// (0x000177e9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac1,	// (0x0001b86e) form2_midp_gauge_slider_pane_t

0xba4e,	// (0x000177fb) form2_midp_slider_pane

0xba5a,	// (0x00017807) form2_midp_gauge_wait_pane_t1

0xba68,	// (0x00017815) form2_midp_wait_pane_ParamLimits

0xba68,	// (0x00017815) form2_midp_wait_pane

0xba93,	// (0x00017840) list_single_2graphic_pane_cp4_ParamLimits

0xba93,	// (0x00017840) list_single_2graphic_pane_cp4

0x9376,	// (0x00015123) list_single_midp_graphic_pane_cp_ParamLimits

0x9376,	// (0x00015123) list_single_midp_graphic_pane_cp

0x3a68,	// (0x0000f815) list_highlight_pane_cp20

0xbab7,	// (0x00017864) list_single_2graphic_pane_g1_cp4

0xbabf,	// (0x0001786c) list_single_2graphic_pane_g2_cp4

0xbac7,	// (0x00017874) list_single_2graphic_pane_t1_cp4

0x6c3c,	// (0x000129e9) list_highlight_pane_cp21

0xbad6,	// (0x00017883) list_single_midp_graphic_pane_g4_cp

0xbae5,	// (0x00017892) list_single_midp_graphic_pane_t1_cp

0xbafa,	// (0x000178a7) form2_mdip_string_pane_t1_ParamLimits

0xbafa,	// (0x000178a7) form2_mdip_string_pane_t1

0x3a68,	// (0x0000f815) bg_wml_button_pane_cp2

0x38a0,	// (0x0000f64d) form2_midp_image_pane_g1

0x7704,	// (0x000134b1) list_double_large_graphic_pane_g5_ParamLimits

0x7704,	// (0x000134b1) list_double_large_graphic_pane_g5

0x890e,	// (0x000146bb) midp_form_pane_ParamLimits

0x6c3c,	// (0x000129e9) main_apps_wheel_pane_ParamLimits

0x52d4,	// (0x00011081) popup_preview_window_ParamLimits

0x52d4,	// (0x00011081) popup_preview_window

0x548f,	// (0x0001123c) popup_touch_info_window_ParamLimits

0x548f,	// (0x0001123c) popup_touch_info_window

0x54ad,	// (0x0001125a) popup_touch_menu_window_ParamLimits

0x54ad,	// (0x0001125a) popup_touch_menu_window

0x3896,	// (0x0000f643) bg_popup_sub_pane_cp6

0xbbf3,	// (0x000179a0) list_touch_menu_pane

0xbbfb,	// (0x000179a8) list_single_touch_menu_pane_ParamLimits

0xbbfb,	// (0x000179a8) list_single_touch_menu_pane

0xbc11,	// (0x000179be) list_single_touch_menu_pane_t1

0x6c3c,	// (0x000129e9) bg_popup_sub_pane_cp7_ParamLimits

0x6c3c,	// (0x000129e9) bg_popup_sub_pane_cp7

0x96c5,	// (0x00015472) heading_sub_pane

0xbc1f,	// (0x000179cc) list_touch_info_pane_ParamLimits

0xbc1f,	// (0x000179cc) list_touch_info_pane

0xbc2f,	// (0x000179dc) list_single_touch_info_pane_ParamLimits

0xbc2f,	// (0x000179dc) list_single_touch_info_pane

0xbc41,	// (0x000179ee) list_single_touch_info_pane_t1

0xbc4f,	// (0x000179fc) list_single_touch_info_pane_t2

0x0001,

0xfacf,	// (0x0001b87c) list_single_touch_info_pane_t

0x8906,	// (0x000146b3) bg_popup_heading_pane_cp

0xbc5d,	// (0x00017a0a) heading_sub_pane_t1

0x929c,	// (0x00015049) bg_popup_preview_window_pane_cp_ParamLimits

0x929c,	// (0x00015049) bg_popup_preview_window_pane_cp

0x96c5,	// (0x00015472) heading_preview_pane

0xbc1f,	// (0x000179cc) list_preview_pane_ParamLimits

0xbc1f,	// (0x000179cc) list_preview_pane

0xbc6b,	// (0x00017a18) popup_preview_window_g1

0xbc2f,	// (0x000179dc) list_single_preview_pane_ParamLimits

0xbc2f,	// (0x000179dc) list_single_preview_pane

0xbc73,	// (0x00017a20) list_single_preview_pane_g1

0xbc7b,	// (0x00017a28) list_single_preview_pane_t1

0xbc41,	// (0x000179ee) list_single_preview_pane_t2

0x0001,

0xfad4,	// (0x0001b881) list_single_preview_pane_t

0xbc89,	// (0x00017a36) bg_popup_heading_pane_cp2_ParamLimits

0xbc89,	// (0x00017a36) bg_popup_heading_pane_cp2

0xbc9f,	// (0x00017a4c) heading_preview_pane_g1

0xbca7,	// (0x00017a54) heading_preview_pane_t1_ParamLimits

0xbca7,	// (0x00017a54) heading_preview_pane_t1

0x6d42,	// (0x00012aef) soft_indicator_pane_t1_ParamLimits

0x7456,	// (0x00013203) scroll_pane_ParamLimits

0x805b,	// (0x00013e08) scroll_sc2_left_pane

0x8064,	// (0x00013e11) scroll_sc2_right_pane

0x8083,	// (0x00013e30) scroll_bg_pane_g1_ParamLimits

0x8098,	// (0x00013e45) scroll_bg_pane_g2_ParamLimits

0x80b0,	// (0x00013e5d) scroll_bg_pane_g3_ParamLimits

0xf6b7,	// (0x0001b464) scroll_bg_pane_g_ParamLimits

0x8083,	// (0x00013e30) scroll_handle_pane_g1_ParamLimits

0x80d2,	// (0x00013e7f) scroll_handle_pane_g2_ParamLimits

0x80b0,	// (0x00013e5d) scroll_handle_pane_g3_ParamLimits

0xf6be,	// (0x0001b46b) scroll_handle_pane_g_ParamLimits

0x4f53,	// (0x00010d00) popup_choice_list_window_ParamLimits

0x4f53,	// (0x00010d00) popup_choice_list_window

0x90ae,	// (0x00014e5b) choice_list_pane

0x9146,	// (0x00014ef3) cell_toolbar_pane_t1

0x916e,	// (0x00014f1b) toolbar_button_pane_ParamLimits

0xa336,	// (0x000160e3) ai_gene_pane_1_t2_ParamLimits

0xa336,	// (0x000160e3) ai_gene_pane_1_t2

0x0001,

0xf8e1,	// (0x0001b68e) ai_gene_pane_1_t_ParamLimits

0xf8e1,	// (0x0001b68e) ai_gene_pane_1_t

0xbcc4,	// (0x00017a71) scroll_sc2_left_pane_g1

0xbcc4,	// (0x00017a71) scroll_sc2_right_pane_g1

0x8c32,	// (0x000149df) bg_popup_sub_pane_cp10

0xbcce,	// (0x00017a7b) list_choice_list_pane

0xbce7,	// (0x00017a94) list_single_choice_list_pane_ParamLimits

0xbce7,	// (0x00017a94) list_single_choice_list_pane

0xbcfa,	// (0x00017aa7) list_single_choice_list_pane_g1

0x7d61,	// (0x00013b0e) list_single_choice_list_pane_t1_ParamLimits

0x7d61,	// (0x00013b0e) list_single_choice_list_pane_t1

0xbd02,	// (0x00017aaf) choice_list_pane_g1

0xbd0a,	// (0x00017ab7) choice_list_pane_t1

0x3896,	// (0x0000f643) input_focus_pane_cp11

0x7f38,	// (0x00013ce5) title_pane_stacon_g2_ParamLimits

0x7f38,	// (0x00013ce5) title_pane_stacon_g2

0x0002,

0xf69d,	// (0x0001b44a) title_pane_stacon_g_ParamLimits

0xf69d,	// (0x0001b44a) title_pane_stacon_g

0x8906,	// (0x000146b3) cursor_press_pane

0x4fff,	// (0x00010dac) popup_fep_hwr_window_ParamLimits

0x4fff,	// (0x00010dac) popup_fep_hwr_window

0x5079,	// (0x00010e26) popup_fep_vkb_window_ParamLimits

0x5079,	// (0x00010e26) popup_fep_vkb_window

0xbd18,	// (0x00017ac5) cursor_press_pane_g1

0x0002,

0xfafd,	// (0x0001b8aa) fep_vkb_side_pane_g_ParamLimits

0x5a13,	// (0x000117c0) fep_hwr_candidate_pane_ParamLimits

0x5a13,	// (0x000117c0) fep_hwr_candidate_pane

0x5a3d,	// (0x000117ea) fep_hwr_side_pane_ParamLimits

0x5a3d,	// (0x000117ea) fep_hwr_side_pane

0x5a5d,	// (0x0001180a) fep_hwr_top_pane_ParamLimits

0x5a5d,	// (0x0001180a) fep_hwr_top_pane

0x5a75,	// (0x00011822) fep_hwr_write_pane_ParamLimits

0x5a75,	// (0x00011822) fep_hwr_write_pane

0xfafd,	// (0x0001b8aa) fep_vkb_side_pane_g

0xbd20,	// (0x00017acd) fep_hwr_top_pane_g1

0xbd32,	// (0x00017adf) fep_hwr_top_pane_g2

0x5aaf,	// (0x0001185c) fep_hwr_top_pane_g3

0x0002,

0xfad9,	// (0x0001b886) fep_hwr_top_pane_g

0x5ac4,	// (0x00011871) fep_hwr_top_text_pane

0x8252,	// (0x00013fff) fep_hwr_top_text_pane_g1

0xbd68,	// (0x00017b15) fep_hwr_top_text_pane_t1

0x5bba,	// (0x00011967) fep_hwr_candidate_pane_g1

0xbfbb,	// (0x00017d68) fep_vkb_keypad_pane_g3_ParamLimits

0xbfbb,	// (0x00017d68) fep_vkb_keypad_pane_g3

0xbfe3,	// (0x00017d90) fep_vkb_keypad_pane_g4_ParamLimits

0xbfe3,	// (0x00017d90) fep_vkb_keypad_pane_g4

0xc052,	// (0x00017dff) fep_vkb_bottom_pane_g2_ParamLimits

0xc052,	// (0x00017dff) fep_vkb_bottom_pane_g2

0x0001,

0xfb04,	// (0x0001b8b1) fep_vkb_bottom_pane_g_ParamLimits

0xfb04,	// (0x0001b8b1) fep_vkb_bottom_pane_g

0xbcc4,	// (0x00017a71) cell_vkb_side_pane_g2

0x0001,

0xfb0e,	// (0x0001b8bb) cell_vkb_side_pane_g

0xc0dd,	// (0x00017e8a) cell_vkb_side_pane_t1

0xc0eb,	// (0x00017e98) cell_vkb_side_pane_t1_copy1

0xbcc4,	// (0x00017a71) bg_fep_vkb_candidate_pane_g2

0xc217,	// (0x00017fc4) cell_vkb_candidate_pane_ParamLimits

0xbd76,	// (0x00017b23) aid_size_cell_vkb_ParamLimits

0xbd76,	// (0x00017b23) aid_size_cell_vkb

0xc217,	// (0x00017fc4) cell_vkb_candidate_pane

0x5be1,	// (0x0001198e) bg_popup_fep_shadow_pane_g1

0xbe04,	// (0x00017bb1) fep_vkb_bottom_pane_ParamLimits

0xbe04,	// (0x00017bb1) fep_vkb_bottom_pane

0xbe3a,	// (0x00017be7) fep_vkb_candidate_pane_ParamLimits

0xbe3a,	// (0x00017be7) fep_vkb_candidate_pane

0xbe56,	// (0x00017c03) fep_vkb_keypad_pane_ParamLimits

0xbe56,	// (0x00017c03) fep_vkb_keypad_pane

0xbe9c,	// (0x00017c49) fep_vkb_side_pane_ParamLimits

0xbe9c,	// (0x00017c49) fep_vkb_side_pane

0xbed8,	// (0x00017c85) fep_vkb_top_pane_ParamLimits

0xbed8,	// (0x00017c85) fep_vkb_top_pane

0xbf14,	// (0x00017cc1) fep_vkb_top_pane_g1_ParamLimits

0xbf14,	// (0x00017cc1) fep_vkb_top_pane_g1

0xbf23,	// (0x00017cd0) fep_vkb_top_pane_g2_ParamLimits

0xbf23,	// (0x00017cd0) fep_vkb_top_pane_g2

0xbf32,	// (0x00017cdf) fep_vkb_top_pane_g3_ParamLimits

0xbf32,	// (0x00017cdf) fep_vkb_top_pane_g3

0x0003,

0xfaf4,	// (0x0001b8a1) fep_vkb_top_pane_g_ParamLimits

0xfaf4,	// (0x0001b8a1) fep_vkb_top_pane_g

0xbf50,	// (0x00017cfd) fep_vkb_top_text_pane_ParamLimits

0xbf50,	// (0x00017cfd) fep_vkb_top_text_pane

0xbf61,	// (0x00017d0e) fep_vkb_side_pane_g1_ParamLimits

0xbf61,	// (0x00017d0e) fep_vkb_side_pane_g1

0xbfaa,	// (0x00017d57) grid_vkb_side_pane_ParamLimits

0xbfaa,	// (0x00017d57) grid_vkb_side_pane

0x5be9,	// (0x00011996) bg_popup_fep_shadow_pane_g2

0x5bf2,	// (0x0001199f) bg_popup_fep_shadow_pane_g3

0x5bfa,	// (0x000119a7) bg_popup_fep_shadow_pane_g4

0x5c03,	// (0x000119b0) bg_popup_fep_shadow_pane_g5

0x5c0d,	// (0x000119ba) bg_popup_fep_shadow_pane_g6

0x5c15,	// (0x000119c2) bg_popup_fep_shadow_pane_g7

0x7b81,	// (0x0001392e) bg_popup_fep_shadow_pane_g8

0xc001,	// (0x00017dae) grid_vkb_keypad_number_pane_ParamLimits

0xc001,	// (0x00017dae) grid_vkb_keypad_number_pane

0xc011,	// (0x00017dbe) grid_vkb_keypad_pane_ParamLimits

0xc011,	// (0x00017dbe) grid_vkb_keypad_pane

0xc037,	// (0x00017de4) fep_vkb_bottom_pane_g1_ParamLimits

0xc037,	// (0x00017de4) fep_vkb_bottom_pane_g1

0xc060,	// (0x00017e0d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc060,	// (0x00017e0d) grid_vkb_keypad_bottom_left_pane

0xc075,	// (0x00017e22) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc075,	// (0x00017e22) grid_vkb_keypad_bottom_right_pane

0xc08a,	// (0x00017e37) fep_vkb_top_text_pane_g1

0xc0a5,	// (0x00017e52) fep_vkb_top_text_pane_t1

0xc0ba,	// (0x00017e67) cell_vkb_side_pane_ParamLimits

0xc0ba,	// (0x00017e67) cell_vkb_side_pane

0xbcc4,	// (0x00017a71) cell_vkb_side_pane_g1

0xc0f9,	// (0x00017ea6) cell_vkb_keypad_pane_ParamLimits

0xc0f9,	// (0x00017ea6) cell_vkb_keypad_pane

0xc16e,	// (0x00017f1b) cell_vkb_keypad_pane_g1

0x0008,

0xfb21,	// (0x0001b8ce) bg_popup_fep_shadow_pane_g

0x5c27,	// (0x000119d4) cell_hwr_side_pane_g1

0x5c27,	// (0x000119d4) cell_hwr_side_pane_g2

0xc178,	// (0x00017f25) cell_vkb_keypad_pane_t1

0xc186,	// (0x00017f33) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc186,	// (0x00017f33) cell_vkb_keypad_bottom_left_pane

0xc1a3,	// (0x00017f50) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1a3,	// (0x00017f50) cell_vkb_keypad_bottom_right_pane

0xbcc4,	// (0x00017a71) cell_vkb_keypad_bottom_left_pane_g1

0xbcc4,	// (0x00017a71) cell_vkb_keypad_bottom_right_pane_g1

0xc1dc,	// (0x00017f89) cell_vkb_keypad_number_pane_ParamLimits

0xc1dc,	// (0x00017f89) cell_vkb_keypad_number_pane

0xc1fb,	// (0x00017fa8) cell_vkb_keypad_number_pane_g1

0xc205,	// (0x00017fb2) cell_vkb_keypad_number_pane_g2

0xc20e,	// (0x00017fbb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb13,	// (0x0001b8c0) cell_vkb_keypad_number_pane_g

0xc178,	// (0x00017f25) cell_vkb_keypad_number_pane_t1

0xc232,	// (0x00017fdf) fep_vkb_candidate_pane_g1

0x0001,

0xfb34,	// (0x0001b8e1) cell_hwr_side_pane_g

0xc24b,	// (0x00017ff8) cell_hwr_side_pane_t1

0x5c31,	// (0x000119de) cell_hwr_side_pane_t1_copy1

0x5c3f,	// (0x000119ec) cell_hwr_candidate_pane_g1

0x5c6e,	// (0x00011a1b) cell_hwr_candidate_pane_t1

0xbcc4,	// (0x00017a71) cell_vkb_candidate_pane_g2

0xc28f,	// (0x0001803c) cell_vkb_candidate_pane_t1

0x59da,	// (0x00011787) bg_popup_fep_shadow_pane_ParamLimits

0x59da,	// (0x00011787) bg_popup_fep_shadow_pane

0x5a8f,	// (0x0001183c) bg_fep_hwr_top_pane_g4

0xbd44,	// (0x00017af1) bg_hwr_side_pane_g1_ParamLimits

0xbd44,	// (0x00017af1) bg_hwr_side_pane_g1

0x5b00,	// (0x000118ad) cell_hwr_side_pane_ParamLimits

0x5b00,	// (0x000118ad) cell_hwr_side_pane

0x5b3b,	// (0x000118e8) fep_hwr_write_pane_g1_ParamLimits

0x5b3b,	// (0x000118e8) fep_hwr_write_pane_g1

0x5b48,	// (0x000118f5) fep_hwr_write_pane_g2_ParamLimits

0x5b48,	// (0x000118f5) fep_hwr_write_pane_g2

0x5b55,	// (0x00011902) fep_hwr_write_pane_g3_ParamLimits

0x5b55,	// (0x00011902) fep_hwr_write_pane_g3

0x5b63,	// (0x00011910) fep_hwr_write_pane_g4_ParamLimits

0x5b63,	// (0x00011910) fep_hwr_write_pane_g4

0x0005,

0xfae0,	// (0x0001b88d) fep_hwr_write_pane_g_ParamLimits

0xfae0,	// (0x0001b88d) fep_hwr_write_pane_g

0x5a8f,	// (0x0001183c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5a8f,	// (0x0001183c) bg_fep_hwr_candidate_pane_g2

0x5b78,	// (0x00011925) cell_hwr_candidate_pane_ParamLimits

0x5b78,	// (0x00011925) cell_hwr_candidate_pane

0x5bba,	// (0x00011967) fep_hwr_candidate_pane_g1_ParamLimits

0xbda4,	// (0x00017b51) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbda4,	// (0x00017b51) bg_popup_fep_shadow_pane_cp2

0xbf42,	// (0x00017cef) fep_vkb_top_pane_g4_ParamLimits

0xbf42,	// (0x00017cef) fep_vkb_top_pane_g4

0xbf88,	// (0x00017d35) fep_vkb_side_pane_g2_ParamLimits

0xbf88,	// (0x00017d35) fep_vkb_side_pane_g2

0x785c,	// (0x00013609) list_setting_pane_t4_ParamLimits

0x785c,	// (0x00013609) list_setting_pane_t4

0x78d6,	// (0x00013683) list_setting_number_pane_t5_ParamLimits

0x78d6,	// (0x00013683) list_setting_number_pane_t5

0x8299,	// (0x00014046) list_double_heading_pane_cp2_ParamLimits

0x8299,	// (0x00014046) list_double_heading_pane_cp2

0x7a60,	// (0x0001380d) list_double_heading_pane_g1_cp2_ParamLimits

0x7a60,	// (0x0001380d) list_double_heading_pane_g1_cp2

0x7a6c,	// (0x00013819) list_double_heading_pane_g2_cp2_ParamLimits

0x7a6c,	// (0x00013819) list_double_heading_pane_g2_cp2

0xc29d,	// (0x0001804a) list_double_heading_pane_t1_cp2_ParamLimits

0xc29d,	// (0x0001804a) list_double_heading_pane_t1_cp2

0xc2b3,	// (0x00018060) list_double_heading_pane_t2_cp2_ParamLimits

0xc2b3,	// (0x00018060) list_double_heading_pane_t2_cp2

0x388e,	// (0x0000f63b) aid_value_unit2

0x476f,	// (0x0001051c) popup_preview_fixed_window

0x6edf,	// (0x00012c8c) bg_popup_preview_window_pane_cp02

0xc2c5,	// (0x00018072) list_preview_fixed_pane

0xc30b,	// (0x000180b8) list_empty_pane_fp_ParamLimits

0xc30b,	// (0x000180b8) list_empty_pane_fp

0xc30b,	// (0x000180b8) list_single_cale_day_pane_fp_ParamLimits

0xc30b,	// (0x000180b8) list_single_cale_day_pane_fp

0xc30b,	// (0x000180b8) list_single_graphic_heading_pane_fp_ParamLimits

0xc30b,	// (0x000180b8) list_single_graphic_heading_pane_fp

0xc30b,	// (0x000180b8) list_single_graphic_pane_fp_ParamLimits

0xc30b,	// (0x000180b8) list_single_graphic_pane_fp

0xc30b,	// (0x000180b8) list_single_heading_pane_fp_ParamLimits

0xc30b,	// (0x000180b8) list_single_heading_pane_fp

0xc30b,	// (0x000180b8) list_single_pane_fp_ParamLimits

0xc30b,	// (0x000180b8) list_single_pane_fp

0xc320,	// (0x000180cd) list_single_pane_fp_g1_ParamLimits

0xc320,	// (0x000180cd) list_single_pane_fp_g1

0x7a60,	// (0x0001380d) list_single_pane_fp_g2_ParamLimits

0x7a60,	// (0x0001380d) list_single_pane_fp_g2

0x7a6c,	// (0x00013819) list_single_pane_fp_g3_ParamLimits

0x7a6c,	// (0x00013819) list_single_pane_fp_g3

0xc32c,	// (0x000180d9) list_single_pane_fp_g4_ParamLimits

0xc32c,	// (0x000180d9) list_single_pane_fp_g4

0x0003,

0xfb47,	// (0x0001b8f4) list_single_pane_fp_g_ParamLimits

0xfb47,	// (0x0001b8f4) list_single_pane_fp_g

0xc338,	// (0x000180e5) list_single_pane_fp_t1_ParamLimits

0xc338,	// (0x000180e5) list_single_pane_fp_t1

0xc34f,	// (0x000180fc) list_single_graphic_pane_fp_g1_ParamLimits

0xc34f,	// (0x000180fc) list_single_graphic_pane_fp_g1

0xc320,	// (0x000180cd) list_single_graphic_pane_fp_g2_ParamLimits

0xc320,	// (0x000180cd) list_single_graphic_pane_fp_g2

0x7a60,	// (0x0001380d) list_single_graphic_pane_fp_g3_ParamLimits

0x7a60,	// (0x0001380d) list_single_graphic_pane_fp_g3

0x7a6c,	// (0x00013819) list_single_graphic_pane_fp_g4_ParamLimits

0x7a6c,	// (0x00013819) list_single_graphic_pane_fp_g4

0xc32c,	// (0x000180d9) list_single_graphic_pane_fp_g5_ParamLimits

0xc32c,	// (0x000180d9) list_single_graphic_pane_fp_g5

0x0004,

0xfb50,	// (0x0001b8fd) list_single_graphic_pane_fp_g_ParamLimits

0xfb50,	// (0x0001b8fd) list_single_graphic_pane_fp_g

0xc35b,	// (0x00018108) list_single_graphic_pane_fp_t1_ParamLimits

0xc35b,	// (0x00018108) list_single_graphic_pane_fp_t1

0xc34f,	// (0x000180fc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc34f,	// (0x000180fc) list_single_graphic_heading_pane_fp_g1

0xc320,	// (0x000180cd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc320,	// (0x000180cd) list_single_graphic_heading_pane_fp_g2

0x7a60,	// (0x0001380d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7a60,	// (0x0001380d) list_single_graphic_heading_pane_fp_g3

0x7a6c,	// (0x00013819) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7a6c,	// (0x00013819) list_single_graphic_heading_pane_fp_g4

0xc32c,	// (0x000180d9) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc32c,	// (0x000180d9) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0001b8fd) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0001b8fd) list_single_graphic_heading_pane_fp_g

0xc371,	// (0x0001811e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc371,	// (0x0001811e) list_single_graphic_heading_pane_fp_t1

0xc387,	// (0x00018134) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc387,	// (0x00018134) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5b,	// (0x0001b908) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5b,	// (0x0001b908) list_single_graphic_heading_pane_fp_t

0xc399,	// (0x00018146) list_single_cale_day_pane_fp_g1_ParamLimits

0xc399,	// (0x00018146) list_single_cale_day_pane_fp_g1

0xc3d1,	// (0x0001817e) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3d1,	// (0x0001817e) list_single_cale_day_pane_fp_g2

0xc3dd,	// (0x0001818a) list_single_cale_day_pane_fp_g3_ParamLimits

0xc3dd,	// (0x0001818a) list_single_cale_day_pane_fp_g3

0xc405,	// (0x000181b2) list_single_cale_day_pane_fp_g4_ParamLimits

0xc405,	// (0x000181b2) list_single_cale_day_pane_fp_g4

0xc429,	// (0x000181d6) list_single_cale_day_pane_fp_g5_ParamLimits

0xc429,	// (0x000181d6) list_single_cale_day_pane_fp_g5

0x0004,

0xfb60,	// (0x0001b90d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb60,	// (0x0001b90d) list_single_cale_day_pane_fp_g

0xc44d,	// (0x000181fa) list_single_cale_day_pane_fp_t1_ParamLimits

0xc44d,	// (0x000181fa) list_single_cale_day_pane_fp_t1

0xc473,	// (0x00018220) list_single_cale_day_pane_fp_t2_ParamLimits

0xc473,	// (0x00018220) list_single_cale_day_pane_fp_t2

0xc48c,	// (0x00018239) list_single_cale_day_pane_fp_t3_ParamLimits

0xc48c,	// (0x00018239) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6b,	// (0x0001b918) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6b,	// (0x0001b918) list_single_cale_day_pane_fp_t

0xc320,	// (0x000180cd) list_empty_pane_fp_g1_ParamLimits

0xc320,	// (0x000180cd) list_empty_pane_fp_g1

0xc4a5,	// (0x00018252) list_empty_pane_fp_t1

0xc4b3,	// (0x00018260) list_empty_pane_fp_t2

0x0001,

0xfb72,	// (0x0001b91f) list_empty_pane_fp_t

0xc320,	// (0x000180cd) list_single_heading_pane_fp_g1_ParamLimits

0xc320,	// (0x000180cd) list_single_heading_pane_fp_g1

0x7a60,	// (0x0001380d) list_single_heading_pane_fp_g2_ParamLimits

0x7a60,	// (0x0001380d) list_single_heading_pane_fp_g2

0x7a6c,	// (0x00013819) list_single_heading_pane_fp_g3_ParamLimits

0x7a6c,	// (0x00013819) list_single_heading_pane_fp_g3

0x0002,

0xfb77,	// (0x0001b924) list_single_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0001b924) list_single_heading_pane_fp_g

0xc4c1,	// (0x0001826e) list_single_heading_pane_fp_t1_ParamLimits

0xc4c1,	// (0x0001826e) list_single_heading_pane_fp_t1

0xc4d3,	// (0x00018280) list_single_heading_pane_fp_t2_ParamLimits

0xc4d3,	// (0x00018280) list_single_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0001b92b) list_single_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0001b92b) list_single_heading_pane_fp_t

0x7dcf,	// (0x00013b7c) aid_size_cell_fast

0x6e4f,	// (0x00012bfc) soft_indicator_pane_cp1_t1

0x7e0c,	// (0x00013bb9) cell_app_pane_cp2_ParamLimits

0x7e0c,	// (0x00013bb9) cell_app_pane_cp2

0x59fc,	// (0x000117a9) fep_hwr_candidate_drop_down_list_pane

0x5bd4,	// (0x00011981) fep_hwr_candidate_pane_g3_ParamLimits

0x5bd4,	// (0x00011981) fep_hwr_candidate_pane_g3

0x3128,	// (0x0000eed5) fep_hwr_candidate_pane_g4_ParamLimits

0x3128,	// (0x0000eed5) fep_hwr_candidate_pane_g4

0x0002,

0xfaed,	// (0x0001b89a) fep_hwr_candidate_pane_g_ParamLimits

0xfaed,	// (0x0001b89a) fep_hwr_candidate_pane_g

0xbe29,	// (0x00017bd6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe29,	// (0x00017bd6) fep_vkb_candidate_drop_down_list_pane

0xc23a,	// (0x00017fe7) fep_vkb_candidate_pane_g3

0xc242,	// (0x00017fef) fep_vkb_candidate_pane_g4

0x0002,

0xfb1a,	// (0x0001b8c7) fep_vkb_candidate_pane_g

0x5c3f,	// (0x000119ec) cell_hwr_candidate_pane_g1_ParamLimits

0x5c4d,	// (0x000119fa) cell_hwr_candidate_pane_g3_ParamLimits

0x5c4d,	// (0x000119fa) cell_hwr_candidate_pane_g3

0xdf4e,	// (0x00019cfb) cell_hwr_candidate_pane_g4_ParamLimits

0xdf4e,	// (0x00019cfb) cell_hwr_candidate_pane_g4

0x0002,

0xfb39,	// (0x0001b8e6) cell_hwr_candidate_pane_g_ParamLimits

0xfb39,	// (0x0001b8e6) cell_hwr_candidate_pane_g

0xc259,	// (0x00018006) cell_vkb_candidate_pane_g3_ParamLimits

0xc259,	// (0x00018006) cell_vkb_candidate_pane_g3

0xc274,	// (0x00018021) cell_vkb_candidate_pane_g4_ParamLimits

0xc274,	// (0x00018021) cell_vkb_candidate_pane_g4

0xc4e9,	// (0x00018296) cell_app_pane_cp2_g1_ParamLimits

0xc4e9,	// (0x00018296) cell_app_pane_cp2_g1

0xc507,	// (0x000182b4) cell_app_pane_cp2_g2_ParamLimits

0xc507,	// (0x000182b4) cell_app_pane_cp2_g2

0x0001,

0xfb83,	// (0x0001b930) cell_app_pane_cp2_g_ParamLimits

0xfb83,	// (0x0001b930) cell_app_pane_cp2_g

0xc513,	// (0x000182c0) cell_app_pane_cp2_t1_ParamLimits

0xc513,	// (0x000182c0) cell_app_pane_cp2_t1

0x7a3a,	// (0x000137e7) grid_highlight_pane_cp1_ParamLimits

0x7a3a,	// (0x000137e7) grid_highlight_pane_cp1

0x5c8c,	// (0x00011a39) cell_hwr_candidate_pane_cp1_ParamLimits

0x5c8c,	// (0x00011a39) cell_hwr_candidate_pane_cp1

0x5c3f,	// (0x000119ec) fep_hwr_candidate_drop_down_list_pane_g1

0x5cab,	// (0x00011a58) fep_hwr_candidate_drop_down_list_pane_g2

0x5cb8,	// (0x00011a65) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb88,	// (0x0001b935) fep_hwr_candidate_drop_down_list_pane_g

0x5cc5,	// (0x00011a72) fep_hwr_candidate_drop_down_list_scroll_pane

0x5cce,	// (0x00011a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5cce,	// (0x00011a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5cdb,	// (0x00011a88) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5cdb,	// (0x00011a88) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5ce8,	// (0x00011a95) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5ce8,	// (0x00011a95) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5cf5,	// (0x00011aa2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5cf5,	// (0x00011aa2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5d10,	// (0x00011abd) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5d10,	// (0x00011abd) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5d2b,	// (0x00011ad8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5d2b,	// (0x00011ad8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5d46,	// (0x00011af3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5d46,	// (0x00011af3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5d61,	// (0x00011b0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5d61,	// (0x00011b0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8f,	// (0x0001b93c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8f,	// (0x0001b93c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc525,	// (0x000182d2) cell_vkb_candidate_pane_cp1_ParamLimits

0xc525,	// (0x000182d2) cell_vkb_candidate_pane_cp1

0xbf42,	// (0x00017cef) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf42,	// (0x00017cef) fep_vkb_candidate_drop_down_list_pane_g1

0xc545,	// (0x000182f2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc545,	// (0x000182f2) fep_vkb_candidate_drop_down_list_pane_g2

0xc552,	// (0x000182ff) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc552,	// (0x000182ff) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba0,	// (0x0001b94d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba0,	// (0x0001b94d) fep_vkb_candidate_drop_down_list_pane_g

0xc55f,	// (0x0001830c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc55f,	// (0x0001830c) fep_vkb_candidate_drop_down_list_scroll_pane

0xc56c,	// (0x00018319) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc56c,	// (0x00018319) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc579,	// (0x00018326) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc579,	// (0x00018326) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc585,	// (0x00018332) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc585,	// (0x00018332) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc591,	// (0x0001833e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc591,	// (0x0001833e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5b2,	// (0x0001835f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5b2,	// (0x0001835f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5d3,	// (0x00018380) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5d3,	// (0x00018380) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc5f4,	// (0x000183a1) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc5f4,	// (0x000183a1) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc615,	// (0x000183c2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc615,	// (0x000183c2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0001b954) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0001b954) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6b66,	// (0x00012913) title_pane_g1_ParamLimits

0x6b73,	// (0x00012920) title_pane_g2_ParamLimits

0xf527,	// (0x0001b2d4) title_pane_g_ParamLimits

0x8242,	// (0x00013fef) aid_call2_pane

0x824a,	// (0x00013ff7) aid_call_pane

0x8252,	// (0x00013fff) popup_clock_analogue_window_g1

0x8252,	// (0x00013fff) popup_clock_analogue_window_g2

0x4ae0,	// (0x0001088d) popup_clock_analogue_window_g3

0x4ae9,	// (0x00010896) popup_clock_analogue_window_g4

0x38a0,	// (0x0000f64d) popup_clock_analogue_window_g5

0x0004,

0xf6cc,	// (0x0001b479) popup_clock_analogue_window_g

0x4af1,	// (0x0001089e) popup_clock_analogue_window_t1

0x4aff,	// (0x000108ac) clock_digital_number_pane_ParamLimits

0x4aff,	// (0x000108ac) clock_digital_number_pane

0x4b0b,	// (0x000108b8) clock_digital_number_pane_cp02_ParamLimits

0x4b0b,	// (0x000108b8) clock_digital_number_pane_cp02

0x4b17,	// (0x000108c4) clock_digital_number_pane_cp03_ParamLimits

0x4b17,	// (0x000108c4) clock_digital_number_pane_cp03

0x4b23,	// (0x000108d0) clock_digital_number_pane_cp04_ParamLimits

0x4b23,	// (0x000108d0) clock_digital_number_pane_cp04

0x4b2f,	// (0x000108dc) clock_digital_separator_pane_ParamLimits

0x4b2f,	// (0x000108dc) clock_digital_separator_pane

0x4b3b,	// (0x000108e8) popup_clock_digital_window_t1_ParamLimits

0x4b3b,	// (0x000108e8) popup_clock_digital_window_t1

0x38a0,	// (0x0000f64d) clock_digital_number_pane_g1

0x38a0,	// (0x0000f64d) clock_digital_number_pane_g2

0x0001,

0xf6d7,	// (0x0001b484) clock_digital_number_pane_g

0x38a0,	// (0x0000f64d) clock_digital_separator_pane_g1

0x38a0,	// (0x0000f64d) clock_digital_separator_pane_g2

0x0001,

0xf6d7,	// (0x0001b484) clock_digital_separator_pane_g

0x8c76,	// (0x00014a23) aid_fill_nsta_ParamLimits

0x8dc2,	// (0x00014b6f) indicator_nsta_pane_ParamLimits

0x8f3b,	// (0x00014ce8) popup_clock_analogue_window

0x8f3b,	// (0x00014ce8) popup_clock_digital_window

0xb657,	// (0x00017404) grid_indicator_nsta_pane_ParamLimits

0xb680,	// (0x0001742d) clock_nsta_pane_t2

0x0001,

0xfa6d,	// (0x0001b81a) clock_nsta_pane_t

0x4aa4,	// (0x00010851) aid_size_max_handle

0x4aae,	// (0x0001085b) aid_size_min_handle

0x8906,	// (0x000146b3) editor_scroll_pane

0xc630,	// (0x000183dd) ex_editor_pane

0x7d3d,	// (0x00013aea) scroll_pane_cp13

0x7482,	// (0x0001322f) scroll_pane_cp14

0x8281,	// (0x0001402e) scroll_pane_cp36

0x82ad,	// (0x0001405a) list_single_graphic_hl_pane_cp2_ParamLimits

0x82ad,	// (0x0001405a) list_single_graphic_hl_pane_cp2

0xa8e2,	// (0x0001668f) list_single_graphic_hl_pane_ParamLimits

0xa8e2,	// (0x0001668f) list_single_graphic_hl_pane

0xc638,	// (0x000183e5) aid_size_min_hl_cp1

0xc641,	// (0x000183ee) list_highlight_pane_cp34_ParamLimits

0xc641,	// (0x000183ee) list_highlight_pane_cp34

0xc652,	// (0x000183ff) list_single_graphic_hl_pane_g1_ParamLimits

0xc652,	// (0x000183ff) list_single_graphic_hl_pane_g1

0xc65f,	// (0x0001840c) list_single_graphic_hl_pane_g2_ParamLimits

0xc65f,	// (0x0001840c) list_single_graphic_hl_pane_g2

0xc65f,	// (0x0001840c) list_single_graphic_hl_pane_g3_ParamLimits

0xc65f,	// (0x0001840c) list_single_graphic_hl_pane_g3

0x884b,	// (0x000145f8) list_single_graphic_hl_pane_g4_ParamLimits

0x884b,	// (0x000145f8) list_single_graphic_hl_pane_g4

0xc66b,	// (0x00018418) list_single_graphic_hl_pane_g5_ParamLimits

0xc66b,	// (0x00018418) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0001b965) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0001b965) list_single_graphic_hl_pane_g

0x9f30,	// (0x00015cdd) list_single_graphic_hl_pane_t1_ParamLimits

0x9f30,	// (0x00015cdd) list_single_graphic_hl_pane_t1

0xc67f,	// (0x0001842c) aid_size_min_hl_cp2

0xc688,	// (0x00018435) list_highlight_pane_cp34_cp2_ParamLimits

0xc688,	// (0x00018435) list_highlight_pane_cp34_cp2

0xc652,	// (0x000183ff) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc652,	// (0x000183ff) list_single_graphic_hl_pane_g1_cp2

0xc695,	// (0x00018442) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc695,	// (0x00018442) list_single_graphic_hl_pane_g2_cp2

0xc6a1,	// (0x0001844e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6a1,	// (0x0001844e) list_single_graphic_hl_pane_g3_cp2

0xc6af,	// (0x0001845c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc6af,	// (0x0001845c) list_single_graphic_hl_pane_g4_cp2

0xc6bb,	// (0x00018468) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc6bb,	// (0x00018468) list_single_graphic_hl_pane_g5_cp2

0x4def,	// (0x00010b9c) control_pane_g4_ParamLimits

0x4def,	// (0x00010b9c) control_pane_g4

0x8c32,	// (0x000149df) bg_popup_sub_pane_cp10_ParamLimits

0xbcce,	// (0x00017a7b) list_choice_list_pane_ParamLimits

0xbcdd,	// (0x00017a8a) scroll_pane_cp23

0x6edf,	// (0x00012c8c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2c5,	// (0x00018072) list_preview_fixed_pane_ParamLimits

0xc2db,	// (0x00018088) list_preview_fixed_pane_cp_ParamLimits

0xc2db,	// (0x00018088) list_preview_fixed_pane_cp

0xc2e7,	// (0x00018094) popup_preview_fixed_window_g1_ParamLimits

0xc2e7,	// (0x00018094) popup_preview_fixed_window_g1

0xc2f3,	// (0x000180a0) popup_preview_fixed_window_g2_ParamLimits

0xc2f3,	// (0x000180a0) popup_preview_fixed_window_g2

0x0002,

0xfb40,	// (0x0001b8ed) popup_preview_fixed_window_g_ParamLimits

0xfb40,	// (0x0001b8ed) popup_preview_fixed_window_g

0x4a18,	// (0x000107c5) aid_navi_side_left_pane_ParamLimits

0x4a2d,	// (0x000107da) aid_navi_side_right_pane_ParamLimits

0x4a45,	// (0x000107f2) navi_icon_pane_stacon_ParamLimits

0x4a59,	// (0x00010806) navi_navi_pane_stacon_ParamLimits

0x4a45,	// (0x000107f2) navi_text_pane_stacon_ParamLimits

0x4630,	// (0x000103dd) main_text_info_pane

0xc6e5,	// (0x00018492) listscroll_text_info_pane

0xc6ed,	// (0x0001849a) list_text_info_pane_ParamLimits

0xc6ed,	// (0x0001849a) list_text_info_pane

0xc6fc,	// (0x000184a9) scroll_pane_cp24_ParamLimits

0xc6fc,	// (0x000184a9) scroll_pane_cp24

0xc71a,	// (0x000184c7) list_text_info_pane_t1_ParamLimits

0xc71a,	// (0x000184c7) list_text_info_pane_t1

0x4f71,	// (0x00010d1e) popup_fast_swap2_window_ParamLimits

0x4f71,	// (0x00010d1e) popup_fast_swap2_window

0xc74b,	// (0x000184f8) aid_size_cell_fast2

0x3896,	// (0x0000f643) bg_popup_window_pane_cp17

0x96c5,	// (0x00015472) heading_pane_cp2

0xc755,	// (0x00018502) listscroll_fast2_pane

0xc75d,	// (0x0001850a) grid_fast2_pane

0xc767,	// (0x00018514) listscroll_fast2_pane_g1

0xc76f,	// (0x0001851c) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0001b970) listscroll_fast2_pane_g

0x7d3d,	// (0x00013aea) scroll_pane_cp26

0xc779,	// (0x00018526) cell_fast2_pane_ParamLimits

0xc779,	// (0x00018526) cell_fast2_pane

0xc78e,	// (0x0001853b) cell_fast2_pane_g1

0xc797,	// (0x00018544) cell_fast2_pane_g2

0xc7a0,	// (0x0001854d) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0001b975) cell_fast2_pane_g

0x723f,	// (0x00012fec) grid_highlight_pane_cp9

0x4f37,	// (0x00010ce4) main_eswt_pane_ParamLimits

0x4f37,	// (0x00010ce4) main_eswt_pane

0xc711,	// (0x000184be) list_single_text_info_pane

0xc7a8,	// (0x00018555) eswt_ctrl_button_pane

0xc7a8,	// (0x00018555) eswt_ctrl_canvas_pane

0xc7b0,	// (0x0001855d) eswt_ctrl_combo_pane

0xc7a8,	// (0x00018555) eswt_ctrl_default_pane

0xc7a8,	// (0x00018555) eswt_ctrl_label_pane

0xc7b8,	// (0x00018565) eswt_ctrl_wait_pane

0xc7c0,	// (0x0001856d) eswt_shell_pane

0x3896,	// (0x0000f643) listscroll_eswt_app_pane

0xc7e0,	// (0x0001858d) popup_eswt_tasktip_window_ParamLimits

0xc7e0,	// (0x0001858d) popup_eswt_tasktip_window

0x929c,	// (0x00015049) bg_popup_window_pane_cp18

0xc7f1,	// (0x0001859e) eswt_control_pane_g1_ParamLimits

0xc7f1,	// (0x0001859e) eswt_control_pane_g1

0xc7fe,	// (0x000185ab) eswt_control_pane_g2_ParamLimits

0xc7fe,	// (0x000185ab) eswt_control_pane_g2

0xc80b,	// (0x000185b8) eswt_control_pane_g3_ParamLimits

0xc80b,	// (0x000185b8) eswt_control_pane_g3

0xc818,	// (0x000185c5) eswt_control_pane_g4_ParamLimits

0xc818,	// (0x000185c5) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0001b97c) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0001b97c) eswt_control_pane_g

0x7a3a,	// (0x000137e7) bg_button_pane_ParamLimits

0x7a3a,	// (0x000137e7) bg_button_pane

0x7254,	// (0x00013001) common_borders_pane_copy2_ParamLimits

0x7254,	// (0x00013001) common_borders_pane_copy2

0xc825,	// (0x000185d2) control_button_pane_g1_ParamLimits

0xc825,	// (0x000185d2) control_button_pane_g1

0xc831,	// (0x000185de) control_button_pane_g2_ParamLimits

0xc831,	// (0x000185de) control_button_pane_g2

0xc83d,	// (0x000185ea) control_button_pane_g3_ParamLimits

0xc83d,	// (0x000185ea) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0001b985) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0001b985) control_button_pane_g

0xc851,	// (0x000185fe) control_button_pane_t1

0xc85f,	// (0x0001860c) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0001b98c) control_button_pane_t

0x917a,	// (0x00014f27) bg_button_pane_g1

0x918a,	// (0x00014f37) bg_button_pane_g2

0x9182,	// (0x00014f2f) bg_button_pane_g3

0x919a,	// (0x00014f47) bg_button_pane_g4

0x9192,	// (0x00014f3f) bg_button_pane_g5

0x91a2,	// (0x00014f4f) bg_button_pane_g6

0x91aa,	// (0x00014f57) bg_button_pane_g7

0x91ba,	// (0x00014f67) bg_button_pane_g8

0x91b2,	// (0x00014f5f) bg_button_pane_g9

0x0008,

0xf835,	// (0x0001b5e2) bg_button_pane_g

0xbc89,	// (0x00017a36) common_borders_pane_ParamLimits

0xbc89,	// (0x00017a36) common_borders_pane

0xc7f1,	// (0x0001859e) eswt_control_pane_g1_copy1_ParamLimits

0xc7f1,	// (0x0001859e) eswt_control_pane_g1_copy1

0xc7fe,	// (0x000185ab) eswt_control_pane_g2_copy1_ParamLimits

0xc7fe,	// (0x000185ab) eswt_control_pane_g2_copy1

0xc80b,	// (0x000185b8) eswt_control_pane_g3_copy1_ParamLimits

0xc80b,	// (0x000185b8) eswt_control_pane_g3_copy1

0xc818,	// (0x000185c5) eswt_control_pane_g4_copy1_ParamLimits

0xc818,	// (0x000185c5) eswt_control_pane_g4_copy1

0xbcc4,	// (0x00017a71) bg_eswt_ctrl_canvas_pane_g1

0xbc89,	// (0x00017a36) common_borders_pane_cp2_ParamLimits

0xbc89,	// (0x00017a36) common_borders_pane_cp2

0xbc89,	// (0x00017a36) common_borders_pane_cp3_ParamLimits

0xbc89,	// (0x00017a36) common_borders_pane_cp3

0xc86d,	// (0x0001861a) separator_horizontal_pane

0xc875,	// (0x00018622) separator_vertical_pane

0xc7f1,	// (0x0001859e) eswt_control_pane_g1_copy2_ParamLimits

0xc7f1,	// (0x0001859e) eswt_control_pane_g1_copy2

0xc7fe,	// (0x000185ab) eswt_control_pane_g2_copy2_ParamLimits

0xc7fe,	// (0x000185ab) eswt_control_pane_g2_copy2

0xc80b,	// (0x000185b8) eswt_control_pane_g3_copy2_ParamLimits

0xc80b,	// (0x000185b8) eswt_control_pane_g3_copy2

0xc818,	// (0x000185c5) eswt_control_pane_g4_copy2_ParamLimits

0xc818,	// (0x000185c5) eswt_control_pane_g4_copy2

0x3896,	// (0x0000f643) common_borders_pane_cp4

0xc87e,	// (0x0001862b) separator_horizontal_pane_g1

0xc887,	// (0x00018634) separator_horizontal_pane_g2

0xc890,	// (0x0001863d) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0001b991) separator_horizontal_pane_g

0xc7f1,	// (0x0001859e) eswt_control_pane_g1_copy3_ParamLimits

0xc7f1,	// (0x0001859e) eswt_control_pane_g1_copy3

0xc7fe,	// (0x000185ab) eswt_control_pane_g2_copy3_ParamLimits

0xc7fe,	// (0x000185ab) eswt_control_pane_g2_copy3

0xc80b,	// (0x000185b8) eswt_control_pane_g3_copy3_ParamLimits

0xc80b,	// (0x000185b8) eswt_control_pane_g3_copy3

0xc818,	// (0x000185c5) eswt_control_pane_g4_copy3_ParamLimits

0xc818,	// (0x000185c5) eswt_control_pane_g4_copy3

0x3896,	// (0x0000f643) common_borders_pane_cp5

0xc899,	// (0x00018646) separator_vertical_pane_g1

0xc8a2,	// (0x0001864f) separator_vertical_pane_g2

0xc8ab,	// (0x00018658) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0001b998) separator_vertical_pane_g

0xc7f1,	// (0x0001859e) eswt_control_pane_g1_copy4_ParamLimits

0xc7f1,	// (0x0001859e) eswt_control_pane_g1_copy4

0xc7fe,	// (0x000185ab) eswt_control_pane_g2_copy4_ParamLimits

0xc7fe,	// (0x000185ab) eswt_control_pane_g2_copy4

0xc80b,	// (0x000185b8) eswt_control_pane_g3_copy4_ParamLimits

0xc80b,	// (0x000185b8) eswt_control_pane_g3_copy4

0xc818,	// (0x000185c5) eswt_control_pane_g4_copy4_ParamLimits

0xc818,	// (0x000185c5) eswt_control_pane_g4_copy4

0xc8b4,	// (0x00018661) eswt_ctrl_combo_button_pane

0xc8bc,	// (0x00018669) eswt_ctrl_input_pane

0xc8c4,	// (0x00018671) popup_choice_list_window_cp70

0xc8cc,	// (0x00018679) eswt_ctrl_input_pane_t1

0x3896,	// (0x0000f643) input_focus_pane_cp70

0xbc89,	// (0x00017a36) bg_button_pane_cp70_ParamLimits

0xbc89,	// (0x00017a36) bg_button_pane_cp70

0xc8da,	// (0x00018687) eswt_ctrl_combo_button_pane_g1

0xc8e2,	// (0x0001868f) wait_bar_pane_cp70

0x929c,	// (0x00015049) bg_popup_window_pane_cp70_ParamLimits

0x929c,	// (0x00015049) bg_popup_window_pane_cp70

0xc8ea,	// (0x00018697) popup_eswt_tasktip_window_t1

0xc900,	// (0x000186ad) wait_bar_pane_cp71_ParamLimits

0xc900,	// (0x000186ad) wait_bar_pane_cp71

0xc90c,	// (0x000186b9) grid_eswt_app_pane

0x805b,	// (0x00013e08) scroll_pane_cp70

0xc915,	// (0x000186c2) cell_eswt_app_pane_ParamLimits

0xc915,	// (0x000186c2) cell_eswt_app_pane

0xc945,	// (0x000186f2) cell_eswt_app_pane_g1_ParamLimits

0xc945,	// (0x000186f2) cell_eswt_app_pane_g1

0xc974,	// (0x00018721) cell_eswt_app_pane_g2_ParamLimits

0xc974,	// (0x00018721) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0001b99f) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0001b99f) cell_eswt_app_pane_g

0xc99d,	// (0x0001874a) cell_eswt_app_pane_t1_ParamLimits

0xc99d,	// (0x0001874a) cell_eswt_app_pane_t1

0xc9cf,	// (0x0001877c) grid_highlight_pane_cp70_ParamLimits

0xc9cf,	// (0x0001877c) grid_highlight_pane_cp70

0x87da,	// (0x00014587) set_content_pane_g1

0x8bb1,	// (0x0001495e) status_small_volume_pane

0x5d7c,	// (0x00011b29) status_small_volume_pane_g1

0x5d84,	// (0x00011b31) volume_small2_pane

0x5d8d,	// (0x00011b3a) volume_small2_pane_g1

0x5d96,	// (0x00011b43) volume_small2_pane_g2

0x5d9f,	// (0x00011b4c) volume_small2_pane_g3

0x5da8,	// (0x00011b55) volume_small2_pane_g4

0x5db1,	// (0x00011b5e) volume_small2_pane_g5

0x5dba,	// (0x00011b67) volume_small2_pane_g6

0x5dc3,	// (0x00011b70) volume_small2_pane_g7

0x5dcc,	// (0x00011b79) volume_small2_pane_g8

0x5dd5,	// (0x00011b82) volume_small2_pane_g9

0x5dde,	// (0x00011b8b) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0001b9a4) volume_small2_pane_g

0xc08a,	// (0x00017e37) fep_vkb_top_text_pane_g1_ParamLimits

0xc0a5,	// (0x00017e52) fep_vkb_top_text_pane_t1_ParamLimits

0xc2ff,	// (0x000180ac) popup_preview_fixed_window_g3_ParamLimits

0xc2ff,	// (0x000180ac) popup_preview_fixed_window_g3

0x5422,	// (0x000111cf) popup_toolbar_trans_pane

0xa63f,	// (0x000163ec) aid_height_set_list_ParamLimits

0xa650,	// (0x000163fd) aid_size_parent_ParamLimits

0x8c32,	// (0x000149df) list_highlight_pane_cp2_ParamLimits

0x87da,	// (0x00014587) set_content_pane_g1_ParamLimits

0xa900,	// (0x000166ad) list_single_image_pane_ParamLimits

0xa900,	// (0x000166ad) list_single_image_pane

0xc9db,	// (0x00018788) aid_size_cell_image_ParamLimits

0xc9db,	// (0x00018788) aid_size_cell_image

0xc9e8,	// (0x00018795) grid_single_image_pane_ParamLimits

0xc9e8,	// (0x00018795) grid_single_image_pane

0xadc3,	// (0x00016b70) list_single_image_pane_g1_ParamLimits

0xadc3,	// (0x00016b70) list_single_image_pane_g1

0xc9f4,	// (0x000187a1) list_single_image_pane_g2_ParamLimits

0xc9f4,	// (0x000187a1) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0001b9b9) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0001b9b9) list_single_image_pane_g

0xca08,	// (0x000187b5) list_single_image_pane_t1_ParamLimits

0xca08,	// (0x000187b5) list_single_image_pane_t1

0xca1e,	// (0x000187cb) cell_image_list_pane_ParamLimits

0xca1e,	// (0x000187cb) cell_image_list_pane

0xca32,	// (0x000187df) cell_image_list_pane_g1

0xca3b,	// (0x000187e8) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0001b9be) cell_image_list_pane_g

0xca44,	// (0x000187f1) aid_size_cell_tb_trans_pane

0x7a3a,	// (0x000137e7) bg_tb_trans_pane

0xca56,	// (0x00018803) grid_tb_trans_pane

0x917a,	// (0x00014f27) bg_tb_trans_pane_g1

0x918a,	// (0x00014f37) bg_tb_trans_pane_g2

0x9182,	// (0x00014f2f) bg_tb_trans_pane_g3

0x919a,	// (0x00014f47) bg_tb_trans_pane_g4

0x9192,	// (0x00014f3f) bg_tb_trans_pane_g5

0x91ba,	// (0x00014f67) bg_tb_trans_pane_g6

0x91b2,	// (0x00014f5f) bg_tb_trans_pane_g7

0x91a2,	// (0x00014f4f) bg_tb_trans_pane_g8

0x91aa,	// (0x00014f57) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0001b9c3) bg_tb_trans_pane_g

0xca6a,	// (0x00018817) cell_toolbar_trans_pane_ParamLimits

0xca6a,	// (0x00018817) cell_toolbar_trans_pane

0xbcc4,	// (0x00017a71) cell_toolbar_trans_pane_g1

0xb851,	// (0x000175fe) list_form2_midp_pane_t1

0xb85f,	// (0x0001760c) list_form2_midp_pane_t2

0x0001,

0xfab3,	// (0x0001b860) list_form2_midp_pane_t

0xb86d,	// (0x0001761a) scroll_pane_cp51_ParamLimits

0xba78,	// (0x00017825) form2_midp_wait_pane_g1

0xba81,	// (0x0001782e) form2_midp_wait_pane_g2

0xba8a,	// (0x00017837) form2_midp_wait_pane_g3

0x0002,

0xfac8,	// (0x0001b875) form2_midp_wait_pane_g

0x6c3c,	// (0x000129e9) list_highlight_pane_cp21_ParamLimits

0xbad6,	// (0x00017883) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbae5,	// (0x00017892) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa886,	// (0x00016633) list_single_2graphic_im_pane_ParamLimits

0xa886,	// (0x00016633) list_single_2graphic_im_pane

0xca90,	// (0x0001883d) list_single_2graphic_im_pane_g1_ParamLimits

0xca90,	// (0x0001883d) list_single_2graphic_im_pane_g1

0xcaa1,	// (0x0001884e) list_single_2graphic_im_pane_g2_ParamLimits

0xcaa1,	// (0x0001884e) list_single_2graphic_im_pane_g2

0xcaad,	// (0x0001885a) list_single_2graphic_im_pane_g3_ParamLimits

0xcaad,	// (0x0001885a) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0001b9d6) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0001b9d6) list_single_2graphic_im_pane_g

0xcacd,	// (0x0001887a) list_single_2graphic_im_pane_t1_ParamLimits

0xcacd,	// (0x0001887a) list_single_2graphic_im_pane_t1

0xc30b,	// (0x000180b8) list_single_graphic_2heading_pane_fp_ParamLimits

0xc30b,	// (0x000180b8) list_single_graphic_2heading_pane_fp

0xc34f,	// (0x000180fc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc34f,	// (0x000180fc) list_single_graphic_2heading_pane_fp_g1

0xc320,	// (0x000180cd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc320,	// (0x000180cd) list_single_graphic_2heading_pane_fp_g2

0x7a60,	// (0x0001380d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7a60,	// (0x0001380d) list_single_graphic_2heading_pane_fp_g3

0x7a6c,	// (0x00013819) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7a6c,	// (0x00013819) list_single_graphic_2heading_pane_fp_g4

0xc32c,	// (0x000180d9) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc32c,	// (0x000180d9) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0001b8fd) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0001b8fd) list_single_graphic_2heading_pane_fp_g

0xcafe,	// (0x000188ab) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcafe,	// (0x000188ab) list_single_graphic_2heading_pane_fp_t1

0xc387,	// (0x00018134) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc387,	// (0x00018134) list_single_graphic_2heading_pane_fp_t2

0xcb14,	// (0x000188c1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb14,	// (0x000188c1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0001b9df) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0001b9df) list_single_graphic_2heading_pane_fp_t

0xbd50,	// (0x00017afd) fep_hwr_write_pane_g5_ParamLimits

0xbd50,	// (0x00017afd) fep_hwr_write_pane_g5

0xbd5c,	// (0x00017b09) fep_hwr_write_pane_g6_ParamLimits

0xbd5c,	// (0x00017b09) fep_hwr_write_pane_g6

0xc7c0,	// (0x0001856d) eswt_shell_pane_ParamLimits

0x929c,	// (0x00015049) bg_popup_window_pane_cp18_ParamLimits

0x96c5,	// (0x00015472) heading_pane_cp70

0xc8ea,	// (0x00018697) popup_eswt_tasktip_window_t1_ParamLimits

0x8ccb,	// (0x00014a78) aid_touch_tab_arrow_left

0x8cda,	// (0x00014a87) aid_touch_tab_arrow_right

0x6b84,	// (0x00012931) title_pane_g3_ParamLimits

0x6b84,	// (0x00012931) title_pane_g3

0x7919,	// (0x000136c6) set_value_pane_g1

0x5422,	// (0x000111cf) popup_toolbar_trans_pane_ParamLimits

0xca44,	// (0x000187f1) aid_size_cell_tb_trans_pane_ParamLimits

0x7a3a,	// (0x000137e7) bg_tb_trans_pane_ParamLimits

0xca56,	// (0x00018803) grid_tb_trans_pane_ParamLimits

0x6edf,	// (0x00012c8c) cont_note_pane_ParamLimits

0x6edf,	// (0x00012c8c) cont_note_pane

0x7254,	// (0x00013001) cont_snote2_single_text_pane_ParamLimits

0x7254,	// (0x00013001) cont_snote2_single_text_pane

0x7254,	// (0x00013001) cont_snote2_single_graphic_pane_ParamLimits

0x7254,	// (0x00013001) cont_snote2_single_graphic_pane

0x98f4,	// (0x000156a1) cont_note_wait_pane_ParamLimits

0x98f4,	// (0x000156a1) cont_note_wait_pane

0x98f4,	// (0x000156a1) cont_note_image_pane_ParamLimits

0x98f4,	// (0x000156a1) cont_note_image_pane

0xcb2a,	// (0x000188d7) popup_note2_window_g1_ParamLimits

0xcb2a,	// (0x000188d7) popup_note2_window_g1

0xcb5b,	// (0x00018908) popup_note2_window_t1_ParamLimits

0xcb5b,	// (0x00018908) popup_note2_window_t1

0xcba0,	// (0x0001894d) popup_note2_window_t2_ParamLimits

0xcba0,	// (0x0001894d) popup_note2_window_t2

0xcbe5,	// (0x00018992) popup_note2_window_t3_ParamLimits

0xcbe5,	// (0x00018992) popup_note2_window_t3

0xcc2a,	// (0x000189d7) popup_note2_window_t4_ParamLimits

0xcc2a,	// (0x000189d7) popup_note2_window_t4

0x6f63,	// (0x00012d10) popup_note2_window_t5_ParamLimits

0x6f63,	// (0x00012d10) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0001b9eb) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0001b9eb) popup_note2_window_t

0xcc59,	// (0x00018a06) popup_note2_image_window_g1_ParamLimits

0xcc59,	// (0x00018a06) popup_note2_image_window_g1

0xcc65,	// (0x00018a12) popup_note2_image_window_g2_ParamLimits

0xcc65,	// (0x00018a12) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0001b9f6) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0001b9f6) popup_note2_image_window_g

0xcc77,	// (0x00018a24) popup_note2_image_window_t1_ParamLimits

0xcc77,	// (0x00018a24) popup_note2_image_window_t1

0xcc8f,	// (0x00018a3c) popup_note2_image_window_t2_ParamLimits

0xcc8f,	// (0x00018a3c) popup_note2_image_window_t2

0xcca7,	// (0x00018a54) popup_note2_image_window_t3_ParamLimits

0xcca7,	// (0x00018a54) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0001b9fb) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0001b9fb) popup_note2_image_window_t

0x9902,	// (0x000156af) popup_note2_wait_window_g1_ParamLimits

0x9902,	// (0x000156af) popup_note2_wait_window_g1

0xccc3,	// (0x00018a70) popup_note2_wait_window_g2_ParamLimits

0xccc3,	// (0x00018a70) popup_note2_wait_window_g2

0x991a,	// (0x000156c7) popup_note2_wait_window_g3_ParamLimits

0x991a,	// (0x000156c7) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x0001ba02) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x0001ba02) popup_note2_wait_window_g

0xcccf,	// (0x00018a7c) popup_note2_wait_window_t1_ParamLimits

0xcccf,	// (0x00018a7c) popup_note2_wait_window_t1

0xcced,	// (0x00018a9a) popup_note2_wait_window_t2_ParamLimits

0xcced,	// (0x00018a9a) popup_note2_wait_window_t2

0xcd0b,	// (0x00018ab8) popup_note2_wait_window_t3_ParamLimits

0xcd0b,	// (0x00018ab8) popup_note2_wait_window_t3

0xcd1d,	// (0x00018aca) popup_note2_wait_window_t4_ParamLimits

0xcd1d,	// (0x00018aca) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x0001ba09) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x0001ba09) popup_note2_wait_window_t

0xcd2f,	// (0x00018adc) wait_bar2_pane_ParamLimits

0xcd2f,	// (0x00018adc) wait_bar2_pane

0xcd47,	// (0x00018af4) popup_snote2_single_text_window_g1_ParamLimits

0xcd47,	// (0x00018af4) popup_snote2_single_text_window_g1

0xcd6f,	// (0x00018b1c) popup_snote2_single_text_window_t1_ParamLimits

0xcd6f,	// (0x00018b1c) popup_snote2_single_text_window_t1

0xcdbb,	// (0x00018b68) popup_snote2_single_text_window_t2_ParamLimits

0xcdbb,	// (0x00018b68) popup_snote2_single_text_window_t2

0xce07,	// (0x00018bb4) popup_snote2_single_text_window_t3_ParamLimits

0xce07,	// (0x00018bb4) popup_snote2_single_text_window_t3

0xce48,	// (0x00018bf5) popup_snote2_single_text_window_t4_ParamLimits

0xce48,	// (0x00018bf5) popup_snote2_single_text_window_t4

0xce7e,	// (0x00018c2b) popup_snote2_single_text_window_t5_ParamLimits

0xce7e,	// (0x00018c2b) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x0001ba12) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x0001ba12) popup_snote2_single_text_window_t

0xcea9,	// (0x00018c56) popup_snote2_single_graphic_window_g1_ParamLimits

0xcea9,	// (0x00018c56) popup_snote2_single_graphic_window_g1

0xced1,	// (0x00018c7e) popup_snote2_single_graphic_window_g2_ParamLimits

0xced1,	// (0x00018c7e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x0001ba1d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x0001ba1d) popup_snote2_single_graphic_window_g

0xcef9,	// (0x00018ca6) popup_snote2_single_graphic_window_t1_ParamLimits

0xcef9,	// (0x00018ca6) popup_snote2_single_graphic_window_t1

0xcf45,	// (0x00018cf2) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf45,	// (0x00018cf2) popup_snote2_single_graphic_window_t2

0xce07,	// (0x00018bb4) popup_snote2_single_graphic_window_t3_ParamLimits

0xce07,	// (0x00018bb4) popup_snote2_single_graphic_window_t3

0xce48,	// (0x00018bf5) popup_snote2_single_graphic_window_t4_ParamLimits

0xce48,	// (0x00018bf5) popup_snote2_single_graphic_window_t4

0xce7e,	// (0x00018c2b) popup_snote2_single_graphic_window_t5_ParamLimits

0xce7e,	// (0x00018c2b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x0001ba22) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x0001ba22) popup_snote2_single_graphic_window_t

0xb72e,	// (0x000174db) clock_nsta_pane_cp2_t1

0xb72e,	// (0x000174db) clock_nsta_pane_cp2_t2

0x0001,

0xfa89,	// (0x0001b836) clock_nsta_pane_cp2_t

0x7a54,	// (0x00013801) form_field_data_wide_pane_g1_ParamLimits

0x7a60,	// (0x0001380d) form_field_data_wide_pane_g2_ParamLimits

0x7a60,	// (0x0001380d) form_field_data_wide_pane_g2

0x7a6c,	// (0x00013819) form_field_data_wide_pane_g3_ParamLimits

0x7a6c,	// (0x00013819) form_field_data_wide_pane_g3

0x0002,

0xf64f,	// (0x0001b3fc) form_field_data_wide_pane_g_ParamLimits

0xf64f,	// (0x0001b3fc) form_field_data_wide_pane_g

0xb60a,	// (0x000173b7) grid_touch_3_pane_ParamLimits

0xb60a,	// (0x000173b7) grid_touch_3_pane

0xcf91,	// (0x00018d3e) cell_touch_3_pane_ParamLimits

0xcf91,	// (0x00018d3e) cell_touch_3_pane

0xbcc4,	// (0x00017a71) cell_touch_3_pane_g1

0xbcc4,	// (0x00017a71) cell_touch_3_pane_g2

0x0001,

0xfb0e,	// (0x0001b8bb) cell_touch_3_pane_g

0x6fbb,	// (0x00012d68) cont_query_data_pane

0x6fc3,	// (0x00012d70) cont_query_data_pane_cp1

0xcfbf,	// (0x00018d6c) button_value_adjust_pane_cp7

0xcfc7,	// (0x00018d74) query_popup_pane_cp3

0x835b,	// (0x00014108) bg_popup_sub_pane_cp22_ParamLimits

0x4b5a,	// (0x00010907) navi_navi_volume_pane_cp2

0x4b75,	// (0x00010922) popup_side_volume_key_window_g2

0x4b84,	// (0x00010931) popup_side_volume_key_window_g3

0x0002,

0xf6e5,	// (0x0001b492) popup_side_volume_key_window_g

0x4ba1,	// (0x0001094e) popup_side_volume_key_window_t2

0x0001,

0xf6ec,	// (0x0001b499) popup_side_volume_key_window_t

0x86a4,	// (0x00014451) popup_side_volume_key_window_ParamLimits

0x764f,	// (0x000133fc) list_double_graphic_pane_g4_ParamLimits

0x764f,	// (0x000133fc) list_double_graphic_pane_g4

0xa8c3,	// (0x00016670) list_single_2heading_msg_pane_ParamLimits

0xa8c3,	// (0x00016670) list_single_2heading_msg_pane

0xcff6,	// (0x00018da3) list_single_2heading_msg_pane_g1_ParamLimits

0xcff6,	// (0x00018da3) list_single_2heading_msg_pane_g1

0xd002,	// (0x00018daf) list_single_2heading_msg_pane_g2_ParamLimits

0xd002,	// (0x00018daf) list_single_2heading_msg_pane_g2

0xd00e,	// (0x00018dbb) list_single_2heading_msg_pane_g3_ParamLimits

0xd00e,	// (0x00018dbb) list_single_2heading_msg_pane_g3

0xd01a,	// (0x00018dc7) list_single_2heading_msg_pane_g4_ParamLimits

0xd01a,	// (0x00018dc7) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x0001ba2d) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x0001ba2d) list_single_2heading_msg_pane_g

0xd032,	// (0x00018ddf) list_single_2heading_msg_pane_t1_ParamLimits

0xd032,	// (0x00018ddf) list_single_2heading_msg_pane_t1

0xd05a,	// (0x00018e07) list_single_2heading_msg_pane_t2_ParamLimits

0xd05a,	// (0x00018e07) list_single_2heading_msg_pane_t2

0xd089,	// (0x00018e36) list_single_2heading_msg_pane_t3_ParamLimits

0xd089,	// (0x00018e36) list_single_2heading_msg_pane_t3

0xd0c2,	// (0x00018e6f) list_single_2heading_msg_pane_t4_ParamLimits

0xd0c2,	// (0x00018e6f) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x0001ba36) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x0001ba36) list_single_2heading_msg_pane_t

0x6b90,	// (0x0001293d) title_pane_g4_ParamLimits

0x6b90,	// (0x0001293d) title_pane_g4

0x4969,	// (0x00010716) title_pane_stacon_g3_ParamLimits

0x4969,	// (0x00010716) title_pane_stacon_g3

0xcac1,	// (0x0001886e) list_single_2graphic_im_pane_g4_ParamLimits

0xcac1,	// (0x0001886e) list_single_2graphic_im_pane_g4

0xa353,	// (0x00016100) popup_side_volume_key_window_cp

0xac4f,	// (0x000169fc) main_idle_act2_pane_t1

0x5580,	// (0x0001132d) toolbar_button_pane_g10

0x744c,	// (0x000131f9) popup_toolbar_window_cp1

0xb71f,	// (0x000174cc) clock_nsta_pane_cp_t1

0xb71f,	// (0x000174cc) clock_nsta_pane_cp_t2

0x0001,

0xfa84,	// (0x0001b831) clock_nsta_pane_cp_t

0x4b5a,	// (0x00010907) navi_navi_volume_pane_cp2_ParamLimits

0x4b69,	// (0x00010916) popup_side_volume_key_window_g1_ParamLimits

0x4b75,	// (0x00010922) popup_side_volume_key_window_g2_ParamLimits

0x4b84,	// (0x00010931) popup_side_volume_key_window_g3_ParamLimits

0xf6e5,	// (0x0001b492) popup_side_volume_key_window_g_ParamLimits

0x59e8,	// (0x00011795) fep_hwr_aid_pane

0x5a8f,	// (0x0001183c) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd20,	// (0x00017acd) fep_hwr_top_pane_g1_ParamLimits

0xbd32,	// (0x00017adf) fep_hwr_top_pane_g2_ParamLimits

0x5aaf,	// (0x0001185c) fep_hwr_top_pane_g3_ParamLimits

0xfad9,	// (0x0001b886) fep_hwr_top_pane_g_ParamLimits

0x5ac4,	// (0x00011871) fep_hwr_top_text_pane_ParamLimits

0xa116,	// (0x00015ec3) aid_touch_tab_arrow_arrow_2

0xa11f,	// (0x00015ecc) aid_touch_tab_arrow_left_2

0x59fc,	// (0x000117a9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5a33,	// (0x000117e0) fep_hwr_prediction_pane

0xbe92,	// (0x00017c3f) fep_vkb_prediction_pane

0xbf96,	// (0x00017d43) fep_vkb_side_pane_g3_ParamLimits

0xbf96,	// (0x00017d43) fep_vkb_side_pane_g3

0x5c3f,	// (0x000119ec) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5cab,	// (0x00011a58) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5cb8,	// (0x00011a65) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb88,	// (0x0001b935) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5de7,	// (0x00011b94) fep_hwr_prediction_pane_g1

0x5df1,	// (0x00011b9e) fep_hwr_prediction_pane_g2

0x5df9,	// (0x00011ba6) fep_hwr_prediction_pane_g3

0x5e01,	// (0x00011bae) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x0001ba3f) fep_hwr_prediction_pane_g

0xd0e7,	// (0x00018e94) fep_vkb_prediction_pane_g1

0xd0f1,	// (0x00018e9e) fep_vkb_prediction_pane_g2

0xd0f9,	// (0x00018ea6) fep_vkb_prediction_pane_g3

0xd101,	// (0x00018eae) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x0001ba48) fep_vkb_prediction_pane_g

0x5868,	// (0x00011615) slider_set_pane_g3

0x587c,	// (0x00011629) slider_set_pane_g4

0x5894,	// (0x00011641) slider_set_pane_g5

0x5868,	// (0x00011615) slider_set_pane_g6

0x58aa,	// (0x00011657) slider_set_pane_g7

0xa7b5,	// (0x00016562) slider_form_pane_g3

0xa7be,	// (0x0001656b) slider_form_pane_g4

0xa7c6,	// (0x00016573) slider_form_pane_g5

0xa7b5,	// (0x00016562) slider_form_pane_g6

0xa7ce,	// (0x0001657b) slider_form_pane_g7

0xaf4c,	// (0x00016cf9) slider_set_pane_vc_g3

0xaf55,	// (0x00016d02) slider_set_pane_vc_g4

0xaf5e,	// (0x00016d0b) slider_set_pane_vc_g5

0xaf4c,	// (0x00016cf9) slider_set_pane_vc_g6

0xaf67,	// (0x00016d14) slider_set_pane_vc_g7

0xb3dd,	// (0x0001718a) slider_form_pane_vc_g1

0xb3e6,	// (0x00017193) slider_form_pane_vc_g2

0xb3ef,	// (0x0001719c) slider_form_pane_vc_g3

0xb3dd,	// (0x0001718a) slider_form_pane_vc_g4

0xb3f8,	// (0x000171a5) slider_form_pane_vc_g5

0x0004,

0xfa56,	// (0x0001b803) slider_form_pane_vc_g

0x4630,	// (0x000103dd) main_idle_act3_pane

0xd109,	// (0x00018eb6) ai3_links_pane

0xd112,	// (0x00018ebf) popup_ai3_data_window_ParamLimits

0xd112,	// (0x00018ebf) popup_ai3_data_window

0x3896,	// (0x0000f643) grid_ai3_links_pane

0xd12c,	// (0x00018ed9) cell_ai3_links_pane_ParamLimits

0xd12c,	// (0x00018ed9) cell_ai3_links_pane

0xd144,	// (0x00018ef1) bg_popup_sub_pane_cp11

0xd151,	// (0x00018efe) cell_ai3_links_pane_g1

0x3896,	// (0x0000f643) bg_popup_sub_pane_cp12

0xd176,	// (0x00018f23) heading_ai3_data_pane

0xd17e,	// (0x00018f2b) list_ai3_gene_pane

0xd18a,	// (0x00018f37) popup_ai3_data_window_g1

0xd192,	// (0x00018f3f) heading_ai3_data_pane_g1

0xd19a,	// (0x00018f47) heading_ai3_data_pane_t1

0xd1a8,	// (0x00018f55) list_double_ai3_gene_pane_ParamLimits

0xd1a8,	// (0x00018f55) list_double_ai3_gene_pane

0xd1b5,	// (0x00018f62) list_single_ai3_gene_pane_ParamLimits

0xd1b5,	// (0x00018f62) list_single_ai3_gene_pane

0xbc89,	// (0x00017a36) list_highlight_pane_cp7_ParamLimits

0xbc89,	// (0x00017a36) list_highlight_pane_cp7

0xd1c2,	// (0x00018f6f) list_single_a13_gene_pane_t1_ParamLimits

0xd1c2,	// (0x00018f6f) list_single_a13_gene_pane_t1

0xd1d9,	// (0x00018f86) list_single_ai3_gene_pane_g1

0xd1e2,	// (0x00018f8f) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x0001ba51) list_single_ai3_gene_pane_g

0xd1ea,	// (0x00018f97) list_double_ai3_gene_pane_g1_ParamLimits

0xd1ea,	// (0x00018f97) list_double_ai3_gene_pane_g1

0xd1f6,	// (0x00018fa3) list_double_ai3_gene_pane_t1_ParamLimits

0xd1f6,	// (0x00018fa3) list_double_ai3_gene_pane_t1

0xd212,	// (0x00018fbf) list_double_ai3_gene_pane_t2_ParamLimits

0xd212,	// (0x00018fbf) list_double_ai3_gene_pane_t2

0xd228,	// (0x00018fd5) list_double_ai3_gene_pane_t3_ParamLimits

0xd228,	// (0x00018fd5) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x0001ba56) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x0001ba56) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcfd8,	// (0x00018d85) aid_size_min_col_2

0xcfe2,	// (0x00018d8f) aid_size_min_msg_ParamLimits

0xcfe2,	// (0x00018d8f) aid_size_min_msg

0xc096,	// (0x00017e43) fep_vkb_top_text_pane_g2_ParamLimits

0xc096,	// (0x00017e43) fep_vkb_top_text_pane_g2

0x0001,

0xfb09,	// (0x0001b8b6) fep_vkb_top_text_pane_g_ParamLimits

0xfb09,	// (0x0001b8b6) fep_vkb_top_text_pane_g

0x4630,	// (0x000103dd) main_hc_apps_shell_pane

0xd245,	// (0x00018ff2) grid_hc_apps_pane_ParamLimits

0xd245,	// (0x00018ff2) grid_hc_apps_pane

0xd257,	// (0x00019004) list_hc_apps_pane

0xd25f,	// (0x0001900c) scroll_pane_cp37_ParamLimits

0xd25f,	// (0x0001900c) scroll_pane_cp37

0xd26b,	// (0x00019018) cell_hc_apps_pane_ParamLimits

0xd26b,	// (0x00019018) cell_hc_apps_pane

0xd319,	// (0x000190c6) cell_hc_apps_pane_g1_ParamLimits

0xd319,	// (0x000190c6) cell_hc_apps_pane_g1

0xd349,	// (0x000190f6) cell_hc_apps_pane_g2_ParamLimits

0xd349,	// (0x000190f6) cell_hc_apps_pane_g2

0xd365,	// (0x00019112) cell_hc_apps_pane_g3_ParamLimits

0xd365,	// (0x00019112) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x0001ba5d) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x0001ba5d) cell_hc_apps_pane_g

0xd387,	// (0x00019134) cell_hc_apps_pane_t1_ParamLimits

0xd387,	// (0x00019134) cell_hc_apps_pane_t1

0x6edf,	// (0x00012c8c) grid_highlight_pane_cp10_ParamLimits

0x6edf,	// (0x00012c8c) grid_highlight_pane_cp10

0xd3c7,	// (0x00019174) list_single_hc_apps_pane_ParamLimits

0xd3c7,	// (0x00019174) list_single_hc_apps_pane

0xd423,	// (0x000191d0) list_single_hc_apps_pane_g1

0xd43c,	// (0x000191e9) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x0001ba64) list_single_hc_apps_pane_g

0xd455,	// (0x00019202) list_single_hc_apps_pane_g2_copy1

0xd471,	// (0x0001921e) list_single_hc_apps_pane_t1

0x6c3c,	// (0x000129e9) bg_set_opt_pane_cp_ParamLimits

0x4891,	// (0x0001063e) setting_slider_pane_t1_ParamLimits

0x48aa,	// (0x00010657) setting_slider_pane_t2_ParamLimits

0x48c4,	// (0x00010671) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0001b2e4) setting_slider_pane_t_ParamLimits

0x48dc,	// (0x00010689) slider_set_pane_ParamLimits

0x4e03,	// (0x00010bb0) control_pane_g5_ParamLimits

0x4e03,	// (0x00010bb0) control_pane_g5

0xa604,	// (0x000163b1) slider_set_pane_g1_ParamLimits

0x585c,	// (0x00011609) slider_set_pane_g2_ParamLimits

0x5868,	// (0x00011615) slider_set_pane_g3_ParamLimits

0x587c,	// (0x00011629) slider_set_pane_g4_ParamLimits

0x5894,	// (0x00011641) slider_set_pane_g5_ParamLimits

0x5868,	// (0x00011615) slider_set_pane_g6_ParamLimits

0x58aa,	// (0x00011657) slider_set_pane_g7_ParamLimits

0xf933,	// (0x0001b6e0) slider_set_pane_g_ParamLimits

0x8785,	// (0x00014532) navi_icon_text_pane_ParamLimits

0x8c8c,	// (0x00014a39) aid_fill_nsta_2_ParamLimits

0x8ccb,	// (0x00014a78) aid_touch_tab_arrow_left_ParamLimits

0x8cda,	// (0x00014a87) aid_touch_tab_arrow_right_ParamLimits

0x8d47,	// (0x00014af4) clock_nsta_pane_ParamLimits

0xa0f8,	// (0x00015ea5) navi_icon_pane_g1_ParamLimits

0xa104,	// (0x00015eb1) navi_text_pane_t1_ParamLimits

0xb82b,	// (0x000175d8) navi_icon_text_pane_g1_ParamLimits

0xb837,	// (0x000175e4) navi_icon_text_pane_t1_ParamLimits

0xd423,	// (0x000191d0) list_single_hc_apps_pane_g1_ParamLimits

0xd43c,	// (0x000191e9) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x0001ba64) list_single_hc_apps_pane_g_ParamLimits

0xd455,	// (0x00019202) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd471,	// (0x0001921e) list_single_hc_apps_pane_t1_ParamLimits

0x479b,	// (0x00010548) popup_toolbar2_fixed_window_ParamLimits

0x479b,	// (0x00010548) popup_toolbar2_fixed_window

0x5418,	// (0x000111c5) popup_toolbar2_float_window

0x3896,	// (0x0000f643) bg_popup_sub_pane_cp27

0xd49f,	// (0x0001924c) grid_toolbar2_float_pane

0x3896,	// (0x0000f643) bg_popup_sub_pane_cp26

0xd49f,	// (0x0001924c) grid_toolbar2_fixed_pane

0xd4a7,	// (0x00019254) cell_toolbar2_fixed_pane_ParamLimits

0xd4a7,	// (0x00019254) cell_toolbar2_fixed_pane

0xd4b7,	// (0x00019264) cell_toolbar2_fixed_pane_g1

0xd4c0,	// (0x0001926d) toolbar2_fixed_button_pane

0x917a,	// (0x00014f27) toolbar2_fixed_button_pane_g1

0x918a,	// (0x00014f37) toolbar2_fixed_button_pane_g2

0x9182,	// (0x00014f2f) toolbar2_fixed_button_pane_g3

0x919a,	// (0x00014f47) toolbar2_fixed_button_pane_g4

0x9192,	// (0x00014f3f) toolbar2_fixed_button_pane_g5

0x91a2,	// (0x00014f4f) toolbar2_fixed_button_pane_g6

0x91aa,	// (0x00014f57) toolbar2_fixed_button_pane_g7

0x91ba,	// (0x00014f67) toolbar2_fixed_button_pane_g8

0x91b2,	// (0x00014f5f) toolbar2_fixed_button_pane_g9

0x0008,

0xf835,	// (0x0001b5e2) toolbar2_fixed_button_pane_g

0xd4c8,	// (0x00019275) cell_toolbar2_float_pane_ParamLimits

0xd4c8,	// (0x00019275) cell_toolbar2_float_pane

0xd4d9,	// (0x00019286) cell_toolbar2_float_pane_g1

0xd4c0,	// (0x0001926d) toolbar2_fixed_button_pane_cp

0xbdf2,	// (0x00017b9f) fep_vkb_accented_list_pane_ParamLimits

0xbdf2,	// (0x00017b9f) fep_vkb_accented_list_pane

0x5c1f,	// (0x000119cc) bg_popup_fep_shadow_pane_g9

0x8906,	// (0x000146b3) bg_popup_fep_shadow_pane_cp3

0x7d24,	// (0x00013ad1) list_accented_list_pane

0xd4e2,	// (0x0001928f) list_single_accented_list_pane_ParamLimits

0xd4e2,	// (0x0001928f) list_single_accented_list_pane

0x8906,	// (0x000146b3) list_highlight_pane_cp10

0xd4f3,	// (0x000192a0) list_single_accented_list_pane_t1

0x5368,	// (0x00011115) popup_slider_window_ParamLimits

0x5368,	// (0x00011115) popup_slider_window

0xcfcf,	// (0x00018d7c) aid_indentation_list_msg

0xd5b7,	// (0x00019364) bg_popup_window_pane_cp19

0xd61f,	// (0x000193cc) popup_slider_window_g1

0xd63b,	// (0x000193e8) popup_slider_window_g2

0xd657,	// (0x00019404) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x0001ba69) popup_slider_window_g

0xd6bd,	// (0x0001946a) popup_slider_window_t1

0xd731,	// (0x000194de) small_volume_slider_vertical_pane

0xbcc4,	// (0x00017a71) small_volume_slider_vertical_pane_g1

0xbcc4,	// (0x00017a71) small_volume_slider_vertical_pane_g2

0xd74d,	// (0x000194fa) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x0001ba7b) small_volume_slider_vertical_pane_g

0x454d,	// (0x000102fa) area_side_right_pane_ParamLimits

0x454d,	// (0x000102fa) area_side_right_pane

0x5e09,	// (0x00011bb6) aid_size_side_button_ParamLimits

0x5e09,	// (0x00011bb6) aid_size_side_button

0x5e1d,	// (0x00011bca) grid_sctrl_middle_pane_ParamLimits

0x5e1d,	// (0x00011bca) grid_sctrl_middle_pane

0x5e3c,	// (0x00011be9) sctrl_sk_bottom_pane

0x5e4d,	// (0x00011bfa) sctrl_sk_top_pane

0x5e5f,	// (0x00011c0c) aid_touch_sctrl_top

0x5e6c,	// (0x00011c19) bg_sctrl_sk_pane_ParamLimits

0x5e6c,	// (0x00011c19) bg_sctrl_sk_pane

0x5e7a,	// (0x00011c27) sctrl_sk_top_pane_g1

0x5e87,	// (0x00011c34) sctrl_sk_top_pane_t1

0x5e5f,	// (0x00011c0c) aid_touch_sctrl_bottom

0x5e6c,	// (0x00011c19) bg_sctrl_sk_pane_cp_ParamLimits

0x5e6c,	// (0x00011c19) bg_sctrl_sk_pane_cp

0x5ea2,	// (0x00011c4f) sctrl_sk_bottom_pane_g1

0x5e87,	// (0x00011c34) sctrl_sk_bottom_pane_t1

0x5eab,	// (0x00011c58) cell_sctrl_middle_pane_ParamLimits

0x5eab,	// (0x00011c58) cell_sctrl_middle_pane

0x5ec6,	// (0x00011c73) aid_touch_sctrl_middle_ParamLimits

0x5ec6,	// (0x00011c73) aid_touch_sctrl_middle

0x5ed8,	// (0x00011c85) bg_sctrl_middle_pane_ParamLimits

0x5ed8,	// (0x00011c85) bg_sctrl_middle_pane

0x5c3f,	// (0x000119ec) cell_sctrl_middle_pane_g1_ParamLimits

0x5c3f,	// (0x000119ec) cell_sctrl_middle_pane_g1

0x5ee6,	// (0x00011c93) cell_sctrl_middle_pane_g2_ParamLimits

0x5ee6,	// (0x00011c93) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x0001ba87) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x0001ba87) cell_sctrl_middle_pane_g

0x917a,	// (0x00014f27) bg_sctrl_middle_pane_g1

0x9182,	// (0x00014f2f) bg_sctrl_middle_pane_g2

0x918a,	// (0x00014f37) bg_sctrl_middle_pane_g3

0x9192,	// (0x00014f3f) bg_sctrl_middle_pane_g4

0x919a,	// (0x00014f47) bg_sctrl_middle_pane_g5

0x91a2,	// (0x00014f4f) bg_sctrl_middle_pane_g6

0x91aa,	// (0x00014f57) bg_sctrl_middle_pane_g7

0x91b2,	// (0x00014f5f) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x0001ba8c) bg_sctrl_middle_pane_g

0x91ba,	// (0x00014f67) bg_sctrl_middle_pane_g8_copy1

0x917a,	// (0x00014f27) bg_sctrl_sk_pane_g1

0x918a,	// (0x00014f37) bg_sctrl_sk_pane_g2

0x9182,	// (0x00014f2f) bg_sctrl_sk_pane_g3

0x0008,

0xf835,	// (0x0001b5e2) bg_sctrl_sk_pane_g

0x7412,	// (0x000131bf) aid_size_touch_scroll_bar

0x919a,	// (0x00014f47) bg_sctrl_sk_pane_g4

0x9192,	// (0x00014f3f) bg_sctrl_sk_pane_g5

0x91a2,	// (0x00014f4f) bg_sctrl_sk_pane_g6

0x91aa,	// (0x00014f57) bg_sctrl_sk_pane_g7

0x91ba,	// (0x00014f67) bg_sctrl_sk_pane_g8

0x91b2,	// (0x00014f5f) bg_sctrl_sk_pane_g9

0x4fcf,	// (0x00010d7c) popup_fep_china_hwr2_fs_candidate_window

0x4fd9,	// (0x00010d86) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x4fd9,	// (0x00010d86) popup_fep_china_hwr2_fs_control_window

0x5c3f,	// (0x000119ec) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x0001ba82) sctrl_sk_top_pane_g

0xd756,	// (0x00019503) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd756,	// (0x00019503) aid_fep_china_hwr2_fs_cell

0xd768,	// (0x00019515) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd768,	// (0x00019515) bg_popup_fep_shadow_pane_cp4

0xd77f,	// (0x0001952c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd77f,	// (0x0001952c) bg_popup_fep_shadow_pane_cp5

0xd791,	// (0x0001953e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd791,	// (0x0001953e) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a1,	// (0x0001954e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7a9,	// (0x00019556) aid_fep_china_hwr2_fs_candi_cell

0x3896,	// (0x0000f643) bg_popup_fep_shadow_pane_cp6

0xd7b3,	// (0x00019560) popup_fep_china_hwr2_fs_candidate_grid

0xd7bd,	// (0x0001956a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7bd,	// (0x0001956a) cell_fep_china_hwr2_fs_funtion_grid

0xbcc4,	// (0x00017a71) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7d5,	// (0x00019582) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7d5,	// (0x00019582) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7e3,	// (0x00019590) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7e3,	// (0x00019590) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x0001ba9d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x0001ba9d) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7f9,	// (0x000195a6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7f9,	// (0x000195a6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd80e,	// (0x000195bb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd80e,	// (0x000195bb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x0001baa2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x0001baa2) cell_fep_china_hwr2_fs_funtion_grid_t

0xd82a,	// (0x000195d7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd832,	// (0x000195df) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd83a,	// (0x000195e7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x0001baa7) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd842,	// (0x000195ef) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd842,	// (0x000195ef) cell_fep_china_hwr2_fs_candidate_grid

0xd85b,	// (0x00019608) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd863,	// (0x00019610) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbcc4,	// (0x00017a71) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbcc4,	// (0x00017a71) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0e,	// (0x0001b8bb) cell_fep_china_hwr2_fs_candidate_grid_g

0xd86b,	// (0x00019618) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8d5a,	// (0x00014b07) clock_nsta_pane_cp_24_ParamLimits

0x8d5a,	// (0x00014b07) clock_nsta_pane_cp_24

0x8dd8,	// (0x00014b85) indicator_nsta_pane_cp_24_ParamLimits

0x8dd8,	// (0x00014b85) indicator_nsta_pane_cp_24

0x9f74,	// (0x00015d21) heading_pane_g1

0x0001,

0xf89a,	// (0x0001b647) heading_pane_g

0xaa98,	// (0x00016845) grid_sct_catagory_button_pane

0xaac8,	// (0x00016875) scroll_pane_cp5_ParamLimits

0xb879,	// (0x00017626) button_value_adjust_pane_cp5_ParamLimits

0xb879,	// (0x00017626) button_value_adjust_pane_cp5

0xb975,	// (0x00017722) form2_midp_time_pane_ParamLimits

0xd879,	// (0x00019626) cell_sct_catagory_button_pane_ParamLimits

0xd879,	// (0x00019626) cell_sct_catagory_button_pane

0xbc89,	// (0x00017a36) bg_button_pane_cp01_ParamLimits

0xbc89,	// (0x00017a36) bg_button_pane_cp01

0xbcc4,	// (0x00017a71) cell_sct_catagory_button_pane_g1

0x53a7,	// (0x00011154) popup_tb_extension_window

0xd88b,	// (0x00019638) aid_size_cell_ext_ParamLimits

0xd88b,	// (0x00019638) aid_size_cell_ext

0x6edf,	// (0x00012c8c) bg_tb_trans_pane_cp1_ParamLimits

0x6edf,	// (0x00012c8c) bg_tb_trans_pane_cp1

0xd8ab,	// (0x00019658) grid_tb_ext_pane_ParamLimits

0xd8ab,	// (0x00019658) grid_tb_ext_pane

0xd8d9,	// (0x00019686) cell_tb_ext_pane_ParamLimits

0xd8d9,	// (0x00019686) cell_tb_ext_pane

0xd8f0,	// (0x0001969d) cell_tb_ext_pane_g1_ParamLimits

0xd8f0,	// (0x0001969d) cell_tb_ext_pane_g1

0xd90d,	// (0x000196ba) cell_tb_ext_pane_t1

0x6edf,	// (0x00012c8c) list_highlight_pane_cp11_ParamLimits

0x6edf,	// (0x00012c8c) list_highlight_pane_cp11

0x47ba,	// (0x00010567) popup_uni_indicator_window_ParamLimits

0x47ba,	// (0x00010567) popup_uni_indicator_window

0x7a3a,	// (0x000137e7) bg_popup_sub_pane_cp14

0xd928,	// (0x000196d5) list_uniindi_pane

0xd934,	// (0x000196e1) uniindi_top_pane

0x6edf,	// (0x00012c8c) bg_uniindi_top_pane

0xd953,	// (0x00019700) uniindi_top_pane_g1

0xd969,	// (0x00019716) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x0001baae) uniindi_top_pane_g

0xd993,	// (0x00019740) uniindi_top_pane_t1

0xd9bd,	// (0x0001976a) list_single_uniindi_pane_ParamLimits

0xd9bd,	// (0x0001976a) list_single_uniindi_pane

0xbcc4,	// (0x00017a71) bg_uniindi_top_pane_g1

0xd9d0,	// (0x0001977d) list_single_uniindi_pane_g1

0xd9e3,	// (0x00019790) list_single_uniindi_pane_t1

0x4630,	// (0x000103dd) control_bg_pane

0xda08,	// (0x000197b5) bg_sctrl_sk_pane_cp1

0xda11,	// (0x000197be) bg_sctrl_sk_pane_cp2

0xda1a,	// (0x000197c7) control_bg_pane_g1

0xda23,	// (0x000197d0) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x0001bab7) control_bg_pane_g

0xb6c3,	// (0x00017470) cell_indicator_nsta_pane_g1_ParamLimits

0xb6d1,	// (0x0001747e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa72,	// (0x0001b81f) cell_indicator_nsta_pane_g_ParamLimits

0xb9fd,	// (0x000177aa) form2_midp_time_pane_t1_ParamLimits

0x4f37,	// (0x00010ce4) main_idle_act4_pane_ParamLimits

0x4f37,	// (0x00010ce4) main_idle_act4_pane

0x53a7,	// (0x00011154) popup_tb_extension_window_ParamLimits

0xd8c9,	// (0x00019676) tb_ext_find_pane_ParamLimits

0xd8c9,	// (0x00019676) tb_ext_find_pane

0xda2c,	// (0x000197d9) ai_gene_pane_1_cp1

0x8a4d,	// (0x000147fa) ai_gene_pane_2_cp1

0xda34,	// (0x000197e1) list_single_idle_plugin_calendar_pane

0xda3d,	// (0x000197ea) list_single_idle_plugin_notification_pane

0xda46,	// (0x000197f3) list_single_idle_plugin_player_pane

0xda4f,	// (0x000197fc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda4f,	// (0x000197fc) list_single_idle_plugin_shortcut_pane

0xda71,	// (0x0001981e) main_idle_act4_pane_t1

0xda83,	// (0x00019830) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x0001babc) main_idle_act4_pane_t

0xda95,	// (0x00019842) middle_sk_idle_act4_pane_ParamLimits

0xda95,	// (0x00019842) middle_sk_idle_act4_pane

0xdaab,	// (0x00019858) popup_clock_digital_analogue_window_cp2

0xdac5,	// (0x00019872) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac5,	// (0x00019872) shortcut_wheel_idle_act4_pane

0xbcc4,	// (0x00017a71) shortcut_wheel_idle_act4_pane_g1

0xbcc4,	// (0x00017a71) shortcut_wheel_idle_act4_pane_g2

0xbcc4,	// (0x00017a71) shortcut_wheel_idle_act4_pane_g3

0xbcc4,	// (0x00017a71) shortcut_wheel_idle_act4_pane_g4

0xbcc4,	// (0x00017a71) shortcut_wheel_idle_act4_pane_g5

0xdad9,	// (0x00019886) shortcut_wheel_idle_act4_pane_g6

0xdae1,	// (0x0001988e) shortcut_wheel_idle_act4_pane_g7

0xdae9,	// (0x00019896) shortcut_wheel_idle_act4_pane_g8

0xdaf1,	// (0x0001989e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x0001bac1) shortcut_wheel_idle_act4_pane_g

0xbf42,	// (0x00017cef) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf42,	// (0x00017cef) middle_sk_idle_act4_pane_g1

0xdb55,	// (0x00019902) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb55,	// (0x00019902) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x0001bae4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x0001bae4) middle_sk_idle_act4_pane_g

0xdb61,	// (0x0001990e) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb61,	// (0x0001990e) middle_sk_idle_act4_pane_t1

0xdb7e,	// (0x0001992b) grid_ai_shortcut_pane_ParamLimits

0xdb7e,	// (0x0001992b) grid_ai_shortcut_pane

0xdb97,	// (0x00019944) list_highlight_pane_cp16_ParamLimits

0xdb97,	// (0x00019944) list_highlight_pane_cp16

0xdba4,	// (0x00019951) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba4,	// (0x00019951) list_single_idle_plugin_shortcut_pane_g1

0xdbb0,	// (0x0001995d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb0,	// (0x0001995d) list_single_idle_plugin_shortcut_pane_g2

0xdbc8,	// (0x00019975) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbc8,	// (0x00019975) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x0001bae9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x0001bae9) list_single_idle_plugin_shortcut_pane_g

0xdbdb,	// (0x00019988) cell_ai_shortcut_pane_ParamLimits

0xdbdb,	// (0x00019988) cell_ai_shortcut_pane

0xdbff,	// (0x000199ac) cell_ai_shortcut_pane_g1_ParamLimits

0xdbff,	// (0x000199ac) cell_ai_shortcut_pane_g1

0xda2c,	// (0x000197d9) ai_gene_pane_1_cp2

0xdc21,	// (0x000199ce) ai_gene_pane_2_cp2

0xdc29,	// (0x000199d6) list_highlight_pane_cp15

0xdc32,	// (0x000199df) list_single_idle_plugin_calendar_pane_g1

0xdc29,	// (0x000199d6) list_highlight_pane_cp17

0xdc3a,	// (0x000199e7) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc42,	// (0x000199ef) list_single_idle_plugin_player_pane_g1

0xacf1,	// (0x00016a9e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x0001baf0) list_single_idle_plugin_player_pane_g

0xdc4a,	// (0x000199f7) list_single_idle_plugin_player_pane_t1

0xdc58,	// (0x00019a05) list_single_idle_plugin_player_pane_t2

0xdc66,	// (0x00019a13) list_single_idle_plugin_player_pane_t3

0xdc74,	// (0x00019a21) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x0001baf5) list_single_idle_plugin_player_pane_t

0xdc82,	// (0x00019a2f) wait_bar_pane_cp15

0xdc8a,	// (0x00019a37) grid_ai_notification_pane

0xacf1,	// (0x00016a9e) list_single_idle_plugin_notification_pane_g1

0xdc93,	// (0x00019a40) cell_ai_notification_pane_ParamLimits

0xdc93,	// (0x00019a40) cell_ai_notification_pane

0xdca0,	// (0x00019a4d) cell_ai_notification_pane_g1

0xdca8,	// (0x00019a55) cell_ai_notification_pane_t1

0xdcb6,	// (0x00019a63) tb_ext_find_button_pane

0xdcbe,	// (0x00019a6b) tb_ext_find_pane_g1

0xdcc6,	// (0x00019a73) tb_ext_find_pane_t1

0x8252,	// (0x00013fff) tb_ext_find_button_pane_g1

0xdcd4,	// (0x00019a81) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x0001bafe) tb_ext_find_button_pane_g

0xda71,	// (0x0001981e) main_idle_act4_pane_t1_ParamLimits

0xda83,	// (0x00019830) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x0001babc) main_idle_act4_pane_t_ParamLimits

0xdaab,	// (0x00019858) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdab9,	// (0x00019866) sat_plugin_idle_act4_pane_ParamLimits

0xdab9,	// (0x00019866) sat_plugin_idle_act4_pane

0xdcdd,	// (0x00019a8a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcdd,	// (0x00019a8a) sat_plugin_idle_act4_pane_t1

0xdcf0,	// (0x00019a9d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf0,	// (0x00019a9d) sat_plugin_idle_act4_pane_t2

0xdd03,	// (0x00019ab0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd03,	// (0x00019ab0) sat_plugin_idle_act4_pane_t3

0xdd16,	// (0x00019ac3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd16,	// (0x00019ac3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x0001bb03) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x0001bb03) sat_plugin_idle_act4_pane_t

0x46f5,	// (0x000104a2) popup_battery_window_ParamLimits

0x46f5,	// (0x000104a2) popup_battery_window

0x6edf,	// (0x00012c8c) bg_popup_sub_pane_cp25_ParamLimits

0x6edf,	// (0x00012c8c) bg_popup_sub_pane_cp25

0xdd29,	// (0x00019ad6) popup_battery_window_g1_ParamLimits

0xdd29,	// (0x00019ad6) popup_battery_window_g1

0xdd35,	// (0x00019ae2) popup_battery_window_t1_ParamLimits

0xdd35,	// (0x00019ae2) popup_battery_window_t1

0xdd47,	// (0x00019af4) popup_battery_window_t2_ParamLimits

0xdd47,	// (0x00019af4) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x0001bb0c) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x0001bb0c) popup_battery_window_t

0x891a,	// (0x000146c7) midp_canvas_pane_ParamLimits

0x8991,	// (0x0001473e) midp_keypad_pane_ParamLimits

0x8991,	// (0x0001473e) midp_keypad_pane

0x8c32,	// (0x000149df) main_midp_pane_ParamLimits

0xb73d,	// (0x000174ea) signal_pane_g2_cp_ParamLimits

0xdd64,	// (0x00019b11) aid_size_cell_midp_keypad_ParamLimits

0xdd64,	// (0x00019b11) aid_size_cell_midp_keypad

0xdd7e,	// (0x00019b2b) midp_keyp_game_grid_pane_ParamLimits

0xdd7e,	// (0x00019b2b) midp_keyp_game_grid_pane

0xdd9e,	// (0x00019b4b) midp_keyp_rocker_pane_ParamLimits

0xdd9e,	// (0x00019b4b) midp_keyp_rocker_pane

0xddd7,	// (0x00019b84) midp_keyp_sk_left_pane_ParamLimits

0xddd7,	// (0x00019b84) midp_keyp_sk_left_pane

0xde31,	// (0x00019bde) midp_keyp_sk_right_pane_ParamLimits

0xde31,	// (0x00019bde) midp_keyp_sk_right_pane

0x3896,	// (0x0000f643) bg_button_pane_cp03

0xde8b,	// (0x00019c38) midp_keyp_sk_left_pane_g1

0x3896,	// (0x0000f643) bg_button_pane_cp04

0xde8b,	// (0x00019c38) midp_keyp_sk_right_pane_g1

0xbcc4,	// (0x00017a71) midp_keyp_rocker_pane_g1

0xde94,	// (0x00019c41) keyp_game_cell_pane_ParamLimits

0xde94,	// (0x00019c41) keyp_game_cell_pane

0x3896,	// (0x0000f643) bg_button_pane_cp02

0xdea7,	// (0x00019c54) keyp_game_cell_pane_g1

0x4739,	// (0x000104e6) popup_fep_vkb2_window_ParamLimits

0x4739,	// (0x000104e6) popup_fep_vkb2_window

0x5f04,	// (0x00011cb1) aid_size_cell_vkb2_ParamLimits

0x5f04,	// (0x00011cb1) aid_size_cell_vkb2

0x5f50,	// (0x00011cfd) popup_fep_vkb2_window_g1_ParamLimits

0x5f50,	// (0x00011cfd) popup_fep_vkb2_window_g1

0x5f98,	// (0x00011d45) vkb2_area_bottom_pane_ParamLimits

0x5f98,	// (0x00011d45) vkb2_area_bottom_pane

0x5fe4,	// (0x00011d91) vkb2_area_keypad_pane_ParamLimits

0x5fe4,	// (0x00011d91) vkb2_area_keypad_pane

0x6026,	// (0x00011dd3) vkb2_area_top_pane_ParamLimits

0x6026,	// (0x00011dd3) vkb2_area_top_pane

0x60a5,	// (0x00011e52) vkb2_top_entry_pane_ParamLimits

0x60a5,	// (0x00011e52) vkb2_top_entry_pane

0x60cf,	// (0x00011e7c) vkb2_top_grid_left_pane_ParamLimits

0x60cf,	// (0x00011e7c) vkb2_top_grid_left_pane

0x60ee,	// (0x00011e9b) vkb2_top_grid_right_pane_ParamLimits

0x60ee,	// (0x00011e9b) vkb2_top_grid_right_pane

0x610d,	// (0x00011eba) vkb2_cell_keypad_pane_ParamLimits

0x610d,	// (0x00011eba) vkb2_cell_keypad_pane

0x61de,	// (0x00011f8b) vkb2_area_bottom_grid_pane_ParamLimits

0x61de,	// (0x00011f8b) vkb2_area_bottom_grid_pane

0x6204,	// (0x00011fb1) vkb2_area_bottom_pane_g1_ParamLimits

0x6204,	// (0x00011fb1) vkb2_area_bottom_pane_g1

0x6228,	// (0x00011fd5) vkb2_area_bottom_pane_g2_ParamLimits

0x6228,	// (0x00011fd5) vkb2_area_bottom_pane_g2

0x6256,	// (0x00012003) vkb2_area_bottom_pane_g3_ParamLimits

0x6256,	// (0x00012003) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x0001bb11) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x0001bb11) vkb2_area_bottom_pane_g

0x62b7,	// (0x00012064) vkb2_top_cell_left_pane_ParamLimits

0x62b7,	// (0x00012064) vkb2_top_cell_left_pane

0xdeb8,	// (0x00019c65) vkb2_top_entry_pane_g1_ParamLimits

0xdeb8,	// (0x00019c65) vkb2_top_entry_pane_g1

0xdec6,	// (0x00019c73) vkb2_top_entry_pane_t1_ParamLimits

0xdec6,	// (0x00019c73) vkb2_top_entry_pane_t1

0xdef8,	// (0x00019ca5) vkb2_top_entry_pane_t2_ParamLimits

0xdef8,	// (0x00019ca5) vkb2_top_entry_pane_t2

0xdf2a,	// (0x00019cd7) vkb2_top_entry_pane_t3_ParamLimits

0xdf2a,	// (0x00019cd7) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x0001bb18) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x0001bb18) vkb2_top_entry_pane_t

0x6304,	// (0x000120b1) vkb2_top_grid_right_pane_g1_ParamLimits

0x6304,	// (0x000120b1) vkb2_top_grid_right_pane_g1

0x631a,	// (0x000120c7) vkb2_top_grid_right_pane_g2_ParamLimits

0x631a,	// (0x000120c7) vkb2_top_grid_right_pane_g2

0x6332,	// (0x000120df) vkb2_top_grid_right_pane_g3_ParamLimits

0x6332,	// (0x000120df) vkb2_top_grid_right_pane_g3

0x634a,	// (0x000120f7) vkb2_top_grid_right_pane_g4_ParamLimits

0x634a,	// (0x000120f7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x0001bb1f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x0001bb1f) vkb2_top_grid_right_pane_g

0x6360,	// (0x0001210d) vkb2_top_cell_left_pane_g1

0x6377,	// (0x00012124) vkb2_cell_keypad_pane_g1_ParamLimits

0x6377,	// (0x00012124) vkb2_cell_keypad_pane_g1

0xdf6f,	// (0x00019d1c) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf6f,	// (0x00019d1c) vkb2_cell_keypad_pane_t1

0x6385,	// (0x00012132) vkb2_cell_bottom_grid_pane_ParamLimits

0x6385,	// (0x00012132) vkb2_cell_bottom_grid_pane

0x63be,	// (0x0001216b) vkb2_cell_bottom_grid_pane_g1

0xdaf9,	// (0x000198a6) aid_call2_pane_cp02

0xdb01,	// (0x000198ae) aid_call_pane_cp02

0xdb09,	// (0x000198b6) clock_digital_number_pane_cp10

0xdb11,	// (0x000198be) clock_digital_number_pane_cp11

0xdb19,	// (0x000198c6) clock_digital_number_pane_cp12

0xdb21,	// (0x000198ce) clock_digital_number_pane_cp13

0xdb29,	// (0x000198d6) clock_digital_separator_pane_cp10

0x8252,	// (0x00013fff) popup_clock_digital_analogue_window_cp2_g1

0x8252,	// (0x00013fff) popup_clock_digital_analogue_window_cp2_g2

0xdb31,	// (0x000198de) popup_clock_digital_analogue_window_cp2_g3

0x8252,	// (0x00013fff) popup_clock_digital_analogue_window_cp2_g4

0xdb31,	// (0x000198de) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x0001bad4) popup_clock_digital_analogue_window_cp2_g

0xdb39,	// (0x000198e6) popup_clock_digital_analogue_window_cp2_t1

0xdb47,	// (0x000198f4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x0001badf) popup_clock_digital_analogue_window_cp2_t

0xbcc4,	// (0x00017a71) clock_digital_number_pane_cp10_g1

0xbcc4,	// (0x00017a71) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0e,	// (0x0001b8bb) clock_digital_number_pane_cp10_g

0xbcc4,	// (0x00017a71) clock_digital_separator_pane_cp10_g1

0xbcc4,	// (0x00017a71) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0e,	// (0x0001b8bb) clock_digital_separator_pane_cp10_g

0xd975,	// (0x00019722) uniindi_top_pane_g3

0xd986,	// (0x00019733) uniindi_top_pane_g4

0x6198,	// (0x00011f45) vkb2_row_keypad_pane_ParamLimits

0x6198,	// (0x00011f45) vkb2_row_keypad_pane

0x63de,	// (0x0001218b) vkb2_cell_t_keypad_pane_ParamLimits

0x63de,	// (0x0001218b) vkb2_cell_t_keypad_pane

0x63ee,	// (0x0001219b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x63ee,	// (0x0001219b) vkb2_cell_t_keypad_pane_cp08

0x6401,	// (0x000121ae) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6401,	// (0x000121ae) vkb2_cell_t_keypad_pane_cp09

0x6415,	// (0x000121c2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6415,	// (0x000121c2) vkb2_cell_t_keypad_pane_cp01

0x6426,	// (0x000121d3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6426,	// (0x000121d3) vkb2_cell_t_keypad_pane_cp02

0x6437,	// (0x000121e4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6437,	// (0x000121e4) vkb2_cell_t_keypad_pane_cp03

0x6448,	// (0x000121f5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6448,	// (0x000121f5) vkb2_cell_t_keypad_pane_cp04

0x6459,	// (0x00012206) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6459,	// (0x00012206) vkb2_cell_t_keypad_pane_cp05

0x646a,	// (0x00012217) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x646a,	// (0x00012217) vkb2_cell_t_keypad_pane_cp06

0x647b,	// (0x00012228) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x647b,	// (0x00012228) vkb2_cell_t_keypad_pane_cp07

0x648c,	// (0x00012239) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x648c,	// (0x00012239) vkb2_cell_t_keypad_pane_cp10

0x5c3f,	// (0x000119ec) vkb2_cell_t_keypad_pane_g1

0xdf86,	// (0x00019d33) vkb2_cell_t_keypad_pane_t1

0x4630,	// (0x000103dd) popup_grid_graphic2_window

0xdf98,	// (0x00019d45) aid_size_cell_graphic2_ParamLimits

0xdf98,	// (0x00019d45) aid_size_cell_graphic2

0xdfd0,	// (0x00019d7d) bg_popup_window_pane_cp21_ParamLimits

0xdfd0,	// (0x00019d7d) bg_popup_window_pane_cp21

0xdfde,	// (0x00019d8b) graphic2_pages_pane_ParamLimits

0xdfde,	// (0x00019d8b) graphic2_pages_pane

0xe024,	// (0x00019dd1) grid_graphic2_control_pane_ParamLimits

0xe024,	// (0x00019dd1) grid_graphic2_control_pane

0xe062,	// (0x00019e0f) grid_graphic2_pane_ParamLimits

0xe062,	// (0x00019e0f) grid_graphic2_pane

0xe0d6,	// (0x00019e83) cell_graphic2_pane

0x4630,	// (0x000103dd) main_comp_mode_pane

0xd17e,	// (0x00018f2b) list_ai3_gene_pane_ParamLimits

0xd5b7,	// (0x00019364) bg_popup_window_pane_cp19_ParamLimits

0xd5c3,	// (0x00019370) bg_touch_area_indi_pane_ParamLimits

0xd5c3,	// (0x00019370) bg_touch_area_indi_pane

0xd5d9,	// (0x00019386) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5d9,	// (0x00019386) bg_touch_area_indi_pane_cp01

0xd5ef,	// (0x0001939c) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ef,	// (0x0001939c) bg_touch_area_indi_pane_cp02

0xd605,	// (0x000193b2) bg_touch_area_indi_pane_cp03_ParamLimits

0xd605,	// (0x000193b2) bg_touch_area_indi_pane_cp03

0xd61f,	// (0x000193cc) popup_slider_window_g1_ParamLimits

0xd63b,	// (0x000193e8) popup_slider_window_g2_ParamLimits

0xd657,	// (0x00019404) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x0001ba69) popup_slider_window_g_ParamLimits

0xd6bd,	// (0x0001946a) popup_slider_window_t1_ParamLimits

0xd731,	// (0x000194de) small_volume_slider_vertical_pane_ParamLimits

0xe0d6,	// (0x00019e83) cell_graphic2_pane_ParamLimits

0xe125,	// (0x00019ed2) bg_button_pane_cp10_ParamLimits

0xe125,	// (0x00019ed2) bg_button_pane_cp10

0xe138,	// (0x00019ee5) bg_button_pane_cp11_ParamLimits

0xe138,	// (0x00019ee5) bg_button_pane_cp11

0xe14b,	// (0x00019ef8) graphic2_pages_pane_g1_ParamLimits

0xe14b,	// (0x00019ef8) graphic2_pages_pane_g1

0xe166,	// (0x00019f13) graphic2_pages_pane_g2_ParamLimits

0xe166,	// (0x00019f13) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x0001bb2d) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x0001bb2d) graphic2_pages_pane_g

0xe17e,	// (0x00019f2b) graphic2_pages_pane_t1_ParamLimits

0xe17e,	// (0x00019f2b) graphic2_pages_pane_t1

0xe196,	// (0x00019f43) cell_graphic2_control_pane_ParamLimits

0xe196,	// (0x00019f43) cell_graphic2_control_pane

0xe1b4,	// (0x00019f61) cell_graphic2_pane_g1_ParamLimits

0xe1b4,	// (0x00019f61) cell_graphic2_pane_g1

0xe1c1,	// (0x00019f6e) cell_graphic2_pane_g2_ParamLimits

0xe1c1,	// (0x00019f6e) cell_graphic2_pane_g2

0xe1ce,	// (0x00019f7b) cell_graphic2_pane_g3_ParamLimits

0xe1ce,	// (0x00019f7b) cell_graphic2_pane_g3

0xe1db,	// (0x00019f88) cell_graphic2_pane_g4_ParamLimits

0xe1db,	// (0x00019f88) cell_graphic2_pane_g4

0xe1e8,	// (0x00019f95) cell_graphic2_pane_g5_ParamLimits

0xe1e8,	// (0x00019f95) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x0001bb32) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x0001bb32) cell_graphic2_pane_g

0xe201,	// (0x00019fae) cell_graphic2_pane_t1_ParamLimits

0xe201,	// (0x00019fae) cell_graphic2_pane_t1

0x929c,	// (0x00015049) grid_highlight_pane_cp11_ParamLimits

0x929c,	// (0x00015049) grid_highlight_pane_cp11

0x6edf,	// (0x00012c8c) bg_button_pane_cp05

0xe237,	// (0x00019fe4) cell_graphic2_control_pane_g1

0xbcc4,	// (0x00017a71) bg_touch_area_indi_pane_g1

0xe25f,	// (0x0001a00c) aid_cmod_rocker_key_size

0xe269,	// (0x0001a016) aid_cmode_itu_key_size

0xe273,	// (0x0001a020) main_cmode_video_pane

0xe27d,	// (0x0001a02a) main_comp_mode_itu_pane

0xe289,	// (0x0001a036) main_comp_mode_rocker_pane

0xe295,	// (0x0001a042) cell_cmode_rocker_pane_ParamLimits

0xe295,	// (0x0001a042) cell_cmode_rocker_pane

0xe2a7,	// (0x0001a054) cell_cmode_itu_pane_ParamLimits

0xe2a7,	// (0x0001a054) cell_cmode_itu_pane

0x7a3a,	// (0x000137e7) bg_button_pane_cp06_ParamLimits

0x7a3a,	// (0x000137e7) bg_button_pane_cp06

0xbf42,	// (0x00017cef) cell_cmode_rocker_pane_g1_ParamLimits

0xbf42,	// (0x00017cef) cell_cmode_rocker_pane_g1

0xd7d5,	// (0x00019582) cell_cmode_rocker_pane_g2_ParamLimits

0xd7d5,	// (0x00019582) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x0001bb42) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x0001bb42) cell_cmode_rocker_pane_g

0x3896,	// (0x0000f643) bg_button_pane_cp07

0xe2bc,	// (0x0001a069) cell_cmode_itu_pane_g1

0xe2c5,	// (0x0001a072) cell_cmode_itu_pane_t1

0xe2d3,	// (0x0001a080) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x0001bb47) cell_cmode_itu_pane_t

0xd9f8,	// (0x000197a5) aid_touch_ctrl_left

0xda00,	// (0x000197ad) aid_touch_ctrl_right

0x3896,	// (0x0000f643) compa_mode_pane

0xe2e1,	// (0x0001a08e) aid_cmod_rocker_key_size_cp

0xe2eb,	// (0x0001a098) aid_cmode_itu_key_size_cp

0xe2f5,	// (0x0001a0a2) compa_mode_pane_g1

0xe2fd,	// (0x0001a0aa) compa_mode_pane_g2

0xe305,	// (0x0001a0b2) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x0001bb4c) compa_mode_pane_g

0xe30d,	// (0x0001a0ba) main_comp_mode_itu_pane_cp

0xe315,	// (0x0001a0c2) main_comp_mode_rocker_pane_cp

0xe31d,	// (0x0001a0ca) cell_cmode_itu_pane_cp_ParamLimits

0xe31d,	// (0x0001a0ca) cell_cmode_itu_pane_cp

0xe332,	// (0x0001a0df) cell_cmode_rocker_pane_cp_ParamLimits

0xe332,	// (0x0001a0df) cell_cmode_rocker_pane_cp

0x7a3a,	// (0x000137e7) bg_button_pane_cp06_cp_ParamLimits

0x7a3a,	// (0x000137e7) bg_button_pane_cp06_cp

0xbf42,	// (0x00017cef) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf42,	// (0x00017cef) cell_cmode_rocker_pane_g1_cp

0xbcc4,	// (0x00017a71) cell_cmode_rocker_pane_g2_cp

0x3896,	// (0x0000f643) bg_button_pane_cp07_cp

0xa7b5,	// (0x00016562) cell_cmode_itu_pane_g1_cp

0xe344,	// (0x0001a0f1) cell_cmode_itu_pane_t1_cp

0xe344,	// (0x0001a0f1) cell_cmode_itu_pane_t2_cp

0xa7a2,	// (0x0001654f) settings_code_pane_cp2

0x6c3c,	// (0x000129e9) bg_popup_window_pane_cp3_ParamLimits

0x70df,	// (0x00012e8c) heading_pane_cp3_ParamLimits

0x70ee,	// (0x00012e9b) listscroll_popup_graphic_pane_ParamLimits

0x59e8,	// (0x00011795) fep_hwr_aid_pane_ParamLimits

0x5e5f,	// (0x00011c0c) aid_touch_sctrl_top_ParamLimits

0x5e7a,	// (0x00011c27) sctrl_sk_top_pane_g1_ParamLimits

0x5c3f,	// (0x000119ec) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x0001ba82) sctrl_sk_top_pane_g_ParamLimits

0x5e87,	// (0x00011c34) sctrl_sk_top_pane_t1_ParamLimits

0x5e5f,	// (0x00011c0c) aid_touch_sctrl_bottom_ParamLimits

0x5e87,	// (0x00011c34) sctrl_sk_bottom_pane_t1_ParamLimits

0xd941,	// (0x000196ee) aid_area_touch_clock

0x606c,	// (0x00011e19) aid_vkb2_area_top_pane_cell_ParamLimits

0x606c,	// (0x00011e19) aid_vkb2_area_top_pane_cell

0x61ba,	// (0x00011f67) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x61ba,	// (0x00011f67) aid_vkb2_area_bottom_pane_cell

0xdeb0,	// (0x00019c5d) popup_char_count_window

0xe352,	// (0x0001a0ff) popup_char_count_window_g1

0xe35b,	// (0x0001a108) popup_char_count_window_g2

0xe364,	// (0x0001a111) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x0001bb53) popup_char_count_window_g

0xe36d,	// (0x0001a11a) popup_char_count_window_t1

0x5f2e,	// (0x00011cdb) popup_fep_char_preview_window_ParamLimits

0x5f2e,	// (0x00011cdb) popup_fep_char_preview_window

0x608a,	// (0x00011e37) vkb2_top_candi_pane_ParamLimits

0x608a,	// (0x00011e37) vkb2_top_candi_pane

0xe37b,	// (0x0001a128) cell_vkb2_top_candi_pane_ParamLimits

0xe37b,	// (0x0001a128) cell_vkb2_top_candi_pane

0x64a1,	// (0x0001224e) bg_popup_fep_char_preview_window_ParamLimits

0x64a1,	// (0x0001224e) bg_popup_fep_char_preview_window

0x64af,	// (0x0001225c) popup_fep_char_preview_window_t1_ParamLimits

0x64af,	// (0x0001225c) popup_fep_char_preview_window_t1

0xe3c5,	// (0x0001a172) bg_popup_fep_char_preview_window_g1

0xe3cd,	// (0x0001a17a) bg_popup_fep_char_preview_window_g2

0xe3d5,	// (0x0001a182) bg_popup_fep_char_preview_window_g3

0xe3dd,	// (0x0001a18a) bg_popup_fep_char_preview_window_g4

0xe3e5,	// (0x0001a192) bg_popup_fep_char_preview_window_g5

0xe3ed,	// (0x0001a19a) bg_popup_fep_char_preview_window_g6

0xe3f5,	// (0x0001a1a2) bg_popup_fep_char_preview_window_g7

0xe3fd,	// (0x0001a1aa) bg_popup_fep_char_preview_window_g8

0xe405,	// (0x0001a1b2) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x0001bb5a) bg_popup_fep_char_preview_window_g

0x5c3f,	// (0x000119ec) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5c3f,	// (0x000119ec) cell_vkb2_top_candi_pane_g1

0x5c4d,	// (0x000119fa) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5c4d,	// (0x000119fa) cell_vkb2_top_candi_pane_g2

0xdf4e,	// (0x00019cfb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf4e,	// (0x00019cfb) cell_vkb2_top_candi_pane_g3

0x64f1,	// (0x0001229e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x64f1,	// (0x0001229e) cell_vkb2_top_candi_pane_g4

0xc5b2,	// (0x0001835f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc5b2,	// (0x0001835f) cell_vkb2_top_candi_pane_g5

0x6512,	// (0x000122bf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6512,	// (0x000122bf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x0001bb6f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x0001bb6f) cell_vkb2_top_candi_pane_g

0x6520,	// (0x000122cd) cell_vkb2_top_candi_pane_t1

0x5848,	// (0x000115f5) aid_size_touch_slider_mark_ParamLimits

0x5848,	// (0x000115f5) aid_size_touch_slider_mark

0xe014,	// (0x00019dc1) grid_graphic2_catg_pane_ParamLimits

0xe014,	// (0x00019dc1) grid_graphic2_catg_pane

0xe0b2,	// (0x00019e5f) popup_grid_graphic2_window_t1_ParamLimits

0xe0b2,	// (0x00019e5f) popup_grid_graphic2_window_t1

0xe0c4,	// (0x00019e71) popup_grid_graphic2_window_t2_ParamLimits

0xe0c4,	// (0x00019e71) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x0001bb28) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x0001bb28) popup_grid_graphic2_window_t

0x6edf,	// (0x00012c8c) bg_button_pane_cp05_ParamLimits

0xe237,	// (0x00019fe4) cell_graphic2_control_pane_g1_ParamLimits

0xe40d,	// (0x0001a1ba) cell_graphic2_catg_pane_ParamLimits

0xe40d,	// (0x0001a1ba) cell_graphic2_catg_pane

0x3896,	// (0x0000f643) bg_button_pane_cp12

0xe41f,	// (0x0001a1cc) cell_graphic2_catg_pane_g1

0xd90d,	// (0x000196ba) cell_tb_ext_pane_t1_ParamLimits

0x62d7,	// (0x00012084) vkb2_top_cell_right_narrow_pane_ParamLimits

0x62d7,	// (0x00012084) vkb2_top_cell_right_narrow_pane

0x62ef,	// (0x0001209c) vkb2_top_cell_right_wide_pane_ParamLimits

0x62ef,	// (0x0001209c) vkb2_top_cell_right_wide_pane

0x59da,	// (0x00011787) bg_vkb2_func_pane_ParamLimits

0x59da,	// (0x00011787) bg_vkb2_func_pane

0x6360,	// (0x0001210d) vkb2_top_cell_left_pane_g1_ParamLimits

0x59da,	// (0x00011787) bg_vkb2_fuc_pane_cp03_ParamLimits

0x59da,	// (0x00011787) bg_vkb2_fuc_pane_cp03

0x63be,	// (0x0001216b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9182,	// (0x00014f2f) bg_vkb2_func_pane_g1

0x918a,	// (0x00014f37) bg_vkb2_func_pane_g2

0x919a,	// (0x00014f47) bg_vkb2_func_pane_g3

0x9192,	// (0x00014f3f) bg_vkb2_func_pane_g4

0x91a2,	// (0x00014f4f) bg_vkb2_func_pane_g5

0x91aa,	// (0x00014f57) bg_vkb2_func_pane_g6

0x91b2,	// (0x00014f5f) bg_vkb2_func_pane_g7

0x91ba,	// (0x00014f67) bg_vkb2_func_pane_g8

0x917a,	// (0x00014f27) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x0001bb7c) bg_vkb2_func_pane_g

0x59da,	// (0x00011787) bg_vkb2_fuc_pane_cp01_ParamLimits

0x59da,	// (0x00011787) bg_vkb2_fuc_pane_cp01

0x6360,	// (0x0001210d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6360,	// (0x0001210d) vkb2_top_cell_right_wide_pane_g1

0x59da,	// (0x00011787) bg_vkb2_fuc_pane_cp02_ParamLimits

0x59da,	// (0x00011787) bg_vkb2_fuc_pane_cp02

0x653f,	// (0x000122ec) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x653f,	// (0x000122ec) vkb2_top_cell_right_narrow_pane_g1

0xd531,	// (0x000192de) aid_touch_area_decrease_ParamLimits

0xd531,	// (0x000192de) aid_touch_area_decrease

0xd555,	// (0x00019302) aid_touch_area_increase_ParamLimits

0xd555,	// (0x00019302) aid_touch_area_increase

0xd56d,	// (0x0001931a) aid_touch_area_mute_ParamLimits

0xd56d,	// (0x0001931a) aid_touch_area_mute

0xd589,	// (0x00019336) aid_touch_area_slider_ParamLimits

0xd589,	// (0x00019336) aid_touch_area_slider

0xd673,	// (0x00019420) popup_slider_window_g4_ParamLimits

0xd673,	// (0x00019420) popup_slider_window_g4

0xd68b,	// (0x00019438) popup_slider_window_g5_ParamLimits

0xd68b,	// (0x00019438) popup_slider_window_g5

0xd6ad,	// (0x0001945a) popup_slider_window_g6_ParamLimits

0xd6ad,	// (0x0001945a) popup_slider_window_g6

0xd6eb,	// (0x00019498) popup_slider_window_t2_ParamLimits

0xd6eb,	// (0x00019498) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x0001ba76) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x0001ba76) popup_slider_window_t

0xd703,	// (0x000194b0) slider_pane_ParamLimits

0xd703,	// (0x000194b0) slider_pane

0xe428,	// (0x0001a1d5) slider_pane_g1_ParamLimits

0xe428,	// (0x0001a1d5) slider_pane_g1

0xe43c,	// (0x0001a1e9) slider_pane_g2_ParamLimits

0xe43c,	// (0x0001a1e9) slider_pane_g2

0xe452,	// (0x0001a1ff) slider_pane_g3_ParamLimits

0xe452,	// (0x0001a1ff) slider_pane_g3

0x0003,

0xfde2,	// (0x0001bb8f) slider_pane_g_ParamLimits

0xfde2,	// (0x0001bb8f) slider_pane_g

0x5403,	// (0x000111b0) popup_tb_float_extension_window_ParamLimits

0x5403,	// (0x000111b0) popup_tb_float_extension_window

0xe47e,	// (0x0001a22b) aid_size_cell_tb_float_ext

0x3896,	// (0x0000f643) bg_popup_sub_window_cp28

0xe48a,	// (0x0001a237) grid_tb_float_ext_pane

0xe494,	// (0x0001a241) cell_tb_float_ext_pane_ParamLimits

0xe494,	// (0x0001a241) cell_tb_float_ext_pane

0xe4ae,	// (0x0001a25b) cell_tb_float_ext_pane_g1

0xe4b7,	// (0x0001a264) grid_highlight_pane_cp12

0x5b29,	// (0x000118d6) cell_last_hwr_side_pane_ParamLimits

0x5b29,	// (0x000118d6) cell_last_hwr_side_pane

0xbcc4,	// (0x00017a71) cell_last_hwr_side_pane_g1

0xe4c0,	// (0x0001a26d) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x0001bb98) cell_last_hwr_side_pane_g

0x6286,	// (0x00012033) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6286,	// (0x00012033) vkb2_area_bottom_space_btn_pane

0x5c3f,	// (0x000119ec) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf86,	// (0x00019d33) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6520,	// (0x000122cd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x655f,	// (0x0001230c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x655f,	// (0x0001230c) vkb2_area_bottom_space_btn_pane_g1

0x6599,	// (0x00012346) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6599,	// (0x00012346) vkb2_area_bottom_space_btn_pane_g2

0x65cf,	// (0x0001237c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x65cf,	// (0x0001237c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x0001bb9d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x0001bb9d) vkb2_area_bottom_space_btn_pane_g

0x5a9d,	// (0x0001184a) cel_fep_hwr_func_pane_ParamLimits

0x5a9d,	// (0x0001184a) cel_fep_hwr_func_pane

0x5ad9,	// (0x00011886) cell_hwr_side_button_pane_ParamLimits

0x5ad9,	// (0x00011886) cell_hwr_side_button_pane

0xd941,	// (0x000196ee) aid_area_touch_clock_ParamLimits

0x6edf,	// (0x00012c8c) bg_uniindi_top_pane_ParamLimits

0xd953,	// (0x00019700) uniindi_top_pane_g1_ParamLimits

0xd969,	// (0x00019716) uniindi_top_pane_g2_ParamLimits

0xd975,	// (0x00019722) uniindi_top_pane_g3_ParamLimits

0xd986,	// (0x00019733) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x0001baae) uniindi_top_pane_g_ParamLimits

0xd993,	// (0x00019740) uniindi_top_pane_t1_ParamLimits

0x6edf,	// (0x00012c8c) bg_vkb2_func_pane_cp01_ParamLimits

0x6edf,	// (0x00012c8c) bg_vkb2_func_pane_cp01

0xe4c9,	// (0x0001a276) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4c9,	// (0x0001a276) cel_fep_hwr_func_pane_g1

0x6edf,	// (0x00012c8c) bg_vkb2_func_pane_cp02_ParamLimits

0x6edf,	// (0x00012c8c) bg_vkb2_func_pane_cp02

0xe4c9,	// (0x0001a276) cell_hwr_side_button_pane_g1_ParamLimits

0xe4c9,	// (0x0001a276) cell_hwr_side_button_pane_g1

0x8fe5,	// (0x00014d92) status_pane_g4_ParamLimits

0x8fe5,	// (0x00014d92) status_pane_g4

0x8fff,	// (0x00014dac) status_pane_t1

0xba10,	// (0x000177bd) form2_midp_gauge_slider_cont_pane

0xba18,	// (0x000177c5) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba2a,	// (0x000177d7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba3c,	// (0x000177e9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac1,	// (0x0001b86e) form2_midp_gauge_slider_pane_t_ParamLimits

0xba4e,	// (0x000177fb) form2_midp_slider_pane_ParamLimits

0x5ef6,	// (0x00011ca3) aid_size_cell_func_vkb2_ParamLimits

0x5ef6,	// (0x00011ca3) aid_size_cell_func_vkb2

0xe46a,	// (0x0001a217) slider_pane_g4_ParamLimits

0xe46a,	// (0x0001a217) slider_pane_g4

0x6619,	// (0x000123c6) form2_midp_gauge_slider_pane_t2_cp01

0x6627,	// (0x000123d4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6627,	// (0x000123d4) form2_midp_gauge_slider_pane_t3_cp01

0x6644,	// (0x000123f1) form2_midp_slider_pane_cp01

0x3896,	// (0x0000f643) navi_smil_pane

0xe502,	// (0x0001a2af) navi_smil_pane_g1

0xe50a,	// (0x0001a2b7) navi_smil_pane_t1

0xe4d7,	// (0x0001a284) form2_midp_slider_pane_g1

0xe4e0,	// (0x0001a28d) form2_midp_slider_pane_g2

0xe4e8,	// (0x0001a295) form2_midp_slider_pane_g3

0xe4d7,	// (0x0001a284) form2_midp_slider_pane_g4

0xe4f0,	// (0x0001a29d) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0001bba6) form2_midp_slider_pane_g

0x6609,	// (0x000123b6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6609,	// (0x000123b6) vkb2_area_bottom_space_btn_pane_g4

0x8e14,	// (0x00014bc1) lc0_navi_pane_ParamLimits

0x8e14,	// (0x00014bc1) lc0_navi_pane

0x8e8a,	// (0x00014c37) lc0_stat_indi_pane_ParamLimits

0x8e8a,	// (0x00014c37) lc0_stat_indi_pane

0x8ea1,	// (0x00014c4e) ls0_title_pane_ParamLimits

0x8ea1,	// (0x00014c4e) ls0_title_pane

0x7a3a,	// (0x000137e7) bg_popup_sub_pane_cp14_ParamLimits

0xd928,	// (0x000196d5) list_uniindi_pane_ParamLimits

0xd934,	// (0x000196e1) uniindi_top_pane_ParamLimits

0xd9d0,	// (0x0001977d) list_single_uniindi_pane_g1_ParamLimits

0xd9e3,	// (0x00019790) list_single_uniindi_pane_t1_ParamLimits

0x664d,	// (0x000123fa) lc0_stat_clock_pane_ParamLimits

0x664d,	// (0x000123fa) lc0_stat_clock_pane

0xe518,	// (0x0001a2c5) lc0_stat_indi_pane_g1_ParamLimits

0xe518,	// (0x0001a2c5) lc0_stat_indi_pane_g1

0xe525,	// (0x0001a2d2) lc0_stat_indi_pane_g2_ParamLimits

0xe525,	// (0x0001a2d2) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x0001bbb1) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x0001bbb1) lc0_stat_indi_pane_g

0x665a,	// (0x00012407) lc0_uni_indicator_pane_ParamLimits

0x665a,	// (0x00012407) lc0_uni_indicator_pane

0xe532,	// (0x0001a2df) ls0_title_pane_g1_ParamLimits

0xe532,	// (0x0001a2df) ls0_title_pane_g1

0xe546,	// (0x0001a2f3) ls0_title_pane_t1_ParamLimits

0xe546,	// (0x0001a2f3) ls0_title_pane_t1

0x6667,	// (0x00012414) lc0_uni_indicator_pane_g1_ParamLimits

0x6667,	// (0x00012414) lc0_uni_indicator_pane_g1

0xe57c,	// (0x0001a329) lc0_stat_clock_pane_t1

0x4630,	// (0x000103dd) main_ai5_pane

0xe592,	// (0x0001a33f) ai5_sk_pane_ParamLimits

0xe592,	// (0x0001a33f) ai5_sk_pane

0xe59f,	// (0x0001a34c) cell_ai5_widget_pane_ParamLimits

0xe59f,	// (0x0001a34c) cell_ai5_widget_pane

0xe668,	// (0x0001a415) aid_size_cell_widget_grid

0xe676,	// (0x0001a423) bg_ai5_widget_pane_ParamLimits

0xe676,	// (0x0001a423) bg_ai5_widget_pane

0xe6f2,	// (0x0001a49f) cell_ai5_widget_pane_g2

0xe706,	// (0x0001a4b3) cell_ai5_widget_pane_g3

0xe720,	// (0x0001a4cd) cell_ai5_widget_pane_g4

0xe730,	// (0x0001a4dd) cell_ai5_widget_pane_g5

0xe740,	// (0x0001a4ed) cell_ai5_widget_pane_g6

0xe74c,	// (0x0001a4f9) cell_ai5_widget_pane_g7

0xe7b8,	// (0x0001a565) cell_ai5_widget_pane_t1_ParamLimits

0xe7b8,	// (0x0001a565) cell_ai5_widget_pane_t1

0xe7d5,	// (0x0001a582) cell_ai5_widget_pane_t2_ParamLimits

0xe7d5,	// (0x0001a582) cell_ai5_widget_pane_t2

0xe7ed,	// (0x0001a59a) cell_ai5_widget_pane_t3_ParamLimits

0xe7ed,	// (0x0001a59a) cell_ai5_widget_pane_t3

0xe805,	// (0x0001a5b2) cell_ai5_widget_pane_t4_ParamLimits

0xe805,	// (0x0001a5b2) cell_ai5_widget_pane_t4

0xe82b,	// (0x0001a5d8) cell_ai5_widget_pane_t5_ParamLimits

0xe82b,	// (0x0001a5d8) cell_ai5_widget_pane_t5

0xe84a,	// (0x0001a5f7) cell_ai5_widget_pane_t6_ParamLimits

0xe84a,	// (0x0001a5f7) cell_ai5_widget_pane_t6

0xe85c,	// (0x0001a609) cell_ai5_widget_pane_t7_ParamLimits

0xe85c,	// (0x0001a609) cell_ai5_widget_pane_t7

0xe87b,	// (0x0001a628) cell_ai5_widget_pane_t8_ParamLimits

0xe87b,	// (0x0001a628) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x0001bbd1) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x0001bbd1) cell_ai5_widget_pane_t

0xe8ff,	// (0x0001a6ac) grid_ai5_widget_pane

0x7a3a,	// (0x000137e7) highlight_cell_ai5_widget_pane_ParamLimits

0x7a3a,	// (0x000137e7) highlight_cell_ai5_widget_pane

0xe913,	// (0x0001a6c0) ai5_sk_left_pane

0xe91d,	// (0x0001a6ca) ai5_sk_middle_pane

0xe927,	// (0x0001a6d4) ai5_sk_right_pane

0xe931,	// (0x0001a6de) bg_ai5_widget_pane_g1_ParamLimits

0xe931,	// (0x0001a6de) bg_ai5_widget_pane_g1

0xe93d,	// (0x0001a6ea) bg_ai5_widget_pane_g2_ParamLimits

0xe93d,	// (0x0001a6ea) bg_ai5_widget_pane_g2

0xe949,	// (0x0001a6f6) bg_ai5_widget_pane_g3_ParamLimits

0xe949,	// (0x0001a6f6) bg_ai5_widget_pane_g3

0xe955,	// (0x0001a702) bg_ai5_widget_pane_g4_ParamLimits

0xe955,	// (0x0001a702) bg_ai5_widget_pane_g4

0xe961,	// (0x0001a70e) bg_ai5_widget_pane_g5_ParamLimits

0xe961,	// (0x0001a70e) bg_ai5_widget_pane_g5

0xe96d,	// (0x0001a71a) bg_ai5_widget_pane_g6_ParamLimits

0xe96d,	// (0x0001a71a) bg_ai5_widget_pane_g6

0xe979,	// (0x0001a726) bg_ai5_widget_pane_g7_ParamLimits

0xe979,	// (0x0001a726) bg_ai5_widget_pane_g7

0xe985,	// (0x0001a732) bg_ai5_widget_pane_g8_ParamLimits

0xe985,	// (0x0001a732) bg_ai5_widget_pane_g8

0xe991,	// (0x0001a73e) bg_ai5_widget_pane_g9_ParamLimits

0xe991,	// (0x0001a73e) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x0001bbea) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x0001bbea) bg_ai5_widget_pane_g

0xe9c3,	// (0x0001a770) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c3,	// (0x0001a770) cell_shortcut_ai5_widget_pane

0x8906,	// (0x000146b3) bg_cell_shortcut_ai5_widget_pane

0xe9d4,	// (0x0001a781) cell_grid_ai5_widget_pane_g1

0x8906,	// (0x000146b3) highlight_cell_shortcut_ai5_widget_pane

0x9182,	// (0x00014f2f) ai5_sk_left_pane_g1

0xe9dd,	// (0x0001a78a) ai5_sk_left_pane_g2

0xe9e5,	// (0x0001a792) ai5_sk_left_pane_g3

0xe9ed,	// (0x0001a79a) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x0001bbfd) ai5_sk_left_pane_g

0xe9f5,	// (0x0001a7a2) ai5_sk_left_pane_t1

0x918a,	// (0x00014f37) ai5_sk_right_pane_g1

0xea03,	// (0x0001a7b0) ai5_sk_right_pane_g2

0xea0b,	// (0x0001a7b8) ai5_sk_right_pane_g3

0xea13,	// (0x0001a7c0) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x0001bc06) ai5_sk_right_pane_g

0xea1b,	// (0x0001a7c8) ai5_sk_right_pane_t1

0x918a,	// (0x00014f37) ai5_sk_middle_pane_g1

0x9182,	// (0x00014f2f) ai5_sk_middle_pane_g2

0x91a2,	// (0x00014f4f) ai5_sk_middle_pane_g3

0xea0b,	// (0x0001a7b8) ai5_sk_middle_pane_g4

0xe9e5,	// (0x0001a792) ai5_sk_middle_pane_g5

0xea29,	// (0x0001a7d6) ai5_sk_middle_pane_g6

0xea31,	// (0x0001a7de) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x0001bc0f) ai5_sk_middle_pane_g

0x8c9a,	// (0x00014a47) aid_touch_area_size_lc0_ParamLimits

0x8c9a,	// (0x00014a47) aid_touch_area_size_lc0

0x5c6e,	// (0x00011a1b) cell_hwr_candidate_pane_t1_ParamLimits

0x8cb6,	// (0x00014a63) aid_touch_navi_pane

0x8f8f,	// (0x00014d3c) status_dt_navi_pane_ParamLimits

0x8f8f,	// (0x00014d3c) status_dt_navi_pane

0x8f9c,	// (0x00014d49) status_dt_sta_pane_ParamLimits

0x8f9c,	// (0x00014d49) status_dt_sta_pane

0xea39,	// (0x0001a7e6) dt_sta_controll_pane

0xea46,	// (0x0001a7f3) dt_sta_indi_pane

0xea57,	// (0x0001a804) dt_sta_title_pane

0x6edf,	// (0x00012c8c) bg_dt_sta_indi_pane_ParamLimits

0x6edf,	// (0x00012c8c) bg_dt_sta_indi_pane

0xea6a,	// (0x0001a817) dt_sta_battery_pane

0xea72,	// (0x0001a81f) dt_sta_indi_pane_g1

0xea7b,	// (0x0001a828) dt_sta_indi_pane_g2

0xea84,	// (0x0001a831) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x0001bc1e) dt_sta_indi_pane_g

0xea8d,	// (0x0001a83a) dt_sta_signal_pane

0x7a3a,	// (0x000137e7) bg_dt_sta_title_pane_ParamLimits

0x7a3a,	// (0x000137e7) bg_dt_sta_title_pane

0xea96,	// (0x0001a843) dt_sta_title_pane_g1

0xea9e,	// (0x0001a84b) dt_sta_title_pane_t1_ParamLimits

0xea9e,	// (0x0001a84b) dt_sta_title_pane_t1

0x3896,	// (0x0000f643) bg_dt_sta_control_pane

0xeab3,	// (0x0001a860) dt_sta_controll_pane_g1

0xeabc,	// (0x0001a869) bg_dt_sta_title_pane_g1

0xeac5,	// (0x0001a872) bg_dt_sta_title_pane_g2

0xeace,	// (0x0001a87b) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x0001bc25) bg_dt_sta_title_pane_g

0xbcc4,	// (0x00017a71) bg_dt_sta_indi_pane_g1

0xead7,	// (0x0001a884) dt_sta_signal_pane_g1

0xeadf,	// (0x0001a88c) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x0001bc2c) dt_sta_signal_pane_g

0xeae7,	// (0x0001a894) dt_sta_battery_pane_g1

0xeaf0,	// (0x0001a89d) dt_sta_battery_pane_t1

0xbcc4,	// (0x00017a71) bg_dt_sta_control_pane_g1

0x837d,	// (0x0001412a) fep_china_uni_eep_pane

0x8385,	// (0x00014132) fep_china_uni_entry_pane_ParamLimits

0x8395,	// (0x00014142) popup_fep_china_uni_window_g1_ParamLimits

0x83a5,	// (0x00014152) popup_fep_china_uni_window_g2_ParamLimits

0x83a5,	// (0x00014152) popup_fep_china_uni_window_g2

0x0001,

0xf6f1,	// (0x0001b49e) popup_fep_china_uni_window_g_ParamLimits

0xf6f1,	// (0x0001b49e) popup_fep_china_uni_window_g

0xeaff,	// (0x0001a8ac) fep_china_uni_eep_pane_g1

0xeb07,	// (0x0001a8b4) fep_china_uni_eep_pane_t1

0xe4f9,	// (0x0001a2a6) aid_touch_area_size_smil_player

0x8e0c,	// (0x00014bb9) lc0_clock_pane

0x8ff3,	// (0x00014da0) status_pane_g5_ParamLimits

0x8ff3,	// (0x00014da0) status_pane_g5

0x50c8,	// (0x00010e75) popup_keymap_window

0x8fb1,	// (0x00014d5e) status_icon_pane

0xe706,	// (0x0001a4b3) cell_ai5_widget_pane_g3_ParamLimits

0xe720,	// (0x0001a4cd) cell_ai5_widget_pane_g4_ParamLimits

0xe730,	// (0x0001a4dd) cell_ai5_widget_pane_g5_ParamLimits

0xe758,	// (0x0001a505) cell_ai5_widget_pane_g8_ParamLimits

0xe758,	// (0x0001a505) cell_ai5_widget_pane_g8

0xe76c,	// (0x0001a519) cell_ai5_widget_pane_g9_ParamLimits

0xe76c,	// (0x0001a519) cell_ai5_widget_pane_g9

0xe780,	// (0x0001a52d) cell_ai5_widget_pane_g10_ParamLimits

0xe780,	// (0x0001a52d) cell_ai5_widget_pane_g10

0xeb16,	// (0x0001a8c3) status_icon_pane_g1

0x3896,	// (0x0000f643) bg_popup_sub_pane_cp13

0xeb1e,	// (0x0001a8cb) popup_keymap_window_t1

0x8bdb,	// (0x00014988) control_pane_g6_ParamLimits

0x8bdb,	// (0x00014988) control_pane_g6

0x8be8,	// (0x00014995) control_pane_g7_ParamLimits

0x8be8,	// (0x00014995) control_pane_g7

0x8bf5,	// (0x000149a2) control_pane_g8_ParamLimits

0x8bf5,	// (0x000149a2) control_pane_g8

0xea39,	// (0x0001a7e6) dt_sta_controll_pane_ParamLimits

0xea46,	// (0x0001a7f3) dt_sta_indi_pane_ParamLimits

0xea57,	// (0x0001a804) dt_sta_title_pane_ParamLimits

0x741b,	// (0x000131c8) aid_size_touch_scroll_bar_cale

0x4709,	// (0x000104b6) popup_discreet_window_ParamLimits

0x4709,	// (0x000104b6) popup_discreet_window

0x4791,	// (0x0001053e) popup_sk_window

0x98f4,	// (0x000156a1) bg_popup_sub_pane_cp28_ParamLimits

0x98f4,	// (0x000156a1) bg_popup_sub_pane_cp28

0xeb2c,	// (0x0001a8d9) popup_discreet_window_g1_ParamLimits

0xeb2c,	// (0x0001a8d9) popup_discreet_window_g1

0xeb4c,	// (0x0001a8f9) popup_discreet_window_t1_ParamLimits

0xeb4c,	// (0x0001a8f9) popup_discreet_window_t1

0xeb6a,	// (0x0001a917) popup_discreet_window_t2_ParamLimits

0xeb6a,	// (0x0001a917) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x0001bc31) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x0001bc31) popup_discreet_window_t

0x667b,	// (0x00012428) popup_sk_window_g1

0x6685,	// (0x00012432) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x0001bc38) popup_sk_window_g

0x668d,	// (0x0001243a) popup_sk_window_t1

0x669b,	// (0x00012448) popup_sk_window_t1_copy1

0xe6f2,	// (0x0001a49f) cell_ai5_widget_pane_g2_ParamLimits

0xe88d,	// (0x0001a63a) cell_ai5_widget_pane_t9_ParamLimits

0xe88d,	// (0x0001a63a) cell_ai5_widget_pane_t9

0x3896,	// (0x0000f643) main_fep_fshwr2_pane

0x66a9,	// (0x00012456) aid_fshwr2_btn_pane

0x66b9,	// (0x00012466) aid_fshwr2_syb_pane

0x66cd,	// (0x0001247a) aid_fshwr2_txt_pane

0x66dd,	// (0x0001248a) fshwr2_func_candi_pane

0x6701,	// (0x000124ae) fshwr2_hwr_syb_pane

0x671b,	// (0x000124c8) fshwr2_icf_pane

0x4630,	// (0x000103dd) fshwr2_icf_bg_pane

0x6749,	// (0x000124f6) fshwr2_icf_pane_t1_ParamLimits

0x6749,	// (0x000124f6) fshwr2_icf_pane_t1

0x8252,	// (0x00013fff) fshwr2_func_candi_pane_g1

0xebbc,	// (0x0001a969) fshwr2_func_candi_row_pane_ParamLimits

0xebbc,	// (0x0001a969) fshwr2_func_candi_row_pane

0x6761,	// (0x0001250e) cell_fshwr2_syb_pane_ParamLimits

0x6761,	// (0x0001250e) cell_fshwr2_syb_pane

0x6784,	// (0x00012531) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6784,	// (0x00012531) fshwr2_hwr_syb_pane_g1

0x4630,	// (0x000103dd) bg_popup_call_pane_cp01

0x6792,	// (0x0001253f) fshwr2_func_candi_cell_pane_ParamLimits

0x6792,	// (0x0001253f) fshwr2_func_candi_cell_pane

0x9f68,	// (0x00015d15) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f68,	// (0x00015d15) fshwr2_func_candi_cell_bg_pane

0x67dd,	// (0x0001258a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x67dd,	// (0x0001258a) fshwr2_func_candi_cell_pane_g1

0x6808,	// (0x000125b5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6808,	// (0x000125b5) fshwr2_func_candi_cell_pane_t1

0x4630,	// (0x000103dd) bg_button_pane_cp08

0x8c32,	// (0x000149df) cell_fshwr2_syb_bg_pane

0x681b,	// (0x000125c8) cell_fshwr2_syb_bg_pane_g1

0x682f,	// (0x000125dc) cell_fshwr2_syb_bg_pane_t1

0x7a3a,	// (0x000137e7) main_tmo_pane

0xa403,	// (0x000161b0) uni_indicator_pane_g1_ParamLimits

0xa419,	// (0x000161c6) uni_indicator_pane_g2_ParamLimits

0xa42f,	// (0x000161dc) uni_indicator_pane_g3_ParamLimits

0xa442,	// (0x000161ef) uni_indicator_pane_g4_ParamLimits

0xa442,	// (0x000161ef) uni_indicator_pane_g4

0xa456,	// (0x00016203) uni_indicator_pane_g5_ParamLimits

0xa456,	// (0x00016203) uni_indicator_pane_g5

0xa456,	// (0x00016203) uni_indicator_pane_g6_ParamLimits

0xa456,	// (0x00016203) uni_indicator_pane_g6

0xf8f0,	// (0x0001b69d) uni_indicator_pane_g_ParamLimits

0xd50d,	// (0x000192ba) popup_tmo_note_window_ParamLimits

0xd50d,	// (0x000192ba) popup_tmo_note_window

0x5ed8,	// (0x00011c85) fshwr2_bg_pane

0x67f9,	// (0x000125a6) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x67f9,	// (0x000125a6) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x0001bc3d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x0001bc3d) fshwr2_func_candi_cell_pane_g

0x5c27,	// (0x000119d4) bg_popup_window_pane_cp01

0x6845,	// (0x000125f2) bg_popup_window_pane_g1_cp01

0xebe3,	// (0x0001a990) bg_popup_window_pane_cp22_ParamLimits

0xebe3,	// (0x0001a990) bg_popup_window_pane_cp22

0xebf1,	// (0x0001a99e) listscroll_tmo_link_pane_ParamLimits

0xebf1,	// (0x0001a99e) listscroll_tmo_link_pane

0xec31,	// (0x0001a9de) popup_tmo_note_window_g1_ParamLimits

0xec31,	// (0x0001a9de) popup_tmo_note_window_g1

0xec3e,	// (0x0001a9eb) tmo_note_info_pane_ParamLimits

0xec3e,	// (0x0001a9eb) tmo_note_info_pane

0xec58,	// (0x0001aa05) list_tmo_note_info_pane_g1_ParamLimits

0xec58,	// (0x0001aa05) list_tmo_note_info_pane_g1

0xec6f,	// (0x0001aa1c) list_tmo_note_info_pane_g2_ParamLimits

0xec6f,	// (0x0001aa1c) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x0001bc42) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x0001bc42) list_tmo_note_info_pane_g

0xec8b,	// (0x0001aa38) list_tmo_note_info_text_pane_ParamLimits

0xec8b,	// (0x0001aa38) list_tmo_note_info_text_pane

0xed0c,	// (0x0001aab9) list_tmo_link_pane

0xed19,	// (0x0001aac6) scroll_pane_cp20

0xed26,	// (0x0001aad3) list_single_tmo_link_pane_ParamLimits

0xed26,	// (0x0001aad3) list_single_tmo_link_pane

0xed36,	// (0x0001aae3) list_single_tmo_link_pane_t1

0xed44,	// (0x0001aaf1) list_tmo_note_info_text_pane_t1_ParamLimits

0xed44,	// (0x0001aaf1) list_tmo_note_info_text_pane_t1

0x7c79,	// (0x00013a26) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7c79,	// (0x00013a26) aid_size_touch_scroll_bar_cp01

0x7ae9,	// (0x00013896) aid_size_touch_slider_marker

0x4779,	// (0x00010526) popup_settings_window_ParamLimits

0x4779,	// (0x00010526) popup_settings_window

0x8c66,	// (0x00014a13) popup_candi_list_indi_window

0x8cb6,	// (0x00014a63) aid_touch_navi_pane_ParamLimits

0x5e33,	// (0x00011be0) rs_clock_indi_pane

0x5e3c,	// (0x00011be9) sctrl_sk_bottom_pane_ParamLimits

0x5e4d,	// (0x00011bfa) sctrl_sk_top_pane_ParamLimits

0x5f48,	// (0x00011cf5) popup_fep_tooltip_window

0xe668,	// (0x0001a415) aid_size_cell_widget_grid_ParamLimits

0xe6dd,	// (0x0001a48a) cell_ai5_widget_pane_g1_ParamLimits

0xe6dd,	// (0x0001a48a) cell_ai5_widget_pane_g1

0xe740,	// (0x0001a4ed) cell_ai5_widget_pane_g6_ParamLimits

0xe74c,	// (0x0001a4f9) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x0001bbb6) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0001bbb6) cell_ai5_widget_pane_g

0xe8bc,	// (0x0001a669) cell_ai5_widget_pane_t10_ParamLimits

0xe8bc,	// (0x0001a669) cell_ai5_widget_pane_t10

0xe8ff,	// (0x0001a6ac) grid_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0001a74a) cell_contacts_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0001a74a) cell_contacts_ai5_widget_pane

0xeb7f,	// (0x0001a92c) popup_discreet_window_t3_ParamLimits

0xeb7f,	// (0x0001a92c) popup_discreet_window_t3

0x6733,	// (0x000124e0) popup_fshwr2_char_preview_window_ParamLimits

0x6733,	// (0x000124e0) popup_fshwr2_char_preview_window

0xeca9,	// (0x0001aa56) tmo_note_info_pane_t1

0xecbe,	// (0x0001aa6b) tmo_note_info_pane_t2

0xecd3,	// (0x0001aa80) tmo_note_info_pane_t3

0xece8,	// (0x0001aa95) tmo_note_info_pane_t4

0xecfa,	// (0x0001aaa7) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x0001bc47) tmo_note_info_pane_t

0xed0c,	// (0x0001aab9) list_tmo_link_pane_ParamLimits

0xed19,	// (0x0001aac6) scroll_pane_cp20_ParamLimits

0x4630,	// (0x000103dd) bg_popup_fep_char_preview_window_cp01

0xed5d,	// (0x0001ab0a) popup_fshwr2_char_preview_window_t1

0xed6b,	// (0x0001ab18) popup_candi_list_indi_window_g1

0xed74,	// (0x0001ab21) bg_cell_contacts_ai5_widget_pane

0xed80,	// (0x0001ab2d) cell_contacts_ai5_widget_pane_g1

0xc507,	// (0x000182b4) cell_contacts_ai5_widget_pane_g2

0xed95,	// (0x0001ab42) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x0001bc52) cell_contacts_ai5_widget_pane_g

0xeda1,	// (0x0001ab4e) cell_contacts_ai5_widget_pane_t1

0x7a3a,	// (0x000137e7) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee18,	// (0x0001abc5) settings_container_pane

0x8906,	// (0x000146b3) listscroll_set_pane_copy1

0xb0b2,	// (0x00016e5f) scroll_pane_cp121_copy1

0x9691,	// (0x0001543e) set_content_pane_copy1

0xee24,	// (0x0001abd1) aid_height_set_list_copy1_ParamLimits

0xee24,	// (0x0001abd1) aid_height_set_list_copy1

0xa650,	// (0x000163fd) aid_size_parent_copy1_ParamLimits

0xa650,	// (0x000163fd) aid_size_parent_copy1

0xee30,	// (0x0001abdd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee30,	// (0x0001abdd) button_value_adjust_pane_cp6_copy1

0x8c32,	// (0x000149df) list_highlight_pane_cp2_copy1_ParamLimits

0x8c32,	// (0x000149df) list_highlight_pane_cp2_copy1

0xee44,	// (0x0001abf1) list_set_pane_copy1_ParamLimits

0xee44,	// (0x0001abf1) list_set_pane_copy1

0xedb3,	// (0x0001ab60) main_pane_set_t1_copy1_ParamLimits

0xedb3,	// (0x0001ab60) main_pane_set_t1_copy1

0xeded,	// (0x0001ab9a) main_pane_set_t2_copy1_ParamLimits

0xeded,	// (0x0001ab9a) main_pane_set_t2_copy1

0xeef1,	// (0x0001ac9e) main_pane_set_t3_copy1

0xeeff,	// (0x0001acac) main_pane_set_t4_copy1

0xee0c,	// (0x0001abb9) set_content_pane_g1_copy1_ParamLimits

0xee0c,	// (0x0001abb9) set_content_pane_g1_copy1

0xef0d,	// (0x0001acba) setting_code_pane_copy1

0xef15,	// (0x0001acc2) setting_slider_graphic_pane_copy1

0xef15,	// (0x0001acc2) setting_slider_pane_copy1

0xef1d,	// (0x0001acca) setting_text_pane_copy1

0xef1d,	// (0x0001acca) setting_volume_pane_copy1

0xef0d,	// (0x0001acba) settings_code_pane_cp2_copy1

0xef25,	// (0x0001acd2) settings_code_pane_cp_copy1_ParamLimits

0xef25,	// (0x0001acd2) settings_code_pane_cp_copy1

0x684e,	// (0x000125fb) volume_set_pane_copy1

0xef39,	// (0x0001ace6) volume_set_pane_g10_copy1

0xef41,	// (0x0001acee) volume_set_pane_g1_copy1

0xef49,	// (0x0001acf6) volume_set_pane_g2_copy1

0xef51,	// (0x0001acfe) volume_set_pane_g3_copy1

0xef59,	// (0x0001ad06) volume_set_pane_g4_copy1

0xef61,	// (0x0001ad0e) volume_set_pane_g5_copy1

0xef69,	// (0x0001ad16) volume_set_pane_g6_copy1

0xef71,	// (0x0001ad1e) volume_set_pane_g7_copy1

0xef79,	// (0x0001ad26) volume_set_pane_g8_copy1

0xef81,	// (0x0001ad2e) volume_set_pane_g9_copy1

0x6c3c,	// (0x000129e9) bg_set_opt_pane_cp_copy1_ParamLimits

0x6c3c,	// (0x000129e9) bg_set_opt_pane_cp_copy1

0x6856,	// (0x00012603) setting_slider_pane_t1_copy1_ParamLimits

0x6856,	// (0x00012603) setting_slider_pane_t1_copy1

0x6875,	// (0x00012622) setting_slider_pane_t2_copy1_ParamLimits

0x6875,	// (0x00012622) setting_slider_pane_t2_copy1

0x688f,	// (0x0001263c) setting_slider_pane_t3_copy1_ParamLimits

0x688f,	// (0x0001263c) setting_slider_pane_t3_copy1

0x68a7,	// (0x00012654) slider_set_pane_copy1_ParamLimits

0x68a7,	// (0x00012654) slider_set_pane_copy1

0x7b69,	// (0x00013916) set_opt_bg_pane_g1_copy2

0x7b71,	// (0x0001391e) set_opt_bg_pane_g2_copy2

0xef89,	// (0x0001ad36) set_opt_bg_pane_g3_copy2

0x7b81,	// (0x0001392e) set_opt_bg_pane_g4_copy2

0x7b89,	// (0x00013936) set_opt_bg_pane_g5_copy2

0x7b91,	// (0x0001393e) set_opt_bg_pane_g6_copy2

0xef93,	// (0x0001ad40) set_opt_bg_pane_g7_copy2

0xef9b,	// (0x0001ad48) set_opt_bg_pane_g8_copy2

0xefa5,	// (0x0001ad52) set_opt_bg_pane_g9_copy2

0x68bd,	// (0x0001266a) aid_size_touch_slider_mark_copy1_ParamLimits

0x68bd,	// (0x0001266a) aid_size_touch_slider_mark_copy1

0xefaf,	// (0x0001ad5c) slider_set_pane_g1_copy1

0x68d1,	// (0x0001267e) slider_set_pane_g2_copy1

0x5868,	// (0x00011615) slider_set_pane_g3_copy1_ParamLimits

0x5868,	// (0x00011615) slider_set_pane_g3_copy1

0x587c,	// (0x00011629) slider_set_pane_g4_copy1_ParamLimits

0x587c,	// (0x00011629) slider_set_pane_g4_copy1

0x5894,	// (0x00011641) slider_set_pane_g5_copy1_ParamLimits

0x5894,	// (0x00011641) slider_set_pane_g5_copy1

0x5868,	// (0x00011615) slider_set_pane_g6_copy1_ParamLimits

0x5868,	// (0x00011615) slider_set_pane_g6_copy1

0x68d9,	// (0x00012686) slider_set_pane_g7_copy1_ParamLimits

0x68d9,	// (0x00012686) slider_set_pane_g7_copy1

0x3a68,	// (0x0000f815) bg_set_opt_pane_cp2_copy1

0xefb8,	// (0x0001ad65) setting_slider_graphic_pane_g1_copy1

0xefc1,	// (0x0001ad6e) setting_slider_graphic_pane_t1_copy1

0xefd1,	// (0x0001ad7e) setting_slider_graphic_pane_t2_copy1

0xefe1,	// (0x0001ad8e) slider_set_pane_cp_copy1

0xeff1,	// (0x0001ad9e) input_focus_pane_cp1_copy1

0xeffa,	// (0x0001ada7) list_set_text_pane_copy1

0xf002,	// (0x0001adaf) setting_text_pane_g1_copy1

0x6c95,	// (0x00012a42) set_text_pane_t1_copy1

0xeff1,	// (0x0001ad9e) input_focus_pane_cp2_copy1

0xf002,	// (0x0001adaf) setting_code_pane_g1_copy1

0xf00b,	// (0x0001adb8) setting_code_pane_t1_copy1

0xaeda,	// (0x00016c87) list_set_graphic_pane_copy1

0x3a68,	// (0x0000f815) bg_set_opt_pane_cp4_copy1

0x860b,	// (0x000143b8) list_set_graphic_pane_g1_copy1_ParamLimits

0x860b,	// (0x000143b8) list_set_graphic_pane_g1_copy1

0xf019,	// (0x0001adc6) list_set_graphic_pane_g2_copy1

0x8623,	// (0x000143d0) list_set_graphic_pane_t1_copy1_ParamLimits

0x8623,	// (0x000143d0) list_set_graphic_pane_t1_copy1

0xbcc4,	// (0x00017a71) rs_clock_indi_pane_g1

0xf021,	// (0x0001adce) rs_clock_indi_pane_t1

0xf02f,	// (0x0001addc) rs_indi_pane

0xf037,	// (0x0001ade4) rs_indi_pane_g1

0xf040,	// (0x0001aded) rs_indi_pane_g2

0xf049,	// (0x0001adf6) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x0001bc59) rs_indi_pane_g

0x8906,	// (0x000146b3) bg_popup_preview_window_pane_cp03

0xf052,	// (0x0001adff) popup_fep_tooltip_window_t1

0xcb4e,	// (0x000188fb) popup_note2_window_g2_ParamLimits

0xcb4e,	// (0x000188fb) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0001b9e6) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0001b9e6) popup_note2_window_g

0xd144,	// (0x00018ef1) bg_popup_sub_pane_cp11_ParamLimits

0xd151,	// (0x00018efe) cell_ai3_links_pane_g1_ParamLimits

0xd168,	// (0x00018f15) cell_ai3_links_pane_t1

0x6c95,	// (0x00012a42) set_text_pane_t1_copy1_ParamLimits

0x8816,	// (0x000145c3) cell_graphic_popup_pane_cp2_ParamLimits

0x8816,	// (0x000145c3) cell_graphic_popup_pane_cp2

0xf060,	// (0x0001ae0d) cell_graphic_popup_pane_g1_cp2

0x722e,	// (0x00012fdb) cell_graphic_popup_pane_g2_cp2

0xf068,	// (0x0001ae15) cell_graphic_popup_pane_g3_cp2

0xf070,	// (0x0001ae1d) cell_graphic_popup_pane_t2_cp2

0x723f,	// (0x00012fec) grid_highlight_pane_cp3_cp2

0x7f6d,	// (0x00013d1a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7a3a,	// (0x000137e7) main_tmo_pane_ParamLimits

0xd501,	// (0x000192ae) popup_tmo_big_image_note_window

0xe6cc,	// (0x0001a479) cell_ai5_widget_list_pane

0xe6d4,	// (0x0001a481) cell_ai5_widget_lrg_icon_pane

0xeca9,	// (0x0001aa56) tmo_note_info_pane_t1_ParamLimits

0xecbe,	// (0x0001aa6b) tmo_note_info_pane_t2_ParamLimits

0xecd3,	// (0x0001aa80) tmo_note_info_pane_t3_ParamLimits

0xece8,	// (0x0001aa95) tmo_note_info_pane_t4_ParamLimits

0xecfa,	// (0x0001aaa7) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x0001bc47) tmo_note_info_pane_t_ParamLimits

0xee18,	// (0x0001abc5) settings_container_pane_ParamLimits

0xefe9,	// (0x0001ad96) indicator_popup_pane_cp5

0xefe9,	// (0x0001ad96) indicator_popup_pane_cp6

0xaeda,	// (0x00016c87) list_set_graphic_pane_copy1_ParamLimits

0x3896,	// (0x0000f643) bg_popup_window_pane_cp23

0xf07e,	// (0x0001ae2b) popup_tmo_big_image_note_window_g1

0xf088,	// (0x0001ae35) popup_tmo_big_image_note_window_t1

0xf098,	// (0x0001ae45) popup_tmo_big_image_note_window_t2

0xf0a8,	// (0x0001ae55) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x0001bc60) popup_tmo_big_image_note_window_t

0xbcc4,	// (0x00017a71) cell_ai5_widget_lrg_icon_pane_g1

0xf0b8,	// (0x0001ae65) cell_ai5_widget_lrg_icon_pane_t1

0xf0c6,	// (0x0001ae73) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c6,	// (0x0001ae73) cell_ai5_widget_list_row_pane

0xf0dd,	// (0x0001ae8a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0dd,	// (0x0001ae8a) cell_ai5_widget_list_row_pane_g1

0xf0ea,	// (0x0001ae97) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ea,	// (0x0001ae97) cell_ai5_widget_list_row_pane_t1

0xf115,	// (0x0001aec2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf115,	// (0x0001aec2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x0001bc67) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x0001bc67) cell_ai5_widget_list_row_pane_t

0x4630,	// (0x000103dd) main_fep_vtchi_ss_pane

0xf165,	// (0x0001af12) popup_fep_char_pre_window

0xf16d,	// (0x0001af1a) popup_fep_ituss_window

0xf19f,	// (0x0001af4c) popup_fep_vkbss_window

0x8c32,	// (0x000149df) grid_vkbss_keypad_pane_ParamLimits

0x8c32,	// (0x000149df) grid_vkbss_keypad_pane

0xf1e5,	// (0x0001af92) ituss_keypad_pane

0x691a,	// (0x000126c7) aid_vkbss_key_offset_ParamLimits

0x691a,	// (0x000126c7) aid_vkbss_key_offset

0x6926,	// (0x000126d3) cell_vkbss_key_pane_ParamLimits

0x6926,	// (0x000126d3) cell_vkbss_key_pane

0xf1f1,	// (0x0001af9e) bg_cell_vkbss_key_g1_ParamLimits

0xf1f1,	// (0x0001af9e) bg_cell_vkbss_key_g1

0xf1fd,	// (0x0001afaa) cell_vkbss_key_3p_pane_ParamLimits

0xf1fd,	// (0x0001afaa) cell_vkbss_key_3p_pane

0xf233,	// (0x0001afe0) cell_vkbss_key_g1_ParamLimits

0xf233,	// (0x0001afe0) cell_vkbss_key_g1

0xf269,	// (0x0001b016) cell_vkbss_key_t1_ParamLimits

0xf269,	// (0x0001b016) cell_vkbss_key_t1

0x6984,	// (0x00012731) cell_ituss_key_pane_ParamLimits

0x6984,	// (0x00012731) cell_ituss_key_pane

0xf2c5,	// (0x0001b072) bg_cell_ituss_key_g1_ParamLimits

0xf2c5,	// (0x0001b072) bg_cell_ituss_key_g1

0xf2d1,	// (0x0001b07e) cell_ituss_key_pane_g1_ParamLimits

0xf2d1,	// (0x0001b07e) cell_ituss_key_pane_g1

0x6995,	// (0x00012742) cell_ituss_key_pane_g2_ParamLimits

0x6995,	// (0x00012742) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x0001bc6e) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x0001bc6e) cell_ituss_key_pane_g

0x6a19,	// (0x000127c6) cell_ituss_key_t1_ParamLimits

0x6a19,	// (0x000127c6) cell_ituss_key_t1

0x6a53,	// (0x00012800) cell_ituss_key_t2_ParamLimits

0x6a53,	// (0x00012800) cell_ituss_key_t2

0x6a85,	// (0x00012832) cell_ituss_key_t3_ParamLimits

0x6a85,	// (0x00012832) cell_ituss_key_t3

0x6ab6,	// (0x00012863) cell_ituss_key_t4_ParamLimits

0x6ab6,	// (0x00012863) cell_ituss_key_t4

0x0005,

0xfece,	// (0x0001bc7b) cell_ituss_key_t_ParamLimits

0xfece,	// (0x0001bc7b) cell_ituss_key_t

0xf2f7,	// (0x0001b0a4) cell_vkbss_key_3p_pane_g1

0xf2ff,	// (0x0001b0ac) cell_vkbss_key_3p_pane_g2

0xf307,	// (0x0001b0b4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedb,	// (0x0001bc88) cell_vkbss_key_3p_pane_g

0x8906,	// (0x000146b3) bg_popup_fep_char_preview_window_cp02

0xf30f,	// (0x0001b0bc) popup_fep_char_pre_window_t1

0xe655,	// (0x0001a402) main_ai5_sk_pane

0xed74,	// (0x0001ab21) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed80,	// (0x0001ab2d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc507,	// (0x000182b4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed95,	// (0x0001ab42) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x0001bc52) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda1,	// (0x0001ab4e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7a3a,	// (0x000137e7) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31d,	// (0x0001b0ca) main_ai5_sk_pane_g1

0x972d,	// (0x000154da) popup_query_code_window_g1

0xf186,	// (0x0001af33) popup_fep_vkb_icf_pane

0xf1b9,	// (0x0001af66) popup_fep_vtchi_icf_pane

0xf326,	// (0x0001b0d3) bg_icf_pane

0xf326,	// (0x0001b0d3) list_vkb_icf_pane

0xf332,	// (0x0001b0df) bg_icf_pane_cp01

0xf345,	// (0x0001b0f2) vtchi_icf_list_pane

0xf3a5,	// (0x0001b152) list_vkb_icf_pane_t1_ParamLimits

0xf3a5,	// (0x0001b152) list_vkb_icf_pane_t1

0xf3c3,	// (0x0001b170) vtchi_icf_list_pane_t1_ParamLimits

0xf3c3,	// (0x0001b170) vtchi_icf_list_pane_t1

0xf16d,	// (0x0001af1a) popup_fep_ituss_window_ParamLimits

0xf1b9,	// (0x0001af66) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e5,	// (0x0001af92) ituss_keypad_pane_ParamLimits

0x6910,	// (0x000126bd) ituss_sks_pane

0xf326,	// (0x0001b0d3) bg_icf_pane_ParamLimits

0xf13d,	// (0x0001aeea) icf_edit_indi_pane_ParamLimits

0xf13d,	// (0x0001aeea) icf_edit_indi_pane

0xf326,	// (0x0001b0d3) list_vkb_icf_pane_ParamLimits

0xf332,	// (0x0001b0df) bg_icf_pane_cp01_ParamLimits

0xf158,	// (0x0001af05) icf_edit_indi_pane_cp01_ParamLimits

0xf158,	// (0x0001af05) icf_edit_indi_pane_cp01

0xf345,	// (0x0001b0f2) vtchi_query_pane

0xe4c9,	// (0x0001a276) icf_edit_indi_pane_g1_ParamLimits

0xe4c9,	// (0x0001a276) icf_edit_indi_pane_g1

0xf438,	// (0x0001b1e5) icf_edit_indi_pane_g2_ParamLimits

0xf438,	// (0x0001b1e5) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x0001bcb3) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x0001bcb3) icf_edit_indi_pane_g

0xf44c,	// (0x0001b1f9) icf_edit_indi_pane_t1

0xf3e1,	// (0x0001b18e) bg_input_focus_pane_cp042

0x7412,	// (0x000131bf) vtchi_button_pane

0xf3ea,	// (0x0001b197) vtchi_query_pane_t1

0xf3f8,	// (0x0001b1a5) vtchi_query_pane_t2

0xf406,	// (0x0001b1b3) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x0001bca2) vtchi_query_pane_t

0x4630,	// (0x000103dd) bg_button_pane_cp13

0xf414,	// (0x0001b1c1) vtchi_button_pane_g1

0x6b37,	// (0x000128e4) ituss_sks_pane_g1

0x6b42,	// (0x000128ef) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x0001bca9) ituss_sks_pane_g

0xf41c,	// (0x0001b1c9) ituss_sks_pane_t1

0xf42a,	// (0x0001b1d7) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x0001bcae) ituss_sks_pane_t

0xb6fe,	// (0x000174ab) indicator_nsta_pane_cp_g1

0xb707,	// (0x000174b4) indicator_nsta_pane_cp_g2

0xb70f,	// (0x000174bc) indicator_nsta_pane_cp_g3

0xb717,	// (0x000174c4) indicator_nsta_pane_cp_g4

0xb707,	// (0x000174b4) indicator_nsta_pane_cp_g5

0xb70f,	// (0x000174bc) indicator_nsta_pane_cp_g6

0x0005,

0xfa77,	// (0x0001b824) indicator_nsta_pane_cp_g

0xe225,	// (0x00019fd2) cell_graphic2_pane_t2_ParamLimits

0xe225,	// (0x00019fd2) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x0001bb3d) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x0001bb3d) cell_graphic2_pane_t

0xe251,	// (0x00019ffe) cell_graphic2_control_pane_t1

0x832c,	// (0x000140d9) signal_pane_g3_ParamLimits

0x832c,	// (0x000140d9) signal_pane_g3

0x833e,	// (0x000140eb) signal_pane_g4_ParamLimits

0x833e,	// (0x000140eb) signal_pane_g4

0xf127,	// (0x0001aed4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf127,	// (0x0001aed4) cell_ai5_widget_list_row_pane_t3

0xf2e5,	// (0x0001b092) cell_ituss_key_pane_t1_ParamLimits

0xf2e5,	// (0x0001b092) cell_ituss_key_pane_t1

0x932d,	// (0x000150da) form_field_data_wide_pane_vc_t2_ParamLimits

0x932d,	// (0x000150da) form_field_data_wide_pane_vc_t2

0x9341,	// (0x000150ee) form_field_data_wide_pane_vc_t3_ParamLimits

0x9341,	// (0x000150ee) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d8,	// (0x0001b585) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d8,	// (0x0001b585) form_field_data_wide_pane_vc_t

0xb3a8,	// (0x00017155) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb3a8,	// (0x00017155) form_field_slider_wide_pane_vc_t3

0xb486,	// (0x00017233) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb486,	// (0x00017233) form_field_popup_wide_pane_vc_t2

0xb49d,	// (0x0001724a) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb49d,	// (0x0001724a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa66,	// (0x0001b813) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0001b813) form_field_popup_wide_pane_vc_t

0x66a9,	// (0x00012456) aid_fshwr2_btn_pane_ParamLimits

0x66b9,	// (0x00012466) aid_fshwr2_syb_pane_ParamLimits

0x66cd,	// (0x0001247a) aid_fshwr2_txt_pane_ParamLimits

0x5ed8,	// (0x00011c85) fshwr2_bg_pane_ParamLimits

0x66dd,	// (0x0001248a) fshwr2_func_candi_pane_ParamLimits

0x6701,	// (0x000124ae) fshwr2_hwr_syb_pane_ParamLimits

0x671b,	// (0x000124c8) fshwr2_icf_pane_ParamLimits

0xb309,	// (0x000170b6) list_double_graphic_pane_vc_g4_ParamLimits

0xb309,	// (0x000170b6) list_double_graphic_pane_vc_g4

0x69b5,	// (0x00012762) cell_ituss_key_pane_g3_ParamLimits

0x69b5,	// (0x00012762) cell_ituss_key_pane_g3

0x6ae7,	// (0x00012894) cell_ituss_key_t5_ParamLimits

0x6ae7,	// (0x00012894) cell_ituss_key_t5

0xf19f,	// (0x0001af4c) popup_fep_vkbss_window_ParamLimits

0xe65f,	// (0x0001a40c) aid_cell_ai5_quarter

0xf44c,	// (0x0001b1f9) icf_edit_indi_pane_t1_ParamLimits

0x6f87,	// (0x00012d34) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6f87,	// (0x00012d34) aid_tch_indicator_popup_pane_cp2

0x6f9a,	// (0x00012d47) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6f9a,	// (0x00012d47) aid_tch_query_popup_data_pane_cp2

0x96d5,	// (0x00015482) aid_tch_query_popup_pane_ParamLimits

0x96d5,	// (0x00015482) aid_tch_query_popup_pane

0x96d5,	// (0x00015482) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x96d5,	// (0x00015482) aid_tch_query_popup_data_pane_cp1

0x8c32,	// (0x000149df) cell_fshwr2_syb_bg_pane_ParamLimits

0x681b,	// (0x000125c8) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x682f,	// (0x000125dc) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf186,	// (0x0001af33) popup_fep_vkb_icf_pane_ParamLimits

0x64e9,	// (0x00012296) bg_popup_fep_char_preview_window_g10

0xe794,	// (0x0001a541) cell_ai5_widget_pane_g11_ParamLimits

0xe794,	// (0x0001a541) cell_ai5_widget_pane_g11

0xe7a0,	// (0x0001a54d) cell_ai5_widget_pane_g12_ParamLimits

0xe7a0,	// (0x0001a54d) cell_ai5_widget_pane_g12

0xe7ac,	// (0x0001a559) cell_ai5_widget_pane_g13_ParamLimits

0xe7ac,	// (0x0001a559) cell_ai5_widget_pane_g13

0xe8db,	// (0x0001a688) cell_ai5_widget_pane_t11_ParamLimits

0xe8db,	// (0x0001a688) cell_ai5_widget_pane_t11

0xe8ed,	// (0x0001a69a) cell_ai5_widget_pane_t12_ParamLimits

0xe8ed,	// (0x0001a69a) cell_ai5_widget_pane_t12

0x69c1,	// (0x0001276e) cell_ituss_key_pane_g4_ParamLimits

0x69c1,	// (0x0001276e) cell_ituss_key_pane_g4

0x69dd,	// (0x0001278a) cell_ituss_key_pane_g5_ParamLimits

0x69dd,	// (0x0001278a) cell_ituss_key_pane_g5

0x69f9,	// (0x000127a6) cell_ituss_key_pane_g6_ParamLimits

0x69f9,	// (0x000127a6) cell_ituss_key_pane_g6

0x917a,	// (0x00014f27) bg_icf_pane_g1

0xf34d,	// (0x0001b0fa) bg_icf_pane_g2

0xf359,	// (0x0001b106) bg_icf_pane_g3

0xf363,	// (0x0001b110) bg_icf_pane_g4

0xf36f,	// (0x0001b11c) bg_icf_pane_g5

0xf379,	// (0x0001b126) bg_icf_pane_g6

0xf385,	// (0x0001b132) bg_icf_pane_g7

0xf38f,	// (0x0001b13c) bg_icf_pane_g8

0xf39b,	// (0x0001b148) bg_icf_pane_g9

0x0008,

0xfee2,	// (0x0001bc8f) bg_icf_pane_g

0xf1d2,	// (0x0001af7f) popup_hyb_candi_window_ParamLimits

0xf1d2,	// (0x0001af7f) popup_hyb_candi_window

0x929c,	// (0x00015049) bg_popup_sub_pane_cp01_ParamLimits

0x929c,	// (0x00015049) bg_popup_sub_pane_cp01

0xf465,	// (0x0001b212) entry_hyb_candi_pane_ParamLimits

0xf465,	// (0x0001b212) entry_hyb_candi_pane

0xf474,	// (0x0001b221) grid_hyb_candi_pane_ParamLimits

0xf474,	// (0x0001b221) grid_hyb_candi_pane

0xf489,	// (0x0001b236) grid_hyb_phrase_pane_ParamLimits

0xf489,	// (0x0001b236) grid_hyb_phrase_pane

0xf498,	// (0x0001b245) cell_hyb_candi_pane_ParamLimits

0xf498,	// (0x0001b245) cell_hyb_candi_pane

0xf4bb,	// (0x0001b268) cell_hyb_candi_scroll_pane

0x8252,	// (0x00013fff) cell_hyb_candi_pane_g1

0xf4c4,	// (0x0001b271) cell_hyb_candi_pane_t1

0xf4d2,	// (0x0001b27f) cell_hyb_phrase_pane

0x8252,	// (0x00013fff) cell_hyb_phrase_pane_g1

0xf4db,	// (0x0001b288) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x0001b296) entry_hyb_candi_pane_t1

0x8906,	// (0x000146b3) input_focus_pane_cp06

0xf4f7,	// (0x0001b2a4) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x0001b2ac) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x0001b2b4) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x0001b2bc) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x0001b2c4) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x0001b2cc) cell_hyb_candi_scroll_pane_g4

0xe58a,	// (0x0001a337) ai5_page_g1

0x6af9,	// (0x000128a6) cell_ituss_key_t6_ParamLimits

0x6af9,	// (0x000128a6) cell_ituss_key_t6

0x68ef,	// (0x0001269c) icf_edit_indi_pane_cp02_ParamLimits

0x68ef,	// (0x0001269c) icf_edit_indi_pane_cp02

0x6903,	// (0x000126b0) icf_edit_indi_pane_cp03_ParamLimits

0x6903,	// (0x000126b0) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

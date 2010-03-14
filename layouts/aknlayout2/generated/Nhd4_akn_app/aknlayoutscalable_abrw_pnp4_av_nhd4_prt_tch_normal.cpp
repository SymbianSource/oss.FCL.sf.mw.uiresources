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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00008eb7 };

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
0x7e21,	// (0x00010cd8) Screen

0x7e35,	// (0x00010cec) application_window_ParamLimits

0x7e35,	// (0x00010cec) application_window

0x7e4f,	// (0x00010d06) screen_g1

0x6210,	// (0x0000f0c7) area_bottom_pane_ParamLimits

0x6210,	// (0x0000f0c7) area_bottom_pane

0x62d0,	// (0x0000f187) area_top_pane_ParamLimits

0x62d0,	// (0x0000f187) area_top_pane

0x636e,	// (0x0000f225) main_pane_ParamLimits

0x636e,	// (0x0000f225) main_pane

0x7e59,	// (0x00010d10) misc_graphics

0xa529,	// (0x000133e0) battery_pane_ParamLimits

0xa529,	// (0x000133e0) battery_pane

0xb2fb,	// (0x000141b2) bg_status_flat_pane_g8

0xb303,	// (0x000141ba) bg_status_flat_pane_g9

0xa5eb,	// (0x000134a2) context_pane_ParamLimits

0xa5eb,	// (0x000134a2) context_pane

0xa701,	// (0x000135b8) navi_pane_ParamLimits

0xa701,	// (0x000135b8) navi_pane

0xa77f,	// (0x00013636) signal_pane_ParamLimits

0xa77f,	// (0x00013636) signal_pane

0x0008,

0xf885,	// (0x0001873c) bg_status_flat_pane_g

0xa7ec,	// (0x000136a3) status_pane_g1_ParamLimits

0xa7ec,	// (0x000136a3) status_pane_g1

0xa800,	// (0x000136b7) status_pane_g2_ParamLimits

0xa800,	// (0x000136b7) status_pane_g2

0xa80c,	// (0x000136c3) status_pane_g3_ParamLimits

0xa80c,	// (0x000136c3) status_pane_g3

0x0004,

0xf7b3,	// (0x0001866a) status_pane_g_ParamLimits

0xf7b3,	// (0x0001866a) status_pane_g

0xa83e,	// (0x000136f5) title_pane_ParamLimits

0xa83e,	// (0x000136f5) title_pane

0xa87b,	// (0x00013732) uni_indicator_pane_ParamLimits

0xa87b,	// (0x00013732) uni_indicator_pane

0x9ea2,	// (0x00012d59) bg_list_pane_ParamLimits

0x9ea2,	// (0x00012d59) bg_list_pane

0x9ec2,	// (0x00012d79) find_pane

0x9eca,	// (0x00012d81) listscroll_app_pane_ParamLimits

0x9eca,	// (0x00012d81) listscroll_app_pane

0x9ed6,	// (0x00012d8d) listscroll_form_pane

0x9ede,	// (0x00012d95) listscroll_gen_pane_ParamLimits

0x9ede,	// (0x00012d95) listscroll_gen_pane

0x9ed6,	// (0x00012d8d) listscroll_set_pane

0x907c,	// (0x00011f33) main_idle_act_pane

0x9b8a,	// (0x00012a41) main_idle_trad_pane

0x9b8a,	// (0x00012a41) main_list_empty_pane

0x9f04,	// (0x00012dbb) main_midp_pane

0x9f10,	// (0x00012dc7) main_pane_g1_ParamLimits

0x9f10,	// (0x00012dc7) main_pane_g1

0x9f1e,	// (0x00012dd5) popup_ai_message_window_ParamLimits

0x9f1e,	// (0x00012dd5) popup_ai_message_window

0x9fc8,	// (0x00012e7f) popup_fep_china_uni_window_ParamLimits

0x9fc8,	// (0x00012e7f) popup_fep_china_uni_window

0xa022,	// (0x00012ed9) popup_fep_japan_candidate_window_ParamLimits

0xa022,	// (0x00012ed9) popup_fep_japan_candidate_window

0xa040,	// (0x00012ef7) popup_fep_japan_predictive_window_ParamLimits

0xa040,	// (0x00012ef7) popup_fep_japan_predictive_window

0xa070,	// (0x00012f27) popup_find_window

0xa07d,	// (0x00012f34) popup_grid_graphic_window_ParamLimits

0xa07d,	// (0x00012f34) popup_grid_graphic_window

0xa0a3,	// (0x00012f5a) popup_large_graphic_colour_window

0xa0c9,	// (0x00012f80) popup_menu_window_ParamLimits

0xa0c9,	// (0x00012f80) popup_menu_window

0xa283,	// (0x0001313a) popup_note_image_window

0xa26f,	// (0x00013126) popup_note_wait_window_ParamLimits

0xa26f,	// (0x00013126) popup_note_wait_window

0xa26f,	// (0x00013126) popup_note_window_ParamLimits

0xa26f,	// (0x00013126) popup_note_window

0xa2d9,	// (0x00013190) popup_query_code_window_ParamLimits

0xa2d9,	// (0x00013190) popup_query_code_window

0xa2ed,	// (0x000131a4) popup_query_data_code_window_ParamLimits

0xa2ed,	// (0x000131a4) popup_query_data_code_window

0xa304,	// (0x000131bb) popup_query_data_window_ParamLimits

0xa304,	// (0x000131bb) popup_query_data_window

0xa31c,	// (0x000131d3) popup_query_sat_info_window_ParamLimits

0xa31c,	// (0x000131d3) popup_query_sat_info_window

0xa355,	// (0x0001320c) popup_snote_single_graphic_window_ParamLimits

0xa355,	// (0x0001320c) popup_snote_single_graphic_window

0xa355,	// (0x0001320c) popup_snote_single_text_window_ParamLimits

0xa355,	// (0x0001320c) popup_snote_single_text_window

0xa36a,	// (0x00013221) popup_sub_window_general

0xa498,	// (0x0001334f) popup_window_general_ParamLimits

0xa498,	// (0x0001334f) popup_window_general

0xa4ad,	// (0x00013364) power_save_pane

0x6ab5,	// (0x0000f96c) control_pane_g1_ParamLimits

0x6ab5,	// (0x0000f96c) control_pane_g1

0x6adc,	// (0x0000f993) control_pane_g2_ParamLimits

0x6adc,	// (0x0000f993) control_pane_g2

0x9e43,	// (0x00012cfa) control_pane_g3_ParamLimits

0x9e43,	// (0x00012cfa) control_pane_g3

0x0007,

0xf79b,	// (0x00018652) control_pane_g_ParamLimits

0xf79b,	// (0x00018652) control_pane_g

0x6b20,	// (0x0000f9d7) control_pane_t1_ParamLimits

0x6b20,	// (0x0000f9d7) control_pane_t1

0x6b6c,	// (0x0000fa23) control_pane_t2_ParamLimits

0x6b6c,	// (0x0000fa23) control_pane_t2

0x0002,

0xf7ac,	// (0x00018663) control_pane_t_ParamLimits

0xf7ac,	// (0x00018663) control_pane_t

0x9d64,	// (0x00012c1b) navi_navi_volume_pane_cp1

0x9d6d,	// (0x00012c24) status_small_icon_pane

0x9d75,	// (0x00012c2c) status_small_pane_g1_ParamLimits

0x9d75,	// (0x00012c2c) status_small_pane_g1

0x9da9,	// (0x00012c60) status_small_pane_g2_ParamLimits

0x9da9,	// (0x00012c60) status_small_pane_g2

0x9db5,	// (0x00012c6c) status_small_pane_g3_ParamLimits

0x9db5,	// (0x00012c6c) status_small_pane_g3

0x9dc1,	// (0x00012c78) status_small_pane_g4_ParamLimits

0x9dc1,	// (0x00012c78) status_small_pane_g4

0x9dcd,	// (0x00012c84) status_small_pane_g5_ParamLimits

0x9dcd,	// (0x00012c84) status_small_pane_g5

0x9ddc,	// (0x00012c93) status_small_pane_g6_ParamLimits

0x9ddc,	// (0x00012c93) status_small_pane_g6

0x0007,

0xf78a,	// (0x00018641) status_small_pane_g_ParamLimits

0xf78a,	// (0x00018641) status_small_pane_g

0x9e0c,	// (0x00012cc3) status_small_pane_t1

0x9e2f,	// (0x00012ce6) status_small_wait_pane_ParamLimits

0x9e2f,	// (0x00012ce6) status_small_wait_pane

0x9571,	// (0x00012428) aid_levels_signal_ParamLimits

0x9571,	// (0x00012428) aid_levels_signal

0x9583,	// (0x0001243a) signal_pane_g1_ParamLimits

0x9583,	// (0x0001243a) signal_pane_g1

0x9598,	// (0x0001244f) signal_pane_g2_ParamLimits

0x9598,	// (0x0001244f) signal_pane_g2

0x0003,

0xf71b,	// (0x000185d2) signal_pane_g_ParamLimits

0xf71b,	// (0x000185d2) signal_pane_g

0x95d3,	// (0x0001248a) context_pane_g1

0x7e63,	// (0x00010d1a) title_pane_g1

0x7e99,	// (0x00010d50) title_pane_t1

0x7f01,	// (0x00010db8) title_pane_t2

0x7f27,	// (0x00010dde) title_pane_t3

0x0002,

0xf56f,	// (0x00018426) title_pane_t

0xa893,	// (0x0001374a) aid_levels_battery_ParamLimits

0xa893,	// (0x0001374a) aid_levels_battery

0xa8a7,	// (0x0001375e) battery_pane_g1_ParamLimits

0xa8a7,	// (0x0001375e) battery_pane_g1

0xa8bd,	// (0x00013774) battery_pane_g2_ParamLimits

0xa8bd,	// (0x00013774) battery_pane_g2

0x0001,

0xf7be,	// (0x00018675) battery_pane_g_ParamLimits

0xf7be,	// (0x00018675) battery_pane_g

0xbc19,	// (0x00014ad0) uni_indicator_pane_g1

0xbc2e,	// (0x00014ae5) uni_indicator_pane_g2

0xbc44,	// (0x00014afb) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x000187e4) uni_indicator_pane_g

0x99fa,	// (0x000128b1) navi_icon_pane_ParamLimits

0x99fa,	// (0x000128b1) navi_icon_pane

0x9941,	// (0x000127f8) navi_midp_pane

0x9a16,	// (0x000128cd) navi_navi_pane

0x9a20,	// (0x000128d7) navi_text_pane_ParamLimits

0x9a20,	// (0x000128d7) navi_text_pane

0x7e4f,	// (0x00010d06) status_small_wait_pane_g1

0x8364,	// (0x0001121b) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x000187df) status_small_wait_pane_g

0xb93c,	// (0x000147f3) navi_navi_icon_text_pane

0xb944,	// (0x000147fb) navi_navi_pane_g1_ParamLimits

0xb944,	// (0x000147fb) navi_navi_pane_g1

0xb956,	// (0x0001480d) navi_navi_pane_g2_ParamLimits

0xb956,	// (0x0001480d) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x000187ad) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x000187ad) navi_navi_pane_g

0xb968,	// (0x0001481f) navi_navi_tabs_pane

0xb971,	// (0x00014828) navi_navi_text_pane

0xb93c,	// (0x000147f3) navi_navi_volume_pane

0xb918,	// (0x000147cf) navi_text_pane_t1

0xb90c,	// (0x000147c3) navi_icon_pane_g1

0xb86b,	// (0x00014722) navi_navi_text_pane_t1

0x6efe,	// (0x0000fdb5) navi_navi_volume_pane_g1

0x6f06,	// (0x0000fdbd) volume_small_pane

0xb7d1,	// (0x00014688) navi_navi_icon_text_pane_g1

0xb7d9,	// (0x00014690) navi_navi_icon_text_pane_t1

0x9a16,	// (0x000128cd) navi_tabs_2_long_pane

0x9a16,	// (0x000128cd) navi_tabs_2_pane

0x9a16,	// (0x000128cd) navi_tabs_3_long_pane

0x9a16,	// (0x000128cd) navi_tabs_3_pane

0x9a16,	// (0x000128cd) navi_tabs_4_pane

0x6ede,	// (0x0000fd95) tabs_2_active_pane_ParamLimits

0x6ede,	// (0x0000fd95) tabs_2_active_pane

0x6eee,	// (0x0000fda5) tabs_2_passive_pane_ParamLimits

0x6eee,	// (0x0000fda5) tabs_2_passive_pane

0x6eac,	// (0x0000fd63) tabs_3_active_pane_ParamLimits

0x6eac,	// (0x0000fd63) tabs_3_active_pane

0x6ebc,	// (0x0000fd73) tabs_3_passive_pane_ParamLimits

0x6ebc,	// (0x0000fd73) tabs_3_passive_pane

0x6ecd,	// (0x0000fd84) tabs_3_passive_pane_cp_ParamLimits

0x6ecd,	// (0x0000fd84) tabs_3_passive_pane_cp

0x6e68,	// (0x0000fd1f) tabs_4_active_pane_ParamLimits

0x6e68,	// (0x0000fd1f) tabs_4_active_pane

0x6e79,	// (0x0000fd30) tabs_4_passive_pane_ParamLimits

0x6e79,	// (0x0000fd30) tabs_4_passive_pane

0x6e8a,	// (0x0000fd41) tabs_4_passive_pane_cp_ParamLimits

0x6e8a,	// (0x0000fd41) tabs_4_passive_pane_cp

0x6e9b,	// (0x0000fd52) tabs_4_passive_pane_cp2_ParamLimits

0x6e9b,	// (0x0000fd52) tabs_4_passive_pane_cp2

0x6e44,	// (0x0000fcfb) tabs_2_long_active_pane_ParamLimits

0x6e44,	// (0x0000fcfb) tabs_2_long_active_pane

0x6e56,	// (0x0000fd0d) tabs_2_long_passive_pane_ParamLimits

0x6e56,	// (0x0000fd0d) tabs_2_long_passive_pane

0x6dff,	// (0x0000fcb6) tabs_3_long_active_pane_ParamLimits

0x6dff,	// (0x0000fcb6) tabs_3_long_active_pane

0x6e18,	// (0x0000fccf) tabs_3_long_passive_pane_ParamLimits

0x6e18,	// (0x0000fccf) tabs_3_long_passive_pane

0x6e2b,	// (0x0000fce2) tabs_3_long_passive_pane_cp_ParamLimits

0x6e2b,	// (0x0000fce2) tabs_3_long_passive_pane_cp

0x6da5,	// (0x0000fc5c) volume_small_pane_g1

0x6dae,	// (0x0000fc65) volume_small_pane_g2

0x6db7,	// (0x0000fc6e) volume_small_pane_g3

0x6dc0,	// (0x0000fc77) volume_small_pane_g4

0x6dc9,	// (0x0000fc80) volume_small_pane_g5

0x6dd2,	// (0x0000fc89) volume_small_pane_g6

0x6ddb,	// (0x0000fc92) volume_small_pane_g7

0x6de4,	// (0x0000fc9b) volume_small_pane_g8

0x6ded,	// (0x0000fca4) volume_small_pane_g9

0x6df6,	// (0x0000fcad) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x00018779) volume_small_pane_g

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp2_ParamLimits

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp2

0x7f47,	// (0x00010dfe) tabs_3_active_pane_g1

0x7f4f,	// (0x00010e06) tabs_3_active_pane_t1

0x7f39,	// (0x00010df0) bg_passive_tab_pane_cp2_ParamLimits

0x7f39,	// (0x00010df0) bg_passive_tab_pane_cp2

0x7f47,	// (0x00010dfe) tabs_3_passive_pane_g1

0x7f4f,	// (0x00010e06) tabs_3_passive_pane_t1

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp3_ParamLimits

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp3

0x7f61,	// (0x00010e18) tabs_4_active_pane_g1

0x7f69,	// (0x00010e20) tabs_4_active_pane_t1

0x7f39,	// (0x00010df0) bg_passive_tab_pane_cp3_ParamLimits

0x7f39,	// (0x00010df0) bg_passive_tab_pane_cp3

0x7f61,	// (0x00010e18) tabs_4_1_passive_pane_g1

0x7f69,	// (0x00010e20) tabs_4_1_passive_pane_t1

0x9f04,	// (0x00012dbb) list_highlight_pane_cp2

0xbec5,	// (0x00014d7c) list_set_pane_ParamLimits

0xbec5,	// (0x00014d7c) list_set_pane

0xbf67,	// (0x00014e1e) main_pane_set_t1_ParamLimits

0xbf67,	// (0x00014e1e) main_pane_set_t1

0xbf87,	// (0x00014e3e) main_pane_set_t2_ParamLimits

0xbf87,	// (0x00014e3e) main_pane_set_t2

0xbf9b,	// (0x00014e52) main_pane_set_t3_ParamLimits

0xbf9b,	// (0x00014e52) main_pane_set_t3

0xbfad,	// (0x00014e64) main_pane_set_t4_ParamLimits

0xbfad,	// (0x00014e64) main_pane_set_t4

0x0003,

0xf992,	// (0x00018849) main_pane_set_t_ParamLimits

0xf992,	// (0x00018849) main_pane_set_t

0xbfbf,	// (0x00014e76) setting_code_pane

0xbfc9,	// (0x00014e80) setting_slider_graphic_pane

0xbfc9,	// (0x00014e80) setting_slider_pane

0xbfc9,	// (0x00014e80) setting_text_pane

0xbfc9,	// (0x00014e80) setting_volume_pane

0x659f,	// (0x0000f456) volume_set_pane

0x7f39,	// (0x00010df0) bg_set_opt_pane_cp

0x65a7,	// (0x0000f45e) setting_slider_pane_t1

0x65c0,	// (0x0000f477) setting_slider_pane_t2

0x65d9,	// (0x0000f490) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0001842d) setting_slider_pane_t

0x65f0,	// (0x0000f4a7) slider_set_pane

0x7e59,	// (0x00010d10) bg_set_opt_pane_cp2

0x7f7b,	// (0x00010e32) setting_slider_graphic_pane_g1

0x6606,	// (0x0000f4bd) setting_slider_graphic_pane_t1

0x6615,	// (0x0000f4cc) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x00018434) setting_slider_graphic_pane_t

0x6624,	// (0x0000f4db) slider_set_pane_cp

0x7e59,	// (0x00010d10) input_focus_pane_cp1

0xbe84,	// (0x00014d3b) list_set_text_pane

0x7e4f,	// (0x00010d06) setting_text_pane_g1

0x7e59,	// (0x00010d10) input_focus_pane_cp2

0x7e4f,	// (0x00010d06) setting_code_pane_g1

0x7f84,	// (0x00010e3b) setting_code_pane_t1

0x7f92,	// (0x00010e49) set_text_pane_t1_ParamLimits

0x7f92,	// (0x00010e49) set_text_pane_t1

0x8e4e,	// (0x00011d05) set_opt_bg_pane_g1

0x8e56,	// (0x00011d0d) set_opt_bg_pane_g2

0xbe64,	// (0x00014d1b) set_opt_bg_pane_g3

0x8e66,	// (0x00011d1d) set_opt_bg_pane_g4

0x8e6e,	// (0x00011d25) set_opt_bg_pane_g5

0x8e76,	// (0x00011d2d) set_opt_bg_pane_g6

0xbe6c,	// (0x00014d23) set_opt_bg_pane_g7

0xbe74,	// (0x00014d2b) set_opt_bg_pane_g8

0xbe7c,	// (0x00014d33) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x00018836) set_opt_bg_pane_g

0xbe57,	// (0x00014d0e) slider_set_pane_g1

0x6f73,	// (0x0000fe2a) slider_set_pane_g2

0x0006,

0xf970,	// (0x00018827) slider_set_pane_g

0x6f0f,	// (0x0000fdc6) volume_set_pane_g1

0x6f17,	// (0x0000fdce) volume_set_pane_g2

0x6f1f,	// (0x0000fdd6) volume_set_pane_g3

0x6f27,	// (0x0000fdde) volume_set_pane_g4

0x6f2f,	// (0x0000fde6) volume_set_pane_g5

0x6f37,	// (0x0000fdee) volume_set_pane_g6

0x6f3f,	// (0x0000fdf6) volume_set_pane_g7

0x6f47,	// (0x0000fdfe) volume_set_pane_g8

0x6f4f,	// (0x0000fe06) volume_set_pane_g9

0x6f57,	// (0x0000fe0e) volume_set_pane_g10

0x0009,

0xf948,	// (0x000187ff) volume_set_pane_g

0x7fac,	// (0x00010e63) indicator_pane_ParamLimits

0x7fac,	// (0x00010e63) indicator_pane

0x7fb8,	// (0x00010e6f) main_idle_pane_g2_ParamLimits

0x7fb8,	// (0x00010e6f) main_idle_pane_g2

0x7fe0,	// (0x00010e97) main_pane_idle_g1_ParamLimits

0x7fe0,	// (0x00010e97) main_pane_idle_g1

0x7fed,	// (0x00010ea4) popup_clock_digital_analogue_window_ParamLimits

0x7fed,	// (0x00010ea4) popup_clock_digital_analogue_window

0x8004,	// (0x00010ebb) soft_indicator_pane_ParamLimits

0x8004,	// (0x00010ebb) soft_indicator_pane

0x8010,	// (0x00010ec7) wallpaper_pane_ParamLimits

0x8010,	// (0x00010ec7) wallpaper_pane

0x7e4f,	// (0x00010d06) wallpaper_pane_g1

0x8024,	// (0x00010edb) indicator_pane_g1_ParamLimits

0x8024,	// (0x00010edb) indicator_pane_g1

0xc357,	// (0x0001520e) navi_navi_icon_text_pane_srt_g1

0x803f,	// (0x00010ef6) soft_indicator_pane_t1

0x8059,	// (0x00010f10) aid_ps_area_pane

0x806a,	// (0x00010f21) aid_ps_clock_pane

0x8078,	// (0x00010f2f) aid_ps_indicator_pane

0x8084,	// (0x00010f3b) indicator_ps_pane_ParamLimits

0x8084,	// (0x00010f3b) indicator_ps_pane

0x8093,	// (0x00010f4a) power_save_pane_g1_ParamLimits

0x8093,	// (0x00010f4a) power_save_pane_g1

0x809f,	// (0x00010f56) power_save_pane_g2_ParamLimits

0x809f,	// (0x00010f56) power_save_pane_g2

0x61c4,	// (0x0000f07b) aid_navinavi_width_pane

0x8059,	// (0x00010f10) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00018439) power_save_pane_g_ParamLimits

0xf582,	// (0x00018439) power_save_pane_g

0x80ad,	// (0x00010f64) power_save_pane_t1_ParamLimits

0x80ad,	// (0x00010f64) power_save_pane_t1

0x806a,	// (0x00010f21) aid_ps_clock_pane_ParamLimits

0x8078,	// (0x00010f2f) aid_ps_indicator_pane_ParamLimits

0x80bf,	// (0x00010f76) power_save_pane_t4_ParamLimits

0x80bf,	// (0x00010f76) power_save_pane_t4

0x0001,

0xf587,	// (0x0001843e) power_save_pane_t_ParamLimits

0xf587,	// (0x0001843e) power_save_pane_t

0x80e9,	// (0x00010fa0) power_save_t3_ParamLimits

0x80e9,	// (0x00010fa0) power_save_t3

0x80d4,	// (0x00010f8b) power_save_t2_ParamLimits

0x80d4,	// (0x00010f8b) power_save_t2

0x80fe,	// (0x00010fb5) indicator_ps_pane_g1

0x8107,	// (0x00010fbe) ai_gene_pane_ParamLimits

0x8107,	// (0x00010fbe) ai_gene_pane

0x8113,	// (0x00010fca) ai_links_pane_ParamLimits

0x8113,	// (0x00010fca) ai_links_pane

0x811f,	// (0x00010fd6) indicator_pane_cp1_ParamLimits

0x811f,	// (0x00010fd6) indicator_pane_cp1

0x812b,	// (0x00010fe2) main_pane_idle_g1_cp_ParamLimits

0x812b,	// (0x00010fe2) main_pane_idle_g1_cp

0x8137,	// (0x00010fee) popup_ai_links_title_window

0x8140,	// (0x00010ff7) soft_indicator_pane_cp1_ParamLimits

0x8140,	// (0x00010ff7) soft_indicator_pane_cp1

0xbc07,	// (0x00014abe) ai_links_pane_g1

0xbc10,	// (0x00014ac7) grid_ai_links_pane

0xbbea,	// (0x00014aa1) ai_gene_pane_1

0xbbf5,	// (0x00014aac) ai_gene_pane_2

0xbbfe,	// (0x00014ab5) list_highlight_pane_cp4

0xbbce,	// (0x00014a85) cell_ai_link_pane_ParamLimits

0xbbce,	// (0x00014a85) cell_ai_link_pane

0xbbc6,	// (0x00014a7d) cell_ai_link_pane_g1

0x8364,	// (0x0001121b) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x000187da) cell_ai_link_pane_g

0x7e59,	// (0x00010d10) grid_highlight_cp2

0x7e59,	// (0x00010d10) bg_popup_sub_pane_cp1

0x815a,	// (0x00011011) popup_ai_links_title_window_t1

0xbb14,	// (0x000149cb) ai_gene_pane_1_g1_ParamLimits

0xbb14,	// (0x000149cb) ai_gene_pane_1_g1

0xbb20,	// (0x000149d7) ai_gene_pane_1_g2_ParamLimits

0xbb20,	// (0x000149d7) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x000187d0) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x000187d0) ai_gene_pane_1_g

0xbb2d,	// (0x000149e4) ai_gene_pane_1_t1_ParamLimits

0xbb2d,	// (0x000149e4) ai_gene_pane_1_t1

0xbb61,	// (0x00014a18) grid_ai_soft_ind_pane

0xbaff,	// (0x000149b6) ai_gene_pane_2_t1_ParamLimits

0xbaff,	// (0x000149b6) ai_gene_pane_2_t1

0x8169,	// (0x00011020) main_pane_empty_t1_ParamLimits

0x8169,	// (0x00011020) main_pane_empty_t1

0x8181,	// (0x00011038) main_pane_empty_t2_ParamLimits

0x8181,	// (0x00011038) main_pane_empty_t2

0x8196,	// (0x0001104d) main_pane_empty_t3_ParamLimits

0x8196,	// (0x0001104d) main_pane_empty_t3

0x81a8,	// (0x0001105f) main_pane_empty_t4_ParamLimits

0x81a8,	// (0x0001105f) main_pane_empty_t4

0x81ba,	// (0x00011071) main_pane_empty_t5_ParamLimits

0x81ba,	// (0x00011071) main_pane_empty_t5

0x0004,

0xf58c,	// (0x00018443) main_pane_empty_t_ParamLimits

0xf58c,	// (0x00018443) main_pane_empty_t

0x8f47,	// (0x00011dfe) bg_popup_window_pane_ParamLimits

0x8f47,	// (0x00011dfe) bg_popup_window_pane

0xb879,	// (0x00014730) find_popup_pane_cp2_ParamLimits

0xb879,	// (0x00014730) find_popup_pane_cp2

0xb885,	// (0x0001473c) heading_pane_ParamLimits

0xb885,	// (0x0001473c) heading_pane

0x7e59,	// (0x00010d10) bg_popup_sub_pane

0xb7f3,	// (0x000146aa) bg_popup_window_pane_g1_ParamLimits

0xb7f3,	// (0x000146aa) bg_popup_window_pane_g1

0xb7ff,	// (0x000146b6) bg_popup_window_pane_g2_ParamLimits

0xb7ff,	// (0x000146b6) bg_popup_window_pane_g2

0xb80b,	// (0x000146c2) bg_popup_window_pane_g3_ParamLimits

0xb80b,	// (0x000146c2) bg_popup_window_pane_g3

0xb817,	// (0x000146ce) bg_popup_window_pane_g4_ParamLimits

0xb817,	// (0x000146ce) bg_popup_window_pane_g4

0xb823,	// (0x000146da) bg_popup_window_pane_g5_ParamLimits

0xb823,	// (0x000146da) bg_popup_window_pane_g5

0xb82f,	// (0x000146e6) bg_popup_window_pane_g6_ParamLimits

0xb82f,	// (0x000146e6) bg_popup_window_pane_g6

0xb83b,	// (0x000146f2) bg_popup_window_pane_g7_ParamLimits

0xb83b,	// (0x000146f2) bg_popup_window_pane_g7

0xb847,	// (0x000146fe) bg_popup_window_pane_g8_ParamLimits

0xb847,	// (0x000146fe) bg_popup_window_pane_g8

0xb853,	// (0x0001470a) bg_popup_window_pane_g9_ParamLimits

0xb853,	// (0x0001470a) bg_popup_window_pane_g9

0xb85f,	// (0x00014716) bg_popup_window_pane_g10_ParamLimits

0xb85f,	// (0x00014716) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x00018798) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x00018798) bg_popup_window_pane_g

0xb788,	// (0x0001463f) bg_popup_heading_pane_ParamLimits

0xb788,	// (0x0001463f) bg_popup_heading_pane

0x6ffb,	// (0x0000feb2) tabs_4_passive_pane_cp_srt_ParamLimits

0x6ffb,	// (0x0000feb2) tabs_4_passive_pane_cp_srt

0x700d,	// (0x0000fec4) tabs_4_passive_pane_srt_ParamLimits

0xb79c,	// (0x00014653) heading_pane_g2

0x700d,	// (0x0000fec4) tabs_4_passive_pane_srt

0x9f04,	// (0x00012dbb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9f04,	// (0x00012dbb) bg_passive_tab_pane_cp3_srt

0xb7a4,	// (0x0001465b) heading_pane_t1_ParamLimits

0xb7a4,	// (0x0001465b) heading_pane_t1

0xb7bb,	// (0x00014672) heading_pane_t2_ParamLimits

0xb7bb,	// (0x00014672) heading_pane_t2

0x0001,

0xf8dc,	// (0x00018793) heading_pane_t_ParamLimits

0xf8dc,	// (0x00018793) heading_pane_t

0xb2c3,	// (0x0001417a) bg_popup_heading_pane_g1

0xb372,	// (0x00014229) bg_popup_heading_pane_g2

0xb37c,	// (0x00014233) bg_popup_heading_pane_g3

0xb386,	// (0x0001423d) bg_popup_heading_pane_g4

0xb390,	// (0x00014247) bg_popup_heading_pane_g5

0xb39a,	// (0x00014251) bg_popup_heading_pane_g6

0xb3a2,	// (0x00014259) bg_popup_heading_pane_g7

0xb3aa,	// (0x00014261) bg_popup_heading_pane_g8

0xb3b4,	// (0x0001426b) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0001874f) bg_popup_heading_pane_g

0xa9c3,	// (0x0001387a) bg_popup_sub_pane_g1

0xa9d3,	// (0x0001388a) bg_popup_sub_pane_g2

0xa9cb,	// (0x00013882) bg_popup_sub_pane_g3

0xa9e3,	// (0x0001389a) bg_popup_sub_pane_g4

0xa9db,	// (0x00013892) bg_popup_sub_pane_g5

0xa9eb,	// (0x000138a2) bg_popup_sub_pane_g6

0xa9f3,	// (0x000138aa) bg_popup_sub_pane_g7

0xaa03,	// (0x000138ba) bg_popup_sub_pane_g8

0xa9fb,	// (0x000138b2) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x00018729) bg_popup_sub_pane_g

0x81ce,	// (0x00011085) bg_popup_window_pane_cp5_ParamLimits

0x81ce,	// (0x00011085) bg_popup_window_pane_cp5

0x81ea,	// (0x000110a1) popup_note_window_g1_ParamLimits

0x81ea,	// (0x000110a1) popup_note_window_g1

0x81f6,	// (0x000110ad) popup_note_window_t1_ParamLimits

0x81f6,	// (0x000110ad) popup_note_window_t1

0x8208,	// (0x000110bf) popup_note_window_t2_ParamLimits

0x8208,	// (0x000110bf) popup_note_window_t2

0x821a,	// (0x000110d1) popup_note_window_t3_ParamLimits

0x821a,	// (0x000110d1) popup_note_window_t3

0x822c,	// (0x000110e3) popup_note_window_t4_ParamLimits

0x822c,	// (0x000110e3) popup_note_window_t4

0x8254,	// (0x0001110b) popup_note_window_t5_ParamLimits

0x8254,	// (0x0001110b) popup_note_window_t5

0x0004,

0xf597,	// (0x0001844e) popup_note_window_t_ParamLimits

0xf597,	// (0x0001844e) popup_note_window_t

0x8278,	// (0x0001112f) bg_popup_window_pane_cp6_ParamLimits

0x8278,	// (0x0001112f) bg_popup_window_pane_cp6

0xb237,	// (0x000140ee) popup_note_image_window_g1_ParamLimits

0xb237,	// (0x000140ee) popup_note_image_window_g1

0xb243,	// (0x000140fa) popup_note_image_window_g2_ParamLimits

0xb243,	// (0x000140fa) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0001871d) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0001871d) popup_note_image_window_g

0xb25c,	// (0x00014113) popup_note_image_window_t1_ParamLimits

0xb25c,	// (0x00014113) popup_note_image_window_t1

0xb275,	// (0x0001412c) popup_note_image_window_t2_ParamLimits

0xb275,	// (0x0001412c) popup_note_image_window_t2

0xb28e,	// (0x00014145) popup_note_image_window_t3_ParamLimits

0xb28e,	// (0x00014145) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x00018722) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x00018722) popup_note_image_window_t

0xb0f8,	// (0x00013faf) bg_popup_window_pane_cp7_ParamLimits

0xb0f8,	// (0x00013faf) bg_popup_window_pane_cp7

0xb128,	// (0x00013fdf) popup_note_wait_window_g1_ParamLimits

0xb128,	// (0x00013fdf) popup_note_wait_window_g1

0xb134,	// (0x00013feb) popup_note_wait_window_g2_ParamLimits

0xb134,	// (0x00013feb) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0001870b) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0001870b) popup_note_wait_window_g

0xb14c,	// (0x00014003) popup_note_wait_window_t1_ParamLimits

0xb14c,	// (0x00014003) popup_note_wait_window_t1

0xb173,	// (0x0001402a) popup_note_wait_window_t2_ParamLimits

0xb173,	// (0x0001402a) popup_note_wait_window_t2

0xb190,	// (0x00014047) popup_note_wait_window_t3_ParamLimits

0xb190,	// (0x00014047) popup_note_wait_window_t3

0xb1a3,	// (0x0001405a) popup_note_wait_window_t4_ParamLimits

0xb1a3,	// (0x0001405a) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x00018712) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x00018712) popup_note_wait_window_t

0xb1c8,	// (0x0001407f) wait_bar_pane_ParamLimits

0xb1c8,	// (0x0001407f) wait_bar_pane

0x7e59,	// (0x00010d10) wait_anim_pane

0x7e59,	// (0x00010d10) wait_border_pane

0x7e4f,	// (0x00010d06) wait_anim_pane_g1

0x7e4f,	// (0x00010d06) wait_anim_pane_g2

0x0001,

0xf716,	// (0x000185cd) wait_anim_pane_g

0xb09c,	// (0x00013f53) wait_border_pane_g1

0xb0a7,	// (0x00013f5e) wait_border_pane_g2

0xb0b0,	// (0x00013f67) wait_border_pane_g3

0x0002,

0xf84d,	// (0x00018704) wait_border_pane_g

0xaf0c,	// (0x00013dc3) bg_popup_window_pane_cp16_ParamLimits

0xaf0c,	// (0x00013dc3) bg_popup_window_pane_cp16

0xb00c,	// (0x00013ec3) indicator_popup_pane_cp4_ParamLimits

0xb00c,	// (0x00013ec3) indicator_popup_pane_cp4

0xb020,	// (0x00013ed7) popup_query_data_window_t1_ParamLimits

0xb020,	// (0x00013ed7) popup_query_data_window_t1

0xb032,	// (0x00013ee9) popup_query_data_window_t2_ParamLimits

0xb032,	// (0x00013ee9) popup_query_data_window_t2

0xb04b,	// (0x00013f02) popup_query_data_window_t3_ParamLimits

0xb04b,	// (0x00013f02) popup_query_data_window_t3

0x0002,

0xf846,	// (0x000186fd) popup_query_data_window_t_ParamLimits

0xf846,	// (0x000186fd) popup_query_data_window_t

0xb065,	// (0x00013f1c) query_popup_data_pane_ParamLimits

0xb065,	// (0x00013f1c) query_popup_data_pane

0xb079,	// (0x00013f30) query_popup_data_pane_cp1_ParamLimits

0xb079,	// (0x00013f30) query_popup_data_pane_cp1

0xaf0c,	// (0x00013dc3) bg_popup_window_pane_cp10_ParamLimits

0xaf0c,	// (0x00013dc3) bg_popup_window_pane_cp10

0xaf3e,	// (0x00013df5) indicator_popup_pane_ParamLimits

0xaf3e,	// (0x00013df5) indicator_popup_pane

0xaf60,	// (0x00013e17) popup_query_code_window_t1_ParamLimits

0xaf60,	// (0x00013e17) popup_query_code_window_t1

0xaf7a,	// (0x00013e31) popup_query_code_window_t2_ParamLimits

0xaf7a,	// (0x00013e31) popup_query_code_window_t2

0xafc3,	// (0x00013e7a) popup_query_code_window_t3_ParamLimits

0xafc3,	// (0x00013e7a) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x000186f6) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x000186f6) popup_query_code_window_t

0xaff2,	// (0x00013ea9) query_popup_pane_ParamLimits

0xaff2,	// (0x00013ea9) query_popup_pane

0x8278,	// (0x0001112f) bg_popup_window_pane_cp15_ParamLimits

0x8278,	// (0x0001112f) bg_popup_window_pane_cp15

0x8296,	// (0x0001114d) indicator_popup_pane_cp1_ParamLimits

0x8296,	// (0x0001114d) indicator_popup_pane_cp1

0x82a9,	// (0x00011160) indicator_popup_pane_cp2_ParamLimits

0x82a9,	// (0x00011160) indicator_popup_pane_cp2

0x82bc,	// (0x00011173) popup_query_data_code_window_g1_ParamLimits

0x82bc,	// (0x00011173) popup_query_data_code_window_g1

0x82cf,	// (0x00011186) popup_query_data_code_window_t1_ParamLimits

0x82cf,	// (0x00011186) popup_query_data_code_window_t1

0x82e1,	// (0x00011198) popup_query_data_code_window_t2_ParamLimits

0x82e1,	// (0x00011198) popup_query_data_code_window_t2

0x82f3,	// (0x000111aa) popup_query_data_code_window_t3_ParamLimits

0x82f3,	// (0x000111aa) popup_query_data_code_window_t3

0x8309,	// (0x000111c0) popup_query_data_code_window_t4_ParamLimits

0x8309,	// (0x000111c0) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00018459) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00018459) popup_query_data_code_window_t

0x6cb8,	// (0x0000fb6f) list_single_midp_graphic_pane_g3

0x8321,	// (0x000111d8) query_popup_data_pane_cp2_ParamLimits

0x8334,	// (0x000111eb) query_popup_pane_cp2_ParamLimits

0x8334,	// (0x000111eb) query_popup_pane_cp2

0x7e59,	// (0x00010d10) bg_popup_window_pane_cp11

0xaf04,	// (0x00013dbb) heading_pane_cp5

0x841c,	// (0x000112d3) listscroll_popup_info_pane

0x7e59,	// (0x00010d10) input_focus_pane_cp3

0x8347,	// (0x000111fe) query_popup_pane_t1

0x8355,	// (0x0001120c) list_popup_info_pane_ParamLimits

0x8355,	// (0x0001120c) list_popup_info_pane

0x8364,	// (0x0001121b) listscroll_popup_info_pane_g1

0x836c,	// (0x00011223) scroll_pane_cp7

0x8376,	// (0x0001122d) popup_info_list_pane_t1_ParamLimits

0x8376,	// (0x0001122d) popup_info_list_pane_t1

0x8390,	// (0x00011247) popup_info_list_pane_t2_ParamLimits

0x8390,	// (0x00011247) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x00018462) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x00018462) popup_info_list_pane_t

0x7e59,	// (0x00010d10) bg_popup_window_pane_cp12

0xc371,	// (0x00015228) find_popup_pane

0x7f39,	// (0x00010df0) bg_popup_window_pane_cp3

0x83aa,	// (0x00011261) heading_pane_cp3

0x83b6,	// (0x0001126d) listscroll_popup_graphic_pane

0x7e59,	// (0x00010d10) bg_popup_window_pane_cp4

0x8412,	// (0x000112c9) heading_pane_cp4

0x841c,	// (0x000112d3) listscroll_popup_colour_pane

0x8424,	// (0x000112db) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8424,	// (0x000112db) cell_large_graphic_colour_none_popup_pane

0x8438,	// (0x000112ef) grid_large_graphic_colour_popup_pane_ParamLimits

0x8438,	// (0x000112ef) grid_large_graphic_colour_popup_pane

0x845c,	// (0x00011313) listscroll_popup_colour_pane_g1_ParamLimits

0x845c,	// (0x00011313) listscroll_popup_colour_pane_g1

0x8473,	// (0x0001132a) listscroll_popup_colour_pane_g2_ParamLimits

0x8473,	// (0x0001132a) listscroll_popup_colour_pane_g2

0x848a,	// (0x00011341) listscroll_popup_colour_pane_g3_ParamLimits

0x848a,	// (0x00011341) listscroll_popup_colour_pane_g3

0x849a,	// (0x00011351) listscroll_popup_colour_pane_g4_ParamLimits

0x849a,	// (0x00011351) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00018467) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00018467) listscroll_popup_colour_pane_g

0x84a9,	// (0x00011360) scroll_pane_cp6_ParamLimits

0x84a9,	// (0x00011360) scroll_pane_cp6

0x84bb,	// (0x00011372) cell_large_graphic_colour_popup_pane_ParamLimits

0x84bb,	// (0x00011372) cell_large_graphic_colour_popup_pane

0x84da,	// (0x00011391) cell_large_graphic_colour_none_popup_pane_t1

0x7e59,	// (0x00010d10) grid_highlight_pane_cp5

0x84e9,	// (0x000113a0) cell_large_graphic_colour_popup_pane_g1

0x84f1,	// (0x000113a8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00018470) cell_large_graphic_colour_popup_pane_g

0x84f9,	// (0x000113b0) cell_large_graphic_colour_popup_pane_g2_copy1

0x8502,	// (0x000113b9) grid_highlight_pane_cp4

0x850a,	// (0x000113c1) bg_popup_window_pane_cp8_ParamLimits

0x850a,	// (0x000113c1) bg_popup_window_pane_cp8

0x8525,	// (0x000113dc) popup_snote_single_text_window_g1_ParamLimits

0x8525,	// (0x000113dc) popup_snote_single_text_window_g1

0x8537,	// (0x000113ee) popup_snote_single_text_window_t1_ParamLimits

0x8537,	// (0x000113ee) popup_snote_single_text_window_t1

0x854a,	// (0x00011401) popup_snote_single_text_window_t2_ParamLimits

0x854a,	// (0x00011401) popup_snote_single_text_window_t2

0x855d,	// (0x00011414) popup_snote_single_text_window_t3_ParamLimits

0x855d,	// (0x00011414) popup_snote_single_text_window_t3

0x8596,	// (0x0001144d) popup_snote_single_text_window_t4_ParamLimits

0x8596,	// (0x0001144d) popup_snote_single_text_window_t4

0x85ca,	// (0x00011481) popup_snote_single_text_window_t5_ParamLimits

0x85ca,	// (0x00011481) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x00018475) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x00018475) popup_snote_single_text_window_t

0x85f9,	// (0x000114b0) bg_popup_window_pane_cp9_ParamLimits

0x85f9,	// (0x000114b0) bg_popup_window_pane_cp9

0x8525,	// (0x000113dc) popup_snote_single_graphic_window_g1_ParamLimits

0x8525,	// (0x000113dc) popup_snote_single_graphic_window_g1

0x8607,	// (0x000114be) popup_snote_single_graphic_window_g2_ParamLimits

0x8607,	// (0x000114be) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00018480) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00018480) popup_snote_single_graphic_window_g

0x8613,	// (0x000114ca) popup_snote_single_graphic_window_t1_ParamLimits

0x8613,	// (0x000114ca) popup_snote_single_graphic_window_t1

0x8626,	// (0x000114dd) popup_snote_single_graphic_window_t2_ParamLimits

0x8626,	// (0x000114dd) popup_snote_single_graphic_window_t2

0x8639,	// (0x000114f0) popup_snote_single_graphic_window_t3_ParamLimits

0x8639,	// (0x000114f0) popup_snote_single_graphic_window_t3

0x8672,	// (0x00011529) popup_snote_single_graphic_window_t4_ParamLimits

0x8672,	// (0x00011529) popup_snote_single_graphic_window_t4

0x86a6,	// (0x0001155d) popup_snote_single_graphic_window_t5_ParamLimits

0x86a6,	// (0x0001155d) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00018485) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00018485) popup_snote_single_graphic_window_t

0xc2b1,	// (0x00015168) grid_graphic_popup_pane_ParamLimits

0xc2b1,	// (0x00015168) grid_graphic_popup_pane

0xc2dd,	// (0x00015194) listscroll_popup_graphic_pane_g1_ParamLimits

0xc2dd,	// (0x00015194) listscroll_popup_graphic_pane_g1

0xc2f1,	// (0x000151a8) listscroll_popup_graphic_pane_g2_ParamLimits

0xc2f1,	// (0x000151a8) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x00018873) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x00018873) listscroll_popup_graphic_pane_g

0xc305,	// (0x000151bc) scroll_pane_cp5

0xc25c,	// (0x00015113) cell_graphic_popup_pane_ParamLimits

0xc25c,	// (0x00015113) cell_graphic_popup_pane

0xc23d,	// (0x000150f4) cell_graphic_popup_pane_g1

0xc245,	// (0x000150fc) cell_graphic_popup_pane_g2

0x84f9,	// (0x000113b0) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0001886c) cell_graphic_popup_pane_g

0xc24e,	// (0x00015105) cell_graphic_popup_pane_t2

0x8502,	// (0x000113b9) grid_highlight_pane_cp3

0x86e7,	// (0x0001159e) list_gen_pane_ParamLimits

0x86e7,	// (0x0001159e) list_gen_pane

0x8719,	// (0x000115d0) scroll_pane

0xc19f,	// (0x00015056) bg_list_pane_g1_ParamLimits

0xc19f,	// (0x00015056) bg_list_pane_g1

0xc1ba,	// (0x00015071) bg_list_pane_g2_ParamLimits

0xc1ba,	// (0x00015071) bg_list_pane_g2

0xc1cd,	// (0x00015084) bg_list_pane_g3_ParamLimits

0xc1cd,	// (0x00015084) bg_list_pane_g3

0xc1df,	// (0x00015096) bg_list_pane_g4_ParamLimits

0xc1df,	// (0x00015096) bg_list_pane_g4

0xc1f1,	// (0x000150a8) bg_list_pane_g5_ParamLimits

0xc1f1,	// (0x000150a8) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x00018861) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x00018861) bg_list_pane_g

0xc080,	// (0x00014f37) list_double2_graphic_large_graphic_pane_ParamLimits

0xc080,	// (0x00014f37) list_double2_graphic_large_graphic_pane

0xc080,	// (0x00014f37) list_double2_graphic_pane_ParamLimits

0xc080,	// (0x00014f37) list_double2_graphic_pane

0xc080,	// (0x00014f37) list_double2_large_graphic_pane_ParamLimits

0xc080,	// (0x00014f37) list_double2_large_graphic_pane

0xc080,	// (0x00014f37) list_double2_pane_ParamLimits

0xc080,	// (0x00014f37) list_double2_pane

0xc080,	// (0x00014f37) list_double_graphic_heading_pane_ParamLimits

0xc080,	// (0x00014f37) list_double_graphic_heading_pane

0xc080,	// (0x00014f37) list_double_graphic_pane_ParamLimits

0xc080,	// (0x00014f37) list_double_graphic_pane

0xc080,	// (0x00014f37) list_double_heading_pane_ParamLimits

0xc080,	// (0x00014f37) list_double_heading_pane

0xc080,	// (0x00014f37) list_double_large_graphic_pane_ParamLimits

0xc080,	// (0x00014f37) list_double_large_graphic_pane

0xc080,	// (0x00014f37) list_double_number_pane_ParamLimits

0xc080,	// (0x00014f37) list_double_number_pane

0xc080,	// (0x00014f37) list_double_pane_ParamLimits

0xc080,	// (0x00014f37) list_double_pane

0xc080,	// (0x00014f37) list_double_time_pane_ParamLimits

0xc080,	// (0x00014f37) list_double_time_pane

0xc080,	// (0x00014f37) list_setting_number_pane_ParamLimits

0xc080,	// (0x00014f37) list_setting_number_pane

0xc080,	// (0x00014f37) list_setting_pane_ParamLimits

0xc080,	// (0x00014f37) list_setting_pane

0xc0eb,	// (0x00014fa2) list_single_2graphic_pane_ParamLimits

0xc0eb,	// (0x00014fa2) list_single_2graphic_pane

0xc0eb,	// (0x00014fa2) list_single_graphic_heading_pane_ParamLimits

0xc0eb,	// (0x00014fa2) list_single_graphic_heading_pane

0xc0eb,	// (0x00014fa2) list_single_graphic_pane_ParamLimits

0xc0eb,	// (0x00014fa2) list_single_graphic_pane

0xc0eb,	// (0x00014fa2) list_single_heading_pane_ParamLimits

0xc0eb,	// (0x00014fa2) list_single_heading_pane

0xc179,	// (0x00015030) list_single_large_graphic_pane_ParamLimits

0xc179,	// (0x00015030) list_single_large_graphic_pane

0xc0eb,	// (0x00014fa2) list_single_number_heading_pane_ParamLimits

0xc0eb,	// (0x00014fa2) list_single_number_heading_pane

0xc0eb,	// (0x00014fa2) list_single_number_pane_ParamLimits

0xc0eb,	// (0x00014fa2) list_single_number_pane

0xc0eb,	// (0x00014fa2) list_single_pane_ParamLimits

0xc0eb,	// (0x00014fa2) list_single_pane

0x7e59,	// (0x00010d10) list_highlight_pane_cp1

0x8759,	// (0x00011610) list_single_pane_g1_ParamLimits

0x8759,	// (0x00011610) list_single_pane_g1

0x8765,	// (0x0001161c) list_single_pane_g2_ParamLimits

0x8765,	// (0x0001161c) list_single_pane_g2

0x0001,

0xf5e0,	// (0x00018497) list_single_pane_g_ParamLimits

0xf5e0,	// (0x00018497) list_single_pane_g

0xc039,	// (0x00014ef0) list_single_pane_t1_ParamLimits

0xc039,	// (0x00014ef0) list_single_pane_t1

0x8759,	// (0x00011610) list_single_number_pane_g1_ParamLimits

0x8759,	// (0x00011610) list_single_number_pane_g1

0x8765,	// (0x0001161c) list_single_number_pane_g2_ParamLimits

0x8765,	// (0x0001161c) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x00018497) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x00018497) list_single_number_pane_g

0xbdd3,	// (0x00014c8a) list_single_number_pane_t1_ParamLimits

0xbdd3,	// (0x00014c8a) list_single_number_pane_t1

0xbde9,	// (0x00014ca0) list_single_number_pane_t2_ParamLimits

0xbde9,	// (0x00014ca0) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x00018822) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x00018822) list_single_number_pane_t

0x874d,	// (0x00011604) list_single_graphic_pane_g1_ParamLimits

0x874d,	// (0x00011604) list_single_graphic_pane_g1

0x8759,	// (0x00011610) list_single_graphic_pane_g2_ParamLimits

0x8759,	// (0x00011610) list_single_graphic_pane_g2

0x8765,	// (0x0001161c) list_single_graphic_pane_g3_ParamLimits

0x8765,	// (0x0001161c) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00018490) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00018490) list_single_graphic_pane_g

0x8771,	// (0x00011628) list_single_graphic_pane_t1_ParamLimits

0x8771,	// (0x00011628) list_single_graphic_pane_t1

0x8759,	// (0x00011610) list_single_heading_pane_g1_ParamLimits

0x8759,	// (0x00011610) list_single_heading_pane_g1

0x8765,	// (0x0001161c) list_single_heading_pane_g2_ParamLimits

0x8765,	// (0x0001161c) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00018497) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00018497) list_single_heading_pane_g

0x8787,	// (0x0001163e) list_single_heading_pane_t1_ParamLimits

0x8787,	// (0x0001163e) list_single_heading_pane_t1

0x879d,	// (0x00011654) list_single_heading_pane_t2_ParamLimits

0x879d,	// (0x00011654) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0001849c) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0001849c) list_single_heading_pane_t

0x8759,	// (0x00011610) list_single_number_heading_pane_g1_ParamLimits

0x8759,	// (0x00011610) list_single_number_heading_pane_g1

0x8765,	// (0x0001161c) list_single_number_heading_pane_g2_ParamLimits

0x8765,	// (0x0001161c) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x00018497) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x00018497) list_single_number_heading_pane_g

0x8787,	// (0x0001163e) list_single_number_heading_pane_t1_ParamLimits

0x8787,	// (0x0001163e) list_single_number_heading_pane_t1

0x87af,	// (0x00011666) list_single_number_heading_pane_t2_ParamLimits

0x87af,	// (0x00011666) list_single_number_heading_pane_t2

0x87c1,	// (0x00011678) list_single_number_heading_pane_t3_ParamLimits

0x87c1,	// (0x00011678) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x000184a1) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x000184a1) list_single_number_heading_pane_t

0x87d3,	// (0x0001168a) list_single_graphic_heading_pane_g1_ParamLimits

0x87d3,	// (0x0001168a) list_single_graphic_heading_pane_g1

0x87df,	// (0x00011696) list_single_graphic_heading_pane_g4_ParamLimits

0x87df,	// (0x00011696) list_single_graphic_heading_pane_g4

0x8765,	// (0x0001161c) list_single_graphic_heading_pane_g5_ParamLimits

0x8765,	// (0x0001161c) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x000184a8) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x000184a8) list_single_graphic_heading_pane_g

0x8787,	// (0x0001163e) list_single_graphic_heading_pane_t1_ParamLimits

0x8787,	// (0x0001163e) list_single_graphic_heading_pane_t1

0x87f0,	// (0x000116a7) list_single_graphic_heading_pane_t2_ParamLimits

0x87f0,	// (0x000116a7) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x000184af) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x000184af) list_single_graphic_heading_pane_t

0x8802,	// (0x000116b9) list_single_large_graphic_pane_g1_ParamLimits

0x8802,	// (0x000116b9) list_single_large_graphic_pane_g1

0x880e,	// (0x000116c5) list_single_large_graphic_pane_g2_ParamLimits

0x880e,	// (0x000116c5) list_single_large_graphic_pane_g2

0x881a,	// (0x000116d1) list_single_large_graphic_pane_g3_ParamLimits

0x881a,	// (0x000116d1) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x000184b4) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x000184b4) list_single_large_graphic_pane_g

0xb0a7,	// (0x00013f5e) wait_border_pane_g2_copy1

0x8826,	// (0x000116dd) list_single_large_graphic_pane_g4_cp2

0x882e,	// (0x000116e5) list_single_large_graphic_pane_t1_ParamLimits

0x882e,	// (0x000116e5) list_single_large_graphic_pane_t1

0x8844,	// (0x000116fb) list_double_pane_g1_ParamLimits

0x8844,	// (0x000116fb) list_double_pane_g1

0x8850,	// (0x00011707) list_double_pane_g2_ParamLimits

0x8850,	// (0x00011707) list_double_pane_g2

0x0001,

0xf604,	// (0x000184bb) list_double_pane_g_ParamLimits

0xf604,	// (0x000184bb) list_double_pane_g

0x885c,	// (0x00011713) list_double_pane_t1_ParamLimits

0x885c,	// (0x00011713) list_double_pane_t1

0x8872,	// (0x00011729) list_double_pane_t2_ParamLimits

0x8872,	// (0x00011729) list_double_pane_t2

0x0001,

0xf609,	// (0x000184c0) list_double_pane_t_ParamLimits

0xf609,	// (0x000184c0) list_double_pane_t

0x8884,	// (0x0001173b) list_double2_pane_g1_ParamLimits

0x8884,	// (0x0001173b) list_double2_pane_g1

0x8895,	// (0x0001174c) list_double2_pane_g2_ParamLimits

0x8895,	// (0x0001174c) list_double2_pane_g2

0x0001,

0xf60e,	// (0x000184c5) list_double2_pane_g_ParamLimits

0xf60e,	// (0x000184c5) list_double2_pane_g

0x88a1,	// (0x00011758) list_double2_pane_t1_ParamLimits

0x88a1,	// (0x00011758) list_double2_pane_t1

0x88b7,	// (0x0001176e) list_double2_pane_t2_ParamLimits

0x88b7,	// (0x0001176e) list_double2_pane_t2

0x0001,

0xf613,	// (0x000184ca) list_double2_pane_t_ParamLimits

0xf613,	// (0x000184ca) list_double2_pane_t

0x8844,	// (0x000116fb) list_double_number_pane_g1_ParamLimits

0x8844,	// (0x000116fb) list_double_number_pane_g1

0x8850,	// (0x00011707) list_double_number_pane_g2_ParamLimits

0x8850,	// (0x00011707) list_double_number_pane_g2

0x0001,

0xf604,	// (0x000184bb) list_double_number_pane_g_ParamLimits

0xf604,	// (0x000184bb) list_double_number_pane_g

0x88c9,	// (0x00011780) list_double_number_pane_t1_ParamLimits

0x88c9,	// (0x00011780) list_double_number_pane_t1

0x88db,	// (0x00011792) list_double_number_pane_t2_ParamLimits

0x88db,	// (0x00011792) list_double_number_pane_t2

0x88f1,	// (0x000117a8) list_double_number_pane_t3_ParamLimits

0x88f1,	// (0x000117a8) list_double_number_pane_t3

0x0002,

0xf618,	// (0x000184cf) list_double_number_pane_t_ParamLimits

0xf618,	// (0x000184cf) list_double_number_pane_t

0x8903,	// (0x000117ba) list_double_graphic_pane_g1_ParamLimits

0x8903,	// (0x000117ba) list_double_graphic_pane_g1

0x890f,	// (0x000117c6) list_double_graphic_pane_g2_ParamLimits

0x890f,	// (0x000117c6) list_double_graphic_pane_g2

0x891e,	// (0x000117d5) list_double_graphic_pane_g3_ParamLimits

0x891e,	// (0x000117d5) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x000184d6) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x000184d6) list_double_graphic_pane_g

0x8936,	// (0x000117ed) list_double_graphic_pane_t1_ParamLimits

0x8936,	// (0x000117ed) list_double_graphic_pane_t1

0x894c,	// (0x00011803) list_double_graphic_pane_t2_ParamLimits

0x894c,	// (0x00011803) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x000184df) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x000184df) list_double_graphic_pane_t

0x895e,	// (0x00011815) list_double2_graphic_pane_g1_ParamLimits

0x895e,	// (0x00011815) list_double2_graphic_pane_g1

0x896a,	// (0x00011821) list_double2_graphic_pane_g2_ParamLimits

0x896a,	// (0x00011821) list_double2_graphic_pane_g2

0x8895,	// (0x0001174c) list_double2_graphic_pane_g3_ParamLimits

0x8895,	// (0x0001174c) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x000184e4) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x000184e4) list_double2_graphic_pane_g

0x8976,	// (0x0001182d) list_double2_graphic_pane_t1_ParamLimits

0x8976,	// (0x0001182d) list_double2_graphic_pane_t1

0x898c,	// (0x00011843) list_double2_graphic_pane_t2_ParamLimits

0x898c,	// (0x00011843) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x000184eb) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x000184eb) list_double2_graphic_pane_t

0x899e,	// (0x00011855) list_double_large_graphic_pane_g1_ParamLimits

0x899e,	// (0x00011855) list_double_large_graphic_pane_g1

0x89c9,	// (0x00011880) list_double_large_graphic_pane_g2_ParamLimits

0x89c9,	// (0x00011880) list_double_large_graphic_pane_g2

0x8850,	// (0x00011707) list_double_large_graphic_pane_g3_ParamLimits

0x8850,	// (0x00011707) list_double_large_graphic_pane_g3

0x89da,	// (0x00011891) list_double_large_graphic_pane_g4_ParamLimits

0x89da,	// (0x00011891) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x000184f0) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x000184f0) list_double_large_graphic_pane_g

0x8a01,	// (0x000118b8) list_double_large_graphic_pane_t1_ParamLimits

0x8a01,	// (0x000118b8) list_double_large_graphic_pane_t1

0x8a1a,	// (0x000118d1) list_double_large_graphic_pane_t2_ParamLimits

0x8a1a,	// (0x000118d1) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x000184fb) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x000184fb) list_double_large_graphic_pane_t

0x8a2c,	// (0x000118e3) list_double2_large_graphic_pane_g1_ParamLimits

0x8a2c,	// (0x000118e3) list_double2_large_graphic_pane_g1

0x8884,	// (0x0001173b) list_double2_large_graphic_pane_g2_ParamLimits

0x8884,	// (0x0001173b) list_double2_large_graphic_pane_g2

0x8895,	// (0x0001174c) list_double2_large_graphic_pane_g3_ParamLimits

0x8895,	// (0x0001174c) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x00018500) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x00018500) list_double2_large_graphic_pane_g

0x8a38,	// (0x000118ef) list_double2_large_graphic_pane_t1_ParamLimits

0x8a38,	// (0x000118ef) list_double2_large_graphic_pane_t1

0x8a4e,	// (0x00011905) list_double2_large_graphic_pane_t2_ParamLimits

0x8a4e,	// (0x00011905) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x00018507) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x00018507) list_double2_large_graphic_pane_t

0x8a60,	// (0x00011917) list_double_heading_pane_g1_ParamLimits

0x8a60,	// (0x00011917) list_double_heading_pane_g1

0x8a71,	// (0x00011928) list_double_heading_pane_g2_ParamLimits

0x8a71,	// (0x00011928) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0001850c) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0001850c) list_double_heading_pane_g

0x8a7d,	// (0x00011934) list_double_heading_pane_t1_ParamLimits

0x8a7d,	// (0x00011934) list_double_heading_pane_t1

0x8a93,	// (0x0001194a) list_double_heading_pane_t2_ParamLimits

0x8a93,	// (0x0001194a) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x00018511) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x00018511) list_double_heading_pane_t

0x8903,	// (0x000117ba) list_double_graphic_heading_pane_g1_ParamLimits

0x8903,	// (0x000117ba) list_double_graphic_heading_pane_g1

0x8a60,	// (0x00011917) list_double_graphic_heading_pane_g2_ParamLimits

0x8a60,	// (0x00011917) list_double_graphic_heading_pane_g2

0x8a71,	// (0x00011928) list_double_graphic_heading_pane_g3_ParamLimits

0x8a71,	// (0x00011928) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x00018516) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x00018516) list_double_graphic_heading_pane_g

0x8aa5,	// (0x0001195c) list_double_graphic_heading_pane_t1_ParamLimits

0x8aa5,	// (0x0001195c) list_double_graphic_heading_pane_t1

0x8abb,	// (0x00011972) list_double_graphic_heading_pane_t2_ParamLimits

0x8abb,	// (0x00011972) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0001851d) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0001851d) list_double_graphic_heading_pane_t

0x89c9,	// (0x00011880) list_double_time_pane_g1_ParamLimits

0x89c9,	// (0x00011880) list_double_time_pane_g1

0x8850,	// (0x00011707) list_double_time_pane_g2_ParamLimits

0x8850,	// (0x00011707) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x00018522) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x00018522) list_double_time_pane_g

0x8acd,	// (0x00011984) list_double_time_pane_t1_ParamLimits

0x8acd,	// (0x00011984) list_double_time_pane_t1

0x8ae3,	// (0x0001199a) list_double_time_pane_t2_ParamLimits

0x8ae3,	// (0x0001199a) list_double_time_pane_t2

0x8af5,	// (0x000119ac) list_double_time_pane_t3_ParamLimits

0x8af5,	// (0x000119ac) list_double_time_pane_t3

0x8b07,	// (0x000119be) list_double_time_pane_t4_ParamLimits

0x8b07,	// (0x000119be) list_double_time_pane_t4

0x0003,

0xf670,	// (0x00018527) list_double_time_pane_t_ParamLimits

0xf670,	// (0x00018527) list_double_time_pane_t

0x896a,	// (0x00011821) list_setting_pane_g1_ParamLimits

0x896a,	// (0x00011821) list_setting_pane_g1

0x8895,	// (0x0001174c) list_setting_pane_g2_ParamLimits

0x8895,	// (0x0001174c) list_setting_pane_g2

0x0001,

0xf679,	// (0x00018530) list_setting_pane_g_ParamLimits

0xf679,	// (0x00018530) list_setting_pane_g

0x8b19,	// (0x000119d0) list_setting_pane_t1_ParamLimits

0x8b19,	// (0x000119d0) list_setting_pane_t1

0x8b30,	// (0x000119e7) list_setting_pane_t2_ParamLimits

0x8b30,	// (0x000119e7) list_setting_pane_t2

0x0002,

0xf67e,	// (0x00018535) list_setting_pane_t_ParamLimits

0xf67e,	// (0x00018535) list_setting_pane_t

0x8b6d,	// (0x00011a24) set_value_pane_cp_ParamLimits

0x8b6d,	// (0x00011a24) set_value_pane_cp

0x896a,	// (0x00011821) list_setting_number_pane_g1_ParamLimits

0x896a,	// (0x00011821) list_setting_number_pane_g1

0x8895,	// (0x0001174c) list_setting_number_pane_g2_ParamLimits

0x8895,	// (0x0001174c) list_setting_number_pane_g2

0x0001,

0xf679,	// (0x00018530) list_setting_number_pane_g_ParamLimits

0xf679,	// (0x00018530) list_setting_number_pane_g

0x8b79,	// (0x00011a30) list_setting_number_pane_t1_ParamLimits

0x8b79,	// (0x00011a30) list_setting_number_pane_t1

0x8b8d,	// (0x00011a44) list_setting_number_pane_t2_ParamLimits

0x8b8d,	// (0x00011a44) list_setting_number_pane_t2

0x8ba4,	// (0x00011a5b) list_setting_number_pane_t3_ParamLimits

0x8ba4,	// (0x00011a5b) list_setting_number_pane_t3

0x0003,

0xf685,	// (0x0001853c) list_setting_number_pane_t_ParamLimits

0xf685,	// (0x0001853c) list_setting_number_pane_t

0x8b6d,	// (0x00011a24) set_value_pane_ParamLimits

0x8b6d,	// (0x00011a24) set_value_pane

0x8be7,	// (0x00011a9e) bg_set_opt_pane_ParamLimits

0x8be7,	// (0x00011a9e) bg_set_opt_pane

0x8c08,	// (0x00011abf) set_value_pane_t1

0x8c16,	// (0x00011acd) slider_set_pane_cp3

0x8c1f,	// (0x00011ad6) volume_small_pane_cp

0x8c28,	// (0x00011adf) list_form_gen_pane

0x8c31,	// (0x00011ae8) scroll_pane_cp8

0x8c42,	// (0x00011af9) form_field_data_pane_ParamLimits

0x8c42,	// (0x00011af9) form_field_data_pane

0x8c62,	// (0x00011b19) form_field_data_wide_pane_ParamLimits

0x8c62,	// (0x00011b19) form_field_data_wide_pane

0x8c83,	// (0x00011b3a) form_field_popup_pane_ParamLimits

0x8c83,	// (0x00011b3a) form_field_popup_pane

0x8ca1,	// (0x00011b58) form_field_popup_wide_pane_ParamLimits

0x8ca1,	// (0x00011b58) form_field_popup_wide_pane

0x8cbc,	// (0x00011b73) form_field_slider_pane_ParamLimits

0x8cbc,	// (0x00011b73) form_field_slider_pane

0x8ccf,	// (0x00011b86) form_field_slider_wide_pane_ParamLimits

0x8ccf,	// (0x00011b86) form_field_slider_wide_pane

0x8ce2,	// (0x00011b99) data_form_pane

0x8cf8,	// (0x00011baf) form_field_data_pane_t1

0x8d12,	// (0x00011bc9) input_focus_pane

0x8d20,	// (0x00011bd7) data_form_wide_pane

0x8d58,	// (0x00011c0f) form_field_data_wide_pane_t1

0x8517,	// (0x000113ce) input_focus_pane_cp6

0x8d7a,	// (0x00011c31) form_field_popup_pane_t1

0x8d12,	// (0x00011bc9) input_focus_pane_cp7

0x8d94,	// (0x00011c4b) list_form_pane

0x8da8,	// (0x00011c5f) form_field_popup_wide_pane_t1

0x8d12,	// (0x00011bc9) input_focus_pane_cp8

0x8dbd,	// (0x00011c74) list_form_wide_pane

0x8dd4,	// (0x00011c8b) form_field_slider_pane_t1_ParamLimits

0x8dd4,	// (0x00011c8b) form_field_slider_pane_t1

0x8de8,	// (0x00011c9f) form_field_slider_pane_t2_ParamLimits

0x8de8,	// (0x00011c9f) form_field_slider_pane_t2

0x0001,

0xf695,	// (0x0001854c) form_field_slider_pane_t_ParamLimits

0xf695,	// (0x0001854c) form_field_slider_pane_t

0x81ce,	// (0x00011085) input_focus_pane_cp9_ParamLimits

0x81ce,	// (0x00011085) input_focus_pane_cp9

0x8dfa,	// (0x00011cb1) slider_cont_pane_ParamLimits

0x8dfa,	// (0x00011cb1) slider_cont_pane

0x8e0e,	// (0x00011cc5) form_field_slider_wide_pane_t1_ParamLimits

0x8e0e,	// (0x00011cc5) form_field_slider_wide_pane_t1

0x8e20,	// (0x00011cd7) form_field_slider_wide_pane_t2_ParamLimits

0x8e20,	// (0x00011cd7) form_field_slider_wide_pane_t2

0x0001,

0xf69a,	// (0x00018551) form_field_slider_wide_pane_t_ParamLimits

0xf69a,	// (0x00018551) form_field_slider_wide_pane_t

0x81ce,	// (0x00011085) input_focus_pane_cp10_ParamLimits

0x81ce,	// (0x00011085) input_focus_pane_cp10

0x8e32,	// (0x00011ce9) slider_cont_pane_cp1_ParamLimits

0x8e32,	// (0x00011ce9) slider_cont_pane_cp1

0x8e46,	// (0x00011cfd) slider_form_pane_cp

0x8e4e,	// (0x00011d05) input_focus_pane_g1

0x8e56,	// (0x00011d0d) input_focus_pane_g2

0x8e5e,	// (0x00011d15) input_focus_pane_g3

0x8e66,	// (0x00011d1d) input_focus_pane_g4

0x8e6e,	// (0x00011d25) input_focus_pane_g5

0x8e76,	// (0x00011d2d) input_focus_pane_g6

0x8e7e,	// (0x00011d35) input_focus_pane_g7

0x8e86,	// (0x00011d3d) input_focus_pane_g8

0x8e8e,	// (0x00011d45) input_focus_pane_g9

0x7e4f,	// (0x00010d06) input_focus_pane_g10

0x0009,

0xf69f,	// (0x00018556) input_focus_pane_g

0xb0b0,	// (0x00013f67) wait_border_pane_g3_copy1

0x8e96,	// (0x00011d4d) data_form_pane_t1

0x7e4f,	// (0x00010d06) wait_anim_pane_g1_copy1

0xc01c,	// (0x00014ed3) data_form_wide_pane_t1

0x8eb1,	// (0x00011d68) list_form_graphic_pane_cp_ParamLimits

0x8eb1,	// (0x00011d68) list_form_graphic_pane_cp

0xbff1,	// (0x00014ea8) slider_form_pane_g1

0xbffa,	// (0x00014eb1) slider_form_pane_g2

0x0006,

0xf99b,	// (0x00018852) slider_form_pane_g

0x8ec8,	// (0x00011d7f) list_form_graphic_pane_ParamLimits

0x8ec8,	// (0x00011d7f) list_form_graphic_pane

0x8ee2,	// (0x00011d99) list_form_graphic_pane_g1

0x8eea,	// (0x00011da1) list_form_graphic_pane_t1_ParamLimits

0x8eea,	// (0x00011da1) list_form_graphic_pane_t1

0x7f39,	// (0x00010df0) list_highlight_pane_cp5_ParamLimits

0x7f39,	// (0x00010df0) list_highlight_pane_cp5

0x8eff,	// (0x00011db6) find_pane_g1

0x8f08,	// (0x00011dbf) input_find_pane

0x8f11,	// (0x00011dc8) input_find_pane_g1_ParamLimits

0x8f11,	// (0x00011dc8) input_find_pane_g1

0x8f1d,	// (0x00011dd4) input_find_pane_t1_ParamLimits

0x8f1d,	// (0x00011dd4) input_find_pane_t1

0x8f32,	// (0x00011de9) input_find_pane_t2_ParamLimits

0x8f32,	// (0x00011de9) input_find_pane_t2

0x0001,

0xf6b4,	// (0x0001856b) input_find_pane_t_ParamLimits

0xf6b4,	// (0x0001856b) input_find_pane_t

0x8f47,	// (0x00011dfe) input_focus_pane_cp5_ParamLimits

0x8f47,	// (0x00011dfe) input_focus_pane_cp5

0x8f61,	// (0x00011e18) bg_popup_window_pane_cp2_ParamLimits

0x8f61,	// (0x00011e18) bg_popup_window_pane_cp2

0x8f6e,	// (0x00011e25) listscroll_menu_pane_ParamLimits

0x8f6e,	// (0x00011e25) listscroll_menu_pane

0x8f7a,	// (0x00011e31) popup_submenu_window_ParamLimits

0x8f7a,	// (0x00011e31) popup_submenu_window

0x8fa2,	// (0x00011e59) find_popup_pane_g1

0x8faa,	// (0x00011e61) input_popup_find_pane_cp

0x8f47,	// (0x00011dfe) input_focus_pane_cp4_ParamLimits

0x8f47,	// (0x00011dfe) input_focus_pane_cp4

0x8fc2,	// (0x00011e79) input_popup_find_pane_t1_ParamLimits

0x8fc2,	// (0x00011e79) input_popup_find_pane_t1

0x7e59,	// (0x00010d10) bg_popup_sub_pane_cp

0x8ff0,	// (0x00011ea7) listscroll_popup_sub_pane

0x8ff8,	// (0x00011eaf) list_submenu_pane_ParamLimits

0x8ff8,	// (0x00011eaf) list_submenu_pane

0x9009,	// (0x00011ec0) scroll_pane_cp4

0x9011,	// (0x00011ec8) list_single_popup_submenu_pane_ParamLimits

0x9011,	// (0x00011ec8) list_single_popup_submenu_pane

0x9024,	// (0x00011edb) list_single_popup_submenu_pane_g1

0x902c,	// (0x00011ee3) list_single_popup_submenu_pane_t1_ParamLimits

0x902c,	// (0x00011ee3) list_single_popup_submenu_pane_t1

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp1_ParamLimits

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp1

0x9041,	// (0x00011ef8) tabs_2_active_pane_g1

0x9049,	// (0x00011f00) tabs_2_active_pane_t1

0x7f39,	// (0x00010df0) bg_passive_tab_pane_cp1_ParamLimits

0x7f39,	// (0x00010df0) bg_passive_tab_pane_cp1

0x9041,	// (0x00011ef8) tabs_2_passive_pane_g1

0x9049,	// (0x00011f00) tabs_2_passive_pane_t1

0x905b,	// (0x00011f12) bg_active_tab_pane_cp4

0x9069,	// (0x00011f20) tabs_2_long_active_pane_t1

0x907c,	// (0x00011f33) bg_passive_tab_pane_cp4

0x6cc0,	// (0x0000fb77) list_single_midp_graphic_pane_g4_ParamLimits

0x905b,	// (0x00011f12) bg_active_tab_pane_cp5

0x9088,	// (0x00011f3f) tabs_3_long_active_pane_t1

0x907c,	// (0x00011f33) bg_passive_tab_pane_cp5

0x6cc0,	// (0x0000fb77) list_single_midp_graphic_pane_g4

0x7f39,	// (0x00010df0) bg_popup_window_pane_cp13_ParamLimits

0x7f39,	// (0x00010df0) bg_popup_window_pane_cp13

0x90a3,	// (0x00011f5a) listscroll_popup_fast_pane_ParamLimits

0x90a3,	// (0x00011f5a) listscroll_popup_fast_pane

0x90b2,	// (0x00011f69) grid_popup_fast_pane_ParamLimits

0x90b2,	// (0x00011f69) grid_popup_fast_pane

0x90c4,	// (0x00011f7b) scroll_pane_cp9_ParamLimits

0x90c4,	// (0x00011f7b) scroll_pane_cp9

0xddb4,	// (0x00016c6b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xddb4,	// (0x00016c6b) list_single_graphic_hl_pane_t1_cp2

0x90e8,	// (0x00011f9f) input_focus_pane_cp20_ParamLimits

0x90e8,	// (0x00011f9f) input_focus_pane_cp20

0x90f6,	// (0x00011fad) query_popup_data_pane_t1_ParamLimits

0x90f6,	// (0x00011fad) query_popup_data_pane_t1

0x9109,	// (0x00011fc0) query_popup_data_pane_t2_ParamLimits

0x9109,	// (0x00011fc0) query_popup_data_pane_t2

0x914f,	// (0x00012006) query_popup_data_pane_t3_ParamLimits

0x914f,	// (0x00012006) query_popup_data_pane_t3

0x9190,	// (0x00012047) query_popup_data_pane_t4_ParamLimits

0x9190,	// (0x00012047) query_popup_data_pane_t4

0x91cc,	// (0x00012083) query_popup_data_pane_t5_ParamLimits

0x91cc,	// (0x00012083) query_popup_data_pane_t5

0x0004,

0xf6b9,	// (0x00018570) query_popup_data_pane_t_ParamLimits

0xf6b9,	// (0x00018570) query_popup_data_pane_t

0x8e4e,	// (0x00011d05) bg_set_opt_pane_g1

0x8e56,	// (0x00011d0d) bg_set_opt_pane_g2

0x8e5e,	// (0x00011d15) bg_set_opt_pane_g3

0x8e66,	// (0x00011d1d) bg_set_opt_pane_g4

0x8e6e,	// (0x00011d25) bg_set_opt_pane_g5

0x8e76,	// (0x00011d2d) bg_set_opt_pane_g6

0x8e7e,	// (0x00011d35) bg_set_opt_pane_g7

0x8e86,	// (0x00011d3d) bg_set_opt_pane_g8

0x8e8e,	// (0x00011d45) bg_set_opt_pane_g9

0x0008,

0xf6c4,	// (0x0001857b) bg_set_opt_pane_g

0x68cb,	// (0x0000f782) control_top_pane_stacon_ParamLimits

0x68cb,	// (0x0000f782) control_top_pane_stacon

0x691e,	// (0x0000f7d5) signal_pane_stacon_ParamLimits

0x691e,	// (0x0000f7d5) signal_pane_stacon

0x981e,	// (0x000126d5) stacon_top_pane_g1_ParamLimits

0x981e,	// (0x000126d5) stacon_top_pane_g1

0x6943,	// (0x0000f7fa) title_pane_stacon_ParamLimits

0x6943,	// (0x0000f7fa) title_pane_stacon

0x696d,	// (0x0000f824) uni_indicator_pane_stacon_ParamLimits

0x696d,	// (0x0000f824) uni_indicator_pane_stacon

0x6982,	// (0x0000f839) battery_pane_stacon_ParamLimits

0x6982,	// (0x0000f839) battery_pane_stacon

0x69c6,	// (0x0000f87d) control_bottom_pane_stacon_ParamLimits

0x69c6,	// (0x0000f87d) control_bottom_pane_stacon

0x69e9,	// (0x0000f8a0) navi_pane_stacon_ParamLimits

0x69e9,	// (0x0000f8a0) navi_pane_stacon

0x9840,	// (0x000126f7) stacon_bottom_pane_g1_ParamLimits

0x9840,	// (0x000126f7) stacon_bottom_pane_g1

0x662c,	// (0x0000f4e3) aid_levels_signal_lsc_ParamLimits

0x662c,	// (0x0000f4e3) aid_levels_signal_lsc

0x6643,	// (0x0000f4fa) signal_pane_stacon_g1_ParamLimits

0x6643,	// (0x0000f4fa) signal_pane_stacon_g1

0x6657,	// (0x0000f50e) signal_pane_stacon_g2_ParamLimits

0x6657,	// (0x0000f50e) signal_pane_stacon_g2

0x0001,

0xf6d7,	// (0x0001858e) signal_pane_stacon_g_ParamLimits

0xf6d7,	// (0x0001858e) signal_pane_stacon_g

0x668c,	// (0x0000f543) title_pane_stacon_t1_ParamLimits

0x668c,	// (0x0000f543) title_pane_stacon_t1

0x9210,	// (0x000120c7) uni_indicator_pane_stacon_g1

0x921a,	// (0x000120d1) uni_indicator_pane_stacon_g2

0x9224,	// (0x000120db) uni_indicator_pane_stacon_g3

0x922e,	// (0x000120e5) uni_indicator_pane_stacon_g4

0x0003,

0xf6e3,	// (0x0001859a) uni_indicator_pane_stacon_g

0x66b1,	// (0x0000f568) control_top_pane_stacon_g1

0x66b9,	// (0x0000f570) control_top_pane_stacon_t1_ParamLimits

0x66b9,	// (0x0000f570) control_top_pane_stacon_t1

0x66f0,	// (0x0000f5a7) aid_levels_battery_lsc_ParamLimits

0x66f0,	// (0x0000f5a7) aid_levels_battery_lsc

0x6708,	// (0x0000f5bf) battery_pane_stacon_g1_ParamLimits

0x6708,	// (0x0000f5bf) battery_pane_stacon_g1

0x671b,	// (0x0000f5d2) battery_pane_stacon_g2_ParamLimits

0x671b,	// (0x0000f5d2) battery_pane_stacon_g2

0x0001,

0xf6ec,	// (0x000185a3) battery_pane_stacon_g_ParamLimits

0xf6ec,	// (0x000185a3) battery_pane_stacon_g

0x6759,	// (0x0000f610) navi_icon_pane_stacon

0x676d,	// (0x0000f624) navi_navi_pane_stacon

0x6759,	// (0x0000f610) navi_text_pane_stacon

0x66b1,	// (0x0000f568) control_bottom_pane_stacon_g1

0x6781,	// (0x0000f638) control_bottom_pane_stacon_t1_ParamLimits

0x6781,	// (0x0000f638) control_bottom_pane_stacon_t1

0x9252,	// (0x00012109) grid_app_pane_ParamLimits

0x9252,	// (0x00012109) grid_app_pane

0x9274,	// (0x0001212b) scroll_pane_cp15_ParamLimits

0x9274,	// (0x0001212b) scroll_pane_cp15

0x9289,	// (0x00012140) cell_app_pane_ParamLimits

0x9289,	// (0x00012140) cell_app_pane

0x92b3,	// (0x0001216a) cell_app_pane_g1_ParamLimits

0x92b3,	// (0x0001216a) cell_app_pane_g1

0x92d3,	// (0x0001218a) cell_app_pane_g2_ParamLimits

0x92d3,	// (0x0001218a) cell_app_pane_g2

0x0001,

0xf6f1,	// (0x000185a8) cell_app_pane_g_ParamLimits

0xf6f1,	// (0x000185a8) cell_app_pane_g

0x92df,	// (0x00012196) cell_app_pane_t1_ParamLimits

0x92df,	// (0x00012196) cell_app_pane_t1

0x92f6,	// (0x000121ad) grid_highlight_pane_ParamLimits

0x92f6,	// (0x000121ad) grid_highlight_pane

0x8e4e,	// (0x00011d05) cell_highlight_pane_g1

0x8e56,	// (0x00011d0d) cell_highlight_pane_g2

0x8e5e,	// (0x00011d15) cell_highlight_pane_g3

0x8e66,	// (0x00011d1d) cell_highlight_pane_g4

0x8e6e,	// (0x00011d25) cell_highlight_pane_g5

0x8e76,	// (0x00011d2d) cell_highlight_pane_g6

0x8e7e,	// (0x00011d35) cell_highlight_pane_g7

0x8e86,	// (0x00011d3d) cell_highlight_pane_g8

0x8e8e,	// (0x00011d45) cell_highlight_pane_g9

0x7e4f,	// (0x00010d06) cell_highlight_pane_g10

0x0009,

0xf69f,	// (0x00018556) cell_highlight_pane_g

0x9307,	// (0x000121be) bg_scroll_pane

0x67cb,	// (0x0000f682) scroll_handle_pane

0x934e,	// (0x00012205) scroll_bg_pane_g1

0x9363,	// (0x0001221a) scroll_bg_pane_g2

0x937b,	// (0x00012232) scroll_bg_pane_g3

0x0002,

0xf6f6,	// (0x000185ad) scroll_bg_pane_g

0x9390,	// (0x00012247) scroll_handle_focus_pane_ParamLimits

0x9390,	// (0x00012247) scroll_handle_focus_pane

0x934e,	// (0x00012205) scroll_handle_pane_g1

0x939d,	// (0x00012254) scroll_handle_pane_g2

0x937b,	// (0x00012232) scroll_handle_pane_g3

0x0002,

0xf6fd,	// (0x000185b4) scroll_handle_pane_g

0x8f47,	// (0x00011dfe) bg_popup_sub_pane_cp21_ParamLimits

0x8f47,	// (0x00011dfe) bg_popup_sub_pane_cp21

0x93b1,	// (0x00012268) popup_fep_japan_predictive_window_t1_ParamLimits

0x93b1,	// (0x00012268) popup_fep_japan_predictive_window_t1

0x93c8,	// (0x0001227f) popup_fep_japan_predictive_window_t2_ParamLimits

0x93c8,	// (0x0001227f) popup_fep_japan_predictive_window_t2

0x93fb,	// (0x000122b2) popup_fep_japan_predictive_window_t3_ParamLimits

0x93fb,	// (0x000122b2) popup_fep_japan_predictive_window_t3

0x0002,

0xf704,	// (0x000185bb) popup_fep_japan_predictive_window_t_ParamLimits

0xf704,	// (0x000185bb) popup_fep_japan_predictive_window_t

0x7e59,	// (0x00010d10) bg_popup_sub_pane_cp23

0x9432,	// (0x000122e9) listscroll_japin_cand_pane

0x943a,	// (0x000122f1) popup_fep_japan_candidate_window_t1

0x9448,	// (0x000122ff) candidate_pane_ParamLimits

0x9448,	// (0x000122ff) candidate_pane

0x945a,	// (0x00012311) scroll_pane_cp30

0x9462,	// (0x00012319) list_single_popup_jap_candidate_pane_ParamLimits

0x9462,	// (0x00012319) list_single_popup_jap_candidate_pane

0x7e59,	// (0x00010d10) list_highlight_pane_cp30

0x9476,	// (0x0001232d) list_single_popup_jap_candidate_pane_t1

0x9485,	// (0x0001233c) level_1_signal

0x9492,	// (0x00012349) level_2_signal

0x949f,	// (0x00012356) level_3_signal

0x94ac,	// (0x00012363) level_4_signal

0x94b9,	// (0x00012370) level_5_signal

0x94c6,	// (0x0001237d) level_6_signal

0x94d3,	// (0x0001238a) level_7_signal

0x9485,	// (0x0001233c) level_1_battery

0x9492,	// (0x00012349) level_2_battery

0x949f,	// (0x00012356) level_3_battery

0x94ac,	// (0x00012363) level_4_battery

0x94b9,	// (0x00012370) level_5_battery

0x94c6,	// (0x0001237d) level_6_battery

0x94d3,	// (0x0001238a) level_7_battery

0x94f8,	// (0x000123af) list_menu_pane_ParamLimits

0x94f8,	// (0x000123af) list_menu_pane

0x950e,	// (0x000123c5) scroll_pane_cp25_ParamLimits

0x950e,	// (0x000123c5) scroll_pane_cp25

0x9527,	// (0x000123de) list_double2_graphic_pane_cp2_ParamLimits

0x9527,	// (0x000123de) list_double2_graphic_pane_cp2

0x9527,	// (0x000123de) list_double2_large_graphic_pane_cp2_ParamLimits

0x9527,	// (0x000123de) list_double2_large_graphic_pane_cp2

0x9527,	// (0x000123de) list_double2_pane_cp2_ParamLimits

0x9527,	// (0x000123de) list_double2_pane_cp2

0x9527,	// (0x000123de) list_double_graphic_pane_cp2_ParamLimits

0x9527,	// (0x000123de) list_double_graphic_pane_cp2

0x9527,	// (0x000123de) list_double_large_graphic_pane_cp2_ParamLimits

0x9527,	// (0x000123de) list_double_large_graphic_pane_cp2

0x9527,	// (0x000123de) list_double_number_pane_cp2_ParamLimits

0x9527,	// (0x000123de) list_double_number_pane_cp2

0x9527,	// (0x000123de) list_double_pane_cp2_ParamLimits

0x9527,	// (0x000123de) list_double_pane_cp2

0x9549,	// (0x00012400) list_single_2graphic_pane_cp2_ParamLimits

0x9549,	// (0x00012400) list_single_2graphic_pane_cp2

0x9549,	// (0x00012400) list_single_graphic_heading_pane_cp2_ParamLimits

0x9549,	// (0x00012400) list_single_graphic_heading_pane_cp2

0x9549,	// (0x00012400) list_single_graphic_pane_cp2_ParamLimits

0x9549,	// (0x00012400) list_single_graphic_pane_cp2

0x9549,	// (0x00012400) list_single_heading_pane_cp2_ParamLimits

0x9549,	// (0x00012400) list_single_heading_pane_cp2

0x9560,	// (0x00012417) list_single_large_graphic_pane_cp2_ParamLimits

0x9560,	// (0x00012417) list_single_large_graphic_pane_cp2

0x9549,	// (0x00012400) list_single_number_heading_pane_cp2_ParamLimits

0x9549,	// (0x00012400) list_single_number_heading_pane_cp2

0x9549,	// (0x00012400) list_single_number_pane_cp2_ParamLimits

0x9549,	// (0x00012400) list_single_number_pane_cp2

0x9549,	// (0x00012400) list_single_pane_cp2_ParamLimits

0x9549,	// (0x00012400) list_single_pane_cp2

0x95dc,	// (0x00012493) bg_popup_sub_pane_cp22

0x687d,	// (0x0000f734) popup_side_volume_key_window_g1

0x68a7,	// (0x0000f75e) popup_side_volume_key_window_t1

0x68c3,	// (0x0000f77a) volume_small_pane_cp1

0x81ce,	// (0x00011085) bg_popup_sub_pane_cp24_ParamLimits

0x81ce,	// (0x00011085) bg_popup_sub_pane_cp24

0x95f2,	// (0x000124a9) fep_china_uni_candidate_pane_ParamLimits

0x95f2,	// (0x000124a9) fep_china_uni_candidate_pane

0x9606,	// (0x000124bd) fep_china_uni_entry_pane

0x9616,	// (0x000124cd) popup_fep_china_uni_window_g1

0x9632,	// (0x000124e9) fep_china_uni_entry_pane_g1

0x963a,	// (0x000124f1) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x000185ec) fep_china_uni_entry_pane_g

0x9642,	// (0x000124f9) fep_entry_item_pane

0x964c,	// (0x00012503) fep_candidate_item_pane

0x9654,	// (0x0001250b) fep_china_uni_candidate_pane_g1

0x965c,	// (0x00012513) fep_china_uni_candidate_pane_g2

0x9664,	// (0x0001251b) fep_china_uni_candidate_pane_g3

0x966c,	// (0x00012523) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x000185f1) fep_china_uni_candidate_pane_g

0x7e4f,	// (0x00010d06) fep_entry_item_pane_g1

0x9674,	// (0x0001252b) fep_entry_item_pane_t1_ParamLimits

0x9674,	// (0x0001252b) fep_entry_item_pane_t1

0x968a,	// (0x00012541) fep_candidate_item_pane_t1_ParamLimits

0x968a,	// (0x00012541) fep_candidate_item_pane_t1

0x969f,	// (0x00012556) fep_candidate_item_pane_t2_ParamLimits

0x969f,	// (0x00012556) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x000185fa) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x000185fa) fep_candidate_item_pane_t

0x7f39,	// (0x00010df0) list_highlight_pane_cp31_ParamLimits

0x7f39,	// (0x00010df0) list_highlight_pane_cp31

0x96b1,	// (0x00012568) level_1_signal_lsc

0x96ba,	// (0x00012571) level_2_signal_lsc

0x96c3,	// (0x0001257a) level_3_signal_lsc

0x96cc,	// (0x00012583) level_4_signal_lsc

0x96d5,	// (0x0001258c) level_5_signal_lsc

0x96de,	// (0x00012595) level_6_signal_lsc

0x96e7,	// (0x0001259e) level_7_signal_lsc

0x96e7,	// (0x0001259e) level_1_battery_lsc

0x96f0,	// (0x000125a7) level_2_battery_lsc

0x96f9,	// (0x000125b0) level_3_battery_lsc

0x9702,	// (0x000125b9) level_4_battery_lsc

0x970b,	// (0x000125c2) level_5_battery_lsc

0x9714,	// (0x000125cb) level_6_battery_lsc

0x96b1,	// (0x00012568) level_7_battery_lsc

0x971d,	// (0x000125d4) scroll_handle_focus_pane_g1

0x9726,	// (0x000125dd) scroll_handle_focus_pane_g2

0x972f,	// (0x000125e6) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x000185ff) scroll_handle_focus_pane_g

0x9738,	// (0x000125ef) list_single_2graphic_pane_g1_ParamLimits

0x9738,	// (0x000125ef) list_single_2graphic_pane_g1

0x87df,	// (0x00011696) list_single_2graphic_pane_g2_ParamLimits

0x87df,	// (0x00011696) list_single_2graphic_pane_g2

0x8765,	// (0x0001161c) list_single_2graphic_pane_g3_ParamLimits

0x8765,	// (0x0001161c) list_single_2graphic_pane_g3

0x9744,	// (0x000125fb) list_single_2graphic_pane_g4_ParamLimits

0x9744,	// (0x000125fb) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x00018606) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x00018606) list_single_2graphic_pane_g

0x9755,	// (0x0001260c) list_single_2graphic_pane_t1_ParamLimits

0x9755,	// (0x0001260c) list_single_2graphic_pane_t1

0x9783,	// (0x0001263a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9783,	// (0x0001263a) list_double2_graphic_large_graphic_pane_g1

0x8884,	// (0x0001173b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8884,	// (0x0001173b) list_double2_graphic_large_graphic_pane_g2

0x8895,	// (0x0001174c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8895,	// (0x0001174c) list_double2_graphic_large_graphic_pane_g3

0x9795,	// (0x0001264c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9795,	// (0x0001264c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001860f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001860f) list_double2_graphic_large_graphic_pane_g

0x97a1,	// (0x00012658) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x97a1,	// (0x00012658) list_double2_graphic_large_graphic_pane_t1

0x97b7,	// (0x0001266e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x97b7,	// (0x0001266e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x00018618) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x00018618) list_double2_graphic_large_graphic_pane_t

0x990b,	// (0x000127c2) popup_fast_swap_window_ParamLimits

0x990b,	// (0x000127c2) popup_fast_swap_window

0x9927,	// (0x000127de) popup_side_volume_key_window

0x9941,	// (0x000127f8) stacon_top_pane

0x994b,	// (0x00012802) status_pane_ParamLimits

0x994b,	// (0x00012802) status_pane

0x9941,	// (0x000127f8) status_small_pane

0x7e59,	// (0x00010d10) control_pane

0x7e59,	// (0x00010d10) stacon_bottom_pane

0x8c31,	// (0x00011ae8) scroll_pane_cp121

0x8c28,	// (0x00011adf) set_content_pane

0x97c9,	// (0x00012680) bg_active_tab_pane_g1_cp1

0x97d2,	// (0x00012689) bg_active_tab_pane_g2_cp1

0x97db,	// (0x00012692) bg_active_tab_pane_g3_cp1

0x97c9,	// (0x00012680) bg_passive_tab_pane_g1_cp1

0x97d2,	// (0x00012689) bg_passive_tab_pane_g2_cp1

0x97db,	// (0x00012692) bg_passive_tab_pane_g3_cp1

0x97e4,	// (0x0001269b) bg_active_tab_pane_g1_cp2

0x97d2,	// (0x00012689) bg_active_tab_pane_g2_cp2

0x97ed,	// (0x000126a4) bg_active_tab_pane_g3_cp2

0x97e4,	// (0x0001269b) bg_passive_tab_pane_g1_cp2

0x97d2,	// (0x00012689) bg_passive_tab_pane_g2_cp2

0x97ed,	// (0x000126a4) bg_passive_tab_pane_g3_cp2

0x97f6,	// (0x000126ad) bg_active_tab_pane_g1_cp3

0x97d2,	// (0x00012689) bg_active_tab_pane_g2_cp3

0x97ff,	// (0x000126b6) bg_active_tab_pane_g3_cp3

0x97f6,	// (0x000126ad) bg_passive_tab_pane_g1_cp3

0x97d2,	// (0x00012689) bg_passive_tab_pane_g2_cp3

0x97ff,	// (0x000126b6) bg_passive_tab_pane_g3_cp3

0x9808,	// (0x000126bf) bg_active_tab_pane_g1_cp4

0x97d2,	// (0x00012689) bg_active_tab_pane_g2_cp4

0x9813,	// (0x000126ca) bg_active_tab_pane_g3_cp4

0x9808,	// (0x000126bf) bg_passive_tab_pane_g1_cp4

0x97d2,	// (0x00012689) bg_passive_tab_pane_g2_cp4

0x9813,	// (0x000126ca) bg_passive_tab_pane_g3_cp4

0x985c,	// (0x00012713) bg_active_tab_pane_g1_cp5

0x97d2,	// (0x00012689) bg_active_tab_pane_g2_cp5

0x9865,	// (0x0001271c) bg_active_tab_pane_g3_cp5

0x985c,	// (0x00012713) bg_passive_tab_pane_g1_cp5

0x97d2,	// (0x00012689) bg_passive_tab_pane_g2_cp5

0x9865,	// (0x0001271c) bg_passive_tab_pane_g3_cp5

0x986e,	// (0x00012725) list_set_graphic_pane_ParamLimits

0x986e,	// (0x00012725) list_set_graphic_pane

0x7e59,	// (0x00010d10) bg_set_opt_pane_cp4

0x988c,	// (0x00012743) list_set_graphic_pane_g1_ParamLimits

0x988c,	// (0x00012743) list_set_graphic_pane_g1

0x9898,	// (0x0001274f) list_set_graphic_pane_g2_ParamLimits

0x9898,	// (0x0001274f) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001861d) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001861d) list_set_graphic_pane_g

0x0009,

0xfaea,	// (0x000189a1) volume_small_pane_cp_g

0x98bc,	// (0x00012773) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x98bc,	// (0x00012773) list_double2_large_graphic_pane_g1_cp2

0x98ca,	// (0x00012781) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x98ca,	// (0x00012781) list_double2_large_graphic_pane_g2_cp2

0x98db,	// (0x00012792) list_double2_large_graphic_pane_g3_cp2

0x98e3,	// (0x0001279a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x98e3,	// (0x0001279a) list_double2_large_graphic_pane_t1_cp2

0x98f9,	// (0x000127b0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x98f9,	// (0x000127b0) list_double2_large_graphic_pane_t2_cp2

0xbb71,	// (0x00014a28) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbb71,	// (0x00014a28) list_double_large_graphic_pane_g1_cp2

0xbb84,	// (0x00014a3b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbb84,	// (0x00014a3b) list_double_large_graphic_pane_g2_cp2

0x9a69,	// (0x00012920) list_double_large_graphic_pane_g3_cp2

0xbb95,	// (0x00014a4c) list_double_large_graphic_pane_g4_cp

0xbb9d,	// (0x00014a54) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xbb9d,	// (0x00014a54) list_double_large_graphic_pane_t1_cp2

0xbbb4,	// (0x00014a6b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xbbb4,	// (0x00014a6b) list_double_large_graphic_pane_t2_cp2

0x9959,	// (0x00012810) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9959,	// (0x00012810) list_double2_graphic_pane_g1_cp2

0x9967,	// (0x0001281e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9967,	// (0x0001281e) list_double2_graphic_pane_g2_cp2

0x9978,	// (0x0001282f) list_double2_graphic_pane_g3_cp2

0x9982,	// (0x00012839) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9982,	// (0x00012839) list_double2_graphic_pane_t1_cp2

0x9998,	// (0x0001284f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9998,	// (0x0001284f) list_double2_graphic_pane_t2_cp2

0x99aa,	// (0x00012861) list_single_number_heading_pane_g1_cp2_ParamLimits

0x99aa,	// (0x00012861) list_single_number_heading_pane_g1_cp2

0x99b6,	// (0x0001286d) list_single_number_heading_pane_g2_cp2

0x99be,	// (0x00012875) list_single_number_heading_pane_t1_cp2_ParamLimits

0x99be,	// (0x00012875) list_single_number_heading_pane_t1_cp2

0x99d4,	// (0x0001288b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x99d4,	// (0x0001288b) list_single_number_heading_pane_t2_cp2

0x99e8,	// (0x0001289f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x99e8,	// (0x0001289f) list_single_number_heading_pane_t3_cp2

0x99aa,	// (0x00012861) list_single_heading_pane_g1_cp2_ParamLimits

0x99aa,	// (0x00012861) list_single_heading_pane_g1_cp2

0x99b6,	// (0x0001286d) list_single_heading_pane_g2_cp2

0x99be,	// (0x00012875) list_single_heading_pane_t1_cp2_ParamLimits

0x99be,	// (0x00012875) list_single_heading_pane_t1_cp2

0xb979,	// (0x00014830) list_single_heading_pane_t2_cp2_ParamLimits

0xb979,	// (0x00014830) list_single_heading_pane_t2_cp2

0xa939,	// (0x000137f0) list_double_graphic_pane_g1_cp2_ParamLimits

0xa939,	// (0x000137f0) list_double_graphic_pane_g1_cp2

0xb8cd,	// (0x00014784) list_double_graphic_pane_g2_cp2_ParamLimits

0xb8cd,	// (0x00014784) list_double_graphic_pane_g2_cp2

0xb8dc,	// (0x00014793) list_double_graphic_pane_g3_cp2

0xb8e4,	// (0x0001479b) list_double_graphic_pane_t1_cp2_ParamLimits

0xb8e4,	// (0x0001479b) list_double_graphic_pane_t1_cp2

0xb8fa,	// (0x000147b1) list_double_graphic_pane_t2_cp2_ParamLimits

0xb8fa,	// (0x000147b1) list_double_graphic_pane_t2_cp2

0x9a5d,	// (0x00012914) list_double_number_pane_g1_cp2_ParamLimits

0x9a5d,	// (0x00012914) list_double_number_pane_g1_cp2

0x9a69,	// (0x00012920) list_double_number_pane_g2_cp2

0xb891,	// (0x00014748) list_double_number_pane_t1_cp2_ParamLimits

0xb891,	// (0x00014748) list_double_number_pane_t1_cp2

0xb8a5,	// (0x0001475c) list_double_number_pane_t2_cp2_ParamLimits

0xb8a5,	// (0x0001475c) list_double_number_pane_t2_cp2

0xb8bb,	// (0x00014772) list_double_number_pane_t3_cp2_ParamLimits

0xb8bb,	// (0x00014772) list_double_number_pane_t3_cp2

0xb77a,	// (0x00014631) list_single_graphic_pane_g1_cp2_ParamLimits

0xb77a,	// (0x00014631) list_single_graphic_pane_g1_cp2

0x9ac1,	// (0x00012978) list_single_graphic_pane_g2_cp2_ParamLimits

0x9ac1,	// (0x00012978) list_single_graphic_pane_g2_cp2

0x9acd,	// (0x00012984) list_single_graphic_pane_g3_cp2

0xb750,	// (0x00014607) list_single_graphic_pane_t1_cp2_ParamLimits

0xb750,	// (0x00014607) list_single_graphic_pane_t1_cp2

0x9ac1,	// (0x00012978) list_single_number_pane_g1_cp2_ParamLimits

0x9ac1,	// (0x00012978) list_single_number_pane_g1_cp2

0x9acd,	// (0x00012984) list_single_number_pane_g2_cp2

0xb750,	// (0x00014607) list_single_number_pane_t1_cp2_ParamLimits

0xb750,	// (0x00014607) list_single_number_pane_t1_cp2

0xb766,	// (0x0001461d) list_single_number_pane_t2_cp2_ParamLimits

0xb766,	// (0x0001461d) list_single_number_pane_t2_cp2

0x98ca,	// (0x00012781) list_double2_pane_g1_cp2_ParamLimits

0x98ca,	// (0x00012781) list_double2_pane_g1_cp2

0x98db,	// (0x00012792) list_double2_pane_g2_cp2

0x9a35,	// (0x000128ec) list_double2_pane_t1_cp2_ParamLimits

0x9a35,	// (0x000128ec) list_double2_pane_t1_cp2

0x9a4b,	// (0x00012902) list_double2_pane_t2_cp2_ParamLimits

0x9a4b,	// (0x00012902) list_double2_pane_t2_cp2

0x9a5d,	// (0x00012914) list_double_pane_g1_cp2_ParamLimits

0x9a5d,	// (0x00012914) list_double_pane_g1_cp2

0x9a69,	// (0x00012920) list_double_pane_g2_cp2

0x9a71,	// (0x00012928) list_double_pane_t1_cp2_ParamLimits

0x9a71,	// (0x00012928) list_double_pane_t1_cp2

0x9a87,	// (0x0001293e) list_double_pane_t2_cp2_ParamLimits

0x9a87,	// (0x0001293e) list_double_pane_t2_cp2

0x9ab1,	// (0x00012968) list_single_pane_cp2_g3

0x9ac1,	// (0x00012978) list_single_pane_g1_cp2_ParamLimits

0x9ac1,	// (0x00012978) list_single_pane_g1_cp2

0x9acd,	// (0x00012984) list_single_pane_g2_cp2

0x9ad5,	// (0x0001298c) list_single_pane_t1_cp2_ParamLimits

0x9ad5,	// (0x0001298c) list_single_pane_t1_cp2

0x9aed,	// (0x000129a4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9aed,	// (0x000129a4) list_single_large_graphic_pane_g1_cp2

0x9afb,	// (0x000129b2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9afb,	// (0x000129b2) list_single_large_graphic_pane_g2_cp2

0x9b07,	// (0x000129be) list_single_large_graphic_pane_g3_cp2

0x9b0f,	// (0x000129c6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9b0f,	// (0x000129c6) list_single_large_graphic_pane_g4_cp1

0x9b29,	// (0x000129e0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9b29,	// (0x000129e0) list_single_large_graphic_pane_t1_cp2

0xb71a,	// (0x000145d1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb71a,	// (0x000145d1) list_single_graphic_heading_pane_g1_cp2

0xb6e7,	// (0x0001459e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb6e7,	// (0x0001459e) list_single_graphic_heading_pane_g4_cp2

0x9acd,	// (0x00012984) list_single_graphic_heading_pane_g5_cp2

0xb726,	// (0x000145dd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xb726,	// (0x000145dd) list_single_graphic_heading_pane_t1_cp2

0xb73c,	// (0x000145f3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb73c,	// (0x000145f3) list_single_graphic_heading_pane_t2_cp2

0xb6db,	// (0x00014592) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb6db,	// (0x00014592) list_single_2graphic_pane_g1_cp2

0xb6e7,	// (0x0001459e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb6e7,	// (0x0001459e) list_single_2graphic_pane_g2_cp2

0x9acd,	// (0x00012984) list_single_2graphic_pane_g3_cp2

0xb6f8,	// (0x000145af) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb6f8,	// (0x000145af) list_single_2graphic_pane_g4_cp2

0xb704,	// (0x000145bb) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb704,	// (0x000145bb) list_single_2graphic_pane_t1_cp2

0x7e4f,	// (0x00010d06) list_highlight_pane_g10_cp1

0xb2c3,	// (0x0001417a) list_highlight_pane_g1_cp1

0xb2cb,	// (0x00014182) list_highlight_pane_g2_cp1

0xb2d3,	// (0x0001418a) list_highlight_pane_g3_cp1

0xb2db,	// (0x00014192) list_highlight_pane_g4_cp1

0xb2e3,	// (0x0001419a) list_highlight_pane_g5_cp1

0xb2eb,	// (0x000141a2) list_highlight_pane_g6_cp1

0xb2f3,	// (0x000141aa) list_highlight_pane_g7_cp1

0xb2fb,	// (0x000141b2) list_highlight_pane_g8_cp1

0xb303,	// (0x000141ba) list_highlight_pane_g9_cp1

0xb1db,	// (0x00014092) form_field_slider_pane_t3

0xb1e9,	// (0x000140a0) form_field_slider_pane_t4

0xb1f7,	// (0x000140ae) slider_form_pane_ParamLimits

0xb1f7,	// (0x000140ae) slider_form_pane

0x7e59,	// (0x00010d10) control_abbreviations

0x7e59,	// (0x00010d10) control_conventions

0x7e59,	// (0x00010d10) control_definitions

0x7e59,	// (0x00010d10) format_table_attribute

0xb9c5,	// (0x0001487c) bg_popup_preview_window_pane_g9

0x7e59,	// (0x00010d10) format_table_data2

0x7e59,	// (0x00010d10) format_table_data3

0x7e59,	// (0x00010d10) format_table_data_example

0x0008,

0x7e59,	// (0x00010d10) intro_purpose

0xf8fb,	// (0x000187b2) bg_popup_preview_window_pane_g

0x7e59,	// (0x00010d10) texts_category

0x7e59,	// (0x00010d10) texts_graphics

0x9b3f,	// (0x000129f6) text_digital

0x9b4e,	// (0x00012a05) text_primary

0x9b5d,	// (0x00012a14) text_primary_small

0x9b6c,	// (0x00012a23) text_secondary

0x9b7b,	// (0x00012a32) text_title

0xc211,	// (0x000150c8) bg_passive_tab_pane_g1_cp3_srt

0x97d2,	// (0x00012689) bg_passive_tab_pane_g2_cp3_srt

0xc21a,	// (0x000150d1) bg_passive_tab_pane_g3_cp3_srt

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp3_srt

0xc223,	// (0x000150da) tabs_4_active_pane_srt_g1

0xc22b,	// (0x000150e2) tabs_4_active_pane_srt_t1_ParamLimits

0xc22b,	// (0x000150e2) tabs_4_active_pane_srt_t1

0xc211,	// (0x000150c8) bg_active_tab_pane_g1_cp3_copy1

0x97d2,	// (0x00012689) bg_active_tab_pane_g2_cp3_copy1

0xc21a,	// (0x000150d1) bg_active_tab_pane_g3_cp3_copy1

0x7f39,	// (0x00010df0) tabs_2_long_active_pane_srt_ParamLimits

0x7f39,	// (0x00010df0) tabs_2_long_active_pane_srt

0x7f39,	// (0x00010df0) tabs_2_long_passive_pane_srt_ParamLimits

0x7f39,	// (0x00010df0) tabs_2_long_passive_pane_srt

0x907c,	// (0x00011f33) bg_passive_tab_pane_cp4_srt_ParamLimits

0x907c,	// (0x00011f33) bg_passive_tab_pane_cp4_srt

0xbe32,	// (0x00014ce9) bg_passive_tab_pane_g1_cp4_srt

0x97d2,	// (0x00012689) bg_passive_tab_pane_g2_cp4_srt

0xbe3b,	// (0x00014cf2) bg_passive_tab_pane_g3_cp4_srt

0x905b,	// (0x00011f12) bg_active_tab_pane_cp4_srt_ParamLimits

0x905b,	// (0x00011f12) bg_active_tab_pane_cp4_srt

0xbe44,	// (0x00014cfb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbe44,	// (0x00014cfb) tabs_2_long_active_pane_srt_t1

0xbe32,	// (0x00014ce9) bg_active_tab_pane_g1_cp4_srt

0x97d2,	// (0x00012689) bg_active_tab_pane_g2_cp4_srt

0xbe3b,	// (0x00014cf2) bg_active_tab_pane_g3_cp4_srt

0x81ce,	// (0x00011085) tabs_3_long_active_pane_srt_ParamLimits

0x81ce,	// (0x00011085) tabs_3_long_active_pane_srt

0x81ce,	// (0x00011085) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x81ce,	// (0x00011085) tabs_3_long_passive_pane_cp_srt

0x81ce,	// (0x00011085) tabs_3_long_passive_pane_srt_ParamLimits

0x81ce,	// (0x00011085) tabs_3_long_passive_pane_srt

0x907c,	// (0x00011f33) bg_passive_tab_pane_cp5_srt_ParamLimits

0x907c,	// (0x00011f33) bg_passive_tab_pane_cp5_srt

0x985c,	// (0x00012713) bg_passive_tab_pane_g1_cp5_srt

0x97d2,	// (0x00012689) bg_passive_tab_pane_g2_cp5_srt

0x9865,	// (0x0001271c) bg_passive_tab_pane_g3_cp5_srt

0x905b,	// (0x00011f12) bg_active_tab_pane_cp5_srt_ParamLimits

0x905b,	// (0x00011f12) bg_active_tab_pane_cp5_srt

0xbe20,	// (0x00014cd7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbe20,	// (0x00014cd7) tabs_3_long_active_pane_srt_t1

0x985c,	// (0x00012713) bg_active_tab_pane_g1_cp5_srt

0x97d2,	// (0x00012689) bg_active_tab_pane_g2_cp5_srt

0x9865,	// (0x0001271c) bg_active_tab_pane_g3_cp5_srt

0xbe12,	// (0x00014cc9) navi_text_pane_srt_t1

0xbe0a,	// (0x00014cc1) navi_icon_pane_srt_g1

0x9d3e,	// (0x00012bf5) midp_editing_number_pane_srt

0x9b8a,	// (0x00012a41) midp_ticker_pane_srt

0x9d46,	// (0x00012bfd) midp_ticker_pane_srt_g1

0x9d4e,	// (0x00012c05) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001863c) midp_ticker_pane_srt_g

0x9d56,	// (0x00012c0d) midp_ticker_pane_srt_t1

0xbdfb,	// (0x00014cb2) midp_editing_number_pane_t1_copy1

0x907c,	// (0x00011f33) listscroll_midp_pane

0x907c,	// (0x00011f33) midp_form_pane

0x9bf6,	// (0x00012aad) midp_info_popup_window_ParamLimits

0x9bf6,	// (0x00012aad) midp_info_popup_window

0x8f47,	// (0x00011dfe) bg_popup_sub_pane_cp50_ParamLimits

0x8f47,	// (0x00011dfe) bg_popup_sub_pane_cp50

0xaef8,	// (0x00013daf) listscroll_midp_info_pane_ParamLimits

0xaef8,	// (0x00013daf) listscroll_midp_info_pane

0xaee0,	// (0x00013d97) listscroll_form_midp_pane_ParamLimits

0xaee0,	// (0x00013d97) listscroll_form_midp_pane

0xaeec,	// (0x00013da3) scroll_bar_cp050

0xaec0,	// (0x00013d77) list_midp_pane

0xcdf2,	// (0x00015ca9) signal_pane_g2_cp

0xadfa,	// (0x00013cb1) listscroll_midp_info_pane_t1_ParamLimits

0xadfa,	// (0x00013cb1) listscroll_midp_info_pane_t1

0xae12,	// (0x00013cc9) listscroll_midp_info_pane_t2_ParamLimits

0xae12,	// (0x00013cc9) listscroll_midp_info_pane_t2

0xae50,	// (0x00013d07) listscroll_midp_info_pane_t3_ParamLimits

0xae50,	// (0x00013d07) listscroll_midp_info_pane_t3

0xae8a,	// (0x00013d41) listscroll_midp_info_pane_t4_ParamLimits

0xae8a,	// (0x00013d41) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x000186ed) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x000186ed) listscroll_midp_info_pane_t

0x9009,	// (0x00011ec0) scroll_pane_cp21

0xad9e,	// (0x00013c55) form_midp_field_choice_group_pane

0xada7,	// (0x00013c5e) form_midp_field_text_pane

0xade0,	// (0x00013c97) form_midp_field_time_pane

0xade8,	// (0x00013c9f) form_midp_gauge_slider_pane

0xadf1,	// (0x00013ca8) form_midp_gauge_wait_pane

0x7e59,	// (0x00010d10) form_midp_image_pane

0xad62,	// (0x00013c19) list_single_midp_pane_ParamLimits

0xad62,	// (0x00013c19) list_single_midp_pane

0xad12,	// (0x00013bc9) form_midp_field_text_pane_t1

0xaadd,	// (0x00013994) input_focus_pane_cp050

0xad51,	// (0x00013c08) list_midp_form_text_pane

0xace1,	// (0x00013b98) form_midp_field_choice_group_pane_t1

0xacef,	// (0x00013ba6) input_focus_pane_cp051

0xad03,	// (0x00013bba) list_midp_choice_pane

0x7e59,	// (0x00010d10) status_idle_pane

0xacc5,	// (0x00013b7c) form_midp_field_time_pane_t1

0x7e4f,	// (0x00010d06) wait_anim_pane_g2_copy1

0xacd3,	// (0x00013b8a) form_midp_field_time_pane_t2

0x0001,

0x9ca6,	// (0x00012b5d) aid_navinavi_width_2_pane

0xf831,	// (0x000186e8) form_midp_field_time_pane_t

0x7e59,	// (0x00010d10) input_focus_pane_cp052

0x7e59,	// (0x00010d10) bg_input_focus_pane_cp040

0xac85,	// (0x00013b3c) form_midp_gauge_slider_pane_t1

0xac93,	// (0x00013b4a) form_midp_gauge_slider_pane_t2

0xaca1,	// (0x00013b58) form_midp_gauge_slider_pane_t3

0xacaf,	// (0x00013b66) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x000186df) form_midp_gauge_slider_pane_t

0xacbd,	// (0x00013b74) form_midp_slider_pane

0x7f39,	// (0x00010df0) bg_input_focus_pane_cp041_ParamLimits

0x7f39,	// (0x00010df0) bg_input_focus_pane_cp041

0xac52,	// (0x00013b09) form_midp_gauge_wait_pane_t1_ParamLimits

0xac52,	// (0x00013b09) form_midp_gauge_wait_pane_t1

0xac64,	// (0x00013b1b) form_midp_gauge_wait_pane_t2_ParamLimits

0xac64,	// (0x00013b1b) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x000186da) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x000186da) form_midp_gauge_wait_pane_t

0xac76,	// (0x00013b2d) form_midp_wait_pane_ParamLimits

0xac76,	// (0x00013b2d) form_midp_wait_pane

0xac1c,	// (0x00013ad3) form_midp_image_pane_g1

0xac25,	// (0x00013adc) form_midp_image_pane_t1

0xac34,	// (0x00013aeb) form_midp_image_pane_t2

0xac43,	// (0x00013afa) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x000186d3) form_midp_image_pane_t

0xac04,	// (0x00013abb) list_single_midp_pane_g1

0xac0d,	// (0x00013ac4) list_single_midp_pane_t1

0xabd4,	// (0x00013a8b) list_midp_form_item_pane_ParamLimits

0xabd4,	// (0x00013a8b) list_midp_form_item_pane

0x9c4e,	// (0x00012b05) list_midp_form_item_pane_t1

0x9c5d,	// (0x00012b14) midp_ticker_pane_g1

0x9c69,	// (0x00012b20) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x00018622) midp_ticker_pane_g

0x9c75,	// (0x00012b2c) midp_ticker_pane_t1

0xc071,	// (0x00014f28) midp_editing_number_pane_t1

0xc04f,	// (0x00014f06) midp_editing_number_pane

0xc05e,	// (0x00014f15) midp_ticker_pane

0xbdc3,	// (0x00014c7a) ai_message_heading_pane

0x7e59,	// (0x00010d10) bg_popup_window_pane_cp14

0xbdcb,	// (0x00014c82) listscroll_ai_message_pane

0xbd4d,	// (0x00014c04) ai_message_heading_pane_g1_ParamLimits

0xbd4d,	// (0x00014c04) ai_message_heading_pane_g1

0xbd59,	// (0x00014c10) ai_message_heading_pane_g2_ParamLimits

0xbd59,	// (0x00014c10) ai_message_heading_pane_g2

0xbd65,	// (0x00014c1c) ai_message_heading_pane_g3_ParamLimits

0xbd65,	// (0x00014c1c) ai_message_heading_pane_g3

0xbd71,	// (0x00014c28) ai_message_heading_pane_g4_ParamLimits

0xbd71,	// (0x00014c28) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x00018814) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x00018814) ai_message_heading_pane_g

0xbd7d,	// (0x00014c34) ai_message_heading_pane_t1_ParamLimits

0xbd7d,	// (0x00014c34) ai_message_heading_pane_t1

0xbd97,	// (0x00014c4e) ai_message_heading_pane_t2_ParamLimits

0xbd97,	// (0x00014c4e) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0001881d) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0001881d) ai_message_heading_pane_t

0xbda9,	// (0x00014c60) bg_popup_heading_pane_cp1_ParamLimits

0xbda9,	// (0x00014c60) bg_popup_heading_pane_cp1

0xbd3b,	// (0x00014bf2) list_ai_message_pane_ParamLimits

0xbd3b,	// (0x00014bf2) list_ai_message_pane

0x9009,	// (0x00011ec0) scroll_pane_cp10

0xbcd7,	// (0x00014b8e) list_ai_message_pane_g1

0xbcdf,	// (0x00014b96) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x000187f1) list_ai_message_pane_g

0xbce7,	// (0x00014b9e) list_ai_message_pane_t1_ParamLimits

0xbce7,	// (0x00014b9e) list_ai_message_pane_t1

0xbcfc,	// (0x00014bb3) list_ai_message_pane_t2_ParamLimits

0xbcfc,	// (0x00014bb3) list_ai_message_pane_t2

0xbd11,	// (0x00014bc8) list_ai_message_pane_t3_ParamLimits

0xbd11,	// (0x00014bc8) list_ai_message_pane_t3

0xbd26,	// (0x00014bdd) list_ai_message_pane_t4_ParamLimits

0xbd26,	// (0x00014bdd) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x000187f6) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x000187f6) list_ai_message_pane_t

0xbcc1,	// (0x00014b78) cell_ai_soft_ind_pane_ParamLimits

0xbcc1,	// (0x00014b78) cell_ai_soft_ind_pane

0x9c87,	// (0x00012b3e) cell_ai_soft_ind_pane_g1_ParamLimits

0x9c87,	// (0x00012b3e) cell_ai_soft_ind_pane_g1

0x7e59,	// (0x00010d10) grid_highlight_cp1

0x9c94,	// (0x00012b4b) text_secondary_cp56_ParamLimits

0x9c94,	// (0x00012b4b) text_secondary_cp56

0xbc96,	// (0x00014b4d) example_general_pane_ParamLimits

0xbc96,	// (0x00014b4d) example_general_pane

0xbca2,	// (0x00014b59) example_parent_pane_g1_ParamLimits

0xbca2,	// (0x00014b59) example_parent_pane_g1

0xbcae,	// (0x00014b65) example_parent_pane_t1_ParamLimits

0xbcae,	// (0x00014b65) example_parent_pane_t1

0xa291,	// (0x00013148) popup_preview_text_window_ParamLimits

0xa291,	// (0x00013148) popup_preview_text_window

0x9ab9,	// (0x00012970) list_single_pane_cp2_g4

0x8278,	// (0x0001112f) bg_popup_preview_window_pane_ParamLimits

0x8278,	// (0x0001112f) bg_popup_preview_window_pane

0xb9cd,	// (0x00014884) popup_preview_text_window_t1_ParamLimits

0xb9cd,	// (0x00014884) popup_preview_text_window_t1

0xb9eb,	// (0x000148a2) popup_preview_text_window_t2_ParamLimits

0xb9eb,	// (0x000148a2) popup_preview_text_window_t2

0xba34,	// (0x000148eb) popup_preview_text_window_t3_ParamLimits

0xba34,	// (0x000148eb) popup_preview_text_window_t3

0xba79,	// (0x00014930) popup_preview_text_window_t4_ParamLimits

0xba79,	// (0x00014930) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x000187c5) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x000187c5) popup_preview_text_window_t

0xbaf7,	// (0x000149ae) scroll_pane_cp11

0xa9c3,	// (0x0001387a) bg_popup_preview_window_pane_g1

0xb98d,	// (0x00014844) bg_popup_preview_window_pane_g2

0xb995,	// (0x0001484c) bg_popup_preview_window_pane_g3

0xb99d,	// (0x00014854) bg_popup_preview_window_pane_g4

0xb9a5,	// (0x0001485c) bg_popup_preview_window_pane_g5

0xb9ad,	// (0x00014864) bg_popup_preview_window_pane_g6

0xb9b5,	// (0x0001486c) bg_popup_preview_window_pane_g7

0xb9bd,	// (0x00014874) bg_popup_preview_window_pane_g8

0x61d0,	// (0x0000f087) aid_popup_width_pane

0xa26f,	// (0x00013126) popup_midp_note_alarm_window_ParamLimits

0xa26f,	// (0x00013126) popup_midp_note_alarm_window

0x8ce2,	// (0x00011b99) data_form_pane_ParamLimits

0x8cee,	// (0x00011ba5) form_field_data_pane_g1

0x8cf8,	// (0x00011baf) form_field_data_pane_t1_ParamLimits

0x8d12,	// (0x00011bc9) input_focus_pane_ParamLimits

0x8d20,	// (0x00011bd7) data_form_wide_pane_ParamLimits

0x8d2c,	// (0x00011be3) form_field_data_wide_pane_g1

0x8d58,	// (0x00011c0f) form_field_data_wide_pane_t1_ParamLimits

0x8517,	// (0x000113ce) input_focus_pane_cp6_ParamLimits

0x8fb4,	// (0x00011e6b) input_popup_find_pane_g1_ParamLimits

0x8fb4,	// (0x00011e6b) input_popup_find_pane_g1

0x672c,	// (0x0000f5e3) aid_navi_side_left_pane

0x6741,	// (0x0000f5f8) aid_navi_side_right_pane

0xb3be,	// (0x00014275) bg_popup_window_pane_cp30_ParamLimits

0xb3be,	// (0x00014275) bg_popup_window_pane_cp30

0xb438,	// (0x000142ef) popup_midp_note_alarm_window_g1_ParamLimits

0xb438,	// (0x000142ef) popup_midp_note_alarm_window_g1

0xb468,	// (0x0001431f) popup_midp_note_alarm_window_t1_ParamLimits

0xb468,	// (0x0001431f) popup_midp_note_alarm_window_t1

0xb509,	// (0x000143c0) popup_midp_note_alarm_window_t2_ParamLimits

0xb509,	// (0x000143c0) popup_midp_note_alarm_window_t2

0xb5b7,	// (0x0001446e) popup_midp_note_alarm_window_t3_ParamLimits

0xb5b7,	// (0x0001446e) popup_midp_note_alarm_window_t3

0xb5df,	// (0x00014496) popup_midp_note_alarm_window_t4_ParamLimits

0xb5df,	// (0x00014496) popup_midp_note_alarm_window_t4

0xb5ff,	// (0x000144b6) popup_midp_note_alarm_window_t5_ParamLimits

0xb5ff,	// (0x000144b6) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x00018762) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x00018762) popup_midp_note_alarm_window_t

0xb6ab,	// (0x00014562) wait_bar_pane_cp1_ParamLimits

0xb6ab,	// (0x00014562) wait_bar_pane_cp1

0x7e59,	// (0x00010d10) wait_anim_pane_copy1

0x7e59,	// (0x00010d10) wait_border_pane_copy1

0xb09c,	// (0x00013f53) wait_border_pane_g1_copy1

0x8d72,	// (0x00011c29) form_field_popup_pane_g1

0x8d7a,	// (0x00011c31) form_field_popup_pane_t1_ParamLimits

0x8d12,	// (0x00011bc9) input_focus_pane_cp7_ParamLimits

0x8d94,	// (0x00011c4b) list_form_pane_ParamLimits

0x8da0,	// (0x00011c57) form_field_popup_wide_pane_g1

0x8da8,	// (0x00011c5f) form_field_popup_wide_pane_t1_ParamLimits

0x8d12,	// (0x00011bc9) input_focus_pane_cp8_ParamLimits

0x8dbd,	// (0x00011c74) list_form_wide_pane_ParamLimits

0xc29b,	// (0x00015152) aid_size_cell_graphic_pane

0x8e96,	// (0x00011d4d) data_form_pane_t1_ParamLimits

0xc01c,	// (0x00014ed3) data_form_wide_pane_t1_ParamLimits

0xa56a,	// (0x00013421) bg_status_flat_pane

0x7e99,	// (0x00010d50) title_pane_t1_ParamLimits

0x7f01,	// (0x00010db8) title_pane_t2_ParamLimits

0x7f27,	// (0x00010dde) title_pane_t3_ParamLimits

0xf56f,	// (0x00018426) title_pane_t_ParamLimits

0x9485,	// (0x0001233c) level_1_signal_ParamLimits

0x9492,	// (0x00012349) level_2_signal_ParamLimits

0x949f,	// (0x00012356) level_3_signal_ParamLimits

0x94ac,	// (0x00012363) level_4_signal_ParamLimits

0x94b9,	// (0x00012370) level_5_signal_ParamLimits

0x94c6,	// (0x0001237d) level_6_signal_ParamLimits

0x94d3,	// (0x0001238a) level_7_signal_ParamLimits

0x9485,	// (0x0001233c) level_1_battery_ParamLimits

0x9492,	// (0x00012349) level_2_battery_ParamLimits

0x949f,	// (0x00012356) level_3_battery_ParamLimits

0x94ac,	// (0x00012363) level_4_battery_ParamLimits

0x94b9,	// (0x00012370) level_5_battery_ParamLimits

0x94c6,	// (0x0001237d) level_6_battery_ParamLimits

0x94d3,	// (0x0001238a) level_7_battery_ParamLimits

0xb2c3,	// (0x0001417a) bg_status_flat_pane_g1

0xb2cb,	// (0x00014182) bg_status_flat_pane_g2

0xb2d3,	// (0x0001418a) bg_status_flat_pane_g3

0xb2db,	// (0x00014192) bg_status_flat_pane_g4

0xb2e3,	// (0x0001419a) bg_status_flat_pane_g5

0xb2eb,	// (0x000141a2) bg_status_flat_pane_g6

0xb2f3,	// (0x000141aa) bg_status_flat_pane_g7

0x7f4f,	// (0x00010e06) tabs_3_active_pane_t1_ParamLimits

0x7f4f,	// (0x00010e06) tabs_3_passive_pane_t1_ParamLimits

0x7f69,	// (0x00010e20) tabs_4_active_pane_t1_ParamLimits

0x7f69,	// (0x00010e20) tabs_4_1_passive_pane_t1_ParamLimits

0x9049,	// (0x00011f00) tabs_2_active_pane_t1_ParamLimits

0x9049,	// (0x00011f00) tabs_2_passive_pane_t1_ParamLimits

0x905b,	// (0x00011f12) bg_active_tab_pane_cp4_ParamLimits

0x9069,	// (0x00011f20) tabs_2_long_active_pane_t1_ParamLimits

0x907c,	// (0x00011f33) bg_passive_tab_pane_cp4_ParamLimits

0x6cf2,	// (0x0000fba9) list_single_midp_graphic_pane_t1_ParamLimits

0x905b,	// (0x00011f12) bg_active_tab_pane_cp5_ParamLimits

0x9088,	// (0x00011f3f) tabs_3_long_active_pane_t1_ParamLimits

0x907c,	// (0x00011f33) bg_passive_tab_pane_cp5_ParamLimits

0x6cf2,	// (0x0000fba9) list_single_midp_graphic_pane_t1

0xa56a,	// (0x00013421) bg_status_flat_pane_ParamLimits

0xa62d,	// (0x000134e4) indicator_pane_cp2_ParamLimits

0xa62d,	// (0x000134e4) indicator_pane_cp2

0xa752,	// (0x00013609) navi_pane_srt_ParamLimits

0xa752,	// (0x00013609) navi_pane_srt

0xa776,	// (0x0001362d) popup_clock_digital_analogue_window_cp1

0x8030,	// (0x00010ee7) indicator_pane_t1

0x9b8a,	// (0x00012a41) copy_highlight_pane

0x9b8a,	// (0x00012a41) cursor_graphics_pane

0x9b8a,	// (0x00012a41) graphic_within_text_pane

0x9b8a,	// (0x00012a41) link_highlight_pane

0xbaba,	// (0x00014971) popup_preview_text_window_t5_ParamLimits

0xbaba,	// (0x00014971) popup_preview_text_window_t5

0x9cae,	// (0x00012b65) cursor_digital_pane

0x9cae,	// (0x00012b65) cursor_primary_pane

0x9cbf,	// (0x00012b76) cursor_primary_small_pane

0x9cc7,	// (0x00012b7e) cursor_secondary_pane

0x9ccf,	// (0x00012b86) cursor_title_pane

0x9cae,	// (0x00012b65) link_highlight_digital_pane

0x9cb6,	// (0x00012b6d) link_highlight_primary_pane

0x9cbf,	// (0x00012b76) link_highlight_primary_small_pane

0x9cc7,	// (0x00012b7e) link_highlight_secondary_pane

0x9ccf,	// (0x00012b86) link_highlight_title_pane

0x9cae,	// (0x00012b65) copy_highlight_digital_pane

0x9cae,	// (0x00012b65) copy_highlight_primary_pane

0x9cbf,	// (0x00012b76) copy_highlight_primary_small_pane

0x9cc7,	// (0x00012b7e) copy_highlight_secondary_pane

0x9ccf,	// (0x00012b86) copy_highlight_title_pane

0x9cc7,	// (0x00012b7e) graphic_text_digital_pane

0xb361,	// (0x00014218) graphic_text_primary_pane

0xb36a,	// (0x00014221) graphic_text_primary_small_pane

0x9cbf,	// (0x00012b76) graphic_text_secondary_pane

0x9cae,	// (0x00012b65) graphic_text_title_pane

0x9cd7,	// (0x00012b8e) cursor_primary_pane_g1

0xb353,	// (0x0001420a) cursor_text_primary_t1

0xb33b,	// (0x000141f2) cursor_primary_small_pane_g1

0xb345,	// (0x000141fc) cursor_text_primary_small_t1

0xb323,	// (0x000141da) cursor_primary_small_pane_g1_copy1

0xb32d,	// (0x000141e4) cursor_text_primary_small_t1_copy1

0xb30b,	// (0x000141c2) cursor_text_title_t1

0xb319,	// (0x000141d0) cursor_title_pane_g1

0x9cd7,	// (0x00012b8e) cursor_digital_pane_g1

0x9ce1,	// (0x00012b98) cursor_text_digital_t1

0xb2ac,	// (0x00014163) link_highlight_primary_pane_g1

0xb2b4,	// (0x0001416b) link_highlight_primary_pane_t1

0x9cef,	// (0x00012ba6) link_highlight_primary_small_pane_g1

0x9cf7,	// (0x00012bae) link_highlight_primary_small_pane_t1

0x9cef,	// (0x00012ba6) link_highlight_secondary_pane_g1

0x9d06,	// (0x00012bbd) link_highlight_secondary_pane_t1

0xb220,	// (0x000140d7) link_highlight_title_pane_g1

0xb228,	// (0x000140df) link_highlight_title_pane_t1

0xb209,	// (0x000140c0) link_highlight_digital_pane_g1

0xb211,	// (0x000140c8) link_highlight_digital_pane_t1

0xb0e1,	// (0x00013f98) copy_highlight_primary_pane_g1

0xb0e9,	// (0x00013fa0) copy_highlight_primary_pane_t1

0xb0bb,	// (0x00013f72) copy_highlight_primary_small_pane_g1

0xb0d2,	// (0x00013f89) copy_highlight_primary_small_pane_t1

0x9d15,	// (0x00012bcc) copy_highlight_secondary_pane_g1

0x9d1d,	// (0x00012bd4) copy_highlight_secondary_pane_t1

0xb0bb,	// (0x00013f72) copy_highlight_title_pane_g1

0xb0c3,	// (0x00013f7a) copy_highlight_title_pane_t1

0xb0e1,	// (0x00013f98) copy_highlight_digital_pane_g1

0xc469,	// (0x00015320) copy_highlight_digital_pane_t1

0xc3bd,	// (0x00015274) graphic_text_primary_pane_g1

0xc44d,	// (0x00015304) graphic_text_primary_pane_t1

0xc45b,	// (0x00015312) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x00018891) graphic_text_primary_pane_t

0xc429,	// (0x000152e0) graphic_text_primary_small_pane_g1

0xc431,	// (0x000152e8) graphic_text_primary_small_pane_t1

0xc43f,	// (0x000152f6) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0001888c) graphic_text_primary_small_pane_t

0xc405,	// (0x000152bc) graphic_text_secondary_pane_g1

0xc40d,	// (0x000152c4) graphic_text_secondary_pane_t1

0xc41b,	// (0x000152d2) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x00018887) graphic_text_secondary_pane_t

0xc3e1,	// (0x00015298) graphic_text_title_pane_g1

0xc3e9,	// (0x000152a0) graphic_text_title_pane_t1

0xc3f7,	// (0x000152ae) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x00018882) graphic_text_title_pane_t

0xc3bd,	// (0x00015274) graphic_text_digital_pane_g1

0xc3c5,	// (0x0001527c) graphic_text_digital_pane_t1

0xc3d3,	// (0x0001528a) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0001887d) graphic_text_digital_pane_t

0x7f39,	// (0x00010df0) navi_icon_pane_srt_ParamLimits

0x7f39,	// (0x00010df0) navi_icon_pane_srt

0x7e59,	// (0x00010d10) navi_midp_pane_srt

0x7e59,	// (0x00010d10) navi_navi_pane_srt

0x7f39,	// (0x00010df0) navi_text_pane_srt_ParamLimits

0x7f39,	// (0x00010df0) navi_text_pane_srt

0xc388,	// (0x0001523f) navi_navi_icon_text_pane_srt

0xc390,	// (0x00015247) navi_navi_pane_srt_g1_ParamLimits

0xc390,	// (0x00015247) navi_navi_pane_srt_g1

0xc3a2,	// (0x00015259) navi_navi_pane_srt_g2_ParamLimits

0xc3a2,	// (0x00015259) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x00018878) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x00018878) navi_navi_pane_srt_g

0xc3b4,	// (0x0001526b) navi_navi_tabs_pane_srt

0xc388,	// (0x0001523f) navi_navi_text_pane_srt

0xc388,	// (0x0001523f) navi_navi_volume_pane_srt

0xc379,	// (0x00015230) navi_navi_text_pane_srt_t1

0x7072,	// (0x0000ff29) navi_navi_volume_pane_srt_g1

0x707a,	// (0x0000ff31) volume_small_pane_srt_ParamLimits

0x707a,	// (0x0000ff31) volume_small_pane_srt

0x6a0c,	// (0x0000f8c3) volume_small_pane_srt_g1_ParamLimits

0x6a0c,	// (0x0000f8c3) volume_small_pane_srt_g1

0x6a1c,	// (0x0000f8d3) volume_small_pane_srt_g2_ParamLimits

0x6a1c,	// (0x0000f8d3) volume_small_pane_srt_g2

0x6a2d,	// (0x0000f8e4) volume_small_pane_srt_g3_ParamLimits

0x6a2d,	// (0x0000f8e4) volume_small_pane_srt_g3

0x6a3e,	// (0x0000f8f5) volume_small_pane_srt_g4_ParamLimits

0x6a3e,	// (0x0000f8f5) volume_small_pane_srt_g4

0x6a4f,	// (0x0000f906) volume_small_pane_srt_g5_ParamLimits

0x6a4f,	// (0x0000f906) volume_small_pane_srt_g5

0x6a60,	// (0x0000f917) volume_small_pane_srt_g6_ParamLimits

0x6a60,	// (0x0000f917) volume_small_pane_srt_g6

0x6a71,	// (0x0000f928) volume_small_pane_srt_g7_ParamLimits

0x6a71,	// (0x0000f928) volume_small_pane_srt_g7

0x6a82,	// (0x0000f939) volume_small_pane_srt_g8_ParamLimits

0x6a82,	// (0x0000f939) volume_small_pane_srt_g8

0x6a93,	// (0x0000f94a) volume_small_pane_srt_g9_ParamLimits

0x6a93,	// (0x0000f94a) volume_small_pane_srt_g9

0x6aa4,	// (0x0000f95b) volume_small_pane_srt_g10_ParamLimits

0x6aa4,	// (0x0000f95b) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x00018627) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x00018627) volume_small_pane_srt_g

0x8321,	// (0x000111d8) query_popup_data_pane_cp2

0xc35f,	// (0x00015216) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc35f,	// (0x00015216) navi_navi_icon_text_pane_srt_t1

0xb361,	// (0x00014218) navi_tabs_2_long_pane_srt

0xb361,	// (0x00014218) navi_tabs_2_pane_srt

0xb361,	// (0x00014218) navi_tabs_3_long_pane_srt

0xb361,	// (0x00014218) navi_tabs_3_pane_srt

0xb361,	// (0x00014218) navi_tabs_4_pane_srt

0x7052,	// (0x0000ff09) tabs_2_active_pane_srt_ParamLimits

0x7052,	// (0x0000ff09) tabs_2_active_pane_srt

0x7062,	// (0x0000ff19) tabs_2_passive_pane_srt_ParamLimits

0x7062,	// (0x0000ff19) tabs_2_passive_pane_srt

0x9f04,	// (0x00012dbb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9f04,	// (0x00012dbb) bg_passive_tab_pane_cp1_srt

0xc32b,	// (0x000151e2) bg_passive_tab_pane_g1_cp1_srt

0x97d2,	// (0x00012689) bg_passive_tab_pane_g2_cp1_srt

0xc334,	// (0x000151eb) bg_passive_tab_pane_g3_cp1_srt

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp1_srt

0xc33d,	// (0x000151f4) tabs_2_active_pane_srt_g1

0xc345,	// (0x000151fc) tabs_2_active_pane_srt_t1_ParamLimits

0xc345,	// (0x000151fc) tabs_2_active_pane_srt_t1

0xc32b,	// (0x000151e2) bg_active_tab_pane_g1_cp1_srt

0x97d2,	// (0x00012689) bg_active_tab_pane_g2_cp1_srt

0xc334,	// (0x000151eb) bg_active_tab_pane_g3_cp1_srt

0x701f,	// (0x0000fed6) tabs_3_active_pane_srt_ParamLimits

0x701f,	// (0x0000fed6) tabs_3_active_pane_srt

0x7030,	// (0x0000fee7) tabs_3_passive_pane_cp_srt_ParamLimits

0x7030,	// (0x0000fee7) tabs_3_passive_pane_cp_srt

0x7041,	// (0x0000fef8) tabs_3_passive_pane_srt_ParamLimits

0x7041,	// (0x0000fef8) tabs_3_passive_pane_srt

0x9f04,	// (0x00012dbb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9f04,	// (0x00012dbb) bg_passive_tab_pane_cp2_srt

0x9d2c,	// (0x00012be3) bg_passive_tab_pane_g1_cp2_srt

0x97d2,	// (0x00012689) bg_passive_tab_pane_g2_cp2_srt

0x9d35,	// (0x00012bec) bg_passive_tab_pane_g3_cp2_srt

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f39,	// (0x00010df0) bg_active_tab_pane_cp2_srt

0xc311,	// (0x000151c8) tabs_3_active_pane_srt_g1

0xc319,	// (0x000151d0) tabs_3_active_pane_srt_t1_ParamLimits

0xc319,	// (0x000151d0) tabs_3_active_pane_srt_t1

0x9d2c,	// (0x00012be3) bg_active_tab_pane_g1_cp2_srt

0x97d2,	// (0x00012689) bg_active_tab_pane_g2_cp2_srt

0x9d35,	// (0x00012bec) bg_active_tab_pane_g3_cp2_srt

0x6fd7,	// (0x0000fe8e) tabs_4_active_pane_srt_ParamLimits

0x6fd7,	// (0x0000fe8e) tabs_4_active_pane_srt

0x6fe9,	// (0x0000fea0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6fe9,	// (0x0000fea0) tabs_4_passive_pane_cp2_srt

0x9e8a,	// (0x00012d41) aid_size_cell_toolbar

0x907c,	// (0x00011f33) main_idle_act_pane_ParamLimits

0xa0a3,	// (0x00012f5a) popup_large_graphic_colour_window_ParamLimits

0xa402,	// (0x000132b9) popup_toolbar_window_ParamLimits

0xa402,	// (0x000132b9) popup_toolbar_window

0xc09f,	// (0x00014f56) list_single_graphic_2heading_pane_ParamLimits

0xc09f,	// (0x00014f56) list_single_graphic_2heading_pane

0x9238,	// (0x000120ef) aid_size_cell_apps_grid_lsc_pane

0x924a,	// (0x00012101) aid_size_cell_apps_grid_prt_pane

0x9f04,	// (0x00012dbb) bg_wml_button_pane_cp1_ParamLimits

0x9f04,	// (0x00012dbb) bg_wml_button_pane_cp1

0xad12,	// (0x00013bc9) form_midp_field_text_pane_t1_ParamLimits

0xaadd,	// (0x00013994) input_focus_pane_cp050_ParamLimits

0xad51,	// (0x00013c08) list_midp_form_text_pane_ParamLimits

0xacef,	// (0x00013ba6) input_focus_pane_cp051_ParamLimits

0xad03,	// (0x00013bba) list_midp_choice_pane_ParamLimits

0xab6e,	// (0x00013a25) list_single_2graphic_pane_cp3_ParamLimits

0xab6e,	// (0x00013a25) list_single_2graphic_pane_cp3

0xab9a,	// (0x00013a51) list_single_midp_graphic_pane_ParamLimits

0xab9a,	// (0x00013a51) list_single_midp_graphic_pane

0x6bf9,	// (0x0000fab0) list_single_graphic_2heading_pane_g1_ParamLimits

0x6bf9,	// (0x0000fab0) list_single_graphic_2heading_pane_g1

0x6c05,	// (0x0000fabc) list_single_graphic_2heading_pane_g4_ParamLimits

0x6c05,	// (0x0000fabc) list_single_graphic_2heading_pane_g4

0x6c11,	// (0x0000fac8) list_single_graphic_2heading_pane_g5_ParamLimits

0x6c11,	// (0x0000fac8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001867a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001867a) list_single_graphic_2heading_pane_g

0x6c1d,	// (0x0000fad4) list_single_graphic_2heading_pane_t1_ParamLimits

0x6c1d,	// (0x0000fad4) list_single_graphic_2heading_pane_t1

0x6c31,	// (0x0000fae8) list_single_graphic_2heading_pane_t2_ParamLimits

0x6c31,	// (0x0000fae8) list_single_graphic_2heading_pane_t2

0x6c4b,	// (0x0000fb02) list_single_graphic_2heading_pane_t3_ParamLimits

0x6c4b,	// (0x0000fb02) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x00018681) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x00018681) list_single_graphic_2heading_pane_t

0xa8d3,	// (0x0001378a) bg_popup_sub_pane_cp2

0xa8fd,	// (0x000137b4) grid_toobar_pane

0x6c63,	// (0x0000fb1a) cell_toolbar_pane_ParamLimits

0x6c63,	// (0x0000fb1a) cell_toolbar_pane

0xa967,	// (0x0001381e) cell_toolbar_pane_g1_ParamLimits

0xa967,	// (0x0001381e) cell_toolbar_pane_g1

0xa97b,	// (0x00013832) cell_toolbar_pane_g2_ParamLimits

0xa97b,	// (0x00013832) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001868f) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001868f) cell_toolbar_pane_g

0xa99d,	// (0x00013854) grid_highlight_pane_cp2_ParamLimits

0xa99d,	// (0x00013854) grid_highlight_pane_cp2

0xa9b7,	// (0x0001386e) toolbar_button_pane

0xa9c3,	// (0x0001387a) toolbar_button_pane_g1

0xa9cb,	// (0x00013882) toolbar_button_pane_g2

0xa9d3,	// (0x0001388a) toolbar_button_pane_g3

0xa9db,	// (0x00013892) toolbar_button_pane_g4

0xa9e3,	// (0x0001389a) toolbar_button_pane_g5

0xa9eb,	// (0x000138a2) toolbar_button_pane_g6

0xa9f3,	// (0x000138aa) toolbar_button_pane_g7

0xa9fb,	// (0x000138b2) toolbar_button_pane_g8

0xaa03,	// (0x000138ba) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x00018694) toolbar_button_pane_g

0x6c9b,	// (0x0000fb52) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6c9b,	// (0x0000fb52) list_single_2graphic_pane_g1_cp3

0x6ca7,	// (0x0000fb5e) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6ca7,	// (0x0000fb5e) list_single_2graphic_pane_g2_cp3

0x6cb8,	// (0x0000fb6f) list_single_2graphic_pane_g3_cp3

0x6cc0,	// (0x0000fb77) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6cc0,	// (0x0000fb77) list_single_2graphic_pane_g4_cp3

0x6ccc,	// (0x0000fb83) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6ccc,	// (0x0000fb83) list_single_2graphic_pane_t1_cp3

0x6ce6,	// (0x0000fb9d) list_single_midp_graphic_pane_g2_ParamLimits

0x6ce6,	// (0x0000fb9d) list_single_midp_graphic_pane_g2

0x9e92,	// (0x00012d49) aid_zoom_text_primary

0x9e9a,	// (0x00012d51) aid_zoom_text_secondary

0x9de9,	// (0x00012ca0) status_small_pane_g7_ParamLimits

0x9de9,	// (0x00012ca0) status_small_pane_g7

0x9e0c,	// (0x00012cc3) status_small_pane_t1_ParamLimits

0x7e70,	// (0x00010d27) title_pane_g2

0x0003,

0xf566,	// (0x0001841d) title_pane_g

0x83c2,	// (0x00011279) aid_size_cell_colour_1_pane_ParamLimits

0x83c2,	// (0x00011279) aid_size_cell_colour_1_pane

0x83d6,	// (0x0001128d) aid_size_cell_colour_2_pane_ParamLimits

0x83d6,	// (0x0001128d) aid_size_cell_colour_2_pane

0x83ea,	// (0x000112a1) aid_size_cell_colour_3_pane_ParamLimits

0x83ea,	// (0x000112a1) aid_size_cell_colour_3_pane

0x83fe,	// (0x000112b5) aid_size_cell_colour_4_pane_ParamLimits

0x83fe,	// (0x000112b5) aid_size_cell_colour_4_pane

0x6668,	// (0x0000f51f) title_pane_stacon_g1_ParamLimits

0x6668,	// (0x0000f51f) title_pane_stacon_g1

0xb140,	// (0x00013ff7) popup_note_wait_window_g3_ParamLimits

0xb140,	// (0x00013ff7) popup_note_wait_window_g3

0xb1b6,	// (0x0001406d) popup_note_wait_window_t5_ParamLimits

0xb1b6,	// (0x0001406d) popup_note_wait_window_t5

0x7e59,	// (0x00010d10) main_feb_china_hwr_fs_writing_pane

0x9f8e,	// (0x00012e45) popup_feb_china_hwr_fs_window_ParamLimits

0x9f8e,	// (0x00012e45) popup_feb_china_hwr_fs_window

0x6d08,	// (0x0000fbbf) aid_size_cell_hwr_fs_ParamLimits

0x6d08,	// (0x0000fbbf) aid_size_cell_hwr_fs

0xaadd,	// (0x00013994) bg_popup_sub_pane_cp3_ParamLimits

0xaadd,	// (0x00013994) bg_popup_sub_pane_cp3

0x6d1d,	// (0x0000fbd4) grid_hwr_fs_pane_ParamLimits

0x6d1d,	// (0x0000fbd4) grid_hwr_fs_pane

0x6d35,	// (0x0000fbec) linegrid_hwr_fs_pane_ParamLimits

0x6d35,	// (0x0000fbec) linegrid_hwr_fs_pane

0x6d45,	// (0x0000fbfc) cell_hwr_fs_pane_ParamLimits

0x6d45,	// (0x0000fbfc) cell_hwr_fs_pane

0xaae9,	// (0x000139a0) linegrid_hwr_fs_pane_g1_ParamLimits

0xaae9,	// (0x000139a0) linegrid_hwr_fs_pane_g1

0xaaf5,	// (0x000139ac) linegrid_hwr_fs_pane_g2_ParamLimits

0xaaf5,	// (0x000139ac) linegrid_hwr_fs_pane_g2

0xab07,	// (0x000139be) linegrid_hwr_fs_pane_g3_ParamLimits

0xab07,	// (0x000139be) linegrid_hwr_fs_pane_g3

0x6d67,	// (0x0000fc1e) linegrid_hwr_fs_pane_g4_ParamLimits

0x6d67,	// (0x0000fc1e) linegrid_hwr_fs_pane_g4

0x6d81,	// (0x0000fc38) linegrid_hwr_fs_pane_g5_ParamLimits

0x6d81,	// (0x0000fc38) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x000186bf) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x000186bf) linegrid_hwr_fs_pane_g

0xab13,	// (0x000139ca) cell_hwr_fs_pane_g1_ParamLimits

0xab13,	// (0x000139ca) cell_hwr_fs_pane_g1

0xa80c,	// (0x000136c3) cell_hwr_fs_pane_g2_ParamLimits

0xa80c,	// (0x000136c3) cell_hwr_fs_pane_g2

0xab29,	// (0x000139e0) cell_hwr_fs_pane_g3_ParamLimits

0xab29,	// (0x000139e0) cell_hwr_fs_pane_g3

0xab36,	// (0x000139ed) cell_hwr_fs_pane_g4_ParamLimits

0xab36,	// (0x000139ed) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x000186ca) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x000186ca) cell_hwr_fs_pane_g

0x6d97,	// (0x0000fc4e) cell_hwr_fs_pane_t1

0x7e59,	// (0x00010d10) grid_highlight_pane_cp6

0x7e59,	// (0x00010d10) main_idle_act2_pane

0x8ff0,	// (0x00011ea7) aid_inside_area_popup_secondary

0xb7e7,	// (0x0001469e) aid_inside_area_window_primary_ParamLimits

0xb7e7,	// (0x0001469e) aid_inside_area_window_primary

0xc478,	// (0x0001532f) ai2_news_ticker_pane

0xc480,	// (0x00015337) aid_size_cell_ai1_link_ParamLimits

0xc480,	// (0x00015337) aid_size_cell_ai1_link

0xc49a,	// (0x00015351) popup_ai2_data_window_ParamLimits

0xc49a,	// (0x00015351) popup_ai2_data_window

0xc4ae,	// (0x00015365) popup_ai2_link_window_ParamLimits

0xc4ae,	// (0x00015365) popup_ai2_link_window

0xaadd,	// (0x00013994) bg_popup_sub_pane_cp4_ParamLimits

0xaadd,	// (0x00013994) bg_popup_sub_pane_cp4

0xc4c2,	// (0x00015379) grid_ai2_link_pane_ParamLimits

0xc4c2,	// (0x00015379) grid_ai2_link_pane

0xc4d9,	// (0x00015390) popup_ai2_link_window_g1_ParamLimits

0xc4d9,	// (0x00015390) popup_ai2_link_window_g1

0xc4e5,	// (0x0001539c) popup_ai2_link_window_g2_ParamLimits

0xc4e5,	// (0x0001539c) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x00018896) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x00018896) popup_ai2_link_window_g

0xc4f4,	// (0x000153ab) ai2_mp_button_pane

0xc4fc,	// (0x000153b3) ai2_mp_volume_pane

0xacef,	// (0x00013ba6) bg_popup_sub_pane_cp5_ParamLimits

0xacef,	// (0x00013ba6) bg_popup_sub_pane_cp5

0xc504,	// (0x000153bb) heading_ai2_gene_pane_ParamLimits

0xc504,	// (0x000153bb) heading_ai2_gene_pane

0xc510,	// (0x000153c7) list_ai2_gene_pane_ParamLimits

0xc510,	// (0x000153c7) list_ai2_gene_pane

0xc558,	// (0x0001540f) cell_ai2_link_pane_ParamLimits

0xc558,	// (0x0001540f) cell_ai2_link_pane

0xc56e,	// (0x00015425) cell_ai2_link_pane_g1

0x7e59,	// (0x00010d10) grid_highlight_pane_cp7

0x708f,	// (0x0000ff46) ai2_mp_volume_pane_g1

0xc63f,	// (0x000154f6) ai2_mp_volume_pane_g2

0xc5b4,	// (0x0001546b) list_ai2_gene_pane_t1

0xc647,	// (0x000154fe) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x000188af) ai2_mp_volume_pane_g

0x7097,	// (0x0000ff4e) volume_small_pane_cp3

0xc64f,	// (0x00015506) aid_size_cell_ai2_button

0xc657,	// (0x0001550e) grid_ai2_button_pane

0xc660,	// (0x00015517) cell_ai2_button_pane_ParamLimits

0xc660,	// (0x00015517) cell_ai2_button_pane

0x7e4f,	// (0x00010d06) cell_ai2_button_pane_g1

0x7e59,	// (0x00010d10) grid_highlight_pane_cp8

0xc5ff,	// (0x000154b6) ai2_gene_pane_t1_ParamLimits

0xc5ff,	// (0x000154b6) ai2_gene_pane_t1

0x9e80,	// (0x00012d37) aid_height_parent_landscape

0xbe8c,	// (0x00014d43) aid_height_set_list

0xbe9d,	// (0x00014d54) aid_size_parent

0xc29b,	// (0x00015152) aid_size_cell_graphic_pane_ParamLimits

0xc520,	// (0x000153d7) popup_ai2_data_window_g1_ParamLimits

0xc520,	// (0x000153d7) popup_ai2_data_window_g1

0xc52c,	// (0x000153e3) ai2_news_ticker_pane_g1

0xc534,	// (0x000153eb) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0001889b) ai2_news_ticker_pane_g

0xc53c,	// (0x000153f3) ai2_news_ticker_pane_t1

0xc54a,	// (0x00015401) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x000188a0) ai2_news_ticker_pane_t

0xc577,	// (0x0001542e) heading_ai2_gene_pane_g1

0xc57f,	// (0x00015436) heading_ai2_gene_pane_t1_ParamLimits

0xc57f,	// (0x00015436) heading_ai2_gene_pane_t1

0xc594,	// (0x0001544b) list_highlight_pane_cp6

0xc59c,	// (0x00015453) ai2_gene_pane_ParamLimits

0xc59c,	// (0x00015453) ai2_gene_pane

0xc5c2,	// (0x00015479) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x000188a5) list_ai2_gene_pane_t

0xc5d0,	// (0x00015487) list_highlight_pane_cp8_ParamLimits

0xc5d0,	// (0x00015487) list_highlight_pane_cp8

0xc5e1,	// (0x00015498) ai2_gene_pane_g1_ParamLimits

0xc5e1,	// (0x00015498) ai2_gene_pane_g1

0xc5f3,	// (0x000154aa) ai2_gene_pane_g2_ParamLimits

0xc5f3,	// (0x000154aa) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x000188aa) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x000188aa) ai2_gene_pane_g

0x873c,	// (0x000115f3) scroll_pane_cp12

0x6bb8,	// (0x0000fa6f) control_pane_t3_ParamLimits

0x6bb8,	// (0x0000fa6f) control_pane_t3

0x9dfd,	// (0x00012cb4) status_small_pane_g8_ParamLimits

0x9dfd,	// (0x00012cb4) status_small_pane_g8

0xa070,	// (0x00012f27) popup_find_window_ParamLimits

0xa283,	// (0x0001313a) popup_note_image_window_ParamLimits

0xa939,	// (0x000137f0) list_double2_graphic_pane_vc_g1_ParamLimits

0xa939,	// (0x000137f0) list_double2_graphic_pane_vc_g1

0x9a5d,	// (0x00012914) list_double2_graphic_pane_vc_g2_ParamLimits

0x9a5d,	// (0x00012914) list_double2_graphic_pane_vc_g2

0xa945,	// (0x000137fc) list_double2_graphic_pane_vc_g3_ParamLimits

0xa945,	// (0x000137fc) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x00018688) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x00018688) list_double2_graphic_pane_vc_g

0xa951,	// (0x00013808) list_double2_graphic_pane_vc_t1_ParamLimits

0xa951,	// (0x00013808) list_double2_graphic_pane_vc_t1

0x9a5d,	// (0x00012914) list_single_heading_pane_vc_g1_ParamLimits

0x9a5d,	// (0x00012914) list_single_heading_pane_vc_g1

0xa945,	// (0x000137fc) list_single_heading_pane_vc_g2_ParamLimits

0xa945,	// (0x000137fc) list_single_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x000186a9) list_single_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x000186a9) list_single_heading_pane_vc_g

0xaa0b,	// (0x000138c2) list_single_heading_pane_vc_t1_ParamLimits

0xaa0b,	// (0x000138c2) list_single_heading_pane_vc_t1

0xaa21,	// (0x000138d8) list_single_heading_pane_vc_t2_ParamLimits

0xaa21,	// (0x000138d8) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x000186ae) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x000186ae) list_single_heading_pane_vc_t

0xaa35,	// (0x000138ec) list_setting_number_pane_vc_g1_ParamLimits

0xaa35,	// (0x000138ec) list_setting_number_pane_vc_g1

0xaa41,	// (0x000138f8) list_setting_number_pane_vc_g2_ParamLimits

0xaa41,	// (0x000138f8) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x000186b3) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x000186b3) list_setting_number_pane_vc_g

0xaa4d,	// (0x00013904) list_setting_number_pane_vc_t1_ParamLimits

0xaa4d,	// (0x00013904) list_setting_number_pane_vc_t1

0xaa61,	// (0x00013918) list_setting_number_pane_vc_t2_ParamLimits

0xaa61,	// (0x00013918) list_setting_number_pane_vc_t2

0xaa7b,	// (0x00013932) list_setting_number_pane_vc_t3_ParamLimits

0xaa7b,	// (0x00013932) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x000186b8) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x000186b8) list_setting_number_pane_vc_t

0xaaa1,	// (0x00013958) set_value_pane_vc_ParamLimits

0xaaa1,	// (0x00013958) set_value_pane_vc

0xc09f,	// (0x00014f56) list_double2_graphic_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_double2_graphic_pane_vc

0xc0b3,	// (0x00014f6a) list_double2_large_graphic_pane_vc_ParamLimits

0xc0b3,	// (0x00014f6a) list_double2_large_graphic_pane_vc

0xc09f,	// (0x00014f56) list_double2_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_double2_pane_vc

0xc09f,	// (0x00014f56) list_double_graphic_heading_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_double_graphic_heading_pane_vc

0xc09f,	// (0x00014f56) list_double_graphic_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_double_graphic_pane_vc

0xc09f,	// (0x00014f56) list_double_heading_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_double_heading_pane_vc

0xc0b3,	// (0x00014f6a) list_double_large_graphic_pane_vc_ParamLimits

0xc0b3,	// (0x00014f6a) list_double_large_graphic_pane_vc

0xc09f,	// (0x00014f56) list_double_number_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_double_number_pane_vc

0xc09f,	// (0x00014f56) list_double_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_double_pane_vc

0xc09f,	// (0x00014f56) list_double_time_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_double_time_pane_vc

0xc09f,	// (0x00014f56) list_setting_number_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_setting_number_pane_vc

0xc09f,	// (0x00014f56) list_setting_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_setting_pane_vc

0xc09f,	// (0x00014f56) list_single_graphic_heading_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_single_graphic_heading_pane_vc

0xc09f,	// (0x00014f56) list_single_heading_pane_vc_ParamLimits

0xc09f,	// (0x00014f56) list_single_heading_pane_vc

0xc0c6,	// (0x00014f7d) list_single_number_heading_pane_vc_ParamLimits

0xc0c6,	// (0x00014f7d) list_single_number_heading_pane_vc

0xc694,	// (0x0001554b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc694,	// (0x0001554b) list_double_graphic_heading_pane_vc_g1

0x9ac1,	// (0x00012978) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9ac1,	// (0x00012978) list_double_graphic_heading_pane_vc_g2

0xc6a0,	// (0x00015557) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc6a0,	// (0x00015557) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x000188b6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x000188b6) list_double_graphic_heading_pane_vc_g

0xc6ac,	// (0x00015563) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc6ac,	// (0x00015563) list_double_graphic_heading_pane_vc_t1

0xaa0b,	// (0x000138c2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xaa0b,	// (0x000138c2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x000188bd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x000188bd) list_double_graphic_heading_pane_vc_t

0xaa35,	// (0x000138ec) list_setting_pane_vc_g1_ParamLimits

0xaa35,	// (0x000138ec) list_setting_pane_vc_g1

0xaa41,	// (0x000138f8) list_setting_pane_vc_g2_ParamLimits

0xaa41,	// (0x000138f8) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x000186b3) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x000186b3) list_setting_pane_vc_g

0xc8a4,	// (0x0001575b) list_setting_pane_vc_t1_ParamLimits

0xc8a4,	// (0x0001575b) list_setting_pane_vc_t1

0xc8be,	// (0x00015775) list_setting_pane_vc_t2_ParamLimits

0xc8be,	// (0x00015775) list_setting_pane_vc_t2

0x0001,

0xfa49,	// (0x00018900) list_setting_pane_vc_t_ParamLimits

0xfa49,	// (0x00018900) list_setting_pane_vc_t

0xaaa1,	// (0x00013958) set_value_pane_cp_vc_ParamLimits

0xaaa1,	// (0x00013958) set_value_pane_cp_vc

0x9a5d,	// (0x00012914) list_single_number_heading_pane_vc_g1_ParamLimits

0x9a5d,	// (0x00012914) list_single_number_heading_pane_vc_g1

0xa945,	// (0x000137fc) list_single_number_heading_pane_vc_g2_ParamLimits

0xa945,	// (0x000137fc) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x000186a9) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x000186a9) list_single_number_heading_pane_vc_g

0xaa0b,	// (0x000138c2) list_single_number_heading_pane_vc_t1_ParamLimits

0xaa0b,	// (0x000138c2) list_single_number_heading_pane_vc_t1

0xc8d4,	// (0x0001578b) list_single_number_heading_pane_vc_t2_ParamLimits

0xc8d4,	// (0x0001578b) list_single_number_heading_pane_vc_t2

0xc8e8,	// (0x0001579f) list_single_number_heading_pane_vc_t3_ParamLimits

0xc8e8,	// (0x0001579f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa4e,	// (0x00018905) list_single_number_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x00018905) list_single_number_heading_pane_vc_t

0xa939,	// (0x000137f0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xa939,	// (0x000137f0) list_single_graphic_heading_pane_vc_g1

0x9a5d,	// (0x00012914) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9a5d,	// (0x00012914) list_single_graphic_heading_pane_vc_g4

0xa945,	// (0x000137fc) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xa945,	// (0x000137fc) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x00018688) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x00018688) list_single_graphic_heading_pane_vc_g

0xaa0b,	// (0x000138c2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xaa0b,	// (0x000138c2) list_single_graphic_heading_pane_vc_t1

0xc8fa,	// (0x000157b1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc8fa,	// (0x000157b1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x0001890c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x0001890c) list_single_graphic_heading_pane_vc_t

0x9a5d,	// (0x00012914) list_double2_pane_vc_g1_ParamLimits

0x9a5d,	// (0x00012914) list_double2_pane_vc_g1

0xa945,	// (0x000137fc) list_double2_pane_vc_g2_ParamLimits

0xa945,	// (0x000137fc) list_double2_pane_vc_g2

0x0001,

0xf7f2,	// (0x000186a9) list_double2_pane_vc_g_ParamLimits

0xf7f2,	// (0x000186a9) list_double2_pane_vc_g

0xc90e,	// (0x000157c5) list_double2_pane_vc_t1_ParamLimits

0xc90e,	// (0x000157c5) list_double2_pane_vc_t1

0xc924,	// (0x000157db) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc924,	// (0x000157db) list_double2_large_graphic_pane_vc_g1

0x880e,	// (0x000116c5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x880e,	// (0x000116c5) list_double2_large_graphic_pane_vc_g2

0x881a,	// (0x000116d1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x881a,	// (0x000116d1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa5a,	// (0x00018911) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x00018911) list_double2_large_graphic_pane_vc_g

0xc930,	// (0x000157e7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc930,	// (0x000157e7) list_double2_large_graphic_pane_vc_t1

0xc946,	// (0x000157fd) list_double_time_pane_vc_g1_ParamLimits

0xc946,	// (0x000157fd) list_double_time_pane_vc_g1

0xc952,	// (0x00015809) list_double_time_pane_vc_g2_ParamLimits

0xc952,	// (0x00015809) list_double_time_pane_vc_g2

0x0001,

0xfa61,	// (0x00018918) list_double_time_pane_vc_g_ParamLimits

0xfa61,	// (0x00018918) list_double_time_pane_vc_g

0xc95e,	// (0x00015815) list_double_time_pane_vc_t1_ParamLimits

0xc95e,	// (0x00015815) list_double_time_pane_vc_t1

0xc977,	// (0x0001582e) list_double_time_pane_vc_t2_ParamLimits

0xc977,	// (0x0001582e) list_double_time_pane_vc_t2

0xc992,	// (0x00015849) list_double_time_pane_vc_t3_ParamLimits

0xc992,	// (0x00015849) list_double_time_pane_vc_t3

0xc9aa,	// (0x00015861) list_double_time_pane_vc_t4_ParamLimits

0xc9aa,	// (0x00015861) list_double_time_pane_vc_t4

0x0003,

0xfa66,	// (0x0001891d) list_double_time_pane_vc_t_ParamLimits

0xfa66,	// (0x0001891d) list_double_time_pane_vc_t

0x9a5d,	// (0x00012914) list_double_pane_vc_g1_ParamLimits

0x9a5d,	// (0x00012914) list_double_pane_vc_g1

0xa945,	// (0x000137fc) list_double_pane_vc_g2_ParamLimits

0xa945,	// (0x000137fc) list_double_pane_vc_g2

0x0001,

0xf7f2,	// (0x000186a9) list_double_pane_vc_g_ParamLimits

0xf7f2,	// (0x000186a9) list_double_pane_vc_g

0xc9be,	// (0x00015875) list_double_pane_vc_t1_ParamLimits

0xc9be,	// (0x00015875) list_double_pane_vc_t1

0xc9d0,	// (0x00015887) list_double_pane_vc_t2_ParamLimits

0xc9d0,	// (0x00015887) list_double_pane_vc_t2

0x0001,

0xfa6f,	// (0x00018926) list_double_pane_vc_t_ParamLimits

0xfa6f,	// (0x00018926) list_double_pane_vc_t

0x9a5d,	// (0x00012914) list_double_number_pane_vc_g1_ParamLimits

0x9a5d,	// (0x00012914) list_double_number_pane_vc_g1

0xa945,	// (0x000137fc) list_double_number_pane_vc_g2_ParamLimits

0xa945,	// (0x000137fc) list_double_number_pane_vc_g2

0x0001,

0xf7f2,	// (0x000186a9) list_double_number_pane_vc_g_ParamLimits

0xf7f2,	// (0x000186a9) list_double_number_pane_vc_g

0xc9e8,	// (0x0001589f) list_double_number_pane_vc_t1_ParamLimits

0xc9e8,	// (0x0001589f) list_double_number_pane_vc_t1

0xc9fc,	// (0x000158b3) list_double_number_pane_vc_t2_ParamLimits

0xc9fc,	// (0x000158b3) list_double_number_pane_vc_t2

0xc9d0,	// (0x00015887) list_double_number_pane_vc_t3_ParamLimits

0xc9d0,	// (0x00015887) list_double_number_pane_vc_t3

0x0002,

0xfa74,	// (0x0001892b) list_double_number_pane_vc_t_ParamLimits

0xfa74,	// (0x0001892b) list_double_number_pane_vc_t

0xca0e,	// (0x000158c5) list_double_large_graphic_pane_vc_g1_ParamLimits

0xca0e,	// (0x000158c5) list_double_large_graphic_pane_vc_g1

0xca1a,	// (0x000158d1) list_double_large_graphic_pane_vc_g2_ParamLimits

0xca1a,	// (0x000158d1) list_double_large_graphic_pane_vc_g2

0x881a,	// (0x000116d1) list_double_large_graphic_pane_vc_g3_ParamLimits

0x881a,	// (0x000116d1) list_double_large_graphic_pane_vc_g3

0xca29,	// (0x000158e0) list_double_large_graphic_pane_vc_g4_ParamLimits

0xca29,	// (0x000158e0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa7b,	// (0x00018932) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x00018932) list_double_large_graphic_pane_vc_g

0xca35,	// (0x000158ec) list_double_large_graphic_pane_vc_t1_ParamLimits

0xca35,	// (0x000158ec) list_double_large_graphic_pane_vc_t1

0xca47,	// (0x000158fe) list_double_large_graphic_pane_vc_t2_ParamLimits

0xca47,	// (0x000158fe) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x0001893b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x0001893b) list_double_large_graphic_pane_vc_t

0x9ac1,	// (0x00012978) list_double_heading_pane_vc_g1_ParamLimits

0x9ac1,	// (0x00012978) list_double_heading_pane_vc_g1

0xc6a0,	// (0x00015557) list_double_heading_pane_vc_g2_ParamLimits

0xc6a0,	// (0x00015557) list_double_heading_pane_vc_g2

0x0001,

0xfa89,	// (0x00018940) list_double_heading_pane_vc_g_ParamLimits

0xfa89,	// (0x00018940) list_double_heading_pane_vc_g

0xca60,	// (0x00015917) list_double_heading_pane_vc_t1_ParamLimits

0xca60,	// (0x00015917) list_double_heading_pane_vc_t1

0xaa0b,	// (0x000138c2) list_double_heading_pane_vc_t2_ParamLimits

0xaa0b,	// (0x000138c2) list_double_heading_pane_vc_t2

0x0001,

0xfa8e,	// (0x00018945) list_double_heading_pane_vc_t_ParamLimits

0xfa8e,	// (0x00018945) list_double_heading_pane_vc_t

0xa939,	// (0x000137f0) list_double_graphic_pane_vc_g1_ParamLimits

0xa939,	// (0x000137f0) list_double_graphic_pane_vc_g1

0xb8cd,	// (0x00014784) list_double_graphic_pane_vc_g2_ParamLimits

0xb8cd,	// (0x00014784) list_double_graphic_pane_vc_g2

0xca74,	// (0x0001592b) list_double_graphic_pane_vc_g3_ParamLimits

0xca74,	// (0x0001592b) list_double_graphic_pane_vc_g3

0x0002,

0xfa93,	// (0x0001894a) list_double_graphic_pane_vc_g_ParamLimits

0xfa93,	// (0x0001894a) list_double_graphic_pane_vc_g

0xca80,	// (0x00015937) list_double_graphic_pane_vc_t1_ParamLimits

0xca80,	// (0x00015937) list_double_graphic_pane_vc_t1

0xc9d0,	// (0x00015887) list_double_graphic_pane_vc_t2_ParamLimits

0xc9d0,	// (0x00015887) list_double_graphic_pane_vc_t2

0x0001,

0xfa9a,	// (0x00018951) list_double_graphic_pane_vc_t_ParamLimits

0xfa9a,	// (0x00018951) list_double_graphic_pane_vc_t

0x61dc,	// (0x0000f093) aid_size_cell_fastswap

0x61e4,	// (0x0000f09b) aid_size_cell_touch_ParamLimits

0x61e4,	// (0x0000f09b) aid_size_cell_touch

0x6449,	// (0x0000f300) popup_fast_swap_wide_window_ParamLimits

0x6449,	// (0x0000f300) popup_fast_swap_wide_window

0x653f,	// (0x0000f3f6) touch_pane_ParamLimits

0x653f,	// (0x0000f3f6) touch_pane

0x8c3a,	// (0x00011af1) button_value_adjust_pane_cp2

0x8c3a,	// (0x00011af1) button_value_adjust_pane_cp4

0x8c5a,	// (0x00011b11) form_field_data_pane_cp2

0x8c79,	// (0x00011b30) form_field_data_wide_pane_cp2

0x9307,	// (0x000121be) bg_scroll_pane_ParamLimits

0x67cb,	// (0x0000f682) scroll_handle_pane_ParamLimits

0x67df,	// (0x0000f696) scroll_sc2_down_pane_ParamLimits

0x67df,	// (0x0000f696) scroll_sc2_down_pane

0x9338,	// (0x000121ef) scroll_sc2_up_pane_ParamLimits

0x9338,	// (0x000121ef) scroll_sc2_up_pane

0xcecf,	// (0x00015d86) grid_wheel_folder_pane_g1_ParamLimits

0xcecf,	// (0x00015d86) grid_wheel_folder_pane_g1

0x69a4,	// (0x0000f85b) clock_nsta_pane_cp2_ParamLimits

0x69a4,	// (0x0000f85b) clock_nsta_pane_cp2

0x907c,	// (0x00011f33) listscroll_midp_pane_ParamLimits

0x9b92,	// (0x00012a49) midp_canvas_pane

0x9e78,	// (0x00012d2f) nsta_clock_indic_pane

0x9ed6,	// (0x00012d8d) listscroll_form_pane_vc

0x9ef2,	// (0x00012da9) listscroll_set_pane_vc_ParamLimits

0x9ef2,	// (0x00012da9) listscroll_set_pane_vc

0xa586,	// (0x0001343d) clock_nsta_pane

0xa5fb,	// (0x000134b2) indicator_nsta_pane

0xa8d3,	// (0x0001378a) bg_popup_sub_pane_cp2_ParamLimits

0xa8e7,	// (0x0001379e) find_pane_cp2_ParamLimits

0xa8e7,	// (0x0001379e) find_pane_cp2

0xa8fd,	// (0x000137b4) grid_toobar_pane_ParamLimits

0xaab1,	// (0x00013968) list_form_gen_pane_vc_ParamLimits

0xaab1,	// (0x00013968) list_form_gen_pane_vc

0xaac7,	// (0x0001397e) scroll_pane_cp8_vc_ParamLimits

0xaac7,	// (0x0001397e) scroll_pane_cp8_vc

0xab43,	// (0x000139fa) data_form_wide_pane_vc_ParamLimits

0xab43,	// (0x000139fa) data_form_wide_pane_vc

0xab4f,	// (0x00013a06) form_field_data_wide_pane_vc_g1

0xab57,	// (0x00013a0e) form_field_data_wide_pane_vc_t1_ParamLimits

0xab57,	// (0x00013a0e) form_field_data_wide_pane_vc_t1

0x8d12,	// (0x00011bc9) input_focus_pane_cp6_vc_ParamLimits

0x8d12,	// (0x00011bc9) input_focus_pane_cp6_vc

0xaec0,	// (0x00013d77) list_midp_pane_ParamLimits

0xaecc,	// (0x00013d83) scroll_pane_cp16_ParamLimits

0xaecc,	// (0x00013d83) scroll_pane_cp16

0xaf1a,	// (0x00013dd1) button_value_adjust_pane_ParamLimits

0xaf1a,	// (0x00013dd1) button_value_adjust_pane

0xbeaf,	// (0x00014d66) button_value_adjust_pane_cp6_ParamLimits

0xbeaf,	// (0x00014d66) button_value_adjust_pane_cp6

0xbfd1,	// (0x00014e88) settings_code_pane_cp_ParamLimits

0xbfd1,	// (0x00014e88) settings_code_pane_cp

0x7e4f,	// (0x00010d06) cell_touch_pane_g1

0x7e4f,	// (0x00010d06) cell_touch_pane_g2

0x0001,

0xf716,	// (0x000185cd) cell_touch_pane_g

0xc672,	// (0x00015529) cell_touch_pane_cp_ParamLimits

0xc672,	// (0x00015529) cell_touch_pane_cp

0xc682,	// (0x00015539) cell_touch_pane_ParamLimits

0xc682,	// (0x00015539) cell_touch_pane

0x7e4f,	// (0x00010d06) scroll_sc2_down_pane_g1

0x7e4f,	// (0x00010d06) scroll_sc2_up_pane_g1

0x7e59,	// (0x00010d10) bg_set_opt_pane_cp4_vc

0xc6c0,	// (0x00015577) list_set_graphic_pane_vc_g1_ParamLimits

0xc6c0,	// (0x00015577) list_set_graphic_pane_vc_g1

0xc6cc,	// (0x00015583) list_set_graphic_pane_vc_g2_ParamLimits

0xc6cc,	// (0x00015583) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x000188c2) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x000188c2) list_set_graphic_pane_vc_g

0xc6d8,	// (0x0001558f) text_primary_small_cp13_vc_ParamLimits

0xc6d8,	// (0x0001558f) text_primary_small_cp13_vc

0xc6f0,	// (0x000155a7) list_set_graphic_pane_vc_ParamLimits

0xc6f0,	// (0x000155a7) list_set_graphic_pane_vc

0x7e59,	// (0x00010d10) input_focus_pane_cp2_vc

0x7e4f,	// (0x00010d06) setting_code_pane_vc_g1

0xc704,	// (0x000155bb) setting_code_pane_vc_t1

0xc712,	// (0x000155c9) set_text_pane_vc_t1_ParamLimits

0xc712,	// (0x000155c9) set_text_pane_vc_t1

0x7e59,	// (0x00010d10) input_focus_pane_cp1_vc

0xc731,	// (0x000155e8) list_set_text_pane_vc

0x7e4f,	// (0x00010d06) setting_text_pane_vc_g1

0x7e59,	// (0x00010d10) bg_set_opt_pane_cp2_vc

0xc73b,	// (0x000155f2) setting_slider_graphic_pane_vc_g1

0xc743,	// (0x000155fa) setting_slider_graphic_pane_vc_t1

0xc751,	// (0x00015608) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x000188c7) setting_slider_graphic_pane_vc_t

0xc75f,	// (0x00015616) slider_set_pane_cp_vc

0xc767,	// (0x0001561e) slider_set_pane_vc_g1

0xc770,	// (0x00015627) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x000188cc) slider_set_pane_vc_g

0x8e4e,	// (0x00011d05) set_opt_bg_pane_g1_copy1

0x8e56,	// (0x00011d0d) set_opt_bg_pane_g2_copy1

0xc79c,	// (0x00015653) set_opt_bg_pane_g3_copy1

0x8e66,	// (0x00011d1d) set_opt_bg_pane_g4_copy1

0x8e6e,	// (0x00011d25) set_opt_bg_pane_g5_copy1

0x8e76,	// (0x00011d2d) set_opt_bg_pane_g6_copy1

0xc7a4,	// (0x0001565b) set_opt_bg_pane_g7_copy1

0xc7ae,	// (0x00015665) set_opt_bg_pane_g8_copy1

0xc7b6,	// (0x0001566d) set_opt_bg_pane_g9_copy1

0x7e59,	// (0x00010d10) bg_set_opt_pane_cp_vc

0xc7be,	// (0x00015675) setting_slider_pane_vc_t1

0xc743,	// (0x000155fa) setting_slider_pane_vc_t2

0xc751,	// (0x00015608) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x000188db) setting_slider_pane_vc_t

0xc75f,	// (0x00015616) slider_set_pane_vc

0x6da5,	// (0x0000fc5c) volume_set_pane_vc_g1

0x70a0,	// (0x0000ff57) volume_set_pane_vc_g2

0x70a9,	// (0x0000ff60) volume_set_pane_vc_g3

0x70b2,	// (0x0000ff69) volume_set_pane_vc_g4

0x70bb,	// (0x0000ff72) volume_set_pane_vc_g5

0x70c4,	// (0x0000ff7b) volume_set_pane_vc_g6

0x70cd,	// (0x0000ff84) volume_set_pane_vc_g7

0x70d6,	// (0x0000ff8d) volume_set_pane_vc_g8

0x70df,	// (0x0000ff96) volume_set_pane_vc_g9

0x70e8,	// (0x0000ff9f) volume_set_pane_vc_g10

0x0009,

0xfa2b,	// (0x000188e2) volume_set_pane_vc_g

0xc7cd,	// (0x00015684) volume_set_pane_vc

0xc7d5,	// (0x0001568c) button_value_adjust_pane_cp1_vc

0xc7df,	// (0x00015696) list_highlight_pane_cp2_vc

0xc7e8,	// (0x0001569f) list_set_pane_vc_ParamLimits

0xc7e8,	// (0x0001569f) list_set_pane_vc

0xc83a,	// (0x000156f1) main_pane_set_vc_t1_ParamLimits

0xc83a,	// (0x000156f1) main_pane_set_vc_t1

0xc84f,	// (0x00015706) main_pane_set_vc_t2_ParamLimits

0xc84f,	// (0x00015706) main_pane_set_vc_t2

0xc861,	// (0x00015718) main_pane_set_vc_t3_ParamLimits

0xc861,	// (0x00015718) main_pane_set_vc_t3

0xc873,	// (0x0001572a) main_pane_set_vc_t4_ParamLimits

0xc873,	// (0x0001572a) main_pane_set_vc_t4

0x0003,

0xfa40,	// (0x000188f7) main_pane_set_vc_t_ParamLimits

0xfa40,	// (0x000188f7) main_pane_set_vc_t

0xc885,	// (0x0001573c) setting_code_pane_vc_ParamLimits

0xc885,	// (0x0001573c) setting_code_pane_vc

0xc894,	// (0x0001574b) setting_slider_graphic_pane_vc

0xc894,	// (0x0001574b) setting_slider_pane_vc

0xc894,	// (0x0001574b) setting_text_pane_vc

0xc894,	// (0x0001574b) setting_volume_pane_vc

0xc89c,	// (0x00015753) scroll_pane_cp121_vc

0x8c28,	// (0x00011adf) set_content_pane_vc

0xca92,	// (0x00015949) button_value_adjust_pane_g1

0xca9b,	// (0x00015952) button_value_adjust_pane_g2

0x0001,

0xfa9f,	// (0x00018956) button_value_adjust_pane_g

0xcaa4,	// (0x0001595b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xcaa4,	// (0x0001595b) form_field_slider_wide_pane_vc_t1

0xcab8,	// (0x0001596f) form_field_slider_wide_pane_vc_t2_ParamLimits

0xcab8,	// (0x0001596f) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa4,	// (0x0001895b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0001895b) form_field_slider_wide_pane_vc_t

0x81ce,	// (0x00011085) input_focus_pane_cp10_vc_ParamLimits

0x81ce,	// (0x00011085) input_focus_pane_cp10_vc

0xcaca,	// (0x00015981) slider_cont_pane_cp1_vc_ParamLimits

0xcaca,	// (0x00015981) slider_cont_pane_cp1_vc

0xc767,	// (0x0001561e) slider_form_pane_g1_cp2

0xc770,	// (0x00015627) slider_form_pane_g2_cp2

0xcae3,	// (0x0001599a) form_field_slider_pane_vc_t3

0xcaf1,	// (0x000159a8) form_field_slider_pane_vc_t4

0xcaff,	// (0x000159b6) slider_form_pane_vc_ParamLimits

0xcaff,	// (0x000159b6) slider_form_pane_vc

0xcb0c,	// (0x000159c3) form_field_slider_pane_vc_t1_ParamLimits

0xcb0c,	// (0x000159c3) form_field_slider_pane_vc_t1

0xcab8,	// (0x0001596f) form_field_slider_pane_vc_t2_ParamLimits

0xcab8,	// (0x0001596f) form_field_slider_pane_vc_t2

0x0001,

0xfab4,	// (0x0001896b) form_field_slider_pane_vc_t_ParamLimits

0xfab4,	// (0x0001896b) form_field_slider_pane_vc_t

0x81ce,	// (0x00011085) input_focus_pane_cp9_vc_ParamLimits

0x81ce,	// (0x00011085) input_focus_pane_cp9_vc

0xcb28,	// (0x000159df) slider_cont_pane_vc_ParamLimits

0xcb28,	// (0x000159df) slider_cont_pane_vc

0xcb3a,	// (0x000159f1) list_form_graphic_pane_cp_vc_ParamLimits

0xcb3a,	// (0x000159f1) list_form_graphic_pane_cp_vc

0xab4f,	// (0x00013a06) form_field_popup_wide_pane_vc_g1

0xcb4f,	// (0x00015a06) form_field_popup_wide_pane_vc_t1_ParamLimits

0xcb4f,	// (0x00015a06) form_field_popup_wide_pane_vc_t1

0x8d12,	// (0x00011bc9) input_focus_pane_cp8_vc_ParamLimits

0x8d12,	// (0x00011bc9) input_focus_pane_cp8_vc

0xcb66,	// (0x00015a1d) list_form_wide_pane_vc_ParamLimits

0xcb66,	// (0x00015a1d) list_form_wide_pane_vc

0xcb72,	// (0x00015a29) list_form_graphic_pane_vc_g1

0xcb7a,	// (0x00015a31) list_form_graphic_pane_vc_t1_ParamLimits

0xcb7a,	// (0x00015a31) list_form_graphic_pane_vc_t1

0x7f39,	// (0x00010df0) list_highlight_pane_cp5_vc_ParamLimits

0x7f39,	// (0x00010df0) list_highlight_pane_cp5_vc

0xcb96,	// (0x00015a4d) list_form_graphic_pane_vc_ParamLimits

0xcb96,	// (0x00015a4d) list_form_graphic_pane_vc

0xab4f,	// (0x00013a06) form_field_popup_pane_vc_g1

0xcbac,	// (0x00015a63) form_field_popup_pane_vc_t1_ParamLimits

0xcbac,	// (0x00015a63) form_field_popup_pane_vc_t1

0x8d12,	// (0x00011bc9) input_focus_pane_cp7_vc_ParamLimits

0x8d12,	// (0x00011bc9) input_focus_pane_cp7_vc

0xcbc3,	// (0x00015a7a) list_form_pane_vc_ParamLimits

0xcbc3,	// (0x00015a7a) list_form_pane_vc

0xcbcf,	// (0x00015a86) data_form_pane_vc_t1_ParamLimits

0xcbcf,	// (0x00015a86) data_form_pane_vc_t1

0x8e4e,	// (0x00011d05) input_focus_pane_vc_g1

0x8e56,	// (0x00011d0d) input_focus_pane_vc_g2

0x8e5e,	// (0x00011d15) input_focus_pane_vc_g3

0x8e66,	// (0x00011d1d) input_focus_pane_vc_g4

0x8e6e,	// (0x00011d25) input_focus_pane_vc_g5

0x8e76,	// (0x00011d2d) input_focus_pane_vc_g6

0x8e7e,	// (0x00011d35) input_focus_pane_vc_g7

0x8e86,	// (0x00011d3d) input_focus_pane_vc_g8

0x8e8e,	// (0x00011d45) input_focus_pane_vc_g9

0x7e4f,	// (0x00010d06) input_focus_pane_vc_g10

0x0009,

0xf69f,	// (0x00018556) input_focus_pane_vc_g

0xab43,	// (0x000139fa) data_form_pane_vc_ParamLimits

0xab43,	// (0x000139fa) data_form_pane_vc

0xab4f,	// (0x00013a06) form_field_data_pane_vc_g1

0xcbea,	// (0x00015aa1) form_field_data_pane_vc_t1_ParamLimits

0xcbea,	// (0x00015aa1) form_field_data_pane_vc_t1

0x8d12,	// (0x00011bc9) input_focus_pane_vc_ParamLimits

0x8d12,	// (0x00011bc9) input_focus_pane_vc

0xcc04,	// (0x00015abb) button_value_adjust_pane_cp3_vc

0xcc0c,	// (0x00015ac3) button_value_adjust_pane_cp5_vc

0xcc14,	// (0x00015acb) form_field_data_pane_vc_ParamLimits

0xcc14,	// (0x00015acb) form_field_data_pane_vc

0xcc2b,	// (0x00015ae2) form_field_data_pane_vc_cp2

0xcc33,	// (0x00015aea) form_field_data_wide_pane_vc_ParamLimits

0xcc33,	// (0x00015aea) form_field_data_wide_pane_vc

0xcc49,	// (0x00015b00) form_field_data_wide_pane_vc_cp2

0xcc51,	// (0x00015b08) form_field_popup_pane_vc_ParamLimits

0xcc51,	// (0x00015b08) form_field_popup_pane_vc

0xcc68,	// (0x00015b1f) form_field_popup_wide_pane_vc_ParamLimits

0xcc68,	// (0x00015b1f) form_field_popup_wide_pane_vc

0xcc7e,	// (0x00015b35) form_field_slider_pane_vc_ParamLimits

0xcc7e,	// (0x00015b35) form_field_slider_pane_vc

0xcc91,	// (0x00015b48) form_field_slider_wide_pane_vc_ParamLimits

0xcc91,	// (0x00015b48) form_field_slider_wide_pane_vc

0xcca4,	// (0x00015b5b) grid_touch_1_pane_ParamLimits

0xcca4,	// (0x00015b5b) grid_touch_1_pane

0xccb0,	// (0x00015b67) grid_touch_2_pane_ParamLimits

0xccb0,	// (0x00015b67) grid_touch_2_pane

0x9e43,	// (0x00012cfa) touch_pane_g1_ParamLimits

0x9e43,	// (0x00012cfa) touch_pane_g1

0xccc8,	// (0x00015b7f) cell_app_pane_cp_wide_ParamLimits

0xccc8,	// (0x00015b7f) cell_app_pane_cp_wide

0xccd9,	// (0x00015b90) grid_popup_fast_wide_pane_ParamLimits

0xccd9,	// (0x00015b90) grid_popup_fast_wide_pane

0xcced,	// (0x00015ba4) scroll_pane_cp19_ParamLimits

0xcced,	// (0x00015ba4) scroll_pane_cp19

0x7e59,	// (0x00010d10) bg_popup_window_pane_cp20

0xcd01,	// (0x00015bb8) listscroll_popup_fast_wide_pane

0x7f39,	// (0x00010df0) grid_indicator_nsta_pane

0xcd09,	// (0x00015bc0) clock_nsta_pane_g1

0xcd12,	// (0x00015bc9) clock_nsta_pane_t1

0xcd2e,	// (0x00015be5) cell_indicator_nsta_pane_ParamLimits

0xcd2e,	// (0x00015be5) cell_indicator_nsta_pane

0xcd66,	// (0x00015c1d) cell_indicator_nsta_pane_g1

0xcd74,	// (0x00015c2b) cell_indicator_nsta_pane_g2

0x0001,

0xfabe,	// (0x00018975) cell_indicator_nsta_pane_g

0xcd8a,	// (0x00015c41) clock_nsta_pane_cp

0xcd92,	// (0x00015c49) indicator_nsta_pane_cp

0xcd9b,	// (0x00015c52) nsta_clock_indic_pane_g1

0x801c,	// (0x00010ed3) grid_indicator_pane

0x942a,	// (0x000122e1) scroll_pane_cp29

0x68f3,	// (0x0000f7aa) indicator_nsta_pane_cp2_ParamLimits

0x68f3,	// (0x0000f7aa) indicator_nsta_pane_cp2

0x7f39,	// (0x00010df0) main_apps_wheel_pane

0xada7,	// (0x00013c5e) form_midp_field_text_pane_ParamLimits

0xaeec,	// (0x00013da3) scroll_bar_cp050_ParamLimits

0xce04,	// (0x00015cbb) cell_indicator_pane_ParamLimits

0xce04,	// (0x00015cbb) cell_indicator_pane

0xce21,	// (0x00015cd8) cell_indicator_pane_g1

0xce2b,	// (0x00015ce2) grid_wheel_folder_pane_ParamLimits

0xce2b,	// (0x00015ce2) grid_wheel_folder_pane

0xce41,	// (0x00015cf8) list_wheel_apps_pane_ParamLimits

0xce41,	// (0x00015cf8) list_wheel_apps_pane

0xce52,	// (0x00015d09) main_apps_wheel_pane_g1_ParamLimits

0xce52,	// (0x00015d09) main_apps_wheel_pane_g1

0xce66,	// (0x00015d1d) main_apps_wheel_pane_g2_ParamLimits

0xce66,	// (0x00015d1d) main_apps_wheel_pane_g2

0x0001,

0xfada,	// (0x00018991) main_apps_wheel_pane_g_ParamLimits

0xfada,	// (0x00018991) main_apps_wheel_pane_g

0xce7e,	// (0x00015d35) main_apps_wheel_pane_t1_ParamLimits

0xce7e,	// (0x00015d35) main_apps_wheel_pane_t1

0xcea1,	// (0x00015d58) list_wheel_apps_pane_g1

0xcea9,	// (0x00015d60) list_wheel_apps_pane_g2

0xceb1,	// (0x00015d68) list_wheel_apps_pane_g3

0xcebb,	// (0x00015d72) list_wheel_apps_pane_g4

0xcec5,	// (0x00015d7c) list_wheel_apps_pane_g5

0x0004,

0xfadf,	// (0x00018996) list_wheel_apps_pane_g

0x9a08,	// (0x000128bf) navi_icon_text_pane

0xa4b5,	// (0x0001336c) aid_fill_nsta

0xcee8,	// (0x00015d9f) navi_icon_text_pane_g1

0xcef4,	// (0x00015dab) navi_icon_text_pane_t1

0x98a4,	// (0x0001275b) list_set_graphic_pane_t1_ParamLimits

0x98a4,	// (0x0001275b) list_set_graphic_pane_t1

0xb62e,	// (0x000144e5) popup_midp_note_alarm_window_t6_ParamLimits

0xb62e,	// (0x000144e5) popup_midp_note_alarm_window_t6

0xb640,	// (0x000144f7) popup_midp_note_alarm_window_t7_ParamLimits

0xb640,	// (0x000144f7) popup_midp_note_alarm_window_t7

0xb652,	// (0x00014509) popup_midp_note_alarm_window_t8_ParamLimits

0xb652,	// (0x00014509) popup_midp_note_alarm_window_t8

0xb664,	// (0x0001451b) popup_midp_note_alarm_window_t9_ParamLimits

0xb664,	// (0x0001451b) popup_midp_note_alarm_window_t9

0xb676,	// (0x0001452d) popup_midp_note_alarm_window_t10_ParamLimits

0xb676,	// (0x0001452d) popup_midp_note_alarm_window_t10

0xb688,	// (0x0001453f) popup_midp_note_alarm_window_t11_ParamLimits

0xb688,	// (0x0001453f) popup_midp_note_alarm_window_t11

0xb69a,	// (0x00014551) scroll_pane_cp17_ParamLimits

0xb69a,	// (0x00014551) scroll_pane_cp17

0x6da5,	// (0x0000fc5c) volume_small_pane_cp_g1

0x70f1,	// (0x0000ffa8) volume_small_pane_cp_g2

0x70fa,	// (0x0000ffb1) volume_small_pane_cp_g3

0x7103,	// (0x0000ffba) volume_small_pane_cp_g4

0x710c,	// (0x0000ffc3) volume_small_pane_cp_g5

0x7115,	// (0x0000ffcc) volume_small_pane_cp_g6

0x711e,	// (0x0000ffd5) volume_small_pane_cp_g7

0x7127,	// (0x0000ffde) volume_small_pane_cp_g8

0x7130,	// (0x0000ffe7) volume_small_pane_cp_g9

0x7139,	// (0x0000fff0) volume_small_pane_cp_g10

0x9c5d,	// (0x00012b14) midp_ticker_pane_g1_ParamLimits

0x9c69,	// (0x00012b20) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x00018622) midp_ticker_pane_g_ParamLimits

0x9c75,	// (0x00012b2c) midp_ticker_pane_t1_ParamLimits

0xa4cb,	// (0x00013382) aid_fill_nsta_2

0xaed8,	// (0x00013d8f) list_form2_midp_pane

0xc04f,	// (0x00014f06) midp_editing_number_pane_ParamLimits

0xc05e,	// (0x00014f15) midp_ticker_pane_ParamLimits

0xcf06,	// (0x00015dbd) form2_midp_field_pane

0xcf2a,	// (0x00015de1) scroll_pane_cp51

0xcf4a,	// (0x00015e01) form2_midp_button_pane_ParamLimits

0xcf4a,	// (0x00015e01) form2_midp_button_pane

0xcf5c,	// (0x00015e13) form2_midp_content_pane_ParamLimits

0xcf5c,	// (0x00015e13) form2_midp_content_pane

0xcf76,	// (0x00015e2d) form2_midp_field_choice_group_pane

0xcf7e,	// (0x00015e35) form2_midp_field_pane_g1

0xcf86,	// (0x00015e3d) form2_midp_field_pane_g2

0xcf8e,	// (0x00015e45) form2_midp_field_pane_g3

0xcf96,	// (0x00015e4d) form2_midp_field_pane_g4

0x0003,

0xfb04,	// (0x000189bb) form2_midp_field_pane_g

0xcf9e,	// (0x00015e55) form2_midp_gauge_slider_pane

0xcfa6,	// (0x00015e5d) form2_midp_gauge_wait_pane

0xcfae,	// (0x00015e65) form2_midp_image_pane_ParamLimits

0xcfae,	// (0x00015e65) form2_midp_image_pane

0xcfc9,	// (0x00015e80) form2_midp_label_pane_ParamLimits

0xcfc9,	// (0x00015e80) form2_midp_label_pane

0xcfe2,	// (0x00015e99) form2_midp_label_pane_cp_ParamLimits

0xcfe2,	// (0x00015e99) form2_midp_label_pane_cp

0xd003,	// (0x00015eba) form2_midp_string_pane_ParamLimits

0xd003,	// (0x00015eba) form2_midp_string_pane

0xd015,	// (0x00015ecc) form2_midp_text_pane_ParamLimits

0xd015,	// (0x00015ecc) form2_midp_text_pane

0xd02e,	// (0x00015ee5) form2_midp_time_pane

0xd03e,	// (0x00015ef5) input_focus_pane_cp51_ParamLimits

0xd03e,	// (0x00015ef5) input_focus_pane_cp51

0xd056,	// (0x00015f0d) form2_midp_label_pane_t1_ParamLimits

0xd056,	// (0x00015f0d) form2_midp_label_pane_t1

0xd096,	// (0x00015f4d) form2_mdip_text_pane_t1_ParamLimits

0xd096,	// (0x00015f4d) form2_mdip_text_pane_t1

0xd0b2,	// (0x00015f69) form2_midp_time_pane_t1

0xd0cd,	// (0x00015f84) form2_midp_gauge_slider_pane_t1

0xd0df,	// (0x00015f96) form2_midp_gauge_slider_pane_t2

0xd0f1,	// (0x00015fa8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0d,	// (0x000189c4) form2_midp_gauge_slider_pane_t

0xd103,	// (0x00015fba) form2_midp_slider_pane

0xd10f,	// (0x00015fc6) form2_midp_gauge_wait_pane_t1

0xd11d,	// (0x00015fd4) form2_midp_wait_pane_ParamLimits

0xd11d,	// (0x00015fd4) form2_midp_wait_pane

0xd148,	// (0x00015fff) list_single_2graphic_pane_cp4_ParamLimits

0xd148,	// (0x00015fff) list_single_2graphic_pane_cp4

0xab9a,	// (0x00013a51) list_single_midp_graphic_pane_cp_ParamLimits

0xab9a,	// (0x00013a51) list_single_midp_graphic_pane_cp

0x7e59,	// (0x00010d10) list_highlight_pane_cp20

0xd177,	// (0x0001602e) list_single_2graphic_pane_g1_cp4

0xc577,	// (0x0001542e) list_single_2graphic_pane_g2_cp4

0xd17f,	// (0x00016036) list_single_2graphic_pane_t1_cp4

0x7f39,	// (0x00010df0) list_highlight_pane_cp21

0xd18e,	// (0x00016045) list_single_midp_graphic_pane_g4_cp

0xd19d,	// (0x00016054) list_single_midp_graphic_pane_t1_cp

0xd1b2,	// (0x00016069) form2_mdip_string_pane_t1_ParamLimits

0xd1b2,	// (0x00016069) form2_mdip_string_pane_t1

0x7e59,	// (0x00010d10) bg_wml_button_pane_cp2

0x7e4f,	// (0x00010d06) form2_midp_image_pane_g1

0x89ec,	// (0x000118a3) list_double_large_graphic_pane_g5_ParamLimits

0x89ec,	// (0x000118a3) list_double_large_graphic_pane_g5

0x907c,	// (0x00011f33) midp_form_pane_ParamLimits

0x7f39,	// (0x00010df0) main_apps_wheel_pane_ParamLimits

0xa2a9,	// (0x00013160) popup_preview_window_ParamLimits

0xa2a9,	// (0x00013160) popup_preview_window

0xa45a,	// (0x00013311) popup_touch_info_window_ParamLimits

0xa45a,	// (0x00013311) popup_touch_info_window

0xa478,	// (0x0001332f) popup_touch_menu_window_ParamLimits

0xa478,	// (0x0001332f) popup_touch_menu_window

0x7e45,	// (0x00010cfc) bg_popup_sub_pane_cp6

0xd2ec,	// (0x000161a3) list_touch_menu_pane

0xd2f4,	// (0x000161ab) list_single_touch_menu_pane_ParamLimits

0xd2f4,	// (0x000161ab) list_single_touch_menu_pane

0xd308,	// (0x000161bf) list_single_touch_menu_pane_t1

0x7f39,	// (0x00010df0) bg_popup_sub_pane_cp7_ParamLimits

0x7f39,	// (0x00010df0) bg_popup_sub_pane_cp7

0xd316,	// (0x000161cd) heading_sub_pane

0xd31e,	// (0x000161d5) list_touch_info_pane_ParamLimits

0xd31e,	// (0x000161d5) list_touch_info_pane

0xd32d,	// (0x000161e4) list_single_touch_info_pane_ParamLimits

0xd32d,	// (0x000161e4) list_single_touch_info_pane

0xd33f,	// (0x000161f6) list_single_touch_info_pane_t1

0xd34d,	// (0x00016204) list_single_touch_info_pane_t2

0x0001,

0xfb1b,	// (0x000189d2) list_single_touch_info_pane_t

0x9b8a,	// (0x00012a41) bg_popup_heading_pane_cp

0xd35b,	// (0x00016212) heading_sub_pane_t1

0xaadd,	// (0x00013994) bg_popup_preview_window_pane_cp_ParamLimits

0xaadd,	// (0x00013994) bg_popup_preview_window_pane_cp

0xd316,	// (0x000161cd) heading_preview_pane

0xd31e,	// (0x000161d5) list_preview_pane_ParamLimits

0xd31e,	// (0x000161d5) list_preview_pane

0xd369,	// (0x00016220) popup_preview_window_g1

0xd32d,	// (0x000161e4) list_single_preview_pane_ParamLimits

0xd32d,	// (0x000161e4) list_single_preview_pane

0xd371,	// (0x00016228) list_single_preview_pane_g1

0xd379,	// (0x00016230) list_single_preview_pane_t1

0xd33f,	// (0x000161f6) list_single_preview_pane_t2

0x0001,

0xfb20,	// (0x000189d7) list_single_preview_pane_t

0xd387,	// (0x0001623e) bg_popup_heading_pane_cp2_ParamLimits

0xd387,	// (0x0001623e) bg_popup_heading_pane_cp2

0xd39d,	// (0x00016254) heading_preview_pane_g1

0xd3a5,	// (0x0001625c) heading_preview_pane_t1_ParamLimits

0xd3a5,	// (0x0001625c) heading_preview_pane_t1

0x803f,	// (0x00010ef6) soft_indicator_pane_t1_ParamLimits

0x8719,	// (0x000115d0) scroll_pane_ParamLimits

0x9326,	// (0x000121dd) scroll_sc2_left_pane

0x932f,	// (0x000121e6) scroll_sc2_right_pane

0x934e,	// (0x00012205) scroll_bg_pane_g1_ParamLimits

0x9363,	// (0x0001221a) scroll_bg_pane_g2_ParamLimits

0x937b,	// (0x00012232) scroll_bg_pane_g3_ParamLimits

0xf6f6,	// (0x000185ad) scroll_bg_pane_g_ParamLimits

0x934e,	// (0x00012205) scroll_handle_pane_g1_ParamLimits

0x939d,	// (0x00012254) scroll_handle_pane_g2_ParamLimits

0x937b,	// (0x00012232) scroll_handle_pane_g3_ParamLimits

0xf6fd,	// (0x000185b4) scroll_handle_pane_g_ParamLimits

0x9f34,	// (0x00012deb) popup_choice_list_window_ParamLimits

0x9f34,	// (0x00012deb) popup_choice_list_window

0xa8df,	// (0x00013796) choice_list_pane

0xa98f,	// (0x00013846) cell_toolbar_pane_t1

0xa9b7,	// (0x0001386e) toolbar_button_pane_ParamLimits

0xbb4c,	// (0x00014a03) ai_gene_pane_1_t2_ParamLimits

0xbb4c,	// (0x00014a03) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x000187d5) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x000187d5) ai_gene_pane_1_t

0xd3c2,	// (0x00016279) scroll_sc2_left_pane_g1

0xd3c2,	// (0x00016279) scroll_sc2_right_pane_g1

0x9f04,	// (0x00012dbb) bg_popup_sub_pane_cp10

0xd3cc,	// (0x00016283) list_choice_list_pane

0xd3e3,	// (0x0001629a) list_single_choice_list_pane_ParamLimits

0xd3e3,	// (0x0001629a) list_single_choice_list_pane

0x9024,	// (0x00011edb) list_single_choice_list_pane_g1

0x902c,	// (0x00011ee3) list_single_choice_list_pane_t1_ParamLimits

0x902c,	// (0x00011ee3) list_single_choice_list_pane_t1

0xd3f6,	// (0x000162ad) choice_list_pane_g1

0xd3fe,	// (0x000162b5) choice_list_pane_t1

0x7e45,	// (0x00010cfc) input_focus_pane_cp11

0x9203,	// (0x000120ba) title_pane_stacon_g2_ParamLimits

0x9203,	// (0x000120ba) title_pane_stacon_g2

0x0002,

0xf6dc,	// (0x00018593) title_pane_stacon_g_ParamLimits

0xf6dc,	// (0x00018593) title_pane_stacon_g

0x9b8a,	// (0x00012a41) cursor_press_pane

0x9fda,	// (0x00012e91) popup_fep_hwr_window_ParamLimits

0x9fda,	// (0x00012e91) popup_fep_hwr_window

0xa052,	// (0x00012f09) popup_fep_vkb_window_ParamLimits

0xa052,	// (0x00012f09) popup_fep_vkb_window

0xd40c,	// (0x000162c3) cursor_press_pane_g1

0x0002,

0xfb49,	// (0x00018a00) fep_vkb_side_pane_g_ParamLimits

0x717b,	// (0x00010032) fep_hwr_candidate_pane_ParamLimits

0x717b,	// (0x00010032) fep_hwr_candidate_pane

0x71a5,	// (0x0001005c) fep_hwr_side_pane_ParamLimits

0x71a5,	// (0x0001005c) fep_hwr_side_pane

0x71c5,	// (0x0001007c) fep_hwr_top_pane_ParamLimits

0x71c5,	// (0x0001007c) fep_hwr_top_pane

0x71dd,	// (0x00010094) fep_hwr_write_pane_ParamLimits

0x71dd,	// (0x00010094) fep_hwr_write_pane

0xfb49,	// (0x00018a00) fep_vkb_side_pane_g

0xd414,	// (0x000162cb) fep_hwr_top_pane_g1

0xd426,	// (0x000162dd) fep_hwr_top_pane_g2

0x7217,	// (0x000100ce) fep_hwr_top_pane_g3

0x0002,

0xfb25,	// (0x000189dc) fep_hwr_top_pane_g

0x722c,	// (0x000100e3) fep_hwr_top_text_pane

0x94f0,	// (0x000123a7) fep_hwr_top_text_pane_g1

0xd45c,	// (0x00016313) fep_hwr_top_text_pane_t1

0x7322,	// (0x000101d9) fep_hwr_candidate_pane_g1

0xd6b6,	// (0x0001656d) fep_vkb_keypad_pane_g3_ParamLimits

0xd6b6,	// (0x0001656d) fep_vkb_keypad_pane_g3

0xd6de,	// (0x00016595) fep_vkb_keypad_pane_g4_ParamLimits

0xd6de,	// (0x00016595) fep_vkb_keypad_pane_g4

0xd74d,	// (0x00016604) fep_vkb_bottom_pane_g2_ParamLimits

0xd74d,	// (0x00016604) fep_vkb_bottom_pane_g2

0x0001,

0xfb50,	// (0x00018a07) fep_vkb_bottom_pane_g_ParamLimits

0xfb50,	// (0x00018a07) fep_vkb_bottom_pane_g

0xd3c2,	// (0x00016279) cell_vkb_side_pane_g2

0x0001,

0xfb5a,	// (0x00018a11) cell_vkb_side_pane_g

0xd7d8,	// (0x0001668f) cell_vkb_side_pane_t1

0xd7e6,	// (0x0001669d) cell_vkb_side_pane_t1_copy1

0xd3c2,	// (0x00016279) bg_fep_vkb_candidate_pane_g2

0xd918,	// (0x000167cf) cell_vkb_candidate_pane_ParamLimits

0xd46a,	// (0x00016321) aid_size_cell_vkb_ParamLimits

0xd46a,	// (0x00016321) aid_size_cell_vkb

0xd918,	// (0x000167cf) cell_vkb_candidate_pane

0x7349,	// (0x00010200) bg_popup_fep_shadow_pane_g1

0xd4f8,	// (0x000163af) fep_vkb_bottom_pane_ParamLimits

0xd4f8,	// (0x000163af) fep_vkb_bottom_pane

0xd535,	// (0x000163ec) fep_vkb_candidate_pane_ParamLimits

0xd535,	// (0x000163ec) fep_vkb_candidate_pane

0xd551,	// (0x00016408) fep_vkb_keypad_pane_ParamLimits

0xd551,	// (0x00016408) fep_vkb_keypad_pane

0xd597,	// (0x0001644e) fep_vkb_side_pane_ParamLimits

0xd597,	// (0x0001644e) fep_vkb_side_pane

0xd5d3,	// (0x0001648a) fep_vkb_top_pane_ParamLimits

0xd5d3,	// (0x0001648a) fep_vkb_top_pane

0xd60f,	// (0x000164c6) fep_vkb_top_pane_g1_ParamLimits

0xd60f,	// (0x000164c6) fep_vkb_top_pane_g1

0xd61e,	// (0x000164d5) fep_vkb_top_pane_g2_ParamLimits

0xd61e,	// (0x000164d5) fep_vkb_top_pane_g2

0xd62d,	// (0x000164e4) fep_vkb_top_pane_g3_ParamLimits

0xd62d,	// (0x000164e4) fep_vkb_top_pane_g3

0x0003,

0xfb40,	// (0x000189f7) fep_vkb_top_pane_g_ParamLimits

0xfb40,	// (0x000189f7) fep_vkb_top_pane_g

0xd64b,	// (0x00016502) fep_vkb_top_text_pane_ParamLimits

0xd64b,	// (0x00016502) fep_vkb_top_text_pane

0xd65c,	// (0x00016513) fep_vkb_side_pane_g1_ParamLimits

0xd65c,	// (0x00016513) fep_vkb_side_pane_g1

0xd6a5,	// (0x0001655c) grid_vkb_side_pane_ParamLimits

0xd6a5,	// (0x0001655c) grid_vkb_side_pane

0x7351,	// (0x00010208) bg_popup_fep_shadow_pane_g2

0x735a,	// (0x00010211) bg_popup_fep_shadow_pane_g3

0x7362,	// (0x00010219) bg_popup_fep_shadow_pane_g4

0x736b,	// (0x00010222) bg_popup_fep_shadow_pane_g5

0x7375,	// (0x0001022c) bg_popup_fep_shadow_pane_g6

0x737d,	// (0x00010234) bg_popup_fep_shadow_pane_g7

0x8e66,	// (0x00011d1d) bg_popup_fep_shadow_pane_g8

0xd6fc,	// (0x000165b3) grid_vkb_keypad_number_pane_ParamLimits

0xd6fc,	// (0x000165b3) grid_vkb_keypad_number_pane

0xd70c,	// (0x000165c3) grid_vkb_keypad_pane_ParamLimits

0xd70c,	// (0x000165c3) grid_vkb_keypad_pane

0xd732,	// (0x000165e9) fep_vkb_bottom_pane_g1_ParamLimits

0xd732,	// (0x000165e9) fep_vkb_bottom_pane_g1

0xd75b,	// (0x00016612) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd75b,	// (0x00016612) grid_vkb_keypad_bottom_left_pane

0xd770,	// (0x00016627) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd770,	// (0x00016627) grid_vkb_keypad_bottom_right_pane

0xd785,	// (0x0001663c) fep_vkb_top_text_pane_g1

0xd7a0,	// (0x00016657) fep_vkb_top_text_pane_t1

0xd7b5,	// (0x0001666c) cell_vkb_side_pane_ParamLimits

0xd7b5,	// (0x0001666c) cell_vkb_side_pane

0xd3c2,	// (0x00016279) cell_vkb_side_pane_g1

0xd7f4,	// (0x000166ab) cell_vkb_keypad_pane_ParamLimits

0xd7f4,	// (0x000166ab) cell_vkb_keypad_pane

0xd86f,	// (0x00016726) cell_vkb_keypad_pane_g1

0x0008,

0xfb6d,	// (0x00018a24) bg_popup_fep_shadow_pane_g

0x738f,	// (0x00010246) cell_hwr_side_pane_g1

0x738f,	// (0x00010246) cell_hwr_side_pane_g2

0xd879,	// (0x00016730) cell_vkb_keypad_pane_t1

0xd887,	// (0x0001673e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd887,	// (0x0001673e) cell_vkb_keypad_bottom_left_pane

0xd8a4,	// (0x0001675b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd8a4,	// (0x0001675b) cell_vkb_keypad_bottom_right_pane

0xd3c2,	// (0x00016279) cell_vkb_keypad_bottom_left_pane_g1

0xd3c2,	// (0x00016279) cell_vkb_keypad_bottom_right_pane_g1

0xd8dd,	// (0x00016794) cell_vkb_keypad_number_pane_ParamLimits

0xd8dd,	// (0x00016794) cell_vkb_keypad_number_pane

0xd8fc,	// (0x000167b3) cell_vkb_keypad_number_pane_g1

0xd906,	// (0x000167bd) cell_vkb_keypad_number_pane_g2

0xd90f,	// (0x000167c6) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5f,	// (0x00018a16) cell_vkb_keypad_number_pane_g

0xd879,	// (0x00016730) cell_vkb_keypad_number_pane_t1

0xd935,	// (0x000167ec) fep_vkb_candidate_pane_g1

0x0001,

0xfb80,	// (0x00018a37) cell_hwr_side_pane_g

0xd94e,	// (0x00016805) cell_hwr_side_pane_t1

0x7399,	// (0x00010250) cell_hwr_side_pane_t1_copy1

0x73a7,	// (0x0001025e) cell_hwr_candidate_pane_g1

0x73d6,	// (0x0001028d) cell_hwr_candidate_pane_t1

0xd3c2,	// (0x00016279) cell_vkb_candidate_pane_g2

0xd992,	// (0x00016849) cell_vkb_candidate_pane_t1

0x7142,	// (0x0000fff9) bg_popup_fep_shadow_pane_ParamLimits

0x7142,	// (0x0000fff9) bg_popup_fep_shadow_pane

0x71f7,	// (0x000100ae) bg_fep_hwr_top_pane_g4

0xd438,	// (0x000162ef) bg_hwr_side_pane_g1_ParamLimits

0xd438,	// (0x000162ef) bg_hwr_side_pane_g1

0x7268,	// (0x0001011f) cell_hwr_side_pane_ParamLimits

0x7268,	// (0x0001011f) cell_hwr_side_pane

0x72a3,	// (0x0001015a) fep_hwr_write_pane_g1_ParamLimits

0x72a3,	// (0x0001015a) fep_hwr_write_pane_g1

0x72b0,	// (0x00010167) fep_hwr_write_pane_g2_ParamLimits

0x72b0,	// (0x00010167) fep_hwr_write_pane_g2

0x72bd,	// (0x00010174) fep_hwr_write_pane_g3_ParamLimits

0x72bd,	// (0x00010174) fep_hwr_write_pane_g3

0x72cb,	// (0x00010182) fep_hwr_write_pane_g4_ParamLimits

0x72cb,	// (0x00010182) fep_hwr_write_pane_g4

0x0005,

0xfb2c,	// (0x000189e3) fep_hwr_write_pane_g_ParamLimits

0xfb2c,	// (0x000189e3) fep_hwr_write_pane_g

0x71f7,	// (0x000100ae) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x71f7,	// (0x000100ae) bg_fep_hwr_candidate_pane_g2

0x72e0,	// (0x00010197) cell_hwr_candidate_pane_ParamLimits

0x72e0,	// (0x00010197) cell_hwr_candidate_pane

0x7322,	// (0x000101d9) fep_hwr_candidate_pane_g1_ParamLimits

0xd498,	// (0x0001634f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd498,	// (0x0001634f) bg_popup_fep_shadow_pane_cp2

0xd63d,	// (0x000164f4) fep_vkb_top_pane_g4_ParamLimits

0xd63d,	// (0x000164f4) fep_vkb_top_pane_g4

0xd683,	// (0x0001653a) fep_vkb_side_pane_g2_ParamLimits

0xd683,	// (0x0001653a) fep_vkb_side_pane_g2

0x8b42,	// (0x000119f9) list_setting_pane_t4_ParamLimits

0x8b42,	// (0x000119f9) list_setting_pane_t4

0x8bbc,	// (0x00011a73) list_setting_number_pane_t5_ParamLimits

0x8bbc,	// (0x00011a73) list_setting_number_pane_t5

0x9537,	// (0x000123ee) list_double_heading_pane_cp2_ParamLimits

0x9537,	// (0x000123ee) list_double_heading_pane_cp2

0x8d38,	// (0x00011bef) list_double_heading_pane_g1_cp2_ParamLimits

0x8d38,	// (0x00011bef) list_double_heading_pane_g1_cp2

0x8d44,	// (0x00011bfb) list_double_heading_pane_g2_cp2_ParamLimits

0x8d44,	// (0x00011bfb) list_double_heading_pane_g2_cp2

0xd9a0,	// (0x00016857) list_double_heading_pane_t1_cp2_ParamLimits

0xd9a0,	// (0x00016857) list_double_heading_pane_t1_cp2

0xd9b6,	// (0x0001686d) list_double_heading_pane_t2_cp2_ParamLimits

0xd9b6,	// (0x0001686d) list_double_heading_pane_t2_cp2

0x7e2d,	// (0x00010ce4) aid_value_unit2

0x6495,	// (0x0000f34c) popup_preview_fixed_window

0x81dc,	// (0x00011093) bg_popup_preview_window_pane_cp02

0xd9c8,	// (0x0001687f) list_preview_fixed_pane

0xda0e,	// (0x000168c5) list_empty_pane_fp_ParamLimits

0xda0e,	// (0x000168c5) list_empty_pane_fp

0xda0e,	// (0x000168c5) list_single_cale_day_pane_fp_ParamLimits

0xda0e,	// (0x000168c5) list_single_cale_day_pane_fp

0xda0e,	// (0x000168c5) list_single_graphic_heading_pane_fp_ParamLimits

0xda0e,	// (0x000168c5) list_single_graphic_heading_pane_fp

0xda0e,	// (0x000168c5) list_single_graphic_pane_fp_ParamLimits

0xda0e,	// (0x000168c5) list_single_graphic_pane_fp

0xda0e,	// (0x000168c5) list_single_heading_pane_fp_ParamLimits

0xda0e,	// (0x000168c5) list_single_heading_pane_fp

0xda0e,	// (0x000168c5) list_single_pane_fp_ParamLimits

0xda0e,	// (0x000168c5) list_single_pane_fp

0xda25,	// (0x000168dc) list_single_pane_fp_g1_ParamLimits

0xda25,	// (0x000168dc) list_single_pane_fp_g1

0x8d38,	// (0x00011bef) list_single_pane_fp_g2_ParamLimits

0x8d38,	// (0x00011bef) list_single_pane_fp_g2

0x8d44,	// (0x00011bfb) list_single_pane_fp_g3_ParamLimits

0x8d44,	// (0x00011bfb) list_single_pane_fp_g3

0xda31,	// (0x000168e8) list_single_pane_fp_g4_ParamLimits

0xda31,	// (0x000168e8) list_single_pane_fp_g4

0x0003,

0xfb93,	// (0x00018a4a) list_single_pane_fp_g_ParamLimits

0xfb93,	// (0x00018a4a) list_single_pane_fp_g

0xda3d,	// (0x000168f4) list_single_pane_fp_t1_ParamLimits

0xda3d,	// (0x000168f4) list_single_pane_fp_t1

0xda54,	// (0x0001690b) list_single_graphic_pane_fp_g1_ParamLimits

0xda54,	// (0x0001690b) list_single_graphic_pane_fp_g1

0xda25,	// (0x000168dc) list_single_graphic_pane_fp_g2_ParamLimits

0xda25,	// (0x000168dc) list_single_graphic_pane_fp_g2

0x8d38,	// (0x00011bef) list_single_graphic_pane_fp_g3_ParamLimits

0x8d38,	// (0x00011bef) list_single_graphic_pane_fp_g3

0x8d44,	// (0x00011bfb) list_single_graphic_pane_fp_g4_ParamLimits

0x8d44,	// (0x00011bfb) list_single_graphic_pane_fp_g4

0xda31,	// (0x000168e8) list_single_graphic_pane_fp_g5_ParamLimits

0xda31,	// (0x000168e8) list_single_graphic_pane_fp_g5

0x0004,

0xfb9c,	// (0x00018a53) list_single_graphic_pane_fp_g_ParamLimits

0xfb9c,	// (0x00018a53) list_single_graphic_pane_fp_g

0xda60,	// (0x00016917) list_single_graphic_pane_fp_t1_ParamLimits

0xda60,	// (0x00016917) list_single_graphic_pane_fp_t1

0xda54,	// (0x0001690b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xda54,	// (0x0001690b) list_single_graphic_heading_pane_fp_g1

0xda25,	// (0x000168dc) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xda25,	// (0x000168dc) list_single_graphic_heading_pane_fp_g2

0x8d38,	// (0x00011bef) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8d38,	// (0x00011bef) list_single_graphic_heading_pane_fp_g3

0x8d44,	// (0x00011bfb) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8d44,	// (0x00011bfb) list_single_graphic_heading_pane_fp_g4

0xda31,	// (0x000168e8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xda31,	// (0x000168e8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9c,	// (0x00018a53) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9c,	// (0x00018a53) list_single_graphic_heading_pane_fp_g

0xda76,	// (0x0001692d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xda76,	// (0x0001692d) list_single_graphic_heading_pane_fp_t1

0xda8c,	// (0x00016943) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xda8c,	// (0x00016943) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba7,	// (0x00018a5e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba7,	// (0x00018a5e) list_single_graphic_heading_pane_fp_t

0xda9e,	// (0x00016955) list_single_cale_day_pane_fp_g1_ParamLimits

0xda9e,	// (0x00016955) list_single_cale_day_pane_fp_g1

0xdad6,	// (0x0001698d) list_single_cale_day_pane_fp_g2_ParamLimits

0xdad6,	// (0x0001698d) list_single_cale_day_pane_fp_g2

0xdae2,	// (0x00016999) list_single_cale_day_pane_fp_g3_ParamLimits

0xdae2,	// (0x00016999) list_single_cale_day_pane_fp_g3

0xdb0a,	// (0x000169c1) list_single_cale_day_pane_fp_g4_ParamLimits

0xdb0a,	// (0x000169c1) list_single_cale_day_pane_fp_g4

0xdb2e,	// (0x000169e5) list_single_cale_day_pane_fp_g5_ParamLimits

0xdb2e,	// (0x000169e5) list_single_cale_day_pane_fp_g5

0x0004,

0xfbac,	// (0x00018a63) list_single_cale_day_pane_fp_g_ParamLimits

0xfbac,	// (0x00018a63) list_single_cale_day_pane_fp_g

0xdb52,	// (0x00016a09) list_single_cale_day_pane_fp_t1_ParamLimits

0xdb52,	// (0x00016a09) list_single_cale_day_pane_fp_t1

0xdb78,	// (0x00016a2f) list_single_cale_day_pane_fp_t2_ParamLimits

0xdb78,	// (0x00016a2f) list_single_cale_day_pane_fp_t2

0xdb91,	// (0x00016a48) list_single_cale_day_pane_fp_t3_ParamLimits

0xdb91,	// (0x00016a48) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb7,	// (0x00018a6e) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb7,	// (0x00018a6e) list_single_cale_day_pane_fp_t

0xda25,	// (0x000168dc) list_empty_pane_fp_g1_ParamLimits

0xda25,	// (0x000168dc) list_empty_pane_fp_g1

0xdbaa,	// (0x00016a61) list_empty_pane_fp_t1

0xdbb8,	// (0x00016a6f) list_empty_pane_fp_t2

0x0001,

0xfbbe,	// (0x00018a75) list_empty_pane_fp_t

0xda25,	// (0x000168dc) list_single_heading_pane_fp_g1_ParamLimits

0xda25,	// (0x000168dc) list_single_heading_pane_fp_g1

0x8d38,	// (0x00011bef) list_single_heading_pane_fp_g2_ParamLimits

0x8d38,	// (0x00011bef) list_single_heading_pane_fp_g2

0x8d44,	// (0x00011bfb) list_single_heading_pane_fp_g3_ParamLimits

0x8d44,	// (0x00011bfb) list_single_heading_pane_fp_g3

0x0002,

0xfbc3,	// (0x00018a7a) list_single_heading_pane_fp_g_ParamLimits

0xfbc3,	// (0x00018a7a) list_single_heading_pane_fp_g

0xdbc6,	// (0x00016a7d) list_single_heading_pane_fp_t1_ParamLimits

0xdbc6,	// (0x00016a7d) list_single_heading_pane_fp_t1

0xdbd8,	// (0x00016a8f) list_single_heading_pane_fp_t2_ParamLimits

0xdbd8,	// (0x00016a8f) list_single_heading_pane_fp_t2

0x0001,

0xfbca,	// (0x00018a81) list_single_heading_pane_fp_t_ParamLimits

0xfbca,	// (0x00018a81) list_single_heading_pane_fp_t

0x909a,	// (0x00011f51) aid_size_cell_fast

0x814c,	// (0x00011003) soft_indicator_pane_cp1_t1

0x90d7,	// (0x00011f8e) cell_app_pane_cp2_ParamLimits

0x90d7,	// (0x00011f8e) cell_app_pane_cp2

0x7164,	// (0x0001001b) fep_hwr_candidate_drop_down_list_pane

0x733c,	// (0x000101f3) fep_hwr_candidate_pane_g3_ParamLimits

0x733c,	// (0x000101f3) fep_hwr_candidate_pane_g3

0x5b41,	// (0x0000e9f8) fep_hwr_candidate_pane_g4_ParamLimits

0x5b41,	// (0x0000e9f8) fep_hwr_candidate_pane_g4

0x0002,

0xfb39,	// (0x000189f0) fep_hwr_candidate_pane_g_ParamLimits

0xfb39,	// (0x000189f0) fep_hwr_candidate_pane_g

0xd524,	// (0x000163db) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd524,	// (0x000163db) fep_vkb_candidate_drop_down_list_pane

0xd93d,	// (0x000167f4) fep_vkb_candidate_pane_g3

0xd945,	// (0x000167fc) fep_vkb_candidate_pane_g4

0x0002,

0xfb66,	// (0x00018a1d) fep_vkb_candidate_pane_g

0x73a7,	// (0x0001025e) cell_hwr_candidate_pane_g1_ParamLimits

0x73b5,	// (0x0001026c) cell_hwr_candidate_pane_g3_ParamLimits

0x73b5,	// (0x0001026c) cell_hwr_candidate_pane_g3

0x0766,	// (0x0000961d) cell_hwr_candidate_pane_g4_ParamLimits

0x0766,	// (0x0000961d) cell_hwr_candidate_pane_g4

0x0002,

0xfb85,	// (0x00018a3c) cell_hwr_candidate_pane_g_ParamLimits

0xfb85,	// (0x00018a3c) cell_hwr_candidate_pane_g

0xd95c,	// (0x00016813) cell_vkb_candidate_pane_g3_ParamLimits

0xd95c,	// (0x00016813) cell_vkb_candidate_pane_g3

0xd977,	// (0x0001682e) cell_vkb_candidate_pane_g4_ParamLimits

0xd977,	// (0x0001682e) cell_vkb_candidate_pane_g4

0xdbee,	// (0x00016aa5) cell_app_pane_cp2_g1_ParamLimits

0xdbee,	// (0x00016aa5) cell_app_pane_cp2_g1

0xdc0c,	// (0x00016ac3) cell_app_pane_cp2_g2_ParamLimits

0xdc0c,	// (0x00016ac3) cell_app_pane_cp2_g2

0x0001,

0xfbcf,	// (0x00018a86) cell_app_pane_cp2_g_ParamLimits

0xfbcf,	// (0x00018a86) cell_app_pane_cp2_g

0xdc18,	// (0x00016acf) cell_app_pane_cp2_t1_ParamLimits

0xdc18,	// (0x00016acf) cell_app_pane_cp2_t1

0x8d12,	// (0x00011bc9) grid_highlight_pane_cp1_ParamLimits

0x8d12,	// (0x00011bc9) grid_highlight_pane_cp1

0x73f4,	// (0x000102ab) cell_hwr_candidate_pane_cp1_ParamLimits

0x73f4,	// (0x000102ab) cell_hwr_candidate_pane_cp1

0x73a7,	// (0x0001025e) fep_hwr_candidate_drop_down_list_pane_g1

0x7413,	// (0x000102ca) fep_hwr_candidate_drop_down_list_pane_g2

0x7420,	// (0x000102d7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd4,	// (0x00018a8b) fep_hwr_candidate_drop_down_list_pane_g

0x742d,	// (0x000102e4) fep_hwr_candidate_drop_down_list_scroll_pane

0x7436,	// (0x000102ed) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7436,	// (0x000102ed) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7443,	// (0x000102fa) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7443,	// (0x000102fa) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7450,	// (0x00010307) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7450,	// (0x00010307) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x745d,	// (0x00010314) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x745d,	// (0x00010314) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7478,	// (0x0001032f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7478,	// (0x0001032f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7493,	// (0x0001034a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7493,	// (0x0001034a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x74ae,	// (0x00010365) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x74ae,	// (0x00010365) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x74c9,	// (0x00010380) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x74c9,	// (0x00010380) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdb,	// (0x00018a92) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdb,	// (0x00018a92) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xdca1,	// (0x00016b58) cell_vkb_candidate_pane_cp1_ParamLimits

0xdca1,	// (0x00016b58) cell_vkb_candidate_pane_cp1

0xd63d,	// (0x000164f4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd63d,	// (0x000164f4) fep_vkb_candidate_drop_down_list_pane_g1

0xdc2a,	// (0x00016ae1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xdc2a,	// (0x00016ae1) fep_vkb_candidate_drop_down_list_pane_g2

0xdc37,	// (0x00016aee) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xdc37,	// (0x00016aee) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbec,	// (0x00018aa3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbec,	// (0x00018aa3) fep_vkb_candidate_drop_down_list_pane_g

0xdcc1,	// (0x00016b78) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xdcc1,	// (0x00016b78) fep_vkb_candidate_drop_down_list_scroll_pane

0xdcce,	// (0x00016b85) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xdcce,	// (0x00016b85) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xdcdb,	// (0x00016b92) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xdcdb,	// (0x00016b92) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xdce7,	// (0x00016b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xdce7,	// (0x00016b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xdc44,	// (0x00016afb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xdc44,	// (0x00016afb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xdc65,	// (0x00016b1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xdc65,	// (0x00016b1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xdcf3,	// (0x00016baa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xdcf3,	// (0x00016baa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xdd14,	// (0x00016bcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xdd14,	// (0x00016bcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xdc86,	// (0x00016b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xdc86,	// (0x00016b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf3,	// (0x00018aaa) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf3,	// (0x00018aaa) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7e63,	// (0x00010d1a) title_pane_g1_ParamLimits

0x7e70,	// (0x00010d27) title_pane_g2_ParamLimits

0xf566,	// (0x0001841d) title_pane_g_ParamLimits

0x94e0,	// (0x00012397) aid_call2_pane

0x94e8,	// (0x0001239f) aid_call_pane

0x94f0,	// (0x000123a7) popup_clock_analogue_window_g1

0x94f0,	// (0x000123a7) popup_clock_analogue_window_g2

0x67f4,	// (0x0000f6ab) popup_clock_analogue_window_g3

0x67fd,	// (0x0000f6b4) popup_clock_analogue_window_g4

0x7e4f,	// (0x00010d06) popup_clock_analogue_window_g5

0x0004,

0xf70b,	// (0x000185c2) popup_clock_analogue_window_g

0x6805,	// (0x0000f6bc) popup_clock_analogue_window_t1

0x6813,	// (0x0000f6ca) clock_digital_number_pane_ParamLimits

0x6813,	// (0x0000f6ca) clock_digital_number_pane

0x681f,	// (0x0000f6d6) clock_digital_number_pane_cp02_ParamLimits

0x681f,	// (0x0000f6d6) clock_digital_number_pane_cp02

0x682b,	// (0x0000f6e2) clock_digital_number_pane_cp03_ParamLimits

0x682b,	// (0x0000f6e2) clock_digital_number_pane_cp03

0x6837,	// (0x0000f6ee) clock_digital_number_pane_cp04_ParamLimits

0x6837,	// (0x0000f6ee) clock_digital_number_pane_cp04

0x6843,	// (0x0000f6fa) clock_digital_separator_pane_ParamLimits

0x6843,	// (0x0000f6fa) clock_digital_separator_pane

0x684f,	// (0x0000f706) popup_clock_digital_window_t1_ParamLimits

0x684f,	// (0x0000f706) popup_clock_digital_window_t1

0x7e4f,	// (0x00010d06) clock_digital_number_pane_g1

0x7e4f,	// (0x00010d06) clock_digital_number_pane_g2

0x0001,

0xf716,	// (0x000185cd) clock_digital_number_pane_g

0x7e4f,	// (0x00010d06) clock_digital_separator_pane_g1

0x7e4f,	// (0x00010d06) clock_digital_separator_pane_g2

0x0001,

0xf716,	// (0x000185cd) clock_digital_separator_pane_g

0xa4b5,	// (0x0001336c) aid_fill_nsta_ParamLimits

0xa5fb,	// (0x000134b2) indicator_nsta_pane_ParamLimits

0xa76e,	// (0x00013625) popup_clock_analogue_window

0xa76e,	// (0x00013625) popup_clock_digital_window

0x7f39,	// (0x00010df0) grid_indicator_nsta_pane_ParamLimits

0xcd20,	// (0x00015bd7) clock_nsta_pane_t2

0x0001,

0xfab9,	// (0x00018970) clock_nsta_pane_t

0x67b8,	// (0x0000f66f) aid_size_max_handle

0x67c2,	// (0x0000f679) aid_size_min_handle

0x9b8a,	// (0x00012a41) editor_scroll_pane

0xdd35,	// (0x00016bec) ex_editor_pane

0x9009,	// (0x00011ec0) scroll_pane_cp13

0x8745,	// (0x000115fc) scroll_pane_cp14

0x951f,	// (0x000123d6) scroll_pane_cp36

0x9549,	// (0x00012400) list_single_graphic_hl_pane_cp2_ParamLimits

0x9549,	// (0x00012400) list_single_graphic_hl_pane_cp2

0xc137,	// (0x00014fee) list_single_graphic_hl_pane_ParamLimits

0xc137,	// (0x00014fee) list_single_graphic_hl_pane

0xdd3d,	// (0x00016bf4) aid_size_min_hl_cp1

0xdd46,	// (0x00016bfd) list_highlight_pane_cp34_ParamLimits

0xdd46,	// (0x00016bfd) list_highlight_pane_cp34

0xdd57,	// (0x00016c0e) list_single_graphic_hl_pane_g1_ParamLimits

0xdd57,	// (0x00016c0e) list_single_graphic_hl_pane_g1

0xdd64,	// (0x00016c1b) list_single_graphic_hl_pane_g2_ParamLimits

0xdd64,	// (0x00016c1b) list_single_graphic_hl_pane_g2

0xdd64,	// (0x00016c1b) list_single_graphic_hl_pane_g3_ParamLimits

0xdd64,	// (0x00016c1b) list_single_graphic_hl_pane_g3

0x9ac1,	// (0x00012978) list_single_graphic_hl_pane_g4_ParamLimits

0x9ac1,	// (0x00012978) list_single_graphic_hl_pane_g4

0xdd70,	// (0x00016c27) list_single_graphic_hl_pane_g5_ParamLimits

0xdd70,	// (0x00016c27) list_single_graphic_hl_pane_g5

0x0004,

0xfc04,	// (0x00018abb) list_single_graphic_hl_pane_g_ParamLimits

0xfc04,	// (0x00018abb) list_single_graphic_hl_pane_g

0xb750,	// (0x00014607) list_single_graphic_hl_pane_t1_ParamLimits

0xb750,	// (0x00014607) list_single_graphic_hl_pane_t1

0xdd84,	// (0x00016c3b) aid_size_min_hl_cp2

0xdd8d,	// (0x00016c44) list_highlight_pane_cp34_cp2_ParamLimits

0xdd8d,	// (0x00016c44) list_highlight_pane_cp34_cp2

0xdd57,	// (0x00016c0e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xdd57,	// (0x00016c0e) list_single_graphic_hl_pane_g1_cp2

0xdd9a,	// (0x00016c51) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xdd9a,	// (0x00016c51) list_single_graphic_hl_pane_g2_cp2

0xdda6,	// (0x00016c5d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xdda6,	// (0x00016c5d) list_single_graphic_hl_pane_g3_cp2

0x9ac1,	// (0x00012978) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9ac1,	// (0x00012978) list_single_graphic_hl_pane_g4_cp2

0xdd70,	// (0x00016c27) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xdd70,	// (0x00016c27) list_single_graphic_hl_pane_g5_cp2

0x6aff,	// (0x0000f9b6) control_pane_g4_ParamLimits

0x6aff,	// (0x0000f9b6) control_pane_g4

0x9f04,	// (0x00012dbb) bg_popup_sub_pane_cp10_ParamLimits

0xd3cc,	// (0x00016283) list_choice_list_pane_ParamLimits

0xd3db,	// (0x00016292) scroll_pane_cp23

0x81dc,	// (0x00011093) bg_popup_preview_window_pane_cp02_ParamLimits

0xd9c8,	// (0x0001687f) list_preview_fixed_pane_ParamLimits

0xd9de,	// (0x00016895) list_preview_fixed_pane_cp_ParamLimits

0xd9de,	// (0x00016895) list_preview_fixed_pane_cp

0xd9ea,	// (0x000168a1) popup_preview_fixed_window_g1_ParamLimits

0xd9ea,	// (0x000168a1) popup_preview_fixed_window_g1

0xd9f6,	// (0x000168ad) popup_preview_fixed_window_g2_ParamLimits

0xd9f6,	// (0x000168ad) popup_preview_fixed_window_g2

0x0002,

0xfb8c,	// (0x00018a43) popup_preview_fixed_window_g_ParamLimits

0xfb8c,	// (0x00018a43) popup_preview_fixed_window_g

0x672c,	// (0x0000f5e3) aid_navi_side_left_pane_ParamLimits

0x6741,	// (0x0000f5f8) aid_navi_side_right_pane_ParamLimits

0x6759,	// (0x0000f610) navi_icon_pane_stacon_ParamLimits

0x676d,	// (0x0000f624) navi_navi_pane_stacon_ParamLimits

0x6759,	// (0x0000f610) navi_text_pane_stacon_ParamLimits

0x7e45,	// (0x00010cfc) main_text_info_pane

0xddca,	// (0x00016c81) listscroll_text_info_pane

0xddd2,	// (0x00016c89) list_text_info_pane_ParamLimits

0xddd2,	// (0x00016c89) list_text_info_pane

0xdde1,	// (0x00016c98) scroll_pane_cp24_ParamLimits

0xdde1,	// (0x00016c98) scroll_pane_cp24

0xddff,	// (0x00016cb6) list_text_info_pane_t1_ParamLimits

0xddff,	// (0x00016cb6) list_text_info_pane_t1

0x9f4e,	// (0x00012e05) popup_fast_swap2_window_ParamLimits

0x9f4e,	// (0x00012e05) popup_fast_swap2_window

0xde38,	// (0x00016cef) aid_size_cell_fast2

0x7e45,	// (0x00010cfc) bg_popup_window_pane_cp17

0xaf04,	// (0x00013dbb) heading_pane_cp2

0x841c,	// (0x000112d3) listscroll_fast2_pane

0xde42,	// (0x00016cf9) grid_fast2_pane

0xde4c,	// (0x00016d03) listscroll_fast2_pane_g1

0xde54,	// (0x00016d0b) listscroll_fast2_pane_g2

0x0001,

0xfc0f,	// (0x00018ac6) listscroll_fast2_pane_g

0x9009,	// (0x00011ec0) scroll_pane_cp26

0xde5e,	// (0x00016d15) cell_fast2_pane_ParamLimits

0xde5e,	// (0x00016d15) cell_fast2_pane

0xde73,	// (0x00016d2a) cell_fast2_pane_g1

0xde7c,	// (0x00016d33) cell_fast2_pane_g2

0xde85,	// (0x00016d3c) cell_fast2_pane_g3

0x0002,

0xfc14,	// (0x00018acb) cell_fast2_pane_g

0x8502,	// (0x000113b9) grid_highlight_pane_cp9

0x8517,	// (0x000113ce) main_eswt_pane_ParamLimits

0x8517,	// (0x000113ce) main_eswt_pane

0xddf6,	// (0x00016cad) list_single_text_info_pane

0xde8d,	// (0x00016d44) eswt_ctrl_button_pane

0xde8d,	// (0x00016d44) eswt_ctrl_canvas_pane

0xde95,	// (0x00016d4c) eswt_ctrl_combo_pane

0xde8d,	// (0x00016d44) eswt_ctrl_default_pane

0xde8d,	// (0x00016d44) eswt_ctrl_label_pane

0xde9d,	// (0x00016d54) eswt_ctrl_wait_pane

0xdea5,	// (0x00016d5c) eswt_shell_pane

0x7e45,	// (0x00010cfc) listscroll_eswt_app_pane

0xdec5,	// (0x00016d7c) popup_eswt_tasktip_window_ParamLimits

0xdec5,	// (0x00016d7c) popup_eswt_tasktip_window

0xaadd,	// (0x00013994) bg_popup_window_pane_cp18

0xded6,	// (0x00016d8d) eswt_control_pane_g1_ParamLimits

0xded6,	// (0x00016d8d) eswt_control_pane_g1

0xdee3,	// (0x00016d9a) eswt_control_pane_g2_ParamLimits

0xdee3,	// (0x00016d9a) eswt_control_pane_g2

0xdef0,	// (0x00016da7) eswt_control_pane_g3_ParamLimits

0xdef0,	// (0x00016da7) eswt_control_pane_g3

0xdefd,	// (0x00016db4) eswt_control_pane_g4_ParamLimits

0xdefd,	// (0x00016db4) eswt_control_pane_g4

0x0003,

0xfc1b,	// (0x00018ad2) eswt_control_pane_g_ParamLimits

0xfc1b,	// (0x00018ad2) eswt_control_pane_g

0x8d12,	// (0x00011bc9) bg_button_pane_ParamLimits

0x8d12,	// (0x00011bc9) bg_button_pane

0x8517,	// (0x000113ce) common_borders_pane_copy2_ParamLimits

0x8517,	// (0x000113ce) common_borders_pane_copy2

0xdf0a,	// (0x00016dc1) control_button_pane_g1_ParamLimits

0xdf0a,	// (0x00016dc1) control_button_pane_g1

0xdf16,	// (0x00016dcd) control_button_pane_g2_ParamLimits

0xdf16,	// (0x00016dcd) control_button_pane_g2

0xdf22,	// (0x00016dd9) control_button_pane_g3_ParamLimits

0xdf22,	// (0x00016dd9) control_button_pane_g3

0x0002,

0xfc24,	// (0x00018adb) control_button_pane_g_ParamLimits

0xfc24,	// (0x00018adb) control_button_pane_g

0xdf36,	// (0x00016ded) control_button_pane_t1

0xdf44,	// (0x00016dfb) control_button_pane_t2

0x0001,

0xfc2b,	// (0x00018ae2) control_button_pane_t

0xa9c3,	// (0x0001387a) bg_button_pane_g1

0xa9d3,	// (0x0001388a) bg_button_pane_g2

0xa9cb,	// (0x00013882) bg_button_pane_g3

0xa9e3,	// (0x0001389a) bg_button_pane_g4

0xa9db,	// (0x00013892) bg_button_pane_g5

0xa9eb,	// (0x000138a2) bg_button_pane_g6

0xa9f3,	// (0x000138aa) bg_button_pane_g7

0xaa03,	// (0x000138ba) bg_button_pane_g8

0xa9fb,	// (0x000138b2) bg_button_pane_g9

0x0008,

0xf872,	// (0x00018729) bg_button_pane_g

0xd387,	// (0x0001623e) common_borders_pane_ParamLimits

0xd387,	// (0x0001623e) common_borders_pane

0xded6,	// (0x00016d8d) eswt_control_pane_g1_copy1_ParamLimits

0xded6,	// (0x00016d8d) eswt_control_pane_g1_copy1

0xdee3,	// (0x00016d9a) eswt_control_pane_g2_copy1_ParamLimits

0xdee3,	// (0x00016d9a) eswt_control_pane_g2_copy1

0xdef0,	// (0x00016da7) eswt_control_pane_g3_copy1_ParamLimits

0xdef0,	// (0x00016da7) eswt_control_pane_g3_copy1

0xdefd,	// (0x00016db4) eswt_control_pane_g4_copy1_ParamLimits

0xdefd,	// (0x00016db4) eswt_control_pane_g4_copy1

0xd3c2,	// (0x00016279) bg_eswt_ctrl_canvas_pane_g1

0xd387,	// (0x0001623e) common_borders_pane_cp2_ParamLimits

0xd387,	// (0x0001623e) common_borders_pane_cp2

0xd387,	// (0x0001623e) common_borders_pane_cp3_ParamLimits

0xd387,	// (0x0001623e) common_borders_pane_cp3

0xdf52,	// (0x00016e09) separator_horizontal_pane

0xdf5a,	// (0x00016e11) separator_vertical_pane

0xded6,	// (0x00016d8d) eswt_control_pane_g1_copy2_ParamLimits

0xded6,	// (0x00016d8d) eswt_control_pane_g1_copy2

0xdee3,	// (0x00016d9a) eswt_control_pane_g2_copy2_ParamLimits

0xdee3,	// (0x00016d9a) eswt_control_pane_g2_copy2

0xdef0,	// (0x00016da7) eswt_control_pane_g3_copy2_ParamLimits

0xdef0,	// (0x00016da7) eswt_control_pane_g3_copy2

0xdefd,	// (0x00016db4) eswt_control_pane_g4_copy2_ParamLimits

0xdefd,	// (0x00016db4) eswt_control_pane_g4_copy2

0x7e45,	// (0x00010cfc) common_borders_pane_cp4

0xdf63,	// (0x00016e1a) separator_horizontal_pane_g1

0xdf6c,	// (0x00016e23) separator_horizontal_pane_g2

0xdf75,	// (0x00016e2c) separator_horizontal_pane_g3

0x0002,

0xfc30,	// (0x00018ae7) separator_horizontal_pane_g

0xded6,	// (0x00016d8d) eswt_control_pane_g1_copy3_ParamLimits

0xded6,	// (0x00016d8d) eswt_control_pane_g1_copy3

0xdee3,	// (0x00016d9a) eswt_control_pane_g2_copy3_ParamLimits

0xdee3,	// (0x00016d9a) eswt_control_pane_g2_copy3

0xdef0,	// (0x00016da7) eswt_control_pane_g3_copy3_ParamLimits

0xdef0,	// (0x00016da7) eswt_control_pane_g3_copy3

0xdefd,	// (0x00016db4) eswt_control_pane_g4_copy3_ParamLimits

0xdefd,	// (0x00016db4) eswt_control_pane_g4_copy3

0x7e45,	// (0x00010cfc) common_borders_pane_cp5

0xdf7e,	// (0x00016e35) separator_vertical_pane_g1

0xdf87,	// (0x00016e3e) separator_vertical_pane_g2

0xdf90,	// (0x00016e47) separator_vertical_pane_g3

0x0002,

0xfc37,	// (0x00018aee) separator_vertical_pane_g

0xded6,	// (0x00016d8d) eswt_control_pane_g1_copy4_ParamLimits

0xded6,	// (0x00016d8d) eswt_control_pane_g1_copy4

0xdee3,	// (0x00016d9a) eswt_control_pane_g2_copy4_ParamLimits

0xdee3,	// (0x00016d9a) eswt_control_pane_g2_copy4

0xdef0,	// (0x00016da7) eswt_control_pane_g3_copy4_ParamLimits

0xdef0,	// (0x00016da7) eswt_control_pane_g3_copy4

0xdefd,	// (0x00016db4) eswt_control_pane_g4_copy4_ParamLimits

0xdefd,	// (0x00016db4) eswt_control_pane_g4_copy4

0xdf99,	// (0x00016e50) eswt_ctrl_combo_button_pane

0xdfa1,	// (0x00016e58) eswt_ctrl_input_pane

0xdfa9,	// (0x00016e60) popup_choice_list_window_cp70

0xdfb1,	// (0x00016e68) eswt_ctrl_input_pane_t1

0x7e45,	// (0x00010cfc) input_focus_pane_cp70

0xd387,	// (0x0001623e) bg_button_pane_cp70_ParamLimits

0xd387,	// (0x0001623e) bg_button_pane_cp70

0xdfbf,	// (0x00016e76) eswt_ctrl_combo_button_pane_g1

0xdfc7,	// (0x00016e7e) wait_bar_pane_cp70

0xaadd,	// (0x00013994) bg_popup_window_pane_cp70_ParamLimits

0xaadd,	// (0x00013994) bg_popup_window_pane_cp70

0xdfcf,	// (0x00016e86) popup_eswt_tasktip_window_t1

0xdfe5,	// (0x00016e9c) wait_bar_pane_cp71_ParamLimits

0xdfe5,	// (0x00016e9c) wait_bar_pane_cp71

0xdff1,	// (0x00016ea8) grid_eswt_app_pane

0x9326,	// (0x000121dd) scroll_pane_cp70

0xdffa,	// (0x00016eb1) cell_eswt_app_pane_ParamLimits

0xdffa,	// (0x00016eb1) cell_eswt_app_pane

0xe02e,	// (0x00016ee5) cell_eswt_app_pane_g1_ParamLimits

0xe02e,	// (0x00016ee5) cell_eswt_app_pane_g1

0xe05d,	// (0x00016f14) cell_eswt_app_pane_g2_ParamLimits

0xe05d,	// (0x00016f14) cell_eswt_app_pane_g2

0x0001,

0xfc3e,	// (0x00018af5) cell_eswt_app_pane_g_ParamLimits

0xfc3e,	// (0x00018af5) cell_eswt_app_pane_g

0xe086,	// (0x00016f3d) cell_eswt_app_pane_t1_ParamLimits

0xe086,	// (0x00016f3d) cell_eswt_app_pane_t1

0xe0b8,	// (0x00016f6f) grid_highlight_pane_cp70_ParamLimits

0xe0b8,	// (0x00016f6f) grid_highlight_pane_cp70

0x9a5d,	// (0x00012914) set_content_pane_g1

0x9e26,	// (0x00012cdd) status_small_volume_pane

0x74e4,	// (0x0001039b) status_small_volume_pane_g1

0x74ec,	// (0x000103a3) volume_small2_pane

0x74f5,	// (0x000103ac) volume_small2_pane_g1

0x74fe,	// (0x000103b5) volume_small2_pane_g2

0x7507,	// (0x000103be) volume_small2_pane_g3

0x7510,	// (0x000103c7) volume_small2_pane_g4

0x7519,	// (0x000103d0) volume_small2_pane_g5

0x7522,	// (0x000103d9) volume_small2_pane_g6

0x752b,	// (0x000103e2) volume_small2_pane_g7

0x7534,	// (0x000103eb) volume_small2_pane_g8

0x753d,	// (0x000103f4) volume_small2_pane_g9

0x7546,	// (0x000103fd) volume_small2_pane_g10

0x0009,

0xfc43,	// (0x00018afa) volume_small2_pane_g

0xd785,	// (0x0001663c) fep_vkb_top_text_pane_g1_ParamLimits

0xd7a0,	// (0x00016657) fep_vkb_top_text_pane_t1_ParamLimits

0xda02,	// (0x000168b9) popup_preview_fixed_window_g3_ParamLimits

0xda02,	// (0x000168b9) popup_preview_fixed_window_g3

0xa3ed,	// (0x000132a4) popup_toolbar_trans_pane

0xbe8c,	// (0x00014d43) aid_height_set_list_ParamLimits

0xbe9d,	// (0x00014d54) aid_size_parent_ParamLimits

0x9f04,	// (0x00012dbb) list_highlight_pane_cp2_ParamLimits

0x9a5d,	// (0x00012914) set_content_pane_g1_ParamLimits

0xc15a,	// (0x00015011) list_single_image_pane_ParamLimits

0xc15a,	// (0x00015011) list_single_image_pane

0xe0c4,	// (0x00016f7b) aid_size_cell_image_ParamLimits

0xe0c4,	// (0x00016f7b) aid_size_cell_image

0xe0d1,	// (0x00016f88) grid_single_image_pane_ParamLimits

0xe0d1,	// (0x00016f88) grid_single_image_pane

0x8d38,	// (0x00011bef) list_single_image_pane_g1_ParamLimits

0x8d38,	// (0x00011bef) list_single_image_pane_g1

0x8d44,	// (0x00011bfb) list_single_image_pane_g2_ParamLimits

0x8d44,	// (0x00011bfb) list_single_image_pane_g2

0x0001,

0xfc58,	// (0x00018b0f) list_single_image_pane_g_ParamLimits

0xfc58,	// (0x00018b0f) list_single_image_pane_g

0xe0dd,	// (0x00016f94) list_single_image_pane_t1_ParamLimits

0xe0dd,	// (0x00016f94) list_single_image_pane_t1

0xe0f3,	// (0x00016faa) cell_image_list_pane_ParamLimits

0xe0f3,	// (0x00016faa) cell_image_list_pane

0xe107,	// (0x00016fbe) cell_image_list_pane_g1

0xe110,	// (0x00016fc7) cell_image_list_pane_g2

0x0001,

0xfc5d,	// (0x00018b14) cell_image_list_pane_g

0xe119,	// (0x00016fd0) aid_size_cell_tb_trans_pane

0x8d12,	// (0x00011bc9) bg_tb_trans_pane

0xe12b,	// (0x00016fe2) grid_tb_trans_pane

0xa9c3,	// (0x0001387a) bg_tb_trans_pane_g1

0xa9d3,	// (0x0001388a) bg_tb_trans_pane_g2

0xa9cb,	// (0x00013882) bg_tb_trans_pane_g3

0xa9e3,	// (0x0001389a) bg_tb_trans_pane_g4

0xa9db,	// (0x00013892) bg_tb_trans_pane_g5

0xaa03,	// (0x000138ba) bg_tb_trans_pane_g6

0xa9fb,	// (0x000138b2) bg_tb_trans_pane_g7

0xa9eb,	// (0x000138a2) bg_tb_trans_pane_g8

0xa9f3,	// (0x000138aa) bg_tb_trans_pane_g9

0x0008,

0xfc62,	// (0x00018b19) bg_tb_trans_pane_g

0xe13f,	// (0x00016ff6) cell_toolbar_trans_pane_ParamLimits

0xe13f,	// (0x00016ff6) cell_toolbar_trans_pane

0xd3c2,	// (0x00016279) cell_toolbar_trans_pane_g1

0xcf0e,	// (0x00015dc5) list_form2_midp_pane_t1

0xcf1c,	// (0x00015dd3) list_form2_midp_pane_t2

0x0001,

0xfaff,	// (0x000189b6) list_form2_midp_pane_t

0xcf2a,	// (0x00015de1) scroll_pane_cp51_ParamLimits

0xd12d,	// (0x00015fe4) form2_midp_wait_pane_g1

0xd136,	// (0x00015fed) form2_midp_wait_pane_g2

0xd13f,	// (0x00015ff6) form2_midp_wait_pane_g3

0x0002,

0xfb14,	// (0x000189cb) form2_midp_wait_pane_g

0x7f39,	// (0x00010df0) list_highlight_pane_cp21_ParamLimits

0xd18e,	// (0x00016045) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xd19d,	// (0x00016054) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc0c6,	// (0x00014f7d) list_single_2graphic_im_pane_ParamLimits

0xc0c6,	// (0x00014f7d) list_single_2graphic_im_pane

0xe165,	// (0x0001701c) list_single_2graphic_im_pane_g1_ParamLimits

0xe165,	// (0x0001701c) list_single_2graphic_im_pane_g1

0xe176,	// (0x0001702d) list_single_2graphic_im_pane_g2_ParamLimits

0xe176,	// (0x0001702d) list_single_2graphic_im_pane_g2

0xe182,	// (0x00017039) list_single_2graphic_im_pane_g3_ParamLimits

0xe182,	// (0x00017039) list_single_2graphic_im_pane_g3

0x0003,

0xfc75,	// (0x00018b2c) list_single_2graphic_im_pane_g_ParamLimits

0xfc75,	// (0x00018b2c) list_single_2graphic_im_pane_g

0xe1a2,	// (0x00017059) list_single_2graphic_im_pane_t1_ParamLimits

0xe1a2,	// (0x00017059) list_single_2graphic_im_pane_t1

0xda0e,	// (0x000168c5) list_single_graphic_2heading_pane_fp_ParamLimits

0xda0e,	// (0x000168c5) list_single_graphic_2heading_pane_fp

0xda54,	// (0x0001690b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xda54,	// (0x0001690b) list_single_graphic_2heading_pane_fp_g1

0xda25,	// (0x000168dc) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xda25,	// (0x000168dc) list_single_graphic_2heading_pane_fp_g2

0x8d38,	// (0x00011bef) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8d38,	// (0x00011bef) list_single_graphic_2heading_pane_fp_g3

0x8d44,	// (0x00011bfb) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8d44,	// (0x00011bfb) list_single_graphic_2heading_pane_fp_g4

0xda31,	// (0x000168e8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xda31,	// (0x000168e8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9c,	// (0x00018a53) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9c,	// (0x00018a53) list_single_graphic_2heading_pane_fp_g

0xe1d3,	// (0x0001708a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe1d3,	// (0x0001708a) list_single_graphic_2heading_pane_fp_t1

0xda8c,	// (0x00016943) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xda8c,	// (0x00016943) list_single_graphic_2heading_pane_fp_t2

0xe1e9,	// (0x000170a0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe1e9,	// (0x000170a0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7e,	// (0x00018b35) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7e,	// (0x00018b35) list_single_graphic_2heading_pane_fp_t

0xd444,	// (0x000162fb) fep_hwr_write_pane_g5_ParamLimits

0xd444,	// (0x000162fb) fep_hwr_write_pane_g5

0xd450,	// (0x00016307) fep_hwr_write_pane_g6_ParamLimits

0xd450,	// (0x00016307) fep_hwr_write_pane_g6

0xdea5,	// (0x00016d5c) eswt_shell_pane_ParamLimits

0xaadd,	// (0x00013994) bg_popup_window_pane_cp18_ParamLimits

0xbdc3,	// (0x00014c7a) heading_pane_cp70

0xdfcf,	// (0x00016e86) popup_eswt_tasktip_window_t1_ParamLimits

0xa50a,	// (0x000133c1) aid_touch_tab_arrow_left

0xa519,	// (0x000133d0) aid_touch_tab_arrow_right

0x7e81,	// (0x00010d38) title_pane_g3_ParamLimits

0x7e81,	// (0x00010d38) title_pane_g3

0x8bff,	// (0x00011ab6) set_value_pane_g1

0xa3ed,	// (0x000132a4) popup_toolbar_trans_pane_ParamLimits

0xe119,	// (0x00016fd0) aid_size_cell_tb_trans_pane_ParamLimits

0x8d12,	// (0x00011bc9) bg_tb_trans_pane_ParamLimits

0xe12b,	// (0x00016fe2) grid_tb_trans_pane_ParamLimits

0x81dc,	// (0x00011093) cont_note_pane_ParamLimits

0x81dc,	// (0x00011093) cont_note_pane

0x8517,	// (0x000113ce) cont_snote2_single_text_pane_ParamLimits

0x8517,	// (0x000113ce) cont_snote2_single_text_pane

0x8517,	// (0x000113ce) cont_snote2_single_graphic_pane_ParamLimits

0x8517,	// (0x000113ce) cont_snote2_single_graphic_pane

0xb11a,	// (0x00013fd1) cont_note_wait_pane_ParamLimits

0xb11a,	// (0x00013fd1) cont_note_wait_pane

0xb11a,	// (0x00013fd1) cont_note_image_pane_ParamLimits

0xb11a,	// (0x00013fd1) cont_note_image_pane

0xe1ff,	// (0x000170b6) popup_note2_window_g1_ParamLimits

0xe1ff,	// (0x000170b6) popup_note2_window_g1

0xe230,	// (0x000170e7) popup_note2_window_t1_ParamLimits

0xe230,	// (0x000170e7) popup_note2_window_t1

0xe275,	// (0x0001712c) popup_note2_window_t2_ParamLimits

0xe275,	// (0x0001712c) popup_note2_window_t2

0xe2ba,	// (0x00017171) popup_note2_window_t3_ParamLimits

0xe2ba,	// (0x00017171) popup_note2_window_t3

0xe2ff,	// (0x000171b6) popup_note2_window_t4_ParamLimits

0xe2ff,	// (0x000171b6) popup_note2_window_t4

0x8254,	// (0x0001110b) popup_note2_window_t5_ParamLimits

0x8254,	// (0x0001110b) popup_note2_window_t5

0x0004,

0xfc8a,	// (0x00018b41) popup_note2_window_t_ParamLimits

0xfc8a,	// (0x00018b41) popup_note2_window_t

0xe32e,	// (0x000171e5) popup_note2_image_window_g1_ParamLimits

0xe32e,	// (0x000171e5) popup_note2_image_window_g1

0xe33a,	// (0x000171f1) popup_note2_image_window_g2_ParamLimits

0xe33a,	// (0x000171f1) popup_note2_image_window_g2

0x0001,

0xfc95,	// (0x00018b4c) popup_note2_image_window_g_ParamLimits

0xfc95,	// (0x00018b4c) popup_note2_image_window_g

0xe34c,	// (0x00017203) popup_note2_image_window_t1_ParamLimits

0xe34c,	// (0x00017203) popup_note2_image_window_t1

0xe364,	// (0x0001721b) popup_note2_image_window_t2_ParamLimits

0xe364,	// (0x0001721b) popup_note2_image_window_t2

0xe37c,	// (0x00017233) popup_note2_image_window_t3_ParamLimits

0xe37c,	// (0x00017233) popup_note2_image_window_t3

0x0002,

0xfc9a,	// (0x00018b51) popup_note2_image_window_t_ParamLimits

0xfc9a,	// (0x00018b51) popup_note2_image_window_t

0xb128,	// (0x00013fdf) popup_note2_wait_window_g1_ParamLimits

0xb128,	// (0x00013fdf) popup_note2_wait_window_g1

0xb134,	// (0x00013feb) popup_note2_wait_window_g2_ParamLimits

0xb134,	// (0x00013feb) popup_note2_wait_window_g2

0xb140,	// (0x00013ff7) popup_note2_wait_window_g3_ParamLimits

0xb140,	// (0x00013ff7) popup_note2_wait_window_g3

0x0002,

0xf854,	// (0x0001870b) popup_note2_wait_window_g_ParamLimits

0xf854,	// (0x0001870b) popup_note2_wait_window_g

0xe398,	// (0x0001724f) popup_note2_wait_window_t1_ParamLimits

0xe398,	// (0x0001724f) popup_note2_wait_window_t1

0xe3b6,	// (0x0001726d) popup_note2_wait_window_t2_ParamLimits

0xe3b6,	// (0x0001726d) popup_note2_wait_window_t2

0xe3d4,	// (0x0001728b) popup_note2_wait_window_t3_ParamLimits

0xe3d4,	// (0x0001728b) popup_note2_wait_window_t3

0xe3e6,	// (0x0001729d) popup_note2_wait_window_t4_ParamLimits

0xe3e6,	// (0x0001729d) popup_note2_wait_window_t4

0x0003,

0xfca1,	// (0x00018b58) popup_note2_wait_window_t_ParamLimits

0xfca1,	// (0x00018b58) popup_note2_wait_window_t

0xe3f8,	// (0x000172af) wait_bar2_pane_ParamLimits

0xe3f8,	// (0x000172af) wait_bar2_pane

0xe410,	// (0x000172c7) popup_snote2_single_text_window_g1_ParamLimits

0xe410,	// (0x000172c7) popup_snote2_single_text_window_g1

0xe438,	// (0x000172ef) popup_snote2_single_text_window_t1_ParamLimits

0xe438,	// (0x000172ef) popup_snote2_single_text_window_t1

0xe484,	// (0x0001733b) popup_snote2_single_text_window_t2_ParamLimits

0xe484,	// (0x0001733b) popup_snote2_single_text_window_t2

0xe4d0,	// (0x00017387) popup_snote2_single_text_window_t3_ParamLimits

0xe4d0,	// (0x00017387) popup_snote2_single_text_window_t3

0xe511,	// (0x000173c8) popup_snote2_single_text_window_t4_ParamLimits

0xe511,	// (0x000173c8) popup_snote2_single_text_window_t4

0xe547,	// (0x000173fe) popup_snote2_single_text_window_t5_ParamLimits

0xe547,	// (0x000173fe) popup_snote2_single_text_window_t5

0x0004,

0xfcaa,	// (0x00018b61) popup_snote2_single_text_window_t_ParamLimits

0xfcaa,	// (0x00018b61) popup_snote2_single_text_window_t

0xe572,	// (0x00017429) popup_snote2_single_graphic_window_g1_ParamLimits

0xe572,	// (0x00017429) popup_snote2_single_graphic_window_g1

0xe59a,	// (0x00017451) popup_snote2_single_graphic_window_g2_ParamLimits

0xe59a,	// (0x00017451) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb5,	// (0x00018b6c) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb5,	// (0x00018b6c) popup_snote2_single_graphic_window_g

0xe5c2,	// (0x00017479) popup_snote2_single_graphic_window_t1_ParamLimits

0xe5c2,	// (0x00017479) popup_snote2_single_graphic_window_t1

0xe60e,	// (0x000174c5) popup_snote2_single_graphic_window_t2_ParamLimits

0xe60e,	// (0x000174c5) popup_snote2_single_graphic_window_t2

0xe4d0,	// (0x00017387) popup_snote2_single_graphic_window_t3_ParamLimits

0xe4d0,	// (0x00017387) popup_snote2_single_graphic_window_t3

0xe511,	// (0x000173c8) popup_snote2_single_graphic_window_t4_ParamLimits

0xe511,	// (0x000173c8) popup_snote2_single_graphic_window_t4

0xe547,	// (0x000173fe) popup_snote2_single_graphic_window_t5_ParamLimits

0xe547,	// (0x000173fe) popup_snote2_single_graphic_window_t5

0x0004,

0xfcba,	// (0x00018b71) popup_snote2_single_graphic_window_t_ParamLimits

0xfcba,	// (0x00018b71) popup_snote2_single_graphic_window_t

0xcde3,	// (0x00015c9a) clock_nsta_pane_cp2_t1

0xcde3,	// (0x00015c9a) clock_nsta_pane_cp2_t2

0x0001,

0xfad5,	// (0x0001898c) clock_nsta_pane_cp2_t

0x8d2c,	// (0x00011be3) form_field_data_wide_pane_g1_ParamLimits

0x8d38,	// (0x00011bef) form_field_data_wide_pane_g2_ParamLimits

0x8d38,	// (0x00011bef) form_field_data_wide_pane_g2

0x8d44,	// (0x00011bfb) form_field_data_wide_pane_g3_ParamLimits

0x8d44,	// (0x00011bfb) form_field_data_wide_pane_g3

0x0002,

0xf68e,	// (0x00018545) form_field_data_wide_pane_g_ParamLimits

0xf68e,	// (0x00018545) form_field_data_wide_pane_g

0xccbc,	// (0x00015b73) grid_touch_3_pane_ParamLimits

0xccbc,	// (0x00015b73) grid_touch_3_pane

0xe65a,	// (0x00017511) cell_touch_3_pane_ParamLimits

0xe65a,	// (0x00017511) cell_touch_3_pane

0xd3c2,	// (0x00016279) cell_touch_3_pane_g1

0xd3c2,	// (0x00016279) cell_touch_3_pane_g2

0x0001,

0xfb5a,	// (0x00018a11) cell_touch_3_pane_g

0x8286,	// (0x0001113d) cont_query_data_pane

0x828e,	// (0x00011145) cont_query_data_pane_cp1

0xe689,	// (0x00017540) button_value_adjust_pane_cp7

0xe691,	// (0x00017548) query_popup_pane_cp3

0x95dc,	// (0x00012493) bg_popup_sub_pane_cp22_ParamLimits

0x686e,	// (0x0000f725) navi_navi_volume_pane_cp2

0x6889,	// (0x0000f740) popup_side_volume_key_window_g2

0x6898,	// (0x0000f74f) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x000185db) popup_side_volume_key_window_g

0x68b5,	// (0x0000f76c) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x000185e2) popup_side_volume_key_window_t

0x9927,	// (0x000127de) popup_side_volume_key_window_ParamLimits

0x892a,	// (0x000117e1) list_double_graphic_pane_g4_ParamLimits

0x892a,	// (0x000117e1) list_double_graphic_pane_g4

0xc111,	// (0x00014fc8) list_single_2heading_msg_pane_ParamLimits

0xc111,	// (0x00014fc8) list_single_2heading_msg_pane

0xe6c0,	// (0x00017577) list_single_2heading_msg_pane_g1_ParamLimits

0xe6c0,	// (0x00017577) list_single_2heading_msg_pane_g1

0x8759,	// (0x00011610) list_single_2heading_msg_pane_g2_ParamLimits

0x8759,	// (0x00011610) list_single_2heading_msg_pane_g2

0xe6cc,	// (0x00017583) list_single_2heading_msg_pane_g3_ParamLimits

0xe6cc,	// (0x00017583) list_single_2heading_msg_pane_g3

0xe6d8,	// (0x0001758f) list_single_2heading_msg_pane_g4_ParamLimits

0xe6d8,	// (0x0001758f) list_single_2heading_msg_pane_g4

0x0003,

0xfcc5,	// (0x00018b7c) list_single_2heading_msg_pane_g_ParamLimits

0xfcc5,	// (0x00018b7c) list_single_2heading_msg_pane_g

0xe6f0,	// (0x000175a7) list_single_2heading_msg_pane_t1_ParamLimits

0xe6f0,	// (0x000175a7) list_single_2heading_msg_pane_t1

0xe718,	// (0x000175cf) list_single_2heading_msg_pane_t2_ParamLimits

0xe718,	// (0x000175cf) list_single_2heading_msg_pane_t2

0xe74c,	// (0x00017603) list_single_2heading_msg_pane_t3_ParamLimits

0xe74c,	// (0x00017603) list_single_2heading_msg_pane_t3

0xe785,	// (0x0001763c) list_single_2heading_msg_pane_t4_ParamLimits

0xe785,	// (0x0001763c) list_single_2heading_msg_pane_t4

0x0003,

0xfcce,	// (0x00018b85) list_single_2heading_msg_pane_t_ParamLimits

0xfcce,	// (0x00018b85) list_single_2heading_msg_pane_t

0x7e8d,	// (0x00010d44) title_pane_g4_ParamLimits

0x7e8d,	// (0x00010d44) title_pane_g4

0x667c,	// (0x0000f533) title_pane_stacon_g3_ParamLimits

0x667c,	// (0x0000f533) title_pane_stacon_g3

0xe196,	// (0x0001704d) list_single_2graphic_im_pane_g4_ParamLimits

0xe196,	// (0x0001704d) list_single_2graphic_im_pane_g4

0xbb69,	// (0x00014a20) popup_side_volume_key_window_cp

0xc48c,	// (0x00015343) main_idle_act2_pane_t1

0x6c93,	// (0x0000fb4a) toolbar_button_pane_g10

0x870f,	// (0x000115c6) popup_toolbar_window_cp1

0xcdd4,	// (0x00015c8b) clock_nsta_pane_cp_t1

0xcdd4,	// (0x00015c8b) clock_nsta_pane_cp_t2

0x0001,

0xfad0,	// (0x00018987) clock_nsta_pane_cp_t

0x686e,	// (0x0000f725) navi_navi_volume_pane_cp2_ParamLimits

0x687d,	// (0x0000f734) popup_side_volume_key_window_g1_ParamLimits

0x6889,	// (0x0000f740) popup_side_volume_key_window_g2_ParamLimits

0x6898,	// (0x0000f74f) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x000185db) popup_side_volume_key_window_g_ParamLimits

0x7150,	// (0x00010007) fep_hwr_aid_pane

0x71f7,	// (0x000100ae) bg_fep_hwr_top_pane_g4_ParamLimits

0xd414,	// (0x000162cb) fep_hwr_top_pane_g1_ParamLimits

0xd426,	// (0x000162dd) fep_hwr_top_pane_g2_ParamLimits

0x7217,	// (0x000100ce) fep_hwr_top_pane_g3_ParamLimits

0xfb25,	// (0x000189dc) fep_hwr_top_pane_g_ParamLimits

0x722c,	// (0x000100e3) fep_hwr_top_text_pane_ParamLimits

0xb92a,	// (0x000147e1) aid_touch_tab_arrow_arrow_2

0xb933,	// (0x000147ea) aid_touch_tab_arrow_left_2

0x7164,	// (0x0001001b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x719b,	// (0x00010052) fep_hwr_prediction_pane

0xd58d,	// (0x00016444) fep_vkb_prediction_pane

0xd691,	// (0x00016548) fep_vkb_side_pane_g3_ParamLimits

0xd691,	// (0x00016548) fep_vkb_side_pane_g3

0x73a7,	// (0x0001025e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7413,	// (0x000102ca) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7420,	// (0x000102d7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd4,	// (0x00018a8b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x754f,	// (0x00010406) fep_hwr_prediction_pane_g1

0x7559,	// (0x00010410) fep_hwr_prediction_pane_g2

0x7561,	// (0x00010418) fep_hwr_prediction_pane_g3

0x7569,	// (0x00010420) fep_hwr_prediction_pane_g4

0x0003,

0xfcd7,	// (0x00018b8e) fep_hwr_prediction_pane_g

0xe7aa,	// (0x00017661) fep_vkb_prediction_pane_g1

0xe7b4,	// (0x0001766b) fep_vkb_prediction_pane_g2

0xe7bc,	// (0x00017673) fep_vkb_prediction_pane_g3

0xe7c4,	// (0x0001767b) fep_vkb_prediction_pane_g4

0x0003,

0xfce0,	// (0x00018b97) fep_vkb_prediction_pane_g

0x6f7f,	// (0x0000fe36) slider_set_pane_g3

0x6f93,	// (0x0000fe4a) slider_set_pane_g4

0x6fab,	// (0x0000fe62) slider_set_pane_g5

0x6f7f,	// (0x0000fe36) slider_set_pane_g6

0x6fc1,	// (0x0000fe78) slider_set_pane_g7

0xbffa,	// (0x00014eb1) slider_form_pane_g3

0xc003,	// (0x00014eba) slider_form_pane_g4

0xc00b,	// (0x00014ec2) slider_form_pane_g5

0xbffa,	// (0x00014eb1) slider_form_pane_g6

0xc013,	// (0x00014eca) slider_form_pane_g7

0xc778,	// (0x0001562f) slider_set_pane_vc_g3

0xc781,	// (0x00015638) slider_set_pane_vc_g4

0xc78a,	// (0x00015641) slider_set_pane_vc_g5

0xc778,	// (0x0001562f) slider_set_pane_vc_g6

0xc793,	// (0x0001564a) slider_set_pane_vc_g7

0xc778,	// (0x0001562f) slider_form_pane_vc_g1

0xc781,	// (0x00015638) slider_form_pane_vc_g2

0xc78a,	// (0x00015641) slider_form_pane_vc_g3

0xc778,	// (0x0001562f) slider_form_pane_vc_g4

0xcada,	// (0x00015991) slider_form_pane_vc_g5

0x0004,

0xfaa9,	// (0x00018960) slider_form_pane_vc_g

0x7e45,	// (0x00010cfc) main_idle_act3_pane

0xe7cc,	// (0x00017683) ai3_links_pane

0xe7d5,	// (0x0001768c) popup_ai3_data_window_ParamLimits

0xe7d5,	// (0x0001768c) popup_ai3_data_window

0x7e45,	// (0x00010cfc) grid_ai3_links_pane

0xe7ed,	// (0x000176a4) cell_ai3_links_pane_ParamLimits

0xe7ed,	// (0x000176a4) cell_ai3_links_pane

0xe805,	// (0x000176bc) bg_popup_sub_pane_cp11

0xe812,	// (0x000176c9) cell_ai3_links_pane_g1

0x7e45,	// (0x00010cfc) bg_popup_sub_pane_cp12

0xe837,	// (0x000176ee) heading_ai3_data_pane

0xe83f,	// (0x000176f6) list_ai3_gene_pane

0xe84b,	// (0x00017702) popup_ai3_data_window_g1

0xe853,	// (0x0001770a) heading_ai3_data_pane_g1

0xe85b,	// (0x00017712) heading_ai3_data_pane_t1

0xe869,	// (0x00017720) list_double_ai3_gene_pane_ParamLimits

0xe869,	// (0x00017720) list_double_ai3_gene_pane

0xe876,	// (0x0001772d) list_single_ai3_gene_pane_ParamLimits

0xe876,	// (0x0001772d) list_single_ai3_gene_pane

0xd387,	// (0x0001623e) list_highlight_pane_cp7_ParamLimits

0xd387,	// (0x0001623e) list_highlight_pane_cp7

0xe883,	// (0x0001773a) list_single_a13_gene_pane_t1_ParamLimits

0xe883,	// (0x0001773a) list_single_a13_gene_pane_t1

0xe89a,	// (0x00017751) list_single_ai3_gene_pane_g1

0xe8a3,	// (0x0001775a) list_single_ai3_gene_pane_g2

0x0001,

0xfce9,	// (0x00018ba0) list_single_ai3_gene_pane_g

0xe8ab,	// (0x00017762) list_double_ai3_gene_pane_g1_ParamLimits

0xe8ab,	// (0x00017762) list_double_ai3_gene_pane_g1

0xe8b7,	// (0x0001776e) list_double_ai3_gene_pane_t1_ParamLimits

0xe8b7,	// (0x0001776e) list_double_ai3_gene_pane_t1

0xe8d3,	// (0x0001778a) list_double_ai3_gene_pane_t2_ParamLimits

0xe8d3,	// (0x0001778a) list_double_ai3_gene_pane_t2

0xe8e8,	// (0x0001779f) list_double_ai3_gene_pane_t3_ParamLimits

0xe8e8,	// (0x0001779f) list_double_ai3_gene_pane_t3

0x0002,

0xfcee,	// (0x00018ba5) list_double_ai3_gene_pane_t_ParamLimits

0xfcee,	// (0x00018ba5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe6a2,	// (0x00017559) aid_size_min_col_2

0xe6ac,	// (0x00017563) aid_size_min_msg_ParamLimits

0xe6ac,	// (0x00017563) aid_size_min_msg

0xd791,	// (0x00016648) fep_vkb_top_text_pane_g2_ParamLimits

0xd791,	// (0x00016648) fep_vkb_top_text_pane_g2

0x0001,

0xfb55,	// (0x00018a0c) fep_vkb_top_text_pane_g_ParamLimits

0xfb55,	// (0x00018a0c) fep_vkb_top_text_pane_g

0x7e45,	// (0x00010cfc) main_hc_apps_shell_pane

0xe905,	// (0x000177bc) grid_hc_apps_pane_ParamLimits

0xe905,	// (0x000177bc) grid_hc_apps_pane

0xe914,	// (0x000177cb) list_hc_apps_pane

0xe91c,	// (0x000177d3) scroll_pane_cp37_ParamLimits

0xe91c,	// (0x000177d3) scroll_pane_cp37

0xe928,	// (0x000177df) cell_hc_apps_pane_ParamLimits

0xe928,	// (0x000177df) cell_hc_apps_pane

0xe9d8,	// (0x0001788f) cell_hc_apps_pane_g1_ParamLimits

0xe9d8,	// (0x0001788f) cell_hc_apps_pane_g1

0xea09,	// (0x000178c0) cell_hc_apps_pane_g2_ParamLimits

0xea09,	// (0x000178c0) cell_hc_apps_pane_g2

0xea25,	// (0x000178dc) cell_hc_apps_pane_g3_ParamLimits

0xea25,	// (0x000178dc) cell_hc_apps_pane_g3

0x0002,

0xfcf5,	// (0x00018bac) cell_hc_apps_pane_g_ParamLimits

0xfcf5,	// (0x00018bac) cell_hc_apps_pane_g

0xea47,	// (0x000178fe) cell_hc_apps_pane_t1_ParamLimits

0xea47,	// (0x000178fe) cell_hc_apps_pane_t1

0x81dc,	// (0x00011093) grid_highlight_pane_cp10_ParamLimits

0x81dc,	// (0x00011093) grid_highlight_pane_cp10

0xea87,	// (0x0001793e) list_single_hc_apps_pane_ParamLimits

0xea87,	// (0x0001793e) list_single_hc_apps_pane

0xeafa,	// (0x000179b1) list_single_hc_apps_pane_g1

0xeb13,	// (0x000179ca) list_single_hc_apps_pane_g2

0x0001,

0xfcfc,	// (0x00018bb3) list_single_hc_apps_pane_g

0xeb2c,	// (0x000179e3) list_single_hc_apps_pane_g2_copy1

0xeb48,	// (0x000179ff) list_single_hc_apps_pane_t1

0x7f39,	// (0x00010df0) bg_set_opt_pane_cp_ParamLimits

0x65a7,	// (0x0000f45e) setting_slider_pane_t1_ParamLimits

0x65c0,	// (0x0000f477) setting_slider_pane_t2_ParamLimits

0x65d9,	// (0x0000f490) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0001842d) setting_slider_pane_t_ParamLimits

0x65f0,	// (0x0000f4a7) slider_set_pane_ParamLimits

0x6b13,	// (0x0000f9ca) control_pane_g5_ParamLimits

0x6b13,	// (0x0000f9ca) control_pane_g5

0xbe57,	// (0x00014d0e) slider_set_pane_g1_ParamLimits

0x6f73,	// (0x0000fe2a) slider_set_pane_g2_ParamLimits

0x6f7f,	// (0x0000fe36) slider_set_pane_g3_ParamLimits

0x6f93,	// (0x0000fe4a) slider_set_pane_g4_ParamLimits

0x6fab,	// (0x0000fe62) slider_set_pane_g5_ParamLimits

0x6f7f,	// (0x0000fe36) slider_set_pane_g6_ParamLimits

0x6fc1,	// (0x0000fe78) slider_set_pane_g7_ParamLimits

0xf970,	// (0x00018827) slider_set_pane_g_ParamLimits

0x9a08,	// (0x000128bf) navi_icon_text_pane_ParamLimits

0xa4cb,	// (0x00013382) aid_fill_nsta_2_ParamLimits

0xa50a,	// (0x000133c1) aid_touch_tab_arrow_left_ParamLimits

0xa519,	// (0x000133d0) aid_touch_tab_arrow_right_ParamLimits

0xa586,	// (0x0001343d) clock_nsta_pane_ParamLimits

0xb90c,	// (0x000147c3) navi_icon_pane_g1_ParamLimits

0xb918,	// (0x000147cf) navi_text_pane_t1_ParamLimits

0xcee8,	// (0x00015d9f) navi_icon_text_pane_g1_ParamLimits

0xcef4,	// (0x00015dab) navi_icon_text_pane_t1_ParamLimits

0xeafa,	// (0x000179b1) list_single_hc_apps_pane_g1_ParamLimits

0xeb13,	// (0x000179ca) list_single_hc_apps_pane_g2_ParamLimits

0xfcfc,	// (0x00018bb3) list_single_hc_apps_pane_g_ParamLimits

0xeb2c,	// (0x000179e3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xeb48,	// (0x000179ff) list_single_hc_apps_pane_t1_ParamLimits

0x64c1,	// (0x0000f378) popup_toolbar2_fixed_window_ParamLimits

0x64c1,	// (0x0000f378) popup_toolbar2_fixed_window

0xa3e3,	// (0x0001329a) popup_toolbar2_float_window

0x7e45,	// (0x00010cfc) bg_popup_sub_pane_cp27

0xeb76,	// (0x00017a2d) grid_toolbar2_float_pane

0x7e45,	// (0x00010cfc) bg_popup_sub_pane_cp26

0xeb76,	// (0x00017a2d) grid_toolbar2_fixed_pane

0xeb7e,	// (0x00017a35) cell_toolbar2_fixed_pane_ParamLimits

0xeb7e,	// (0x00017a35) cell_toolbar2_fixed_pane

0xeb8f,	// (0x00017a46) cell_toolbar2_fixed_pane_g1

0xeb98,	// (0x00017a4f) toolbar2_fixed_button_pane

0xa9c3,	// (0x0001387a) toolbar2_fixed_button_pane_g1

0xa9d3,	// (0x0001388a) toolbar2_fixed_button_pane_g2

0xa9cb,	// (0x00013882) toolbar2_fixed_button_pane_g3

0xa9e3,	// (0x0001389a) toolbar2_fixed_button_pane_g4

0xa9db,	// (0x00013892) toolbar2_fixed_button_pane_g5

0xa9eb,	// (0x000138a2) toolbar2_fixed_button_pane_g6

0xa9f3,	// (0x000138aa) toolbar2_fixed_button_pane_g7

0xaa03,	// (0x000138ba) toolbar2_fixed_button_pane_g8

0xa9fb,	// (0x000138b2) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x00018729) toolbar2_fixed_button_pane_g

0xeba0,	// (0x00017a57) cell_toolbar2_float_pane_ParamLimits

0xeba0,	// (0x00017a57) cell_toolbar2_float_pane

0xebb1,	// (0x00017a68) cell_toolbar2_float_pane_g1

0xeb98,	// (0x00017a4f) toolbar2_fixed_button_pane_cp

0xd4e6,	// (0x0001639d) fep_vkb_accented_list_pane_ParamLimits

0xd4e6,	// (0x0001639d) fep_vkb_accented_list_pane

0x7387,	// (0x0001023e) bg_popup_fep_shadow_pane_g9

0x9b8a,	// (0x00012a41) bg_popup_fep_shadow_pane_cp3

0x8ff0,	// (0x00011ea7) list_accented_list_pane

0xebba,	// (0x00017a71) list_single_accented_list_pane_ParamLimits

0xebba,	// (0x00017a71) list_single_accented_list_pane

0x9b8a,	// (0x00012a41) list_highlight_pane_cp10

0xebcb,	// (0x00017a82) list_single_accented_list_pane_t1

0xa333,	// (0x000131ea) popup_slider_window_ParamLimits

0xa333,	// (0x000131ea) popup_slider_window

0xe699,	// (0x00017550) aid_indentation_list_msg

0xec85,	// (0x00017b3c) bg_popup_window_pane_cp19

0xecef,	// (0x00017ba6) popup_slider_window_g1

0xed0b,	// (0x00017bc2) popup_slider_window_g2

0xed27,	// (0x00017bde) popup_slider_window_g3

0x0005,

0xfd01,	// (0x00018bb8) popup_slider_window_g

0xed83,	// (0x00017c3a) popup_slider_window_t1

0xedf7,	// (0x00017cae) small_volume_slider_vertical_pane

0xd3c2,	// (0x00016279) small_volume_slider_vertical_pane_g1

0xd3c2,	// (0x00016279) small_volume_slider_vertical_pane_g2

0xee13,	// (0x00017cca) small_volume_slider_vertical_pane_g3

0x0002,

0xfd13,	// (0x00018bca) small_volume_slider_vertical_pane_g

0x6287,	// (0x0000f13e) area_side_right_pane_ParamLimits

0x6287,	// (0x0000f13e) area_side_right_pane

0x7571,	// (0x00010428) aid_size_side_button_ParamLimits

0x7571,	// (0x00010428) aid_size_side_button

0x7585,	// (0x0001043c) grid_sctrl_middle_pane_ParamLimits

0x7585,	// (0x0001043c) grid_sctrl_middle_pane

0x75a5,	// (0x0001045c) sctrl_sk_bottom_pane

0x75b6,	// (0x0001046d) sctrl_sk_top_pane

0x75c8,	// (0x0001047f) aid_touch_sctrl_top

0x75d5,	// (0x0001048c) bg_sctrl_sk_pane_ParamLimits

0x75d5,	// (0x0001048c) bg_sctrl_sk_pane

0x75e3,	// (0x0001049a) sctrl_sk_top_pane_g1

0x75f0,	// (0x000104a7) sctrl_sk_top_pane_t1

0x75c8,	// (0x0001047f) aid_touch_sctrl_bottom

0x75d5,	// (0x0001048c) bg_sctrl_sk_pane_cp_ParamLimits

0x75d5,	// (0x0001048c) bg_sctrl_sk_pane_cp

0x760b,	// (0x000104c2) sctrl_sk_bottom_pane_g1

0x75f0,	// (0x000104a7) sctrl_sk_bottom_pane_t1

0x7614,	// (0x000104cb) cell_sctrl_middle_pane_ParamLimits

0x7614,	// (0x000104cb) cell_sctrl_middle_pane

0x762f,	// (0x000104e6) aid_touch_sctrl_middle_ParamLimits

0x762f,	// (0x000104e6) aid_touch_sctrl_middle

0x7641,	// (0x000104f8) bg_sctrl_middle_pane_ParamLimits

0x7641,	// (0x000104f8) bg_sctrl_middle_pane

0x73a7,	// (0x0001025e) cell_sctrl_middle_pane_g1_ParamLimits

0x73a7,	// (0x0001025e) cell_sctrl_middle_pane_g1

0x764f,	// (0x00010506) cell_sctrl_middle_pane_g2_ParamLimits

0x764f,	// (0x00010506) cell_sctrl_middle_pane_g2

0x0001,

0xfd1f,	// (0x00018bd6) cell_sctrl_middle_pane_g_ParamLimits

0xfd1f,	// (0x00018bd6) cell_sctrl_middle_pane_g

0xa9c3,	// (0x0001387a) bg_sctrl_middle_pane_g1

0xa9cb,	// (0x00013882) bg_sctrl_middle_pane_g2

0xa9d3,	// (0x0001388a) bg_sctrl_middle_pane_g3

0xa9db,	// (0x00013892) bg_sctrl_middle_pane_g4

0xa9e3,	// (0x0001389a) bg_sctrl_middle_pane_g5

0xa9eb,	// (0x000138a2) bg_sctrl_middle_pane_g6

0xa9f3,	// (0x000138aa) bg_sctrl_middle_pane_g7

0xa9fb,	// (0x000138b2) bg_sctrl_middle_pane_g8

0x0007,

0xfd24,	// (0x00018bdb) bg_sctrl_middle_pane_g

0xaa03,	// (0x000138ba) bg_sctrl_middle_pane_g8_copy1

0xa9c3,	// (0x0001387a) bg_sctrl_sk_pane_g1

0xa9d3,	// (0x0001388a) bg_sctrl_sk_pane_g2

0xa9cb,	// (0x00013882) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x00018729) bg_sctrl_sk_pane_g

0x86d5,	// (0x0001158c) aid_size_touch_scroll_bar

0xa9e3,	// (0x0001389a) bg_sctrl_sk_pane_g4

0xa9db,	// (0x00013892) bg_sctrl_sk_pane_g5

0xa9eb,	// (0x000138a2) bg_sctrl_sk_pane_g6

0xa9f3,	// (0x000138aa) bg_sctrl_sk_pane_g7

0xaa03,	// (0x000138ba) bg_sctrl_sk_pane_g8

0xa9fb,	// (0x000138b2) bg_sctrl_sk_pane_g9

0x9fac,	// (0x00012e63) popup_fep_china_hwr2_fs_candidate_window

0x9fb6,	// (0x00012e6d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9fb6,	// (0x00012e6d) popup_fep_china_hwr2_fs_control_window

0x73a7,	// (0x0001025e) sctrl_sk_top_pane_g2

0x0001,

0xfd1a,	// (0x00018bd1) sctrl_sk_top_pane_g

0xee1c,	// (0x00017cd3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xee1c,	// (0x00017cd3) aid_fep_china_hwr2_fs_cell

0xee2e,	// (0x00017ce5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xee2e,	// (0x00017ce5) bg_popup_fep_shadow_pane_cp4

0xee45,	// (0x00017cfc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xee45,	// (0x00017cfc) bg_popup_fep_shadow_pane_cp5

0xee57,	// (0x00017d0e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xee57,	// (0x00017d0e) popup_fep_china_hwr2_fs_control_bar_grid

0xee67,	// (0x00017d1e) popup_fep_china_hwr2_fs_control_funtion_grid

0xee6f,	// (0x00017d26) aid_fep_china_hwr2_fs_candi_cell

0x7e45,	// (0x00010cfc) bg_popup_fep_shadow_pane_cp6

0xee79,	// (0x00017d30) popup_fep_china_hwr2_fs_candidate_grid

0xee83,	// (0x00017d3a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xee83,	// (0x00017d3a) cell_fep_china_hwr2_fs_funtion_grid

0xd3c2,	// (0x00016279) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xee9b,	// (0x00017d52) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xee9b,	// (0x00017d52) cell_fep_china_hwr2_fs_funtion_grid_g1

0xeea9,	// (0x00017d60) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xeea9,	// (0x00017d60) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd35,	// (0x00018bec) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd35,	// (0x00018bec) cell_fep_china_hwr2_fs_funtion_grid_g

0xeebf,	// (0x00017d76) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xeebf,	// (0x00017d76) cell_fep_china_hwr2_fs_funtion_grid_t1

0xeed4,	// (0x00017d8b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xeed4,	// (0x00017d8b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3a,	// (0x00018bf1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3a,	// (0x00018bf1) cell_fep_china_hwr2_fs_funtion_grid_t

0xeef0,	// (0x00017da7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xeef8,	// (0x00017daf) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xef00,	// (0x00017db7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3f,	// (0x00018bf6) popup_fep_china_hwr2_fs_control_bar_grid_g

0xef08,	// (0x00017dbf) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xef08,	// (0x00017dbf) cell_fep_china_hwr2_fs_candidate_grid

0xef21,	// (0x00017dd8) popup_fep_china_hwr2_fs_candidate_grid_g20

0xef29,	// (0x00017de0) popup_fep_china_hwr2_fs_candidate_grid_g21

0xd3c2,	// (0x00016279) cell_fep_china_hwr2_fs_candidate_grid_g1

0xd3c2,	// (0x00016279) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5a,	// (0x00018a11) cell_fep_china_hwr2_fs_candidate_grid_g

0xef31,	// (0x00017de8) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa593,	// (0x0001344a) clock_nsta_pane_cp_24_ParamLimits

0xa593,	// (0x0001344a) clock_nsta_pane_cp_24

0xa611,	// (0x000134c8) indicator_nsta_pane_cp_24_ParamLimits

0xa611,	// (0x000134c8) indicator_nsta_pane_cp_24

0xb794,	// (0x0001464b) heading_pane_g1

0x0001,

0xf8d7,	// (0x0001878e) heading_pane_g

0xc2d3,	// (0x0001518a) grid_sct_catagory_button_pane

0xc305,	// (0x000151bc) scroll_pane_cp5_ParamLimits

0xcf36,	// (0x00015ded) button_value_adjust_pane_cp5_ParamLimits

0xcf36,	// (0x00015ded) button_value_adjust_pane_cp5

0xd02e,	// (0x00015ee5) form2_midp_time_pane_ParamLimits

0xef3f,	// (0x00017df6) cell_sct_catagory_button_pane_ParamLimits

0xef3f,	// (0x00017df6) cell_sct_catagory_button_pane

0xd387,	// (0x0001623e) bg_button_pane_cp01_ParamLimits

0xd387,	// (0x0001623e) bg_button_pane_cp01

0xd3c2,	// (0x00016279) cell_sct_catagory_button_pane_g1

0xa372,	// (0x00013229) popup_tb_extension_window

0xef51,	// (0x00017e08) aid_size_cell_ext_ParamLimits

0xef51,	// (0x00017e08) aid_size_cell_ext

0x81dc,	// (0x00011093) bg_tb_trans_pane_cp1_ParamLimits

0x81dc,	// (0x00011093) bg_tb_trans_pane_cp1

0xef71,	// (0x00017e28) grid_tb_ext_pane_ParamLimits

0xef71,	// (0x00017e28) grid_tb_ext_pane

0xefa1,	// (0x00017e58) cell_tb_ext_pane_ParamLimits

0xefa1,	// (0x00017e58) cell_tb_ext_pane

0xefb8,	// (0x00017e6f) cell_tb_ext_pane_g1_ParamLimits

0xefb8,	// (0x00017e6f) cell_tb_ext_pane_g1

0xefd5,	// (0x00017e8c) cell_tb_ext_pane_t1

0x81dc,	// (0x00011093) list_highlight_pane_cp11_ParamLimits

0x81dc,	// (0x00011093) list_highlight_pane_cp11

0x64e0,	// (0x0000f397) popup_uni_indicator_window_ParamLimits

0x64e0,	// (0x0000f397) popup_uni_indicator_window

0x8d12,	// (0x00011bc9) bg_popup_sub_pane_cp14

0xeff0,	// (0x00017ea7) list_uniindi_pane

0xeffc,	// (0x00017eb3) uniindi_top_pane

0x81dc,	// (0x00011093) bg_uniindi_top_pane

0xf01b,	// (0x00017ed2) uniindi_top_pane_g1

0xf031,	// (0x00017ee8) uniindi_top_pane_g2

0x0003,

0xfd46,	// (0x00018bfd) uniindi_top_pane_g

0xf05b,	// (0x00017f12) uniindi_top_pane_t1

0xf085,	// (0x00017f3c) list_single_uniindi_pane_ParamLimits

0xf085,	// (0x00017f3c) list_single_uniindi_pane

0xd3c2,	// (0x00016279) bg_uniindi_top_pane_g1

0xf097,	// (0x00017f4e) list_single_uniindi_pane_g1

0xf0aa,	// (0x00017f61) list_single_uniindi_pane_t1

0x6364,	// (0x0000f21b) control_bg_pane

0xf0cf,	// (0x00017f86) bg_sctrl_sk_pane_cp1

0xf0d8,	// (0x00017f8f) bg_sctrl_sk_pane_cp2

0xf0e1,	// (0x00017f98) control_bg_pane_g1

0xf0ea,	// (0x00017fa1) control_bg_pane_g2

0x0001,

0xfd4f,	// (0x00018c06) control_bg_pane_g

0xcd66,	// (0x00015c1d) cell_indicator_nsta_pane_g1_ParamLimits

0xcd74,	// (0x00015c2b) cell_indicator_nsta_pane_g2_ParamLimits

0xfabe,	// (0x00018975) cell_indicator_nsta_pane_g_ParamLimits

0xd0b2,	// (0x00015f69) form2_midp_time_pane_t1_ParamLimits

0x8517,	// (0x000113ce) main_idle_act4_pane_ParamLimits

0x8517,	// (0x000113ce) main_idle_act4_pane

0xa372,	// (0x00013229) popup_tb_extension_window_ParamLimits

0xef91,	// (0x00017e48) tb_ext_find_pane_ParamLimits

0xef91,	// (0x00017e48) tb_ext_find_pane

0xf0f3,	// (0x00017faa) ai_gene_pane_1_cp1

0x9cc7,	// (0x00012b7e) ai_gene_pane_2_cp1

0xf0fb,	// (0x00017fb2) list_single_idle_plugin_calendar_pane

0xf104,	// (0x00017fbb) list_single_idle_plugin_notification_pane

0xf10d,	// (0x00017fc4) list_single_idle_plugin_player_pane

0xf116,	// (0x00017fcd) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf116,	// (0x00017fcd) list_single_idle_plugin_shortcut_pane

0xf138,	// (0x00017fef) main_idle_act4_pane_t1

0xf14a,	// (0x00018001) main_idle_act4_pane_t2

0x0001,

0xfd54,	// (0x00018c0b) main_idle_act4_pane_t

0xf15c,	// (0x00018013) middle_sk_idle_act4_pane_ParamLimits

0xf15c,	// (0x00018013) middle_sk_idle_act4_pane

0xf172,	// (0x00018029) popup_clock_digital_analogue_window_cp2

0xf18c,	// (0x00018043) shortcut_wheel_idle_act4_pane_ParamLimits

0xf18c,	// (0x00018043) shortcut_wheel_idle_act4_pane

0xd3c2,	// (0x00016279) shortcut_wheel_idle_act4_pane_g1

0xd3c2,	// (0x00016279) shortcut_wheel_idle_act4_pane_g2

0xd3c2,	// (0x00016279) shortcut_wheel_idle_act4_pane_g3

0xd3c2,	// (0x00016279) shortcut_wheel_idle_act4_pane_g4

0xd3c2,	// (0x00016279) shortcut_wheel_idle_act4_pane_g5

0xf1a0,	// (0x00018057) shortcut_wheel_idle_act4_pane_g6

0xf1a8,	// (0x0001805f) shortcut_wheel_idle_act4_pane_g7

0xf1b0,	// (0x00018067) shortcut_wheel_idle_act4_pane_g8

0xf1b8,	// (0x0001806f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd59,	// (0x00018c10) shortcut_wheel_idle_act4_pane_g

0xd63d,	// (0x000164f4) middle_sk_idle_act4_pane_g1_ParamLimits

0xd63d,	// (0x000164f4) middle_sk_idle_act4_pane_g1

0xf21c,	// (0x000180d3) middle_sk_idle_act4_pane_g2_ParamLimits

0xf21c,	// (0x000180d3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7c,	// (0x00018c33) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7c,	// (0x00018c33) middle_sk_idle_act4_pane_g

0xf228,	// (0x000180df) middle_sk_idle_act4_pane_t1_ParamLimits

0xf228,	// (0x000180df) middle_sk_idle_act4_pane_t1

0xf245,	// (0x000180fc) grid_ai_shortcut_pane_ParamLimits

0xf245,	// (0x000180fc) grid_ai_shortcut_pane

0xf25e,	// (0x00018115) list_highlight_pane_cp16_ParamLimits

0xf25e,	// (0x00018115) list_highlight_pane_cp16

0xf26b,	// (0x00018122) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf26b,	// (0x00018122) list_single_idle_plugin_shortcut_pane_g1

0xf277,	// (0x0001812e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf277,	// (0x0001812e) list_single_idle_plugin_shortcut_pane_g2

0xf28f,	// (0x00018146) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf28f,	// (0x00018146) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd81,	// (0x00018c38) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd81,	// (0x00018c38) list_single_idle_plugin_shortcut_pane_g

0xf2a2,	// (0x00018159) cell_ai_shortcut_pane_ParamLimits

0xf2a2,	// (0x00018159) cell_ai_shortcut_pane

0xf2c3,	// (0x0001817a) cell_ai_shortcut_pane_g1_ParamLimits

0xf2c3,	// (0x0001817a) cell_ai_shortcut_pane_g1

0xf0f3,	// (0x00017faa) ai_gene_pane_1_cp2

0xf2e5,	// (0x0001819c) ai_gene_pane_2_cp2

0xf2ed,	// (0x000181a4) list_highlight_pane_cp15

0xf2f6,	// (0x000181ad) list_single_idle_plugin_calendar_pane_g1

0xf2ed,	// (0x000181a4) list_highlight_pane_cp17

0xf2fe,	// (0x000181b5) list_single_idle_plugin_calendar_pane_g1_copy1

0xf306,	// (0x000181bd) list_single_idle_plugin_player_pane_g1

0xc52c,	// (0x000153e3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd88,	// (0x00018c3f) list_single_idle_plugin_player_pane_g

0xf30e,	// (0x000181c5) list_single_idle_plugin_player_pane_t1

0xf31c,	// (0x000181d3) list_single_idle_plugin_player_pane_t2

0xf32a,	// (0x000181e1) list_single_idle_plugin_player_pane_t3

0xf338,	// (0x000181ef) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8d,	// (0x00018c44) list_single_idle_plugin_player_pane_t

0xf346,	// (0x000181fd) wait_bar_pane_cp15

0xf34e,	// (0x00018205) grid_ai_notification_pane

0xc52c,	// (0x000153e3) list_single_idle_plugin_notification_pane_g1

0xf357,	// (0x0001820e) cell_ai_notification_pane_ParamLimits

0xf357,	// (0x0001820e) cell_ai_notification_pane

0xf364,	// (0x0001821b) cell_ai_notification_pane_g1

0xf36c,	// (0x00018223) cell_ai_notification_pane_t1

0xf37a,	// (0x00018231) tb_ext_find_button_pane

0xf382,	// (0x00018239) tb_ext_find_pane_g1

0xf38a,	// (0x00018241) tb_ext_find_pane_t1

0x94f0,	// (0x000123a7) tb_ext_find_button_pane_g1

0xf398,	// (0x0001824f) tb_ext_find_button_pane_g2

0x0001,

0xfd96,	// (0x00018c4d) tb_ext_find_button_pane_g

0xf138,	// (0x00017fef) main_idle_act4_pane_t1_ParamLimits

0xf14a,	// (0x00018001) main_idle_act4_pane_t2_ParamLimits

0xfd54,	// (0x00018c0b) main_idle_act4_pane_t_ParamLimits

0xf172,	// (0x00018029) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf180,	// (0x00018037) sat_plugin_idle_act4_pane_ParamLimits

0xf180,	// (0x00018037) sat_plugin_idle_act4_pane

0xf3a1,	// (0x00018258) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf3a1,	// (0x00018258) sat_plugin_idle_act4_pane_t1

0xf3b4,	// (0x0001826b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf3b4,	// (0x0001826b) sat_plugin_idle_act4_pane_t2

0xf3c7,	// (0x0001827e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf3c7,	// (0x0001827e) sat_plugin_idle_act4_pane_t3

0xf3da,	// (0x00018291) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf3da,	// (0x00018291) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9b,	// (0x00018c52) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9b,	// (0x00018c52) sat_plugin_idle_act4_pane_t

0x6429,	// (0x0000f2e0) popup_battery_window_ParamLimits

0x6429,	// (0x0000f2e0) popup_battery_window

0x81dc,	// (0x00011093) bg_popup_sub_pane_cp25_ParamLimits

0x81dc,	// (0x00011093) bg_popup_sub_pane_cp25

0xf3ed,	// (0x000182a4) popup_battery_window_g1_ParamLimits

0xf3ed,	// (0x000182a4) popup_battery_window_g1

0xf3f9,	// (0x000182b0) popup_battery_window_t1_ParamLimits

0xf3f9,	// (0x000182b0) popup_battery_window_t1

0xf40b,	// (0x000182c2) popup_battery_window_t2_ParamLimits

0xf40b,	// (0x000182c2) popup_battery_window_t2

0x0001,

0xfda4,	// (0x00018c5b) popup_battery_window_t_ParamLimits

0xfda4,	// (0x00018c5b) popup_battery_window_t

0x9b92,	// (0x00012a49) midp_canvas_pane_ParamLimits

0x9c09,	// (0x00012ac0) midp_keypad_pane_ParamLimits

0x9c09,	// (0x00012ac0) midp_keypad_pane

0x9f04,	// (0x00012dbb) main_midp_pane_ParamLimits

0xcdf2,	// (0x00015ca9) signal_pane_g2_cp_ParamLimits

0xf428,	// (0x000182df) aid_size_cell_midp_keypad_ParamLimits

0xf428,	// (0x000182df) aid_size_cell_midp_keypad

0xf442,	// (0x000182f9) midp_keyp_game_grid_pane_ParamLimits

0xf442,	// (0x000182f9) midp_keyp_game_grid_pane

0xf462,	// (0x00018319) midp_keyp_rocker_pane_ParamLimits

0xf462,	// (0x00018319) midp_keyp_rocker_pane

0xf48d,	// (0x00018344) midp_keyp_sk_left_pane_ParamLimits

0xf48d,	// (0x00018344) midp_keyp_sk_left_pane

0xf4e7,	// (0x0001839e) midp_keyp_sk_right_pane_ParamLimits

0xf4e7,	// (0x0001839e) midp_keyp_sk_right_pane

0x7e45,	// (0x00010cfc) bg_button_pane_cp03

0xf541,	// (0x000183f8) midp_keyp_sk_left_pane_g1

0x7e45,	// (0x00010cfc) bg_button_pane_cp04

0xf541,	// (0x000183f8) midp_keyp_sk_right_pane_g1

0xd3c2,	// (0x00016279) midp_keyp_rocker_pane_g1

0xf54a,	// (0x00018401) keyp_game_cell_pane_ParamLimits

0xf54a,	// (0x00018401) keyp_game_cell_pane

0x7e45,	// (0x00010cfc) bg_button_pane_cp02

0xf55d,	// (0x00018414) keyp_game_cell_pane_g1

0x645f,	// (0x0000f316) popup_fep_vkb2_window_ParamLimits

0x645f,	// (0x0000f316) popup_fep_vkb2_window

0x766d,	// (0x00010524) aid_size_cell_vkb2_ParamLimits

0x766d,	// (0x00010524) aid_size_cell_vkb2

0x76c1,	// (0x00010578) popup_fep_vkb2_window_g1_ParamLimits

0x76c1,	// (0x00010578) popup_fep_vkb2_window_g1

0x7701,	// (0x000105b8) vkb2_area_bottom_pane_ParamLimits

0x7701,	// (0x000105b8) vkb2_area_bottom_pane

0x774d,	// (0x00010604) vkb2_area_keypad_pane_ParamLimits

0x774d,	// (0x00010604) vkb2_area_keypad_pane

0x778f,	// (0x00010646) vkb2_area_top_pane_ParamLimits

0x778f,	// (0x00010646) vkb2_area_top_pane

0x7809,	// (0x000106c0) vkb2_top_entry_pane_ParamLimits

0x7809,	// (0x000106c0) vkb2_top_entry_pane

0x7833,	// (0x000106ea) vkb2_top_grid_left_pane_ParamLimits

0x7833,	// (0x000106ea) vkb2_top_grid_left_pane

0x7851,	// (0x00010708) vkb2_top_grid_right_pane_ParamLimits

0x7851,	// (0x00010708) vkb2_top_grid_right_pane

0x786f,	// (0x00010726) vkb2_cell_keypad_pane_ParamLimits

0x786f,	// (0x00010726) vkb2_cell_keypad_pane

0x7940,	// (0x000107f7) vkb2_area_bottom_grid_pane_ParamLimits

0x7940,	// (0x000107f7) vkb2_area_bottom_grid_pane

0x7966,	// (0x0001081d) vkb2_area_bottom_pane_g1_ParamLimits

0x7966,	// (0x0001081d) vkb2_area_bottom_pane_g1

0x798a,	// (0x00010841) vkb2_area_bottom_pane_g2_ParamLimits

0x798a,	// (0x00010841) vkb2_area_bottom_pane_g2

0x79b8,	// (0x0001086f) vkb2_area_bottom_pane_g3_ParamLimits

0x79b8,	// (0x0001086f) vkb2_area_bottom_pane_g3

0x0002,

0xfda9,	// (0x00018c60) vkb2_area_bottom_pane_g_ParamLimits

0xfda9,	// (0x00018c60) vkb2_area_bottom_pane_g

0x7a19,	// (0x000108d0) vkb2_top_cell_left_pane_ParamLimits

0x7a19,	// (0x000108d0) vkb2_top_cell_left_pane

0x000c,	// (0x00008ec3) vkb2_top_entry_pane_g1_ParamLimits

0x000c,	// (0x00008ec3) vkb2_top_entry_pane_g1

0x001a,	// (0x00008ed1) vkb2_top_entry_pane_t1_ParamLimits

0x001a,	// (0x00008ed1) vkb2_top_entry_pane_t1

0x004c,	// (0x00008f03) vkb2_top_entry_pane_t2_ParamLimits

0x004c,	// (0x00008f03) vkb2_top_entry_pane_t2

0x007e,	// (0x00008f35) vkb2_top_entry_pane_t3_ParamLimits

0x007e,	// (0x00008f35) vkb2_top_entry_pane_t3

0x0002,

0xfdb0,	// (0x00018c67) vkb2_top_entry_pane_t_ParamLimits

0xfdb0,	// (0x00018c67) vkb2_top_entry_pane_t

0x7a66,	// (0x0001091d) vkb2_top_grid_right_pane_g1_ParamLimits

0x7a66,	// (0x0001091d) vkb2_top_grid_right_pane_g1

0x7a7c,	// (0x00010933) vkb2_top_grid_right_pane_g2_ParamLimits

0x7a7c,	// (0x00010933) vkb2_top_grid_right_pane_g2

0x7a94,	// (0x0001094b) vkb2_top_grid_right_pane_g3_ParamLimits

0x7a94,	// (0x0001094b) vkb2_top_grid_right_pane_g3

0x7aac,	// (0x00010963) vkb2_top_grid_right_pane_g4_ParamLimits

0x7aac,	// (0x00010963) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb7,	// (0x00018c6e) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb7,	// (0x00018c6e) vkb2_top_grid_right_pane_g

0x7ac2,	// (0x00010979) vkb2_top_cell_left_pane_g1

0x7ad9,	// (0x00010990) vkb2_cell_keypad_pane_g1_ParamLimits

0x7ad9,	// (0x00010990) vkb2_cell_keypad_pane_g1

0x0150,	// (0x00009007) vkb2_cell_keypad_pane_t1_ParamLimits

0x0150,	// (0x00009007) vkb2_cell_keypad_pane_t1

0x7ae7,	// (0x0001099e) vkb2_cell_bottom_grid_pane_ParamLimits

0x7ae7,	// (0x0001099e) vkb2_cell_bottom_grid_pane

0x7b20,	// (0x000109d7) vkb2_cell_bottom_grid_pane_g1

0xf1c0,	// (0x00018077) aid_call2_pane_cp02

0xf1c8,	// (0x0001807f) aid_call_pane_cp02

0xf1d0,	// (0x00018087) clock_digital_number_pane_cp10

0xf1d8,	// (0x0001808f) clock_digital_number_pane_cp11

0xf1e0,	// (0x00018097) clock_digital_number_pane_cp12

0xf1e8,	// (0x0001809f) clock_digital_number_pane_cp13

0xf1f0,	// (0x000180a7) clock_digital_separator_pane_cp10

0x94f0,	// (0x000123a7) popup_clock_digital_analogue_window_cp2_g1

0x94f0,	// (0x000123a7) popup_clock_digital_analogue_window_cp2_g2

0xf1f8,	// (0x000180af) popup_clock_digital_analogue_window_cp2_g3

0x94f0,	// (0x000123a7) popup_clock_digital_analogue_window_cp2_g4

0xf1f8,	// (0x000180af) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6c,	// (0x00018c23) popup_clock_digital_analogue_window_cp2_g

0xf200,	// (0x000180b7) popup_clock_digital_analogue_window_cp2_t1

0xf20e,	// (0x000180c5) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd77,	// (0x00018c2e) popup_clock_digital_analogue_window_cp2_t

0xd3c2,	// (0x00016279) clock_digital_number_pane_cp10_g1

0xd3c2,	// (0x00016279) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5a,	// (0x00018a11) clock_digital_number_pane_cp10_g

0xd3c2,	// (0x00016279) clock_digital_separator_pane_cp10_g1

0xd3c2,	// (0x00016279) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5a,	// (0x00018a11) clock_digital_separator_pane_cp10_g

0xf03d,	// (0x00017ef4) uniindi_top_pane_g3

0xf04e,	// (0x00017f05) uniindi_top_pane_g4

0x78fa,	// (0x000107b1) vkb2_row_keypad_pane_ParamLimits

0x78fa,	// (0x000107b1) vkb2_row_keypad_pane

0x7b40,	// (0x000109f7) vkb2_cell_t_keypad_pane_ParamLimits

0x7b40,	// (0x000109f7) vkb2_cell_t_keypad_pane

0x7b50,	// (0x00010a07) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7b50,	// (0x00010a07) vkb2_cell_t_keypad_pane_cp08

0x7b63,	// (0x00010a1a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7b63,	// (0x00010a1a) vkb2_cell_t_keypad_pane_cp09

0x7b77,	// (0x00010a2e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7b77,	// (0x00010a2e) vkb2_cell_t_keypad_pane_cp01

0x7b88,	// (0x00010a3f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7b88,	// (0x00010a3f) vkb2_cell_t_keypad_pane_cp02

0x7b99,	// (0x00010a50) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7b99,	// (0x00010a50) vkb2_cell_t_keypad_pane_cp03

0x7baa,	// (0x00010a61) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7baa,	// (0x00010a61) vkb2_cell_t_keypad_pane_cp04

0x7bbb,	// (0x00010a72) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7bbb,	// (0x00010a72) vkb2_cell_t_keypad_pane_cp05

0x7bcc,	// (0x00010a83) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7bcc,	// (0x00010a83) vkb2_cell_t_keypad_pane_cp06

0x7bdd,	// (0x00010a94) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7bdd,	// (0x00010a94) vkb2_cell_t_keypad_pane_cp07

0x7bee,	// (0x00010aa5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7bee,	// (0x00010aa5) vkb2_cell_t_keypad_pane_cp10

0x73a7,	// (0x0001025e) vkb2_cell_t_keypad_pane_g1

0x0283,	// (0x0000913a) vkb2_cell_t_keypad_pane_t1

0x6364,	// (0x0000f21b) popup_grid_graphic2_window

0x0295,	// (0x0000914c) aid_size_cell_graphic2_ParamLimits

0x0295,	// (0x0000914c) aid_size_cell_graphic2

0x02cd,	// (0x00009184) bg_popup_window_pane_cp21_ParamLimits

0x02cd,	// (0x00009184) bg_popup_window_pane_cp21

0x02db,	// (0x00009192) graphic2_pages_pane_ParamLimits

0x02db,	// (0x00009192) graphic2_pages_pane

0x0321,	// (0x000091d8) grid_graphic2_control_pane_ParamLimits

0x0321,	// (0x000091d8) grid_graphic2_control_pane

0x035f,	// (0x00009216) grid_graphic2_pane_ParamLimits

0x035f,	// (0x00009216) grid_graphic2_pane

0x03d3,	// (0x0000928a) cell_graphic2_pane

0x7e45,	// (0x00010cfc) main_comp_mode_pane

0xe83f,	// (0x000176f6) list_ai3_gene_pane_ParamLimits

0xec85,	// (0x00017b3c) bg_popup_window_pane_cp19_ParamLimits

0xec91,	// (0x00017b48) bg_touch_area_indi_pane_ParamLimits

0xec91,	// (0x00017b48) bg_touch_area_indi_pane

0xeca7,	// (0x00017b5e) bg_touch_area_indi_pane_cp01_ParamLimits

0xeca7,	// (0x00017b5e) bg_touch_area_indi_pane_cp01

0xecbd,	// (0x00017b74) bg_touch_area_indi_pane_cp02_ParamLimits

0xecbd,	// (0x00017b74) bg_touch_area_indi_pane_cp02

0xecd5,	// (0x00017b8c) bg_touch_area_indi_pane_cp03_ParamLimits

0xecd5,	// (0x00017b8c) bg_touch_area_indi_pane_cp03

0xecef,	// (0x00017ba6) popup_slider_window_g1_ParamLimits

0xed0b,	// (0x00017bc2) popup_slider_window_g2_ParamLimits

0xed27,	// (0x00017bde) popup_slider_window_g3_ParamLimits

0xfd01,	// (0x00018bb8) popup_slider_window_g_ParamLimits

0xed83,	// (0x00017c3a) popup_slider_window_t1_ParamLimits

0xedf7,	// (0x00017cae) small_volume_slider_vertical_pane_ParamLimits

0x03d3,	// (0x0000928a) cell_graphic2_pane_ParamLimits

0x0421,	// (0x000092d8) bg_button_pane_cp10_ParamLimits

0x0421,	// (0x000092d8) bg_button_pane_cp10

0x0434,	// (0x000092eb) bg_button_pane_cp11_ParamLimits

0x0434,	// (0x000092eb) bg_button_pane_cp11

0x0447,	// (0x000092fe) graphic2_pages_pane_g1_ParamLimits

0x0447,	// (0x000092fe) graphic2_pages_pane_g1

0x0462,	// (0x00009319) graphic2_pages_pane_g2_ParamLimits

0x0462,	// (0x00009319) graphic2_pages_pane_g2

0x0001,

0xfdc5,	// (0x00018c7c) graphic2_pages_pane_g_ParamLimits

0xfdc5,	// (0x00018c7c) graphic2_pages_pane_g

0x047a,	// (0x00009331) graphic2_pages_pane_t1_ParamLimits

0x047a,	// (0x00009331) graphic2_pages_pane_t1

0x0490,	// (0x00009347) cell_graphic2_control_pane_ParamLimits

0x0490,	// (0x00009347) cell_graphic2_control_pane

0x04b1,	// (0x00009368) cell_graphic2_pane_g1_ParamLimits

0x04b1,	// (0x00009368) cell_graphic2_pane_g1

0x04be,	// (0x00009375) cell_graphic2_pane_g2_ParamLimits

0x04be,	// (0x00009375) cell_graphic2_pane_g2

0x04cb,	// (0x00009382) cell_graphic2_pane_g3_ParamLimits

0x04cb,	// (0x00009382) cell_graphic2_pane_g3

0x04d8,	// (0x0000938f) cell_graphic2_pane_g4_ParamLimits

0x04d8,	// (0x0000938f) cell_graphic2_pane_g4

0x04e5,	// (0x0000939c) cell_graphic2_pane_g5_ParamLimits

0x04e5,	// (0x0000939c) cell_graphic2_pane_g5

0x0004,

0xfdca,	// (0x00018c81) cell_graphic2_pane_g_ParamLimits

0xfdca,	// (0x00018c81) cell_graphic2_pane_g

0x0500,	// (0x000093b7) cell_graphic2_pane_t1_ParamLimits

0x0500,	// (0x000093b7) cell_graphic2_pane_t1

0xaadd,	// (0x00013994) grid_highlight_pane_cp11_ParamLimits

0xaadd,	// (0x00013994) grid_highlight_pane_cp11

0x81dc,	// (0x00011093) bg_button_pane_cp05

0x0529,	// (0x000093e0) cell_graphic2_control_pane_g1

0xd3c2,	// (0x00016279) bg_touch_area_indi_pane_g1

0x0551,	// (0x00009408) aid_cmod_rocker_key_size

0x055b,	// (0x00009412) aid_cmode_itu_key_size

0x0565,	// (0x0000941c) main_cmode_video_pane

0x056f,	// (0x00009426) main_comp_mode_itu_pane

0x057b,	// (0x00009432) main_comp_mode_rocker_pane

0x0587,	// (0x0000943e) cell_cmode_rocker_pane_ParamLimits

0x0587,	// (0x0000943e) cell_cmode_rocker_pane

0x0599,	// (0x00009450) cell_cmode_itu_pane_ParamLimits

0x0599,	// (0x00009450) cell_cmode_itu_pane

0x8d12,	// (0x00011bc9) bg_button_pane_cp06_ParamLimits

0x8d12,	// (0x00011bc9) bg_button_pane_cp06

0xd63d,	// (0x000164f4) cell_cmode_rocker_pane_g1_ParamLimits

0xd63d,	// (0x000164f4) cell_cmode_rocker_pane_g1

0xee9b,	// (0x00017d52) cell_cmode_rocker_pane_g2_ParamLimits

0xee9b,	// (0x00017d52) cell_cmode_rocker_pane_g2

0x0001,

0xfdda,	// (0x00018c91) cell_cmode_rocker_pane_g_ParamLimits

0xfdda,	// (0x00018c91) cell_cmode_rocker_pane_g

0x7e45,	// (0x00010cfc) bg_button_pane_cp07

0x05ae,	// (0x00009465) cell_cmode_itu_pane_g1

0x05b7,	// (0x0000946e) cell_cmode_itu_pane_t1

0x05c5,	// (0x0000947c) cell_cmode_itu_pane_t2

0x0001,

0xfddf,	// (0x00018c96) cell_cmode_itu_pane_t

0xf0bf,	// (0x00017f76) aid_touch_ctrl_left

0xf0c7,	// (0x00017f7e) aid_touch_ctrl_right

0x7e45,	// (0x00010cfc) compa_mode_pane

0x05d3,	// (0x0000948a) aid_cmod_rocker_key_size_cp

0x05dd,	// (0x00009494) aid_cmode_itu_key_size_cp

0x05e7,	// (0x0000949e) compa_mode_pane_g1

0x05ef,	// (0x000094a6) compa_mode_pane_g2

0x05f7,	// (0x000094ae) compa_mode_pane_g3

0x0002,

0xfde4,	// (0x00018c9b) compa_mode_pane_g

0x05ff,	// (0x000094b6) main_comp_mode_itu_pane_cp

0x0607,	// (0x000094be) main_comp_mode_rocker_pane_cp

0x060f,	// (0x000094c6) cell_cmode_itu_pane_cp_ParamLimits

0x060f,	// (0x000094c6) cell_cmode_itu_pane_cp

0x0624,	// (0x000094db) cell_cmode_rocker_pane_cp_ParamLimits

0x0624,	// (0x000094db) cell_cmode_rocker_pane_cp

0x8d12,	// (0x00011bc9) bg_button_pane_cp06_cp_ParamLimits

0x8d12,	// (0x00011bc9) bg_button_pane_cp06_cp

0xd63d,	// (0x000164f4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd63d,	// (0x000164f4) cell_cmode_rocker_pane_g1_cp

0xd3c2,	// (0x00016279) cell_cmode_rocker_pane_g2_cp

0x7e45,	// (0x00010cfc) bg_button_pane_cp07_cp

0x0636,	// (0x000094ed) cell_cmode_itu_pane_g1_cp

0x063f,	// (0x000094f6) cell_cmode_itu_pane_t1_cp

0x063f,	// (0x000094f6) cell_cmode_itu_pane_t2_cp

0xbfe7,	// (0x00014e9e) settings_code_pane_cp2

0x7f39,	// (0x00010df0) bg_popup_window_pane_cp3_ParamLimits

0x83aa,	// (0x00011261) heading_pane_cp3_ParamLimits

0x83b6,	// (0x0001126d) listscroll_popup_graphic_pane_ParamLimits

0x7150,	// (0x00010007) fep_hwr_aid_pane_ParamLimits

0x75c8,	// (0x0001047f) aid_touch_sctrl_top_ParamLimits

0x75e3,	// (0x0001049a) sctrl_sk_top_pane_g1_ParamLimits

0x73a7,	// (0x0001025e) sctrl_sk_top_pane_g2_ParamLimits

0xfd1a,	// (0x00018bd1) sctrl_sk_top_pane_g_ParamLimits

0x75f0,	// (0x000104a7) sctrl_sk_top_pane_t1_ParamLimits

0x75c8,	// (0x0001047f) aid_touch_sctrl_bottom_ParamLimits

0x75f0,	// (0x000104a7) sctrl_sk_bottom_pane_t1_ParamLimits

0xf009,	// (0x00017ec0) aid_area_touch_clock

0x77d1,	// (0x00010688) aid_vkb2_area_top_pane_cell_ParamLimits

0x77d1,	// (0x00010688) aid_vkb2_area_top_pane_cell

0x791c,	// (0x000107d3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x791c,	// (0x000107d3) aid_vkb2_area_bottom_pane_cell

0x0004,	// (0x00008ebb) popup_char_count_window

0x064d,	// (0x00009504) popup_char_count_window_g1

0x0656,	// (0x0000950d) popup_char_count_window_g2

0x065f,	// (0x00009516) popup_char_count_window_g3

0x0002,

0xfdeb,	// (0x00018ca2) popup_char_count_window_g

0x0668,	// (0x0000951f) popup_char_count_window_t1

0x769f,	// (0x00010556) popup_fep_char_preview_window_ParamLimits

0x769f,	// (0x00010556) popup_fep_char_preview_window

0x77ef,	// (0x000106a6) vkb2_top_candi_pane_ParamLimits

0x77ef,	// (0x000106a6) vkb2_top_candi_pane

0x0676,	// (0x0000952d) cell_vkb2_top_candi_pane_ParamLimits

0x0676,	// (0x0000952d) cell_vkb2_top_candi_pane

0x7c03,	// (0x00010aba) bg_popup_fep_char_preview_window_ParamLimits

0x7c03,	// (0x00010aba) bg_popup_fep_char_preview_window

0x7c11,	// (0x00010ac8) popup_fep_char_preview_window_t1_ParamLimits

0x7c11,	// (0x00010ac8) popup_fep_char_preview_window_t1

0x070d,	// (0x000095c4) bg_popup_fep_char_preview_window_g1

0x0705,	// (0x000095bc) bg_popup_fep_char_preview_window_g2

0x06fd,	// (0x000095b4) bg_popup_fep_char_preview_window_g3

0x0735,	// (0x000095ec) bg_popup_fep_char_preview_window_g4

0x072d,	// (0x000095e4) bg_popup_fep_char_preview_window_g5

0x7c4b,	// (0x00010b02) bg_popup_fep_char_preview_window_g6

0x071d,	// (0x000095d4) bg_popup_fep_char_preview_window_g7

0x0715,	// (0x000095cc) bg_popup_fep_char_preview_window_g8

0x073d,	// (0x000095f4) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf2,	// (0x00018ca9) bg_popup_fep_char_preview_window_g

0x73a7,	// (0x0001025e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x73a7,	// (0x0001025e) cell_vkb2_top_candi_pane_g1

0x73b5,	// (0x0001026c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x73b5,	// (0x0001026c) cell_vkb2_top_candi_pane_g2

0x0766,	// (0x0000961d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x0766,	// (0x0000961d) cell_vkb2_top_candi_pane_g3

0x7c53,	// (0x00010b0a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7c53,	// (0x00010b0a) cell_vkb2_top_candi_pane_g4

0xdc65,	// (0x00016b1c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdc65,	// (0x00016b1c) cell_vkb2_top_candi_pane_g5

0x7c74,	// (0x00010b2b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7c74,	// (0x00010b2b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe05,	// (0x00018cbc) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe05,	// (0x00018cbc) cell_vkb2_top_candi_pane_g

0x7c82,	// (0x00010b39) cell_vkb2_top_candi_pane_t1

0x6f5f,	// (0x0000fe16) aid_size_touch_slider_mark_ParamLimits

0x6f5f,	// (0x0000fe16) aid_size_touch_slider_mark

0x0311,	// (0x000091c8) grid_graphic2_catg_pane_ParamLimits

0x0311,	// (0x000091c8) grid_graphic2_catg_pane

0x03af,	// (0x00009266) popup_grid_graphic2_window_t1_ParamLimits

0x03af,	// (0x00009266) popup_grid_graphic2_window_t1

0x03c1,	// (0x00009278) popup_grid_graphic2_window_t2_ParamLimits

0x03c1,	// (0x00009278) popup_grid_graphic2_window_t2

0x0001,

0xfdc0,	// (0x00018c77) popup_grid_graphic2_window_t_ParamLimits

0xfdc0,	// (0x00018c77) popup_grid_graphic2_window_t

0x81dc,	// (0x00011093) bg_button_pane_cp05_ParamLimits

0x0529,	// (0x000093e0) cell_graphic2_control_pane_g1_ParamLimits

0x07a6,	// (0x0000965d) cell_graphic2_catg_pane_ParamLimits

0x07a6,	// (0x0000965d) cell_graphic2_catg_pane

0x7e45,	// (0x00010cfc) bg_button_pane_cp12

0x07b8,	// (0x0000966f) cell_graphic2_catg_pane_g1

0xefd5,	// (0x00017e8c) cell_tb_ext_pane_t1_ParamLimits

0x7a39,	// (0x000108f0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7a39,	// (0x000108f0) vkb2_top_cell_right_narrow_pane

0x7a51,	// (0x00010908) vkb2_top_cell_right_wide_pane_ParamLimits

0x7a51,	// (0x00010908) vkb2_top_cell_right_wide_pane

0x7142,	// (0x0000fff9) bg_vkb2_func_pane_ParamLimits

0x7142,	// (0x0000fff9) bg_vkb2_func_pane

0x7ac2,	// (0x00010979) vkb2_top_cell_left_pane_g1_ParamLimits

0x7142,	// (0x0000fff9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7142,	// (0x0000fff9) bg_vkb2_fuc_pane_cp03

0x7b20,	// (0x000109d7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xa9cb,	// (0x00013882) bg_vkb2_func_pane_g1

0xa9d3,	// (0x0001388a) bg_vkb2_func_pane_g2

0xa9e3,	// (0x0001389a) bg_vkb2_func_pane_g3

0xa9db,	// (0x00013892) bg_vkb2_func_pane_g4

0xa9eb,	// (0x000138a2) bg_vkb2_func_pane_g5

0xa9f3,	// (0x000138aa) bg_vkb2_func_pane_g6

0xa9fb,	// (0x000138b2) bg_vkb2_func_pane_g7

0xaa03,	// (0x000138ba) bg_vkb2_func_pane_g8

0xa9c3,	// (0x0001387a) bg_vkb2_func_pane_g9

0x0008,

0xfe12,	// (0x00018cc9) bg_vkb2_func_pane_g

0x7142,	// (0x0000fff9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7142,	// (0x0000fff9) bg_vkb2_fuc_pane_cp01

0x7ac2,	// (0x00010979) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7ac2,	// (0x00010979) vkb2_top_cell_right_wide_pane_g1

0x7142,	// (0x0000fff9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7142,	// (0x0000fff9) bg_vkb2_fuc_pane_cp02

0x7b20,	// (0x000109d7) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7b20,	// (0x000109d7) vkb2_top_cell_right_narrow_pane_g1

0xec03,	// (0x00017aba) aid_touch_area_decrease_ParamLimits

0xec03,	// (0x00017aba) aid_touch_area_decrease

0xec27,	// (0x00017ade) aid_touch_area_increase_ParamLimits

0xec27,	// (0x00017ade) aid_touch_area_increase

0xec33,	// (0x00017aea) aid_touch_area_mute_ParamLimits

0xec33,	// (0x00017aea) aid_touch_area_mute

0xec57,	// (0x00017b0e) aid_touch_area_slider_ParamLimits

0xec57,	// (0x00017b0e) aid_touch_area_slider

0xed43,	// (0x00017bfa) popup_slider_window_g4_ParamLimits

0xed43,	// (0x00017bfa) popup_slider_window_g4

0xed4f,	// (0x00017c06) popup_slider_window_g5_ParamLimits

0xed4f,	// (0x00017c06) popup_slider_window_g5

0xed71,	// (0x00017c28) popup_slider_window_g6_ParamLimits

0xed71,	// (0x00017c28) popup_slider_window_g6

0xedb1,	// (0x00017c68) popup_slider_window_t2_ParamLimits

0xedb1,	// (0x00017c68) popup_slider_window_t2

0x0001,

0xfd0e,	// (0x00018bc5) popup_slider_window_t_ParamLimits

0xfd0e,	// (0x00018bc5) popup_slider_window_t

0xedc9,	// (0x00017c80) slider_pane_ParamLimits

0xedc9,	// (0x00017c80) slider_pane

0x07c1,	// (0x00009678) slider_pane_g1_ParamLimits

0x07c1,	// (0x00009678) slider_pane_g1

0x07d5,	// (0x0000968c) slider_pane_g2_ParamLimits

0x07d5,	// (0x0000968c) slider_pane_g2

0x07eb,	// (0x000096a2) slider_pane_g3_ParamLimits

0x07eb,	// (0x000096a2) slider_pane_g3

0x0003,

0xfe25,	// (0x00018cdc) slider_pane_g_ParamLimits

0xfe25,	// (0x00018cdc) slider_pane_g

0xa3ce,	// (0x00013285) popup_tb_float_extension_window_ParamLimits

0xa3ce,	// (0x00013285) popup_tb_float_extension_window

0x0817,	// (0x000096ce) aid_size_cell_tb_float_ext

0x7e45,	// (0x00010cfc) bg_popup_sub_window_cp28

0x0823,	// (0x000096da) grid_tb_float_ext_pane

0x082d,	// (0x000096e4) cell_tb_float_ext_pane_ParamLimits

0x082d,	// (0x000096e4) cell_tb_float_ext_pane

0x0847,	// (0x000096fe) cell_tb_float_ext_pane_g1

0x0850,	// (0x00009707) grid_highlight_pane_cp12

0x7291,	// (0x00010148) cell_last_hwr_side_pane_ParamLimits

0x7291,	// (0x00010148) cell_last_hwr_side_pane

0xd3c2,	// (0x00016279) cell_last_hwr_side_pane_g1

0x0859,	// (0x00009710) cell_last_hwr_side_pane_g2

0x0001,

0xfe2e,	// (0x00018ce5) cell_last_hwr_side_pane_g

0x79e8,	// (0x0001089f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x79e8,	// (0x0001089f) vkb2_area_bottom_space_btn_pane

0x73a7,	// (0x0001025e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x0283,	// (0x0000913a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7c82,	// (0x00010b39) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7ca1,	// (0x00010b58) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7ca1,	// (0x00010b58) vkb2_area_bottom_space_btn_pane_g1

0x7cdb,	// (0x00010b92) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7cdb,	// (0x00010b92) vkb2_area_bottom_space_btn_pane_g2

0x7d11,	// (0x00010bc8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7d11,	// (0x00010bc8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe33,	// (0x00018cea) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe33,	// (0x00018cea) vkb2_area_bottom_space_btn_pane_g

0x7205,	// (0x000100bc) cel_fep_hwr_func_pane_ParamLimits

0x7205,	// (0x000100bc) cel_fep_hwr_func_pane

0x7241,	// (0x000100f8) cell_hwr_side_button_pane_ParamLimits

0x7241,	// (0x000100f8) cell_hwr_side_button_pane

0xf009,	// (0x00017ec0) aid_area_touch_clock_ParamLimits

0x81dc,	// (0x00011093) bg_uniindi_top_pane_ParamLimits

0xf01b,	// (0x00017ed2) uniindi_top_pane_g1_ParamLimits

0xf031,	// (0x00017ee8) uniindi_top_pane_g2_ParamLimits

0xf03d,	// (0x00017ef4) uniindi_top_pane_g3_ParamLimits

0xf04e,	// (0x00017f05) uniindi_top_pane_g4_ParamLimits

0xfd46,	// (0x00018bfd) uniindi_top_pane_g_ParamLimits

0xf05b,	// (0x00017f12) uniindi_top_pane_t1_ParamLimits

0x81dc,	// (0x00011093) bg_vkb2_func_pane_cp01_ParamLimits

0x81dc,	// (0x00011093) bg_vkb2_func_pane_cp01

0x091c,	// (0x000097d3) cel_fep_hwr_func_pane_g1_ParamLimits

0x091c,	// (0x000097d3) cel_fep_hwr_func_pane_g1

0x81dc,	// (0x00011093) bg_vkb2_func_pane_cp02_ParamLimits

0x81dc,	// (0x00011093) bg_vkb2_func_pane_cp02

0x091c,	// (0x000097d3) cell_hwr_side_button_pane_g1_ParamLimits

0x091c,	// (0x000097d3) cell_hwr_side_button_pane_g1

0xa818,	// (0x000136cf) status_pane_g4_ParamLimits

0xa818,	// (0x000136cf) status_pane_g4

0xa830,	// (0x000136e7) status_pane_t1

0xd0c5,	// (0x00015f7c) form2_midp_gauge_slider_cont_pane

0xd0cd,	// (0x00015f84) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd0df,	// (0x00015f96) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd0f1,	// (0x00015fa8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0d,	// (0x000189c4) form2_midp_gauge_slider_pane_t_ParamLimits

0xd103,	// (0x00015fba) form2_midp_slider_pane_ParamLimits

0x765f,	// (0x00010516) aid_size_cell_func_vkb2_ParamLimits

0x765f,	// (0x00010516) aid_size_cell_func_vkb2

0x0803,	// (0x000096ba) slider_pane_g4_ParamLimits

0x0803,	// (0x000096ba) slider_pane_g4

0x7d5b,	// (0x00010c12) form2_midp_gauge_slider_pane_t2_cp01

0x7d69,	// (0x00010c20) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7d69,	// (0x00010c20) form2_midp_gauge_slider_pane_t3_cp01

0x7d86,	// (0x00010c3d) form2_midp_slider_pane_cp01

0x7e45,	// (0x00010cfc) navi_smil_pane

0x0989,	// (0x00009840) navi_smil_pane_g1

0x0991,	// (0x00009848) navi_smil_pane_t1

0x095e,	// (0x00009815) form2_midp_slider_pane_g1

0x0967,	// (0x0000981e) form2_midp_slider_pane_g2

0x096f,	// (0x00009826) form2_midp_slider_pane_g3

0x095e,	// (0x00009815) form2_midp_slider_pane_g4

0x0977,	// (0x0000982e) form2_midp_slider_pane_g5

0x0004,

0xfe3c,	// (0x00018cf3) form2_midp_slider_pane_g

0x7d4b,	// (0x00010c02) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7d4b,	// (0x00010c02) vkb2_area_bottom_space_btn_pane_g4

0xa64d,	// (0x00013504) lc0_navi_pane_ParamLimits

0xa64d,	// (0x00013504) lc0_navi_pane

0xa6c3,	// (0x0001357a) lc0_stat_indi_pane_ParamLimits

0xa6c3,	// (0x0001357a) lc0_stat_indi_pane

0xa6da,	// (0x00013591) ls0_title_pane_ParamLimits

0xa6da,	// (0x00013591) ls0_title_pane

0x8d12,	// (0x00011bc9) bg_popup_sub_pane_cp14_ParamLimits

0xeff0,	// (0x00017ea7) list_uniindi_pane_ParamLimits

0xeffc,	// (0x00017eb3) uniindi_top_pane_ParamLimits

0xf097,	// (0x00017f4e) list_single_uniindi_pane_g1_ParamLimits

0xf0aa,	// (0x00017f61) list_single_uniindi_pane_t1_ParamLimits

0x7d8f,	// (0x00010c46) lc0_stat_clock_pane_ParamLimits

0x7d8f,	// (0x00010c46) lc0_stat_clock_pane

0x09b9,	// (0x00009870) lc0_stat_indi_pane_g1_ParamLimits

0x09b9,	// (0x00009870) lc0_stat_indi_pane_g1

0x09ac,	// (0x00009863) lc0_stat_indi_pane_g2_ParamLimits

0x09ac,	// (0x00009863) lc0_stat_indi_pane_g2

0x0001,

0xfe47,	// (0x00018cfe) lc0_stat_indi_pane_g_ParamLimits

0xfe47,	// (0x00018cfe) lc0_stat_indi_pane_g

0x7d9c,	// (0x00010c53) lc0_uni_indicator_pane_ParamLimits

0x7d9c,	// (0x00010c53) lc0_uni_indicator_pane

0x09d3,	// (0x0000988a) ls0_title_pane_g1_ParamLimits

0x09d3,	// (0x0000988a) ls0_title_pane_g1

0x09e7,	// (0x0000989e) ls0_title_pane_t1_ParamLimits

0x09e7,	// (0x0000989e) ls0_title_pane_t1

0x7da9,	// (0x00010c60) lc0_uni_indicator_pane_g1_ParamLimits

0x7da9,	// (0x00010c60) lc0_uni_indicator_pane_g1

0x0a33,	// (0x000098ea) lc0_stat_clock_pane_t1

0x7e45,	// (0x00010cfc) main_ai5_pane

0x0a41,	// (0x000098f8) ai5_sk_pane_ParamLimits

0x0a41,	// (0x000098f8) ai5_sk_pane

0x0a4e,	// (0x00009905) cell_ai5_widget_pane_ParamLimits

0x0a4e,	// (0x00009905) cell_ai5_widget_pane

0x0b1e,	// (0x000099d5) aid_size_cell_widget_grid

0x0b32,	// (0x000099e9) bg_ai5_widget_pane_ParamLimits

0x0b32,	// (0x000099e9) bg_ai5_widget_pane

0x0b7c,	// (0x00009a33) cell_ai5_widget_pane_g2

0x0b8c,	// (0x00009a43) cell_ai5_widget_pane_g3

0x0bab,	// (0x00009a62) cell_ai5_widget_pane_g4

0x0bb7,	// (0x00009a6e) cell_ai5_widget_pane_g5

0x0bc3,	// (0x00009a7a) cell_ai5_widget_pane_g6

0x0bcf,	// (0x00009a86) cell_ai5_widget_pane_g7

0x0c17,	// (0x00009ace) cell_ai5_widget_pane_t1_ParamLimits

0x0c17,	// (0x00009ace) cell_ai5_widget_pane_t1

0x0c34,	// (0x00009aeb) cell_ai5_widget_pane_t2_ParamLimits

0x0c34,	// (0x00009aeb) cell_ai5_widget_pane_t2

0x0c4c,	// (0x00009b03) cell_ai5_widget_pane_t3_ParamLimits

0x0c4c,	// (0x00009b03) cell_ai5_widget_pane_t3

0x0c64,	// (0x00009b1b) cell_ai5_widget_pane_t4_ParamLimits

0x0c64,	// (0x00009b1b) cell_ai5_widget_pane_t4

0x0c7e,	// (0x00009b35) cell_ai5_widget_pane_t5_ParamLimits

0x0c7e,	// (0x00009b35) cell_ai5_widget_pane_t5

0x0c9d,	// (0x00009b54) cell_ai5_widget_pane_t6_ParamLimits

0x0c9d,	// (0x00009b54) cell_ai5_widget_pane_t6

0x0caf,	// (0x00009b66) cell_ai5_widget_pane_t7_ParamLimits

0x0caf,	// (0x00009b66) cell_ai5_widget_pane_t7

0x0cc8,	// (0x00009b7f) cell_ai5_widget_pane_t8_ParamLimits

0x0cc8,	// (0x00009b7f) cell_ai5_widget_pane_t8

0x0009,

0xfe61,	// (0x00018d18) cell_ai5_widget_pane_t_ParamLimits

0xfe61,	// (0x00018d18) cell_ai5_widget_pane_t

0x0d14,	// (0x00009bcb) grid_ai5_widget_pane

0x8d12,	// (0x00011bc9) highlight_cell_ai5_widget_pane_ParamLimits

0x8d12,	// (0x00011bc9) highlight_cell_ai5_widget_pane

0x0d28,	// (0x00009bdf) ai5_sk_left_pane

0x0d32,	// (0x00009be9) ai5_sk_middle_pane

0x0d3c,	// (0x00009bf3) ai5_sk_right_pane

0x0d46,	// (0x00009bfd) bg_ai5_widget_pane_g1_ParamLimits

0x0d46,	// (0x00009bfd) bg_ai5_widget_pane_g1

0x0d52,	// (0x00009c09) bg_ai5_widget_pane_g2_ParamLimits

0x0d52,	// (0x00009c09) bg_ai5_widget_pane_g2

0x0d5e,	// (0x00009c15) bg_ai5_widget_pane_g3_ParamLimits

0x0d5e,	// (0x00009c15) bg_ai5_widget_pane_g3

0x0d6a,	// (0x00009c21) bg_ai5_widget_pane_g4_ParamLimits

0x0d6a,	// (0x00009c21) bg_ai5_widget_pane_g4

0x0d76,	// (0x00009c2d) bg_ai5_widget_pane_g5_ParamLimits

0x0d76,	// (0x00009c2d) bg_ai5_widget_pane_g5

0x0d82,	// (0x00009c39) bg_ai5_widget_pane_g6_ParamLimits

0x0d82,	// (0x00009c39) bg_ai5_widget_pane_g6

0x0d8e,	// (0x00009c45) bg_ai5_widget_pane_g7_ParamLimits

0x0d8e,	// (0x00009c45) bg_ai5_widget_pane_g7

0x0d9a,	// (0x00009c51) bg_ai5_widget_pane_g8_ParamLimits

0x0d9a,	// (0x00009c51) bg_ai5_widget_pane_g8

0x0da6,	// (0x00009c5d) bg_ai5_widget_pane_g9_ParamLimits

0x0da6,	// (0x00009c5d) bg_ai5_widget_pane_g9

0x0008,

0xfe76,	// (0x00018d2d) bg_ai5_widget_pane_g_ParamLimits

0xfe76,	// (0x00018d2d) bg_ai5_widget_pane_g

0x0dd9,	// (0x00009c90) cell_shortcut_ai5_widget_pane_ParamLimits

0x0dd9,	// (0x00009c90) cell_shortcut_ai5_widget_pane

0x801c,	// (0x00010ed3) bg_cell_shortcut_ai5_widget_pane

0x0dea,	// (0x00009ca1) cell_grid_ai5_widget_pane_g1

0x0df3,	// (0x00009caa) highlight_cell_shortcut_ai5_widget_pane

0xa9cb,	// (0x00013882) ai5_sk_left_pane_g1

0x0dfb,	// (0x00009cb2) ai5_sk_left_pane_g2

0x0e03,	// (0x00009cba) ai5_sk_left_pane_g3

0x0e0b,	// (0x00009cc2) ai5_sk_left_pane_g4

0x0003,

0xfe89,	// (0x00018d40) ai5_sk_left_pane_g

0x0e13,	// (0x00009cca) ai5_sk_left_pane_t1

0xa9d3,	// (0x0001388a) ai5_sk_right_pane_g1

0x0e21,	// (0x00009cd8) ai5_sk_right_pane_g2

0x0e29,	// (0x00009ce0) ai5_sk_right_pane_g3

0x0e31,	// (0x00009ce8) ai5_sk_right_pane_g4

0x0003,

0xfe92,	// (0x00018d49) ai5_sk_right_pane_g

0x0e39,	// (0x00009cf0) ai5_sk_right_pane_t1

0xa9d3,	// (0x0001388a) ai5_sk_middle_pane_g1

0xa9cb,	// (0x00013882) ai5_sk_middle_pane_g2

0xa9eb,	// (0x000138a2) ai5_sk_middle_pane_g3

0x0e29,	// (0x00009ce0) ai5_sk_middle_pane_g4

0x0e03,	// (0x00009cba) ai5_sk_middle_pane_g5

0x0e47,	// (0x00009cfe) ai5_sk_middle_pane_g6

0x0e4f,	// (0x00009d06) ai5_sk_middle_pane_g7

0x0006,

0xfe9b,	// (0x00018d52) ai5_sk_middle_pane_g

0xa4d9,	// (0x00013390) aid_touch_area_size_lc0_ParamLimits

0xa4d9,	// (0x00013390) aid_touch_area_size_lc0

0x73d6,	// (0x0001028d) cell_hwr_candidate_pane_t1_ParamLimits

0xa4f5,	// (0x000133ac) aid_touch_navi_pane

0xa7c2,	// (0x00013679) status_dt_navi_pane_ParamLimits

0xa7c2,	// (0x00013679) status_dt_navi_pane

0xa7cf,	// (0x00013686) status_dt_sta_pane_ParamLimits

0xa7cf,	// (0x00013686) status_dt_sta_pane

0x0e57,	// (0x00009d0e) dt_sta_controll_pane

0x0e64,	// (0x00009d1b) dt_sta_indi_pane

0x0e71,	// (0x00009d28) dt_sta_title_pane

0x81dc,	// (0x00011093) bg_dt_sta_indi_pane_ParamLimits

0x81dc,	// (0x00011093) bg_dt_sta_indi_pane

0x0e82,	// (0x00009d39) dt_sta_battery_pane

0x0e8a,	// (0x00009d41) dt_sta_indi_pane_g1

0x0e93,	// (0x00009d4a) dt_sta_indi_pane_g2

0x0e9c,	// (0x00009d53) dt_sta_indi_pane_g3

0x0002,

0xfeaa,	// (0x00018d61) dt_sta_indi_pane_g

0x0ea5,	// (0x00009d5c) dt_sta_signal_pane

0x8d12,	// (0x00011bc9) bg_dt_sta_title_pane_ParamLimits

0x8d12,	// (0x00011bc9) bg_dt_sta_title_pane

0xb8dc,	// (0x00014793) dt_sta_title_pane_g1

0x0eae,	// (0x00009d65) dt_sta_title_pane_t1_ParamLimits

0x0eae,	// (0x00009d65) dt_sta_title_pane_t1

0x7e45,	// (0x00010cfc) bg_dt_sta_control_pane

0x0ec3,	// (0x00009d7a) dt_sta_controll_pane_g1

0x0ecc,	// (0x00009d83) bg_dt_sta_title_pane_g1

0x0ed5,	// (0x00009d8c) bg_dt_sta_title_pane_g2

0x0ede,	// (0x00009d95) bg_dt_sta_title_pane_g3

0x0002,

0xfeb1,	// (0x00018d68) bg_dt_sta_title_pane_g

0xd3c2,	// (0x00016279) bg_dt_sta_indi_pane_g1

0x0ee7,	// (0x00009d9e) dt_sta_signal_pane_g1

0x0eef,	// (0x00009da6) dt_sta_signal_pane_g2

0x0001,

0xfeb8,	// (0x00018d6f) dt_sta_signal_pane_g

0x0ef7,	// (0x00009dae) dt_sta_battery_pane_g1

0x0f00,	// (0x00009db7) dt_sta_battery_pane_t1

0xd3c2,	// (0x00016279) bg_dt_sta_control_pane_g1

0x95fe,	// (0x000124b5) fep_china_uni_eep_pane

0x9606,	// (0x000124bd) fep_china_uni_entry_pane_ParamLimits

0x9616,	// (0x000124cd) popup_fep_china_uni_window_g1_ParamLimits

0x9626,	// (0x000124dd) popup_fep_china_uni_window_g2_ParamLimits

0x9626,	// (0x000124dd) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x000185e7) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x000185e7) popup_fep_china_uni_window_g

0x0f0f,	// (0x00009dc6) fep_china_uni_eep_pane_g1

0x0f17,	// (0x00009dce) fep_china_uni_eep_pane_t1

0x0980,	// (0x00009837) aid_touch_area_size_smil_player

0xa645,	// (0x000134fc) lc0_clock_pane

0xa824,	// (0x000136db) status_pane_g5_ParamLimits

0xa824,	// (0x000136db) status_pane_g5

0xa09b,	// (0x00012f52) popup_keymap_window

0xa7e4,	// (0x0001369b) status_icon_pane

0x0b8c,	// (0x00009a43) cell_ai5_widget_pane_g3_ParamLimits

0x0bab,	// (0x00009a62) cell_ai5_widget_pane_g4_ParamLimits

0x0bb7,	// (0x00009a6e) cell_ai5_widget_pane_g5_ParamLimits

0x0bdb,	// (0x00009a92) cell_ai5_widget_pane_g8_ParamLimits

0x0bdb,	// (0x00009a92) cell_ai5_widget_pane_g8

0x0bef,	// (0x00009aa6) cell_ai5_widget_pane_g9_ParamLimits

0x0bef,	// (0x00009aa6) cell_ai5_widget_pane_g9

0x0c03,	// (0x00009aba) cell_ai5_widget_pane_g10_ParamLimits

0x0c03,	// (0x00009aba) cell_ai5_widget_pane_g10

0x0f26,	// (0x00009ddd) status_icon_pane_g1

0x7e45,	// (0x00010cfc) bg_popup_sub_pane_cp13

0x0f2e,	// (0x00009de5) popup_keymap_window_t1

0x9e51,	// (0x00012d08) control_pane_g6_ParamLimits

0x9e51,	// (0x00012d08) control_pane_g6

0x9e5e,	// (0x00012d15) control_pane_g7_ParamLimits

0x9e5e,	// (0x00012d15) control_pane_g7

0x9e6b,	// (0x00012d22) control_pane_g8_ParamLimits

0x9e6b,	// (0x00012d22) control_pane_g8

0x0e57,	// (0x00009d0e) dt_sta_controll_pane_ParamLimits

0x0e64,	// (0x00009d1b) dt_sta_indi_pane_ParamLimits

0x0e71,	// (0x00009d28) dt_sta_title_pane_ParamLimits

0x86de,	// (0x00011595) aid_size_touch_scroll_bar_cale

0x643d,	// (0x0000f2f4) popup_discreet_window_ParamLimits

0x643d,	// (0x0000f2f4) popup_discreet_window

0x64b7,	// (0x0000f36e) popup_sk_window

0xb11a,	// (0x00013fd1) bg_popup_sub_pane_cp28_ParamLimits

0xb11a,	// (0x00013fd1) bg_popup_sub_pane_cp28

0x0f3c,	// (0x00009df3) popup_discreet_window_g1_ParamLimits

0x0f3c,	// (0x00009df3) popup_discreet_window_g1

0x0f5c,	// (0x00009e13) popup_discreet_window_t1_ParamLimits

0x0f5c,	// (0x00009e13) popup_discreet_window_t1

0x0f7a,	// (0x00009e31) popup_discreet_window_t2_ParamLimits

0x0f7a,	// (0x00009e31) popup_discreet_window_t2

0x0002,

0xfebd,	// (0x00018d74) popup_discreet_window_t_ParamLimits

0xfebd,	// (0x00018d74) popup_discreet_window_t

0x7dbf,	// (0x00010c76) popup_sk_window_g1

0x7dc9,	// (0x00010c80) popup_sk_window_g2

0x0001,

0xfec4,	// (0x00018d7b) popup_sk_window_g

0x7dd3,	// (0x00010c8a) popup_sk_window_t1

0x7de1,	// (0x00010c98) popup_sk_window_t1_copy1

0x0b7c,	// (0x00009a33) cell_ai5_widget_pane_g2_ParamLimits

0x0cda,	// (0x00009b91) cell_ai5_widget_pane_t9_ParamLimits

0x0cda,	// (0x00009b91) cell_ai5_widget_pane_t9

0x7e45,	// (0x00010cfc) main_fep_fshwr2_pane

0x0ffc,	// (0x00009eb3) aid_fshwr2_btn_pane

0x1004,	// (0x00009ebb) aid_fshwr2_syb_pane

0x100c,	// (0x00009ec3) aid_fshwr2_txt_pane

0x1014,	// (0x00009ecb) fshwr2_func_candi_pane

0x1020,	// (0x00009ed7) fshwr2_hwr_syb_pane

0x102c,	// (0x00009ee3) fshwr2_icf_pane

0x7e45,	// (0x00010cfc) fshwr2_icf_bg_pane

0x104a,	// (0x00009f01) fshwr2_icf_pane_t1_ParamLimits

0x104a,	// (0x00009f01) fshwr2_icf_pane_t1

0xd3c2,	// (0x00016279) fshwr2_func_candi_pane_g1

0x1061,	// (0x00009f18) fshwr2_func_candi_row_pane_ParamLimits

0x1061,	// (0x00009f18) fshwr2_func_candi_row_pane

0x1072,	// (0x00009f29) cell_fshwr2_syb_pane_ParamLimits

0x1072,	// (0x00009f29) cell_fshwr2_syb_pane

0xd63d,	// (0x000164f4) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd63d,	// (0x000164f4) fshwr2_hwr_syb_pane_g1

0x7e45,	// (0x00010cfc) bg_popup_call_pane_cp01

0x108e,	// (0x00009f45) fshwr2_func_candi_cell_pane_ParamLimits

0x108e,	// (0x00009f45) fshwr2_func_candi_cell_pane

0x10bf,	// (0x00009f76) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x10bf,	// (0x00009f76) fshwr2_func_candi_cell_bg_pane

0x10d9,	// (0x00009f90) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x10d9,	// (0x00009f90) fshwr2_func_candi_cell_pane_g1

0x10f9,	// (0x00009fb0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x10f9,	// (0x00009fb0) fshwr2_func_candi_cell_pane_t1

0x7e45,	// (0x00010cfc) bg_button_pane_cp08

0x9b8a,	// (0x00012a41) cell_fshwr2_syb_bg_pane

0x110c,	// (0x00009fc3) cell_fshwr2_syb_bg_pane_g1

0x1114,	// (0x00009fcb) cell_fshwr2_syb_bg_pane_t1

0x8d12,	// (0x00011bc9) main_tmo_pane

0xbc19,	// (0x00014ad0) uni_indicator_pane_g1_ParamLimits

0xbc2e,	// (0x00014ae5) uni_indicator_pane_g2_ParamLimits

0xbc44,	// (0x00014afb) uni_indicator_pane_g3_ParamLimits

0xbc5a,	// (0x00014b11) uni_indicator_pane_g4_ParamLimits

0xbc5a,	// (0x00014b11) uni_indicator_pane_g4

0xbc6e,	// (0x00014b25) uni_indicator_pane_g5_ParamLimits

0xbc6e,	// (0x00014b25) uni_indicator_pane_g5

0xbc82,	// (0x00014b39) uni_indicator_pane_g6_ParamLimits

0xbc82,	// (0x00014b39) uni_indicator_pane_g6

0xf92d,	// (0x000187e4) uni_indicator_pane_g_ParamLimits

0xebe5,	// (0x00017a9c) popup_tmo_note_window_ParamLimits

0xebe5,	// (0x00017a9c) popup_tmo_note_window

0x7e45,	// (0x00010cfc) fshwr2_bg_pane

0x10ea,	// (0x00009fa1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x10ea,	// (0x00009fa1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec9,	// (0x00018d80) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec9,	// (0x00018d80) fshwr2_func_candi_cell_pane_g

0xd3c2,	// (0x00016279) bg_popup_window_pane_cp01

0x1123,	// (0x00009fda) bg_popup_window_pane_g1_cp01

0x112c,	// (0x00009fe3) bg_popup_window_pane_cp22_ParamLimits

0x112c,	// (0x00009fe3) bg_popup_window_pane_cp22

0x113a,	// (0x00009ff1) listscroll_tmo_link_pane_ParamLimits

0x113a,	// (0x00009ff1) listscroll_tmo_link_pane

0x117a,	// (0x0000a031) popup_tmo_note_window_g1_ParamLimits

0x117a,	// (0x0000a031) popup_tmo_note_window_g1

0x1187,	// (0x0000a03e) tmo_note_info_pane_ParamLimits

0x1187,	// (0x0000a03e) tmo_note_info_pane

0x11a1,	// (0x0000a058) list_tmo_note_info_pane_g1_ParamLimits

0x11a1,	// (0x0000a058) list_tmo_note_info_pane_g1

0x11b8,	// (0x0000a06f) list_tmo_note_info_pane_g2_ParamLimits

0x11b8,	// (0x0000a06f) list_tmo_note_info_pane_g2

0x0001,

0xfece,	// (0x00018d85) list_tmo_note_info_pane_g_ParamLimits

0xfece,	// (0x00018d85) list_tmo_note_info_pane_g

0x11d4,	// (0x0000a08b) list_tmo_note_info_text_pane_ParamLimits

0x11d4,	// (0x0000a08b) list_tmo_note_info_text_pane

0x1259,	// (0x0000a110) list_tmo_link_pane

0x1266,	// (0x0000a11d) scroll_pane_cp20

0x1273,	// (0x0000a12a) list_single_tmo_link_pane_ParamLimits

0x1273,	// (0x0000a12a) list_single_tmo_link_pane

0x1283,	// (0x0000a13a) list_single_tmo_link_pane_t1

0x1291,	// (0x0000a148) list_tmo_note_info_text_pane_t1_ParamLimits

0x1291,	// (0x0000a148) list_tmo_note_info_text_pane_t1

0x8f55,	// (0x00011e0c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8f55,	// (0x00011e0c) aid_size_touch_scroll_bar_cp01

0x8dcc,	// (0x00011c83) aid_size_touch_slider_marker

0x649f,	// (0x0000f356) popup_settings_window_ParamLimits

0x649f,	// (0x0000f356) popup_settings_window

0x9f2c,	// (0x00012de3) popup_candi_list_indi_window

0xa4f5,	// (0x000133ac) aid_touch_navi_pane_ParamLimits

0x759c,	// (0x00010453) rs_clock_indi_pane

0x75a5,	// (0x0001045c) sctrl_sk_bottom_pane_ParamLimits

0x75b6,	// (0x0001046d) sctrl_sk_top_pane_ParamLimits

0x76b9,	// (0x00010570) popup_fep_tooltip_window

0x0b1e,	// (0x000099d5) aid_size_cell_widget_grid_ParamLimits

0x0b70,	// (0x00009a27) cell_ai5_widget_pane_g1_ParamLimits

0x0b70,	// (0x00009a27) cell_ai5_widget_pane_g1

0x0bc3,	// (0x00009a7a) cell_ai5_widget_pane_g6_ParamLimits

0x0bcf,	// (0x00009a86) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4c,	// (0x00018d03) cell_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x00018d03) cell_ai5_widget_pane_g

0x0cfe,	// (0x00009bb5) cell_ai5_widget_pane_t10_ParamLimits

0x0cfe,	// (0x00009bb5) cell_ai5_widget_pane_t10

0x0d14,	// (0x00009bcb) grid_ai5_widget_pane_ParamLimits

0x0db2,	// (0x00009c69) cell_contacts_ai5_widget_pane_ParamLimits

0x0db2,	// (0x00009c69) cell_contacts_ai5_widget_pane

0x0f8f,	// (0x00009e46) popup_discreet_window_t3_ParamLimits

0x0f8f,	// (0x00009e46) popup_discreet_window_t3

0x1036,	// (0x00009eed) popup_fshwr2_char_preview_window_ParamLimits

0x1036,	// (0x00009eed) popup_fshwr2_char_preview_window

0x11f2,	// (0x0000a0a9) tmo_note_info_pane_t1

0x1207,	// (0x0000a0be) tmo_note_info_pane_t2

0x1220,	// (0x0000a0d7) tmo_note_info_pane_t3

0x1235,	// (0x0000a0ec) tmo_note_info_pane_t4

0x1247,	// (0x0000a0fe) tmo_note_info_pane_t5

0x0004,

0xfed3,	// (0x00018d8a) tmo_note_info_pane_t

0x1259,	// (0x0000a110) list_tmo_link_pane_ParamLimits

0x1266,	// (0x0000a11d) scroll_pane_cp20_ParamLimits

0x7e45,	// (0x00010cfc) bg_popup_fep_char_preview_window_cp01

0x12aa,	// (0x0000a161) popup_fshwr2_char_preview_window_t1

0x12b8,	// (0x0000a16f) popup_candi_list_indi_window_g1

0x12c1,	// (0x0000a178) bg_cell_contacts_ai5_widget_pane

0x12cd,	// (0x0000a184) cell_contacts_ai5_widget_pane_g1

0x12e0,	// (0x0000a197) cell_contacts_ai5_widget_pane_g2

0x12ec,	// (0x0000a1a3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfede,	// (0x00018d95) cell_contacts_ai5_widget_pane_g

0x12fe,	// (0x0000a1b5) cell_contacts_ai5_widget_pane_t1

0x8d12,	// (0x00011bc9) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1378,	// (0x0000a22f) settings_container_pane

0x9b8a,	// (0x00012a41) listscroll_set_pane_copy1

0xc89c,	// (0x00015753) scroll_pane_cp121_copy1

0x1384,	// (0x0000a23b) set_content_pane_copy1

0x138c,	// (0x0000a243) aid_height_set_list_copy1_ParamLimits

0x138c,	// (0x0000a243) aid_height_set_list_copy1

0xbe9d,	// (0x00014d54) aid_size_parent_copy1_ParamLimits

0xbe9d,	// (0x00014d54) aid_size_parent_copy1

0x1398,	// (0x0000a24f) button_value_adjust_pane_cp6_copy1_ParamLimits

0x1398,	// (0x0000a24f) button_value_adjust_pane_cp6_copy1

0x9f04,	// (0x00012dbb) list_highlight_pane_cp2_copy1_ParamLimits

0x9f04,	// (0x00012dbb) list_highlight_pane_cp2_copy1

0x13ac,	// (0x0000a263) list_set_pane_copy1_ParamLimits

0x13ac,	// (0x0000a263) list_set_pane_copy1

0x1313,	// (0x0000a1ca) main_pane_set_t1_copy1_ParamLimits

0x1313,	// (0x0000a1ca) main_pane_set_t1_copy1

0x134d,	// (0x0000a204) main_pane_set_t2_copy1_ParamLimits

0x134d,	// (0x0000a204) main_pane_set_t2_copy1

0x1459,	// (0x0000a310) main_pane_set_t3_copy1

0x1467,	// (0x0000a31e) main_pane_set_t4_copy1

0x136c,	// (0x0000a223) set_content_pane_g1_copy1_ParamLimits

0x136c,	// (0x0000a223) set_content_pane_g1_copy1

0x1475,	// (0x0000a32c) setting_code_pane_copy1

0x147f,	// (0x0000a336) setting_slider_graphic_pane_copy1

0x147f,	// (0x0000a336) setting_slider_pane_copy1

0x147f,	// (0x0000a336) setting_text_pane_copy1

0x1489,	// (0x0000a340) setting_volume_pane_copy1

0x1492,	// (0x0000a349) settings_code_pane_cp2_copy1

0x149a,	// (0x0000a351) settings_code_pane_cp_copy1_ParamLimits

0x149a,	// (0x0000a351) settings_code_pane_cp_copy1

0x14ae,	// (0x0000a365) volume_set_pane_copy1

0x14b6,	// (0x0000a36d) volume_set_pane_g10_copy1

0x14be,	// (0x0000a375) volume_set_pane_g1_copy1

0x14c6,	// (0x0000a37d) volume_set_pane_g2_copy1

0x14ce,	// (0x0000a385) volume_set_pane_g3_copy1

0x14d6,	// (0x0000a38d) volume_set_pane_g4_copy1

0x14de,	// (0x0000a395) volume_set_pane_g5_copy1

0x14e6,	// (0x0000a39d) volume_set_pane_g6_copy1

0x14ee,	// (0x0000a3a5) volume_set_pane_g7_copy1

0x14f6,	// (0x0000a3ad) volume_set_pane_g8_copy1

0x14fe,	// (0x0000a3b5) volume_set_pane_g9_copy1

0x7f39,	// (0x00010df0) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f39,	// (0x00010df0) bg_set_opt_pane_cp_copy1

0x1506,	// (0x0000a3bd) setting_slider_pane_t1_copy1_ParamLimits

0x1506,	// (0x0000a3bd) setting_slider_pane_t1_copy1

0x1524,	// (0x0000a3db) setting_slider_pane_t2_copy1_ParamLimits

0x1524,	// (0x0000a3db) setting_slider_pane_t2_copy1

0x153e,	// (0x0000a3f5) setting_slider_pane_t3_copy1_ParamLimits

0x153e,	// (0x0000a3f5) setting_slider_pane_t3_copy1

0x1556,	// (0x0000a40d) slider_set_pane_copy1_ParamLimits

0x1556,	// (0x0000a40d) slider_set_pane_copy1

0x8e4e,	// (0x00011d05) set_opt_bg_pane_g1_copy2

0x8e56,	// (0x00011d0d) set_opt_bg_pane_g2_copy2

0x156c,	// (0x0000a423) set_opt_bg_pane_g3_copy2

0x8e66,	// (0x00011d1d) set_opt_bg_pane_g4_copy2

0x8e6e,	// (0x00011d25) set_opt_bg_pane_g5_copy2

0x8e76,	// (0x00011d2d) set_opt_bg_pane_g6_copy2

0x1576,	// (0x0000a42d) set_opt_bg_pane_g7_copy2

0x157e,	// (0x0000a435) set_opt_bg_pane_g8_copy2

0x1588,	// (0x0000a43f) set_opt_bg_pane_g9_copy2

0x7def,	// (0x00010ca6) aid_size_touch_slider_mark_copy1_ParamLimits

0x7def,	// (0x00010ca6) aid_size_touch_slider_mark_copy1

0x15a6,	// (0x0000a45d) slider_set_pane_g1_copy1

0x7e03,	// (0x00010cba) slider_set_pane_g2_copy1

0x6f7f,	// (0x0000fe36) slider_set_pane_g3_copy1_ParamLimits

0x6f7f,	// (0x0000fe36) slider_set_pane_g3_copy1

0x6f93,	// (0x0000fe4a) slider_set_pane_g4_copy1_ParamLimits

0x6f93,	// (0x0000fe4a) slider_set_pane_g4_copy1

0x6fab,	// (0x0000fe62) slider_set_pane_g5_copy1_ParamLimits

0x6fab,	// (0x0000fe62) slider_set_pane_g5_copy1

0x6f7f,	// (0x0000fe36) slider_set_pane_g6_copy1_ParamLimits

0x6f7f,	// (0x0000fe36) slider_set_pane_g6_copy1

0x7e0b,	// (0x00010cc2) slider_set_pane_g7_copy1_ParamLimits

0x7e0b,	// (0x00010cc2) slider_set_pane_g7_copy1

0x7e59,	// (0x00010d10) bg_set_opt_pane_cp2_copy1

0x15cd,	// (0x0000a484) setting_slider_graphic_pane_g1_copy1

0x15d6,	// (0x0000a48d) setting_slider_graphic_pane_t1_copy1

0x15e6,	// (0x0000a49d) setting_slider_graphic_pane_t2_copy1

0x15f6,	// (0x0000a4ad) slider_set_pane_cp_copy1

0x1606,	// (0x0000a4bd) input_focus_pane_cp1_copy1

0x160f,	// (0x0000a4c6) list_set_text_pane_copy1

0x1617,	// (0x0000a4ce) setting_text_pane_g1_copy1

0x1620,	// (0x0000a4d7) set_text_pane_t1_copy1

0x1606,	// (0x0000a4bd) input_focus_pane_cp2_copy1

0x1617,	// (0x0000a4ce) setting_code_pane_g1_copy1

0x163d,	// (0x0000a4f4) setting_code_pane_t1_copy1

0x164b,	// (0x0000a502) list_set_graphic_pane_copy1

0x7e59,	// (0x00010d10) bg_set_opt_pane_cp4_copy1

0x988c,	// (0x00012743) list_set_graphic_pane_g1_copy1_ParamLimits

0x988c,	// (0x00012743) list_set_graphic_pane_g1_copy1

0x165f,	// (0x0000a516) list_set_graphic_pane_g2_copy1

0x98a4,	// (0x0001275b) list_set_graphic_pane_t1_copy1_ParamLimits

0x98a4,	// (0x0001275b) list_set_graphic_pane_t1_copy1

0xd3c2,	// (0x00016279) rs_clock_indi_pane_g1

0x1667,	// (0x0000a51e) rs_clock_indi_pane_t1

0x1675,	// (0x0000a52c) rs_indi_pane

0x167d,	// (0x0000a534) rs_indi_pane_g1

0x1686,	// (0x0000a53d) rs_indi_pane_g2

0x168f,	// (0x0000a546) rs_indi_pane_g3

0x0002,

0xfee5,	// (0x00018d9c) rs_indi_pane_g

0x9b8a,	// (0x00012a41) bg_popup_preview_window_pane_cp03

0x1698,	// (0x0000a54f) popup_fep_tooltip_window_t1

0xe223,	// (0x000170da) popup_note2_window_g2_ParamLimits

0xe223,	// (0x000170da) popup_note2_window_g2

0x0001,

0xfc85,	// (0x00018b3c) popup_note2_window_g_ParamLimits

0xfc85,	// (0x00018b3c) popup_note2_window_g

0xe805,	// (0x000176bc) bg_popup_sub_pane_cp11_ParamLimits

0xe812,	// (0x000176c9) cell_ai3_links_pane_g1_ParamLimits

0xe829,	// (0x000176e0) cell_ai3_links_pane_t1

0x1620,	// (0x0000a4d7) set_text_pane_t1_copy1_ParamLimits

0x9a99,	// (0x00012950) cell_graphic_popup_pane_cp2_ParamLimits

0x9a99,	// (0x00012950) cell_graphic_popup_pane_cp2

0x16a6,	// (0x0000a55d) cell_graphic_popup_pane_g1_cp2

0x84f1,	// (0x000113a8) cell_graphic_popup_pane_g2_cp2

0x16ae,	// (0x0000a565) cell_graphic_popup_pane_g3_cp2

0x16b6,	// (0x0000a56d) cell_graphic_popup_pane_t2_cp2

0x8502,	// (0x000113b9) grid_highlight_pane_cp3_cp2

0x9238,	// (0x000120ef) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8d12,	// (0x00011bc9) main_tmo_pane_ParamLimits

0xebd9,	// (0x00017a90) popup_tmo_big_image_note_window

0x0b60,	// (0x00009a17) cell_ai5_widget_list_pane

0x0b68,	// (0x00009a1f) cell_ai5_widget_lrg_icon_pane

0x11f2,	// (0x0000a0a9) tmo_note_info_pane_t1_ParamLimits

0x1207,	// (0x0000a0be) tmo_note_info_pane_t2_ParamLimits

0x1220,	// (0x0000a0d7) tmo_note_info_pane_t3_ParamLimits

0x1235,	// (0x0000a0ec) tmo_note_info_pane_t4_ParamLimits

0x1247,	// (0x0000a0fe) tmo_note_info_pane_t5_ParamLimits

0xfed3,	// (0x00018d8a) tmo_note_info_pane_t_ParamLimits

0x1378,	// (0x0000a22f) settings_container_pane_ParamLimits

0x15fe,	// (0x0000a4b5) indicator_popup_pane_cp5

0x15fe,	// (0x0000a4b5) indicator_popup_pane_cp6

0x164b,	// (0x0000a502) list_set_graphic_pane_copy1_ParamLimits

0x7e45,	// (0x00010cfc) bg_popup_window_pane_cp23

0x16c4,	// (0x0000a57b) popup_tmo_big_image_note_window_g1

0x16cf,	// (0x0000a586) popup_tmo_big_image_note_window_t1

0x16df,	// (0x0000a596) popup_tmo_big_image_note_window_t2

0x16ef,	// (0x0000a5a6) popup_tmo_big_image_note_window_t3

0x0002,

0xfeec,	// (0x00018da3) popup_tmo_big_image_note_window_t

0x16ff,	// (0x0000a5b6) cell_ai5_widget_lrg_icon_pane_g1

0x1707,	// (0x0000a5be) cell_ai5_widget_lrg_icon_pane_t1

0x1715,	// (0x0000a5cc) cell_ai5_widget_list_row_pane_ParamLimits

0x1715,	// (0x0000a5cc) cell_ai5_widget_list_row_pane

0x172e,	// (0x0000a5e5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x172e,	// (0x0000a5e5) cell_ai5_widget_list_row_pane_g1

0x173b,	// (0x0000a5f2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x173b,	// (0x0000a5f2) cell_ai5_widget_list_row_pane_t1

0x1753,	// (0x0000a60a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x1753,	// (0x0000a60a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef3,	// (0x00018daa) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef3,	// (0x00018daa) cell_ai5_widget_list_row_pane_t

0x6364,	// (0x0000f21b) main_fep_vtchi_ss_pane

0x1765,	// (0x0000a61c) popup_fep_char_pre_window

0x176d,	// (0x0000a624) popup_fep_ituss_window

0x1787,	// (0x0000a63e) popup_fep_vkbss_window

0x17a5,	// (0x0000a65c) grid_vkbss_keypad_pane_ParamLimits

0x17a5,	// (0x0000a65c) grid_vkbss_keypad_pane

0x17b5,	// (0x0000a66c) ituss_keypad_pane

0x17cb,	// (0x0000a682) aid_vkbss_key_offset_ParamLimits

0x17cb,	// (0x0000a682) aid_vkbss_key_offset

0x17d7,	// (0x0000a68e) cell_vkbss_key_pane_ParamLimits

0x17d7,	// (0x0000a68e) cell_vkbss_key_pane

0xa800,	// (0x000136b7) bg_cell_vkbss_key_g1_ParamLimits

0xa800,	// (0x000136b7) bg_cell_vkbss_key_g1

0x17ed,	// (0x0000a6a4) cell_vkbss_key_3p_pane_ParamLimits

0x17ed,	// (0x0000a6a4) cell_vkbss_key_3p_pane

0x1807,	// (0x0000a6be) cell_vkbss_key_g1_ParamLimits

0x1807,	// (0x0000a6be) cell_vkbss_key_g1

0x1821,	// (0x0000a6d8) cell_vkbss_key_t1_ParamLimits

0x1821,	// (0x0000a6d8) cell_vkbss_key_t1

0x184c,	// (0x0000a703) cell_ituss_key_pane_ParamLimits

0x184c,	// (0x0000a703) cell_ituss_key_pane

0x185c,	// (0x0000a713) bg_cell_ituss_key_g1_ParamLimits

0x185c,	// (0x0000a713) bg_cell_ituss_key_g1

0x1868,	// (0x0000a71f) cell_ituss_key_pane_g1_ParamLimits

0x1868,	// (0x0000a71f) cell_ituss_key_pane_g1

0x1874,	// (0x0000a72b) cell_ituss_key_pane_g2_ParamLimits

0x1874,	// (0x0000a72b) cell_ituss_key_pane_g2

0x0001,

0xfef8,	// (0x00018daf) cell_ituss_key_pane_g_ParamLimits

0xfef8,	// (0x00018daf) cell_ituss_key_pane_g

0x188d,	// (0x0000a744) cell_ituss_key_t1_ParamLimits

0x188d,	// (0x0000a744) cell_ituss_key_t1

0x18bb,	// (0x0000a772) cell_ituss_key_t2_ParamLimits

0x18bb,	// (0x0000a772) cell_ituss_key_t2

0x18ec,	// (0x0000a7a3) cell_ituss_key_t3_ParamLimits

0x18ec,	// (0x0000a7a3) cell_ituss_key_t3

0x191d,	// (0x0000a7d4) cell_ituss_key_t4_ParamLimits

0x191d,	// (0x0000a7d4) cell_ituss_key_t4

0x0003,

0xfefd,	// (0x00018db4) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x00018db4) cell_ituss_key_t

0x194e,	// (0x0000a805) cell_vkbss_key_3p_pane_g1

0x1956,	// (0x0000a80d) cell_vkbss_key_3p_pane_g2

0x195e,	// (0x0000a815) cell_vkbss_key_3p_pane_g3

0x0002,

0xff06,	// (0x00018dbd) cell_vkbss_key_3p_pane_g

0x7e45,	// (0x00010cfc) bg_popup_fep_char_preview_window_cp02

0x1966,	// (0x0000a81d) popup_fep_char_pre_window_t1

0x0b14,	// (0x000099cb) main_ai5_sk_pane

0x12c1,	// (0x0000a178) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x12cd,	// (0x0000a184) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x12e0,	// (0x0000a197) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x12ec,	// (0x0000a1a3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfede,	// (0x00018d95) cell_contacts_ai5_widget_pane_g_ParamLimits

0x12fe,	// (0x0000a1b5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8d12,	// (0x00011bc9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x1975,	// (0x0000a82c) main_ai5_sk_pane_g1

0xaf58,	// (0x00013e0f) popup_query_code_window_g1

0x177c,	// (0x0000a633) popup_fep_vkb_icf_pane

0x1790,	// (0x0000a647) popup_fep_vtchi_icf_pane

0x8d12,	// (0x00011bc9) bg_icf_pane

0x198d,	// (0x0000a844) list_vkb_icf_pane

0x8d12,	// (0x00011bc9) bg_icf_pane_cp01

0x19a5,	// (0x0000a85c) vtchi_icf_list_pane

0x19b5,	// (0x0000a86c) list_vkb_icf_pane_t1_ParamLimits

0x19b5,	// (0x0000a86c) list_vkb_icf_pane_t1

0x19cf,	// (0x0000a886) vtchi_icf_list_pane_t1_ParamLimits

0x19cf,	// (0x0000a886) vtchi_icf_list_pane_t1

0x176d,	// (0x0000a624) popup_fep_ituss_window_ParamLimits

0x1790,	// (0x0000a647) popup_fep_vtchi_icf_pane_ParamLimits

0x17b5,	// (0x0000a66c) ituss_keypad_pane_ParamLimits

0x17c1,	// (0x0000a678) ituss_sks_pane

0x8d12,	// (0x00011bc9) bg_icf_pane_ParamLimits

0x197e,	// (0x0000a835) icf_edit_indi_pane_ParamLimits

0x197e,	// (0x0000a835) icf_edit_indi_pane

0x198d,	// (0x0000a844) list_vkb_icf_pane_ParamLimits

0x8d12,	// (0x00011bc9) bg_icf_pane_cp01_ParamLimits

0x1999,	// (0x0000a850) icf_edit_indi_pane_cp01_ParamLimits

0x1999,	// (0x0000a850) icf_edit_indi_pane_cp01

0x19ad,	// (0x0000a864) vtchi_query_pane

0xd63d,	// (0x000164f4) icf_edit_indi_pane_g1_ParamLimits

0xd63d,	// (0x000164f4) icf_edit_indi_pane_g1

0x19f6,	// (0x0000a8ad) icf_edit_indi_pane_g2_ParamLimits

0x19f6,	// (0x0000a8ad) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x00018dc4) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x00018dc4) icf_edit_indi_pane_g

0x1a02,	// (0x0000a8b9) icf_edit_indi_pane_t1

0x1a10,	// (0x0000a8c7) bg_input_focus_pane_cp042

0x86d5,	// (0x0001158c) vtchi_button_pane

0x1a19,	// (0x0000a8d0) vtchi_query_pane_t1

0x1a27,	// (0x0000a8de) vtchi_query_pane_t2

0x1a35,	// (0x0000a8ec) vtchi_query_pane_t3

0x0002,

0xff12,	// (0x00018dc9) vtchi_query_pane_t

0x7e45,	// (0x00010cfc) bg_button_pane_cp13

0x1a43,	// (0x0000a8fa) vtchi_button_pane_g1

0x1a4b,	// (0x0000a902) ituss_sks_pane_g1

0x1a56,	// (0x0000a90d) ituss_sks_pane_g2

0x0001,

0xff19,	// (0x00018dd0) ituss_sks_pane_g

0x1a5e,	// (0x0000a915) ituss_sks_pane_t1

0x1a6c,	// (0x0000a923) ituss_sks_pane_t2

0x0001,

0xff1e,	// (0x00018dd5) ituss_sks_pane_t

0xcda3,	// (0x00015c5a) indicator_nsta_pane_cp_g1

0xcdac,	// (0x00015c63) indicator_nsta_pane_cp_g2

0xcdb4,	// (0x00015c6b) indicator_nsta_pane_cp_g3

0xcdbc,	// (0x00015c73) indicator_nsta_pane_cp_g4

0xcdc4,	// (0x00015c7b) indicator_nsta_pane_cp_g5

0xcdcc,	// (0x00015c83) indicator_nsta_pane_cp_g6

0x0005,

0xfac3,	// (0x0001897a) indicator_nsta_pane_cp_g

0x0516,	// (0x000093cd) cell_graphic2_pane_t2_ParamLimits

0x0516,	// (0x000093cd) cell_graphic2_pane_t2

0x0001,

0xfdd5,	// (0x00018c8c) cell_graphic2_pane_t_ParamLimits

0xfdd5,	// (0x00018c8c) cell_graphic2_pane_t

0x0543,	// (0x000093fa) cell_graphic2_control_pane_t1

0x95ad,	// (0x00012464) signal_pane_g3_ParamLimits

0x95ad,	// (0x00012464) signal_pane_g3

0x95bf,	// (0x00012476) signal_pane_g4_ParamLimits

0x95bf,	// (0x00012476) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal

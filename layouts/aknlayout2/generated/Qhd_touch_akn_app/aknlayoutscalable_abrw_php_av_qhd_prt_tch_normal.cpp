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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000979a };

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
0x780c,	// (0x00010fa6) Screen

0x7820,	// (0x00010fba) application_window_ParamLimits

0x7820,	// (0x00010fba) application_window

0x783a,	// (0x00010fd4) screen_g1

0x5c32,	// (0x0000f3cc) area_bottom_pane_ParamLimits

0x5c32,	// (0x0000f3cc) area_bottom_pane

0x5cf2,	// (0x0000f48c) area_top_pane_ParamLimits

0x5cf2,	// (0x0000f48c) area_top_pane

0x5d90,	// (0x0000f52a) main_pane_ParamLimits

0x5d90,	// (0x0000f52a) main_pane

0x7844,	// (0x00010fde) misc_graphics

0x9f30,	// (0x000136ca) battery_pane_ParamLimits

0x9f30,	// (0x000136ca) battery_pane

0xace5,	// (0x0001447f) bg_status_flat_pane_g8

0xaced,	// (0x00014487) bg_status_flat_pane_g9

0x9ff2,	// (0x0001378c) context_pane_ParamLimits

0x9ff2,	// (0x0001378c) context_pane

0xa108,	// (0x000138a2) navi_pane_ParamLimits

0xa108,	// (0x000138a2) navi_pane

0xa186,	// (0x00013920) signal_pane_ParamLimits

0xa186,	// (0x00013920) signal_pane

0x0008,

0xf885,	// (0x0001901f) bg_status_flat_pane_g

0xa1f3,	// (0x0001398d) status_pane_g1_ParamLimits

0xa1f3,	// (0x0001398d) status_pane_g1

0xa1ff,	// (0x00013999) status_pane_g2_ParamLimits

0xa1ff,	// (0x00013999) status_pane_g2

0xa20b,	// (0x000139a5) status_pane_g3_ParamLimits

0xa20b,	// (0x000139a5) status_pane_g3

0x0004,

0xf7b3,	// (0x00018f4d) status_pane_g_ParamLimits

0xf7b3,	// (0x00018f4d) status_pane_g

0xa23f,	// (0x000139d9) title_pane_ParamLimits

0xa23f,	// (0x000139d9) title_pane

0xa27c,	// (0x00013a16) uni_indicator_pane_ParamLimits

0xa27c,	// (0x00013a16) uni_indicator_pane

0x9899,	// (0x00013033) bg_list_pane_ParamLimits

0x9899,	// (0x00013033) bg_list_pane

0x98b9,	// (0x00013053) find_pane

0x98c1,	// (0x0001305b) listscroll_app_pane_ParamLimits

0x98c1,	// (0x0001305b) listscroll_app_pane

0x98cd,	// (0x00013067) listscroll_form_pane

0x98d5,	// (0x0001306f) listscroll_gen_pane_ParamLimits

0x98d5,	// (0x0001306f) listscroll_gen_pane

0x98cd,	// (0x00013067) listscroll_set_pane

0x8a78,	// (0x00012212) main_idle_act_pane

0x957d,	// (0x00012d17) main_idle_trad_pane

0x957d,	// (0x00012d17) main_list_empty_pane

0x98fb,	// (0x00013095) main_midp_pane

0x9907,	// (0x000130a1) main_pane_g1_ParamLimits

0x9907,	// (0x000130a1) main_pane_g1

0x9915,	// (0x000130af) popup_ai_message_window_ParamLimits

0x9915,	// (0x000130af) popup_ai_message_window

0x99c3,	// (0x0001315d) popup_fep_china_uni_window_ParamLimits

0x99c3,	// (0x0001315d) popup_fep_china_uni_window

0x9a1f,	// (0x000131b9) popup_fep_japan_candidate_window_ParamLimits

0x9a1f,	// (0x000131b9) popup_fep_japan_candidate_window

0x9a3f,	// (0x000131d9) popup_fep_japan_predictive_window_ParamLimits

0x9a3f,	// (0x000131d9) popup_fep_japan_predictive_window

0x9a6f,	// (0x00013209) popup_find_window

0x9a7c,	// (0x00013216) popup_grid_graphic_window_ParamLimits

0x9a7c,	// (0x00013216) popup_grid_graphic_window

0x9aa4,	// (0x0001323e) popup_large_graphic_colour_window

0x9aca,	// (0x00013264) popup_menu_window_ParamLimits

0x9aca,	// (0x00013264) popup_menu_window

0x9c82,	// (0x0001341c) popup_note_image_window

0x9c6e,	// (0x00013408) popup_note_wait_window_ParamLimits

0x9c6e,	// (0x00013408) popup_note_wait_window

0x9c6e,	// (0x00013408) popup_note_window_ParamLimits

0x9c6e,	// (0x00013408) popup_note_window

0x9cd8,	// (0x00013472) popup_query_code_window_ParamLimits

0x9cd8,	// (0x00013472) popup_query_code_window

0x9cec,	// (0x00013486) popup_query_data_code_window_ParamLimits

0x9cec,	// (0x00013486) popup_query_data_code_window

0x9d09,	// (0x000134a3) popup_query_data_window_ParamLimits

0x9d09,	// (0x000134a3) popup_query_data_window

0x9d25,	// (0x000134bf) popup_query_sat_info_window_ParamLimits

0x9d25,	// (0x000134bf) popup_query_sat_info_window

0x9d5e,	// (0x000134f8) popup_snote_single_graphic_window_ParamLimits

0x9d5e,	// (0x000134f8) popup_snote_single_graphic_window

0x9d5e,	// (0x000134f8) popup_snote_single_text_window_ParamLimits

0x9d5e,	// (0x000134f8) popup_snote_single_text_window

0x9d73,	// (0x0001350d) popup_sub_window_general

0x9ea3,	// (0x0001363d) popup_window_general_ParamLimits

0x9ea3,	// (0x0001363d) popup_window_general

0x9eb8,	// (0x00013652) power_save_pane

0x64ef,	// (0x0000fc89) control_pane_g1_ParamLimits

0x64ef,	// (0x0000fc89) control_pane_g1

0x6516,	// (0x0000fcb0) control_pane_g2_ParamLimits

0x6516,	// (0x0000fcb0) control_pane_g2

0x983a,	// (0x00012fd4) control_pane_g3_ParamLimits

0x983a,	// (0x00012fd4) control_pane_g3

0x0007,

0xf79b,	// (0x00018f35) control_pane_g_ParamLimits

0xf79b,	// (0x00018f35) control_pane_g

0x655c,	// (0x0000fcf6) control_pane_t1_ParamLimits

0x655c,	// (0x0000fcf6) control_pane_t1

0x65a8,	// (0x0000fd42) control_pane_t2_ParamLimits

0x65a8,	// (0x0000fd42) control_pane_t2

0x0002,

0xf7ac,	// (0x00018f46) control_pane_t_ParamLimits

0xf7ac,	// (0x00018f46) control_pane_t

0x975b,	// (0x00012ef5) navi_navi_volume_pane_cp1

0x9764,	// (0x00012efe) status_small_icon_pane

0x976c,	// (0x00012f06) status_small_pane_g1_ParamLimits

0x976c,	// (0x00012f06) status_small_pane_g1

0x97a0,	// (0x00012f3a) status_small_pane_g2_ParamLimits

0x97a0,	// (0x00012f3a) status_small_pane_g2

0x97ac,	// (0x00012f46) status_small_pane_g3_ParamLimits

0x97ac,	// (0x00012f46) status_small_pane_g3

0x97b8,	// (0x00012f52) status_small_pane_g4_ParamLimits

0x97b8,	// (0x00012f52) status_small_pane_g4

0x97c4,	// (0x00012f5e) status_small_pane_g5_ParamLimits

0x97c4,	// (0x00012f5e) status_small_pane_g5

0x97d3,	// (0x00012f6d) status_small_pane_g6_ParamLimits

0x97d3,	// (0x00012f6d) status_small_pane_g6

0x0007,

0xf78a,	// (0x00018f24) status_small_pane_g_ParamLimits

0xf78a,	// (0x00018f24) status_small_pane_g

0x9803,	// (0x00012f9d) status_small_pane_t1

0x9826,	// (0x00012fc0) status_small_wait_pane_ParamLimits

0x9826,	// (0x00012fc0) status_small_wait_pane

0x8f71,	// (0x0001270b) aid_levels_signal_ParamLimits

0x8f71,	// (0x0001270b) aid_levels_signal

0x8f80,	// (0x0001271a) signal_pane_g1_ParamLimits

0x8f80,	// (0x0001271a) signal_pane_g1

0x8f95,	// (0x0001272f) signal_pane_g2_ParamLimits

0x8f95,	// (0x0001272f) signal_pane_g2

0x0003,

0xf71b,	// (0x00018eb5) signal_pane_g_ParamLimits

0xf71b,	// (0x00018eb5) signal_pane_g

0x8fcd,	// (0x00012767) context_pane_g1

0x784e,	// (0x00010fe8) title_pane_g1

0x7884,	// (0x0001101e) title_pane_t1

0x78ec,	// (0x00011086) title_pane_t2

0x7912,	// (0x000110ac) title_pane_t3

0x0002,

0xf56f,	// (0x00018d09) title_pane_t

0xa294,	// (0x00013a2e) aid_levels_battery_ParamLimits

0xa294,	// (0x00013a2e) aid_levels_battery

0xa2a5,	// (0x00013a3f) battery_pane_g1_ParamLimits

0xa2a5,	// (0x00013a3f) battery_pane_g1

0xa2bb,	// (0x00013a55) battery_pane_g2_ParamLimits

0xa2bb,	// (0x00013a55) battery_pane_g2

0x0001,

0xf7be,	// (0x00018f58) battery_pane_g_ParamLimits

0xf7be,	// (0x00018f58) battery_pane_g

0xb61b,	// (0x00014db5) uni_indicator_pane_g1

0xb630,	// (0x00014dca) uni_indicator_pane_g2

0xb646,	// (0x00014de0) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x000190c7) uni_indicator_pane_g

0x93ef,	// (0x00012b89) navi_icon_pane_ParamLimits

0x93ef,	// (0x00012b89) navi_icon_pane

0x9338,	// (0x00012ad2) navi_midp_pane

0x940b,	// (0x00012ba5) navi_navi_pane

0x9415,	// (0x00012baf) navi_text_pane_ParamLimits

0x9415,	// (0x00012baf) navi_text_pane

0x783a,	// (0x00010fd4) status_small_wait_pane_g1

0x7d5b,	// (0x000114f5) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x000190c2) status_small_wait_pane_g

0xb340,	// (0x00014ada) navi_navi_icon_text_pane

0xb348,	// (0x00014ae2) navi_navi_pane_g1_ParamLimits

0xb348,	// (0x00014ae2) navi_navi_pane_g1

0xb35a,	// (0x00014af4) navi_navi_pane_g2_ParamLimits

0xb35a,	// (0x00014af4) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x00019090) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x00019090) navi_navi_pane_g

0xb36c,	// (0x00014b06) navi_navi_tabs_pane

0xb375,	// (0x00014b0f) navi_navi_text_pane

0xb340,	// (0x00014ada) navi_navi_volume_pane

0xb31c,	// (0x00014ab6) navi_text_pane_t1

0xb310,	// (0x00014aaa) navi_icon_pane_g1

0xb263,	// (0x000149fd) navi_navi_text_pane_t1

0x6938,	// (0x000100d2) navi_navi_volume_pane_g1

0x6940,	// (0x000100da) volume_small_pane

0xb1c9,	// (0x00014963) navi_navi_icon_text_pane_g1

0xb1d1,	// (0x0001496b) navi_navi_icon_text_pane_t1

0x940b,	// (0x00012ba5) navi_tabs_2_long_pane

0x940b,	// (0x00012ba5) navi_tabs_2_pane

0x940b,	// (0x00012ba5) navi_tabs_3_long_pane

0x940b,	// (0x00012ba5) navi_tabs_3_pane

0x940b,	// (0x00012ba5) navi_tabs_4_pane

0x6918,	// (0x000100b2) tabs_2_active_pane_ParamLimits

0x6918,	// (0x000100b2) tabs_2_active_pane

0x6928,	// (0x000100c2) tabs_2_passive_pane_ParamLimits

0x6928,	// (0x000100c2) tabs_2_passive_pane

0x68e6,	// (0x00010080) tabs_3_active_pane_ParamLimits

0x68e6,	// (0x00010080) tabs_3_active_pane

0x68f6,	// (0x00010090) tabs_3_passive_pane_ParamLimits

0x68f6,	// (0x00010090) tabs_3_passive_pane

0x6907,	// (0x000100a1) tabs_3_passive_pane_cp_ParamLimits

0x6907,	// (0x000100a1) tabs_3_passive_pane_cp

0x68a2,	// (0x0001003c) tabs_4_active_pane_ParamLimits

0x68a2,	// (0x0001003c) tabs_4_active_pane

0x68b3,	// (0x0001004d) tabs_4_passive_pane_ParamLimits

0x68b3,	// (0x0001004d) tabs_4_passive_pane

0x68c4,	// (0x0001005e) tabs_4_passive_pane_cp_ParamLimits

0x68c4,	// (0x0001005e) tabs_4_passive_pane_cp

0x68d5,	// (0x0001006f) tabs_4_passive_pane_cp2_ParamLimits

0x68d5,	// (0x0001006f) tabs_4_passive_pane_cp2

0x687e,	// (0x00010018) tabs_2_long_active_pane_ParamLimits

0x687e,	// (0x00010018) tabs_2_long_active_pane

0x6890,	// (0x0001002a) tabs_2_long_passive_pane_ParamLimits

0x6890,	// (0x0001002a) tabs_2_long_passive_pane

0x683f,	// (0x0000ffd9) tabs_3_long_active_pane_ParamLimits

0x683f,	// (0x0000ffd9) tabs_3_long_active_pane

0x6852,	// (0x0000ffec) tabs_3_long_passive_pane_ParamLimits

0x6852,	// (0x0000ffec) tabs_3_long_passive_pane

0x686b,	// (0x00010005) tabs_3_long_passive_pane_cp_ParamLimits

0x686b,	// (0x00010005) tabs_3_long_passive_pane_cp

0x67e5,	// (0x0000ff7f) volume_small_pane_g1

0x67ee,	// (0x0000ff88) volume_small_pane_g2

0x67f7,	// (0x0000ff91) volume_small_pane_g3

0x6800,	// (0x0000ff9a) volume_small_pane_g4

0x6809,	// (0x0000ffa3) volume_small_pane_g5

0x6812,	// (0x0000ffac) volume_small_pane_g6

0x681b,	// (0x0000ffb5) volume_small_pane_g7

0x6824,	// (0x0000ffbe) volume_small_pane_g8

0x682d,	// (0x0000ffc7) volume_small_pane_g9

0x6836,	// (0x0000ffd0) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0001905c) volume_small_pane_g

0x7924,	// (0x000110be) bg_active_tab_pane_cp2_ParamLimits

0x7924,	// (0x000110be) bg_active_tab_pane_cp2

0x7932,	// (0x000110cc) tabs_3_active_pane_g1

0x793a,	// (0x000110d4) tabs_3_active_pane_t1

0x7924,	// (0x000110be) bg_passive_tab_pane_cp2_ParamLimits

0x7924,	// (0x000110be) bg_passive_tab_pane_cp2

0x7932,	// (0x000110cc) tabs_3_passive_pane_g1

0x793a,	// (0x000110d4) tabs_3_passive_pane_t1

0x7924,	// (0x000110be) bg_active_tab_pane_cp3_ParamLimits

0x7924,	// (0x000110be) bg_active_tab_pane_cp3

0x794c,	// (0x000110e6) tabs_4_active_pane_g1

0x7954,	// (0x000110ee) tabs_4_active_pane_t1

0x7924,	// (0x000110be) bg_passive_tab_pane_cp3_ParamLimits

0x7924,	// (0x000110be) bg_passive_tab_pane_cp3

0x794c,	// (0x000110e6) tabs_4_1_passive_pane_g1

0x7954,	// (0x000110ee) tabs_4_1_passive_pane_t1

0x98fb,	// (0x00013095) list_highlight_pane_cp2

0xb8cc,	// (0x00015066) list_set_pane_ParamLimits

0xb8cc,	// (0x00015066) list_set_pane

0xb972,	// (0x0001510c) main_pane_set_t1_ParamLimits

0xb972,	// (0x0001510c) main_pane_set_t1

0xb992,	// (0x0001512c) main_pane_set_t2_ParamLimits

0xb992,	// (0x0001512c) main_pane_set_t2

0xb9a6,	// (0x00015140) main_pane_set_t3_ParamLimits

0xb9a6,	// (0x00015140) main_pane_set_t3

0xb9b8,	// (0x00015152) main_pane_set_t4_ParamLimits

0xb9b8,	// (0x00015152) main_pane_set_t4

0x0003,

0xf992,	// (0x0001912c) main_pane_set_t_ParamLimits

0xf992,	// (0x0001912c) main_pane_set_t

0xb9ca,	// (0x00015164) setting_code_pane

0xb9d6,	// (0x00015170) setting_slider_graphic_pane

0xb9d6,	// (0x00015170) setting_slider_pane

0xb9d6,	// (0x00015170) setting_text_pane

0xb9d6,	// (0x00015170) setting_volume_pane

0x5fd5,	// (0x0000f76f) volume_set_pane

0x7924,	// (0x000110be) bg_set_opt_pane_cp

0x5fdd,	// (0x0000f777) setting_slider_pane_t1

0x5ff6,	// (0x0000f790) setting_slider_pane_t2

0x6010,	// (0x0000f7aa) setting_slider_pane_t3

0x0002,

0xf576,	// (0x00018d10) setting_slider_pane_t

0x6028,	// (0x0000f7c2) slider_set_pane

0x7844,	// (0x00010fde) bg_set_opt_pane_cp2

0x7966,	// (0x00011100) setting_slider_graphic_pane_g1

0x603e,	// (0x0000f7d8) setting_slider_graphic_pane_t1

0x604e,	// (0x0000f7e8) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x00018d17) setting_slider_graphic_pane_t

0x605e,	// (0x0000f7f8) slider_set_pane_cp

0x7844,	// (0x00010fde) input_focus_pane_cp1

0xb88b,	// (0x00015025) list_set_text_pane

0x783a,	// (0x00010fd4) setting_text_pane_g1

0x7844,	// (0x00010fde) input_focus_pane_cp2

0x783a,	// (0x00010fd4) setting_code_pane_g1

0x796f,	// (0x00011109) setting_code_pane_t1

0x797d,	// (0x00011117) set_text_pane_t1_ParamLimits

0x797d,	// (0x00011117) set_text_pane_t1

0x8843,	// (0x00011fdd) set_opt_bg_pane_g1

0x884b,	// (0x00011fe5) set_opt_bg_pane_g2

0xb865,	// (0x00014fff) set_opt_bg_pane_g3

0x885b,	// (0x00011ff5) set_opt_bg_pane_g4

0x8863,	// (0x00011ffd) set_opt_bg_pane_g5

0x886b,	// (0x00012005) set_opt_bg_pane_g6

0xb86f,	// (0x00015009) set_opt_bg_pane_g7

0xb877,	// (0x00015011) set_opt_bg_pane_g8

0xb881,	// (0x0001501b) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x00019119) set_opt_bg_pane_g

0xb858,	// (0x00014ff2) slider_set_pane_g1

0x69ad,	// (0x00010147) slider_set_pane_g2

0x0006,

0xf970,	// (0x0001910a) slider_set_pane_g

0x6949,	// (0x000100e3) volume_set_pane_g1

0x6951,	// (0x000100eb) volume_set_pane_g2

0x6959,	// (0x000100f3) volume_set_pane_g3

0x6961,	// (0x000100fb) volume_set_pane_g4

0x6969,	// (0x00010103) volume_set_pane_g5

0x6971,	// (0x0001010b) volume_set_pane_g6

0x6979,	// (0x00010113) volume_set_pane_g7

0x6981,	// (0x0001011b) volume_set_pane_g8

0x6989,	// (0x00010123) volume_set_pane_g9

0x6991,	// (0x0001012b) volume_set_pane_g10

0x0009,

0xf948,	// (0x000190e2) volume_set_pane_g

0x7997,	// (0x00011131) indicator_pane_ParamLimits

0x7997,	// (0x00011131) indicator_pane

0x79a3,	// (0x0001113d) main_idle_pane_g2_ParamLimits

0x79a3,	// (0x0001113d) main_idle_pane_g2

0x79cb,	// (0x00011165) main_pane_idle_g1_ParamLimits

0x79cb,	// (0x00011165) main_pane_idle_g1

0x79d8,	// (0x00011172) popup_clock_digital_analogue_window_ParamLimits

0x79d8,	// (0x00011172) popup_clock_digital_analogue_window

0x79ef,	// (0x00011189) soft_indicator_pane_ParamLimits

0x79ef,	// (0x00011189) soft_indicator_pane

0x79fb,	// (0x00011195) wallpaper_pane_ParamLimits

0x79fb,	// (0x00011195) wallpaper_pane

0x783a,	// (0x00010fd4) wallpaper_pane_g1

0x7a0f,	// (0x000111a9) indicator_pane_g1_ParamLimits

0x7a0f,	// (0x000111a9) indicator_pane_g1

0xbd3c,	// (0x000154d6) navi_navi_icon_text_pane_srt_g1

0x7a2a,	// (0x000111c4) soft_indicator_pane_t1

0x7a44,	// (0x000111de) aid_ps_area_pane

0x7a55,	// (0x000111ef) aid_ps_clock_pane

0x7a63,	// (0x000111fd) aid_ps_indicator_pane

0x7a6f,	// (0x00011209) indicator_ps_pane_ParamLimits

0x7a6f,	// (0x00011209) indicator_ps_pane

0x7a7e,	// (0x00011218) power_save_pane_g1_ParamLimits

0x7a7e,	// (0x00011218) power_save_pane_g1

0x7a8a,	// (0x00011224) power_save_pane_g2_ParamLimits

0x7a8a,	// (0x00011224) power_save_pane_g2

0x5be6,	// (0x0000f380) aid_navinavi_width_pane

0x7a44,	// (0x000111de) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00018d1c) power_save_pane_g_ParamLimits

0xf582,	// (0x00018d1c) power_save_pane_g

0x7a98,	// (0x00011232) power_save_pane_t1_ParamLimits

0x7a98,	// (0x00011232) power_save_pane_t1

0x7a55,	// (0x000111ef) aid_ps_clock_pane_ParamLimits

0x7a63,	// (0x000111fd) aid_ps_indicator_pane_ParamLimits

0x7aaa,	// (0x00011244) power_save_pane_t4_ParamLimits

0x7aaa,	// (0x00011244) power_save_pane_t4

0x0001,

0xf587,	// (0x00018d21) power_save_pane_t_ParamLimits

0xf587,	// (0x00018d21) power_save_pane_t

0x7ad4,	// (0x0001126e) power_save_t3_ParamLimits

0x7ad4,	// (0x0001126e) power_save_t3

0x7abf,	// (0x00011259) power_save_t2_ParamLimits

0x7abf,	// (0x00011259) power_save_t2

0x7ae9,	// (0x00011283) indicator_ps_pane_g1

0x7af2,	// (0x0001128c) ai_gene_pane_ParamLimits

0x7af2,	// (0x0001128c) ai_gene_pane

0x7afe,	// (0x00011298) ai_links_pane_ParamLimits

0x7afe,	// (0x00011298) ai_links_pane

0x7b0a,	// (0x000112a4) indicator_pane_cp1_ParamLimits

0x7b0a,	// (0x000112a4) indicator_pane_cp1

0x7b16,	// (0x000112b0) main_pane_idle_g1_cp_ParamLimits

0x7b16,	// (0x000112b0) main_pane_idle_g1_cp

0x7b22,	// (0x000112bc) popup_ai_links_title_window

0x7b2b,	// (0x000112c5) soft_indicator_pane_cp1_ParamLimits

0x7b2b,	// (0x000112c5) soft_indicator_pane_cp1

0xb609,	// (0x00014da3) ai_links_pane_g1

0xb612,	// (0x00014dac) grid_ai_links_pane

0xb5ec,	// (0x00014d86) ai_gene_pane_1

0xb5f7,	// (0x00014d91) ai_gene_pane_2

0xb600,	// (0x00014d9a) list_highlight_pane_cp4

0xb5d0,	// (0x00014d6a) cell_ai_link_pane_ParamLimits

0xb5d0,	// (0x00014d6a) cell_ai_link_pane

0xb5c8,	// (0x00014d62) cell_ai_link_pane_g1

0x7d5b,	// (0x000114f5) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x000190bd) cell_ai_link_pane_g

0x7844,	// (0x00010fde) grid_highlight_cp2

0x7844,	// (0x00010fde) bg_popup_sub_pane_cp1

0x7b45,	// (0x000112df) popup_ai_links_title_window_t1

0xb516,	// (0x00014cb0) ai_gene_pane_1_g1_ParamLimits

0xb516,	// (0x00014cb0) ai_gene_pane_1_g1

0xb522,	// (0x00014cbc) ai_gene_pane_1_g2_ParamLimits

0xb522,	// (0x00014cbc) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x000190b3) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x000190b3) ai_gene_pane_1_g

0xb52f,	// (0x00014cc9) ai_gene_pane_1_t1_ParamLimits

0xb52f,	// (0x00014cc9) ai_gene_pane_1_t1

0xb563,	// (0x00014cfd) grid_ai_soft_ind_pane

0xb501,	// (0x00014c9b) ai_gene_pane_2_t1_ParamLimits

0xb501,	// (0x00014c9b) ai_gene_pane_2_t1

0x7b54,	// (0x000112ee) main_pane_empty_t1_ParamLimits

0x7b54,	// (0x000112ee) main_pane_empty_t1

0x7b6c,	// (0x00011306) main_pane_empty_t2_ParamLimits

0x7b6c,	// (0x00011306) main_pane_empty_t2

0x7b81,	// (0x0001131b) main_pane_empty_t3_ParamLimits

0x7b81,	// (0x0001131b) main_pane_empty_t3

0x7b93,	// (0x0001132d) main_pane_empty_t4_ParamLimits

0x7b93,	// (0x0001132d) main_pane_empty_t4

0x7ba5,	// (0x0001133f) main_pane_empty_t5_ParamLimits

0x7ba5,	// (0x0001133f) main_pane_empty_t5

0x0004,

0xf58c,	// (0x00018d26) main_pane_empty_t_ParamLimits

0xf58c,	// (0x00018d26) main_pane_empty_t

0x8940,	// (0x000120da) bg_popup_window_pane_ParamLimits

0x8940,	// (0x000120da) bg_popup_window_pane

0xb271,	// (0x00014a0b) find_popup_pane_cp2_ParamLimits

0xb271,	// (0x00014a0b) find_popup_pane_cp2

0xb27d,	// (0x00014a17) heading_pane_ParamLimits

0xb27d,	// (0x00014a17) heading_pane

0x7844,	// (0x00010fde) bg_popup_sub_pane

0xb1eb,	// (0x00014985) bg_popup_window_pane_g1_ParamLimits

0xb1eb,	// (0x00014985) bg_popup_window_pane_g1

0xb1f7,	// (0x00014991) bg_popup_window_pane_g2_ParamLimits

0xb1f7,	// (0x00014991) bg_popup_window_pane_g2

0xb203,	// (0x0001499d) bg_popup_window_pane_g3_ParamLimits

0xb203,	// (0x0001499d) bg_popup_window_pane_g3

0xb20f,	// (0x000149a9) bg_popup_window_pane_g4_ParamLimits

0xb20f,	// (0x000149a9) bg_popup_window_pane_g4

0xb21b,	// (0x000149b5) bg_popup_window_pane_g5_ParamLimits

0xb21b,	// (0x000149b5) bg_popup_window_pane_g5

0xb227,	// (0x000149c1) bg_popup_window_pane_g6_ParamLimits

0xb227,	// (0x000149c1) bg_popup_window_pane_g6

0xb233,	// (0x000149cd) bg_popup_window_pane_g7_ParamLimits

0xb233,	// (0x000149cd) bg_popup_window_pane_g7

0xb23f,	// (0x000149d9) bg_popup_window_pane_g8_ParamLimits

0xb23f,	// (0x000149d9) bg_popup_window_pane_g8

0xb24b,	// (0x000149e5) bg_popup_window_pane_g9_ParamLimits

0xb24b,	// (0x000149e5) bg_popup_window_pane_g9

0xb257,	// (0x000149f1) bg_popup_window_pane_g10_ParamLimits

0xb257,	// (0x000149f1) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x0001907b) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x0001907b) bg_popup_window_pane_g

0xb180,	// (0x0001491a) bg_popup_heading_pane_ParamLimits

0xb180,	// (0x0001491a) bg_popup_heading_pane

0x6a35,	// (0x000101cf) tabs_4_passive_pane_cp_srt_ParamLimits

0x6a35,	// (0x000101cf) tabs_4_passive_pane_cp_srt

0x6a47,	// (0x000101e1) tabs_4_passive_pane_srt_ParamLimits

0xb194,	// (0x0001492e) heading_pane_g2

0x6a47,	// (0x000101e1) tabs_4_passive_pane_srt

0x98fb,	// (0x00013095) bg_passive_tab_pane_cp3_srt_ParamLimits

0x98fb,	// (0x00013095) bg_passive_tab_pane_cp3_srt

0xb19c,	// (0x00014936) heading_pane_t1_ParamLimits

0xb19c,	// (0x00014936) heading_pane_t1

0xb1b3,	// (0x0001494d) heading_pane_t2_ParamLimits

0xb1b3,	// (0x0001494d) heading_pane_t2

0x0001,

0xf8dc,	// (0x00019076) heading_pane_t_ParamLimits

0xf8dc,	// (0x00019076) heading_pane_t

0xacad,	// (0x00014447) bg_popup_heading_pane_g1

0xad5c,	// (0x000144f6) bg_popup_heading_pane_g2

0xad66,	// (0x00014500) bg_popup_heading_pane_g3

0xad70,	// (0x0001450a) bg_popup_heading_pane_g4

0xad7a,	// (0x00014514) bg_popup_heading_pane_g5

0xad84,	// (0x0001451e) bg_popup_heading_pane_g6

0xad8c,	// (0x00014526) bg_popup_heading_pane_g7

0xad94,	// (0x0001452e) bg_popup_heading_pane_g8

0xad9e,	// (0x00014538) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x00019032) bg_popup_heading_pane_g

0xa3cd,	// (0x00013b67) bg_popup_sub_pane_g1

0xa3dd,	// (0x00013b77) bg_popup_sub_pane_g2

0xa3d5,	// (0x00013b6f) bg_popup_sub_pane_g3

0xa3ed,	// (0x00013b87) bg_popup_sub_pane_g4

0xa3e5,	// (0x00013b7f) bg_popup_sub_pane_g5

0xa3f5,	// (0x00013b8f) bg_popup_sub_pane_g6

0xa3fd,	// (0x00013b97) bg_popup_sub_pane_g7

0xa40d,	// (0x00013ba7) bg_popup_sub_pane_g8

0xa405,	// (0x00013b9f) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0001900c) bg_popup_sub_pane_g

0x7bb9,	// (0x00011353) bg_popup_window_pane_cp5_ParamLimits

0x7bb9,	// (0x00011353) bg_popup_window_pane_cp5

0x7bd5,	// (0x0001136f) popup_note_window_g1_ParamLimits

0x7bd5,	// (0x0001136f) popup_note_window_g1

0x7be1,	// (0x0001137b) popup_note_window_t1_ParamLimits

0x7be1,	// (0x0001137b) popup_note_window_t1

0x7bf7,	// (0x00011391) popup_note_window_t2_ParamLimits

0x7bf7,	// (0x00011391) popup_note_window_t2

0x7c0d,	// (0x000113a7) popup_note_window_t3_ParamLimits

0x7c0d,	// (0x000113a7) popup_note_window_t3

0x7c23,	// (0x000113bd) popup_note_window_t4_ParamLimits

0x7c23,	// (0x000113bd) popup_note_window_t4

0x7c4b,	// (0x000113e5) popup_note_window_t5_ParamLimits

0x7c4b,	// (0x000113e5) popup_note_window_t5

0x0004,

0xf597,	// (0x00018d31) popup_note_window_t_ParamLimits

0xf597,	// (0x00018d31) popup_note_window_t

0x7c6f,	// (0x00011409) bg_popup_window_pane_cp6_ParamLimits

0x7c6f,	// (0x00011409) bg_popup_window_pane_cp6

0xac29,	// (0x000143c3) popup_note_image_window_g1_ParamLimits

0xac29,	// (0x000143c3) popup_note_image_window_g1

0xac35,	// (0x000143cf) popup_note_image_window_g2_ParamLimits

0xac35,	// (0x000143cf) popup_note_image_window_g2

0x0001,

0xf866,	// (0x00019000) popup_note_image_window_g_ParamLimits

0xf866,	// (0x00019000) popup_note_image_window_g

0xac4e,	// (0x000143e8) popup_note_image_window_t1_ParamLimits

0xac4e,	// (0x000143e8) popup_note_image_window_t1

0xac67,	// (0x00014401) popup_note_image_window_t2_ParamLimits

0xac67,	// (0x00014401) popup_note_image_window_t2

0xac80,	// (0x0001441a) popup_note_image_window_t3_ParamLimits

0xac80,	// (0x0001441a) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x00019005) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x00019005) popup_note_image_window_t

0xaaea,	// (0x00014284) bg_popup_window_pane_cp7_ParamLimits

0xaaea,	// (0x00014284) bg_popup_window_pane_cp7

0xab1a,	// (0x000142b4) popup_note_wait_window_g1_ParamLimits

0xab1a,	// (0x000142b4) popup_note_wait_window_g1

0xab26,	// (0x000142c0) popup_note_wait_window_g2_ParamLimits

0xab26,	// (0x000142c0) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x00018fee) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x00018fee) popup_note_wait_window_g

0xab3e,	// (0x000142d8) popup_note_wait_window_t1_ParamLimits

0xab3e,	// (0x000142d8) popup_note_wait_window_t1

0xab65,	// (0x000142ff) popup_note_wait_window_t2_ParamLimits

0xab65,	// (0x000142ff) popup_note_wait_window_t2

0xab82,	// (0x0001431c) popup_note_wait_window_t3_ParamLimits

0xab82,	// (0x0001431c) popup_note_wait_window_t3

0xab95,	// (0x0001432f) popup_note_wait_window_t4_ParamLimits

0xab95,	// (0x0001432f) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x00018ff5) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x00018ff5) popup_note_wait_window_t

0xabba,	// (0x00014354) wait_bar_pane_ParamLimits

0xabba,	// (0x00014354) wait_bar_pane

0x7844,	// (0x00010fde) wait_anim_pane

0x7844,	// (0x00010fde) wait_border_pane

0x783a,	// (0x00010fd4) wait_anim_pane_g1

0x783a,	// (0x00010fd4) wait_anim_pane_g2

0x0001,

0xf716,	// (0x00018eb0) wait_anim_pane_g

0xaa8e,	// (0x00014228) wait_border_pane_g1

0xaa99,	// (0x00014233) wait_border_pane_g2

0xaaa2,	// (0x0001423c) wait_border_pane_g3

0x0002,

0xf84d,	// (0x00018fe7) wait_border_pane_g

0xa8f9,	// (0x00014093) bg_popup_window_pane_cp16_ParamLimits

0xa8f9,	// (0x00014093) bg_popup_window_pane_cp16

0xa9f9,	// (0x00014193) indicator_popup_pane_cp4_ParamLimits

0xa9f9,	// (0x00014193) indicator_popup_pane_cp4

0xaa0d,	// (0x000141a7) popup_query_data_window_t1_ParamLimits

0xaa0d,	// (0x000141a7) popup_query_data_window_t1

0xaa1f,	// (0x000141b9) popup_query_data_window_t2_ParamLimits

0xaa1f,	// (0x000141b9) popup_query_data_window_t2

0xaa38,	// (0x000141d2) popup_query_data_window_t3_ParamLimits

0xaa38,	// (0x000141d2) popup_query_data_window_t3

0x0002,

0xf846,	// (0x00018fe0) popup_query_data_window_t_ParamLimits

0xf846,	// (0x00018fe0) popup_query_data_window_t

0xaa52,	// (0x000141ec) query_popup_data_pane_ParamLimits

0xaa52,	// (0x000141ec) query_popup_data_pane

0xaa66,	// (0x00014200) query_popup_data_pane_cp1_ParamLimits

0xaa66,	// (0x00014200) query_popup_data_pane_cp1

0xa8f9,	// (0x00014093) bg_popup_window_pane_cp10_ParamLimits

0xa8f9,	// (0x00014093) bg_popup_window_pane_cp10

0xa92b,	// (0x000140c5) indicator_popup_pane_ParamLimits

0xa92b,	// (0x000140c5) indicator_popup_pane

0xa94d,	// (0x000140e7) popup_query_code_window_t1_ParamLimits

0xa94d,	// (0x000140e7) popup_query_code_window_t1

0xa967,	// (0x00014101) popup_query_code_window_t2_ParamLimits

0xa967,	// (0x00014101) popup_query_code_window_t2

0xa9b0,	// (0x0001414a) popup_query_code_window_t3_ParamLimits

0xa9b0,	// (0x0001414a) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x00018fd9) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x00018fd9) popup_query_code_window_t

0xa9df,	// (0x00014179) query_popup_pane_ParamLimits

0xa9df,	// (0x00014179) query_popup_pane

0x7c6f,	// (0x00011409) bg_popup_window_pane_cp15_ParamLimits

0x7c6f,	// (0x00011409) bg_popup_window_pane_cp15

0x7c8d,	// (0x00011427) indicator_popup_pane_cp1_ParamLimits

0x7c8d,	// (0x00011427) indicator_popup_pane_cp1

0x7ca0,	// (0x0001143a) indicator_popup_pane_cp2_ParamLimits

0x7ca0,	// (0x0001143a) indicator_popup_pane_cp2

0x7cb3,	// (0x0001144d) popup_query_data_code_window_g1_ParamLimits

0x7cb3,	// (0x0001144d) popup_query_data_code_window_g1

0x7cc6,	// (0x00011460) popup_query_data_code_window_t1_ParamLimits

0x7cc6,	// (0x00011460) popup_query_data_code_window_t1

0x7cd8,	// (0x00011472) popup_query_data_code_window_t2_ParamLimits

0x7cd8,	// (0x00011472) popup_query_data_code_window_t2

0x7cea,	// (0x00011484) popup_query_data_code_window_t3_ParamLimits

0x7cea,	// (0x00011484) popup_query_data_code_window_t3

0x7d00,	// (0x0001149a) popup_query_data_code_window_t4_ParamLimits

0x7d00,	// (0x0001149a) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00018d3c) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00018d3c) popup_query_data_code_window_t

0x66f6,	// (0x0000fe90) list_single_midp_graphic_pane_g3

0x7d18,	// (0x000114b2) query_popup_data_pane_cp2_ParamLimits

0x7d2b,	// (0x000114c5) query_popup_pane_cp2_ParamLimits

0x7d2b,	// (0x000114c5) query_popup_pane_cp2

0x7844,	// (0x00010fde) bg_popup_window_pane_cp11

0xa8f1,	// (0x0001408b) heading_pane_cp5

0x7e13,	// (0x000115ad) listscroll_popup_info_pane

0x7844,	// (0x00010fde) input_focus_pane_cp3

0x7d3e,	// (0x000114d8) query_popup_pane_t1

0x7d4c,	// (0x000114e6) list_popup_info_pane_ParamLimits

0x7d4c,	// (0x000114e6) list_popup_info_pane

0x7d5b,	// (0x000114f5) listscroll_popup_info_pane_g1

0x7d63,	// (0x000114fd) scroll_pane_cp7

0x7d6d,	// (0x00011507) popup_info_list_pane_t1_ParamLimits

0x7d6d,	// (0x00011507) popup_info_list_pane_t1

0x7d87,	// (0x00011521) popup_info_list_pane_t2_ParamLimits

0x7d87,	// (0x00011521) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x00018d45) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x00018d45) popup_info_list_pane_t

0x7844,	// (0x00010fde) bg_popup_window_pane_cp12

0xbd56,	// (0x000154f0) find_popup_pane

0x7924,	// (0x000110be) bg_popup_window_pane_cp3

0x7da1,	// (0x0001153b) heading_pane_cp3

0x7dad,	// (0x00011547) listscroll_popup_graphic_pane

0x7844,	// (0x00010fde) bg_popup_window_pane_cp4

0x7e09,	// (0x000115a3) heading_pane_cp4

0x7e13,	// (0x000115ad) listscroll_popup_colour_pane

0x7e1b,	// (0x000115b5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7e1b,	// (0x000115b5) cell_large_graphic_colour_none_popup_pane

0x7e2f,	// (0x000115c9) grid_large_graphic_colour_popup_pane_ParamLimits

0x7e2f,	// (0x000115c9) grid_large_graphic_colour_popup_pane

0x7e5b,	// (0x000115f5) listscroll_popup_colour_pane_g1_ParamLimits

0x7e5b,	// (0x000115f5) listscroll_popup_colour_pane_g1

0x7e72,	// (0x0001160c) listscroll_popup_colour_pane_g2_ParamLimits

0x7e72,	// (0x0001160c) listscroll_popup_colour_pane_g2

0x7e89,	// (0x00011623) listscroll_popup_colour_pane_g3_ParamLimits

0x7e89,	// (0x00011623) listscroll_popup_colour_pane_g3

0x7e99,	// (0x00011633) listscroll_popup_colour_pane_g4_ParamLimits

0x7e99,	// (0x00011633) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00018d4a) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00018d4a) listscroll_popup_colour_pane_g

0x7ead,	// (0x00011647) scroll_pane_cp6_ParamLimits

0x7ead,	// (0x00011647) scroll_pane_cp6

0x7ebf,	// (0x00011659) cell_large_graphic_colour_popup_pane_ParamLimits

0x7ebf,	// (0x00011659) cell_large_graphic_colour_popup_pane

0x7ede,	// (0x00011678) cell_large_graphic_colour_none_popup_pane_t1

0x7844,	// (0x00010fde) grid_highlight_pane_cp5

0x7eed,	// (0x00011687) cell_large_graphic_colour_popup_pane_g1

0x7ef5,	// (0x0001168f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00018d53) cell_large_graphic_colour_popup_pane_g

0x7efd,	// (0x00011697) cell_large_graphic_colour_popup_pane_g2_copy1

0x7f06,	// (0x000116a0) grid_highlight_pane_cp4

0x7f0e,	// (0x000116a8) bg_popup_window_pane_cp8_ParamLimits

0x7f0e,	// (0x000116a8) bg_popup_window_pane_cp8

0x7f29,	// (0x000116c3) popup_snote_single_text_window_g1_ParamLimits

0x7f29,	// (0x000116c3) popup_snote_single_text_window_g1

0x7f3b,	// (0x000116d5) popup_snote_single_text_window_t1_ParamLimits

0x7f3b,	// (0x000116d5) popup_snote_single_text_window_t1

0x7f4e,	// (0x000116e8) popup_snote_single_text_window_t2_ParamLimits

0x7f4e,	// (0x000116e8) popup_snote_single_text_window_t2

0x7f61,	// (0x000116fb) popup_snote_single_text_window_t3_ParamLimits

0x7f61,	// (0x000116fb) popup_snote_single_text_window_t3

0x7f9a,	// (0x00011734) popup_snote_single_text_window_t4_ParamLimits

0x7f9a,	// (0x00011734) popup_snote_single_text_window_t4

0x7fce,	// (0x00011768) popup_snote_single_text_window_t5_ParamLimits

0x7fce,	// (0x00011768) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x00018d58) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x00018d58) popup_snote_single_text_window_t

0x7ffd,	// (0x00011797) bg_popup_window_pane_cp9_ParamLimits

0x7ffd,	// (0x00011797) bg_popup_window_pane_cp9

0x7f29,	// (0x000116c3) popup_snote_single_graphic_window_g1_ParamLimits

0x7f29,	// (0x000116c3) popup_snote_single_graphic_window_g1

0x800b,	// (0x000117a5) popup_snote_single_graphic_window_g2_ParamLimits

0x800b,	// (0x000117a5) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00018d63) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00018d63) popup_snote_single_graphic_window_g

0x8017,	// (0x000117b1) popup_snote_single_graphic_window_t1_ParamLimits

0x8017,	// (0x000117b1) popup_snote_single_graphic_window_t1

0x802a,	// (0x000117c4) popup_snote_single_graphic_window_t2_ParamLimits

0x802a,	// (0x000117c4) popup_snote_single_graphic_window_t2

0x803d,	// (0x000117d7) popup_snote_single_graphic_window_t3_ParamLimits

0x803d,	// (0x000117d7) popup_snote_single_graphic_window_t3

0x8076,	// (0x00011810) popup_snote_single_graphic_window_t4_ParamLimits

0x8076,	// (0x00011810) popup_snote_single_graphic_window_t4

0x80aa,	// (0x00011844) popup_snote_single_graphic_window_t5_ParamLimits

0x80aa,	// (0x00011844) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00018d68) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00018d68) popup_snote_single_graphic_window_t

0xbc9a,	// (0x00015434) grid_graphic_popup_pane_ParamLimits

0xbc9a,	// (0x00015434) grid_graphic_popup_pane

0xbcc2,	// (0x0001545c) listscroll_popup_graphic_pane_g1_ParamLimits

0xbcc2,	// (0x0001545c) listscroll_popup_graphic_pane_g1

0xbcd6,	// (0x00015470) listscroll_popup_graphic_pane_g2_ParamLimits

0xbcd6,	// (0x00015470) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x00019156) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x00019156) listscroll_popup_graphic_pane_g

0xbcea,	// (0x00015484) scroll_pane_cp5

0xbc43,	// (0x000153dd) cell_graphic_popup_pane_ParamLimits

0xbc43,	// (0x000153dd) cell_graphic_popup_pane

0xbc24,	// (0x000153be) cell_graphic_popup_pane_g1

0xbc2c,	// (0x000153c6) cell_graphic_popup_pane_g2

0x7efd,	// (0x00011697) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0001914f) cell_graphic_popup_pane_g

0xbc35,	// (0x000153cf) cell_graphic_popup_pane_t2

0x7f06,	// (0x000116a0) grid_highlight_pane_cp3

0x80eb,	// (0x00011885) list_gen_pane_ParamLimits

0x80eb,	// (0x00011885) list_gen_pane

0x811d,	// (0x000118b7) scroll_pane

0xbb7c,	// (0x00015316) bg_list_pane_g1_ParamLimits

0xbb7c,	// (0x00015316) bg_list_pane_g1

0xbb99,	// (0x00015333) bg_list_pane_g2_ParamLimits

0xbb99,	// (0x00015333) bg_list_pane_g2

0xbbae,	// (0x00015348) bg_list_pane_g3_ParamLimits

0xbbae,	// (0x00015348) bg_list_pane_g3

0xbbc2,	// (0x0001535c) bg_list_pane_g4_ParamLimits

0xbbc2,	// (0x0001535c) bg_list_pane_g4

0xbbd6,	// (0x00015370) bg_list_pane_g5_ParamLimits

0xbbd6,	// (0x00015370) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x00019144) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x00019144) bg_list_pane_g

0xba8f,	// (0x00015229) list_double2_graphic_large_graphic_pane_ParamLimits

0xba8f,	// (0x00015229) list_double2_graphic_large_graphic_pane

0xba8f,	// (0x00015229) list_double2_graphic_pane_ParamLimits

0xba8f,	// (0x00015229) list_double2_graphic_pane

0xba8f,	// (0x00015229) list_double2_large_graphic_pane_ParamLimits

0xba8f,	// (0x00015229) list_double2_large_graphic_pane

0xba8f,	// (0x00015229) list_double2_pane_ParamLimits

0xba8f,	// (0x00015229) list_double2_pane

0xba8f,	// (0x00015229) list_double_graphic_heading_pane_ParamLimits

0xba8f,	// (0x00015229) list_double_graphic_heading_pane

0xba8f,	// (0x00015229) list_double_graphic_pane_ParamLimits

0xba8f,	// (0x00015229) list_double_graphic_pane

0xba8f,	// (0x00015229) list_double_heading_pane_ParamLimits

0xba8f,	// (0x00015229) list_double_heading_pane

0xba8f,	// (0x00015229) list_double_large_graphic_pane_ParamLimits

0xba8f,	// (0x00015229) list_double_large_graphic_pane

0xba8f,	// (0x00015229) list_double_number_pane_ParamLimits

0xba8f,	// (0x00015229) list_double_number_pane

0xba8f,	// (0x00015229) list_double_pane_ParamLimits

0xba8f,	// (0x00015229) list_double_pane

0xba8f,	// (0x00015229) list_double_time_pane_ParamLimits

0xba8f,	// (0x00015229) list_double_time_pane

0xba8f,	// (0x00015229) list_setting_number_pane_ParamLimits

0xba8f,	// (0x00015229) list_setting_number_pane

0xba8f,	// (0x00015229) list_setting_pane_ParamLimits

0xba8f,	// (0x00015229) list_setting_pane

0xbaeb,	// (0x00015285) list_single_2graphic_pane_ParamLimits

0xbaeb,	// (0x00015285) list_single_2graphic_pane

0xbaeb,	// (0x00015285) list_single_graphic_heading_pane_ParamLimits

0xbaeb,	// (0x00015285) list_single_graphic_heading_pane

0xbaeb,	// (0x00015285) list_single_graphic_pane_ParamLimits

0xbaeb,	// (0x00015285) list_single_graphic_pane

0xbaeb,	// (0x00015285) list_single_heading_pane_ParamLimits

0xbaeb,	// (0x00015285) list_single_heading_pane

0xbb5d,	// (0x000152f7) list_single_large_graphic_pane_ParamLimits

0xbb5d,	// (0x000152f7) list_single_large_graphic_pane

0xbaeb,	// (0x00015285) list_single_number_heading_pane_ParamLimits

0xbaeb,	// (0x00015285) list_single_number_heading_pane

0xbaeb,	// (0x00015285) list_single_number_pane_ParamLimits

0xbaeb,	// (0x00015285) list_single_number_pane

0xbaeb,	// (0x00015285) list_single_pane_ParamLimits

0xbaeb,	// (0x00015285) list_single_pane

0x7844,	// (0x00010fde) list_highlight_pane_cp1

0x815d,	// (0x000118f7) list_single_pane_g1_ParamLimits

0x815d,	// (0x000118f7) list_single_pane_g1

0x8169,	// (0x00011903) list_single_pane_g2_ParamLimits

0x8169,	// (0x00011903) list_single_pane_g2

0x0001,

0xf5e0,	// (0x00018d7a) list_single_pane_g_ParamLimits

0xf5e0,	// (0x00018d7a) list_single_pane_g

0xba48,	// (0x000151e2) list_single_pane_t1_ParamLimits

0xba48,	// (0x000151e2) list_single_pane_t1

0x815d,	// (0x000118f7) list_single_number_pane_g1_ParamLimits

0x815d,	// (0x000118f7) list_single_number_pane_g1

0x8169,	// (0x00011903) list_single_number_pane_g2_ParamLimits

0x8169,	// (0x00011903) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x00018d7a) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x00018d7a) list_single_number_pane_g

0xb7d4,	// (0x00014f6e) list_single_number_pane_t1_ParamLimits

0xb7d4,	// (0x00014f6e) list_single_number_pane_t1

0xb7ea,	// (0x00014f84) list_single_number_pane_t2_ParamLimits

0xb7ea,	// (0x00014f84) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x00019105) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x00019105) list_single_number_pane_t

0x8151,	// (0x000118eb) list_single_graphic_pane_g1_ParamLimits

0x8151,	// (0x000118eb) list_single_graphic_pane_g1

0x815d,	// (0x000118f7) list_single_graphic_pane_g2_ParamLimits

0x815d,	// (0x000118f7) list_single_graphic_pane_g2

0x8169,	// (0x00011903) list_single_graphic_pane_g3_ParamLimits

0x8169,	// (0x00011903) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00018d73) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00018d73) list_single_graphic_pane_g

0x8175,	// (0x0001190f) list_single_graphic_pane_t1_ParamLimits

0x8175,	// (0x0001190f) list_single_graphic_pane_t1

0x815d,	// (0x000118f7) list_single_heading_pane_g1_ParamLimits

0x815d,	// (0x000118f7) list_single_heading_pane_g1

0x8169,	// (0x00011903) list_single_heading_pane_g2_ParamLimits

0x8169,	// (0x00011903) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00018d7a) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00018d7a) list_single_heading_pane_g

0x818b,	// (0x00011925) list_single_heading_pane_t1_ParamLimits

0x818b,	// (0x00011925) list_single_heading_pane_t1

0x81a1,	// (0x0001193b) list_single_heading_pane_t2_ParamLimits

0x81a1,	// (0x0001193b) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x00018d7f) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x00018d7f) list_single_heading_pane_t

0x815d,	// (0x000118f7) list_single_number_heading_pane_g1_ParamLimits

0x815d,	// (0x000118f7) list_single_number_heading_pane_g1

0x8169,	// (0x00011903) list_single_number_heading_pane_g2_ParamLimits

0x8169,	// (0x00011903) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x00018d7a) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x00018d7a) list_single_number_heading_pane_g

0x818b,	// (0x00011925) list_single_number_heading_pane_t1_ParamLimits

0x818b,	// (0x00011925) list_single_number_heading_pane_t1

0x81b3,	// (0x0001194d) list_single_number_heading_pane_t2_ParamLimits

0x81b3,	// (0x0001194d) list_single_number_heading_pane_t2

0x81c5,	// (0x0001195f) list_single_number_heading_pane_t3_ParamLimits

0x81c5,	// (0x0001195f) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x00018d84) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x00018d84) list_single_number_heading_pane_t

0x81d7,	// (0x00011971) list_single_graphic_heading_pane_g1_ParamLimits

0x81d7,	// (0x00011971) list_single_graphic_heading_pane_g1

0x81e3,	// (0x0001197d) list_single_graphic_heading_pane_g4_ParamLimits

0x81e3,	// (0x0001197d) list_single_graphic_heading_pane_g4

0x8169,	// (0x00011903) list_single_graphic_heading_pane_g5_ParamLimits

0x8169,	// (0x00011903) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x00018d8b) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x00018d8b) list_single_graphic_heading_pane_g

0x818b,	// (0x00011925) list_single_graphic_heading_pane_t1_ParamLimits

0x818b,	// (0x00011925) list_single_graphic_heading_pane_t1

0x81f4,	// (0x0001198e) list_single_graphic_heading_pane_t2_ParamLimits

0x81f4,	// (0x0001198e) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x00018d92) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x00018d92) list_single_graphic_heading_pane_t

0x8206,	// (0x000119a0) list_single_large_graphic_pane_g1_ParamLimits

0x8206,	// (0x000119a0) list_single_large_graphic_pane_g1

0x8212,	// (0x000119ac) list_single_large_graphic_pane_g2_ParamLimits

0x8212,	// (0x000119ac) list_single_large_graphic_pane_g2

0x821e,	// (0x000119b8) list_single_large_graphic_pane_g3_ParamLimits

0x821e,	// (0x000119b8) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x00018d97) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x00018d97) list_single_large_graphic_pane_g

0xaa99,	// (0x00014233) wait_border_pane_g2_copy1

0x822a,	// (0x000119c4) list_single_large_graphic_pane_g4_cp2

0x8232,	// (0x000119cc) list_single_large_graphic_pane_t1_ParamLimits

0x8232,	// (0x000119cc) list_single_large_graphic_pane_t1

0x8248,	// (0x000119e2) list_double_pane_g1_ParamLimits

0x8248,	// (0x000119e2) list_double_pane_g1

0x8254,	// (0x000119ee) list_double_pane_g2_ParamLimits

0x8254,	// (0x000119ee) list_double_pane_g2

0x0001,

0xf604,	// (0x00018d9e) list_double_pane_g_ParamLimits

0xf604,	// (0x00018d9e) list_double_pane_g

0x8260,	// (0x000119fa) list_double_pane_t1_ParamLimits

0x8260,	// (0x000119fa) list_double_pane_t1

0x8276,	// (0x00011a10) list_double_pane_t2_ParamLimits

0x8276,	// (0x00011a10) list_double_pane_t2

0x0001,

0xf609,	// (0x00018da3) list_double_pane_t_ParamLimits

0xf609,	// (0x00018da3) list_double_pane_t

0x8288,	// (0x00011a22) list_double2_pane_g1_ParamLimits

0x8288,	// (0x00011a22) list_double2_pane_g1

0x8299,	// (0x00011a33) list_double2_pane_g2_ParamLimits

0x8299,	// (0x00011a33) list_double2_pane_g2

0x0001,

0xf60e,	// (0x00018da8) list_double2_pane_g_ParamLimits

0xf60e,	// (0x00018da8) list_double2_pane_g

0x82a5,	// (0x00011a3f) list_double2_pane_t1_ParamLimits

0x82a5,	// (0x00011a3f) list_double2_pane_t1

0x82bb,	// (0x00011a55) list_double2_pane_t2_ParamLimits

0x82bb,	// (0x00011a55) list_double2_pane_t2

0x0001,

0xf613,	// (0x00018dad) list_double2_pane_t_ParamLimits

0xf613,	// (0x00018dad) list_double2_pane_t

0x8248,	// (0x000119e2) list_double_number_pane_g1_ParamLimits

0x8248,	// (0x000119e2) list_double_number_pane_g1

0x8254,	// (0x000119ee) list_double_number_pane_g2_ParamLimits

0x8254,	// (0x000119ee) list_double_number_pane_g2

0x0001,

0xf604,	// (0x00018d9e) list_double_number_pane_g_ParamLimits

0xf604,	// (0x00018d9e) list_double_number_pane_g

0x82cd,	// (0x00011a67) list_double_number_pane_t1_ParamLimits

0x82cd,	// (0x00011a67) list_double_number_pane_t1

0x82df,	// (0x00011a79) list_double_number_pane_t2_ParamLimits

0x82df,	// (0x00011a79) list_double_number_pane_t2

0x82f5,	// (0x00011a8f) list_double_number_pane_t3_ParamLimits

0x82f5,	// (0x00011a8f) list_double_number_pane_t3

0x0002,

0xf618,	// (0x00018db2) list_double_number_pane_t_ParamLimits

0xf618,	// (0x00018db2) list_double_number_pane_t

0x8307,	// (0x00011aa1) list_double_graphic_pane_g1_ParamLimits

0x8307,	// (0x00011aa1) list_double_graphic_pane_g1

0x8313,	// (0x00011aad) list_double_graphic_pane_g2_ParamLimits

0x8313,	// (0x00011aad) list_double_graphic_pane_g2

0x8322,	// (0x00011abc) list_double_graphic_pane_g3_ParamLimits

0x8322,	// (0x00011abc) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x00018db9) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x00018db9) list_double_graphic_pane_g

0x833a,	// (0x00011ad4) list_double_graphic_pane_t1_ParamLimits

0x833a,	// (0x00011ad4) list_double_graphic_pane_t1

0x8350,	// (0x00011aea) list_double_graphic_pane_t2_ParamLimits

0x8350,	// (0x00011aea) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x00018dc2) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x00018dc2) list_double_graphic_pane_t

0x8362,	// (0x00011afc) list_double2_graphic_pane_g1_ParamLimits

0x8362,	// (0x00011afc) list_double2_graphic_pane_g1

0x836e,	// (0x00011b08) list_double2_graphic_pane_g2_ParamLimits

0x836e,	// (0x00011b08) list_double2_graphic_pane_g2

0x8299,	// (0x00011a33) list_double2_graphic_pane_g3_ParamLimits

0x8299,	// (0x00011a33) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x00018dc7) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x00018dc7) list_double2_graphic_pane_g

0x837a,	// (0x00011b14) list_double2_graphic_pane_t1_ParamLimits

0x837a,	// (0x00011b14) list_double2_graphic_pane_t1

0x8390,	// (0x00011b2a) list_double2_graphic_pane_t2_ParamLimits

0x8390,	// (0x00011b2a) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x00018dce) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x00018dce) list_double2_graphic_pane_t

0x83a2,	// (0x00011b3c) list_double_large_graphic_pane_g1_ParamLimits

0x83a2,	// (0x00011b3c) list_double_large_graphic_pane_g1

0x83cb,	// (0x00011b65) list_double_large_graphic_pane_g2_ParamLimits

0x83cb,	// (0x00011b65) list_double_large_graphic_pane_g2

0x8254,	// (0x000119ee) list_double_large_graphic_pane_g3_ParamLimits

0x8254,	// (0x000119ee) list_double_large_graphic_pane_g3

0x83dc,	// (0x00011b76) list_double_large_graphic_pane_g4_ParamLimits

0x83dc,	// (0x00011b76) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x00018dd3) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x00018dd3) list_double_large_graphic_pane_g

0x8402,	// (0x00011b9c) list_double_large_graphic_pane_t1_ParamLimits

0x8402,	// (0x00011b9c) list_double_large_graphic_pane_t1

0x841b,	// (0x00011bb5) list_double_large_graphic_pane_t2_ParamLimits

0x841b,	// (0x00011bb5) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x00018dde) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x00018dde) list_double_large_graphic_pane_t

0x842d,	// (0x00011bc7) list_double2_large_graphic_pane_g1_ParamLimits

0x842d,	// (0x00011bc7) list_double2_large_graphic_pane_g1

0x8288,	// (0x00011a22) list_double2_large_graphic_pane_g2_ParamLimits

0x8288,	// (0x00011a22) list_double2_large_graphic_pane_g2

0x8299,	// (0x00011a33) list_double2_large_graphic_pane_g3_ParamLimits

0x8299,	// (0x00011a33) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x00018de3) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x00018de3) list_double2_large_graphic_pane_g

0x8439,	// (0x00011bd3) list_double2_large_graphic_pane_t1_ParamLimits

0x8439,	// (0x00011bd3) list_double2_large_graphic_pane_t1

0x844f,	// (0x00011be9) list_double2_large_graphic_pane_t2_ParamLimits

0x844f,	// (0x00011be9) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x00018dea) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x00018dea) list_double2_large_graphic_pane_t

0x8461,	// (0x00011bfb) list_double_heading_pane_g1_ParamLimits

0x8461,	// (0x00011bfb) list_double_heading_pane_g1

0x8472,	// (0x00011c0c) list_double_heading_pane_g2_ParamLimits

0x8472,	// (0x00011c0c) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x00018def) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x00018def) list_double_heading_pane_g

0x847e,	// (0x00011c18) list_double_heading_pane_t1_ParamLimits

0x847e,	// (0x00011c18) list_double_heading_pane_t1

0x82bb,	// (0x00011a55) list_double_heading_pane_t2_ParamLimits

0x82bb,	// (0x00011a55) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x00018df4) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x00018df4) list_double_heading_pane_t

0x8494,	// (0x00011c2e) list_double_graphic_heading_pane_g1_ParamLimits

0x8494,	// (0x00011c2e) list_double_graphic_heading_pane_g1

0x8461,	// (0x00011bfb) list_double_graphic_heading_pane_g2_ParamLimits

0x8461,	// (0x00011bfb) list_double_graphic_heading_pane_g2

0x8472,	// (0x00011c0c) list_double_graphic_heading_pane_g3_ParamLimits

0x8472,	// (0x00011c0c) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x00018df9) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x00018df9) list_double_graphic_heading_pane_g

0x84a0,	// (0x00011c3a) list_double_graphic_heading_pane_t1_ParamLimits

0x84a0,	// (0x00011c3a) list_double_graphic_heading_pane_t1

0x8390,	// (0x00011b2a) list_double_graphic_heading_pane_t2_ParamLimits

0x8390,	// (0x00011b2a) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x00018e00) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x00018e00) list_double_graphic_heading_pane_t

0x83cb,	// (0x00011b65) list_double_time_pane_g1_ParamLimits

0x83cb,	// (0x00011b65) list_double_time_pane_g1

0x8254,	// (0x000119ee) list_double_time_pane_g2_ParamLimits

0x8254,	// (0x000119ee) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x00018e05) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x00018e05) list_double_time_pane_g

0x84b6,	// (0x00011c50) list_double_time_pane_t1_ParamLimits

0x84b6,	// (0x00011c50) list_double_time_pane_t1

0x84cc,	// (0x00011c66) list_double_time_pane_t2_ParamLimits

0x84cc,	// (0x00011c66) list_double_time_pane_t2

0x84de,	// (0x00011c78) list_double_time_pane_t3_ParamLimits

0x84de,	// (0x00011c78) list_double_time_pane_t3

0x84f0,	// (0x00011c8a) list_double_time_pane_t4_ParamLimits

0x84f0,	// (0x00011c8a) list_double_time_pane_t4

0x0003,

0xf670,	// (0x00018e0a) list_double_time_pane_t_ParamLimits

0xf670,	// (0x00018e0a) list_double_time_pane_t

0x836e,	// (0x00011b08) list_setting_pane_g1_ParamLimits

0x836e,	// (0x00011b08) list_setting_pane_g1

0x8299,	// (0x00011a33) list_setting_pane_g2_ParamLimits

0x8299,	// (0x00011a33) list_setting_pane_g2

0x0001,

0xf679,	// (0x00018e13) list_setting_pane_g_ParamLimits

0xf679,	// (0x00018e13) list_setting_pane_g

0x8502,	// (0x00011c9c) list_setting_pane_t1_ParamLimits

0x8502,	// (0x00011c9c) list_setting_pane_t1

0x8519,	// (0x00011cb3) list_setting_pane_t2_ParamLimits

0x8519,	// (0x00011cb3) list_setting_pane_t2

0x0002,

0xf67e,	// (0x00018e18) list_setting_pane_t_ParamLimits

0xf67e,	// (0x00018e18) list_setting_pane_t

0x8558,	// (0x00011cf2) set_value_pane_cp_ParamLimits

0x8558,	// (0x00011cf2) set_value_pane_cp

0x836e,	// (0x00011b08) list_setting_number_pane_g1_ParamLimits

0x836e,	// (0x00011b08) list_setting_number_pane_g1

0x8299,	// (0x00011a33) list_setting_number_pane_g2_ParamLimits

0x8299,	// (0x00011a33) list_setting_number_pane_g2

0x0001,

0xf679,	// (0x00018e13) list_setting_number_pane_g_ParamLimits

0xf679,	// (0x00018e13) list_setting_number_pane_g

0x8564,	// (0x00011cfe) list_setting_number_pane_t1_ParamLimits

0x8564,	// (0x00011cfe) list_setting_number_pane_t1

0x8578,	// (0x00011d12) list_setting_number_pane_t2_ParamLimits

0x8578,	// (0x00011d12) list_setting_number_pane_t2

0x858f,	// (0x00011d29) list_setting_number_pane_t3_ParamLimits

0x858f,	// (0x00011d29) list_setting_number_pane_t3

0x0003,

0xf685,	// (0x00018e1f) list_setting_number_pane_t_ParamLimits

0xf685,	// (0x00018e1f) list_setting_number_pane_t

0x8558,	// (0x00011cf2) set_value_pane_ParamLimits

0x8558,	// (0x00011cf2) set_value_pane

0x85d2,	// (0x00011d6c) bg_set_opt_pane_ParamLimits

0x85d2,	// (0x00011d6c) bg_set_opt_pane

0x85f3,	// (0x00011d8d) set_value_pane_t1

0x8601,	// (0x00011d9b) slider_set_pane_cp3

0x860a,	// (0x00011da4) volume_small_pane_cp

0x8613,	// (0x00011dad) list_form_gen_pane

0x861c,	// (0x00011db6) scroll_pane_cp8

0x8635,	// (0x00011dcf) form_field_data_pane_ParamLimits

0x8635,	// (0x00011dcf) form_field_data_pane

0x8657,	// (0x00011df1) form_field_data_wide_pane_ParamLimits

0x8657,	// (0x00011df1) form_field_data_wide_pane

0x867a,	// (0x00011e14) form_field_popup_pane_ParamLimits

0x867a,	// (0x00011e14) form_field_popup_pane

0x869a,	// (0x00011e34) form_field_popup_wide_pane_ParamLimits

0x869a,	// (0x00011e34) form_field_popup_wide_pane

0x86b7,	// (0x00011e51) form_field_slider_pane_ParamLimits

0x86b7,	// (0x00011e51) form_field_slider_pane

0x86ca,	// (0x00011e64) form_field_slider_wide_pane_ParamLimits

0x86ca,	// (0x00011e64) form_field_slider_wide_pane

0x86dd,	// (0x00011e77) data_form_pane

0x86f3,	// (0x00011e8d) form_field_data_pane_t1

0x870b,	// (0x00011ea5) input_focus_pane

0x8719,	// (0x00011eb3) data_form_wide_pane

0x8751,	// (0x00011eeb) form_field_data_wide_pane_t1

0x7f1b,	// (0x000116b5) input_focus_pane_cp6

0x8773,	// (0x00011f0d) form_field_popup_pane_t1

0x870b,	// (0x00011ea5) input_focus_pane_cp7

0x878b,	// (0x00011f25) list_form_pane

0x879f,	// (0x00011f39) form_field_popup_wide_pane_t1

0x870b,	// (0x00011ea5) input_focus_pane_cp8

0x87b4,	// (0x00011f4e) list_form_wide_pane

0x87cb,	// (0x00011f65) form_field_slider_pane_t1_ParamLimits

0x87cb,	// (0x00011f65) form_field_slider_pane_t1

0x87dd,	// (0x00011f77) form_field_slider_pane_t2_ParamLimits

0x87dd,	// (0x00011f77) form_field_slider_pane_t2

0x0001,

0xf695,	// (0x00018e2f) form_field_slider_pane_t_ParamLimits

0xf695,	// (0x00018e2f) form_field_slider_pane_t

0x7bb9,	// (0x00011353) input_focus_pane_cp9_ParamLimits

0x7bb9,	// (0x00011353) input_focus_pane_cp9

0x87ef,	// (0x00011f89) slider_cont_pane_ParamLimits

0x87ef,	// (0x00011f89) slider_cont_pane

0x8803,	// (0x00011f9d) form_field_slider_wide_pane_t1_ParamLimits

0x8803,	// (0x00011f9d) form_field_slider_wide_pane_t1

0x8815,	// (0x00011faf) form_field_slider_wide_pane_t2_ParamLimits

0x8815,	// (0x00011faf) form_field_slider_wide_pane_t2

0x0001,

0xf69a,	// (0x00018e34) form_field_slider_wide_pane_t_ParamLimits

0xf69a,	// (0x00018e34) form_field_slider_wide_pane_t

0x7bb9,	// (0x00011353) input_focus_pane_cp10_ParamLimits

0x7bb9,	// (0x00011353) input_focus_pane_cp10

0x8827,	// (0x00011fc1) slider_cont_pane_cp1_ParamLimits

0x8827,	// (0x00011fc1) slider_cont_pane_cp1

0x883b,	// (0x00011fd5) slider_form_pane_cp

0x8843,	// (0x00011fdd) input_focus_pane_g1

0x884b,	// (0x00011fe5) input_focus_pane_g2

0x8853,	// (0x00011fed) input_focus_pane_g3

0x885b,	// (0x00011ff5) input_focus_pane_g4

0x8863,	// (0x00011ffd) input_focus_pane_g5

0x886b,	// (0x00012005) input_focus_pane_g6

0x8873,	// (0x0001200d) input_focus_pane_g7

0x887b,	// (0x00012015) input_focus_pane_g8

0x8883,	// (0x0001201d) input_focus_pane_g9

0x783a,	// (0x00010fd4) input_focus_pane_g10

0x0009,

0xf69f,	// (0x00018e39) input_focus_pane_g

0xaaa2,	// (0x0001423c) wait_border_pane_g3_copy1

0x888b,	// (0x00012025) data_form_pane_t1

0x783a,	// (0x00010fd4) wait_anim_pane_g1_copy1

0xba2b,	// (0x000151c5) data_form_wide_pane_t1

0x88a6,	// (0x00012040) list_form_graphic_pane_cp_ParamLimits

0x88a6,	// (0x00012040) list_form_graphic_pane_cp

0xba00,	// (0x0001519a) slider_form_pane_g1

0xba09,	// (0x000151a3) slider_form_pane_g2

0x0006,

0xf99b,	// (0x00019135) slider_form_pane_g

0x88bf,	// (0x00012059) list_form_graphic_pane_ParamLimits

0x88bf,	// (0x00012059) list_form_graphic_pane

0x88db,	// (0x00012075) list_form_graphic_pane_g1

0x88e3,	// (0x0001207d) list_form_graphic_pane_t1_ParamLimits

0x88e3,	// (0x0001207d) list_form_graphic_pane_t1

0x7924,	// (0x000110be) list_highlight_pane_cp5_ParamLimits

0x7924,	// (0x000110be) list_highlight_pane_cp5

0x88f8,	// (0x00012092) find_pane_g1

0x8901,	// (0x0001209b) input_find_pane

0x890a,	// (0x000120a4) input_find_pane_g1_ParamLimits

0x890a,	// (0x000120a4) input_find_pane_g1

0x8916,	// (0x000120b0) input_find_pane_t1_ParamLimits

0x8916,	// (0x000120b0) input_find_pane_t1

0x892b,	// (0x000120c5) input_find_pane_t2_ParamLimits

0x892b,	// (0x000120c5) input_find_pane_t2

0x0001,

0xf6b4,	// (0x00018e4e) input_find_pane_t_ParamLimits

0xf6b4,	// (0x00018e4e) input_find_pane_t

0x8940,	// (0x000120da) input_focus_pane_cp5_ParamLimits

0x8940,	// (0x000120da) input_focus_pane_cp5

0x895a,	// (0x000120f4) bg_popup_window_pane_cp2_ParamLimits

0x895a,	// (0x000120f4) bg_popup_window_pane_cp2

0x8967,	// (0x00012101) listscroll_menu_pane_ParamLimits

0x8967,	// (0x00012101) listscroll_menu_pane

0x8973,	// (0x0001210d) popup_submenu_window_ParamLimits

0x8973,	// (0x0001210d) popup_submenu_window

0x899f,	// (0x00012139) find_popup_pane_g1

0x89a7,	// (0x00012141) input_popup_find_pane_cp

0x8940,	// (0x000120da) input_focus_pane_cp4_ParamLimits

0x8940,	// (0x000120da) input_focus_pane_cp4

0x89bd,	// (0x00012157) input_popup_find_pane_t1_ParamLimits

0x89bd,	// (0x00012157) input_popup_find_pane_t1

0x7844,	// (0x00010fde) bg_popup_sub_pane_cp

0x89eb,	// (0x00012185) listscroll_popup_sub_pane

0x89f3,	// (0x0001218d) list_submenu_pane_ParamLimits

0x89f3,	// (0x0001218d) list_submenu_pane

0x8a04,	// (0x0001219e) scroll_pane_cp4

0x8a0c,	// (0x000121a6) list_single_popup_submenu_pane_ParamLimits

0x8a0c,	// (0x000121a6) list_single_popup_submenu_pane

0x8a20,	// (0x000121ba) list_single_popup_submenu_pane_g1

0x8a28,	// (0x000121c2) list_single_popup_submenu_pane_t1_ParamLimits

0x8a28,	// (0x000121c2) list_single_popup_submenu_pane_t1

0x7924,	// (0x000110be) bg_active_tab_pane_cp1_ParamLimits

0x7924,	// (0x000110be) bg_active_tab_pane_cp1

0x8a3d,	// (0x000121d7) tabs_2_active_pane_g1

0x8a45,	// (0x000121df) tabs_2_active_pane_t1

0x7924,	// (0x000110be) bg_passive_tab_pane_cp1_ParamLimits

0x7924,	// (0x000110be) bg_passive_tab_pane_cp1

0x8a3d,	// (0x000121d7) tabs_2_passive_pane_g1

0x8a45,	// (0x000121df) tabs_2_passive_pane_t1

0x8a57,	// (0x000121f1) bg_active_tab_pane_cp4

0x8a65,	// (0x000121ff) tabs_2_long_active_pane_t1

0x8a78,	// (0x00012212) bg_passive_tab_pane_cp4

0x66fe,	// (0x0000fe98) list_single_midp_graphic_pane_g4_ParamLimits

0x8a57,	// (0x000121f1) bg_active_tab_pane_cp5

0x8a84,	// (0x0001221e) tabs_3_long_active_pane_t1

0x8a78,	// (0x00012212) bg_passive_tab_pane_cp5

0x66fe,	// (0x0000fe98) list_single_midp_graphic_pane_g4

0x7924,	// (0x000110be) bg_popup_window_pane_cp13_ParamLimits

0x7924,	// (0x000110be) bg_popup_window_pane_cp13

0x8a9f,	// (0x00012239) listscroll_popup_fast_pane_ParamLimits

0x8a9f,	// (0x00012239) listscroll_popup_fast_pane

0x8aae,	// (0x00012248) grid_popup_fast_pane_ParamLimits

0x8aae,	// (0x00012248) grid_popup_fast_pane

0x8ac0,	// (0x0001225a) scroll_pane_cp9_ParamLimits

0x8ac0,	// (0x0001225a) scroll_pane_cp9

0xd7c3,	// (0x00016f5d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd7c3,	// (0x00016f5d) list_single_graphic_hl_pane_t1_cp2

0x8ae4,	// (0x0001227e) input_focus_pane_cp20_ParamLimits

0x8ae4,	// (0x0001227e) input_focus_pane_cp20

0x8af2,	// (0x0001228c) query_popup_data_pane_t1_ParamLimits

0x8af2,	// (0x0001228c) query_popup_data_pane_t1

0x8b05,	// (0x0001229f) query_popup_data_pane_t2_ParamLimits

0x8b05,	// (0x0001229f) query_popup_data_pane_t2

0x8b4b,	// (0x000122e5) query_popup_data_pane_t3_ParamLimits

0x8b4b,	// (0x000122e5) query_popup_data_pane_t3

0x8b8c,	// (0x00012326) query_popup_data_pane_t4_ParamLimits

0x8b8c,	// (0x00012326) query_popup_data_pane_t4

0x8bc8,	// (0x00012362) query_popup_data_pane_t5_ParamLimits

0x8bc8,	// (0x00012362) query_popup_data_pane_t5

0x0004,

0xf6b9,	// (0x00018e53) query_popup_data_pane_t_ParamLimits

0xf6b9,	// (0x00018e53) query_popup_data_pane_t

0x8843,	// (0x00011fdd) bg_set_opt_pane_g1

0x884b,	// (0x00011fe5) bg_set_opt_pane_g2

0x8853,	// (0x00011fed) bg_set_opt_pane_g3

0x885b,	// (0x00011ff5) bg_set_opt_pane_g4

0x8863,	// (0x00011ffd) bg_set_opt_pane_g5

0x886b,	// (0x00012005) bg_set_opt_pane_g6

0x8873,	// (0x0001200d) bg_set_opt_pane_g7

0x887b,	// (0x00012015) bg_set_opt_pane_g8

0x8883,	// (0x0001201d) bg_set_opt_pane_g9

0x0008,

0xf6c4,	// (0x00018e5e) bg_set_opt_pane_g

0x6305,	// (0x0000fa9f) control_top_pane_stacon_ParamLimits

0x6305,	// (0x0000fa9f) control_top_pane_stacon

0x6358,	// (0x0000faf2) signal_pane_stacon_ParamLimits

0x6358,	// (0x0000faf2) signal_pane_stacon

0x9216,	// (0x000129b0) stacon_top_pane_g1_ParamLimits

0x9216,	// (0x000129b0) stacon_top_pane_g1

0x637d,	// (0x0000fb17) title_pane_stacon_ParamLimits

0x637d,	// (0x0000fb17) title_pane_stacon

0x63a7,	// (0x0000fb41) uni_indicator_pane_stacon_ParamLimits

0x63a7,	// (0x0000fb41) uni_indicator_pane_stacon

0x63bc,	// (0x0000fb56) battery_pane_stacon_ParamLimits

0x63bc,	// (0x0000fb56) battery_pane_stacon

0x6400,	// (0x0000fb9a) control_bottom_pane_stacon_ParamLimits

0x6400,	// (0x0000fb9a) control_bottom_pane_stacon

0x6423,	// (0x0000fbbd) navi_pane_stacon_ParamLimits

0x6423,	// (0x0000fbbd) navi_pane_stacon

0x9238,	// (0x000129d2) stacon_bottom_pane_g1_ParamLimits

0x9238,	// (0x000129d2) stacon_bottom_pane_g1

0x6066,	// (0x0000f800) aid_levels_signal_lsc_ParamLimits

0x6066,	// (0x0000f800) aid_levels_signal_lsc

0x607d,	// (0x0000f817) signal_pane_stacon_g1_ParamLimits

0x607d,	// (0x0000f817) signal_pane_stacon_g1

0x6091,	// (0x0000f82b) signal_pane_stacon_g2_ParamLimits

0x6091,	// (0x0000f82b) signal_pane_stacon_g2

0x0001,

0xf6d7,	// (0x00018e71) signal_pane_stacon_g_ParamLimits

0xf6d7,	// (0x00018e71) signal_pane_stacon_g

0x60c6,	// (0x0000f860) title_pane_stacon_t1_ParamLimits

0x60c6,	// (0x0000f860) title_pane_stacon_t1

0x8c0c,	// (0x000123a6) uni_indicator_pane_stacon_g1

0x8c16,	// (0x000123b0) uni_indicator_pane_stacon_g2

0x8c20,	// (0x000123ba) uni_indicator_pane_stacon_g3

0x8c2a,	// (0x000123c4) uni_indicator_pane_stacon_g4

0x0003,

0xf6e3,	// (0x00018e7d) uni_indicator_pane_stacon_g

0x60eb,	// (0x0000f885) control_top_pane_stacon_g1

0x60f3,	// (0x0000f88d) control_top_pane_stacon_t1_ParamLimits

0x60f3,	// (0x0000f88d) control_top_pane_stacon_t1

0x612a,	// (0x0000f8c4) aid_levels_battery_lsc_ParamLimits

0x612a,	// (0x0000f8c4) aid_levels_battery_lsc

0x6142,	// (0x0000f8dc) battery_pane_stacon_g1_ParamLimits

0x6142,	// (0x0000f8dc) battery_pane_stacon_g1

0x6155,	// (0x0000f8ef) battery_pane_stacon_g2_ParamLimits

0x6155,	// (0x0000f8ef) battery_pane_stacon_g2

0x0001,

0xf6ec,	// (0x00018e86) battery_pane_stacon_g_ParamLimits

0xf6ec,	// (0x00018e86) battery_pane_stacon_g

0x6193,	// (0x0000f92d) navi_icon_pane_stacon

0x61a7,	// (0x0000f941) navi_navi_pane_stacon

0x6193,	// (0x0000f92d) navi_text_pane_stacon

0x60eb,	// (0x0000f885) control_bottom_pane_stacon_g1

0x61bb,	// (0x0000f955) control_bottom_pane_stacon_t1_ParamLimits

0x61bb,	// (0x0000f955) control_bottom_pane_stacon_t1

0x8c4e,	// (0x000123e8) grid_app_pane_ParamLimits

0x8c4e,	// (0x000123e8) grid_app_pane

0x8c72,	// (0x0001240c) scroll_pane_cp15_ParamLimits

0x8c72,	// (0x0001240c) scroll_pane_cp15

0x8c87,	// (0x00012421) cell_app_pane_ParamLimits

0x8c87,	// (0x00012421) cell_app_pane

0x8cab,	// (0x00012445) cell_app_pane_g1_ParamLimits

0x8cab,	// (0x00012445) cell_app_pane_g1

0x8ccb,	// (0x00012465) cell_app_pane_g2_ParamLimits

0x8ccb,	// (0x00012465) cell_app_pane_g2

0x0001,

0xf6f1,	// (0x00018e8b) cell_app_pane_g_ParamLimits

0xf6f1,	// (0x00018e8b) cell_app_pane_g

0x8cd7,	// (0x00012471) cell_app_pane_t1_ParamLimits

0x8cd7,	// (0x00012471) cell_app_pane_t1

0x8cee,	// (0x00012488) grid_highlight_pane_ParamLimits

0x8cee,	// (0x00012488) grid_highlight_pane

0x8843,	// (0x00011fdd) cell_highlight_pane_g1

0x884b,	// (0x00011fe5) cell_highlight_pane_g2

0x8853,	// (0x00011fed) cell_highlight_pane_g3

0x885b,	// (0x00011ff5) cell_highlight_pane_g4

0x8863,	// (0x00011ffd) cell_highlight_pane_g5

0x886b,	// (0x00012005) cell_highlight_pane_g6

0x8873,	// (0x0001200d) cell_highlight_pane_g7

0x887b,	// (0x00012015) cell_highlight_pane_g8

0x8883,	// (0x0001201d) cell_highlight_pane_g9

0x783a,	// (0x00010fd4) cell_highlight_pane_g10

0x0009,

0xf69f,	// (0x00018e39) cell_highlight_pane_g

0x8cff,	// (0x00012499) bg_scroll_pane

0x6205,	// (0x0000f99f) scroll_handle_pane

0x8d46,	// (0x000124e0) scroll_bg_pane_g1

0x8d5b,	// (0x000124f5) scroll_bg_pane_g2

0x8d73,	// (0x0001250d) scroll_bg_pane_g3

0x0002,

0xf6f6,	// (0x00018e90) scroll_bg_pane_g

0x8d88,	// (0x00012522) scroll_handle_focus_pane_ParamLimits

0x8d88,	// (0x00012522) scroll_handle_focus_pane

0x8d46,	// (0x000124e0) scroll_handle_pane_g1

0x8d95,	// (0x0001252f) scroll_handle_pane_g2

0x8d73,	// (0x0001250d) scroll_handle_pane_g3

0x0002,

0xf6fd,	// (0x00018e97) scroll_handle_pane_g

0x8940,	// (0x000120da) bg_popup_sub_pane_cp21_ParamLimits

0x8940,	// (0x000120da) bg_popup_sub_pane_cp21

0x8da9,	// (0x00012543) popup_fep_japan_predictive_window_t1_ParamLimits

0x8da9,	// (0x00012543) popup_fep_japan_predictive_window_t1

0x8dc3,	// (0x0001255d) popup_fep_japan_predictive_window_t2_ParamLimits

0x8dc3,	// (0x0001255d) popup_fep_japan_predictive_window_t2

0x8df6,	// (0x00012590) popup_fep_japan_predictive_window_t3_ParamLimits

0x8df6,	// (0x00012590) popup_fep_japan_predictive_window_t3

0x0002,

0xf704,	// (0x00018e9e) popup_fep_japan_predictive_window_t_ParamLimits

0xf704,	// (0x00018e9e) popup_fep_japan_predictive_window_t

0x7844,	// (0x00010fde) bg_popup_sub_pane_cp23

0x8e2d,	// (0x000125c7) listscroll_japin_cand_pane

0x8e35,	// (0x000125cf) popup_fep_japan_candidate_window_t1

0x8e43,	// (0x000125dd) candidate_pane_ParamLimits

0x8e43,	// (0x000125dd) candidate_pane

0x8e55,	// (0x000125ef) scroll_pane_cp30

0x8e5d,	// (0x000125f7) list_single_popup_jap_candidate_pane_ParamLimits

0x8e5d,	// (0x000125f7) list_single_popup_jap_candidate_pane

0x7844,	// (0x00010fde) list_highlight_pane_cp30

0x8e72,	// (0x0001260c) list_single_popup_jap_candidate_pane_t1

0x8e81,	// (0x0001261b) level_1_signal

0x8e8e,	// (0x00012628) level_2_signal

0x8e9b,	// (0x00012635) level_3_signal

0x8ea8,	// (0x00012642) level_4_signal

0x8eb5,	// (0x0001264f) level_5_signal

0x8ec2,	// (0x0001265c) level_6_signal

0x8ecf,	// (0x00012669) level_7_signal

0x8e81,	// (0x0001261b) level_1_battery

0x8e8e,	// (0x00012628) level_2_battery

0x8e9b,	// (0x00012635) level_3_battery

0x8ea8,	// (0x00012642) level_4_battery

0x8eb5,	// (0x0001264f) level_5_battery

0x8ec2,	// (0x0001265c) level_6_battery

0x8ecf,	// (0x00012669) level_7_battery

0x8ef4,	// (0x0001268e) list_menu_pane_ParamLimits

0x8ef4,	// (0x0001268e) list_menu_pane

0x8f0a,	// (0x000126a4) scroll_pane_cp25_ParamLimits

0x8f0a,	// (0x000126a4) scroll_pane_cp25

0x8f23,	// (0x000126bd) list_double2_graphic_pane_cp2_ParamLimits

0x8f23,	// (0x000126bd) list_double2_graphic_pane_cp2

0x8f23,	// (0x000126bd) list_double2_large_graphic_pane_cp2_ParamLimits

0x8f23,	// (0x000126bd) list_double2_large_graphic_pane_cp2

0x8f23,	// (0x000126bd) list_double2_pane_cp2_ParamLimits

0x8f23,	// (0x000126bd) list_double2_pane_cp2

0x8f23,	// (0x000126bd) list_double_graphic_pane_cp2_ParamLimits

0x8f23,	// (0x000126bd) list_double_graphic_pane_cp2

0x8f23,	// (0x000126bd) list_double_large_graphic_pane_cp2_ParamLimits

0x8f23,	// (0x000126bd) list_double_large_graphic_pane_cp2

0x8f23,	// (0x000126bd) list_double_number_pane_cp2_ParamLimits

0x8f23,	// (0x000126bd) list_double_number_pane_cp2

0x8f23,	// (0x000126bd) list_double_pane_cp2_ParamLimits

0x8f23,	// (0x000126bd) list_double_pane_cp2

0x8f47,	// (0x000126e1) list_single_2graphic_pane_cp2_ParamLimits

0x8f47,	// (0x000126e1) list_single_2graphic_pane_cp2

0x8f47,	// (0x000126e1) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f47,	// (0x000126e1) list_single_graphic_heading_pane_cp2

0x8f47,	// (0x000126e1) list_single_graphic_pane_cp2_ParamLimits

0x8f47,	// (0x000126e1) list_single_graphic_pane_cp2

0x8f47,	// (0x000126e1) list_single_heading_pane_cp2_ParamLimits

0x8f47,	// (0x000126e1) list_single_heading_pane_cp2

0x8f60,	// (0x000126fa) list_single_large_graphic_pane_cp2_ParamLimits

0x8f60,	// (0x000126fa) list_single_large_graphic_pane_cp2

0x8f47,	// (0x000126e1) list_single_number_heading_pane_cp2_ParamLimits

0x8f47,	// (0x000126e1) list_single_number_heading_pane_cp2

0x8f47,	// (0x000126e1) list_single_number_pane_cp2_ParamLimits

0x8f47,	// (0x000126e1) list_single_number_pane_cp2

0x8f47,	// (0x000126e1) list_single_pane_cp2_ParamLimits

0x8f47,	// (0x000126e1) list_single_pane_cp2

0x8fd6,	// (0x00012770) bg_popup_sub_pane_cp22

0x62b7,	// (0x0000fa51) popup_side_volume_key_window_g1

0x62e1,	// (0x0000fa7b) popup_side_volume_key_window_t1

0x62fd,	// (0x0000fa97) volume_small_pane_cp1

0x7bb9,	// (0x00011353) bg_popup_sub_pane_cp24_ParamLimits

0x7bb9,	// (0x00011353) bg_popup_sub_pane_cp24

0x8fec,	// (0x00012786) fep_china_uni_candidate_pane_ParamLimits

0x8fec,	// (0x00012786) fep_china_uni_candidate_pane

0x9000,	// (0x0001279a) fep_china_uni_entry_pane

0x9010,	// (0x000127aa) popup_fep_china_uni_window_g1

0x902c,	// (0x000127c6) fep_china_uni_entry_pane_g1

0x9034,	// (0x000127ce) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x00018ecf) fep_china_uni_entry_pane_g

0x903c,	// (0x000127d6) fep_entry_item_pane

0x9046,	// (0x000127e0) fep_candidate_item_pane

0x904e,	// (0x000127e8) fep_china_uni_candidate_pane_g1

0x9056,	// (0x000127f0) fep_china_uni_candidate_pane_g2

0x905e,	// (0x000127f8) fep_china_uni_candidate_pane_g3

0x9066,	// (0x00012800) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x00018ed4) fep_china_uni_candidate_pane_g

0x783a,	// (0x00010fd4) fep_entry_item_pane_g1

0x906e,	// (0x00012808) fep_entry_item_pane_t1_ParamLimits

0x906e,	// (0x00012808) fep_entry_item_pane_t1

0x9084,	// (0x0001281e) fep_candidate_item_pane_t1_ParamLimits

0x9084,	// (0x0001281e) fep_candidate_item_pane_t1

0x9099,	// (0x00012833) fep_candidate_item_pane_t2_ParamLimits

0x9099,	// (0x00012833) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x00018edd) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x00018edd) fep_candidate_item_pane_t

0x7924,	// (0x000110be) list_highlight_pane_cp31_ParamLimits

0x7924,	// (0x000110be) list_highlight_pane_cp31

0x90ab,	// (0x00012845) level_1_signal_lsc

0x90b4,	// (0x0001284e) level_2_signal_lsc

0x90bd,	// (0x00012857) level_3_signal_lsc

0x90c6,	// (0x00012860) level_4_signal_lsc

0x90cf,	// (0x00012869) level_5_signal_lsc

0x90d8,	// (0x00012872) level_6_signal_lsc

0x90e1,	// (0x0001287b) level_7_signal_lsc

0x90e1,	// (0x0001287b) level_1_battery_lsc

0x90ea,	// (0x00012884) level_2_battery_lsc

0x90f3,	// (0x0001288d) level_3_battery_lsc

0x90fc,	// (0x00012896) level_4_battery_lsc

0x9105,	// (0x0001289f) level_5_battery_lsc

0x910e,	// (0x000128a8) level_6_battery_lsc

0x90ab,	// (0x00012845) level_7_battery_lsc

0x9117,	// (0x000128b1) scroll_handle_focus_pane_g1

0x9120,	// (0x000128ba) scroll_handle_focus_pane_g2

0x9129,	// (0x000128c3) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x00018ee2) scroll_handle_focus_pane_g

0x9132,	// (0x000128cc) list_single_2graphic_pane_g1_ParamLimits

0x9132,	// (0x000128cc) list_single_2graphic_pane_g1

0x81e3,	// (0x0001197d) list_single_2graphic_pane_g2_ParamLimits

0x81e3,	// (0x0001197d) list_single_2graphic_pane_g2

0x8169,	// (0x00011903) list_single_2graphic_pane_g3_ParamLimits

0x8169,	// (0x00011903) list_single_2graphic_pane_g3

0x913e,	// (0x000128d8) list_single_2graphic_pane_g4_ParamLimits

0x913e,	// (0x000128d8) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x00018ee9) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x00018ee9) list_single_2graphic_pane_g

0x914f,	// (0x000128e9) list_single_2graphic_pane_t1_ParamLimits

0x914f,	// (0x000128e9) list_single_2graphic_pane_t1

0x917d,	// (0x00012917) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x917d,	// (0x00012917) list_double2_graphic_large_graphic_pane_g1

0x8288,	// (0x00011a22) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8288,	// (0x00011a22) list_double2_graphic_large_graphic_pane_g2

0x8299,	// (0x00011a33) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8299,	// (0x00011a33) list_double2_graphic_large_graphic_pane_g3

0x918d,	// (0x00012927) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x918d,	// (0x00012927) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x00018ef2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x00018ef2) list_double2_graphic_large_graphic_pane_g

0x9199,	// (0x00012933) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9199,	// (0x00012933) list_double2_graphic_large_graphic_pane_t1

0x91af,	// (0x00012949) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x91af,	// (0x00012949) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x00018efb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x00018efb) list_double2_graphic_large_graphic_pane_t

0x9300,	// (0x00012a9a) popup_fast_swap_window_ParamLimits

0x9300,	// (0x00012a9a) popup_fast_swap_window

0x931c,	// (0x00012ab6) popup_side_volume_key_window

0x9338,	// (0x00012ad2) stacon_top_pane

0x9342,	// (0x00012adc) status_pane_ParamLimits

0x9342,	// (0x00012adc) status_pane

0x9338,	// (0x00012ad2) status_small_pane

0x7844,	// (0x00010fde) control_pane

0x7844,	// (0x00010fde) stacon_bottom_pane

0x861c,	// (0x00011db6) scroll_pane_cp121

0x8613,	// (0x00011dad) set_content_pane

0x91c1,	// (0x0001295b) bg_active_tab_pane_g1_cp1

0x91ca,	// (0x00012964) bg_active_tab_pane_g2_cp1

0x91d3,	// (0x0001296d) bg_active_tab_pane_g3_cp1

0x91c1,	// (0x0001295b) bg_passive_tab_pane_g1_cp1

0x91ca,	// (0x00012964) bg_passive_tab_pane_g2_cp1

0x91d3,	// (0x0001296d) bg_passive_tab_pane_g3_cp1

0x91dc,	// (0x00012976) bg_active_tab_pane_g1_cp2

0x91ca,	// (0x00012964) bg_active_tab_pane_g2_cp2

0x91e5,	// (0x0001297f) bg_active_tab_pane_g3_cp2

0x91dc,	// (0x00012976) bg_passive_tab_pane_g1_cp2

0x91ca,	// (0x00012964) bg_passive_tab_pane_g2_cp2

0x91e5,	// (0x0001297f) bg_passive_tab_pane_g3_cp2

0x91ee,	// (0x00012988) bg_active_tab_pane_g1_cp3

0x91ca,	// (0x00012964) bg_active_tab_pane_g2_cp3

0x91f7,	// (0x00012991) bg_active_tab_pane_g3_cp3

0x91ee,	// (0x00012988) bg_passive_tab_pane_g1_cp3

0x91ca,	// (0x00012964) bg_passive_tab_pane_g2_cp3

0x91f7,	// (0x00012991) bg_passive_tab_pane_g3_cp3

0x9200,	// (0x0001299a) bg_active_tab_pane_g1_cp4

0x91ca,	// (0x00012964) bg_active_tab_pane_g2_cp4

0x920b,	// (0x000129a5) bg_active_tab_pane_g3_cp4

0x9200,	// (0x0001299a) bg_passive_tab_pane_g1_cp4

0x91ca,	// (0x00012964) bg_passive_tab_pane_g2_cp4

0x920b,	// (0x000129a5) bg_passive_tab_pane_g3_cp4

0x9254,	// (0x000129ee) bg_active_tab_pane_g1_cp5

0x91ca,	// (0x00012964) bg_active_tab_pane_g2_cp5

0x925d,	// (0x000129f7) bg_active_tab_pane_g3_cp5

0x9254,	// (0x000129ee) bg_passive_tab_pane_g1_cp5

0x91ca,	// (0x00012964) bg_passive_tab_pane_g2_cp5

0x925d,	// (0x000129f7) bg_passive_tab_pane_g3_cp5

0x9266,	// (0x00012a00) list_set_graphic_pane_ParamLimits

0x9266,	// (0x00012a00) list_set_graphic_pane

0x7844,	// (0x00010fde) bg_set_opt_pane_cp4

0x9283,	// (0x00012a1d) list_set_graphic_pane_g1_ParamLimits

0x9283,	// (0x00012a1d) list_set_graphic_pane_g1

0x928f,	// (0x00012a29) list_set_graphic_pane_g2_ParamLimits

0x928f,	// (0x00012a29) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x00018f00) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x00018f00) list_set_graphic_pane_g

0x0009,

0xfad0,	// (0x0001926a) volume_small_pane_cp_g

0x92b3,	// (0x00012a4d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x92b3,	// (0x00012a4d) list_double2_large_graphic_pane_g1_cp2

0x92bf,	// (0x00012a59) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x92bf,	// (0x00012a59) list_double2_large_graphic_pane_g2_cp2

0x92d0,	// (0x00012a6a) list_double2_large_graphic_pane_g3_cp2

0x92d8,	// (0x00012a72) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x92d8,	// (0x00012a72) list_double2_large_graphic_pane_t1_cp2

0x92ee,	// (0x00012a88) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x92ee,	// (0x00012a88) list_double2_large_graphic_pane_t2_cp2

0xb575,	// (0x00014d0f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb575,	// (0x00014d0f) list_double_large_graphic_pane_g1_cp2

0xb586,	// (0x00014d20) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb586,	// (0x00014d20) list_double_large_graphic_pane_g2_cp2

0x945e,	// (0x00012bf8) list_double_large_graphic_pane_g3_cp2

0xb597,	// (0x00014d31) list_double_large_graphic_pane_g4_cp

0xb59f,	// (0x00014d39) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xb59f,	// (0x00014d39) list_double_large_graphic_pane_t1_cp2

0xb5b6,	// (0x00014d50) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xb5b6,	// (0x00014d50) list_double_large_graphic_pane_t2_cp2

0x9350,	// (0x00012aea) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9350,	// (0x00012aea) list_double2_graphic_pane_g1_cp2

0x935e,	// (0x00012af8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x935e,	// (0x00012af8) list_double2_graphic_pane_g2_cp2

0x936f,	// (0x00012b09) list_double2_graphic_pane_g3_cp2

0x9379,	// (0x00012b13) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9379,	// (0x00012b13) list_double2_graphic_pane_t1_cp2

0x938f,	// (0x00012b29) list_double2_graphic_pane_t2_cp2_ParamLimits

0x938f,	// (0x00012b29) list_double2_graphic_pane_t2_cp2

0x93a1,	// (0x00012b3b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x93a1,	// (0x00012b3b) list_single_number_heading_pane_g1_cp2

0x93ad,	// (0x00012b47) list_single_number_heading_pane_g2_cp2

0x93b5,	// (0x00012b4f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x93b5,	// (0x00012b4f) list_single_number_heading_pane_t1_cp2

0x93cb,	// (0x00012b65) list_single_number_heading_pane_t2_cp2_ParamLimits

0x93cb,	// (0x00012b65) list_single_number_heading_pane_t2_cp2

0x93dd,	// (0x00012b77) list_single_number_heading_pane_t3_cp2_ParamLimits

0x93dd,	// (0x00012b77) list_single_number_heading_pane_t3_cp2

0x93a1,	// (0x00012b3b) list_single_heading_pane_g1_cp2_ParamLimits

0x93a1,	// (0x00012b3b) list_single_heading_pane_g1_cp2

0x93ad,	// (0x00012b47) list_single_heading_pane_g2_cp2

0x93b5,	// (0x00012b4f) list_single_heading_pane_t1_cp2_ParamLimits

0x93b5,	// (0x00012b4f) list_single_heading_pane_t1_cp2

0xb37d,	// (0x00014b17) list_single_heading_pane_t2_cp2_ParamLimits

0xb37d,	// (0x00014b17) list_single_heading_pane_t2_cp2

0xb2c5,	// (0x00014a5f) list_double_graphic_pane_g1_cp2_ParamLimits

0xb2c5,	// (0x00014a5f) list_double_graphic_pane_g1_cp2

0xb2d1,	// (0x00014a6b) list_double_graphic_pane_g2_cp2_ParamLimits

0xb2d1,	// (0x00014a6b) list_double_graphic_pane_g2_cp2

0xb2e0,	// (0x00014a7a) list_double_graphic_pane_g3_cp2

0xb2e8,	// (0x00014a82) list_double_graphic_pane_t1_cp2_ParamLimits

0xb2e8,	// (0x00014a82) list_double_graphic_pane_t1_cp2

0xb2fe,	// (0x00014a98) list_double_graphic_pane_t2_cp2_ParamLimits

0xb2fe,	// (0x00014a98) list_double_graphic_pane_t2_cp2

0x9452,	// (0x00012bec) list_double_number_pane_g1_cp2_ParamLimits

0x9452,	// (0x00012bec) list_double_number_pane_g1_cp2

0x945e,	// (0x00012bf8) list_double_number_pane_g2_cp2

0xb289,	// (0x00014a23) list_double_number_pane_t1_cp2_ParamLimits

0xb289,	// (0x00014a23) list_double_number_pane_t1_cp2

0xb29d,	// (0x00014a37) list_double_number_pane_t2_cp2_ParamLimits

0xb29d,	// (0x00014a37) list_double_number_pane_t2_cp2

0xb2b3,	// (0x00014a4d) list_double_number_pane_t3_cp2_ParamLimits

0xb2b3,	// (0x00014a4d) list_double_number_pane_t3_cp2

0xb172,	// (0x0001490c) list_single_graphic_pane_g1_cp2_ParamLimits

0xb172,	// (0x0001490c) list_single_graphic_pane_g1_cp2

0x94b6,	// (0x00012c50) list_single_graphic_pane_g2_cp2_ParamLimits

0x94b6,	// (0x00012c50) list_single_graphic_pane_g2_cp2

0x94c2,	// (0x00012c5c) list_single_graphic_pane_g3_cp2

0xb148,	// (0x000148e2) list_single_graphic_pane_t1_cp2_ParamLimits

0xb148,	// (0x000148e2) list_single_graphic_pane_t1_cp2

0x94b6,	// (0x00012c50) list_single_number_pane_g1_cp2_ParamLimits

0x94b6,	// (0x00012c50) list_single_number_pane_g1_cp2

0x94c2,	// (0x00012c5c) list_single_number_pane_g2_cp2

0xb148,	// (0x000148e2) list_single_number_pane_t1_cp2_ParamLimits

0xb148,	// (0x000148e2) list_single_number_pane_t1_cp2

0xb15e,	// (0x000148f8) list_single_number_pane_t2_cp2_ParamLimits

0xb15e,	// (0x000148f8) list_single_number_pane_t2_cp2

0x92bf,	// (0x00012a59) list_double2_pane_g1_cp2_ParamLimits

0x92bf,	// (0x00012a59) list_double2_pane_g1_cp2

0x92d0,	// (0x00012a6a) list_double2_pane_g2_cp2

0x942a,	// (0x00012bc4) list_double2_pane_t1_cp2_ParamLimits

0x942a,	// (0x00012bc4) list_double2_pane_t1_cp2

0x9440,	// (0x00012bda) list_double2_pane_t2_cp2_ParamLimits

0x9440,	// (0x00012bda) list_double2_pane_t2_cp2

0x9452,	// (0x00012bec) list_double_pane_g1_cp2_ParamLimits

0x9452,	// (0x00012bec) list_double_pane_g1_cp2

0x945e,	// (0x00012bf8) list_double_pane_g2_cp2

0x9466,	// (0x00012c00) list_double_pane_t1_cp2_ParamLimits

0x9466,	// (0x00012c00) list_double_pane_t1_cp2

0x947c,	// (0x00012c16) list_double_pane_t2_cp2_ParamLimits

0x947c,	// (0x00012c16) list_double_pane_t2_cp2

0x94a6,	// (0x00012c40) list_single_pane_cp2_g3

0x94b6,	// (0x00012c50) list_single_pane_g1_cp2_ParamLimits

0x94b6,	// (0x00012c50) list_single_pane_g1_cp2

0x94c2,	// (0x00012c5c) list_single_pane_g2_cp2

0x94ca,	// (0x00012c64) list_single_pane_t1_cp2_ParamLimits

0x94ca,	// (0x00012c64) list_single_pane_t1_cp2

0x94e2,	// (0x00012c7c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x94e2,	// (0x00012c7c) list_single_large_graphic_pane_g1_cp2

0x94ee,	// (0x00012c88) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x94ee,	// (0x00012c88) list_single_large_graphic_pane_g2_cp2

0x94fa,	// (0x00012c94) list_single_large_graphic_pane_g3_cp2

0x9502,	// (0x00012c9c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9502,	// (0x00012c9c) list_single_large_graphic_pane_g4_cp1

0x951c,	// (0x00012cb6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x951c,	// (0x00012cb6) list_single_large_graphic_pane_t1_cp2

0xb114,	// (0x000148ae) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb114,	// (0x000148ae) list_single_graphic_heading_pane_g1_cp2

0xb0e1,	// (0x0001487b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb0e1,	// (0x0001487b) list_single_graphic_heading_pane_g4_cp2

0x94c2,	// (0x00012c5c) list_single_graphic_heading_pane_g5_cp2

0xb120,	// (0x000148ba) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xb120,	// (0x000148ba) list_single_graphic_heading_pane_t1_cp2

0xb136,	// (0x000148d0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb136,	// (0x000148d0) list_single_graphic_heading_pane_t2_cp2

0xb0d5,	// (0x0001486f) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb0d5,	// (0x0001486f) list_single_2graphic_pane_g1_cp2

0xb0e1,	// (0x0001487b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb0e1,	// (0x0001487b) list_single_2graphic_pane_g2_cp2

0x94c2,	// (0x00012c5c) list_single_2graphic_pane_g3_cp2

0xb0f2,	// (0x0001488c) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb0f2,	// (0x0001488c) list_single_2graphic_pane_g4_cp2

0xb0fe,	// (0x00014898) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb0fe,	// (0x00014898) list_single_2graphic_pane_t1_cp2

0x783a,	// (0x00010fd4) list_highlight_pane_g10_cp1

0xacad,	// (0x00014447) list_highlight_pane_g1_cp1

0xacb5,	// (0x0001444f) list_highlight_pane_g2_cp1

0xacbd,	// (0x00014457) list_highlight_pane_g3_cp1

0xacc5,	// (0x0001445f) list_highlight_pane_g4_cp1

0xaccd,	// (0x00014467) list_highlight_pane_g5_cp1

0xacd5,	// (0x0001446f) list_highlight_pane_g6_cp1

0xacdd,	// (0x00014477) list_highlight_pane_g7_cp1

0xace5,	// (0x0001447f) list_highlight_pane_g8_cp1

0xaced,	// (0x00014487) list_highlight_pane_g9_cp1

0xabcd,	// (0x00014367) form_field_slider_pane_t3

0xabdb,	// (0x00014375) form_field_slider_pane_t4

0xabe9,	// (0x00014383) slider_form_pane_ParamLimits

0xabe9,	// (0x00014383) slider_form_pane

0x7844,	// (0x00010fde) control_abbreviations

0x7844,	// (0x00010fde) control_conventions

0x7844,	// (0x00010fde) control_definitions

0x7844,	// (0x00010fde) format_table_attribute

0xb3c7,	// (0x00014b61) bg_popup_preview_window_pane_g9

0x7844,	// (0x00010fde) format_table_data2

0x7844,	// (0x00010fde) format_table_data3

0x7844,	// (0x00010fde) format_table_data_example

0x0008,

0x7844,	// (0x00010fde) intro_purpose

0xf8fb,	// (0x00019095) bg_popup_preview_window_pane_g

0x7844,	// (0x00010fde) texts_category

0x7844,	// (0x00010fde) texts_graphics

0x9532,	// (0x00012ccc) text_digital

0x9541,	// (0x00012cdb) text_primary

0x9550,	// (0x00012cea) text_primary_small

0x955f,	// (0x00012cf9) text_secondary

0x956e,	// (0x00012d08) text_title

0xbbf8,	// (0x00015392) bg_passive_tab_pane_g1_cp3_srt

0x91ca,	// (0x00012964) bg_passive_tab_pane_g2_cp3_srt

0xbc01,	// (0x0001539b) bg_passive_tab_pane_g3_cp3_srt

0x7924,	// (0x000110be) bg_active_tab_pane_cp3_srt_ParamLimits

0x7924,	// (0x000110be) bg_active_tab_pane_cp3_srt

0xbc0a,	// (0x000153a4) tabs_4_active_pane_srt_g1

0xbc12,	// (0x000153ac) tabs_4_active_pane_srt_t1_ParamLimits

0xbc12,	// (0x000153ac) tabs_4_active_pane_srt_t1

0xbbf8,	// (0x00015392) bg_active_tab_pane_g1_cp3_copy1

0x91ca,	// (0x00012964) bg_active_tab_pane_g2_cp3_copy1

0xbc01,	// (0x0001539b) bg_active_tab_pane_g3_cp3_copy1

0x7924,	// (0x000110be) tabs_2_long_active_pane_srt_ParamLimits

0x7924,	// (0x000110be) tabs_2_long_active_pane_srt

0x7924,	// (0x000110be) tabs_2_long_passive_pane_srt_ParamLimits

0x7924,	// (0x000110be) tabs_2_long_passive_pane_srt

0x8a78,	// (0x00012212) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a78,	// (0x00012212) bg_passive_tab_pane_cp4_srt

0xb833,	// (0x00014fcd) bg_passive_tab_pane_g1_cp4_srt

0x91ca,	// (0x00012964) bg_passive_tab_pane_g2_cp4_srt

0xb83c,	// (0x00014fd6) bg_passive_tab_pane_g3_cp4_srt

0x8a57,	// (0x000121f1) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a57,	// (0x000121f1) bg_active_tab_pane_cp4_srt

0xb845,	// (0x00014fdf) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb845,	// (0x00014fdf) tabs_2_long_active_pane_srt_t1

0xb833,	// (0x00014fcd) bg_active_tab_pane_g1_cp4_srt

0x91ca,	// (0x00012964) bg_active_tab_pane_g2_cp4_srt

0xb83c,	// (0x00014fd6) bg_active_tab_pane_g3_cp4_srt

0x7bb9,	// (0x00011353) tabs_3_long_active_pane_srt_ParamLimits

0x7bb9,	// (0x00011353) tabs_3_long_active_pane_srt

0x7bb9,	// (0x00011353) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7bb9,	// (0x00011353) tabs_3_long_passive_pane_cp_srt

0x7bb9,	// (0x00011353) tabs_3_long_passive_pane_srt_ParamLimits

0x7bb9,	// (0x00011353) tabs_3_long_passive_pane_srt

0x8a78,	// (0x00012212) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a78,	// (0x00012212) bg_passive_tab_pane_cp5_srt

0x9254,	// (0x000129ee) bg_passive_tab_pane_g1_cp5_srt

0x91ca,	// (0x00012964) bg_passive_tab_pane_g2_cp5_srt

0x925d,	// (0x000129f7) bg_passive_tab_pane_g3_cp5_srt

0x8a57,	// (0x000121f1) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a57,	// (0x000121f1) bg_active_tab_pane_cp5_srt

0xb821,	// (0x00014fbb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb821,	// (0x00014fbb) tabs_3_long_active_pane_srt_t1

0x9254,	// (0x000129ee) bg_active_tab_pane_g1_cp5_srt

0x91ca,	// (0x00012964) bg_active_tab_pane_g2_cp5_srt

0x925d,	// (0x000129f7) bg_active_tab_pane_g3_cp5_srt

0xb813,	// (0x00014fad) navi_text_pane_srt_t1

0xb80b,	// (0x00014fa5) navi_icon_pane_srt_g1

0x9735,	// (0x00012ecf) midp_editing_number_pane_srt

0x957d,	// (0x00012d17) midp_ticker_pane_srt

0x973d,	// (0x00012ed7) midp_ticker_pane_srt_g1

0x9745,	// (0x00012edf) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x00018f1f) midp_ticker_pane_srt_g

0x974d,	// (0x00012ee7) midp_ticker_pane_srt_t1

0xb7fc,	// (0x00014f96) midp_editing_number_pane_t1_copy1

0x8a78,	// (0x00012212) listscroll_midp_pane

0x8a78,	// (0x00012212) midp_form_pane

0x95e7,	// (0x00012d81) midp_info_popup_window_ParamLimits

0x95e7,	// (0x00012d81) midp_info_popup_window

0x8940,	// (0x000120da) bg_popup_sub_pane_cp50_ParamLimits

0x8940,	// (0x000120da) bg_popup_sub_pane_cp50

0xa8e5,	// (0x0001407f) listscroll_midp_info_pane_ParamLimits

0xa8e5,	// (0x0001407f) listscroll_midp_info_pane

0xa8cd,	// (0x00014067) listscroll_form_midp_pane_ParamLimits

0xa8cd,	// (0x00014067) listscroll_form_midp_pane

0xa8d9,	// (0x00014073) scroll_bar_cp050

0xa8ad,	// (0x00014047) list_midp_pane

0xc82b,	// (0x00015fc5) signal_pane_g2_cp

0xa7e7,	// (0x00013f81) listscroll_midp_info_pane_t1_ParamLimits

0xa7e7,	// (0x00013f81) listscroll_midp_info_pane_t1

0xa7ff,	// (0x00013f99) listscroll_midp_info_pane_t2_ParamLimits

0xa7ff,	// (0x00013f99) listscroll_midp_info_pane_t2

0xa83d,	// (0x00013fd7) listscroll_midp_info_pane_t3_ParamLimits

0xa83d,	// (0x00013fd7) listscroll_midp_info_pane_t3

0xa877,	// (0x00014011) listscroll_midp_info_pane_t4_ParamLimits

0xa877,	// (0x00014011) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x00018fd0) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x00018fd0) listscroll_midp_info_pane_t

0x8a04,	// (0x0001219e) scroll_pane_cp21

0xa785,	// (0x00013f1f) form_midp_field_choice_group_pane

0xa78e,	// (0x00013f28) form_midp_field_text_pane

0xa7cd,	// (0x00013f67) form_midp_field_time_pane

0xa7d5,	// (0x00013f6f) form_midp_gauge_slider_pane

0xa7de,	// (0x00013f78) form_midp_gauge_wait_pane

0x7844,	// (0x00010fde) form_midp_image_pane

0xa756,	// (0x00013ef0) list_single_midp_pane_ParamLimits

0xa756,	// (0x00013ef0) list_single_midp_pane

0xa70e,	// (0x00013ea8) form_midp_field_text_pane_t1

0xa4f1,	// (0x00013c8b) input_focus_pane_cp050

0xa745,	// (0x00013edf) list_midp_form_text_pane

0xa6dd,	// (0x00013e77) form_midp_field_choice_group_pane_t1

0xa6eb,	// (0x00013e85) input_focus_pane_cp051

0xa6ff,	// (0x00013e99) list_midp_choice_pane

0x7844,	// (0x00010fde) status_idle_pane

0xa6c1,	// (0x00013e5b) form_midp_field_time_pane_t1

0x783a,	// (0x00010fd4) wait_anim_pane_g2_copy1

0xa6cf,	// (0x00013e69) form_midp_field_time_pane_t2

0x0001,

0x9695,	// (0x00012e2f) aid_navinavi_width_2_pane

0xf831,	// (0x00018fcb) form_midp_field_time_pane_t

0x7844,	// (0x00010fde) input_focus_pane_cp052

0x7844,	// (0x00010fde) bg_input_focus_pane_cp040

0xa681,	// (0x00013e1b) form_midp_gauge_slider_pane_t1

0xa68f,	// (0x00013e29) form_midp_gauge_slider_pane_t2

0xa69d,	// (0x00013e37) form_midp_gauge_slider_pane_t3

0xa6ab,	// (0x00013e45) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x00018fc2) form_midp_gauge_slider_pane_t

0xa6b9,	// (0x00013e53) form_midp_slider_pane

0x7924,	// (0x000110be) bg_input_focus_pane_cp041_ParamLimits

0x7924,	// (0x000110be) bg_input_focus_pane_cp041

0xa64e,	// (0x00013de8) form_midp_gauge_wait_pane_t1_ParamLimits

0xa64e,	// (0x00013de8) form_midp_gauge_wait_pane_t1

0xa660,	// (0x00013dfa) form_midp_gauge_wait_pane_t2_ParamLimits

0xa660,	// (0x00013dfa) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x00018fbd) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x00018fbd) form_midp_gauge_wait_pane_t

0xa672,	// (0x00013e0c) form_midp_wait_pane_ParamLimits

0xa672,	// (0x00013e0c) form_midp_wait_pane

0xa618,	// (0x00013db2) form_midp_image_pane_g1

0xa621,	// (0x00013dbb) form_midp_image_pane_t1

0xa630,	// (0x00013dca) form_midp_image_pane_t2

0xa63f,	// (0x00013dd9) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x00018fb6) form_midp_image_pane_t

0xa600,	// (0x00013d9a) list_single_midp_pane_g1

0xa609,	// (0x00013da3) list_single_midp_pane_t1

0xa5d8,	// (0x00013d72) list_midp_form_item_pane_ParamLimits

0xa5d8,	// (0x00013d72) list_midp_form_item_pane

0x963d,	// (0x00012dd7) list_midp_form_item_pane_t1

0x964c,	// (0x00012de6) midp_ticker_pane_g1

0x9658,	// (0x00012df2) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x00018f05) midp_ticker_pane_g

0x9664,	// (0x00012dfe) midp_ticker_pane_t1

0xba80,	// (0x0001521a) midp_editing_number_pane_t1

0xba5e,	// (0x000151f8) midp_editing_number_pane

0xba6d,	// (0x00015207) midp_ticker_pane

0xb7c4,	// (0x00014f5e) ai_message_heading_pane

0x7844,	// (0x00010fde) bg_popup_window_pane_cp14

0xb7cc,	// (0x00014f66) listscroll_ai_message_pane

0xb74e,	// (0x00014ee8) ai_message_heading_pane_g1_ParamLimits

0xb74e,	// (0x00014ee8) ai_message_heading_pane_g1

0xb75a,	// (0x00014ef4) ai_message_heading_pane_g2_ParamLimits

0xb75a,	// (0x00014ef4) ai_message_heading_pane_g2

0xb766,	// (0x00014f00) ai_message_heading_pane_g3_ParamLimits

0xb766,	// (0x00014f00) ai_message_heading_pane_g3

0xb772,	// (0x00014f0c) ai_message_heading_pane_g4_ParamLimits

0xb772,	// (0x00014f0c) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x000190f7) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x000190f7) ai_message_heading_pane_g

0xb77e,	// (0x00014f18) ai_message_heading_pane_t1_ParamLimits

0xb77e,	// (0x00014f18) ai_message_heading_pane_t1

0xb798,	// (0x00014f32) ai_message_heading_pane_t2_ParamLimits

0xb798,	// (0x00014f32) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x00019100) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x00019100) ai_message_heading_pane_t

0xb7aa,	// (0x00014f44) bg_popup_heading_pane_cp1_ParamLimits

0xb7aa,	// (0x00014f44) bg_popup_heading_pane_cp1

0xb73c,	// (0x00014ed6) list_ai_message_pane_ParamLimits

0xb73c,	// (0x00014ed6) list_ai_message_pane

0x8a04,	// (0x0001219e) scroll_pane_cp10

0xb6d8,	// (0x00014e72) list_ai_message_pane_g1

0xb6e0,	// (0x00014e7a) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x000190d4) list_ai_message_pane_g

0xb6e8,	// (0x00014e82) list_ai_message_pane_t1_ParamLimits

0xb6e8,	// (0x00014e82) list_ai_message_pane_t1

0xb6fd,	// (0x00014e97) list_ai_message_pane_t2_ParamLimits

0xb6fd,	// (0x00014e97) list_ai_message_pane_t2

0xb712,	// (0x00014eac) list_ai_message_pane_t3_ParamLimits

0xb712,	// (0x00014eac) list_ai_message_pane_t3

0xb727,	// (0x00014ec1) list_ai_message_pane_t4_ParamLimits

0xb727,	// (0x00014ec1) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x000190d9) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x000190d9) list_ai_message_pane_t

0xb6c3,	// (0x00014e5d) cell_ai_soft_ind_pane_ParamLimits

0xb6c3,	// (0x00014e5d) cell_ai_soft_ind_pane

0x9676,	// (0x00012e10) cell_ai_soft_ind_pane_g1_ParamLimits

0x9676,	// (0x00012e10) cell_ai_soft_ind_pane_g1

0x7844,	// (0x00010fde) grid_highlight_cp1

0x9683,	// (0x00012e1d) text_secondary_cp56_ParamLimits

0x9683,	// (0x00012e1d) text_secondary_cp56

0xb698,	// (0x00014e32) example_general_pane_ParamLimits

0xb698,	// (0x00014e32) example_general_pane

0xb6a4,	// (0x00014e3e) example_parent_pane_g1_ParamLimits

0xb6a4,	// (0x00014e3e) example_parent_pane_g1

0xb6b0,	// (0x00014e4a) example_parent_pane_t1_ParamLimits

0xb6b0,	// (0x00014e4a) example_parent_pane_t1

0x9c90,	// (0x0001342a) popup_preview_text_window_ParamLimits

0x9c90,	// (0x0001342a) popup_preview_text_window

0x94ae,	// (0x00012c48) list_single_pane_cp2_g4

0x7c6f,	// (0x00011409) bg_popup_preview_window_pane_ParamLimits

0x7c6f,	// (0x00011409) bg_popup_preview_window_pane

0xb3cf,	// (0x00014b69) popup_preview_text_window_t1_ParamLimits

0xb3cf,	// (0x00014b69) popup_preview_text_window_t1

0xb3ed,	// (0x00014b87) popup_preview_text_window_t2_ParamLimits

0xb3ed,	// (0x00014b87) popup_preview_text_window_t2

0xb436,	// (0x00014bd0) popup_preview_text_window_t3_ParamLimits

0xb436,	// (0x00014bd0) popup_preview_text_window_t3

0xb47b,	// (0x00014c15) popup_preview_text_window_t4_ParamLimits

0xb47b,	// (0x00014c15) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x000190a8) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x000190a8) popup_preview_text_window_t

0xb4f9,	// (0x00014c93) scroll_pane_cp11

0xa3cd,	// (0x00013b67) bg_popup_preview_window_pane_g1

0xb38f,	// (0x00014b29) bg_popup_preview_window_pane_g2

0xb397,	// (0x00014b31) bg_popup_preview_window_pane_g3

0xb39f,	// (0x00014b39) bg_popup_preview_window_pane_g4

0xb3a7,	// (0x00014b41) bg_popup_preview_window_pane_g5

0xb3af,	// (0x00014b49) bg_popup_preview_window_pane_g6

0xb3b7,	// (0x00014b51) bg_popup_preview_window_pane_g7

0xb3bf,	// (0x00014b59) bg_popup_preview_window_pane_g8

0x5bf2,	// (0x0000f38c) aid_popup_width_pane

0x9c6e,	// (0x00013408) popup_midp_note_alarm_window_ParamLimits

0x9c6e,	// (0x00013408) popup_midp_note_alarm_window

0x86dd,	// (0x00011e77) data_form_pane_ParamLimits

0x86e9,	// (0x00011e83) form_field_data_pane_g1

0x86f3,	// (0x00011e8d) form_field_data_pane_t1_ParamLimits

0x870b,	// (0x00011ea5) input_focus_pane_ParamLimits

0x8719,	// (0x00011eb3) data_form_wide_pane_ParamLimits

0x8725,	// (0x00011ebf) form_field_data_wide_pane_g1

0x8751,	// (0x00011eeb) form_field_data_wide_pane_t1_ParamLimits

0x7f1b,	// (0x000116b5) input_focus_pane_cp6_ParamLimits

0x89b1,	// (0x0001214b) input_popup_find_pane_g1_ParamLimits

0x89b1,	// (0x0001214b) input_popup_find_pane_g1

0x6166,	// (0x0000f900) aid_navi_side_left_pane

0x617b,	// (0x0000f915) aid_navi_side_right_pane

0xada8,	// (0x00014542) bg_popup_window_pane_cp30_ParamLimits

0xada8,	// (0x00014542) bg_popup_window_pane_cp30

0xae22,	// (0x000145bc) popup_midp_note_alarm_window_g1_ParamLimits

0xae22,	// (0x000145bc) popup_midp_note_alarm_window_g1

0xae52,	// (0x000145ec) popup_midp_note_alarm_window_t1_ParamLimits

0xae52,	// (0x000145ec) popup_midp_note_alarm_window_t1

0xaef3,	// (0x0001468d) popup_midp_note_alarm_window_t2_ParamLimits

0xaef3,	// (0x0001468d) popup_midp_note_alarm_window_t2

0xafa1,	// (0x0001473b) popup_midp_note_alarm_window_t3_ParamLimits

0xafa1,	// (0x0001473b) popup_midp_note_alarm_window_t3

0xafd3,	// (0x0001476d) popup_midp_note_alarm_window_t4_ParamLimits

0xafd3,	// (0x0001476d) popup_midp_note_alarm_window_t4

0xaff9,	// (0x00014793) popup_midp_note_alarm_window_t5_ParamLimits

0xaff9,	// (0x00014793) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x00019045) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x00019045) popup_midp_note_alarm_window_t

0xb0a5,	// (0x0001483f) wait_bar_pane_cp1_ParamLimits

0xb0a5,	// (0x0001483f) wait_bar_pane_cp1

0x7844,	// (0x00010fde) wait_anim_pane_copy1

0x7844,	// (0x00010fde) wait_border_pane_copy1

0xaa8e,	// (0x00014228) wait_border_pane_g1_copy1

0x876b,	// (0x00011f05) form_field_popup_pane_g1

0x8773,	// (0x00011f0d) form_field_popup_pane_t1_ParamLimits

0x870b,	// (0x00011ea5) input_focus_pane_cp7_ParamLimits

0x878b,	// (0x00011f25) list_form_pane_ParamLimits

0x8797,	// (0x00011f31) form_field_popup_wide_pane_g1

0x879f,	// (0x00011f39) form_field_popup_wide_pane_t1_ParamLimits

0x870b,	// (0x00011ea5) input_focus_pane_cp8_ParamLimits

0x87b4,	// (0x00011f4e) list_form_wide_pane_ParamLimits

0xbc84,	// (0x0001541e) aid_size_cell_graphic_pane

0x888b,	// (0x00012025) data_form_pane_t1_ParamLimits

0xba2b,	// (0x000151c5) data_form_wide_pane_t1_ParamLimits

0x9f71,	// (0x0001370b) bg_status_flat_pane

0x7884,	// (0x0001101e) title_pane_t1_ParamLimits

0x78ec,	// (0x00011086) title_pane_t2_ParamLimits

0x7912,	// (0x000110ac) title_pane_t3_ParamLimits

0xf56f,	// (0x00018d09) title_pane_t_ParamLimits

0x8e81,	// (0x0001261b) level_1_signal_ParamLimits

0x8e8e,	// (0x00012628) level_2_signal_ParamLimits

0x8e9b,	// (0x00012635) level_3_signal_ParamLimits

0x8ea8,	// (0x00012642) level_4_signal_ParamLimits

0x8eb5,	// (0x0001264f) level_5_signal_ParamLimits

0x8ec2,	// (0x0001265c) level_6_signal_ParamLimits

0x8ecf,	// (0x00012669) level_7_signal_ParamLimits

0x8e81,	// (0x0001261b) level_1_battery_ParamLimits

0x8e8e,	// (0x00012628) level_2_battery_ParamLimits

0x8e9b,	// (0x00012635) level_3_battery_ParamLimits

0x8ea8,	// (0x00012642) level_4_battery_ParamLimits

0x8eb5,	// (0x0001264f) level_5_battery_ParamLimits

0x8ec2,	// (0x0001265c) level_6_battery_ParamLimits

0x8ecf,	// (0x00012669) level_7_battery_ParamLimits

0xacad,	// (0x00014447) bg_status_flat_pane_g1

0xacb5,	// (0x0001444f) bg_status_flat_pane_g2

0xacbd,	// (0x00014457) bg_status_flat_pane_g3

0xacc5,	// (0x0001445f) bg_status_flat_pane_g4

0xaccd,	// (0x00014467) bg_status_flat_pane_g5

0xacd5,	// (0x0001446f) bg_status_flat_pane_g6

0xacdd,	// (0x00014477) bg_status_flat_pane_g7

0x793a,	// (0x000110d4) tabs_3_active_pane_t1_ParamLimits

0x793a,	// (0x000110d4) tabs_3_passive_pane_t1_ParamLimits

0x7954,	// (0x000110ee) tabs_4_active_pane_t1_ParamLimits

0x7954,	// (0x000110ee) tabs_4_1_passive_pane_t1_ParamLimits

0x8a45,	// (0x000121df) tabs_2_active_pane_t1_ParamLimits

0x8a45,	// (0x000121df) tabs_2_passive_pane_t1_ParamLimits

0x8a57,	// (0x000121f1) bg_active_tab_pane_cp4_ParamLimits

0x8a65,	// (0x000121ff) tabs_2_long_active_pane_t1_ParamLimits

0x8a78,	// (0x00012212) bg_passive_tab_pane_cp4_ParamLimits

0x6732,	// (0x0000fecc) list_single_midp_graphic_pane_t1_ParamLimits

0x8a57,	// (0x000121f1) bg_active_tab_pane_cp5_ParamLimits

0x8a84,	// (0x0001221e) tabs_3_long_active_pane_t1_ParamLimits

0x8a78,	// (0x00012212) bg_passive_tab_pane_cp5_ParamLimits

0x6732,	// (0x0000fecc) list_single_midp_graphic_pane_t1

0x9f71,	// (0x0001370b) bg_status_flat_pane_ParamLimits

0xa034,	// (0x000137ce) indicator_pane_cp2_ParamLimits

0xa034,	// (0x000137ce) indicator_pane_cp2

0xa159,	// (0x000138f3) navi_pane_srt_ParamLimits

0xa159,	// (0x000138f3) navi_pane_srt

0xa17d,	// (0x00013917) popup_clock_digital_analogue_window_cp1

0x7a1b,	// (0x000111b5) indicator_pane_t1

0x957d,	// (0x00012d17) copy_highlight_pane

0x957d,	// (0x00012d17) cursor_graphics_pane

0x957d,	// (0x00012d17) graphic_within_text_pane

0x957d,	// (0x00012d17) link_highlight_pane

0xb4bc,	// (0x00014c56) popup_preview_text_window_t5_ParamLimits

0xb4bc,	// (0x00014c56) popup_preview_text_window_t5

0x969d,	// (0x00012e37) cursor_digital_pane

0x969d,	// (0x00012e37) cursor_primary_pane

0x96ae,	// (0x00012e48) cursor_primary_small_pane

0x96b6,	// (0x00012e50) cursor_secondary_pane

0x96be,	// (0x00012e58) cursor_title_pane

0x969d,	// (0x00012e37) link_highlight_digital_pane

0x96a5,	// (0x00012e3f) link_highlight_primary_pane

0x96ae,	// (0x00012e48) link_highlight_primary_small_pane

0x96b6,	// (0x00012e50) link_highlight_secondary_pane

0x96be,	// (0x00012e58) link_highlight_title_pane

0x969d,	// (0x00012e37) copy_highlight_digital_pane

0x969d,	// (0x00012e37) copy_highlight_primary_pane

0x96ae,	// (0x00012e48) copy_highlight_primary_small_pane

0x96b6,	// (0x00012e50) copy_highlight_secondary_pane

0x96be,	// (0x00012e58) copy_highlight_title_pane

0x96b6,	// (0x00012e50) graphic_text_digital_pane

0xad4b,	// (0x000144e5) graphic_text_primary_pane

0xad54,	// (0x000144ee) graphic_text_primary_small_pane

0x96ae,	// (0x00012e48) graphic_text_secondary_pane

0x969d,	// (0x00012e37) graphic_text_title_pane

0x96c6,	// (0x00012e60) cursor_primary_pane_g1

0xad3d,	// (0x000144d7) cursor_text_primary_t1

0xad25,	// (0x000144bf) cursor_primary_small_pane_g1

0xad2f,	// (0x000144c9) cursor_text_primary_small_t1

0xad0d,	// (0x000144a7) cursor_primary_small_pane_g1_copy1

0xad17,	// (0x000144b1) cursor_text_primary_small_t1_copy1

0xacf5,	// (0x0001448f) cursor_text_title_t1

0xad03,	// (0x0001449d) cursor_title_pane_g1

0x96c6,	// (0x00012e60) cursor_digital_pane_g1

0x96d0,	// (0x00012e6a) cursor_text_digital_t1

0x96f5,	// (0x00012e8f) link_highlight_primary_pane_g1

0xac9e,	// (0x00014438) link_highlight_primary_pane_t1

0x96de,	// (0x00012e78) link_highlight_primary_small_pane_g1

0x96e6,	// (0x00012e80) link_highlight_primary_small_pane_t1

0x96f5,	// (0x00012e8f) link_highlight_secondary_pane_g1

0x96fd,	// (0x00012e97) link_highlight_secondary_pane_t1

0xac12,	// (0x000143ac) link_highlight_title_pane_g1

0xac1a,	// (0x000143b4) link_highlight_title_pane_t1

0xabfb,	// (0x00014395) link_highlight_digital_pane_g1

0xac03,	// (0x0001439d) link_highlight_digital_pane_t1

0xaad3,	// (0x0001426d) copy_highlight_primary_pane_g1

0xaadb,	// (0x00014275) copy_highlight_primary_pane_t1

0xaaad,	// (0x00014247) copy_highlight_primary_small_pane_g1

0xaac4,	// (0x0001425e) copy_highlight_primary_small_pane_t1

0x970c,	// (0x00012ea6) copy_highlight_secondary_pane_g1

0x9714,	// (0x00012eae) copy_highlight_secondary_pane_t1

0xaaad,	// (0x00014247) copy_highlight_title_pane_g1

0xaab5,	// (0x0001424f) copy_highlight_title_pane_t1

0xaad3,	// (0x0001426d) copy_highlight_digital_pane_g1

0xbe4e,	// (0x000155e8) copy_highlight_digital_pane_t1

0xbda2,	// (0x0001553c) graphic_text_primary_pane_g1

0xbe32,	// (0x000155cc) graphic_text_primary_pane_t1

0xbe40,	// (0x000155da) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x00019174) graphic_text_primary_pane_t

0xbe0e,	// (0x000155a8) graphic_text_primary_small_pane_g1

0xbe16,	// (0x000155b0) graphic_text_primary_small_pane_t1

0xbe24,	// (0x000155be) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0001916f) graphic_text_primary_small_pane_t

0xbdea,	// (0x00015584) graphic_text_secondary_pane_g1

0xbdf2,	// (0x0001558c) graphic_text_secondary_pane_t1

0xbe00,	// (0x0001559a) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0001916a) graphic_text_secondary_pane_t

0xbdc6,	// (0x00015560) graphic_text_title_pane_g1

0xbdce,	// (0x00015568) graphic_text_title_pane_t1

0xbddc,	// (0x00015576) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x00019165) graphic_text_title_pane_t

0xbda2,	// (0x0001553c) graphic_text_digital_pane_g1

0xbdaa,	// (0x00015544) graphic_text_digital_pane_t1

0xbdb8,	// (0x00015552) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x00019160) graphic_text_digital_pane_t

0x7924,	// (0x000110be) navi_icon_pane_srt_ParamLimits

0x7924,	// (0x000110be) navi_icon_pane_srt

0x7844,	// (0x00010fde) navi_midp_pane_srt

0x7844,	// (0x00010fde) navi_navi_pane_srt

0x7924,	// (0x000110be) navi_text_pane_srt_ParamLimits

0x7924,	// (0x000110be) navi_text_pane_srt

0xbd6d,	// (0x00015507) navi_navi_icon_text_pane_srt

0xbd75,	// (0x0001550f) navi_navi_pane_srt_g1_ParamLimits

0xbd75,	// (0x0001550f) navi_navi_pane_srt_g1

0xbd87,	// (0x00015521) navi_navi_pane_srt_g2_ParamLimits

0xbd87,	// (0x00015521) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x0001915b) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x0001915b) navi_navi_pane_srt_g

0xbd99,	// (0x00015533) navi_navi_tabs_pane_srt

0xbd6d,	// (0x00015507) navi_navi_text_pane_srt

0xbd6d,	// (0x00015507) navi_navi_volume_pane_srt

0xbd5e,	// (0x000154f8) navi_navi_text_pane_srt_t1

0x6aac,	// (0x00010246) navi_navi_volume_pane_srt_g1

0x6ab4,	// (0x0001024e) volume_small_pane_srt_ParamLimits

0x6ab4,	// (0x0001024e) volume_small_pane_srt

0x6446,	// (0x0000fbe0) volume_small_pane_srt_g1_ParamLimits

0x6446,	// (0x0000fbe0) volume_small_pane_srt_g1

0x6456,	// (0x0000fbf0) volume_small_pane_srt_g2_ParamLimits

0x6456,	// (0x0000fbf0) volume_small_pane_srt_g2

0x6467,	// (0x0000fc01) volume_small_pane_srt_g3_ParamLimits

0x6467,	// (0x0000fc01) volume_small_pane_srt_g3

0x6478,	// (0x0000fc12) volume_small_pane_srt_g4_ParamLimits

0x6478,	// (0x0000fc12) volume_small_pane_srt_g4

0x6489,	// (0x0000fc23) volume_small_pane_srt_g5_ParamLimits

0x6489,	// (0x0000fc23) volume_small_pane_srt_g5

0x649a,	// (0x0000fc34) volume_small_pane_srt_g6_ParamLimits

0x649a,	// (0x0000fc34) volume_small_pane_srt_g6

0x64ab,	// (0x0000fc45) volume_small_pane_srt_g7_ParamLimits

0x64ab,	// (0x0000fc45) volume_small_pane_srt_g7

0x64bc,	// (0x0000fc56) volume_small_pane_srt_g8_ParamLimits

0x64bc,	// (0x0000fc56) volume_small_pane_srt_g8

0x64cd,	// (0x0000fc67) volume_small_pane_srt_g9_ParamLimits

0x64cd,	// (0x0000fc67) volume_small_pane_srt_g9

0x64de,	// (0x0000fc78) volume_small_pane_srt_g10_ParamLimits

0x64de,	// (0x0000fc78) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x00018f0a) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x00018f0a) volume_small_pane_srt_g

0x7d18,	// (0x000114b2) query_popup_data_pane_cp2

0xbd44,	// (0x000154de) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xbd44,	// (0x000154de) navi_navi_icon_text_pane_srt_t1

0xad4b,	// (0x000144e5) navi_tabs_2_long_pane_srt

0xad4b,	// (0x000144e5) navi_tabs_2_pane_srt

0xad4b,	// (0x000144e5) navi_tabs_3_long_pane_srt

0xad4b,	// (0x000144e5) navi_tabs_3_pane_srt

0xad4b,	// (0x000144e5) navi_tabs_4_pane_srt

0x6a8c,	// (0x00010226) tabs_2_active_pane_srt_ParamLimits

0x6a8c,	// (0x00010226) tabs_2_active_pane_srt

0x6a9c,	// (0x00010236) tabs_2_passive_pane_srt_ParamLimits

0x6a9c,	// (0x00010236) tabs_2_passive_pane_srt

0x98fb,	// (0x00013095) bg_passive_tab_pane_cp1_srt_ParamLimits

0x98fb,	// (0x00013095) bg_passive_tab_pane_cp1_srt

0xbd10,	// (0x000154aa) bg_passive_tab_pane_g1_cp1_srt

0x91ca,	// (0x00012964) bg_passive_tab_pane_g2_cp1_srt

0xbd19,	// (0x000154b3) bg_passive_tab_pane_g3_cp1_srt

0x7924,	// (0x000110be) bg_active_tab_pane_cp1_srt_ParamLimits

0x7924,	// (0x000110be) bg_active_tab_pane_cp1_srt

0xbd22,	// (0x000154bc) tabs_2_active_pane_srt_g1

0xbd2a,	// (0x000154c4) tabs_2_active_pane_srt_t1_ParamLimits

0xbd2a,	// (0x000154c4) tabs_2_active_pane_srt_t1

0xbd10,	// (0x000154aa) bg_active_tab_pane_g1_cp1_srt

0x91ca,	// (0x00012964) bg_active_tab_pane_g2_cp1_srt

0xbd19,	// (0x000154b3) bg_active_tab_pane_g3_cp1_srt

0x6a59,	// (0x000101f3) tabs_3_active_pane_srt_ParamLimits

0x6a59,	// (0x000101f3) tabs_3_active_pane_srt

0x6a6a,	// (0x00010204) tabs_3_passive_pane_cp_srt_ParamLimits

0x6a6a,	// (0x00010204) tabs_3_passive_pane_cp_srt

0x6a7b,	// (0x00010215) tabs_3_passive_pane_srt_ParamLimits

0x6a7b,	// (0x00010215) tabs_3_passive_pane_srt

0x98fb,	// (0x00013095) bg_passive_tab_pane_cp2_srt_ParamLimits

0x98fb,	// (0x00013095) bg_passive_tab_pane_cp2_srt

0x9723,	// (0x00012ebd) bg_passive_tab_pane_g1_cp2_srt

0x91ca,	// (0x00012964) bg_passive_tab_pane_g2_cp2_srt

0x972c,	// (0x00012ec6) bg_passive_tab_pane_g3_cp2_srt

0x7924,	// (0x000110be) bg_active_tab_pane_cp2_srt_ParamLimits

0x7924,	// (0x000110be) bg_active_tab_pane_cp2_srt

0xbcf6,	// (0x00015490) tabs_3_active_pane_srt_g1

0xbcfe,	// (0x00015498) tabs_3_active_pane_srt_t1_ParamLimits

0xbcfe,	// (0x00015498) tabs_3_active_pane_srt_t1

0x9723,	// (0x00012ebd) bg_active_tab_pane_g1_cp2_srt

0x91ca,	// (0x00012964) bg_active_tab_pane_g2_cp2_srt

0x972c,	// (0x00012ec6) bg_active_tab_pane_g3_cp2_srt

0x6a11,	// (0x000101ab) tabs_4_active_pane_srt_ParamLimits

0x6a11,	// (0x000101ab) tabs_4_active_pane_srt

0x6a23,	// (0x000101bd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6a23,	// (0x000101bd) tabs_4_passive_pane_cp2_srt

0x9881,	// (0x0001301b) aid_size_cell_toolbar

0x8a78,	// (0x00012212) main_idle_act_pane_ParamLimits

0x9aa4,	// (0x0001323e) popup_large_graphic_colour_window_ParamLimits

0x9e0b,	// (0x000135a5) popup_toolbar_window_ParamLimits

0x9e0b,	// (0x000135a5) popup_toolbar_window

0xbaaa,	// (0x00015244) list_single_graphic_2heading_pane_ParamLimits

0xbaaa,	// (0x00015244) list_single_graphic_2heading_pane

0x8c34,	// (0x000123ce) aid_size_cell_apps_grid_lsc_pane

0x8c46,	// (0x000123e0) aid_size_cell_apps_grid_prt_pane

0x98fb,	// (0x00013095) bg_wml_button_pane_cp1_ParamLimits

0x98fb,	// (0x00013095) bg_wml_button_pane_cp1

0xa70e,	// (0x00013ea8) form_midp_field_text_pane_t1_ParamLimits

0xa4f1,	// (0x00013c8b) input_focus_pane_cp050_ParamLimits

0xa745,	// (0x00013edf) list_midp_form_text_pane_ParamLimits

0xa6eb,	// (0x00013e85) input_focus_pane_cp051_ParamLimits

0xa6ff,	// (0x00013e99) list_midp_choice_pane_ParamLimits

0xa582,	// (0x00013d1c) list_single_2graphic_pane_cp3_ParamLimits

0xa582,	// (0x00013d1c) list_single_2graphic_pane_cp3

0xa5a6,	// (0x00013d40) list_single_midp_graphic_pane_ParamLimits

0xa5a6,	// (0x00013d40) list_single_midp_graphic_pane

0x6635,	// (0x0000fdcf) list_single_graphic_2heading_pane_g1_ParamLimits

0x6635,	// (0x0000fdcf) list_single_graphic_2heading_pane_g1

0x6641,	// (0x0000fddb) list_single_graphic_2heading_pane_g4_ParamLimits

0x6641,	// (0x0000fddb) list_single_graphic_2heading_pane_g4

0x664d,	// (0x0000fde7) list_single_graphic_2heading_pane_g5_ParamLimits

0x664d,	// (0x0000fde7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x00018f5d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x00018f5d) list_single_graphic_2heading_pane_g

0x6659,	// (0x0000fdf3) list_single_graphic_2heading_pane_t1_ParamLimits

0x6659,	// (0x0000fdf3) list_single_graphic_2heading_pane_t1

0x666d,	// (0x0000fe07) list_single_graphic_2heading_pane_t2_ParamLimits

0x666d,	// (0x0000fe07) list_single_graphic_2heading_pane_t2

0x6689,	// (0x0000fe23) list_single_graphic_2heading_pane_t3_ParamLimits

0x6689,	// (0x0000fe23) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x00018f64) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x00018f64) list_single_graphic_2heading_pane_t

0xa2d1,	// (0x00013a6b) bg_popup_sub_pane_cp2

0xa2fb,	// (0x00013a95) grid_toobar_pane

0x66a1,	// (0x0000fe3b) cell_toolbar_pane_ParamLimits

0x66a1,	// (0x0000fe3b) cell_toolbar_pane

0xa371,	// (0x00013b0b) cell_toolbar_pane_g1_ParamLimits

0xa371,	// (0x00013b0b) cell_toolbar_pane_g1

0xa385,	// (0x00013b1f) cell_toolbar_pane_g2_ParamLimits

0xa385,	// (0x00013b1f) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x00018f72) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x00018f72) cell_toolbar_pane_g

0xa3a7,	// (0x00013b41) grid_highlight_pane_cp2_ParamLimits

0xa3a7,	// (0x00013b41) grid_highlight_pane_cp2

0xa3c1,	// (0x00013b5b) toolbar_button_pane

0xa3cd,	// (0x00013b67) toolbar_button_pane_g1

0xa3d5,	// (0x00013b6f) toolbar_button_pane_g2

0xa3dd,	// (0x00013b77) toolbar_button_pane_g3

0xa3e5,	// (0x00013b7f) toolbar_button_pane_g4

0xa3ed,	// (0x00013b87) toolbar_button_pane_g5

0xa3f5,	// (0x00013b8f) toolbar_button_pane_g6

0xa3fd,	// (0x00013b97) toolbar_button_pane_g7

0xa405,	// (0x00013b9f) toolbar_button_pane_g8

0xa40d,	// (0x00013ba7) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x00018f77) toolbar_button_pane_g

0x66d9,	// (0x0000fe73) list_single_2graphic_pane_g1_cp3_ParamLimits

0x66d9,	// (0x0000fe73) list_single_2graphic_pane_g1_cp3

0x66e5,	// (0x0000fe7f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x66e5,	// (0x0000fe7f) list_single_2graphic_pane_g2_cp3

0x66f6,	// (0x0000fe90) list_single_2graphic_pane_g3_cp3

0x66fe,	// (0x0000fe98) list_single_2graphic_pane_g4_cp3_ParamLimits

0x66fe,	// (0x0000fe98) list_single_2graphic_pane_g4_cp3

0x670a,	// (0x0000fea4) list_single_2graphic_pane_t1_cp3_ParamLimits

0x670a,	// (0x0000fea4) list_single_2graphic_pane_t1_cp3

0x6726,	// (0x0000fec0) list_single_midp_graphic_pane_g2_ParamLimits

0x6726,	// (0x0000fec0) list_single_midp_graphic_pane_g2

0x9889,	// (0x00013023) aid_zoom_text_primary

0x9891,	// (0x0001302b) aid_zoom_text_secondary

0x97e0,	// (0x00012f7a) status_small_pane_g7_ParamLimits

0x97e0,	// (0x00012f7a) status_small_pane_g7

0x9803,	// (0x00012f9d) status_small_pane_t1_ParamLimits

0x785b,	// (0x00010ff5) title_pane_g2

0x0003,

0xf566,	// (0x00018d00) title_pane_g

0x7db9,	// (0x00011553) aid_size_cell_colour_1_pane_ParamLimits

0x7db9,	// (0x00011553) aid_size_cell_colour_1_pane

0x7dcd,	// (0x00011567) aid_size_cell_colour_2_pane_ParamLimits

0x7dcd,	// (0x00011567) aid_size_cell_colour_2_pane

0x7de1,	// (0x0001157b) aid_size_cell_colour_3_pane_ParamLimits

0x7de1,	// (0x0001157b) aid_size_cell_colour_3_pane

0x7df5,	// (0x0001158f) aid_size_cell_colour_4_pane_ParamLimits

0x7df5,	// (0x0001158f) aid_size_cell_colour_4_pane

0x60a2,	// (0x0000f83c) title_pane_stacon_g1_ParamLimits

0x60a2,	// (0x0000f83c) title_pane_stacon_g1

0xab32,	// (0x000142cc) popup_note_wait_window_g3_ParamLimits

0xab32,	// (0x000142cc) popup_note_wait_window_g3

0xaba8,	// (0x00014342) popup_note_wait_window_t5_ParamLimits

0xaba8,	// (0x00014342) popup_note_wait_window_t5

0x7844,	// (0x00010fde) main_feb_china_hwr_fs_writing_pane

0x9989,	// (0x00013123) popup_feb_china_hwr_fs_window_ParamLimits

0x9989,	// (0x00013123) popup_feb_china_hwr_fs_window

0x6748,	// (0x0000fee2) aid_size_cell_hwr_fs_ParamLimits

0x6748,	// (0x0000fee2) aid_size_cell_hwr_fs

0xa4f1,	// (0x00013c8b) bg_popup_sub_pane_cp3_ParamLimits

0xa4f1,	// (0x00013c8b) bg_popup_sub_pane_cp3

0x675d,	// (0x0000fef7) grid_hwr_fs_pane_ParamLimits

0x675d,	// (0x0000fef7) grid_hwr_fs_pane

0x6775,	// (0x0000ff0f) linegrid_hwr_fs_pane_ParamLimits

0x6775,	// (0x0000ff0f) linegrid_hwr_fs_pane

0x6785,	// (0x0000ff1f) cell_hwr_fs_pane_ParamLimits

0x6785,	// (0x0000ff1f) cell_hwr_fs_pane

0xa4fd,	// (0x00013c97) linegrid_hwr_fs_pane_g1_ParamLimits

0xa4fd,	// (0x00013c97) linegrid_hwr_fs_pane_g1

0xa509,	// (0x00013ca3) linegrid_hwr_fs_pane_g2_ParamLimits

0xa509,	// (0x00013ca3) linegrid_hwr_fs_pane_g2

0xa51b,	// (0x00013cb5) linegrid_hwr_fs_pane_g3_ParamLimits

0xa51b,	// (0x00013cb5) linegrid_hwr_fs_pane_g3

0x67a7,	// (0x0000ff41) linegrid_hwr_fs_pane_g4_ParamLimits

0x67a7,	// (0x0000ff41) linegrid_hwr_fs_pane_g4

0x67c1,	// (0x0000ff5b) linegrid_hwr_fs_pane_g5_ParamLimits

0x67c1,	// (0x0000ff5b) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x00018fa2) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x00018fa2) linegrid_hwr_fs_pane_g

0xa527,	// (0x00013cc1) cell_hwr_fs_pane_g1_ParamLimits

0xa527,	// (0x00013cc1) cell_hwr_fs_pane_g1

0xa20b,	// (0x000139a5) cell_hwr_fs_pane_g2_ParamLimits

0xa20b,	// (0x000139a5) cell_hwr_fs_pane_g2

0xa53d,	// (0x00013cd7) cell_hwr_fs_pane_g3_ParamLimits

0xa53d,	// (0x00013cd7) cell_hwr_fs_pane_g3

0xa54a,	// (0x00013ce4) cell_hwr_fs_pane_g4_ParamLimits

0xa54a,	// (0x00013ce4) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x00018fad) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x00018fad) cell_hwr_fs_pane_g

0x67d7,	// (0x0000ff71) cell_hwr_fs_pane_t1

0x7844,	// (0x00010fde) grid_highlight_pane_cp6

0x7844,	// (0x00010fde) main_idle_act2_pane

0x89eb,	// (0x00012185) aid_inside_area_popup_secondary

0xb1df,	// (0x00014979) aid_inside_area_window_primary_ParamLimits

0xb1df,	// (0x00014979) aid_inside_area_window_primary

0xbe5d,	// (0x000155f7) ai2_news_ticker_pane

0xbe65,	// (0x000155ff) aid_size_cell_ai1_link_ParamLimits

0xbe65,	// (0x000155ff) aid_size_cell_ai1_link

0xbe7f,	// (0x00015619) popup_ai2_data_window_ParamLimits

0xbe7f,	// (0x00015619) popup_ai2_data_window

0xbe95,	// (0x0001562f) popup_ai2_link_window_ParamLimits

0xbe95,	// (0x0001562f) popup_ai2_link_window

0xa4f1,	// (0x00013c8b) bg_popup_sub_pane_cp4_ParamLimits

0xa4f1,	// (0x00013c8b) bg_popup_sub_pane_cp4

0xbea9,	// (0x00015643) grid_ai2_link_pane_ParamLimits

0xbea9,	// (0x00015643) grid_ai2_link_pane

0xbec0,	// (0x0001565a) popup_ai2_link_window_g1_ParamLimits

0xbec0,	// (0x0001565a) popup_ai2_link_window_g1

0xbecc,	// (0x00015666) popup_ai2_link_window_g2_ParamLimits

0xbecc,	// (0x00015666) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x00019179) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x00019179) popup_ai2_link_window_g

0xbedb,	// (0x00015675) ai2_mp_button_pane

0xbee3,	// (0x0001567d) ai2_mp_volume_pane

0xa6eb,	// (0x00013e85) bg_popup_sub_pane_cp5_ParamLimits

0xa6eb,	// (0x00013e85) bg_popup_sub_pane_cp5

0xbeeb,	// (0x00015685) heading_ai2_gene_pane_ParamLimits

0xbeeb,	// (0x00015685) heading_ai2_gene_pane

0xbef7,	// (0x00015691) list_ai2_gene_pane_ParamLimits

0xbef7,	// (0x00015691) list_ai2_gene_pane

0xbf3f,	// (0x000156d9) cell_ai2_link_pane_ParamLimits

0xbf3f,	// (0x000156d9) cell_ai2_link_pane

0xbf55,	// (0x000156ef) cell_ai2_link_pane_g1

0x7844,	// (0x00010fde) grid_highlight_pane_cp7

0x6ac9,	// (0x00010263) ai2_mp_volume_pane_g1

0xc025,	// (0x000157bf) ai2_mp_volume_pane_g2

0xbf9a,	// (0x00015734) list_ai2_gene_pane_t1

0xc02d,	// (0x000157c7) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x00019192) ai2_mp_volume_pane_g

0x6ad1,	// (0x0001026b) volume_small_pane_cp3

0xc035,	// (0x000157cf) aid_size_cell_ai2_button

0xc03d,	// (0x000157d7) grid_ai2_button_pane

0xc046,	// (0x000157e0) cell_ai2_button_pane_ParamLimits

0xc046,	// (0x000157e0) cell_ai2_button_pane

0x783a,	// (0x00010fd4) cell_ai2_button_pane_g1

0x7844,	// (0x00010fde) grid_highlight_pane_cp8

0xbfe5,	// (0x0001577f) ai2_gene_pane_t1_ParamLimits

0xbfe5,	// (0x0001577f) ai2_gene_pane_t1

0x9877,	// (0x00013011) aid_height_parent_landscape

0xb893,	// (0x0001502d) aid_height_set_list

0xb8a4,	// (0x0001503e) aid_size_parent

0xbc84,	// (0x0001541e) aid_size_cell_graphic_pane_ParamLimits

0xbf07,	// (0x000156a1) popup_ai2_data_window_g1_ParamLimits

0xbf07,	// (0x000156a1) popup_ai2_data_window_g1

0xbf13,	// (0x000156ad) ai2_news_ticker_pane_g1

0xbf1b,	// (0x000156b5) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0001917e) ai2_news_ticker_pane_g

0xbf23,	// (0x000156bd) ai2_news_ticker_pane_t1

0xbf31,	// (0x000156cb) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x00019183) ai2_news_ticker_pane_t

0xbf5e,	// (0x000156f8) heading_ai2_gene_pane_g1

0xbf66,	// (0x00015700) heading_ai2_gene_pane_t1_ParamLimits

0xbf66,	// (0x00015700) heading_ai2_gene_pane_t1

0xbf7b,	// (0x00015715) list_highlight_pane_cp6

0xbf83,	// (0x0001571d) ai2_gene_pane_ParamLimits

0xbf83,	// (0x0001571d) ai2_gene_pane

0xbfa8,	// (0x00015742) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x00019188) list_ai2_gene_pane_t

0xbfb6,	// (0x00015750) list_highlight_pane_cp8_ParamLimits

0xbfb6,	// (0x00015750) list_highlight_pane_cp8

0xbfc7,	// (0x00015761) ai2_gene_pane_g1_ParamLimits

0xbfc7,	// (0x00015761) ai2_gene_pane_g1

0xbfd9,	// (0x00015773) ai2_gene_pane_g2_ParamLimits

0xbfd9,	// (0x00015773) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0001918d) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0001918d) ai2_gene_pane_g

0x8140,	// (0x000118da) scroll_pane_cp12

0x65f4,	// (0x0000fd8e) control_pane_t3_ParamLimits

0x65f4,	// (0x0000fd8e) control_pane_t3

0x97f4,	// (0x00012f8e) status_small_pane_g8_ParamLimits

0x97f4,	// (0x00012f8e) status_small_pane_g8

0x9a6f,	// (0x00013209) popup_find_window_ParamLimits

0x9c82,	// (0x0001341c) popup_note_image_window_ParamLimits

0xa337,	// (0x00013ad1) list_double2_graphic_pane_vc_g1_ParamLimits

0xa337,	// (0x00013ad1) list_double2_graphic_pane_vc_g1

0xa343,	// (0x00013add) list_double2_graphic_pane_vc_g2_ParamLimits

0xa343,	// (0x00013add) list_double2_graphic_pane_vc_g2

0xa34f,	// (0x00013ae9) list_double2_graphic_pane_vc_g3_ParamLimits

0xa34f,	// (0x00013ae9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x00018f6b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x00018f6b) list_double2_graphic_pane_vc_g

0xa35b,	// (0x00013af5) list_double2_graphic_pane_vc_t1_ParamLimits

0xa35b,	// (0x00013af5) list_double2_graphic_pane_vc_t1

0xa343,	// (0x00013add) list_single_heading_pane_vc_g1_ParamLimits

0xa343,	// (0x00013add) list_single_heading_pane_vc_g1

0xa34f,	// (0x00013ae9) list_single_heading_pane_vc_g2_ParamLimits

0xa34f,	// (0x00013ae9) list_single_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x00018f8c) list_single_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x00018f8c) list_single_heading_pane_vc_g

0xa415,	// (0x00013baf) list_single_heading_pane_vc_t1_ParamLimits

0xa415,	// (0x00013baf) list_single_heading_pane_vc_t1

0xa42d,	// (0x00013bc7) list_single_heading_pane_vc_t2_ParamLimits

0xa42d,	// (0x00013bc7) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x00018f91) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x00018f91) list_single_heading_pane_vc_t

0xa441,	// (0x00013bdb) list_setting_number_pane_vc_g1_ParamLimits

0xa441,	// (0x00013bdb) list_setting_number_pane_vc_g1

0xa44d,	// (0x00013be7) list_setting_number_pane_vc_g2_ParamLimits

0xa44d,	// (0x00013be7) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x00018f96) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x00018f96) list_setting_number_pane_vc_g

0xa459,	// (0x00013bf3) list_setting_number_pane_vc_t1_ParamLimits

0xa459,	// (0x00013bf3) list_setting_number_pane_vc_t1

0xa46d,	// (0x00013c07) list_setting_number_pane_vc_t2_ParamLimits

0xa46d,	// (0x00013c07) list_setting_number_pane_vc_t2

0xa489,	// (0x00013c23) list_setting_number_pane_vc_t3_ParamLimits

0xa489,	// (0x00013c23) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x00018f9b) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x00018f9b) list_setting_number_pane_vc_t

0xa4b5,	// (0x00013c4f) set_value_pane_vc_ParamLimits

0xa4b5,	// (0x00013c4f) set_value_pane_vc

0xbaaa,	// (0x00015244) list_double2_graphic_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_double2_graphic_pane_vc

0xbabc,	// (0x00015256) list_double2_large_graphic_pane_vc_ParamLimits

0xbabc,	// (0x00015256) list_double2_large_graphic_pane_vc

0xbaaa,	// (0x00015244) list_double2_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_double2_pane_vc

0xbaaa,	// (0x00015244) list_double_graphic_heading_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_double_graphic_heading_pane_vc

0xbaaa,	// (0x00015244) list_double_graphic_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_double_graphic_pane_vc

0xbaaa,	// (0x00015244) list_double_heading_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_double_heading_pane_vc

0xbabc,	// (0x00015256) list_double_large_graphic_pane_vc_ParamLimits

0xbabc,	// (0x00015256) list_double_large_graphic_pane_vc

0xbaaa,	// (0x00015244) list_double_number_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_double_number_pane_vc

0xbaaa,	// (0x00015244) list_double_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_double_pane_vc

0xbaaa,	// (0x00015244) list_double_time_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_double_time_pane_vc

0xbaaa,	// (0x00015244) list_setting_number_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_setting_number_pane_vc

0xbaaa,	// (0x00015244) list_setting_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_setting_pane_vc

0xbaaa,	// (0x00015244) list_single_graphic_heading_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_single_graphic_heading_pane_vc

0xbaaa,	// (0x00015244) list_single_heading_pane_vc_ParamLimits

0xbaaa,	// (0x00015244) list_single_heading_pane_vc

0xbacd,	// (0x00015267) list_single_number_heading_pane_vc_ParamLimits

0xbacd,	// (0x00015267) list_single_number_heading_pane_vc

0xc07a,	// (0x00015814) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc07a,	// (0x00015814) list_double_graphic_heading_pane_vc_g1

0xa343,	// (0x00013add) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa343,	// (0x00013add) list_double_graphic_heading_pane_vc_g2

0xa34f,	// (0x00013ae9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa34f,	// (0x00013ae9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x00019199) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x00019199) list_double_graphic_heading_pane_vc_g

0xc086,	// (0x00015820) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc086,	// (0x00015820) list_double_graphic_heading_pane_vc_t1

0xa415,	// (0x00013baf) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xa415,	// (0x00013baf) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x000191a0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x000191a0) list_double_graphic_heading_pane_vc_t

0xa441,	// (0x00013bdb) list_setting_pane_vc_g1_ParamLimits

0xa441,	// (0x00013bdb) list_setting_pane_vc_g1

0xa44d,	// (0x00013be7) list_setting_pane_vc_g2_ParamLimits

0xa44d,	// (0x00013be7) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x00018f96) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x00018f96) list_setting_pane_vc_g

0xc29e,	// (0x00015a38) list_setting_pane_vc_t1_ParamLimits

0xc29e,	// (0x00015a38) list_setting_pane_vc_t1

0xc2ba,	// (0x00015a54) list_setting_pane_vc_t2_ParamLimits

0xc2ba,	// (0x00015a54) list_setting_pane_vc_t2

0x0001,

0xfa34,	// (0x000191ce) list_setting_pane_vc_t_ParamLimits

0xfa34,	// (0x000191ce) list_setting_pane_vc_t

0xa4b5,	// (0x00013c4f) set_value_pane_cp_vc_ParamLimits

0xa4b5,	// (0x00013c4f) set_value_pane_cp_vc

0xa343,	// (0x00013add) list_single_number_heading_pane_vc_g1_ParamLimits

0xa343,	// (0x00013add) list_single_number_heading_pane_vc_g1

0xa34f,	// (0x00013ae9) list_single_number_heading_pane_vc_g2_ParamLimits

0xa34f,	// (0x00013ae9) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x00018f8c) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x00018f8c) list_single_number_heading_pane_vc_g

0xa415,	// (0x00013baf) list_single_number_heading_pane_vc_t1_ParamLimits

0xa415,	// (0x00013baf) list_single_number_heading_pane_vc_t1

0xc2d6,	// (0x00015a70) list_single_number_heading_pane_vc_t2_ParamLimits

0xc2d6,	// (0x00015a70) list_single_number_heading_pane_vc_t2

0xc2ea,	// (0x00015a84) list_single_number_heading_pane_vc_t3_ParamLimits

0xc2ea,	// (0x00015a84) list_single_number_heading_pane_vc_t3

0x0002,

0xfa39,	// (0x000191d3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x000191d3) list_single_number_heading_pane_vc_t

0xa337,	// (0x00013ad1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xa337,	// (0x00013ad1) list_single_graphic_heading_pane_vc_g1

0xa343,	// (0x00013add) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xa343,	// (0x00013add) list_single_graphic_heading_pane_vc_g4

0xa34f,	// (0x00013ae9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xa34f,	// (0x00013ae9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x00018f6b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x00018f6b) list_single_graphic_heading_pane_vc_g

0xa415,	// (0x00013baf) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xa415,	// (0x00013baf) list_single_graphic_heading_pane_vc_t1

0xc2fc,	// (0x00015a96) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc2fc,	// (0x00015a96) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa40,	// (0x000191da) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x000191da) list_single_graphic_heading_pane_vc_t

0xa343,	// (0x00013add) list_double2_pane_vc_g1_ParamLimits

0xa343,	// (0x00013add) list_double2_pane_vc_g1

0xa34f,	// (0x00013ae9) list_double2_pane_vc_g2_ParamLimits

0xa34f,	// (0x00013ae9) list_double2_pane_vc_g2

0x0001,

0xf7f2,	// (0x00018f8c) list_double2_pane_vc_g_ParamLimits

0xf7f2,	// (0x00018f8c) list_double2_pane_vc_g

0xc310,	// (0x00015aaa) list_double2_pane_vc_t1_ParamLimits

0xc310,	// (0x00015aaa) list_double2_pane_vc_t1

0xc326,	// (0x00015ac0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc326,	// (0x00015ac0) list_double2_large_graphic_pane_vc_g1

0xc332,	// (0x00015acc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc332,	// (0x00015acc) list_double2_large_graphic_pane_vc_g2

0xc33e,	// (0x00015ad8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc33e,	// (0x00015ad8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa45,	// (0x000191df) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa45,	// (0x000191df) list_double2_large_graphic_pane_vc_g

0xc34a,	// (0x00015ae4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc34a,	// (0x00015ae4) list_double2_large_graphic_pane_vc_t1

0xc360,	// (0x00015afa) list_double_time_pane_vc_g1_ParamLimits

0xc360,	// (0x00015afa) list_double_time_pane_vc_g1

0xc36c,	// (0x00015b06) list_double_time_pane_vc_g2_ParamLimits

0xc36c,	// (0x00015b06) list_double_time_pane_vc_g2

0x0001,

0xfa4c,	// (0x000191e6) list_double_time_pane_vc_g_ParamLimits

0xfa4c,	// (0x000191e6) list_double_time_pane_vc_g

0xc378,	// (0x00015b12) list_double_time_pane_vc_t1_ParamLimits

0xc378,	// (0x00015b12) list_double_time_pane_vc_t1

0xc393,	// (0x00015b2d) list_double_time_pane_vc_t2_ParamLimits

0xc393,	// (0x00015b2d) list_double_time_pane_vc_t2

0xc3ae,	// (0x00015b48) list_double_time_pane_vc_t3_ParamLimits

0xc3ae,	// (0x00015b48) list_double_time_pane_vc_t3

0xc3c6,	// (0x00015b60) list_double_time_pane_vc_t4_ParamLimits

0xc3c6,	// (0x00015b60) list_double_time_pane_vc_t4

0x0003,

0xfa51,	// (0x000191eb) list_double_time_pane_vc_t_ParamLimits

0xfa51,	// (0x000191eb) list_double_time_pane_vc_t

0xa343,	// (0x00013add) list_double_pane_vc_g1_ParamLimits

0xa343,	// (0x00013add) list_double_pane_vc_g1

0xa34f,	// (0x00013ae9) list_double_pane_vc_g2_ParamLimits

0xa34f,	// (0x00013ae9) list_double_pane_vc_g2

0x0001,

0xf7f2,	// (0x00018f8c) list_double_pane_vc_g_ParamLimits

0xf7f2,	// (0x00018f8c) list_double_pane_vc_g

0xc3da,	// (0x00015b74) list_double_pane_vc_t1_ParamLimits

0xc3da,	// (0x00015b74) list_double_pane_vc_t1

0xc3ee,	// (0x00015b88) list_double_pane_vc_t2_ParamLimits

0xc3ee,	// (0x00015b88) list_double_pane_vc_t2

0x0001,

0xfa5a,	// (0x000191f4) list_double_pane_vc_t_ParamLimits

0xfa5a,	// (0x000191f4) list_double_pane_vc_t

0xa343,	// (0x00013add) list_double_number_pane_vc_g1_ParamLimits

0xa343,	// (0x00013add) list_double_number_pane_vc_g1

0xa34f,	// (0x00013ae9) list_double_number_pane_vc_g2_ParamLimits

0xa34f,	// (0x00013ae9) list_double_number_pane_vc_g2

0x0001,

0xf7f2,	// (0x00018f8c) list_double_number_pane_vc_g_ParamLimits

0xf7f2,	// (0x00018f8c) list_double_number_pane_vc_g

0xc406,	// (0x00015ba0) list_double_number_pane_vc_t1_ParamLimits

0xc406,	// (0x00015ba0) list_double_number_pane_vc_t1

0xc41a,	// (0x00015bb4) list_double_number_pane_vc_t2_ParamLimits

0xc41a,	// (0x00015bb4) list_double_number_pane_vc_t2

0xc3ee,	// (0x00015b88) list_double_number_pane_vc_t3_ParamLimits

0xc3ee,	// (0x00015b88) list_double_number_pane_vc_t3

0x0002,

0xfa5f,	// (0x000191f9) list_double_number_pane_vc_t_ParamLimits

0xfa5f,	// (0x000191f9) list_double_number_pane_vc_t

0xc42e,	// (0x00015bc8) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc42e,	// (0x00015bc8) list_double_large_graphic_pane_vc_g1

0xc43a,	// (0x00015bd4) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc43a,	// (0x00015bd4) list_double_large_graphic_pane_vc_g2

0xc33e,	// (0x00015ad8) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc33e,	// (0x00015ad8) list_double_large_graphic_pane_vc_g3

0xc449,	// (0x00015be3) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc449,	// (0x00015be3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa66,	// (0x00019200) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x00019200) list_double_large_graphic_pane_vc_g

0xc455,	// (0x00015bef) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc455,	// (0x00015bef) list_double_large_graphic_pane_vc_t1

0xc469,	// (0x00015c03) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc469,	// (0x00015c03) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x00019209) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x00019209) list_double_large_graphic_pane_vc_t

0xa343,	// (0x00013add) list_double_heading_pane_vc_g1_ParamLimits

0xa343,	// (0x00013add) list_double_heading_pane_vc_g1

0xa34f,	// (0x00013ae9) list_double_heading_pane_vc_g2_ParamLimits

0xa34f,	// (0x00013ae9) list_double_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x00018f8c) list_double_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x00018f8c) list_double_heading_pane_vc_g

0xc482,	// (0x00015c1c) list_double_heading_pane_vc_t1_ParamLimits

0xc482,	// (0x00015c1c) list_double_heading_pane_vc_t1

0xa415,	// (0x00013baf) list_double_heading_pane_vc_t2_ParamLimits

0xa415,	// (0x00013baf) list_double_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x0001920e) list_double_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x0001920e) list_double_heading_pane_vc_t

0xa337,	// (0x00013ad1) list_double_graphic_pane_vc_g1_ParamLimits

0xa337,	// (0x00013ad1) list_double_graphic_pane_vc_g1

0xc496,	// (0x00015c30) list_double_graphic_pane_vc_g2_ParamLimits

0xc496,	// (0x00015c30) list_double_graphic_pane_vc_g2

0xc4a5,	// (0x00015c3f) list_double_graphic_pane_vc_g3_ParamLimits

0xc4a5,	// (0x00015c3f) list_double_graphic_pane_vc_g3

0x0002,

0xfa79,	// (0x00019213) list_double_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x00019213) list_double_graphic_pane_vc_g

0xc4b1,	// (0x00015c4b) list_double_graphic_pane_vc_t1_ParamLimits

0xc4b1,	// (0x00015c4b) list_double_graphic_pane_vc_t1

0xc3ee,	// (0x00015b88) list_double_graphic_pane_vc_t2_ParamLimits

0xc3ee,	// (0x00015b88) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x0001921a) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x0001921a) list_double_graphic_pane_vc_t

0x5bfe,	// (0x0000f398) aid_size_cell_fastswap

0x5c06,	// (0x0000f3a0) aid_size_cell_touch_ParamLimits

0x5c06,	// (0x0000f3a0) aid_size_cell_touch

0x5e6b,	// (0x0000f605) popup_fast_swap_wide_window_ParamLimits

0x5e6b,	// (0x0000f605) popup_fast_swap_wide_window

0x5f75,	// (0x0000f70f) touch_pane_ParamLimits

0x5f75,	// (0x0000f70f) touch_pane

0x8625,	// (0x00011dbf) button_value_adjust_pane_cp2

0x862d,	// (0x00011dc7) button_value_adjust_pane_cp4

0x864f,	// (0x00011de9) form_field_data_pane_cp2

0x8670,	// (0x00011e0a) form_field_data_wide_pane_cp2

0x8cff,	// (0x00012499) bg_scroll_pane_ParamLimits

0x6205,	// (0x0000f99f) scroll_handle_pane_ParamLimits

0x6219,	// (0x0000f9b3) scroll_sc2_down_pane_ParamLimits

0x6219,	// (0x0000f9b3) scroll_sc2_down_pane

0x8d30,	// (0x000124ca) scroll_sc2_up_pane_ParamLimits

0x8d30,	// (0x000124ca) scroll_sc2_up_pane

0xc8fe,	// (0x00016098) grid_wheel_folder_pane_g1_ParamLimits

0xc8fe,	// (0x00016098) grid_wheel_folder_pane_g1

0x63de,	// (0x0000fb78) clock_nsta_pane_cp2_ParamLimits

0x63de,	// (0x0000fb78) clock_nsta_pane_cp2

0x8a78,	// (0x00012212) listscroll_midp_pane_ParamLimits

0x9585,	// (0x00012d1f) midp_canvas_pane

0x986f,	// (0x00013009) nsta_clock_indic_pane

0x98cd,	// (0x00013067) listscroll_form_pane_vc

0x98e9,	// (0x00013083) listscroll_set_pane_vc_ParamLimits

0x98e9,	// (0x00013083) listscroll_set_pane_vc

0x9f8d,	// (0x00013727) clock_nsta_pane

0xa002,	// (0x0001379c) indicator_nsta_pane

0xa2d1,	// (0x00013a6b) bg_popup_sub_pane_cp2_ParamLimits

0xa2e5,	// (0x00013a7f) find_pane_cp2_ParamLimits

0xa2e5,	// (0x00013a7f) find_pane_cp2

0xa2fb,	// (0x00013a95) grid_toobar_pane_ParamLimits

0xa4c5,	// (0x00013c5f) list_form_gen_pane_vc_ParamLimits

0xa4c5,	// (0x00013c5f) list_form_gen_pane_vc

0xa4db,	// (0x00013c75) scroll_pane_cp8_vc_ParamLimits

0xa4db,	// (0x00013c75) scroll_pane_cp8_vc

0xa557,	// (0x00013cf1) data_form_wide_pane_vc_ParamLimits

0xa557,	// (0x00013cf1) data_form_wide_pane_vc

0xa563,	// (0x00013cfd) form_field_data_wide_pane_vc_g1

0xa56b,	// (0x00013d05) form_field_data_wide_pane_vc_t1_ParamLimits

0xa56b,	// (0x00013d05) form_field_data_wide_pane_vc_t1

0x870b,	// (0x00011ea5) input_focus_pane_cp6_vc_ParamLimits

0x870b,	// (0x00011ea5) input_focus_pane_cp6_vc

0xa8ad,	// (0x00014047) list_midp_pane_ParamLimits

0xa8b9,	// (0x00014053) scroll_pane_cp16_ParamLimits

0xa8b9,	// (0x00014053) scroll_pane_cp16

0xa907,	// (0x000140a1) button_value_adjust_pane_ParamLimits

0xa907,	// (0x000140a1) button_value_adjust_pane

0xb8b6,	// (0x00015050) button_value_adjust_pane_cp6_ParamLimits

0xb8b6,	// (0x00015050) button_value_adjust_pane_cp6

0xb9e0,	// (0x0001517a) settings_code_pane_cp_ParamLimits

0xb9e0,	// (0x0001517a) settings_code_pane_cp

0x783a,	// (0x00010fd4) cell_touch_pane_g1

0x783a,	// (0x00010fd4) cell_touch_pane_g2

0x0001,

0xf716,	// (0x00018eb0) cell_touch_pane_g

0xc058,	// (0x000157f2) cell_touch_pane_cp_ParamLimits

0xc058,	// (0x000157f2) cell_touch_pane_cp

0xc068,	// (0x00015802) cell_touch_pane_ParamLimits

0xc068,	// (0x00015802) cell_touch_pane

0x783a,	// (0x00010fd4) scroll_sc2_down_pane_g1

0x783a,	// (0x00010fd4) scroll_sc2_up_pane_g1

0x7844,	// (0x00010fde) bg_set_opt_pane_cp4_vc

0xc09a,	// (0x00015834) list_set_graphic_pane_vc_g1_ParamLimits

0xc09a,	// (0x00015834) list_set_graphic_pane_vc_g1

0xc0a6,	// (0x00015840) list_set_graphic_pane_vc_g2_ParamLimits

0xc0a6,	// (0x00015840) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x000191a5) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x000191a5) list_set_graphic_pane_vc_g

0xc0b2,	// (0x0001584c) text_primary_small_cp13_vc_ParamLimits

0xc0b2,	// (0x0001584c) text_primary_small_cp13_vc

0xc0ca,	// (0x00015864) list_set_graphic_pane_vc_ParamLimits

0xc0ca,	// (0x00015864) list_set_graphic_pane_vc

0x7844,	// (0x00010fde) input_focus_pane_cp2_vc

0x783a,	// (0x00010fd4) setting_code_pane_vc_g1

0xc0de,	// (0x00015878) setting_code_pane_vc_t1

0xc0ec,	// (0x00015886) set_text_pane_vc_t1_ParamLimits

0xc0ec,	// (0x00015886) set_text_pane_vc_t1

0x7844,	// (0x00010fde) input_focus_pane_cp1_vc

0xc107,	// (0x000158a1) list_set_text_pane_vc

0x783a,	// (0x00010fd4) setting_text_pane_vc_g1

0x7844,	// (0x00010fde) bg_set_opt_pane_cp2_vc

0xc111,	// (0x000158ab) setting_slider_graphic_pane_vc_g1

0xc119,	// (0x000158b3) setting_slider_graphic_pane_vc_t1

0xc127,	// (0x000158c1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x000191aa) setting_slider_graphic_pane_vc_t

0xc135,	// (0x000158cf) slider_set_pane_cp_vc

0xc13d,	// (0x000158d7) slider_set_pane_vc_g1

0xc146,	// (0x000158e0) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x000191af) slider_set_pane_vc_g

0x8843,	// (0x00011fdd) set_opt_bg_pane_g1_copy1

0x884b,	// (0x00011fe5) set_opt_bg_pane_g2_copy1

0xc172,	// (0x0001590c) set_opt_bg_pane_g3_copy1

0x885b,	// (0x00011ff5) set_opt_bg_pane_g4_copy1

0x8863,	// (0x00011ffd) set_opt_bg_pane_g5_copy1

0x886b,	// (0x00012005) set_opt_bg_pane_g6_copy1

0xc17c,	// (0x00015916) set_opt_bg_pane_g7_copy1

0xc184,	// (0x0001591e) set_opt_bg_pane_g8_copy1

0xc18e,	// (0x00015928) set_opt_bg_pane_g9_copy1

0x7844,	// (0x00010fde) bg_set_opt_pane_cp_vc

0xc198,	// (0x00015932) setting_slider_pane_vc_t1

0xc119,	// (0x000158b3) setting_slider_pane_vc_t2

0xc127,	// (0x000158c1) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x000191be) setting_slider_pane_vc_t

0xc135,	// (0x000158cf) slider_set_pane_vc

0x67e5,	// (0x0000ff7f) volume_set_pane_vc_g1

0x67ee,	// (0x0000ff88) volume_set_pane_vc_g2

0x67f7,	// (0x0000ff91) volume_set_pane_vc_g3

0x6800,	// (0x0000ff9a) volume_set_pane_vc_g4

0x6809,	// (0x0000ffa3) volume_set_pane_vc_g5

0x6812,	// (0x0000ffac) volume_set_pane_vc_g6

0x681b,	// (0x0000ffb5) volume_set_pane_vc_g7

0x6824,	// (0x0000ffbe) volume_set_pane_vc_g8

0x682d,	// (0x0000ffc7) volume_set_pane_vc_g9

0x6836,	// (0x0000ffd0) volume_set_pane_vc_g10

0x0009,

0xf8c2,	// (0x0001905c) volume_set_pane_vc_g

0xc1a7,	// (0x00015941) volume_set_pane_vc

0xc1af,	// (0x00015949) button_value_adjust_pane_cp1_vc

0xc1b9,	// (0x00015953) list_highlight_pane_cp2_vc

0xc1c2,	// (0x0001595c) list_set_pane_vc_ParamLimits

0xc1c2,	// (0x0001595c) list_set_pane_vc

0xc22c,	// (0x000159c6) main_pane_set_vc_t1_ParamLimits

0xc22c,	// (0x000159c6) main_pane_set_vc_t1

0xc241,	// (0x000159db) main_pane_set_vc_t2_ParamLimits

0xc241,	// (0x000159db) main_pane_set_vc_t2

0xc253,	// (0x000159ed) main_pane_set_vc_t3_ParamLimits

0xc253,	// (0x000159ed) main_pane_set_vc_t3

0xc267,	// (0x00015a01) main_pane_set_vc_t4_ParamLimits

0xc267,	// (0x00015a01) main_pane_set_vc_t4

0x0003,

0xfa2b,	// (0x000191c5) main_pane_set_vc_t_ParamLimits

0xfa2b,	// (0x000191c5) main_pane_set_vc_t

0xc27b,	// (0x00015a15) setting_code_pane_vc_ParamLimits

0xc27b,	// (0x00015a15) setting_code_pane_vc

0xc28c,	// (0x00015a26) setting_slider_graphic_pane_vc

0xc28c,	// (0x00015a26) setting_slider_pane_vc

0xc28c,	// (0x00015a26) setting_text_pane_vc

0xc28c,	// (0x00015a26) setting_volume_pane_vc

0xc296,	// (0x00015a30) scroll_pane_cp121_vc

0x8613,	// (0x00011dad) set_content_pane_vc

0xc4c5,	// (0x00015c5f) button_value_adjust_pane_g1

0xc4ce,	// (0x00015c68) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x0001921f) button_value_adjust_pane_g

0xc4d7,	// (0x00015c71) form_field_slider_wide_pane_vc_t1_ParamLimits

0xc4d7,	// (0x00015c71) form_field_slider_wide_pane_vc_t1

0xc4eb,	// (0x00015c85) form_field_slider_wide_pane_vc_t2_ParamLimits

0xc4eb,	// (0x00015c85) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8a,	// (0x00019224) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x00019224) form_field_slider_wide_pane_vc_t

0x7bb9,	// (0x00011353) input_focus_pane_cp10_vc_ParamLimits

0x7bb9,	// (0x00011353) input_focus_pane_cp10_vc

0xc4ff,	// (0x00015c99) slider_cont_pane_cp1_vc_ParamLimits

0xc4ff,	// (0x00015c99) slider_cont_pane_cp1_vc

0xc13d,	// (0x000158d7) slider_form_pane_g1_cp2

0xc146,	// (0x000158e0) slider_form_pane_g2_cp2

0xc51a,	// (0x00015cb4) form_field_slider_pane_vc_t3

0xc528,	// (0x00015cc2) form_field_slider_pane_vc_t4

0xc536,	// (0x00015cd0) slider_form_pane_vc_ParamLimits

0xc536,	// (0x00015cd0) slider_form_pane_vc

0xc543,	// (0x00015cdd) form_field_slider_pane_vc_t1_ParamLimits

0xc543,	// (0x00015cdd) form_field_slider_pane_vc_t1

0xc4eb,	// (0x00015c85) form_field_slider_pane_vc_t2_ParamLimits

0xc4eb,	// (0x00015c85) form_field_slider_pane_vc_t2

0x0001,

0xfa9a,	// (0x00019234) form_field_slider_pane_vc_t_ParamLimits

0xfa9a,	// (0x00019234) form_field_slider_pane_vc_t

0x7bb9,	// (0x00011353) input_focus_pane_cp9_vc_ParamLimits

0x7bb9,	// (0x00011353) input_focus_pane_cp9_vc

0xc55f,	// (0x00015cf9) slider_cont_pane_vc_ParamLimits

0xc55f,	// (0x00015cf9) slider_cont_pane_vc

0xc573,	// (0x00015d0d) list_form_graphic_pane_cp_vc_ParamLimits

0xc573,	// (0x00015d0d) list_form_graphic_pane_cp_vc

0xa563,	// (0x00013cfd) form_field_popup_wide_pane_vc_g1

0xc588,	// (0x00015d22) form_field_popup_wide_pane_vc_t1_ParamLimits

0xc588,	// (0x00015d22) form_field_popup_wide_pane_vc_t1

0x870b,	// (0x00011ea5) input_focus_pane_cp8_vc_ParamLimits

0x870b,	// (0x00011ea5) input_focus_pane_cp8_vc

0xc59f,	// (0x00015d39) list_form_wide_pane_vc_ParamLimits

0xc59f,	// (0x00015d39) list_form_wide_pane_vc

0xc5ab,	// (0x00015d45) list_form_graphic_pane_vc_g1

0xc5b3,	// (0x00015d4d) list_form_graphic_pane_vc_t1_ParamLimits

0xc5b3,	// (0x00015d4d) list_form_graphic_pane_vc_t1

0x7924,	// (0x000110be) list_highlight_pane_cp5_vc_ParamLimits

0x7924,	// (0x000110be) list_highlight_pane_cp5_vc

0xc5cf,	// (0x00015d69) list_form_graphic_pane_vc_ParamLimits

0xc5cf,	// (0x00015d69) list_form_graphic_pane_vc

0xa563,	// (0x00013cfd) form_field_popup_pane_vc_g1

0xc5e5,	// (0x00015d7f) form_field_popup_pane_vc_t1_ParamLimits

0xc5e5,	// (0x00015d7f) form_field_popup_pane_vc_t1

0x870b,	// (0x00011ea5) input_focus_pane_cp7_vc_ParamLimits

0x870b,	// (0x00011ea5) input_focus_pane_cp7_vc

0xc5fc,	// (0x00015d96) list_form_pane_vc_ParamLimits

0xc5fc,	// (0x00015d96) list_form_pane_vc

0xc608,	// (0x00015da2) data_form_pane_vc_t1_ParamLimits

0xc608,	// (0x00015da2) data_form_pane_vc_t1

0x8843,	// (0x00011fdd) input_focus_pane_vc_g1

0x884b,	// (0x00011fe5) input_focus_pane_vc_g2

0x8853,	// (0x00011fed) input_focus_pane_vc_g3

0x885b,	// (0x00011ff5) input_focus_pane_vc_g4

0x8863,	// (0x00011ffd) input_focus_pane_vc_g5

0x886b,	// (0x00012005) input_focus_pane_vc_g6

0x8873,	// (0x0001200d) input_focus_pane_vc_g7

0x887b,	// (0x00012015) input_focus_pane_vc_g8

0x8883,	// (0x0001201d) input_focus_pane_vc_g9

0x783a,	// (0x00010fd4) input_focus_pane_vc_g10

0x0009,

0xf69f,	// (0x00018e39) input_focus_pane_vc_g

0xa557,	// (0x00013cf1) data_form_pane_vc_ParamLimits

0xa557,	// (0x00013cf1) data_form_pane_vc

0xa563,	// (0x00013cfd) form_field_data_pane_vc_g1

0xc623,	// (0x00015dbd) form_field_data_pane_vc_t1_ParamLimits

0xc623,	// (0x00015dbd) form_field_data_pane_vc_t1

0x870b,	// (0x00011ea5) input_focus_pane_vc_ParamLimits

0x870b,	// (0x00011ea5) input_focus_pane_vc

0xc63d,	// (0x00015dd7) button_value_adjust_pane_cp3_vc

0xc645,	// (0x00015ddf) button_value_adjust_pane_cp5_vc

0xc64d,	// (0x00015de7) form_field_data_pane_vc_ParamLimits

0xc64d,	// (0x00015de7) form_field_data_pane_vc

0xc664,	// (0x00015dfe) form_field_data_pane_vc_cp2

0xc66c,	// (0x00015e06) form_field_data_wide_pane_vc_ParamLimits

0xc66c,	// (0x00015e06) form_field_data_wide_pane_vc

0xc682,	// (0x00015e1c) form_field_data_wide_pane_vc_cp2

0xc68a,	// (0x00015e24) form_field_popup_pane_vc_ParamLimits

0xc68a,	// (0x00015e24) form_field_popup_pane_vc

0xc6a1,	// (0x00015e3b) form_field_popup_wide_pane_vc_ParamLimits

0xc6a1,	// (0x00015e3b) form_field_popup_wide_pane_vc

0xc6b7,	// (0x00015e51) form_field_slider_pane_vc_ParamLimits

0xc6b7,	// (0x00015e51) form_field_slider_pane_vc

0xc6ca,	// (0x00015e64) form_field_slider_wide_pane_vc_ParamLimits

0xc6ca,	// (0x00015e64) form_field_slider_wide_pane_vc

0xc6dd,	// (0x00015e77) grid_touch_1_pane_ParamLimits

0xc6dd,	// (0x00015e77) grid_touch_1_pane

0xc6e9,	// (0x00015e83) grid_touch_2_pane_ParamLimits

0xc6e9,	// (0x00015e83) grid_touch_2_pane

0x983a,	// (0x00012fd4) touch_pane_g1_ParamLimits

0x983a,	// (0x00012fd4) touch_pane_g1

0xc701,	// (0x00015e9b) cell_app_pane_cp_wide_ParamLimits

0xc701,	// (0x00015e9b) cell_app_pane_cp_wide

0xc712,	// (0x00015eac) grid_popup_fast_wide_pane_ParamLimits

0xc712,	// (0x00015eac) grid_popup_fast_wide_pane

0xc726,	// (0x00015ec0) scroll_pane_cp19_ParamLimits

0xc726,	// (0x00015ec0) scroll_pane_cp19

0x7844,	// (0x00010fde) bg_popup_window_pane_cp20

0xc73a,	// (0x00015ed4) listscroll_popup_fast_wide_pane

0x7924,	// (0x000110be) grid_indicator_nsta_pane

0xc742,	// (0x00015edc) clock_nsta_pane_g1

0xc74b,	// (0x00015ee5) clock_nsta_pane_t1

0xc767,	// (0x00015f01) cell_indicator_nsta_pane_ParamLimits

0xc767,	// (0x00015f01) cell_indicator_nsta_pane

0xc79f,	// (0x00015f39) cell_indicator_nsta_pane_g1

0xc7ad,	// (0x00015f47) cell_indicator_nsta_pane_g2

0x0001,

0xfaa4,	// (0x0001923e) cell_indicator_nsta_pane_g

0xc7c3,	// (0x00015f5d) clock_nsta_pane_cp

0xc7cb,	// (0x00015f65) indicator_nsta_pane_cp

0xc7d4,	// (0x00015f6e) nsta_clock_indic_pane_g1

0x7a07,	// (0x000111a1) grid_indicator_pane

0x8e25,	// (0x000125bf) scroll_pane_cp29

0x632d,	// (0x0000fac7) indicator_nsta_pane_cp2_ParamLimits

0x632d,	// (0x0000fac7) indicator_nsta_pane_cp2

0x7924,	// (0x000110be) main_apps_wheel_pane

0xa78e,	// (0x00013f28) form_midp_field_text_pane_ParamLimits

0xa8d9,	// (0x00014073) scroll_bar_cp050_ParamLimits

0xc83d,	// (0x00015fd7) cell_indicator_pane_ParamLimits

0xc83d,	// (0x00015fd7) cell_indicator_pane

0xc854,	// (0x00015fee) cell_indicator_pane_g1

0xc85e,	// (0x00015ff8) grid_wheel_folder_pane_ParamLimits

0xc85e,	// (0x00015ff8) grid_wheel_folder_pane

0xc872,	// (0x0001600c) list_wheel_apps_pane_ParamLimits

0xc872,	// (0x0001600c) list_wheel_apps_pane

0xc883,	// (0x0001601d) main_apps_wheel_pane_g1_ParamLimits

0xc883,	// (0x0001601d) main_apps_wheel_pane_g1

0xc897,	// (0x00016031) main_apps_wheel_pane_g2_ParamLimits

0xc897,	// (0x00016031) main_apps_wheel_pane_g2

0x0001,

0xfac0,	// (0x0001925a) main_apps_wheel_pane_g_ParamLimits

0xfac0,	// (0x0001925a) main_apps_wheel_pane_g

0xc8af,	// (0x00016049) main_apps_wheel_pane_t1_ParamLimits

0xc8af,	// (0x00016049) main_apps_wheel_pane_t1

0xc8d2,	// (0x0001606c) list_wheel_apps_pane_g1

0xc8da,	// (0x00016074) list_wheel_apps_pane_g2

0xc8e2,	// (0x0001607c) list_wheel_apps_pane_g3

0xc8ea,	// (0x00016084) list_wheel_apps_pane_g4

0xc8f4,	// (0x0001608e) list_wheel_apps_pane_g5

0x0004,

0xfac5,	// (0x0001925f) list_wheel_apps_pane_g

0x93fd,	// (0x00012b97) navi_icon_text_pane

0x9ec0,	// (0x0001365a) aid_fill_nsta

0xc917,	// (0x000160b1) navi_icon_text_pane_g1

0xc923,	// (0x000160bd) navi_icon_text_pane_t1

0x929b,	// (0x00012a35) list_set_graphic_pane_t1_ParamLimits

0x929b,	// (0x00012a35) list_set_graphic_pane_t1

0xb028,	// (0x000147c2) popup_midp_note_alarm_window_t6_ParamLimits

0xb028,	// (0x000147c2) popup_midp_note_alarm_window_t6

0xb03a,	// (0x000147d4) popup_midp_note_alarm_window_t7_ParamLimits

0xb03a,	// (0x000147d4) popup_midp_note_alarm_window_t7

0xb04c,	// (0x000147e6) popup_midp_note_alarm_window_t8_ParamLimits

0xb04c,	// (0x000147e6) popup_midp_note_alarm_window_t8

0xb05e,	// (0x000147f8) popup_midp_note_alarm_window_t9_ParamLimits

0xb05e,	// (0x000147f8) popup_midp_note_alarm_window_t9

0xb070,	// (0x0001480a) popup_midp_note_alarm_window_t10_ParamLimits

0xb070,	// (0x0001480a) popup_midp_note_alarm_window_t10

0xb082,	// (0x0001481c) popup_midp_note_alarm_window_t11_ParamLimits

0xb082,	// (0x0001481c) popup_midp_note_alarm_window_t11

0xb094,	// (0x0001482e) scroll_pane_cp17_ParamLimits

0xb094,	// (0x0001482e) scroll_pane_cp17

0x67e5,	// (0x0000ff7f) volume_small_pane_cp_g1

0x6ada,	// (0x00010274) volume_small_pane_cp_g2

0x6ae3,	// (0x0001027d) volume_small_pane_cp_g3

0x6aec,	// (0x00010286) volume_small_pane_cp_g4

0x6af5,	// (0x0001028f) volume_small_pane_cp_g5

0x6afe,	// (0x00010298) volume_small_pane_cp_g6

0x6b07,	// (0x000102a1) volume_small_pane_cp_g7

0x6b10,	// (0x000102aa) volume_small_pane_cp_g8

0x6b19,	// (0x000102b3) volume_small_pane_cp_g9

0x6b22,	// (0x000102bc) volume_small_pane_cp_g10

0x964c,	// (0x00012de6) midp_ticker_pane_g1_ParamLimits

0x9658,	// (0x00012df2) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x00018f05) midp_ticker_pane_g_ParamLimits

0x9664,	// (0x00012dfe) midp_ticker_pane_t1_ParamLimits

0x9ed6,	// (0x00013670) aid_fill_nsta_2

0xa8c5,	// (0x0001405f) list_form2_midp_pane

0xba5e,	// (0x000151f8) midp_editing_number_pane_ParamLimits

0xba6d,	// (0x00015207) midp_ticker_pane_ParamLimits

0xc935,	// (0x000160cf) form2_midp_field_pane

0xc959,	// (0x000160f3) scroll_pane_cp51

0xc979,	// (0x00016113) form2_midp_button_pane_ParamLimits

0xc979,	// (0x00016113) form2_midp_button_pane

0xc98b,	// (0x00016125) form2_midp_content_pane_ParamLimits

0xc98b,	// (0x00016125) form2_midp_content_pane

0xc9a5,	// (0x0001613f) form2_midp_field_choice_group_pane

0xc9ad,	// (0x00016147) form2_midp_field_pane_g1

0xc9b5,	// (0x0001614f) form2_midp_field_pane_g2

0xc9bd,	// (0x00016157) form2_midp_field_pane_g3

0xc9c5,	// (0x0001615f) form2_midp_field_pane_g4

0x0003,

0xfaea,	// (0x00019284) form2_midp_field_pane_g

0xc9cd,	// (0x00016167) form2_midp_gauge_slider_pane

0xc9d5,	// (0x0001616f) form2_midp_gauge_wait_pane

0xc9dd,	// (0x00016177) form2_midp_image_pane_ParamLimits

0xc9dd,	// (0x00016177) form2_midp_image_pane

0xc9f8,	// (0x00016192) form2_midp_label_pane_ParamLimits

0xc9f8,	// (0x00016192) form2_midp_label_pane

0xca11,	// (0x000161ab) form2_midp_label_pane_cp_ParamLimits

0xca11,	// (0x000161ab) form2_midp_label_pane_cp

0xca32,	// (0x000161cc) form2_midp_string_pane_ParamLimits

0xca32,	// (0x000161cc) form2_midp_string_pane

0xca44,	// (0x000161de) form2_midp_text_pane_ParamLimits

0xca44,	// (0x000161de) form2_midp_text_pane

0xca61,	// (0x000161fb) form2_midp_time_pane

0xca71,	// (0x0001620b) input_focus_pane_cp51_ParamLimits

0xca71,	// (0x0001620b) input_focus_pane_cp51

0xca89,	// (0x00016223) form2_midp_label_pane_t1_ParamLimits

0xca89,	// (0x00016223) form2_midp_label_pane_t1

0xcaca,	// (0x00016264) form2_mdip_text_pane_t1_ParamLimits

0xcaca,	// (0x00016264) form2_mdip_text_pane_t1

0xcae9,	// (0x00016283) form2_midp_time_pane_t1

0xcb04,	// (0x0001629e) form2_midp_gauge_slider_pane_t1

0xcb16,	// (0x000162b0) form2_midp_gauge_slider_pane_t2

0xcb28,	// (0x000162c2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf3,	// (0x0001928d) form2_midp_gauge_slider_pane_t

0xcb3a,	// (0x000162d4) form2_midp_slider_pane

0xcb46,	// (0x000162e0) form2_midp_gauge_wait_pane_t1

0xcb54,	// (0x000162ee) form2_midp_wait_pane_ParamLimits

0xcb54,	// (0x000162ee) form2_midp_wait_pane

0xa582,	// (0x00013d1c) list_single_2graphic_pane_cp4_ParamLimits

0xa582,	// (0x00013d1c) list_single_2graphic_pane_cp4

0xcb7f,	// (0x00016319) list_single_midp_graphic_pane_cp_ParamLimits

0xcb7f,	// (0x00016319) list_single_midp_graphic_pane_cp

0x7844,	// (0x00010fde) list_highlight_pane_cp20

0xcbae,	// (0x00016348) list_single_2graphic_pane_g1_cp4

0xcbb6,	// (0x00016350) list_single_2graphic_pane_g2_cp4

0xcbbe,	// (0x00016358) list_single_2graphic_pane_t1_cp4

0x7924,	// (0x000110be) list_highlight_pane_cp21

0xcbcd,	// (0x00016367) list_single_midp_graphic_pane_g4_cp

0xcbdc,	// (0x00016376) list_single_midp_graphic_pane_t1_cp

0xcbf1,	// (0x0001638b) form2_mdip_string_pane_t1_ParamLimits

0xcbf1,	// (0x0001638b) form2_mdip_string_pane_t1

0x7844,	// (0x00010fde) bg_wml_button_pane_cp2

0x783a,	// (0x00010fd4) form2_midp_image_pane_g1

0x83ed,	// (0x00011b87) list_double_large_graphic_pane_g5_ParamLimits

0x83ed,	// (0x00011b87) list_double_large_graphic_pane_g5

0x8a78,	// (0x00012212) midp_form_pane_ParamLimits

0x7924,	// (0x000110be) main_apps_wheel_pane_ParamLimits

0x9ca8,	// (0x00013442) popup_preview_window_ParamLimits

0x9ca8,	// (0x00013442) popup_preview_window

0x9e63,	// (0x000135fd) popup_touch_info_window_ParamLimits

0x9e63,	// (0x000135fd) popup_touch_info_window

0x9e81,	// (0x0001361b) popup_touch_menu_window_ParamLimits

0x9e81,	// (0x0001361b) popup_touch_menu_window

0x7830,	// (0x00010fca) bg_popup_sub_pane_cp6

0xccea,	// (0x00016484) list_touch_menu_pane

0xccf2,	// (0x0001648c) list_single_touch_menu_pane_ParamLimits

0xccf2,	// (0x0001648c) list_single_touch_menu_pane

0xcd08,	// (0x000164a2) list_single_touch_menu_pane_t1

0x7924,	// (0x000110be) bg_popup_sub_pane_cp7_ParamLimits

0x7924,	// (0x000110be) bg_popup_sub_pane_cp7

0xcd16,	// (0x000164b0) heading_sub_pane

0xcd1e,	// (0x000164b8) list_touch_info_pane_ParamLimits

0xcd1e,	// (0x000164b8) list_touch_info_pane

0xcd2d,	// (0x000164c7) list_single_touch_info_pane_ParamLimits

0xcd2d,	// (0x000164c7) list_single_touch_info_pane

0xcd3f,	// (0x000164d9) list_single_touch_info_pane_t1

0xcd4d,	// (0x000164e7) list_single_touch_info_pane_t2

0x0001,

0xfb01,	// (0x0001929b) list_single_touch_info_pane_t

0x957d,	// (0x00012d17) bg_popup_heading_pane_cp

0xcd5b,	// (0x000164f5) heading_sub_pane_t1

0xa4f1,	// (0x00013c8b) bg_popup_preview_window_pane_cp_ParamLimits

0xa4f1,	// (0x00013c8b) bg_popup_preview_window_pane_cp

0xcd16,	// (0x000164b0) heading_preview_pane

0xcd1e,	// (0x000164b8) list_preview_pane_ParamLimits

0xcd1e,	// (0x000164b8) list_preview_pane

0xcd69,	// (0x00016503) popup_preview_window_g1

0xcd2d,	// (0x000164c7) list_single_preview_pane_ParamLimits

0xcd2d,	// (0x000164c7) list_single_preview_pane

0xcd71,	// (0x0001650b) list_single_preview_pane_g1

0xcd79,	// (0x00016513) list_single_preview_pane_t1

0xcd3f,	// (0x000164d9) list_single_preview_pane_t2

0x0001,

0xfb06,	// (0x000192a0) list_single_preview_pane_t

0xcd87,	// (0x00016521) bg_popup_heading_pane_cp2_ParamLimits

0xcd87,	// (0x00016521) bg_popup_heading_pane_cp2

0xcd9d,	// (0x00016537) heading_preview_pane_g1

0xcda5,	// (0x0001653f) heading_preview_pane_t1_ParamLimits

0xcda5,	// (0x0001653f) heading_preview_pane_t1

0x7a2a,	// (0x000111c4) soft_indicator_pane_t1_ParamLimits

0x811d,	// (0x000118b7) scroll_pane_ParamLimits

0x8d1e,	// (0x000124b8) scroll_sc2_left_pane

0x8d27,	// (0x000124c1) scroll_sc2_right_pane

0x8d46,	// (0x000124e0) scroll_bg_pane_g1_ParamLimits

0x8d5b,	// (0x000124f5) scroll_bg_pane_g2_ParamLimits

0x8d73,	// (0x0001250d) scroll_bg_pane_g3_ParamLimits

0xf6f6,	// (0x00018e90) scroll_bg_pane_g_ParamLimits

0x8d46,	// (0x000124e0) scroll_handle_pane_g1_ParamLimits

0x8d95,	// (0x0001252f) scroll_handle_pane_g2_ParamLimits

0x8d73,	// (0x0001250d) scroll_handle_pane_g3_ParamLimits

0xf6fd,	// (0x00018e97) scroll_handle_pane_g_ParamLimits

0x992b,	// (0x000130c5) popup_choice_list_window_ParamLimits

0x992b,	// (0x000130c5) popup_choice_list_window

0xa2dd,	// (0x00013a77) choice_list_pane

0xa399,	// (0x00013b33) cell_toolbar_pane_t1

0xa3c1,	// (0x00013b5b) toolbar_button_pane_ParamLimits

0xb54e,	// (0x00014ce8) ai_gene_pane_1_t2_ParamLimits

0xb54e,	// (0x00014ce8) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x000190b8) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x000190b8) ai_gene_pane_1_t

0xcdc2,	// (0x0001655c) scroll_sc2_left_pane_g1

0xcdc2,	// (0x0001655c) scroll_sc2_right_pane_g1

0x98fb,	// (0x00013095) bg_popup_sub_pane_cp10

0xcdcc,	// (0x00016566) list_choice_list_pane

0xcde5,	// (0x0001657f) list_single_choice_list_pane_ParamLimits

0xcde5,	// (0x0001657f) list_single_choice_list_pane

0xcdf8,	// (0x00016592) list_single_choice_list_pane_g1

0x8a28,	// (0x000121c2) list_single_choice_list_pane_t1_ParamLimits

0x8a28,	// (0x000121c2) list_single_choice_list_pane_t1

0xce00,	// (0x0001659a) choice_list_pane_g1

0xce08,	// (0x000165a2) choice_list_pane_t1

0x7830,	// (0x00010fca) input_focus_pane_cp11

0x8bff,	// (0x00012399) title_pane_stacon_g2_ParamLimits

0x8bff,	// (0x00012399) title_pane_stacon_g2

0x0002,

0xf6dc,	// (0x00018e76) title_pane_stacon_g_ParamLimits

0xf6dc,	// (0x00018e76) title_pane_stacon_g

0x957d,	// (0x00012d17) cursor_press_pane

0x99d7,	// (0x00013171) popup_fep_hwr_window_ParamLimits

0x99d7,	// (0x00013171) popup_fep_hwr_window

0x9a51,	// (0x000131eb) popup_fep_vkb_window_ParamLimits

0x9a51,	// (0x000131eb) popup_fep_vkb_window

0xce16,	// (0x000165b0) cursor_press_pane_g1

0x0002,

0xfb2f,	// (0x000192c9) fep_vkb_side_pane_g_ParamLimits

0x6b64,	// (0x000102fe) fep_hwr_candidate_pane_ParamLimits

0x6b64,	// (0x000102fe) fep_hwr_candidate_pane

0x6b8e,	// (0x00010328) fep_hwr_side_pane_ParamLimits

0x6b8e,	// (0x00010328) fep_hwr_side_pane

0x6bae,	// (0x00010348) fep_hwr_top_pane_ParamLimits

0x6bae,	// (0x00010348) fep_hwr_top_pane

0x6bc6,	// (0x00010360) fep_hwr_write_pane_ParamLimits

0x6bc6,	// (0x00010360) fep_hwr_write_pane

0xfb2f,	// (0x000192c9) fep_vkb_side_pane_g

0xce1e,	// (0x000165b8) fep_hwr_top_pane_g1

0xce30,	// (0x000165ca) fep_hwr_top_pane_g2

0x6c00,	// (0x0001039a) fep_hwr_top_pane_g3

0x0002,

0xfb0b,	// (0x000192a5) fep_hwr_top_pane_g

0x6c15,	// (0x000103af) fep_hwr_top_text_pane

0x8eec,	// (0x00012686) fep_hwr_top_text_pane_g1

0xce66,	// (0x00016600) fep_hwr_top_text_pane_t1

0x6d0b,	// (0x000104a5) fep_hwr_candidate_pane_g1

0xd0b9,	// (0x00016853) fep_vkb_keypad_pane_g3_ParamLimits

0xd0b9,	// (0x00016853) fep_vkb_keypad_pane_g3

0xd0e1,	// (0x0001687b) fep_vkb_keypad_pane_g4_ParamLimits

0xd0e1,	// (0x0001687b) fep_vkb_keypad_pane_g4

0xd150,	// (0x000168ea) fep_vkb_bottom_pane_g2_ParamLimits

0xd150,	// (0x000168ea) fep_vkb_bottom_pane_g2

0x0001,

0xfb36,	// (0x000192d0) fep_vkb_bottom_pane_g_ParamLimits

0xfb36,	// (0x000192d0) fep_vkb_bottom_pane_g

0xcdc2,	// (0x0001655c) cell_vkb_side_pane_g2

0x0001,

0xfb40,	// (0x000192da) cell_vkb_side_pane_g

0xd1db,	// (0x00016975) cell_vkb_side_pane_t1

0xd1e9,	// (0x00016983) cell_vkb_side_pane_t1_copy1

0xcdc2,	// (0x0001655c) bg_fep_vkb_candidate_pane_g2

0xd315,	// (0x00016aaf) cell_vkb_candidate_pane_ParamLimits

0xce74,	// (0x0001660e) aid_size_cell_vkb_ParamLimits

0xce74,	// (0x0001660e) aid_size_cell_vkb

0xd315,	// (0x00016aaf) cell_vkb_candidate_pane

0x6d32,	// (0x000104cc) bg_popup_fep_shadow_pane_g1

0xcf02,	// (0x0001669c) fep_vkb_bottom_pane_ParamLimits

0xcf02,	// (0x0001669c) fep_vkb_bottom_pane

0xcf38,	// (0x000166d2) fep_vkb_candidate_pane_ParamLimits

0xcf38,	// (0x000166d2) fep_vkb_candidate_pane

0xcf54,	// (0x000166ee) fep_vkb_keypad_pane_ParamLimits

0xcf54,	// (0x000166ee) fep_vkb_keypad_pane

0xcf9a,	// (0x00016734) fep_vkb_side_pane_ParamLimits

0xcf9a,	// (0x00016734) fep_vkb_side_pane

0xcfd6,	// (0x00016770) fep_vkb_top_pane_ParamLimits

0xcfd6,	// (0x00016770) fep_vkb_top_pane

0xd012,	// (0x000167ac) fep_vkb_top_pane_g1_ParamLimits

0xd012,	// (0x000167ac) fep_vkb_top_pane_g1

0xd021,	// (0x000167bb) fep_vkb_top_pane_g2_ParamLimits

0xd021,	// (0x000167bb) fep_vkb_top_pane_g2

0xd030,	// (0x000167ca) fep_vkb_top_pane_g3_ParamLimits

0xd030,	// (0x000167ca) fep_vkb_top_pane_g3

0x0003,

0xfb26,	// (0x000192c0) fep_vkb_top_pane_g_ParamLimits

0xfb26,	// (0x000192c0) fep_vkb_top_pane_g

0xd04e,	// (0x000167e8) fep_vkb_top_text_pane_ParamLimits

0xd04e,	// (0x000167e8) fep_vkb_top_text_pane

0xd05f,	// (0x000167f9) fep_vkb_side_pane_g1_ParamLimits

0xd05f,	// (0x000167f9) fep_vkb_side_pane_g1

0xd0a8,	// (0x00016842) grid_vkb_side_pane_ParamLimits

0xd0a8,	// (0x00016842) grid_vkb_side_pane

0x6d3a,	// (0x000104d4) bg_popup_fep_shadow_pane_g2

0x6d43,	// (0x000104dd) bg_popup_fep_shadow_pane_g3

0x6d4b,	// (0x000104e5) bg_popup_fep_shadow_pane_g4

0x6d54,	// (0x000104ee) bg_popup_fep_shadow_pane_g5

0x6d5e,	// (0x000104f8) bg_popup_fep_shadow_pane_g6

0x6d66,	// (0x00010500) bg_popup_fep_shadow_pane_g7

0x885b,	// (0x00011ff5) bg_popup_fep_shadow_pane_g8

0xd0ff,	// (0x00016899) grid_vkb_keypad_number_pane_ParamLimits

0xd0ff,	// (0x00016899) grid_vkb_keypad_number_pane

0xd10f,	// (0x000168a9) grid_vkb_keypad_pane_ParamLimits

0xd10f,	// (0x000168a9) grid_vkb_keypad_pane

0xd135,	// (0x000168cf) fep_vkb_bottom_pane_g1_ParamLimits

0xd135,	// (0x000168cf) fep_vkb_bottom_pane_g1

0xd15e,	// (0x000168f8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd15e,	// (0x000168f8) grid_vkb_keypad_bottom_left_pane

0xd173,	// (0x0001690d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd173,	// (0x0001690d) grid_vkb_keypad_bottom_right_pane

0xd188,	// (0x00016922) fep_vkb_top_text_pane_g1

0xd1a3,	// (0x0001693d) fep_vkb_top_text_pane_t1

0xd1b8,	// (0x00016952) cell_vkb_side_pane_ParamLimits

0xd1b8,	// (0x00016952) cell_vkb_side_pane

0xcdc2,	// (0x0001655c) cell_vkb_side_pane_g1

0xd1f7,	// (0x00016991) cell_vkb_keypad_pane_ParamLimits

0xd1f7,	// (0x00016991) cell_vkb_keypad_pane

0xd26c,	// (0x00016a06) cell_vkb_keypad_pane_g1

0x0008,

0xfb53,	// (0x000192ed) bg_popup_fep_shadow_pane_g

0x6d78,	// (0x00010512) cell_hwr_side_pane_g1

0x6d78,	// (0x00010512) cell_hwr_side_pane_g2

0xd276,	// (0x00016a10) cell_vkb_keypad_pane_t1

0xd284,	// (0x00016a1e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd284,	// (0x00016a1e) cell_vkb_keypad_bottom_left_pane

0xd2a1,	// (0x00016a3b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd2a1,	// (0x00016a3b) cell_vkb_keypad_bottom_right_pane

0xcdc2,	// (0x0001655c) cell_vkb_keypad_bottom_left_pane_g1

0xcdc2,	// (0x0001655c) cell_vkb_keypad_bottom_right_pane_g1

0xd2da,	// (0x00016a74) cell_vkb_keypad_number_pane_ParamLimits

0xd2da,	// (0x00016a74) cell_vkb_keypad_number_pane

0xd2f9,	// (0x00016a93) cell_vkb_keypad_number_pane_g1

0xd303,	// (0x00016a9d) cell_vkb_keypad_number_pane_g2

0xd30c,	// (0x00016aa6) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb45,	// (0x000192df) cell_vkb_keypad_number_pane_g

0xd276,	// (0x00016a10) cell_vkb_keypad_number_pane_t1

0xd330,	// (0x00016aca) fep_vkb_candidate_pane_g1

0x0001,

0xfb66,	// (0x00019300) cell_hwr_side_pane_g

0xd349,	// (0x00016ae3) cell_hwr_side_pane_t1

0x6d82,	// (0x0001051c) cell_hwr_side_pane_t1_copy1

0x6d90,	// (0x0001052a) cell_hwr_candidate_pane_g1

0x6dbf,	// (0x00010559) cell_hwr_candidate_pane_t1

0xcdc2,	// (0x0001655c) cell_vkb_candidate_pane_g2

0xd38d,	// (0x00016b27) cell_vkb_candidate_pane_t1

0x6b2b,	// (0x000102c5) bg_popup_fep_shadow_pane_ParamLimits

0x6b2b,	// (0x000102c5) bg_popup_fep_shadow_pane

0x6be0,	// (0x0001037a) bg_fep_hwr_top_pane_g4

0xce42,	// (0x000165dc) bg_hwr_side_pane_g1_ParamLimits

0xce42,	// (0x000165dc) bg_hwr_side_pane_g1

0x6c51,	// (0x000103eb) cell_hwr_side_pane_ParamLimits

0x6c51,	// (0x000103eb) cell_hwr_side_pane

0x6c8c,	// (0x00010426) fep_hwr_write_pane_g1_ParamLimits

0x6c8c,	// (0x00010426) fep_hwr_write_pane_g1

0x6c99,	// (0x00010433) fep_hwr_write_pane_g2_ParamLimits

0x6c99,	// (0x00010433) fep_hwr_write_pane_g2

0x6ca6,	// (0x00010440) fep_hwr_write_pane_g3_ParamLimits

0x6ca6,	// (0x00010440) fep_hwr_write_pane_g3

0x6cb4,	// (0x0001044e) fep_hwr_write_pane_g4_ParamLimits

0x6cb4,	// (0x0001044e) fep_hwr_write_pane_g4

0x0005,

0xfb12,	// (0x000192ac) fep_hwr_write_pane_g_ParamLimits

0xfb12,	// (0x000192ac) fep_hwr_write_pane_g

0x6be0,	// (0x0001037a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6be0,	// (0x0001037a) bg_fep_hwr_candidate_pane_g2

0x6cc9,	// (0x00010463) cell_hwr_candidate_pane_ParamLimits

0x6cc9,	// (0x00010463) cell_hwr_candidate_pane

0x6d0b,	// (0x000104a5) fep_hwr_candidate_pane_g1_ParamLimits

0xcea2,	// (0x0001663c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xcea2,	// (0x0001663c) bg_popup_fep_shadow_pane_cp2

0xd040,	// (0x000167da) fep_vkb_top_pane_g4_ParamLimits

0xd040,	// (0x000167da) fep_vkb_top_pane_g4

0xd086,	// (0x00016820) fep_vkb_side_pane_g2_ParamLimits

0xd086,	// (0x00016820) fep_vkb_side_pane_g2

0x852d,	// (0x00011cc7) list_setting_pane_t4_ParamLimits

0x852d,	// (0x00011cc7) list_setting_pane_t4

0x85a7,	// (0x00011d41) list_setting_number_pane_t5_ParamLimits

0x85a7,	// (0x00011d41) list_setting_number_pane_t5

0x8f33,	// (0x000126cd) list_double_heading_pane_cp2_ParamLimits

0x8f33,	// (0x000126cd) list_double_heading_pane_cp2

0x8731,	// (0x00011ecb) list_double_heading_pane_g1_cp2_ParamLimits

0x8731,	// (0x00011ecb) list_double_heading_pane_g1_cp2

0x873d,	// (0x00011ed7) list_double_heading_pane_g2_cp2_ParamLimits

0x873d,	// (0x00011ed7) list_double_heading_pane_g2_cp2

0xd39b,	// (0x00016b35) list_double_heading_pane_t1_cp2_ParamLimits

0xd39b,	// (0x00016b35) list_double_heading_pane_t1_cp2

0xd3b1,	// (0x00016b4b) list_double_heading_pane_t2_cp2_ParamLimits

0xd3b1,	// (0x00016b4b) list_double_heading_pane_t2_cp2

0x7818,	// (0x00010fb2) aid_value_unit2

0x5ec5,	// (0x0000f65f) popup_preview_fixed_window

0x7bc7,	// (0x00011361) bg_popup_preview_window_pane_cp02

0xd3c3,	// (0x00016b5d) list_preview_fixed_pane

0xd409,	// (0x00016ba3) list_empty_pane_fp_ParamLimits

0xd409,	// (0x00016ba3) list_empty_pane_fp

0xd409,	// (0x00016ba3) list_single_cale_day_pane_fp_ParamLimits

0xd409,	// (0x00016ba3) list_single_cale_day_pane_fp

0xd409,	// (0x00016ba3) list_single_graphic_heading_pane_fp_ParamLimits

0xd409,	// (0x00016ba3) list_single_graphic_heading_pane_fp

0xd409,	// (0x00016ba3) list_single_graphic_pane_fp_ParamLimits

0xd409,	// (0x00016ba3) list_single_graphic_pane_fp

0xd409,	// (0x00016ba3) list_single_heading_pane_fp_ParamLimits

0xd409,	// (0x00016ba3) list_single_heading_pane_fp

0xd409,	// (0x00016ba3) list_single_pane_fp_ParamLimits

0xd409,	// (0x00016ba3) list_single_pane_fp

0xd41e,	// (0x00016bb8) list_single_pane_fp_g1_ParamLimits

0xd41e,	// (0x00016bb8) list_single_pane_fp_g1

0x8731,	// (0x00011ecb) list_single_pane_fp_g2_ParamLimits

0x8731,	// (0x00011ecb) list_single_pane_fp_g2

0x873d,	// (0x00011ed7) list_single_pane_fp_g3_ParamLimits

0x873d,	// (0x00011ed7) list_single_pane_fp_g3

0xd42a,	// (0x00016bc4) list_single_pane_fp_g4_ParamLimits

0xd42a,	// (0x00016bc4) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x00019313) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x00019313) list_single_pane_fp_g

0xd436,	// (0x00016bd0) list_single_pane_fp_t1_ParamLimits

0xd436,	// (0x00016bd0) list_single_pane_fp_t1

0xd44d,	// (0x00016be7) list_single_graphic_pane_fp_g1_ParamLimits

0xd44d,	// (0x00016be7) list_single_graphic_pane_fp_g1

0xd41e,	// (0x00016bb8) list_single_graphic_pane_fp_g2_ParamLimits

0xd41e,	// (0x00016bb8) list_single_graphic_pane_fp_g2

0x8731,	// (0x00011ecb) list_single_graphic_pane_fp_g3_ParamLimits

0x8731,	// (0x00011ecb) list_single_graphic_pane_fp_g3

0x873d,	// (0x00011ed7) list_single_graphic_pane_fp_g4_ParamLimits

0x873d,	// (0x00011ed7) list_single_graphic_pane_fp_g4

0xd42a,	// (0x00016bc4) list_single_graphic_pane_fp_g5_ParamLimits

0xd42a,	// (0x00016bc4) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x0001931c) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x0001931c) list_single_graphic_pane_fp_g

0xd459,	// (0x00016bf3) list_single_graphic_pane_fp_t1_ParamLimits

0xd459,	// (0x00016bf3) list_single_graphic_pane_fp_t1

0xd44d,	// (0x00016be7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd44d,	// (0x00016be7) list_single_graphic_heading_pane_fp_g1

0xd41e,	// (0x00016bb8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd41e,	// (0x00016bb8) list_single_graphic_heading_pane_fp_g2

0x8731,	// (0x00011ecb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8731,	// (0x00011ecb) list_single_graphic_heading_pane_fp_g3

0x873d,	// (0x00011ed7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x873d,	// (0x00011ed7) list_single_graphic_heading_pane_fp_g4

0xd42a,	// (0x00016bc4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd42a,	// (0x00016bc4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0001931c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0001931c) list_single_graphic_heading_pane_fp_g

0xd46f,	// (0x00016c09) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd46f,	// (0x00016c09) list_single_graphic_heading_pane_fp_t1

0xd485,	// (0x00016c1f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd485,	// (0x00016c1f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x00019327) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x00019327) list_single_graphic_heading_pane_fp_t

0xd497,	// (0x00016c31) list_single_cale_day_pane_fp_g1_ParamLimits

0xd497,	// (0x00016c31) list_single_cale_day_pane_fp_g1

0xd4cf,	// (0x00016c69) list_single_cale_day_pane_fp_g2_ParamLimits

0xd4cf,	// (0x00016c69) list_single_cale_day_pane_fp_g2

0xd4db,	// (0x00016c75) list_single_cale_day_pane_fp_g3_ParamLimits

0xd4db,	// (0x00016c75) list_single_cale_day_pane_fp_g3

0xd503,	// (0x00016c9d) list_single_cale_day_pane_fp_g4_ParamLimits

0xd503,	// (0x00016c9d) list_single_cale_day_pane_fp_g4

0xd527,	// (0x00016cc1) list_single_cale_day_pane_fp_g5_ParamLimits

0xd527,	// (0x00016cc1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x0001932c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x0001932c) list_single_cale_day_pane_fp_g

0xd54b,	// (0x00016ce5) list_single_cale_day_pane_fp_t1_ParamLimits

0xd54b,	// (0x00016ce5) list_single_cale_day_pane_fp_t1

0xd571,	// (0x00016d0b) list_single_cale_day_pane_fp_t2_ParamLimits

0xd571,	// (0x00016d0b) list_single_cale_day_pane_fp_t2

0xd58a,	// (0x00016d24) list_single_cale_day_pane_fp_t3_ParamLimits

0xd58a,	// (0x00016d24) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x00019337) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x00019337) list_single_cale_day_pane_fp_t

0xd41e,	// (0x00016bb8) list_empty_pane_fp_g1_ParamLimits

0xd41e,	// (0x00016bb8) list_empty_pane_fp_g1

0xd5a3,	// (0x00016d3d) list_empty_pane_fp_t1

0xd5b1,	// (0x00016d4b) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x0001933e) list_empty_pane_fp_t

0xd41e,	// (0x00016bb8) list_single_heading_pane_fp_g1_ParamLimits

0xd41e,	// (0x00016bb8) list_single_heading_pane_fp_g1

0x8731,	// (0x00011ecb) list_single_heading_pane_fp_g2_ParamLimits

0x8731,	// (0x00011ecb) list_single_heading_pane_fp_g2

0x873d,	// (0x00011ed7) list_single_heading_pane_fp_g3_ParamLimits

0x873d,	// (0x00011ed7) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x00019343) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x00019343) list_single_heading_pane_fp_g

0xd5bf,	// (0x00016d59) list_single_heading_pane_fp_t1_ParamLimits

0xd5bf,	// (0x00016d59) list_single_heading_pane_fp_t1

0xd5d1,	// (0x00016d6b) list_single_heading_pane_fp_t2_ParamLimits

0xd5d1,	// (0x00016d6b) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x0001934a) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x0001934a) list_single_heading_pane_fp_t

0x8a96,	// (0x00012230) aid_size_cell_fast

0x7b37,	// (0x000112d1) soft_indicator_pane_cp1_t1

0x8ad3,	// (0x0001226d) cell_app_pane_cp2_ParamLimits

0x8ad3,	// (0x0001226d) cell_app_pane_cp2

0x6b4d,	// (0x000102e7) fep_hwr_candidate_drop_down_list_pane

0x6d25,	// (0x000104bf) fep_hwr_candidate_pane_g3_ParamLimits

0x6d25,	// (0x000104bf) fep_hwr_candidate_pane_g3

0x52d8,	// (0x0000ea72) fep_hwr_candidate_pane_g4_ParamLimits

0x52d8,	// (0x0000ea72) fep_hwr_candidate_pane_g4

0x0002,

0xfb1f,	// (0x000192b9) fep_hwr_candidate_pane_g_ParamLimits

0xfb1f,	// (0x000192b9) fep_hwr_candidate_pane_g

0xcf27,	// (0x000166c1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xcf27,	// (0x000166c1) fep_vkb_candidate_drop_down_list_pane

0xd338,	// (0x00016ad2) fep_vkb_candidate_pane_g3

0xd340,	// (0x00016ada) fep_vkb_candidate_pane_g4

0x0002,

0xfb4c,	// (0x000192e6) fep_vkb_candidate_pane_g

0x6d90,	// (0x0001052a) cell_hwr_candidate_pane_g1_ParamLimits

0x6d9e,	// (0x00010538) cell_hwr_candidate_pane_g3_ParamLimits

0x6d9e,	// (0x00010538) cell_hwr_candidate_pane_g3

0xf469,	// (0x00018c03) cell_hwr_candidate_pane_g4_ParamLimits

0xf469,	// (0x00018c03) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x00019305) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x00019305) cell_hwr_candidate_pane_g

0xd357,	// (0x00016af1) cell_vkb_candidate_pane_g3_ParamLimits

0xd357,	// (0x00016af1) cell_vkb_candidate_pane_g3

0xd372,	// (0x00016b0c) cell_vkb_candidate_pane_g4_ParamLimits

0xd372,	// (0x00016b0c) cell_vkb_candidate_pane_g4

0xd5e7,	// (0x00016d81) cell_app_pane_cp2_g1_ParamLimits

0xd5e7,	// (0x00016d81) cell_app_pane_cp2_g1

0xd605,	// (0x00016d9f) cell_app_pane_cp2_g2_ParamLimits

0xd605,	// (0x00016d9f) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x0001934f) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x0001934f) cell_app_pane_cp2_g

0xd611,	// (0x00016dab) cell_app_pane_cp2_t1_ParamLimits

0xd611,	// (0x00016dab) cell_app_pane_cp2_t1

0x870b,	// (0x00011ea5) grid_highlight_pane_cp1_ParamLimits

0x870b,	// (0x00011ea5) grid_highlight_pane_cp1

0x6ddd,	// (0x00010577) cell_hwr_candidate_pane_cp1_ParamLimits

0x6ddd,	// (0x00010577) cell_hwr_candidate_pane_cp1

0x6d90,	// (0x0001052a) fep_hwr_candidate_drop_down_list_pane_g1

0x6dfc,	// (0x00010596) fep_hwr_candidate_drop_down_list_pane_g2

0x6e09,	// (0x000105a3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00019354) fep_hwr_candidate_drop_down_list_pane_g

0x6e16,	// (0x000105b0) fep_hwr_candidate_drop_down_list_scroll_pane

0x6e1f,	// (0x000105b9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6e1f,	// (0x000105b9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6e2c,	// (0x000105c6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6e2c,	// (0x000105c6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6e39,	// (0x000105d3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6e39,	// (0x000105d3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6e46,	// (0x000105e0) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6e46,	// (0x000105e0) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6e61,	// (0x000105fb) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e61,	// (0x000105fb) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6e7c,	// (0x00010616) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6e7c,	// (0x00010616) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6e97,	// (0x00010631) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6e97,	// (0x00010631) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6eb2,	// (0x0001064c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6eb2,	// (0x0001064c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x0001935b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x0001935b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xd67f,	// (0x00016e19) cell_vkb_candidate_pane_cp1_ParamLimits

0xd67f,	// (0x00016e19) cell_vkb_candidate_pane_cp1

0xd040,	// (0x000167da) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd040,	// (0x000167da) fep_vkb_candidate_drop_down_list_pane_g1

0xd623,	// (0x00016dbd) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd623,	// (0x00016dbd) fep_vkb_candidate_drop_down_list_pane_g2

0xd630,	// (0x00016dca) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd630,	// (0x00016dca) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x0001936c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd2,	// (0x0001936c) fep_vkb_candidate_drop_down_list_pane_g

0xd69f,	// (0x00016e39) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd69f,	// (0x00016e39) fep_vkb_candidate_drop_down_list_scroll_pane

0xd6ac,	// (0x00016e46) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd6ac,	// (0x00016e46) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd6b9,	// (0x00016e53) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd6b9,	// (0x00016e53) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd6c5,	// (0x00016e5f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd6c5,	// (0x00016e5f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd63d,	// (0x00016dd7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd63d,	// (0x00016dd7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd65e,	// (0x00016df8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd65e,	// (0x00016df8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd6d1,	// (0x00016e6b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd6d1,	// (0x00016e6b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd6f2,	// (0x00016e8c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd6f2,	// (0x00016e8c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd713,	// (0x00016ead) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd713,	// (0x00016ead) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x00019373) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x00019373) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x784e,	// (0x00010fe8) title_pane_g1_ParamLimits

0x785b,	// (0x00010ff5) title_pane_g2_ParamLimits

0xf566,	// (0x00018d00) title_pane_g_ParamLimits

0x8edc,	// (0x00012676) aid_call2_pane

0x8ee4,	// (0x0001267e) aid_call_pane

0x8eec,	// (0x00012686) popup_clock_analogue_window_g1

0x8eec,	// (0x00012686) popup_clock_analogue_window_g2

0x622e,	// (0x0000f9c8) popup_clock_analogue_window_g3

0x6237,	// (0x0000f9d1) popup_clock_analogue_window_g4

0x783a,	// (0x00010fd4) popup_clock_analogue_window_g5

0x0004,

0xf70b,	// (0x00018ea5) popup_clock_analogue_window_g

0x623f,	// (0x0000f9d9) popup_clock_analogue_window_t1

0x624d,	// (0x0000f9e7) clock_digital_number_pane_ParamLimits

0x624d,	// (0x0000f9e7) clock_digital_number_pane

0x6259,	// (0x0000f9f3) clock_digital_number_pane_cp02_ParamLimits

0x6259,	// (0x0000f9f3) clock_digital_number_pane_cp02

0x6265,	// (0x0000f9ff) clock_digital_number_pane_cp03_ParamLimits

0x6265,	// (0x0000f9ff) clock_digital_number_pane_cp03

0x6271,	// (0x0000fa0b) clock_digital_number_pane_cp04_ParamLimits

0x6271,	// (0x0000fa0b) clock_digital_number_pane_cp04

0x627d,	// (0x0000fa17) clock_digital_separator_pane_ParamLimits

0x627d,	// (0x0000fa17) clock_digital_separator_pane

0x6289,	// (0x0000fa23) popup_clock_digital_window_t1_ParamLimits

0x6289,	// (0x0000fa23) popup_clock_digital_window_t1

0x783a,	// (0x00010fd4) clock_digital_number_pane_g1

0x783a,	// (0x00010fd4) clock_digital_number_pane_g2

0x0001,

0xf716,	// (0x00018eb0) clock_digital_number_pane_g

0x783a,	// (0x00010fd4) clock_digital_separator_pane_g1

0x783a,	// (0x00010fd4) clock_digital_separator_pane_g2

0x0001,

0xf716,	// (0x00018eb0) clock_digital_separator_pane_g

0x9ec0,	// (0x0001365a) aid_fill_nsta_ParamLimits

0xa002,	// (0x0001379c) indicator_nsta_pane_ParamLimits

0xa175,	// (0x0001390f) popup_clock_analogue_window

0xa175,	// (0x0001390f) popup_clock_digital_window

0x7924,	// (0x000110be) grid_indicator_nsta_pane_ParamLimits

0xc759,	// (0x00015ef3) clock_nsta_pane_t2

0x0001,

0xfa9f,	// (0x00019239) clock_nsta_pane_t

0x61f2,	// (0x0000f98c) aid_size_max_handle

0x61fc,	// (0x0000f996) aid_size_min_handle

0x957d,	// (0x00012d17) editor_scroll_pane

0xd72e,	// (0x00016ec8) ex_editor_pane

0x8a04,	// (0x0001219e) scroll_pane_cp13

0x8149,	// (0x000118e3) scroll_pane_cp14

0x8f1b,	// (0x000126b5) scroll_pane_cp36

0x8f47,	// (0x000126e1) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f47,	// (0x000126e1) list_single_graphic_hl_pane_cp2

0xbb29,	// (0x000152c3) list_single_graphic_hl_pane_ParamLimits

0xbb29,	// (0x000152c3) list_single_graphic_hl_pane

0xd736,	// (0x00016ed0) aid_size_min_hl_cp1

0xd73f,	// (0x00016ed9) list_highlight_pane_cp34_ParamLimits

0xd73f,	// (0x00016ed9) list_highlight_pane_cp34

0xd750,	// (0x00016eea) list_single_graphic_hl_pane_g1_ParamLimits

0xd750,	// (0x00016eea) list_single_graphic_hl_pane_g1

0xd75d,	// (0x00016ef7) list_single_graphic_hl_pane_g2_ParamLimits

0xd75d,	// (0x00016ef7) list_single_graphic_hl_pane_g2

0xd75d,	// (0x00016ef7) list_single_graphic_hl_pane_g3_ParamLimits

0xd75d,	// (0x00016ef7) list_single_graphic_hl_pane_g3

0xa343,	// (0x00013add) list_single_graphic_hl_pane_g4_ParamLimits

0xa343,	// (0x00013add) list_single_graphic_hl_pane_g4

0xd769,	// (0x00016f03) list_single_graphic_hl_pane_g5_ParamLimits

0xd769,	// (0x00016f03) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x00019384) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x00019384) list_single_graphic_hl_pane_g

0xd77d,	// (0x00016f17) list_single_graphic_hl_pane_t1_ParamLimits

0xd77d,	// (0x00016f17) list_single_graphic_hl_pane_t1

0xd793,	// (0x00016f2d) aid_size_min_hl_cp2

0xd79c,	// (0x00016f36) list_highlight_pane_cp34_cp2_ParamLimits

0xd79c,	// (0x00016f36) list_highlight_pane_cp34_cp2

0xd750,	// (0x00016eea) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd750,	// (0x00016eea) list_single_graphic_hl_pane_g1_cp2

0xd7a9,	// (0x00016f43) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd7a9,	// (0x00016f43) list_single_graphic_hl_pane_g2_cp2

0xd7b5,	// (0x00016f4f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd7b5,	// (0x00016f4f) list_single_graphic_hl_pane_g3_cp2

0xa343,	// (0x00013add) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa343,	// (0x00013add) list_single_graphic_hl_pane_g4_cp2

0xd769,	// (0x00016f03) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd769,	// (0x00016f03) list_single_graphic_hl_pane_g5_cp2

0x6539,	// (0x0000fcd3) control_pane_g4_ParamLimits

0x6539,	// (0x0000fcd3) control_pane_g4

0x98fb,	// (0x00013095) bg_popup_sub_pane_cp10_ParamLimits

0xcdcc,	// (0x00016566) list_choice_list_pane_ParamLimits

0xcddb,	// (0x00016575) scroll_pane_cp23

0x7bc7,	// (0x00011361) bg_popup_preview_window_pane_cp02_ParamLimits

0xd3c3,	// (0x00016b5d) list_preview_fixed_pane_ParamLimits

0xd3d9,	// (0x00016b73) list_preview_fixed_pane_cp_ParamLimits

0xd3d9,	// (0x00016b73) list_preview_fixed_pane_cp

0xd3e5,	// (0x00016b7f) popup_preview_fixed_window_g1_ParamLimits

0xd3e5,	// (0x00016b7f) popup_preview_fixed_window_g1

0xd3f1,	// (0x00016b8b) popup_preview_fixed_window_g2_ParamLimits

0xd3f1,	// (0x00016b8b) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x0001930c) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x0001930c) popup_preview_fixed_window_g

0x6166,	// (0x0000f900) aid_navi_side_left_pane_ParamLimits

0x617b,	// (0x0000f915) aid_navi_side_right_pane_ParamLimits

0x6193,	// (0x0000f92d) navi_icon_pane_stacon_ParamLimits

0x61a7,	// (0x0000f941) navi_navi_pane_stacon_ParamLimits

0x6193,	// (0x0000f92d) navi_text_pane_stacon_ParamLimits

0x7830,	// (0x00010fca) main_text_info_pane

0xd7d9,	// (0x00016f73) listscroll_text_info_pane

0xd7e1,	// (0x00016f7b) list_text_info_pane_ParamLimits

0xd7e1,	// (0x00016f7b) list_text_info_pane

0xd7f0,	// (0x00016f8a) scroll_pane_cp24_ParamLimits

0xd7f0,	// (0x00016f8a) scroll_pane_cp24

0xd80e,	// (0x00016fa8) list_text_info_pane_t1_ParamLimits

0xd80e,	// (0x00016fa8) list_text_info_pane_t1

0x9949,	// (0x000130e3) popup_fast_swap2_window_ParamLimits

0x9949,	// (0x000130e3) popup_fast_swap2_window

0xd83f,	// (0x00016fd9) aid_size_cell_fast2

0x7830,	// (0x00010fca) bg_popup_window_pane_cp17

0xa8f1,	// (0x0001408b) heading_pane_cp2

0x7e13,	// (0x000115ad) listscroll_fast2_pane

0xd849,	// (0x00016fe3) grid_fast2_pane

0xd853,	// (0x00016fed) listscroll_fast2_pane_g1

0xd85b,	// (0x00016ff5) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x0001938f) listscroll_fast2_pane_g

0x8a04,	// (0x0001219e) scroll_pane_cp26

0xd865,	// (0x00016fff) cell_fast2_pane_ParamLimits

0xd865,	// (0x00016fff) cell_fast2_pane

0xd87a,	// (0x00017014) cell_fast2_pane_g1

0xd883,	// (0x0001701d) cell_fast2_pane_g2

0xd88c,	// (0x00017026) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x00019394) cell_fast2_pane_g

0x7f06,	// (0x000116a0) grid_highlight_pane_cp9

0x7f1b,	// (0x000116b5) main_eswt_pane_ParamLimits

0x7f1b,	// (0x000116b5) main_eswt_pane

0xd805,	// (0x00016f9f) list_single_text_info_pane

0xd894,	// (0x0001702e) eswt_ctrl_button_pane

0xd894,	// (0x0001702e) eswt_ctrl_canvas_pane

0xd89c,	// (0x00017036) eswt_ctrl_combo_pane

0xd894,	// (0x0001702e) eswt_ctrl_default_pane

0xd894,	// (0x0001702e) eswt_ctrl_label_pane

0xd8a4,	// (0x0001703e) eswt_ctrl_wait_pane

0xd8ac,	// (0x00017046) eswt_shell_pane

0x7830,	// (0x00010fca) listscroll_eswt_app_pane

0xd8cc,	// (0x00017066) popup_eswt_tasktip_window_ParamLimits

0xd8cc,	// (0x00017066) popup_eswt_tasktip_window

0xa4f1,	// (0x00013c8b) bg_popup_window_pane_cp18

0xd8dd,	// (0x00017077) eswt_control_pane_g1_ParamLimits

0xd8dd,	// (0x00017077) eswt_control_pane_g1

0xd8ea,	// (0x00017084) eswt_control_pane_g2_ParamLimits

0xd8ea,	// (0x00017084) eswt_control_pane_g2

0xd8f7,	// (0x00017091) eswt_control_pane_g3_ParamLimits

0xd8f7,	// (0x00017091) eswt_control_pane_g3

0xd904,	// (0x0001709e) eswt_control_pane_g4_ParamLimits

0xd904,	// (0x0001709e) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x0001939b) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x0001939b) eswt_control_pane_g

0x870b,	// (0x00011ea5) bg_button_pane_ParamLimits

0x870b,	// (0x00011ea5) bg_button_pane

0x7f1b,	// (0x000116b5) common_borders_pane_copy2_ParamLimits

0x7f1b,	// (0x000116b5) common_borders_pane_copy2

0xd911,	// (0x000170ab) control_button_pane_g1_ParamLimits

0xd911,	// (0x000170ab) control_button_pane_g1

0xd91d,	// (0x000170b7) control_button_pane_g2_ParamLimits

0xd91d,	// (0x000170b7) control_button_pane_g2

0xd929,	// (0x000170c3) control_button_pane_g3_ParamLimits

0xd929,	// (0x000170c3) control_button_pane_g3

0x0002,

0xfc0a,	// (0x000193a4) control_button_pane_g_ParamLimits

0xfc0a,	// (0x000193a4) control_button_pane_g

0xd93d,	// (0x000170d7) control_button_pane_t1

0xd94b,	// (0x000170e5) control_button_pane_t2

0x0001,

0xfc11,	// (0x000193ab) control_button_pane_t

0xa3cd,	// (0x00013b67) bg_button_pane_g1

0xa3dd,	// (0x00013b77) bg_button_pane_g2

0xa3d5,	// (0x00013b6f) bg_button_pane_g3

0xa3ed,	// (0x00013b87) bg_button_pane_g4

0xa3e5,	// (0x00013b7f) bg_button_pane_g5

0xa3f5,	// (0x00013b8f) bg_button_pane_g6

0xa3fd,	// (0x00013b97) bg_button_pane_g7

0xa40d,	// (0x00013ba7) bg_button_pane_g8

0xa405,	// (0x00013b9f) bg_button_pane_g9

0x0008,

0xf872,	// (0x0001900c) bg_button_pane_g

0xcd87,	// (0x00016521) common_borders_pane_ParamLimits

0xcd87,	// (0x00016521) common_borders_pane

0xd8dd,	// (0x00017077) eswt_control_pane_g1_copy1_ParamLimits

0xd8dd,	// (0x00017077) eswt_control_pane_g1_copy1

0xd8ea,	// (0x00017084) eswt_control_pane_g2_copy1_ParamLimits

0xd8ea,	// (0x00017084) eswt_control_pane_g2_copy1

0xd8f7,	// (0x00017091) eswt_control_pane_g3_copy1_ParamLimits

0xd8f7,	// (0x00017091) eswt_control_pane_g3_copy1

0xd904,	// (0x0001709e) eswt_control_pane_g4_copy1_ParamLimits

0xd904,	// (0x0001709e) eswt_control_pane_g4_copy1

0xcdc2,	// (0x0001655c) bg_eswt_ctrl_canvas_pane_g1

0xcd87,	// (0x00016521) common_borders_pane_cp2_ParamLimits

0xcd87,	// (0x00016521) common_borders_pane_cp2

0xcd87,	// (0x00016521) common_borders_pane_cp3_ParamLimits

0xcd87,	// (0x00016521) common_borders_pane_cp3

0xd959,	// (0x000170f3) separator_horizontal_pane

0xd961,	// (0x000170fb) separator_vertical_pane

0xd8dd,	// (0x00017077) eswt_control_pane_g1_copy2_ParamLimits

0xd8dd,	// (0x00017077) eswt_control_pane_g1_copy2

0xd8ea,	// (0x00017084) eswt_control_pane_g2_copy2_ParamLimits

0xd8ea,	// (0x00017084) eswt_control_pane_g2_copy2

0xd8f7,	// (0x00017091) eswt_control_pane_g3_copy2_ParamLimits

0xd8f7,	// (0x00017091) eswt_control_pane_g3_copy2

0xd904,	// (0x0001709e) eswt_control_pane_g4_copy2_ParamLimits

0xd904,	// (0x0001709e) eswt_control_pane_g4_copy2

0x7830,	// (0x00010fca) common_borders_pane_cp4

0xd96a,	// (0x00017104) separator_horizontal_pane_g1

0xd973,	// (0x0001710d) separator_horizontal_pane_g2

0xd97c,	// (0x00017116) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x000193b0) separator_horizontal_pane_g

0xd8dd,	// (0x00017077) eswt_control_pane_g1_copy3_ParamLimits

0xd8dd,	// (0x00017077) eswt_control_pane_g1_copy3

0xd8ea,	// (0x00017084) eswt_control_pane_g2_copy3_ParamLimits

0xd8ea,	// (0x00017084) eswt_control_pane_g2_copy3

0xd8f7,	// (0x00017091) eswt_control_pane_g3_copy3_ParamLimits

0xd8f7,	// (0x00017091) eswt_control_pane_g3_copy3

0xd904,	// (0x0001709e) eswt_control_pane_g4_copy3_ParamLimits

0xd904,	// (0x0001709e) eswt_control_pane_g4_copy3

0x7830,	// (0x00010fca) common_borders_pane_cp5

0xd985,	// (0x0001711f) separator_vertical_pane_g1

0xd98e,	// (0x00017128) separator_vertical_pane_g2

0xd997,	// (0x00017131) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x000193b7) separator_vertical_pane_g

0xd8dd,	// (0x00017077) eswt_control_pane_g1_copy4_ParamLimits

0xd8dd,	// (0x00017077) eswt_control_pane_g1_copy4

0xd8ea,	// (0x00017084) eswt_control_pane_g2_copy4_ParamLimits

0xd8ea,	// (0x00017084) eswt_control_pane_g2_copy4

0xd8f7,	// (0x00017091) eswt_control_pane_g3_copy4_ParamLimits

0xd8f7,	// (0x00017091) eswt_control_pane_g3_copy4

0xd904,	// (0x0001709e) eswt_control_pane_g4_copy4_ParamLimits

0xd904,	// (0x0001709e) eswt_control_pane_g4_copy4

0xd9a0,	// (0x0001713a) eswt_ctrl_combo_button_pane

0xd9a8,	// (0x00017142) eswt_ctrl_input_pane

0xd9b0,	// (0x0001714a) popup_choice_list_window_cp70

0xd9b8,	// (0x00017152) eswt_ctrl_input_pane_t1

0x7830,	// (0x00010fca) input_focus_pane_cp70

0xcd87,	// (0x00016521) bg_button_pane_cp70_ParamLimits

0xcd87,	// (0x00016521) bg_button_pane_cp70

0xd9c6,	// (0x00017160) eswt_ctrl_combo_button_pane_g1

0xd9ce,	// (0x00017168) wait_bar_pane_cp70

0xa4f1,	// (0x00013c8b) bg_popup_window_pane_cp70_ParamLimits

0xa4f1,	// (0x00013c8b) bg_popup_window_pane_cp70

0xd9d6,	// (0x00017170) popup_eswt_tasktip_window_t1

0xd9ec,	// (0x00017186) wait_bar_pane_cp71_ParamLimits

0xd9ec,	// (0x00017186) wait_bar_pane_cp71

0xd9f8,	// (0x00017192) grid_eswt_app_pane

0x8d1e,	// (0x000124b8) scroll_pane_cp70

0xda01,	// (0x0001719b) cell_eswt_app_pane_ParamLimits

0xda01,	// (0x0001719b) cell_eswt_app_pane

0xda31,	// (0x000171cb) cell_eswt_app_pane_g1_ParamLimits

0xda31,	// (0x000171cb) cell_eswt_app_pane_g1

0xda60,	// (0x000171fa) cell_eswt_app_pane_g2_ParamLimits

0xda60,	// (0x000171fa) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x000193be) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x000193be) cell_eswt_app_pane_g

0xda89,	// (0x00017223) cell_eswt_app_pane_t1_ParamLimits

0xda89,	// (0x00017223) cell_eswt_app_pane_t1

0xdabb,	// (0x00017255) grid_highlight_pane_cp70_ParamLimits

0xdabb,	// (0x00017255) grid_highlight_pane_cp70

0x9452,	// (0x00012bec) set_content_pane_g1

0x981d,	// (0x00012fb7) status_small_volume_pane

0x6ecd,	// (0x00010667) status_small_volume_pane_g1

0x6ed5,	// (0x0001066f) volume_small2_pane

0x6ede,	// (0x00010678) volume_small2_pane_g1

0x6ee7,	// (0x00010681) volume_small2_pane_g2

0x6ef0,	// (0x0001068a) volume_small2_pane_g3

0x6ef9,	// (0x00010693) volume_small2_pane_g4

0x6f02,	// (0x0001069c) volume_small2_pane_g5

0x6f0b,	// (0x000106a5) volume_small2_pane_g6

0x6f14,	// (0x000106ae) volume_small2_pane_g7

0x6f1d,	// (0x000106b7) volume_small2_pane_g8

0x6f26,	// (0x000106c0) volume_small2_pane_g9

0x6f2f,	// (0x000106c9) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x000193c3) volume_small2_pane_g

0xd188,	// (0x00016922) fep_vkb_top_text_pane_g1_ParamLimits

0xd1a3,	// (0x0001693d) fep_vkb_top_text_pane_t1_ParamLimits

0xd3fd,	// (0x00016b97) popup_preview_fixed_window_g3_ParamLimits

0xd3fd,	// (0x00016b97) popup_preview_fixed_window_g3

0x9df6,	// (0x00013590) popup_toolbar_trans_pane

0xb893,	// (0x0001502d) aid_height_set_list_ParamLimits

0xb8a4,	// (0x0001503e) aid_size_parent_ParamLimits

0x98fb,	// (0x00013095) list_highlight_pane_cp2_ParamLimits

0x9452,	// (0x00012bec) set_content_pane_g1_ParamLimits

0xbb45,	// (0x000152df) list_single_image_pane_ParamLimits

0xbb45,	// (0x000152df) list_single_image_pane

0xdac7,	// (0x00017261) aid_size_cell_image_ParamLimits

0xdac7,	// (0x00017261) aid_size_cell_image

0xdad4,	// (0x0001726e) grid_single_image_pane_ParamLimits

0xdad4,	// (0x0001726e) grid_single_image_pane

0x836e,	// (0x00011b08) list_single_image_pane_g1_ParamLimits

0x836e,	// (0x00011b08) list_single_image_pane_g1

0xdae2,	// (0x0001727c) list_single_image_pane_g2_ParamLimits

0xdae2,	// (0x0001727c) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x000193d8) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x000193d8) list_single_image_pane_g

0x82a5,	// (0x00011a3f) list_single_image_pane_t1_ParamLimits

0x82a5,	// (0x00011a3f) list_single_image_pane_t1

0xdaf6,	// (0x00017290) cell_image_list_pane_ParamLimits

0xdaf6,	// (0x00017290) cell_image_list_pane

0xdb09,	// (0x000172a3) cell_image_list_pane_g1

0xdb12,	// (0x000172ac) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x000193dd) cell_image_list_pane_g

0xdb1b,	// (0x000172b5) aid_size_cell_tb_trans_pane

0x870b,	// (0x00011ea5) bg_tb_trans_pane

0xdb2d,	// (0x000172c7) grid_tb_trans_pane

0xa3cd,	// (0x00013b67) bg_tb_trans_pane_g1

0xa3dd,	// (0x00013b77) bg_tb_trans_pane_g2

0xa3d5,	// (0x00013b6f) bg_tb_trans_pane_g3

0xa3ed,	// (0x00013b87) bg_tb_trans_pane_g4

0xa3e5,	// (0x00013b7f) bg_tb_trans_pane_g5

0xa40d,	// (0x00013ba7) bg_tb_trans_pane_g6

0xa405,	// (0x00013b9f) bg_tb_trans_pane_g7

0xa3f5,	// (0x00013b8f) bg_tb_trans_pane_g8

0xa3fd,	// (0x00013b97) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x000193e2) bg_tb_trans_pane_g

0xdb41,	// (0x000172db) cell_toolbar_trans_pane_ParamLimits

0xdb41,	// (0x000172db) cell_toolbar_trans_pane

0xcdc2,	// (0x0001655c) cell_toolbar_trans_pane_g1

0xc93d,	// (0x000160d7) list_form2_midp_pane_t1

0xc94b,	// (0x000160e5) list_form2_midp_pane_t2

0x0001,

0xfae5,	// (0x0001927f) list_form2_midp_pane_t

0xc959,	// (0x000160f3) scroll_pane_cp51_ParamLimits

0xcb64,	// (0x000162fe) form2_midp_wait_pane_g1

0xcb6d,	// (0x00016307) form2_midp_wait_pane_g2

0xcb76,	// (0x00016310) form2_midp_wait_pane_g3

0x0002,

0xfafa,	// (0x00019294) form2_midp_wait_pane_g

0x7924,	// (0x000110be) list_highlight_pane_cp21_ParamLimits

0xcbcd,	// (0x00016367) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xcbdc,	// (0x00016376) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbacd,	// (0x00015267) list_single_2graphic_im_pane_ParamLimits

0xbacd,	// (0x00015267) list_single_2graphic_im_pane

0xdb67,	// (0x00017301) list_single_2graphic_im_pane_g1_ParamLimits

0xdb67,	// (0x00017301) list_single_2graphic_im_pane_g1

0xdb78,	// (0x00017312) list_single_2graphic_im_pane_g2_ParamLimits

0xdb78,	// (0x00017312) list_single_2graphic_im_pane_g2

0xdb84,	// (0x0001731e) list_single_2graphic_im_pane_g3_ParamLimits

0xdb84,	// (0x0001731e) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x000193f5) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x000193f5) list_single_2graphic_im_pane_g

0xdba4,	// (0x0001733e) list_single_2graphic_im_pane_t1_ParamLimits

0xdba4,	// (0x0001733e) list_single_2graphic_im_pane_t1

0xd409,	// (0x00016ba3) list_single_graphic_2heading_pane_fp_ParamLimits

0xd409,	// (0x00016ba3) list_single_graphic_2heading_pane_fp

0xd44d,	// (0x00016be7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd44d,	// (0x00016be7) list_single_graphic_2heading_pane_fp_g1

0xd41e,	// (0x00016bb8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd41e,	// (0x00016bb8) list_single_graphic_2heading_pane_fp_g2

0x8731,	// (0x00011ecb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8731,	// (0x00011ecb) list_single_graphic_2heading_pane_fp_g3

0x873d,	// (0x00011ed7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x873d,	// (0x00011ed7) list_single_graphic_2heading_pane_fp_g4

0xd42a,	// (0x00016bc4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd42a,	// (0x00016bc4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0001931c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0001931c) list_single_graphic_2heading_pane_fp_g

0xdbd5,	// (0x0001736f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdbd5,	// (0x0001736f) list_single_graphic_2heading_pane_fp_t1

0xd485,	// (0x00016c1f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd485,	// (0x00016c1f) list_single_graphic_2heading_pane_fp_t2

0xdbeb,	// (0x00017385) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdbeb,	// (0x00017385) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x000193fe) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x000193fe) list_single_graphic_2heading_pane_fp_t

0xce4e,	// (0x000165e8) fep_hwr_write_pane_g5_ParamLimits

0xce4e,	// (0x000165e8) fep_hwr_write_pane_g5

0xce5a,	// (0x000165f4) fep_hwr_write_pane_g6_ParamLimits

0xce5a,	// (0x000165f4) fep_hwr_write_pane_g6

0xd8ac,	// (0x00017046) eswt_shell_pane_ParamLimits

0xa4f1,	// (0x00013c8b) bg_popup_window_pane_cp18_ParamLimits

0xb7c4,	// (0x00014f5e) heading_pane_cp70

0xd9d6,	// (0x00017170) popup_eswt_tasktip_window_t1_ParamLimits

0x9f15,	// (0x000136af) aid_touch_tab_arrow_left

0x9f21,	// (0x000136bb) aid_touch_tab_arrow_right

0x786c,	// (0x00011006) title_pane_g3_ParamLimits

0x786c,	// (0x00011006) title_pane_g3

0x85ea,	// (0x00011d84) set_value_pane_g1

0x9df6,	// (0x00013590) popup_toolbar_trans_pane_ParamLimits

0xdb1b,	// (0x000172b5) aid_size_cell_tb_trans_pane_ParamLimits

0x870b,	// (0x00011ea5) bg_tb_trans_pane_ParamLimits

0xdb2d,	// (0x000172c7) grid_tb_trans_pane_ParamLimits

0x7bc7,	// (0x00011361) cont_note_pane_ParamLimits

0x7bc7,	// (0x00011361) cont_note_pane

0x7f1b,	// (0x000116b5) cont_snote2_single_text_pane_ParamLimits

0x7f1b,	// (0x000116b5) cont_snote2_single_text_pane

0x7f1b,	// (0x000116b5) cont_snote2_single_graphic_pane_ParamLimits

0x7f1b,	// (0x000116b5) cont_snote2_single_graphic_pane

0xab0c,	// (0x000142a6) cont_note_wait_pane_ParamLimits

0xab0c,	// (0x000142a6) cont_note_wait_pane

0xab0c,	// (0x000142a6) cont_note_image_pane_ParamLimits

0xab0c,	// (0x000142a6) cont_note_image_pane

0xdc01,	// (0x0001739b) popup_note2_window_g1_ParamLimits

0xdc01,	// (0x0001739b) popup_note2_window_g1

0xdc32,	// (0x000173cc) popup_note2_window_t1_ParamLimits

0xdc32,	// (0x000173cc) popup_note2_window_t1

0xdc77,	// (0x00017411) popup_note2_window_t2_ParamLimits

0xdc77,	// (0x00017411) popup_note2_window_t2

0xdcbc,	// (0x00017456) popup_note2_window_t3_ParamLimits

0xdcbc,	// (0x00017456) popup_note2_window_t3

0xdd01,	// (0x0001749b) popup_note2_window_t4_ParamLimits

0xdd01,	// (0x0001749b) popup_note2_window_t4

0x7c4b,	// (0x000113e5) popup_note2_window_t5_ParamLimits

0x7c4b,	// (0x000113e5) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0001940a) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0001940a) popup_note2_window_t

0xdd30,	// (0x000174ca) popup_note2_image_window_g1_ParamLimits

0xdd30,	// (0x000174ca) popup_note2_image_window_g1

0xdd3c,	// (0x000174d6) popup_note2_image_window_g2_ParamLimits

0xdd3c,	// (0x000174d6) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x00019415) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x00019415) popup_note2_image_window_g

0xdd4e,	// (0x000174e8) popup_note2_image_window_t1_ParamLimits

0xdd4e,	// (0x000174e8) popup_note2_image_window_t1

0xdd66,	// (0x00017500) popup_note2_image_window_t2_ParamLimits

0xdd66,	// (0x00017500) popup_note2_image_window_t2

0xdd7e,	// (0x00017518) popup_note2_image_window_t3_ParamLimits

0xdd7e,	// (0x00017518) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x0001941a) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x0001941a) popup_note2_image_window_t

0xab1a,	// (0x000142b4) popup_note2_wait_window_g1_ParamLimits

0xab1a,	// (0x000142b4) popup_note2_wait_window_g1

0xdd9a,	// (0x00017534) popup_note2_wait_window_g2_ParamLimits

0xdd9a,	// (0x00017534) popup_note2_wait_window_g2

0xab32,	// (0x000142cc) popup_note2_wait_window_g3_ParamLimits

0xab32,	// (0x000142cc) popup_note2_wait_window_g3

0x0002,

0xfc87,	// (0x00019421) popup_note2_wait_window_g_ParamLimits

0xfc87,	// (0x00019421) popup_note2_wait_window_g

0xdda6,	// (0x00017540) popup_note2_wait_window_t1_ParamLimits

0xdda6,	// (0x00017540) popup_note2_wait_window_t1

0xddc4,	// (0x0001755e) popup_note2_wait_window_t2_ParamLimits

0xddc4,	// (0x0001755e) popup_note2_wait_window_t2

0xdde2,	// (0x0001757c) popup_note2_wait_window_t3_ParamLimits

0xdde2,	// (0x0001757c) popup_note2_wait_window_t3

0xddf4,	// (0x0001758e) popup_note2_wait_window_t4_ParamLimits

0xddf4,	// (0x0001758e) popup_note2_wait_window_t4

0x0003,

0xfc8e,	// (0x00019428) popup_note2_wait_window_t_ParamLimits

0xfc8e,	// (0x00019428) popup_note2_wait_window_t

0xde06,	// (0x000175a0) wait_bar2_pane_ParamLimits

0xde06,	// (0x000175a0) wait_bar2_pane

0xde1e,	// (0x000175b8) popup_snote2_single_text_window_g1_ParamLimits

0xde1e,	// (0x000175b8) popup_snote2_single_text_window_g1

0xde46,	// (0x000175e0) popup_snote2_single_text_window_t1_ParamLimits

0xde46,	// (0x000175e0) popup_snote2_single_text_window_t1

0xde92,	// (0x0001762c) popup_snote2_single_text_window_t2_ParamLimits

0xde92,	// (0x0001762c) popup_snote2_single_text_window_t2

0xdede,	// (0x00017678) popup_snote2_single_text_window_t3_ParamLimits

0xdede,	// (0x00017678) popup_snote2_single_text_window_t3

0xdf1f,	// (0x000176b9) popup_snote2_single_text_window_t4_ParamLimits

0xdf1f,	// (0x000176b9) popup_snote2_single_text_window_t4

0xdf55,	// (0x000176ef) popup_snote2_single_text_window_t5_ParamLimits

0xdf55,	// (0x000176ef) popup_snote2_single_text_window_t5

0x0004,

0xfc97,	// (0x00019431) popup_snote2_single_text_window_t_ParamLimits

0xfc97,	// (0x00019431) popup_snote2_single_text_window_t

0xdf80,	// (0x0001771a) popup_snote2_single_graphic_window_g1_ParamLimits

0xdf80,	// (0x0001771a) popup_snote2_single_graphic_window_g1

0xdfa8,	// (0x00017742) popup_snote2_single_graphic_window_g2_ParamLimits

0xdfa8,	// (0x00017742) popup_snote2_single_graphic_window_g2

0x0001,

0xfca2,	// (0x0001943c) popup_snote2_single_graphic_window_g_ParamLimits

0xfca2,	// (0x0001943c) popup_snote2_single_graphic_window_g

0xdfd0,	// (0x0001776a) popup_snote2_single_graphic_window_t1_ParamLimits

0xdfd0,	// (0x0001776a) popup_snote2_single_graphic_window_t1

0xe01c,	// (0x000177b6) popup_snote2_single_graphic_window_t2_ParamLimits

0xe01c,	// (0x000177b6) popup_snote2_single_graphic_window_t2

0xdede,	// (0x00017678) popup_snote2_single_graphic_window_t3_ParamLimits

0xdede,	// (0x00017678) popup_snote2_single_graphic_window_t3

0xdf1f,	// (0x000176b9) popup_snote2_single_graphic_window_t4_ParamLimits

0xdf1f,	// (0x000176b9) popup_snote2_single_graphic_window_t4

0xdf55,	// (0x000176ef) popup_snote2_single_graphic_window_t5_ParamLimits

0xdf55,	// (0x000176ef) popup_snote2_single_graphic_window_t5

0x0004,

0xfca7,	// (0x00019441) popup_snote2_single_graphic_window_t_ParamLimits

0xfca7,	// (0x00019441) popup_snote2_single_graphic_window_t

0xc81c,	// (0x00015fb6) clock_nsta_pane_cp2_t1

0xc81c,	// (0x00015fb6) clock_nsta_pane_cp2_t2

0x0001,

0xfabb,	// (0x00019255) clock_nsta_pane_cp2_t

0x8725,	// (0x00011ebf) form_field_data_wide_pane_g1_ParamLimits

0x8731,	// (0x00011ecb) form_field_data_wide_pane_g2_ParamLimits

0x8731,	// (0x00011ecb) form_field_data_wide_pane_g2

0x873d,	// (0x00011ed7) form_field_data_wide_pane_g3_ParamLimits

0x873d,	// (0x00011ed7) form_field_data_wide_pane_g3

0x0002,

0xf68e,	// (0x00018e28) form_field_data_wide_pane_g_ParamLimits

0xf68e,	// (0x00018e28) form_field_data_wide_pane_g

0xc6f5,	// (0x00015e8f) grid_touch_3_pane_ParamLimits

0xc6f5,	// (0x00015e8f) grid_touch_3_pane

0xe068,	// (0x00017802) cell_touch_3_pane_ParamLimits

0xe068,	// (0x00017802) cell_touch_3_pane

0xcdc2,	// (0x0001655c) cell_touch_3_pane_g1

0xcdc2,	// (0x0001655c) cell_touch_3_pane_g2

0x0001,

0xfb40,	// (0x000192da) cell_touch_3_pane_g

0x7c7d,	// (0x00011417) cont_query_data_pane

0x7c85,	// (0x0001141f) cont_query_data_pane_cp1

0xe096,	// (0x00017830) button_value_adjust_pane_cp7

0xe09e,	// (0x00017838) query_popup_pane_cp3

0x8fd6,	// (0x00012770) bg_popup_sub_pane_cp22_ParamLimits

0x62a8,	// (0x0000fa42) navi_navi_volume_pane_cp2

0x62c3,	// (0x0000fa5d) popup_side_volume_key_window_g2

0x62d2,	// (0x0000fa6c) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x00018ebe) popup_side_volume_key_window_g

0x62ef,	// (0x0000fa89) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x00018ec5) popup_side_volume_key_window_t

0x931c,	// (0x00012ab6) popup_side_volume_key_window_ParamLimits

0x832e,	// (0x00011ac8) list_double_graphic_pane_g4_ParamLimits

0x832e,	// (0x00011ac8) list_double_graphic_pane_g4

0xbb0a,	// (0x000152a4) list_single_2heading_msg_pane_ParamLimits

0xbb0a,	// (0x000152a4) list_single_2heading_msg_pane

0xe0cd,	// (0x00017867) list_single_2heading_msg_pane_g1_ParamLimits

0xe0cd,	// (0x00017867) list_single_2heading_msg_pane_g1

0x94b6,	// (0x00012c50) list_single_2heading_msg_pane_g2_ParamLimits

0x94b6,	// (0x00012c50) list_single_2heading_msg_pane_g2

0xe0d9,	// (0x00017873) list_single_2heading_msg_pane_g3_ParamLimits

0xe0d9,	// (0x00017873) list_single_2heading_msg_pane_g3

0xe0e5,	// (0x0001787f) list_single_2heading_msg_pane_g4_ParamLimits

0xe0e5,	// (0x0001787f) list_single_2heading_msg_pane_g4

0x0003,

0xfcb2,	// (0x0001944c) list_single_2heading_msg_pane_g_ParamLimits

0xfcb2,	// (0x0001944c) list_single_2heading_msg_pane_g

0xe0fd,	// (0x00017897) list_single_2heading_msg_pane_t1_ParamLimits

0xe0fd,	// (0x00017897) list_single_2heading_msg_pane_t1

0xe125,	// (0x000178bf) list_single_2heading_msg_pane_t2_ParamLimits

0xe125,	// (0x000178bf) list_single_2heading_msg_pane_t2

0xe154,	// (0x000178ee) list_single_2heading_msg_pane_t3_ParamLimits

0xe154,	// (0x000178ee) list_single_2heading_msg_pane_t3

0xe18d,	// (0x00017927) list_single_2heading_msg_pane_t4_ParamLimits

0xe18d,	// (0x00017927) list_single_2heading_msg_pane_t4

0x0003,

0xfcbb,	// (0x00019455) list_single_2heading_msg_pane_t_ParamLimits

0xfcbb,	// (0x00019455) list_single_2heading_msg_pane_t

0x7878,	// (0x00011012) title_pane_g4_ParamLimits

0x7878,	// (0x00011012) title_pane_g4

0x60b6,	// (0x0000f850) title_pane_stacon_g3_ParamLimits

0x60b6,	// (0x0000f850) title_pane_stacon_g3

0xdb98,	// (0x00017332) list_single_2graphic_im_pane_g4_ParamLimits

0xdb98,	// (0x00017332) list_single_2graphic_im_pane_g4

0xb56b,	// (0x00014d05) popup_side_volume_key_window_cp

0xbe71,	// (0x0001560b) main_idle_act2_pane_t1

0x66d1,	// (0x0000fe6b) toolbar_button_pane_g10

0x8113,	// (0x000118ad) popup_toolbar_window_cp1

0xc80d,	// (0x00015fa7) clock_nsta_pane_cp_t1

0xc80d,	// (0x00015fa7) clock_nsta_pane_cp_t2

0x0001,

0xfab6,	// (0x00019250) clock_nsta_pane_cp_t

0x62a8,	// (0x0000fa42) navi_navi_volume_pane_cp2_ParamLimits

0x62b7,	// (0x0000fa51) popup_side_volume_key_window_g1_ParamLimits

0x62c3,	// (0x0000fa5d) popup_side_volume_key_window_g2_ParamLimits

0x62d2,	// (0x0000fa6c) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x00018ebe) popup_side_volume_key_window_g_ParamLimits

0x6b39,	// (0x000102d3) fep_hwr_aid_pane

0x6be0,	// (0x0001037a) bg_fep_hwr_top_pane_g4_ParamLimits

0xce1e,	// (0x000165b8) fep_hwr_top_pane_g1_ParamLimits

0xce30,	// (0x000165ca) fep_hwr_top_pane_g2_ParamLimits

0x6c00,	// (0x0001039a) fep_hwr_top_pane_g3_ParamLimits

0xfb0b,	// (0x000192a5) fep_hwr_top_pane_g_ParamLimits

0x6c15,	// (0x000103af) fep_hwr_top_text_pane_ParamLimits

0xb32e,	// (0x00014ac8) aid_touch_tab_arrow_arrow_2

0xb337,	// (0x00014ad1) aid_touch_tab_arrow_left_2

0x6b4d,	// (0x000102e7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6b84,	// (0x0001031e) fep_hwr_prediction_pane

0xcf90,	// (0x0001672a) fep_vkb_prediction_pane

0xd094,	// (0x0001682e) fep_vkb_side_pane_g3_ParamLimits

0xd094,	// (0x0001682e) fep_vkb_side_pane_g3

0x6d90,	// (0x0001052a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6dfc,	// (0x00010596) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6e09,	// (0x000105a3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x00019354) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6f38,	// (0x000106d2) fep_hwr_prediction_pane_g1

0x6f42,	// (0x000106dc) fep_hwr_prediction_pane_g2

0x6f4a,	// (0x000106e4) fep_hwr_prediction_pane_g3

0x6f52,	// (0x000106ec) fep_hwr_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0001945e) fep_hwr_prediction_pane_g

0xe1b2,	// (0x0001794c) fep_vkb_prediction_pane_g1

0xe1bc,	// (0x00017956) fep_vkb_prediction_pane_g2

0xe1c4,	// (0x0001795e) fep_vkb_prediction_pane_g3

0xe1cc,	// (0x00017966) fep_vkb_prediction_pane_g4

0x0003,

0xfccd,	// (0x00019467) fep_vkb_prediction_pane_g

0x69b9,	// (0x00010153) slider_set_pane_g3

0x69cd,	// (0x00010167) slider_set_pane_g4

0x69e5,	// (0x0001017f) slider_set_pane_g5

0x69b9,	// (0x00010153) slider_set_pane_g6

0x69fb,	// (0x00010195) slider_set_pane_g7

0xba09,	// (0x000151a3) slider_form_pane_g3

0xba12,	// (0x000151ac) slider_form_pane_g4

0xba1a,	// (0x000151b4) slider_form_pane_g5

0xba09,	// (0x000151a3) slider_form_pane_g6

0xba22,	// (0x000151bc) slider_form_pane_g7

0xc14e,	// (0x000158e8) slider_set_pane_vc_g3

0xc157,	// (0x000158f1) slider_set_pane_vc_g4

0xc160,	// (0x000158fa) slider_set_pane_vc_g5

0xc14e,	// (0x000158e8) slider_set_pane_vc_g6

0xc169,	// (0x00015903) slider_set_pane_vc_g7

0xc14e,	// (0x000158e8) slider_form_pane_vc_g1

0xc157,	// (0x000158f1) slider_form_pane_vc_g2

0xc160,	// (0x000158fa) slider_form_pane_vc_g3

0xc14e,	// (0x000158e8) slider_form_pane_vc_g4

0xc511,	// (0x00015cab) slider_form_pane_vc_g5

0x0004,

0xfa8f,	// (0x00019229) slider_form_pane_vc_g

0x7830,	// (0x00010fca) main_idle_act3_pane

0xe1d4,	// (0x0001796e) ai3_links_pane

0xe1dd,	// (0x00017977) popup_ai3_data_window_ParamLimits

0xe1dd,	// (0x00017977) popup_ai3_data_window

0x7830,	// (0x00010fca) grid_ai3_links_pane

0xe1f7,	// (0x00017991) cell_ai3_links_pane_ParamLimits

0xe1f7,	// (0x00017991) cell_ai3_links_pane

0xe20f,	// (0x000179a9) bg_popup_sub_pane_cp11

0xe21c,	// (0x000179b6) cell_ai3_links_pane_g1

0x7830,	// (0x00010fca) bg_popup_sub_pane_cp12

0xe241,	// (0x000179db) heading_ai3_data_pane

0xe249,	// (0x000179e3) list_ai3_gene_pane

0xe255,	// (0x000179ef) popup_ai3_data_window_g1

0xe25d,	// (0x000179f7) heading_ai3_data_pane_g1

0xe265,	// (0x000179ff) heading_ai3_data_pane_t1

0xe273,	// (0x00017a0d) list_double_ai3_gene_pane_ParamLimits

0xe273,	// (0x00017a0d) list_double_ai3_gene_pane

0xe280,	// (0x00017a1a) list_single_ai3_gene_pane_ParamLimits

0xe280,	// (0x00017a1a) list_single_ai3_gene_pane

0xcd87,	// (0x00016521) list_highlight_pane_cp7_ParamLimits

0xcd87,	// (0x00016521) list_highlight_pane_cp7

0xe28d,	// (0x00017a27) list_single_a13_gene_pane_t1_ParamLimits

0xe28d,	// (0x00017a27) list_single_a13_gene_pane_t1

0xe2a4,	// (0x00017a3e) list_single_ai3_gene_pane_g1

0xe2ad,	// (0x00017a47) list_single_ai3_gene_pane_g2

0x0001,

0xfcd6,	// (0x00019470) list_single_ai3_gene_pane_g

0xe2b5,	// (0x00017a4f) list_double_ai3_gene_pane_g1_ParamLimits

0xe2b5,	// (0x00017a4f) list_double_ai3_gene_pane_g1

0xe2c1,	// (0x00017a5b) list_double_ai3_gene_pane_t1_ParamLimits

0xe2c1,	// (0x00017a5b) list_double_ai3_gene_pane_t1

0xe2dd,	// (0x00017a77) list_double_ai3_gene_pane_t2_ParamLimits

0xe2dd,	// (0x00017a77) list_double_ai3_gene_pane_t2

0xe2f3,	// (0x00017a8d) list_double_ai3_gene_pane_t3_ParamLimits

0xe2f3,	// (0x00017a8d) list_double_ai3_gene_pane_t3

0x0002,

0xfcdb,	// (0x00019475) list_double_ai3_gene_pane_t_ParamLimits

0xfcdb,	// (0x00019475) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe0af,	// (0x00017849) aid_size_min_col_2

0xe0b9,	// (0x00017853) aid_size_min_msg_ParamLimits

0xe0b9,	// (0x00017853) aid_size_min_msg

0xd194,	// (0x0001692e) fep_vkb_top_text_pane_g2_ParamLimits

0xd194,	// (0x0001692e) fep_vkb_top_text_pane_g2

0x0001,

0xfb3b,	// (0x000192d5) fep_vkb_top_text_pane_g_ParamLimits

0xfb3b,	// (0x000192d5) fep_vkb_top_text_pane_g

0x7830,	// (0x00010fca) main_hc_apps_shell_pane

0xe310,	// (0x00017aaa) grid_hc_apps_pane_ParamLimits

0xe310,	// (0x00017aaa) grid_hc_apps_pane

0xe31f,	// (0x00017ab9) list_hc_apps_pane

0xe327,	// (0x00017ac1) scroll_pane_cp37_ParamLimits

0xe327,	// (0x00017ac1) scroll_pane_cp37

0xe333,	// (0x00017acd) cell_hc_apps_pane_ParamLimits

0xe333,	// (0x00017acd) cell_hc_apps_pane

0xe3e1,	// (0x00017b7b) cell_hc_apps_pane_g1_ParamLimits

0xe3e1,	// (0x00017b7b) cell_hc_apps_pane_g1

0xe412,	// (0x00017bac) cell_hc_apps_pane_g2_ParamLimits

0xe412,	// (0x00017bac) cell_hc_apps_pane_g2

0xe42e,	// (0x00017bc8) cell_hc_apps_pane_g3_ParamLimits

0xe42e,	// (0x00017bc8) cell_hc_apps_pane_g3

0x0002,

0xfce2,	// (0x0001947c) cell_hc_apps_pane_g_ParamLimits

0xfce2,	// (0x0001947c) cell_hc_apps_pane_g

0xe450,	// (0x00017bea) cell_hc_apps_pane_t1_ParamLimits

0xe450,	// (0x00017bea) cell_hc_apps_pane_t1

0x7bc7,	// (0x00011361) grid_highlight_pane_cp10_ParamLimits

0x7bc7,	// (0x00011361) grid_highlight_pane_cp10

0xe490,	// (0x00017c2a) list_single_hc_apps_pane_ParamLimits

0xe490,	// (0x00017c2a) list_single_hc_apps_pane

0xe4ec,	// (0x00017c86) list_single_hc_apps_pane_g1

0xe505,	// (0x00017c9f) list_single_hc_apps_pane_g2

0x0001,

0xfce9,	// (0x00019483) list_single_hc_apps_pane_g

0xe51e,	// (0x00017cb8) list_single_hc_apps_pane_g2_copy1

0xe53a,	// (0x00017cd4) list_single_hc_apps_pane_t1

0x7924,	// (0x000110be) bg_set_opt_pane_cp_ParamLimits

0x5fdd,	// (0x0000f777) setting_slider_pane_t1_ParamLimits

0x5ff6,	// (0x0000f790) setting_slider_pane_t2_ParamLimits

0x6010,	// (0x0000f7aa) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x00018d10) setting_slider_pane_t_ParamLimits

0x6028,	// (0x0000f7c2) slider_set_pane_ParamLimits

0x654d,	// (0x0000fce7) control_pane_g5_ParamLimits

0x654d,	// (0x0000fce7) control_pane_g5

0xb858,	// (0x00014ff2) slider_set_pane_g1_ParamLimits

0x69ad,	// (0x00010147) slider_set_pane_g2_ParamLimits

0x69b9,	// (0x00010153) slider_set_pane_g3_ParamLimits

0x69cd,	// (0x00010167) slider_set_pane_g4_ParamLimits

0x69e5,	// (0x0001017f) slider_set_pane_g5_ParamLimits

0x69b9,	// (0x00010153) slider_set_pane_g6_ParamLimits

0x69fb,	// (0x00010195) slider_set_pane_g7_ParamLimits

0xf970,	// (0x0001910a) slider_set_pane_g_ParamLimits

0x93fd,	// (0x00012b97) navi_icon_text_pane_ParamLimits

0x9ed6,	// (0x00013670) aid_fill_nsta_2_ParamLimits

0x9f15,	// (0x000136af) aid_touch_tab_arrow_left_ParamLimits

0x9f21,	// (0x000136bb) aid_touch_tab_arrow_right_ParamLimits

0x9f8d,	// (0x00013727) clock_nsta_pane_ParamLimits

0xb310,	// (0x00014aaa) navi_icon_pane_g1_ParamLimits

0xb31c,	// (0x00014ab6) navi_text_pane_t1_ParamLimits

0xc917,	// (0x000160b1) navi_icon_text_pane_g1_ParamLimits

0xc923,	// (0x000160bd) navi_icon_text_pane_t1_ParamLimits

0xe4ec,	// (0x00017c86) list_single_hc_apps_pane_g1_ParamLimits

0xe505,	// (0x00017c9f) list_single_hc_apps_pane_g2_ParamLimits

0xfce9,	// (0x00019483) list_single_hc_apps_pane_g_ParamLimits

0xe51e,	// (0x00017cb8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe53a,	// (0x00017cd4) list_single_hc_apps_pane_t1_ParamLimits

0x5ef1,	// (0x0000f68b) popup_toolbar2_fixed_window_ParamLimits

0x5ef1,	// (0x0000f68b) popup_toolbar2_fixed_window

0x9dec,	// (0x00013586) popup_toolbar2_float_window

0x7830,	// (0x00010fca) bg_popup_sub_pane_cp27

0xe568,	// (0x00017d02) grid_toolbar2_float_pane

0x7830,	// (0x00010fca) bg_popup_sub_pane_cp26

0xe568,	// (0x00017d02) grid_toolbar2_fixed_pane

0xe570,	// (0x00017d0a) cell_toolbar2_fixed_pane_ParamLimits

0xe570,	// (0x00017d0a) cell_toolbar2_fixed_pane

0xe580,	// (0x00017d1a) cell_toolbar2_fixed_pane_g1

0xe589,	// (0x00017d23) toolbar2_fixed_button_pane

0xa3cd,	// (0x00013b67) toolbar2_fixed_button_pane_g1

0xa3dd,	// (0x00013b77) toolbar2_fixed_button_pane_g2

0xa3d5,	// (0x00013b6f) toolbar2_fixed_button_pane_g3

0xa3ed,	// (0x00013b87) toolbar2_fixed_button_pane_g4

0xa3e5,	// (0x00013b7f) toolbar2_fixed_button_pane_g5

0xa3f5,	// (0x00013b8f) toolbar2_fixed_button_pane_g6

0xa3fd,	// (0x00013b97) toolbar2_fixed_button_pane_g7

0xa40d,	// (0x00013ba7) toolbar2_fixed_button_pane_g8

0xa405,	// (0x00013b9f) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0001900c) toolbar2_fixed_button_pane_g

0xe591,	// (0x00017d2b) cell_toolbar2_float_pane_ParamLimits

0xe591,	// (0x00017d2b) cell_toolbar2_float_pane

0xe5a2,	// (0x00017d3c) cell_toolbar2_float_pane_g1

0xe589,	// (0x00017d23) toolbar2_fixed_button_pane_cp

0xcef0,	// (0x0001668a) fep_vkb_accented_list_pane_ParamLimits

0xcef0,	// (0x0001668a) fep_vkb_accented_list_pane

0x6d70,	// (0x0001050a) bg_popup_fep_shadow_pane_g9

0x957d,	// (0x00012d17) bg_popup_fep_shadow_pane_cp3

0x89eb,	// (0x00012185) list_accented_list_pane

0xe5ab,	// (0x00017d45) list_single_accented_list_pane_ParamLimits

0xe5ab,	// (0x00017d45) list_single_accented_list_pane

0x957d,	// (0x00012d17) list_highlight_pane_cp10

0xe5bc,	// (0x00017d56) list_single_accented_list_pane_t1

0x9d3c,	// (0x000134d6) popup_slider_window_ParamLimits

0x9d3c,	// (0x000134d6) popup_slider_window

0xe0a6,	// (0x00017840) aid_indentation_list_msg

0xe676,	// (0x00017e10) bg_popup_window_pane_cp19

0xe6e0,	// (0x00017e7a) popup_slider_window_g1

0xe6fc,	// (0x00017e96) popup_slider_window_g2

0xe718,	// (0x00017eb2) popup_slider_window_g3

0x0005,

0xfcee,	// (0x00019488) popup_slider_window_g

0xe774,	// (0x00017f0e) popup_slider_window_t1

0xe7e8,	// (0x00017f82) small_volume_slider_vertical_pane

0xcdc2,	// (0x0001655c) small_volume_slider_vertical_pane_g1

0xcdc2,	// (0x0001655c) small_volume_slider_vertical_pane_g2

0xe804,	// (0x00017f9e) small_volume_slider_vertical_pane_g3

0x0002,

0xfd00,	// (0x0001949a) small_volume_slider_vertical_pane_g

0x5ca9,	// (0x0000f443) area_side_right_pane_ParamLimits

0x5ca9,	// (0x0000f443) area_side_right_pane

0x6f5a,	// (0x000106f4) aid_size_side_button_ParamLimits

0x6f5a,	// (0x000106f4) aid_size_side_button

0x6f6e,	// (0x00010708) grid_sctrl_middle_pane_ParamLimits

0x6f6e,	// (0x00010708) grid_sctrl_middle_pane

0x6f8e,	// (0x00010728) sctrl_sk_bottom_pane

0x6f9f,	// (0x00010739) sctrl_sk_top_pane

0x6fb1,	// (0x0001074b) aid_touch_sctrl_top

0x6fbe,	// (0x00010758) bg_sctrl_sk_pane_ParamLimits

0x6fbe,	// (0x00010758) bg_sctrl_sk_pane

0x6fcc,	// (0x00010766) sctrl_sk_top_pane_g1

0x6fd9,	// (0x00010773) sctrl_sk_top_pane_t1

0x6fb1,	// (0x0001074b) aid_touch_sctrl_bottom

0x6fbe,	// (0x00010758) bg_sctrl_sk_pane_cp_ParamLimits

0x6fbe,	// (0x00010758) bg_sctrl_sk_pane_cp

0x6ff4,	// (0x0001078e) sctrl_sk_bottom_pane_g1

0x6fd9,	// (0x00010773) sctrl_sk_bottom_pane_t1

0x6ffd,	// (0x00010797) cell_sctrl_middle_pane_ParamLimits

0x6ffd,	// (0x00010797) cell_sctrl_middle_pane

0x7018,	// (0x000107b2) aid_touch_sctrl_middle_ParamLimits

0x7018,	// (0x000107b2) aid_touch_sctrl_middle

0x702a,	// (0x000107c4) bg_sctrl_middle_pane_ParamLimits

0x702a,	// (0x000107c4) bg_sctrl_middle_pane

0x6d90,	// (0x0001052a) cell_sctrl_middle_pane_g1_ParamLimits

0x6d90,	// (0x0001052a) cell_sctrl_middle_pane_g1

0x7038,	// (0x000107d2) cell_sctrl_middle_pane_g2_ParamLimits

0x7038,	// (0x000107d2) cell_sctrl_middle_pane_g2

0x0001,

0xfd0c,	// (0x000194a6) cell_sctrl_middle_pane_g_ParamLimits

0xfd0c,	// (0x000194a6) cell_sctrl_middle_pane_g

0xa3cd,	// (0x00013b67) bg_sctrl_middle_pane_g1

0xa3d5,	// (0x00013b6f) bg_sctrl_middle_pane_g2

0xa3dd,	// (0x00013b77) bg_sctrl_middle_pane_g3

0xa3e5,	// (0x00013b7f) bg_sctrl_middle_pane_g4

0xa3ed,	// (0x00013b87) bg_sctrl_middle_pane_g5

0xa3f5,	// (0x00013b8f) bg_sctrl_middle_pane_g6

0xa3fd,	// (0x00013b97) bg_sctrl_middle_pane_g7

0xa405,	// (0x00013b9f) bg_sctrl_middle_pane_g8

0x0007,

0xfd11,	// (0x000194ab) bg_sctrl_middle_pane_g

0xa40d,	// (0x00013ba7) bg_sctrl_middle_pane_g8_copy1

0xa3cd,	// (0x00013b67) bg_sctrl_sk_pane_g1

0xa3dd,	// (0x00013b77) bg_sctrl_sk_pane_g2

0xa3d5,	// (0x00013b6f) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0001900c) bg_sctrl_sk_pane_g

0x80d9,	// (0x00011873) aid_size_touch_scroll_bar

0xa3ed,	// (0x00013b87) bg_sctrl_sk_pane_g4

0xa3e5,	// (0x00013b7f) bg_sctrl_sk_pane_g5

0xa3f5,	// (0x00013b8f) bg_sctrl_sk_pane_g6

0xa3fd,	// (0x00013b97) bg_sctrl_sk_pane_g7

0xa40d,	// (0x00013ba7) bg_sctrl_sk_pane_g8

0xa405,	// (0x00013b9f) bg_sctrl_sk_pane_g9

0x99a7,	// (0x00013141) popup_fep_china_hwr2_fs_candidate_window

0x99b1,	// (0x0001314b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x99b1,	// (0x0001314b) popup_fep_china_hwr2_fs_control_window

0x6d90,	// (0x0001052a) sctrl_sk_top_pane_g2

0x0001,

0xfd07,	// (0x000194a1) sctrl_sk_top_pane_g

0xe80d,	// (0x00017fa7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe80d,	// (0x00017fa7) aid_fep_china_hwr2_fs_cell

0xe81f,	// (0x00017fb9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe81f,	// (0x00017fb9) bg_popup_fep_shadow_pane_cp4

0xe836,	// (0x00017fd0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe836,	// (0x00017fd0) bg_popup_fep_shadow_pane_cp5

0xe848,	// (0x00017fe2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe848,	// (0x00017fe2) popup_fep_china_hwr2_fs_control_bar_grid

0xe858,	// (0x00017ff2) popup_fep_china_hwr2_fs_control_funtion_grid

0xe860,	// (0x00017ffa) aid_fep_china_hwr2_fs_candi_cell

0x7830,	// (0x00010fca) bg_popup_fep_shadow_pane_cp6

0xe86a,	// (0x00018004) popup_fep_china_hwr2_fs_candidate_grid

0xe874,	// (0x0001800e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe874,	// (0x0001800e) cell_fep_china_hwr2_fs_funtion_grid

0xcdc2,	// (0x0001655c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe88c,	// (0x00018026) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe88c,	// (0x00018026) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe89a,	// (0x00018034) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe89a,	// (0x00018034) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd22,	// (0x000194bc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd22,	// (0x000194bc) cell_fep_china_hwr2_fs_funtion_grid_g

0xe8b0,	// (0x0001804a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe8b0,	// (0x0001804a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8c5,	// (0x0001805f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8c5,	// (0x0001805f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd27,	// (0x000194c1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd27,	// (0x000194c1) cell_fep_china_hwr2_fs_funtion_grid_t

0xe8e1,	// (0x0001807b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe8e9,	// (0x00018083) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe8f1,	// (0x0001808b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2c,	// (0x000194c6) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe8f9,	// (0x00018093) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe8f9,	// (0x00018093) cell_fep_china_hwr2_fs_candidate_grid

0xe912,	// (0x000180ac) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe91a,	// (0x000180b4) popup_fep_china_hwr2_fs_candidate_grid_g21

0xcdc2,	// (0x0001655c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xcdc2,	// (0x0001655c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb40,	// (0x000192da) cell_fep_china_hwr2_fs_candidate_grid_g

0xe922,	// (0x000180bc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9f9a,	// (0x00013734) clock_nsta_pane_cp_24_ParamLimits

0x9f9a,	// (0x00013734) clock_nsta_pane_cp_24

0xa018,	// (0x000137b2) indicator_nsta_pane_cp_24_ParamLimits

0xa018,	// (0x000137b2) indicator_nsta_pane_cp_24

0xb18c,	// (0x00014926) heading_pane_g1

0x0001,

0xf8d7,	// (0x00019071) heading_pane_g

0xbcba,	// (0x00015454) grid_sct_catagory_button_pane

0xbcea,	// (0x00015484) scroll_pane_cp5_ParamLimits

0xc965,	// (0x000160ff) button_value_adjust_pane_cp5_ParamLimits

0xc965,	// (0x000160ff) button_value_adjust_pane_cp5

0xca61,	// (0x000161fb) form2_midp_time_pane_ParamLimits

0xe930,	// (0x000180ca) cell_sct_catagory_button_pane_ParamLimits

0xe930,	// (0x000180ca) cell_sct_catagory_button_pane

0xcd87,	// (0x00016521) bg_button_pane_cp01_ParamLimits

0xcd87,	// (0x00016521) bg_button_pane_cp01

0xcdc2,	// (0x0001655c) cell_sct_catagory_button_pane_g1

0x9d7b,	// (0x00013515) popup_tb_extension_window

0xe942,	// (0x000180dc) aid_size_cell_ext_ParamLimits

0xe942,	// (0x000180dc) aid_size_cell_ext

0x7bc7,	// (0x00011361) bg_tb_trans_pane_cp1_ParamLimits

0x7bc7,	// (0x00011361) bg_tb_trans_pane_cp1

0xe962,	// (0x000180fc) grid_tb_ext_pane_ParamLimits

0xe962,	// (0x000180fc) grid_tb_ext_pane

0xe992,	// (0x0001812c) cell_tb_ext_pane_ParamLimits

0xe992,	// (0x0001812c) cell_tb_ext_pane

0xe9a9,	// (0x00018143) cell_tb_ext_pane_g1_ParamLimits

0xe9a9,	// (0x00018143) cell_tb_ext_pane_g1

0xe9c6,	// (0x00018160) cell_tb_ext_pane_t1

0x7bc7,	// (0x00011361) list_highlight_pane_cp11_ParamLimits

0x7bc7,	// (0x00011361) list_highlight_pane_cp11

0x5f10,	// (0x0000f6aa) popup_uni_indicator_window_ParamLimits

0x5f10,	// (0x0000f6aa) popup_uni_indicator_window

0x870b,	// (0x00011ea5) bg_popup_sub_pane_cp14

0xe9e1,	// (0x0001817b) list_uniindi_pane

0xe9ed,	// (0x00018187) uniindi_top_pane

0x7bc7,	// (0x00011361) bg_uniindi_top_pane

0xea0c,	// (0x000181a6) uniindi_top_pane_g1

0xea22,	// (0x000181bc) uniindi_top_pane_g2

0x0003,

0xfd33,	// (0x000194cd) uniindi_top_pane_g

0xea4c,	// (0x000181e6) uniindi_top_pane_t1

0xea76,	// (0x00018210) list_single_uniindi_pane_ParamLimits

0xea76,	// (0x00018210) list_single_uniindi_pane

0xcdc2,	// (0x0001655c) bg_uniindi_top_pane_g1

0xea89,	// (0x00018223) list_single_uniindi_pane_g1

0xea9c,	// (0x00018236) list_single_uniindi_pane_t1

0x5d86,	// (0x0000f520) control_bg_pane

0xeac1,	// (0x0001825b) bg_sctrl_sk_pane_cp1

0xeaca,	// (0x00018264) bg_sctrl_sk_pane_cp2

0xead3,	// (0x0001826d) control_bg_pane_g1

0xeadc,	// (0x00018276) control_bg_pane_g2

0x0001,

0xfd3c,	// (0x000194d6) control_bg_pane_g

0xc79f,	// (0x00015f39) cell_indicator_nsta_pane_g1_ParamLimits

0xc7ad,	// (0x00015f47) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa4,	// (0x0001923e) cell_indicator_nsta_pane_g_ParamLimits

0xcae9,	// (0x00016283) form2_midp_time_pane_t1_ParamLimits

0x7f1b,	// (0x000116b5) main_idle_act4_pane_ParamLimits

0x7f1b,	// (0x000116b5) main_idle_act4_pane

0x9d7b,	// (0x00013515) popup_tb_extension_window_ParamLimits

0xe982,	// (0x0001811c) tb_ext_find_pane_ParamLimits

0xe982,	// (0x0001811c) tb_ext_find_pane

0xeae5,	// (0x0001827f) ai_gene_pane_1_cp1

0x96b6,	// (0x00012e50) ai_gene_pane_2_cp1

0xeaed,	// (0x00018287) list_single_idle_plugin_calendar_pane

0xeaf6,	// (0x00018290) list_single_idle_plugin_notification_pane

0xeaff,	// (0x00018299) list_single_idle_plugin_player_pane

0xeb08,	// (0x000182a2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeb08,	// (0x000182a2) list_single_idle_plugin_shortcut_pane

0xeb2a,	// (0x000182c4) main_idle_act4_pane_t1

0xeb3c,	// (0x000182d6) main_idle_act4_pane_t2

0x0001,

0xfd41,	// (0x000194db) main_idle_act4_pane_t

0xeb4e,	// (0x000182e8) middle_sk_idle_act4_pane_ParamLimits

0xeb4e,	// (0x000182e8) middle_sk_idle_act4_pane

0xeb64,	// (0x000182fe) popup_clock_digital_analogue_window_cp2

0xeb7e,	// (0x00018318) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb7e,	// (0x00018318) shortcut_wheel_idle_act4_pane

0xcdc2,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g1

0xcdc2,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g2

0xcdc2,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g3

0xcdc2,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g4

0xcdc2,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g5

0xeb92,	// (0x0001832c) shortcut_wheel_idle_act4_pane_g6

0xeb9a,	// (0x00018334) shortcut_wheel_idle_act4_pane_g7

0xeba2,	// (0x0001833c) shortcut_wheel_idle_act4_pane_g8

0xebaa,	// (0x00018344) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd46,	// (0x000194e0) shortcut_wheel_idle_act4_pane_g

0xd040,	// (0x000167da) middle_sk_idle_act4_pane_g1_ParamLimits

0xd040,	// (0x000167da) middle_sk_idle_act4_pane_g1

0xec0e,	// (0x000183a8) middle_sk_idle_act4_pane_g2_ParamLimits

0xec0e,	// (0x000183a8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd69,	// (0x00019503) middle_sk_idle_act4_pane_g_ParamLimits

0xfd69,	// (0x00019503) middle_sk_idle_act4_pane_g

0xec1a,	// (0x000183b4) middle_sk_idle_act4_pane_t1_ParamLimits

0xec1a,	// (0x000183b4) middle_sk_idle_act4_pane_t1

0xec37,	// (0x000183d1) grid_ai_shortcut_pane_ParamLimits

0xec37,	// (0x000183d1) grid_ai_shortcut_pane

0xec50,	// (0x000183ea) list_highlight_pane_cp16_ParamLimits

0xec50,	// (0x000183ea) list_highlight_pane_cp16

0xec5d,	// (0x000183f7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec5d,	// (0x000183f7) list_single_idle_plugin_shortcut_pane_g1

0xec69,	// (0x00018403) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec69,	// (0x00018403) list_single_idle_plugin_shortcut_pane_g2

0xec81,	// (0x0001841b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec81,	// (0x0001841b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6e,	// (0x00019508) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6e,	// (0x00019508) list_single_idle_plugin_shortcut_pane_g

0xec94,	// (0x0001842e) cell_ai_shortcut_pane_ParamLimits

0xec94,	// (0x0001842e) cell_ai_shortcut_pane

0xecb8,	// (0x00018452) cell_ai_shortcut_pane_g1_ParamLimits

0xecb8,	// (0x00018452) cell_ai_shortcut_pane_g1

0xeae5,	// (0x0001827f) ai_gene_pane_1_cp2

0xecda,	// (0x00018474) ai_gene_pane_2_cp2

0xece2,	// (0x0001847c) list_highlight_pane_cp15

0xeceb,	// (0x00018485) list_single_idle_plugin_calendar_pane_g1

0xece2,	// (0x0001847c) list_highlight_pane_cp17

0xecf3,	// (0x0001848d) list_single_idle_plugin_calendar_pane_g1_copy1

0xecfb,	// (0x00018495) list_single_idle_plugin_player_pane_g1

0xbf13,	// (0x000156ad) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd75,	// (0x0001950f) list_single_idle_plugin_player_pane_g

0xed03,	// (0x0001849d) list_single_idle_plugin_player_pane_t1

0xed11,	// (0x000184ab) list_single_idle_plugin_player_pane_t2

0xed1f,	// (0x000184b9) list_single_idle_plugin_player_pane_t3

0xed2d,	// (0x000184c7) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7a,	// (0x00019514) list_single_idle_plugin_player_pane_t

0xed3b,	// (0x000184d5) wait_bar_pane_cp15

0xed43,	// (0x000184dd) grid_ai_notification_pane

0xbf13,	// (0x000156ad) list_single_idle_plugin_notification_pane_g1

0xed4c,	// (0x000184e6) cell_ai_notification_pane_ParamLimits

0xed4c,	// (0x000184e6) cell_ai_notification_pane

0xed59,	// (0x000184f3) cell_ai_notification_pane_g1

0xed61,	// (0x000184fb) cell_ai_notification_pane_t1

0xed6f,	// (0x00018509) tb_ext_find_button_pane

0xed77,	// (0x00018511) tb_ext_find_pane_g1

0xed7f,	// (0x00018519) tb_ext_find_pane_t1

0x8eec,	// (0x00012686) tb_ext_find_button_pane_g1

0xed8d,	// (0x00018527) tb_ext_find_button_pane_g2

0x0001,

0xfd83,	// (0x0001951d) tb_ext_find_button_pane_g

0xeb2a,	// (0x000182c4) main_idle_act4_pane_t1_ParamLimits

0xeb3c,	// (0x000182d6) main_idle_act4_pane_t2_ParamLimits

0xfd41,	// (0x000194db) main_idle_act4_pane_t_ParamLimits

0xeb64,	// (0x000182fe) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb72,	// (0x0001830c) sat_plugin_idle_act4_pane_ParamLimits

0xeb72,	// (0x0001830c) sat_plugin_idle_act4_pane

0xed96,	// (0x00018530) sat_plugin_idle_act4_pane_t1_ParamLimits

0xed96,	// (0x00018530) sat_plugin_idle_act4_pane_t1

0xeda9,	// (0x00018543) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeda9,	// (0x00018543) sat_plugin_idle_act4_pane_t2

0xedbc,	// (0x00018556) sat_plugin_idle_act4_pane_t3_ParamLimits

0xedbc,	// (0x00018556) sat_plugin_idle_act4_pane_t3

0xedcf,	// (0x00018569) sat_plugin_idle_act4_pane_t4_ParamLimits

0xedcf,	// (0x00018569) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd88,	// (0x00019522) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd88,	// (0x00019522) sat_plugin_idle_act4_pane_t

0x5e4b,	// (0x0000f5e5) popup_battery_window_ParamLimits

0x5e4b,	// (0x0000f5e5) popup_battery_window

0x7bc7,	// (0x00011361) bg_popup_sub_pane_cp25_ParamLimits

0x7bc7,	// (0x00011361) bg_popup_sub_pane_cp25

0xede2,	// (0x0001857c) popup_battery_window_g1_ParamLimits

0xede2,	// (0x0001857c) popup_battery_window_g1

0xedee,	// (0x00018588) popup_battery_window_t1_ParamLimits

0xedee,	// (0x00018588) popup_battery_window_t1

0xee00,	// (0x0001859a) popup_battery_window_t2_ParamLimits

0xee00,	// (0x0001859a) popup_battery_window_t2

0x0001,

0xfd91,	// (0x0001952b) popup_battery_window_t_ParamLimits

0xfd91,	// (0x0001952b) popup_battery_window_t

0x9585,	// (0x00012d1f) midp_canvas_pane_ParamLimits

0x95fa,	// (0x00012d94) midp_keypad_pane_ParamLimits

0x95fa,	// (0x00012d94) midp_keypad_pane

0x98fb,	// (0x00013095) main_midp_pane_ParamLimits

0xc82b,	// (0x00015fc5) signal_pane_g2_cp_ParamLimits

0xee1d,	// (0x000185b7) aid_size_cell_midp_keypad_ParamLimits

0xee1d,	// (0x000185b7) aid_size_cell_midp_keypad

0xee37,	// (0x000185d1) midp_keyp_game_grid_pane_ParamLimits

0xee37,	// (0x000185d1) midp_keyp_game_grid_pane

0xee57,	// (0x000185f1) midp_keyp_rocker_pane_ParamLimits

0xee57,	// (0x000185f1) midp_keyp_rocker_pane

0xee82,	// (0x0001861c) midp_keyp_sk_left_pane_ParamLimits

0xee82,	// (0x0001861c) midp_keyp_sk_left_pane

0xeedc,	// (0x00018676) midp_keyp_sk_right_pane_ParamLimits

0xeedc,	// (0x00018676) midp_keyp_sk_right_pane

0x7830,	// (0x00010fca) bg_button_pane_cp03

0xef36,	// (0x000186d0) midp_keyp_sk_left_pane_g1

0x7830,	// (0x00010fca) bg_button_pane_cp04

0xef36,	// (0x000186d0) midp_keyp_sk_right_pane_g1

0xcdc2,	// (0x0001655c) midp_keyp_rocker_pane_g1

0xef3f,	// (0x000186d9) keyp_game_cell_pane_ParamLimits

0xef3f,	// (0x000186d9) keyp_game_cell_pane

0x7830,	// (0x00010fca) bg_button_pane_cp02

0xef52,	// (0x000186ec) keyp_game_cell_pane_g1

0x5e8f,	// (0x0000f629) popup_fep_vkb2_window_ParamLimits

0x5e8f,	// (0x0000f629) popup_fep_vkb2_window

0x7056,	// (0x000107f0) aid_size_cell_vkb2_ParamLimits

0x7056,	// (0x000107f0) aid_size_cell_vkb2

0x70aa,	// (0x00010844) popup_fep_vkb2_window_g1_ParamLimits

0x70aa,	// (0x00010844) popup_fep_vkb2_window_g1

0x70f2,	// (0x0001088c) vkb2_area_bottom_pane_ParamLimits

0x70f2,	// (0x0001088c) vkb2_area_bottom_pane

0x713e,	// (0x000108d8) vkb2_area_keypad_pane_ParamLimits

0x713e,	// (0x000108d8) vkb2_area_keypad_pane

0x7180,	// (0x0001091a) vkb2_area_top_pane_ParamLimits

0x7180,	// (0x0001091a) vkb2_area_top_pane

0x71fa,	// (0x00010994) vkb2_top_entry_pane_ParamLimits

0x71fa,	// (0x00010994) vkb2_top_entry_pane

0x7224,	// (0x000109be) vkb2_top_grid_left_pane_ParamLimits

0x7224,	// (0x000109be) vkb2_top_grid_left_pane

0x7242,	// (0x000109dc) vkb2_top_grid_right_pane_ParamLimits

0x7242,	// (0x000109dc) vkb2_top_grid_right_pane

0x7260,	// (0x000109fa) vkb2_cell_keypad_pane_ParamLimits

0x7260,	// (0x000109fa) vkb2_cell_keypad_pane

0x7331,	// (0x00010acb) vkb2_area_bottom_grid_pane_ParamLimits

0x7331,	// (0x00010acb) vkb2_area_bottom_grid_pane

0x7357,	// (0x00010af1) vkb2_area_bottom_pane_g1_ParamLimits

0x7357,	// (0x00010af1) vkb2_area_bottom_pane_g1

0x737b,	// (0x00010b15) vkb2_area_bottom_pane_g2_ParamLimits

0x737b,	// (0x00010b15) vkb2_area_bottom_pane_g2

0x73a9,	// (0x00010b43) vkb2_area_bottom_pane_g3_ParamLimits

0x73a9,	// (0x00010b43) vkb2_area_bottom_pane_g3

0x0002,

0xfd96,	// (0x00019530) vkb2_area_bottom_pane_g_ParamLimits

0xfd96,	// (0x00019530) vkb2_area_bottom_pane_g

0x740a,	// (0x00010ba4) vkb2_top_cell_left_pane_ParamLimits

0x740a,	// (0x00010ba4) vkb2_top_cell_left_pane

0xef63,	// (0x000186fd) vkb2_top_entry_pane_g1_ParamLimits

0xef63,	// (0x000186fd) vkb2_top_entry_pane_g1

0xef71,	// (0x0001870b) vkb2_top_entry_pane_t1_ParamLimits

0xef71,	// (0x0001870b) vkb2_top_entry_pane_t1

0xefa3,	// (0x0001873d) vkb2_top_entry_pane_t2_ParamLimits

0xefa3,	// (0x0001873d) vkb2_top_entry_pane_t2

0xefd5,	// (0x0001876f) vkb2_top_entry_pane_t3_ParamLimits

0xefd5,	// (0x0001876f) vkb2_top_entry_pane_t3

0x0002,

0xfd9d,	// (0x00019537) vkb2_top_entry_pane_t_ParamLimits

0xfd9d,	// (0x00019537) vkb2_top_entry_pane_t

0x7457,	// (0x00010bf1) vkb2_top_grid_right_pane_g1_ParamLimits

0x7457,	// (0x00010bf1) vkb2_top_grid_right_pane_g1

0x746d,	// (0x00010c07) vkb2_top_grid_right_pane_g2_ParamLimits

0x746d,	// (0x00010c07) vkb2_top_grid_right_pane_g2

0x7485,	// (0x00010c1f) vkb2_top_grid_right_pane_g3_ParamLimits

0x7485,	// (0x00010c1f) vkb2_top_grid_right_pane_g3

0x749d,	// (0x00010c37) vkb2_top_grid_right_pane_g4_ParamLimits

0x749d,	// (0x00010c37) vkb2_top_grid_right_pane_g4

0x0003,

0xfda4,	// (0x0001953e) vkb2_top_grid_right_pane_g_ParamLimits

0xfda4,	// (0x0001953e) vkb2_top_grid_right_pane_g

0x74b3,	// (0x00010c4d) vkb2_top_cell_left_pane_g1

0x74ca,	// (0x00010c64) vkb2_cell_keypad_pane_g1_ParamLimits

0x74ca,	// (0x00010c64) vkb2_cell_keypad_pane_g1

0xeff9,	// (0x00018793) vkb2_cell_keypad_pane_t1_ParamLimits

0xeff9,	// (0x00018793) vkb2_cell_keypad_pane_t1

0x74d8,	// (0x00010c72) vkb2_cell_bottom_grid_pane_ParamLimits

0x74d8,	// (0x00010c72) vkb2_cell_bottom_grid_pane

0x7511,	// (0x00010cab) vkb2_cell_bottom_grid_pane_g1

0xebb2,	// (0x0001834c) aid_call2_pane_cp02

0xebba,	// (0x00018354) aid_call_pane_cp02

0xebc2,	// (0x0001835c) clock_digital_number_pane_cp10

0xebca,	// (0x00018364) clock_digital_number_pane_cp11

0xebd2,	// (0x0001836c) clock_digital_number_pane_cp12

0xebda,	// (0x00018374) clock_digital_number_pane_cp13

0xebe2,	// (0x0001837c) clock_digital_separator_pane_cp10

0x8eec,	// (0x00012686) popup_clock_digital_analogue_window_cp2_g1

0x8eec,	// (0x00012686) popup_clock_digital_analogue_window_cp2_g2

0xebea,	// (0x00018384) popup_clock_digital_analogue_window_cp2_g3

0x8eec,	// (0x00012686) popup_clock_digital_analogue_window_cp2_g4

0xebea,	// (0x00018384) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd59,	// (0x000194f3) popup_clock_digital_analogue_window_cp2_g

0xebf2,	// (0x0001838c) popup_clock_digital_analogue_window_cp2_t1

0xec00,	// (0x0001839a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd64,	// (0x000194fe) popup_clock_digital_analogue_window_cp2_t

0xcdc2,	// (0x0001655c) clock_digital_number_pane_cp10_g1

0xcdc2,	// (0x0001655c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb40,	// (0x000192da) clock_digital_number_pane_cp10_g

0xcdc2,	// (0x0001655c) clock_digital_separator_pane_cp10_g1

0xcdc2,	// (0x0001655c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb40,	// (0x000192da) clock_digital_separator_pane_cp10_g

0xea2e,	// (0x000181c8) uniindi_top_pane_g3

0xea3f,	// (0x000181d9) uniindi_top_pane_g4

0x72eb,	// (0x00010a85) vkb2_row_keypad_pane_ParamLimits

0x72eb,	// (0x00010a85) vkb2_row_keypad_pane

0x752d,	// (0x00010cc7) vkb2_cell_t_keypad_pane_ParamLimits

0x752d,	// (0x00010cc7) vkb2_cell_t_keypad_pane

0x753d,	// (0x00010cd7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x753d,	// (0x00010cd7) vkb2_cell_t_keypad_pane_cp08

0x7550,	// (0x00010cea) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7550,	// (0x00010cea) vkb2_cell_t_keypad_pane_cp09

0x7564,	// (0x00010cfe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7564,	// (0x00010cfe) vkb2_cell_t_keypad_pane_cp01

0x7575,	// (0x00010d0f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7575,	// (0x00010d0f) vkb2_cell_t_keypad_pane_cp02

0x7586,	// (0x00010d20) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7586,	// (0x00010d20) vkb2_cell_t_keypad_pane_cp03

0x7597,	// (0x00010d31) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7597,	// (0x00010d31) vkb2_cell_t_keypad_pane_cp04

0x75a8,	// (0x00010d42) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x75a8,	// (0x00010d42) vkb2_cell_t_keypad_pane_cp05

0x75b9,	// (0x00010d53) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x75b9,	// (0x00010d53) vkb2_cell_t_keypad_pane_cp06

0x75ca,	// (0x00010d64) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x75ca,	// (0x00010d64) vkb2_cell_t_keypad_pane_cp07

0x75db,	// (0x00010d75) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x75db,	// (0x00010d75) vkb2_cell_t_keypad_pane_cp10

0x6d90,	// (0x0001052a) vkb2_cell_t_keypad_pane_g1

0xf010,	// (0x000187aa) vkb2_cell_t_keypad_pane_t1

0x5d86,	// (0x0000f520) popup_grid_graphic2_window

0xf022,	// (0x000187bc) aid_size_cell_graphic2_ParamLimits

0xf022,	// (0x000187bc) aid_size_cell_graphic2

0xf05a,	// (0x000187f4) bg_popup_window_pane_cp21_ParamLimits

0xf05a,	// (0x000187f4) bg_popup_window_pane_cp21

0xf068,	// (0x00018802) graphic2_pages_pane_ParamLimits

0xf068,	// (0x00018802) graphic2_pages_pane

0xf0ae,	// (0x00018848) grid_graphic2_control_pane_ParamLimits

0xf0ae,	// (0x00018848) grid_graphic2_control_pane

0xf0ec,	// (0x00018886) grid_graphic2_pane_ParamLimits

0xf0ec,	// (0x00018886) grid_graphic2_pane

0xf160,	// (0x000188fa) cell_graphic2_pane

0x7830,	// (0x00010fca) main_comp_mode_pane

0xe249,	// (0x000179e3) list_ai3_gene_pane_ParamLimits

0xe676,	// (0x00017e10) bg_popup_window_pane_cp19_ParamLimits

0xe682,	// (0x00017e1c) bg_touch_area_indi_pane_ParamLimits

0xe682,	// (0x00017e1c) bg_touch_area_indi_pane

0xe698,	// (0x00017e32) bg_touch_area_indi_pane_cp01_ParamLimits

0xe698,	// (0x00017e32) bg_touch_area_indi_pane_cp01

0xe6ae,	// (0x00017e48) bg_touch_area_indi_pane_cp02_ParamLimits

0xe6ae,	// (0x00017e48) bg_touch_area_indi_pane_cp02

0xe6c6,	// (0x00017e60) bg_touch_area_indi_pane_cp03_ParamLimits

0xe6c6,	// (0x00017e60) bg_touch_area_indi_pane_cp03

0xe6e0,	// (0x00017e7a) popup_slider_window_g1_ParamLimits

0xe6fc,	// (0x00017e96) popup_slider_window_g2_ParamLimits

0xe718,	// (0x00017eb2) popup_slider_window_g3_ParamLimits

0xfcee,	// (0x00019488) popup_slider_window_g_ParamLimits

0xe774,	// (0x00017f0e) popup_slider_window_t1_ParamLimits

0xe7e8,	// (0x00017f82) small_volume_slider_vertical_pane_ParamLimits

0xf160,	// (0x000188fa) cell_graphic2_pane_ParamLimits

0xf1ae,	// (0x00018948) bg_button_pane_cp10_ParamLimits

0xf1ae,	// (0x00018948) bg_button_pane_cp10

0xf1c1,	// (0x0001895b) bg_button_pane_cp11_ParamLimits

0xf1c1,	// (0x0001895b) bg_button_pane_cp11

0xf1d4,	// (0x0001896e) graphic2_pages_pane_g1_ParamLimits

0xf1d4,	// (0x0001896e) graphic2_pages_pane_g1

0xf1ef,	// (0x00018989) graphic2_pages_pane_g2_ParamLimits

0xf1ef,	// (0x00018989) graphic2_pages_pane_g2

0x0001,

0xfdb2,	// (0x0001954c) graphic2_pages_pane_g_ParamLimits

0xfdb2,	// (0x0001954c) graphic2_pages_pane_g

0xf207,	// (0x000189a1) graphic2_pages_pane_t1_ParamLimits

0xf207,	// (0x000189a1) graphic2_pages_pane_t1

0xf21f,	// (0x000189b9) cell_graphic2_control_pane_ParamLimits

0xf21f,	// (0x000189b9) cell_graphic2_control_pane

0xf240,	// (0x000189da) cell_graphic2_pane_g1_ParamLimits

0xf240,	// (0x000189da) cell_graphic2_pane_g1

0xf24d,	// (0x000189e7) cell_graphic2_pane_g2_ParamLimits

0xf24d,	// (0x000189e7) cell_graphic2_pane_g2

0xf25a,	// (0x000189f4) cell_graphic2_pane_g3_ParamLimits

0xf25a,	// (0x000189f4) cell_graphic2_pane_g3

0xf267,	// (0x00018a01) cell_graphic2_pane_g4_ParamLimits

0xf267,	// (0x00018a01) cell_graphic2_pane_g4

0xf274,	// (0x00018a0e) cell_graphic2_pane_g5_ParamLimits

0xf274,	// (0x00018a0e) cell_graphic2_pane_g5

0x0004,

0xfdb7,	// (0x00019551) cell_graphic2_pane_g_ParamLimits

0xfdb7,	// (0x00019551) cell_graphic2_pane_g

0xf28f,	// (0x00018a29) cell_graphic2_pane_t1_ParamLimits

0xf28f,	// (0x00018a29) cell_graphic2_pane_t1

0xa4f1,	// (0x00013c8b) grid_highlight_pane_cp11_ParamLimits

0xa4f1,	// (0x00013c8b) grid_highlight_pane_cp11

0x7bc7,	// (0x00011361) bg_button_pane_cp05

0xf2b8,	// (0x00018a52) cell_graphic2_control_pane_g1

0xcdc2,	// (0x0001655c) bg_touch_area_indi_pane_g1

0xf2e0,	// (0x00018a7a) aid_cmod_rocker_key_size

0xf2ea,	// (0x00018a84) aid_cmode_itu_key_size

0xf2f4,	// (0x00018a8e) main_cmode_video_pane

0xf2fe,	// (0x00018a98) main_comp_mode_itu_pane

0xf30a,	// (0x00018aa4) main_comp_mode_rocker_pane

0xf316,	// (0x00018ab0) cell_cmode_rocker_pane_ParamLimits

0xf316,	// (0x00018ab0) cell_cmode_rocker_pane

0xf328,	// (0x00018ac2) cell_cmode_itu_pane_ParamLimits

0xf328,	// (0x00018ac2) cell_cmode_itu_pane

0x870b,	// (0x00011ea5) bg_button_pane_cp06_ParamLimits

0x870b,	// (0x00011ea5) bg_button_pane_cp06

0xd040,	// (0x000167da) cell_cmode_rocker_pane_g1_ParamLimits

0xd040,	// (0x000167da) cell_cmode_rocker_pane_g1

0xe88c,	// (0x00018026) cell_cmode_rocker_pane_g2_ParamLimits

0xe88c,	// (0x00018026) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x00019561) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x00019561) cell_cmode_rocker_pane_g

0x7830,	// (0x00010fca) bg_button_pane_cp07

0xf33d,	// (0x00018ad7) cell_cmode_itu_pane_g1

0xf346,	// (0x00018ae0) cell_cmode_itu_pane_t1

0xf354,	// (0x00018aee) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x00019566) cell_cmode_itu_pane_t

0xeab1,	// (0x0001824b) aid_touch_ctrl_left

0xeab9,	// (0x00018253) aid_touch_ctrl_right

0x7830,	// (0x00010fca) compa_mode_pane

0xf362,	// (0x00018afc) aid_cmod_rocker_key_size_cp

0xf36c,	// (0x00018b06) aid_cmode_itu_key_size_cp

0xf376,	// (0x00018b10) compa_mode_pane_g1

0xf37e,	// (0x00018b18) compa_mode_pane_g2

0xf386,	// (0x00018b20) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x0001956b) compa_mode_pane_g

0xf38e,	// (0x00018b28) main_comp_mode_itu_pane_cp

0xf396,	// (0x00018b30) main_comp_mode_rocker_pane_cp

0xf39e,	// (0x00018b38) cell_cmode_itu_pane_cp_ParamLimits

0xf39e,	// (0x00018b38) cell_cmode_itu_pane_cp

0xf3b3,	// (0x00018b4d) cell_cmode_rocker_pane_cp_ParamLimits

0xf3b3,	// (0x00018b4d) cell_cmode_rocker_pane_cp

0x870b,	// (0x00011ea5) bg_button_pane_cp06_cp_ParamLimits

0x870b,	// (0x00011ea5) bg_button_pane_cp06_cp

0xd040,	// (0x000167da) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd040,	// (0x000167da) cell_cmode_rocker_pane_g1_cp

0xcdc2,	// (0x0001655c) cell_cmode_rocker_pane_g2_cp

0x7830,	// (0x00010fca) bg_button_pane_cp07_cp

0xba09,	// (0x000151a3) cell_cmode_itu_pane_g1_cp

0xf3c5,	// (0x00018b5f) cell_cmode_itu_pane_t1_cp

0xf3c5,	// (0x00018b5f) cell_cmode_itu_pane_t2_cp

0xb9f6,	// (0x00015190) settings_code_pane_cp2

0x7924,	// (0x000110be) bg_popup_window_pane_cp3_ParamLimits

0x7da1,	// (0x0001153b) heading_pane_cp3_ParamLimits

0x7dad,	// (0x00011547) listscroll_popup_graphic_pane_ParamLimits

0x6b39,	// (0x000102d3) fep_hwr_aid_pane_ParamLimits

0x6fb1,	// (0x0001074b) aid_touch_sctrl_top_ParamLimits

0x6fcc,	// (0x00010766) sctrl_sk_top_pane_g1_ParamLimits

0x6d90,	// (0x0001052a) sctrl_sk_top_pane_g2_ParamLimits

0xfd07,	// (0x000194a1) sctrl_sk_top_pane_g_ParamLimits

0x6fd9,	// (0x00010773) sctrl_sk_top_pane_t1_ParamLimits

0x6fb1,	// (0x0001074b) aid_touch_sctrl_bottom_ParamLimits

0x6fd9,	// (0x00010773) sctrl_sk_bottom_pane_t1_ParamLimits

0xe9fa,	// (0x00018194) aid_area_touch_clock

0x71c2,	// (0x0001095c) aid_vkb2_area_top_pane_cell_ParamLimits

0x71c2,	// (0x0001095c) aid_vkb2_area_top_pane_cell

0x730d,	// (0x00010aa7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x730d,	// (0x00010aa7) aid_vkb2_area_bottom_pane_cell

0xef5b,	// (0x000186f5) popup_char_count_window

0xf3d3,	// (0x00018b6d) popup_char_count_window_g1

0xf3dc,	// (0x00018b76) popup_char_count_window_g2

0xf3e5,	// (0x00018b7f) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x00019572) popup_char_count_window_g

0xf3ee,	// (0x00018b88) popup_char_count_window_t1

0x7088,	// (0x00010822) popup_fep_char_preview_window_ParamLimits

0x7088,	// (0x00010822) popup_fep_char_preview_window

0x71e0,	// (0x0001097a) vkb2_top_candi_pane_ParamLimits

0x71e0,	// (0x0001097a) vkb2_top_candi_pane

0xf3fc,	// (0x00018b96) cell_vkb2_top_candi_pane_ParamLimits

0xf3fc,	// (0x00018b96) cell_vkb2_top_candi_pane

0x75f0,	// (0x00010d8a) bg_popup_fep_char_preview_window_ParamLimits

0x75f0,	// (0x00010d8a) bg_popup_fep_char_preview_window

0x75fe,	// (0x00010d98) popup_fep_char_preview_window_t1_ParamLimits

0x75fe,	// (0x00010d98) popup_fep_char_preview_window_t1

0xf449,	// (0x00018be3) bg_popup_fep_char_preview_window_g1

0xf451,	// (0x00018beb) bg_popup_fep_char_preview_window_g2

0xf459,	// (0x00018bf3) bg_popup_fep_char_preview_window_g3

0xf48a,	// (0x00018c24) bg_popup_fep_char_preview_window_g4

0xf492,	// (0x00018c2c) bg_popup_fep_char_preview_window_g5

0x7638,	// (0x00010dd2) bg_popup_fep_char_preview_window_g6

0xf49a,	// (0x00018c34) bg_popup_fep_char_preview_window_g7

0xf461,	// (0x00018bfb) bg_popup_fep_char_preview_window_g8

0xf4a2,	// (0x00018c3c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x00019579) bg_popup_fep_char_preview_window_g

0x6d90,	// (0x0001052a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6d90,	// (0x0001052a) cell_vkb2_top_candi_pane_g1

0x6d9e,	// (0x00010538) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6d9e,	// (0x00010538) cell_vkb2_top_candi_pane_g2

0xf469,	// (0x00018c03) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf469,	// (0x00018c03) cell_vkb2_top_candi_pane_g3

0x7640,	// (0x00010dda) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7640,	// (0x00010dda) cell_vkb2_top_candi_pane_g4

0xd65e,	// (0x00016df8) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd65e,	// (0x00016df8) cell_vkb2_top_candi_pane_g5

0x7661,	// (0x00010dfb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7661,	// (0x00010dfb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x0001958c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x0001958c) cell_vkb2_top_candi_pane_g

0x766f,	// (0x00010e09) cell_vkb2_top_candi_pane_t1

0x6999,	// (0x00010133) aid_size_touch_slider_mark_ParamLimits

0x6999,	// (0x00010133) aid_size_touch_slider_mark

0xf09e,	// (0x00018838) grid_graphic2_catg_pane_ParamLimits

0xf09e,	// (0x00018838) grid_graphic2_catg_pane

0xf13c,	// (0x000188d6) popup_grid_graphic2_window_t1_ParamLimits

0xf13c,	// (0x000188d6) popup_grid_graphic2_window_t1

0xf14e,	// (0x000188e8) popup_grid_graphic2_window_t2_ParamLimits

0xf14e,	// (0x000188e8) popup_grid_graphic2_window_t2

0x0001,

0xfdad,	// (0x00019547) popup_grid_graphic2_window_t_ParamLimits

0xfdad,	// (0x00019547) popup_grid_graphic2_window_t

0x7bc7,	// (0x00011361) bg_button_pane_cp05_ParamLimits

0xf2b8,	// (0x00018a52) cell_graphic2_control_pane_g1_ParamLimits

0xf4aa,	// (0x00018c44) cell_graphic2_catg_pane_ParamLimits

0xf4aa,	// (0x00018c44) cell_graphic2_catg_pane

0x7830,	// (0x00010fca) bg_button_pane_cp12

0xf4bc,	// (0x00018c56) cell_graphic2_catg_pane_g1

0xe9c6,	// (0x00018160) cell_tb_ext_pane_t1_ParamLimits

0x742a,	// (0x00010bc4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x742a,	// (0x00010bc4) vkb2_top_cell_right_narrow_pane

0x7442,	// (0x00010bdc) vkb2_top_cell_right_wide_pane_ParamLimits

0x7442,	// (0x00010bdc) vkb2_top_cell_right_wide_pane

0x6b2b,	// (0x000102c5) bg_vkb2_func_pane_ParamLimits

0x6b2b,	// (0x000102c5) bg_vkb2_func_pane

0x74b3,	// (0x00010c4d) vkb2_top_cell_left_pane_g1_ParamLimits

0x6b2b,	// (0x000102c5) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6b2b,	// (0x000102c5) bg_vkb2_fuc_pane_cp03

0x7511,	// (0x00010cab) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xa3d5,	// (0x00013b6f) bg_vkb2_func_pane_g1

0xa3dd,	// (0x00013b77) bg_vkb2_func_pane_g2

0xa3ed,	// (0x00013b87) bg_vkb2_func_pane_g3

0xa3e5,	// (0x00013b7f) bg_vkb2_func_pane_g4

0xa3f5,	// (0x00013b8f) bg_vkb2_func_pane_g5

0xa3fd,	// (0x00013b97) bg_vkb2_func_pane_g6

0xa405,	// (0x00013b9f) bg_vkb2_func_pane_g7

0xa40d,	// (0x00013ba7) bg_vkb2_func_pane_g8

0xa3cd,	// (0x00013b67) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x00019599) bg_vkb2_func_pane_g

0x6b2b,	// (0x000102c5) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6b2b,	// (0x000102c5) bg_vkb2_fuc_pane_cp01

0x74b3,	// (0x00010c4d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x74b3,	// (0x00010c4d) vkb2_top_cell_right_wide_pane_g1

0x6b2b,	// (0x000102c5) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6b2b,	// (0x000102c5) bg_vkb2_fuc_pane_cp02

0x7511,	// (0x00010cab) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7511,	// (0x00010cab) vkb2_top_cell_right_narrow_pane_g1

0xe5fa,	// (0x00017d94) aid_touch_area_decrease_ParamLimits

0xe5fa,	// (0x00017d94) aid_touch_area_decrease

0xe618,	// (0x00017db2) aid_touch_area_increase_ParamLimits

0xe618,	// (0x00017db2) aid_touch_area_increase

0xe624,	// (0x00017dbe) aid_touch_area_mute_ParamLimits

0xe624,	// (0x00017dbe) aid_touch_area_mute

0xe648,	// (0x00017de2) aid_touch_area_slider_ParamLimits

0xe648,	// (0x00017de2) aid_touch_area_slider

0xe734,	// (0x00017ece) popup_slider_window_g4_ParamLimits

0xe734,	// (0x00017ece) popup_slider_window_g4

0xe740,	// (0x00017eda) popup_slider_window_g5_ParamLimits

0xe740,	// (0x00017eda) popup_slider_window_g5

0xe762,	// (0x00017efc) popup_slider_window_g6_ParamLimits

0xe762,	// (0x00017efc) popup_slider_window_g6

0xe7a2,	// (0x00017f3c) popup_slider_window_t2_ParamLimits

0xe7a2,	// (0x00017f3c) popup_slider_window_t2

0x0001,

0xfcfb,	// (0x00019495) popup_slider_window_t_ParamLimits

0xfcfb,	// (0x00019495) popup_slider_window_t

0xe7ba,	// (0x00017f54) slider_pane_ParamLimits

0xe7ba,	// (0x00017f54) slider_pane

0xf4c5,	// (0x00018c5f) slider_pane_g1_ParamLimits

0xf4c5,	// (0x00018c5f) slider_pane_g1

0xf4d9,	// (0x00018c73) slider_pane_g2_ParamLimits

0xf4d9,	// (0x00018c73) slider_pane_g2

0xf4ef,	// (0x00018c89) slider_pane_g3_ParamLimits

0xf4ef,	// (0x00018c89) slider_pane_g3

0x0003,

0xfe12,	// (0x000195ac) slider_pane_g_ParamLimits

0xfe12,	// (0x000195ac) slider_pane_g

0x9dd7,	// (0x00013571) popup_tb_float_extension_window_ParamLimits

0x9dd7,	// (0x00013571) popup_tb_float_extension_window

0xf51b,	// (0x00018cb5) aid_size_cell_tb_float_ext

0x7830,	// (0x00010fca) bg_popup_sub_window_cp28

0xf527,	// (0x00018cc1) grid_tb_float_ext_pane

0xf531,	// (0x00018ccb) cell_tb_float_ext_pane_ParamLimits

0xf531,	// (0x00018ccb) cell_tb_float_ext_pane

0xf54b,	// (0x00018ce5) cell_tb_float_ext_pane_g1

0xf554,	// (0x00018cee) grid_highlight_pane_cp12

0x6c7a,	// (0x00010414) cell_last_hwr_side_pane_ParamLimits

0x6c7a,	// (0x00010414) cell_last_hwr_side_pane

0xcdc2,	// (0x0001655c) cell_last_hwr_side_pane_g1

0xf55d,	// (0x00018cf7) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x000195b5) cell_last_hwr_side_pane_g

0x73d9,	// (0x00010b73) vkb2_area_bottom_space_btn_pane_ParamLimits

0x73d9,	// (0x00010b73) vkb2_area_bottom_space_btn_pane

0x6d90,	// (0x0001052a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xf010,	// (0x000187aa) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x766f,	// (0x00010e09) cell_vkb2_top_candi_pane_t1_ParamLimits

0x768e,	// (0x00010e28) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x768e,	// (0x00010e28) vkb2_area_bottom_space_btn_pane_g1

0x76c8,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x76c8,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g2

0x76fe,	// (0x00010e98) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x76fe,	// (0x00010e98) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x000195ba) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x000195ba) vkb2_area_bottom_space_btn_pane_g

0x6bee,	// (0x00010388) cel_fep_hwr_func_pane_ParamLimits

0x6bee,	// (0x00010388) cel_fep_hwr_func_pane

0x6c2a,	// (0x000103c4) cell_hwr_side_button_pane_ParamLimits

0x6c2a,	// (0x000103c4) cell_hwr_side_button_pane

0xe9fa,	// (0x00018194) aid_area_touch_clock_ParamLimits

0x7bc7,	// (0x00011361) bg_uniindi_top_pane_ParamLimits

0xea0c,	// (0x000181a6) uniindi_top_pane_g1_ParamLimits

0xea22,	// (0x000181bc) uniindi_top_pane_g2_ParamLimits

0xea2e,	// (0x000181c8) uniindi_top_pane_g3_ParamLimits

0xea3f,	// (0x000181d9) uniindi_top_pane_g4_ParamLimits

0xfd33,	// (0x000194cd) uniindi_top_pane_g_ParamLimits

0xea4c,	// (0x000181e6) uniindi_top_pane_t1_ParamLimits

0x7bc7,	// (0x00011361) bg_vkb2_func_pane_cp01_ParamLimits

0x7bc7,	// (0x00011361) bg_vkb2_func_pane_cp01

0x001e,	// (0x000097b8) cel_fep_hwr_func_pane_g1_ParamLimits

0x001e,	// (0x000097b8) cel_fep_hwr_func_pane_g1

0x7bc7,	// (0x00011361) bg_vkb2_func_pane_cp02_ParamLimits

0x7bc7,	// (0x00011361) bg_vkb2_func_pane_cp02

0x001e,	// (0x000097b8) cell_hwr_side_button_pane_g1_ParamLimits

0x001e,	// (0x000097b8) cell_hwr_side_button_pane_g1

0xa217,	// (0x000139b1) status_pane_g4_ParamLimits

0xa217,	// (0x000139b1) status_pane_g4

0xa231,	// (0x000139cb) status_pane_t1

0xcafc,	// (0x00016296) form2_midp_gauge_slider_cont_pane

0xcb04,	// (0x0001629e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb16,	// (0x000162b0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb28,	// (0x000162c2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf3,	// (0x0001928d) form2_midp_gauge_slider_pane_t_ParamLimits

0xcb3a,	// (0x000162d4) form2_midp_slider_pane_ParamLimits

0x7048,	// (0x000107e2) aid_size_cell_func_vkb2_ParamLimits

0x7048,	// (0x000107e2) aid_size_cell_func_vkb2

0xf507,	// (0x00018ca1) slider_pane_g4_ParamLimits

0xf507,	// (0x00018ca1) slider_pane_g4

0x7748,	// (0x00010ee2) form2_midp_gauge_slider_pane_t2_cp01

0x7756,	// (0x00010ef0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7756,	// (0x00010ef0) form2_midp_gauge_slider_pane_t3_cp01

0x7773,	// (0x00010f0d) form2_midp_slider_pane_cp01

0x7830,	// (0x00010fca) navi_smil_pane

0x008b,	// (0x00009825) navi_smil_pane_g1

0x0093,	// (0x0000982d) navi_smil_pane_t1

0x0060,	// (0x000097fa) form2_midp_slider_pane_g1

0x0069,	// (0x00009803) form2_midp_slider_pane_g2

0x0071,	// (0x0000980b) form2_midp_slider_pane_g3

0x0060,	// (0x000097fa) form2_midp_slider_pane_g4

0x0079,	// (0x00009813) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x000195c3) form2_midp_slider_pane_g

0x7738,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7738,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g4

0xa054,	// (0x000137ee) lc0_navi_pane_ParamLimits

0xa054,	// (0x000137ee) lc0_navi_pane

0xa0ca,	// (0x00013864) lc0_stat_indi_pane_ParamLimits

0xa0ca,	// (0x00013864) lc0_stat_indi_pane

0xa0e1,	// (0x0001387b) ls0_title_pane_ParamLimits

0xa0e1,	// (0x0001387b) ls0_title_pane

0x870b,	// (0x00011ea5) bg_popup_sub_pane_cp14_ParamLimits

0xe9e1,	// (0x0001817b) list_uniindi_pane_ParamLimits

0xe9ed,	// (0x00018187) uniindi_top_pane_ParamLimits

0xea89,	// (0x00018223) list_single_uniindi_pane_g1_ParamLimits

0xea9c,	// (0x00018236) list_single_uniindi_pane_t1_ParamLimits

0x777c,	// (0x00010f16) lc0_stat_clock_pane_ParamLimits

0x777c,	// (0x00010f16) lc0_stat_clock_pane

0x00bb,	// (0x00009855) lc0_stat_indi_pane_g1_ParamLimits

0x00bb,	// (0x00009855) lc0_stat_indi_pane_g1

0x00ae,	// (0x00009848) lc0_stat_indi_pane_g2_ParamLimits

0x00ae,	// (0x00009848) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x000195ce) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x000195ce) lc0_stat_indi_pane_g

0x7789,	// (0x00010f23) lc0_uni_indicator_pane_ParamLimits

0x7789,	// (0x00010f23) lc0_uni_indicator_pane

0x00d5,	// (0x0000986f) ls0_title_pane_g1_ParamLimits

0x00d5,	// (0x0000986f) ls0_title_pane_g1

0x00e9,	// (0x00009883) ls0_title_pane_t1_ParamLimits

0x00e9,	// (0x00009883) ls0_title_pane_t1

0x7796,	// (0x00010f30) lc0_uni_indicator_pane_g1_ParamLimits

0x7796,	// (0x00010f30) lc0_uni_indicator_pane_g1

0x0133,	// (0x000098cd) lc0_stat_clock_pane_t1

0x7830,	// (0x00010fca) main_ai5_pane

0x0141,	// (0x000098db) ai5_sk_pane_ParamLimits

0x0141,	// (0x000098db) ai5_sk_pane

0x014e,	// (0x000098e8) cell_ai5_widget_pane_ParamLimits

0x014e,	// (0x000098e8) cell_ai5_widget_pane

0x0204,	// (0x0000999e) aid_size_cell_widget_grid

0x0218,	// (0x000099b2) bg_ai5_widget_pane_ParamLimits

0x0218,	// (0x000099b2) bg_ai5_widget_pane

0x0262,	// (0x000099fc) cell_ai5_widget_pane_g2

0x0272,	// (0x00009a0c) cell_ai5_widget_pane_g3

0x0291,	// (0x00009a2b) cell_ai5_widget_pane_g4

0x029d,	// (0x00009a37) cell_ai5_widget_pane_g5

0x02a9,	// (0x00009a43) cell_ai5_widget_pane_g6

0x02b5,	// (0x00009a4f) cell_ai5_widget_pane_g7

0x02fd,	// (0x00009a97) cell_ai5_widget_pane_t1_ParamLimits

0x02fd,	// (0x00009a97) cell_ai5_widget_pane_t1

0x031a,	// (0x00009ab4) cell_ai5_widget_pane_t2_ParamLimits

0x031a,	// (0x00009ab4) cell_ai5_widget_pane_t2

0x0332,	// (0x00009acc) cell_ai5_widget_pane_t3_ParamLimits

0x0332,	// (0x00009acc) cell_ai5_widget_pane_t3

0x034a,	// (0x00009ae4) cell_ai5_widget_pane_t4_ParamLimits

0x034a,	// (0x00009ae4) cell_ai5_widget_pane_t4

0x0364,	// (0x00009afe) cell_ai5_widget_pane_t5_ParamLimits

0x0364,	// (0x00009afe) cell_ai5_widget_pane_t5

0x0383,	// (0x00009b1d) cell_ai5_widget_pane_t6_ParamLimits

0x0383,	// (0x00009b1d) cell_ai5_widget_pane_t6

0x0395,	// (0x00009b2f) cell_ai5_widget_pane_t7_ParamLimits

0x0395,	// (0x00009b2f) cell_ai5_widget_pane_t7

0x03ae,	// (0x00009b48) cell_ai5_widget_pane_t8_ParamLimits

0x03ae,	// (0x00009b48) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x000195e8) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x000195e8) cell_ai5_widget_pane_t

0x03fa,	// (0x00009b94) grid_ai5_widget_pane

0x870b,	// (0x00011ea5) highlight_cell_ai5_widget_pane_ParamLimits

0x870b,	// (0x00011ea5) highlight_cell_ai5_widget_pane

0x0412,	// (0x00009bac) ai5_sk_left_pane

0x041c,	// (0x00009bb6) ai5_sk_middle_pane

0x0426,	// (0x00009bc0) ai5_sk_right_pane

0x0430,	// (0x00009bca) bg_ai5_widget_pane_g1_ParamLimits

0x0430,	// (0x00009bca) bg_ai5_widget_pane_g1

0x043c,	// (0x00009bd6) bg_ai5_widget_pane_g2_ParamLimits

0x043c,	// (0x00009bd6) bg_ai5_widget_pane_g2

0x0448,	// (0x00009be2) bg_ai5_widget_pane_g3_ParamLimits

0x0448,	// (0x00009be2) bg_ai5_widget_pane_g3

0x0454,	// (0x00009bee) bg_ai5_widget_pane_g4_ParamLimits

0x0454,	// (0x00009bee) bg_ai5_widget_pane_g4

0x0460,	// (0x00009bfa) bg_ai5_widget_pane_g5_ParamLimits

0x0460,	// (0x00009bfa) bg_ai5_widget_pane_g5

0x046c,	// (0x00009c06) bg_ai5_widget_pane_g6_ParamLimits

0x046c,	// (0x00009c06) bg_ai5_widget_pane_g6

0x0478,	// (0x00009c12) bg_ai5_widget_pane_g7_ParamLimits

0x0478,	// (0x00009c12) bg_ai5_widget_pane_g7

0x0484,	// (0x00009c1e) bg_ai5_widget_pane_g8_ParamLimits

0x0484,	// (0x00009c1e) bg_ai5_widget_pane_g8

0x0490,	// (0x00009c2a) bg_ai5_widget_pane_g9_ParamLimits

0x0490,	// (0x00009c2a) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x000195fd) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x000195fd) bg_ai5_widget_pane_g

0x04c3,	// (0x00009c5d) cell_shortcut_ai5_widget_pane_ParamLimits

0x04c3,	// (0x00009c5d) cell_shortcut_ai5_widget_pane

0x7a07,	// (0x000111a1) bg_cell_shortcut_ai5_widget_pane

0x04d4,	// (0x00009c6e) cell_grid_ai5_widget_pane_g1

0x04dd,	// (0x00009c77) highlight_cell_shortcut_ai5_widget_pane

0xa3d5,	// (0x00013b6f) ai5_sk_left_pane_g1

0x04e5,	// (0x00009c7f) ai5_sk_left_pane_g2

0x04ed,	// (0x00009c87) ai5_sk_left_pane_g3

0x04f5,	// (0x00009c8f) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x00019610) ai5_sk_left_pane_g

0x04fd,	// (0x00009c97) ai5_sk_left_pane_t1

0xa3dd,	// (0x00013b77) ai5_sk_right_pane_g1

0x050b,	// (0x00009ca5) ai5_sk_right_pane_g2

0x0513,	// (0x00009cad) ai5_sk_right_pane_g3

0x051b,	// (0x00009cb5) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x00019619) ai5_sk_right_pane_g

0x0523,	// (0x00009cbd) ai5_sk_right_pane_t1

0xa3dd,	// (0x00013b77) ai5_sk_middle_pane_g1

0xa3d5,	// (0x00013b6f) ai5_sk_middle_pane_g2

0xa3f5,	// (0x00013b8f) ai5_sk_middle_pane_g3

0x0513,	// (0x00009cad) ai5_sk_middle_pane_g4

0x04ed,	// (0x00009c87) ai5_sk_middle_pane_g5

0x0531,	// (0x00009ccb) ai5_sk_middle_pane_g6

0x0539,	// (0x00009cd3) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x00019622) ai5_sk_middle_pane_g

0x9ee4,	// (0x0001367e) aid_touch_area_size_lc0_ParamLimits

0x9ee4,	// (0x0001367e) aid_touch_area_size_lc0

0x6dbf,	// (0x00010559) cell_hwr_candidate_pane_t1_ParamLimits

0x9f00,	// (0x0001369a) aid_touch_navi_pane

0xa1c9,	// (0x00013963) status_dt_navi_pane_ParamLimits

0xa1c9,	// (0x00013963) status_dt_navi_pane

0xa1d6,	// (0x00013970) status_dt_sta_pane_ParamLimits

0xa1d6,	// (0x00013970) status_dt_sta_pane

0x0541,	// (0x00009cdb) dt_sta_controll_pane

0x054e,	// (0x00009ce8) dt_sta_indi_pane

0x055b,	// (0x00009cf5) dt_sta_title_pane

0x7bc7,	// (0x00011361) bg_dt_sta_indi_pane_ParamLimits

0x7bc7,	// (0x00011361) bg_dt_sta_indi_pane

0x056c,	// (0x00009d06) dt_sta_battery_pane

0x0574,	// (0x00009d0e) dt_sta_indi_pane_g1

0x057d,	// (0x00009d17) dt_sta_indi_pane_g2

0x0586,	// (0x00009d20) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x00019631) dt_sta_indi_pane_g

0x058f,	// (0x00009d29) dt_sta_signal_pane

0x870b,	// (0x00011ea5) bg_dt_sta_title_pane_ParamLimits

0x870b,	// (0x00011ea5) bg_dt_sta_title_pane

0x0598,	// (0x00009d32) dt_sta_title_pane_g1

0x05a0,	// (0x00009d3a) dt_sta_title_pane_t1_ParamLimits

0x05a0,	// (0x00009d3a) dt_sta_title_pane_t1

0x7830,	// (0x00010fca) bg_dt_sta_control_pane

0x05b5,	// (0x00009d4f) dt_sta_controll_pane_g1

0x05be,	// (0x00009d58) bg_dt_sta_title_pane_g1

0x05c7,	// (0x00009d61) bg_dt_sta_title_pane_g2

0x05d0,	// (0x00009d6a) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x00019638) bg_dt_sta_title_pane_g

0xcdc2,	// (0x0001655c) bg_dt_sta_indi_pane_g1

0x05d9,	// (0x00009d73) dt_sta_signal_pane_g1

0x05e1,	// (0x00009d7b) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x0001963f) dt_sta_signal_pane_g

0x05e9,	// (0x00009d83) dt_sta_battery_pane_g1

0x05f2,	// (0x00009d8c) dt_sta_battery_pane_t1

0xcdc2,	// (0x0001655c) bg_dt_sta_control_pane_g1

0x8ff8,	// (0x00012792) fep_china_uni_eep_pane

0x9000,	// (0x0001279a) fep_china_uni_entry_pane_ParamLimits

0x9010,	// (0x000127aa) popup_fep_china_uni_window_g1_ParamLimits

0x9020,	// (0x000127ba) popup_fep_china_uni_window_g2_ParamLimits

0x9020,	// (0x000127ba) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x00018eca) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x00018eca) popup_fep_china_uni_window_g

0x0601,	// (0x00009d9b) fep_china_uni_eep_pane_g1

0x0609,	// (0x00009da3) fep_china_uni_eep_pane_t1

0x0082,	// (0x0000981c) aid_touch_area_size_smil_player

0xa04c,	// (0x000137e6) lc0_clock_pane

0xa225,	// (0x000139bf) status_pane_g5_ParamLimits

0xa225,	// (0x000139bf) status_pane_g5

0x9a9c,	// (0x00013236) popup_keymap_window

0xa1eb,	// (0x00013985) status_icon_pane

0x0272,	// (0x00009a0c) cell_ai5_widget_pane_g3_ParamLimits

0x0291,	// (0x00009a2b) cell_ai5_widget_pane_g4_ParamLimits

0x029d,	// (0x00009a37) cell_ai5_widget_pane_g5_ParamLimits

0x02c1,	// (0x00009a5b) cell_ai5_widget_pane_g8_ParamLimits

0x02c1,	// (0x00009a5b) cell_ai5_widget_pane_g8

0x02d5,	// (0x00009a6f) cell_ai5_widget_pane_g9_ParamLimits

0x02d5,	// (0x00009a6f) cell_ai5_widget_pane_g9

0x02e9,	// (0x00009a83) cell_ai5_widget_pane_g10_ParamLimits

0x02e9,	// (0x00009a83) cell_ai5_widget_pane_g10

0x0618,	// (0x00009db2) status_icon_pane_g1

0x7830,	// (0x00010fca) bg_popup_sub_pane_cp13

0x0620,	// (0x00009dba) popup_keymap_window_t1

0x9848,	// (0x00012fe2) control_pane_g6_ParamLimits

0x9848,	// (0x00012fe2) control_pane_g6

0x9855,	// (0x00012fef) control_pane_g7_ParamLimits

0x9855,	// (0x00012fef) control_pane_g7

0x9862,	// (0x00012ffc) control_pane_g8_ParamLimits

0x9862,	// (0x00012ffc) control_pane_g8

0x0541,	// (0x00009cdb) dt_sta_controll_pane_ParamLimits

0x054e,	// (0x00009ce8) dt_sta_indi_pane_ParamLimits

0x055b,	// (0x00009cf5) dt_sta_title_pane_ParamLimits

0x80e2,	// (0x0001187c) aid_size_touch_scroll_bar_cale

0x5e5f,	// (0x0000f5f9) popup_discreet_window_ParamLimits

0x5e5f,	// (0x0000f5f9) popup_discreet_window

0x5ee7,	// (0x0000f681) popup_sk_window

0xab0c,	// (0x000142a6) bg_popup_sub_pane_cp28_ParamLimits

0xab0c,	// (0x000142a6) bg_popup_sub_pane_cp28

0x062e,	// (0x00009dc8) popup_discreet_window_g1_ParamLimits

0x062e,	// (0x00009dc8) popup_discreet_window_g1

0x064e,	// (0x00009de8) popup_discreet_window_t1_ParamLimits

0x064e,	// (0x00009de8) popup_discreet_window_t1

0x066c,	// (0x00009e06) popup_discreet_window_t2_ParamLimits

0x066c,	// (0x00009e06) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x00019644) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x00019644) popup_discreet_window_t

0x77aa,	// (0x00010f44) popup_sk_window_g1

0x77b4,	// (0x00010f4e) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x0001964b) popup_sk_window_g

0x77be,	// (0x00010f58) popup_sk_window_t1

0x77cc,	// (0x00010f66) popup_sk_window_t1_copy1

0x0262,	// (0x000099fc) cell_ai5_widget_pane_g2_ParamLimits

0x03c0,	// (0x00009b5a) cell_ai5_widget_pane_t9_ParamLimits

0x03c0,	// (0x00009b5a) cell_ai5_widget_pane_t9

0x7830,	// (0x00010fca) main_fep_fshwr2_pane

0x06ee,	// (0x00009e88) aid_fshwr2_btn_pane

0x06f6,	// (0x00009e90) aid_fshwr2_syb_pane

0x06fe,	// (0x00009e98) aid_fshwr2_txt_pane

0x0706,	// (0x00009ea0) fshwr2_func_candi_pane

0x0712,	// (0x00009eac) fshwr2_hwr_syb_pane

0x071e,	// (0x00009eb8) fshwr2_icf_pane

0x7830,	// (0x00010fca) fshwr2_icf_bg_pane

0x073c,	// (0x00009ed6) fshwr2_icf_pane_t1_ParamLimits

0x073c,	// (0x00009ed6) fshwr2_icf_pane_t1

0xcdc2,	// (0x0001655c) fshwr2_func_candi_pane_g1

0x0753,	// (0x00009eed) fshwr2_func_candi_row_pane_ParamLimits

0x0753,	// (0x00009eed) fshwr2_func_candi_row_pane

0x0764,	// (0x00009efe) cell_fshwr2_syb_pane_ParamLimits

0x0764,	// (0x00009efe) cell_fshwr2_syb_pane

0xd040,	// (0x000167da) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd040,	// (0x000167da) fshwr2_hwr_syb_pane_g1

0x7830,	// (0x00010fca) bg_popup_call_pane_cp01

0x077e,	// (0x00009f18) fshwr2_func_candi_cell_pane_ParamLimits

0x077e,	// (0x00009f18) fshwr2_func_candi_cell_pane

0x07af,	// (0x00009f49) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x07af,	// (0x00009f49) fshwr2_func_candi_cell_bg_pane

0x07c9,	// (0x00009f63) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x07c9,	// (0x00009f63) fshwr2_func_candi_cell_pane_g1

0x07f1,	// (0x00009f8b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x07f1,	// (0x00009f8b) fshwr2_func_candi_cell_pane_t1

0x7830,	// (0x00010fca) bg_button_pane_cp08

0x957d,	// (0x00012d17) cell_fshwr2_syb_bg_pane

0x0804,	// (0x00009f9e) cell_fshwr2_syb_bg_pane_g1

0x080c,	// (0x00009fa6) cell_fshwr2_syb_bg_pane_t1

0x870b,	// (0x00011ea5) main_tmo_pane

0xb61b,	// (0x00014db5) uni_indicator_pane_g1_ParamLimits

0xb630,	// (0x00014dca) uni_indicator_pane_g2_ParamLimits

0xb646,	// (0x00014de0) uni_indicator_pane_g3_ParamLimits

0xb65c,	// (0x00014df6) uni_indicator_pane_g4_ParamLimits

0xb65c,	// (0x00014df6) uni_indicator_pane_g4

0xb670,	// (0x00014e0a) uni_indicator_pane_g5_ParamLimits

0xb670,	// (0x00014e0a) uni_indicator_pane_g5

0xb684,	// (0x00014e1e) uni_indicator_pane_g6_ParamLimits

0xb684,	// (0x00014e1e) uni_indicator_pane_g6

0xf92d,	// (0x000190c7) uni_indicator_pane_g_ParamLimits

0xe5d6,	// (0x00017d70) popup_tmo_note_window_ParamLimits

0xe5d6,	// (0x00017d70) popup_tmo_note_window

0x7830,	// (0x00010fca) fshwr2_bg_pane

0x07e2,	// (0x00009f7c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x07e2,	// (0x00009f7c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x00019650) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x00019650) fshwr2_func_candi_cell_pane_g

0xcdc2,	// (0x0001655c) bg_popup_window_pane_cp01

0x081b,	// (0x00009fb5) bg_popup_window_pane_g1_cp01

0x0824,	// (0x00009fbe) bg_popup_window_pane_cp22_ParamLimits

0x0824,	// (0x00009fbe) bg_popup_window_pane_cp22

0x0832,	// (0x00009fcc) listscroll_tmo_link_pane_ParamLimits

0x0832,	// (0x00009fcc) listscroll_tmo_link_pane

0x0872,	// (0x0000a00c) popup_tmo_note_window_g1_ParamLimits

0x0872,	// (0x0000a00c) popup_tmo_note_window_g1

0x087f,	// (0x0000a019) tmo_note_info_pane_ParamLimits

0x087f,	// (0x0000a019) tmo_note_info_pane

0x0899,	// (0x0000a033) list_tmo_note_info_pane_g1_ParamLimits

0x0899,	// (0x0000a033) list_tmo_note_info_pane_g1

0x08b0,	// (0x0000a04a) list_tmo_note_info_pane_g2_ParamLimits

0x08b0,	// (0x0000a04a) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x00019655) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x00019655) list_tmo_note_info_pane_g

0x08cc,	// (0x0000a066) list_tmo_note_info_text_pane_ParamLimits

0x08cc,	// (0x0000a066) list_tmo_note_info_text_pane

0x094d,	// (0x0000a0e7) list_tmo_link_pane

0x095a,	// (0x0000a0f4) scroll_pane_cp20

0x0967,	// (0x0000a101) list_single_tmo_link_pane_ParamLimits

0x0967,	// (0x0000a101) list_single_tmo_link_pane

0x0977,	// (0x0000a111) list_single_tmo_link_pane_t1

0x0985,	// (0x0000a11f) list_tmo_note_info_text_pane_t1_ParamLimits

0x0985,	// (0x0000a11f) list_tmo_note_info_text_pane_t1

0x894e,	// (0x000120e8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x894e,	// (0x000120e8) aid_size_touch_scroll_bar_cp01

0x87c3,	// (0x00011f5d) aid_size_touch_slider_marker

0x5ecf,	// (0x0000f669) popup_settings_window_ParamLimits

0x5ecf,	// (0x0000f669) popup_settings_window

0x9923,	// (0x000130bd) popup_candi_list_indi_window

0x9f00,	// (0x0001369a) aid_touch_navi_pane_ParamLimits

0x6f85,	// (0x0001071f) rs_clock_indi_pane

0x6f8e,	// (0x00010728) sctrl_sk_bottom_pane_ParamLimits

0x6f9f,	// (0x00010739) sctrl_sk_top_pane_ParamLimits

0x70a2,	// (0x0001083c) popup_fep_tooltip_window

0x0204,	// (0x0000999e) aid_size_cell_widget_grid_ParamLimits

0x0256,	// (0x000099f0) cell_ai5_widget_pane_g1_ParamLimits

0x0256,	// (0x000099f0) cell_ai5_widget_pane_g1

0x02a9,	// (0x00009a43) cell_ai5_widget_pane_g6_ParamLimits

0x02b5,	// (0x00009a4f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x000195d3) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x000195d3) cell_ai5_widget_pane_g

0x03e4,	// (0x00009b7e) cell_ai5_widget_pane_t10_ParamLimits

0x03e4,	// (0x00009b7e) cell_ai5_widget_pane_t10

0x03fa,	// (0x00009b94) grid_ai5_widget_pane_ParamLimits

0x049c,	// (0x00009c36) cell_contacts_ai5_widget_pane_ParamLimits

0x049c,	// (0x00009c36) cell_contacts_ai5_widget_pane

0x0681,	// (0x00009e1b) popup_discreet_window_t3_ParamLimits

0x0681,	// (0x00009e1b) popup_discreet_window_t3

0x0728,	// (0x00009ec2) popup_fshwr2_char_preview_window_ParamLimits

0x0728,	// (0x00009ec2) popup_fshwr2_char_preview_window

0x08ea,	// (0x0000a084) tmo_note_info_pane_t1

0x08ff,	// (0x0000a099) tmo_note_info_pane_t2

0x0914,	// (0x0000a0ae) tmo_note_info_pane_t3

0x0929,	// (0x0000a0c3) tmo_note_info_pane_t4

0x093b,	// (0x0000a0d5) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x0001965a) tmo_note_info_pane_t

0x094d,	// (0x0000a0e7) list_tmo_link_pane_ParamLimits

0x095a,	// (0x0000a0f4) scroll_pane_cp20_ParamLimits

0x7830,	// (0x00010fca) bg_popup_fep_char_preview_window_cp01

0x099e,	// (0x0000a138) popup_fshwr2_char_preview_window_t1

0x09ac,	// (0x0000a146) popup_candi_list_indi_window_g1

0x09b5,	// (0x0000a14f) bg_cell_contacts_ai5_widget_pane

0x09c1,	// (0x0000a15b) cell_contacts_ai5_widget_pane_g1

0x09d5,	// (0x0000a16f) cell_contacts_ai5_widget_pane_g2

0x09e4,	// (0x0000a17e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x00019665) cell_contacts_ai5_widget_pane_g

0x09f7,	// (0x0000a191) cell_contacts_ai5_widget_pane_t1

0x870b,	// (0x00011ea5) highlight_cell_shortcut_ai5_widget_pane_cp01

0x0a6e,	// (0x0000a208) settings_container_pane

0x957d,	// (0x00012d17) listscroll_set_pane_copy1

0xc296,	// (0x00015a30) scroll_pane_cp121_copy1

0x0a7a,	// (0x0000a214) set_content_pane_copy1

0x0a82,	// (0x0000a21c) aid_height_set_list_copy1_ParamLimits

0x0a82,	// (0x0000a21c) aid_height_set_list_copy1

0xb8a4,	// (0x0001503e) aid_size_parent_copy1_ParamLimits

0xb8a4,	// (0x0001503e) aid_size_parent_copy1

0x0a8e,	// (0x0000a228) button_value_adjust_pane_cp6_copy1_ParamLimits

0x0a8e,	// (0x0000a228) button_value_adjust_pane_cp6_copy1

0x98fb,	// (0x00013095) list_highlight_pane_cp2_copy1_ParamLimits

0x98fb,	// (0x00013095) list_highlight_pane_cp2_copy1

0x0aa2,	// (0x0000a23c) list_set_pane_copy1_ParamLimits

0x0aa2,	// (0x0000a23c) list_set_pane_copy1

0x0a09,	// (0x0000a1a3) main_pane_set_t1_copy1_ParamLimits

0x0a09,	// (0x0000a1a3) main_pane_set_t1_copy1

0x0a43,	// (0x0000a1dd) main_pane_set_t2_copy1_ParamLimits

0x0a43,	// (0x0000a1dd) main_pane_set_t2_copy1

0x0b4f,	// (0x0000a2e9) main_pane_set_t3_copy1

0x0b5d,	// (0x0000a2f7) main_pane_set_t4_copy1

0x0a62,	// (0x0000a1fc) set_content_pane_g1_copy1_ParamLimits

0x0a62,	// (0x0000a1fc) set_content_pane_g1_copy1

0x0b6b,	// (0x0000a305) setting_code_pane_copy1

0x0b75,	// (0x0000a30f) setting_slider_graphic_pane_copy1

0x0b75,	// (0x0000a30f) setting_slider_pane_copy1

0x0b75,	// (0x0000a30f) setting_text_pane_copy1

0x0b7f,	// (0x0000a319) setting_volume_pane_copy1

0x0b88,	// (0x0000a322) settings_code_pane_cp2_copy1

0x0b90,	// (0x0000a32a) settings_code_pane_cp_copy1_ParamLimits

0x0b90,	// (0x0000a32a) settings_code_pane_cp_copy1

0x0ba4,	// (0x0000a33e) volume_set_pane_copy1

0x0bac,	// (0x0000a346) volume_set_pane_g10_copy1

0x0bb4,	// (0x0000a34e) volume_set_pane_g1_copy1

0x0bbc,	// (0x0000a356) volume_set_pane_g2_copy1

0x0bc4,	// (0x0000a35e) volume_set_pane_g3_copy1

0x0bcc,	// (0x0000a366) volume_set_pane_g4_copy1

0x0bd4,	// (0x0000a36e) volume_set_pane_g5_copy1

0x0bdc,	// (0x0000a376) volume_set_pane_g6_copy1

0x0be4,	// (0x0000a37e) volume_set_pane_g7_copy1

0x0bec,	// (0x0000a386) volume_set_pane_g8_copy1

0x0bf4,	// (0x0000a38e) volume_set_pane_g9_copy1

0x7924,	// (0x000110be) bg_set_opt_pane_cp_copy1_ParamLimits

0x7924,	// (0x000110be) bg_set_opt_pane_cp_copy1

0x0bfc,	// (0x0000a396) setting_slider_pane_t1_copy1_ParamLimits

0x0bfc,	// (0x0000a396) setting_slider_pane_t1_copy1

0x0c1a,	// (0x0000a3b4) setting_slider_pane_t2_copy1_ParamLimits

0x0c1a,	// (0x0000a3b4) setting_slider_pane_t2_copy1

0x0c34,	// (0x0000a3ce) setting_slider_pane_t3_copy1_ParamLimits

0x0c34,	// (0x0000a3ce) setting_slider_pane_t3_copy1

0x0c4c,	// (0x0000a3e6) slider_set_pane_copy1_ParamLimits

0x0c4c,	// (0x0000a3e6) slider_set_pane_copy1

0x8843,	// (0x00011fdd) set_opt_bg_pane_g1_copy2

0x884b,	// (0x00011fe5) set_opt_bg_pane_g2_copy2

0x0c62,	// (0x0000a3fc) set_opt_bg_pane_g3_copy2

0x885b,	// (0x00011ff5) set_opt_bg_pane_g4_copy2

0x8863,	// (0x00011ffd) set_opt_bg_pane_g5_copy2

0x886b,	// (0x00012005) set_opt_bg_pane_g6_copy2

0x0c6c,	// (0x0000a406) set_opt_bg_pane_g7_copy2

0x0c74,	// (0x0000a40e) set_opt_bg_pane_g8_copy2

0x0c7e,	// (0x0000a418) set_opt_bg_pane_g9_copy2

0x77da,	// (0x00010f74) aid_size_touch_slider_mark_copy1_ParamLimits

0x77da,	// (0x00010f74) aid_size_touch_slider_mark_copy1

0x0c9c,	// (0x0000a436) slider_set_pane_g1_copy1

0x77ee,	// (0x00010f88) slider_set_pane_g2_copy1

0x69b9,	// (0x00010153) slider_set_pane_g3_copy1_ParamLimits

0x69b9,	// (0x00010153) slider_set_pane_g3_copy1

0x69cd,	// (0x00010167) slider_set_pane_g4_copy1_ParamLimits

0x69cd,	// (0x00010167) slider_set_pane_g4_copy1

0x69e5,	// (0x0001017f) slider_set_pane_g5_copy1_ParamLimits

0x69e5,	// (0x0001017f) slider_set_pane_g5_copy1

0x69b9,	// (0x00010153) slider_set_pane_g6_copy1_ParamLimits

0x69b9,	// (0x00010153) slider_set_pane_g6_copy1

0x77f6,	// (0x00010f90) slider_set_pane_g7_copy1_ParamLimits

0x77f6,	// (0x00010f90) slider_set_pane_g7_copy1

0x7844,	// (0x00010fde) bg_set_opt_pane_cp2_copy1

0x0cc3,	// (0x0000a45d) setting_slider_graphic_pane_g1_copy1

0x0ccc,	// (0x0000a466) setting_slider_graphic_pane_t1_copy1

0x0cdc,	// (0x0000a476) setting_slider_graphic_pane_t2_copy1

0x0cec,	// (0x0000a486) slider_set_pane_cp_copy1

0x0cfc,	// (0x0000a496) input_focus_pane_cp1_copy1

0x0d05,	// (0x0000a49f) list_set_text_pane_copy1

0x0d0d,	// (0x0000a4a7) setting_text_pane_g1_copy1

0x797d,	// (0x00011117) set_text_pane_t1_copy1

0x0cfc,	// (0x0000a496) input_focus_pane_cp2_copy1

0x0d0d,	// (0x0000a4a7) setting_code_pane_g1_copy1

0x0d16,	// (0x0000a4b0) setting_code_pane_t1_copy1

0x0d24,	// (0x0000a4be) list_set_graphic_pane_copy1

0x7844,	// (0x00010fde) bg_set_opt_pane_cp4_copy1

0x9283,	// (0x00012a1d) list_set_graphic_pane_g1_copy1_ParamLimits

0x9283,	// (0x00012a1d) list_set_graphic_pane_g1_copy1

0x0d36,	// (0x0000a4d0) list_set_graphic_pane_g2_copy1

0x929b,	// (0x00012a35) list_set_graphic_pane_t1_copy1_ParamLimits

0x929b,	// (0x00012a35) list_set_graphic_pane_t1_copy1

0xcdc2,	// (0x0001655c) rs_clock_indi_pane_g1

0x0d3e,	// (0x0000a4d8) rs_clock_indi_pane_t1

0x0d4c,	// (0x0000a4e6) rs_indi_pane

0x0d54,	// (0x0000a4ee) rs_indi_pane_g1

0x0d5d,	// (0x0000a4f7) rs_indi_pane_g2

0x0d66,	// (0x0000a500) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x0001966c) rs_indi_pane_g

0x957d,	// (0x00012d17) bg_popup_preview_window_pane_cp03

0x0d6f,	// (0x0000a509) popup_fep_tooltip_window_t1

0xdc25,	// (0x000173bf) popup_note2_window_g2_ParamLimits

0xdc25,	// (0x000173bf) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x00019405) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x00019405) popup_note2_window_g

0xe20f,	// (0x000179a9) bg_popup_sub_pane_cp11_ParamLimits

0xe21c,	// (0x000179b6) cell_ai3_links_pane_g1_ParamLimits

0xe233,	// (0x000179cd) cell_ai3_links_pane_t1

0x797d,	// (0x00011117) set_text_pane_t1_copy1_ParamLimits

0x948e,	// (0x00012c28) cell_graphic_popup_pane_cp2_ParamLimits

0x948e,	// (0x00012c28) cell_graphic_popup_pane_cp2

0x0d7d,	// (0x0000a517) cell_graphic_popup_pane_g1_cp2

0x7ef5,	// (0x0001168f) cell_graphic_popup_pane_g2_cp2

0x0d85,	// (0x0000a51f) cell_graphic_popup_pane_g3_cp2

0x0d8d,	// (0x0000a527) cell_graphic_popup_pane_t2_cp2

0x7f06,	// (0x000116a0) grid_highlight_pane_cp3_cp2

0x8c34,	// (0x000123ce) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x870b,	// (0x00011ea5) main_tmo_pane_ParamLimits

0xe5ca,	// (0x00017d64) popup_tmo_big_image_note_window

0x0246,	// (0x000099e0) cell_ai5_widget_list_pane

0x024e,	// (0x000099e8) cell_ai5_widget_lrg_icon_pane

0x08ea,	// (0x0000a084) tmo_note_info_pane_t1_ParamLimits

0x08ff,	// (0x0000a099) tmo_note_info_pane_t2_ParamLimits

0x0914,	// (0x0000a0ae) tmo_note_info_pane_t3_ParamLimits

0x0929,	// (0x0000a0c3) tmo_note_info_pane_t4_ParamLimits

0x093b,	// (0x0000a0d5) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x0001965a) tmo_note_info_pane_t_ParamLimits

0x0a6e,	// (0x0000a208) settings_container_pane_ParamLimits

0x0cf4,	// (0x0000a48e) indicator_popup_pane_cp5

0x0cf4,	// (0x0000a48e) indicator_popup_pane_cp6

0x0d24,	// (0x0000a4be) list_set_graphic_pane_copy1_ParamLimits

0x7830,	// (0x00010fca) bg_popup_window_pane_cp23

0x0d9b,	// (0x0000a535) popup_tmo_big_image_note_window_g1

0x0da5,	// (0x0000a53f) popup_tmo_big_image_note_window_t1

0x0db5,	// (0x0000a54f) popup_tmo_big_image_note_window_t2

0x0dc5,	// (0x0000a55f) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x00019673) popup_tmo_big_image_note_window_t

0x0dd5,	// (0x0000a56f) cell_ai5_widget_lrg_icon_pane_g1

0x0ddd,	// (0x0000a577) cell_ai5_widget_lrg_icon_pane_t1

0x0deb,	// (0x0000a585) cell_ai5_widget_list_row_pane_ParamLimits

0x0deb,	// (0x0000a585) cell_ai5_widget_list_row_pane

0x0e04,	// (0x0000a59e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0e04,	// (0x0000a59e) cell_ai5_widget_list_row_pane_g1

0x0e11,	// (0x0000a5ab) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0e11,	// (0x0000a5ab) cell_ai5_widget_list_row_pane_t1

0x0e29,	// (0x0000a5c3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0e29,	// (0x0000a5c3) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee0,	// (0x0001967a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x0001967a) cell_ai5_widget_list_row_pane_t

0x5d86,	// (0x0000f520) main_fep_vtchi_ss_pane

0x0e3b,	// (0x0000a5d5) popup_fep_char_pre_window

0x0e43,	// (0x0000a5dd) popup_fep_ituss_window

0x0e5d,	// (0x0000a5f7) popup_fep_vkbss_window

0x0e7b,	// (0x0000a615) grid_vkbss_keypad_pane_ParamLimits

0x0e7b,	// (0x0000a615) grid_vkbss_keypad_pane

0x0e8b,	// (0x0000a625) ituss_keypad_pane

0x0ea1,	// (0x0000a63b) aid_vkbss_key_offset_ParamLimits

0x0ea1,	// (0x0000a63b) aid_vkbss_key_offset

0x0ead,	// (0x0000a647) cell_vkbss_key_pane_ParamLimits

0x0ead,	// (0x0000a647) cell_vkbss_key_pane

0x0ec3,	// (0x0000a65d) bg_cell_vkbss_key_g1_ParamLimits

0x0ec3,	// (0x0000a65d) bg_cell_vkbss_key_g1

0x0ecf,	// (0x0000a669) cell_vkbss_key_3p_pane_ParamLimits

0x0ecf,	// (0x0000a669) cell_vkbss_key_3p_pane

0x0ee9,	// (0x0000a683) cell_vkbss_key_g1_ParamLimits

0x0ee9,	// (0x0000a683) cell_vkbss_key_g1

0x0f03,	// (0x0000a69d) cell_vkbss_key_t1_ParamLimits

0x0f03,	// (0x0000a69d) cell_vkbss_key_t1

0x0f2e,	// (0x0000a6c8) cell_ituss_key_pane_ParamLimits

0x0f2e,	// (0x0000a6c8) cell_ituss_key_pane

0x0f3e,	// (0x0000a6d8) bg_cell_ituss_key_g1_ParamLimits

0x0f3e,	// (0x0000a6d8) bg_cell_ituss_key_g1

0x0f4a,	// (0x0000a6e4) cell_ituss_key_pane_g1_ParamLimits

0x0f4a,	// (0x0000a6e4) cell_ituss_key_pane_g1

0x0f56,	// (0x0000a6f0) cell_ituss_key_pane_g2_ParamLimits

0x0f56,	// (0x0000a6f0) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x0001967f) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x0001967f) cell_ituss_key_pane_g

0x0f6f,	// (0x0000a709) cell_ituss_key_t1_ParamLimits

0x0f6f,	// (0x0000a709) cell_ituss_key_t1

0x0f9d,	// (0x0000a737) cell_ituss_key_t2_ParamLimits

0x0f9d,	// (0x0000a737) cell_ituss_key_t2

0x0fce,	// (0x0000a768) cell_ituss_key_t3_ParamLimits

0x0fce,	// (0x0000a768) cell_ituss_key_t3

0x0fff,	// (0x0000a799) cell_ituss_key_t4_ParamLimits

0x0fff,	// (0x0000a799) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x00019684) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x00019684) cell_ituss_key_t

0x1030,	// (0x0000a7ca) cell_vkbss_key_3p_pane_g1

0x1038,	// (0x0000a7d2) cell_vkbss_key_3p_pane_g2

0x1040,	// (0x0000a7da) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x0001968d) cell_vkbss_key_3p_pane_g

0x7830,	// (0x00010fca) bg_popup_fep_char_preview_window_cp02

0x1048,	// (0x0000a7e2) popup_fep_char_pre_window_t1

0x01fa,	// (0x00009994) main_ai5_sk_pane

0x09b5,	// (0x0000a14f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x09c1,	// (0x0000a15b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x09d5,	// (0x0000a16f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x09e4,	// (0x0000a17e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x00019665) cell_contacts_ai5_widget_pane_g_ParamLimits

0x09f7,	// (0x0000a191) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x870b,	// (0x00011ea5) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x1057,	// (0x0000a7f1) main_ai5_sk_pane_g1

0xa945,	// (0x000140df) popup_query_code_window_g1

0x0e52,	// (0x0000a5ec) popup_fep_vkb_icf_pane

0x0e66,	// (0x0000a600) popup_fep_vtchi_icf_pane

0x870b,	// (0x00011ea5) bg_icf_pane

0x0e8b,	// (0x0000a625) list_vkb_icf_pane

0x870b,	// (0x00011ea5) bg_icf_pane_cp01

0x107b,	// (0x0000a815) vtchi_icf_list_pane

0x108b,	// (0x0000a825) list_vkb_icf_pane_t1_ParamLimits

0x108b,	// (0x0000a825) list_vkb_icf_pane_t1

0x10a2,	// (0x0000a83c) vtchi_icf_list_pane_t1_ParamLimits

0x10a2,	// (0x0000a83c) vtchi_icf_list_pane_t1

0x0e43,	// (0x0000a5dd) popup_fep_ituss_window_ParamLimits

0x0e66,	// (0x0000a600) popup_fep_vtchi_icf_pane_ParamLimits

0x0e8b,	// (0x0000a625) ituss_keypad_pane_ParamLimits

0x0e97,	// (0x0000a631) ituss_sks_pane

0x870b,	// (0x00011ea5) bg_icf_pane_ParamLimits

0x1060,	// (0x0000a7fa) icf_edit_indi_pane_ParamLimits

0x1060,	// (0x0000a7fa) icf_edit_indi_pane

0x0e8b,	// (0x0000a625) list_vkb_icf_pane_ParamLimits

0x870b,	// (0x00011ea5) bg_icf_pane_cp01_ParamLimits

0x106f,	// (0x0000a809) icf_edit_indi_pane_cp01_ParamLimits

0x106f,	// (0x0000a809) icf_edit_indi_pane_cp01

0x1083,	// (0x0000a81d) vtchi_query_pane

0xd040,	// (0x000167da) icf_edit_indi_pane_g1_ParamLimits

0xd040,	// (0x000167da) icf_edit_indi_pane_g1

0x10be,	// (0x0000a858) icf_edit_indi_pane_g2_ParamLimits

0x10be,	// (0x0000a858) icf_edit_indi_pane_g2

0x0001,

0xfefa,	// (0x00019694) icf_edit_indi_pane_g_ParamLimits

0xfefa,	// (0x00019694) icf_edit_indi_pane_g

0x10ca,	// (0x0000a864) icf_edit_indi_pane_t1

0x10d8,	// (0x0000a872) bg_input_focus_pane_cp042

0x80d9,	// (0x00011873) vtchi_button_pane

0x10e1,	// (0x0000a87b) vtchi_query_pane_t1

0x10ef,	// (0x0000a889) vtchi_query_pane_t2

0x10fd,	// (0x0000a897) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x00019699) vtchi_query_pane_t

0x7830,	// (0x00010fca) bg_button_pane_cp13

0x110b,	// (0x0000a8a5) vtchi_button_pane_g1

0x1113,	// (0x0000a8ad) ituss_sks_pane_g1

0x111e,	// (0x0000a8b8) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x000196a0) ituss_sks_pane_g

0x1126,	// (0x0000a8c0) ituss_sks_pane_t1

0x1134,	// (0x0000a8ce) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x000196a5) ituss_sks_pane_t

0xc7dc,	// (0x00015f76) indicator_nsta_pane_cp_g1

0xc7e5,	// (0x00015f7f) indicator_nsta_pane_cp_g2

0xc7ed,	// (0x00015f87) indicator_nsta_pane_cp_g3

0xc7f5,	// (0x00015f8f) indicator_nsta_pane_cp_g4

0xc7fd,	// (0x00015f97) indicator_nsta_pane_cp_g5

0xc805,	// (0x00015f9f) indicator_nsta_pane_cp_g6

0x0005,

0xfaa9,	// (0x00019243) indicator_nsta_pane_cp_g

0xf2a5,	// (0x00018a3f) cell_graphic2_pane_t2_ParamLimits

0xf2a5,	// (0x00018a3f) cell_graphic2_pane_t2

0x0001,

0xfdc2,	// (0x0001955c) cell_graphic2_pane_t_ParamLimits

0xfdc2,	// (0x0001955c) cell_graphic2_pane_t

0xf2d2,	// (0x00018a6c) cell_graphic2_control_pane_t1

0x8faa,	// (0x00012744) signal_pane_g3_ParamLimits

0x8faa,	// (0x00012744) signal_pane_g3

0x8fb9,	// (0x00012753) signal_pane_g4_ParamLimits

0x8fb9,	// (0x00012753) signal_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

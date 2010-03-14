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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x000107f8 };

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
0x07ae,	// (0x00010fa6) Screen

0x07c2,	// (0x00010fba) application_window_ParamLimits

0x07c2,	// (0x00010fba) application_window

0x07dc,	// (0x00010fd4) screen_g1

0xd641,	// (0x0001de39) area_bottom_pane_ParamLimits

0xd641,	// (0x0001de39) area_bottom_pane

0xd701,	// (0x0001def9) area_top_pane_ParamLimits

0xd701,	// (0x0001def9) area_top_pane

0xd795,	// (0x0001df8d) main_pane_ParamLimits

0xd795,	// (0x0001df8d) main_pane

0x07e6,	// (0x00010fde) misc_graphics

0x2ed2,	// (0x000136ca) battery_pane_ParamLimits

0x2ed2,	// (0x000136ca) battery_pane

0x3c87,	// (0x0001447f) bg_status_flat_pane_g8

0x3c8f,	// (0x00014487) bg_status_flat_pane_g9

0x2f94,	// (0x0001378c) context_pane_ParamLimits

0x2f94,	// (0x0001378c) context_pane

0x30aa,	// (0x000138a2) navi_pane_ParamLimits

0x30aa,	// (0x000138a2) navi_pane

0x3128,	// (0x00013920) signal_pane_ParamLimits

0x3128,	// (0x00013920) signal_pane

0x0008,

0xf88a,	// (0x00020082) bg_status_flat_pane_g

0x3195,	// (0x0001398d) status_pane_g1_ParamLimits

0x3195,	// (0x0001398d) status_pane_g1

0x31a1,	// (0x00013999) status_pane_g2_ParamLimits

0x31a1,	// (0x00013999) status_pane_g2

0x31ad,	// (0x000139a5) status_pane_g3_ParamLimits

0x31ad,	// (0x000139a5) status_pane_g3

0x0004,

0xf7b8,	// (0x0001ffb0) status_pane_g_ParamLimits

0xf7b8,	// (0x0001ffb0) status_pane_g

0x31e1,	// (0x000139d9) title_pane_ParamLimits

0x31e1,	// (0x000139d9) title_pane

0x321e,	// (0x00013a16) uni_indicator_pane_ParamLimits

0x321e,	// (0x00013a16) uni_indicator_pane

0x283b,	// (0x00013033) bg_list_pane_ParamLimits

0x283b,	// (0x00013033) bg_list_pane

0xcdac,	// (0x0001d5a4) find_pane

0x2863,	// (0x0001305b) listscroll_app_pane_ParamLimits

0x2863,	// (0x0001305b) listscroll_app_pane

0x286f,	// (0x00013067) listscroll_form_pane

0xcdb4,	// (0x0001d5ac) listscroll_gen_pane_ParamLimits

0xcdb4,	// (0x0001d5ac) listscroll_gen_pane

0x286f,	// (0x00013067) listscroll_set_pane

0x1a1a,	// (0x00012212) main_idle_act_pane

0x251f,	// (0x00012d17) main_idle_trad_pane

0x251f,	// (0x00012d17) main_list_empty_pane

0x289d,	// (0x00013095) main_midp_pane

0x28a9,	// (0x000130a1) main_pane_g1_ParamLimits

0x28a9,	// (0x000130a1) main_pane_g1

0x28b7,	// (0x000130af) popup_ai_message_window_ParamLimits

0x28b7,	// (0x000130af) popup_ai_message_window

0x2965,	// (0x0001315d) popup_fep_china_uni_window_ParamLimits

0x2965,	// (0x0001315d) popup_fep_china_uni_window

0x29c1,	// (0x000131b9) popup_fep_japan_candidate_window_ParamLimits

0x29c1,	// (0x000131b9) popup_fep_japan_candidate_window

0x29e1,	// (0x000131d9) popup_fep_japan_predictive_window_ParamLimits

0x29e1,	// (0x000131d9) popup_fep_japan_predictive_window

0x2a11,	// (0x00013209) popup_find_window

0x2a1e,	// (0x00013216) popup_grid_graphic_window_ParamLimits

0x2a1e,	// (0x00013216) popup_grid_graphic_window

0x2a46,	// (0x0001323e) popup_large_graphic_colour_window

0x2a6c,	// (0x00013264) popup_menu_window_ParamLimits

0x2a6c,	// (0x00013264) popup_menu_window

0x2c24,	// (0x0001341c) popup_note_image_window

0x2c10,	// (0x00013408) popup_note_wait_window_ParamLimits

0x2c10,	// (0x00013408) popup_note_wait_window

0x2c10,	// (0x00013408) popup_note_window_ParamLimits

0x2c10,	// (0x00013408) popup_note_window

0x2c7a,	// (0x00013472) popup_query_code_window_ParamLimits

0x2c7a,	// (0x00013472) popup_query_code_window

0x2c8e,	// (0x00013486) popup_query_data_code_window_ParamLimits

0x2c8e,	// (0x00013486) popup_query_data_code_window

0x2cab,	// (0x000134a3) popup_query_data_window_ParamLimits

0x2cab,	// (0x000134a3) popup_query_data_window

0x2cc7,	// (0x000134bf) popup_query_sat_info_window_ParamLimits

0x2cc7,	// (0x000134bf) popup_query_sat_info_window

0x2d00,	// (0x000134f8) popup_snote_single_graphic_window_ParamLimits

0x2d00,	// (0x000134f8) popup_snote_single_graphic_window

0x2d00,	// (0x000134f8) popup_snote_single_text_window_ParamLimits

0x2d00,	// (0x000134f8) popup_snote_single_text_window

0x2d15,	// (0x0001350d) popup_sub_window_general

0x2e45,	// (0x0001363d) popup_window_general_ParamLimits

0x2e45,	// (0x0001363d) popup_window_general

0x2e5a,	// (0x00013652) power_save_pane

0xdef4,	// (0x0001e6ec) control_pane_g1_ParamLimits

0xdef4,	// (0x0001e6ec) control_pane_g1

0xdf1b,	// (0x0001e713) control_pane_g2_ParamLimits

0xdf1b,	// (0x0001e713) control_pane_g2

0x27dc,	// (0x00012fd4) control_pane_g3_ParamLimits

0x27dc,	// (0x00012fd4) control_pane_g3

0x0007,

0xf7a0,	// (0x0001ff98) control_pane_g_ParamLimits

0xf7a0,	// (0x0001ff98) control_pane_g

0xdf61,	// (0x0001e759) control_pane_t1_ParamLimits

0xdf61,	// (0x0001e759) control_pane_t1

0xdfad,	// (0x0001e7a5) control_pane_t2_ParamLimits

0xdfad,	// (0x0001e7a5) control_pane_t2

0x0002,

0xf7b1,	// (0x0001ffa9) control_pane_t_ParamLimits

0xf7b1,	// (0x0001ffa9) control_pane_t

0x26fd,	// (0x00012ef5) navi_navi_volume_pane_cp1

0x2706,	// (0x00012efe) status_small_icon_pane

0x270e,	// (0x00012f06) status_small_pane_g1_ParamLimits

0x270e,	// (0x00012f06) status_small_pane_g1

0x2742,	// (0x00012f3a) status_small_pane_g2_ParamLimits

0x2742,	// (0x00012f3a) status_small_pane_g2

0x274e,	// (0x00012f46) status_small_pane_g3_ParamLimits

0x274e,	// (0x00012f46) status_small_pane_g3

0x275a,	// (0x00012f52) status_small_pane_g4_ParamLimits

0x275a,	// (0x00012f52) status_small_pane_g4

0x2766,	// (0x00012f5e) status_small_pane_g5_ParamLimits

0x2766,	// (0x00012f5e) status_small_pane_g5

0x2775,	// (0x00012f6d) status_small_pane_g6_ParamLimits

0x2775,	// (0x00012f6d) status_small_pane_g6

0x0007,

0xf78f,	// (0x0001ff87) status_small_pane_g_ParamLimits

0xf78f,	// (0x0001ff87) status_small_pane_g

0x27a5,	// (0x00012f9d) status_small_pane_t1

0x27c8,	// (0x00012fc0) status_small_wait_pane_ParamLimits

0x27c8,	// (0x00012fc0) status_small_wait_pane

0x1f13,	// (0x0001270b) aid_levels_signal_ParamLimits

0x1f13,	// (0x0001270b) aid_levels_signal

0x1f22,	// (0x0001271a) signal_pane_g1_ParamLimits

0x1f22,	// (0x0001271a) signal_pane_g1

0x1f37,	// (0x0001272f) signal_pane_g2_ParamLimits

0x1f37,	// (0x0001272f) signal_pane_g2

0x0003,

0xf720,	// (0x0001ff18) signal_pane_g_ParamLimits

0xf720,	// (0x0001ff18) signal_pane_g

0x1f6f,	// (0x00012767) context_pane_g1

0x07f0,	// (0x00010fe8) title_pane_g1

0x0826,	// (0x0001101e) title_pane_t1

0x088e,	// (0x00011086) title_pane_t2

0x08b4,	// (0x000110ac) title_pane_t3

0x0002,

0xf56f,	// (0x0001fd67) title_pane_t

0x3236,	// (0x00013a2e) aid_levels_battery_ParamLimits

0x3236,	// (0x00013a2e) aid_levels_battery

0x3247,	// (0x00013a3f) battery_pane_g1_ParamLimits

0x3247,	// (0x00013a3f) battery_pane_g1

0x325d,	// (0x00013a55) battery_pane_g2_ParamLimits

0x325d,	// (0x00013a55) battery_pane_g2

0x0001,

0xf7c3,	// (0x0001ffbb) battery_pane_g_ParamLimits

0xf7c3,	// (0x0001ffbb) battery_pane_g

0x45bd,	// (0x00014db5) uni_indicator_pane_g1

0x45d2,	// (0x00014dca) uni_indicator_pane_g2

0x45e8,	// (0x00014de0) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0002012a) uni_indicator_pane_g

0x2391,	// (0x00012b89) navi_icon_pane_ParamLimits

0x2391,	// (0x00012b89) navi_icon_pane

0x22da,	// (0x00012ad2) navi_midp_pane

0x23ad,	// (0x00012ba5) navi_navi_pane

0x23b7,	// (0x00012baf) navi_text_pane_ParamLimits

0x23b7,	// (0x00012baf) navi_text_pane

0x07dc,	// (0x00010fd4) status_small_wait_pane_g1

0x0cfd,	// (0x000114f5) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x00020125) status_small_wait_pane_g

0x42e2,	// (0x00014ada) navi_navi_icon_text_pane

0x42fc,	// (0x00014af4) navi_navi_pane_g1_ParamLimits

0x42fc,	// (0x00014af4) navi_navi_pane_g1

0x42ea,	// (0x00014ae2) navi_navi_pane_g2_ParamLimits

0x42ea,	// (0x00014ae2) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x000200f3) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x000200f3) navi_navi_pane_g

0x430e,	// (0x00014b06) navi_navi_tabs_pane

0x4317,	// (0x00014b0f) navi_navi_text_pane

0x42e2,	// (0x00014ada) navi_navi_volume_pane

0x42be,	// (0x00014ab6) navi_text_pane_t1

0x42b2,	// (0x00014aaa) navi_icon_pane_g1

0x4205,	// (0x000149fd) navi_navi_text_pane_t1

0xe2b9,	// (0x0001eab1) navi_navi_volume_pane_g1

0xe2c1,	// (0x0001eab9) volume_small_pane

0x416b,	// (0x00014963) navi_navi_icon_text_pane_g1

0x4173,	// (0x0001496b) navi_navi_icon_text_pane_t1

0x23ad,	// (0x00012ba5) navi_tabs_2_long_pane

0x23ad,	// (0x00012ba5) navi_tabs_2_pane

0x23ad,	// (0x00012ba5) navi_tabs_3_long_pane

0x23ad,	// (0x00012ba5) navi_tabs_3_pane

0x23ad,	// (0x00012ba5) navi_tabs_4_pane

0xe299,	// (0x0001ea91) tabs_2_active_pane_ParamLimits

0xe299,	// (0x0001ea91) tabs_2_active_pane

0xe2a9,	// (0x0001eaa1) tabs_2_passive_pane_ParamLimits

0xe2a9,	// (0x0001eaa1) tabs_2_passive_pane

0xe267,	// (0x0001ea5f) tabs_3_active_pane_ParamLimits

0xe267,	// (0x0001ea5f) tabs_3_active_pane

0xe277,	// (0x0001ea6f) tabs_3_passive_pane_ParamLimits

0xe277,	// (0x0001ea6f) tabs_3_passive_pane

0xe288,	// (0x0001ea80) tabs_3_passive_pane_cp_ParamLimits

0xe288,	// (0x0001ea80) tabs_3_passive_pane_cp

0xe223,	// (0x0001ea1b) tabs_4_active_pane_ParamLimits

0xe223,	// (0x0001ea1b) tabs_4_active_pane

0xe234,	// (0x0001ea2c) tabs_4_passive_pane_ParamLimits

0xe234,	// (0x0001ea2c) tabs_4_passive_pane

0xe245,	// (0x0001ea3d) tabs_4_passive_pane_cp_ParamLimits

0xe245,	// (0x0001ea3d) tabs_4_passive_pane_cp

0xe256,	// (0x0001ea4e) tabs_4_passive_pane_cp2_ParamLimits

0xe256,	// (0x0001ea4e) tabs_4_passive_pane_cp2

0xe1ff,	// (0x0001e9f7) tabs_2_long_active_pane_ParamLimits

0xe1ff,	// (0x0001e9f7) tabs_2_long_active_pane

0xe211,	// (0x0001ea09) tabs_2_long_passive_pane_ParamLimits

0xe211,	// (0x0001ea09) tabs_2_long_passive_pane

0xe1c0,	// (0x0001e9b8) tabs_3_long_active_pane_ParamLimits

0xe1c0,	// (0x0001e9b8) tabs_3_long_active_pane

0xe1d3,	// (0x0001e9cb) tabs_3_long_passive_pane_ParamLimits

0xe1d3,	// (0x0001e9cb) tabs_3_long_passive_pane

0xe1ec,	// (0x0001e9e4) tabs_3_long_passive_pane_cp_ParamLimits

0xe1ec,	// (0x0001e9e4) tabs_3_long_passive_pane_cp

0xe166,	// (0x0001e95e) volume_small_pane_g1

0xe16f,	// (0x0001e967) volume_small_pane_g2

0xe178,	// (0x0001e970) volume_small_pane_g3

0xe181,	// (0x0001e979) volume_small_pane_g4

0xe18a,	// (0x0001e982) volume_small_pane_g5

0xe193,	// (0x0001e98b) volume_small_pane_g6

0xe19c,	// (0x0001e994) volume_small_pane_g7

0xe1a5,	// (0x0001e99d) volume_small_pane_g8

0xe1ae,	// (0x0001e9a6) volume_small_pane_g9

0xe1b7,	// (0x0001e9af) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x000200bf) volume_small_pane_g

0x08c6,	// (0x000110be) bg_active_tab_pane_cp2_ParamLimits

0x08c6,	// (0x000110be) bg_active_tab_pane_cp2

0x08d4,	// (0x000110cc) tabs_3_active_pane_g1

0x08dc,	// (0x000110d4) tabs_3_active_pane_t1

0x08c6,	// (0x000110be) bg_passive_tab_pane_cp2_ParamLimits

0x08c6,	// (0x000110be) bg_passive_tab_pane_cp2

0x08d4,	// (0x000110cc) tabs_3_passive_pane_g1

0x08dc,	// (0x000110d4) tabs_3_passive_pane_t1

0x08c6,	// (0x000110be) bg_active_tab_pane_cp3_ParamLimits

0x08c6,	// (0x000110be) bg_active_tab_pane_cp3

0x08ee,	// (0x000110e6) tabs_4_active_pane_g1

0x08f6,	// (0x000110ee) tabs_4_active_pane_t1

0x08c6,	// (0x000110be) bg_passive_tab_pane_cp3_ParamLimits

0x08c6,	// (0x000110be) bg_passive_tab_pane_cp3

0x08ee,	// (0x000110e6) tabs_4_1_passive_pane_g1

0x08f6,	// (0x000110ee) tabs_4_1_passive_pane_t1

0x289d,	// (0x00013095) list_highlight_pane_cp2

0x486e,	// (0x00015066) list_set_pane_ParamLimits

0x486e,	// (0x00015066) list_set_pane

0x4914,	// (0x0001510c) main_pane_set_t1_ParamLimits

0x4914,	// (0x0001510c) main_pane_set_t1

0x4934,	// (0x0001512c) main_pane_set_t2_ParamLimits

0x4934,	// (0x0001512c) main_pane_set_t2

0x4948,	// (0x00015140) main_pane_set_t3_ParamLimits

0x4948,	// (0x00015140) main_pane_set_t3

0x495a,	// (0x00015152) main_pane_set_t4_ParamLimits

0x495a,	// (0x00015152) main_pane_set_t4

0x0003,

0xf997,	// (0x0002018f) main_pane_set_t_ParamLimits

0xf997,	// (0x0002018f) main_pane_set_t

0x496c,	// (0x00015164) setting_code_pane

0x4978,	// (0x00015170) setting_slider_graphic_pane

0x4978,	// (0x00015170) setting_slider_pane

0x4978,	// (0x00015170) setting_text_pane

0x4978,	// (0x00015170) setting_volume_pane

0xd9da,	// (0x0001e1d2) volume_set_pane

0x08c6,	// (0x000110be) bg_set_opt_pane_cp

0xd9e2,	// (0x0001e1da) setting_slider_pane_t1

0xd9fb,	// (0x0001e1f3) setting_slider_pane_t2

0xda15,	// (0x0001e20d) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0001fd6e) setting_slider_pane_t

0xda2d,	// (0x0001e225) slider_set_pane

0x07e6,	// (0x00010fde) bg_set_opt_pane_cp2

0x0908,	// (0x00011100) setting_slider_graphic_pane_g1

0xda43,	// (0x0001e23b) setting_slider_graphic_pane_t1

0xda53,	// (0x0001e24b) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0001fd75) setting_slider_graphic_pane_t

0xda63,	// (0x0001e25b) slider_set_pane_cp

0x07e6,	// (0x00010fde) input_focus_pane_cp1

0x482d,	// (0x00015025) list_set_text_pane

0x07dc,	// (0x00010fd4) setting_text_pane_g1

0x07e6,	// (0x00010fde) input_focus_pane_cp2

0x07dc,	// (0x00010fd4) setting_code_pane_g1

0x0911,	// (0x00011109) setting_code_pane_t1

0xc5d9,	// (0x0001cdd1) set_text_pane_t1_ParamLimits

0xc5d9,	// (0x0001cdd1) set_text_pane_t1

0x17e5,	// (0x00011fdd) set_opt_bg_pane_g1

0x17ed,	// (0x00011fe5) set_opt_bg_pane_g2

0x4807,	// (0x00014fff) set_opt_bg_pane_g3

0x17fd,	// (0x00011ff5) set_opt_bg_pane_g4

0x1805,	// (0x00011ffd) set_opt_bg_pane_g5

0x180d,	// (0x00012005) set_opt_bg_pane_g6

0x4811,	// (0x00015009) set_opt_bg_pane_g7

0x4819,	// (0x00015011) set_opt_bg_pane_g8

0x4823,	// (0x0001501b) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0002017c) set_opt_bg_pane_g

0x47fa,	// (0x00014ff2) slider_set_pane_g1

0xe32e,	// (0x0001eb26) slider_set_pane_g2

0x0006,

0xf975,	// (0x0002016d) slider_set_pane_g

0xe2ca,	// (0x0001eac2) volume_set_pane_g1

0xe2d2,	// (0x0001eaca) volume_set_pane_g2

0xe2da,	// (0x0001ead2) volume_set_pane_g3

0xe2e2,	// (0x0001eada) volume_set_pane_g4

0xe2ea,	// (0x0001eae2) volume_set_pane_g5

0xe2f2,	// (0x0001eaea) volume_set_pane_g6

0xe2fa,	// (0x0001eaf2) volume_set_pane_g7

0xe302,	// (0x0001eafa) volume_set_pane_g8

0xe30a,	// (0x0001eb02) volume_set_pane_g9

0xe312,	// (0x0001eb0a) volume_set_pane_g10

0x0009,

0xf94d,	// (0x00020145) volume_set_pane_g

0x0939,	// (0x00011131) indicator_pane_ParamLimits

0x0939,	// (0x00011131) indicator_pane

0x0945,	// (0x0001113d) main_idle_pane_g2_ParamLimits

0x0945,	// (0x0001113d) main_idle_pane_g2

0x096d,	// (0x00011165) main_pane_idle_g1_ParamLimits

0x096d,	// (0x00011165) main_pane_idle_g1

0x097a,	// (0x00011172) popup_clock_digital_analogue_window_ParamLimits

0x097a,	// (0x00011172) popup_clock_digital_analogue_window

0x0991,	// (0x00011189) soft_indicator_pane_ParamLimits

0x0991,	// (0x00011189) soft_indicator_pane

0x099d,	// (0x00011195) wallpaper_pane_ParamLimits

0x099d,	// (0x00011195) wallpaper_pane

0x07dc,	// (0x00010fd4) wallpaper_pane_g1

0x09b1,	// (0x000111a9) indicator_pane_g1_ParamLimits

0x09b1,	// (0x000111a9) indicator_pane_g1

0x4cde,	// (0x000154d6) navi_navi_icon_text_pane_srt_g1

0x09cc,	// (0x000111c4) soft_indicator_pane_t1

0x09e6,	// (0x000111de) aid_ps_area_pane

0x09f7,	// (0x000111ef) aid_ps_clock_pane

0x0a05,	// (0x000111fd) aid_ps_indicator_pane

0x0a11,	// (0x00011209) indicator_ps_pane_ParamLimits

0x0a11,	// (0x00011209) indicator_ps_pane

0x0a20,	// (0x00011218) power_save_pane_g1_ParamLimits

0x0a20,	// (0x00011218) power_save_pane_g1

0x0a2c,	// (0x00011224) power_save_pane_g2_ParamLimits

0x0a2c,	// (0x00011224) power_save_pane_g2

0xd5f5,	// (0x0001dded) aid_navinavi_width_pane

0x09e6,	// (0x000111de) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0001fd7a) power_save_pane_g_ParamLimits

0xf582,	// (0x0001fd7a) power_save_pane_g

0x0a3a,	// (0x00011232) power_save_pane_t1_ParamLimits

0x0a3a,	// (0x00011232) power_save_pane_t1

0x09f7,	// (0x000111ef) aid_ps_clock_pane_ParamLimits

0x0a05,	// (0x000111fd) aid_ps_indicator_pane_ParamLimits

0x0a4c,	// (0x00011244) power_save_pane_t4_ParamLimits

0x0a4c,	// (0x00011244) power_save_pane_t4

0x0001,

0xf587,	// (0x0001fd7f) power_save_pane_t_ParamLimits

0xf587,	// (0x0001fd7f) power_save_pane_t

0x0a76,	// (0x0001126e) power_save_t3_ParamLimits

0x0a76,	// (0x0001126e) power_save_t3

0x0a61,	// (0x00011259) power_save_t2_ParamLimits

0x0a61,	// (0x00011259) power_save_t2

0x0a8b,	// (0x00011283) indicator_ps_pane_g1

0x0a94,	// (0x0001128c) ai_gene_pane_ParamLimits

0x0a94,	// (0x0001128c) ai_gene_pane

0x0aa0,	// (0x00011298) ai_links_pane_ParamLimits

0x0aa0,	// (0x00011298) ai_links_pane

0x0aac,	// (0x000112a4) indicator_pane_cp1_ParamLimits

0x0aac,	// (0x000112a4) indicator_pane_cp1

0x0ab8,	// (0x000112b0) main_pane_idle_g1_cp_ParamLimits

0x0ab8,	// (0x000112b0) main_pane_idle_g1_cp

0x0ac4,	// (0x000112bc) popup_ai_links_title_window

0x0acd,	// (0x000112c5) soft_indicator_pane_cp1_ParamLimits

0x0acd,	// (0x000112c5) soft_indicator_pane_cp1

0x45ab,	// (0x00014da3) ai_links_pane_g1

0x45b4,	// (0x00014dac) grid_ai_links_pane

0x458e,	// (0x00014d86) ai_gene_pane_1

0x4599,	// (0x00014d91) ai_gene_pane_2

0x45a2,	// (0x00014d9a) list_highlight_pane_cp4

0x4572,	// (0x00014d6a) cell_ai_link_pane_ParamLimits

0x4572,	// (0x00014d6a) cell_ai_link_pane

0x456a,	// (0x00014d62) cell_ai_link_pane_g1

0x0cfd,	// (0x000114f5) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x00020120) cell_ai_link_pane_g

0x07e6,	// (0x00010fde) grid_highlight_cp2

0x07e6,	// (0x00010fde) bg_popup_sub_pane_cp1

0x0ae7,	// (0x000112df) popup_ai_links_title_window_t1

0x44b8,	// (0x00014cb0) ai_gene_pane_1_g1_ParamLimits

0x44b8,	// (0x00014cb0) ai_gene_pane_1_g1

0x44c4,	// (0x00014cbc) ai_gene_pane_1_g2_ParamLimits

0x44c4,	// (0x00014cbc) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x00020116) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x00020116) ai_gene_pane_1_g

0x44d1,	// (0x00014cc9) ai_gene_pane_1_t1_ParamLimits

0x44d1,	// (0x00014cc9) ai_gene_pane_1_t1

0x4505,	// (0x00014cfd) grid_ai_soft_ind_pane

0x44a3,	// (0x00014c9b) ai_gene_pane_2_t1_ParamLimits

0x44a3,	// (0x00014c9b) ai_gene_pane_2_t1

0x0af6,	// (0x000112ee) main_pane_empty_t1_ParamLimits

0x0af6,	// (0x000112ee) main_pane_empty_t1

0x0b0e,	// (0x00011306) main_pane_empty_t2_ParamLimits

0x0b0e,	// (0x00011306) main_pane_empty_t2

0x0b23,	// (0x0001131b) main_pane_empty_t3_ParamLimits

0x0b23,	// (0x0001131b) main_pane_empty_t3

0x0b35,	// (0x0001132d) main_pane_empty_t4_ParamLimits

0x0b35,	// (0x0001132d) main_pane_empty_t4

0x0b47,	// (0x0001133f) main_pane_empty_t5_ParamLimits

0x0b47,	// (0x0001133f) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0001fd84) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0001fd84) main_pane_empty_t

0x18e2,	// (0x000120da) bg_popup_window_pane_ParamLimits

0x18e2,	// (0x000120da) bg_popup_window_pane

0x4213,	// (0x00014a0b) find_popup_pane_cp2_ParamLimits

0x4213,	// (0x00014a0b) find_popup_pane_cp2

0x421f,	// (0x00014a17) heading_pane_ParamLimits

0x421f,	// (0x00014a17) heading_pane

0x07e6,	// (0x00010fde) bg_popup_sub_pane

0x418d,	// (0x00014985) bg_popup_window_pane_g1_ParamLimits

0x418d,	// (0x00014985) bg_popup_window_pane_g1

0x4199,	// (0x00014991) bg_popup_window_pane_g2_ParamLimits

0x4199,	// (0x00014991) bg_popup_window_pane_g2

0x41a5,	// (0x0001499d) bg_popup_window_pane_g3_ParamLimits

0x41a5,	// (0x0001499d) bg_popup_window_pane_g3

0x41b1,	// (0x000149a9) bg_popup_window_pane_g4_ParamLimits

0x41b1,	// (0x000149a9) bg_popup_window_pane_g4

0x41bd,	// (0x000149b5) bg_popup_window_pane_g5_ParamLimits

0x41bd,	// (0x000149b5) bg_popup_window_pane_g5

0x41c9,	// (0x000149c1) bg_popup_window_pane_g6_ParamLimits

0x41c9,	// (0x000149c1) bg_popup_window_pane_g6

0x41d5,	// (0x000149cd) bg_popup_window_pane_g7_ParamLimits

0x41d5,	// (0x000149cd) bg_popup_window_pane_g7

0x41e1,	// (0x000149d9) bg_popup_window_pane_g8_ParamLimits

0x41e1,	// (0x000149d9) bg_popup_window_pane_g8

0x41ed,	// (0x000149e5) bg_popup_window_pane_g9_ParamLimits

0x41ed,	// (0x000149e5) bg_popup_window_pane_g9

0x41f9,	// (0x000149f1) bg_popup_window_pane_g10_ParamLimits

0x41f9,	// (0x000149f1) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x000200de) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x000200de) bg_popup_window_pane_g

0x4122,	// (0x0001491a) bg_popup_heading_pane_ParamLimits

0x4122,	// (0x0001491a) bg_popup_heading_pane

0xe3b6,	// (0x0001ebae) tabs_4_passive_pane_cp_srt_ParamLimits

0xe3b6,	// (0x0001ebae) tabs_4_passive_pane_cp_srt

0xe3c8,	// (0x0001ebc0) tabs_4_passive_pane_srt_ParamLimits

0x4136,	// (0x0001492e) heading_pane_g2

0xe3c8,	// (0x0001ebc0) tabs_4_passive_pane_srt

0x289d,	// (0x00013095) bg_passive_tab_pane_cp3_srt_ParamLimits

0x289d,	// (0x00013095) bg_passive_tab_pane_cp3_srt

0x413e,	// (0x00014936) heading_pane_t1_ParamLimits

0x413e,	// (0x00014936) heading_pane_t1

0x4155,	// (0x0001494d) heading_pane_t2_ParamLimits

0x4155,	// (0x0001494d) heading_pane_t2

0x0001,

0xf8e1,	// (0x000200d9) heading_pane_t_ParamLimits

0xf8e1,	// (0x000200d9) heading_pane_t

0x3c4f,	// (0x00014447) bg_popup_heading_pane_g1

0x3cfe,	// (0x000144f6) bg_popup_heading_pane_g2

0x3d08,	// (0x00014500) bg_popup_heading_pane_g3

0x3d12,	// (0x0001450a) bg_popup_heading_pane_g4

0x3d1c,	// (0x00014514) bg_popup_heading_pane_g5

0x3d26,	// (0x0001451e) bg_popup_heading_pane_g6

0x3d2e,	// (0x00014526) bg_popup_heading_pane_g7

0x3d36,	// (0x0001452e) bg_popup_heading_pane_g8

0x3d40,	// (0x00014538) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x00020095) bg_popup_heading_pane_g

0x336f,	// (0x00013b67) bg_popup_sub_pane_g1

0x337f,	// (0x00013b77) bg_popup_sub_pane_g2

0x3377,	// (0x00013b6f) bg_popup_sub_pane_g3

0x338f,	// (0x00013b87) bg_popup_sub_pane_g4

0x3387,	// (0x00013b7f) bg_popup_sub_pane_g5

0x3397,	// (0x00013b8f) bg_popup_sub_pane_g6

0x339f,	// (0x00013b97) bg_popup_sub_pane_g7

0x33af,	// (0x00013ba7) bg_popup_sub_pane_g8

0x33a7,	// (0x00013b9f) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0002006f) bg_popup_sub_pane_g

0x0b5b,	// (0x00011353) bg_popup_window_pane_cp5_ParamLimits

0x0b5b,	// (0x00011353) bg_popup_window_pane_cp5

0x0b77,	// (0x0001136f) popup_note_window_g1_ParamLimits

0x0b77,	// (0x0001136f) popup_note_window_g1

0x0b83,	// (0x0001137b) popup_note_window_t1_ParamLimits

0x0b83,	// (0x0001137b) popup_note_window_t1

0x0b99,	// (0x00011391) popup_note_window_t2_ParamLimits

0x0b99,	// (0x00011391) popup_note_window_t2

0x0baf,	// (0x000113a7) popup_note_window_t3_ParamLimits

0x0baf,	// (0x000113a7) popup_note_window_t3

0x0bc5,	// (0x000113bd) popup_note_window_t4_ParamLimits

0x0bc5,	// (0x000113bd) popup_note_window_t4

0x0bed,	// (0x000113e5) popup_note_window_t5_ParamLimits

0x0bed,	// (0x000113e5) popup_note_window_t5

0x0004,

0xf597,	// (0x0001fd8f) popup_note_window_t_ParamLimits

0xf597,	// (0x0001fd8f) popup_note_window_t

0x0c11,	// (0x00011409) bg_popup_window_pane_cp6_ParamLimits

0x0c11,	// (0x00011409) bg_popup_window_pane_cp6

0x3bcb,	// (0x000143c3) popup_note_image_window_g1_ParamLimits

0x3bcb,	// (0x000143c3) popup_note_image_window_g1

0x3bd7,	// (0x000143cf) popup_note_image_window_g2_ParamLimits

0x3bd7,	// (0x000143cf) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x00020063) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x00020063) popup_note_image_window_g

0x3bf0,	// (0x000143e8) popup_note_image_window_t1_ParamLimits

0x3bf0,	// (0x000143e8) popup_note_image_window_t1

0x3c09,	// (0x00014401) popup_note_image_window_t2_ParamLimits

0x3c09,	// (0x00014401) popup_note_image_window_t2

0x3c22,	// (0x0001441a) popup_note_image_window_t3_ParamLimits

0x3c22,	// (0x0001441a) popup_note_image_window_t3

0x0002,

0xf870,	// (0x00020068) popup_note_image_window_t_ParamLimits

0xf870,	// (0x00020068) popup_note_image_window_t

0x3a8c,	// (0x00014284) bg_popup_window_pane_cp7_ParamLimits

0x3a8c,	// (0x00014284) bg_popup_window_pane_cp7

0x3abc,	// (0x000142b4) popup_note_wait_window_g1_ParamLimits

0x3abc,	// (0x000142b4) popup_note_wait_window_g1

0x3ac8,	// (0x000142c0) popup_note_wait_window_g2_ParamLimits

0x3ac8,	// (0x000142c0) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x00020051) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x00020051) popup_note_wait_window_g

0x3ae0,	// (0x000142d8) popup_note_wait_window_t1_ParamLimits

0x3ae0,	// (0x000142d8) popup_note_wait_window_t1

0x3b07,	// (0x000142ff) popup_note_wait_window_t2_ParamLimits

0x3b07,	// (0x000142ff) popup_note_wait_window_t2

0x3b24,	// (0x0001431c) popup_note_wait_window_t3_ParamLimits

0x3b24,	// (0x0001431c) popup_note_wait_window_t3

0x3b37,	// (0x0001432f) popup_note_wait_window_t4_ParamLimits

0x3b37,	// (0x0001432f) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x00020058) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x00020058) popup_note_wait_window_t

0x3b5c,	// (0x00014354) wait_bar_pane_ParamLimits

0x3b5c,	// (0x00014354) wait_bar_pane

0x07e6,	// (0x00010fde) wait_anim_pane

0x07e6,	// (0x00010fde) wait_border_pane

0x07dc,	// (0x00010fd4) wait_anim_pane_g1

0x07dc,	// (0x00010fd4) wait_anim_pane_g2

0x0001,

0xf71b,	// (0x0001ff13) wait_anim_pane_g

0x3a30,	// (0x00014228) wait_border_pane_g1

0x3a3b,	// (0x00014233) wait_border_pane_g2

0x3a44,	// (0x0001423c) wait_border_pane_g3

0x0002,

0xf852,	// (0x0002004a) wait_border_pane_g

0x389b,	// (0x00014093) bg_popup_window_pane_cp16_ParamLimits

0x389b,	// (0x00014093) bg_popup_window_pane_cp16

0x399b,	// (0x00014193) indicator_popup_pane_cp4_ParamLimits

0x399b,	// (0x00014193) indicator_popup_pane_cp4

0x39af,	// (0x000141a7) popup_query_data_window_t1_ParamLimits

0x39af,	// (0x000141a7) popup_query_data_window_t1

0x39c1,	// (0x000141b9) popup_query_data_window_t2_ParamLimits

0x39c1,	// (0x000141b9) popup_query_data_window_t2

0x39da,	// (0x000141d2) popup_query_data_window_t3_ParamLimits

0x39da,	// (0x000141d2) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x00020043) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x00020043) popup_query_data_window_t

0x39f4,	// (0x000141ec) query_popup_data_pane_ParamLimits

0x39f4,	// (0x000141ec) query_popup_data_pane

0x3a08,	// (0x00014200) query_popup_data_pane_cp1_ParamLimits

0x3a08,	// (0x00014200) query_popup_data_pane_cp1

0x389b,	// (0x00014093) bg_popup_window_pane_cp10_ParamLimits

0x389b,	// (0x00014093) bg_popup_window_pane_cp10

0x38cd,	// (0x000140c5) indicator_popup_pane_ParamLimits

0x38cd,	// (0x000140c5) indicator_popup_pane

0x38ef,	// (0x000140e7) popup_query_code_window_t1_ParamLimits

0x38ef,	// (0x000140e7) popup_query_code_window_t1

0x3909,	// (0x00014101) popup_query_code_window_t2_ParamLimits

0x3909,	// (0x00014101) popup_query_code_window_t2

0x3952,	// (0x0001414a) popup_query_code_window_t3_ParamLimits

0x3952,	// (0x0001414a) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0002003c) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0002003c) popup_query_code_window_t

0x3981,	// (0x00014179) query_popup_pane_ParamLimits

0x3981,	// (0x00014179) query_popup_pane

0x0c11,	// (0x00011409) bg_popup_window_pane_cp15_ParamLimits

0x0c11,	// (0x00011409) bg_popup_window_pane_cp15

0x0c2f,	// (0x00011427) indicator_popup_pane_cp1_ParamLimits

0x0c2f,	// (0x00011427) indicator_popup_pane_cp1

0x0c42,	// (0x0001143a) indicator_popup_pane_cp2_ParamLimits

0x0c42,	// (0x0001143a) indicator_popup_pane_cp2

0x0c55,	// (0x0001144d) popup_query_data_code_window_g1_ParamLimits

0x0c55,	// (0x0001144d) popup_query_data_code_window_g1

0x0c68,	// (0x00011460) popup_query_data_code_window_t1_ParamLimits

0x0c68,	// (0x00011460) popup_query_data_code_window_t1

0x0c7a,	// (0x00011472) popup_query_data_code_window_t2_ParamLimits

0x0c7a,	// (0x00011472) popup_query_data_code_window_t2

0x0c8c,	// (0x00011484) popup_query_data_code_window_t3_ParamLimits

0x0c8c,	// (0x00011484) popup_query_data_code_window_t3

0x0ca2,	// (0x0001149a) popup_query_data_code_window_t4_ParamLimits

0x0ca2,	// (0x0001149a) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0001fd9a) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0001fd9a) popup_query_data_code_window_t

0xe08f,	// (0x0001e887) list_single_midp_graphic_pane_g3

0x0cba,	// (0x000114b2) query_popup_data_pane_cp2_ParamLimits

0x0ccd,	// (0x000114c5) query_popup_pane_cp2_ParamLimits

0x0ccd,	// (0x000114c5) query_popup_pane_cp2

0x07e6,	// (0x00010fde) bg_popup_window_pane_cp11

0x3893,	// (0x0001408b) heading_pane_cp5

0x0db5,	// (0x000115ad) listscroll_popup_info_pane

0x07e6,	// (0x00010fde) input_focus_pane_cp3

0x0ce0,	// (0x000114d8) query_popup_pane_t1

0x0cee,	// (0x000114e6) list_popup_info_pane_ParamLimits

0x0cee,	// (0x000114e6) list_popup_info_pane

0x0cfd,	// (0x000114f5) listscroll_popup_info_pane_g1

0x0d05,	// (0x000114fd) scroll_pane_cp7

0x0d0f,	// (0x00011507) popup_info_list_pane_t1_ParamLimits

0x0d0f,	// (0x00011507) popup_info_list_pane_t1

0x0d29,	// (0x00011521) popup_info_list_pane_t2_ParamLimits

0x0d29,	// (0x00011521) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0001fda3) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0001fda3) popup_info_list_pane_t

0x07e6,	// (0x00010fde) bg_popup_window_pane_cp12

0x4cf8,	// (0x000154f0) find_popup_pane

0x08c6,	// (0x000110be) bg_popup_window_pane_cp3

0x0d43,	// (0x0001153b) heading_pane_cp3

0x0d4f,	// (0x00011547) listscroll_popup_graphic_pane

0x07e6,	// (0x00010fde) bg_popup_window_pane_cp4

0x0dab,	// (0x000115a3) heading_pane_cp4

0x0db5,	// (0x000115ad) listscroll_popup_colour_pane

0x0dbd,	// (0x000115b5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0dbd,	// (0x000115b5) cell_large_graphic_colour_none_popup_pane

0x0dd1,	// (0x000115c9) grid_large_graphic_colour_popup_pane_ParamLimits

0x0dd1,	// (0x000115c9) grid_large_graphic_colour_popup_pane

0x0dfd,	// (0x000115f5) listscroll_popup_colour_pane_g1_ParamLimits

0x0dfd,	// (0x000115f5) listscroll_popup_colour_pane_g1

0x0e14,	// (0x0001160c) listscroll_popup_colour_pane_g2_ParamLimits

0x0e14,	// (0x0001160c) listscroll_popup_colour_pane_g2

0x0e2b,	// (0x00011623) listscroll_popup_colour_pane_g3_ParamLimits

0x0e2b,	// (0x00011623) listscroll_popup_colour_pane_g3

0x0e3b,	// (0x00011633) listscroll_popup_colour_pane_g4_ParamLimits

0x0e3b,	// (0x00011633) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0001fda8) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0001fda8) listscroll_popup_colour_pane_g

0x0e4f,	// (0x00011647) scroll_pane_cp6_ParamLimits

0x0e4f,	// (0x00011647) scroll_pane_cp6

0x0e61,	// (0x00011659) cell_large_graphic_colour_popup_pane_ParamLimits

0x0e61,	// (0x00011659) cell_large_graphic_colour_popup_pane

0x0e80,	// (0x00011678) cell_large_graphic_colour_none_popup_pane_t1

0x07e6,	// (0x00010fde) grid_highlight_pane_cp5

0x0e8f,	// (0x00011687) cell_large_graphic_colour_popup_pane_g1

0x0e97,	// (0x0001168f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0001fdb1) cell_large_graphic_colour_popup_pane_g

0x0e9f,	// (0x00011697) cell_large_graphic_colour_popup_pane_g2_copy1

0x0ea8,	// (0x000116a0) grid_highlight_pane_cp4

0x0eb0,	// (0x000116a8) bg_popup_window_pane_cp8_ParamLimits

0x0eb0,	// (0x000116a8) bg_popup_window_pane_cp8

0x0ecb,	// (0x000116c3) popup_snote_single_text_window_g1_ParamLimits

0x0ecb,	// (0x000116c3) popup_snote_single_text_window_g1

0x0edd,	// (0x000116d5) popup_snote_single_text_window_t1_ParamLimits

0x0edd,	// (0x000116d5) popup_snote_single_text_window_t1

0x0ef0,	// (0x000116e8) popup_snote_single_text_window_t2_ParamLimits

0x0ef0,	// (0x000116e8) popup_snote_single_text_window_t2

0x0f03,	// (0x000116fb) popup_snote_single_text_window_t3_ParamLimits

0x0f03,	// (0x000116fb) popup_snote_single_text_window_t3

0x0f3c,	// (0x00011734) popup_snote_single_text_window_t4_ParamLimits

0x0f3c,	// (0x00011734) popup_snote_single_text_window_t4

0x0f70,	// (0x00011768) popup_snote_single_text_window_t5_ParamLimits

0x0f70,	// (0x00011768) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0001fdb6) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0001fdb6) popup_snote_single_text_window_t

0x0f9f,	// (0x00011797) bg_popup_window_pane_cp9_ParamLimits

0x0f9f,	// (0x00011797) bg_popup_window_pane_cp9

0x0ecb,	// (0x000116c3) popup_snote_single_graphic_window_g1_ParamLimits

0x0ecb,	// (0x000116c3) popup_snote_single_graphic_window_g1

0x0fad,	// (0x000117a5) popup_snote_single_graphic_window_g2_ParamLimits

0x0fad,	// (0x000117a5) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0001fdc1) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0001fdc1) popup_snote_single_graphic_window_g

0x0fb9,	// (0x000117b1) popup_snote_single_graphic_window_t1_ParamLimits

0x0fb9,	// (0x000117b1) popup_snote_single_graphic_window_t1

0x0fcc,	// (0x000117c4) popup_snote_single_graphic_window_t2_ParamLimits

0x0fcc,	// (0x000117c4) popup_snote_single_graphic_window_t2

0x0fdf,	// (0x000117d7) popup_snote_single_graphic_window_t3_ParamLimits

0x0fdf,	// (0x000117d7) popup_snote_single_graphic_window_t3

0x1018,	// (0x00011810) popup_snote_single_graphic_window_t4_ParamLimits

0x1018,	// (0x00011810) popup_snote_single_graphic_window_t4

0x104c,	// (0x00011844) popup_snote_single_graphic_window_t5_ParamLimits

0x104c,	// (0x00011844) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0001fdc6) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0001fdc6) popup_snote_single_graphic_window_t

0x4c3c,	// (0x00015434) grid_graphic_popup_pane_ParamLimits

0x4c3c,	// (0x00015434) grid_graphic_popup_pane

0x4c64,	// (0x0001545c) listscroll_popup_graphic_pane_g1_ParamLimits

0x4c64,	// (0x0001545c) listscroll_popup_graphic_pane_g1

0x4c78,	// (0x00015470) listscroll_popup_graphic_pane_g2_ParamLimits

0x4c78,	// (0x00015470) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x000201b9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x000201b9) listscroll_popup_graphic_pane_g

0x4c8c,	// (0x00015484) scroll_pane_cp5

0x4be5,	// (0x000153dd) cell_graphic_popup_pane_ParamLimits

0x4be5,	// (0x000153dd) cell_graphic_popup_pane

0x4bc6,	// (0x000153be) cell_graphic_popup_pane_g1

0x4bce,	// (0x000153c6) cell_graphic_popup_pane_g2

0x0e9f,	// (0x00011697) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x000201b2) cell_graphic_popup_pane_g

0x4bd7,	// (0x000153cf) cell_graphic_popup_pane_t2

0x0ea8,	// (0x000116a0) grid_highlight_pane_cp3

0x108d,	// (0x00011885) list_gen_pane_ParamLimits

0x108d,	// (0x00011885) list_gen_pane

0x10bf,	// (0x000118b7) scroll_pane

0x4b1e,	// (0x00015316) bg_list_pane_g1_ParamLimits

0x4b1e,	// (0x00015316) bg_list_pane_g1

0x4b3b,	// (0x00015333) bg_list_pane_g2_ParamLimits

0x4b3b,	// (0x00015333) bg_list_pane_g2

0x4b50,	// (0x00015348) bg_list_pane_g3_ParamLimits

0x4b50,	// (0x00015348) bg_list_pane_g3

0x4b64,	// (0x0001535c) bg_list_pane_g4_ParamLimits

0x4b64,	// (0x0001535c) bg_list_pane_g4

0x4b78,	// (0x00015370) bg_list_pane_g5_ParamLimits

0x4b78,	// (0x00015370) bg_list_pane_g5

0x0004,

0xf9af,	// (0x000201a7) bg_list_pane_g_ParamLimits

0xf9af,	// (0x000201a7) bg_list_pane_g

0x4a31,	// (0x00015229) list_double2_graphic_large_graphic_pane_ParamLimits

0x4a31,	// (0x00015229) list_double2_graphic_large_graphic_pane

0x4a31,	// (0x00015229) list_double2_graphic_pane_ParamLimits

0x4a31,	// (0x00015229) list_double2_graphic_pane

0x4a31,	// (0x00015229) list_double2_large_graphic_pane_ParamLimits

0x4a31,	// (0x00015229) list_double2_large_graphic_pane

0xcf43,	// (0x0001d73b) list_double2_pane_ParamLimits

0xcf43,	// (0x0001d73b) list_double2_pane

0x4a31,	// (0x00015229) list_double_graphic_heading_pane_ParamLimits

0x4a31,	// (0x00015229) list_double_graphic_heading_pane

0x4a31,	// (0x00015229) list_double_graphic_pane_ParamLimits

0x4a31,	// (0x00015229) list_double_graphic_pane

0x4a31,	// (0x00015229) list_double_heading_pane_ParamLimits

0x4a31,	// (0x00015229) list_double_heading_pane

0x4a31,	// (0x00015229) list_double_large_graphic_pane_ParamLimits

0x4a31,	// (0x00015229) list_double_large_graphic_pane

0x4a31,	// (0x00015229) list_double_number_pane_ParamLimits

0x4a31,	// (0x00015229) list_double_number_pane

0x4a31,	// (0x00015229) list_double_pane_ParamLimits

0x4a31,	// (0x00015229) list_double_pane

0x4a31,	// (0x00015229) list_double_time_pane_ParamLimits

0x4a31,	// (0x00015229) list_double_time_pane

0x4a31,	// (0x00015229) list_setting_number_pane_ParamLimits

0x4a31,	// (0x00015229) list_setting_number_pane

0x4a31,	// (0x00015229) list_setting_pane_ParamLimits

0x4a31,	// (0x00015229) list_setting_pane

0xcf7e,	// (0x0001d776) list_single_2graphic_pane_ParamLimits

0xcf7e,	// (0x0001d776) list_single_2graphic_pane

0xcf7e,	// (0x0001d776) list_single_graphic_heading_pane_ParamLimits

0xcf7e,	// (0x0001d776) list_single_graphic_heading_pane

0xcf7e,	// (0x0001d776) list_single_graphic_pane_ParamLimits

0xcf7e,	// (0x0001d776) list_single_graphic_pane

0xcf7e,	// (0x0001d776) list_single_heading_pane_ParamLimits

0xcf7e,	// (0x0001d776) list_single_heading_pane

0xcfd9,	// (0x0001d7d1) list_single_large_graphic_pane_ParamLimits

0xcfd9,	// (0x0001d7d1) list_single_large_graphic_pane

0xcf7e,	// (0x0001d776) list_single_number_heading_pane_ParamLimits

0xcf7e,	// (0x0001d776) list_single_number_heading_pane

0xcf7e,	// (0x0001d776) list_single_number_pane_ParamLimits

0xcf7e,	// (0x0001d776) list_single_number_pane

0xcf7e,	// (0x0001d776) list_single_pane_ParamLimits

0xcf7e,	// (0x0001d776) list_single_pane

0x07e6,	// (0x00010fde) list_highlight_pane_cp1

0xc600,	// (0x0001cdf8) list_single_pane_g1_ParamLimits

0xc600,	// (0x0001cdf8) list_single_pane_g1

0xc60c,	// (0x0001ce04) list_single_pane_g2_ParamLimits

0xc60c,	// (0x0001ce04) list_single_pane_g2

0x0001,

0xf5e0,	// (0x0001fdd8) list_single_pane_g_ParamLimits

0xf5e0,	// (0x0001fdd8) list_single_pane_g

0xcf2d,	// (0x0001d725) list_single_pane_t1_ParamLimits

0xcf2d,	// (0x0001d725) list_single_pane_t1

0xc600,	// (0x0001cdf8) list_single_number_pane_g1_ParamLimits

0xc600,	// (0x0001cdf8) list_single_number_pane_g1

0xc60c,	// (0x0001ce04) list_single_number_pane_g2_ParamLimits

0xc60c,	// (0x0001ce04) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x0001fdd8) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x0001fdd8) list_single_number_pane_g

0xced7,	// (0x0001d6cf) list_single_number_pane_t1_ParamLimits

0xced7,	// (0x0001d6cf) list_single_number_pane_t1

0xceed,	// (0x0001d6e5) list_single_number_pane_t2_ParamLimits

0xceed,	// (0x0001d6e5) list_single_number_pane_t2

0x0001,

0xf970,	// (0x00020168) list_single_number_pane_t_ParamLimits

0xf970,	// (0x00020168) list_single_number_pane_t

0xc5f4,	// (0x0001cdec) list_single_graphic_pane_g1_ParamLimits

0xc5f4,	// (0x0001cdec) list_single_graphic_pane_g1

0xc600,	// (0x0001cdf8) list_single_graphic_pane_g2_ParamLimits

0xc600,	// (0x0001cdf8) list_single_graphic_pane_g2

0xc60c,	// (0x0001ce04) list_single_graphic_pane_g3_ParamLimits

0xc60c,	// (0x0001ce04) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0001fdd1) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0001fdd1) list_single_graphic_pane_g

0xc618,	// (0x0001ce10) list_single_graphic_pane_t1_ParamLimits

0xc618,	// (0x0001ce10) list_single_graphic_pane_t1

0xc600,	// (0x0001cdf8) list_single_heading_pane_g1_ParamLimits

0xc600,	// (0x0001cdf8) list_single_heading_pane_g1

0xc60c,	// (0x0001ce04) list_single_heading_pane_g2_ParamLimits

0xc60c,	// (0x0001ce04) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0001fdd8) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0001fdd8) list_single_heading_pane_g

0xc62e,	// (0x0001ce26) list_single_heading_pane_t1_ParamLimits

0xc62e,	// (0x0001ce26) list_single_heading_pane_t1

0xc644,	// (0x0001ce3c) list_single_heading_pane_t2_ParamLimits

0xc644,	// (0x0001ce3c) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0001fddd) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0001fddd) list_single_heading_pane_t

0xc600,	// (0x0001cdf8) list_single_number_heading_pane_g1_ParamLimits

0xc600,	// (0x0001cdf8) list_single_number_heading_pane_g1

0xc60c,	// (0x0001ce04) list_single_number_heading_pane_g2_ParamLimits

0xc60c,	// (0x0001ce04) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x0001fdd8) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x0001fdd8) list_single_number_heading_pane_g

0xc62e,	// (0x0001ce26) list_single_number_heading_pane_t1_ParamLimits

0xc62e,	// (0x0001ce26) list_single_number_heading_pane_t1

0xc656,	// (0x0001ce4e) list_single_number_heading_pane_t2_ParamLimits

0xc656,	// (0x0001ce4e) list_single_number_heading_pane_t2

0xc668,	// (0x0001ce60) list_single_number_heading_pane_t3_ParamLimits

0xc668,	// (0x0001ce60) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0001fde2) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0001fde2) list_single_number_heading_pane_t

0xc67a,	// (0x0001ce72) list_single_graphic_heading_pane_g1_ParamLimits

0xc67a,	// (0x0001ce72) list_single_graphic_heading_pane_g1

0xc686,	// (0x0001ce7e) list_single_graphic_heading_pane_g4_ParamLimits

0xc686,	// (0x0001ce7e) list_single_graphic_heading_pane_g4

0xc60c,	// (0x0001ce04) list_single_graphic_heading_pane_g5_ParamLimits

0xc60c,	// (0x0001ce04) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x0001fde9) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x0001fde9) list_single_graphic_heading_pane_g

0xc62e,	// (0x0001ce26) list_single_graphic_heading_pane_t1_ParamLimits

0xc62e,	// (0x0001ce26) list_single_graphic_heading_pane_t1

0xc697,	// (0x0001ce8f) list_single_graphic_heading_pane_t2_ParamLimits

0xc697,	// (0x0001ce8f) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x0001fdf0) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x0001fdf0) list_single_graphic_heading_pane_t

0xc6a9,	// (0x0001cea1) list_single_large_graphic_pane_g1_ParamLimits

0xc6a9,	// (0x0001cea1) list_single_large_graphic_pane_g1

0xc6b5,	// (0x0001cead) list_single_large_graphic_pane_g2_ParamLimits

0xc6b5,	// (0x0001cead) list_single_large_graphic_pane_g2

0xc6c1,	// (0x0001ceb9) list_single_large_graphic_pane_g3_ParamLimits

0xc6c1,	// (0x0001ceb9) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0001fdf5) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0001fdf5) list_single_large_graphic_pane_g

0x3a3b,	// (0x00014233) wait_border_pane_g2_copy1

0xc6cd,	// (0x0001cec5) list_single_large_graphic_pane_g4_cp2

0xc6d5,	// (0x0001cecd) list_single_large_graphic_pane_t1_ParamLimits

0xc6d5,	// (0x0001cecd) list_single_large_graphic_pane_t1

0xc6eb,	// (0x0001cee3) list_double_pane_g1_ParamLimits

0xc6eb,	// (0x0001cee3) list_double_pane_g1

0xc6f7,	// (0x0001ceef) list_double_pane_g2_ParamLimits

0xc6f7,	// (0x0001ceef) list_double_pane_g2

0x0001,

0xf604,	// (0x0001fdfc) list_double_pane_g_ParamLimits

0xf604,	// (0x0001fdfc) list_double_pane_g

0xc703,	// (0x0001cefb) list_double_pane_t1_ParamLimits

0xc703,	// (0x0001cefb) list_double_pane_t1

0xc719,	// (0x0001cf11) list_double_pane_t2_ParamLimits

0xc719,	// (0x0001cf11) list_double_pane_t2

0x0001,

0xf609,	// (0x0001fe01) list_double_pane_t_ParamLimits

0xf609,	// (0x0001fe01) list_double_pane_t

0xc72b,	// (0x0001cf23) list_double2_pane_g1_ParamLimits

0xc72b,	// (0x0001cf23) list_double2_pane_g1

0xc73c,	// (0x0001cf34) list_double2_pane_g2_ParamLimits

0xc73c,	// (0x0001cf34) list_double2_pane_g2

0x0001,

0xf60e,	// (0x0001fe06) list_double2_pane_g_ParamLimits

0xf60e,	// (0x0001fe06) list_double2_pane_g

0xc748,	// (0x0001cf40) list_double2_pane_t1_ParamLimits

0xc748,	// (0x0001cf40) list_double2_pane_t1

0xc75e,	// (0x0001cf56) list_double2_pane_t2_ParamLimits

0xc75e,	// (0x0001cf56) list_double2_pane_t2

0x0001,

0xf613,	// (0x0001fe0b) list_double2_pane_t_ParamLimits

0xf613,	// (0x0001fe0b) list_double2_pane_t

0xc6eb,	// (0x0001cee3) list_double_number_pane_g1_ParamLimits

0xc6eb,	// (0x0001cee3) list_double_number_pane_g1

0xc6f7,	// (0x0001ceef) list_double_number_pane_g2_ParamLimits

0xc6f7,	// (0x0001ceef) list_double_number_pane_g2

0x0001,

0xf604,	// (0x0001fdfc) list_double_number_pane_g_ParamLimits

0xf604,	// (0x0001fdfc) list_double_number_pane_g

0xc770,	// (0x0001cf68) list_double_number_pane_t1_ParamLimits

0xc770,	// (0x0001cf68) list_double_number_pane_t1

0xc782,	// (0x0001cf7a) list_double_number_pane_t2_ParamLimits

0xc782,	// (0x0001cf7a) list_double_number_pane_t2

0xc798,	// (0x0001cf90) list_double_number_pane_t3_ParamLimits

0xc798,	// (0x0001cf90) list_double_number_pane_t3

0x0002,

0xf618,	// (0x0001fe10) list_double_number_pane_t_ParamLimits

0xf618,	// (0x0001fe10) list_double_number_pane_t

0xc7aa,	// (0x0001cfa2) list_double_graphic_pane_g1_ParamLimits

0xc7aa,	// (0x0001cfa2) list_double_graphic_pane_g1

0xc7b6,	// (0x0001cfae) list_double_graphic_pane_g2_ParamLimits

0xc7b6,	// (0x0001cfae) list_double_graphic_pane_g2

0xc7c5,	// (0x0001cfbd) list_double_graphic_pane_g3_ParamLimits

0xc7c5,	// (0x0001cfbd) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x0001fe17) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x0001fe17) list_double_graphic_pane_g

0xc7dd,	// (0x0001cfd5) list_double_graphic_pane_t1_ParamLimits

0xc7dd,	// (0x0001cfd5) list_double_graphic_pane_t1

0xc7f3,	// (0x0001cfeb) list_double_graphic_pane_t2_ParamLimits

0xc7f3,	// (0x0001cfeb) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0001fe20) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0001fe20) list_double_graphic_pane_t

0xc805,	// (0x0001cffd) list_double2_graphic_pane_g1_ParamLimits

0xc805,	// (0x0001cffd) list_double2_graphic_pane_g1

0xc811,	// (0x0001d009) list_double2_graphic_pane_g2_ParamLimits

0xc811,	// (0x0001d009) list_double2_graphic_pane_g2

0xc81d,	// (0x0001d015) list_double2_graphic_pane_g3_ParamLimits

0xc81d,	// (0x0001d015) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x0001fe25) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x0001fe25) list_double2_graphic_pane_g

0xc829,	// (0x0001d021) list_double2_graphic_pane_t1_ParamLimits

0xc829,	// (0x0001d021) list_double2_graphic_pane_t1

0xc83f,	// (0x0001d037) list_double2_graphic_pane_t2_ParamLimits

0xc83f,	// (0x0001d037) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x0001fe2c) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x0001fe2c) list_double2_graphic_pane_t

0xc851,	// (0x0001d049) list_double_large_graphic_pane_g1_ParamLimits

0xc851,	// (0x0001d049) list_double_large_graphic_pane_g1

0xc87a,	// (0x0001d072) list_double_large_graphic_pane_g2_ParamLimits

0xc87a,	// (0x0001d072) list_double_large_graphic_pane_g2

0xc6f7,	// (0x0001ceef) list_double_large_graphic_pane_g3_ParamLimits

0xc6f7,	// (0x0001ceef) list_double_large_graphic_pane_g3

0xc88b,	// (0x0001d083) list_double_large_graphic_pane_g4_ParamLimits

0xc88b,	// (0x0001d083) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x0001fe31) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x0001fe31) list_double_large_graphic_pane_g

0xc8b0,	// (0x0001d0a8) list_double_large_graphic_pane_t1_ParamLimits

0xc8b0,	// (0x0001d0a8) list_double_large_graphic_pane_t1

0xc8c9,	// (0x0001d0c1) list_double_large_graphic_pane_t2_ParamLimits

0xc8c9,	// (0x0001d0c1) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x0001fe3c) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x0001fe3c) list_double_large_graphic_pane_t

0xc8db,	// (0x0001d0d3) list_double2_large_graphic_pane_g1_ParamLimits

0xc8db,	// (0x0001d0d3) list_double2_large_graphic_pane_g1

0xc8e7,	// (0x0001d0df) list_double2_large_graphic_pane_g2_ParamLimits

0xc8e7,	// (0x0001d0df) list_double2_large_graphic_pane_g2

0xc81d,	// (0x0001d015) list_double2_large_graphic_pane_g3_ParamLimits

0xc81d,	// (0x0001d015) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x0001fe41) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x0001fe41) list_double2_large_graphic_pane_g

0xc8f8,	// (0x0001d0f0) list_double2_large_graphic_pane_t1_ParamLimits

0xc8f8,	// (0x0001d0f0) list_double2_large_graphic_pane_t1

0xc90e,	// (0x0001d106) list_double2_large_graphic_pane_t2_ParamLimits

0xc90e,	// (0x0001d106) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x0001fe48) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x0001fe48) list_double2_large_graphic_pane_t

0xc920,	// (0x0001d118) list_double_heading_pane_g1_ParamLimits

0xc920,	// (0x0001d118) list_double_heading_pane_g1

0xc931,	// (0x0001d129) list_double_heading_pane_g2_ParamLimits

0xc931,	// (0x0001d129) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0001fe4d) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0001fe4d) list_double_heading_pane_g

0xc93d,	// (0x0001d135) list_double_heading_pane_t1_ParamLimits

0xc93d,	// (0x0001d135) list_double_heading_pane_t1

0xc953,	// (0x0001d14b) list_double_heading_pane_t2_ParamLimits

0xc953,	// (0x0001d14b) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x0001fe52) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x0001fe52) list_double_heading_pane_t

0xc805,	// (0x0001cffd) list_double_graphic_heading_pane_g1_ParamLimits

0xc805,	// (0x0001cffd) list_double_graphic_heading_pane_g1

0xc920,	// (0x0001d118) list_double_graphic_heading_pane_g2_ParamLimits

0xc920,	// (0x0001d118) list_double_graphic_heading_pane_g2

0xc931,	// (0x0001d129) list_double_graphic_heading_pane_g3_ParamLimits

0xc931,	// (0x0001d129) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x0001fe57) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x0001fe57) list_double_graphic_heading_pane_g

0xc965,	// (0x0001d15d) list_double_graphic_heading_pane_t1_ParamLimits

0xc965,	// (0x0001d15d) list_double_graphic_heading_pane_t1

0xc83f,	// (0x0001d037) list_double_graphic_heading_pane_t2_ParamLimits

0xc83f,	// (0x0001d037) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0001fe5e) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0001fe5e) list_double_graphic_heading_pane_t

0xc87a,	// (0x0001d072) list_double_time_pane_g1_ParamLimits

0xc87a,	// (0x0001d072) list_double_time_pane_g1

0xc6f7,	// (0x0001ceef) list_double_time_pane_g2_ParamLimits

0xc6f7,	// (0x0001ceef) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x0001fe63) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x0001fe63) list_double_time_pane_g

0xc97b,	// (0x0001d173) list_double_time_pane_t1_ParamLimits

0xc97b,	// (0x0001d173) list_double_time_pane_t1

0xc991,	// (0x0001d189) list_double_time_pane_t2_ParamLimits

0xc991,	// (0x0001d189) list_double_time_pane_t2

0xc9a3,	// (0x0001d19b) list_double_time_pane_t3_ParamLimits

0xc9a3,	// (0x0001d19b) list_double_time_pane_t3

0xc9b5,	// (0x0001d1ad) list_double_time_pane_t4_ParamLimits

0xc9b5,	// (0x0001d1ad) list_double_time_pane_t4

0x0003,

0xf670,	// (0x0001fe68) list_double_time_pane_t_ParamLimits

0xf670,	// (0x0001fe68) list_double_time_pane_t

0xc811,	// (0x0001d009) list_setting_pane_g1_ParamLimits

0xc811,	// (0x0001d009) list_setting_pane_g1

0xc81d,	// (0x0001d015) list_setting_pane_g2_ParamLimits

0xc81d,	// (0x0001d015) list_setting_pane_g2

0x0001,

0xf679,	// (0x0001fe71) list_setting_pane_g_ParamLimits

0xf679,	// (0x0001fe71) list_setting_pane_g

0xc9c7,	// (0x0001d1bf) list_setting_pane_t1_ParamLimits

0xc9c7,	// (0x0001d1bf) list_setting_pane_t1

0xc9e1,	// (0x0001d1d9) list_setting_pane_t2_ParamLimits

0xc9e1,	// (0x0001d1d9) list_setting_pane_t2

0x0002,

0xf67e,	// (0x0001fe76) list_setting_pane_t_ParamLimits

0xf67e,	// (0x0001fe76) list_setting_pane_t

0xca20,	// (0x0001d218) set_value_pane_cp_ParamLimits

0xca20,	// (0x0001d218) set_value_pane_cp

0xca2c,	// (0x0001d224) list_setting_number_pane_g1_ParamLimits

0xca2c,	// (0x0001d224) list_setting_number_pane_g1

0xca38,	// (0x0001d230) list_setting_number_pane_g2_ParamLimits

0xca38,	// (0x0001d230) list_setting_number_pane_g2

0x0001,

0xf685,	// (0x0001fe7d) list_setting_number_pane_g_ParamLimits

0xf685,	// (0x0001fe7d) list_setting_number_pane_g

0xca44,	// (0x0001d23c) list_setting_number_pane_t1_ParamLimits

0xca44,	// (0x0001d23c) list_setting_number_pane_t1

0xca5d,	// (0x0001d255) list_setting_number_pane_t2_ParamLimits

0xca5d,	// (0x0001d255) list_setting_number_pane_t2

0xca77,	// (0x0001d26f) list_setting_number_pane_t3_ParamLimits

0xca77,	// (0x0001d26f) list_setting_number_pane_t3

0x0003,

0xf68a,	// (0x0001fe82) list_setting_number_pane_t_ParamLimits

0xf68a,	// (0x0001fe82) list_setting_number_pane_t

0xca20,	// (0x0001d218) set_value_pane_ParamLimits

0xca20,	// (0x0001d218) set_value_pane

0x1574,	// (0x00011d6c) bg_set_opt_pane_ParamLimits

0x1574,	// (0x00011d6c) bg_set_opt_pane

0xcaba,	// (0x0001d2b2) set_value_pane_t1

0x15a3,	// (0x00011d9b) slider_set_pane_cp3

0x15ac,	// (0x00011da4) volume_small_pane_cp

0x15b5,	// (0x00011dad) list_form_gen_pane

0x15be,	// (0x00011db6) scroll_pane_cp8

0xcad0,	// (0x0001d2c8) form_field_data_pane_ParamLimits

0xcad0,	// (0x0001d2c8) form_field_data_pane

0xcaf0,	// (0x0001d2e8) form_field_data_wide_pane_ParamLimits

0xcaf0,	// (0x0001d2e8) form_field_data_wide_pane

0xcb11,	// (0x0001d309) form_field_popup_pane_ParamLimits

0xcb11,	// (0x0001d309) form_field_popup_pane

0xcb31,	// (0x0001d329) form_field_popup_wide_pane_ParamLimits

0xcb31,	// (0x0001d329) form_field_popup_wide_pane

0xcb4e,	// (0x0001d346) form_field_slider_pane_ParamLimits

0xcb4e,	// (0x0001d346) form_field_slider_pane

0xcb61,	// (0x0001d359) form_field_slider_wide_pane_ParamLimits

0xcb61,	// (0x0001d359) form_field_slider_wide_pane

0x167f,	// (0x00011e77) data_form_pane

0xcb7e,	// (0x0001d376) form_field_data_pane_t1

0x16ad,	// (0x00011ea5) input_focus_pane

0x16bb,	// (0x00011eb3) data_form_wide_pane

0xcba2,	// (0x0001d39a) form_field_data_wide_pane_t1

0x0ebd,	// (0x000116b5) input_focus_pane_cp6

0xcbc4,	// (0x0001d3bc) form_field_popup_pane_t1

0x16ad,	// (0x00011ea5) input_focus_pane_cp7

0x172d,	// (0x00011f25) list_form_pane

0xcbe4,	// (0x0001d3dc) form_field_popup_wide_pane_t1

0x16ad,	// (0x00011ea5) input_focus_pane_cp8

0x1756,	// (0x00011f4e) list_form_wide_pane

0xcc01,	// (0x0001d3f9) form_field_slider_pane_t1_ParamLimits

0xcc01,	// (0x0001d3f9) form_field_slider_pane_t1

0xcc17,	// (0x0001d40f) form_field_slider_pane_t2_ParamLimits

0xcc17,	// (0x0001d40f) form_field_slider_pane_t2

0x0001,

0xf69a,	// (0x0001fe92) form_field_slider_pane_t_ParamLimits

0xf69a,	// (0x0001fe92) form_field_slider_pane_t

0x0b5b,	// (0x00011353) input_focus_pane_cp9_ParamLimits

0x0b5b,	// (0x00011353) input_focus_pane_cp9

0xcc2c,	// (0x0001d424) slider_cont_pane_ParamLimits

0xcc2c,	// (0x0001d424) slider_cont_pane

0x17a5,	// (0x00011f9d) form_field_slider_wide_pane_t1_ParamLimits

0x17a5,	// (0x00011f9d) form_field_slider_wide_pane_t1

0xcc40,	// (0x0001d438) form_field_slider_wide_pane_t2_ParamLimits

0xcc40,	// (0x0001d438) form_field_slider_wide_pane_t2

0x0001,

0xf69f,	// (0x0001fe97) form_field_slider_wide_pane_t_ParamLimits

0xf69f,	// (0x0001fe97) form_field_slider_wide_pane_t

0x0b5b,	// (0x00011353) input_focus_pane_cp10_ParamLimits

0x0b5b,	// (0x00011353) input_focus_pane_cp10

0xcc52,	// (0x0001d44a) slider_cont_pane_cp1_ParamLimits

0xcc52,	// (0x0001d44a) slider_cont_pane_cp1

0xcc66,	// (0x0001d45e) slider_form_pane_cp

0x17e5,	// (0x00011fdd) input_focus_pane_g1

0x17ed,	// (0x00011fe5) input_focus_pane_g2

0x17f5,	// (0x00011fed) input_focus_pane_g3

0x17fd,	// (0x00011ff5) input_focus_pane_g4

0x1805,	// (0x00011ffd) input_focus_pane_g5

0x180d,	// (0x00012005) input_focus_pane_g6

0x1815,	// (0x0001200d) input_focus_pane_g7

0x181d,	// (0x00012015) input_focus_pane_g8

0x1825,	// (0x0001201d) input_focus_pane_g9

0x07dc,	// (0x00010fd4) input_focus_pane_g10

0x0009,

0xf6a4,	// (0x0001fe9c) input_focus_pane_g

0x3a44,	// (0x0001423c) wait_border_pane_g3_copy1

0xcc6e,	// (0x0001d466) data_form_pane_t1

0x07dc,	// (0x00010fd4) wait_anim_pane_g1_copy1

0xceff,	// (0x0001d6f7) data_form_wide_pane_t1

0xcc89,	// (0x0001d481) list_form_graphic_pane_cp_ParamLimits

0xcc89,	// (0x0001d481) list_form_graphic_pane_cp

0x49a2,	// (0x0001519a) slider_form_pane_g1

0x49ab,	// (0x000151a3) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x00020198) slider_form_pane_g

0xcca2,	// (0x0001d49a) list_form_graphic_pane_ParamLimits

0xcca2,	// (0x0001d49a) list_form_graphic_pane

0xccbe,	// (0x0001d4b6) list_form_graphic_pane_g1

0xccc6,	// (0x0001d4be) list_form_graphic_pane_t1_ParamLimits

0xccc6,	// (0x0001d4be) list_form_graphic_pane_t1

0x08c6,	// (0x000110be) list_highlight_pane_cp5_ParamLimits

0x08c6,	// (0x000110be) list_highlight_pane_cp5

0xccdb,	// (0x0001d4d3) find_pane_g1

0x18a3,	// (0x0001209b) input_find_pane

0xcce4,	// (0x0001d4dc) input_find_pane_g1_ParamLimits

0xcce4,	// (0x0001d4dc) input_find_pane_g1

0xccf0,	// (0x0001d4e8) input_find_pane_t1_ParamLimits

0xccf0,	// (0x0001d4e8) input_find_pane_t1

0xcd05,	// (0x0001d4fd) input_find_pane_t2_ParamLimits

0xcd05,	// (0x0001d4fd) input_find_pane_t2

0x0001,

0xf6b9,	// (0x0001feb1) input_find_pane_t_ParamLimits

0xf6b9,	// (0x0001feb1) input_find_pane_t

0x18e2,	// (0x000120da) input_focus_pane_cp5_ParamLimits

0x18e2,	// (0x000120da) input_focus_pane_cp5

0x18fc,	// (0x000120f4) bg_popup_window_pane_cp2_ParamLimits

0x18fc,	// (0x000120f4) bg_popup_window_pane_cp2

0x1909,	// (0x00012101) listscroll_menu_pane_ParamLimits

0x1909,	// (0x00012101) listscroll_menu_pane

0x1915,	// (0x0001210d) popup_submenu_window_ParamLimits

0x1915,	// (0x0001210d) popup_submenu_window

0x1941,	// (0x00012139) find_popup_pane_g1

0x1949,	// (0x00012141) input_popup_find_pane_cp

0x18e2,	// (0x000120da) input_focus_pane_cp4_ParamLimits

0x18e2,	// (0x000120da) input_focus_pane_cp4

0x195f,	// (0x00012157) input_popup_find_pane_t1_ParamLimits

0x195f,	// (0x00012157) input_popup_find_pane_t1

0x07e6,	// (0x00010fde) bg_popup_sub_pane_cp

0x198d,	// (0x00012185) listscroll_popup_sub_pane

0x1995,	// (0x0001218d) list_submenu_pane_ParamLimits

0x1995,	// (0x0001218d) list_submenu_pane

0x19a6,	// (0x0001219e) scroll_pane_cp4

0x19ae,	// (0x000121a6) list_single_popup_submenu_pane_ParamLimits

0x19ae,	// (0x000121a6) list_single_popup_submenu_pane

0x19c2,	// (0x000121ba) list_single_popup_submenu_pane_g1

0x19ca,	// (0x000121c2) list_single_popup_submenu_pane_t1_ParamLimits

0x19ca,	// (0x000121c2) list_single_popup_submenu_pane_t1

0x08c6,	// (0x000110be) bg_active_tab_pane_cp1_ParamLimits

0x08c6,	// (0x000110be) bg_active_tab_pane_cp1

0x19df,	// (0x000121d7) tabs_2_active_pane_g1

0x19e7,	// (0x000121df) tabs_2_active_pane_t1

0x08c6,	// (0x000110be) bg_passive_tab_pane_cp1_ParamLimits

0x08c6,	// (0x000110be) bg_passive_tab_pane_cp1

0x19df,	// (0x000121d7) tabs_2_passive_pane_g1

0x19e7,	// (0x000121df) tabs_2_passive_pane_t1

0x19f9,	// (0x000121f1) bg_active_tab_pane_cp4

0x1a07,	// (0x000121ff) tabs_2_long_active_pane_t1

0x1a1a,	// (0x00012212) bg_passive_tab_pane_cp4

0x212f,	// (0x00012927) list_single_midp_graphic_pane_g4_ParamLimits

0x19f9,	// (0x000121f1) bg_active_tab_pane_cp5

0x1a26,	// (0x0001221e) tabs_3_long_active_pane_t1

0x1a1a,	// (0x00012212) bg_passive_tab_pane_cp5

0x212f,	// (0x00012927) list_single_midp_graphic_pane_g4

0x08c6,	// (0x000110be) bg_popup_window_pane_cp13_ParamLimits

0x08c6,	// (0x000110be) bg_popup_window_pane_cp13

0x1a41,	// (0x00012239) listscroll_popup_fast_pane_ParamLimits

0x1a41,	// (0x00012239) listscroll_popup_fast_pane

0x1a50,	// (0x00012248) grid_popup_fast_pane_ParamLimits

0x1a50,	// (0x00012248) grid_popup_fast_pane

0x1a62,	// (0x0001225a) scroll_pane_cp9_ParamLimits

0x1a62,	// (0x0001225a) scroll_pane_cp9

0x6765,	// (0x00016f5d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6765,	// (0x00016f5d) list_single_graphic_hl_pane_t1_cp2

0x1a86,	// (0x0001227e) input_focus_pane_cp20_ParamLimits

0x1a86,	// (0x0001227e) input_focus_pane_cp20

0x1a94,	// (0x0001228c) query_popup_data_pane_t1_ParamLimits

0x1a94,	// (0x0001228c) query_popup_data_pane_t1

0x1aa7,	// (0x0001229f) query_popup_data_pane_t2_ParamLimits

0x1aa7,	// (0x0001229f) query_popup_data_pane_t2

0x1aed,	// (0x000122e5) query_popup_data_pane_t3_ParamLimits

0x1aed,	// (0x000122e5) query_popup_data_pane_t3

0x1b2e,	// (0x00012326) query_popup_data_pane_t4_ParamLimits

0x1b2e,	// (0x00012326) query_popup_data_pane_t4

0x1b6a,	// (0x00012362) query_popup_data_pane_t5_ParamLimits

0x1b6a,	// (0x00012362) query_popup_data_pane_t5

0x0004,

0xf6be,	// (0x0001feb6) query_popup_data_pane_t_ParamLimits

0xf6be,	// (0x0001feb6) query_popup_data_pane_t

0x17e5,	// (0x00011fdd) bg_set_opt_pane_g1

0x17ed,	// (0x00011fe5) bg_set_opt_pane_g2

0x17f5,	// (0x00011fed) bg_set_opt_pane_g3

0x17fd,	// (0x00011ff5) bg_set_opt_pane_g4

0x1805,	// (0x00011ffd) bg_set_opt_pane_g5

0x180d,	// (0x00012005) bg_set_opt_pane_g6

0x1815,	// (0x0001200d) bg_set_opt_pane_g7

0x181d,	// (0x00012015) bg_set_opt_pane_g8

0x1825,	// (0x0001201d) bg_set_opt_pane_g9

0x0008,

0xf6c9,	// (0x0001fec1) bg_set_opt_pane_g

0xdd0a,	// (0x0001e502) control_top_pane_stacon_ParamLimits

0xdd0a,	// (0x0001e502) control_top_pane_stacon

0xdd5d,	// (0x0001e555) signal_pane_stacon_ParamLimits

0xdd5d,	// (0x0001e555) signal_pane_stacon

0x21b8,	// (0x000129b0) stacon_top_pane_g1_ParamLimits

0x21b8,	// (0x000129b0) stacon_top_pane_g1

0xdd82,	// (0x0001e57a) title_pane_stacon_ParamLimits

0xdd82,	// (0x0001e57a) title_pane_stacon

0xddac,	// (0x0001e5a4) uni_indicator_pane_stacon_ParamLimits

0xddac,	// (0x0001e5a4) uni_indicator_pane_stacon

0xddc1,	// (0x0001e5b9) battery_pane_stacon_ParamLimits

0xddc1,	// (0x0001e5b9) battery_pane_stacon

0xde05,	// (0x0001e5fd) control_bottom_pane_stacon_ParamLimits

0xde05,	// (0x0001e5fd) control_bottom_pane_stacon

0xde28,	// (0x0001e620) navi_pane_stacon_ParamLimits

0xde28,	// (0x0001e620) navi_pane_stacon

0x21da,	// (0x000129d2) stacon_bottom_pane_g1_ParamLimits

0x21da,	// (0x000129d2) stacon_bottom_pane_g1

0xda6b,	// (0x0001e263) aid_levels_signal_lsc_ParamLimits

0xda6b,	// (0x0001e263) aid_levels_signal_lsc

0xda82,	// (0x0001e27a) signal_pane_stacon_g1_ParamLimits

0xda82,	// (0x0001e27a) signal_pane_stacon_g1

0xda96,	// (0x0001e28e) signal_pane_stacon_g2_ParamLimits

0xda96,	// (0x0001e28e) signal_pane_stacon_g2

0x0001,

0xf6dc,	// (0x0001fed4) signal_pane_stacon_g_ParamLimits

0xf6dc,	// (0x0001fed4) signal_pane_stacon_g

0xdacb,	// (0x0001e2c3) title_pane_stacon_t1_ParamLimits

0xdacb,	// (0x0001e2c3) title_pane_stacon_t1

0x1bc2,	// (0x000123ba) uni_indicator_pane_stacon_g1

0x1bcc,	// (0x000123c4) uni_indicator_pane_stacon_g2

0x1bae,	// (0x000123a6) uni_indicator_pane_stacon_g3

0x1bb8,	// (0x000123b0) uni_indicator_pane_stacon_g4

0x0003,

0xf6e8,	// (0x0001fee0) uni_indicator_pane_stacon_g

0xdaf0,	// (0x0001e2e8) control_top_pane_stacon_g1

0xdaf8,	// (0x0001e2f0) control_top_pane_stacon_t1_ParamLimits

0xdaf8,	// (0x0001e2f0) control_top_pane_stacon_t1

0xdb2f,	// (0x0001e327) aid_levels_battery_lsc_ParamLimits

0xdb2f,	// (0x0001e327) aid_levels_battery_lsc

0xdb47,	// (0x0001e33f) battery_pane_stacon_g1_ParamLimits

0xdb47,	// (0x0001e33f) battery_pane_stacon_g1

0xdb5a,	// (0x0001e352) battery_pane_stacon_g2_ParamLimits

0xdb5a,	// (0x0001e352) battery_pane_stacon_g2

0x0001,

0xf6f1,	// (0x0001fee9) battery_pane_stacon_g_ParamLimits

0xf6f1,	// (0x0001fee9) battery_pane_stacon_g

0xdb98,	// (0x0001e390) navi_icon_pane_stacon

0xdbac,	// (0x0001e3a4) navi_navi_pane_stacon

0xdb98,	// (0x0001e390) navi_text_pane_stacon

0xdaf0,	// (0x0001e2e8) control_bottom_pane_stacon_g1

0xdbc0,	// (0x0001e3b8) control_bottom_pane_stacon_t1_ParamLimits

0xdbc0,	// (0x0001e3b8) control_bottom_pane_stacon_t1

0x1bf0,	// (0x000123e8) grid_app_pane_ParamLimits

0x1bf0,	// (0x000123e8) grid_app_pane

0x1c14,	// (0x0001240c) scroll_pane_cp15_ParamLimits

0x1c14,	// (0x0001240c) scroll_pane_cp15

0x1c29,	// (0x00012421) cell_app_pane_ParamLimits

0x1c29,	// (0x00012421) cell_app_pane

0x1c4d,	// (0x00012445) cell_app_pane_g1_ParamLimits

0x1c4d,	// (0x00012445) cell_app_pane_g1

0x1c6d,	// (0x00012465) cell_app_pane_g2_ParamLimits

0x1c6d,	// (0x00012465) cell_app_pane_g2

0x0001,

0xf6f6,	// (0x0001feee) cell_app_pane_g_ParamLimits

0xf6f6,	// (0x0001feee) cell_app_pane_g

0x1c79,	// (0x00012471) cell_app_pane_t1_ParamLimits

0x1c79,	// (0x00012471) cell_app_pane_t1

0x1c90,	// (0x00012488) grid_highlight_pane_ParamLimits

0x1c90,	// (0x00012488) grid_highlight_pane

0x17e5,	// (0x00011fdd) cell_highlight_pane_g1

0x17ed,	// (0x00011fe5) cell_highlight_pane_g2

0x17f5,	// (0x00011fed) cell_highlight_pane_g3

0x17fd,	// (0x00011ff5) cell_highlight_pane_g4

0x1805,	// (0x00011ffd) cell_highlight_pane_g5

0x180d,	// (0x00012005) cell_highlight_pane_g6

0x1815,	// (0x0001200d) cell_highlight_pane_g7

0x181d,	// (0x00012015) cell_highlight_pane_g8

0x1825,	// (0x0001201d) cell_highlight_pane_g9

0x07dc,	// (0x00010fd4) cell_highlight_pane_g10

0x0009,

0xf6a4,	// (0x0001fe9c) cell_highlight_pane_g

0x1ca1,	// (0x00012499) bg_scroll_pane

0xdc0a,	// (0x0001e402) scroll_handle_pane

0x1ce8,	// (0x000124e0) scroll_bg_pane_g1

0x1cfd,	// (0x000124f5) scroll_bg_pane_g2

0x1d15,	// (0x0001250d) scroll_bg_pane_g3

0x0002,

0xf6fb,	// (0x0001fef3) scroll_bg_pane_g

0x1d2a,	// (0x00012522) scroll_handle_focus_pane_ParamLimits

0x1d2a,	// (0x00012522) scroll_handle_focus_pane

0x1ce8,	// (0x000124e0) scroll_handle_pane_g1

0x1d37,	// (0x0001252f) scroll_handle_pane_g2

0x1d15,	// (0x0001250d) scroll_handle_pane_g3

0x0002,

0xf702,	// (0x0001fefa) scroll_handle_pane_g

0x18e2,	// (0x000120da) bg_popup_sub_pane_cp21_ParamLimits

0x18e2,	// (0x000120da) bg_popup_sub_pane_cp21

0x1d4b,	// (0x00012543) popup_fep_japan_predictive_window_t1_ParamLimits

0x1d4b,	// (0x00012543) popup_fep_japan_predictive_window_t1

0x1d65,	// (0x0001255d) popup_fep_japan_predictive_window_t2_ParamLimits

0x1d65,	// (0x0001255d) popup_fep_japan_predictive_window_t2

0x1d98,	// (0x00012590) popup_fep_japan_predictive_window_t3_ParamLimits

0x1d98,	// (0x00012590) popup_fep_japan_predictive_window_t3

0x0002,

0xf709,	// (0x0001ff01) popup_fep_japan_predictive_window_t_ParamLimits

0xf709,	// (0x0001ff01) popup_fep_japan_predictive_window_t

0x07e6,	// (0x00010fde) bg_popup_sub_pane_cp23

0x1dcf,	// (0x000125c7) listscroll_japin_cand_pane

0x1dd7,	// (0x000125cf) popup_fep_japan_candidate_window_t1

0x1de5,	// (0x000125dd) candidate_pane_ParamLimits

0x1de5,	// (0x000125dd) candidate_pane

0x1df7,	// (0x000125ef) scroll_pane_cp30

0x1dff,	// (0x000125f7) list_single_popup_jap_candidate_pane_ParamLimits

0x1dff,	// (0x000125f7) list_single_popup_jap_candidate_pane

0x07e6,	// (0x00010fde) list_highlight_pane_cp30

0x1e14,	// (0x0001260c) list_single_popup_jap_candidate_pane_t1

0x1e23,	// (0x0001261b) level_1_signal

0x1e30,	// (0x00012628) level_2_signal

0x1e3d,	// (0x00012635) level_3_signal

0x1e4a,	// (0x00012642) level_4_signal

0x1e57,	// (0x0001264f) level_5_signal

0x1e64,	// (0x0001265c) level_6_signal

0x1e71,	// (0x00012669) level_7_signal

0x1e23,	// (0x0001261b) level_1_battery

0x1e30,	// (0x00012628) level_2_battery

0x1e3d,	// (0x00012635) level_3_battery

0x1e4a,	// (0x00012642) level_4_battery

0x1e57,	// (0x0001264f) level_5_battery

0x1e64,	// (0x0001265c) level_6_battery

0x1e71,	// (0x00012669) level_7_battery

0x1e96,	// (0x0001268e) list_menu_pane_ParamLimits

0x1e96,	// (0x0001268e) list_menu_pane

0x1eac,	// (0x000126a4) scroll_pane_cp25_ParamLimits

0x1eac,	// (0x000126a4) scroll_pane_cp25

0x1ec5,	// (0x000126bd) list_double2_graphic_pane_cp2_ParamLimits

0x1ec5,	// (0x000126bd) list_double2_graphic_pane_cp2

0x1ec5,	// (0x000126bd) list_double2_large_graphic_pane_cp2_ParamLimits

0x1ec5,	// (0x000126bd) list_double2_large_graphic_pane_cp2

0x1ec5,	// (0x000126bd) list_double2_pane_cp2_ParamLimits

0x1ec5,	// (0x000126bd) list_double2_pane_cp2

0x1ec5,	// (0x000126bd) list_double_graphic_pane_cp2_ParamLimits

0x1ec5,	// (0x000126bd) list_double_graphic_pane_cp2

0x1ec5,	// (0x000126bd) list_double_large_graphic_pane_cp2_ParamLimits

0x1ec5,	// (0x000126bd) list_double_large_graphic_pane_cp2

0x1ec5,	// (0x000126bd) list_double_number_pane_cp2_ParamLimits

0x1ec5,	// (0x000126bd) list_double_number_pane_cp2

0x1ec5,	// (0x000126bd) list_double_pane_cp2_ParamLimits

0x1ec5,	// (0x000126bd) list_double_pane_cp2

0x1ee9,	// (0x000126e1) list_single_2graphic_pane_cp2_ParamLimits

0x1ee9,	// (0x000126e1) list_single_2graphic_pane_cp2

0x1ee9,	// (0x000126e1) list_single_graphic_heading_pane_cp2_ParamLimits

0x1ee9,	// (0x000126e1) list_single_graphic_heading_pane_cp2

0x1ee9,	// (0x000126e1) list_single_graphic_pane_cp2_ParamLimits

0x1ee9,	// (0x000126e1) list_single_graphic_pane_cp2

0x1ee9,	// (0x000126e1) list_single_heading_pane_cp2_ParamLimits

0x1ee9,	// (0x000126e1) list_single_heading_pane_cp2

0x1f02,	// (0x000126fa) list_single_large_graphic_pane_cp2_ParamLimits

0x1f02,	// (0x000126fa) list_single_large_graphic_pane_cp2

0x1ee9,	// (0x000126e1) list_single_number_heading_pane_cp2_ParamLimits

0x1ee9,	// (0x000126e1) list_single_number_heading_pane_cp2

0x1ee9,	// (0x000126e1) list_single_number_pane_cp2_ParamLimits

0x1ee9,	// (0x000126e1) list_single_number_pane_cp2

0x1ee9,	// (0x000126e1) list_single_pane_cp2_ParamLimits

0x1ee9,	// (0x000126e1) list_single_pane_cp2

0x1f78,	// (0x00012770) bg_popup_sub_pane_cp22

0xdcbc,	// (0x0001e4b4) popup_side_volume_key_window_g1

0xdce6,	// (0x0001e4de) popup_side_volume_key_window_t1

0xdd02,	// (0x0001e4fa) volume_small_pane_cp1

0x0b5b,	// (0x00011353) bg_popup_sub_pane_cp24_ParamLimits

0x0b5b,	// (0x00011353) bg_popup_sub_pane_cp24

0x1f8e,	// (0x00012786) fep_china_uni_candidate_pane_ParamLimits

0x1f8e,	// (0x00012786) fep_china_uni_candidate_pane

0x1fa2,	// (0x0001279a) fep_china_uni_entry_pane

0x1fb2,	// (0x000127aa) popup_fep_china_uni_window_g1

0x1fce,	// (0x000127c6) fep_china_uni_entry_pane_g1

0x1fd6,	// (0x000127ce) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0001ff32) fep_china_uni_entry_pane_g

0x1fde,	// (0x000127d6) fep_entry_item_pane

0x1fe8,	// (0x000127e0) fep_candidate_item_pane

0x1ff0,	// (0x000127e8) fep_china_uni_candidate_pane_g1

0x1ff8,	// (0x000127f0) fep_china_uni_candidate_pane_g2

0x2000,	// (0x000127f8) fep_china_uni_candidate_pane_g3

0x2008,	// (0x00012800) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0001ff37) fep_china_uni_candidate_pane_g

0x07dc,	// (0x00010fd4) fep_entry_item_pane_g1

0x2010,	// (0x00012808) fep_entry_item_pane_t1_ParamLimits

0x2010,	// (0x00012808) fep_entry_item_pane_t1

0x2026,	// (0x0001281e) fep_candidate_item_pane_t1_ParamLimits

0x2026,	// (0x0001281e) fep_candidate_item_pane_t1

0x203b,	// (0x00012833) fep_candidate_item_pane_t2_ParamLimits

0x203b,	// (0x00012833) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0001ff40) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0001ff40) fep_candidate_item_pane_t

0x08c6,	// (0x000110be) list_highlight_pane_cp31_ParamLimits

0x08c6,	// (0x000110be) list_highlight_pane_cp31

0x204d,	// (0x00012845) level_1_signal_lsc

0x2056,	// (0x0001284e) level_2_signal_lsc

0x205f,	// (0x00012857) level_3_signal_lsc

0x2068,	// (0x00012860) level_4_signal_lsc

0x2071,	// (0x00012869) level_5_signal_lsc

0x207a,	// (0x00012872) level_6_signal_lsc

0x2083,	// (0x0001287b) level_7_signal_lsc

0x2083,	// (0x0001287b) level_1_battery_lsc

0x208c,	// (0x00012884) level_2_battery_lsc

0x2095,	// (0x0001288d) level_3_battery_lsc

0x209e,	// (0x00012896) level_4_battery_lsc

0x20a7,	// (0x0001289f) level_5_battery_lsc

0x20b0,	// (0x000128a8) level_6_battery_lsc

0x204d,	// (0x00012845) level_7_battery_lsc

0x20b9,	// (0x000128b1) scroll_handle_focus_pane_g1

0x20c2,	// (0x000128ba) scroll_handle_focus_pane_g2

0x20cb,	// (0x000128c3) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0001ff45) scroll_handle_focus_pane_g

0xcd1a,	// (0x0001d512) list_single_2graphic_pane_g1_ParamLimits

0xcd1a,	// (0x0001d512) list_single_2graphic_pane_g1

0xc686,	// (0x0001ce7e) list_single_2graphic_pane_g2_ParamLimits

0xc686,	// (0x0001ce7e) list_single_2graphic_pane_g2

0xc60c,	// (0x0001ce04) list_single_2graphic_pane_g3_ParamLimits

0xc60c,	// (0x0001ce04) list_single_2graphic_pane_g3

0xcd26,	// (0x0001d51e) list_single_2graphic_pane_g4_ParamLimits

0xcd26,	// (0x0001d51e) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0001ff4c) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0001ff4c) list_single_2graphic_pane_g

0xcd32,	// (0x0001d52a) list_single_2graphic_pane_t1_ParamLimits

0xcd32,	// (0x0001d52a) list_single_2graphic_pane_t1

0xcd60,	// (0x0001d558) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xcd60,	// (0x0001d558) list_double2_graphic_large_graphic_pane_g1

0xc8e7,	// (0x0001d0df) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc8e7,	// (0x0001d0df) list_double2_graphic_large_graphic_pane_g2

0xc81d,	// (0x0001d015) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc81d,	// (0x0001d015) list_double2_graphic_large_graphic_pane_g3

0xcd70,	// (0x0001d568) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xcd70,	// (0x0001d568) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0001ff55) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0001ff55) list_double2_graphic_large_graphic_pane_g

0xcd7c,	// (0x0001d574) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xcd7c,	// (0x0001d574) list_double2_graphic_large_graphic_pane_t1

0xcd92,	// (0x0001d58a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xcd92,	// (0x0001d58a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0001ff5e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0001ff5e) list_double2_graphic_large_graphic_pane_t

0x22a2,	// (0x00012a9a) popup_fast_swap_window_ParamLimits

0x22a2,	// (0x00012a9a) popup_fast_swap_window

0x22be,	// (0x00012ab6) popup_side_volume_key_window

0x22da,	// (0x00012ad2) stacon_top_pane

0x22e4,	// (0x00012adc) status_pane_ParamLimits

0x22e4,	// (0x00012adc) status_pane

0x22da,	// (0x00012ad2) status_small_pane

0x07e6,	// (0x00010fde) control_pane

0x07e6,	// (0x00010fde) stacon_bottom_pane

0x15be,	// (0x00011db6) scroll_pane_cp121

0x15b5,	// (0x00011dad) set_content_pane

0x2175,	// (0x0001296d) bg_active_tab_pane_g1_cp1

0x216c,	// (0x00012964) bg_active_tab_pane_g2_cp1

0x2163,	// (0x0001295b) bg_active_tab_pane_g3_cp1

0x2175,	// (0x0001296d) bg_passive_tab_pane_g1_cp1

0x216c,	// (0x00012964) bg_passive_tab_pane_g2_cp1

0x2163,	// (0x0001295b) bg_passive_tab_pane_g3_cp1

0x2187,	// (0x0001297f) bg_active_tab_pane_g1_cp2

0x216c,	// (0x00012964) bg_active_tab_pane_g2_cp2

0x217e,	// (0x00012976) bg_active_tab_pane_g3_cp2

0x2187,	// (0x0001297f) bg_passive_tab_pane_g1_cp2

0x216c,	// (0x00012964) bg_passive_tab_pane_g2_cp2

0x217e,	// (0x00012976) bg_passive_tab_pane_g3_cp2

0x2199,	// (0x00012991) bg_active_tab_pane_g1_cp3

0x216c,	// (0x00012964) bg_active_tab_pane_g2_cp3

0x2190,	// (0x00012988) bg_active_tab_pane_g3_cp3

0x2199,	// (0x00012991) bg_passive_tab_pane_g1_cp3

0x216c,	// (0x00012964) bg_passive_tab_pane_g2_cp3

0x2190,	// (0x00012988) bg_passive_tab_pane_g3_cp3

0x21ad,	// (0x000129a5) bg_active_tab_pane_g1_cp4

0x216c,	// (0x00012964) bg_active_tab_pane_g2_cp4

0x21a2,	// (0x0001299a) bg_active_tab_pane_g3_cp4

0x21ad,	// (0x000129a5) bg_passive_tab_pane_g1_cp4

0x216c,	// (0x00012964) bg_passive_tab_pane_g2_cp4

0x21a2,	// (0x0001299a) bg_passive_tab_pane_g3_cp4

0x21ff,	// (0x000129f7) bg_active_tab_pane_g1_cp5

0x216c,	// (0x00012964) bg_active_tab_pane_g2_cp5

0x21f6,	// (0x000129ee) bg_active_tab_pane_g3_cp5

0x21ff,	// (0x000129f7) bg_passive_tab_pane_g1_cp5

0x216c,	// (0x00012964) bg_passive_tab_pane_g2_cp5

0x21f6,	// (0x000129ee) bg_passive_tab_pane_g3_cp5

0x2208,	// (0x00012a00) list_set_graphic_pane_ParamLimits

0x2208,	// (0x00012a00) list_set_graphic_pane

0x07e6,	// (0x00010fde) bg_set_opt_pane_cp4

0x2225,	// (0x00012a1d) list_set_graphic_pane_g1_ParamLimits

0x2225,	// (0x00012a1d) list_set_graphic_pane_g1

0x2231,	// (0x00012a29) list_set_graphic_pane_g2_ParamLimits

0x2231,	// (0x00012a29) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0001ff63) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0001ff63) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x000202cd) volume_small_pane_cp_g

0x2255,	// (0x00012a4d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2255,	// (0x00012a4d) list_double2_large_graphic_pane_g1_cp2

0x2261,	// (0x00012a59) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2261,	// (0x00012a59) list_double2_large_graphic_pane_g2_cp2

0x2272,	// (0x00012a6a) list_double2_large_graphic_pane_g3_cp2

0x227a,	// (0x00012a72) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x227a,	// (0x00012a72) list_double2_large_graphic_pane_t1_cp2

0x2290,	// (0x00012a88) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2290,	// (0x00012a88) list_double2_large_graphic_pane_t2_cp2

0x4517,	// (0x00014d0f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4517,	// (0x00014d0f) list_double_large_graphic_pane_g1_cp2

0x4528,	// (0x00014d20) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4528,	// (0x00014d20) list_double_large_graphic_pane_g2_cp2

0x2400,	// (0x00012bf8) list_double_large_graphic_pane_g3_cp2

0x4539,	// (0x00014d31) list_double_large_graphic_pane_g4_cp

0x4541,	// (0x00014d39) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4541,	// (0x00014d39) list_double_large_graphic_pane_t1_cp2

0x4558,	// (0x00014d50) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4558,	// (0x00014d50) list_double_large_graphic_pane_t2_cp2

0x22f2,	// (0x00012aea) list_double2_graphic_pane_g1_cp2_ParamLimits

0x22f2,	// (0x00012aea) list_double2_graphic_pane_g1_cp2

0x2300,	// (0x00012af8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2300,	// (0x00012af8) list_double2_graphic_pane_g2_cp2

0x2311,	// (0x00012b09) list_double2_graphic_pane_g3_cp2

0x231b,	// (0x00012b13) list_double2_graphic_pane_t1_cp2_ParamLimits

0x231b,	// (0x00012b13) list_double2_graphic_pane_t1_cp2

0x2331,	// (0x00012b29) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2331,	// (0x00012b29) list_double2_graphic_pane_t2_cp2

0x2343,	// (0x00012b3b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2343,	// (0x00012b3b) list_single_number_heading_pane_g1_cp2

0x234f,	// (0x00012b47) list_single_number_heading_pane_g2_cp2

0x2357,	// (0x00012b4f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2357,	// (0x00012b4f) list_single_number_heading_pane_t1_cp2

0x236d,	// (0x00012b65) list_single_number_heading_pane_t2_cp2_ParamLimits

0x236d,	// (0x00012b65) list_single_number_heading_pane_t2_cp2

0x237f,	// (0x00012b77) list_single_number_heading_pane_t3_cp2_ParamLimits

0x237f,	// (0x00012b77) list_single_number_heading_pane_t3_cp2

0x2343,	// (0x00012b3b) list_single_heading_pane_g1_cp2_ParamLimits

0x2343,	// (0x00012b3b) list_single_heading_pane_g1_cp2

0x234f,	// (0x00012b47) list_single_heading_pane_g2_cp2

0x2357,	// (0x00012b4f) list_single_heading_pane_t1_cp2_ParamLimits

0x2357,	// (0x00012b4f) list_single_heading_pane_t1_cp2

0x431f,	// (0x00014b17) list_single_heading_pane_t2_cp2_ParamLimits

0x431f,	// (0x00014b17) list_single_heading_pane_t2_cp2

0x4267,	// (0x00014a5f) list_double_graphic_pane_g1_cp2_ParamLimits

0x4267,	// (0x00014a5f) list_double_graphic_pane_g1_cp2

0x4273,	// (0x00014a6b) list_double_graphic_pane_g2_cp2_ParamLimits

0x4273,	// (0x00014a6b) list_double_graphic_pane_g2_cp2

0x4282,	// (0x00014a7a) list_double_graphic_pane_g3_cp2

0x428a,	// (0x00014a82) list_double_graphic_pane_t1_cp2_ParamLimits

0x428a,	// (0x00014a82) list_double_graphic_pane_t1_cp2

0x42a0,	// (0x00014a98) list_double_graphic_pane_t2_cp2_ParamLimits

0x42a0,	// (0x00014a98) list_double_graphic_pane_t2_cp2

0x23f4,	// (0x00012bec) list_double_number_pane_g1_cp2_ParamLimits

0x23f4,	// (0x00012bec) list_double_number_pane_g1_cp2

0x2400,	// (0x00012bf8) list_double_number_pane_g2_cp2

0x422b,	// (0x00014a23) list_double_number_pane_t1_cp2_ParamLimits

0x422b,	// (0x00014a23) list_double_number_pane_t1_cp2

0x423f,	// (0x00014a37) list_double_number_pane_t2_cp2_ParamLimits

0x423f,	// (0x00014a37) list_double_number_pane_t2_cp2

0x4255,	// (0x00014a4d) list_double_number_pane_t3_cp2_ParamLimits

0x4255,	// (0x00014a4d) list_double_number_pane_t3_cp2

0x4114,	// (0x0001490c) list_single_graphic_pane_g1_cp2_ParamLimits

0x4114,	// (0x0001490c) list_single_graphic_pane_g1_cp2

0x2458,	// (0x00012c50) list_single_graphic_pane_g2_cp2_ParamLimits

0x2458,	// (0x00012c50) list_single_graphic_pane_g2_cp2

0x2464,	// (0x00012c5c) list_single_graphic_pane_g3_cp2

0x40ea,	// (0x000148e2) list_single_graphic_pane_t1_cp2_ParamLimits

0x40ea,	// (0x000148e2) list_single_graphic_pane_t1_cp2

0x2458,	// (0x00012c50) list_single_number_pane_g1_cp2_ParamLimits

0x2458,	// (0x00012c50) list_single_number_pane_g1_cp2

0x2464,	// (0x00012c5c) list_single_number_pane_g2_cp2

0x40ea,	// (0x000148e2) list_single_number_pane_t1_cp2_ParamLimits

0x40ea,	// (0x000148e2) list_single_number_pane_t1_cp2

0x4100,	// (0x000148f8) list_single_number_pane_t2_cp2_ParamLimits

0x4100,	// (0x000148f8) list_single_number_pane_t2_cp2

0x2261,	// (0x00012a59) list_double2_pane_g1_cp2_ParamLimits

0x2261,	// (0x00012a59) list_double2_pane_g1_cp2

0x2272,	// (0x00012a6a) list_double2_pane_g2_cp2

0x23cc,	// (0x00012bc4) list_double2_pane_t1_cp2_ParamLimits

0x23cc,	// (0x00012bc4) list_double2_pane_t1_cp2

0x23e2,	// (0x00012bda) list_double2_pane_t2_cp2_ParamLimits

0x23e2,	// (0x00012bda) list_double2_pane_t2_cp2

0x23f4,	// (0x00012bec) list_double_pane_g1_cp2_ParamLimits

0x23f4,	// (0x00012bec) list_double_pane_g1_cp2

0x2400,	// (0x00012bf8) list_double_pane_g2_cp2

0x2408,	// (0x00012c00) list_double_pane_t1_cp2_ParamLimits

0x2408,	// (0x00012c00) list_double_pane_t1_cp2

0x241e,	// (0x00012c16) list_double_pane_t2_cp2_ParamLimits

0x241e,	// (0x00012c16) list_double_pane_t2_cp2

0x2448,	// (0x00012c40) list_single_pane_cp2_g3

0x2458,	// (0x00012c50) list_single_pane_g1_cp2_ParamLimits

0x2458,	// (0x00012c50) list_single_pane_g1_cp2

0x2464,	// (0x00012c5c) list_single_pane_g2_cp2

0x246c,	// (0x00012c64) list_single_pane_t1_cp2_ParamLimits

0x246c,	// (0x00012c64) list_single_pane_t1_cp2

0x2484,	// (0x00012c7c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2484,	// (0x00012c7c) list_single_large_graphic_pane_g1_cp2

0x2490,	// (0x00012c88) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2490,	// (0x00012c88) list_single_large_graphic_pane_g2_cp2

0x249c,	// (0x00012c94) list_single_large_graphic_pane_g3_cp2

0x24a4,	// (0x00012c9c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x24a4,	// (0x00012c9c) list_single_large_graphic_pane_g4_cp1

0x24be,	// (0x00012cb6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x24be,	// (0x00012cb6) list_single_large_graphic_pane_t1_cp2

0x40b6,	// (0x000148ae) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x40b6,	// (0x000148ae) list_single_graphic_heading_pane_g1_cp2

0x4083,	// (0x0001487b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4083,	// (0x0001487b) list_single_graphic_heading_pane_g4_cp2

0x2464,	// (0x00012c5c) list_single_graphic_heading_pane_g5_cp2

0x40c2,	// (0x000148ba) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x40c2,	// (0x000148ba) list_single_graphic_heading_pane_t1_cp2

0x40d8,	// (0x000148d0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x40d8,	// (0x000148d0) list_single_graphic_heading_pane_t2_cp2

0x4077,	// (0x0001486f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4077,	// (0x0001486f) list_single_2graphic_pane_g1_cp2

0x4083,	// (0x0001487b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4083,	// (0x0001487b) list_single_2graphic_pane_g2_cp2

0x2464,	// (0x00012c5c) list_single_2graphic_pane_g3_cp2

0x4094,	// (0x0001488c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4094,	// (0x0001488c) list_single_2graphic_pane_g4_cp2

0x40a0,	// (0x00014898) list_single_2graphic_pane_t1_cp2_ParamLimits

0x40a0,	// (0x00014898) list_single_2graphic_pane_t1_cp2

0x07dc,	// (0x00010fd4) list_highlight_pane_g10_cp1

0x3c4f,	// (0x00014447) list_highlight_pane_g1_cp1

0x3c57,	// (0x0001444f) list_highlight_pane_g2_cp1

0x3c5f,	// (0x00014457) list_highlight_pane_g3_cp1

0x3c67,	// (0x0001445f) list_highlight_pane_g4_cp1

0x3c6f,	// (0x00014467) list_highlight_pane_g5_cp1

0x3c77,	// (0x0001446f) list_highlight_pane_g6_cp1

0x3c7f,	// (0x00014477) list_highlight_pane_g7_cp1

0x3c87,	// (0x0001447f) list_highlight_pane_g8_cp1

0x3c8f,	// (0x00014487) list_highlight_pane_g9_cp1

0x3b6f,	// (0x00014367) form_field_slider_pane_t3

0x3b7d,	// (0x00014375) form_field_slider_pane_t4

0x3b8b,	// (0x00014383) slider_form_pane_ParamLimits

0x3b8b,	// (0x00014383) slider_form_pane

0x07e6,	// (0x00010fde) control_abbreviations

0x07e6,	// (0x00010fde) control_conventions

0x07e6,	// (0x00010fde) control_definitions

0x07e6,	// (0x00010fde) format_table_attribute

0x4369,	// (0x00014b61) bg_popup_preview_window_pane_g9

0x07e6,	// (0x00010fde) format_table_data2

0x07e6,	// (0x00010fde) format_table_data3

0x07e6,	// (0x00010fde) format_table_data_example

0x0008,

0x07e6,	// (0x00010fde) intro_purpose

0xf900,	// (0x000200f8) bg_popup_preview_window_pane_g

0x07e6,	// (0x00010fde) texts_category

0x07e6,	// (0x00010fde) texts_graphics

0x24d4,	// (0x00012ccc) text_digital

0x24e3,	// (0x00012cdb) text_primary

0x24f2,	// (0x00012cea) text_primary_small

0x2501,	// (0x00012cf9) text_secondary

0x2510,	// (0x00012d08) text_title

0x4ba3,	// (0x0001539b) bg_passive_tab_pane_g1_cp3_srt

0x216c,	// (0x00012964) bg_passive_tab_pane_g2_cp3_srt

0x4b9a,	// (0x00015392) bg_passive_tab_pane_g3_cp3_srt

0x08c6,	// (0x000110be) bg_active_tab_pane_cp3_srt_ParamLimits

0x08c6,	// (0x000110be) bg_active_tab_pane_cp3_srt

0x4bac,	// (0x000153a4) tabs_4_active_pane_srt_g1

0x4bb4,	// (0x000153ac) tabs_4_active_pane_srt_t1_ParamLimits

0x4bb4,	// (0x000153ac) tabs_4_active_pane_srt_t1

0x4ba3,	// (0x0001539b) bg_active_tab_pane_g1_cp3_copy1

0x216c,	// (0x00012964) bg_active_tab_pane_g2_cp3_copy1

0x4b9a,	// (0x00015392) bg_active_tab_pane_g3_cp3_copy1

0x08c6,	// (0x000110be) tabs_2_long_active_pane_srt_ParamLimits

0x08c6,	// (0x000110be) tabs_2_long_active_pane_srt

0x08c6,	// (0x000110be) tabs_2_long_passive_pane_srt_ParamLimits

0x08c6,	// (0x000110be) tabs_2_long_passive_pane_srt

0x1a1a,	// (0x00012212) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1a1a,	// (0x00012212) bg_passive_tab_pane_cp4_srt

0x47de,	// (0x00014fd6) bg_passive_tab_pane_g1_cp4_srt

0x216c,	// (0x00012964) bg_passive_tab_pane_g2_cp4_srt

0x47d5,	// (0x00014fcd) bg_passive_tab_pane_g3_cp4_srt

0x19f9,	// (0x000121f1) bg_active_tab_pane_cp4_srt_ParamLimits

0x19f9,	// (0x000121f1) bg_active_tab_pane_cp4_srt

0x47e7,	// (0x00014fdf) tabs_2_long_active_pane_srt_t1_ParamLimits

0x47e7,	// (0x00014fdf) tabs_2_long_active_pane_srt_t1

0x47de,	// (0x00014fd6) bg_active_tab_pane_g1_cp4_srt

0x216c,	// (0x00012964) bg_active_tab_pane_g2_cp4_srt

0x47d5,	// (0x00014fcd) bg_active_tab_pane_g3_cp4_srt

0x0b5b,	// (0x00011353) tabs_3_long_active_pane_srt_ParamLimits

0x0b5b,	// (0x00011353) tabs_3_long_active_pane_srt

0x0b5b,	// (0x00011353) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0b5b,	// (0x00011353) tabs_3_long_passive_pane_cp_srt

0x0b5b,	// (0x00011353) tabs_3_long_passive_pane_srt_ParamLimits

0x0b5b,	// (0x00011353) tabs_3_long_passive_pane_srt

0x1a1a,	// (0x00012212) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1a1a,	// (0x00012212) bg_passive_tab_pane_cp5_srt

0x21ff,	// (0x000129f7) bg_passive_tab_pane_g1_cp5_srt

0x216c,	// (0x00012964) bg_passive_tab_pane_g2_cp5_srt

0x21f6,	// (0x000129ee) bg_passive_tab_pane_g3_cp5_srt

0x19f9,	// (0x000121f1) bg_active_tab_pane_cp5_srt_ParamLimits

0x19f9,	// (0x000121f1) bg_active_tab_pane_cp5_srt

0x47c3,	// (0x00014fbb) tabs_3_long_active_pane_srt_t1_ParamLimits

0x47c3,	// (0x00014fbb) tabs_3_long_active_pane_srt_t1

0x21ff,	// (0x000129f7) bg_active_tab_pane_g1_cp5_srt

0x216c,	// (0x00012964) bg_active_tab_pane_g2_cp5_srt

0x21f6,	// (0x000129ee) bg_active_tab_pane_g3_cp5_srt

0x47b5,	// (0x00014fad) navi_text_pane_srt_t1

0x47ad,	// (0x00014fa5) navi_icon_pane_srt_g1

0x26d7,	// (0x00012ecf) midp_editing_number_pane_srt

0x251f,	// (0x00012d17) midp_ticker_pane_srt

0x26df,	// (0x00012ed7) midp_ticker_pane_srt_g1

0x26e7,	// (0x00012edf) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0001ff82) midp_ticker_pane_srt_g

0x26ef,	// (0x00012ee7) midp_ticker_pane_srt_t1

0x479e,	// (0x00014f96) midp_editing_number_pane_t1_copy1

0x1a1a,	// (0x00012212) listscroll_midp_pane

0x1a1a,	// (0x00012212) midp_form_pane

0x2589,	// (0x00012d81) midp_info_popup_window_ParamLimits

0x2589,	// (0x00012d81) midp_info_popup_window

0x18e2,	// (0x000120da) bg_popup_sub_pane_cp50_ParamLimits

0x18e2,	// (0x000120da) bg_popup_sub_pane_cp50

0x3887,	// (0x0001407f) listscroll_midp_info_pane_ParamLimits

0x3887,	// (0x0001407f) listscroll_midp_info_pane

0x386f,	// (0x00014067) listscroll_form_midp_pane_ParamLimits

0x386f,	// (0x00014067) listscroll_form_midp_pane

0x387b,	// (0x00014073) scroll_bar_cp050

0x384f,	// (0x00014047) list_midp_pane

0x57cd,	// (0x00015fc5) signal_pane_g2_cp

0x3789,	// (0x00013f81) listscroll_midp_info_pane_t1_ParamLimits

0x3789,	// (0x00013f81) listscroll_midp_info_pane_t1

0x37a1,	// (0x00013f99) listscroll_midp_info_pane_t2_ParamLimits

0x37a1,	// (0x00013f99) listscroll_midp_info_pane_t2

0x37df,	// (0x00013fd7) listscroll_midp_info_pane_t3_ParamLimits

0x37df,	// (0x00013fd7) listscroll_midp_info_pane_t3

0x3819,	// (0x00014011) listscroll_midp_info_pane_t4_ParamLimits

0x3819,	// (0x00014011) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x00020033) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x00020033) listscroll_midp_info_pane_t

0x19a6,	// (0x0001219e) scroll_pane_cp21

0x3727,	// (0x00013f1f) form_midp_field_choice_group_pane

0x3730,	// (0x00013f28) form_midp_field_text_pane

0x376f,	// (0x00013f67) form_midp_field_time_pane

0x3777,	// (0x00013f6f) form_midp_gauge_slider_pane

0x3780,	// (0x00013f78) form_midp_gauge_wait_pane

0x07e6,	// (0x00010fde) form_midp_image_pane

0xcea5,	// (0x0001d69d) list_single_midp_pane_ParamLimits

0xcea5,	// (0x0001d69d) list_single_midp_pane

0x36b0,	// (0x00013ea8) form_midp_field_text_pane_t1

0x3493,	// (0x00013c8b) input_focus_pane_cp050

0x36e7,	// (0x00013edf) list_midp_form_text_pane

0x367f,	// (0x00013e77) form_midp_field_choice_group_pane_t1

0x368d,	// (0x00013e85) input_focus_pane_cp051

0x36a1,	// (0x00013e99) list_midp_choice_pane

0x07e6,	// (0x00010fde) status_idle_pane

0x3663,	// (0x00013e5b) form_midp_field_time_pane_t1

0x07dc,	// (0x00010fd4) wait_anim_pane_g2_copy1

0x3671,	// (0x00013e69) form_midp_field_time_pane_t2

0x0001,

0x2637,	// (0x00012e2f) aid_navinavi_width_2_pane

0xf836,	// (0x0002002e) form_midp_field_time_pane_t

0x07e6,	// (0x00010fde) input_focus_pane_cp052

0x07e6,	// (0x00010fde) bg_input_focus_pane_cp040

0x3623,	// (0x00013e1b) form_midp_gauge_slider_pane_t1

0x3631,	// (0x00013e29) form_midp_gauge_slider_pane_t2

0x363f,	// (0x00013e37) form_midp_gauge_slider_pane_t3

0x364d,	// (0x00013e45) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x00020025) form_midp_gauge_slider_pane_t

0x365b,	// (0x00013e53) form_midp_slider_pane

0x08c6,	// (0x000110be) bg_input_focus_pane_cp041_ParamLimits

0x08c6,	// (0x000110be) bg_input_focus_pane_cp041

0x35f0,	// (0x00013de8) form_midp_gauge_wait_pane_t1_ParamLimits

0x35f0,	// (0x00013de8) form_midp_gauge_wait_pane_t1

0x3602,	// (0x00013dfa) form_midp_gauge_wait_pane_t2_ParamLimits

0x3602,	// (0x00013dfa) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x00020020) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x00020020) form_midp_gauge_wait_pane_t

0x3614,	// (0x00013e0c) form_midp_wait_pane_ParamLimits

0x3614,	// (0x00013e0c) form_midp_wait_pane

0x35ba,	// (0x00013db2) form_midp_image_pane_g1

0x35c3,	// (0x00013dbb) form_midp_image_pane_t1

0x35d2,	// (0x00013dca) form_midp_image_pane_t2

0x35e1,	// (0x00013dd9) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x00020019) form_midp_image_pane_t

0x35a2,	// (0x00013d9a) list_single_midp_pane_g1

0xce96,	// (0x0001d68e) list_single_midp_pane_t1

0x357a,	// (0x00013d72) list_midp_form_item_pane_ParamLimits

0x357a,	// (0x00013d72) list_midp_form_item_pane

0x25df,	// (0x00012dd7) list_midp_form_item_pane_t1

0x25ee,	// (0x00012de6) midp_ticker_pane_g1

0x25fa,	// (0x00012df2) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0001ff68) midp_ticker_pane_g

0x2606,	// (0x00012dfe) midp_ticker_pane_t1

0x4a22,	// (0x0001521a) midp_editing_number_pane_t1

0x4a00,	// (0x000151f8) midp_editing_number_pane

0x4a0f,	// (0x00015207) midp_ticker_pane

0x4766,	// (0x00014f5e) ai_message_heading_pane

0x07e6,	// (0x00010fde) bg_popup_window_pane_cp14

0x476e,	// (0x00014f66) listscroll_ai_message_pane

0x46f0,	// (0x00014ee8) ai_message_heading_pane_g1_ParamLimits

0x46f0,	// (0x00014ee8) ai_message_heading_pane_g1

0x46fc,	// (0x00014ef4) ai_message_heading_pane_g2_ParamLimits

0x46fc,	// (0x00014ef4) ai_message_heading_pane_g2

0x4708,	// (0x00014f00) ai_message_heading_pane_g3_ParamLimits

0x4708,	// (0x00014f00) ai_message_heading_pane_g3

0x4714,	// (0x00014f0c) ai_message_heading_pane_g4_ParamLimits

0x4714,	// (0x00014f0c) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0002015a) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0002015a) ai_message_heading_pane_g

0x4720,	// (0x00014f18) ai_message_heading_pane_t1_ParamLimits

0x4720,	// (0x00014f18) ai_message_heading_pane_t1

0x473a,	// (0x00014f32) ai_message_heading_pane_t2_ParamLimits

0x473a,	// (0x00014f32) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x00020163) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x00020163) ai_message_heading_pane_t

0x474c,	// (0x00014f44) bg_popup_heading_pane_cp1_ParamLimits

0x474c,	// (0x00014f44) bg_popup_heading_pane_cp1

0x46de,	// (0x00014ed6) list_ai_message_pane_ParamLimits

0x46de,	// (0x00014ed6) list_ai_message_pane

0x19a6,	// (0x0001219e) scroll_pane_cp10

0x467a,	// (0x00014e72) list_ai_message_pane_g1

0x4682,	// (0x00014e7a) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x00020137) list_ai_message_pane_g

0x468a,	// (0x00014e82) list_ai_message_pane_t1_ParamLimits

0x468a,	// (0x00014e82) list_ai_message_pane_t1

0x469f,	// (0x00014e97) list_ai_message_pane_t2_ParamLimits

0x469f,	// (0x00014e97) list_ai_message_pane_t2

0x46b4,	// (0x00014eac) list_ai_message_pane_t3_ParamLimits

0x46b4,	// (0x00014eac) list_ai_message_pane_t3

0x46c9,	// (0x00014ec1) list_ai_message_pane_t4_ParamLimits

0x46c9,	// (0x00014ec1) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0002013c) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0002013c) list_ai_message_pane_t

0x4665,	// (0x00014e5d) cell_ai_soft_ind_pane_ParamLimits

0x4665,	// (0x00014e5d) cell_ai_soft_ind_pane

0x2618,	// (0x00012e10) cell_ai_soft_ind_pane_g1_ParamLimits

0x2618,	// (0x00012e10) cell_ai_soft_ind_pane_g1

0x07e6,	// (0x00010fde) grid_highlight_cp1

0x2625,	// (0x00012e1d) text_secondary_cp56_ParamLimits

0x2625,	// (0x00012e1d) text_secondary_cp56

0x463a,	// (0x00014e32) example_general_pane_ParamLimits

0x463a,	// (0x00014e32) example_general_pane

0x4646,	// (0x00014e3e) example_parent_pane_g1_ParamLimits

0x4646,	// (0x00014e3e) example_parent_pane_g1

0x4652,	// (0x00014e4a) example_parent_pane_t1_ParamLimits

0x4652,	// (0x00014e4a) example_parent_pane_t1

0x2c32,	// (0x0001342a) popup_preview_text_window_ParamLimits

0x2c32,	// (0x0001342a) popup_preview_text_window

0x2450,	// (0x00012c48) list_single_pane_cp2_g4

0x0c11,	// (0x00011409) bg_popup_preview_window_pane_ParamLimits

0x0c11,	// (0x00011409) bg_popup_preview_window_pane

0x4371,	// (0x00014b69) popup_preview_text_window_t1_ParamLimits

0x4371,	// (0x00014b69) popup_preview_text_window_t1

0x438f,	// (0x00014b87) popup_preview_text_window_t2_ParamLimits

0x438f,	// (0x00014b87) popup_preview_text_window_t2

0x43d8,	// (0x00014bd0) popup_preview_text_window_t3_ParamLimits

0x43d8,	// (0x00014bd0) popup_preview_text_window_t3

0x441d,	// (0x00014c15) popup_preview_text_window_t4_ParamLimits

0x441d,	// (0x00014c15) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0002010b) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0002010b) popup_preview_text_window_t

0x449b,	// (0x00014c93) scroll_pane_cp11

0x336f,	// (0x00013b67) bg_popup_preview_window_pane_g1

0x4331,	// (0x00014b29) bg_popup_preview_window_pane_g2

0x4339,	// (0x00014b31) bg_popup_preview_window_pane_g3

0x4341,	// (0x00014b39) bg_popup_preview_window_pane_g4

0x4349,	// (0x00014b41) bg_popup_preview_window_pane_g5

0x4351,	// (0x00014b49) bg_popup_preview_window_pane_g6

0x4359,	// (0x00014b51) bg_popup_preview_window_pane_g7

0x4361,	// (0x00014b59) bg_popup_preview_window_pane_g8

0xd601,	// (0x0001ddf9) aid_popup_width_pane

0x2c10,	// (0x00013408) popup_midp_note_alarm_window_ParamLimits

0x2c10,	// (0x00013408) popup_midp_note_alarm_window

0x167f,	// (0x00011e77) data_form_pane_ParamLimits

0xcb74,	// (0x0001d36c) form_field_data_pane_g1

0xcb7e,	// (0x0001d376) form_field_data_pane_t1_ParamLimits

0x16ad,	// (0x00011ea5) input_focus_pane_ParamLimits

0x16bb,	// (0x00011eb3) data_form_wide_pane_ParamLimits

0xcb96,	// (0x0001d38e) form_field_data_wide_pane_g1

0xcba2,	// (0x0001d39a) form_field_data_wide_pane_t1_ParamLimits

0x0ebd,	// (0x000116b5) input_focus_pane_cp6_ParamLimits

0x1953,	// (0x0001214b) input_popup_find_pane_g1_ParamLimits

0x1953,	// (0x0001214b) input_popup_find_pane_g1

0xdb6b,	// (0x0001e363) aid_navi_side_left_pane

0xdb80,	// (0x0001e378) aid_navi_side_right_pane

0x3d4a,	// (0x00014542) bg_popup_window_pane_cp30_ParamLimits

0x3d4a,	// (0x00014542) bg_popup_window_pane_cp30

0x3dc4,	// (0x000145bc) popup_midp_note_alarm_window_g1_ParamLimits

0x3dc4,	// (0x000145bc) popup_midp_note_alarm_window_g1

0x3df4,	// (0x000145ec) popup_midp_note_alarm_window_t1_ParamLimits

0x3df4,	// (0x000145ec) popup_midp_note_alarm_window_t1

0x3e95,	// (0x0001468d) popup_midp_note_alarm_window_t2_ParamLimits

0x3e95,	// (0x0001468d) popup_midp_note_alarm_window_t2

0x3f43,	// (0x0001473b) popup_midp_note_alarm_window_t3_ParamLimits

0x3f43,	// (0x0001473b) popup_midp_note_alarm_window_t3

0x3f75,	// (0x0001476d) popup_midp_note_alarm_window_t4_ParamLimits

0x3f75,	// (0x0001476d) popup_midp_note_alarm_window_t4

0x3f9b,	// (0x00014793) popup_midp_note_alarm_window_t5_ParamLimits

0x3f9b,	// (0x00014793) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x000200a8) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x000200a8) popup_midp_note_alarm_window_t

0x4047,	// (0x0001483f) wait_bar_pane_cp1_ParamLimits

0x4047,	// (0x0001483f) wait_bar_pane_cp1

0x07e6,	// (0x00010fde) wait_anim_pane_copy1

0x07e6,	// (0x00010fde) wait_border_pane_copy1

0x3a30,	// (0x00014228) wait_border_pane_g1_copy1

0xcbbc,	// (0x0001d3b4) form_field_popup_pane_g1

0xcbc4,	// (0x0001d3bc) form_field_popup_pane_t1_ParamLimits

0x16ad,	// (0x00011ea5) input_focus_pane_cp7_ParamLimits

0x172d,	// (0x00011f25) list_form_pane_ParamLimits

0xcbdc,	// (0x0001d3d4) form_field_popup_wide_pane_g1

0xcbe4,	// (0x0001d3dc) form_field_popup_wide_pane_t1_ParamLimits

0x16ad,	// (0x00011ea5) input_focus_pane_cp8_ParamLimits

0x1756,	// (0x00011f4e) list_form_wide_pane_ParamLimits

0x4c26,	// (0x0001541e) aid_size_cell_graphic_pane

0xcc6e,	// (0x0001d466) data_form_pane_t1_ParamLimits

0xceff,	// (0x0001d6f7) data_form_wide_pane_t1_ParamLimits

0x2f13,	// (0x0001370b) bg_status_flat_pane

0x0826,	// (0x0001101e) title_pane_t1_ParamLimits

0x088e,	// (0x00011086) title_pane_t2_ParamLimits

0x08b4,	// (0x000110ac) title_pane_t3_ParamLimits

0xf56f,	// (0x0001fd67) title_pane_t_ParamLimits

0x1e23,	// (0x0001261b) level_1_signal_ParamLimits

0x1e30,	// (0x00012628) level_2_signal_ParamLimits

0x1e3d,	// (0x00012635) level_3_signal_ParamLimits

0x1e4a,	// (0x00012642) level_4_signal_ParamLimits

0x1e57,	// (0x0001264f) level_5_signal_ParamLimits

0x1e64,	// (0x0001265c) level_6_signal_ParamLimits

0x1e71,	// (0x00012669) level_7_signal_ParamLimits

0x1e23,	// (0x0001261b) level_1_battery_ParamLimits

0x1e30,	// (0x00012628) level_2_battery_ParamLimits

0x1e3d,	// (0x00012635) level_3_battery_ParamLimits

0x1e4a,	// (0x00012642) level_4_battery_ParamLimits

0x1e57,	// (0x0001264f) level_5_battery_ParamLimits

0x1e64,	// (0x0001265c) level_6_battery_ParamLimits

0x1e71,	// (0x00012669) level_7_battery_ParamLimits

0x3c4f,	// (0x00014447) bg_status_flat_pane_g1

0x3c57,	// (0x0001444f) bg_status_flat_pane_g2

0x3c5f,	// (0x00014457) bg_status_flat_pane_g3

0x3c67,	// (0x0001445f) bg_status_flat_pane_g4

0x3c6f,	// (0x00014467) bg_status_flat_pane_g5

0x3c77,	// (0x0001446f) bg_status_flat_pane_g6

0x3c7f,	// (0x00014477) bg_status_flat_pane_g7

0x08dc,	// (0x000110d4) tabs_3_active_pane_t1_ParamLimits

0x08dc,	// (0x000110d4) tabs_3_passive_pane_t1_ParamLimits

0x08f6,	// (0x000110ee) tabs_4_active_pane_t1_ParamLimits

0x08f6,	// (0x000110ee) tabs_4_1_passive_pane_t1_ParamLimits

0x19e7,	// (0x000121df) tabs_2_active_pane_t1_ParamLimits

0x19e7,	// (0x000121df) tabs_2_passive_pane_t1_ParamLimits

0x19f9,	// (0x000121f1) bg_active_tab_pane_cp4_ParamLimits

0x1a07,	// (0x000121ff) tabs_2_long_active_pane_t1_ParamLimits

0x1a1a,	// (0x00012212) bg_passive_tab_pane_cp4_ParamLimits

0xe0b3,	// (0x0001e8ab) list_single_midp_graphic_pane_t1_ParamLimits

0x19f9,	// (0x000121f1) bg_active_tab_pane_cp5_ParamLimits

0x1a26,	// (0x0001221e) tabs_3_long_active_pane_t1_ParamLimits

0x1a1a,	// (0x00012212) bg_passive_tab_pane_cp5_ParamLimits

0xe0b3,	// (0x0001e8ab) list_single_midp_graphic_pane_t1

0x2f13,	// (0x0001370b) bg_status_flat_pane_ParamLimits

0x2fd6,	// (0x000137ce) indicator_pane_cp2_ParamLimits

0x2fd6,	// (0x000137ce) indicator_pane_cp2

0x30fb,	// (0x000138f3) navi_pane_srt_ParamLimits

0x30fb,	// (0x000138f3) navi_pane_srt

0x311f,	// (0x00013917) popup_clock_digital_analogue_window_cp1

0x09bd,	// (0x000111b5) indicator_pane_t1

0x251f,	// (0x00012d17) copy_highlight_pane

0x251f,	// (0x00012d17) cursor_graphics_pane

0x251f,	// (0x00012d17) graphic_within_text_pane

0x251f,	// (0x00012d17) link_highlight_pane

0x445e,	// (0x00014c56) popup_preview_text_window_t5_ParamLimits

0x445e,	// (0x00014c56) popup_preview_text_window_t5

0x263f,	// (0x00012e37) cursor_digital_pane

0x263f,	// (0x00012e37) cursor_primary_pane

0x2650,	// (0x00012e48) cursor_primary_small_pane

0x2658,	// (0x00012e50) cursor_secondary_pane

0x2660,	// (0x00012e58) cursor_title_pane

0x263f,	// (0x00012e37) link_highlight_digital_pane

0x2647,	// (0x00012e3f) link_highlight_primary_pane

0x2650,	// (0x00012e48) link_highlight_primary_small_pane

0x2658,	// (0x00012e50) link_highlight_secondary_pane

0x2660,	// (0x00012e58) link_highlight_title_pane

0x263f,	// (0x00012e37) copy_highlight_digital_pane

0x263f,	// (0x00012e37) copy_highlight_primary_pane

0x2650,	// (0x00012e48) copy_highlight_primary_small_pane

0x2658,	// (0x00012e50) copy_highlight_secondary_pane

0x2660,	// (0x00012e58) copy_highlight_title_pane

0x2658,	// (0x00012e50) graphic_text_digital_pane

0x3ced,	// (0x000144e5) graphic_text_primary_pane

0x3cf6,	// (0x000144ee) graphic_text_primary_small_pane

0x2650,	// (0x00012e48) graphic_text_secondary_pane

0x263f,	// (0x00012e37) graphic_text_title_pane

0x2668,	// (0x00012e60) cursor_primary_pane_g1

0x3cdf,	// (0x000144d7) cursor_text_primary_t1

0x3cc7,	// (0x000144bf) cursor_primary_small_pane_g1

0x3cd1,	// (0x000144c9) cursor_text_primary_small_t1

0x3caf,	// (0x000144a7) cursor_primary_small_pane_g1_copy1

0x3cb9,	// (0x000144b1) cursor_text_primary_small_t1_copy1

0x3c97,	// (0x0001448f) cursor_text_title_t1

0x3ca5,	// (0x0001449d) cursor_title_pane_g1

0x2668,	// (0x00012e60) cursor_digital_pane_g1

0x2672,	// (0x00012e6a) cursor_text_digital_t1

0x2697,	// (0x00012e8f) link_highlight_primary_pane_g1

0x3c40,	// (0x00014438) link_highlight_primary_pane_t1

0x2680,	// (0x00012e78) link_highlight_primary_small_pane_g1

0x2688,	// (0x00012e80) link_highlight_primary_small_pane_t1

0x2697,	// (0x00012e8f) link_highlight_secondary_pane_g1

0x269f,	// (0x00012e97) link_highlight_secondary_pane_t1

0x3bb4,	// (0x000143ac) link_highlight_title_pane_g1

0x3bbc,	// (0x000143b4) link_highlight_title_pane_t1

0x3b9d,	// (0x00014395) link_highlight_digital_pane_g1

0x3ba5,	// (0x0001439d) link_highlight_digital_pane_t1

0x3a75,	// (0x0001426d) copy_highlight_primary_pane_g1

0x3a7d,	// (0x00014275) copy_highlight_primary_pane_t1

0x3a4f,	// (0x00014247) copy_highlight_primary_small_pane_g1

0x3a66,	// (0x0001425e) copy_highlight_primary_small_pane_t1

0x26ae,	// (0x00012ea6) copy_highlight_secondary_pane_g1

0x26b6,	// (0x00012eae) copy_highlight_secondary_pane_t1

0x3a4f,	// (0x00014247) copy_highlight_title_pane_g1

0x3a57,	// (0x0001424f) copy_highlight_title_pane_t1

0x3a75,	// (0x0001426d) copy_highlight_digital_pane_g1

0x4df0,	// (0x000155e8) copy_highlight_digital_pane_t1

0x4d44,	// (0x0001553c) graphic_text_primary_pane_g1

0x4dd4,	// (0x000155cc) graphic_text_primary_pane_t1

0x4de2,	// (0x000155da) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x000201d7) graphic_text_primary_pane_t

0x4db0,	// (0x000155a8) graphic_text_primary_small_pane_g1

0x4db8,	// (0x000155b0) graphic_text_primary_small_pane_t1

0x4dc6,	// (0x000155be) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x000201d2) graphic_text_primary_small_pane_t

0x4d8c,	// (0x00015584) graphic_text_secondary_pane_g1

0x4d94,	// (0x0001558c) graphic_text_secondary_pane_t1

0x4da2,	// (0x0001559a) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x000201cd) graphic_text_secondary_pane_t

0x4d68,	// (0x00015560) graphic_text_title_pane_g1

0x4d70,	// (0x00015568) graphic_text_title_pane_t1

0x4d7e,	// (0x00015576) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x000201c8) graphic_text_title_pane_t

0x4d44,	// (0x0001553c) graphic_text_digital_pane_g1

0x4d4c,	// (0x00015544) graphic_text_digital_pane_t1

0x4d5a,	// (0x00015552) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x000201c3) graphic_text_digital_pane_t

0x08c6,	// (0x000110be) navi_icon_pane_srt_ParamLimits

0x08c6,	// (0x000110be) navi_icon_pane_srt

0x07e6,	// (0x00010fde) navi_midp_pane_srt

0x07e6,	// (0x00010fde) navi_navi_pane_srt

0x08c6,	// (0x000110be) navi_text_pane_srt_ParamLimits

0x08c6,	// (0x000110be) navi_text_pane_srt

0x4d0f,	// (0x00015507) navi_navi_icon_text_pane_srt

0x4d29,	// (0x00015521) navi_navi_pane_srt_g1_ParamLimits

0x4d29,	// (0x00015521) navi_navi_pane_srt_g1

0x4d17,	// (0x0001550f) navi_navi_pane_srt_g2_ParamLimits

0x4d17,	// (0x0001550f) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x000201be) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x000201be) navi_navi_pane_srt_g

0x4d3b,	// (0x00015533) navi_navi_tabs_pane_srt

0x4d0f,	// (0x00015507) navi_navi_text_pane_srt

0x4d0f,	// (0x00015507) navi_navi_volume_pane_srt

0x4d00,	// (0x000154f8) navi_navi_text_pane_srt_t1

0xe42d,	// (0x0001ec25) navi_navi_volume_pane_srt_g1

0xe435,	// (0x0001ec2d) volume_small_pane_srt_ParamLimits

0xe435,	// (0x0001ec2d) volume_small_pane_srt

0xde4b,	// (0x0001e643) volume_small_pane_srt_g1_ParamLimits

0xde4b,	// (0x0001e643) volume_small_pane_srt_g1

0xde5b,	// (0x0001e653) volume_small_pane_srt_g2_ParamLimits

0xde5b,	// (0x0001e653) volume_small_pane_srt_g2

0xde6c,	// (0x0001e664) volume_small_pane_srt_g3_ParamLimits

0xde6c,	// (0x0001e664) volume_small_pane_srt_g3

0xde7d,	// (0x0001e675) volume_small_pane_srt_g4_ParamLimits

0xde7d,	// (0x0001e675) volume_small_pane_srt_g4

0xde8e,	// (0x0001e686) volume_small_pane_srt_g5_ParamLimits

0xde8e,	// (0x0001e686) volume_small_pane_srt_g5

0xde9f,	// (0x0001e697) volume_small_pane_srt_g6_ParamLimits

0xde9f,	// (0x0001e697) volume_small_pane_srt_g6

0xdeb0,	// (0x0001e6a8) volume_small_pane_srt_g7_ParamLimits

0xdeb0,	// (0x0001e6a8) volume_small_pane_srt_g7

0xdec1,	// (0x0001e6b9) volume_small_pane_srt_g8_ParamLimits

0xdec1,	// (0x0001e6b9) volume_small_pane_srt_g8

0xded2,	// (0x0001e6ca) volume_small_pane_srt_g9_ParamLimits

0xded2,	// (0x0001e6ca) volume_small_pane_srt_g9

0xdee3,	// (0x0001e6db) volume_small_pane_srt_g10_ParamLimits

0xdee3,	// (0x0001e6db) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0001ff6d) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0001ff6d) volume_small_pane_srt_g

0x0cba,	// (0x000114b2) query_popup_data_pane_cp2

0x4ce6,	// (0x000154de) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4ce6,	// (0x000154de) navi_navi_icon_text_pane_srt_t1

0x3ced,	// (0x000144e5) navi_tabs_2_long_pane_srt

0x3ced,	// (0x000144e5) navi_tabs_2_pane_srt

0x3ced,	// (0x000144e5) navi_tabs_3_long_pane_srt

0x3ced,	// (0x000144e5) navi_tabs_3_pane_srt

0x3ced,	// (0x000144e5) navi_tabs_4_pane_srt

0xe40d,	// (0x0001ec05) tabs_2_active_pane_srt_ParamLimits

0xe40d,	// (0x0001ec05) tabs_2_active_pane_srt

0xe41d,	// (0x0001ec15) tabs_2_passive_pane_srt_ParamLimits

0xe41d,	// (0x0001ec15) tabs_2_passive_pane_srt

0x289d,	// (0x00013095) bg_passive_tab_pane_cp1_srt_ParamLimits

0x289d,	// (0x00013095) bg_passive_tab_pane_cp1_srt

0x4cbb,	// (0x000154b3) bg_passive_tab_pane_g1_cp1_srt

0x216c,	// (0x00012964) bg_passive_tab_pane_g2_cp1_srt

0x4cb2,	// (0x000154aa) bg_passive_tab_pane_g3_cp1_srt

0x08c6,	// (0x000110be) bg_active_tab_pane_cp1_srt_ParamLimits

0x08c6,	// (0x000110be) bg_active_tab_pane_cp1_srt

0x4cc4,	// (0x000154bc) tabs_2_active_pane_srt_g1

0x4ccc,	// (0x000154c4) tabs_2_active_pane_srt_t1_ParamLimits

0x4ccc,	// (0x000154c4) tabs_2_active_pane_srt_t1

0x4cbb,	// (0x000154b3) bg_active_tab_pane_g1_cp1_srt

0x216c,	// (0x00012964) bg_active_tab_pane_g2_cp1_srt

0x4cb2,	// (0x000154aa) bg_active_tab_pane_g3_cp1_srt

0xe3da,	// (0x0001ebd2) tabs_3_active_pane_srt_ParamLimits

0xe3da,	// (0x0001ebd2) tabs_3_active_pane_srt

0xe3eb,	// (0x0001ebe3) tabs_3_passive_pane_cp_srt_ParamLimits

0xe3eb,	// (0x0001ebe3) tabs_3_passive_pane_cp_srt

0xe3fc,	// (0x0001ebf4) tabs_3_passive_pane_srt_ParamLimits

0xe3fc,	// (0x0001ebf4) tabs_3_passive_pane_srt

0x289d,	// (0x00013095) bg_passive_tab_pane_cp2_srt_ParamLimits

0x289d,	// (0x00013095) bg_passive_tab_pane_cp2_srt

0x26ce,	// (0x00012ec6) bg_passive_tab_pane_g1_cp2_srt

0x216c,	// (0x00012964) bg_passive_tab_pane_g2_cp2_srt

0x26c5,	// (0x00012ebd) bg_passive_tab_pane_g3_cp2_srt

0x08c6,	// (0x000110be) bg_active_tab_pane_cp2_srt_ParamLimits

0x08c6,	// (0x000110be) bg_active_tab_pane_cp2_srt

0x4c98,	// (0x00015490) tabs_3_active_pane_srt_g1

0x4ca0,	// (0x00015498) tabs_3_active_pane_srt_t1_ParamLimits

0x4ca0,	// (0x00015498) tabs_3_active_pane_srt_t1

0x26ce,	// (0x00012ec6) bg_active_tab_pane_g1_cp2_srt

0x216c,	// (0x00012964) bg_active_tab_pane_g2_cp2_srt

0x26c5,	// (0x00012ebd) bg_active_tab_pane_g3_cp2_srt

0xe392,	// (0x0001eb8a) tabs_4_active_pane_srt_ParamLimits

0xe392,	// (0x0001eb8a) tabs_4_active_pane_srt

0xe3a4,	// (0x0001eb9c) tabs_4_passive_pane_cp2_srt_ParamLimits

0xe3a4,	// (0x0001eb9c) tabs_4_passive_pane_cp2_srt

0x2823,	// (0x0001301b) aid_size_cell_toolbar

0x1a1a,	// (0x00012212) main_idle_act_pane_ParamLimits

0x2a46,	// (0x0001323e) popup_large_graphic_colour_window_ParamLimits

0x2dad,	// (0x000135a5) popup_toolbar_window_ParamLimits

0x2dad,	// (0x000135a5) popup_toolbar_window

0x4a4c,	// (0x00015244) list_single_graphic_2heading_pane_ParamLimits

0x4a4c,	// (0x00015244) list_single_graphic_2heading_pane

0x1bd6,	// (0x000123ce) aid_size_cell_apps_grid_lsc_pane

0x1be8,	// (0x000123e0) aid_size_cell_apps_grid_prt_pane

0x289d,	// (0x00013095) bg_wml_button_pane_cp1_ParamLimits

0x289d,	// (0x00013095) bg_wml_button_pane_cp1

0x36b0,	// (0x00013ea8) form_midp_field_text_pane_t1_ParamLimits

0x3493,	// (0x00013c8b) input_focus_pane_cp050_ParamLimits

0x36e7,	// (0x00013edf) list_midp_form_text_pane_ParamLimits

0x368d,	// (0x00013e85) input_focus_pane_cp051_ParamLimits

0x36a1,	// (0x00013e99) list_midp_choice_pane_ParamLimits

0x3524,	// (0x00013d1c) list_single_2graphic_pane_cp3_ParamLimits

0x3524,	// (0x00013d1c) list_single_2graphic_pane_cp3

0x3548,	// (0x00013d40) list_single_midp_graphic_pane_ParamLimits

0x3548,	// (0x00013d40) list_single_midp_graphic_pane

0xcdd0,	// (0x0001d5c8) list_single_graphic_2heading_pane_g1_ParamLimits

0xcdd0,	// (0x0001d5c8) list_single_graphic_2heading_pane_g1

0xcddc,	// (0x0001d5d4) list_single_graphic_2heading_pane_g4_ParamLimits

0xcddc,	// (0x0001d5d4) list_single_graphic_2heading_pane_g4

0xcde8,	// (0x0001d5e0) list_single_graphic_2heading_pane_g5_ParamLimits

0xcde8,	// (0x0001d5e0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0001ffc0) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0001ffc0) list_single_graphic_2heading_pane_g

0xcdf4,	// (0x0001d5ec) list_single_graphic_2heading_pane_t1_ParamLimits

0xcdf4,	// (0x0001d5ec) list_single_graphic_2heading_pane_t1

0xce08,	// (0x0001d600) list_single_graphic_2heading_pane_t2_ParamLimits

0xce08,	// (0x0001d600) list_single_graphic_2heading_pane_t2

0xce24,	// (0x0001d61c) list_single_graphic_2heading_pane_t3_ParamLimits

0xce24,	// (0x0001d61c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0001ffc7) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0001ffc7) list_single_graphic_2heading_pane_t

0x3273,	// (0x00013a6b) bg_popup_sub_pane_cp2

0x329d,	// (0x00013a95) grid_toobar_pane

0xe03a,	// (0x0001e832) cell_toolbar_pane_ParamLimits

0xe03a,	// (0x0001e832) cell_toolbar_pane

0x3313,	// (0x00013b0b) cell_toolbar_pane_g1_ParamLimits

0x3313,	// (0x00013b0b) cell_toolbar_pane_g1

0x3327,	// (0x00013b1f) cell_toolbar_pane_g2_ParamLimits

0x3327,	// (0x00013b1f) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0001ffd5) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0001ffd5) cell_toolbar_pane_g

0x3349,	// (0x00013b41) grid_highlight_pane_cp2_ParamLimits

0x3349,	// (0x00013b41) grid_highlight_pane_cp2

0x3363,	// (0x00013b5b) toolbar_button_pane

0x336f,	// (0x00013b67) toolbar_button_pane_g1

0x337f,	// (0x00013b77) toolbar_button_pane_g2

0x3377,	// (0x00013b6f) toolbar_button_pane_g3

0x338f,	// (0x00013b87) toolbar_button_pane_g4

0x3387,	// (0x00013b7f) toolbar_button_pane_g5

0x3397,	// (0x00013b8f) toolbar_button_pane_g6

0x339f,	// (0x00013b97) toolbar_button_pane_g7

0x33af,	// (0x00013ba7) toolbar_button_pane_g8

0x33a7,	// (0x00013b9f) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0001ffda) toolbar_button_pane_g

0xe072,	// (0x0001e86a) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe072,	// (0x0001e86a) list_single_2graphic_pane_g1_cp3

0xe07e,	// (0x0001e876) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe07e,	// (0x0001e876) list_single_2graphic_pane_g2_cp3

0xe08f,	// (0x0001e887) list_single_2graphic_pane_g3_cp3

0x212f,	// (0x00012927) list_single_2graphic_pane_g4_cp3_ParamLimits

0x212f,	// (0x00012927) list_single_2graphic_pane_g4_cp3

0xe097,	// (0x0001e88f) list_single_2graphic_pane_t1_cp3_ParamLimits

0xe097,	// (0x0001e88f) list_single_2graphic_pane_t1_cp3

0x1310,	// (0x00011b08) list_single_midp_graphic_pane_g2_ParamLimits

0x1310,	// (0x00011b08) list_single_midp_graphic_pane_g2

0x2833,	// (0x0001302b) aid_zoom_text_primary

0xcda4,	// (0x0001d59c) aid_zoom_text_secondary

0x2782,	// (0x00012f7a) status_small_pane_g7_ParamLimits

0x2782,	// (0x00012f7a) status_small_pane_g7

0x27a5,	// (0x00012f9d) status_small_pane_t1_ParamLimits

0x07fd,	// (0x00010ff5) title_pane_g2

0x0003,

0xf566,	// (0x0001fd5e) title_pane_g

0x0d5b,	// (0x00011553) aid_size_cell_colour_1_pane_ParamLimits

0x0d5b,	// (0x00011553) aid_size_cell_colour_1_pane

0x0d6f,	// (0x00011567) aid_size_cell_colour_2_pane_ParamLimits

0x0d6f,	// (0x00011567) aid_size_cell_colour_2_pane

0x0d83,	// (0x0001157b) aid_size_cell_colour_3_pane_ParamLimits

0x0d83,	// (0x0001157b) aid_size_cell_colour_3_pane

0x0d97,	// (0x0001158f) aid_size_cell_colour_4_pane_ParamLimits

0x0d97,	// (0x0001158f) aid_size_cell_colour_4_pane

0xdaa7,	// (0x0001e29f) title_pane_stacon_g1_ParamLimits

0xdaa7,	// (0x0001e29f) title_pane_stacon_g1

0x3ad4,	// (0x000142cc) popup_note_wait_window_g3_ParamLimits

0x3ad4,	// (0x000142cc) popup_note_wait_window_g3

0x3b4a,	// (0x00014342) popup_note_wait_window_t5_ParamLimits

0x3b4a,	// (0x00014342) popup_note_wait_window_t5

0x07e6,	// (0x00010fde) main_feb_china_hwr_fs_writing_pane

0x292b,	// (0x00013123) popup_feb_china_hwr_fs_window_ParamLimits

0x292b,	// (0x00013123) popup_feb_china_hwr_fs_window

0xe0c9,	// (0x0001e8c1) aid_size_cell_hwr_fs_ParamLimits

0xe0c9,	// (0x0001e8c1) aid_size_cell_hwr_fs

0x3493,	// (0x00013c8b) bg_popup_sub_pane_cp3_ParamLimits

0x3493,	// (0x00013c8b) bg_popup_sub_pane_cp3

0xe0de,	// (0x0001e8d6) grid_hwr_fs_pane_ParamLimits

0xe0de,	// (0x0001e8d6) grid_hwr_fs_pane

0xe0f6,	// (0x0001e8ee) linegrid_hwr_fs_pane_ParamLimits

0xe0f6,	// (0x0001e8ee) linegrid_hwr_fs_pane

0xe106,	// (0x0001e8fe) cell_hwr_fs_pane_ParamLimits

0xe106,	// (0x0001e8fe) cell_hwr_fs_pane

0x349f,	// (0x00013c97) linegrid_hwr_fs_pane_g1_ParamLimits

0x349f,	// (0x00013c97) linegrid_hwr_fs_pane_g1

0x34ab,	// (0x00013ca3) linegrid_hwr_fs_pane_g2_ParamLimits

0x34ab,	// (0x00013ca3) linegrid_hwr_fs_pane_g2

0x34bd,	// (0x00013cb5) linegrid_hwr_fs_pane_g3_ParamLimits

0x34bd,	// (0x00013cb5) linegrid_hwr_fs_pane_g3

0xe128,	// (0x0001e920) linegrid_hwr_fs_pane_g4_ParamLimits

0xe128,	// (0x0001e920) linegrid_hwr_fs_pane_g4

0xe142,	// (0x0001e93a) linegrid_hwr_fs_pane_g5_ParamLimits

0xe142,	// (0x0001e93a) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x00020005) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x00020005) linegrid_hwr_fs_pane_g

0x34c9,	// (0x00013cc1) cell_hwr_fs_pane_g1_ParamLimits

0x34c9,	// (0x00013cc1) cell_hwr_fs_pane_g1

0x31ad,	// (0x000139a5) cell_hwr_fs_pane_g2_ParamLimits

0x31ad,	// (0x000139a5) cell_hwr_fs_pane_g2

0x34df,	// (0x00013cd7) cell_hwr_fs_pane_g3_ParamLimits

0x34df,	// (0x00013cd7) cell_hwr_fs_pane_g3

0x34ec,	// (0x00013ce4) cell_hwr_fs_pane_g4_ParamLimits

0x34ec,	// (0x00013ce4) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x00020010) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x00020010) cell_hwr_fs_pane_g

0xe158,	// (0x0001e950) cell_hwr_fs_pane_t1

0x07e6,	// (0x00010fde) grid_highlight_pane_cp6

0x07e6,	// (0x00010fde) main_idle_act2_pane

0x198d,	// (0x00012185) aid_inside_area_popup_secondary

0x4181,	// (0x00014979) aid_inside_area_window_primary_ParamLimits

0x4181,	// (0x00014979) aid_inside_area_window_primary

0x4dff,	// (0x000155f7) ai2_news_ticker_pane

0x4e07,	// (0x000155ff) aid_size_cell_ai1_link_ParamLimits

0x4e07,	// (0x000155ff) aid_size_cell_ai1_link

0x4e21,	// (0x00015619) popup_ai2_data_window_ParamLimits

0x4e21,	// (0x00015619) popup_ai2_data_window

0x4e37,	// (0x0001562f) popup_ai2_link_window_ParamLimits

0x4e37,	// (0x0001562f) popup_ai2_link_window

0x3493,	// (0x00013c8b) bg_popup_sub_pane_cp4_ParamLimits

0x3493,	// (0x00013c8b) bg_popup_sub_pane_cp4

0x4e4b,	// (0x00015643) grid_ai2_link_pane_ParamLimits

0x4e4b,	// (0x00015643) grid_ai2_link_pane

0x4e62,	// (0x0001565a) popup_ai2_link_window_g1_ParamLimits

0x4e62,	// (0x0001565a) popup_ai2_link_window_g1

0x4e6e,	// (0x00015666) popup_ai2_link_window_g2_ParamLimits

0x4e6e,	// (0x00015666) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x000201dc) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x000201dc) popup_ai2_link_window_g

0x4e7d,	// (0x00015675) ai2_mp_button_pane

0x4e85,	// (0x0001567d) ai2_mp_volume_pane

0x368d,	// (0x00013e85) bg_popup_sub_pane_cp5_ParamLimits

0x368d,	// (0x00013e85) bg_popup_sub_pane_cp5

0x4e8d,	// (0x00015685) heading_ai2_gene_pane_ParamLimits

0x4e8d,	// (0x00015685) heading_ai2_gene_pane

0x4e99,	// (0x00015691) list_ai2_gene_pane_ParamLimits

0x4e99,	// (0x00015691) list_ai2_gene_pane

0x4ee1,	// (0x000156d9) cell_ai2_link_pane_ParamLimits

0x4ee1,	// (0x000156d9) cell_ai2_link_pane

0x4ef7,	// (0x000156ef) cell_ai2_link_pane_g1

0x07e6,	// (0x00010fde) grid_highlight_pane_cp7

0xe44a,	// (0x0001ec42) ai2_mp_volume_pane_g1

0x4fcf,	// (0x000157c7) ai2_mp_volume_pane_g2

0x4f3c,	// (0x00015734) list_ai2_gene_pane_t1

0x4fc7,	// (0x000157bf) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x000201f5) ai2_mp_volume_pane_g

0xe452,	// (0x0001ec4a) volume_small_pane_cp3

0x4fd7,	// (0x000157cf) aid_size_cell_ai2_button

0x4fdf,	// (0x000157d7) grid_ai2_button_pane

0x4fe8,	// (0x000157e0) cell_ai2_button_pane_ParamLimits

0x4fe8,	// (0x000157e0) cell_ai2_button_pane

0x07dc,	// (0x00010fd4) cell_ai2_button_pane_g1

0x07e6,	// (0x00010fde) grid_highlight_pane_cp8

0x4f87,	// (0x0001577f) ai2_gene_pane_t1_ParamLimits

0x4f87,	// (0x0001577f) ai2_gene_pane_t1

0x2819,	// (0x00013011) aid_height_parent_landscape

0x4835,	// (0x0001502d) aid_height_set_list

0x4846,	// (0x0001503e) aid_size_parent

0x4c26,	// (0x0001541e) aid_size_cell_graphic_pane_ParamLimits

0x4ea9,	// (0x000156a1) popup_ai2_data_window_g1_ParamLimits

0x4ea9,	// (0x000156a1) popup_ai2_data_window_g1

0x4eb5,	// (0x000156ad) ai2_news_ticker_pane_g1

0x4ebd,	// (0x000156b5) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x000201e1) ai2_news_ticker_pane_g

0x4ec5,	// (0x000156bd) ai2_news_ticker_pane_t1

0x4ed3,	// (0x000156cb) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x000201e6) ai2_news_ticker_pane_t

0x4f00,	// (0x000156f8) heading_ai2_gene_pane_g1

0x4f08,	// (0x00015700) heading_ai2_gene_pane_t1_ParamLimits

0x4f08,	// (0x00015700) heading_ai2_gene_pane_t1

0x4f1d,	// (0x00015715) list_highlight_pane_cp6

0x4f25,	// (0x0001571d) ai2_gene_pane_ParamLimits

0x4f25,	// (0x0001571d) ai2_gene_pane

0x4f4a,	// (0x00015742) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x000201eb) list_ai2_gene_pane_t

0x4f58,	// (0x00015750) list_highlight_pane_cp8_ParamLimits

0x4f58,	// (0x00015750) list_highlight_pane_cp8

0x4f69,	// (0x00015761) ai2_gene_pane_g1_ParamLimits

0x4f69,	// (0x00015761) ai2_gene_pane_g1

0x4f7b,	// (0x00015773) ai2_gene_pane_g2_ParamLimits

0x4f7b,	// (0x00015773) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x000201f0) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x000201f0) ai2_gene_pane_g

0x10e2,	// (0x000118da) scroll_pane_cp12

0xdff9,	// (0x0001e7f1) control_pane_t3_ParamLimits

0xdff9,	// (0x0001e7f1) control_pane_t3

0x2796,	// (0x00012f8e) status_small_pane_g8_ParamLimits

0x2796,	// (0x00012f8e) status_small_pane_g8

0x2a11,	// (0x00013209) popup_find_window_ParamLimits

0x2c24,	// (0x0001341c) popup_note_image_window_ParamLimits

0xcdd0,	// (0x0001d5c8) list_double2_graphic_pane_vc_g1_ParamLimits

0xcdd0,	// (0x0001d5c8) list_double2_graphic_pane_vc_g1

0xce3c,	// (0x0001d634) list_double2_graphic_pane_vc_g2_ParamLimits

0xce3c,	// (0x0001d634) list_double2_graphic_pane_vc_g2

0xce48,	// (0x0001d640) list_double2_graphic_pane_vc_g3_ParamLimits

0xce48,	// (0x0001d640) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0001ffce) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0001ffce) list_double2_graphic_pane_vc_g

0xce54,	// (0x0001d64c) list_double2_graphic_pane_vc_t1_ParamLimits

0xce54,	// (0x0001d64c) list_double2_graphic_pane_vc_t1

0xcddc,	// (0x0001d5d4) list_single_heading_pane_vc_g1_ParamLimits

0xcddc,	// (0x0001d5d4) list_single_heading_pane_vc_g1

0xcde8,	// (0x0001d5e0) list_single_heading_pane_vc_g2_ParamLimits

0xcde8,	// (0x0001d5e0) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001ffef) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001ffef) list_single_heading_pane_vc_g

0xce6a,	// (0x0001d662) list_single_heading_pane_vc_t1_ParamLimits

0xce6a,	// (0x0001d662) list_single_heading_pane_vc_t1

0xce82,	// (0x0001d67a) list_single_heading_pane_vc_t2_ParamLimits

0xce82,	// (0x0001d67a) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0001fff4) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0001fff4) list_single_heading_pane_vc_t

0x33e3,	// (0x00013bdb) list_setting_number_pane_vc_g1_ParamLimits

0x33e3,	// (0x00013bdb) list_setting_number_pane_vc_g1

0x33ef,	// (0x00013be7) list_setting_number_pane_vc_g2_ParamLimits

0x33ef,	// (0x00013be7) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0001fff9) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0001fff9) list_setting_number_pane_vc_g

0x33fb,	// (0x00013bf3) list_setting_number_pane_vc_t1_ParamLimits

0x33fb,	// (0x00013bf3) list_setting_number_pane_vc_t1

0x340f,	// (0x00013c07) list_setting_number_pane_vc_t2_ParamLimits

0x340f,	// (0x00013c07) list_setting_number_pane_vc_t2

0x342b,	// (0x00013c23) list_setting_number_pane_vc_t3_ParamLimits

0x342b,	// (0x00013c23) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0001fffe) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0001fffe) list_setting_number_pane_vc_t

0x3457,	// (0x00013c4f) set_value_pane_vc_ParamLimits

0x3457,	// (0x00013c4f) set_value_pane_vc

0x4a4c,	// (0x00015244) list_double2_graphic_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_double2_graphic_pane_vc

0x4a4c,	// (0x00015244) list_double2_large_graphic_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_double2_large_graphic_pane_vc

0x4a4c,	// (0x00015244) list_double2_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_double2_pane_vc

0x4a4c,	// (0x00015244) list_double_graphic_heading_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_double_graphic_heading_pane_vc

0x4a4c,	// (0x00015244) list_double_graphic_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_double_graphic_pane_vc

0x4a4c,	// (0x00015244) list_double_heading_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_double_heading_pane_vc

0x4a4c,	// (0x00015244) list_double_large_graphic_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_double_large_graphic_pane_vc

0x4a4c,	// (0x00015244) list_double_number_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_double_number_pane_vc

0x4a4c,	// (0x00015244) list_double_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_double_pane_vc

0x4a4c,	// (0x00015244) list_double_time_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_double_time_pane_vc

0x4a4c,	// (0x00015244) list_setting_number_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_setting_number_pane_vc

0x4a4c,	// (0x00015244) list_setting_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_setting_pane_vc

0x4a4c,	// (0x00015244) list_single_graphic_heading_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_single_graphic_heading_pane_vc

0x4a4c,	// (0x00015244) list_single_heading_pane_vc_ParamLimits

0x4a4c,	// (0x00015244) list_single_heading_pane_vc

0xcf5f,	// (0x0001d757) list_single_number_heading_pane_vc_ParamLimits

0xcf5f,	// (0x0001d757) list_single_number_heading_pane_vc

0xcffb,	// (0x0001d7f3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xcffb,	// (0x0001d7f3) list_double_graphic_heading_pane_vc_g1

0xcddc,	// (0x0001d5d4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xcddc,	// (0x0001d5d4) list_double_graphic_heading_pane_vc_g2

0xcde8,	// (0x0001d5e0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xcde8,	// (0x0001d5e0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x000201fc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x000201fc) list_double_graphic_heading_pane_vc_g

0xd007,	// (0x0001d7ff) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd007,	// (0x0001d7ff) list_double_graphic_heading_pane_vc_t1

0xce6a,	// (0x0001d662) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xce6a,	// (0x0001d662) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x00020203) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00020203) list_double_graphic_heading_pane_vc_t

0x33e3,	// (0x00013bdb) list_setting_pane_vc_g1_ParamLimits

0x33e3,	// (0x00013bdb) list_setting_pane_vc_g1

0x33ef,	// (0x00013be7) list_setting_pane_vc_g2_ParamLimits

0x33ef,	// (0x00013be7) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0001fff9) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0001fff9) list_setting_pane_vc_g

0x5240,	// (0x00015a38) list_setting_pane_vc_t1_ParamLimits

0x5240,	// (0x00015a38) list_setting_pane_vc_t1

0x525c,	// (0x00015a54) list_setting_pane_vc_t2_ParamLimits

0x525c,	// (0x00015a54) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x00020231) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x00020231) list_setting_pane_vc_t

0x3457,	// (0x00013c4f) set_value_pane_cp_vc_ParamLimits

0x3457,	// (0x00013c4f) set_value_pane_cp_vc

0xcddc,	// (0x0001d5d4) list_single_number_heading_pane_vc_g1_ParamLimits

0xcddc,	// (0x0001d5d4) list_single_number_heading_pane_vc_g1

0xcde8,	// (0x0001d5e0) list_single_number_heading_pane_vc_g2_ParamLimits

0xcde8,	// (0x0001d5e0) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001ffef) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001ffef) list_single_number_heading_pane_vc_g

0xce6a,	// (0x0001d662) list_single_number_heading_pane_vc_t1_ParamLimits

0xce6a,	// (0x0001d662) list_single_number_heading_pane_vc_t1

0xd01b,	// (0x0001d813) list_single_number_heading_pane_vc_t2_ParamLimits

0xd01b,	// (0x0001d813) list_single_number_heading_pane_vc_t2

0xd02f,	// (0x0001d827) list_single_number_heading_pane_vc_t3_ParamLimits

0xd02f,	// (0x0001d827) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x00020236) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x00020236) list_single_number_heading_pane_vc_t

0xcdd0,	// (0x0001d5c8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xcdd0,	// (0x0001d5c8) list_single_graphic_heading_pane_vc_g1

0xcddc,	// (0x0001d5d4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xcddc,	// (0x0001d5d4) list_single_graphic_heading_pane_vc_g4

0xcde8,	// (0x0001d5e0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xcde8,	// (0x0001d5e0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c8,	// (0x0001ffc0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x0001ffc0) list_single_graphic_heading_pane_vc_g

0xce6a,	// (0x0001d662) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xce6a,	// (0x0001d662) list_single_graphic_heading_pane_vc_t1

0xd041,	// (0x0001d839) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd041,	// (0x0001d839) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0002023d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0002023d) list_single_graphic_heading_pane_vc_t

0xcddc,	// (0x0001d5d4) list_double2_pane_vc_g1_ParamLimits

0xcddc,	// (0x0001d5d4) list_double2_pane_vc_g1

0xcde8,	// (0x0001d5e0) list_double2_pane_vc_g2_ParamLimits

0xcde8,	// (0x0001d5e0) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001ffef) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001ffef) list_double2_pane_vc_g

0xd055,	// (0x0001d84d) list_double2_pane_vc_t1_ParamLimits

0xd055,	// (0x0001d84d) list_double2_pane_vc_t1

0xd06b,	// (0x0001d863) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd06b,	// (0x0001d863) list_double2_large_graphic_pane_vc_g1

0xcddc,	// (0x0001d5d4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xcddc,	// (0x0001d5d4) list_double2_large_graphic_pane_vc_g2

0xcde8,	// (0x0001d5e0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xcde8,	// (0x0001d5e0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4a,	// (0x00020242) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x00020242) list_double2_large_graphic_pane_vc_g

0xd077,	// (0x0001d86f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd077,	// (0x0001d86f) list_double2_large_graphic_pane_vc_t1

0xd08d,	// (0x0001d885) list_double_time_pane_vc_g1_ParamLimits

0xd08d,	// (0x0001d885) list_double_time_pane_vc_g1

0xd099,	// (0x0001d891) list_double_time_pane_vc_g2_ParamLimits

0xd099,	// (0x0001d891) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x00020249) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x00020249) list_double_time_pane_vc_g

0xd0a5,	// (0x0001d89d) list_double_time_pane_vc_t1_ParamLimits

0xd0a5,	// (0x0001d89d) list_double_time_pane_vc_t1

0xd0c0,	// (0x0001d8b8) list_double_time_pane_vc_t2_ParamLimits

0xd0c0,	// (0x0001d8b8) list_double_time_pane_vc_t2

0xd0fb,	// (0x0001d8f3) list_double_time_pane_vc_t3_ParamLimits

0xd0fb,	// (0x0001d8f3) list_double_time_pane_vc_t3

0xd113,	// (0x0001d90b) list_double_time_pane_vc_t4_ParamLimits

0xd113,	// (0x0001d90b) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x0002024e) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x0002024e) list_double_time_pane_vc_t

0xcddc,	// (0x0001d5d4) list_double_pane_vc_g1_ParamLimits

0xcddc,	// (0x0001d5d4) list_double_pane_vc_g1

0xcde8,	// (0x0001d5e0) list_double_pane_vc_g2_ParamLimits

0xcde8,	// (0x0001d5e0) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001ffef) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001ffef) list_double_pane_vc_g

0xd127,	// (0x0001d91f) list_double_pane_vc_t1_ParamLimits

0xd127,	// (0x0001d91f) list_double_pane_vc_t1

0xd13b,	// (0x0001d933) list_double_pane_vc_t2_ParamLimits

0xd13b,	// (0x0001d933) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x00020257) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x00020257) list_double_pane_vc_t

0xcddc,	// (0x0001d5d4) list_double_number_pane_vc_g1_ParamLimits

0xcddc,	// (0x0001d5d4) list_double_number_pane_vc_g1

0xcde8,	// (0x0001d5e0) list_double_number_pane_vc_g2_ParamLimits

0xcde8,	// (0x0001d5e0) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001ffef) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001ffef) list_double_number_pane_vc_g

0xd153,	// (0x0001d94b) list_double_number_pane_vc_t1_ParamLimits

0xd153,	// (0x0001d94b) list_double_number_pane_vc_t1

0xd167,	// (0x0001d95f) list_double_number_pane_vc_t2_ParamLimits

0xd167,	// (0x0001d95f) list_double_number_pane_vc_t2

0xd13b,	// (0x0001d933) list_double_number_pane_vc_t3_ParamLimits

0xd13b,	// (0x0001d933) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x0002025c) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x0002025c) list_double_number_pane_vc_t

0xd17b,	// (0x0001d973) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd17b,	// (0x0001d973) list_double_large_graphic_pane_vc_g1

0xd187,	// (0x0001d97f) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd187,	// (0x0001d97f) list_double_large_graphic_pane_vc_g2

0xcde8,	// (0x0001d5e0) list_double_large_graphic_pane_vc_g3_ParamLimits

0xcde8,	// (0x0001d5e0) list_double_large_graphic_pane_vc_g3

0xd196,	// (0x0001d98e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd196,	// (0x0001d98e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x00020263) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x00020263) list_double_large_graphic_pane_vc_g

0xd1a2,	// (0x0001d99a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd1a2,	// (0x0001d99a) list_double_large_graphic_pane_vc_t1

0xd1b6,	// (0x0001d9ae) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd1b6,	// (0x0001d9ae) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0002026c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0002026c) list_double_large_graphic_pane_vc_t

0xcddc,	// (0x0001d5d4) list_double_heading_pane_vc_g1_ParamLimits

0xcddc,	// (0x0001d5d4) list_double_heading_pane_vc_g1

0xcde8,	// (0x0001d5e0) list_double_heading_pane_vc_g2_ParamLimits

0xcde8,	// (0x0001d5e0) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001ffef) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001ffef) list_double_heading_pane_vc_g

0xd1cf,	// (0x0001d9c7) list_double_heading_pane_vc_t1_ParamLimits

0xd1cf,	// (0x0001d9c7) list_double_heading_pane_vc_t1

0xce6a,	// (0x0001d662) list_double_heading_pane_vc_t2_ParamLimits

0xce6a,	// (0x0001d662) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x00020271) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x00020271) list_double_heading_pane_vc_t

0xd1e3,	// (0x0001d9db) list_double_graphic_pane_vc_g1_ParamLimits

0xd1e3,	// (0x0001d9db) list_double_graphic_pane_vc_g1

0xd1f3,	// (0x0001d9eb) list_double_graphic_pane_vc_g2_ParamLimits

0xd1f3,	// (0x0001d9eb) list_double_graphic_pane_vc_g2

0xd202,	// (0x0001d9fa) list_double_graphic_pane_vc_g3_ParamLimits

0xd202,	// (0x0001d9fa) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x00020276) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x00020276) list_double_graphic_pane_vc_g

0xd20e,	// (0x0001da06) list_double_graphic_pane_vc_t1_ParamLimits

0xd20e,	// (0x0001da06) list_double_graphic_pane_vc_t1

0xd13b,	// (0x0001d933) list_double_graphic_pane_vc_t2_ParamLimits

0xd13b,	// (0x0001d933) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0002027d) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0002027d) list_double_graphic_pane_vc_t

0xd60d,	// (0x0001de05) aid_size_cell_fastswap

0xd615,	// (0x0001de0d) aid_size_cell_touch_ParamLimits

0xd615,	// (0x0001de0d) aid_size_cell_touch

0xd870,	// (0x0001e068) popup_fast_swap_wide_window_ParamLimits

0xd870,	// (0x0001e068) popup_fast_swap_wide_window

0xd97a,	// (0x0001e172) touch_pane_ParamLimits

0xd97a,	// (0x0001e172) touch_pane

0x15c7,	// (0x00011dbf) button_value_adjust_pane_cp2

0xcac8,	// (0x0001d2c0) button_value_adjust_pane_cp4

0xcae8,	// (0x0001d2e0) form_field_data_pane_cp2

0xcb07,	// (0x0001d2ff) form_field_data_wide_pane_cp2

0x1ca1,	// (0x00012499) bg_scroll_pane_ParamLimits

0xdc0a,	// (0x0001e402) scroll_handle_pane_ParamLimits

0xdc1e,	// (0x0001e416) scroll_sc2_down_pane_ParamLimits

0xdc1e,	// (0x0001e416) scroll_sc2_down_pane

0x1cd2,	// (0x000124ca) scroll_sc2_up_pane_ParamLimits

0x1cd2,	// (0x000124ca) scroll_sc2_up_pane

0x58a0,	// (0x00016098) grid_wheel_folder_pane_g1_ParamLimits

0x58a0,	// (0x00016098) grid_wheel_folder_pane_g1

0xdde3,	// (0x0001e5db) clock_nsta_pane_cp2_ParamLimits

0xdde3,	// (0x0001e5db) clock_nsta_pane_cp2

0x1a1a,	// (0x00012212) listscroll_midp_pane_ParamLimits

0x2527,	// (0x00012d1f) midp_canvas_pane

0x2811,	// (0x00013009) nsta_clock_indic_pane

0x286f,	// (0x00013067) listscroll_form_pane_vc

0x288b,	// (0x00013083) listscroll_set_pane_vc_ParamLimits

0x288b,	// (0x00013083) listscroll_set_pane_vc

0x2f2f,	// (0x00013727) clock_nsta_pane

0x2fa4,	// (0x0001379c) indicator_nsta_pane

0x3273,	// (0x00013a6b) bg_popup_sub_pane_cp2_ParamLimits

0x3287,	// (0x00013a7f) find_pane_cp2_ParamLimits

0x3287,	// (0x00013a7f) find_pane_cp2

0x329d,	// (0x00013a95) grid_toobar_pane_ParamLimits

0x3467,	// (0x00013c5f) list_form_gen_pane_vc_ParamLimits

0x3467,	// (0x00013c5f) list_form_gen_pane_vc

0x347d,	// (0x00013c75) scroll_pane_cp8_vc_ParamLimits

0x347d,	// (0x00013c75) scroll_pane_cp8_vc

0x34f9,	// (0x00013cf1) data_form_wide_pane_vc_ParamLimits

0x34f9,	// (0x00013cf1) data_form_wide_pane_vc

0x3505,	// (0x00013cfd) form_field_data_wide_pane_vc_g1

0x350d,	// (0x00013d05) form_field_data_wide_pane_vc_t1_ParamLimits

0x350d,	// (0x00013d05) form_field_data_wide_pane_vc_t1

0x16ad,	// (0x00011ea5) input_focus_pane_cp6_vc_ParamLimits

0x16ad,	// (0x00011ea5) input_focus_pane_cp6_vc

0x384f,	// (0x00014047) list_midp_pane_ParamLimits

0x385b,	// (0x00014053) scroll_pane_cp16_ParamLimits

0x385b,	// (0x00014053) scroll_pane_cp16

0x38a9,	// (0x000140a1) button_value_adjust_pane_ParamLimits

0x38a9,	// (0x000140a1) button_value_adjust_pane

0x4858,	// (0x00015050) button_value_adjust_pane_cp6_ParamLimits

0x4858,	// (0x00015050) button_value_adjust_pane_cp6

0x4982,	// (0x0001517a) settings_code_pane_cp_ParamLimits

0x4982,	// (0x0001517a) settings_code_pane_cp

0x07dc,	// (0x00010fd4) cell_touch_pane_g1

0x07dc,	// (0x00010fd4) cell_touch_pane_g2

0x0001,

0xf71b,	// (0x0001ff13) cell_touch_pane_g

0x4ffa,	// (0x000157f2) cell_touch_pane_cp_ParamLimits

0x4ffa,	// (0x000157f2) cell_touch_pane_cp

0x500a,	// (0x00015802) cell_touch_pane_ParamLimits

0x500a,	// (0x00015802) cell_touch_pane

0x07dc,	// (0x00010fd4) scroll_sc2_down_pane_g1

0x07dc,	// (0x00010fd4) scroll_sc2_up_pane_g1

0x07e6,	// (0x00010fde) bg_set_opt_pane_cp4_vc

0x503c,	// (0x00015834) list_set_graphic_pane_vc_g1_ParamLimits

0x503c,	// (0x00015834) list_set_graphic_pane_vc_g1

0x5048,	// (0x00015840) list_set_graphic_pane_vc_g2_ParamLimits

0x5048,	// (0x00015840) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x00020208) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x00020208) list_set_graphic_pane_vc_g

0x5054,	// (0x0001584c) text_primary_small_cp13_vc_ParamLimits

0x5054,	// (0x0001584c) text_primary_small_cp13_vc

0x506c,	// (0x00015864) list_set_graphic_pane_vc_ParamLimits

0x506c,	// (0x00015864) list_set_graphic_pane_vc

0x07e6,	// (0x00010fde) input_focus_pane_cp2_vc

0x07dc,	// (0x00010fd4) setting_code_pane_vc_g1

0x5080,	// (0x00015878) setting_code_pane_vc_t1

0x508e,	// (0x00015886) set_text_pane_vc_t1_ParamLimits

0x508e,	// (0x00015886) set_text_pane_vc_t1

0x07e6,	// (0x00010fde) input_focus_pane_cp1_vc

0x50a9,	// (0x000158a1) list_set_text_pane_vc

0x07dc,	// (0x00010fd4) setting_text_pane_vc_g1

0x07e6,	// (0x00010fde) bg_set_opt_pane_cp2_vc

0x50b3,	// (0x000158ab) setting_slider_graphic_pane_vc_g1

0x50bb,	// (0x000158b3) setting_slider_graphic_pane_vc_t1

0x50c9,	// (0x000158c1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0002020d) setting_slider_graphic_pane_vc_t

0x50d7,	// (0x000158cf) slider_set_pane_cp_vc

0x50df,	// (0x000158d7) slider_set_pane_vc_g1

0x50e8,	// (0x000158e0) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x00020212) slider_set_pane_vc_g

0x17e5,	// (0x00011fdd) set_opt_bg_pane_g1_copy1

0x17ed,	// (0x00011fe5) set_opt_bg_pane_g2_copy1

0x5114,	// (0x0001590c) set_opt_bg_pane_g3_copy1

0x17fd,	// (0x00011ff5) set_opt_bg_pane_g4_copy1

0x1805,	// (0x00011ffd) set_opt_bg_pane_g5_copy1

0x180d,	// (0x00012005) set_opt_bg_pane_g6_copy1

0x511e,	// (0x00015916) set_opt_bg_pane_g7_copy1

0x5126,	// (0x0001591e) set_opt_bg_pane_g8_copy1

0x5130,	// (0x00015928) set_opt_bg_pane_g9_copy1

0x07e6,	// (0x00010fde) bg_set_opt_pane_cp_vc

0x513a,	// (0x00015932) setting_slider_pane_vc_t1

0x50bb,	// (0x000158b3) setting_slider_pane_vc_t2

0x50c9,	// (0x000158c1) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x00020221) setting_slider_pane_vc_t

0x50d7,	// (0x000158cf) slider_set_pane_vc

0xe166,	// (0x0001e95e) volume_set_pane_vc_g1

0xe16f,	// (0x0001e967) volume_set_pane_vc_g2

0xe178,	// (0x0001e970) volume_set_pane_vc_g3

0xe181,	// (0x0001e979) volume_set_pane_vc_g4

0xe18a,	// (0x0001e982) volume_set_pane_vc_g5

0xe193,	// (0x0001e98b) volume_set_pane_vc_g6

0xe19c,	// (0x0001e994) volume_set_pane_vc_g7

0xe1a5,	// (0x0001e99d) volume_set_pane_vc_g8

0xe1ae,	// (0x0001e9a6) volume_set_pane_vc_g9

0xe1b7,	// (0x0001e9af) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x000200bf) volume_set_pane_vc_g

0x5149,	// (0x00015941) volume_set_pane_vc

0x5151,	// (0x00015949) button_value_adjust_pane_cp1_vc

0x515b,	// (0x00015953) list_highlight_pane_cp2_vc

0x5164,	// (0x0001595c) list_set_pane_vc_ParamLimits

0x5164,	// (0x0001595c) list_set_pane_vc

0x51ce,	// (0x000159c6) main_pane_set_vc_t1_ParamLimits

0x51ce,	// (0x000159c6) main_pane_set_vc_t1

0x51e3,	// (0x000159db) main_pane_set_vc_t2_ParamLimits

0x51e3,	// (0x000159db) main_pane_set_vc_t2

0x51f5,	// (0x000159ed) main_pane_set_vc_t3_ParamLimits

0x51f5,	// (0x000159ed) main_pane_set_vc_t3

0x5209,	// (0x00015a01) main_pane_set_vc_t4_ParamLimits

0x5209,	// (0x00015a01) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x00020228) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x00020228) main_pane_set_vc_t

0x521d,	// (0x00015a15) setting_code_pane_vc_ParamLimits

0x521d,	// (0x00015a15) setting_code_pane_vc

0x522e,	// (0x00015a26) setting_slider_graphic_pane_vc

0x522e,	// (0x00015a26) setting_slider_pane_vc

0x522e,	// (0x00015a26) setting_text_pane_vc

0x522e,	// (0x00015a26) setting_volume_pane_vc

0x5238,	// (0x00015a30) scroll_pane_cp121_vc

0x15b5,	// (0x00011dad) set_content_pane_vc

0x5467,	// (0x00015c5f) button_value_adjust_pane_g1

0x5470,	// (0x00015c68) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x00020282) button_value_adjust_pane_g

0x5479,	// (0x00015c71) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5479,	// (0x00015c71) form_field_slider_wide_pane_vc_t1

0x548d,	// (0x00015c85) form_field_slider_wide_pane_vc_t2_ParamLimits

0x548d,	// (0x00015c85) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x00020287) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x00020287) form_field_slider_wide_pane_vc_t

0x0b5b,	// (0x00011353) input_focus_pane_cp10_vc_ParamLimits

0x0b5b,	// (0x00011353) input_focus_pane_cp10_vc

0x54a1,	// (0x00015c99) slider_cont_pane_cp1_vc_ParamLimits

0x54a1,	// (0x00015c99) slider_cont_pane_cp1_vc

0x50df,	// (0x000158d7) slider_form_pane_g1_cp2

0x50e8,	// (0x000158e0) slider_form_pane_g2_cp2

0x54bc,	// (0x00015cb4) form_field_slider_pane_vc_t3

0x54ca,	// (0x00015cc2) form_field_slider_pane_vc_t4

0x54d8,	// (0x00015cd0) slider_form_pane_vc_ParamLimits

0x54d8,	// (0x00015cd0) slider_form_pane_vc

0x54e5,	// (0x00015cdd) form_field_slider_pane_vc_t1_ParamLimits

0x54e5,	// (0x00015cdd) form_field_slider_pane_vc_t1

0x548d,	// (0x00015c85) form_field_slider_pane_vc_t2_ParamLimits

0x548d,	// (0x00015c85) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x00020297) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x00020297) form_field_slider_pane_vc_t

0x0b5b,	// (0x00011353) input_focus_pane_cp9_vc_ParamLimits

0x0b5b,	// (0x00011353) input_focus_pane_cp9_vc

0x5501,	// (0x00015cf9) slider_cont_pane_vc_ParamLimits

0x5501,	// (0x00015cf9) slider_cont_pane_vc

0x5515,	// (0x00015d0d) list_form_graphic_pane_cp_vc_ParamLimits

0x5515,	// (0x00015d0d) list_form_graphic_pane_cp_vc

0x3505,	// (0x00013cfd) form_field_popup_wide_pane_vc_g1

0x552a,	// (0x00015d22) form_field_popup_wide_pane_vc_t1_ParamLimits

0x552a,	// (0x00015d22) form_field_popup_wide_pane_vc_t1

0x16ad,	// (0x00011ea5) input_focus_pane_cp8_vc_ParamLimits

0x16ad,	// (0x00011ea5) input_focus_pane_cp8_vc

0x5541,	// (0x00015d39) list_form_wide_pane_vc_ParamLimits

0x5541,	// (0x00015d39) list_form_wide_pane_vc

0x554d,	// (0x00015d45) list_form_graphic_pane_vc_g1

0x5555,	// (0x00015d4d) list_form_graphic_pane_vc_t1_ParamLimits

0x5555,	// (0x00015d4d) list_form_graphic_pane_vc_t1

0x08c6,	// (0x000110be) list_highlight_pane_cp5_vc_ParamLimits

0x08c6,	// (0x000110be) list_highlight_pane_cp5_vc

0x5571,	// (0x00015d69) list_form_graphic_pane_vc_ParamLimits

0x5571,	// (0x00015d69) list_form_graphic_pane_vc

0x3505,	// (0x00013cfd) form_field_popup_pane_vc_g1

0x5587,	// (0x00015d7f) form_field_popup_pane_vc_t1_ParamLimits

0x5587,	// (0x00015d7f) form_field_popup_pane_vc_t1

0x16ad,	// (0x00011ea5) input_focus_pane_cp7_vc_ParamLimits

0x16ad,	// (0x00011ea5) input_focus_pane_cp7_vc

0x559e,	// (0x00015d96) list_form_pane_vc_ParamLimits

0x559e,	// (0x00015d96) list_form_pane_vc

0x55aa,	// (0x00015da2) data_form_pane_vc_t1_ParamLimits

0x55aa,	// (0x00015da2) data_form_pane_vc_t1

0x17e5,	// (0x00011fdd) input_focus_pane_vc_g1

0x17ed,	// (0x00011fe5) input_focus_pane_vc_g2

0x17f5,	// (0x00011fed) input_focus_pane_vc_g3

0x17fd,	// (0x00011ff5) input_focus_pane_vc_g4

0x1805,	// (0x00011ffd) input_focus_pane_vc_g5

0x180d,	// (0x00012005) input_focus_pane_vc_g6

0x1815,	// (0x0001200d) input_focus_pane_vc_g7

0x181d,	// (0x00012015) input_focus_pane_vc_g8

0x1825,	// (0x0001201d) input_focus_pane_vc_g9

0x07dc,	// (0x00010fd4) input_focus_pane_vc_g10

0x0009,

0xf6a4,	// (0x0001fe9c) input_focus_pane_vc_g

0x34f9,	// (0x00013cf1) data_form_pane_vc_ParamLimits

0x34f9,	// (0x00013cf1) data_form_pane_vc

0x3505,	// (0x00013cfd) form_field_data_pane_vc_g1

0x55c5,	// (0x00015dbd) form_field_data_pane_vc_t1_ParamLimits

0x55c5,	// (0x00015dbd) form_field_data_pane_vc_t1

0x16ad,	// (0x00011ea5) input_focus_pane_vc_ParamLimits

0x16ad,	// (0x00011ea5) input_focus_pane_vc

0x55df,	// (0x00015dd7) button_value_adjust_pane_cp3_vc

0x55e7,	// (0x00015ddf) button_value_adjust_pane_cp5_vc

0x55ef,	// (0x00015de7) form_field_data_pane_vc_ParamLimits

0x55ef,	// (0x00015de7) form_field_data_pane_vc

0x5606,	// (0x00015dfe) form_field_data_pane_vc_cp2

0x560e,	// (0x00015e06) form_field_data_wide_pane_vc_ParamLimits

0x560e,	// (0x00015e06) form_field_data_wide_pane_vc

0x5624,	// (0x00015e1c) form_field_data_wide_pane_vc_cp2

0x562c,	// (0x00015e24) form_field_popup_pane_vc_ParamLimits

0x562c,	// (0x00015e24) form_field_popup_pane_vc

0x5643,	// (0x00015e3b) form_field_popup_wide_pane_vc_ParamLimits

0x5643,	// (0x00015e3b) form_field_popup_wide_pane_vc

0x5659,	// (0x00015e51) form_field_slider_pane_vc_ParamLimits

0x5659,	// (0x00015e51) form_field_slider_pane_vc

0x566c,	// (0x00015e64) form_field_slider_wide_pane_vc_ParamLimits

0x566c,	// (0x00015e64) form_field_slider_wide_pane_vc

0x567f,	// (0x00015e77) grid_touch_1_pane_ParamLimits

0x567f,	// (0x00015e77) grid_touch_1_pane

0x568b,	// (0x00015e83) grid_touch_2_pane_ParamLimits

0x568b,	// (0x00015e83) grid_touch_2_pane

0x27dc,	// (0x00012fd4) touch_pane_g1_ParamLimits

0x27dc,	// (0x00012fd4) touch_pane_g1

0x56a3,	// (0x00015e9b) cell_app_pane_cp_wide_ParamLimits

0x56a3,	// (0x00015e9b) cell_app_pane_cp_wide

0x56b4,	// (0x00015eac) grid_popup_fast_wide_pane_ParamLimits

0x56b4,	// (0x00015eac) grid_popup_fast_wide_pane

0x56c8,	// (0x00015ec0) scroll_pane_cp19_ParamLimits

0x56c8,	// (0x00015ec0) scroll_pane_cp19

0x07e6,	// (0x00010fde) bg_popup_window_pane_cp20

0x56dc,	// (0x00015ed4) listscroll_popup_fast_wide_pane

0x08c6,	// (0x000110be) grid_indicator_nsta_pane

0x56e4,	// (0x00015edc) clock_nsta_pane_g1

0x56ed,	// (0x00015ee5) clock_nsta_pane_t1

0x5709,	// (0x00015f01) cell_indicator_nsta_pane_ParamLimits

0x5709,	// (0x00015f01) cell_indicator_nsta_pane

0x5741,	// (0x00015f39) cell_indicator_nsta_pane_g1

0x574f,	// (0x00015f47) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x000202a1) cell_indicator_nsta_pane_g

0x5765,	// (0x00015f5d) clock_nsta_pane_cp

0x576d,	// (0x00015f65) indicator_nsta_pane_cp

0x5776,	// (0x00015f6e) nsta_clock_indic_pane_g1

0x09a9,	// (0x000111a1) grid_indicator_pane

0x1dc7,	// (0x000125bf) scroll_pane_cp29

0xdd32,	// (0x0001e52a) indicator_nsta_pane_cp2_ParamLimits

0xdd32,	// (0x0001e52a) indicator_nsta_pane_cp2

0x08c6,	// (0x000110be) main_apps_wheel_pane

0x3730,	// (0x00013f28) form_midp_field_text_pane_ParamLimits

0x387b,	// (0x00014073) scroll_bar_cp050_ParamLimits

0x57df,	// (0x00015fd7) cell_indicator_pane_ParamLimits

0x57df,	// (0x00015fd7) cell_indicator_pane

0x57f6,	// (0x00015fee) cell_indicator_pane_g1

0x5800,	// (0x00015ff8) grid_wheel_folder_pane_ParamLimits

0x5800,	// (0x00015ff8) grid_wheel_folder_pane

0x5814,	// (0x0001600c) list_wheel_apps_pane_ParamLimits

0x5814,	// (0x0001600c) list_wheel_apps_pane

0x5825,	// (0x0001601d) main_apps_wheel_pane_g1_ParamLimits

0x5825,	// (0x0001601d) main_apps_wheel_pane_g1

0x5839,	// (0x00016031) main_apps_wheel_pane_g2_ParamLimits

0x5839,	// (0x00016031) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x000202bd) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x000202bd) main_apps_wheel_pane_g

0x5851,	// (0x00016049) main_apps_wheel_pane_t1_ParamLimits

0x5851,	// (0x00016049) main_apps_wheel_pane_t1

0x5874,	// (0x0001606c) list_wheel_apps_pane_g1

0x587c,	// (0x00016074) list_wheel_apps_pane_g2

0x5884,	// (0x0001607c) list_wheel_apps_pane_g3

0x588c,	// (0x00016084) list_wheel_apps_pane_g4

0x5896,	// (0x0001608e) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x000202c2) list_wheel_apps_pane_g

0x239f,	// (0x00012b97) navi_icon_text_pane

0x2e62,	// (0x0001365a) aid_fill_nsta

0x58b9,	// (0x000160b1) navi_icon_text_pane_g1

0x58c5,	// (0x000160bd) navi_icon_text_pane_t1

0x223d,	// (0x00012a35) list_set_graphic_pane_t1_ParamLimits

0x223d,	// (0x00012a35) list_set_graphic_pane_t1

0x3fca,	// (0x000147c2) popup_midp_note_alarm_window_t6_ParamLimits

0x3fca,	// (0x000147c2) popup_midp_note_alarm_window_t6

0x3fdc,	// (0x000147d4) popup_midp_note_alarm_window_t7_ParamLimits

0x3fdc,	// (0x000147d4) popup_midp_note_alarm_window_t7

0x3fee,	// (0x000147e6) popup_midp_note_alarm_window_t8_ParamLimits

0x3fee,	// (0x000147e6) popup_midp_note_alarm_window_t8

0x4000,	// (0x000147f8) popup_midp_note_alarm_window_t9_ParamLimits

0x4000,	// (0x000147f8) popup_midp_note_alarm_window_t9

0x4012,	// (0x0001480a) popup_midp_note_alarm_window_t10_ParamLimits

0x4012,	// (0x0001480a) popup_midp_note_alarm_window_t10

0x4024,	// (0x0001481c) popup_midp_note_alarm_window_t11_ParamLimits

0x4024,	// (0x0001481c) popup_midp_note_alarm_window_t11

0x4036,	// (0x0001482e) scroll_pane_cp17_ParamLimits

0x4036,	// (0x0001482e) scroll_pane_cp17

0xe166,	// (0x0001e95e) volume_small_pane_cp_g1

0xe45b,	// (0x0001ec53) volume_small_pane_cp_g2

0xe464,	// (0x0001ec5c) volume_small_pane_cp_g3

0xe46d,	// (0x0001ec65) volume_small_pane_cp_g4

0xe476,	// (0x0001ec6e) volume_small_pane_cp_g5

0xe47f,	// (0x0001ec77) volume_small_pane_cp_g6

0xe488,	// (0x0001ec80) volume_small_pane_cp_g7

0xe491,	// (0x0001ec89) volume_small_pane_cp_g8

0xe49a,	// (0x0001ec92) volume_small_pane_cp_g9

0xe4a3,	// (0x0001ec9b) volume_small_pane_cp_g10

0x25ee,	// (0x00012de6) midp_ticker_pane_g1_ParamLimits

0x25fa,	// (0x00012df2) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0001ff68) midp_ticker_pane_g_ParamLimits

0x2606,	// (0x00012dfe) midp_ticker_pane_t1_ParamLimits

0x2e78,	// (0x00013670) aid_fill_nsta_2

0x3867,	// (0x0001405f) list_form2_midp_pane

0x4a00,	// (0x000151f8) midp_editing_number_pane_ParamLimits

0x4a0f,	// (0x00015207) midp_ticker_pane_ParamLimits

0x58d7,	// (0x000160cf) form2_midp_field_pane

0x58fb,	// (0x000160f3) scroll_pane_cp51

0x591b,	// (0x00016113) form2_midp_button_pane_ParamLimits

0x591b,	// (0x00016113) form2_midp_button_pane

0x592d,	// (0x00016125) form2_midp_content_pane_ParamLimits

0x592d,	// (0x00016125) form2_midp_content_pane

0x5947,	// (0x0001613f) form2_midp_field_choice_group_pane

0x594f,	// (0x00016147) form2_midp_field_pane_g1

0x5957,	// (0x0001614f) form2_midp_field_pane_g2

0x595f,	// (0x00016157) form2_midp_field_pane_g3

0x5967,	// (0x0001615f) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x000202e7) form2_midp_field_pane_g

0x596f,	// (0x00016167) form2_midp_gauge_slider_pane

0x5977,	// (0x0001616f) form2_midp_gauge_wait_pane

0x597f,	// (0x00016177) form2_midp_image_pane_ParamLimits

0x597f,	// (0x00016177) form2_midp_image_pane

0x599a,	// (0x00016192) form2_midp_label_pane_ParamLimits

0x599a,	// (0x00016192) form2_midp_label_pane

0x59b3,	// (0x000161ab) form2_midp_label_pane_cp_ParamLimits

0x59b3,	// (0x000161ab) form2_midp_label_pane_cp

0x59d4,	// (0x000161cc) form2_midp_string_pane_ParamLimits

0x59d4,	// (0x000161cc) form2_midp_string_pane

0xd222,	// (0x0001da1a) form2_midp_text_pane_ParamLimits

0xd222,	// (0x0001da1a) form2_midp_text_pane

0x5a03,	// (0x000161fb) form2_midp_time_pane

0x5a13,	// (0x0001620b) input_focus_pane_cp51_ParamLimits

0x5a13,	// (0x0001620b) input_focus_pane_cp51

0x5a2b,	// (0x00016223) form2_midp_label_pane_t1_ParamLimits

0x5a2b,	// (0x00016223) form2_midp_label_pane_t1

0xd23d,	// (0x0001da35) form2_mdip_text_pane_t1_ParamLimits

0xd23d,	// (0x0001da35) form2_mdip_text_pane_t1

0xd25b,	// (0x0001da53) form2_midp_time_pane_t1

0x5aa6,	// (0x0001629e) form2_midp_gauge_slider_pane_t1

0x5ab8,	// (0x000162b0) form2_midp_gauge_slider_pane_t2

0x5aca,	// (0x000162c2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x000202f0) form2_midp_gauge_slider_pane_t

0x5adc,	// (0x000162d4) form2_midp_slider_pane

0x5ae8,	// (0x000162e0) form2_midp_gauge_wait_pane_t1

0x5af6,	// (0x000162ee) form2_midp_wait_pane_ParamLimits

0x5af6,	// (0x000162ee) form2_midp_wait_pane

0x3524,	// (0x00013d1c) list_single_2graphic_pane_cp4_ParamLimits

0x3524,	// (0x00013d1c) list_single_2graphic_pane_cp4

0x5b21,	// (0x00016319) list_single_midp_graphic_pane_cp_ParamLimits

0x5b21,	// (0x00016319) list_single_midp_graphic_pane_cp

0x07e6,	// (0x00010fde) list_highlight_pane_cp20

0x5b50,	// (0x00016348) list_single_2graphic_pane_g1_cp4

0x5b58,	// (0x00016350) list_single_2graphic_pane_g2_cp4

0x5b60,	// (0x00016358) list_single_2graphic_pane_t1_cp4

0x08c6,	// (0x000110be) list_highlight_pane_cp21

0x5b6f,	// (0x00016367) list_single_midp_graphic_pane_g4_cp

0x5b7e,	// (0x00016376) list_single_midp_graphic_pane_t1_cp

0x5b93,	// (0x0001638b) form2_mdip_string_pane_t1_ParamLimits

0x5b93,	// (0x0001638b) form2_mdip_string_pane_t1

0x07e6,	// (0x00010fde) bg_wml_button_pane_cp2

0x07dc,	// (0x00010fd4) form2_midp_image_pane_g1

0xc89b,	// (0x0001d093) list_double_large_graphic_pane_g5_ParamLimits

0xc89b,	// (0x0001d093) list_double_large_graphic_pane_g5

0x1a1a,	// (0x00012212) midp_form_pane_ParamLimits

0x08c6,	// (0x000110be) main_apps_wheel_pane_ParamLimits

0x2c4a,	// (0x00013442) popup_preview_window_ParamLimits

0x2c4a,	// (0x00013442) popup_preview_window

0x2e05,	// (0x000135fd) popup_touch_info_window_ParamLimits

0x2e05,	// (0x000135fd) popup_touch_info_window

0x2e23,	// (0x0001361b) popup_touch_menu_window_ParamLimits

0x2e23,	// (0x0001361b) popup_touch_menu_window

0x07d2,	// (0x00010fca) bg_popup_sub_pane_cp6

0x5c8c,	// (0x00016484) list_touch_menu_pane

0x5c94,	// (0x0001648c) list_single_touch_menu_pane_ParamLimits

0x5c94,	// (0x0001648c) list_single_touch_menu_pane

0x5caa,	// (0x000164a2) list_single_touch_menu_pane_t1

0x08c6,	// (0x000110be) bg_popup_sub_pane_cp7_ParamLimits

0x08c6,	// (0x000110be) bg_popup_sub_pane_cp7

0x5cb8,	// (0x000164b0) heading_sub_pane

0x5cc0,	// (0x000164b8) list_touch_info_pane_ParamLimits

0x5cc0,	// (0x000164b8) list_touch_info_pane

0x5ccf,	// (0x000164c7) list_single_touch_info_pane_ParamLimits

0x5ccf,	// (0x000164c7) list_single_touch_info_pane

0x5ce1,	// (0x000164d9) list_single_touch_info_pane_t1

0x5cef,	// (0x000164e7) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x000202fe) list_single_touch_info_pane_t

0x251f,	// (0x00012d17) bg_popup_heading_pane_cp

0x5cfd,	// (0x000164f5) heading_sub_pane_t1

0x3493,	// (0x00013c8b) bg_popup_preview_window_pane_cp_ParamLimits

0x3493,	// (0x00013c8b) bg_popup_preview_window_pane_cp

0x5cb8,	// (0x000164b0) heading_preview_pane

0x5cc0,	// (0x000164b8) list_preview_pane_ParamLimits

0x5cc0,	// (0x000164b8) list_preview_pane

0x5d0b,	// (0x00016503) popup_preview_window_g1

0x5ccf,	// (0x000164c7) list_single_preview_pane_ParamLimits

0x5ccf,	// (0x000164c7) list_single_preview_pane

0x5d13,	// (0x0001650b) list_single_preview_pane_g1

0x5d1b,	// (0x00016513) list_single_preview_pane_t1

0x5ce1,	// (0x000164d9) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x00020303) list_single_preview_pane_t

0x5d29,	// (0x00016521) bg_popup_heading_pane_cp2_ParamLimits

0x5d29,	// (0x00016521) bg_popup_heading_pane_cp2

0x5d3f,	// (0x00016537) heading_preview_pane_g1

0x5d47,	// (0x0001653f) heading_preview_pane_t1_ParamLimits

0x5d47,	// (0x0001653f) heading_preview_pane_t1

0x09cc,	// (0x000111c4) soft_indicator_pane_t1_ParamLimits

0x10bf,	// (0x000118b7) scroll_pane_ParamLimits

0x1cc9,	// (0x000124c1) scroll_sc2_left_pane

0x1cc0,	// (0x000124b8) scroll_sc2_right_pane

0x1ce8,	// (0x000124e0) scroll_bg_pane_g1_ParamLimits

0x1cfd,	// (0x000124f5) scroll_bg_pane_g2_ParamLimits

0x1d15,	// (0x0001250d) scroll_bg_pane_g3_ParamLimits

0xf6fb,	// (0x0001fef3) scroll_bg_pane_g_ParamLimits

0x1ce8,	// (0x000124e0) scroll_handle_pane_g1_ParamLimits

0x1d37,	// (0x0001252f) scroll_handle_pane_g2_ParamLimits

0x1d15,	// (0x0001250d) scroll_handle_pane_g3_ParamLimits

0xf702,	// (0x0001fefa) scroll_handle_pane_g_ParamLimits

0x28cd,	// (0x000130c5) popup_choice_list_window_ParamLimits

0x28cd,	// (0x000130c5) popup_choice_list_window

0x327f,	// (0x00013a77) choice_list_pane

0x333b,	// (0x00013b33) cell_toolbar_pane_t1

0x3363,	// (0x00013b5b) toolbar_button_pane_ParamLimits

0x44f0,	// (0x00014ce8) ai_gene_pane_1_t2_ParamLimits

0x44f0,	// (0x00014ce8) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0002011b) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0002011b) ai_gene_pane_1_t

0x5d64,	// (0x0001655c) scroll_sc2_left_pane_g1

0x5d64,	// (0x0001655c) scroll_sc2_right_pane_g1

0x289d,	// (0x00013095) bg_popup_sub_pane_cp10

0x5d6e,	// (0x00016566) list_choice_list_pane

0x5d87,	// (0x0001657f) list_single_choice_list_pane_ParamLimits

0x5d87,	// (0x0001657f) list_single_choice_list_pane

0x5d9a,	// (0x00016592) list_single_choice_list_pane_g1

0x19ca,	// (0x000121c2) list_single_choice_list_pane_t1_ParamLimits

0x19ca,	// (0x000121c2) list_single_choice_list_pane_t1

0x5da2,	// (0x0001659a) choice_list_pane_g1

0x5daa,	// (0x000165a2) choice_list_pane_t1

0x07d2,	// (0x00010fca) input_focus_pane_cp11

0x1ba1,	// (0x00012399) title_pane_stacon_g2_ParamLimits

0x1ba1,	// (0x00012399) title_pane_stacon_g2

0x0002,

0xf6e1,	// (0x0001fed9) title_pane_stacon_g_ParamLimits

0xf6e1,	// (0x0001fed9) title_pane_stacon_g

0x251f,	// (0x00012d17) cursor_press_pane

0x2979,	// (0x00013171) popup_fep_hwr_window_ParamLimits

0x2979,	// (0x00013171) popup_fep_hwr_window

0x29f3,	// (0x000131eb) popup_fep_vkb_window_ParamLimits

0x29f3,	// (0x000131eb) popup_fep_vkb_window

0x5db8,	// (0x000165b0) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0002032c) fep_vkb_side_pane_g_ParamLimits

0xe4d7,	// (0x0001eccf) fep_hwr_candidate_pane_ParamLimits

0xe4d7,	// (0x0001eccf) fep_hwr_candidate_pane

0xe501,	// (0x0001ecf9) fep_hwr_side_pane_ParamLimits

0xe501,	// (0x0001ecf9) fep_hwr_side_pane

0xe521,	// (0x0001ed19) fep_hwr_top_pane_ParamLimits

0xe521,	// (0x0001ed19) fep_hwr_top_pane

0xe539,	// (0x0001ed31) fep_hwr_write_pane_ParamLimits

0xe539,	// (0x0001ed31) fep_hwr_write_pane

0xfb34,	// (0x0002032c) fep_vkb_side_pane_g

0x5dd2,	// (0x000165ca) fep_hwr_top_pane_g1

0x5dc0,	// (0x000165b8) fep_hwr_top_pane_g2

0xe565,	// (0x0001ed5d) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x00020308) fep_hwr_top_pane_g

0xe57a,	// (0x0001ed72) fep_hwr_top_text_pane

0x1e8e,	// (0x00012686) fep_hwr_top_text_pane_g1

0x5e08,	// (0x00016600) fep_hwr_top_text_pane_t1

0xe670,	// (0x0001ee68) fep_hwr_candidate_pane_g1

0x605b,	// (0x00016853) fep_vkb_keypad_pane_g3_ParamLimits

0x605b,	// (0x00016853) fep_vkb_keypad_pane_g3

0x6083,	// (0x0001687b) fep_vkb_keypad_pane_g4_ParamLimits

0x6083,	// (0x0001687b) fep_vkb_keypad_pane_g4

0x60f2,	// (0x000168ea) fep_vkb_bottom_pane_g2_ParamLimits

0x60f2,	// (0x000168ea) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x00020333) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x00020333) fep_vkb_bottom_pane_g

0x5d64,	// (0x0001655c) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0002033d) cell_vkb_side_pane_g

0x617d,	// (0x00016975) cell_vkb_side_pane_t1

0x618b,	// (0x00016983) cell_vkb_side_pane_t1_copy1

0x5d64,	// (0x0001655c) bg_fep_vkb_candidate_pane_g2

0x62b7,	// (0x00016aaf) cell_vkb_candidate_pane_ParamLimits

0x5e16,	// (0x0001660e) aid_size_cell_vkb_ParamLimits

0x5e16,	// (0x0001660e) aid_size_cell_vkb

0x62b7,	// (0x00016aaf) cell_vkb_candidate_pane

0xe68a,	// (0x0001ee82) bg_popup_fep_shadow_pane_g1

0x5ea4,	// (0x0001669c) fep_vkb_bottom_pane_ParamLimits

0x5ea4,	// (0x0001669c) fep_vkb_bottom_pane

0x5eda,	// (0x000166d2) fep_vkb_candidate_pane_ParamLimits

0x5eda,	// (0x000166d2) fep_vkb_candidate_pane

0x5ef6,	// (0x000166ee) fep_vkb_keypad_pane_ParamLimits

0x5ef6,	// (0x000166ee) fep_vkb_keypad_pane

0x5f3c,	// (0x00016734) fep_vkb_side_pane_ParamLimits

0x5f3c,	// (0x00016734) fep_vkb_side_pane

0x5f78,	// (0x00016770) fep_vkb_top_pane_ParamLimits

0x5f78,	// (0x00016770) fep_vkb_top_pane

0x5fb4,	// (0x000167ac) fep_vkb_top_pane_g1_ParamLimits

0x5fb4,	// (0x000167ac) fep_vkb_top_pane_g1

0x5fc3,	// (0x000167bb) fep_vkb_top_pane_g2_ParamLimits

0x5fc3,	// (0x000167bb) fep_vkb_top_pane_g2

0x5fd2,	// (0x000167ca) fep_vkb_top_pane_g3_ParamLimits

0x5fd2,	// (0x000167ca) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x00020323) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x00020323) fep_vkb_top_pane_g

0x5ff0,	// (0x000167e8) fep_vkb_top_text_pane_ParamLimits

0x5ff0,	// (0x000167e8) fep_vkb_top_text_pane

0x6001,	// (0x000167f9) fep_vkb_side_pane_g1_ParamLimits

0x6001,	// (0x000167f9) fep_vkb_side_pane_g1

0x604a,	// (0x00016842) grid_vkb_side_pane_ParamLimits

0x604a,	// (0x00016842) grid_vkb_side_pane

0xe692,	// (0x0001ee8a) bg_popup_fep_shadow_pane_g2

0xe69b,	// (0x0001ee93) bg_popup_fep_shadow_pane_g3

0xe6a3,	// (0x0001ee9b) bg_popup_fep_shadow_pane_g4

0xe6ac,	// (0x0001eea4) bg_popup_fep_shadow_pane_g5

0xe6b6,	// (0x0001eeae) bg_popup_fep_shadow_pane_g6

0xe6be,	// (0x0001eeb6) bg_popup_fep_shadow_pane_g7

0x1805,	// (0x00011ffd) bg_popup_fep_shadow_pane_g8

0x60a1,	// (0x00016899) grid_vkb_keypad_number_pane_ParamLimits

0x60a1,	// (0x00016899) grid_vkb_keypad_number_pane

0x60b1,	// (0x000168a9) grid_vkb_keypad_pane_ParamLimits

0x60b1,	// (0x000168a9) grid_vkb_keypad_pane

0x60d7,	// (0x000168cf) fep_vkb_bottom_pane_g1_ParamLimits

0x60d7,	// (0x000168cf) fep_vkb_bottom_pane_g1

0x6100,	// (0x000168f8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6100,	// (0x000168f8) grid_vkb_keypad_bottom_left_pane

0x6115,	// (0x0001690d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6115,	// (0x0001690d) grid_vkb_keypad_bottom_right_pane

0x612a,	// (0x00016922) fep_vkb_top_text_pane_g1

0x6145,	// (0x0001693d) fep_vkb_top_text_pane_t1

0x615a,	// (0x00016952) cell_vkb_side_pane_ParamLimits

0x615a,	// (0x00016952) cell_vkb_side_pane

0x5d64,	// (0x0001655c) cell_vkb_side_pane_g1

0x6199,	// (0x00016991) cell_vkb_keypad_pane_ParamLimits

0x6199,	// (0x00016991) cell_vkb_keypad_pane

0x620e,	// (0x00016a06) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x00020350) bg_popup_fep_shadow_pane_g

0x5d64,	// (0x0001655c) cell_hwr_side_pane_g1

0x5d64,	// (0x0001655c) cell_hwr_side_pane_g2

0x6218,	// (0x00016a10) cell_vkb_keypad_pane_t1

0x6226,	// (0x00016a1e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x6226,	// (0x00016a1e) cell_vkb_keypad_bottom_left_pane

0x6243,	// (0x00016a3b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x6243,	// (0x00016a3b) cell_vkb_keypad_bottom_right_pane

0x5d64,	// (0x0001655c) cell_vkb_keypad_bottom_left_pane_g1

0x5d64,	// (0x0001655c) cell_vkb_keypad_bottom_right_pane_g1

0x627c,	// (0x00016a74) cell_vkb_keypad_number_pane_ParamLimits

0x627c,	// (0x00016a74) cell_vkb_keypad_number_pane

0x629b,	// (0x00016a93) cell_vkb_keypad_number_pane_g1

0x62a5,	// (0x00016a9d) cell_vkb_keypad_number_pane_g2

0x62ae,	// (0x00016aa6) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x00020342) cell_vkb_keypad_number_pane_g

0x6218,	// (0x00016a10) cell_vkb_keypad_number_pane_t1

0x62d2,	// (0x00016aca) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x0002033d) cell_hwr_side_pane_g

0x62eb,	// (0x00016ae3) cell_hwr_side_pane_t1

0xe6d0,	// (0x0001eec8) cell_hwr_side_pane_t1_copy1

0x5fe2,	// (0x000167da) cell_hwr_candidate_pane_g1

0xe6de,	// (0x0001eed6) cell_hwr_candidate_pane_t1

0x5d64,	// (0x0001655c) cell_vkb_candidate_pane_g2

0x632f,	// (0x00016b27) cell_vkb_candidate_pane_t1

0x9808,	// (0x0001a000) bg_popup_fep_shadow_pane_ParamLimits

0x9808,	// (0x0001a000) bg_popup_fep_shadow_pane

0x9816,	// (0x0001a00e) bg_fep_hwr_top_pane_g4

0x5de4,	// (0x000165dc) bg_hwr_side_pane_g1_ParamLimits

0x5de4,	// (0x000165dc) bg_hwr_side_pane_g1

0xe5b6,	// (0x0001edae) cell_hwr_side_pane_ParamLimits

0xe5b6,	// (0x0001edae) cell_hwr_side_pane

0xe5f1,	// (0x0001ede9) fep_hwr_write_pane_g1_ParamLimits

0xe5f1,	// (0x0001ede9) fep_hwr_write_pane_g1

0xe5fe,	// (0x0001edf6) fep_hwr_write_pane_g2_ParamLimits

0xe5fe,	// (0x0001edf6) fep_hwr_write_pane_g2

0xe60b,	// (0x0001ee03) fep_hwr_write_pane_g3_ParamLimits

0xe60b,	// (0x0001ee03) fep_hwr_write_pane_g3

0xe619,	// (0x0001ee11) fep_hwr_write_pane_g4_ParamLimits

0xe619,	// (0x0001ee11) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0002030f) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0002030f) fep_hwr_write_pane_g

0x9816,	// (0x0001a00e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x9816,	// (0x0001a00e) bg_fep_hwr_candidate_pane_g2

0xe62e,	// (0x0001ee26) cell_hwr_candidate_pane_ParamLimits

0xe62e,	// (0x0001ee26) cell_hwr_candidate_pane

0xe670,	// (0x0001ee68) fep_hwr_candidate_pane_g1_ParamLimits

0x5e44,	// (0x0001663c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5e44,	// (0x0001663c) bg_popup_fep_shadow_pane_cp2

0x5fe2,	// (0x000167da) fep_vkb_top_pane_g4_ParamLimits

0x5fe2,	// (0x000167da) fep_vkb_top_pane_g4

0x6028,	// (0x00016820) fep_vkb_side_pane_g2_ParamLimits

0x6028,	// (0x00016820) fep_vkb_side_pane_g2

0xc9f5,	// (0x0001d1ed) list_setting_pane_t4_ParamLimits

0xc9f5,	// (0x0001d1ed) list_setting_pane_t4

0xca8f,	// (0x0001d287) list_setting_number_pane_t5_ParamLimits

0xca8f,	// (0x0001d287) list_setting_number_pane_t5

0x1ed5,	// (0x000126cd) list_double_heading_pane_cp2_ParamLimits

0x1ed5,	// (0x000126cd) list_double_heading_pane_cp2

0x16d3,	// (0x00011ecb) list_double_heading_pane_g1_cp2_ParamLimits

0x16d3,	// (0x00011ecb) list_double_heading_pane_g1_cp2

0x16df,	// (0x00011ed7) list_double_heading_pane_g2_cp2_ParamLimits

0x16df,	// (0x00011ed7) list_double_heading_pane_g2_cp2

0x633d,	// (0x00016b35) list_double_heading_pane_t1_cp2_ParamLimits

0x633d,	// (0x00016b35) list_double_heading_pane_t1_cp2

0x6353,	// (0x00016b4b) list_double_heading_pane_t2_cp2_ParamLimits

0x6353,	// (0x00016b4b) list_double_heading_pane_t2_cp2

0x07ba,	// (0x00010fb2) aid_value_unit2

0xd8ca,	// (0x0001e0c2) popup_preview_fixed_window

0x0b69,	// (0x00011361) bg_popup_preview_window_pane_cp02

0x6365,	// (0x00016b5d) list_preview_fixed_pane

0x63ab,	// (0x00016ba3) list_empty_pane_fp_ParamLimits

0x63ab,	// (0x00016ba3) list_empty_pane_fp

0x63ab,	// (0x00016ba3) list_single_cale_day_pane_fp_ParamLimits

0x63ab,	// (0x00016ba3) list_single_cale_day_pane_fp

0x63ab,	// (0x00016ba3) list_single_graphic_heading_pane_fp_ParamLimits

0x63ab,	// (0x00016ba3) list_single_graphic_heading_pane_fp

0x63ab,	// (0x00016ba3) list_single_graphic_pane_fp_ParamLimits

0x63ab,	// (0x00016ba3) list_single_graphic_pane_fp

0x63ab,	// (0x00016ba3) list_single_heading_pane_fp_ParamLimits

0x63ab,	// (0x00016ba3) list_single_heading_pane_fp

0x63ab,	// (0x00016ba3) list_single_pane_fp_ParamLimits

0x63ab,	// (0x00016ba3) list_single_pane_fp

0x63c0,	// (0x00016bb8) list_single_pane_fp_g1_ParamLimits

0x63c0,	// (0x00016bb8) list_single_pane_fp_g1

0xd26e,	// (0x0001da66) list_single_pane_fp_g2_ParamLimits

0xd26e,	// (0x0001da66) list_single_pane_fp_g2

0xd27a,	// (0x0001da72) list_single_pane_fp_g3_ParamLimits

0xd27a,	// (0x0001da72) list_single_pane_fp_g3

0x63cc,	// (0x00016bc4) list_single_pane_fp_g4_ParamLimits

0x63cc,	// (0x00016bc4) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x00020371) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x00020371) list_single_pane_fp_g

0xd28e,	// (0x0001da86) list_single_pane_fp_t1_ParamLimits

0xd28e,	// (0x0001da86) list_single_pane_fp_t1

0xd2a5,	// (0x0001da9d) list_single_graphic_pane_fp_g1_ParamLimits

0xd2a5,	// (0x0001da9d) list_single_graphic_pane_fp_g1

0x63c0,	// (0x00016bb8) list_single_graphic_pane_fp_g2_ParamLimits

0x63c0,	// (0x00016bb8) list_single_graphic_pane_fp_g2

0xd26e,	// (0x0001da66) list_single_graphic_pane_fp_g3_ParamLimits

0xd26e,	// (0x0001da66) list_single_graphic_pane_fp_g3

0xd27a,	// (0x0001da72) list_single_graphic_pane_fp_g4_ParamLimits

0xd27a,	// (0x0001da72) list_single_graphic_pane_fp_g4

0x63cc,	// (0x00016bc4) list_single_graphic_pane_fp_g5_ParamLimits

0x63cc,	// (0x00016bc4) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x0002037a) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x0002037a) list_single_graphic_pane_fp_g

0xd2b1,	// (0x0001daa9) list_single_graphic_pane_fp_t1_ParamLimits

0xd2b1,	// (0x0001daa9) list_single_graphic_pane_fp_t1

0xd2a5,	// (0x0001da9d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd2a5,	// (0x0001da9d) list_single_graphic_heading_pane_fp_g1

0x63c0,	// (0x00016bb8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x63c0,	// (0x00016bb8) list_single_graphic_heading_pane_fp_g2

0xd26e,	// (0x0001da66) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd26e,	// (0x0001da66) list_single_graphic_heading_pane_fp_g3

0xd27a,	// (0x0001da72) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd27a,	// (0x0001da72) list_single_graphic_heading_pane_fp_g4

0x63cc,	// (0x00016bc4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x63cc,	// (0x00016bc4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002037a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002037a) list_single_graphic_heading_pane_fp_g

0xd2c7,	// (0x0001dabf) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd2c7,	// (0x0001dabf) list_single_graphic_heading_pane_fp_t1

0xd2dd,	// (0x0001dad5) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd2dd,	// (0x0001dad5) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x00020385) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x00020385) list_single_graphic_heading_pane_fp_t

0xd2ef,	// (0x0001dae7) list_single_cale_day_pane_fp_g1_ParamLimits

0xd2ef,	// (0x0001dae7) list_single_cale_day_pane_fp_g1

0x6471,	// (0x00016c69) list_single_cale_day_pane_fp_g2_ParamLimits

0x6471,	// (0x00016c69) list_single_cale_day_pane_fp_g2

0xd327,	// (0x0001db1f) list_single_cale_day_pane_fp_g3_ParamLimits

0xd327,	// (0x0001db1f) list_single_cale_day_pane_fp_g3

0xd34f,	// (0x0001db47) list_single_cale_day_pane_fp_g4_ParamLimits

0xd34f,	// (0x0001db47) list_single_cale_day_pane_fp_g4

0xd373,	// (0x0001db6b) list_single_cale_day_pane_fp_g5_ParamLimits

0xd373,	// (0x0001db6b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x0002038a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x0002038a) list_single_cale_day_pane_fp_g

0xd397,	// (0x0001db8f) list_single_cale_day_pane_fp_t1_ParamLimits

0xd397,	// (0x0001db8f) list_single_cale_day_pane_fp_t1

0xd3bd,	// (0x0001dbb5) list_single_cale_day_pane_fp_t2_ParamLimits

0xd3bd,	// (0x0001dbb5) list_single_cale_day_pane_fp_t2

0xd3d6,	// (0x0001dbce) list_single_cale_day_pane_fp_t3_ParamLimits

0xd3d6,	// (0x0001dbce) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x00020395) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x00020395) list_single_cale_day_pane_fp_t

0x63c0,	// (0x00016bb8) list_empty_pane_fp_g1_ParamLimits

0x63c0,	// (0x00016bb8) list_empty_pane_fp_g1

0xd3ef,	// (0x0001dbe7) list_empty_pane_fp_t1

0xd3fd,	// (0x0001dbf5) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x0002039c) list_empty_pane_fp_t

0x63c0,	// (0x00016bb8) list_single_heading_pane_fp_g1_ParamLimits

0x63c0,	// (0x00016bb8) list_single_heading_pane_fp_g1

0xd26e,	// (0x0001da66) list_single_heading_pane_fp_g2_ParamLimits

0xd26e,	// (0x0001da66) list_single_heading_pane_fp_g2

0xd27a,	// (0x0001da72) list_single_heading_pane_fp_g3_ParamLimits

0xd27a,	// (0x0001da72) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x000203a1) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x000203a1) list_single_heading_pane_fp_g

0xd40b,	// (0x0001dc03) list_single_heading_pane_fp_t1_ParamLimits

0xd40b,	// (0x0001dc03) list_single_heading_pane_fp_t1

0xd41d,	// (0x0001dc15) list_single_heading_pane_fp_t2_ParamLimits

0xd41d,	// (0x0001dc15) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x000203a8) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x000203a8) list_single_heading_pane_fp_t

0x1a38,	// (0x00012230) aid_size_cell_fast

0x0ad9,	// (0x000112d1) soft_indicator_pane_cp1_t1

0x1a75,	// (0x0001226d) cell_app_pane_cp2_ParamLimits

0x1a75,	// (0x0001226d) cell_app_pane_cp2

0xe4c0,	// (0x0001ecb8) fep_hwr_candidate_drop_down_list_pane

0x9824,	// (0x0001a01c) fep_hwr_candidate_pane_g3_ParamLimits

0x9824,	// (0x0001a01c) fep_hwr_candidate_pane_g3

0x9831,	// (0x0001a029) fep_hwr_candidate_pane_g4_ParamLimits

0x9831,	// (0x0001a029) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0002031c) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0002031c) fep_hwr_candidate_pane_g

0x5ec9,	// (0x000166c1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5ec9,	// (0x000166c1) fep_vkb_candidate_drop_down_list_pane

0x62da,	// (0x00016ad2) fep_vkb_candidate_pane_g3

0x62e2,	// (0x00016ada) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x00020349) fep_vkb_candidate_pane_g

0x5fe2,	// (0x000167da) cell_hwr_candidate_pane_g1_ParamLimits

0x65df,	// (0x00016dd7) cell_hwr_candidate_pane_g3_ParamLimits

0x65df,	// (0x00016dd7) cell_hwr_candidate_pane_g3

0x6600,	// (0x00016df8) cell_hwr_candidate_pane_g4_ParamLimits

0x6600,	// (0x00016df8) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x00020363) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x00020363) cell_hwr_candidate_pane_g

0x62f9,	// (0x00016af1) cell_vkb_candidate_pane_g3_ParamLimits

0x62f9,	// (0x00016af1) cell_vkb_candidate_pane_g3

0x6314,	// (0x00016b0c) cell_vkb_candidate_pane_g4_ParamLimits

0x6314,	// (0x00016b0c) cell_vkb_candidate_pane_g4

0x6589,	// (0x00016d81) cell_app_pane_cp2_g1_ParamLimits

0x6589,	// (0x00016d81) cell_app_pane_cp2_g1

0x65a7,	// (0x00016d9f) cell_app_pane_cp2_g2_ParamLimits

0x65a7,	// (0x00016d9f) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x000203ad) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x000203ad) cell_app_pane_cp2_g

0x65b3,	// (0x00016dab) cell_app_pane_cp2_t1_ParamLimits

0x65b3,	// (0x00016dab) cell_app_pane_cp2_t1

0x16ad,	// (0x00011ea5) grid_highlight_pane_cp1_ParamLimits

0x16ad,	// (0x00011ea5) grid_highlight_pane_cp1

0xe6fc,	// (0x0001eef4) cell_hwr_candidate_pane_cp1_ParamLimits

0xe6fc,	// (0x0001eef4) cell_hwr_candidate_pane_cp1

0x5fe2,	// (0x000167da) fep_hwr_candidate_drop_down_list_pane_g1

0x65c5,	// (0x00016dbd) fep_hwr_candidate_drop_down_list_pane_g2

0x65d2,	// (0x00016dca) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x000203b2) fep_hwr_candidate_drop_down_list_pane_g

0xe71b,	// (0x0001ef13) fep_hwr_candidate_drop_down_list_scroll_pane

0xe724,	// (0x0001ef1c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe724,	// (0x0001ef1c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe731,	// (0x0001ef29) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe731,	// (0x0001ef29) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe73e,	// (0x0001ef36) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe73e,	// (0x0001ef36) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x62f9,	// (0x00016af1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x62f9,	// (0x00016af1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6314,	// (0x00016b0c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6314,	// (0x00016b0c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe74b,	// (0x0001ef43) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe74b,	// (0x0001ef43) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe766,	// (0x0001ef5e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe766,	// (0x0001ef5e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xe781,	// (0x0001ef79) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe781,	// (0x0001ef79) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x000203b9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x000203b9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6621,	// (0x00016e19) cell_vkb_candidate_pane_cp1_ParamLimits

0x6621,	// (0x00016e19) cell_vkb_candidate_pane_cp1

0x5fe2,	// (0x000167da) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5fe2,	// (0x000167da) fep_vkb_candidate_drop_down_list_pane_g1

0x65c5,	// (0x00016dbd) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x65c5,	// (0x00016dbd) fep_vkb_candidate_drop_down_list_pane_g2

0x65d2,	// (0x00016dca) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x65d2,	// (0x00016dca) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x000203b2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x000203b2) fep_vkb_candidate_drop_down_list_pane_g

0x6641,	// (0x00016e39) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6641,	// (0x00016e39) fep_vkb_candidate_drop_down_list_scroll_pane

0x664e,	// (0x00016e46) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x664e,	// (0x00016e46) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x665b,	// (0x00016e53) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x665b,	// (0x00016e53) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6667,	// (0x00016e5f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6667,	// (0x00016e5f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x65df,	// (0x00016dd7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x65df,	// (0x00016dd7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6600,	// (0x00016df8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6600,	// (0x00016df8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6673,	// (0x00016e6b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6673,	// (0x00016e6b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6694,	// (0x00016e8c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6694,	// (0x00016e8c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x66b5,	// (0x00016ead) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x66b5,	// (0x00016ead) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x000203ca) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x000203ca) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x07f0,	// (0x00010fe8) title_pane_g1_ParamLimits

0x07fd,	// (0x00010ff5) title_pane_g2_ParamLimits

0xf566,	// (0x0001fd5e) title_pane_g_ParamLimits

0x1e86,	// (0x0001267e) aid_call2_pane

0x1e7e,	// (0x00012676) aid_call_pane

0x1e8e,	// (0x00012686) popup_clock_analogue_window_g1

0x1e8e,	// (0x00012686) popup_clock_analogue_window_g2

0xdc33,	// (0x0001e42b) popup_clock_analogue_window_g3

0xdc3c,	// (0x0001e434) popup_clock_analogue_window_g4

0x07dc,	// (0x00010fd4) popup_clock_analogue_window_g5

0x0004,

0xf710,	// (0x0001ff08) popup_clock_analogue_window_g

0xdc44,	// (0x0001e43c) popup_clock_analogue_window_t1

0xdc52,	// (0x0001e44a) clock_digital_number_pane_ParamLimits

0xdc52,	// (0x0001e44a) clock_digital_number_pane

0xdc5e,	// (0x0001e456) clock_digital_number_pane_cp02_ParamLimits

0xdc5e,	// (0x0001e456) clock_digital_number_pane_cp02

0xdc6a,	// (0x0001e462) clock_digital_number_pane_cp03_ParamLimits

0xdc6a,	// (0x0001e462) clock_digital_number_pane_cp03

0xdc76,	// (0x0001e46e) clock_digital_number_pane_cp04_ParamLimits

0xdc76,	// (0x0001e46e) clock_digital_number_pane_cp04

0xdc82,	// (0x0001e47a) clock_digital_separator_pane_ParamLimits

0xdc82,	// (0x0001e47a) clock_digital_separator_pane

0xdc8e,	// (0x0001e486) popup_clock_digital_window_t1_ParamLimits

0xdc8e,	// (0x0001e486) popup_clock_digital_window_t1

0x07dc,	// (0x00010fd4) clock_digital_number_pane_g1

0x07dc,	// (0x00010fd4) clock_digital_number_pane_g2

0x0001,

0xf71b,	// (0x0001ff13) clock_digital_number_pane_g

0x07dc,	// (0x00010fd4) clock_digital_separator_pane_g1

0x07dc,	// (0x00010fd4) clock_digital_separator_pane_g2

0x0001,

0xf71b,	// (0x0001ff13) clock_digital_separator_pane_g

0x2e62,	// (0x0001365a) aid_fill_nsta_ParamLimits

0x2fa4,	// (0x0001379c) indicator_nsta_pane_ParamLimits

0x3117,	// (0x0001390f) popup_clock_analogue_window

0x3117,	// (0x0001390f) popup_clock_digital_window

0x08c6,	// (0x000110be) grid_indicator_nsta_pane_ParamLimits

0x56fb,	// (0x00015ef3) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0002029c) clock_nsta_pane_t

0xdbf7,	// (0x0001e3ef) aid_size_max_handle

0xdc01,	// (0x0001e3f9) aid_size_min_handle

0x251f,	// (0x00012d17) editor_scroll_pane

0x66d0,	// (0x00016ec8) ex_editor_pane

0x19a6,	// (0x0001219e) scroll_pane_cp13

0x10eb,	// (0x000118e3) scroll_pane_cp14

0x1ebd,	// (0x000126b5) scroll_pane_cp36

0x1ee9,	// (0x000126e1) list_single_graphic_hl_pane_cp2_ParamLimits

0x1ee9,	// (0x000126e1) list_single_graphic_hl_pane_cp2

0x4acb,	// (0x000152c3) list_single_graphic_hl_pane_ParamLimits

0x4acb,	// (0x000152c3) list_single_graphic_hl_pane

0xd433,	// (0x0001dc2b) aid_size_min_hl_cp1

0x66e1,	// (0x00016ed9) list_highlight_pane_cp34_ParamLimits

0x66e1,	// (0x00016ed9) list_highlight_pane_cp34

0x66f2,	// (0x00016eea) list_single_graphic_hl_pane_g1_ParamLimits

0x66f2,	// (0x00016eea) list_single_graphic_hl_pane_g1

0xd43c,	// (0x0001dc34) list_single_graphic_hl_pane_g2_ParamLimits

0xd43c,	// (0x0001dc34) list_single_graphic_hl_pane_g2

0xd43c,	// (0x0001dc34) list_single_graphic_hl_pane_g3_ParamLimits

0xd43c,	// (0x0001dc34) list_single_graphic_hl_pane_g3

0xce3c,	// (0x0001d634) list_single_graphic_hl_pane_g4_ParamLimits

0xce3c,	// (0x0001d634) list_single_graphic_hl_pane_g4

0xd448,	// (0x0001dc40) list_single_graphic_hl_pane_g5_ParamLimits

0xd448,	// (0x0001dc40) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x000203db) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x000203db) list_single_graphic_hl_pane_g

0xd45c,	// (0x0001dc54) list_single_graphic_hl_pane_t1_ParamLimits

0xd45c,	// (0x0001dc54) list_single_graphic_hl_pane_t1

0x6735,	// (0x00016f2d) aid_size_min_hl_cp2

0x673e,	// (0x00016f36) list_highlight_pane_cp34_cp2_ParamLimits

0x673e,	// (0x00016f36) list_highlight_pane_cp34_cp2

0x66f2,	// (0x00016eea) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x66f2,	// (0x00016eea) list_single_graphic_hl_pane_g1_cp2

0x674b,	// (0x00016f43) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x674b,	// (0x00016f43) list_single_graphic_hl_pane_g2_cp2

0x6757,	// (0x00016f4f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6757,	// (0x00016f4f) list_single_graphic_hl_pane_g3_cp2

0x32e5,	// (0x00013add) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x32e5,	// (0x00013add) list_single_graphic_hl_pane_g4_cp2

0x670b,	// (0x00016f03) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x670b,	// (0x00016f03) list_single_graphic_hl_pane_g5_cp2

0xdf3e,	// (0x0001e736) control_pane_g4_ParamLimits

0xdf3e,	// (0x0001e736) control_pane_g4

0x289d,	// (0x00013095) bg_popup_sub_pane_cp10_ParamLimits

0x5d6e,	// (0x00016566) list_choice_list_pane_ParamLimits

0x5d7d,	// (0x00016575) scroll_pane_cp23

0x0b69,	// (0x00011361) bg_popup_preview_window_pane_cp02_ParamLimits

0x6365,	// (0x00016b5d) list_preview_fixed_pane_ParamLimits

0x637b,	// (0x00016b73) list_preview_fixed_pane_cp_ParamLimits

0x637b,	// (0x00016b73) list_preview_fixed_pane_cp

0x6387,	// (0x00016b7f) popup_preview_fixed_window_g1_ParamLimits

0x6387,	// (0x00016b7f) popup_preview_fixed_window_g1

0x6393,	// (0x00016b8b) popup_preview_fixed_window_g2_ParamLimits

0x6393,	// (0x00016b8b) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x0002036a) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x0002036a) popup_preview_fixed_window_g

0xdb6b,	// (0x0001e363) aid_navi_side_left_pane_ParamLimits

0xdb80,	// (0x0001e378) aid_navi_side_right_pane_ParamLimits

0xdb98,	// (0x0001e390) navi_icon_pane_stacon_ParamLimits

0xdbac,	// (0x0001e3a4) navi_navi_pane_stacon_ParamLimits

0xdb98,	// (0x0001e390) navi_text_pane_stacon_ParamLimits

0x07d2,	// (0x00010fca) main_text_info_pane

0x677b,	// (0x00016f73) listscroll_text_info_pane

0x6783,	// (0x00016f7b) list_text_info_pane_ParamLimits

0x6783,	// (0x00016f7b) list_text_info_pane

0x6792,	// (0x00016f8a) scroll_pane_cp24_ParamLimits

0x6792,	// (0x00016f8a) scroll_pane_cp24

0x67b0,	// (0x00016fa8) list_text_info_pane_t1_ParamLimits

0x67b0,	// (0x00016fa8) list_text_info_pane_t1

0x28eb,	// (0x000130e3) popup_fast_swap2_window_ParamLimits

0x28eb,	// (0x000130e3) popup_fast_swap2_window

0x67e1,	// (0x00016fd9) aid_size_cell_fast2

0x07d2,	// (0x00010fca) bg_popup_window_pane_cp17

0x3893,	// (0x0001408b) heading_pane_cp2

0x0db5,	// (0x000115ad) listscroll_fast2_pane

0x67eb,	// (0x00016fe3) grid_fast2_pane

0x67f5,	// (0x00016fed) listscroll_fast2_pane_g1

0x67fd,	// (0x00016ff5) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x000203e6) listscroll_fast2_pane_g

0x19a6,	// (0x0001219e) scroll_pane_cp26

0x6807,	// (0x00016fff) cell_fast2_pane_ParamLimits

0x6807,	// (0x00016fff) cell_fast2_pane

0x681c,	// (0x00017014) cell_fast2_pane_g1

0x6825,	// (0x0001701d) cell_fast2_pane_g2

0x682e,	// (0x00017026) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x000203eb) cell_fast2_pane_g

0x0ea8,	// (0x000116a0) grid_highlight_pane_cp9

0x0ebd,	// (0x000116b5) main_eswt_pane_ParamLimits

0x0ebd,	// (0x000116b5) main_eswt_pane

0x67a7,	// (0x00016f9f) list_single_text_info_pane

0x6836,	// (0x0001702e) eswt_ctrl_button_pane

0x6836,	// (0x0001702e) eswt_ctrl_canvas_pane

0x683e,	// (0x00017036) eswt_ctrl_combo_pane

0x6836,	// (0x0001702e) eswt_ctrl_default_pane

0x6836,	// (0x0001702e) eswt_ctrl_label_pane

0x6846,	// (0x0001703e) eswt_ctrl_wait_pane

0x684e,	// (0x00017046) eswt_shell_pane

0x07d2,	// (0x00010fca) listscroll_eswt_app_pane

0x686e,	// (0x00017066) popup_eswt_tasktip_window_ParamLimits

0x686e,	// (0x00017066) popup_eswt_tasktip_window

0x3493,	// (0x00013c8b) bg_popup_window_pane_cp18

0x687f,	// (0x00017077) eswt_control_pane_g1_ParamLimits

0x687f,	// (0x00017077) eswt_control_pane_g1

0x688c,	// (0x00017084) eswt_control_pane_g2_ParamLimits

0x688c,	// (0x00017084) eswt_control_pane_g2

0x6899,	// (0x00017091) eswt_control_pane_g3_ParamLimits

0x6899,	// (0x00017091) eswt_control_pane_g3

0x68a6,	// (0x0001709e) eswt_control_pane_g4_ParamLimits

0x68a6,	// (0x0001709e) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x000203f2) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x000203f2) eswt_control_pane_g

0x16ad,	// (0x00011ea5) bg_button_pane_ParamLimits

0x16ad,	// (0x00011ea5) bg_button_pane

0x0ebd,	// (0x000116b5) common_borders_pane_copy2_ParamLimits

0x0ebd,	// (0x000116b5) common_borders_pane_copy2

0x68b3,	// (0x000170ab) control_button_pane_g1_ParamLimits

0x68b3,	// (0x000170ab) control_button_pane_g1

0x68bf,	// (0x000170b7) control_button_pane_g2_ParamLimits

0x68bf,	// (0x000170b7) control_button_pane_g2

0x68cb,	// (0x000170c3) control_button_pane_g3_ParamLimits

0x68cb,	// (0x000170c3) control_button_pane_g3

0x0002,

0xfc03,	// (0x000203fb) control_button_pane_g_ParamLimits

0xfc03,	// (0x000203fb) control_button_pane_g

0x68df,	// (0x000170d7) control_button_pane_t1

0x68ed,	// (0x000170e5) control_button_pane_t2

0x0001,

0xfc0a,	// (0x00020402) control_button_pane_t

0x336f,	// (0x00013b67) bg_button_pane_g1

0x337f,	// (0x00013b77) bg_button_pane_g2

0x3377,	// (0x00013b6f) bg_button_pane_g3

0x338f,	// (0x00013b87) bg_button_pane_g4

0x3387,	// (0x00013b7f) bg_button_pane_g5

0x3397,	// (0x00013b8f) bg_button_pane_g6

0x339f,	// (0x00013b97) bg_button_pane_g7

0x33af,	// (0x00013ba7) bg_button_pane_g8

0x33a7,	// (0x00013b9f) bg_button_pane_g9

0x0008,

0xf877,	// (0x0002006f) bg_button_pane_g

0x5d29,	// (0x00016521) common_borders_pane_ParamLimits

0x5d29,	// (0x00016521) common_borders_pane

0x687f,	// (0x00017077) eswt_control_pane_g1_copy1_ParamLimits

0x687f,	// (0x00017077) eswt_control_pane_g1_copy1

0x688c,	// (0x00017084) eswt_control_pane_g2_copy1_ParamLimits

0x688c,	// (0x00017084) eswt_control_pane_g2_copy1

0x6899,	// (0x00017091) eswt_control_pane_g3_copy1_ParamLimits

0x6899,	// (0x00017091) eswt_control_pane_g3_copy1

0x68a6,	// (0x0001709e) eswt_control_pane_g4_copy1_ParamLimits

0x68a6,	// (0x0001709e) eswt_control_pane_g4_copy1

0x5d64,	// (0x0001655c) bg_eswt_ctrl_canvas_pane_g1

0x5d29,	// (0x00016521) common_borders_pane_cp2_ParamLimits

0x5d29,	// (0x00016521) common_borders_pane_cp2

0x5d29,	// (0x00016521) common_borders_pane_cp3_ParamLimits

0x5d29,	// (0x00016521) common_borders_pane_cp3

0x68fb,	// (0x000170f3) separator_horizontal_pane

0x6903,	// (0x000170fb) separator_vertical_pane

0x687f,	// (0x00017077) eswt_control_pane_g1_copy2_ParamLimits

0x687f,	// (0x00017077) eswt_control_pane_g1_copy2

0x688c,	// (0x00017084) eswt_control_pane_g2_copy2_ParamLimits

0x688c,	// (0x00017084) eswt_control_pane_g2_copy2

0x6899,	// (0x00017091) eswt_control_pane_g3_copy2_ParamLimits

0x6899,	// (0x00017091) eswt_control_pane_g3_copy2

0x68a6,	// (0x0001709e) eswt_control_pane_g4_copy2_ParamLimits

0x68a6,	// (0x0001709e) eswt_control_pane_g4_copy2

0x07d2,	// (0x00010fca) common_borders_pane_cp4

0x690c,	// (0x00017104) separator_horizontal_pane_g1

0x6915,	// (0x0001710d) separator_horizontal_pane_g2

0x691e,	// (0x00017116) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x00020407) separator_horizontal_pane_g

0x687f,	// (0x00017077) eswt_control_pane_g1_copy3_ParamLimits

0x687f,	// (0x00017077) eswt_control_pane_g1_copy3

0x688c,	// (0x00017084) eswt_control_pane_g2_copy3_ParamLimits

0x688c,	// (0x00017084) eswt_control_pane_g2_copy3

0x6899,	// (0x00017091) eswt_control_pane_g3_copy3_ParamLimits

0x6899,	// (0x00017091) eswt_control_pane_g3_copy3

0x68a6,	// (0x0001709e) eswt_control_pane_g4_copy3_ParamLimits

0x68a6,	// (0x0001709e) eswt_control_pane_g4_copy3

0x07d2,	// (0x00010fca) common_borders_pane_cp5

0x6927,	// (0x0001711f) separator_vertical_pane_g1

0x6930,	// (0x00017128) separator_vertical_pane_g2

0x6939,	// (0x00017131) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x0002040e) separator_vertical_pane_g

0x687f,	// (0x00017077) eswt_control_pane_g1_copy4_ParamLimits

0x687f,	// (0x00017077) eswt_control_pane_g1_copy4

0x688c,	// (0x00017084) eswt_control_pane_g2_copy4_ParamLimits

0x688c,	// (0x00017084) eswt_control_pane_g2_copy4

0x6899,	// (0x00017091) eswt_control_pane_g3_copy4_ParamLimits

0x6899,	// (0x00017091) eswt_control_pane_g3_copy4

0x68a6,	// (0x0001709e) eswt_control_pane_g4_copy4_ParamLimits

0x68a6,	// (0x0001709e) eswt_control_pane_g4_copy4

0x6942,	// (0x0001713a) eswt_ctrl_combo_button_pane

0x694a,	// (0x00017142) eswt_ctrl_input_pane

0x6952,	// (0x0001714a) popup_choice_list_window_cp70

0x695a,	// (0x00017152) eswt_ctrl_input_pane_t1

0x07d2,	// (0x00010fca) input_focus_pane_cp70

0x5d29,	// (0x00016521) bg_button_pane_cp70_ParamLimits

0x5d29,	// (0x00016521) bg_button_pane_cp70

0x6968,	// (0x00017160) eswt_ctrl_combo_button_pane_g1

0x6970,	// (0x00017168) wait_bar_pane_cp70

0x3493,	// (0x00013c8b) bg_popup_window_pane_cp70_ParamLimits

0x3493,	// (0x00013c8b) bg_popup_window_pane_cp70

0x6978,	// (0x00017170) popup_eswt_tasktip_window_t1

0x698e,	// (0x00017186) wait_bar_pane_cp71_ParamLimits

0x698e,	// (0x00017186) wait_bar_pane_cp71

0x699a,	// (0x00017192) grid_eswt_app_pane

0x1cc0,	// (0x000124b8) scroll_pane_cp70

0x69a3,	// (0x0001719b) cell_eswt_app_pane_ParamLimits

0x69a3,	// (0x0001719b) cell_eswt_app_pane

0x69d3,	// (0x000171cb) cell_eswt_app_pane_g1_ParamLimits

0x69d3,	// (0x000171cb) cell_eswt_app_pane_g1

0x6a02,	// (0x000171fa) cell_eswt_app_pane_g2_ParamLimits

0x6a02,	// (0x000171fa) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x00020415) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x00020415) cell_eswt_app_pane_g

0x6a2b,	// (0x00017223) cell_eswt_app_pane_t1_ParamLimits

0x6a2b,	// (0x00017223) cell_eswt_app_pane_t1

0x6a5d,	// (0x00017255) grid_highlight_pane_cp70_ParamLimits

0x6a5d,	// (0x00017255) grid_highlight_pane_cp70

0x23f4,	// (0x00012bec) set_content_pane_g1

0x27bf,	// (0x00012fb7) status_small_volume_pane

0xe79c,	// (0x0001ef94) status_small_volume_pane_g1

0xe7a4,	// (0x0001ef9c) volume_small2_pane

0xe7ad,	// (0x0001efa5) volume_small2_pane_g1

0xe7b6,	// (0x0001efae) volume_small2_pane_g2

0xe7bf,	// (0x0001efb7) volume_small2_pane_g3

0xe7c8,	// (0x0001efc0) volume_small2_pane_g4

0xe7d1,	// (0x0001efc9) volume_small2_pane_g5

0xe7da,	// (0x0001efd2) volume_small2_pane_g6

0xe7e3,	// (0x0001efdb) volume_small2_pane_g7

0xe7ec,	// (0x0001efe4) volume_small2_pane_g8

0xe7f5,	// (0x0001efed) volume_small2_pane_g9

0xe7fe,	// (0x0001eff6) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x0002041a) volume_small2_pane_g

0x612a,	// (0x00016922) fep_vkb_top_text_pane_g1_ParamLimits

0x6145,	// (0x0001693d) fep_vkb_top_text_pane_t1_ParamLimits

0x639f,	// (0x00016b97) popup_preview_fixed_window_g3_ParamLimits

0x639f,	// (0x00016b97) popup_preview_fixed_window_g3

0x2d98,	// (0x00013590) popup_toolbar_trans_pane

0x4835,	// (0x0001502d) aid_height_set_list_ParamLimits

0x4846,	// (0x0001503e) aid_size_parent_ParamLimits

0x289d,	// (0x00013095) list_highlight_pane_cp2_ParamLimits

0x23f4,	// (0x00012bec) set_content_pane_g1_ParamLimits

0xcfbe,	// (0x0001d7b6) list_single_image_pane_ParamLimits

0xcfbe,	// (0x0001d7b6) list_single_image_pane

0x6a69,	// (0x00017261) aid_size_cell_image_ParamLimits

0x6a69,	// (0x00017261) aid_size_cell_image

0x6a76,	// (0x0001726e) grid_single_image_pane_ParamLimits

0x6a76,	// (0x0001726e) grid_single_image_pane

0x1310,	// (0x00011b08) list_single_image_pane_g1_ParamLimits

0x1310,	// (0x00011b08) list_single_image_pane_g1

0x6a84,	// (0x0001727c) list_single_image_pane_g2_ParamLimits

0x6a84,	// (0x0001727c) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x0002042f) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x0002042f) list_single_image_pane_g

0x1247,	// (0x00011a3f) list_single_image_pane_t1_ParamLimits

0x1247,	// (0x00011a3f) list_single_image_pane_t1

0x6a98,	// (0x00017290) cell_image_list_pane_ParamLimits

0x6a98,	// (0x00017290) cell_image_list_pane

0x6aab,	// (0x000172a3) cell_image_list_pane_g1

0x6ab4,	// (0x000172ac) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x00020434) cell_image_list_pane_g

0x6abd,	// (0x000172b5) aid_size_cell_tb_trans_pane

0x16ad,	// (0x00011ea5) bg_tb_trans_pane

0x6acf,	// (0x000172c7) grid_tb_trans_pane

0x336f,	// (0x00013b67) bg_tb_trans_pane_g1

0x337f,	// (0x00013b77) bg_tb_trans_pane_g2

0x3377,	// (0x00013b6f) bg_tb_trans_pane_g3

0x338f,	// (0x00013b87) bg_tb_trans_pane_g4

0x3387,	// (0x00013b7f) bg_tb_trans_pane_g5

0x33af,	// (0x00013ba7) bg_tb_trans_pane_g6

0x33a7,	// (0x00013b9f) bg_tb_trans_pane_g7

0x3397,	// (0x00013b8f) bg_tb_trans_pane_g8

0x339f,	// (0x00013b97) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x00020439) bg_tb_trans_pane_g

0x6ae3,	// (0x000172db) cell_toolbar_trans_pane_ParamLimits

0x6ae3,	// (0x000172db) cell_toolbar_trans_pane

0x5d64,	// (0x0001655c) cell_toolbar_trans_pane_g1

0x58df,	// (0x000160d7) list_form2_midp_pane_t1

0x58ed,	// (0x000160e5) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x000202e2) list_form2_midp_pane_t

0x58fb,	// (0x000160f3) scroll_pane_cp51_ParamLimits

0x5b06,	// (0x000162fe) form2_midp_wait_pane_g1

0x5b0f,	// (0x00016307) form2_midp_wait_pane_g2

0x5b18,	// (0x00016310) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x000202f7) form2_midp_wait_pane_g

0x08c6,	// (0x000110be) list_highlight_pane_cp21_ParamLimits

0x5b6f,	// (0x00016367) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5b7e,	// (0x00016376) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xcf5f,	// (0x0001d757) list_single_2graphic_im_pane_ParamLimits

0xcf5f,	// (0x0001d757) list_single_2graphic_im_pane

0x6b09,	// (0x00017301) list_single_2graphic_im_pane_g1_ParamLimits

0x6b09,	// (0x00017301) list_single_2graphic_im_pane_g1

0x6b1a,	// (0x00017312) list_single_2graphic_im_pane_g2_ParamLimits

0x6b1a,	// (0x00017312) list_single_2graphic_im_pane_g2

0x6b26,	// (0x0001731e) list_single_2graphic_im_pane_g3_ParamLimits

0x6b26,	// (0x0001731e) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x0002044c) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x0002044c) list_single_2graphic_im_pane_g

0x6b46,	// (0x0001733e) list_single_2graphic_im_pane_t1_ParamLimits

0x6b46,	// (0x0001733e) list_single_2graphic_im_pane_t1

0x63ab,	// (0x00016ba3) list_single_graphic_2heading_pane_fp_ParamLimits

0x63ab,	// (0x00016ba3) list_single_graphic_2heading_pane_fp

0xd2a5,	// (0x0001da9d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd2a5,	// (0x0001da9d) list_single_graphic_2heading_pane_fp_g1

0x63c0,	// (0x00016bb8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x63c0,	// (0x00016bb8) list_single_graphic_2heading_pane_fp_g2

0xd26e,	// (0x0001da66) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd26e,	// (0x0001da66) list_single_graphic_2heading_pane_fp_g3

0xd27a,	// (0x0001da72) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd27a,	// (0x0001da72) list_single_graphic_2heading_pane_fp_g4

0x63cc,	// (0x00016bc4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x63cc,	// (0x00016bc4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002037a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002037a) list_single_graphic_2heading_pane_fp_g

0xd472,	// (0x0001dc6a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd472,	// (0x0001dc6a) list_single_graphic_2heading_pane_fp_t1

0xd2dd,	// (0x0001dad5) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd2dd,	// (0x0001dad5) list_single_graphic_2heading_pane_fp_t2

0xd488,	// (0x0001dc80) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd488,	// (0x0001dc80) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x00020455) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x00020455) list_single_graphic_2heading_pane_fp_t

0x5df0,	// (0x000165e8) fep_hwr_write_pane_g5_ParamLimits

0x5df0,	// (0x000165e8) fep_hwr_write_pane_g5

0x5dfc,	// (0x000165f4) fep_hwr_write_pane_g6_ParamLimits

0x5dfc,	// (0x000165f4) fep_hwr_write_pane_g6

0x684e,	// (0x00017046) eswt_shell_pane_ParamLimits

0x3493,	// (0x00013c8b) bg_popup_window_pane_cp18_ParamLimits

0x4766,	// (0x00014f5e) heading_pane_cp70

0x6978,	// (0x00017170) popup_eswt_tasktip_window_t1_ParamLimits

0x2eb7,	// (0x000136af) aid_touch_tab_arrow_left

0x2ec3,	// (0x000136bb) aid_touch_tab_arrow_right

0x080e,	// (0x00011006) title_pane_g3_ParamLimits

0x080e,	// (0x00011006) title_pane_g3

0x158c,	// (0x00011d84) set_value_pane_g1

0x2d98,	// (0x00013590) popup_toolbar_trans_pane_ParamLimits

0x6abd,	// (0x000172b5) aid_size_cell_tb_trans_pane_ParamLimits

0x16ad,	// (0x00011ea5) bg_tb_trans_pane_ParamLimits

0x6acf,	// (0x000172c7) grid_tb_trans_pane_ParamLimits

0x0b69,	// (0x00011361) cont_note_pane_ParamLimits

0x0b69,	// (0x00011361) cont_note_pane

0x0ebd,	// (0x000116b5) cont_snote2_single_text_pane_ParamLimits

0x0ebd,	// (0x000116b5) cont_snote2_single_text_pane

0x0ebd,	// (0x000116b5) cont_snote2_single_graphic_pane_ParamLimits

0x0ebd,	// (0x000116b5) cont_snote2_single_graphic_pane

0x3aae,	// (0x000142a6) cont_note_wait_pane_ParamLimits

0x3aae,	// (0x000142a6) cont_note_wait_pane

0x3aae,	// (0x000142a6) cont_note_image_pane_ParamLimits

0x3aae,	// (0x000142a6) cont_note_image_pane

0x6ba3,	// (0x0001739b) popup_note2_window_g1_ParamLimits

0x6ba3,	// (0x0001739b) popup_note2_window_g1

0x6bd4,	// (0x000173cc) popup_note2_window_t1_ParamLimits

0x6bd4,	// (0x000173cc) popup_note2_window_t1

0x6c19,	// (0x00017411) popup_note2_window_t2_ParamLimits

0x6c19,	// (0x00017411) popup_note2_window_t2

0x6c5e,	// (0x00017456) popup_note2_window_t3_ParamLimits

0x6c5e,	// (0x00017456) popup_note2_window_t3

0x6ca3,	// (0x0001749b) popup_note2_window_t4_ParamLimits

0x6ca3,	// (0x0001749b) popup_note2_window_t4

0x0bed,	// (0x000113e5) popup_note2_window_t5_ParamLimits

0x0bed,	// (0x000113e5) popup_note2_window_t5

0x0004,

0xfc69,	// (0x00020461) popup_note2_window_t_ParamLimits

0xfc69,	// (0x00020461) popup_note2_window_t

0x6cd2,	// (0x000174ca) popup_note2_image_window_g1_ParamLimits

0x6cd2,	// (0x000174ca) popup_note2_image_window_g1

0x6cde,	// (0x000174d6) popup_note2_image_window_g2_ParamLimits

0x6cde,	// (0x000174d6) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x0002046c) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x0002046c) popup_note2_image_window_g

0x6cf0,	// (0x000174e8) popup_note2_image_window_t1_ParamLimits

0x6cf0,	// (0x000174e8) popup_note2_image_window_t1

0x6d08,	// (0x00017500) popup_note2_image_window_t2_ParamLimits

0x6d08,	// (0x00017500) popup_note2_image_window_t2

0x6d20,	// (0x00017518) popup_note2_image_window_t3_ParamLimits

0x6d20,	// (0x00017518) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x00020471) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x00020471) popup_note2_image_window_t

0x3abc,	// (0x000142b4) popup_note2_wait_window_g1_ParamLimits

0x3abc,	// (0x000142b4) popup_note2_wait_window_g1

0x6d3c,	// (0x00017534) popup_note2_wait_window_g2_ParamLimits

0x6d3c,	// (0x00017534) popup_note2_wait_window_g2

0x3ad4,	// (0x000142cc) popup_note2_wait_window_g3_ParamLimits

0x3ad4,	// (0x000142cc) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x00020478) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x00020478) popup_note2_wait_window_g

0x6d48,	// (0x00017540) popup_note2_wait_window_t1_ParamLimits

0x6d48,	// (0x00017540) popup_note2_wait_window_t1

0x6d66,	// (0x0001755e) popup_note2_wait_window_t2_ParamLimits

0x6d66,	// (0x0001755e) popup_note2_wait_window_t2

0x6d84,	// (0x0001757c) popup_note2_wait_window_t3_ParamLimits

0x6d84,	// (0x0001757c) popup_note2_wait_window_t3

0x6d96,	// (0x0001758e) popup_note2_wait_window_t4_ParamLimits

0x6d96,	// (0x0001758e) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x0002047f) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x0002047f) popup_note2_wait_window_t

0x6da8,	// (0x000175a0) wait_bar2_pane_ParamLimits

0x6da8,	// (0x000175a0) wait_bar2_pane

0x6dc0,	// (0x000175b8) popup_snote2_single_text_window_g1_ParamLimits

0x6dc0,	// (0x000175b8) popup_snote2_single_text_window_g1

0x6de8,	// (0x000175e0) popup_snote2_single_text_window_t1_ParamLimits

0x6de8,	// (0x000175e0) popup_snote2_single_text_window_t1

0x6e34,	// (0x0001762c) popup_snote2_single_text_window_t2_ParamLimits

0x6e34,	// (0x0001762c) popup_snote2_single_text_window_t2

0x6e80,	// (0x00017678) popup_snote2_single_text_window_t3_ParamLimits

0x6e80,	// (0x00017678) popup_snote2_single_text_window_t3

0x6ec1,	// (0x000176b9) popup_snote2_single_text_window_t4_ParamLimits

0x6ec1,	// (0x000176b9) popup_snote2_single_text_window_t4

0x6ef7,	// (0x000176ef) popup_snote2_single_text_window_t5_ParamLimits

0x6ef7,	// (0x000176ef) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x00020488) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x00020488) popup_snote2_single_text_window_t

0x6f22,	// (0x0001771a) popup_snote2_single_graphic_window_g1_ParamLimits

0x6f22,	// (0x0001771a) popup_snote2_single_graphic_window_g1

0x6f4a,	// (0x00017742) popup_snote2_single_graphic_window_g2_ParamLimits

0x6f4a,	// (0x00017742) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x00020493) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x00020493) popup_snote2_single_graphic_window_g

0x6f72,	// (0x0001776a) popup_snote2_single_graphic_window_t1_ParamLimits

0x6f72,	// (0x0001776a) popup_snote2_single_graphic_window_t1

0x6fbe,	// (0x000177b6) popup_snote2_single_graphic_window_t2_ParamLimits

0x6fbe,	// (0x000177b6) popup_snote2_single_graphic_window_t2

0x6e80,	// (0x00017678) popup_snote2_single_graphic_window_t3_ParamLimits

0x6e80,	// (0x00017678) popup_snote2_single_graphic_window_t3

0x6ec1,	// (0x000176b9) popup_snote2_single_graphic_window_t4_ParamLimits

0x6ec1,	// (0x000176b9) popup_snote2_single_graphic_window_t4

0x6ef7,	// (0x000176ef) popup_snote2_single_graphic_window_t5_ParamLimits

0x6ef7,	// (0x000176ef) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x00020498) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x00020498) popup_snote2_single_graphic_window_t

0x57be,	// (0x00015fb6) clock_nsta_pane_cp2_t1

0x57be,	// (0x00015fb6) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x000202b8) clock_nsta_pane_cp2_t

0xcb96,	// (0x0001d38e) form_field_data_wide_pane_g1_ParamLimits

0x16d3,	// (0x00011ecb) form_field_data_wide_pane_g2_ParamLimits

0x16d3,	// (0x00011ecb) form_field_data_wide_pane_g2

0x16df,	// (0x00011ed7) form_field_data_wide_pane_g3_ParamLimits

0x16df,	// (0x00011ed7) form_field_data_wide_pane_g3

0x0002,

0xf693,	// (0x0001fe8b) form_field_data_wide_pane_g_ParamLimits

0xf693,	// (0x0001fe8b) form_field_data_wide_pane_g

0x5697,	// (0x00015e8f) grid_touch_3_pane_ParamLimits

0x5697,	// (0x00015e8f) grid_touch_3_pane

0x700a,	// (0x00017802) cell_touch_3_pane_ParamLimits

0x700a,	// (0x00017802) cell_touch_3_pane

0x5d64,	// (0x0001655c) cell_touch_3_pane_g1

0x5d64,	// (0x0001655c) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0002033d) cell_touch_3_pane_g

0x0c1f,	// (0x00011417) cont_query_data_pane

0x0c27,	// (0x0001141f) cont_query_data_pane_cp1

0x7038,	// (0x00017830) button_value_adjust_pane_cp7

0x7040,	// (0x00017838) query_popup_pane_cp3

0x1f78,	// (0x00012770) bg_popup_sub_pane_cp22_ParamLimits

0xdcad,	// (0x0001e4a5) navi_navi_volume_pane_cp2

0xdcc8,	// (0x0001e4c0) popup_side_volume_key_window_g2

0xdcd7,	// (0x0001e4cf) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0001ff21) popup_side_volume_key_window_g

0xdcf4,	// (0x0001e4ec) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0001ff28) popup_side_volume_key_window_t

0x22be,	// (0x00012ab6) popup_side_volume_key_window_ParamLimits

0xc7d1,	// (0x0001cfc9) list_double_graphic_pane_g4_ParamLimits

0xc7d1,	// (0x0001cfc9) list_double_graphic_pane_g4

0xcf9e,	// (0x0001d796) list_single_2heading_msg_pane_ParamLimits

0xcf9e,	// (0x0001d796) list_single_2heading_msg_pane

0xd4a8,	// (0x0001dca0) list_single_2heading_msg_pane_g1_ParamLimits

0xd4a8,	// (0x0001dca0) list_single_2heading_msg_pane_g1

0xc600,	// (0x0001cdf8) list_single_2heading_msg_pane_g2_ParamLimits

0xc600,	// (0x0001cdf8) list_single_2heading_msg_pane_g2

0xd4b4,	// (0x0001dcac) list_single_2heading_msg_pane_g3_ParamLimits

0xd4b4,	// (0x0001dcac) list_single_2heading_msg_pane_g3

0xd4c0,	// (0x0001dcb8) list_single_2heading_msg_pane_g4_ParamLimits

0xd4c0,	// (0x0001dcb8) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x000204a3) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x000204a3) list_single_2heading_msg_pane_g

0xd4d8,	// (0x0001dcd0) list_single_2heading_msg_pane_t1_ParamLimits

0xd4d8,	// (0x0001dcd0) list_single_2heading_msg_pane_t1

0xd500,	// (0x0001dcf8) list_single_2heading_msg_pane_t2_ParamLimits

0xd500,	// (0x0001dcf8) list_single_2heading_msg_pane_t2

0xd534,	// (0x0001dd2c) list_single_2heading_msg_pane_t3_ParamLimits

0xd534,	// (0x0001dd2c) list_single_2heading_msg_pane_t3

0xd56d,	// (0x0001dd65) list_single_2heading_msg_pane_t4_ParamLimits

0xd56d,	// (0x0001dd65) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x000204ac) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x000204ac) list_single_2heading_msg_pane_t

0x081a,	// (0x00011012) title_pane_g4_ParamLimits

0x081a,	// (0x00011012) title_pane_g4

0xdabb,	// (0x0001e2b3) title_pane_stacon_g3_ParamLimits

0xdabb,	// (0x0001e2b3) title_pane_stacon_g3

0x6b3a,	// (0x00017332) list_single_2graphic_im_pane_g4_ParamLimits

0x6b3a,	// (0x00017332) list_single_2graphic_im_pane_g4

0x450d,	// (0x00014d05) popup_side_volume_key_window_cp

0x4e13,	// (0x0001560b) main_idle_act2_pane_t1

0xe06a,	// (0x0001e862) toolbar_button_pane_g10

0x10b5,	// (0x000118ad) popup_toolbar_window_cp1

0x57af,	// (0x00015fa7) clock_nsta_pane_cp_t1

0x57af,	// (0x00015fa7) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x000202b3) clock_nsta_pane_cp_t

0xdcad,	// (0x0001e4a5) navi_navi_volume_pane_cp2_ParamLimits

0xdcbc,	// (0x0001e4b4) popup_side_volume_key_window_g1_ParamLimits

0xdcc8,	// (0x0001e4c0) popup_side_volume_key_window_g2_ParamLimits

0xdcd7,	// (0x0001e4cf) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0001ff21) popup_side_volume_key_window_g_ParamLimits

0xe4ac,	// (0x0001eca4) fep_hwr_aid_pane

0x9816,	// (0x0001a00e) bg_fep_hwr_top_pane_g4_ParamLimits

0x5dd2,	// (0x000165ca) fep_hwr_top_pane_g1_ParamLimits

0x5dc0,	// (0x000165b8) fep_hwr_top_pane_g2_ParamLimits

0xe565,	// (0x0001ed5d) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x00020308) fep_hwr_top_pane_g_ParamLimits

0xe57a,	// (0x0001ed72) fep_hwr_top_text_pane_ParamLimits

0x42d9,	// (0x00014ad1) aid_touch_tab_arrow_arrow_2

0x42d0,	// (0x00014ac8) aid_touch_tab_arrow_left_2

0xe4c0,	// (0x0001ecb8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xe4f7,	// (0x0001ecef) fep_hwr_prediction_pane

0x5f32,	// (0x0001672a) fep_vkb_prediction_pane

0x6036,	// (0x0001682e) fep_vkb_side_pane_g3_ParamLimits

0x6036,	// (0x0001682e) fep_vkb_side_pane_g3

0x5fe2,	// (0x000167da) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x65c5,	// (0x00016dbd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x65d2,	// (0x00016dca) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x000203b2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7154,	// (0x0001794c) fep_hwr_prediction_pane_g1

0xe807,	// (0x0001efff) fep_hwr_prediction_pane_g2

0xe80f,	// (0x0001f007) fep_hwr_prediction_pane_g3

0xe817,	// (0x0001f00f) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x000204b5) fep_hwr_prediction_pane_g

0x7154,	// (0x0001794c) fep_vkb_prediction_pane_g1

0x715e,	// (0x00017956) fep_vkb_prediction_pane_g2

0x7166,	// (0x0001795e) fep_vkb_prediction_pane_g3

0x716e,	// (0x00017966) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x000204be) fep_vkb_prediction_pane_g

0xe33a,	// (0x0001eb32) slider_set_pane_g3

0xe34e,	// (0x0001eb46) slider_set_pane_g4

0xe366,	// (0x0001eb5e) slider_set_pane_g5

0xe33a,	// (0x0001eb32) slider_set_pane_g6

0xe37c,	// (0x0001eb74) slider_set_pane_g7

0x49ab,	// (0x000151a3) slider_form_pane_g3

0x49b4,	// (0x000151ac) slider_form_pane_g4

0x49bc,	// (0x000151b4) slider_form_pane_g5

0x49ab,	// (0x000151a3) slider_form_pane_g6

0x49c4,	// (0x000151bc) slider_form_pane_g7

0x50f0,	// (0x000158e8) slider_set_pane_vc_g3

0x50f9,	// (0x000158f1) slider_set_pane_vc_g4

0x5102,	// (0x000158fa) slider_set_pane_vc_g5

0x50f0,	// (0x000158e8) slider_set_pane_vc_g6

0x510b,	// (0x00015903) slider_set_pane_vc_g7

0x50f0,	// (0x000158e8) slider_form_pane_vc_g1

0x50f9,	// (0x000158f1) slider_form_pane_vc_g2

0x5102,	// (0x000158fa) slider_form_pane_vc_g3

0x50f0,	// (0x000158e8) slider_form_pane_vc_g4

0x54b3,	// (0x00015cab) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0002028c) slider_form_pane_vc_g

0x07d2,	// (0x00010fca) main_idle_act3_pane

0x7176,	// (0x0001796e) ai3_links_pane

0x717f,	// (0x00017977) popup_ai3_data_window_ParamLimits

0x717f,	// (0x00017977) popup_ai3_data_window

0x07d2,	// (0x00010fca) grid_ai3_links_pane

0x7199,	// (0x00017991) cell_ai3_links_pane_ParamLimits

0x7199,	// (0x00017991) cell_ai3_links_pane

0x71b1,	// (0x000179a9) bg_popup_sub_pane_cp11

0x71be,	// (0x000179b6) cell_ai3_links_pane_g1

0x07d2,	// (0x00010fca) bg_popup_sub_pane_cp12

0x71e3,	// (0x000179db) heading_ai3_data_pane

0x71eb,	// (0x000179e3) list_ai3_gene_pane

0x71f7,	// (0x000179ef) popup_ai3_data_window_g1

0x71ff,	// (0x000179f7) heading_ai3_data_pane_g1

0x7207,	// (0x000179ff) heading_ai3_data_pane_t1

0x7215,	// (0x00017a0d) list_double_ai3_gene_pane_ParamLimits

0x7215,	// (0x00017a0d) list_double_ai3_gene_pane

0x7222,	// (0x00017a1a) list_single_ai3_gene_pane_ParamLimits

0x7222,	// (0x00017a1a) list_single_ai3_gene_pane

0x5d29,	// (0x00016521) list_highlight_pane_cp7_ParamLimits

0x5d29,	// (0x00016521) list_highlight_pane_cp7

0x722f,	// (0x00017a27) list_single_a13_gene_pane_t1_ParamLimits

0x722f,	// (0x00017a27) list_single_a13_gene_pane_t1

0x7246,	// (0x00017a3e) list_single_ai3_gene_pane_g1

0x724f,	// (0x00017a47) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x000204c7) list_single_ai3_gene_pane_g

0x7257,	// (0x00017a4f) list_double_ai3_gene_pane_g1_ParamLimits

0x7257,	// (0x00017a4f) list_double_ai3_gene_pane_g1

0x7263,	// (0x00017a5b) list_double_ai3_gene_pane_t1_ParamLimits

0x7263,	// (0x00017a5b) list_double_ai3_gene_pane_t1

0x727f,	// (0x00017a77) list_double_ai3_gene_pane_t2_ParamLimits

0x727f,	// (0x00017a77) list_double_ai3_gene_pane_t2

0x7295,	// (0x00017a8d) list_double_ai3_gene_pane_t3_ParamLimits

0x7295,	// (0x00017a8d) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x000204cc) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x000204cc) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd49e,	// (0x0001dc96) aid_size_min_col_2

0x705b,	// (0x00017853) aid_size_min_msg_ParamLimits

0x705b,	// (0x00017853) aid_size_min_msg

0x6136,	// (0x0001692e) fep_vkb_top_text_pane_g2_ParamLimits

0x6136,	// (0x0001692e) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x00020338) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x00020338) fep_vkb_top_text_pane_g

0x07d2,	// (0x00010fca) main_hc_apps_shell_pane

0x72b2,	// (0x00017aaa) grid_hc_apps_pane_ParamLimits

0x72b2,	// (0x00017aaa) grid_hc_apps_pane

0x72c1,	// (0x00017ab9) list_hc_apps_pane

0x72c9,	// (0x00017ac1) scroll_pane_cp37_ParamLimits

0x72c9,	// (0x00017ac1) scroll_pane_cp37

0x72d5,	// (0x00017acd) cell_hc_apps_pane_ParamLimits

0x72d5,	// (0x00017acd) cell_hc_apps_pane

0x7383,	// (0x00017b7b) cell_hc_apps_pane_g1_ParamLimits

0x7383,	// (0x00017b7b) cell_hc_apps_pane_g1

0x73b4,	// (0x00017bac) cell_hc_apps_pane_g2_ParamLimits

0x73b4,	// (0x00017bac) cell_hc_apps_pane_g2

0x73d0,	// (0x00017bc8) cell_hc_apps_pane_g3_ParamLimits

0x73d0,	// (0x00017bc8) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x000204d3) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x000204d3) cell_hc_apps_pane_g

0x73f2,	// (0x00017bea) cell_hc_apps_pane_t1_ParamLimits

0x73f2,	// (0x00017bea) cell_hc_apps_pane_t1

0x0b69,	// (0x00011361) grid_highlight_pane_cp10_ParamLimits

0x0b69,	// (0x00011361) grid_highlight_pane_cp10

0x7432,	// (0x00017c2a) list_single_hc_apps_pane_ParamLimits

0x7432,	// (0x00017c2a) list_single_hc_apps_pane

0x748e,	// (0x00017c86) list_single_hc_apps_pane_g1

0xd592,	// (0x0001dd8a) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x000204da) list_single_hc_apps_pane_g

0xd5ab,	// (0x0001dda3) list_single_hc_apps_pane_g2_copy1

0xd5c7,	// (0x0001ddbf) list_single_hc_apps_pane_t1

0x08c6,	// (0x000110be) bg_set_opt_pane_cp_ParamLimits

0xd9e2,	// (0x0001e1da) setting_slider_pane_t1_ParamLimits

0xd9fb,	// (0x0001e1f3) setting_slider_pane_t2_ParamLimits

0xda15,	// (0x0001e20d) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0001fd6e) setting_slider_pane_t_ParamLimits

0xda2d,	// (0x0001e225) slider_set_pane_ParamLimits

0xdf52,	// (0x0001e74a) control_pane_g5_ParamLimits

0xdf52,	// (0x0001e74a) control_pane_g5

0x47fa,	// (0x00014ff2) slider_set_pane_g1_ParamLimits

0xe32e,	// (0x0001eb26) slider_set_pane_g2_ParamLimits

0xe33a,	// (0x0001eb32) slider_set_pane_g3_ParamLimits

0xe34e,	// (0x0001eb46) slider_set_pane_g4_ParamLimits

0xe366,	// (0x0001eb5e) slider_set_pane_g5_ParamLimits

0xe33a,	// (0x0001eb32) slider_set_pane_g6_ParamLimits

0xe37c,	// (0x0001eb74) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0002016d) slider_set_pane_g_ParamLimits

0x239f,	// (0x00012b97) navi_icon_text_pane_ParamLimits

0x2e78,	// (0x00013670) aid_fill_nsta_2_ParamLimits

0x2eb7,	// (0x000136af) aid_touch_tab_arrow_left_ParamLimits

0x2ec3,	// (0x000136bb) aid_touch_tab_arrow_right_ParamLimits

0x2f2f,	// (0x00013727) clock_nsta_pane_ParamLimits

0x42b2,	// (0x00014aaa) navi_icon_pane_g1_ParamLimits

0x42be,	// (0x00014ab6) navi_text_pane_t1_ParamLimits

0x58b9,	// (0x000160b1) navi_icon_text_pane_g1_ParamLimits

0x58c5,	// (0x000160bd) navi_icon_text_pane_t1_ParamLimits

0x748e,	// (0x00017c86) list_single_hc_apps_pane_g1_ParamLimits

0xd592,	// (0x0001dd8a) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x000204da) list_single_hc_apps_pane_g_ParamLimits

0xd5ab,	// (0x0001dda3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd5c7,	// (0x0001ddbf) list_single_hc_apps_pane_t1_ParamLimits

0xd8f6,	// (0x0001e0ee) popup_toolbar2_fixed_window_ParamLimits

0xd8f6,	// (0x0001e0ee) popup_toolbar2_fixed_window

0x2d8e,	// (0x00013586) popup_toolbar2_float_window

0x07d2,	// (0x00010fca) bg_popup_sub_pane_cp27

0x750a,	// (0x00017d02) grid_toolbar2_float_pane

0x07d2,	// (0x00010fca) bg_popup_sub_pane_cp26

0x750a,	// (0x00017d02) grid_toolbar2_fixed_pane

0x7512,	// (0x00017d0a) cell_toolbar2_fixed_pane_ParamLimits

0x7512,	// (0x00017d0a) cell_toolbar2_fixed_pane

0x7522,	// (0x00017d1a) cell_toolbar2_fixed_pane_g1

0x752b,	// (0x00017d23) toolbar2_fixed_button_pane

0x336f,	// (0x00013b67) toolbar2_fixed_button_pane_g1

0x337f,	// (0x00013b77) toolbar2_fixed_button_pane_g2

0x3377,	// (0x00013b6f) toolbar2_fixed_button_pane_g3

0x338f,	// (0x00013b87) toolbar2_fixed_button_pane_g4

0x3387,	// (0x00013b7f) toolbar2_fixed_button_pane_g5

0x3397,	// (0x00013b8f) toolbar2_fixed_button_pane_g6

0x339f,	// (0x00013b97) toolbar2_fixed_button_pane_g7

0x33af,	// (0x00013ba7) toolbar2_fixed_button_pane_g8

0x33a7,	// (0x00013b9f) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0002006f) toolbar2_fixed_button_pane_g

0x7533,	// (0x00017d2b) cell_toolbar2_float_pane_ParamLimits

0x7533,	// (0x00017d2b) cell_toolbar2_float_pane

0x7544,	// (0x00017d3c) cell_toolbar2_float_pane_g1

0x752b,	// (0x00017d23) toolbar2_fixed_button_pane_cp

0x5e92,	// (0x0001668a) fep_vkb_accented_list_pane_ParamLimits

0x5e92,	// (0x0001668a) fep_vkb_accented_list_pane

0xe6c8,	// (0x0001eec0) bg_popup_fep_shadow_pane_g9

0x251f,	// (0x00012d17) bg_popup_fep_shadow_pane_cp3

0x198d,	// (0x00012185) list_accented_list_pane

0x754d,	// (0x00017d45) list_single_accented_list_pane_ParamLimits

0x754d,	// (0x00017d45) list_single_accented_list_pane

0x251f,	// (0x00012d17) list_highlight_pane_cp10

0x755e,	// (0x00017d56) list_single_accented_list_pane_t1

0x2cde,	// (0x000134d6) popup_slider_window_ParamLimits

0x2cde,	// (0x000134d6) popup_slider_window

0x7048,	// (0x00017840) aid_indentation_list_msg

0x7618,	// (0x00017e10) bg_popup_window_pane_cp19

0x7682,	// (0x00017e7a) popup_slider_window_g1

0x769e,	// (0x00017e96) popup_slider_window_g2

0x76ba,	// (0x00017eb2) popup_slider_window_g3

0x0005,

0xfce7,	// (0x000204df) popup_slider_window_g

0x7716,	// (0x00017f0e) popup_slider_window_t1

0x778a,	// (0x00017f82) small_volume_slider_vertical_pane

0x5d64,	// (0x0001655c) small_volume_slider_vertical_pane_g1

0x5d64,	// (0x0001655c) small_volume_slider_vertical_pane_g2

0x77a6,	// (0x00017f9e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x000204f1) small_volume_slider_vertical_pane_g

0xd6b8,	// (0x0001deb0) area_side_right_pane_ParamLimits

0xd6b8,	// (0x0001deb0) area_side_right_pane

0xe81f,	// (0x0001f017) aid_size_side_button_ParamLimits

0xe81f,	// (0x0001f017) aid_size_side_button

0xe833,	// (0x0001f02b) grid_sctrl_middle_pane_ParamLimits

0xe833,	// (0x0001f02b) grid_sctrl_middle_pane

0xe853,	// (0x0001f04b) sctrl_sk_bottom_pane

0xe864,	// (0x0001f05c) sctrl_sk_top_pane

0xe876,	// (0x0001f06e) aid_touch_sctrl_top

0x0b69,	// (0x00011361) bg_sctrl_sk_pane_ParamLimits

0x0b69,	// (0x00011361) bg_sctrl_sk_pane

0xe883,	// (0x0001f07b) sctrl_sk_top_pane_g1

0xe890,	// (0x0001f088) sctrl_sk_top_pane_t1

0xe876,	// (0x0001f06e) aid_touch_sctrl_bottom

0x0b69,	// (0x00011361) bg_sctrl_sk_pane_cp_ParamLimits

0x0b69,	// (0x00011361) bg_sctrl_sk_pane_cp

0xe8ab,	// (0x0001f0a3) sctrl_sk_bottom_pane_g1

0xe890,	// (0x0001f088) sctrl_sk_bottom_pane_t1

0xe8b4,	// (0x0001f0ac) cell_sctrl_middle_pane_ParamLimits

0xe8b4,	// (0x0001f0ac) cell_sctrl_middle_pane

0xe8cf,	// (0x0001f0c7) aid_touch_sctrl_middle_ParamLimits

0xe8cf,	// (0x0001f0c7) aid_touch_sctrl_middle

0x16ad,	// (0x00011ea5) bg_sctrl_middle_pane_ParamLimits

0x16ad,	// (0x00011ea5) bg_sctrl_middle_pane

0x5fe2,	// (0x000167da) cell_sctrl_middle_pane_g1_ParamLimits

0x5fe2,	// (0x000167da) cell_sctrl_middle_pane_g1

0xe8e1,	// (0x0001f0d9) cell_sctrl_middle_pane_g2_ParamLimits

0xe8e1,	// (0x0001f0d9) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x000204fd) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x000204fd) cell_sctrl_middle_pane_g

0x336f,	// (0x00013b67) bg_sctrl_middle_pane_g1

0x337f,	// (0x00013b77) bg_sctrl_middle_pane_g2

0x3377,	// (0x00013b6f) bg_sctrl_middle_pane_g3

0x338f,	// (0x00013b87) bg_sctrl_middle_pane_g4

0x3387,	// (0x00013b7f) bg_sctrl_middle_pane_g5

0x3397,	// (0x00013b8f) bg_sctrl_middle_pane_g6

0x339f,	// (0x00013b97) bg_sctrl_middle_pane_g7

0x33af,	// (0x00013ba7) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x00020502) bg_sctrl_middle_pane_g

0x33a7,	// (0x00013b9f) bg_sctrl_middle_pane_g8_copy1

0x336f,	// (0x00013b67) bg_sctrl_sk_pane_g1

0x337f,	// (0x00013b77) bg_sctrl_sk_pane_g2

0x3377,	// (0x00013b6f) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0002006f) bg_sctrl_sk_pane_g

0x107b,	// (0x00011873) aid_size_touch_scroll_bar

0x338f,	// (0x00013b87) bg_sctrl_sk_pane_g4

0x3387,	// (0x00013b7f) bg_sctrl_sk_pane_g5

0x3397,	// (0x00013b8f) bg_sctrl_sk_pane_g6

0x339f,	// (0x00013b97) bg_sctrl_sk_pane_g7

0x33af,	// (0x00013ba7) bg_sctrl_sk_pane_g8

0x33a7,	// (0x00013b9f) bg_sctrl_sk_pane_g9

0x2949,	// (0x00013141) popup_fep_china_hwr2_fs_candidate_window

0x2953,	// (0x0001314b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x2953,	// (0x0001314b) popup_fep_china_hwr2_fs_control_window

0x5fe2,	// (0x000167da) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x000204f8) sctrl_sk_top_pane_g

0x77af,	// (0x00017fa7) aid_fep_china_hwr2_fs_cell_ParamLimits

0x77af,	// (0x00017fa7) aid_fep_china_hwr2_fs_cell

0x77c1,	// (0x00017fb9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x77c1,	// (0x00017fb9) bg_popup_fep_shadow_pane_cp4

0x77d8,	// (0x00017fd0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x77d8,	// (0x00017fd0) bg_popup_fep_shadow_pane_cp5

0x77ea,	// (0x00017fe2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x77ea,	// (0x00017fe2) popup_fep_china_hwr2_fs_control_bar_grid

0x77fa,	// (0x00017ff2) popup_fep_china_hwr2_fs_control_funtion_grid

0x7802,	// (0x00017ffa) aid_fep_china_hwr2_fs_candi_cell

0x07d2,	// (0x00010fca) bg_popup_fep_shadow_pane_cp6

0x780c,	// (0x00018004) popup_fep_china_hwr2_fs_candidate_grid

0x7816,	// (0x0001800e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x7816,	// (0x0001800e) cell_fep_china_hwr2_fs_funtion_grid

0x5d64,	// (0x0001655c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x782e,	// (0x00018026) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x782e,	// (0x00018026) cell_fep_china_hwr2_fs_funtion_grid_g1

0x783c,	// (0x00018034) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x783c,	// (0x00018034) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x00020513) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x00020513) cell_fep_china_hwr2_fs_funtion_grid_g

0x7852,	// (0x0001804a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x7852,	// (0x0001804a) cell_fep_china_hwr2_fs_funtion_grid_t1

0x7867,	// (0x0001805f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x7867,	// (0x0001805f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x00020518) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x00020518) cell_fep_china_hwr2_fs_funtion_grid_t

0x7883,	// (0x0001807b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x788b,	// (0x00018083) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7893,	// (0x0001808b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x0002051d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x789b,	// (0x00018093) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x789b,	// (0x00018093) cell_fep_china_hwr2_fs_candidate_grid

0x78b4,	// (0x000180ac) popup_fep_china_hwr2_fs_candidate_grid_g20

0x78bc,	// (0x000180b4) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5d64,	// (0x0001655c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5d64,	// (0x0001655c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0002033d) cell_fep_china_hwr2_fs_candidate_grid_g

0x78c4,	// (0x000180bc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2f3c,	// (0x00013734) clock_nsta_pane_cp_24_ParamLimits

0x2f3c,	// (0x00013734) clock_nsta_pane_cp_24

0x2fba,	// (0x000137b2) indicator_nsta_pane_cp_24_ParamLimits

0x2fba,	// (0x000137b2) indicator_nsta_pane_cp_24

0x412e,	// (0x00014926) heading_pane_g1

0x0001,

0xf8dc,	// (0x000200d4) heading_pane_g

0x4c5c,	// (0x00015454) grid_sct_catagory_button_pane

0x4c8c,	// (0x00015484) scroll_pane_cp5_ParamLimits

0x5907,	// (0x000160ff) button_value_adjust_pane_cp5_ParamLimits

0x5907,	// (0x000160ff) button_value_adjust_pane_cp5

0x5a03,	// (0x000161fb) form2_midp_time_pane_ParamLimits

0x78d2,	// (0x000180ca) cell_sct_catagory_button_pane_ParamLimits

0x78d2,	// (0x000180ca) cell_sct_catagory_button_pane

0x5d29,	// (0x00016521) bg_button_pane_cp01_ParamLimits

0x5d29,	// (0x00016521) bg_button_pane_cp01

0x5d64,	// (0x0001655c) cell_sct_catagory_button_pane_g1

0x2d1d,	// (0x00013515) popup_tb_extension_window

0x78e4,	// (0x000180dc) aid_size_cell_ext_ParamLimits

0x78e4,	// (0x000180dc) aid_size_cell_ext

0x0b69,	// (0x00011361) bg_tb_trans_pane_cp1_ParamLimits

0x0b69,	// (0x00011361) bg_tb_trans_pane_cp1

0x7904,	// (0x000180fc) grid_tb_ext_pane_ParamLimits

0x7904,	// (0x000180fc) grid_tb_ext_pane

0x7934,	// (0x0001812c) cell_tb_ext_pane_ParamLimits

0x7934,	// (0x0001812c) cell_tb_ext_pane

0x794b,	// (0x00018143) cell_tb_ext_pane_g1_ParamLimits

0x794b,	// (0x00018143) cell_tb_ext_pane_g1

0x7968,	// (0x00018160) cell_tb_ext_pane_t1

0x0b69,	// (0x00011361) list_highlight_pane_cp11_ParamLimits

0x0b69,	// (0x00011361) list_highlight_pane_cp11

0xd915,	// (0x0001e10d) popup_uni_indicator_window_ParamLimits

0xd915,	// (0x0001e10d) popup_uni_indicator_window

0x16ad,	// (0x00011ea5) bg_popup_sub_pane_cp14

0x7983,	// (0x0001817b) list_uniindi_pane

0x798f,	// (0x00018187) uniindi_top_pane

0x0b69,	// (0x00011361) bg_uniindi_top_pane

0x79ae,	// (0x000181a6) uniindi_top_pane_g1

0x79c4,	// (0x000181bc) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x00020524) uniindi_top_pane_g

0x79ee,	// (0x000181e6) uniindi_top_pane_t1

0x7a18,	// (0x00018210) list_single_uniindi_pane_ParamLimits

0x7a18,	// (0x00018210) list_single_uniindi_pane

0x5d64,	// (0x0001655c) bg_uniindi_top_pane_g1

0x7a2b,	// (0x00018223) list_single_uniindi_pane_g1

0x7a3e,	// (0x00018236) list_single_uniindi_pane_t1

0x07d2,	// (0x00010fca) control_bg_pane

0x7a63,	// (0x0001825b) bg_sctrl_sk_pane_cp1

0x7a6c,	// (0x00018264) bg_sctrl_sk_pane_cp2

0x7a75,	// (0x0001826d) control_bg_pane_g1

0x7a7e,	// (0x00018276) control_bg_pane_g2

0x0001,

0xfd35,	// (0x0002052d) control_bg_pane_g

0x5741,	// (0x00015f39) cell_indicator_nsta_pane_g1_ParamLimits

0x574f,	// (0x00015f47) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x000202a1) cell_indicator_nsta_pane_g_ParamLimits

0xd25b,	// (0x0001da53) form2_midp_time_pane_t1_ParamLimits

0x0ebd,	// (0x000116b5) main_idle_act4_pane_ParamLimits

0x0ebd,	// (0x000116b5) main_idle_act4_pane

0x2d1d,	// (0x00013515) popup_tb_extension_window_ParamLimits

0x7924,	// (0x0001811c) tb_ext_find_pane_ParamLimits

0x7924,	// (0x0001811c) tb_ext_find_pane

0x7a87,	// (0x0001827f) ai_gene_pane_1_cp1

0x2658,	// (0x00012e50) ai_gene_pane_2_cp1

0x7a8f,	// (0x00018287) list_single_idle_plugin_calendar_pane

0x7a98,	// (0x00018290) list_single_idle_plugin_notification_pane

0x7aa1,	// (0x00018299) list_single_idle_plugin_player_pane

0x7aaa,	// (0x000182a2) list_single_idle_plugin_shortcut_pane_ParamLimits

0x7aaa,	// (0x000182a2) list_single_idle_plugin_shortcut_pane

0x7acc,	// (0x000182c4) main_idle_act4_pane_t1

0x7ade,	// (0x000182d6) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x00020532) main_idle_act4_pane_t

0x7af0,	// (0x000182e8) middle_sk_idle_act4_pane_ParamLimits

0x7af0,	// (0x000182e8) middle_sk_idle_act4_pane

0x7b06,	// (0x000182fe) popup_clock_digital_analogue_window_cp2

0x7b20,	// (0x00018318) shortcut_wheel_idle_act4_pane_ParamLimits

0x7b20,	// (0x00018318) shortcut_wheel_idle_act4_pane

0x5d64,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g1

0x5d64,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g2

0x5d64,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g3

0x5d64,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g4

0x5d64,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g5

0x7b34,	// (0x0001832c) shortcut_wheel_idle_act4_pane_g6

0x7b3c,	// (0x00018334) shortcut_wheel_idle_act4_pane_g7

0x7b44,	// (0x0001833c) shortcut_wheel_idle_act4_pane_g8

0x7b4c,	// (0x00018344) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x00020537) shortcut_wheel_idle_act4_pane_g

0x5fe2,	// (0x000167da) middle_sk_idle_act4_pane_g1_ParamLimits

0x5fe2,	// (0x000167da) middle_sk_idle_act4_pane_g1

0x7bb0,	// (0x000183a8) middle_sk_idle_act4_pane_g2_ParamLimits

0x7bb0,	// (0x000183a8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0002055a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0002055a) middle_sk_idle_act4_pane_g

0x7bbc,	// (0x000183b4) middle_sk_idle_act4_pane_t1_ParamLimits

0x7bbc,	// (0x000183b4) middle_sk_idle_act4_pane_t1

0x7bd9,	// (0x000183d1) grid_ai_shortcut_pane_ParamLimits

0x7bd9,	// (0x000183d1) grid_ai_shortcut_pane

0x7bf2,	// (0x000183ea) list_highlight_pane_cp16_ParamLimits

0x7bf2,	// (0x000183ea) list_highlight_pane_cp16

0x7bff,	// (0x000183f7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x7bff,	// (0x000183f7) list_single_idle_plugin_shortcut_pane_g1

0x7c0b,	// (0x00018403) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x7c0b,	// (0x00018403) list_single_idle_plugin_shortcut_pane_g2

0x7c23,	// (0x0001841b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x7c23,	// (0x0001841b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x0002055f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x0002055f) list_single_idle_plugin_shortcut_pane_g

0x7c36,	// (0x0001842e) cell_ai_shortcut_pane_ParamLimits

0x7c36,	// (0x0001842e) cell_ai_shortcut_pane

0x7c5a,	// (0x00018452) cell_ai_shortcut_pane_g1_ParamLimits

0x7c5a,	// (0x00018452) cell_ai_shortcut_pane_g1

0x7a87,	// (0x0001827f) ai_gene_pane_1_cp2

0x7c7c,	// (0x00018474) ai_gene_pane_2_cp2

0x7c84,	// (0x0001847c) list_highlight_pane_cp15

0x7c8d,	// (0x00018485) list_single_idle_plugin_calendar_pane_g1

0x7c84,	// (0x0001847c) list_highlight_pane_cp17

0x7c95,	// (0x0001848d) list_single_idle_plugin_calendar_pane_g1_copy1

0x7c9d,	// (0x00018495) list_single_idle_plugin_player_pane_g1

0x4eb5,	// (0x000156ad) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x00020566) list_single_idle_plugin_player_pane_g

0x7ca5,	// (0x0001849d) list_single_idle_plugin_player_pane_t1

0x7cb3,	// (0x000184ab) list_single_idle_plugin_player_pane_t2

0x7cc1,	// (0x000184b9) list_single_idle_plugin_player_pane_t3

0x7ccf,	// (0x000184c7) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x0002056b) list_single_idle_plugin_player_pane_t

0x7cdd,	// (0x000184d5) wait_bar_pane_cp15

0x7ce5,	// (0x000184dd) grid_ai_notification_pane

0x4eb5,	// (0x000156ad) list_single_idle_plugin_notification_pane_g1

0x7cee,	// (0x000184e6) cell_ai_notification_pane_ParamLimits

0x7cee,	// (0x000184e6) cell_ai_notification_pane

0x7cfb,	// (0x000184f3) cell_ai_notification_pane_g1

0x7d03,	// (0x000184fb) cell_ai_notification_pane_t1

0x7d11,	// (0x00018509) tb_ext_find_button_pane

0x7d19,	// (0x00018511) tb_ext_find_pane_g1

0x7d21,	// (0x00018519) tb_ext_find_pane_t1

0x1e8e,	// (0x00012686) tb_ext_find_button_pane_g1

0x7d2f,	// (0x00018527) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x00020574) tb_ext_find_button_pane_g

0x7acc,	// (0x000182c4) main_idle_act4_pane_t1_ParamLimits

0x7ade,	// (0x000182d6) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x00020532) main_idle_act4_pane_t_ParamLimits

0x7b06,	// (0x000182fe) popup_clock_digital_analogue_window_cp2_ParamLimits

0x7b14,	// (0x0001830c) sat_plugin_idle_act4_pane_ParamLimits

0x7b14,	// (0x0001830c) sat_plugin_idle_act4_pane

0x7d38,	// (0x00018530) sat_plugin_idle_act4_pane_t1_ParamLimits

0x7d38,	// (0x00018530) sat_plugin_idle_act4_pane_t1

0x7d4b,	// (0x00018543) sat_plugin_idle_act4_pane_t2_ParamLimits

0x7d4b,	// (0x00018543) sat_plugin_idle_act4_pane_t2

0x7d5e,	// (0x00018556) sat_plugin_idle_act4_pane_t3_ParamLimits

0x7d5e,	// (0x00018556) sat_plugin_idle_act4_pane_t3

0x7d71,	// (0x00018569) sat_plugin_idle_act4_pane_t4_ParamLimits

0x7d71,	// (0x00018569) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x00020579) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x00020579) sat_plugin_idle_act4_pane_t

0xd850,	// (0x0001e048) popup_battery_window_ParamLimits

0xd850,	// (0x0001e048) popup_battery_window

0x0b69,	// (0x00011361) bg_popup_sub_pane_cp25_ParamLimits

0x0b69,	// (0x00011361) bg_popup_sub_pane_cp25

0x7d84,	// (0x0001857c) popup_battery_window_g1_ParamLimits

0x7d84,	// (0x0001857c) popup_battery_window_g1

0x7d90,	// (0x00018588) popup_battery_window_t1_ParamLimits

0x7d90,	// (0x00018588) popup_battery_window_t1

0x7da2,	// (0x0001859a) popup_battery_window_t2_ParamLimits

0x7da2,	// (0x0001859a) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x00020582) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x00020582) popup_battery_window_t

0x2527,	// (0x00012d1f) midp_canvas_pane_ParamLimits

0x259c,	// (0x00012d94) midp_keypad_pane_ParamLimits

0x259c,	// (0x00012d94) midp_keypad_pane

0x289d,	// (0x00013095) main_midp_pane_ParamLimits

0x57cd,	// (0x00015fc5) signal_pane_g2_cp_ParamLimits

0x7dbf,	// (0x000185b7) aid_size_cell_midp_keypad_ParamLimits

0x7dbf,	// (0x000185b7) aid_size_cell_midp_keypad

0x7dd9,	// (0x000185d1) midp_keyp_game_grid_pane_ParamLimits

0x7dd9,	// (0x000185d1) midp_keyp_game_grid_pane

0x7df9,	// (0x000185f1) midp_keyp_rocker_pane_ParamLimits

0x7df9,	// (0x000185f1) midp_keyp_rocker_pane

0x7e24,	// (0x0001861c) midp_keyp_sk_left_pane_ParamLimits

0x7e24,	// (0x0001861c) midp_keyp_sk_left_pane

0x7e7e,	// (0x00018676) midp_keyp_sk_right_pane_ParamLimits

0x7e7e,	// (0x00018676) midp_keyp_sk_right_pane

0x07d2,	// (0x00010fca) bg_button_pane_cp03

0x7ed8,	// (0x000186d0) midp_keyp_sk_left_pane_g1

0x07d2,	// (0x00010fca) bg_button_pane_cp04

0x7ed8,	// (0x000186d0) midp_keyp_sk_right_pane_g1

0x5d64,	// (0x0001655c) midp_keyp_rocker_pane_g1

0x7ee1,	// (0x000186d9) keyp_game_cell_pane_ParamLimits

0x7ee1,	// (0x000186d9) keyp_game_cell_pane

0x07d2,	// (0x00010fca) bg_button_pane_cp02

0x7ef4,	// (0x000186ec) keyp_game_cell_pane_g1

0xd894,	// (0x0001e08c) popup_fep_vkb2_window_ParamLimits

0xd894,	// (0x0001e08c) popup_fep_vkb2_window

0xe8ff,	// (0x0001f0f7) aid_size_cell_vkb2_ParamLimits

0xe8ff,	// (0x0001f0f7) aid_size_cell_vkb2

0xe953,	// (0x0001f14b) popup_fep_vkb2_window_g1_ParamLimits

0xe953,	// (0x0001f14b) popup_fep_vkb2_window_g1

0xe99b,	// (0x0001f193) vkb2_area_bottom_pane_ParamLimits

0xe99b,	// (0x0001f193) vkb2_area_bottom_pane

0xe9e7,	// (0x0001f1df) vkb2_area_keypad_pane_ParamLimits

0xe9e7,	// (0x0001f1df) vkb2_area_keypad_pane

0xea29,	// (0x0001f221) vkb2_area_top_pane_ParamLimits

0xea29,	// (0x0001f221) vkb2_area_top_pane

0xeaa3,	// (0x0001f29b) vkb2_top_entry_pane_ParamLimits

0xeaa3,	// (0x0001f29b) vkb2_top_entry_pane

0xeacd,	// (0x0001f2c5) vkb2_top_grid_left_pane_ParamLimits

0xeacd,	// (0x0001f2c5) vkb2_top_grid_left_pane

0xeaeb,	// (0x0001f2e3) vkb2_top_grid_right_pane_ParamLimits

0xeaeb,	// (0x0001f2e3) vkb2_top_grid_right_pane

0xeb09,	// (0x0001f301) vkb2_cell_keypad_pane_ParamLimits

0xeb09,	// (0x0001f301) vkb2_cell_keypad_pane

0xebda,	// (0x0001f3d2) vkb2_area_bottom_grid_pane_ParamLimits

0xebda,	// (0x0001f3d2) vkb2_area_bottom_grid_pane

0xec00,	// (0x0001f3f8) vkb2_area_bottom_pane_g1_ParamLimits

0xec00,	// (0x0001f3f8) vkb2_area_bottom_pane_g1

0xec24,	// (0x0001f41c) vkb2_area_bottom_pane_g2_ParamLimits

0xec24,	// (0x0001f41c) vkb2_area_bottom_pane_g2

0xec52,	// (0x0001f44a) vkb2_area_bottom_pane_g3_ParamLimits

0xec52,	// (0x0001f44a) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x00020587) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x00020587) vkb2_area_bottom_pane_g

0xecb3,	// (0x0001f4ab) vkb2_top_cell_left_pane_ParamLimits

0xecb3,	// (0x0001f4ab) vkb2_top_cell_left_pane

0x7f05,	// (0x000186fd) vkb2_top_entry_pane_g1_ParamLimits

0x7f05,	// (0x000186fd) vkb2_top_entry_pane_g1

0x7f13,	// (0x0001870b) vkb2_top_entry_pane_t1_ParamLimits

0x7f13,	// (0x0001870b) vkb2_top_entry_pane_t1

0x7f45,	// (0x0001873d) vkb2_top_entry_pane_t2_ParamLimits

0x7f45,	// (0x0001873d) vkb2_top_entry_pane_t2

0x7f77,	// (0x0001876f) vkb2_top_entry_pane_t3_ParamLimits

0x7f77,	// (0x0001876f) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x0002058e) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x0002058e) vkb2_top_entry_pane_t

0xed00,	// (0x0001f4f8) vkb2_top_grid_right_pane_g1_ParamLimits

0xed00,	// (0x0001f4f8) vkb2_top_grid_right_pane_g1

0xed16,	// (0x0001f50e) vkb2_top_grid_right_pane_g2_ParamLimits

0xed16,	// (0x0001f50e) vkb2_top_grid_right_pane_g2

0xed2e,	// (0x0001f526) vkb2_top_grid_right_pane_g3_ParamLimits

0xed2e,	// (0x0001f526) vkb2_top_grid_right_pane_g3

0xed46,	// (0x0001f53e) vkb2_top_grid_right_pane_g4_ParamLimits

0xed46,	// (0x0001f53e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x00020595) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x00020595) vkb2_top_grid_right_pane_g

0xed5c,	// (0x0001f554) vkb2_top_cell_left_pane_g1

0xed73,	// (0x0001f56b) vkb2_cell_keypad_pane_g1_ParamLimits

0xed73,	// (0x0001f56b) vkb2_cell_keypad_pane_g1

0x7f9b,	// (0x00018793) vkb2_cell_keypad_pane_t1_ParamLimits

0x7f9b,	// (0x00018793) vkb2_cell_keypad_pane_t1

0xed81,	// (0x0001f579) vkb2_cell_bottom_grid_pane_ParamLimits

0xed81,	// (0x0001f579) vkb2_cell_bottom_grid_pane

0xedba,	// (0x0001f5b2) vkb2_cell_bottom_grid_pane_g1

0x7b54,	// (0x0001834c) aid_call2_pane_cp02

0x7b5c,	// (0x00018354) aid_call_pane_cp02

0x7b64,	// (0x0001835c) clock_digital_number_pane_cp10

0x7b6c,	// (0x00018364) clock_digital_number_pane_cp11

0x7b74,	// (0x0001836c) clock_digital_number_pane_cp12

0x7b7c,	// (0x00018374) clock_digital_number_pane_cp13

0x7b84,	// (0x0001837c) clock_digital_separator_pane_cp10

0x1e8e,	// (0x00012686) popup_clock_digital_analogue_window_cp2_g1

0x1e8e,	// (0x00012686) popup_clock_digital_analogue_window_cp2_g2

0x7b8c,	// (0x00018384) popup_clock_digital_analogue_window_cp2_g3

0x1e8e,	// (0x00012686) popup_clock_digital_analogue_window_cp2_g4

0x7b8c,	// (0x00018384) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x0002054a) popup_clock_digital_analogue_window_cp2_g

0x7b94,	// (0x0001838c) popup_clock_digital_analogue_window_cp2_t1

0x7ba2,	// (0x0001839a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x00020555) popup_clock_digital_analogue_window_cp2_t

0x5d64,	// (0x0001655c) clock_digital_number_pane_cp10_g1

0x5d64,	// (0x0001655c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002033d) clock_digital_number_pane_cp10_g

0x5d64,	// (0x0001655c) clock_digital_separator_pane_cp10_g1

0x5d64,	// (0x0001655c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002033d) clock_digital_separator_pane_cp10_g

0x79d0,	// (0x000181c8) uniindi_top_pane_g3

0x79e1,	// (0x000181d9) uniindi_top_pane_g4

0xeb94,	// (0x0001f38c) vkb2_row_keypad_pane_ParamLimits

0xeb94,	// (0x0001f38c) vkb2_row_keypad_pane

0xedd6,	// (0x0001f5ce) vkb2_cell_t_keypad_pane_ParamLimits

0xedd6,	// (0x0001f5ce) vkb2_cell_t_keypad_pane

0xede6,	// (0x0001f5de) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xede6,	// (0x0001f5de) vkb2_cell_t_keypad_pane_cp08

0xedf9,	// (0x0001f5f1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xedf9,	// (0x0001f5f1) vkb2_cell_t_keypad_pane_cp09

0xee0d,	// (0x0001f605) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xee0d,	// (0x0001f605) vkb2_cell_t_keypad_pane_cp01

0xee1e,	// (0x0001f616) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xee1e,	// (0x0001f616) vkb2_cell_t_keypad_pane_cp02

0xee2f,	// (0x0001f627) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xee2f,	// (0x0001f627) vkb2_cell_t_keypad_pane_cp03

0xee40,	// (0x0001f638) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xee40,	// (0x0001f638) vkb2_cell_t_keypad_pane_cp04

0xee51,	// (0x0001f649) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xee51,	// (0x0001f649) vkb2_cell_t_keypad_pane_cp05

0xee62,	// (0x0001f65a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xee62,	// (0x0001f65a) vkb2_cell_t_keypad_pane_cp06

0xee73,	// (0x0001f66b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xee73,	// (0x0001f66b) vkb2_cell_t_keypad_pane_cp07

0xee84,	// (0x0001f67c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xee84,	// (0x0001f67c) vkb2_cell_t_keypad_pane_cp10

0x5fe2,	// (0x000167da) vkb2_cell_t_keypad_pane_g1

0x7fb2,	// (0x000187aa) vkb2_cell_t_keypad_pane_t1

0x07d2,	// (0x00010fca) popup_grid_graphic2_window

0x7fc4,	// (0x000187bc) aid_size_cell_graphic2_ParamLimits

0x7fc4,	// (0x000187bc) aid_size_cell_graphic2

0x7ffc,	// (0x000187f4) bg_popup_window_pane_cp21_ParamLimits

0x7ffc,	// (0x000187f4) bg_popup_window_pane_cp21

0x800a,	// (0x00018802) graphic2_pages_pane_ParamLimits

0x800a,	// (0x00018802) graphic2_pages_pane

0x8050,	// (0x00018848) grid_graphic2_control_pane_ParamLimits

0x8050,	// (0x00018848) grid_graphic2_control_pane

0x808e,	// (0x00018886) grid_graphic2_pane_ParamLimits

0x808e,	// (0x00018886) grid_graphic2_pane

0x8102,	// (0x000188fa) cell_graphic2_pane

0x07d2,	// (0x00010fca) main_comp_mode_pane

0x71eb,	// (0x000179e3) list_ai3_gene_pane_ParamLimits

0x7618,	// (0x00017e10) bg_popup_window_pane_cp19_ParamLimits

0x7624,	// (0x00017e1c) bg_touch_area_indi_pane_ParamLimits

0x7624,	// (0x00017e1c) bg_touch_area_indi_pane

0x763a,	// (0x00017e32) bg_touch_area_indi_pane_cp01_ParamLimits

0x763a,	// (0x00017e32) bg_touch_area_indi_pane_cp01

0x7650,	// (0x00017e48) bg_touch_area_indi_pane_cp02_ParamLimits

0x7650,	// (0x00017e48) bg_touch_area_indi_pane_cp02

0x7668,	// (0x00017e60) bg_touch_area_indi_pane_cp03_ParamLimits

0x7668,	// (0x00017e60) bg_touch_area_indi_pane_cp03

0x7682,	// (0x00017e7a) popup_slider_window_g1_ParamLimits

0x769e,	// (0x00017e96) popup_slider_window_g2_ParamLimits

0x76ba,	// (0x00017eb2) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x000204df) popup_slider_window_g_ParamLimits

0x7716,	// (0x00017f0e) popup_slider_window_t1_ParamLimits

0x778a,	// (0x00017f82) small_volume_slider_vertical_pane_ParamLimits

0x8102,	// (0x000188fa) cell_graphic2_pane_ParamLimits

0x8150,	// (0x00018948) bg_button_pane_cp10_ParamLimits

0x8150,	// (0x00018948) bg_button_pane_cp10

0x8163,	// (0x0001895b) bg_button_pane_cp11_ParamLimits

0x8163,	// (0x0001895b) bg_button_pane_cp11

0x8176,	// (0x0001896e) graphic2_pages_pane_g1_ParamLimits

0x8176,	// (0x0001896e) graphic2_pages_pane_g1

0x8191,	// (0x00018989) graphic2_pages_pane_g2_ParamLimits

0x8191,	// (0x00018989) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x000205a3) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x000205a3) graphic2_pages_pane_g

0x81a9,	// (0x000189a1) graphic2_pages_pane_t1_ParamLimits

0x81a9,	// (0x000189a1) graphic2_pages_pane_t1

0x81c1,	// (0x000189b9) cell_graphic2_control_pane_ParamLimits

0x81c1,	// (0x000189b9) cell_graphic2_control_pane

0x81e2,	// (0x000189da) cell_graphic2_pane_g1_ParamLimits

0x81e2,	// (0x000189da) cell_graphic2_pane_g1

0x81ef,	// (0x000189e7) cell_graphic2_pane_g2_ParamLimits

0x81ef,	// (0x000189e7) cell_graphic2_pane_g2

0x81fc,	// (0x000189f4) cell_graphic2_pane_g3_ParamLimits

0x81fc,	// (0x000189f4) cell_graphic2_pane_g3

0x8209,	// (0x00018a01) cell_graphic2_pane_g4_ParamLimits

0x8209,	// (0x00018a01) cell_graphic2_pane_g4

0x8216,	// (0x00018a0e) cell_graphic2_pane_g5_ParamLimits

0x8216,	// (0x00018a0e) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x000205a8) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x000205a8) cell_graphic2_pane_g

0x8231,	// (0x00018a29) cell_graphic2_pane_t1_ParamLimits

0x8231,	// (0x00018a29) cell_graphic2_pane_t1

0x3493,	// (0x00013c8b) grid_highlight_pane_cp11_ParamLimits

0x3493,	// (0x00013c8b) grid_highlight_pane_cp11

0x0b69,	// (0x00011361) bg_button_pane_cp05

0x825a,	// (0x00018a52) cell_graphic2_control_pane_g1

0x5d64,	// (0x0001655c) bg_touch_area_indi_pane_g1

0x8282,	// (0x00018a7a) aid_cmod_rocker_key_size

0x828c,	// (0x00018a84) aid_cmode_itu_key_size

0x8296,	// (0x00018a8e) main_cmode_video_pane

0x82a0,	// (0x00018a98) main_comp_mode_itu_pane

0x82ac,	// (0x00018aa4) main_comp_mode_rocker_pane

0x82b8,	// (0x00018ab0) cell_cmode_rocker_pane_ParamLimits

0x82b8,	// (0x00018ab0) cell_cmode_rocker_pane

0x82ca,	// (0x00018ac2) cell_cmode_itu_pane_ParamLimits

0x82ca,	// (0x00018ac2) cell_cmode_itu_pane

0x16ad,	// (0x00011ea5) bg_button_pane_cp06_ParamLimits

0x16ad,	// (0x00011ea5) bg_button_pane_cp06

0x5fe2,	// (0x000167da) cell_cmode_rocker_pane_g1_ParamLimits

0x5fe2,	// (0x000167da) cell_cmode_rocker_pane_g1

0x782e,	// (0x00018026) cell_cmode_rocker_pane_g2_ParamLimits

0x782e,	// (0x00018026) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x000205b8) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x000205b8) cell_cmode_rocker_pane_g

0x07d2,	// (0x00010fca) bg_button_pane_cp07

0x82df,	// (0x00018ad7) cell_cmode_itu_pane_g1

0x82e8,	// (0x00018ae0) cell_cmode_itu_pane_t1

0x82f6,	// (0x00018aee) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x000205bd) cell_cmode_itu_pane_t

0x7a53,	// (0x0001824b) aid_touch_ctrl_left

0x7a5b,	// (0x00018253) aid_touch_ctrl_right

0x07d2,	// (0x00010fca) compa_mode_pane

0x8304,	// (0x00018afc) aid_cmod_rocker_key_size_cp

0x830e,	// (0x00018b06) aid_cmode_itu_key_size_cp

0x8318,	// (0x00018b10) compa_mode_pane_g1

0x8320,	// (0x00018b18) compa_mode_pane_g2

0x8328,	// (0x00018b20) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x000205c2) compa_mode_pane_g

0x8330,	// (0x00018b28) main_comp_mode_itu_pane_cp

0x8338,	// (0x00018b30) main_comp_mode_rocker_pane_cp

0x8340,	// (0x00018b38) cell_cmode_itu_pane_cp_ParamLimits

0x8340,	// (0x00018b38) cell_cmode_itu_pane_cp

0x8355,	// (0x00018b4d) cell_cmode_rocker_pane_cp_ParamLimits

0x8355,	// (0x00018b4d) cell_cmode_rocker_pane_cp

0x16ad,	// (0x00011ea5) bg_button_pane_cp06_cp_ParamLimits

0x16ad,	// (0x00011ea5) bg_button_pane_cp06_cp

0x5fe2,	// (0x000167da) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5fe2,	// (0x000167da) cell_cmode_rocker_pane_g1_cp

0x5d64,	// (0x0001655c) cell_cmode_rocker_pane_g2_cp

0x07d2,	// (0x00010fca) bg_button_pane_cp07_cp

0x49ab,	// (0x000151a3) cell_cmode_itu_pane_g1_cp

0x8367,	// (0x00018b5f) cell_cmode_itu_pane_t1_cp

0x8367,	// (0x00018b5f) cell_cmode_itu_pane_t2_cp

0x4998,	// (0x00015190) settings_code_pane_cp2

0x08c6,	// (0x000110be) bg_popup_window_pane_cp3_ParamLimits

0x0d43,	// (0x0001153b) heading_pane_cp3_ParamLimits

0x0d4f,	// (0x00011547) listscroll_popup_graphic_pane_ParamLimits

0xe4ac,	// (0x0001eca4) fep_hwr_aid_pane_ParamLimits

0xe876,	// (0x0001f06e) aid_touch_sctrl_top_ParamLimits

0xe883,	// (0x0001f07b) sctrl_sk_top_pane_g1_ParamLimits

0x5fe2,	// (0x000167da) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x000204f8) sctrl_sk_top_pane_g_ParamLimits

0xe890,	// (0x0001f088) sctrl_sk_top_pane_t1_ParamLimits

0xe876,	// (0x0001f06e) aid_touch_sctrl_bottom_ParamLimits

0xe890,	// (0x0001f088) sctrl_sk_bottom_pane_t1_ParamLimits

0x799c,	// (0x00018194) aid_area_touch_clock

0xea6b,	// (0x0001f263) aid_vkb2_area_top_pane_cell_ParamLimits

0xea6b,	// (0x0001f263) aid_vkb2_area_top_pane_cell

0xebb6,	// (0x0001f3ae) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xebb6,	// (0x0001f3ae) aid_vkb2_area_bottom_pane_cell

0x7efd,	// (0x000186f5) popup_char_count_window

0x8375,	// (0x00018b6d) popup_char_count_window_g1

0x837e,	// (0x00018b76) popup_char_count_window_g2

0x8387,	// (0x00018b7f) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x000205c9) popup_char_count_window_g

0x8390,	// (0x00018b88) popup_char_count_window_t1

0xe931,	// (0x0001f129) popup_fep_char_preview_window_ParamLimits

0xe931,	// (0x0001f129) popup_fep_char_preview_window

0xea89,	// (0x0001f281) vkb2_top_candi_pane_ParamLimits

0xea89,	// (0x0001f281) vkb2_top_candi_pane

0x839e,	// (0x00018b96) cell_vkb2_top_candi_pane_ParamLimits

0x839e,	// (0x00018b96) cell_vkb2_top_candi_pane

0x3aae,	// (0x000142a6) bg_popup_fep_char_preview_window_ParamLimits

0x3aae,	// (0x000142a6) bg_popup_fep_char_preview_window

0xee99,	// (0x0001f691) popup_fep_char_preview_window_t1_ParamLimits

0xee99,	// (0x0001f691) popup_fep_char_preview_window_t1

0x83fb,	// (0x00018bf3) bg_popup_fep_char_preview_window_g1

0x83f3,	// (0x00018beb) bg_popup_fep_char_preview_window_g2

0x83eb,	// (0x00018be3) bg_popup_fep_char_preview_window_g3

0x8403,	// (0x00018bfb) bg_popup_fep_char_preview_window_g4

0x843c,	// (0x00018c34) bg_popup_fep_char_preview_window_g5

0xeed3,	// (0x0001f6cb) bg_popup_fep_char_preview_window_g6

0x8434,	// (0x00018c2c) bg_popup_fep_char_preview_window_g7

0x842c,	// (0x00018c24) bg_popup_fep_char_preview_window_g8

0x8444,	// (0x00018c3c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x000205d0) bg_popup_fep_char_preview_window_g

0x5fe2,	// (0x000167da) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5fe2,	// (0x000167da) cell_vkb2_top_candi_pane_g1

0x65df,	// (0x00016dd7) cell_vkb2_top_candi_pane_g2_ParamLimits

0x65df,	// (0x00016dd7) cell_vkb2_top_candi_pane_g2

0x6600,	// (0x00016df8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6600,	// (0x00016df8) cell_vkb2_top_candi_pane_g3

0xeedb,	// (0x0001f6d3) cell_vkb2_top_candi_pane_g4_ParamLimits

0xeedb,	// (0x0001f6d3) cell_vkb2_top_candi_pane_g4

0x840b,	// (0x00018c03) cell_vkb2_top_candi_pane_g5_ParamLimits

0x840b,	// (0x00018c03) cell_vkb2_top_candi_pane_g5

0x782e,	// (0x00018026) cell_vkb2_top_candi_pane_g6_ParamLimits

0x782e,	// (0x00018026) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x000205e3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x000205e3) cell_vkb2_top_candi_pane_g

0xeefc,	// (0x0001f6f4) cell_vkb2_top_candi_pane_t1

0xe31a,	// (0x0001eb12) aid_size_touch_slider_mark_ParamLimits

0xe31a,	// (0x0001eb12) aid_size_touch_slider_mark

0x8040,	// (0x00018838) grid_graphic2_catg_pane_ParamLimits

0x8040,	// (0x00018838) grid_graphic2_catg_pane

0x80de,	// (0x000188d6) popup_grid_graphic2_window_t1_ParamLimits

0x80de,	// (0x000188d6) popup_grid_graphic2_window_t1

0x80f0,	// (0x000188e8) popup_grid_graphic2_window_t2_ParamLimits

0x80f0,	// (0x000188e8) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x0002059e) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x0002059e) popup_grid_graphic2_window_t

0x0b69,	// (0x00011361) bg_button_pane_cp05_ParamLimits

0x825a,	// (0x00018a52) cell_graphic2_control_pane_g1_ParamLimits

0x844c,	// (0x00018c44) cell_graphic2_catg_pane_ParamLimits

0x844c,	// (0x00018c44) cell_graphic2_catg_pane

0x07d2,	// (0x00010fca) bg_button_pane_cp12

0x845e,	// (0x00018c56) cell_graphic2_catg_pane_g1

0x7968,	// (0x00018160) cell_tb_ext_pane_t1_ParamLimits

0xecd3,	// (0x0001f4cb) vkb2_top_cell_right_narrow_pane_ParamLimits

0xecd3,	// (0x0001f4cb) vkb2_top_cell_right_narrow_pane

0xeceb,	// (0x0001f4e3) vkb2_top_cell_right_wide_pane_ParamLimits

0xeceb,	// (0x0001f4e3) vkb2_top_cell_right_wide_pane

0x9808,	// (0x0001a000) bg_vkb2_func_pane_ParamLimits

0x9808,	// (0x0001a000) bg_vkb2_func_pane

0xed5c,	// (0x0001f554) vkb2_top_cell_left_pane_g1_ParamLimits

0x9808,	// (0x0001a000) bg_vkb2_fuc_pane_cp03_ParamLimits

0x9808,	// (0x0001a000) bg_vkb2_fuc_pane_cp03

0xedba,	// (0x0001f5b2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x337f,	// (0x00013b77) bg_vkb2_func_pane_g1

0x3377,	// (0x00013b6f) bg_vkb2_func_pane_g2

0x3387,	// (0x00013b7f) bg_vkb2_func_pane_g3

0x338f,	// (0x00013b87) bg_vkb2_func_pane_g4

0x3397,	// (0x00013b8f) bg_vkb2_func_pane_g5

0x339f,	// (0x00013b97) bg_vkb2_func_pane_g6

0x33af,	// (0x00013ba7) bg_vkb2_func_pane_g7

0x33a7,	// (0x00013b9f) bg_vkb2_func_pane_g8

0x336f,	// (0x00013b67) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x000205f0) bg_vkb2_func_pane_g

0x9808,	// (0x0001a000) bg_vkb2_fuc_pane_cp01_ParamLimits

0x9808,	// (0x0001a000) bg_vkb2_fuc_pane_cp01

0xed5c,	// (0x0001f554) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xed5c,	// (0x0001f554) vkb2_top_cell_right_wide_pane_g1

0x9808,	// (0x0001a000) bg_vkb2_fuc_pane_cp02_ParamLimits

0x9808,	// (0x0001a000) bg_vkb2_fuc_pane_cp02

0xedba,	// (0x0001f5b2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xedba,	// (0x0001f5b2) vkb2_top_cell_right_narrow_pane_g1

0x759c,	// (0x00017d94) aid_touch_area_decrease_ParamLimits

0x759c,	// (0x00017d94) aid_touch_area_decrease

0x75ba,	// (0x00017db2) aid_touch_area_increase_ParamLimits

0x75ba,	// (0x00017db2) aid_touch_area_increase

0x75c6,	// (0x00017dbe) aid_touch_area_mute_ParamLimits

0x75c6,	// (0x00017dbe) aid_touch_area_mute

0x75ea,	// (0x00017de2) aid_touch_area_slider_ParamLimits

0x75ea,	// (0x00017de2) aid_touch_area_slider

0x76d6,	// (0x00017ece) popup_slider_window_g4_ParamLimits

0x76d6,	// (0x00017ece) popup_slider_window_g4

0x76e2,	// (0x00017eda) popup_slider_window_g5_ParamLimits

0x76e2,	// (0x00017eda) popup_slider_window_g5

0x7704,	// (0x00017efc) popup_slider_window_g6_ParamLimits

0x7704,	// (0x00017efc) popup_slider_window_g6

0x7744,	// (0x00017f3c) popup_slider_window_t2_ParamLimits

0x7744,	// (0x00017f3c) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x000204ec) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x000204ec) popup_slider_window_t

0x775c,	// (0x00017f54) slider_pane_ParamLimits

0x775c,	// (0x00017f54) slider_pane

0x8467,	// (0x00018c5f) slider_pane_g1_ParamLimits

0x8467,	// (0x00018c5f) slider_pane_g1

0x847b,	// (0x00018c73) slider_pane_g2_ParamLimits

0x847b,	// (0x00018c73) slider_pane_g2

0x8491,	// (0x00018c89) slider_pane_g3_ParamLimits

0x8491,	// (0x00018c89) slider_pane_g3

0x0003,

0xfe0b,	// (0x00020603) slider_pane_g_ParamLimits

0xfe0b,	// (0x00020603) slider_pane_g

0x2d79,	// (0x00013571) popup_tb_float_extension_window_ParamLimits

0x2d79,	// (0x00013571) popup_tb_float_extension_window

0x84bd,	// (0x00018cb5) aid_size_cell_tb_float_ext

0x07d2,	// (0x00010fca) bg_popup_sub_window_cp28

0x84c9,	// (0x00018cc1) grid_tb_float_ext_pane

0x84d3,	// (0x00018ccb) cell_tb_float_ext_pane_ParamLimits

0x84d3,	// (0x00018ccb) cell_tb_float_ext_pane

0x84ed,	// (0x00018ce5) cell_tb_float_ext_pane_g1

0x84f6,	// (0x00018cee) grid_highlight_pane_cp12

0xe5df,	// (0x0001edd7) cell_last_hwr_side_pane_ParamLimits

0xe5df,	// (0x0001edd7) cell_last_hwr_side_pane

0x5d64,	// (0x0001655c) cell_last_hwr_side_pane_g1

0x84ff,	// (0x00018cf7) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x0002060c) cell_last_hwr_side_pane_g

0xec82,	// (0x0001f47a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xec82,	// (0x0001f47a) vkb2_area_bottom_space_btn_pane

0x5fe2,	// (0x000167da) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7fb2,	// (0x000187aa) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xeefc,	// (0x0001f6f4) cell_vkb2_top_candi_pane_t1_ParamLimits

0xef1b,	// (0x0001f713) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xef1b,	// (0x0001f713) vkb2_area_bottom_space_btn_pane_g1

0xef55,	// (0x0001f74d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xef55,	// (0x0001f74d) vkb2_area_bottom_space_btn_pane_g2

0xef8b,	// (0x0001f783) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xef8b,	// (0x0001f783) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x00020611) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x00020611) vkb2_area_bottom_space_btn_pane_g

0xe553,	// (0x0001ed4b) cel_fep_hwr_func_pane_ParamLimits

0xe553,	// (0x0001ed4b) cel_fep_hwr_func_pane

0xe58f,	// (0x0001ed87) cell_hwr_side_button_pane_ParamLimits

0xe58f,	// (0x0001ed87) cell_hwr_side_button_pane

0x799c,	// (0x00018194) aid_area_touch_clock_ParamLimits

0x0b69,	// (0x00011361) bg_uniindi_top_pane_ParamLimits

0x79ae,	// (0x000181a6) uniindi_top_pane_g1_ParamLimits

0x79c4,	// (0x000181bc) uniindi_top_pane_g2_ParamLimits

0x79d0,	// (0x000181c8) uniindi_top_pane_g3_ParamLimits

0x79e1,	// (0x000181d9) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x00020524) uniindi_top_pane_g_ParamLimits

0x79ee,	// (0x000181e6) uniindi_top_pane_t1_ParamLimits

0x0b69,	// (0x00011361) bg_vkb2_func_pane_cp01_ParamLimits

0x0b69,	// (0x00011361) bg_vkb2_func_pane_cp01

0x983e,	// (0x0001a036) cel_fep_hwr_func_pane_g1_ParamLimits

0x983e,	// (0x0001a036) cel_fep_hwr_func_pane_g1

0x0b69,	// (0x00011361) bg_vkb2_func_pane_cp02_ParamLimits

0x0b69,	// (0x00011361) bg_vkb2_func_pane_cp02

0x983e,	// (0x0001a036) cell_hwr_side_button_pane_g1_ParamLimits

0x983e,	// (0x0001a036) cell_hwr_side_button_pane_g1

0x31b9,	// (0x000139b1) status_pane_g4_ParamLimits

0x31b9,	// (0x000139b1) status_pane_g4

0x31d3,	// (0x000139cb) status_pane_t1

0x5a9e,	// (0x00016296) form2_midp_gauge_slider_cont_pane

0x5aa6,	// (0x0001629e) form2_midp_gauge_slider_pane_t1_ParamLimits

0x5ab8,	// (0x000162b0) form2_midp_gauge_slider_pane_t2_ParamLimits

0x5aca,	// (0x000162c2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x000202f0) form2_midp_gauge_slider_pane_t_ParamLimits

0x5adc,	// (0x000162d4) form2_midp_slider_pane_ParamLimits

0xe8f1,	// (0x0001f0e9) aid_size_cell_func_vkb2_ParamLimits

0xe8f1,	// (0x0001f0e9) aid_size_cell_func_vkb2

0x84a9,	// (0x00018ca1) slider_pane_g4_ParamLimits

0x84a9,	// (0x00018ca1) slider_pane_g4

0xefd5,	// (0x0001f7cd) form2_midp_gauge_slider_pane_t2_cp01

0xefe3,	// (0x0001f7db) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xefe3,	// (0x0001f7db) form2_midp_gauge_slider_pane_t3_cp01

0xf000,	// (0x0001f7f8) form2_midp_slider_pane_cp01

0x07d2,	// (0x00010fca) navi_smil_pane

0x986e,	// (0x0001a066) navi_smil_pane_g1

0x9876,	// (0x0001a06e) navi_smil_pane_t1

0x984c,	// (0x0001a044) form2_midp_slider_pane_g1

0x9855,	// (0x0001a04d) form2_midp_slider_pane_g2

0x985d,	// (0x0001a055) form2_midp_slider_pane_g3

0x984c,	// (0x0001a044) form2_midp_slider_pane_g4

0xf009,	// (0x0001f801) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x0002061a) form2_midp_slider_pane_g

0xefc5,	// (0x0001f7bd) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xefc5,	// (0x0001f7bd) vkb2_area_bottom_space_btn_pane_g4

0x2ff6,	// (0x000137ee) lc0_navi_pane_ParamLimits

0x2ff6,	// (0x000137ee) lc0_navi_pane

0x306c,	// (0x00013864) lc0_stat_indi_pane_ParamLimits

0x306c,	// (0x00013864) lc0_stat_indi_pane

0x3083,	// (0x0001387b) ls0_title_pane_ParamLimits

0x3083,	// (0x0001387b) ls0_title_pane

0x16ad,	// (0x00011ea5) bg_popup_sub_pane_cp14_ParamLimits

0x7983,	// (0x0001817b) list_uniindi_pane_ParamLimits

0x798f,	// (0x00018187) uniindi_top_pane_ParamLimits

0x7a2b,	// (0x00018223) list_single_uniindi_pane_g1_ParamLimits

0x7a3e,	// (0x00018236) list_single_uniindi_pane_t1_ParamLimits

0xf012,	// (0x0001f80a) lc0_stat_clock_pane_ParamLimits

0xf012,	// (0x0001f80a) lc0_stat_clock_pane

0xf01f,	// (0x0001f817) lc0_stat_indi_pane_g1_ParamLimits

0xf01f,	// (0x0001f817) lc0_stat_indi_pane_g1

0xf02c,	// (0x0001f824) lc0_stat_indi_pane_g2_ParamLimits

0xf02c,	// (0x0001f824) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x00020625) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x00020625) lc0_stat_indi_pane_g

0xf039,	// (0x0001f831) lc0_uni_indicator_pane_ParamLimits

0xf039,	// (0x0001f831) lc0_uni_indicator_pane

0xf046,	// (0x0001f83e) ls0_title_pane_g1_ParamLimits

0xf046,	// (0x0001f83e) ls0_title_pane_g1

0xf05a,	// (0x0001f852) ls0_title_pane_t1_ParamLimits

0xf05a,	// (0x0001f852) ls0_title_pane_t1

0xf090,	// (0x0001f888) lc0_uni_indicator_pane_g1_ParamLimits

0xf090,	// (0x0001f888) lc0_uni_indicator_pane_g1

0x9884,	// (0x0001a07c) lc0_stat_clock_pane_t1

0x07d2,	// (0x00010fca) main_ai5_pane

0x9892,	// (0x0001a08a) ai5_sk_pane_ParamLimits

0x9892,	// (0x0001a08a) ai5_sk_pane

0xf0a4,	// (0x0001f89c) cell_ai5_widget_pane_ParamLimits

0xf0a4,	// (0x0001f89c) cell_ai5_widget_pane

0x989f,	// (0x0001a097) aid_size_cell_widget_grid

0x98b3,	// (0x0001a0ab) bg_ai5_widget_pane_ParamLimits

0x98b3,	// (0x0001a0ab) bg_ai5_widget_pane

0x98fd,	// (0x0001a0f5) cell_ai5_widget_pane_g2

0x990d,	// (0x0001a105) cell_ai5_widget_pane_g3

0x992c,	// (0x0001a124) cell_ai5_widget_pane_g4

0x9938,	// (0x0001a130) cell_ai5_widget_pane_g5

0x9944,	// (0x0001a13c) cell_ai5_widget_pane_g6

0x9950,	// (0x0001a148) cell_ai5_widget_pane_g7

0x9998,	// (0x0001a190) cell_ai5_widget_pane_t1_ParamLimits

0x9998,	// (0x0001a190) cell_ai5_widget_pane_t1

0x99b5,	// (0x0001a1ad) cell_ai5_widget_pane_t2_ParamLimits

0x99b5,	// (0x0001a1ad) cell_ai5_widget_pane_t2

0x99cd,	// (0x0001a1c5) cell_ai5_widget_pane_t3_ParamLimits

0x99cd,	// (0x0001a1c5) cell_ai5_widget_pane_t3

0x99e5,	// (0x0001a1dd) cell_ai5_widget_pane_t4_ParamLimits

0x99e5,	// (0x0001a1dd) cell_ai5_widget_pane_t4

0x99ff,	// (0x0001a1f7) cell_ai5_widget_pane_t5_ParamLimits

0x99ff,	// (0x0001a1f7) cell_ai5_widget_pane_t5

0x9a1e,	// (0x0001a216) cell_ai5_widget_pane_t6_ParamLimits

0x9a1e,	// (0x0001a216) cell_ai5_widget_pane_t6

0x9a30,	// (0x0001a228) cell_ai5_widget_pane_t7_ParamLimits

0x9a30,	// (0x0001a228) cell_ai5_widget_pane_t7

0x9a49,	// (0x0001a241) cell_ai5_widget_pane_t8_ParamLimits

0x9a49,	// (0x0001a241) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x0002063f) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x0002063f) cell_ai5_widget_pane_t

0x9a95,	// (0x0001a28d) grid_ai5_widget_pane

0x16ad,	// (0x00011ea5) highlight_cell_ai5_widget_pane_ParamLimits

0x16ad,	// (0x00011ea5) highlight_cell_ai5_widget_pane

0xf15a,	// (0x0001f952) ai5_sk_left_pane

0xf164,	// (0x0001f95c) ai5_sk_middle_pane

0xf16e,	// (0x0001f966) ai5_sk_right_pane

0x9aad,	// (0x0001a2a5) bg_ai5_widget_pane_g1_ParamLimits

0x9aad,	// (0x0001a2a5) bg_ai5_widget_pane_g1

0x9ab9,	// (0x0001a2b1) bg_ai5_widget_pane_g2_ParamLimits

0x9ab9,	// (0x0001a2b1) bg_ai5_widget_pane_g2

0x9ac5,	// (0x0001a2bd) bg_ai5_widget_pane_g3_ParamLimits

0x9ac5,	// (0x0001a2bd) bg_ai5_widget_pane_g3

0x9ad1,	// (0x0001a2c9) bg_ai5_widget_pane_g4_ParamLimits

0x9ad1,	// (0x0001a2c9) bg_ai5_widget_pane_g4

0x9add,	// (0x0001a2d5) bg_ai5_widget_pane_g5_ParamLimits

0x9add,	// (0x0001a2d5) bg_ai5_widget_pane_g5

0x9ae9,	// (0x0001a2e1) bg_ai5_widget_pane_g6_ParamLimits

0x9ae9,	// (0x0001a2e1) bg_ai5_widget_pane_g6

0x9af5,	// (0x0001a2ed) bg_ai5_widget_pane_g7_ParamLimits

0x9af5,	// (0x0001a2ed) bg_ai5_widget_pane_g7

0x9b01,	// (0x0001a2f9) bg_ai5_widget_pane_g8_ParamLimits

0x9b01,	// (0x0001a2f9) bg_ai5_widget_pane_g8

0x9b0d,	// (0x0001a305) bg_ai5_widget_pane_g9_ParamLimits

0x9b0d,	// (0x0001a305) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x00020654) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x00020654) bg_ai5_widget_pane_g

0x9b40,	// (0x0001a338) cell_shortcut_ai5_widget_pane_ParamLimits

0x9b40,	// (0x0001a338) cell_shortcut_ai5_widget_pane

0x09a9,	// (0x000111a1) bg_cell_shortcut_ai5_widget_pane

0x9b51,	// (0x0001a349) cell_grid_ai5_widget_pane_g1

0x9b5a,	// (0x0001a352) highlight_cell_shortcut_ai5_widget_pane

0x3377,	// (0x00013b6f) ai5_sk_left_pane_g1

0x9b62,	// (0x0001a35a) ai5_sk_left_pane_g2

0x9b6a,	// (0x0001a362) ai5_sk_left_pane_g3

0x9b72,	// (0x0001a36a) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x00020667) ai5_sk_left_pane_g

0x9b7a,	// (0x0001a372) ai5_sk_left_pane_t1

0x337f,	// (0x00013b77) ai5_sk_right_pane_g1

0x9b88,	// (0x0001a380) ai5_sk_right_pane_g2

0x9b90,	// (0x0001a388) ai5_sk_right_pane_g3

0x9b98,	// (0x0001a390) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x00020670) ai5_sk_right_pane_g

0x9ba0,	// (0x0001a398) ai5_sk_right_pane_t1

0x337f,	// (0x00013b77) ai5_sk_middle_pane_g1

0x3377,	// (0x00013b6f) ai5_sk_middle_pane_g2

0x3397,	// (0x00013b8f) ai5_sk_middle_pane_g3

0x9b90,	// (0x0001a388) ai5_sk_middle_pane_g4

0x9b6a,	// (0x0001a362) ai5_sk_middle_pane_g5

0x9bae,	// (0x0001a3a6) ai5_sk_middle_pane_g6

0xf178,	// (0x0001f970) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x00020679) ai5_sk_middle_pane_g

0x2e86,	// (0x0001367e) aid_touch_area_size_lc0_ParamLimits

0x2e86,	// (0x0001367e) aid_touch_area_size_lc0

0xe6de,	// (0x0001eed6) cell_hwr_candidate_pane_t1_ParamLimits

0x2ea2,	// (0x0001369a) aid_touch_navi_pane

0x316b,	// (0x00013963) status_dt_navi_pane_ParamLimits

0x316b,	// (0x00013963) status_dt_navi_pane

0x3178,	// (0x00013970) status_dt_sta_pane_ParamLimits

0x3178,	// (0x00013970) status_dt_sta_pane

0xf180,	// (0x0001f978) dt_sta_controll_pane

0xf18d,	// (0x0001f985) dt_sta_indi_pane

0xf19a,	// (0x0001f992) dt_sta_title_pane

0x0b69,	// (0x00011361) bg_dt_sta_indi_pane_ParamLimits

0x0b69,	// (0x00011361) bg_dt_sta_indi_pane

0x9bb6,	// (0x0001a3ae) dt_sta_battery_pane

0x9bbe,	// (0x0001a3b6) dt_sta_indi_pane_g1

0x9bc7,	// (0x0001a3bf) dt_sta_indi_pane_g2

0x9bd0,	// (0x0001a3c8) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x00020688) dt_sta_indi_pane_g

0x9bd9,	// (0x0001a3d1) dt_sta_signal_pane

0x16ad,	// (0x00011ea5) bg_dt_sta_title_pane_ParamLimits

0x16ad,	// (0x00011ea5) bg_dt_sta_title_pane

0x9be2,	// (0x0001a3da) dt_sta_title_pane_g1

0x9bea,	// (0x0001a3e2) dt_sta_title_pane_t1_ParamLimits

0x9bea,	// (0x0001a3e2) dt_sta_title_pane_t1

0x07d2,	// (0x00010fca) bg_dt_sta_control_pane

0x9bff,	// (0x0001a3f7) dt_sta_controll_pane_g1

0x9c08,	// (0x0001a400) bg_dt_sta_title_pane_g1

0x9c11,	// (0x0001a409) bg_dt_sta_title_pane_g2

0x9c1a,	// (0x0001a412) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x0002068f) bg_dt_sta_title_pane_g

0x5d64,	// (0x0001655c) bg_dt_sta_indi_pane_g1

0x9c23,	// (0x0001a41b) dt_sta_signal_pane_g1

0x9c2b,	// (0x0001a423) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x00020696) dt_sta_signal_pane_g

0x9c33,	// (0x0001a42b) dt_sta_battery_pane_g1

0x9c3c,	// (0x0001a434) dt_sta_battery_pane_t1

0x5d64,	// (0x0001655c) bg_dt_sta_control_pane_g1

0x1f9a,	// (0x00012792) fep_china_uni_eep_pane

0x1fa2,	// (0x0001279a) fep_china_uni_entry_pane_ParamLimits

0x1fb2,	// (0x000127aa) popup_fep_china_uni_window_g1_ParamLimits

0x1fc2,	// (0x000127ba) popup_fep_china_uni_window_g2_ParamLimits

0x1fc2,	// (0x000127ba) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0001ff2d) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0001ff2d) popup_fep_china_uni_window_g

0x9c4b,	// (0x0001a443) fep_china_uni_eep_pane_g1

0x9c53,	// (0x0001a44b) fep_china_uni_eep_pane_t1

0x9865,	// (0x0001a05d) aid_touch_area_size_smil_player

0x2fee,	// (0x000137e6) lc0_clock_pane

0x31c7,	// (0x000139bf) status_pane_g5_ParamLimits

0x31c7,	// (0x000139bf) status_pane_g5

0x2a3e,	// (0x00013236) popup_keymap_window

0x318d,	// (0x00013985) status_icon_pane

0x990d,	// (0x0001a105) cell_ai5_widget_pane_g3_ParamLimits

0x992c,	// (0x0001a124) cell_ai5_widget_pane_g4_ParamLimits

0x9938,	// (0x0001a130) cell_ai5_widget_pane_g5_ParamLimits

0x995c,	// (0x0001a154) cell_ai5_widget_pane_g8_ParamLimits

0x995c,	// (0x0001a154) cell_ai5_widget_pane_g8

0x9970,	// (0x0001a168) cell_ai5_widget_pane_g9_ParamLimits

0x9970,	// (0x0001a168) cell_ai5_widget_pane_g9

0x9984,	// (0x0001a17c) cell_ai5_widget_pane_g10_ParamLimits

0x9984,	// (0x0001a17c) cell_ai5_widget_pane_g10

0x9c62,	// (0x0001a45a) status_icon_pane_g1

0x07d2,	// (0x00010fca) bg_popup_sub_pane_cp13

0x9c6a,	// (0x0001a462) popup_keymap_window_t1

0x2804,	// (0x00012ffc) control_pane_g6_ParamLimits

0x2804,	// (0x00012ffc) control_pane_g6

0x27f7,	// (0x00012fef) control_pane_g7_ParamLimits

0x27f7,	// (0x00012fef) control_pane_g7

0x27ea,	// (0x00012fe2) control_pane_g8_ParamLimits

0x27ea,	// (0x00012fe2) control_pane_g8

0xf180,	// (0x0001f978) dt_sta_controll_pane_ParamLimits

0xf18d,	// (0x0001f985) dt_sta_indi_pane_ParamLimits

0xf19a,	// (0x0001f992) dt_sta_title_pane_ParamLimits

0x1084,	// (0x0001187c) aid_size_touch_scroll_bar_cale

0xd864,	// (0x0001e05c) popup_discreet_window_ParamLimits

0xd864,	// (0x0001e05c) popup_discreet_window

0xd8ec,	// (0x0001e0e4) popup_sk_window

0x3aae,	// (0x000142a6) bg_popup_sub_pane_cp28_ParamLimits

0x3aae,	// (0x000142a6) bg_popup_sub_pane_cp28

0x9c78,	// (0x0001a470) popup_discreet_window_g1_ParamLimits

0x9c78,	// (0x0001a470) popup_discreet_window_g1

0x9c98,	// (0x0001a490) popup_discreet_window_t1_ParamLimits

0x9c98,	// (0x0001a490) popup_discreet_window_t1

0x9cb6,	// (0x0001a4ae) popup_discreet_window_t2_ParamLimits

0x9cb6,	// (0x0001a4ae) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x0002069b) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x0002069b) popup_discreet_window_t

0xf1ab,	// (0x0001f9a3) popup_sk_window_g1

0xf1b5,	// (0x0001f9ad) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x000206a2) popup_sk_window_g

0xf1bf,	// (0x0001f9b7) popup_sk_window_t1

0xf1cd,	// (0x0001f9c5) popup_sk_window_t1_copy1

0x98fd,	// (0x0001a0f5) cell_ai5_widget_pane_g2_ParamLimits

0x9a5b,	// (0x0001a253) cell_ai5_widget_pane_t9_ParamLimits

0x9a5b,	// (0x0001a253) cell_ai5_widget_pane_t9

0x07d2,	// (0x00010fca) main_fep_fshwr2_pane

0xf1db,	// (0x0001f9d3) aid_fshwr2_btn_pane

0xf1e3,	// (0x0001f9db) aid_fshwr2_syb_pane

0xf1eb,	// (0x0001f9e3) aid_fshwr2_txt_pane

0xf1f3,	// (0x0001f9eb) fshwr2_func_candi_pane

0xf1ff,	// (0x0001f9f7) fshwr2_hwr_syb_pane

0xf20b,	// (0x0001fa03) fshwr2_icf_pane

0x07d2,	// (0x00010fca) fshwr2_icf_bg_pane

0xf215,	// (0x0001fa0d) fshwr2_icf_pane_t1_ParamLimits

0xf215,	// (0x0001fa0d) fshwr2_icf_pane_t1

0x5d64,	// (0x0001655c) fshwr2_func_candi_pane_g1

0x9d1c,	// (0x0001a514) fshwr2_func_candi_row_pane_ParamLimits

0x9d1c,	// (0x0001a514) fshwr2_func_candi_row_pane

0xf22c,	// (0x0001fa24) cell_fshwr2_syb_pane_ParamLimits

0xf22c,	// (0x0001fa24) cell_fshwr2_syb_pane

0x5fe2,	// (0x000167da) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5fe2,	// (0x000167da) fshwr2_hwr_syb_pane_g1

0x07d2,	// (0x00010fca) bg_popup_call_pane_cp01

0x9d2d,	// (0x0001a525) fshwr2_func_candi_cell_pane_ParamLimits

0x9d2d,	// (0x0001a525) fshwr2_func_candi_cell_pane

0x9d5e,	// (0x0001a556) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9d5e,	// (0x0001a556) fshwr2_func_candi_cell_bg_pane

0x9d78,	// (0x0001a570) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9d78,	// (0x0001a570) fshwr2_func_candi_cell_pane_g1

0x9da0,	// (0x0001a598) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9da0,	// (0x0001a598) fshwr2_func_candi_cell_pane_t1

0x07d2,	// (0x00010fca) bg_button_pane_cp08

0x251f,	// (0x00012d17) cell_fshwr2_syb_bg_pane

0xf246,	// (0x0001fa3e) cell_fshwr2_syb_bg_pane_g1

0xf24e,	// (0x0001fa46) cell_fshwr2_syb_bg_pane_t1

0x16ad,	// (0x00011ea5) main_tmo_pane

0x45bd,	// (0x00014db5) uni_indicator_pane_g1_ParamLimits

0x45d2,	// (0x00014dca) uni_indicator_pane_g2_ParamLimits

0x45e8,	// (0x00014de0) uni_indicator_pane_g3_ParamLimits

0x45fe,	// (0x00014df6) uni_indicator_pane_g4_ParamLimits

0x45fe,	// (0x00014df6) uni_indicator_pane_g4

0x4612,	// (0x00014e0a) uni_indicator_pane_g5_ParamLimits

0x4612,	// (0x00014e0a) uni_indicator_pane_g5

0x4626,	// (0x00014e1e) uni_indicator_pane_g6_ParamLimits

0x4626,	// (0x00014e1e) uni_indicator_pane_g6

0xf932,	// (0x0002012a) uni_indicator_pane_g_ParamLimits

0x7578,	// (0x00017d70) popup_tmo_note_window_ParamLimits

0x7578,	// (0x00017d70) popup_tmo_note_window

0x07d2,	// (0x00010fca) fshwr2_bg_pane

0x9d91,	// (0x0001a589) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9d91,	// (0x0001a589) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x000206a7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x000206a7) fshwr2_func_candi_cell_pane_g

0x5d64,	// (0x0001655c) bg_popup_window_pane_cp01

0x9db3,	// (0x0001a5ab) bg_popup_window_pane_g1_cp01

0x9dbc,	// (0x0001a5b4) bg_popup_window_pane_cp22_ParamLimits

0x9dbc,	// (0x0001a5b4) bg_popup_window_pane_cp22

0x9dca,	// (0x0001a5c2) listscroll_tmo_link_pane_ParamLimits

0x9dca,	// (0x0001a5c2) listscroll_tmo_link_pane

0x9e0a,	// (0x0001a602) popup_tmo_note_window_g1_ParamLimits

0x9e0a,	// (0x0001a602) popup_tmo_note_window_g1

0x9e17,	// (0x0001a60f) tmo_note_info_pane_ParamLimits

0x9e17,	// (0x0001a60f) tmo_note_info_pane

0xf25d,	// (0x0001fa55) list_tmo_note_info_pane_g1_ParamLimits

0xf25d,	// (0x0001fa55) list_tmo_note_info_pane_g1

0x9e31,	// (0x0001a629) list_tmo_note_info_pane_g2_ParamLimits

0x9e31,	// (0x0001a629) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x000206ac) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x000206ac) list_tmo_note_info_pane_g

0x9e4d,	// (0x0001a645) list_tmo_note_info_text_pane_ParamLimits

0x9e4d,	// (0x0001a645) list_tmo_note_info_text_pane

0x9e8f,	// (0x0001a687) list_tmo_link_pane

0x9e9c,	// (0x0001a694) scroll_pane_cp20

0x9ea9,	// (0x0001a6a1) list_single_tmo_link_pane_ParamLimits

0x9ea9,	// (0x0001a6a1) list_single_tmo_link_pane

0x9eb9,	// (0x0001a6b1) list_single_tmo_link_pane_t1

0x9ec7,	// (0x0001a6bf) list_tmo_note_info_text_pane_t1_ParamLimits

0x9ec7,	// (0x0001a6bf) list_tmo_note_info_text_pane_t1

0x18f0,	// (0x000120e8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x18f0,	// (0x000120e8) aid_size_touch_scroll_bar_cp01

0xcbf9,	// (0x0001d3f1) aid_size_touch_slider_marker

0xd8d4,	// (0x0001e0cc) popup_settings_window_ParamLimits

0xd8d4,	// (0x0001e0cc) popup_settings_window

0xcdc8,	// (0x0001d5c0) popup_candi_list_indi_window

0x2ea2,	// (0x0001369a) aid_touch_navi_pane_ParamLimits

0xe84a,	// (0x0001f042) rs_clock_indi_pane

0xe853,	// (0x0001f04b) sctrl_sk_bottom_pane_ParamLimits

0xe864,	// (0x0001f05c) sctrl_sk_top_pane_ParamLimits

0xe94b,	// (0x0001f143) popup_fep_tooltip_window

0x989f,	// (0x0001a097) aid_size_cell_widget_grid_ParamLimits

0x98f1,	// (0x0001a0e9) cell_ai5_widget_pane_g1_ParamLimits

0x98f1,	// (0x0001a0e9) cell_ai5_widget_pane_g1

0x9944,	// (0x0001a13c) cell_ai5_widget_pane_g6_ParamLimits

0x9950,	// (0x0001a148) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x0002062a) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x0002062a) cell_ai5_widget_pane_g

0x9a7f,	// (0x0001a277) cell_ai5_widget_pane_t10_ParamLimits

0x9a7f,	// (0x0001a277) cell_ai5_widget_pane_t10

0x9a95,	// (0x0001a28d) grid_ai5_widget_pane_ParamLimits

0x9b19,	// (0x0001a311) cell_contacts_ai5_widget_pane_ParamLimits

0x9b19,	// (0x0001a311) cell_contacts_ai5_widget_pane

0x9ccb,	// (0x0001a4c3) popup_discreet_window_t3_ParamLimits

0x9ccb,	// (0x0001a4c3) popup_discreet_window_t3

0x9d08,	// (0x0001a500) popup_fshwr2_char_preview_window_ParamLimits

0x9d08,	// (0x0001a500) popup_fshwr2_char_preview_window

0xf274,	// (0x0001fa6c) tmo_note_info_pane_t1

0xf289,	// (0x0001fa81) tmo_note_info_pane_t2

0xf29e,	// (0x0001fa96) tmo_note_info_pane_t3

0x9e6b,	// (0x0001a663) tmo_note_info_pane_t4

0x9e7d,	// (0x0001a675) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x000206b1) tmo_note_info_pane_t

0x9e8f,	// (0x0001a687) list_tmo_link_pane_ParamLimits

0x9e9c,	// (0x0001a694) scroll_pane_cp20_ParamLimits

0x07d2,	// (0x00010fca) bg_popup_fep_char_preview_window_cp01

0x9ee0,	// (0x0001a6d8) popup_fshwr2_char_preview_window_t1

0x9eee,	// (0x0001a6e6) popup_candi_list_indi_window_g1

0x9ef7,	// (0x0001a6ef) bg_cell_contacts_ai5_widget_pane

0x9f03,	// (0x0001a6fb) cell_contacts_ai5_widget_pane_g1

0x9f17,	// (0x0001a70f) cell_contacts_ai5_widget_pane_g2

0x9f26,	// (0x0001a71e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x000206bc) cell_contacts_ai5_widget_pane_g

0x9f39,	// (0x0001a731) cell_contacts_ai5_widget_pane_t1

0x16ad,	// (0x00011ea5) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf318,	// (0x0001fb10) settings_container_pane

0x251f,	// (0x00012d17) listscroll_set_pane_copy1

0x5238,	// (0x00015a30) scroll_pane_cp121_copy1

0x9f4b,	// (0x0001a743) set_content_pane_copy1

0xf324,	// (0x0001fb1c) aid_height_set_list_copy1_ParamLimits

0xf324,	// (0x0001fb1c) aid_height_set_list_copy1

0x4846,	// (0x0001503e) aid_size_parent_copy1_ParamLimits

0x4846,	// (0x0001503e) aid_size_parent_copy1

0xf330,	// (0x0001fb28) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf330,	// (0x0001fb28) button_value_adjust_pane_cp6_copy1

0x289d,	// (0x00013095) list_highlight_pane_cp2_copy1_ParamLimits

0x289d,	// (0x00013095) list_highlight_pane_cp2_copy1

0xf344,	// (0x0001fb3c) list_set_pane_copy1_ParamLimits

0xf344,	// (0x0001fb3c) list_set_pane_copy1

0xf2b3,	// (0x0001faab) main_pane_set_t1_copy1_ParamLimits

0xf2b3,	// (0x0001faab) main_pane_set_t1_copy1

0xf2ed,	// (0x0001fae5) main_pane_set_t2_copy1_ParamLimits

0xf2ed,	// (0x0001fae5) main_pane_set_t2_copy1

0xf3f1,	// (0x0001fbe9) main_pane_set_t3_copy1

0xf3ff,	// (0x0001fbf7) main_pane_set_t4_copy1

0xf30c,	// (0x0001fb04) set_content_pane_g1_copy1_ParamLimits

0xf30c,	// (0x0001fb04) set_content_pane_g1_copy1

0xf40d,	// (0x0001fc05) setting_code_pane_copy1

0x9f53,	// (0x0001a74b) setting_slider_graphic_pane_copy1

0x9f53,	// (0x0001a74b) setting_slider_pane_copy1

0x9f53,	// (0x0001a74b) setting_text_pane_copy1

0x9f5d,	// (0x0001a755) setting_volume_pane_copy1

0xf417,	// (0x0001fc0f) settings_code_pane_cp2_copy1

0xf41f,	// (0x0001fc17) settings_code_pane_cp_copy1_ParamLimits

0xf41f,	// (0x0001fc17) settings_code_pane_cp_copy1

0xf433,	// (0x0001fc2b) volume_set_pane_copy1

0xf43b,	// (0x0001fc33) volume_set_pane_g10_copy1

0xf443,	// (0x0001fc3b) volume_set_pane_g1_copy1

0xf44b,	// (0x0001fc43) volume_set_pane_g2_copy1

0xf453,	// (0x0001fc4b) volume_set_pane_g3_copy1

0xf45b,	// (0x0001fc53) volume_set_pane_g4_copy1

0xf463,	// (0x0001fc5b) volume_set_pane_g5_copy1

0xf46b,	// (0x0001fc63) volume_set_pane_g6_copy1

0xf473,	// (0x0001fc6b) volume_set_pane_g7_copy1

0xf47b,	// (0x0001fc73) volume_set_pane_g8_copy1

0xf483,	// (0x0001fc7b) volume_set_pane_g9_copy1

0x08c6,	// (0x000110be) bg_set_opt_pane_cp_copy1_ParamLimits

0x08c6,	// (0x000110be) bg_set_opt_pane_cp_copy1

0x9f66,	// (0x0001a75e) setting_slider_pane_t1_copy1_ParamLimits

0x9f66,	// (0x0001a75e) setting_slider_pane_t1_copy1

0xf48b,	// (0x0001fc83) setting_slider_pane_t2_copy1_ParamLimits

0xf48b,	// (0x0001fc83) setting_slider_pane_t2_copy1

0xf4a5,	// (0x0001fc9d) setting_slider_pane_t3_copy1_ParamLimits

0xf4a5,	// (0x0001fc9d) setting_slider_pane_t3_copy1

0xf4bd,	// (0x0001fcb5) slider_set_pane_copy1_ParamLimits

0xf4bd,	// (0x0001fcb5) slider_set_pane_copy1

0x17e5,	// (0x00011fdd) set_opt_bg_pane_g1_copy2

0x17ed,	// (0x00011fe5) set_opt_bg_pane_g2_copy2

0x9f84,	// (0x0001a77c) set_opt_bg_pane_g3_copy2

0x17fd,	// (0x00011ff5) set_opt_bg_pane_g4_copy2

0x1805,	// (0x00011ffd) set_opt_bg_pane_g5_copy2

0x180d,	// (0x00012005) set_opt_bg_pane_g6_copy2

0xf4d3,	// (0x0001fccb) set_opt_bg_pane_g7_copy2

0x9f8e,	// (0x0001a786) set_opt_bg_pane_g8_copy2

0x9f98,	// (0x0001a790) set_opt_bg_pane_g9_copy2

0xf4db,	// (0x0001fcd3) aid_size_touch_slider_mark_copy1_ParamLimits

0xf4db,	// (0x0001fcd3) aid_size_touch_slider_mark_copy1

0x9fa2,	// (0x0001a79a) slider_set_pane_g1_copy1

0xf4ef,	// (0x0001fce7) slider_set_pane_g2_copy1

0xe33a,	// (0x0001eb32) slider_set_pane_g3_copy1_ParamLimits

0xe33a,	// (0x0001eb32) slider_set_pane_g3_copy1

0xe34e,	// (0x0001eb46) slider_set_pane_g4_copy1_ParamLimits

0xe34e,	// (0x0001eb46) slider_set_pane_g4_copy1

0xe366,	// (0x0001eb5e) slider_set_pane_g5_copy1_ParamLimits

0xe366,	// (0x0001eb5e) slider_set_pane_g5_copy1

0xe33a,	// (0x0001eb32) slider_set_pane_g6_copy1_ParamLimits

0xe33a,	// (0x0001eb32) slider_set_pane_g6_copy1

0xf4f7,	// (0x0001fcef) slider_set_pane_g7_copy1_ParamLimits

0xf4f7,	// (0x0001fcef) slider_set_pane_g7_copy1

0x07e6,	// (0x00010fde) bg_set_opt_pane_cp2_copy1

0x9fab,	// (0x0001a7a3) setting_slider_graphic_pane_g1_copy1

0xf50d,	// (0x0001fd05) setting_slider_graphic_pane_t1_copy1

0xf51d,	// (0x0001fd15) setting_slider_graphic_pane_t2_copy1

0xf52d,	// (0x0001fd25) slider_set_pane_cp_copy1

0x9fbc,	// (0x0001a7b4) input_focus_pane_cp1_copy1

0x9fc5,	// (0x0001a7bd) list_set_text_pane_copy1

0x9fcd,	// (0x0001a7c5) setting_text_pane_g1_copy1

0xc5d9,	// (0x0001cdd1) set_text_pane_t1_copy1

0x9fbc,	// (0x0001a7b4) input_focus_pane_cp2_copy1

0x9fcd,	// (0x0001a7c5) setting_code_pane_g1_copy1

0xf535,	// (0x0001fd2d) setting_code_pane_t1_copy1

0xf543,	// (0x0001fd3b) list_set_graphic_pane_copy1

0x07e6,	// (0x00010fde) bg_set_opt_pane_cp4_copy1

0x2225,	// (0x00012a1d) list_set_graphic_pane_g1_copy1_ParamLimits

0x2225,	// (0x00012a1d) list_set_graphic_pane_g1_copy1

0xf555,	// (0x0001fd4d) list_set_graphic_pane_g2_copy1

0x223d,	// (0x00012a35) list_set_graphic_pane_t1_copy1_ParamLimits

0x223d,	// (0x00012a35) list_set_graphic_pane_t1_copy1

0x5d64,	// (0x0001655c) rs_clock_indi_pane_g1

0x9fd6,	// (0x0001a7ce) rs_clock_indi_pane_t1

0x9fe4,	// (0x0001a7dc) rs_indi_pane

0x9fec,	// (0x0001a7e4) rs_indi_pane_g1

0x9ff5,	// (0x0001a7ed) rs_indi_pane_g2

0x9ffe,	// (0x0001a7f6) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x000206c3) rs_indi_pane_g

0x251f,	// (0x00012d17) bg_popup_preview_window_pane_cp03

0xa007,	// (0x0001a7ff) popup_fep_tooltip_window_t1

0x6bc7,	// (0x000173bf) popup_note2_window_g2_ParamLimits

0x6bc7,	// (0x000173bf) popup_note2_window_g2

0x0001,

0xfc64,	// (0x0002045c) popup_note2_window_g_ParamLimits

0xfc64,	// (0x0002045c) popup_note2_window_g

0x71b1,	// (0x000179a9) bg_popup_sub_pane_cp11_ParamLimits

0x71be,	// (0x000179b6) cell_ai3_links_pane_g1_ParamLimits

0x71d5,	// (0x000179cd) cell_ai3_links_pane_t1

0xc5d9,	// (0x0001cdd1) set_text_pane_t1_copy1_ParamLimits

0x2430,	// (0x00012c28) cell_graphic_popup_pane_cp2_ParamLimits

0x2430,	// (0x00012c28) cell_graphic_popup_pane_cp2

0xa015,	// (0x0001a80d) cell_graphic_popup_pane_g1_cp2

0x0e97,	// (0x0001168f) cell_graphic_popup_pane_g2_cp2

0xa01d,	// (0x0001a815) cell_graphic_popup_pane_g3_cp2

0xa025,	// (0x0001a81d) cell_graphic_popup_pane_t2_cp2

0x0ea8,	// (0x000116a0) grid_highlight_pane_cp3_cp2

0x1bd6,	// (0x000123ce) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x16ad,	// (0x00011ea5) main_tmo_pane_ParamLimits

0x756c,	// (0x00017d64) popup_tmo_big_image_note_window

0x98e1,	// (0x0001a0d9) cell_ai5_widget_list_pane

0x98e9,	// (0x0001a0e1) cell_ai5_widget_lrg_icon_pane

0xf274,	// (0x0001fa6c) tmo_note_info_pane_t1_ParamLimits

0xf289,	// (0x0001fa81) tmo_note_info_pane_t2_ParamLimits

0xf29e,	// (0x0001fa96) tmo_note_info_pane_t3_ParamLimits

0x9e6b,	// (0x0001a663) tmo_note_info_pane_t4_ParamLimits

0x9e7d,	// (0x0001a675) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x000206b1) tmo_note_info_pane_t_ParamLimits

0xf318,	// (0x0001fb10) settings_container_pane_ParamLimits

0x9fb4,	// (0x0001a7ac) indicator_popup_pane_cp5

0x9fb4,	// (0x0001a7ac) indicator_popup_pane_cp6

0xf543,	// (0x0001fd3b) list_set_graphic_pane_copy1_ParamLimits

0x07d2,	// (0x00010fca) bg_popup_window_pane_cp23

0xa033,	// (0x0001a82b) popup_tmo_big_image_note_window_g1

0xa03d,	// (0x0001a835) popup_tmo_big_image_note_window_t1

0xa04d,	// (0x0001a845) popup_tmo_big_image_note_window_t2

0xa05d,	// (0x0001a855) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x000206ca) popup_tmo_big_image_note_window_t

0xa06d,	// (0x0001a865) cell_ai5_widget_lrg_icon_pane_g1

0xa075,	// (0x0001a86d) cell_ai5_widget_lrg_icon_pane_t1

0xa083,	// (0x0001a87b) cell_ai5_widget_list_row_pane_ParamLimits

0xa083,	// (0x0001a87b) cell_ai5_widget_list_row_pane

0xa09c,	// (0x0001a894) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa09c,	// (0x0001a894) cell_ai5_widget_list_row_pane_g1

0xa0a9,	// (0x0001a8a1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa0a9,	// (0x0001a8a1) cell_ai5_widget_list_row_pane_t1

0xa0c1,	// (0x0001a8b9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa0c1,	// (0x0001a8b9) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfed9,	// (0x000206d1) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x000206d1) cell_ai5_widget_list_row_pane_t

0x07d2,	// (0x00010fca) main_fep_vtchi_ss_pane

0xa0d3,	// (0x0001a8cb) popup_fep_char_pre_window

0xa0db,	// (0x0001a8d3) popup_fep_ituss_window

0xa0f5,	// (0x0001a8ed) popup_fep_vkbss_window

0xa113,	// (0x0001a90b) grid_vkbss_keypad_pane_ParamLimits

0xa113,	// (0x0001a90b) grid_vkbss_keypad_pane

0xa123,	// (0x0001a91b) ituss_keypad_pane

0xa139,	// (0x0001a931) aid_vkbss_key_offset_ParamLimits

0xa139,	// (0x0001a931) aid_vkbss_key_offset

0xa145,	// (0x0001a93d) cell_vkbss_key_pane_ParamLimits

0xa145,	// (0x0001a93d) cell_vkbss_key_pane

0xa15b,	// (0x0001a953) bg_cell_vkbss_key_g1_ParamLimits

0xa15b,	// (0x0001a953) bg_cell_vkbss_key_g1

0xa167,	// (0x0001a95f) cell_vkbss_key_3p_pane_ParamLimits

0xa167,	// (0x0001a95f) cell_vkbss_key_3p_pane

0xa181,	// (0x0001a979) cell_vkbss_key_g1_ParamLimits

0xa181,	// (0x0001a979) cell_vkbss_key_g1

0xa19b,	// (0x0001a993) cell_vkbss_key_t1_ParamLimits

0xa19b,	// (0x0001a993) cell_vkbss_key_t1

0xa1c6,	// (0x0001a9be) cell_ituss_key_pane_ParamLimits

0xa1c6,	// (0x0001a9be) cell_ituss_key_pane

0xa1d6,	// (0x0001a9ce) bg_cell_ituss_key_g1_ParamLimits

0xa1d6,	// (0x0001a9ce) bg_cell_ituss_key_g1

0xa1e2,	// (0x0001a9da) cell_ituss_key_pane_g1_ParamLimits

0xa1e2,	// (0x0001a9da) cell_ituss_key_pane_g1

0xa1ee,	// (0x0001a9e6) cell_ituss_key_pane_g2_ParamLimits

0xa1ee,	// (0x0001a9e6) cell_ituss_key_pane_g2

0x0001,

0xfede,	// (0x000206d6) cell_ituss_key_pane_g_ParamLimits

0xfede,	// (0x000206d6) cell_ituss_key_pane_g

0xa207,	// (0x0001a9ff) cell_ituss_key_t1_ParamLimits

0xa207,	// (0x0001a9ff) cell_ituss_key_t1

0xa235,	// (0x0001aa2d) cell_ituss_key_t2_ParamLimits

0xa235,	// (0x0001aa2d) cell_ituss_key_t2

0xa266,	// (0x0001aa5e) cell_ituss_key_t3_ParamLimits

0xa266,	// (0x0001aa5e) cell_ituss_key_t3

0xa297,	// (0x0001aa8f) cell_ituss_key_t4_ParamLimits

0xa297,	// (0x0001aa8f) cell_ituss_key_t4

0x0003,

0xfee3,	// (0x000206db) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x000206db) cell_ituss_key_t

0xa2c8,	// (0x0001aac0) cell_vkbss_key_3p_pane_g1

0xa2d0,	// (0x0001aac8) cell_vkbss_key_3p_pane_g2

0xa2d8,	// (0x0001aad0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x000206e4) cell_vkbss_key_3p_pane_g

0x07d2,	// (0x00010fca) bg_popup_fep_char_preview_window_cp02

0xa2e0,	// (0x0001aad8) popup_fep_char_pre_window_t1

0xf150,	// (0x0001f948) main_ai5_sk_pane

0x9ef7,	// (0x0001a6ef) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9f03,	// (0x0001a6fb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9f17,	// (0x0001a70f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9f26,	// (0x0001a71e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x000206bc) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9f39,	// (0x0001a731) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x16ad,	// (0x00011ea5) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf55d,	// (0x0001fd55) main_ai5_sk_pane_g1

0x38e7,	// (0x000140df) popup_query_code_window_g1

0xa0ea,	// (0x0001a8e2) popup_fep_vkb_icf_pane

0xa0fe,	// (0x0001a8f6) popup_fep_vtchi_icf_pane

0x16ad,	// (0x00011ea5) bg_icf_pane

0xa123,	// (0x0001a91b) list_vkb_icf_pane

0x16ad,	// (0x00011ea5) bg_icf_pane_cp01

0xa30a,	// (0x0001ab02) vtchi_icf_list_pane

0xa31a,	// (0x0001ab12) list_vkb_icf_pane_t1_ParamLimits

0xa31a,	// (0x0001ab12) list_vkb_icf_pane_t1

0xa331,	// (0x0001ab29) vtchi_icf_list_pane_t1_ParamLimits

0xa331,	// (0x0001ab29) vtchi_icf_list_pane_t1

0xa0db,	// (0x0001a8d3) popup_fep_ituss_window_ParamLimits

0xa0fe,	// (0x0001a8f6) popup_fep_vtchi_icf_pane_ParamLimits

0xa123,	// (0x0001a91b) ituss_keypad_pane_ParamLimits

0xa12f,	// (0x0001a927) ituss_sks_pane

0x16ad,	// (0x00011ea5) bg_icf_pane_ParamLimits

0xa2ef,	// (0x0001aae7) icf_edit_indi_pane_ParamLimits

0xa2ef,	// (0x0001aae7) icf_edit_indi_pane

0xa123,	// (0x0001a91b) list_vkb_icf_pane_ParamLimits

0x16ad,	// (0x00011ea5) bg_icf_pane_cp01_ParamLimits

0xa2fe,	// (0x0001aaf6) icf_edit_indi_pane_cp01_ParamLimits

0xa2fe,	// (0x0001aaf6) icf_edit_indi_pane_cp01

0xa312,	// (0x0001ab0a) vtchi_query_pane

0x5fe2,	// (0x000167da) icf_edit_indi_pane_g1_ParamLimits

0x5fe2,	// (0x000167da) icf_edit_indi_pane_g1

0xa34d,	// (0x0001ab45) icf_edit_indi_pane_g2_ParamLimits

0xa34d,	// (0x0001ab45) icf_edit_indi_pane_g2

0x0001,

0xfef3,	// (0x000206eb) icf_edit_indi_pane_g_ParamLimits

0xfef3,	// (0x000206eb) icf_edit_indi_pane_g

0xa359,	// (0x0001ab51) icf_edit_indi_pane_t1

0xa367,	// (0x0001ab5f) bg_input_focus_pane_cp042

0x107b,	// (0x00011873) vtchi_button_pane

0xa370,	// (0x0001ab68) vtchi_query_pane_t1

0xa37e,	// (0x0001ab76) vtchi_query_pane_t2

0xa38c,	// (0x0001ab84) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x000206f0) vtchi_query_pane_t

0x07d2,	// (0x00010fca) bg_button_pane_cp13

0xa39a,	// (0x0001ab92) vtchi_button_pane_g1

0xa3a2,	// (0x0001ab9a) ituss_sks_pane_g1

0xa3ad,	// (0x0001aba5) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x000206f7) ituss_sks_pane_g

0xa3b5,	// (0x0001abad) ituss_sks_pane_t1

0xa3c3,	// (0x0001abbb) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x000206fc) ituss_sks_pane_t

0x577e,	// (0x00015f76) indicator_nsta_pane_cp_g1

0x5787,	// (0x00015f7f) indicator_nsta_pane_cp_g2

0x578f,	// (0x00015f87) indicator_nsta_pane_cp_g3

0x5797,	// (0x00015f8f) indicator_nsta_pane_cp_g4

0x579f,	// (0x00015f97) indicator_nsta_pane_cp_g5

0x57a7,	// (0x00015f9f) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x000202a6) indicator_nsta_pane_cp_g

0x8247,	// (0x00018a3f) cell_graphic2_pane_t2_ParamLimits

0x8247,	// (0x00018a3f) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x000205b3) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x000205b3) cell_graphic2_pane_t

0x8274,	// (0x00018a6c) cell_graphic2_control_pane_t1

0x1f4c,	// (0x00012744) signal_pane_g3_ParamLimits

0x1f4c,	// (0x00012744) signal_pane_g3

0x1f5b,	// (0x00012753) signal_pane_g4_ParamLimits

0x1f5b,	// (0x00012753) signal_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small

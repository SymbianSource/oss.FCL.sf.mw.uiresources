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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005a1fe };

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
0x9b47,	// (0x00063d45) Screen

0x9b53,	// (0x00063d51) application_window_ParamLimits

0x9b53,	// (0x00063d51) application_window

0x55bb,	// (0x0005f7b9) screen_g1

0x9b8b,	// (0x00063d89) area_bottom_pane_ParamLimits

0x9b8b,	// (0x00063d89) area_bottom_pane

0xe13b,	// (0x00068339) area_top_pane_ParamLimits

0xe13b,	// (0x00068339) area_top_pane

0xe1d9,	// (0x000683d7) main_pane_ParamLimits

0xe1d9,	// (0x000683d7) main_pane

0x55c5,	// (0x0005f7c3) misc_graphics

0xb573,	// (0x00065771) battery_pane_ParamLimits

0xb573,	// (0x00065771) battery_pane

0x2c87,	// (0x0005ce85) bg_status_flat_pane_g8

0x2c8f,	// (0x0005ce8d) bg_status_flat_pane_g9

0x2091,	// (0x0005c28f) context_pane_ParamLimits

0x2091,	// (0x0005c28f) context_pane

0xb6ea,	// (0x000658e8) navi_pane_ParamLimits

0xb6ea,	// (0x000658e8) navi_pane

0xc23f,	// (0x0006643d) signal_pane_ParamLimits

0xc23f,	// (0x0006643d) signal_pane

0x0008,

0xf87f,	// (0x00069a7d) bg_status_flat_pane_g

0xc2cf,	// (0x000664cd) status_pane_g1_ParamLimits

0xc2cf,	// (0x000664cd) status_pane_g1

0xc2e5,	// (0x000664e3) status_pane_g2_ParamLimits

0xc2e5,	// (0x000664e3) status_pane_g2

0x22d2,	// (0x0005c4d0) status_pane_g3_ParamLimits

0x22d2,	// (0x0005c4d0) status_pane_g3

0x0004,

0xf7ab,	// (0x000699a9) status_pane_g_ParamLimits

0xf7ab,	// (0x000699a9) status_pane_g

0xc2f1,	// (0x000664ef) title_pane_ParamLimits

0xc2f1,	// (0x000664ef) title_pane

0xc354,	// (0x00066552) uni_indicator_pane_ParamLimits

0xc354,	// (0x00066552) uni_indicator_pane

0x18b2,	// (0x0005bab0) bg_list_pane_ParamLimits

0x18b2,	// (0x0005bab0) bg_list_pane

0xad93,	// (0x00064f91) find_pane

0xad9b,	// (0x00064f99) listscroll_app_pane_ParamLimits

0xad9b,	// (0x00064f99) listscroll_app_pane

0x18e6,	// (0x0005bae4) listscroll_form_pane

0xadab,	// (0x00064fa9) listscroll_gen_pane_ParamLimits

0xadab,	// (0x00064fa9) listscroll_gen_pane

0x1902,	// (0x0005bb00) listscroll_set_pane

0x39c7,	// (0x0005dbc5) main_idle_act_pane

0xe6a3,	// (0x000688a1) main_idle_trad_pane

0xe6a3,	// (0x000688a1) main_list_empty_pane

0x191c,	// (0x0005bb1a) main_midp_pane

0x1928,	// (0x0005bb26) main_pane_g1_ParamLimits

0x1928,	// (0x0005bb26) main_pane_g1

0xadcd,	// (0x00064fcb) popup_ai_message_window_ParamLimits

0xadcd,	// (0x00064fcb) popup_ai_message_window

0xae6d,	// (0x0006506b) popup_fep_china_uni_window_ParamLimits

0xae6d,	// (0x0006506b) popup_fep_china_uni_window

0x1a4a,	// (0x0005bc48) popup_fep_japan_candidate_window_ParamLimits

0x1a4a,	// (0x0005bc48) popup_fep_japan_candidate_window

0x1a74,	// (0x0005bc72) popup_fep_japan_predictive_window_ParamLimits

0x1a74,	// (0x0005bc72) popup_fep_japan_predictive_window

0xaecd,	// (0x000650cb) popup_find_window

0xaeea,	// (0x000650e8) popup_grid_graphic_window_ParamLimits

0xaeea,	// (0x000650e8) popup_grid_graphic_window

0x1ae5,	// (0x0005bce3) popup_large_graphic_colour_window

0xaf8e,	// (0x0006518c) popup_menu_window_ParamLimits

0xaf8e,	// (0x0006518c) popup_menu_window

0xb17e,	// (0x0006537c) popup_note_image_window

0xb13e,	// (0x0006533c) popup_note_wait_window_ParamLimits

0xb13e,	// (0x0006533c) popup_note_wait_window

0xb196,	// (0x00065394) popup_note_window_ParamLimits

0xb196,	// (0x00065394) popup_note_window

0xb244,	// (0x00065442) popup_query_code_window_ParamLimits

0xb244,	// (0x00065442) popup_query_code_window

0x1d51,	// (0x0005bf4f) popup_query_data_code_window_ParamLimits

0x1d51,	// (0x0005bf4f) popup_query_data_code_window

0xb284,	// (0x00065482) popup_query_data_window_ParamLimits

0xb284,	// (0x00065482) popup_query_data_window

0xb318,	// (0x00065516) popup_query_sat_info_window_ParamLimits

0xb318,	// (0x00065516) popup_query_sat_info_window

0xb3c3,	// (0x000655c1) popup_snote_single_graphic_window_ParamLimits

0xb3c3,	// (0x000655c1) popup_snote_single_graphic_window

0xb3c3,	// (0x000655c1) popup_snote_single_text_window_ParamLimits

0xb3c3,	// (0x000655c1) popup_snote_single_text_window

0x1dec,	// (0x0005bfea) popup_sub_window_general

0x1f32,	// (0x0005c130) popup_window_general_ParamLimits

0x1f32,	// (0x0005c130) popup_window_general

0x1f4b,	// (0x0005c149) power_save_pane

0xac01,	// (0x00064dff) control_pane_g1_ParamLimits

0xac01,	// (0x00064dff) control_pane_g1

0xac2a,	// (0x00064e28) control_pane_g2_ParamLimits

0xac2a,	// (0x00064e28) control_pane_g2

0x02be,	// (0x0005a4bc) control_pane_g3_ParamLimits

0x02be,	// (0x0005a4bc) control_pane_g3

0x0007,

0xf793,	// (0x00069991) control_pane_g_ParamLimits

0xf793,	// (0x00069991) control_pane_g

0xac8c,	// (0x00064e8a) control_pane_t1_ParamLimits

0xac8c,	// (0x00064e8a) control_pane_t1

0xacea,	// (0x00064ee8) control_pane_t2_ParamLimits

0xacea,	// (0x00064ee8) control_pane_t2

0x0002,

0xf7a4,	// (0x000699a2) control_pane_t_ParamLimits

0xf7a4,	// (0x000699a2) control_pane_t

0x0191,	// (0x0005a38f) navi_navi_volume_pane_cp1

0x019a,	// (0x0005a398) status_small_icon_pane

0x01a2,	// (0x0005a3a0) status_small_pane_g1_ParamLimits

0x01a2,	// (0x0005a3a0) status_small_pane_g1

0x01d6,	// (0x0005a3d4) status_small_pane_g2_ParamLimits

0x01d6,	// (0x0005a3d4) status_small_pane_g2

0x01e2,	// (0x0005a3e0) status_small_pane_g3_ParamLimits

0x01e2,	// (0x0005a3e0) status_small_pane_g3

0x01ee,	// (0x0005a3ec) status_small_pane_g4_ParamLimits

0x01ee,	// (0x0005a3ec) status_small_pane_g4

0x01fa,	// (0x0005a3f8) status_small_pane_g5_ParamLimits

0x01fa,	// (0x0005a3f8) status_small_pane_g5

0x0209,	// (0x0005a407) status_small_pane_g6_ParamLimits

0x0209,	// (0x0005a407) status_small_pane_g6

0x0007,

0xf782,	// (0x00069980) status_small_pane_g_ParamLimits

0xf782,	// (0x00069980) status_small_pane_g

0x0239,	// (0x0005a437) status_small_pane_t1

0x025c,	// (0x0005a45a) status_small_wait_pane_ParamLimits

0x025c,	// (0x0005a45a) status_small_wait_pane

0xa946,	// (0x00064b44) aid_levels_signal_ParamLimits

0xa946,	// (0x00064b44) aid_levels_signal

0xa95e,	// (0x00064b5c) signal_pane_g1_ParamLimits

0xa95e,	// (0x00064b5c) signal_pane_g1

0xa979,	// (0x00064b77) signal_pane_g2_ParamLimits

0xa979,	// (0x00064b77) signal_pane_g2

0x0003,

0xf713,	// (0x00069911) signal_pane_g_ParamLimits

0xf713,	// (0x00069911) signal_pane_g

0xc0c6,	// (0x000662c4) context_pane_g1

0x9d77,	// (0x00063f75) title_pane_g1

0x9da2,	// (0x00063fa0) title_pane_t1

0x55e7,	// (0x0005f7e5) title_pane_t2

0x560d,	// (0x0005f80b) title_pane_t3

0x0002,

0xf55d,	// (0x0006975b) title_pane_t

0xc37c,	// (0x0006657a) aid_levels_battery_ParamLimits

0xc37c,	// (0x0006657a) aid_levels_battery

0xc398,	// (0x00066596) battery_pane_g1_ParamLimits

0xc398,	// (0x00066596) battery_pane_g1

0xc3b5,	// (0x000665b3) battery_pane_g2_ParamLimits

0xc3b5,	// (0x000665b3) battery_pane_g2

0x0001,

0xf7b6,	// (0x000699b4) battery_pane_g_ParamLimits

0xf7b6,	// (0x000699b4) battery_pane_g

0xc66b,	// (0x00066869) uni_indicator_pane_g1

0xc682,	// (0x00066880) uni_indicator_pane_g2

0xc698,	// (0x00066896) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x00069b25) uni_indicator_pane_g

0xe545,	// (0x00068743) navi_icon_pane_ParamLimits

0xe545,	// (0x00068743) navi_icon_pane

0xe4c9,	// (0x000686c7) navi_midp_pane

0xe561,	// (0x0006875f) navi_navi_pane

0xe56b,	// (0x00068769) navi_text_pane_ParamLimits

0xe56b,	// (0x00068769) navi_text_pane

0x55bb,	// (0x0005f7b9) status_small_wait_pane_g1

0x8960,	// (0x00062b5e) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x00069b20) status_small_wait_pane_g

0xc5d2,	// (0x000667d0) navi_navi_icon_text_pane

0xc5da,	// (0x000667d8) navi_navi_pane_g1_ParamLimits

0xc5da,	// (0x000667d8) navi_navi_pane_g1

0xc5ec,	// (0x000667ea) navi_navi_pane_g2_ParamLimits

0xc5ec,	// (0x000667ea) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x00069aee) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x00069aee) navi_navi_pane_g

0x3310,	// (0x0005d50e) navi_navi_tabs_pane

0xc5fe,	// (0x000667fc) navi_navi_text_pane

0xc5d2,	// (0x000667d0) navi_navi_volume_pane

0xc5c0,	// (0x000667be) navi_text_pane_t1

0xc5b4,	// (0x000667b2) navi_icon_pane_g1

0x3207,	// (0x0005d405) navi_navi_text_pane_t1

0xb94c,	// (0x00065b4a) navi_navi_volume_pane_g1

0xb954,	// (0x00065b52) volume_small_pane

0xc4fc,	// (0x000666fa) navi_navi_icon_text_pane_g1

0xc504,	// (0x00066702) navi_navi_icon_text_pane_t1

0xe561,	// (0x0006875f) navi_tabs_2_long_pane

0xe561,	// (0x0006875f) navi_tabs_2_pane

0xe561,	// (0x0006875f) navi_tabs_3_long_pane

0xe561,	// (0x0006875f) navi_tabs_3_pane

0xe561,	// (0x0006875f) navi_tabs_4_pane

0xb92c,	// (0x00065b2a) tabs_2_active_pane_ParamLimits

0xb92c,	// (0x00065b2a) tabs_2_active_pane

0xb93c,	// (0x00065b3a) tabs_2_passive_pane_ParamLimits

0xb93c,	// (0x00065b3a) tabs_2_passive_pane

0xb8fa,	// (0x00065af8) tabs_3_active_pane_ParamLimits

0xb8fa,	// (0x00065af8) tabs_3_active_pane

0xb90a,	// (0x00065b08) tabs_3_passive_pane_ParamLimits

0xb90a,	// (0x00065b08) tabs_3_passive_pane

0xb91b,	// (0x00065b19) tabs_3_passive_pane_cp_ParamLimits

0xb91b,	// (0x00065b19) tabs_3_passive_pane_cp

0xb8b6,	// (0x00065ab4) tabs_4_active_pane_ParamLimits

0xb8b6,	// (0x00065ab4) tabs_4_active_pane

0xb8c7,	// (0x00065ac5) tabs_4_passive_pane_ParamLimits

0xb8c7,	// (0x00065ac5) tabs_4_passive_pane

0xb8d8,	// (0x00065ad6) tabs_4_passive_pane_cp_ParamLimits

0xb8d8,	// (0x00065ad6) tabs_4_passive_pane_cp

0xb8e9,	// (0x00065ae7) tabs_4_passive_pane_cp2_ParamLimits

0xb8e9,	// (0x00065ae7) tabs_4_passive_pane_cp2

0xb892,	// (0x00065a90) tabs_2_long_active_pane_ParamLimits

0xb892,	// (0x00065a90) tabs_2_long_active_pane

0xb8a4,	// (0x00065aa2) tabs_2_long_passive_pane_ParamLimits

0xb8a4,	// (0x00065aa2) tabs_2_long_passive_pane

0xb847,	// (0x00065a45) tabs_3_long_active_pane_ParamLimits

0xb847,	// (0x00065a45) tabs_3_long_active_pane

0xb860,	// (0x00065a5e) tabs_3_long_passive_pane_ParamLimits

0xb860,	// (0x00065a5e) tabs_3_long_passive_pane

0xb879,	// (0x00065a77) tabs_3_long_passive_pane_cp_ParamLimits

0xb879,	// (0x00065a77) tabs_3_long_passive_pane_cp

0x057b,	// (0x0005a779) volume_small_pane_g1

0xb7f6,	// (0x000659f4) volume_small_pane_g2

0xb7ff,	// (0x000659fd) volume_small_pane_g3

0xb808,	// (0x00065a06) volume_small_pane_g4

0xb811,	// (0x00065a0f) volume_small_pane_g5

0xb81a,	// (0x00065a18) volume_small_pane_g6

0xb823,	// (0x00065a21) volume_small_pane_g7

0xb82c,	// (0x00065a2a) volume_small_pane_g8

0xb835,	// (0x00065a33) volume_small_pane_g9

0xb83e,	// (0x00065a3c) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x00069aba) volume_small_pane_g

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp2_ParamLimits

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp2

0x9e2e,	// (0x0006402c) tabs_3_active_pane_g1

0x9e36,	// (0x00064034) tabs_3_active_pane_t1

0x568c,	// (0x0005f88a) bg_passive_tab_pane_cp2_ParamLimits

0x568c,	// (0x0005f88a) bg_passive_tab_pane_cp2

0x9e2e,	// (0x0006402c) tabs_3_passive_pane_g1

0x9e36,	// (0x00064034) tabs_3_passive_pane_t1

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp3_ParamLimits

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp3

0x9e48,	// (0x00064046) tabs_4_active_pane_g1

0x9e50,	// (0x0006404e) tabs_4_active_pane_t1

0x568c,	// (0x0005f88a) bg_passive_tab_pane_cp3_ParamLimits

0x568c,	// (0x0005f88a) bg_passive_tab_pane_cp3

0x9e48,	// (0x00064046) tabs_4_1_passive_pane_g1

0x9e50,	// (0x0006404e) tabs_4_1_passive_pane_t1

0x191c,	// (0x0005bb1a) list_highlight_pane_cp2

0xc72d,	// (0x0006692b) list_set_pane_ParamLimits

0xc72d,	// (0x0006692b) list_set_pane

0xc7f5,	// (0x000669f3) main_pane_set_t1_ParamLimits

0xc7f5,	// (0x000669f3) main_pane_set_t1

0xc815,	// (0x00066a13) main_pane_set_t2_ParamLimits

0xc815,	// (0x00066a13) main_pane_set_t2

0xc829,	// (0x00066a27) main_pane_set_t3_ParamLimits

0xc829,	// (0x00066a27) main_pane_set_t3

0xc83d,	// (0x00066a3b) main_pane_set_t4_ParamLimits

0xc83d,	// (0x00066a3b) main_pane_set_t4

0x0003,

0xf98c,	// (0x00069b8a) main_pane_set_t_ParamLimits

0xf98c,	// (0x00069b8a) main_pane_set_t

0xc851,	// (0x00066a4f) setting_code_pane

0x3b1b,	// (0x0005dd19) setting_slider_graphic_pane

0x3b1b,	// (0x0005dd19) setting_slider_pane

0x3b1b,	// (0x0005dd19) setting_text_pane

0x3b1b,	// (0x0005dd19) setting_volume_pane

0xf0e3,	// (0x000692e1) volume_set_pane

0x561f,	// (0x0005f81d) bg_set_opt_pane_cp

0xf0ed,	// (0x000692eb) setting_slider_pane_t1

0xf106,	// (0x00069304) setting_slider_pane_t2

0xf120,	// (0x0006931e) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00069762) setting_slider_pane_t

0xf138,	// (0x00069336) slider_set_pane

0x55c5,	// (0x0005f7c3) bg_set_opt_pane_cp2

0x562d,	// (0x0005f82b) setting_slider_graphic_pane_g1

0xf14e,	// (0x0006934c) setting_slider_graphic_pane_t1

0xf15e,	// (0x0006935c) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00069769) setting_slider_graphic_pane_t

0xf16e,	// (0x0006936c) slider_set_pane_cp

0x55c5,	// (0x0005f7c3) input_focus_pane_cp1

0x39ae,	// (0x0005dbac) list_set_text_pane

0x55bb,	// (0x0005f7b9) setting_text_pane_g1

0x55c5,	// (0x0005f7c3) input_focus_pane_cp2

0x55bb,	// (0x0005f7b9) setting_code_pane_g1

0x5636,	// (0x0005f834) setting_code_pane_t1

0xe294,	// (0x00068492) set_text_pane_t1_ParamLimits

0xe294,	// (0x00068492) set_text_pane_t1

0x8cf5,	// (0x00062ef3) set_opt_bg_pane_g1

0x8cfd,	// (0x00062efb) set_opt_bg_pane_g2

0x3986,	// (0x0005db84) set_opt_bg_pane_g3

0x8d0d,	// (0x00062f0b) set_opt_bg_pane_g4

0x8d15,	// (0x00062f13) set_opt_bg_pane_g5

0x8d1d,	// (0x00062f1b) set_opt_bg_pane_g6

0x3990,	// (0x0005db8e) set_opt_bg_pane_g7

0x399a,	// (0x0005db98) set_opt_bg_pane_g8

0x39a4,	// (0x0005dba2) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x00069b77) set_opt_bg_pane_g

0x3979,	// (0x0005db77) slider_set_pane_g1

0x0787,	// (0x0005a985) slider_set_pane_g2

0x0006,

0xf96a,	// (0x00069b68) slider_set_pane_g

0x06e7,	// (0x0005a8e5) volume_set_pane_g1

0x06f1,	// (0x0005a8ef) volume_set_pane_g2

0x06fb,	// (0x0005a8f9) volume_set_pane_g3

0x0705,	// (0x0005a903) volume_set_pane_g4

0x070f,	// (0x0005a90d) volume_set_pane_g5

0x0719,	// (0x0005a917) volume_set_pane_g6

0x0723,	// (0x0005a921) volume_set_pane_g7

0x072d,	// (0x0005a92b) volume_set_pane_g8

0x0737,	// (0x0005a935) volume_set_pane_g9

0x0741,	// (0x0005a93f) volume_set_pane_g10

0x0009,

0xf942,	// (0x00069b40) volume_set_pane_g

0x9e62,	// (0x00064060) indicator_pane_ParamLimits

0x9e62,	// (0x00064060) indicator_pane

0x9e8e,	// (0x0006408c) main_idle_pane_g2_ParamLimits

0x9e8e,	// (0x0006408c) main_idle_pane_g2

0x9ec6,	// (0x000640c4) main_pane_idle_g1_ParamLimits

0x9ec6,	// (0x000640c4) main_pane_idle_g1

0x5644,	// (0x0005f842) popup_clock_digital_analogue_window_ParamLimits

0x5644,	// (0x0005f842) popup_clock_digital_analogue_window

0x9ef4,	// (0x000640f2) soft_indicator_pane_ParamLimits

0x9ef4,	// (0x000640f2) soft_indicator_pane

0x9f10,	// (0x0006410e) wallpaper_pane_ParamLimits

0x9f10,	// (0x0006410e) wallpaper_pane

0x55bb,	// (0x0005f7b9) wallpaper_pane_g1

0x9f22,	// (0x00064120) indicator_pane_g1_ParamLimits

0x9f22,	// (0x00064120) indicator_pane_g1

0x3dd5,	// (0x0005dfd3) navi_navi_icon_text_pane_srt_g1

0x5672,	// (0x0005f870) soft_indicator_pane_t1

0x86f2,	// (0x000628f0) aid_ps_area_pane

0x9f3b,	// (0x00064139) aid_ps_clock_pane

0x8703,	// (0x00062901) aid_ps_indicator_pane

0x870f,	// (0x0006290d) indicator_ps_pane_ParamLimits

0x870f,	// (0x0006290d) indicator_ps_pane

0x871e,	// (0x0006291c) power_save_pane_g1_ParamLimits

0x871e,	// (0x0006291c) power_save_pane_g1

0x872a,	// (0x00062928) power_save_pane_g2_ParamLimits

0x872a,	// (0x00062928) power_save_pane_g2

0xe11b,	// (0x00068319) aid_navinavi_width_pane

0x86f2,	// (0x000628f0) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0006976e) power_save_pane_g_ParamLimits

0xf570,	// (0x0006976e) power_save_pane_g

0x8738,	// (0x00062936) power_save_pane_t1_ParamLimits

0x8738,	// (0x00062936) power_save_pane_t1

0x9f3b,	// (0x00064139) aid_ps_clock_pane_ParamLimits

0x8703,	// (0x00062901) aid_ps_indicator_pane_ParamLimits

0x874a,	// (0x00062948) power_save_pane_t4_ParamLimits

0x874a,	// (0x00062948) power_save_pane_t4

0x0001,

0xf575,	// (0x00069773) power_save_pane_t_ParamLimits

0xf575,	// (0x00069773) power_save_pane_t

0x8774,	// (0x00062972) power_save_t3_ParamLimits

0x8774,	// (0x00062972) power_save_t3

0x875f,	// (0x0006295d) power_save_t2_ParamLimits

0x875f,	// (0x0006295d) power_save_t2

0x8789,	// (0x00062987) indicator_ps_pane_g1

0x9f49,	// (0x00064147) ai_gene_pane_ParamLimits

0x9f49,	// (0x00064147) ai_gene_pane

0x9f60,	// (0x0006415e) ai_links_pane_ParamLimits

0x9f60,	// (0x0006415e) ai_links_pane

0x9f78,	// (0x00064176) indicator_pane_cp1_ParamLimits

0x9f78,	// (0x00064176) indicator_pane_cp1

0x9f87,	// (0x00064185) main_pane_idle_g1_cp_ParamLimits

0x9f87,	// (0x00064185) main_pane_idle_g1_cp

0x8792,	// (0x00062990) popup_ai_links_title_window

0x9f9f,	// (0x0006419d) soft_indicator_pane_cp1_ParamLimits

0x9f9f,	// (0x0006419d) soft_indicator_pane_cp1

0x375f,	// (0x0005d95d) ai_links_pane_g1

0x3768,	// (0x0005d966) grid_ai_links_pane

0xc662,	// (0x00066860) ai_gene_pane_1

0x374d,	// (0x0005d94b) ai_gene_pane_2

0x3756,	// (0x0005d954) list_highlight_pane_cp4

0xc63e,	// (0x0006683c) cell_ai_link_pane_ParamLimits

0xc63e,	// (0x0006683c) cell_ai_link_pane

0x371c,	// (0x0005d91a) cell_ai_link_pane_g1

0x8960,	// (0x00062b5e) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x00069b1b) cell_ai_link_pane_g

0x55c5,	// (0x0005f7c3) grid_highlight_cp2

0x55c5,	// (0x0005f7c3) bg_popup_sub_pane_cp1

0x87a9,	// (0x000629a7) popup_ai_links_title_window_t1

0x34c8,	// (0x0005d6c6) ai_gene_pane_1_g1_ParamLimits

0x34c8,	// (0x0005d6c6) ai_gene_pane_1_g1

0x34d4,	// (0x0005d6d2) ai_gene_pane_1_g2_ParamLimits

0x34d4,	// (0x0005d6d2) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x00069b11) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x00069b11) ai_gene_pane_1_g

0x34e1,	// (0x0005d6df) ai_gene_pane_1_t1_ParamLimits

0x34e1,	// (0x0005d6df) ai_gene_pane_1_t1

0x3515,	// (0x0005d713) grid_ai_soft_ind_pane

0x34b3,	// (0x0005d6b1) ai_gene_pane_2_t1_ParamLimits

0x34b3,	// (0x0005d6b1) ai_gene_pane_2_t1

0x9fb3,	// (0x000641b1) main_pane_empty_t1_ParamLimits

0x9fb3,	// (0x000641b1) main_pane_empty_t1

0x9fcb,	// (0x000641c9) main_pane_empty_t2_ParamLimits

0x9fcb,	// (0x000641c9) main_pane_empty_t2

0x9fe0,	// (0x000641de) main_pane_empty_t3_ParamLimits

0x9fe0,	// (0x000641de) main_pane_empty_t3

0x9ff2,	// (0x000641f0) main_pane_empty_t4_ParamLimits

0x9ff2,	// (0x000641f0) main_pane_empty_t4

0xa004,	// (0x00064202) main_pane_empty_t5_ParamLimits

0xa004,	// (0x00064202) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00069778) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00069778) main_pane_empty_t

0x8d46,	// (0x00062f44) bg_popup_window_pane_ParamLimits

0x8d46,	// (0x00062f44) bg_popup_window_pane

0x3215,	// (0x0005d413) find_popup_pane_cp2_ParamLimits

0x3215,	// (0x0005d413) find_popup_pane_cp2

0x3221,	// (0x0005d41f) heading_pane_ParamLimits

0x3221,	// (0x0005d41f) heading_pane

0x55c5,	// (0x0005f7c3) bg_popup_sub_pane

0xc521,	// (0x0006671f) bg_popup_window_pane_g1_ParamLimits

0xc521,	// (0x0006671f) bg_popup_window_pane_g1

0xc530,	// (0x0006672e) bg_popup_window_pane_g2_ParamLimits

0xc530,	// (0x0006672e) bg_popup_window_pane_g2

0xc53c,	// (0x0006673a) bg_popup_window_pane_g3_ParamLimits

0xc53c,	// (0x0006673a) bg_popup_window_pane_g3

0xc548,	// (0x00066746) bg_popup_window_pane_g4_ParamLimits

0xc548,	// (0x00066746) bg_popup_window_pane_g4

0xc557,	// (0x00066755) bg_popup_window_pane_g5_ParamLimits

0xc557,	// (0x00066755) bg_popup_window_pane_g5

0xc567,	// (0x00066765) bg_popup_window_pane_g6_ParamLimits

0xc567,	// (0x00066765) bg_popup_window_pane_g6

0xc573,	// (0x00066771) bg_popup_window_pane_g7_ParamLimits

0xc573,	// (0x00066771) bg_popup_window_pane_g7

0xc582,	// (0x00066780) bg_popup_window_pane_g8_ParamLimits

0xc582,	// (0x00066780) bg_popup_window_pane_g8

0xc591,	// (0x0006678f) bg_popup_window_pane_g9_ParamLimits

0xc591,	// (0x0006678f) bg_popup_window_pane_g9

0x31fb,	// (0x0005d3f9) bg_popup_window_pane_g10_ParamLimits

0x31fb,	// (0x0005d3f9) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x00069ad9) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x00069ad9) bg_popup_window_pane_g

0x3124,	// (0x0005d322) bg_popup_heading_pane_ParamLimits

0x3124,	// (0x0005d322) bg_popup_heading_pane

0x085b,	// (0x0005aa59) tabs_4_passive_pane_cp_srt_ParamLimits

0x085b,	// (0x0005aa59) tabs_4_passive_pane_cp_srt

0x086d,	// (0x0005aa6b) tabs_4_passive_pane_srt_ParamLimits

0x3138,	// (0x0005d336) heading_pane_g2

0x086d,	// (0x0005aa6b) tabs_4_passive_pane_srt

0x24d1,	// (0x0005c6cf) bg_passive_tab_pane_cp3_srt_ParamLimits

0x24d1,	// (0x0005c6cf) bg_passive_tab_pane_cp3_srt

0x3140,	// (0x0005d33e) heading_pane_t1_ParamLimits

0x3140,	// (0x0005d33e) heading_pane_t1

0x3157,	// (0x0005d355) heading_pane_t2_ParamLimits

0x3157,	// (0x0005d355) heading_pane_t2

0x0001,

0xf8d6,	// (0x00069ad4) heading_pane_t_ParamLimits

0xf8d6,	// (0x00069ad4) heading_pane_t

0x2c4f,	// (0x0005ce4d) bg_popup_heading_pane_g1

0x2cfe,	// (0x0005cefc) bg_popup_heading_pane_g2

0x2d08,	// (0x0005cf06) bg_popup_heading_pane_g3

0x2d12,	// (0x0005cf10) bg_popup_heading_pane_g4

0x2d1c,	// (0x0005cf1a) bg_popup_heading_pane_g5

0x2d26,	// (0x0005cf24) bg_popup_heading_pane_g6

0x2d2e,	// (0x0005cf2c) bg_popup_heading_pane_g7

0x2d36,	// (0x0005cf34) bg_popup_heading_pane_g8

0x2d40,	// (0x0005cf3e) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x00069a90) bg_popup_heading_pane_g

0x245d,	// (0x0005c65b) bg_popup_sub_pane_g1

0x246d,	// (0x0005c66b) bg_popup_sub_pane_g2

0x2465,	// (0x0005c663) bg_popup_sub_pane_g3

0x247d,	// (0x0005c67b) bg_popup_sub_pane_g4

0x2475,	// (0x0005c673) bg_popup_sub_pane_g5

0x2485,	// (0x0005c683) bg_popup_sub_pane_g6

0x248d,	// (0x0005c68b) bg_popup_sub_pane_g7

0x249d,	// (0x0005c69b) bg_popup_sub_pane_g8

0x2495,	// (0x0005c693) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x00069a6a) bg_popup_sub_pane_g

0x568c,	// (0x0005f88a) bg_popup_window_pane_cp5_ParamLimits

0x568c,	// (0x0005f88a) bg_popup_window_pane_cp5

0x87c6,	// (0x000629c4) popup_note_window_g1_ParamLimits

0x87c6,	// (0x000629c4) popup_note_window_g1

0x87d2,	// (0x000629d0) popup_note_window_t1_ParamLimits

0x87d2,	// (0x000629d0) popup_note_window_t1

0x87e8,	// (0x000629e6) popup_note_window_t2_ParamLimits

0x87e8,	// (0x000629e6) popup_note_window_t2

0x87fe,	// (0x000629fc) popup_note_window_t3_ParamLimits

0x87fe,	// (0x000629fc) popup_note_window_t3

0x8814,	// (0x00062a12) popup_note_window_t4_ParamLimits

0x8814,	// (0x00062a12) popup_note_window_t4

0x883c,	// (0x00062a3a) popup_note_window_t5_ParamLimits

0x883c,	// (0x00062a3a) popup_note_window_t5

0x0004,

0xf585,	// (0x00069783) popup_note_window_t_ParamLimits

0xf585,	// (0x00069783) popup_note_window_t

0x8860,	// (0x00062a5e) bg_popup_window_pane_cp6_ParamLimits

0x8860,	// (0x00062a5e) bg_popup_window_pane_cp6

0x2bcb,	// (0x0005cdc9) popup_note_image_window_g1_ParamLimits

0x2bcb,	// (0x0005cdc9) popup_note_image_window_g1

0x2bd7,	// (0x0005cdd5) popup_note_image_window_g2_ParamLimits

0x2bd7,	// (0x0005cdd5) popup_note_image_window_g2

0x0001,

0xf860,	// (0x00069a5e) popup_note_image_window_g_ParamLimits

0xf860,	// (0x00069a5e) popup_note_image_window_g

0x2bf0,	// (0x0005cdee) popup_note_image_window_t1_ParamLimits

0x2bf0,	// (0x0005cdee) popup_note_image_window_t1

0x2c09,	// (0x0005ce07) popup_note_image_window_t2_ParamLimits

0x2c09,	// (0x0005ce07) popup_note_image_window_t2

0x2c22,	// (0x0005ce20) popup_note_image_window_t3_ParamLimits

0x2c22,	// (0x0005ce20) popup_note_image_window_t3

0x0002,

0xf865,	// (0x00069a63) popup_note_image_window_t_ParamLimits

0xf865,	// (0x00069a63) popup_note_image_window_t

0x2a8b,	// (0x0005cc89) bg_popup_window_pane_cp7_ParamLimits

0x2a8b,	// (0x0005cc89) bg_popup_window_pane_cp7

0x2abb,	// (0x0005ccb9) popup_note_wait_window_g1_ParamLimits

0x2abb,	// (0x0005ccb9) popup_note_wait_window_g1

0x2ac7,	// (0x0005ccc5) popup_note_wait_window_g2_ParamLimits

0x2ac7,	// (0x0005ccc5) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x00069a4c) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x00069a4c) popup_note_wait_window_g

0x2adf,	// (0x0005ccdd) popup_note_wait_window_t1_ParamLimits

0x2adf,	// (0x0005ccdd) popup_note_wait_window_t1

0x2b06,	// (0x0005cd04) popup_note_wait_window_t2_ParamLimits

0x2b06,	// (0x0005cd04) popup_note_wait_window_t2

0x2b24,	// (0x0005cd22) popup_note_wait_window_t3_ParamLimits

0x2b24,	// (0x0005cd22) popup_note_wait_window_t3

0x2b37,	// (0x0005cd35) popup_note_wait_window_t4_ParamLimits

0x2b37,	// (0x0005cd35) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x00069a53) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x00069a53) popup_note_wait_window_t

0x2b5c,	// (0x0005cd5a) wait_bar_pane_ParamLimits

0x2b5c,	// (0x0005cd5a) wait_bar_pane

0x55c5,	// (0x0005f7c3) wait_anim_pane

0x55c5,	// (0x0005f7c3) wait_border_pane

0x55bb,	// (0x0005f7b9) wait_anim_pane_g1

0x55bb,	// (0x0005f7b9) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0006990c) wait_anim_pane_g

0x2a2f,	// (0x0005cc2d) wait_border_pane_g1

0x2a3a,	// (0x0005cc38) wait_border_pane_g2

0x2a43,	// (0x0005cc41) wait_border_pane_g3

0x0002,

0xf847,	// (0x00069a45) wait_border_pane_g

0x2899,	// (0x0005ca97) bg_popup_window_pane_cp16_ParamLimits

0x2899,	// (0x0005ca97) bg_popup_window_pane_cp16

0x2999,	// (0x0005cb97) indicator_popup_pane_cp4_ParamLimits

0x2999,	// (0x0005cb97) indicator_popup_pane_cp4

0x29ad,	// (0x0005cbab) popup_query_data_window_t1_ParamLimits

0x29ad,	// (0x0005cbab) popup_query_data_window_t1

0x29bf,	// (0x0005cbbd) popup_query_data_window_t2_ParamLimits

0x29bf,	// (0x0005cbbd) popup_query_data_window_t2

0x29d8,	// (0x0005cbd6) popup_query_data_window_t3_ParamLimits

0x29d8,	// (0x0005cbd6) popup_query_data_window_t3

0x0002,

0xf840,	// (0x00069a3e) popup_query_data_window_t_ParamLimits

0xf840,	// (0x00069a3e) popup_query_data_window_t

0x29f2,	// (0x0005cbf0) query_popup_data_pane_ParamLimits

0x29f2,	// (0x0005cbf0) query_popup_data_pane

0x2a06,	// (0x0005cc04) query_popup_data_pane_cp1_ParamLimits

0x2a06,	// (0x0005cc04) query_popup_data_pane_cp1

0x2899,	// (0x0005ca97) bg_popup_window_pane_cp10_ParamLimits

0x2899,	// (0x0005ca97) bg_popup_window_pane_cp10

0x28cb,	// (0x0005cac9) indicator_popup_pane_ParamLimits

0x28cb,	// (0x0005cac9) indicator_popup_pane

0x28ed,	// (0x0005caeb) popup_query_code_window_t1_ParamLimits

0x28ed,	// (0x0005caeb) popup_query_code_window_t1

0x2907,	// (0x0005cb05) popup_query_code_window_t2_ParamLimits

0x2907,	// (0x0005cb05) popup_query_code_window_t2

0x2950,	// (0x0005cb4e) popup_query_code_window_t3_ParamLimits

0x2950,	// (0x0005cb4e) popup_query_code_window_t3

0x0002,

0xf839,	// (0x00069a37) popup_query_code_window_t_ParamLimits

0xf839,	// (0x00069a37) popup_query_code_window_t

0x297f,	// (0x0005cb7d) query_popup_pane_ParamLimits

0x297f,	// (0x0005cb7d) query_popup_pane

0x8860,	// (0x00062a5e) bg_popup_window_pane_cp15_ParamLimits

0x8860,	// (0x00062a5e) bg_popup_window_pane_cp15

0x8880,	// (0x00062a7e) indicator_popup_pane_cp1_ParamLimits

0x8880,	// (0x00062a7e) indicator_popup_pane_cp1

0x8893,	// (0x00062a91) indicator_popup_pane_cp2_ParamLimits

0x8893,	// (0x00062a91) indicator_popup_pane_cp2

0x88ae,	// (0x00062aac) popup_query_data_code_window_g1_ParamLimits

0x88ae,	// (0x00062aac) popup_query_data_code_window_g1

0x88c1,	// (0x00062abf) popup_query_data_code_window_t1_ParamLimits

0x88c1,	// (0x00062abf) popup_query_data_code_window_t1

0x88d3,	// (0x00062ad1) popup_query_data_code_window_t2_ParamLimits

0x88d3,	// (0x00062ad1) popup_query_data_code_window_t2

0x88e5,	// (0x00062ae3) popup_query_data_code_window_t3_ParamLimits

0x88e5,	// (0x00062ae3) popup_query_data_code_window_t3

0x88fb,	// (0x00062af9) popup_query_data_code_window_t4_ParamLimits

0x88fb,	// (0x00062af9) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0006978e) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0006978e) popup_query_data_code_window_t

0x0450,	// (0x0005a64e) list_single_midp_graphic_pane_g3

0x8915,	// (0x00062b13) query_popup_data_pane_cp2_ParamLimits

0x8928,	// (0x00062b26) query_popup_pane_cp2_ParamLimits

0x8928,	// (0x00062b26) query_popup_pane_cp2

0x55c5,	// (0x0005f7c3) bg_popup_window_pane_cp11

0x2891,	// (0x0005ca8f) heading_pane_cp5

0x89be,	// (0x00062bbc) listscroll_popup_info_pane

0x55c5,	// (0x0005f7c3) input_focus_pane_cp3

0x8943,	// (0x00062b41) query_popup_pane_t1

0x8951,	// (0x00062b4f) list_popup_info_pane_ParamLimits

0x8951,	// (0x00062b4f) list_popup_info_pane

0x8960,	// (0x00062b5e) listscroll_popup_info_pane_g1

0x8968,	// (0x00062b66) scroll_pane_cp7

0x8972,	// (0x00062b70) popup_info_list_pane_t1_ParamLimits

0x8972,	// (0x00062b70) popup_info_list_pane_t1

0x898c,	// (0x00062b8a) popup_info_list_pane_t2_ParamLimits

0x898c,	// (0x00062b8a) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00069797) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00069797) popup_info_list_pane_t

0x55c5,	// (0x0005f7c3) bg_popup_window_pane_cp12

0x3def,	// (0x0005dfed) find_popup_pane

0x561f,	// (0x0005f81d) bg_popup_window_pane_cp3

0x89a6,	// (0x00062ba4) heading_pane_cp3

0x89b2,	// (0x00062bb0) listscroll_popup_graphic_pane

0x55c5,	// (0x0005f7c3) bg_popup_window_pane_cp4

0xa066,	// (0x00064264) heading_pane_cp4

0x89be,	// (0x00062bbc) listscroll_popup_colour_pane

0xa070,	// (0x0006426e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa070,	// (0x0006426e) cell_large_graphic_colour_none_popup_pane

0xa084,	// (0x00064282) grid_large_graphic_colour_popup_pane_ParamLimits

0xa084,	// (0x00064282) grid_large_graphic_colour_popup_pane

0xa0a8,	// (0x000642a6) listscroll_popup_colour_pane_g1_ParamLimits

0xa0a8,	// (0x000642a6) listscroll_popup_colour_pane_g1

0xa0bf,	// (0x000642bd) listscroll_popup_colour_pane_g2_ParamLimits

0xa0bf,	// (0x000642bd) listscroll_popup_colour_pane_g2

0xa0d6,	// (0x000642d4) listscroll_popup_colour_pane_g3_ParamLimits

0xa0d6,	// (0x000642d4) listscroll_popup_colour_pane_g3

0xa0e6,	// (0x000642e4) listscroll_popup_colour_pane_g4_ParamLimits

0xa0e6,	// (0x000642e4) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0006979c) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0006979c) listscroll_popup_colour_pane_g

0x89c6,	// (0x00062bc4) scroll_pane_cp6_ParamLimits

0x89c6,	// (0x00062bc4) scroll_pane_cp6

0xa0f6,	// (0x000642f4) cell_large_graphic_colour_popup_pane_ParamLimits

0xa0f6,	// (0x000642f4) cell_large_graphic_colour_popup_pane

0x89d8,	// (0x00062bd6) cell_large_graphic_colour_none_popup_pane_t1

0x55c5,	// (0x0005f7c3) grid_highlight_pane_cp5

0x89e7,	// (0x00062be5) cell_large_graphic_colour_popup_pane_g1

0x89ef,	// (0x00062bed) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000697a5) cell_large_graphic_colour_popup_pane_g

0x89f7,	// (0x00062bf5) cell_large_graphic_colour_popup_pane_g2_copy1

0x8a00,	// (0x00062bfe) grid_highlight_pane_cp4

0x8a08,	// (0x00062c06) bg_popup_window_pane_cp8_ParamLimits

0x8a08,	// (0x00062c06) bg_popup_window_pane_cp8

0x8a23,	// (0x00062c21) popup_snote_single_text_window_g1_ParamLimits

0x8a23,	// (0x00062c21) popup_snote_single_text_window_g1

0x8a35,	// (0x00062c33) popup_snote_single_text_window_t1_ParamLimits

0x8a35,	// (0x00062c33) popup_snote_single_text_window_t1

0x8a48,	// (0x00062c46) popup_snote_single_text_window_t2_ParamLimits

0x8a48,	// (0x00062c46) popup_snote_single_text_window_t2

0x8a5b,	// (0x00062c59) popup_snote_single_text_window_t3_ParamLimits

0x8a5b,	// (0x00062c59) popup_snote_single_text_window_t3

0x8a94,	// (0x00062c92) popup_snote_single_text_window_t4_ParamLimits

0x8a94,	// (0x00062c92) popup_snote_single_text_window_t4

0x8ac8,	// (0x00062cc6) popup_snote_single_text_window_t5_ParamLimits

0x8ac8,	// (0x00062cc6) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000697aa) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000697aa) popup_snote_single_text_window_t

0x8af7,	// (0x00062cf5) bg_popup_window_pane_cp9_ParamLimits

0x8af7,	// (0x00062cf5) bg_popup_window_pane_cp9

0x8a23,	// (0x00062c21) popup_snote_single_graphic_window_g1_ParamLimits

0x8a23,	// (0x00062c21) popup_snote_single_graphic_window_g1

0x8b05,	// (0x00062d03) popup_snote_single_graphic_window_g2_ParamLimits

0x8b05,	// (0x00062d03) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000697b5) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000697b5) popup_snote_single_graphic_window_g

0x8b11,	// (0x00062d0f) popup_snote_single_graphic_window_t1_ParamLimits

0x8b11,	// (0x00062d0f) popup_snote_single_graphic_window_t1

0x8b24,	// (0x00062d22) popup_snote_single_graphic_window_t2_ParamLimits

0x8b24,	// (0x00062d22) popup_snote_single_graphic_window_t2

0x8b37,	// (0x00062d35) popup_snote_single_graphic_window_t3_ParamLimits

0x8b37,	// (0x00062d35) popup_snote_single_graphic_window_t3

0x8b70,	// (0x00062d6e) popup_snote_single_graphic_window_t4_ParamLimits

0x8b70,	// (0x00062d6e) popup_snote_single_graphic_window_t4

0x8ba4,	// (0x00062da2) popup_snote_single_graphic_window_t5_ParamLimits

0x8ba4,	// (0x00062da2) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000697ba) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000697ba) popup_snote_single_graphic_window_t

0x3d2d,	// (0x0005df2b) grid_graphic_popup_pane_ParamLimits

0x3d2d,	// (0x0005df2b) grid_graphic_popup_pane

0x3d5b,	// (0x0005df59) listscroll_popup_graphic_pane_g1_ParamLimits

0x3d5b,	// (0x0005df59) listscroll_popup_graphic_pane_g1

0xc96b,	// (0x00066b69) listscroll_popup_graphic_pane_g2_ParamLimits

0xc96b,	// (0x00066b69) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x00069bb4) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x00069bb4) listscroll_popup_graphic_pane_g

0x3d83,	// (0x0005df81) scroll_pane_cp5

0xc92a,	// (0x00066b28) cell_graphic_popup_pane_ParamLimits

0xc92a,	// (0x00066b28) cell_graphic_popup_pane

0x3cb6,	// (0x0005deb4) cell_graphic_popup_pane_g1

0x3cbe,	// (0x0005debc) cell_graphic_popup_pane_g2

0x89f7,	// (0x00062bf5) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x00069bad) cell_graphic_popup_pane_g

0x3cc7,	// (0x0005dec5) cell_graphic_popup_pane_t2

0x8a00,	// (0x00062bfe) grid_highlight_pane_cp3

0x8be5,	// (0x00062de3) list_gen_pane_ParamLimits

0x8be5,	// (0x00062de3) list_gen_pane

0x8c0d,	// (0x00062e0b) scroll_pane

0xc8e1,	// (0x00066adf) bg_list_pane_g1_ParamLimits

0xc8e1,	// (0x00066adf) bg_list_pane_g1

0x3c2b,	// (0x0005de29) bg_list_pane_g2_ParamLimits

0x3c2b,	// (0x0005de29) bg_list_pane_g2

0x3c40,	// (0x0005de3e) bg_list_pane_g3_ParamLimits

0x3c40,	// (0x0005de3e) bg_list_pane_g3

0x3c54,	// (0x0005de52) bg_list_pane_g4_ParamLimits

0x3c54,	// (0x0005de52) bg_list_pane_g4

0xc8fe,	// (0x00066afc) bg_list_pane_g5_ParamLimits

0xc8fe,	// (0x00066afc) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x00069ba2) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x00069ba2) bg_list_pane_g

0xc88f,	// (0x00066a8d) list_double2_graphic_large_graphic_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_double2_graphic_large_graphic_pane

0xc88f,	// (0x00066a8d) list_double2_graphic_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_double2_graphic_pane

0xc88f,	// (0x00066a8d) list_double2_large_graphic_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_double2_large_graphic_pane

0xc88f,	// (0x00066a8d) list_double2_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_double2_pane

0xc88f,	// (0x00066a8d) list_double_graphic_heading_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_double_graphic_heading_pane

0xc88f,	// (0x00066a8d) list_double_graphic_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_double_graphic_pane

0xc88f,	// (0x00066a8d) list_double_heading_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_double_heading_pane

0xc88f,	// (0x00066a8d) list_double_large_graphic_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_double_large_graphic_pane

0xc88f,	// (0x00066a8d) list_double_number_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_double_number_pane

0xc88f,	// (0x00066a8d) list_double_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_double_pane

0xc88f,	// (0x00066a8d) list_double_time_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_double_time_pane

0xc88f,	// (0x00066a8d) list_setting_number_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_setting_number_pane

0xc88f,	// (0x00066a8d) list_setting_pane_ParamLimits

0xc88f,	// (0x00066a8d) list_setting_pane

0xc8a3,	// (0x00066aa1) list_single_2graphic_pane_ParamLimits

0xc8a3,	// (0x00066aa1) list_single_2graphic_pane

0xc8a3,	// (0x00066aa1) list_single_graphic_heading_pane_ParamLimits

0xc8a3,	// (0x00066aa1) list_single_graphic_heading_pane

0xc8a3,	// (0x00066aa1) list_single_graphic_pane_ParamLimits

0xc8a3,	// (0x00066aa1) list_single_graphic_pane

0xc8a3,	// (0x00066aa1) list_single_heading_pane_ParamLimits

0xc8a3,	// (0x00066aa1) list_single_heading_pane

0xc8a3,	// (0x00066aa1) list_single_large_graphic_pane_ParamLimits

0xc8a3,	// (0x00066aa1) list_single_large_graphic_pane

0xc8a3,	// (0x00066aa1) list_single_number_heading_pane_ParamLimits

0xc8a3,	// (0x00066aa1) list_single_number_heading_pane

0xc8a3,	// (0x00066aa1) list_single_number_pane_ParamLimits

0xc8a3,	// (0x00066aa1) list_single_number_pane

0xc8a3,	// (0x00066aa1) list_single_pane_ParamLimits

0xc8a3,	// (0x00066aa1) list_single_pane

0x55c5,	// (0x0005f7c3) list_highlight_pane_cp1

0xe2ad,	// (0x000684ab) list_single_pane_g1_ParamLimits

0xe2ad,	// (0x000684ab) list_single_pane_g1

0x041f,	// (0x0005a61d) list_single_pane_g2_ParamLimits

0x041f,	// (0x0005a61d) list_single_pane_g2

0x0001,

0xf5d8,	// (0x000697d6) list_single_pane_g_ParamLimits

0xf5d8,	// (0x000697d6) list_single_pane_g

0xe836,	// (0x00068a34) list_single_pane_t1_ParamLimits

0xe836,	// (0x00068a34) list_single_pane_t1

0xe2ad,	// (0x000684ab) list_single_number_pane_g1_ParamLimits

0xe2ad,	// (0x000684ab) list_single_number_pane_g1

0x041f,	// (0x0005a61d) list_single_number_pane_g2_ParamLimits

0x041f,	// (0x0005a61d) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x000697d6) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x000697d6) list_single_number_pane_g

0xe777,	// (0x00068975) list_single_number_pane_t1_ParamLimits

0xe777,	// (0x00068975) list_single_number_pane_t1

0xb95d,	// (0x00065b5b) list_single_number_pane_t2_ParamLimits

0xb95d,	// (0x00065b5b) list_single_number_pane_t2

0x0001,

0xf965,	// (0x00069b63) list_single_number_pane_t_ParamLimits

0xf965,	// (0x00069b63) list_single_number_pane_t

0xa121,	// (0x0006431f) list_single_graphic_pane_g1_ParamLimits

0xa121,	// (0x0006431f) list_single_graphic_pane_g1

0xe2ad,	// (0x000684ab) list_single_graphic_pane_g2_ParamLimits

0xe2ad,	// (0x000684ab) list_single_graphic_pane_g2

0x041f,	// (0x0005a61d) list_single_graphic_pane_g3_ParamLimits

0x041f,	// (0x0005a61d) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000697c5) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000697c5) list_single_graphic_pane_g

0xa12d,	// (0x0006432b) list_single_graphic_pane_t1_ParamLimits

0xa12d,	// (0x0006432b) list_single_graphic_pane_t1

0xa143,	// (0x00064341) list_single_heading_pane_g1_ParamLimits

0xa143,	// (0x00064341) list_single_heading_pane_g1

0x041f,	// (0x0005a61d) list_single_heading_pane_g2_ParamLimits

0x041f,	// (0x0005a61d) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000697cc) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000697cc) list_single_heading_pane_g

0xa156,	// (0x00064354) list_single_heading_pane_t1_ParamLimits

0xa156,	// (0x00064354) list_single_heading_pane_t1

0xa16c,	// (0x0006436a) list_single_heading_pane_t2_ParamLimits

0xa16c,	// (0x0006436a) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000697d1) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000697d1) list_single_heading_pane_t

0xe2ad,	// (0x000684ab) list_single_number_heading_pane_g1_ParamLimits

0xe2ad,	// (0x000684ab) list_single_number_heading_pane_g1

0x041f,	// (0x0005a61d) list_single_number_heading_pane_g2_ParamLimits

0x041f,	// (0x0005a61d) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x000697d6) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x000697d6) list_single_number_heading_pane_g

0xe2b9,	// (0x000684b7) list_single_number_heading_pane_t1_ParamLimits

0xe2b9,	// (0x000684b7) list_single_number_heading_pane_t1

0xa17e,	// (0x0006437c) list_single_number_heading_pane_t2_ParamLimits

0xa17e,	// (0x0006437c) list_single_number_heading_pane_t2

0xe2cf,	// (0x000684cd) list_single_number_heading_pane_t3_ParamLimits

0xe2cf,	// (0x000684cd) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x000697db) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x000697db) list_single_number_heading_pane_t

0xa190,	// (0x0006438e) list_single_graphic_heading_pane_g1_ParamLimits

0xa190,	// (0x0006438e) list_single_graphic_heading_pane_g1

0xa1a8,	// (0x000643a6) list_single_graphic_heading_pane_g4_ParamLimits

0xa1a8,	// (0x000643a6) list_single_graphic_heading_pane_g4

0x041f,	// (0x0005a61d) list_single_graphic_heading_pane_g5_ParamLimits

0x041f,	// (0x0005a61d) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x000697e2) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x000697e2) list_single_graphic_heading_pane_g

0xe2b9,	// (0x000684b7) list_single_graphic_heading_pane_t1_ParamLimits

0xe2b9,	// (0x000684b7) list_single_graphic_heading_pane_t1

0xa1b9,	// (0x000643b7) list_single_graphic_heading_pane_t2_ParamLimits

0xa1b9,	// (0x000643b7) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x000697e9) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x000697e9) list_single_graphic_heading_pane_t

0x35d4,	// (0x0005d7d2) list_single_large_graphic_pane_g1_ParamLimits

0x35d4,	// (0x0005d7d2) list_single_large_graphic_pane_g1

0xe2ad,	// (0x000684ab) list_single_large_graphic_pane_g2_ParamLimits

0xe2ad,	// (0x000684ab) list_single_large_graphic_pane_g2

0x041f,	// (0x0005a61d) list_single_large_graphic_pane_g3_ParamLimits

0x041f,	// (0x0005a61d) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000697ee) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000697ee) list_single_large_graphic_pane_g

0x2a3a,	// (0x0005cc38) wait_border_pane_g2_copy1

0xa1d1,	// (0x000643cf) list_single_large_graphic_pane_g4_cp2

0xe2b9,	// (0x000684b7) list_single_large_graphic_pane_t1_ParamLimits

0xe2b9,	// (0x000684b7) list_single_large_graphic_pane_t1

0x5226,	// (0x0005f424) list_double_pane_g1_ParamLimits

0x5226,	// (0x0005f424) list_double_pane_g1

0xa1d9,	// (0x000643d7) list_double_pane_g2_ParamLimits

0xa1d9,	// (0x000643d7) list_double_pane_g2

0x0001,

0xf5f7,	// (0x000697f5) list_double_pane_g_ParamLimits

0xf5f7,	// (0x000697f5) list_double_pane_g

0xa1e5,	// (0x000643e3) list_double_pane_t1_ParamLimits

0xa1e5,	// (0x000643e3) list_double_pane_t1

0xa1fb,	// (0x000643f9) list_double_pane_t2_ParamLimits

0xa1fb,	// (0x000643f9) list_double_pane_t2

0x0001,

0xf5fc,	// (0x000697fa) list_double_pane_t_ParamLimits

0xf5fc,	// (0x000697fa) list_double_pane_t

0xa20d,	// (0x0006440b) list_double2_pane_g1_ParamLimits

0xa20d,	// (0x0006440b) list_double2_pane_g1

0xa21e,	// (0x0006441c) list_double2_pane_g2_ParamLimits

0xa21e,	// (0x0006441c) list_double2_pane_g2

0x0001,

0xf601,	// (0x000697ff) list_double2_pane_g_ParamLimits

0xf601,	// (0x000697ff) list_double2_pane_g

0xa22a,	// (0x00064428) list_double2_pane_t1_ParamLimits

0xa22a,	// (0x00064428) list_double2_pane_t1

0xa240,	// (0x0006443e) list_double2_pane_t2_ParamLimits

0xa240,	// (0x0006443e) list_double2_pane_t2

0x0001,

0xf606,	// (0x00069804) list_double2_pane_t_ParamLimits

0xf606,	// (0x00069804) list_double2_pane_t

0x5226,	// (0x0005f424) list_double_number_pane_g1_ParamLimits

0x5226,	// (0x0005f424) list_double_number_pane_g1

0xa1d9,	// (0x000643d7) list_double_number_pane_g2_ParamLimits

0xa1d9,	// (0x000643d7) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x000697f5) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x000697f5) list_double_number_pane_g

0xa252,	// (0x00064450) list_double_number_pane_t1_ParamLimits

0xa252,	// (0x00064450) list_double_number_pane_t1

0xa264,	// (0x00064462) list_double_number_pane_t2_ParamLimits

0xa264,	// (0x00064462) list_double_number_pane_t2

0xa27a,	// (0x00064478) list_double_number_pane_t3_ParamLimits

0xa27a,	// (0x00064478) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00069809) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00069809) list_double_number_pane_t

0xa28c,	// (0x0006448a) list_double_graphic_pane_g1_ParamLimits

0xa28c,	// (0x0006448a) list_double_graphic_pane_g1

0xa298,	// (0x00064496) list_double_graphic_pane_g2_ParamLimits

0xa298,	// (0x00064496) list_double_graphic_pane_g2

0xa2a7,	// (0x000644a5) list_double_graphic_pane_g3_ParamLimits

0xa2a7,	// (0x000644a5) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00069810) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00069810) list_double_graphic_pane_g

0xa2bf,	// (0x000644bd) list_double_graphic_pane_t1_ParamLimits

0xa2bf,	// (0x000644bd) list_double_graphic_pane_t1

0xa2d5,	// (0x000644d3) list_double_graphic_pane_t2_ParamLimits

0xa2d5,	// (0x000644d3) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00069819) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00069819) list_double_graphic_pane_t

0xa2e7,	// (0x000644e5) list_double2_graphic_pane_g1_ParamLimits

0xa2e7,	// (0x000644e5) list_double2_graphic_pane_g1

0xa2f3,	// (0x000644f1) list_double2_graphic_pane_g2_ParamLimits

0xa2f3,	// (0x000644f1) list_double2_graphic_pane_g2

0xa2ff,	// (0x000644fd) list_double2_graphic_pane_g3_ParamLimits

0xa2ff,	// (0x000644fd) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0006981e) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0006981e) list_double2_graphic_pane_g

0xa30b,	// (0x00064509) list_double2_graphic_pane_t1_ParamLimits

0xa30b,	// (0x00064509) list_double2_graphic_pane_t1

0xa321,	// (0x0006451f) list_double2_graphic_pane_t2_ParamLimits

0xa321,	// (0x0006451f) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00069825) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00069825) list_double2_graphic_pane_t

0xa333,	// (0x00064531) list_double_large_graphic_pane_g1_ParamLimits

0xa333,	// (0x00064531) list_double_large_graphic_pane_g1

0xa35e,	// (0x0006455c) list_double_large_graphic_pane_g2_ParamLimits

0xa35e,	// (0x0006455c) list_double_large_graphic_pane_g2

0xa1d9,	// (0x000643d7) list_double_large_graphic_pane_g3_ParamLimits

0xa1d9,	// (0x000643d7) list_double_large_graphic_pane_g3

0xa374,	// (0x00064572) list_double_large_graphic_pane_g4_ParamLimits

0xa374,	// (0x00064572) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0006982a) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0006982a) list_double_large_graphic_pane_g

0xa387,	// (0x00064585) list_double_large_graphic_pane_t1_ParamLimits

0xa387,	// (0x00064585) list_double_large_graphic_pane_t1

0xa3a0,	// (0x0006459e) list_double_large_graphic_pane_t2_ParamLimits

0xa3a0,	// (0x0006459e) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00069835) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00069835) list_double_large_graphic_pane_t

0xa3b2,	// (0x000645b0) list_double2_large_graphic_pane_g1_ParamLimits

0xa3b2,	// (0x000645b0) list_double2_large_graphic_pane_g1

0xa3be,	// (0x000645bc) list_double2_large_graphic_pane_g2_ParamLimits

0xa3be,	// (0x000645bc) list_double2_large_graphic_pane_g2

0xa2ff,	// (0x000644fd) list_double2_large_graphic_pane_g3_ParamLimits

0xa2ff,	// (0x000644fd) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0006983a) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0006983a) list_double2_large_graphic_pane_g

0xa3cf,	// (0x000645cd) list_double2_large_graphic_pane_t1_ParamLimits

0xa3cf,	// (0x000645cd) list_double2_large_graphic_pane_t1

0xa3e5,	// (0x000645e3) list_double2_large_graphic_pane_t2_ParamLimits

0xa3e5,	// (0x000645e3) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00069841) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00069841) list_double2_large_graphic_pane_t

0xa3f7,	// (0x000645f5) list_double_heading_pane_g1_ParamLimits

0xa3f7,	// (0x000645f5) list_double_heading_pane_g1

0xa408,	// (0x00064606) list_double_heading_pane_g2_ParamLimits

0xa408,	// (0x00064606) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00069846) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00069846) list_double_heading_pane_g

0xa414,	// (0x00064612) list_double_heading_pane_t1_ParamLimits

0xa414,	// (0x00064612) list_double_heading_pane_t1

0xa42a,	// (0x00064628) list_double_heading_pane_t2_ParamLimits

0xa42a,	// (0x00064628) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0006984b) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0006984b) list_double_heading_pane_t

0xe2f6,	// (0x000684f4) list_double_graphic_heading_pane_g1_ParamLimits

0xe2f6,	// (0x000684f4) list_double_graphic_heading_pane_g1

0xa3f7,	// (0x000645f5) list_double_graphic_heading_pane_g2_ParamLimits

0xa3f7,	// (0x000645f5) list_double_graphic_heading_pane_g2

0xa408,	// (0x00064606) list_double_graphic_heading_pane_g3_ParamLimits

0xa408,	// (0x00064606) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x00069850) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x00069850) list_double_graphic_heading_pane_g

0xa43c,	// (0x0006463a) list_double_graphic_heading_pane_t1_ParamLimits

0xa43c,	// (0x0006463a) list_double_graphic_heading_pane_t1

0xa452,	// (0x00064650) list_double_graphic_heading_pane_t2_ParamLimits

0xa452,	// (0x00064650) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00069857) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00069857) list_double_graphic_heading_pane_t

0xa464,	// (0x00064662) list_double_time_pane_g1_ParamLimits

0xa464,	// (0x00064662) list_double_time_pane_g1

0xa475,	// (0x00064673) list_double_time_pane_g2_ParamLimits

0xa475,	// (0x00064673) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0006985c) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0006985c) list_double_time_pane_g

0xa481,	// (0x0006467f) list_double_time_pane_t1_ParamLimits

0xa481,	// (0x0006467f) list_double_time_pane_t1

0xa497,	// (0x00064695) list_double_time_pane_t2_ParamLimits

0xa497,	// (0x00064695) list_double_time_pane_t2

0xa4a9,	// (0x000646a7) list_double_time_pane_t3_ParamLimits

0xa4a9,	// (0x000646a7) list_double_time_pane_t3

0xa4bb,	// (0x000646b9) list_double_time_pane_t4_ParamLimits

0xa4bb,	// (0x000646b9) list_double_time_pane_t4

0x0003,

0xf663,	// (0x00069861) list_double_time_pane_t_ParamLimits

0xf663,	// (0x00069861) list_double_time_pane_t

0xa4cd,	// (0x000646cb) list_setting_pane_g1_ParamLimits

0xa4cd,	// (0x000646cb) list_setting_pane_g1

0xa4d9,	// (0x000646d7) list_setting_pane_g2_ParamLimits

0xa4d9,	// (0x000646d7) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0006986a) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0006986a) list_setting_pane_g

0xa4e5,	// (0x000646e3) list_setting_pane_t1_ParamLimits

0xa4e5,	// (0x000646e3) list_setting_pane_t1

0xa4ff,	// (0x000646fd) list_setting_pane_t2_ParamLimits

0xa4ff,	// (0x000646fd) list_setting_pane_t2

0x0002,

0xf671,	// (0x0006986f) list_setting_pane_t_ParamLimits

0xf671,	// (0x0006986f) list_setting_pane_t

0xa53e,	// (0x0006473c) set_value_pane_cp_ParamLimits

0xa53e,	// (0x0006473c) set_value_pane_cp

0xa54c,	// (0x0006474a) list_setting_number_pane_g1_ParamLimits

0xa54c,	// (0x0006474a) list_setting_number_pane_g1

0xa558,	// (0x00064756) list_setting_number_pane_g2_ParamLimits

0xa558,	// (0x00064756) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x00069876) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x00069876) list_setting_number_pane_g

0xa564,	// (0x00064762) list_setting_number_pane_t1_ParamLimits

0xa564,	// (0x00064762) list_setting_number_pane_t1

0xa57d,	// (0x0006477b) list_setting_number_pane_t2_ParamLimits

0xa57d,	// (0x0006477b) list_setting_number_pane_t2

0xa597,	// (0x00064795) list_setting_number_pane_t3_ParamLimits

0xa597,	// (0x00064795) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0006987b) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0006987b) list_setting_number_pane_t

0xa53e,	// (0x0006473c) set_value_pane_ParamLimits

0xa53e,	// (0x0006473c) set_value_pane

0x8c41,	// (0x00062e3f) bg_set_opt_pane_ParamLimits

0x8c41,	// (0x00062e3f) bg_set_opt_pane

0xe302,	// (0x00068500) set_value_pane_t1

0x8c62,	// (0x00062e60) slider_set_pane_cp3

0x8c6b,	// (0x00062e69) volume_small_pane_cp

0x8c74,	// (0x00062e72) list_form_gen_pane

0x8c7d,	// (0x00062e7b) scroll_pane_cp8

0xa5da,	// (0x000647d8) form_field_data_pane_ParamLimits

0xa5da,	// (0x000647d8) form_field_data_pane

0xa5f7,	// (0x000647f5) form_field_data_wide_pane_ParamLimits

0xa5f7,	// (0x000647f5) form_field_data_wide_pane

0xa61b,	// (0x00064819) form_field_popup_pane_ParamLimits

0xa61b,	// (0x00064819) form_field_popup_pane

0xe320,	// (0x0006851e) form_field_popup_wide_pane_ParamLimits

0xe320,	// (0x0006851e) form_field_popup_wide_pane

0xe341,	// (0x0006853f) form_field_slider_pane_ParamLimits

0xe341,	// (0x0006853f) form_field_slider_pane

0xe354,	// (0x00068552) form_field_slider_wide_pane_ParamLimits

0xe354,	// (0x00068552) form_field_slider_wide_pane

0x8c8e,	// (0x00062e8c) data_form_pane

0xa647,	// (0x00064845) form_field_data_pane_t1

0x8c9a,	// (0x00062e98) input_focus_pane

0xe367,	// (0x00068565) data_form_wide_pane

0xe384,	// (0x00068582) form_field_data_wide_pane_t1

0x8a15,	// (0x00062c13) input_focus_pane_cp6

0xa661,	// (0x0006485f) form_field_popup_pane_t1

0x8c9a,	// (0x00062e98) input_focus_pane_cp7

0x8cc8,	// (0x00062ec6) list_form_pane

0xe3ae,	// (0x000685ac) form_field_popup_wide_pane_t1

0x8c9a,	// (0x00062e98) input_focus_pane_cp8

0x8cd4,	// (0x00062ed2) list_form_wide_pane

0xa683,	// (0x00064881) form_field_slider_pane_t1_ParamLimits

0xa683,	// (0x00064881) form_field_slider_pane_t1

0xa69b,	// (0x00064899) form_field_slider_pane_t2_ParamLimits

0xa69b,	// (0x00064899) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0006988b) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0006988b) form_field_slider_pane_t

0x568c,	// (0x0005f88a) input_focus_pane_cp9_ParamLimits

0x568c,	// (0x0005f88a) input_focus_pane_cp9

0xa6b0,	// (0x000648ae) slider_cont_pane_ParamLimits

0xa6b0,	// (0x000648ae) slider_cont_pane

0x8ce3,	// (0x00062ee1) form_field_slider_wide_pane_t1_ParamLimits

0x8ce3,	// (0x00062ee1) form_field_slider_wide_pane_t1

0xe3c3,	// (0x000685c1) form_field_slider_wide_pane_t2_ParamLimits

0xe3c3,	// (0x000685c1) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x00069890) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x00069890) form_field_slider_wide_pane_t

0x568c,	// (0x0005f88a) input_focus_pane_cp10_ParamLimits

0x568c,	// (0x0005f88a) input_focus_pane_cp10

0xa6c4,	// (0x000648c2) slider_cont_pane_cp1_ParamLimits

0xa6c4,	// (0x000648c2) slider_cont_pane_cp1

0xa6d8,	// (0x000648d6) slider_form_pane_cp

0x8cf5,	// (0x00062ef3) input_focus_pane_g1

0x8cfd,	// (0x00062efb) input_focus_pane_g2

0x8d05,	// (0x00062f03) input_focus_pane_g3

0x8d0d,	// (0x00062f0b) input_focus_pane_g4

0x8d15,	// (0x00062f13) input_focus_pane_g5

0x8d1d,	// (0x00062f1b) input_focus_pane_g6

0x8d25,	// (0x00062f23) input_focus_pane_g7

0x8d2d,	// (0x00062f2b) input_focus_pane_g8

0x8d35,	// (0x00062f33) input_focus_pane_g9

0x55bb,	// (0x0005f7b9) input_focus_pane_g10

0x0009,

0xf697,	// (0x00069895) input_focus_pane_g

0x2a43,	// (0x0005cc41) wait_border_pane_g3_copy1

0xa6e0,	// (0x000648de) data_form_pane_t1

0x55bb,	// (0x0005f7b9) wait_anim_pane_g1_copy1

0xb96f,	// (0x00065b6d) data_form_wide_pane_t1

0xe3d5,	// (0x000685d3) list_form_graphic_pane_cp_ParamLimits

0xe3d5,	// (0x000685d3) list_form_graphic_pane_cp

0x3b43,	// (0x0005dd41) slider_form_pane_g1

0x3b4c,	// (0x0005dd4a) slider_form_pane_g2

0x0006,

0xf995,	// (0x00069b93) slider_form_pane_g

0xa6fc,	// (0x000648fa) list_form_graphic_pane_ParamLimits

0xa6fc,	// (0x000648fa) list_form_graphic_pane

0xe3e7,	// (0x000685e5) list_form_graphic_pane_g1

0xe3ef,	// (0x000685ed) list_form_graphic_pane_t1_ParamLimits

0xe3ef,	// (0x000685ed) list_form_graphic_pane_t1

0x561f,	// (0x0005f81d) list_highlight_pane_cp5_ParamLimits

0x561f,	// (0x0005f81d) list_highlight_pane_cp5

0xa70d,	// (0x0006490b) find_pane_g1

0x8d3d,	// (0x00062f3b) input_find_pane

0xa716,	// (0x00064914) input_find_pane_g1_ParamLimits

0xa716,	// (0x00064914) input_find_pane_g1

0xa722,	// (0x00064920) input_find_pane_t1_ParamLimits

0xa722,	// (0x00064920) input_find_pane_t1

0xa737,	// (0x00064935) input_find_pane_t2_ParamLimits

0xa737,	// (0x00064935) input_find_pane_t2

0x0001,

0xf6ac,	// (0x000698aa) input_find_pane_t_ParamLimits

0xf6ac,	// (0x000698aa) input_find_pane_t

0x8d46,	// (0x00062f44) input_focus_pane_cp5_ParamLimits

0x8d46,	// (0x00062f44) input_focus_pane_cp5

0x8d54,	// (0x00062f52) bg_popup_window_pane_cp2_ParamLimits

0x8d54,	// (0x00062f52) bg_popup_window_pane_cp2

0x8d61,	// (0x00062f5f) listscroll_menu_pane_ParamLimits

0x8d61,	// (0x00062f5f) listscroll_menu_pane

0xa758,	// (0x00064956) popup_submenu_window_ParamLimits

0xa758,	// (0x00064956) popup_submenu_window

0x8d6d,	// (0x00062f6b) find_popup_pane_g1

0x8d75,	// (0x00062f73) input_popup_find_pane_cp

0x8d46,	// (0x00062f44) input_focus_pane_cp4_ParamLimits

0x8d46,	// (0x00062f44) input_focus_pane_cp4

0x8d7f,	// (0x00062f7d) input_popup_find_pane_t1_ParamLimits

0x8d7f,	// (0x00062f7d) input_popup_find_pane_t1

0x55c5,	// (0x0005f7c3) bg_popup_sub_pane_cp

0x8dad,	// (0x00062fab) listscroll_popup_sub_pane

0x8db5,	// (0x00062fb3) list_submenu_pane_ParamLimits

0x8db5,	// (0x00062fb3) list_submenu_pane

0x8dc6,	// (0x00062fc4) scroll_pane_cp4

0x8dce,	// (0x00062fcc) list_single_popup_submenu_pane_ParamLimits

0x8dce,	// (0x00062fcc) list_single_popup_submenu_pane

0x8de3,	// (0x00062fe1) list_single_popup_submenu_pane_g1

0x8deb,	// (0x00062fe9) list_single_popup_submenu_pane_t1_ParamLimits

0x8deb,	// (0x00062fe9) list_single_popup_submenu_pane_t1

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp1_ParamLimits

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp1

0xa796,	// (0x00064994) tabs_2_active_pane_g1

0xa79e,	// (0x0006499c) tabs_2_active_pane_t1

0x568c,	// (0x0005f88a) bg_passive_tab_pane_cp1_ParamLimits

0x568c,	// (0x0005f88a) bg_passive_tab_pane_cp1

0xa796,	// (0x00064994) tabs_2_passive_pane_g1

0xa79e,	// (0x0006499c) tabs_2_passive_pane_t1

0x561f,	// (0x0005f81d) bg_active_tab_pane_cp4

0xa7b0,	// (0x000649ae) tabs_2_long_active_pane_t1

0x191c,	// (0x0005bb1a) bg_passive_tab_pane_cp4

0x0458,	// (0x0005a656) list_single_midp_graphic_pane_g4_ParamLimits

0x561f,	// (0x0005f81d) bg_active_tab_pane_cp5

0xa7c3,	// (0x000649c1) tabs_3_long_active_pane_t1

0x191c,	// (0x0005bb1a) bg_passive_tab_pane_cp5

0x0458,	// (0x0005a656) list_single_midp_graphic_pane_g4

0x561f,	// (0x0005f81d) bg_popup_window_pane_cp13_ParamLimits

0x561f,	// (0x0005f81d) bg_popup_window_pane_cp13

0x8e09,	// (0x00063007) listscroll_popup_fast_pane_ParamLimits

0x8e09,	// (0x00063007) listscroll_popup_fast_pane

0x8e18,	// (0x00063016) grid_popup_fast_pane_ParamLimits

0x8e18,	// (0x00063016) grid_popup_fast_pane

0x8e2a,	// (0x00063028) scroll_pane_cp9_ParamLimits

0x8e2a,	// (0x00063028) scroll_pane_cp9

0x54a8,	// (0x0005f6a6) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x54a8,	// (0x0005f6a6) list_single_graphic_hl_pane_t1_cp2

0x8e4e,	// (0x0006304c) input_focus_pane_cp20_ParamLimits

0x8e4e,	// (0x0006304c) input_focus_pane_cp20

0x8e5c,	// (0x0006305a) query_popup_data_pane_t1_ParamLimits

0x8e5c,	// (0x0006305a) query_popup_data_pane_t1

0x8e6f,	// (0x0006306d) query_popup_data_pane_t2_ParamLimits

0x8e6f,	// (0x0006306d) query_popup_data_pane_t2

0x8eb5,	// (0x000630b3) query_popup_data_pane_t3_ParamLimits

0x8eb5,	// (0x000630b3) query_popup_data_pane_t3

0x8ef6,	// (0x000630f4) query_popup_data_pane_t4_ParamLimits

0x8ef6,	// (0x000630f4) query_popup_data_pane_t4

0x8f32,	// (0x00063130) query_popup_data_pane_t5_ParamLimits

0x8f32,	// (0x00063130) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x000698af) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x000698af) query_popup_data_pane_t

0x8cf5,	// (0x00062ef3) bg_set_opt_pane_g1

0x8cfd,	// (0x00062efb) bg_set_opt_pane_g2

0x8d05,	// (0x00062f03) bg_set_opt_pane_g3

0x8d0d,	// (0x00062f0b) bg_set_opt_pane_g4

0x8d15,	// (0x00062f13) bg_set_opt_pane_g5

0x8d1d,	// (0x00062f1b) bg_set_opt_pane_g6

0x8d25,	// (0x00062f23) bg_set_opt_pane_g7

0x8d2d,	// (0x00062f2b) bg_set_opt_pane_g8

0x8d35,	// (0x00062f33) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x000698ba) bg_set_opt_pane_g

0xf410,	// (0x0006960e) control_top_pane_stacon_ParamLimits

0xf410,	// (0x0006960e) control_top_pane_stacon

0xf463,	// (0x00069661) signal_pane_stacon_ParamLimits

0xf463,	// (0x00069661) signal_pane_stacon

0xe40d,	// (0x0006860b) stacon_top_pane_g1_ParamLimits

0xe40d,	// (0x0006860b) stacon_top_pane_g1

0xf488,	// (0x00069686) title_pane_stacon_ParamLimits

0xf488,	// (0x00069686) title_pane_stacon

0xf4b2,	// (0x000696b0) uni_indicator_pane_stacon_ParamLimits

0xf4b2,	// (0x000696b0) uni_indicator_pane_stacon

0xf4ca,	// (0x000696c8) battery_pane_stacon_ParamLimits

0xf4ca,	// (0x000696c8) battery_pane_stacon

0xf50e,	// (0x0006970c) control_bottom_pane_stacon_ParamLimits

0xf50e,	// (0x0006970c) control_bottom_pane_stacon

0xf531,	// (0x0006972f) navi_pane_stacon_ParamLimits

0xf531,	// (0x0006972f) navi_pane_stacon

0xe42f,	// (0x0006862d) stacon_bottom_pane_g1_ParamLimits

0xe42f,	// (0x0006862d) stacon_bottom_pane_g1

0xf176,	// (0x00069374) aid_levels_signal_lsc_ParamLimits

0xf176,	// (0x00069374) aid_levels_signal_lsc

0xf18d,	// (0x0006938b) signal_pane_stacon_g1_ParamLimits

0xf18d,	// (0x0006938b) signal_pane_stacon_g1

0xf1a1,	// (0x0006939f) signal_pane_stacon_g2_ParamLimits

0xf1a1,	// (0x0006939f) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x000698cd) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000698cd) signal_pane_stacon_g

0xf1d6,	// (0x000693d4) title_pane_stacon_t1_ParamLimits

0xf1d6,	// (0x000693d4) title_pane_stacon_t1

0x8f76,	// (0x00063174) uni_indicator_pane_stacon_g1

0x8f80,	// (0x0006317e) uni_indicator_pane_stacon_g2

0x8f8a,	// (0x00063188) uni_indicator_pane_stacon_g3

0x8f94,	// (0x00063192) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x000698d9) uni_indicator_pane_stacon_g

0xf1fb,	// (0x000693f9) control_top_pane_stacon_g1

0xf203,	// (0x00069401) control_top_pane_stacon_t1_ParamLimits

0xf203,	// (0x00069401) control_top_pane_stacon_t1

0xf23a,	// (0x00069438) aid_levels_battery_lsc_ParamLimits

0xf23a,	// (0x00069438) aid_levels_battery_lsc

0xf252,	// (0x00069450) battery_pane_stacon_g1_ParamLimits

0xf252,	// (0x00069450) battery_pane_stacon_g1

0xf265,	// (0x00069463) battery_pane_stacon_g2_ParamLimits

0xf265,	// (0x00069463) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x000698e2) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x000698e2) battery_pane_stacon_g

0xf2a3,	// (0x000694a1) navi_icon_pane_stacon

0xf2b7,	// (0x000694b5) navi_navi_pane_stacon

0xf2a3,	// (0x000694a1) navi_text_pane_stacon

0xf1fb,	// (0x000693f9) control_bottom_pane_stacon_g1

0xf2cd,	// (0x000694cb) control_bottom_pane_stacon_t1_ParamLimits

0xf2cd,	// (0x000694cb) control_bottom_pane_stacon_t1

0xa7d5,	// (0x000649d3) grid_app_pane_ParamLimits

0xa7d5,	// (0x000649d3) grid_app_pane

0xa80d,	// (0x00064a0b) scroll_pane_cp15_ParamLimits

0xa80d,	// (0x00064a0b) scroll_pane_cp15

0xa822,	// (0x00064a20) cell_app_pane_ParamLimits

0xa822,	// (0x00064a20) cell_app_pane

0xa86f,	// (0x00064a6d) cell_app_pane_g1_ParamLimits

0xa86f,	// (0x00064a6d) cell_app_pane_g1

0x8fb8,	// (0x000631b6) cell_app_pane_g2_ParamLimits

0x8fb8,	// (0x000631b6) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x000698e7) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x000698e7) cell_app_pane_g

0x8fc4,	// (0x000631c2) cell_app_pane_t1_ParamLimits

0x8fc4,	// (0x000631c2) cell_app_pane_t1

0x8fdb,	// (0x000631d9) grid_highlight_pane_ParamLimits

0x8fdb,	// (0x000631d9) grid_highlight_pane

0x8cf5,	// (0x00062ef3) cell_highlight_pane_g1

0x8cfd,	// (0x00062efb) cell_highlight_pane_g2

0x8d05,	// (0x00062f03) cell_highlight_pane_g3

0x8d0d,	// (0x00062f0b) cell_highlight_pane_g4

0x8d15,	// (0x00062f13) cell_highlight_pane_g5

0x8d1d,	// (0x00062f1b) cell_highlight_pane_g6

0x8d25,	// (0x00062f23) cell_highlight_pane_g7

0x8d2d,	// (0x00062f2b) cell_highlight_pane_g8

0x8d35,	// (0x00062f33) cell_highlight_pane_g9

0x55bb,	// (0x0005f7b9) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x00069895) cell_highlight_pane_g

0x8fec,	// (0x000631ea) bg_scroll_pane

0xf30e,	// (0x0006950c) scroll_handle_pane

0x9033,	// (0x00063231) scroll_bg_pane_g1

0x9048,	// (0x00063246) scroll_bg_pane_g2

0x9060,	// (0x0006325e) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x000698ec) scroll_bg_pane_g

0x9075,	// (0x00063273) scroll_handle_focus_pane_ParamLimits

0x9075,	// (0x00063273) scroll_handle_focus_pane

0x9033,	// (0x00063231) scroll_handle_pane_g1

0x9082,	// (0x00063280) scroll_handle_pane_g2

0x9060,	// (0x0006325e) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x000698f3) scroll_handle_pane_g

0x8d46,	// (0x00062f44) bg_popup_sub_pane_cp21_ParamLimits

0x8d46,	// (0x00062f44) bg_popup_sub_pane_cp21

0x9096,	// (0x00063294) popup_fep_japan_predictive_window_t1_ParamLimits

0x9096,	// (0x00063294) popup_fep_japan_predictive_window_t1

0x90ad,	// (0x000632ab) popup_fep_japan_predictive_window_t2_ParamLimits

0x90ad,	// (0x000632ab) popup_fep_japan_predictive_window_t2

0x90e0,	// (0x000632de) popup_fep_japan_predictive_window_t3_ParamLimits

0x90e0,	// (0x000632de) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x000698fa) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x000698fa) popup_fep_japan_predictive_window_t

0x55c5,	// (0x0005f7c3) bg_popup_sub_pane_cp23

0x9117,	// (0x00063315) listscroll_japin_cand_pane

0x911f,	// (0x0006331d) popup_fep_japan_candidate_window_t1

0x912d,	// (0x0006332b) candidate_pane_ParamLimits

0x912d,	// (0x0006332b) candidate_pane

0x913f,	// (0x0006333d) scroll_pane_cp30

0x9149,	// (0x00063347) list_single_popup_jap_candidate_pane_ParamLimits

0x9149,	// (0x00063347) list_single_popup_jap_candidate_pane

0x55c5,	// (0x0005f7c3) list_highlight_pane_cp30

0x915d,	// (0x0006335b) list_single_popup_jap_candidate_pane_t1

0xa898,	// (0x00064a96) level_1_signal

0xa8aa,	// (0x00064aa8) level_2_signal

0xa8bd,	// (0x00064abb) level_3_signal

0xa8d0,	// (0x00064ace) level_4_signal

0xa8e3,	// (0x00064ae1) level_5_signal

0xa8f6,	// (0x00064af4) level_6_signal

0xa909,	// (0x00064b07) level_7_signal

0xa898,	// (0x00064a96) level_1_battery

0xa8aa,	// (0x00064aa8) level_2_battery

0xa8bd,	// (0x00064abb) level_3_battery

0xa8d0,	// (0x00064ace) level_4_battery

0xa8e3,	// (0x00064ae1) level_5_battery

0xa8f6,	// (0x00064af4) level_6_battery

0xa909,	// (0x00064b07) level_7_battery

0xc077,	// (0x00066275) list_menu_pane_ParamLimits

0xc077,	// (0x00066275) list_menu_pane

0xc08d,	// (0x0006628b) scroll_pane_cp25_ParamLimits

0xc08d,	// (0x0006628b) scroll_pane_cp25

0xc0a6,	// (0x000662a4) list_double2_graphic_pane_cp2_ParamLimits

0xc0a6,	// (0x000662a4) list_double2_graphic_pane_cp2

0xc0a6,	// (0x000662a4) list_double2_large_graphic_pane_cp2_ParamLimits

0xc0a6,	// (0x000662a4) list_double2_large_graphic_pane_cp2

0xc0a6,	// (0x000662a4) list_double2_pane_cp2_ParamLimits

0xc0a6,	// (0x000662a4) list_double2_pane_cp2

0xc0a6,	// (0x000662a4) list_double_graphic_pane_cp2_ParamLimits

0xc0a6,	// (0x000662a4) list_double_graphic_pane_cp2

0xc0a6,	// (0x000662a4) list_double_large_graphic_pane_cp2_ParamLimits

0xc0a6,	// (0x000662a4) list_double_large_graphic_pane_cp2

0xc0a6,	// (0x000662a4) list_double_number_pane_cp2_ParamLimits

0xc0a6,	// (0x000662a4) list_double_number_pane_cp2

0xc0a6,	// (0x000662a4) list_double_pane_cp2_ParamLimits

0xc0a6,	// (0x000662a4) list_double_pane_cp2

0xa92f,	// (0x00064b2d) list_single_2graphic_pane_cp2_ParamLimits

0xa92f,	// (0x00064b2d) list_single_2graphic_pane_cp2

0xa92f,	// (0x00064b2d) list_single_graphic_heading_pane_cp2_ParamLimits

0xa92f,	// (0x00064b2d) list_single_graphic_heading_pane_cp2

0xa92f,	// (0x00064b2d) list_single_graphic_pane_cp2_ParamLimits

0xa92f,	// (0x00064b2d) list_single_graphic_pane_cp2

0xa92f,	// (0x00064b2d) list_single_heading_pane_cp2_ParamLimits

0xa92f,	// (0x00064b2d) list_single_heading_pane_cp2

0xc0b6,	// (0x000662b4) list_single_large_graphic_pane_cp2_ParamLimits

0xc0b6,	// (0x000662b4) list_single_large_graphic_pane_cp2

0xa92f,	// (0x00064b2d) list_single_number_heading_pane_cp2_ParamLimits

0xa92f,	// (0x00064b2d) list_single_number_heading_pane_cp2

0xa92f,	// (0x00064b2d) list_single_number_pane_cp2_ParamLimits

0xa92f,	// (0x00064b2d) list_single_number_pane_cp2

0xa92f,	// (0x00064b2d) list_single_pane_cp2_ParamLimits

0xa92f,	// (0x00064b2d) list_single_pane_cp2

0xc0cf,	// (0x000662cd) bg_popup_sub_pane_cp22

0xf3c0,	// (0x000695be) popup_side_volume_key_window_g1

0xf3ea,	// (0x000695e8) popup_side_volume_key_window_t1

0xf408,	// (0x00069606) volume_small_pane_cp1

0x568c,	// (0x0005f88a) bg_popup_sub_pane_cp24_ParamLimits

0x568c,	// (0x0005f88a) bg_popup_sub_pane_cp24

0xc0e5,	// (0x000662e3) fep_china_uni_candidate_pane_ParamLimits

0xc0e5,	// (0x000662e3) fep_china_uni_candidate_pane

0xc0f9,	// (0x000662f7) fep_china_uni_entry_pane

0xc109,	// (0x00066307) popup_fep_china_uni_window_g1

0xc125,	// (0x00066323) fep_china_uni_entry_pane_g1

0xc12f,	// (0x0006632d) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0006992b) fep_china_uni_entry_pane_g

0xc139,	// (0x00066337) fep_entry_item_pane

0xc143,	// (0x00066341) fep_candidate_item_pane

0xc14b,	// (0x00066349) fep_china_uni_candidate_pane_g1

0xc155,	// (0x00066353) fep_china_uni_candidate_pane_g2

0xc15d,	// (0x0006635b) fep_china_uni_candidate_pane_g3

0xc165,	// (0x00066363) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x00069930) fep_china_uni_candidate_pane_g

0x55bb,	// (0x0005f7b9) fep_entry_item_pane_g1

0xc16f,	// (0x0006636d) fep_entry_item_pane_t1_ParamLimits

0xc16f,	// (0x0006636d) fep_entry_item_pane_t1

0xc185,	// (0x00066383) fep_candidate_item_pane_t1_ParamLimits

0xc185,	// (0x00066383) fep_candidate_item_pane_t1

0xc19a,	// (0x00066398) fep_candidate_item_pane_t2_ParamLimits

0xc19a,	// (0x00066398) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00069939) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00069939) fep_candidate_item_pane_t

0x561f,	// (0x0005f81d) list_highlight_pane_cp31_ParamLimits

0x561f,	// (0x0005f81d) list_highlight_pane_cp31

0xc1ac,	// (0x000663aa) level_1_signal_lsc

0xc1b5,	// (0x000663b3) level_2_signal_lsc

0xc1be,	// (0x000663bc) level_3_signal_lsc

0xc1c7,	// (0x000663c5) level_4_signal_lsc

0xc1d0,	// (0x000663ce) level_5_signal_lsc

0xc1d9,	// (0x000663d7) level_6_signal_lsc

0xc1e2,	// (0x000663e0) level_7_signal_lsc

0xc1e2,	// (0x000663e0) level_1_battery_lsc

0xc1eb,	// (0x000663e9) level_2_battery_lsc

0xc1f4,	// (0x000663f2) level_3_battery_lsc

0xc1fd,	// (0x000663fb) level_4_battery_lsc

0xc206,	// (0x00066404) level_5_battery_lsc

0xc20f,	// (0x0006640d) level_6_battery_lsc

0xc1ac,	// (0x000663aa) level_7_battery_lsc

0xc218,	// (0x00066416) scroll_handle_focus_pane_g1

0xc221,	// (0x0006641f) scroll_handle_focus_pane_g2

0xc22a,	// (0x00066428) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0006993e) scroll_handle_focus_pane_g

0xa9c1,	// (0x00064bbf) list_single_2graphic_pane_g1_ParamLimits

0xa9c1,	// (0x00064bbf) list_single_2graphic_pane_g1

0xa1a8,	// (0x000643a6) list_single_2graphic_pane_g2_ParamLimits

0xa1a8,	// (0x000643a6) list_single_2graphic_pane_g2

0x041f,	// (0x0005a61d) list_single_2graphic_pane_g3_ParamLimits

0x041f,	// (0x0005a61d) list_single_2graphic_pane_g3

0xa9cd,	// (0x00064bcb) list_single_2graphic_pane_g4_ParamLimits

0xa9cd,	// (0x00064bcb) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x00069945) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x00069945) list_single_2graphic_pane_g

0xa9de,	// (0x00064bdc) list_single_2graphic_pane_t1_ParamLimits

0xa9de,	// (0x00064bdc) list_single_2graphic_pane_t1

0xaa0c,	// (0x00064c0a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaa0c,	// (0x00064c0a) list_double2_graphic_large_graphic_pane_g1

0xa3be,	// (0x000645bc) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa3be,	// (0x000645bc) list_double2_graphic_large_graphic_pane_g2

0xa2ff,	// (0x000644fd) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa2ff,	// (0x000644fd) list_double2_graphic_large_graphic_pane_g3

0xaa1e,	// (0x00064c1c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaa1e,	// (0x00064c1c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0006994e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0006994e) list_double2_graphic_large_graphic_pane_g

0xaa2a,	// (0x00064c28) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xaa2a,	// (0x00064c28) list_double2_graphic_large_graphic_pane_t1

0xaa40,	// (0x00064c3e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xaa40,	// (0x00064c3e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x00069957) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x00069957) list_double2_graphic_large_graphic_pane_t

0xe48d,	// (0x0006868b) popup_fast_swap_window_ParamLimits

0xe48d,	// (0x0006868b) popup_fast_swap_window

0xe4ab,	// (0x000686a9) popup_side_volume_key_window

0xe4c9,	// (0x000686c7) stacon_top_pane

0xe4d3,	// (0x000686d1) status_pane_ParamLimits

0xe4d3,	// (0x000686d1) status_pane

0xe4c9,	// (0x000686c7) status_small_pane

0x55c5,	// (0x0005f7c3) control_pane

0x55c5,	// (0x0005f7c3) stacon_bottom_pane

0x8c7d,	// (0x00062e7b) scroll_pane_cp121

0x8c74,	// (0x00062e72) set_content_pane

0xaa52,	// (0x00064c50) bg_active_tab_pane_g1_cp1

0xe404,	// (0x00068602) bg_active_tab_pane_g2_cp1

0xaa5b,	// (0x00064c59) bg_active_tab_pane_g3_cp1

0xaa52,	// (0x00064c50) bg_passive_tab_pane_g1_cp1

0xe404,	// (0x00068602) bg_passive_tab_pane_g2_cp1

0xaa5b,	// (0x00064c59) bg_passive_tab_pane_g3_cp1

0xaa64,	// (0x00064c62) bg_active_tab_pane_g1_cp2

0xe404,	// (0x00068602) bg_active_tab_pane_g2_cp2

0xaa6d,	// (0x00064c6b) bg_active_tab_pane_g3_cp2

0xaa64,	// (0x00064c62) bg_passive_tab_pane_g1_cp2

0xe404,	// (0x00068602) bg_passive_tab_pane_g2_cp2

0xaa6d,	// (0x00064c6b) bg_passive_tab_pane_g3_cp2

0xaa76,	// (0x00064c74) bg_active_tab_pane_g1_cp3

0xe404,	// (0x00068602) bg_active_tab_pane_g2_cp3

0xaa7f,	// (0x00064c7d) bg_active_tab_pane_g3_cp3

0xaa76,	// (0x00064c74) bg_passive_tab_pane_g1_cp3

0xe404,	// (0x00068602) bg_passive_tab_pane_g2_cp3

0xaa7f,	// (0x00064c7d) bg_passive_tab_pane_g3_cp3

0xaa88,	// (0x00064c86) bg_active_tab_pane_g1_cp4

0xe404,	// (0x00068602) bg_active_tab_pane_g2_cp4

0xaa91,	// (0x00064c8f) bg_active_tab_pane_g3_cp4

0xaa88,	// (0x00064c86) bg_passive_tab_pane_g1_cp4

0xe404,	// (0x00068602) bg_passive_tab_pane_g2_cp4

0xaa91,	// (0x00064c8f) bg_passive_tab_pane_g3_cp4

0xe44b,	// (0x00068649) bg_active_tab_pane_g1_cp5

0xe404,	// (0x00068602) bg_active_tab_pane_g2_cp5

0xe454,	// (0x00068652) bg_active_tab_pane_g3_cp5

0xe44b,	// (0x00068649) bg_passive_tab_pane_g1_cp5

0xe404,	// (0x00068602) bg_passive_tab_pane_g2_cp5

0xe454,	// (0x00068652) bg_passive_tab_pane_g3_cp5

0x4145,	// (0x0005e343) list_set_graphic_pane_ParamLimits

0x4145,	// (0x0005e343) list_set_graphic_pane

0x55c5,	// (0x0005f7c3) bg_set_opt_pane_cp4

0xaa9a,	// (0x00064c98) list_set_graphic_pane_g1_ParamLimits

0xaa9a,	// (0x00064c98) list_set_graphic_pane_g1

0xaaa6,	// (0x00064ca4) list_set_graphic_pane_g2_ParamLimits

0xaaa6,	// (0x00064ca4) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0006995c) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0006995c) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00069ce4) volume_small_pane_cp_g

0xaaca,	// (0x00064cc8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xaaca,	// (0x00064cc8) list_double2_large_graphic_pane_g1_cp2

0xaad8,	// (0x00064cd6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xaad8,	// (0x00064cd6) list_double2_large_graphic_pane_g2_cp2

0xe45d,	// (0x0006865b) list_double2_large_graphic_pane_g3_cp2

0xe465,	// (0x00068663) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe465,	// (0x00068663) list_double2_large_graphic_pane_t1_cp2

0xe47b,	// (0x00068679) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe47b,	// (0x00068679) list_double2_large_graphic_pane_t2_cp2

0xc61a,	// (0x00066818) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc61a,	// (0x00066818) list_double_large_graphic_pane_g1_cp2

0xc62d,	// (0x0006682b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc62d,	// (0x0006682b) list_double_large_graphic_pane_g2_cp2

0xe5b4,	// (0x000687b2) list_double_large_graphic_pane_g3_cp2

0x354b,	// (0x0005d749) list_double_large_graphic_pane_g4_cp

0x3553,	// (0x0005d751) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3553,	// (0x0005d751) list_double_large_graphic_pane_t1_cp2

0x356a,	// (0x0005d768) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x356a,	// (0x0005d768) list_double_large_graphic_pane_t2_cp2

0xaae9,	// (0x00064ce7) list_double2_graphic_pane_g1_cp2_ParamLimits

0xaae9,	// (0x00064ce7) list_double2_graphic_pane_g1_cp2

0xaaf7,	// (0x00064cf5) list_double2_graphic_pane_g2_cp2_ParamLimits

0xaaf7,	// (0x00064cf5) list_double2_graphic_pane_g2_cp2

0xab08,	// (0x00064d06) list_double2_graphic_pane_g3_cp2

0xe4e1,	// (0x000686df) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe4e1,	// (0x000686df) list_double2_graphic_pane_t1_cp2

0xe4f7,	// (0x000686f5) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe4f7,	// (0x000686f5) list_double2_graphic_pane_t2_cp2

0xe509,	// (0x00068707) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe509,	// (0x00068707) list_single_number_heading_pane_g1_cp2

0xe515,	// (0x00068713) list_single_number_heading_pane_g2_cp2

0xe51d,	// (0x0006871b) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe51d,	// (0x0006871b) list_single_number_heading_pane_t1_cp2

0xab12,	// (0x00064d10) list_single_number_heading_pane_t2_cp2_ParamLimits

0xab12,	// (0x00064d10) list_single_number_heading_pane_t2_cp2

0xe533,	// (0x00068731) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe533,	// (0x00068731) list_single_number_heading_pane_t3_cp2

0xe509,	// (0x00068707) list_single_heading_pane_g1_cp2_ParamLimits

0xe509,	// (0x00068707) list_single_heading_pane_g1_cp2

0xe515,	// (0x00068713) list_single_heading_pane_g2_cp2

0xe51d,	// (0x0006871b) list_single_heading_pane_t1_cp2_ParamLimits

0xe51d,	// (0x0006871b) list_single_heading_pane_t1_cp2

0xc606,	// (0x00066804) list_single_heading_pane_t2_cp2_ParamLimits

0xc606,	// (0x00066804) list_single_heading_pane_t2_cp2

0x3269,	// (0x0005d467) list_double_graphic_pane_g1_cp2_ParamLimits

0x3269,	// (0x0005d467) list_double_graphic_pane_g1_cp2

0x3275,	// (0x0005d473) list_double_graphic_pane_g2_cp2_ParamLimits

0x3275,	// (0x0005d473) list_double_graphic_pane_g2_cp2

0x3284,	// (0x0005d482) list_double_graphic_pane_g3_cp2

0x328c,	// (0x0005d48a) list_double_graphic_pane_t1_cp2_ParamLimits

0x328c,	// (0x0005d48a) list_double_graphic_pane_t1_cp2

0x32a2,	// (0x0005d4a0) list_double_graphic_pane_t2_cp2_ParamLimits

0x32a2,	// (0x0005d4a0) list_double_graphic_pane_t2_cp2

0xe5a8,	// (0x000687a6) list_double_number_pane_g1_cp2_ParamLimits

0xe5a8,	// (0x000687a6) list_double_number_pane_g1_cp2

0xe5b4,	// (0x000687b2) list_double_number_pane_g2_cp2

0xc5a0,	// (0x0006679e) list_double_number_pane_t1_cp2_ParamLimits

0xc5a0,	// (0x0006679e) list_double_number_pane_t1_cp2

0x3241,	// (0x0005d43f) list_double_number_pane_t2_cp2_ParamLimits

0x3241,	// (0x0005d43f) list_double_number_pane_t2_cp2

0x3257,	// (0x0005d455) list_double_number_pane_t3_cp2_ParamLimits

0x3257,	// (0x0005d455) list_double_number_pane_t3_cp2

0xc4ee,	// (0x000666ec) list_single_graphic_pane_g1_cp2_ParamLimits

0xc4ee,	// (0x000666ec) list_single_graphic_pane_g1_cp2

0xe5f4,	// (0x000687f2) list_single_graphic_pane_g2_cp2_ParamLimits

0xe5f4,	// (0x000687f2) list_single_graphic_pane_g2_cp2

0xe600,	// (0x000687fe) list_single_graphic_pane_g3_cp2

0x30ec,	// (0x0005d2ea) list_single_graphic_pane_t1_cp2_ParamLimits

0x30ec,	// (0x0005d2ea) list_single_graphic_pane_t1_cp2

0xe5f4,	// (0x000687f2) list_single_number_pane_g1_cp2_ParamLimits

0xe5f4,	// (0x000687f2) list_single_number_pane_g1_cp2

0xe600,	// (0x000687fe) list_single_number_pane_g2_cp2

0x30ec,	// (0x0005d2ea) list_single_number_pane_t1_cp2_ParamLimits

0x30ec,	// (0x0005d2ea) list_single_number_pane_t1_cp2

0xc4da,	// (0x000666d8) list_single_number_pane_t2_cp2_ParamLimits

0xc4da,	// (0x000666d8) list_single_number_pane_t2_cp2

0xaad8,	// (0x00064cd6) list_double2_pane_g1_cp2_ParamLimits

0xaad8,	// (0x00064cd6) list_double2_pane_g1_cp2

0xe45d,	// (0x0006865b) list_double2_pane_g2_cp2

0xe580,	// (0x0006877e) list_double2_pane_t1_cp2_ParamLimits

0xe580,	// (0x0006877e) list_double2_pane_t1_cp2

0xe596,	// (0x00068794) list_double2_pane_t2_cp2_ParamLimits

0xe596,	// (0x00068794) list_double2_pane_t2_cp2

0xe5a8,	// (0x000687a6) list_double_pane_g1_cp2_ParamLimits

0xe5a8,	// (0x000687a6) list_double_pane_g1_cp2

0xe5b4,	// (0x000687b2) list_double_pane_g2_cp2

0xe5bc,	// (0x000687ba) list_double_pane_t1_cp2_ParamLimits

0xe5bc,	// (0x000687ba) list_double_pane_t1_cp2

0xe5d2,	// (0x000687d0) list_double_pane_t2_cp2_ParamLimits

0xe5d2,	// (0x000687d0) list_double_pane_t2_cp2

0xe5e4,	// (0x000687e2) list_single_pane_cp2_g3

0xe5f4,	// (0x000687f2) list_single_pane_g1_cp2_ParamLimits

0xe5f4,	// (0x000687f2) list_single_pane_g1_cp2

0xe600,	// (0x000687fe) list_single_pane_g2_cp2

0xe608,	// (0x00068806) list_single_pane_t1_cp2_ParamLimits

0xe608,	// (0x00068806) list_single_pane_t1_cp2

0xab40,	// (0x00064d3e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xab40,	// (0x00064d3e) list_single_large_graphic_pane_g1_cp2

0xe2ad,	// (0x000684ab) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xe2ad,	// (0x000684ab) list_single_large_graphic_pane_g2_cp2

0xe620,	// (0x0006881e) list_single_large_graphic_pane_g3_cp2

0xe628,	// (0x00068826) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xe628,	// (0x00068826) list_single_large_graphic_pane_g4_cp1

0xe642,	// (0x00068840) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe642,	// (0x00068840) list_single_large_graphic_pane_t1_cp2

0x30b6,	// (0x0005d2b4) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x30b6,	// (0x0005d2b4) list_single_graphic_heading_pane_g1_cp2

0xc4b5,	// (0x000666b3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc4b5,	// (0x000666b3) list_single_graphic_heading_pane_g4_cp2

0xe600,	// (0x000687fe) list_single_graphic_heading_pane_g5_cp2

0x30c2,	// (0x0005d2c0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x30c2,	// (0x0005d2c0) list_single_graphic_heading_pane_t1_cp2

0xc4c6,	// (0x000666c4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc4c6,	// (0x000666c4) list_single_graphic_heading_pane_t2_cp2

0x3077,	// (0x0005d275) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3077,	// (0x0005d275) list_single_2graphic_pane_g1_cp2

0xc4b5,	// (0x000666b3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc4b5,	// (0x000666b3) list_single_2graphic_pane_g2_cp2

0xe600,	// (0x000687fe) list_single_2graphic_pane_g3_cp2

0x3094,	// (0x0005d292) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3094,	// (0x0005d292) list_single_2graphic_pane_g4_cp2

0x30a0,	// (0x0005d29e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x30a0,	// (0x0005d29e) list_single_2graphic_pane_t1_cp2

0x55bb,	// (0x0005f7b9) list_highlight_pane_g10_cp1

0x2c4f,	// (0x0005ce4d) list_highlight_pane_g1_cp1

0x2c57,	// (0x0005ce55) list_highlight_pane_g2_cp1

0x2c5f,	// (0x0005ce5d) list_highlight_pane_g3_cp1

0x2c67,	// (0x0005ce65) list_highlight_pane_g4_cp1

0x2c6f,	// (0x0005ce6d) list_highlight_pane_g5_cp1

0x2c77,	// (0x0005ce75) list_highlight_pane_g6_cp1

0x2c7f,	// (0x0005ce7d) list_highlight_pane_g7_cp1

0x2c87,	// (0x0005ce85) list_highlight_pane_g8_cp1

0x2c8f,	// (0x0005ce8d) list_highlight_pane_g9_cp1

0xc47b,	// (0x00066679) form_field_slider_pane_t3

0xc489,	// (0x00066687) form_field_slider_pane_t4

0x2b8b,	// (0x0005cd89) slider_form_pane_ParamLimits

0x2b8b,	// (0x0005cd89) slider_form_pane

0x55c5,	// (0x0005f7c3) control_abbreviations

0x55c5,	// (0x0005f7c3) control_conventions

0x55c5,	// (0x0005f7c3) control_definitions

0x55c5,	// (0x0005f7c3) format_table_attribute

0x3377,	// (0x0005d575) bg_popup_preview_window_pane_g9

0x55c5,	// (0x0005f7c3) format_table_data2

0x55c5,	// (0x0005f7c3) format_table_data3

0x55c5,	// (0x0005f7c3) format_table_data_example

0x0008,

0x55c5,	// (0x0005f7c3) intro_purpose

0xf8f5,	// (0x00069af3) bg_popup_preview_window_pane_g

0x55c5,	// (0x0005f7c3) texts_category

0x55c5,	// (0x0005f7c3) texts_graphics

0xe658,	// (0x00068856) text_digital

0xe667,	// (0x00068865) text_primary

0xe676,	// (0x00068874) text_primary_small

0xe685,	// (0x00068883) text_secondary

0xe694,	// (0x00068892) text_title

0x3c8a,	// (0x0005de88) bg_passive_tab_pane_g1_cp3_srt

0xe404,	// (0x00068602) bg_passive_tab_pane_g2_cp3_srt

0x3c93,	// (0x0005de91) bg_passive_tab_pane_g3_cp3_srt

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp3_srt_ParamLimits

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp3_srt

0x3c9c,	// (0x0005de9a) tabs_4_active_pane_srt_g1

0xc914,	// (0x00066b12) tabs_4_active_pane_srt_t1_ParamLimits

0xc914,	// (0x00066b12) tabs_4_active_pane_srt_t1

0x3c8a,	// (0x0005de88) bg_active_tab_pane_g1_cp3_copy1

0xe404,	// (0x00068602) bg_active_tab_pane_g2_cp3_copy1

0x3c93,	// (0x0005de91) bg_active_tab_pane_g3_cp3_copy1

0x561f,	// (0x0005f81d) tabs_2_long_active_pane_srt_ParamLimits

0x561f,	// (0x0005f81d) tabs_2_long_active_pane_srt

0x561f,	// (0x0005f81d) tabs_2_long_passive_pane_srt_ParamLimits

0x561f,	// (0x0005f81d) tabs_2_long_passive_pane_srt

0x191c,	// (0x0005bb1a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x191c,	// (0x0005bb1a) bg_passive_tab_pane_cp4_srt

0x3954,	// (0x0005db52) bg_passive_tab_pane_g1_cp4_srt

0xe404,	// (0x00068602) bg_passive_tab_pane_g2_cp4_srt

0x395d,	// (0x0005db5b) bg_passive_tab_pane_g3_cp4_srt

0x561f,	// (0x0005f81d) bg_active_tab_pane_cp4_srt_ParamLimits

0x561f,	// (0x0005f81d) bg_active_tab_pane_cp4_srt

0xc6f1,	// (0x000668ef) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc6f1,	// (0x000668ef) tabs_2_long_active_pane_srt_t1

0x3954,	// (0x0005db52) bg_active_tab_pane_g1_cp4_srt

0xe404,	// (0x00068602) bg_active_tab_pane_g2_cp4_srt

0x395d,	// (0x0005db5b) bg_active_tab_pane_g3_cp4_srt

0x568c,	// (0x0005f88a) tabs_3_long_active_pane_srt_ParamLimits

0x568c,	// (0x0005f88a) tabs_3_long_active_pane_srt

0x568c,	// (0x0005f88a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x568c,	// (0x0005f88a) tabs_3_long_passive_pane_cp_srt

0x568c,	// (0x0005f88a) tabs_3_long_passive_pane_srt_ParamLimits

0x568c,	// (0x0005f88a) tabs_3_long_passive_pane_srt

0x191c,	// (0x0005bb1a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x191c,	// (0x0005bb1a) bg_passive_tab_pane_cp5_srt

0xe44b,	// (0x00068649) bg_passive_tab_pane_g1_cp5_srt

0xe404,	// (0x00068602) bg_passive_tab_pane_g2_cp5_srt

0xe454,	// (0x00068652) bg_passive_tab_pane_g3_cp5_srt

0x561f,	// (0x0005f81d) bg_active_tab_pane_cp5_srt_ParamLimits

0x561f,	// (0x0005f81d) bg_active_tab_pane_cp5_srt

0xc6db,	// (0x000668d9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc6db,	// (0x000668d9) tabs_3_long_active_pane_srt_t1

0xe44b,	// (0x00068649) bg_active_tab_pane_g1_cp5_srt

0xe404,	// (0x00068602) bg_active_tab_pane_g2_cp5_srt

0xe454,	// (0x00068652) bg_active_tab_pane_g3_cp5_srt

0x3934,	// (0x0005db32) navi_text_pane_srt_t1

0x392c,	// (0x0005db2a) navi_icon_pane_srt_g1

0x016b,	// (0x0005a369) midp_editing_number_pane_srt

0xe6a3,	// (0x000688a1) midp_ticker_pane_srt

0x0173,	// (0x0005a371) midp_ticker_pane_srt_g1

0x017b,	// (0x0005a379) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0006997b) midp_ticker_pane_srt_g

0x0183,	// (0x0005a381) midp_ticker_pane_srt_t1

0x391d,	// (0x0005db1b) midp_editing_number_pane_t1_copy1

0x191c,	// (0x0005bb1a) listscroll_midp_pane

0x191c,	// (0x0005bb1a) midp_form_pane

0xe6ab,	// (0x000688a9) midp_info_popup_window_ParamLimits

0xe6ab,	// (0x000688a9) midp_info_popup_window

0x8d46,	// (0x00062f44) bg_popup_sub_pane_cp50_ParamLimits

0x8d46,	// (0x00062f44) bg_popup_sub_pane_cp50

0x2885,	// (0x0005ca83) listscroll_midp_info_pane_ParamLimits

0x2885,	// (0x0005ca83) listscroll_midp_info_pane

0x286d,	// (0x0005ca6b) listscroll_form_midp_pane_ParamLimits

0x286d,	// (0x0005ca6b) listscroll_form_midp_pane

0x2879,	// (0x0005ca77) scroll_bar_cp050

0xc46f,	// (0x0006666d) list_midp_pane

0x4725,	// (0x0005e923) signal_pane_g2_cp

0x2787,	// (0x0005c985) listscroll_midp_info_pane_t1_ParamLimits

0x2787,	// (0x0005c985) listscroll_midp_info_pane_t1

0x279f,	// (0x0005c99d) listscroll_midp_info_pane_t2_ParamLimits

0x279f,	// (0x0005c99d) listscroll_midp_info_pane_t2

0x27dd,	// (0x0005c9db) listscroll_midp_info_pane_t3_ParamLimits

0x27dd,	// (0x0005c9db) listscroll_midp_info_pane_t3

0x2817,	// (0x0005ca15) listscroll_midp_info_pane_t4_ParamLimits

0x2817,	// (0x0005ca15) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x00069a2e) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x00069a2e) listscroll_midp_info_pane_t

0x8dc6,	// (0x00062fc4) scroll_pane_cp21

0x2721,	// (0x0005c91f) form_midp_field_choice_group_pane

0x272a,	// (0x0005c928) form_midp_field_text_pane

0x276d,	// (0x0005c96b) form_midp_field_time_pane

0x2775,	// (0x0005c973) form_midp_gauge_slider_pane

0x277e,	// (0x0005c97c) form_midp_gauge_wait_pane

0x55c5,	// (0x0005f7c3) form_midp_image_pane

0xb7da,	// (0x000659d8) list_single_midp_pane_ParamLimits

0xb7da,	// (0x000659d8) list_single_midp_pane

0xc447,	// (0x00066645) form_midp_field_text_pane_t1

0x24d1,	// (0x0005c6cf) input_focus_pane_cp050

0x2710,	// (0x0005c90e) list_midp_form_text_pane

0x26b4,	// (0x0005c8b2) form_midp_field_choice_group_pane_t1

0x26c2,	// (0x0005c8c0) input_focus_pane_cp051

0x26d6,	// (0x0005c8d4) list_midp_choice_pane

0x55c5,	// (0x0005f7c3) status_idle_pane

0x2698,	// (0x0005c896) form_midp_field_time_pane_t1

0x55bb,	// (0x0005f7b9) wait_anim_pane_g2_copy1

0x26a6,	// (0x0005c8a4) form_midp_field_time_pane_t2

0x0001,

0x0020,	// (0x0005a21e) aid_navinavi_width_2_pane

0xf82b,	// (0x00069a29) form_midp_field_time_pane_t

0x55c5,	// (0x0005f7c3) input_focus_pane_cp052

0x55c5,	// (0x0005f7c3) bg_input_focus_pane_cp040

0x2658,	// (0x0005c856) form_midp_gauge_slider_pane_t1

0x2666,	// (0x0005c864) form_midp_gauge_slider_pane_t2

0xc42b,	// (0x00066629) form_midp_gauge_slider_pane_t3

0xc439,	// (0x00066637) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x00069a20) form_midp_gauge_slider_pane_t

0x2690,	// (0x0005c88e) form_midp_slider_pane

0x561f,	// (0x0005f81d) bg_input_focus_pane_cp041_ParamLimits

0x561f,	// (0x0005f81d) bg_input_focus_pane_cp041

0x2625,	// (0x0005c823) form_midp_gauge_wait_pane_t1_ParamLimits

0x2625,	// (0x0005c823) form_midp_gauge_wait_pane_t1

0x2637,	// (0x0005c835) form_midp_gauge_wait_pane_t2_ParamLimits

0x2637,	// (0x0005c835) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x00069a1b) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x00069a1b) form_midp_gauge_wait_pane_t

0x2649,	// (0x0005c847) form_midp_wait_pane_ParamLimits

0x2649,	// (0x0005c847) form_midp_wait_pane

0x25ed,	// (0x0005c7eb) form_midp_image_pane_g1

0x25f6,	// (0x0005c7f4) form_midp_image_pane_t1

0x2605,	// (0x0005c803) form_midp_image_pane_t2

0x2614,	// (0x0005c812) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x00069a14) form_midp_image_pane_t

0x25e4,	// (0x0005c7e2) list_single_midp_pane_g1

0xe827,	// (0x00068a25) list_single_midp_pane_t1

0xc414,	// (0x00066612) list_midp_form_item_pane_ParamLimits

0xc414,	// (0x00066612) list_midp_form_item_pane

0xe6c0,	// (0x000688be) list_midp_form_item_pane_t1

0xe6cf,	// (0x000688cd) midp_ticker_pane_g1

0xe6db,	// (0x000688d9) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x00069961) midp_ticker_pane_g

0xabe5,	// (0x00064de3) midp_ticker_pane_t1

0xc880,	// (0x00066a7e) midp_editing_number_pane_t1

0x3b6e,	// (0x0005dd6c) midp_editing_number_pane

0x3b7d,	// (0x0005dd7b) midp_ticker_pane

0x390d,	// (0x0005db0b) ai_message_heading_pane

0x55c5,	// (0x0005f7c3) bg_popup_window_pane_cp14

0x3915,	// (0x0005db13) listscroll_ai_message_pane

0x3893,	// (0x0005da91) ai_message_heading_pane_g1_ParamLimits

0x3893,	// (0x0005da91) ai_message_heading_pane_g1

0x389f,	// (0x0005da9d) ai_message_heading_pane_g2_ParamLimits

0x389f,	// (0x0005da9d) ai_message_heading_pane_g2

0x38ad,	// (0x0005daab) ai_message_heading_pane_g3_ParamLimits

0x38ad,	// (0x0005daab) ai_message_heading_pane_g3

0x38b9,	// (0x0005dab7) ai_message_heading_pane_g4_ParamLimits

0x38b9,	// (0x0005dab7) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x00069b55) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x00069b55) ai_message_heading_pane_g

0x38c5,	// (0x0005dac3) ai_message_heading_pane_t1_ParamLimits

0x38c5,	// (0x0005dac3) ai_message_heading_pane_t1

0x38df,	// (0x0005dadd) ai_message_heading_pane_t2_ParamLimits

0x38df,	// (0x0005dadd) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x00069b5e) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x00069b5e) ai_message_heading_pane_t

0x38f3,	// (0x0005daf1) bg_popup_heading_pane_cp1_ParamLimits

0x38f3,	// (0x0005daf1) bg_popup_heading_pane_cp1

0x3881,	// (0x0005da7f) list_ai_message_pane_ParamLimits

0x3881,	// (0x0005da7f) list_ai_message_pane

0x8dc6,	// (0x00062fc4) scroll_pane_cp10

0x381d,	// (0x0005da1b) list_ai_message_pane_g1

0x3825,	// (0x0005da23) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x00069b32) list_ai_message_pane_g

0x382d,	// (0x0005da2b) list_ai_message_pane_t1_ParamLimits

0x382d,	// (0x0005da2b) list_ai_message_pane_t1

0x3842,	// (0x0005da40) list_ai_message_pane_t2_ParamLimits

0x3842,	// (0x0005da40) list_ai_message_pane_t2

0x3857,	// (0x0005da55) list_ai_message_pane_t3_ParamLimits

0x3857,	// (0x0005da55) list_ai_message_pane_t3

0x386c,	// (0x0005da6a) list_ai_message_pane_t4_ParamLimits

0x386c,	// (0x0005da6a) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x00069b37) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x00069b37) list_ai_message_pane_t

0xc6c1,	// (0x000668bf) cell_ai_soft_ind_pane_ParamLimits

0xc6c1,	// (0x000668bf) cell_ai_soft_ind_pane

0x0001,	// (0x0005a1ff) cell_ai_soft_ind_pane_g1_ParamLimits

0x0001,	// (0x0005a1ff) cell_ai_soft_ind_pane_g1

0x55c5,	// (0x0005f7c3) grid_highlight_cp1

0x000e,	// (0x0005a20c) text_secondary_cp56_ParamLimits

0x000e,	// (0x0005a20c) text_secondary_cp56

0x37db,	// (0x0005d9d9) example_general_pane_ParamLimits

0x37db,	// (0x0005d9d9) example_general_pane

0x37e7,	// (0x0005d9e5) example_parent_pane_g1_ParamLimits

0x37e7,	// (0x0005d9e5) example_parent_pane_g1

0x37f3,	// (0x0005d9f1) example_parent_pane_t1_ParamLimits

0x37f3,	// (0x0005d9f1) example_parent_pane_t1

0xb1ce,	// (0x000653cc) popup_preview_text_window_ParamLimits

0xb1ce,	// (0x000653cc) popup_preview_text_window

0xe5ec,	// (0x000687ea) list_single_pane_cp2_g4

0x8860,	// (0x00062a5e) bg_popup_preview_window_pane_ParamLimits

0x8860,	// (0x00062a5e) bg_popup_preview_window_pane

0x3381,	// (0x0005d57f) popup_preview_text_window_t1_ParamLimits

0x3381,	// (0x0005d57f) popup_preview_text_window_t1

0x339f,	// (0x0005d59d) popup_preview_text_window_t2_ParamLimits

0x339f,	// (0x0005d59d) popup_preview_text_window_t2

0x33e8,	// (0x0005d5e6) popup_preview_text_window_t3_ParamLimits

0x33e8,	// (0x0005d5e6) popup_preview_text_window_t3

0x342d,	// (0x0005d62b) popup_preview_text_window_t4_ParamLimits

0x342d,	// (0x0005d62b) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x00069b06) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x00069b06) popup_preview_text_window_t

0x34ab,	// (0x0005d6a9) scroll_pane_cp11

0x245d,	// (0x0005c65b) bg_popup_preview_window_pane_g1

0x3335,	// (0x0005d533) bg_popup_preview_window_pane_g2

0x333f,	// (0x0005d53d) bg_popup_preview_window_pane_g3

0x3349,	// (0x0005d547) bg_popup_preview_window_pane_g4

0x3353,	// (0x0005d551) bg_popup_preview_window_pane_g5

0x335d,	// (0x0005d55b) bg_popup_preview_window_pane_g6

0x3365,	// (0x0005d563) bg_popup_preview_window_pane_g7

0x336d,	// (0x0005d56b) bg_popup_preview_window_pane_g8

0xe127,	// (0x00068325) aid_popup_width_pane

0xb13e,	// (0x0006533c) popup_midp_note_alarm_window_ParamLimits

0xb13e,	// (0x0006533c) popup_midp_note_alarm_window

0x8c8e,	// (0x00062e8c) data_form_pane_ParamLimits

0xa63d,	// (0x0006483b) form_field_data_pane_g1

0xa647,	// (0x00064845) form_field_data_pane_t1_ParamLimits

0x8c9a,	// (0x00062e98) input_focus_pane_ParamLimits

0xe367,	// (0x00068565) data_form_wide_pane_ParamLimits

0xe378,	// (0x00068576) form_field_data_wide_pane_g1

0xe384,	// (0x00068582) form_field_data_wide_pane_t1_ParamLimits

0x8a15,	// (0x00062c13) input_focus_pane_cp6_ParamLimits

0xa788,	// (0x00064986) input_popup_find_pane_g1_ParamLimits

0xa788,	// (0x00064986) input_popup_find_pane_g1

0xf276,	// (0x00069474) aid_navi_side_left_pane

0xf28b,	// (0x00069489) aid_navi_side_right_pane

0x2d4a,	// (0x0005cf48) bg_popup_window_pane_cp30_ParamLimits

0x2d4a,	// (0x0005cf48) bg_popup_window_pane_cp30

0x2dc4,	// (0x0005cfc2) popup_midp_note_alarm_window_g1_ParamLimits

0x2dc4,	// (0x0005cfc2) popup_midp_note_alarm_window_g1

0x2df4,	// (0x0005cff2) popup_midp_note_alarm_window_t1_ParamLimits

0x2df4,	// (0x0005cff2) popup_midp_note_alarm_window_t1

0x2e95,	// (0x0005d093) popup_midp_note_alarm_window_t2_ParamLimits

0x2e95,	// (0x0005d093) popup_midp_note_alarm_window_t2

0x2f43,	// (0x0005d141) popup_midp_note_alarm_window_t3_ParamLimits

0x2f43,	// (0x0005d141) popup_midp_note_alarm_window_t3

0x2f75,	// (0x0005d173) popup_midp_note_alarm_window_t4_ParamLimits

0x2f75,	// (0x0005d173) popup_midp_note_alarm_window_t4

0x2f9b,	// (0x0005d199) popup_midp_note_alarm_window_t5_ParamLimits

0x2f9b,	// (0x0005d199) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x00069aa3) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x00069aa3) popup_midp_note_alarm_window_t

0x3047,	// (0x0005d245) wait_bar_pane_cp1_ParamLimits

0x3047,	// (0x0005d245) wait_bar_pane_cp1

0x55c5,	// (0x0005f7c3) wait_anim_pane_copy1

0x55c5,	// (0x0005f7c3) wait_border_pane_copy1

0x2a2f,	// (0x0005cc2d) wait_border_pane_g1_copy1

0xe39e,	// (0x0006859c) form_field_popup_pane_g1

0xa661,	// (0x0006485f) form_field_popup_pane_t1_ParamLimits

0x8c9a,	// (0x00062e98) input_focus_pane_cp7_ParamLimits

0x8cc8,	// (0x00062ec6) list_form_pane_ParamLimits

0xe3a6,	// (0x000685a4) form_field_popup_wide_pane_g1

0xe3ae,	// (0x000685ac) form_field_popup_wide_pane_t1_ParamLimits

0x8c9a,	// (0x00062e98) input_focus_pane_cp8_ParamLimits

0x8cd4,	// (0x00062ed2) list_form_wide_pane_ParamLimits

0x3d17,	// (0x0005df15) aid_size_cell_graphic_pane

0xa6e0,	// (0x000648de) data_form_pane_t1_ParamLimits

0xb96f,	// (0x00065b6d) data_form_wide_pane_t1_ParamLimits

0xb5d2,	// (0x000657d0) bg_status_flat_pane

0x9da2,	// (0x00063fa0) title_pane_t1_ParamLimits

0x55e7,	// (0x0005f7e5) title_pane_t2_ParamLimits

0x560d,	// (0x0005f80b) title_pane_t3_ParamLimits

0xf55d,	// (0x0006975b) title_pane_t_ParamLimits

0xa898,	// (0x00064a96) level_1_signal_ParamLimits

0xa8aa,	// (0x00064aa8) level_2_signal_ParamLimits

0xa8bd,	// (0x00064abb) level_3_signal_ParamLimits

0xa8d0,	// (0x00064ace) level_4_signal_ParamLimits

0xa8e3,	// (0x00064ae1) level_5_signal_ParamLimits

0xa8f6,	// (0x00064af4) level_6_signal_ParamLimits

0xa909,	// (0x00064b07) level_7_signal_ParamLimits

0xa898,	// (0x00064a96) level_1_battery_ParamLimits

0xa8aa,	// (0x00064aa8) level_2_battery_ParamLimits

0xa8bd,	// (0x00064abb) level_3_battery_ParamLimits

0xa8d0,	// (0x00064ace) level_4_battery_ParamLimits

0xa8e3,	// (0x00064ae1) level_5_battery_ParamLimits

0xa8f6,	// (0x00064af4) level_6_battery_ParamLimits

0xa909,	// (0x00064b07) level_7_battery_ParamLimits

0x2c4f,	// (0x0005ce4d) bg_status_flat_pane_g1

0x2c57,	// (0x0005ce55) bg_status_flat_pane_g2

0x2c5f,	// (0x0005ce5d) bg_status_flat_pane_g3

0x2c67,	// (0x0005ce65) bg_status_flat_pane_g4

0x2c6f,	// (0x0005ce6d) bg_status_flat_pane_g5

0x2c77,	// (0x0005ce75) bg_status_flat_pane_g6

0x2c7f,	// (0x0005ce7d) bg_status_flat_pane_g7

0x9e36,	// (0x00064034) tabs_3_active_pane_t1_ParamLimits

0x9e36,	// (0x00064034) tabs_3_passive_pane_t1_ParamLimits

0x9e50,	// (0x0006404e) tabs_4_active_pane_t1_ParamLimits

0x9e50,	// (0x0006404e) tabs_4_1_passive_pane_t1_ParamLimits

0xa79e,	// (0x0006499c) tabs_2_active_pane_t1_ParamLimits

0xa79e,	// (0x0006499c) tabs_2_passive_pane_t1_ParamLimits

0x561f,	// (0x0005f81d) bg_active_tab_pane_cp4_ParamLimits

0xa7b0,	// (0x000649ae) tabs_2_long_active_pane_t1_ParamLimits

0x191c,	// (0x0005bb1a) bg_passive_tab_pane_cp4_ParamLimits

0x048b,	// (0x0005a689) list_single_midp_graphic_pane_t1_ParamLimits

0x561f,	// (0x0005f81d) bg_active_tab_pane_cp5_ParamLimits

0xa7c3,	// (0x000649c1) tabs_3_long_active_pane_t1_ParamLimits

0x191c,	// (0x0005bb1a) bg_passive_tab_pane_cp5_ParamLimits

0x048b,	// (0x0005a689) list_single_midp_graphic_pane_t1

0xb5d2,	// (0x000657d0) bg_status_flat_pane_ParamLimits

0x20d5,	// (0x0005c2d3) indicator_pane_cp2_ParamLimits

0x20d5,	// (0x0005c2d3) indicator_pane_cp2

0xc233,	// (0x00066431) navi_pane_srt_ParamLimits

0xc233,	// (0x00066431) navi_pane_srt

0x223c,	// (0x0005c43a) popup_clock_digital_analogue_window_cp1

0x5663,	// (0x0005f861) indicator_pane_t1

0xe6a3,	// (0x000688a1) copy_highlight_pane

0xe6a3,	// (0x000688a1) cursor_graphics_pane

0xe6a3,	// (0x000688a1) graphic_within_text_pane

0xe6a3,	// (0x000688a1) link_highlight_pane

0x346e,	// (0x0005d66c) popup_preview_text_window_t5_ParamLimits

0x346e,	// (0x0005d66c) popup_preview_text_window_t5

0x002a,	// (0x0005a228) cursor_digital_pane

0x002a,	// (0x0005a228) cursor_primary_pane

0x003b,	// (0x0005a239) cursor_primary_small_pane

0x0043,	// (0x0005a241) cursor_secondary_pane

0x004b,	// (0x0005a249) cursor_title_pane

0x002a,	// (0x0005a228) link_highlight_digital_pane

0x0032,	// (0x0005a230) link_highlight_primary_pane

0x003b,	// (0x0005a239) link_highlight_primary_small_pane

0x0043,	// (0x0005a241) link_highlight_secondary_pane

0x004b,	// (0x0005a249) link_highlight_title_pane

0x002a,	// (0x0005a228) copy_highlight_digital_pane

0x002a,	// (0x0005a228) copy_highlight_primary_pane

0x003b,	// (0x0005a239) copy_highlight_primary_small_pane

0x0043,	// (0x0005a241) copy_highlight_secondary_pane

0x004b,	// (0x0005a249) copy_highlight_title_pane

0x0043,	// (0x0005a241) graphic_text_digital_pane

0x2ced,	// (0x0005ceeb) graphic_text_primary_pane

0x2cf6,	// (0x0005cef4) graphic_text_primary_small_pane

0x003b,	// (0x0005a239) graphic_text_secondary_pane

0x002a,	// (0x0005a228) graphic_text_title_pane

0xabf7,	// (0x00064df5) cursor_primary_pane_g1

0x2cdf,	// (0x0005cedd) cursor_text_primary_t1

0xc4ab,	// (0x000666a9) cursor_primary_small_pane_g1

0x2cd1,	// (0x0005cecf) cursor_text_primary_small_t1

0xc4a1,	// (0x0006669f) cursor_primary_small_pane_g1_copy1

0x2cb9,	// (0x0005ceb7) cursor_text_primary_small_t1_copy1

0x2c97,	// (0x0005ce95) cursor_text_title_t1

0xc497,	// (0x00066695) cursor_title_pane_g1

0xabf7,	// (0x00064df5) cursor_digital_pane_g1

0x005d,	// (0x0005a25b) cursor_text_digital_t1

0x006b,	// (0x0005a269) link_highlight_primary_pane_g1

0x2c40,	// (0x0005ce3e) link_highlight_primary_pane_t1

0x006b,	// (0x0005a269) link_highlight_primary_small_pane_g1

0x0073,	// (0x0005a271) link_highlight_primary_small_pane_t1

0x0082,	// (0x0005a280) link_highlight_secondary_pane_g1

0x008a,	// (0x0005a288) link_highlight_secondary_pane_t1

0x2bb4,	// (0x0005cdb2) link_highlight_title_pane_g1

0x2bbc,	// (0x0005cdba) link_highlight_title_pane_t1

0x2b9d,	// (0x0005cd9b) link_highlight_digital_pane_g1

0x2ba5,	// (0x0005cda3) link_highlight_digital_pane_t1

0x2a65,	// (0x0005cc63) copy_highlight_primary_pane_g1

0x2a7c,	// (0x0005cc7a) copy_highlight_primary_pane_t1

0x2a65,	// (0x0005cc63) copy_highlight_primary_small_pane_g1

0x2a6d,	// (0x0005cc6b) copy_highlight_primary_small_pane_t1

0x0099,	// (0x0005a297) copy_highlight_secondary_pane_g1

0x00a1,	// (0x0005a29f) copy_highlight_secondary_pane_t1

0x2a4e,	// (0x0005cc4c) copy_highlight_title_pane_g1

0x2a56,	// (0x0005cc54) copy_highlight_title_pane_t1

0x2a65,	// (0x0005cc63) copy_highlight_digital_pane_g1

0x3ee7,	// (0x0005e0e5) copy_highlight_digital_pane_t1

0x3e3b,	// (0x0005e039) graphic_text_primary_pane_g1

0x3ecb,	// (0x0005e0c9) graphic_text_primary_pane_t1

0x3ed9,	// (0x0005e0d7) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x00069bd2) graphic_text_primary_pane_t

0x3ea7,	// (0x0005e0a5) graphic_text_primary_small_pane_g1

0x3eaf,	// (0x0005e0ad) graphic_text_primary_small_pane_t1

0x3ebd,	// (0x0005e0bb) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x00069bcd) graphic_text_primary_small_pane_t

0x3e83,	// (0x0005e081) graphic_text_secondary_pane_g1

0x3e8b,	// (0x0005e089) graphic_text_secondary_pane_t1

0x3e99,	// (0x0005e097) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x00069bc8) graphic_text_secondary_pane_t

0x3e5f,	// (0x0005e05d) graphic_text_title_pane_g1

0x3e67,	// (0x0005e065) graphic_text_title_pane_t1

0x3e75,	// (0x0005e073) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x00069bc3) graphic_text_title_pane_t

0x3e3b,	// (0x0005e039) graphic_text_digital_pane_g1

0x3e43,	// (0x0005e041) graphic_text_digital_pane_t1

0x3e51,	// (0x0005e04f) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x00069bbe) graphic_text_digital_pane_t

0x561f,	// (0x0005f81d) navi_icon_pane_srt_ParamLimits

0x561f,	// (0x0005f81d) navi_icon_pane_srt

0x55c5,	// (0x0005f7c3) navi_midp_pane_srt

0x55c5,	// (0x0005f7c3) navi_navi_pane_srt

0x561f,	// (0x0005f81d) navi_text_pane_srt_ParamLimits

0x561f,	// (0x0005f81d) navi_text_pane_srt

0x3e06,	// (0x0005e004) navi_navi_icon_text_pane_srt

0x3e0e,	// (0x0005e00c) navi_navi_pane_srt_g1_ParamLimits

0x3e0e,	// (0x0005e00c) navi_navi_pane_srt_g1

0x3e20,	// (0x0005e01e) navi_navi_pane_srt_g2_ParamLimits

0x3e20,	// (0x0005e01e) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x00069bb9) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x00069bb9) navi_navi_pane_srt_g

0x3e32,	// (0x0005e030) navi_navi_tabs_pane_srt

0x3e06,	// (0x0005e004) navi_navi_text_pane_srt

0x3e06,	// (0x0005e004) navi_navi_volume_pane_srt

0x3df7,	// (0x0005dff5) navi_navi_text_pane_srt_t1

0x08d2,	// (0x0005aad0) navi_navi_volume_pane_srt_g1

0x08da,	// (0x0005aad8) volume_small_pane_srt_ParamLimits

0x08da,	// (0x0005aad8) volume_small_pane_srt

0x00b0,	// (0x0005a2ae) volume_small_pane_srt_g1_ParamLimits

0x00b0,	// (0x0005a2ae) volume_small_pane_srt_g1

0x00c0,	// (0x0005a2be) volume_small_pane_srt_g2_ParamLimits

0x00c0,	// (0x0005a2be) volume_small_pane_srt_g2

0x00d1,	// (0x0005a2cf) volume_small_pane_srt_g3_ParamLimits

0x00d1,	// (0x0005a2cf) volume_small_pane_srt_g3

0x00e2,	// (0x0005a2e0) volume_small_pane_srt_g4_ParamLimits

0x00e2,	// (0x0005a2e0) volume_small_pane_srt_g4

0x00f3,	// (0x0005a2f1) volume_small_pane_srt_g5_ParamLimits

0x00f3,	// (0x0005a2f1) volume_small_pane_srt_g5

0x0104,	// (0x0005a302) volume_small_pane_srt_g6_ParamLimits

0x0104,	// (0x0005a302) volume_small_pane_srt_g6

0x0115,	// (0x0005a313) volume_small_pane_srt_g7_ParamLimits

0x0115,	// (0x0005a313) volume_small_pane_srt_g7

0x0126,	// (0x0005a324) volume_small_pane_srt_g8_ParamLimits

0x0126,	// (0x0005a324) volume_small_pane_srt_g8

0x0137,	// (0x0005a335) volume_small_pane_srt_g9_ParamLimits

0x0137,	// (0x0005a335) volume_small_pane_srt_g9

0x0148,	// (0x0005a346) volume_small_pane_srt_g10_ParamLimits

0x0148,	// (0x0005a346) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x00069966) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x00069966) volume_small_pane_srt_g

0x8915,	// (0x00062b13) query_popup_data_pane_cp2

0x3ddd,	// (0x0005dfdb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3ddd,	// (0x0005dfdb) navi_navi_icon_text_pane_srt_t1

0x2ced,	// (0x0005ceeb) navi_tabs_2_long_pane_srt

0x2ced,	// (0x0005ceeb) navi_tabs_2_pane_srt

0x2ced,	// (0x0005ceeb) navi_tabs_3_long_pane_srt

0x2ced,	// (0x0005ceeb) navi_tabs_3_pane_srt

0x2ced,	// (0x0005ceeb) navi_tabs_4_pane_srt

0x08b2,	// (0x0005aab0) tabs_2_active_pane_srt_ParamLimits

0x08b2,	// (0x0005aab0) tabs_2_active_pane_srt

0x08c2,	// (0x0005aac0) tabs_2_passive_pane_srt_ParamLimits

0x08c2,	// (0x0005aac0) tabs_2_passive_pane_srt

0x24d1,	// (0x0005c6cf) bg_passive_tab_pane_cp1_srt_ParamLimits

0x24d1,	// (0x0005c6cf) bg_passive_tab_pane_cp1_srt

0x3da9,	// (0x0005dfa7) bg_passive_tab_pane_g1_cp1_srt

0xe404,	// (0x00068602) bg_passive_tab_pane_g2_cp1_srt

0x3db2,	// (0x0005dfb0) bg_passive_tab_pane_g3_cp1_srt

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp1_srt_ParamLimits

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp1_srt

0x3dbb,	// (0x0005dfb9) tabs_2_active_pane_srt_g1

0xc995,	// (0x00066b93) tabs_2_active_pane_srt_t1_ParamLimits

0xc995,	// (0x00066b93) tabs_2_active_pane_srt_t1

0x3da9,	// (0x0005dfa7) bg_active_tab_pane_g1_cp1_srt

0xe404,	// (0x00068602) bg_active_tab_pane_g2_cp1_srt

0x3db2,	// (0x0005dfb0) bg_active_tab_pane_g3_cp1_srt

0x087f,	// (0x0005aa7d) tabs_3_active_pane_srt_ParamLimits

0x087f,	// (0x0005aa7d) tabs_3_active_pane_srt

0x0890,	// (0x0005aa8e) tabs_3_passive_pane_cp_srt_ParamLimits

0x0890,	// (0x0005aa8e) tabs_3_passive_pane_cp_srt

0x08a1,	// (0x0005aa9f) tabs_3_passive_pane_srt_ParamLimits

0x08a1,	// (0x0005aa9f) tabs_3_passive_pane_srt

0x24d1,	// (0x0005c6cf) bg_passive_tab_pane_cp2_srt_ParamLimits

0x24d1,	// (0x0005c6cf) bg_passive_tab_pane_cp2_srt

0x0159,	// (0x0005a357) bg_passive_tab_pane_g1_cp2_srt

0xe404,	// (0x00068602) bg_passive_tab_pane_g2_cp2_srt

0x0162,	// (0x0005a360) bg_passive_tab_pane_g3_cp2_srt

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp2_srt_ParamLimits

0x568c,	// (0x0005f88a) bg_active_tab_pane_cp2_srt

0x3d8f,	// (0x0005df8d) tabs_3_active_pane_srt_g1

0xc97f,	// (0x00066b7d) tabs_3_active_pane_srt_t1_ParamLimits

0xc97f,	// (0x00066b7d) tabs_3_active_pane_srt_t1

0x0159,	// (0x0005a357) bg_active_tab_pane_g1_cp2_srt

0xe404,	// (0x00068602) bg_active_tab_pane_g2_cp2_srt

0x0162,	// (0x0005a360) bg_active_tab_pane_g3_cp2_srt

0x0837,	// (0x0005aa35) tabs_4_active_pane_srt_ParamLimits

0x0837,	// (0x0005aa35) tabs_4_active_pane_srt

0x0849,	// (0x0005aa47) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0849,	// (0x0005aa47) tabs_4_passive_pane_cp2_srt

0x18aa,	// (0x0005baa8) aid_size_cell_toolbar

0x39c7,	// (0x0005dbc5) main_idle_act_pane_ParamLimits

0x1ae5,	// (0x0005bce3) popup_large_graphic_colour_window_ParamLimits

0xb494,	// (0x00065692) popup_toolbar_window_ParamLimits

0xb494,	// (0x00065692) popup_toolbar_window

0x3b9f,	// (0x0005dd9d) list_single_graphic_2heading_pane_ParamLimits

0x3b9f,	// (0x0005dd9d) list_single_graphic_2heading_pane

0x8f9e,	// (0x0006319c) aid_size_cell_apps_grid_lsc_pane

0x8fb0,	// (0x000631ae) aid_size_cell_apps_grid_prt_pane

0x191c,	// (0x0005bb1a) bg_wml_button_pane_cp1_ParamLimits

0x191c,	// (0x0005bb1a) bg_wml_button_pane_cp1

0xc447,	// (0x00066645) form_midp_field_text_pane_t1_ParamLimits

0x24d1,	// (0x0005c6cf) input_focus_pane_cp050_ParamLimits

0x2710,	// (0x0005c90e) list_midp_form_text_pane_ParamLimits

0x26c2,	// (0x0005c8c0) input_focus_pane_cp051_ParamLimits

0x26d6,	// (0x0005c8d4) list_midp_choice_pane_ParamLimits

0xc3fe,	// (0x000665fc) list_single_2graphic_pane_cp3_ParamLimits

0xc3fe,	// (0x000665fc) list_single_2graphic_pane_cp3

0x4a48,	// (0x0005ec46) list_single_midp_graphic_pane_ParamLimits

0x4a48,	// (0x0005ec46) list_single_midp_graphic_pane

0xe6ff,	// (0x000688fd) list_single_graphic_2heading_pane_g1_ParamLimits

0xe6ff,	// (0x000688fd) list_single_graphic_2heading_pane_g1

0xe70b,	// (0x00068909) list_single_graphic_2heading_pane_g4_ParamLimits

0xe70b,	// (0x00068909) list_single_graphic_2heading_pane_g4

0xe717,	// (0x00068915) list_single_graphic_2heading_pane_g5_ParamLimits

0xe717,	// (0x00068915) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x000699b9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x000699b9) list_single_graphic_2heading_pane_g

0xe723,	// (0x00068921) list_single_graphic_2heading_pane_t1_ParamLimits

0xe723,	// (0x00068921) list_single_graphic_2heading_pane_t1

0xe737,	// (0x00068935) list_single_graphic_2heading_pane_t2_ParamLimits

0xe737,	// (0x00068935) list_single_graphic_2heading_pane_t2

0xe753,	// (0x00068951) list_single_graphic_2heading_pane_t3_ParamLimits

0xe753,	// (0x00068951) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x000699c0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x000699c0) list_single_graphic_2heading_pane_t

0x239b,	// (0x0005c599) bg_popup_sub_pane_cp2

0x23c5,	// (0x0005c5c3) grid_toobar_pane

0x03ef,	// (0x0005a5ed) cell_toolbar_pane_ParamLimits

0x03ef,	// (0x0005a5ed) cell_toolbar_pane

0x2401,	// (0x0005c5ff) cell_toolbar_pane_g1_ParamLimits

0x2401,	// (0x0005c5ff) cell_toolbar_pane_g1

0x2415,	// (0x0005c613) cell_toolbar_pane_g2_ParamLimits

0x2415,	// (0x0005c613) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x000699ce) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x000699ce) cell_toolbar_pane_g

0x2437,	// (0x0005c635) grid_highlight_pane_cp2_ParamLimits

0x2437,	// (0x0005c635) grid_highlight_pane_cp2

0x2451,	// (0x0005c64f) toolbar_button_pane

0x245d,	// (0x0005c65b) toolbar_button_pane_g1

0x2465,	// (0x0005c663) toolbar_button_pane_g2

0x246d,	// (0x0005c66b) toolbar_button_pane_g3

0x2475,	// (0x0005c673) toolbar_button_pane_g4

0x247d,	// (0x0005c67b) toolbar_button_pane_g5

0x2485,	// (0x0005c683) toolbar_button_pane_g6

0x248d,	// (0x0005c68b) toolbar_button_pane_g7

0x2495,	// (0x0005c693) toolbar_button_pane_g8

0x249d,	// (0x0005c69b) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x000699d3) toolbar_button_pane_g

0x0433,	// (0x0005a631) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0433,	// (0x0005a631) list_single_2graphic_pane_g1_cp3

0xb768,	// (0x00065966) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb768,	// (0x00065966) list_single_2graphic_pane_g2_cp3

0x0450,	// (0x0005a64e) list_single_2graphic_pane_g3_cp3

0x0458,	// (0x0005a656) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0458,	// (0x0005a656) list_single_2graphic_pane_g4_cp3

0x0464,	// (0x0005a662) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0464,	// (0x0005a662) list_single_2graphic_pane_t1_cp3

0x047f,	// (0x0005a67d) list_single_midp_graphic_pane_g2_ParamLimits

0x047f,	// (0x0005a67d) list_single_midp_graphic_pane_g2

0xe6e7,	// (0x000688e5) aid_zoom_text_primary

0xe6ef,	// (0x000688ed) aid_zoom_text_secondary

0x0216,	// (0x0005a414) status_small_pane_g7_ParamLimits

0x0216,	// (0x0005a414) status_small_pane_g7

0x0239,	// (0x0005a437) status_small_pane_t1_ParamLimits

0x9d8a,	// (0x00063f88) title_pane_g2

0x0003,

0xf554,	// (0x00069752) title_pane_g

0xa016,	// (0x00064214) aid_size_cell_colour_1_pane_ParamLimits

0xa016,	// (0x00064214) aid_size_cell_colour_1_pane

0xa02a,	// (0x00064228) aid_size_cell_colour_2_pane_ParamLimits

0xa02a,	// (0x00064228) aid_size_cell_colour_2_pane

0xa03e,	// (0x0006423c) aid_size_cell_colour_3_pane_ParamLimits

0xa03e,	// (0x0006423c) aid_size_cell_colour_3_pane

0xa052,	// (0x00064250) aid_size_cell_colour_4_pane_ParamLimits

0xa052,	// (0x00064250) aid_size_cell_colour_4_pane

0xf1b2,	// (0x000693b0) title_pane_stacon_g1_ParamLimits

0xf1b2,	// (0x000693b0) title_pane_stacon_g1

0x2ad3,	// (0x0005ccd1) popup_note_wait_window_g3_ParamLimits

0x2ad3,	// (0x0005ccd1) popup_note_wait_window_g3

0x2b4a,	// (0x0005cd48) popup_note_wait_window_t5_ParamLimits

0x2b4a,	// (0x0005cd48) popup_note_wait_window_t5

0x55c5,	// (0x0005f7c3) main_feb_china_hwr_fs_writing_pane

0xae2b,	// (0x00065029) popup_feb_china_hwr_fs_window_ParamLimits

0xae2b,	// (0x00065029) popup_feb_china_hwr_fs_window

0xb779,	// (0x00065977) aid_size_cell_hwr_fs_ParamLimits

0xb779,	// (0x00065977) aid_size_cell_hwr_fs

0x24d1,	// (0x0005c6cf) bg_popup_sub_pane_cp3_ParamLimits

0x24d1,	// (0x0005c6cf) bg_popup_sub_pane_cp3

0xb78e,	// (0x0006598c) grid_hwr_fs_pane_ParamLimits

0xb78e,	// (0x0006598c) grid_hwr_fs_pane

0x04e6,	// (0x0005a6e4) linegrid_hwr_fs_pane_ParamLimits

0x04e6,	// (0x0005a6e4) linegrid_hwr_fs_pane

0xb7a6,	// (0x000659a4) cell_hwr_fs_pane_ParamLimits

0xb7a6,	// (0x000659a4) cell_hwr_fs_pane

0x24dd,	// (0x0005c6db) linegrid_hwr_fs_pane_g1_ParamLimits

0x24dd,	// (0x0005c6db) linegrid_hwr_fs_pane_g1

0xc3d2,	// (0x000665d0) linegrid_hwr_fs_pane_g2_ParamLimits

0xc3d2,	// (0x000665d0) linegrid_hwr_fs_pane_g2

0x24fb,	// (0x0005c6f9) linegrid_hwr_fs_pane_g3_ParamLimits

0x24fb,	// (0x0005c6f9) linegrid_hwr_fs_pane_g3

0x051a,	// (0x0005a718) linegrid_hwr_fs_pane_g4_ParamLimits

0x051a,	// (0x0005a718) linegrid_hwr_fs_pane_g4

0x0538,	// (0x0005a736) linegrid_hwr_fs_pane_g5_ParamLimits

0x0538,	// (0x0005a736) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x000699f9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x000699f9) linegrid_hwr_fs_pane_g

0x2507,	// (0x0005c705) cell_hwr_fs_pane_g1_ParamLimits

0x2507,	// (0x0005c705) cell_hwr_fs_pane_g1

0x22d2,	// (0x0005c4d0) cell_hwr_fs_pane_g2_ParamLimits

0x22d2,	// (0x0005c4d0) cell_hwr_fs_pane_g2

0xc3e4,	// (0x000665e2) cell_hwr_fs_pane_g3_ParamLimits

0xc3e4,	// (0x000665e2) cell_hwr_fs_pane_g3

0xc3f1,	// (0x000665ef) cell_hwr_fs_pane_g4_ParamLimits

0xc3f1,	// (0x000665ef) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x00069a04) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x00069a04) cell_hwr_fs_pane_g

0xb7cc,	// (0x000659ca) cell_hwr_fs_pane_t1

0x55c5,	// (0x0005f7c3) grid_highlight_pane_cp6

0x55c5,	// (0x0005f7c3) main_idle_act2_pane

0x8dad,	// (0x00062fab) aid_inside_area_popup_secondary

0xc512,	// (0x00066710) aid_inside_area_window_primary_ParamLimits

0xc512,	// (0x00066710) aid_inside_area_window_primary

0x3ef6,	// (0x0005e0f4) ai2_news_ticker_pane

0x3efe,	// (0x0005e0fc) aid_size_cell_ai1_link_ParamLimits

0x3efe,	// (0x0005e0fc) aid_size_cell_ai1_link

0x3f18,	// (0x0005e116) popup_ai2_data_window_ParamLimits

0x3f18,	// (0x0005e116) popup_ai2_data_window

0x3f36,	// (0x0005e134) popup_ai2_link_window_ParamLimits

0x3f36,	// (0x0005e134) popup_ai2_link_window

0x24d1,	// (0x0005c6cf) bg_popup_sub_pane_cp4_ParamLimits

0x24d1,	// (0x0005c6cf) bg_popup_sub_pane_cp4

0x3f4c,	// (0x0005e14a) grid_ai2_link_pane_ParamLimits

0x3f4c,	// (0x0005e14a) grid_ai2_link_pane

0x3f63,	// (0x0005e161) popup_ai2_link_window_g1_ParamLimits

0x3f63,	// (0x0005e161) popup_ai2_link_window_g1

0x3f6f,	// (0x0005e16d) popup_ai2_link_window_g2_ParamLimits

0x3f6f,	// (0x0005e16d) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x00069bd7) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x00069bd7) popup_ai2_link_window_g

0x3f80,	// (0x0005e17e) ai2_mp_button_pane

0x3f88,	// (0x0005e186) ai2_mp_volume_pane

0x26c2,	// (0x0005c8c0) bg_popup_sub_pane_cp5_ParamLimits

0x26c2,	// (0x0005c8c0) bg_popup_sub_pane_cp5

0x3f90,	// (0x0005e18e) heading_ai2_gene_pane_ParamLimits

0x3f90,	// (0x0005e18e) heading_ai2_gene_pane

0x3f9c,	// (0x0005e19a) list_ai2_gene_pane_ParamLimits

0x3f9c,	// (0x0005e19a) list_ai2_gene_pane

0x3fe4,	// (0x0005e1e2) cell_ai2_link_pane_ParamLimits

0x3fe4,	// (0x0005e1e2) cell_ai2_link_pane

0x3ffa,	// (0x0005e1f8) cell_ai2_link_pane_g1

0x55c5,	// (0x0005f7c3) grid_highlight_pane_cp7

0x08ef,	// (0x0005aaed) ai2_mp_volume_pane_g1

0x40cd,	// (0x0005e2cb) ai2_mp_volume_pane_g2

0x4042,	// (0x0005e240) list_ai2_gene_pane_t1

0x40d5,	// (0x0005e2d3) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x00069bf0) ai2_mp_volume_pane_g

0x08f7,	// (0x0005aaf5) volume_small_pane_cp3

0x40dd,	// (0x0005e2db) aid_size_cell_ai2_button

0x40e5,	// (0x0005e2e3) grid_ai2_button_pane

0x40ee,	// (0x0005e2ec) cell_ai2_button_pane_ParamLimits

0x40ee,	// (0x0005e2ec) cell_ai2_button_pane

0x55bb,	// (0x0005f7b9) cell_ai2_button_pane_g1

0x55c5,	// (0x0005f7c3) grid_highlight_pane_cp8

0x408d,	// (0x0005e28b) ai2_gene_pane_t1_ParamLimits

0x408d,	// (0x0005e28b) ai2_gene_pane_t1

0xad89,	// (0x00064f87) aid_height_parent_landscape

0xc708,	// (0x00066906) aid_height_set_list

0x39c7,	// (0x0005dbc5) aid_size_parent

0x3d17,	// (0x0005df15) aid_size_cell_graphic_pane_ParamLimits

0x3fac,	// (0x0005e1aa) popup_ai2_data_window_g1_ParamLimits

0x3fac,	// (0x0005e1aa) popup_ai2_data_window_g1

0x3fb8,	// (0x0005e1b6) ai2_news_ticker_pane_g1

0x3fc0,	// (0x0005e1be) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x00069bdc) ai2_news_ticker_pane_g

0x3fc8,	// (0x0005e1c6) ai2_news_ticker_pane_t1

0x3fd6,	// (0x0005e1d4) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x00069be1) ai2_news_ticker_pane_t

0x4003,	// (0x0005e201) heading_ai2_gene_pane_g1

0x400b,	// (0x0005e209) heading_ai2_gene_pane_t1_ParamLimits

0x400b,	// (0x0005e209) heading_ai2_gene_pane_t1

0x4020,	// (0x0005e21e) list_highlight_pane_cp6

0x4028,	// (0x0005e226) ai2_gene_pane_ParamLimits

0x4028,	// (0x0005e226) ai2_gene_pane

0x4050,	// (0x0005e24e) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x00069be6) list_ai2_gene_pane_t

0x405e,	// (0x0005e25c) list_highlight_pane_cp8_ParamLimits

0x405e,	// (0x0005e25c) list_highlight_pane_cp8

0x406f,	// (0x0005e26d) ai2_gene_pane_g1_ParamLimits

0x406f,	// (0x0005e26d) ai2_gene_pane_g1

0x4081,	// (0x0005e27f) ai2_gene_pane_g2_ParamLimits

0x4081,	// (0x0005e27f) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x00069beb) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x00069beb) ai2_gene_pane_g

0x8c30,	// (0x00062e2e) scroll_pane_cp12

0xad48,	// (0x00064f46) control_pane_t3_ParamLimits

0xad48,	// (0x00064f46) control_pane_t3

0x022a,	// (0x0005a428) status_small_pane_g8_ParamLimits

0x022a,	// (0x0005a428) status_small_pane_g8

0xaecd,	// (0x000650cb) popup_find_window_ParamLimits

0xb17e,	// (0x0006537c) popup_note_image_window_ParamLimits

0xe76b,	// (0x00068969) list_double2_graphic_pane_vc_g1_ParamLimits

0xe76b,	// (0x00068969) list_double2_graphic_pane_vc_g1

0xe2ad,	// (0x000684ab) list_double2_graphic_pane_vc_g2_ParamLimits

0xe2ad,	// (0x000684ab) list_double2_graphic_pane_vc_g2

0x041f,	// (0x0005a61d) list_double2_graphic_pane_vc_g3_ParamLimits

0x041f,	// (0x0005a61d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x000699c7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x000699c7) list_double2_graphic_pane_vc_g

0xe777,	// (0x00068975) list_double2_graphic_pane_vc_t1_ParamLimits

0xe777,	// (0x00068975) list_double2_graphic_pane_vc_t1

0xe2ad,	// (0x000684ab) list_single_heading_pane_vc_g1_ParamLimits

0xe2ad,	// (0x000684ab) list_single_heading_pane_vc_g1

0x041f,	// (0x0005a61d) list_single_heading_pane_vc_g2_ParamLimits

0x041f,	// (0x0005a61d) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000697d6) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000697d6) list_single_heading_pane_vc_g

0xe78d,	// (0x0006898b) list_single_heading_pane_vc_t1_ParamLimits

0xe78d,	// (0x0006898b) list_single_heading_pane_vc_t1

0xe7a5,	// (0x000689a3) list_single_heading_pane_vc_t2_ParamLimits

0xe7a5,	// (0x000689a3) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x000699e8) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x000699e8) list_single_heading_pane_vc_t

0x04a1,	// (0x0005a69f) list_setting_number_pane_vc_g1_ParamLimits

0x04a1,	// (0x0005a69f) list_setting_number_pane_vc_g1

0x04ad,	// (0x0005a6ab) list_setting_number_pane_vc_g2_ParamLimits

0x04ad,	// (0x0005a6ab) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x000699ed) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x000699ed) list_setting_number_pane_vc_g

0xe7b7,	// (0x000689b5) list_setting_number_pane_vc_t1_ParamLimits

0xe7b7,	// (0x000689b5) list_setting_number_pane_vc_t1

0xe7cb,	// (0x000689c9) list_setting_number_pane_vc_t2_ParamLimits

0xe7cb,	// (0x000689c9) list_setting_number_pane_vc_t2

0xe7e7,	// (0x000689e5) list_setting_number_pane_vc_t3_ParamLimits

0xe7e7,	// (0x000689e5) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x000699f2) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x000699f2) list_setting_number_pane_vc_t

0xe815,	// (0x00068a13) set_value_pane_vc_ParamLimits

0xe815,	// (0x00068a13) set_value_pane_vc

0x3b9f,	// (0x0005dd9d) list_double2_graphic_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_double2_graphic_pane_vc

0x3b9f,	// (0x0005dd9d) list_double2_large_graphic_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_double2_large_graphic_pane_vc

0x3b9f,	// (0x0005dd9d) list_double2_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_double2_pane_vc

0x3b9f,	// (0x0005dd9d) list_double_graphic_heading_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_double_graphic_heading_pane_vc

0x3b9f,	// (0x0005dd9d) list_double_graphic_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_double_graphic_pane_vc

0x3b9f,	// (0x0005dd9d) list_double_heading_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_double_heading_pane_vc

0x3b9f,	// (0x0005dd9d) list_double_large_graphic_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_double_large_graphic_pane_vc

0x3b9f,	// (0x0005dd9d) list_double_number_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_double_number_pane_vc

0x3b9f,	// (0x0005dd9d) list_double_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_double_pane_vc

0x3b9f,	// (0x0005dd9d) list_double_time_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_double_time_pane_vc

0x3b9f,	// (0x0005dd9d) list_setting_number_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_setting_number_pane_vc

0x3b9f,	// (0x0005dd9d) list_setting_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_setting_pane_vc

0x3b9f,	// (0x0005dd9d) list_single_graphic_heading_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_single_graphic_heading_pane_vc

0x3b9f,	// (0x0005dd9d) list_single_heading_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_single_heading_pane_vc

0x3b9f,	// (0x0005dd9d) list_single_number_heading_pane_vc_ParamLimits

0x3b9f,	// (0x0005dd9d) list_single_number_heading_pane_vc

0xe76b,	// (0x00068969) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe76b,	// (0x00068969) list_double_graphic_heading_pane_vc_g1

0x35bc,	// (0x0005d7ba) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x35bc,	// (0x0005d7ba) list_double_graphic_heading_pane_vc_g2

0x35c8,	// (0x0005d7c6) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x35c8,	// (0x0005d7c6) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x00069bf7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x00069bf7) list_double_graphic_heading_pane_vc_g

0xe84c,	// (0x00068a4a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe84c,	// (0x00068a4a) list_double_graphic_heading_pane_vc_t1

0xe862,	// (0x00068a60) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe862,	// (0x00068a60) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x00069bfe) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x00069bfe) list_double_graphic_heading_pane_vc_t

0x04a1,	// (0x0005a69f) list_setting_pane_vc_g1_ParamLimits

0x04a1,	// (0x0005a69f) list_setting_pane_vc_g1

0x04ad,	// (0x0005a6ab) list_setting_pane_vc_g2_ParamLimits

0x04ad,	// (0x0005a6ab) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x000699ed) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x000699ed) list_setting_pane_vc_g

0xe880,	// (0x00068a7e) list_setting_pane_vc_t1_ParamLimits

0xe880,	// (0x00068a7e) list_setting_pane_vc_t1

0xe89c,	// (0x00068a9a) list_setting_pane_vc_t2_ParamLimits

0xe89c,	// (0x00068a9a) list_setting_pane_vc_t2

0x0001,

0xfa43,	// (0x00069c41) list_setting_pane_vc_t_ParamLimits

0xfa43,	// (0x00069c41) list_setting_pane_vc_t

0xe815,	// (0x00068a13) set_value_pane_cp_vc_ParamLimits

0xe815,	// (0x00068a13) set_value_pane_cp_vc

0xe2ad,	// (0x000684ab) list_single_number_heading_pane_vc_g1_ParamLimits

0xe2ad,	// (0x000684ab) list_single_number_heading_pane_vc_g1

0x041f,	// (0x0005a61d) list_single_number_heading_pane_vc_g2_ParamLimits

0x041f,	// (0x0005a61d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000697d6) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000697d6) list_single_number_heading_pane_vc_g

0xe78d,	// (0x0006898b) list_single_number_heading_pane_vc_t1_ParamLimits

0xe78d,	// (0x0006898b) list_single_number_heading_pane_vc_t1

0xe8b8,	// (0x00068ab6) list_single_number_heading_pane_vc_t2_ParamLimits

0xe8b8,	// (0x00068ab6) list_single_number_heading_pane_vc_t2

0xe2cf,	// (0x000684cd) list_single_number_heading_pane_vc_t3_ParamLimits

0xe2cf,	// (0x000684cd) list_single_number_heading_pane_vc_t3

0x0002,

0xfa48,	// (0x00069c46) list_single_number_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x00069c46) list_single_number_heading_pane_vc_t

0xe76b,	// (0x00068969) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe76b,	// (0x00068969) list_single_graphic_heading_pane_vc_g1

0xe2ad,	// (0x000684ab) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe2ad,	// (0x000684ab) list_single_graphic_heading_pane_vc_g4

0x041f,	// (0x0005a61d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x041f,	// (0x0005a61d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x000699c7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x000699c7) list_single_graphic_heading_pane_vc_g

0xe78d,	// (0x0006898b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe78d,	// (0x0006898b) list_single_graphic_heading_pane_vc_t1

0xe8ca,	// (0x00068ac8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe8ca,	// (0x00068ac8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4f,	// (0x00069c4d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4f,	// (0x00069c4d) list_single_graphic_heading_pane_vc_t

0xe2ad,	// (0x000684ab) list_double2_pane_vc_g1_ParamLimits

0xe2ad,	// (0x000684ab) list_double2_pane_vc_g1

0x041f,	// (0x0005a61d) list_double2_pane_vc_g2_ParamLimits

0x041f,	// (0x0005a61d) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x000697d6) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x000697d6) list_double2_pane_vc_g

0xe836,	// (0x00068a34) list_double2_pane_vc_t1_ParamLimits

0xe836,	// (0x00068a34) list_double2_pane_vc_t1

0x35d4,	// (0x0005d7d2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x35d4,	// (0x0005d7d2) list_double2_large_graphic_pane_vc_g1

0xe2ad,	// (0x000684ab) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe2ad,	// (0x000684ab) list_double2_large_graphic_pane_vc_g2

0x041f,	// (0x0005a61d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x041f,	// (0x0005a61d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x000697ee) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x000697ee) list_double2_large_graphic_pane_vc_g

0xe2b9,	// (0x000684b7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe2b9,	// (0x000684b7) list_double2_large_graphic_pane_vc_t1

0x35e0,	// (0x0005d7de) list_double_time_pane_vc_g1_ParamLimits

0x35e0,	// (0x0005d7de) list_double_time_pane_vc_g1

0x35ec,	// (0x0005d7ea) list_double_time_pane_vc_g2_ParamLimits

0x35ec,	// (0x0005d7ea) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x00069c52) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x00069c52) list_double_time_pane_vc_g

0xe8dc,	// (0x00068ada) list_double_time_pane_vc_t1_ParamLimits

0xe8dc,	// (0x00068ada) list_double_time_pane_vc_t1

0xe906,	// (0x00068b04) list_double_time_pane_vc_t2_ParamLimits

0xe906,	// (0x00068b04) list_double_time_pane_vc_t2

0xe94f,	// (0x00068b4d) list_double_time_pane_vc_t3_ParamLimits

0xe94f,	// (0x00068b4d) list_double_time_pane_vc_t3

0xe961,	// (0x00068b5f) list_double_time_pane_vc_t4_ParamLimits

0xe961,	// (0x00068b5f) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x00069c57) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x00069c57) list_double_time_pane_vc_t

0xe2ad,	// (0x000684ab) list_double_pane_vc_g1_ParamLimits

0xe2ad,	// (0x000684ab) list_double_pane_vc_g1

0x041f,	// (0x0005a61d) list_double_pane_vc_g2_ParamLimits

0x041f,	// (0x0005a61d) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x000697d6) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x000697d6) list_double_pane_vc_g

0xe986,	// (0x00068b84) list_double_pane_vc_t1_ParamLimits

0xe986,	// (0x00068b84) list_double_pane_vc_t1

0xe99a,	// (0x00068b98) list_double_pane_vc_t2_ParamLimits

0xe99a,	// (0x00068b98) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x00069c60) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x00069c60) list_double_pane_vc_t

0xe2ad,	// (0x000684ab) list_double_number_pane_vc_g1_ParamLimits

0xe2ad,	// (0x000684ab) list_double_number_pane_vc_g1

0x041f,	// (0x0005a61d) list_double_number_pane_vc_g2_ParamLimits

0x041f,	// (0x0005a61d) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x000697d6) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x000697d6) list_double_number_pane_vc_g

0xe9b0,	// (0x00068bae) list_double_number_pane_vc_t1_ParamLimits

0xe9b0,	// (0x00068bae) list_double_number_pane_vc_t1

0xe9c4,	// (0x00068bc2) list_double_number_pane_vc_t2_ParamLimits

0xe9c4,	// (0x00068bc2) list_double_number_pane_vc_t2

0xe9d8,	// (0x00068bd6) list_double_number_pane_vc_t3_ParamLimits

0xe9d8,	// (0x00068bd6) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x00069c65) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x00069c65) list_double_number_pane_vc_t

0x35f8,	// (0x0005d7f6) list_double_large_graphic_pane_vc_g1_ParamLimits

0x35f8,	// (0x0005d7f6) list_double_large_graphic_pane_vc_g1

0x3609,	// (0x0005d807) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3609,	// (0x0005d807) list_double_large_graphic_pane_vc_g2

0x041f,	// (0x0005a61d) list_double_large_graphic_pane_vc_g3_ParamLimits

0x041f,	// (0x0005a61d) list_double_large_graphic_pane_vc_g3

0xe9ee,	// (0x00068bec) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe9ee,	// (0x00068bec) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x00069c6c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x00069c6c) list_double_large_graphic_pane_vc_g

0xe9fa,	// (0x00068bf8) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe9fa,	// (0x00068bf8) list_double_large_graphic_pane_vc_t1

0xea13,	// (0x00068c11) list_double_large_graphic_pane_vc_t2_ParamLimits

0xea13,	// (0x00068c11) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x00069c75) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x00069c75) list_double_large_graphic_pane_vc_t

0x35bc,	// (0x0005d7ba) list_double_heading_pane_vc_g1_ParamLimits

0x35bc,	// (0x0005d7ba) list_double_heading_pane_vc_g1

0x35c8,	// (0x0005d7c6) list_double_heading_pane_vc_g2_ParamLimits

0x35c8,	// (0x0005d7c6) list_double_heading_pane_vc_g2

0x0001,

0xfa7c,	// (0x00069c7a) list_double_heading_pane_vc_g_ParamLimits

0xfa7c,	// (0x00069c7a) list_double_heading_pane_vc_g

0xea2a,	// (0x00068c28) list_double_heading_pane_vc_t1_ParamLimits

0xea2a,	// (0x00068c28) list_double_heading_pane_vc_t1

0xe78d,	// (0x0006898b) list_double_heading_pane_vc_t2_ParamLimits

0xe78d,	// (0x0006898b) list_double_heading_pane_vc_t2

0x0001,

0xfa81,	// (0x00069c7f) list_double_heading_pane_vc_t_ParamLimits

0xfa81,	// (0x00069c7f) list_double_heading_pane_vc_t

0xe76b,	// (0x00068969) list_double_graphic_pane_vc_g1_ParamLimits

0xe76b,	// (0x00068969) list_double_graphic_pane_vc_g1

0x3618,	// (0x0005d816) list_double_graphic_pane_vc_g2_ParamLimits

0x3618,	// (0x0005d816) list_double_graphic_pane_vc_g2

0x3627,	// (0x0005d825) list_double_graphic_pane_vc_g3_ParamLimits

0x3627,	// (0x0005d825) list_double_graphic_pane_vc_g3

0x0002,

0xfa86,	// (0x00069c84) list_double_graphic_pane_vc_g_ParamLimits

0xfa86,	// (0x00069c84) list_double_graphic_pane_vc_g

0xea3c,	// (0x00068c3a) list_double_graphic_pane_vc_t1_ParamLimits

0xea3c,	// (0x00068c3a) list_double_graphic_pane_vc_t1

0xea50,	// (0x00068c4e) list_double_graphic_pane_vc_t2_ParamLimits

0xea50,	// (0x00068c4e) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x00069c8b) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x00069c8b) list_double_graphic_pane_vc_t

0xe133,	// (0x00068331) aid_size_cell_fastswap

0x9b63,	// (0x00063d61) aid_size_cell_touch_ParamLimits

0x9b63,	// (0x00063d61) aid_size_cell_touch

0xf0b5,	// (0x000692b3) popup_fast_swap_wide_window_ParamLimits

0xf0b5,	// (0x000692b3) popup_fast_swap_wide_window

0x9d21,	// (0x00063f1f) touch_pane_ParamLimits

0x9d21,	// (0x00063f1f) touch_pane

0x8c86,	// (0x00062e84) button_value_adjust_pane_cp2

0xe310,	// (0x0006850e) button_value_adjust_pane_cp4

0xe318,	// (0x00068516) form_field_data_pane_cp2

0xa611,	// (0x0006480f) form_field_data_wide_pane_cp2

0x8fec,	// (0x000631ea) bg_scroll_pane_ParamLimits

0xf30e,	// (0x0006950c) scroll_handle_pane_ParamLimits

0xf322,	// (0x00069520) scroll_sc2_down_pane_ParamLimits

0xf322,	// (0x00069520) scroll_sc2_down_pane

0x901d,	// (0x0006321b) scroll_sc2_up_pane_ParamLimits

0x901d,	// (0x0006321b) scroll_sc2_up_pane

0xcaf0,	// (0x00066cee) grid_wheel_folder_pane_g1_ParamLimits

0xcaf0,	// (0x00066cee) grid_wheel_folder_pane_g1

0xf4ec,	// (0x000696ea) clock_nsta_pane_cp2_ParamLimits

0xf4ec,	// (0x000696ea) clock_nsta_pane_cp2

0x191c,	// (0x0005bb1a) listscroll_midp_pane_ParamLimits

0xab4e,	// (0x00064d4c) midp_canvas_pane

0x1898,	// (0x0005ba96) nsta_clock_indic_pane

0x18e6,	// (0x0005bae4) listscroll_form_pane_vc

0x190a,	// (0x0005bb08) listscroll_set_pane_vc_ParamLimits

0x190a,	// (0x0005bb08) listscroll_set_pane_vc

0xb5fa,	// (0x000657f8) clock_nsta_pane

0xb624,	// (0x00065822) indicator_nsta_pane

0x239b,	// (0x0005c599) bg_popup_sub_pane_cp2_ParamLimits

0x23af,	// (0x0005c5ad) find_pane_cp2_ParamLimits

0x23af,	// (0x0005c5ad) find_pane_cp2

0x23c5,	// (0x0005c5c3) grid_toobar_pane_ParamLimits

0x24a5,	// (0x0005c6a3) list_form_gen_pane_vc_ParamLimits

0x24a5,	// (0x0005c6a3) list_form_gen_pane_vc

0x24bb,	// (0x0005c6b9) scroll_pane_cp8_vc_ParamLimits

0x24bb,	// (0x0005c6b9) scroll_pane_cp8_vc

0x2537,	// (0x0005c735) data_form_wide_pane_vc_ParamLimits

0x2537,	// (0x0005c735) data_form_wide_pane_vc

0x2543,	// (0x0005c741) form_field_data_wide_pane_vc_g1

0x254b,	// (0x0005c749) form_field_data_wide_pane_vc_t1_ParamLimits

0x254b,	// (0x0005c749) form_field_data_wide_pane_vc_t1

0x8c9a,	// (0x00062e98) input_focus_pane_cp6_vc_ParamLimits

0x8c9a,	// (0x00062e98) input_focus_pane_cp6_vc

0xc46f,	// (0x0006666d) list_midp_pane_ParamLimits

0x3d83,	// (0x0005df81) scroll_pane_cp16_ParamLimits

0x3d83,	// (0x0005df81) scroll_pane_cp16

0x28a7,	// (0x0005caa5) button_value_adjust_pane_ParamLimits

0x28a7,	// (0x0005caa5) button_value_adjust_pane

0xc719,	// (0x00066917) button_value_adjust_pane_cp6_ParamLimits

0xc719,	// (0x00066917) button_value_adjust_pane_cp6

0xc85b,	// (0x00066a59) settings_code_pane_cp_ParamLimits

0xc85b,	// (0x00066a59) settings_code_pane_cp

0x55bb,	// (0x0005f7b9) cell_touch_pane_g1

0x55bb,	// (0x0005f7b9) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0006990c) cell_touch_pane_g

0xc9ab,	// (0x00066ba9) cell_touch_pane_cp_ParamLimits

0xc9ab,	// (0x00066ba9) cell_touch_pane_cp

0xc9c7,	// (0x00066bc5) cell_touch_pane_ParamLimits

0xc9c7,	// (0x00066bc5) cell_touch_pane

0x55bb,	// (0x0005f7b9) scroll_sc2_down_pane_g1

0x55bb,	// (0x0005f7b9) scroll_sc2_up_pane_g1

0x55c5,	// (0x0005f7c3) bg_set_opt_pane_cp4_vc

0x4121,	// (0x0005e31f) list_set_graphic_pane_vc_g1_ParamLimits

0x4121,	// (0x0005e31f) list_set_graphic_pane_vc_g1

0xc9e5,	// (0x00066be3) list_set_graphic_pane_vc_g2_ParamLimits

0xc9e5,	// (0x00066be3) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x00069c03) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x00069c03) list_set_graphic_pane_vc_g

0x412d,	// (0x0005e32b) text_primary_small_cp13_vc_ParamLimits

0x412d,	// (0x0005e32b) text_primary_small_cp13_vc

0x4145,	// (0x0005e343) list_set_graphic_pane_vc_ParamLimits

0x4145,	// (0x0005e343) list_set_graphic_pane_vc

0x55c5,	// (0x0005f7c3) input_focus_pane_cp2_vc

0x55bb,	// (0x0005f7b9) setting_code_pane_vc_g1

0x5636,	// (0x0005f834) setting_code_pane_vc_t1

0x415a,	// (0x0005e358) set_text_pane_vc_t1_ParamLimits

0x415a,	// (0x0005e358) set_text_pane_vc_t1

0x55c5,	// (0x0005f7c3) input_focus_pane_cp1_vc

0x4178,	// (0x0005e376) list_set_text_pane_vc

0x55bb,	// (0x0005f7b9) setting_text_pane_vc_g1

0x55c5,	// (0x0005f7c3) bg_set_opt_pane_cp2_vc

0x562d,	// (0x0005f82b) setting_slider_graphic_pane_vc_g1

0x4182,	// (0x0005e380) setting_slider_graphic_pane_vc_t1

0x4194,	// (0x0005e392) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x00069c08) setting_slider_graphic_pane_vc_t

0x41a6,	// (0x0005e3a4) slider_set_pane_cp_vc

0x41b0,	// (0x0005e3ae) slider_set_pane_vc_g1

0x41b9,	// (0x0005e3b7) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x00069c0d) slider_set_pane_vc_g

0x8cf5,	// (0x00062ef3) set_opt_bg_pane_g1_copy1

0x8cfd,	// (0x00062efb) set_opt_bg_pane_g2_copy1

0x41e5,	// (0x0005e3e3) set_opt_bg_pane_g3_copy1

0x8d0d,	// (0x00062f0b) set_opt_bg_pane_g4_copy1

0x8d15,	// (0x00062f13) set_opt_bg_pane_g5_copy1

0x8d1d,	// (0x00062f1b) set_opt_bg_pane_g6_copy1

0x41ef,	// (0x0005e3ed) set_opt_bg_pane_g7_copy1

0x41f9,	// (0x0005e3f7) set_opt_bg_pane_g8_copy1

0x4203,	// (0x0005e401) set_opt_bg_pane_g9_copy1

0x55c5,	// (0x0005f7c3) bg_set_opt_pane_cp_vc

0x420d,	// (0x0005e40b) setting_slider_pane_vc_t1

0x421c,	// (0x0005e41a) setting_slider_pane_vc_t2

0x422e,	// (0x0005e42c) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x00069c1c) setting_slider_pane_vc_t

0x4240,	// (0x0005e43e) slider_set_pane_vc

0x057b,	// (0x0005a779) volume_set_pane_vc_g1

0x0584,	// (0x0005a782) volume_set_pane_vc_g2

0x058d,	// (0x0005a78b) volume_set_pane_vc_g3

0x0596,	// (0x0005a794) volume_set_pane_vc_g4

0x059f,	// (0x0005a79d) volume_set_pane_vc_g5

0x05a8,	// (0x0005a7a6) volume_set_pane_vc_g6

0x05b1,	// (0x0005a7af) volume_set_pane_vc_g7

0x05ba,	// (0x0005a7b8) volume_set_pane_vc_g8

0x05c3,	// (0x0005a7c1) volume_set_pane_vc_g9

0x05cc,	// (0x0005a7ca) volume_set_pane_vc_g10

0x0009,

0xfa25,	// (0x00069c23) volume_set_pane_vc_g

0x424a,	// (0x0005e448) volume_set_pane_vc

0x4254,	// (0x0005e452) button_value_adjust_pane_cp1_vc

0x425e,	// (0x0005e45c) list_highlight_pane_cp2_vc

0x4267,	// (0x0005e465) list_set_pane_vc_ParamLimits

0x4267,	// (0x0005e465) list_set_pane_vc

0x42d7,	// (0x0005e4d5) main_pane_set_vc_t1_ParamLimits

0x42d7,	// (0x0005e4d5) main_pane_set_vc_t1

0x42ec,	// (0x0005e4ea) main_pane_set_vc_t2_ParamLimits

0x42ec,	// (0x0005e4ea) main_pane_set_vc_t2

0x42fe,	// (0x0005e4fc) main_pane_set_vc_t3_ParamLimits

0x42fe,	// (0x0005e4fc) main_pane_set_vc_t3

0x4312,	// (0x0005e510) main_pane_set_vc_t4_ParamLimits

0x4312,	// (0x0005e510) main_pane_set_vc_t4

0x0003,

0xfa3a,	// (0x00069c38) main_pane_set_vc_t_ParamLimits

0xfa3a,	// (0x00069c38) main_pane_set_vc_t

0x4326,	// (0x0005e524) setting_code_pane_vc_ParamLimits

0x4326,	// (0x0005e524) setting_code_pane_vc

0x4337,	// (0x0005e535) setting_slider_graphic_pane_vc

0x4337,	// (0x0005e535) setting_slider_pane_vc

0x4337,	// (0x0005e535) setting_text_pane_vc

0x4337,	// (0x0005e535) setting_volume_pane_vc

0x4341,	// (0x0005e53f) scroll_pane_cp121_vc

0x8c74,	// (0x00062e72) set_content_pane_vc

0x4349,	// (0x0005e547) button_value_adjust_pane_g1

0x4352,	// (0x0005e550) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x00069c90) button_value_adjust_pane_g

0x435b,	// (0x0005e559) form_field_slider_wide_pane_vc_t1_ParamLimits

0x435b,	// (0x0005e559) form_field_slider_wide_pane_vc_t1

0x436d,	// (0x0005e56b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x436d,	// (0x0005e56b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x00069c95) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x00069c95) form_field_slider_wide_pane_vc_t

0x568c,	// (0x0005f88a) input_focus_pane_cp10_vc_ParamLimits

0x568c,	// (0x0005f88a) input_focus_pane_cp10_vc

0x4399,	// (0x0005e597) slider_cont_pane_cp1_vc_ParamLimits

0x4399,	// (0x0005e597) slider_cont_pane_cp1_vc

0x43ab,	// (0x0005e5a9) slider_form_pane_g1_cp2

0x41b9,	// (0x0005e3b7) slider_form_pane_g2_cp2

0x43d8,	// (0x0005e5d6) form_field_slider_pane_vc_t3

0x43e6,	// (0x0005e5e4) form_field_slider_pane_vc_t4

0x43f4,	// (0x0005e5f2) slider_form_pane_vc_ParamLimits

0x43f4,	// (0x0005e5f2) slider_form_pane_vc

0x4401,	// (0x0005e5ff) form_field_slider_pane_vc_t1_ParamLimits

0x4401,	// (0x0005e5ff) form_field_slider_pane_vc_t1

0x436d,	// (0x0005e56b) form_field_slider_pane_vc_t2_ParamLimits

0x436d,	// (0x0005e56b) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x00069ca7) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x00069ca7) form_field_slider_pane_vc_t

0x568c,	// (0x0005f88a) input_focus_pane_cp9_vc_ParamLimits

0x568c,	// (0x0005f88a) input_focus_pane_cp9_vc

0x4417,	// (0x0005e615) slider_cont_pane_vc_ParamLimits

0x4417,	// (0x0005e615) slider_cont_pane_vc

0x442b,	// (0x0005e629) list_form_graphic_pane_cp_vc_ParamLimits

0x442b,	// (0x0005e629) list_form_graphic_pane_cp_vc

0x2543,	// (0x0005c741) form_field_popup_wide_pane_vc_g1

0x4440,	// (0x0005e63e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4440,	// (0x0005e63e) form_field_popup_wide_pane_vc_t1

0x8c9a,	// (0x00062e98) input_focus_pane_cp8_vc_ParamLimits

0x8c9a,	// (0x00062e98) input_focus_pane_cp8_vc

0x4485,	// (0x0005e683) list_form_wide_pane_vc_ParamLimits

0x4485,	// (0x0005e683) list_form_wide_pane_vc

0x4491,	// (0x0005e68f) list_form_graphic_pane_vc_g1

0x4499,	// (0x0005e697) list_form_graphic_pane_vc_t1_ParamLimits

0x4499,	// (0x0005e697) list_form_graphic_pane_vc_t1

0x561f,	// (0x0005f81d) list_highlight_pane_cp5_vc_ParamLimits

0x561f,	// (0x0005f81d) list_highlight_pane_cp5_vc

0x44b5,	// (0x0005e6b3) list_form_graphic_pane_vc_ParamLimits

0x44b5,	// (0x0005e6b3) list_form_graphic_pane_vc

0x2543,	// (0x0005c741) form_field_popup_pane_vc_g1

0x44cb,	// (0x0005e6c9) form_field_popup_pane_vc_t1_ParamLimits

0x44cb,	// (0x0005e6c9) form_field_popup_pane_vc_t1

0x8c9a,	// (0x00062e98) input_focus_pane_cp7_vc_ParamLimits

0x8c9a,	// (0x00062e98) input_focus_pane_cp7_vc

0x44e2,	// (0x0005e6e0) list_form_pane_vc_ParamLimits

0x44e2,	// (0x0005e6e0) list_form_pane_vc

0x44ee,	// (0x0005e6ec) data_form_pane_vc_t1_ParamLimits

0x44ee,	// (0x0005e6ec) data_form_pane_vc_t1

0x8cf5,	// (0x00062ef3) input_focus_pane_vc_g1

0x8cfd,	// (0x00062efb) input_focus_pane_vc_g2

0x8d05,	// (0x00062f03) input_focus_pane_vc_g3

0x8d0d,	// (0x00062f0b) input_focus_pane_vc_g4

0x8d15,	// (0x00062f13) input_focus_pane_vc_g5

0x8d1d,	// (0x00062f1b) input_focus_pane_vc_g6

0x8d25,	// (0x00062f23) input_focus_pane_vc_g7

0x8d2d,	// (0x00062f2b) input_focus_pane_vc_g8

0x8d35,	// (0x00062f33) input_focus_pane_vc_g9

0x55bb,	// (0x0005f7b9) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x00069895) input_focus_pane_vc_g

0x2537,	// (0x0005c735) data_form_pane_vc_ParamLimits

0x2537,	// (0x0005c735) data_form_pane_vc

0x2543,	// (0x0005c741) form_field_data_pane_vc_g1

0x450b,	// (0x0005e709) form_field_data_pane_vc_t1_ParamLimits

0x450b,	// (0x0005e709) form_field_data_pane_vc_t1

0x8c9a,	// (0x00062e98) input_focus_pane_vc_ParamLimits

0x8c9a,	// (0x00062e98) input_focus_pane_vc

0x4525,	// (0x0005e723) button_value_adjust_pane_cp3_vc

0x452d,	// (0x0005e72b) button_value_adjust_pane_cp5_vc

0x4535,	// (0x0005e733) form_field_data_pane_vc_ParamLimits

0x4535,	// (0x0005e733) form_field_data_pane_vc

0x4550,	// (0x0005e74e) form_field_data_pane_vc_cp2

0x4558,	// (0x0005e756) form_field_data_wide_pane_vc_ParamLimits

0x4558,	// (0x0005e756) form_field_data_wide_pane_vc

0x4572,	// (0x0005e770) form_field_data_wide_pane_vc_cp2

0x457a,	// (0x0005e778) form_field_popup_pane_vc_ParamLimits

0x457a,	// (0x0005e778) form_field_popup_pane_vc

0x4595,	// (0x0005e793) form_field_popup_wide_pane_vc_ParamLimits

0x4595,	// (0x0005e793) form_field_popup_wide_pane_vc

0x45af,	// (0x0005e7ad) form_field_slider_pane_vc_ParamLimits

0x45af,	// (0x0005e7ad) form_field_slider_pane_vc

0x45c2,	// (0x0005e7c0) form_field_slider_wide_pane_vc_ParamLimits

0x45c2,	// (0x0005e7c0) form_field_slider_wide_pane_vc

0xc9f1,	// (0x00066bef) grid_touch_1_pane_ParamLimits

0xc9f1,	// (0x00066bef) grid_touch_1_pane

0xca05,	// (0x00066c03) grid_touch_2_pane_ParamLimits

0xca05,	// (0x00066c03) grid_touch_2_pane

0x4699,	// (0x0005e897) touch_pane_g1_ParamLimits

0x4699,	// (0x0005e897) touch_pane_g1

0x45fb,	// (0x0005e7f9) cell_app_pane_cp_wide_ParamLimits

0x45fb,	// (0x0005e7f9) cell_app_pane_cp_wide

0x460c,	// (0x0005e80a) grid_popup_fast_wide_pane_ParamLimits

0x460c,	// (0x0005e80a) grid_popup_fast_wide_pane

0x4620,	// (0x0005e81e) scroll_pane_cp19_ParamLimits

0x4620,	// (0x0005e81e) scroll_pane_cp19

0x55c5,	// (0x0005f7c3) bg_popup_window_pane_cp20

0x4634,	// (0x0005e832) listscroll_popup_fast_wide_pane

0xca31,	// (0x00066c2f) grid_indicator_nsta_pane

0x463c,	// (0x0005e83a) clock_nsta_pane_g1

0x4645,	// (0x0005e843) clock_nsta_pane_t1

0xca3f,	// (0x00066c3d) cell_indicator_nsta_pane_ParamLimits

0xca3f,	// (0x00066c3d) cell_indicator_nsta_pane

0x4699,	// (0x0005e897) cell_indicator_nsta_pane_g1

0xca5c,	// (0x00066c5a) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x00069cb8) cell_indicator_nsta_pane_g

0x46bd,	// (0x0005e8bb) clock_nsta_pane_cp

0x46c5,	// (0x0005e8c3) indicator_nsta_pane_cp

0x46ce,	// (0x0005e8cc) nsta_clock_indic_pane_g1

0x565b,	// (0x0005f859) grid_indicator_pane

0x910f,	// (0x0006330d) scroll_pane_cp29

0xf438,	// (0x00069636) indicator_nsta_pane_cp2_ParamLimits

0xf438,	// (0x00069636) indicator_nsta_pane_cp2

0x561f,	// (0x0005f81d) main_apps_wheel_pane

0x272a,	// (0x0005c928) form_midp_field_text_pane_ParamLimits

0x2879,	// (0x0005ca77) scroll_bar_cp050_ParamLimits

0x4737,	// (0x0005e935) cell_indicator_pane_ParamLimits

0x4737,	// (0x0005e935) cell_indicator_pane

0x474f,	// (0x0005e94d) cell_indicator_pane_g1

0xca72,	// (0x00066c70) grid_wheel_folder_pane_ParamLimits

0xca72,	// (0x00066c70) grid_wheel_folder_pane

0xca80,	// (0x00066c7e) list_wheel_apps_pane_ParamLimits

0xca80,	// (0x00066c7e) list_wheel_apps_pane

0xca8e,	// (0x00066c8c) main_apps_wheel_pane_g1_ParamLimits

0xca8e,	// (0x00066c8c) main_apps_wheel_pane_g1

0xca9e,	// (0x00066c9c) main_apps_wheel_pane_g2_ParamLimits

0xca9e,	// (0x00066c9c) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00069cd4) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00069cd4) main_apps_wheel_pane_g

0xcaae,	// (0x00066cac) main_apps_wheel_pane_t1_ParamLimits

0xcaae,	// (0x00066cac) main_apps_wheel_pane_t1

0xcac6,	// (0x00066cc4) list_wheel_apps_pane_g1

0xcace,	// (0x00066ccc) list_wheel_apps_pane_g2

0xcad6,	// (0x00066cd4) list_wheel_apps_pane_g3

0xcade,	// (0x00066cdc) list_wheel_apps_pane_g4

0xcae6,	// (0x00066ce4) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x00069cd9) list_wheel_apps_pane_g

0xe553,	// (0x00068751) navi_icon_text_pane

0xb4ec,	// (0x000656ea) aid_fill_nsta

0xcb03,	// (0x00066d01) navi_icon_text_pane_g1

0xcb0f,	// (0x00066d0d) navi_icon_text_pane_t1

0xaab2,	// (0x00064cb0) list_set_graphic_pane_t1_ParamLimits

0xaab2,	// (0x00064cb0) list_set_graphic_pane_t1

0x2fca,	// (0x0005d1c8) popup_midp_note_alarm_window_t6_ParamLimits

0x2fca,	// (0x0005d1c8) popup_midp_note_alarm_window_t6

0x2fdc,	// (0x0005d1da) popup_midp_note_alarm_window_t7_ParamLimits

0x2fdc,	// (0x0005d1da) popup_midp_note_alarm_window_t7

0x2fee,	// (0x0005d1ec) popup_midp_note_alarm_window_t8_ParamLimits

0x2fee,	// (0x0005d1ec) popup_midp_note_alarm_window_t8

0x3000,	// (0x0005d1fe) popup_midp_note_alarm_window_t9_ParamLimits

0x3000,	// (0x0005d1fe) popup_midp_note_alarm_window_t9

0x3012,	// (0x0005d210) popup_midp_note_alarm_window_t10_ParamLimits

0x3012,	// (0x0005d210) popup_midp_note_alarm_window_t10

0x3024,	// (0x0005d222) popup_midp_note_alarm_window_t11_ParamLimits

0x3024,	// (0x0005d222) popup_midp_note_alarm_window_t11

0x3036,	// (0x0005d234) scroll_pane_cp17_ParamLimits

0x3036,	// (0x0005d234) scroll_pane_cp17

0x057b,	// (0x0005a779) volume_small_pane_cp_g1

0x0900,	// (0x0005aafe) volume_small_pane_cp_g2

0x0909,	// (0x0005ab07) volume_small_pane_cp_g3

0x0912,	// (0x0005ab10) volume_small_pane_cp_g4

0x091b,	// (0x0005ab19) volume_small_pane_cp_g5

0x0924,	// (0x0005ab22) volume_small_pane_cp_g6

0x092d,	// (0x0005ab2b) volume_small_pane_cp_g7

0x0936,	// (0x0005ab34) volume_small_pane_cp_g8

0x093f,	// (0x0005ab3d) volume_small_pane_cp_g9

0x0948,	// (0x0005ab46) volume_small_pane_cp_g10

0xe6cf,	// (0x000688cd) midp_ticker_pane_g1_ParamLimits

0xe6db,	// (0x000688d9) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x00069961) midp_ticker_pane_g_ParamLimits

0xabe5,	// (0x00064de3) midp_ticker_pane_t1_ParamLimits

0xb510,	// (0x0006570e) aid_fill_nsta_2

0x2865,	// (0x0005ca63) list_form2_midp_pane

0x3b6e,	// (0x0005dd6c) midp_editing_number_pane_ParamLimits

0x3b7d,	// (0x0005dd7b) midp_ticker_pane_ParamLimits

0x4842,	// (0x0005ea40) form2_midp_field_pane

0x4866,	// (0x0005ea64) scroll_pane_cp51

0x4886,	// (0x0005ea84) form2_midp_button_pane_ParamLimits

0x4886,	// (0x0005ea84) form2_midp_button_pane

0x4898,	// (0x0005ea96) form2_midp_content_pane_ParamLimits

0x4898,	// (0x0005ea96) form2_midp_content_pane

0x48b2,	// (0x0005eab0) form2_midp_field_choice_group_pane

0x48ba,	// (0x0005eab8) form2_midp_field_pane_g1

0x48c2,	// (0x0005eac0) form2_midp_field_pane_g2

0x48ca,	// (0x0005eac8) form2_midp_field_pane_g3

0x48d2,	// (0x0005ead0) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x00069cfe) form2_midp_field_pane_g

0x48da,	// (0x0005ead8) form2_midp_gauge_slider_pane

0x48e2,	// (0x0005eae0) form2_midp_gauge_wait_pane

0x48ea,	// (0x0005eae8) form2_midp_image_pane_ParamLimits

0x48ea,	// (0x0005eae8) form2_midp_image_pane

0x4905,	// (0x0005eb03) form2_midp_label_pane_ParamLimits

0x4905,	// (0x0005eb03) form2_midp_label_pane

0xcb3d,	// (0x00066d3b) form2_midp_label_pane_cp_ParamLimits

0xcb3d,	// (0x00066d3b) form2_midp_label_pane_cp

0x4945,	// (0x0005eb43) form2_midp_string_pane_ParamLimits

0x4945,	// (0x0005eb43) form2_midp_string_pane

0xea66,	// (0x00068c64) form2_midp_text_pane_ParamLimits

0xea66,	// (0x00068c64) form2_midp_text_pane

0x4957,	// (0x0005eb55) form2_midp_time_pane

0x4967,	// (0x0005eb65) input_focus_pane_cp51_ParamLimits

0x4967,	// (0x0005eb65) input_focus_pane_cp51

0x497f,	// (0x0005eb7d) form2_midp_label_pane_t1_ParamLimits

0x497f,	// (0x0005eb7d) form2_midp_label_pane_t1

0xea89,	// (0x00068c87) form2_mdip_text_pane_t1_ParamLimits

0xea89,	// (0x00068c87) form2_mdip_text_pane_t1

0xeaa8,	// (0x00068ca6) form2_midp_time_pane_t1

0x49cd,	// (0x0005ebcb) form2_midp_gauge_slider_pane_t1

0xcb5e,	// (0x00066d5c) form2_midp_gauge_slider_pane_t2

0xcb70,	// (0x00066d6e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00069d07) form2_midp_gauge_slider_pane_t

0x4a03,	// (0x0005ec01) form2_midp_slider_pane

0x4a0f,	// (0x0005ec0d) form2_midp_gauge_wait_pane_t1

0x4a1d,	// (0x0005ec1b) form2_midp_wait_pane_ParamLimits

0x4a1d,	// (0x0005ec1b) form2_midp_wait_pane

0x258a,	// (0x0005c788) list_single_2graphic_pane_cp4_ParamLimits

0x258a,	// (0x0005c788) list_single_2graphic_pane_cp4

0x4a48,	// (0x0005ec46) list_single_midp_graphic_pane_cp_ParamLimits

0x4a48,	// (0x0005ec46) list_single_midp_graphic_pane_cp

0x55c5,	// (0x0005f7c3) list_highlight_pane_cp20

0x4a6c,	// (0x0005ec6a) list_single_2graphic_pane_g1_cp4

0x4003,	// (0x0005e201) list_single_2graphic_pane_g2_cp4

0x4a74,	// (0x0005ec72) list_single_2graphic_pane_t1_cp4

0x561f,	// (0x0005f81d) list_highlight_pane_cp21

0x4a83,	// (0x0005ec81) list_single_midp_graphic_pane_g4_cp

0x4a92,	// (0x0005ec90) list_single_midp_graphic_pane_t1_cp

0xcb82,	// (0x00066d80) form2_mdip_string_pane_t1_ParamLimits

0xcb82,	// (0x00066d80) form2_mdip_string_pane_t1

0x55c5,	// (0x0005f7c3) bg_wml_button_pane_cp2

0x55bb,	// (0x0005f7b9) form2_midp_image_pane_g1

0xe2e1,	// (0x000684df) list_double_large_graphic_pane_g5_ParamLimits

0xe2e1,	// (0x000684df) list_double_large_graphic_pane_g5

0x191c,	// (0x0005bb1a) midp_form_pane_ParamLimits

0x561f,	// (0x0005f81d) main_apps_wheel_pane_ParamLimits

0xb204,	// (0x00065402) popup_preview_window_ParamLimits

0xb204,	// (0x00065402) popup_preview_window

0x1ee4,	// (0x0005c0e2) popup_touch_info_window_ParamLimits

0x1ee4,	// (0x0005c0e2) popup_touch_info_window

0x1f06,	// (0x0005c104) popup_touch_menu_window_ParamLimits

0x1f06,	// (0x0005c104) popup_touch_menu_window

0x55b1,	// (0x0005f7af) bg_popup_sub_pane_cp6

0x4b4c,	// (0x0005ed4a) list_touch_menu_pane

0x4b54,	// (0x0005ed52) list_single_touch_menu_pane_ParamLimits

0x4b54,	// (0x0005ed52) list_single_touch_menu_pane

0x4b6c,	// (0x0005ed6a) list_single_touch_menu_pane_t1

0x561f,	// (0x0005f81d) bg_popup_sub_pane_cp7_ParamLimits

0x561f,	// (0x0005f81d) bg_popup_sub_pane_cp7

0x4b7a,	// (0x0005ed78) heading_sub_pane

0x4b82,	// (0x0005ed80) list_touch_info_pane_ParamLimits

0x4b82,	// (0x0005ed80) list_touch_info_pane

0x4b91,	// (0x0005ed8f) list_single_touch_info_pane_ParamLimits

0x4b91,	// (0x0005ed8f) list_single_touch_info_pane

0x4ba3,	// (0x0005eda1) list_single_touch_info_pane_t1

0x4bb1,	// (0x0005edaf) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00069d15) list_single_touch_info_pane_t

0xe6a3,	// (0x000688a1) bg_popup_heading_pane_cp

0x4bbf,	// (0x0005edbd) heading_sub_pane_t1

0x24d1,	// (0x0005c6cf) bg_popup_preview_window_pane_cp_ParamLimits

0x24d1,	// (0x0005c6cf) bg_popup_preview_window_pane_cp

0x4b7a,	// (0x0005ed78) heading_preview_pane

0x4b82,	// (0x0005ed80) list_preview_pane_ParamLimits

0x4b82,	// (0x0005ed80) list_preview_pane

0x4bcd,	// (0x0005edcb) popup_preview_window_g1

0x4b91,	// (0x0005ed8f) list_single_preview_pane_ParamLimits

0x4b91,	// (0x0005ed8f) list_single_preview_pane

0x4bd5,	// (0x0005edd3) list_single_preview_pane_g1

0x4bdd,	// (0x0005eddb) list_single_preview_pane_t1

0x4ba3,	// (0x0005eda1) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x00069d1a) list_single_preview_pane_t

0x4beb,	// (0x0005ede9) bg_popup_heading_pane_cp2_ParamLimits

0x4beb,	// (0x0005ede9) bg_popup_heading_pane_cp2

0x4c01,	// (0x0005edff) heading_preview_pane_g1

0x4c09,	// (0x0005ee07) heading_preview_pane_t1_ParamLimits

0x4c09,	// (0x0005ee07) heading_preview_pane_t1

0x5672,	// (0x0005f870) soft_indicator_pane_t1_ParamLimits

0x8c0d,	// (0x00062e0b) scroll_pane_ParamLimits

0x900b,	// (0x00063209) scroll_sc2_left_pane

0x9014,	// (0x00063212) scroll_sc2_right_pane

0x9033,	// (0x00063231) scroll_bg_pane_g1_ParamLimits

0x9048,	// (0x00063246) scroll_bg_pane_g2_ParamLimits

0x9060,	// (0x0006325e) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x000698ec) scroll_bg_pane_g_ParamLimits

0x9033,	// (0x00063231) scroll_handle_pane_g1_ParamLimits

0x9082,	// (0x00063280) scroll_handle_pane_g2_ParamLimits

0x9060,	// (0x0006325e) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x000698f3) scroll_handle_pane_g_ParamLimits

0x1944,	// (0x0005bb42) popup_choice_list_window_ParamLimits

0x1944,	// (0x0005bb42) popup_choice_list_window

0x23a7,	// (0x0005c5a5) choice_list_pane

0x2429,	// (0x0005c627) cell_toolbar_pane_t1

0x2451,	// (0x0005c64f) toolbar_button_pane_ParamLimits

0x3500,	// (0x0005d6fe) ai_gene_pane_1_t2_ParamLimits

0x3500,	// (0x0005d6fe) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x00069b16) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x00069b16) ai_gene_pane_1_t

0x4c26,	// (0x0005ee24) scroll_sc2_left_pane_g1

0x4c26,	// (0x0005ee24) scroll_sc2_right_pane_g1

0x191c,	// (0x0005bb1a) bg_popup_sub_pane_cp10

0x4c30,	// (0x0005ee2e) list_choice_list_pane

0x4c49,	// (0x0005ee47) list_single_choice_list_pane_ParamLimits

0x4c49,	// (0x0005ee47) list_single_choice_list_pane

0x4c61,	// (0x0005ee5f) list_single_choice_list_pane_g1

0x8deb,	// (0x00062fe9) list_single_choice_list_pane_t1_ParamLimits

0x8deb,	// (0x00062fe9) list_single_choice_list_pane_t1

0x4c69,	// (0x0005ee67) choice_list_pane_g1

0x4c71,	// (0x0005ee6f) choice_list_pane_t1

0x55b1,	// (0x0005f7af) input_focus_pane_cp11

0x8f69,	// (0x00063167) title_pane_stacon_g2_ParamLimits

0x8f69,	// (0x00063167) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x000698d2) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000698d2) title_pane_stacon_g

0xe6a3,	// (0x000688a1) cursor_press_pane

0xae81,	// (0x0006507f) popup_fep_hwr_window_ParamLimits

0xae81,	// (0x0006507f) popup_fep_hwr_window

0x1a88,	// (0x0005bc86) popup_fep_vkb_window_ParamLimits

0x1a88,	// (0x0005bc86) popup_fep_vkb_window

0x4c7f,	// (0x0005ee7d) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x00069d43) fep_vkb_side_pane_g_ParamLimits

0x098a,	// (0x0005ab88) fep_hwr_candidate_pane_ParamLimits

0x098a,	// (0x0005ab88) fep_hwr_candidate_pane

0x09b4,	// (0x0005abb2) fep_hwr_side_pane_ParamLimits

0x09b4,	// (0x0005abb2) fep_hwr_side_pane

0x09d6,	// (0x0005abd4) fep_hwr_top_pane_ParamLimits

0x09d6,	// (0x0005abd4) fep_hwr_top_pane

0x09ee,	// (0x0005abec) fep_hwr_write_pane_ParamLimits

0x09ee,	// (0x0005abec) fep_hwr_write_pane

0xfb45,	// (0x00069d43) fep_vkb_side_pane_g

0x4c87,	// (0x0005ee85) fep_hwr_top_pane_g1

0x4c99,	// (0x0005ee97) fep_hwr_top_pane_g2

0x0a28,	// (0x0005ac26) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x00069d1f) fep_hwr_top_pane_g

0x0a3d,	// (0x0005ac3b) fep_hwr_top_text_pane

0xc06f,	// (0x0006626d) fep_hwr_top_text_pane_g1

0x4ccf,	// (0x0005eecd) fep_hwr_top_text_pane_t1

0x0b47,	// (0x0005ad45) fep_hwr_candidate_pane_g1

0x4f1a,	// (0x0005f118) fep_vkb_keypad_pane_g3_ParamLimits

0x4f1a,	// (0x0005f118) fep_vkb_keypad_pane_g3

0x4f46,	// (0x0005f144) fep_vkb_keypad_pane_g4_ParamLimits

0x4f46,	// (0x0005f144) fep_vkb_keypad_pane_g4

0x4fbd,	// (0x0005f1bb) fep_vkb_bottom_pane_g2_ParamLimits

0x4fbd,	// (0x0005f1bb) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x00069d4a) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x00069d4a) fep_vkb_bottom_pane_g

0x4c26,	// (0x0005ee24) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x00069d54) cell_vkb_side_pane_g

0x5048,	// (0x0005f246) cell_vkb_side_pane_t1

0x5056,	// (0x0005f254) cell_vkb_side_pane_t1_copy1

0x4c26,	// (0x0005ee24) bg_fep_vkb_candidate_pane_g2

0x519a,	// (0x0005f398) cell_vkb_candidate_pane_ParamLimits

0x4cdd,	// (0x0005eedb) aid_size_cell_vkb_ParamLimits

0x4cdd,	// (0x0005eedb) aid_size_cell_vkb

0x519a,	// (0x0005f398) cell_vkb_candidate_pane

0x0b6e,	// (0x0005ad6c) bg_popup_fep_shadow_pane_g1

0xcc37,	// (0x00066e35) fep_vkb_bottom_pane_ParamLimits

0xcc37,	// (0x00066e35) fep_vkb_bottom_pane

0x4dac,	// (0x0005efaa) fep_vkb_candidate_pane_ParamLimits

0x4dac,	// (0x0005efaa) fep_vkb_candidate_pane

0xcc63,	// (0x00066e61) fep_vkb_keypad_pane_ParamLimits

0xcc63,	// (0x00066e61) fep_vkb_keypad_pane

0xcc8a,	// (0x00066e88) fep_vkb_side_pane_ParamLimits

0xcc8a,	// (0x00066e88) fep_vkb_side_pane

0xccc6,	// (0x00066ec4) fep_vkb_top_pane_ParamLimits

0xccc6,	// (0x00066ec4) fep_vkb_top_pane

0x4e73,	// (0x0005f071) fep_vkb_top_pane_g1_ParamLimits

0x4e73,	// (0x0005f071) fep_vkb_top_pane_g1

0x4e82,	// (0x0005f080) fep_vkb_top_pane_g2_ParamLimits

0x4e82,	// (0x0005f080) fep_vkb_top_pane_g2

0x4e91,	// (0x0005f08f) fep_vkb_top_pane_g3_ParamLimits

0x4e91,	// (0x0005f08f) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x00069d3a) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x00069d3a) fep_vkb_top_pane_g

0x4eaf,	// (0x0005f0ad) fep_vkb_top_text_pane_ParamLimits

0x4eaf,	// (0x0005f0ad) fep_vkb_top_text_pane

0xcd02,	// (0x00066f00) fep_vkb_side_pane_g1_ParamLimits

0xcd02,	// (0x00066f00) fep_vkb_side_pane_g1

0x4f09,	// (0x0005f107) grid_vkb_side_pane_ParamLimits

0x4f09,	// (0x0005f107) grid_vkb_side_pane

0x0b76,	// (0x0005ad74) bg_popup_fep_shadow_pane_g2

0x0b7f,	// (0x0005ad7d) bg_popup_fep_shadow_pane_g3

0x0b87,	// (0x0005ad85) bg_popup_fep_shadow_pane_g4

0x0b90,	// (0x0005ad8e) bg_popup_fep_shadow_pane_g5

0x0b9a,	// (0x0005ad98) bg_popup_fep_shadow_pane_g6

0x0ba2,	// (0x0005ada0) bg_popup_fep_shadow_pane_g7

0x8d0d,	// (0x00062f0b) bg_popup_fep_shadow_pane_g8

0x4f68,	// (0x0005f166) grid_vkb_keypad_number_pane_ParamLimits

0x4f68,	// (0x0005f166) grid_vkb_keypad_number_pane

0x4f7c,	// (0x0005f17a) grid_vkb_keypad_pane_ParamLimits

0x4f7c,	// (0x0005f17a) grid_vkb_keypad_pane

0x4fa2,	// (0x0005f1a0) fep_vkb_bottom_pane_g1_ParamLimits

0x4fa2,	// (0x0005f1a0) fep_vkb_bottom_pane_g1

0x4fcb,	// (0x0005f1c9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4fcb,	// (0x0005f1c9) grid_vkb_keypad_bottom_left_pane

0x4fe0,	// (0x0005f1de) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4fe0,	// (0x0005f1de) grid_vkb_keypad_bottom_right_pane

0x4ff5,	// (0x0005f1f3) fep_vkb_top_text_pane_g1

0xcd49,	// (0x00066f47) fep_vkb_top_text_pane_t1

0xcd5b,	// (0x00066f59) cell_vkb_side_pane_ParamLimits

0xcd5b,	// (0x00066f59) cell_vkb_side_pane

0x4c26,	// (0x0005ee24) cell_vkb_side_pane_g1

0x5064,	// (0x0005f262) cell_vkb_keypad_pane_ParamLimits

0x5064,	// (0x0005f262) cell_vkb_keypad_pane

0x50f1,	// (0x0005f2ef) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x00069d67) bg_popup_fep_shadow_pane_g

0x0bb4,	// (0x0005adb2) cell_hwr_side_pane_g1

0x0bb4,	// (0x0005adb2) cell_hwr_side_pane_g2

0x50fb,	// (0x0005f2f9) cell_vkb_keypad_pane_t1

0xcd71,	// (0x00066f6f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd71,	// (0x00066f6f) cell_vkb_keypad_bottom_left_pane

0xcd86,	// (0x00066f84) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd86,	// (0x00066f84) cell_vkb_keypad_bottom_right_pane

0x4c26,	// (0x0005ee24) cell_vkb_keypad_bottom_left_pane_g1

0x4c26,	// (0x0005ee24) cell_vkb_keypad_bottom_right_pane_g1

0x515f,	// (0x0005f35d) cell_vkb_keypad_number_pane_ParamLimits

0x515f,	// (0x0005f35d) cell_vkb_keypad_number_pane

0x517e,	// (0x0005f37c) cell_vkb_keypad_number_pane_g1

0x5188,	// (0x0005f386) cell_vkb_keypad_number_pane_g2

0x5191,	// (0x0005f38f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x00069d59) cell_vkb_keypad_number_pane_g

0x50fb,	// (0x0005f2f9) cell_vkb_keypad_number_pane_t1

0x51bb,	// (0x0005f3b9) fep_vkb_candidate_pane_g1

0x0001,

0xfb7c,	// (0x00069d7a) cell_hwr_side_pane_g

0x51d4,	// (0x0005f3d2) cell_hwr_side_pane_t1

0x0bbe,	// (0x0005adbc) cell_hwr_side_pane_t1_copy1

0x0bcc,	// (0x0005adca) cell_hwr_candidate_pane_g1

0x0bfb,	// (0x0005adf9) cell_hwr_candidate_pane_t1

0x4c26,	// (0x0005ee24) cell_vkb_candidate_pane_g2

0x5218,	// (0x0005f416) cell_vkb_candidate_pane_t1

0x0951,	// (0x0005ab4f) bg_popup_fep_shadow_pane_ParamLimits

0x0951,	// (0x0005ab4f) bg_popup_fep_shadow_pane

0x0a08,	// (0x0005ac06) bg_fep_hwr_top_pane_g4

0x4cab,	// (0x0005eea9) bg_hwr_side_pane_g1_ParamLimits

0x4cab,	// (0x0005eea9) bg_hwr_side_pane_g1

0xb9c8,	// (0x00065bc6) cell_hwr_side_pane_ParamLimits

0xb9c8,	// (0x00065bc6) cell_hwr_side_pane

0x0ab8,	// (0x0005acb6) fep_hwr_write_pane_g1_ParamLimits

0x0ab8,	// (0x0005acb6) fep_hwr_write_pane_g1

0x0ac5,	// (0x0005acc3) fep_hwr_write_pane_g2_ParamLimits

0x0ac5,	// (0x0005acc3) fep_hwr_write_pane_g2

0x0ad2,	// (0x0005acd0) fep_hwr_write_pane_g3_ParamLimits

0x0ad2,	// (0x0005acd0) fep_hwr_write_pane_g3

0xb9e8,	// (0x00065be6) fep_hwr_write_pane_g4_ParamLimits

0xb9e8,	// (0x00065be6) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x00069d26) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x00069d26) fep_hwr_write_pane_g

0x0a08,	// (0x0005ac06) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0a08,	// (0x0005ac06) bg_fep_hwr_candidate_pane_g2

0x0af5,	// (0x0005acf3) cell_hwr_candidate_pane_ParamLimits

0x0af5,	// (0x0005acf3) cell_hwr_candidate_pane

0x0b47,	// (0x0005ad45) fep_hwr_candidate_pane_g1_ParamLimits

0x4d0b,	// (0x0005ef09) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4d0b,	// (0x0005ef09) bg_popup_fep_shadow_pane_cp2

0x4ea1,	// (0x0005f09f) fep_vkb_top_pane_g4_ParamLimits

0x4ea1,	// (0x0005f09f) fep_vkb_top_pane_g4

0x4ee7,	// (0x0005f0e5) fep_vkb_side_pane_g2_ParamLimits

0x4ee7,	// (0x0005f0e5) fep_vkb_side_pane_g2

0xa513,	// (0x00064711) list_setting_pane_t4_ParamLimits

0xa513,	// (0x00064711) list_setting_pane_t4

0xa5af,	// (0x000647ad) list_setting_number_pane_t5_ParamLimits

0xa5af,	// (0x000647ad) list_setting_number_pane_t5

0xa91c,	// (0x00064b1a) list_double_heading_pane_cp2_ParamLimits

0xa91c,	// (0x00064b1a) list_double_heading_pane_cp2

0x5226,	// (0x0005f424) list_double_heading_pane_g1_cp2_ParamLimits

0x5226,	// (0x0005f424) list_double_heading_pane_g1_cp2

0x5232,	// (0x0005f430) list_double_heading_pane_g2_cp2_ParamLimits

0x5232,	// (0x0005f430) list_double_heading_pane_g2_cp2

0x5246,	// (0x0005f444) list_double_heading_pane_t1_cp2_ParamLimits

0x5246,	// (0x0005f444) list_double_heading_pane_t1_cp2

0x525c,	// (0x0005f45a) list_double_heading_pane_t2_cp2_ParamLimits

0x525c,	// (0x0005f45a) list_double_heading_pane_t2_cp2

0x55a9,	// (0x0005f7a7) aid_value_unit2

0xf0d9,	// (0x000692d7) popup_preview_fixed_window

0x87b8,	// (0x000629b6) bg_popup_preview_window_pane_cp02

0x526e,	// (0x0005f46c) list_preview_fixed_pane

0x52b4,	// (0x0005f4b2) list_empty_pane_fp_ParamLimits

0x52b4,	// (0x0005f4b2) list_empty_pane_fp

0x52b4,	// (0x0005f4b2) list_single_cale_day_pane_fp_ParamLimits

0x52b4,	// (0x0005f4b2) list_single_cale_day_pane_fp

0x52b4,	// (0x0005f4b2) list_single_graphic_heading_pane_fp_ParamLimits

0x52b4,	// (0x0005f4b2) list_single_graphic_heading_pane_fp

0x52b4,	// (0x0005f4b2) list_single_graphic_pane_fp_ParamLimits

0x52b4,	// (0x0005f4b2) list_single_graphic_pane_fp

0x52b4,	// (0x0005f4b2) list_single_heading_pane_fp_ParamLimits

0x52b4,	// (0x0005f4b2) list_single_heading_pane_fp

0x52b4,	// (0x0005f4b2) list_single_pane_fp_ParamLimits

0x52b4,	// (0x0005f4b2) list_single_pane_fp

0x52cd,	// (0x0005f4cb) list_single_pane_fp_g1_ParamLimits

0x52cd,	// (0x0005f4cb) list_single_pane_fp_g1

0x5226,	// (0x0005f424) list_single_pane_fp_g2_ParamLimits

0x5226,	// (0x0005f424) list_single_pane_fp_g2

0x5232,	// (0x0005f430) list_single_pane_fp_g3_ParamLimits

0x5232,	// (0x0005f430) list_single_pane_fp_g3

0x52d9,	// (0x0005f4d7) list_single_pane_fp_g4_ParamLimits

0x52d9,	// (0x0005f4d7) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x00069d8d) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x00069d8d) list_single_pane_fp_g

0xeabb,	// (0x00068cb9) list_single_pane_fp_t1_ParamLimits

0xeabb,	// (0x00068cb9) list_single_pane_fp_t1

0xead2,	// (0x00068cd0) list_single_graphic_pane_fp_g1_ParamLimits

0xead2,	// (0x00068cd0) list_single_graphic_pane_fp_g1

0x52cd,	// (0x0005f4cb) list_single_graphic_pane_fp_g2_ParamLimits

0x52cd,	// (0x0005f4cb) list_single_graphic_pane_fp_g2

0x5226,	// (0x0005f424) list_single_graphic_pane_fp_g3_ParamLimits

0x5226,	// (0x0005f424) list_single_graphic_pane_fp_g3

0x5232,	// (0x0005f430) list_single_graphic_pane_fp_g4_ParamLimits

0x5232,	// (0x0005f430) list_single_graphic_pane_fp_g4

0x52d9,	// (0x0005f4d7) list_single_graphic_pane_fp_g5_ParamLimits

0x52d9,	// (0x0005f4d7) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x00069d96) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x00069d96) list_single_graphic_pane_fp_g

0xeade,	// (0x00068cdc) list_single_graphic_pane_fp_t1_ParamLimits

0xeade,	// (0x00068cdc) list_single_graphic_pane_fp_t1

0xead2,	// (0x00068cd0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xead2,	// (0x00068cd0) list_single_graphic_heading_pane_fp_g1

0x52cd,	// (0x0005f4cb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x52cd,	// (0x0005f4cb) list_single_graphic_heading_pane_fp_g2

0x5226,	// (0x0005f424) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5226,	// (0x0005f424) list_single_graphic_heading_pane_fp_g3

0x5232,	// (0x0005f430) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5232,	// (0x0005f430) list_single_graphic_heading_pane_fp_g4

0x52d9,	// (0x0005f4d7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x52d9,	// (0x0005f4d7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00069d96) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00069d96) list_single_graphic_heading_pane_fp_g

0xeaf4,	// (0x00068cf2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xeaf4,	// (0x00068cf2) list_single_graphic_heading_pane_fp_t1

0xeb0a,	// (0x00068d08) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeb0a,	// (0x00068d08) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x00069da1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x00069da1) list_single_graphic_heading_pane_fp_t

0xeb1c,	// (0x00068d1a) list_single_cale_day_pane_fp_g1_ParamLimits

0xeb1c,	// (0x00068d1a) list_single_cale_day_pane_fp_g1

0x52e5,	// (0x0005f4e3) list_single_cale_day_pane_fp_g2_ParamLimits

0x52e5,	// (0x0005f4e3) list_single_cale_day_pane_fp_g2

0x3633,	// (0x0005d831) list_single_cale_day_pane_fp_g3_ParamLimits

0x3633,	// (0x0005d831) list_single_cale_day_pane_fp_g3

0x365b,	// (0x0005d859) list_single_cale_day_pane_fp_g4_ParamLimits

0x365b,	// (0x0005d859) list_single_cale_day_pane_fp_g4

0x367f,	// (0x0005d87d) list_single_cale_day_pane_fp_g5_ParamLimits

0x367f,	// (0x0005d87d) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x00069da6) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x00069da6) list_single_cale_day_pane_fp_g

0xeb54,	// (0x00068d52) list_single_cale_day_pane_fp_t1_ParamLimits

0xeb54,	// (0x00068d52) list_single_cale_day_pane_fp_t1

0xeb7a,	// (0x00068d78) list_single_cale_day_pane_fp_t2_ParamLimits

0xeb7a,	// (0x00068d78) list_single_cale_day_pane_fp_t2

0xeb93,	// (0x00068d91) list_single_cale_day_pane_fp_t3_ParamLimits

0xeb93,	// (0x00068d91) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x00069db1) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x00069db1) list_single_cale_day_pane_fp_t

0x52cd,	// (0x0005f4cb) list_empty_pane_fp_g1_ParamLimits

0x52cd,	// (0x0005f4cb) list_empty_pane_fp_g1

0xebac,	// (0x00068daa) list_empty_pane_fp_t1

0xebba,	// (0x00068db8) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x00069db8) list_empty_pane_fp_t

0x52cd,	// (0x0005f4cb) list_single_heading_pane_fp_g1_ParamLimits

0x52cd,	// (0x0005f4cb) list_single_heading_pane_fp_g1

0x5226,	// (0x0005f424) list_single_heading_pane_fp_g2_ParamLimits

0x5226,	// (0x0005f424) list_single_heading_pane_fp_g2

0x5232,	// (0x0005f430) list_single_heading_pane_fp_g3_ParamLimits

0x5232,	// (0x0005f430) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x00069dbd) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x00069dbd) list_single_heading_pane_fp_g

0xebc8,	// (0x00068dc6) list_single_heading_pane_fp_t1_ParamLimits

0xebc8,	// (0x00068dc6) list_single_heading_pane_fp_t1

0xebda,	// (0x00068dd8) list_single_heading_pane_fp_t2_ParamLimits

0xebda,	// (0x00068dd8) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x00069dc4) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x00069dc4) list_single_heading_pane_fp_t

0x8e00,	// (0x00062ffe) aid_size_cell_fast

0x879b,	// (0x00062999) soft_indicator_pane_cp1_t1

0x8e3d,	// (0x0006303b) cell_app_pane_cp2_ParamLimits

0x8e3d,	// (0x0006303b) cell_app_pane_cp2

0x0973,	// (0x0005ab71) fep_hwr_candidate_drop_down_list_pane

0x0b61,	// (0x0005ad5f) fep_hwr_candidate_pane_g3_ParamLimits

0x0b61,	// (0x0005ad5f) fep_hwr_candidate_pane_g3

0xcc18,	// (0x00066e16) fep_hwr_candidate_pane_g4_ParamLimits

0xcc18,	// (0x00066e16) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x00069d33) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x00069d33) fep_hwr_candidate_pane_g

0x4d9b,	// (0x0005ef99) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4d9b,	// (0x0005ef99) fep_vkb_candidate_drop_down_list_pane

0x51c3,	// (0x0005f3c1) fep_vkb_candidate_pane_g3

0x51cb,	// (0x0005f3c9) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x00069d60) fep_vkb_candidate_pane_g

0x0bcc,	// (0x0005adca) cell_hwr_candidate_pane_g1_ParamLimits

0x0bda,	// (0x0005add8) cell_hwr_candidate_pane_g3_ParamLimits

0x0bda,	// (0x0005add8) cell_hwr_candidate_pane_g3

0x569a,	// (0x0005f898) cell_hwr_candidate_pane_g4_ParamLimits

0x569a,	// (0x0005f898) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x00069d7f) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x00069d7f) cell_hwr_candidate_pane_g

0x51e2,	// (0x0005f3e0) cell_vkb_candidate_pane_g3_ParamLimits

0x51e2,	// (0x0005f3e0) cell_vkb_candidate_pane_g3

0x51fd,	// (0x0005f3fb) cell_vkb_candidate_pane_g4_ParamLimits

0x51fd,	// (0x0005f3fb) cell_vkb_candidate_pane_g4

0x52f1,	// (0x0005f4ef) cell_app_pane_cp2_g1_ParamLimits

0x52f1,	// (0x0005f4ef) cell_app_pane_cp2_g1

0x530f,	// (0x0005f50d) cell_app_pane_cp2_g2_ParamLimits

0x530f,	// (0x0005f50d) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x00069dc9) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x00069dc9) cell_app_pane_cp2_g

0x531b,	// (0x0005f519) cell_app_pane_cp2_t1_ParamLimits

0x531b,	// (0x0005f519) cell_app_pane_cp2_t1

0x8c9a,	// (0x00062e98) grid_highlight_pane_cp1_ParamLimits

0x8c9a,	// (0x00062e98) grid_highlight_pane_cp1

0x0c19,	// (0x0005ae17) cell_hwr_candidate_pane_cp1_ParamLimits

0x0c19,	// (0x0005ae17) cell_hwr_candidate_pane_cp1

0x0bcc,	// (0x0005adca) fep_hwr_candidate_drop_down_list_pane_g1

0x0c3d,	// (0x0005ae3b) fep_hwr_candidate_drop_down_list_pane_g2

0x0c4a,	// (0x0005ae48) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00069dce) fep_hwr_candidate_drop_down_list_pane_g

0x0c57,	// (0x0005ae55) fep_hwr_candidate_drop_down_list_scroll_pane

0x0c60,	// (0x0005ae5e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0c60,	// (0x0005ae5e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0c6d,	// (0x0005ae6b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0c6d,	// (0x0005ae6b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0c7a,	// (0x0005ae78) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0c7a,	// (0x0005ae78) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0c87,	// (0x0005ae85) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0c87,	// (0x0005ae85) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0ca2,	// (0x0005aea0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0ca2,	// (0x0005aea0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0cbd,	// (0x0005aebb) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0cbd,	// (0x0005aebb) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0cd8,	// (0x0005aed6) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0cd8,	// (0x0005aed6) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0cf3,	// (0x0005aef1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0cf3,	// (0x0005aef1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x00069dd5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x00069dd5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x532d,	// (0x0005f52b) cell_vkb_candidate_pane_cp1_ParamLimits

0x532d,	// (0x0005f52b) cell_vkb_candidate_pane_cp1

0x4ea1,	// (0x0005f09f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4ea1,	// (0x0005f09f) fep_vkb_candidate_drop_down_list_pane_g1

0x5353,	// (0x0005f551) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5353,	// (0x0005f551) fep_vkb_candidate_drop_down_list_pane_g2

0x5360,	// (0x0005f55e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5360,	// (0x0005f55e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x00069de6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x00069de6) fep_vkb_candidate_drop_down_list_pane_g

0x536d,	// (0x0005f56b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x536d,	// (0x0005f56b) fep_vkb_candidate_drop_down_list_scroll_pane

0x537a,	// (0x0005f578) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x537a,	// (0x0005f578) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5387,	// (0x0005f585) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5387,	// (0x0005f585) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5393,	// (0x0005f591) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5393,	// (0x0005f591) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x539f,	// (0x0005f59d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x539f,	// (0x0005f59d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x53c0,	// (0x0005f5be) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x53c0,	// (0x0005f5be) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x53e1,	// (0x0005f5df) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x53e1,	// (0x0005f5df) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5402,	// (0x0005f600) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5402,	// (0x0005f600) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5423,	// (0x0005f621) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5423,	// (0x0005f621) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x00069ded) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x00069ded) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9d77,	// (0x00063f75) title_pane_g1_ParamLimits

0x9d8a,	// (0x00063f88) title_pane_g2_ParamLimits

0xf554,	// (0x00069752) title_pane_g_ParamLimits

0x916c,	// (0x0006336a) aid_call2_pane

0x9174,	// (0x00063372) aid_call_pane

0xc06f,	// (0x0006626d) popup_clock_analogue_window_g1

0xc06f,	// (0x0006626d) popup_clock_analogue_window_g2

0xf337,	// (0x00069535) popup_clock_analogue_window_g3

0xf340,	// (0x0006953e) popup_clock_analogue_window_g4

0x55bb,	// (0x0005f7b9) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00069901) popup_clock_analogue_window_g

0xf348,	// (0x00069546) popup_clock_analogue_window_t1

0xf356,	// (0x00069554) clock_digital_number_pane_ParamLimits

0xf356,	// (0x00069554) clock_digital_number_pane

0xf362,	// (0x00069560) clock_digital_number_pane_cp02_ParamLimits

0xf362,	// (0x00069560) clock_digital_number_pane_cp02

0xf36e,	// (0x0006956c) clock_digital_number_pane_cp03_ParamLimits

0xf36e,	// (0x0006956c) clock_digital_number_pane_cp03

0xf37a,	// (0x00069578) clock_digital_number_pane_cp04_ParamLimits

0xf37a,	// (0x00069578) clock_digital_number_pane_cp04

0xf386,	// (0x00069584) clock_digital_separator_pane_ParamLimits

0xf386,	// (0x00069584) clock_digital_separator_pane

0xf392,	// (0x00069590) popup_clock_digital_window_t1_ParamLimits

0xf392,	// (0x00069590) popup_clock_digital_window_t1

0x55bb,	// (0x0005f7b9) clock_digital_number_pane_g1

0x55bb,	// (0x0005f7b9) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0006990c) clock_digital_number_pane_g

0x55bb,	// (0x0005f7b9) clock_digital_separator_pane_g1

0x55bb,	// (0x0005f7b9) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0006990c) clock_digital_separator_pane_g

0xb4ec,	// (0x000656ea) aid_fill_nsta_ParamLimits

0xb624,	// (0x00065822) indicator_nsta_pane_ParamLimits

0x2234,	// (0x0005c432) popup_clock_analogue_window

0x2234,	// (0x0005c432) popup_clock_digital_window

0xca31,	// (0x00066c2f) grid_indicator_nsta_pane_ParamLimits

0x4653,	// (0x0005e851) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x00069cb3) clock_nsta_pane_t

0xf304,	// (0x00069502) aid_size_max_handle

0xa88f,	// (0x00064a8d) aid_size_min_handle

0xe6a3,	// (0x000688a1) editor_scroll_pane

0x543e,	// (0x0005f63c) ex_editor_pane

0x8dc6,	// (0x00062fc4) scroll_pane_cp13

0x8c39,	// (0x00062e37) scroll_pane_cp14

0xc09e,	// (0x0006629c) scroll_pane_cp36

0xa92f,	// (0x00064b2d) list_single_graphic_hl_pane_cp2_ParamLimits

0xa92f,	// (0x00064b2d) list_single_graphic_hl_pane_cp2

0xc8cd,	// (0x00066acb) list_single_graphic_hl_pane_ParamLimits

0xc8cd,	// (0x00066acb) list_single_graphic_hl_pane

0xebf0,	// (0x00068dee) aid_size_min_hl_cp1

0x5446,	// (0x0005f644) list_highlight_pane_cp34_ParamLimits

0x5446,	// (0x0005f644) list_highlight_pane_cp34

0x5457,	// (0x0005f655) list_single_graphic_hl_pane_g1_ParamLimits

0x5457,	// (0x0005f655) list_single_graphic_hl_pane_g1

0xb9fd,	// (0x00065bfb) list_single_graphic_hl_pane_g2_ParamLimits

0xb9fd,	// (0x00065bfb) list_single_graphic_hl_pane_g2

0xb9fd,	// (0x00065bfb) list_single_graphic_hl_pane_g3_ParamLimits

0xb9fd,	// (0x00065bfb) list_single_graphic_hl_pane_g3

0xcda1,	// (0x00066f9f) list_single_graphic_hl_pane_g4_ParamLimits

0xcda1,	// (0x00066f9f) list_single_graphic_hl_pane_g4

0x5494,	// (0x0005f692) list_single_graphic_hl_pane_g5_ParamLimits

0x5494,	// (0x0005f692) list_single_graphic_hl_pane_g5

0x0004,

0xfc00,	// (0x00069dfe) list_single_graphic_hl_pane_g_ParamLimits

0xfc00,	// (0x00069dfe) list_single_graphic_hl_pane_g

0xba09,	// (0x00065c07) list_single_graphic_hl_pane_t1_ParamLimits

0xba09,	// (0x00065c07) list_single_graphic_hl_pane_t1

0x5464,	// (0x0005f662) aid_size_min_hl_cp2

0x546d,	// (0x0005f66b) list_highlight_pane_cp34_cp2_ParamLimits

0x546d,	// (0x0005f66b) list_highlight_pane_cp34_cp2

0x5457,	// (0x0005f655) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5457,	// (0x0005f655) list_single_graphic_hl_pane_g1_cp2

0x547a,	// (0x0005f678) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x547a,	// (0x0005f678) list_single_graphic_hl_pane_g2_cp2

0xcdad,	// (0x00066fab) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcdad,	// (0x00066fab) list_single_graphic_hl_pane_g3_cp2

0xcda1,	// (0x00066f9f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcda1,	// (0x00066f9f) list_single_graphic_hl_pane_g4_cp2

0x5494,	// (0x0005f692) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5494,	// (0x0005f692) list_single_graphic_hl_pane_g5_cp2

0xac4f,	// (0x00064e4d) control_pane_g4_ParamLimits

0xac4f,	// (0x00064e4d) control_pane_g4

0x191c,	// (0x0005bb1a) bg_popup_sub_pane_cp10_ParamLimits

0x4c30,	// (0x0005ee2e) list_choice_list_pane_ParamLimits

0x4c3f,	// (0x0005ee3d) scroll_pane_cp23

0x87b8,	// (0x000629b6) bg_popup_preview_window_pane_cp02_ParamLimits

0x526e,	// (0x0005f46c) list_preview_fixed_pane_ParamLimits

0x5284,	// (0x0005f482) list_preview_fixed_pane_cp_ParamLimits

0x5284,	// (0x0005f482) list_preview_fixed_pane_cp

0x5290,	// (0x0005f48e) popup_preview_fixed_window_g1_ParamLimits

0x5290,	// (0x0005f48e) popup_preview_fixed_window_g1

0x529c,	// (0x0005f49a) popup_preview_fixed_window_g2_ParamLimits

0x529c,	// (0x0005f49a) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x00069d86) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x00069d86) popup_preview_fixed_window_g

0xf276,	// (0x00069474) aid_navi_side_left_pane_ParamLimits

0xf28b,	// (0x00069489) aid_navi_side_right_pane_ParamLimits

0xf2a3,	// (0x000694a1) navi_icon_pane_stacon_ParamLimits

0xf2b7,	// (0x000694b5) navi_navi_pane_stacon_ParamLimits

0xf2a3,	// (0x000694a1) navi_text_pane_stacon_ParamLimits

0x55b1,	// (0x0005f7af) main_text_info_pane

0x54be,	// (0x0005f6bc) listscroll_text_info_pane

0x54c6,	// (0x0005f6c4) list_text_info_pane_ParamLimits

0x54c6,	// (0x0005f6c4) list_text_info_pane

0x54d5,	// (0x0005f6d3) scroll_pane_cp24_ParamLimits

0x54d5,	// (0x0005f6d3) scroll_pane_cp24

0xcdbb,	// (0x00066fb9) list_text_info_pane_t1_ParamLimits

0xcdbb,	// (0x00066fb9) list_text_info_pane_t1

0xade5,	// (0x00064fe3) popup_fast_swap2_window_ParamLimits

0xade5,	// (0x00064fe3) popup_fast_swap2_window

0x5518,	// (0x0005f716) aid_size_cell_fast2

0x55b1,	// (0x0005f7af) bg_popup_window_pane_cp17

0x2891,	// (0x0005ca8f) heading_pane_cp2

0x89be,	// (0x00062bbc) listscroll_fast2_pane

0x5522,	// (0x0005f720) grid_fast2_pane

0x552c,	// (0x0005f72a) listscroll_fast2_pane_g1

0x5536,	// (0x0005f734) listscroll_fast2_pane_g2

0x0001,

0xfc0b,	// (0x00069e09) listscroll_fast2_pane_g

0x8dc6,	// (0x00062fc4) scroll_pane_cp26

0x5540,	// (0x0005f73e) cell_fast2_pane_ParamLimits

0x5540,	// (0x0005f73e) cell_fast2_pane

0x5557,	// (0x0005f755) cell_fast2_pane_g1

0x5560,	// (0x0005f75e) cell_fast2_pane_g2

0x5569,	// (0x0005f767) cell_fast2_pane_g3

0x0002,

0xfc10,	// (0x00069e0e) cell_fast2_pane_g

0x8a00,	// (0x00062bfe) grid_highlight_pane_cp9

0x8a15,	// (0x00062c13) main_eswt_pane_ParamLimits

0x8a15,	// (0x00062c13) main_eswt_pane

0x54ea,	// (0x0005f6e8) list_single_text_info_pane

0x5571,	// (0x0005f76f) eswt_ctrl_button_pane

0x5571,	// (0x0005f76f) eswt_ctrl_canvas_pane

0x5579,	// (0x0005f777) eswt_ctrl_combo_pane

0x5571,	// (0x0005f76f) eswt_ctrl_default_pane

0x5571,	// (0x0005f76f) eswt_ctrl_label_pane

0x5581,	// (0x0005f77f) eswt_ctrl_wait_pane

0x5589,	// (0x0005f787) eswt_shell_pane

0x55b1,	// (0x0005f7af) listscroll_eswt_app_pane

0x56bb,	// (0x0005f8b9) popup_eswt_tasktip_window_ParamLimits

0x56bb,	// (0x0005f8b9) popup_eswt_tasktip_window

0x24d1,	// (0x0005c6cf) bg_popup_window_pane_cp18

0x56cc,	// (0x0005f8ca) eswt_control_pane_g1_ParamLimits

0x56cc,	// (0x0005f8ca) eswt_control_pane_g1

0x56d9,	// (0x0005f8d7) eswt_control_pane_g2_ParamLimits

0x56d9,	// (0x0005f8d7) eswt_control_pane_g2

0x56e6,	// (0x0005f8e4) eswt_control_pane_g3_ParamLimits

0x56e6,	// (0x0005f8e4) eswt_control_pane_g3

0x56f3,	// (0x0005f8f1) eswt_control_pane_g4_ParamLimits

0x56f3,	// (0x0005f8f1) eswt_control_pane_g4

0x0003,

0xfc17,	// (0x00069e15) eswt_control_pane_g_ParamLimits

0xfc17,	// (0x00069e15) eswt_control_pane_g

0x8c9a,	// (0x00062e98) bg_button_pane_ParamLimits

0x8c9a,	// (0x00062e98) bg_button_pane

0x8a15,	// (0x00062c13) common_borders_pane_copy2_ParamLimits

0x8a15,	// (0x00062c13) common_borders_pane_copy2

0x5700,	// (0x0005f8fe) control_button_pane_g1_ParamLimits

0x5700,	// (0x0005f8fe) control_button_pane_g1

0x570c,	// (0x0005f90a) control_button_pane_g2_ParamLimits

0x570c,	// (0x0005f90a) control_button_pane_g2

0x5718,	// (0x0005f916) control_button_pane_g3_ParamLimits

0x5718,	// (0x0005f916) control_button_pane_g3

0x0002,

0xfc20,	// (0x00069e1e) control_button_pane_g_ParamLimits

0xfc20,	// (0x00069e1e) control_button_pane_g

0x572c,	// (0x0005f92a) control_button_pane_t1

0x573a,	// (0x0005f938) control_button_pane_t2

0x0001,

0xfc27,	// (0x00069e25) control_button_pane_t

0x245d,	// (0x0005c65b) bg_button_pane_g1

0x246d,	// (0x0005c66b) bg_button_pane_g2

0x2465,	// (0x0005c663) bg_button_pane_g3

0x247d,	// (0x0005c67b) bg_button_pane_g4

0x2475,	// (0x0005c673) bg_button_pane_g5

0x2485,	// (0x0005c683) bg_button_pane_g6

0x248d,	// (0x0005c68b) bg_button_pane_g7

0x249d,	// (0x0005c69b) bg_button_pane_g8

0x2495,	// (0x0005c693) bg_button_pane_g9

0x0008,

0xf86c,	// (0x00069a6a) bg_button_pane_g

0x4beb,	// (0x0005ede9) common_borders_pane_ParamLimits

0x4beb,	// (0x0005ede9) common_borders_pane

0x56cc,	// (0x0005f8ca) eswt_control_pane_g1_copy1_ParamLimits

0x56cc,	// (0x0005f8ca) eswt_control_pane_g1_copy1

0x56d9,	// (0x0005f8d7) eswt_control_pane_g2_copy1_ParamLimits

0x56d9,	// (0x0005f8d7) eswt_control_pane_g2_copy1

0x56e6,	// (0x0005f8e4) eswt_control_pane_g3_copy1_ParamLimits

0x56e6,	// (0x0005f8e4) eswt_control_pane_g3_copy1

0x56f3,	// (0x0005f8f1) eswt_control_pane_g4_copy1_ParamLimits

0x56f3,	// (0x0005f8f1) eswt_control_pane_g4_copy1

0x4c26,	// (0x0005ee24) bg_eswt_ctrl_canvas_pane_g1

0x4beb,	// (0x0005ede9) common_borders_pane_cp2_ParamLimits

0x4beb,	// (0x0005ede9) common_borders_pane_cp2

0x4beb,	// (0x0005ede9) common_borders_pane_cp3_ParamLimits

0x4beb,	// (0x0005ede9) common_borders_pane_cp3

0x5748,	// (0x0005f946) separator_horizontal_pane

0x5750,	// (0x0005f94e) separator_vertical_pane

0x56cc,	// (0x0005f8ca) eswt_control_pane_g1_copy2_ParamLimits

0x56cc,	// (0x0005f8ca) eswt_control_pane_g1_copy2

0x56d9,	// (0x0005f8d7) eswt_control_pane_g2_copy2_ParamLimits

0x56d9,	// (0x0005f8d7) eswt_control_pane_g2_copy2

0x56e6,	// (0x0005f8e4) eswt_control_pane_g3_copy2_ParamLimits

0x56e6,	// (0x0005f8e4) eswt_control_pane_g3_copy2

0x56f3,	// (0x0005f8f1) eswt_control_pane_g4_copy2_ParamLimits

0x56f3,	// (0x0005f8f1) eswt_control_pane_g4_copy2

0x55b1,	// (0x0005f7af) common_borders_pane_cp4

0x5759,	// (0x0005f957) separator_horizontal_pane_g1

0x5762,	// (0x0005f960) separator_horizontal_pane_g2

0x576b,	// (0x0005f969) separator_horizontal_pane_g3

0x0002,

0xfc2c,	// (0x00069e2a) separator_horizontal_pane_g

0x56cc,	// (0x0005f8ca) eswt_control_pane_g1_copy3_ParamLimits

0x56cc,	// (0x0005f8ca) eswt_control_pane_g1_copy3

0x56d9,	// (0x0005f8d7) eswt_control_pane_g2_copy3_ParamLimits

0x56d9,	// (0x0005f8d7) eswt_control_pane_g2_copy3

0x56e6,	// (0x0005f8e4) eswt_control_pane_g3_copy3_ParamLimits

0x56e6,	// (0x0005f8e4) eswt_control_pane_g3_copy3

0x56f3,	// (0x0005f8f1) eswt_control_pane_g4_copy3_ParamLimits

0x56f3,	// (0x0005f8f1) eswt_control_pane_g4_copy3

0x55b1,	// (0x0005f7af) common_borders_pane_cp5

0x5774,	// (0x0005f972) separator_vertical_pane_g1

0x577d,	// (0x0005f97b) separator_vertical_pane_g2

0x5786,	// (0x0005f984) separator_vertical_pane_g3

0x0002,

0xfc33,	// (0x00069e31) separator_vertical_pane_g

0x56cc,	// (0x0005f8ca) eswt_control_pane_g1_copy4_ParamLimits

0x56cc,	// (0x0005f8ca) eswt_control_pane_g1_copy4

0x56d9,	// (0x0005f8d7) eswt_control_pane_g2_copy4_ParamLimits

0x56d9,	// (0x0005f8d7) eswt_control_pane_g2_copy4

0x56e6,	// (0x0005f8e4) eswt_control_pane_g3_copy4_ParamLimits

0x56e6,	// (0x0005f8e4) eswt_control_pane_g3_copy4

0x56f3,	// (0x0005f8f1) eswt_control_pane_g4_copy4_ParamLimits

0x56f3,	// (0x0005f8f1) eswt_control_pane_g4_copy4

0xcddd,	// (0x00066fdb) eswt_ctrl_combo_button_pane

0xcde5,	// (0x00066fe3) eswt_ctrl_input_pane

0xcded,	// (0x00066feb) popup_choice_list_window_cp70

0xcdf5,	// (0x00066ff3) eswt_ctrl_input_pane_t1

0x55b1,	// (0x0005f7af) input_focus_pane_cp70

0x4beb,	// (0x0005ede9) bg_button_pane_cp70_ParamLimits

0x4beb,	// (0x0005ede9) bg_button_pane_cp70

0xce03,	// (0x00067001) eswt_ctrl_combo_button_pane_g1

0x57bd,	// (0x0005f9bb) wait_bar_pane_cp70

0x24d1,	// (0x0005c6cf) bg_popup_window_pane_cp70_ParamLimits

0x24d1,	// (0x0005c6cf) bg_popup_window_pane_cp70

0x57c5,	// (0x0005f9c3) popup_eswt_tasktip_window_t1

0x57db,	// (0x0005f9d9) wait_bar_pane_cp71_ParamLimits

0x57db,	// (0x0005f9d9) wait_bar_pane_cp71

0x57e7,	// (0x0005f9e5) grid_eswt_app_pane

0x900b,	// (0x00063209) scroll_pane_cp70

0xce0b,	// (0x00067009) cell_eswt_app_pane_ParamLimits

0xce0b,	// (0x00067009) cell_eswt_app_pane

0xce3d,	// (0x0006703b) cell_eswt_app_pane_g1_ParamLimits

0xce3d,	// (0x0006703b) cell_eswt_app_pane_g1

0xce6c,	// (0x0006706a) cell_eswt_app_pane_g2_ParamLimits

0xce6c,	// (0x0006706a) cell_eswt_app_pane_g2

0x0001,

0xfc3a,	// (0x00069e38) cell_eswt_app_pane_g_ParamLimits

0xfc3a,	// (0x00069e38) cell_eswt_app_pane_g

0xce95,	// (0x00067093) cell_eswt_app_pane_t1_ParamLimits

0xce95,	// (0x00067093) cell_eswt_app_pane_t1

0x58ac,	// (0x0005faaa) grid_highlight_pane_cp70_ParamLimits

0x58ac,	// (0x0005faaa) grid_highlight_pane_cp70

0xe5a8,	// (0x000687a6) set_content_pane_g1

0x0253,	// (0x0005a451) status_small_volume_pane

0x0d30,	// (0x0005af2e) status_small_volume_pane_g1

0x0d38,	// (0x0005af36) volume_small2_pane

0x0d41,	// (0x0005af3f) volume_small2_pane_g1

0x0d4a,	// (0x0005af48) volume_small2_pane_g2

0x0d53,	// (0x0005af51) volume_small2_pane_g3

0x0d5c,	// (0x0005af5a) volume_small2_pane_g4

0x0d65,	// (0x0005af63) volume_small2_pane_g5

0x0d6e,	// (0x0005af6c) volume_small2_pane_g6

0x0d77,	// (0x0005af75) volume_small2_pane_g7

0x0d80,	// (0x0005af7e) volume_small2_pane_g8

0x0d89,	// (0x0005af87) volume_small2_pane_g9

0x0d92,	// (0x0005af90) volume_small2_pane_g10

0x0009,

0xfc3f,	// (0x00069e3d) volume_small2_pane_g

0x4ff5,	// (0x0005f1f3) fep_vkb_top_text_pane_g1_ParamLimits

0xcd49,	// (0x00066f47) fep_vkb_top_text_pane_t1_ParamLimits

0x52a8,	// (0x0005f4a6) popup_preview_fixed_window_g3_ParamLimits

0x52a8,	// (0x0005f4a6) popup_preview_fixed_window_g3

0xb47f,	// (0x0006567d) popup_toolbar_trans_pane

0xc708,	// (0x00066906) aid_height_set_list_ParamLimits

0x39c7,	// (0x0005dbc5) aid_size_parent_ParamLimits

0x191c,	// (0x0005bb1a) list_highlight_pane_cp2_ParamLimits

0xe5a8,	// (0x000687a6) set_content_pane_g1_ParamLimits

0xb99f,	// (0x00065b9d) list_single_image_pane_ParamLimits

0xb99f,	// (0x00065b9d) list_single_image_pane

0xcec7,	// (0x000670c5) aid_size_cell_image_ParamLimits

0xcec7,	// (0x000670c5) aid_size_cell_image

0xced4,	// (0x000670d2) grid_single_image_pane_ParamLimits

0xced4,	// (0x000670d2) grid_single_image_pane

0x8ca8,	// (0x00062ea6) list_single_image_pane_g1_ParamLimits

0x8ca8,	// (0x00062ea6) list_single_image_pane_g1

0x8cb4,	// (0x00062eb2) list_single_image_pane_g2_ParamLimits

0x8cb4,	// (0x00062eb2) list_single_image_pane_g2

0x0001,

0xfc54,	// (0x00069e52) list_single_image_pane_g_ParamLimits

0xfc54,	// (0x00069e52) list_single_image_pane_g

0x58d3,	// (0x0005fad1) list_single_image_pane_t1_ParamLimits

0x58d3,	// (0x0005fad1) list_single_image_pane_t1

0xcee2,	// (0x000670e0) cell_image_list_pane_ParamLimits

0xcee2,	// (0x000670e0) cell_image_list_pane

0xcef6,	// (0x000670f4) cell_image_list_pane_g1

0xceff,	// (0x000670fd) cell_image_list_pane_g2

0x0001,

0xfc59,	// (0x00069e57) cell_image_list_pane_g

0x5911,	// (0x0005fb0f) aid_size_cell_tb_trans_pane

0x8c9a,	// (0x00062e98) bg_tb_trans_pane

0x5923,	// (0x0005fb21) grid_tb_trans_pane

0x245d,	// (0x0005c65b) bg_tb_trans_pane_g1

0x246d,	// (0x0005c66b) bg_tb_trans_pane_g2

0x2465,	// (0x0005c663) bg_tb_trans_pane_g3

0x247d,	// (0x0005c67b) bg_tb_trans_pane_g4

0x2475,	// (0x0005c673) bg_tb_trans_pane_g5

0x249d,	// (0x0005c69b) bg_tb_trans_pane_g6

0x2495,	// (0x0005c693) bg_tb_trans_pane_g7

0x2485,	// (0x0005c683) bg_tb_trans_pane_g8

0x248d,	// (0x0005c68b) bg_tb_trans_pane_g9

0x0008,

0xfc5e,	// (0x00069e5c) bg_tb_trans_pane_g

0x5937,	// (0x0005fb35) cell_toolbar_trans_pane_ParamLimits

0x5937,	// (0x0005fb35) cell_toolbar_trans_pane

0x4c26,	// (0x0005ee24) cell_toolbar_trans_pane_g1

0xcb21,	// (0x00066d1f) list_form2_midp_pane_t1

0xcb2f,	// (0x00066d2d) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x00069cf9) list_form2_midp_pane_t

0x4866,	// (0x0005ea64) scroll_pane_cp51_ParamLimits

0x4a2d,	// (0x0005ec2b) form2_midp_wait_pane_g1

0x4a36,	// (0x0005ec34) form2_midp_wait_pane_g2

0x4a3f,	// (0x0005ec3d) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x00069d0e) form2_midp_wait_pane_g

0x561f,	// (0x0005f81d) list_highlight_pane_cp21_ParamLimits

0x4a83,	// (0x0005ec81) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4a92,	// (0x0005ec90) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3b9f,	// (0x0005dd9d) list_single_2graphic_im_pane_ParamLimits

0x3b9f,	// (0x0005dd9d) list_single_2graphic_im_pane

0xcf08,	// (0x00067106) list_single_2graphic_im_pane_g1_ParamLimits

0xcf08,	// (0x00067106) list_single_2graphic_im_pane_g1

0xcf19,	// (0x00067117) list_single_2graphic_im_pane_g2_ParamLimits

0xcf19,	// (0x00067117) list_single_2graphic_im_pane_g2

0xcf25,	// (0x00067123) list_single_2graphic_im_pane_g3_ParamLimits

0xcf25,	// (0x00067123) list_single_2graphic_im_pane_g3

0x0003,

0xfc71,	// (0x00069e6f) list_single_2graphic_im_pane_g_ParamLimits

0xfc71,	// (0x00069e6f) list_single_2graphic_im_pane_g

0xcf39,	// (0x00067137) list_single_2graphic_im_pane_t1_ParamLimits

0xcf39,	// (0x00067137) list_single_2graphic_im_pane_t1

0x52b4,	// (0x0005f4b2) list_single_graphic_2heading_pane_fp_ParamLimits

0x52b4,	// (0x0005f4b2) list_single_graphic_2heading_pane_fp

0xead2,	// (0x00068cd0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xead2,	// (0x00068cd0) list_single_graphic_2heading_pane_fp_g1

0x52cd,	// (0x0005f4cb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x52cd,	// (0x0005f4cb) list_single_graphic_2heading_pane_fp_g2

0x5226,	// (0x0005f424) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5226,	// (0x0005f424) list_single_graphic_2heading_pane_fp_g3

0x5232,	// (0x0005f430) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5232,	// (0x0005f430) list_single_graphic_2heading_pane_fp_g4

0x52d9,	// (0x0005f4d7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x52d9,	// (0x0005f4d7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00069d96) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00069d96) list_single_graphic_2heading_pane_fp_g

0xebf9,	// (0x00068df7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xebf9,	// (0x00068df7) list_single_graphic_2heading_pane_fp_t1

0xeb0a,	// (0x00068d08) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeb0a,	// (0x00068d08) list_single_graphic_2heading_pane_fp_t2

0xec0f,	// (0x00068e0d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xec0f,	// (0x00068e0d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7a,	// (0x00069e78) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7a,	// (0x00069e78) list_single_graphic_2heading_pane_fp_t

0x4cb7,	// (0x0005eeb5) fep_hwr_write_pane_g5_ParamLimits

0x4cb7,	// (0x0005eeb5) fep_hwr_write_pane_g5

0x4cc3,	// (0x0005eec1) fep_hwr_write_pane_g6_ParamLimits

0x4cc3,	// (0x0005eec1) fep_hwr_write_pane_g6

0x5589,	// (0x0005f787) eswt_shell_pane_ParamLimits

0x24d1,	// (0x0005c6cf) bg_popup_window_pane_cp18_ParamLimits

0x390d,	// (0x0005db0b) heading_pane_cp70

0x57c5,	// (0x0005f9c3) popup_eswt_tasktip_window_t1_ParamLimits

0xb549,	// (0x00065747) aid_touch_tab_arrow_left

0xb55f,	// (0x0006575d) aid_touch_tab_arrow_right

0x55cf,	// (0x0005f7cd) title_pane_g3_ParamLimits

0x55cf,	// (0x0005f7cd) title_pane_g3

0x8c59,	// (0x00062e57) set_value_pane_g1

0xb47f,	// (0x0006567d) popup_toolbar_trans_pane_ParamLimits

0x5911,	// (0x0005fb0f) aid_size_cell_tb_trans_pane_ParamLimits

0x8c9a,	// (0x00062e98) bg_tb_trans_pane_ParamLimits

0x5923,	// (0x0005fb21) grid_tb_trans_pane_ParamLimits

0x87b8,	// (0x000629b6) cont_note_pane_ParamLimits

0x87b8,	// (0x000629b6) cont_note_pane

0x8a15,	// (0x00062c13) cont_snote2_single_text_pane_ParamLimits

0x8a15,	// (0x00062c13) cont_snote2_single_text_pane

0x8a15,	// (0x00062c13) cont_snote2_single_graphic_pane_ParamLimits

0x8a15,	// (0x00062c13) cont_snote2_single_graphic_pane

0x2aad,	// (0x0005ccab) cont_note_wait_pane_ParamLimits

0x2aad,	// (0x0005ccab) cont_note_wait_pane

0x2aad,	// (0x0005ccab) cont_note_image_pane_ParamLimits

0x2aad,	// (0x0005ccab) cont_note_image_pane

0x59cb,	// (0x0005fbc9) popup_note2_window_g1_ParamLimits

0x59cb,	// (0x0005fbc9) popup_note2_window_g1

0x59fc,	// (0x0005fbfa) popup_note2_window_t1_ParamLimits

0x59fc,	// (0x0005fbfa) popup_note2_window_t1

0x5a41,	// (0x0005fc3f) popup_note2_window_t2_ParamLimits

0x5a41,	// (0x0005fc3f) popup_note2_window_t2

0x5a86,	// (0x0005fc84) popup_note2_window_t3_ParamLimits

0x5a86,	// (0x0005fc84) popup_note2_window_t3

0x5acb,	// (0x0005fcc9) popup_note2_window_t4_ParamLimits

0x5acb,	// (0x0005fcc9) popup_note2_window_t4

0x883c,	// (0x00062a3a) popup_note2_window_t5_ParamLimits

0x883c,	// (0x00062a3a) popup_note2_window_t5

0x0004,

0xfc86,	// (0x00069e84) popup_note2_window_t_ParamLimits

0xfc86,	// (0x00069e84) popup_note2_window_t

0x5afa,	// (0x0005fcf8) popup_note2_image_window_g1_ParamLimits

0x5afa,	// (0x0005fcf8) popup_note2_image_window_g1

0x5b06,	// (0x0005fd04) popup_note2_image_window_g2_ParamLimits

0x5b06,	// (0x0005fd04) popup_note2_image_window_g2

0x0001,

0xfc91,	// (0x00069e8f) popup_note2_image_window_g_ParamLimits

0xfc91,	// (0x00069e8f) popup_note2_image_window_g

0x5b18,	// (0x0005fd16) popup_note2_image_window_t1_ParamLimits

0x5b18,	// (0x0005fd16) popup_note2_image_window_t1

0x5b30,	// (0x0005fd2e) popup_note2_image_window_t2_ParamLimits

0x5b30,	// (0x0005fd2e) popup_note2_image_window_t2

0x5b48,	// (0x0005fd46) popup_note2_image_window_t3_ParamLimits

0x5b48,	// (0x0005fd46) popup_note2_image_window_t3

0x0002,

0xfc96,	// (0x00069e94) popup_note2_image_window_t_ParamLimits

0xfc96,	// (0x00069e94) popup_note2_image_window_t

0x2abb,	// (0x0005ccb9) popup_note2_wait_window_g1_ParamLimits

0x2abb,	// (0x0005ccb9) popup_note2_wait_window_g1

0x5b64,	// (0x0005fd62) popup_note2_wait_window_g2_ParamLimits

0x5b64,	// (0x0005fd62) popup_note2_wait_window_g2

0x2ad3,	// (0x0005ccd1) popup_note2_wait_window_g3_ParamLimits

0x2ad3,	// (0x0005ccd1) popup_note2_wait_window_g3

0x0002,

0xfc9d,	// (0x00069e9b) popup_note2_wait_window_g_ParamLimits

0xfc9d,	// (0x00069e9b) popup_note2_wait_window_g

0x5b70,	// (0x0005fd6e) popup_note2_wait_window_t1_ParamLimits

0x5b70,	// (0x0005fd6e) popup_note2_wait_window_t1

0x5b8e,	// (0x0005fd8c) popup_note2_wait_window_t2_ParamLimits

0x5b8e,	// (0x0005fd8c) popup_note2_wait_window_t2

0x5bac,	// (0x0005fdaa) popup_note2_wait_window_t3_ParamLimits

0x5bac,	// (0x0005fdaa) popup_note2_wait_window_t3

0x5bbe,	// (0x0005fdbc) popup_note2_wait_window_t4_ParamLimits

0x5bbe,	// (0x0005fdbc) popup_note2_wait_window_t4

0x0003,

0xfca4,	// (0x00069ea2) popup_note2_wait_window_t_ParamLimits

0xfca4,	// (0x00069ea2) popup_note2_wait_window_t

0x5bd0,	// (0x0005fdce) wait_bar2_pane_ParamLimits

0x5bd0,	// (0x0005fdce) wait_bar2_pane

0x5be8,	// (0x0005fde6) popup_snote2_single_text_window_g1_ParamLimits

0x5be8,	// (0x0005fde6) popup_snote2_single_text_window_g1

0x5c10,	// (0x0005fe0e) popup_snote2_single_text_window_t1_ParamLimits

0x5c10,	// (0x0005fe0e) popup_snote2_single_text_window_t1

0x5c5c,	// (0x0005fe5a) popup_snote2_single_text_window_t2_ParamLimits

0x5c5c,	// (0x0005fe5a) popup_snote2_single_text_window_t2

0x5ca8,	// (0x0005fea6) popup_snote2_single_text_window_t3_ParamLimits

0x5ca8,	// (0x0005fea6) popup_snote2_single_text_window_t3

0x5ce9,	// (0x0005fee7) popup_snote2_single_text_window_t4_ParamLimits

0x5ce9,	// (0x0005fee7) popup_snote2_single_text_window_t4

0x5d1f,	// (0x0005ff1d) popup_snote2_single_text_window_t5_ParamLimits

0x5d1f,	// (0x0005ff1d) popup_snote2_single_text_window_t5

0x0004,

0xfcad,	// (0x00069eab) popup_snote2_single_text_window_t_ParamLimits

0xfcad,	// (0x00069eab) popup_snote2_single_text_window_t

0x5d4a,	// (0x0005ff48) popup_snote2_single_graphic_window_g1_ParamLimits

0x5d4a,	// (0x0005ff48) popup_snote2_single_graphic_window_g1

0x5d72,	// (0x0005ff70) popup_snote2_single_graphic_window_g2_ParamLimits

0x5d72,	// (0x0005ff70) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb8,	// (0x00069eb6) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb8,	// (0x00069eb6) popup_snote2_single_graphic_window_g

0x5d9a,	// (0x0005ff98) popup_snote2_single_graphic_window_t1_ParamLimits

0x5d9a,	// (0x0005ff98) popup_snote2_single_graphic_window_t1

0x5de6,	// (0x0005ffe4) popup_snote2_single_graphic_window_t2_ParamLimits

0x5de6,	// (0x0005ffe4) popup_snote2_single_graphic_window_t2

0x5ca8,	// (0x0005fea6) popup_snote2_single_graphic_window_t3_ParamLimits

0x5ca8,	// (0x0005fea6) popup_snote2_single_graphic_window_t3

0x5ce9,	// (0x0005fee7) popup_snote2_single_graphic_window_t4_ParamLimits

0x5ce9,	// (0x0005fee7) popup_snote2_single_graphic_window_t4

0x5d1f,	// (0x0005ff1d) popup_snote2_single_graphic_window_t5_ParamLimits

0x5d1f,	// (0x0005ff1d) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbd,	// (0x00069ebb) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbd,	// (0x00069ebb) popup_snote2_single_graphic_window_t

0x4716,	// (0x0005e914) clock_nsta_pane_cp2_t1

0x4716,	// (0x0005e914) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x00069ccf) clock_nsta_pane_cp2_t

0xe378,	// (0x00068576) form_field_data_wide_pane_g1_ParamLimits

0x8ca8,	// (0x00062ea6) form_field_data_wide_pane_g2_ParamLimits

0x8ca8,	// (0x00062ea6) form_field_data_wide_pane_g2

0x8cb4,	// (0x00062eb2) form_field_data_wide_pane_g3_ParamLimits

0x8cb4,	// (0x00062eb2) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x00069884) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x00069884) form_field_data_wide_pane_g

0xca1b,	// (0x00066c19) grid_touch_3_pane_ParamLimits

0xca1b,	// (0x00066c19) grid_touch_3_pane

0xcf6a,	// (0x00067168) cell_touch_3_pane_ParamLimits

0xcf6a,	// (0x00067168) cell_touch_3_pane

0x4c26,	// (0x0005ee24) cell_touch_3_pane_g1

0x4c26,	// (0x0005ee24) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x00069d54) cell_touch_3_pane_g

0x886e,	// (0x00062a6c) cont_query_data_pane

0x8876,	// (0x00062a74) cont_query_data_pane_cp1

0x5e65,	// (0x00060063) button_value_adjust_pane_cp7

0x5e6d,	// (0x0006006b) query_popup_pane_cp3

0xc0cf,	// (0x000662cd) bg_popup_sub_pane_cp22_ParamLimits

0xf3b1,	// (0x000695af) navi_navi_volume_pane_cp2

0xf3cc,	// (0x000695ca) popup_side_volume_key_window_g2

0xf3db,	// (0x000695d9) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0006991a) popup_side_volume_key_window_g

0xf3f8,	// (0x000695f6) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00069921) popup_side_volume_key_window_t

0xe4ab,	// (0x000686a9) popup_side_volume_key_window_ParamLimits

0xa2b3,	// (0x000644b1) list_double_graphic_pane_g4_ParamLimits

0xa2b3,	// (0x000644b1) list_double_graphic_pane_g4

0xc8b8,	// (0x00066ab6) list_single_2heading_msg_pane_ParamLimits

0xc8b8,	// (0x00066ab6) list_single_2heading_msg_pane

0xcfb4,	// (0x000671b2) list_single_2heading_msg_pane_g1_ParamLimits

0xcfb4,	// (0x000671b2) list_single_2heading_msg_pane_g1

0xcfc0,	// (0x000671be) list_single_2heading_msg_pane_g2_ParamLimits

0xcfc0,	// (0x000671be) list_single_2heading_msg_pane_g2

0xcfd3,	// (0x000671d1) list_single_2heading_msg_pane_g3_ParamLimits

0xcfd3,	// (0x000671d1) list_single_2heading_msg_pane_g3

0xcfdf,	// (0x000671dd) list_single_2heading_msg_pane_g4_ParamLimits

0xcfdf,	// (0x000671dd) list_single_2heading_msg_pane_g4

0x0003,

0xfcc8,	// (0x00069ec6) list_single_2heading_msg_pane_g_ParamLimits

0xfcc8,	// (0x00069ec6) list_single_2heading_msg_pane_g

0xba1f,	// (0x00065c1d) list_single_2heading_msg_pane_t1_ParamLimits

0xba1f,	// (0x00065c1d) list_single_2heading_msg_pane_t1

0xba47,	// (0x00065c45) list_single_2heading_msg_pane_t2_ParamLimits

0xba47,	// (0x00065c45) list_single_2heading_msg_pane_t2

0xbab2,	// (0x00065cb0) list_single_2heading_msg_pane_t3_ParamLimits

0xbab2,	// (0x00065cb0) list_single_2heading_msg_pane_t3

0xec2f,	// (0x00068e2d) list_single_2heading_msg_pane_t4_ParamLimits

0xec2f,	// (0x00068e2d) list_single_2heading_msg_pane_t4

0x0003,

0xfcd1,	// (0x00069ecf) list_single_2heading_msg_pane_t_ParamLimits

0xfcd1,	// (0x00069ecf) list_single_2heading_msg_pane_t

0x55db,	// (0x0005f7d9) title_pane_g4_ParamLimits

0x55db,	// (0x0005f7d9) title_pane_g4

0xf1c6,	// (0x000693c4) title_pane_stacon_g3_ParamLimits

0xf1c6,	// (0x000693c4) title_pane_stacon_g3

0x598e,	// (0x0005fb8c) list_single_2graphic_im_pane_g4_ParamLimits

0x598e,	// (0x0005fb8c) list_single_2graphic_im_pane_g4

0x351d,	// (0x0005d71b) popup_side_volume_key_window_cp

0x3f0a,	// (0x0005e108) main_idle_act2_pane_t1

0x042b,	// (0x0005a629) toolbar_button_pane_g10

0xa117,	// (0x00064315) popup_toolbar_window_cp1

0x4707,	// (0x0005e905) clock_nsta_pane_cp_t1

0x4707,	// (0x0005e905) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x00069cca) clock_nsta_pane_cp_t

0xf3b1,	// (0x000695af) navi_navi_volume_pane_cp2_ParamLimits

0xf3c0,	// (0x000695be) popup_side_volume_key_window_g1_ParamLimits

0xf3cc,	// (0x000695ca) popup_side_volume_key_window_g2_ParamLimits

0xf3db,	// (0x000695d9) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0006991a) popup_side_volume_key_window_g_ParamLimits

0x095f,	// (0x0005ab5d) fep_hwr_aid_pane

0x0a08,	// (0x0005ac06) bg_fep_hwr_top_pane_g4_ParamLimits

0x4c87,	// (0x0005ee85) fep_hwr_top_pane_g1_ParamLimits

0x4c99,	// (0x0005ee97) fep_hwr_top_pane_g2_ParamLimits

0x0a28,	// (0x0005ac26) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x00069d1f) fep_hwr_top_pane_g_ParamLimits

0x0a3d,	// (0x0005ac3b) fep_hwr_top_text_pane_ParamLimits

0x32d2,	// (0x0005d4d0) aid_touch_tab_arrow_arrow_2

0x32db,	// (0x0005d4d9) aid_touch_tab_arrow_left_2

0x0973,	// (0x0005ab71) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x09aa,	// (0x0005aba8) fep_hwr_prediction_pane

0x4def,	// (0x0005efed) fep_vkb_prediction_pane

0xcd29,	// (0x00066f27) fep_vkb_side_pane_g3_ParamLimits

0xcd29,	// (0x00066f27) fep_vkb_side_pane_g3

0x0bcc,	// (0x0005adca) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0c3d,	// (0x0005ae3b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0c4a,	// (0x0005ae48) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x00069dce) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0e2b,	// (0x0005b029) fep_hwr_prediction_pane_g1

0x0e35,	// (0x0005b033) fep_hwr_prediction_pane_g2

0x0e3d,	// (0x0005b03b) fep_hwr_prediction_pane_g3

0x0e45,	// (0x0005b043) fep_hwr_prediction_pane_g4

0x0003,

0xfcda,	// (0x00069ed8) fep_hwr_prediction_pane_g

0x5e94,	// (0x00060092) fep_vkb_prediction_pane_g1

0x5e9e,	// (0x0006009c) fep_vkb_prediction_pane_g2

0x5ea6,	// (0x000600a4) fep_vkb_prediction_pane_g3

0x5eae,	// (0x000600ac) fep_vkb_prediction_pane_g4

0x0003,

0xfce3,	// (0x00069ee1) fep_vkb_prediction_pane_g

0x0793,	// (0x0005a991) slider_set_pane_g3

0x07a7,	// (0x0005a9a5) slider_set_pane_g4

0x07bf,	// (0x0005a9bd) slider_set_pane_g5

0x0793,	// (0x0005a991) slider_set_pane_g6

0x07d5,	// (0x0005a9d3) slider_set_pane_g7

0x3b4c,	// (0x0005dd4a) slider_form_pane_g3

0x3b55,	// (0x0005dd53) slider_form_pane_g4

0x3b5d,	// (0x0005dd5b) slider_form_pane_g5

0x3b4c,	// (0x0005dd4a) slider_form_pane_g6

0xc877,	// (0x00066a75) slider_form_pane_g7

0x41c1,	// (0x0005e3bf) slider_set_pane_vc_g3

0x41ca,	// (0x0005e3c8) slider_set_pane_vc_g4

0x41d3,	// (0x0005e3d1) slider_set_pane_vc_g5

0x41c1,	// (0x0005e3bf) slider_set_pane_vc_g6

0x41dc,	// (0x0005e3da) slider_set_pane_vc_g7

0x43b4,	// (0x0005e5b2) slider_form_pane_vc_g1

0x43bd,	// (0x0005e5bb) slider_form_pane_vc_g2

0x43c6,	// (0x0005e5c4) slider_form_pane_vc_g3

0x43b4,	// (0x0005e5b2) slider_form_pane_vc_g4

0x43cf,	// (0x0005e5cd) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x00069c9c) slider_form_pane_vc_g

0x55b1,	// (0x0005f7af) main_idle_act3_pane

0x5eb6,	// (0x000600b4) ai3_links_pane

0xcff7,	// (0x000671f5) popup_ai3_data_window_ParamLimits

0xcff7,	// (0x000671f5) popup_ai3_data_window

0x55b1,	// (0x0005f7af) grid_ai3_links_pane

0xd015,	// (0x00067213) cell_ai3_links_pane_ParamLimits

0xd015,	// (0x00067213) cell_ai3_links_pane

0x5ef7,	// (0x000600f5) bg_popup_sub_pane_cp11

0x5f04,	// (0x00060102) cell_ai3_links_pane_g1

0x55b1,	// (0x0005f7af) bg_popup_sub_pane_cp12

0x5f29,	// (0x00060127) heading_ai3_data_pane

0x5f31,	// (0x0006012f) list_ai3_gene_pane

0x5f3d,	// (0x0006013b) popup_ai3_data_window_g1

0x5f45,	// (0x00060143) heading_ai3_data_pane_g1

0x5f4d,	// (0x0006014b) heading_ai3_data_pane_t1

0x5f5b,	// (0x00060159) list_double_ai3_gene_pane_ParamLimits

0x5f5b,	// (0x00060159) list_double_ai3_gene_pane

0x5f68,	// (0x00060166) list_single_ai3_gene_pane_ParamLimits

0x5f68,	// (0x00060166) list_single_ai3_gene_pane

0x4beb,	// (0x0005ede9) list_highlight_pane_cp7_ParamLimits

0x4beb,	// (0x0005ede9) list_highlight_pane_cp7

0x5f75,	// (0x00060173) list_single_a13_gene_pane_t1_ParamLimits

0x5f75,	// (0x00060173) list_single_a13_gene_pane_t1

0x5f8c,	// (0x0006018a) list_single_ai3_gene_pane_g1

0x5f95,	// (0x00060193) list_single_ai3_gene_pane_g2

0x0001,

0xfcec,	// (0x00069eea) list_single_ai3_gene_pane_g

0x5f9d,	// (0x0006019b) list_double_ai3_gene_pane_g1_ParamLimits

0x5f9d,	// (0x0006019b) list_double_ai3_gene_pane_g1

0x5fa9,	// (0x000601a7) list_double_ai3_gene_pane_t1_ParamLimits

0x5fa9,	// (0x000601a7) list_double_ai3_gene_pane_t1

0x5fc5,	// (0x000601c3) list_double_ai3_gene_pane_t2_ParamLimits

0x5fc5,	// (0x000601c3) list_double_ai3_gene_pane_t2

0x5fda,	// (0x000601d8) list_double_ai3_gene_pane_t3_ParamLimits

0x5fda,	// (0x000601d8) list_double_ai3_gene_pane_t3

0x0002,

0xfcf1,	// (0x00069eef) list_double_ai3_gene_pane_t_ParamLimits

0xfcf1,	// (0x00069eef) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xec25,	// (0x00068e23) aid_size_min_col_2

0xcf9e,	// (0x0006719c) aid_size_min_msg_ParamLimits

0xcf9e,	// (0x0006719c) aid_size_min_msg

0xcd3d,	// (0x00066f3b) fep_vkb_top_text_pane_g2_ParamLimits

0xcd3d,	// (0x00066f3b) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x00069d4f) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x00069d4f) fep_vkb_top_text_pane_g

0x55b1,	// (0x0005f7af) main_hc_apps_shell_pane

0x5ff7,	// (0x000601f5) grid_hc_apps_pane_ParamLimits

0x5ff7,	// (0x000601f5) grid_hc_apps_pane

0x6006,	// (0x00060204) list_hc_apps_pane

0x600e,	// (0x0006020c) scroll_pane_cp37_ParamLimits

0x600e,	// (0x0006020c) scroll_pane_cp37

0xd02f,	// (0x0006722d) cell_hc_apps_pane_ParamLimits

0xd02f,	// (0x0006722d) cell_hc_apps_pane

0xd0f9,	// (0x000672f7) cell_hc_apps_pane_g1_ParamLimits

0xd0f9,	// (0x000672f7) cell_hc_apps_pane_g1

0x6103,	// (0x00060301) cell_hc_apps_pane_g2_ParamLimits

0x6103,	// (0x00060301) cell_hc_apps_pane_g2

0x611f,	// (0x0006031d) cell_hc_apps_pane_g3_ParamLimits

0x611f,	// (0x0006031d) cell_hc_apps_pane_g3

0x0002,

0xfcf8,	// (0x00069ef6) cell_hc_apps_pane_g_ParamLimits

0xfcf8,	// (0x00069ef6) cell_hc_apps_pane_g

0xd126,	// (0x00067324) cell_hc_apps_pane_t1_ParamLimits

0xd126,	// (0x00067324) cell_hc_apps_pane_t1

0x87b8,	// (0x000629b6) grid_highlight_pane_cp10_ParamLimits

0x87b8,	// (0x000629b6) grid_highlight_pane_cp10

0xd166,	// (0x00067364) list_single_hc_apps_pane_ParamLimits

0xd166,	// (0x00067364) list_single_hc_apps_pane

0xd1a0,	// (0x0006739e) list_single_hc_apps_pane_g1

0xd1b9,	// (0x000673b7) list_single_hc_apps_pane_g2

0x0001,

0xfcff,	// (0x00069efd) list_single_hc_apps_pane_g

0xd1d2,	// (0x000673d0) list_single_hc_apps_pane_g2_copy1

0xbb20,	// (0x00065d1e) list_single_hc_apps_pane_t1

0x561f,	// (0x0005f81d) bg_set_opt_pane_cp_ParamLimits

0xf0ed,	// (0x000692eb) setting_slider_pane_t1_ParamLimits

0xf106,	// (0x00069304) setting_slider_pane_t2_ParamLimits

0xf120,	// (0x0006931e) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00069762) setting_slider_pane_t_ParamLimits

0xf138,	// (0x00069336) slider_set_pane_ParamLimits

0x02e0,	// (0x0005a4de) control_pane_g5_ParamLimits

0x02e0,	// (0x0005a4de) control_pane_g5

0x3979,	// (0x0005db77) slider_set_pane_g1_ParamLimits

0x0787,	// (0x0005a985) slider_set_pane_g2_ParamLimits

0x0793,	// (0x0005a991) slider_set_pane_g3_ParamLimits

0x07a7,	// (0x0005a9a5) slider_set_pane_g4_ParamLimits

0x07bf,	// (0x0005a9bd) slider_set_pane_g5_ParamLimits

0x0793,	// (0x0005a991) slider_set_pane_g6_ParamLimits

0x07d5,	// (0x0005a9d3) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x00069b68) slider_set_pane_g_ParamLimits

0xe553,	// (0x00068751) navi_icon_text_pane_ParamLimits

0xb510,	// (0x0006570e) aid_fill_nsta_2_ParamLimits

0xb549,	// (0x00065747) aid_touch_tab_arrow_left_ParamLimits

0xb55f,	// (0x0006575d) aid_touch_tab_arrow_right_ParamLimits

0xb5fa,	// (0x000657f8) clock_nsta_pane_ParamLimits

0xc5b4,	// (0x000667b2) navi_icon_pane_g1_ParamLimits

0xc5c0,	// (0x000667be) navi_text_pane_t1_ParamLimits

0xcb03,	// (0x00066d01) navi_icon_text_pane_g1_ParamLimits

0xcb0f,	// (0x00066d0d) navi_icon_text_pane_t1_ParamLimits

0xd1a0,	// (0x0006739e) list_single_hc_apps_pane_g1_ParamLimits

0xd1b9,	// (0x000673b7) list_single_hc_apps_pane_g2_ParamLimits

0xfcff,	// (0x00069efd) list_single_hc_apps_pane_g_ParamLimits

0xd1d2,	// (0x000673d0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbb20,	// (0x00065d1e) list_single_hc_apps_pane_t1_ParamLimits

0x9c9d,	// (0x00063e9b) popup_toolbar2_fixed_window_ParamLimits

0x9c9d,	// (0x00063e9b) popup_toolbar2_fixed_window

0xb475,	// (0x00065673) popup_toolbar2_float_window

0x55b1,	// (0x0005f7af) bg_popup_sub_pane_cp27

0x61d9,	// (0x000603d7) grid_toolbar2_float_pane

0x55b1,	// (0x0005f7af) bg_popup_sub_pane_cp26

0x61d9,	// (0x000603d7) grid_toolbar2_fixed_pane

0xd1ee,	// (0x000673ec) cell_toolbar2_fixed_pane_ParamLimits

0xd1ee,	// (0x000673ec) cell_toolbar2_fixed_pane

0xd20b,	// (0x00067409) cell_toolbar2_fixed_pane_g1

0x61fa,	// (0x000603f8) toolbar2_fixed_button_pane

0x245d,	// (0x0005c65b) toolbar2_fixed_button_pane_g1

0x246d,	// (0x0005c66b) toolbar2_fixed_button_pane_g2

0x2465,	// (0x0005c663) toolbar2_fixed_button_pane_g3

0x247d,	// (0x0005c67b) toolbar2_fixed_button_pane_g4

0x2475,	// (0x0005c673) toolbar2_fixed_button_pane_g5

0x2485,	// (0x0005c683) toolbar2_fixed_button_pane_g6

0x248d,	// (0x0005c68b) toolbar2_fixed_button_pane_g7

0x249d,	// (0x0005c69b) toolbar2_fixed_button_pane_g8

0x2495,	// (0x0005c693) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x00069a6a) toolbar2_fixed_button_pane_g

0x6202,	// (0x00060400) cell_toolbar2_float_pane_ParamLimits

0x6202,	// (0x00060400) cell_toolbar2_float_pane

0x6213,	// (0x00060411) cell_toolbar2_float_pane_g1

0x61fa,	// (0x000603f8) toolbar2_fixed_button_pane_cp

0xcc25,	// (0x00066e23) fep_vkb_accented_list_pane_ParamLimits

0xcc25,	// (0x00066e23) fep_vkb_accented_list_pane

0x0bac,	// (0x0005adaa) bg_popup_fep_shadow_pane_g9

0xe6a3,	// (0x000688a1) bg_popup_fep_shadow_pane_cp3

0x8dad,	// (0x00062fab) list_accented_list_pane

0x621c,	// (0x0006041a) list_single_accented_list_pane_ParamLimits

0x621c,	// (0x0006041a) list_single_accented_list_pane

0xe6a3,	// (0x000688a1) list_highlight_pane_cp10

0x622d,	// (0x0006042b) list_single_accented_list_pane_t1

0xb391,	// (0x0006558f) popup_slider_window_ParamLimits

0xb391,	// (0x0006558f) popup_slider_window

0x5e75,	// (0x00060073) aid_indentation_list_msg

0xd316,	// (0x00067514) bg_popup_window_pane_cp19

0x6367,	// (0x00060565) popup_slider_window_g1

0x6383,	// (0x00060581) popup_slider_window_g2

0x639f,	// (0x0006059d) popup_slider_window_g3

0x0005,

0xfd04,	// (0x00069f02) popup_slider_window_g

0x63fb,	// (0x000605f9) popup_slider_window_t1

0x646f,	// (0x0006066d) small_volume_slider_vertical_pane

0x4c26,	// (0x0005ee24) small_volume_slider_vertical_pane_g1

0x4c26,	// (0x0005ee24) small_volume_slider_vertical_pane_g2

0x648b,	// (0x00060689) small_volume_slider_vertical_pane_g3

0x0002,

0xfd16,	// (0x00069f14) small_volume_slider_vertical_pane_g

0x9c07,	// (0x00063e05) area_side_right_pane_ParamLimits

0x9c07,	// (0x00063e05) area_side_right_pane

0xbb4e,	// (0x00065d4c) aid_size_side_button_ParamLimits

0xbb4e,	// (0x00065d4c) aid_size_side_button

0xbb67,	// (0x00065d65) grid_sctrl_middle_pane_ParamLimits

0xbb67,	// (0x00065d65) grid_sctrl_middle_pane

0x0eaf,	// (0x0005b0ad) sctrl_sk_bottom_pane

0x0ec0,	// (0x0005b0be) sctrl_sk_top_pane

0x0ed2,	// (0x0005b0d0) aid_touch_sctrl_top

0x0edf,	// (0x0005b0dd) bg_sctrl_sk_pane_ParamLimits

0x0edf,	// (0x0005b0dd) bg_sctrl_sk_pane

0x0eed,	// (0x0005b0eb) sctrl_sk_top_pane_g1

0x0efa,	// (0x0005b0f8) sctrl_sk_top_pane_t1

0x0ed2,	// (0x0005b0d0) aid_touch_sctrl_bottom

0x0edf,	// (0x0005b0dd) bg_sctrl_sk_pane_cp_ParamLimits

0x0edf,	// (0x0005b0dd) bg_sctrl_sk_pane_cp

0x0f15,	// (0x0005b113) sctrl_sk_bottom_pane_g1

0x0efa,	// (0x0005b0f8) sctrl_sk_bottom_pane_t1

0xbb81,	// (0x00065d7f) cell_sctrl_middle_pane_ParamLimits

0xbb81,	// (0x00065d7f) cell_sctrl_middle_pane

0xbb94,	// (0x00065d92) aid_touch_sctrl_middle_ParamLimits

0xbb94,	// (0x00065d92) aid_touch_sctrl_middle

0xbba1,	// (0x00065d9f) bg_sctrl_middle_pane_ParamLimits

0xbba1,	// (0x00065d9f) bg_sctrl_middle_pane

0x1598,	// (0x0005b796) cell_sctrl_middle_pane_g1_ParamLimits

0x1598,	// (0x0005b796) cell_sctrl_middle_pane_g1

0xbbaf,	// (0x00065dad) cell_sctrl_middle_pane_g2_ParamLimits

0xbbaf,	// (0x00065dad) cell_sctrl_middle_pane_g2

0x0001,

0xfd22,	// (0x00069f20) cell_sctrl_middle_pane_g_ParamLimits

0xfd22,	// (0x00069f20) cell_sctrl_middle_pane_g

0x245d,	// (0x0005c65b) bg_sctrl_middle_pane_g1

0x2465,	// (0x0005c663) bg_sctrl_middle_pane_g2

0x246d,	// (0x0005c66b) bg_sctrl_middle_pane_g3

0x2475,	// (0x0005c673) bg_sctrl_middle_pane_g4

0x247d,	// (0x0005c67b) bg_sctrl_middle_pane_g5

0x2485,	// (0x0005c683) bg_sctrl_middle_pane_g6

0x248d,	// (0x0005c68b) bg_sctrl_middle_pane_g7

0x2495,	// (0x0005c693) bg_sctrl_middle_pane_g8

0x0007,

0xfd27,	// (0x00069f25) bg_sctrl_middle_pane_g

0x249d,	// (0x0005c69b) bg_sctrl_middle_pane_g8_copy1

0x245d,	// (0x0005c65b) bg_sctrl_sk_pane_g1

0x246d,	// (0x0005c66b) bg_sctrl_sk_pane_g2

0x2465,	// (0x0005c663) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x00069a6a) bg_sctrl_sk_pane_g

0x8bd3,	// (0x00062dd1) aid_size_touch_scroll_bar

0x247d,	// (0x0005c67b) bg_sctrl_sk_pane_g4

0x2475,	// (0x0005c673) bg_sctrl_sk_pane_g5

0x2485,	// (0x0005c683) bg_sctrl_sk_pane_g6

0x248d,	// (0x0005c68b) bg_sctrl_sk_pane_g7

0x249d,	// (0x0005c69b) bg_sctrl_sk_pane_g8

0x2495,	// (0x0005c693) bg_sctrl_sk_pane_g9

0x19ca,	// (0x0005bbc8) popup_fep_china_hwr2_fs_candidate_window

0xae49,	// (0x00065047) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xae49,	// (0x00065047) popup_fep_china_hwr2_fs_control_window

0x0bcc,	// (0x0005adca) sctrl_sk_top_pane_g2

0x0001,

0xfd1d,	// (0x00069f1b) sctrl_sk_top_pane_g

0xd3ce,	// (0x000675cc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd3ce,	// (0x000675cc) aid_fep_china_hwr2_fs_cell

0xd3e4,	// (0x000675e2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd3e4,	// (0x000675e2) bg_popup_fep_shadow_pane_cp4

0xd3fb,	// (0x000675f9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd3fb,	// (0x000675f9) bg_popup_fep_shadow_pane_cp5

0xd40d,	// (0x0006760b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd40d,	// (0x0006760b) popup_fep_china_hwr2_fs_control_bar_grid

0xd421,	// (0x0006761f) popup_fep_china_hwr2_fs_control_funtion_grid

0x64ea,	// (0x000606e8) aid_fep_china_hwr2_fs_candi_cell

0x55b1,	// (0x0005f7af) bg_popup_fep_shadow_pane_cp6

0x64f4,	// (0x000606f2) popup_fep_china_hwr2_fs_candidate_grid

0xd429,	// (0x00067627) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd429,	// (0x00067627) cell_fep_china_hwr2_fs_funtion_grid

0x4c26,	// (0x0005ee24) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6516,	// (0x00060714) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6516,	// (0x00060714) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6524,	// (0x00060722) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6524,	// (0x00060722) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd38,	// (0x00069f36) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd38,	// (0x00069f36) cell_fep_china_hwr2_fs_funtion_grid_g

0xd441,	// (0x0006763f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd441,	// (0x0006763f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd456,	// (0x00067654) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd456,	// (0x00067654) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3d,	// (0x00069f3b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3d,	// (0x00069f3b) cell_fep_china_hwr2_fs_funtion_grid_t

0x656b,	// (0x00060769) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6573,	// (0x00060771) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x657b,	// (0x00060779) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd42,	// (0x00069f40) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6583,	// (0x00060781) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6583,	// (0x00060781) cell_fep_china_hwr2_fs_candidate_grid

0x65a2,	// (0x000607a0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x65aa,	// (0x000607a8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4c26,	// (0x0005ee24) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4c26,	// (0x0005ee24) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x00069d54) cell_fep_china_hwr2_fs_candidate_grid_g

0x65b2,	// (0x000607b0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2039,	// (0x0005c237) clock_nsta_pane_cp_24_ParamLimits

0x2039,	// (0x0005c237) clock_nsta_pane_cp_24

0x20b9,	// (0x0005c2b7) indicator_nsta_pane_cp_24_ParamLimits

0x20b9,	// (0x0005c2b7) indicator_nsta_pane_cp_24

0x3130,	// (0x0005d32e) heading_pane_g1

0x0001,

0xf8d1,	// (0x00069acf) heading_pane_g

0x3d51,	// (0x0005df4f) grid_sct_catagory_button_pane

0x3d83,	// (0x0005df81) scroll_pane_cp5_ParamLimits

0x4872,	// (0x0005ea70) button_value_adjust_pane_cp5_ParamLimits

0x4872,	// (0x0005ea70) button_value_adjust_pane_cp5

0x4957,	// (0x0005eb55) form2_midp_time_pane_ParamLimits

0x65c0,	// (0x000607be) cell_sct_catagory_button_pane_ParamLimits

0x65c0,	// (0x000607be) cell_sct_catagory_button_pane

0x4beb,	// (0x0005ede9) bg_button_pane_cp01_ParamLimits

0x4beb,	// (0x0005ede9) bg_button_pane_cp01

0x4c26,	// (0x0005ee24) cell_sct_catagory_button_pane_g1

0xb412,	// (0x00065610) popup_tb_extension_window

0xd472,	// (0x00067670) aid_size_cell_ext_ParamLimits

0xd472,	// (0x00067670) aid_size_cell_ext

0x8a15,	// (0x00062c13) bg_tb_trans_pane_cp1_ParamLimits

0x8a15,	// (0x00062c13) bg_tb_trans_pane_cp1

0xd498,	// (0x00067696) grid_tb_ext_pane_ParamLimits

0xd498,	// (0x00067696) grid_tb_ext_pane

0xd4d8,	// (0x000676d6) cell_tb_ext_pane_ParamLimits

0xd4d8,	// (0x000676d6) cell_tb_ext_pane

0xd500,	// (0x000676fe) cell_tb_ext_pane_g1_ParamLimits

0xd500,	// (0x000676fe) cell_tb_ext_pane_g1

0x6656,	// (0x00060854) cell_tb_ext_pane_t1

0x87b8,	// (0x000629b6) list_highlight_pane_cp11_ParamLimits

0x87b8,	// (0x000629b6) list_highlight_pane_cp11

0x9cb2,	// (0x00063eb0) popup_uni_indicator_window_ParamLimits

0x9cb2,	// (0x00063eb0) popup_uni_indicator_window

0x8c9a,	// (0x00062e98) bg_popup_sub_pane_cp14

0x6671,	// (0x0006086f) list_uniindi_pane

0x667d,	// (0x0006087b) uniindi_top_pane

0x87b8,	// (0x000629b6) bg_uniindi_top_pane

0x669e,	// (0x0006089c) uniindi_top_pane_g1

0x66b4,	// (0x000608b2) uniindi_top_pane_g2

0x0003,

0xfd49,	// (0x00069f47) uniindi_top_pane_g

0x66de,	// (0x000608dc) uniindi_top_pane_t1

0x670a,	// (0x00060908) list_single_uniindi_pane_ParamLimits

0x670a,	// (0x00060908) list_single_uniindi_pane

0x4c26,	// (0x0005ee24) bg_uniindi_top_pane_g1

0x671c,	// (0x0006091a) list_single_uniindi_pane_g1

0x672f,	// (0x0006092d) list_single_uniindi_pane_t1

0xe1cf,	// (0x000683cd) control_bg_pane

0x6754,	// (0x00060952) bg_sctrl_sk_pane_cp1

0x675d,	// (0x0006095b) bg_sctrl_sk_pane_cp2

0x6766,	// (0x00060964) control_bg_pane_g1

0x676f,	// (0x0006096d) control_bg_pane_g2

0x0001,

0xfd52,	// (0x00069f50) control_bg_pane_g

0x4699,	// (0x0005e897) cell_indicator_nsta_pane_g1_ParamLimits

0xca5c,	// (0x00066c5a) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x00069cb8) cell_indicator_nsta_pane_g_ParamLimits

0xeaa8,	// (0x00068ca6) form2_midp_time_pane_t1_ParamLimits

0xadbf,	// (0x00064fbd) main_idle_act4_pane_ParamLimits

0xadbf,	// (0x00064fbd) main_idle_act4_pane

0xb412,	// (0x00065610) popup_tb_extension_window_ParamLimits

0xd4c0,	// (0x000676be) tb_ext_find_pane_ParamLimits

0xd4c0,	// (0x000676be) tb_ext_find_pane

0x6778,	// (0x00060976) ai_gene_pane_1_cp1

0x0043,	// (0x0005a241) ai_gene_pane_2_cp1

0x6780,	// (0x0006097e) list_single_idle_plugin_calendar_pane

0x6789,	// (0x00060987) list_single_idle_plugin_notification_pane

0x6792,	// (0x00060990) list_single_idle_plugin_player_pane

0xd51d,	// (0x0006771b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd51d,	// (0x0006771b) list_single_idle_plugin_shortcut_pane

0xd545,	// (0x00067743) main_idle_act4_pane_t1

0xd55d,	// (0x0006775b) main_idle_act4_pane_t2

0x0001,

0xfd57,	// (0x00069f55) main_idle_act4_pane_t

0xd575,	// (0x00067773) middle_sk_idle_act4_pane_ParamLimits

0xd575,	// (0x00067773) middle_sk_idle_act4_pane

0xd591,	// (0x0006778f) popup_clock_digital_analogue_window_cp2

0xd5b8,	// (0x000677b6) shortcut_wheel_idle_act4_pane_ParamLimits

0xd5b8,	// (0x000677b6) shortcut_wheel_idle_act4_pane

0x4c26,	// (0x0005ee24) shortcut_wheel_idle_act4_pane_g1

0x4c26,	// (0x0005ee24) shortcut_wheel_idle_act4_pane_g2

0x4c26,	// (0x0005ee24) shortcut_wheel_idle_act4_pane_g3

0x4c26,	// (0x0005ee24) shortcut_wheel_idle_act4_pane_g4

0x4c26,	// (0x0005ee24) shortcut_wheel_idle_act4_pane_g5

0x6825,	// (0x00060a23) shortcut_wheel_idle_act4_pane_g6

0x682d,	// (0x00060a2b) shortcut_wheel_idle_act4_pane_g7

0x6835,	// (0x00060a33) shortcut_wheel_idle_act4_pane_g8

0x683d,	// (0x00060a3b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5c,	// (0x00069f5a) shortcut_wheel_idle_act4_pane_g

0xd635,	// (0x00067833) middle_sk_idle_act4_pane_g1_ParamLimits

0xd635,	// (0x00067833) middle_sk_idle_act4_pane_g1

0xd643,	// (0x00067841) middle_sk_idle_act4_pane_g2_ParamLimits

0xd643,	// (0x00067841) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7f,	// (0x00069f7d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7f,	// (0x00069f7d) middle_sk_idle_act4_pane_g

0xd65b,	// (0x00067859) middle_sk_idle_act4_pane_t1_ParamLimits

0xd65b,	// (0x00067859) middle_sk_idle_act4_pane_t1

0xd68a,	// (0x00067888) grid_ai_shortcut_pane_ParamLimits

0xd68a,	// (0x00067888) grid_ai_shortcut_pane

0xd6a7,	// (0x000678a5) list_highlight_pane_cp16_ParamLimits

0xd6a7,	// (0x000678a5) list_highlight_pane_cp16

0xd6b4,	// (0x000678b2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd6b4,	// (0x000678b2) list_single_idle_plugin_shortcut_pane_g1

0xd6c0,	// (0x000678be) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd6c0,	// (0x000678be) list_single_idle_plugin_shortcut_pane_g2

0xd6de,	// (0x000678dc) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd6de,	// (0x000678dc) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd84,	// (0x00069f82) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd84,	// (0x00069f82) list_single_idle_plugin_shortcut_pane_g

0xd6f3,	// (0x000678f1) cell_ai_shortcut_pane_ParamLimits

0xd6f3,	// (0x000678f1) cell_ai_shortcut_pane

0xd709,	// (0x00067907) cell_ai_shortcut_pane_g1_ParamLimits

0xd709,	// (0x00067907) cell_ai_shortcut_pane_g1

0x6778,	// (0x00060976) ai_gene_pane_1_cp2

0x696e,	// (0x00060b6c) ai_gene_pane_2_cp2

0x6976,	// (0x00060b74) list_highlight_pane_cp15

0x697f,	// (0x00060b7d) list_single_idle_plugin_calendar_pane_g1

0x6976,	// (0x00060b74) list_highlight_pane_cp17

0x6987,	// (0x00060b85) list_single_idle_plugin_calendar_pane_g1_copy1

0x698f,	// (0x00060b8d) list_single_idle_plugin_player_pane_g1

0x3fb8,	// (0x0005e1b6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8b,	// (0x00069f89) list_single_idle_plugin_player_pane_g

0x6997,	// (0x00060b95) list_single_idle_plugin_player_pane_t1

0x69a5,	// (0x00060ba3) list_single_idle_plugin_player_pane_t2

0x69b3,	// (0x00060bb1) list_single_idle_plugin_player_pane_t3

0x69c1,	// (0x00060bbf) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd90,	// (0x00069f8e) list_single_idle_plugin_player_pane_t

0x69cf,	// (0x00060bcd) wait_bar_pane_cp15

0x69d7,	// (0x00060bd5) grid_ai_notification_pane

0x3fb8,	// (0x0005e1b6) list_single_idle_plugin_notification_pane_g1

0xd72b,	// (0x00067929) cell_ai_notification_pane_ParamLimits

0xd72b,	// (0x00067929) cell_ai_notification_pane

0x69ed,	// (0x00060beb) cell_ai_notification_pane_g1

0x69f5,	// (0x00060bf3) cell_ai_notification_pane_t1

0xd738,	// (0x00067936) tb_ext_find_button_pane

0xd740,	// (0x0006793e) tb_ext_find_pane_g1

0xd748,	// (0x00067946) tb_ext_find_pane_t1

0xc06f,	// (0x0006626d) tb_ext_find_button_pane_g1

0x6a21,	// (0x00060c1f) tb_ext_find_button_pane_g2

0x0001,

0xfd99,	// (0x00069f97) tb_ext_find_button_pane_g

0xd545,	// (0x00067743) main_idle_act4_pane_t1_ParamLimits

0xd55d,	// (0x0006775b) main_idle_act4_pane_t2_ParamLimits

0xfd57,	// (0x00069f55) main_idle_act4_pane_t_ParamLimits

0xd591,	// (0x0006778f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd5a8,	// (0x000677a6) sat_plugin_idle_act4_pane_ParamLimits

0xd5a8,	// (0x000677a6) sat_plugin_idle_act4_pane

0xd756,	// (0x00067954) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd756,	// (0x00067954) sat_plugin_idle_act4_pane_t1

0xd76e,	// (0x0006796c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd76e,	// (0x0006796c) sat_plugin_idle_act4_pane_t2

0xd786,	// (0x00067984) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd786,	// (0x00067984) sat_plugin_idle_act4_pane_t3

0xd79e,	// (0x0006799c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd79e,	// (0x0006799c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9e,	// (0x00069f9c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9e,	// (0x00069f9c) sat_plugin_idle_act4_pane_t

0xf08f,	// (0x0006928d) popup_battery_window_ParamLimits

0xf08f,	// (0x0006928d) popup_battery_window

0x87b8,	// (0x000629b6) bg_popup_sub_pane_cp25_ParamLimits

0x87b8,	// (0x000629b6) bg_popup_sub_pane_cp25

0x6a76,	// (0x00060c74) popup_battery_window_g1_ParamLimits

0x6a76,	// (0x00060c74) popup_battery_window_g1

0x6a82,	// (0x00060c80) popup_battery_window_t1_ParamLimits

0x6a82,	// (0x00060c80) popup_battery_window_t1

0x6a94,	// (0x00060c92) popup_battery_window_t2_ParamLimits

0x6a94,	// (0x00060c92) popup_battery_window_t2

0x0001,

0xfda7,	// (0x00069fa5) popup_battery_window_t_ParamLimits

0xfda7,	// (0x00069fa5) popup_battery_window_t

0xab4e,	// (0x00064d4c) midp_canvas_pane_ParamLimits

0xaba9,	// (0x00064da7) midp_keypad_pane_ParamLimits

0xaba9,	// (0x00064da7) midp_keypad_pane

0x191c,	// (0x0005bb1a) main_midp_pane_ParamLimits

0x4725,	// (0x0005e923) signal_pane_g2_cp_ParamLimits

0xd7b6,	// (0x000679b4) aid_size_cell_midp_keypad_ParamLimits

0xd7b6,	// (0x000679b4) aid_size_cell_midp_keypad

0xd7d4,	// (0x000679d2) midp_keyp_game_grid_pane_ParamLimits

0xd7d4,	// (0x000679d2) midp_keyp_game_grid_pane

0xd7fb,	// (0x000679f9) midp_keyp_rocker_pane_ParamLimits

0xd7fb,	// (0x000679f9) midp_keyp_rocker_pane

0xd83a,	// (0x00067a38) midp_keyp_sk_left_pane_ParamLimits

0xd83a,	// (0x00067a38) midp_keyp_sk_left_pane

0xd88e,	// (0x00067a8c) midp_keyp_sk_right_pane_ParamLimits

0xd88e,	// (0x00067a8c) midp_keyp_sk_right_pane

0x55b1,	// (0x0005f7af) bg_button_pane_cp03

0xd8e2,	// (0x00067ae0) midp_keyp_sk_left_pane_g1

0x55b1,	// (0x0005f7af) bg_button_pane_cp04

0xd8e2,	// (0x00067ae0) midp_keyp_sk_right_pane_g1

0x4c26,	// (0x0005ee24) midp_keyp_rocker_pane_g1

0xd8eb,	// (0x00067ae9) keyp_game_cell_pane_ParamLimits

0xd8eb,	// (0x00067ae9) keyp_game_cell_pane

0x55b1,	// (0x0005f7af) bg_button_pane_cp02

0xd911,	// (0x00067b0f) keyp_game_cell_pane_g1

0x9c49,	// (0x00063e47) popup_fep_vkb2_window_ParamLimits

0x9c49,	// (0x00063e47) popup_fep_vkb2_window

0xbbbb,	// (0x00065db9) aid_size_cell_vkb2_ParamLimits

0xbbbb,	// (0x00065db9) aid_size_cell_vkb2

0xbbf1,	// (0x00065def) popup_fep_vkb2_window_g1_ParamLimits

0xbbf1,	// (0x00065def) popup_fep_vkb2_window_g1

0xbc41,	// (0x00065e3f) vkb2_area_bottom_pane_ParamLimits

0xbc41,	// (0x00065e3f) vkb2_area_bottom_pane

0xbc9d,	// (0x00065e9b) vkb2_area_keypad_pane_ParamLimits

0xbc9d,	// (0x00065e9b) vkb2_area_keypad_pane

0xbceb,	// (0x00065ee9) vkb2_area_top_pane_ParamLimits

0xbceb,	// (0x00065ee9) vkb2_area_top_pane

0xbd71,	// (0x00065f6f) vkb2_top_entry_pane_ParamLimits

0xbd71,	// (0x00065f6f) vkb2_top_entry_pane

0xbd9e,	// (0x00065f9c) vkb2_top_grid_left_pane_ParamLimits

0xbd9e,	// (0x00065f9c) vkb2_top_grid_left_pane

0xbdbe,	// (0x00065fbc) vkb2_top_grid_right_pane_ParamLimits

0xbdbe,	// (0x00065fbc) vkb2_top_grid_right_pane

0x118f,	// (0x0005b38d) vkb2_cell_keypad_pane_ParamLimits

0x118f,	// (0x0005b38d) vkb2_cell_keypad_pane

0xbe04,	// (0x00066002) vkb2_area_bottom_grid_pane_ParamLimits

0xbe04,	// (0x00066002) vkb2_area_bottom_grid_pane

0xbe2e,	// (0x0006602c) vkb2_area_bottom_pane_g1_ParamLimits

0xbe2e,	// (0x0006602c) vkb2_area_bottom_pane_g1

0xbe54,	// (0x00066052) vkb2_area_bottom_pane_g2_ParamLimits

0xbe54,	// (0x00066052) vkb2_area_bottom_pane_g2

0xbe85,	// (0x00066083) vkb2_area_bottom_pane_g3_ParamLimits

0xbe85,	// (0x00066083) vkb2_area_bottom_pane_g3

0x0002,

0xfdac,	// (0x00069faa) vkb2_area_bottom_pane_g_ParamLimits

0xfdac,	// (0x00069faa) vkb2_area_bottom_pane_g

0x1339,	// (0x0005b537) vkb2_top_cell_left_pane_ParamLimits

0x1339,	// (0x0005b537) vkb2_top_cell_left_pane

0xd91a,	// (0x00067b18) vkb2_top_entry_pane_g1_ParamLimits

0xd91a,	// (0x00067b18) vkb2_top_entry_pane_g1

0xd928,	// (0x00067b26) vkb2_top_entry_pane_t1_ParamLimits

0xd928,	// (0x00067b26) vkb2_top_entry_pane_t1

0x6c37,	// (0x00060e35) vkb2_top_entry_pane_t2_ParamLimits

0x6c37,	// (0x00060e35) vkb2_top_entry_pane_t2

0x6c69,	// (0x00060e67) vkb2_top_entry_pane_t3_ParamLimits

0x6c69,	// (0x00060e67) vkb2_top_entry_pane_t3

0x0002,

0xfdb3,	// (0x00069fb1) vkb2_top_entry_pane_t_ParamLimits

0xfdb3,	// (0x00069fb1) vkb2_top_entry_pane_t

0xbeef,	// (0x000660ed) vkb2_top_grid_right_pane_g1_ParamLimits

0xbeef,	// (0x000660ed) vkb2_top_grid_right_pane_g1

0x139c,	// (0x0005b59a) vkb2_top_grid_right_pane_g2_ParamLimits

0x139c,	// (0x0005b59a) vkb2_top_grid_right_pane_g2

0x13b4,	// (0x0005b5b2) vkb2_top_grid_right_pane_g3_ParamLimits

0x13b4,	// (0x0005b5b2) vkb2_top_grid_right_pane_g3

0xbf05,	// (0x00066103) vkb2_top_grid_right_pane_g4_ParamLimits

0xbf05,	// (0x00066103) vkb2_top_grid_right_pane_g4

0x0003,

0xfdba,	// (0x00069fb8) vkb2_top_grid_right_pane_g_ParamLimits

0xfdba,	// (0x00069fb8) vkb2_top_grid_right_pane_g

0x13e2,	// (0x0005b5e0) vkb2_top_cell_left_pane_g1

0x13f9,	// (0x0005b5f7) vkb2_cell_keypad_pane_g1_ParamLimits

0x13f9,	// (0x0005b5f7) vkb2_cell_keypad_pane_g1

0x6c8d,	// (0x00060e8b) vkb2_cell_keypad_pane_t1_ParamLimits

0x6c8d,	// (0x00060e8b) vkb2_cell_keypad_pane_t1

0x1407,	// (0x0005b605) vkb2_cell_bottom_grid_pane_ParamLimits

0x1407,	// (0x0005b605) vkb2_cell_bottom_grid_pane

0x1440,	// (0x0005b63e) vkb2_cell_bottom_grid_pane_g1

0xd5d9,	// (0x000677d7) aid_call2_pane_cp02

0xd5e1,	// (0x000677df) aid_call_pane_cp02

0xd5e9,	// (0x000677e7) clock_digital_number_pane_cp10

0xd5f1,	// (0x000677ef) clock_digital_number_pane_cp11

0xd5f9,	// (0x000677f7) clock_digital_number_pane_cp12

0xd601,	// (0x000677ff) clock_digital_number_pane_cp13

0xd609,	// (0x00067807) clock_digital_separator_pane_cp10

0xc06f,	// (0x0006626d) popup_clock_digital_analogue_window_cp2_g1

0xc06f,	// (0x0006626d) popup_clock_digital_analogue_window_cp2_g2

0xd611,	// (0x0006780f) popup_clock_digital_analogue_window_cp2_g3

0xc06f,	// (0x0006626d) popup_clock_digital_analogue_window_cp2_g4

0xd611,	// (0x0006780f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6f,	// (0x00069f6d) popup_clock_digital_analogue_window_cp2_g

0xd619,	// (0x00067817) popup_clock_digital_analogue_window_cp2_t1

0xd627,	// (0x00067825) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7a,	// (0x00069f78) popup_clock_digital_analogue_window_cp2_t

0x4c26,	// (0x0005ee24) clock_digital_number_pane_cp10_g1

0x4c26,	// (0x0005ee24) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x00069d54) clock_digital_number_pane_cp10_g

0x4c26,	// (0x0005ee24) clock_digital_separator_pane_cp10_g1

0x4c26,	// (0x0005ee24) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x00069d54) clock_digital_separator_pane_cp10_g

0x66c0,	// (0x000608be) uniindi_top_pane_g3

0x66d1,	// (0x000608cf) uniindi_top_pane_g4

0x121a,	// (0x0005b418) vkb2_row_keypad_pane_ParamLimits

0x121a,	// (0x0005b418) vkb2_row_keypad_pane

0x145c,	// (0x0005b65a) vkb2_cell_t_keypad_pane_ParamLimits

0x145c,	// (0x0005b65a) vkb2_cell_t_keypad_pane

0x146c,	// (0x0005b66a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x146c,	// (0x0005b66a) vkb2_cell_t_keypad_pane_cp08

0x1481,	// (0x0005b67f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1481,	// (0x0005b67f) vkb2_cell_t_keypad_pane_cp09

0x1495,	// (0x0005b693) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1495,	// (0x0005b693) vkb2_cell_t_keypad_pane_cp01

0x14a6,	// (0x0005b6a4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x14a6,	// (0x0005b6a4) vkb2_cell_t_keypad_pane_cp02

0x14b7,	// (0x0005b6b5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x14b7,	// (0x0005b6b5) vkb2_cell_t_keypad_pane_cp03

0x14c8,	// (0x0005b6c6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x14c8,	// (0x0005b6c6) vkb2_cell_t_keypad_pane_cp04

0x14d9,	// (0x0005b6d7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x14d9,	// (0x0005b6d7) vkb2_cell_t_keypad_pane_cp05

0x14ea,	// (0x0005b6e8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x14ea,	// (0x0005b6e8) vkb2_cell_t_keypad_pane_cp06

0x14fd,	// (0x0005b6fb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x14fd,	// (0x0005b6fb) vkb2_cell_t_keypad_pane_cp07

0x1512,	// (0x0005b710) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1512,	// (0x0005b710) vkb2_cell_t_keypad_pane_cp10

0x0bcc,	// (0x0005adca) vkb2_cell_t_keypad_pane_g1

0x6ca4,	// (0x00060ea2) vkb2_cell_t_keypad_pane_t1

0xe1cf,	// (0x000683cd) popup_grid_graphic2_window

0xd961,	// (0x00067b5f) aid_size_cell_graphic2_ParamLimits

0xd961,	// (0x00067b5f) aid_size_cell_graphic2

0xd99f,	// (0x00067b9d) bg_popup_window_pane_cp21_ParamLimits

0xd99f,	// (0x00067b9d) bg_popup_window_pane_cp21

0xd9ad,	// (0x00067bab) graphic2_pages_pane_ParamLimits

0xd9ad,	// (0x00067bab) graphic2_pages_pane

0xda05,	// (0x00067c03) grid_graphic2_control_pane_ParamLimits

0xda05,	// (0x00067c03) grid_graphic2_control_pane

0xda4d,	// (0x00067c4b) grid_graphic2_pane_ParamLimits

0xda4d,	// (0x00067c4b) grid_graphic2_pane

0xdad8,	// (0x00067cd6) cell_graphic2_pane

0x55b1,	// (0x0005f7af) main_comp_mode_pane

0x5f31,	// (0x0006012f) list_ai3_gene_pane_ParamLimits

0xd316,	// (0x00067514) bg_popup_window_pane_cp19_ParamLimits

0x6305,	// (0x00060503) bg_touch_area_indi_pane_ParamLimits

0x6305,	// (0x00060503) bg_touch_area_indi_pane

0x631b,	// (0x00060519) bg_touch_area_indi_pane_cp01_ParamLimits

0x631b,	// (0x00060519) bg_touch_area_indi_pane_cp01

0x6333,	// (0x00060531) bg_touch_area_indi_pane_cp02_ParamLimits

0x6333,	// (0x00060531) bg_touch_area_indi_pane_cp02

0x634d,	// (0x0006054b) bg_touch_area_indi_pane_cp03_ParamLimits

0x634d,	// (0x0006054b) bg_touch_area_indi_pane_cp03

0x6367,	// (0x00060565) popup_slider_window_g1_ParamLimits

0x6383,	// (0x00060581) popup_slider_window_g2_ParamLimits

0x639f,	// (0x0006059d) popup_slider_window_g3_ParamLimits

0xfd04,	// (0x00069f02) popup_slider_window_g_ParamLimits

0x63fb,	// (0x000605f9) popup_slider_window_t1_ParamLimits

0x646f,	// (0x0006066d) small_volume_slider_vertical_pane_ParamLimits

0xdad8,	// (0x00067cd6) cell_graphic2_pane_ParamLimits

0xdb3b,	// (0x00067d39) bg_button_pane_cp10_ParamLimits

0xdb3b,	// (0x00067d39) bg_button_pane_cp10

0xdb4e,	// (0x00067d4c) bg_button_pane_cp11_ParamLimits

0xdb4e,	// (0x00067d4c) bg_button_pane_cp11

0xdb61,	// (0x00067d5f) graphic2_pages_pane_g1_ParamLimits

0xdb61,	// (0x00067d5f) graphic2_pages_pane_g1

0xdb7c,	// (0x00067d7a) graphic2_pages_pane_g2_ParamLimits

0xdb7c,	// (0x00067d7a) graphic2_pages_pane_g2

0x0001,

0xfdc8,	// (0x00069fc6) graphic2_pages_pane_g_ParamLimits

0xfdc8,	// (0x00069fc6) graphic2_pages_pane_g

0xdb94,	// (0x00067d92) graphic2_pages_pane_t1_ParamLimits

0xdb94,	// (0x00067d92) graphic2_pages_pane_t1

0xdbac,	// (0x00067daa) cell_graphic2_control_pane_ParamLimits

0xdbac,	// (0x00067daa) cell_graphic2_control_pane

0xdbe0,	// (0x00067dde) cell_graphic2_pane_g1_ParamLimits

0xdbe0,	// (0x00067dde) cell_graphic2_pane_g1

0xdbed,	// (0x00067deb) cell_graphic2_pane_g2_ParamLimits

0xdbed,	// (0x00067deb) cell_graphic2_pane_g2

0xcc18,	// (0x00066e16) cell_graphic2_pane_g3_ParamLimits

0xcc18,	// (0x00066e16) cell_graphic2_pane_g3

0xdbfa,	// (0x00067df8) cell_graphic2_pane_g4_ParamLimits

0xdbfa,	// (0x00067df8) cell_graphic2_pane_g4

0xdc07,	// (0x00067e05) cell_graphic2_pane_g5_ParamLimits

0xdc07,	// (0x00067e05) cell_graphic2_pane_g5

0x0004,

0xfdcd,	// (0x00069fcb) cell_graphic2_pane_g_ParamLimits

0xfdcd,	// (0x00069fcb) cell_graphic2_pane_g

0xdc27,	// (0x00067e25) cell_graphic2_pane_t1_ParamLimits

0xdc27,	// (0x00067e25) cell_graphic2_pane_t1

0x3124,	// (0x0005d322) grid_highlight_pane_cp11_ParamLimits

0x3124,	// (0x0005d322) grid_highlight_pane_cp11

0x87b8,	// (0x000629b6) bg_button_pane_cp05

0xdc5c,	// (0x00067e5a) cell_graphic2_control_pane_g1

0x4c26,	// (0x0005ee24) bg_touch_area_indi_pane_g1

0x6f7e,	// (0x0006117c) aid_cmod_rocker_key_size

0x6f88,	// (0x00061186) aid_cmode_itu_key_size

0x6f92,	// (0x00061190) main_cmode_video_pane

0x6f9c,	// (0x0006119a) main_comp_mode_itu_pane

0x6fa8,	// (0x000611a6) main_comp_mode_rocker_pane

0x6fb4,	// (0x000611b2) cell_cmode_rocker_pane_ParamLimits

0x6fb4,	// (0x000611b2) cell_cmode_rocker_pane

0x6fc8,	// (0x000611c6) cell_cmode_itu_pane_ParamLimits

0x6fc8,	// (0x000611c6) cell_cmode_itu_pane

0x8c9a,	// (0x00062e98) bg_button_pane_cp06_ParamLimits

0x8c9a,	// (0x00062e98) bg_button_pane_cp06

0x4ea1,	// (0x0005f09f) cell_cmode_rocker_pane_g1_ParamLimits

0x4ea1,	// (0x0005f09f) cell_cmode_rocker_pane_g1

0x6516,	// (0x00060714) cell_cmode_rocker_pane_g2_ParamLimits

0x6516,	// (0x00060714) cell_cmode_rocker_pane_g2

0x0001,

0xfddd,	// (0x00069fdb) cell_cmode_rocker_pane_g_ParamLimits

0xfddd,	// (0x00069fdb) cell_cmode_rocker_pane_g

0x55b1,	// (0x0005f7af) bg_button_pane_cp07

0x6fdf,	// (0x000611dd) cell_cmode_itu_pane_g1

0x6fe8,	// (0x000611e6) cell_cmode_itu_pane_t1

0x6ff6,	// (0x000611f4) cell_cmode_itu_pane_t2

0x0001,

0xfde2,	// (0x00069fe0) cell_cmode_itu_pane_t

0x6744,	// (0x00060942) aid_touch_ctrl_left

0x674c,	// (0x0006094a) aid_touch_ctrl_right

0x55b1,	// (0x0005f7af) compa_mode_pane

0xdc82,	// (0x00067e80) aid_cmod_rocker_key_size_cp

0xdc8c,	// (0x00067e8a) aid_cmode_itu_key_size_cp

0x7018,	// (0x00061216) compa_mode_pane_g1

0x7020,	// (0x0006121e) compa_mode_pane_g2

0x7028,	// (0x00061226) compa_mode_pane_g3

0x0002,

0xfde7,	// (0x00069fe5) compa_mode_pane_g

0xdc96,	// (0x00067e94) main_comp_mode_itu_pane_cp

0xdc9e,	// (0x00067e9c) main_comp_mode_rocker_pane_cp

0xdca6,	// (0x00067ea4) cell_cmode_itu_pane_cp_ParamLimits

0xdca6,	// (0x00067ea4) cell_cmode_itu_pane_cp

0xdcbb,	// (0x00067eb9) cell_cmode_rocker_pane_cp_ParamLimits

0xdcbb,	// (0x00067eb9) cell_cmode_rocker_pane_cp

0x8c9a,	// (0x00062e98) bg_button_pane_cp06_cp_ParamLimits

0x8c9a,	// (0x00062e98) bg_button_pane_cp06_cp

0x4ea1,	// (0x0005f09f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4ea1,	// (0x0005f09f) cell_cmode_rocker_pane_g1_cp

0x4c26,	// (0x0005ee24) cell_cmode_rocker_pane_g2_cp

0x55b1,	// (0x0005f7af) bg_button_pane_cp07_cp

0xdccd,	// (0x00067ecb) cell_cmode_itu_pane_g1_cp

0xdcd6,	// (0x00067ed4) cell_cmode_itu_pane_t1_cp

0xdcd6,	// (0x00067ed4) cell_cmode_itu_pane_t2_cp

0xc86f,	// (0x00066a6d) settings_code_pane_cp2

0x561f,	// (0x0005f81d) bg_popup_window_pane_cp3_ParamLimits

0x89a6,	// (0x00062ba4) heading_pane_cp3_ParamLimits

0x89b2,	// (0x00062bb0) listscroll_popup_graphic_pane_ParamLimits

0x095f,	// (0x0005ab5d) fep_hwr_aid_pane_ParamLimits

0x0ed2,	// (0x0005b0d0) aid_touch_sctrl_top_ParamLimits

0x0eed,	// (0x0005b0eb) sctrl_sk_top_pane_g1_ParamLimits

0x0bcc,	// (0x0005adca) sctrl_sk_top_pane_g2_ParamLimits

0xfd1d,	// (0x00069f1b) sctrl_sk_top_pane_g_ParamLimits

0x0efa,	// (0x0005b0f8) sctrl_sk_top_pane_t1_ParamLimits

0x0ed2,	// (0x0005b0d0) aid_touch_sctrl_bottom_ParamLimits

0x0efa,	// (0x0005b0f8) sctrl_sk_bottom_pane_t1_ParamLimits

0x668a,	// (0x00060888) aid_area_touch_clock

0xbd33,	// (0x00065f31) aid_vkb2_area_top_pane_cell_ParamLimits

0xbd33,	// (0x00065f31) aid_vkb2_area_top_pane_cell

0xbdde,	// (0x00065fdc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbdde,	// (0x00065fdc) aid_vkb2_area_bottom_pane_cell

0x6bef,	// (0x00060ded) popup_char_count_window

0x707e,	// (0x0006127c) popup_char_count_window_g1

0x7087,	// (0x00061285) popup_char_count_window_g2

0x7090,	// (0x0006128e) popup_char_count_window_g3

0x0002,

0xfdee,	// (0x00069fec) popup_char_count_window_g

0x7099,	// (0x00061297) popup_char_count_window_t1

0x0fab,	// (0x0005b1a9) popup_fep_char_preview_window_ParamLimits

0x0fab,	// (0x0005b1a9) popup_fep_char_preview_window

0xbd53,	// (0x00065f51) vkb2_top_candi_pane_ParamLimits

0xbd53,	// (0x00065f51) vkb2_top_candi_pane

0xdce4,	// (0x00067ee2) cell_vkb2_top_candi_pane_ParamLimits

0xdce4,	// (0x00067ee2) cell_vkb2_top_candi_pane

0x1527,	// (0x0005b725) bg_popup_fep_char_preview_window_ParamLimits

0x1527,	// (0x0005b725) bg_popup_fep_char_preview_window

0x1535,	// (0x0005b733) popup_fep_char_preview_window_t1_ParamLimits

0x1535,	// (0x0005b733) popup_fep_char_preview_window_t1

0x70f8,	// (0x000612f6) bg_popup_fep_char_preview_window_g1

0x7100,	// (0x000612fe) bg_popup_fep_char_preview_window_g2

0x7108,	// (0x00061306) bg_popup_fep_char_preview_window_g3

0x7110,	// (0x0006130e) bg_popup_fep_char_preview_window_g4

0x7118,	// (0x00061316) bg_popup_fep_char_preview_window_g5

0x156f,	// (0x0005b76d) bg_popup_fep_char_preview_window_g6

0x7120,	// (0x0006131e) bg_popup_fep_char_preview_window_g7

0x7128,	// (0x00061326) bg_popup_fep_char_preview_window_g8

0x7130,	// (0x0006132e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf5,	// (0x00069ff3) bg_popup_fep_char_preview_window_g

0x0bcc,	// (0x0005adca) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0bcc,	// (0x0005adca) cell_vkb2_top_candi_pane_g1

0x0bda,	// (0x0005add8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0bda,	// (0x0005add8) cell_vkb2_top_candi_pane_g2

0x569a,	// (0x0005f898) cell_vkb2_top_candi_pane_g3_ParamLimits

0x569a,	// (0x0005f898) cell_vkb2_top_candi_pane_g3

0x1577,	// (0x0005b775) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1577,	// (0x0005b775) cell_vkb2_top_candi_pane_g4

0x53c0,	// (0x0005f5be) cell_vkb2_top_candi_pane_g5_ParamLimits

0x53c0,	// (0x0005f5be) cell_vkb2_top_candi_pane_g5

0x1598,	// (0x0005b796) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1598,	// (0x0005b796) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe08,	// (0x0006a006) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe08,	// (0x0006a006) cell_vkb2_top_candi_pane_g

0x15a6,	// (0x0005b7a4) cell_vkb2_top_candi_pane_t1

0x0773,	// (0x0005a971) aid_size_touch_slider_mark_ParamLimits

0x0773,	// (0x0005a971) aid_size_touch_slider_mark

0xd9e9,	// (0x00067be7) grid_graphic2_catg_pane_ParamLimits

0xd9e9,	// (0x00067be7) grid_graphic2_catg_pane

0xdaa7,	// (0x00067ca5) popup_grid_graphic2_window_t1_ParamLimits

0xdaa7,	// (0x00067ca5) popup_grid_graphic2_window_t1

0xdabd,	// (0x00067cbb) popup_grid_graphic2_window_t2_ParamLimits

0xdabd,	// (0x00067cbb) popup_grid_graphic2_window_t2

0x0001,

0xfdc3,	// (0x00069fc1) popup_grid_graphic2_window_t_ParamLimits

0xfdc3,	// (0x00069fc1) popup_grid_graphic2_window_t

0x87b8,	// (0x000629b6) bg_button_pane_cp05_ParamLimits

0xdc5c,	// (0x00067e5a) cell_graphic2_control_pane_g1_ParamLimits

0xdd4e,	// (0x00067f4c) cell_graphic2_catg_pane_ParamLimits

0xdd4e,	// (0x00067f4c) cell_graphic2_catg_pane

0x55b1,	// (0x0005f7af) bg_button_pane_cp12

0xdd60,	// (0x00067f5e) cell_graphic2_catg_pane_g1

0x6656,	// (0x00060854) cell_tb_ext_pane_t1_ParamLimits

0x1359,	// (0x0005b557) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1359,	// (0x0005b557) vkb2_top_cell_right_narrow_pane

0x1371,	// (0x0005b56f) vkb2_top_cell_right_wide_pane_ParamLimits

0x1371,	// (0x0005b56f) vkb2_top_cell_right_wide_pane

0x0951,	// (0x0005ab4f) bg_vkb2_func_pane_ParamLimits

0x0951,	// (0x0005ab4f) bg_vkb2_func_pane

0x13e2,	// (0x0005b5e0) vkb2_top_cell_left_pane_g1_ParamLimits

0x0951,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0951,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp03

0x1440,	// (0x0005b63e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2465,	// (0x0005c663) bg_vkb2_func_pane_g1

0x246d,	// (0x0005c66b) bg_vkb2_func_pane_g2

0x247d,	// (0x0005c67b) bg_vkb2_func_pane_g3

0x2475,	// (0x0005c673) bg_vkb2_func_pane_g4

0x2485,	// (0x0005c683) bg_vkb2_func_pane_g5

0x248d,	// (0x0005c68b) bg_vkb2_func_pane_g6

0x2495,	// (0x0005c693) bg_vkb2_func_pane_g7

0x249d,	// (0x0005c69b) bg_vkb2_func_pane_g8

0x245d,	// (0x0005c65b) bg_vkb2_func_pane_g9

0x0008,

0xfe15,	// (0x0006a013) bg_vkb2_func_pane_g

0x0951,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0951,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp01

0x13e2,	// (0x0005b5e0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x13e2,	// (0x0005b5e0) vkb2_top_cell_right_wide_pane_g1

0x0951,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0951,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp02

0x1440,	// (0x0005b63e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1440,	// (0x0005b63e) vkb2_top_cell_right_narrow_pane_g1

0xd250,	// (0x0006744e) aid_touch_area_decrease_ParamLimits

0xd250,	// (0x0006744e) aid_touch_area_decrease

0xd28a,	// (0x00067488) aid_touch_area_increase_ParamLimits

0xd28a,	// (0x00067488) aid_touch_area_increase

0xd2b2,	// (0x000674b0) aid_touch_area_mute_ParamLimits

0xd2b2,	// (0x000674b0) aid_touch_area_mute

0xd2e2,	// (0x000674e0) aid_touch_area_slider_ParamLimits

0xd2e2,	// (0x000674e0) aid_touch_area_slider

0xd322,	// (0x00067520) popup_slider_window_g4_ParamLimits

0xd322,	// (0x00067520) popup_slider_window_g4

0xd34a,	// (0x00067548) popup_slider_window_g5_ParamLimits

0xd34a,	// (0x00067548) popup_slider_window_g5

0xd37e,	// (0x0006757c) popup_slider_window_g6_ParamLimits

0xd37e,	// (0x0006757c) popup_slider_window_g6

0x6429,	// (0x00060627) popup_slider_window_t2_ParamLimits

0x6429,	// (0x00060627) popup_slider_window_t2

0x0001,

0xfd11,	// (0x00069f0f) popup_slider_window_t_ParamLimits

0xfd11,	// (0x00069f0f) popup_slider_window_t

0xd39a,	// (0x00067598) slider_pane_ParamLimits

0xd39a,	// (0x00067598) slider_pane

0x7153,	// (0x00061351) slider_pane_g1_ParamLimits

0x7153,	// (0x00061351) slider_pane_g1

0x7167,	// (0x00061365) slider_pane_g2_ParamLimits

0x7167,	// (0x00061365) slider_pane_g2

0x717d,	// (0x0006137b) slider_pane_g3_ParamLimits

0x717d,	// (0x0006137b) slider_pane_g3

0x0003,

0xfe28,	// (0x0006a026) slider_pane_g_ParamLimits

0xfe28,	// (0x0006a026) slider_pane_g

0xb45e,	// (0x0006565c) popup_tb_float_extension_window_ParamLimits

0xb45e,	// (0x0006565c) popup_tb_float_extension_window

0x71a9,	// (0x000613a7) aid_size_cell_tb_float_ext

0x55b1,	// (0x0005f7af) bg_popup_sub_window_cp28

0x71b5,	// (0x000613b3) grid_tb_float_ext_pane

0x71c1,	// (0x000613bf) cell_tb_float_ext_pane_ParamLimits

0x71c1,	// (0x000613bf) cell_tb_float_ext_pane

0x71dd,	// (0x000613db) cell_tb_float_ext_pane_g1

0x71e6,	// (0x000613e4) grid_highlight_pane_cp12

0xb9db,	// (0x00065bd9) cell_last_hwr_side_pane_ParamLimits

0xb9db,	// (0x00065bd9) cell_last_hwr_side_pane

0x4c26,	// (0x0005ee24) cell_last_hwr_side_pane_g1

0x71ef,	// (0x000613ed) cell_last_hwr_side_pane_g2

0x0001,

0xfe31,	// (0x0006a02f) cell_last_hwr_side_pane_g

0xbeba,	// (0x000660b8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbeba,	// (0x000660b8) vkb2_area_bottom_space_btn_pane

0x0bcc,	// (0x0005adca) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6ca4,	// (0x00060ea2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x15a6,	// (0x0005b7a4) cell_vkb2_top_candi_pane_t1_ParamLimits

0x15c4,	// (0x0005b7c2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x15c4,	// (0x0005b7c2) vkb2_area_bottom_space_btn_pane_g1

0x15fe,	// (0x0005b7fc) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x15fe,	// (0x0005b7fc) vkb2_area_bottom_space_btn_pane_g2

0x1634,	// (0x0005b832) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1634,	// (0x0005b832) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe36,	// (0x0006a034) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe36,	// (0x0006a034) vkb2_area_bottom_space_btn_pane_g

0x0a16,	// (0x0005ac14) cel_fep_hwr_func_pane_ParamLimits

0x0a16,	// (0x0005ac14) cel_fep_hwr_func_pane

0xb9b0,	// (0x00065bae) cell_hwr_side_button_pane_ParamLimits

0xb9b0,	// (0x00065bae) cell_hwr_side_button_pane

0x668a,	// (0x00060888) aid_area_touch_clock_ParamLimits

0x87b8,	// (0x000629b6) bg_uniindi_top_pane_ParamLimits

0x669e,	// (0x0006089c) uniindi_top_pane_g1_ParamLimits

0x66b4,	// (0x000608b2) uniindi_top_pane_g2_ParamLimits

0x66c0,	// (0x000608be) uniindi_top_pane_g3_ParamLimits

0x66d1,	// (0x000608cf) uniindi_top_pane_g4_ParamLimits

0xfd49,	// (0x00069f47) uniindi_top_pane_g_ParamLimits

0x66de,	// (0x000608dc) uniindi_top_pane_t1_ParamLimits

0x87b8,	// (0x000629b6) bg_vkb2_func_pane_cp01_ParamLimits

0x87b8,	// (0x000629b6) bg_vkb2_func_pane_cp01

0x71f8,	// (0x000613f6) cel_fep_hwr_func_pane_g1_ParamLimits

0x71f8,	// (0x000613f6) cel_fep_hwr_func_pane_g1

0x87b8,	// (0x000629b6) bg_vkb2_func_pane_cp02_ParamLimits

0x87b8,	// (0x000629b6) bg_vkb2_func_pane_cp02

0x71f8,	// (0x000613f6) cell_hwr_side_button_pane_g1_ParamLimits

0x71f8,	// (0x000613f6) cell_hwr_side_button_pane_g1

0x22de,	// (0x0005c4dc) status_pane_g4_ParamLimits

0x22de,	// (0x0005c4dc) status_pane_g4

0x22f8,	// (0x0005c4f6) status_pane_t1

0x49c5,	// (0x0005ebc3) form2_midp_gauge_slider_cont_pane

0x49cd,	// (0x0005ebcb) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb5e,	// (0x00066d5c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb70,	// (0x00066d6e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00069d07) form2_midp_gauge_slider_pane_t_ParamLimits

0x4a03,	// (0x0005ec01) form2_midp_slider_pane_ParamLimits

0x0f6b,	// (0x0005b169) aid_size_cell_func_vkb2_ParamLimits

0x0f6b,	// (0x0005b169) aid_size_cell_func_vkb2

0x7195,	// (0x00061393) slider_pane_g4_ParamLimits

0x7195,	// (0x00061393) slider_pane_g4

0xbf1b,	// (0x00066119) form2_midp_gauge_slider_pane_t2_cp01

0xbf29,	// (0x00066127) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbf29,	// (0x00066127) form2_midp_gauge_slider_pane_t3_cp01

0x16a9,	// (0x0005b8a7) form2_midp_slider_pane_cp01

0x55b1,	// (0x0005f7af) navi_smil_pane

0x7231,	// (0x0006142f) navi_smil_pane_g1

0x7239,	// (0x00061437) navi_smil_pane_t1

0x7206,	// (0x00061404) form2_midp_slider_pane_g1

0x720f,	// (0x0006140d) form2_midp_slider_pane_g2

0x7217,	// (0x00061415) form2_midp_slider_pane_g3

0x7206,	// (0x00061404) form2_midp_slider_pane_g4

0xdd69,	// (0x00067f67) form2_midp_slider_pane_g5

0x0004,

0xfe3f,	// (0x0006a03d) form2_midp_slider_pane_g

0x166e,	// (0x0005b86c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x166e,	// (0x0005b86c) vkb2_area_bottom_space_btn_pane_g4

0xb645,	// (0x00065843) lc0_navi_pane_ParamLimits

0xb645,	// (0x00065843) lc0_navi_pane

0xb6b5,	// (0x000658b3) lc0_stat_indi_pane_ParamLimits

0xb6b5,	// (0x000658b3) lc0_stat_indi_pane

0xb6ca,	// (0x000658c8) ls0_title_pane_ParamLimits

0xb6ca,	// (0x000658c8) ls0_title_pane

0x8c9a,	// (0x00062e98) bg_popup_sub_pane_cp14_ParamLimits

0x6671,	// (0x0006086f) list_uniindi_pane_ParamLimits

0x667d,	// (0x0006087b) uniindi_top_pane_ParamLimits

0x671c,	// (0x0006091a) list_single_uniindi_pane_g1_ParamLimits

0x672f,	// (0x0006092d) list_single_uniindi_pane_t1_ParamLimits

0xbf46,	// (0x00066144) lc0_stat_clock_pane_ParamLimits

0xbf46,	// (0x00066144) lc0_stat_clock_pane

0xdd72,	// (0x00067f70) lc0_stat_indi_pane_g1_ParamLimits

0xdd72,	// (0x00067f70) lc0_stat_indi_pane_g1

0xdd7f,	// (0x00067f7d) lc0_stat_indi_pane_g2_ParamLimits

0xdd7f,	// (0x00067f7d) lc0_stat_indi_pane_g2

0x0001,

0xfe4a,	// (0x0006a048) lc0_stat_indi_pane_g_ParamLimits

0xfe4a,	// (0x0006a048) lc0_stat_indi_pane_g

0xbf53,	// (0x00066151) lc0_uni_indicator_pane_ParamLimits

0xbf53,	// (0x00066151) lc0_uni_indicator_pane

0xdd8c,	// (0x00067f8a) ls0_title_pane_g1_ParamLimits

0xdd8c,	// (0x00067f8a) ls0_title_pane_g1

0xdda0,	// (0x00067f9e) ls0_title_pane_t1_ParamLimits

0xdda0,	// (0x00067f9e) ls0_title_pane_t1

0xbf60,	// (0x0006615e) lc0_uni_indicator_pane_g1_ParamLimits

0xbf60,	// (0x0006615e) lc0_uni_indicator_pane_g1

0x72ab,	// (0x000614a9) lc0_stat_clock_pane_t1

0x55b1,	// (0x0005f7af) main_ai5_pane

0x72b9,	// (0x000614b7) ai5_sk_pane_ParamLimits

0x72b9,	// (0x000614b7) ai5_sk_pane

0xddce,	// (0x00067fcc) cell_ai5_widget_pane_ParamLimits

0xddce,	// (0x00067fcc) cell_ai5_widget_pane

0x78a4,	// (0x00061aa2) aid_size_cell_widget_grid

0x78b2,	// (0x00061ab0) bg_ai5_widget_pane_ParamLimits

0x78b2,	// (0x00061ab0) bg_ai5_widget_pane

0x7926,	// (0x00061b24) cell_ai5_widget_pane_g2

0x7936,	// (0x00061b34) cell_ai5_widget_pane_g3

0x794d,	// (0x00061b4b) cell_ai5_widget_pane_g4

0x7959,	// (0x00061b57) cell_ai5_widget_pane_g5

0xec5e,	// (0x00068e5c) cell_ai5_widget_pane_g6

0xec6a,	// (0x00068e68) cell_ai5_widget_pane_g7

0x79b9,	// (0x00061bb7) cell_ai5_widget_pane_t1_ParamLimits

0x79b9,	// (0x00061bb7) cell_ai5_widget_pane_t1

0x79d6,	// (0x00061bd4) cell_ai5_widget_pane_t2_ParamLimits

0x79d6,	// (0x00061bd4) cell_ai5_widget_pane_t2

0x79ee,	// (0x00061bec) cell_ai5_widget_pane_t3_ParamLimits

0x79ee,	// (0x00061bec) cell_ai5_widget_pane_t3

0x7a06,	// (0x00061c04) cell_ai5_widget_pane_t4_ParamLimits

0x7a06,	// (0x00061c04) cell_ai5_widget_pane_t4

0x7a23,	// (0x00061c21) cell_ai5_widget_pane_t5_ParamLimits

0x7a23,	// (0x00061c21) cell_ai5_widget_pane_t5

0x7a42,	// (0x00061c40) cell_ai5_widget_pane_t6_ParamLimits

0x7a42,	// (0x00061c40) cell_ai5_widget_pane_t6

0x7a54,	// (0x00061c52) cell_ai5_widget_pane_t7_ParamLimits

0x7a54,	// (0x00061c52) cell_ai5_widget_pane_t7

0x7a6d,	// (0x00061c6b) cell_ai5_widget_pane_t8_ParamLimits

0x7a6d,	// (0x00061c6b) cell_ai5_widget_pane_t8

0x0009,

0xfe64,	// (0x0006a062) cell_ai5_widget_pane_t_ParamLimits

0xfe64,	// (0x0006a062) cell_ai5_widget_pane_t

0x7ac1,	// (0x00061cbf) grid_ai5_widget_pane

0x8c9a,	// (0x00062e98) highlight_cell_ai5_widget_pane_ParamLimits

0x8c9a,	// (0x00062e98) highlight_cell_ai5_widget_pane

0xec76,	// (0x00068e74) ai5_sk_left_pane

0xec80,	// (0x00068e7e) ai5_sk_middle_pane

0xec8a,	// (0x00068e88) ai5_sk_right_pane

0x7af3,	// (0x00061cf1) bg_ai5_widget_pane_g1_ParamLimits

0x7af3,	// (0x00061cf1) bg_ai5_widget_pane_g1

0x7aff,	// (0x00061cfd) bg_ai5_widget_pane_g2_ParamLimits

0x7aff,	// (0x00061cfd) bg_ai5_widget_pane_g2

0x7b0b,	// (0x00061d09) bg_ai5_widget_pane_g3_ParamLimits

0x7b0b,	// (0x00061d09) bg_ai5_widget_pane_g3

0x7b17,	// (0x00061d15) bg_ai5_widget_pane_g4_ParamLimits

0x7b17,	// (0x00061d15) bg_ai5_widget_pane_g4

0x7b23,	// (0x00061d21) bg_ai5_widget_pane_g5_ParamLimits

0x7b23,	// (0x00061d21) bg_ai5_widget_pane_g5

0x7b2f,	// (0x00061d2d) bg_ai5_widget_pane_g6_ParamLimits

0x7b2f,	// (0x00061d2d) bg_ai5_widget_pane_g6

0x7b3b,	// (0x00061d39) bg_ai5_widget_pane_g7_ParamLimits

0x7b3b,	// (0x00061d39) bg_ai5_widget_pane_g7

0x7b47,	// (0x00061d45) bg_ai5_widget_pane_g8_ParamLimits

0x7b47,	// (0x00061d45) bg_ai5_widget_pane_g8

0x7b53,	// (0x00061d51) bg_ai5_widget_pane_g9_ParamLimits

0x7b53,	// (0x00061d51) bg_ai5_widget_pane_g9

0x0008,

0xfe79,	// (0x0006a077) bg_ai5_widget_pane_g_ParamLimits

0xfe79,	// (0x0006a077) bg_ai5_widget_pane_g

0x7b89,	// (0x00061d87) cell_shortcut_ai5_widget_pane_ParamLimits

0x7b89,	// (0x00061d87) cell_shortcut_ai5_widget_pane

0xe6a3,	// (0x000688a1) bg_cell_shortcut_ai5_widget_pane

0x7b9c,	// (0x00061d9a) cell_grid_ai5_widget_pane_g1

0x7ba5,	// (0x00061da3) highlight_cell_shortcut_ai5_widget_pane

0x2465,	// (0x0005c663) ai5_sk_left_pane_g1

0x7bad,	// (0x00061dab) ai5_sk_left_pane_g2

0x7bb5,	// (0x00061db3) ai5_sk_left_pane_g3

0x7bbd,	// (0x00061dbb) ai5_sk_left_pane_g4

0x0003,

0xfe8c,	// (0x0006a08a) ai5_sk_left_pane_g

0x7bc5,	// (0x00061dc3) ai5_sk_left_pane_t1

0x246d,	// (0x0005c66b) ai5_sk_right_pane_g1

0x7bd3,	// (0x00061dd1) ai5_sk_right_pane_g2

0x7bdb,	// (0x00061dd9) ai5_sk_right_pane_g3

0x7be3,	// (0x00061de1) ai5_sk_right_pane_g4

0x0003,

0xfe95,	// (0x0006a093) ai5_sk_right_pane_g

0x7beb,	// (0x00061de9) ai5_sk_right_pane_t1

0x246d,	// (0x0005c66b) ai5_sk_middle_pane_g1

0x2465,	// (0x0005c663) ai5_sk_middle_pane_g2

0x2485,	// (0x0005c683) ai5_sk_middle_pane_g3

0x7bdb,	// (0x00061dd9) ai5_sk_middle_pane_g4

0x7bb5,	// (0x00061db3) ai5_sk_middle_pane_g5

0x7bf9,	// (0x00061df7) ai5_sk_middle_pane_g6

0xec94,	// (0x00068e92) ai5_sk_middle_pane_g7

0x0006,

0xfe9e,	// (0x0006a09c) ai5_sk_middle_pane_g

0xb52f,	// (0x0006572d) aid_touch_area_size_lc0_ParamLimits

0xb52f,	// (0x0006572d) aid_touch_area_size_lc0

0x0bfb,	// (0x0005adf9) cell_hwr_candidate_pane_t1_ParamLimits

0x1f95,	// (0x0005c193) aid_touch_navi_pane

0xc2a0,	// (0x0006649e) status_dt_navi_pane_ParamLimits

0xc2a0,	// (0x0006649e) status_dt_navi_pane

0xc2b8,	// (0x000664b6) status_dt_sta_pane_ParamLimits

0xc2b8,	// (0x000664b6) status_dt_sta_pane

0xec9c,	// (0x00068e9a) dt_sta_controll_pane

0xeca9,	// (0x00068ea7) dt_sta_indi_pane

0xecb6,	// (0x00068eb4) dt_sta_title_pane

0x87b8,	// (0x000629b6) bg_dt_sta_indi_pane_ParamLimits

0x87b8,	// (0x000629b6) bg_dt_sta_indi_pane

0xecc8,	// (0x00068ec6) dt_sta_battery_pane

0xecd0,	// (0x00068ece) dt_sta_indi_pane_g1

0xecd9,	// (0x00068ed7) dt_sta_indi_pane_g2

0xece2,	// (0x00068ee0) dt_sta_indi_pane_g3

0x0002,

0xfead,	// (0x0006a0ab) dt_sta_indi_pane_g

0xeceb,	// (0x00068ee9) dt_sta_signal_pane

0x8c9a,	// (0x00062e98) bg_dt_sta_title_pane_ParamLimits

0x8c9a,	// (0x00062e98) bg_dt_sta_title_pane

0xecf4,	// (0x00068ef2) dt_sta_title_pane_g1

0xecfc,	// (0x00068efa) dt_sta_title_pane_t1_ParamLimits

0xecfc,	// (0x00068efa) dt_sta_title_pane_t1

0x55b1,	// (0x0005f7af) bg_dt_sta_control_pane

0xed11,	// (0x00068f0f) dt_sta_controll_pane_g1

0xed1a,	// (0x00068f18) bg_dt_sta_title_pane_g1

0xed23,	// (0x00068f21) bg_dt_sta_title_pane_g2

0xed2c,	// (0x00068f2a) bg_dt_sta_title_pane_g3

0x0002,

0xfeb4,	// (0x0006a0b2) bg_dt_sta_title_pane_g

0x4c26,	// (0x0005ee24) bg_dt_sta_indi_pane_g1

0x7ca7,	// (0x00061ea5) dt_sta_signal_pane_g1

0x7caf,	// (0x00061ead) dt_sta_signal_pane_g2

0x0001,

0xfebb,	// (0x0006a0b9) dt_sta_signal_pane_g

0x7cb7,	// (0x00061eb5) dt_sta_battery_pane_g1

0x7cc0,	// (0x00061ebe) dt_sta_battery_pane_t1

0x4c26,	// (0x0005ee24) bg_dt_sta_control_pane_g1

0xc0f1,	// (0x000662ef) fep_china_uni_eep_pane

0xc0f9,	// (0x000662f7) fep_china_uni_entry_pane_ParamLimits

0xc109,	// (0x00066307) popup_fep_china_uni_window_g1_ParamLimits

0xc119,	// (0x00066317) popup_fep_china_uni_window_g2_ParamLimits

0xc119,	// (0x00066317) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x00069926) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x00069926) popup_fep_china_uni_window_g

0x7ccf,	// (0x00061ecd) fep_china_uni_eep_pane_g1

0x7cd7,	// (0x00061ed5) fep_china_uni_eep_pane_t1

0x7228,	// (0x00061426) aid_touch_area_size_smil_player

0x20ed,	// (0x0005c2eb) lc0_clock_pane

0x22ec,	// (0x0005c4ea) status_pane_g5_ParamLimits

0x22ec,	// (0x0005c4ea) status_pane_g5

0xaf84,	// (0x00065182) popup_keymap_window

0x22aa,	// (0x0005c4a8) status_icon_pane

0x7936,	// (0x00061b34) cell_ai5_widget_pane_g3_ParamLimits

0x794d,	// (0x00061b4b) cell_ai5_widget_pane_g4_ParamLimits

0x7959,	// (0x00061b57) cell_ai5_widget_pane_g5_ParamLimits

0x797d,	// (0x00061b7b) cell_ai5_widget_pane_g8_ParamLimits

0x797d,	// (0x00061b7b) cell_ai5_widget_pane_g8

0x7991,	// (0x00061b8f) cell_ai5_widget_pane_g9_ParamLimits

0x7991,	// (0x00061b8f) cell_ai5_widget_pane_g9

0x79a5,	// (0x00061ba3) cell_ai5_widget_pane_g10_ParamLimits

0x79a5,	// (0x00061ba3) cell_ai5_widget_pane_g10

0x7ce6,	// (0x00061ee4) status_icon_pane_g1

0x55b1,	// (0x0005f7af) bg_popup_sub_pane_cp13

0x7cee,	// (0x00061eec) popup_keymap_window_t1

0xac65,	// (0x00064e63) control_pane_g6_ParamLimits

0xac65,	// (0x00064e63) control_pane_g6

0xac72,	// (0x00064e70) control_pane_g7_ParamLimits

0xac72,	// (0x00064e70) control_pane_g7

0xac7f,	// (0x00064e7d) control_pane_g8_ParamLimits

0xac7f,	// (0x00064e7d) control_pane_g8

0xec9c,	// (0x00068e9a) dt_sta_controll_pane_ParamLimits

0xeca9,	// (0x00068ea7) dt_sta_indi_pane_ParamLimits

0xecb6,	// (0x00068eb4) dt_sta_title_pane_ParamLimits

0x8bdc,	// (0x00062dda) aid_size_touch_scroll_bar_cale

0xf0a7,	// (0x000692a5) popup_discreet_window_ParamLimits

0xf0a7,	// (0x000692a5) popup_discreet_window

0x9c93,	// (0x00063e91) popup_sk_window

0x2aad,	// (0x0005ccab) bg_popup_sub_pane_cp28_ParamLimits

0x2aad,	// (0x0005ccab) bg_popup_sub_pane_cp28

0x7cfc,	// (0x00061efa) popup_discreet_window_g1_ParamLimits

0x7cfc,	// (0x00061efa) popup_discreet_window_g1

0x7d1c,	// (0x00061f1a) popup_discreet_window_t1_ParamLimits

0x7d1c,	// (0x00061f1a) popup_discreet_window_t1

0x7d3a,	// (0x00061f38) popup_discreet_window_t2_ParamLimits

0x7d3a,	// (0x00061f38) popup_discreet_window_t2

0x0002,

0xfec0,	// (0x0006a0be) popup_discreet_window_t_ParamLimits

0xfec0,	// (0x0006a0be) popup_discreet_window_t

0x16df,	// (0x0005b8dd) popup_sk_window_g1

0x16e9,	// (0x0005b8e7) popup_sk_window_g2

0x0001,

0xfec7,	// (0x0006a0c5) popup_sk_window_g

0x16f3,	// (0x0005b8f1) popup_sk_window_t1

0x1703,	// (0x0005b901) popup_sk_window_t1_copy1

0x7926,	// (0x00061b24) cell_ai5_widget_pane_g2_ParamLimits

0x7a7f,	// (0x00061c7d) cell_ai5_widget_pane_t9_ParamLimits

0x7a7f,	// (0x00061c7d) cell_ai5_widget_pane_t9

0x55b1,	// (0x0005f7af) main_fep_fshwr2_pane

0xbf7f,	// (0x0006617d) aid_fshwr2_btn_pane

0xbf90,	// (0x0006618e) aid_fshwr2_syb_pane

0xbfa1,	// (0x0006619f) aid_fshwr2_txt_pane

0xbfad,	// (0x000661ab) fshwr2_func_candi_pane

0xbfce,	// (0x000661cc) fshwr2_hwr_syb_pane

0xbfeb,	// (0x000661e9) fshwr2_icf_pane

0x55b1,	// (0x0005f7af) fshwr2_icf_bg_pane

0x7d8c,	// (0x00061f8a) fshwr2_icf_pane_t1_ParamLimits

0x7d8c,	// (0x00061f8a) fshwr2_icf_pane_t1

0xc06f,	// (0x0006626d) fshwr2_func_candi_pane_g1

0xed35,	// (0x00068f33) fshwr2_func_candi_row_pane_ParamLimits

0xed35,	// (0x00068f33) fshwr2_func_candi_row_pane

0xed45,	// (0x00068f43) cell_fshwr2_syb_pane_ParamLimits

0xed45,	// (0x00068f43) cell_fshwr2_syb_pane

0x4ea1,	// (0x0005f09f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4ea1,	// (0x0005f09f) fshwr2_hwr_syb_pane_g1

0x55b1,	// (0x0005f7af) bg_popup_call_pane_cp01

0xed5f,	// (0x00068f5d) fshwr2_func_candi_cell_pane_ParamLimits

0xed5f,	// (0x00068f5d) fshwr2_func_candi_cell_pane

0x7df6,	// (0x00061ff4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7df6,	// (0x00061ff4) fshwr2_func_candi_cell_bg_pane

0xed87,	// (0x00068f85) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed87,	// (0x00068f85) fshwr2_func_candi_cell_pane_g1

0x7e22,	// (0x00062020) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7e22,	// (0x00062020) fshwr2_func_candi_cell_pane_t1

0x55b1,	// (0x0005f7af) bg_button_pane_cp08

0xe6a3,	// (0x000688a1) cell_fshwr2_syb_bg_pane

0xeda7,	// (0x00068fa5) cell_fshwr2_syb_bg_pane_g1

0xedaf,	// (0x00068fad) cell_fshwr2_syb_bg_pane_t1

0x8c9a,	// (0x00062e98) main_tmo_pane

0xc66b,	// (0x00066869) uni_indicator_pane_g1_ParamLimits

0xc682,	// (0x00066880) uni_indicator_pane_g2_ParamLimits

0xc698,	// (0x00066896) uni_indicator_pane_g3_ParamLimits

0xc6ad,	// (0x000668ab) uni_indicator_pane_g4_ParamLimits

0xc6ad,	// (0x000668ab) uni_indicator_pane_g4

0x37c7,	// (0x0005d9c5) uni_indicator_pane_g5_ParamLimits

0x37c7,	// (0x0005d9c5) uni_indicator_pane_g5

0x37c7,	// (0x0005d9c5) uni_indicator_pane_g6_ParamLimits

0x37c7,	// (0x0005d9c5) uni_indicator_pane_g6

0xf927,	// (0x00069b25) uni_indicator_pane_g_ParamLimits

0xd220,	// (0x0006741e) popup_tmo_note_window_ParamLimits

0xd220,	// (0x0006741e) popup_tmo_note_window

0x0f4d,	// (0x0005b14b) fshwr2_bg_pane

0xed98,	// (0x00068f96) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed98,	// (0x00068f96) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecc,	// (0x0006a0ca) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecc,	// (0x0006a0ca) fshwr2_func_candi_cell_pane_g

0x4c26,	// (0x0005ee24) bg_popup_window_pane_cp01

0x7e4c,	// (0x0006204a) bg_popup_window_pane_g1_cp01

0x7e55,	// (0x00062053) bg_popup_window_pane_cp22_ParamLimits

0x7e55,	// (0x00062053) bg_popup_window_pane_cp22

0x7e63,	// (0x00062061) listscroll_tmo_link_pane_ParamLimits

0x7e63,	// (0x00062061) listscroll_tmo_link_pane

0x7ea3,	// (0x000620a1) popup_tmo_note_window_g1_ParamLimits

0x7ea3,	// (0x000620a1) popup_tmo_note_window_g1

0x7eb0,	// (0x000620ae) tmo_note_info_pane_ParamLimits

0x7eb0,	// (0x000620ae) tmo_note_info_pane

0xedbe,	// (0x00068fbc) list_tmo_note_info_pane_g1_ParamLimits

0xedbe,	// (0x00068fbc) list_tmo_note_info_pane_g1

0x7ee1,	// (0x000620df) list_tmo_note_info_pane_g2_ParamLimits

0x7ee1,	// (0x000620df) list_tmo_note_info_pane_g2

0x0001,

0xfed1,	// (0x0006a0cf) list_tmo_note_info_pane_g_ParamLimits

0xfed1,	// (0x0006a0cf) list_tmo_note_info_pane_g

0x7efd,	// (0x000620fb) list_tmo_note_info_text_pane_ParamLimits

0x7efd,	// (0x000620fb) list_tmo_note_info_text_pane

0x7f82,	// (0x00062180) list_tmo_link_pane

0x7f8f,	// (0x0006218d) scroll_pane_cp20

0x7f9c,	// (0x0006219a) list_single_tmo_link_pane_ParamLimits

0x7f9c,	// (0x0006219a) list_single_tmo_link_pane

0x7fac,	// (0x000621aa) list_single_tmo_link_pane_t1

0x7fba,	// (0x000621b8) list_tmo_note_info_text_pane_t1_ParamLimits

0x7fba,	// (0x000621b8) list_tmo_note_info_text_pane_t1

0xa74c,	// (0x0006494a) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa74c,	// (0x0006494a) aid_size_touch_scroll_bar_cp01

0xa67b,	// (0x00064879) aid_size_touch_slider_marker

0x9c83,	// (0x00063e81) popup_settings_window_ParamLimits

0x9c83,	// (0x00063e81) popup_settings_window

0xe6f7,	// (0x000688f5) popup_candi_list_indi_window

0x1f95,	// (0x0005c193) aid_touch_navi_pane_ParamLimits

0x0ea6,	// (0x0005b0a4) rs_clock_indi_pane

0x0eaf,	// (0x0005b0ad) sctrl_sk_bottom_pane_ParamLimits

0x0ec0,	// (0x0005b0be) sctrl_sk_top_pane_ParamLimits

0x0fc5,	// (0x0005b1c3) popup_fep_tooltip_window

0x78a4,	// (0x00061aa2) aid_size_cell_widget_grid_ParamLimits

0x7911,	// (0x00061b0f) cell_ai5_widget_pane_g1_ParamLimits

0x7911,	// (0x00061b0f) cell_ai5_widget_pane_g1

0xec5e,	// (0x00068e5c) cell_ai5_widget_pane_g6_ParamLimits

0xec6a,	// (0x00068e68) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4f,	// (0x0006a04d) cell_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0006a04d) cell_ai5_widget_pane_g

0x7aa3,	// (0x00061ca1) cell_ai5_widget_pane_t10_ParamLimits

0x7aa3,	// (0x00061ca1) cell_ai5_widget_pane_t10

0x7ac1,	// (0x00061cbf) grid_ai5_widget_pane_ParamLimits

0x7b5f,	// (0x00061d5d) cell_contacts_ai5_widget_pane_ParamLimits

0x7b5f,	// (0x00061d5d) cell_contacts_ai5_widget_pane

0x7d4f,	// (0x00061f4d) popup_discreet_window_t3_ParamLimits

0x7d4f,	// (0x00061f4d) popup_discreet_window_t3

0xc003,	// (0x00066201) popup_fshwr2_char_preview_window_ParamLimits

0xc003,	// (0x00066201) popup_fshwr2_char_preview_window

0xedd5,	// (0x00068fd3) tmo_note_info_pane_t1

0xedea,	// (0x00068fe8) tmo_note_info_pane_t2

0xee03,	// (0x00069001) tmo_note_info_pane_t3

0x7f5e,	// (0x0006215c) tmo_note_info_pane_t4

0x7f70,	// (0x0006216e) tmo_note_info_pane_t5

0x0004,

0xfed6,	// (0x0006a0d4) tmo_note_info_pane_t

0x7f82,	// (0x00062180) list_tmo_link_pane_ParamLimits

0x7f8f,	// (0x0006218d) scroll_pane_cp20_ParamLimits

0x55b1,	// (0x0005f7af) bg_popup_fep_char_preview_window_cp01

0x7fd3,	// (0x000621d1) popup_fshwr2_char_preview_window_t1

0x7fe1,	// (0x000621df) popup_candi_list_indi_window_g1

0x7fea,	// (0x000621e8) bg_cell_contacts_ai5_widget_pane

0x7ff6,	// (0x000621f4) cell_contacts_ai5_widget_pane_g1

0x800a,	// (0x00062208) cell_contacts_ai5_widget_pane_g2

0x8016,	// (0x00062214) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee1,	// (0x0006a0df) cell_contacts_ai5_widget_pane_g

0x8029,	// (0x00062227) cell_contacts_ai5_widget_pane_t1

0x8c9a,	// (0x00062e98) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee7d,	// (0x0006907b) settings_container_pane

0xe6a3,	// (0x000688a1) listscroll_set_pane_copy1

0x4341,	// (0x0005e53f) scroll_pane_cp121_copy1

0x80af,	// (0x000622ad) set_content_pane_copy1

0xee89,	// (0x00069087) aid_height_set_list_copy1_ParamLimits

0xee89,	// (0x00069087) aid_height_set_list_copy1

0x39c7,	// (0x0005dbc5) aid_size_parent_copy1_ParamLimits

0x39c7,	// (0x0005dbc5) aid_size_parent_copy1

0xee95,	// (0x00069093) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee95,	// (0x00069093) button_value_adjust_pane_cp6_copy1

0x191c,	// (0x0005bb1a) list_highlight_pane_cp2_copy1_ParamLimits

0x191c,	// (0x0005bb1a) list_highlight_pane_cp2_copy1

0xeea9,	// (0x000690a7) list_set_pane_copy1_ParamLimits

0xeea9,	// (0x000690a7) list_set_pane_copy1

0xee18,	// (0x00069016) main_pane_set_t1_copy1_ParamLimits

0xee18,	// (0x00069016) main_pane_set_t1_copy1

0xee52,	// (0x00069050) main_pane_set_t2_copy1_ParamLimits

0xee52,	// (0x00069050) main_pane_set_t2_copy1

0xef70,	// (0x0006916e) main_pane_set_t3_copy1

0xef7e,	// (0x0006917c) main_pane_set_t4_copy1

0xee71,	// (0x0006906f) set_content_pane_g1_copy1_ParamLimits

0xee71,	// (0x0006906f) set_content_pane_g1_copy1

0xef8c,	// (0x0006918a) setting_code_pane_copy1

0x81c2,	// (0x000623c0) setting_slider_graphic_pane_copy1

0x81c2,	// (0x000623c0) setting_slider_pane_copy1

0x81c2,	// (0x000623c0) setting_text_pane_copy1

0x81c2,	// (0x000623c0) setting_volume_pane_copy1

0xef8c,	// (0x0006918a) settings_code_pane_cp2_copy1

0xef94,	// (0x00069192) settings_code_pane_cp_copy1_ParamLimits

0xef94,	// (0x00069192) settings_code_pane_cp_copy1

0xc01b,	// (0x00066219) volume_set_pane_copy1

0xefa8,	// (0x000691a6) volume_set_pane_g10_copy1

0xefb4,	// (0x000691b2) volume_set_pane_g1_copy1

0xefbe,	// (0x000691bc) volume_set_pane_g2_copy1

0xefc8,	// (0x000691c6) volume_set_pane_g3_copy1

0xefd2,	// (0x000691d0) volume_set_pane_g4_copy1

0xefdc,	// (0x000691da) volume_set_pane_g5_copy1

0xefe6,	// (0x000691e4) volume_set_pane_g6_copy1

0xeff0,	// (0x000691ee) volume_set_pane_g7_copy1

0xeffa,	// (0x000691f8) volume_set_pane_g8_copy1

0xf004,	// (0x00069202) volume_set_pane_g9_copy1

0x561f,	// (0x0005f81d) bg_set_opt_pane_cp_copy1_ParamLimits

0x561f,	// (0x0005f81d) bg_set_opt_pane_cp_copy1

0x179a,	// (0x0005b998) setting_slider_pane_t1_copy1_ParamLimits

0x179a,	// (0x0005b998) setting_slider_pane_t1_copy1

0xc027,	// (0x00066225) setting_slider_pane_t2_copy1_ParamLimits

0xc027,	// (0x00066225) setting_slider_pane_t2_copy1

0xc041,	// (0x0006623f) setting_slider_pane_t3_copy1_ParamLimits

0xc041,	// (0x0006623f) setting_slider_pane_t3_copy1

0xc059,	// (0x00066257) slider_set_pane_copy1_ParamLimits

0xc059,	// (0x00066257) slider_set_pane_copy1

0x8cf5,	// (0x00062ef3) set_opt_bg_pane_g1_copy2

0x8cfd,	// (0x00062efb) set_opt_bg_pane_g2_copy2

0x8244,	// (0x00062442) set_opt_bg_pane_g3_copy2

0x8d0d,	// (0x00062f0b) set_opt_bg_pane_g4_copy2

0x8d15,	// (0x00062f13) set_opt_bg_pane_g5_copy2

0x8d1d,	// (0x00062f1b) set_opt_bg_pane_g6_copy2

0xf00e,	// (0x0006920c) set_opt_bg_pane_g7_copy2

0x8258,	// (0x00062456) set_opt_bg_pane_g8_copy2

0x8262,	// (0x00062460) set_opt_bg_pane_g9_copy2

0x826c,	// (0x0006246a) aid_size_touch_slider_mark_copy1_ParamLimits

0x826c,	// (0x0006246a) aid_size_touch_slider_mark_copy1

0x8280,	// (0x0006247e) slider_set_pane_g1_copy1

0x8289,	// (0x00062487) slider_set_pane_g2_copy1

0x7858,	// (0x00061a56) slider_set_pane_g3_copy1_ParamLimits

0x7858,	// (0x00061a56) slider_set_pane_g3_copy1

0x786c,	// (0x00061a6a) slider_set_pane_g4_copy1_ParamLimits

0x786c,	// (0x00061a6a) slider_set_pane_g4_copy1

0x7884,	// (0x00061a82) slider_set_pane_g5_copy1_ParamLimits

0x7884,	// (0x00061a82) slider_set_pane_g5_copy1

0x7858,	// (0x00061a56) slider_set_pane_g6_copy1_ParamLimits

0x7858,	// (0x00061a56) slider_set_pane_g6_copy1

0xf018,	// (0x00069216) slider_set_pane_g7_copy1_ParamLimits

0xf018,	// (0x00069216) slider_set_pane_g7_copy1

0x55c5,	// (0x0005f7c3) bg_set_opt_pane_cp2_copy1

0x82a7,	// (0x000624a5) setting_slider_graphic_pane_g1_copy1

0xf02e,	// (0x0006922c) setting_slider_graphic_pane_t1_copy1

0xf03e,	// (0x0006923c) setting_slider_graphic_pane_t2_copy1

0xf04e,	// (0x0006924c) slider_set_pane_cp_copy1

0x82e0,	// (0x000624de) input_focus_pane_cp1_copy1

0x82e9,	// (0x000624e7) list_set_text_pane_copy1

0x82f1,	// (0x000624ef) setting_text_pane_g1_copy1

0xe294,	// (0x00068492) set_text_pane_t1_copy1

0x82e0,	// (0x000624de) input_focus_pane_cp2_copy1

0x82f1,	// (0x000624ef) setting_code_pane_g1_copy1

0xf056,	// (0x00069254) setting_code_pane_t1_copy1

0xf064,	// (0x00069262) list_set_graphic_pane_copy1

0x55c5,	// (0x0005f7c3) bg_set_opt_pane_cp4_copy1

0xaa9a,	// (0x00064c98) list_set_graphic_pane_g1_copy1_ParamLimits

0xaa9a,	// (0x00064c98) list_set_graphic_pane_g1_copy1

0xf076,	// (0x00069274) list_set_graphic_pane_g2_copy1

0xaab2,	// (0x00064cb0) list_set_graphic_pane_t1_copy1_ParamLimits

0xaab2,	// (0x00064cb0) list_set_graphic_pane_t1_copy1

0x4c26,	// (0x0005ee24) rs_clock_indi_pane_g1

0x8322,	// (0x00062520) rs_clock_indi_pane_t1

0x8330,	// (0x0006252e) rs_indi_pane

0x8338,	// (0x00062536) rs_indi_pane_g1

0x8341,	// (0x0006253f) rs_indi_pane_g2

0x834a,	// (0x00062548) rs_indi_pane_g3

0x0002,

0xfee8,	// (0x0006a0e6) rs_indi_pane_g

0xe6a3,	// (0x000688a1) bg_popup_preview_window_pane_cp03

0x8353,	// (0x00062551) popup_fep_tooltip_window_t1

0x59ef,	// (0x0005fbed) popup_note2_window_g2_ParamLimits

0x59ef,	// (0x0005fbed) popup_note2_window_g2

0x0001,

0xfc81,	// (0x00069e7f) popup_note2_window_g_ParamLimits

0xfc81,	// (0x00069e7f) popup_note2_window_g

0x5ef7,	// (0x000600f5) bg_popup_sub_pane_cp11_ParamLimits

0x5f04,	// (0x00060102) cell_ai3_links_pane_g1_ParamLimits

0x5f1b,	// (0x00060119) cell_ai3_links_pane_t1

0xe294,	// (0x00068492) set_text_pane_t1_copy1_ParamLimits

0xab26,	// (0x00064d24) cell_graphic_popup_pane_cp2_ParamLimits

0xab26,	// (0x00064d24) cell_graphic_popup_pane_cp2

0xf07e,	// (0x0006927c) cell_graphic_popup_pane_g1_cp2

0x89ef,	// (0x00062bed) cell_graphic_popup_pane_g2_cp2

0x8369,	// (0x00062567) cell_graphic_popup_pane_g3_cp2

0x8371,	// (0x0006256f) cell_graphic_popup_pane_t2_cp2

0x8a00,	// (0x00062bfe) grid_highlight_pane_cp3_cp2

0x8f9e,	// (0x0006319c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8c9a,	// (0x00062e98) main_tmo_pane_ParamLimits

0xd214,	// (0x00067412) popup_tmo_big_image_note_window

0x7900,	// (0x00061afe) cell_ai5_widget_list_pane

0x7908,	// (0x00061b06) cell_ai5_widget_lrg_icon_pane

0xedd5,	// (0x00068fd3) tmo_note_info_pane_t1_ParamLimits

0xedea,	// (0x00068fe8) tmo_note_info_pane_t2_ParamLimits

0xee03,	// (0x00069001) tmo_note_info_pane_t3_ParamLimits

0x7f5e,	// (0x0006215c) tmo_note_info_pane_t4_ParamLimits

0x7f70,	// (0x0006216e) tmo_note_info_pane_t5_ParamLimits

0xfed6,	// (0x0006a0d4) tmo_note_info_pane_t_ParamLimits

0xee7d,	// (0x0006907b) settings_container_pane_ParamLimits

0x82d8,	// (0x000624d6) indicator_popup_pane_cp5

0x82d8,	// (0x000624d6) indicator_popup_pane_cp6

0xf064,	// (0x00069262) list_set_graphic_pane_copy1_ParamLimits

0x55b1,	// (0x0005f7af) bg_popup_window_pane_cp23

0x837f,	// (0x0006257d) popup_tmo_big_image_note_window_g1

0x838b,	// (0x00062589) popup_tmo_big_image_note_window_t1

0x839b,	// (0x00062599) popup_tmo_big_image_note_window_t2

0x83ab,	// (0x000625a9) popup_tmo_big_image_note_window_t3

0x0002,

0xfeef,	// (0x0006a0ed) popup_tmo_big_image_note_window_t

0x4c26,	// (0x0005ee24) cell_ai5_widget_lrg_icon_pane_g1

0x83bb,	// (0x000625b9) cell_ai5_widget_lrg_icon_pane_t1

0x83c9,	// (0x000625c7) cell_ai5_widget_list_row_pane_ParamLimits

0x83c9,	// (0x000625c7) cell_ai5_widget_list_row_pane

0x83e2,	// (0x000625e0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x83e2,	// (0x000625e0) cell_ai5_widget_list_row_pane_g1

0x83ef,	// (0x000625ed) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x83ef,	// (0x000625ed) cell_ai5_widget_list_row_pane_t1

0x841a,	// (0x00062618) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x841a,	// (0x00062618) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef6,	// (0x0006a0f4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef6,	// (0x0006a0f4) cell_ai5_widget_list_row_pane_t

0xe1cf,	// (0x000683cd) main_fep_vtchi_ss_pane

0x180f,	// (0x0005ba0d) popup_fep_char_pre_window

0x1817,	// (0x0005ba15) popup_fep_ituss_window

0x1838,	// (0x0005ba36) popup_fep_vkbss_window

0x8442,	// (0x00062640) grid_vkbss_keypad_pane_ParamLimits

0x8442,	// (0x00062640) grid_vkbss_keypad_pane

0x8452,	// (0x00062650) ituss_keypad_pane

0x1865,	// (0x0005ba63) aid_vkbss_key_offset_ParamLimits

0x1865,	// (0x0005ba63) aid_vkbss_key_offset

0x1871,	// (0x0005ba6f) cell_vkbss_key_pane_ParamLimits

0x1871,	// (0x0005ba6f) cell_vkbss_key_pane

0x8462,	// (0x00062660) bg_cell_vkbss_key_g1_ParamLimits

0x8462,	// (0x00062660) bg_cell_vkbss_key_g1

0x846e,	// (0x0006266c) cell_vkbss_key_3p_pane_ParamLimits

0x846e,	// (0x0006266c) cell_vkbss_key_3p_pane

0x8488,	// (0x00062686) cell_vkbss_key_g1_ParamLimits

0x8488,	// (0x00062686) cell_vkbss_key_g1

0x84a2,	// (0x000626a0) cell_vkbss_key_t1_ParamLimits

0x84a2,	// (0x000626a0) cell_vkbss_key_t1

0x1887,	// (0x0005ba85) cell_ituss_key_pane_ParamLimits

0x1887,	// (0x0005ba85) cell_ituss_key_pane

0x84cd,	// (0x000626cb) bg_cell_ituss_key_g1_ParamLimits

0x84cd,	// (0x000626cb) bg_cell_ituss_key_g1

0x84d9,	// (0x000626d7) cell_ituss_key_pane_g1_ParamLimits

0x84d9,	// (0x000626d7) cell_ituss_key_pane_g1

0x84ed,	// (0x000626eb) cell_ituss_key_pane_g2_ParamLimits

0x84ed,	// (0x000626eb) cell_ituss_key_pane_g2

0x0001,

0xfefd,	// (0x0006a0fb) cell_ituss_key_pane_g_ParamLimits

0xfefd,	// (0x0006a0fb) cell_ituss_key_pane_g

0x851f,	// (0x0006271d) cell_ituss_key_t1_ParamLimits

0x851f,	// (0x0006271d) cell_ituss_key_t1

0x855d,	// (0x0006275b) cell_ituss_key_t2_ParamLimits

0x855d,	// (0x0006275b) cell_ituss_key_t2

0x858e,	// (0x0006278c) cell_ituss_key_t3_ParamLimits

0x858e,	// (0x0006278c) cell_ituss_key_t3

0x85bf,	// (0x000627bd) cell_ituss_key_t4_ParamLimits

0x85bf,	// (0x000627bd) cell_ituss_key_t4

0x0003,

0xff02,	// (0x0006a100) cell_ituss_key_t_ParamLimits

0xff02,	// (0x0006a100) cell_ituss_key_t

0x85f0,	// (0x000627ee) cell_vkbss_key_3p_pane_g1

0x85f8,	// (0x000627f6) cell_vkbss_key_3p_pane_g2

0x8600,	// (0x000627fe) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x0006a109) cell_vkbss_key_3p_pane_g

0x55b1,	// (0x0005f7af) bg_popup_fep_char_preview_window_cp02

0x8608,	// (0x00062806) popup_fep_char_pre_window_t1

0xec54,	// (0x00068e52) main_ai5_sk_pane

0x7fea,	// (0x000621e8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7ff6,	// (0x000621f4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x800a,	// (0x00062208) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8016,	// (0x00062214) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee1,	// (0x0006a0df) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8029,	// (0x00062227) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8c9a,	// (0x00062e98) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf086,	// (0x00069284) main_ai5_sk_pane_g1

0x28e5,	// (0x0005cae3) popup_query_code_window_g1

0x182d,	// (0x0005ba2b) popup_fep_vkb_icf_pane

0x1843,	// (0x0005ba41) popup_fep_vtchi_icf_pane

0x8c9a,	// (0x00062e98) bg_icf_pane

0x8620,	// (0x0006281e) list_vkb_icf_pane

0x8c9a,	// (0x00062e98) bg_icf_pane_cp01

0x862c,	// (0x0006282a) vtchi_icf_list_pane

0x863d,	// (0x0006283b) list_vkb_icf_pane_t1_ParamLimits

0x863d,	// (0x0006283b) list_vkb_icf_pane_t1

0x8653,	// (0x00062851) vtchi_icf_list_pane_t1_ParamLimits

0x8653,	// (0x00062851) vtchi_icf_list_pane_t1

0x1817,	// (0x0005ba15) popup_fep_ituss_window_ParamLimits

0x1843,	// (0x0005ba41) popup_fep_vtchi_icf_pane_ParamLimits

0x8452,	// (0x00062650) ituss_keypad_pane_ParamLimits

0x1859,	// (0x0005ba57) ituss_sks_pane

0x8c9a,	// (0x00062e98) bg_icf_pane_ParamLimits

0x1800,	// (0x0005b9fe) icf_edit_indi_pane_ParamLimits

0x1800,	// (0x0005b9fe) icf_edit_indi_pane

0x8620,	// (0x0006281e) list_vkb_icf_pane_ParamLimits

0x8c9a,	// (0x00062e98) bg_icf_pane_cp01_ParamLimits

0x1800,	// (0x0005b9fe) icf_edit_indi_pane_cp01_ParamLimits

0x1800,	// (0x0005b9fe) icf_edit_indi_pane_cp01

0x8634,	// (0x00062832) vtchi_query_pane

0x4ea1,	// (0x0005f09f) icf_edit_indi_pane_g1_ParamLimits

0x4ea1,	// (0x0005f09f) icf_edit_indi_pane_g1

0x86d5,	// (0x000628d3) icf_edit_indi_pane_g2_ParamLimits

0x86d5,	// (0x000628d3) icf_edit_indi_pane_g2

0x0001,

0xff23,	// (0x0006a121) icf_edit_indi_pane_g_ParamLimits

0xff23,	// (0x0006a121) icf_edit_indi_pane_g

0x86e4,	// (0x000628e2) icf_edit_indi_pane_t1

0x866b,	// (0x00062869) bg_input_focus_pane_cp042

0x8bd3,	// (0x00062dd1) vtchi_button_pane

0x8674,	// (0x00062872) vtchi_query_pane_t1

0x8682,	// (0x00062880) vtchi_query_pane_t2

0x8690,	// (0x0006288e) vtchi_query_pane_t3

0x0002,

0xff12,	// (0x0006a110) vtchi_query_pane_t

0x55b1,	// (0x0005f7af) bg_button_pane_cp13

0x869e,	// (0x0006289c) vtchi_button_pane_g1

0x86a6,	// (0x000628a4) ituss_sks_pane_g1

0x86b1,	// (0x000628af) ituss_sks_pane_g2

0x0001,

0xff19,	// (0x0006a117) ituss_sks_pane_g

0x86b9,	// (0x000628b7) ituss_sks_pane_t1

0x86c7,	// (0x000628c5) ituss_sks_pane_t2

0x0001,

0xff1e,	// (0x0006a11c) ituss_sks_pane_t

0x46d6,	// (0x0005e8d4) indicator_nsta_pane_cp_g1

0x46df,	// (0x0005e8dd) indicator_nsta_pane_cp_g2

0x46e7,	// (0x0005e8e5) indicator_nsta_pane_cp_g3

0x46ef,	// (0x0005e8ed) indicator_nsta_pane_cp_g4

0x46f7,	// (0x0005e8f5) indicator_nsta_pane_cp_g5

0x46ff,	// (0x0005e8fd) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x00069cbd) indicator_nsta_pane_cp_g

0xdc3e,	// (0x00067e3c) cell_graphic2_pane_t2_ParamLimits

0xdc3e,	// (0x00067e3c) cell_graphic2_pane_t2

0x0001,

0xfdd8,	// (0x00069fd6) cell_graphic2_pane_t_ParamLimits

0xfdd8,	// (0x00069fd6) cell_graphic2_pane_t

0xdc74,	// (0x00067e72) cell_graphic2_control_pane_t1

0xa995,	// (0x00064b93) signal_pane_g3_ParamLimits

0xa995,	// (0x00064b93) signal_pane_g3

0xa9a9,	// (0x00064ba7) signal_pane_g4_ParamLimits

0xa9a9,	// (0x00064ba7) signal_pane_g4

0x842c,	// (0x0006262a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x842c,	// (0x0006262a) cell_ai5_widget_list_row_pane_t3

0x850d,	// (0x0006270b) cell_ituss_key_pane_t1_ParamLimits

0x850d,	// (0x0006270b) cell_ituss_key_pane_t1

0x2562,	// (0x0005c760) form_field_data_wide_pane_vc_t2_ParamLimits

0x2562,	// (0x0005c760) form_field_data_wide_pane_vc_t2

0x2576,	// (0x0005c774) form_field_data_wide_pane_vc_t3_ParamLimits

0x2576,	// (0x0005c774) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x00069a0d) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x00069a0d) form_field_data_wide_pane_vc_t

0x4381,	// (0x0005e57f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4381,	// (0x0005e57f) form_field_slider_wide_pane_vc_t3

0x4457,	// (0x0005e655) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4457,	// (0x0005e655) form_field_popup_wide_pane_vc_t2

0x446e,	// (0x0005e66c) form_field_popup_wide_pane_vc_t3_ParamLimits

0x446e,	// (0x0005e66c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x00069cac) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x00069cac) form_field_popup_wide_pane_vc_t

0xbf7f,	// (0x0006617d) aid_fshwr2_btn_pane_ParamLimits

0xbf90,	// (0x0006618e) aid_fshwr2_syb_pane_ParamLimits

0xbfa1,	// (0x0006619f) aid_fshwr2_txt_pane_ParamLimits

0x0f4d,	// (0x0005b14b) fshwr2_bg_pane_ParamLimits

0xbfad,	// (0x000661ab) fshwr2_func_candi_pane_ParamLimits

0xbfce,	// (0x000661cc) fshwr2_hwr_syb_pane_ParamLimits

0xbfeb,	// (0x000661e9) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large

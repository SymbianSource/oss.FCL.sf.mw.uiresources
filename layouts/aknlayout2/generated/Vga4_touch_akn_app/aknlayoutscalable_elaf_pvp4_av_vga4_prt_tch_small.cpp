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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001f69c };

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
0x6332,	// (0x000259ce) Screen

0x633e,	// (0x000259da) application_window_ParamLimits

0x633e,	// (0x000259da) application_window

0x0b84,	// (0x00020220) screen_g1

0x639a,	// (0x00025a36) area_bottom_pane_ParamLimits

0x639a,	// (0x00025a36) area_bottom_pane

0x645a,	// (0x00025af6) area_top_pane_ParamLimits

0x645a,	// (0x00025af6) area_top_pane

0x64ee,	// (0x00025b8a) main_pane_ParamLimits

0x64ee,	// (0x00025b8a) main_pane

0x0b8e,	// (0x0002022a) misc_graphics

0x7ec2,	// (0x0002755e) battery_pane_ParamLimits

0x7ec2,	// (0x0002755e) battery_pane

0x9f8f,	// (0x0002962b) bg_status_flat_pane_g8

0x9f97,	// (0x00029633) bg_status_flat_pane_g9

0x7f8a,	// (0x00027626) context_pane_ParamLimits

0x7f8a,	// (0x00027626) context_pane

0x80ae,	// (0x0002774a) navi_pane_ParamLimits

0x80ae,	// (0x0002774a) navi_pane

0x813e,	// (0x000277da) signal_pane_ParamLimits

0x813e,	// (0x000277da) signal_pane

0x0008,

0xf874,	// (0x0002ef10) bg_status_flat_pane_g

0x81ab,	// (0x00027847) status_pane_g1_ParamLimits

0x81ab,	// (0x00027847) status_pane_g1

0x81bf,	// (0x0002785b) status_pane_g2_ParamLimits

0x81bf,	// (0x0002785b) status_pane_g2

0x81cb,	// (0x00027867) status_pane_g3_ParamLimits

0x81cb,	// (0x00027867) status_pane_g3

0x0004,

0xf79b,	// (0x0002ee37) status_pane_g_ParamLimits

0xf79b,	// (0x0002ee37) status_pane_g

0x81ff,	// (0x0002789b) title_pane_ParamLimits

0x81ff,	// (0x0002789b) title_pane

0x823c,	// (0x000278d8) uni_indicator_pane_ParamLimits

0x823c,	// (0x000278d8) uni_indicator_pane

0x77ab,	// (0x00026e47) bg_list_pane_ParamLimits

0x77ab,	// (0x00026e47) bg_list_pane

0x77cb,	// (0x00026e67) find_pane

0x77d3,	// (0x00026e6f) listscroll_app_pane_ParamLimits

0x77d3,	// (0x00026e6f) listscroll_app_pane

0x77df,	// (0x00026e7b) listscroll_form_pane

0x77e7,	// (0x00026e83) listscroll_gen_pane_ParamLimits

0x77e7,	// (0x00026e83) listscroll_gen_pane

0x77fb,	// (0x00026e97) listscroll_set_pane

0x6b41,	// (0x000261dd) main_idle_act_pane

0x72a4,	// (0x00026940) main_idle_trad_pane

0x72a4,	// (0x00026940) main_list_empty_pane

0x7815,	// (0x00026eb1) main_midp_pane

0x7821,	// (0x00026ebd) main_pane_g1_ParamLimits

0x7821,	// (0x00026ebd) main_pane_g1

0x782f,	// (0x00026ecb) popup_ai_message_window_ParamLimits

0x782f,	// (0x00026ecb) popup_ai_message_window

0x78e3,	// (0x00026f7f) popup_fep_china_uni_window_ParamLimits

0x78e3,	// (0x00026f7f) popup_fep_china_uni_window

0x7943,	// (0x00026fdf) popup_fep_japan_candidate_window_ParamLimits

0x7943,	// (0x00026fdf) popup_fep_japan_candidate_window

0x796d,	// (0x00027009) popup_fep_japan_predictive_window_ParamLimits

0x796d,	// (0x00027009) popup_fep_japan_predictive_window

0x79a3,	// (0x0002703f) popup_find_window

0x79b0,	// (0x0002704c) popup_grid_graphic_window_ParamLimits

0x79b0,	// (0x0002704c) popup_grid_graphic_window

0x79de,	// (0x0002707a) popup_large_graphic_colour_window

0x7a04,	// (0x000270a0) popup_menu_window_ParamLimits

0x7a04,	// (0x000270a0) popup_menu_window

0x7bce,	// (0x0002726a) popup_note_image_window

0x7bb8,	// (0x00027254) popup_note_wait_window_ParamLimits

0x7bb8,	// (0x00027254) popup_note_wait_window

0x7bb8,	// (0x00027254) popup_note_window_ParamLimits

0x7bb8,	// (0x00027254) popup_note_window

0x7c34,	// (0x000272d0) popup_query_code_window_ParamLimits

0x7c34,	// (0x000272d0) popup_query_code_window

0x7c4a,	// (0x000272e6) popup_query_data_code_window_ParamLimits

0x7c4a,	// (0x000272e6) popup_query_data_code_window

0x7c6d,	// (0x00027309) popup_query_data_window_ParamLimits

0x7c6d,	// (0x00027309) popup_query_data_window

0x7c8f,	// (0x0002732b) popup_query_sat_info_window_ParamLimits

0x7c8f,	// (0x0002732b) popup_query_sat_info_window

0x7cce,	// (0x0002736a) popup_snote_single_graphic_window_ParamLimits

0x7cce,	// (0x0002736a) popup_snote_single_graphic_window

0x7cce,	// (0x0002736a) popup_snote_single_text_window_ParamLimits

0x7cce,	// (0x0002736a) popup_snote_single_text_window

0x7ce5,	// (0x00027381) popup_sub_window_general

0x7e2b,	// (0x000274c7) popup_window_general_ParamLimits

0x7e2b,	// (0x000274c7) popup_window_general

0x7e44,	// (0x000274e0) power_save_pane

0x760a,	// (0x00026ca6) control_pane_g1_ParamLimits

0x760a,	// (0x00026ca6) control_pane_g1

0x7633,	// (0x00026ccf) control_pane_g2_ParamLimits

0x7633,	// (0x00026ccf) control_pane_g2

0x7658,	// (0x00026cf4) control_pane_g3_ParamLimits

0x7658,	// (0x00026cf4) control_pane_g3

0x0007,

0xf783,	// (0x0002ee1f) control_pane_g_ParamLimits

0xf783,	// (0x0002ee1f) control_pane_g

0x76b0,	// (0x00026d4c) control_pane_t1_ParamLimits

0x76b0,	// (0x00026d4c) control_pane_t1

0x76fc,	// (0x00026d98) control_pane_t2_ParamLimits

0x76fc,	// (0x00026d98) control_pane_t2

0x0002,

0xf794,	// (0x0002ee30) control_pane_t_ParamLimits

0xf794,	// (0x0002ee30) control_pane_t

0x752f,	// (0x00026bcb) navi_navi_volume_pane_cp1

0x7537,	// (0x00026bd3) status_small_icon_pane

0x753f,	// (0x00026bdb) status_small_pane_g1_ParamLimits

0x753f,	// (0x00026bdb) status_small_pane_g1

0x7573,	// (0x00026c0f) status_small_pane_g2_ParamLimits

0x7573,	// (0x00026c0f) status_small_pane_g2

0x757f,	// (0x00026c1b) status_small_pane_g3_ParamLimits

0x757f,	// (0x00026c1b) status_small_pane_g3

0x758b,	// (0x00026c27) status_small_pane_g4_ParamLimits

0x758b,	// (0x00026c27) status_small_pane_g4

0x7597,	// (0x00026c33) status_small_pane_g5_ParamLimits

0x7597,	// (0x00026c33) status_small_pane_g5

0x75a5,	// (0x00026c41) status_small_pane_g6_ParamLimits

0x75a5,	// (0x00026c41) status_small_pane_g6

0x0007,

0xf772,	// (0x0002ee0e) status_small_pane_g_ParamLimits

0xf772,	// (0x0002ee0e) status_small_pane_g

0x75d4,	// (0x00026c70) status_small_pane_t1

0x75f6,	// (0x00026c92) status_small_wait_pane_ParamLimits

0x75f6,	// (0x00026c92) status_small_wait_pane

0x6eb4,	// (0x00026550) aid_levels_signal_ParamLimits

0x6eb4,	// (0x00026550) aid_levels_signal

0x6ec6,	// (0x00026562) signal_pane_g1_ParamLimits

0x6ec6,	// (0x00026562) signal_pane_g1

0x6edb,	// (0x00026577) signal_pane_g2_ParamLimits

0x6edb,	// (0x00026577) signal_pane_g2

0x0003,

0xf703,	// (0x0002ed9f) signal_pane_g_ParamLimits

0xf703,	// (0x0002ed9f) signal_pane_g

0x335a,	// (0x000229f6) context_pane_g1

0x674d,	// (0x00025de9) title_pane_g1

0x676b,	// (0x00025e07) title_pane_t1

0x0bb0,	// (0x0002024c) title_pane_t2

0x0bd6,	// (0x00020272) title_pane_t3

0x0002,

0xf557,	// (0x0002ebf3) title_pane_t

0x8254,	// (0x000278f0) aid_levels_battery_ParamLimits

0x8254,	// (0x000278f0) aid_levels_battery

0x8268,	// (0x00027904) battery_pane_g1_ParamLimits

0x8268,	// (0x00027904) battery_pane_g1

0x827e,	// (0x0002791a) battery_pane_g2_ParamLimits

0x827e,	// (0x0002791a) battery_pane_g2

0x0001,

0xf7a6,	// (0x0002ee42) battery_pane_g_ParamLimits

0xf7a6,	// (0x0002ee42) battery_pane_g

0xa8d9,	// (0x00029f75) uni_indicator_pane_g1

0xa8ef,	// (0x00029f8b) uni_indicator_pane_g2

0xa905,	// (0x00029fa1) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0002efb8) uni_indicator_pane_g

0x3608,	// (0x00022ca4) navi_icon_pane_ParamLimits

0x3608,	// (0x00022ca4) navi_icon_pane

0x358c,	// (0x00022c28) navi_midp_pane

0x3624,	// (0x00022cc0) navi_navi_pane

0x362e,	// (0x00022cca) navi_text_pane_ParamLimits

0x362e,	// (0x00022cca) navi_text_pane

0x0b84,	// (0x00020220) status_small_wait_pane_g1

0x0eeb,	// (0x00020587) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0002efb3) status_small_wait_pane_g

0xa5ec,	// (0x00029c88) navi_navi_icon_text_pane

0xa5f4,	// (0x00029c90) navi_navi_pane_g1_ParamLimits

0xa5f4,	// (0x00029c90) navi_navi_pane_g1

0xa606,	// (0x00029ca2) navi_navi_pane_g2_ParamLimits

0xa606,	// (0x00029ca2) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0002ef81) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0002ef81) navi_navi_pane_g

0xa618,	// (0x00029cb4) navi_navi_tabs_pane

0xa621,	// (0x00029cbd) navi_navi_text_pane

0xa5ec,	// (0x00029c88) navi_navi_volume_pane

0xa5c8,	// (0x00029c64) navi_text_pane_t1

0xa5bc,	// (0x00029c58) navi_icon_pane_g1

0xa50f,	// (0x00029bab) navi_navi_text_pane_t1

0x88f6,	// (0x00027f92) navi_navi_volume_pane_g1

0x88fe,	// (0x00027f9a) volume_small_pane

0xa475,	// (0x00029b11) navi_navi_icon_text_pane_g1

0xa47d,	// (0x00029b19) navi_navi_icon_text_pane_t1

0x3624,	// (0x00022cc0) navi_tabs_2_long_pane

0x3624,	// (0x00022cc0) navi_tabs_2_pane

0x3624,	// (0x00022cc0) navi_tabs_3_long_pane

0x3624,	// (0x00022cc0) navi_tabs_3_pane

0x3624,	// (0x00022cc0) navi_tabs_4_pane

0x88d6,	// (0x00027f72) tabs_2_active_pane_ParamLimits

0x88d6,	// (0x00027f72) tabs_2_active_pane

0x88e6,	// (0x00027f82) tabs_2_passive_pane_ParamLimits

0x88e6,	// (0x00027f82) tabs_2_passive_pane

0x88a4,	// (0x00027f40) tabs_3_active_pane_ParamLimits

0x88a4,	// (0x00027f40) tabs_3_active_pane

0x88b4,	// (0x00027f50) tabs_3_passive_pane_ParamLimits

0x88b4,	// (0x00027f50) tabs_3_passive_pane

0x88c5,	// (0x00027f61) tabs_3_passive_pane_cp_ParamLimits

0x88c5,	// (0x00027f61) tabs_3_passive_pane_cp

0x8858,	// (0x00027ef4) tabs_4_active_pane_ParamLimits

0x8858,	// (0x00027ef4) tabs_4_active_pane

0x886b,	// (0x00027f07) tabs_4_passive_pane_ParamLimits

0x886b,	// (0x00027f07) tabs_4_passive_pane

0x887c,	// (0x00027f18) tabs_4_passive_pane_cp_ParamLimits

0x887c,	// (0x00027f18) tabs_4_passive_pane_cp

0x888d,	// (0x00027f29) tabs_4_passive_pane_cp2_ParamLimits

0x888d,	// (0x00027f29) tabs_4_passive_pane_cp2

0x8834,	// (0x00027ed0) tabs_2_long_active_pane_ParamLimits

0x8834,	// (0x00027ed0) tabs_2_long_active_pane

0x8846,	// (0x00027ee2) tabs_2_long_passive_pane_ParamLimits

0x8846,	// (0x00027ee2) tabs_2_long_passive_pane

0x87f5,	// (0x00027e91) tabs_3_long_active_pane_ParamLimits

0x87f5,	// (0x00027e91) tabs_3_long_active_pane

0x8808,	// (0x00027ea4) tabs_3_long_passive_pane_ParamLimits

0x8808,	// (0x00027ea4) tabs_3_long_passive_pane

0x8821,	// (0x00027ebd) tabs_3_long_passive_pane_cp_ParamLimits

0x8821,	// (0x00027ebd) tabs_3_long_passive_pane_cp

0x879b,	// (0x00027e37) volume_small_pane_g1

0x87a4,	// (0x00027e40) volume_small_pane_g2

0x87ad,	// (0x00027e49) volume_small_pane_g3

0x87b6,	// (0x00027e52) volume_small_pane_g4

0x87bf,	// (0x00027e5b) volume_small_pane_g5

0x87c8,	// (0x00027e64) volume_small_pane_g6

0x87d1,	// (0x00027e6d) volume_small_pane_g7

0x87da,	// (0x00027e76) volume_small_pane_g8

0x87e3,	// (0x00027e7f) volume_small_pane_g9

0x87ec,	// (0x00027e88) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0002ef4d) volume_small_pane_g

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp2_ParamLimits

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp2

0x67d3,	// (0x00025e6f) tabs_3_active_pane_g1

0x67db,	// (0x00025e77) tabs_3_active_pane_t1

0x0bf6,	// (0x00020292) bg_passive_tab_pane_cp2_ParamLimits

0x0bf6,	// (0x00020292) bg_passive_tab_pane_cp2

0x67d3,	// (0x00025e6f) tabs_3_passive_pane_g1

0x67db,	// (0x00025e77) tabs_3_passive_pane_t1

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp3_ParamLimits

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp3

0x67ed,	// (0x00025e89) tabs_4_active_pane_g1

0x67f5,	// (0x00025e91) tabs_4_active_pane_t1

0x0bf6,	// (0x00020292) bg_passive_tab_pane_cp3_ParamLimits

0x0bf6,	// (0x00020292) bg_passive_tab_pane_cp3

0x67ed,	// (0x00025e89) tabs_4_1_passive_pane_g1

0x67f5,	// (0x00025e91) tabs_4_1_passive_pane_t1

0x7815,	// (0x00026eb1) list_highlight_pane_cp2

0xab54,	// (0x0002a1f0) list_set_pane_ParamLimits

0xab54,	// (0x0002a1f0) list_set_pane

0xac1c,	// (0x0002a2b8) main_pane_set_t1_ParamLimits

0xac1c,	// (0x0002a2b8) main_pane_set_t1

0xac3c,	// (0x0002a2d8) main_pane_set_t2_ParamLimits

0xac3c,	// (0x0002a2d8) main_pane_set_t2

0xac50,	// (0x0002a2ec) main_pane_set_t3_ParamLimits

0xac50,	// (0x0002a2ec) main_pane_set_t3

0xac64,	// (0x0002a300) main_pane_set_t4_ParamLimits

0xac64,	// (0x0002a300) main_pane_set_t4

0x0003,

0xf981,	// (0x0002f01d) main_pane_set_t_ParamLimits

0xf981,	// (0x0002f01d) main_pane_set_t

0xac78,	// (0x0002a314) setting_code_pane

0xac82,	// (0x0002a31e) setting_slider_graphic_pane

0xac82,	// (0x0002a31e) setting_slider_pane

0xac82,	// (0x0002a31e) setting_text_pane

0xac82,	// (0x0002a31e) setting_volume_pane

0x6807,	// (0x00025ea3) volume_set_pane

0x0bf6,	// (0x00020292) bg_set_opt_pane_cp

0x6811,	// (0x00025ead) setting_slider_pane_t1

0x682a,	// (0x00025ec6) setting_slider_pane_t2

0x6844,	// (0x00025ee0) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002ebfa) setting_slider_pane_t

0x685c,	// (0x00025ef8) slider_set_pane

0x0b8e,	// (0x0002022a) bg_set_opt_pane_cp2

0x0c04,	// (0x000202a0) setting_slider_graphic_pane_g1

0x6872,	// (0x00025f0e) setting_slider_graphic_pane_t1

0x6882,	// (0x00025f1e) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002ec01) setting_slider_graphic_pane_t

0x6892,	// (0x00025f2e) slider_set_pane_cp

0x0b8e,	// (0x0002022a) input_focus_pane_cp1

0xab15,	// (0x0002a1b1) list_set_text_pane

0x0b84,	// (0x00020220) setting_text_pane_g1

0x0b8e,	// (0x0002022a) input_focus_pane_cp2

0x0b84,	// (0x00020220) setting_code_pane_g1

0x0c0d,	// (0x000202a9) setting_code_pane_t1

0x521b,	// (0x000248b7) set_text_pane_t1_ParamLimits

0x521b,	// (0x000248b7) set_text_pane_t1

0x2d0c,	// (0x000223a8) set_opt_bg_pane_g1

0x2d14,	// (0x000223b0) set_opt_bg_pane_g2

0xaaed,	// (0x0002a189) set_opt_bg_pane_g3

0x2d24,	// (0x000223c0) set_opt_bg_pane_g4

0x2d2c,	// (0x000223c8) set_opt_bg_pane_g5

0x2d34,	// (0x000223d0) set_opt_bg_pane_g6

0xaaf7,	// (0x0002a193) set_opt_bg_pane_g7

0xab01,	// (0x0002a19d) set_opt_bg_pane_g8

0xab0b,	// (0x0002a1a7) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0002f00a) set_opt_bg_pane_g

0xaae0,	// (0x0002a17c) slider_set_pane_g1

0x897f,	// (0x0002801b) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0002effb) slider_set_pane_g

0x8907,	// (0x00027fa3) volume_set_pane_g1

0x8911,	// (0x00027fad) volume_set_pane_g2

0x891b,	// (0x00027fb7) volume_set_pane_g3

0x8925,	// (0x00027fc1) volume_set_pane_g4

0x892f,	// (0x00027fcb) volume_set_pane_g5

0x8939,	// (0x00027fd5) volume_set_pane_g6

0x8943,	// (0x00027fdf) volume_set_pane_g7

0x894d,	// (0x00027fe9) volume_set_pane_g8

0x8957,	// (0x00027ff3) volume_set_pane_g9

0x8961,	// (0x00027ffd) volume_set_pane_g10

0x0009,

0xf937,	// (0x0002efd3) volume_set_pane_g

0x689a,	// (0x00025f36) indicator_pane_ParamLimits

0x689a,	// (0x00025f36) indicator_pane

0x68a6,	// (0x00025f42) main_idle_pane_g2_ParamLimits

0x68a6,	// (0x00025f42) main_idle_pane_g2

0x68ce,	// (0x00025f6a) main_pane_idle_g1_ParamLimits

0x68ce,	// (0x00025f6a) main_pane_idle_g1

0x0c35,	// (0x000202d1) popup_clock_digital_analogue_window_ParamLimits

0x0c35,	// (0x000202d1) popup_clock_digital_analogue_window

0x68dc,	// (0x00025f78) soft_indicator_pane_ParamLimits

0x68dc,	// (0x00025f78) soft_indicator_pane

0x68ea,	// (0x00025f86) wallpaper_pane_ParamLimits

0x68ea,	// (0x00025f86) wallpaper_pane

0x0b84,	// (0x00020220) wallpaper_pane_g1

0x68f6,	// (0x00025f92) indicator_pane_g1_ParamLimits

0x68f6,	// (0x00025f92) indicator_pane_g1

0xaf5e,	// (0x0002a5fa) navi_navi_icon_text_pane_srt_g1

0x0c63,	// (0x000202ff) soft_indicator_pane_t1

0x0c7d,	// (0x00020319) aid_ps_area_pane

0x6902,	// (0x00025f9e) aid_ps_clock_pane

0x0c8e,	// (0x0002032a) aid_ps_indicator_pane

0x0c9a,	// (0x00020336) indicator_ps_pane_ParamLimits

0x0c9a,	// (0x00020336) indicator_ps_pane

0x0ca9,	// (0x00020345) power_save_pane_g1_ParamLimits

0x0ca9,	// (0x00020345) power_save_pane_g1

0x0cb5,	// (0x00020351) power_save_pane_g2_ParamLimits

0x0cb5,	// (0x00020351) power_save_pane_g2

0x634e,	// (0x000259ea) aid_navinavi_width_pane

0x0c7d,	// (0x00020319) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002ec06) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002ec06) power_save_pane_g

0x0cc3,	// (0x0002035f) power_save_pane_t1_ParamLimits

0x0cc3,	// (0x0002035f) power_save_pane_t1

0x6902,	// (0x00025f9e) aid_ps_clock_pane_ParamLimits

0x0c8e,	// (0x0002032a) aid_ps_indicator_pane_ParamLimits

0x0cd5,	// (0x00020371) power_save_pane_t4_ParamLimits

0x0cd5,	// (0x00020371) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002ec0b) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002ec0b) power_save_pane_t

0x0cff,	// (0x0002039b) power_save_t3_ParamLimits

0x0cff,	// (0x0002039b) power_save_t3

0x0cea,	// (0x00020386) power_save_t2_ParamLimits

0x0cea,	// (0x00020386) power_save_t2

0x0d14,	// (0x000203b0) indicator_ps_pane_g1

0x6910,	// (0x00025fac) ai_gene_pane_ParamLimits

0x6910,	// (0x00025fac) ai_gene_pane

0x691c,	// (0x00025fb8) ai_links_pane_ParamLimits

0x691c,	// (0x00025fb8) ai_links_pane

0x6928,	// (0x00025fc4) indicator_pane_cp1_ParamLimits

0x6928,	// (0x00025fc4) indicator_pane_cp1

0x6934,	// (0x00025fd0) main_pane_idle_g1_cp_ParamLimits

0x6934,	// (0x00025fd0) main_pane_idle_g1_cp

0x0d1d,	// (0x000203b9) popup_ai_links_title_window

0x6940,	// (0x00025fdc) soft_indicator_pane_cp1_ParamLimits

0x6940,	// (0x00025fdc) soft_indicator_pane_cp1

0xa8c7,	// (0x00029f63) ai_links_pane_g1

0xa8d0,	// (0x00029f6c) grid_ai_links_pane

0xa8ac,	// (0x00029f48) ai_gene_pane_1

0xa8b5,	// (0x00029f51) ai_gene_pane_2

0xa8be,	// (0x00029f5a) list_highlight_pane_cp4

0xa88c,	// (0x00029f28) cell_ai_link_pane_ParamLimits

0xa88c,	// (0x00029f28) cell_ai_link_pane

0xa884,	// (0x00029f20) cell_ai_link_pane_g1

0x0eeb,	// (0x00020587) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0002efae) cell_ai_link_pane_g

0x0b8e,	// (0x0002022a) grid_highlight_cp2

0x0b8e,	// (0x0002022a) bg_popup_sub_pane_cp1

0x0d34,	// (0x000203d0) popup_ai_links_title_window_t1

0xa7d0,	// (0x00029e6c) ai_gene_pane_1_g1_ParamLimits

0xa7d0,	// (0x00029e6c) ai_gene_pane_1_g1

0xa7dc,	// (0x00029e78) ai_gene_pane_1_g2_ParamLimits

0xa7dc,	// (0x00029e78) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0002efa4) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0002efa4) ai_gene_pane_1_g

0xa7e9,	// (0x00029e85) ai_gene_pane_1_t1_ParamLimits

0xa7e9,	// (0x00029e85) ai_gene_pane_1_t1

0xa81d,	// (0x00029eb9) grid_ai_soft_ind_pane

0xa7bb,	// (0x00029e57) ai_gene_pane_2_t1_ParamLimits

0xa7bb,	// (0x00029e57) ai_gene_pane_2_t1

0x694c,	// (0x00025fe8) main_pane_empty_t1_ParamLimits

0x694c,	// (0x00025fe8) main_pane_empty_t1

0x6964,	// (0x00026000) main_pane_empty_t2_ParamLimits

0x6964,	// (0x00026000) main_pane_empty_t2

0x6979,	// (0x00026015) main_pane_empty_t3_ParamLimits

0x6979,	// (0x00026015) main_pane_empty_t3

0x698b,	// (0x00026027) main_pane_empty_t4_ParamLimits

0x698b,	// (0x00026027) main_pane_empty_t4

0x699d,	// (0x00026039) main_pane_empty_t5_ParamLimits

0x699d,	// (0x00026039) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002ec10) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002ec10) main_pane_empty_t

0x2d8c,	// (0x00022428) bg_popup_window_pane_ParamLimits

0x2d8c,	// (0x00022428) bg_popup_window_pane

0xa51d,	// (0x00029bb9) find_popup_pane_cp2_ParamLimits

0xa51d,	// (0x00029bb9) find_popup_pane_cp2

0xa529,	// (0x00029bc5) heading_pane_ParamLimits

0xa529,	// (0x00029bc5) heading_pane

0x0b8e,	// (0x0002022a) bg_popup_sub_pane

0xa497,	// (0x00029b33) bg_popup_window_pane_g1_ParamLimits

0xa497,	// (0x00029b33) bg_popup_window_pane_g1

0xa4a3,	// (0x00029b3f) bg_popup_window_pane_g2_ParamLimits

0xa4a3,	// (0x00029b3f) bg_popup_window_pane_g2

0xa4af,	// (0x00029b4b) bg_popup_window_pane_g3_ParamLimits

0xa4af,	// (0x00029b4b) bg_popup_window_pane_g3

0xa4bb,	// (0x00029b57) bg_popup_window_pane_g4_ParamLimits

0xa4bb,	// (0x00029b57) bg_popup_window_pane_g4

0xa4c7,	// (0x00029b63) bg_popup_window_pane_g5_ParamLimits

0xa4c7,	// (0x00029b63) bg_popup_window_pane_g5

0xa4d3,	// (0x00029b6f) bg_popup_window_pane_g6_ParamLimits

0xa4d3,	// (0x00029b6f) bg_popup_window_pane_g6

0xa4df,	// (0x00029b7b) bg_popup_window_pane_g7_ParamLimits

0xa4df,	// (0x00029b7b) bg_popup_window_pane_g7

0xa4eb,	// (0x00029b87) bg_popup_window_pane_g8_ParamLimits

0xa4eb,	// (0x00029b87) bg_popup_window_pane_g8

0xa4f7,	// (0x00029b93) bg_popup_window_pane_g9_ParamLimits

0xa4f7,	// (0x00029b93) bg_popup_window_pane_g9

0xa503,	// (0x00029b9f) bg_popup_window_pane_g10_ParamLimits

0xa503,	// (0x00029b9f) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0002ef6c) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0002ef6c) bg_popup_window_pane_g

0xa42c,	// (0x00029ac8) bg_popup_heading_pane_ParamLimits

0xa42c,	// (0x00029ac8) bg_popup_heading_pane

0x8a07,	// (0x000280a3) tabs_4_passive_pane_cp_srt_ParamLimits

0x8a07,	// (0x000280a3) tabs_4_passive_pane_cp_srt

0x8a19,	// (0x000280b5) tabs_4_passive_pane_srt_ParamLimits

0xa440,	// (0x00029adc) heading_pane_g2

0x8a19,	// (0x000280b5) tabs_4_passive_pane_srt

0x7815,	// (0x00026eb1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7815,	// (0x00026eb1) bg_passive_tab_pane_cp3_srt

0xa448,	// (0x00029ae4) heading_pane_t1_ParamLimits

0xa448,	// (0x00029ae4) heading_pane_t1

0xa45f,	// (0x00029afb) heading_pane_t2_ParamLimits

0xa45f,	// (0x00029afb) heading_pane_t2

0x0001,

0xf8cb,	// (0x0002ef67) heading_pane_t_ParamLimits

0xf8cb,	// (0x0002ef67) heading_pane_t

0x9f57,	// (0x000295f3) bg_popup_heading_pane_g1

0xa006,	// (0x000296a2) bg_popup_heading_pane_g2

0xa010,	// (0x000296ac) bg_popup_heading_pane_g3

0xa01a,	// (0x000296b6) bg_popup_heading_pane_g4

0xa024,	// (0x000296c0) bg_popup_heading_pane_g5

0xa02e,	// (0x000296ca) bg_popup_heading_pane_g6

0xa036,	// (0x000296d2) bg_popup_heading_pane_g7

0xa03e,	// (0x000296da) bg_popup_heading_pane_g8

0xa048,	// (0x000296e4) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0002ef23) bg_popup_heading_pane_g

0x8386,	// (0x00027a22) bg_popup_sub_pane_g1

0x838e,	// (0x00027a2a) bg_popup_sub_pane_g2

0x8396,	// (0x00027a32) bg_popup_sub_pane_g3

0x839e,	// (0x00027a3a) bg_popup_sub_pane_g4

0x83a6,	// (0x00027a42) bg_popup_sub_pane_g5

0x83ae,	// (0x00027a4a) bg_popup_sub_pane_g6

0x83b6,	// (0x00027a52) bg_popup_sub_pane_g7

0x83be,	// (0x00027a5a) bg_popup_sub_pane_g8

0x83c6,	// (0x00027a62) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0002eefd) bg_popup_sub_pane_g

0x0be8,	// (0x00020284) bg_popup_window_pane_cp5_ParamLimits

0x0be8,	// (0x00020284) bg_popup_window_pane_cp5

0x0d51,	// (0x000203ed) popup_note_window_g1_ParamLimits

0x0d51,	// (0x000203ed) popup_note_window_g1

0x0d5d,	// (0x000203f9) popup_note_window_t1_ParamLimits

0x0d5d,	// (0x000203f9) popup_note_window_t1

0x0d73,	// (0x0002040f) popup_note_window_t2_ParamLimits

0x0d73,	// (0x0002040f) popup_note_window_t2

0x0d89,	// (0x00020425) popup_note_window_t3_ParamLimits

0x0d89,	// (0x00020425) popup_note_window_t3

0x0d9f,	// (0x0002043b) popup_note_window_t4_ParamLimits

0x0d9f,	// (0x0002043b) popup_note_window_t4

0x0dc7,	// (0x00020463) popup_note_window_t5_ParamLimits

0x0dc7,	// (0x00020463) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002ec1b) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002ec1b) popup_note_window_t

0x0deb,	// (0x00020487) bg_popup_window_pane_cp6_ParamLimits

0x0deb,	// (0x00020487) bg_popup_window_pane_cp6

0x9ed3,	// (0x0002956f) popup_note_image_window_g1_ParamLimits

0x9ed3,	// (0x0002956f) popup_note_image_window_g1

0x9edf,	// (0x0002957b) popup_note_image_window_g2_ParamLimits

0x9edf,	// (0x0002957b) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0002eef1) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0002eef1) popup_note_image_window_g

0x9ef8,	// (0x00029594) popup_note_image_window_t1_ParamLimits

0x9ef8,	// (0x00029594) popup_note_image_window_t1

0x9f11,	// (0x000295ad) popup_note_image_window_t2_ParamLimits

0x9f11,	// (0x000295ad) popup_note_image_window_t2

0x9f2a,	// (0x000295c6) popup_note_image_window_t3_ParamLimits

0x9f2a,	// (0x000295c6) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0002eef6) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0002eef6) popup_note_image_window_t

0x9d93,	// (0x0002942f) bg_popup_window_pane_cp7_ParamLimits

0x9d93,	// (0x0002942f) bg_popup_window_pane_cp7

0x9dc3,	// (0x0002945f) popup_note_wait_window_g1_ParamLimits

0x9dc3,	// (0x0002945f) popup_note_wait_window_g1

0x9dcf,	// (0x0002946b) popup_note_wait_window_g2_ParamLimits

0x9dcf,	// (0x0002946b) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0002eedf) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0002eedf) popup_note_wait_window_g

0x9de7,	// (0x00029483) popup_note_wait_window_t1_ParamLimits

0x9de7,	// (0x00029483) popup_note_wait_window_t1

0x9e0e,	// (0x000294aa) popup_note_wait_window_t2_ParamLimits

0x9e0e,	// (0x000294aa) popup_note_wait_window_t2

0x9e2c,	// (0x000294c8) popup_note_wait_window_t3_ParamLimits

0x9e2c,	// (0x000294c8) popup_note_wait_window_t3

0x9e3f,	// (0x000294db) popup_note_wait_window_t4_ParamLimits

0x9e3f,	// (0x000294db) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0002eee6) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0002eee6) popup_note_wait_window_t

0x9e64,	// (0x00029500) wait_bar_pane_ParamLimits

0x9e64,	// (0x00029500) wait_bar_pane

0x0b8e,	// (0x0002022a) wait_anim_pane

0x0b8e,	// (0x0002022a) wait_border_pane

0x0b84,	// (0x00020220) wait_anim_pane_g1

0x0b84,	// (0x00020220) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0002ed9a) wait_anim_pane_g

0x9d37,	// (0x000293d3) wait_border_pane_g1

0x9d42,	// (0x000293de) wait_border_pane_g2

0x9d4b,	// (0x000293e7) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0002eed8) wait_border_pane_g

0x9ba1,	// (0x0002923d) bg_popup_window_pane_cp16_ParamLimits

0x9ba1,	// (0x0002923d) bg_popup_window_pane_cp16

0x9ca1,	// (0x0002933d) indicator_popup_pane_cp4_ParamLimits

0x9ca1,	// (0x0002933d) indicator_popup_pane_cp4

0x9cb5,	// (0x00029351) popup_query_data_window_t1_ParamLimits

0x9cb5,	// (0x00029351) popup_query_data_window_t1

0x9cc7,	// (0x00029363) popup_query_data_window_t2_ParamLimits

0x9cc7,	// (0x00029363) popup_query_data_window_t2

0x9ce0,	// (0x0002937c) popup_query_data_window_t3_ParamLimits

0x9ce0,	// (0x0002937c) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0002eed1) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0002eed1) popup_query_data_window_t

0x9cfa,	// (0x00029396) query_popup_data_pane_ParamLimits

0x9cfa,	// (0x00029396) query_popup_data_pane

0x9d0e,	// (0x000293aa) query_popup_data_pane_cp1_ParamLimits

0x9d0e,	// (0x000293aa) query_popup_data_pane_cp1

0x9ba1,	// (0x0002923d) bg_popup_window_pane_cp10_ParamLimits

0x9ba1,	// (0x0002923d) bg_popup_window_pane_cp10

0x9bd3,	// (0x0002926f) indicator_popup_pane_ParamLimits

0x9bd3,	// (0x0002926f) indicator_popup_pane

0x9bf5,	// (0x00029291) popup_query_code_window_t1_ParamLimits

0x9bf5,	// (0x00029291) popup_query_code_window_t1

0x9c0f,	// (0x000292ab) popup_query_code_window_t2_ParamLimits

0x9c0f,	// (0x000292ab) popup_query_code_window_t2

0x9c58,	// (0x000292f4) popup_query_code_window_t3_ParamLimits

0x9c58,	// (0x000292f4) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0002eeca) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0002eeca) popup_query_code_window_t

0x9c87,	// (0x00029323) query_popup_pane_ParamLimits

0x9c87,	// (0x00029323) query_popup_pane

0x0deb,	// (0x00020487) bg_popup_window_pane_cp15_ParamLimits

0x0deb,	// (0x00020487) bg_popup_window_pane_cp15

0x0e0b,	// (0x000204a7) indicator_popup_pane_cp1_ParamLimits

0x0e0b,	// (0x000204a7) indicator_popup_pane_cp1

0x0e1e,	// (0x000204ba) indicator_popup_pane_cp2_ParamLimits

0x0e1e,	// (0x000204ba) indicator_popup_pane_cp2

0x0e39,	// (0x000204d5) popup_query_data_code_window_g1_ParamLimits

0x0e39,	// (0x000204d5) popup_query_data_code_window_g1

0x0e4c,	// (0x000204e8) popup_query_data_code_window_t1_ParamLimits

0x0e4c,	// (0x000204e8) popup_query_data_code_window_t1

0x0e5e,	// (0x000204fa) popup_query_data_code_window_t2_ParamLimits

0x0e5e,	// (0x000204fa) popup_query_data_code_window_t2

0x0e70,	// (0x0002050c) popup_query_data_code_window_t3_ParamLimits

0x0e70,	// (0x0002050c) popup_query_data_code_window_t3

0x0e86,	// (0x00020522) popup_query_data_code_window_t4_ParamLimits

0x0e86,	// (0x00020522) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002ec26) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002ec26) popup_query_data_code_window_t

0x35d8,	// (0x00022c74) list_single_midp_graphic_pane_g3

0x0ea0,	// (0x0002053c) query_popup_data_pane_cp2_ParamLimits

0x0eb3,	// (0x0002054f) query_popup_pane_cp2_ParamLimits

0x0eb3,	// (0x0002054f) query_popup_pane_cp2

0x0b8e,	// (0x0002022a) bg_popup_window_pane_cp11

0x9b99,	// (0x00029235) heading_pane_cp5

0x0f49,	// (0x000205e5) listscroll_popup_info_pane

0x0b8e,	// (0x0002022a) input_focus_pane_cp3

0x0ece,	// (0x0002056a) query_popup_pane_t1

0x0edc,	// (0x00020578) list_popup_info_pane_ParamLimits

0x0edc,	// (0x00020578) list_popup_info_pane

0x0eeb,	// (0x00020587) listscroll_popup_info_pane_g1

0x0ef3,	// (0x0002058f) scroll_pane_cp7

0x0efd,	// (0x00020599) popup_info_list_pane_t1_ParamLimits

0x0efd,	// (0x00020599) popup_info_list_pane_t1

0x0f17,	// (0x000205b3) popup_info_list_pane_t2_ParamLimits

0x0f17,	// (0x000205b3) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002ec2f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002ec2f) popup_info_list_pane_t

0x0b8e,	// (0x0002022a) bg_popup_window_pane_cp12

0xaf78,	// (0x0002a614) find_popup_pane

0x0bf6,	// (0x00020292) bg_popup_window_pane_cp3

0x0f31,	// (0x000205cd) heading_pane_cp3

0x0f3d,	// (0x000205d9) listscroll_popup_graphic_pane

0x0b8e,	// (0x0002022a) bg_popup_window_pane_cp4

0x69ff,	// (0x0002609b) heading_pane_cp4

0x0f49,	// (0x000205e5) listscroll_popup_colour_pane

0x6a09,	// (0x000260a5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6a09,	// (0x000260a5) cell_large_graphic_colour_none_popup_pane

0x6a1d,	// (0x000260b9) grid_large_graphic_colour_popup_pane_ParamLimits

0x6a1d,	// (0x000260b9) grid_large_graphic_colour_popup_pane

0x6a49,	// (0x000260e5) listscroll_popup_colour_pane_g1_ParamLimits

0x6a49,	// (0x000260e5) listscroll_popup_colour_pane_g1

0x6a60,	// (0x000260fc) listscroll_popup_colour_pane_g2_ParamLimits

0x6a60,	// (0x000260fc) listscroll_popup_colour_pane_g2

0x6a77,	// (0x00026113) listscroll_popup_colour_pane_g3_ParamLimits

0x6a77,	// (0x00026113) listscroll_popup_colour_pane_g3

0x6a87,	// (0x00026123) listscroll_popup_colour_pane_g4_ParamLimits

0x6a87,	// (0x00026123) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002ec34) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002ec34) listscroll_popup_colour_pane_g

0x0f51,	// (0x000205ed) scroll_pane_cp6_ParamLimits

0x0f51,	// (0x000205ed) scroll_pane_cp6

0x6a9b,	// (0x00026137) cell_large_graphic_colour_popup_pane_ParamLimits

0x6a9b,	// (0x00026137) cell_large_graphic_colour_popup_pane

0x0f63,	// (0x000205ff) cell_large_graphic_colour_none_popup_pane_t1

0x0b8e,	// (0x0002022a) grid_highlight_pane_cp5

0x0f72,	// (0x0002060e) cell_large_graphic_colour_popup_pane_g1

0x0f7a,	// (0x00020616) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002ec3d) cell_large_graphic_colour_popup_pane_g

0x0f82,	// (0x0002061e) cell_large_graphic_colour_popup_pane_g2_copy1

0x0f8b,	// (0x00020627) grid_highlight_pane_cp4

0x0f93,	// (0x0002062f) bg_popup_window_pane_cp8_ParamLimits

0x0f93,	// (0x0002062f) bg_popup_window_pane_cp8

0x0fae,	// (0x0002064a) popup_snote_single_text_window_g1_ParamLimits

0x0fae,	// (0x0002064a) popup_snote_single_text_window_g1

0x0fc0,	// (0x0002065c) popup_snote_single_text_window_t1_ParamLimits

0x0fc0,	// (0x0002065c) popup_snote_single_text_window_t1

0x0fd3,	// (0x0002066f) popup_snote_single_text_window_t2_ParamLimits

0x0fd3,	// (0x0002066f) popup_snote_single_text_window_t2

0x0fe6,	// (0x00020682) popup_snote_single_text_window_t3_ParamLimits

0x0fe6,	// (0x00020682) popup_snote_single_text_window_t3

0x101f,	// (0x000206bb) popup_snote_single_text_window_t4_ParamLimits

0x101f,	// (0x000206bb) popup_snote_single_text_window_t4

0x1053,	// (0x000206ef) popup_snote_single_text_window_t5_ParamLimits

0x1053,	// (0x000206ef) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002ec42) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002ec42) popup_snote_single_text_window_t

0x1082,	// (0x0002071e) bg_popup_window_pane_cp9_ParamLimits

0x1082,	// (0x0002071e) bg_popup_window_pane_cp9

0x0fae,	// (0x0002064a) popup_snote_single_graphic_window_g1_ParamLimits

0x0fae,	// (0x0002064a) popup_snote_single_graphic_window_g1

0x1090,	// (0x0002072c) popup_snote_single_graphic_window_g2_ParamLimits

0x1090,	// (0x0002072c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002ec4d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002ec4d) popup_snote_single_graphic_window_g

0x109c,	// (0x00020738) popup_snote_single_graphic_window_t1_ParamLimits

0x109c,	// (0x00020738) popup_snote_single_graphic_window_t1

0x10af,	// (0x0002074b) popup_snote_single_graphic_window_t2_ParamLimits

0x10af,	// (0x0002074b) popup_snote_single_graphic_window_t2

0x10c2,	// (0x0002075e) popup_snote_single_graphic_window_t3_ParamLimits

0x10c2,	// (0x0002075e) popup_snote_single_graphic_window_t3

0x10fb,	// (0x00020797) popup_snote_single_graphic_window_t4_ParamLimits

0x10fb,	// (0x00020797) popup_snote_single_graphic_window_t4

0x112f,	// (0x000207cb) popup_snote_single_graphic_window_t5_ParamLimits

0x112f,	// (0x000207cb) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002ec52) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002ec52) popup_snote_single_graphic_window_t

0xaeb6,	// (0x0002a552) grid_graphic_popup_pane_ParamLimits

0xaeb6,	// (0x0002a552) grid_graphic_popup_pane

0xaee4,	// (0x0002a580) listscroll_popup_graphic_pane_g1_ParamLimits

0xaee4,	// (0x0002a580) listscroll_popup_graphic_pane_g1

0xaef8,	// (0x0002a594) listscroll_popup_graphic_pane_g2_ParamLimits

0xaef8,	// (0x0002a594) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0002f047) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0002f047) listscroll_popup_graphic_pane_g

0xaf0c,	// (0x0002a5a8) scroll_pane_cp5

0xae5e,	// (0x0002a4fa) cell_graphic_popup_pane_ParamLimits

0xae5e,	// (0x0002a4fa) cell_graphic_popup_pane

0xae3f,	// (0x0002a4db) cell_graphic_popup_pane_g1

0xae47,	// (0x0002a4e3) cell_graphic_popup_pane_g2

0x0f82,	// (0x0002061e) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0002f040) cell_graphic_popup_pane_g

0xae50,	// (0x0002a4ec) cell_graphic_popup_pane_t2

0x0f8b,	// (0x00020627) grid_highlight_pane_cp3

0x1170,	// (0x0002080c) list_gen_pane_ParamLimits

0x1170,	// (0x0002080c) list_gen_pane

0x1198,	// (0x00020834) scroll_pane

0xad97,	// (0x0002a433) bg_list_pane_g1_ParamLimits

0xad97,	// (0x0002a433) bg_list_pane_g1

0xadb4,	// (0x0002a450) bg_list_pane_g2_ParamLimits

0xadb4,	// (0x0002a450) bg_list_pane_g2

0xadc9,	// (0x0002a465) bg_list_pane_g3_ParamLimits

0xadc9,	// (0x0002a465) bg_list_pane_g3

0xaddd,	// (0x0002a479) bg_list_pane_g4_ParamLimits

0xaddd,	// (0x0002a479) bg_list_pane_g4

0xadf1,	// (0x0002a48d) bg_list_pane_g5_ParamLimits

0xadf1,	// (0x0002a48d) bg_list_pane_g5

0x0004,

0xf999,	// (0x0002f035) bg_list_pane_g_ParamLimits

0xf999,	// (0x0002f035) bg_list_pane_g

0x5b9c,	// (0x00025238) list_double2_graphic_large_graphic_pane_ParamLimits

0x5b9c,	// (0x00025238) list_double2_graphic_large_graphic_pane

0x5b9c,	// (0x00025238) list_double2_graphic_pane_ParamLimits

0x5b9c,	// (0x00025238) list_double2_graphic_pane

0x5b9c,	// (0x00025238) list_double2_large_graphic_pane_ParamLimits

0x5b9c,	// (0x00025238) list_double2_large_graphic_pane

0x5b9c,	// (0x00025238) list_double2_pane_ParamLimits

0x5b9c,	// (0x00025238) list_double2_pane

0x5b9c,	// (0x00025238) list_double_graphic_heading_pane_ParamLimits

0x5b9c,	// (0x00025238) list_double_graphic_heading_pane

0x5b9c,	// (0x00025238) list_double_graphic_pane_ParamLimits

0x5b9c,	// (0x00025238) list_double_graphic_pane

0x5b9c,	// (0x00025238) list_double_heading_pane_ParamLimits

0x5b9c,	// (0x00025238) list_double_heading_pane

0x5b9c,	// (0x00025238) list_double_large_graphic_pane_ParamLimits

0x5b9c,	// (0x00025238) list_double_large_graphic_pane

0x5b9c,	// (0x00025238) list_double_number_pane_ParamLimits

0x5b9c,	// (0x00025238) list_double_number_pane

0x5b9c,	// (0x00025238) list_double_pane_ParamLimits

0x5b9c,	// (0x00025238) list_double_pane

0x5b9c,	// (0x00025238) list_double_time_pane_ParamLimits

0x5b9c,	// (0x00025238) list_double_time_pane

0x5b9c,	// (0x00025238) list_setting_number_pane_ParamLimits

0x5b9c,	// (0x00025238) list_setting_number_pane

0x5b9c,	// (0x00025238) list_setting_pane_ParamLimits

0x5b9c,	// (0x00025238) list_setting_pane

0xad53,	// (0x0002a3ef) list_single_2graphic_pane_ParamLimits

0xad53,	// (0x0002a3ef) list_single_2graphic_pane

0xad53,	// (0x0002a3ef) list_single_graphic_heading_pane_ParamLimits

0xad53,	// (0x0002a3ef) list_single_graphic_heading_pane

0xad53,	// (0x0002a3ef) list_single_graphic_pane_ParamLimits

0xad53,	// (0x0002a3ef) list_single_graphic_pane

0xad53,	// (0x0002a3ef) list_single_heading_pane_ParamLimits

0xad53,	// (0x0002a3ef) list_single_heading_pane

0x5bdb,	// (0x00025277) list_single_large_graphic_pane_ParamLimits

0x5bdb,	// (0x00025277) list_single_large_graphic_pane

0xad53,	// (0x0002a3ef) list_single_number_heading_pane_ParamLimits

0xad53,	// (0x0002a3ef) list_single_number_heading_pane

0xad53,	// (0x0002a3ef) list_single_number_pane_ParamLimits

0xad53,	// (0x0002a3ef) list_single_number_pane

0xad53,	// (0x0002a3ef) list_single_pane_ParamLimits

0xad53,	// (0x0002a3ef) list_single_pane

0x0b8e,	// (0x0002022a) list_highlight_pane_cp1

0x5242,	// (0x000248de) list_single_pane_g1_ParamLimits

0x5242,	// (0x000248de) list_single_pane_g1

0x524e,	// (0x000248ea) list_single_pane_g2_ParamLimits

0x524e,	// (0x000248ea) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002ec64) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002ec64) list_single_pane_g

0x5b86,	// (0x00025222) list_single_pane_t1_ParamLimits

0x5b86,	// (0x00025222) list_single_pane_t1

0x5242,	// (0x000248de) list_single_number_pane_g1_ParamLimits

0x5242,	// (0x000248de) list_single_number_pane_g1

0x524e,	// (0x000248ea) list_single_number_pane_g2_ParamLimits

0x524e,	// (0x000248ea) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002ec64) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002ec64) list_single_number_pane_g

0x5b30,	// (0x000251cc) list_single_number_pane_t1_ParamLimits

0x5b30,	// (0x000251cc) list_single_number_pane_t1

0x5b46,	// (0x000251e2) list_single_number_pane_t2_ParamLimits

0x5b46,	// (0x000251e2) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0002eff6) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0002eff6) list_single_number_pane_t

0x5236,	// (0x000248d2) list_single_graphic_pane_g1_ParamLimits

0x5236,	// (0x000248d2) list_single_graphic_pane_g1

0x5242,	// (0x000248de) list_single_graphic_pane_g2_ParamLimits

0x5242,	// (0x000248de) list_single_graphic_pane_g2

0x524e,	// (0x000248ea) list_single_graphic_pane_g3_ParamLimits

0x524e,	// (0x000248ea) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002ec5d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002ec5d) list_single_graphic_pane_g

0x525a,	// (0x000248f6) list_single_graphic_pane_t1_ParamLimits

0x525a,	// (0x000248f6) list_single_graphic_pane_t1

0x5242,	// (0x000248de) list_single_heading_pane_g1_ParamLimits

0x5242,	// (0x000248de) list_single_heading_pane_g1

0x524e,	// (0x000248ea) list_single_heading_pane_g2_ParamLimits

0x524e,	// (0x000248ea) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002ec64) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002ec64) list_single_heading_pane_g

0x5270,	// (0x0002490c) list_single_heading_pane_t1_ParamLimits

0x5270,	// (0x0002490c) list_single_heading_pane_t1

0x5286,	// (0x00024922) list_single_heading_pane_t2_ParamLimits

0x5286,	// (0x00024922) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002ec69) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002ec69) list_single_heading_pane_t

0x5242,	// (0x000248de) list_single_number_heading_pane_g1_ParamLimits

0x5242,	// (0x000248de) list_single_number_heading_pane_g1

0x524e,	// (0x000248ea) list_single_number_heading_pane_g2_ParamLimits

0x524e,	// (0x000248ea) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002ec64) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002ec64) list_single_number_heading_pane_g

0x5270,	// (0x0002490c) list_single_number_heading_pane_t1_ParamLimits

0x5270,	// (0x0002490c) list_single_number_heading_pane_t1

0x5298,	// (0x00024934) list_single_number_heading_pane_t2_ParamLimits

0x5298,	// (0x00024934) list_single_number_heading_pane_t2

0x52aa,	// (0x00024946) list_single_number_heading_pane_t3_ParamLimits

0x52aa,	// (0x00024946) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002ec6e) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002ec6e) list_single_number_heading_pane_t

0x52bc,	// (0x00024958) list_single_graphic_heading_pane_g1_ParamLimits

0x52bc,	// (0x00024958) list_single_graphic_heading_pane_g1

0x52c8,	// (0x00024964) list_single_graphic_heading_pane_g4_ParamLimits

0x52c8,	// (0x00024964) list_single_graphic_heading_pane_g4

0x524e,	// (0x000248ea) list_single_graphic_heading_pane_g5_ParamLimits

0x524e,	// (0x000248ea) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002ec75) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002ec75) list_single_graphic_heading_pane_g

0x5270,	// (0x0002490c) list_single_graphic_heading_pane_t1_ParamLimits

0x5270,	// (0x0002490c) list_single_graphic_heading_pane_t1

0x52d9,	// (0x00024975) list_single_graphic_heading_pane_t2_ParamLimits

0x52d9,	// (0x00024975) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002ec7c) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002ec7c) list_single_graphic_heading_pane_t

0x52eb,	// (0x00024987) list_single_large_graphic_pane_g1_ParamLimits

0x52eb,	// (0x00024987) list_single_large_graphic_pane_g1

0x5242,	// (0x000248de) list_single_large_graphic_pane_g2_ParamLimits

0x5242,	// (0x000248de) list_single_large_graphic_pane_g2

0x524e,	// (0x000248ea) list_single_large_graphic_pane_g3_ParamLimits

0x524e,	// (0x000248ea) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002ec81) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002ec81) list_single_large_graphic_pane_g

0x9d42,	// (0x000293de) wait_border_pane_g2_copy1

0x52f7,	// (0x00024993) list_single_large_graphic_pane_g4_cp2

0x5270,	// (0x0002490c) list_single_large_graphic_pane_t1_ParamLimits

0x5270,	// (0x0002490c) list_single_large_graphic_pane_t1

0x52ff,	// (0x0002499b) list_double_pane_g1_ParamLimits

0x52ff,	// (0x0002499b) list_double_pane_g1

0x530b,	// (0x000249a7) list_double_pane_g2_ParamLimits

0x530b,	// (0x000249a7) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002ec88) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002ec88) list_double_pane_g

0x5317,	// (0x000249b3) list_double_pane_t1_ParamLimits

0x5317,	// (0x000249b3) list_double_pane_t1

0x532d,	// (0x000249c9) list_double_pane_t2_ParamLimits

0x532d,	// (0x000249c9) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002ec8d) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002ec8d) list_double_pane_t

0x533f,	// (0x000249db) list_double2_pane_g1_ParamLimits

0x533f,	// (0x000249db) list_double2_pane_g1

0x530b,	// (0x000249a7) list_double2_pane_g2_ParamLimits

0x530b,	// (0x000249a7) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002ec92) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002ec92) list_double2_pane_g

0x5317,	// (0x000249b3) list_double2_pane_t1_ParamLimits

0x5317,	// (0x000249b3) list_double2_pane_t1

0x5350,	// (0x000249ec) list_double2_pane_t2_ParamLimits

0x5350,	// (0x000249ec) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002ec97) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002ec97) list_double2_pane_t

0x52ff,	// (0x0002499b) list_double_number_pane_g1_ParamLimits

0x52ff,	// (0x0002499b) list_double_number_pane_g1

0x530b,	// (0x000249a7) list_double_number_pane_g2_ParamLimits

0x530b,	// (0x000249a7) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002ec88) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002ec88) list_double_number_pane_g

0x5362,	// (0x000249fe) list_double_number_pane_t1_ParamLimits

0x5362,	// (0x000249fe) list_double_number_pane_t1

0x5374,	// (0x00024a10) list_double_number_pane_t2_ParamLimits

0x5374,	// (0x00024a10) list_double_number_pane_t2

0x538a,	// (0x00024a26) list_double_number_pane_t3_ParamLimits

0x538a,	// (0x00024a26) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002ec9c) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002ec9c) list_double_number_pane_t

0x539c,	// (0x00024a38) list_double_graphic_pane_g1_ParamLimits

0x539c,	// (0x00024a38) list_double_graphic_pane_g1

0x53a8,	// (0x00024a44) list_double_graphic_pane_g2_ParamLimits

0x53a8,	// (0x00024a44) list_double_graphic_pane_g2

0x53b7,	// (0x00024a53) list_double_graphic_pane_g3_ParamLimits

0x53b7,	// (0x00024a53) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002eca3) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002eca3) list_double_graphic_pane_g

0x53cf,	// (0x00024a6b) list_double_graphic_pane_t1_ParamLimits

0x53cf,	// (0x00024a6b) list_double_graphic_pane_t1

0x53e5,	// (0x00024a81) list_double_graphic_pane_t2_ParamLimits

0x53e5,	// (0x00024a81) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002ecac) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002ecac) list_double_graphic_pane_t

0x539c,	// (0x00024a38) list_double2_graphic_pane_g1_ParamLimits

0x539c,	// (0x00024a38) list_double2_graphic_pane_g1

0x53f7,	// (0x00024a93) list_double2_graphic_pane_g2_ParamLimits

0x53f7,	// (0x00024a93) list_double2_graphic_pane_g2

0x5403,	// (0x00024a9f) list_double2_graphic_pane_g3_ParamLimits

0x5403,	// (0x00024a9f) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002ecb1) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002ecb1) list_double2_graphic_pane_g

0x5374,	// (0x00024a10) list_double2_graphic_pane_t1_ParamLimits

0x5374,	// (0x00024a10) list_double2_graphic_pane_t1

0x540f,	// (0x00024aab) list_double2_graphic_pane_t2_ParamLimits

0x540f,	// (0x00024aab) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002ecb8) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002ecb8) list_double2_graphic_pane_t

0x5421,	// (0x00024abd) list_double_large_graphic_pane_g1_ParamLimits

0x5421,	// (0x00024abd) list_double_large_graphic_pane_g1

0x533f,	// (0x000249db) list_double_large_graphic_pane_g2_ParamLimits

0x533f,	// (0x000249db) list_double_large_graphic_pane_g2

0x530b,	// (0x000249a7) list_double_large_graphic_pane_g3_ParamLimits

0x530b,	// (0x000249a7) list_double_large_graphic_pane_g3

0x544c,	// (0x00024ae8) list_double_large_graphic_pane_g4_ParamLimits

0x544c,	// (0x00024ae8) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002ecbd) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002ecbd) list_double_large_graphic_pane_g

0x5474,	// (0x00024b10) list_double_large_graphic_pane_t1_ParamLimits

0x5474,	// (0x00024b10) list_double_large_graphic_pane_t1

0x548d,	// (0x00024b29) list_double_large_graphic_pane_t2_ParamLimits

0x548d,	// (0x00024b29) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002ecc8) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002ecc8) list_double_large_graphic_pane_t

0x549f,	// (0x00024b3b) list_double2_large_graphic_pane_g1_ParamLimits

0x549f,	// (0x00024b3b) list_double2_large_graphic_pane_g1

0x533f,	// (0x000249db) list_double2_large_graphic_pane_g2_ParamLimits

0x533f,	// (0x000249db) list_double2_large_graphic_pane_g2

0x530b,	// (0x000249a7) list_double2_large_graphic_pane_g3_ParamLimits

0x530b,	// (0x000249a7) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002eccd) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002eccd) list_double2_large_graphic_pane_g

0x54ab,	// (0x00024b47) list_double2_large_graphic_pane_t1_ParamLimits

0x54ab,	// (0x00024b47) list_double2_large_graphic_pane_t1

0x54c1,	// (0x00024b5d) list_double2_large_graphic_pane_t2_ParamLimits

0x54c1,	// (0x00024b5d) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002ecd4) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002ecd4) list_double2_large_graphic_pane_t

0x54d3,	// (0x00024b6f) list_double_heading_pane_g1_ParamLimits

0x54d3,	// (0x00024b6f) list_double_heading_pane_g1

0x54e4,	// (0x00024b80) list_double_heading_pane_g2_ParamLimits

0x54e4,	// (0x00024b80) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002ecd9) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002ecd9) list_double_heading_pane_g

0x54f0,	// (0x00024b8c) list_double_heading_pane_t1_ParamLimits

0x54f0,	// (0x00024b8c) list_double_heading_pane_t1

0x5506,	// (0x00024ba2) list_double_heading_pane_t2_ParamLimits

0x5506,	// (0x00024ba2) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002ecde) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002ecde) list_double_heading_pane_t

0x5518,	// (0x00024bb4) list_double_graphic_heading_pane_g1_ParamLimits

0x5518,	// (0x00024bb4) list_double_graphic_heading_pane_g1

0x54d3,	// (0x00024b6f) list_double_graphic_heading_pane_g2_ParamLimits

0x54d3,	// (0x00024b6f) list_double_graphic_heading_pane_g2

0x54e4,	// (0x00024b80) list_double_graphic_heading_pane_g3_ParamLimits

0x54e4,	// (0x00024b80) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002ece3) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002ece3) list_double_graphic_heading_pane_g

0x5524,	// (0x00024bc0) list_double_graphic_heading_pane_t1_ParamLimits

0x5524,	// (0x00024bc0) list_double_graphic_heading_pane_t1

0x553a,	// (0x00024bd6) list_double_graphic_heading_pane_t2_ParamLimits

0x553a,	// (0x00024bd6) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002ecea) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002ecea) list_double_graphic_heading_pane_t

0x533f,	// (0x000249db) list_double_time_pane_g1_ParamLimits

0x533f,	// (0x000249db) list_double_time_pane_g1

0x530b,	// (0x000249a7) list_double_time_pane_g2_ParamLimits

0x530b,	// (0x000249a7) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x0002ec92) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x0002ec92) list_double_time_pane_g

0x54ab,	// (0x00024b47) list_double_time_pane_t1_ParamLimits

0x54ab,	// (0x00024b47) list_double_time_pane_t1

0x554c,	// (0x00024be8) list_double_time_pane_t2_ParamLimits

0x554c,	// (0x00024be8) list_double_time_pane_t2

0x555e,	// (0x00024bfa) list_double_time_pane_t3_ParamLimits

0x555e,	// (0x00024bfa) list_double_time_pane_t3

0x5570,	// (0x00024c0c) list_double_time_pane_t4_ParamLimits

0x5570,	// (0x00024c0c) list_double_time_pane_t4

0x0003,

0xf653,	// (0x0002ecef) list_double_time_pane_t_ParamLimits

0xf653,	// (0x0002ecef) list_double_time_pane_t

0x5582,	// (0x00024c1e) list_setting_pane_g1_ParamLimits

0x5582,	// (0x00024c1e) list_setting_pane_g1

0x558e,	// (0x00024c2a) list_setting_pane_g2_ParamLimits

0x558e,	// (0x00024c2a) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0002ecf8) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0002ecf8) list_setting_pane_g

0x559a,	// (0x00024c36) list_setting_pane_t1_ParamLimits

0x559a,	// (0x00024c36) list_setting_pane_t1

0x55b4,	// (0x00024c50) list_setting_pane_t2_ParamLimits

0x55b4,	// (0x00024c50) list_setting_pane_t2

0x0002,

0xf661,	// (0x0002ecfd) list_setting_pane_t_ParamLimits

0xf661,	// (0x0002ecfd) list_setting_pane_t

0x55f3,	// (0x00024c8f) set_value_pane_cp_ParamLimits

0x55f3,	// (0x00024c8f) set_value_pane_cp

0x5601,	// (0x00024c9d) list_setting_number_pane_g1_ParamLimits

0x5601,	// (0x00024c9d) list_setting_number_pane_g1

0x560d,	// (0x00024ca9) list_setting_number_pane_g2_ParamLimits

0x560d,	// (0x00024ca9) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0002ed04) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0002ed04) list_setting_number_pane_g

0x5619,	// (0x00024cb5) list_setting_number_pane_t1_ParamLimits

0x5619,	// (0x00024cb5) list_setting_number_pane_t1

0x5632,	// (0x00024cce) list_setting_number_pane_t2_ParamLimits

0x5632,	// (0x00024cce) list_setting_number_pane_t2

0x564c,	// (0x00024ce8) list_setting_number_pane_t3_ParamLimits

0x564c,	// (0x00024ce8) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0002ed09) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0002ed09) list_setting_number_pane_t

0x55f3,	// (0x00024c8f) set_value_pane_ParamLimits

0x55f3,	// (0x00024c8f) set_value_pane

0x2b85,	// (0x00022221) bg_set_opt_pane_ParamLimits

0x2b85,	// (0x00022221) bg_set_opt_pane

0x568f,	// (0x00024d2b) set_value_pane_t1

0x2bb4,	// (0x00022250) slider_set_pane_cp3

0x2bbd,	// (0x00022259) volume_small_pane_cp

0x2bc6,	// (0x00022262) list_form_gen_pane

0x2bcf,	// (0x0002226b) scroll_pane_cp8

0x56a5,	// (0x00024d41) form_field_data_pane_ParamLimits

0x56a5,	// (0x00024d41) form_field_data_pane

0x56cb,	// (0x00024d67) form_field_data_wide_pane_ParamLimits

0x56cb,	// (0x00024d67) form_field_data_wide_pane

0x56f0,	// (0x00024d8c) form_field_popup_pane_ParamLimits

0x56f0,	// (0x00024d8c) form_field_popup_pane

0x5712,	// (0x00024dae) form_field_popup_wide_pane_ParamLimits

0x5712,	// (0x00024dae) form_field_popup_wide_pane

0x5733,	// (0x00024dcf) form_field_slider_pane_ParamLimits

0x5733,	// (0x00024dcf) form_field_slider_pane

0x5746,	// (0x00024de2) form_field_slider_wide_pane_ParamLimits

0x5746,	// (0x00024de2) form_field_slider_wide_pane

0x2c37,	// (0x000222d3) data_form_pane

0x5763,	// (0x00024dff) form_field_data_pane_t1

0x2c43,	// (0x000222df) input_focus_pane

0x577d,	// (0x00024e19) data_form_wide_pane

0x579a,	// (0x00024e36) form_field_data_wide_pane_t1

0x0fa0,	// (0x0002063c) input_focus_pane_cp6

0x57bc,	// (0x00024e58) form_field_popup_pane_t1

0x2c43,	// (0x000222df) input_focus_pane_cp7

0x2cb0,	// (0x0002234c) list_form_pane

0x57de,	// (0x00024e7a) form_field_popup_wide_pane_t1

0x2c43,	// (0x000222df) input_focus_pane_cp8

0x2cd9,	// (0x00022375) list_form_wide_pane

0x57fb,	// (0x00024e97) form_field_slider_pane_t1_ParamLimits

0x57fb,	// (0x00024e97) form_field_slider_pane_t1

0x5813,	// (0x00024eaf) form_field_slider_pane_t2_ParamLimits

0x5813,	// (0x00024eaf) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0002ed19) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0002ed19) form_field_slider_pane_t

0x0be8,	// (0x00020284) input_focus_pane_cp9_ParamLimits

0x0be8,	// (0x00020284) input_focus_pane_cp9

0x5828,	// (0x00024ec4) slider_cont_pane_ParamLimits

0x5828,	// (0x00024ec4) slider_cont_pane

0x2ce8,	// (0x00022384) form_field_slider_wide_pane_t1_ParamLimits

0x2ce8,	// (0x00022384) form_field_slider_wide_pane_t1

0x583c,	// (0x00024ed8) form_field_slider_wide_pane_t2_ParamLimits

0x583c,	// (0x00024ed8) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0002ed1e) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0002ed1e) form_field_slider_wide_pane_t

0x0be8,	// (0x00020284) input_focus_pane_cp10_ParamLimits

0x0be8,	// (0x00020284) input_focus_pane_cp10

0x584e,	// (0x00024eea) slider_cont_pane_cp1_ParamLimits

0x584e,	// (0x00024eea) slider_cont_pane_cp1

0x5862,	// (0x00024efe) slider_form_pane_cp

0x2d0c,	// (0x000223a8) input_focus_pane_g1

0x2d14,	// (0x000223b0) input_focus_pane_g2

0x2d1c,	// (0x000223b8) input_focus_pane_g3

0x2d24,	// (0x000223c0) input_focus_pane_g4

0x2d2c,	// (0x000223c8) input_focus_pane_g5

0x2d34,	// (0x000223d0) input_focus_pane_g6

0x2d3c,	// (0x000223d8) input_focus_pane_g7

0x2d44,	// (0x000223e0) input_focus_pane_g8

0x2d4c,	// (0x000223e8) input_focus_pane_g9

0x0b84,	// (0x00020220) input_focus_pane_g10

0x0009,

0xf687,	// (0x0002ed23) input_focus_pane_g

0x9d4b,	// (0x000293e7) wait_border_pane_g3_copy1

0x586a,	// (0x00024f06) data_form_pane_t1

0x0b84,	// (0x00020220) wait_anim_pane_g1_copy1

0x5b58,	// (0x000251f4) data_form_wide_pane_t1

0x5887,	// (0x00024f23) list_form_graphic_pane_cp_ParamLimits

0x5887,	// (0x00024f23) list_form_graphic_pane_cp

0xacaa,	// (0x0002a346) slider_form_pane_g1

0xacb3,	// (0x0002a34f) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0002f026) slider_form_pane_g

0x589c,	// (0x00024f38) list_form_graphic_pane_ParamLimits

0x589c,	// (0x00024f38) list_form_graphic_pane

0x58ae,	// (0x00024f4a) list_form_graphic_pane_g1

0x58b6,	// (0x00024f52) list_form_graphic_pane_t1_ParamLimits

0x58b6,	// (0x00024f52) list_form_graphic_pane_t1

0x0bf6,	// (0x00020292) list_highlight_pane_cp5_ParamLimits

0x0bf6,	// (0x00020292) list_highlight_pane_cp5

0x58cb,	// (0x00024f67) find_pane_g1

0x2d83,	// (0x0002241f) input_find_pane

0x58d4,	// (0x00024f70) input_find_pane_g1_ParamLimits

0x58d4,	// (0x00024f70) input_find_pane_g1

0x58e0,	// (0x00024f7c) input_find_pane_t1_ParamLimits

0x58e0,	// (0x00024f7c) input_find_pane_t1

0x58f5,	// (0x00024f91) input_find_pane_t2_ParamLimits

0x58f5,	// (0x00024f91) input_find_pane_t2

0x0001,

0xf69c,	// (0x0002ed38) input_find_pane_t_ParamLimits

0xf69c,	// (0x0002ed38) input_find_pane_t

0x2d8c,	// (0x00022428) input_focus_pane_cp5_ParamLimits

0x2d8c,	// (0x00022428) input_focus_pane_cp5

0x2d9a,	// (0x00022436) bg_popup_window_pane_cp2_ParamLimits

0x2d9a,	// (0x00022436) bg_popup_window_pane_cp2

0x2da7,	// (0x00022443) listscroll_menu_pane_ParamLimits

0x2da7,	// (0x00022443) listscroll_menu_pane

0x6ad6,	// (0x00026172) popup_submenu_window_ParamLimits

0x6ad6,	// (0x00026172) popup_submenu_window

0x2db3,	// (0x0002244f) find_popup_pane_g1

0x2dbb,	// (0x00022457) input_popup_find_pane_cp

0x2d8c,	// (0x00022428) input_focus_pane_cp4_ParamLimits

0x2d8c,	// (0x00022428) input_focus_pane_cp4

0x2dc5,	// (0x00022461) input_popup_find_pane_t1_ParamLimits

0x2dc5,	// (0x00022461) input_popup_find_pane_t1

0x0b8e,	// (0x0002022a) bg_popup_sub_pane_cp

0x2df3,	// (0x0002248f) listscroll_popup_sub_pane

0x2dfb,	// (0x00022497) list_submenu_pane_ParamLimits

0x2dfb,	// (0x00022497) list_submenu_pane

0x2e0c,	// (0x000224a8) scroll_pane_cp4

0x2e14,	// (0x000224b0) list_single_popup_submenu_pane_ParamLimits

0x2e14,	// (0x000224b0) list_single_popup_submenu_pane

0x2e29,	// (0x000224c5) list_single_popup_submenu_pane_g1

0x2e31,	// (0x000224cd) list_single_popup_submenu_pane_t1_ParamLimits

0x2e31,	// (0x000224cd) list_single_popup_submenu_pane_t1

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp1_ParamLimits

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp1

0x6b14,	// (0x000261b0) tabs_2_active_pane_g1

0x6b1c,	// (0x000261b8) tabs_2_active_pane_t1

0x0bf6,	// (0x00020292) bg_passive_tab_pane_cp1_ParamLimits

0x0bf6,	// (0x00020292) bg_passive_tab_pane_cp1

0x6b14,	// (0x000261b0) tabs_2_passive_pane_g1

0x6b1c,	// (0x000261b8) tabs_2_passive_pane_t1

0x36b3,	// (0x00022d4f) bg_active_tab_pane_cp4

0x6b2e,	// (0x000261ca) tabs_2_long_active_pane_t1

0x6b41,	// (0x000261dd) bg_passive_tab_pane_cp4

0x83f3,	// (0x00027a8f) list_single_midp_graphic_pane_g4_ParamLimits

0x36b3,	// (0x00022d4f) bg_active_tab_pane_cp5

0x6b4d,	// (0x000261e9) tabs_3_long_active_pane_t1

0x6b41,	// (0x000261dd) bg_passive_tab_pane_cp5

0x83f3,	// (0x00027a8f) list_single_midp_graphic_pane_g4

0x0bf6,	// (0x00020292) bg_popup_window_pane_cp13_ParamLimits

0x0bf6,	// (0x00020292) bg_popup_window_pane_cp13

0x2e4f,	// (0x000224eb) listscroll_popup_fast_pane_ParamLimits

0x2e4f,	// (0x000224eb) listscroll_popup_fast_pane

0x2e5e,	// (0x000224fa) grid_popup_fast_pane_ParamLimits

0x2e5e,	// (0x000224fa) grid_popup_fast_pane

0x2e70,	// (0x0002250c) scroll_pane_cp9_ParamLimits

0x2e70,	// (0x0002250c) scroll_pane_cp9

0xc62b,	// (0x0002bcc7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc62b,	// (0x0002bcc7) list_single_graphic_hl_pane_t1_cp2

0x2e94,	// (0x00022530) input_focus_pane_cp20_ParamLimits

0x2e94,	// (0x00022530) input_focus_pane_cp20

0x2ea2,	// (0x0002253e) query_popup_data_pane_t1_ParamLimits

0x2ea2,	// (0x0002253e) query_popup_data_pane_t1

0x2eb5,	// (0x00022551) query_popup_data_pane_t2_ParamLimits

0x2eb5,	// (0x00022551) query_popup_data_pane_t2

0x2efb,	// (0x00022597) query_popup_data_pane_t3_ParamLimits

0x2efb,	// (0x00022597) query_popup_data_pane_t3

0x2f3c,	// (0x000225d8) query_popup_data_pane_t4_ParamLimits

0x2f3c,	// (0x000225d8) query_popup_data_pane_t4

0x2f78,	// (0x00022614) query_popup_data_pane_t5_ParamLimits

0x2f78,	// (0x00022614) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0002ed3d) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0002ed3d) query_popup_data_pane_t

0x2d0c,	// (0x000223a8) bg_set_opt_pane_g1

0x2d14,	// (0x000223b0) bg_set_opt_pane_g2

0x2d1c,	// (0x000223b8) bg_set_opt_pane_g3

0x2d24,	// (0x000223c0) bg_set_opt_pane_g4

0x2d2c,	// (0x000223c8) bg_set_opt_pane_g5

0x2d34,	// (0x000223d0) bg_set_opt_pane_g6

0x2d3c,	// (0x000223d8) bg_set_opt_pane_g7

0x2d44,	// (0x000223e0) bg_set_opt_pane_g8

0x2d4c,	// (0x000223e8) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0002ed48) bg_set_opt_pane_g

0x6fc1,	// (0x0002665d) control_top_pane_stacon_ParamLimits

0x6fc1,	// (0x0002665d) control_top_pane_stacon

0x7014,	// (0x000266b0) signal_pane_stacon_ParamLimits

0x7014,	// (0x000266b0) signal_pane_stacon

0x34d0,	// (0x00022b6c) stacon_top_pane_g1_ParamLimits

0x34d0,	// (0x00022b6c) stacon_top_pane_g1

0x7039,	// (0x000266d5) title_pane_stacon_ParamLimits

0x7039,	// (0x000266d5) title_pane_stacon

0x7063,	// (0x000266ff) uni_indicator_pane_stacon_ParamLimits

0x7063,	// (0x000266ff) uni_indicator_pane_stacon

0x707b,	// (0x00026717) battery_pane_stacon_ParamLimits

0x707b,	// (0x00026717) battery_pane_stacon

0x70bf,	// (0x0002675b) control_bottom_pane_stacon_ParamLimits

0x70bf,	// (0x0002675b) control_bottom_pane_stacon

0x70e2,	// (0x0002677e) navi_pane_stacon_ParamLimits

0x70e2,	// (0x0002677e) navi_pane_stacon

0x34f2,	// (0x00022b8e) stacon_bottom_pane_g1_ParamLimits

0x34f2,	// (0x00022b8e) stacon_bottom_pane_g1

0x6b5f,	// (0x000261fb) aid_levels_signal_lsc_ParamLimits

0x6b5f,	// (0x000261fb) aid_levels_signal_lsc

0x6b76,	// (0x00026212) signal_pane_stacon_g1_ParamLimits

0x6b76,	// (0x00026212) signal_pane_stacon_g1

0x6b8a,	// (0x00026226) signal_pane_stacon_g2_ParamLimits

0x6b8a,	// (0x00026226) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0002ed5b) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002ed5b) signal_pane_stacon_g

0x6bbf,	// (0x0002625b) title_pane_stacon_t1_ParamLimits

0x6bbf,	// (0x0002625b) title_pane_stacon_t1

0x3055,	// (0x000226f1) uni_indicator_pane_stacon_g1

0x305f,	// (0x000226fb) uni_indicator_pane_stacon_g2

0x3041,	// (0x000226dd) uni_indicator_pane_stacon_g3

0x304b,	// (0x000226e7) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0002ed67) uni_indicator_pane_stacon_g

0x6be4,	// (0x00026280) control_top_pane_stacon_g1

0x6bec,	// (0x00026288) control_top_pane_stacon_t1_ParamLimits

0x6bec,	// (0x00026288) control_top_pane_stacon_t1

0x6c23,	// (0x000262bf) aid_levels_battery_lsc_ParamLimits

0x6c23,	// (0x000262bf) aid_levels_battery_lsc

0x6c3b,	// (0x000262d7) battery_pane_stacon_g1_ParamLimits

0x6c3b,	// (0x000262d7) battery_pane_stacon_g1

0x6c4e,	// (0x000262ea) battery_pane_stacon_g2_ParamLimits

0x6c4e,	// (0x000262ea) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0002ed70) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0002ed70) battery_pane_stacon_g

0x6c8c,	// (0x00026328) navi_icon_pane_stacon

0x6ca0,	// (0x0002633c) navi_navi_pane_stacon

0x6c8c,	// (0x00026328) navi_text_pane_stacon

0x6be4,	// (0x00026280) control_bottom_pane_stacon_g1

0x6cb6,	// (0x00026352) control_bottom_pane_stacon_t1_ParamLimits

0x6cb6,	// (0x00026352) control_bottom_pane_stacon_t1

0x6ced,	// (0x00026389) grid_app_pane_ParamLimits

0x6ced,	// (0x00026389) grid_app_pane

0x6d11,	// (0x000263ad) scroll_pane_cp15_ParamLimits

0x6d11,	// (0x000263ad) scroll_pane_cp15

0x6d24,	// (0x000263c0) cell_app_pane_ParamLimits

0x6d24,	// (0x000263c0) cell_app_pane

0x6d50,	// (0x000263ec) cell_app_pane_g1_ParamLimits

0x6d50,	// (0x000263ec) cell_app_pane_g1

0x313f,	// (0x000227db) cell_app_pane_g2_ParamLimits

0x313f,	// (0x000227db) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0002ed75) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0002ed75) cell_app_pane_g

0x314b,	// (0x000227e7) cell_app_pane_t1_ParamLimits

0x314b,	// (0x000227e7) cell_app_pane_t1

0x3162,	// (0x000227fe) grid_highlight_pane_ParamLimits

0x3162,	// (0x000227fe) grid_highlight_pane

0x2d0c,	// (0x000223a8) cell_highlight_pane_g1

0x2d14,	// (0x000223b0) cell_highlight_pane_g2

0x2d1c,	// (0x000223b8) cell_highlight_pane_g3

0x2d24,	// (0x000223c0) cell_highlight_pane_g4

0x2d2c,	// (0x000223c8) cell_highlight_pane_g5

0x2d34,	// (0x000223d0) cell_highlight_pane_g6

0x2d3c,	// (0x000223d8) cell_highlight_pane_g7

0x2d44,	// (0x000223e0) cell_highlight_pane_g8

0x2d4c,	// (0x000223e8) cell_highlight_pane_g9

0x0b84,	// (0x00020220) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0002ed23) cell_highlight_pane_g

0x3173,	// (0x0002280f) bg_scroll_pane

0x6d83,	// (0x0002641f) scroll_handle_pane

0x31ba,	// (0x00022856) scroll_bg_pane_g1

0x31cf,	// (0x0002286b) scroll_bg_pane_g2

0x31e7,	// (0x00022883) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0002ed7a) scroll_bg_pane_g

0x31fc,	// (0x00022898) scroll_handle_focus_pane_ParamLimits

0x31fc,	// (0x00022898) scroll_handle_focus_pane

0x31ba,	// (0x00022856) scroll_handle_pane_g1

0x3209,	// (0x000228a5) scroll_handle_pane_g2

0x31e7,	// (0x00022883) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0002ed81) scroll_handle_pane_g

0x2d8c,	// (0x00022428) bg_popup_sub_pane_cp21_ParamLimits

0x2d8c,	// (0x00022428) bg_popup_sub_pane_cp21

0x321d,	// (0x000228b9) popup_fep_japan_predictive_window_t1_ParamLimits

0x321d,	// (0x000228b9) popup_fep_japan_predictive_window_t1

0x3234,	// (0x000228d0) popup_fep_japan_predictive_window_t2_ParamLimits

0x3234,	// (0x000228d0) popup_fep_japan_predictive_window_t2

0x3267,	// (0x00022903) popup_fep_japan_predictive_window_t3_ParamLimits

0x3267,	// (0x00022903) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0002ed88) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0002ed88) popup_fep_japan_predictive_window_t

0x0b8e,	// (0x0002022a) bg_popup_sub_pane_cp23

0x329e,	// (0x0002293a) listscroll_japin_cand_pane

0x32a6,	// (0x00022942) popup_fep_japan_candidate_window_t1

0x32b4,	// (0x00022950) candidate_pane_ParamLimits

0x32b4,	// (0x00022950) candidate_pane

0x32c6,	// (0x00022962) scroll_pane_cp30

0x32d0,	// (0x0002296c) list_single_popup_jap_candidate_pane_ParamLimits

0x32d0,	// (0x0002296c) list_single_popup_jap_candidate_pane

0x0b8e,	// (0x0002022a) list_highlight_pane_cp30

0x32e4,	// (0x00022980) list_single_popup_jap_candidate_pane_t1

0x6dac,	// (0x00026448) level_1_signal

0x6db9,	// (0x00026455) level_2_signal

0x6dc6,	// (0x00026462) level_3_signal

0x6dd3,	// (0x0002646f) level_4_signal

0x6de0,	// (0x0002647c) level_5_signal

0x6ded,	// (0x00026489) level_6_signal

0x6dfa,	// (0x00026496) level_7_signal

0x6dac,	// (0x00026448) level_1_battery

0x6db9,	// (0x00026455) level_2_battery

0x6dc6,	// (0x00026462) level_3_battery

0x6dd3,	// (0x0002646f) level_4_battery

0x6de0,	// (0x0002647c) level_5_battery

0x6ded,	// (0x00026489) level_6_battery

0x6dfa,	// (0x00026496) level_7_battery

0x330b,	// (0x000229a7) list_menu_pane_ParamLimits

0x330b,	// (0x000229a7) list_menu_pane

0x3321,	// (0x000229bd) scroll_pane_cp25_ParamLimits

0x3321,	// (0x000229bd) scroll_pane_cp25

0x333a,	// (0x000229d6) list_double2_graphic_pane_cp2_ParamLimits

0x333a,	// (0x000229d6) list_double2_graphic_pane_cp2

0x333a,	// (0x000229d6) list_double2_large_graphic_pane_cp2_ParamLimits

0x333a,	// (0x000229d6) list_double2_large_graphic_pane_cp2

0x333a,	// (0x000229d6) list_double2_pane_cp2_ParamLimits

0x333a,	// (0x000229d6) list_double2_pane_cp2

0x333a,	// (0x000229d6) list_double_graphic_pane_cp2_ParamLimits

0x333a,	// (0x000229d6) list_double_graphic_pane_cp2

0x333a,	// (0x000229d6) list_double_large_graphic_pane_cp2_ParamLimits

0x333a,	// (0x000229d6) list_double_large_graphic_pane_cp2

0x333a,	// (0x000229d6) list_double_number_pane_cp2_ParamLimits

0x333a,	// (0x000229d6) list_double_number_pane_cp2

0x333a,	// (0x000229d6) list_double_pane_cp2_ParamLimits

0x333a,	// (0x000229d6) list_double_pane_cp2

0x6e3c,	// (0x000264d8) list_single_2graphic_pane_cp2_ParamLimits

0x6e3c,	// (0x000264d8) list_single_2graphic_pane_cp2

0x6e3c,	// (0x000264d8) list_single_graphic_heading_pane_cp2_ParamLimits

0x6e3c,	// (0x000264d8) list_single_graphic_heading_pane_cp2

0x6e3c,	// (0x000264d8) list_single_graphic_pane_cp2_ParamLimits

0x6e3c,	// (0x000264d8) list_single_graphic_pane_cp2

0x6e3c,	// (0x000264d8) list_single_heading_pane_cp2_ParamLimits

0x6e3c,	// (0x000264d8) list_single_heading_pane_cp2

0x334a,	// (0x000229e6) list_single_large_graphic_pane_cp2_ParamLimits

0x334a,	// (0x000229e6) list_single_large_graphic_pane_cp2

0x6e3c,	// (0x000264d8) list_single_number_heading_pane_cp2_ParamLimits

0x6e3c,	// (0x000264d8) list_single_number_heading_pane_cp2

0x6e3c,	// (0x000264d8) list_single_number_pane_cp2_ParamLimits

0x6e3c,	// (0x000264d8) list_single_number_pane_cp2

0x6e3c,	// (0x000264d8) list_single_pane_cp2_ParamLimits

0x6e3c,	// (0x000264d8) list_single_pane_cp2

0x3363,	// (0x000229ff) bg_popup_sub_pane_cp22

0x6f25,	// (0x000265c1) popup_side_volume_key_window_g1

0x6f4f,	// (0x000265eb) popup_side_volume_key_window_t1

0x6f6d,	// (0x00026609) volume_small_pane_cp1

0x0be8,	// (0x00020284) bg_popup_sub_pane_cp24_ParamLimits

0x0be8,	// (0x00020284) bg_popup_sub_pane_cp24

0x3379,	// (0x00022a15) fep_china_uni_candidate_pane_ParamLimits

0x3379,	// (0x00022a15) fep_china_uni_candidate_pane

0x338d,	// (0x00022a29) fep_china_uni_entry_pane

0x339d,	// (0x00022a39) popup_fep_china_uni_window_g1

0x33b9,	// (0x00022a55) fep_china_uni_entry_pane_g1

0x33c3,	// (0x00022a5f) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0002edb9) fep_china_uni_entry_pane_g

0x33cd,	// (0x00022a69) fep_entry_item_pane

0x33d7,	// (0x00022a73) fep_candidate_item_pane

0x33df,	// (0x00022a7b) fep_china_uni_candidate_pane_g1

0x33e9,	// (0x00022a85) fep_china_uni_candidate_pane_g2

0x33f1,	// (0x00022a8d) fep_china_uni_candidate_pane_g3

0x33f9,	// (0x00022a95) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0002edbe) fep_china_uni_candidate_pane_g

0x0b84,	// (0x00020220) fep_entry_item_pane_g1

0x3403,	// (0x00022a9f) fep_entry_item_pane_t1_ParamLimits

0x3403,	// (0x00022a9f) fep_entry_item_pane_t1

0x3419,	// (0x00022ab5) fep_candidate_item_pane_t1_ParamLimits

0x3419,	// (0x00022ab5) fep_candidate_item_pane_t1

0x342e,	// (0x00022aca) fep_candidate_item_pane_t2_ParamLimits

0x342e,	// (0x00022aca) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0002edc7) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0002edc7) fep_candidate_item_pane_t

0x0bf6,	// (0x00020292) list_highlight_pane_cp31_ParamLimits

0x0bf6,	// (0x00020292) list_highlight_pane_cp31

0x3440,	// (0x00022adc) level_1_signal_lsc

0x3449,	// (0x00022ae5) level_2_signal_lsc

0x3452,	// (0x00022aee) level_3_signal_lsc

0x345b,	// (0x00022af7) level_4_signal_lsc

0x3464,	// (0x00022b00) level_5_signal_lsc

0x346d,	// (0x00022b09) level_6_signal_lsc

0x3476,	// (0x00022b12) level_7_signal_lsc

0x3476,	// (0x00022b12) level_1_battery_lsc

0x347f,	// (0x00022b1b) level_2_battery_lsc

0x3488,	// (0x00022b24) level_3_battery_lsc

0x3491,	// (0x00022b2d) level_4_battery_lsc

0x349a,	// (0x00022b36) level_5_battery_lsc

0x34a3,	// (0x00022b3f) level_6_battery_lsc

0x3440,	// (0x00022adc) level_7_battery_lsc

0x34ac,	// (0x00022b48) scroll_handle_focus_pane_g1

0x34b5,	// (0x00022b51) scroll_handle_focus_pane_g2

0x34be,	// (0x00022b5a) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0002edcc) scroll_handle_focus_pane_g

0x590a,	// (0x00024fa6) list_single_2graphic_pane_g1_ParamLimits

0x590a,	// (0x00024fa6) list_single_2graphic_pane_g1

0x52c8,	// (0x00024964) list_single_2graphic_pane_g2_ParamLimits

0x52c8,	// (0x00024964) list_single_2graphic_pane_g2

0x524e,	// (0x000248ea) list_single_2graphic_pane_g3_ParamLimits

0x524e,	// (0x000248ea) list_single_2graphic_pane_g3

0x5916,	// (0x00024fb2) list_single_2graphic_pane_g4_ParamLimits

0x5916,	// (0x00024fb2) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0002edd3) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0002edd3) list_single_2graphic_pane_g

0x5922,	// (0x00024fbe) list_single_2graphic_pane_t1_ParamLimits

0x5922,	// (0x00024fbe) list_single_2graphic_pane_t1

0x5950,	// (0x00024fec) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5950,	// (0x00024fec) list_double2_graphic_large_graphic_pane_g1

0x533f,	// (0x000249db) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x533f,	// (0x000249db) list_double2_graphic_large_graphic_pane_g2

0x530b,	// (0x000249a7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x530b,	// (0x000249a7) list_double2_graphic_large_graphic_pane_g3

0x5962,	// (0x00024ffe) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5962,	// (0x00024ffe) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0002eddc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0002eddc) list_double2_graphic_large_graphic_pane_g

0x596e,	// (0x0002500a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x596e,	// (0x0002500a) list_double2_graphic_large_graphic_pane_t1

0x5984,	// (0x00025020) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5984,	// (0x00025020) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0002ede5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0002ede5) list_double2_graphic_large_graphic_pane_t

0x3550,	// (0x00022bec) popup_fast_swap_window_ParamLimits

0x3550,	// (0x00022bec) popup_fast_swap_window

0x356e,	// (0x00022c0a) popup_side_volume_key_window

0x358c,	// (0x00022c28) stacon_top_pane

0x3596,	// (0x00022c32) status_pane_ParamLimits

0x3596,	// (0x00022c32) status_pane

0x7169,	// (0x00026805) status_small_pane

0x0b8e,	// (0x0002022a) control_pane

0x0b8e,	// (0x0002022a) stacon_bottom_pane

0x2bcf,	// (0x0002226b) scroll_pane_cp121

0x2bc6,	// (0x00022262) set_content_pane

0x6f75,	// (0x00026611) bg_active_tab_pane_g1_cp1

0x34c7,	// (0x00022b63) bg_active_tab_pane_g2_cp1

0x6f7e,	// (0x0002661a) bg_active_tab_pane_g3_cp1

0x6f75,	// (0x00026611) bg_passive_tab_pane_g1_cp1

0x34c7,	// (0x00022b63) bg_passive_tab_pane_g2_cp1

0x6f7e,	// (0x0002661a) bg_passive_tab_pane_g3_cp1

0x6f87,	// (0x00026623) bg_active_tab_pane_g1_cp2

0x34c7,	// (0x00022b63) bg_active_tab_pane_g2_cp2

0x6f90,	// (0x0002662c) bg_active_tab_pane_g3_cp2

0x6f87,	// (0x00026623) bg_passive_tab_pane_g1_cp2

0x34c7,	// (0x00022b63) bg_passive_tab_pane_g2_cp2

0x6f90,	// (0x0002662c) bg_passive_tab_pane_g3_cp2

0x6f99,	// (0x00026635) bg_active_tab_pane_g1_cp3

0x34c7,	// (0x00022b63) bg_active_tab_pane_g2_cp3

0x6fa2,	// (0x0002663e) bg_active_tab_pane_g3_cp3

0x6f99,	// (0x00026635) bg_passive_tab_pane_g1_cp3

0x34c7,	// (0x00022b63) bg_passive_tab_pane_g2_cp3

0x6fa2,	// (0x0002663e) bg_passive_tab_pane_g3_cp3

0x6fab,	// (0x00026647) bg_active_tab_pane_g1_cp4

0x34c7,	// (0x00022b63) bg_active_tab_pane_g2_cp4

0x6fb6,	// (0x00026652) bg_active_tab_pane_g3_cp4

0x6fab,	// (0x00026647) bg_passive_tab_pane_g1_cp4

0x34c7,	// (0x00022b63) bg_passive_tab_pane_g2_cp4

0x6fb6,	// (0x00026652) bg_passive_tab_pane_g3_cp4

0x3517,	// (0x00022bb3) bg_active_tab_pane_g1_cp5

0x34c7,	// (0x00022b63) bg_active_tab_pane_g2_cp5

0x350e,	// (0x00022baa) bg_active_tab_pane_g3_cp5

0x3517,	// (0x00022bb3) bg_passive_tab_pane_g1_cp5

0x34c7,	// (0x00022b63) bg_passive_tab_pane_g2_cp5

0x350e,	// (0x00022baa) bg_passive_tab_pane_g3_cp5

0x7105,	// (0x000267a1) list_set_graphic_pane_ParamLimits

0x7105,	// (0x000267a1) list_set_graphic_pane

0x0b8e,	// (0x0002022a) bg_set_opt_pane_cp4

0x711a,	// (0x000267b6) list_set_graphic_pane_g1_ParamLimits

0x711a,	// (0x000267b6) list_set_graphic_pane_g1

0x7126,	// (0x000267c2) list_set_graphic_pane_g2_ParamLimits

0x7126,	// (0x000267c2) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0002edea) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0002edea) list_set_graphic_pane_g

0x0009,

0xfaca,	// (0x0002f166) volume_small_pane_cp_g

0x714a,	// (0x000267e6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x714a,	// (0x000267e6) list_double2_large_graphic_pane_g1_cp2

0x7158,	// (0x000267f4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7158,	// (0x000267f4) list_double2_large_graphic_pane_g2_cp2

0x3520,	// (0x00022bbc) list_double2_large_graphic_pane_g3_cp2

0x3528,	// (0x00022bc4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3528,	// (0x00022bc4) list_double2_large_graphic_pane_t1_cp2

0x353e,	// (0x00022bda) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x353e,	// (0x00022bda) list_double2_large_graphic_pane_t2_cp2

0xa82f,	// (0x00029ecb) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa82f,	// (0x00029ecb) list_double_large_graphic_pane_g1_cp2

0xa842,	// (0x00029ede) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa842,	// (0x00029ede) list_double_large_graphic_pane_g2_cp2

0x3677,	// (0x00022d13) list_double_large_graphic_pane_g3_cp2

0xa853,	// (0x00029eef) list_double_large_graphic_pane_g4_cp

0xa85b,	// (0x00029ef7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa85b,	// (0x00029ef7) list_double_large_graphic_pane_t1_cp2

0xa872,	// (0x00029f0e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa872,	// (0x00029f0e) list_double_large_graphic_pane_t2_cp2

0x7174,	// (0x00026810) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7174,	// (0x00026810) list_double2_graphic_pane_g1_cp2

0x7182,	// (0x0002681e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7182,	// (0x0002681e) list_double2_graphic_pane_g2_cp2

0x7193,	// (0x0002682f) list_double2_graphic_pane_g3_cp2

0x35a4,	// (0x00022c40) list_double2_graphic_pane_t1_cp2_ParamLimits

0x35a4,	// (0x00022c40) list_double2_graphic_pane_t1_cp2

0x35ba,	// (0x00022c56) list_double2_graphic_pane_t2_cp2_ParamLimits

0x35ba,	// (0x00022c56) list_double2_graphic_pane_t2_cp2

0x35cc,	// (0x00022c68) list_single_number_heading_pane_g1_cp2_ParamLimits

0x35cc,	// (0x00022c68) list_single_number_heading_pane_g1_cp2

0x35d8,	// (0x00022c74) list_single_number_heading_pane_g2_cp2

0x35e0,	// (0x00022c7c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x35e0,	// (0x00022c7c) list_single_number_heading_pane_t1_cp2

0x719d,	// (0x00026839) list_single_number_heading_pane_t2_cp2_ParamLimits

0x719d,	// (0x00026839) list_single_number_heading_pane_t2_cp2

0x35f6,	// (0x00022c92) list_single_number_heading_pane_t3_cp2_ParamLimits

0x35f6,	// (0x00022c92) list_single_number_heading_pane_t3_cp2

0x35cc,	// (0x00022c68) list_single_heading_pane_g1_cp2_ParamLimits

0x35cc,	// (0x00022c68) list_single_heading_pane_g1_cp2

0x35d8,	// (0x00022c74) list_single_heading_pane_g2_cp2

0x35e0,	// (0x00022c7c) list_single_heading_pane_t1_cp2_ParamLimits

0x35e0,	// (0x00022c7c) list_single_heading_pane_t1_cp2

0xa629,	// (0x00029cc5) list_single_heading_pane_t2_cp2_ParamLimits

0xa629,	// (0x00029cc5) list_single_heading_pane_t2_cp2

0xa571,	// (0x00029c0d) list_double_graphic_pane_g1_cp2_ParamLimits

0xa571,	// (0x00029c0d) list_double_graphic_pane_g1_cp2

0xa57d,	// (0x00029c19) list_double_graphic_pane_g2_cp2_ParamLimits

0xa57d,	// (0x00029c19) list_double_graphic_pane_g2_cp2

0xa58c,	// (0x00029c28) list_double_graphic_pane_g3_cp2

0xa594,	// (0x00029c30) list_double_graphic_pane_t1_cp2_ParamLimits

0xa594,	// (0x00029c30) list_double_graphic_pane_t1_cp2

0xa5aa,	// (0x00029c46) list_double_graphic_pane_t2_cp2_ParamLimits

0xa5aa,	// (0x00029c46) list_double_graphic_pane_t2_cp2

0x366b,	// (0x00022d07) list_double_number_pane_g1_cp2_ParamLimits

0x366b,	// (0x00022d07) list_double_number_pane_g1_cp2

0x3677,	// (0x00022d13) list_double_number_pane_g2_cp2

0xa535,	// (0x00029bd1) list_double_number_pane_t1_cp2_ParamLimits

0xa535,	// (0x00029bd1) list_double_number_pane_t1_cp2

0xa549,	// (0x00029be5) list_double_number_pane_t2_cp2_ParamLimits

0xa549,	// (0x00029be5) list_double_number_pane_t2_cp2

0xa55f,	// (0x00029bfb) list_double_number_pane_t3_cp2_ParamLimits

0xa55f,	// (0x00029bfb) list_double_number_pane_t3_cp2

0xa41e,	// (0x00029aba) list_single_graphic_pane_g1_cp2_ParamLimits

0xa41e,	// (0x00029aba) list_single_graphic_pane_g1_cp2

0x71db,	// (0x00026877) list_single_graphic_pane_g2_cp2_ParamLimits

0x71db,	// (0x00026877) list_single_graphic_pane_g2_cp2

0x71e7,	// (0x00026883) list_single_graphic_pane_g3_cp2

0xa3f4,	// (0x00029a90) list_single_graphic_pane_t1_cp2_ParamLimits

0xa3f4,	// (0x00029a90) list_single_graphic_pane_t1_cp2

0x71db,	// (0x00026877) list_single_number_pane_g1_cp2_ParamLimits

0x71db,	// (0x00026877) list_single_number_pane_g1_cp2

0x71e7,	// (0x00026883) list_single_number_pane_g2_cp2

0xa3f4,	// (0x00029a90) list_single_number_pane_t1_cp2_ParamLimits

0xa3f4,	// (0x00029a90) list_single_number_pane_t1_cp2

0xa40a,	// (0x00029aa6) list_single_number_pane_t2_cp2_ParamLimits

0xa40a,	// (0x00029aa6) list_single_number_pane_t2_cp2

0x7158,	// (0x000267f4) list_double2_pane_g1_cp2_ParamLimits

0x7158,	// (0x000267f4) list_double2_pane_g1_cp2

0x3520,	// (0x00022bbc) list_double2_pane_g2_cp2

0x3643,	// (0x00022cdf) list_double2_pane_t1_cp2_ParamLimits

0x3643,	// (0x00022cdf) list_double2_pane_t1_cp2

0x3659,	// (0x00022cf5) list_double2_pane_t2_cp2_ParamLimits

0x3659,	// (0x00022cf5) list_double2_pane_t2_cp2

0x366b,	// (0x00022d07) list_double_pane_g1_cp2_ParamLimits

0x366b,	// (0x00022d07) list_double_pane_g1_cp2

0x3677,	// (0x00022d13) list_double_pane_g2_cp2

0x367f,	// (0x00022d1b) list_double_pane_t1_cp2_ParamLimits

0x367f,	// (0x00022d1b) list_double_pane_t1_cp2

0x3695,	// (0x00022d31) list_double_pane_t2_cp2_ParamLimits

0x3695,	// (0x00022d31) list_double_pane_t2_cp2

0x71cb,	// (0x00026867) list_single_pane_cp2_g3

0x71db,	// (0x00026877) list_single_pane_g1_cp2_ParamLimits

0x71db,	// (0x00026877) list_single_pane_g1_cp2

0x71e7,	// (0x00026883) list_single_pane_g2_cp2

0x71ef,	// (0x0002688b) list_single_pane_t1_cp2_ParamLimits

0x71ef,	// (0x0002688b) list_single_pane_t1_cp2

0x7207,	// (0x000268a3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7207,	// (0x000268a3) list_single_large_graphic_pane_g1_cp2

0x7215,	// (0x000268b1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7215,	// (0x000268b1) list_single_large_graphic_pane_g2_cp2

0x7221,	// (0x000268bd) list_single_large_graphic_pane_g3_cp2

0x7229,	// (0x000268c5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7229,	// (0x000268c5) list_single_large_graphic_pane_g4_cp1

0x7243,	// (0x000268df) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7243,	// (0x000268df) list_single_large_graphic_pane_t1_cp2

0xa3be,	// (0x00029a5a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa3be,	// (0x00029a5a) list_single_graphic_heading_pane_g1_cp2

0xa38b,	// (0x00029a27) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa38b,	// (0x00029a27) list_single_graphic_heading_pane_g4_cp2

0x71e7,	// (0x00026883) list_single_graphic_heading_pane_g5_cp2

0xa3ca,	// (0x00029a66) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa3ca,	// (0x00029a66) list_single_graphic_heading_pane_t1_cp2

0xa3e0,	// (0x00029a7c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa3e0,	// (0x00029a7c) list_single_graphic_heading_pane_t2_cp2

0xa37f,	// (0x00029a1b) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa37f,	// (0x00029a1b) list_single_2graphic_pane_g1_cp2

0xa38b,	// (0x00029a27) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa38b,	// (0x00029a27) list_single_2graphic_pane_g2_cp2

0x71e7,	// (0x00026883) list_single_2graphic_pane_g3_cp2

0xa39c,	// (0x00029a38) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa39c,	// (0x00029a38) list_single_2graphic_pane_g4_cp2

0xa3a8,	// (0x00029a44) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa3a8,	// (0x00029a44) list_single_2graphic_pane_t1_cp2

0x0b84,	// (0x00020220) list_highlight_pane_g10_cp1

0x9f57,	// (0x000295f3) list_highlight_pane_g1_cp1

0x9f5f,	// (0x000295fb) list_highlight_pane_g2_cp1

0x9f67,	// (0x00029603) list_highlight_pane_g3_cp1

0x9f6f,	// (0x0002960b) list_highlight_pane_g4_cp1

0x9f77,	// (0x00029613) list_highlight_pane_g5_cp1

0x9f7f,	// (0x0002961b) list_highlight_pane_g6_cp1

0x9f87,	// (0x00029623) list_highlight_pane_g7_cp1

0x9f8f,	// (0x0002962b) list_highlight_pane_g8_cp1

0x9f97,	// (0x00029633) list_highlight_pane_g9_cp1

0x9e77,	// (0x00029513) form_field_slider_pane_t3

0x9e85,	// (0x00029521) form_field_slider_pane_t4

0x9e93,	// (0x0002952f) slider_form_pane_ParamLimits

0x9e93,	// (0x0002952f) slider_form_pane

0x0b8e,	// (0x0002022a) control_abbreviations

0x0b8e,	// (0x0002022a) control_conventions

0x0b8e,	// (0x0002022a) control_definitions

0x0b8e,	// (0x0002022a) format_table_attribute

0xa67f,	// (0x00029d1b) bg_popup_preview_window_pane_g9

0x0b8e,	// (0x0002022a) format_table_data2

0x0b8e,	// (0x0002022a) format_table_data3

0x0b8e,	// (0x0002022a) format_table_data_example

0x0008,

0x0b8e,	// (0x0002022a) intro_purpose

0xf8ea,	// (0x0002ef86) bg_popup_preview_window_pane_g

0x0b8e,	// (0x0002022a) texts_category

0x0b8e,	// (0x0002022a) texts_graphics

0x7259,	// (0x000268f5) text_digital

0x7268,	// (0x00026904) text_primary

0x7277,	// (0x00026913) text_primary_small

0x7286,	// (0x00026922) text_secondary

0x7295,	// (0x00026931) text_title

0xae13,	// (0x0002a4af) bg_passive_tab_pane_g1_cp3_srt

0x34c7,	// (0x00022b63) bg_passive_tab_pane_g2_cp3_srt

0xae1c,	// (0x0002a4b8) bg_passive_tab_pane_g3_cp3_srt

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp3_srt_ParamLimits

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp3_srt

0xae25,	// (0x0002a4c1) tabs_4_active_pane_srt_g1

0xae2d,	// (0x0002a4c9) tabs_4_active_pane_srt_t1_ParamLimits

0xae2d,	// (0x0002a4c9) tabs_4_active_pane_srt_t1

0xae13,	// (0x0002a4af) bg_active_tab_pane_g1_cp3_copy1

0x34c7,	// (0x00022b63) bg_active_tab_pane_g2_cp3_copy1

0xae1c,	// (0x0002a4b8) bg_active_tab_pane_g3_cp3_copy1

0x0bf6,	// (0x00020292) tabs_2_long_active_pane_srt_ParamLimits

0x0bf6,	// (0x00020292) tabs_2_long_active_pane_srt

0x0bf6,	// (0x00020292) tabs_2_long_passive_pane_srt_ParamLimits

0x0bf6,	// (0x00020292) tabs_2_long_passive_pane_srt

0x6b41,	// (0x000261dd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6b41,	// (0x000261dd) bg_passive_tab_pane_cp4_srt

0xaabb,	// (0x0002a157) bg_passive_tab_pane_g1_cp4_srt

0x34c7,	// (0x00022b63) bg_passive_tab_pane_g2_cp4_srt

0xaac4,	// (0x0002a160) bg_passive_tab_pane_g3_cp4_srt

0x36b3,	// (0x00022d4f) bg_active_tab_pane_cp4_srt_ParamLimits

0x36b3,	// (0x00022d4f) bg_active_tab_pane_cp4_srt

0xaacd,	// (0x0002a169) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaacd,	// (0x0002a169) tabs_2_long_active_pane_srt_t1

0xaabb,	// (0x0002a157) bg_active_tab_pane_g1_cp4_srt

0x34c7,	// (0x00022b63) bg_active_tab_pane_g2_cp4_srt

0xaac4,	// (0x0002a160) bg_active_tab_pane_g3_cp4_srt

0x0be8,	// (0x00020284) tabs_3_long_active_pane_srt_ParamLimits

0x0be8,	// (0x00020284) tabs_3_long_active_pane_srt

0x0be8,	// (0x00020284) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0be8,	// (0x00020284) tabs_3_long_passive_pane_cp_srt

0x0be8,	// (0x00020284) tabs_3_long_passive_pane_srt_ParamLimits

0x0be8,	// (0x00020284) tabs_3_long_passive_pane_srt

0x6b41,	// (0x000261dd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6b41,	// (0x000261dd) bg_passive_tab_pane_cp5_srt

0x3517,	// (0x00022bb3) bg_passive_tab_pane_g1_cp5_srt

0x34c7,	// (0x00022b63) bg_passive_tab_pane_g2_cp5_srt

0x350e,	// (0x00022baa) bg_passive_tab_pane_g3_cp5_srt

0x36b3,	// (0x00022d4f) bg_active_tab_pane_cp5_srt_ParamLimits

0x36b3,	// (0x00022d4f) bg_active_tab_pane_cp5_srt

0xaaa9,	// (0x0002a145) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaaa9,	// (0x0002a145) tabs_3_long_active_pane_srt_t1

0x3517,	// (0x00022bb3) bg_active_tab_pane_g1_cp5_srt

0x34c7,	// (0x00022b63) bg_active_tab_pane_g2_cp5_srt

0x350e,	// (0x00022baa) bg_active_tab_pane_g3_cp5_srt

0xaa9b,	// (0x0002a137) navi_text_pane_srt_t1

0xaa93,	// (0x0002a12f) navi_icon_pane_srt_g1

0x7509,	// (0x00026ba5) midp_editing_number_pane_srt

0x72a4,	// (0x00026940) midp_ticker_pane_srt

0x7511,	// (0x00026bad) midp_ticker_pane_srt_g1

0x7519,	// (0x00026bb5) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0002ee09) midp_ticker_pane_srt_g

0x7521,	// (0x00026bbd) midp_ticker_pane_srt_t1

0xaa84,	// (0x0002a120) midp_editing_number_pane_t1_copy1

0x6b41,	// (0x000261dd) listscroll_midp_pane

0x6b41,	// (0x000261dd) midp_form_pane

0x730e,	// (0x000269aa) midp_info_popup_window_ParamLimits

0x730e,	// (0x000269aa) midp_info_popup_window

0x2d8c,	// (0x00022428) bg_popup_sub_pane_cp50_ParamLimits

0x2d8c,	// (0x00022428) bg_popup_sub_pane_cp50

0x9b8d,	// (0x00029229) listscroll_midp_info_pane_ParamLimits

0x9b8d,	// (0x00029229) listscroll_midp_info_pane

0x9b75,	// (0x00029211) listscroll_form_midp_pane_ParamLimits

0x9b75,	// (0x00029211) listscroll_form_midp_pane

0x9b81,	// (0x0002921d) scroll_bar_cp050

0x9b55,	// (0x000291f1) list_midp_pane

0xb8a8,	// (0x0002af44) signal_pane_g2_cp

0x9a8f,	// (0x0002912b) listscroll_midp_info_pane_t1_ParamLimits

0x9a8f,	// (0x0002912b) listscroll_midp_info_pane_t1

0x9aa7,	// (0x00029143) listscroll_midp_info_pane_t2_ParamLimits

0x9aa7,	// (0x00029143) listscroll_midp_info_pane_t2

0x9ae5,	// (0x00029181) listscroll_midp_info_pane_t3_ParamLimits

0x9ae5,	// (0x00029181) listscroll_midp_info_pane_t3

0x9b1f,	// (0x000291bb) listscroll_midp_info_pane_t4_ParamLimits

0x9b1f,	// (0x000291bb) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0002eec1) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0002eec1) listscroll_midp_info_pane_t

0x2e0c,	// (0x000224a8) scroll_pane_cp21

0x874f,	// (0x00027deb) form_midp_field_choice_group_pane

0x8758,	// (0x00027df4) form_midp_field_text_pane

0x9a75,	// (0x00029111) form_midp_field_time_pane

0x9a7d,	// (0x00029119) form_midp_gauge_slider_pane

0x9a86,	// (0x00029122) form_midp_gauge_wait_pane

0x0b8e,	// (0x0002022a) form_midp_image_pane

0x5b0d,	// (0x000251a9) list_single_midp_pane_ParamLimits

0x5b0d,	// (0x000251a9) list_single_midp_pane

0x8713,	// (0x00027daf) form_midp_field_text_pane_t1

0x8471,	// (0x00027b0d) input_focus_pane_cp050

0x873e,	// (0x00027dda) list_midp_form_text_pane

0x86e2,	// (0x00027d7e) form_midp_field_choice_group_pane_t1

0x86f0,	// (0x00027d8c) input_focus_pane_cp051

0x8704,	// (0x00027da0) list_midp_choice_pane

0x0b8e,	// (0x0002022a) status_idle_pane

0x86c6,	// (0x00027d62) form_midp_field_time_pane_t1

0x0b84,	// (0x00020220) wait_anim_pane_g2_copy1

0x86d4,	// (0x00027d70) form_midp_field_time_pane_t2

0x0001,

0x73be,	// (0x00026a5a) aid_navinavi_width_2_pane

0xf820,	// (0x0002eebc) form_midp_field_time_pane_t

0x0b8e,	// (0x0002022a) input_focus_pane_cp052

0x0b8e,	// (0x0002022a) bg_input_focus_pane_cp040

0x8686,	// (0x00027d22) form_midp_gauge_slider_pane_t1

0x8694,	// (0x00027d30) form_midp_gauge_slider_pane_t2

0x86a2,	// (0x00027d3e) form_midp_gauge_slider_pane_t3

0x86b0,	// (0x00027d4c) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0002eeb3) form_midp_gauge_slider_pane_t

0x86be,	// (0x00027d5a) form_midp_slider_pane

0x0bf6,	// (0x00020292) bg_input_focus_pane_cp041_ParamLimits

0x0bf6,	// (0x00020292) bg_input_focus_pane_cp041

0x8653,	// (0x00027cef) form_midp_gauge_wait_pane_t1_ParamLimits

0x8653,	// (0x00027cef) form_midp_gauge_wait_pane_t1

0x8665,	// (0x00027d01) form_midp_gauge_wait_pane_t2_ParamLimits

0x8665,	// (0x00027d01) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0002eeae) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0002eeae) form_midp_gauge_wait_pane_t

0x8677,	// (0x00027d13) form_midp_wait_pane_ParamLimits

0x8677,	// (0x00027d13) form_midp_wait_pane

0x861b,	// (0x00027cb7) form_midp_image_pane_g1

0x8624,	// (0x00027cc0) form_midp_image_pane_t1

0x8633,	// (0x00027ccf) form_midp_image_pane_t2

0x8642,	// (0x00027cde) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0002eea7) form_midp_image_pane_t

0x8612,	// (0x00027cae) list_single_midp_pane_g1

0x5afe,	// (0x0002519a) list_single_midp_pane_t1

0x85f8,	// (0x00027c94) list_midp_form_item_pane_ParamLimits

0x85f8,	// (0x00027c94) list_midp_form_item_pane

0x7366,	// (0x00026a02) list_midp_form_item_pane_t1

0x7375,	// (0x00026a11) midp_ticker_pane_g1

0x7381,	// (0x00026a1d) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0002edef) midp_ticker_pane_g

0x738d,	// (0x00026a29) midp_ticker_pane_t1

0xacf7,	// (0x0002a393) midp_editing_number_pane_t1

0xacd5,	// (0x0002a371) midp_editing_number_pane

0xace4,	// (0x0002a380) midp_ticker_pane

0xaa74,	// (0x0002a110) ai_message_heading_pane

0x0b8e,	// (0x0002022a) bg_popup_window_pane_cp14

0xaa7c,	// (0x0002a118) listscroll_ai_message_pane

0xa9fa,	// (0x0002a096) ai_message_heading_pane_g1_ParamLimits

0xa9fa,	// (0x0002a096) ai_message_heading_pane_g1

0xaa06,	// (0x0002a0a2) ai_message_heading_pane_g2_ParamLimits

0xaa06,	// (0x0002a0a2) ai_message_heading_pane_g2

0xaa14,	// (0x0002a0b0) ai_message_heading_pane_g3_ParamLimits

0xaa14,	// (0x0002a0b0) ai_message_heading_pane_g3

0xaa20,	// (0x0002a0bc) ai_message_heading_pane_g4_ParamLimits

0xaa20,	// (0x0002a0bc) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0002efe8) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0002efe8) ai_message_heading_pane_g

0xaa2c,	// (0x0002a0c8) ai_message_heading_pane_t1_ParamLimits

0xaa2c,	// (0x0002a0c8) ai_message_heading_pane_t1

0xaa46,	// (0x0002a0e2) ai_message_heading_pane_t2_ParamLimits

0xaa46,	// (0x0002a0e2) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0002eff1) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0002eff1) ai_message_heading_pane_t

0xaa5a,	// (0x0002a0f6) bg_popup_heading_pane_cp1_ParamLimits

0xaa5a,	// (0x0002a0f6) bg_popup_heading_pane_cp1

0xa9e8,	// (0x0002a084) list_ai_message_pane_ParamLimits

0xa9e8,	// (0x0002a084) list_ai_message_pane

0x2e0c,	// (0x000224a8) scroll_pane_cp10

0xa984,	// (0x0002a020) list_ai_message_pane_g1

0xa98c,	// (0x0002a028) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0002efc5) list_ai_message_pane_g

0xa994,	// (0x0002a030) list_ai_message_pane_t1_ParamLimits

0xa994,	// (0x0002a030) list_ai_message_pane_t1

0xa9a9,	// (0x0002a045) list_ai_message_pane_t2_ParamLimits

0xa9a9,	// (0x0002a045) list_ai_message_pane_t2

0xa9be,	// (0x0002a05a) list_ai_message_pane_t3_ParamLimits

0xa9be,	// (0x0002a05a) list_ai_message_pane_t3

0xa9d3,	// (0x0002a06f) list_ai_message_pane_t4_ParamLimits

0xa9d3,	// (0x0002a06f) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0002efca) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0002efca) list_ai_message_pane_t

0xa96d,	// (0x0002a009) cell_ai_soft_ind_pane_ParamLimits

0xa96d,	// (0x0002a009) cell_ai_soft_ind_pane

0x739f,	// (0x00026a3b) cell_ai_soft_ind_pane_g1_ParamLimits

0x739f,	// (0x00026a3b) cell_ai_soft_ind_pane_g1

0x0b8e,	// (0x0002022a) grid_highlight_cp1

0x73ac,	// (0x00026a48) text_secondary_cp56_ParamLimits

0x73ac,	// (0x00026a48) text_secondary_cp56

0xa942,	// (0x00029fde) example_general_pane_ParamLimits

0xa942,	// (0x00029fde) example_general_pane

0xa94e,	// (0x00029fea) example_parent_pane_g1_ParamLimits

0xa94e,	// (0x00029fea) example_parent_pane_g1

0xa95a,	// (0x00029ff6) example_parent_pane_t1_ParamLimits

0xa95a,	// (0x00029ff6) example_parent_pane_t1

0x7bdc,	// (0x00027278) popup_preview_text_window_ParamLimits

0x7bdc,	// (0x00027278) popup_preview_text_window

0x71d3,	// (0x0002686f) list_single_pane_cp2_g4

0x0deb,	// (0x00020487) bg_popup_preview_window_pane_ParamLimits

0x0deb,	// (0x00020487) bg_popup_preview_window_pane

0xa689,	// (0x00029d25) popup_preview_text_window_t1_ParamLimits

0xa689,	// (0x00029d25) popup_preview_text_window_t1

0xa6a7,	// (0x00029d43) popup_preview_text_window_t2_ParamLimits

0xa6a7,	// (0x00029d43) popup_preview_text_window_t2

0xa6f0,	// (0x00029d8c) popup_preview_text_window_t3_ParamLimits

0xa6f0,	// (0x00029d8c) popup_preview_text_window_t3

0xa735,	// (0x00029dd1) popup_preview_text_window_t4_ParamLimits

0xa735,	// (0x00029dd1) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0002ef99) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0002ef99) popup_preview_text_window_t

0xa7b3,	// (0x00029e4f) scroll_pane_cp11

0x8386,	// (0x00027a22) bg_popup_preview_window_pane_g1

0xa63d,	// (0x00029cd9) bg_popup_preview_window_pane_g2

0xa647,	// (0x00029ce3) bg_popup_preview_window_pane_g3

0xa651,	// (0x00029ced) bg_popup_preview_window_pane_g4

0xa65b,	// (0x00029cf7) bg_popup_preview_window_pane_g5

0xa665,	// (0x00029d01) bg_popup_preview_window_pane_g6

0xa66d,	// (0x00029d09) bg_popup_preview_window_pane_g7

0xa675,	// (0x00029d11) bg_popup_preview_window_pane_g8

0x635a,	// (0x000259f6) aid_popup_width_pane

0x7bb8,	// (0x00027254) popup_midp_note_alarm_window_ParamLimits

0x7bb8,	// (0x00027254) popup_midp_note_alarm_window

0x2c37,	// (0x000222d3) data_form_pane_ParamLimits

0x5759,	// (0x00024df5) form_field_data_pane_g1

0x5763,	// (0x00024dff) form_field_data_pane_t1_ParamLimits

0x2c43,	// (0x000222df) input_focus_pane_ParamLimits

0x577d,	// (0x00024e19) data_form_wide_pane_ParamLimits

0x578e,	// (0x00024e2a) form_field_data_wide_pane_g1

0x579a,	// (0x00024e36) form_field_data_wide_pane_t1_ParamLimits

0x0fa0,	// (0x0002063c) input_focus_pane_cp6_ParamLimits

0x6b06,	// (0x000261a2) input_popup_find_pane_g1_ParamLimits

0x6b06,	// (0x000261a2) input_popup_find_pane_g1

0x6c5f,	// (0x000262fb) aid_navi_side_left_pane

0x6c74,	// (0x00026310) aid_navi_side_right_pane

0xa052,	// (0x000296ee) bg_popup_window_pane_cp30_ParamLimits

0xa052,	// (0x000296ee) bg_popup_window_pane_cp30

0xa0cc,	// (0x00029768) popup_midp_note_alarm_window_g1_ParamLimits

0xa0cc,	// (0x00029768) popup_midp_note_alarm_window_g1

0xa0fc,	// (0x00029798) popup_midp_note_alarm_window_t1_ParamLimits

0xa0fc,	// (0x00029798) popup_midp_note_alarm_window_t1

0xa19d,	// (0x00029839) popup_midp_note_alarm_window_t2_ParamLimits

0xa19d,	// (0x00029839) popup_midp_note_alarm_window_t2

0xa24b,	// (0x000298e7) popup_midp_note_alarm_window_t3_ParamLimits

0xa24b,	// (0x000298e7) popup_midp_note_alarm_window_t3

0xa27d,	// (0x00029919) popup_midp_note_alarm_window_t4_ParamLimits

0xa27d,	// (0x00029919) popup_midp_note_alarm_window_t4

0xa2a3,	// (0x0002993f) popup_midp_note_alarm_window_t5_ParamLimits

0xa2a3,	// (0x0002993f) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0002ef36) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0002ef36) popup_midp_note_alarm_window_t

0xa34f,	// (0x000299eb) wait_bar_pane_cp1_ParamLimits

0xa34f,	// (0x000299eb) wait_bar_pane_cp1

0x0b8e,	// (0x0002022a) wait_anim_pane_copy1

0x0b8e,	// (0x0002022a) wait_border_pane_copy1

0x9d37,	// (0x000293d3) wait_border_pane_g1_copy1

0x57b4,	// (0x00024e50) form_field_popup_pane_g1

0x57bc,	// (0x00024e58) form_field_popup_pane_t1_ParamLimits

0x2c43,	// (0x000222df) input_focus_pane_cp7_ParamLimits

0x2cb0,	// (0x0002234c) list_form_pane_ParamLimits

0x57d6,	// (0x00024e72) form_field_popup_wide_pane_g1

0x57de,	// (0x00024e7a) form_field_popup_wide_pane_t1_ParamLimits

0x2c43,	// (0x000222df) input_focus_pane_cp8_ParamLimits

0x2cd9,	// (0x00022375) list_form_wide_pane_ParamLimits

0xaea0,	// (0x0002a53c) aid_size_cell_graphic_pane

0x586a,	// (0x00024f06) data_form_pane_t1_ParamLimits

0x5b58,	// (0x000251f4) data_form_wide_pane_t1_ParamLimits

0x7f03,	// (0x0002759f) bg_status_flat_pane

0x676b,	// (0x00025e07) title_pane_t1_ParamLimits

0x0bb0,	// (0x0002024c) title_pane_t2_ParamLimits

0x0bd6,	// (0x00020272) title_pane_t3_ParamLimits

0xf557,	// (0x0002ebf3) title_pane_t_ParamLimits

0x6dac,	// (0x00026448) level_1_signal_ParamLimits

0x6db9,	// (0x00026455) level_2_signal_ParamLimits

0x6dc6,	// (0x00026462) level_3_signal_ParamLimits

0x6dd3,	// (0x0002646f) level_4_signal_ParamLimits

0x6de0,	// (0x0002647c) level_5_signal_ParamLimits

0x6ded,	// (0x00026489) level_6_signal_ParamLimits

0x6dfa,	// (0x00026496) level_7_signal_ParamLimits

0x6dac,	// (0x00026448) level_1_battery_ParamLimits

0x6db9,	// (0x00026455) level_2_battery_ParamLimits

0x6dc6,	// (0x00026462) level_3_battery_ParamLimits

0x6dd3,	// (0x0002646f) level_4_battery_ParamLimits

0x6de0,	// (0x0002647c) level_5_battery_ParamLimits

0x6ded,	// (0x00026489) level_6_battery_ParamLimits

0x6dfa,	// (0x00026496) level_7_battery_ParamLimits

0x9f57,	// (0x000295f3) bg_status_flat_pane_g1

0x9f5f,	// (0x000295fb) bg_status_flat_pane_g2

0x9f67,	// (0x00029603) bg_status_flat_pane_g3

0x9f6f,	// (0x0002960b) bg_status_flat_pane_g4

0x9f77,	// (0x00029613) bg_status_flat_pane_g5

0x9f7f,	// (0x0002961b) bg_status_flat_pane_g6

0x9f87,	// (0x00029623) bg_status_flat_pane_g7

0x67db,	// (0x00025e77) tabs_3_active_pane_t1_ParamLimits

0x67db,	// (0x00025e77) tabs_3_passive_pane_t1_ParamLimits

0x67f5,	// (0x00025e91) tabs_4_active_pane_t1_ParamLimits

0x67f5,	// (0x00025e91) tabs_4_1_passive_pane_t1_ParamLimits

0x6b1c,	// (0x000261b8) tabs_2_active_pane_t1_ParamLimits

0x6b1c,	// (0x000261b8) tabs_2_passive_pane_t1_ParamLimits

0x36b3,	// (0x00022d4f) bg_active_tab_pane_cp4_ParamLimits

0x6b2e,	// (0x000261ca) tabs_2_long_active_pane_t1_ParamLimits

0x6b41,	// (0x000261dd) bg_passive_tab_pane_cp4_ParamLimits

0x841a,	// (0x00027ab6) list_single_midp_graphic_pane_t1_ParamLimits

0x36b3,	// (0x00022d4f) bg_active_tab_pane_cp5_ParamLimits

0x6b4d,	// (0x000261e9) tabs_3_long_active_pane_t1_ParamLimits

0x6b41,	// (0x000261dd) bg_passive_tab_pane_cp5_ParamLimits

0x841a,	// (0x00027ab6) list_single_midp_graphic_pane_t1

0x7f03,	// (0x0002759f) bg_status_flat_pane_ParamLimits

0x7fce,	// (0x0002766a) indicator_pane_cp2_ParamLimits

0x7fce,	// (0x0002766a) indicator_pane_cp2

0x8111,	// (0x000277ad) navi_pane_srt_ParamLimits

0x8111,	// (0x000277ad) navi_pane_srt

0x8135,	// (0x000277d1) popup_clock_digital_analogue_window_cp1

0x0c54,	// (0x000202f0) indicator_pane_t1

0x72a4,	// (0x00026940) copy_highlight_pane

0x72a4,	// (0x00026940) cursor_graphics_pane

0x72a4,	// (0x00026940) graphic_within_text_pane

0x72a4,	// (0x00026940) link_highlight_pane

0xa776,	// (0x00029e12) popup_preview_text_window_t5_ParamLimits

0xa776,	// (0x00029e12) popup_preview_text_window_t5

0x73c8,	// (0x00026a64) cursor_digital_pane

0x73c8,	// (0x00026a64) cursor_primary_pane

0x73d9,	// (0x00026a75) cursor_primary_small_pane

0x73e1,	// (0x00026a7d) cursor_secondary_pane

0x73e9,	// (0x00026a85) cursor_title_pane

0x73c8,	// (0x00026a64) link_highlight_digital_pane

0x73d0,	// (0x00026a6c) link_highlight_primary_pane

0x73d9,	// (0x00026a75) link_highlight_primary_small_pane

0x73e1,	// (0x00026a7d) link_highlight_secondary_pane

0x73e9,	// (0x00026a85) link_highlight_title_pane

0x73c8,	// (0x00026a64) copy_highlight_digital_pane

0x73c8,	// (0x00026a64) copy_highlight_primary_pane

0x73d9,	// (0x00026a75) copy_highlight_primary_small_pane

0x73e1,	// (0x00026a7d) copy_highlight_secondary_pane

0x73e9,	// (0x00026a85) copy_highlight_title_pane

0x73e1,	// (0x00026a7d) graphic_text_digital_pane

0x9ff5,	// (0x00029691) graphic_text_primary_pane

0x9ffe,	// (0x0002969a) graphic_text_primary_small_pane

0x73d9,	// (0x00026a75) graphic_text_secondary_pane

0x73c8,	// (0x00026a64) graphic_text_title_pane

0x73f1,	// (0x00026a8d) cursor_primary_pane_g1

0x9fe7,	// (0x00029683) cursor_text_primary_t1

0x9fcf,	// (0x0002966b) cursor_primary_small_pane_g1

0x9fd9,	// (0x00029675) cursor_text_primary_small_t1

0x9fb7,	// (0x00029653) cursor_primary_small_pane_g1_copy1

0x9fc1,	// (0x0002965d) cursor_text_primary_small_t1_copy1

0x9f9f,	// (0x0002963b) cursor_text_title_t1

0x9fad,	// (0x00029649) cursor_title_pane_g1

0x73f1,	// (0x00026a8d) cursor_digital_pane_g1

0x73fb,	// (0x00026a97) cursor_text_digital_t1

0x7409,	// (0x00026aa5) link_highlight_primary_pane_g1

0x9f48,	// (0x000295e4) link_highlight_primary_pane_t1

0x7409,	// (0x00026aa5) link_highlight_primary_small_pane_g1

0x7411,	// (0x00026aad) link_highlight_primary_small_pane_t1

0x7420,	// (0x00026abc) link_highlight_secondary_pane_g1

0x7428,	// (0x00026ac4) link_highlight_secondary_pane_t1

0x9ebc,	// (0x00029558) link_highlight_title_pane_g1

0x9ec4,	// (0x00029560) link_highlight_title_pane_t1

0x9ea5,	// (0x00029541) link_highlight_digital_pane_g1

0x9ead,	// (0x00029549) link_highlight_digital_pane_t1

0x9d6d,	// (0x00029409) copy_highlight_primary_pane_g1

0x9d84,	// (0x00029420) copy_highlight_primary_pane_t1

0x9d6d,	// (0x00029409) copy_highlight_primary_small_pane_g1

0x9d75,	// (0x00029411) copy_highlight_primary_small_pane_t1

0x7437,	// (0x00026ad3) copy_highlight_secondary_pane_g1

0x743f,	// (0x00026adb) copy_highlight_secondary_pane_t1

0x9d56,	// (0x000293f2) copy_highlight_title_pane_g1

0x9d5e,	// (0x000293fa) copy_highlight_title_pane_t1

0x9d6d,	// (0x00029409) copy_highlight_digital_pane_g1

0xb070,	// (0x0002a70c) copy_highlight_digital_pane_t1

0xafc4,	// (0x0002a660) graphic_text_primary_pane_g1

0xb054,	// (0x0002a6f0) graphic_text_primary_pane_t1

0xb062,	// (0x0002a6fe) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0002f065) graphic_text_primary_pane_t

0xb030,	// (0x0002a6cc) graphic_text_primary_small_pane_g1

0xb038,	// (0x0002a6d4) graphic_text_primary_small_pane_t1

0xb046,	// (0x0002a6e2) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0002f060) graphic_text_primary_small_pane_t

0xb00c,	// (0x0002a6a8) graphic_text_secondary_pane_g1

0xb014,	// (0x0002a6b0) graphic_text_secondary_pane_t1

0xb022,	// (0x0002a6be) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0002f05b) graphic_text_secondary_pane_t

0xafe8,	// (0x0002a684) graphic_text_title_pane_g1

0xaff0,	// (0x0002a68c) graphic_text_title_pane_t1

0xaffe,	// (0x0002a69a) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0002f056) graphic_text_title_pane_t

0xafc4,	// (0x0002a660) graphic_text_digital_pane_g1

0xafcc,	// (0x0002a668) graphic_text_digital_pane_t1

0xafda,	// (0x0002a676) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0002f051) graphic_text_digital_pane_t

0x0bf6,	// (0x00020292) navi_icon_pane_srt_ParamLimits

0x0bf6,	// (0x00020292) navi_icon_pane_srt

0x0b8e,	// (0x0002022a) navi_midp_pane_srt

0x0b8e,	// (0x0002022a) navi_navi_pane_srt

0x0bf6,	// (0x00020292) navi_text_pane_srt_ParamLimits

0x0bf6,	// (0x00020292) navi_text_pane_srt

0xaf8f,	// (0x0002a62b) navi_navi_icon_text_pane_srt

0xaf97,	// (0x0002a633) navi_navi_pane_srt_g1_ParamLimits

0xaf97,	// (0x0002a633) navi_navi_pane_srt_g1

0xafa9,	// (0x0002a645) navi_navi_pane_srt_g2_ParamLimits

0xafa9,	// (0x0002a645) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0002f04c) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0002f04c) navi_navi_pane_srt_g

0xafbb,	// (0x0002a657) navi_navi_tabs_pane_srt

0xaf8f,	// (0x0002a62b) navi_navi_text_pane_srt

0xaf8f,	// (0x0002a62b) navi_navi_volume_pane_srt

0xaf80,	// (0x0002a61c) navi_navi_text_pane_srt_t1

0x8a7e,	// (0x0002811a) navi_navi_volume_pane_srt_g1

0x8a86,	// (0x00028122) volume_small_pane_srt_ParamLimits

0x8a86,	// (0x00028122) volume_small_pane_srt

0x744e,	// (0x00026aea) volume_small_pane_srt_g1_ParamLimits

0x744e,	// (0x00026aea) volume_small_pane_srt_g1

0x745e,	// (0x00026afa) volume_small_pane_srt_g2_ParamLimits

0x745e,	// (0x00026afa) volume_small_pane_srt_g2

0x746f,	// (0x00026b0b) volume_small_pane_srt_g3_ParamLimits

0x746f,	// (0x00026b0b) volume_small_pane_srt_g3

0x7480,	// (0x00026b1c) volume_small_pane_srt_g4_ParamLimits

0x7480,	// (0x00026b1c) volume_small_pane_srt_g4

0x7491,	// (0x00026b2d) volume_small_pane_srt_g5_ParamLimits

0x7491,	// (0x00026b2d) volume_small_pane_srt_g5

0x74a2,	// (0x00026b3e) volume_small_pane_srt_g6_ParamLimits

0x74a2,	// (0x00026b3e) volume_small_pane_srt_g6

0x74b3,	// (0x00026b4f) volume_small_pane_srt_g7_ParamLimits

0x74b3,	// (0x00026b4f) volume_small_pane_srt_g7

0x74c4,	// (0x00026b60) volume_small_pane_srt_g8_ParamLimits

0x74c4,	// (0x00026b60) volume_small_pane_srt_g8

0x74d5,	// (0x00026b71) volume_small_pane_srt_g9_ParamLimits

0x74d5,	// (0x00026b71) volume_small_pane_srt_g9

0x74e6,	// (0x00026b82) volume_small_pane_srt_g10_ParamLimits

0x74e6,	// (0x00026b82) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0002edf4) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0002edf4) volume_small_pane_srt_g

0x0ea0,	// (0x0002053c) query_popup_data_pane_cp2

0xaf66,	// (0x0002a602) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaf66,	// (0x0002a602) navi_navi_icon_text_pane_srt_t1

0x9ff5,	// (0x00029691) navi_tabs_2_long_pane_srt

0x9ff5,	// (0x00029691) navi_tabs_2_pane_srt

0x9ff5,	// (0x00029691) navi_tabs_3_long_pane_srt

0x9ff5,	// (0x00029691) navi_tabs_3_pane_srt

0x9ff5,	// (0x00029691) navi_tabs_4_pane_srt

0x8a5e,	// (0x000280fa) tabs_2_active_pane_srt_ParamLimits

0x8a5e,	// (0x000280fa) tabs_2_active_pane_srt

0x8a6e,	// (0x0002810a) tabs_2_passive_pane_srt_ParamLimits

0x8a6e,	// (0x0002810a) tabs_2_passive_pane_srt

0x7815,	// (0x00026eb1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7815,	// (0x00026eb1) bg_passive_tab_pane_cp1_srt

0xaf32,	// (0x0002a5ce) bg_passive_tab_pane_g1_cp1_srt

0x34c7,	// (0x00022b63) bg_passive_tab_pane_g2_cp1_srt

0xaf3b,	// (0x0002a5d7) bg_passive_tab_pane_g3_cp1_srt

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp1_srt_ParamLimits

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp1_srt

0xaf44,	// (0x0002a5e0) tabs_2_active_pane_srt_g1

0xaf4c,	// (0x0002a5e8) tabs_2_active_pane_srt_t1_ParamLimits

0xaf4c,	// (0x0002a5e8) tabs_2_active_pane_srt_t1

0xaf32,	// (0x0002a5ce) bg_active_tab_pane_g1_cp1_srt

0x34c7,	// (0x00022b63) bg_active_tab_pane_g2_cp1_srt

0xaf3b,	// (0x0002a5d7) bg_active_tab_pane_g3_cp1_srt

0x8a2b,	// (0x000280c7) tabs_3_active_pane_srt_ParamLimits

0x8a2b,	// (0x000280c7) tabs_3_active_pane_srt

0x8a3c,	// (0x000280d8) tabs_3_passive_pane_cp_srt_ParamLimits

0x8a3c,	// (0x000280d8) tabs_3_passive_pane_cp_srt

0x8a4d,	// (0x000280e9) tabs_3_passive_pane_srt_ParamLimits

0x8a4d,	// (0x000280e9) tabs_3_passive_pane_srt

0x7815,	// (0x00026eb1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7815,	// (0x00026eb1) bg_passive_tab_pane_cp2_srt

0x74f7,	// (0x00026b93) bg_passive_tab_pane_g1_cp2_srt

0x34c7,	// (0x00022b63) bg_passive_tab_pane_g2_cp2_srt

0x7500,	// (0x00026b9c) bg_passive_tab_pane_g3_cp2_srt

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp2_srt_ParamLimits

0x0bf6,	// (0x00020292) bg_active_tab_pane_cp2_srt

0xaf18,	// (0x0002a5b4) tabs_3_active_pane_srt_g1

0xaf20,	// (0x0002a5bc) tabs_3_active_pane_srt_t1_ParamLimits

0xaf20,	// (0x0002a5bc) tabs_3_active_pane_srt_t1

0x74f7,	// (0x00026b93) bg_active_tab_pane_g1_cp2_srt

0x34c7,	// (0x00022b63) bg_active_tab_pane_g2_cp2_srt

0x7500,	// (0x00026b9c) bg_active_tab_pane_g3_cp2_srt

0x89e3,	// (0x0002807f) tabs_4_active_pane_srt_ParamLimits

0x89e3,	// (0x0002807f) tabs_4_active_pane_srt

0x89f5,	// (0x00028091) tabs_4_passive_pane_cp2_srt_ParamLimits

0x89f5,	// (0x00028091) tabs_4_passive_pane_cp2_srt

0x779b,	// (0x00026e37) aid_size_cell_toolbar

0x6b41,	// (0x000261dd) main_idle_act_pane_ParamLimits

0x79de,	// (0x0002707a) popup_large_graphic_colour_window_ParamLimits

0x7d85,	// (0x00027421) popup_toolbar_window_ParamLimits

0x7d85,	// (0x00027421) popup_toolbar_window

0x5bb1,	// (0x0002524d) list_single_graphic_2heading_pane_ParamLimits

0x5bb1,	// (0x0002524d) list_single_graphic_2heading_pane

0x3125,	// (0x000227c1) aid_size_cell_apps_grid_lsc_pane

0x3137,	// (0x000227d3) aid_size_cell_apps_grid_prt_pane

0x7815,	// (0x00026eb1) bg_wml_button_pane_cp1_ParamLimits

0x7815,	// (0x00026eb1) bg_wml_button_pane_cp1

0x8713,	// (0x00027daf) form_midp_field_text_pane_t1_ParamLimits

0x8471,	// (0x00027b0d) input_focus_pane_cp050_ParamLimits

0x873e,	// (0x00027dda) list_midp_form_text_pane_ParamLimits

0x86f0,	// (0x00027d8c) input_focus_pane_cp051_ParamLimits

0x8704,	// (0x00027da0) list_midp_choice_pane_ParamLimits

0x85b8,	// (0x00027c54) list_single_2graphic_pane_cp3_ParamLimits

0x85b8,	// (0x00027c54) list_single_2graphic_pane_cp3

0x85d1,	// (0x00027c6d) list_single_midp_graphic_pane_ParamLimits

0x85d1,	// (0x00027c6d) list_single_midp_graphic_pane

0x59a6,	// (0x00025042) list_single_graphic_2heading_pane_g1_ParamLimits

0x59a6,	// (0x00025042) list_single_graphic_2heading_pane_g1

0x59b2,	// (0x0002504e) list_single_graphic_2heading_pane_g4_ParamLimits

0x59b2,	// (0x0002504e) list_single_graphic_2heading_pane_g4

0x59be,	// (0x0002505a) list_single_graphic_2heading_pane_g5_ParamLimits

0x59be,	// (0x0002505a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0002ee47) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0002ee47) list_single_graphic_2heading_pane_g

0x59ca,	// (0x00025066) list_single_graphic_2heading_pane_t1_ParamLimits

0x59ca,	// (0x00025066) list_single_graphic_2heading_pane_t1

0x59de,	// (0x0002507a) list_single_graphic_2heading_pane_t2_ParamLimits

0x59de,	// (0x0002507a) list_single_graphic_2heading_pane_t2

0x59fa,	// (0x00025096) list_single_graphic_2heading_pane_t3_ParamLimits

0x59fa,	// (0x00025096) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0002ee4e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0002ee4e) list_single_graphic_2heading_pane_t

0x8294,	// (0x00027930) bg_popup_sub_pane_cp2

0x82be,	// (0x0002795a) grid_toobar_pane

0x82fa,	// (0x00027996) cell_toolbar_pane_ParamLimits

0x82fa,	// (0x00027996) cell_toolbar_pane

0x832a,	// (0x000279c6) cell_toolbar_pane_g1_ParamLimits

0x832a,	// (0x000279c6) cell_toolbar_pane_g1

0x833e,	// (0x000279da) cell_toolbar_pane_g2_ParamLimits

0x833e,	// (0x000279da) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0002ee5c) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0002ee5c) cell_toolbar_pane_g

0x8360,	// (0x000279fc) grid_highlight_pane_cp2_ParamLimits

0x8360,	// (0x000279fc) grid_highlight_pane_cp2

0x837a,	// (0x00027a16) toolbar_button_pane

0x8386,	// (0x00027a22) toolbar_button_pane_g1

0x838e,	// (0x00027a2a) toolbar_button_pane_g2

0x8396,	// (0x00027a32) toolbar_button_pane_g3

0x839e,	// (0x00027a3a) toolbar_button_pane_g4

0x83a6,	// (0x00027a42) toolbar_button_pane_g5

0x83ae,	// (0x00027a4a) toolbar_button_pane_g6

0x83b6,	// (0x00027a52) toolbar_button_pane_g7

0x83be,	// (0x00027a5a) toolbar_button_pane_g8

0x83c6,	// (0x00027a62) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0002ee61) toolbar_button_pane_g

0x83d6,	// (0x00027a72) list_single_2graphic_pane_g1_cp3_ParamLimits

0x83d6,	// (0x00027a72) list_single_2graphic_pane_g1_cp3

0x83e2,	// (0x00027a7e) list_single_2graphic_pane_g2_cp3_ParamLimits

0x83e2,	// (0x00027a7e) list_single_2graphic_pane_g2_cp3

0x35d8,	// (0x00022c74) list_single_2graphic_pane_g3_cp3

0x83f3,	// (0x00027a8f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x83f3,	// (0x00027a8f) list_single_2graphic_pane_g4_cp3

0x83ff,	// (0x00027a9b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x83ff,	// (0x00027a9b) list_single_2graphic_pane_t1_cp3

0x35cc,	// (0x00022c68) list_single_midp_graphic_pane_g2_ParamLimits

0x35cc,	// (0x00022c68) list_single_midp_graphic_pane_g2

0x77a3,	// (0x00026e3f) aid_zoom_text_primary

0x5996,	// (0x00025032) aid_zoom_text_secondary

0x75b1,	// (0x00026c4d) status_small_pane_g7_ParamLimits

0x75b1,	// (0x00026c4d) status_small_pane_g7

0x75d4,	// (0x00026c70) status_small_pane_t1_ParamLimits

0x675a,	// (0x00025df6) title_pane_g2

0x0003,

0xf54e,	// (0x0002ebea) title_pane_g

0x69af,	// (0x0002604b) aid_size_cell_colour_1_pane_ParamLimits

0x69af,	// (0x0002604b) aid_size_cell_colour_1_pane

0x69c3,	// (0x0002605f) aid_size_cell_colour_2_pane_ParamLimits

0x69c3,	// (0x0002605f) aid_size_cell_colour_2_pane

0x69d7,	// (0x00026073) aid_size_cell_colour_3_pane_ParamLimits

0x69d7,	// (0x00026073) aid_size_cell_colour_3_pane

0x69eb,	// (0x00026087) aid_size_cell_colour_4_pane_ParamLimits

0x69eb,	// (0x00026087) aid_size_cell_colour_4_pane

0x6b9b,	// (0x00026237) title_pane_stacon_g1_ParamLimits

0x6b9b,	// (0x00026237) title_pane_stacon_g1

0x9ddb,	// (0x00029477) popup_note_wait_window_g3_ParamLimits

0x9ddb,	// (0x00029477) popup_note_wait_window_g3

0x9e52,	// (0x000294ee) popup_note_wait_window_t5_ParamLimits

0x9e52,	// (0x000294ee) popup_note_wait_window_t5

0x0b8e,	// (0x0002022a) main_feb_china_hwr_fs_writing_pane

0x78a5,	// (0x00026f41) popup_feb_china_hwr_fs_window_ParamLimits

0x78a5,	// (0x00026f41) popup_feb_china_hwr_fs_window

0x845c,	// (0x00027af8) aid_size_cell_hwr_fs_ParamLimits

0x845c,	// (0x00027af8) aid_size_cell_hwr_fs

0x8471,	// (0x00027b0d) bg_popup_sub_pane_cp3_ParamLimits

0x8471,	// (0x00027b0d) bg_popup_sub_pane_cp3

0x847d,	// (0x00027b19) grid_hwr_fs_pane_ParamLimits

0x847d,	// (0x00027b19) grid_hwr_fs_pane

0x8495,	// (0x00027b31) linegrid_hwr_fs_pane_ParamLimits

0x8495,	// (0x00027b31) linegrid_hwr_fs_pane

0x84a5,	// (0x00027b41) cell_hwr_fs_pane_ParamLimits

0x84a5,	// (0x00027b41) cell_hwr_fs_pane

0x84c9,	// (0x00027b65) linegrid_hwr_fs_pane_g1_ParamLimits

0x84c9,	// (0x00027b65) linegrid_hwr_fs_pane_g1

0x84d5,	// (0x00027b71) linegrid_hwr_fs_pane_g2_ParamLimits

0x84d5,	// (0x00027b71) linegrid_hwr_fs_pane_g2

0x84e7,	// (0x00027b83) linegrid_hwr_fs_pane_g3_ParamLimits

0x84e7,	// (0x00027b83) linegrid_hwr_fs_pane_g3

0x84f3,	// (0x00027b8f) linegrid_hwr_fs_pane_g4_ParamLimits

0x84f3,	// (0x00027b8f) linegrid_hwr_fs_pane_g4

0x8511,	// (0x00027bad) linegrid_hwr_fs_pane_g5_ParamLimits

0x8511,	// (0x00027bad) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0002ee8c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0002ee8c) linegrid_hwr_fs_pane_g

0x8527,	// (0x00027bc3) cell_hwr_fs_pane_g1_ParamLimits

0x8527,	// (0x00027bc3) cell_hwr_fs_pane_g1

0x81cb,	// (0x00027867) cell_hwr_fs_pane_g2_ParamLimits

0x81cb,	// (0x00027867) cell_hwr_fs_pane_g2

0x853d,	// (0x00027bd9) cell_hwr_fs_pane_g3_ParamLimits

0x853d,	// (0x00027bd9) cell_hwr_fs_pane_g3

0x854a,	// (0x00027be6) cell_hwr_fs_pane_g4_ParamLimits

0x854a,	// (0x00027be6) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0002ee97) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002ee97) cell_hwr_fs_pane_g

0x8557,	// (0x00027bf3) cell_hwr_fs_pane_t1

0x0b8e,	// (0x0002022a) grid_highlight_pane_cp6

0x0b8e,	// (0x0002022a) main_idle_act2_pane

0x2df3,	// (0x0002248f) aid_inside_area_popup_secondary

0xa48b,	// (0x00029b27) aid_inside_area_window_primary_ParamLimits

0xa48b,	// (0x00029b27) aid_inside_area_window_primary

0xb07f,	// (0x0002a71b) ai2_news_ticker_pane

0xb087,	// (0x0002a723) aid_size_cell_ai1_link_ParamLimits

0xb087,	// (0x0002a723) aid_size_cell_ai1_link

0xb0a1,	// (0x0002a73d) popup_ai2_data_window_ParamLimits

0xb0a1,	// (0x0002a73d) popup_ai2_data_window

0xb0bf,	// (0x0002a75b) popup_ai2_link_window_ParamLimits

0xb0bf,	// (0x0002a75b) popup_ai2_link_window

0x8471,	// (0x00027b0d) bg_popup_sub_pane_cp4_ParamLimits

0x8471,	// (0x00027b0d) bg_popup_sub_pane_cp4

0xb0d5,	// (0x0002a771) grid_ai2_link_pane_ParamLimits

0xb0d5,	// (0x0002a771) grid_ai2_link_pane

0xb0ec,	// (0x0002a788) popup_ai2_link_window_g1_ParamLimits

0xb0ec,	// (0x0002a788) popup_ai2_link_window_g1

0xb0f8,	// (0x0002a794) popup_ai2_link_window_g2_ParamLimits

0xb0f8,	// (0x0002a794) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0002f06a) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0002f06a) popup_ai2_link_window_g

0xb109,	// (0x0002a7a5) ai2_mp_button_pane

0xb111,	// (0x0002a7ad) ai2_mp_volume_pane

0x86f0,	// (0x00027d8c) bg_popup_sub_pane_cp5_ParamLimits

0x86f0,	// (0x00027d8c) bg_popup_sub_pane_cp5

0xb119,	// (0x0002a7b5) heading_ai2_gene_pane_ParamLimits

0xb119,	// (0x0002a7b5) heading_ai2_gene_pane

0xb125,	// (0x0002a7c1) list_ai2_gene_pane_ParamLimits

0xb125,	// (0x0002a7c1) list_ai2_gene_pane

0xb16d,	// (0x0002a809) cell_ai2_link_pane_ParamLimits

0xb16d,	// (0x0002a809) cell_ai2_link_pane

0xb183,	// (0x0002a81f) cell_ai2_link_pane_g1

0x0b8e,	// (0x0002022a) grid_highlight_pane_cp7

0x8a9b,	// (0x00028137) ai2_mp_volume_pane_g1

0xb256,	// (0x0002a8f2) ai2_mp_volume_pane_g2

0xb1cb,	// (0x0002a867) list_ai2_gene_pane_t1

0xb25e,	// (0x0002a8fa) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0002f083) ai2_mp_volume_pane_g

0x8aa3,	// (0x0002813f) volume_small_pane_cp3

0xb266,	// (0x0002a902) aid_size_cell_ai2_button

0xb26e,	// (0x0002a90a) grid_ai2_button_pane

0xb277,	// (0x0002a913) cell_ai2_button_pane_ParamLimits

0xb277,	// (0x0002a913) cell_ai2_button_pane

0x0b84,	// (0x00020220) cell_ai2_button_pane_g1

0x0b8e,	// (0x0002022a) grid_highlight_pane_cp8

0xb216,	// (0x0002a8b2) ai2_gene_pane_t1_ParamLimits

0xb216,	// (0x0002a8b2) ai2_gene_pane_t1

0x7791,	// (0x00026e2d) aid_height_parent_landscape

0xab1d,	// (0x0002a1b9) aid_height_set_list

0xab2e,	// (0x0002a1ca) aid_size_parent

0xaea0,	// (0x0002a53c) aid_size_cell_graphic_pane_ParamLimits

0xb135,	// (0x0002a7d1) popup_ai2_data_window_g1_ParamLimits

0xb135,	// (0x0002a7d1) popup_ai2_data_window_g1

0xb141,	// (0x0002a7dd) ai2_news_ticker_pane_g1

0xb149,	// (0x0002a7e5) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0002f06f) ai2_news_ticker_pane_g

0xb151,	// (0x0002a7ed) ai2_news_ticker_pane_t1

0xb15f,	// (0x0002a7fb) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0002f074) ai2_news_ticker_pane_t

0xb18c,	// (0x0002a828) heading_ai2_gene_pane_g1

0xb194,	// (0x0002a830) heading_ai2_gene_pane_t1_ParamLimits

0xb194,	// (0x0002a830) heading_ai2_gene_pane_t1

0xb1a9,	// (0x0002a845) list_highlight_pane_cp6

0xb1b1,	// (0x0002a84d) ai2_gene_pane_ParamLimits

0xb1b1,	// (0x0002a84d) ai2_gene_pane

0xb1d9,	// (0x0002a875) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0002f079) list_ai2_gene_pane_t

0xb1e7,	// (0x0002a883) list_highlight_pane_cp8_ParamLimits

0xb1e7,	// (0x0002a883) list_highlight_pane_cp8

0xb1f8,	// (0x0002a894) ai2_gene_pane_g1_ParamLimits

0xb1f8,	// (0x0002a894) ai2_gene_pane_g1

0xb20a,	// (0x0002a8a6) ai2_gene_pane_g2_ParamLimits

0xb20a,	// (0x0002a8a6) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0002f07e) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0002f07e) ai2_gene_pane_g

0x11bb,	// (0x00020857) scroll_pane_cp12

0x7748,	// (0x00026de4) control_pane_t3_ParamLimits

0x7748,	// (0x00026de4) control_pane_t3

0x75c5,	// (0x00026c61) status_small_pane_g8_ParamLimits

0x75c5,	// (0x00026c61) status_small_pane_g8

0x79a3,	// (0x0002703f) popup_find_window_ParamLimits

0x7bce,	// (0x0002726a) popup_note_image_window_ParamLimits

0x5a12,	// (0x000250ae) list_double2_graphic_pane_vc_g1_ParamLimits

0x5a12,	// (0x000250ae) list_double2_graphic_pane_vc_g1

0x5a1e,	// (0x000250ba) list_double2_graphic_pane_vc_g2_ParamLimits

0x5a1e,	// (0x000250ba) list_double2_graphic_pane_vc_g2

0x5a2a,	// (0x000250c6) list_double2_graphic_pane_vc_g3_ParamLimits

0x5a2a,	// (0x000250c6) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0002ee55) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0002ee55) list_double2_graphic_pane_vc_g

0x5a36,	// (0x000250d2) list_double2_graphic_pane_vc_t1_ParamLimits

0x5a36,	// (0x000250d2) list_double2_graphic_pane_vc_t1

0x59b2,	// (0x0002504e) list_single_heading_pane_vc_g1_ParamLimits

0x59b2,	// (0x0002504e) list_single_heading_pane_vc_g1

0x59be,	// (0x0002505a) list_single_heading_pane_vc_g2_ParamLimits

0x59be,	// (0x0002505a) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee76) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee76) list_single_heading_pane_vc_g

0x5a4c,	// (0x000250e8) list_single_heading_pane_vc_t1_ParamLimits

0x5a4c,	// (0x000250e8) list_single_heading_pane_vc_t1

0x5a64,	// (0x00025100) list_single_heading_pane_vc_t2_ParamLimits

0x5a64,	// (0x00025100) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0002ee7b) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0002ee7b) list_single_heading_pane_vc_t

0x5a76,	// (0x00025112) list_setting_number_pane_vc_g1_ParamLimits

0x5a76,	// (0x00025112) list_setting_number_pane_vc_g1

0x5a82,	// (0x0002511e) list_setting_number_pane_vc_g2_ParamLimits

0x5a82,	// (0x0002511e) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002ee80) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002ee80) list_setting_number_pane_vc_g

0x5a8e,	// (0x0002512a) list_setting_number_pane_vc_t1_ParamLimits

0x5a8e,	// (0x0002512a) list_setting_number_pane_vc_t1

0x5aa2,	// (0x0002513e) list_setting_number_pane_vc_t2_ParamLimits

0x5aa2,	// (0x0002513e) list_setting_number_pane_vc_t2

0x5abe,	// (0x0002515a) list_setting_number_pane_vc_t3_ParamLimits

0x5abe,	// (0x0002515a) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0002ee85) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0002ee85) list_setting_number_pane_vc_t

0x5aec,	// (0x00025188) set_value_pane_vc_ParamLimits

0x5aec,	// (0x00025188) set_value_pane_vc

0x5bb1,	// (0x0002524d) list_double2_graphic_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_double2_graphic_pane_vc

0xad06,	// (0x0002a3a2) list_double2_large_graphic_pane_vc_ParamLimits

0xad06,	// (0x0002a3a2) list_double2_large_graphic_pane_vc

0x5bb1,	// (0x0002524d) list_double2_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_double2_pane_vc

0x5bb1,	// (0x0002524d) list_double_graphic_heading_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_double_graphic_heading_pane_vc

0x5bb1,	// (0x0002524d) list_double_graphic_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_double_graphic_pane_vc

0x5bb1,	// (0x0002524d) list_double_heading_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_double_heading_pane_vc

0xad1a,	// (0x0002a3b6) list_double_large_graphic_pane_vc_ParamLimits

0xad1a,	// (0x0002a3b6) list_double_large_graphic_pane_vc

0x5bb1,	// (0x0002524d) list_double_number_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_double_number_pane_vc

0x5bb1,	// (0x0002524d) list_double_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_double_pane_vc

0x5bb1,	// (0x0002524d) list_double_time_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_double_time_pane_vc

0x5bb1,	// (0x0002524d) list_setting_number_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_setting_number_pane_vc

0x5bb1,	// (0x0002524d) list_setting_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_setting_pane_vc

0x5bb1,	// (0x0002524d) list_single_graphic_heading_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_single_graphic_heading_pane_vc

0x5bb1,	// (0x0002524d) list_single_heading_pane_vc_ParamLimits

0x5bb1,	// (0x0002524d) list_single_heading_pane_vc

0xad3c,	// (0x0002a3d8) list_single_number_heading_pane_vc_ParamLimits

0xad3c,	// (0x0002a3d8) list_single_number_heading_pane_vc

0x5a12,	// (0x000250ae) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5a12,	// (0x000250ae) list_double_graphic_heading_pane_vc_g1

0x59b2,	// (0x0002504e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x59b2,	// (0x0002504e) list_double_graphic_heading_pane_vc_g2

0x59be,	// (0x0002505a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x59be,	// (0x0002505a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0002f08a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0002f08a) list_double_graphic_heading_pane_vc_g

0x5bf6,	// (0x00025292) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5bf6,	// (0x00025292) list_double_graphic_heading_pane_vc_t1

0x5c0c,	// (0x000252a8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5c0c,	// (0x000252a8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0002f091) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0002f091) list_double_graphic_heading_pane_vc_t

0x5a76,	// (0x00025112) list_setting_pane_vc_g1_ParamLimits

0x5a76,	// (0x00025112) list_setting_pane_vc_g1

0x5a82,	// (0x0002511e) list_setting_pane_vc_g2_ParamLimits

0x5a82,	// (0x0002511e) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002ee80) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002ee80) list_setting_pane_vc_g

0x5c2a,	// (0x000252c6) list_setting_pane_vc_t1_ParamLimits

0x5c2a,	// (0x000252c6) list_setting_pane_vc_t1

0x5c46,	// (0x000252e2) list_setting_pane_vc_t2_ParamLimits

0x5c46,	// (0x000252e2) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0002f0bf) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0002f0bf) list_setting_pane_vc_t

0x5aec,	// (0x00025188) set_value_pane_cp_vc_ParamLimits

0x5aec,	// (0x00025188) set_value_pane_cp_vc

0x59b2,	// (0x0002504e) list_single_number_heading_pane_vc_g1_ParamLimits

0x59b2,	// (0x0002504e) list_single_number_heading_pane_vc_g1

0x59be,	// (0x0002505a) list_single_number_heading_pane_vc_g2_ParamLimits

0x59be,	// (0x0002505a) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee76) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee76) list_single_number_heading_pane_vc_g

0x5a4c,	// (0x000250e8) list_single_number_heading_pane_vc_t1_ParamLimits

0x5a4c,	// (0x000250e8) list_single_number_heading_pane_vc_t1

0x5c62,	// (0x000252fe) list_single_number_heading_pane_vc_t2_ParamLimits

0x5c62,	// (0x000252fe) list_single_number_heading_pane_vc_t2

0x5c74,	// (0x00025310) list_single_number_heading_pane_vc_t3_ParamLimits

0x5c74,	// (0x00025310) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0002f0c4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0002f0c4) list_single_number_heading_pane_vc_t

0x5a12,	// (0x000250ae) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5a12,	// (0x000250ae) list_single_graphic_heading_pane_vc_g1

0x59b2,	// (0x0002504e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x59b2,	// (0x0002504e) list_single_graphic_heading_pane_vc_g4

0x59be,	// (0x0002505a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x59be,	// (0x0002505a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x0002f08a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0002f08a) list_single_graphic_heading_pane_vc_g

0x5a4c,	// (0x000250e8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5a4c,	// (0x000250e8) list_single_graphic_heading_pane_vc_t1

0x5c86,	// (0x00025322) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5c86,	// (0x00025322) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0002f0cb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0002f0cb) list_single_graphic_heading_pane_vc_t

0x59b2,	// (0x0002504e) list_double2_pane_vc_g1_ParamLimits

0x59b2,	// (0x0002504e) list_double2_pane_vc_g1

0x59be,	// (0x0002505a) list_double2_pane_vc_g2_ParamLimits

0x59be,	// (0x0002505a) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee76) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee76) list_double2_pane_vc_g

0x5c98,	// (0x00025334) list_double2_pane_vc_t1_ParamLimits

0x5c98,	// (0x00025334) list_double2_pane_vc_t1

0x5cae,	// (0x0002534a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5cae,	// (0x0002534a) list_double2_large_graphic_pane_vc_g1

0x5cba,	// (0x00025356) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5cba,	// (0x00025356) list_double2_large_graphic_pane_vc_g2

0x5cc6,	// (0x00025362) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5cc6,	// (0x00025362) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0002f0d0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0002f0d0) list_double2_large_graphic_pane_vc_g

0x5cd2,	// (0x0002536e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5cd2,	// (0x0002536e) list_double2_large_graphic_pane_vc_t1

0x5ce8,	// (0x00025384) list_double_time_pane_vc_g1_ParamLimits

0x5ce8,	// (0x00025384) list_double_time_pane_vc_g1

0x5cf4,	// (0x00025390) list_double_time_pane_vc_g2_ParamLimits

0x5cf4,	// (0x00025390) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0002f0d7) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0002f0d7) list_double_time_pane_vc_g

0x5d00,	// (0x0002539c) list_double_time_pane_vc_t1_ParamLimits

0x5d00,	// (0x0002539c) list_double_time_pane_vc_t1

0x5d2a,	// (0x000253c6) list_double_time_pane_vc_t2_ParamLimits

0x5d2a,	// (0x000253c6) list_double_time_pane_vc_t2

0x5d73,	// (0x0002540f) list_double_time_pane_vc_t3_ParamLimits

0x5d73,	// (0x0002540f) list_double_time_pane_vc_t3

0x5d85,	// (0x00025421) list_double_time_pane_vc_t4_ParamLimits

0x5d85,	// (0x00025421) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0002f0dc) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0002f0dc) list_double_time_pane_vc_t

0x59b2,	// (0x0002504e) list_double_pane_vc_g1_ParamLimits

0x59b2,	// (0x0002504e) list_double_pane_vc_g1

0x59be,	// (0x0002505a) list_double_pane_vc_g2_ParamLimits

0x59be,	// (0x0002505a) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee76) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee76) list_double_pane_vc_g

0x5daa,	// (0x00025446) list_double_pane_vc_t1_ParamLimits

0x5daa,	// (0x00025446) list_double_pane_vc_t1

0x5dbe,	// (0x0002545a) list_double_pane_vc_t2_ParamLimits

0x5dbe,	// (0x0002545a) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0002f0e5) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0002f0e5) list_double_pane_vc_t

0x59b2,	// (0x0002504e) list_double_number_pane_vc_g1_ParamLimits

0x59b2,	// (0x0002504e) list_double_number_pane_vc_g1

0x59be,	// (0x0002505a) list_double_number_pane_vc_g2_ParamLimits

0x59be,	// (0x0002505a) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee76) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee76) list_double_number_pane_vc_g

0x5dd4,	// (0x00025470) list_double_number_pane_vc_t1_ParamLimits

0x5dd4,	// (0x00025470) list_double_number_pane_vc_t1

0x5de8,	// (0x00025484) list_double_number_pane_vc_t2_ParamLimits

0x5de8,	// (0x00025484) list_double_number_pane_vc_t2

0x5dfc,	// (0x00025498) list_double_number_pane_vc_t3_ParamLimits

0x5dfc,	// (0x00025498) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0002f0ea) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002f0ea) list_double_number_pane_vc_t

0x5e12,	// (0x000254ae) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5e12,	// (0x000254ae) list_double_large_graphic_pane_vc_g1

0x5e3a,	// (0x000254d6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5e3a,	// (0x000254d6) list_double_large_graphic_pane_vc_g2

0x5e4e,	// (0x000254ea) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5e4e,	// (0x000254ea) list_double_large_graphic_pane_vc_g3

0x5e5d,	// (0x000254f9) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5e5d,	// (0x000254f9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0002f0f1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0002f0f1) list_double_large_graphic_pane_vc_g

0x5e6d,	// (0x00025509) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5e6d,	// (0x00025509) list_double_large_graphic_pane_vc_t1

0x5e8f,	// (0x0002552b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5e8f,	// (0x0002552b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0002f0fa) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0002f0fa) list_double_large_graphic_pane_vc_t

0x59b2,	// (0x0002504e) list_double_heading_pane_vc_g1_ParamLimits

0x59b2,	// (0x0002504e) list_double_heading_pane_vc_g1

0x59be,	// (0x0002505a) list_double_heading_pane_vc_g2_ParamLimits

0x59be,	// (0x0002505a) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee76) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee76) list_double_heading_pane_vc_g

0x5eaf,	// (0x0002554b) list_double_heading_pane_vc_t1_ParamLimits

0x5eaf,	// (0x0002554b) list_double_heading_pane_vc_t1

0x5a4c,	// (0x000250e8) list_double_heading_pane_vc_t2_ParamLimits

0x5a4c,	// (0x000250e8) list_double_heading_pane_vc_t2

0x0001,

0xfa63,	// (0x0002f0ff) list_double_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x0002f0ff) list_double_heading_pane_vc_t

0x5ec1,	// (0x0002555d) list_double_graphic_pane_vc_g1_ParamLimits

0x5ec1,	// (0x0002555d) list_double_graphic_pane_vc_g1

0x5ed4,	// (0x00025570) list_double_graphic_pane_vc_g2_ParamLimits

0x5ed4,	// (0x00025570) list_double_graphic_pane_vc_g2

0x59b2,	// (0x0002504e) list_double_graphic_pane_vc_g3_ParamLimits

0x59b2,	// (0x0002504e) list_double_graphic_pane_vc_g3

0x0003,

0xfa68,	// (0x0002f104) list_double_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0002f104) list_double_graphic_pane_vc_g

0x5ef1,	// (0x0002558d) list_double_graphic_pane_vc_t1_ParamLimits

0x5ef1,	// (0x0002558d) list_double_graphic_pane_vc_t1

0x5f1b,	// (0x000255b7) list_double_graphic_pane_vc_t2_ParamLimits

0x5f1b,	// (0x000255b7) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0002f10d) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0002f10d) list_double_graphic_pane_vc_t

0x6366,	// (0x00025a02) aid_size_cell_fastswap

0x636e,	// (0x00025a0a) aid_size_cell_touch_ParamLimits

0x636e,	// (0x00025a0a) aid_size_cell_touch

0x65cf,	// (0x00025c6b) popup_fast_swap_wide_window_ParamLimits

0x65cf,	// (0x00025c6b) popup_fast_swap_wide_window

0x66ed,	// (0x00025d89) touch_pane_ParamLimits

0x66ed,	// (0x00025d89) touch_pane

0x2bd8,	// (0x00022274) button_value_adjust_pane_cp2

0x569d,	// (0x00024d39) button_value_adjust_pane_cp4

0x56c3,	// (0x00024d5f) form_field_data_pane_cp2

0x56e6,	// (0x00024d82) form_field_data_wide_pane_cp2

0x3173,	// (0x0002280f) bg_scroll_pane_ParamLimits

0x6d83,	// (0x0002641f) scroll_handle_pane_ParamLimits

0x6d97,	// (0x00026433) scroll_sc2_down_pane_ParamLimits

0x6d97,	// (0x00026433) scroll_sc2_down_pane

0x31a4,	// (0x00022840) scroll_sc2_up_pane_ParamLimits

0x31a4,	// (0x00022840) scroll_sc2_up_pane

0xb990,	// (0x0002b02c) grid_wheel_folder_pane_g1_ParamLimits

0xb990,	// (0x0002b02c) grid_wheel_folder_pane_g1

0x709d,	// (0x00026739) clock_nsta_pane_cp2_ParamLimits

0x709d,	// (0x00026739) clock_nsta_pane_cp2

0x6b41,	// (0x000261dd) listscroll_midp_pane_ParamLimits

0x72ac,	// (0x00026948) midp_canvas_pane

0x7789,	// (0x00026e25) nsta_clock_indic_pane

0x77df,	// (0x00026e7b) listscroll_form_pane_vc

0x7803,	// (0x00026e9f) listscroll_set_pane_vc_ParamLimits

0x7803,	// (0x00026e9f) listscroll_set_pane_vc

0x7f1f,	// (0x000275bb) clock_nsta_pane

0x7f9c,	// (0x00027638) indicator_nsta_pane

0x8294,	// (0x00027930) bg_popup_sub_pane_cp2_ParamLimits

0x82a8,	// (0x00027944) find_pane_cp2_ParamLimits

0x82a8,	// (0x00027944) find_pane_cp2

0x82be,	// (0x0002795a) grid_toobar_pane_ParamLimits

0x8430,	// (0x00027acc) list_form_gen_pane_vc_ParamLimits

0x8430,	// (0x00027acc) list_form_gen_pane_vc

0x8446,	// (0x00027ae2) scroll_pane_cp8_vc_ParamLimits

0x8446,	// (0x00027ae2) scroll_pane_cp8_vc

0x8565,	// (0x00027c01) data_form_wide_pane_vc_ParamLimits

0x8565,	// (0x00027c01) data_form_wide_pane_vc

0x8571,	// (0x00027c0d) form_field_data_wide_pane_vc_g1

0x8579,	// (0x00027c15) form_field_data_wide_pane_vc_t1_ParamLimits

0x8579,	// (0x00027c15) form_field_data_wide_pane_vc_t1

0x2c43,	// (0x000222df) input_focus_pane_cp6_vc_ParamLimits

0x2c43,	// (0x000222df) input_focus_pane_cp6_vc

0x9b55,	// (0x000291f1) list_midp_pane_ParamLimits

0x9b61,	// (0x000291fd) scroll_pane_cp16_ParamLimits

0x9b61,	// (0x000291fd) scroll_pane_cp16

0x9baf,	// (0x0002924b) button_value_adjust_pane_ParamLimits

0x9baf,	// (0x0002924b) button_value_adjust_pane

0xab40,	// (0x0002a1dc) button_value_adjust_pane_cp6_ParamLimits

0xab40,	// (0x0002a1dc) button_value_adjust_pane_cp6

0xac8e,	// (0x0002a32a) settings_code_pane_cp_ParamLimits

0xac8e,	// (0x0002a32a) settings_code_pane_cp

0x0b84,	// (0x00020220) cell_touch_pane_g1

0x0b84,	// (0x00020220) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0002ed9a) cell_touch_pane_g

0xb289,	// (0x0002a925) cell_touch_pane_cp_ParamLimits

0xb289,	// (0x0002a925) cell_touch_pane_cp

0xb299,	// (0x0002a935) cell_touch_pane_ParamLimits

0xb299,	// (0x0002a935) cell_touch_pane

0x0b84,	// (0x00020220) scroll_sc2_down_pane_g1

0x0b84,	// (0x00020220) scroll_sc2_up_pane_g1

0x0b8e,	// (0x0002022a) bg_set_opt_pane_cp4_vc

0xb2aa,	// (0x0002a946) list_set_graphic_pane_vc_g1_ParamLimits

0xb2aa,	// (0x0002a946) list_set_graphic_pane_vc_g1

0x36a7,	// (0x00022d43) list_set_graphic_pane_vc_g2_ParamLimits

0x36a7,	// (0x00022d43) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0002f096) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0002f096) list_set_graphic_pane_vc_g

0xb2b6,	// (0x0002a952) text_primary_small_cp13_vc_ParamLimits

0xb2b6,	// (0x0002a952) text_primary_small_cp13_vc

0xb2ce,	// (0x0002a96a) list_set_graphic_pane_vc_ParamLimits

0xb2ce,	// (0x0002a96a) list_set_graphic_pane_vc

0x0b8e,	// (0x0002022a) input_focus_pane_cp2_vc

0x0b84,	// (0x00020220) setting_code_pane_vc_g1

0x0c0d,	// (0x000202a9) setting_code_pane_vc_t1

0xb2e3,	// (0x0002a97f) set_text_pane_vc_t1_ParamLimits

0xb2e3,	// (0x0002a97f) set_text_pane_vc_t1

0x0b8e,	// (0x0002022a) input_focus_pane_cp1_vc

0xb301,	// (0x0002a99d) list_set_text_pane_vc

0x0b84,	// (0x00020220) setting_text_pane_vc_g1

0x0b8e,	// (0x0002022a) bg_set_opt_pane_cp2_vc

0x0c04,	// (0x000202a0) setting_slider_graphic_pane_vc_g1

0xb30b,	// (0x0002a9a7) setting_slider_graphic_pane_vc_t1

0xb31d,	// (0x0002a9b9) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0002f09b) setting_slider_graphic_pane_vc_t

0xb32f,	// (0x0002a9cb) slider_set_pane_cp_vc

0xb339,	// (0x0002a9d5) slider_set_pane_vc_g1

0xb342,	// (0x0002a9de) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0002f0a0) slider_set_pane_vc_g

0x2d0c,	// (0x000223a8) set_opt_bg_pane_g1_copy1

0x2d14,	// (0x000223b0) set_opt_bg_pane_g2_copy1

0xb36e,	// (0x0002aa0a) set_opt_bg_pane_g3_copy1

0x2d24,	// (0x000223c0) set_opt_bg_pane_g4_copy1

0x2d2c,	// (0x000223c8) set_opt_bg_pane_g5_copy1

0x2d34,	// (0x000223d0) set_opt_bg_pane_g6_copy1

0xb378,	// (0x0002aa14) set_opt_bg_pane_g7_copy1

0xb382,	// (0x0002aa1e) set_opt_bg_pane_g8_copy1

0xb38c,	// (0x0002aa28) set_opt_bg_pane_g9_copy1

0x0b8e,	// (0x0002022a) bg_set_opt_pane_cp_vc

0xb396,	// (0x0002aa32) setting_slider_pane_vc_t1

0xb3a5,	// (0x0002aa41) setting_slider_pane_vc_t2

0xb3b7,	// (0x0002aa53) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0002f0af) setting_slider_pane_vc_t

0xb3c9,	// (0x0002aa65) slider_set_pane_vc

0x879b,	// (0x00027e37) volume_set_pane_vc_g1

0x87a4,	// (0x00027e40) volume_set_pane_vc_g2

0x87ad,	// (0x00027e49) volume_set_pane_vc_g3

0x87b6,	// (0x00027e52) volume_set_pane_vc_g4

0x87bf,	// (0x00027e5b) volume_set_pane_vc_g5

0x87c8,	// (0x00027e64) volume_set_pane_vc_g6

0x87d1,	// (0x00027e6d) volume_set_pane_vc_g7

0x87da,	// (0x00027e76) volume_set_pane_vc_g8

0x87e3,	// (0x00027e7f) volume_set_pane_vc_g9

0x87ec,	// (0x00027e88) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0002ef4d) volume_set_pane_vc_g

0xb3d3,	// (0x0002aa6f) volume_set_pane_vc

0xb3dd,	// (0x0002aa79) button_value_adjust_pane_cp1_vc

0xb3e7,	// (0x0002aa83) list_highlight_pane_cp2_vc

0xb3f0,	// (0x0002aa8c) list_set_pane_vc_ParamLimits

0xb3f0,	// (0x0002aa8c) list_set_pane_vc

0xb460,	// (0x0002aafc) main_pane_set_vc_t1_ParamLimits

0xb460,	// (0x0002aafc) main_pane_set_vc_t1

0xb475,	// (0x0002ab11) main_pane_set_vc_t2_ParamLimits

0xb475,	// (0x0002ab11) main_pane_set_vc_t2

0xb487,	// (0x0002ab23) main_pane_set_vc_t3_ParamLimits

0xb487,	// (0x0002ab23) main_pane_set_vc_t3

0xb49b,	// (0x0002ab37) main_pane_set_vc_t4_ParamLimits

0xb49b,	// (0x0002ab37) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0002f0b6) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0002f0b6) main_pane_set_vc_t

0xb4af,	// (0x0002ab4b) setting_code_pane_vc_ParamLimits

0xb4af,	// (0x0002ab4b) setting_code_pane_vc

0xb4c0,	// (0x0002ab5c) setting_slider_graphic_pane_vc

0xb4c0,	// (0x0002ab5c) setting_slider_pane_vc

0xb4c0,	// (0x0002ab5c) setting_text_pane_vc

0xb4c0,	// (0x0002ab5c) setting_volume_pane_vc

0xb4ca,	// (0x0002ab66) scroll_pane_cp121_vc

0x2bc6,	// (0x00022262) set_content_pane_vc

0xb4d2,	// (0x0002ab6e) button_value_adjust_pane_g1

0xb4db,	// (0x0002ab77) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x0002f112) button_value_adjust_pane_g

0xb4e4,	// (0x0002ab80) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb4e4,	// (0x0002ab80) form_field_slider_wide_pane_vc_t1

0xb4f6,	// (0x0002ab92) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb4f6,	// (0x0002ab92) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7b,	// (0x0002f117) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x0002f117) form_field_slider_wide_pane_vc_t

0x0be8,	// (0x00020284) input_focus_pane_cp10_vc_ParamLimits

0x0be8,	// (0x00020284) input_focus_pane_cp10_vc

0xb522,	// (0x0002abbe) slider_cont_pane_cp1_vc_ParamLimits

0xb522,	// (0x0002abbe) slider_cont_pane_cp1_vc

0xb534,	// (0x0002abd0) slider_form_pane_g1_cp2

0xb342,	// (0x0002a9de) slider_form_pane_g2_cp2

0xb561,	// (0x0002abfd) form_field_slider_pane_vc_t3

0xb56f,	// (0x0002ac0b) form_field_slider_pane_vc_t4

0xb57d,	// (0x0002ac19) slider_form_pane_vc_ParamLimits

0xb57d,	// (0x0002ac19) slider_form_pane_vc

0xb58a,	// (0x0002ac26) form_field_slider_pane_vc_t1_ParamLimits

0xb58a,	// (0x0002ac26) form_field_slider_pane_vc_t1

0xb4f6,	// (0x0002ab92) form_field_slider_pane_vc_t2_ParamLimits

0xb4f6,	// (0x0002ab92) form_field_slider_pane_vc_t2

0x0001,

0xfa8d,	// (0x0002f129) form_field_slider_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002f129) form_field_slider_pane_vc_t

0x0be8,	// (0x00020284) input_focus_pane_cp9_vc_ParamLimits

0x0be8,	// (0x00020284) input_focus_pane_cp9_vc

0xb5a0,	// (0x0002ac3c) slider_cont_pane_vc_ParamLimits

0xb5a0,	// (0x0002ac3c) slider_cont_pane_vc

0xb5b4,	// (0x0002ac50) list_form_graphic_pane_cp_vc_ParamLimits

0xb5b4,	// (0x0002ac50) list_form_graphic_pane_cp_vc

0x8571,	// (0x00027c0d) form_field_popup_wide_pane_vc_g1

0xb5c9,	// (0x0002ac65) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb5c9,	// (0x0002ac65) form_field_popup_wide_pane_vc_t1

0x2c43,	// (0x000222df) input_focus_pane_cp8_vc_ParamLimits

0x2c43,	// (0x000222df) input_focus_pane_cp8_vc

0xb60e,	// (0x0002acaa) list_form_wide_pane_vc_ParamLimits

0xb60e,	// (0x0002acaa) list_form_wide_pane_vc

0xb61a,	// (0x0002acb6) list_form_graphic_pane_vc_g1

0xb622,	// (0x0002acbe) list_form_graphic_pane_vc_t1_ParamLimits

0xb622,	// (0x0002acbe) list_form_graphic_pane_vc_t1

0x0bf6,	// (0x00020292) list_highlight_pane_cp5_vc_ParamLimits

0x0bf6,	// (0x00020292) list_highlight_pane_cp5_vc

0xb63e,	// (0x0002acda) list_form_graphic_pane_vc_ParamLimits

0xb63e,	// (0x0002acda) list_form_graphic_pane_vc

0x8571,	// (0x00027c0d) form_field_popup_pane_vc_g1

0xb654,	// (0x0002acf0) form_field_popup_pane_vc_t1_ParamLimits

0xb654,	// (0x0002acf0) form_field_popup_pane_vc_t1

0x2c43,	// (0x000222df) input_focus_pane_cp7_vc_ParamLimits

0x2c43,	// (0x000222df) input_focus_pane_cp7_vc

0xb66b,	// (0x0002ad07) list_form_pane_vc_ParamLimits

0xb66b,	// (0x0002ad07) list_form_pane_vc

0xb677,	// (0x0002ad13) data_form_pane_vc_t1_ParamLimits

0xb677,	// (0x0002ad13) data_form_pane_vc_t1

0x2d0c,	// (0x000223a8) input_focus_pane_vc_g1

0x2d14,	// (0x000223b0) input_focus_pane_vc_g2

0x2d1c,	// (0x000223b8) input_focus_pane_vc_g3

0x2d24,	// (0x000223c0) input_focus_pane_vc_g4

0x2d2c,	// (0x000223c8) input_focus_pane_vc_g5

0x2d34,	// (0x000223d0) input_focus_pane_vc_g6

0x2d3c,	// (0x000223d8) input_focus_pane_vc_g7

0x2d44,	// (0x000223e0) input_focus_pane_vc_g8

0x2d4c,	// (0x000223e8) input_focus_pane_vc_g9

0x0b84,	// (0x00020220) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0002ed23) input_focus_pane_vc_g

0x8565,	// (0x00027c01) data_form_pane_vc_ParamLimits

0x8565,	// (0x00027c01) data_form_pane_vc

0x8571,	// (0x00027c0d) form_field_data_pane_vc_g1

0xb694,	// (0x0002ad30) form_field_data_pane_vc_t1_ParamLimits

0xb694,	// (0x0002ad30) form_field_data_pane_vc_t1

0x2c43,	// (0x000222df) input_focus_pane_vc_ParamLimits

0x2c43,	// (0x000222df) input_focus_pane_vc

0xb6ae,	// (0x0002ad4a) button_value_adjust_pane_cp3_vc

0xb6b6,	// (0x0002ad52) button_value_adjust_pane_cp5_vc

0xb6be,	// (0x0002ad5a) form_field_data_pane_vc_ParamLimits

0xb6be,	// (0x0002ad5a) form_field_data_pane_vc

0xb6d9,	// (0x0002ad75) form_field_data_pane_vc_cp2

0xb6e1,	// (0x0002ad7d) form_field_data_wide_pane_vc_ParamLimits

0xb6e1,	// (0x0002ad7d) form_field_data_wide_pane_vc

0xb6fb,	// (0x0002ad97) form_field_data_wide_pane_vc_cp2

0xb703,	// (0x0002ad9f) form_field_popup_pane_vc_ParamLimits

0xb703,	// (0x0002ad9f) form_field_popup_pane_vc

0xb71e,	// (0x0002adba) form_field_popup_wide_pane_vc_ParamLimits

0xb71e,	// (0x0002adba) form_field_popup_wide_pane_vc

0xb738,	// (0x0002add4) form_field_slider_pane_vc_ParamLimits

0xb738,	// (0x0002add4) form_field_slider_pane_vc

0xb74b,	// (0x0002ade7) form_field_slider_wide_pane_vc_ParamLimits

0xb74b,	// (0x0002ade7) form_field_slider_wide_pane_vc

0xb75e,	// (0x0002adfa) grid_touch_1_pane_ParamLimits

0xb75e,	// (0x0002adfa) grid_touch_1_pane

0xb76a,	// (0x0002ae06) grid_touch_2_pane_ParamLimits

0xb76a,	// (0x0002ae06) grid_touch_2_pane

0x7658,	// (0x00026cf4) touch_pane_g1_ParamLimits

0x7658,	// (0x00026cf4) touch_pane_g1

0xb784,	// (0x0002ae20) cell_app_pane_cp_wide_ParamLimits

0xb784,	// (0x0002ae20) cell_app_pane_cp_wide

0xb795,	// (0x0002ae31) grid_popup_fast_wide_pane_ParamLimits

0xb795,	// (0x0002ae31) grid_popup_fast_wide_pane

0xb7a9,	// (0x0002ae45) scroll_pane_cp19_ParamLimits

0xb7a9,	// (0x0002ae45) scroll_pane_cp19

0x0b8e,	// (0x0002022a) bg_popup_window_pane_cp20

0xb7bd,	// (0x0002ae59) listscroll_popup_fast_wide_pane

0x0bf6,	// (0x00020292) grid_indicator_nsta_pane

0xb7c5,	// (0x0002ae61) clock_nsta_pane_g1

0xb7ce,	// (0x0002ae6a) clock_nsta_pane_t1

0xb7ea,	// (0x0002ae86) cell_indicator_nsta_pane_ParamLimits

0xb7ea,	// (0x0002ae86) cell_indicator_nsta_pane

0xb81c,	// (0x0002aeb8) cell_indicator_nsta_pane_g1

0xb82a,	// (0x0002aec6) cell_indicator_nsta_pane_g2

0x0001,

0xfa9e,	// (0x0002f13a) cell_indicator_nsta_pane_g

0xb840,	// (0x0002aedc) clock_nsta_pane_cp

0xb848,	// (0x0002aee4) indicator_nsta_pane_cp

0xb851,	// (0x0002aeed) nsta_clock_indic_pane_g1

0x0c4c,	// (0x000202e8) grid_indicator_pane

0x3296,	// (0x00022932) scroll_pane_cp29

0x6fe9,	// (0x00026685) indicator_nsta_pane_cp2_ParamLimits

0x6fe9,	// (0x00026685) indicator_nsta_pane_cp2

0x0bf6,	// (0x00020292) main_apps_wheel_pane

0x8758,	// (0x00027df4) form_midp_field_text_pane_ParamLimits

0x9b81,	// (0x0002921d) scroll_bar_cp050_ParamLimits

0xb8ba,	// (0x0002af56) cell_indicator_pane_ParamLimits

0xb8ba,	// (0x0002af56) cell_indicator_pane

0xb8d2,	// (0x0002af6e) cell_indicator_pane_g1

0xb8dc,	// (0x0002af78) grid_wheel_folder_pane_ParamLimits

0xb8dc,	// (0x0002af78) grid_wheel_folder_pane

0xb8f0,	// (0x0002af8c) list_wheel_apps_pane_ParamLimits

0xb8f0,	// (0x0002af8c) list_wheel_apps_pane

0xb903,	// (0x0002af9f) main_apps_wheel_pane_g1_ParamLimits

0xb903,	// (0x0002af9f) main_apps_wheel_pane_g1

0xb91f,	// (0x0002afbb) main_apps_wheel_pane_g2_ParamLimits

0xb91f,	// (0x0002afbb) main_apps_wheel_pane_g2

0x0001,

0xfaba,	// (0x0002f156) main_apps_wheel_pane_g_ParamLimits

0xfaba,	// (0x0002f156) main_apps_wheel_pane_g

0xb93b,	// (0x0002afd7) main_apps_wheel_pane_t1_ParamLimits

0xb93b,	// (0x0002afd7) main_apps_wheel_pane_t1

0xb964,	// (0x0002b000) list_wheel_apps_pane_g1

0xb96c,	// (0x0002b008) list_wheel_apps_pane_g2

0xb974,	// (0x0002b010) list_wheel_apps_pane_g3

0xb97c,	// (0x0002b018) list_wheel_apps_pane_g4

0xb986,	// (0x0002b022) list_wheel_apps_pane_g5

0x0004,

0xfabf,	// (0x0002f15b) list_wheel_apps_pane_g

0x3616,	// (0x00022cb2) navi_icon_text_pane

0x7e4c,	// (0x000274e8) aid_fill_nsta

0xb9a7,	// (0x0002b043) navi_icon_text_pane_g1

0xb9b3,	// (0x0002b04f) navi_icon_text_pane_t1

0x7132,	// (0x000267ce) list_set_graphic_pane_t1_ParamLimits

0x7132,	// (0x000267ce) list_set_graphic_pane_t1

0xa2d2,	// (0x0002996e) popup_midp_note_alarm_window_t6_ParamLimits

0xa2d2,	// (0x0002996e) popup_midp_note_alarm_window_t6

0xa2e4,	// (0x00029980) popup_midp_note_alarm_window_t7_ParamLimits

0xa2e4,	// (0x00029980) popup_midp_note_alarm_window_t7

0xa2f6,	// (0x00029992) popup_midp_note_alarm_window_t8_ParamLimits

0xa2f6,	// (0x00029992) popup_midp_note_alarm_window_t8

0xa308,	// (0x000299a4) popup_midp_note_alarm_window_t9_ParamLimits

0xa308,	// (0x000299a4) popup_midp_note_alarm_window_t9

0xa31a,	// (0x000299b6) popup_midp_note_alarm_window_t10_ParamLimits

0xa31a,	// (0x000299b6) popup_midp_note_alarm_window_t10

0xa32c,	// (0x000299c8) popup_midp_note_alarm_window_t11_ParamLimits

0xa32c,	// (0x000299c8) popup_midp_note_alarm_window_t11

0xa33e,	// (0x000299da) scroll_pane_cp17_ParamLimits

0xa33e,	// (0x000299da) scroll_pane_cp17

0x879b,	// (0x00027e37) volume_small_pane_cp_g1

0x8aac,	// (0x00028148) volume_small_pane_cp_g2

0x8ab5,	// (0x00028151) volume_small_pane_cp_g3

0x8abe,	// (0x0002815a) volume_small_pane_cp_g4

0x8ac7,	// (0x00028163) volume_small_pane_cp_g5

0x8ad0,	// (0x0002816c) volume_small_pane_cp_g6

0x8ad9,	// (0x00028175) volume_small_pane_cp_g7

0x8ae2,	// (0x0002817e) volume_small_pane_cp_g8

0x8aeb,	// (0x00028187) volume_small_pane_cp_g9

0x8af4,	// (0x00028190) volume_small_pane_cp_g10

0x7375,	// (0x00026a11) midp_ticker_pane_g1_ParamLimits

0x7381,	// (0x00026a1d) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0002edef) midp_ticker_pane_g_ParamLimits

0x738d,	// (0x00026a29) midp_ticker_pane_t1_ParamLimits

0x7e62,	// (0x000274fe) aid_fill_nsta_2

0x9b6d,	// (0x00029209) list_form2_midp_pane

0xacd5,	// (0x0002a371) midp_editing_number_pane_ParamLimits

0xace4,	// (0x0002a380) midp_ticker_pane_ParamLimits

0xb9c5,	// (0x0002b061) form2_midp_field_pane

0xb9e9,	// (0x0002b085) scroll_pane_cp51

0xba09,	// (0x0002b0a5) form2_midp_button_pane_ParamLimits

0xba09,	// (0x0002b0a5) form2_midp_button_pane

0xba1b,	// (0x0002b0b7) form2_midp_content_pane_ParamLimits

0xba1b,	// (0x0002b0b7) form2_midp_content_pane

0xba35,	// (0x0002b0d1) form2_midp_field_choice_group_pane

0xba3d,	// (0x0002b0d9) form2_midp_field_pane_g1

0xba45,	// (0x0002b0e1) form2_midp_field_pane_g2

0xba4d,	// (0x0002b0e9) form2_midp_field_pane_g3

0xba55,	// (0x0002b0f1) form2_midp_field_pane_g4

0x0003,

0xfae4,	// (0x0002f180) form2_midp_field_pane_g

0xba5d,	// (0x0002b0f9) form2_midp_gauge_slider_pane

0xba65,	// (0x0002b101) form2_midp_gauge_wait_pane

0xba6d,	// (0x0002b109) form2_midp_image_pane_ParamLimits

0xba6d,	// (0x0002b109) form2_midp_image_pane

0xba88,	// (0x0002b124) form2_midp_label_pane_ParamLimits

0xba88,	// (0x0002b124) form2_midp_label_pane

0xbaa7,	// (0x0002b143) form2_midp_label_pane_cp_ParamLimits

0xbaa7,	// (0x0002b143) form2_midp_label_pane_cp

0xbac8,	// (0x0002b164) form2_midp_string_pane_ParamLimits

0xbac8,	// (0x0002b164) form2_midp_string_pane

0x5f39,	// (0x000255d5) form2_midp_text_pane_ParamLimits

0x5f39,	// (0x000255d5) form2_midp_text_pane

0xbada,	// (0x0002b176) form2_midp_time_pane

0xbaea,	// (0x0002b186) input_focus_pane_cp51_ParamLimits

0xbaea,	// (0x0002b186) input_focus_pane_cp51

0xbb02,	// (0x0002b19e) form2_midp_label_pane_t1_ParamLimits

0xbb02,	// (0x0002b19e) form2_midp_label_pane_t1

0x5f5a,	// (0x000255f6) form2_mdip_text_pane_t1_ParamLimits

0x5f5a,	// (0x000255f6) form2_mdip_text_pane_t1

0x5f7e,	// (0x0002561a) form2_midp_time_pane_t1

0xbb50,	// (0x0002b1ec) form2_midp_gauge_slider_pane_t1

0xbb62,	// (0x0002b1fe) form2_midp_gauge_slider_pane_t2

0xbb74,	// (0x0002b210) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaed,	// (0x0002f189) form2_midp_gauge_slider_pane_t

0xbb86,	// (0x0002b222) form2_midp_slider_pane

0xbb92,	// (0x0002b22e) form2_midp_gauge_wait_pane_t1

0xbba0,	// (0x0002b23c) form2_midp_wait_pane_ParamLimits

0xbba0,	// (0x0002b23c) form2_midp_wait_pane

0x85b8,	// (0x00027c54) list_single_2graphic_pane_cp4_ParamLimits

0x85b8,	// (0x00027c54) list_single_2graphic_pane_cp4

0xbbcb,	// (0x0002b267) list_single_midp_graphic_pane_cp_ParamLimits

0xbbcb,	// (0x0002b267) list_single_midp_graphic_pane_cp

0x0b8e,	// (0x0002022a) list_highlight_pane_cp20

0xbbef,	// (0x0002b28b) list_single_2graphic_pane_g1_cp4

0xb18c,	// (0x0002a828) list_single_2graphic_pane_g2_cp4

0xbbf7,	// (0x0002b293) list_single_2graphic_pane_t1_cp4

0x0bf6,	// (0x00020292) list_highlight_pane_cp21

0xbc06,	// (0x0002b2a2) list_single_midp_graphic_pane_g4_cp

0xbc15,	// (0x0002b2b1) list_single_midp_graphic_pane_t1_cp

0xbc2a,	// (0x0002b2c6) form2_mdip_string_pane_t1_ParamLimits

0xbc2a,	// (0x0002b2c6) form2_mdip_string_pane_t1

0x0b8e,	// (0x0002022a) bg_wml_button_pane_cp2

0x0b84,	// (0x00020220) form2_midp_image_pane_g1

0x545f,	// (0x00024afb) list_double_large_graphic_pane_g5_ParamLimits

0x545f,	// (0x00024afb) list_double_large_graphic_pane_g5

0x6b41,	// (0x000261dd) midp_form_pane_ParamLimits

0x0bf6,	// (0x00020292) main_apps_wheel_pane_ParamLimits

0x7bf6,	// (0x00027292) popup_preview_window_ParamLimits

0x7bf6,	// (0x00027292) popup_preview_window

0x7ddd,	// (0x00027479) popup_touch_info_window_ParamLimits

0x7ddd,	// (0x00027479) popup_touch_info_window

0x7dff,	// (0x0002749b) popup_touch_menu_window_ParamLimits

0x7dff,	// (0x0002749b) popup_touch_menu_window

0x0b7a,	// (0x00020216) bg_popup_sub_pane_cp6

0xbccf,	// (0x0002b36b) list_touch_menu_pane

0xbcd7,	// (0x0002b373) list_single_touch_menu_pane_ParamLimits

0xbcd7,	// (0x0002b373) list_single_touch_menu_pane

0xbcef,	// (0x0002b38b) list_single_touch_menu_pane_t1

0x0bf6,	// (0x00020292) bg_popup_sub_pane_cp7_ParamLimits

0x0bf6,	// (0x00020292) bg_popup_sub_pane_cp7

0xbcfd,	// (0x0002b399) heading_sub_pane

0xbd05,	// (0x0002b3a1) list_touch_info_pane_ParamLimits

0xbd05,	// (0x0002b3a1) list_touch_info_pane

0xbd14,	// (0x0002b3b0) list_single_touch_info_pane_ParamLimits

0xbd14,	// (0x0002b3b0) list_single_touch_info_pane

0xbd26,	// (0x0002b3c2) list_single_touch_info_pane_t1

0xbd34,	// (0x0002b3d0) list_single_touch_info_pane_t2

0x0001,

0xfafb,	// (0x0002f197) list_single_touch_info_pane_t

0x72a4,	// (0x00026940) bg_popup_heading_pane_cp

0xbd42,	// (0x0002b3de) heading_sub_pane_t1

0x8471,	// (0x00027b0d) bg_popup_preview_window_pane_cp_ParamLimits

0x8471,	// (0x00027b0d) bg_popup_preview_window_pane_cp

0xbcfd,	// (0x0002b399) heading_preview_pane

0xbd05,	// (0x0002b3a1) list_preview_pane_ParamLimits

0xbd05,	// (0x0002b3a1) list_preview_pane

0xbd50,	// (0x0002b3ec) popup_preview_window_g1

0xbd14,	// (0x0002b3b0) list_single_preview_pane_ParamLimits

0xbd14,	// (0x0002b3b0) list_single_preview_pane

0xbd58,	// (0x0002b3f4) list_single_preview_pane_g1

0xbd60,	// (0x0002b3fc) list_single_preview_pane_t1

0xbd26,	// (0x0002b3c2) list_single_preview_pane_t2

0x0001,

0xfb00,	// (0x0002f19c) list_single_preview_pane_t

0xbd6e,	// (0x0002b40a) bg_popup_heading_pane_cp2_ParamLimits

0xbd6e,	// (0x0002b40a) bg_popup_heading_pane_cp2

0xbd84,	// (0x0002b420) heading_preview_pane_g1

0xbd8c,	// (0x0002b428) heading_preview_pane_t1_ParamLimits

0xbd8c,	// (0x0002b428) heading_preview_pane_t1

0x0c63,	// (0x000202ff) soft_indicator_pane_t1_ParamLimits

0x1198,	// (0x00020834) scroll_pane_ParamLimits

0x319b,	// (0x00022837) scroll_sc2_left_pane

0x3192,	// (0x0002282e) scroll_sc2_right_pane

0x31ba,	// (0x00022856) scroll_bg_pane_g1_ParamLimits

0x31cf,	// (0x0002286b) scroll_bg_pane_g2_ParamLimits

0x31e7,	// (0x00022883) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0002ed7a) scroll_bg_pane_g_ParamLimits

0x31ba,	// (0x00022856) scroll_handle_pane_g1_ParamLimits

0x3209,	// (0x000228a5) scroll_handle_pane_g2_ParamLimits

0x31e7,	// (0x00022883) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0002ed81) scroll_handle_pane_g_ParamLimits

0x783d,	// (0x00026ed9) popup_choice_list_window_ParamLimits

0x783d,	// (0x00026ed9) popup_choice_list_window

0x82a0,	// (0x0002793c) choice_list_pane

0x8352,	// (0x000279ee) cell_toolbar_pane_t1

0x837a,	// (0x00027a16) toolbar_button_pane_ParamLimits

0xa808,	// (0x00029ea4) ai_gene_pane_1_t2_ParamLimits

0xa808,	// (0x00029ea4) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0002efa9) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0002efa9) ai_gene_pane_1_t

0xbda9,	// (0x0002b445) scroll_sc2_left_pane_g1

0xbda9,	// (0x0002b445) scroll_sc2_right_pane_g1

0x7815,	// (0x00026eb1) bg_popup_sub_pane_cp10

0xbdb3,	// (0x0002b44f) list_choice_list_pane

0xbdcc,	// (0x0002b468) list_single_choice_list_pane_ParamLimits

0xbdcc,	// (0x0002b468) list_single_choice_list_pane

0xbde4,	// (0x0002b480) list_single_choice_list_pane_g1

0x2e31,	// (0x000224cd) list_single_choice_list_pane_t1_ParamLimits

0x2e31,	// (0x000224cd) list_single_choice_list_pane_t1

0xbdec,	// (0x0002b488) choice_list_pane_g1

0xbdf4,	// (0x0002b490) choice_list_pane_t1

0x0b7a,	// (0x00020216) input_focus_pane_cp11

0x2fff,	// (0x0002269b) title_pane_stacon_g2_ParamLimits

0x2fff,	// (0x0002269b) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0002ed60) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002ed60) title_pane_stacon_g

0x72a4,	// (0x00026940) cursor_press_pane

0x78f7,	// (0x00026f93) popup_fep_hwr_window_ParamLimits

0x78f7,	// (0x00026f93) popup_fep_hwr_window

0x7981,	// (0x0002701d) popup_fep_vkb_window_ParamLimits

0x7981,	// (0x0002701d) popup_fep_vkb_window

0xbe02,	// (0x0002b49e) cursor_press_pane_g1

0x0002,

0xfb29,	// (0x0002f1c5) fep_vkb_side_pane_g_ParamLimits

0x8b28,	// (0x000281c4) fep_hwr_candidate_pane_ParamLimits

0x8b28,	// (0x000281c4) fep_hwr_candidate_pane

0x8b52,	// (0x000281ee) fep_hwr_side_pane_ParamLimits

0x8b52,	// (0x000281ee) fep_hwr_side_pane

0x8b74,	// (0x00028210) fep_hwr_top_pane_ParamLimits

0x8b74,	// (0x00028210) fep_hwr_top_pane

0x8b8c,	// (0x00028228) fep_hwr_write_pane_ParamLimits

0x8b8c,	// (0x00028228) fep_hwr_write_pane

0xfb29,	// (0x0002f1c5) fep_vkb_side_pane_g

0xbe0a,	// (0x0002b4a6) fep_hwr_top_pane_g1

0xbe1c,	// (0x0002b4b8) fep_hwr_top_pane_g2

0x8bb8,	// (0x00028254) fep_hwr_top_pane_g3

0x0002,

0xfb05,	// (0x0002f1a1) fep_hwr_top_pane_g

0x8bcd,	// (0x00028269) fep_hwr_top_text_pane

0x3303,	// (0x0002299f) fep_hwr_top_text_pane_g1

0xbe52,	// (0x0002b4ee) fep_hwr_top_text_pane_t1

0x8cd7,	// (0x00028373) fep_hwr_candidate_pane_g1

0xc09d,	// (0x0002b739) fep_vkb_keypad_pane_g3_ParamLimits

0xc09d,	// (0x0002b739) fep_vkb_keypad_pane_g3

0xc0c9,	// (0x0002b765) fep_vkb_keypad_pane_g4_ParamLimits

0xc0c9,	// (0x0002b765) fep_vkb_keypad_pane_g4

0xc140,	// (0x0002b7dc) fep_vkb_bottom_pane_g2_ParamLimits

0xc140,	// (0x0002b7dc) fep_vkb_bottom_pane_g2

0x0001,

0xfb30,	// (0x0002f1cc) fep_vkb_bottom_pane_g_ParamLimits

0xfb30,	// (0x0002f1cc) fep_vkb_bottom_pane_g

0xbda9,	// (0x0002b445) cell_vkb_side_pane_g2

0x0001,

0xfb3a,	// (0x0002f1d6) cell_vkb_side_pane_g

0xc1cb,	// (0x0002b867) cell_vkb_side_pane_t1

0xc1d9,	// (0x0002b875) cell_vkb_side_pane_t1_copy1

0xbda9,	// (0x0002b445) bg_fep_vkb_candidate_pane_g2

0xc31d,	// (0x0002b9b9) cell_vkb_candidate_pane_ParamLimits

0xbe60,	// (0x0002b4fc) aid_size_cell_vkb_ParamLimits

0xbe60,	// (0x0002b4fc) aid_size_cell_vkb

0xc31d,	// (0x0002b9b9) cell_vkb_candidate_pane

0x8cf1,	// (0x0002838d) bg_popup_fep_shadow_pane_g1

0xbef2,	// (0x0002b58e) fep_vkb_bottom_pane_ParamLimits

0xbef2,	// (0x0002b58e) fep_vkb_bottom_pane

0xbf2f,	// (0x0002b5cb) fep_vkb_candidate_pane_ParamLimits

0xbf2f,	// (0x0002b5cb) fep_vkb_candidate_pane

0xbf4b,	// (0x0002b5e7) fep_vkb_keypad_pane_ParamLimits

0xbf4b,	// (0x0002b5e7) fep_vkb_keypad_pane

0xbf7e,	// (0x0002b61a) fep_vkb_side_pane_ParamLimits

0xbf7e,	// (0x0002b61a) fep_vkb_side_pane

0xbfba,	// (0x0002b656) fep_vkb_top_pane_ParamLimits

0xbfba,	// (0x0002b656) fep_vkb_top_pane

0xbff6,	// (0x0002b692) fep_vkb_top_pane_g1_ParamLimits

0xbff6,	// (0x0002b692) fep_vkb_top_pane_g1

0xc005,	// (0x0002b6a1) fep_vkb_top_pane_g2_ParamLimits

0xc005,	// (0x0002b6a1) fep_vkb_top_pane_g2

0xc014,	// (0x0002b6b0) fep_vkb_top_pane_g3_ParamLimits

0xc014,	// (0x0002b6b0) fep_vkb_top_pane_g3

0x0003,

0xfb20,	// (0x0002f1bc) fep_vkb_top_pane_g_ParamLimits

0xfb20,	// (0x0002f1bc) fep_vkb_top_pane_g

0xc032,	// (0x0002b6ce) fep_vkb_top_text_pane_ParamLimits

0xc032,	// (0x0002b6ce) fep_vkb_top_text_pane

0xc043,	// (0x0002b6df) fep_vkb_side_pane_g1_ParamLimits

0xc043,	// (0x0002b6df) fep_vkb_side_pane_g1

0xc08c,	// (0x0002b728) grid_vkb_side_pane_ParamLimits

0xc08c,	// (0x0002b728) grid_vkb_side_pane

0x8cf9,	// (0x00028395) bg_popup_fep_shadow_pane_g2

0x8d02,	// (0x0002839e) bg_popup_fep_shadow_pane_g3

0x8d0a,	// (0x000283a6) bg_popup_fep_shadow_pane_g4

0x8d13,	// (0x000283af) bg_popup_fep_shadow_pane_g5

0x8d1d,	// (0x000283b9) bg_popup_fep_shadow_pane_g6

0x8d25,	// (0x000283c1) bg_popup_fep_shadow_pane_g7

0x2d2c,	// (0x000223c8) bg_popup_fep_shadow_pane_g8

0xc0eb,	// (0x0002b787) grid_vkb_keypad_number_pane_ParamLimits

0xc0eb,	// (0x0002b787) grid_vkb_keypad_number_pane

0xc0ff,	// (0x0002b79b) grid_vkb_keypad_pane_ParamLimits

0xc0ff,	// (0x0002b79b) grid_vkb_keypad_pane

0xc125,	// (0x0002b7c1) fep_vkb_bottom_pane_g1_ParamLimits

0xc125,	// (0x0002b7c1) fep_vkb_bottom_pane_g1

0xc14e,	// (0x0002b7ea) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc14e,	// (0x0002b7ea) grid_vkb_keypad_bottom_left_pane

0xc163,	// (0x0002b7ff) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc163,	// (0x0002b7ff) grid_vkb_keypad_bottom_right_pane

0xc178,	// (0x0002b814) fep_vkb_top_text_pane_g1

0xc193,	// (0x0002b82f) fep_vkb_top_text_pane_t1

0xc1a8,	// (0x0002b844) cell_vkb_side_pane_ParamLimits

0xc1a8,	// (0x0002b844) cell_vkb_side_pane

0xbda9,	// (0x0002b445) cell_vkb_side_pane_g1

0xc1e7,	// (0x0002b883) cell_vkb_keypad_pane_ParamLimits

0xc1e7,	// (0x0002b883) cell_vkb_keypad_pane

0xc274,	// (0x0002b910) cell_vkb_keypad_pane_g1

0x0008,

0xfb4d,	// (0x0002f1e9) bg_popup_fep_shadow_pane_g

0xbda9,	// (0x0002b445) cell_hwr_side_pane_g1

0xbda9,	// (0x0002b445) cell_hwr_side_pane_g2

0xc27e,	// (0x0002b91a) cell_vkb_keypad_pane_t1

0xc28c,	// (0x0002b928) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc28c,	// (0x0002b928) cell_vkb_keypad_bottom_left_pane

0xc2a9,	// (0x0002b945) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc2a9,	// (0x0002b945) cell_vkb_keypad_bottom_right_pane

0xbda9,	// (0x0002b445) cell_vkb_keypad_bottom_left_pane_g1

0xbda9,	// (0x0002b445) cell_vkb_keypad_bottom_right_pane_g1

0xc2e2,	// (0x0002b97e) cell_vkb_keypad_number_pane_ParamLimits

0xc2e2,	// (0x0002b97e) cell_vkb_keypad_number_pane

0xc301,	// (0x0002b99d) cell_vkb_keypad_number_pane_g1

0xc30b,	// (0x0002b9a7) cell_vkb_keypad_number_pane_g2

0xc314,	// (0x0002b9b0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3f,	// (0x0002f1db) cell_vkb_keypad_number_pane_g

0xc27e,	// (0x0002b91a) cell_vkb_keypad_number_pane_t1

0xc33e,	// (0x0002b9da) fep_vkb_candidate_pane_g1

0x0001,

0xfb3a,	// (0x0002f1d6) cell_hwr_side_pane_g

0xc357,	// (0x0002b9f3) cell_hwr_side_pane_t1

0x8d37,	// (0x000283d3) cell_hwr_side_pane_t1_copy1

0xc024,	// (0x0002b6c0) cell_hwr_candidate_pane_g1

0x8d45,	// (0x000283e1) cell_hwr_candidate_pane_t1

0xbda9,	// (0x0002b445) cell_vkb_candidate_pane_g2

0xc3dd,	// (0x0002ba79) cell_vkb_candidate_pane_t1

0xf540,	// (0x0002ebdc) bg_popup_fep_shadow_pane_ParamLimits

0xf540,	// (0x0002ebdc) bg_popup_fep_shadow_pane

0x0b4a,	// (0x000201e6) bg_fep_hwr_top_pane_g4

0xbe2e,	// (0x0002b4ca) bg_hwr_side_pane_g1_ParamLimits

0xbe2e,	// (0x0002b4ca) bg_hwr_side_pane_g1

0x8c0b,	// (0x000282a7) cell_hwr_side_pane_ParamLimits

0x8c0b,	// (0x000282a7) cell_hwr_side_pane

0x8c48,	// (0x000282e4) fep_hwr_write_pane_g1_ParamLimits

0x8c48,	// (0x000282e4) fep_hwr_write_pane_g1

0x8c55,	// (0x000282f1) fep_hwr_write_pane_g2_ParamLimits

0x8c55,	// (0x000282f1) fep_hwr_write_pane_g2

0x8c62,	// (0x000282fe) fep_hwr_write_pane_g3_ParamLimits

0x8c62,	// (0x000282fe) fep_hwr_write_pane_g3

0x8c70,	// (0x0002830c) fep_hwr_write_pane_g4_ParamLimits

0x8c70,	// (0x0002830c) fep_hwr_write_pane_g4

0x0005,

0xfb0c,	// (0x0002f1a8) fep_hwr_write_pane_g_ParamLimits

0xfb0c,	// (0x0002f1a8) fep_hwr_write_pane_g

0x0b4a,	// (0x000201e6) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0b4a,	// (0x000201e6) bg_fep_hwr_candidate_pane_g2

0x8c85,	// (0x00028321) cell_hwr_candidate_pane_ParamLimits

0x8c85,	// (0x00028321) cell_hwr_candidate_pane

0x8cd7,	// (0x00028373) fep_hwr_candidate_pane_g1_ParamLimits

0xbe8e,	// (0x0002b52a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbe8e,	// (0x0002b52a) bg_popup_fep_shadow_pane_cp2

0xc024,	// (0x0002b6c0) fep_vkb_top_pane_g4_ParamLimits

0xc024,	// (0x0002b6c0) fep_vkb_top_pane_g4

0xc06a,	// (0x0002b706) fep_vkb_side_pane_g2_ParamLimits

0xc06a,	// (0x0002b706) fep_vkb_side_pane_g2

0x55c8,	// (0x00024c64) list_setting_pane_t4_ParamLimits

0x55c8,	// (0x00024c64) list_setting_pane_t4

0x5664,	// (0x00024d00) list_setting_number_pane_t5_ParamLimits

0x5664,	// (0x00024d00) list_setting_number_pane_t5

0x6e26,	// (0x000264c2) list_double_heading_pane_cp2_ParamLimits

0x6e26,	// (0x000264c2) list_double_heading_pane_cp2

0xc3eb,	// (0x0002ba87) list_double_heading_pane_g1_cp2_ParamLimits

0xc3eb,	// (0x0002ba87) list_double_heading_pane_g1_cp2

0xc3f7,	// (0x0002ba93) list_double_heading_pane_g2_cp2_ParamLimits

0xc3f7,	// (0x0002ba93) list_double_heading_pane_g2_cp2

0xc40b,	// (0x0002baa7) list_double_heading_pane_t1_cp2_ParamLimits

0xc40b,	// (0x0002baa7) list_double_heading_pane_t1_cp2

0xc421,	// (0x0002babd) list_double_heading_pane_t2_cp2_ParamLimits

0xc421,	// (0x0002babd) list_double_heading_pane_t2_cp2

0x0b72,	// (0x0002020e) aid_value_unit2

0x662d,	// (0x00025cc9) popup_preview_fixed_window

0x0d43,	// (0x000203df) bg_popup_preview_window_pane_cp02

0xc433,	// (0x0002bacf) list_preview_fixed_pane

0xc479,	// (0x0002bb15) list_empty_pane_fp_ParamLimits

0xc479,	// (0x0002bb15) list_empty_pane_fp

0xc479,	// (0x0002bb15) list_single_cale_day_pane_fp_ParamLimits

0xc479,	// (0x0002bb15) list_single_cale_day_pane_fp

0xc479,	// (0x0002bb15) list_single_graphic_heading_pane_fp_ParamLimits

0xc479,	// (0x0002bb15) list_single_graphic_heading_pane_fp

0xc479,	// (0x0002bb15) list_single_graphic_pane_fp_ParamLimits

0xc479,	// (0x0002bb15) list_single_graphic_pane_fp

0xc479,	// (0x0002bb15) list_single_heading_pane_fp_ParamLimits

0xc479,	// (0x0002bb15) list_single_heading_pane_fp

0xc479,	// (0x0002bb15) list_single_pane_fp_ParamLimits

0xc479,	// (0x0002bb15) list_single_pane_fp

0xc492,	// (0x0002bb2e) list_single_pane_fp_g1_ParamLimits

0xc492,	// (0x0002bb2e) list_single_pane_fp_g1

0x5f91,	// (0x0002562d) list_single_pane_fp_g2_ParamLimits

0x5f91,	// (0x0002562d) list_single_pane_fp_g2

0x5f9d,	// (0x00025639) list_single_pane_fp_g3_ParamLimits

0x5f9d,	// (0x00025639) list_single_pane_fp_g3

0xc49e,	// (0x0002bb3a) list_single_pane_fp_g4_ParamLimits

0xc49e,	// (0x0002bb3a) list_single_pane_fp_g4

0x0003,

0xfb6e,	// (0x0002f20a) list_single_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002f20a) list_single_pane_fp_g

0x5fb1,	// (0x0002564d) list_single_pane_fp_t1_ParamLimits

0x5fb1,	// (0x0002564d) list_single_pane_fp_t1

0x5fc8,	// (0x00025664) list_single_graphic_pane_fp_g1_ParamLimits

0x5fc8,	// (0x00025664) list_single_graphic_pane_fp_g1

0xc492,	// (0x0002bb2e) list_single_graphic_pane_fp_g2_ParamLimits

0xc492,	// (0x0002bb2e) list_single_graphic_pane_fp_g2

0x5f91,	// (0x0002562d) list_single_graphic_pane_fp_g3_ParamLimits

0x5f91,	// (0x0002562d) list_single_graphic_pane_fp_g3

0x5f9d,	// (0x00025639) list_single_graphic_pane_fp_g4_ParamLimits

0x5f9d,	// (0x00025639) list_single_graphic_pane_fp_g4

0xc49e,	// (0x0002bb3a) list_single_graphic_pane_fp_g5_ParamLimits

0xc49e,	// (0x0002bb3a) list_single_graphic_pane_fp_g5

0x0004,

0xfb77,	// (0x0002f213) list_single_graphic_pane_fp_g_ParamLimits

0xfb77,	// (0x0002f213) list_single_graphic_pane_fp_g

0x5fd4,	// (0x00025670) list_single_graphic_pane_fp_t1_ParamLimits

0x5fd4,	// (0x00025670) list_single_graphic_pane_fp_t1

0x5fc8,	// (0x00025664) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5fc8,	// (0x00025664) list_single_graphic_heading_pane_fp_g1

0xc492,	// (0x0002bb2e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc492,	// (0x0002bb2e) list_single_graphic_heading_pane_fp_g2

0x5f91,	// (0x0002562d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5f91,	// (0x0002562d) list_single_graphic_heading_pane_fp_g3

0x5f9d,	// (0x00025639) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5f9d,	// (0x00025639) list_single_graphic_heading_pane_fp_g4

0xc49e,	// (0x0002bb3a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc49e,	// (0x0002bb3a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0002f213) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0002f213) list_single_graphic_heading_pane_fp_g

0x5fea,	// (0x00025686) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5fea,	// (0x00025686) list_single_graphic_heading_pane_fp_t1

0x6000,	// (0x0002569c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6000,	// (0x0002569c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb82,	// (0x0002f21e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb82,	// (0x0002f21e) list_single_graphic_heading_pane_fp_t

0x6012,	// (0x000256ae) list_single_cale_day_pane_fp_g1_ParamLimits

0x6012,	// (0x000256ae) list_single_cale_day_pane_fp_g1

0xc4aa,	// (0x0002bb46) list_single_cale_day_pane_fp_g2_ParamLimits

0xc4aa,	// (0x0002bb46) list_single_cale_day_pane_fp_g2

0x604a,	// (0x000256e6) list_single_cale_day_pane_fp_g3_ParamLimits

0x604a,	// (0x000256e6) list_single_cale_day_pane_fp_g3

0x6072,	// (0x0002570e) list_single_cale_day_pane_fp_g4_ParamLimits

0x6072,	// (0x0002570e) list_single_cale_day_pane_fp_g4

0x6096,	// (0x00025732) list_single_cale_day_pane_fp_g5_ParamLimits

0x6096,	// (0x00025732) list_single_cale_day_pane_fp_g5

0x0004,

0xfb87,	// (0x0002f223) list_single_cale_day_pane_fp_g_ParamLimits

0xfb87,	// (0x0002f223) list_single_cale_day_pane_fp_g

0x60ba,	// (0x00025756) list_single_cale_day_pane_fp_t1_ParamLimits

0x60ba,	// (0x00025756) list_single_cale_day_pane_fp_t1

0x60e0,	// (0x0002577c) list_single_cale_day_pane_fp_t2_ParamLimits

0x60e0,	// (0x0002577c) list_single_cale_day_pane_fp_t2

0x60f9,	// (0x00025795) list_single_cale_day_pane_fp_t3_ParamLimits

0x60f9,	// (0x00025795) list_single_cale_day_pane_fp_t3

0x0002,

0xfb92,	// (0x0002f22e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb92,	// (0x0002f22e) list_single_cale_day_pane_fp_t

0xc492,	// (0x0002bb2e) list_empty_pane_fp_g1_ParamLimits

0xc492,	// (0x0002bb2e) list_empty_pane_fp_g1

0x6112,	// (0x000257ae) list_empty_pane_fp_t1

0x6120,	// (0x000257bc) list_empty_pane_fp_t2

0x0001,

0xfb99,	// (0x0002f235) list_empty_pane_fp_t

0xc492,	// (0x0002bb2e) list_single_heading_pane_fp_g1_ParamLimits

0xc492,	// (0x0002bb2e) list_single_heading_pane_fp_g1

0x5f91,	// (0x0002562d) list_single_heading_pane_fp_g2_ParamLimits

0x5f91,	// (0x0002562d) list_single_heading_pane_fp_g2

0x5f9d,	// (0x00025639) list_single_heading_pane_fp_g3_ParamLimits

0x5f9d,	// (0x00025639) list_single_heading_pane_fp_g3

0x0002,

0xfb9e,	// (0x0002f23a) list_single_heading_pane_fp_g_ParamLimits

0xfb9e,	// (0x0002f23a) list_single_heading_pane_fp_g

0x612e,	// (0x000257ca) list_single_heading_pane_fp_t1_ParamLimits

0x612e,	// (0x000257ca) list_single_heading_pane_fp_t1

0x6140,	// (0x000257dc) list_single_heading_pane_fp_t2_ParamLimits

0x6140,	// (0x000257dc) list_single_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0002f241) list_single_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0002f241) list_single_heading_pane_fp_t

0x2e46,	// (0x000224e2) aid_size_cell_fast

0x0d26,	// (0x000203c2) soft_indicator_pane_cp1_t1

0x2e83,	// (0x0002251f) cell_app_pane_cp2_ParamLimits

0x2e83,	// (0x0002251f) cell_app_pane_cp2

0x8b11,	// (0x000281ad) fep_hwr_candidate_drop_down_list_pane

0x0b58,	// (0x000201f4) fep_hwr_candidate_pane_g3_ParamLimits

0x0b58,	// (0x000201f4) fep_hwr_candidate_pane_g3

0x0b65,	// (0x00020201) fep_hwr_candidate_pane_g4_ParamLimits

0x0b65,	// (0x00020201) fep_hwr_candidate_pane_g4

0x0002,

0xfb19,	// (0x0002f1b5) fep_hwr_candidate_pane_g_ParamLimits

0xfb19,	// (0x0002f1b5) fep_hwr_candidate_pane_g

0xbf1e,	// (0x0002b5ba) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbf1e,	// (0x0002b5ba) fep_vkb_candidate_drop_down_list_pane

0xc346,	// (0x0002b9e2) fep_vkb_candidate_pane_g3

0xc34e,	// (0x0002b9ea) fep_vkb_candidate_pane_g4

0x0002,

0xfb46,	// (0x0002f1e2) fep_vkb_candidate_pane_g

0xc024,	// (0x0002b6c0) cell_hwr_candidate_pane_g1_ParamLimits

0xc365,	// (0x0002ba01) cell_hwr_candidate_pane_g3_ParamLimits

0xc365,	// (0x0002ba01) cell_hwr_candidate_pane_g3

0xc386,	// (0x0002ba22) cell_hwr_candidate_pane_g4_ParamLimits

0xc386,	// (0x0002ba22) cell_hwr_candidate_pane_g4

0x0002,

0xfb60,	// (0x0002f1fc) cell_hwr_candidate_pane_g_ParamLimits

0xfb60,	// (0x0002f1fc) cell_hwr_candidate_pane_g

0xc3a7,	// (0x0002ba43) cell_vkb_candidate_pane_g3_ParamLimits

0xc3a7,	// (0x0002ba43) cell_vkb_candidate_pane_g3

0xc3c2,	// (0x0002ba5e) cell_vkb_candidate_pane_g4_ParamLimits

0xc3c2,	// (0x0002ba5e) cell_vkb_candidate_pane_g4

0xc4b6,	// (0x0002bb52) cell_app_pane_cp2_g1_ParamLimits

0xc4b6,	// (0x0002bb52) cell_app_pane_cp2_g1

0xc4d4,	// (0x0002bb70) cell_app_pane_cp2_g2_ParamLimits

0xc4d4,	// (0x0002bb70) cell_app_pane_cp2_g2

0x0001,

0xfbaa,	// (0x0002f246) cell_app_pane_cp2_g_ParamLimits

0xfbaa,	// (0x0002f246) cell_app_pane_cp2_g

0xc4e0,	// (0x0002bb7c) cell_app_pane_cp2_t1_ParamLimits

0xc4e0,	// (0x0002bb7c) cell_app_pane_cp2_t1

0x2c43,	// (0x000222df) grid_highlight_pane_cp1_ParamLimits

0x2c43,	// (0x000222df) grid_highlight_pane_cp1

0x8d63,	// (0x000283ff) cell_hwr_candidate_pane_cp1_ParamLimits

0x8d63,	// (0x000283ff) cell_hwr_candidate_pane_cp1

0xc024,	// (0x0002b6c0) fep_hwr_candidate_drop_down_list_pane_g1

0xc4f2,	// (0x0002bb8e) fep_hwr_candidate_drop_down_list_pane_g2

0xc4ff,	// (0x0002bb9b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0002f24b) fep_hwr_candidate_drop_down_list_pane_g

0x8d87,	// (0x00028423) fep_hwr_candidate_drop_down_list_scroll_pane

0x8d90,	// (0x0002842c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8d90,	// (0x0002842c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8d9d,	// (0x00028439) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8d9d,	// (0x00028439) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8daa,	// (0x00028446) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8daa,	// (0x00028446) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc3a7,	// (0x0002ba43) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc3a7,	// (0x0002ba43) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc3c2,	// (0x0002ba5e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc3c2,	// (0x0002ba5e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8db7,	// (0x00028453) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8db7,	// (0x00028453) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8dd2,	// (0x0002846e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8dd2,	// (0x0002846e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8ded,	// (0x00028489) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8ded,	// (0x00028489) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x0002f252) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x0002f252) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc50c,	// (0x0002bba8) cell_vkb_candidate_pane_cp1_ParamLimits

0xc50c,	// (0x0002bba8) cell_vkb_candidate_pane_cp1

0xc024,	// (0x0002b6c0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc024,	// (0x0002b6c0) fep_vkb_candidate_drop_down_list_pane_g1

0xc4f2,	// (0x0002bb8e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc4f2,	// (0x0002bb8e) fep_vkb_candidate_drop_down_list_pane_g2

0xc4ff,	// (0x0002bb9b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc4ff,	// (0x0002bb9b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0002f24b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaf,	// (0x0002f24b) fep_vkb_candidate_drop_down_list_pane_g

0xc532,	// (0x0002bbce) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc532,	// (0x0002bbce) fep_vkb_candidate_drop_down_list_scroll_pane

0xc53f,	// (0x0002bbdb) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc53f,	// (0x0002bbdb) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc54c,	// (0x0002bbe8) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc54c,	// (0x0002bbe8) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc558,	// (0x0002bbf4) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc558,	// (0x0002bbf4) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc365,	// (0x0002ba01) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc365,	// (0x0002ba01) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc386,	// (0x0002ba22) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc386,	// (0x0002ba22) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc564,	// (0x0002bc00) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc564,	// (0x0002bc00) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc585,	// (0x0002bc21) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc585,	// (0x0002bc21) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc5a6,	// (0x0002bc42) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc5a6,	// (0x0002bc42) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc7,	// (0x0002f263) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc7,	// (0x0002f263) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x674d,	// (0x00025de9) title_pane_g1_ParamLimits

0x675a,	// (0x00025df6) title_pane_g2_ParamLimits

0xf54e,	// (0x0002ebea) title_pane_g_ParamLimits

0x32fb,	// (0x00022997) aid_call2_pane

0x32f3,	// (0x0002298f) aid_call_pane

0x3303,	// (0x0002299f) popup_clock_analogue_window_g1

0x3303,	// (0x0002299f) popup_clock_analogue_window_g2

0x6e07,	// (0x000264a3) popup_clock_analogue_window_g3

0x6e10,	// (0x000264ac) popup_clock_analogue_window_g4

0x0b84,	// (0x00020220) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0002ed8f) popup_clock_analogue_window_g

0x6e18,	// (0x000264b4) popup_clock_analogue_window_t1

0x6e59,	// (0x000264f5) clock_digital_number_pane_ParamLimits

0x6e59,	// (0x000264f5) clock_digital_number_pane

0x6e65,	// (0x00026501) clock_digital_number_pane_cp02_ParamLimits

0x6e65,	// (0x00026501) clock_digital_number_pane_cp02

0x6e71,	// (0x0002650d) clock_digital_number_pane_cp03_ParamLimits

0x6e71,	// (0x0002650d) clock_digital_number_pane_cp03

0x6e7d,	// (0x00026519) clock_digital_number_pane_cp04_ParamLimits

0x6e7d,	// (0x00026519) clock_digital_number_pane_cp04

0x6e89,	// (0x00026525) clock_digital_separator_pane_ParamLimits

0x6e89,	// (0x00026525) clock_digital_separator_pane

0x6e95,	// (0x00026531) popup_clock_digital_window_t1_ParamLimits

0x6e95,	// (0x00026531) popup_clock_digital_window_t1

0x0b84,	// (0x00020220) clock_digital_number_pane_g1

0x0b84,	// (0x00020220) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0002ed9a) clock_digital_number_pane_g

0x0b84,	// (0x00020220) clock_digital_separator_pane_g1

0x0b84,	// (0x00020220) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0002ed9a) clock_digital_separator_pane_g

0x7e4c,	// (0x000274e8) aid_fill_nsta_ParamLimits

0x7f9c,	// (0x00027638) indicator_nsta_pane_ParamLimits

0x812d,	// (0x000277c9) popup_clock_analogue_window

0x812d,	// (0x000277c9) popup_clock_digital_window

0x0bf6,	// (0x00020292) grid_indicator_nsta_pane_ParamLimits

0xb7dc,	// (0x0002ae78) clock_nsta_pane_t2

0x0001,

0xfa99,	// (0x0002f135) clock_nsta_pane_t

0x6d70,	// (0x0002640c) aid_size_max_handle

0x6d7a,	// (0x00026416) aid_size_min_handle

0x72a4,	// (0x00026940) editor_scroll_pane

0xc5c1,	// (0x0002bc5d) ex_editor_pane

0x2e0c,	// (0x000224a8) scroll_pane_cp13

0x11c4,	// (0x00020860) scroll_pane_cp14

0x3332,	// (0x000229ce) scroll_pane_cp36

0x6e3c,	// (0x000264d8) list_single_graphic_hl_pane_cp2_ParamLimits

0x6e3c,	// (0x000264d8) list_single_graphic_hl_pane_cp2

0x5bc6,	// (0x00025262) list_single_graphic_hl_pane_ParamLimits

0x5bc6,	// (0x00025262) list_single_graphic_hl_pane

0x6156,	// (0x000257f2) aid_size_min_hl_cp1

0xc5c9,	// (0x0002bc65) list_highlight_pane_cp34_ParamLimits

0xc5c9,	// (0x0002bc65) list_highlight_pane_cp34

0xc5da,	// (0x0002bc76) list_single_graphic_hl_pane_g1_ParamLimits

0xc5da,	// (0x0002bc76) list_single_graphic_hl_pane_g1

0x615f,	// (0x000257fb) list_single_graphic_hl_pane_g2_ParamLimits

0x615f,	// (0x000257fb) list_single_graphic_hl_pane_g2

0x615f,	// (0x000257fb) list_single_graphic_hl_pane_g3_ParamLimits

0x615f,	// (0x000257fb) list_single_graphic_hl_pane_g3

0x59b2,	// (0x0002504e) list_single_graphic_hl_pane_g4_ParamLimits

0x59b2,	// (0x0002504e) list_single_graphic_hl_pane_g4

0x616b,	// (0x00025807) list_single_graphic_hl_pane_g5_ParamLimits

0x616b,	// (0x00025807) list_single_graphic_hl_pane_g5

0x0004,

0xfbd8,	// (0x0002f274) list_single_graphic_hl_pane_g_ParamLimits

0xfbd8,	// (0x0002f274) list_single_graphic_hl_pane_g

0x617f,	// (0x0002581b) list_single_graphic_hl_pane_t1_ParamLimits

0x617f,	// (0x0002581b) list_single_graphic_hl_pane_t1

0xc5e7,	// (0x0002bc83) aid_size_min_hl_cp2

0xc5f0,	// (0x0002bc8c) list_highlight_pane_cp34_cp2_ParamLimits

0xc5f0,	// (0x0002bc8c) list_highlight_pane_cp34_cp2

0xc5da,	// (0x0002bc76) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc5da,	// (0x0002bc76) list_single_graphic_hl_pane_g1_cp2

0xc5fd,	// (0x0002bc99) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc5fd,	// (0x0002bc99) list_single_graphic_hl_pane_g2_cp2

0xc609,	// (0x0002bca5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc609,	// (0x0002bca5) list_single_graphic_hl_pane_g3_cp2

0x11e5,	// (0x00020881) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x11e5,	// (0x00020881) list_single_graphic_hl_pane_g4_cp2

0xc617,	// (0x0002bcb3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc617,	// (0x0002bcb3) list_single_graphic_hl_pane_g5_cp2

0x7666,	// (0x00026d02) control_pane_g4_ParamLimits

0x7666,	// (0x00026d02) control_pane_g4

0x7815,	// (0x00026eb1) bg_popup_sub_pane_cp10_ParamLimits

0xbdb3,	// (0x0002b44f) list_choice_list_pane_ParamLimits

0xbdc2,	// (0x0002b45e) scroll_pane_cp23

0x0d43,	// (0x000203df) bg_popup_preview_window_pane_cp02_ParamLimits

0xc433,	// (0x0002bacf) list_preview_fixed_pane_ParamLimits

0xc449,	// (0x0002bae5) list_preview_fixed_pane_cp_ParamLimits

0xc449,	// (0x0002bae5) list_preview_fixed_pane_cp

0xc455,	// (0x0002baf1) popup_preview_fixed_window_g1_ParamLimits

0xc455,	// (0x0002baf1) popup_preview_fixed_window_g1

0xc461,	// (0x0002bafd) popup_preview_fixed_window_g2_ParamLimits

0xc461,	// (0x0002bafd) popup_preview_fixed_window_g2

0x0002,

0xfb67,	// (0x0002f203) popup_preview_fixed_window_g_ParamLimits

0xfb67,	// (0x0002f203) popup_preview_fixed_window_g

0x6c5f,	// (0x000262fb) aid_navi_side_left_pane_ParamLimits

0x6c74,	// (0x00026310) aid_navi_side_right_pane_ParamLimits

0x6c8c,	// (0x00026328) navi_icon_pane_stacon_ParamLimits

0x6ca0,	// (0x0002633c) navi_navi_pane_stacon_ParamLimits

0x6c8c,	// (0x00026328) navi_text_pane_stacon_ParamLimits

0x0b7a,	// (0x00020216) main_text_info_pane

0xc641,	// (0x0002bcdd) listscroll_text_info_pane

0xc649,	// (0x0002bce5) list_text_info_pane_ParamLimits

0xc649,	// (0x0002bce5) list_text_info_pane

0xc658,	// (0x0002bcf4) scroll_pane_cp24_ParamLimits

0xc658,	// (0x0002bcf4) scroll_pane_cp24

0xc676,	// (0x0002bd12) list_text_info_pane_t1_ParamLimits

0xc676,	// (0x0002bd12) list_text_info_pane_t1

0x785f,	// (0x00026efb) popup_fast_swap2_window_ParamLimits

0x785f,	// (0x00026efb) popup_fast_swap2_window

0xc69b,	// (0x0002bd37) aid_size_cell_fast2

0x0b7a,	// (0x00020216) bg_popup_window_pane_cp17

0x9b99,	// (0x00029235) heading_pane_cp2

0x0f49,	// (0x000205e5) listscroll_fast2_pane

0xc6a5,	// (0x0002bd41) grid_fast2_pane

0xc6af,	// (0x0002bd4b) listscroll_fast2_pane_g1

0xc6b9,	// (0x0002bd55) listscroll_fast2_pane_g2

0x0001,

0xfbe3,	// (0x0002f27f) listscroll_fast2_pane_g

0x2e0c,	// (0x000224a8) scroll_pane_cp26

0xc6c3,	// (0x0002bd5f) cell_fast2_pane_ParamLimits

0xc6c3,	// (0x0002bd5f) cell_fast2_pane

0xc6da,	// (0x0002bd76) cell_fast2_pane_g1

0xc6e3,	// (0x0002bd7f) cell_fast2_pane_g2

0xc6ec,	// (0x0002bd88) cell_fast2_pane_g3

0x0002,

0xfbe8,	// (0x0002f284) cell_fast2_pane_g

0x0f8b,	// (0x00020627) grid_highlight_pane_cp9

0x0fa0,	// (0x0002063c) main_eswt_pane_ParamLimits

0x0fa0,	// (0x0002063c) main_eswt_pane

0xc66d,	// (0x0002bd09) list_single_text_info_pane

0xc6f4,	// (0x0002bd90) eswt_ctrl_button_pane

0xc6f4,	// (0x0002bd90) eswt_ctrl_canvas_pane

0xc6fc,	// (0x0002bd98) eswt_ctrl_combo_pane

0xc6f4,	// (0x0002bd90) eswt_ctrl_default_pane

0xc6f4,	// (0x0002bd90) eswt_ctrl_label_pane

0xc704,	// (0x0002bda0) eswt_ctrl_wait_pane

0xc70c,	// (0x0002bda8) eswt_shell_pane

0x0b7a,	// (0x00020216) listscroll_eswt_app_pane

0xc72c,	// (0x0002bdc8) popup_eswt_tasktip_window_ParamLimits

0xc72c,	// (0x0002bdc8) popup_eswt_tasktip_window

0x8471,	// (0x00027b0d) bg_popup_window_pane_cp18

0xc73d,	// (0x0002bdd9) eswt_control_pane_g1_ParamLimits

0xc73d,	// (0x0002bdd9) eswt_control_pane_g1

0xc74a,	// (0x0002bde6) eswt_control_pane_g2_ParamLimits

0xc74a,	// (0x0002bde6) eswt_control_pane_g2

0xc757,	// (0x0002bdf3) eswt_control_pane_g3_ParamLimits

0xc757,	// (0x0002bdf3) eswt_control_pane_g3

0xc764,	// (0x0002be00) eswt_control_pane_g4_ParamLimits

0xc764,	// (0x0002be00) eswt_control_pane_g4

0x0003,

0xfbef,	// (0x0002f28b) eswt_control_pane_g_ParamLimits

0xfbef,	// (0x0002f28b) eswt_control_pane_g

0x2c43,	// (0x000222df) bg_button_pane_ParamLimits

0x2c43,	// (0x000222df) bg_button_pane

0x0fa0,	// (0x0002063c) common_borders_pane_copy2_ParamLimits

0x0fa0,	// (0x0002063c) common_borders_pane_copy2

0xc771,	// (0x0002be0d) control_button_pane_g1_ParamLimits

0xc771,	// (0x0002be0d) control_button_pane_g1

0xc77d,	// (0x0002be19) control_button_pane_g2_ParamLimits

0xc77d,	// (0x0002be19) control_button_pane_g2

0xc789,	// (0x0002be25) control_button_pane_g3_ParamLimits

0xc789,	// (0x0002be25) control_button_pane_g3

0x0002,

0xfbf8,	// (0x0002f294) control_button_pane_g_ParamLimits

0xfbf8,	// (0x0002f294) control_button_pane_g

0xc79d,	// (0x0002be39) control_button_pane_t1

0xc7ab,	// (0x0002be47) control_button_pane_t2

0x0001,

0xfbff,	// (0x0002f29b) control_button_pane_t

0x8386,	// (0x00027a22) bg_button_pane_g1

0x838e,	// (0x00027a2a) bg_button_pane_g2

0x8396,	// (0x00027a32) bg_button_pane_g3

0x839e,	// (0x00027a3a) bg_button_pane_g4

0x83a6,	// (0x00027a42) bg_button_pane_g5

0x83ae,	// (0x00027a4a) bg_button_pane_g6

0x83b6,	// (0x00027a52) bg_button_pane_g7

0x83be,	// (0x00027a5a) bg_button_pane_g8

0x83c6,	// (0x00027a62) bg_button_pane_g9

0x0008,

0xf861,	// (0x0002eefd) bg_button_pane_g

0xbd6e,	// (0x0002b40a) common_borders_pane_ParamLimits

0xbd6e,	// (0x0002b40a) common_borders_pane

0xc73d,	// (0x0002bdd9) eswt_control_pane_g1_copy1_ParamLimits

0xc73d,	// (0x0002bdd9) eswt_control_pane_g1_copy1

0xc74a,	// (0x0002bde6) eswt_control_pane_g2_copy1_ParamLimits

0xc74a,	// (0x0002bde6) eswt_control_pane_g2_copy1

0xc757,	// (0x0002bdf3) eswt_control_pane_g3_copy1_ParamLimits

0xc757,	// (0x0002bdf3) eswt_control_pane_g3_copy1

0xc764,	// (0x0002be00) eswt_control_pane_g4_copy1_ParamLimits

0xc764,	// (0x0002be00) eswt_control_pane_g4_copy1

0xbda9,	// (0x0002b445) bg_eswt_ctrl_canvas_pane_g1

0xbd6e,	// (0x0002b40a) common_borders_pane_cp2_ParamLimits

0xbd6e,	// (0x0002b40a) common_borders_pane_cp2

0xbd6e,	// (0x0002b40a) common_borders_pane_cp3_ParamLimits

0xbd6e,	// (0x0002b40a) common_borders_pane_cp3

0xc7b9,	// (0x0002be55) separator_horizontal_pane

0xc7c1,	// (0x0002be5d) separator_vertical_pane

0xc73d,	// (0x0002bdd9) eswt_control_pane_g1_copy2_ParamLimits

0xc73d,	// (0x0002bdd9) eswt_control_pane_g1_copy2

0xc74a,	// (0x0002bde6) eswt_control_pane_g2_copy2_ParamLimits

0xc74a,	// (0x0002bde6) eswt_control_pane_g2_copy2

0xc757,	// (0x0002bdf3) eswt_control_pane_g3_copy2_ParamLimits

0xc757,	// (0x0002bdf3) eswt_control_pane_g3_copy2

0xc764,	// (0x0002be00) eswt_control_pane_g4_copy2_ParamLimits

0xc764,	// (0x0002be00) eswt_control_pane_g4_copy2

0x0b7a,	// (0x00020216) common_borders_pane_cp4

0xc7ca,	// (0x0002be66) separator_horizontal_pane_g1

0xc7d3,	// (0x0002be6f) separator_horizontal_pane_g2

0xc7dc,	// (0x0002be78) separator_horizontal_pane_g3

0x0002,

0xfc04,	// (0x0002f2a0) separator_horizontal_pane_g

0xc73d,	// (0x0002bdd9) eswt_control_pane_g1_copy3_ParamLimits

0xc73d,	// (0x0002bdd9) eswt_control_pane_g1_copy3

0xc74a,	// (0x0002bde6) eswt_control_pane_g2_copy3_ParamLimits

0xc74a,	// (0x0002bde6) eswt_control_pane_g2_copy3

0xc757,	// (0x0002bdf3) eswt_control_pane_g3_copy3_ParamLimits

0xc757,	// (0x0002bdf3) eswt_control_pane_g3_copy3

0xc764,	// (0x0002be00) eswt_control_pane_g4_copy3_ParamLimits

0xc764,	// (0x0002be00) eswt_control_pane_g4_copy3

0x0b7a,	// (0x00020216) common_borders_pane_cp5

0xc7e5,	// (0x0002be81) separator_vertical_pane_g1

0xc7ee,	// (0x0002be8a) separator_vertical_pane_g2

0xc7f7,	// (0x0002be93) separator_vertical_pane_g3

0x0002,

0xfc0b,	// (0x0002f2a7) separator_vertical_pane_g

0xc73d,	// (0x0002bdd9) eswt_control_pane_g1_copy4_ParamLimits

0xc73d,	// (0x0002bdd9) eswt_control_pane_g1_copy4

0xc74a,	// (0x0002bde6) eswt_control_pane_g2_copy4_ParamLimits

0xc74a,	// (0x0002bde6) eswt_control_pane_g2_copy4

0xc757,	// (0x0002bdf3) eswt_control_pane_g3_copy4_ParamLimits

0xc757,	// (0x0002bdf3) eswt_control_pane_g3_copy4

0xc764,	// (0x0002be00) eswt_control_pane_g4_copy4_ParamLimits

0xc764,	// (0x0002be00) eswt_control_pane_g4_copy4

0xc800,	// (0x0002be9c) eswt_ctrl_combo_button_pane

0xc808,	// (0x0002bea4) eswt_ctrl_input_pane

0xc810,	// (0x0002beac) popup_choice_list_window_cp70

0xc818,	// (0x0002beb4) eswt_ctrl_input_pane_t1

0x0b7a,	// (0x00020216) input_focus_pane_cp70

0xbd6e,	// (0x0002b40a) bg_button_pane_cp70_ParamLimits

0xbd6e,	// (0x0002b40a) bg_button_pane_cp70

0xc826,	// (0x0002bec2) eswt_ctrl_combo_button_pane_g1

0xc82e,	// (0x0002beca) wait_bar_pane_cp70

0x8471,	// (0x00027b0d) bg_popup_window_pane_cp70_ParamLimits

0x8471,	// (0x00027b0d) bg_popup_window_pane_cp70

0xc836,	// (0x0002bed2) popup_eswt_tasktip_window_t1

0xc84c,	// (0x0002bee8) wait_bar_pane_cp71_ParamLimits

0xc84c,	// (0x0002bee8) wait_bar_pane_cp71

0xc858,	// (0x0002bef4) grid_eswt_app_pane

0x3192,	// (0x0002282e) scroll_pane_cp70

0xc861,	// (0x0002befd) cell_eswt_app_pane_ParamLimits

0xc861,	// (0x0002befd) cell_eswt_app_pane

0xc893,	// (0x0002bf2f) cell_eswt_app_pane_g1_ParamLimits

0xc893,	// (0x0002bf2f) cell_eswt_app_pane_g1

0xc8c2,	// (0x0002bf5e) cell_eswt_app_pane_g2_ParamLimits

0xc8c2,	// (0x0002bf5e) cell_eswt_app_pane_g2

0x0001,

0xfc12,	// (0x0002f2ae) cell_eswt_app_pane_g_ParamLimits

0xfc12,	// (0x0002f2ae) cell_eswt_app_pane_g

0xc8eb,	// (0x0002bf87) cell_eswt_app_pane_t1_ParamLimits

0xc8eb,	// (0x0002bf87) cell_eswt_app_pane_t1

0xc91d,	// (0x0002bfb9) grid_highlight_pane_cp70_ParamLimits

0xc91d,	// (0x0002bfb9) grid_highlight_pane_cp70

0x366b,	// (0x00022d07) set_content_pane_g1

0x75ee,	// (0x00026c8a) status_small_volume_pane

0x8e08,	// (0x000284a4) status_small_volume_pane_g1

0x8e10,	// (0x000284ac) volume_small2_pane

0x8e19,	// (0x000284b5) volume_small2_pane_g1

0x8e22,	// (0x000284be) volume_small2_pane_g2

0x8e2b,	// (0x000284c7) volume_small2_pane_g3

0x8e34,	// (0x000284d0) volume_small2_pane_g4

0x8e3d,	// (0x000284d9) volume_small2_pane_g5

0x8e46,	// (0x000284e2) volume_small2_pane_g6

0x8e4f,	// (0x000284eb) volume_small2_pane_g7

0x8e58,	// (0x000284f4) volume_small2_pane_g8

0x8e61,	// (0x000284fd) volume_small2_pane_g9

0x8e6a,	// (0x00028506) volume_small2_pane_g10

0x0009,

0xfc17,	// (0x0002f2b3) volume_small2_pane_g

0xc178,	// (0x0002b814) fep_vkb_top_text_pane_g1_ParamLimits

0xc193,	// (0x0002b82f) fep_vkb_top_text_pane_t1_ParamLimits

0xc46d,	// (0x0002bb09) popup_preview_fixed_window_g3_ParamLimits

0xc46d,	// (0x0002bb09) popup_preview_fixed_window_g3

0x7d70,	// (0x0002740c) popup_toolbar_trans_pane

0xab1d,	// (0x0002a1b9) aid_height_set_list_ParamLimits

0xab2e,	// (0x0002a1ca) aid_size_parent_ParamLimits

0x7815,	// (0x00026eb1) list_highlight_pane_cp2_ParamLimits

0x366b,	// (0x00022d07) set_content_pane_g1_ParamLimits

0xad83,	// (0x0002a41f) list_single_image_pane_ParamLimits

0xad83,	// (0x0002a41f) list_single_image_pane

0xc929,	// (0x0002bfc5) aid_size_cell_image_ParamLimits

0xc929,	// (0x0002bfc5) aid_size_cell_image

0xc936,	// (0x0002bfd2) grid_single_image_pane_ParamLimits

0xc936,	// (0x0002bfd2) grid_single_image_pane

0x2c6e,	// (0x0002230a) list_single_image_pane_g1_ParamLimits

0x2c6e,	// (0x0002230a) list_single_image_pane_g1

0x2c7a,	// (0x00022316) list_single_image_pane_g2_ParamLimits

0x2c7a,	// (0x00022316) list_single_image_pane_g2

0x0001,

0xfc2c,	// (0x0002f2c8) list_single_image_pane_g_ParamLimits

0xfc2c,	// (0x0002f2c8) list_single_image_pane_g

0xc944,	// (0x0002bfe0) list_single_image_pane_t1_ParamLimits

0xc944,	// (0x0002bfe0) list_single_image_pane_t1

0xc95a,	// (0x0002bff6) cell_image_list_pane_ParamLimits

0xc95a,	// (0x0002bff6) cell_image_list_pane

0xc970,	// (0x0002c00c) cell_image_list_pane_g1

0xc979,	// (0x0002c015) cell_image_list_pane_g2

0x0001,

0xfc31,	// (0x0002f2cd) cell_image_list_pane_g

0xc982,	// (0x0002c01e) aid_size_cell_tb_trans_pane

0x2c43,	// (0x000222df) bg_tb_trans_pane

0xc994,	// (0x0002c030) grid_tb_trans_pane

0x8386,	// (0x00027a22) bg_tb_trans_pane_g1

0x838e,	// (0x00027a2a) bg_tb_trans_pane_g2

0x8396,	// (0x00027a32) bg_tb_trans_pane_g3

0x839e,	// (0x00027a3a) bg_tb_trans_pane_g4

0x83a6,	// (0x00027a42) bg_tb_trans_pane_g5

0x83be,	// (0x00027a5a) bg_tb_trans_pane_g6

0x83c6,	// (0x00027a62) bg_tb_trans_pane_g7

0x83ae,	// (0x00027a4a) bg_tb_trans_pane_g8

0x83b6,	// (0x00027a52) bg_tb_trans_pane_g9

0x0008,

0xfc36,	// (0x0002f2d2) bg_tb_trans_pane_g

0xc9a8,	// (0x0002c044) cell_toolbar_trans_pane_ParamLimits

0xc9a8,	// (0x0002c044) cell_toolbar_trans_pane

0xbda9,	// (0x0002b445) cell_toolbar_trans_pane_g1

0xb9cd,	// (0x0002b069) list_form2_midp_pane_t1

0xb9db,	// (0x0002b077) list_form2_midp_pane_t2

0x0001,

0xfadf,	// (0x0002f17b) list_form2_midp_pane_t

0xb9e9,	// (0x0002b085) scroll_pane_cp51_ParamLimits

0xbbb0,	// (0x0002b24c) form2_midp_wait_pane_g1

0xbbb9,	// (0x0002b255) form2_midp_wait_pane_g2

0xbbc2,	// (0x0002b25e) form2_midp_wait_pane_g3

0x0002,

0xfaf4,	// (0x0002f190) form2_midp_wait_pane_g

0x0bf6,	// (0x00020292) list_highlight_pane_cp21_ParamLimits

0xbc06,	// (0x0002b2a2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbc15,	// (0x0002b2b1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xad3c,	// (0x0002a3d8) list_single_2graphic_im_pane_ParamLimits

0xad3c,	// (0x0002a3d8) list_single_2graphic_im_pane

0xc9ce,	// (0x0002c06a) list_single_2graphic_im_pane_g1_ParamLimits

0xc9ce,	// (0x0002c06a) list_single_2graphic_im_pane_g1

0xc9df,	// (0x0002c07b) list_single_2graphic_im_pane_g2_ParamLimits

0xc9df,	// (0x0002c07b) list_single_2graphic_im_pane_g2

0xc9eb,	// (0x0002c087) list_single_2graphic_im_pane_g3_ParamLimits

0xc9eb,	// (0x0002c087) list_single_2graphic_im_pane_g3

0x0003,

0xfc49,	// (0x0002f2e5) list_single_2graphic_im_pane_g_ParamLimits

0xfc49,	// (0x0002f2e5) list_single_2graphic_im_pane_g

0xca0b,	// (0x0002c0a7) list_single_2graphic_im_pane_t1_ParamLimits

0xca0b,	// (0x0002c0a7) list_single_2graphic_im_pane_t1

0xc479,	// (0x0002bb15) list_single_graphic_2heading_pane_fp_ParamLimits

0xc479,	// (0x0002bb15) list_single_graphic_2heading_pane_fp

0x5fc8,	// (0x00025664) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5fc8,	// (0x00025664) list_single_graphic_2heading_pane_fp_g1

0xc492,	// (0x0002bb2e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc492,	// (0x0002bb2e) list_single_graphic_2heading_pane_fp_g2

0x5f91,	// (0x0002562d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5f91,	// (0x0002562d) list_single_graphic_2heading_pane_fp_g3

0x5f9d,	// (0x00025639) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5f9d,	// (0x00025639) list_single_graphic_2heading_pane_fp_g4

0xc49e,	// (0x0002bb3a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc49e,	// (0x0002bb3a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0002f213) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0002f213) list_single_graphic_2heading_pane_fp_g

0x6195,	// (0x00025831) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6195,	// (0x00025831) list_single_graphic_2heading_pane_fp_t1

0x6000,	// (0x0002569c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6000,	// (0x0002569c) list_single_graphic_2heading_pane_fp_t2

0x61ab,	// (0x00025847) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x61ab,	// (0x00025847) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc52,	// (0x0002f2ee) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc52,	// (0x0002f2ee) list_single_graphic_2heading_pane_fp_t

0xbe3a,	// (0x0002b4d6) fep_hwr_write_pane_g5_ParamLimits

0xbe3a,	// (0x0002b4d6) fep_hwr_write_pane_g5

0xbe46,	// (0x0002b4e2) fep_hwr_write_pane_g6_ParamLimits

0xbe46,	// (0x0002b4e2) fep_hwr_write_pane_g6

0xc70c,	// (0x0002bda8) eswt_shell_pane_ParamLimits

0x8471,	// (0x00027b0d) bg_popup_window_pane_cp18_ParamLimits

0xaa74,	// (0x0002a110) heading_pane_cp70

0xc836,	// (0x0002bed2) popup_eswt_tasktip_window_t1_ParamLimits

0x7ea3,	// (0x0002753f) aid_touch_tab_arrow_left

0x7eb2,	// (0x0002754e) aid_touch_tab_arrow_right

0x0b98,	// (0x00020234) title_pane_g3_ParamLimits

0x0b98,	// (0x00020234) title_pane_g3

0x2b9d,	// (0x00022239) set_value_pane_g1

0x7d70,	// (0x0002740c) popup_toolbar_trans_pane_ParamLimits

0xc982,	// (0x0002c01e) aid_size_cell_tb_trans_pane_ParamLimits

0x2c43,	// (0x000222df) bg_tb_trans_pane_ParamLimits

0xc994,	// (0x0002c030) grid_tb_trans_pane_ParamLimits

0x0d43,	// (0x000203df) cont_note_pane_ParamLimits

0x0d43,	// (0x000203df) cont_note_pane

0x0fa0,	// (0x0002063c) cont_snote2_single_text_pane_ParamLimits

0x0fa0,	// (0x0002063c) cont_snote2_single_text_pane

0x0fa0,	// (0x0002063c) cont_snote2_single_graphic_pane_ParamLimits

0x0fa0,	// (0x0002063c) cont_snote2_single_graphic_pane

0x9db5,	// (0x00029451) cont_note_wait_pane_ParamLimits

0x9db5,	// (0x00029451) cont_note_wait_pane

0x9db5,	// (0x00029451) cont_note_image_pane_ParamLimits

0x9db5,	// (0x00029451) cont_note_image_pane

0xca3c,	// (0x0002c0d8) popup_note2_window_g1_ParamLimits

0xca3c,	// (0x0002c0d8) popup_note2_window_g1

0xca6d,	// (0x0002c109) popup_note2_window_t1_ParamLimits

0xca6d,	// (0x0002c109) popup_note2_window_t1

0xcab2,	// (0x0002c14e) popup_note2_window_t2_ParamLimits

0xcab2,	// (0x0002c14e) popup_note2_window_t2

0xcaf7,	// (0x0002c193) popup_note2_window_t3_ParamLimits

0xcaf7,	// (0x0002c193) popup_note2_window_t3

0xcb3c,	// (0x0002c1d8) popup_note2_window_t4_ParamLimits

0xcb3c,	// (0x0002c1d8) popup_note2_window_t4

0x0dc7,	// (0x00020463) popup_note2_window_t5_ParamLimits

0x0dc7,	// (0x00020463) popup_note2_window_t5

0x0004,

0xfc5e,	// (0x0002f2fa) popup_note2_window_t_ParamLimits

0xfc5e,	// (0x0002f2fa) popup_note2_window_t

0xcb6b,	// (0x0002c207) popup_note2_image_window_g1_ParamLimits

0xcb6b,	// (0x0002c207) popup_note2_image_window_g1

0xcb77,	// (0x0002c213) popup_note2_image_window_g2_ParamLimits

0xcb77,	// (0x0002c213) popup_note2_image_window_g2

0x0001,

0xfc69,	// (0x0002f305) popup_note2_image_window_g_ParamLimits

0xfc69,	// (0x0002f305) popup_note2_image_window_g

0xcb89,	// (0x0002c225) popup_note2_image_window_t1_ParamLimits

0xcb89,	// (0x0002c225) popup_note2_image_window_t1

0xcba1,	// (0x0002c23d) popup_note2_image_window_t2_ParamLimits

0xcba1,	// (0x0002c23d) popup_note2_image_window_t2

0xcbb9,	// (0x0002c255) popup_note2_image_window_t3_ParamLimits

0xcbb9,	// (0x0002c255) popup_note2_image_window_t3

0x0002,

0xfc6e,	// (0x0002f30a) popup_note2_image_window_t_ParamLimits

0xfc6e,	// (0x0002f30a) popup_note2_image_window_t

0x9dc3,	// (0x0002945f) popup_note2_wait_window_g1_ParamLimits

0x9dc3,	// (0x0002945f) popup_note2_wait_window_g1

0xcbd5,	// (0x0002c271) popup_note2_wait_window_g2_ParamLimits

0xcbd5,	// (0x0002c271) popup_note2_wait_window_g2

0x9ddb,	// (0x00029477) popup_note2_wait_window_g3_ParamLimits

0x9ddb,	// (0x00029477) popup_note2_wait_window_g3

0x0002,

0xfc75,	// (0x0002f311) popup_note2_wait_window_g_ParamLimits

0xfc75,	// (0x0002f311) popup_note2_wait_window_g

0xcbe1,	// (0x0002c27d) popup_note2_wait_window_t1_ParamLimits

0xcbe1,	// (0x0002c27d) popup_note2_wait_window_t1

0xcbff,	// (0x0002c29b) popup_note2_wait_window_t2_ParamLimits

0xcbff,	// (0x0002c29b) popup_note2_wait_window_t2

0xcc1d,	// (0x0002c2b9) popup_note2_wait_window_t3_ParamLimits

0xcc1d,	// (0x0002c2b9) popup_note2_wait_window_t3

0xcc2f,	// (0x0002c2cb) popup_note2_wait_window_t4_ParamLimits

0xcc2f,	// (0x0002c2cb) popup_note2_wait_window_t4

0x0003,

0xfc7c,	// (0x0002f318) popup_note2_wait_window_t_ParamLimits

0xfc7c,	// (0x0002f318) popup_note2_wait_window_t

0xcc41,	// (0x0002c2dd) wait_bar2_pane_ParamLimits

0xcc41,	// (0x0002c2dd) wait_bar2_pane

0xcc59,	// (0x0002c2f5) popup_snote2_single_text_window_g1_ParamLimits

0xcc59,	// (0x0002c2f5) popup_snote2_single_text_window_g1

0xcc81,	// (0x0002c31d) popup_snote2_single_text_window_t1_ParamLimits

0xcc81,	// (0x0002c31d) popup_snote2_single_text_window_t1

0xcccd,	// (0x0002c369) popup_snote2_single_text_window_t2_ParamLimits

0xcccd,	// (0x0002c369) popup_snote2_single_text_window_t2

0xcd19,	// (0x0002c3b5) popup_snote2_single_text_window_t3_ParamLimits

0xcd19,	// (0x0002c3b5) popup_snote2_single_text_window_t3

0xcd5a,	// (0x0002c3f6) popup_snote2_single_text_window_t4_ParamLimits

0xcd5a,	// (0x0002c3f6) popup_snote2_single_text_window_t4

0xcd90,	// (0x0002c42c) popup_snote2_single_text_window_t5_ParamLimits

0xcd90,	// (0x0002c42c) popup_snote2_single_text_window_t5

0x0004,

0xfc85,	// (0x0002f321) popup_snote2_single_text_window_t_ParamLimits

0xfc85,	// (0x0002f321) popup_snote2_single_text_window_t

0xcdbb,	// (0x0002c457) popup_snote2_single_graphic_window_g1_ParamLimits

0xcdbb,	// (0x0002c457) popup_snote2_single_graphic_window_g1

0xcde3,	// (0x0002c47f) popup_snote2_single_graphic_window_g2_ParamLimits

0xcde3,	// (0x0002c47f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc90,	// (0x0002f32c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc90,	// (0x0002f32c) popup_snote2_single_graphic_window_g

0xce0b,	// (0x0002c4a7) popup_snote2_single_graphic_window_t1_ParamLimits

0xce0b,	// (0x0002c4a7) popup_snote2_single_graphic_window_t1

0xce57,	// (0x0002c4f3) popup_snote2_single_graphic_window_t2_ParamLimits

0xce57,	// (0x0002c4f3) popup_snote2_single_graphic_window_t2

0xcd19,	// (0x0002c3b5) popup_snote2_single_graphic_window_t3_ParamLimits

0xcd19,	// (0x0002c3b5) popup_snote2_single_graphic_window_t3

0xcd5a,	// (0x0002c3f6) popup_snote2_single_graphic_window_t4_ParamLimits

0xcd5a,	// (0x0002c3f6) popup_snote2_single_graphic_window_t4

0xcd90,	// (0x0002c42c) popup_snote2_single_graphic_window_t5_ParamLimits

0xcd90,	// (0x0002c42c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc95,	// (0x0002f331) popup_snote2_single_graphic_window_t_ParamLimits

0xfc95,	// (0x0002f331) popup_snote2_single_graphic_window_t

0xb899,	// (0x0002af35) clock_nsta_pane_cp2_t1

0xb899,	// (0x0002af35) clock_nsta_pane_cp2_t2

0x0001,

0xfab5,	// (0x0002f151) clock_nsta_pane_cp2_t

0x578e,	// (0x00024e2a) form_field_data_wide_pane_g1_ParamLimits

0x2c6e,	// (0x0002230a) form_field_data_wide_pane_g2_ParamLimits

0x2c6e,	// (0x0002230a) form_field_data_wide_pane_g2

0x2c7a,	// (0x00022316) form_field_data_wide_pane_g3_ParamLimits

0x2c7a,	// (0x00022316) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0002ed12) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0002ed12) form_field_data_wide_pane_g

0xb778,	// (0x0002ae14) grid_touch_3_pane_ParamLimits

0xb778,	// (0x0002ae14) grid_touch_3_pane

0xcea3,	// (0x0002c53f) cell_touch_3_pane_ParamLimits

0xcea3,	// (0x0002c53f) cell_touch_3_pane

0xbda9,	// (0x0002b445) cell_touch_3_pane_g1

0xbda9,	// (0x0002b445) cell_touch_3_pane_g2

0x0001,

0xfb3a,	// (0x0002f1d6) cell_touch_3_pane_g

0x0df9,	// (0x00020495) cont_query_data_pane

0x0e01,	// (0x0002049d) cont_query_data_pane_cp1

0xced6,	// (0x0002c572) button_value_adjust_pane_cp7

0xcede,	// (0x0002c57a) query_popup_pane_cp3

0x3363,	// (0x000229ff) bg_popup_sub_pane_cp22_ParamLimits

0x6f16,	// (0x000265b2) navi_navi_volume_pane_cp2

0x6f31,	// (0x000265cd) popup_side_volume_key_window_g2

0x6f40,	// (0x000265dc) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0002eda8) popup_side_volume_key_window_g

0x6f5d,	// (0x000265f9) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0002edaf) popup_side_volume_key_window_t

0x356e,	// (0x00022c0a) popup_side_volume_key_window_ParamLimits

0x53c3,	// (0x00024a5f) list_double_graphic_pane_g4_ParamLimits

0x53c3,	// (0x00024a5f) list_double_graphic_pane_g4

0xad6b,	// (0x0002a407) list_single_2heading_msg_pane_ParamLimits

0xad6b,	// (0x0002a407) list_single_2heading_msg_pane

0x61cb,	// (0x00025867) list_single_2heading_msg_pane_g1_ParamLimits

0x61cb,	// (0x00025867) list_single_2heading_msg_pane_g1

0x5242,	// (0x000248de) list_single_2heading_msg_pane_g2_ParamLimits

0x5242,	// (0x000248de) list_single_2heading_msg_pane_g2

0x61d7,	// (0x00025873) list_single_2heading_msg_pane_g3_ParamLimits

0x61d7,	// (0x00025873) list_single_2heading_msg_pane_g3

0x61e3,	// (0x0002587f) list_single_2heading_msg_pane_g4_ParamLimits

0x61e3,	// (0x0002587f) list_single_2heading_msg_pane_g4

0x0003,

0xfca0,	// (0x0002f33c) list_single_2heading_msg_pane_g_ParamLimits

0xfca0,	// (0x0002f33c) list_single_2heading_msg_pane_g

0x61fb,	// (0x00025897) list_single_2heading_msg_pane_t1_ParamLimits

0x61fb,	// (0x00025897) list_single_2heading_msg_pane_t1

0x6223,	// (0x000258bf) list_single_2heading_msg_pane_t2_ParamLimits

0x6223,	// (0x000258bf) list_single_2heading_msg_pane_t2

0x6257,	// (0x000258f3) list_single_2heading_msg_pane_t3_ParamLimits

0x6257,	// (0x000258f3) list_single_2heading_msg_pane_t3

0x6290,	// (0x0002592c) list_single_2heading_msg_pane_t4_ParamLimits

0x6290,	// (0x0002592c) list_single_2heading_msg_pane_t4

0x0003,

0xfca9,	// (0x0002f345) list_single_2heading_msg_pane_t_ParamLimits

0xfca9,	// (0x0002f345) list_single_2heading_msg_pane_t

0x0ba4,	// (0x00020240) title_pane_g4_ParamLimits

0x0ba4,	// (0x00020240) title_pane_g4

0x6baf,	// (0x0002624b) title_pane_stacon_g3_ParamLimits

0x6baf,	// (0x0002624b) title_pane_stacon_g3

0xc9ff,	// (0x0002c09b) list_single_2graphic_im_pane_g4_ParamLimits

0xc9ff,	// (0x0002c09b) list_single_2graphic_im_pane_g4

0xa825,	// (0x00029ec1) popup_side_volume_key_window_cp

0xb093,	// (0x0002a72f) main_idle_act2_pane_t1

0x83ce,	// (0x00027a6a) toolbar_button_pane_g10

0x6ac0,	// (0x0002615c) popup_toolbar_window_cp1

0xb88a,	// (0x0002af26) clock_nsta_pane_cp_t1

0xb88a,	// (0x0002af26) clock_nsta_pane_cp_t2

0x0001,

0xfab0,	// (0x0002f14c) clock_nsta_pane_cp_t

0x6f16,	// (0x000265b2) navi_navi_volume_pane_cp2_ParamLimits

0x6f25,	// (0x000265c1) popup_side_volume_key_window_g1_ParamLimits

0x6f31,	// (0x000265cd) popup_side_volume_key_window_g2_ParamLimits

0x6f40,	// (0x000265dc) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0002eda8) popup_side_volume_key_window_g_ParamLimits

0x8afd,	// (0x00028199) fep_hwr_aid_pane

0x0b4a,	// (0x000201e6) bg_fep_hwr_top_pane_g4_ParamLimits

0xbe0a,	// (0x0002b4a6) fep_hwr_top_pane_g1_ParamLimits

0xbe1c,	// (0x0002b4b8) fep_hwr_top_pane_g2_ParamLimits

0x8bb8,	// (0x00028254) fep_hwr_top_pane_g3_ParamLimits

0xfb05,	// (0x0002f1a1) fep_hwr_top_pane_g_ParamLimits

0x8bcd,	// (0x00028269) fep_hwr_top_text_pane_ParamLimits

0xa5da,	// (0x00029c76) aid_touch_tab_arrow_arrow_2

0xa5e3,	// (0x00029c7f) aid_touch_tab_arrow_left_2

0x8b11,	// (0x000281ad) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8b48,	// (0x000281e4) fep_hwr_prediction_pane

0xbf72,	// (0x0002b60e) fep_vkb_prediction_pane

0xc078,	// (0x0002b714) fep_vkb_side_pane_g3_ParamLimits

0xc078,	// (0x0002b714) fep_vkb_side_pane_g3

0xc024,	// (0x0002b6c0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc4f2,	// (0x0002bb8e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc4ff,	// (0x0002bb9b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaf,	// (0x0002f24b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xcf05,	// (0x0002c5a1) fep_hwr_prediction_pane_g1

0x8e73,	// (0x0002850f) fep_hwr_prediction_pane_g2

0x8e7b,	// (0x00028517) fep_hwr_prediction_pane_g3

0x8e83,	// (0x0002851f) fep_hwr_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0002f34e) fep_hwr_prediction_pane_g

0xcf05,	// (0x0002c5a1) fep_vkb_prediction_pane_g1

0xcf0f,	// (0x0002c5ab) fep_vkb_prediction_pane_g2

0xcf17,	// (0x0002c5b3) fep_vkb_prediction_pane_g3

0xcf1f,	// (0x0002c5bb) fep_vkb_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0002f357) fep_vkb_prediction_pane_g

0x898b,	// (0x00028027) slider_set_pane_g3

0x899f,	// (0x0002803b) slider_set_pane_g4

0x89b7,	// (0x00028053) slider_set_pane_g5

0x898b,	// (0x00028027) slider_set_pane_g6

0x89cd,	// (0x00028069) slider_set_pane_g7

0xacb3,	// (0x0002a34f) slider_form_pane_g3

0xacbc,	// (0x0002a358) slider_form_pane_g4

0xacc4,	// (0x0002a360) slider_form_pane_g5

0xacb3,	// (0x0002a34f) slider_form_pane_g6

0xaccc,	// (0x0002a368) slider_form_pane_g7

0xb34a,	// (0x0002a9e6) slider_set_pane_vc_g3

0xb353,	// (0x0002a9ef) slider_set_pane_vc_g4

0xb35c,	// (0x0002a9f8) slider_set_pane_vc_g5

0xb34a,	// (0x0002a9e6) slider_set_pane_vc_g6

0xb365,	// (0x0002aa01) slider_set_pane_vc_g7

0xb53d,	// (0x0002abd9) slider_form_pane_vc_g1

0xb546,	// (0x0002abe2) slider_form_pane_vc_g2

0xb54f,	// (0x0002abeb) slider_form_pane_vc_g3

0xb53d,	// (0x0002abd9) slider_form_pane_vc_g4

0xb558,	// (0x0002abf4) slider_form_pane_vc_g5

0x0004,

0xfa82,	// (0x0002f11e) slider_form_pane_vc_g

0x0b7a,	// (0x00020216) main_idle_act3_pane

0xcf27,	// (0x0002c5c3) ai3_links_pane

0xcf30,	// (0x0002c5cc) popup_ai3_data_window_ParamLimits

0xcf30,	// (0x0002c5cc) popup_ai3_data_window

0x0b7a,	// (0x00020216) grid_ai3_links_pane

0xcf4e,	// (0x0002c5ea) cell_ai3_links_pane_ParamLimits

0xcf4e,	// (0x0002c5ea) cell_ai3_links_pane

0xcf68,	// (0x0002c604) bg_popup_sub_pane_cp11

0xcf75,	// (0x0002c611) cell_ai3_links_pane_g1

0x0b7a,	// (0x00020216) bg_popup_sub_pane_cp12

0xcf9a,	// (0x0002c636) heading_ai3_data_pane

0xcfa2,	// (0x0002c63e) list_ai3_gene_pane

0xcfae,	// (0x0002c64a) popup_ai3_data_window_g1

0xcfb6,	// (0x0002c652) heading_ai3_data_pane_g1

0xcfbe,	// (0x0002c65a) heading_ai3_data_pane_t1

0xcfcc,	// (0x0002c668) list_double_ai3_gene_pane_ParamLimits

0xcfcc,	// (0x0002c668) list_double_ai3_gene_pane

0xcfd9,	// (0x0002c675) list_single_ai3_gene_pane_ParamLimits

0xcfd9,	// (0x0002c675) list_single_ai3_gene_pane

0xbd6e,	// (0x0002b40a) list_highlight_pane_cp7_ParamLimits

0xbd6e,	// (0x0002b40a) list_highlight_pane_cp7

0xcfe6,	// (0x0002c682) list_single_a13_gene_pane_t1_ParamLimits

0xcfe6,	// (0x0002c682) list_single_a13_gene_pane_t1

0xcffd,	// (0x0002c699) list_single_ai3_gene_pane_g1

0xd006,	// (0x0002c6a2) list_single_ai3_gene_pane_g2

0x0001,

0xfcc4,	// (0x0002f360) list_single_ai3_gene_pane_g

0xd00e,	// (0x0002c6aa) list_double_ai3_gene_pane_g1_ParamLimits

0xd00e,	// (0x0002c6aa) list_double_ai3_gene_pane_g1

0xd01a,	// (0x0002c6b6) list_double_ai3_gene_pane_t1_ParamLimits

0xd01a,	// (0x0002c6b6) list_double_ai3_gene_pane_t1

0xd036,	// (0x0002c6d2) list_double_ai3_gene_pane_t2_ParamLimits

0xd036,	// (0x0002c6d2) list_double_ai3_gene_pane_t2

0xd04b,	// (0x0002c6e7) list_double_ai3_gene_pane_t3_ParamLimits

0xd04b,	// (0x0002c6e7) list_double_ai3_gene_pane_t3

0x0002,

0xfcc9,	// (0x0002f365) list_double_ai3_gene_pane_t_ParamLimits

0xfcc9,	// (0x0002f365) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x61c1,	// (0x0002585d) aid_size_min_col_2

0xceef,	// (0x0002c58b) aid_size_min_msg_ParamLimits

0xceef,	// (0x0002c58b) aid_size_min_msg

0xc184,	// (0x0002b820) fep_vkb_top_text_pane_g2_ParamLimits

0xc184,	// (0x0002b820) fep_vkb_top_text_pane_g2

0x0001,

0xfb35,	// (0x0002f1d1) fep_vkb_top_text_pane_g_ParamLimits

0xfb35,	// (0x0002f1d1) fep_vkb_top_text_pane_g

0x0b7a,	// (0x00020216) main_hc_apps_shell_pane

0xd068,	// (0x0002c704) grid_hc_apps_pane_ParamLimits

0xd068,	// (0x0002c704) grid_hc_apps_pane

0xd077,	// (0x0002c713) list_hc_apps_pane

0xd07f,	// (0x0002c71b) scroll_pane_cp37_ParamLimits

0xd07f,	// (0x0002c71b) scroll_pane_cp37

0xd08b,	// (0x0002c727) cell_hc_apps_pane_ParamLimits

0xd08b,	// (0x0002c727) cell_hc_apps_pane

0xd143,	// (0x0002c7df) cell_hc_apps_pane_g1_ParamLimits

0xd143,	// (0x0002c7df) cell_hc_apps_pane_g1

0xd174,	// (0x0002c810) cell_hc_apps_pane_g2_ParamLimits

0xd174,	// (0x0002c810) cell_hc_apps_pane_g2

0xd190,	// (0x0002c82c) cell_hc_apps_pane_g3_ParamLimits

0xd190,	// (0x0002c82c) cell_hc_apps_pane_g3

0x0002,

0xfcd0,	// (0x0002f36c) cell_hc_apps_pane_g_ParamLimits

0xfcd0,	// (0x0002f36c) cell_hc_apps_pane_g

0xd1b2,	// (0x0002c84e) cell_hc_apps_pane_t1_ParamLimits

0xd1b2,	// (0x0002c84e) cell_hc_apps_pane_t1

0x0d43,	// (0x000203df) grid_highlight_pane_cp10_ParamLimits

0x0d43,	// (0x000203df) grid_highlight_pane_cp10

0xd1f2,	// (0x0002c88e) list_single_hc_apps_pane_ParamLimits

0xd1f2,	// (0x0002c88e) list_single_hc_apps_pane

0xd231,	// (0x0002c8cd) list_single_hc_apps_pane_g1

0x62b5,	// (0x00025951) list_single_hc_apps_pane_g2

0x0001,

0xfcd7,	// (0x0002f373) list_single_hc_apps_pane_g

0x62ce,	// (0x0002596a) list_single_hc_apps_pane_g2_copy1

0x62ea,	// (0x00025986) list_single_hc_apps_pane_t1

0x0bf6,	// (0x00020292) bg_set_opt_pane_cp_ParamLimits

0x6811,	// (0x00025ead) setting_slider_pane_t1_ParamLimits

0x682a,	// (0x00025ec6) setting_slider_pane_t2_ParamLimits

0x6844,	// (0x00025ee0) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002ebfa) setting_slider_pane_t_ParamLimits

0x685c,	// (0x00025ef8) slider_set_pane_ParamLimits

0x767a,	// (0x00026d16) control_pane_g5_ParamLimits

0x767a,	// (0x00026d16) control_pane_g5

0xaae0,	// (0x0002a17c) slider_set_pane_g1_ParamLimits

0x897f,	// (0x0002801b) slider_set_pane_g2_ParamLimits

0x898b,	// (0x00028027) slider_set_pane_g3_ParamLimits

0x899f,	// (0x0002803b) slider_set_pane_g4_ParamLimits

0x89b7,	// (0x00028053) slider_set_pane_g5_ParamLimits

0x898b,	// (0x00028027) slider_set_pane_g6_ParamLimits

0x89cd,	// (0x00028069) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0002effb) slider_set_pane_g_ParamLimits

0x3616,	// (0x00022cb2) navi_icon_text_pane_ParamLimits

0x7e62,	// (0x000274fe) aid_fill_nsta_2_ParamLimits

0x7ea3,	// (0x0002753f) aid_touch_tab_arrow_left_ParamLimits

0x7eb2,	// (0x0002754e) aid_touch_tab_arrow_right_ParamLimits

0x7f1f,	// (0x000275bb) clock_nsta_pane_ParamLimits

0xa5bc,	// (0x00029c58) navi_icon_pane_g1_ParamLimits

0xa5c8,	// (0x00029c64) navi_text_pane_t1_ParamLimits

0xb9a7,	// (0x0002b043) navi_icon_text_pane_g1_ParamLimits

0xb9b3,	// (0x0002b04f) navi_icon_text_pane_t1_ParamLimits

0xd231,	// (0x0002c8cd) list_single_hc_apps_pane_g1_ParamLimits

0x62b5,	// (0x00025951) list_single_hc_apps_pane_g2_ParamLimits

0xfcd7,	// (0x0002f373) list_single_hc_apps_pane_g_ParamLimits

0x62ce,	// (0x0002596a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x62ea,	// (0x00025986) list_single_hc_apps_pane_t1_ParamLimits

0x6659,	// (0x00025cf5) popup_toolbar2_fixed_window_ParamLimits

0x6659,	// (0x00025cf5) popup_toolbar2_fixed_window

0x7d66,	// (0x00027402) popup_toolbar2_float_window

0x0b7a,	// (0x00020216) bg_popup_sub_pane_cp27

0xd24a,	// (0x0002c8e6) grid_toolbar2_float_pane

0x0b7a,	// (0x00020216) bg_popup_sub_pane_cp26

0xd24a,	// (0x0002c8e6) grid_toolbar2_fixed_pane

0xd252,	// (0x0002c8ee) cell_toolbar2_fixed_pane_ParamLimits

0xd252,	// (0x0002c8ee) cell_toolbar2_fixed_pane

0xd262,	// (0x0002c8fe) cell_toolbar2_fixed_pane_g1

0xd26b,	// (0x0002c907) toolbar2_fixed_button_pane

0x8386,	// (0x00027a22) toolbar2_fixed_button_pane_g1

0x838e,	// (0x00027a2a) toolbar2_fixed_button_pane_g2

0x8396,	// (0x00027a32) toolbar2_fixed_button_pane_g3

0x839e,	// (0x00027a3a) toolbar2_fixed_button_pane_g4

0x83a6,	// (0x00027a42) toolbar2_fixed_button_pane_g5

0x83ae,	// (0x00027a4a) toolbar2_fixed_button_pane_g6

0x83b6,	// (0x00027a52) toolbar2_fixed_button_pane_g7

0x83be,	// (0x00027a5a) toolbar2_fixed_button_pane_g8

0x83c6,	// (0x00027a62) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0002eefd) toolbar2_fixed_button_pane_g

0xd273,	// (0x0002c90f) cell_toolbar2_float_pane_ParamLimits

0xd273,	// (0x0002c90f) cell_toolbar2_float_pane

0xd284,	// (0x0002c920) cell_toolbar2_float_pane_g1

0xd26b,	// (0x0002c907) toolbar2_fixed_button_pane_cp

0xbee0,	// (0x0002b57c) fep_vkb_accented_list_pane_ParamLimits

0xbee0,	// (0x0002b57c) fep_vkb_accented_list_pane

0x8d2f,	// (0x000283cb) bg_popup_fep_shadow_pane_g9

0x72a4,	// (0x00026940) bg_popup_fep_shadow_pane_cp3

0x2df3,	// (0x0002248f) list_accented_list_pane

0xd28d,	// (0x0002c929) list_single_accented_list_pane_ParamLimits

0xd28d,	// (0x0002c929) list_single_accented_list_pane

0x72a4,	// (0x00026940) list_highlight_pane_cp10

0xd29e,	// (0x0002c93a) list_single_accented_list_pane_t1

0x7cac,	// (0x00027348) popup_slider_window_ParamLimits

0x7cac,	// (0x00027348) popup_slider_window

0xcee6,	// (0x0002c582) aid_indentation_list_msg

0xd36a,	// (0x0002ca06) bg_popup_window_pane_cp19

0xd3d8,	// (0x0002ca74) popup_slider_window_g1

0xd3f4,	// (0x0002ca90) popup_slider_window_g2

0xd410,	// (0x0002caac) popup_slider_window_g3

0x0005,

0xfcdc,	// (0x0002f378) popup_slider_window_g

0xd46c,	// (0x0002cb08) popup_slider_window_t1

0xd4e0,	// (0x0002cb7c) small_volume_slider_vertical_pane

0xbda9,	// (0x0002b445) small_volume_slider_vertical_pane_g1

0xbda9,	// (0x0002b445) small_volume_slider_vertical_pane_g2

0xd4fc,	// (0x0002cb98) small_volume_slider_vertical_pane_g3

0x0002,

0xfcee,	// (0x0002f38a) small_volume_slider_vertical_pane_g

0x6411,	// (0x00025aad) area_side_right_pane_ParamLimits

0x6411,	// (0x00025aad) area_side_right_pane

0x8e8b,	// (0x00028527) aid_size_side_button_ParamLimits

0x8e8b,	// (0x00028527) aid_size_side_button

0x8e9f,	// (0x0002853b) grid_sctrl_middle_pane_ParamLimits

0x8e9f,	// (0x0002853b) grid_sctrl_middle_pane

0x8ebf,	// (0x0002855b) sctrl_sk_bottom_pane

0x8ed0,	// (0x0002856c) sctrl_sk_top_pane

0x8ee2,	// (0x0002857e) aid_touch_sctrl_top

0x0d43,	// (0x000203df) bg_sctrl_sk_pane_ParamLimits

0x0d43,	// (0x000203df) bg_sctrl_sk_pane

0x8eef,	// (0x0002858b) sctrl_sk_top_pane_g1

0x8efc,	// (0x00028598) sctrl_sk_top_pane_t1

0x8ee2,	// (0x0002857e) aid_touch_sctrl_bottom

0x0d43,	// (0x000203df) bg_sctrl_sk_pane_cp_ParamLimits

0x0d43,	// (0x000203df) bg_sctrl_sk_pane_cp

0x8f17,	// (0x000285b3) sctrl_sk_bottom_pane_g1

0x8efc,	// (0x00028598) sctrl_sk_bottom_pane_t1

0x8f20,	// (0x000285bc) cell_sctrl_middle_pane_ParamLimits

0x8f20,	// (0x000285bc) cell_sctrl_middle_pane

0x8f3d,	// (0x000285d9) aid_touch_sctrl_middle_ParamLimits

0x8f3d,	// (0x000285d9) aid_touch_sctrl_middle

0x2c43,	// (0x000222df) bg_sctrl_middle_pane_ParamLimits

0x2c43,	// (0x000222df) bg_sctrl_middle_pane

0xc024,	// (0x0002b6c0) cell_sctrl_middle_pane_g1_ParamLimits

0xc024,	// (0x0002b6c0) cell_sctrl_middle_pane_g1

0x8f4f,	// (0x000285eb) cell_sctrl_middle_pane_g2_ParamLimits

0x8f4f,	// (0x000285eb) cell_sctrl_middle_pane_g2

0x0001,

0xfcfa,	// (0x0002f396) cell_sctrl_middle_pane_g_ParamLimits

0xfcfa,	// (0x0002f396) cell_sctrl_middle_pane_g

0x8386,	// (0x00027a22) bg_sctrl_middle_pane_g1

0x838e,	// (0x00027a2a) bg_sctrl_middle_pane_g2

0x8396,	// (0x00027a32) bg_sctrl_middle_pane_g3

0x839e,	// (0x00027a3a) bg_sctrl_middle_pane_g4

0x83a6,	// (0x00027a42) bg_sctrl_middle_pane_g5

0x83ae,	// (0x00027a4a) bg_sctrl_middle_pane_g6

0x83b6,	// (0x00027a52) bg_sctrl_middle_pane_g7

0x83be,	// (0x00027a5a) bg_sctrl_middle_pane_g8

0x0007,

0xfcff,	// (0x0002f39b) bg_sctrl_middle_pane_g

0x83c6,	// (0x00027a62) bg_sctrl_middle_pane_g8_copy1

0x8386,	// (0x00027a22) bg_sctrl_sk_pane_g1

0x838e,	// (0x00027a2a) bg_sctrl_sk_pane_g2

0x8396,	// (0x00027a32) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0002eefd) bg_sctrl_sk_pane_g

0x115e,	// (0x000207fa) aid_size_touch_scroll_bar

0x839e,	// (0x00027a3a) bg_sctrl_sk_pane_g4

0x83a6,	// (0x00027a42) bg_sctrl_sk_pane_g5

0x83ae,	// (0x00027a4a) bg_sctrl_sk_pane_g6

0x83b6,	// (0x00027a52) bg_sctrl_sk_pane_g7

0x83be,	// (0x00027a5a) bg_sctrl_sk_pane_g8

0x83c6,	// (0x00027a62) bg_sctrl_sk_pane_g9

0x78c3,	// (0x00026f5f) popup_fep_china_hwr2_fs_candidate_window

0x78cd,	// (0x00026f69) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x78cd,	// (0x00026f69) popup_fep_china_hwr2_fs_control_window

0xc024,	// (0x0002b6c0) sctrl_sk_top_pane_g2

0x0001,

0xfcf5,	// (0x0002f391) sctrl_sk_top_pane_g

0xd505,	// (0x0002cba1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd505,	// (0x0002cba1) aid_fep_china_hwr2_fs_cell

0xd518,	// (0x0002cbb4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd518,	// (0x0002cbb4) bg_popup_fep_shadow_pane_cp4

0xd531,	// (0x0002cbcd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd531,	// (0x0002cbcd) bg_popup_fep_shadow_pane_cp5

0xd543,	// (0x0002cbdf) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd543,	// (0x0002cbdf) popup_fep_china_hwr2_fs_control_bar_grid

0xd553,	// (0x0002cbef) popup_fep_china_hwr2_fs_control_funtion_grid

0xd55b,	// (0x0002cbf7) aid_fep_china_hwr2_fs_candi_cell

0x0b7a,	// (0x00020216) bg_popup_fep_shadow_pane_cp6

0xd565,	// (0x0002cc01) popup_fep_china_hwr2_fs_candidate_grid

0xd56f,	// (0x0002cc0b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd56f,	// (0x0002cc0b) cell_fep_china_hwr2_fs_funtion_grid

0xbda9,	// (0x0002b445) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd587,	// (0x0002cc23) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd587,	// (0x0002cc23) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd595,	// (0x0002cc31) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd595,	// (0x0002cc31) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd10,	// (0x0002f3ac) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd10,	// (0x0002f3ac) cell_fep_china_hwr2_fs_funtion_grid_g

0xd5ab,	// (0x0002cc47) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd5ab,	// (0x0002cc47) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd5c0,	// (0x0002cc5c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd5c0,	// (0x0002cc5c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd15,	// (0x0002f3b1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd15,	// (0x0002f3b1) cell_fep_china_hwr2_fs_funtion_grid_t

0xd5dc,	// (0x0002cc78) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd5e4,	// (0x0002cc80) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd5ec,	// (0x0002cc88) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1a,	// (0x0002f3b6) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd5f4,	// (0x0002cc90) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd5f4,	// (0x0002cc90) cell_fep_china_hwr2_fs_candidate_grid

0xd613,	// (0x0002ccaf) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd61b,	// (0x0002ccb7) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbda9,	// (0x0002b445) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbda9,	// (0x0002b445) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3a,	// (0x0002f1d6) cell_fep_china_hwr2_fs_candidate_grid_g

0xd623,	// (0x0002ccbf) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7f32,	// (0x000275ce) clock_nsta_pane_cp_24_ParamLimits

0x7f32,	// (0x000275ce) clock_nsta_pane_cp_24

0x7fb2,	// (0x0002764e) indicator_nsta_pane_cp_24_ParamLimits

0x7fb2,	// (0x0002764e) indicator_nsta_pane_cp_24

0xa438,	// (0x00029ad4) heading_pane_g1

0x0001,

0xf8c6,	// (0x0002ef62) heading_pane_g

0xaeda,	// (0x0002a576) grid_sct_catagory_button_pane

0xaf0c,	// (0x0002a5a8) scroll_pane_cp5_ParamLimits

0xb9f5,	// (0x0002b091) button_value_adjust_pane_cp5_ParamLimits

0xb9f5,	// (0x0002b091) button_value_adjust_pane_cp5

0xbada,	// (0x0002b176) form2_midp_time_pane_ParamLimits

0xd631,	// (0x0002cccd) cell_sct_catagory_button_pane_ParamLimits

0xd631,	// (0x0002cccd) cell_sct_catagory_button_pane

0xbd6e,	// (0x0002b40a) bg_button_pane_cp01_ParamLimits

0xbd6e,	// (0x0002b40a) bg_button_pane_cp01

0xbda9,	// (0x0002b445) cell_sct_catagory_button_pane_g1

0x7ced,	// (0x00027389) popup_tb_extension_window

0xd643,	// (0x0002ccdf) aid_size_cell_ext_ParamLimits

0xd643,	// (0x0002ccdf) aid_size_cell_ext

0x0d43,	// (0x000203df) bg_tb_trans_pane_cp1_ParamLimits

0x0d43,	// (0x000203df) bg_tb_trans_pane_cp1

0xd663,	// (0x0002ccff) grid_tb_ext_pane_ParamLimits

0xd663,	// (0x0002ccff) grid_tb_ext_pane

0xd693,	// (0x0002cd2f) cell_tb_ext_pane_ParamLimits

0xd693,	// (0x0002cd2f) cell_tb_ext_pane

0xd6aa,	// (0x0002cd46) cell_tb_ext_pane_g1_ParamLimits

0xd6aa,	// (0x0002cd46) cell_tb_ext_pane_g1

0xd6c7,	// (0x0002cd63) cell_tb_ext_pane_t1

0x0d43,	// (0x000203df) list_highlight_pane_cp11_ParamLimits

0x0d43,	// (0x000203df) list_highlight_pane_cp11

0x6678,	// (0x00025d14) popup_uni_indicator_window_ParamLimits

0x6678,	// (0x00025d14) popup_uni_indicator_window

0x2c43,	// (0x000222df) bg_popup_sub_pane_cp14

0xd6e2,	// (0x0002cd7e) list_uniindi_pane

0xd6ee,	// (0x0002cd8a) uniindi_top_pane

0x0d43,	// (0x000203df) bg_uniindi_top_pane

0xd70f,	// (0x0002cdab) uniindi_top_pane_g1

0xd725,	// (0x0002cdc1) uniindi_top_pane_g2

0x0003,

0xfd21,	// (0x0002f3bd) uniindi_top_pane_g

0xd74f,	// (0x0002cdeb) uniindi_top_pane_t1

0xd77b,	// (0x0002ce17) list_single_uniindi_pane_ParamLimits

0xd77b,	// (0x0002ce17) list_single_uniindi_pane

0xbda9,	// (0x0002b445) bg_uniindi_top_pane_g1

0xd78d,	// (0x0002ce29) list_single_uniindi_pane_g1

0xd7a0,	// (0x0002ce3c) list_single_uniindi_pane_t1

0x0b7a,	// (0x00020216) control_bg_pane

0xd7c5,	// (0x0002ce61) bg_sctrl_sk_pane_cp1

0xd7ce,	// (0x0002ce6a) bg_sctrl_sk_pane_cp2

0xd7d7,	// (0x0002ce73) control_bg_pane_g1

0xd7e0,	// (0x0002ce7c) control_bg_pane_g2

0x0001,

0xfd2a,	// (0x0002f3c6) control_bg_pane_g

0xb81c,	// (0x0002aeb8) cell_indicator_nsta_pane_g1_ParamLimits

0xb82a,	// (0x0002aec6) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9e,	// (0x0002f13a) cell_indicator_nsta_pane_g_ParamLimits

0x5f7e,	// (0x0002561a) form2_midp_time_pane_t1_ParamLimits

0x0fa0,	// (0x0002063c) main_idle_act4_pane_ParamLimits

0x0fa0,	// (0x0002063c) main_idle_act4_pane

0x7ced,	// (0x00027389) popup_tb_extension_window_ParamLimits

0xd685,	// (0x0002cd21) tb_ext_find_pane_ParamLimits

0xd685,	// (0x0002cd21) tb_ext_find_pane

0xd7e9,	// (0x0002ce85) ai_gene_pane_1_cp1

0x73e1,	// (0x00026a7d) ai_gene_pane_2_cp1

0xd7f1,	// (0x0002ce8d) list_single_idle_plugin_calendar_pane

0xd7fa,	// (0x0002ce96) list_single_idle_plugin_notification_pane

0xd803,	// (0x0002ce9f) list_single_idle_plugin_player_pane

0xd80c,	// (0x0002cea8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd80c,	// (0x0002cea8) list_single_idle_plugin_shortcut_pane

0xd82e,	// (0x0002ceca) main_idle_act4_pane_t1

0xd840,	// (0x0002cedc) main_idle_act4_pane_t2

0x0001,

0xfd2f,	// (0x0002f3cb) main_idle_act4_pane_t

0xd852,	// (0x0002ceee) middle_sk_idle_act4_pane_ParamLimits

0xd852,	// (0x0002ceee) middle_sk_idle_act4_pane

0xd868,	// (0x0002cf04) popup_clock_digital_analogue_window_cp2

0xd882,	// (0x0002cf1e) shortcut_wheel_idle_act4_pane_ParamLimits

0xd882,	// (0x0002cf1e) shortcut_wheel_idle_act4_pane

0xbda9,	// (0x0002b445) shortcut_wheel_idle_act4_pane_g1

0xbda9,	// (0x0002b445) shortcut_wheel_idle_act4_pane_g2

0xbda9,	// (0x0002b445) shortcut_wheel_idle_act4_pane_g3

0xbda9,	// (0x0002b445) shortcut_wheel_idle_act4_pane_g4

0xbda9,	// (0x0002b445) shortcut_wheel_idle_act4_pane_g5

0xd896,	// (0x0002cf32) shortcut_wheel_idle_act4_pane_g6

0xd89e,	// (0x0002cf3a) shortcut_wheel_idle_act4_pane_g7

0xd8a6,	// (0x0002cf42) shortcut_wheel_idle_act4_pane_g8

0xd8ae,	// (0x0002cf4a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd34,	// (0x0002f3d0) shortcut_wheel_idle_act4_pane_g

0xc024,	// (0x0002b6c0) middle_sk_idle_act4_pane_g1_ParamLimits

0xc024,	// (0x0002b6c0) middle_sk_idle_act4_pane_g1

0xd912,	// (0x0002cfae) middle_sk_idle_act4_pane_g2_ParamLimits

0xd912,	// (0x0002cfae) middle_sk_idle_act4_pane_g2

0x0001,

0xfd57,	// (0x0002f3f3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd57,	// (0x0002f3f3) middle_sk_idle_act4_pane_g

0xd91e,	// (0x0002cfba) middle_sk_idle_act4_pane_t1_ParamLimits

0xd91e,	// (0x0002cfba) middle_sk_idle_act4_pane_t1

0xd93b,	// (0x0002cfd7) grid_ai_shortcut_pane_ParamLimits

0xd93b,	// (0x0002cfd7) grid_ai_shortcut_pane

0xd954,	// (0x0002cff0) list_highlight_pane_cp16_ParamLimits

0xd954,	// (0x0002cff0) list_highlight_pane_cp16

0xd961,	// (0x0002cffd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd961,	// (0x0002cffd) list_single_idle_plugin_shortcut_pane_g1

0xd96d,	// (0x0002d009) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd96d,	// (0x0002d009) list_single_idle_plugin_shortcut_pane_g2

0xd987,	// (0x0002d023) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd987,	// (0x0002d023) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5c,	// (0x0002f3f8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5c,	// (0x0002f3f8) list_single_idle_plugin_shortcut_pane_g

0xd99a,	// (0x0002d036) cell_ai_shortcut_pane_ParamLimits

0xd99a,	// (0x0002d036) cell_ai_shortcut_pane

0xd9bd,	// (0x0002d059) cell_ai_shortcut_pane_g1_ParamLimits

0xd9bd,	// (0x0002d059) cell_ai_shortcut_pane_g1

0xd7e9,	// (0x0002ce85) ai_gene_pane_1_cp2

0xd9df,	// (0x0002d07b) ai_gene_pane_2_cp2

0xd9e7,	// (0x0002d083) list_highlight_pane_cp15

0xd9f0,	// (0x0002d08c) list_single_idle_plugin_calendar_pane_g1

0xd9e7,	// (0x0002d083) list_highlight_pane_cp17

0xd9f8,	// (0x0002d094) list_single_idle_plugin_calendar_pane_g1_copy1

0xda00,	// (0x0002d09c) list_single_idle_plugin_player_pane_g1

0xb141,	// (0x0002a7dd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd63,	// (0x0002f3ff) list_single_idle_plugin_player_pane_g

0xda08,	// (0x0002d0a4) list_single_idle_plugin_player_pane_t1

0xda16,	// (0x0002d0b2) list_single_idle_plugin_player_pane_t2

0xda24,	// (0x0002d0c0) list_single_idle_plugin_player_pane_t3

0xda32,	// (0x0002d0ce) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd68,	// (0x0002f404) list_single_idle_plugin_player_pane_t

0xda40,	// (0x0002d0dc) wait_bar_pane_cp15

0xda48,	// (0x0002d0e4) grid_ai_notification_pane

0xb141,	// (0x0002a7dd) list_single_idle_plugin_notification_pane_g1

0xda51,	// (0x0002d0ed) cell_ai_notification_pane_ParamLimits

0xda51,	// (0x0002d0ed) cell_ai_notification_pane

0xda5e,	// (0x0002d0fa) cell_ai_notification_pane_g1

0xda66,	// (0x0002d102) cell_ai_notification_pane_t1

0xda74,	// (0x0002d110) tb_ext_find_button_pane

0xda7c,	// (0x0002d118) tb_ext_find_pane_g1

0xda84,	// (0x0002d120) tb_ext_find_pane_t1

0x3303,	// (0x0002299f) tb_ext_find_button_pane_g1

0xda92,	// (0x0002d12e) tb_ext_find_button_pane_g2

0x0001,

0xfd71,	// (0x0002f40d) tb_ext_find_button_pane_g

0xd82e,	// (0x0002ceca) main_idle_act4_pane_t1_ParamLimits

0xd840,	// (0x0002cedc) main_idle_act4_pane_t2_ParamLimits

0xfd2f,	// (0x0002f3cb) main_idle_act4_pane_t_ParamLimits

0xd868,	// (0x0002cf04) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd876,	// (0x0002cf12) sat_plugin_idle_act4_pane_ParamLimits

0xd876,	// (0x0002cf12) sat_plugin_idle_act4_pane

0xda9b,	// (0x0002d137) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda9b,	// (0x0002d137) sat_plugin_idle_act4_pane_t1

0xdaae,	// (0x0002d14a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdaae,	// (0x0002d14a) sat_plugin_idle_act4_pane_t2

0xdac1,	// (0x0002d15d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdac1,	// (0x0002d15d) sat_plugin_idle_act4_pane_t3

0xdad4,	// (0x0002d170) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdad4,	// (0x0002d170) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd76,	// (0x0002f412) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd76,	// (0x0002f412) sat_plugin_idle_act4_pane_t

0x65a9,	// (0x00025c45) popup_battery_window_ParamLimits

0x65a9,	// (0x00025c45) popup_battery_window

0x0d43,	// (0x000203df) bg_popup_sub_pane_cp25_ParamLimits

0x0d43,	// (0x000203df) bg_popup_sub_pane_cp25

0xdae7,	// (0x0002d183) popup_battery_window_g1_ParamLimits

0xdae7,	// (0x0002d183) popup_battery_window_g1

0xdaf3,	// (0x0002d18f) popup_battery_window_t1_ParamLimits

0xdaf3,	// (0x0002d18f) popup_battery_window_t1

0xdb05,	// (0x0002d1a1) popup_battery_window_t2_ParamLimits

0xdb05,	// (0x0002d1a1) popup_battery_window_t2

0x0001,

0xfd7f,	// (0x0002f41b) popup_battery_window_t_ParamLimits

0xfd7f,	// (0x0002f41b) popup_battery_window_t

0x72ac,	// (0x00026948) midp_canvas_pane_ParamLimits

0x7323,	// (0x000269bf) midp_keypad_pane_ParamLimits

0x7323,	// (0x000269bf) midp_keypad_pane

0x7815,	// (0x00026eb1) main_midp_pane_ParamLimits

0xb8a8,	// (0x0002af44) signal_pane_g2_cp_ParamLimits

0xdb22,	// (0x0002d1be) aid_size_cell_midp_keypad_ParamLimits

0xdb22,	// (0x0002d1be) aid_size_cell_midp_keypad

0xdb3c,	// (0x0002d1d8) midp_keyp_game_grid_pane_ParamLimits

0xdb3c,	// (0x0002d1d8) midp_keyp_game_grid_pane

0xdb5c,	// (0x0002d1f8) midp_keyp_rocker_pane_ParamLimits

0xdb5c,	// (0x0002d1f8) midp_keyp_rocker_pane

0xdb87,	// (0x0002d223) midp_keyp_sk_left_pane_ParamLimits

0xdb87,	// (0x0002d223) midp_keyp_sk_left_pane

0xdbe1,	// (0x0002d27d) midp_keyp_sk_right_pane_ParamLimits

0xdbe1,	// (0x0002d27d) midp_keyp_sk_right_pane

0x0b7a,	// (0x00020216) bg_button_pane_cp03

0xdc3b,	// (0x0002d2d7) midp_keyp_sk_left_pane_g1

0x0b7a,	// (0x00020216) bg_button_pane_cp04

0xdc3b,	// (0x0002d2d7) midp_keyp_sk_right_pane_g1

0xbda9,	// (0x0002b445) midp_keyp_rocker_pane_g1

0xdc44,	// (0x0002d2e0) keyp_game_cell_pane_ParamLimits

0xdc44,	// (0x0002d2e0) keyp_game_cell_pane

0x0b7a,	// (0x00020216) bg_button_pane_cp02

0xdc57,	// (0x0002d2f3) keyp_game_cell_pane_g1

0x65f3,	// (0x00025c8f) popup_fep_vkb2_window_ParamLimits

0x65f3,	// (0x00025c8f) popup_fep_vkb2_window

0x8f6d,	// (0x00028609) aid_size_cell_vkb2_ParamLimits

0x8f6d,	// (0x00028609) aid_size_cell_vkb2

0x8fc1,	// (0x0002865d) popup_fep_vkb2_window_g1_ParamLimits

0x8fc1,	// (0x0002865d) popup_fep_vkb2_window_g1

0x9009,	// (0x000286a5) vkb2_area_bottom_pane_ParamLimits

0x9009,	// (0x000286a5) vkb2_area_bottom_pane

0x905d,	// (0x000286f9) vkb2_area_keypad_pane_ParamLimits

0x905d,	// (0x000286f9) vkb2_area_keypad_pane

0x90a3,	// (0x0002873f) vkb2_area_top_pane_ParamLimits

0x90a3,	// (0x0002873f) vkb2_area_top_pane

0x911d,	// (0x000287b9) vkb2_top_entry_pane_ParamLimits

0x911d,	// (0x000287b9) vkb2_top_entry_pane

0x9147,	// (0x000287e3) vkb2_top_grid_left_pane_ParamLimits

0x9147,	// (0x000287e3) vkb2_top_grid_left_pane

0x9165,	// (0x00028801) vkb2_top_grid_right_pane_ParamLimits

0x9165,	// (0x00028801) vkb2_top_grid_right_pane

0x9183,	// (0x0002881f) vkb2_cell_keypad_pane_ParamLimits

0x9183,	// (0x0002881f) vkb2_cell_keypad_pane

0x9254,	// (0x000288f0) vkb2_area_bottom_grid_pane_ParamLimits

0x9254,	// (0x000288f0) vkb2_area_bottom_grid_pane

0x927a,	// (0x00028916) vkb2_area_bottom_pane_g1_ParamLimits

0x927a,	// (0x00028916) vkb2_area_bottom_pane_g1

0x929e,	// (0x0002893a) vkb2_area_bottom_pane_g2_ParamLimits

0x929e,	// (0x0002893a) vkb2_area_bottom_pane_g2

0x92cc,	// (0x00028968) vkb2_area_bottom_pane_g3_ParamLimits

0x92cc,	// (0x00028968) vkb2_area_bottom_pane_g3

0x0002,

0xfd84,	// (0x0002f420) vkb2_area_bottom_pane_g_ParamLimits

0xfd84,	// (0x0002f420) vkb2_area_bottom_pane_g

0x932d,	// (0x000289c9) vkb2_top_cell_left_pane_ParamLimits

0x932d,	// (0x000289c9) vkb2_top_cell_left_pane

0xdc68,	// (0x0002d304) vkb2_top_entry_pane_g1_ParamLimits

0xdc68,	// (0x0002d304) vkb2_top_entry_pane_g1

0xdc76,	// (0x0002d312) vkb2_top_entry_pane_t1_ParamLimits

0xdc76,	// (0x0002d312) vkb2_top_entry_pane_t1

0xdca8,	// (0x0002d344) vkb2_top_entry_pane_t2_ParamLimits

0xdca8,	// (0x0002d344) vkb2_top_entry_pane_t2

0xdcda,	// (0x0002d376) vkb2_top_entry_pane_t3_ParamLimits

0xdcda,	// (0x0002d376) vkb2_top_entry_pane_t3

0x0002,

0xfd8b,	// (0x0002f427) vkb2_top_entry_pane_t_ParamLimits

0xfd8b,	// (0x0002f427) vkb2_top_entry_pane_t

0x937a,	// (0x00028a16) vkb2_top_grid_right_pane_g1_ParamLimits

0x937a,	// (0x00028a16) vkb2_top_grid_right_pane_g1

0x9390,	// (0x00028a2c) vkb2_top_grid_right_pane_g2_ParamLimits

0x9390,	// (0x00028a2c) vkb2_top_grid_right_pane_g2

0x93a8,	// (0x00028a44) vkb2_top_grid_right_pane_g3_ParamLimits

0x93a8,	// (0x00028a44) vkb2_top_grid_right_pane_g3

0x93c0,	// (0x00028a5c) vkb2_top_grid_right_pane_g4_ParamLimits

0x93c0,	// (0x00028a5c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd92,	// (0x0002f42e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd92,	// (0x0002f42e) vkb2_top_grid_right_pane_g

0x93d6,	// (0x00028a72) vkb2_top_cell_left_pane_g1

0x93ed,	// (0x00028a89) vkb2_cell_keypad_pane_g1_ParamLimits

0x93ed,	// (0x00028a89) vkb2_cell_keypad_pane_g1

0xdcfe,	// (0x0002d39a) vkb2_cell_keypad_pane_t1_ParamLimits

0xdcfe,	// (0x0002d39a) vkb2_cell_keypad_pane_t1

0x93fb,	// (0x00028a97) vkb2_cell_bottom_grid_pane_ParamLimits

0x93fb,	// (0x00028a97) vkb2_cell_bottom_grid_pane

0x9434,	// (0x00028ad0) vkb2_cell_bottom_grid_pane_g1

0xd8b6,	// (0x0002cf52) aid_call2_pane_cp02

0xd8be,	// (0x0002cf5a) aid_call_pane_cp02

0xd8c6,	// (0x0002cf62) clock_digital_number_pane_cp10

0xd8ce,	// (0x0002cf6a) clock_digital_number_pane_cp11

0xd8d6,	// (0x0002cf72) clock_digital_number_pane_cp12

0xd8de,	// (0x0002cf7a) clock_digital_number_pane_cp13

0xd8e6,	// (0x0002cf82) clock_digital_separator_pane_cp10

0x3303,	// (0x0002299f) popup_clock_digital_analogue_window_cp2_g1

0x3303,	// (0x0002299f) popup_clock_digital_analogue_window_cp2_g2

0xd8ee,	// (0x0002cf8a) popup_clock_digital_analogue_window_cp2_g3

0x3303,	// (0x0002299f) popup_clock_digital_analogue_window_cp2_g4

0xd8ee,	// (0x0002cf8a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd47,	// (0x0002f3e3) popup_clock_digital_analogue_window_cp2_g

0xd8f6,	// (0x0002cf92) popup_clock_digital_analogue_window_cp2_t1

0xd904,	// (0x0002cfa0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd52,	// (0x0002f3ee) popup_clock_digital_analogue_window_cp2_t

0xbda9,	// (0x0002b445) clock_digital_number_pane_cp10_g1

0xbda9,	// (0x0002b445) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002f1d6) clock_digital_number_pane_cp10_g

0xbda9,	// (0x0002b445) clock_digital_separator_pane_cp10_g1

0xbda9,	// (0x0002b445) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002f1d6) clock_digital_separator_pane_cp10_g

0xd731,	// (0x0002cdcd) uniindi_top_pane_g3

0xd742,	// (0x0002cdde) uniindi_top_pane_g4

0x920e,	// (0x000288aa) vkb2_row_keypad_pane_ParamLimits

0x920e,	// (0x000288aa) vkb2_row_keypad_pane

0x9450,	// (0x00028aec) vkb2_cell_t_keypad_pane_ParamLimits

0x9450,	// (0x00028aec) vkb2_cell_t_keypad_pane

0x9460,	// (0x00028afc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9460,	// (0x00028afc) vkb2_cell_t_keypad_pane_cp08

0x9475,	// (0x00028b11) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9475,	// (0x00028b11) vkb2_cell_t_keypad_pane_cp09

0x9489,	// (0x00028b25) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9489,	// (0x00028b25) vkb2_cell_t_keypad_pane_cp01

0x949a,	// (0x00028b36) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x949a,	// (0x00028b36) vkb2_cell_t_keypad_pane_cp02

0x94ab,	// (0x00028b47) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x94ab,	// (0x00028b47) vkb2_cell_t_keypad_pane_cp03

0x94bc,	// (0x00028b58) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x94bc,	// (0x00028b58) vkb2_cell_t_keypad_pane_cp04

0x94cd,	// (0x00028b69) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x94cd,	// (0x00028b69) vkb2_cell_t_keypad_pane_cp05

0x94de,	// (0x00028b7a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x94de,	// (0x00028b7a) vkb2_cell_t_keypad_pane_cp06

0x94f1,	// (0x00028b8d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x94f1,	// (0x00028b8d) vkb2_cell_t_keypad_pane_cp07

0x9506,	// (0x00028ba2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9506,	// (0x00028ba2) vkb2_cell_t_keypad_pane_cp10

0xc024,	// (0x0002b6c0) vkb2_cell_t_keypad_pane_g1

0xdd15,	// (0x0002d3b1) vkb2_cell_t_keypad_pane_t1

0x0b7a,	// (0x00020216) popup_grid_graphic2_window

0xdd27,	// (0x0002d3c3) aid_size_cell_graphic2_ParamLimits

0xdd27,	// (0x0002d3c3) aid_size_cell_graphic2

0xdd5f,	// (0x0002d3fb) bg_popup_window_pane_cp21_ParamLimits

0xdd5f,	// (0x0002d3fb) bg_popup_window_pane_cp21

0xdd6d,	// (0x0002d409) graphic2_pages_pane_ParamLimits

0xdd6d,	// (0x0002d409) graphic2_pages_pane

0xddb3,	// (0x0002d44f) grid_graphic2_control_pane_ParamLimits

0xddb3,	// (0x0002d44f) grid_graphic2_control_pane

0xddf1,	// (0x0002d48d) grid_graphic2_pane_ParamLimits

0xddf1,	// (0x0002d48d) grid_graphic2_pane

0xde67,	// (0x0002d503) cell_graphic2_pane

0x0b7a,	// (0x00020216) main_comp_mode_pane

0xcfa2,	// (0x0002c63e) list_ai3_gene_pane_ParamLimits

0xd36a,	// (0x0002ca06) bg_popup_window_pane_cp19_ParamLimits

0xd376,	// (0x0002ca12) bg_touch_area_indi_pane_ParamLimits

0xd376,	// (0x0002ca12) bg_touch_area_indi_pane

0xd38c,	// (0x0002ca28) bg_touch_area_indi_pane_cp01_ParamLimits

0xd38c,	// (0x0002ca28) bg_touch_area_indi_pane_cp01

0xd3a4,	// (0x0002ca40) bg_touch_area_indi_pane_cp02_ParamLimits

0xd3a4,	// (0x0002ca40) bg_touch_area_indi_pane_cp02

0xd3be,	// (0x0002ca5a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd3be,	// (0x0002ca5a) bg_touch_area_indi_pane_cp03

0xd3d8,	// (0x0002ca74) popup_slider_window_g1_ParamLimits

0xd3f4,	// (0x0002ca90) popup_slider_window_g2_ParamLimits

0xd410,	// (0x0002caac) popup_slider_window_g3_ParamLimits

0xfcdc,	// (0x0002f378) popup_slider_window_g_ParamLimits

0xd46c,	// (0x0002cb08) popup_slider_window_t1_ParamLimits

0xd4e0,	// (0x0002cb7c) small_volume_slider_vertical_pane_ParamLimits

0xde67,	// (0x0002d503) cell_graphic2_pane_ParamLimits

0xdeb9,	// (0x0002d555) bg_button_pane_cp10_ParamLimits

0xdeb9,	// (0x0002d555) bg_button_pane_cp10

0xdece,	// (0x0002d56a) bg_button_pane_cp11_ParamLimits

0xdece,	// (0x0002d56a) bg_button_pane_cp11

0xdee3,	// (0x0002d57f) graphic2_pages_pane_g1_ParamLimits

0xdee3,	// (0x0002d57f) graphic2_pages_pane_g1

0xdefe,	// (0x0002d59a) graphic2_pages_pane_g2_ParamLimits

0xdefe,	// (0x0002d59a) graphic2_pages_pane_g2

0x0001,

0xfda0,	// (0x0002f43c) graphic2_pages_pane_g_ParamLimits

0xfda0,	// (0x0002f43c) graphic2_pages_pane_g

0xdf16,	// (0x0002d5b2) graphic2_pages_pane_t1_ParamLimits

0xdf16,	// (0x0002d5b2) graphic2_pages_pane_t1

0xdf2c,	// (0x0002d5c8) cell_graphic2_control_pane_ParamLimits

0xdf2c,	// (0x0002d5c8) cell_graphic2_control_pane

0xdf4f,	// (0x0002d5eb) cell_graphic2_pane_g1_ParamLimits

0xdf4f,	// (0x0002d5eb) cell_graphic2_pane_g1

0xdf5c,	// (0x0002d5f8) cell_graphic2_pane_g2_ParamLimits

0xdf5c,	// (0x0002d5f8) cell_graphic2_pane_g2

0xdf69,	// (0x0002d605) cell_graphic2_pane_g3_ParamLimits

0xdf69,	// (0x0002d605) cell_graphic2_pane_g3

0xdf76,	// (0x0002d612) cell_graphic2_pane_g4_ParamLimits

0xdf76,	// (0x0002d612) cell_graphic2_pane_g4

0xdf83,	// (0x0002d61f) cell_graphic2_pane_g5_ParamLimits

0xdf83,	// (0x0002d61f) cell_graphic2_pane_g5

0x0004,

0xfda5,	// (0x0002f441) cell_graphic2_pane_g_ParamLimits

0xfda5,	// (0x0002f441) cell_graphic2_pane_g

0xdf9e,	// (0x0002d63a) cell_graphic2_pane_t1_ParamLimits

0xdf9e,	// (0x0002d63a) cell_graphic2_pane_t1

0x8471,	// (0x00027b0d) grid_highlight_pane_cp11_ParamLimits

0x8471,	// (0x00027b0d) grid_highlight_pane_cp11

0x0d43,	// (0x000203df) bg_button_pane_cp05

0xdfc7,	// (0x0002d663) cell_graphic2_control_pane_g1

0xbda9,	// (0x0002b445) bg_touch_area_indi_pane_g1

0xdfef,	// (0x0002d68b) aid_cmod_rocker_key_size

0xdff9,	// (0x0002d695) aid_cmode_itu_key_size

0xe003,	// (0x0002d69f) main_cmode_video_pane

0xe00d,	// (0x0002d6a9) main_comp_mode_itu_pane

0xe019,	// (0x0002d6b5) main_comp_mode_rocker_pane

0xe025,	// (0x0002d6c1) cell_cmode_rocker_pane_ParamLimits

0xe025,	// (0x0002d6c1) cell_cmode_rocker_pane

0xe039,	// (0x0002d6d5) cell_cmode_itu_pane_ParamLimits

0xe039,	// (0x0002d6d5) cell_cmode_itu_pane

0x2c43,	// (0x000222df) bg_button_pane_cp06_ParamLimits

0x2c43,	// (0x000222df) bg_button_pane_cp06

0xc024,	// (0x0002b6c0) cell_cmode_rocker_pane_g1_ParamLimits

0xc024,	// (0x0002b6c0) cell_cmode_rocker_pane_g1

0xd587,	// (0x0002cc23) cell_cmode_rocker_pane_g2_ParamLimits

0xd587,	// (0x0002cc23) cell_cmode_rocker_pane_g2

0x0001,

0xfdb5,	// (0x0002f451) cell_cmode_rocker_pane_g_ParamLimits

0xfdb5,	// (0x0002f451) cell_cmode_rocker_pane_g

0x0b7a,	// (0x00020216) bg_button_pane_cp07

0xe050,	// (0x0002d6ec) cell_cmode_itu_pane_g1

0xe059,	// (0x0002d6f5) cell_cmode_itu_pane_t1

0xe067,	// (0x0002d703) cell_cmode_itu_pane_t2

0x0001,

0xfdba,	// (0x0002f456) cell_cmode_itu_pane_t

0xd7b5,	// (0x0002ce51) aid_touch_ctrl_left

0xd7bd,	// (0x0002ce59) aid_touch_ctrl_right

0x0b7a,	// (0x00020216) compa_mode_pane

0xe075,	// (0x0002d711) aid_cmod_rocker_key_size_cp

0xe07f,	// (0x0002d71b) aid_cmode_itu_key_size_cp

0xe089,	// (0x0002d725) compa_mode_pane_g1

0xe091,	// (0x0002d72d) compa_mode_pane_g2

0xe099,	// (0x0002d735) compa_mode_pane_g3

0x0002,

0xfdbf,	// (0x0002f45b) compa_mode_pane_g

0xe0a1,	// (0x0002d73d) main_comp_mode_itu_pane_cp

0xe0a9,	// (0x0002d745) main_comp_mode_rocker_pane_cp

0xe0b1,	// (0x0002d74d) cell_cmode_itu_pane_cp_ParamLimits

0xe0b1,	// (0x0002d74d) cell_cmode_itu_pane_cp

0xe0c6,	// (0x0002d762) cell_cmode_rocker_pane_cp_ParamLimits

0xe0c6,	// (0x0002d762) cell_cmode_rocker_pane_cp

0x2c43,	// (0x000222df) bg_button_pane_cp06_cp_ParamLimits

0x2c43,	// (0x000222df) bg_button_pane_cp06_cp

0xc024,	// (0x0002b6c0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc024,	// (0x0002b6c0) cell_cmode_rocker_pane_g1_cp

0xbda9,	// (0x0002b445) cell_cmode_rocker_pane_g2_cp

0x0b7a,	// (0x00020216) bg_button_pane_cp07_cp

0xe0d8,	// (0x0002d774) cell_cmode_itu_pane_g1_cp

0xe0e1,	// (0x0002d77d) cell_cmode_itu_pane_t1_cp

0xe0e1,	// (0x0002d77d) cell_cmode_itu_pane_t2_cp

0xaca2,	// (0x0002a33e) settings_code_pane_cp2

0x0bf6,	// (0x00020292) bg_popup_window_pane_cp3_ParamLimits

0x0f31,	// (0x000205cd) heading_pane_cp3_ParamLimits

0x0f3d,	// (0x000205d9) listscroll_popup_graphic_pane_ParamLimits

0x8afd,	// (0x00028199) fep_hwr_aid_pane_ParamLimits

0x8ee2,	// (0x0002857e) aid_touch_sctrl_top_ParamLimits

0x8eef,	// (0x0002858b) sctrl_sk_top_pane_g1_ParamLimits

0xc024,	// (0x0002b6c0) sctrl_sk_top_pane_g2_ParamLimits

0xfcf5,	// (0x0002f391) sctrl_sk_top_pane_g_ParamLimits

0x8efc,	// (0x00028598) sctrl_sk_top_pane_t1_ParamLimits

0x8ee2,	// (0x0002857e) aid_touch_sctrl_bottom_ParamLimits

0x8efc,	// (0x00028598) sctrl_sk_bottom_pane_t1_ParamLimits

0xd6fb,	// (0x0002cd97) aid_area_touch_clock

0x90e5,	// (0x00028781) aid_vkb2_area_top_pane_cell_ParamLimits

0x90e5,	// (0x00028781) aid_vkb2_area_top_pane_cell

0x9230,	// (0x000288cc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9230,	// (0x000288cc) aid_vkb2_area_bottom_pane_cell

0xdc60,	// (0x0002d2fc) popup_char_count_window

0xe0ef,	// (0x0002d78b) popup_char_count_window_g1

0xe0f8,	// (0x0002d794) popup_char_count_window_g2

0xe101,	// (0x0002d79d) popup_char_count_window_g3

0x0002,

0xfdc6,	// (0x0002f462) popup_char_count_window_g

0xe10a,	// (0x0002d7a6) popup_char_count_window_t1

0x8f9f,	// (0x0002863b) popup_fep_char_preview_window_ParamLimits

0x8f9f,	// (0x0002863b) popup_fep_char_preview_window

0x9103,	// (0x0002879f) vkb2_top_candi_pane_ParamLimits

0x9103,	// (0x0002879f) vkb2_top_candi_pane

0xe118,	// (0x0002d7b4) cell_vkb2_top_candi_pane_ParamLimits

0xe118,	// (0x0002d7b4) cell_vkb2_top_candi_pane

0x9db5,	// (0x00029451) bg_popup_fep_char_preview_window_ParamLimits

0x9db5,	// (0x00029451) bg_popup_fep_char_preview_window

0x951b,	// (0x00028bb7) popup_fep_char_preview_window_t1_ParamLimits

0x951b,	// (0x00028bb7) popup_fep_char_preview_window_t1

0xe169,	// (0x0002d805) bg_popup_fep_char_preview_window_g1

0xe171,	// (0x0002d80d) bg_popup_fep_char_preview_window_g2

0xe179,	// (0x0002d815) bg_popup_fep_char_preview_window_g3

0xe181,	// (0x0002d81d) bg_popup_fep_char_preview_window_g4

0xe189,	// (0x0002d825) bg_popup_fep_char_preview_window_g5

0x9555,	// (0x00028bf1) bg_popup_fep_char_preview_window_g6

0xe191,	// (0x0002d82d) bg_popup_fep_char_preview_window_g7

0xe199,	// (0x0002d835) bg_popup_fep_char_preview_window_g8

0xe1a1,	// (0x0002d83d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcd,	// (0x0002f469) bg_popup_fep_char_preview_window_g

0xc024,	// (0x0002b6c0) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc024,	// (0x0002b6c0) cell_vkb2_top_candi_pane_g1

0xc365,	// (0x0002ba01) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc365,	// (0x0002ba01) cell_vkb2_top_candi_pane_g2

0xc386,	// (0x0002ba22) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc386,	// (0x0002ba22) cell_vkb2_top_candi_pane_g3

0x955d,	// (0x00028bf9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x955d,	// (0x00028bf9) cell_vkb2_top_candi_pane_g4

0xe1a9,	// (0x0002d845) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe1a9,	// (0x0002d845) cell_vkb2_top_candi_pane_g5

0xd587,	// (0x0002cc23) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd587,	// (0x0002cc23) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde0,	// (0x0002f47c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde0,	// (0x0002f47c) cell_vkb2_top_candi_pane_g

0x957e,	// (0x00028c1a) cell_vkb2_top_candi_pane_t1

0x896b,	// (0x00028007) aid_size_touch_slider_mark_ParamLimits

0x896b,	// (0x00028007) aid_size_touch_slider_mark

0xdda3,	// (0x0002d43f) grid_graphic2_catg_pane_ParamLimits

0xdda3,	// (0x0002d43f) grid_graphic2_catg_pane

0xde41,	// (0x0002d4dd) popup_grid_graphic2_window_t1_ParamLimits

0xde41,	// (0x0002d4dd) popup_grid_graphic2_window_t1

0xde53,	// (0x0002d4ef) popup_grid_graphic2_window_t2_ParamLimits

0xde53,	// (0x0002d4ef) popup_grid_graphic2_window_t2

0x0001,

0xfd9b,	// (0x0002f437) popup_grid_graphic2_window_t_ParamLimits

0xfd9b,	// (0x0002f437) popup_grid_graphic2_window_t

0x0d43,	// (0x000203df) bg_button_pane_cp05_ParamLimits

0xdfc7,	// (0x0002d663) cell_graphic2_control_pane_g1_ParamLimits

0xe1ca,	// (0x0002d866) cell_graphic2_catg_pane_ParamLimits

0xe1ca,	// (0x0002d866) cell_graphic2_catg_pane

0x0b7a,	// (0x00020216) bg_button_pane_cp12

0xe1dc,	// (0x0002d878) cell_graphic2_catg_pane_g1

0xd6c7,	// (0x0002cd63) cell_tb_ext_pane_t1_ParamLimits

0x934d,	// (0x000289e9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x934d,	// (0x000289e9) vkb2_top_cell_right_narrow_pane

0x9365,	// (0x00028a01) vkb2_top_cell_right_wide_pane_ParamLimits

0x9365,	// (0x00028a01) vkb2_top_cell_right_wide_pane

0xf540,	// (0x0002ebdc) bg_vkb2_func_pane_ParamLimits

0xf540,	// (0x0002ebdc) bg_vkb2_func_pane

0x93d6,	// (0x00028a72) vkb2_top_cell_left_pane_g1_ParamLimits

0xf540,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf540,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp03

0x9434,	// (0x00028ad0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x838e,	// (0x00027a2a) bg_vkb2_func_pane_g1

0x8396,	// (0x00027a32) bg_vkb2_func_pane_g2

0x83a6,	// (0x00027a42) bg_vkb2_func_pane_g3

0x839e,	// (0x00027a3a) bg_vkb2_func_pane_g4

0x83ae,	// (0x00027a4a) bg_vkb2_func_pane_g5

0x83b6,	// (0x00027a52) bg_vkb2_func_pane_g6

0x83be,	// (0x00027a5a) bg_vkb2_func_pane_g7

0x83c6,	// (0x00027a62) bg_vkb2_func_pane_g8

0x8386,	// (0x00027a22) bg_vkb2_func_pane_g9

0x0008,

0xfded,	// (0x0002f489) bg_vkb2_func_pane_g

0xf540,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf540,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp01

0x93d6,	// (0x00028a72) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x93d6,	// (0x00028a72) vkb2_top_cell_right_wide_pane_g1

0xf540,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf540,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp02

0x9434,	// (0x00028ad0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9434,	// (0x00028ad0) vkb2_top_cell_right_narrow_pane_g1

0xd2e8,	// (0x0002c984) aid_touch_area_decrease_ParamLimits

0xd2e8,	// (0x0002c984) aid_touch_area_decrease

0xd30c,	// (0x0002c9a8) aid_touch_area_increase_ParamLimits

0xd30c,	// (0x0002c9a8) aid_touch_area_increase

0xd318,	// (0x0002c9b4) aid_touch_area_mute_ParamLimits

0xd318,	// (0x0002c9b4) aid_touch_area_mute

0xd33c,	// (0x0002c9d8) aid_touch_area_slider_ParamLimits

0xd33c,	// (0x0002c9d8) aid_touch_area_slider

0xd42c,	// (0x0002cac8) popup_slider_window_g4_ParamLimits

0xd42c,	// (0x0002cac8) popup_slider_window_g4

0xd438,	// (0x0002cad4) popup_slider_window_g5_ParamLimits

0xd438,	// (0x0002cad4) popup_slider_window_g5

0xd45a,	// (0x0002caf6) popup_slider_window_g6_ParamLimits

0xd45a,	// (0x0002caf6) popup_slider_window_g6

0xd49a,	// (0x0002cb36) popup_slider_window_t2_ParamLimits

0xd49a,	// (0x0002cb36) popup_slider_window_t2

0x0001,

0xfce9,	// (0x0002f385) popup_slider_window_t_ParamLimits

0xfce9,	// (0x0002f385) popup_slider_window_t

0xd4b2,	// (0x0002cb4e) slider_pane_ParamLimits

0xd4b2,	// (0x0002cb4e) slider_pane

0xe1e5,	// (0x0002d881) slider_pane_g1_ParamLimits

0xe1e5,	// (0x0002d881) slider_pane_g1

0xe1f9,	// (0x0002d895) slider_pane_g2_ParamLimits

0xe1f9,	// (0x0002d895) slider_pane_g2

0xe20f,	// (0x0002d8ab) slider_pane_g3_ParamLimits

0xe20f,	// (0x0002d8ab) slider_pane_g3

0x0003,

0xfe00,	// (0x0002f49c) slider_pane_g_ParamLimits

0xfe00,	// (0x0002f49c) slider_pane_g

0x7d4f,	// (0x000273eb) popup_tb_float_extension_window_ParamLimits

0x7d4f,	// (0x000273eb) popup_tb_float_extension_window

0xe23b,	// (0x0002d8d7) aid_size_cell_tb_float_ext

0x0b7a,	// (0x00020216) bg_popup_sub_window_cp28

0xe247,	// (0x0002d8e3) grid_tb_float_ext_pane

0xe253,	// (0x0002d8ef) cell_tb_float_ext_pane_ParamLimits

0xe253,	// (0x0002d8ef) cell_tb_float_ext_pane

0xe26f,	// (0x0002d90b) cell_tb_float_ext_pane_g1

0xe278,	// (0x0002d914) grid_highlight_pane_cp12

0x8c36,	// (0x000282d2) cell_last_hwr_side_pane_ParamLimits

0x8c36,	// (0x000282d2) cell_last_hwr_side_pane

0xbda9,	// (0x0002b445) cell_last_hwr_side_pane_g1

0xe281,	// (0x0002d91d) cell_last_hwr_side_pane_g2

0x0001,

0xfe09,	// (0x0002f4a5) cell_last_hwr_side_pane_g

0x92fc,	// (0x00028998) vkb2_area_bottom_space_btn_pane_ParamLimits

0x92fc,	// (0x00028998) vkb2_area_bottom_space_btn_pane

0xc024,	// (0x0002b6c0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdd15,	// (0x0002d3b1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x957e,	// (0x00028c1a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x959c,	// (0x00028c38) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x959c,	// (0x00028c38) vkb2_area_bottom_space_btn_pane_g1

0x95d6,	// (0x00028c72) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x95d6,	// (0x00028c72) vkb2_area_bottom_space_btn_pane_g2

0x960c,	// (0x00028ca8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x960c,	// (0x00028ca8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0e,	// (0x0002f4aa) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0e,	// (0x0002f4aa) vkb2_area_bottom_space_btn_pane_g

0x8ba6,	// (0x00028242) cel_fep_hwr_func_pane_ParamLimits

0x8ba6,	// (0x00028242) cel_fep_hwr_func_pane

0x8be2,	// (0x0002827e) cell_hwr_side_button_pane_ParamLimits

0x8be2,	// (0x0002827e) cell_hwr_side_button_pane

0xd6fb,	// (0x0002cd97) aid_area_touch_clock_ParamLimits

0x0d43,	// (0x000203df) bg_uniindi_top_pane_ParamLimits

0xd70f,	// (0x0002cdab) uniindi_top_pane_g1_ParamLimits

0xd725,	// (0x0002cdc1) uniindi_top_pane_g2_ParamLimits

0xd731,	// (0x0002cdcd) uniindi_top_pane_g3_ParamLimits

0xd742,	// (0x0002cdde) uniindi_top_pane_g4_ParamLimits

0xfd21,	// (0x0002f3bd) uniindi_top_pane_g_ParamLimits

0xd74f,	// (0x0002cdeb) uniindi_top_pane_t1_ParamLimits

0x0d43,	// (0x000203df) bg_vkb2_func_pane_cp01_ParamLimits

0x0d43,	// (0x000203df) bg_vkb2_func_pane_cp01

0xe28a,	// (0x0002d926) cel_fep_hwr_func_pane_g1_ParamLimits

0xe28a,	// (0x0002d926) cel_fep_hwr_func_pane_g1

0x0d43,	// (0x000203df) bg_vkb2_func_pane_cp02_ParamLimits

0x0d43,	// (0x000203df) bg_vkb2_func_pane_cp02

0xe28a,	// (0x0002d926) cell_hwr_side_button_pane_g1_ParamLimits

0xe28a,	// (0x0002d926) cell_hwr_side_button_pane_g1

0x81d7,	// (0x00027873) status_pane_g4_ParamLimits

0x81d7,	// (0x00027873) status_pane_g4

0x81f1,	// (0x0002788d) status_pane_t1

0xbb48,	// (0x0002b1e4) form2_midp_gauge_slider_cont_pane

0xbb50,	// (0x0002b1ec) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbb62,	// (0x0002b1fe) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbb74,	// (0x0002b210) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaed,	// (0x0002f189) form2_midp_gauge_slider_pane_t_ParamLimits

0xbb86,	// (0x0002b222) form2_midp_slider_pane_ParamLimits

0x8f5f,	// (0x000285fb) aid_size_cell_func_vkb2_ParamLimits

0x8f5f,	// (0x000285fb) aid_size_cell_func_vkb2

0xe227,	// (0x0002d8c3) slider_pane_g4_ParamLimits

0xe227,	// (0x0002d8c3) slider_pane_g4

0x9656,	// (0x00028cf2) form2_midp_gauge_slider_pane_t2_cp01

0x9664,	// (0x00028d00) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9664,	// (0x00028d00) form2_midp_gauge_slider_pane_t3_cp01

0x9681,	// (0x00028d1d) form2_midp_slider_pane_cp01

0x0b7a,	// (0x00020216) navi_smil_pane

0xe2c3,	// (0x0002d95f) navi_smil_pane_g1

0xe2cb,	// (0x0002d967) navi_smil_pane_t1

0xe298,	// (0x0002d934) form2_midp_slider_pane_g1

0xe2a1,	// (0x0002d93d) form2_midp_slider_pane_g2

0xe2a9,	// (0x0002d945) form2_midp_slider_pane_g3

0xe298,	// (0x0002d934) form2_midp_slider_pane_g4

0xe2b1,	// (0x0002d94d) form2_midp_slider_pane_g5

0x0004,

0xfe17,	// (0x0002f4b3) form2_midp_slider_pane_g

0x9646,	// (0x00028ce2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9646,	// (0x00028ce2) vkb2_area_bottom_space_btn_pane_g4

0x7fee,	// (0x0002768a) lc0_navi_pane_ParamLimits

0x7fee,	// (0x0002768a) lc0_navi_pane

0x806a,	// (0x00027706) lc0_stat_indi_pane_ParamLimits

0x806a,	// (0x00027706) lc0_stat_indi_pane

0x8081,	// (0x0002771d) ls0_title_pane_ParamLimits

0x8081,	// (0x0002771d) ls0_title_pane

0x2c43,	// (0x000222df) bg_popup_sub_pane_cp14_ParamLimits

0xd6e2,	// (0x0002cd7e) list_uniindi_pane_ParamLimits

0xd6ee,	// (0x0002cd8a) uniindi_top_pane_ParamLimits

0xd78d,	// (0x0002ce29) list_single_uniindi_pane_g1_ParamLimits

0xd7a0,	// (0x0002ce3c) list_single_uniindi_pane_t1_ParamLimits

0x968a,	// (0x00028d26) lc0_stat_clock_pane_ParamLimits

0x968a,	// (0x00028d26) lc0_stat_clock_pane

0xe2d9,	// (0x0002d975) lc0_stat_indi_pane_g1_ParamLimits

0xe2d9,	// (0x0002d975) lc0_stat_indi_pane_g1

0xe2e6,	// (0x0002d982) lc0_stat_indi_pane_g2_ParamLimits

0xe2e6,	// (0x0002d982) lc0_stat_indi_pane_g2

0x0001,

0xfe22,	// (0x0002f4be) lc0_stat_indi_pane_g_ParamLimits

0xfe22,	// (0x0002f4be) lc0_stat_indi_pane_g

0x9697,	// (0x00028d33) lc0_uni_indicator_pane_ParamLimits

0x9697,	// (0x00028d33) lc0_uni_indicator_pane

0xe2f3,	// (0x0002d98f) ls0_title_pane_g1_ParamLimits

0xe2f3,	// (0x0002d98f) ls0_title_pane_g1

0xe307,	// (0x0002d9a3) ls0_title_pane_t1_ParamLimits

0xe307,	// (0x0002d9a3) ls0_title_pane_t1

0x96a4,	// (0x00028d40) lc0_uni_indicator_pane_g1_ParamLimits

0x96a4,	// (0x00028d40) lc0_uni_indicator_pane_g1

0xe33d,	// (0x0002d9d9) lc0_stat_clock_pane_t1

0x0b7a,	// (0x00020216) main_ai5_pane

0xe34b,	// (0x0002d9e7) ai5_sk_pane_ParamLimits

0xe34b,	// (0x0002d9e7) ai5_sk_pane

0xe358,	// (0x0002d9f4) cell_ai5_widget_pane_ParamLimits

0xe358,	// (0x0002d9f4) cell_ai5_widget_pane

0xe8f4,	// (0x0002df90) aid_size_cell_widget_grid

0xe902,	// (0x0002df9e) bg_ai5_widget_pane_ParamLimits

0xe902,	// (0x0002df9e) bg_ai5_widget_pane

0xe976,	// (0x0002e012) cell_ai5_widget_pane_g2

0xe986,	// (0x0002e022) cell_ai5_widget_pane_g3

0xe99d,	// (0x0002e039) cell_ai5_widget_pane_g4

0xe9a9,	// (0x0002e045) cell_ai5_widget_pane_g5

0xe9b5,	// (0x0002e051) cell_ai5_widget_pane_g6

0xe9c1,	// (0x0002e05d) cell_ai5_widget_pane_g7

0xea09,	// (0x0002e0a5) cell_ai5_widget_pane_t1_ParamLimits

0xea09,	// (0x0002e0a5) cell_ai5_widget_pane_t1

0xea26,	// (0x0002e0c2) cell_ai5_widget_pane_t2_ParamLimits

0xea26,	// (0x0002e0c2) cell_ai5_widget_pane_t2

0xea3e,	// (0x0002e0da) cell_ai5_widget_pane_t3_ParamLimits

0xea3e,	// (0x0002e0da) cell_ai5_widget_pane_t3

0xea56,	// (0x0002e0f2) cell_ai5_widget_pane_t4_ParamLimits

0xea56,	// (0x0002e0f2) cell_ai5_widget_pane_t4

0xea73,	// (0x0002e10f) cell_ai5_widget_pane_t5_ParamLimits

0xea73,	// (0x0002e10f) cell_ai5_widget_pane_t5

0xea92,	// (0x0002e12e) cell_ai5_widget_pane_t6_ParamLimits

0xea92,	// (0x0002e12e) cell_ai5_widget_pane_t6

0xeaa4,	// (0x0002e140) cell_ai5_widget_pane_t7_ParamLimits

0xeaa4,	// (0x0002e140) cell_ai5_widget_pane_t7

0xeabd,	// (0x0002e159) cell_ai5_widget_pane_t8_ParamLimits

0xeabd,	// (0x0002e159) cell_ai5_widget_pane_t8

0x0009,

0xfe3c,	// (0x0002f4d8) cell_ai5_widget_pane_t_ParamLimits

0xfe3c,	// (0x0002f4d8) cell_ai5_widget_pane_t

0xeb11,	// (0x0002e1ad) grid_ai5_widget_pane

0x2c43,	// (0x000222df) highlight_cell_ai5_widget_pane_ParamLimits

0x2c43,	// (0x000222df) highlight_cell_ai5_widget_pane

0xeb25,	// (0x0002e1c1) ai5_sk_left_pane

0xeb2f,	// (0x0002e1cb) ai5_sk_middle_pane

0xeb39,	// (0x0002e1d5) ai5_sk_right_pane

0xeb43,	// (0x0002e1df) bg_ai5_widget_pane_g1_ParamLimits

0xeb43,	// (0x0002e1df) bg_ai5_widget_pane_g1

0xeb4f,	// (0x0002e1eb) bg_ai5_widget_pane_g2_ParamLimits

0xeb4f,	// (0x0002e1eb) bg_ai5_widget_pane_g2

0xeb5b,	// (0x0002e1f7) bg_ai5_widget_pane_g3_ParamLimits

0xeb5b,	// (0x0002e1f7) bg_ai5_widget_pane_g3

0xeb67,	// (0x0002e203) bg_ai5_widget_pane_g4_ParamLimits

0xeb67,	// (0x0002e203) bg_ai5_widget_pane_g4

0xeb73,	// (0x0002e20f) bg_ai5_widget_pane_g5_ParamLimits

0xeb73,	// (0x0002e20f) bg_ai5_widget_pane_g5

0xeb7f,	// (0x0002e21b) bg_ai5_widget_pane_g6_ParamLimits

0xeb7f,	// (0x0002e21b) bg_ai5_widget_pane_g6

0xeb8b,	// (0x0002e227) bg_ai5_widget_pane_g7_ParamLimits

0xeb8b,	// (0x0002e227) bg_ai5_widget_pane_g7

0xeb97,	// (0x0002e233) bg_ai5_widget_pane_g8_ParamLimits

0xeb97,	// (0x0002e233) bg_ai5_widget_pane_g8

0xeba3,	// (0x0002e23f) bg_ai5_widget_pane_g9_ParamLimits

0xeba3,	// (0x0002e23f) bg_ai5_widget_pane_g9

0x0008,

0xfe51,	// (0x0002f4ed) bg_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0002f4ed) bg_ai5_widget_pane_g

0xebd9,	// (0x0002e275) cell_shortcut_ai5_widget_pane_ParamLimits

0xebd9,	// (0x0002e275) cell_shortcut_ai5_widget_pane

0x72a4,	// (0x00026940) bg_cell_shortcut_ai5_widget_pane

0xebec,	// (0x0002e288) cell_grid_ai5_widget_pane_g1

0x72a4,	// (0x00026940) highlight_cell_shortcut_ai5_widget_pane

0x8396,	// (0x00027a32) ai5_sk_left_pane_g1

0xebf5,	// (0x0002e291) ai5_sk_left_pane_g2

0xebfd,	// (0x0002e299) ai5_sk_left_pane_g3

0xec05,	// (0x0002e2a1) ai5_sk_left_pane_g4

0x0003,

0xfe64,	// (0x0002f500) ai5_sk_left_pane_g

0xec0d,	// (0x0002e2a9) ai5_sk_left_pane_t1

0x838e,	// (0x00027a2a) ai5_sk_right_pane_g1

0xec1b,	// (0x0002e2b7) ai5_sk_right_pane_g2

0xec23,	// (0x0002e2bf) ai5_sk_right_pane_g3

0xec2b,	// (0x0002e2c7) ai5_sk_right_pane_g4

0x0003,

0xfe6d,	// (0x0002f509) ai5_sk_right_pane_g

0xec33,	// (0x0002e2cf) ai5_sk_right_pane_t1

0x838e,	// (0x00027a2a) ai5_sk_middle_pane_g1

0x8396,	// (0x00027a32) ai5_sk_middle_pane_g2

0x83ae,	// (0x00027a4a) ai5_sk_middle_pane_g3

0xec23,	// (0x0002e2bf) ai5_sk_middle_pane_g4

0xebfd,	// (0x0002e299) ai5_sk_middle_pane_g5

0xec41,	// (0x0002e2dd) ai5_sk_middle_pane_g6

0xec49,	// (0x0002e2e5) ai5_sk_middle_pane_g7

0x0006,

0xfe76,	// (0x0002f512) ai5_sk_middle_pane_g

0x7e70,	// (0x0002750c) aid_touch_area_size_lc0_ParamLimits

0x7e70,	// (0x0002750c) aid_touch_area_size_lc0

0x8d45,	// (0x000283e1) cell_hwr_candidate_pane_t1_ParamLimits

0x7e8e,	// (0x0002752a) aid_touch_navi_pane

0x8181,	// (0x0002781d) status_dt_navi_pane_ParamLimits

0x8181,	// (0x0002781d) status_dt_navi_pane

0x818e,	// (0x0002782a) status_dt_sta_pane_ParamLimits

0x818e,	// (0x0002782a) status_dt_sta_pane

0xec51,	// (0x0002e2ed) dt_sta_controll_pane

0xec5e,	// (0x0002e2fa) dt_sta_indi_pane

0xec6f,	// (0x0002e30b) dt_sta_title_pane

0x0d43,	// (0x000203df) bg_dt_sta_indi_pane_ParamLimits

0x0d43,	// (0x000203df) bg_dt_sta_indi_pane

0xec82,	// (0x0002e31e) dt_sta_battery_pane

0xec8a,	// (0x0002e326) dt_sta_indi_pane_g1

0xec93,	// (0x0002e32f) dt_sta_indi_pane_g2

0xec9c,	// (0x0002e338) dt_sta_indi_pane_g3

0x0002,

0xfe85,	// (0x0002f521) dt_sta_indi_pane_g

0xeca5,	// (0x0002e341) dt_sta_signal_pane

0x2c43,	// (0x000222df) bg_dt_sta_title_pane_ParamLimits

0x2c43,	// (0x000222df) bg_dt_sta_title_pane

0xecae,	// (0x0002e34a) dt_sta_title_pane_g1

0xecb6,	// (0x0002e352) dt_sta_title_pane_t1_ParamLimits

0xecb6,	// (0x0002e352) dt_sta_title_pane_t1

0x0b7a,	// (0x00020216) bg_dt_sta_control_pane

0xeccb,	// (0x0002e367) dt_sta_controll_pane_g1

0xecd4,	// (0x0002e370) bg_dt_sta_title_pane_g1

0xecdd,	// (0x0002e379) bg_dt_sta_title_pane_g2

0xece6,	// (0x0002e382) bg_dt_sta_title_pane_g3

0x0002,

0xfe8c,	// (0x0002f528) bg_dt_sta_title_pane_g

0xbda9,	// (0x0002b445) bg_dt_sta_indi_pane_g1

0xecef,	// (0x0002e38b) dt_sta_signal_pane_g1

0xecf7,	// (0x0002e393) dt_sta_signal_pane_g2

0x0001,

0xfe93,	// (0x0002f52f) dt_sta_signal_pane_g

0xecff,	// (0x0002e39b) dt_sta_battery_pane_g1

0xed08,	// (0x0002e3a4) dt_sta_battery_pane_t1

0xbda9,	// (0x0002b445) bg_dt_sta_control_pane_g1

0x3385,	// (0x00022a21) fep_china_uni_eep_pane

0x338d,	// (0x00022a29) fep_china_uni_entry_pane_ParamLimits

0x339d,	// (0x00022a39) popup_fep_china_uni_window_g1_ParamLimits

0x33ad,	// (0x00022a49) popup_fep_china_uni_window_g2_ParamLimits

0x33ad,	// (0x00022a49) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0002edb4) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0002edb4) popup_fep_china_uni_window_g

0xed17,	// (0x0002e3b3) fep_china_uni_eep_pane_g1

0xed1f,	// (0x0002e3bb) fep_china_uni_eep_pane_t1

0xe2ba,	// (0x0002d956) aid_touch_area_size_smil_player

0x7fe6,	// (0x00027682) lc0_clock_pane

0x81e5,	// (0x00027881) status_pane_g5_ParamLimits

0x81e5,	// (0x00027881) status_pane_g5

0x79d4,	// (0x00027070) popup_keymap_window

0x81a3,	// (0x0002783f) status_icon_pane

0xe986,	// (0x0002e022) cell_ai5_widget_pane_g3_ParamLimits

0xe99d,	// (0x0002e039) cell_ai5_widget_pane_g4_ParamLimits

0xe9a9,	// (0x0002e045) cell_ai5_widget_pane_g5_ParamLimits

0xe9cd,	// (0x0002e069) cell_ai5_widget_pane_g8_ParamLimits

0xe9cd,	// (0x0002e069) cell_ai5_widget_pane_g8

0xe9e1,	// (0x0002e07d) cell_ai5_widget_pane_g9_ParamLimits

0xe9e1,	// (0x0002e07d) cell_ai5_widget_pane_g9

0xe9f5,	// (0x0002e091) cell_ai5_widget_pane_g10_ParamLimits

0xe9f5,	// (0x0002e091) cell_ai5_widget_pane_g10

0xed2e,	// (0x0002e3ca) status_icon_pane_g1

0x0b7a,	// (0x00020216) bg_popup_sub_pane_cp13

0xed36,	// (0x0002e3d2) popup_keymap_window_t1

0x7689,	// (0x00026d25) control_pane_g6_ParamLimits

0x7689,	// (0x00026d25) control_pane_g6

0x7696,	// (0x00026d32) control_pane_g7_ParamLimits

0x7696,	// (0x00026d32) control_pane_g7

0x76a3,	// (0x00026d3f) control_pane_g8_ParamLimits

0x76a3,	// (0x00026d3f) control_pane_g8

0xec51,	// (0x0002e2ed) dt_sta_controll_pane_ParamLimits

0xec5e,	// (0x0002e2fa) dt_sta_indi_pane_ParamLimits

0xec6f,	// (0x0002e30b) dt_sta_title_pane_ParamLimits

0x1167,	// (0x00020803) aid_size_touch_scroll_bar_cale

0x65c1,	// (0x00025c5d) popup_discreet_window_ParamLimits

0x65c1,	// (0x00025c5d) popup_discreet_window

0x664f,	// (0x00025ceb) popup_sk_window

0x9db5,	// (0x00029451) bg_popup_sub_pane_cp28_ParamLimits

0x9db5,	// (0x00029451) bg_popup_sub_pane_cp28

0xed44,	// (0x0002e3e0) popup_discreet_window_g1_ParamLimits

0xed44,	// (0x0002e3e0) popup_discreet_window_g1

0xed64,	// (0x0002e400) popup_discreet_window_t1_ParamLimits

0xed64,	// (0x0002e400) popup_discreet_window_t1

0xed82,	// (0x0002e41e) popup_discreet_window_t2_ParamLimits

0xed82,	// (0x0002e41e) popup_discreet_window_t2

0x0002,

0xfe98,	// (0x0002f534) popup_discreet_window_t_ParamLimits

0xfe98,	// (0x0002f534) popup_discreet_window_t

0x96b7,	// (0x00028d53) popup_sk_window_g1

0x96c1,	// (0x00028d5d) popup_sk_window_g2

0x0001,

0xfe9f,	// (0x0002f53b) popup_sk_window_g

0x96cb,	// (0x00028d67) popup_sk_window_t1

0x96db,	// (0x00028d77) popup_sk_window_t1_copy1

0xe976,	// (0x0002e012) cell_ai5_widget_pane_g2_ParamLimits

0xeacf,	// (0x0002e16b) cell_ai5_widget_pane_t9_ParamLimits

0xeacf,	// (0x0002e16b) cell_ai5_widget_pane_t9

0x0b7a,	// (0x00020216) main_fep_fshwr2_pane

0x96e9,	// (0x00028d85) aid_fshwr2_btn_pane

0x96f5,	// (0x00028d91) aid_fshwr2_syb_pane

0x9701,	// (0x00028d9d) aid_fshwr2_txt_pane

0x970d,	// (0x00028da9) fshwr2_func_candi_pane

0x9720,	// (0x00028dbc) fshwr2_hwr_syb_pane

0x972e,	// (0x00028dca) fshwr2_icf_pane

0x0b7a,	// (0x00020216) fshwr2_icf_bg_pane

0x975d,	// (0x00028df9) fshwr2_icf_pane_t1_ParamLimits

0x975d,	// (0x00028df9) fshwr2_icf_pane_t1

0x3303,	// (0x0002299f) fshwr2_func_candi_pane_g1

0xedd4,	// (0x0002e470) fshwr2_func_candi_row_pane_ParamLimits

0xedd4,	// (0x0002e470) fshwr2_func_candi_row_pane

0x9775,	// (0x00028e11) cell_fshwr2_syb_pane_ParamLimits

0x9775,	// (0x00028e11) cell_fshwr2_syb_pane

0xc024,	// (0x0002b6c0) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc024,	// (0x0002b6c0) fshwr2_hwr_syb_pane_g1

0x0b7a,	// (0x00020216) bg_popup_call_pane_cp01

0x978b,	// (0x00028e27) fshwr2_func_candi_cell_pane_ParamLimits

0x978b,	// (0x00028e27) fshwr2_func_candi_cell_pane

0xede4,	// (0x0002e480) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xede4,	// (0x0002e480) fshwr2_func_candi_cell_bg_pane

0x97bf,	// (0x00028e5b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x97bf,	// (0x00028e5b) fshwr2_func_candi_cell_pane_g1

0x97df,	// (0x00028e7b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x97df,	// (0x00028e7b) fshwr2_func_candi_cell_pane_t1

0x0b7a,	// (0x00020216) bg_button_pane_cp08

0xedf0,	// (0x0002e48c) cell_fshwr2_syb_bg_pane

0x97f2,	// (0x00028e8e) cell_fshwr2_syb_bg_pane_g1

0x97fa,	// (0x00028e96) cell_fshwr2_syb_bg_pane_t1

0x2c43,	// (0x000222df) main_tmo_pane

0xa8d9,	// (0x00029f75) uni_indicator_pane_g1_ParamLimits

0xa8ef,	// (0x00029f8b) uni_indicator_pane_g2_ParamLimits

0xa905,	// (0x00029fa1) uni_indicator_pane_g3_ParamLimits

0xa91a,	// (0x00029fb6) uni_indicator_pane_g4_ParamLimits

0xa91a,	// (0x00029fb6) uni_indicator_pane_g4

0xa92e,	// (0x00029fca) uni_indicator_pane_g5_ParamLimits

0xa92e,	// (0x00029fca) uni_indicator_pane_g5

0xa92e,	// (0x00029fca) uni_indicator_pane_g6_ParamLimits

0xa92e,	// (0x00029fca) uni_indicator_pane_g6

0xf91c,	// (0x0002efb8) uni_indicator_pane_g_ParamLimits

0xd2b8,	// (0x0002c954) popup_tmo_note_window_ParamLimits

0xd2b8,	// (0x0002c954) popup_tmo_note_window

0x2c43,	// (0x000222df) fshwr2_bg_pane

0x97d0,	// (0x00028e6c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x97d0,	// (0x00028e6c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea4,	// (0x0002f540) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea4,	// (0x0002f540) fshwr2_func_candi_cell_pane_g

0xbda9,	// (0x0002b445) bg_popup_window_pane_cp01

0x9809,	// (0x00028ea5) bg_popup_window_pane_g1_cp01

0xedf8,	// (0x0002e494) bg_popup_window_pane_cp22_ParamLimits

0xedf8,	// (0x0002e494) bg_popup_window_pane_cp22

0xee06,	// (0x0002e4a2) listscroll_tmo_link_pane_ParamLimits

0xee06,	// (0x0002e4a2) listscroll_tmo_link_pane

0xee46,	// (0x0002e4e2) popup_tmo_note_window_g1_ParamLimits

0xee46,	// (0x0002e4e2) popup_tmo_note_window_g1

0xee53,	// (0x0002e4ef) tmo_note_info_pane_ParamLimits

0xee53,	// (0x0002e4ef) tmo_note_info_pane

0xee6d,	// (0x0002e509) list_tmo_note_info_pane_g1_ParamLimits

0xee6d,	// (0x0002e509) list_tmo_note_info_pane_g1

0xee84,	// (0x0002e520) list_tmo_note_info_pane_g2_ParamLimits

0xee84,	// (0x0002e520) list_tmo_note_info_pane_g2

0x0001,

0xfea9,	// (0x0002f545) list_tmo_note_info_pane_g_ParamLimits

0xfea9,	// (0x0002f545) list_tmo_note_info_pane_g

0xeea0,	// (0x0002e53c) list_tmo_note_info_text_pane_ParamLimits

0xeea0,	// (0x0002e53c) list_tmo_note_info_text_pane

0xef25,	// (0x0002e5c1) list_tmo_link_pane

0xef32,	// (0x0002e5ce) scroll_pane_cp20

0xef3f,	// (0x0002e5db) list_single_tmo_link_pane_ParamLimits

0xef3f,	// (0x0002e5db) list_single_tmo_link_pane

0xef4f,	// (0x0002e5eb) list_single_tmo_link_pane_t1

0xef5d,	// (0x0002e5f9) list_tmo_note_info_text_pane_t1_ParamLimits

0xef5d,	// (0x0002e5f9) list_tmo_note_info_text_pane_t1

0x6aca,	// (0x00026166) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6aca,	// (0x00026166) aid_size_touch_scroll_bar_cp01

0x57f3,	// (0x00024e8f) aid_size_touch_slider_marker

0x6637,	// (0x00025cd3) popup_settings_window_ParamLimits

0x6637,	// (0x00025cd3) popup_settings_window

0x599e,	// (0x0002503a) popup_candi_list_indi_window

0x7e8e,	// (0x0002752a) aid_touch_navi_pane_ParamLimits

0x8eb6,	// (0x00028552) rs_clock_indi_pane

0x8ebf,	// (0x0002855b) sctrl_sk_bottom_pane_ParamLimits

0x8ed0,	// (0x0002856c) sctrl_sk_top_pane_ParamLimits

0x8fb9,	// (0x00028655) popup_fep_tooltip_window

0xe8f4,	// (0x0002df90) aid_size_cell_widget_grid_ParamLimits

0xe961,	// (0x0002dffd) cell_ai5_widget_pane_g1_ParamLimits

0xe961,	// (0x0002dffd) cell_ai5_widget_pane_g1

0xe9b5,	// (0x0002e051) cell_ai5_widget_pane_g6_ParamLimits

0xe9c1,	// (0x0002e05d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe27,	// (0x0002f4c3) cell_ai5_widget_pane_g_ParamLimits

0xfe27,	// (0x0002f4c3) cell_ai5_widget_pane_g

0xeaf3,	// (0x0002e18f) cell_ai5_widget_pane_t10_ParamLimits

0xeaf3,	// (0x0002e18f) cell_ai5_widget_pane_t10

0xeb11,	// (0x0002e1ad) grid_ai5_widget_pane_ParamLimits

0xebaf,	// (0x0002e24b) cell_contacts_ai5_widget_pane_ParamLimits

0xebaf,	// (0x0002e24b) cell_contacts_ai5_widget_pane

0xed97,	// (0x0002e433) popup_discreet_window_t3_ParamLimits

0xed97,	// (0x0002e433) popup_discreet_window_t3

0x9745,	// (0x00028de1) popup_fshwr2_char_preview_window_ParamLimits

0x9745,	// (0x00028de1) popup_fshwr2_char_preview_window

0xeebe,	// (0x0002e55a) tmo_note_info_pane_t1

0xeed3,	// (0x0002e56f) tmo_note_info_pane_t2

0xeeec,	// (0x0002e588) tmo_note_info_pane_t3

0xef01,	// (0x0002e59d) tmo_note_info_pane_t4

0xef13,	// (0x0002e5af) tmo_note_info_pane_t5

0x0004,

0xfeae,	// (0x0002f54a) tmo_note_info_pane_t

0xef25,	// (0x0002e5c1) list_tmo_link_pane_ParamLimits

0xef32,	// (0x0002e5ce) scroll_pane_cp20_ParamLimits

0x0b7a,	// (0x00020216) bg_popup_fep_char_preview_window_cp01

0xef76,	// (0x0002e612) popup_fshwr2_char_preview_window_t1

0xef84,	// (0x0002e620) popup_candi_list_indi_window_g1

0xef8d,	// (0x0002e629) bg_cell_contacts_ai5_widget_pane

0xef99,	// (0x0002e635) cell_contacts_ai5_widget_pane_g1

0xefae,	// (0x0002e64a) cell_contacts_ai5_widget_pane_g2

0xefba,	// (0x0002e656) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb9,	// (0x0002f555) cell_contacts_ai5_widget_pane_g

0xefc6,	// (0x0002e662) cell_contacts_ai5_widget_pane_t1

0x2c43,	// (0x000222df) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf03d,	// (0x0002e6d9) settings_container_pane

0x72a4,	// (0x00026940) listscroll_set_pane_copy1

0xb4ca,	// (0x0002ab66) scroll_pane_cp121_copy1

0xf049,	// (0x0002e6e5) set_content_pane_copy1

0xf051,	// (0x0002e6ed) aid_height_set_list_copy1_ParamLimits

0xf051,	// (0x0002e6ed) aid_height_set_list_copy1

0xab2e,	// (0x0002a1ca) aid_size_parent_copy1_ParamLimits

0xab2e,	// (0x0002a1ca) aid_size_parent_copy1

0xf05d,	// (0x0002e6f9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf05d,	// (0x0002e6f9) button_value_adjust_pane_cp6_copy1

0x7815,	// (0x00026eb1) list_highlight_pane_cp2_copy1_ParamLimits

0x7815,	// (0x00026eb1) list_highlight_pane_cp2_copy1

0xf071,	// (0x0002e70d) list_set_pane_copy1_ParamLimits

0xf071,	// (0x0002e70d) list_set_pane_copy1

0xefd8,	// (0x0002e674) main_pane_set_t1_copy1_ParamLimits

0xefd8,	// (0x0002e674) main_pane_set_t1_copy1

0xf012,	// (0x0002e6ae) main_pane_set_t2_copy1_ParamLimits

0xf012,	// (0x0002e6ae) main_pane_set_t2_copy1

0xf138,	// (0x0002e7d4) main_pane_set_t3_copy1

0xf146,	// (0x0002e7e2) main_pane_set_t4_copy1

0xf031,	// (0x0002e6cd) set_content_pane_g1_copy1_ParamLimits

0xf031,	// (0x0002e6cd) set_content_pane_g1_copy1

0xf154,	// (0x0002e7f0) setting_code_pane_copy1

0xf15c,	// (0x0002e7f8) setting_slider_graphic_pane_copy1

0xf15c,	// (0x0002e7f8) setting_slider_pane_copy1

0xf15c,	// (0x0002e7f8) setting_text_pane_copy1

0xf15c,	// (0x0002e7f8) setting_volume_pane_copy1

0xf154,	// (0x0002e7f0) settings_code_pane_cp2_copy1

0xf164,	// (0x0002e800) settings_code_pane_cp_copy1_ParamLimits

0xf164,	// (0x0002e800) settings_code_pane_cp_copy1

0x9812,	// (0x00028eae) volume_set_pane_copy1

0xf178,	// (0x0002e814) volume_set_pane_g10_copy1

0xf184,	// (0x0002e820) volume_set_pane_g1_copy1

0xf18e,	// (0x0002e82a) volume_set_pane_g2_copy1

0xf198,	// (0x0002e834) volume_set_pane_g3_copy1

0xf1a2,	// (0x0002e83e) volume_set_pane_g4_copy1

0xf1ac,	// (0x0002e848) volume_set_pane_g5_copy1

0xf1b6,	// (0x0002e852) volume_set_pane_g6_copy1

0xf1c0,	// (0x0002e85c) volume_set_pane_g7_copy1

0xf1ca,	// (0x0002e866) volume_set_pane_g8_copy1

0xf1d4,	// (0x0002e870) volume_set_pane_g9_copy1

0x0bf6,	// (0x00020292) bg_set_opt_pane_cp_copy1_ParamLimits

0x0bf6,	// (0x00020292) bg_set_opt_pane_cp_copy1

0x981e,	// (0x00028eba) setting_slider_pane_t1_copy1_ParamLimits

0x981e,	// (0x00028eba) setting_slider_pane_t1_copy1

0x983c,	// (0x00028ed8) setting_slider_pane_t2_copy1_ParamLimits

0x983c,	// (0x00028ed8) setting_slider_pane_t2_copy1

0x9856,	// (0x00028ef2) setting_slider_pane_t3_copy1_ParamLimits

0x9856,	// (0x00028ef2) setting_slider_pane_t3_copy1

0x986e,	// (0x00028f0a) slider_set_pane_copy1_ParamLimits

0x986e,	// (0x00028f0a) slider_set_pane_copy1

0x2d0c,	// (0x000223a8) set_opt_bg_pane_g1_copy2

0x2d14,	// (0x000223b0) set_opt_bg_pane_g2_copy2

0xf1de,	// (0x0002e87a) set_opt_bg_pane_g3_copy2

0x2d24,	// (0x000223c0) set_opt_bg_pane_g4_copy2

0x2d2c,	// (0x000223c8) set_opt_bg_pane_g5_copy2

0x2d34,	// (0x000223d0) set_opt_bg_pane_g6_copy2

0xf1e8,	// (0x0002e884) set_opt_bg_pane_g7_copy2

0xf1f2,	// (0x0002e88e) set_opt_bg_pane_g8_copy2

0xf1fc,	// (0x0002e898) set_opt_bg_pane_g9_copy2

0x9884,	// (0x00028f20) aid_size_touch_slider_mark_copy1_ParamLimits

0x9884,	// (0x00028f20) aid_size_touch_slider_mark_copy1

0xf206,	// (0x0002e8a2) slider_set_pane_g1_copy1

0x9898,	// (0x00028f34) slider_set_pane_g2_copy1

0x898b,	// (0x00028027) slider_set_pane_g3_copy1_ParamLimits

0x898b,	// (0x00028027) slider_set_pane_g3_copy1

0x899f,	// (0x0002803b) slider_set_pane_g4_copy1_ParamLimits

0x899f,	// (0x0002803b) slider_set_pane_g4_copy1

0x89b7,	// (0x00028053) slider_set_pane_g5_copy1_ParamLimits

0x89b7,	// (0x00028053) slider_set_pane_g5_copy1

0x898b,	// (0x00028027) slider_set_pane_g6_copy1_ParamLimits

0x898b,	// (0x00028027) slider_set_pane_g6_copy1

0x98a0,	// (0x00028f3c) slider_set_pane_g7_copy1_ParamLimits

0x98a0,	// (0x00028f3c) slider_set_pane_g7_copy1

0x0b8e,	// (0x0002022a) bg_set_opt_pane_cp2_copy1

0xf20f,	// (0x0002e8ab) setting_slider_graphic_pane_g1_copy1

0xf218,	// (0x0002e8b4) setting_slider_graphic_pane_t1_copy1

0xf228,	// (0x0002e8c4) setting_slider_graphic_pane_t2_copy1

0xf238,	// (0x0002e8d4) slider_set_pane_cp_copy1

0xf248,	// (0x0002e8e4) input_focus_pane_cp1_copy1

0xf251,	// (0x0002e8ed) list_set_text_pane_copy1

0xf259,	// (0x0002e8f5) setting_text_pane_g1_copy1

0x6318,	// (0x000259b4) set_text_pane_t1_copy1

0xf248,	// (0x0002e8e4) input_focus_pane_cp2_copy1

0xf259,	// (0x0002e8f5) setting_code_pane_g1_copy1

0xf262,	// (0x0002e8fe) setting_code_pane_t1_copy1

0xf270,	// (0x0002e90c) list_set_graphic_pane_copy1

0x0b8e,	// (0x0002022a) bg_set_opt_pane_cp4_copy1

0x711a,	// (0x000267b6) list_set_graphic_pane_g1_copy1_ParamLimits

0x711a,	// (0x000267b6) list_set_graphic_pane_g1_copy1

0xf282,	// (0x0002e91e) list_set_graphic_pane_g2_copy1

0x7132,	// (0x000267ce) list_set_graphic_pane_t1_copy1_ParamLimits

0x7132,	// (0x000267ce) list_set_graphic_pane_t1_copy1

0xbda9,	// (0x0002b445) rs_clock_indi_pane_g1

0xf28a,	// (0x0002e926) rs_clock_indi_pane_t1

0xf298,	// (0x0002e934) rs_indi_pane

0xf2a0,	// (0x0002e93c) rs_indi_pane_g1

0xf2a9,	// (0x0002e945) rs_indi_pane_g2

0xf2b2,	// (0x0002e94e) rs_indi_pane_g3

0x0002,

0xfec0,	// (0x0002f55c) rs_indi_pane_g

0x72a4,	// (0x00026940) bg_popup_preview_window_pane_cp03

0xf2bb,	// (0x0002e957) popup_fep_tooltip_window_t1

0xca60,	// (0x0002c0fc) popup_note2_window_g2_ParamLimits

0xca60,	// (0x0002c0fc) popup_note2_window_g2

0x0001,

0xfc59,	// (0x0002f2f5) popup_note2_window_g_ParamLimits

0xfc59,	// (0x0002f2f5) popup_note2_window_g

0xcf68,	// (0x0002c604) bg_popup_sub_pane_cp11_ParamLimits

0xcf75,	// (0x0002c611) cell_ai3_links_pane_g1_ParamLimits

0xcf8c,	// (0x0002c628) cell_ai3_links_pane_t1

0x6318,	// (0x000259b4) set_text_pane_t1_copy1_ParamLimits

0x71b1,	// (0x0002684d) cell_graphic_popup_pane_cp2_ParamLimits

0x71b1,	// (0x0002684d) cell_graphic_popup_pane_cp2

0xf2c9,	// (0x0002e965) cell_graphic_popup_pane_g1_cp2

0x0f7a,	// (0x00020616) cell_graphic_popup_pane_g2_cp2

0xf2d1,	// (0x0002e96d) cell_graphic_popup_pane_g3_cp2

0xf2d9,	// (0x0002e975) cell_graphic_popup_pane_t2_cp2

0x0f8b,	// (0x00020627) grid_highlight_pane_cp3_cp2

0x3125,	// (0x000227c1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2c43,	// (0x000222df) main_tmo_pane_ParamLimits

0xd2ac,	// (0x0002c948) popup_tmo_big_image_note_window

0xe950,	// (0x0002dfec) cell_ai5_widget_list_pane

0xe958,	// (0x0002dff4) cell_ai5_widget_lrg_icon_pane

0xeebe,	// (0x0002e55a) tmo_note_info_pane_t1_ParamLimits

0xeed3,	// (0x0002e56f) tmo_note_info_pane_t2_ParamLimits

0xeeec,	// (0x0002e588) tmo_note_info_pane_t3_ParamLimits

0xef01,	// (0x0002e59d) tmo_note_info_pane_t4_ParamLimits

0xef13,	// (0x0002e5af) tmo_note_info_pane_t5_ParamLimits

0xfeae,	// (0x0002f54a) tmo_note_info_pane_t_ParamLimits

0xf03d,	// (0x0002e6d9) settings_container_pane_ParamLimits

0xf240,	// (0x0002e8dc) indicator_popup_pane_cp5

0xf240,	// (0x0002e8dc) indicator_popup_pane_cp6

0xf270,	// (0x0002e90c) list_set_graphic_pane_copy1_ParamLimits

0x0b7a,	// (0x00020216) bg_popup_window_pane_cp23

0xf2e7,	// (0x0002e983) popup_tmo_big_image_note_window_g1

0xf2f3,	// (0x0002e98f) popup_tmo_big_image_note_window_t1

0xf303,	// (0x0002e99f) popup_tmo_big_image_note_window_t2

0xf313,	// (0x0002e9af) popup_tmo_big_image_note_window_t3

0x0002,

0xfec7,	// (0x0002f563) popup_tmo_big_image_note_window_t

0xbda9,	// (0x0002b445) cell_ai5_widget_lrg_icon_pane_g1

0xf323,	// (0x0002e9bf) cell_ai5_widget_lrg_icon_pane_t1

0xf331,	// (0x0002e9cd) cell_ai5_widget_list_row_pane_ParamLimits

0xf331,	// (0x0002e9cd) cell_ai5_widget_list_row_pane

0xf349,	// (0x0002e9e5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf349,	// (0x0002e9e5) cell_ai5_widget_list_row_pane_g1

0xf356,	// (0x0002e9f2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf356,	// (0x0002e9f2) cell_ai5_widget_list_row_pane_t1

0xf381,	// (0x0002ea1d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf381,	// (0x0002ea1d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfece,	// (0x0002f56a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfece,	// (0x0002f56a) cell_ai5_widget_list_row_pane_t

0x0b7a,	// (0x00020216) main_fep_vtchi_ss_pane

0x98d2,	// (0x00028f6e) popup_fep_char_pre_window

0x98da,	// (0x00028f76) popup_fep_ituss_window

0x98fb,	// (0x00028f97) popup_fep_vkbss_window

0xf3a9,	// (0x0002ea45) grid_vkbss_keypad_pane_ParamLimits

0xf3a9,	// (0x0002ea45) grid_vkbss_keypad_pane

0xf3b9,	// (0x0002ea55) ituss_keypad_pane

0x9929,	// (0x00028fc5) aid_vkbss_key_offset_ParamLimits

0x9929,	// (0x00028fc5) aid_vkbss_key_offset

0x9935,	// (0x00028fd1) cell_vkbss_key_pane_ParamLimits

0x9935,	// (0x00028fd1) cell_vkbss_key_pane

0xf3c8,	// (0x0002ea64) bg_cell_vkbss_key_g1_ParamLimits

0xf3c8,	// (0x0002ea64) bg_cell_vkbss_key_g1

0xf3d4,	// (0x0002ea70) cell_vkbss_key_3p_pane_ParamLimits

0xf3d4,	// (0x0002ea70) cell_vkbss_key_3p_pane

0xf3ee,	// (0x0002ea8a) cell_vkbss_key_g1_ParamLimits

0xf3ee,	// (0x0002ea8a) cell_vkbss_key_g1

0xf408,	// (0x0002eaa4) cell_vkbss_key_t1_ParamLimits

0xf408,	// (0x0002eaa4) cell_vkbss_key_t1

0x994b,	// (0x00028fe7) cell_ituss_key_pane_ParamLimits

0x994b,	// (0x00028fe7) cell_ituss_key_pane

0xf433,	// (0x0002eacf) bg_cell_ituss_key_g1_ParamLimits

0xf433,	// (0x0002eacf) bg_cell_ituss_key_g1

0xf43f,	// (0x0002eadb) cell_ituss_key_pane_g1_ParamLimits

0xf43f,	// (0x0002eadb) cell_ituss_key_pane_g1

0x995c,	// (0x00028ff8) cell_ituss_key_pane_g2_ParamLimits

0x995c,	// (0x00028ff8) cell_ituss_key_pane_g2

0x0002,

0xfed5,	// (0x0002f571) cell_ituss_key_pane_g_ParamLimits

0xfed5,	// (0x0002f571) cell_ituss_key_pane_g

0x9988,	// (0x00029024) cell_ituss_key_t1_ParamLimits

0x9988,	// (0x00029024) cell_ituss_key_t1

0x99c2,	// (0x0002905e) cell_ituss_key_t2_ParamLimits

0x99c2,	// (0x0002905e) cell_ituss_key_t2

0x99f3,	// (0x0002908f) cell_ituss_key_t3_ParamLimits

0x99f3,	// (0x0002908f) cell_ituss_key_t3

0x99c2,	// (0x0002905e) cell_ituss_key_t4_ParamLimits

0x99c2,	// (0x0002905e) cell_ituss_key_t4

0x0004,

0xfedc,	// (0x0002f578) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x0002f578) cell_ituss_key_t

0xf465,	// (0x0002eb01) cell_vkbss_key_3p_pane_g1

0xf46d,	// (0x0002eb09) cell_vkbss_key_3p_pane_g2

0xf475,	// (0x0002eb11) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0002f583) cell_vkbss_key_3p_pane_g

0x0b7a,	// (0x00020216) bg_popup_fep_char_preview_window_cp02

0x9a36,	// (0x000290d2) popup_fep_char_pre_window_t1

0xe8ea,	// (0x0002df86) main_ai5_sk_pane

0xef8d,	// (0x0002e629) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef99,	// (0x0002e635) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xefae,	// (0x0002e64a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xefba,	// (0x0002e656) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb9,	// (0x0002f555) cell_contacts_ai5_widget_pane_g_ParamLimits

0xefc6,	// (0x0002e662) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2c43,	// (0x000222df) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf47d,	// (0x0002eb19) main_ai5_sk_pane_g1

0x9bed,	// (0x00029289) popup_query_code_window_g1

0x98f0,	// (0x00028f8c) popup_fep_vkb_icf_pane

0x9906,	// (0x00028fa2) popup_fep_vtchi_icf_pane

0xf486,	// (0x0002eb22) bg_icf_pane

0xf492,	// (0x0002eb2e) list_vkb_icf_pane

0xf49e,	// (0x0002eb3a) bg_icf_pane_cp01

0xf4aa,	// (0x0002eb46) vtchi_icf_list_pane

0xf4bb,	// (0x0002eb57) list_vkb_icf_pane_t1_ParamLimits

0xf4bb,	// (0x0002eb57) list_vkb_icf_pane_t1

0xf4d1,	// (0x0002eb6d) vtchi_icf_list_pane_t1_ParamLimits

0xf4d1,	// (0x0002eb6d) vtchi_icf_list_pane_t1

0x98da,	// (0x00028f76) popup_fep_ituss_window_ParamLimits

0x9906,	// (0x00028fa2) popup_fep_vtchi_icf_pane_ParamLimits

0xf3b9,	// (0x0002ea55) ituss_keypad_pane_ParamLimits

0x991d,	// (0x00028fb9) ituss_sks_pane

0xf486,	// (0x0002eb22) bg_icf_pane_ParamLimits

0x98b6,	// (0x00028f52) icf_edit_indi_pane_ParamLimits

0x98b6,	// (0x00028f52) icf_edit_indi_pane

0xf492,	// (0x0002eb2e) list_vkb_icf_pane_ParamLimits

0xf49e,	// (0x0002eb3a) bg_icf_pane_cp01_ParamLimits

0x98c5,	// (0x00028f61) icf_edit_indi_pane_cp01_ParamLimits

0x98c5,	// (0x00028f61) icf_edit_indi_pane_cp01

0xf4b2,	// (0x0002eb4e) vtchi_query_pane

0xc024,	// (0x0002b6c0) icf_edit_indi_pane_g1_ParamLimits

0xc024,	// (0x0002b6c0) icf_edit_indi_pane_g1

0x9a58,	// (0x000290f4) icf_edit_indi_pane_g2_ParamLimits

0x9a58,	// (0x000290f4) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0002f59b) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0002f59b) icf_edit_indi_pane_g

0x9a67,	// (0x00029103) icf_edit_indi_pane_t1

0xf4e9,	// (0x0002eb85) bg_input_focus_pane_cp042

0x115e,	// (0x000207fa) vtchi_button_pane

0xf4f2,	// (0x0002eb8e) vtchi_query_pane_t1

0xf500,	// (0x0002eb9c) vtchi_query_pane_t2

0xf50e,	// (0x0002ebaa) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0002f58a) vtchi_query_pane_t

0x0b7a,	// (0x00020216) bg_button_pane_cp13

0xf51c,	// (0x0002ebb8) vtchi_button_pane_g1

0x9a45,	// (0x000290e1) ituss_sks_pane_g1

0x9a50,	// (0x000290ec) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0002f591) ituss_sks_pane_g

0xf524,	// (0x0002ebc0) ituss_sks_pane_t1

0xf532,	// (0x0002ebce) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0002f596) ituss_sks_pane_t

0xb859,	// (0x0002aef5) indicator_nsta_pane_cp_g1

0xb862,	// (0x0002aefe) indicator_nsta_pane_cp_g2

0xb86a,	// (0x0002af06) indicator_nsta_pane_cp_g3

0xb872,	// (0x0002af0e) indicator_nsta_pane_cp_g4

0xb87a,	// (0x0002af16) indicator_nsta_pane_cp_g5

0xb882,	// (0x0002af1e) indicator_nsta_pane_cp_g6

0x0005,

0xfaa3,	// (0x0002f13f) indicator_nsta_pane_cp_g

0xdfb4,	// (0x0002d650) cell_graphic2_pane_t2_ParamLimits

0xdfb4,	// (0x0002d650) cell_graphic2_pane_t2

0x0001,

0xfdb0,	// (0x0002f44c) cell_graphic2_pane_t_ParamLimits

0xfdb0,	// (0x0002f44c) cell_graphic2_pane_t

0xdfe1,	// (0x0002d67d) cell_graphic2_control_pane_t1

0x6ef0,	// (0x0002658c) signal_pane_g3_ParamLimits

0x6ef0,	// (0x0002658c) signal_pane_g3

0x6f02,	// (0x0002659e) signal_pane_g4_ParamLimits

0x6f02,	// (0x0002659e) signal_pane_g4

0xf393,	// (0x0002ea2f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf393,	// (0x0002ea2f) cell_ai5_widget_list_row_pane_t3

0xf453,	// (0x0002eaef) cell_ituss_key_pane_t1_ParamLimits

0xf453,	// (0x0002eaef) cell_ituss_key_pane_t1

0x8590,	// (0x00027c2c) form_field_data_wide_pane_vc_t2_ParamLimits

0x8590,	// (0x00027c2c) form_field_data_wide_pane_vc_t2

0x85a4,	// (0x00027c40) form_field_data_wide_pane_vc_t3_ParamLimits

0x85a4,	// (0x00027c40) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0002eea0) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0002eea0) form_field_data_wide_pane_vc_t

0xb50a,	// (0x0002aba6) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb50a,	// (0x0002aba6) form_field_slider_wide_pane_vc_t3

0xb5e0,	// (0x0002ac7c) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb5e0,	// (0x0002ac7c) form_field_popup_wide_pane_vc_t2

0xb5f7,	// (0x0002ac93) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb5f7,	// (0x0002ac93) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa92,	// (0x0002f12e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x0002f12e) form_field_popup_wide_pane_vc_t

0x96e9,	// (0x00028d85) aid_fshwr2_btn_pane_ParamLimits

0x96f5,	// (0x00028d91) aid_fshwr2_syb_pane_ParamLimits

0x9701,	// (0x00028d9d) aid_fshwr2_txt_pane_ParamLimits

0x2c43,	// (0x000222df) fshwr2_bg_pane_ParamLimits

0x970d,	// (0x00028da9) fshwr2_func_candi_pane_ParamLimits

0x9720,	// (0x00028dbc) fshwr2_hwr_syb_pane_ParamLimits

0x972e,	// (0x00028dca) fshwr2_icf_pane_ParamLimits

0x5ee5,	// (0x00025581) list_double_graphic_pane_vc_g4_ParamLimits

0x5ee5,	// (0x00025581) list_double_graphic_pane_vc_g4

0x997c,	// (0x00029018) cell_ituss_key_pane_g3_ParamLimits

0x997c,	// (0x00029018) cell_ituss_key_pane_g3

0x9a24,	// (0x000290c0) cell_ituss_key_t5_ParamLimits

0x9a24,	// (0x000290c0) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small

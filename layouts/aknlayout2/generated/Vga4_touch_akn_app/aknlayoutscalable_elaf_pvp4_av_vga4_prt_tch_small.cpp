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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001eeae };

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
0x5f05,	// (0x00024db3) Screen

0x5f11,	// (0x00024dbf) application_window_ParamLimits

0x5f11,	// (0x00024dbf) application_window

0x0f6b,	// (0x0001fe19) screen_g1

0x5f6d,	// (0x00024e1b) area_bottom_pane_ParamLimits

0x5f6d,	// (0x00024e1b) area_bottom_pane

0x602d,	// (0x00024edb) area_top_pane_ParamLimits

0x602d,	// (0x00024edb) area_top_pane

0x60c1,	// (0x00024f6f) main_pane_ParamLimits

0x60c1,	// (0x00024f6f) main_pane

0x0f75,	// (0x0001fe23) misc_graphics

0x7e44,	// (0x00026cf2) battery_pane_ParamLimits

0x7e44,	// (0x00026cf2) battery_pane

0x9c47,	// (0x00028af5) bg_status_flat_pane_g8

0x9c4f,	// (0x00028afd) bg_status_flat_pane_g9

0x7f0c,	// (0x00026dba) context_pane_ParamLimits

0x7f0c,	// (0x00026dba) context_pane

0x8030,	// (0x00026ede) navi_pane_ParamLimits

0x8030,	// (0x00026ede) navi_pane

0x80c0,	// (0x00026f6e) signal_pane_ParamLimits

0x80c0,	// (0x00026f6e) signal_pane

0x0008,

0xf87f,	// (0x0002e72d) bg_status_flat_pane_g

0x812d,	// (0x00026fdb) status_pane_g1_ParamLimits

0x812d,	// (0x00026fdb) status_pane_g1

0x8141,	// (0x00026fef) status_pane_g2_ParamLimits

0x8141,	// (0x00026fef) status_pane_g2

0x814d,	// (0x00026ffb) status_pane_g3_ParamLimits

0x814d,	// (0x00026ffb) status_pane_g3

0x0004,

0xf7a6,	// (0x0002e654) status_pane_g_ParamLimits

0xf7a6,	// (0x0002e654) status_pane_g

0x8181,	// (0x0002702f) title_pane_ParamLimits

0x8181,	// (0x0002702f) title_pane

0x81be,	// (0x0002706c) uni_indicator_pane_ParamLimits

0x81be,	// (0x0002706c) uni_indicator_pane

0x7735,	// (0x000265e3) bg_list_pane_ParamLimits

0x7735,	// (0x000265e3) bg_list_pane

0x7755,	// (0x00026603) find_pane

0x775d,	// (0x0002660b) listscroll_app_pane_ParamLimits

0x775d,	// (0x0002660b) listscroll_app_pane

0x7769,	// (0x00026617) listscroll_form_pane

0x7771,	// (0x0002661f) listscroll_gen_pane_ParamLimits

0x7771,	// (0x0002661f) listscroll_gen_pane

0x7769,	// (0x00026617) listscroll_set_pane

0x6718,	// (0x000255c6) main_idle_act_pane

0x722a,	// (0x000260d8) main_idle_trad_pane

0x722a,	// (0x000260d8) main_list_empty_pane

0x7797,	// (0x00026645) main_midp_pane

0x77a3,	// (0x00026651) main_pane_g1_ParamLimits

0x77a3,	// (0x00026651) main_pane_g1

0x77b1,	// (0x0002665f) popup_ai_message_window_ParamLimits

0x77b1,	// (0x0002665f) popup_ai_message_window

0x7865,	// (0x00026713) popup_fep_china_uni_window_ParamLimits

0x7865,	// (0x00026713) popup_fep_china_uni_window

0x78c5,	// (0x00026773) popup_fep_japan_candidate_window_ParamLimits

0x78c5,	// (0x00026773) popup_fep_japan_candidate_window

0x78ef,	// (0x0002679d) popup_fep_japan_predictive_window_ParamLimits

0x78ef,	// (0x0002679d) popup_fep_japan_predictive_window

0x7925,	// (0x000267d3) popup_find_window

0x7932,	// (0x000267e0) popup_grid_graphic_window_ParamLimits

0x7932,	// (0x000267e0) popup_grid_graphic_window

0x7960,	// (0x0002680e) popup_large_graphic_colour_window

0x7986,	// (0x00026834) popup_menu_window_ParamLimits

0x7986,	// (0x00026834) popup_menu_window

0x7b50,	// (0x000269fe) popup_note_image_window

0x7b3a,	// (0x000269e8) popup_note_wait_window_ParamLimits

0x7b3a,	// (0x000269e8) popup_note_wait_window

0x7b3a,	// (0x000269e8) popup_note_window_ParamLimits

0x7b3a,	// (0x000269e8) popup_note_window

0x7bb6,	// (0x00026a64) popup_query_code_window_ParamLimits

0x7bb6,	// (0x00026a64) popup_query_code_window

0x7bcc,	// (0x00026a7a) popup_query_data_code_window_ParamLimits

0x7bcc,	// (0x00026a7a) popup_query_data_code_window

0x7bef,	// (0x00026a9d) popup_query_data_window_ParamLimits

0x7bef,	// (0x00026a9d) popup_query_data_window

0x7c11,	// (0x00026abf) popup_query_sat_info_window_ParamLimits

0x7c11,	// (0x00026abf) popup_query_sat_info_window

0x7c50,	// (0x00026afe) popup_snote_single_graphic_window_ParamLimits

0x7c50,	// (0x00026afe) popup_snote_single_graphic_window

0x7c50,	// (0x00026afe) popup_snote_single_text_window_ParamLimits

0x7c50,	// (0x00026afe) popup_snote_single_text_window

0x7c67,	// (0x00026b15) popup_sub_window_general

0x7dad,	// (0x00026c5b) popup_window_general_ParamLimits

0x7dad,	// (0x00026c5b) popup_window_general

0x7dc6,	// (0x00026c74) power_save_pane

0x7594,	// (0x00026442) control_pane_g1_ParamLimits

0x7594,	// (0x00026442) control_pane_g1

0x75bd,	// (0x0002646b) control_pane_g2_ParamLimits

0x75bd,	// (0x0002646b) control_pane_g2

0x75e2,	// (0x00026490) control_pane_g3_ParamLimits

0x75e2,	// (0x00026490) control_pane_g3

0x0007,

0xf78e,	// (0x0002e63c) control_pane_g_ParamLimits

0xf78e,	// (0x0002e63c) control_pane_g

0x763a,	// (0x000264e8) control_pane_t1_ParamLimits

0x763a,	// (0x000264e8) control_pane_t1

0x7686,	// (0x00026534) control_pane_t2_ParamLimits

0x7686,	// (0x00026534) control_pane_t2

0x0002,

0xf79f,	// (0x0002e64d) control_pane_t_ParamLimits

0xf79f,	// (0x0002e64d) control_pane_t

0x74b5,	// (0x00026363) navi_navi_volume_pane_cp1

0x74be,	// (0x0002636c) status_small_icon_pane

0x74c6,	// (0x00026374) status_small_pane_g1_ParamLimits

0x74c6,	// (0x00026374) status_small_pane_g1

0x74fa,	// (0x000263a8) status_small_pane_g2_ParamLimits

0x74fa,	// (0x000263a8) status_small_pane_g2

0x7506,	// (0x000263b4) status_small_pane_g3_ParamLimits

0x7506,	// (0x000263b4) status_small_pane_g3

0x7512,	// (0x000263c0) status_small_pane_g4_ParamLimits

0x7512,	// (0x000263c0) status_small_pane_g4

0x751e,	// (0x000263cc) status_small_pane_g5_ParamLimits

0x751e,	// (0x000263cc) status_small_pane_g5

0x752d,	// (0x000263db) status_small_pane_g6_ParamLimits

0x752d,	// (0x000263db) status_small_pane_g6

0x0007,

0xf77d,	// (0x0002e62b) status_small_pane_g_ParamLimits

0xf77d,	// (0x0002e62b) status_small_pane_g

0x755d,	// (0x0002640b) status_small_pane_t1

0x7580,	// (0x0002642e) status_small_wait_pane_ParamLimits

0x7580,	// (0x0002642e) status_small_wait_pane

0x6af8,	// (0x000259a6) aid_levels_signal_ParamLimits

0x6af8,	// (0x000259a6) aid_levels_signal

0x6b0a,	// (0x000259b8) signal_pane_g1_ParamLimits

0x6b0a,	// (0x000259b8) signal_pane_g1

0x6b1f,	// (0x000259cd) signal_pane_g2_ParamLimits

0x6b1f,	// (0x000259cd) signal_pane_g2

0x0003,

0xf70e,	// (0x0002e5bc) signal_pane_g_ParamLimits

0xf70e,	// (0x0002e5bc) signal_pane_g

0x6b5a,	// (0x00025a08) context_pane_g1

0x6318,	// (0x000251c6) title_pane_g1

0x6342,	// (0x000251f0) title_pane_t1

0x0f8b,	// (0x0001fe39) title_pane_t2

0x0fb1,	// (0x0001fe5f) title_pane_t3

0x0002,

0xf55d,	// (0x0002e40b) title_pane_t

0x81d6,	// (0x00027084) aid_levels_battery_ParamLimits

0x81d6,	// (0x00027084) aid_levels_battery

0x81ea,	// (0x00027098) battery_pane_g1_ParamLimits

0x81ea,	// (0x00027098) battery_pane_g1

0x8200,	// (0x000270ae) battery_pane_g2_ParamLimits

0x8200,	// (0x000270ae) battery_pane_g2

0x0001,

0xf7b1,	// (0x0002e65f) battery_pane_g_ParamLimits

0xf7b1,	// (0x0002e65f) battery_pane_g

0xa597,	// (0x00029445) uni_indicator_pane_g1

0xa5ac,	// (0x0002945a) uni_indicator_pane_g2

0xa5c2,	// (0x00029470) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0002e7d5) uni_indicator_pane_g

0x7098,	// (0x00025f46) navi_icon_pane_ParamLimits

0x7098,	// (0x00025f46) navi_icon_pane

0x6fdf,	// (0x00025e8d) navi_midp_pane

0x70b4,	// (0x00025f62) navi_navi_pane

0x70be,	// (0x00025f6c) navi_text_pane_ParamLimits

0x70be,	// (0x00025f6c) navi_text_pane

0x0f6b,	// (0x0001fe19) status_small_wait_pane_g1

0x12c6,	// (0x00020174) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0002e7d0) status_small_wait_pane_g

0xa2aa,	// (0x00029158) navi_navi_icon_text_pane

0xa2b2,	// (0x00029160) navi_navi_pane_g1_ParamLimits

0xa2b2,	// (0x00029160) navi_navi_pane_g1

0xa2c4,	// (0x00029172) navi_navi_pane_g2_ParamLimits

0xa2c4,	// (0x00029172) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0002e79e) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0002e79e) navi_navi_pane_g

0xa2d6,	// (0x00029184) navi_navi_tabs_pane

0xa2df,	// (0x0002918d) navi_navi_text_pane

0xa2aa,	// (0x00029158) navi_navi_volume_pane

0xa283,	// (0x00029131) navi_text_pane_t1

0xa274,	// (0x00029122) navi_icon_pane_g1

0xa1c7,	// (0x00029075) navi_navi_text_pane_t1

0x849a,	// (0x00027348) navi_navi_volume_pane_g1

0x84a2,	// (0x00027350) volume_small_pane

0xa12d,	// (0x00028fdb) navi_navi_icon_text_pane_g1

0xa135,	// (0x00028fe3) navi_navi_icon_text_pane_t1

0x70b4,	// (0x00025f62) navi_tabs_2_long_pane

0x70b4,	// (0x00025f62) navi_tabs_2_pane

0x70b4,	// (0x00025f62) navi_tabs_3_long_pane

0x70b4,	// (0x00025f62) navi_tabs_3_pane

0x70b4,	// (0x00025f62) navi_tabs_4_pane

0x847a,	// (0x00027328) tabs_2_active_pane_ParamLimits

0x847a,	// (0x00027328) tabs_2_active_pane

0x848a,	// (0x00027338) tabs_2_passive_pane_ParamLimits

0x848a,	// (0x00027338) tabs_2_passive_pane

0x8448,	// (0x000272f6) tabs_3_active_pane_ParamLimits

0x8448,	// (0x000272f6) tabs_3_active_pane

0x8458,	// (0x00027306) tabs_3_passive_pane_ParamLimits

0x8458,	// (0x00027306) tabs_3_passive_pane

0x8469,	// (0x00027317) tabs_3_passive_pane_cp_ParamLimits

0x8469,	// (0x00027317) tabs_3_passive_pane_cp

0x83fc,	// (0x000272aa) tabs_4_active_pane_ParamLimits

0x83fc,	// (0x000272aa) tabs_4_active_pane

0x840f,	// (0x000272bd) tabs_4_passive_pane_ParamLimits

0x840f,	// (0x000272bd) tabs_4_passive_pane

0x8420,	// (0x000272ce) tabs_4_passive_pane_cp_ParamLimits

0x8420,	// (0x000272ce) tabs_4_passive_pane_cp

0x8431,	// (0x000272df) tabs_4_passive_pane_cp2_ParamLimits

0x8431,	// (0x000272df) tabs_4_passive_pane_cp2

0x83d8,	// (0x00027286) tabs_2_long_active_pane_ParamLimits

0x83d8,	// (0x00027286) tabs_2_long_active_pane

0x83ea,	// (0x00027298) tabs_2_long_passive_pane_ParamLimits

0x83ea,	// (0x00027298) tabs_2_long_passive_pane

0x8399,	// (0x00027247) tabs_3_long_active_pane_ParamLimits

0x8399,	// (0x00027247) tabs_3_long_active_pane

0x83ac,	// (0x0002725a) tabs_3_long_passive_pane_ParamLimits

0x83ac,	// (0x0002725a) tabs_3_long_passive_pane

0x83c5,	// (0x00027273) tabs_3_long_passive_pane_cp_ParamLimits

0x83c5,	// (0x00027273) tabs_3_long_passive_pane_cp

0x833f,	// (0x000271ed) volume_small_pane_g1

0x8348,	// (0x000271f6) volume_small_pane_g2

0x8351,	// (0x000271ff) volume_small_pane_g3

0x835a,	// (0x00027208) volume_small_pane_g4

0x8363,	// (0x00027211) volume_small_pane_g5

0x836c,	// (0x0002721a) volume_small_pane_g6

0x8375,	// (0x00027223) volume_small_pane_g7

0x837e,	// (0x0002722c) volume_small_pane_g8

0x8387,	// (0x00027235) volume_small_pane_g9

0x8390,	// (0x0002723e) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0002e76a) volume_small_pane_g

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp2_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp2

0x63aa,	// (0x00025258) tabs_3_active_pane_g1

0x63b2,	// (0x00025260) tabs_3_active_pane_t1

0x0fd1,	// (0x0001fe7f) bg_passive_tab_pane_cp2_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_passive_tab_pane_cp2

0x63aa,	// (0x00025258) tabs_3_passive_pane_g1

0x63b2,	// (0x00025260) tabs_3_passive_pane_t1

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp3_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp3

0x63c4,	// (0x00025272) tabs_4_active_pane_g1

0x63cc,	// (0x0002527a) tabs_4_active_pane_t1

0x0fd1,	// (0x0001fe7f) bg_passive_tab_pane_cp3_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_passive_tab_pane_cp3

0x63c4,	// (0x00025272) tabs_4_1_passive_pane_g1

0x63cc,	// (0x0002527a) tabs_4_1_passive_pane_t1

0x7797,	// (0x00026645) list_highlight_pane_cp2

0xa826,	// (0x000296d4) list_set_pane_ParamLimits

0xa826,	// (0x000296d4) list_set_pane

0xa8ee,	// (0x0002979c) main_pane_set_t1_ParamLimits

0xa8ee,	// (0x0002979c) main_pane_set_t1

0xa90e,	// (0x000297bc) main_pane_set_t2_ParamLimits

0xa90e,	// (0x000297bc) main_pane_set_t2

0xa922,	// (0x000297d0) main_pane_set_t3_ParamLimits

0xa922,	// (0x000297d0) main_pane_set_t3

0xa936,	// (0x000297e4) main_pane_set_t4_ParamLimits

0xa936,	// (0x000297e4) main_pane_set_t4

0x0003,

0xf98c,	// (0x0002e83a) main_pane_set_t_ParamLimits

0xf98c,	// (0x0002e83a) main_pane_set_t

0xa94a,	// (0x000297f8) setting_code_pane

0xa954,	// (0x00029802) setting_slider_graphic_pane

0xa954,	// (0x00029802) setting_slider_pane

0xa954,	// (0x00029802) setting_text_pane

0xa954,	// (0x00029802) setting_volume_pane

0x63de,	// (0x0002528c) volume_set_pane

0x0fd1,	// (0x0001fe7f) bg_set_opt_pane_cp

0x63e8,	// (0x00025296) setting_slider_pane_t1

0x6401,	// (0x000252af) setting_slider_pane_t2

0x641b,	// (0x000252c9) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002e412) setting_slider_pane_t

0x6433,	// (0x000252e1) slider_set_pane

0x0f75,	// (0x0001fe23) bg_set_opt_pane_cp2

0x0fdf,	// (0x0001fe8d) setting_slider_graphic_pane_g1

0x6449,	// (0x000252f7) setting_slider_graphic_pane_t1

0x6459,	// (0x00025307) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002e419) setting_slider_graphic_pane_t

0x6469,	// (0x00025317) slider_set_pane_cp

0x0f75,	// (0x0001fe23) input_focus_pane_cp1

0xa7e7,	// (0x00029695) list_set_text_pane

0x0f6b,	// (0x0001fe19) setting_text_pane_g1

0x0f75,	// (0x0001fe23) input_focus_pane_cp2

0x0f6b,	// (0x0001fe19) setting_code_pane_g1

0x0fe8,	// (0x0001fe96) setting_code_pane_t1

0x4f30,	// (0x00023dde) set_text_pane_t1_ParamLimits

0x4f30,	// (0x00023dde) set_text_pane_t1

0x2eb6,	// (0x00021d64) set_opt_bg_pane_g1

0x2ebe,	// (0x00021d6c) set_opt_bg_pane_g2

0xa7bf,	// (0x0002966d) set_opt_bg_pane_g3

0x2ece,	// (0x00021d7c) set_opt_bg_pane_g4

0x2ed6,	// (0x00021d84) set_opt_bg_pane_g5

0x2ede,	// (0x00021d8c) set_opt_bg_pane_g6

0xa7c9,	// (0x00029677) set_opt_bg_pane_g7

0xa7d3,	// (0x00029681) set_opt_bg_pane_g8

0xa7dd,	// (0x0002968b) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0002e827) set_opt_bg_pane_g

0xa7b2,	// (0x00029660) slider_set_pane_g1

0x8523,	// (0x000273d1) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0002e818) slider_set_pane_g

0x84ab,	// (0x00027359) volume_set_pane_g1

0x84b5,	// (0x00027363) volume_set_pane_g2

0x84bf,	// (0x0002736d) volume_set_pane_g3

0x84c9,	// (0x00027377) volume_set_pane_g4

0x84d3,	// (0x00027381) volume_set_pane_g5

0x84dd,	// (0x0002738b) volume_set_pane_g6

0x84e7,	// (0x00027395) volume_set_pane_g7

0x84f1,	// (0x0002739f) volume_set_pane_g8

0x84fb,	// (0x000273a9) volume_set_pane_g9

0x8505,	// (0x000273b3) volume_set_pane_g10

0x0009,

0xf942,	// (0x0002e7f0) volume_set_pane_g

0x6471,	// (0x0002531f) indicator_pane_ParamLimits

0x6471,	// (0x0002531f) indicator_pane

0x647d,	// (0x0002532b) main_idle_pane_g2_ParamLimits

0x647d,	// (0x0002532b) main_idle_pane_g2

0x64a5,	// (0x00025353) main_pane_idle_g1_ParamLimits

0x64a5,	// (0x00025353) main_pane_idle_g1

0x1010,	// (0x0001febe) popup_clock_digital_analogue_window_ParamLimits

0x1010,	// (0x0001febe) popup_clock_digital_analogue_window

0x64b3,	// (0x00025361) soft_indicator_pane_ParamLimits

0x64b3,	// (0x00025361) soft_indicator_pane

0x64c1,	// (0x0002536f) wallpaper_pane_ParamLimits

0x64c1,	// (0x0002536f) wallpaper_pane

0x0f6b,	// (0x0001fe19) wallpaper_pane_g1

0x64cd,	// (0x0002537b) indicator_pane_g1_ParamLimits

0x64cd,	// (0x0002537b) indicator_pane_g1

0xac04,	// (0x00029ab2) navi_navi_icon_text_pane_srt_g1

0x103e,	// (0x0001feec) soft_indicator_pane_t1

0x1058,	// (0x0001ff06) aid_ps_area_pane

0x64d9,	// (0x00025387) aid_ps_clock_pane

0x1069,	// (0x0001ff17) aid_ps_indicator_pane

0x1075,	// (0x0001ff23) indicator_ps_pane_ParamLimits

0x1075,	// (0x0001ff23) indicator_ps_pane

0x1084,	// (0x0001ff32) power_save_pane_g1_ParamLimits

0x1084,	// (0x0001ff32) power_save_pane_g1

0x1090,	// (0x0001ff3e) power_save_pane_g2_ParamLimits

0x1090,	// (0x0001ff3e) power_save_pane_g2

0x5f21,	// (0x00024dcf) aid_navinavi_width_pane

0x1058,	// (0x0001ff06) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002e41e) power_save_pane_g_ParamLimits

0xf570,	// (0x0002e41e) power_save_pane_g

0x109e,	// (0x0001ff4c) power_save_pane_t1_ParamLimits

0x109e,	// (0x0001ff4c) power_save_pane_t1

0x64d9,	// (0x00025387) aid_ps_clock_pane_ParamLimits

0x1069,	// (0x0001ff17) aid_ps_indicator_pane_ParamLimits

0x10b0,	// (0x0001ff5e) power_save_pane_t4_ParamLimits

0x10b0,	// (0x0001ff5e) power_save_pane_t4

0x0001,

0xf575,	// (0x0002e423) power_save_pane_t_ParamLimits

0xf575,	// (0x0002e423) power_save_pane_t

0x10da,	// (0x0001ff88) power_save_t3_ParamLimits

0x10da,	// (0x0001ff88) power_save_t3

0x10c5,	// (0x0001ff73) power_save_t2_ParamLimits

0x10c5,	// (0x0001ff73) power_save_t2

0x10ef,	// (0x0001ff9d) indicator_ps_pane_g1

0x64e7,	// (0x00025395) ai_gene_pane_ParamLimits

0x64e7,	// (0x00025395) ai_gene_pane

0x64f3,	// (0x000253a1) ai_links_pane_ParamLimits

0x64f3,	// (0x000253a1) ai_links_pane

0x64ff,	// (0x000253ad) indicator_pane_cp1_ParamLimits

0x64ff,	// (0x000253ad) indicator_pane_cp1

0x650b,	// (0x000253b9) main_pane_idle_g1_cp_ParamLimits

0x650b,	// (0x000253b9) main_pane_idle_g1_cp

0x10f8,	// (0x0001ffa6) popup_ai_links_title_window

0x6517,	// (0x000253c5) soft_indicator_pane_cp1_ParamLimits

0x6517,	// (0x000253c5) soft_indicator_pane_cp1

0xa585,	// (0x00029433) ai_links_pane_g1

0xa58e,	// (0x0002943c) grid_ai_links_pane

0xa56a,	// (0x00029418) ai_gene_pane_1

0xa573,	// (0x00029421) ai_gene_pane_2

0xa57c,	// (0x0002942a) list_highlight_pane_cp4

0xa54a,	// (0x000293f8) cell_ai_link_pane_ParamLimits

0xa54a,	// (0x000293f8) cell_ai_link_pane

0xa542,	// (0x000293f0) cell_ai_link_pane_g1

0x12c6,	// (0x00020174) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0002e7cb) cell_ai_link_pane_g

0x0f75,	// (0x0001fe23) grid_highlight_cp2

0x0f75,	// (0x0001fe23) bg_popup_sub_pane_cp1

0x110f,	// (0x0001ffbd) popup_ai_links_title_window_t1

0xa48e,	// (0x0002933c) ai_gene_pane_1_g1_ParamLimits

0xa48e,	// (0x0002933c) ai_gene_pane_1_g1

0xa49a,	// (0x00029348) ai_gene_pane_1_g2_ParamLimits

0xa49a,	// (0x00029348) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0002e7c1) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0002e7c1) ai_gene_pane_1_g

0xa4a7,	// (0x00029355) ai_gene_pane_1_t1_ParamLimits

0xa4a7,	// (0x00029355) ai_gene_pane_1_t1

0xa4db,	// (0x00029389) grid_ai_soft_ind_pane

0xa479,	// (0x00029327) ai_gene_pane_2_t1_ParamLimits

0xa479,	// (0x00029327) ai_gene_pane_2_t1

0x6523,	// (0x000253d1) main_pane_empty_t1_ParamLimits

0x6523,	// (0x000253d1) main_pane_empty_t1

0x653b,	// (0x000253e9) main_pane_empty_t2_ParamLimits

0x653b,	// (0x000253e9) main_pane_empty_t2

0x6550,	// (0x000253fe) main_pane_empty_t3_ParamLimits

0x6550,	// (0x000253fe) main_pane_empty_t3

0x6562,	// (0x00025410) main_pane_empty_t4_ParamLimits

0x6562,	// (0x00025410) main_pane_empty_t4

0x6574,	// (0x00025422) main_pane_empty_t5_ParamLimits

0x6574,	// (0x00025422) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002e428) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002e428) main_pane_empty_t

0x2f36,	// (0x00021de4) bg_popup_window_pane_ParamLimits

0x2f36,	// (0x00021de4) bg_popup_window_pane

0xa1d5,	// (0x00029083) find_popup_pane_cp2_ParamLimits

0xa1d5,	// (0x00029083) find_popup_pane_cp2

0xa1e1,	// (0x0002908f) heading_pane_ParamLimits

0xa1e1,	// (0x0002908f) heading_pane

0x0f75,	// (0x0001fe23) bg_popup_sub_pane

0xa14f,	// (0x00028ffd) bg_popup_window_pane_g1_ParamLimits

0xa14f,	// (0x00028ffd) bg_popup_window_pane_g1

0xa15b,	// (0x00029009) bg_popup_window_pane_g2_ParamLimits

0xa15b,	// (0x00029009) bg_popup_window_pane_g2

0xa167,	// (0x00029015) bg_popup_window_pane_g3_ParamLimits

0xa167,	// (0x00029015) bg_popup_window_pane_g3

0xa173,	// (0x00029021) bg_popup_window_pane_g4_ParamLimits

0xa173,	// (0x00029021) bg_popup_window_pane_g4

0xa17f,	// (0x0002902d) bg_popup_window_pane_g5_ParamLimits

0xa17f,	// (0x0002902d) bg_popup_window_pane_g5

0xa18b,	// (0x00029039) bg_popup_window_pane_g6_ParamLimits

0xa18b,	// (0x00029039) bg_popup_window_pane_g6

0xa197,	// (0x00029045) bg_popup_window_pane_g7_ParamLimits

0xa197,	// (0x00029045) bg_popup_window_pane_g7

0xa1a3,	// (0x00029051) bg_popup_window_pane_g8_ParamLimits

0xa1a3,	// (0x00029051) bg_popup_window_pane_g8

0xa1af,	// (0x0002905d) bg_popup_window_pane_g9_ParamLimits

0xa1af,	// (0x0002905d) bg_popup_window_pane_g9

0xa1bb,	// (0x00029069) bg_popup_window_pane_g10_ParamLimits

0xa1bb,	// (0x00029069) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0002e789) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0002e789) bg_popup_window_pane_g

0xa0e4,	// (0x00028f92) bg_popup_heading_pane_ParamLimits

0xa0e4,	// (0x00028f92) bg_popup_heading_pane

0x8569,	// (0x00027417) tabs_4_passive_pane_cp_srt_ParamLimits

0x8569,	// (0x00027417) tabs_4_passive_pane_cp_srt

0x857b,	// (0x00027429) tabs_4_passive_pane_srt_ParamLimits

0xa0f8,	// (0x00028fa6) heading_pane_g2

0x857b,	// (0x00027429) tabs_4_passive_pane_srt

0x7797,	// (0x00026645) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7797,	// (0x00026645) bg_passive_tab_pane_cp3_srt

0xa100,	// (0x00028fae) heading_pane_t1_ParamLimits

0xa100,	// (0x00028fae) heading_pane_t1

0xa117,	// (0x00028fc5) heading_pane_t2_ParamLimits

0xa117,	// (0x00028fc5) heading_pane_t2

0x0001,

0xf8d6,	// (0x0002e784) heading_pane_t_ParamLimits

0xf8d6,	// (0x0002e784) heading_pane_t

0x9c0f,	// (0x00028abd) bg_popup_heading_pane_g1

0x9cbe,	// (0x00028b6c) bg_popup_heading_pane_g2

0x9cc8,	// (0x00028b76) bg_popup_heading_pane_g3

0x9cd2,	// (0x00028b80) bg_popup_heading_pane_g4

0x9cdc,	// (0x00028b8a) bg_popup_heading_pane_g5

0x9ce6,	// (0x00028b94) bg_popup_heading_pane_g6

0x9cee,	// (0x00028b9c) bg_popup_heading_pane_g7

0x9cf6,	// (0x00028ba4) bg_popup_heading_pane_g8

0x9d00,	// (0x00028bae) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0002e740) bg_popup_heading_pane_g

0x9395,	// (0x00028243) bg_popup_sub_pane_g1

0x939d,	// (0x0002824b) bg_popup_sub_pane_g2

0x93a5,	// (0x00028253) bg_popup_sub_pane_g3

0x93ad,	// (0x0002825b) bg_popup_sub_pane_g4

0x93b5,	// (0x00028263) bg_popup_sub_pane_g5

0x93bd,	// (0x0002826b) bg_popup_sub_pane_g6

0x93c5,	// (0x00028273) bg_popup_sub_pane_g7

0x93cd,	// (0x0002827b) bg_popup_sub_pane_g8

0x93d5,	// (0x00028283) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0002e71a) bg_popup_sub_pane_g

0x0fc3,	// (0x0001fe71) bg_popup_window_pane_cp5_ParamLimits

0x0fc3,	// (0x0001fe71) bg_popup_window_pane_cp5

0x112c,	// (0x0001ffda) popup_note_window_g1_ParamLimits

0x112c,	// (0x0001ffda) popup_note_window_g1

0x1138,	// (0x0001ffe6) popup_note_window_t1_ParamLimits

0x1138,	// (0x0001ffe6) popup_note_window_t1

0x114e,	// (0x0001fffc) popup_note_window_t2_ParamLimits

0x114e,	// (0x0001fffc) popup_note_window_t2

0x1164,	// (0x00020012) popup_note_window_t3_ParamLimits

0x1164,	// (0x00020012) popup_note_window_t3

0x117a,	// (0x00020028) popup_note_window_t4_ParamLimits

0x117a,	// (0x00020028) popup_note_window_t4

0x11a2,	// (0x00020050) popup_note_window_t5_ParamLimits

0x11a2,	// (0x00020050) popup_note_window_t5

0x0004,

0xf585,	// (0x0002e433) popup_note_window_t_ParamLimits

0xf585,	// (0x0002e433) popup_note_window_t

0x11c6,	// (0x00020074) bg_popup_window_pane_cp6_ParamLimits

0x11c6,	// (0x00020074) bg_popup_window_pane_cp6

0x9b8b,	// (0x00028a39) popup_note_image_window_g1_ParamLimits

0x9b8b,	// (0x00028a39) popup_note_image_window_g1

0x9b97,	// (0x00028a45) popup_note_image_window_g2_ParamLimits

0x9b97,	// (0x00028a45) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0002e70e) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0002e70e) popup_note_image_window_g

0x9bb0,	// (0x00028a5e) popup_note_image_window_t1_ParamLimits

0x9bb0,	// (0x00028a5e) popup_note_image_window_t1

0x9bc9,	// (0x00028a77) popup_note_image_window_t2_ParamLimits

0x9bc9,	// (0x00028a77) popup_note_image_window_t2

0x9be2,	// (0x00028a90) popup_note_image_window_t3_ParamLimits

0x9be2,	// (0x00028a90) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0002e713) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0002e713) popup_note_image_window_t

0x9a4b,	// (0x000288f9) bg_popup_window_pane_cp7_ParamLimits

0x9a4b,	// (0x000288f9) bg_popup_window_pane_cp7

0x9a7b,	// (0x00028929) popup_note_wait_window_g1_ParamLimits

0x9a7b,	// (0x00028929) popup_note_wait_window_g1

0x9a87,	// (0x00028935) popup_note_wait_window_g2_ParamLimits

0x9a87,	// (0x00028935) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0002e6fc) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0002e6fc) popup_note_wait_window_g

0x9a9f,	// (0x0002894d) popup_note_wait_window_t1_ParamLimits

0x9a9f,	// (0x0002894d) popup_note_wait_window_t1

0x9ac6,	// (0x00028974) popup_note_wait_window_t2_ParamLimits

0x9ac6,	// (0x00028974) popup_note_wait_window_t2

0x9ae4,	// (0x00028992) popup_note_wait_window_t3_ParamLimits

0x9ae4,	// (0x00028992) popup_note_wait_window_t3

0x9af7,	// (0x000289a5) popup_note_wait_window_t4_ParamLimits

0x9af7,	// (0x000289a5) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0002e703) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0002e703) popup_note_wait_window_t

0x9b1c,	// (0x000289ca) wait_bar_pane_ParamLimits

0x9b1c,	// (0x000289ca) wait_bar_pane

0x0f75,	// (0x0001fe23) wait_anim_pane

0x0f75,	// (0x0001fe23) wait_border_pane

0x0f6b,	// (0x0001fe19) wait_anim_pane_g1

0x0f6b,	// (0x0001fe19) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0002e5b7) wait_anim_pane_g

0x99ef,	// (0x0002889d) wait_border_pane_g1

0x99fa,	// (0x000288a8) wait_border_pane_g2

0x9a03,	// (0x000288b1) wait_border_pane_g3

0x0002,

0xf847,	// (0x0002e6f5) wait_border_pane_g

0x9859,	// (0x00028707) bg_popup_window_pane_cp16_ParamLimits

0x9859,	// (0x00028707) bg_popup_window_pane_cp16

0x9959,	// (0x00028807) indicator_popup_pane_cp4_ParamLimits

0x9959,	// (0x00028807) indicator_popup_pane_cp4

0x996d,	// (0x0002881b) popup_query_data_window_t1_ParamLimits

0x996d,	// (0x0002881b) popup_query_data_window_t1

0x997f,	// (0x0002882d) popup_query_data_window_t2_ParamLimits

0x997f,	// (0x0002882d) popup_query_data_window_t2

0x9998,	// (0x00028846) popup_query_data_window_t3_ParamLimits

0x9998,	// (0x00028846) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0002e6ee) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0002e6ee) popup_query_data_window_t

0x99b2,	// (0x00028860) query_popup_data_pane_ParamLimits

0x99b2,	// (0x00028860) query_popup_data_pane

0x99c6,	// (0x00028874) query_popup_data_pane_cp1_ParamLimits

0x99c6,	// (0x00028874) query_popup_data_pane_cp1

0x9859,	// (0x00028707) bg_popup_window_pane_cp10_ParamLimits

0x9859,	// (0x00028707) bg_popup_window_pane_cp10

0x988b,	// (0x00028739) indicator_popup_pane_ParamLimits

0x988b,	// (0x00028739) indicator_popup_pane

0x98ad,	// (0x0002875b) popup_query_code_window_t1_ParamLimits

0x98ad,	// (0x0002875b) popup_query_code_window_t1

0x98c7,	// (0x00028775) popup_query_code_window_t2_ParamLimits

0x98c7,	// (0x00028775) popup_query_code_window_t2

0x9910,	// (0x000287be) popup_query_code_window_t3_ParamLimits

0x9910,	// (0x000287be) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0002e6e7) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0002e6e7) popup_query_code_window_t

0x993f,	// (0x000287ed) query_popup_pane_ParamLimits

0x993f,	// (0x000287ed) query_popup_pane

0x11c6,	// (0x00020074) bg_popup_window_pane_cp15_ParamLimits

0x11c6,	// (0x00020074) bg_popup_window_pane_cp15

0x11e6,	// (0x00020094) indicator_popup_pane_cp1_ParamLimits

0x11e6,	// (0x00020094) indicator_popup_pane_cp1

0x11f9,	// (0x000200a7) indicator_popup_pane_cp2_ParamLimits

0x11f9,	// (0x000200a7) indicator_popup_pane_cp2

0x1214,	// (0x000200c2) popup_query_data_code_window_g1_ParamLimits

0x1214,	// (0x000200c2) popup_query_data_code_window_g1

0x1227,	// (0x000200d5) popup_query_data_code_window_t1_ParamLimits

0x1227,	// (0x000200d5) popup_query_data_code_window_t1

0x1239,	// (0x000200e7) popup_query_data_code_window_t2_ParamLimits

0x1239,	// (0x000200e7) popup_query_data_code_window_t2

0x124b,	// (0x000200f9) popup_query_data_code_window_t3_ParamLimits

0x124b,	// (0x000200f9) popup_query_data_code_window_t3

0x1261,	// (0x0002010f) popup_query_data_code_window_t4_ParamLimits

0x1261,	// (0x0002010f) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002e43e) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002e43e) popup_query_data_code_window_t

0x7054,	// (0x00025f02) list_single_midp_graphic_pane_g3

0x127b,	// (0x00020129) query_popup_data_pane_cp2_ParamLimits

0x128e,	// (0x0002013c) query_popup_pane_cp2_ParamLimits

0x128e,	// (0x0002013c) query_popup_pane_cp2

0x0f75,	// (0x0001fe23) bg_popup_window_pane_cp11

0x9851,	// (0x000286ff) heading_pane_cp5

0x1324,	// (0x000201d2) listscroll_popup_info_pane

0x0f75,	// (0x0001fe23) input_focus_pane_cp3

0x12a9,	// (0x00020157) query_popup_pane_t1

0x12b7,	// (0x00020165) list_popup_info_pane_ParamLimits

0x12b7,	// (0x00020165) list_popup_info_pane

0x12c6,	// (0x00020174) listscroll_popup_info_pane_g1

0x12ce,	// (0x0002017c) scroll_pane_cp7

0x12d8,	// (0x00020186) popup_info_list_pane_t1_ParamLimits

0x12d8,	// (0x00020186) popup_info_list_pane_t1

0x12f2,	// (0x000201a0) popup_info_list_pane_t2_ParamLimits

0x12f2,	// (0x000201a0) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002e447) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002e447) popup_info_list_pane_t

0x0f75,	// (0x0001fe23) bg_popup_window_pane_cp12

0xac1e,	// (0x00029acc) find_popup_pane

0x0fd1,	// (0x0001fe7f) bg_popup_window_pane_cp3

0x130c,	// (0x000201ba) heading_pane_cp3

0x1318,	// (0x000201c6) listscroll_popup_graphic_pane

0x0f75,	// (0x0001fe23) bg_popup_window_pane_cp4

0x65d6,	// (0x00025484) heading_pane_cp4

0x1324,	// (0x000201d2) listscroll_popup_colour_pane

0x65e0,	// (0x0002548e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x65e0,	// (0x0002548e) cell_large_graphic_colour_none_popup_pane

0x65f4,	// (0x000254a2) grid_large_graphic_colour_popup_pane_ParamLimits

0x65f4,	// (0x000254a2) grid_large_graphic_colour_popup_pane

0x6620,	// (0x000254ce) listscroll_popup_colour_pane_g1_ParamLimits

0x6620,	// (0x000254ce) listscroll_popup_colour_pane_g1

0x6637,	// (0x000254e5) listscroll_popup_colour_pane_g2_ParamLimits

0x6637,	// (0x000254e5) listscroll_popup_colour_pane_g2

0x664e,	// (0x000254fc) listscroll_popup_colour_pane_g3_ParamLimits

0x664e,	// (0x000254fc) listscroll_popup_colour_pane_g3

0x665e,	// (0x0002550c) listscroll_popup_colour_pane_g4_ParamLimits

0x665e,	// (0x0002550c) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002e44c) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002e44c) listscroll_popup_colour_pane_g

0x132c,	// (0x000201da) scroll_pane_cp6_ParamLimits

0x132c,	// (0x000201da) scroll_pane_cp6

0x6672,	// (0x00025520) cell_large_graphic_colour_popup_pane_ParamLimits

0x6672,	// (0x00025520) cell_large_graphic_colour_popup_pane

0x133e,	// (0x000201ec) cell_large_graphic_colour_none_popup_pane_t1

0x0f75,	// (0x0001fe23) grid_highlight_pane_cp5

0x134d,	// (0x000201fb) cell_large_graphic_colour_popup_pane_g1

0x1355,	// (0x00020203) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002e455) cell_large_graphic_colour_popup_pane_g

0x135d,	// (0x0002020b) cell_large_graphic_colour_popup_pane_g2_copy1

0x1366,	// (0x00020214) grid_highlight_pane_cp4

0x136e,	// (0x0002021c) bg_popup_window_pane_cp8_ParamLimits

0x136e,	// (0x0002021c) bg_popup_window_pane_cp8

0x1389,	// (0x00020237) popup_snote_single_text_window_g1_ParamLimits

0x1389,	// (0x00020237) popup_snote_single_text_window_g1

0x139b,	// (0x00020249) popup_snote_single_text_window_t1_ParamLimits

0x139b,	// (0x00020249) popup_snote_single_text_window_t1

0x13ae,	// (0x0002025c) popup_snote_single_text_window_t2_ParamLimits

0x13ae,	// (0x0002025c) popup_snote_single_text_window_t2

0x13c1,	// (0x0002026f) popup_snote_single_text_window_t3_ParamLimits

0x13c1,	// (0x0002026f) popup_snote_single_text_window_t3

0x2b66,	// (0x00021a14) popup_snote_single_text_window_t4_ParamLimits

0x2b66,	// (0x00021a14) popup_snote_single_text_window_t4

0x2b9a,	// (0x00021a48) popup_snote_single_text_window_t5_ParamLimits

0x2b9a,	// (0x00021a48) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002e45a) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002e45a) popup_snote_single_text_window_t

0x2bc9,	// (0x00021a77) bg_popup_window_pane_cp9_ParamLimits

0x2bc9,	// (0x00021a77) bg_popup_window_pane_cp9

0x1389,	// (0x00020237) popup_snote_single_graphic_window_g1_ParamLimits

0x1389,	// (0x00020237) popup_snote_single_graphic_window_g1

0x2bd7,	// (0x00021a85) popup_snote_single_graphic_window_g2_ParamLimits

0x2bd7,	// (0x00021a85) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002e465) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002e465) popup_snote_single_graphic_window_g

0x2be3,	// (0x00021a91) popup_snote_single_graphic_window_t1_ParamLimits

0x2be3,	// (0x00021a91) popup_snote_single_graphic_window_t1

0x2bf6,	// (0x00021aa4) popup_snote_single_graphic_window_t2_ParamLimits

0x2bf6,	// (0x00021aa4) popup_snote_single_graphic_window_t2

0x2c09,	// (0x00021ab7) popup_snote_single_graphic_window_t3_ParamLimits

0x2c09,	// (0x00021ab7) popup_snote_single_graphic_window_t3

0x2c42,	// (0x00021af0) popup_snote_single_graphic_window_t4_ParamLimits

0x2c42,	// (0x00021af0) popup_snote_single_graphic_window_t4

0x2c76,	// (0x00021b24) popup_snote_single_graphic_window_t5_ParamLimits

0x2c76,	// (0x00021b24) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002e46a) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002e46a) popup_snote_single_graphic_window_t

0xab5c,	// (0x00029a0a) grid_graphic_popup_pane_ParamLimits

0xab5c,	// (0x00029a0a) grid_graphic_popup_pane

0xab8a,	// (0x00029a38) listscroll_popup_graphic_pane_g1_ParamLimits

0xab8a,	// (0x00029a38) listscroll_popup_graphic_pane_g1

0xab9e,	// (0x00029a4c) listscroll_popup_graphic_pane_g2_ParamLimits

0xab9e,	// (0x00029a4c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0002e864) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0002e864) listscroll_popup_graphic_pane_g

0xabb2,	// (0x00029a60) scroll_pane_cp5

0xab04,	// (0x000299b2) cell_graphic_popup_pane_ParamLimits

0xab04,	// (0x000299b2) cell_graphic_popup_pane

0xaae5,	// (0x00029993) cell_graphic_popup_pane_g1

0xaaed,	// (0x0002999b) cell_graphic_popup_pane_g2

0x135d,	// (0x0002020b) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0002e85d) cell_graphic_popup_pane_g

0xaaf6,	// (0x000299a4) cell_graphic_popup_pane_t2

0x1366,	// (0x00020214) grid_highlight_pane_cp3

0x2cb7,	// (0x00021b65) list_gen_pane_ParamLimits

0x2cb7,	// (0x00021b65) list_gen_pane

0x2cdf,	// (0x00021b8d) scroll_pane

0xaa47,	// (0x000298f5) bg_list_pane_g1_ParamLimits

0xaa47,	// (0x000298f5) bg_list_pane_g1

0xaa62,	// (0x00029910) bg_list_pane_g2_ParamLimits

0xaa62,	// (0x00029910) bg_list_pane_g2

0xaa75,	// (0x00029923) bg_list_pane_g3_ParamLimits

0xaa75,	// (0x00029923) bg_list_pane_g3

0xaa87,	// (0x00029935) bg_list_pane_g4_ParamLimits

0xaa87,	// (0x00029935) bg_list_pane_g4

0xaa99,	// (0x00029947) bg_list_pane_g5_ParamLimits

0xaa99,	// (0x00029947) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0002e852) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0002e852) bg_list_pane_g

0x5859,	// (0x00024707) list_double2_graphic_large_graphic_pane_ParamLimits

0x5859,	// (0x00024707) list_double2_graphic_large_graphic_pane

0x5859,	// (0x00024707) list_double2_graphic_pane_ParamLimits

0x5859,	// (0x00024707) list_double2_graphic_pane

0x5859,	// (0x00024707) list_double2_large_graphic_pane_ParamLimits

0x5859,	// (0x00024707) list_double2_large_graphic_pane

0x5859,	// (0x00024707) list_double2_pane_ParamLimits

0x5859,	// (0x00024707) list_double2_pane

0x5859,	// (0x00024707) list_double_graphic_heading_pane_ParamLimits

0x5859,	// (0x00024707) list_double_graphic_heading_pane

0x5859,	// (0x00024707) list_double_graphic_pane_ParamLimits

0x5859,	// (0x00024707) list_double_graphic_pane

0x5859,	// (0x00024707) list_double_heading_pane_ParamLimits

0x5859,	// (0x00024707) list_double_heading_pane

0x5859,	// (0x00024707) list_double_large_graphic_pane_ParamLimits

0x5859,	// (0x00024707) list_double_large_graphic_pane

0x5859,	// (0x00024707) list_double_number_pane_ParamLimits

0x5859,	// (0x00024707) list_double_number_pane

0x5859,	// (0x00024707) list_double_pane_ParamLimits

0x5859,	// (0x00024707) list_double_pane

0x5859,	// (0x00024707) list_double_time_pane_ParamLimits

0x5859,	// (0x00024707) list_double_time_pane

0x5859,	// (0x00024707) list_setting_number_pane_ParamLimits

0x5859,	// (0x00024707) list_setting_number_pane

0x5859,	// (0x00024707) list_setting_pane_ParamLimits

0x5859,	// (0x00024707) list_setting_pane

0xaa03,	// (0x000298b1) list_single_2graphic_pane_ParamLimits

0xaa03,	// (0x000298b1) list_single_2graphic_pane

0xaa03,	// (0x000298b1) list_single_graphic_heading_pane_ParamLimits

0xaa03,	// (0x000298b1) list_single_graphic_heading_pane

0xaa03,	// (0x000298b1) list_single_graphic_pane_ParamLimits

0xaa03,	// (0x000298b1) list_single_graphic_pane

0xaa03,	// (0x000298b1) list_single_heading_pane_ParamLimits

0xaa03,	// (0x000298b1) list_single_heading_pane

0x5898,	// (0x00024746) list_single_large_graphic_pane_ParamLimits

0x5898,	// (0x00024746) list_single_large_graphic_pane

0xaa03,	// (0x000298b1) list_single_number_heading_pane_ParamLimits

0xaa03,	// (0x000298b1) list_single_number_heading_pane

0xaa03,	// (0x000298b1) list_single_number_pane_ParamLimits

0xaa03,	// (0x000298b1) list_single_number_pane

0xaa03,	// (0x000298b1) list_single_pane_ParamLimits

0xaa03,	// (0x000298b1) list_single_pane

0x0f75,	// (0x0001fe23) list_highlight_pane_cp1

0x4f57,	// (0x00023e05) list_single_pane_g1_ParamLimits

0x4f57,	// (0x00023e05) list_single_pane_g1

0x4f63,	// (0x00023e11) list_single_pane_g2_ParamLimits

0x4f63,	// (0x00023e11) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002e47c) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002e47c) list_single_pane_g

0x5843,	// (0x000246f1) list_single_pane_t1_ParamLimits

0x5843,	// (0x000246f1) list_single_pane_t1

0x4f57,	// (0x00023e05) list_single_number_pane_g1_ParamLimits

0x4f57,	// (0x00023e05) list_single_number_pane_g1

0x4f63,	// (0x00023e11) list_single_number_pane_g2_ParamLimits

0x4f63,	// (0x00023e11) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002e47c) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002e47c) list_single_number_pane_g

0x57ed,	// (0x0002469b) list_single_number_pane_t1_ParamLimits

0x57ed,	// (0x0002469b) list_single_number_pane_t1

0x5803,	// (0x000246b1) list_single_number_pane_t2_ParamLimits

0x5803,	// (0x000246b1) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0002e813) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0002e813) list_single_number_pane_t

0x4f4b,	// (0x00023df9) list_single_graphic_pane_g1_ParamLimits

0x4f4b,	// (0x00023df9) list_single_graphic_pane_g1

0x4f57,	// (0x00023e05) list_single_graphic_pane_g2_ParamLimits

0x4f57,	// (0x00023e05) list_single_graphic_pane_g2

0x4f63,	// (0x00023e11) list_single_graphic_pane_g3_ParamLimits

0x4f63,	// (0x00023e11) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002e475) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002e475) list_single_graphic_pane_g

0x4f6f,	// (0x00023e1d) list_single_graphic_pane_t1_ParamLimits

0x4f6f,	// (0x00023e1d) list_single_graphic_pane_t1

0x4f57,	// (0x00023e05) list_single_heading_pane_g1_ParamLimits

0x4f57,	// (0x00023e05) list_single_heading_pane_g1

0x4f63,	// (0x00023e11) list_single_heading_pane_g2_ParamLimits

0x4f63,	// (0x00023e11) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002e47c) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002e47c) list_single_heading_pane_g

0x4f85,	// (0x00023e33) list_single_heading_pane_t1_ParamLimits

0x4f85,	// (0x00023e33) list_single_heading_pane_t1

0x4f9b,	// (0x00023e49) list_single_heading_pane_t2_ParamLimits

0x4f9b,	// (0x00023e49) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002e481) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002e481) list_single_heading_pane_t

0x4f57,	// (0x00023e05) list_single_number_heading_pane_g1_ParamLimits

0x4f57,	// (0x00023e05) list_single_number_heading_pane_g1

0x4f63,	// (0x00023e11) list_single_number_heading_pane_g2_ParamLimits

0x4f63,	// (0x00023e11) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002e47c) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002e47c) list_single_number_heading_pane_g

0x4f85,	// (0x00023e33) list_single_number_heading_pane_t1_ParamLimits

0x4f85,	// (0x00023e33) list_single_number_heading_pane_t1

0x4fad,	// (0x00023e5b) list_single_number_heading_pane_t2_ParamLimits

0x4fad,	// (0x00023e5b) list_single_number_heading_pane_t2

0x4fbf,	// (0x00023e6d) list_single_number_heading_pane_t3_ParamLimits

0x4fbf,	// (0x00023e6d) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002e486) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002e486) list_single_number_heading_pane_t

0x4fd1,	// (0x00023e7f) list_single_graphic_heading_pane_g1_ParamLimits

0x4fd1,	// (0x00023e7f) list_single_graphic_heading_pane_g1

0x4fdd,	// (0x00023e8b) list_single_graphic_heading_pane_g4_ParamLimits

0x4fdd,	// (0x00023e8b) list_single_graphic_heading_pane_g4

0x4f63,	// (0x00023e11) list_single_graphic_heading_pane_g5_ParamLimits

0x4f63,	// (0x00023e11) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002e48d) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002e48d) list_single_graphic_heading_pane_g

0x4f85,	// (0x00023e33) list_single_graphic_heading_pane_t1_ParamLimits

0x4f85,	// (0x00023e33) list_single_graphic_heading_pane_t1

0x4fee,	// (0x00023e9c) list_single_graphic_heading_pane_t2_ParamLimits

0x4fee,	// (0x00023e9c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002e494) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002e494) list_single_graphic_heading_pane_t

0x5000,	// (0x00023eae) list_single_large_graphic_pane_g1_ParamLimits

0x5000,	// (0x00023eae) list_single_large_graphic_pane_g1

0x4f57,	// (0x00023e05) list_single_large_graphic_pane_g2_ParamLimits

0x4f57,	// (0x00023e05) list_single_large_graphic_pane_g2

0x4f63,	// (0x00023e11) list_single_large_graphic_pane_g3_ParamLimits

0x4f63,	// (0x00023e11) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002e499) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002e499) list_single_large_graphic_pane_g

0x99fa,	// (0x000288a8) wait_border_pane_g2_copy1

0x500c,	// (0x00023eba) list_single_large_graphic_pane_g4_cp2

0x4f85,	// (0x00023e33) list_single_large_graphic_pane_t1_ParamLimits

0x4f85,	// (0x00023e33) list_single_large_graphic_pane_t1

0x5014,	// (0x00023ec2) list_double_pane_g1_ParamLimits

0x5014,	// (0x00023ec2) list_double_pane_g1

0x5020,	// (0x00023ece) list_double_pane_g2_ParamLimits

0x5020,	// (0x00023ece) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002e4a0) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002e4a0) list_double_pane_g

0x502c,	// (0x00023eda) list_double_pane_t1_ParamLimits

0x502c,	// (0x00023eda) list_double_pane_t1

0x5042,	// (0x00023ef0) list_double_pane_t2_ParamLimits

0x5042,	// (0x00023ef0) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002e4a5) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002e4a5) list_double_pane_t

0x5054,	// (0x00023f02) list_double2_pane_g1_ParamLimits

0x5054,	// (0x00023f02) list_double2_pane_g1

0x5065,	// (0x00023f13) list_double2_pane_g2_ParamLimits

0x5065,	// (0x00023f13) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002e4aa) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002e4aa) list_double2_pane_g

0x5071,	// (0x00023f1f) list_double2_pane_t1_ParamLimits

0x5071,	// (0x00023f1f) list_double2_pane_t1

0x5087,	// (0x00023f35) list_double2_pane_t2_ParamLimits

0x5087,	// (0x00023f35) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002e4af) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002e4af) list_double2_pane_t

0x5014,	// (0x00023ec2) list_double_number_pane_g1_ParamLimits

0x5014,	// (0x00023ec2) list_double_number_pane_g1

0x5020,	// (0x00023ece) list_double_number_pane_g2_ParamLimits

0x5020,	// (0x00023ece) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002e4a0) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002e4a0) list_double_number_pane_g

0x5099,	// (0x00023f47) list_double_number_pane_t1_ParamLimits

0x5099,	// (0x00023f47) list_double_number_pane_t1

0x50ab,	// (0x00023f59) list_double_number_pane_t2_ParamLimits

0x50ab,	// (0x00023f59) list_double_number_pane_t2

0x50c1,	// (0x00023f6f) list_double_number_pane_t3_ParamLimits

0x50c1,	// (0x00023f6f) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002e4b4) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002e4b4) list_double_number_pane_t

0x50d3,	// (0x00023f81) list_double_graphic_pane_g1_ParamLimits

0x50d3,	// (0x00023f81) list_double_graphic_pane_g1

0x50df,	// (0x00023f8d) list_double_graphic_pane_g2_ParamLimits

0x50df,	// (0x00023f8d) list_double_graphic_pane_g2

0x50ee,	// (0x00023f9c) list_double_graphic_pane_g3_ParamLimits

0x50ee,	// (0x00023f9c) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002e4bb) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002e4bb) list_double_graphic_pane_g

0x5106,	// (0x00023fb4) list_double_graphic_pane_t1_ParamLimits

0x5106,	// (0x00023fb4) list_double_graphic_pane_t1

0x511c,	// (0x00023fca) list_double_graphic_pane_t2_ParamLimits

0x511c,	// (0x00023fca) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002e4c4) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002e4c4) list_double_graphic_pane_t

0x512e,	// (0x00023fdc) list_double2_graphic_pane_g1_ParamLimits

0x512e,	// (0x00023fdc) list_double2_graphic_pane_g1

0x513a,	// (0x00023fe8) list_double2_graphic_pane_g2_ParamLimits

0x513a,	// (0x00023fe8) list_double2_graphic_pane_g2

0x5146,	// (0x00023ff4) list_double2_graphic_pane_g3_ParamLimits

0x5146,	// (0x00023ff4) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002e4c9) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002e4c9) list_double2_graphic_pane_g

0x5152,	// (0x00024000) list_double2_graphic_pane_t1_ParamLimits

0x5152,	// (0x00024000) list_double2_graphic_pane_t1

0x5168,	// (0x00024016) list_double2_graphic_pane_t2_ParamLimits

0x5168,	// (0x00024016) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002e4d0) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002e4d0) list_double2_graphic_pane_t

0x517a,	// (0x00024028) list_double_large_graphic_pane_g1_ParamLimits

0x517a,	// (0x00024028) list_double_large_graphic_pane_g1

0x51a5,	// (0x00024053) list_double_large_graphic_pane_g2_ParamLimits

0x51a5,	// (0x00024053) list_double_large_graphic_pane_g2

0x5020,	// (0x00023ece) list_double_large_graphic_pane_g3_ParamLimits

0x5020,	// (0x00023ece) list_double_large_graphic_pane_g3

0x51b6,	// (0x00024064) list_double_large_graphic_pane_g4_ParamLimits

0x51b6,	// (0x00024064) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002e4d5) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002e4d5) list_double_large_graphic_pane_g

0x51de,	// (0x0002408c) list_double_large_graphic_pane_t1_ParamLimits

0x51de,	// (0x0002408c) list_double_large_graphic_pane_t1

0x51f7,	// (0x000240a5) list_double_large_graphic_pane_t2_ParamLimits

0x51f7,	// (0x000240a5) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002e4e0) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002e4e0) list_double_large_graphic_pane_t

0x5209,	// (0x000240b7) list_double2_large_graphic_pane_g1_ParamLimits

0x5209,	// (0x000240b7) list_double2_large_graphic_pane_g1

0x5054,	// (0x00023f02) list_double2_large_graphic_pane_g2_ParamLimits

0x5054,	// (0x00023f02) list_double2_large_graphic_pane_g2

0x5065,	// (0x00023f13) list_double2_large_graphic_pane_g3_ParamLimits

0x5065,	// (0x00023f13) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002e4e5) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002e4e5) list_double2_large_graphic_pane_g

0x5215,	// (0x000240c3) list_double2_large_graphic_pane_t1_ParamLimits

0x5215,	// (0x000240c3) list_double2_large_graphic_pane_t1

0x522b,	// (0x000240d9) list_double2_large_graphic_pane_t2_ParamLimits

0x522b,	// (0x000240d9) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002e4ec) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002e4ec) list_double2_large_graphic_pane_t

0x523d,	// (0x000240eb) list_double_heading_pane_g1_ParamLimits

0x523d,	// (0x000240eb) list_double_heading_pane_g1

0x524e,	// (0x000240fc) list_double_heading_pane_g2_ParamLimits

0x524e,	// (0x000240fc) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002e4f1) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002e4f1) list_double_heading_pane_g

0x525a,	// (0x00024108) list_double_heading_pane_t1_ParamLimits

0x525a,	// (0x00024108) list_double_heading_pane_t1

0x5087,	// (0x00023f35) list_double_heading_pane_t2_ParamLimits

0x5087,	// (0x00023f35) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002e4f6) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002e4f6) list_double_heading_pane_t

0x5270,	// (0x0002411e) list_double_graphic_heading_pane_g1_ParamLimits

0x5270,	// (0x0002411e) list_double_graphic_heading_pane_g1

0x523d,	// (0x000240eb) list_double_graphic_heading_pane_g2_ParamLimits

0x523d,	// (0x000240eb) list_double_graphic_heading_pane_g2

0x524e,	// (0x000240fc) list_double_graphic_heading_pane_g3_ParamLimits

0x524e,	// (0x000240fc) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002e4fb) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002e4fb) list_double_graphic_heading_pane_g

0x527c,	// (0x0002412a) list_double_graphic_heading_pane_t1_ParamLimits

0x527c,	// (0x0002412a) list_double_graphic_heading_pane_t1

0x5168,	// (0x00024016) list_double_graphic_heading_pane_t2_ParamLimits

0x5168,	// (0x00024016) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002e502) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002e502) list_double_graphic_heading_pane_t

0x51a5,	// (0x00024053) list_double_time_pane_g1_ParamLimits

0x51a5,	// (0x00024053) list_double_time_pane_g1

0x5020,	// (0x00023ece) list_double_time_pane_g2_ParamLimits

0x5020,	// (0x00023ece) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0002e507) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0002e507) list_double_time_pane_g

0x5292,	// (0x00024140) list_double_time_pane_t1_ParamLimits

0x5292,	// (0x00024140) list_double_time_pane_t1

0x52a8,	// (0x00024156) list_double_time_pane_t2_ParamLimits

0x52a8,	// (0x00024156) list_double_time_pane_t2

0x52ba,	// (0x00024168) list_double_time_pane_t3_ParamLimits

0x52ba,	// (0x00024168) list_double_time_pane_t3

0x52cc,	// (0x0002417a) list_double_time_pane_t4_ParamLimits

0x52cc,	// (0x0002417a) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0002e50c) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0002e50c) list_double_time_pane_t

0x52de,	// (0x0002418c) list_setting_pane_g1_ParamLimits

0x52de,	// (0x0002418c) list_setting_pane_g1

0x52ea,	// (0x00024198) list_setting_pane_g2_ParamLimits

0x52ea,	// (0x00024198) list_setting_pane_g2

0x0001,

0xf667,	// (0x0002e515) list_setting_pane_g_ParamLimits

0xf667,	// (0x0002e515) list_setting_pane_g

0x52f6,	// (0x000241a4) list_setting_pane_t1_ParamLimits

0x52f6,	// (0x000241a4) list_setting_pane_t1

0x5310,	// (0x000241be) list_setting_pane_t2_ParamLimits

0x5310,	// (0x000241be) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0002e51a) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0002e51a) list_setting_pane_t

0x534f,	// (0x000241fd) set_value_pane_cp_ParamLimits

0x534f,	// (0x000241fd) set_value_pane_cp

0x535d,	// (0x0002420b) list_setting_number_pane_g1_ParamLimits

0x535d,	// (0x0002420b) list_setting_number_pane_g1

0x5369,	// (0x00024217) list_setting_number_pane_g2_ParamLimits

0x5369,	// (0x00024217) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0002e521) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0002e521) list_setting_number_pane_g

0x5375,	// (0x00024223) list_setting_number_pane_t1_ParamLimits

0x5375,	// (0x00024223) list_setting_number_pane_t1

0x538e,	// (0x0002423c) list_setting_number_pane_t2_ParamLimits

0x538e,	// (0x0002423c) list_setting_number_pane_t2

0x53a8,	// (0x00024256) list_setting_number_pane_t3_ParamLimits

0x53a8,	// (0x00024256) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0002e526) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0002e526) list_setting_number_pane_t

0x534f,	// (0x000241fd) set_value_pane_ParamLimits

0x534f,	// (0x000241fd) set_value_pane

0x2d34,	// (0x00021be2) bg_set_opt_pane_ParamLimits

0x2d34,	// (0x00021be2) bg_set_opt_pane

0x53eb,	// (0x00024299) set_value_pane_t1

0x2d63,	// (0x00021c11) slider_set_pane_cp3

0x2d6c,	// (0x00021c1a) volume_small_pane_cp

0x2d75,	// (0x00021c23) list_form_gen_pane

0x2d7e,	// (0x00021c2c) scroll_pane_cp8

0x53f9,	// (0x000242a7) form_field_data_pane_ParamLimits

0x53f9,	// (0x000242a7) form_field_data_pane

0x541f,	// (0x000242cd) form_field_data_wide_pane_ParamLimits

0x541f,	// (0x000242cd) form_field_data_wide_pane

0x5446,	// (0x000242f4) form_field_popup_pane_ParamLimits

0x5446,	// (0x000242f4) form_field_popup_pane

0x5468,	// (0x00024316) form_field_popup_wide_pane_ParamLimits

0x5468,	// (0x00024316) form_field_popup_wide_pane

0x5489,	// (0x00024337) form_field_slider_pane_ParamLimits

0x5489,	// (0x00024337) form_field_slider_pane

0x549c,	// (0x0002434a) form_field_slider_wide_pane_ParamLimits

0x549c,	// (0x0002434a) form_field_slider_wide_pane

0x2de6,	// (0x00021c94) data_form_pane

0x54b9,	// (0x00024367) form_field_data_pane_t1

0x2df2,	// (0x00021ca0) input_focus_pane

0x2e00,	// (0x00021cae) data_form_wide_pane

0x54df,	// (0x0002438d) form_field_data_wide_pane_t1

0x137b,	// (0x00020229) input_focus_pane_cp6

0x5501,	// (0x000243af) form_field_popup_pane_t1

0x2df2,	// (0x00021ca0) input_focus_pane_cp7

0x2e5a,	// (0x00021d08) list_form_pane

0x5523,	// (0x000243d1) form_field_popup_wide_pane_t1

0x2df2,	// (0x00021ca0) input_focus_pane_cp8

0x2e83,	// (0x00021d31) list_form_wide_pane

0x5540,	// (0x000243ee) form_field_slider_pane_t1_ParamLimits

0x5540,	// (0x000243ee) form_field_slider_pane_t1

0x5558,	// (0x00024406) form_field_slider_pane_t2_ParamLimits

0x5558,	// (0x00024406) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0002e536) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0002e536) form_field_slider_pane_t

0x0fc3,	// (0x0001fe71) input_focus_pane_cp9_ParamLimits

0x0fc3,	// (0x0001fe71) input_focus_pane_cp9

0x556d,	// (0x0002441b) slider_cont_pane_ParamLimits

0x556d,	// (0x0002441b) slider_cont_pane

0x2e92,	// (0x00021d40) form_field_slider_wide_pane_t1_ParamLimits

0x2e92,	// (0x00021d40) form_field_slider_wide_pane_t1

0x5581,	// (0x0002442f) form_field_slider_wide_pane_t2_ParamLimits

0x5581,	// (0x0002442f) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0002e53b) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0002e53b) form_field_slider_wide_pane_t

0x0fc3,	// (0x0001fe71) input_focus_pane_cp10_ParamLimits

0x0fc3,	// (0x0001fe71) input_focus_pane_cp10

0x5593,	// (0x00024441) slider_cont_pane_cp1_ParamLimits

0x5593,	// (0x00024441) slider_cont_pane_cp1

0x55a7,	// (0x00024455) slider_form_pane_cp

0x2eb6,	// (0x00021d64) input_focus_pane_g1

0x2ebe,	// (0x00021d6c) input_focus_pane_g2

0x2ec6,	// (0x00021d74) input_focus_pane_g3

0x2ece,	// (0x00021d7c) input_focus_pane_g4

0x2ed6,	// (0x00021d84) input_focus_pane_g5

0x2ede,	// (0x00021d8c) input_focus_pane_g6

0x2ee6,	// (0x00021d94) input_focus_pane_g7

0x2eee,	// (0x00021d9c) input_focus_pane_g8

0x2ef6,	// (0x00021da4) input_focus_pane_g9

0x0f6b,	// (0x0001fe19) input_focus_pane_g10

0x0009,

0xf692,	// (0x0002e540) input_focus_pane_g

0x9a03,	// (0x000288b1) wait_border_pane_g3_copy1

0x55af,	// (0x0002445d) data_form_pane_t1

0x0f6b,	// (0x0001fe19) wait_anim_pane_g1_copy1

0x5815,	// (0x000246c3) data_form_wide_pane_t1

0x55cc,	// (0x0002447a) list_form_graphic_pane_cp_ParamLimits

0x55cc,	// (0x0002447a) list_form_graphic_pane_cp

0xa97c,	// (0x0002982a) slider_form_pane_g1

0xa985,	// (0x00029833) slider_form_pane_g2

0x0006,

0xf995,	// (0x0002e843) slider_form_pane_g

0x55e1,	// (0x0002448f) list_form_graphic_pane_ParamLimits

0x55e1,	// (0x0002448f) list_form_graphic_pane

0x55f3,	// (0x000244a1) list_form_graphic_pane_g1

0x55fb,	// (0x000244a9) list_form_graphic_pane_t1_ParamLimits

0x55fb,	// (0x000244a9) list_form_graphic_pane_t1

0x0fd1,	// (0x0001fe7f) list_highlight_pane_cp5_ParamLimits

0x0fd1,	// (0x0001fe7f) list_highlight_pane_cp5

0x5610,	// (0x000244be) find_pane_g1

0x2f2d,	// (0x00021ddb) input_find_pane

0x5619,	// (0x000244c7) input_find_pane_g1_ParamLimits

0x5619,	// (0x000244c7) input_find_pane_g1

0x5625,	// (0x000244d3) input_find_pane_t1_ParamLimits

0x5625,	// (0x000244d3) input_find_pane_t1

0x563a,	// (0x000244e8) input_find_pane_t2_ParamLimits

0x563a,	// (0x000244e8) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0002e555) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0002e555) input_find_pane_t

0x2f36,	// (0x00021de4) input_focus_pane_cp5_ParamLimits

0x2f36,	// (0x00021de4) input_focus_pane_cp5

0x2f44,	// (0x00021df2) bg_popup_window_pane_cp2_ParamLimits

0x2f44,	// (0x00021df2) bg_popup_window_pane_cp2

0x2f51,	// (0x00021dff) listscroll_menu_pane_ParamLimits

0x2f51,	// (0x00021dff) listscroll_menu_pane

0x66ad,	// (0x0002555b) popup_submenu_window_ParamLimits

0x66ad,	// (0x0002555b) popup_submenu_window

0x2f5d,	// (0x00021e0b) find_popup_pane_g1

0x2f65,	// (0x00021e13) input_popup_find_pane_cp

0x2f36,	// (0x00021de4) input_focus_pane_cp4_ParamLimits

0x2f36,	// (0x00021de4) input_focus_pane_cp4

0x2f6f,	// (0x00021e1d) input_popup_find_pane_t1_ParamLimits

0x2f6f,	// (0x00021e1d) input_popup_find_pane_t1

0x0f75,	// (0x0001fe23) bg_popup_sub_pane_cp

0x2f9d,	// (0x00021e4b) listscroll_popup_sub_pane

0x2fa5,	// (0x00021e53) list_submenu_pane_ParamLimits

0x2fa5,	// (0x00021e53) list_submenu_pane

0x2fb6,	// (0x00021e64) scroll_pane_cp4

0x2fbe,	// (0x00021e6c) list_single_popup_submenu_pane_ParamLimits

0x2fbe,	// (0x00021e6c) list_single_popup_submenu_pane

0x2fd3,	// (0x00021e81) list_single_popup_submenu_pane_g1

0x2fdb,	// (0x00021e89) list_single_popup_submenu_pane_t1_ParamLimits

0x2fdb,	// (0x00021e89) list_single_popup_submenu_pane_t1

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp1_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp1

0x66eb,	// (0x00025599) tabs_2_active_pane_g1

0x66f3,	// (0x000255a1) tabs_2_active_pane_t1

0x0fd1,	// (0x0001fe7f) bg_passive_tab_pane_cp1_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_passive_tab_pane_cp1

0x66eb,	// (0x00025599) tabs_2_passive_pane_g1

0x66f3,	// (0x000255a1) tabs_2_passive_pane_t1

0x346c,	// (0x0002231a) bg_active_tab_pane_cp4

0x6705,	// (0x000255b3) tabs_2_long_active_pane_t1

0x6718,	// (0x000255c6) bg_passive_tab_pane_cp4

0xf548,	// (0x0002e3f6) list_single_midp_graphic_pane_g4_ParamLimits

0x346c,	// (0x0002231a) bg_active_tab_pane_cp5

0x6724,	// (0x000255d2) tabs_3_long_active_pane_t1

0x6718,	// (0x000255c6) bg_passive_tab_pane_cp5

0xf548,	// (0x0002e3f6) list_single_midp_graphic_pane_g4

0x0fd1,	// (0x0001fe7f) bg_popup_window_pane_cp13_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_popup_window_pane_cp13

0x2ff9,	// (0x00021ea7) listscroll_popup_fast_pane_ParamLimits

0x2ff9,	// (0x00021ea7) listscroll_popup_fast_pane

0x3008,	// (0x00021eb6) grid_popup_fast_pane_ParamLimits

0x3008,	// (0x00021eb6) grid_popup_fast_pane

0x301a,	// (0x00021ec8) scroll_pane_cp9_ParamLimits

0x301a,	// (0x00021ec8) scroll_pane_cp9

0xc349,	// (0x0002b1f7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc349,	// (0x0002b1f7) list_single_graphic_hl_pane_t1_cp2

0x303e,	// (0x00021eec) input_focus_pane_cp20_ParamLimits

0x303e,	// (0x00021eec) input_focus_pane_cp20

0x304c,	// (0x00021efa) query_popup_data_pane_t1_ParamLimits

0x304c,	// (0x00021efa) query_popup_data_pane_t1

0x305f,	// (0x00021f0d) query_popup_data_pane_t2_ParamLimits

0x305f,	// (0x00021f0d) query_popup_data_pane_t2

0x30a5,	// (0x00021f53) query_popup_data_pane_t3_ParamLimits

0x30a5,	// (0x00021f53) query_popup_data_pane_t3

0x30e6,	// (0x00021f94) query_popup_data_pane_t4_ParamLimits

0x30e6,	// (0x00021f94) query_popup_data_pane_t4

0x3122,	// (0x00021fd0) query_popup_data_pane_t5_ParamLimits

0x3122,	// (0x00021fd0) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0002e55a) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0002e55a) query_popup_data_pane_t

0x2eb6,	// (0x00021d64) bg_set_opt_pane_g1

0x2ebe,	// (0x00021d6c) bg_set_opt_pane_g2

0x2ec6,	// (0x00021d74) bg_set_opt_pane_g3

0x2ece,	// (0x00021d7c) bg_set_opt_pane_g4

0x2ed6,	// (0x00021d84) bg_set_opt_pane_g5

0x2ede,	// (0x00021d8c) bg_set_opt_pane_g6

0x2ee6,	// (0x00021d94) bg_set_opt_pane_g7

0x2eee,	// (0x00021d9c) bg_set_opt_pane_g8

0x2ef6,	// (0x00021da4) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0002e565) bg_set_opt_pane_g

0x6d7b,	// (0x00025c29) control_top_pane_stacon_ParamLimits

0x6d7b,	// (0x00025c29) control_top_pane_stacon

0x6dce,	// (0x00025c7c) signal_pane_stacon_ParamLimits

0x6dce,	// (0x00025c7c) signal_pane_stacon

0x6df3,	// (0x00025ca1) stacon_top_pane_g1_ParamLimits

0x6df3,	// (0x00025ca1) stacon_top_pane_g1

0x6e15,	// (0x00025cc3) title_pane_stacon_ParamLimits

0x6e15,	// (0x00025cc3) title_pane_stacon

0x6e3f,	// (0x00025ced) uni_indicator_pane_stacon_ParamLimits

0x6e3f,	// (0x00025ced) uni_indicator_pane_stacon

0x6e57,	// (0x00025d05) battery_pane_stacon_ParamLimits

0x6e57,	// (0x00025d05) battery_pane_stacon

0x6e9b,	// (0x00025d49) control_bottom_pane_stacon_ParamLimits

0x6e9b,	// (0x00025d49) control_bottom_pane_stacon

0x6ebe,	// (0x00025d6c) navi_pane_stacon_ParamLimits

0x6ebe,	// (0x00025d6c) navi_pane_stacon

0x6ee1,	// (0x00025d8f) stacon_bottom_pane_g1_ParamLimits

0x6ee1,	// (0x00025d8f) stacon_bottom_pane_g1

0x6736,	// (0x000255e4) aid_levels_signal_lsc_ParamLimits

0x6736,	// (0x000255e4) aid_levels_signal_lsc

0x674d,	// (0x000255fb) signal_pane_stacon_g1_ParamLimits

0x674d,	// (0x000255fb) signal_pane_stacon_g1

0x6761,	// (0x0002560f) signal_pane_stacon_g2_ParamLimits

0x6761,	// (0x0002560f) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0002e578) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002e578) signal_pane_stacon_g

0x6796,	// (0x00025644) title_pane_stacon_t1_ParamLimits

0x6796,	// (0x00025644) title_pane_stacon_t1

0x31ff,	// (0x000220ad) uni_indicator_pane_stacon_g1

0x3209,	// (0x000220b7) uni_indicator_pane_stacon_g2

0x31eb,	// (0x00022099) uni_indicator_pane_stacon_g3

0x31f5,	// (0x000220a3) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0002e584) uni_indicator_pane_stacon_g

0x67bb,	// (0x00025669) control_top_pane_stacon_g1

0x67c3,	// (0x00025671) control_top_pane_stacon_t1_ParamLimits

0x67c3,	// (0x00025671) control_top_pane_stacon_t1

0x67fa,	// (0x000256a8) aid_levels_battery_lsc_ParamLimits

0x67fa,	// (0x000256a8) aid_levels_battery_lsc

0x6812,	// (0x000256c0) battery_pane_stacon_g1_ParamLimits

0x6812,	// (0x000256c0) battery_pane_stacon_g1

0x6825,	// (0x000256d3) battery_pane_stacon_g2_ParamLimits

0x6825,	// (0x000256d3) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0002e58d) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0002e58d) battery_pane_stacon_g

0x6863,	// (0x00025711) navi_icon_pane_stacon

0x6877,	// (0x00025725) navi_navi_pane_stacon

0x6863,	// (0x00025711) navi_text_pane_stacon

0x67bb,	// (0x00025669) control_bottom_pane_stacon_g1

0x688d,	// (0x0002573b) control_bottom_pane_stacon_t1_ParamLimits

0x688d,	// (0x0002573b) control_bottom_pane_stacon_t1

0x68c4,	// (0x00025772) grid_app_pane_ParamLimits

0x68c4,	// (0x00025772) grid_app_pane

0x68e8,	// (0x00025796) scroll_pane_cp15_ParamLimits

0x68e8,	// (0x00025796) scroll_pane_cp15

0x68fd,	// (0x000257ab) cell_app_pane_ParamLimits

0x68fd,	// (0x000257ab) cell_app_pane

0x6929,	// (0x000257d7) cell_app_pane_g1_ParamLimits

0x6929,	// (0x000257d7) cell_app_pane_g1

0x32bd,	// (0x0002216b) cell_app_pane_g2_ParamLimits

0x32bd,	// (0x0002216b) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0002e592) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0002e592) cell_app_pane_g

0x32c9,	// (0x00022177) cell_app_pane_t1_ParamLimits

0x32c9,	// (0x00022177) cell_app_pane_t1

0x32db,	// (0x00022189) grid_highlight_pane_ParamLimits

0x32db,	// (0x00022189) grid_highlight_pane

0x2eb6,	// (0x00021d64) cell_highlight_pane_g1

0x2ebe,	// (0x00021d6c) cell_highlight_pane_g2

0x2ec6,	// (0x00021d74) cell_highlight_pane_g3

0x2ece,	// (0x00021d7c) cell_highlight_pane_g4

0x2ed6,	// (0x00021d84) cell_highlight_pane_g5

0x2ede,	// (0x00021d8c) cell_highlight_pane_g6

0x2ee6,	// (0x00021d94) cell_highlight_pane_g7

0x2eee,	// (0x00021d9c) cell_highlight_pane_g8

0x2ef6,	// (0x00021da4) cell_highlight_pane_g9

0x0f6b,	// (0x0001fe19) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0002e540) cell_highlight_pane_g

0x32ec,	// (0x0002219a) bg_scroll_pane

0x6960,	// (0x0002580e) scroll_handle_pane

0x3333,	// (0x000221e1) scroll_bg_pane_g1

0x3348,	// (0x000221f6) scroll_bg_pane_g2

0x3360,	// (0x0002220e) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0002e597) scroll_bg_pane_g

0x3375,	// (0x00022223) scroll_handle_focus_pane_ParamLimits

0x3375,	// (0x00022223) scroll_handle_focus_pane

0x3333,	// (0x000221e1) scroll_handle_pane_g1

0x3382,	// (0x00022230) scroll_handle_pane_g2

0x3360,	// (0x0002220e) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0002e59e) scroll_handle_pane_g

0x2f36,	// (0x00021de4) bg_popup_sub_pane_cp21_ParamLimits

0x2f36,	// (0x00021de4) bg_popup_sub_pane_cp21

0x3396,	// (0x00022244) popup_fep_japan_predictive_window_t1_ParamLimits

0x3396,	// (0x00022244) popup_fep_japan_predictive_window_t1

0x33ad,	// (0x0002225b) popup_fep_japan_predictive_window_t2_ParamLimits

0x33ad,	// (0x0002225b) popup_fep_japan_predictive_window_t2

0x33e0,	// (0x0002228e) popup_fep_japan_predictive_window_t3_ParamLimits

0x33e0,	// (0x0002228e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0002e5a5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0002e5a5) popup_fep_japan_predictive_window_t

0x0f75,	// (0x0001fe23) bg_popup_sub_pane_cp23

0x3417,	// (0x000222c5) listscroll_japin_cand_pane

0x341f,	// (0x000222cd) popup_fep_japan_candidate_window_t1

0x342d,	// (0x000222db) candidate_pane_ParamLimits

0x342d,	// (0x000222db) candidate_pane

0x343f,	// (0x000222ed) scroll_pane_cp30

0x3449,	// (0x000222f7) list_single_popup_jap_candidate_pane_ParamLimits

0x3449,	// (0x000222f7) list_single_popup_jap_candidate_pane

0x0f75,	// (0x0001fe23) list_highlight_pane_cp30

0x345d,	// (0x0002230b) list_single_popup_jap_candidate_pane_t1

0x6989,	// (0x00025837) level_1_signal

0x6996,	// (0x00025844) level_2_signal

0x69a3,	// (0x00025851) level_3_signal

0x69b0,	// (0x0002585e) level_4_signal

0x69bd,	// (0x0002586b) level_5_signal

0x69ca,	// (0x00025878) level_6_signal

0x69d7,	// (0x00025885) level_7_signal

0x6989,	// (0x00025837) level_1_battery

0x6996,	// (0x00025844) level_2_battery

0x69a3,	// (0x00025851) level_3_battery

0x69b0,	// (0x0002585e) level_4_battery

0x69bd,	// (0x0002586b) level_5_battery

0x69ca,	// (0x00025878) level_6_battery

0x69d7,	// (0x00025885) level_7_battery

0x6a1b,	// (0x000258c9) list_menu_pane_ParamLimits

0x6a1b,	// (0x000258c9) list_menu_pane

0x6a31,	// (0x000258df) scroll_pane_cp25_ParamLimits

0x6a31,	// (0x000258df) scroll_pane_cp25

0x6a4a,	// (0x000258f8) list_double2_graphic_pane_cp2_ParamLimits

0x6a4a,	// (0x000258f8) list_double2_graphic_pane_cp2

0x6a4a,	// (0x000258f8) list_double2_large_graphic_pane_cp2_ParamLimits

0x6a4a,	// (0x000258f8) list_double2_large_graphic_pane_cp2

0x6a4a,	// (0x000258f8) list_double2_pane_cp2_ParamLimits

0x6a4a,	// (0x000258f8) list_double2_pane_cp2

0x6a4a,	// (0x000258f8) list_double_graphic_pane_cp2_ParamLimits

0x6a4a,	// (0x000258f8) list_double_graphic_pane_cp2

0x6a4a,	// (0x000258f8) list_double_large_graphic_pane_cp2_ParamLimits

0x6a4a,	// (0x000258f8) list_double_large_graphic_pane_cp2

0x6a4a,	// (0x000258f8) list_double_number_pane_cp2_ParamLimits

0x6a4a,	// (0x000258f8) list_double_number_pane_cp2

0x6a4a,	// (0x000258f8) list_double_pane_cp2_ParamLimits

0x6a4a,	// (0x000258f8) list_double_pane_cp2

0x6a70,	// (0x0002591e) list_single_2graphic_pane_cp2_ParamLimits

0x6a70,	// (0x0002591e) list_single_2graphic_pane_cp2

0x6a70,	// (0x0002591e) list_single_graphic_heading_pane_cp2_ParamLimits

0x6a70,	// (0x0002591e) list_single_graphic_heading_pane_cp2

0x6a70,	// (0x0002591e) list_single_graphic_pane_cp2_ParamLimits

0x6a70,	// (0x0002591e) list_single_graphic_pane_cp2

0x6a70,	// (0x0002591e) list_single_heading_pane_cp2_ParamLimits

0x6a70,	// (0x0002591e) list_single_heading_pane_cp2

0x6a8d,	// (0x0002593b) list_single_large_graphic_pane_cp2_ParamLimits

0x6a8d,	// (0x0002593b) list_single_large_graphic_pane_cp2

0x6a70,	// (0x0002591e) list_single_number_heading_pane_cp2_ParamLimits

0x6a70,	// (0x0002591e) list_single_number_heading_pane_cp2

0x6a70,	// (0x0002591e) list_single_number_pane_cp2_ParamLimits

0x6a70,	// (0x0002591e) list_single_number_pane_cp2

0x6a70,	// (0x0002591e) list_single_pane_cp2_ParamLimits

0x6a70,	// (0x0002591e) list_single_pane_cp2

0x6b63,	// (0x00025a11) bg_popup_sub_pane_cp22

0x6b88,	// (0x00025a36) popup_side_volume_key_window_g1

0x6bb2,	// (0x00025a60) popup_side_volume_key_window_t1

0x6bd0,	// (0x00025a7e) volume_small_pane_cp1

0x0fc3,	// (0x0001fe71) bg_popup_sub_pane_cp24_ParamLimits

0x0fc3,	// (0x0001fe71) bg_popup_sub_pane_cp24

0x6bd8,	// (0x00025a86) fep_china_uni_candidate_pane_ParamLimits

0x6bd8,	// (0x00025a86) fep_china_uni_candidate_pane

0x6bec,	// (0x00025a9a) fep_china_uni_entry_pane

0x6bfc,	// (0x00025aaa) popup_fep_china_uni_window_g1

0x6c18,	// (0x00025ac6) fep_china_uni_entry_pane_g1

0x6c22,	// (0x00025ad0) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0002e5d6) fep_china_uni_entry_pane_g

0x6c2c,	// (0x00025ada) fep_entry_item_pane

0x6c36,	// (0x00025ae4) fep_candidate_item_pane

0x6c3e,	// (0x00025aec) fep_china_uni_candidate_pane_g1

0x6c48,	// (0x00025af6) fep_china_uni_candidate_pane_g2

0x6c50,	// (0x00025afe) fep_china_uni_candidate_pane_g3

0x6c58,	// (0x00025b06) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0002e5db) fep_china_uni_candidate_pane_g

0x0f6b,	// (0x0001fe19) fep_entry_item_pane_g1

0x6c62,	// (0x00025b10) fep_entry_item_pane_t1_ParamLimits

0x6c62,	// (0x00025b10) fep_entry_item_pane_t1

0x6c78,	// (0x00025b26) fep_candidate_item_pane_t1_ParamLimits

0x6c78,	// (0x00025b26) fep_candidate_item_pane_t1

0x6c8d,	// (0x00025b3b) fep_candidate_item_pane_t2_ParamLimits

0x6c8d,	// (0x00025b3b) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0002e5e4) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0002e5e4) fep_candidate_item_pane_t

0x0fd1,	// (0x0001fe7f) list_highlight_pane_cp31_ParamLimits

0x0fd1,	// (0x0001fe7f) list_highlight_pane_cp31

0x6c9f,	// (0x00025b4d) level_1_signal_lsc

0x6ca8,	// (0x00025b56) level_2_signal_lsc

0x6cb1,	// (0x00025b5f) level_3_signal_lsc

0x6cba,	// (0x00025b68) level_4_signal_lsc

0x6cc3,	// (0x00025b71) level_5_signal_lsc

0x6ccc,	// (0x00025b7a) level_6_signal_lsc

0x6cd5,	// (0x00025b83) level_7_signal_lsc

0x6cd5,	// (0x00025b83) level_1_battery_lsc

0x6cde,	// (0x00025b8c) level_2_battery_lsc

0x6ce7,	// (0x00025b95) level_3_battery_lsc

0x6cf0,	// (0x00025b9e) level_4_battery_lsc

0x6cf9,	// (0x00025ba7) level_5_battery_lsc

0x6d02,	// (0x00025bb0) level_6_battery_lsc

0x6c9f,	// (0x00025b4d) level_7_battery_lsc

0x6d0b,	// (0x00025bb9) scroll_handle_focus_pane_g1

0x6d14,	// (0x00025bc2) scroll_handle_focus_pane_g2

0x6d1d,	// (0x00025bcb) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0002e5e9) scroll_handle_focus_pane_g

0x564f,	// (0x000244fd) list_single_2graphic_pane_g1_ParamLimits

0x564f,	// (0x000244fd) list_single_2graphic_pane_g1

0x4fdd,	// (0x00023e8b) list_single_2graphic_pane_g2_ParamLimits

0x4fdd,	// (0x00023e8b) list_single_2graphic_pane_g2

0x4f63,	// (0x00023e11) list_single_2graphic_pane_g3_ParamLimits

0x4f63,	// (0x00023e11) list_single_2graphic_pane_g3

0x565b,	// (0x00024509) list_single_2graphic_pane_g4_ParamLimits

0x565b,	// (0x00024509) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0002e5f0) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0002e5f0) list_single_2graphic_pane_g

0x5667,	// (0x00024515) list_single_2graphic_pane_t1_ParamLimits

0x5667,	// (0x00024515) list_single_2graphic_pane_t1

0x5695,	// (0x00024543) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5695,	// (0x00024543) list_double2_graphic_large_graphic_pane_g1

0x5054,	// (0x00023f02) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5054,	// (0x00023f02) list_double2_graphic_large_graphic_pane_g2

0x5065,	// (0x00023f13) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5065,	// (0x00023f13) list_double2_graphic_large_graphic_pane_g3

0x56a7,	// (0x00024555) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x56a7,	// (0x00024555) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0002e5f9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0002e5f9) list_double2_graphic_large_graphic_pane_g

0x56b3,	// (0x00024561) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x56b3,	// (0x00024561) list_double2_graphic_large_graphic_pane_t1

0x56c9,	// (0x00024577) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x56c9,	// (0x00024577) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0002e602) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0002e602) list_double2_graphic_large_graphic_pane_t

0x6fa3,	// (0x00025e51) popup_fast_swap_window_ParamLimits

0x6fa3,	// (0x00025e51) popup_fast_swap_window

0x6fc1,	// (0x00025e6f) popup_side_volume_key_window

0x6fdf,	// (0x00025e8d) stacon_top_pane

0x6fe9,	// (0x00025e97) status_pane_ParamLimits

0x6fe9,	// (0x00025e97) status_pane

0x6fdf,	// (0x00025e8d) status_small_pane

0x0f75,	// (0x0001fe23) control_pane

0x0f75,	// (0x0001fe23) stacon_bottom_pane

0x2d7e,	// (0x00021c2c) scroll_pane_cp121

0x2d75,	// (0x00021c23) set_content_pane

0x6d26,	// (0x00025bd4) bg_active_tab_pane_g1_cp1

0x6d2f,	// (0x00025bdd) bg_active_tab_pane_g2_cp1

0x6d38,	// (0x00025be6) bg_active_tab_pane_g3_cp1

0x6d26,	// (0x00025bd4) bg_passive_tab_pane_g1_cp1

0x6d2f,	// (0x00025bdd) bg_passive_tab_pane_g2_cp1

0x6d38,	// (0x00025be6) bg_passive_tab_pane_g3_cp1

0x6d41,	// (0x00025bef) bg_active_tab_pane_g1_cp2

0x6d2f,	// (0x00025bdd) bg_active_tab_pane_g2_cp2

0x6d4a,	// (0x00025bf8) bg_active_tab_pane_g3_cp2

0x6d41,	// (0x00025bef) bg_passive_tab_pane_g1_cp2

0x6d2f,	// (0x00025bdd) bg_passive_tab_pane_g2_cp2

0x6d4a,	// (0x00025bf8) bg_passive_tab_pane_g3_cp2

0x6d53,	// (0x00025c01) bg_active_tab_pane_g1_cp3

0x6d2f,	// (0x00025bdd) bg_active_tab_pane_g2_cp3

0x6d5c,	// (0x00025c0a) bg_active_tab_pane_g3_cp3

0x6d53,	// (0x00025c01) bg_passive_tab_pane_g1_cp3

0x6d2f,	// (0x00025bdd) bg_passive_tab_pane_g2_cp3

0x6d5c,	// (0x00025c0a) bg_passive_tab_pane_g3_cp3

0x6d65,	// (0x00025c13) bg_active_tab_pane_g1_cp4

0x6d2f,	// (0x00025bdd) bg_active_tab_pane_g2_cp4

0x6d70,	// (0x00025c1e) bg_active_tab_pane_g3_cp4

0x6d65,	// (0x00025c13) bg_passive_tab_pane_g1_cp4

0x6d2f,	// (0x00025bdd) bg_passive_tab_pane_g2_cp4

0x6d70,	// (0x00025c1e) bg_passive_tab_pane_g3_cp4

0x6efd,	// (0x00025dab) bg_active_tab_pane_g1_cp5

0x6d2f,	// (0x00025bdd) bg_active_tab_pane_g2_cp5

0x6f06,	// (0x00025db4) bg_active_tab_pane_g3_cp5

0x6efd,	// (0x00025dab) bg_passive_tab_pane_g1_cp5

0x6d2f,	// (0x00025bdd) bg_passive_tab_pane_g2_cp5

0x6f06,	// (0x00025db4) bg_passive_tab_pane_g3_cp5

0x6f0f,	// (0x00025dbd) list_set_graphic_pane_ParamLimits

0x6f0f,	// (0x00025dbd) list_set_graphic_pane

0x0f75,	// (0x0001fe23) bg_set_opt_pane_cp4

0x6f24,	// (0x00025dd2) list_set_graphic_pane_g1_ParamLimits

0x6f24,	// (0x00025dd2) list_set_graphic_pane_g1

0x6f30,	// (0x00025dde) list_set_graphic_pane_g2_ParamLimits

0x6f30,	// (0x00025dde) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0002e607) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0002e607) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0002e981) volume_small_pane_cp_g

0x6f54,	// (0x00025e02) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6f54,	// (0x00025e02) list_double2_large_graphic_pane_g1_cp2

0x6f62,	// (0x00025e10) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6f62,	// (0x00025e10) list_double2_large_graphic_pane_g2_cp2

0x6f73,	// (0x00025e21) list_double2_large_graphic_pane_g3_cp2

0x6f7b,	// (0x00025e29) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6f7b,	// (0x00025e29) list_double2_large_graphic_pane_t1_cp2

0x6f91,	// (0x00025e3f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x6f91,	// (0x00025e3f) list_double2_large_graphic_pane_t2_cp2

0xa4ed,	// (0x0002939b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa4ed,	// (0x0002939b) list_double_large_graphic_pane_g1_cp2

0xa500,	// (0x000293ae) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa500,	// (0x000293ae) list_double_large_graphic_pane_g2_cp2

0x7107,	// (0x00025fb5) list_double_large_graphic_pane_g3_cp2

0xa511,	// (0x000293bf) list_double_large_graphic_pane_g4_cp

0xa519,	// (0x000293c7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa519,	// (0x000293c7) list_double_large_graphic_pane_t1_cp2

0xa530,	// (0x000293de) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa530,	// (0x000293de) list_double_large_graphic_pane_t2_cp2

0x6ff7,	// (0x00025ea5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6ff7,	// (0x00025ea5) list_double2_graphic_pane_g1_cp2

0x7005,	// (0x00025eb3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7005,	// (0x00025eb3) list_double2_graphic_pane_g2_cp2

0x7016,	// (0x00025ec4) list_double2_graphic_pane_g3_cp2

0x7020,	// (0x00025ece) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7020,	// (0x00025ece) list_double2_graphic_pane_t1_cp2

0x7036,	// (0x00025ee4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7036,	// (0x00025ee4) list_double2_graphic_pane_t2_cp2

0x7048,	// (0x00025ef6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x7048,	// (0x00025ef6) list_single_number_heading_pane_g1_cp2

0x7054,	// (0x00025f02) list_single_number_heading_pane_g2_cp2

0x705c,	// (0x00025f0a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x705c,	// (0x00025f0a) list_single_number_heading_pane_t1_cp2

0x7072,	// (0x00025f20) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7072,	// (0x00025f20) list_single_number_heading_pane_t2_cp2

0x7086,	// (0x00025f34) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7086,	// (0x00025f34) list_single_number_heading_pane_t3_cp2

0x7048,	// (0x00025ef6) list_single_heading_pane_g1_cp2_ParamLimits

0x7048,	// (0x00025ef6) list_single_heading_pane_g1_cp2

0x7054,	// (0x00025f02) list_single_heading_pane_g2_cp2

0x705c,	// (0x00025f0a) list_single_heading_pane_t1_cp2_ParamLimits

0x705c,	// (0x00025f0a) list_single_heading_pane_t1_cp2

0xa2e7,	// (0x00029195) list_single_heading_pane_t2_cp2_ParamLimits

0xa2e7,	// (0x00029195) list_single_heading_pane_t2_cp2

0xa229,	// (0x000290d7) list_double_graphic_pane_g1_cp2_ParamLimits

0xa229,	// (0x000290d7) list_double_graphic_pane_g1_cp2

0xa235,	// (0x000290e3) list_double_graphic_pane_g2_cp2_ParamLimits

0xa235,	// (0x000290e3) list_double_graphic_pane_g2_cp2

0xa244,	// (0x000290f2) list_double_graphic_pane_g3_cp2

0xa24c,	// (0x000290fa) list_double_graphic_pane_t1_cp2_ParamLimits

0xa24c,	// (0x000290fa) list_double_graphic_pane_t1_cp2

0xa262,	// (0x00029110) list_double_graphic_pane_t2_cp2_ParamLimits

0xa262,	// (0x00029110) list_double_graphic_pane_t2_cp2

0x70fb,	// (0x00025fa9) list_double_number_pane_g1_cp2_ParamLimits

0x70fb,	// (0x00025fa9) list_double_number_pane_g1_cp2

0x7107,	// (0x00025fb5) list_double_number_pane_g2_cp2

0xa1ed,	// (0x0002909b) list_double_number_pane_t1_cp2_ParamLimits

0xa1ed,	// (0x0002909b) list_double_number_pane_t1_cp2

0xa201,	// (0x000290af) list_double_number_pane_t2_cp2_ParamLimits

0xa201,	// (0x000290af) list_double_number_pane_t2_cp2

0xa217,	// (0x000290c5) list_double_number_pane_t3_cp2_ParamLimits

0xa217,	// (0x000290c5) list_double_number_pane_t3_cp2

0xa0d6,	// (0x00028f84) list_single_graphic_pane_g1_cp2_ParamLimits

0xa0d6,	// (0x00028f84) list_single_graphic_pane_g1_cp2

0x7161,	// (0x0002600f) list_single_graphic_pane_g2_cp2_ParamLimits

0x7161,	// (0x0002600f) list_single_graphic_pane_g2_cp2

0x716d,	// (0x0002601b) list_single_graphic_pane_g3_cp2

0xa0ac,	// (0x00028f5a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa0ac,	// (0x00028f5a) list_single_graphic_pane_t1_cp2

0x7161,	// (0x0002600f) list_single_number_pane_g1_cp2_ParamLimits

0x7161,	// (0x0002600f) list_single_number_pane_g1_cp2

0x716d,	// (0x0002601b) list_single_number_pane_g2_cp2

0xa0ac,	// (0x00028f5a) list_single_number_pane_t1_cp2_ParamLimits

0xa0ac,	// (0x00028f5a) list_single_number_pane_t1_cp2

0xa0c2,	// (0x00028f70) list_single_number_pane_t2_cp2_ParamLimits

0xa0c2,	// (0x00028f70) list_single_number_pane_t2_cp2

0x6f62,	// (0x00025e10) list_double2_pane_g1_cp2_ParamLimits

0x6f62,	// (0x00025e10) list_double2_pane_g1_cp2

0x6f73,	// (0x00025e21) list_double2_pane_g2_cp2

0x70d3,	// (0x00025f81) list_double2_pane_t1_cp2_ParamLimits

0x70d3,	// (0x00025f81) list_double2_pane_t1_cp2

0x70e9,	// (0x00025f97) list_double2_pane_t2_cp2_ParamLimits

0x70e9,	// (0x00025f97) list_double2_pane_t2_cp2

0x70fb,	// (0x00025fa9) list_double_pane_g1_cp2_ParamLimits

0x70fb,	// (0x00025fa9) list_double_pane_g1_cp2

0x7107,	// (0x00025fb5) list_double_pane_g2_cp2

0x710f,	// (0x00025fbd) list_double_pane_t1_cp2_ParamLimits

0x710f,	// (0x00025fbd) list_double_pane_t1_cp2

0x7125,	// (0x00025fd3) list_double_pane_t2_cp2_ParamLimits

0x7125,	// (0x00025fd3) list_double_pane_t2_cp2

0x7151,	// (0x00025fff) list_single_pane_cp2_g3

0x7161,	// (0x0002600f) list_single_pane_g1_cp2_ParamLimits

0x7161,	// (0x0002600f) list_single_pane_g1_cp2

0x716d,	// (0x0002601b) list_single_pane_g2_cp2

0x7175,	// (0x00026023) list_single_pane_t1_cp2_ParamLimits

0x7175,	// (0x00026023) list_single_pane_t1_cp2

0x718d,	// (0x0002603b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x718d,	// (0x0002603b) list_single_large_graphic_pane_g1_cp2

0x719b,	// (0x00026049) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x719b,	// (0x00026049) list_single_large_graphic_pane_g2_cp2

0x71a7,	// (0x00026055) list_single_large_graphic_pane_g3_cp2

0x71af,	// (0x0002605d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x71af,	// (0x0002605d) list_single_large_graphic_pane_g4_cp1

0x71c9,	// (0x00026077) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x71c9,	// (0x00026077) list_single_large_graphic_pane_t1_cp2

0xa076,	// (0x00028f24) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa076,	// (0x00028f24) list_single_graphic_heading_pane_g1_cp2

0xa043,	// (0x00028ef1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa043,	// (0x00028ef1) list_single_graphic_heading_pane_g4_cp2

0x716d,	// (0x0002601b) list_single_graphic_heading_pane_g5_cp2

0xa082,	// (0x00028f30) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa082,	// (0x00028f30) list_single_graphic_heading_pane_t1_cp2

0xa098,	// (0x00028f46) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa098,	// (0x00028f46) list_single_graphic_heading_pane_t2_cp2

0xa037,	// (0x00028ee5) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa037,	// (0x00028ee5) list_single_2graphic_pane_g1_cp2

0xa043,	// (0x00028ef1) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa043,	// (0x00028ef1) list_single_2graphic_pane_g2_cp2

0x716d,	// (0x0002601b) list_single_2graphic_pane_g3_cp2

0xa054,	// (0x00028f02) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa054,	// (0x00028f02) list_single_2graphic_pane_g4_cp2

0xa060,	// (0x00028f0e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa060,	// (0x00028f0e) list_single_2graphic_pane_t1_cp2

0x0f6b,	// (0x0001fe19) list_highlight_pane_g10_cp1

0x9c0f,	// (0x00028abd) list_highlight_pane_g1_cp1

0x9c17,	// (0x00028ac5) list_highlight_pane_g2_cp1

0x9c1f,	// (0x00028acd) list_highlight_pane_g3_cp1

0x9c27,	// (0x00028ad5) list_highlight_pane_g4_cp1

0x9c2f,	// (0x00028add) list_highlight_pane_g5_cp1

0x9c37,	// (0x00028ae5) list_highlight_pane_g6_cp1

0x9c3f,	// (0x00028aed) list_highlight_pane_g7_cp1

0x9c47,	// (0x00028af5) list_highlight_pane_g8_cp1

0x9c4f,	// (0x00028afd) list_highlight_pane_g9_cp1

0x9b2f,	// (0x000289dd) form_field_slider_pane_t3

0x9b3d,	// (0x000289eb) form_field_slider_pane_t4

0x9b4b,	// (0x000289f9) slider_form_pane_ParamLimits

0x9b4b,	// (0x000289f9) slider_form_pane

0x0f75,	// (0x0001fe23) control_abbreviations

0x0f75,	// (0x0001fe23) control_conventions

0x0f75,	// (0x0001fe23) control_definitions

0x0f75,	// (0x0001fe23) format_table_attribute

0xa33d,	// (0x000291eb) bg_popup_preview_window_pane_g9

0x0f75,	// (0x0001fe23) format_table_data2

0x0f75,	// (0x0001fe23) format_table_data3

0x0f75,	// (0x0001fe23) format_table_data_example

0x0008,

0x0f75,	// (0x0001fe23) intro_purpose

0xf8f5,	// (0x0002e7a3) bg_popup_preview_window_pane_g

0x0f75,	// (0x0001fe23) texts_category

0x0f75,	// (0x0001fe23) texts_graphics

0x71df,	// (0x0002608d) text_digital

0x71ee,	// (0x0002609c) text_primary

0x71fd,	// (0x000260ab) text_primary_small

0x720c,	// (0x000260ba) text_secondary

0x721b,	// (0x000260c9) text_title

0xaab9,	// (0x00029967) bg_passive_tab_pane_g1_cp3_srt

0x6d2f,	// (0x00025bdd) bg_passive_tab_pane_g2_cp3_srt

0xaac2,	// (0x00029970) bg_passive_tab_pane_g3_cp3_srt

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp3_srt_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp3_srt

0xaacb,	// (0x00029979) tabs_4_active_pane_srt_g1

0xaad3,	// (0x00029981) tabs_4_active_pane_srt_t1_ParamLimits

0xaad3,	// (0x00029981) tabs_4_active_pane_srt_t1

0xaab9,	// (0x00029967) bg_active_tab_pane_g1_cp3_copy1

0x6d2f,	// (0x00025bdd) bg_active_tab_pane_g2_cp3_copy1

0xaac2,	// (0x00029970) bg_active_tab_pane_g3_cp3_copy1

0x0fd1,	// (0x0001fe7f) tabs_2_long_active_pane_srt_ParamLimits

0x0fd1,	// (0x0001fe7f) tabs_2_long_active_pane_srt

0x0fd1,	// (0x0001fe7f) tabs_2_long_passive_pane_srt_ParamLimits

0x0fd1,	// (0x0001fe7f) tabs_2_long_passive_pane_srt

0x6718,	// (0x000255c6) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6718,	// (0x000255c6) bg_passive_tab_pane_cp4_srt

0xa78d,	// (0x0002963b) bg_passive_tab_pane_g1_cp4_srt

0x6d2f,	// (0x00025bdd) bg_passive_tab_pane_g2_cp4_srt

0xa796,	// (0x00029644) bg_passive_tab_pane_g3_cp4_srt

0x346c,	// (0x0002231a) bg_active_tab_pane_cp4_srt_ParamLimits

0x346c,	// (0x0002231a) bg_active_tab_pane_cp4_srt

0xa79f,	// (0x0002964d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa79f,	// (0x0002964d) tabs_2_long_active_pane_srt_t1

0xa78d,	// (0x0002963b) bg_active_tab_pane_g1_cp4_srt

0x6d2f,	// (0x00025bdd) bg_active_tab_pane_g2_cp4_srt

0xa796,	// (0x00029644) bg_active_tab_pane_g3_cp4_srt

0x0fc3,	// (0x0001fe71) tabs_3_long_active_pane_srt_ParamLimits

0x0fc3,	// (0x0001fe71) tabs_3_long_active_pane_srt

0x0fc3,	// (0x0001fe71) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0fc3,	// (0x0001fe71) tabs_3_long_passive_pane_cp_srt

0x0fc3,	// (0x0001fe71) tabs_3_long_passive_pane_srt_ParamLimits

0x0fc3,	// (0x0001fe71) tabs_3_long_passive_pane_srt

0x6718,	// (0x000255c6) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6718,	// (0x000255c6) bg_passive_tab_pane_cp5_srt

0x6efd,	// (0x00025dab) bg_passive_tab_pane_g1_cp5_srt

0x6d2f,	// (0x00025bdd) bg_passive_tab_pane_g2_cp5_srt

0x6f06,	// (0x00025db4) bg_passive_tab_pane_g3_cp5_srt

0x346c,	// (0x0002231a) bg_active_tab_pane_cp5_srt_ParamLimits

0x346c,	// (0x0002231a) bg_active_tab_pane_cp5_srt

0xa77b,	// (0x00029629) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa77b,	// (0x00029629) tabs_3_long_active_pane_srt_t1

0x6efd,	// (0x00025dab) bg_active_tab_pane_g1_cp5_srt

0x6d2f,	// (0x00025bdd) bg_active_tab_pane_g2_cp5_srt

0x6f06,	// (0x00025db4) bg_active_tab_pane_g3_cp5_srt

0xa76d,	// (0x0002961b) navi_text_pane_srt_t1

0xa765,	// (0x00029613) navi_icon_pane_srt_g1

0x748f,	// (0x0002633d) midp_editing_number_pane_srt

0x722a,	// (0x000260d8) midp_ticker_pane_srt

0x7497,	// (0x00026345) midp_ticker_pane_srt_g1

0x749f,	// (0x0002634d) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0002e626) midp_ticker_pane_srt_g

0x74a7,	// (0x00026355) midp_ticker_pane_srt_t1

0xa756,	// (0x00029604) midp_editing_number_pane_t1_copy1

0x6718,	// (0x000255c6) listscroll_midp_pane

0x6718,	// (0x000255c6) midp_form_pane

0x7294,	// (0x00026142) midp_info_popup_window_ParamLimits

0x7294,	// (0x00026142) midp_info_popup_window

0x2f36,	// (0x00021de4) bg_popup_sub_pane_cp50_ParamLimits

0x2f36,	// (0x00021de4) bg_popup_sub_pane_cp50

0x9845,	// (0x000286f3) listscroll_midp_info_pane_ParamLimits

0x9845,	// (0x000286f3) listscroll_midp_info_pane

0x982d,	// (0x000286db) listscroll_form_midp_pane_ParamLimits

0x982d,	// (0x000286db) listscroll_form_midp_pane

0x9839,	// (0x000286e7) scroll_bar_cp050

0x980d,	// (0x000286bb) list_midp_pane

0xb59e,	// (0x0002a44c) signal_pane_g2_cp

0x9747,	// (0x000285f5) listscroll_midp_info_pane_t1_ParamLimits

0x9747,	// (0x000285f5) listscroll_midp_info_pane_t1

0x975f,	// (0x0002860d) listscroll_midp_info_pane_t2_ParamLimits

0x975f,	// (0x0002860d) listscroll_midp_info_pane_t2

0x979d,	// (0x0002864b) listscroll_midp_info_pane_t3_ParamLimits

0x979d,	// (0x0002864b) listscroll_midp_info_pane_t3

0x97d7,	// (0x00028685) listscroll_midp_info_pane_t4_ParamLimits

0x97d7,	// (0x00028685) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0002e6de) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0002e6de) listscroll_midp_info_pane_t

0x2fb6,	// (0x00021e64) scroll_pane_cp21

0x96e1,	// (0x0002858f) form_midp_field_choice_group_pane

0x96ea,	// (0x00028598) form_midp_field_text_pane

0x972d,	// (0x000285db) form_midp_field_time_pane

0x9735,	// (0x000285e3) form_midp_gauge_slider_pane

0x973e,	// (0x000285ec) form_midp_gauge_wait_pane

0x0f75,	// (0x0001fe23) form_midp_image_pane

0x57ca,	// (0x00024678) list_single_midp_pane_ParamLimits

0x57ca,	// (0x00024678) list_single_midp_pane

0x96a5,	// (0x00028553) form_midp_field_text_pane_t1

0x9491,	// (0x0002833f) input_focus_pane_cp050

0x96d0,	// (0x0002857e) list_midp_form_text_pane

0x9674,	// (0x00028522) form_midp_field_choice_group_pane_t1

0x9682,	// (0x00028530) input_focus_pane_cp051

0x9696,	// (0x00028544) list_midp_choice_pane

0x0f75,	// (0x0001fe23) status_idle_pane

0x9658,	// (0x00028506) form_midp_field_time_pane_t1

0x0f6b,	// (0x0001fe19) wait_anim_pane_g2_copy1

0x9666,	// (0x00028514) form_midp_field_time_pane_t2

0x0001,

0x7344,	// (0x000261f2) aid_navinavi_width_2_pane

0xf82b,	// (0x0002e6d9) form_midp_field_time_pane_t

0x0f75,	// (0x0001fe23) input_focus_pane_cp052

0x0f75,	// (0x0001fe23) bg_input_focus_pane_cp040

0x9618,	// (0x000284c6) form_midp_gauge_slider_pane_t1

0x9626,	// (0x000284d4) form_midp_gauge_slider_pane_t2

0x9634,	// (0x000284e2) form_midp_gauge_slider_pane_t3

0x9642,	// (0x000284f0) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0002e6d0) form_midp_gauge_slider_pane_t

0x9650,	// (0x000284fe) form_midp_slider_pane

0x0fd1,	// (0x0001fe7f) bg_input_focus_pane_cp041_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_input_focus_pane_cp041

0x95e5,	// (0x00028493) form_midp_gauge_wait_pane_t1_ParamLimits

0x95e5,	// (0x00028493) form_midp_gauge_wait_pane_t1

0x95f7,	// (0x000284a5) form_midp_gauge_wait_pane_t2_ParamLimits

0x95f7,	// (0x000284a5) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0002e6cb) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0002e6cb) form_midp_gauge_wait_pane_t

0x9609,	// (0x000284b7) form_midp_wait_pane_ParamLimits

0x9609,	// (0x000284b7) form_midp_wait_pane

0x95ad,	// (0x0002845b) form_midp_image_pane_g1

0x95b6,	// (0x00028464) form_midp_image_pane_t1

0x95c5,	// (0x00028473) form_midp_image_pane_t2

0x95d4,	// (0x00028482) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0002e6c4) form_midp_image_pane_t

0x95a4,	// (0x00028452) list_single_midp_pane_g1

0x57bb,	// (0x00024669) list_single_midp_pane_t1

0x958a,	// (0x00028438) list_midp_form_item_pane_ParamLimits

0x958a,	// (0x00028438) list_midp_form_item_pane

0x72ec,	// (0x0002619a) list_midp_form_item_pane_t1

0x72fb,	// (0x000261a9) midp_ticker_pane_g1

0x7307,	// (0x000261b5) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0002e60c) midp_ticker_pane_g

0x7313,	// (0x000261c1) midp_ticker_pane_t1

0xa9c9,	// (0x00029877) midp_editing_number_pane_t1

0xa9a7,	// (0x00029855) midp_editing_number_pane

0xa9b6,	// (0x00029864) midp_ticker_pane

0xa746,	// (0x000295f4) ai_message_heading_pane

0x0f75,	// (0x0001fe23) bg_popup_window_pane_cp14

0xa74e,	// (0x000295fc) listscroll_ai_message_pane

0xa6cc,	// (0x0002957a) ai_message_heading_pane_g1_ParamLimits

0xa6cc,	// (0x0002957a) ai_message_heading_pane_g1

0xa6d8,	// (0x00029586) ai_message_heading_pane_g2_ParamLimits

0xa6d8,	// (0x00029586) ai_message_heading_pane_g2

0xa6e6,	// (0x00029594) ai_message_heading_pane_g3_ParamLimits

0xa6e6,	// (0x00029594) ai_message_heading_pane_g3

0xa6f2,	// (0x000295a0) ai_message_heading_pane_g4_ParamLimits

0xa6f2,	// (0x000295a0) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0002e805) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0002e805) ai_message_heading_pane_g

0xa6fe,	// (0x000295ac) ai_message_heading_pane_t1_ParamLimits

0xa6fe,	// (0x000295ac) ai_message_heading_pane_t1

0xa718,	// (0x000295c6) ai_message_heading_pane_t2_ParamLimits

0xa718,	// (0x000295c6) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0002e80e) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0002e80e) ai_message_heading_pane_t

0xa72c,	// (0x000295da) bg_popup_heading_pane_cp1_ParamLimits

0xa72c,	// (0x000295da) bg_popup_heading_pane_cp1

0xa6ba,	// (0x00029568) list_ai_message_pane_ParamLimits

0xa6ba,	// (0x00029568) list_ai_message_pane

0x2fb6,	// (0x00021e64) scroll_pane_cp10

0xa656,	// (0x00029504) list_ai_message_pane_g1

0xa65e,	// (0x0002950c) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0002e7e2) list_ai_message_pane_g

0xa666,	// (0x00029514) list_ai_message_pane_t1_ParamLimits

0xa666,	// (0x00029514) list_ai_message_pane_t1

0xa67b,	// (0x00029529) list_ai_message_pane_t2_ParamLimits

0xa67b,	// (0x00029529) list_ai_message_pane_t2

0xa690,	// (0x0002953e) list_ai_message_pane_t3_ParamLimits

0xa690,	// (0x0002953e) list_ai_message_pane_t3

0xa6a5,	// (0x00029553) list_ai_message_pane_t4_ParamLimits

0xa6a5,	// (0x00029553) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0002e7e7) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0002e7e7) list_ai_message_pane_t

0xa63f,	// (0x000294ed) cell_ai_soft_ind_pane_ParamLimits

0xa63f,	// (0x000294ed) cell_ai_soft_ind_pane

0x7325,	// (0x000261d3) cell_ai_soft_ind_pane_g1_ParamLimits

0x7325,	// (0x000261d3) cell_ai_soft_ind_pane_g1

0x0f75,	// (0x0001fe23) grid_highlight_cp1

0x7332,	// (0x000261e0) text_secondary_cp56_ParamLimits

0x7332,	// (0x000261e0) text_secondary_cp56

0xa614,	// (0x000294c2) example_general_pane_ParamLimits

0xa614,	// (0x000294c2) example_general_pane

0xa620,	// (0x000294ce) example_parent_pane_g1_ParamLimits

0xa620,	// (0x000294ce) example_parent_pane_g1

0xa62c,	// (0x000294da) example_parent_pane_t1_ParamLimits

0xa62c,	// (0x000294da) example_parent_pane_t1

0x7b5e,	// (0x00026a0c) popup_preview_text_window_ParamLimits

0x7b5e,	// (0x00026a0c) popup_preview_text_window

0x7159,	// (0x00026007) list_single_pane_cp2_g4

0x11c6,	// (0x00020074) bg_popup_preview_window_pane_ParamLimits

0x11c6,	// (0x00020074) bg_popup_preview_window_pane

0xa347,	// (0x000291f5) popup_preview_text_window_t1_ParamLimits

0xa347,	// (0x000291f5) popup_preview_text_window_t1

0xa365,	// (0x00029213) popup_preview_text_window_t2_ParamLimits

0xa365,	// (0x00029213) popup_preview_text_window_t2

0xa3ae,	// (0x0002925c) popup_preview_text_window_t3_ParamLimits

0xa3ae,	// (0x0002925c) popup_preview_text_window_t3

0xa3f3,	// (0x000292a1) popup_preview_text_window_t4_ParamLimits

0xa3f3,	// (0x000292a1) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0002e7b6) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0002e7b6) popup_preview_text_window_t

0xa471,	// (0x0002931f) scroll_pane_cp11

0x9395,	// (0x00028243) bg_popup_preview_window_pane_g1

0xa2fb,	// (0x000291a9) bg_popup_preview_window_pane_g2

0xa305,	// (0x000291b3) bg_popup_preview_window_pane_g3

0xa30f,	// (0x000291bd) bg_popup_preview_window_pane_g4

0xa319,	// (0x000291c7) bg_popup_preview_window_pane_g5

0xa323,	// (0x000291d1) bg_popup_preview_window_pane_g6

0xa32b,	// (0x000291d9) bg_popup_preview_window_pane_g7

0xa333,	// (0x000291e1) bg_popup_preview_window_pane_g8

0x5f2d,	// (0x00024ddb) aid_popup_width_pane

0x7b3a,	// (0x000269e8) popup_midp_note_alarm_window_ParamLimits

0x7b3a,	// (0x000269e8) popup_midp_note_alarm_window

0x2de6,	// (0x00021c94) data_form_pane_ParamLimits

0x54af,	// (0x0002435d) form_field_data_pane_g1

0x54b9,	// (0x00024367) form_field_data_pane_t1_ParamLimits

0x2df2,	// (0x00021ca0) input_focus_pane_ParamLimits

0x2e00,	// (0x00021cae) data_form_wide_pane_ParamLimits

0x54d3,	// (0x00024381) form_field_data_wide_pane_g1

0x54df,	// (0x0002438d) form_field_data_wide_pane_t1_ParamLimits

0x137b,	// (0x00020229) input_focus_pane_cp6_ParamLimits

0x66dd,	// (0x0002558b) input_popup_find_pane_g1_ParamLimits

0x66dd,	// (0x0002558b) input_popup_find_pane_g1

0x6836,	// (0x000256e4) aid_navi_side_left_pane

0x684b,	// (0x000256f9) aid_navi_side_right_pane

0x9d0a,	// (0x00028bb8) bg_popup_window_pane_cp30_ParamLimits

0x9d0a,	// (0x00028bb8) bg_popup_window_pane_cp30

0x9d84,	// (0x00028c32) popup_midp_note_alarm_window_g1_ParamLimits

0x9d84,	// (0x00028c32) popup_midp_note_alarm_window_g1

0x9db4,	// (0x00028c62) popup_midp_note_alarm_window_t1_ParamLimits

0x9db4,	// (0x00028c62) popup_midp_note_alarm_window_t1

0x9e55,	// (0x00028d03) popup_midp_note_alarm_window_t2_ParamLimits

0x9e55,	// (0x00028d03) popup_midp_note_alarm_window_t2

0x9f03,	// (0x00028db1) popup_midp_note_alarm_window_t3_ParamLimits

0x9f03,	// (0x00028db1) popup_midp_note_alarm_window_t3

0x9f35,	// (0x00028de3) popup_midp_note_alarm_window_t4_ParamLimits

0x9f35,	// (0x00028de3) popup_midp_note_alarm_window_t4

0x9f5b,	// (0x00028e09) popup_midp_note_alarm_window_t5_ParamLimits

0x9f5b,	// (0x00028e09) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0002e753) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0002e753) popup_midp_note_alarm_window_t

0xa007,	// (0x00028eb5) wait_bar_pane_cp1_ParamLimits

0xa007,	// (0x00028eb5) wait_bar_pane_cp1

0x0f75,	// (0x0001fe23) wait_anim_pane_copy1

0x0f75,	// (0x0001fe23) wait_border_pane_copy1

0x99ef,	// (0x0002889d) wait_border_pane_g1_copy1

0x54f9,	// (0x000243a7) form_field_popup_pane_g1

0x5501,	// (0x000243af) form_field_popup_pane_t1_ParamLimits

0x2df2,	// (0x00021ca0) input_focus_pane_cp7_ParamLimits

0x2e5a,	// (0x00021d08) list_form_pane_ParamLimits

0x551b,	// (0x000243c9) form_field_popup_wide_pane_g1

0x5523,	// (0x000243d1) form_field_popup_wide_pane_t1_ParamLimits

0x2df2,	// (0x00021ca0) input_focus_pane_cp8_ParamLimits

0x2e83,	// (0x00021d31) list_form_wide_pane_ParamLimits

0xab46,	// (0x000299f4) aid_size_cell_graphic_pane

0x55af,	// (0x0002445d) data_form_pane_t1_ParamLimits

0x5815,	// (0x000246c3) data_form_wide_pane_t1_ParamLimits

0x7e85,	// (0x00026d33) bg_status_flat_pane

0x6342,	// (0x000251f0) title_pane_t1_ParamLimits

0x0f8b,	// (0x0001fe39) title_pane_t2_ParamLimits

0x0fb1,	// (0x0001fe5f) title_pane_t3_ParamLimits

0xf55d,	// (0x0002e40b) title_pane_t_ParamLimits

0x6989,	// (0x00025837) level_1_signal_ParamLimits

0x6996,	// (0x00025844) level_2_signal_ParamLimits

0x69a3,	// (0x00025851) level_3_signal_ParamLimits

0x69b0,	// (0x0002585e) level_4_signal_ParamLimits

0x69bd,	// (0x0002586b) level_5_signal_ParamLimits

0x69ca,	// (0x00025878) level_6_signal_ParamLimits

0x69d7,	// (0x00025885) level_7_signal_ParamLimits

0x6989,	// (0x00025837) level_1_battery_ParamLimits

0x6996,	// (0x00025844) level_2_battery_ParamLimits

0x69a3,	// (0x00025851) level_3_battery_ParamLimits

0x69b0,	// (0x0002585e) level_4_battery_ParamLimits

0x69bd,	// (0x0002586b) level_5_battery_ParamLimits

0x69ca,	// (0x00025878) level_6_battery_ParamLimits

0x69d7,	// (0x00025885) level_7_battery_ParamLimits

0x9c0f,	// (0x00028abd) bg_status_flat_pane_g1

0x9c17,	// (0x00028ac5) bg_status_flat_pane_g2

0x9c1f,	// (0x00028acd) bg_status_flat_pane_g3

0x9c27,	// (0x00028ad5) bg_status_flat_pane_g4

0x9c2f,	// (0x00028add) bg_status_flat_pane_g5

0x9c37,	// (0x00028ae5) bg_status_flat_pane_g6

0x9c3f,	// (0x00028aed) bg_status_flat_pane_g7

0x63b2,	// (0x00025260) tabs_3_active_pane_t1_ParamLimits

0x63b2,	// (0x00025260) tabs_3_passive_pane_t1_ParamLimits

0x63cc,	// (0x0002527a) tabs_4_active_pane_t1_ParamLimits

0x63cc,	// (0x0002527a) tabs_4_1_passive_pane_t1_ParamLimits

0x66f3,	// (0x000255a1) tabs_2_active_pane_t1_ParamLimits

0x66f3,	// (0x000255a1) tabs_2_passive_pane_t1_ParamLimits

0x346c,	// (0x0002231a) bg_active_tab_pane_cp4_ParamLimits

0x6705,	// (0x000255b3) tabs_2_long_active_pane_t1_ParamLimits

0x6718,	// (0x000255c6) bg_passive_tab_pane_cp4_ParamLimits

0x8286,	// (0x00027134) list_single_midp_graphic_pane_t1_ParamLimits

0x346c,	// (0x0002231a) bg_active_tab_pane_cp5_ParamLimits

0x6724,	// (0x000255d2) tabs_3_long_active_pane_t1_ParamLimits

0x6718,	// (0x000255c6) bg_passive_tab_pane_cp5_ParamLimits

0x8286,	// (0x00027134) list_single_midp_graphic_pane_t1

0x7e85,	// (0x00026d33) bg_status_flat_pane_ParamLimits

0x7f50,	// (0x00026dfe) indicator_pane_cp2_ParamLimits

0x7f50,	// (0x00026dfe) indicator_pane_cp2

0x8093,	// (0x00026f41) navi_pane_srt_ParamLimits

0x8093,	// (0x00026f41) navi_pane_srt

0x80b7,	// (0x00026f65) popup_clock_digital_analogue_window_cp1

0x102f,	// (0x0001fedd) indicator_pane_t1

0x722a,	// (0x000260d8) copy_highlight_pane

0x722a,	// (0x000260d8) cursor_graphics_pane

0x722a,	// (0x000260d8) graphic_within_text_pane

0x722a,	// (0x000260d8) link_highlight_pane

0xa434,	// (0x000292e2) popup_preview_text_window_t5_ParamLimits

0xa434,	// (0x000292e2) popup_preview_text_window_t5

0x734e,	// (0x000261fc) cursor_digital_pane

0x734e,	// (0x000261fc) cursor_primary_pane

0x735f,	// (0x0002620d) cursor_primary_small_pane

0x7367,	// (0x00026215) cursor_secondary_pane

0x736f,	// (0x0002621d) cursor_title_pane

0x734e,	// (0x000261fc) link_highlight_digital_pane

0x7356,	// (0x00026204) link_highlight_primary_pane

0x735f,	// (0x0002620d) link_highlight_primary_small_pane

0x7367,	// (0x00026215) link_highlight_secondary_pane

0x736f,	// (0x0002621d) link_highlight_title_pane

0x734e,	// (0x000261fc) copy_highlight_digital_pane

0x734e,	// (0x000261fc) copy_highlight_primary_pane

0x735f,	// (0x0002620d) copy_highlight_primary_small_pane

0x7367,	// (0x00026215) copy_highlight_secondary_pane

0x736f,	// (0x0002621d) copy_highlight_title_pane

0x7367,	// (0x00026215) graphic_text_digital_pane

0x9cad,	// (0x00028b5b) graphic_text_primary_pane

0x9cb6,	// (0x00028b64) graphic_text_primary_small_pane

0x735f,	// (0x0002620d) graphic_text_secondary_pane

0x734e,	// (0x000261fc) graphic_text_title_pane

0x7377,	// (0x00026225) cursor_primary_pane_g1

0x9c9f,	// (0x00028b4d) cursor_text_primary_t1

0x9c87,	// (0x00028b35) cursor_primary_small_pane_g1

0x9c91,	// (0x00028b3f) cursor_text_primary_small_t1

0x9c6f,	// (0x00028b1d) cursor_primary_small_pane_g1_copy1

0x9c79,	// (0x00028b27) cursor_text_primary_small_t1_copy1

0x9c57,	// (0x00028b05) cursor_text_title_t1

0x9c65,	// (0x00028b13) cursor_title_pane_g1

0x7377,	// (0x00026225) cursor_digital_pane_g1

0x7381,	// (0x0002622f) cursor_text_digital_t1

0x738f,	// (0x0002623d) link_highlight_primary_pane_g1

0x9c00,	// (0x00028aae) link_highlight_primary_pane_t1

0x738f,	// (0x0002623d) link_highlight_primary_small_pane_g1

0x7397,	// (0x00026245) link_highlight_primary_small_pane_t1

0x73a6,	// (0x00026254) link_highlight_secondary_pane_g1

0x73ae,	// (0x0002625c) link_highlight_secondary_pane_t1

0x9b74,	// (0x00028a22) link_highlight_title_pane_g1

0x9b7c,	// (0x00028a2a) link_highlight_title_pane_t1

0x9b5d,	// (0x00028a0b) link_highlight_digital_pane_g1

0x9b65,	// (0x00028a13) link_highlight_digital_pane_t1

0x9a25,	// (0x000288d3) copy_highlight_primary_pane_g1

0x9a3c,	// (0x000288ea) copy_highlight_primary_pane_t1

0x9a25,	// (0x000288d3) copy_highlight_primary_small_pane_g1

0x9a2d,	// (0x000288db) copy_highlight_primary_small_pane_t1

0x73bd,	// (0x0002626b) copy_highlight_secondary_pane_g1

0x73c5,	// (0x00026273) copy_highlight_secondary_pane_t1

0x9a0e,	// (0x000288bc) copy_highlight_title_pane_g1

0x9a16,	// (0x000288c4) copy_highlight_title_pane_t1

0x9a25,	// (0x000288d3) copy_highlight_digital_pane_g1

0xad16,	// (0x00029bc4) copy_highlight_digital_pane_t1

0xac6a,	// (0x00029b18) graphic_text_primary_pane_g1

0xacfa,	// (0x00029ba8) graphic_text_primary_pane_t1

0xad08,	// (0x00029bb6) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0002e882) graphic_text_primary_pane_t

0xacd6,	// (0x00029b84) graphic_text_primary_small_pane_g1

0xacde,	// (0x00029b8c) graphic_text_primary_small_pane_t1

0xacec,	// (0x00029b9a) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0002e87d) graphic_text_primary_small_pane_t

0xacb2,	// (0x00029b60) graphic_text_secondary_pane_g1

0xacba,	// (0x00029b68) graphic_text_secondary_pane_t1

0xacc8,	// (0x00029b76) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0002e878) graphic_text_secondary_pane_t

0xac8e,	// (0x00029b3c) graphic_text_title_pane_g1

0xac96,	// (0x00029b44) graphic_text_title_pane_t1

0xaca4,	// (0x00029b52) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0002e873) graphic_text_title_pane_t

0xac6a,	// (0x00029b18) graphic_text_digital_pane_g1

0xac72,	// (0x00029b20) graphic_text_digital_pane_t1

0xac80,	// (0x00029b2e) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0002e86e) graphic_text_digital_pane_t

0x0fd1,	// (0x0001fe7f) navi_icon_pane_srt_ParamLimits

0x0fd1,	// (0x0001fe7f) navi_icon_pane_srt

0x0f75,	// (0x0001fe23) navi_midp_pane_srt

0x0f75,	// (0x0001fe23) navi_navi_pane_srt

0x0fd1,	// (0x0001fe7f) navi_text_pane_srt_ParamLimits

0x0fd1,	// (0x0001fe7f) navi_text_pane_srt

0xac35,	// (0x00029ae3) navi_navi_icon_text_pane_srt

0xac3d,	// (0x00029aeb) navi_navi_pane_srt_g1_ParamLimits

0xac3d,	// (0x00029aeb) navi_navi_pane_srt_g1

0xac4f,	// (0x00029afd) navi_navi_pane_srt_g2_ParamLimits

0xac4f,	// (0x00029afd) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0002e869) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0002e869) navi_navi_pane_srt_g

0xac61,	// (0x00029b0f) navi_navi_tabs_pane_srt

0xac35,	// (0x00029ae3) navi_navi_text_pane_srt

0xac35,	// (0x00029ae3) navi_navi_volume_pane_srt

0xac26,	// (0x00029ad4) navi_navi_text_pane_srt_t1

0x85e0,	// (0x0002748e) navi_navi_volume_pane_srt_g1

0x85e8,	// (0x00027496) volume_small_pane_srt_ParamLimits

0x85e8,	// (0x00027496) volume_small_pane_srt

0x73d4,	// (0x00026282) volume_small_pane_srt_g1_ParamLimits

0x73d4,	// (0x00026282) volume_small_pane_srt_g1

0x73e4,	// (0x00026292) volume_small_pane_srt_g2_ParamLimits

0x73e4,	// (0x00026292) volume_small_pane_srt_g2

0x73f5,	// (0x000262a3) volume_small_pane_srt_g3_ParamLimits

0x73f5,	// (0x000262a3) volume_small_pane_srt_g3

0x7406,	// (0x000262b4) volume_small_pane_srt_g4_ParamLimits

0x7406,	// (0x000262b4) volume_small_pane_srt_g4

0x7417,	// (0x000262c5) volume_small_pane_srt_g5_ParamLimits

0x7417,	// (0x000262c5) volume_small_pane_srt_g5

0x7428,	// (0x000262d6) volume_small_pane_srt_g6_ParamLimits

0x7428,	// (0x000262d6) volume_small_pane_srt_g6

0x7439,	// (0x000262e7) volume_small_pane_srt_g7_ParamLimits

0x7439,	// (0x000262e7) volume_small_pane_srt_g7

0x744a,	// (0x000262f8) volume_small_pane_srt_g8_ParamLimits

0x744a,	// (0x000262f8) volume_small_pane_srt_g8

0x745b,	// (0x00026309) volume_small_pane_srt_g9_ParamLimits

0x745b,	// (0x00026309) volume_small_pane_srt_g9

0x746c,	// (0x0002631a) volume_small_pane_srt_g10_ParamLimits

0x746c,	// (0x0002631a) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0002e611) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0002e611) volume_small_pane_srt_g

0x127b,	// (0x00020129) query_popup_data_pane_cp2

0xac0c,	// (0x00029aba) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xac0c,	// (0x00029aba) navi_navi_icon_text_pane_srt_t1

0x9cad,	// (0x00028b5b) navi_tabs_2_long_pane_srt

0x9cad,	// (0x00028b5b) navi_tabs_2_pane_srt

0x9cad,	// (0x00028b5b) navi_tabs_3_long_pane_srt

0x9cad,	// (0x00028b5b) navi_tabs_3_pane_srt

0x9cad,	// (0x00028b5b) navi_tabs_4_pane_srt

0x85c0,	// (0x0002746e) tabs_2_active_pane_srt_ParamLimits

0x85c0,	// (0x0002746e) tabs_2_active_pane_srt

0x85d0,	// (0x0002747e) tabs_2_passive_pane_srt_ParamLimits

0x85d0,	// (0x0002747e) tabs_2_passive_pane_srt

0x7797,	// (0x00026645) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7797,	// (0x00026645) bg_passive_tab_pane_cp1_srt

0xabd8,	// (0x00029a86) bg_passive_tab_pane_g1_cp1_srt

0x6d2f,	// (0x00025bdd) bg_passive_tab_pane_g2_cp1_srt

0xabe1,	// (0x00029a8f) bg_passive_tab_pane_g3_cp1_srt

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp1_srt_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp1_srt

0xabea,	// (0x00029a98) tabs_2_active_pane_srt_g1

0xabf2,	// (0x00029aa0) tabs_2_active_pane_srt_t1_ParamLimits

0xabf2,	// (0x00029aa0) tabs_2_active_pane_srt_t1

0xabd8,	// (0x00029a86) bg_active_tab_pane_g1_cp1_srt

0x6d2f,	// (0x00025bdd) bg_active_tab_pane_g2_cp1_srt

0xabe1,	// (0x00029a8f) bg_active_tab_pane_g3_cp1_srt

0x858d,	// (0x0002743b) tabs_3_active_pane_srt_ParamLimits

0x858d,	// (0x0002743b) tabs_3_active_pane_srt

0x859e,	// (0x0002744c) tabs_3_passive_pane_cp_srt_ParamLimits

0x859e,	// (0x0002744c) tabs_3_passive_pane_cp_srt

0x85af,	// (0x0002745d) tabs_3_passive_pane_srt_ParamLimits

0x85af,	// (0x0002745d) tabs_3_passive_pane_srt

0x7797,	// (0x00026645) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7797,	// (0x00026645) bg_passive_tab_pane_cp2_srt

0x747d,	// (0x0002632b) bg_passive_tab_pane_g1_cp2_srt

0x6d2f,	// (0x00025bdd) bg_passive_tab_pane_g2_cp2_srt

0x7486,	// (0x00026334) bg_passive_tab_pane_g3_cp2_srt

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp2_srt_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_active_tab_pane_cp2_srt

0xabbe,	// (0x00029a6c) tabs_3_active_pane_srt_g1

0xabc6,	// (0x00029a74) tabs_3_active_pane_srt_t1_ParamLimits

0xabc6,	// (0x00029a74) tabs_3_active_pane_srt_t1

0x747d,	// (0x0002632b) bg_active_tab_pane_g1_cp2_srt

0x6d2f,	// (0x00025bdd) bg_active_tab_pane_g2_cp2_srt

0x7486,	// (0x00026334) bg_active_tab_pane_g3_cp2_srt

0x8545,	// (0x000273f3) tabs_4_active_pane_srt_ParamLimits

0x8545,	// (0x000273f3) tabs_4_active_pane_srt

0x8557,	// (0x00027405) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8557,	// (0x00027405) tabs_4_passive_pane_cp2_srt

0x7725,	// (0x000265d3) aid_size_cell_toolbar

0x6718,	// (0x000255c6) main_idle_act_pane_ParamLimits

0x7960,	// (0x0002680e) popup_large_graphic_colour_window_ParamLimits

0x7d07,	// (0x00026bb5) popup_toolbar_window_ParamLimits

0x7d07,	// (0x00026bb5) popup_toolbar_window

0x586e,	// (0x0002471c) list_single_graphic_2heading_pane_ParamLimits

0x586e,	// (0x0002471c) list_single_graphic_2heading_pane

0x32a3,	// (0x00022151) aid_size_cell_apps_grid_lsc_pane

0x32b5,	// (0x00022163) aid_size_cell_apps_grid_prt_pane

0x7797,	// (0x00026645) bg_wml_button_pane_cp1_ParamLimits

0x7797,	// (0x00026645) bg_wml_button_pane_cp1

0x96a5,	// (0x00028553) form_midp_field_text_pane_t1_ParamLimits

0x9491,	// (0x0002833f) input_focus_pane_cp050_ParamLimits

0x96d0,	// (0x0002857e) list_midp_form_text_pane_ParamLimits

0x9682,	// (0x00028530) input_focus_pane_cp051_ParamLimits

0x9696,	// (0x00028544) list_midp_choice_pane_ParamLimits

0x954a,	// (0x000283f8) list_single_2graphic_pane_cp3_ParamLimits

0x954a,	// (0x000283f8) list_single_2graphic_pane_cp3

0x9563,	// (0x00028411) list_single_midp_graphic_pane_ParamLimits

0x9563,	// (0x00028411) list_single_midp_graphic_pane

0x56eb,	// (0x00024599) list_single_graphic_2heading_pane_g1_ParamLimits

0x56eb,	// (0x00024599) list_single_graphic_2heading_pane_g1

0x56f7,	// (0x000245a5) list_single_graphic_2heading_pane_g4_ParamLimits

0x56f7,	// (0x000245a5) list_single_graphic_2heading_pane_g4

0x5703,	// (0x000245b1) list_single_graphic_2heading_pane_g5_ParamLimits

0x5703,	// (0x000245b1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0002e664) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0002e664) list_single_graphic_2heading_pane_g

0x570f,	// (0x000245bd) list_single_graphic_2heading_pane_t1_ParamLimits

0x570f,	// (0x000245bd) list_single_graphic_2heading_pane_t1

0x5723,	// (0x000245d1) list_single_graphic_2heading_pane_t2_ParamLimits

0x5723,	// (0x000245d1) list_single_graphic_2heading_pane_t2

0x573f,	// (0x000245ed) list_single_graphic_2heading_pane_t3_ParamLimits

0x573f,	// (0x000245ed) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0002e66b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0002e66b) list_single_graphic_2heading_pane_t

0x92d3,	// (0x00028181) bg_popup_sub_pane_cp2

0x92fd,	// (0x000281ab) grid_toobar_pane

0x8216,	// (0x000270c4) cell_toolbar_pane_ParamLimits

0x8216,	// (0x000270c4) cell_toolbar_pane

0x9339,	// (0x000281e7) cell_toolbar_pane_g1_ParamLimits

0x9339,	// (0x000281e7) cell_toolbar_pane_g1

0x934d,	// (0x000281fb) cell_toolbar_pane_g2_ParamLimits

0x934d,	// (0x000281fb) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0002e679) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0002e679) cell_toolbar_pane_g

0x936f,	// (0x0002821d) grid_highlight_pane_cp2_ParamLimits

0x936f,	// (0x0002821d) grid_highlight_pane_cp2

0x9389,	// (0x00028237) toolbar_button_pane

0x9395,	// (0x00028243) toolbar_button_pane_g1

0x939d,	// (0x0002824b) toolbar_button_pane_g2

0x93a5,	// (0x00028253) toolbar_button_pane_g3

0x93ad,	// (0x0002825b) toolbar_button_pane_g4

0x93b5,	// (0x00028263) toolbar_button_pane_g5

0x93bd,	// (0x0002826b) toolbar_button_pane_g6

0x93c5,	// (0x00028273) toolbar_button_pane_g7

0x93cd,	// (0x0002827b) toolbar_button_pane_g8

0x93d5,	// (0x00028283) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x0002e67e) toolbar_button_pane_g

0x824e,	// (0x000270fc) list_single_2graphic_pane_g1_cp3_ParamLimits

0x824e,	// (0x000270fc) list_single_2graphic_pane_g1_cp3

0x825a,	// (0x00027108) list_single_2graphic_pane_g2_cp3_ParamLimits

0x825a,	// (0x00027108) list_single_2graphic_pane_g2_cp3

0x7054,	// (0x00025f02) list_single_2graphic_pane_g3_cp3

0xf548,	// (0x0002e3f6) list_single_2graphic_pane_g4_cp3_ParamLimits

0xf548,	// (0x0002e3f6) list_single_2graphic_pane_g4_cp3

0x826b,	// (0x00027119) list_single_2graphic_pane_t1_cp3_ParamLimits

0x826b,	// (0x00027119) list_single_2graphic_pane_t1_cp3

0x7048,	// (0x00025ef6) list_single_midp_graphic_pane_g2_ParamLimits

0x7048,	// (0x00025ef6) list_single_midp_graphic_pane_g2

0x772d,	// (0x000265db) aid_zoom_text_primary

0x56db,	// (0x00024589) aid_zoom_text_secondary

0x753a,	// (0x000263e8) status_small_pane_g7_ParamLimits

0x753a,	// (0x000263e8) status_small_pane_g7

0x755d,	// (0x0002640b) status_small_pane_t1_ParamLimits

0x6325,	// (0x000251d3) title_pane_g2

0x0003,

0xf554,	// (0x0002e402) title_pane_g

0x6586,	// (0x00025434) aid_size_cell_colour_1_pane_ParamLimits

0x6586,	// (0x00025434) aid_size_cell_colour_1_pane

0x659a,	// (0x00025448) aid_size_cell_colour_2_pane_ParamLimits

0x659a,	// (0x00025448) aid_size_cell_colour_2_pane

0x65ae,	// (0x0002545c) aid_size_cell_colour_3_pane_ParamLimits

0x65ae,	// (0x0002545c) aid_size_cell_colour_3_pane

0x65c2,	// (0x00025470) aid_size_cell_colour_4_pane_ParamLimits

0x65c2,	// (0x00025470) aid_size_cell_colour_4_pane

0x6772,	// (0x00025620) title_pane_stacon_g1_ParamLimits

0x6772,	// (0x00025620) title_pane_stacon_g1

0x9a93,	// (0x00028941) popup_note_wait_window_g3_ParamLimits

0x9a93,	// (0x00028941) popup_note_wait_window_g3

0x9b0a,	// (0x000289b8) popup_note_wait_window_t5_ParamLimits

0x9b0a,	// (0x000289b8) popup_note_wait_window_t5

0x0f75,	// (0x0001fe23) main_feb_china_hwr_fs_writing_pane

0x7827,	// (0x000266d5) popup_feb_china_hwr_fs_window_ParamLimits

0x7827,	// (0x000266d5) popup_feb_china_hwr_fs_window

0x829c,	// (0x0002714a) aid_size_cell_hwr_fs_ParamLimits

0x829c,	// (0x0002714a) aid_size_cell_hwr_fs

0x9491,	// (0x0002833f) bg_popup_sub_pane_cp3_ParamLimits

0x9491,	// (0x0002833f) bg_popup_sub_pane_cp3

0x82b1,	// (0x0002715f) grid_hwr_fs_pane_ParamLimits

0x82b1,	// (0x0002715f) grid_hwr_fs_pane

0x82c9,	// (0x00027177) linegrid_hwr_fs_pane_ParamLimits

0x82c9,	// (0x00027177) linegrid_hwr_fs_pane

0x82d9,	// (0x00027187) cell_hwr_fs_pane_ParamLimits

0x82d9,	// (0x00027187) cell_hwr_fs_pane

0x949d,	// (0x0002834b) linegrid_hwr_fs_pane_g1_ParamLimits

0x949d,	// (0x0002834b) linegrid_hwr_fs_pane_g1

0x94a9,	// (0x00028357) linegrid_hwr_fs_pane_g2_ParamLimits

0x94a9,	// (0x00028357) linegrid_hwr_fs_pane_g2

0x94bb,	// (0x00028369) linegrid_hwr_fs_pane_g3_ParamLimits

0x94bb,	// (0x00028369) linegrid_hwr_fs_pane_g3

0x82fd,	// (0x000271ab) linegrid_hwr_fs_pane_g4_ParamLimits

0x82fd,	// (0x000271ab) linegrid_hwr_fs_pane_g4

0x831b,	// (0x000271c9) linegrid_hwr_fs_pane_g5_ParamLimits

0x831b,	// (0x000271c9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0002e6a9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002e6a9) linegrid_hwr_fs_pane_g

0x94c7,	// (0x00028375) cell_hwr_fs_pane_g1_ParamLimits

0x94c7,	// (0x00028375) cell_hwr_fs_pane_g1

0x814d,	// (0x00026ffb) cell_hwr_fs_pane_g2_ParamLimits

0x814d,	// (0x00026ffb) cell_hwr_fs_pane_g2

0x94dd,	// (0x0002838b) cell_hwr_fs_pane_g3_ParamLimits

0x94dd,	// (0x0002838b) cell_hwr_fs_pane_g3

0x94ea,	// (0x00028398) cell_hwr_fs_pane_g4_ParamLimits

0x94ea,	// (0x00028398) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0002e6b4) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0002e6b4) cell_hwr_fs_pane_g

0x8331,	// (0x000271df) cell_hwr_fs_pane_t1

0x0f75,	// (0x0001fe23) grid_highlight_pane_cp6

0x0f75,	// (0x0001fe23) main_idle_act2_pane

0x2f9d,	// (0x00021e4b) aid_inside_area_popup_secondary

0xa143,	// (0x00028ff1) aid_inside_area_window_primary_ParamLimits

0xa143,	// (0x00028ff1) aid_inside_area_window_primary

0xad25,	// (0x00029bd3) ai2_news_ticker_pane

0xad2d,	// (0x00029bdb) aid_size_cell_ai1_link_ParamLimits

0xad2d,	// (0x00029bdb) aid_size_cell_ai1_link

0xad47,	// (0x00029bf5) popup_ai2_data_window_ParamLimits

0xad47,	// (0x00029bf5) popup_ai2_data_window

0xad65,	// (0x00029c13) popup_ai2_link_window_ParamLimits

0xad65,	// (0x00029c13) popup_ai2_link_window

0x9491,	// (0x0002833f) bg_popup_sub_pane_cp4_ParamLimits

0x9491,	// (0x0002833f) bg_popup_sub_pane_cp4

0xad7b,	// (0x00029c29) grid_ai2_link_pane_ParamLimits

0xad7b,	// (0x00029c29) grid_ai2_link_pane

0xad92,	// (0x00029c40) popup_ai2_link_window_g1_ParamLimits

0xad92,	// (0x00029c40) popup_ai2_link_window_g1

0xad9e,	// (0x00029c4c) popup_ai2_link_window_g2_ParamLimits

0xad9e,	// (0x00029c4c) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0002e887) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0002e887) popup_ai2_link_window_g

0xadaf,	// (0x00029c5d) ai2_mp_button_pane

0xadb7,	// (0x00029c65) ai2_mp_volume_pane

0x9682,	// (0x00028530) bg_popup_sub_pane_cp5_ParamLimits

0x9682,	// (0x00028530) bg_popup_sub_pane_cp5

0xadbf,	// (0x00029c6d) heading_ai2_gene_pane_ParamLimits

0xadbf,	// (0x00029c6d) heading_ai2_gene_pane

0xadcb,	// (0x00029c79) list_ai2_gene_pane_ParamLimits

0xadcb,	// (0x00029c79) list_ai2_gene_pane

0xae13,	// (0x00029cc1) cell_ai2_link_pane_ParamLimits

0xae13,	// (0x00029cc1) cell_ai2_link_pane

0xae29,	// (0x00029cd7) cell_ai2_link_pane_g1

0x0f75,	// (0x0001fe23) grid_highlight_pane_cp7

0x85fd,	// (0x000274ab) ai2_mp_volume_pane_g1

0xaefc,	// (0x00029daa) ai2_mp_volume_pane_g2

0xae71,	// (0x00029d1f) list_ai2_gene_pane_t1

0xaf04,	// (0x00029db2) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0002e8a0) ai2_mp_volume_pane_g

0x8605,	// (0x000274b3) volume_small_pane_cp3

0xaf0c,	// (0x00029dba) aid_size_cell_ai2_button

0xaf14,	// (0x00029dc2) grid_ai2_button_pane

0xaf1d,	// (0x00029dcb) cell_ai2_button_pane_ParamLimits

0xaf1d,	// (0x00029dcb) cell_ai2_button_pane

0x0f6b,	// (0x0001fe19) cell_ai2_button_pane_g1

0x0f75,	// (0x0001fe23) grid_highlight_pane_cp8

0xaebc,	// (0x00029d6a) ai2_gene_pane_t1_ParamLimits

0xaebc,	// (0x00029d6a) ai2_gene_pane_t1

0x771b,	// (0x000265c9) aid_height_parent_landscape

0xa7ef,	// (0x0002969d) aid_height_set_list

0xa800,	// (0x000296ae) aid_size_parent

0xab46,	// (0x000299f4) aid_size_cell_graphic_pane_ParamLimits

0xaddb,	// (0x00029c89) popup_ai2_data_window_g1_ParamLimits

0xaddb,	// (0x00029c89) popup_ai2_data_window_g1

0xade7,	// (0x00029c95) ai2_news_ticker_pane_g1

0xadef,	// (0x00029c9d) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0002e88c) ai2_news_ticker_pane_g

0xadf7,	// (0x00029ca5) ai2_news_ticker_pane_t1

0xae05,	// (0x00029cb3) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0002e891) ai2_news_ticker_pane_t

0xae32,	// (0x00029ce0) heading_ai2_gene_pane_g1

0xae3a,	// (0x00029ce8) heading_ai2_gene_pane_t1_ParamLimits

0xae3a,	// (0x00029ce8) heading_ai2_gene_pane_t1

0xae4f,	// (0x00029cfd) list_highlight_pane_cp6

0xae57,	// (0x00029d05) ai2_gene_pane_ParamLimits

0xae57,	// (0x00029d05) ai2_gene_pane

0xae7f,	// (0x00029d2d) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0002e896) list_ai2_gene_pane_t

0xae8d,	// (0x00029d3b) list_highlight_pane_cp8_ParamLimits

0xae8d,	// (0x00029d3b) list_highlight_pane_cp8

0xae9e,	// (0x00029d4c) ai2_gene_pane_g1_ParamLimits

0xae9e,	// (0x00029d4c) ai2_gene_pane_g1

0xaeb0,	// (0x00029d5e) ai2_gene_pane_g2_ParamLimits

0xaeb0,	// (0x00029d5e) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0002e89b) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0002e89b) ai2_gene_pane_g

0x2d02,	// (0x00021bb0) scroll_pane_cp12

0x76d2,	// (0x00026580) control_pane_t3_ParamLimits

0x76d2,	// (0x00026580) control_pane_t3

0x754e,	// (0x000263fc) status_small_pane_g8_ParamLimits

0x754e,	// (0x000263fc) status_small_pane_g8

0x7925,	// (0x000267d3) popup_find_window_ParamLimits

0x7b50,	// (0x000269fe) popup_note_image_window_ParamLimits

0x5757,	// (0x00024605) list_double2_graphic_pane_vc_g1_ParamLimits

0x5757,	// (0x00024605) list_double2_graphic_pane_vc_g1

0x5763,	// (0x00024611) list_double2_graphic_pane_vc_g2_ParamLimits

0x5763,	// (0x00024611) list_double2_graphic_pane_vc_g2

0x576f,	// (0x0002461d) list_double2_graphic_pane_vc_g3_ParamLimits

0x576f,	// (0x0002461d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0002e672) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002e672) list_double2_graphic_pane_vc_g

0x577b,	// (0x00024629) list_double2_graphic_pane_vc_t1_ParamLimits

0x577b,	// (0x00024629) list_double2_graphic_pane_vc_t1

0x56f7,	// (0x000245a5) list_single_heading_pane_vc_g1_ParamLimits

0x56f7,	// (0x000245a5) list_single_heading_pane_vc_g1

0x5703,	// (0x000245b1) list_single_heading_pane_vc_g2_ParamLimits

0x5703,	// (0x000245b1) list_single_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002e693) list_single_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002e693) list_single_heading_pane_vc_g

0x5791,	// (0x0002463f) list_single_heading_pane_vc_t1_ParamLimits

0x5791,	// (0x0002463f) list_single_heading_pane_vc_t1

0x57a9,	// (0x00024657) list_single_heading_pane_vc_t2_ParamLimits

0x57a9,	// (0x00024657) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0002e698) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0002e698) list_single_heading_pane_vc_t

0x93dd,	// (0x0002828b) list_setting_number_pane_vc_g1_ParamLimits

0x93dd,	// (0x0002828b) list_setting_number_pane_vc_g1

0x93e9,	// (0x00028297) list_setting_number_pane_vc_g2_ParamLimits

0x93e9,	// (0x00028297) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0002e69d) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0002e69d) list_setting_number_pane_vc_g

0x93f5,	// (0x000282a3) list_setting_number_pane_vc_t1_ParamLimits

0x93f5,	// (0x000282a3) list_setting_number_pane_vc_t1

0x9409,	// (0x000282b7) list_setting_number_pane_vc_t2_ParamLimits

0x9409,	// (0x000282b7) list_setting_number_pane_vc_t2

0x9425,	// (0x000282d3) list_setting_number_pane_vc_t3_ParamLimits

0x9425,	// (0x000282d3) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0002e6a2) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0002e6a2) list_setting_number_pane_vc_t

0x9453,	// (0x00028301) set_value_pane_vc_ParamLimits

0x9453,	// (0x00028301) set_value_pane_vc

0x586e,	// (0x0002471c) list_double2_graphic_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_double2_graphic_pane_vc

0xa9d8,	// (0x00029886) list_double2_large_graphic_pane_vc_ParamLimits

0xa9d8,	// (0x00029886) list_double2_large_graphic_pane_vc

0x586e,	// (0x0002471c) list_double2_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_double2_pane_vc

0x586e,	// (0x0002471c) list_double_graphic_heading_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_double_graphic_heading_pane_vc

0x586e,	// (0x0002471c) list_double_graphic_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_double_graphic_pane_vc

0x586e,	// (0x0002471c) list_double_heading_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_double_heading_pane_vc

0xa9d8,	// (0x00029886) list_double_large_graphic_pane_vc_ParamLimits

0xa9d8,	// (0x00029886) list_double_large_graphic_pane_vc

0x586e,	// (0x0002471c) list_double_number_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_double_number_pane_vc

0x586e,	// (0x0002471c) list_double_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_double_pane_vc

0x586e,	// (0x0002471c) list_double_time_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_double_time_pane_vc

0x586e,	// (0x0002471c) list_setting_number_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_setting_number_pane_vc

0x586e,	// (0x0002471c) list_setting_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_setting_pane_vc

0x586e,	// (0x0002471c) list_single_graphic_heading_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_single_graphic_heading_pane_vc

0x586e,	// (0x0002471c) list_single_heading_pane_vc_ParamLimits

0x586e,	// (0x0002471c) list_single_heading_pane_vc

0xa9ec,	// (0x0002989a) list_single_number_heading_pane_vc_ParamLimits

0xa9ec,	// (0x0002989a) list_single_number_heading_pane_vc

0x5757,	// (0x00024605) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5757,	// (0x00024605) list_double_graphic_heading_pane_vc_g1

0x56f7,	// (0x000245a5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x56f7,	// (0x000245a5) list_double_graphic_heading_pane_vc_g2

0x5703,	// (0x000245b1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5703,	// (0x000245b1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x0002e8a7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x0002e8a7) list_double_graphic_heading_pane_vc_g

0x58b3,	// (0x00024761) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x58b3,	// (0x00024761) list_double_graphic_heading_pane_vc_t1

0x5791,	// (0x0002463f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5791,	// (0x0002463f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x0002e8ae) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x0002e8ae) list_double_graphic_heading_pane_vc_t

0x93dd,	// (0x0002828b) list_setting_pane_vc_g1_ParamLimits

0x93dd,	// (0x0002828b) list_setting_pane_vc_g1

0x93e9,	// (0x00028297) list_setting_pane_vc_g2_ParamLimits

0x93e9,	// (0x00028297) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0002e69d) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0002e69d) list_setting_pane_vc_g

0xb184,	// (0x0002a032) list_setting_pane_vc_t1_ParamLimits

0xb184,	// (0x0002a032) list_setting_pane_vc_t1

0xb1a0,	// (0x0002a04e) list_setting_pane_vc_t2_ParamLimits

0xb1a0,	// (0x0002a04e) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0002e8dc) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002e8dc) list_setting_pane_vc_t

0x9453,	// (0x00028301) set_value_pane_cp_vc_ParamLimits

0x9453,	// (0x00028301) set_value_pane_cp_vc

0x56f7,	// (0x000245a5) list_single_number_heading_pane_vc_g1_ParamLimits

0x56f7,	// (0x000245a5) list_single_number_heading_pane_vc_g1

0x5703,	// (0x000245b1) list_single_number_heading_pane_vc_g2_ParamLimits

0x5703,	// (0x000245b1) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002e693) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002e693) list_single_number_heading_pane_vc_g

0x5791,	// (0x0002463f) list_single_number_heading_pane_vc_t1_ParamLimits

0x5791,	// (0x0002463f) list_single_number_heading_pane_vc_t1

0x58c5,	// (0x00024773) list_single_number_heading_pane_vc_t2_ParamLimits

0x58c5,	// (0x00024773) list_single_number_heading_pane_vc_t2

0x58d7,	// (0x00024785) list_single_number_heading_pane_vc_t3_ParamLimits

0x58d7,	// (0x00024785) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0002e8e1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0002e8e1) list_single_number_heading_pane_vc_t

0x5757,	// (0x00024605) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5757,	// (0x00024605) list_single_graphic_heading_pane_vc_g1

0x56f7,	// (0x000245a5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x56f7,	// (0x000245a5) list_single_graphic_heading_pane_vc_g4

0x5703,	// (0x000245b1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5703,	// (0x000245b1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f9,	// (0x0002e8a7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x0002e8a7) list_single_graphic_heading_pane_vc_g

0x5791,	// (0x0002463f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5791,	// (0x0002463f) list_single_graphic_heading_pane_vc_t1

0x58e9,	// (0x00024797) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x58e9,	// (0x00024797) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3a,	// (0x0002e8e8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3a,	// (0x0002e8e8) list_single_graphic_heading_pane_vc_t

0x56f7,	// (0x000245a5) list_double2_pane_vc_g1_ParamLimits

0x56f7,	// (0x000245a5) list_double2_pane_vc_g1

0x5703,	// (0x000245b1) list_double2_pane_vc_g2_ParamLimits

0x5703,	// (0x000245b1) list_double2_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002e693) list_double2_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002e693) list_double2_pane_vc_g

0x58fb,	// (0x000247a9) list_double2_pane_vc_t1_ParamLimits

0x58fb,	// (0x000247a9) list_double2_pane_vc_t1

0x5911,	// (0x000247bf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5911,	// (0x000247bf) list_double2_large_graphic_pane_vc_g1

0x591d,	// (0x000247cb) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x591d,	// (0x000247cb) list_double2_large_graphic_pane_vc_g2

0x5929,	// (0x000247d7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5929,	// (0x000247d7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3f,	// (0x0002e8ed) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3f,	// (0x0002e8ed) list_double2_large_graphic_pane_vc_g

0x5935,	// (0x000247e3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5935,	// (0x000247e3) list_double2_large_graphic_pane_vc_t1

0x594b,	// (0x000247f9) list_double_time_pane_vc_g1_ParamLimits

0x594b,	// (0x000247f9) list_double_time_pane_vc_g1

0x5957,	// (0x00024805) list_double_time_pane_vc_g2_ParamLimits

0x5957,	// (0x00024805) list_double_time_pane_vc_g2

0x0001,

0xfa46,	// (0x0002e8f4) list_double_time_pane_vc_g_ParamLimits

0xfa46,	// (0x0002e8f4) list_double_time_pane_vc_g

0x5963,	// (0x00024811) list_double_time_pane_vc_t1_ParamLimits

0x5963,	// (0x00024811) list_double_time_pane_vc_t1

0x598d,	// (0x0002483b) list_double_time_pane_vc_t2_ParamLimits

0x598d,	// (0x0002483b) list_double_time_pane_vc_t2

0x59d6,	// (0x00024884) list_double_time_pane_vc_t3_ParamLimits

0x59d6,	// (0x00024884) list_double_time_pane_vc_t3

0x59e8,	// (0x00024896) list_double_time_pane_vc_t4_ParamLimits

0x59e8,	// (0x00024896) list_double_time_pane_vc_t4

0x0003,

0xfa4b,	// (0x0002e8f9) list_double_time_pane_vc_t_ParamLimits

0xfa4b,	// (0x0002e8f9) list_double_time_pane_vc_t

0x56f7,	// (0x000245a5) list_double_pane_vc_g1_ParamLimits

0x56f7,	// (0x000245a5) list_double_pane_vc_g1

0x5703,	// (0x000245b1) list_double_pane_vc_g2_ParamLimits

0x5703,	// (0x000245b1) list_double_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002e693) list_double_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002e693) list_double_pane_vc_g

0x5a0d,	// (0x000248bb) list_double_pane_vc_t1_ParamLimits

0x5a0d,	// (0x000248bb) list_double_pane_vc_t1

0x5a21,	// (0x000248cf) list_double_pane_vc_t2_ParamLimits

0x5a21,	// (0x000248cf) list_double_pane_vc_t2

0x0001,

0xfa54,	// (0x0002e902) list_double_pane_vc_t_ParamLimits

0xfa54,	// (0x0002e902) list_double_pane_vc_t

0x56f7,	// (0x000245a5) list_double_number_pane_vc_g1_ParamLimits

0x56f7,	// (0x000245a5) list_double_number_pane_vc_g1

0x5703,	// (0x000245b1) list_double_number_pane_vc_g2_ParamLimits

0x5703,	// (0x000245b1) list_double_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002e693) list_double_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002e693) list_double_number_pane_vc_g

0x5a37,	// (0x000248e5) list_double_number_pane_vc_t1_ParamLimits

0x5a37,	// (0x000248e5) list_double_number_pane_vc_t1

0x5a4b,	// (0x000248f9) list_double_number_pane_vc_t2_ParamLimits

0x5a4b,	// (0x000248f9) list_double_number_pane_vc_t2

0x5a21,	// (0x000248cf) list_double_number_pane_vc_t3_ParamLimits

0x5a21,	// (0x000248cf) list_double_number_pane_vc_t3

0x0002,

0xfa59,	// (0x0002e907) list_double_number_pane_vc_t_ParamLimits

0xfa59,	// (0x0002e907) list_double_number_pane_vc_t

0x5a5f,	// (0x0002490d) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5a5f,	// (0x0002490d) list_double_large_graphic_pane_vc_g1

0x5a70,	// (0x0002491e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5a70,	// (0x0002491e) list_double_large_graphic_pane_vc_g2

0x5929,	// (0x000247d7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5929,	// (0x000247d7) list_double_large_graphic_pane_vc_g3

0x5a7f,	// (0x0002492d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5a7f,	// (0x0002492d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa60,	// (0x0002e90e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa60,	// (0x0002e90e) list_double_large_graphic_pane_vc_g

0x5a8b,	// (0x00024939) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5a8b,	// (0x00024939) list_double_large_graphic_pane_vc_t1

0x5aa4,	// (0x00024952) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5aa4,	// (0x00024952) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa69,	// (0x0002e917) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa69,	// (0x0002e917) list_double_large_graphic_pane_vc_t

0x56f7,	// (0x000245a5) list_double_heading_pane_vc_g1_ParamLimits

0x56f7,	// (0x000245a5) list_double_heading_pane_vc_g1

0x5703,	// (0x000245b1) list_double_heading_pane_vc_g2_ParamLimits

0x5703,	// (0x000245b1) list_double_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002e693) list_double_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002e693) list_double_heading_pane_vc_g

0x5abb,	// (0x00024969) list_double_heading_pane_vc_t1_ParamLimits

0x5abb,	// (0x00024969) list_double_heading_pane_vc_t1

0x5791,	// (0x0002463f) list_double_heading_pane_vc_t2_ParamLimits

0x5791,	// (0x0002463f) list_double_heading_pane_vc_t2

0x0001,

0xfa6e,	// (0x0002e91c) list_double_heading_pane_vc_t_ParamLimits

0xfa6e,	// (0x0002e91c) list_double_heading_pane_vc_t

0x5acd,	// (0x0002497b) list_double_graphic_pane_vc_g1_ParamLimits

0x5acd,	// (0x0002497b) list_double_graphic_pane_vc_g1

0x5add,	// (0x0002498b) list_double_graphic_pane_vc_g2_ParamLimits

0x5add,	// (0x0002498b) list_double_graphic_pane_vc_g2

0x5aec,	// (0x0002499a) list_double_graphic_pane_vc_g3_ParamLimits

0x5aec,	// (0x0002499a) list_double_graphic_pane_vc_g3

0x0002,

0xfa73,	// (0x0002e921) list_double_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0002e921) list_double_graphic_pane_vc_g

0x5af8,	// (0x000249a6) list_double_graphic_pane_vc_t1_ParamLimits

0x5af8,	// (0x000249a6) list_double_graphic_pane_vc_t1

0x5a21,	// (0x000248cf) list_double_graphic_pane_vc_t2_ParamLimits

0x5a21,	// (0x000248cf) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0002e928) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0002e928) list_double_graphic_pane_vc_t

0x5f39,	// (0x00024de7) aid_size_cell_fastswap

0x5f41,	// (0x00024def) aid_size_cell_touch_ParamLimits

0x5f41,	// (0x00024def) aid_size_cell_touch

0x61a2,	// (0x00025050) popup_fast_swap_wide_window_ParamLimits

0x61a2,	// (0x00025050) popup_fast_swap_wide_window

0x62b8,	// (0x00025166) touch_pane_ParamLimits

0x62b8,	// (0x00025166) touch_pane

0x2d87,	// (0x00021c35) button_value_adjust_pane_cp2

0x2d87,	// (0x00021c35) button_value_adjust_pane_cp4

0x5417,	// (0x000242c5) form_field_data_pane_cp2

0x543c,	// (0x000242ea) form_field_data_wide_pane_cp2

0x32ec,	// (0x0002219a) bg_scroll_pane_ParamLimits

0x6960,	// (0x0002580e) scroll_handle_pane_ParamLimits

0x6974,	// (0x00025822) scroll_sc2_down_pane_ParamLimits

0x6974,	// (0x00025822) scroll_sc2_down_pane

0x331d,	// (0x000221cb) scroll_sc2_up_pane_ParamLimits

0x331d,	// (0x000221cb) scroll_sc2_up_pane

0xb686,	// (0x0002a534) grid_wheel_folder_pane_g1_ParamLimits

0xb686,	// (0x0002a534) grid_wheel_folder_pane_g1

0x6e79,	// (0x00025d27) clock_nsta_pane_cp2_ParamLimits

0x6e79,	// (0x00025d27) clock_nsta_pane_cp2

0x6718,	// (0x000255c6) listscroll_midp_pane_ParamLimits

0x7232,	// (0x000260e0) midp_canvas_pane

0x7713,	// (0x000265c1) nsta_clock_indic_pane

0x7769,	// (0x00026617) listscroll_form_pane_vc

0x7785,	// (0x00026633) listscroll_set_pane_vc_ParamLimits

0x7785,	// (0x00026633) listscroll_set_pane_vc

0x7ea1,	// (0x00026d4f) clock_nsta_pane

0x7f1e,	// (0x00026dcc) indicator_nsta_pane

0x92d3,	// (0x00028181) bg_popup_sub_pane_cp2_ParamLimits

0x92e7,	// (0x00028195) find_pane_cp2_ParamLimits

0x92e7,	// (0x00028195) find_pane_cp2

0x92fd,	// (0x000281ab) grid_toobar_pane_ParamLimits

0x9465,	// (0x00028313) list_form_gen_pane_vc_ParamLimits

0x9465,	// (0x00028313) list_form_gen_pane_vc

0x947b,	// (0x00028329) scroll_pane_cp8_vc_ParamLimits

0x947b,	// (0x00028329) scroll_pane_cp8_vc

0x94f7,	// (0x000283a5) data_form_wide_pane_vc_ParamLimits

0x94f7,	// (0x000283a5) data_form_wide_pane_vc

0x9503,	// (0x000283b1) form_field_data_wide_pane_vc_g1

0x950b,	// (0x000283b9) form_field_data_wide_pane_vc_t1_ParamLimits

0x950b,	// (0x000283b9) form_field_data_wide_pane_vc_t1

0x2df2,	// (0x00021ca0) input_focus_pane_cp6_vc_ParamLimits

0x2df2,	// (0x00021ca0) input_focus_pane_cp6_vc

0x980d,	// (0x000286bb) list_midp_pane_ParamLimits

0x9819,	// (0x000286c7) scroll_pane_cp16_ParamLimits

0x9819,	// (0x000286c7) scroll_pane_cp16

0x9867,	// (0x00028715) button_value_adjust_pane_ParamLimits

0x9867,	// (0x00028715) button_value_adjust_pane

0xa812,	// (0x000296c0) button_value_adjust_pane_cp6_ParamLimits

0xa812,	// (0x000296c0) button_value_adjust_pane_cp6

0xa960,	// (0x0002980e) settings_code_pane_cp_ParamLimits

0xa960,	// (0x0002980e) settings_code_pane_cp

0x0f6b,	// (0x0001fe19) cell_touch_pane_g1

0x0f6b,	// (0x0001fe19) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0002e5b7) cell_touch_pane_g

0xaf2f,	// (0x00029ddd) cell_touch_pane_cp_ParamLimits

0xaf2f,	// (0x00029ddd) cell_touch_pane_cp

0xaf3f,	// (0x00029ded) cell_touch_pane_ParamLimits

0xaf3f,	// (0x00029ded) cell_touch_pane

0x0f6b,	// (0x0001fe19) scroll_sc2_down_pane_g1

0x0f6b,	// (0x0001fe19) scroll_sc2_up_pane_g1

0x0f75,	// (0x0001fe23) bg_set_opt_pane_cp4_vc

0xaf50,	// (0x00029dfe) list_set_graphic_pane_vc_g1_ParamLimits

0xaf50,	// (0x00029dfe) list_set_graphic_pane_vc_g1

0xaf5c,	// (0x00029e0a) list_set_graphic_pane_vc_g2_ParamLimits

0xaf5c,	// (0x00029e0a) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x0002e8b3) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x0002e8b3) list_set_graphic_pane_vc_g

0xaf68,	// (0x00029e16) text_primary_small_cp13_vc_ParamLimits

0xaf68,	// (0x00029e16) text_primary_small_cp13_vc

0xaf80,	// (0x00029e2e) list_set_graphic_pane_vc_ParamLimits

0xaf80,	// (0x00029e2e) list_set_graphic_pane_vc

0x0f75,	// (0x0001fe23) input_focus_pane_cp2_vc

0x0f6b,	// (0x0001fe19) setting_code_pane_vc_g1

0x0fe8,	// (0x0001fe96) setting_code_pane_vc_t1

0xaf95,	// (0x00029e43) set_text_pane_vc_t1_ParamLimits

0xaf95,	// (0x00029e43) set_text_pane_vc_t1

0x0f75,	// (0x0001fe23) input_focus_pane_cp1_vc

0xafb3,	// (0x00029e61) list_set_text_pane_vc

0x0f6b,	// (0x0001fe19) setting_text_pane_vc_g1

0x0f75,	// (0x0001fe23) bg_set_opt_pane_cp2_vc

0x0fdf,	// (0x0001fe8d) setting_slider_graphic_pane_vc_g1

0xafbd,	// (0x00029e6b) setting_slider_graphic_pane_vc_t1

0xafcf,	// (0x00029e7d) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x0002e8b8) setting_slider_graphic_pane_vc_t

0xafe1,	// (0x00029e8f) slider_set_pane_cp_vc

0xafeb,	// (0x00029e99) slider_set_pane_vc_g1

0xaff4,	// (0x00029ea2) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x0002e8bd) slider_set_pane_vc_g

0x2eb6,	// (0x00021d64) set_opt_bg_pane_g1_copy1

0x2ebe,	// (0x00021d6c) set_opt_bg_pane_g2_copy1

0xb020,	// (0x00029ece) set_opt_bg_pane_g3_copy1

0x2ece,	// (0x00021d7c) set_opt_bg_pane_g4_copy1

0x2ed6,	// (0x00021d84) set_opt_bg_pane_g5_copy1

0x2ede,	// (0x00021d8c) set_opt_bg_pane_g6_copy1

0xb02a,	// (0x00029ed8) set_opt_bg_pane_g7_copy1

0xb034,	// (0x00029ee2) set_opt_bg_pane_g8_copy1

0xb03e,	// (0x00029eec) set_opt_bg_pane_g9_copy1

0x0f75,	// (0x0001fe23) bg_set_opt_pane_cp_vc

0xb048,	// (0x00029ef6) setting_slider_pane_vc_t1

0xb057,	// (0x00029f05) setting_slider_pane_vc_t2

0xb069,	// (0x00029f17) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x0002e8cc) setting_slider_pane_vc_t

0xb07b,	// (0x00029f29) slider_set_pane_vc

0x833f,	// (0x000271ed) volume_set_pane_vc_g1

0x8348,	// (0x000271f6) volume_set_pane_vc_g2

0x8351,	// (0x000271ff) volume_set_pane_vc_g3

0x835a,	// (0x00027208) volume_set_pane_vc_g4

0x8363,	// (0x00027211) volume_set_pane_vc_g5

0x836c,	// (0x0002721a) volume_set_pane_vc_g6

0x8375,	// (0x00027223) volume_set_pane_vc_g7

0x837e,	// (0x0002722c) volume_set_pane_vc_g8

0x8387,	// (0x00027235) volume_set_pane_vc_g9

0x8390,	// (0x0002723e) volume_set_pane_vc_g10

0x0009,

0xf8bc,	// (0x0002e76a) volume_set_pane_vc_g

0xb085,	// (0x00029f33) volume_set_pane_vc

0xb08f,	// (0x00029f3d) button_value_adjust_pane_cp1_vc

0xb099,	// (0x00029f47) list_highlight_pane_cp2_vc

0xb0a2,	// (0x00029f50) list_set_pane_vc_ParamLimits

0xb0a2,	// (0x00029f50) list_set_pane_vc

0xb112,	// (0x00029fc0) main_pane_set_vc_t1_ParamLimits

0xb112,	// (0x00029fc0) main_pane_set_vc_t1

0xb127,	// (0x00029fd5) main_pane_set_vc_t2_ParamLimits

0xb127,	// (0x00029fd5) main_pane_set_vc_t2

0xb139,	// (0x00029fe7) main_pane_set_vc_t3_ParamLimits

0xb139,	// (0x00029fe7) main_pane_set_vc_t3

0xb14d,	// (0x00029ffb) main_pane_set_vc_t4_ParamLimits

0xb14d,	// (0x00029ffb) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0002e8d3) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0002e8d3) main_pane_set_vc_t

0xb161,	// (0x0002a00f) setting_code_pane_vc_ParamLimits

0xb161,	// (0x0002a00f) setting_code_pane_vc

0xb172,	// (0x0002a020) setting_slider_graphic_pane_vc

0xb172,	// (0x0002a020) setting_slider_pane_vc

0xb172,	// (0x0002a020) setting_text_pane_vc

0xb172,	// (0x0002a020) setting_volume_pane_vc

0xb17c,	// (0x0002a02a) scroll_pane_cp121_vc

0x2d75,	// (0x00021c23) set_content_pane_vc

0xb1bc,	// (0x0002a06a) button_value_adjust_pane_g1

0xb1c5,	// (0x0002a073) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0002e92d) button_value_adjust_pane_g

0xb1ce,	// (0x0002a07c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb1ce,	// (0x0002a07c) form_field_slider_wide_pane_vc_t1

0xb1e2,	// (0x0002a090) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb1e2,	// (0x0002a090) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0002e932) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0002e932) form_field_slider_wide_pane_vc_t

0x0fc3,	// (0x0001fe71) input_focus_pane_cp10_vc_ParamLimits

0x0fc3,	// (0x0001fe71) input_focus_pane_cp10_vc

0xb210,	// (0x0002a0be) slider_cont_pane_cp1_vc_ParamLimits

0xb210,	// (0x0002a0be) slider_cont_pane_cp1_vc

0xb220,	// (0x0002a0ce) slider_form_pane_g1_cp2

0xaff4,	// (0x00029ea2) slider_form_pane_g2_cp2

0xb24d,	// (0x0002a0fb) form_field_slider_pane_vc_t3

0xb25b,	// (0x0002a109) form_field_slider_pane_vc_t4

0xb269,	// (0x0002a117) slider_form_pane_vc_ParamLimits

0xb269,	// (0x0002a117) slider_form_pane_vc

0xb276,	// (0x0002a124) form_field_slider_pane_vc_t1_ParamLimits

0xb276,	// (0x0002a124) form_field_slider_pane_vc_t1

0xb1e2,	// (0x0002a090) form_field_slider_pane_vc_t2_ParamLimits

0xb1e2,	// (0x0002a090) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0002e944) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0002e944) form_field_slider_pane_vc_t

0x0fc3,	// (0x0001fe71) input_focus_pane_cp9_vc_ParamLimits

0x0fc3,	// (0x0001fe71) input_focus_pane_cp9_vc

0xb292,	// (0x0002a140) slider_cont_pane_vc_ParamLimits

0xb292,	// (0x0002a140) slider_cont_pane_vc

0xb2a4,	// (0x0002a152) list_form_graphic_pane_cp_vc_ParamLimits

0xb2a4,	// (0x0002a152) list_form_graphic_pane_cp_vc

0x9503,	// (0x000283b1) form_field_popup_wide_pane_vc_g1

0xb2b9,	// (0x0002a167) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb2b9,	// (0x0002a167) form_field_popup_wide_pane_vc_t1

0x2df2,	// (0x00021ca0) input_focus_pane_cp8_vc_ParamLimits

0x2df2,	// (0x00021ca0) input_focus_pane_cp8_vc

0xb2fe,	// (0x0002a1ac) list_form_wide_pane_vc_ParamLimits

0xb2fe,	// (0x0002a1ac) list_form_wide_pane_vc

0xb30a,	// (0x0002a1b8) list_form_graphic_pane_vc_g1

0xb312,	// (0x0002a1c0) list_form_graphic_pane_vc_t1_ParamLimits

0xb312,	// (0x0002a1c0) list_form_graphic_pane_vc_t1

0x0fd1,	// (0x0001fe7f) list_highlight_pane_cp5_vc_ParamLimits

0x0fd1,	// (0x0001fe7f) list_highlight_pane_cp5_vc

0xb32e,	// (0x0002a1dc) list_form_graphic_pane_vc_ParamLimits

0xb32e,	// (0x0002a1dc) list_form_graphic_pane_vc

0x9503,	// (0x000283b1) form_field_popup_pane_vc_g1

0xb344,	// (0x0002a1f2) form_field_popup_pane_vc_t1_ParamLimits

0xb344,	// (0x0002a1f2) form_field_popup_pane_vc_t1

0x2df2,	// (0x00021ca0) input_focus_pane_cp7_vc_ParamLimits

0x2df2,	// (0x00021ca0) input_focus_pane_cp7_vc

0xb35b,	// (0x0002a209) list_form_pane_vc_ParamLimits

0xb35b,	// (0x0002a209) list_form_pane_vc

0xb367,	// (0x0002a215) data_form_pane_vc_t1_ParamLimits

0xb367,	// (0x0002a215) data_form_pane_vc_t1

0x2eb6,	// (0x00021d64) input_focus_pane_vc_g1

0x2ebe,	// (0x00021d6c) input_focus_pane_vc_g2

0x2ec6,	// (0x00021d74) input_focus_pane_vc_g3

0x2ece,	// (0x00021d7c) input_focus_pane_vc_g4

0x2ed6,	// (0x00021d84) input_focus_pane_vc_g5

0x2ede,	// (0x00021d8c) input_focus_pane_vc_g6

0x2ee6,	// (0x00021d94) input_focus_pane_vc_g7

0x2eee,	// (0x00021d9c) input_focus_pane_vc_g8

0x2ef6,	// (0x00021da4) input_focus_pane_vc_g9

0x0f6b,	// (0x0001fe19) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0002e540) input_focus_pane_vc_g

0x94f7,	// (0x000283a5) data_form_pane_vc_ParamLimits

0x94f7,	// (0x000283a5) data_form_pane_vc

0x9503,	// (0x000283b1) form_field_data_pane_vc_g1

0xb384,	// (0x0002a232) form_field_data_pane_vc_t1_ParamLimits

0xb384,	// (0x0002a232) form_field_data_pane_vc_t1

0x2df2,	// (0x00021ca0) input_focus_pane_vc_ParamLimits

0x2df2,	// (0x00021ca0) input_focus_pane_vc

0xb39e,	// (0x0002a24c) button_value_adjust_pane_cp3_vc

0xb3a6,	// (0x0002a254) button_value_adjust_pane_cp5_vc

0xb3ae,	// (0x0002a25c) form_field_data_pane_vc_ParamLimits

0xb3ae,	// (0x0002a25c) form_field_data_pane_vc

0xb3c9,	// (0x0002a277) form_field_data_pane_vc_cp2

0xb3d1,	// (0x0002a27f) form_field_data_wide_pane_vc_ParamLimits

0xb3d1,	// (0x0002a27f) form_field_data_wide_pane_vc

0xb3eb,	// (0x0002a299) form_field_data_wide_pane_vc_cp2

0xb3f3,	// (0x0002a2a1) form_field_popup_pane_vc_ParamLimits

0xb3f3,	// (0x0002a2a1) form_field_popup_pane_vc

0xb40e,	// (0x0002a2bc) form_field_popup_wide_pane_vc_ParamLimits

0xb40e,	// (0x0002a2bc) form_field_popup_wide_pane_vc

0xb428,	// (0x0002a2d6) form_field_slider_pane_vc_ParamLimits

0xb428,	// (0x0002a2d6) form_field_slider_pane_vc

0xb43b,	// (0x0002a2e9) form_field_slider_wide_pane_vc_ParamLimits

0xb43b,	// (0x0002a2e9) form_field_slider_wide_pane_vc

0xb44e,	// (0x0002a2fc) grid_touch_1_pane_ParamLimits

0xb44e,	// (0x0002a2fc) grid_touch_1_pane

0xb45a,	// (0x0002a308) grid_touch_2_pane_ParamLimits

0xb45a,	// (0x0002a308) grid_touch_2_pane

0x75e2,	// (0x00026490) touch_pane_g1_ParamLimits

0x75e2,	// (0x00026490) touch_pane_g1

0xb474,	// (0x0002a322) cell_app_pane_cp_wide_ParamLimits

0xb474,	// (0x0002a322) cell_app_pane_cp_wide

0xb485,	// (0x0002a333) grid_popup_fast_wide_pane_ParamLimits

0xb485,	// (0x0002a333) grid_popup_fast_wide_pane

0xb499,	// (0x0002a347) scroll_pane_cp19_ParamLimits

0xb499,	// (0x0002a347) scroll_pane_cp19

0x0f75,	// (0x0001fe23) bg_popup_window_pane_cp20

0xb4ad,	// (0x0002a35b) listscroll_popup_fast_wide_pane

0x0fd1,	// (0x0001fe7f) grid_indicator_nsta_pane

0xb4b5,	// (0x0002a363) clock_nsta_pane_g1

0xb4be,	// (0x0002a36c) clock_nsta_pane_t1

0xb4da,	// (0x0002a388) cell_indicator_nsta_pane_ParamLimits

0xb4da,	// (0x0002a388) cell_indicator_nsta_pane

0xb512,	// (0x0002a3c0) cell_indicator_nsta_pane_g1

0xb520,	// (0x0002a3ce) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0002e955) cell_indicator_nsta_pane_g

0xb536,	// (0x0002a3e4) clock_nsta_pane_cp

0xb53e,	// (0x0002a3ec) indicator_nsta_pane_cp

0xb547,	// (0x0002a3f5) nsta_clock_indic_pane_g1

0x1027,	// (0x0001fed5) grid_indicator_pane

0x340f,	// (0x000222bd) scroll_pane_cp29

0x6da3,	// (0x00025c51) indicator_nsta_pane_cp2_ParamLimits

0x6da3,	// (0x00025c51) indicator_nsta_pane_cp2

0x0fd1,	// (0x0001fe7f) main_apps_wheel_pane

0x96ea,	// (0x00028598) form_midp_field_text_pane_ParamLimits

0x9839,	// (0x000286e7) scroll_bar_cp050_ParamLimits

0xb5b0,	// (0x0002a45e) cell_indicator_pane_ParamLimits

0xb5b0,	// (0x0002a45e) cell_indicator_pane

0xb5c8,	// (0x0002a476) cell_indicator_pane_g1

0xb5d2,	// (0x0002a480) grid_wheel_folder_pane_ParamLimits

0xb5d2,	// (0x0002a480) grid_wheel_folder_pane

0xb5e6,	// (0x0002a494) list_wheel_apps_pane_ParamLimits

0xb5e6,	// (0x0002a494) list_wheel_apps_pane

0xb5f9,	// (0x0002a4a7) main_apps_wheel_pane_g1_ParamLimits

0xb5f9,	// (0x0002a4a7) main_apps_wheel_pane_g1

0xb615,	// (0x0002a4c3) main_apps_wheel_pane_g2_ParamLimits

0xb615,	// (0x0002a4c3) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0002e971) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0002e971) main_apps_wheel_pane_g

0xb631,	// (0x0002a4df) main_apps_wheel_pane_t1_ParamLimits

0xb631,	// (0x0002a4df) main_apps_wheel_pane_t1

0xb65a,	// (0x0002a508) list_wheel_apps_pane_g1

0xb662,	// (0x0002a510) list_wheel_apps_pane_g2

0xb66a,	// (0x0002a518) list_wheel_apps_pane_g3

0xb672,	// (0x0002a520) list_wheel_apps_pane_g4

0xb67c,	// (0x0002a52a) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0002e976) list_wheel_apps_pane_g

0x70a6,	// (0x00025f54) navi_icon_text_pane

0x7dce,	// (0x00026c7c) aid_fill_nsta

0xb69d,	// (0x0002a54b) navi_icon_text_pane_g1

0xb6ac,	// (0x0002a55a) navi_icon_text_pane_t1

0x6f3c,	// (0x00025dea) list_set_graphic_pane_t1_ParamLimits

0x6f3c,	// (0x00025dea) list_set_graphic_pane_t1

0x9f8a,	// (0x00028e38) popup_midp_note_alarm_window_t6_ParamLimits

0x9f8a,	// (0x00028e38) popup_midp_note_alarm_window_t6

0x9f9c,	// (0x00028e4a) popup_midp_note_alarm_window_t7_ParamLimits

0x9f9c,	// (0x00028e4a) popup_midp_note_alarm_window_t7

0x9fae,	// (0x00028e5c) popup_midp_note_alarm_window_t8_ParamLimits

0x9fae,	// (0x00028e5c) popup_midp_note_alarm_window_t8

0x9fc0,	// (0x00028e6e) popup_midp_note_alarm_window_t9_ParamLimits

0x9fc0,	// (0x00028e6e) popup_midp_note_alarm_window_t9

0x9fd2,	// (0x00028e80) popup_midp_note_alarm_window_t10_ParamLimits

0x9fd2,	// (0x00028e80) popup_midp_note_alarm_window_t10

0x9fe4,	// (0x00028e92) popup_midp_note_alarm_window_t11_ParamLimits

0x9fe4,	// (0x00028e92) popup_midp_note_alarm_window_t11

0x9ff6,	// (0x00028ea4) scroll_pane_cp17_ParamLimits

0x9ff6,	// (0x00028ea4) scroll_pane_cp17

0x833f,	// (0x000271ed) volume_small_pane_cp_g1

0x860e,	// (0x000274bc) volume_small_pane_cp_g2

0x8617,	// (0x000274c5) volume_small_pane_cp_g3

0x8620,	// (0x000274ce) volume_small_pane_cp_g4

0x8629,	// (0x000274d7) volume_small_pane_cp_g5

0x8632,	// (0x000274e0) volume_small_pane_cp_g6

0x863b,	// (0x000274e9) volume_small_pane_cp_g7

0x8644,	// (0x000274f2) volume_small_pane_cp_g8

0x864d,	// (0x000274fb) volume_small_pane_cp_g9

0x8656,	// (0x00027504) volume_small_pane_cp_g10

0x72fb,	// (0x000261a9) midp_ticker_pane_g1_ParamLimits

0x7307,	// (0x000261b5) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0002e60c) midp_ticker_pane_g_ParamLimits

0x7313,	// (0x000261c1) midp_ticker_pane_t1_ParamLimits

0x7de4,	// (0x00026c92) aid_fill_nsta_2

0x9825,	// (0x000286d3) list_form2_midp_pane

0xa9a7,	// (0x00029855) midp_editing_number_pane_ParamLimits

0xa9b6,	// (0x00029864) midp_ticker_pane_ParamLimits

0xb6c1,	// (0x0002a56f) form2_midp_field_pane

0xb6e5,	// (0x0002a593) scroll_pane_cp51

0xb705,	// (0x0002a5b3) form2_midp_button_pane_ParamLimits

0xb705,	// (0x0002a5b3) form2_midp_button_pane

0xb717,	// (0x0002a5c5) form2_midp_content_pane_ParamLimits

0xb717,	// (0x0002a5c5) form2_midp_content_pane

0xb731,	// (0x0002a5df) form2_midp_field_choice_group_pane

0xb739,	// (0x0002a5e7) form2_midp_field_pane_g1

0xb741,	// (0x0002a5ef) form2_midp_field_pane_g2

0xb749,	// (0x0002a5f7) form2_midp_field_pane_g3

0xb751,	// (0x0002a5ff) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0002e99b) form2_midp_field_pane_g

0xb759,	// (0x0002a607) form2_midp_gauge_slider_pane

0xb761,	// (0x0002a60f) form2_midp_gauge_wait_pane

0xb769,	// (0x0002a617) form2_midp_image_pane_ParamLimits

0xb769,	// (0x0002a617) form2_midp_image_pane

0xb784,	// (0x0002a632) form2_midp_label_pane_ParamLimits

0xb784,	// (0x0002a632) form2_midp_label_pane

0xb7a3,	// (0x0002a651) form2_midp_label_pane_cp_ParamLimits

0xb7a3,	// (0x0002a651) form2_midp_label_pane_cp

0xb7c4,	// (0x0002a672) form2_midp_string_pane_ParamLimits

0xb7c4,	// (0x0002a672) form2_midp_string_pane

0x5b0c,	// (0x000249ba) form2_midp_text_pane_ParamLimits

0x5b0c,	// (0x000249ba) form2_midp_text_pane

0xb7d6,	// (0x0002a684) form2_midp_time_pane

0xb7e6,	// (0x0002a694) input_focus_pane_cp51_ParamLimits

0xb7e6,	// (0x0002a694) input_focus_pane_cp51

0xb7fe,	// (0x0002a6ac) form2_midp_label_pane_t1_ParamLimits

0xb7fe,	// (0x0002a6ac) form2_midp_label_pane_t1

0x5b2d,	// (0x000249db) form2_mdip_text_pane_t1_ParamLimits

0x5b2d,	// (0x000249db) form2_mdip_text_pane_t1

0x5b51,	// (0x000249ff) form2_midp_time_pane_t1

0xb84c,	// (0x0002a6fa) form2_midp_gauge_slider_pane_t1

0xb85e,	// (0x0002a70c) form2_midp_gauge_slider_pane_t2

0xb870,	// (0x0002a71e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0002e9a4) form2_midp_gauge_slider_pane_t

0xb882,	// (0x0002a730) form2_midp_slider_pane

0xb88e,	// (0x0002a73c) form2_midp_gauge_wait_pane_t1

0xb89c,	// (0x0002a74a) form2_midp_wait_pane_ParamLimits

0xb89c,	// (0x0002a74a) form2_midp_wait_pane

0x954a,	// (0x000283f8) list_single_2graphic_pane_cp4_ParamLimits

0x954a,	// (0x000283f8) list_single_2graphic_pane_cp4

0xb8c7,	// (0x0002a775) list_single_midp_graphic_pane_cp_ParamLimits

0xb8c7,	// (0x0002a775) list_single_midp_graphic_pane_cp

0x0f75,	// (0x0001fe23) list_highlight_pane_cp20

0xb8eb,	// (0x0002a799) list_single_2graphic_pane_g1_cp4

0xae32,	// (0x00029ce0) list_single_2graphic_pane_g2_cp4

0xb8f3,	// (0x0002a7a1) list_single_2graphic_pane_t1_cp4

0x0fd1,	// (0x0001fe7f) list_highlight_pane_cp21

0xb902,	// (0x0002a7b0) list_single_midp_graphic_pane_g4_cp

0xb911,	// (0x0002a7bf) list_single_midp_graphic_pane_t1_cp

0xb926,	// (0x0002a7d4) form2_mdip_string_pane_t1_ParamLimits

0xb926,	// (0x0002a7d4) form2_mdip_string_pane_t1

0x0f75,	// (0x0001fe23) bg_wml_button_pane_cp2

0x0f6b,	// (0x0001fe19) form2_midp_image_pane_g1

0x51c9,	// (0x00024077) list_double_large_graphic_pane_g5_ParamLimits

0x51c9,	// (0x00024077) list_double_large_graphic_pane_g5

0x6718,	// (0x000255c6) midp_form_pane_ParamLimits

0x0fd1,	// (0x0001fe7f) main_apps_wheel_pane_ParamLimits

0x7b78,	// (0x00026a26) popup_preview_window_ParamLimits

0x7b78,	// (0x00026a26) popup_preview_window

0x7d5f,	// (0x00026c0d) popup_touch_info_window_ParamLimits

0x7d5f,	// (0x00026c0d) popup_touch_info_window

0x7d81,	// (0x00026c2f) popup_touch_menu_window_ParamLimits

0x7d81,	// (0x00026c2f) popup_touch_menu_window

0x0f61,	// (0x0001fe0f) bg_popup_sub_pane_cp6

0xb9cb,	// (0x0002a879) list_touch_menu_pane

0xb9d3,	// (0x0002a881) list_single_touch_menu_pane_ParamLimits

0xb9d3,	// (0x0002a881) list_single_touch_menu_pane

0xb9eb,	// (0x0002a899) list_single_touch_menu_pane_t1

0x0fd1,	// (0x0001fe7f) bg_popup_sub_pane_cp7_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_popup_sub_pane_cp7

0xb9f9,	// (0x0002a8a7) heading_sub_pane

0xba01,	// (0x0002a8af) list_touch_info_pane_ParamLimits

0xba01,	// (0x0002a8af) list_touch_info_pane

0xba10,	// (0x0002a8be) list_single_touch_info_pane_ParamLimits

0xba10,	// (0x0002a8be) list_single_touch_info_pane

0xba22,	// (0x0002a8d0) list_single_touch_info_pane_t1

0xba30,	// (0x0002a8de) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0002e9b2) list_single_touch_info_pane_t

0x722a,	// (0x000260d8) bg_popup_heading_pane_cp

0xba3e,	// (0x0002a8ec) heading_sub_pane_t1

0x9491,	// (0x0002833f) bg_popup_preview_window_pane_cp_ParamLimits

0x9491,	// (0x0002833f) bg_popup_preview_window_pane_cp

0xb9f9,	// (0x0002a8a7) heading_preview_pane

0xba01,	// (0x0002a8af) list_preview_pane_ParamLimits

0xba01,	// (0x0002a8af) list_preview_pane

0xba4c,	// (0x0002a8fa) popup_preview_window_g1

0xba10,	// (0x0002a8be) list_single_preview_pane_ParamLimits

0xba10,	// (0x0002a8be) list_single_preview_pane

0xba54,	// (0x0002a902) list_single_preview_pane_g1

0xba5c,	// (0x0002a90a) list_single_preview_pane_t1

0xba22,	// (0x0002a8d0) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0002e9b7) list_single_preview_pane_t

0xba6a,	// (0x0002a918) bg_popup_heading_pane_cp2_ParamLimits

0xba6a,	// (0x0002a918) bg_popup_heading_pane_cp2

0xba80,	// (0x0002a92e) heading_preview_pane_g1

0xba88,	// (0x0002a936) heading_preview_pane_t1_ParamLimits

0xba88,	// (0x0002a936) heading_preview_pane_t1

0x103e,	// (0x0001feec) soft_indicator_pane_t1_ParamLimits

0x2cdf,	// (0x00021b8d) scroll_pane_ParamLimits

0x3314,	// (0x000221c2) scroll_sc2_left_pane

0x330b,	// (0x000221b9) scroll_sc2_right_pane

0x3333,	// (0x000221e1) scroll_bg_pane_g1_ParamLimits

0x3348,	// (0x000221f6) scroll_bg_pane_g2_ParamLimits

0x3360,	// (0x0002220e) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0002e597) scroll_bg_pane_g_ParamLimits

0x3333,	// (0x000221e1) scroll_handle_pane_g1_ParamLimits

0x3382,	// (0x00022230) scroll_handle_pane_g2_ParamLimits

0x3360,	// (0x0002220e) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0002e59e) scroll_handle_pane_g_ParamLimits

0x77bf,	// (0x0002666d) popup_choice_list_window_ParamLimits

0x77bf,	// (0x0002666d) popup_choice_list_window

0x92df,	// (0x0002818d) choice_list_pane

0x9361,	// (0x0002820f) cell_toolbar_pane_t1

0x9389,	// (0x00028237) toolbar_button_pane_ParamLimits

0xa4c6,	// (0x00029374) ai_gene_pane_1_t2_ParamLimits

0xa4c6,	// (0x00029374) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0002e7c6) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0002e7c6) ai_gene_pane_1_t

0xbaa5,	// (0x0002a953) scroll_sc2_left_pane_g1

0xbaa5,	// (0x0002a953) scroll_sc2_right_pane_g1

0x7797,	// (0x00026645) bg_popup_sub_pane_cp10

0xbaaf,	// (0x0002a95d) list_choice_list_pane

0xbac8,	// (0x0002a976) list_single_choice_list_pane_ParamLimits

0xbac8,	// (0x0002a976) list_single_choice_list_pane

0xbae0,	// (0x0002a98e) list_single_choice_list_pane_g1

0x2fdb,	// (0x00021e89) list_single_choice_list_pane_t1_ParamLimits

0x2fdb,	// (0x00021e89) list_single_choice_list_pane_t1

0xbae8,	// (0x0002a996) choice_list_pane_g1

0xbaf0,	// (0x0002a99e) choice_list_pane_t1

0x0f61,	// (0x0001fe0f) input_focus_pane_cp11

0x31a9,	// (0x00022057) title_pane_stacon_g2_ParamLimits

0x31a9,	// (0x00022057) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0002e57d) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002e57d) title_pane_stacon_g

0x722a,	// (0x000260d8) cursor_press_pane

0x7879,	// (0x00026727) popup_fep_hwr_window_ParamLimits

0x7879,	// (0x00026727) popup_fep_hwr_window

0x7903,	// (0x000267b1) popup_fep_vkb_window_ParamLimits

0x7903,	// (0x000267b1) popup_fep_vkb_window

0xbafe,	// (0x0002a9ac) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0002e9e0) fep_vkb_side_pane_g_ParamLimits

0x8698,	// (0x00027546) fep_hwr_candidate_pane_ParamLimits

0x8698,	// (0x00027546) fep_hwr_candidate_pane

0x86c2,	// (0x00027570) fep_hwr_side_pane_ParamLimits

0x86c2,	// (0x00027570) fep_hwr_side_pane

0x86e4,	// (0x00027592) fep_hwr_top_pane_ParamLimits

0x86e4,	// (0x00027592) fep_hwr_top_pane

0x86fc,	// (0x000275aa) fep_hwr_write_pane_ParamLimits

0x86fc,	// (0x000275aa) fep_hwr_write_pane

0xfb32,	// (0x0002e9e0) fep_vkb_side_pane_g

0xbb06,	// (0x0002a9b4) fep_hwr_top_pane_g1

0xbb18,	// (0x0002a9c6) fep_hwr_top_pane_g2

0x8728,	// (0x000275d6) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0002e9bc) fep_hwr_top_pane_g

0x873d,	// (0x000275eb) fep_hwr_top_text_pane

0x69f4,	// (0x000258a2) fep_hwr_top_text_pane_g1

0xbb4e,	// (0x0002a9fc) fep_hwr_top_text_pane_t1

0x8847,	// (0x000276f5) fep_hwr_candidate_pane_g1

0xbd99,	// (0x0002ac47) fep_vkb_keypad_pane_g3_ParamLimits

0xbd99,	// (0x0002ac47) fep_vkb_keypad_pane_g3

0xbdc5,	// (0x0002ac73) fep_vkb_keypad_pane_g4_ParamLimits

0xbdc5,	// (0x0002ac73) fep_vkb_keypad_pane_g4

0xbe3c,	// (0x0002acea) fep_vkb_bottom_pane_g2_ParamLimits

0xbe3c,	// (0x0002acea) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0002e9e7) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0002e9e7) fep_vkb_bottom_pane_g

0xbaa5,	// (0x0002a953) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0002e9f1) cell_vkb_side_pane_g

0xbec7,	// (0x0002ad75) cell_vkb_side_pane_t1

0xbed5,	// (0x0002ad83) cell_vkb_side_pane_t1_copy1

0xbaa5,	// (0x0002a953) bg_fep_vkb_candidate_pane_g2

0xc019,	// (0x0002aec7) cell_vkb_candidate_pane_ParamLimits

0xbb5c,	// (0x0002aa0a) aid_size_cell_vkb_ParamLimits

0xbb5c,	// (0x0002aa0a) aid_size_cell_vkb

0xc019,	// (0x0002aec7) cell_vkb_candidate_pane

0x8861,	// (0x0002770f) bg_popup_fep_shadow_pane_g1

0xbbee,	// (0x0002aa9c) fep_vkb_bottom_pane_ParamLimits

0xbbee,	// (0x0002aa9c) fep_vkb_bottom_pane

0xbc2b,	// (0x0002aad9) fep_vkb_candidate_pane_ParamLimits

0xbc2b,	// (0x0002aad9) fep_vkb_candidate_pane

0xbc47,	// (0x0002aaf5) fep_vkb_keypad_pane_ParamLimits

0xbc47,	// (0x0002aaf5) fep_vkb_keypad_pane

0xbc7a,	// (0x0002ab28) fep_vkb_side_pane_ParamLimits

0xbc7a,	// (0x0002ab28) fep_vkb_side_pane

0xbcb6,	// (0x0002ab64) fep_vkb_top_pane_ParamLimits

0xbcb6,	// (0x0002ab64) fep_vkb_top_pane

0xbcf2,	// (0x0002aba0) fep_vkb_top_pane_g1_ParamLimits

0xbcf2,	// (0x0002aba0) fep_vkb_top_pane_g1

0xbd01,	// (0x0002abaf) fep_vkb_top_pane_g2_ParamLimits

0xbd01,	// (0x0002abaf) fep_vkb_top_pane_g2

0xbd10,	// (0x0002abbe) fep_vkb_top_pane_g3_ParamLimits

0xbd10,	// (0x0002abbe) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0002e9d7) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0002e9d7) fep_vkb_top_pane_g

0xbd2e,	// (0x0002abdc) fep_vkb_top_text_pane_ParamLimits

0xbd2e,	// (0x0002abdc) fep_vkb_top_text_pane

0xbd3f,	// (0x0002abed) fep_vkb_side_pane_g1_ParamLimits

0xbd3f,	// (0x0002abed) fep_vkb_side_pane_g1

0xbd88,	// (0x0002ac36) grid_vkb_side_pane_ParamLimits

0xbd88,	// (0x0002ac36) grid_vkb_side_pane

0x8869,	// (0x00027717) bg_popup_fep_shadow_pane_g2

0x8872,	// (0x00027720) bg_popup_fep_shadow_pane_g3

0x887a,	// (0x00027728) bg_popup_fep_shadow_pane_g4

0x8883,	// (0x00027731) bg_popup_fep_shadow_pane_g5

0x888d,	// (0x0002773b) bg_popup_fep_shadow_pane_g6

0x8895,	// (0x00027743) bg_popup_fep_shadow_pane_g7

0x2ed6,	// (0x00021d84) bg_popup_fep_shadow_pane_g8

0xbde7,	// (0x0002ac95) grid_vkb_keypad_number_pane_ParamLimits

0xbde7,	// (0x0002ac95) grid_vkb_keypad_number_pane

0xbdfb,	// (0x0002aca9) grid_vkb_keypad_pane_ParamLimits

0xbdfb,	// (0x0002aca9) grid_vkb_keypad_pane

0xbe21,	// (0x0002accf) fep_vkb_bottom_pane_g1_ParamLimits

0xbe21,	// (0x0002accf) fep_vkb_bottom_pane_g1

0xbe4a,	// (0x0002acf8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbe4a,	// (0x0002acf8) grid_vkb_keypad_bottom_left_pane

0xbe5f,	// (0x0002ad0d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbe5f,	// (0x0002ad0d) grid_vkb_keypad_bottom_right_pane

0xbe74,	// (0x0002ad22) fep_vkb_top_text_pane_g1

0xbe8f,	// (0x0002ad3d) fep_vkb_top_text_pane_t1

0xbea4,	// (0x0002ad52) cell_vkb_side_pane_ParamLimits

0xbea4,	// (0x0002ad52) cell_vkb_side_pane

0xbaa5,	// (0x0002a953) cell_vkb_side_pane_g1

0xbee3,	// (0x0002ad91) cell_vkb_keypad_pane_ParamLimits

0xbee3,	// (0x0002ad91) cell_vkb_keypad_pane

0xbf70,	// (0x0002ae1e) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0002ea04) bg_popup_fep_shadow_pane_g

0xbaa5,	// (0x0002a953) cell_hwr_side_pane_g1

0xbaa5,	// (0x0002a953) cell_hwr_side_pane_g2

0xbf7a,	// (0x0002ae28) cell_vkb_keypad_pane_t1

0xbf88,	// (0x0002ae36) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbf88,	// (0x0002ae36) cell_vkb_keypad_bottom_left_pane

0xbfa5,	// (0x0002ae53) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbfa5,	// (0x0002ae53) cell_vkb_keypad_bottom_right_pane

0xbaa5,	// (0x0002a953) cell_vkb_keypad_bottom_left_pane_g1

0xbaa5,	// (0x0002a953) cell_vkb_keypad_bottom_right_pane_g1

0xbfde,	// (0x0002ae8c) cell_vkb_keypad_number_pane_ParamLimits

0xbfde,	// (0x0002ae8c) cell_vkb_keypad_number_pane

0xbffd,	// (0x0002aeab) cell_vkb_keypad_number_pane_g1

0xc007,	// (0x0002aeb5) cell_vkb_keypad_number_pane_g2

0xc010,	// (0x0002aebe) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0002e9f6) cell_vkb_keypad_number_pane_g

0xbf7a,	// (0x0002ae28) cell_vkb_keypad_number_pane_t1

0xc03a,	// (0x0002aee8) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x0002e9f1) cell_hwr_side_pane_g

0xc053,	// (0x0002af01) cell_hwr_side_pane_t1

0x88a7,	// (0x00027755) cell_hwr_side_pane_t1_copy1

0xbd20,	// (0x0002abce) cell_hwr_candidate_pane_g1

0x88b5,	// (0x00027763) cell_hwr_candidate_pane_t1

0xbaa5,	// (0x0002a953) cell_vkb_candidate_pane_g2

0xc097,	// (0x0002af45) cell_vkb_candidate_pane_t1

0x865f,	// (0x0002750d) bg_popup_fep_shadow_pane_ParamLimits

0x865f,	// (0x0002750d) bg_popup_fep_shadow_pane

0x0f31,	// (0x0001fddf) bg_fep_hwr_top_pane_g4

0xbb2a,	// (0x0002a9d8) bg_hwr_side_pane_g1_ParamLimits

0xbb2a,	// (0x0002a9d8) bg_hwr_side_pane_g1

0x877b,	// (0x00027629) cell_hwr_side_pane_ParamLimits

0x877b,	// (0x00027629) cell_hwr_side_pane

0x87b8,	// (0x00027666) fep_hwr_write_pane_g1_ParamLimits

0x87b8,	// (0x00027666) fep_hwr_write_pane_g1

0x87c5,	// (0x00027673) fep_hwr_write_pane_g2_ParamLimits

0x87c5,	// (0x00027673) fep_hwr_write_pane_g2

0x87d2,	// (0x00027680) fep_hwr_write_pane_g3_ParamLimits

0x87d2,	// (0x00027680) fep_hwr_write_pane_g3

0x87e0,	// (0x0002768e) fep_hwr_write_pane_g4_ParamLimits

0x87e0,	// (0x0002768e) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0002e9c3) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0002e9c3) fep_hwr_write_pane_g

0x0f31,	// (0x0001fddf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0f31,	// (0x0001fddf) bg_fep_hwr_candidate_pane_g2

0x87f5,	// (0x000276a3) cell_hwr_candidate_pane_ParamLimits

0x87f5,	// (0x000276a3) cell_hwr_candidate_pane

0x8847,	// (0x000276f5) fep_hwr_candidate_pane_g1_ParamLimits

0xbb8a,	// (0x0002aa38) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbb8a,	// (0x0002aa38) bg_popup_fep_shadow_pane_cp2

0xbd20,	// (0x0002abce) fep_vkb_top_pane_g4_ParamLimits

0xbd20,	// (0x0002abce) fep_vkb_top_pane_g4

0xbd66,	// (0x0002ac14) fep_vkb_side_pane_g2_ParamLimits

0xbd66,	// (0x0002ac14) fep_vkb_side_pane_g2

0x5324,	// (0x000241d2) list_setting_pane_t4_ParamLimits

0x5324,	// (0x000241d2) list_setting_pane_t4

0x53c0,	// (0x0002426e) list_setting_number_pane_t5_ParamLimits

0x53c0,	// (0x0002426e) list_setting_number_pane_t5

0x6a5a,	// (0x00025908) list_double_heading_pane_cp2_ParamLimits

0x6a5a,	// (0x00025908) list_double_heading_pane_cp2

0x2e18,	// (0x00021cc6) list_double_heading_pane_g1_cp2_ParamLimits

0x2e18,	// (0x00021cc6) list_double_heading_pane_g1_cp2

0x2e24,	// (0x00021cd2) list_double_heading_pane_g2_cp2_ParamLimits

0x2e24,	// (0x00021cd2) list_double_heading_pane_g2_cp2

0xc0a5,	// (0x0002af53) list_double_heading_pane_t1_cp2_ParamLimits

0xc0a5,	// (0x0002af53) list_double_heading_pane_t1_cp2

0xc0bb,	// (0x0002af69) list_double_heading_pane_t2_cp2_ParamLimits

0xc0bb,	// (0x0002af69) list_double_heading_pane_t2_cp2

0x0f59,	// (0x0001fe07) aid_value_unit2

0x6200,	// (0x000250ae) popup_preview_fixed_window

0x111e,	// (0x0001ffcc) bg_popup_preview_window_pane_cp02

0xc0cd,	// (0x0002af7b) list_preview_fixed_pane

0xc113,	// (0x0002afc1) list_empty_pane_fp_ParamLimits

0xc113,	// (0x0002afc1) list_empty_pane_fp

0xc113,	// (0x0002afc1) list_single_cale_day_pane_fp_ParamLimits

0xc113,	// (0x0002afc1) list_single_cale_day_pane_fp

0xc113,	// (0x0002afc1) list_single_graphic_heading_pane_fp_ParamLimits

0xc113,	// (0x0002afc1) list_single_graphic_heading_pane_fp

0xc113,	// (0x0002afc1) list_single_graphic_pane_fp_ParamLimits

0xc113,	// (0x0002afc1) list_single_graphic_pane_fp

0xc113,	// (0x0002afc1) list_single_heading_pane_fp_ParamLimits

0xc113,	// (0x0002afc1) list_single_heading_pane_fp

0xc113,	// (0x0002afc1) list_single_pane_fp_ParamLimits

0xc113,	// (0x0002afc1) list_single_pane_fp

0xc12c,	// (0x0002afda) list_single_pane_fp_g1_ParamLimits

0xc12c,	// (0x0002afda) list_single_pane_fp_g1

0x5b64,	// (0x00024a12) list_single_pane_fp_g2_ParamLimits

0x5b64,	// (0x00024a12) list_single_pane_fp_g2

0x5b70,	// (0x00024a1e) list_single_pane_fp_g3_ParamLimits

0x5b70,	// (0x00024a1e) list_single_pane_fp_g3

0xc138,	// (0x0002afe6) list_single_pane_fp_g4_ParamLimits

0xc138,	// (0x0002afe6) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0002ea25) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0002ea25) list_single_pane_fp_g

0x5b84,	// (0x00024a32) list_single_pane_fp_t1_ParamLimits

0x5b84,	// (0x00024a32) list_single_pane_fp_t1

0x5b9b,	// (0x00024a49) list_single_graphic_pane_fp_g1_ParamLimits

0x5b9b,	// (0x00024a49) list_single_graphic_pane_fp_g1

0xc12c,	// (0x0002afda) list_single_graphic_pane_fp_g2_ParamLimits

0xc12c,	// (0x0002afda) list_single_graphic_pane_fp_g2

0x5b64,	// (0x00024a12) list_single_graphic_pane_fp_g3_ParamLimits

0x5b64,	// (0x00024a12) list_single_graphic_pane_fp_g3

0x5b70,	// (0x00024a1e) list_single_graphic_pane_fp_g4_ParamLimits

0x5b70,	// (0x00024a1e) list_single_graphic_pane_fp_g4

0xc138,	// (0x0002afe6) list_single_graphic_pane_fp_g5_ParamLimits

0xc138,	// (0x0002afe6) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0002ea2e) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0002ea2e) list_single_graphic_pane_fp_g

0x5ba7,	// (0x00024a55) list_single_graphic_pane_fp_t1_ParamLimits

0x5ba7,	// (0x00024a55) list_single_graphic_pane_fp_t1

0x5b9b,	// (0x00024a49) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5b9b,	// (0x00024a49) list_single_graphic_heading_pane_fp_g1

0xc12c,	// (0x0002afda) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc12c,	// (0x0002afda) list_single_graphic_heading_pane_fp_g2

0x5b64,	// (0x00024a12) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5b64,	// (0x00024a12) list_single_graphic_heading_pane_fp_g3

0x5b70,	// (0x00024a1e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5b70,	// (0x00024a1e) list_single_graphic_heading_pane_fp_g4

0xc138,	// (0x0002afe6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc138,	// (0x0002afe6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0002ea2e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0002ea2e) list_single_graphic_heading_pane_fp_g

0x5bbd,	// (0x00024a6b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5bbd,	// (0x00024a6b) list_single_graphic_heading_pane_fp_t1

0x5bd3,	// (0x00024a81) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5bd3,	// (0x00024a81) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0002ea39) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0002ea39) list_single_graphic_heading_pane_fp_t

0x5be5,	// (0x00024a93) list_single_cale_day_pane_fp_g1_ParamLimits

0x5be5,	// (0x00024a93) list_single_cale_day_pane_fp_g1

0xc144,	// (0x0002aff2) list_single_cale_day_pane_fp_g2_ParamLimits

0xc144,	// (0x0002aff2) list_single_cale_day_pane_fp_g2

0x5c1d,	// (0x00024acb) list_single_cale_day_pane_fp_g3_ParamLimits

0x5c1d,	// (0x00024acb) list_single_cale_day_pane_fp_g3

0x5c45,	// (0x00024af3) list_single_cale_day_pane_fp_g4_ParamLimits

0x5c45,	// (0x00024af3) list_single_cale_day_pane_fp_g4

0x5c69,	// (0x00024b17) list_single_cale_day_pane_fp_g5_ParamLimits

0x5c69,	// (0x00024b17) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0002ea3e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0002ea3e) list_single_cale_day_pane_fp_g

0x5c8d,	// (0x00024b3b) list_single_cale_day_pane_fp_t1_ParamLimits

0x5c8d,	// (0x00024b3b) list_single_cale_day_pane_fp_t1

0x5cb3,	// (0x00024b61) list_single_cale_day_pane_fp_t2_ParamLimits

0x5cb3,	// (0x00024b61) list_single_cale_day_pane_fp_t2

0x5ccc,	// (0x00024b7a) list_single_cale_day_pane_fp_t3_ParamLimits

0x5ccc,	// (0x00024b7a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0002ea49) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0002ea49) list_single_cale_day_pane_fp_t

0xc12c,	// (0x0002afda) list_empty_pane_fp_g1_ParamLimits

0xc12c,	// (0x0002afda) list_empty_pane_fp_g1

0x5ce5,	// (0x00024b93) list_empty_pane_fp_t1

0x5cf3,	// (0x00024ba1) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0002ea50) list_empty_pane_fp_t

0xc12c,	// (0x0002afda) list_single_heading_pane_fp_g1_ParamLimits

0xc12c,	// (0x0002afda) list_single_heading_pane_fp_g1

0x5b64,	// (0x00024a12) list_single_heading_pane_fp_g2_ParamLimits

0x5b64,	// (0x00024a12) list_single_heading_pane_fp_g2

0x5b70,	// (0x00024a1e) list_single_heading_pane_fp_g3_ParamLimits

0x5b70,	// (0x00024a1e) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0002ea55) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0002ea55) list_single_heading_pane_fp_g

0x5d01,	// (0x00024baf) list_single_heading_pane_fp_t1_ParamLimits

0x5d01,	// (0x00024baf) list_single_heading_pane_fp_t1

0x5d13,	// (0x00024bc1) list_single_heading_pane_fp_t2_ParamLimits

0x5d13,	// (0x00024bc1) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0002ea5c) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0002ea5c) list_single_heading_pane_fp_t

0x2ff0,	// (0x00021e9e) aid_size_cell_fast

0x1101,	// (0x0001ffaf) soft_indicator_pane_cp1_t1

0x302d,	// (0x00021edb) cell_app_pane_cp2_ParamLimits

0x302d,	// (0x00021edb) cell_app_pane_cp2

0x8681,	// (0x0002752f) fep_hwr_candidate_drop_down_list_pane

0x0f3f,	// (0x0001fded) fep_hwr_candidate_pane_g3_ParamLimits

0x0f3f,	// (0x0001fded) fep_hwr_candidate_pane_g3

0x0f4c,	// (0x0001fdfa) fep_hwr_candidate_pane_g4_ParamLimits

0x0f4c,	// (0x0001fdfa) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0002e9d0) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0002e9d0) fep_hwr_candidate_pane_g

0xbc1a,	// (0x0002aac8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbc1a,	// (0x0002aac8) fep_vkb_candidate_drop_down_list_pane

0xc042,	// (0x0002aef0) fep_vkb_candidate_pane_g3

0xc04a,	// (0x0002aef8) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0002e9fd) fep_vkb_candidate_pane_g

0xbd20,	// (0x0002abce) cell_hwr_candidate_pane_g1_ParamLimits

0xc192,	// (0x0002b040) cell_hwr_candidate_pane_g3_ParamLimits

0xc192,	// (0x0002b040) cell_hwr_candidate_pane_g3

0xc1b3,	// (0x0002b061) cell_hwr_candidate_pane_g4_ParamLimits

0xc1b3,	// (0x0002b061) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0002ea17) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0002ea17) cell_hwr_candidate_pane_g

0xc061,	// (0x0002af0f) cell_vkb_candidate_pane_g3_ParamLimits

0xc061,	// (0x0002af0f) cell_vkb_candidate_pane_g3

0xc07c,	// (0x0002af2a) cell_vkb_candidate_pane_g4_ParamLimits

0xc07c,	// (0x0002af2a) cell_vkb_candidate_pane_g4

0xc1d4,	// (0x0002b082) cell_app_pane_cp2_g1_ParamLimits

0xc1d4,	// (0x0002b082) cell_app_pane_cp2_g1

0xc1f2,	// (0x0002b0a0) cell_app_pane_cp2_g2_ParamLimits

0xc1f2,	// (0x0002b0a0) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0002ea61) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0002ea61) cell_app_pane_cp2_g

0xc1fe,	// (0x0002b0ac) cell_app_pane_cp2_t1_ParamLimits

0xc1fe,	// (0x0002b0ac) cell_app_pane_cp2_t1

0x2df2,	// (0x00021ca0) grid_highlight_pane_cp1_ParamLimits

0x2df2,	// (0x00021ca0) grid_highlight_pane_cp1

0x88d3,	// (0x00027781) cell_hwr_candidate_pane_cp1_ParamLimits

0x88d3,	// (0x00027781) cell_hwr_candidate_pane_cp1

0xbd20,	// (0x0002abce) fep_hwr_candidate_drop_down_list_pane_g1

0xc210,	// (0x0002b0be) fep_hwr_candidate_drop_down_list_pane_g2

0xc21d,	// (0x0002b0cb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0002ea66) fep_hwr_candidate_drop_down_list_pane_g

0x88f7,	// (0x000277a5) fep_hwr_candidate_drop_down_list_scroll_pane

0x8900,	// (0x000277ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8900,	// (0x000277ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x890d,	// (0x000277bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x890d,	// (0x000277bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x891a,	// (0x000277c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x891a,	// (0x000277c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc061,	// (0x0002af0f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc061,	// (0x0002af0f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc07c,	// (0x0002af2a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc07c,	// (0x0002af2a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8927,	// (0x000277d5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8927,	// (0x000277d5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8942,	// (0x000277f0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8942,	// (0x000277f0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x895d,	// (0x0002780b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x895d,	// (0x0002780b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0002ea6d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0002ea6d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc22a,	// (0x0002b0d8) cell_vkb_candidate_pane_cp1_ParamLimits

0xc22a,	// (0x0002b0d8) cell_vkb_candidate_pane_cp1

0xbd20,	// (0x0002abce) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbd20,	// (0x0002abce) fep_vkb_candidate_drop_down_list_pane_g1

0xc210,	// (0x0002b0be) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc210,	// (0x0002b0be) fep_vkb_candidate_drop_down_list_pane_g2

0xc21d,	// (0x0002b0cb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc21d,	// (0x0002b0cb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0002ea66) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x0002ea66) fep_vkb_candidate_drop_down_list_pane_g

0xc250,	// (0x0002b0fe) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc250,	// (0x0002b0fe) fep_vkb_candidate_drop_down_list_scroll_pane

0xc25d,	// (0x0002b10b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc25d,	// (0x0002b10b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc26a,	// (0x0002b118) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc26a,	// (0x0002b118) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc276,	// (0x0002b124) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc276,	// (0x0002b124) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc192,	// (0x0002b040) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc192,	// (0x0002b040) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc1b3,	// (0x0002b061) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc1b3,	// (0x0002b061) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc282,	// (0x0002b130) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc282,	// (0x0002b130) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc2a3,	// (0x0002b151) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc2a3,	// (0x0002b151) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc2c4,	// (0x0002b172) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc2c4,	// (0x0002b172) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0002ea7e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0002ea7e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6318,	// (0x000251c6) title_pane_g1_ParamLimits

0x6325,	// (0x000251d3) title_pane_g2_ParamLimits

0xf554,	// (0x0002e402) title_pane_g_ParamLimits

0x69e4,	// (0x00025892) aid_call2_pane

0x69ec,	// (0x0002589a) aid_call_pane

0x69f4,	// (0x000258a2) popup_clock_analogue_window_g1

0x69f4,	// (0x000258a2) popup_clock_analogue_window_g2

0x69fc,	// (0x000258aa) popup_clock_analogue_window_g3

0x6a05,	// (0x000258b3) popup_clock_analogue_window_g4

0x0f6b,	// (0x0001fe19) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0002e5ac) popup_clock_analogue_window_g

0x6a0d,	// (0x000258bb) popup_clock_analogue_window_t1

0x6a9d,	// (0x0002594b) clock_digital_number_pane_ParamLimits

0x6a9d,	// (0x0002594b) clock_digital_number_pane

0x6aa9,	// (0x00025957) clock_digital_number_pane_cp02_ParamLimits

0x6aa9,	// (0x00025957) clock_digital_number_pane_cp02

0x6ab5,	// (0x00025963) clock_digital_number_pane_cp03_ParamLimits

0x6ab5,	// (0x00025963) clock_digital_number_pane_cp03

0x6ac1,	// (0x0002596f) clock_digital_number_pane_cp04_ParamLimits

0x6ac1,	// (0x0002596f) clock_digital_number_pane_cp04

0x6acd,	// (0x0002597b) clock_digital_separator_pane_ParamLimits

0x6acd,	// (0x0002597b) clock_digital_separator_pane

0x6ad9,	// (0x00025987) popup_clock_digital_window_t1_ParamLimits

0x6ad9,	// (0x00025987) popup_clock_digital_window_t1

0x0f6b,	// (0x0001fe19) clock_digital_number_pane_g1

0x0f6b,	// (0x0001fe19) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0002e5b7) clock_digital_number_pane_g

0x0f6b,	// (0x0001fe19) clock_digital_separator_pane_g1

0x0f6b,	// (0x0001fe19) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0002e5b7) clock_digital_separator_pane_g

0x7dce,	// (0x00026c7c) aid_fill_nsta_ParamLimits

0x7f1e,	// (0x00026dcc) indicator_nsta_pane_ParamLimits

0x80af,	// (0x00026f5d) popup_clock_analogue_window

0x80af,	// (0x00026f5d) popup_clock_digital_window

0x0fd1,	// (0x0001fe7f) grid_indicator_nsta_pane_ParamLimits

0xb4cc,	// (0x0002a37a) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0002e950) clock_nsta_pane_t

0x694d,	// (0x000257fb) aid_size_max_handle

0x6957,	// (0x00025805) aid_size_min_handle

0x722a,	// (0x000260d8) editor_scroll_pane

0xc2df,	// (0x0002b18d) ex_editor_pane

0x2fb6,	// (0x00021e64) scroll_pane_cp13

0x2d0b,	// (0x00021bb9) scroll_pane_cp14

0x6a42,	// (0x000258f0) scroll_pane_cp36

0x6a70,	// (0x0002591e) list_single_graphic_hl_pane_cp2_ParamLimits

0x6a70,	// (0x0002591e) list_single_graphic_hl_pane_cp2

0x5883,	// (0x00024731) list_single_graphic_hl_pane_ParamLimits

0x5883,	// (0x00024731) list_single_graphic_hl_pane

0x5d29,	// (0x00024bd7) aid_size_min_hl_cp1

0xc2e7,	// (0x0002b195) list_highlight_pane_cp34_ParamLimits

0xc2e7,	// (0x0002b195) list_highlight_pane_cp34

0xc2f8,	// (0x0002b1a6) list_single_graphic_hl_pane_g1_ParamLimits

0xc2f8,	// (0x0002b1a6) list_single_graphic_hl_pane_g1

0x5d32,	// (0x00024be0) list_single_graphic_hl_pane_g2_ParamLimits

0x5d32,	// (0x00024be0) list_single_graphic_hl_pane_g2

0x5d32,	// (0x00024be0) list_single_graphic_hl_pane_g3_ParamLimits

0x5d32,	// (0x00024be0) list_single_graphic_hl_pane_g3

0x56f7,	// (0x000245a5) list_single_graphic_hl_pane_g4_ParamLimits

0x56f7,	// (0x000245a5) list_single_graphic_hl_pane_g4

0x5d3e,	// (0x00024bec) list_single_graphic_hl_pane_g5_ParamLimits

0x5d3e,	// (0x00024bec) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x0002ea8f) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x0002ea8f) list_single_graphic_hl_pane_g

0x5d52,	// (0x00024c00) list_single_graphic_hl_pane_t1_ParamLimits

0x5d52,	// (0x00024c00) list_single_graphic_hl_pane_t1

0xc305,	// (0x0002b1b3) aid_size_min_hl_cp2

0xc30e,	// (0x0002b1bc) list_highlight_pane_cp34_cp2_ParamLimits

0xc30e,	// (0x0002b1bc) list_highlight_pane_cp34_cp2

0xc2f8,	// (0x0002b1a6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc2f8,	// (0x0002b1a6) list_single_graphic_hl_pane_g1_cp2

0xc31b,	// (0x0002b1c9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc31b,	// (0x0002b1c9) list_single_graphic_hl_pane_g2_cp2

0xc327,	// (0x0002b1d5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc327,	// (0x0002b1d5) list_single_graphic_hl_pane_g3_cp2

0x3486,	// (0x00022334) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3486,	// (0x00022334) list_single_graphic_hl_pane_g4_cp2

0xc335,	// (0x0002b1e3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc335,	// (0x0002b1e3) list_single_graphic_hl_pane_g5_cp2

0x75f0,	// (0x0002649e) control_pane_g4_ParamLimits

0x75f0,	// (0x0002649e) control_pane_g4

0x7797,	// (0x00026645) bg_popup_sub_pane_cp10_ParamLimits

0xbaaf,	// (0x0002a95d) list_choice_list_pane_ParamLimits

0xbabe,	// (0x0002a96c) scroll_pane_cp23

0x111e,	// (0x0001ffcc) bg_popup_preview_window_pane_cp02_ParamLimits

0xc0cd,	// (0x0002af7b) list_preview_fixed_pane_ParamLimits

0xc0e3,	// (0x0002af91) list_preview_fixed_pane_cp_ParamLimits

0xc0e3,	// (0x0002af91) list_preview_fixed_pane_cp

0xc0ef,	// (0x0002af9d) popup_preview_fixed_window_g1_ParamLimits

0xc0ef,	// (0x0002af9d) popup_preview_fixed_window_g1

0xc0fb,	// (0x0002afa9) popup_preview_fixed_window_g2_ParamLimits

0xc0fb,	// (0x0002afa9) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0002ea1e) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0002ea1e) popup_preview_fixed_window_g

0x6836,	// (0x000256e4) aid_navi_side_left_pane_ParamLimits

0x684b,	// (0x000256f9) aid_navi_side_right_pane_ParamLimits

0x6863,	// (0x00025711) navi_icon_pane_stacon_ParamLimits

0x6877,	// (0x00025725) navi_navi_pane_stacon_ParamLimits

0x6863,	// (0x00025711) navi_text_pane_stacon_ParamLimits

0x0f61,	// (0x0001fe0f) main_text_info_pane

0xc35f,	// (0x0002b20d) listscroll_text_info_pane

0xc367,	// (0x0002b215) list_text_info_pane_ParamLimits

0xc367,	// (0x0002b215) list_text_info_pane

0xc376,	// (0x0002b224) scroll_pane_cp24_ParamLimits

0xc376,	// (0x0002b224) scroll_pane_cp24

0xc394,	// (0x0002b242) list_text_info_pane_t1_ParamLimits

0xc394,	// (0x0002b242) list_text_info_pane_t1

0x77e1,	// (0x0002668f) popup_fast_swap2_window_ParamLimits

0x77e1,	// (0x0002668f) popup_fast_swap2_window

0xc3b9,	// (0x0002b267) aid_size_cell_fast2

0x0f61,	// (0x0001fe0f) bg_popup_window_pane_cp17

0x9851,	// (0x000286ff) heading_pane_cp2

0x1324,	// (0x000201d2) listscroll_fast2_pane

0xc3c3,	// (0x0002b271) grid_fast2_pane

0xc3cd,	// (0x0002b27b) listscroll_fast2_pane_g1

0xc3d7,	// (0x0002b285) listscroll_fast2_pane_g2

0x0001,

0xfbec,	// (0x0002ea9a) listscroll_fast2_pane_g

0x2fb6,	// (0x00021e64) scroll_pane_cp26

0xc3e1,	// (0x0002b28f) cell_fast2_pane_ParamLimits

0xc3e1,	// (0x0002b28f) cell_fast2_pane

0xc3f8,	// (0x0002b2a6) cell_fast2_pane_g1

0xc401,	// (0x0002b2af) cell_fast2_pane_g2

0xc40a,	// (0x0002b2b8) cell_fast2_pane_g3

0x0002,

0xfbf1,	// (0x0002ea9f) cell_fast2_pane_g

0x1366,	// (0x00020214) grid_highlight_pane_cp9

0x137b,	// (0x00020229) main_eswt_pane_ParamLimits

0x137b,	// (0x00020229) main_eswt_pane

0xc38b,	// (0x0002b239) list_single_text_info_pane

0xc412,	// (0x0002b2c0) eswt_ctrl_button_pane

0xc412,	// (0x0002b2c0) eswt_ctrl_canvas_pane

0xc41a,	// (0x0002b2c8) eswt_ctrl_combo_pane

0xc412,	// (0x0002b2c0) eswt_ctrl_default_pane

0xc412,	// (0x0002b2c0) eswt_ctrl_label_pane

0xc422,	// (0x0002b2d0) eswt_ctrl_wait_pane

0xc42a,	// (0x0002b2d8) eswt_shell_pane

0x0f61,	// (0x0001fe0f) listscroll_eswt_app_pane

0xc44a,	// (0x0002b2f8) popup_eswt_tasktip_window_ParamLimits

0xc44a,	// (0x0002b2f8) popup_eswt_tasktip_window

0x9491,	// (0x0002833f) bg_popup_window_pane_cp18

0xc45b,	// (0x0002b309) eswt_control_pane_g1_ParamLimits

0xc45b,	// (0x0002b309) eswt_control_pane_g1

0xc468,	// (0x0002b316) eswt_control_pane_g2_ParamLimits

0xc468,	// (0x0002b316) eswt_control_pane_g2

0xc475,	// (0x0002b323) eswt_control_pane_g3_ParamLimits

0xc475,	// (0x0002b323) eswt_control_pane_g3

0xc482,	// (0x0002b330) eswt_control_pane_g4_ParamLimits

0xc482,	// (0x0002b330) eswt_control_pane_g4

0x0003,

0xfbf8,	// (0x0002eaa6) eswt_control_pane_g_ParamLimits

0xfbf8,	// (0x0002eaa6) eswt_control_pane_g

0x2df2,	// (0x00021ca0) bg_button_pane_ParamLimits

0x2df2,	// (0x00021ca0) bg_button_pane

0x137b,	// (0x00020229) common_borders_pane_copy2_ParamLimits

0x137b,	// (0x00020229) common_borders_pane_copy2

0xc48f,	// (0x0002b33d) control_button_pane_g1_ParamLimits

0xc48f,	// (0x0002b33d) control_button_pane_g1

0xc49b,	// (0x0002b349) control_button_pane_g2_ParamLimits

0xc49b,	// (0x0002b349) control_button_pane_g2

0xc4a7,	// (0x0002b355) control_button_pane_g3_ParamLimits

0xc4a7,	// (0x0002b355) control_button_pane_g3

0x0002,

0xfc01,	// (0x0002eaaf) control_button_pane_g_ParamLimits

0xfc01,	// (0x0002eaaf) control_button_pane_g

0xc4bb,	// (0x0002b369) control_button_pane_t1

0xc4c9,	// (0x0002b377) control_button_pane_t2

0x0001,

0xfc08,	// (0x0002eab6) control_button_pane_t

0x9395,	// (0x00028243) bg_button_pane_g1

0x939d,	// (0x0002824b) bg_button_pane_g2

0x93a5,	// (0x00028253) bg_button_pane_g3

0x93ad,	// (0x0002825b) bg_button_pane_g4

0x93b5,	// (0x00028263) bg_button_pane_g5

0x93bd,	// (0x0002826b) bg_button_pane_g6

0x93c5,	// (0x00028273) bg_button_pane_g7

0x93cd,	// (0x0002827b) bg_button_pane_g8

0x93d5,	// (0x00028283) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0002e71a) bg_button_pane_g

0xba6a,	// (0x0002a918) common_borders_pane_ParamLimits

0xba6a,	// (0x0002a918) common_borders_pane

0xc45b,	// (0x0002b309) eswt_control_pane_g1_copy1_ParamLimits

0xc45b,	// (0x0002b309) eswt_control_pane_g1_copy1

0xc468,	// (0x0002b316) eswt_control_pane_g2_copy1_ParamLimits

0xc468,	// (0x0002b316) eswt_control_pane_g2_copy1

0xc475,	// (0x0002b323) eswt_control_pane_g3_copy1_ParamLimits

0xc475,	// (0x0002b323) eswt_control_pane_g3_copy1

0xc482,	// (0x0002b330) eswt_control_pane_g4_copy1_ParamLimits

0xc482,	// (0x0002b330) eswt_control_pane_g4_copy1

0xbaa5,	// (0x0002a953) bg_eswt_ctrl_canvas_pane_g1

0xba6a,	// (0x0002a918) common_borders_pane_cp2_ParamLimits

0xba6a,	// (0x0002a918) common_borders_pane_cp2

0xba6a,	// (0x0002a918) common_borders_pane_cp3_ParamLimits

0xba6a,	// (0x0002a918) common_borders_pane_cp3

0xc4d7,	// (0x0002b385) separator_horizontal_pane

0xc4df,	// (0x0002b38d) separator_vertical_pane

0xc45b,	// (0x0002b309) eswt_control_pane_g1_copy2_ParamLimits

0xc45b,	// (0x0002b309) eswt_control_pane_g1_copy2

0xc468,	// (0x0002b316) eswt_control_pane_g2_copy2_ParamLimits

0xc468,	// (0x0002b316) eswt_control_pane_g2_copy2

0xc475,	// (0x0002b323) eswt_control_pane_g3_copy2_ParamLimits

0xc475,	// (0x0002b323) eswt_control_pane_g3_copy2

0xc482,	// (0x0002b330) eswt_control_pane_g4_copy2_ParamLimits

0xc482,	// (0x0002b330) eswt_control_pane_g4_copy2

0x0f61,	// (0x0001fe0f) common_borders_pane_cp4

0xc4e8,	// (0x0002b396) separator_horizontal_pane_g1

0xc4f1,	// (0x0002b39f) separator_horizontal_pane_g2

0xc4fa,	// (0x0002b3a8) separator_horizontal_pane_g3

0x0002,

0xfc0d,	// (0x0002eabb) separator_horizontal_pane_g

0xc45b,	// (0x0002b309) eswt_control_pane_g1_copy3_ParamLimits

0xc45b,	// (0x0002b309) eswt_control_pane_g1_copy3

0xc468,	// (0x0002b316) eswt_control_pane_g2_copy3_ParamLimits

0xc468,	// (0x0002b316) eswt_control_pane_g2_copy3

0xc475,	// (0x0002b323) eswt_control_pane_g3_copy3_ParamLimits

0xc475,	// (0x0002b323) eswt_control_pane_g3_copy3

0xc482,	// (0x0002b330) eswt_control_pane_g4_copy3_ParamLimits

0xc482,	// (0x0002b330) eswt_control_pane_g4_copy3

0x0f61,	// (0x0001fe0f) common_borders_pane_cp5

0xc503,	// (0x0002b3b1) separator_vertical_pane_g1

0xc50c,	// (0x0002b3ba) separator_vertical_pane_g2

0xc515,	// (0x0002b3c3) separator_vertical_pane_g3

0x0002,

0xfc14,	// (0x0002eac2) separator_vertical_pane_g

0xc45b,	// (0x0002b309) eswt_control_pane_g1_copy4_ParamLimits

0xc45b,	// (0x0002b309) eswt_control_pane_g1_copy4

0xc468,	// (0x0002b316) eswt_control_pane_g2_copy4_ParamLimits

0xc468,	// (0x0002b316) eswt_control_pane_g2_copy4

0xc475,	// (0x0002b323) eswt_control_pane_g3_copy4_ParamLimits

0xc475,	// (0x0002b323) eswt_control_pane_g3_copy4

0xc482,	// (0x0002b330) eswt_control_pane_g4_copy4_ParamLimits

0xc482,	// (0x0002b330) eswt_control_pane_g4_copy4

0xc51e,	// (0x0002b3cc) eswt_ctrl_combo_button_pane

0xc526,	// (0x0002b3d4) eswt_ctrl_input_pane

0xc52e,	// (0x0002b3dc) popup_choice_list_window_cp70

0xc536,	// (0x0002b3e4) eswt_ctrl_input_pane_t1

0x0f61,	// (0x0001fe0f) input_focus_pane_cp70

0xba6a,	// (0x0002a918) bg_button_pane_cp70_ParamLimits

0xba6a,	// (0x0002a918) bg_button_pane_cp70

0xc544,	// (0x0002b3f2) eswt_ctrl_combo_button_pane_g1

0xc54c,	// (0x0002b3fa) wait_bar_pane_cp70

0x9491,	// (0x0002833f) bg_popup_window_pane_cp70_ParamLimits

0x9491,	// (0x0002833f) bg_popup_window_pane_cp70

0xc554,	// (0x0002b402) popup_eswt_tasktip_window_t1

0xc56a,	// (0x0002b418) wait_bar_pane_cp71_ParamLimits

0xc56a,	// (0x0002b418) wait_bar_pane_cp71

0xc576,	// (0x0002b424) grid_eswt_app_pane

0x330b,	// (0x000221b9) scroll_pane_cp70

0xc57f,	// (0x0002b42d) cell_eswt_app_pane_ParamLimits

0xc57f,	// (0x0002b42d) cell_eswt_app_pane

0xc5b1,	// (0x0002b45f) cell_eswt_app_pane_g1_ParamLimits

0xc5b1,	// (0x0002b45f) cell_eswt_app_pane_g1

0xc5e0,	// (0x0002b48e) cell_eswt_app_pane_g2_ParamLimits

0xc5e0,	// (0x0002b48e) cell_eswt_app_pane_g2

0x0001,

0xfc1b,	// (0x0002eac9) cell_eswt_app_pane_g_ParamLimits

0xfc1b,	// (0x0002eac9) cell_eswt_app_pane_g

0xc609,	// (0x0002b4b7) cell_eswt_app_pane_t1_ParamLimits

0xc609,	// (0x0002b4b7) cell_eswt_app_pane_t1

0xc63b,	// (0x0002b4e9) grid_highlight_pane_cp70_ParamLimits

0xc63b,	// (0x0002b4e9) grid_highlight_pane_cp70

0x70fb,	// (0x00025fa9) set_content_pane_g1

0x7577,	// (0x00026425) status_small_volume_pane

0x8978,	// (0x00027826) status_small_volume_pane_g1

0x8980,	// (0x0002782e) volume_small2_pane

0x8989,	// (0x00027837) volume_small2_pane_g1

0x8992,	// (0x00027840) volume_small2_pane_g2

0x899b,	// (0x00027849) volume_small2_pane_g3

0x89a4,	// (0x00027852) volume_small2_pane_g4

0x89ad,	// (0x0002785b) volume_small2_pane_g5

0x89b6,	// (0x00027864) volume_small2_pane_g6

0x89bf,	// (0x0002786d) volume_small2_pane_g7

0x89c8,	// (0x00027876) volume_small2_pane_g8

0x89d1,	// (0x0002787f) volume_small2_pane_g9

0x89da,	// (0x00027888) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x0002eace) volume_small2_pane_g

0xbe74,	// (0x0002ad22) fep_vkb_top_text_pane_g1_ParamLimits

0xbe8f,	// (0x0002ad3d) fep_vkb_top_text_pane_t1_ParamLimits

0xc107,	// (0x0002afb5) popup_preview_fixed_window_g3_ParamLimits

0xc107,	// (0x0002afb5) popup_preview_fixed_window_g3

0x7cf2,	// (0x00026ba0) popup_toolbar_trans_pane

0xa7ef,	// (0x0002969d) aid_height_set_list_ParamLimits

0xa800,	// (0x000296ae) aid_size_parent_ParamLimits

0x7797,	// (0x00026645) list_highlight_pane_cp2_ParamLimits

0x70fb,	// (0x00025fa9) set_content_pane_g1_ParamLimits

0xaa33,	// (0x000298e1) list_single_image_pane_ParamLimits

0xaa33,	// (0x000298e1) list_single_image_pane

0xc647,	// (0x0002b4f5) aid_size_cell_image_ParamLimits

0xc647,	// (0x0002b4f5) aid_size_cell_image

0xc654,	// (0x0002b502) grid_single_image_pane_ParamLimits

0xc654,	// (0x0002b502) grid_single_image_pane

0x2e18,	// (0x00021cc6) list_single_image_pane_g1_ParamLimits

0x2e18,	// (0x00021cc6) list_single_image_pane_g1

0x2e24,	// (0x00021cd2) list_single_image_pane_g2_ParamLimits

0x2e24,	// (0x00021cd2) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x0002eae3) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x0002eae3) list_single_image_pane_g

0xc662,	// (0x0002b510) list_single_image_pane_t1_ParamLimits

0xc662,	// (0x0002b510) list_single_image_pane_t1

0xc678,	// (0x0002b526) cell_image_list_pane_ParamLimits

0xc678,	// (0x0002b526) cell_image_list_pane

0xc68e,	// (0x0002b53c) cell_image_list_pane_g1

0xc697,	// (0x0002b545) cell_image_list_pane_g2

0x0001,

0xfc3a,	// (0x0002eae8) cell_image_list_pane_g

0xc6a0,	// (0x0002b54e) aid_size_cell_tb_trans_pane

0x2df2,	// (0x00021ca0) bg_tb_trans_pane

0xc6b2,	// (0x0002b560) grid_tb_trans_pane

0x9395,	// (0x00028243) bg_tb_trans_pane_g1

0x939d,	// (0x0002824b) bg_tb_trans_pane_g2

0x93a5,	// (0x00028253) bg_tb_trans_pane_g3

0x93ad,	// (0x0002825b) bg_tb_trans_pane_g4

0x93b5,	// (0x00028263) bg_tb_trans_pane_g5

0x93cd,	// (0x0002827b) bg_tb_trans_pane_g6

0x93d5,	// (0x00028283) bg_tb_trans_pane_g7

0x93bd,	// (0x0002826b) bg_tb_trans_pane_g8

0x93c5,	// (0x00028273) bg_tb_trans_pane_g9

0x0008,

0xfc3f,	// (0x0002eaed) bg_tb_trans_pane_g

0xc6c6,	// (0x0002b574) cell_toolbar_trans_pane_ParamLimits

0xc6c6,	// (0x0002b574) cell_toolbar_trans_pane

0xbaa5,	// (0x0002a953) cell_toolbar_trans_pane_g1

0xb6c9,	// (0x0002a577) list_form2_midp_pane_t1

0xb6d7,	// (0x0002a585) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0002e996) list_form2_midp_pane_t

0xb6e5,	// (0x0002a593) scroll_pane_cp51_ParamLimits

0xb8ac,	// (0x0002a75a) form2_midp_wait_pane_g1

0xb8b5,	// (0x0002a763) form2_midp_wait_pane_g2

0xb8be,	// (0x0002a76c) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0002e9ab) form2_midp_wait_pane_g

0x0fd1,	// (0x0001fe7f) list_highlight_pane_cp21_ParamLimits

0xb902,	// (0x0002a7b0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb911,	// (0x0002a7bf) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa9ec,	// (0x0002989a) list_single_2graphic_im_pane_ParamLimits

0xa9ec,	// (0x0002989a) list_single_2graphic_im_pane

0xc6ec,	// (0x0002b59a) list_single_2graphic_im_pane_g1_ParamLimits

0xc6ec,	// (0x0002b59a) list_single_2graphic_im_pane_g1

0xc6fd,	// (0x0002b5ab) list_single_2graphic_im_pane_g2_ParamLimits

0xc6fd,	// (0x0002b5ab) list_single_2graphic_im_pane_g2

0xc709,	// (0x0002b5b7) list_single_2graphic_im_pane_g3_ParamLimits

0xc709,	// (0x0002b5b7) list_single_2graphic_im_pane_g3

0x0003,

0xfc52,	// (0x0002eb00) list_single_2graphic_im_pane_g_ParamLimits

0xfc52,	// (0x0002eb00) list_single_2graphic_im_pane_g

0xc729,	// (0x0002b5d7) list_single_2graphic_im_pane_t1_ParamLimits

0xc729,	// (0x0002b5d7) list_single_2graphic_im_pane_t1

0xc113,	// (0x0002afc1) list_single_graphic_2heading_pane_fp_ParamLimits

0xc113,	// (0x0002afc1) list_single_graphic_2heading_pane_fp

0x5b9b,	// (0x00024a49) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5b9b,	// (0x00024a49) list_single_graphic_2heading_pane_fp_g1

0xc12c,	// (0x0002afda) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc12c,	// (0x0002afda) list_single_graphic_2heading_pane_fp_g2

0x5b64,	// (0x00024a12) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5b64,	// (0x00024a12) list_single_graphic_2heading_pane_fp_g3

0x5b70,	// (0x00024a1e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5b70,	// (0x00024a1e) list_single_graphic_2heading_pane_fp_g4

0xc138,	// (0x0002afe6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc138,	// (0x0002afe6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0002ea2e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0002ea2e) list_single_graphic_2heading_pane_fp_g

0x5d68,	// (0x00024c16) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5d68,	// (0x00024c16) list_single_graphic_2heading_pane_fp_t1

0x5bd3,	// (0x00024a81) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5bd3,	// (0x00024a81) list_single_graphic_2heading_pane_fp_t2

0x5d7e,	// (0x00024c2c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5d7e,	// (0x00024c2c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x0002eb09) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x0002eb09) list_single_graphic_2heading_pane_fp_t

0xbb36,	// (0x0002a9e4) fep_hwr_write_pane_g5_ParamLimits

0xbb36,	// (0x0002a9e4) fep_hwr_write_pane_g5

0xbb42,	// (0x0002a9f0) fep_hwr_write_pane_g6_ParamLimits

0xbb42,	// (0x0002a9f0) fep_hwr_write_pane_g6

0xc42a,	// (0x0002b2d8) eswt_shell_pane_ParamLimits

0x9491,	// (0x0002833f) bg_popup_window_pane_cp18_ParamLimits

0xa746,	// (0x000295f4) heading_pane_cp70

0xc554,	// (0x0002b402) popup_eswt_tasktip_window_t1_ParamLimits

0x7e25,	// (0x00026cd3) aid_touch_tab_arrow_left

0x7e34,	// (0x00026ce2) aid_touch_tab_arrow_right

0x6336,	// (0x000251e4) title_pane_g3_ParamLimits

0x6336,	// (0x000251e4) title_pane_g3

0x2d4c,	// (0x00021bfa) set_value_pane_g1

0x7cf2,	// (0x00026ba0) popup_toolbar_trans_pane_ParamLimits

0xc6a0,	// (0x0002b54e) aid_size_cell_tb_trans_pane_ParamLimits

0x2df2,	// (0x00021ca0) bg_tb_trans_pane_ParamLimits

0xc6b2,	// (0x0002b560) grid_tb_trans_pane_ParamLimits

0x111e,	// (0x0001ffcc) cont_note_pane_ParamLimits

0x111e,	// (0x0001ffcc) cont_note_pane

0x137b,	// (0x00020229) cont_snote2_single_text_pane_ParamLimits

0x137b,	// (0x00020229) cont_snote2_single_text_pane

0x137b,	// (0x00020229) cont_snote2_single_graphic_pane_ParamLimits

0x137b,	// (0x00020229) cont_snote2_single_graphic_pane

0x9a6d,	// (0x0002891b) cont_note_wait_pane_ParamLimits

0x9a6d,	// (0x0002891b) cont_note_wait_pane

0x9a6d,	// (0x0002891b) cont_note_image_pane_ParamLimits

0x9a6d,	// (0x0002891b) cont_note_image_pane

0xc75a,	// (0x0002b608) popup_note2_window_g1_ParamLimits

0xc75a,	// (0x0002b608) popup_note2_window_g1

0xc78b,	// (0x0002b639) popup_note2_window_t1_ParamLimits

0xc78b,	// (0x0002b639) popup_note2_window_t1

0xc7d0,	// (0x0002b67e) popup_note2_window_t2_ParamLimits

0xc7d0,	// (0x0002b67e) popup_note2_window_t2

0xc815,	// (0x0002b6c3) popup_note2_window_t3_ParamLimits

0xc815,	// (0x0002b6c3) popup_note2_window_t3

0xc85a,	// (0x0002b708) popup_note2_window_t4_ParamLimits

0xc85a,	// (0x0002b708) popup_note2_window_t4

0x11a2,	// (0x00020050) popup_note2_window_t5_ParamLimits

0x11a2,	// (0x00020050) popup_note2_window_t5

0x0004,

0xfc67,	// (0x0002eb15) popup_note2_window_t_ParamLimits

0xfc67,	// (0x0002eb15) popup_note2_window_t

0xc889,	// (0x0002b737) popup_note2_image_window_g1_ParamLimits

0xc889,	// (0x0002b737) popup_note2_image_window_g1

0xc895,	// (0x0002b743) popup_note2_image_window_g2_ParamLimits

0xc895,	// (0x0002b743) popup_note2_image_window_g2

0x0001,

0xfc72,	// (0x0002eb20) popup_note2_image_window_g_ParamLimits

0xfc72,	// (0x0002eb20) popup_note2_image_window_g

0xc8a7,	// (0x0002b755) popup_note2_image_window_t1_ParamLimits

0xc8a7,	// (0x0002b755) popup_note2_image_window_t1

0xc8bf,	// (0x0002b76d) popup_note2_image_window_t2_ParamLimits

0xc8bf,	// (0x0002b76d) popup_note2_image_window_t2

0xc8d7,	// (0x0002b785) popup_note2_image_window_t3_ParamLimits

0xc8d7,	// (0x0002b785) popup_note2_image_window_t3

0x0002,

0xfc77,	// (0x0002eb25) popup_note2_image_window_t_ParamLimits

0xfc77,	// (0x0002eb25) popup_note2_image_window_t

0x9a7b,	// (0x00028929) popup_note2_wait_window_g1_ParamLimits

0x9a7b,	// (0x00028929) popup_note2_wait_window_g1

0xc8f3,	// (0x0002b7a1) popup_note2_wait_window_g2_ParamLimits

0xc8f3,	// (0x0002b7a1) popup_note2_wait_window_g2

0x9a93,	// (0x00028941) popup_note2_wait_window_g3_ParamLimits

0x9a93,	// (0x00028941) popup_note2_wait_window_g3

0x0002,

0xfc7e,	// (0x0002eb2c) popup_note2_wait_window_g_ParamLimits

0xfc7e,	// (0x0002eb2c) popup_note2_wait_window_g

0xc8ff,	// (0x0002b7ad) popup_note2_wait_window_t1_ParamLimits

0xc8ff,	// (0x0002b7ad) popup_note2_wait_window_t1

0xc91d,	// (0x0002b7cb) popup_note2_wait_window_t2_ParamLimits

0xc91d,	// (0x0002b7cb) popup_note2_wait_window_t2

0xc93b,	// (0x0002b7e9) popup_note2_wait_window_t3_ParamLimits

0xc93b,	// (0x0002b7e9) popup_note2_wait_window_t3

0xc94d,	// (0x0002b7fb) popup_note2_wait_window_t4_ParamLimits

0xc94d,	// (0x0002b7fb) popup_note2_wait_window_t4

0x0003,

0xfc85,	// (0x0002eb33) popup_note2_wait_window_t_ParamLimits

0xfc85,	// (0x0002eb33) popup_note2_wait_window_t

0xc95f,	// (0x0002b80d) wait_bar2_pane_ParamLimits

0xc95f,	// (0x0002b80d) wait_bar2_pane

0xc977,	// (0x0002b825) popup_snote2_single_text_window_g1_ParamLimits

0xc977,	// (0x0002b825) popup_snote2_single_text_window_g1

0xc99f,	// (0x0002b84d) popup_snote2_single_text_window_t1_ParamLimits

0xc99f,	// (0x0002b84d) popup_snote2_single_text_window_t1

0xc9eb,	// (0x0002b899) popup_snote2_single_text_window_t2_ParamLimits

0xc9eb,	// (0x0002b899) popup_snote2_single_text_window_t2

0xca37,	// (0x0002b8e5) popup_snote2_single_text_window_t3_ParamLimits

0xca37,	// (0x0002b8e5) popup_snote2_single_text_window_t3

0xca78,	// (0x0002b926) popup_snote2_single_text_window_t4_ParamLimits

0xca78,	// (0x0002b926) popup_snote2_single_text_window_t4

0xcaae,	// (0x0002b95c) popup_snote2_single_text_window_t5_ParamLimits

0xcaae,	// (0x0002b95c) popup_snote2_single_text_window_t5

0x0004,

0xfc8e,	// (0x0002eb3c) popup_snote2_single_text_window_t_ParamLimits

0xfc8e,	// (0x0002eb3c) popup_snote2_single_text_window_t

0xcad9,	// (0x0002b987) popup_snote2_single_graphic_window_g1_ParamLimits

0xcad9,	// (0x0002b987) popup_snote2_single_graphic_window_g1

0xcb01,	// (0x0002b9af) popup_snote2_single_graphic_window_g2_ParamLimits

0xcb01,	// (0x0002b9af) popup_snote2_single_graphic_window_g2

0x0001,

0xfc99,	// (0x0002eb47) popup_snote2_single_graphic_window_g_ParamLimits

0xfc99,	// (0x0002eb47) popup_snote2_single_graphic_window_g

0xcb29,	// (0x0002b9d7) popup_snote2_single_graphic_window_t1_ParamLimits

0xcb29,	// (0x0002b9d7) popup_snote2_single_graphic_window_t1

0xcb75,	// (0x0002ba23) popup_snote2_single_graphic_window_t2_ParamLimits

0xcb75,	// (0x0002ba23) popup_snote2_single_graphic_window_t2

0xca37,	// (0x0002b8e5) popup_snote2_single_graphic_window_t3_ParamLimits

0xca37,	// (0x0002b8e5) popup_snote2_single_graphic_window_t3

0xca78,	// (0x0002b926) popup_snote2_single_graphic_window_t4_ParamLimits

0xca78,	// (0x0002b926) popup_snote2_single_graphic_window_t4

0xcaae,	// (0x0002b95c) popup_snote2_single_graphic_window_t5_ParamLimits

0xcaae,	// (0x0002b95c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9e,	// (0x0002eb4c) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9e,	// (0x0002eb4c) popup_snote2_single_graphic_window_t

0xb58f,	// (0x0002a43d) clock_nsta_pane_cp2_t1

0xb58f,	// (0x0002a43d) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0002e96c) clock_nsta_pane_cp2_t

0x54d3,	// (0x00024381) form_field_data_wide_pane_g1_ParamLimits

0x2e18,	// (0x00021cc6) form_field_data_wide_pane_g2_ParamLimits

0x2e18,	// (0x00021cc6) form_field_data_wide_pane_g2

0x2e24,	// (0x00021cd2) form_field_data_wide_pane_g3_ParamLimits

0x2e24,	// (0x00021cd2) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0002e52f) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0002e52f) form_field_data_wide_pane_g

0xb468,	// (0x0002a316) grid_touch_3_pane_ParamLimits

0xb468,	// (0x0002a316) grid_touch_3_pane

0xcbc1,	// (0x0002ba6f) cell_touch_3_pane_ParamLimits

0xcbc1,	// (0x0002ba6f) cell_touch_3_pane

0xbaa5,	// (0x0002a953) cell_touch_3_pane_g1

0xbaa5,	// (0x0002a953) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0002e9f1) cell_touch_3_pane_g

0x11d4,	// (0x00020082) cont_query_data_pane

0x11dc,	// (0x0002008a) cont_query_data_pane_cp1

0xcbf4,	// (0x0002baa2) button_value_adjust_pane_cp7

0xcbfc,	// (0x0002baaa) query_popup_pane_cp3

0x6b63,	// (0x00025a11) bg_popup_sub_pane_cp22_ParamLimits

0x6b79,	// (0x00025a27) navi_navi_volume_pane_cp2

0x6b94,	// (0x00025a42) popup_side_volume_key_window_g2

0x6ba3,	// (0x00025a51) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0002e5c5) popup_side_volume_key_window_g

0x6bc0,	// (0x00025a6e) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0002e5cc) popup_side_volume_key_window_t

0x6fc1,	// (0x00025e6f) popup_side_volume_key_window_ParamLimits

0x50fa,	// (0x00023fa8) list_double_graphic_pane_g4_ParamLimits

0x50fa,	// (0x00023fa8) list_double_graphic_pane_g4

0xaa1b,	// (0x000298c9) list_single_2heading_msg_pane_ParamLimits

0xaa1b,	// (0x000298c9) list_single_2heading_msg_pane

0x5d9e,	// (0x00024c4c) list_single_2heading_msg_pane_g1_ParamLimits

0x5d9e,	// (0x00024c4c) list_single_2heading_msg_pane_g1

0x4f57,	// (0x00023e05) list_single_2heading_msg_pane_g2_ParamLimits

0x4f57,	// (0x00023e05) list_single_2heading_msg_pane_g2

0x5daa,	// (0x00024c58) list_single_2heading_msg_pane_g3_ParamLimits

0x5daa,	// (0x00024c58) list_single_2heading_msg_pane_g3

0x5db6,	// (0x00024c64) list_single_2heading_msg_pane_g4_ParamLimits

0x5db6,	// (0x00024c64) list_single_2heading_msg_pane_g4

0x0003,

0xfca9,	// (0x0002eb57) list_single_2heading_msg_pane_g_ParamLimits

0xfca9,	// (0x0002eb57) list_single_2heading_msg_pane_g

0x5dce,	// (0x00024c7c) list_single_2heading_msg_pane_t1_ParamLimits

0x5dce,	// (0x00024c7c) list_single_2heading_msg_pane_t1

0x5df6,	// (0x00024ca4) list_single_2heading_msg_pane_t2_ParamLimits

0x5df6,	// (0x00024ca4) list_single_2heading_msg_pane_t2

0x5e2a,	// (0x00024cd8) list_single_2heading_msg_pane_t3_ParamLimits

0x5e2a,	// (0x00024cd8) list_single_2heading_msg_pane_t3

0x5e63,	// (0x00024d11) list_single_2heading_msg_pane_t4_ParamLimits

0x5e63,	// (0x00024d11) list_single_2heading_msg_pane_t4

0x0003,

0xfcb2,	// (0x0002eb60) list_single_2heading_msg_pane_t_ParamLimits

0xfcb2,	// (0x0002eb60) list_single_2heading_msg_pane_t

0x0f7f,	// (0x0001fe2d) title_pane_g4_ParamLimits

0x0f7f,	// (0x0001fe2d) title_pane_g4

0x6786,	// (0x00025634) title_pane_stacon_g3_ParamLimits

0x6786,	// (0x00025634) title_pane_stacon_g3

0xc71d,	// (0x0002b5cb) list_single_2graphic_im_pane_g4_ParamLimits

0xc71d,	// (0x0002b5cb) list_single_2graphic_im_pane_g4

0xa4e3,	// (0x00029391) popup_side_volume_key_window_cp

0xad39,	// (0x00029be7) main_idle_act2_pane_t1

0x8246,	// (0x000270f4) toolbar_button_pane_g10

0x6697,	// (0x00025545) popup_toolbar_window_cp1

0xb580,	// (0x0002a42e) clock_nsta_pane_cp_t1

0xb580,	// (0x0002a42e) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0002e967) clock_nsta_pane_cp_t

0x6b79,	// (0x00025a27) navi_navi_volume_pane_cp2_ParamLimits

0x6b88,	// (0x00025a36) popup_side_volume_key_window_g1_ParamLimits

0x6b94,	// (0x00025a42) popup_side_volume_key_window_g2_ParamLimits

0x6ba3,	// (0x00025a51) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0002e5c5) popup_side_volume_key_window_g_ParamLimits

0x866d,	// (0x0002751b) fep_hwr_aid_pane

0x0f31,	// (0x0001fddf) bg_fep_hwr_top_pane_g4_ParamLimits

0xbb06,	// (0x0002a9b4) fep_hwr_top_pane_g1_ParamLimits

0xbb18,	// (0x0002a9c6) fep_hwr_top_pane_g2_ParamLimits

0x8728,	// (0x000275d6) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0002e9bc) fep_hwr_top_pane_g_ParamLimits

0x873d,	// (0x000275eb) fep_hwr_top_text_pane_ParamLimits

0xa298,	// (0x00029146) aid_touch_tab_arrow_arrow_2

0xa2a1,	// (0x0002914f) aid_touch_tab_arrow_left_2

0x8681,	// (0x0002752f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x86b8,	// (0x00027566) fep_hwr_prediction_pane

0xbc6e,	// (0x0002ab1c) fep_vkb_prediction_pane

0xbd74,	// (0x0002ac22) fep_vkb_side_pane_g3_ParamLimits

0xbd74,	// (0x0002ac22) fep_vkb_side_pane_g3

0xbd20,	// (0x0002abce) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc210,	// (0x0002b0be) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc21d,	// (0x0002b0cb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0002ea66) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xcc23,	// (0x0002bad1) fep_hwr_prediction_pane_g1

0x89e3,	// (0x00027891) fep_hwr_prediction_pane_g2

0x89eb,	// (0x00027899) fep_hwr_prediction_pane_g3

0x89f3,	// (0x000278a1) fep_hwr_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0002eb69) fep_hwr_prediction_pane_g

0xcc23,	// (0x0002bad1) fep_vkb_prediction_pane_g1

0xcc2d,	// (0x0002badb) fep_vkb_prediction_pane_g2

0xcc35,	// (0x0002bae3) fep_vkb_prediction_pane_g3

0xcc3d,	// (0x0002baeb) fep_vkb_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0002eb72) fep_vkb_prediction_pane_g

0xc150,	// (0x0002affe) slider_set_pane_g3

0xc164,	// (0x0002b012) slider_set_pane_g4

0xc17c,	// (0x0002b02a) slider_set_pane_g5

0xc150,	// (0x0002affe) slider_set_pane_g6

0x852f,	// (0x000273dd) slider_set_pane_g7

0xa985,	// (0x00029833) slider_form_pane_g3

0xa98e,	// (0x0002983c) slider_form_pane_g4

0xa996,	// (0x00029844) slider_form_pane_g5

0xa985,	// (0x00029833) slider_form_pane_g6

0xa99e,	// (0x0002984c) slider_form_pane_g7

0xaffc,	// (0x00029eaa) slider_set_pane_vc_g3

0xb005,	// (0x00029eb3) slider_set_pane_vc_g4

0xb00e,	// (0x00029ebc) slider_set_pane_vc_g5

0xaffc,	// (0x00029eaa) slider_set_pane_vc_g6

0xb017,	// (0x00029ec5) slider_set_pane_vc_g7

0xb229,	// (0x0002a0d7) slider_form_pane_vc_g1

0xb232,	// (0x0002a0e0) slider_form_pane_vc_g2

0xb23b,	// (0x0002a0e9) slider_form_pane_vc_g3

0xb229,	// (0x0002a0d7) slider_form_pane_vc_g4

0xb244,	// (0x0002a0f2) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0002e939) slider_form_pane_vc_g

0x0f61,	// (0x0001fe0f) main_idle_act3_pane

0xcc45,	// (0x0002baf3) ai3_links_pane

0xcc4e,	// (0x0002bafc) popup_ai3_data_window_ParamLimits

0xcc4e,	// (0x0002bafc) popup_ai3_data_window

0x0f61,	// (0x0001fe0f) grid_ai3_links_pane

0xcc6c,	// (0x0002bb1a) cell_ai3_links_pane_ParamLimits

0xcc6c,	// (0x0002bb1a) cell_ai3_links_pane

0xcc86,	// (0x0002bb34) bg_popup_sub_pane_cp11

0xcc93,	// (0x0002bb41) cell_ai3_links_pane_g1

0x0f61,	// (0x0001fe0f) bg_popup_sub_pane_cp12

0xccb8,	// (0x0002bb66) heading_ai3_data_pane

0xccc0,	// (0x0002bb6e) list_ai3_gene_pane

0xcccc,	// (0x0002bb7a) popup_ai3_data_window_g1

0xccd4,	// (0x0002bb82) heading_ai3_data_pane_g1

0xccdc,	// (0x0002bb8a) heading_ai3_data_pane_t1

0xccea,	// (0x0002bb98) list_double_ai3_gene_pane_ParamLimits

0xccea,	// (0x0002bb98) list_double_ai3_gene_pane

0xccf7,	// (0x0002bba5) list_single_ai3_gene_pane_ParamLimits

0xccf7,	// (0x0002bba5) list_single_ai3_gene_pane

0xba6a,	// (0x0002a918) list_highlight_pane_cp7_ParamLimits

0xba6a,	// (0x0002a918) list_highlight_pane_cp7

0xcd04,	// (0x0002bbb2) list_single_a13_gene_pane_t1_ParamLimits

0xcd04,	// (0x0002bbb2) list_single_a13_gene_pane_t1

0xcd1b,	// (0x0002bbc9) list_single_ai3_gene_pane_g1

0xcd24,	// (0x0002bbd2) list_single_ai3_gene_pane_g2

0x0001,

0xfccd,	// (0x0002eb7b) list_single_ai3_gene_pane_g

0xcd2c,	// (0x0002bbda) list_double_ai3_gene_pane_g1_ParamLimits

0xcd2c,	// (0x0002bbda) list_double_ai3_gene_pane_g1

0xcd38,	// (0x0002bbe6) list_double_ai3_gene_pane_t1_ParamLimits

0xcd38,	// (0x0002bbe6) list_double_ai3_gene_pane_t1

0xcd54,	// (0x0002bc02) list_double_ai3_gene_pane_t2_ParamLimits

0xcd54,	// (0x0002bc02) list_double_ai3_gene_pane_t2

0xcd69,	// (0x0002bc17) list_double_ai3_gene_pane_t3_ParamLimits

0xcd69,	// (0x0002bc17) list_double_ai3_gene_pane_t3

0x0002,

0xfcd2,	// (0x0002eb80) list_double_ai3_gene_pane_t_ParamLimits

0xfcd2,	// (0x0002eb80) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5d94,	// (0x00024c42) aid_size_min_col_2

0xcc0d,	// (0x0002babb) aid_size_min_msg_ParamLimits

0xcc0d,	// (0x0002babb) aid_size_min_msg

0xbe80,	// (0x0002ad2e) fep_vkb_top_text_pane_g2_ParamLimits

0xbe80,	// (0x0002ad2e) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0002e9ec) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0002e9ec) fep_vkb_top_text_pane_g

0x0f61,	// (0x0001fe0f) main_hc_apps_shell_pane

0xcd86,	// (0x0002bc34) grid_hc_apps_pane_ParamLimits

0xcd86,	// (0x0002bc34) grid_hc_apps_pane

0xcd95,	// (0x0002bc43) list_hc_apps_pane

0xcd9d,	// (0x0002bc4b) scroll_pane_cp37_ParamLimits

0xcd9d,	// (0x0002bc4b) scroll_pane_cp37

0xcda9,	// (0x0002bc57) cell_hc_apps_pane_ParamLimits

0xcda9,	// (0x0002bc57) cell_hc_apps_pane

0xce61,	// (0x0002bd0f) cell_hc_apps_pane_g1_ParamLimits

0xce61,	// (0x0002bd0f) cell_hc_apps_pane_g1

0xce92,	// (0x0002bd40) cell_hc_apps_pane_g2_ParamLimits

0xce92,	// (0x0002bd40) cell_hc_apps_pane_g2

0xceae,	// (0x0002bd5c) cell_hc_apps_pane_g3_ParamLimits

0xceae,	// (0x0002bd5c) cell_hc_apps_pane_g3

0x0002,

0xfcd9,	// (0x0002eb87) cell_hc_apps_pane_g_ParamLimits

0xfcd9,	// (0x0002eb87) cell_hc_apps_pane_g

0xced0,	// (0x0002bd7e) cell_hc_apps_pane_t1_ParamLimits

0xced0,	// (0x0002bd7e) cell_hc_apps_pane_t1

0x111e,	// (0x0001ffcc) grid_highlight_pane_cp10_ParamLimits

0x111e,	// (0x0001ffcc) grid_highlight_pane_cp10

0xcf10,	// (0x0002bdbe) list_single_hc_apps_pane_ParamLimits

0xcf10,	// (0x0002bdbe) list_single_hc_apps_pane

0xcf4f,	// (0x0002bdfd) list_single_hc_apps_pane_g1

0x5e88,	// (0x00024d36) list_single_hc_apps_pane_g2

0x0001,

0xfce0,	// (0x0002eb8e) list_single_hc_apps_pane_g

0x5ea1,	// (0x00024d4f) list_single_hc_apps_pane_g2_copy1

0x5ebd,	// (0x00024d6b) list_single_hc_apps_pane_t1

0x0fd1,	// (0x0001fe7f) bg_set_opt_pane_cp_ParamLimits

0x63e8,	// (0x00025296) setting_slider_pane_t1_ParamLimits

0x6401,	// (0x000252af) setting_slider_pane_t2_ParamLimits

0x641b,	// (0x000252c9) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002e412) setting_slider_pane_t_ParamLimits

0x6433,	// (0x000252e1) slider_set_pane_ParamLimits

0x7604,	// (0x000264b2) control_pane_g5_ParamLimits

0x7604,	// (0x000264b2) control_pane_g5

0xa7b2,	// (0x00029660) slider_set_pane_g1_ParamLimits

0x8523,	// (0x000273d1) slider_set_pane_g2_ParamLimits

0xc150,	// (0x0002affe) slider_set_pane_g3_ParamLimits

0xc164,	// (0x0002b012) slider_set_pane_g4_ParamLimits

0xc17c,	// (0x0002b02a) slider_set_pane_g5_ParamLimits

0xc150,	// (0x0002affe) slider_set_pane_g6_ParamLimits

0x852f,	// (0x000273dd) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0002e818) slider_set_pane_g_ParamLimits

0x70a6,	// (0x00025f54) navi_icon_text_pane_ParamLimits

0x7de4,	// (0x00026c92) aid_fill_nsta_2_ParamLimits

0x7e25,	// (0x00026cd3) aid_touch_tab_arrow_left_ParamLimits

0x7e34,	// (0x00026ce2) aid_touch_tab_arrow_right_ParamLimits

0x7ea1,	// (0x00026d4f) clock_nsta_pane_ParamLimits

0xa274,	// (0x00029122) navi_icon_pane_g1_ParamLimits

0xa283,	// (0x00029131) navi_text_pane_t1_ParamLimits

0xb69d,	// (0x0002a54b) navi_icon_text_pane_g1_ParamLimits

0xb6ac,	// (0x0002a55a) navi_icon_text_pane_t1_ParamLimits

0xcf4f,	// (0x0002bdfd) list_single_hc_apps_pane_g1_ParamLimits

0x5e88,	// (0x00024d36) list_single_hc_apps_pane_g2_ParamLimits

0xfce0,	// (0x0002eb8e) list_single_hc_apps_pane_g_ParamLimits

0x5ea1,	// (0x00024d4f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5ebd,	// (0x00024d6b) list_single_hc_apps_pane_t1_ParamLimits

0x622c,	// (0x000250da) popup_toolbar2_fixed_window_ParamLimits

0x622c,	// (0x000250da) popup_toolbar2_fixed_window

0x7ce8,	// (0x00026b96) popup_toolbar2_float_window

0x0f61,	// (0x0001fe0f) bg_popup_sub_pane_cp27

0xcf68,	// (0x0002be16) grid_toolbar2_float_pane

0x0f61,	// (0x0001fe0f) bg_popup_sub_pane_cp26

0xcf68,	// (0x0002be16) grid_toolbar2_fixed_pane

0xcf70,	// (0x0002be1e) cell_toolbar2_fixed_pane_ParamLimits

0xcf70,	// (0x0002be1e) cell_toolbar2_fixed_pane

0xcf80,	// (0x0002be2e) cell_toolbar2_fixed_pane_g1

0xcf89,	// (0x0002be37) toolbar2_fixed_button_pane

0x9395,	// (0x00028243) toolbar2_fixed_button_pane_g1

0x939d,	// (0x0002824b) toolbar2_fixed_button_pane_g2

0x93a5,	// (0x00028253) toolbar2_fixed_button_pane_g3

0x93ad,	// (0x0002825b) toolbar2_fixed_button_pane_g4

0x93b5,	// (0x00028263) toolbar2_fixed_button_pane_g5

0x93bd,	// (0x0002826b) toolbar2_fixed_button_pane_g6

0x93c5,	// (0x00028273) toolbar2_fixed_button_pane_g7

0x93cd,	// (0x0002827b) toolbar2_fixed_button_pane_g8

0x93d5,	// (0x00028283) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0002e71a) toolbar2_fixed_button_pane_g

0xcf91,	// (0x0002be3f) cell_toolbar2_float_pane_ParamLimits

0xcf91,	// (0x0002be3f) cell_toolbar2_float_pane

0xcfa2,	// (0x0002be50) cell_toolbar2_float_pane_g1

0xcf89,	// (0x0002be37) toolbar2_fixed_button_pane_cp

0xbbdc,	// (0x0002aa8a) fep_vkb_accented_list_pane_ParamLimits

0xbbdc,	// (0x0002aa8a) fep_vkb_accented_list_pane

0x889f,	// (0x0002774d) bg_popup_fep_shadow_pane_g9

0x722a,	// (0x000260d8) bg_popup_fep_shadow_pane_cp3

0x2f9d,	// (0x00021e4b) list_accented_list_pane

0xcfab,	// (0x0002be59) list_single_accented_list_pane_ParamLimits

0xcfab,	// (0x0002be59) list_single_accented_list_pane

0x722a,	// (0x000260d8) list_highlight_pane_cp10

0xcfbc,	// (0x0002be6a) list_single_accented_list_pane_t1

0x7c2e,	// (0x00026adc) popup_slider_window_ParamLimits

0x7c2e,	// (0x00026adc) popup_slider_window

0xcc04,	// (0x0002bab2) aid_indentation_list_msg

0xd088,	// (0x0002bf36) bg_popup_window_pane_cp19

0xd0f6,	// (0x0002bfa4) popup_slider_window_g1

0xd112,	// (0x0002bfc0) popup_slider_window_g2

0xd12e,	// (0x0002bfdc) popup_slider_window_g3

0x0005,

0xfce5,	// (0x0002eb93) popup_slider_window_g

0xd18a,	// (0x0002c038) popup_slider_window_t1

0xd1fe,	// (0x0002c0ac) small_volume_slider_vertical_pane

0xbaa5,	// (0x0002a953) small_volume_slider_vertical_pane_g1

0xbaa5,	// (0x0002a953) small_volume_slider_vertical_pane_g2

0xd21a,	// (0x0002c0c8) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf7,	// (0x0002eba5) small_volume_slider_vertical_pane_g

0x5fe4,	// (0x00024e92) area_side_right_pane_ParamLimits

0x5fe4,	// (0x00024e92) area_side_right_pane

0x89fb,	// (0x000278a9) aid_size_side_button_ParamLimits

0x89fb,	// (0x000278a9) aid_size_side_button

0x8a0f,	// (0x000278bd) grid_sctrl_middle_pane_ParamLimits

0x8a0f,	// (0x000278bd) grid_sctrl_middle_pane

0x8a2f,	// (0x000278dd) sctrl_sk_bottom_pane

0x8a40,	// (0x000278ee) sctrl_sk_top_pane

0x8a52,	// (0x00027900) aid_touch_sctrl_top

0x111e,	// (0x0001ffcc) bg_sctrl_sk_pane_ParamLimits

0x111e,	// (0x0001ffcc) bg_sctrl_sk_pane

0x8a5f,	// (0x0002790d) sctrl_sk_top_pane_g1

0x8a6c,	// (0x0002791a) sctrl_sk_top_pane_t1

0x8a52,	// (0x00027900) aid_touch_sctrl_bottom

0x111e,	// (0x0001ffcc) bg_sctrl_sk_pane_cp_ParamLimits

0x111e,	// (0x0001ffcc) bg_sctrl_sk_pane_cp

0x8a87,	// (0x00027935) sctrl_sk_bottom_pane_g1

0x8a6c,	// (0x0002791a) sctrl_sk_bottom_pane_t1

0x8a90,	// (0x0002793e) cell_sctrl_middle_pane_ParamLimits

0x8a90,	// (0x0002793e) cell_sctrl_middle_pane

0x8aad,	// (0x0002795b) aid_touch_sctrl_middle_ParamLimits

0x8aad,	// (0x0002795b) aid_touch_sctrl_middle

0x2df2,	// (0x00021ca0) bg_sctrl_middle_pane_ParamLimits

0x2df2,	// (0x00021ca0) bg_sctrl_middle_pane

0xbd20,	// (0x0002abce) cell_sctrl_middle_pane_g1_ParamLimits

0xbd20,	// (0x0002abce) cell_sctrl_middle_pane_g1

0x8abf,	// (0x0002796d) cell_sctrl_middle_pane_g2_ParamLimits

0x8abf,	// (0x0002796d) cell_sctrl_middle_pane_g2

0x0001,

0xfd03,	// (0x0002ebb1) cell_sctrl_middle_pane_g_ParamLimits

0xfd03,	// (0x0002ebb1) cell_sctrl_middle_pane_g

0x9395,	// (0x00028243) bg_sctrl_middle_pane_g1

0x939d,	// (0x0002824b) bg_sctrl_middle_pane_g2

0x93a5,	// (0x00028253) bg_sctrl_middle_pane_g3

0x93ad,	// (0x0002825b) bg_sctrl_middle_pane_g4

0x93b5,	// (0x00028263) bg_sctrl_middle_pane_g5

0x93bd,	// (0x0002826b) bg_sctrl_middle_pane_g6

0x93c5,	// (0x00028273) bg_sctrl_middle_pane_g7

0x93cd,	// (0x0002827b) bg_sctrl_middle_pane_g8

0x0007,

0xfd08,	// (0x0002ebb6) bg_sctrl_middle_pane_g

0x93d5,	// (0x00028283) bg_sctrl_middle_pane_g8_copy1

0x9395,	// (0x00028243) bg_sctrl_sk_pane_g1

0x939d,	// (0x0002824b) bg_sctrl_sk_pane_g2

0x93a5,	// (0x00028253) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0002e71a) bg_sctrl_sk_pane_g

0x2ca5,	// (0x00021b53) aid_size_touch_scroll_bar

0x93ad,	// (0x0002825b) bg_sctrl_sk_pane_g4

0x93b5,	// (0x00028263) bg_sctrl_sk_pane_g5

0x93bd,	// (0x0002826b) bg_sctrl_sk_pane_g6

0x93c5,	// (0x00028273) bg_sctrl_sk_pane_g7

0x93cd,	// (0x0002827b) bg_sctrl_sk_pane_g8

0x93d5,	// (0x00028283) bg_sctrl_sk_pane_g9

0x7845,	// (0x000266f3) popup_fep_china_hwr2_fs_candidate_window

0x784f,	// (0x000266fd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x784f,	// (0x000266fd) popup_fep_china_hwr2_fs_control_window

0xbd20,	// (0x0002abce) sctrl_sk_top_pane_g2

0x0001,

0xfcfe,	// (0x0002ebac) sctrl_sk_top_pane_g

0xd223,	// (0x0002c0d1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd223,	// (0x0002c0d1) aid_fep_china_hwr2_fs_cell

0xd236,	// (0x0002c0e4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd236,	// (0x0002c0e4) bg_popup_fep_shadow_pane_cp4

0xd24f,	// (0x0002c0fd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd24f,	// (0x0002c0fd) bg_popup_fep_shadow_pane_cp5

0xd261,	// (0x0002c10f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd261,	// (0x0002c10f) popup_fep_china_hwr2_fs_control_bar_grid

0xd271,	// (0x0002c11f) popup_fep_china_hwr2_fs_control_funtion_grid

0xd279,	// (0x0002c127) aid_fep_china_hwr2_fs_candi_cell

0x0f61,	// (0x0001fe0f) bg_popup_fep_shadow_pane_cp6

0xd283,	// (0x0002c131) popup_fep_china_hwr2_fs_candidate_grid

0xd28d,	// (0x0002c13b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd28d,	// (0x0002c13b) cell_fep_china_hwr2_fs_funtion_grid

0xbaa5,	// (0x0002a953) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd2a5,	// (0x0002c153) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd2a5,	// (0x0002c153) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd2b3,	// (0x0002c161) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd2b3,	// (0x0002c161) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd19,	// (0x0002ebc7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd19,	// (0x0002ebc7) cell_fep_china_hwr2_fs_funtion_grid_g

0xd2c9,	// (0x0002c177) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd2c9,	// (0x0002c177) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd2de,	// (0x0002c18c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd2de,	// (0x0002c18c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1e,	// (0x0002ebcc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1e,	// (0x0002ebcc) cell_fep_china_hwr2_fs_funtion_grid_t

0xd2fa,	// (0x0002c1a8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd302,	// (0x0002c1b0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd30a,	// (0x0002c1b8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd23,	// (0x0002ebd1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd312,	// (0x0002c1c0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd312,	// (0x0002c1c0) cell_fep_china_hwr2_fs_candidate_grid

0xd331,	// (0x0002c1df) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd339,	// (0x0002c1e7) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbaa5,	// (0x0002a953) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbaa5,	// (0x0002a953) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0002e9f1) cell_fep_china_hwr2_fs_candidate_grid_g

0xd341,	// (0x0002c1ef) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7eb4,	// (0x00026d62) clock_nsta_pane_cp_24_ParamLimits

0x7eb4,	// (0x00026d62) clock_nsta_pane_cp_24

0x7f34,	// (0x00026de2) indicator_nsta_pane_cp_24_ParamLimits

0x7f34,	// (0x00026de2) indicator_nsta_pane_cp_24

0xa0f0,	// (0x00028f9e) heading_pane_g1

0x0001,

0xf8d1,	// (0x0002e77f) heading_pane_g

0xab80,	// (0x00029a2e) grid_sct_catagory_button_pane

0xabb2,	// (0x00029a60) scroll_pane_cp5_ParamLimits

0xb6f1,	// (0x0002a59f) button_value_adjust_pane_cp5_ParamLimits

0xb6f1,	// (0x0002a59f) button_value_adjust_pane_cp5

0xb7d6,	// (0x0002a684) form2_midp_time_pane_ParamLimits

0xd34f,	// (0x0002c1fd) cell_sct_catagory_button_pane_ParamLimits

0xd34f,	// (0x0002c1fd) cell_sct_catagory_button_pane

0xba6a,	// (0x0002a918) bg_button_pane_cp01_ParamLimits

0xba6a,	// (0x0002a918) bg_button_pane_cp01

0xbaa5,	// (0x0002a953) cell_sct_catagory_button_pane_g1

0x7c6f,	// (0x00026b1d) popup_tb_extension_window

0xd361,	// (0x0002c20f) aid_size_cell_ext_ParamLimits

0xd361,	// (0x0002c20f) aid_size_cell_ext

0x111e,	// (0x0001ffcc) bg_tb_trans_pane_cp1_ParamLimits

0x111e,	// (0x0001ffcc) bg_tb_trans_pane_cp1

0xd381,	// (0x0002c22f) grid_tb_ext_pane_ParamLimits

0xd381,	// (0x0002c22f) grid_tb_ext_pane

0xd3b1,	// (0x0002c25f) cell_tb_ext_pane_ParamLimits

0xd3b1,	// (0x0002c25f) cell_tb_ext_pane

0xd3c8,	// (0x0002c276) cell_tb_ext_pane_g1_ParamLimits

0xd3c8,	// (0x0002c276) cell_tb_ext_pane_g1

0xd3e5,	// (0x0002c293) cell_tb_ext_pane_t1

0x111e,	// (0x0001ffcc) list_highlight_pane_cp11_ParamLimits

0x111e,	// (0x0001ffcc) list_highlight_pane_cp11

0x624b,	// (0x000250f9) popup_uni_indicator_window_ParamLimits

0x624b,	// (0x000250f9) popup_uni_indicator_window

0x2df2,	// (0x00021ca0) bg_popup_sub_pane_cp14

0xd400,	// (0x0002c2ae) list_uniindi_pane

0xd40c,	// (0x0002c2ba) uniindi_top_pane

0x111e,	// (0x0001ffcc) bg_uniindi_top_pane

0xd42d,	// (0x0002c2db) uniindi_top_pane_g1

0xd443,	// (0x0002c2f1) uniindi_top_pane_g2

0x0003,

0xfd2a,	// (0x0002ebd8) uniindi_top_pane_g

0xd46d,	// (0x0002c31b) uniindi_top_pane_t1

0xd499,	// (0x0002c347) list_single_uniindi_pane_ParamLimits

0xd499,	// (0x0002c347) list_single_uniindi_pane

0xbaa5,	// (0x0002a953) bg_uniindi_top_pane_g1

0xd4ab,	// (0x0002c359) list_single_uniindi_pane_g1

0xd4be,	// (0x0002c36c) list_single_uniindi_pane_t1

0x0f61,	// (0x0001fe0f) control_bg_pane

0xd4e3,	// (0x0002c391) bg_sctrl_sk_pane_cp1

0xd4ec,	// (0x0002c39a) bg_sctrl_sk_pane_cp2

0xd4f5,	// (0x0002c3a3) control_bg_pane_g1

0xd4fe,	// (0x0002c3ac) control_bg_pane_g2

0x0001,

0xfd33,	// (0x0002ebe1) control_bg_pane_g

0xb512,	// (0x0002a3c0) cell_indicator_nsta_pane_g1_ParamLimits

0xb520,	// (0x0002a3ce) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0002e955) cell_indicator_nsta_pane_g_ParamLimits

0x5b51,	// (0x000249ff) form2_midp_time_pane_t1_ParamLimits

0x137b,	// (0x00020229) main_idle_act4_pane_ParamLimits

0x137b,	// (0x00020229) main_idle_act4_pane

0x7c6f,	// (0x00026b1d) popup_tb_extension_window_ParamLimits

0xd3a3,	// (0x0002c251) tb_ext_find_pane_ParamLimits

0xd3a3,	// (0x0002c251) tb_ext_find_pane

0xd507,	// (0x0002c3b5) ai_gene_pane_1_cp1

0x7367,	// (0x00026215) ai_gene_pane_2_cp1

0xd50f,	// (0x0002c3bd) list_single_idle_plugin_calendar_pane

0xd518,	// (0x0002c3c6) list_single_idle_plugin_notification_pane

0xd521,	// (0x0002c3cf) list_single_idle_plugin_player_pane

0xd52a,	// (0x0002c3d8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd52a,	// (0x0002c3d8) list_single_idle_plugin_shortcut_pane

0xd54c,	// (0x0002c3fa) main_idle_act4_pane_t1

0xd55e,	// (0x0002c40c) main_idle_act4_pane_t2

0x0001,

0xfd38,	// (0x0002ebe6) main_idle_act4_pane_t

0xd570,	// (0x0002c41e) middle_sk_idle_act4_pane_ParamLimits

0xd570,	// (0x0002c41e) middle_sk_idle_act4_pane

0xd586,	// (0x0002c434) popup_clock_digital_analogue_window_cp2

0xd5a0,	// (0x0002c44e) shortcut_wheel_idle_act4_pane_ParamLimits

0xd5a0,	// (0x0002c44e) shortcut_wheel_idle_act4_pane

0xbaa5,	// (0x0002a953) shortcut_wheel_idle_act4_pane_g1

0xbaa5,	// (0x0002a953) shortcut_wheel_idle_act4_pane_g2

0xbaa5,	// (0x0002a953) shortcut_wheel_idle_act4_pane_g3

0xbaa5,	// (0x0002a953) shortcut_wheel_idle_act4_pane_g4

0xbaa5,	// (0x0002a953) shortcut_wheel_idle_act4_pane_g5

0xd5b4,	// (0x0002c462) shortcut_wheel_idle_act4_pane_g6

0xd5bc,	// (0x0002c46a) shortcut_wheel_idle_act4_pane_g7

0xd5c4,	// (0x0002c472) shortcut_wheel_idle_act4_pane_g8

0xd5cc,	// (0x0002c47a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3d,	// (0x0002ebeb) shortcut_wheel_idle_act4_pane_g

0xbd20,	// (0x0002abce) middle_sk_idle_act4_pane_g1_ParamLimits

0xbd20,	// (0x0002abce) middle_sk_idle_act4_pane_g1

0xd630,	// (0x0002c4de) middle_sk_idle_act4_pane_g2_ParamLimits

0xd630,	// (0x0002c4de) middle_sk_idle_act4_pane_g2

0x0001,

0xfd60,	// (0x0002ec0e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd60,	// (0x0002ec0e) middle_sk_idle_act4_pane_g

0xd63c,	// (0x0002c4ea) middle_sk_idle_act4_pane_t1_ParamLimits

0xd63c,	// (0x0002c4ea) middle_sk_idle_act4_pane_t1

0xd659,	// (0x0002c507) grid_ai_shortcut_pane_ParamLimits

0xd659,	// (0x0002c507) grid_ai_shortcut_pane

0xd672,	// (0x0002c520) list_highlight_pane_cp16_ParamLimits

0xd672,	// (0x0002c520) list_highlight_pane_cp16

0xd67f,	// (0x0002c52d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd67f,	// (0x0002c52d) list_single_idle_plugin_shortcut_pane_g1

0xd68b,	// (0x0002c539) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd68b,	// (0x0002c539) list_single_idle_plugin_shortcut_pane_g2

0xd6a5,	// (0x0002c553) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd6a5,	// (0x0002c553) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd65,	// (0x0002ec13) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd65,	// (0x0002ec13) list_single_idle_plugin_shortcut_pane_g

0xd6b8,	// (0x0002c566) cell_ai_shortcut_pane_ParamLimits

0xd6b8,	// (0x0002c566) cell_ai_shortcut_pane

0xd6db,	// (0x0002c589) cell_ai_shortcut_pane_g1_ParamLimits

0xd6db,	// (0x0002c589) cell_ai_shortcut_pane_g1

0xd507,	// (0x0002c3b5) ai_gene_pane_1_cp2

0xd6fd,	// (0x0002c5ab) ai_gene_pane_2_cp2

0xd705,	// (0x0002c5b3) list_highlight_pane_cp15

0xd70e,	// (0x0002c5bc) list_single_idle_plugin_calendar_pane_g1

0xd705,	// (0x0002c5b3) list_highlight_pane_cp17

0xd716,	// (0x0002c5c4) list_single_idle_plugin_calendar_pane_g1_copy1

0xd71e,	// (0x0002c5cc) list_single_idle_plugin_player_pane_g1

0xade7,	// (0x00029c95) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6c,	// (0x0002ec1a) list_single_idle_plugin_player_pane_g

0xd726,	// (0x0002c5d4) list_single_idle_plugin_player_pane_t1

0xd734,	// (0x0002c5e2) list_single_idle_plugin_player_pane_t2

0xd742,	// (0x0002c5f0) list_single_idle_plugin_player_pane_t3

0xd750,	// (0x0002c5fe) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd71,	// (0x0002ec1f) list_single_idle_plugin_player_pane_t

0xd75e,	// (0x0002c60c) wait_bar_pane_cp15

0xd766,	// (0x0002c614) grid_ai_notification_pane

0xade7,	// (0x00029c95) list_single_idle_plugin_notification_pane_g1

0xd76f,	// (0x0002c61d) cell_ai_notification_pane_ParamLimits

0xd76f,	// (0x0002c61d) cell_ai_notification_pane

0xd77c,	// (0x0002c62a) cell_ai_notification_pane_g1

0xd784,	// (0x0002c632) cell_ai_notification_pane_t1

0xd792,	// (0x0002c640) tb_ext_find_button_pane

0xd79a,	// (0x0002c648) tb_ext_find_pane_g1

0xd7a2,	// (0x0002c650) tb_ext_find_pane_t1

0x69f4,	// (0x000258a2) tb_ext_find_button_pane_g1

0xd7b0,	// (0x0002c65e) tb_ext_find_button_pane_g2

0x0001,

0xfd7a,	// (0x0002ec28) tb_ext_find_button_pane_g

0xd54c,	// (0x0002c3fa) main_idle_act4_pane_t1_ParamLimits

0xd55e,	// (0x0002c40c) main_idle_act4_pane_t2_ParamLimits

0xfd38,	// (0x0002ebe6) main_idle_act4_pane_t_ParamLimits

0xd586,	// (0x0002c434) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd594,	// (0x0002c442) sat_plugin_idle_act4_pane_ParamLimits

0xd594,	// (0x0002c442) sat_plugin_idle_act4_pane

0xd7b9,	// (0x0002c667) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd7b9,	// (0x0002c667) sat_plugin_idle_act4_pane_t1

0xd7cc,	// (0x0002c67a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd7cc,	// (0x0002c67a) sat_plugin_idle_act4_pane_t2

0xd7df,	// (0x0002c68d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd7df,	// (0x0002c68d) sat_plugin_idle_act4_pane_t3

0xd7f2,	// (0x0002c6a0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd7f2,	// (0x0002c6a0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7f,	// (0x0002ec2d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7f,	// (0x0002ec2d) sat_plugin_idle_act4_pane_t

0x617c,	// (0x0002502a) popup_battery_window_ParamLimits

0x617c,	// (0x0002502a) popup_battery_window

0x111e,	// (0x0001ffcc) bg_popup_sub_pane_cp25_ParamLimits

0x111e,	// (0x0001ffcc) bg_popup_sub_pane_cp25

0xd805,	// (0x0002c6b3) popup_battery_window_g1_ParamLimits

0xd805,	// (0x0002c6b3) popup_battery_window_g1

0xd811,	// (0x0002c6bf) popup_battery_window_t1_ParamLimits

0xd811,	// (0x0002c6bf) popup_battery_window_t1

0xd823,	// (0x0002c6d1) popup_battery_window_t2_ParamLimits

0xd823,	// (0x0002c6d1) popup_battery_window_t2

0x0001,

0xfd88,	// (0x0002ec36) popup_battery_window_t_ParamLimits

0xfd88,	// (0x0002ec36) popup_battery_window_t

0x7232,	// (0x000260e0) midp_canvas_pane_ParamLimits

0x72a9,	// (0x00026157) midp_keypad_pane_ParamLimits

0x72a9,	// (0x00026157) midp_keypad_pane

0x7797,	// (0x00026645) main_midp_pane_ParamLimits

0xb59e,	// (0x0002a44c) signal_pane_g2_cp_ParamLimits

0xd840,	// (0x0002c6ee) aid_size_cell_midp_keypad_ParamLimits

0xd840,	// (0x0002c6ee) aid_size_cell_midp_keypad

0xd85a,	// (0x0002c708) midp_keyp_game_grid_pane_ParamLimits

0xd85a,	// (0x0002c708) midp_keyp_game_grid_pane

0xd87a,	// (0x0002c728) midp_keyp_rocker_pane_ParamLimits

0xd87a,	// (0x0002c728) midp_keyp_rocker_pane

0xd8a5,	// (0x0002c753) midp_keyp_sk_left_pane_ParamLimits

0xd8a5,	// (0x0002c753) midp_keyp_sk_left_pane

0xd8ff,	// (0x0002c7ad) midp_keyp_sk_right_pane_ParamLimits

0xd8ff,	// (0x0002c7ad) midp_keyp_sk_right_pane

0x0f61,	// (0x0001fe0f) bg_button_pane_cp03

0xd959,	// (0x0002c807) midp_keyp_sk_left_pane_g1

0x0f61,	// (0x0001fe0f) bg_button_pane_cp04

0xd959,	// (0x0002c807) midp_keyp_sk_right_pane_g1

0xbaa5,	// (0x0002a953) midp_keyp_rocker_pane_g1

0xd962,	// (0x0002c810) keyp_game_cell_pane_ParamLimits

0xd962,	// (0x0002c810) keyp_game_cell_pane

0x0f61,	// (0x0001fe0f) bg_button_pane_cp02

0xd975,	// (0x0002c823) keyp_game_cell_pane_g1

0x61c6,	// (0x00025074) popup_fep_vkb2_window_ParamLimits

0x61c6,	// (0x00025074) popup_fep_vkb2_window

0x8add,	// (0x0002798b) aid_size_cell_vkb2_ParamLimits

0x8add,	// (0x0002798b) aid_size_cell_vkb2

0x8b31,	// (0x000279df) popup_fep_vkb2_window_g1_ParamLimits

0x8b31,	// (0x000279df) popup_fep_vkb2_window_g1

0x8b79,	// (0x00027a27) vkb2_area_bottom_pane_ParamLimits

0x8b79,	// (0x00027a27) vkb2_area_bottom_pane

0x8bcd,	// (0x00027a7b) vkb2_area_keypad_pane_ParamLimits

0x8bcd,	// (0x00027a7b) vkb2_area_keypad_pane

0x8c13,	// (0x00027ac1) vkb2_area_top_pane_ParamLimits

0x8c13,	// (0x00027ac1) vkb2_area_top_pane

0x8c8d,	// (0x00027b3b) vkb2_top_entry_pane_ParamLimits

0x8c8d,	// (0x00027b3b) vkb2_top_entry_pane

0x8cb7,	// (0x00027b65) vkb2_top_grid_left_pane_ParamLimits

0x8cb7,	// (0x00027b65) vkb2_top_grid_left_pane

0x8cd5,	// (0x00027b83) vkb2_top_grid_right_pane_ParamLimits

0x8cd5,	// (0x00027b83) vkb2_top_grid_right_pane

0x8cf3,	// (0x00027ba1) vkb2_cell_keypad_pane_ParamLimits

0x8cf3,	// (0x00027ba1) vkb2_cell_keypad_pane

0x8dc4,	// (0x00027c72) vkb2_area_bottom_grid_pane_ParamLimits

0x8dc4,	// (0x00027c72) vkb2_area_bottom_grid_pane

0x8dea,	// (0x00027c98) vkb2_area_bottom_pane_g1_ParamLimits

0x8dea,	// (0x00027c98) vkb2_area_bottom_pane_g1

0x8e0e,	// (0x00027cbc) vkb2_area_bottom_pane_g2_ParamLimits

0x8e0e,	// (0x00027cbc) vkb2_area_bottom_pane_g2

0x8e3c,	// (0x00027cea) vkb2_area_bottom_pane_g3_ParamLimits

0x8e3c,	// (0x00027cea) vkb2_area_bottom_pane_g3

0x0002,

0xfd8d,	// (0x0002ec3b) vkb2_area_bottom_pane_g_ParamLimits

0xfd8d,	// (0x0002ec3b) vkb2_area_bottom_pane_g

0x8e9d,	// (0x00027d4b) vkb2_top_cell_left_pane_ParamLimits

0x8e9d,	// (0x00027d4b) vkb2_top_cell_left_pane

0xd986,	// (0x0002c834) vkb2_top_entry_pane_g1_ParamLimits

0xd986,	// (0x0002c834) vkb2_top_entry_pane_g1

0xd994,	// (0x0002c842) vkb2_top_entry_pane_t1_ParamLimits

0xd994,	// (0x0002c842) vkb2_top_entry_pane_t1

0xd9c6,	// (0x0002c874) vkb2_top_entry_pane_t2_ParamLimits

0xd9c6,	// (0x0002c874) vkb2_top_entry_pane_t2

0xd9f8,	// (0x0002c8a6) vkb2_top_entry_pane_t3_ParamLimits

0xd9f8,	// (0x0002c8a6) vkb2_top_entry_pane_t3

0x0002,

0xfd94,	// (0x0002ec42) vkb2_top_entry_pane_t_ParamLimits

0xfd94,	// (0x0002ec42) vkb2_top_entry_pane_t

0x8eea,	// (0x00027d98) vkb2_top_grid_right_pane_g1_ParamLimits

0x8eea,	// (0x00027d98) vkb2_top_grid_right_pane_g1

0x8f00,	// (0x00027dae) vkb2_top_grid_right_pane_g2_ParamLimits

0x8f00,	// (0x00027dae) vkb2_top_grid_right_pane_g2

0x8f18,	// (0x00027dc6) vkb2_top_grid_right_pane_g3_ParamLimits

0x8f18,	// (0x00027dc6) vkb2_top_grid_right_pane_g3

0x8f30,	// (0x00027dde) vkb2_top_grid_right_pane_g4_ParamLimits

0x8f30,	// (0x00027dde) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9b,	// (0x0002ec49) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9b,	// (0x0002ec49) vkb2_top_grid_right_pane_g

0x8f46,	// (0x00027df4) vkb2_top_cell_left_pane_g1

0x8f5d,	// (0x00027e0b) vkb2_cell_keypad_pane_g1_ParamLimits

0x8f5d,	// (0x00027e0b) vkb2_cell_keypad_pane_g1

0xda1c,	// (0x0002c8ca) vkb2_cell_keypad_pane_t1_ParamLimits

0xda1c,	// (0x0002c8ca) vkb2_cell_keypad_pane_t1

0x8f6b,	// (0x00027e19) vkb2_cell_bottom_grid_pane_ParamLimits

0x8f6b,	// (0x00027e19) vkb2_cell_bottom_grid_pane

0x8fa4,	// (0x00027e52) vkb2_cell_bottom_grid_pane_g1

0xd5d4,	// (0x0002c482) aid_call2_pane_cp02

0xd5dc,	// (0x0002c48a) aid_call_pane_cp02

0xd5e4,	// (0x0002c492) clock_digital_number_pane_cp10

0xd5ec,	// (0x0002c49a) clock_digital_number_pane_cp11

0xd5f4,	// (0x0002c4a2) clock_digital_number_pane_cp12

0xd5fc,	// (0x0002c4aa) clock_digital_number_pane_cp13

0xd604,	// (0x0002c4b2) clock_digital_separator_pane_cp10

0x69f4,	// (0x000258a2) popup_clock_digital_analogue_window_cp2_g1

0x69f4,	// (0x000258a2) popup_clock_digital_analogue_window_cp2_g2

0xd60c,	// (0x0002c4ba) popup_clock_digital_analogue_window_cp2_g3

0x69f4,	// (0x000258a2) popup_clock_digital_analogue_window_cp2_g4

0xd60c,	// (0x0002c4ba) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd50,	// (0x0002ebfe) popup_clock_digital_analogue_window_cp2_g

0xd614,	// (0x0002c4c2) popup_clock_digital_analogue_window_cp2_t1

0xd622,	// (0x0002c4d0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5b,	// (0x0002ec09) popup_clock_digital_analogue_window_cp2_t

0xbaa5,	// (0x0002a953) clock_digital_number_pane_cp10_g1

0xbaa5,	// (0x0002a953) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0002e9f1) clock_digital_number_pane_cp10_g

0xbaa5,	// (0x0002a953) clock_digital_separator_pane_cp10_g1

0xbaa5,	// (0x0002a953) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0002e9f1) clock_digital_separator_pane_cp10_g

0xd44f,	// (0x0002c2fd) uniindi_top_pane_g3

0xd460,	// (0x0002c30e) uniindi_top_pane_g4

0x8d7e,	// (0x00027c2c) vkb2_row_keypad_pane_ParamLimits

0x8d7e,	// (0x00027c2c) vkb2_row_keypad_pane

0x8fc0,	// (0x00027e6e) vkb2_cell_t_keypad_pane_ParamLimits

0x8fc0,	// (0x00027e6e) vkb2_cell_t_keypad_pane

0x8fd0,	// (0x00027e7e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8fd0,	// (0x00027e7e) vkb2_cell_t_keypad_pane_cp08

0x8fe5,	// (0x00027e93) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8fe5,	// (0x00027e93) vkb2_cell_t_keypad_pane_cp09

0x8ff9,	// (0x00027ea7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8ff9,	// (0x00027ea7) vkb2_cell_t_keypad_pane_cp01

0x900a,	// (0x00027eb8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x900a,	// (0x00027eb8) vkb2_cell_t_keypad_pane_cp02

0x901b,	// (0x00027ec9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x901b,	// (0x00027ec9) vkb2_cell_t_keypad_pane_cp03

0x902c,	// (0x00027eda) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x902c,	// (0x00027eda) vkb2_cell_t_keypad_pane_cp04

0x903d,	// (0x00027eeb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x903d,	// (0x00027eeb) vkb2_cell_t_keypad_pane_cp05

0x904e,	// (0x00027efc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x904e,	// (0x00027efc) vkb2_cell_t_keypad_pane_cp06

0x9061,	// (0x00027f0f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9061,	// (0x00027f0f) vkb2_cell_t_keypad_pane_cp07

0x9076,	// (0x00027f24) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9076,	// (0x00027f24) vkb2_cell_t_keypad_pane_cp10

0xbd20,	// (0x0002abce) vkb2_cell_t_keypad_pane_g1

0xda33,	// (0x0002c8e1) vkb2_cell_t_keypad_pane_t1

0x0f61,	// (0x0001fe0f) popup_grid_graphic2_window

0xda45,	// (0x0002c8f3) aid_size_cell_graphic2_ParamLimits

0xda45,	// (0x0002c8f3) aid_size_cell_graphic2

0xda7d,	// (0x0002c92b) bg_popup_window_pane_cp21_ParamLimits

0xda7d,	// (0x0002c92b) bg_popup_window_pane_cp21

0xda8b,	// (0x0002c939) graphic2_pages_pane_ParamLimits

0xda8b,	// (0x0002c939) graphic2_pages_pane

0xdad1,	// (0x0002c97f) grid_graphic2_control_pane_ParamLimits

0xdad1,	// (0x0002c97f) grid_graphic2_control_pane

0xdb0f,	// (0x0002c9bd) grid_graphic2_pane_ParamLimits

0xdb0f,	// (0x0002c9bd) grid_graphic2_pane

0xdb85,	// (0x0002ca33) cell_graphic2_pane

0x0f61,	// (0x0001fe0f) main_comp_mode_pane

0xccc0,	// (0x0002bb6e) list_ai3_gene_pane_ParamLimits

0xd088,	// (0x0002bf36) bg_popup_window_pane_cp19_ParamLimits

0xd094,	// (0x0002bf42) bg_touch_area_indi_pane_ParamLimits

0xd094,	// (0x0002bf42) bg_touch_area_indi_pane

0xd0aa,	// (0x0002bf58) bg_touch_area_indi_pane_cp01_ParamLimits

0xd0aa,	// (0x0002bf58) bg_touch_area_indi_pane_cp01

0xd0c2,	// (0x0002bf70) bg_touch_area_indi_pane_cp02_ParamLimits

0xd0c2,	// (0x0002bf70) bg_touch_area_indi_pane_cp02

0xd0dc,	// (0x0002bf8a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd0dc,	// (0x0002bf8a) bg_touch_area_indi_pane_cp03

0xd0f6,	// (0x0002bfa4) popup_slider_window_g1_ParamLimits

0xd112,	// (0x0002bfc0) popup_slider_window_g2_ParamLimits

0xd12e,	// (0x0002bfdc) popup_slider_window_g3_ParamLimits

0xfce5,	// (0x0002eb93) popup_slider_window_g_ParamLimits

0xd18a,	// (0x0002c038) popup_slider_window_t1_ParamLimits

0xd1fe,	// (0x0002c0ac) small_volume_slider_vertical_pane_ParamLimits

0xdb85,	// (0x0002ca33) cell_graphic2_pane_ParamLimits

0xdbd7,	// (0x0002ca85) bg_button_pane_cp10_ParamLimits

0xdbd7,	// (0x0002ca85) bg_button_pane_cp10

0xdbec,	// (0x0002ca9a) bg_button_pane_cp11_ParamLimits

0xdbec,	// (0x0002ca9a) bg_button_pane_cp11

0xdc01,	// (0x0002caaf) graphic2_pages_pane_g1_ParamLimits

0xdc01,	// (0x0002caaf) graphic2_pages_pane_g1

0xdc1c,	// (0x0002caca) graphic2_pages_pane_g2_ParamLimits

0xdc1c,	// (0x0002caca) graphic2_pages_pane_g2

0x0001,

0xfda9,	// (0x0002ec57) graphic2_pages_pane_g_ParamLimits

0xfda9,	// (0x0002ec57) graphic2_pages_pane_g

0xdc34,	// (0x0002cae2) graphic2_pages_pane_t1_ParamLimits

0xdc34,	// (0x0002cae2) graphic2_pages_pane_t1

0xdc4a,	// (0x0002caf8) cell_graphic2_control_pane_ParamLimits

0xdc4a,	// (0x0002caf8) cell_graphic2_control_pane

0xdc6d,	// (0x0002cb1b) cell_graphic2_pane_g1_ParamLimits

0xdc6d,	// (0x0002cb1b) cell_graphic2_pane_g1

0xdc7a,	// (0x0002cb28) cell_graphic2_pane_g2_ParamLimits

0xdc7a,	// (0x0002cb28) cell_graphic2_pane_g2

0xdc87,	// (0x0002cb35) cell_graphic2_pane_g3_ParamLimits

0xdc87,	// (0x0002cb35) cell_graphic2_pane_g3

0xdc94,	// (0x0002cb42) cell_graphic2_pane_g4_ParamLimits

0xdc94,	// (0x0002cb42) cell_graphic2_pane_g4

0xdca1,	// (0x0002cb4f) cell_graphic2_pane_g5_ParamLimits

0xdca1,	// (0x0002cb4f) cell_graphic2_pane_g5

0x0004,

0xfdae,	// (0x0002ec5c) cell_graphic2_pane_g_ParamLimits

0xfdae,	// (0x0002ec5c) cell_graphic2_pane_g

0xdcbc,	// (0x0002cb6a) cell_graphic2_pane_t1_ParamLimits

0xdcbc,	// (0x0002cb6a) cell_graphic2_pane_t1

0x9491,	// (0x0002833f) grid_highlight_pane_cp11_ParamLimits

0x9491,	// (0x0002833f) grid_highlight_pane_cp11

0x111e,	// (0x0001ffcc) bg_button_pane_cp05

0xdce5,	// (0x0002cb93) cell_graphic2_control_pane_g1

0xbaa5,	// (0x0002a953) bg_touch_area_indi_pane_g1

0xdd0d,	// (0x0002cbbb) aid_cmod_rocker_key_size

0xdd17,	// (0x0002cbc5) aid_cmode_itu_key_size

0xdd21,	// (0x0002cbcf) main_cmode_video_pane

0xdd2b,	// (0x0002cbd9) main_comp_mode_itu_pane

0xdd37,	// (0x0002cbe5) main_comp_mode_rocker_pane

0xdd43,	// (0x0002cbf1) cell_cmode_rocker_pane_ParamLimits

0xdd43,	// (0x0002cbf1) cell_cmode_rocker_pane

0xdd57,	// (0x0002cc05) cell_cmode_itu_pane_ParamLimits

0xdd57,	// (0x0002cc05) cell_cmode_itu_pane

0x2df2,	// (0x00021ca0) bg_button_pane_cp06_ParamLimits

0x2df2,	// (0x00021ca0) bg_button_pane_cp06

0xbd20,	// (0x0002abce) cell_cmode_rocker_pane_g1_ParamLimits

0xbd20,	// (0x0002abce) cell_cmode_rocker_pane_g1

0xd2a5,	// (0x0002c153) cell_cmode_rocker_pane_g2_ParamLimits

0xd2a5,	// (0x0002c153) cell_cmode_rocker_pane_g2

0x0001,

0xfdbe,	// (0x0002ec6c) cell_cmode_rocker_pane_g_ParamLimits

0xfdbe,	// (0x0002ec6c) cell_cmode_rocker_pane_g

0x0f61,	// (0x0001fe0f) bg_button_pane_cp07

0xdd6e,	// (0x0002cc1c) cell_cmode_itu_pane_g1

0xdd77,	// (0x0002cc25) cell_cmode_itu_pane_t1

0xdd85,	// (0x0002cc33) cell_cmode_itu_pane_t2

0x0001,

0xfdc3,	// (0x0002ec71) cell_cmode_itu_pane_t

0xd4d3,	// (0x0002c381) aid_touch_ctrl_left

0xd4db,	// (0x0002c389) aid_touch_ctrl_right

0x0f61,	// (0x0001fe0f) compa_mode_pane

0xdd93,	// (0x0002cc41) aid_cmod_rocker_key_size_cp

0xdd9d,	// (0x0002cc4b) aid_cmode_itu_key_size_cp

0xdda7,	// (0x0002cc55) compa_mode_pane_g1

0xddaf,	// (0x0002cc5d) compa_mode_pane_g2

0xddb7,	// (0x0002cc65) compa_mode_pane_g3

0x0002,

0xfdc8,	// (0x0002ec76) compa_mode_pane_g

0xddbf,	// (0x0002cc6d) main_comp_mode_itu_pane_cp

0xddc7,	// (0x0002cc75) main_comp_mode_rocker_pane_cp

0xddcf,	// (0x0002cc7d) cell_cmode_itu_pane_cp_ParamLimits

0xddcf,	// (0x0002cc7d) cell_cmode_itu_pane_cp

0xdde4,	// (0x0002cc92) cell_cmode_rocker_pane_cp_ParamLimits

0xdde4,	// (0x0002cc92) cell_cmode_rocker_pane_cp

0x2df2,	// (0x00021ca0) bg_button_pane_cp06_cp_ParamLimits

0x2df2,	// (0x00021ca0) bg_button_pane_cp06_cp

0xbd20,	// (0x0002abce) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbd20,	// (0x0002abce) cell_cmode_rocker_pane_g1_cp

0xbaa5,	// (0x0002a953) cell_cmode_rocker_pane_g2_cp

0x0f61,	// (0x0001fe0f) bg_button_pane_cp07_cp

0xddf6,	// (0x0002cca4) cell_cmode_itu_pane_g1_cp

0xddff,	// (0x0002ccad) cell_cmode_itu_pane_t1_cp

0xddff,	// (0x0002ccad) cell_cmode_itu_pane_t2_cp

0xa974,	// (0x00029822) settings_code_pane_cp2

0x0fd1,	// (0x0001fe7f) bg_popup_window_pane_cp3_ParamLimits

0x130c,	// (0x000201ba) heading_pane_cp3_ParamLimits

0x1318,	// (0x000201c6) listscroll_popup_graphic_pane_ParamLimits

0x866d,	// (0x0002751b) fep_hwr_aid_pane_ParamLimits

0x8a52,	// (0x00027900) aid_touch_sctrl_top_ParamLimits

0x8a5f,	// (0x0002790d) sctrl_sk_top_pane_g1_ParamLimits

0xbd20,	// (0x0002abce) sctrl_sk_top_pane_g2_ParamLimits

0xfcfe,	// (0x0002ebac) sctrl_sk_top_pane_g_ParamLimits

0x8a6c,	// (0x0002791a) sctrl_sk_top_pane_t1_ParamLimits

0x8a52,	// (0x00027900) aid_touch_sctrl_bottom_ParamLimits

0x8a6c,	// (0x0002791a) sctrl_sk_bottom_pane_t1_ParamLimits

0xd419,	// (0x0002c2c7) aid_area_touch_clock

0x8c55,	// (0x00027b03) aid_vkb2_area_top_pane_cell_ParamLimits

0x8c55,	// (0x00027b03) aid_vkb2_area_top_pane_cell

0x8da0,	// (0x00027c4e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8da0,	// (0x00027c4e) aid_vkb2_area_bottom_pane_cell

0xd97e,	// (0x0002c82c) popup_char_count_window

0xde0d,	// (0x0002ccbb) popup_char_count_window_g1

0xde16,	// (0x0002ccc4) popup_char_count_window_g2

0xde1f,	// (0x0002cccd) popup_char_count_window_g3

0x0002,

0xfdcf,	// (0x0002ec7d) popup_char_count_window_g

0xde28,	// (0x0002ccd6) popup_char_count_window_t1

0x8b0f,	// (0x000279bd) popup_fep_char_preview_window_ParamLimits

0x8b0f,	// (0x000279bd) popup_fep_char_preview_window

0x8c73,	// (0x00027b21) vkb2_top_candi_pane_ParamLimits

0x8c73,	// (0x00027b21) vkb2_top_candi_pane

0xde36,	// (0x0002cce4) cell_vkb2_top_candi_pane_ParamLimits

0xde36,	// (0x0002cce4) cell_vkb2_top_candi_pane

0x9a6d,	// (0x0002891b) bg_popup_fep_char_preview_window_ParamLimits

0x9a6d,	// (0x0002891b) bg_popup_fep_char_preview_window

0x908b,	// (0x00027f39) popup_fep_char_preview_window_t1_ParamLimits

0x908b,	// (0x00027f39) popup_fep_char_preview_window_t1

0xde87,	// (0x0002cd35) bg_popup_fep_char_preview_window_g1

0xde8f,	// (0x0002cd3d) bg_popup_fep_char_preview_window_g2

0xde97,	// (0x0002cd45) bg_popup_fep_char_preview_window_g3

0xde9f,	// (0x0002cd4d) bg_popup_fep_char_preview_window_g4

0xdea7,	// (0x0002cd55) bg_popup_fep_char_preview_window_g5

0x90c5,	// (0x00027f73) bg_popup_fep_char_preview_window_g6

0xdeaf,	// (0x0002cd5d) bg_popup_fep_char_preview_window_g7

0xdeb7,	// (0x0002cd65) bg_popup_fep_char_preview_window_g8

0xdebf,	// (0x0002cd6d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd6,	// (0x0002ec84) bg_popup_fep_char_preview_window_g

0xbd20,	// (0x0002abce) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbd20,	// (0x0002abce) cell_vkb2_top_candi_pane_g1

0xc192,	// (0x0002b040) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc192,	// (0x0002b040) cell_vkb2_top_candi_pane_g2

0xc1b3,	// (0x0002b061) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc1b3,	// (0x0002b061) cell_vkb2_top_candi_pane_g3

0x90cd,	// (0x00027f7b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x90cd,	// (0x00027f7b) cell_vkb2_top_candi_pane_g4

0xdec7,	// (0x0002cd75) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdec7,	// (0x0002cd75) cell_vkb2_top_candi_pane_g5

0xd2a5,	// (0x0002c153) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd2a5,	// (0x0002c153) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde9,	// (0x0002ec97) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde9,	// (0x0002ec97) cell_vkb2_top_candi_pane_g

0x90ee,	// (0x00027f9c) cell_vkb2_top_candi_pane_t1

0x850f,	// (0x000273bd) aid_size_touch_slider_mark_ParamLimits

0x850f,	// (0x000273bd) aid_size_touch_slider_mark

0xdac1,	// (0x0002c96f) grid_graphic2_catg_pane_ParamLimits

0xdac1,	// (0x0002c96f) grid_graphic2_catg_pane

0xdb5f,	// (0x0002ca0d) popup_grid_graphic2_window_t1_ParamLimits

0xdb5f,	// (0x0002ca0d) popup_grid_graphic2_window_t1

0xdb71,	// (0x0002ca1f) popup_grid_graphic2_window_t2_ParamLimits

0xdb71,	// (0x0002ca1f) popup_grid_graphic2_window_t2

0x0001,

0xfda4,	// (0x0002ec52) popup_grid_graphic2_window_t_ParamLimits

0xfda4,	// (0x0002ec52) popup_grid_graphic2_window_t

0x111e,	// (0x0001ffcc) bg_button_pane_cp05_ParamLimits

0xdce5,	// (0x0002cb93) cell_graphic2_control_pane_g1_ParamLimits

0xdee8,	// (0x0002cd96) cell_graphic2_catg_pane_ParamLimits

0xdee8,	// (0x0002cd96) cell_graphic2_catg_pane

0x0f61,	// (0x0001fe0f) bg_button_pane_cp12

0xdefa,	// (0x0002cda8) cell_graphic2_catg_pane_g1

0xd3e5,	// (0x0002c293) cell_tb_ext_pane_t1_ParamLimits

0x8ebd,	// (0x00027d6b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8ebd,	// (0x00027d6b) vkb2_top_cell_right_narrow_pane

0x8ed5,	// (0x00027d83) vkb2_top_cell_right_wide_pane_ParamLimits

0x8ed5,	// (0x00027d83) vkb2_top_cell_right_wide_pane

0x865f,	// (0x0002750d) bg_vkb2_func_pane_ParamLimits

0x865f,	// (0x0002750d) bg_vkb2_func_pane

0x8f46,	// (0x00027df4) vkb2_top_cell_left_pane_g1_ParamLimits

0x865f,	// (0x0002750d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x865f,	// (0x0002750d) bg_vkb2_fuc_pane_cp03

0x8fa4,	// (0x00027e52) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x939d,	// (0x0002824b) bg_vkb2_func_pane_g1

0x93a5,	// (0x00028253) bg_vkb2_func_pane_g2

0x93b5,	// (0x00028263) bg_vkb2_func_pane_g3

0x93ad,	// (0x0002825b) bg_vkb2_func_pane_g4

0x93bd,	// (0x0002826b) bg_vkb2_func_pane_g5

0x93c5,	// (0x00028273) bg_vkb2_func_pane_g6

0x93cd,	// (0x0002827b) bg_vkb2_func_pane_g7

0x93d5,	// (0x00028283) bg_vkb2_func_pane_g8

0x9395,	// (0x00028243) bg_vkb2_func_pane_g9

0x0008,

0xfdf6,	// (0x0002eca4) bg_vkb2_func_pane_g

0x865f,	// (0x0002750d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x865f,	// (0x0002750d) bg_vkb2_fuc_pane_cp01

0x8f46,	// (0x00027df4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8f46,	// (0x00027df4) vkb2_top_cell_right_wide_pane_g1

0x865f,	// (0x0002750d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x865f,	// (0x0002750d) bg_vkb2_fuc_pane_cp02

0x8fa4,	// (0x00027e52) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8fa4,	// (0x00027e52) vkb2_top_cell_right_narrow_pane_g1

0xd006,	// (0x0002beb4) aid_touch_area_decrease_ParamLimits

0xd006,	// (0x0002beb4) aid_touch_area_decrease

0xd02a,	// (0x0002bed8) aid_touch_area_increase_ParamLimits

0xd02a,	// (0x0002bed8) aid_touch_area_increase

0xd036,	// (0x0002bee4) aid_touch_area_mute_ParamLimits

0xd036,	// (0x0002bee4) aid_touch_area_mute

0xd05a,	// (0x0002bf08) aid_touch_area_slider_ParamLimits

0xd05a,	// (0x0002bf08) aid_touch_area_slider

0xd14a,	// (0x0002bff8) popup_slider_window_g4_ParamLimits

0xd14a,	// (0x0002bff8) popup_slider_window_g4

0xd156,	// (0x0002c004) popup_slider_window_g5_ParamLimits

0xd156,	// (0x0002c004) popup_slider_window_g5

0xd178,	// (0x0002c026) popup_slider_window_g6_ParamLimits

0xd178,	// (0x0002c026) popup_slider_window_g6

0xd1b8,	// (0x0002c066) popup_slider_window_t2_ParamLimits

0xd1b8,	// (0x0002c066) popup_slider_window_t2

0x0001,

0xfcf2,	// (0x0002eba0) popup_slider_window_t_ParamLimits

0xfcf2,	// (0x0002eba0) popup_slider_window_t

0xd1d0,	// (0x0002c07e) slider_pane_ParamLimits

0xd1d0,	// (0x0002c07e) slider_pane

0xdf03,	// (0x0002cdb1) slider_pane_g1_ParamLimits

0xdf03,	// (0x0002cdb1) slider_pane_g1

0xdf17,	// (0x0002cdc5) slider_pane_g2_ParamLimits

0xdf17,	// (0x0002cdc5) slider_pane_g2

0xdf2d,	// (0x0002cddb) slider_pane_g3_ParamLimits

0xdf2d,	// (0x0002cddb) slider_pane_g3

0x0003,

0xfe09,	// (0x0002ecb7) slider_pane_g_ParamLimits

0xfe09,	// (0x0002ecb7) slider_pane_g

0x7cd1,	// (0x00026b7f) popup_tb_float_extension_window_ParamLimits

0x7cd1,	// (0x00026b7f) popup_tb_float_extension_window

0xdf59,	// (0x0002ce07) aid_size_cell_tb_float_ext

0x0f61,	// (0x0001fe0f) bg_popup_sub_window_cp28

0xdf65,	// (0x0002ce13) grid_tb_float_ext_pane

0xdf71,	// (0x0002ce1f) cell_tb_float_ext_pane_ParamLimits

0xdf71,	// (0x0002ce1f) cell_tb_float_ext_pane

0xdf8d,	// (0x0002ce3b) cell_tb_float_ext_pane_g1

0xdf96,	// (0x0002ce44) grid_highlight_pane_cp12

0x87a6,	// (0x00027654) cell_last_hwr_side_pane_ParamLimits

0x87a6,	// (0x00027654) cell_last_hwr_side_pane

0xbaa5,	// (0x0002a953) cell_last_hwr_side_pane_g1

0xdf9f,	// (0x0002ce4d) cell_last_hwr_side_pane_g2

0x0001,

0xfe12,	// (0x0002ecc0) cell_last_hwr_side_pane_g

0x8e6c,	// (0x00027d1a) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8e6c,	// (0x00027d1a) vkb2_area_bottom_space_btn_pane

0xbd20,	// (0x0002abce) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xda33,	// (0x0002c8e1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x90ee,	// (0x00027f9c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x910c,	// (0x00027fba) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x910c,	// (0x00027fba) vkb2_area_bottom_space_btn_pane_g1

0x9146,	// (0x00027ff4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9146,	// (0x00027ff4) vkb2_area_bottom_space_btn_pane_g2

0x917c,	// (0x0002802a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x917c,	// (0x0002802a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe17,	// (0x0002ecc5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe17,	// (0x0002ecc5) vkb2_area_bottom_space_btn_pane_g

0x8716,	// (0x000275c4) cel_fep_hwr_func_pane_ParamLimits

0x8716,	// (0x000275c4) cel_fep_hwr_func_pane

0x8752,	// (0x00027600) cell_hwr_side_button_pane_ParamLimits

0x8752,	// (0x00027600) cell_hwr_side_button_pane

0xd419,	// (0x0002c2c7) aid_area_touch_clock_ParamLimits

0x111e,	// (0x0001ffcc) bg_uniindi_top_pane_ParamLimits

0xd42d,	// (0x0002c2db) uniindi_top_pane_g1_ParamLimits

0xd443,	// (0x0002c2f1) uniindi_top_pane_g2_ParamLimits

0xd44f,	// (0x0002c2fd) uniindi_top_pane_g3_ParamLimits

0xd460,	// (0x0002c30e) uniindi_top_pane_g4_ParamLimits

0xfd2a,	// (0x0002ebd8) uniindi_top_pane_g_ParamLimits

0xd46d,	// (0x0002c31b) uniindi_top_pane_t1_ParamLimits

0x111e,	// (0x0001ffcc) bg_vkb2_func_pane_cp01_ParamLimits

0x111e,	// (0x0001ffcc) bg_vkb2_func_pane_cp01

0xdfa8,	// (0x0002ce56) cel_fep_hwr_func_pane_g1_ParamLimits

0xdfa8,	// (0x0002ce56) cel_fep_hwr_func_pane_g1

0x111e,	// (0x0001ffcc) bg_vkb2_func_pane_cp02_ParamLimits

0x111e,	// (0x0001ffcc) bg_vkb2_func_pane_cp02

0xdfa8,	// (0x0002ce56) cell_hwr_side_button_pane_g1_ParamLimits

0xdfa8,	// (0x0002ce56) cell_hwr_side_button_pane_g1

0x8159,	// (0x00027007) status_pane_g4_ParamLimits

0x8159,	// (0x00027007) status_pane_g4

0x8173,	// (0x00027021) status_pane_t1

0xb844,	// (0x0002a6f2) form2_midp_gauge_slider_cont_pane

0xb84c,	// (0x0002a6fa) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb85e,	// (0x0002a70c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb870,	// (0x0002a71e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0002e9a4) form2_midp_gauge_slider_pane_t_ParamLimits

0xb882,	// (0x0002a730) form2_midp_slider_pane_ParamLimits

0x8acf,	// (0x0002797d) aid_size_cell_func_vkb2_ParamLimits

0x8acf,	// (0x0002797d) aid_size_cell_func_vkb2

0xdf45,	// (0x0002cdf3) slider_pane_g4_ParamLimits

0xdf45,	// (0x0002cdf3) slider_pane_g4

0x91c6,	// (0x00028074) form2_midp_gauge_slider_pane_t2_cp01

0x91d4,	// (0x00028082) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x91d4,	// (0x00028082) form2_midp_gauge_slider_pane_t3_cp01

0x91f1,	// (0x0002809f) form2_midp_slider_pane_cp01

0x0f61,	// (0x0001fe0f) navi_smil_pane

0xdfe1,	// (0x0002ce8f) navi_smil_pane_g1

0xdfe9,	// (0x0002ce97) navi_smil_pane_t1

0xdfb6,	// (0x0002ce64) form2_midp_slider_pane_g1

0xdfbf,	// (0x0002ce6d) form2_midp_slider_pane_g2

0xdfc7,	// (0x0002ce75) form2_midp_slider_pane_g3

0xdfb6,	// (0x0002ce64) form2_midp_slider_pane_g4

0xdfcf,	// (0x0002ce7d) form2_midp_slider_pane_g5

0x0004,

0xfe20,	// (0x0002ecce) form2_midp_slider_pane_g

0x91b6,	// (0x00028064) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x91b6,	// (0x00028064) vkb2_area_bottom_space_btn_pane_g4

0x7f70,	// (0x00026e1e) lc0_navi_pane_ParamLimits

0x7f70,	// (0x00026e1e) lc0_navi_pane

0x7fec,	// (0x00026e9a) lc0_stat_indi_pane_ParamLimits

0x7fec,	// (0x00026e9a) lc0_stat_indi_pane

0x8003,	// (0x00026eb1) ls0_title_pane_ParamLimits

0x8003,	// (0x00026eb1) ls0_title_pane

0x2df2,	// (0x00021ca0) bg_popup_sub_pane_cp14_ParamLimits

0xd400,	// (0x0002c2ae) list_uniindi_pane_ParamLimits

0xd40c,	// (0x0002c2ba) uniindi_top_pane_ParamLimits

0xd4ab,	// (0x0002c359) list_single_uniindi_pane_g1_ParamLimits

0xd4be,	// (0x0002c36c) list_single_uniindi_pane_t1_ParamLimits

0x91fa,	// (0x000280a8) lc0_stat_clock_pane_ParamLimits

0x91fa,	// (0x000280a8) lc0_stat_clock_pane

0xdff7,	// (0x0002cea5) lc0_stat_indi_pane_g1_ParamLimits

0xdff7,	// (0x0002cea5) lc0_stat_indi_pane_g1

0xe004,	// (0x0002ceb2) lc0_stat_indi_pane_g2_ParamLimits

0xe004,	// (0x0002ceb2) lc0_stat_indi_pane_g2

0x0001,

0xfe2b,	// (0x0002ecd9) lc0_stat_indi_pane_g_ParamLimits

0xfe2b,	// (0x0002ecd9) lc0_stat_indi_pane_g

0x9207,	// (0x000280b5) lc0_uni_indicator_pane_ParamLimits

0x9207,	// (0x000280b5) lc0_uni_indicator_pane

0xe011,	// (0x0002cebf) ls0_title_pane_g1_ParamLimits

0xe011,	// (0x0002cebf) ls0_title_pane_g1

0xe025,	// (0x0002ced3) ls0_title_pane_t1_ParamLimits

0xe025,	// (0x0002ced3) ls0_title_pane_t1

0x9214,	// (0x000280c2) lc0_uni_indicator_pane_g1_ParamLimits

0x9214,	// (0x000280c2) lc0_uni_indicator_pane_g1

0xe05b,	// (0x0002cf09) lc0_stat_clock_pane_t1

0x0f61,	// (0x0001fe0f) main_ai5_pane

0xe069,	// (0x0002cf17) ai5_sk_pane_ParamLimits

0xe069,	// (0x0002cf17) ai5_sk_pane

0xe076,	// (0x0002cf24) cell_ai5_widget_pane_ParamLimits

0xe076,	// (0x0002cf24) cell_ai5_widget_pane

0xe612,	// (0x0002d4c0) aid_size_cell_widget_grid

0xe628,	// (0x0002d4d6) bg_ai5_widget_pane_ParamLimits

0xe628,	// (0x0002d4d6) bg_ai5_widget_pane

0xe692,	// (0x0002d540) cell_ai5_widget_pane_g2

0xe6a2,	// (0x0002d550) cell_ai5_widget_pane_g3

0xe6c1,	// (0x0002d56f) cell_ai5_widget_pane_g4

0xe6cd,	// (0x0002d57b) cell_ai5_widget_pane_g5

0xe6d9,	// (0x0002d587) cell_ai5_widget_pane_g6

0xe6e5,	// (0x0002d593) cell_ai5_widget_pane_g7

0xe72d,	// (0x0002d5db) cell_ai5_widget_pane_t1_ParamLimits

0xe72d,	// (0x0002d5db) cell_ai5_widget_pane_t1

0xe74a,	// (0x0002d5f8) cell_ai5_widget_pane_t2_ParamLimits

0xe74a,	// (0x0002d5f8) cell_ai5_widget_pane_t2

0xe762,	// (0x0002d610) cell_ai5_widget_pane_t3_ParamLimits

0xe762,	// (0x0002d610) cell_ai5_widget_pane_t3

0xe77a,	// (0x0002d628) cell_ai5_widget_pane_t4_ParamLimits

0xe77a,	// (0x0002d628) cell_ai5_widget_pane_t4

0xe794,	// (0x0002d642) cell_ai5_widget_pane_t5_ParamLimits

0xe794,	// (0x0002d642) cell_ai5_widget_pane_t5

0xe7b3,	// (0x0002d661) cell_ai5_widget_pane_t6_ParamLimits

0xe7b3,	// (0x0002d661) cell_ai5_widget_pane_t6

0xe7c5,	// (0x0002d673) cell_ai5_widget_pane_t7_ParamLimits

0xe7c5,	// (0x0002d673) cell_ai5_widget_pane_t7

0xe7de,	// (0x0002d68c) cell_ai5_widget_pane_t8_ParamLimits

0xe7de,	// (0x0002d68c) cell_ai5_widget_pane_t8

0x0009,

0xfe45,	// (0x0002ecf3) cell_ai5_widget_pane_t_ParamLimits

0xfe45,	// (0x0002ecf3) cell_ai5_widget_pane_t

0xe82a,	// (0x0002d6d8) grid_ai5_widget_pane

0x2df2,	// (0x00021ca0) highlight_cell_ai5_widget_pane_ParamLimits

0x2df2,	// (0x00021ca0) highlight_cell_ai5_widget_pane

0xe842,	// (0x0002d6f0) ai5_sk_left_pane

0xe84c,	// (0x0002d6fa) ai5_sk_middle_pane

0xe856,	// (0x0002d704) ai5_sk_right_pane

0xe860,	// (0x0002d70e) bg_ai5_widget_pane_g1_ParamLimits

0xe860,	// (0x0002d70e) bg_ai5_widget_pane_g1

0xe86c,	// (0x0002d71a) bg_ai5_widget_pane_g2_ParamLimits

0xe86c,	// (0x0002d71a) bg_ai5_widget_pane_g2

0xe878,	// (0x0002d726) bg_ai5_widget_pane_g3_ParamLimits

0xe878,	// (0x0002d726) bg_ai5_widget_pane_g3

0xe884,	// (0x0002d732) bg_ai5_widget_pane_g4_ParamLimits

0xe884,	// (0x0002d732) bg_ai5_widget_pane_g4

0xe890,	// (0x0002d73e) bg_ai5_widget_pane_g5_ParamLimits

0xe890,	// (0x0002d73e) bg_ai5_widget_pane_g5

0xe89c,	// (0x0002d74a) bg_ai5_widget_pane_g6_ParamLimits

0xe89c,	// (0x0002d74a) bg_ai5_widget_pane_g6

0xe8a8,	// (0x0002d756) bg_ai5_widget_pane_g7_ParamLimits

0xe8a8,	// (0x0002d756) bg_ai5_widget_pane_g7

0xe8b4,	// (0x0002d762) bg_ai5_widget_pane_g8_ParamLimits

0xe8b4,	// (0x0002d762) bg_ai5_widget_pane_g8

0xe8c0,	// (0x0002d76e) bg_ai5_widget_pane_g9_ParamLimits

0xe8c0,	// (0x0002d76e) bg_ai5_widget_pane_g9

0x0008,

0xfe5a,	// (0x0002ed08) bg_ai5_widget_pane_g_ParamLimits

0xfe5a,	// (0x0002ed08) bg_ai5_widget_pane_g

0xe8e8,	// (0x0002d796) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8e8,	// (0x0002d796) cell_shortcut_ai5_widget_pane

0x1027,	// (0x0001fed5) bg_cell_shortcut_ai5_widget_pane

0xe8fb,	// (0x0002d7a9) cell_grid_ai5_widget_pane_g1

0xe904,	// (0x0002d7b2) highlight_cell_shortcut_ai5_widget_pane

0x93a5,	// (0x00028253) ai5_sk_left_pane_g1

0xe90c,	// (0x0002d7ba) ai5_sk_left_pane_g2

0xe914,	// (0x0002d7c2) ai5_sk_left_pane_g3

0xe91c,	// (0x0002d7ca) ai5_sk_left_pane_g4

0x0003,

0xfe6d,	// (0x0002ed1b) ai5_sk_left_pane_g

0xe924,	// (0x0002d7d2) ai5_sk_left_pane_t1

0x939d,	// (0x0002824b) ai5_sk_right_pane_g1

0xe932,	// (0x0002d7e0) ai5_sk_right_pane_g2

0xe93a,	// (0x0002d7e8) ai5_sk_right_pane_g3

0xe942,	// (0x0002d7f0) ai5_sk_right_pane_g4

0x0003,

0xfe76,	// (0x0002ed24) ai5_sk_right_pane_g

0xe94a,	// (0x0002d7f8) ai5_sk_right_pane_t1

0x939d,	// (0x0002824b) ai5_sk_middle_pane_g1

0x93a5,	// (0x00028253) ai5_sk_middle_pane_g2

0x93bd,	// (0x0002826b) ai5_sk_middle_pane_g3

0xe93a,	// (0x0002d7e8) ai5_sk_middle_pane_g4

0xe914,	// (0x0002d7c2) ai5_sk_middle_pane_g5

0xe958,	// (0x0002d806) ai5_sk_middle_pane_g6

0xe960,	// (0x0002d80e) ai5_sk_middle_pane_g7

0x0006,

0xfe7f,	// (0x0002ed2d) ai5_sk_middle_pane_g

0x7df2,	// (0x00026ca0) aid_touch_area_size_lc0_ParamLimits

0x7df2,	// (0x00026ca0) aid_touch_area_size_lc0

0x88b5,	// (0x00027763) cell_hwr_candidate_pane_t1_ParamLimits

0x7e10,	// (0x00026cbe) aid_touch_navi_pane

0x8103,	// (0x00026fb1) status_dt_navi_pane_ParamLimits

0x8103,	// (0x00026fb1) status_dt_navi_pane

0x8110,	// (0x00026fbe) status_dt_sta_pane_ParamLimits

0x8110,	// (0x00026fbe) status_dt_sta_pane

0xe968,	// (0x0002d816) dt_sta_controll_pane

0xe975,	// (0x0002d823) dt_sta_indi_pane

0xe986,	// (0x0002d834) dt_sta_title_pane

0x111e,	// (0x0001ffcc) bg_dt_sta_indi_pane_ParamLimits

0x111e,	// (0x0001ffcc) bg_dt_sta_indi_pane

0xe999,	// (0x0002d847) dt_sta_battery_pane

0xe9a1,	// (0x0002d84f) dt_sta_indi_pane_g1

0xe9aa,	// (0x0002d858) dt_sta_indi_pane_g2

0xe9b3,	// (0x0002d861) dt_sta_indi_pane_g3

0x0002,

0xfe8e,	// (0x0002ed3c) dt_sta_indi_pane_g

0xe9bc,	// (0x0002d86a) dt_sta_signal_pane

0x2df2,	// (0x00021ca0) bg_dt_sta_title_pane_ParamLimits

0x2df2,	// (0x00021ca0) bg_dt_sta_title_pane

0xe9c5,	// (0x0002d873) dt_sta_title_pane_g1

0xe9cd,	// (0x0002d87b) dt_sta_title_pane_t1_ParamLimits

0xe9cd,	// (0x0002d87b) dt_sta_title_pane_t1

0x0f61,	// (0x0001fe0f) bg_dt_sta_control_pane

0xe9e2,	// (0x0002d890) dt_sta_controll_pane_g1

0xe9eb,	// (0x0002d899) bg_dt_sta_title_pane_g1

0xe9f4,	// (0x0002d8a2) bg_dt_sta_title_pane_g2

0xe9fd,	// (0x0002d8ab) bg_dt_sta_title_pane_g3

0x0002,

0xfe95,	// (0x0002ed43) bg_dt_sta_title_pane_g

0xbaa5,	// (0x0002a953) bg_dt_sta_indi_pane_g1

0xea06,	// (0x0002d8b4) dt_sta_signal_pane_g1

0xea0e,	// (0x0002d8bc) dt_sta_signal_pane_g2

0x0001,

0xfe9c,	// (0x0002ed4a) dt_sta_signal_pane_g

0xea16,	// (0x0002d8c4) dt_sta_battery_pane_g1

0xea1f,	// (0x0002d8cd) dt_sta_battery_pane_t1

0xbaa5,	// (0x0002a953) bg_dt_sta_control_pane_g1

0x6be4,	// (0x00025a92) fep_china_uni_eep_pane

0x6bec,	// (0x00025a9a) fep_china_uni_entry_pane_ParamLimits

0x6bfc,	// (0x00025aaa) popup_fep_china_uni_window_g1_ParamLimits

0x6c0c,	// (0x00025aba) popup_fep_china_uni_window_g2_ParamLimits

0x6c0c,	// (0x00025aba) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0002e5d1) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0002e5d1) popup_fep_china_uni_window_g

0xea2e,	// (0x0002d8dc) fep_china_uni_eep_pane_g1

0xea36,	// (0x0002d8e4) fep_china_uni_eep_pane_t1

0xdfd8,	// (0x0002ce86) aid_touch_area_size_smil_player

0x7f68,	// (0x00026e16) lc0_clock_pane

0x8167,	// (0x00027015) status_pane_g5_ParamLimits

0x8167,	// (0x00027015) status_pane_g5

0x7956,	// (0x00026804) popup_keymap_window

0x8125,	// (0x00026fd3) status_icon_pane

0xe6a2,	// (0x0002d550) cell_ai5_widget_pane_g3_ParamLimits

0xe6c1,	// (0x0002d56f) cell_ai5_widget_pane_g4_ParamLimits

0xe6cd,	// (0x0002d57b) cell_ai5_widget_pane_g5_ParamLimits

0xe6f1,	// (0x0002d59f) cell_ai5_widget_pane_g8_ParamLimits

0xe6f1,	// (0x0002d59f) cell_ai5_widget_pane_g8

0xe705,	// (0x0002d5b3) cell_ai5_widget_pane_g9_ParamLimits

0xe705,	// (0x0002d5b3) cell_ai5_widget_pane_g9

0xe719,	// (0x0002d5c7) cell_ai5_widget_pane_g10_ParamLimits

0xe719,	// (0x0002d5c7) cell_ai5_widget_pane_g10

0xea45,	// (0x0002d8f3) status_icon_pane_g1

0x0f61,	// (0x0001fe0f) bg_popup_sub_pane_cp13

0xea4d,	// (0x0002d8fb) popup_keymap_window_t1

0x7613,	// (0x000264c1) control_pane_g6_ParamLimits

0x7613,	// (0x000264c1) control_pane_g6

0x7620,	// (0x000264ce) control_pane_g7_ParamLimits

0x7620,	// (0x000264ce) control_pane_g7

0x762d,	// (0x000264db) control_pane_g8_ParamLimits

0x762d,	// (0x000264db) control_pane_g8

0xe968,	// (0x0002d816) dt_sta_controll_pane_ParamLimits

0xe975,	// (0x0002d823) dt_sta_indi_pane_ParamLimits

0xe986,	// (0x0002d834) dt_sta_title_pane_ParamLimits

0x2cae,	// (0x00021b5c) aid_size_touch_scroll_bar_cale

0x6194,	// (0x00025042) popup_discreet_window_ParamLimits

0x6194,	// (0x00025042) popup_discreet_window

0x6222,	// (0x000250d0) popup_sk_window

0x9a6d,	// (0x0002891b) bg_popup_sub_pane_cp28_ParamLimits

0x9a6d,	// (0x0002891b) bg_popup_sub_pane_cp28

0xea5b,	// (0x0002d909) popup_discreet_window_g1_ParamLimits

0xea5b,	// (0x0002d909) popup_discreet_window_g1

0xea7b,	// (0x0002d929) popup_discreet_window_t1_ParamLimits

0xea7b,	// (0x0002d929) popup_discreet_window_t1

0xea99,	// (0x0002d947) popup_discreet_window_t2_ParamLimits

0xea99,	// (0x0002d947) popup_discreet_window_t2

0x0002,

0xfea1,	// (0x0002ed4f) popup_discreet_window_t_ParamLimits

0xfea1,	// (0x0002ed4f) popup_discreet_window_t

0x9227,	// (0x000280d5) popup_sk_window_g1

0x9231,	// (0x000280df) popup_sk_window_g2

0x0001,

0xfea8,	// (0x0002ed56) popup_sk_window_g

0x923b,	// (0x000280e9) popup_sk_window_t1

0x924b,	// (0x000280f9) popup_sk_window_t1_copy1

0xe692,	// (0x0002d540) cell_ai5_widget_pane_g2_ParamLimits

0xe7f0,	// (0x0002d69e) cell_ai5_widget_pane_t9_ParamLimits

0xe7f0,	// (0x0002d69e) cell_ai5_widget_pane_t9

0x0f61,	// (0x0001fe0f) main_fep_fshwr2_pane

0x9259,	// (0x00028107) aid_fshwr2_btn_pane

0x9265,	// (0x00028113) aid_fshwr2_syb_pane

0x9276,	// (0x00028124) aid_fshwr2_txt_pane

0x9282,	// (0x00028130) fshwr2_func_candi_pane

0x9293,	// (0x00028141) fshwr2_hwr_syb_pane

0x92a6,	// (0x00028154) fshwr2_icf_pane

0x0f61,	// (0x0001fe0f) fshwr2_icf_bg_pane

0xeaeb,	// (0x0002d999) fshwr2_icf_pane_t1_ParamLimits

0xeaeb,	// (0x0002d999) fshwr2_icf_pane_t1

0xbaa5,	// (0x0002a953) fshwr2_func_candi_pane_g1

0xeb02,	// (0x0002d9b0) fshwr2_func_candi_row_pane_ParamLimits

0xeb02,	// (0x0002d9b0) fshwr2_func_candi_row_pane

0xeb13,	// (0x0002d9c1) cell_fshwr2_syb_pane_ParamLimits

0xeb13,	// (0x0002d9c1) cell_fshwr2_syb_pane

0xbd20,	// (0x0002abce) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbd20,	// (0x0002abce) fshwr2_hwr_syb_pane_g1

0x0f61,	// (0x0001fe0f) bg_popup_call_pane_cp01

0xeb2d,	// (0x0002d9db) fshwr2_func_candi_cell_pane_ParamLimits

0xeb2d,	// (0x0002d9db) fshwr2_func_candi_cell_pane

0xeb5f,	// (0x0002da0d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb5f,	// (0x0002da0d) fshwr2_func_candi_cell_bg_pane

0xeb79,	// (0x0002da27) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xeb79,	// (0x0002da27) fshwr2_func_candi_cell_pane_g1

0xeb99,	// (0x0002da47) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xeb99,	// (0x0002da47) fshwr2_func_candi_cell_pane_t1

0x0f61,	// (0x0001fe0f) bg_button_pane_cp08

0x722a,	// (0x000260d8) cell_fshwr2_syb_bg_pane

0xebac,	// (0x0002da5a) cell_fshwr2_syb_bg_pane_g1

0xebb4,	// (0x0002da62) cell_fshwr2_syb_bg_pane_t1

0x2df2,	// (0x00021ca0) main_tmo_pane

0xa597,	// (0x00029445) uni_indicator_pane_g1_ParamLimits

0xa5ac,	// (0x0002945a) uni_indicator_pane_g2_ParamLimits

0xa5c2,	// (0x00029470) uni_indicator_pane_g3_ParamLimits

0xa5d8,	// (0x00029486) uni_indicator_pane_g4_ParamLimits

0xa5d8,	// (0x00029486) uni_indicator_pane_g4

0xa5ec,	// (0x0002949a) uni_indicator_pane_g5_ParamLimits

0xa5ec,	// (0x0002949a) uni_indicator_pane_g5

0xa600,	// (0x000294ae) uni_indicator_pane_g6_ParamLimits

0xa600,	// (0x000294ae) uni_indicator_pane_g6

0xf927,	// (0x0002e7d5) uni_indicator_pane_g_ParamLimits

0xcfd6,	// (0x0002be84) popup_tmo_note_window_ParamLimits

0xcfd6,	// (0x0002be84) popup_tmo_note_window

0x2df2,	// (0x00021ca0) fshwr2_bg_pane

0xeb8a,	// (0x0002da38) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeb8a,	// (0x0002da38) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfead,	// (0x0002ed5b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfead,	// (0x0002ed5b) fshwr2_func_candi_cell_pane_g

0xbaa5,	// (0x0002a953) bg_popup_window_pane_cp01

0xebc3,	// (0x0002da71) bg_popup_window_pane_g1_cp01

0xebcc,	// (0x0002da7a) bg_popup_window_pane_cp22_ParamLimits

0xebcc,	// (0x0002da7a) bg_popup_window_pane_cp22

0xebda,	// (0x0002da88) listscroll_tmo_link_pane_ParamLimits

0xebda,	// (0x0002da88) listscroll_tmo_link_pane

0xec1a,	// (0x0002dac8) popup_tmo_note_window_g1_ParamLimits

0xec1a,	// (0x0002dac8) popup_tmo_note_window_g1

0xec27,	// (0x0002dad5) tmo_note_info_pane_ParamLimits

0xec27,	// (0x0002dad5) tmo_note_info_pane

0xec41,	// (0x0002daef) list_tmo_note_info_pane_g1_ParamLimits

0xec41,	// (0x0002daef) list_tmo_note_info_pane_g1

0xec58,	// (0x0002db06) list_tmo_note_info_pane_g2_ParamLimits

0xec58,	// (0x0002db06) list_tmo_note_info_pane_g2

0x0001,

0xfeb2,	// (0x0002ed60) list_tmo_note_info_pane_g_ParamLimits

0xfeb2,	// (0x0002ed60) list_tmo_note_info_pane_g

0xec74,	// (0x0002db22) list_tmo_note_info_text_pane_ParamLimits

0xec74,	// (0x0002db22) list_tmo_note_info_text_pane

0xecf9,	// (0x0002dba7) list_tmo_link_pane

0xed06,	// (0x0002dbb4) scroll_pane_cp20

0xed13,	// (0x0002dbc1) list_single_tmo_link_pane_ParamLimits

0xed13,	// (0x0002dbc1) list_single_tmo_link_pane

0xed23,	// (0x0002dbd1) list_single_tmo_link_pane_t1

0xed31,	// (0x0002dbdf) list_tmo_note_info_text_pane_t1_ParamLimits

0xed31,	// (0x0002dbdf) list_tmo_note_info_text_pane_t1

0x66a1,	// (0x0002554f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x66a1,	// (0x0002554f) aid_size_touch_scroll_bar_cp01

0x5538,	// (0x000243e6) aid_size_touch_slider_marker

0x620a,	// (0x000250b8) popup_settings_window_ParamLimits

0x620a,	// (0x000250b8) popup_settings_window

0x56e3,	// (0x00024591) popup_candi_list_indi_window

0x7e10,	// (0x00026cbe) aid_touch_navi_pane_ParamLimits

0x8a26,	// (0x000278d4) rs_clock_indi_pane

0x8a2f,	// (0x000278dd) sctrl_sk_bottom_pane_ParamLimits

0x8a40,	// (0x000278ee) sctrl_sk_top_pane_ParamLimits

0x8b29,	// (0x000279d7) popup_fep_tooltip_window

0xe612,	// (0x0002d4c0) aid_size_cell_widget_grid_ParamLimits

0xe686,	// (0x0002d534) cell_ai5_widget_pane_g1_ParamLimits

0xe686,	// (0x0002d534) cell_ai5_widget_pane_g1

0xe6d9,	// (0x0002d587) cell_ai5_widget_pane_g6_ParamLimits

0xe6e5,	// (0x0002d593) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe30,	// (0x0002ecde) cell_ai5_widget_pane_g_ParamLimits

0xfe30,	// (0x0002ecde) cell_ai5_widget_pane_g

0xe814,	// (0x0002d6c2) cell_ai5_widget_pane_t10_ParamLimits

0xe814,	// (0x0002d6c2) cell_ai5_widget_pane_t10

0xe82a,	// (0x0002d6d8) grid_ai5_widget_pane_ParamLimits

0xe8cc,	// (0x0002d77a) cell_contacts_ai5_widget_pane_ParamLimits

0xe8cc,	// (0x0002d77a) cell_contacts_ai5_widget_pane

0xeaae,	// (0x0002d95c) popup_discreet_window_t3_ParamLimits

0xeaae,	// (0x0002d95c) popup_discreet_window_t3

0x92bb,	// (0x00028169) popup_fshwr2_char_preview_window_ParamLimits

0x92bb,	// (0x00028169) popup_fshwr2_char_preview_window

0xec92,	// (0x0002db40) tmo_note_info_pane_t1

0xeca7,	// (0x0002db55) tmo_note_info_pane_t2

0xecc0,	// (0x0002db6e) tmo_note_info_pane_t3

0xecd5,	// (0x0002db83) tmo_note_info_pane_t4

0xece7,	// (0x0002db95) tmo_note_info_pane_t5

0x0004,

0xfeb7,	// (0x0002ed65) tmo_note_info_pane_t

0xecf9,	// (0x0002dba7) list_tmo_link_pane_ParamLimits

0xed06,	// (0x0002dbb4) scroll_pane_cp20_ParamLimits

0x0f61,	// (0x0001fe0f) bg_popup_fep_char_preview_window_cp01

0xed4a,	// (0x0002dbf8) popup_fshwr2_char_preview_window_t1

0xed58,	// (0x0002dc06) popup_candi_list_indi_window_g1

0xed61,	// (0x0002dc0f) bg_cell_contacts_ai5_widget_pane

0xed6d,	// (0x0002dc1b) cell_contacts_ai5_widget_pane_g1

0xed7d,	// (0x0002dc2b) cell_contacts_ai5_widget_pane_g2

0xed89,	// (0x0002dc37) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec2,	// (0x0002ed70) cell_contacts_ai5_widget_pane_g

0xed95,	// (0x0002dc43) cell_contacts_ai5_widget_pane_t1

0x2df2,	// (0x00021ca0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0f,	// (0x0002dcbd) settings_container_pane

0x722a,	// (0x000260d8) listscroll_set_pane_copy1

0xb17c,	// (0x0002a02a) scroll_pane_cp121_copy1

0xee1b,	// (0x0002dcc9) set_content_pane_copy1

0xee23,	// (0x0002dcd1) aid_height_set_list_copy1_ParamLimits

0xee23,	// (0x0002dcd1) aid_height_set_list_copy1

0xa800,	// (0x000296ae) aid_size_parent_copy1_ParamLimits

0xa800,	// (0x000296ae) aid_size_parent_copy1

0xee2f,	// (0x0002dcdd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2f,	// (0x0002dcdd) button_value_adjust_pane_cp6_copy1

0x7797,	// (0x00026645) list_highlight_pane_cp2_copy1_ParamLimits

0x7797,	// (0x00026645) list_highlight_pane_cp2_copy1

0xee43,	// (0x0002dcf1) list_set_pane_copy1_ParamLimits

0xee43,	// (0x0002dcf1) list_set_pane_copy1

0xedaa,	// (0x0002dc58) main_pane_set_t1_copy1_ParamLimits

0xedaa,	// (0x0002dc58) main_pane_set_t1_copy1

0xede4,	// (0x0002dc92) main_pane_set_t2_copy1_ParamLimits

0xede4,	// (0x0002dc92) main_pane_set_t2_copy1

0xef0a,	// (0x0002ddb8) main_pane_set_t3_copy1

0xef18,	// (0x0002ddc6) main_pane_set_t4_copy1

0xee03,	// (0x0002dcb1) set_content_pane_g1_copy1_ParamLimits

0xee03,	// (0x0002dcb1) set_content_pane_g1_copy1

0xef26,	// (0x0002ddd4) setting_code_pane_copy1

0xef2e,	// (0x0002dddc) setting_slider_graphic_pane_copy1

0xef2e,	// (0x0002dddc) setting_slider_pane_copy1

0xef2e,	// (0x0002dddc) setting_text_pane_copy1

0xef2e,	// (0x0002dddc) setting_volume_pane_copy1

0xef26,	// (0x0002ddd4) settings_code_pane_cp2_copy1

0xef36,	// (0x0002dde4) settings_code_pane_cp_copy1_ParamLimits

0xef36,	// (0x0002dde4) settings_code_pane_cp_copy1

0xef4a,	// (0x0002ddf8) volume_set_pane_copy1

0xef56,	// (0x0002de04) volume_set_pane_g10_copy1

0xef62,	// (0x0002de10) volume_set_pane_g1_copy1

0xef6c,	// (0x0002de1a) volume_set_pane_g2_copy1

0xef76,	// (0x0002de24) volume_set_pane_g3_copy1

0xef80,	// (0x0002de2e) volume_set_pane_g4_copy1

0xef8a,	// (0x0002de38) volume_set_pane_g5_copy1

0xef94,	// (0x0002de42) volume_set_pane_g6_copy1

0xef9e,	// (0x0002de4c) volume_set_pane_g7_copy1

0xefa8,	// (0x0002de56) volume_set_pane_g8_copy1

0xefb2,	// (0x0002de60) volume_set_pane_g9_copy1

0x0fd1,	// (0x0001fe7f) bg_set_opt_pane_cp_copy1_ParamLimits

0x0fd1,	// (0x0001fe7f) bg_set_opt_pane_cp_copy1

0xefbc,	// (0x0002de6a) setting_slider_pane_t1_copy1_ParamLimits

0xefbc,	// (0x0002de6a) setting_slider_pane_t1_copy1

0xefda,	// (0x0002de88) setting_slider_pane_t2_copy1_ParamLimits

0xefda,	// (0x0002de88) setting_slider_pane_t2_copy1

0xeff4,	// (0x0002dea2) setting_slider_pane_t3_copy1_ParamLimits

0xeff4,	// (0x0002dea2) setting_slider_pane_t3_copy1

0xf00c,	// (0x0002deba) slider_set_pane_copy1_ParamLimits

0xf00c,	// (0x0002deba) slider_set_pane_copy1

0x2eb6,	// (0x00021d64) set_opt_bg_pane_g1_copy2

0x2ebe,	// (0x00021d6c) set_opt_bg_pane_g2_copy2

0xf022,	// (0x0002ded0) set_opt_bg_pane_g3_copy2

0x2ece,	// (0x00021d7c) set_opt_bg_pane_g4_copy2

0x2ed6,	// (0x00021d84) set_opt_bg_pane_g5_copy2

0x2ede,	// (0x00021d8c) set_opt_bg_pane_g6_copy2

0xf02c,	// (0x0002deda) set_opt_bg_pane_g7_copy2

0xf036,	// (0x0002dee4) set_opt_bg_pane_g8_copy2

0xf040,	// (0x0002deee) set_opt_bg_pane_g9_copy2

0xf04a,	// (0x0002def8) aid_size_touch_slider_mark_copy1_ParamLimits

0xf04a,	// (0x0002def8) aid_size_touch_slider_mark_copy1

0xf05e,	// (0x0002df0c) slider_set_pane_g1_copy1

0xf067,	// (0x0002df15) slider_set_pane_g2_copy1

0xc150,	// (0x0002affe) slider_set_pane_g3_copy1_ParamLimits

0xc150,	// (0x0002affe) slider_set_pane_g3_copy1

0xc164,	// (0x0002b012) slider_set_pane_g4_copy1_ParamLimits

0xc164,	// (0x0002b012) slider_set_pane_g4_copy1

0xc17c,	// (0x0002b02a) slider_set_pane_g5_copy1_ParamLimits

0xc17c,	// (0x0002b02a) slider_set_pane_g5_copy1

0xc150,	// (0x0002affe) slider_set_pane_g6_copy1_ParamLimits

0xc150,	// (0x0002affe) slider_set_pane_g6_copy1

0xf06f,	// (0x0002df1d) slider_set_pane_g7_copy1_ParamLimits

0xf06f,	// (0x0002df1d) slider_set_pane_g7_copy1

0x0f75,	// (0x0001fe23) bg_set_opt_pane_cp2_copy1

0xf085,	// (0x0002df33) setting_slider_graphic_pane_g1_copy1

0xf08e,	// (0x0002df3c) setting_slider_graphic_pane_t1_copy1

0xf09e,	// (0x0002df4c) setting_slider_graphic_pane_t2_copy1

0xf0ae,	// (0x0002df5c) slider_set_pane_cp_copy1

0xf0be,	// (0x0002df6c) input_focus_pane_cp1_copy1

0xf0c7,	// (0x0002df75) list_set_text_pane_copy1

0xf0cf,	// (0x0002df7d) setting_text_pane_g1_copy1

0x5eeb,	// (0x00024d99) set_text_pane_t1_copy1

0xf0be,	// (0x0002df6c) input_focus_pane_cp2_copy1

0xf0cf,	// (0x0002df7d) setting_code_pane_g1_copy1

0xf0d8,	// (0x0002df86) setting_code_pane_t1_copy1

0xf0e6,	// (0x0002df94) list_set_graphic_pane_copy1

0x0f75,	// (0x0001fe23) bg_set_opt_pane_cp4_copy1

0x6f24,	// (0x00025dd2) list_set_graphic_pane_g1_copy1_ParamLimits

0x6f24,	// (0x00025dd2) list_set_graphic_pane_g1_copy1

0xf0f8,	// (0x0002dfa6) list_set_graphic_pane_g2_copy1

0x6f3c,	// (0x00025dea) list_set_graphic_pane_t1_copy1_ParamLimits

0x6f3c,	// (0x00025dea) list_set_graphic_pane_t1_copy1

0xbaa5,	// (0x0002a953) rs_clock_indi_pane_g1

0xf100,	// (0x0002dfae) rs_clock_indi_pane_t1

0xf10e,	// (0x0002dfbc) rs_indi_pane

0xf116,	// (0x0002dfc4) rs_indi_pane_g1

0xf11f,	// (0x0002dfcd) rs_indi_pane_g2

0xf128,	// (0x0002dfd6) rs_indi_pane_g3

0x0002,

0xfec9,	// (0x0002ed77) rs_indi_pane_g

0x722a,	// (0x000260d8) bg_popup_preview_window_pane_cp03

0xf131,	// (0x0002dfdf) popup_fep_tooltip_window_t1

0xc77e,	// (0x0002b62c) popup_note2_window_g2_ParamLimits

0xc77e,	// (0x0002b62c) popup_note2_window_g2

0x0001,

0xfc62,	// (0x0002eb10) popup_note2_window_g_ParamLimits

0xfc62,	// (0x0002eb10) popup_note2_window_g

0xcc86,	// (0x0002bb34) bg_popup_sub_pane_cp11_ParamLimits

0xcc93,	// (0x0002bb41) cell_ai3_links_pane_g1_ParamLimits

0xccaa,	// (0x0002bb58) cell_ai3_links_pane_t1

0x5eeb,	// (0x00024d99) set_text_pane_t1_copy1_ParamLimits

0x7137,	// (0x00025fe5) cell_graphic_popup_pane_cp2_ParamLimits

0x7137,	// (0x00025fe5) cell_graphic_popup_pane_cp2

0xf13f,	// (0x0002dfed) cell_graphic_popup_pane_g1_cp2

0x1355,	// (0x00020203) cell_graphic_popup_pane_g2_cp2

0xf147,	// (0x0002dff5) cell_graphic_popup_pane_g3_cp2

0xf14f,	// (0x0002dffd) cell_graphic_popup_pane_t2_cp2

0x1366,	// (0x00020214) grid_highlight_pane_cp3_cp2

0x32a3,	// (0x00022151) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2df2,	// (0x00021ca0) main_tmo_pane_ParamLimits

0xcfca,	// (0x0002be78) popup_tmo_big_image_note_window

0xe676,	// (0x0002d524) cell_ai5_widget_list_pane

0xe67e,	// (0x0002d52c) cell_ai5_widget_lrg_icon_pane

0xec92,	// (0x0002db40) tmo_note_info_pane_t1_ParamLimits

0xeca7,	// (0x0002db55) tmo_note_info_pane_t2_ParamLimits

0xecc0,	// (0x0002db6e) tmo_note_info_pane_t3_ParamLimits

0xecd5,	// (0x0002db83) tmo_note_info_pane_t4_ParamLimits

0xece7,	// (0x0002db95) tmo_note_info_pane_t5_ParamLimits

0xfeb7,	// (0x0002ed65) tmo_note_info_pane_t_ParamLimits

0xee0f,	// (0x0002dcbd) settings_container_pane_ParamLimits

0xf0b6,	// (0x0002df64) indicator_popup_pane_cp5

0xf0b6,	// (0x0002df64) indicator_popup_pane_cp6

0xf0e6,	// (0x0002df94) list_set_graphic_pane_copy1_ParamLimits

0x0f61,	// (0x0001fe0f) bg_popup_window_pane_cp23

0xf15d,	// (0x0002e00b) popup_tmo_big_image_note_window_g1

0xf169,	// (0x0002e017) popup_tmo_big_image_note_window_t1

0xf179,	// (0x0002e027) popup_tmo_big_image_note_window_t2

0xf189,	// (0x0002e037) popup_tmo_big_image_note_window_t3

0x0002,

0xfed0,	// (0x0002ed7e) popup_tmo_big_image_note_window_t

0xf199,	// (0x0002e047) cell_ai5_widget_lrg_icon_pane_g1

0xf1a1,	// (0x0002e04f) cell_ai5_widget_lrg_icon_pane_t1

0xf1af,	// (0x0002e05d) cell_ai5_widget_list_row_pane_ParamLimits

0xf1af,	// (0x0002e05d) cell_ai5_widget_list_row_pane

0xf1c8,	// (0x0002e076) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1c8,	// (0x0002e076) cell_ai5_widget_list_row_pane_g1

0xf1d5,	// (0x0002e083) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1d5,	// (0x0002e083) cell_ai5_widget_list_row_pane_t1

0xf1ed,	// (0x0002e09b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1ed,	// (0x0002e09b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed7,	// (0x0002ed85) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed7,	// (0x0002ed85) cell_ai5_widget_list_row_pane_t

0x0f61,	// (0x0001fe0f) main_fep_vtchi_ss_pane

0xf224,	// (0x0002e0d2) popup_fep_char_pre_window

0xf22c,	// (0x0002e0da) popup_fep_ituss_window

0xf24d,	// (0x0002e0fb) popup_fep_vkbss_window

0xf26e,	// (0x0002e11c) grid_vkbss_keypad_pane_ParamLimits

0xf26e,	// (0x0002e11c) grid_vkbss_keypad_pane

0xf27e,	// (0x0002e12c) ituss_keypad_pane

0xf29a,	// (0x0002e148) aid_vkbss_key_offset_ParamLimits

0xf29a,	// (0x0002e148) aid_vkbss_key_offset

0xf2a6,	// (0x0002e154) cell_vkbss_key_pane_ParamLimits

0xf2a6,	// (0x0002e154) cell_vkbss_key_pane

0xf2bc,	// (0x0002e16a) bg_cell_vkbss_key_g1_ParamLimits

0xf2bc,	// (0x0002e16a) bg_cell_vkbss_key_g1

0xf2c8,	// (0x0002e176) cell_vkbss_key_3p_pane_ParamLimits

0xf2c8,	// (0x0002e176) cell_vkbss_key_3p_pane

0xf2e2,	// (0x0002e190) cell_vkbss_key_g1_ParamLimits

0xf2e2,	// (0x0002e190) cell_vkbss_key_g1

0xf2fc,	// (0x0002e1aa) cell_vkbss_key_t1_ParamLimits

0xf2fc,	// (0x0002e1aa) cell_vkbss_key_t1

0xf327,	// (0x0002e1d5) cell_ituss_key_pane_ParamLimits

0xf327,	// (0x0002e1d5) cell_ituss_key_pane

0xf338,	// (0x0002e1e6) bg_cell_ituss_key_g1_ParamLimits

0xf338,	// (0x0002e1e6) bg_cell_ituss_key_g1

0xf344,	// (0x0002e1f2) cell_ituss_key_pane_g1_ParamLimits

0xf344,	// (0x0002e1f2) cell_ituss_key_pane_g1

0xf358,	// (0x0002e206) cell_ituss_key_pane_g2_ParamLimits

0xf358,	// (0x0002e206) cell_ituss_key_pane_g2

0x0001,

0xfede,	// (0x0002ed8c) cell_ituss_key_pane_g_ParamLimits

0xfede,	// (0x0002ed8c) cell_ituss_key_pane_g

0xf383,	// (0x0002e231) cell_ituss_key_t1_ParamLimits

0xf383,	// (0x0002e231) cell_ituss_key_t1

0xf3b1,	// (0x0002e25f) cell_ituss_key_t2_ParamLimits

0xf3b1,	// (0x0002e25f) cell_ituss_key_t2

0xf3e2,	// (0x0002e290) cell_ituss_key_t3_ParamLimits

0xf3e2,	// (0x0002e290) cell_ituss_key_t3

0xf413,	// (0x0002e2c1) cell_ituss_key_t4_ParamLimits

0xf413,	// (0x0002e2c1) cell_ituss_key_t4

0x0003,

0xfee3,	// (0x0002ed91) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0002ed91) cell_ituss_key_t

0xf444,	// (0x0002e2f2) cell_vkbss_key_3p_pane_g1

0xf44c,	// (0x0002e2fa) cell_vkbss_key_3p_pane_g2

0xf454,	// (0x0002e302) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0002ed9a) cell_vkbss_key_3p_pane_g

0x0f61,	// (0x0001fe0f) bg_popup_fep_char_preview_window_cp02

0xf45c,	// (0x0002e30a) popup_fep_char_pre_window_t1

0xe608,	// (0x0002d4b6) main_ai5_sk_pane

0xed61,	// (0x0002dc0f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed6d,	// (0x0002dc1b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed7d,	// (0x0002dc2b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed89,	// (0x0002dc37) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec2,	// (0x0002ed70) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed95,	// (0x0002dc43) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2df2,	// (0x00021ca0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf46b,	// (0x0002e319) main_ai5_sk_pane_g1

0x98a5,	// (0x00028753) popup_query_code_window_g1

0xf242,	// (0x0002e0f0) popup_fep_vkb_icf_pane

0xf258,	// (0x0002e106) popup_fep_vtchi_icf_pane

0x2df2,	// (0x00021ca0) bg_icf_pane

0xf474,	// (0x0002e322) list_vkb_icf_pane

0x2df2,	// (0x00021ca0) bg_icf_pane_cp01

0xf480,	// (0x0002e32e) vtchi_icf_list_pane

0xf491,	// (0x0002e33f) list_vkb_icf_pane_t1_ParamLimits

0xf491,	// (0x0002e33f) list_vkb_icf_pane_t1

0xf4a8,	// (0x0002e356) vtchi_icf_list_pane_t1_ParamLimits

0xf4a8,	// (0x0002e356) vtchi_icf_list_pane_t1

0xf22c,	// (0x0002e0da) popup_fep_ituss_window_ParamLimits

0xf258,	// (0x0002e106) popup_fep_vtchi_icf_pane_ParamLimits

0xf27e,	// (0x0002e12c) ituss_keypad_pane_ParamLimits

0xf28e,	// (0x0002e13c) ituss_sks_pane

0x2df2,	// (0x00021ca0) bg_icf_pane_ParamLimits

0xf215,	// (0x0002e0c3) icf_edit_indi_pane_ParamLimits

0xf215,	// (0x0002e0c3) icf_edit_indi_pane

0xf474,	// (0x0002e322) list_vkb_icf_pane_ParamLimits

0x2df2,	// (0x00021ca0) bg_icf_pane_cp01_ParamLimits

0xf215,	// (0x0002e0c3) icf_edit_indi_pane_cp01_ParamLimits

0xf215,	// (0x0002e0c3) icf_edit_indi_pane_cp01

0xf488,	// (0x0002e336) vtchi_query_pane

0xbd20,	// (0x0002abce) icf_edit_indi_pane_g1_ParamLimits

0xbd20,	// (0x0002abce) icf_edit_indi_pane_g1

0xf52b,	// (0x0002e3d9) icf_edit_indi_pane_g2_ParamLimits

0xf52b,	// (0x0002e3d9) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0002edb2) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0002edb2) icf_edit_indi_pane_g

0xf53a,	// (0x0002e3e8) icf_edit_indi_pane_t1

0xf4c1,	// (0x0002e36f) bg_input_focus_pane_cp042

0x2ca5,	// (0x00021b53) vtchi_button_pane

0xf4ca,	// (0x0002e378) vtchi_query_pane_t1

0xf4d8,	// (0x0002e386) vtchi_query_pane_t2

0xf4e6,	// (0x0002e394) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0002eda1) vtchi_query_pane_t

0x0f61,	// (0x0001fe0f) bg_button_pane_cp13

0xf4f4,	// (0x0002e3a2) vtchi_button_pane_g1

0xf4fc,	// (0x0002e3aa) ituss_sks_pane_g1

0xf507,	// (0x0002e3b5) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0002eda8) ituss_sks_pane_g

0xf50f,	// (0x0002e3bd) ituss_sks_pane_t1

0xf51d,	// (0x0002e3cb) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002edad) ituss_sks_pane_t

0xb54f,	// (0x0002a3fd) indicator_nsta_pane_cp_g1

0xb558,	// (0x0002a406) indicator_nsta_pane_cp_g2

0xb560,	// (0x0002a40e) indicator_nsta_pane_cp_g3

0xb568,	// (0x0002a416) indicator_nsta_pane_cp_g4

0xb570,	// (0x0002a41e) indicator_nsta_pane_cp_g5

0xb578,	// (0x0002a426) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0002e95a) indicator_nsta_pane_cp_g

0xdcd2,	// (0x0002cb80) cell_graphic2_pane_t2_ParamLimits

0xdcd2,	// (0x0002cb80) cell_graphic2_pane_t2

0x0001,

0xfdb9,	// (0x0002ec67) cell_graphic2_pane_t_ParamLimits

0xfdb9,	// (0x0002ec67) cell_graphic2_pane_t

0xdcff,	// (0x0002cbad) cell_graphic2_control_pane_t1

0x6b34,	// (0x000259e2) signal_pane_g3_ParamLimits

0x6b34,	// (0x000259e2) signal_pane_g3

0x6b46,	// (0x000259f4) signal_pane_g4_ParamLimits

0x6b46,	// (0x000259f4) signal_pane_g4

0xf1ff,	// (0x0002e0ad) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf1ff,	// (0x0002e0ad) cell_ai5_widget_list_row_pane_t3

0xf371,	// (0x0002e21f) cell_ituss_key_pane_t1_ParamLimits

0xf371,	// (0x0002e21f) cell_ituss_key_pane_t1

0x9522,	// (0x000283d0) form_field_data_wide_pane_vc_t2_ParamLimits

0x9522,	// (0x000283d0) form_field_data_wide_pane_vc_t2

0x9536,	// (0x000283e4) form_field_data_wide_pane_vc_t3_ParamLimits

0x9536,	// (0x000283e4) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0002e6bd) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0002e6bd) form_field_data_wide_pane_vc_t

0xb1f4,	// (0x0002a0a2) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb1f4,	// (0x0002a0a2) form_field_slider_wide_pane_vc_t3

0xb2d0,	// (0x0002a17e) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb2d0,	// (0x0002a17e) form_field_popup_wide_pane_vc_t2

0xb2e7,	// (0x0002a195) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb2e7,	// (0x0002a195) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0002e949) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0002e949) form_field_popup_wide_pane_vc_t

0x9259,	// (0x00028107) aid_fshwr2_btn_pane_ParamLimits

0x9265,	// (0x00028113) aid_fshwr2_syb_pane_ParamLimits

0x9276,	// (0x00028124) aid_fshwr2_txt_pane_ParamLimits

0x2df2,	// (0x00021ca0) fshwr2_bg_pane_ParamLimits

0x9282,	// (0x00028130) fshwr2_func_candi_pane_ParamLimits

0x9293,	// (0x00028141) fshwr2_hwr_syb_pane_ParamLimits

0x92a6,	// (0x00028154) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small

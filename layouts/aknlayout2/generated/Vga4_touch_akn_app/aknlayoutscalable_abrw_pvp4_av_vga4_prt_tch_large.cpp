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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000529a6 };

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
0x4d15,	// (0x000576bb) Screen

0x4d21,	// (0x000576c7) application_window_ParamLimits

0x4d21,	// (0x000576c7) application_window

0xed0b,	// (0x000616b1) screen_g1

0x4d7d,	// (0x00057723) area_bottom_pane_ParamLimits

0x4d7d,	// (0x00057723) area_bottom_pane

0x4e3d,	// (0x000577e3) area_top_pane_ParamLimits

0x4e3d,	// (0x000577e3) area_top_pane

0x4edb,	// (0x00057881) main_pane_ParamLimits

0x4edb,	// (0x00057881) main_pane

0xed15,	// (0x000616bb) misc_graphics

0x8b36,	// (0x0005b4dc) battery_pane_ParamLimits

0x8b36,	// (0x0005b4dc) battery_pane

0x9816,	// (0x0005c1bc) bg_status_flat_pane_g8

0x981e,	// (0x0005c1c4) bg_status_flat_pane_g9

0x8bfe,	// (0x0005b5a4) context_pane_ParamLimits

0x8bfe,	// (0x0005b5a4) context_pane

0x8d22,	// (0x0005b6c8) navi_pane_ParamLimits

0x8d22,	// (0x0005b6c8) navi_pane

0x8db2,	// (0x0005b758) signal_pane_ParamLimits

0x8db2,	// (0x0005b758) signal_pane

0x0008,

0xf859,	// (0x000621ff) bg_status_flat_pane_g

0x8e1f,	// (0x0005b7c5) status_pane_g1_ParamLimits

0x8e1f,	// (0x0005b7c5) status_pane_g1

0x8e2b,	// (0x0005b7d1) status_pane_g2_ParamLimits

0x8e2b,	// (0x0005b7d1) status_pane_g2

0x8e37,	// (0x0005b7dd) status_pane_g3_ParamLimits

0x8e37,	// (0x0005b7dd) status_pane_g3

0x0004,

0xf780,	// (0x00062126) status_pane_g_ParamLimits

0xf780,	// (0x00062126) status_pane_g

0x8e6b,	// (0x0005b811) title_pane_ParamLimits

0x8e6b,	// (0x0005b811) title_pane

0x8eaa,	// (0x0005b850) uni_indicator_pane_ParamLimits

0x8eaa,	// (0x0005b850) uni_indicator_pane

0x8a68,	// (0x0005b40e) bg_list_pane_ParamLimits

0x8a68,	// (0x0005b40e) bg_list_pane

0x642c,	// (0x00058dd2) find_pane

0x8a88,	// (0x0005b42e) listscroll_app_pane_ParamLimits

0x8a88,	// (0x0005b42e) listscroll_app_pane

0x8a94,	// (0x0005b43a) listscroll_form_pane

0x6434,	// (0x00058dda) listscroll_gen_pane_ParamLimits

0x6434,	// (0x00058dda) listscroll_gen_pane

0x6448,	// (0x00058dee) listscroll_set_pane

0x5bda,	// (0x00058580) main_idle_act_pane

0x8761,	// (0x0005b107) main_idle_trad_pane

0x8761,	// (0x0005b107) main_list_empty_pane

0x8a88,	// (0x0005b42e) main_midp_pane

0x8aae,	// (0x0005b454) main_pane_g1_ParamLimits

0x8aae,	// (0x0005b454) main_pane_g1

0x645e,	// (0x00058e04) popup_ai_message_window_ParamLimits

0x645e,	// (0x00058e04) popup_ai_message_window

0x6512,	// (0x00058eb8) popup_fep_china_uni_window_ParamLimits

0x6512,	// (0x00058eb8) popup_fep_china_uni_window

0x6572,	// (0x00058f18) popup_fep_japan_candidate_window_ParamLimits

0x6572,	// (0x00058f18) popup_fep_japan_candidate_window

0x659c,	// (0x00058f42) popup_fep_japan_predictive_window_ParamLimits

0x659c,	// (0x00058f42) popup_fep_japan_predictive_window

0x65d2,	// (0x00058f78) popup_find_window

0x65df,	// (0x00058f85) popup_grid_graphic_window_ParamLimits

0x65df,	// (0x00058f85) popup_grid_graphic_window

0x660f,	// (0x00058fb5) popup_large_graphic_colour_window

0x6635,	// (0x00058fdb) popup_menu_window_ParamLimits

0x6635,	// (0x00058fdb) popup_menu_window

0x67ff,	// (0x000591a5) popup_note_image_window

0x67e9,	// (0x0005918f) popup_note_wait_window_ParamLimits

0x67e9,	// (0x0005918f) popup_note_wait_window

0x67e9,	// (0x0005918f) popup_note_window_ParamLimits

0x67e9,	// (0x0005918f) popup_note_window

0x6865,	// (0x0005920b) popup_query_code_window_ParamLimits

0x6865,	// (0x0005920b) popup_query_code_window

0x687b,	// (0x00059221) popup_query_data_code_window_ParamLimits

0x687b,	// (0x00059221) popup_query_data_code_window

0x689e,	// (0x00059244) popup_query_data_window_ParamLimits

0x689e,	// (0x00059244) popup_query_data_window

0x68c0,	// (0x00059266) popup_query_sat_info_window_ParamLimits

0x68c0,	// (0x00059266) popup_query_sat_info_window

0x68ff,	// (0x000592a5) popup_snote_single_graphic_window_ParamLimits

0x68ff,	// (0x000592a5) popup_snote_single_graphic_window

0x68ff,	// (0x000592a5) popup_snote_single_text_window_ParamLimits

0x68ff,	// (0x000592a5) popup_snote_single_text_window

0x6916,	// (0x000592bc) popup_sub_window_general

0x6a5c,	// (0x00059402) popup_window_general_ParamLimits

0x6a5c,	// (0x00059402) popup_window_general

0x8abc,	// (0x0005b462) power_save_pane

0x62b2,	// (0x00058c58) control_pane_g1_ParamLimits

0x62b2,	// (0x00058c58) control_pane_g1

0x62db,	// (0x00058c81) control_pane_g2_ParamLimits

0x62db,	// (0x00058c81) control_pane_g2

0x8a2b,	// (0x0005b3d1) control_pane_g3_ParamLimits

0x8a2b,	// (0x0005b3d1) control_pane_g3

0x0007,

0xf768,	// (0x0006210e) control_pane_g_ParamLimits

0xf768,	// (0x0006210e) control_pane_g

0x6327,	// (0x00058ccd) control_pane_t1_ParamLimits

0x6327,	// (0x00058ccd) control_pane_t1

0x6383,	// (0x00058d29) control_pane_t2_ParamLimits

0x6383,	// (0x00058d29) control_pane_t2

0x0002,

0xf779,	// (0x0006211f) control_pane_t_ParamLimits

0xf779,	// (0x0006211f) control_pane_t

0x8950,	// (0x0005b2f6) navi_navi_volume_pane_cp1

0x8958,	// (0x0005b2fe) status_small_icon_pane

0x8960,	// (0x0005b306) status_small_pane_g1_ParamLimits

0x8960,	// (0x0005b306) status_small_pane_g1

0x8994,	// (0x0005b33a) status_small_pane_g2_ParamLimits

0x8994,	// (0x0005b33a) status_small_pane_g2

0x89a0,	// (0x0005b346) status_small_pane_g3_ParamLimits

0x89a0,	// (0x0005b346) status_small_pane_g3

0x89ac,	// (0x0005b352) status_small_pane_g4_ParamLimits

0x89ac,	// (0x0005b352) status_small_pane_g4

0x89b8,	// (0x0005b35e) status_small_pane_g5_ParamLimits

0x89b8,	// (0x0005b35e) status_small_pane_g5

0x89c6,	// (0x0005b36c) status_small_pane_g6_ParamLimits

0x89c6,	// (0x0005b36c) status_small_pane_g6

0x0007,

0xf757,	// (0x000620fd) status_small_pane_g_ParamLimits

0xf757,	// (0x000620fd) status_small_pane_g

0x89f5,	// (0x0005b39b) status_small_pane_t1

0x8a17,	// (0x0005b3bd) status_small_wait_pane_ParamLimits

0x8a17,	// (0x0005b3bd) status_small_wait_pane

0x5f83,	// (0x00058929) aid_levels_signal_ParamLimits

0x5f83,	// (0x00058929) aid_levels_signal

0x5f92,	// (0x00058938) signal_pane_g1_ParamLimits

0x5f92,	// (0x00058938) signal_pane_g1

0x5fa7,	// (0x0005894d) signal_pane_g2_ParamLimits

0x5fa7,	// (0x0005894d) signal_pane_g2

0x0003,

0xf6e8,	// (0x0006208e) signal_pane_g_ParamLimits

0xf6e8,	// (0x0006208e) signal_pane_g

0x36a1,	// (0x00056047) context_pane_g1

0x513a,	// (0x00057ae0) title_pane_g1

0x516c,	// (0x00057b12) title_pane_t1

0xed2b,	// (0x000616d1) title_pane_t2

0xed51,	// (0x000616f7) title_pane_t3

0x0002,

0xf532,	// (0x00061ed8) title_pane_t

0x8ec2,	// (0x0005b868) aid_levels_battery_ParamLimits

0x8ec2,	// (0x0005b868) aid_levels_battery

0x8ed3,	// (0x0005b879) battery_pane_g1_ParamLimits

0x8ed3,	// (0x0005b879) battery_pane_g1

0x8ee9,	// (0x0005b88f) battery_pane_g2_ParamLimits

0x8ee9,	// (0x0005b88f) battery_pane_g2

0x0001,

0xf78b,	// (0x00062131) battery_pane_g_ParamLimits

0xf78b,	// (0x00062131) battery_pane_g

0xa323,	// (0x0005ccc9) uni_indicator_pane_g1

0xa339,	// (0x0005ccdf) uni_indicator_pane_g2

0xa34f,	// (0x0005ccf5) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x000622a7) uni_indicator_pane_g

0x85c4,	// (0x0005af6a) navi_icon_pane_ParamLimits

0x85c4,	// (0x0005af6a) navi_icon_pane

0x850c,	// (0x0005aeb2) navi_midp_pane

0x85e0,	// (0x0005af86) navi_navi_pane

0x85ea,	// (0x0005af90) navi_text_pane_ParamLimits

0x85ea,	// (0x0005af90) navi_text_pane

0xed0b,	// (0x000616b1) status_small_wait_pane_g1

0xf072,	// (0x00061a18) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x000622a2) status_small_wait_pane_g

0xa036,	// (0x0005c9dc) navi_navi_icon_text_pane

0xa03e,	// (0x0005c9e4) navi_navi_pane_g1_ParamLimits

0xa03e,	// (0x0005c9e4) navi_navi_pane_g1

0xa050,	// (0x0005c9f6) navi_navi_pane_g2_ParamLimits

0xa050,	// (0x0005c9f6) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x00062270) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x00062270) navi_navi_pane_g

0xa062,	// (0x0005ca08) navi_navi_tabs_pane

0xa06b,	// (0x0005ca11) navi_navi_text_pane

0xa036,	// (0x0005c9dc) navi_navi_volume_pane

0xa012,	// (0x0005c9b8) navi_text_pane_t1

0xa006,	// (0x0005c9ac) navi_icon_pane_g1

0x9f59,	// (0x0005c8ff) navi_navi_text_pane_t1

0x6d38,	// (0x000596de) navi_navi_volume_pane_g1

0x6d40,	// (0x000596e6) volume_small_pane

0x9ebf,	// (0x0005c865) navi_navi_icon_text_pane_g1

0x9ec7,	// (0x0005c86d) navi_navi_icon_text_pane_t1

0x85e0,	// (0x0005af86) navi_tabs_2_long_pane

0x85e0,	// (0x0005af86) navi_tabs_2_pane

0x85e0,	// (0x0005af86) navi_tabs_3_long_pane

0x85e0,	// (0x0005af86) navi_tabs_3_pane

0x85e0,	// (0x0005af86) navi_tabs_4_pane

0x6d18,	// (0x000596be) tabs_2_active_pane_ParamLimits

0x6d18,	// (0x000596be) tabs_2_active_pane

0x6d28,	// (0x000596ce) tabs_2_passive_pane_ParamLimits

0x6d28,	// (0x000596ce) tabs_2_passive_pane

0x6ce6,	// (0x0005968c) tabs_3_active_pane_ParamLimits

0x6ce6,	// (0x0005968c) tabs_3_active_pane

0x6cf6,	// (0x0005969c) tabs_3_passive_pane_ParamLimits

0x6cf6,	// (0x0005969c) tabs_3_passive_pane

0x6d07,	// (0x000596ad) tabs_3_passive_pane_cp_ParamLimits

0x6d07,	// (0x000596ad) tabs_3_passive_pane_cp

0x6c9a,	// (0x00059640) tabs_4_active_pane_ParamLimits

0x6c9a,	// (0x00059640) tabs_4_active_pane

0x6cad,	// (0x00059653) tabs_4_passive_pane_ParamLimits

0x6cad,	// (0x00059653) tabs_4_passive_pane

0x6cbe,	// (0x00059664) tabs_4_passive_pane_cp_ParamLimits

0x6cbe,	// (0x00059664) tabs_4_passive_pane_cp

0x6ccf,	// (0x00059675) tabs_4_passive_pane_cp2_ParamLimits

0x6ccf,	// (0x00059675) tabs_4_passive_pane_cp2

0x6c76,	// (0x0005961c) tabs_2_long_active_pane_ParamLimits

0x6c76,	// (0x0005961c) tabs_2_long_active_pane

0x6c88,	// (0x0005962e) tabs_2_long_passive_pane_ParamLimits

0x6c88,	// (0x0005962e) tabs_2_long_passive_pane

0x6c37,	// (0x000595dd) tabs_3_long_active_pane_ParamLimits

0x6c37,	// (0x000595dd) tabs_3_long_active_pane

0x6c4a,	// (0x000595f0) tabs_3_long_passive_pane_ParamLimits

0x6c4a,	// (0x000595f0) tabs_3_long_passive_pane

0x6c63,	// (0x00059609) tabs_3_long_passive_pane_cp_ParamLimits

0x6c63,	// (0x00059609) tabs_3_long_passive_pane_cp

0x6bdd,	// (0x00059583) volume_small_pane_g1

0x6be6,	// (0x0005958c) volume_small_pane_g2

0x6bef,	// (0x00059595) volume_small_pane_g3

0x6bf8,	// (0x0005959e) volume_small_pane_g4

0x6c01,	// (0x000595a7) volume_small_pane_g5

0x6c0a,	// (0x000595b0) volume_small_pane_g6

0x6c13,	// (0x000595b9) volume_small_pane_g7

0x6c1c,	// (0x000595c2) volume_small_pane_g8

0x6c25,	// (0x000595cb) volume_small_pane_g9

0x6c2e,	// (0x000595d4) volume_small_pane_g10

0x0009,

0xf896,	// (0x0006223c) volume_small_pane_g

0xed63,	// (0x00061709) bg_active_tab_pane_cp2_ParamLimits

0xed63,	// (0x00061709) bg_active_tab_pane_cp2

0x51d4,	// (0x00057b7a) tabs_3_active_pane_g1

0x51dc,	// (0x00057b82) tabs_3_active_pane_t1

0xed63,	// (0x00061709) bg_passive_tab_pane_cp2_ParamLimits

0xed63,	// (0x00061709) bg_passive_tab_pane_cp2

0x51d4,	// (0x00057b7a) tabs_3_passive_pane_g1

0x51dc,	// (0x00057b82) tabs_3_passive_pane_t1

0xed63,	// (0x00061709) bg_active_tab_pane_cp3_ParamLimits

0xed63,	// (0x00061709) bg_active_tab_pane_cp3

0x51ee,	// (0x00057b94) tabs_4_active_pane_g1

0x51f6,	// (0x00057b9c) tabs_4_active_pane_t1

0xed63,	// (0x00061709) bg_passive_tab_pane_cp3_ParamLimits

0xed63,	// (0x00061709) bg_passive_tab_pane_cp3

0x51ee,	// (0x00057b94) tabs_4_1_passive_pane_g1

0x51f6,	// (0x00057b9c) tabs_4_1_passive_pane_t1

0x8a88,	// (0x0005b42e) list_highlight_pane_cp2

0xa59c,	// (0x0005cf42) list_set_pane_ParamLimits

0xa59c,	// (0x0005cf42) list_set_pane

0xa65e,	// (0x0005d004) main_pane_set_t1_ParamLimits

0xa65e,	// (0x0005d004) main_pane_set_t1

0xa67e,	// (0x0005d024) main_pane_set_t2_ParamLimits

0xa67e,	// (0x0005d024) main_pane_set_t2

0xa692,	// (0x0005d038) main_pane_set_t3_ParamLimits

0xa692,	// (0x0005d038) main_pane_set_t3

0xa6a6,	// (0x0005d04c) main_pane_set_t4_ParamLimits

0xa6a6,	// (0x0005d04c) main_pane_set_t4

0x0003,

0xf966,	// (0x0006230c) main_pane_set_t_ParamLimits

0xf966,	// (0x0006230c) main_pane_set_t

0xa6ba,	// (0x0005d060) setting_code_pane

0xa6c4,	// (0x0005d06a) setting_slider_graphic_pane

0xa6c4,	// (0x0005d06a) setting_slider_pane

0xa6c4,	// (0x0005d06a) setting_text_pane

0xa6c4,	// (0x0005d06a) setting_volume_pane

0x5208,	// (0x00057bae) volume_set_pane

0xed63,	// (0x00061709) bg_set_opt_pane_cp

0x5212,	// (0x00057bb8) setting_slider_pane_t1

0x522b,	// (0x00057bd1) setting_slider_pane_t2

0x5245,	// (0x00057beb) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00061edf) setting_slider_pane_t

0x525d,	// (0x00057c03) slider_set_pane

0xed15,	// (0x000616bb) bg_set_opt_pane_cp2

0xed71,	// (0x00061717) setting_slider_graphic_pane_g1

0x5273,	// (0x00057c19) setting_slider_graphic_pane_t1

0x5283,	// (0x00057c29) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00061ee6) setting_slider_graphic_pane_t

0x5293,	// (0x00057c39) slider_set_pane_cp

0xed15,	// (0x000616bb) input_focus_pane_cp1

0xa55d,	// (0x0005cf03) list_set_text_pane

0xed0b,	// (0x000616b1) setting_text_pane_g1

0xed15,	// (0x000616bb) input_focus_pane_cp2

0xed0b,	// (0x000616b1) setting_code_pane_g1

0xed7a,	// (0x00061720) setting_code_pane_t1

0x31ed,	// (0x00055b93) set_text_pane_t1_ParamLimits

0x31ed,	// (0x00055b93) set_text_pane_t1

0xf40b,	// (0x00061db1) set_opt_bg_pane_g1

0xf413,	// (0x00061db9) set_opt_bg_pane_g2

0xa535,	// (0x0005cedb) set_opt_bg_pane_g3

0xf423,	// (0x00061dc9) set_opt_bg_pane_g4

0xf42b,	// (0x00061dd1) set_opt_bg_pane_g5

0xf433,	// (0x00061dd9) set_opt_bg_pane_g6

0xa53f,	// (0x0005cee5) set_opt_bg_pane_g7

0xa549,	// (0x0005ceef) set_opt_bg_pane_g8

0xa553,	// (0x0005cef9) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x000622f9) set_opt_bg_pane_g

0xa528,	// (0x0005cece) slider_set_pane_g1

0x6de9,	// (0x0005978f) slider_set_pane_g2

0x0006,

0xf944,	// (0x000622ea) slider_set_pane_g

0x6d49,	// (0x000596ef) volume_set_pane_g1

0x6d53,	// (0x000596f9) volume_set_pane_g2

0x6d5d,	// (0x00059703) volume_set_pane_g3

0x6d67,	// (0x0005970d) volume_set_pane_g4

0x6d71,	// (0x00059717) volume_set_pane_g5

0x6d7b,	// (0x00059721) volume_set_pane_g6

0x6d85,	// (0x0005972b) volume_set_pane_g7

0x6d8f,	// (0x00059735) volume_set_pane_g8

0x6d99,	// (0x0005973f) volume_set_pane_g9

0x6da3,	// (0x00059749) volume_set_pane_g10

0x0009,

0xf91c,	// (0x000622c2) volume_set_pane_g

0x529b,	// (0x00057c41) indicator_pane_ParamLimits

0x529b,	// (0x00057c41) indicator_pane

0x52a7,	// (0x00057c4d) main_idle_pane_g2_ParamLimits

0x52a7,	// (0x00057c4d) main_idle_pane_g2

0x52cf,	// (0x00057c75) main_pane_idle_g1_ParamLimits

0x52cf,	// (0x00057c75) main_pane_idle_g1

0xed88,	// (0x0006172e) popup_clock_digital_analogue_window_ParamLimits

0xed88,	// (0x0006172e) popup_clock_digital_analogue_window

0x52dd,	// (0x00057c83) soft_indicator_pane_ParamLimits

0x52dd,	// (0x00057c83) soft_indicator_pane

0x52eb,	// (0x00057c91) wallpaper_pane_ParamLimits

0x52eb,	// (0x00057c91) wallpaper_pane

0xed0b,	// (0x000616b1) wallpaper_pane_g1

0x52f7,	// (0x00057c9d) indicator_pane_g1_ParamLimits

0x52f7,	// (0x00057c9d) indicator_pane_g1

0xa951,	// (0x0005d2f7) navi_navi_icon_text_pane_srt_g1

0xedb6,	// (0x0006175c) soft_indicator_pane_t1

0xedd0,	// (0x00061776) aid_ps_area_pane

0x5303,	// (0x00057ca9) aid_ps_clock_pane

0xede1,	// (0x00061787) aid_ps_indicator_pane

0xeded,	// (0x00061793) indicator_ps_pane_ParamLimits

0xeded,	// (0x00061793) indicator_ps_pane

0xedfc,	// (0x000617a2) power_save_pane_g1_ParamLimits

0xedfc,	// (0x000617a2) power_save_pane_g1

0xee08,	// (0x000617ae) power_save_pane_g2_ParamLimits

0xee08,	// (0x000617ae) power_save_pane_g2

0x4d31,	// (0x000576d7) aid_navinavi_width_pane

0xedd0,	// (0x00061776) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00061eeb) power_save_pane_g_ParamLimits

0xf545,	// (0x00061eeb) power_save_pane_g

0xee16,	// (0x000617bc) power_save_pane_t1_ParamLimits

0xee16,	// (0x000617bc) power_save_pane_t1

0x5303,	// (0x00057ca9) aid_ps_clock_pane_ParamLimits

0xede1,	// (0x00061787) aid_ps_indicator_pane_ParamLimits

0xee28,	// (0x000617ce) power_save_pane_t4_ParamLimits

0xee28,	// (0x000617ce) power_save_pane_t4

0x0001,

0xf54a,	// (0x00061ef0) power_save_pane_t_ParamLimits

0xf54a,	// (0x00061ef0) power_save_pane_t

0xee52,	// (0x000617f8) power_save_t3_ParamLimits

0xee52,	// (0x000617f8) power_save_t3

0xee3d,	// (0x000617e3) power_save_t2_ParamLimits

0xee3d,	// (0x000617e3) power_save_t2

0xee67,	// (0x0006180d) indicator_ps_pane_g1

0x5311,	// (0x00057cb7) ai_gene_pane_ParamLimits

0x5311,	// (0x00057cb7) ai_gene_pane

0x531d,	// (0x00057cc3) ai_links_pane_ParamLimits

0x531d,	// (0x00057cc3) ai_links_pane

0x5329,	// (0x00057ccf) indicator_pane_cp1_ParamLimits

0x5329,	// (0x00057ccf) indicator_pane_cp1

0x5335,	// (0x00057cdb) main_pane_idle_g1_cp_ParamLimits

0x5335,	// (0x00057cdb) main_pane_idle_g1_cp

0xee70,	// (0x00061816) popup_ai_links_title_window

0x5341,	// (0x00057ce7) soft_indicator_pane_cp1_ParamLimits

0x5341,	// (0x00057ce7) soft_indicator_pane_cp1

0xa311,	// (0x0005ccb7) ai_links_pane_g1

0xa31a,	// (0x0005ccc0) grid_ai_links_pane

0xa2f6,	// (0x0005cc9c) ai_gene_pane_1

0xa2ff,	// (0x0005cca5) ai_gene_pane_2

0xa308,	// (0x0005ccae) list_highlight_pane_cp4

0xa2d6,	// (0x0005cc7c) cell_ai_link_pane_ParamLimits

0xa2d6,	// (0x0005cc7c) cell_ai_link_pane

0xa2ce,	// (0x0005cc74) cell_ai_link_pane_g1

0xf072,	// (0x00061a18) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x0006229d) cell_ai_link_pane_g

0xed15,	// (0x000616bb) grid_highlight_cp2

0xed15,	// (0x000616bb) bg_popup_sub_pane_cp1

0xee87,	// (0x0006182d) popup_ai_links_title_window_t1

0xa21a,	// (0x0005cbc0) ai_gene_pane_1_g1_ParamLimits

0xa21a,	// (0x0005cbc0) ai_gene_pane_1_g1

0xa226,	// (0x0005cbcc) ai_gene_pane_1_g2_ParamLimits

0xa226,	// (0x0005cbcc) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x00062293) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x00062293) ai_gene_pane_1_g

0xa233,	// (0x0005cbd9) ai_gene_pane_1_t1_ParamLimits

0xa233,	// (0x0005cbd9) ai_gene_pane_1_t1

0xa267,	// (0x0005cc0d) grid_ai_soft_ind_pane

0xa205,	// (0x0005cbab) ai_gene_pane_2_t1_ParamLimits

0xa205,	// (0x0005cbab) ai_gene_pane_2_t1

0x534d,	// (0x00057cf3) main_pane_empty_t1_ParamLimits

0x534d,	// (0x00057cf3) main_pane_empty_t1

0x5365,	// (0x00057d0b) main_pane_empty_t2_ParamLimits

0x5365,	// (0x00057d0b) main_pane_empty_t2

0x537a,	// (0x00057d20) main_pane_empty_t3_ParamLimits

0x537a,	// (0x00057d20) main_pane_empty_t3

0x538c,	// (0x00057d32) main_pane_empty_t4_ParamLimits

0x538c,	// (0x00057d32) main_pane_empty_t4

0x539e,	// (0x00057d44) main_pane_empty_t5_ParamLimits

0x539e,	// (0x00057d44) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00061ef5) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00061ef5) main_pane_empty_t

0xf49a,	// (0x00061e40) bg_popup_window_pane_ParamLimits

0xf49a,	// (0x00061e40) bg_popup_window_pane

0x9f67,	// (0x0005c90d) find_popup_pane_cp2_ParamLimits

0x9f67,	// (0x0005c90d) find_popup_pane_cp2

0x9f73,	// (0x0005c919) heading_pane_ParamLimits

0x9f73,	// (0x0005c919) heading_pane

0xed15,	// (0x000616bb) bg_popup_sub_pane

0x9ee1,	// (0x0005c887) bg_popup_window_pane_g1_ParamLimits

0x9ee1,	// (0x0005c887) bg_popup_window_pane_g1

0x9eed,	// (0x0005c893) bg_popup_window_pane_g2_ParamLimits

0x9eed,	// (0x0005c893) bg_popup_window_pane_g2

0x9ef9,	// (0x0005c89f) bg_popup_window_pane_g3_ParamLimits

0x9ef9,	// (0x0005c89f) bg_popup_window_pane_g3

0x9f05,	// (0x0005c8ab) bg_popup_window_pane_g4_ParamLimits

0x9f05,	// (0x0005c8ab) bg_popup_window_pane_g4

0x9f11,	// (0x0005c8b7) bg_popup_window_pane_g5_ParamLimits

0x9f11,	// (0x0005c8b7) bg_popup_window_pane_g5

0x9f1d,	// (0x0005c8c3) bg_popup_window_pane_g6_ParamLimits

0x9f1d,	// (0x0005c8c3) bg_popup_window_pane_g6

0x9f29,	// (0x0005c8cf) bg_popup_window_pane_g7_ParamLimits

0x9f29,	// (0x0005c8cf) bg_popup_window_pane_g7

0x9f35,	// (0x0005c8db) bg_popup_window_pane_g8_ParamLimits

0x9f35,	// (0x0005c8db) bg_popup_window_pane_g8

0x9f41,	// (0x0005c8e7) bg_popup_window_pane_g9_ParamLimits

0x9f41,	// (0x0005c8e7) bg_popup_window_pane_g9

0x9f4d,	// (0x0005c8f3) bg_popup_window_pane_g10_ParamLimits

0x9f4d,	// (0x0005c8f3) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x0006225b) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x0006225b) bg_popup_window_pane_g

0x9e76,	// (0x0005c81c) bg_popup_heading_pane_ParamLimits

0x9e76,	// (0x0005c81c) bg_popup_heading_pane

0x6ed1,	// (0x00059877) tabs_4_passive_pane_cp_srt_ParamLimits

0x6ed1,	// (0x00059877) tabs_4_passive_pane_cp_srt

0x6ee3,	// (0x00059889) tabs_4_passive_pane_srt_ParamLimits

0x9e8a,	// (0x0005c830) heading_pane_g2

0x6ee3,	// (0x00059889) tabs_4_passive_pane_srt

0x8a88,	// (0x0005b42e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8a88,	// (0x0005b42e) bg_passive_tab_pane_cp3_srt

0x9e92,	// (0x0005c838) heading_pane_t1_ParamLimits

0x9e92,	// (0x0005c838) heading_pane_t1

0x9ea9,	// (0x0005c84f) heading_pane_t2_ParamLimits

0x9ea9,	// (0x0005c84f) heading_pane_t2

0x0001,

0xf8b0,	// (0x00062256) heading_pane_t_ParamLimits

0xf8b0,	// (0x00062256) heading_pane_t

0x97de,	// (0x0005c184) bg_popup_heading_pane_g1

0x988d,	// (0x0005c233) bg_popup_heading_pane_g2

0x9897,	// (0x0005c23d) bg_popup_heading_pane_g3

0x98a1,	// (0x0005c247) bg_popup_heading_pane_g4

0x98ab,	// (0x0005c251) bg_popup_heading_pane_g5

0x98b5,	// (0x0005c25b) bg_popup_heading_pane_g6

0x98bd,	// (0x0005c263) bg_popup_heading_pane_g7

0x98c5,	// (0x0005c26b) bg_popup_heading_pane_g8

0x98cf,	// (0x0005c275) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x00062212) bg_popup_heading_pane_g

0x8fd6,	// (0x0005b97c) bg_popup_sub_pane_g1

0x8fe6,	// (0x0005b98c) bg_popup_sub_pane_g2

0x8fde,	// (0x0005b984) bg_popup_sub_pane_g3

0x8ff6,	// (0x0005b99c) bg_popup_sub_pane_g4

0x8fee,	// (0x0005b994) bg_popup_sub_pane_g5

0x8ffe,	// (0x0005b9a4) bg_popup_sub_pane_g6

0x9006,	// (0x0005b9ac) bg_popup_sub_pane_g7

0x9016,	// (0x0005b9bc) bg_popup_sub_pane_g8

0x900e,	// (0x0005b9b4) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x000621ec) bg_popup_sub_pane_g

0xee96,	// (0x0006183c) bg_popup_window_pane_cp5_ParamLimits

0xee96,	// (0x0006183c) bg_popup_window_pane_cp5

0xeeb2,	// (0x00061858) popup_note_window_g1_ParamLimits

0xeeb2,	// (0x00061858) popup_note_window_g1

0xeebe,	// (0x00061864) popup_note_window_t1_ParamLimits

0xeebe,	// (0x00061864) popup_note_window_t1

0xeed4,	// (0x0006187a) popup_note_window_t2_ParamLimits

0xeed4,	// (0x0006187a) popup_note_window_t2

0xeeea,	// (0x00061890) popup_note_window_t3_ParamLimits

0xeeea,	// (0x00061890) popup_note_window_t3

0xef00,	// (0x000618a6) popup_note_window_t4_ParamLimits

0xef00,	// (0x000618a6) popup_note_window_t4

0xef28,	// (0x000618ce) popup_note_window_t5_ParamLimits

0xef28,	// (0x000618ce) popup_note_window_t5

0x0004,

0xf55a,	// (0x00061f00) popup_note_window_t_ParamLimits

0xf55a,	// (0x00061f00) popup_note_window_t

0xef72,	// (0x00061918) bg_popup_window_pane_cp6_ParamLimits

0xef72,	// (0x00061918) bg_popup_window_pane_cp6

0x975a,	// (0x0005c100) popup_note_image_window_g1_ParamLimits

0x975a,	// (0x0005c100) popup_note_image_window_g1

0x9766,	// (0x0005c10c) popup_note_image_window_g2_ParamLimits

0x9766,	// (0x0005c10c) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x000621e0) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x000621e0) popup_note_image_window_g

0x977f,	// (0x0005c125) popup_note_image_window_t1_ParamLimits

0x977f,	// (0x0005c125) popup_note_image_window_t1

0x9798,	// (0x0005c13e) popup_note_image_window_t2_ParamLimits

0x9798,	// (0x0005c13e) popup_note_image_window_t2

0x97b1,	// (0x0005c157) popup_note_image_window_t3_ParamLimits

0x97b1,	// (0x0005c157) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x000621e5) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x000621e5) popup_note_image_window_t

0x961a,	// (0x0005bfc0) bg_popup_window_pane_cp7_ParamLimits

0x961a,	// (0x0005bfc0) bg_popup_window_pane_cp7

0x964a,	// (0x0005bff0) popup_note_wait_window_g1_ParamLimits

0x964a,	// (0x0005bff0) popup_note_wait_window_g1

0x9656,	// (0x0005bffc) popup_note_wait_window_g2_ParamLimits

0x9656,	// (0x0005bffc) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x000621ce) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x000621ce) popup_note_wait_window_g

0x966e,	// (0x0005c014) popup_note_wait_window_t1_ParamLimits

0x966e,	// (0x0005c014) popup_note_wait_window_t1

0x9695,	// (0x0005c03b) popup_note_wait_window_t2_ParamLimits

0x9695,	// (0x0005c03b) popup_note_wait_window_t2

0x96b3,	// (0x0005c059) popup_note_wait_window_t3_ParamLimits

0x96b3,	// (0x0005c059) popup_note_wait_window_t3

0x96c6,	// (0x0005c06c) popup_note_wait_window_t4_ParamLimits

0x96c6,	// (0x0005c06c) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x000621d5) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x000621d5) popup_note_wait_window_t

0x96eb,	// (0x0005c091) wait_bar_pane_ParamLimits

0x96eb,	// (0x0005c091) wait_bar_pane

0xed15,	// (0x000616bb) wait_anim_pane

0xed15,	// (0x000616bb) wait_border_pane

0xed0b,	// (0x000616b1) wait_anim_pane_g1

0xed0b,	// (0x000616b1) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00062089) wait_anim_pane_g

0x95be,	// (0x0005bf64) wait_border_pane_g1

0x95c9,	// (0x0005bf6f) wait_border_pane_g2

0x95d2,	// (0x0005bf78) wait_border_pane_g3

0x0002,

0xf821,	// (0x000621c7) wait_border_pane_g

0x9428,	// (0x0005bdce) bg_popup_window_pane_cp16_ParamLimits

0x9428,	// (0x0005bdce) bg_popup_window_pane_cp16

0x9528,	// (0x0005bece) indicator_popup_pane_cp4_ParamLimits

0x9528,	// (0x0005bece) indicator_popup_pane_cp4

0x953c,	// (0x0005bee2) popup_query_data_window_t1_ParamLimits

0x953c,	// (0x0005bee2) popup_query_data_window_t1

0x954e,	// (0x0005bef4) popup_query_data_window_t2_ParamLimits

0x954e,	// (0x0005bef4) popup_query_data_window_t2

0x9567,	// (0x0005bf0d) popup_query_data_window_t3_ParamLimits

0x9567,	// (0x0005bf0d) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x000621c0) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x000621c0) popup_query_data_window_t

0x9581,	// (0x0005bf27) query_popup_data_pane_ParamLimits

0x9581,	// (0x0005bf27) query_popup_data_pane

0x9595,	// (0x0005bf3b) query_popup_data_pane_cp1_ParamLimits

0x9595,	// (0x0005bf3b) query_popup_data_pane_cp1

0x9428,	// (0x0005bdce) bg_popup_window_pane_cp10_ParamLimits

0x9428,	// (0x0005bdce) bg_popup_window_pane_cp10

0x945a,	// (0x0005be00) indicator_popup_pane_ParamLimits

0x945a,	// (0x0005be00) indicator_popup_pane

0x947c,	// (0x0005be22) popup_query_code_window_t1_ParamLimits

0x947c,	// (0x0005be22) popup_query_code_window_t1

0x9496,	// (0x0005be3c) popup_query_code_window_t2_ParamLimits

0x9496,	// (0x0005be3c) popup_query_code_window_t2

0x94df,	// (0x0005be85) popup_query_code_window_t3_ParamLimits

0x94df,	// (0x0005be85) popup_query_code_window_t3

0x0002,

0xf813,	// (0x000621b9) popup_query_code_window_t_ParamLimits

0xf813,	// (0x000621b9) popup_query_code_window_t

0x950e,	// (0x0005beb4) query_popup_pane_ParamLimits

0x950e,	// (0x0005beb4) query_popup_pane

0xef72,	// (0x00061918) bg_popup_window_pane_cp15_ParamLimits

0xef72,	// (0x00061918) bg_popup_window_pane_cp15

0xef92,	// (0x00061938) indicator_popup_pane_cp1_ParamLimits

0xef92,	// (0x00061938) indicator_popup_pane_cp1

0xefa5,	// (0x0006194b) indicator_popup_pane_cp2_ParamLimits

0xefa5,	// (0x0006194b) indicator_popup_pane_cp2

0xefc0,	// (0x00061966) popup_query_data_code_window_g1_ParamLimits

0xefc0,	// (0x00061966) popup_query_data_code_window_g1

0xefd3,	// (0x00061979) popup_query_data_code_window_t1_ParamLimits

0xefd3,	// (0x00061979) popup_query_data_code_window_t1

0xefe5,	// (0x0006198b) popup_query_data_code_window_t2_ParamLimits

0xefe5,	// (0x0006198b) popup_query_data_code_window_t2

0xeff7,	// (0x0006199d) popup_query_data_code_window_t3_ParamLimits

0xeff7,	// (0x0006199d) popup_query_data_code_window_t3

0xf00d,	// (0x000619b3) popup_query_data_code_window_t4_ParamLimits

0xf00d,	// (0x000619b3) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00061f0b) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00061f0b) popup_query_data_code_window_t

0x6aca,	// (0x00059470) list_single_midp_graphic_pane_g3

0xf027,	// (0x000619cd) query_popup_data_pane_cp2_ParamLimits

0xf03a,	// (0x000619e0) query_popup_pane_cp2_ParamLimits

0xf03a,	// (0x000619e0) query_popup_pane_cp2

0xed15,	// (0x000616bb) bg_popup_window_pane_cp11

0x940c,	// (0x0005bdb2) heading_pane_cp5

0x9414,	// (0x0005bdba) listscroll_popup_info_pane

0xed15,	// (0x000616bb) input_focus_pane_cp3

0xf055,	// (0x000619fb) query_popup_pane_t1

0xf063,	// (0x00061a09) list_popup_info_pane_ParamLimits

0xf063,	// (0x00061a09) list_popup_info_pane

0xf072,	// (0x00061a18) listscroll_popup_info_pane_g1

0xf07a,	// (0x00061a20) scroll_pane_cp7

0xf084,	// (0x00061a2a) popup_info_list_pane_t1_ParamLimits

0xf084,	// (0x00061a2a) popup_info_list_pane_t1

0xf09e,	// (0x00061a44) popup_info_list_pane_t2_ParamLimits

0xf09e,	// (0x00061a44) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00061f14) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00061f14) popup_info_list_pane_t

0xed15,	// (0x000616bb) bg_popup_window_pane_cp12

0xa96b,	// (0x0005d311) find_popup_pane

0xed63,	// (0x00061709) bg_popup_window_pane_cp3

0xf0b8,	// (0x00061a5e) heading_pane_cp3

0xf0c7,	// (0x00061a6d) listscroll_popup_graphic_pane

0xed15,	// (0x000616bb) bg_popup_window_pane_cp4

0x5400,	// (0x00057da6) heading_pane_cp4

0xf0d7,	// (0x00061a7d) listscroll_popup_colour_pane

0x540a,	// (0x00057db0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x540a,	// (0x00057db0) cell_large_graphic_colour_none_popup_pane

0x541e,	// (0x00057dc4) grid_large_graphic_colour_popup_pane_ParamLimits

0x541e,	// (0x00057dc4) grid_large_graphic_colour_popup_pane

0x544a,	// (0x00057df0) listscroll_popup_colour_pane_g1_ParamLimits

0x544a,	// (0x00057df0) listscroll_popup_colour_pane_g1

0x5461,	// (0x00057e07) listscroll_popup_colour_pane_g2_ParamLimits

0x5461,	// (0x00057e07) listscroll_popup_colour_pane_g2

0x5478,	// (0x00057e1e) listscroll_popup_colour_pane_g3_ParamLimits

0x5478,	// (0x00057e1e) listscroll_popup_colour_pane_g3

0x5488,	// (0x00057e2e) listscroll_popup_colour_pane_g4_ParamLimits

0x5488,	// (0x00057e2e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00061f19) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00061f19) listscroll_popup_colour_pane_g

0xf0df,	// (0x00061a85) scroll_pane_cp6_ParamLimits

0xf0df,	// (0x00061a85) scroll_pane_cp6

0x549c,	// (0x00057e42) cell_large_graphic_colour_popup_pane_ParamLimits

0x549c,	// (0x00057e42) cell_large_graphic_colour_popup_pane

0xf0f1,	// (0x00061a97) cell_large_graphic_colour_none_popup_pane_t1

0xed15,	// (0x000616bb) grid_highlight_pane_cp5

0xf100,	// (0x00061aa6) cell_large_graphic_colour_popup_pane_g1

0xf108,	// (0x00061aae) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00061f22) cell_large_graphic_colour_popup_pane_g

0xf110,	// (0x00061ab6) cell_large_graphic_colour_popup_pane_g2_copy1

0xf119,	// (0x00061abf) grid_highlight_pane_cp4

0xf121,	// (0x00061ac7) bg_popup_window_pane_cp8_ParamLimits

0xf121,	// (0x00061ac7) bg_popup_window_pane_cp8

0xf13c,	// (0x00061ae2) popup_snote_single_text_window_g1_ParamLimits

0xf13c,	// (0x00061ae2) popup_snote_single_text_window_g1

0xf14e,	// (0x00061af4) popup_snote_single_text_window_t1_ParamLimits

0xf14e,	// (0x00061af4) popup_snote_single_text_window_t1

0xf161,	// (0x00061b07) popup_snote_single_text_window_t2_ParamLimits

0xf161,	// (0x00061b07) popup_snote_single_text_window_t2

0xf174,	// (0x00061b1a) popup_snote_single_text_window_t3_ParamLimits

0xf174,	// (0x00061b1a) popup_snote_single_text_window_t3

0xf1ad,	// (0x00061b53) popup_snote_single_text_window_t4_ParamLimits

0xf1ad,	// (0x00061b53) popup_snote_single_text_window_t4

0xf1e1,	// (0x00061b87) popup_snote_single_text_window_t5_ParamLimits

0xf1e1,	// (0x00061b87) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00061f27) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00061f27) popup_snote_single_text_window_t

0xf210,	// (0x00061bb6) bg_popup_window_pane_cp9_ParamLimits

0xf210,	// (0x00061bb6) bg_popup_window_pane_cp9

0xf13c,	// (0x00061ae2) popup_snote_single_graphic_window_g1_ParamLimits

0xf13c,	// (0x00061ae2) popup_snote_single_graphic_window_g1

0xf21e,	// (0x00061bc4) popup_snote_single_graphic_window_g2_ParamLimits

0xf21e,	// (0x00061bc4) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00061f32) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00061f32) popup_snote_single_graphic_window_g

0xf22a,	// (0x00061bd0) popup_snote_single_graphic_window_t1_ParamLimits

0xf22a,	// (0x00061bd0) popup_snote_single_graphic_window_t1

0xf23d,	// (0x00061be3) popup_snote_single_graphic_window_t2_ParamLimits

0xf23d,	// (0x00061be3) popup_snote_single_graphic_window_t2

0xf250,	// (0x00061bf6) popup_snote_single_graphic_window_t3_ParamLimits

0xf250,	// (0x00061bf6) popup_snote_single_graphic_window_t3

0xf289,	// (0x00061c2f) popup_snote_single_graphic_window_t4_ParamLimits

0xf289,	// (0x00061c2f) popup_snote_single_graphic_window_t4

0xf2bd,	// (0x00061c63) popup_snote_single_graphic_window_t5_ParamLimits

0xf2bd,	// (0x00061c63) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00061f37) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00061f37) popup_snote_single_graphic_window_t

0xa8a9,	// (0x0005d24f) grid_graphic_popup_pane_ParamLimits

0xa8a9,	// (0x0005d24f) grid_graphic_popup_pane

0xa8d7,	// (0x0005d27d) listscroll_popup_graphic_pane_g1_ParamLimits

0xa8d7,	// (0x0005d27d) listscroll_popup_graphic_pane_g1

0xa8eb,	// (0x0005d291) listscroll_popup_graphic_pane_g2_ParamLimits

0xa8eb,	// (0x0005d291) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x00062336) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x00062336) listscroll_popup_graphic_pane_g

0xa8ff,	// (0x0005d2a5) scroll_pane_cp5

0xa841,	// (0x0005d1e7) cell_graphic_popup_pane_ParamLimits

0xa841,	// (0x0005d1e7) cell_graphic_popup_pane

0xa822,	// (0x0005d1c8) cell_graphic_popup_pane_g1

0xa82a,	// (0x0005d1d0) cell_graphic_popup_pane_g2

0xf110,	// (0x00061ab6) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x0006232f) cell_graphic_popup_pane_g

0xa833,	// (0x0005d1d9) cell_graphic_popup_pane_t2

0xf119,	// (0x00061abf) grid_highlight_pane_cp3

0xf2fe,	// (0x00061ca4) list_gen_pane_ParamLimits

0xf2fe,	// (0x00061ca4) list_gen_pane

0xf326,	// (0x00061ccc) scroll_pane

0xa77a,	// (0x0005d120) bg_list_pane_g1_ParamLimits

0xa77a,	// (0x0005d120) bg_list_pane_g1

0xa797,	// (0x0005d13d) bg_list_pane_g2_ParamLimits

0xa797,	// (0x0005d13d) bg_list_pane_g2

0xa7ac,	// (0x0005d152) bg_list_pane_g3_ParamLimits

0xa7ac,	// (0x0005d152) bg_list_pane_g3

0xa7c0,	// (0x0005d166) bg_list_pane_g4_ParamLimits

0xa7c0,	// (0x0005d166) bg_list_pane_g4

0xa7d4,	// (0x0005d17a) bg_list_pane_g5_ParamLimits

0xa7d4,	// (0x0005d17a) bg_list_pane_g5

0x0004,

0xf97e,	// (0x00062324) bg_list_pane_g_ParamLimits

0xf97e,	// (0x00062324) bg_list_pane_g

0xa748,	// (0x0005d0ee) list_double2_graphic_large_graphic_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_double2_graphic_large_graphic_pane

0xa748,	// (0x0005d0ee) list_double2_graphic_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_double2_graphic_pane

0xa748,	// (0x0005d0ee) list_double2_large_graphic_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_double2_large_graphic_pane

0x6e99,	// (0x0005983f) list_double2_pane_ParamLimits

0x6e99,	// (0x0005983f) list_double2_pane

0xa748,	// (0x0005d0ee) list_double_graphic_heading_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_double_graphic_heading_pane

0xa748,	// (0x0005d0ee) list_double_graphic_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_double_graphic_pane

0xa748,	// (0x0005d0ee) list_double_heading_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_double_heading_pane

0xa748,	// (0x0005d0ee) list_double_large_graphic_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_double_large_graphic_pane

0xa748,	// (0x0005d0ee) list_double_number_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_double_number_pane

0xa748,	// (0x0005d0ee) list_double_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_double_pane

0xa748,	// (0x0005d0ee) list_double_time_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_double_time_pane

0xa748,	// (0x0005d0ee) list_setting_number_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_setting_number_pane

0xa748,	// (0x0005d0ee) list_setting_pane_ParamLimits

0xa748,	// (0x0005d0ee) list_setting_pane

0x9c53,	// (0x0005c5f9) list_single_2graphic_pane_ParamLimits

0x9c53,	// (0x0005c5f9) list_single_2graphic_pane

0x9c53,	// (0x0005c5f9) list_single_graphic_heading_pane_ParamLimits

0x9c53,	// (0x0005c5f9) list_single_graphic_heading_pane

0x9c53,	// (0x0005c5f9) list_single_graphic_pane_ParamLimits

0x9c53,	// (0x0005c5f9) list_single_graphic_pane

0x9c53,	// (0x0005c5f9) list_single_heading_pane_ParamLimits

0x9c53,	// (0x0005c5f9) list_single_heading_pane

0xa75f,	// (0x0005d105) list_single_large_graphic_pane_ParamLimits

0xa75f,	// (0x0005d105) list_single_large_graphic_pane

0x9c53,	// (0x0005c5f9) list_single_number_heading_pane_ParamLimits

0x9c53,	// (0x0005c5f9) list_single_number_heading_pane

0x9c53,	// (0x0005c5f9) list_single_number_pane_ParamLimits

0x9c53,	// (0x0005c5f9) list_single_number_pane

0x9c53,	// (0x0005c5f9) list_single_pane_ParamLimits

0x9c53,	// (0x0005c5f9) list_single_pane

0xed15,	// (0x000616bb) list_highlight_pane_cp1

0x54d3,	// (0x00057e79) list_single_pane_g1_ParamLimits

0x54d3,	// (0x00057e79) list_single_pane_g1

0x54df,	// (0x00057e85) list_single_pane_g2_ParamLimits

0x54df,	// (0x00057e85) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00061f53) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00061f53) list_single_pane_g

0x6e83,	// (0x00059829) list_single_pane_t1_ParamLimits

0x6e83,	// (0x00059829) list_single_pane_t1

0x54d3,	// (0x00057e79) list_single_number_pane_g1_ParamLimits

0x54d3,	// (0x00057e79) list_single_number_pane_g1

0x54df,	// (0x00057e85) list_single_number_pane_g2_ParamLimits

0x54df,	// (0x00057e85) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00061f53) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00061f53) list_single_number_pane_g

0x6dad,	// (0x00059753) list_single_number_pane_t1_ParamLimits

0x6dad,	// (0x00059753) list_single_number_pane_t1

0x6dc3,	// (0x00059769) list_single_number_pane_t2_ParamLimits

0x6dc3,	// (0x00059769) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x000622e5) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x000622e5) list_single_number_pane_t

0x54c7,	// (0x00057e6d) list_single_graphic_pane_g1_ParamLimits

0x54c7,	// (0x00057e6d) list_single_graphic_pane_g1

0x54d3,	// (0x00057e79) list_single_graphic_pane_g2_ParamLimits

0x54d3,	// (0x00057e79) list_single_graphic_pane_g2

0x54df,	// (0x00057e85) list_single_graphic_pane_g3_ParamLimits

0x54df,	// (0x00057e85) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00061f42) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00061f42) list_single_graphic_pane_g

0x54eb,	// (0x00057e91) list_single_graphic_pane_t1_ParamLimits

0x54eb,	// (0x00057e91) list_single_graphic_pane_t1

0x5501,	// (0x00057ea7) list_single_heading_pane_g1_ParamLimits

0x5501,	// (0x00057ea7) list_single_heading_pane_g1

0x54df,	// (0x00057e85) list_single_heading_pane_g2_ParamLimits

0x54df,	// (0x00057e85) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00061f49) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00061f49) list_single_heading_pane_g

0x5514,	// (0x00057eba) list_single_heading_pane_t1_ParamLimits

0x5514,	// (0x00057eba) list_single_heading_pane_t1

0x552a,	// (0x00057ed0) list_single_heading_pane_t2_ParamLimits

0x552a,	// (0x00057ed0) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00061f4e) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00061f4e) list_single_heading_pane_t

0x54d3,	// (0x00057e79) list_single_number_heading_pane_g1_ParamLimits

0x54d3,	// (0x00057e79) list_single_number_heading_pane_g1

0x54df,	// (0x00057e85) list_single_number_heading_pane_g2_ParamLimits

0x54df,	// (0x00057e85) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00061f53) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00061f53) list_single_number_heading_pane_g

0x553c,	// (0x00057ee2) list_single_number_heading_pane_t1_ParamLimits

0x553c,	// (0x00057ee2) list_single_number_heading_pane_t1

0x5552,	// (0x00057ef8) list_single_number_heading_pane_t2_ParamLimits

0x5552,	// (0x00057ef8) list_single_number_heading_pane_t2

0x5564,	// (0x00057f0a) list_single_number_heading_pane_t3_ParamLimits

0x5564,	// (0x00057f0a) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00061f58) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00061f58) list_single_number_heading_pane_t

0x5576,	// (0x00057f1c) list_single_graphic_heading_pane_g1_ParamLimits

0x5576,	// (0x00057f1c) list_single_graphic_heading_pane_g1

0x558e,	// (0x00057f34) list_single_graphic_heading_pane_g4_ParamLimits

0x558e,	// (0x00057f34) list_single_graphic_heading_pane_g4

0x54df,	// (0x00057e85) list_single_graphic_heading_pane_g5_ParamLimits

0x54df,	// (0x00057e85) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00061f5f) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00061f5f) list_single_graphic_heading_pane_g

0x553c,	// (0x00057ee2) list_single_graphic_heading_pane_t1_ParamLimits

0x553c,	// (0x00057ee2) list_single_graphic_heading_pane_t1

0x559f,	// (0x00057f45) list_single_graphic_heading_pane_t2_ParamLimits

0x559f,	// (0x00057f45) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00061f66) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00061f66) list_single_graphic_heading_pane_t

0x55b7,	// (0x00057f5d) list_single_large_graphic_pane_g1_ParamLimits

0x55b7,	// (0x00057f5d) list_single_large_graphic_pane_g1

0x54d3,	// (0x00057e79) list_single_large_graphic_pane_g2_ParamLimits

0x54d3,	// (0x00057e79) list_single_large_graphic_pane_g2

0x54df,	// (0x00057e85) list_single_large_graphic_pane_g3_ParamLimits

0x54df,	// (0x00057e85) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00061f6b) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00061f6b) list_single_large_graphic_pane_g

0x95c9,	// (0x0005bf6f) wait_border_pane_g2_copy1

0x55c3,	// (0x00057f69) list_single_large_graphic_pane_g4_cp2

0x55cb,	// (0x00057f71) list_single_large_graphic_pane_t1_ParamLimits

0x55cb,	// (0x00057f71) list_single_large_graphic_pane_t1

0x823c,	// (0x0005abe2) list_double_pane_g1_ParamLimits

0x823c,	// (0x0005abe2) list_double_pane_g1

0x3206,	// (0x00055bac) list_double_pane_g2_ParamLimits

0x3206,	// (0x00055bac) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00061f72) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00061f72) list_double_pane_g

0x55e1,	// (0x00057f87) list_double_pane_t1_ParamLimits

0x55e1,	// (0x00057f87) list_double_pane_t1

0x55f7,	// (0x00057f9d) list_double_pane_t2_ParamLimits

0x55f7,	// (0x00057f9d) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00061f77) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00061f77) list_double_pane_t

0x5609,	// (0x00057faf) list_double2_pane_g1_ParamLimits

0x5609,	// (0x00057faf) list_double2_pane_g1

0x561a,	// (0x00057fc0) list_double2_pane_g2_ParamLimits

0x561a,	// (0x00057fc0) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00061f7c) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00061f7c) list_double2_pane_g

0x5626,	// (0x00057fcc) list_double2_pane_t1_ParamLimits

0x5626,	// (0x00057fcc) list_double2_pane_t1

0x563c,	// (0x00057fe2) list_double2_pane_t2_ParamLimits

0x563c,	// (0x00057fe2) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00061f81) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00061f81) list_double2_pane_t

0x823c,	// (0x0005abe2) list_double_number_pane_g1_ParamLimits

0x823c,	// (0x0005abe2) list_double_number_pane_g1

0x3206,	// (0x00055bac) list_double_number_pane_g2_ParamLimits

0x3206,	// (0x00055bac) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00061f72) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00061f72) list_double_number_pane_g

0x564e,	// (0x00057ff4) list_double_number_pane_t1_ParamLimits

0x564e,	// (0x00057ff4) list_double_number_pane_t1

0x5660,	// (0x00058006) list_double_number_pane_t2_ParamLimits

0x5660,	// (0x00058006) list_double_number_pane_t2

0x5676,	// (0x0005801c) list_double_number_pane_t3_ParamLimits

0x5676,	// (0x0005801c) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00061f86) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00061f86) list_double_number_pane_t

0x5688,	// (0x0005802e) list_double_graphic_pane_g1_ParamLimits

0x5688,	// (0x0005802e) list_double_graphic_pane_g1

0x5694,	// (0x0005803a) list_double_graphic_pane_g2_ParamLimits

0x5694,	// (0x0005803a) list_double_graphic_pane_g2

0x56a3,	// (0x00058049) list_double_graphic_pane_g3_ParamLimits

0x56a3,	// (0x00058049) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00061f8d) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00061f8d) list_double_graphic_pane_g

0x56bb,	// (0x00058061) list_double_graphic_pane_t1_ParamLimits

0x56bb,	// (0x00058061) list_double_graphic_pane_t1

0x56d1,	// (0x00058077) list_double_graphic_pane_t2_ParamLimits

0x56d1,	// (0x00058077) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00061f96) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00061f96) list_double_graphic_pane_t

0x56e3,	// (0x00058089) list_double2_graphic_pane_g1_ParamLimits

0x56e3,	// (0x00058089) list_double2_graphic_pane_g1

0x56ef,	// (0x00058095) list_double2_graphic_pane_g2_ParamLimits

0x56ef,	// (0x00058095) list_double2_graphic_pane_g2

0x56fb,	// (0x000580a1) list_double2_graphic_pane_g3_ParamLimits

0x56fb,	// (0x000580a1) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00061f9b) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00061f9b) list_double2_graphic_pane_g

0x5707,	// (0x000580ad) list_double2_graphic_pane_t1_ParamLimits

0x5707,	// (0x000580ad) list_double2_graphic_pane_t1

0x571d,	// (0x000580c3) list_double2_graphic_pane_t2_ParamLimits

0x571d,	// (0x000580c3) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00061fa2) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00061fa2) list_double2_graphic_pane_t

0x572f,	// (0x000580d5) list_double_large_graphic_pane_g1_ParamLimits

0x572f,	// (0x000580d5) list_double_large_graphic_pane_g1

0x574e,	// (0x000580f4) list_double_large_graphic_pane_g2_ParamLimits

0x574e,	// (0x000580f4) list_double_large_graphic_pane_g2

0x3206,	// (0x00055bac) list_double_large_graphic_pane_g3_ParamLimits

0x3206,	// (0x00055bac) list_double_large_graphic_pane_g3

0x5764,	// (0x0005810a) list_double_large_graphic_pane_g4_ParamLimits

0x5764,	// (0x0005810a) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00061fa7) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00061fa7) list_double_large_graphic_pane_g

0x578c,	// (0x00058132) list_double_large_graphic_pane_t1_ParamLimits

0x578c,	// (0x00058132) list_double_large_graphic_pane_t1

0x57a5,	// (0x0005814b) list_double_large_graphic_pane_t2_ParamLimits

0x57a5,	// (0x0005814b) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00061fb2) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00061fb2) list_double_large_graphic_pane_t

0x57b7,	// (0x0005815d) list_double2_large_graphic_pane_g1_ParamLimits

0x57b7,	// (0x0005815d) list_double2_large_graphic_pane_g1

0x57c3,	// (0x00058169) list_double2_large_graphic_pane_g2_ParamLimits

0x57c3,	// (0x00058169) list_double2_large_graphic_pane_g2

0x56fb,	// (0x000580a1) list_double2_large_graphic_pane_g3_ParamLimits

0x56fb,	// (0x000580a1) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00061fb7) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00061fb7) list_double2_large_graphic_pane_g

0x57d4,	// (0x0005817a) list_double2_large_graphic_pane_t1_ParamLimits

0x57d4,	// (0x0005817a) list_double2_large_graphic_pane_t1

0x57ea,	// (0x00058190) list_double2_large_graphic_pane_t2_ParamLimits

0x57ea,	// (0x00058190) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00061fbe) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00061fbe) list_double2_large_graphic_pane_t

0x57fc,	// (0x000581a2) list_double_heading_pane_g1_ParamLimits

0x57fc,	// (0x000581a2) list_double_heading_pane_g1

0x580d,	// (0x000581b3) list_double_heading_pane_g2_ParamLimits

0x580d,	// (0x000581b3) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x00061fc3) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x00061fc3) list_double_heading_pane_g

0x5819,	// (0x000581bf) list_double_heading_pane_t1_ParamLimits

0x5819,	// (0x000581bf) list_double_heading_pane_t1

0x582f,	// (0x000581d5) list_double_heading_pane_t2_ParamLimits

0x582f,	// (0x000581d5) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00061fc8) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00061fc8) list_double_heading_pane_t

0x5841,	// (0x000581e7) list_double_graphic_heading_pane_g1_ParamLimits

0x5841,	// (0x000581e7) list_double_graphic_heading_pane_g1

0x57fc,	// (0x000581a2) list_double_graphic_heading_pane_g2_ParamLimits

0x57fc,	// (0x000581a2) list_double_graphic_heading_pane_g2

0x580d,	// (0x000581b3) list_double_graphic_heading_pane_g3_ParamLimits

0x580d,	// (0x000581b3) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00061fcd) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00061fcd) list_double_graphic_heading_pane_g

0x584d,	// (0x000581f3) list_double_graphic_heading_pane_t1_ParamLimits

0x584d,	// (0x000581f3) list_double_graphic_heading_pane_t1

0x5863,	// (0x00058209) list_double_graphic_heading_pane_t2_ParamLimits

0x5863,	// (0x00058209) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00061fd4) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00061fd4) list_double_graphic_heading_pane_t

0x5875,	// (0x0005821b) list_double_time_pane_g1_ParamLimits

0x5875,	// (0x0005821b) list_double_time_pane_g1

0x5886,	// (0x0005822c) list_double_time_pane_g2_ParamLimits

0x5886,	// (0x0005822c) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00061fd9) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00061fd9) list_double_time_pane_g

0x5892,	// (0x00058238) list_double_time_pane_t1_ParamLimits

0x5892,	// (0x00058238) list_double_time_pane_t1

0x58a8,	// (0x0005824e) list_double_time_pane_t2_ParamLimits

0x58a8,	// (0x0005824e) list_double_time_pane_t2

0x58ba,	// (0x00058260) list_double_time_pane_t3_ParamLimits

0x58ba,	// (0x00058260) list_double_time_pane_t3

0x58cc,	// (0x00058272) list_double_time_pane_t4_ParamLimits

0x58cc,	// (0x00058272) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00061fde) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00061fde) list_double_time_pane_t

0x58de,	// (0x00058284) list_setting_pane_g1_ParamLimits

0x58de,	// (0x00058284) list_setting_pane_g1

0x58ea,	// (0x00058290) list_setting_pane_g2_ParamLimits

0x58ea,	// (0x00058290) list_setting_pane_g2

0x0001,

0xf641,	// (0x00061fe7) list_setting_pane_g_ParamLimits

0xf641,	// (0x00061fe7) list_setting_pane_g

0x58f6,	// (0x0005829c) list_setting_pane_t1_ParamLimits

0x58f6,	// (0x0005829c) list_setting_pane_t1

0x5910,	// (0x000582b6) list_setting_pane_t2_ParamLimits

0x5910,	// (0x000582b6) list_setting_pane_t2

0x0002,

0xf646,	// (0x00061fec) list_setting_pane_t_ParamLimits

0xf646,	// (0x00061fec) list_setting_pane_t

0x594f,	// (0x000582f5) set_value_pane_cp_ParamLimits

0x594f,	// (0x000582f5) set_value_pane_cp

0x595d,	// (0x00058303) list_setting_number_pane_g1_ParamLimits

0x595d,	// (0x00058303) list_setting_number_pane_g1

0x5969,	// (0x0005830f) list_setting_number_pane_g2_ParamLimits

0x5969,	// (0x0005830f) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00061ff3) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00061ff3) list_setting_number_pane_g

0x5975,	// (0x0005831b) list_setting_number_pane_t1_ParamLimits

0x5975,	// (0x0005831b) list_setting_number_pane_t1

0x598e,	// (0x00058334) list_setting_number_pane_t2_ParamLimits

0x598e,	// (0x00058334) list_setting_number_pane_t2

0x59a8,	// (0x0005834e) list_setting_number_pane_t3_ParamLimits

0x59a8,	// (0x0005834e) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00061ff8) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00061ff8) list_setting_number_pane_t

0x594f,	// (0x000582f5) set_value_pane_ParamLimits

0x594f,	// (0x000582f5) set_value_pane

0xf35a,	// (0x00061d00) bg_set_opt_pane_ParamLimits

0xf35a,	// (0x00061d00) bg_set_opt_pane

0x3212,	// (0x00055bb8) set_value_pane_t1

0xf37b,	// (0x00061d21) slider_set_pane_cp3

0xf384,	// (0x00061d2a) volume_small_pane_cp

0xf38d,	// (0x00061d33) list_form_gen_pane

0xf396,	// (0x00061d3c) scroll_pane_cp8

0x59eb,	// (0x00058391) form_field_data_pane_ParamLimits

0x59eb,	// (0x00058391) form_field_data_pane

0x5a0b,	// (0x000583b1) form_field_data_wide_pane_ParamLimits

0x5a0b,	// (0x000583b1) form_field_data_wide_pane

0x5a32,	// (0x000583d8) form_field_popup_pane_ParamLimits

0x5a32,	// (0x000583d8) form_field_popup_pane

0x3230,	// (0x00055bd6) form_field_popup_wide_pane_ParamLimits

0x3230,	// (0x00055bd6) form_field_popup_wide_pane

0x3251,	// (0x00055bf7) form_field_slider_pane_ParamLimits

0x3251,	// (0x00055bf7) form_field_slider_pane

0x3264,	// (0x00055c0a) form_field_slider_wide_pane_ParamLimits

0x3264,	// (0x00055c0a) form_field_slider_wide_pane

0xf3a7,	// (0x00061d4d) data_form_pane

0x5a5e,	// (0x00058404) form_field_data_pane_t1

0xf3b3,	// (0x00061d59) input_focus_pane

0x3277,	// (0x00055c1d) data_form_wide_pane

0x3294,	// (0x00055c3a) form_field_data_wide_pane_t1

0xf12e,	// (0x00061ad4) input_focus_pane_cp6

0x5a78,	// (0x0005841e) form_field_popup_pane_t1

0xf3b3,	// (0x00061d59) input_focus_pane_cp7

0xf3e1,	// (0x00061d87) list_form_pane

0x32be,	// (0x00055c64) form_field_popup_wide_pane_t1

0xf3b3,	// (0x00061d59) input_focus_pane_cp8

0xf3ed,	// (0x00061d93) list_form_wide_pane

0x5a9a,	// (0x00058440) form_field_slider_pane_t1_ParamLimits

0x5a9a,	// (0x00058440) form_field_slider_pane_t1

0x5ab2,	// (0x00058458) form_field_slider_pane_t2_ParamLimits

0x5ab2,	// (0x00058458) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00062008) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00062008) form_field_slider_pane_t

0xee96,	// (0x0006183c) input_focus_pane_cp9_ParamLimits

0xee96,	// (0x0006183c) input_focus_pane_cp9

0x5ac7,	// (0x0005846d) slider_cont_pane_ParamLimits

0x5ac7,	// (0x0005846d) slider_cont_pane

0xf3f9,	// (0x00061d9f) form_field_slider_wide_pane_t1_ParamLimits

0xf3f9,	// (0x00061d9f) form_field_slider_wide_pane_t1

0x32d3,	// (0x00055c79) form_field_slider_wide_pane_t2_ParamLimits

0x32d3,	// (0x00055c79) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0006200d) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0006200d) form_field_slider_wide_pane_t

0xee96,	// (0x0006183c) input_focus_pane_cp10_ParamLimits

0xee96,	// (0x0006183c) input_focus_pane_cp10

0x5adb,	// (0x00058481) slider_cont_pane_cp1_ParamLimits

0x5adb,	// (0x00058481) slider_cont_pane_cp1

0x5aef,	// (0x00058495) slider_form_pane_cp

0xf40b,	// (0x00061db1) input_focus_pane_g1

0xf413,	// (0x00061db9) input_focus_pane_g2

0xf41b,	// (0x00061dc1) input_focus_pane_g3

0xf423,	// (0x00061dc9) input_focus_pane_g4

0xf42b,	// (0x00061dd1) input_focus_pane_g5

0xf433,	// (0x00061dd9) input_focus_pane_g6

0xf43b,	// (0x00061de1) input_focus_pane_g7

0xf443,	// (0x00061de9) input_focus_pane_g8

0xf44b,	// (0x00061df1) input_focus_pane_g9

0xed0b,	// (0x000616b1) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00062012) input_focus_pane_g

0x95d2,	// (0x0005bf78) wait_border_pane_g3_copy1

0x5af7,	// (0x0005849d) data_form_pane_t1

0xed0b,	// (0x000616b1) wait_anim_pane_g1_copy1

0x6e4d,	// (0x000597f3) data_form_wide_pane_t1

0x3a67,	// (0x0005640d) list_form_graphic_pane_cp_ParamLimits

0x3a67,	// (0x0005640d) list_form_graphic_pane_cp

0xa6ec,	// (0x0005d092) slider_form_pane_g1

0xa6f5,	// (0x0005d09b) slider_form_pane_g2

0x0006,

0xf96f,	// (0x00062315) slider_form_pane_g

0x3a67,	// (0x0005640d) list_form_graphic_pane_ParamLimits

0x3a67,	// (0x0005640d) list_form_graphic_pane

0x3a79,	// (0x0005641f) list_form_graphic_pane_g1

0x3a81,	// (0x00056427) list_form_graphic_pane_t1_ParamLimits

0x3a81,	// (0x00056427) list_form_graphic_pane_t1

0xed63,	// (0x00061709) list_highlight_pane_cp5_ParamLimits

0xed63,	// (0x00061709) list_highlight_pane_cp5

0x5b16,	// (0x000584bc) find_pane_g1

0xf453,	// (0x00061df9) input_find_pane

0x5b1f,	// (0x000584c5) input_find_pane_g1_ParamLimits

0x5b1f,	// (0x000584c5) input_find_pane_g1

0x5b2b,	// (0x000584d1) input_find_pane_t1_ParamLimits

0x5b2b,	// (0x000584d1) input_find_pane_t1

0x5b40,	// (0x000584e6) input_find_pane_t2_ParamLimits

0x5b40,	// (0x000584e6) input_find_pane_t2

0x0001,

0xf681,	// (0x00062027) input_find_pane_t_ParamLimits

0xf681,	// (0x00062027) input_find_pane_t

0xf45c,	// (0x00061e02) input_focus_pane_cp5_ParamLimits

0xf45c,	// (0x00061e02) input_focus_pane_cp5

0xf46f,	// (0x00061e15) bg_popup_window_pane_cp2_ParamLimits

0xf46f,	// (0x00061e15) bg_popup_window_pane_cp2

0xf47c,	// (0x00061e22) listscroll_menu_pane_ParamLimits

0xf47c,	// (0x00061e22) listscroll_menu_pane

0x5b61,	// (0x00058507) popup_submenu_window_ParamLimits

0x5b61,	// (0x00058507) popup_submenu_window

0xf488,	// (0x00061e2e) find_popup_pane_g1

0xf490,	// (0x00061e36) input_popup_find_pane_cp

0xf49a,	// (0x00061e40) input_focus_pane_cp4_ParamLimits

0xf49a,	// (0x00061e40) input_focus_pane_cp4

0xf4a8,	// (0x00061e4e) input_popup_find_pane_t1_ParamLimits

0xf4a8,	// (0x00061e4e) input_popup_find_pane_t1

0xed15,	// (0x000616bb) bg_popup_sub_pane_cp

0xf4d6,	// (0x00061e7c) listscroll_popup_sub_pane

0xf4de,	// (0x00061e84) list_submenu_pane_ParamLimits

0xf4de,	// (0x00061e84) list_submenu_pane

0xf4ef,	// (0x00061e95) scroll_pane_cp4

0xf4f7,	// (0x00061e9d) list_single_popup_submenu_pane_ParamLimits

0xf4f7,	// (0x00061e9d) list_single_popup_submenu_pane

0xf50c,	// (0x00061eb2) list_single_popup_submenu_pane_g1

0xf514,	// (0x00061eba) list_single_popup_submenu_pane_t1_ParamLimits

0xf514,	// (0x00061eba) list_single_popup_submenu_pane_t1

0xed63,	// (0x00061709) bg_active_tab_pane_cp1_ParamLimits

0xed63,	// (0x00061709) bg_active_tab_pane_cp1

0x5b9f,	// (0x00058545) tabs_2_active_pane_g1

0x5ba7,	// (0x0005854d) tabs_2_active_pane_t1

0xed63,	// (0x00061709) bg_passive_tab_pane_cp1_ParamLimits

0xed63,	// (0x00061709) bg_passive_tab_pane_cp1

0x5b9f,	// (0x00058545) tabs_2_passive_pane_g1

0x5ba7,	// (0x0005854d) tabs_2_passive_pane_t1

0x5bb9,	// (0x0005855f) bg_active_tab_pane_cp4

0x5bc7,	// (0x0005856d) tabs_2_long_active_pane_t1

0x5bda,	// (0x00058580) bg_passive_tab_pane_cp4

0x6ad2,	// (0x00059478) list_single_midp_graphic_pane_g4_ParamLimits

0x5bb9,	// (0x0005855f) bg_active_tab_pane_cp5

0x5be6,	// (0x0005858c) tabs_3_long_active_pane_t1

0x5bda,	// (0x00058580) bg_passive_tab_pane_cp5

0x6ad2,	// (0x00059478) list_single_midp_graphic_pane_g4

0xed63,	// (0x00061709) bg_popup_window_pane_cp13_ParamLimits

0xed63,	// (0x00061709) bg_popup_window_pane_cp13

0x32ee,	// (0x00055c94) listscroll_popup_fast_pane_ParamLimits

0x32ee,	// (0x00055c94) listscroll_popup_fast_pane

0x32fd,	// (0x00055ca3) grid_popup_fast_pane_ParamLimits

0x32fd,	// (0x00055ca3) grid_popup_fast_pane

0x330f,	// (0x00055cb5) scroll_pane_cp9_ParamLimits

0x330f,	// (0x00055cb5) scroll_pane_cp9

0xc025,	// (0x0005e9cb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc025,	// (0x0005e9cb) list_single_graphic_hl_pane_t1_cp2

0x3333,	// (0x00055cd9) input_focus_pane_cp20_ParamLimits

0x3333,	// (0x00055cd9) input_focus_pane_cp20

0x3341,	// (0x00055ce7) query_popup_data_pane_t1_ParamLimits

0x3341,	// (0x00055ce7) query_popup_data_pane_t1

0x3354,	// (0x00055cfa) query_popup_data_pane_t2_ParamLimits

0x3354,	// (0x00055cfa) query_popup_data_pane_t2

0x339a,	// (0x00055d40) query_popup_data_pane_t3_ParamLimits

0x339a,	// (0x00055d40) query_popup_data_pane_t3

0x33db,	// (0x00055d81) query_popup_data_pane_t4_ParamLimits

0x33db,	// (0x00055d81) query_popup_data_pane_t4

0x3417,	// (0x00055dbd) query_popup_data_pane_t5_ParamLimits

0x3417,	// (0x00055dbd) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0006202c) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0006202c) query_popup_data_pane_t

0xf40b,	// (0x00061db1) bg_set_opt_pane_g1

0xf413,	// (0x00061db9) bg_set_opt_pane_g2

0xf41b,	// (0x00061dc1) bg_set_opt_pane_g3

0xf423,	// (0x00061dc9) bg_set_opt_pane_g4

0xf42b,	// (0x00061dd1) bg_set_opt_pane_g5

0xf433,	// (0x00061dd9) bg_set_opt_pane_g6

0xf43b,	// (0x00061de1) bg_set_opt_pane_g7

0xf443,	// (0x00061de9) bg_set_opt_pane_g8

0xf44b,	// (0x00061df1) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00062037) bg_set_opt_pane_g

0x60c8,	// (0x00058a6e) control_top_pane_stacon_ParamLimits

0x60c8,	// (0x00058a6e) control_top_pane_stacon

0x611b,	// (0x00058ac1) signal_pane_stacon_ParamLimits

0x611b,	// (0x00058ac1) signal_pane_stacon

0x83eb,	// (0x0005ad91) stacon_top_pane_g1_ParamLimits

0x83eb,	// (0x0005ad91) stacon_top_pane_g1

0x6140,	// (0x00058ae6) title_pane_stacon_ParamLimits

0x6140,	// (0x00058ae6) title_pane_stacon

0x616a,	// (0x00058b10) uni_indicator_pane_stacon_ParamLimits

0x616a,	// (0x00058b10) uni_indicator_pane_stacon

0x617f,	// (0x00058b25) battery_pane_stacon_ParamLimits

0x617f,	// (0x00058b25) battery_pane_stacon

0x61c3,	// (0x00058b69) control_bottom_pane_stacon_ParamLimits

0x61c3,	// (0x00058b69) control_bottom_pane_stacon

0x61e6,	// (0x00058b8c) navi_pane_stacon_ParamLimits

0x61e6,	// (0x00058b8c) navi_pane_stacon

0x840d,	// (0x0005adb3) stacon_bottom_pane_g1_ParamLimits

0x840d,	// (0x0005adb3) stacon_bottom_pane_g1

0x5bf8,	// (0x0005859e) aid_levels_signal_lsc_ParamLimits

0x5bf8,	// (0x0005859e) aid_levels_signal_lsc

0x5c0f,	// (0x000585b5) signal_pane_stacon_g1_ParamLimits

0x5c0f,	// (0x000585b5) signal_pane_stacon_g1

0x5c23,	// (0x000585c9) signal_pane_stacon_g2_ParamLimits

0x5c23,	// (0x000585c9) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0006204a) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0006204a) signal_pane_stacon_g

0x5c58,	// (0x000585fe) title_pane_stacon_t1_ParamLimits

0x5c58,	// (0x000585fe) title_pane_stacon_t1

0x346f,	// (0x00055e15) uni_indicator_pane_stacon_g1

0x3479,	// (0x00055e1f) uni_indicator_pane_stacon_g2

0x345b,	// (0x00055e01) uni_indicator_pane_stacon_g3

0x3465,	// (0x00055e0b) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00062056) uni_indicator_pane_stacon_g

0x5c7d,	// (0x00058623) control_top_pane_stacon_g1

0x5c85,	// (0x0005862b) control_top_pane_stacon_t1_ParamLimits

0x5c85,	// (0x0005862b) control_top_pane_stacon_t1

0x5cbc,	// (0x00058662) aid_levels_battery_lsc_ParamLimits

0x5cbc,	// (0x00058662) aid_levels_battery_lsc

0x5cd4,	// (0x0005867a) battery_pane_stacon_g1_ParamLimits

0x5cd4,	// (0x0005867a) battery_pane_stacon_g1

0x5ce7,	// (0x0005868d) battery_pane_stacon_g2_ParamLimits

0x5ce7,	// (0x0005868d) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0006205f) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0006205f) battery_pane_stacon_g

0x5d25,	// (0x000586cb) navi_icon_pane_stacon

0x5d39,	// (0x000586df) navi_navi_pane_stacon

0x5d25,	// (0x000586cb) navi_text_pane_stacon

0x5c7d,	// (0x00058623) control_bottom_pane_stacon_g1

0x5d4f,	// (0x000586f5) control_bottom_pane_stacon_t1_ParamLimits

0x5d4f,	// (0x000586f5) control_bottom_pane_stacon_t1

0x5d86,	// (0x0005872c) grid_app_pane_ParamLimits

0x5d86,	// (0x0005872c) grid_app_pane

0x5da8,	// (0x0005874e) scroll_pane_cp15_ParamLimits

0x5da8,	// (0x0005874e) scroll_pane_cp15

0x5dbb,	// (0x00058761) cell_app_pane_ParamLimits

0x5dbb,	// (0x00058761) cell_app_pane

0x5de7,	// (0x0005878d) cell_app_pane_g1_ParamLimits

0x5de7,	// (0x0005878d) cell_app_pane_g1

0x349d,	// (0x00055e43) cell_app_pane_g2_ParamLimits

0x349d,	// (0x00055e43) cell_app_pane_g2

0x0001,

0xf6be,	// (0x00062064) cell_app_pane_g_ParamLimits

0xf6be,	// (0x00062064) cell_app_pane_g

0x5e0b,	// (0x000587b1) cell_app_pane_t1_ParamLimits

0x5e0b,	// (0x000587b1) cell_app_pane_t1

0x34a9,	// (0x00055e4f) grid_highlight_pane_ParamLimits

0x34a9,	// (0x00055e4f) grid_highlight_pane

0xf40b,	// (0x00061db1) cell_highlight_pane_g1

0xf413,	// (0x00061db9) cell_highlight_pane_g2

0xf41b,	// (0x00061dc1) cell_highlight_pane_g3

0xf423,	// (0x00061dc9) cell_highlight_pane_g4

0xf42b,	// (0x00061dd1) cell_highlight_pane_g5

0xf433,	// (0x00061dd9) cell_highlight_pane_g6

0xf43b,	// (0x00061de1) cell_highlight_pane_g7

0xf443,	// (0x00061de9) cell_highlight_pane_g8

0xf44b,	// (0x00061df1) cell_highlight_pane_g9

0xed0b,	// (0x000616b1) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00062012) cell_highlight_pane_g

0x34ba,	// (0x00055e60) bg_scroll_pane

0x5e35,	// (0x000587db) scroll_handle_pane

0x3501,	// (0x00055ea7) scroll_bg_pane_g1

0x3516,	// (0x00055ebc) scroll_bg_pane_g2

0x352e,	// (0x00055ed4) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00062069) scroll_bg_pane_g

0x3543,	// (0x00055ee9) scroll_handle_focus_pane_ParamLimits

0x3543,	// (0x00055ee9) scroll_handle_focus_pane

0x3501,	// (0x00055ea7) scroll_handle_pane_g1

0x3550,	// (0x00055ef6) scroll_handle_pane_g2

0x352e,	// (0x00055ed4) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00062070) scroll_handle_pane_g

0xf49a,	// (0x00061e40) bg_popup_sub_pane_cp21_ParamLimits

0xf49a,	// (0x00061e40) bg_popup_sub_pane_cp21

0x3564,	// (0x00055f0a) popup_fep_japan_predictive_window_t1_ParamLimits

0x3564,	// (0x00055f0a) popup_fep_japan_predictive_window_t1

0x357b,	// (0x00055f21) popup_fep_japan_predictive_window_t2_ParamLimits

0x357b,	// (0x00055f21) popup_fep_japan_predictive_window_t2

0x35ae,	// (0x00055f54) popup_fep_japan_predictive_window_t3_ParamLimits

0x35ae,	// (0x00055f54) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00062077) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00062077) popup_fep_japan_predictive_window_t

0xed15,	// (0x000616bb) bg_popup_sub_pane_cp23

0x35e5,	// (0x00055f8b) listscroll_japin_cand_pane

0x35ed,	// (0x00055f93) popup_fep_japan_candidate_window_t1

0x35fb,	// (0x00055fa1) candidate_pane_ParamLimits

0x35fb,	// (0x00055fa1) candidate_pane

0x360d,	// (0x00055fb3) scroll_pane_cp30

0x3617,	// (0x00055fbd) list_single_popup_jap_candidate_pane_ParamLimits

0x3617,	// (0x00055fbd) list_single_popup_jap_candidate_pane

0xed15,	// (0x000616bb) list_highlight_pane_cp30

0x362b,	// (0x00055fd1) list_single_popup_jap_candidate_pane_t1

0x5e5e,	// (0x00058804) level_1_signal

0x5e6b,	// (0x00058811) level_2_signal

0x5e78,	// (0x0005881e) level_3_signal

0x5e85,	// (0x0005882b) level_4_signal

0x5e92,	// (0x00058838) level_5_signal

0x5e9f,	// (0x00058845) level_6_signal

0x5eac,	// (0x00058852) level_7_signal

0x5e5e,	// (0x00058804) level_1_battery

0x5e6b,	// (0x00058811) level_2_battery

0x5e78,	// (0x0005881e) level_3_battery

0x5e85,	// (0x0005882b) level_4_battery

0x5e92,	// (0x00058838) level_5_battery

0x5e9f,	// (0x00058845) level_6_battery

0x5eac,	// (0x00058852) level_7_battery

0x3652,	// (0x00055ff8) list_menu_pane_ParamLimits

0x3652,	// (0x00055ff8) list_menu_pane

0x3668,	// (0x0005600e) scroll_pane_cp25_ParamLimits

0x3668,	// (0x0005600e) scroll_pane_cp25

0x3681,	// (0x00056027) list_double2_graphic_pane_cp2_ParamLimits

0x3681,	// (0x00056027) list_double2_graphic_pane_cp2

0x3681,	// (0x00056027) list_double2_large_graphic_pane_cp2_ParamLimits

0x3681,	// (0x00056027) list_double2_large_graphic_pane_cp2

0x3681,	// (0x00056027) list_double2_pane_cp2_ParamLimits

0x3681,	// (0x00056027) list_double2_pane_cp2

0x3681,	// (0x00056027) list_double_graphic_pane_cp2_ParamLimits

0x3681,	// (0x00056027) list_double_graphic_pane_cp2

0x3681,	// (0x00056027) list_double_large_graphic_pane_cp2_ParamLimits

0x3681,	// (0x00056027) list_double_large_graphic_pane_cp2

0x3681,	// (0x00056027) list_double_number_pane_cp2_ParamLimits

0x3681,	// (0x00056027) list_double_number_pane_cp2

0x3681,	// (0x00056027) list_double_pane_cp2_ParamLimits

0x3681,	// (0x00056027) list_double_pane_cp2

0x5eee,	// (0x00058894) list_single_2graphic_pane_cp2_ParamLimits

0x5eee,	// (0x00058894) list_single_2graphic_pane_cp2

0x5eee,	// (0x00058894) list_single_graphic_heading_pane_cp2_ParamLimits

0x5eee,	// (0x00058894) list_single_graphic_heading_pane_cp2

0x5eee,	// (0x00058894) list_single_graphic_pane_cp2_ParamLimits

0x5eee,	// (0x00058894) list_single_graphic_pane_cp2

0x5eee,	// (0x00058894) list_single_heading_pane_cp2_ParamLimits

0x5eee,	// (0x00058894) list_single_heading_pane_cp2

0x3691,	// (0x00056037) list_single_large_graphic_pane_cp2_ParamLimits

0x3691,	// (0x00056037) list_single_large_graphic_pane_cp2

0x5eee,	// (0x00058894) list_single_number_heading_pane_cp2_ParamLimits

0x5eee,	// (0x00058894) list_single_number_heading_pane_cp2

0x5eee,	// (0x00058894) list_single_number_pane_cp2_ParamLimits

0x5eee,	// (0x00058894) list_single_number_pane_cp2

0x5f0b,	// (0x000588b1) list_single_pane_cp2_ParamLimits

0x5f0b,	// (0x000588b1) list_single_pane_cp2

0x36aa,	// (0x00056050) bg_popup_sub_pane_cp22

0x5fe7,	// (0x0005898d) popup_side_volume_key_window_g1

0x6011,	// (0x000589b7) popup_side_volume_key_window_t1

0x602f,	// (0x000589d5) volume_small_pane_cp1

0xee96,	// (0x0006183c) bg_popup_sub_pane_cp24_ParamLimits

0xee96,	// (0x0006183c) bg_popup_sub_pane_cp24

0x8248,	// (0x0005abee) fep_china_uni_candidate_pane_ParamLimits

0x8248,	// (0x0005abee) fep_china_uni_candidate_pane

0x825c,	// (0x0005ac02) fep_china_uni_entry_pane

0x826c,	// (0x0005ac12) popup_fep_china_uni_window_g1

0x8288,	// (0x0005ac2e) fep_china_uni_entry_pane_g1

0x8292,	// (0x0005ac38) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x000620a8) fep_china_uni_entry_pane_g

0x829c,	// (0x0005ac42) fep_entry_item_pane

0x82a6,	// (0x0005ac4c) fep_candidate_item_pane

0x82ae,	// (0x0005ac54) fep_china_uni_candidate_pane_g1

0x82b8,	// (0x0005ac5e) fep_china_uni_candidate_pane_g2

0x82c0,	// (0x0005ac66) fep_china_uni_candidate_pane_g3

0x82c8,	// (0x0005ac6e) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x000620ad) fep_china_uni_candidate_pane_g

0xed0b,	// (0x000616b1) fep_entry_item_pane_g1

0x82d2,	// (0x0005ac78) fep_entry_item_pane_t1_ParamLimits

0x82d2,	// (0x0005ac78) fep_entry_item_pane_t1

0x82e8,	// (0x0005ac8e) fep_candidate_item_pane_t1_ParamLimits

0x82e8,	// (0x0005ac8e) fep_candidate_item_pane_t1

0x82fd,	// (0x0005aca3) fep_candidate_item_pane_t2_ParamLimits

0x82fd,	// (0x0005aca3) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x000620b6) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x000620b6) fep_candidate_item_pane_t

0xed63,	// (0x00061709) list_highlight_pane_cp31_ParamLimits

0xed63,	// (0x00061709) list_highlight_pane_cp31

0x830f,	// (0x0005acb5) level_1_signal_lsc

0x8318,	// (0x0005acbe) level_2_signal_lsc

0x8321,	// (0x0005acc7) level_3_signal_lsc

0x832a,	// (0x0005acd0) level_4_signal_lsc

0x8333,	// (0x0005acd9) level_5_signal_lsc

0x833c,	// (0x0005ace2) level_6_signal_lsc

0x8345,	// (0x0005aceb) level_7_signal_lsc

0x8345,	// (0x0005aceb) level_1_battery_lsc

0x834e,	// (0x0005acf4) level_2_battery_lsc

0x8357,	// (0x0005acfd) level_3_battery_lsc

0x8360,	// (0x0005ad06) level_4_battery_lsc

0x8369,	// (0x0005ad0f) level_5_battery_lsc

0x8372,	// (0x0005ad18) level_6_battery_lsc

0x830f,	// (0x0005acb5) level_7_battery_lsc

0x837b,	// (0x0005ad21) scroll_handle_focus_pane_g1

0x8384,	// (0x0005ad2a) scroll_handle_focus_pane_g2

0x838d,	// (0x0005ad33) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x000620bb) scroll_handle_focus_pane_g

0x6037,	// (0x000589dd) list_single_2graphic_pane_g1_ParamLimits

0x6037,	// (0x000589dd) list_single_2graphic_pane_g1

0x558e,	// (0x00057f34) list_single_2graphic_pane_g2_ParamLimits

0x558e,	// (0x00057f34) list_single_2graphic_pane_g2

0x54df,	// (0x00057e85) list_single_2graphic_pane_g3_ParamLimits

0x54df,	// (0x00057e85) list_single_2graphic_pane_g3

0x6043,	// (0x000589e9) list_single_2graphic_pane_g4_ParamLimits

0x6043,	// (0x000589e9) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x000620c2) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x000620c2) list_single_2graphic_pane_g

0x6054,	// (0x000589fa) list_single_2graphic_pane_t1_ParamLimits

0x6054,	// (0x000589fa) list_single_2graphic_pane_t1

0x6082,	// (0x00058a28) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6082,	// (0x00058a28) list_double2_graphic_large_graphic_pane_g1

0x57c3,	// (0x00058169) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x57c3,	// (0x00058169) list_double2_graphic_large_graphic_pane_g2

0x56fb,	// (0x000580a1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x56fb,	// (0x000580a1) list_double2_graphic_large_graphic_pane_g3

0x6094,	// (0x00058a3a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6094,	// (0x00058a3a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x000620cb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x000620cb) list_double2_graphic_large_graphic_pane_g

0x60a0,	// (0x00058a46) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x60a0,	// (0x00058a46) list_double2_graphic_large_graphic_pane_t1

0x60b6,	// (0x00058a5c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x60b6,	// (0x00058a5c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x000620d4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x000620d4) list_double2_graphic_large_graphic_pane_t

0x84d0,	// (0x0005ae76) popup_fast_swap_window_ParamLimits

0x84d0,	// (0x0005ae76) popup_fast_swap_window

0x84ee,	// (0x0005ae94) popup_side_volume_key_window

0x850c,	// (0x0005aeb2) stacon_top_pane

0x8516,	// (0x0005aebc) status_pane_ParamLimits

0x8516,	// (0x0005aebc) status_pane

0x8524,	// (0x0005aeca) status_small_pane

0xed15,	// (0x000616bb) control_pane

0xed15,	// (0x000616bb) stacon_bottom_pane

0xf396,	// (0x00061d3c) scroll_pane_cp121

0xf38d,	// (0x00061d33) set_content_pane

0x8396,	// (0x0005ad3c) bg_active_tab_pane_g1_cp1

0x839f,	// (0x0005ad45) bg_active_tab_pane_g2_cp1

0x83a8,	// (0x0005ad4e) bg_active_tab_pane_g3_cp1

0x8396,	// (0x0005ad3c) bg_passive_tab_pane_g1_cp1

0x839f,	// (0x0005ad45) bg_passive_tab_pane_g2_cp1

0x83a8,	// (0x0005ad4e) bg_passive_tab_pane_g3_cp1

0x83b1,	// (0x0005ad57) bg_active_tab_pane_g1_cp2

0x839f,	// (0x0005ad45) bg_active_tab_pane_g2_cp2

0x83ba,	// (0x0005ad60) bg_active_tab_pane_g3_cp2

0x83b1,	// (0x0005ad57) bg_passive_tab_pane_g1_cp2

0x839f,	// (0x0005ad45) bg_passive_tab_pane_g2_cp2

0x83ba,	// (0x0005ad60) bg_passive_tab_pane_g3_cp2

0x83c3,	// (0x0005ad69) bg_active_tab_pane_g1_cp3

0x839f,	// (0x0005ad45) bg_active_tab_pane_g2_cp3

0x83cc,	// (0x0005ad72) bg_active_tab_pane_g3_cp3

0x83c3,	// (0x0005ad69) bg_passive_tab_pane_g1_cp3

0x839f,	// (0x0005ad45) bg_passive_tab_pane_g2_cp3

0x83cc,	// (0x0005ad72) bg_passive_tab_pane_g3_cp3

0x83d5,	// (0x0005ad7b) bg_active_tab_pane_g1_cp4

0x839f,	// (0x0005ad45) bg_active_tab_pane_g2_cp4

0x83e0,	// (0x0005ad86) bg_active_tab_pane_g3_cp4

0x83d5,	// (0x0005ad7b) bg_passive_tab_pane_g1_cp4

0x839f,	// (0x0005ad45) bg_passive_tab_pane_g2_cp4

0x83e0,	// (0x0005ad86) bg_passive_tab_pane_g3_cp4

0x8429,	// (0x0005adcf) bg_active_tab_pane_g1_cp5

0x839f,	// (0x0005ad45) bg_active_tab_pane_g2_cp5

0x8432,	// (0x0005add8) bg_active_tab_pane_g3_cp5

0x8429,	// (0x0005adcf) bg_passive_tab_pane_g1_cp5

0x839f,	// (0x0005ad45) bg_passive_tab_pane_g2_cp5

0x8432,	// (0x0005add8) bg_passive_tab_pane_g3_cp5

0x843b,	// (0x0005ade1) list_set_graphic_pane_ParamLimits

0x843b,	// (0x0005ade1) list_set_graphic_pane

0xed15,	// (0x000616bb) bg_set_opt_pane_cp4

0x8451,	// (0x0005adf7) list_set_graphic_pane_g1_ParamLimits

0x8451,	// (0x0005adf7) list_set_graphic_pane_g1

0x845d,	// (0x0005ae03) list_set_graphic_pane_g2_ParamLimits

0x845d,	// (0x0005ae03) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x000620d9) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x000620d9) list_set_graphic_pane_g

0x0009,

0xfaaf,	// (0x00062455) volume_small_pane_cp_g

0x8481,	// (0x0005ae27) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8481,	// (0x0005ae27) list_double2_large_graphic_pane_g1_cp2

0x848f,	// (0x0005ae35) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x848f,	// (0x0005ae35) list_double2_large_graphic_pane_g2_cp2

0x84a0,	// (0x0005ae46) list_double2_large_graphic_pane_g3_cp2

0x84a8,	// (0x0005ae4e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x84a8,	// (0x0005ae4e) list_double2_large_graphic_pane_t1_cp2

0x84be,	// (0x0005ae64) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x84be,	// (0x0005ae64) list_double2_large_graphic_pane_t2_cp2

0xa279,	// (0x0005cc1f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa279,	// (0x0005cc1f) list_double_large_graphic_pane_g1_cp2

0xa28c,	// (0x0005cc32) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa28c,	// (0x0005cc32) list_double_large_graphic_pane_g2_cp2

0x8633,	// (0x0005afd9) list_double_large_graphic_pane_g3_cp2

0xa29d,	// (0x0005cc43) list_double_large_graphic_pane_g4_cp

0xa2a5,	// (0x0005cc4b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa2a5,	// (0x0005cc4b) list_double_large_graphic_pane_t1_cp2

0xa2bc,	// (0x0005cc62) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa2bc,	// (0x0005cc62) list_double_large_graphic_pane_t2_cp2

0x852f,	// (0x0005aed5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x852f,	// (0x0005aed5) list_double2_graphic_pane_g1_cp2

0x853d,	// (0x0005aee3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x853d,	// (0x0005aee3) list_double2_graphic_pane_g2_cp2

0x854e,	// (0x0005aef4) list_double2_graphic_pane_g3_cp2

0x8558,	// (0x0005aefe) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8558,	// (0x0005aefe) list_double2_graphic_pane_t1_cp2

0x856e,	// (0x0005af14) list_double2_graphic_pane_t2_cp2_ParamLimits

0x856e,	// (0x0005af14) list_double2_graphic_pane_t2_cp2

0x823c,	// (0x0005abe2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x823c,	// (0x0005abe2) list_single_number_heading_pane_g1_cp2

0x8580,	// (0x0005af26) list_single_number_heading_pane_g2_cp2

0x8588,	// (0x0005af2e) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8588,	// (0x0005af2e) list_single_number_heading_pane_t1_cp2

0x859e,	// (0x0005af44) list_single_number_heading_pane_t2_cp2_ParamLimits

0x859e,	// (0x0005af44) list_single_number_heading_pane_t2_cp2

0x85b2,	// (0x0005af58) list_single_number_heading_pane_t3_cp2_ParamLimits

0x85b2,	// (0x0005af58) list_single_number_heading_pane_t3_cp2

0x823c,	// (0x0005abe2) list_single_heading_pane_g1_cp2_ParamLimits

0x823c,	// (0x0005abe2) list_single_heading_pane_g1_cp2

0x8580,	// (0x0005af26) list_single_heading_pane_g2_cp2

0x8588,	// (0x0005af2e) list_single_heading_pane_t1_cp2_ParamLimits

0x8588,	// (0x0005af2e) list_single_heading_pane_t1_cp2

0xa073,	// (0x0005ca19) list_single_heading_pane_t2_cp2_ParamLimits

0xa073,	// (0x0005ca19) list_single_heading_pane_t2_cp2

0x9fbb,	// (0x0005c961) list_double_graphic_pane_g1_cp2_ParamLimits

0x9fbb,	// (0x0005c961) list_double_graphic_pane_g1_cp2

0x9fc7,	// (0x0005c96d) list_double_graphic_pane_g2_cp2_ParamLimits

0x9fc7,	// (0x0005c96d) list_double_graphic_pane_g2_cp2

0x9fd6,	// (0x0005c97c) list_double_graphic_pane_g3_cp2

0x9fde,	// (0x0005c984) list_double_graphic_pane_t1_cp2_ParamLimits

0x9fde,	// (0x0005c984) list_double_graphic_pane_t1_cp2

0x9ff4,	// (0x0005c99a) list_double_graphic_pane_t2_cp2_ParamLimits

0x9ff4,	// (0x0005c99a) list_double_graphic_pane_t2_cp2

0x8627,	// (0x0005afcd) list_double_number_pane_g1_cp2_ParamLimits

0x8627,	// (0x0005afcd) list_double_number_pane_g1_cp2

0x8633,	// (0x0005afd9) list_double_number_pane_g2_cp2

0x9f7f,	// (0x0005c925) list_double_number_pane_t1_cp2_ParamLimits

0x9f7f,	// (0x0005c925) list_double_number_pane_t1_cp2

0x9f93,	// (0x0005c939) list_double_number_pane_t2_cp2_ParamLimits

0x9f93,	// (0x0005c939) list_double_number_pane_t2_cp2

0x9fa9,	// (0x0005c94f) list_double_number_pane_t3_cp2_ParamLimits

0x9fa9,	// (0x0005c94f) list_double_number_pane_t3_cp2

0x9e68,	// (0x0005c80e) list_single_graphic_pane_g1_cp2_ParamLimits

0x9e68,	// (0x0005c80e) list_single_graphic_pane_g1_cp2

0x8698,	// (0x0005b03e) list_single_graphic_pane_g2_cp2_ParamLimits

0x8698,	// (0x0005b03e) list_single_graphic_pane_g2_cp2

0x86a4,	// (0x0005b04a) list_single_graphic_pane_g3_cp2

0x9e3e,	// (0x0005c7e4) list_single_graphic_pane_t1_cp2_ParamLimits

0x9e3e,	// (0x0005c7e4) list_single_graphic_pane_t1_cp2

0x8698,	// (0x0005b03e) list_single_number_pane_g1_cp2_ParamLimits

0x8698,	// (0x0005b03e) list_single_number_pane_g1_cp2

0x86a4,	// (0x0005b04a) list_single_number_pane_g2_cp2

0x9e3e,	// (0x0005c7e4) list_single_number_pane_t1_cp2_ParamLimits

0x9e3e,	// (0x0005c7e4) list_single_number_pane_t1_cp2

0x9e54,	// (0x0005c7fa) list_single_number_pane_t2_cp2_ParamLimits

0x9e54,	// (0x0005c7fa) list_single_number_pane_t2_cp2

0x848f,	// (0x0005ae35) list_double2_pane_g1_cp2_ParamLimits

0x848f,	// (0x0005ae35) list_double2_pane_g1_cp2

0x84a0,	// (0x0005ae46) list_double2_pane_g2_cp2

0x85ff,	// (0x0005afa5) list_double2_pane_t1_cp2_ParamLimits

0x85ff,	// (0x0005afa5) list_double2_pane_t1_cp2

0x8615,	// (0x0005afbb) list_double2_pane_t2_cp2_ParamLimits

0x8615,	// (0x0005afbb) list_double2_pane_t2_cp2

0x8627,	// (0x0005afcd) list_double_pane_g1_cp2_ParamLimits

0x8627,	// (0x0005afcd) list_double_pane_g1_cp2

0x8633,	// (0x0005afd9) list_double_pane_g2_cp2

0x863b,	// (0x0005afe1) list_double_pane_t1_cp2_ParamLimits

0x863b,	// (0x0005afe1) list_double_pane_t1_cp2

0x8651,	// (0x0005aff7) list_double_pane_t2_cp2_ParamLimits

0x8651,	// (0x0005aff7) list_double_pane_t2_cp2

0x8688,	// (0x0005b02e) list_single_pane_cp2_g3

0x8698,	// (0x0005b03e) list_single_pane_g1_cp2_ParamLimits

0x8698,	// (0x0005b03e) list_single_pane_g1_cp2

0x86a4,	// (0x0005b04a) list_single_pane_g2_cp2

0x86ac,	// (0x0005b052) list_single_pane_t1_cp2_ParamLimits

0x86ac,	// (0x0005b052) list_single_pane_t1_cp2

0x86c4,	// (0x0005b06a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x86c4,	// (0x0005b06a) list_single_large_graphic_pane_g1_cp2

0x86d2,	// (0x0005b078) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x86d2,	// (0x0005b078) list_single_large_graphic_pane_g2_cp2

0x86de,	// (0x0005b084) list_single_large_graphic_pane_g3_cp2

0x86e6,	// (0x0005b08c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x86e6,	// (0x0005b08c) list_single_large_graphic_pane_g4_cp1

0x8700,	// (0x0005b0a6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8700,	// (0x0005b0a6) list_single_large_graphic_pane_t1_cp2

0x9e08,	// (0x0005c7ae) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9e08,	// (0x0005c7ae) list_single_graphic_heading_pane_g1_cp2

0x9dd5,	// (0x0005c77b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9dd5,	// (0x0005c77b) list_single_graphic_heading_pane_g4_cp2

0x86a4,	// (0x0005b04a) list_single_graphic_heading_pane_g5_cp2

0x9e14,	// (0x0005c7ba) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9e14,	// (0x0005c7ba) list_single_graphic_heading_pane_t1_cp2

0x9e2a,	// (0x0005c7d0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9e2a,	// (0x0005c7d0) list_single_graphic_heading_pane_t2_cp2

0x9dc9,	// (0x0005c76f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9dc9,	// (0x0005c76f) list_single_2graphic_pane_g1_cp2

0x9dd5,	// (0x0005c77b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9dd5,	// (0x0005c77b) list_single_2graphic_pane_g2_cp2

0x86a4,	// (0x0005b04a) list_single_2graphic_pane_g3_cp2

0x9de6,	// (0x0005c78c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9de6,	// (0x0005c78c) list_single_2graphic_pane_g4_cp2

0x9df2,	// (0x0005c798) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9df2,	// (0x0005c798) list_single_2graphic_pane_t1_cp2

0xed0b,	// (0x000616b1) list_highlight_pane_g10_cp1

0x97de,	// (0x0005c184) list_highlight_pane_g1_cp1

0x97e6,	// (0x0005c18c) list_highlight_pane_g2_cp1

0x97ee,	// (0x0005c194) list_highlight_pane_g3_cp1

0x97f6,	// (0x0005c19c) list_highlight_pane_g4_cp1

0x97fe,	// (0x0005c1a4) list_highlight_pane_g5_cp1

0x9806,	// (0x0005c1ac) list_highlight_pane_g6_cp1

0x980e,	// (0x0005c1b4) list_highlight_pane_g7_cp1

0x9816,	// (0x0005c1bc) list_highlight_pane_g8_cp1

0x981e,	// (0x0005c1c4) list_highlight_pane_g9_cp1

0x96fe,	// (0x0005c0a4) form_field_slider_pane_t3

0x970c,	// (0x0005c0b2) form_field_slider_pane_t4

0x971a,	// (0x0005c0c0) slider_form_pane_ParamLimits

0x971a,	// (0x0005c0c0) slider_form_pane

0xed15,	// (0x000616bb) control_abbreviations

0xed15,	// (0x000616bb) control_conventions

0xed15,	// (0x000616bb) control_definitions

0xed15,	// (0x000616bb) format_table_attribute

0xa0c9,	// (0x0005ca6f) bg_popup_preview_window_pane_g9

0xed15,	// (0x000616bb) format_table_data2

0xed15,	// (0x000616bb) format_table_data3

0xed15,	// (0x000616bb) format_table_data_example

0x0008,

0xed15,	// (0x000616bb) intro_purpose

0xf8cf,	// (0x00062275) bg_popup_preview_window_pane_g

0xed15,	// (0x000616bb) texts_category

0xed15,	// (0x000616bb) texts_graphics

0x8716,	// (0x0005b0bc) text_digital

0x8725,	// (0x0005b0cb) text_primary

0x8734,	// (0x0005b0da) text_primary_small

0x8743,	// (0x0005b0e9) text_secondary

0x8752,	// (0x0005b0f8) text_title

0xa7f6,	// (0x0005d19c) bg_passive_tab_pane_g1_cp3_srt

0x839f,	// (0x0005ad45) bg_passive_tab_pane_g2_cp3_srt

0xa7ff,	// (0x0005d1a5) bg_passive_tab_pane_g3_cp3_srt

0xed63,	// (0x00061709) bg_active_tab_pane_cp3_srt_ParamLimits

0xed63,	// (0x00061709) bg_active_tab_pane_cp3_srt

0xa808,	// (0x0005d1ae) tabs_4_active_pane_srt_g1

0xa810,	// (0x0005d1b6) tabs_4_active_pane_srt_t1_ParamLimits

0xa810,	// (0x0005d1b6) tabs_4_active_pane_srt_t1

0xa7f6,	// (0x0005d19c) bg_active_tab_pane_g1_cp3_copy1

0x839f,	// (0x0005ad45) bg_active_tab_pane_g2_cp3_copy1

0xa7ff,	// (0x0005d1a5) bg_active_tab_pane_g3_cp3_copy1

0xed63,	// (0x00061709) tabs_2_long_active_pane_srt_ParamLimits

0xed63,	// (0x00061709) tabs_2_long_active_pane_srt

0xed63,	// (0x00061709) tabs_2_long_passive_pane_srt_ParamLimits

0xed63,	// (0x00061709) tabs_2_long_passive_pane_srt

0x5bda,	// (0x00058580) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5bda,	// (0x00058580) bg_passive_tab_pane_cp4_srt

0xa503,	// (0x0005cea9) bg_passive_tab_pane_g1_cp4_srt

0x839f,	// (0x0005ad45) bg_passive_tab_pane_g2_cp4_srt

0xa50c,	// (0x0005ceb2) bg_passive_tab_pane_g3_cp4_srt

0x5bb9,	// (0x0005855f) bg_active_tab_pane_cp4_srt_ParamLimits

0x5bb9,	// (0x0005855f) bg_active_tab_pane_cp4_srt

0xa515,	// (0x0005cebb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa515,	// (0x0005cebb) tabs_2_long_active_pane_srt_t1

0xa503,	// (0x0005cea9) bg_active_tab_pane_g1_cp4_srt

0x839f,	// (0x0005ad45) bg_active_tab_pane_g2_cp4_srt

0xa50c,	// (0x0005ceb2) bg_active_tab_pane_g3_cp4_srt

0xee96,	// (0x0006183c) tabs_3_long_active_pane_srt_ParamLimits

0xee96,	// (0x0006183c) tabs_3_long_active_pane_srt

0xee96,	// (0x0006183c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xee96,	// (0x0006183c) tabs_3_long_passive_pane_cp_srt

0xee96,	// (0x0006183c) tabs_3_long_passive_pane_srt_ParamLimits

0xee96,	// (0x0006183c) tabs_3_long_passive_pane_srt

0x5bda,	// (0x00058580) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5bda,	// (0x00058580) bg_passive_tab_pane_cp5_srt

0x8429,	// (0x0005adcf) bg_passive_tab_pane_g1_cp5_srt

0x839f,	// (0x0005ad45) bg_passive_tab_pane_g2_cp5_srt

0x8432,	// (0x0005add8) bg_passive_tab_pane_g3_cp5_srt

0x5bb9,	// (0x0005855f) bg_active_tab_pane_cp5_srt_ParamLimits

0x5bb9,	// (0x0005855f) bg_active_tab_pane_cp5_srt

0xa4f1,	// (0x0005ce97) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa4f1,	// (0x0005ce97) tabs_3_long_active_pane_srt_t1

0x8429,	// (0x0005adcf) bg_active_tab_pane_g1_cp5_srt

0x839f,	// (0x0005ad45) bg_active_tab_pane_g2_cp5_srt

0x8432,	// (0x0005add8) bg_active_tab_pane_g3_cp5_srt

0xa4e3,	// (0x0005ce89) navi_text_pane_srt_t1

0xa4db,	// (0x0005ce81) navi_icon_pane_srt_g1

0x892a,	// (0x0005b2d0) midp_editing_number_pane_srt

0x8761,	// (0x0005b107) midp_ticker_pane_srt

0x8932,	// (0x0005b2d8) midp_ticker_pane_srt_g1

0x893a,	// (0x0005b2e0) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x000620f8) midp_ticker_pane_srt_g

0x8942,	// (0x0005b2e8) midp_ticker_pane_srt_t1

0xa4cc,	// (0x0005ce72) midp_editing_number_pane_t1_copy1

0x8769,	// (0x0005b10f) listscroll_midp_pane

0x8769,	// (0x0005b10f) midp_form_pane

0x87d8,	// (0x0005b17e) midp_info_popup_window_ParamLimits

0x87d8,	// (0x0005b17e) midp_info_popup_window

0xf49a,	// (0x00061e40) bg_popup_sub_pane_cp50_ParamLimits

0xf49a,	// (0x00061e40) bg_popup_sub_pane_cp50

0x9400,	// (0x0005bda6) listscroll_midp_info_pane_ParamLimits

0x9400,	// (0x0005bda6) listscroll_midp_info_pane

0x93e0,	// (0x0005bd86) listscroll_form_midp_pane_ParamLimits

0x93e0,	// (0x0005bd86) listscroll_form_midp_pane

0x93ec,	// (0x0005bd92) scroll_bar_cp050

0x93c0,	// (0x0005bd66) list_midp_pane

0xb2aa,	// (0x0005dc50) signal_pane_g2_cp

0x92fa,	// (0x0005bca0) listscroll_midp_info_pane_t1_ParamLimits

0x92fa,	// (0x0005bca0) listscroll_midp_info_pane_t1

0x9312,	// (0x0005bcb8) listscroll_midp_info_pane_t2_ParamLimits

0x9312,	// (0x0005bcb8) listscroll_midp_info_pane_t2

0x9350,	// (0x0005bcf6) listscroll_midp_info_pane_t3_ParamLimits

0x9350,	// (0x0005bcf6) listscroll_midp_info_pane_t3

0x938a,	// (0x0005bd30) listscroll_midp_info_pane_t4_ParamLimits

0x938a,	// (0x0005bd30) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x000621b0) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x000621b0) listscroll_midp_info_pane_t

0xf4ef,	// (0x00061e95) scroll_pane_cp21

0x9294,	// (0x0005bc3a) form_midp_field_choice_group_pane

0x929d,	// (0x0005bc43) form_midp_field_text_pane

0x92e0,	// (0x0005bc86) form_midp_field_time_pane

0x92e8,	// (0x0005bc8e) form_midp_gauge_slider_pane

0x92f1,	// (0x0005bc97) form_midp_gauge_wait_pane

0xed15,	// (0x000616bb) form_midp_image_pane

0x6bbe,	// (0x00059564) list_single_midp_pane_ParamLimits

0x6bbe,	// (0x00059564) list_single_midp_pane

0x9258,	// (0x0005bbfe) form_midp_field_text_pane_t1

0x904a,	// (0x0005b9f0) input_focus_pane_cp050

0x9283,	// (0x0005bc29) list_midp_form_text_pane

0x9227,	// (0x0005bbcd) form_midp_field_choice_group_pane_t1

0x9235,	// (0x0005bbdb) input_focus_pane_cp051

0x9249,	// (0x0005bbef) list_midp_choice_pane

0xed15,	// (0x000616bb) status_idle_pane

0x920b,	// (0x0005bbb1) form_midp_field_time_pane_t1

0xed0b,	// (0x000616b1) wait_anim_pane_g2_copy1

0x9219,	// (0x0005bbbf) form_midp_field_time_pane_t2

0x0001,

0x8888,	// (0x0005b22e) aid_navinavi_width_2_pane

0xf805,	// (0x000621ab) form_midp_field_time_pane_t

0xed15,	// (0x000616bb) input_focus_pane_cp052

0xed15,	// (0x000616bb) bg_input_focus_pane_cp040

0x91cb,	// (0x0005bb71) form_midp_gauge_slider_pane_t1

0x91d9,	// (0x0005bb7f) form_midp_gauge_slider_pane_t2

0x91e7,	// (0x0005bb8d) form_midp_gauge_slider_pane_t3

0x91f5,	// (0x0005bb9b) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x000621a2) form_midp_gauge_slider_pane_t

0x9203,	// (0x0005bba9) form_midp_slider_pane

0xed63,	// (0x00061709) bg_input_focus_pane_cp041_ParamLimits

0xed63,	// (0x00061709) bg_input_focus_pane_cp041

0x9198,	// (0x0005bb3e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9198,	// (0x0005bb3e) form_midp_gauge_wait_pane_t1

0x91aa,	// (0x0005bb50) form_midp_gauge_wait_pane_t2_ParamLimits

0x91aa,	// (0x0005bb50) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x0006219d) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x0006219d) form_midp_gauge_wait_pane_t

0x91bc,	// (0x0005bb62) form_midp_wait_pane_ParamLimits

0x91bc,	// (0x0005bb62) form_midp_wait_pane

0x9160,	// (0x0005bb06) form_midp_image_pane_g1

0x9169,	// (0x0005bb0f) form_midp_image_pane_t1

0x9178,	// (0x0005bb1e) form_midp_image_pane_t2

0x9187,	// (0x0005bb2d) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x00062196) form_midp_image_pane_t

0x9157,	// (0x0005bafd) list_single_midp_pane_g1

0x3bea,	// (0x00056590) list_single_midp_pane_t1

0x913d,	// (0x0005bae3) list_midp_form_item_pane_ParamLimits

0x913d,	// (0x0005bae3) list_midp_form_item_pane

0x8830,	// (0x0005b1d6) list_midp_form_item_pane_t1

0x883f,	// (0x0005b1e5) midp_ticker_pane_g1

0x884b,	// (0x0005b1f1) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x000620de) midp_ticker_pane_g

0x8857,	// (0x0005b1fd) midp_ticker_pane_t1

0xa739,	// (0x0005d0df) midp_editing_number_pane_t1

0xa717,	// (0x0005d0bd) midp_editing_number_pane

0xa726,	// (0x0005d0cc) midp_ticker_pane

0xa4bc,	// (0x0005ce62) ai_message_heading_pane

0xed15,	// (0x000616bb) bg_popup_window_pane_cp14

0xa4c4,	// (0x0005ce6a) listscroll_ai_message_pane

0xa442,	// (0x0005cde8) ai_message_heading_pane_g1_ParamLimits

0xa442,	// (0x0005cde8) ai_message_heading_pane_g1

0xa44e,	// (0x0005cdf4) ai_message_heading_pane_g2_ParamLimits

0xa44e,	// (0x0005cdf4) ai_message_heading_pane_g2

0xa45c,	// (0x0005ce02) ai_message_heading_pane_g3_ParamLimits

0xa45c,	// (0x0005ce02) ai_message_heading_pane_g3

0xa468,	// (0x0005ce0e) ai_message_heading_pane_g4_ParamLimits

0xa468,	// (0x0005ce0e) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x000622d7) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x000622d7) ai_message_heading_pane_g

0xa474,	// (0x0005ce1a) ai_message_heading_pane_t1_ParamLimits

0xa474,	// (0x0005ce1a) ai_message_heading_pane_t1

0xa48e,	// (0x0005ce34) ai_message_heading_pane_t2_ParamLimits

0xa48e,	// (0x0005ce34) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x000622e0) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x000622e0) ai_message_heading_pane_t

0xa4a2,	// (0x0005ce48) bg_popup_heading_pane_cp1_ParamLimits

0xa4a2,	// (0x0005ce48) bg_popup_heading_pane_cp1

0xa430,	// (0x0005cdd6) list_ai_message_pane_ParamLimits

0xa430,	// (0x0005cdd6) list_ai_message_pane

0xf4ef,	// (0x00061e95) scroll_pane_cp10

0xa3cc,	// (0x0005cd72) list_ai_message_pane_g1

0xa3d4,	// (0x0005cd7a) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x000622b4) list_ai_message_pane_g

0xa3dc,	// (0x0005cd82) list_ai_message_pane_t1_ParamLimits

0xa3dc,	// (0x0005cd82) list_ai_message_pane_t1

0xa3f1,	// (0x0005cd97) list_ai_message_pane_t2_ParamLimits

0xa3f1,	// (0x0005cd97) list_ai_message_pane_t2

0xa406,	// (0x0005cdac) list_ai_message_pane_t3_ParamLimits

0xa406,	// (0x0005cdac) list_ai_message_pane_t3

0xa41b,	// (0x0005cdc1) list_ai_message_pane_t4_ParamLimits

0xa41b,	// (0x0005cdc1) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x000622b9) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x000622b9) list_ai_message_pane_t

0xa3b5,	// (0x0005cd5b) cell_ai_soft_ind_pane_ParamLimits

0xa3b5,	// (0x0005cd5b) cell_ai_soft_ind_pane

0x8869,	// (0x0005b20f) cell_ai_soft_ind_pane_g1_ParamLimits

0x8869,	// (0x0005b20f) cell_ai_soft_ind_pane_g1

0xed15,	// (0x000616bb) grid_highlight_cp1

0x8876,	// (0x0005b21c) text_secondary_cp56_ParamLimits

0x8876,	// (0x0005b21c) text_secondary_cp56

0xa38a,	// (0x0005cd30) example_general_pane_ParamLimits

0xa38a,	// (0x0005cd30) example_general_pane

0xa396,	// (0x0005cd3c) example_parent_pane_g1_ParamLimits

0xa396,	// (0x0005cd3c) example_parent_pane_g1

0xa3a2,	// (0x0005cd48) example_parent_pane_t1_ParamLimits

0xa3a2,	// (0x0005cd48) example_parent_pane_t1

0x680d,	// (0x000591b3) popup_preview_text_window_ParamLimits

0x680d,	// (0x000591b3) popup_preview_text_window

0x8690,	// (0x0005b036) list_single_pane_cp2_g4

0xef72,	// (0x00061918) bg_popup_preview_window_pane_ParamLimits

0xef72,	// (0x00061918) bg_popup_preview_window_pane

0xa0d3,	// (0x0005ca79) popup_preview_text_window_t1_ParamLimits

0xa0d3,	// (0x0005ca79) popup_preview_text_window_t1

0xa0f1,	// (0x0005ca97) popup_preview_text_window_t2_ParamLimits

0xa0f1,	// (0x0005ca97) popup_preview_text_window_t2

0xa13a,	// (0x0005cae0) popup_preview_text_window_t3_ParamLimits

0xa13a,	// (0x0005cae0) popup_preview_text_window_t3

0xa17f,	// (0x0005cb25) popup_preview_text_window_t4_ParamLimits

0xa17f,	// (0x0005cb25) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x00062288) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x00062288) popup_preview_text_window_t

0xa1fd,	// (0x0005cba3) scroll_pane_cp11

0x8fd6,	// (0x0005b97c) bg_popup_preview_window_pane_g1

0xa087,	// (0x0005ca2d) bg_popup_preview_window_pane_g2

0xa091,	// (0x0005ca37) bg_popup_preview_window_pane_g3

0xa09b,	// (0x0005ca41) bg_popup_preview_window_pane_g4

0xa0a5,	// (0x0005ca4b) bg_popup_preview_window_pane_g5

0xa0af,	// (0x0005ca55) bg_popup_preview_window_pane_g6

0xa0b7,	// (0x0005ca5d) bg_popup_preview_window_pane_g7

0xa0bf,	// (0x0005ca65) bg_popup_preview_window_pane_g8

0x4d3d,	// (0x000576e3) aid_popup_width_pane

0x67e9,	// (0x0005918f) popup_midp_note_alarm_window_ParamLimits

0x67e9,	// (0x0005918f) popup_midp_note_alarm_window

0xf3a7,	// (0x00061d4d) data_form_pane_ParamLimits

0x5a54,	// (0x000583fa) form_field_data_pane_g1

0x5a5e,	// (0x00058404) form_field_data_pane_t1_ParamLimits

0xf3b3,	// (0x00061d59) input_focus_pane_ParamLimits

0x3277,	// (0x00055c1d) data_form_wide_pane_ParamLimits

0x3288,	// (0x00055c2e) form_field_data_wide_pane_g1

0x3294,	// (0x00055c3a) form_field_data_wide_pane_t1_ParamLimits

0xf12e,	// (0x00061ad4) input_focus_pane_cp6_ParamLimits

0x5b91,	// (0x00058537) input_popup_find_pane_g1_ParamLimits

0x5b91,	// (0x00058537) input_popup_find_pane_g1

0x5cf8,	// (0x0005869e) aid_navi_side_left_pane

0x5d0d,	// (0x000586b3) aid_navi_side_right_pane

0x98d9,	// (0x0005c27f) bg_popup_window_pane_cp30_ParamLimits

0x98d9,	// (0x0005c27f) bg_popup_window_pane_cp30

0x9953,	// (0x0005c2f9) popup_midp_note_alarm_window_g1_ParamLimits

0x9953,	// (0x0005c2f9) popup_midp_note_alarm_window_g1

0x9983,	// (0x0005c329) popup_midp_note_alarm_window_t1_ParamLimits

0x9983,	// (0x0005c329) popup_midp_note_alarm_window_t1

0x9a24,	// (0x0005c3ca) popup_midp_note_alarm_window_t2_ParamLimits

0x9a24,	// (0x0005c3ca) popup_midp_note_alarm_window_t2

0x9ad2,	// (0x0005c478) popup_midp_note_alarm_window_t3_ParamLimits

0x9ad2,	// (0x0005c478) popup_midp_note_alarm_window_t3

0x9b04,	// (0x0005c4aa) popup_midp_note_alarm_window_t4_ParamLimits

0x9b04,	// (0x0005c4aa) popup_midp_note_alarm_window_t4

0x9b2a,	// (0x0005c4d0) popup_midp_note_alarm_window_t5_ParamLimits

0x9b2a,	// (0x0005c4d0) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x00062225) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x00062225) popup_midp_note_alarm_window_t

0x9bd6,	// (0x0005c57c) wait_bar_pane_cp1_ParamLimits

0x9bd6,	// (0x0005c57c) wait_bar_pane_cp1

0xed15,	// (0x000616bb) wait_anim_pane_copy1

0xed15,	// (0x000616bb) wait_border_pane_copy1

0x95be,	// (0x0005bf64) wait_border_pane_g1_copy1

0x32ae,	// (0x00055c54) form_field_popup_pane_g1

0x5a78,	// (0x0005841e) form_field_popup_pane_t1_ParamLimits

0xf3b3,	// (0x00061d59) input_focus_pane_cp7_ParamLimits

0xf3e1,	// (0x00061d87) list_form_pane_ParamLimits

0x32b6,	// (0x00055c5c) form_field_popup_wide_pane_g1

0x32be,	// (0x00055c64) form_field_popup_wide_pane_t1_ParamLimits

0xf3b3,	// (0x00061d59) input_focus_pane_cp8_ParamLimits

0xf3ed,	// (0x00061d93) list_form_wide_pane_ParamLimits

0xa891,	// (0x0005d237) aid_size_cell_graphic_pane

0x5af7,	// (0x0005849d) data_form_pane_t1_ParamLimits

0x6e4d,	// (0x000597f3) data_form_wide_pane_t1_ParamLimits

0x8b77,	// (0x0005b51d) bg_status_flat_pane

0x516c,	// (0x00057b12) title_pane_t1_ParamLimits

0xed2b,	// (0x000616d1) title_pane_t2_ParamLimits

0xed51,	// (0x000616f7) title_pane_t3_ParamLimits

0xf532,	// (0x00061ed8) title_pane_t_ParamLimits

0x5e5e,	// (0x00058804) level_1_signal_ParamLimits

0x5e6b,	// (0x00058811) level_2_signal_ParamLimits

0x5e78,	// (0x0005881e) level_3_signal_ParamLimits

0x5e85,	// (0x0005882b) level_4_signal_ParamLimits

0x5e92,	// (0x00058838) level_5_signal_ParamLimits

0x5e9f,	// (0x00058845) level_6_signal_ParamLimits

0x5eac,	// (0x00058852) level_7_signal_ParamLimits

0x5e5e,	// (0x00058804) level_1_battery_ParamLimits

0x5e6b,	// (0x00058811) level_2_battery_ParamLimits

0x5e78,	// (0x0005881e) level_3_battery_ParamLimits

0x5e85,	// (0x0005882b) level_4_battery_ParamLimits

0x5e92,	// (0x00058838) level_5_battery_ParamLimits

0x5e9f,	// (0x00058845) level_6_battery_ParamLimits

0x5eac,	// (0x00058852) level_7_battery_ParamLimits

0x97de,	// (0x0005c184) bg_status_flat_pane_g1

0x97e6,	// (0x0005c18c) bg_status_flat_pane_g2

0x97ee,	// (0x0005c194) bg_status_flat_pane_g3

0x97f6,	// (0x0005c19c) bg_status_flat_pane_g4

0x97fe,	// (0x0005c1a4) bg_status_flat_pane_g5

0x9806,	// (0x0005c1ac) bg_status_flat_pane_g6

0x980e,	// (0x0005c1b4) bg_status_flat_pane_g7

0x51dc,	// (0x00057b82) tabs_3_active_pane_t1_ParamLimits

0x51dc,	// (0x00057b82) tabs_3_passive_pane_t1_ParamLimits

0x51f6,	// (0x00057b9c) tabs_4_active_pane_t1_ParamLimits

0x51f6,	// (0x00057b9c) tabs_4_1_passive_pane_t1_ParamLimits

0x5ba7,	// (0x0005854d) tabs_2_active_pane_t1_ParamLimits

0x5ba7,	// (0x0005854d) tabs_2_passive_pane_t1_ParamLimits

0x5bb9,	// (0x0005855f) bg_active_tab_pane_cp4_ParamLimits

0x5bc7,	// (0x0005856d) tabs_2_long_active_pane_t1_ParamLimits

0x5bda,	// (0x00058580) bg_passive_tab_pane_cp4_ParamLimits

0x6b05,	// (0x000594ab) list_single_midp_graphic_pane_t1_ParamLimits

0x5bb9,	// (0x0005855f) bg_active_tab_pane_cp5_ParamLimits

0x5be6,	// (0x0005858c) tabs_3_long_active_pane_t1_ParamLimits

0x5bda,	// (0x00058580) bg_passive_tab_pane_cp5_ParamLimits

0x6b05,	// (0x000594ab) list_single_midp_graphic_pane_t1

0x8b77,	// (0x0005b51d) bg_status_flat_pane_ParamLimits

0x8c42,	// (0x0005b5e8) indicator_pane_cp2_ParamLimits

0x8c42,	// (0x0005b5e8) indicator_pane_cp2

0x8d85,	// (0x0005b72b) navi_pane_srt_ParamLimits

0x8d85,	// (0x0005b72b) navi_pane_srt

0x8da9,	// (0x0005b74f) popup_clock_digital_analogue_window_cp1

0xeda7,	// (0x0006174d) indicator_pane_t1

0x8761,	// (0x0005b107) copy_highlight_pane

0x8761,	// (0x0005b107) cursor_graphics_pane

0x8761,	// (0x0005b107) graphic_within_text_pane

0x8761,	// (0x0005b107) link_highlight_pane

0xa1c0,	// (0x0005cb66) popup_preview_text_window_t5_ParamLimits

0xa1c0,	// (0x0005cb66) popup_preview_text_window_t5

0x8892,	// (0x0005b238) cursor_digital_pane

0x8892,	// (0x0005b238) cursor_primary_pane

0x88a3,	// (0x0005b249) cursor_primary_small_pane

0x88ab,	// (0x0005b251) cursor_secondary_pane

0x88b3,	// (0x0005b259) cursor_title_pane

0x8892,	// (0x0005b238) link_highlight_digital_pane

0x889a,	// (0x0005b240) link_highlight_primary_pane

0x88a3,	// (0x0005b249) link_highlight_primary_small_pane

0x88ab,	// (0x0005b251) link_highlight_secondary_pane

0x88b3,	// (0x0005b259) link_highlight_title_pane

0x8892,	// (0x0005b238) copy_highlight_digital_pane

0x8892,	// (0x0005b238) copy_highlight_primary_pane

0x88a3,	// (0x0005b249) copy_highlight_primary_small_pane

0x88ab,	// (0x0005b251) copy_highlight_secondary_pane

0x88b3,	// (0x0005b259) copy_highlight_title_pane

0x88ab,	// (0x0005b251) graphic_text_digital_pane

0x987c,	// (0x0005c222) graphic_text_primary_pane

0x9885,	// (0x0005c22b) graphic_text_primary_small_pane

0x88a3,	// (0x0005b249) graphic_text_secondary_pane

0x8892,	// (0x0005b238) graphic_text_title_pane

0x88bb,	// (0x0005b261) cursor_primary_pane_g1

0x986e,	// (0x0005c214) cursor_text_primary_t1

0x9856,	// (0x0005c1fc) cursor_primary_small_pane_g1

0x9860,	// (0x0005c206) cursor_text_primary_small_t1

0x983e,	// (0x0005c1e4) cursor_primary_small_pane_g1_copy1

0x9848,	// (0x0005c1ee) cursor_text_primary_small_t1_copy1

0x9826,	// (0x0005c1cc) cursor_text_title_t1

0x9834,	// (0x0005c1da) cursor_title_pane_g1

0x88bb,	// (0x0005b261) cursor_digital_pane_g1

0x88c5,	// (0x0005b26b) cursor_text_digital_t1

0x88d3,	// (0x0005b279) link_highlight_primary_pane_g1

0x97cf,	// (0x0005c175) link_highlight_primary_pane_t1

0x88d3,	// (0x0005b279) link_highlight_primary_small_pane_g1

0x88db,	// (0x0005b281) link_highlight_primary_small_pane_t1

0x88ea,	// (0x0005b290) link_highlight_secondary_pane_g1

0x88f2,	// (0x0005b298) link_highlight_secondary_pane_t1

0x9743,	// (0x0005c0e9) link_highlight_title_pane_g1

0x974b,	// (0x0005c0f1) link_highlight_title_pane_t1

0x972c,	// (0x0005c0d2) link_highlight_digital_pane_g1

0x9734,	// (0x0005c0da) link_highlight_digital_pane_t1

0x95f4,	// (0x0005bf9a) copy_highlight_primary_pane_g1

0x960b,	// (0x0005bfb1) copy_highlight_primary_pane_t1

0x95f4,	// (0x0005bf9a) copy_highlight_primary_small_pane_g1

0x95fc,	// (0x0005bfa2) copy_highlight_primary_small_pane_t1

0x8901,	// (0x0005b2a7) copy_highlight_secondary_pane_g1

0x8909,	// (0x0005b2af) copy_highlight_secondary_pane_t1

0x95dd,	// (0x0005bf83) copy_highlight_title_pane_g1

0x95e5,	// (0x0005bf8b) copy_highlight_title_pane_t1

0x95f4,	// (0x0005bf9a) copy_highlight_digital_pane_g1

0xaa63,	// (0x0005d409) copy_highlight_digital_pane_t1

0xa9b7,	// (0x0005d35d) graphic_text_primary_pane_g1

0xaa47,	// (0x0005d3ed) graphic_text_primary_pane_t1

0xaa55,	// (0x0005d3fb) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x00062354) graphic_text_primary_pane_t

0xaa23,	// (0x0005d3c9) graphic_text_primary_small_pane_g1

0xaa2b,	// (0x0005d3d1) graphic_text_primary_small_pane_t1

0xaa39,	// (0x0005d3df) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x0006234f) graphic_text_primary_small_pane_t

0xa9ff,	// (0x0005d3a5) graphic_text_secondary_pane_g1

0xaa07,	// (0x0005d3ad) graphic_text_secondary_pane_t1

0xaa15,	// (0x0005d3bb) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x0006234a) graphic_text_secondary_pane_t

0xa9db,	// (0x0005d381) graphic_text_title_pane_g1

0xa9e3,	// (0x0005d389) graphic_text_title_pane_t1

0xa9f1,	// (0x0005d397) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x00062345) graphic_text_title_pane_t

0xa9b7,	// (0x0005d35d) graphic_text_digital_pane_g1

0xa9bf,	// (0x0005d365) graphic_text_digital_pane_t1

0xa9cd,	// (0x0005d373) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x00062340) graphic_text_digital_pane_t

0xed63,	// (0x00061709) navi_icon_pane_srt_ParamLimits

0xed63,	// (0x00061709) navi_icon_pane_srt

0xed15,	// (0x000616bb) navi_midp_pane_srt

0xed15,	// (0x000616bb) navi_navi_pane_srt

0xed63,	// (0x00061709) navi_text_pane_srt_ParamLimits

0xed63,	// (0x00061709) navi_text_pane_srt

0xa982,	// (0x0005d328) navi_navi_icon_text_pane_srt

0xa98a,	// (0x0005d330) navi_navi_pane_srt_g1_ParamLimits

0xa98a,	// (0x0005d330) navi_navi_pane_srt_g1

0xa99c,	// (0x0005d342) navi_navi_pane_srt_g2_ParamLimits

0xa99c,	// (0x0005d342) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x0006233b) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x0006233b) navi_navi_pane_srt_g

0xa9ae,	// (0x0005d354) navi_navi_tabs_pane_srt

0xa982,	// (0x0005d328) navi_navi_text_pane_srt

0xa982,	// (0x0005d328) navi_navi_volume_pane_srt

0xa973,	// (0x0005d319) navi_navi_text_pane_srt_t1

0x6f48,	// (0x000598ee) navi_navi_volume_pane_srt_g1

0x6f50,	// (0x000598f6) volume_small_pane_srt_ParamLimits

0x6f50,	// (0x000598f6) volume_small_pane_srt

0x6209,	// (0x00058baf) volume_small_pane_srt_g1_ParamLimits

0x6209,	// (0x00058baf) volume_small_pane_srt_g1

0x6219,	// (0x00058bbf) volume_small_pane_srt_g2_ParamLimits

0x6219,	// (0x00058bbf) volume_small_pane_srt_g2

0x622a,	// (0x00058bd0) volume_small_pane_srt_g3_ParamLimits

0x622a,	// (0x00058bd0) volume_small_pane_srt_g3

0x623b,	// (0x00058be1) volume_small_pane_srt_g4_ParamLimits

0x623b,	// (0x00058be1) volume_small_pane_srt_g4

0x624c,	// (0x00058bf2) volume_small_pane_srt_g5_ParamLimits

0x624c,	// (0x00058bf2) volume_small_pane_srt_g5

0x625d,	// (0x00058c03) volume_small_pane_srt_g6_ParamLimits

0x625d,	// (0x00058c03) volume_small_pane_srt_g6

0x626e,	// (0x00058c14) volume_small_pane_srt_g7_ParamLimits

0x626e,	// (0x00058c14) volume_small_pane_srt_g7

0x627f,	// (0x00058c25) volume_small_pane_srt_g8_ParamLimits

0x627f,	// (0x00058c25) volume_small_pane_srt_g8

0x6290,	// (0x00058c36) volume_small_pane_srt_g9_ParamLimits

0x6290,	// (0x00058c36) volume_small_pane_srt_g9

0x62a1,	// (0x00058c47) volume_small_pane_srt_g10_ParamLimits

0x62a1,	// (0x00058c47) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x000620e3) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x000620e3) volume_small_pane_srt_g

0xf027,	// (0x000619cd) query_popup_data_pane_cp2

0xa959,	// (0x0005d2ff) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa959,	// (0x0005d2ff) navi_navi_icon_text_pane_srt_t1

0x987c,	// (0x0005c222) navi_tabs_2_long_pane_srt

0x987c,	// (0x0005c222) navi_tabs_2_pane_srt

0x987c,	// (0x0005c222) navi_tabs_3_long_pane_srt

0x987c,	// (0x0005c222) navi_tabs_3_pane_srt

0x987c,	// (0x0005c222) navi_tabs_4_pane_srt

0x6f28,	// (0x000598ce) tabs_2_active_pane_srt_ParamLimits

0x6f28,	// (0x000598ce) tabs_2_active_pane_srt

0x6f38,	// (0x000598de) tabs_2_passive_pane_srt_ParamLimits

0x6f38,	// (0x000598de) tabs_2_passive_pane_srt

0x8a88,	// (0x0005b42e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8a88,	// (0x0005b42e) bg_passive_tab_pane_cp1_srt

0xa925,	// (0x0005d2cb) bg_passive_tab_pane_g1_cp1_srt

0x839f,	// (0x0005ad45) bg_passive_tab_pane_g2_cp1_srt

0xa92e,	// (0x0005d2d4) bg_passive_tab_pane_g3_cp1_srt

0xed63,	// (0x00061709) bg_active_tab_pane_cp1_srt_ParamLimits

0xed63,	// (0x00061709) bg_active_tab_pane_cp1_srt

0xa937,	// (0x0005d2dd) tabs_2_active_pane_srt_g1

0xa93f,	// (0x0005d2e5) tabs_2_active_pane_srt_t1_ParamLimits

0xa93f,	// (0x0005d2e5) tabs_2_active_pane_srt_t1

0xa925,	// (0x0005d2cb) bg_active_tab_pane_g1_cp1_srt

0x839f,	// (0x0005ad45) bg_active_tab_pane_g2_cp1_srt

0xa92e,	// (0x0005d2d4) bg_active_tab_pane_g3_cp1_srt

0x6ef5,	// (0x0005989b) tabs_3_active_pane_srt_ParamLimits

0x6ef5,	// (0x0005989b) tabs_3_active_pane_srt

0x6f06,	// (0x000598ac) tabs_3_passive_pane_cp_srt_ParamLimits

0x6f06,	// (0x000598ac) tabs_3_passive_pane_cp_srt

0x6f17,	// (0x000598bd) tabs_3_passive_pane_srt_ParamLimits

0x6f17,	// (0x000598bd) tabs_3_passive_pane_srt

0x8a88,	// (0x0005b42e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8a88,	// (0x0005b42e) bg_passive_tab_pane_cp2_srt

0x8918,	// (0x0005b2be) bg_passive_tab_pane_g1_cp2_srt

0x839f,	// (0x0005ad45) bg_passive_tab_pane_g2_cp2_srt

0x8921,	// (0x0005b2c7) bg_passive_tab_pane_g3_cp2_srt

0xed63,	// (0x00061709) bg_active_tab_pane_cp2_srt_ParamLimits

0xed63,	// (0x00061709) bg_active_tab_pane_cp2_srt

0xa90b,	// (0x0005d2b1) tabs_3_active_pane_srt_g1

0xa913,	// (0x0005d2b9) tabs_3_active_pane_srt_t1_ParamLimits

0xa913,	// (0x0005d2b9) tabs_3_active_pane_srt_t1

0x8918,	// (0x0005b2be) bg_active_tab_pane_g1_cp2_srt

0x839f,	// (0x0005ad45) bg_active_tab_pane_g2_cp2_srt

0x8921,	// (0x0005b2c7) bg_active_tab_pane_g3_cp2_srt

0x6ead,	// (0x00059853) tabs_4_active_pane_srt_ParamLimits

0x6ead,	// (0x00059853) tabs_4_active_pane_srt

0x6ebf,	// (0x00059865) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6ebf,	// (0x00059865) tabs_4_passive_pane_cp2_srt

0x6424,	// (0x00058dca) aid_size_cell_toolbar

0x5bda,	// (0x00058580) main_idle_act_pane_ParamLimits

0x660f,	// (0x00058fb5) popup_large_graphic_colour_window_ParamLimits

0x69b6,	// (0x0005935c) popup_toolbar_window_ParamLimits

0x69b6,	// (0x0005935c) popup_toolbar_window

0x9c06,	// (0x0005c5ac) list_single_graphic_2heading_pane_ParamLimits

0x9c06,	// (0x0005c5ac) list_single_graphic_2heading_pane

0x3483,	// (0x00055e29) aid_size_cell_apps_grid_lsc_pane

0x3495,	// (0x00055e3b) aid_size_cell_apps_grid_prt_pane

0x8a88,	// (0x0005b42e) bg_wml_button_pane_cp1_ParamLimits

0x8a88,	// (0x0005b42e) bg_wml_button_pane_cp1

0x9258,	// (0x0005bbfe) form_midp_field_text_pane_t1_ParamLimits

0x904a,	// (0x0005b9f0) input_focus_pane_cp050_ParamLimits

0x9283,	// (0x0005bc29) list_midp_form_text_pane_ParamLimits

0x9235,	// (0x0005bbdb) input_focus_pane_cp051_ParamLimits

0x9249,	// (0x0005bbef) list_midp_choice_pane_ParamLimits

0x9103,	// (0x0005baa9) list_single_2graphic_pane_cp3_ParamLimits

0x9103,	// (0x0005baa9) list_single_2graphic_pane_cp3

0x9119,	// (0x0005babf) list_single_midp_graphic_pane_ParamLimits

0x9119,	// (0x0005babf) list_single_midp_graphic_pane

0x4ca9,	// (0x0005764f) list_single_graphic_2heading_pane_g1_ParamLimits

0x4ca9,	// (0x0005764f) list_single_graphic_2heading_pane_g1

0x4cb5,	// (0x0005765b) list_single_graphic_2heading_pane_g4_ParamLimits

0x4cb5,	// (0x0005765b) list_single_graphic_2heading_pane_g4

0x4cc1,	// (0x00057667) list_single_graphic_2heading_pane_g5_ParamLimits

0x4cc1,	// (0x00057667) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00062136) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00062136) list_single_graphic_2heading_pane_g

0x4ccd,	// (0x00057673) list_single_graphic_2heading_pane_t1_ParamLimits

0x4ccd,	// (0x00057673) list_single_graphic_2heading_pane_t1

0x4ce1,	// (0x00057687) list_single_graphic_2heading_pane_t2_ParamLimits

0x4ce1,	// (0x00057687) list_single_graphic_2heading_pane_t2

0x4cfd,	// (0x000576a3) list_single_graphic_2heading_pane_t3_ParamLimits

0x4cfd,	// (0x000576a3) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0006213d) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0006213d) list_single_graphic_2heading_pane_t

0x8efc,	// (0x0005b8a2) bg_popup_sub_pane_cp2

0x8f26,	// (0x0005b8cc) grid_toobar_pane

0x6a75,	// (0x0005941b) cell_toolbar_pane_ParamLimits

0x6a75,	// (0x0005941b) cell_toolbar_pane

0x8f7a,	// (0x0005b920) cell_toolbar_pane_g1_ParamLimits

0x8f7a,	// (0x0005b920) cell_toolbar_pane_g1

0x8f8e,	// (0x0005b934) cell_toolbar_pane_g2_ParamLimits

0x8f8e,	// (0x0005b934) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x0006214b) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x0006214b) cell_toolbar_pane_g

0x8fb0,	// (0x0005b956) grid_highlight_pane_cp2_ParamLimits

0x8fb0,	// (0x0005b956) grid_highlight_pane_cp2

0x8fca,	// (0x0005b970) toolbar_button_pane

0x8fd6,	// (0x0005b97c) toolbar_button_pane_g1

0x8fde,	// (0x0005b984) toolbar_button_pane_g2

0x8fe6,	// (0x0005b98c) toolbar_button_pane_g3

0x8fee,	// (0x0005b994) toolbar_button_pane_g4

0x8ff6,	// (0x0005b99c) toolbar_button_pane_g5

0x8ffe,	// (0x0005b9a4) toolbar_button_pane_g6

0x9006,	// (0x0005b9ac) toolbar_button_pane_g7

0x900e,	// (0x0005b9b4) toolbar_button_pane_g8

0x9016,	// (0x0005b9bc) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00062150) toolbar_button_pane_g

0x6aad,	// (0x00059453) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6aad,	// (0x00059453) list_single_2graphic_pane_g1_cp3

0x6ab9,	// (0x0005945f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6ab9,	// (0x0005945f) list_single_2graphic_pane_g2_cp3

0x6aca,	// (0x00059470) list_single_2graphic_pane_g3_cp3

0x6ad2,	// (0x00059478) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6ad2,	// (0x00059478) list_single_2graphic_pane_g4_cp3

0x6ade,	// (0x00059484) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6ade,	// (0x00059484) list_single_2graphic_pane_t1_cp3

0x6af9,	// (0x0005949f) list_single_midp_graphic_pane_g2_ParamLimits

0x6af9,	// (0x0005949f) list_single_midp_graphic_pane_g2

0x4c99,	// (0x0005763f) aid_zoom_text_primary

0x4ca1,	// (0x00057647) aid_zoom_text_secondary

0x89d2,	// (0x0005b378) status_small_pane_g7_ParamLimits

0x89d2,	// (0x0005b378) status_small_pane_g7

0x89f5,	// (0x0005b39b) status_small_pane_t1_ParamLimits

0x5147,	// (0x00057aed) title_pane_g2

0x0003,

0xf529,	// (0x00061ecf) title_pane_g

0x53b0,	// (0x00057d56) aid_size_cell_colour_1_pane_ParamLimits

0x53b0,	// (0x00057d56) aid_size_cell_colour_1_pane

0x53c4,	// (0x00057d6a) aid_size_cell_colour_2_pane_ParamLimits

0x53c4,	// (0x00057d6a) aid_size_cell_colour_2_pane

0x53d8,	// (0x00057d7e) aid_size_cell_colour_3_pane_ParamLimits

0x53d8,	// (0x00057d7e) aid_size_cell_colour_3_pane

0x53ec,	// (0x00057d92) aid_size_cell_colour_4_pane_ParamLimits

0x53ec,	// (0x00057d92) aid_size_cell_colour_4_pane

0x5c34,	// (0x000585da) title_pane_stacon_g1_ParamLimits

0x5c34,	// (0x000585da) title_pane_stacon_g1

0x9662,	// (0x0005c008) popup_note_wait_window_g3_ParamLimits

0x9662,	// (0x0005c008) popup_note_wait_window_g3

0x96d9,	// (0x0005c07f) popup_note_wait_window_t5_ParamLimits

0x96d9,	// (0x0005c07f) popup_note_wait_window_t5

0xed15,	// (0x000616bb) main_feb_china_hwr_fs_writing_pane

0x64d4,	// (0x00058e7a) popup_feb_china_hwr_fs_window_ParamLimits

0x64d4,	// (0x00058e7a) popup_feb_china_hwr_fs_window

0x6b1b,	// (0x000594c1) aid_size_cell_hwr_fs_ParamLimits

0x6b1b,	// (0x000594c1) aid_size_cell_hwr_fs

0x904a,	// (0x0005b9f0) bg_popup_sub_pane_cp3_ParamLimits

0x904a,	// (0x0005b9f0) bg_popup_sub_pane_cp3

0x6b30,	// (0x000594d6) grid_hwr_fs_pane_ParamLimits

0x6b30,	// (0x000594d6) grid_hwr_fs_pane

0x6b48,	// (0x000594ee) linegrid_hwr_fs_pane_ParamLimits

0x6b48,	// (0x000594ee) linegrid_hwr_fs_pane

0x6b58,	// (0x000594fe) cell_hwr_fs_pane_ParamLimits

0x6b58,	// (0x000594fe) cell_hwr_fs_pane

0x9056,	// (0x0005b9fc) linegrid_hwr_fs_pane_g1_ParamLimits

0x9056,	// (0x0005b9fc) linegrid_hwr_fs_pane_g1

0x9062,	// (0x0005ba08) linegrid_hwr_fs_pane_g2_ParamLimits

0x9062,	// (0x0005ba08) linegrid_hwr_fs_pane_g2

0x9074,	// (0x0005ba1a) linegrid_hwr_fs_pane_g3_ParamLimits

0x9074,	// (0x0005ba1a) linegrid_hwr_fs_pane_g3

0x6b7c,	// (0x00059522) linegrid_hwr_fs_pane_g4_ParamLimits

0x6b7c,	// (0x00059522) linegrid_hwr_fs_pane_g4

0x6b9a,	// (0x00059540) linegrid_hwr_fs_pane_g5_ParamLimits

0x6b9a,	// (0x00059540) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x0006217b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x0006217b) linegrid_hwr_fs_pane_g

0x9080,	// (0x0005ba26) cell_hwr_fs_pane_g1_ParamLimits

0x9080,	// (0x0005ba26) cell_hwr_fs_pane_g1

0x8e37,	// (0x0005b7dd) cell_hwr_fs_pane_g2_ParamLimits

0x8e37,	// (0x0005b7dd) cell_hwr_fs_pane_g2

0x9096,	// (0x0005ba3c) cell_hwr_fs_pane_g3_ParamLimits

0x9096,	// (0x0005ba3c) cell_hwr_fs_pane_g3

0x90a3,	// (0x0005ba49) cell_hwr_fs_pane_g4_ParamLimits

0x90a3,	// (0x0005ba49) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x00062186) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x00062186) cell_hwr_fs_pane_g

0x6bb0,	// (0x00059556) cell_hwr_fs_pane_t1

0xed15,	// (0x000616bb) grid_highlight_pane_cp6

0xed15,	// (0x000616bb) main_idle_act2_pane

0xf4d6,	// (0x00061e7c) aid_inside_area_popup_secondary

0x9ed5,	// (0x0005c87b) aid_inside_area_window_primary_ParamLimits

0x9ed5,	// (0x0005c87b) aid_inside_area_window_primary

0xaa72,	// (0x0005d418) ai2_news_ticker_pane

0xaa7a,	// (0x0005d420) aid_size_cell_ai1_link_ParamLimits

0xaa7a,	// (0x0005d420) aid_size_cell_ai1_link

0xaa94,	// (0x0005d43a) popup_ai2_data_window_ParamLimits

0xaa94,	// (0x0005d43a) popup_ai2_data_window

0xaab2,	// (0x0005d458) popup_ai2_link_window_ParamLimits

0xaab2,	// (0x0005d458) popup_ai2_link_window

0x904a,	// (0x0005b9f0) bg_popup_sub_pane_cp4_ParamLimits

0x904a,	// (0x0005b9f0) bg_popup_sub_pane_cp4

0xaac8,	// (0x0005d46e) grid_ai2_link_pane_ParamLimits

0xaac8,	// (0x0005d46e) grid_ai2_link_pane

0xaadf,	// (0x0005d485) popup_ai2_link_window_g1_ParamLimits

0xaadf,	// (0x0005d485) popup_ai2_link_window_g1

0xaaeb,	// (0x0005d491) popup_ai2_link_window_g2_ParamLimits

0xaaeb,	// (0x0005d491) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x00062359) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x00062359) popup_ai2_link_window_g

0xaafc,	// (0x0005d4a2) ai2_mp_button_pane

0xab04,	// (0x0005d4aa) ai2_mp_volume_pane

0x9235,	// (0x0005bbdb) bg_popup_sub_pane_cp5_ParamLimits

0x9235,	// (0x0005bbdb) bg_popup_sub_pane_cp5

0xab0c,	// (0x0005d4b2) heading_ai2_gene_pane_ParamLimits

0xab0c,	// (0x0005d4b2) heading_ai2_gene_pane

0xab18,	// (0x0005d4be) list_ai2_gene_pane_ParamLimits

0xab18,	// (0x0005d4be) list_ai2_gene_pane

0xab60,	// (0x0005d506) cell_ai2_link_pane_ParamLimits

0xab60,	// (0x0005d506) cell_ai2_link_pane

0xab76,	// (0x0005d51c) cell_ai2_link_pane_g1

0xed15,	// (0x000616bb) grid_highlight_pane_cp7

0x6f65,	// (0x0005990b) ai2_mp_volume_pane_g1

0xac49,	// (0x0005d5ef) ai2_mp_volume_pane_g2

0xabbe,	// (0x0005d564) list_ai2_gene_pane_t1

0xac51,	// (0x0005d5f7) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x00062372) ai2_mp_volume_pane_g

0x6f6d,	// (0x00059913) volume_small_pane_cp3

0xac59,	// (0x0005d5ff) aid_size_cell_ai2_button

0xac61,	// (0x0005d607) grid_ai2_button_pane

0xac6a,	// (0x0005d610) cell_ai2_button_pane_ParamLimits

0xac6a,	// (0x0005d610) cell_ai2_button_pane

0xed0b,	// (0x000616b1) cell_ai2_button_pane_g1

0xed15,	// (0x000616bb) grid_highlight_pane_cp8

0xac09,	// (0x0005d5af) ai2_gene_pane_t1_ParamLimits

0xac09,	// (0x0005d5af) ai2_gene_pane_t1

0x641a,	// (0x00058dc0) aid_height_parent_landscape

0xa565,	// (0x0005cf0b) aid_height_set_list

0xa576,	// (0x0005cf1c) aid_size_parent

0xa891,	// (0x0005d237) aid_size_cell_graphic_pane_ParamLimits

0xab28,	// (0x0005d4ce) popup_ai2_data_window_g1_ParamLimits

0xab28,	// (0x0005d4ce) popup_ai2_data_window_g1

0xab34,	// (0x0005d4da) ai2_news_ticker_pane_g1

0xab3c,	// (0x0005d4e2) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x0006235e) ai2_news_ticker_pane_g

0xab44,	// (0x0005d4ea) ai2_news_ticker_pane_t1

0xab52,	// (0x0005d4f8) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x00062363) ai2_news_ticker_pane_t

0xab7f,	// (0x0005d525) heading_ai2_gene_pane_g1

0xab87,	// (0x0005d52d) heading_ai2_gene_pane_t1_ParamLimits

0xab87,	// (0x0005d52d) heading_ai2_gene_pane_t1

0xab9c,	// (0x0005d542) list_highlight_pane_cp6

0xaba4,	// (0x0005d54a) ai2_gene_pane_ParamLimits

0xaba4,	// (0x0005d54a) ai2_gene_pane

0xabcc,	// (0x0005d572) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x00062368) list_ai2_gene_pane_t

0xabda,	// (0x0005d580) list_highlight_pane_cp8_ParamLimits

0xabda,	// (0x0005d580) list_highlight_pane_cp8

0xabeb,	// (0x0005d591) ai2_gene_pane_g1_ParamLimits

0xabeb,	// (0x0005d591) ai2_gene_pane_g1

0xabfd,	// (0x0005d5a3) ai2_gene_pane_g2_ParamLimits

0xabfd,	// (0x0005d5a3) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x0006236d) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x0006236d) ai2_gene_pane_g

0xf349,	// (0x00061cef) scroll_pane_cp12

0x63d7,	// (0x00058d7d) control_pane_t3_ParamLimits

0x63d7,	// (0x00058d7d) control_pane_t3

0x89e6,	// (0x0005b38c) status_small_pane_g8_ParamLimits

0x89e6,	// (0x0005b38c) status_small_pane_g8

0x65d2,	// (0x00058f78) popup_find_window_ParamLimits

0x67ff,	// (0x000591a5) popup_note_image_window_ParamLimits

0x3b1a,	// (0x000564c0) list_double2_graphic_pane_vc_g1_ParamLimits

0x3b1a,	// (0x000564c0) list_double2_graphic_pane_vc_g1

0x8f62,	// (0x0005b908) list_double2_graphic_pane_vc_g2_ParamLimits

0x8f62,	// (0x0005b908) list_double2_graphic_pane_vc_g2

0x8f6e,	// (0x0005b914) list_double2_graphic_pane_vc_g3_ParamLimits

0x8f6e,	// (0x0005b914) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x00062144) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x00062144) list_double2_graphic_pane_vc_g

0x3b26,	// (0x000564cc) list_double2_graphic_pane_vc_t1_ParamLimits

0x3b26,	// (0x000564cc) list_double2_graphic_pane_vc_t1

0x8f62,	// (0x0005b908) list_single_heading_pane_vc_g1_ParamLimits

0x8f62,	// (0x0005b908) list_single_heading_pane_vc_g1

0x8f6e,	// (0x0005b914) list_single_heading_pane_vc_g2_ParamLimits

0x8f6e,	// (0x0005b914) list_single_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x00062165) list_single_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00062165) list_single_heading_pane_vc_g

0x3b3c,	// (0x000564e2) list_single_heading_pane_vc_t1_ParamLimits

0x3b3c,	// (0x000564e2) list_single_heading_pane_vc_t1

0x3b52,	// (0x000564f8) list_single_heading_pane_vc_t2_ParamLimits

0x3b52,	// (0x000564f8) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x0006216a) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x0006216a) list_single_heading_pane_vc_t

0x3b64,	// (0x0005650a) list_setting_number_pane_vc_g1_ParamLimits

0x3b64,	// (0x0005650a) list_setting_number_pane_vc_g1

0x3b70,	// (0x00056516) list_setting_number_pane_vc_g2_ParamLimits

0x3b70,	// (0x00056516) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x0006216f) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x0006216f) list_setting_number_pane_vc_g

0x3b7c,	// (0x00056522) list_setting_number_pane_vc_t1_ParamLimits

0x3b7c,	// (0x00056522) list_setting_number_pane_vc_t1

0x3b90,	// (0x00056536) list_setting_number_pane_vc_t2_ParamLimits

0x3b90,	// (0x00056536) list_setting_number_pane_vc_t2

0x3bac,	// (0x00056552) list_setting_number_pane_vc_t3_ParamLimits

0x3bac,	// (0x00056552) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x00062174) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x00062174) list_setting_number_pane_vc_t

0x3bd8,	// (0x0005657e) set_value_pane_vc_ParamLimits

0x3bd8,	// (0x0005657e) set_value_pane_vc

0x9c06,	// (0x0005c5ac) list_double2_graphic_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_double2_graphic_pane_vc

0x9c06,	// (0x0005c5ac) list_double2_large_graphic_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_double2_large_graphic_pane_vc

0x9c06,	// (0x0005c5ac) list_double2_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_double2_pane_vc

0x9c06,	// (0x0005c5ac) list_double_graphic_heading_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_double_graphic_heading_pane_vc

0x9c06,	// (0x0005c5ac) list_double_graphic_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_double_graphic_pane_vc

0x9c06,	// (0x0005c5ac) list_double_heading_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_double_heading_pane_vc

0x9c1a,	// (0x0005c5c0) list_double_large_graphic_pane_vc_ParamLimits

0x9c1a,	// (0x0005c5c0) list_double_large_graphic_pane_vc

0x9c06,	// (0x0005c5ac) list_double_number_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_double_number_pane_vc

0x9c06,	// (0x0005c5ac) list_double_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_double_pane_vc

0x9c06,	// (0x0005c5ac) list_double_time_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_double_time_pane_vc

0x9c06,	// (0x0005c5ac) list_setting_number_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_setting_number_pane_vc

0x9c06,	// (0x0005c5ac) list_setting_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_setting_pane_vc

0x9c06,	// (0x0005c5ac) list_single_graphic_heading_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_single_graphic_heading_pane_vc

0x9c06,	// (0x0005c5ac) list_single_heading_pane_vc_ParamLimits

0x9c06,	// (0x0005c5ac) list_single_heading_pane_vc

0x9c3c,	// (0x0005c5e2) list_single_number_heading_pane_vc_ParamLimits

0x9c3c,	// (0x0005c5e2) list_single_number_heading_pane_vc

0x3c21,	// (0x000565c7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3c21,	// (0x000565c7) list_double_graphic_heading_pane_vc_g1

0x8f62,	// (0x0005b908) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8f62,	// (0x0005b908) list_double_graphic_heading_pane_vc_g2

0x8f6e,	// (0x0005b914) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x8f6e,	// (0x0005b914) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x00062379) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x00062379) list_double_graphic_heading_pane_vc_g

0x3c2d,	// (0x000565d3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3c2d,	// (0x000565d3) list_double_graphic_heading_pane_vc_t1

0x3c43,	// (0x000565e9) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3c43,	// (0x000565e9) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x00062380) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x00062380) list_double_graphic_heading_pane_vc_t

0x3b64,	// (0x0005650a) list_setting_pane_vc_g1_ParamLimits

0x3b64,	// (0x0005650a) list_setting_pane_vc_g1

0x3b70,	// (0x00056516) list_setting_pane_vc_g2_ParamLimits

0x3b70,	// (0x00056516) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x0006216f) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x0006216f) list_setting_pane_vc_g

0x3c61,	// (0x00056607) list_setting_pane_vc_t1_ParamLimits

0x3c61,	// (0x00056607) list_setting_pane_vc_t1

0x3c7d,	// (0x00056623) list_setting_pane_vc_t2_ParamLimits

0x3c7d,	// (0x00056623) list_setting_pane_vc_t2

0x0001,

0xfa08,	// (0x000623ae) list_setting_pane_vc_t_ParamLimits

0xfa08,	// (0x000623ae) list_setting_pane_vc_t

0x3bd8,	// (0x0005657e) set_value_pane_cp_vc_ParamLimits

0x3bd8,	// (0x0005657e) set_value_pane_cp_vc

0x8f62,	// (0x0005b908) list_single_number_heading_pane_vc_g1_ParamLimits

0x8f62,	// (0x0005b908) list_single_number_heading_pane_vc_g1

0x8f6e,	// (0x0005b914) list_single_number_heading_pane_vc_g2_ParamLimits

0x8f6e,	// (0x0005b914) list_single_number_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x00062165) list_single_number_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00062165) list_single_number_heading_pane_vc_g

0x3c99,	// (0x0005663f) list_single_number_heading_pane_vc_t1_ParamLimits

0x3c99,	// (0x0005663f) list_single_number_heading_pane_vc_t1

0x3a2d,	// (0x000563d3) list_single_number_heading_pane_vc_t2_ParamLimits

0x3a2d,	// (0x000563d3) list_single_number_heading_pane_vc_t2

0x3a3f,	// (0x000563e5) list_single_number_heading_pane_vc_t3_ParamLimits

0x3a3f,	// (0x000563e5) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0d,	// (0x000623b3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x000623b3) list_single_number_heading_pane_vc_t

0x3b1a,	// (0x000564c0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3b1a,	// (0x000564c0) list_single_graphic_heading_pane_vc_g1

0x8f62,	// (0x0005b908) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8f62,	// (0x0005b908) list_single_graphic_heading_pane_vc_g4

0x8f6e,	// (0x0005b914) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8f6e,	// (0x0005b914) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x00062144) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00062144) list_single_graphic_heading_pane_vc_g

0x3caf,	// (0x00056655) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3caf,	// (0x00056655) list_single_graphic_heading_pane_vc_t1

0x3cc5,	// (0x0005666b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3cc5,	// (0x0005666b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa14,	// (0x000623ba) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa14,	// (0x000623ba) list_single_graphic_heading_pane_vc_t

0x8f62,	// (0x0005b908) list_double2_pane_vc_g1_ParamLimits

0x8f62,	// (0x0005b908) list_double2_pane_vc_g1

0x8f6e,	// (0x0005b914) list_double2_pane_vc_g2_ParamLimits

0x8f6e,	// (0x0005b914) list_double2_pane_vc_g2

0x0001,

0xf7bf,	// (0x00062165) list_double2_pane_vc_g_ParamLimits

0xf7bf,	// (0x00062165) list_double2_pane_vc_g

0x3c0b,	// (0x000565b1) list_double2_pane_vc_t1_ParamLimits

0x3c0b,	// (0x000565b1) list_double2_pane_vc_t1

0x9c97,	// (0x0005c63d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9c97,	// (0x0005c63d) list_double2_large_graphic_pane_vc_g1

0x8f62,	// (0x0005b908) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8f62,	// (0x0005b908) list_double2_large_graphic_pane_vc_g2

0x8f6e,	// (0x0005b914) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8f6e,	// (0x0005b914) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa19,	// (0x000623bf) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa19,	// (0x000623bf) list_double2_large_graphic_pane_vc_g

0x3a51,	// (0x000563f7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3a51,	// (0x000563f7) list_double2_large_graphic_pane_vc_t1

0x3cd7,	// (0x0005667d) list_double_time_pane_vc_g1_ParamLimits

0x3cd7,	// (0x0005667d) list_double_time_pane_vc_g1

0x3ce3,	// (0x00056689) list_double_time_pane_vc_g2_ParamLimits

0x3ce3,	// (0x00056689) list_double_time_pane_vc_g2

0x0001,

0xfa20,	// (0x000623c6) list_double_time_pane_vc_g_ParamLimits

0xfa20,	// (0x000623c6) list_double_time_pane_vc_g

0x3cef,	// (0x00056695) list_double_time_pane_vc_t1_ParamLimits

0x3cef,	// (0x00056695) list_double_time_pane_vc_t1

0x3d19,	// (0x000566bf) list_double_time_pane_vc_t2_ParamLimits

0x3d19,	// (0x000566bf) list_double_time_pane_vc_t2

0x3d62,	// (0x00056708) list_double_time_pane_vc_t3_ParamLimits

0x3d62,	// (0x00056708) list_double_time_pane_vc_t3

0x3d74,	// (0x0005671a) list_double_time_pane_vc_t4_ParamLimits

0x3d74,	// (0x0005671a) list_double_time_pane_vc_t4

0x0003,

0xfa25,	// (0x000623cb) list_double_time_pane_vc_t_ParamLimits

0xfa25,	// (0x000623cb) list_double_time_pane_vc_t

0x8f62,	// (0x0005b908) list_double_pane_vc_g1_ParamLimits

0x8f62,	// (0x0005b908) list_double_pane_vc_g1

0x8f6e,	// (0x0005b914) list_double_pane_vc_g2_ParamLimits

0x8f6e,	// (0x0005b914) list_double_pane_vc_g2

0x0001,

0xf7bf,	// (0x00062165) list_double_pane_vc_g_ParamLimits

0xf7bf,	// (0x00062165) list_double_pane_vc_g

0x3d88,	// (0x0005672e) list_double_pane_vc_t1_ParamLimits

0x3d88,	// (0x0005672e) list_double_pane_vc_t1

0x3d9c,	// (0x00056742) list_double_pane_vc_t2_ParamLimits

0x3d9c,	// (0x00056742) list_double_pane_vc_t2

0x0001,

0xfa2e,	// (0x000623d4) list_double_pane_vc_t_ParamLimits

0xfa2e,	// (0x000623d4) list_double_pane_vc_t

0x8f62,	// (0x0005b908) list_double_number_pane_vc_g1_ParamLimits

0x8f62,	// (0x0005b908) list_double_number_pane_vc_g1

0x8f6e,	// (0x0005b914) list_double_number_pane_vc_g2_ParamLimits

0x8f6e,	// (0x0005b914) list_double_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00062165) list_double_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00062165) list_double_number_pane_vc_g

0x3bf9,	// (0x0005659f) list_double_number_pane_vc_t1_ParamLimits

0x3bf9,	// (0x0005659f) list_double_number_pane_vc_t1

0x3db2,	// (0x00056758) list_double_number_pane_vc_t2_ParamLimits

0x3db2,	// (0x00056758) list_double_number_pane_vc_t2

0x3d9c,	// (0x00056742) list_double_number_pane_vc_t3_ParamLimits

0x3d9c,	// (0x00056742) list_double_number_pane_vc_t3

0x0002,

0xfa33,	// (0x000623d9) list_double_number_pane_vc_t_ParamLimits

0xfa33,	// (0x000623d9) list_double_number_pane_vc_t

0x9ca3,	// (0x0005c649) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9ca3,	// (0x0005c649) list_double_large_graphic_pane_vc_g1

0x9cc5,	// (0x0005c66b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9cc5,	// (0x0005c66b) list_double_large_graphic_pane_vc_g2

0x9cd9,	// (0x0005c67f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9cd9,	// (0x0005c67f) list_double_large_graphic_pane_vc_g3

0x3dc6,	// (0x0005676c) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3dc6,	// (0x0005676c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3a,	// (0x000623e0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x000623e0) list_double_large_graphic_pane_vc_g

0x3dd2,	// (0x00056778) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3dd2,	// (0x00056778) list_double_large_graphic_pane_vc_t1

0x3dee,	// (0x00056794) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3dee,	// (0x00056794) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x000623e9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x000623e9) list_double_large_graphic_pane_vc_t

0x8f62,	// (0x0005b908) list_double_heading_pane_vc_g1_ParamLimits

0x8f62,	// (0x0005b908) list_double_heading_pane_vc_g1

0x8f6e,	// (0x0005b914) list_double_heading_pane_vc_g2_ParamLimits

0x8f6e,	// (0x0005b914) list_double_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x00062165) list_double_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00062165) list_double_heading_pane_vc_g

0x3e0e,	// (0x000567b4) list_double_heading_pane_vc_t1_ParamLimits

0x3e0e,	// (0x000567b4) list_double_heading_pane_vc_t1

0x3e20,	// (0x000567c6) list_double_heading_pane_vc_t2_ParamLimits

0x3e20,	// (0x000567c6) list_double_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x000623ee) list_double_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x000623ee) list_double_heading_pane_vc_t

0x3e38,	// (0x000567de) list_double_graphic_pane_vc_g1_ParamLimits

0x3e38,	// (0x000567de) list_double_graphic_pane_vc_g1

0x3e44,	// (0x000567ea) list_double_graphic_pane_vc_g2_ParamLimits

0x3e44,	// (0x000567ea) list_double_graphic_pane_vc_g2

0x8f62,	// (0x0005b908) list_double_graphic_pane_vc_g3_ParamLimits

0x8f62,	// (0x0005b908) list_double_graphic_pane_vc_g3

0x0003,

0xfa4d,	// (0x000623f3) list_double_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x000623f3) list_double_graphic_pane_vc_g

0x3e61,	// (0x00056807) list_double_graphic_pane_vc_t1_ParamLimits

0x3e61,	// (0x00056807) list_double_graphic_pane_vc_t1

0x3e8b,	// (0x00056831) list_double_graphic_pane_vc_t2_ParamLimits

0x3e8b,	// (0x00056831) list_double_graphic_pane_vc_t2

0x0001,

0xfa56,	// (0x000623fc) list_double_graphic_pane_vc_t_ParamLimits

0xfa56,	// (0x000623fc) list_double_graphic_pane_vc_t

0x4d49,	// (0x000576ef) aid_size_cell_fastswap

0x4d51,	// (0x000576f7) aid_size_cell_touch_ParamLimits

0x4d51,	// (0x000576f7) aid_size_cell_touch

0x4fbc,	// (0x00057962) popup_fast_swap_wide_window_ParamLimits

0x4fbc,	// (0x00057962) popup_fast_swap_wide_window

0x50da,	// (0x00057a80) touch_pane_ParamLimits

0x50da,	// (0x00057a80) touch_pane

0xf39f,	// (0x00061d45) button_value_adjust_pane_cp2

0x3220,	// (0x00055bc6) button_value_adjust_pane_cp4

0x3228,	// (0x00055bce) form_field_data_pane_cp2

0x5a28,	// (0x000583ce) form_field_data_wide_pane_cp2

0x34ba,	// (0x00055e60) bg_scroll_pane_ParamLimits

0x5e35,	// (0x000587db) scroll_handle_pane_ParamLimits

0x5e49,	// (0x000587ef) scroll_sc2_down_pane_ParamLimits

0x5e49,	// (0x000587ef) scroll_sc2_down_pane

0x34eb,	// (0x00055e91) scroll_sc2_up_pane_ParamLimits

0x34eb,	// (0x00055e91) scroll_sc2_up_pane

0xb392,	// (0x0005dd38) grid_wheel_folder_pane_g1_ParamLimits

0xb392,	// (0x0005dd38) grid_wheel_folder_pane_g1

0x61a1,	// (0x00058b47) clock_nsta_pane_cp2_ParamLimits

0x61a1,	// (0x00058b47) clock_nsta_pane_cp2

0x8769,	// (0x0005b10f) listscroll_midp_pane_ParamLimits

0x8775,	// (0x0005b11b) midp_canvas_pane

0x8a60,	// (0x0005b406) nsta_clock_indic_pane

0x8a94,	// (0x0005b43a) listscroll_form_pane_vc

0x8a9c,	// (0x0005b442) listscroll_set_pane_vc_ParamLimits

0x8a9c,	// (0x0005b442) listscroll_set_pane_vc

0x8b93,	// (0x0005b539) clock_nsta_pane

0x8c10,	// (0x0005b5b6) indicator_nsta_pane

0x8efc,	// (0x0005b8a2) bg_popup_sub_pane_cp2_ParamLimits

0x8f10,	// (0x0005b8b6) find_pane_cp2_ParamLimits

0x8f10,	// (0x0005b8b6) find_pane_cp2

0x8f26,	// (0x0005b8cc) grid_toobar_pane_ParamLimits

0x901e,	// (0x0005b9c4) list_form_gen_pane_vc_ParamLimits

0x901e,	// (0x0005b9c4) list_form_gen_pane_vc

0x9034,	// (0x0005b9da) scroll_pane_cp8_vc_ParamLimits

0x9034,	// (0x0005b9da) scroll_pane_cp8_vc

0x90b0,	// (0x0005ba56) data_form_wide_pane_vc_ParamLimits

0x90b0,	// (0x0005ba56) data_form_wide_pane_vc

0x90bc,	// (0x0005ba62) form_field_data_wide_pane_vc_g1

0x90c4,	// (0x0005ba6a) form_field_data_wide_pane_vc_t1_ParamLimits

0x90c4,	// (0x0005ba6a) form_field_data_wide_pane_vc_t1

0xf3b3,	// (0x00061d59) input_focus_pane_cp6_vc_ParamLimits

0xf3b3,	// (0x00061d59) input_focus_pane_cp6_vc

0x93c0,	// (0x0005bd66) list_midp_pane_ParamLimits

0x93cc,	// (0x0005bd72) scroll_pane_cp16_ParamLimits

0x93cc,	// (0x0005bd72) scroll_pane_cp16

0x9436,	// (0x0005bddc) button_value_adjust_pane_ParamLimits

0x9436,	// (0x0005bddc) button_value_adjust_pane

0xa588,	// (0x0005cf2e) button_value_adjust_pane_cp6_ParamLimits

0xa588,	// (0x0005cf2e) button_value_adjust_pane_cp6

0xa6d0,	// (0x0005d076) settings_code_pane_cp_ParamLimits

0xa6d0,	// (0x0005d076) settings_code_pane_cp

0xed0b,	// (0x000616b1) cell_touch_pane_g1

0xed0b,	// (0x000616b1) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00062089) cell_touch_pane_g

0xac7c,	// (0x0005d622) cell_touch_pane_cp_ParamLimits

0xac7c,	// (0x0005d622) cell_touch_pane_cp

0xac8c,	// (0x0005d632) cell_touch_pane_ParamLimits

0xac8c,	// (0x0005d632) cell_touch_pane

0xed0b,	// (0x000616b1) scroll_sc2_down_pane_g1

0xed0b,	// (0x000616b1) scroll_sc2_up_pane_g1

0xed15,	// (0x000616bb) bg_set_opt_pane_cp4_vc

0xac9d,	// (0x0005d643) list_set_graphic_pane_vc_g1_ParamLimits

0xac9d,	// (0x0005d643) list_set_graphic_pane_vc_g1

0xaca9,	// (0x0005d64f) list_set_graphic_pane_vc_g2_ParamLimits

0xaca9,	// (0x0005d64f) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x00062385) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x00062385) list_set_graphic_pane_vc_g

0xacb5,	// (0x0005d65b) text_primary_small_cp13_vc_ParamLimits

0xacb5,	// (0x0005d65b) text_primary_small_cp13_vc

0xaccd,	// (0x0005d673) list_set_graphic_pane_vc_ParamLimits

0xaccd,	// (0x0005d673) list_set_graphic_pane_vc

0xed15,	// (0x000616bb) input_focus_pane_cp2_vc

0xed0b,	// (0x000616b1) setting_code_pane_vc_g1

0xed7a,	// (0x00061720) setting_code_pane_vc_t1

0xace0,	// (0x0005d686) set_text_pane_vc_t1_ParamLimits

0xace0,	// (0x0005d686) set_text_pane_vc_t1

0xed15,	// (0x000616bb) input_focus_pane_cp1_vc

0xad01,	// (0x0005d6a7) list_set_text_pane_vc

0xed0b,	// (0x000616b1) setting_text_pane_vc_g1

0xed15,	// (0x000616bb) bg_set_opt_pane_cp2_vc

0xed71,	// (0x00061717) setting_slider_graphic_pane_vc_g1

0xad0b,	// (0x0005d6b1) setting_slider_graphic_pane_vc_t1

0xad1d,	// (0x0005d6c3) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x0006238a) setting_slider_graphic_pane_vc_t

0xad2f,	// (0x0005d6d5) slider_set_pane_cp_vc

0xad39,	// (0x0005d6df) slider_set_pane_vc_g1

0xad42,	// (0x0005d6e8) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x0006238f) slider_set_pane_vc_g

0xf40b,	// (0x00061db1) set_opt_bg_pane_g1_copy1

0xf413,	// (0x00061db9) set_opt_bg_pane_g2_copy1

0xad6e,	// (0x0005d714) set_opt_bg_pane_g3_copy1

0xf423,	// (0x00061dc9) set_opt_bg_pane_g4_copy1

0xf42b,	// (0x00061dd1) set_opt_bg_pane_g5_copy1

0xf433,	// (0x00061dd9) set_opt_bg_pane_g6_copy1

0xad78,	// (0x0005d71e) set_opt_bg_pane_g7_copy1

0xad82,	// (0x0005d728) set_opt_bg_pane_g8_copy1

0xad8c,	// (0x0005d732) set_opt_bg_pane_g9_copy1

0xed15,	// (0x000616bb) bg_set_opt_pane_cp_vc

0xad96,	// (0x0005d73c) setting_slider_pane_vc_t1

0xada5,	// (0x0005d74b) setting_slider_pane_vc_t2

0xadb7,	// (0x0005d75d) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x0006239e) setting_slider_pane_vc_t

0xadc9,	// (0x0005d76f) slider_set_pane_vc

0x6bdd,	// (0x00059583) volume_set_pane_vc_g1

0x6be6,	// (0x0005958c) volume_set_pane_vc_g2

0x6bef,	// (0x00059595) volume_set_pane_vc_g3

0x6bf8,	// (0x0005959e) volume_set_pane_vc_g4

0x6c01,	// (0x000595a7) volume_set_pane_vc_g5

0x6c0a,	// (0x000595b0) volume_set_pane_vc_g6

0x6c13,	// (0x000595b9) volume_set_pane_vc_g7

0x6c1c,	// (0x000595c2) volume_set_pane_vc_g8

0x6c25,	// (0x000595cb) volume_set_pane_vc_g9

0x6c2e,	// (0x000595d4) volume_set_pane_vc_g10

0x0009,

0xf896,	// (0x0006223c) volume_set_pane_vc_g

0xadd3,	// (0x0005d779) volume_set_pane_vc

0xaddd,	// (0x0005d783) button_value_adjust_pane_cp1_vc

0xade7,	// (0x0005d78d) list_highlight_pane_cp2_vc

0xadf0,	// (0x0005d796) list_set_pane_vc_ParamLimits

0xadf0,	// (0x0005d796) list_set_pane_vc

0xae5e,	// (0x0005d804) main_pane_set_vc_t1_ParamLimits

0xae5e,	// (0x0005d804) main_pane_set_vc_t1

0xae73,	// (0x0005d819) main_pane_set_vc_t2_ParamLimits

0xae73,	// (0x0005d819) main_pane_set_vc_t2

0xae85,	// (0x0005d82b) main_pane_set_vc_t3_ParamLimits

0xae85,	// (0x0005d82b) main_pane_set_vc_t3

0xae99,	// (0x0005d83f) main_pane_set_vc_t4_ParamLimits

0xae99,	// (0x0005d83f) main_pane_set_vc_t4

0x0003,

0xf9ff,	// (0x000623a5) main_pane_set_vc_t_ParamLimits

0xf9ff,	// (0x000623a5) main_pane_set_vc_t

0xaead,	// (0x0005d853) setting_code_pane_vc_ParamLimits

0xaead,	// (0x0005d853) setting_code_pane_vc

0xaebe,	// (0x0005d864) setting_slider_graphic_pane_vc

0xaebe,	// (0x0005d864) setting_slider_pane_vc

0xaebe,	// (0x0005d864) setting_text_pane_vc

0xaebe,	// (0x0005d864) setting_volume_pane_vc

0xaec8,	// (0x0005d86e) scroll_pane_cp121_vc

0xf38d,	// (0x00061d33) set_content_pane_vc

0xaed0,	// (0x0005d876) button_value_adjust_pane_g1

0xaed9,	// (0x0005d87f) button_value_adjust_pane_g2

0x0001,

0xfa5b,	// (0x00062401) button_value_adjust_pane_g

0xaee2,	// (0x0005d888) form_field_slider_wide_pane_vc_t1_ParamLimits

0xaee2,	// (0x0005d888) form_field_slider_wide_pane_vc_t1

0xaef4,	// (0x0005d89a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xaef4,	// (0x0005d89a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa60,	// (0x00062406) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa60,	// (0x00062406) form_field_slider_wide_pane_vc_t

0xee96,	// (0x0006183c) input_focus_pane_cp10_vc_ParamLimits

0xee96,	// (0x0006183c) input_focus_pane_cp10_vc

0xaf20,	// (0x0005d8c6) slider_cont_pane_cp1_vc_ParamLimits

0xaf20,	// (0x0005d8c6) slider_cont_pane_cp1_vc

0xaf32,	// (0x0005d8d8) slider_form_pane_g1_cp2

0xad42,	// (0x0005d6e8) slider_form_pane_g2_cp2

0xaf5f,	// (0x0005d905) form_field_slider_pane_vc_t3

0xaf6d,	// (0x0005d913) form_field_slider_pane_vc_t4

0xaf7b,	// (0x0005d921) slider_form_pane_vc_ParamLimits

0xaf7b,	// (0x0005d921) slider_form_pane_vc

0xaf88,	// (0x0005d92e) form_field_slider_pane_vc_t1_ParamLimits

0xaf88,	// (0x0005d92e) form_field_slider_pane_vc_t1

0xaef4,	// (0x0005d89a) form_field_slider_pane_vc_t2_ParamLimits

0xaef4,	// (0x0005d89a) form_field_slider_pane_vc_t2

0x0001,

0xfa72,	// (0x00062418) form_field_slider_pane_vc_t_ParamLimits

0xfa72,	// (0x00062418) form_field_slider_pane_vc_t

0xee96,	// (0x0006183c) input_focus_pane_cp9_vc_ParamLimits

0xee96,	// (0x0006183c) input_focus_pane_cp9_vc

0xaf9e,	// (0x0005d944) slider_cont_pane_vc_ParamLimits

0xaf9e,	// (0x0005d944) slider_cont_pane_vc

0xafb2,	// (0x0005d958) list_form_graphic_pane_cp_vc_ParamLimits

0xafb2,	// (0x0005d958) list_form_graphic_pane_cp_vc

0x90bc,	// (0x0005ba62) form_field_popup_wide_pane_vc_g1

0xafc7,	// (0x0005d96d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xafc7,	// (0x0005d96d) form_field_popup_wide_pane_vc_t1

0xf3b3,	// (0x00061d59) input_focus_pane_cp8_vc_ParamLimits

0xf3b3,	// (0x00061d59) input_focus_pane_cp8_vc

0xb00c,	// (0x0005d9b2) list_form_wide_pane_vc_ParamLimits

0xb00c,	// (0x0005d9b2) list_form_wide_pane_vc

0xb018,	// (0x0005d9be) list_form_graphic_pane_vc_g1

0xb020,	// (0x0005d9c6) list_form_graphic_pane_vc_t1_ParamLimits

0xb020,	// (0x0005d9c6) list_form_graphic_pane_vc_t1

0xed63,	// (0x00061709) list_highlight_pane_cp5_vc_ParamLimits

0xed63,	// (0x00061709) list_highlight_pane_cp5_vc

0xb03c,	// (0x0005d9e2) list_form_graphic_pane_vc_ParamLimits

0xb03c,	// (0x0005d9e2) list_form_graphic_pane_vc

0x90bc,	// (0x0005ba62) form_field_popup_pane_vc_g1

0xb052,	// (0x0005d9f8) form_field_popup_pane_vc_t1_ParamLimits

0xb052,	// (0x0005d9f8) form_field_popup_pane_vc_t1

0xf3b3,	// (0x00061d59) input_focus_pane_cp7_vc_ParamLimits

0xf3b3,	// (0x00061d59) input_focus_pane_cp7_vc

0xb069,	// (0x0005da0f) list_form_pane_vc_ParamLimits

0xb069,	// (0x0005da0f) list_form_pane_vc

0xb075,	// (0x0005da1b) data_form_pane_vc_t1_ParamLimits

0xb075,	// (0x0005da1b) data_form_pane_vc_t1

0xf40b,	// (0x00061db1) input_focus_pane_vc_g1

0xf413,	// (0x00061db9) input_focus_pane_vc_g2

0xf41b,	// (0x00061dc1) input_focus_pane_vc_g3

0xf423,	// (0x00061dc9) input_focus_pane_vc_g4

0xf42b,	// (0x00061dd1) input_focus_pane_vc_g5

0xf433,	// (0x00061dd9) input_focus_pane_vc_g6

0xf43b,	// (0x00061de1) input_focus_pane_vc_g7

0xf443,	// (0x00061de9) input_focus_pane_vc_g8

0xf44b,	// (0x00061df1) input_focus_pane_vc_g9

0xed0b,	// (0x000616b1) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00062012) input_focus_pane_vc_g

0x90b0,	// (0x0005ba56) data_form_pane_vc_ParamLimits

0x90b0,	// (0x0005ba56) data_form_pane_vc

0x90bc,	// (0x0005ba62) form_field_data_pane_vc_g1

0xb092,	// (0x0005da38) form_field_data_pane_vc_t1_ParamLimits

0xb092,	// (0x0005da38) form_field_data_pane_vc_t1

0xf3b3,	// (0x00061d59) input_focus_pane_vc_ParamLimits

0xf3b3,	// (0x00061d59) input_focus_pane_vc

0xb0ac,	// (0x0005da52) button_value_adjust_pane_cp3_vc

0xb0b4,	// (0x0005da5a) button_value_adjust_pane_cp5_vc

0xb0bc,	// (0x0005da62) form_field_data_pane_vc_ParamLimits

0xb0bc,	// (0x0005da62) form_field_data_pane_vc

0xb0d7,	// (0x0005da7d) form_field_data_pane_vc_cp2

0xb0df,	// (0x0005da85) form_field_data_wide_pane_vc_ParamLimits

0xb0df,	// (0x0005da85) form_field_data_wide_pane_vc

0xb0f9,	// (0x0005da9f) form_field_data_wide_pane_vc_cp2

0xb101,	// (0x0005daa7) form_field_popup_pane_vc_ParamLimits

0xb101,	// (0x0005daa7) form_field_popup_pane_vc

0xb11c,	// (0x0005dac2) form_field_popup_wide_pane_vc_ParamLimits

0xb11c,	// (0x0005dac2) form_field_popup_wide_pane_vc

0xb136,	// (0x0005dadc) form_field_slider_pane_vc_ParamLimits

0xb136,	// (0x0005dadc) form_field_slider_pane_vc

0xb149,	// (0x0005daef) form_field_slider_wide_pane_vc_ParamLimits

0xb149,	// (0x0005daef) form_field_slider_wide_pane_vc

0xb15c,	// (0x0005db02) grid_touch_1_pane_ParamLimits

0xb15c,	// (0x0005db02) grid_touch_1_pane

0xb168,	// (0x0005db0e) grid_touch_2_pane_ParamLimits

0xb168,	// (0x0005db0e) grid_touch_2_pane

0x8a2b,	// (0x0005b3d1) touch_pane_g1_ParamLimits

0x8a2b,	// (0x0005b3d1) touch_pane_g1

0xb182,	// (0x0005db28) cell_app_pane_cp_wide_ParamLimits

0xb182,	// (0x0005db28) cell_app_pane_cp_wide

0xb193,	// (0x0005db39) grid_popup_fast_wide_pane_ParamLimits

0xb193,	// (0x0005db39) grid_popup_fast_wide_pane

0xb1a7,	// (0x0005db4d) scroll_pane_cp19_ParamLimits

0xb1a7,	// (0x0005db4d) scroll_pane_cp19

0xed15,	// (0x000616bb) bg_popup_window_pane_cp20

0xb1bb,	// (0x0005db61) listscroll_popup_fast_wide_pane

0xb1c3,	// (0x0005db69) grid_indicator_nsta_pane

0xb1d5,	// (0x0005db7b) clock_nsta_pane_g1

0xb1de,	// (0x0005db84) clock_nsta_pane_t1

0xb1fa,	// (0x0005dba0) cell_indicator_nsta_pane_ParamLimits

0xb1fa,	// (0x0005dba0) cell_indicator_nsta_pane

0xb22f,	// (0x0005dbd5) cell_indicator_nsta_pane_g1

0xb23d,	// (0x0005dbe3) cell_indicator_nsta_pane_g2

0x0001,

0xfa83,	// (0x00062429) cell_indicator_nsta_pane_g

0xb250,	// (0x0005dbf6) clock_nsta_pane_cp

0xb259,	// (0x0005dbff) indicator_nsta_pane_cp

0xb263,	// (0x0005dc09) nsta_clock_indic_pane_g1

0xed9f,	// (0x00061745) grid_indicator_pane

0x35dd,	// (0x00055f83) scroll_pane_cp29

0x60f0,	// (0x00058a96) indicator_nsta_pane_cp2_ParamLimits

0x60f0,	// (0x00058a96) indicator_nsta_pane_cp2

0xed63,	// (0x00061709) main_apps_wheel_pane

0x929d,	// (0x0005bc43) form_midp_field_text_pane_ParamLimits

0x93ec,	// (0x0005bd92) scroll_bar_cp050_ParamLimits

0xb2bc,	// (0x0005dc62) cell_indicator_pane_ParamLimits

0xb2bc,	// (0x0005dc62) cell_indicator_pane

0xb2d4,	// (0x0005dc7a) cell_indicator_pane_g1

0xb2de,	// (0x0005dc84) grid_wheel_folder_pane_ParamLimits

0xb2de,	// (0x0005dc84) grid_wheel_folder_pane

0xb2f2,	// (0x0005dc98) list_wheel_apps_pane_ParamLimits

0xb2f2,	// (0x0005dc98) list_wheel_apps_pane

0xb305,	// (0x0005dcab) main_apps_wheel_pane_g1_ParamLimits

0xb305,	// (0x0005dcab) main_apps_wheel_pane_g1

0xb321,	// (0x0005dcc7) main_apps_wheel_pane_g2_ParamLimits

0xb321,	// (0x0005dcc7) main_apps_wheel_pane_g2

0x0001,

0xfa9f,	// (0x00062445) main_apps_wheel_pane_g_ParamLimits

0xfa9f,	// (0x00062445) main_apps_wheel_pane_g

0xb33d,	// (0x0005dce3) main_apps_wheel_pane_t1_ParamLimits

0xb33d,	// (0x0005dce3) main_apps_wheel_pane_t1

0xb366,	// (0x0005dd0c) list_wheel_apps_pane_g1

0xb36e,	// (0x0005dd14) list_wheel_apps_pane_g2

0xb376,	// (0x0005dd1c) list_wheel_apps_pane_g3

0xb37e,	// (0x0005dd24) list_wheel_apps_pane_g4

0xb388,	// (0x0005dd2e) list_wheel_apps_pane_g5

0x0004,

0xfaa4,	// (0x0006244a) list_wheel_apps_pane_g

0x85d2,	// (0x0005af78) navi_icon_text_pane

0x8ac4,	// (0x0005b46a) aid_fill_nsta

0xb3a9,	// (0x0005dd4f) navi_icon_text_pane_g1

0xb3b5,	// (0x0005dd5b) navi_icon_text_pane_t1

0x8469,	// (0x0005ae0f) list_set_graphic_pane_t1_ParamLimits

0x8469,	// (0x0005ae0f) list_set_graphic_pane_t1

0x9b59,	// (0x0005c4ff) popup_midp_note_alarm_window_t6_ParamLimits

0x9b59,	// (0x0005c4ff) popup_midp_note_alarm_window_t6

0x9b6b,	// (0x0005c511) popup_midp_note_alarm_window_t7_ParamLimits

0x9b6b,	// (0x0005c511) popup_midp_note_alarm_window_t7

0x9b7d,	// (0x0005c523) popup_midp_note_alarm_window_t8_ParamLimits

0x9b7d,	// (0x0005c523) popup_midp_note_alarm_window_t8

0x9b8f,	// (0x0005c535) popup_midp_note_alarm_window_t9_ParamLimits

0x9b8f,	// (0x0005c535) popup_midp_note_alarm_window_t9

0x9ba1,	// (0x0005c547) popup_midp_note_alarm_window_t10_ParamLimits

0x9ba1,	// (0x0005c547) popup_midp_note_alarm_window_t10

0x9bb3,	// (0x0005c559) popup_midp_note_alarm_window_t11_ParamLimits

0x9bb3,	// (0x0005c559) popup_midp_note_alarm_window_t11

0x9bc5,	// (0x0005c56b) scroll_pane_cp17_ParamLimits

0x9bc5,	// (0x0005c56b) scroll_pane_cp17

0x6bdd,	// (0x00059583) volume_small_pane_cp_g1

0x6f76,	// (0x0005991c) volume_small_pane_cp_g2

0x6f7f,	// (0x00059925) volume_small_pane_cp_g3

0x6f88,	// (0x0005992e) volume_small_pane_cp_g4

0x6f91,	// (0x00059937) volume_small_pane_cp_g5

0x6f9a,	// (0x00059940) volume_small_pane_cp_g6

0x6fa3,	// (0x00059949) volume_small_pane_cp_g7

0x6fac,	// (0x00059952) volume_small_pane_cp_g8

0x6fb5,	// (0x0005995b) volume_small_pane_cp_g9

0x6fbe,	// (0x00059964) volume_small_pane_cp_g10

0x883f,	// (0x0005b1e5) midp_ticker_pane_g1_ParamLimits

0x884b,	// (0x0005b1f1) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x000620de) midp_ticker_pane_g_ParamLimits

0x8857,	// (0x0005b1fd) midp_ticker_pane_t1_ParamLimits

0x8ada,	// (0x0005b480) aid_fill_nsta_2

0x93d8,	// (0x0005bd7e) list_form2_midp_pane

0xa717,	// (0x0005d0bd) midp_editing_number_pane_ParamLimits

0xa726,	// (0x0005d0cc) midp_ticker_pane_ParamLimits

0xb3c7,	// (0x0005dd6d) form2_midp_field_pane

0xb3eb,	// (0x0005dd91) scroll_pane_cp51

0xb40b,	// (0x0005ddb1) form2_midp_button_pane_ParamLimits

0xb40b,	// (0x0005ddb1) form2_midp_button_pane

0xb41d,	// (0x0005ddc3) form2_midp_content_pane_ParamLimits

0xb41d,	// (0x0005ddc3) form2_midp_content_pane

0xb437,	// (0x0005dddd) form2_midp_field_choice_group_pane

0xb43f,	// (0x0005dde5) form2_midp_field_pane_g1

0xb447,	// (0x0005dded) form2_midp_field_pane_g2

0xb44f,	// (0x0005ddf5) form2_midp_field_pane_g3

0xb457,	// (0x0005ddfd) form2_midp_field_pane_g4

0x0003,

0xfac9,	// (0x0006246f) form2_midp_field_pane_g

0xb45f,	// (0x0005de05) form2_midp_gauge_slider_pane

0xb467,	// (0x0005de0d) form2_midp_gauge_wait_pane

0xb46f,	// (0x0005de15) form2_midp_image_pane_ParamLimits

0xb46f,	// (0x0005de15) form2_midp_image_pane

0xb48a,	// (0x0005de30) form2_midp_label_pane_ParamLimits

0xb48a,	// (0x0005de30) form2_midp_label_pane

0xb4a9,	// (0x0005de4f) form2_midp_label_pane_cp_ParamLimits

0xb4a9,	// (0x0005de4f) form2_midp_label_pane_cp

0xb4ca,	// (0x0005de70) form2_midp_string_pane_ParamLimits

0xb4ca,	// (0x0005de70) form2_midp_string_pane

0x6fc7,	// (0x0005996d) form2_midp_text_pane_ParamLimits

0x6fc7,	// (0x0005996d) form2_midp_text_pane

0xb4dc,	// (0x0005de82) form2_midp_time_pane

0xb4ec,	// (0x0005de92) input_focus_pane_cp51_ParamLimits

0xb4ec,	// (0x0005de92) input_focus_pane_cp51

0xb504,	// (0x0005deaa) form2_midp_label_pane_t1_ParamLimits

0xb504,	// (0x0005deaa) form2_midp_label_pane_t1

0x6fea,	// (0x00059990) form2_mdip_text_pane_t1_ParamLimits

0x6fea,	// (0x00059990) form2_mdip_text_pane_t1

0x3ea9,	// (0x0005684f) form2_midp_time_pane_t1

0xb552,	// (0x0005def8) form2_midp_gauge_slider_pane_t1

0xb564,	// (0x0005df0a) form2_midp_gauge_slider_pane_t2

0xb576,	// (0x0005df1c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad2,	// (0x00062478) form2_midp_gauge_slider_pane_t

0xb588,	// (0x0005df2e) form2_midp_slider_pane

0xb594,	// (0x0005df3a) form2_midp_gauge_wait_pane_t1

0xb5a2,	// (0x0005df48) form2_midp_wait_pane_ParamLimits

0xb5a2,	// (0x0005df48) form2_midp_wait_pane

0xb5cd,	// (0x0005df73) list_single_2graphic_pane_cp4_ParamLimits

0xb5cd,	// (0x0005df73) list_single_2graphic_pane_cp4

0x9119,	// (0x0005babf) list_single_midp_graphic_pane_cp_ParamLimits

0x9119,	// (0x0005babf) list_single_midp_graphic_pane_cp

0xed15,	// (0x000616bb) list_highlight_pane_cp20

0xb5e6,	// (0x0005df8c) list_single_2graphic_pane_g1_cp4

0xab7f,	// (0x0005d525) list_single_2graphic_pane_g2_cp4

0xb5ee,	// (0x0005df94) list_single_2graphic_pane_t1_cp4

0xed63,	// (0x00061709) list_highlight_pane_cp21

0xb5fd,	// (0x0005dfa3) list_single_midp_graphic_pane_g4_cp

0xb60c,	// (0x0005dfb2) list_single_midp_graphic_pane_t1_cp

0xb621,	// (0x0005dfc7) form2_mdip_string_pane_t1_ParamLimits

0xb621,	// (0x0005dfc7) form2_mdip_string_pane_t1

0xed15,	// (0x000616bb) bg_wml_button_pane_cp2

0xed0b,	// (0x000616b1) form2_midp_image_pane_g1

0x5777,	// (0x0005811d) list_double_large_graphic_pane_g5_ParamLimits

0x5777,	// (0x0005811d) list_double_large_graphic_pane_g5

0x8769,	// (0x0005b10f) midp_form_pane_ParamLimits

0xed63,	// (0x00061709) main_apps_wheel_pane_ParamLimits

0x6827,	// (0x000591cd) popup_preview_window_ParamLimits

0x6827,	// (0x000591cd) popup_preview_window

0x6a0e,	// (0x000593b4) popup_touch_info_window_ParamLimits

0x6a0e,	// (0x000593b4) popup_touch_info_window

0x6a30,	// (0x000593d6) popup_touch_menu_window_ParamLimits

0x6a30,	// (0x000593d6) popup_touch_menu_window

0xed01,	// (0x000616a7) bg_popup_sub_pane_cp6

0xb6bd,	// (0x0005e063) list_touch_menu_pane

0xb6c5,	// (0x0005e06b) list_single_touch_menu_pane_ParamLimits

0xb6c5,	// (0x0005e06b) list_single_touch_menu_pane

0xb6dd,	// (0x0005e083) list_single_touch_menu_pane_t1

0xed63,	// (0x00061709) bg_popup_sub_pane_cp7_ParamLimits

0xed63,	// (0x00061709) bg_popup_sub_pane_cp7

0xb6eb,	// (0x0005e091) heading_sub_pane

0xb6f3,	// (0x0005e099) list_touch_info_pane_ParamLimits

0xb6f3,	// (0x0005e099) list_touch_info_pane

0xb702,	// (0x0005e0a8) list_single_touch_info_pane_ParamLimits

0xb702,	// (0x0005e0a8) list_single_touch_info_pane

0xb714,	// (0x0005e0ba) list_single_touch_info_pane_t1

0xb722,	// (0x0005e0c8) list_single_touch_info_pane_t2

0x0001,

0xfae0,	// (0x00062486) list_single_touch_info_pane_t

0x8761,	// (0x0005b107) bg_popup_heading_pane_cp

0xb730,	// (0x0005e0d6) heading_sub_pane_t1

0x904a,	// (0x0005b9f0) bg_popup_preview_window_pane_cp_ParamLimits

0x904a,	// (0x0005b9f0) bg_popup_preview_window_pane_cp

0xb6eb,	// (0x0005e091) heading_preview_pane

0xb6f3,	// (0x0005e099) list_preview_pane_ParamLimits

0xb6f3,	// (0x0005e099) list_preview_pane

0xb73e,	// (0x0005e0e4) popup_preview_window_g1

0xb702,	// (0x0005e0a8) list_single_preview_pane_ParamLimits

0xb702,	// (0x0005e0a8) list_single_preview_pane

0xb746,	// (0x0005e0ec) list_single_preview_pane_g1

0xb74e,	// (0x0005e0f4) list_single_preview_pane_t1

0xb714,	// (0x0005e0ba) list_single_preview_pane_t2

0x0001,

0xfae5,	// (0x0006248b) list_single_preview_pane_t

0xb75c,	// (0x0005e102) bg_popup_heading_pane_cp2_ParamLimits

0xb75c,	// (0x0005e102) bg_popup_heading_pane_cp2

0xb772,	// (0x0005e118) heading_preview_pane_g1

0xb77a,	// (0x0005e120) heading_preview_pane_t1_ParamLimits

0xb77a,	// (0x0005e120) heading_preview_pane_t1

0xedb6,	// (0x0006175c) soft_indicator_pane_t1_ParamLimits

0xf326,	// (0x00061ccc) scroll_pane_ParamLimits

0x34e2,	// (0x00055e88) scroll_sc2_left_pane

0x34d9,	// (0x00055e7f) scroll_sc2_right_pane

0x3501,	// (0x00055ea7) scroll_bg_pane_g1_ParamLimits

0x3516,	// (0x00055ebc) scroll_bg_pane_g2_ParamLimits

0x352e,	// (0x00055ed4) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00062069) scroll_bg_pane_g_ParamLimits

0x3501,	// (0x00055ea7) scroll_handle_pane_g1_ParamLimits

0x3550,	// (0x00055ef6) scroll_handle_pane_g2_ParamLimits

0x352e,	// (0x00055ed4) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00062070) scroll_handle_pane_g_ParamLimits

0x646c,	// (0x00058e12) popup_choice_list_window_ParamLimits

0x646c,	// (0x00058e12) popup_choice_list_window

0x8f08,	// (0x0005b8ae) choice_list_pane

0x8fa2,	// (0x0005b948) cell_toolbar_pane_t1

0x8fca,	// (0x0005b970) toolbar_button_pane_ParamLimits

0xa252,	// (0x0005cbf8) ai_gene_pane_1_t2_ParamLimits

0xa252,	// (0x0005cbf8) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x00062298) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x00062298) ai_gene_pane_1_t

0xb797,	// (0x0005e13d) scroll_sc2_left_pane_g1

0xb797,	// (0x0005e13d) scroll_sc2_right_pane_g1

0x8a88,	// (0x0005b42e) bg_popup_sub_pane_cp10

0xb7a1,	// (0x0005e147) list_choice_list_pane

0xb7ba,	// (0x0005e160) list_single_choice_list_pane_ParamLimits

0xb7ba,	// (0x0005e160) list_single_choice_list_pane

0xb7d2,	// (0x0005e178) list_single_choice_list_pane_g1

0xf514,	// (0x00061eba) list_single_choice_list_pane_t1_ParamLimits

0xf514,	// (0x00061eba) list_single_choice_list_pane_t1

0xb7da,	// (0x0005e180) choice_list_pane_g1

0xb7e2,	// (0x0005e188) choice_list_pane_t1

0xed01,	// (0x000616a7) input_focus_pane_cp11

0x344e,	// (0x00055df4) title_pane_stacon_g2_ParamLimits

0x344e,	// (0x00055df4) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0006204f) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0006204f) title_pane_stacon_g

0x8761,	// (0x0005b107) cursor_press_pane

0x6526,	// (0x00058ecc) popup_fep_hwr_window_ParamLimits

0x6526,	// (0x00058ecc) popup_fep_hwr_window

0x65b0,	// (0x00058f56) popup_fep_vkb_window_ParamLimits

0x65b0,	// (0x00058f56) popup_fep_vkb_window

0xb7f0,	// (0x0005e196) cursor_press_pane_g1

0x0002,

0xfb0e,	// (0x000624b4) fep_vkb_side_pane_g_ParamLimits

0x7042,	// (0x000599e8) fep_hwr_candidate_pane_ParamLimits

0x7042,	// (0x000599e8) fep_hwr_candidate_pane

0x706c,	// (0x00059a12) fep_hwr_side_pane_ParamLimits

0x706c,	// (0x00059a12) fep_hwr_side_pane

0x708e,	// (0x00059a34) fep_hwr_top_pane_ParamLimits

0x708e,	// (0x00059a34) fep_hwr_top_pane

0x70a6,	// (0x00059a4c) fep_hwr_write_pane_ParamLimits

0x70a6,	// (0x00059a4c) fep_hwr_write_pane

0xfb0e,	// (0x000624b4) fep_vkb_side_pane_g

0xb7f8,	// (0x0005e19e) fep_hwr_top_pane_g1

0xb80a,	// (0x0005e1b0) fep_hwr_top_pane_g2

0x70e0,	// (0x00059a86) fep_hwr_top_pane_g3

0x0002,

0xfaea,	// (0x00062490) fep_hwr_top_pane_g

0x70f5,	// (0x00059a9b) fep_hwr_top_text_pane

0x364a,	// (0x00055ff0) fep_hwr_top_text_pane_g1

0xb840,	// (0x0005e1e6) fep_hwr_top_text_pane_t1

0x71ff,	// (0x00059ba5) fep_hwr_candidate_pane_g1

0xba8b,	// (0x0005e431) fep_vkb_keypad_pane_g3_ParamLimits

0xba8b,	// (0x0005e431) fep_vkb_keypad_pane_g3

0xbab7,	// (0x0005e45d) fep_vkb_keypad_pane_g4_ParamLimits

0xbab7,	// (0x0005e45d) fep_vkb_keypad_pane_g4

0xbb2e,	// (0x0005e4d4) fep_vkb_bottom_pane_g2_ParamLimits

0xbb2e,	// (0x0005e4d4) fep_vkb_bottom_pane_g2

0x0001,

0xfb15,	// (0x000624bb) fep_vkb_bottom_pane_g_ParamLimits

0xfb15,	// (0x000624bb) fep_vkb_bottom_pane_g

0xb797,	// (0x0005e13d) cell_vkb_side_pane_g2

0x0001,

0xfb1f,	// (0x000624c5) cell_vkb_side_pane_g

0xbbb9,	// (0x0005e55f) cell_vkb_side_pane_t1

0xbbc7,	// (0x0005e56d) cell_vkb_side_pane_t1_copy1

0xb797,	// (0x0005e13d) bg_fep_vkb_candidate_pane_g2

0xbd0b,	// (0x0005e6b1) cell_vkb_candidate_pane_ParamLimits

0xb84e,	// (0x0005e1f4) aid_size_cell_vkb_ParamLimits

0xb84e,	// (0x0005e1f4) aid_size_cell_vkb

0xbd0b,	// (0x0005e6b1) cell_vkb_candidate_pane

0x7226,	// (0x00059bcc) bg_popup_fep_shadow_pane_g1

0xb8e0,	// (0x0005e286) fep_vkb_bottom_pane_ParamLimits

0xb8e0,	// (0x0005e286) fep_vkb_bottom_pane

0xb91d,	// (0x0005e2c3) fep_vkb_candidate_pane_ParamLimits

0xb91d,	// (0x0005e2c3) fep_vkb_candidate_pane

0xb939,	// (0x0005e2df) fep_vkb_keypad_pane_ParamLimits

0xb939,	// (0x0005e2df) fep_vkb_keypad_pane

0xb96c,	// (0x0005e312) fep_vkb_side_pane_ParamLimits

0xb96c,	// (0x0005e312) fep_vkb_side_pane

0xb9a8,	// (0x0005e34e) fep_vkb_top_pane_ParamLimits

0xb9a8,	// (0x0005e34e) fep_vkb_top_pane

0xb9e4,	// (0x0005e38a) fep_vkb_top_pane_g1_ParamLimits

0xb9e4,	// (0x0005e38a) fep_vkb_top_pane_g1

0xb9f3,	// (0x0005e399) fep_vkb_top_pane_g2_ParamLimits

0xb9f3,	// (0x0005e399) fep_vkb_top_pane_g2

0xba02,	// (0x0005e3a8) fep_vkb_top_pane_g3_ParamLimits

0xba02,	// (0x0005e3a8) fep_vkb_top_pane_g3

0x0003,

0xfb05,	// (0x000624ab) fep_vkb_top_pane_g_ParamLimits

0xfb05,	// (0x000624ab) fep_vkb_top_pane_g

0xba20,	// (0x0005e3c6) fep_vkb_top_text_pane_ParamLimits

0xba20,	// (0x0005e3c6) fep_vkb_top_text_pane

0xba31,	// (0x0005e3d7) fep_vkb_side_pane_g1_ParamLimits

0xba31,	// (0x0005e3d7) fep_vkb_side_pane_g1

0xba7a,	// (0x0005e420) grid_vkb_side_pane_ParamLimits

0xba7a,	// (0x0005e420) grid_vkb_side_pane

0x722e,	// (0x00059bd4) bg_popup_fep_shadow_pane_g2

0x7237,	// (0x00059bdd) bg_popup_fep_shadow_pane_g3

0x723f,	// (0x00059be5) bg_popup_fep_shadow_pane_g4

0x7248,	// (0x00059bee) bg_popup_fep_shadow_pane_g5

0x7252,	// (0x00059bf8) bg_popup_fep_shadow_pane_g6

0x725a,	// (0x00059c00) bg_popup_fep_shadow_pane_g7

0xf423,	// (0x00061dc9) bg_popup_fep_shadow_pane_g8

0xbad9,	// (0x0005e47f) grid_vkb_keypad_number_pane_ParamLimits

0xbad9,	// (0x0005e47f) grid_vkb_keypad_number_pane

0xbaed,	// (0x0005e493) grid_vkb_keypad_pane_ParamLimits

0xbaed,	// (0x0005e493) grid_vkb_keypad_pane

0xbb13,	// (0x0005e4b9) fep_vkb_bottom_pane_g1_ParamLimits

0xbb13,	// (0x0005e4b9) fep_vkb_bottom_pane_g1

0xbb3c,	// (0x0005e4e2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbb3c,	// (0x0005e4e2) grid_vkb_keypad_bottom_left_pane

0xbb51,	// (0x0005e4f7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbb51,	// (0x0005e4f7) grid_vkb_keypad_bottom_right_pane

0xbb66,	// (0x0005e50c) fep_vkb_top_text_pane_g1

0xbb81,	// (0x0005e527) fep_vkb_top_text_pane_t1

0xbb96,	// (0x0005e53c) cell_vkb_side_pane_ParamLimits

0xbb96,	// (0x0005e53c) cell_vkb_side_pane

0xb797,	// (0x0005e13d) cell_vkb_side_pane_g1

0xbbd5,	// (0x0005e57b) cell_vkb_keypad_pane_ParamLimits

0xbbd5,	// (0x0005e57b) cell_vkb_keypad_pane

0xbc62,	// (0x0005e608) cell_vkb_keypad_pane_g1

0x0008,

0xfb32,	// (0x000624d8) bg_popup_fep_shadow_pane_g

0x726c,	// (0x00059c12) cell_hwr_side_pane_g1

0x726c,	// (0x00059c12) cell_hwr_side_pane_g2

0xbc6c,	// (0x0005e612) cell_vkb_keypad_pane_t1

0xbc7a,	// (0x0005e620) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbc7a,	// (0x0005e620) cell_vkb_keypad_bottom_left_pane

0xbc97,	// (0x0005e63d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbc97,	// (0x0005e63d) cell_vkb_keypad_bottom_right_pane

0xb797,	// (0x0005e13d) cell_vkb_keypad_bottom_left_pane_g1

0xb797,	// (0x0005e13d) cell_vkb_keypad_bottom_right_pane_g1

0xbcd0,	// (0x0005e676) cell_vkb_keypad_number_pane_ParamLimits

0xbcd0,	// (0x0005e676) cell_vkb_keypad_number_pane

0xbcef,	// (0x0005e695) cell_vkb_keypad_number_pane_g1

0xbcf9,	// (0x0005e69f) cell_vkb_keypad_number_pane_g2

0xbd02,	// (0x0005e6a8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb24,	// (0x000624ca) cell_vkb_keypad_number_pane_g

0xbc6c,	// (0x0005e612) cell_vkb_keypad_number_pane_t1

0xbd2c,	// (0x0005e6d2) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x000624eb) cell_hwr_side_pane_g

0xbd45,	// (0x0005e6eb) cell_hwr_side_pane_t1

0x7276,	// (0x00059c1c) cell_hwr_side_pane_t1_copy1

0x7284,	// (0x00059c2a) cell_hwr_candidate_pane_g1

0x72b3,	// (0x00059c59) cell_hwr_candidate_pane_t1

0xb797,	// (0x0005e13d) cell_vkb_candidate_pane_g2

0xbd89,	// (0x0005e72f) cell_vkb_candidate_pane_t1

0x7009,	// (0x000599af) bg_popup_fep_shadow_pane_ParamLimits

0x7009,	// (0x000599af) bg_popup_fep_shadow_pane

0x70c0,	// (0x00059a66) bg_fep_hwr_top_pane_g4

0xb81c,	// (0x0005e1c2) bg_hwr_side_pane_g1_ParamLimits

0xb81c,	// (0x0005e1c2) bg_hwr_side_pane_g1

0x7133,	// (0x00059ad9) cell_hwr_side_pane_ParamLimits

0x7133,	// (0x00059ad9) cell_hwr_side_pane

0x7170,	// (0x00059b16) fep_hwr_write_pane_g1_ParamLimits

0x7170,	// (0x00059b16) fep_hwr_write_pane_g1

0x717d,	// (0x00059b23) fep_hwr_write_pane_g2_ParamLimits

0x717d,	// (0x00059b23) fep_hwr_write_pane_g2

0x718a,	// (0x00059b30) fep_hwr_write_pane_g3_ParamLimits

0x718a,	// (0x00059b30) fep_hwr_write_pane_g3

0x7198,	// (0x00059b3e) fep_hwr_write_pane_g4_ParamLimits

0x7198,	// (0x00059b3e) fep_hwr_write_pane_g4

0x0005,

0xfaf1,	// (0x00062497) fep_hwr_write_pane_g_ParamLimits

0xfaf1,	// (0x00062497) fep_hwr_write_pane_g

0x70c0,	// (0x00059a66) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x70c0,	// (0x00059a66) bg_fep_hwr_candidate_pane_g2

0x71ad,	// (0x00059b53) cell_hwr_candidate_pane_ParamLimits

0x71ad,	// (0x00059b53) cell_hwr_candidate_pane

0x71ff,	// (0x00059ba5) fep_hwr_candidate_pane_g1_ParamLimits

0xb87c,	// (0x0005e222) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb87c,	// (0x0005e222) bg_popup_fep_shadow_pane_cp2

0xba12,	// (0x0005e3b8) fep_vkb_top_pane_g4_ParamLimits

0xba12,	// (0x0005e3b8) fep_vkb_top_pane_g4

0xba58,	// (0x0005e3fe) fep_vkb_side_pane_g2_ParamLimits

0xba58,	// (0x0005e3fe) fep_vkb_side_pane_g2

0x5924,	// (0x000582ca) list_setting_pane_t4_ParamLimits

0x5924,	// (0x000582ca) list_setting_pane_t4

0x59c0,	// (0x00058366) list_setting_number_pane_t5_ParamLimits

0x59c0,	// (0x00058366) list_setting_number_pane_t5

0x5ed8,	// (0x0005887e) list_double_heading_pane_cp2_ParamLimits

0x5ed8,	// (0x0005887e) list_double_heading_pane_cp2

0xbd97,	// (0x0005e73d) list_double_heading_pane_g1_cp2_ParamLimits

0xbd97,	// (0x0005e73d) list_double_heading_pane_g1_cp2

0xbda3,	// (0x0005e749) list_double_heading_pane_g2_cp2_ParamLimits

0xbda3,	// (0x0005e749) list_double_heading_pane_g2_cp2

0xbdb7,	// (0x0005e75d) list_double_heading_pane_t1_cp2_ParamLimits

0xbdb7,	// (0x0005e75d) list_double_heading_pane_t1_cp2

0xbdcd,	// (0x0005e773) list_double_heading_pane_t2_cp2_ParamLimits

0xbdcd,	// (0x0005e773) list_double_heading_pane_t2_cp2

0xecf9,	// (0x0006169f) aid_value_unit2

0x501a,	// (0x000579c0) popup_preview_fixed_window

0xeea4,	// (0x0006184a) bg_popup_preview_window_pane_cp02

0xbddf,	// (0x0005e785) list_preview_fixed_pane

0xbe25,	// (0x0005e7cb) list_empty_pane_fp_ParamLimits

0xbe25,	// (0x0005e7cb) list_empty_pane_fp

0xbe25,	// (0x0005e7cb) list_single_cale_day_pane_fp_ParamLimits

0xbe25,	// (0x0005e7cb) list_single_cale_day_pane_fp

0xbe25,	// (0x0005e7cb) list_single_graphic_heading_pane_fp_ParamLimits

0xbe25,	// (0x0005e7cb) list_single_graphic_heading_pane_fp

0xbe25,	// (0x0005e7cb) list_single_graphic_pane_fp_ParamLimits

0xbe25,	// (0x0005e7cb) list_single_graphic_pane_fp

0xbe25,	// (0x0005e7cb) list_single_heading_pane_fp_ParamLimits

0xbe25,	// (0x0005e7cb) list_single_heading_pane_fp

0xbe25,	// (0x0005e7cb) list_single_pane_fp_ParamLimits

0xbe25,	// (0x0005e7cb) list_single_pane_fp

0xbe3e,	// (0x0005e7e4) list_single_pane_fp_g1_ParamLimits

0xbe3e,	// (0x0005e7e4) list_single_pane_fp_g1

0xbd97,	// (0x0005e73d) list_single_pane_fp_g2_ParamLimits

0xbd97,	// (0x0005e73d) list_single_pane_fp_g2

0xbda3,	// (0x0005e749) list_single_pane_fp_g3_ParamLimits

0xbda3,	// (0x0005e749) list_single_pane_fp_g3

0xbe4a,	// (0x0005e7f0) list_single_pane_fp_g4_ParamLimits

0xbe4a,	// (0x0005e7f0) list_single_pane_fp_g4

0x0003,

0xfb58,	// (0x000624fe) list_single_pane_fp_g_ParamLimits

0xfb58,	// (0x000624fe) list_single_pane_fp_g

0x3ebc,	// (0x00056862) list_single_pane_fp_t1_ParamLimits

0x3ebc,	// (0x00056862) list_single_pane_fp_t1

0x3ed3,	// (0x00056879) list_single_graphic_pane_fp_g1_ParamLimits

0x3ed3,	// (0x00056879) list_single_graphic_pane_fp_g1

0xbe3e,	// (0x0005e7e4) list_single_graphic_pane_fp_g2_ParamLimits

0xbe3e,	// (0x0005e7e4) list_single_graphic_pane_fp_g2

0xbd97,	// (0x0005e73d) list_single_graphic_pane_fp_g3_ParamLimits

0xbd97,	// (0x0005e73d) list_single_graphic_pane_fp_g3

0xbda3,	// (0x0005e749) list_single_graphic_pane_fp_g4_ParamLimits

0xbda3,	// (0x0005e749) list_single_graphic_pane_fp_g4

0xbe4a,	// (0x0005e7f0) list_single_graphic_pane_fp_g5_ParamLimits

0xbe4a,	// (0x0005e7f0) list_single_graphic_pane_fp_g5

0x0004,

0xfb61,	// (0x00062507) list_single_graphic_pane_fp_g_ParamLimits

0xfb61,	// (0x00062507) list_single_graphic_pane_fp_g

0x3edf,	// (0x00056885) list_single_graphic_pane_fp_t1_ParamLimits

0x3edf,	// (0x00056885) list_single_graphic_pane_fp_t1

0x3ed3,	// (0x00056879) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3ed3,	// (0x00056879) list_single_graphic_heading_pane_fp_g1

0xbe3e,	// (0x0005e7e4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbe3e,	// (0x0005e7e4) list_single_graphic_heading_pane_fp_g2

0xbd97,	// (0x0005e73d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbd97,	// (0x0005e73d) list_single_graphic_heading_pane_fp_g3

0xbda3,	// (0x0005e749) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbda3,	// (0x0005e749) list_single_graphic_heading_pane_fp_g4

0xbe4a,	// (0x0005e7f0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbe4a,	// (0x0005e7f0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb61,	// (0x00062507) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb61,	// (0x00062507) list_single_graphic_heading_pane_fp_g

0x3ef5,	// (0x0005689b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3ef5,	// (0x0005689b) list_single_graphic_heading_pane_fp_t1

0x3f0b,	// (0x000568b1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3f0b,	// (0x000568b1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6c,	// (0x00062512) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6c,	// (0x00062512) list_single_graphic_heading_pane_fp_t

0x3f1d,	// (0x000568c3) list_single_cale_day_pane_fp_g1_ParamLimits

0x3f1d,	// (0x000568c3) list_single_cale_day_pane_fp_g1

0xbe56,	// (0x0005e7fc) list_single_cale_day_pane_fp_g2_ParamLimits

0xbe56,	// (0x0005e7fc) list_single_cale_day_pane_fp_g2

0x9ce8,	// (0x0005c68e) list_single_cale_day_pane_fp_g3_ParamLimits

0x9ce8,	// (0x0005c68e) list_single_cale_day_pane_fp_g3

0x9d10,	// (0x0005c6b6) list_single_cale_day_pane_fp_g4_ParamLimits

0x9d10,	// (0x0005c6b6) list_single_cale_day_pane_fp_g4

0x9d34,	// (0x0005c6da) list_single_cale_day_pane_fp_g5_ParamLimits

0x9d34,	// (0x0005c6da) list_single_cale_day_pane_fp_g5

0x0004,

0xfb71,	// (0x00062517) list_single_cale_day_pane_fp_g_ParamLimits

0xfb71,	// (0x00062517) list_single_cale_day_pane_fp_g

0x3f55,	// (0x000568fb) list_single_cale_day_pane_fp_t1_ParamLimits

0x3f55,	// (0x000568fb) list_single_cale_day_pane_fp_t1

0x3f7b,	// (0x00056921) list_single_cale_day_pane_fp_t2_ParamLimits

0x3f7b,	// (0x00056921) list_single_cale_day_pane_fp_t2

0x3f94,	// (0x0005693a) list_single_cale_day_pane_fp_t3_ParamLimits

0x3f94,	// (0x0005693a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7c,	// (0x00062522) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7c,	// (0x00062522) list_single_cale_day_pane_fp_t

0xbe3e,	// (0x0005e7e4) list_empty_pane_fp_g1_ParamLimits

0xbe3e,	// (0x0005e7e4) list_empty_pane_fp_g1

0x3fad,	// (0x00056953) list_empty_pane_fp_t1

0x3fbb,	// (0x00056961) list_empty_pane_fp_t2

0x0001,

0xfb83,	// (0x00062529) list_empty_pane_fp_t

0xbe3e,	// (0x0005e7e4) list_single_heading_pane_fp_g1_ParamLimits

0xbe3e,	// (0x0005e7e4) list_single_heading_pane_fp_g1

0xbd97,	// (0x0005e73d) list_single_heading_pane_fp_g2_ParamLimits

0xbd97,	// (0x0005e73d) list_single_heading_pane_fp_g2

0xbda3,	// (0x0005e749) list_single_heading_pane_fp_g3_ParamLimits

0xbda3,	// (0x0005e749) list_single_heading_pane_fp_g3

0x0002,

0xfb88,	// (0x0006252e) list_single_heading_pane_fp_g_ParamLimits

0xfb88,	// (0x0006252e) list_single_heading_pane_fp_g

0x3fc9,	// (0x0005696f) list_single_heading_pane_fp_t1_ParamLimits

0x3fc9,	// (0x0005696f) list_single_heading_pane_fp_t1

0x3fdb,	// (0x00056981) list_single_heading_pane_fp_t2_ParamLimits

0x3fdb,	// (0x00056981) list_single_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x00062535) list_single_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x00062535) list_single_heading_pane_fp_t

0x32e5,	// (0x00055c8b) aid_size_cell_fast

0xee79,	// (0x0006181f) soft_indicator_pane_cp1_t1

0x3322,	// (0x00055cc8) cell_app_pane_cp2_ParamLimits

0x3322,	// (0x00055cc8) cell_app_pane_cp2

0x702b,	// (0x000599d1) fep_hwr_candidate_drop_down_list_pane

0x7219,	// (0x00059bbf) fep_hwr_candidate_pane_g3_ParamLimits

0x7219,	// (0x00059bbf) fep_hwr_candidate_pane_g3

0x2dbf,	// (0x00055765) fep_hwr_candidate_pane_g4_ParamLimits

0x2dbf,	// (0x00055765) fep_hwr_candidate_pane_g4

0x0002,

0xfafe,	// (0x000624a4) fep_hwr_candidate_pane_g_ParamLimits

0xfafe,	// (0x000624a4) fep_hwr_candidate_pane_g

0xb90c,	// (0x0005e2b2) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb90c,	// (0x0005e2b2) fep_vkb_candidate_drop_down_list_pane

0xbd34,	// (0x0005e6da) fep_vkb_candidate_pane_g3

0xbd3c,	// (0x0005e6e2) fep_vkb_candidate_pane_g4

0x0002,

0xfb2b,	// (0x000624d1) fep_vkb_candidate_pane_g

0x7284,	// (0x00059c2a) cell_hwr_candidate_pane_g1_ParamLimits

0x7292,	// (0x00059c38) cell_hwr_candidate_pane_g3_ParamLimits

0x7292,	// (0x00059c38) cell_hwr_candidate_pane_g3

0xd4ea,	// (0x0005fe90) cell_hwr_candidate_pane_g4_ParamLimits

0xd4ea,	// (0x0005fe90) cell_hwr_candidate_pane_g4

0x0002,

0xfb4a,	// (0x000624f0) cell_hwr_candidate_pane_g_ParamLimits

0xfb4a,	// (0x000624f0) cell_hwr_candidate_pane_g

0xbd53,	// (0x0005e6f9) cell_vkb_candidate_pane_g3_ParamLimits

0xbd53,	// (0x0005e6f9) cell_vkb_candidate_pane_g3

0xbd6e,	// (0x0005e714) cell_vkb_candidate_pane_g4_ParamLimits

0xbd6e,	// (0x0005e714) cell_vkb_candidate_pane_g4

0xbe62,	// (0x0005e808) cell_app_pane_cp2_g1_ParamLimits

0xbe62,	// (0x0005e808) cell_app_pane_cp2_g1

0xbe80,	// (0x0005e826) cell_app_pane_cp2_g2_ParamLimits

0xbe80,	// (0x0005e826) cell_app_pane_cp2_g2

0x0001,

0xfb94,	// (0x0006253a) cell_app_pane_cp2_g_ParamLimits

0xfb94,	// (0x0006253a) cell_app_pane_cp2_g

0xbe8c,	// (0x0005e832) cell_app_pane_cp2_t1_ParamLimits

0xbe8c,	// (0x0005e832) cell_app_pane_cp2_t1

0xf3b3,	// (0x00061d59) grid_highlight_pane_cp1_ParamLimits

0xf3b3,	// (0x00061d59) grid_highlight_pane_cp1

0x72d1,	// (0x00059c77) cell_hwr_candidate_pane_cp1_ParamLimits

0x72d1,	// (0x00059c77) cell_hwr_candidate_pane_cp1

0x7284,	// (0x00059c2a) fep_hwr_candidate_drop_down_list_pane_g1

0x72f5,	// (0x00059c9b) fep_hwr_candidate_drop_down_list_pane_g2

0x7302,	// (0x00059ca8) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb99,	// (0x0006253f) fep_hwr_candidate_drop_down_list_pane_g

0x730f,	// (0x00059cb5) fep_hwr_candidate_drop_down_list_scroll_pane

0x7318,	// (0x00059cbe) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7318,	// (0x00059cbe) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7325,	// (0x00059ccb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7325,	// (0x00059ccb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7332,	// (0x00059cd8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7332,	// (0x00059cd8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x733f,	// (0x00059ce5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x733f,	// (0x00059ce5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x735a,	// (0x00059d00) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x735a,	// (0x00059d00) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7375,	// (0x00059d1b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7375,	// (0x00059d1b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7390,	// (0x00059d36) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7390,	// (0x00059d36) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x73ab,	// (0x00059d51) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x73ab,	// (0x00059d51) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba0,	// (0x00062546) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba0,	// (0x00062546) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbe9e,	// (0x0005e844) cell_vkb_candidate_pane_cp1_ParamLimits

0xbe9e,	// (0x0005e844) cell_vkb_candidate_pane_cp1

0xba12,	// (0x0005e3b8) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xba12,	// (0x0005e3b8) fep_vkb_candidate_drop_down_list_pane_g1

0xbec4,	// (0x0005e86a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbec4,	// (0x0005e86a) fep_vkb_candidate_drop_down_list_pane_g2

0xbed1,	// (0x0005e877) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbed1,	// (0x0005e877) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb1,	// (0x00062557) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb1,	// (0x00062557) fep_vkb_candidate_drop_down_list_pane_g

0xbede,	// (0x0005e884) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbede,	// (0x0005e884) fep_vkb_candidate_drop_down_list_scroll_pane

0xbeeb,	// (0x0005e891) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbeeb,	// (0x0005e891) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbef8,	// (0x0005e89e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbef8,	// (0x0005e89e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbf04,	// (0x0005e8aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbf04,	// (0x0005e8aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbf10,	// (0x0005e8b6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbf10,	// (0x0005e8b6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbf31,	// (0x0005e8d7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbf31,	// (0x0005e8d7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbf52,	// (0x0005e8f8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbf52,	// (0x0005e8f8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbf73,	// (0x0005e919) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbf73,	// (0x0005e919) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbf94,	// (0x0005e93a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbf94,	// (0x0005e93a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb8,	// (0x0006255e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb8,	// (0x0006255e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x513a,	// (0x00057ae0) title_pane_g1_ParamLimits

0x5147,	// (0x00057aed) title_pane_g2_ParamLimits

0xf529,	// (0x00061ecf) title_pane_g_ParamLimits

0x3642,	// (0x00055fe8) aid_call2_pane

0x363a,	// (0x00055fe0) aid_call_pane

0x364a,	// (0x00055ff0) popup_clock_analogue_window_g1

0x364a,	// (0x00055ff0) popup_clock_analogue_window_g2

0x5eb9,	// (0x0005885f) popup_clock_analogue_window_g3

0x5ec2,	// (0x00058868) popup_clock_analogue_window_g4

0xed0b,	// (0x000616b1) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0006207e) popup_clock_analogue_window_g

0x5eca,	// (0x00058870) popup_clock_analogue_window_t1

0x5f28,	// (0x000588ce) clock_digital_number_pane_ParamLimits

0x5f28,	// (0x000588ce) clock_digital_number_pane

0x5f34,	// (0x000588da) clock_digital_number_pane_cp02_ParamLimits

0x5f34,	// (0x000588da) clock_digital_number_pane_cp02

0x5f40,	// (0x000588e6) clock_digital_number_pane_cp03_ParamLimits

0x5f40,	// (0x000588e6) clock_digital_number_pane_cp03

0x5f4c,	// (0x000588f2) clock_digital_number_pane_cp04_ParamLimits

0x5f4c,	// (0x000588f2) clock_digital_number_pane_cp04

0x5f58,	// (0x000588fe) clock_digital_separator_pane_ParamLimits

0x5f58,	// (0x000588fe) clock_digital_separator_pane

0x5f64,	// (0x0005890a) popup_clock_digital_window_t1_ParamLimits

0x5f64,	// (0x0005890a) popup_clock_digital_window_t1

0xed0b,	// (0x000616b1) clock_digital_number_pane_g1

0xed0b,	// (0x000616b1) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00062089) clock_digital_number_pane_g

0xed0b,	// (0x000616b1) clock_digital_separator_pane_g1

0xed0b,	// (0x000616b1) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00062089) clock_digital_separator_pane_g

0x8ac4,	// (0x0005b46a) aid_fill_nsta_ParamLimits

0x8c10,	// (0x0005b5b6) indicator_nsta_pane_ParamLimits

0x8da1,	// (0x0005b747) popup_clock_analogue_window

0x8da1,	// (0x0005b747) popup_clock_digital_window

0xb1c3,	// (0x0005db69) grid_indicator_nsta_pane_ParamLimits

0xb1ec,	// (0x0005db92) clock_nsta_pane_t2

0x0001,

0xfa7e,	// (0x00062424) clock_nsta_pane_t

0x5e22,	// (0x000587c8) aid_size_max_handle

0x5e2c,	// (0x000587d2) aid_size_min_handle

0x8761,	// (0x0005b107) editor_scroll_pane

0xbfaf,	// (0x0005e955) ex_editor_pane

0xf4ef,	// (0x00061e95) scroll_pane_cp13

0xf352,	// (0x00061cf8) scroll_pane_cp14

0x3679,	// (0x0005601f) scroll_pane_cp36

0x5eee,	// (0x00058894) list_single_graphic_hl_pane_cp2_ParamLimits

0x5eee,	// (0x00058894) list_single_graphic_hl_pane_cp2

0x9c06,	// (0x0005c5ac) list_single_graphic_hl_pane_ParamLimits

0x9c06,	// (0x0005c5ac) list_single_graphic_hl_pane

0x3ff1,	// (0x00056997) aid_size_min_hl_cp1

0xbfb7,	// (0x0005e95d) list_highlight_pane_cp34_ParamLimits

0xbfb7,	// (0x0005e95d) list_highlight_pane_cp34

0xbfc8,	// (0x0005e96e) list_single_graphic_hl_pane_g1_ParamLimits

0xbfc8,	// (0x0005e96e) list_single_graphic_hl_pane_g1

0x73c6,	// (0x00059d6c) list_single_graphic_hl_pane_g2_ParamLimits

0x73c6,	// (0x00059d6c) list_single_graphic_hl_pane_g2

0x73c6,	// (0x00059d6c) list_single_graphic_hl_pane_g3_ParamLimits

0x73c6,	// (0x00059d6c) list_single_graphic_hl_pane_g3

0x8f62,	// (0x0005b908) list_single_graphic_hl_pane_g4_ParamLimits

0x8f62,	// (0x0005b908) list_single_graphic_hl_pane_g4

0x73d2,	// (0x00059d78) list_single_graphic_hl_pane_g5_ParamLimits

0x73d2,	// (0x00059d78) list_single_graphic_hl_pane_g5

0x0004,

0xfbc9,	// (0x0006256f) list_single_graphic_hl_pane_g_ParamLimits

0xfbc9,	// (0x0006256f) list_single_graphic_hl_pane_g

0x73e6,	// (0x00059d8c) list_single_graphic_hl_pane_t1_ParamLimits

0x73e6,	// (0x00059d8c) list_single_graphic_hl_pane_t1

0xbfd5,	// (0x0005e97b) aid_size_min_hl_cp2

0xbfde,	// (0x0005e984) list_highlight_pane_cp34_cp2_ParamLimits

0xbfde,	// (0x0005e984) list_highlight_pane_cp34_cp2

0xbfc8,	// (0x0005e96e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbfc8,	// (0x0005e96e) list_single_graphic_hl_pane_g1_cp2

0xbfeb,	// (0x0005e991) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbfeb,	// (0x0005e991) list_single_graphic_hl_pane_g2_cp2

0xbff7,	// (0x0005e99d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbff7,	// (0x0005e99d) list_single_graphic_hl_pane_g3_cp2

0xc005,	// (0x0005e9ab) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc005,	// (0x0005e9ab) list_single_graphic_hl_pane_g4_cp2

0xc011,	// (0x0005e9b7) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc011,	// (0x0005e9b7) list_single_graphic_hl_pane_g5_cp2

0x6304,	// (0x00058caa) control_pane_g4_ParamLimits

0x6304,	// (0x00058caa) control_pane_g4

0x8a88,	// (0x0005b42e) bg_popup_sub_pane_cp10_ParamLimits

0xb7a1,	// (0x0005e147) list_choice_list_pane_ParamLimits

0xb7b0,	// (0x0005e156) scroll_pane_cp23

0xeea4,	// (0x0006184a) bg_popup_preview_window_pane_cp02_ParamLimits

0xbddf,	// (0x0005e785) list_preview_fixed_pane_ParamLimits

0xbdf5,	// (0x0005e79b) list_preview_fixed_pane_cp_ParamLimits

0xbdf5,	// (0x0005e79b) list_preview_fixed_pane_cp

0xbe01,	// (0x0005e7a7) popup_preview_fixed_window_g1_ParamLimits

0xbe01,	// (0x0005e7a7) popup_preview_fixed_window_g1

0xbe0d,	// (0x0005e7b3) popup_preview_fixed_window_g2_ParamLimits

0xbe0d,	// (0x0005e7b3) popup_preview_fixed_window_g2

0x0002,

0xfb51,	// (0x000624f7) popup_preview_fixed_window_g_ParamLimits

0xfb51,	// (0x000624f7) popup_preview_fixed_window_g

0x5cf8,	// (0x0005869e) aid_navi_side_left_pane_ParamLimits

0x5d0d,	// (0x000586b3) aid_navi_side_right_pane_ParamLimits

0x5d25,	// (0x000586cb) navi_icon_pane_stacon_ParamLimits

0x5d39,	// (0x000586df) navi_navi_pane_stacon_ParamLimits

0x5d25,	// (0x000586cb) navi_text_pane_stacon_ParamLimits

0x4ed1,	// (0x00057877) main_text_info_pane

0xc03b,	// (0x0005e9e1) listscroll_text_info_pane

0xc043,	// (0x0005e9e9) list_text_info_pane_ParamLimits

0xc043,	// (0x0005e9e9) list_text_info_pane

0xc052,	// (0x0005e9f8) scroll_pane_cp24_ParamLimits

0xc052,	// (0x0005e9f8) scroll_pane_cp24

0xc070,	// (0x0005ea16) list_text_info_pane_t1_ParamLimits

0xc070,	// (0x0005ea16) list_text_info_pane_t1

0x648e,	// (0x00058e34) popup_fast_swap2_window_ParamLimits

0x648e,	// (0x00058e34) popup_fast_swap2_window

0xc095,	// (0x0005ea3b) aid_size_cell_fast2

0xed01,	// (0x000616a7) bg_popup_window_pane_cp17

0x940c,	// (0x0005bdb2) heading_pane_cp2

0x9414,	// (0x0005bdba) listscroll_fast2_pane

0xc09f,	// (0x0005ea45) grid_fast2_pane

0xc0a9,	// (0x0005ea4f) listscroll_fast2_pane_g1

0xc0b3,	// (0x0005ea59) listscroll_fast2_pane_g2

0x0001,

0xfbd4,	// (0x0006257a) listscroll_fast2_pane_g

0xf4ef,	// (0x00061e95) scroll_pane_cp26

0xc0bd,	// (0x0005ea63) cell_fast2_pane_ParamLimits

0xc0bd,	// (0x0005ea63) cell_fast2_pane

0xc0d4,	// (0x0005ea7a) cell_fast2_pane_g1

0xc0dd,	// (0x0005ea83) cell_fast2_pane_g2

0xc0e6,	// (0x0005ea8c) cell_fast2_pane_g3

0x0002,

0xfbd9,	// (0x0006257f) cell_fast2_pane_g

0xf119,	// (0x00061abf) grid_highlight_pane_cp9

0x6450,	// (0x00058df6) main_eswt_pane_ParamLimits

0x6450,	// (0x00058df6) main_eswt_pane

0xc067,	// (0x0005ea0d) list_single_text_info_pane

0xc0ee,	// (0x0005ea94) eswt_ctrl_button_pane

0xc0ee,	// (0x0005ea94) eswt_ctrl_canvas_pane

0xc0f6,	// (0x0005ea9c) eswt_ctrl_combo_pane

0xc0ee,	// (0x0005ea94) eswt_ctrl_default_pane

0xc0ee,	// (0x0005ea94) eswt_ctrl_label_pane

0xc0fe,	// (0x0005eaa4) eswt_ctrl_wait_pane

0xc106,	// (0x0005eaac) eswt_shell_pane

0xed01,	// (0x000616a7) listscroll_eswt_app_pane

0xc126,	// (0x0005eacc) popup_eswt_tasktip_window_ParamLimits

0xc126,	// (0x0005eacc) popup_eswt_tasktip_window

0x904a,	// (0x0005b9f0) bg_popup_window_pane_cp18

0xc137,	// (0x0005eadd) eswt_control_pane_g1_ParamLimits

0xc137,	// (0x0005eadd) eswt_control_pane_g1

0xc144,	// (0x0005eaea) eswt_control_pane_g2_ParamLimits

0xc144,	// (0x0005eaea) eswt_control_pane_g2

0xc151,	// (0x0005eaf7) eswt_control_pane_g3_ParamLimits

0xc151,	// (0x0005eaf7) eswt_control_pane_g3

0xc15e,	// (0x0005eb04) eswt_control_pane_g4_ParamLimits

0xc15e,	// (0x0005eb04) eswt_control_pane_g4

0x0003,

0xfbe0,	// (0x00062586) eswt_control_pane_g_ParamLimits

0xfbe0,	// (0x00062586) eswt_control_pane_g

0xf3b3,	// (0x00061d59) bg_button_pane_ParamLimits

0xf3b3,	// (0x00061d59) bg_button_pane

0xf12e,	// (0x00061ad4) common_borders_pane_copy2_ParamLimits

0xf12e,	// (0x00061ad4) common_borders_pane_copy2

0xc16b,	// (0x0005eb11) control_button_pane_g1_ParamLimits

0xc16b,	// (0x0005eb11) control_button_pane_g1

0xc177,	// (0x0005eb1d) control_button_pane_g2_ParamLimits

0xc177,	// (0x0005eb1d) control_button_pane_g2

0xc183,	// (0x0005eb29) control_button_pane_g3_ParamLimits

0xc183,	// (0x0005eb29) control_button_pane_g3

0x0002,

0xfbe9,	// (0x0006258f) control_button_pane_g_ParamLimits

0xfbe9,	// (0x0006258f) control_button_pane_g

0xc197,	// (0x0005eb3d) control_button_pane_t1

0xc1a5,	// (0x0005eb4b) control_button_pane_t2

0x0001,

0xfbf0,	// (0x00062596) control_button_pane_t

0x8fd6,	// (0x0005b97c) bg_button_pane_g1

0x8fe6,	// (0x0005b98c) bg_button_pane_g2

0x8fde,	// (0x0005b984) bg_button_pane_g3

0x8ff6,	// (0x0005b99c) bg_button_pane_g4

0x8fee,	// (0x0005b994) bg_button_pane_g5

0x8ffe,	// (0x0005b9a4) bg_button_pane_g6

0x9006,	// (0x0005b9ac) bg_button_pane_g7

0x9016,	// (0x0005b9bc) bg_button_pane_g8

0x900e,	// (0x0005b9b4) bg_button_pane_g9

0x0008,

0xf846,	// (0x000621ec) bg_button_pane_g

0xb75c,	// (0x0005e102) common_borders_pane_ParamLimits

0xb75c,	// (0x0005e102) common_borders_pane

0xc137,	// (0x0005eadd) eswt_control_pane_g1_copy1_ParamLimits

0xc137,	// (0x0005eadd) eswt_control_pane_g1_copy1

0xc144,	// (0x0005eaea) eswt_control_pane_g2_copy1_ParamLimits

0xc144,	// (0x0005eaea) eswt_control_pane_g2_copy1

0xc151,	// (0x0005eaf7) eswt_control_pane_g3_copy1_ParamLimits

0xc151,	// (0x0005eaf7) eswt_control_pane_g3_copy1

0xc15e,	// (0x0005eb04) eswt_control_pane_g4_copy1_ParamLimits

0xc15e,	// (0x0005eb04) eswt_control_pane_g4_copy1

0xb797,	// (0x0005e13d) bg_eswt_ctrl_canvas_pane_g1

0xb75c,	// (0x0005e102) common_borders_pane_cp2_ParamLimits

0xb75c,	// (0x0005e102) common_borders_pane_cp2

0xb75c,	// (0x0005e102) common_borders_pane_cp3_ParamLimits

0xb75c,	// (0x0005e102) common_borders_pane_cp3

0xc1b3,	// (0x0005eb59) separator_horizontal_pane

0xc1bb,	// (0x0005eb61) separator_vertical_pane

0xc137,	// (0x0005eadd) eswt_control_pane_g1_copy2_ParamLimits

0xc137,	// (0x0005eadd) eswt_control_pane_g1_copy2

0xc144,	// (0x0005eaea) eswt_control_pane_g2_copy2_ParamLimits

0xc144,	// (0x0005eaea) eswt_control_pane_g2_copy2

0xc151,	// (0x0005eaf7) eswt_control_pane_g3_copy2_ParamLimits

0xc151,	// (0x0005eaf7) eswt_control_pane_g3_copy2

0xc15e,	// (0x0005eb04) eswt_control_pane_g4_copy2_ParamLimits

0xc15e,	// (0x0005eb04) eswt_control_pane_g4_copy2

0xed01,	// (0x000616a7) common_borders_pane_cp4

0xc1c4,	// (0x0005eb6a) separator_horizontal_pane_g1

0xc1cd,	// (0x0005eb73) separator_horizontal_pane_g2

0xc1d6,	// (0x0005eb7c) separator_horizontal_pane_g3

0x0002,

0xfbf5,	// (0x0006259b) separator_horizontal_pane_g

0xc137,	// (0x0005eadd) eswt_control_pane_g1_copy3_ParamLimits

0xc137,	// (0x0005eadd) eswt_control_pane_g1_copy3

0xc144,	// (0x0005eaea) eswt_control_pane_g2_copy3_ParamLimits

0xc144,	// (0x0005eaea) eswt_control_pane_g2_copy3

0xc151,	// (0x0005eaf7) eswt_control_pane_g3_copy3_ParamLimits

0xc151,	// (0x0005eaf7) eswt_control_pane_g3_copy3

0xc15e,	// (0x0005eb04) eswt_control_pane_g4_copy3_ParamLimits

0xc15e,	// (0x0005eb04) eswt_control_pane_g4_copy3

0xed01,	// (0x000616a7) common_borders_pane_cp5

0xc1df,	// (0x0005eb85) separator_vertical_pane_g1

0xc1e8,	// (0x0005eb8e) separator_vertical_pane_g2

0xc1f1,	// (0x0005eb97) separator_vertical_pane_g3

0x0002,

0xfbfc,	// (0x000625a2) separator_vertical_pane_g

0xc137,	// (0x0005eadd) eswt_control_pane_g1_copy4_ParamLimits

0xc137,	// (0x0005eadd) eswt_control_pane_g1_copy4

0xc144,	// (0x0005eaea) eswt_control_pane_g2_copy4_ParamLimits

0xc144,	// (0x0005eaea) eswt_control_pane_g2_copy4

0xc151,	// (0x0005eaf7) eswt_control_pane_g3_copy4_ParamLimits

0xc151,	// (0x0005eaf7) eswt_control_pane_g3_copy4

0xc15e,	// (0x0005eb04) eswt_control_pane_g4_copy4_ParamLimits

0xc15e,	// (0x0005eb04) eswt_control_pane_g4_copy4

0xc1fa,	// (0x0005eba0) eswt_ctrl_combo_button_pane

0xc202,	// (0x0005eba8) eswt_ctrl_input_pane

0xc20a,	// (0x0005ebb0) popup_choice_list_window_cp70

0xc212,	// (0x0005ebb8) eswt_ctrl_input_pane_t1

0xed01,	// (0x000616a7) input_focus_pane_cp70

0xb75c,	// (0x0005e102) bg_button_pane_cp70_ParamLimits

0xb75c,	// (0x0005e102) bg_button_pane_cp70

0xc220,	// (0x0005ebc6) eswt_ctrl_combo_button_pane_g1

0xc228,	// (0x0005ebce) wait_bar_pane_cp70

0x904a,	// (0x0005b9f0) bg_popup_window_pane_cp70_ParamLimits

0x904a,	// (0x0005b9f0) bg_popup_window_pane_cp70

0xc230,	// (0x0005ebd6) popup_eswt_tasktip_window_t1

0xc246,	// (0x0005ebec) wait_bar_pane_cp71_ParamLimits

0xc246,	// (0x0005ebec) wait_bar_pane_cp71

0xc252,	// (0x0005ebf8) grid_eswt_app_pane

0x34e2,	// (0x00055e88) scroll_pane_cp70

0xc25b,	// (0x0005ec01) cell_eswt_app_pane_ParamLimits

0xc25b,	// (0x0005ec01) cell_eswt_app_pane

0xc28d,	// (0x0005ec33) cell_eswt_app_pane_g1_ParamLimits

0xc28d,	// (0x0005ec33) cell_eswt_app_pane_g1

0xc2bc,	// (0x0005ec62) cell_eswt_app_pane_g2_ParamLimits

0xc2bc,	// (0x0005ec62) cell_eswt_app_pane_g2

0x0001,

0xfc03,	// (0x000625a9) cell_eswt_app_pane_g_ParamLimits

0xfc03,	// (0x000625a9) cell_eswt_app_pane_g

0xc2e5,	// (0x0005ec8b) cell_eswt_app_pane_t1_ParamLimits

0xc2e5,	// (0x0005ec8b) cell_eswt_app_pane_t1

0xc317,	// (0x0005ecbd) grid_highlight_pane_cp70_ParamLimits

0xc317,	// (0x0005ecbd) grid_highlight_pane_cp70

0x8627,	// (0x0005afcd) set_content_pane_g1

0x8a0f,	// (0x0005b3b5) status_small_volume_pane

0x73fc,	// (0x00059da2) status_small_volume_pane_g1

0x7404,	// (0x00059daa) volume_small2_pane

0x740d,	// (0x00059db3) volume_small2_pane_g1

0x7416,	// (0x00059dbc) volume_small2_pane_g2

0x741f,	// (0x00059dc5) volume_small2_pane_g3

0x7428,	// (0x00059dce) volume_small2_pane_g4

0x7431,	// (0x00059dd7) volume_small2_pane_g5

0x743a,	// (0x00059de0) volume_small2_pane_g6

0x7443,	// (0x00059de9) volume_small2_pane_g7

0x744c,	// (0x00059df2) volume_small2_pane_g8

0x7455,	// (0x00059dfb) volume_small2_pane_g9

0x745e,	// (0x00059e04) volume_small2_pane_g10

0x0009,

0xfc08,	// (0x000625ae) volume_small2_pane_g

0xbb66,	// (0x0005e50c) fep_vkb_top_text_pane_g1_ParamLimits

0xbb81,	// (0x0005e527) fep_vkb_top_text_pane_t1_ParamLimits

0xbe19,	// (0x0005e7bf) popup_preview_fixed_window_g3_ParamLimits

0xbe19,	// (0x0005e7bf) popup_preview_fixed_window_g3

0x69a1,	// (0x00059347) popup_toolbar_trans_pane

0xa565,	// (0x0005cf0b) aid_height_set_list_ParamLimits

0xa576,	// (0x0005cf1c) aid_size_parent_ParamLimits

0x8a88,	// (0x0005b42e) list_highlight_pane_cp2_ParamLimits

0x8627,	// (0x0005afcd) set_content_pane_g1_ParamLimits

0x9c83,	// (0x0005c629) list_single_image_pane_ParamLimits

0x9c83,	// (0x0005c629) list_single_image_pane

0xc323,	// (0x0005ecc9) aid_size_cell_image_ParamLimits

0xc323,	// (0x0005ecc9) aid_size_cell_image

0xc330,	// (0x0005ecd6) grid_single_image_pane_ParamLimits

0xc330,	// (0x0005ecd6) grid_single_image_pane

0xf3c1,	// (0x00061d67) list_single_image_pane_g1_ParamLimits

0xf3c1,	// (0x00061d67) list_single_image_pane_g1

0xf3cd,	// (0x00061d73) list_single_image_pane_g2_ParamLimits

0xf3cd,	// (0x00061d73) list_single_image_pane_g2

0x0001,

0xfc1d,	// (0x000625c3) list_single_image_pane_g_ParamLimits

0xfc1d,	// (0x000625c3) list_single_image_pane_g

0xc33e,	// (0x0005ece4) list_single_image_pane_t1_ParamLimits

0xc33e,	// (0x0005ece4) list_single_image_pane_t1

0xc354,	// (0x0005ecfa) cell_image_list_pane_ParamLimits

0xc354,	// (0x0005ecfa) cell_image_list_pane

0xc36c,	// (0x0005ed12) cell_image_list_pane_g1

0xc375,	// (0x0005ed1b) cell_image_list_pane_g2

0x0001,

0xfc22,	// (0x000625c8) cell_image_list_pane_g

0xc37e,	// (0x0005ed24) aid_size_cell_tb_trans_pane

0xf3b3,	// (0x00061d59) bg_tb_trans_pane

0xc390,	// (0x0005ed36) grid_tb_trans_pane

0x8fd6,	// (0x0005b97c) bg_tb_trans_pane_g1

0x8fe6,	// (0x0005b98c) bg_tb_trans_pane_g2

0x8fde,	// (0x0005b984) bg_tb_trans_pane_g3

0x8ff6,	// (0x0005b99c) bg_tb_trans_pane_g4

0x8fee,	// (0x0005b994) bg_tb_trans_pane_g5

0x9016,	// (0x0005b9bc) bg_tb_trans_pane_g6

0x900e,	// (0x0005b9b4) bg_tb_trans_pane_g7

0x8ffe,	// (0x0005b9a4) bg_tb_trans_pane_g8

0x9006,	// (0x0005b9ac) bg_tb_trans_pane_g9

0x0008,

0xfc27,	// (0x000625cd) bg_tb_trans_pane_g

0xc3a4,	// (0x0005ed4a) cell_toolbar_trans_pane_ParamLimits

0xc3a4,	// (0x0005ed4a) cell_toolbar_trans_pane

0xb797,	// (0x0005e13d) cell_toolbar_trans_pane_g1

0xb3cf,	// (0x0005dd75) list_form2_midp_pane_t1

0xb3dd,	// (0x0005dd83) list_form2_midp_pane_t2

0x0001,

0xfac4,	// (0x0006246a) list_form2_midp_pane_t

0xb3eb,	// (0x0005dd91) scroll_pane_cp51_ParamLimits

0xb5b2,	// (0x0005df58) form2_midp_wait_pane_g1

0xb5bb,	// (0x0005df61) form2_midp_wait_pane_g2

0xb5c4,	// (0x0005df6a) form2_midp_wait_pane_g3

0x0002,

0xfad9,	// (0x0006247f) form2_midp_wait_pane_g

0xed63,	// (0x00061709) list_highlight_pane_cp21_ParamLimits

0xb5fd,	// (0x0005dfa3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb60c,	// (0x0005dfb2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9c3c,	// (0x0005c5e2) list_single_2graphic_im_pane_ParamLimits

0x9c3c,	// (0x0005c5e2) list_single_2graphic_im_pane

0xc3ca,	// (0x0005ed70) list_single_2graphic_im_pane_g1_ParamLimits

0xc3ca,	// (0x0005ed70) list_single_2graphic_im_pane_g1

0xc3db,	// (0x0005ed81) list_single_2graphic_im_pane_g2_ParamLimits

0xc3db,	// (0x0005ed81) list_single_2graphic_im_pane_g2

0xc3e7,	// (0x0005ed8d) list_single_2graphic_im_pane_g3_ParamLimits

0xc3e7,	// (0x0005ed8d) list_single_2graphic_im_pane_g3

0x0003,

0xfc3a,	// (0x000625e0) list_single_2graphic_im_pane_g_ParamLimits

0xfc3a,	// (0x000625e0) list_single_2graphic_im_pane_g

0xc407,	// (0x0005edad) list_single_2graphic_im_pane_t1_ParamLimits

0xc407,	// (0x0005edad) list_single_2graphic_im_pane_t1

0xbe25,	// (0x0005e7cb) list_single_graphic_2heading_pane_fp_ParamLimits

0xbe25,	// (0x0005e7cb) list_single_graphic_2heading_pane_fp

0x3ed3,	// (0x00056879) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3ed3,	// (0x00056879) list_single_graphic_2heading_pane_fp_g1

0xbe3e,	// (0x0005e7e4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbe3e,	// (0x0005e7e4) list_single_graphic_2heading_pane_fp_g2

0xbd97,	// (0x0005e73d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbd97,	// (0x0005e73d) list_single_graphic_2heading_pane_fp_g3

0xbda3,	// (0x0005e749) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbda3,	// (0x0005e749) list_single_graphic_2heading_pane_fp_g4

0xbe4a,	// (0x0005e7f0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbe4a,	// (0x0005e7f0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb61,	// (0x00062507) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb61,	// (0x00062507) list_single_graphic_2heading_pane_fp_g

0x3ffa,	// (0x000569a0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3ffa,	// (0x000569a0) list_single_graphic_2heading_pane_fp_t1

0x3f0b,	// (0x000568b1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3f0b,	// (0x000568b1) list_single_graphic_2heading_pane_fp_t2

0x4010,	// (0x000569b6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4010,	// (0x000569b6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc43,	// (0x000625e9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc43,	// (0x000625e9) list_single_graphic_2heading_pane_fp_t

0xb828,	// (0x0005e1ce) fep_hwr_write_pane_g5_ParamLimits

0xb828,	// (0x0005e1ce) fep_hwr_write_pane_g5

0xb834,	// (0x0005e1da) fep_hwr_write_pane_g6_ParamLimits

0xb834,	// (0x0005e1da) fep_hwr_write_pane_g6

0xc106,	// (0x0005eaac) eswt_shell_pane_ParamLimits

0x904a,	// (0x0005b9f0) bg_popup_window_pane_cp18_ParamLimits

0xa4bc,	// (0x0005ce62) heading_pane_cp70

0xc230,	// (0x0005ebd6) popup_eswt_tasktip_window_t1_ParamLimits

0x8b1b,	// (0x0005b4c1) aid_touch_tab_arrow_left

0x8b27,	// (0x0005b4cd) aid_touch_tab_arrow_right

0x5160,	// (0x00057b06) title_pane_g3_ParamLimits

0x5160,	// (0x00057b06) title_pane_g3

0xf372,	// (0x00061d18) set_value_pane_g1

0x69a1,	// (0x00059347) popup_toolbar_trans_pane_ParamLimits

0xc37e,	// (0x0005ed24) aid_size_cell_tb_trans_pane_ParamLimits

0xf3b3,	// (0x00061d59) bg_tb_trans_pane_ParamLimits

0xc390,	// (0x0005ed36) grid_tb_trans_pane_ParamLimits

0xeea4,	// (0x0006184a) cont_note_pane_ParamLimits

0xeea4,	// (0x0006184a) cont_note_pane

0xf12e,	// (0x00061ad4) cont_snote2_single_text_pane_ParamLimits

0xf12e,	// (0x00061ad4) cont_snote2_single_text_pane

0xf12e,	// (0x00061ad4) cont_snote2_single_graphic_pane_ParamLimits

0xf12e,	// (0x00061ad4) cont_snote2_single_graphic_pane

0x963c,	// (0x0005bfe2) cont_note_wait_pane_ParamLimits

0x963c,	// (0x0005bfe2) cont_note_wait_pane

0x963c,	// (0x0005bfe2) cont_note_image_pane_ParamLimits

0x963c,	// (0x0005bfe2) cont_note_image_pane

0xc438,	// (0x0005edde) popup_note2_window_g1_ParamLimits

0xc438,	// (0x0005edde) popup_note2_window_g1

0xc469,	// (0x0005ee0f) popup_note2_window_t1_ParamLimits

0xc469,	// (0x0005ee0f) popup_note2_window_t1

0xc4ae,	// (0x0005ee54) popup_note2_window_t2_ParamLimits

0xc4ae,	// (0x0005ee54) popup_note2_window_t2

0xc4f3,	// (0x0005ee99) popup_note2_window_t3_ParamLimits

0xc4f3,	// (0x0005ee99) popup_note2_window_t3

0xc538,	// (0x0005eede) popup_note2_window_t4_ParamLimits

0xc538,	// (0x0005eede) popup_note2_window_t4

0xef28,	// (0x000618ce) popup_note2_window_t5_ParamLimits

0xef28,	// (0x000618ce) popup_note2_window_t5

0x0004,

0xfc4f,	// (0x000625f5) popup_note2_window_t_ParamLimits

0xfc4f,	// (0x000625f5) popup_note2_window_t

0xc567,	// (0x0005ef0d) popup_note2_image_window_g1_ParamLimits

0xc567,	// (0x0005ef0d) popup_note2_image_window_g1

0xc573,	// (0x0005ef19) popup_note2_image_window_g2_ParamLimits

0xc573,	// (0x0005ef19) popup_note2_image_window_g2

0x0001,

0xfc5a,	// (0x00062600) popup_note2_image_window_g_ParamLimits

0xfc5a,	// (0x00062600) popup_note2_image_window_g

0xc585,	// (0x0005ef2b) popup_note2_image_window_t1_ParamLimits

0xc585,	// (0x0005ef2b) popup_note2_image_window_t1

0xc59d,	// (0x0005ef43) popup_note2_image_window_t2_ParamLimits

0xc59d,	// (0x0005ef43) popup_note2_image_window_t2

0xc5b5,	// (0x0005ef5b) popup_note2_image_window_t3_ParamLimits

0xc5b5,	// (0x0005ef5b) popup_note2_image_window_t3

0x0002,

0xfc5f,	// (0x00062605) popup_note2_image_window_t_ParamLimits

0xfc5f,	// (0x00062605) popup_note2_image_window_t

0x964a,	// (0x0005bff0) popup_note2_wait_window_g1_ParamLimits

0x964a,	// (0x0005bff0) popup_note2_wait_window_g1

0xc5d1,	// (0x0005ef77) popup_note2_wait_window_g2_ParamLimits

0xc5d1,	// (0x0005ef77) popup_note2_wait_window_g2

0x9662,	// (0x0005c008) popup_note2_wait_window_g3_ParamLimits

0x9662,	// (0x0005c008) popup_note2_wait_window_g3

0x0002,

0xfc66,	// (0x0006260c) popup_note2_wait_window_g_ParamLimits

0xfc66,	// (0x0006260c) popup_note2_wait_window_g

0xc5dd,	// (0x0005ef83) popup_note2_wait_window_t1_ParamLimits

0xc5dd,	// (0x0005ef83) popup_note2_wait_window_t1

0xc5fb,	// (0x0005efa1) popup_note2_wait_window_t2_ParamLimits

0xc5fb,	// (0x0005efa1) popup_note2_wait_window_t2

0xc619,	// (0x0005efbf) popup_note2_wait_window_t3_ParamLimits

0xc619,	// (0x0005efbf) popup_note2_wait_window_t3

0xc62b,	// (0x0005efd1) popup_note2_wait_window_t4_ParamLimits

0xc62b,	// (0x0005efd1) popup_note2_wait_window_t4

0x0003,

0xfc6d,	// (0x00062613) popup_note2_wait_window_t_ParamLimits

0xfc6d,	// (0x00062613) popup_note2_wait_window_t

0xc63d,	// (0x0005efe3) wait_bar2_pane_ParamLimits

0xc63d,	// (0x0005efe3) wait_bar2_pane

0xc655,	// (0x0005effb) popup_snote2_single_text_window_g1_ParamLimits

0xc655,	// (0x0005effb) popup_snote2_single_text_window_g1

0xc67d,	// (0x0005f023) popup_snote2_single_text_window_t1_ParamLimits

0xc67d,	// (0x0005f023) popup_snote2_single_text_window_t1

0xc6c9,	// (0x0005f06f) popup_snote2_single_text_window_t2_ParamLimits

0xc6c9,	// (0x0005f06f) popup_snote2_single_text_window_t2

0xc715,	// (0x0005f0bb) popup_snote2_single_text_window_t3_ParamLimits

0xc715,	// (0x0005f0bb) popup_snote2_single_text_window_t3

0xc756,	// (0x0005f0fc) popup_snote2_single_text_window_t4_ParamLimits

0xc756,	// (0x0005f0fc) popup_snote2_single_text_window_t4

0xc78c,	// (0x0005f132) popup_snote2_single_text_window_t5_ParamLimits

0xc78c,	// (0x0005f132) popup_snote2_single_text_window_t5

0x0004,

0xfc76,	// (0x0006261c) popup_snote2_single_text_window_t_ParamLimits

0xfc76,	// (0x0006261c) popup_snote2_single_text_window_t

0xc7b7,	// (0x0005f15d) popup_snote2_single_graphic_window_g1_ParamLimits

0xc7b7,	// (0x0005f15d) popup_snote2_single_graphic_window_g1

0xc7df,	// (0x0005f185) popup_snote2_single_graphic_window_g2_ParamLimits

0xc7df,	// (0x0005f185) popup_snote2_single_graphic_window_g2

0x0001,

0xfc81,	// (0x00062627) popup_snote2_single_graphic_window_g_ParamLimits

0xfc81,	// (0x00062627) popup_snote2_single_graphic_window_g

0xc807,	// (0x0005f1ad) popup_snote2_single_graphic_window_t1_ParamLimits

0xc807,	// (0x0005f1ad) popup_snote2_single_graphic_window_t1

0xc853,	// (0x0005f1f9) popup_snote2_single_graphic_window_t2_ParamLimits

0xc853,	// (0x0005f1f9) popup_snote2_single_graphic_window_t2

0xc715,	// (0x0005f0bb) popup_snote2_single_graphic_window_t3_ParamLimits

0xc715,	// (0x0005f0bb) popup_snote2_single_graphic_window_t3

0xc756,	// (0x0005f0fc) popup_snote2_single_graphic_window_t4_ParamLimits

0xc756,	// (0x0005f0fc) popup_snote2_single_graphic_window_t4

0xc78c,	// (0x0005f132) popup_snote2_single_graphic_window_t5_ParamLimits

0xc78c,	// (0x0005f132) popup_snote2_single_graphic_window_t5

0x0004,

0xfc86,	// (0x0006262c) popup_snote2_single_graphic_window_t_ParamLimits

0xfc86,	// (0x0006262c) popup_snote2_single_graphic_window_t

0xb29b,	// (0x0005dc41) clock_nsta_pane_cp2_t1

0xb29b,	// (0x0005dc41) clock_nsta_pane_cp2_t2

0x0001,

0xfa9a,	// (0x00062440) clock_nsta_pane_cp2_t

0x3288,	// (0x00055c2e) form_field_data_wide_pane_g1_ParamLimits

0xf3c1,	// (0x00061d67) form_field_data_wide_pane_g2_ParamLimits

0xf3c1,	// (0x00061d67) form_field_data_wide_pane_g2

0xf3cd,	// (0x00061d73) form_field_data_wide_pane_g3_ParamLimits

0xf3cd,	// (0x00061d73) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00062001) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00062001) form_field_data_wide_pane_g

0xb176,	// (0x0005db1c) grid_touch_3_pane_ParamLimits

0xb176,	// (0x0005db1c) grid_touch_3_pane

0xc89f,	// (0x0005f245) cell_touch_3_pane_ParamLimits

0xc89f,	// (0x0005f245) cell_touch_3_pane

0xb797,	// (0x0005e13d) cell_touch_3_pane_g1

0xb797,	// (0x0005e13d) cell_touch_3_pane_g2

0x0001,

0xfb1f,	// (0x000624c5) cell_touch_3_pane_g

0xef80,	// (0x00061926) cont_query_data_pane

0xef88,	// (0x0006192e) cont_query_data_pane_cp1

0xc8d2,	// (0x0005f278) button_value_adjust_pane_cp7

0xc8da,	// (0x0005f280) query_popup_pane_cp3

0x36aa,	// (0x00056050) bg_popup_sub_pane_cp22_ParamLimits

0x5fd8,	// (0x0005897e) navi_navi_volume_pane_cp2

0x5ff3,	// (0x00058999) popup_side_volume_key_window_g2

0x6002,	// (0x000589a8) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00062097) popup_side_volume_key_window_g

0x601f,	// (0x000589c5) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0006209e) popup_side_volume_key_window_t

0x84ee,	// (0x0005ae94) popup_side_volume_key_window_ParamLimits

0x56af,	// (0x00058055) list_double_graphic_pane_g4_ParamLimits

0x56af,	// (0x00058055) list_double_graphic_pane_g4

0x9c6b,	// (0x0005c611) list_single_2heading_msg_pane_ParamLimits

0x9c6b,	// (0x0005c611) list_single_2heading_msg_pane

0x9d58,	// (0x0005c6fe) list_single_2heading_msg_pane_g1_ParamLimits

0x9d58,	// (0x0005c6fe) list_single_2heading_msg_pane_g1

0x9d64,	// (0x0005c70a) list_single_2heading_msg_pane_g2_ParamLimits

0x9d64,	// (0x0005c70a) list_single_2heading_msg_pane_g2

0x9d70,	// (0x0005c716) list_single_2heading_msg_pane_g3_ParamLimits

0x9d70,	// (0x0005c716) list_single_2heading_msg_pane_g3

0x9d7c,	// (0x0005c722) list_single_2heading_msg_pane_g4_ParamLimits

0x9d7c,	// (0x0005c722) list_single_2heading_msg_pane_g4

0x0003,

0xfc91,	// (0x00062637) list_single_2heading_msg_pane_g_ParamLimits

0xfc91,	// (0x00062637) list_single_2heading_msg_pane_g

0x7467,	// (0x00059e0d) list_single_2heading_msg_pane_t1_ParamLimits

0x7467,	// (0x00059e0d) list_single_2heading_msg_pane_t1

0x748f,	// (0x00059e35) list_single_2heading_msg_pane_t2_ParamLimits

0x748f,	// (0x00059e35) list_single_2heading_msg_pane_t2

0x74be,	// (0x00059e64) list_single_2heading_msg_pane_t3_ParamLimits

0x74be,	// (0x00059e64) list_single_2heading_msg_pane_t3

0x426e,	// (0x00056c14) list_single_2heading_msg_pane_t4_ParamLimits

0x426e,	// (0x00056c14) list_single_2heading_msg_pane_t4

0x0003,

0xfc9a,	// (0x00062640) list_single_2heading_msg_pane_t_ParamLimits

0xfc9a,	// (0x00062640) list_single_2heading_msg_pane_t

0xed1f,	// (0x000616c5) title_pane_g4_ParamLimits

0xed1f,	// (0x000616c5) title_pane_g4

0x5c48,	// (0x000585ee) title_pane_stacon_g3_ParamLimits

0x5c48,	// (0x000585ee) title_pane_stacon_g3

0xc3fb,	// (0x0005eda1) list_single_2graphic_im_pane_g4_ParamLimits

0xc3fb,	// (0x0005eda1) list_single_2graphic_im_pane_g4

0xa26f,	// (0x0005cc15) popup_side_volume_key_window_cp

0xaa86,	// (0x0005d42c) main_idle_act2_pane_t1

0x6aa5,	// (0x0005944b) toolbar_button_pane_g10

0x54bd,	// (0x00057e63) popup_toolbar_window_cp1

0xb28c,	// (0x0005dc32) clock_nsta_pane_cp_t1

0xb28c,	// (0x0005dc32) clock_nsta_pane_cp_t2

0x0001,

0xfa95,	// (0x0006243b) clock_nsta_pane_cp_t

0x5fd8,	// (0x0005897e) navi_navi_volume_pane_cp2_ParamLimits

0x5fe7,	// (0x0005898d) popup_side_volume_key_window_g1_ParamLimits

0x5ff3,	// (0x00058999) popup_side_volume_key_window_g2_ParamLimits

0x6002,	// (0x000589a8) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00062097) popup_side_volume_key_window_g_ParamLimits

0x7017,	// (0x000599bd) fep_hwr_aid_pane

0x70c0,	// (0x00059a66) bg_fep_hwr_top_pane_g4_ParamLimits

0xb7f8,	// (0x0005e19e) fep_hwr_top_pane_g1_ParamLimits

0xb80a,	// (0x0005e1b0) fep_hwr_top_pane_g2_ParamLimits

0x70e0,	// (0x00059a86) fep_hwr_top_pane_g3_ParamLimits

0xfaea,	// (0x00062490) fep_hwr_top_pane_g_ParamLimits

0x70f5,	// (0x00059a9b) fep_hwr_top_text_pane_ParamLimits

0xa024,	// (0x0005c9ca) aid_touch_tab_arrow_arrow_2

0xa02d,	// (0x0005c9d3) aid_touch_tab_arrow_left_2

0x702b,	// (0x000599d1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7062,	// (0x00059a08) fep_hwr_prediction_pane

0xb960,	// (0x0005e306) fep_vkb_prediction_pane

0xba66,	// (0x0005e40c) fep_vkb_side_pane_g3_ParamLimits

0xba66,	// (0x0005e40c) fep_vkb_side_pane_g3

0x7284,	// (0x00059c2a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x72f5,	// (0x00059c9b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7302,	// (0x00059ca8) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb99,	// (0x0006253f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x74f7,	// (0x00059e9d) fep_hwr_prediction_pane_g1

0x7501,	// (0x00059ea7) fep_hwr_prediction_pane_g2

0x7509,	// (0x00059eaf) fep_hwr_prediction_pane_g3

0x7511,	// (0x00059eb7) fep_hwr_prediction_pane_g4

0x0003,

0xfca3,	// (0x00062649) fep_hwr_prediction_pane_g

0xc901,	// (0x0005f2a7) fep_vkb_prediction_pane_g1

0xc90b,	// (0x0005f2b1) fep_vkb_prediction_pane_g2

0xc913,	// (0x0005f2b9) fep_vkb_prediction_pane_g3

0xc91b,	// (0x0005f2c1) fep_vkb_prediction_pane_g4

0x0003,

0xfcac,	// (0x00062652) fep_vkb_prediction_pane_g

0x6df5,	// (0x0005979b) slider_set_pane_g3

0x6e09,	// (0x000597af) slider_set_pane_g4

0x6e21,	// (0x000597c7) slider_set_pane_g5

0x6df5,	// (0x0005979b) slider_set_pane_g6

0x6e37,	// (0x000597dd) slider_set_pane_g7

0xa6f5,	// (0x0005d09b) slider_form_pane_g3

0xa6fe,	// (0x0005d0a4) slider_form_pane_g4

0xa706,	// (0x0005d0ac) slider_form_pane_g5

0xa6f5,	// (0x0005d09b) slider_form_pane_g6

0xa70e,	// (0x0005d0b4) slider_form_pane_g7

0xad4a,	// (0x0005d6f0) slider_set_pane_vc_g3

0xad53,	// (0x0005d6f9) slider_set_pane_vc_g4

0xad5c,	// (0x0005d702) slider_set_pane_vc_g5

0xad4a,	// (0x0005d6f0) slider_set_pane_vc_g6

0xad65,	// (0x0005d70b) slider_set_pane_vc_g7

0xaf3b,	// (0x0005d8e1) slider_form_pane_vc_g1

0xaf44,	// (0x0005d8ea) slider_form_pane_vc_g2

0xaf4d,	// (0x0005d8f3) slider_form_pane_vc_g3

0xaf3b,	// (0x0005d8e1) slider_form_pane_vc_g4

0xaf56,	// (0x0005d8fc) slider_form_pane_vc_g5

0x0004,

0xfa67,	// (0x0006240d) slider_form_pane_vc_g

0x4ed1,	// (0x00057877) main_idle_act3_pane

0xc923,	// (0x0005f2c9) ai3_links_pane

0xc92c,	// (0x0005f2d2) popup_ai3_data_window_ParamLimits

0xc92c,	// (0x0005f2d2) popup_ai3_data_window

0xed01,	// (0x000616a7) grid_ai3_links_pane

0xc94a,	// (0x0005f2f0) cell_ai3_links_pane_ParamLimits

0xc94a,	// (0x0005f2f0) cell_ai3_links_pane

0xc964,	// (0x0005f30a) bg_popup_sub_pane_cp11

0xc971,	// (0x0005f317) cell_ai3_links_pane_g1

0xed01,	// (0x000616a7) bg_popup_sub_pane_cp12

0xc996,	// (0x0005f33c) heading_ai3_data_pane

0xc99e,	// (0x0005f344) list_ai3_gene_pane

0xc9aa,	// (0x0005f350) popup_ai3_data_window_g1

0xc9b2,	// (0x0005f358) heading_ai3_data_pane_g1

0xc9ba,	// (0x0005f360) heading_ai3_data_pane_t1

0xc9c8,	// (0x0005f36e) list_double_ai3_gene_pane_ParamLimits

0xc9c8,	// (0x0005f36e) list_double_ai3_gene_pane

0xc9d5,	// (0x0005f37b) list_single_ai3_gene_pane_ParamLimits

0xc9d5,	// (0x0005f37b) list_single_ai3_gene_pane

0xb75c,	// (0x0005e102) list_highlight_pane_cp7_ParamLimits

0xb75c,	// (0x0005e102) list_highlight_pane_cp7

0xc9e2,	// (0x0005f388) list_single_a13_gene_pane_t1_ParamLimits

0xc9e2,	// (0x0005f388) list_single_a13_gene_pane_t1

0xc9f9,	// (0x0005f39f) list_single_ai3_gene_pane_g1

0xca02,	// (0x0005f3a8) list_single_ai3_gene_pane_g2

0x0001,

0xfcb5,	// (0x0006265b) list_single_ai3_gene_pane_g

0xca0a,	// (0x0005f3b0) list_double_ai3_gene_pane_g1_ParamLimits

0xca0a,	// (0x0005f3b0) list_double_ai3_gene_pane_g1

0xca16,	// (0x0005f3bc) list_double_ai3_gene_pane_t1_ParamLimits

0xca16,	// (0x0005f3bc) list_double_ai3_gene_pane_t1

0xca32,	// (0x0005f3d8) list_double_ai3_gene_pane_t2_ParamLimits

0xca32,	// (0x0005f3d8) list_double_ai3_gene_pane_t2

0xca47,	// (0x0005f3ed) list_double_ai3_gene_pane_t3_ParamLimits

0xca47,	// (0x0005f3ed) list_double_ai3_gene_pane_t3

0x0002,

0xfcba,	// (0x00062660) list_double_ai3_gene_pane_t_ParamLimits

0xfcba,	// (0x00062660) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4026,	// (0x000569cc) aid_size_min_col_2

0xc8eb,	// (0x0005f291) aid_size_min_msg_ParamLimits

0xc8eb,	// (0x0005f291) aid_size_min_msg

0xbb72,	// (0x0005e518) fep_vkb_top_text_pane_g2_ParamLimits

0xbb72,	// (0x0005e518) fep_vkb_top_text_pane_g2

0x0001,

0xfb1a,	// (0x000624c0) fep_vkb_top_text_pane_g_ParamLimits

0xfb1a,	// (0x000624c0) fep_vkb_top_text_pane_g

0x4ed1,	// (0x00057877) main_hc_apps_shell_pane

0xca64,	// (0x0005f40a) grid_hc_apps_pane_ParamLimits

0xca64,	// (0x0005f40a) grid_hc_apps_pane

0xca76,	// (0x0005f41c) list_hc_apps_pane

0xca7e,	// (0x0005f424) scroll_pane_cp37_ParamLimits

0xca7e,	// (0x0005f424) scroll_pane_cp37

0xca8a,	// (0x0005f430) cell_hc_apps_pane_ParamLimits

0xca8a,	// (0x0005f430) cell_hc_apps_pane

0xcb40,	// (0x0005f4e6) cell_hc_apps_pane_g1_ParamLimits

0xcb40,	// (0x0005f4e6) cell_hc_apps_pane_g1

0xcb6c,	// (0x0005f512) cell_hc_apps_pane_g2_ParamLimits

0xcb6c,	// (0x0005f512) cell_hc_apps_pane_g2

0xcb88,	// (0x0005f52e) cell_hc_apps_pane_g3_ParamLimits

0xcb88,	// (0x0005f52e) cell_hc_apps_pane_g3

0x0002,

0xfcc1,	// (0x00062667) cell_hc_apps_pane_g_ParamLimits

0xfcc1,	// (0x00062667) cell_hc_apps_pane_g

0xcbaa,	// (0x0005f550) cell_hc_apps_pane_t1_ParamLimits

0xcbaa,	// (0x0005f550) cell_hc_apps_pane_t1

0xeea4,	// (0x0006184a) grid_highlight_pane_cp10_ParamLimits

0xeea4,	// (0x0006184a) grid_highlight_pane_cp10

0xcbea,	// (0x0005f590) list_single_hc_apps_pane_ParamLimits

0xcbea,	// (0x0005f590) list_single_hc_apps_pane

0xcc29,	// (0x0005f5cf) list_single_hc_apps_pane_g1

0x9d94,	// (0x0005c73a) list_single_hc_apps_pane_g2

0x0001,

0xfcc8,	// (0x0006266e) list_single_hc_apps_pane_g

0x9dad,	// (0x0005c753) list_single_hc_apps_pane_g2_copy1

0x7519,	// (0x00059ebf) list_single_hc_apps_pane_t1

0xed63,	// (0x00061709) bg_set_opt_pane_cp_ParamLimits

0x5212,	// (0x00057bb8) setting_slider_pane_t1_ParamLimits

0x522b,	// (0x00057bd1) setting_slider_pane_t2_ParamLimits

0x5245,	// (0x00057beb) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00061edf) setting_slider_pane_t_ParamLimits

0x525d,	// (0x00057c03) slider_set_pane_ParamLimits

0x6318,	// (0x00058cbe) control_pane_g5_ParamLimits

0x6318,	// (0x00058cbe) control_pane_g5

0xa528,	// (0x0005cece) slider_set_pane_g1_ParamLimits

0x6de9,	// (0x0005978f) slider_set_pane_g2_ParamLimits

0x6df5,	// (0x0005979b) slider_set_pane_g3_ParamLimits

0x6e09,	// (0x000597af) slider_set_pane_g4_ParamLimits

0x6e21,	// (0x000597c7) slider_set_pane_g5_ParamLimits

0x6df5,	// (0x0005979b) slider_set_pane_g6_ParamLimits

0x6e37,	// (0x000597dd) slider_set_pane_g7_ParamLimits

0xf944,	// (0x000622ea) slider_set_pane_g_ParamLimits

0x85d2,	// (0x0005af78) navi_icon_text_pane_ParamLimits

0x8ada,	// (0x0005b480) aid_fill_nsta_2_ParamLimits

0x8b1b,	// (0x0005b4c1) aid_touch_tab_arrow_left_ParamLimits

0x8b27,	// (0x0005b4cd) aid_touch_tab_arrow_right_ParamLimits

0x8b93,	// (0x0005b539) clock_nsta_pane_ParamLimits

0xa006,	// (0x0005c9ac) navi_icon_pane_g1_ParamLimits

0xa012,	// (0x0005c9b8) navi_text_pane_t1_ParamLimits

0xb3a9,	// (0x0005dd4f) navi_icon_text_pane_g1_ParamLimits

0xb3b5,	// (0x0005dd5b) navi_icon_text_pane_t1_ParamLimits

0xcc29,	// (0x0005f5cf) list_single_hc_apps_pane_g1_ParamLimits

0x9d94,	// (0x0005c73a) list_single_hc_apps_pane_g2_ParamLimits

0xfcc8,	// (0x0006266e) list_single_hc_apps_pane_g_ParamLimits

0x9dad,	// (0x0005c753) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7519,	// (0x00059ebf) list_single_hc_apps_pane_t1_ParamLimits

0x5046,	// (0x000579ec) popup_toolbar2_fixed_window_ParamLimits

0x5046,	// (0x000579ec) popup_toolbar2_fixed_window

0x6997,	// (0x0005933d) popup_toolbar2_float_window

0xed01,	// (0x000616a7) bg_popup_sub_pane_cp27

0xcc42,	// (0x0005f5e8) grid_toolbar2_float_pane

0xed01,	// (0x000616a7) bg_popup_sub_pane_cp26

0xcc42,	// (0x0005f5e8) grid_toolbar2_fixed_pane

0xcc4a,	// (0x0005f5f0) cell_toolbar2_fixed_pane_ParamLimits

0xcc4a,	// (0x0005f5f0) cell_toolbar2_fixed_pane

0xcc5a,	// (0x0005f600) cell_toolbar2_fixed_pane_g1

0xcc63,	// (0x0005f609) toolbar2_fixed_button_pane

0x8fd6,	// (0x0005b97c) toolbar2_fixed_button_pane_g1

0x8fe6,	// (0x0005b98c) toolbar2_fixed_button_pane_g2

0x8fde,	// (0x0005b984) toolbar2_fixed_button_pane_g3

0x8ff6,	// (0x0005b99c) toolbar2_fixed_button_pane_g4

0x8fee,	// (0x0005b994) toolbar2_fixed_button_pane_g5

0x8ffe,	// (0x0005b9a4) toolbar2_fixed_button_pane_g6

0x9006,	// (0x0005b9ac) toolbar2_fixed_button_pane_g7

0x9016,	// (0x0005b9bc) toolbar2_fixed_button_pane_g8

0x900e,	// (0x0005b9b4) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x000621ec) toolbar2_fixed_button_pane_g

0xcc6b,	// (0x0005f611) cell_toolbar2_float_pane_ParamLimits

0xcc6b,	// (0x0005f611) cell_toolbar2_float_pane

0xcc7c,	// (0x0005f622) cell_toolbar2_float_pane_g1

0xcc63,	// (0x0005f609) toolbar2_fixed_button_pane_cp

0xb8ce,	// (0x0005e274) fep_vkb_accented_list_pane_ParamLimits

0xb8ce,	// (0x0005e274) fep_vkb_accented_list_pane

0x7264,	// (0x00059c0a) bg_popup_fep_shadow_pane_g9

0x8761,	// (0x0005b107) bg_popup_fep_shadow_pane_cp3

0xf4d6,	// (0x00061e7c) list_accented_list_pane

0xcc85,	// (0x0005f62b) list_single_accented_list_pane_ParamLimits

0xcc85,	// (0x0005f62b) list_single_accented_list_pane

0x8761,	// (0x0005b107) list_highlight_pane_cp10

0xcc96,	// (0x0005f63c) list_single_accented_list_pane_t1

0x68dd,	// (0x00059283) popup_slider_window_ParamLimits

0x68dd,	// (0x00059283) popup_slider_window

0xc8e2,	// (0x0005f288) aid_indentation_list_msg

0xcd66,	// (0x0005f70c) bg_popup_window_pane_cp19

0xcdd2,	// (0x0005f778) popup_slider_window_g1

0xcdee,	// (0x0005f794) popup_slider_window_g2

0xce0a,	// (0x0005f7b0) popup_slider_window_g3

0x0005,

0xfccd,	// (0x00062673) popup_slider_window_g

0xce70,	// (0x0005f816) popup_slider_window_t1

0xcee4,	// (0x0005f88a) small_volume_slider_vertical_pane

0xb797,	// (0x0005e13d) small_volume_slider_vertical_pane_g1

0xb797,	// (0x0005e13d) small_volume_slider_vertical_pane_g2

0xcf00,	// (0x0005f8a6) small_volume_slider_vertical_pane_g3

0x0002,

0xfcdf,	// (0x00062685) small_volume_slider_vertical_pane_g

0x4df4,	// (0x0005779a) area_side_right_pane_ParamLimits

0x4df4,	// (0x0005779a) area_side_right_pane

0x7547,	// (0x00059eed) aid_size_side_button_ParamLimits

0x7547,	// (0x00059eed) aid_size_side_button

0x755b,	// (0x00059f01) grid_sctrl_middle_pane_ParamLimits

0x755b,	// (0x00059f01) grid_sctrl_middle_pane

0x757a,	// (0x00059f20) sctrl_sk_bottom_pane

0x758b,	// (0x00059f31) sctrl_sk_top_pane

0x759d,	// (0x00059f43) aid_touch_sctrl_top

0x75aa,	// (0x00059f50) bg_sctrl_sk_pane_ParamLimits

0x75aa,	// (0x00059f50) bg_sctrl_sk_pane

0x75b8,	// (0x00059f5e) sctrl_sk_top_pane_g1

0x75c5,	// (0x00059f6b) sctrl_sk_top_pane_t1

0x759d,	// (0x00059f43) aid_touch_sctrl_bottom

0x75aa,	// (0x00059f50) bg_sctrl_sk_pane_cp_ParamLimits

0x75aa,	// (0x00059f50) bg_sctrl_sk_pane_cp

0x75e0,	// (0x00059f86) sctrl_sk_bottom_pane_g1

0x75c5,	// (0x00059f6b) sctrl_sk_bottom_pane_t1

0x75e9,	// (0x00059f8f) cell_sctrl_middle_pane_ParamLimits

0x75e9,	// (0x00059f8f) cell_sctrl_middle_pane

0x7606,	// (0x00059fac) aid_touch_sctrl_middle_ParamLimits

0x7606,	// (0x00059fac) aid_touch_sctrl_middle

0x7618,	// (0x00059fbe) bg_sctrl_middle_pane_ParamLimits

0x7618,	// (0x00059fbe) bg_sctrl_middle_pane

0x7284,	// (0x00059c2a) cell_sctrl_middle_pane_g1_ParamLimits

0x7284,	// (0x00059c2a) cell_sctrl_middle_pane_g1

0x7626,	// (0x00059fcc) cell_sctrl_middle_pane_g2_ParamLimits

0x7626,	// (0x00059fcc) cell_sctrl_middle_pane_g2

0x0001,

0xfceb,	// (0x00062691) cell_sctrl_middle_pane_g_ParamLimits

0xfceb,	// (0x00062691) cell_sctrl_middle_pane_g

0x8fd6,	// (0x0005b97c) bg_sctrl_middle_pane_g1

0x8fde,	// (0x0005b984) bg_sctrl_middle_pane_g2

0x8fe6,	// (0x0005b98c) bg_sctrl_middle_pane_g3

0x8fee,	// (0x0005b994) bg_sctrl_middle_pane_g4

0x8ff6,	// (0x0005b99c) bg_sctrl_middle_pane_g5

0x8ffe,	// (0x0005b9a4) bg_sctrl_middle_pane_g6

0x9006,	// (0x0005b9ac) bg_sctrl_middle_pane_g7

0x900e,	// (0x0005b9b4) bg_sctrl_middle_pane_g8

0x0007,

0xfcf0,	// (0x00062696) bg_sctrl_middle_pane_g

0x9016,	// (0x0005b9bc) bg_sctrl_middle_pane_g8_copy1

0x8fd6,	// (0x0005b97c) bg_sctrl_sk_pane_g1

0x8fe6,	// (0x0005b98c) bg_sctrl_sk_pane_g2

0x8fde,	// (0x0005b984) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x000621ec) bg_sctrl_sk_pane_g

0xf2ec,	// (0x00061c92) aid_size_touch_scroll_bar

0x8ff6,	// (0x0005b99c) bg_sctrl_sk_pane_g4

0x8fee,	// (0x0005b994) bg_sctrl_sk_pane_g5

0x8ffe,	// (0x0005b9a4) bg_sctrl_sk_pane_g6

0x9006,	// (0x0005b9ac) bg_sctrl_sk_pane_g7

0x9016,	// (0x0005b9bc) bg_sctrl_sk_pane_g8

0x900e,	// (0x0005b9b4) bg_sctrl_sk_pane_g9

0x64f2,	// (0x00058e98) popup_fep_china_hwr2_fs_candidate_window

0x64fc,	// (0x00058ea2) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x64fc,	// (0x00058ea2) popup_fep_china_hwr2_fs_control_window

0x7284,	// (0x00059c2a) sctrl_sk_top_pane_g2

0x0001,

0xfce6,	// (0x0006268c) sctrl_sk_top_pane_g

0xcf09,	// (0x0005f8af) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcf09,	// (0x0005f8af) aid_fep_china_hwr2_fs_cell

0xcf1c,	// (0x0005f8c2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcf1c,	// (0x0005f8c2) bg_popup_fep_shadow_pane_cp4

0xcf35,	// (0x0005f8db) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcf35,	// (0x0005f8db) bg_popup_fep_shadow_pane_cp5

0xcf47,	// (0x0005f8ed) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf47,	// (0x0005f8ed) popup_fep_china_hwr2_fs_control_bar_grid

0xcf57,	// (0x0005f8fd) popup_fep_china_hwr2_fs_control_funtion_grid

0xcf5f,	// (0x0005f905) aid_fep_china_hwr2_fs_candi_cell

0xed01,	// (0x000616a7) bg_popup_fep_shadow_pane_cp6

0xcf69,	// (0x0005f90f) popup_fep_china_hwr2_fs_candidate_grid

0xcf73,	// (0x0005f919) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcf73,	// (0x0005f919) cell_fep_china_hwr2_fs_funtion_grid

0xb797,	// (0x0005e13d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcf8b,	// (0x0005f931) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcf8b,	// (0x0005f931) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcf99,	// (0x0005f93f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcf99,	// (0x0005f93f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd01,	// (0x000626a7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd01,	// (0x000626a7) cell_fep_china_hwr2_fs_funtion_grid_g

0xcfaf,	// (0x0005f955) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcfaf,	// (0x0005f955) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcfc4,	// (0x0005f96a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcfc4,	// (0x0005f96a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd06,	// (0x000626ac) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd06,	// (0x000626ac) cell_fep_china_hwr2_fs_funtion_grid_t

0xcfe0,	// (0x0005f986) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcfe8,	// (0x0005f98e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcff0,	// (0x0005f996) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0b,	// (0x000626b1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcff8,	// (0x0005f99e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcff8,	// (0x0005f99e) cell_fep_china_hwr2_fs_candidate_grid

0xd017,	// (0x0005f9bd) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd01f,	// (0x0005f9c5) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb797,	// (0x0005e13d) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb797,	// (0x0005e13d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1f,	// (0x000624c5) cell_fep_china_hwr2_fs_candidate_grid_g

0xd027,	// (0x0005f9cd) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8ba6,	// (0x0005b54c) clock_nsta_pane_cp_24_ParamLimits

0x8ba6,	// (0x0005b54c) clock_nsta_pane_cp_24

0x8c26,	// (0x0005b5cc) indicator_nsta_pane_cp_24_ParamLimits

0x8c26,	// (0x0005b5cc) indicator_nsta_pane_cp_24

0x9e82,	// (0x0005c828) heading_pane_g1

0x0001,

0xf8ab,	// (0x00062251) heading_pane_g

0xa8cd,	// (0x0005d273) grid_sct_catagory_button_pane

0xa8ff,	// (0x0005d2a5) scroll_pane_cp5_ParamLimits

0xb3f7,	// (0x0005dd9d) button_value_adjust_pane_cp5_ParamLimits

0xb3f7,	// (0x0005dd9d) button_value_adjust_pane_cp5

0xb4dc,	// (0x0005de82) form2_midp_time_pane_ParamLimits

0xd035,	// (0x0005f9db) cell_sct_catagory_button_pane_ParamLimits

0xd035,	// (0x0005f9db) cell_sct_catagory_button_pane

0xb75c,	// (0x0005e102) bg_button_pane_cp01_ParamLimits

0xb75c,	// (0x0005e102) bg_button_pane_cp01

0xb797,	// (0x0005e13d) cell_sct_catagory_button_pane_g1

0x691e,	// (0x000592c4) popup_tb_extension_window

0xd047,	// (0x0005f9ed) aid_size_cell_ext_ParamLimits

0xd047,	// (0x0005f9ed) aid_size_cell_ext

0xeea4,	// (0x0006184a) bg_tb_trans_pane_cp1_ParamLimits

0xeea4,	// (0x0006184a) bg_tb_trans_pane_cp1

0xd067,	// (0x0005fa0d) grid_tb_ext_pane_ParamLimits

0xd067,	// (0x0005fa0d) grid_tb_ext_pane

0xd095,	// (0x0005fa3b) cell_tb_ext_pane_ParamLimits

0xd095,	// (0x0005fa3b) cell_tb_ext_pane

0xd0ac,	// (0x0005fa52) cell_tb_ext_pane_g1_ParamLimits

0xd0ac,	// (0x0005fa52) cell_tb_ext_pane_g1

0xd0c9,	// (0x0005fa6f) cell_tb_ext_pane_t1

0xeea4,	// (0x0006184a) list_highlight_pane_cp11_ParamLimits

0xeea4,	// (0x0006184a) list_highlight_pane_cp11

0x5065,	// (0x00057a0b) popup_uni_indicator_window_ParamLimits

0x5065,	// (0x00057a0b) popup_uni_indicator_window

0xf3b3,	// (0x00061d59) bg_popup_sub_pane_cp14

0xd0e4,	// (0x0005fa8a) list_uniindi_pane

0xd0f0,	// (0x0005fa96) uniindi_top_pane

0xeea4,	// (0x0006184a) bg_uniindi_top_pane

0xd111,	// (0x0005fab7) uniindi_top_pane_g1

0xd127,	// (0x0005facd) uniindi_top_pane_g2

0x0003,

0xfd12,	// (0x000626b8) uniindi_top_pane_g

0xd151,	// (0x0005faf7) uniindi_top_pane_t1

0xd17d,	// (0x0005fb23) list_single_uniindi_pane_ParamLimits

0xd17d,	// (0x0005fb23) list_single_uniindi_pane

0xb797,	// (0x0005e13d) bg_uniindi_top_pane_g1

0xd190,	// (0x0005fb36) list_single_uniindi_pane_g1

0xd1a3,	// (0x0005fb49) list_single_uniindi_pane_t1

0x4ed1,	// (0x00057877) control_bg_pane

0xd1c8,	// (0x0005fb6e) bg_sctrl_sk_pane_cp1

0xd1d1,	// (0x0005fb77) bg_sctrl_sk_pane_cp2

0xd1da,	// (0x0005fb80) control_bg_pane_g1

0xd1e3,	// (0x0005fb89) control_bg_pane_g2

0x0001,

0xfd1b,	// (0x000626c1) control_bg_pane_g

0xb22f,	// (0x0005dbd5) cell_indicator_nsta_pane_g1_ParamLimits

0xb23d,	// (0x0005dbe3) cell_indicator_nsta_pane_g2_ParamLimits

0xfa83,	// (0x00062429) cell_indicator_nsta_pane_g_ParamLimits

0x3ea9,	// (0x0005684f) form2_midp_time_pane_t1_ParamLimits

0x6450,	// (0x00058df6) main_idle_act4_pane_ParamLimits

0x6450,	// (0x00058df6) main_idle_act4_pane

0x691e,	// (0x000592c4) popup_tb_extension_window_ParamLimits

0xd087,	// (0x0005fa2d) tb_ext_find_pane_ParamLimits

0xd087,	// (0x0005fa2d) tb_ext_find_pane

0xd1ec,	// (0x0005fb92) ai_gene_pane_1_cp1

0x88ab,	// (0x0005b251) ai_gene_pane_2_cp1

0xd1f4,	// (0x0005fb9a) list_single_idle_plugin_calendar_pane

0xd1fd,	// (0x0005fba3) list_single_idle_plugin_notification_pane

0xd206,	// (0x0005fbac) list_single_idle_plugin_player_pane

0xd20f,	// (0x0005fbb5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd20f,	// (0x0005fbb5) list_single_idle_plugin_shortcut_pane

0xd231,	// (0x0005fbd7) main_idle_act4_pane_t1

0xd243,	// (0x0005fbe9) main_idle_act4_pane_t2

0x0001,

0xfd20,	// (0x000626c6) main_idle_act4_pane_t

0xd255,	// (0x0005fbfb) middle_sk_idle_act4_pane_ParamLimits

0xd255,	// (0x0005fbfb) middle_sk_idle_act4_pane

0xd26b,	// (0x0005fc11) popup_clock_digital_analogue_window_cp2

0xd285,	// (0x0005fc2b) shortcut_wheel_idle_act4_pane_ParamLimits

0xd285,	// (0x0005fc2b) shortcut_wheel_idle_act4_pane

0xb797,	// (0x0005e13d) shortcut_wheel_idle_act4_pane_g1

0xb797,	// (0x0005e13d) shortcut_wheel_idle_act4_pane_g2

0xb797,	// (0x0005e13d) shortcut_wheel_idle_act4_pane_g3

0xb797,	// (0x0005e13d) shortcut_wheel_idle_act4_pane_g4

0xb797,	// (0x0005e13d) shortcut_wheel_idle_act4_pane_g5

0xd299,	// (0x0005fc3f) shortcut_wheel_idle_act4_pane_g6

0xd2a1,	// (0x0005fc47) shortcut_wheel_idle_act4_pane_g7

0xd2a9,	// (0x0005fc4f) shortcut_wheel_idle_act4_pane_g8

0xd2b1,	// (0x0005fc57) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd25,	// (0x000626cb) shortcut_wheel_idle_act4_pane_g

0xba12,	// (0x0005e3b8) middle_sk_idle_act4_pane_g1_ParamLimits

0xba12,	// (0x0005e3b8) middle_sk_idle_act4_pane_g1

0xd315,	// (0x0005fcbb) middle_sk_idle_act4_pane_g2_ParamLimits

0xd315,	// (0x0005fcbb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd48,	// (0x000626ee) middle_sk_idle_act4_pane_g_ParamLimits

0xfd48,	// (0x000626ee) middle_sk_idle_act4_pane_g

0xd321,	// (0x0005fcc7) middle_sk_idle_act4_pane_t1_ParamLimits

0xd321,	// (0x0005fcc7) middle_sk_idle_act4_pane_t1

0xd33e,	// (0x0005fce4) grid_ai_shortcut_pane_ParamLimits

0xd33e,	// (0x0005fce4) grid_ai_shortcut_pane

0xd357,	// (0x0005fcfd) list_highlight_pane_cp16_ParamLimits

0xd357,	// (0x0005fcfd) list_highlight_pane_cp16

0xd364,	// (0x0005fd0a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd364,	// (0x0005fd0a) list_single_idle_plugin_shortcut_pane_g1

0xd370,	// (0x0005fd16) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd370,	// (0x0005fd16) list_single_idle_plugin_shortcut_pane_g2

0xd38a,	// (0x0005fd30) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd38a,	// (0x0005fd30) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4d,	// (0x000626f3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4d,	// (0x000626f3) list_single_idle_plugin_shortcut_pane_g

0xd39d,	// (0x0005fd43) cell_ai_shortcut_pane_ParamLimits

0xd39d,	// (0x0005fd43) cell_ai_shortcut_pane

0xd3c0,	// (0x0005fd66) cell_ai_shortcut_pane_g1_ParamLimits

0xd3c0,	// (0x0005fd66) cell_ai_shortcut_pane_g1

0xd1ec,	// (0x0005fb92) ai_gene_pane_1_cp2

0xd3e2,	// (0x0005fd88) ai_gene_pane_2_cp2

0xd3ea,	// (0x0005fd90) list_highlight_pane_cp15

0xd3f3,	// (0x0005fd99) list_single_idle_plugin_calendar_pane_g1

0xd3ea,	// (0x0005fd90) list_highlight_pane_cp17

0xd3fb,	// (0x0005fda1) list_single_idle_plugin_calendar_pane_g1_copy1

0xd403,	// (0x0005fda9) list_single_idle_plugin_player_pane_g1

0xab34,	// (0x0005d4da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd54,	// (0x000626fa) list_single_idle_plugin_player_pane_g

0xd40b,	// (0x0005fdb1) list_single_idle_plugin_player_pane_t1

0xd419,	// (0x0005fdbf) list_single_idle_plugin_player_pane_t2

0xd427,	// (0x0005fdcd) list_single_idle_plugin_player_pane_t3

0xd435,	// (0x0005fddb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd59,	// (0x000626ff) list_single_idle_plugin_player_pane_t

0xd443,	// (0x0005fde9) wait_bar_pane_cp15

0xd44b,	// (0x0005fdf1) grid_ai_notification_pane

0xab34,	// (0x0005d4da) list_single_idle_plugin_notification_pane_g1

0xd454,	// (0x0005fdfa) cell_ai_notification_pane_ParamLimits

0xd454,	// (0x0005fdfa) cell_ai_notification_pane

0xd461,	// (0x0005fe07) cell_ai_notification_pane_g1

0xd469,	// (0x0005fe0f) cell_ai_notification_pane_t1

0xd477,	// (0x0005fe1d) tb_ext_find_button_pane

0xd47f,	// (0x0005fe25) tb_ext_find_pane_g1

0xd487,	// (0x0005fe2d) tb_ext_find_pane_t1

0x364a,	// (0x00055ff0) tb_ext_find_button_pane_g1

0xd495,	// (0x0005fe3b) tb_ext_find_button_pane_g2

0x0001,

0xfd62,	// (0x00062708) tb_ext_find_button_pane_g

0xd231,	// (0x0005fbd7) main_idle_act4_pane_t1_ParamLimits

0xd243,	// (0x0005fbe9) main_idle_act4_pane_t2_ParamLimits

0xfd20,	// (0x000626c6) main_idle_act4_pane_t_ParamLimits

0xd26b,	// (0x0005fc11) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd279,	// (0x0005fc1f) sat_plugin_idle_act4_pane_ParamLimits

0xd279,	// (0x0005fc1f) sat_plugin_idle_act4_pane

0xd49e,	// (0x0005fe44) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd49e,	// (0x0005fe44) sat_plugin_idle_act4_pane_t1

0xd4b1,	// (0x0005fe57) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd4b1,	// (0x0005fe57) sat_plugin_idle_act4_pane_t2

0xd4c4,	// (0x0005fe6a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd4c4,	// (0x0005fe6a) sat_plugin_idle_act4_pane_t3

0xd4d7,	// (0x0005fe7d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd4d7,	// (0x0005fe7d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd67,	// (0x0006270d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd67,	// (0x0006270d) sat_plugin_idle_act4_pane_t

0x4f96,	// (0x0005793c) popup_battery_window_ParamLimits

0x4f96,	// (0x0005793c) popup_battery_window

0xeea4,	// (0x0006184a) bg_popup_sub_pane_cp25_ParamLimits

0xeea4,	// (0x0006184a) bg_popup_sub_pane_cp25

0xd50b,	// (0x0005feb1) popup_battery_window_g1_ParamLimits

0xd50b,	// (0x0005feb1) popup_battery_window_g1

0xd517,	// (0x0005febd) popup_battery_window_t1_ParamLimits

0xd517,	// (0x0005febd) popup_battery_window_t1

0xd529,	// (0x0005fecf) popup_battery_window_t2_ParamLimits

0xd529,	// (0x0005fecf) popup_battery_window_t2

0x0001,

0xfd70,	// (0x00062716) popup_battery_window_t_ParamLimits

0xfd70,	// (0x00062716) popup_battery_window_t

0x8775,	// (0x0005b11b) midp_canvas_pane_ParamLimits

0x87ed,	// (0x0005b193) midp_keypad_pane_ParamLimits

0x87ed,	// (0x0005b193) midp_keypad_pane

0x8a88,	// (0x0005b42e) main_midp_pane_ParamLimits

0xb2aa,	// (0x0005dc50) signal_pane_g2_cp_ParamLimits

0xd546,	// (0x0005feec) aid_size_cell_midp_keypad_ParamLimits

0xd546,	// (0x0005feec) aid_size_cell_midp_keypad

0xd560,	// (0x0005ff06) midp_keyp_game_grid_pane_ParamLimits

0xd560,	// (0x0005ff06) midp_keyp_game_grid_pane

0xd580,	// (0x0005ff26) midp_keyp_rocker_pane_ParamLimits

0xd580,	// (0x0005ff26) midp_keyp_rocker_pane

0xd5af,	// (0x0005ff55) midp_keyp_sk_left_pane_ParamLimits

0xd5af,	// (0x0005ff55) midp_keyp_sk_left_pane

0xd60b,	// (0x0005ffb1) midp_keyp_sk_right_pane_ParamLimits

0xd60b,	// (0x0005ffb1) midp_keyp_sk_right_pane

0xed01,	// (0x000616a7) bg_button_pane_cp03

0xd667,	// (0x0006000d) midp_keyp_sk_left_pane_g1

0xed01,	// (0x000616a7) bg_button_pane_cp04

0xd667,	// (0x0006000d) midp_keyp_sk_right_pane_g1

0xb797,	// (0x0005e13d) midp_keyp_rocker_pane_g1

0xd66f,	// (0x00060015) keyp_game_cell_pane_ParamLimits

0xd66f,	// (0x00060015) keyp_game_cell_pane

0xed01,	// (0x000616a7) bg_button_pane_cp02

0xd682,	// (0x00060028) keyp_game_cell_pane_g1

0x4fe0,	// (0x00057986) popup_fep_vkb2_window_ParamLimits

0x4fe0,	// (0x00057986) popup_fep_vkb2_window

0x7644,	// (0x00059fea) aid_size_cell_vkb2_ParamLimits

0x7644,	// (0x00059fea) aid_size_cell_vkb2

0x7690,	// (0x0005a036) popup_fep_vkb2_window_g1_ParamLimits

0x7690,	// (0x0005a036) popup_fep_vkb2_window_g1

0x76d8,	// (0x0005a07e) vkb2_area_bottom_pane_ParamLimits

0x76d8,	// (0x0005a07e) vkb2_area_bottom_pane

0x772c,	// (0x0005a0d2) vkb2_area_keypad_pane_ParamLimits

0x772c,	// (0x0005a0d2) vkb2_area_keypad_pane

0x7772,	// (0x0005a118) vkb2_area_top_pane_ParamLimits

0x7772,	// (0x0005a118) vkb2_area_top_pane

0x77f2,	// (0x0005a198) vkb2_top_entry_pane_ParamLimits

0x77f2,	// (0x0005a198) vkb2_top_entry_pane

0x781c,	// (0x0005a1c2) vkb2_top_grid_left_pane_ParamLimits

0x781c,	// (0x0005a1c2) vkb2_top_grid_left_pane

0x783b,	// (0x0005a1e1) vkb2_top_grid_right_pane_ParamLimits

0x783b,	// (0x0005a1e1) vkb2_top_grid_right_pane

0x785a,	// (0x0005a200) vkb2_cell_keypad_pane_ParamLimits

0x785a,	// (0x0005a200) vkb2_cell_keypad_pane

0x792b,	// (0x0005a2d1) vkb2_area_bottom_grid_pane_ParamLimits

0x792b,	// (0x0005a2d1) vkb2_area_bottom_grid_pane

0x7951,	// (0x0005a2f7) vkb2_area_bottom_pane_g1_ParamLimits

0x7951,	// (0x0005a2f7) vkb2_area_bottom_pane_g1

0x7975,	// (0x0005a31b) vkb2_area_bottom_pane_g2_ParamLimits

0x7975,	// (0x0005a31b) vkb2_area_bottom_pane_g2

0x79a3,	// (0x0005a349) vkb2_area_bottom_pane_g3_ParamLimits

0x79a3,	// (0x0005a349) vkb2_area_bottom_pane_g3

0x0002,

0xfd75,	// (0x0006271b) vkb2_area_bottom_pane_g_ParamLimits

0xfd75,	// (0x0006271b) vkb2_area_bottom_pane_g

0x7a04,	// (0x0005a3aa) vkb2_top_cell_left_pane_ParamLimits

0x7a04,	// (0x0005a3aa) vkb2_top_cell_left_pane

0xd693,	// (0x00060039) vkb2_top_entry_pane_g1_ParamLimits

0xd693,	// (0x00060039) vkb2_top_entry_pane_g1

0xd6a1,	// (0x00060047) vkb2_top_entry_pane_t1_ParamLimits

0xd6a1,	// (0x00060047) vkb2_top_entry_pane_t1

0xd6d3,	// (0x00060079) vkb2_top_entry_pane_t2_ParamLimits

0xd6d3,	// (0x00060079) vkb2_top_entry_pane_t2

0xd705,	// (0x000600ab) vkb2_top_entry_pane_t3_ParamLimits

0xd705,	// (0x000600ab) vkb2_top_entry_pane_t3

0x0002,

0xfd7c,	// (0x00062722) vkb2_top_entry_pane_t_ParamLimits

0xfd7c,	// (0x00062722) vkb2_top_entry_pane_t

0x7a51,	// (0x0005a3f7) vkb2_top_grid_right_pane_g1_ParamLimits

0x7a51,	// (0x0005a3f7) vkb2_top_grid_right_pane_g1

0x7a67,	// (0x0005a40d) vkb2_top_grid_right_pane_g2_ParamLimits

0x7a67,	// (0x0005a40d) vkb2_top_grid_right_pane_g2

0x7a7f,	// (0x0005a425) vkb2_top_grid_right_pane_g3_ParamLimits

0x7a7f,	// (0x0005a425) vkb2_top_grid_right_pane_g3

0x7a97,	// (0x0005a43d) vkb2_top_grid_right_pane_g4_ParamLimits

0x7a97,	// (0x0005a43d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd83,	// (0x00062729) vkb2_top_grid_right_pane_g_ParamLimits

0xfd83,	// (0x00062729) vkb2_top_grid_right_pane_g

0x7aad,	// (0x0005a453) vkb2_top_cell_left_pane_g1

0x7ac4,	// (0x0005a46a) vkb2_cell_keypad_pane_g1_ParamLimits

0x7ac4,	// (0x0005a46a) vkb2_cell_keypad_pane_g1

0xd729,	// (0x000600cf) vkb2_cell_keypad_pane_t1_ParamLimits

0xd729,	// (0x000600cf) vkb2_cell_keypad_pane_t1

0x7ad2,	// (0x0005a478) vkb2_cell_bottom_grid_pane_ParamLimits

0x7ad2,	// (0x0005a478) vkb2_cell_bottom_grid_pane

0x7b0b,	// (0x0005a4b1) vkb2_cell_bottom_grid_pane_g1

0xd2b9,	// (0x0005fc5f) aid_call2_pane_cp02

0xd2c1,	// (0x0005fc67) aid_call_pane_cp02

0xd2c9,	// (0x0005fc6f) clock_digital_number_pane_cp10

0xd2d1,	// (0x0005fc77) clock_digital_number_pane_cp11

0xd2d9,	// (0x0005fc7f) clock_digital_number_pane_cp12

0xd2e1,	// (0x0005fc87) clock_digital_number_pane_cp13

0xd2e9,	// (0x0005fc8f) clock_digital_separator_pane_cp10

0x364a,	// (0x00055ff0) popup_clock_digital_analogue_window_cp2_g1

0x364a,	// (0x00055ff0) popup_clock_digital_analogue_window_cp2_g2

0xd2f1,	// (0x0005fc97) popup_clock_digital_analogue_window_cp2_g3

0x364a,	// (0x00055ff0) popup_clock_digital_analogue_window_cp2_g4

0xd2f1,	// (0x0005fc97) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd38,	// (0x000626de) popup_clock_digital_analogue_window_cp2_g

0xd2f9,	// (0x0005fc9f) popup_clock_digital_analogue_window_cp2_t1

0xd307,	// (0x0005fcad) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd43,	// (0x000626e9) popup_clock_digital_analogue_window_cp2_t

0xb797,	// (0x0005e13d) clock_digital_number_pane_cp10_g1

0xb797,	// (0x0005e13d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1f,	// (0x000624c5) clock_digital_number_pane_cp10_g

0xb797,	// (0x0005e13d) clock_digital_separator_pane_cp10_g1

0xb797,	// (0x0005e13d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1f,	// (0x000624c5) clock_digital_separator_pane_cp10_g

0xd133,	// (0x0005fad9) uniindi_top_pane_g3

0xd144,	// (0x0005faea) uniindi_top_pane_g4

0x78e5,	// (0x0005a28b) vkb2_row_keypad_pane_ParamLimits

0x78e5,	// (0x0005a28b) vkb2_row_keypad_pane

0x7b27,	// (0x0005a4cd) vkb2_cell_t_keypad_pane_ParamLimits

0x7b27,	// (0x0005a4cd) vkb2_cell_t_keypad_pane

0x7b37,	// (0x0005a4dd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7b37,	// (0x0005a4dd) vkb2_cell_t_keypad_pane_cp08

0x7b4c,	// (0x0005a4f2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7b4c,	// (0x0005a4f2) vkb2_cell_t_keypad_pane_cp09

0x7b60,	// (0x0005a506) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7b60,	// (0x0005a506) vkb2_cell_t_keypad_pane_cp01

0x7b71,	// (0x0005a517) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7b71,	// (0x0005a517) vkb2_cell_t_keypad_pane_cp02

0x7b82,	// (0x0005a528) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7b82,	// (0x0005a528) vkb2_cell_t_keypad_pane_cp03

0x7b93,	// (0x0005a539) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7b93,	// (0x0005a539) vkb2_cell_t_keypad_pane_cp04

0x7ba4,	// (0x0005a54a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7ba4,	// (0x0005a54a) vkb2_cell_t_keypad_pane_cp05

0x7bb5,	// (0x0005a55b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7bb5,	// (0x0005a55b) vkb2_cell_t_keypad_pane_cp06

0x7bc8,	// (0x0005a56e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7bc8,	// (0x0005a56e) vkb2_cell_t_keypad_pane_cp07

0x7bdd,	// (0x0005a583) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7bdd,	// (0x0005a583) vkb2_cell_t_keypad_pane_cp10

0x7284,	// (0x00059c2a) vkb2_cell_t_keypad_pane_g1

0xd740,	// (0x000600e6) vkb2_cell_t_keypad_pane_t1

0x4ed1,	// (0x00057877) popup_grid_graphic2_window

0xd752,	// (0x000600f8) aid_size_cell_graphic2_ParamLimits

0xd752,	// (0x000600f8) aid_size_cell_graphic2

0xd78a,	// (0x00060130) bg_popup_window_pane_cp21_ParamLimits

0xd78a,	// (0x00060130) bg_popup_window_pane_cp21

0xd798,	// (0x0006013e) graphic2_pages_pane_ParamLimits

0xd798,	// (0x0006013e) graphic2_pages_pane

0xd7de,	// (0x00060184) grid_graphic2_control_pane_ParamLimits

0xd7de,	// (0x00060184) grid_graphic2_control_pane

0xd81c,	// (0x000601c2) grid_graphic2_pane_ParamLimits

0xd81c,	// (0x000601c2) grid_graphic2_pane

0xd892,	// (0x00060238) cell_graphic2_pane

0x4ed1,	// (0x00057877) main_comp_mode_pane

0xc99e,	// (0x0005f344) list_ai3_gene_pane_ParamLimits

0xcd66,	// (0x0005f70c) bg_popup_window_pane_cp19_ParamLimits

0xcd72,	// (0x0005f718) bg_touch_area_indi_pane_ParamLimits

0xcd72,	// (0x0005f718) bg_touch_area_indi_pane

0xcd88,	// (0x0005f72e) bg_touch_area_indi_pane_cp01_ParamLimits

0xcd88,	// (0x0005f72e) bg_touch_area_indi_pane_cp01

0xcd9e,	// (0x0005f744) bg_touch_area_indi_pane_cp02_ParamLimits

0xcd9e,	// (0x0005f744) bg_touch_area_indi_pane_cp02

0xcdb8,	// (0x0005f75e) bg_touch_area_indi_pane_cp03_ParamLimits

0xcdb8,	// (0x0005f75e) bg_touch_area_indi_pane_cp03

0xcdd2,	// (0x0005f778) popup_slider_window_g1_ParamLimits

0xcdee,	// (0x0005f794) popup_slider_window_g2_ParamLimits

0xce0a,	// (0x0005f7b0) popup_slider_window_g3_ParamLimits

0xfccd,	// (0x00062673) popup_slider_window_g_ParamLimits

0xce70,	// (0x0005f816) popup_slider_window_t1_ParamLimits

0xcee4,	// (0x0005f88a) small_volume_slider_vertical_pane_ParamLimits

0xd892,	// (0x00060238) cell_graphic2_pane_ParamLimits

0xd8e6,	// (0x0006028c) bg_button_pane_cp10_ParamLimits

0xd8e6,	// (0x0006028c) bg_button_pane_cp10

0xd8fb,	// (0x000602a1) bg_button_pane_cp11_ParamLimits

0xd8fb,	// (0x000602a1) bg_button_pane_cp11

0xd910,	// (0x000602b6) graphic2_pages_pane_g1_ParamLimits

0xd910,	// (0x000602b6) graphic2_pages_pane_g1

0xd92b,	// (0x000602d1) graphic2_pages_pane_g2_ParamLimits

0xd92b,	// (0x000602d1) graphic2_pages_pane_g2

0x0001,

0xfd91,	// (0x00062737) graphic2_pages_pane_g_ParamLimits

0xfd91,	// (0x00062737) graphic2_pages_pane_g

0xd943,	// (0x000602e9) graphic2_pages_pane_t1_ParamLimits

0xd943,	// (0x000602e9) graphic2_pages_pane_t1

0xd959,	// (0x000602ff) cell_graphic2_control_pane_ParamLimits

0xd959,	// (0x000602ff) cell_graphic2_control_pane

0xd979,	// (0x0006031f) cell_graphic2_pane_g1_ParamLimits

0xd979,	// (0x0006031f) cell_graphic2_pane_g1

0xd986,	// (0x0006032c) cell_graphic2_pane_g2_ParamLimits

0xd986,	// (0x0006032c) cell_graphic2_pane_g2

0xd993,	// (0x00060339) cell_graphic2_pane_g3_ParamLimits

0xd993,	// (0x00060339) cell_graphic2_pane_g3

0xd9a0,	// (0x00060346) cell_graphic2_pane_g4_ParamLimits

0xd9a0,	// (0x00060346) cell_graphic2_pane_g4

0xd9ad,	// (0x00060353) cell_graphic2_pane_g5_ParamLimits

0xd9ad,	// (0x00060353) cell_graphic2_pane_g5

0x0004,

0xfd96,	// (0x0006273c) cell_graphic2_pane_g_ParamLimits

0xfd96,	// (0x0006273c) cell_graphic2_pane_g

0xd9c5,	// (0x0006036b) cell_graphic2_pane_t1_ParamLimits

0xd9c5,	// (0x0006036b) cell_graphic2_pane_t1

0x904a,	// (0x0005b9f0) grid_highlight_pane_cp11_ParamLimits

0x904a,	// (0x0005b9f0) grid_highlight_pane_cp11

0xeea4,	// (0x0006184a) bg_button_pane_cp05

0xd9fb,	// (0x000603a1) cell_graphic2_control_pane_g1

0xb797,	// (0x0005e13d) bg_touch_area_indi_pane_g1

0xda23,	// (0x000603c9) aid_cmod_rocker_key_size

0xda2d,	// (0x000603d3) aid_cmode_itu_key_size

0xda37,	// (0x000603dd) main_cmode_video_pane

0xda41,	// (0x000603e7) main_comp_mode_itu_pane

0xda4d,	// (0x000603f3) main_comp_mode_rocker_pane

0xda59,	// (0x000603ff) cell_cmode_rocker_pane_ParamLimits

0xda59,	// (0x000603ff) cell_cmode_rocker_pane

0xda6d,	// (0x00060413) cell_cmode_itu_pane_ParamLimits

0xda6d,	// (0x00060413) cell_cmode_itu_pane

0xf3b3,	// (0x00061d59) bg_button_pane_cp06_ParamLimits

0xf3b3,	// (0x00061d59) bg_button_pane_cp06

0xba12,	// (0x0005e3b8) cell_cmode_rocker_pane_g1_ParamLimits

0xba12,	// (0x0005e3b8) cell_cmode_rocker_pane_g1

0xcf8b,	// (0x0005f931) cell_cmode_rocker_pane_g2_ParamLimits

0xcf8b,	// (0x0005f931) cell_cmode_rocker_pane_g2

0x0001,

0xfda6,	// (0x0006274c) cell_cmode_rocker_pane_g_ParamLimits

0xfda6,	// (0x0006274c) cell_cmode_rocker_pane_g

0xed01,	// (0x000616a7) bg_button_pane_cp07

0xda84,	// (0x0006042a) cell_cmode_itu_pane_g1

0xda8d,	// (0x00060433) cell_cmode_itu_pane_t1

0xda9b,	// (0x00060441) cell_cmode_itu_pane_t2

0x0001,

0xfdab,	// (0x00062751) cell_cmode_itu_pane_t

0xd1b8,	// (0x0005fb5e) aid_touch_ctrl_left

0xd1c0,	// (0x0005fb66) aid_touch_ctrl_right

0xed01,	// (0x000616a7) compa_mode_pane

0xdaa9,	// (0x0006044f) aid_cmod_rocker_key_size_cp

0xdab3,	// (0x00060459) aid_cmode_itu_key_size_cp

0xdabd,	// (0x00060463) compa_mode_pane_g1

0xdac5,	// (0x0006046b) compa_mode_pane_g2

0xdacd,	// (0x00060473) compa_mode_pane_g3

0x0002,

0xfdb0,	// (0x00062756) compa_mode_pane_g

0xdad5,	// (0x0006047b) main_comp_mode_itu_pane_cp

0xdadd,	// (0x00060483) main_comp_mode_rocker_pane_cp

0xdae5,	// (0x0006048b) cell_cmode_itu_pane_cp_ParamLimits

0xdae5,	// (0x0006048b) cell_cmode_itu_pane_cp

0xdafa,	// (0x000604a0) cell_cmode_rocker_pane_cp_ParamLimits

0xdafa,	// (0x000604a0) cell_cmode_rocker_pane_cp

0xf3b3,	// (0x00061d59) bg_button_pane_cp06_cp_ParamLimits

0xf3b3,	// (0x00061d59) bg_button_pane_cp06_cp

0xba12,	// (0x0005e3b8) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xba12,	// (0x0005e3b8) cell_cmode_rocker_pane_g1_cp

0xb797,	// (0x0005e13d) cell_cmode_rocker_pane_g2_cp

0xed01,	// (0x000616a7) bg_button_pane_cp07_cp

0xdb0c,	// (0x000604b2) cell_cmode_itu_pane_g1_cp

0xdb15,	// (0x000604bb) cell_cmode_itu_pane_t1_cp

0xdb15,	// (0x000604bb) cell_cmode_itu_pane_t2_cp

0xa6e4,	// (0x0005d08a) settings_code_pane_cp2

0xed63,	// (0x00061709) bg_popup_window_pane_cp3_ParamLimits

0xf0b8,	// (0x00061a5e) heading_pane_cp3_ParamLimits

0xf0c7,	// (0x00061a6d) listscroll_popup_graphic_pane_ParamLimits

0x7017,	// (0x000599bd) fep_hwr_aid_pane_ParamLimits

0x759d,	// (0x00059f43) aid_touch_sctrl_top_ParamLimits

0x75b8,	// (0x00059f5e) sctrl_sk_top_pane_g1_ParamLimits

0x7284,	// (0x00059c2a) sctrl_sk_top_pane_g2_ParamLimits

0xfce6,	// (0x0006268c) sctrl_sk_top_pane_g_ParamLimits

0x75c5,	// (0x00059f6b) sctrl_sk_top_pane_t1_ParamLimits

0x759d,	// (0x00059f43) aid_touch_sctrl_bottom_ParamLimits

0x75c5,	// (0x00059f6b) sctrl_sk_bottom_pane_t1_ParamLimits

0xd0fd,	// (0x0005faa3) aid_area_touch_clock

0x77b8,	// (0x0005a15e) aid_vkb2_area_top_pane_cell_ParamLimits

0x77b8,	// (0x0005a15e) aid_vkb2_area_top_pane_cell

0x7907,	// (0x0005a2ad) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7907,	// (0x0005a2ad) aid_vkb2_area_bottom_pane_cell

0xd68b,	// (0x00060031) popup_char_count_window

0xdb23,	// (0x000604c9) popup_char_count_window_g1

0xdb2c,	// (0x000604d2) popup_char_count_window_g2

0xdb35,	// (0x000604db) popup_char_count_window_g3

0x0002,

0xfdb7,	// (0x0006275d) popup_char_count_window_g

0xdb3e,	// (0x000604e4) popup_char_count_window_t1

0x766e,	// (0x0005a014) popup_fep_char_preview_window_ParamLimits

0x766e,	// (0x0005a014) popup_fep_char_preview_window

0x77d6,	// (0x0005a17c) vkb2_top_candi_pane_ParamLimits

0x77d6,	// (0x0005a17c) vkb2_top_candi_pane

0xdb4c,	// (0x000604f2) cell_vkb2_top_candi_pane_ParamLimits

0xdb4c,	// (0x000604f2) cell_vkb2_top_candi_pane

0x7bf2,	// (0x0005a598) bg_popup_fep_char_preview_window_ParamLimits

0x7bf2,	// (0x0005a598) bg_popup_fep_char_preview_window

0x7c00,	// (0x0005a5a6) popup_fep_char_preview_window_t1_ParamLimits

0x7c00,	// (0x0005a5a6) popup_fep_char_preview_window_t1

0xdb9a,	// (0x00060540) bg_popup_fep_char_preview_window_g1

0xdba2,	// (0x00060548) bg_popup_fep_char_preview_window_g2

0xdbaa,	// (0x00060550) bg_popup_fep_char_preview_window_g3

0xdbb2,	// (0x00060558) bg_popup_fep_char_preview_window_g4

0xdbba,	// (0x00060560) bg_popup_fep_char_preview_window_g5

0xdbc2,	// (0x00060568) bg_popup_fep_char_preview_window_g6

0xdbca,	// (0x00060570) bg_popup_fep_char_preview_window_g7

0xdbd2,	// (0x00060578) bg_popup_fep_char_preview_window_g8

0xdbda,	// (0x00060580) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbe,	// (0x00062764) bg_popup_fep_char_preview_window_g

0x7284,	// (0x00059c2a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7284,	// (0x00059c2a) cell_vkb2_top_candi_pane_g1

0x7292,	// (0x00059c38) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7292,	// (0x00059c38) cell_vkb2_top_candi_pane_g2

0xd4ea,	// (0x0005fe90) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd4ea,	// (0x0005fe90) cell_vkb2_top_candi_pane_g3

0x7c42,	// (0x0005a5e8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7c42,	// (0x0005a5e8) cell_vkb2_top_candi_pane_g4

0xbf31,	// (0x0005e8d7) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbf31,	// (0x0005e8d7) cell_vkb2_top_candi_pane_g5

0x7c63,	// (0x0005a609) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7c63,	// (0x0005a609) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd3,	// (0x00062779) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd3,	// (0x00062779) cell_vkb2_top_candi_pane_g

0x7c71,	// (0x0005a617) cell_vkb2_top_candi_pane_t1

0x6dd5,	// (0x0005977b) aid_size_touch_slider_mark_ParamLimits

0x6dd5,	// (0x0005977b) aid_size_touch_slider_mark

0xd7ce,	// (0x00060174) grid_graphic2_catg_pane_ParamLimits

0xd7ce,	// (0x00060174) grid_graphic2_catg_pane

0xd86c,	// (0x00060212) popup_grid_graphic2_window_t1_ParamLimits

0xd86c,	// (0x00060212) popup_grid_graphic2_window_t1

0xd87e,	// (0x00060224) popup_grid_graphic2_window_t2_ParamLimits

0xd87e,	// (0x00060224) popup_grid_graphic2_window_t2

0x0001,

0xfd8c,	// (0x00062732) popup_grid_graphic2_window_t_ParamLimits

0xfd8c,	// (0x00062732) popup_grid_graphic2_window_t

0xeea4,	// (0x0006184a) bg_button_pane_cp05_ParamLimits

0xd9fb,	// (0x000603a1) cell_graphic2_control_pane_g1_ParamLimits

0xdbe2,	// (0x00060588) cell_graphic2_catg_pane_ParamLimits

0xdbe2,	// (0x00060588) cell_graphic2_catg_pane

0xed01,	// (0x000616a7) bg_button_pane_cp12

0xdbf4,	// (0x0006059a) cell_graphic2_catg_pane_g1

0xd0c9,	// (0x0005fa6f) cell_tb_ext_pane_t1_ParamLimits

0x7a24,	// (0x0005a3ca) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7a24,	// (0x0005a3ca) vkb2_top_cell_right_narrow_pane

0x7a3c,	// (0x0005a3e2) vkb2_top_cell_right_wide_pane_ParamLimits

0x7a3c,	// (0x0005a3e2) vkb2_top_cell_right_wide_pane

0x7009,	// (0x000599af) bg_vkb2_func_pane_ParamLimits

0x7009,	// (0x000599af) bg_vkb2_func_pane

0x7aad,	// (0x0005a453) vkb2_top_cell_left_pane_g1_ParamLimits

0x7009,	// (0x000599af) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7009,	// (0x000599af) bg_vkb2_fuc_pane_cp03

0x7b0b,	// (0x0005a4b1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8fde,	// (0x0005b984) bg_vkb2_func_pane_g1

0x8fe6,	// (0x0005b98c) bg_vkb2_func_pane_g2

0x8ff6,	// (0x0005b99c) bg_vkb2_func_pane_g3

0x8fee,	// (0x0005b994) bg_vkb2_func_pane_g4

0x8ffe,	// (0x0005b9a4) bg_vkb2_func_pane_g5

0x9006,	// (0x0005b9ac) bg_vkb2_func_pane_g6

0x900e,	// (0x0005b9b4) bg_vkb2_func_pane_g7

0x9016,	// (0x0005b9bc) bg_vkb2_func_pane_g8

0x8fd6,	// (0x0005b97c) bg_vkb2_func_pane_g9

0x0008,

0xfde0,	// (0x00062786) bg_vkb2_func_pane_g

0x7009,	// (0x000599af) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7009,	// (0x000599af) bg_vkb2_fuc_pane_cp01

0x7aad,	// (0x0005a453) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7aad,	// (0x0005a453) vkb2_top_cell_right_wide_pane_g1

0x7009,	// (0x000599af) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7009,	// (0x000599af) bg_vkb2_fuc_pane_cp02

0x7c8f,	// (0x0005a635) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7c8f,	// (0x0005a635) vkb2_top_cell_right_narrow_pane_g1

0xcce0,	// (0x0005f686) aid_touch_area_decrease_ParamLimits

0xcce0,	// (0x0005f686) aid_touch_area_decrease

0xcd04,	// (0x0005f6aa) aid_touch_area_increase_ParamLimits

0xcd04,	// (0x0005f6aa) aid_touch_area_increase

0xcd1c,	// (0x0005f6c2) aid_touch_area_mute_ParamLimits

0xcd1c,	// (0x0005f6c2) aid_touch_area_mute

0xcd38,	// (0x0005f6de) aid_touch_area_slider_ParamLimits

0xcd38,	// (0x0005f6de) aid_touch_area_slider

0xce26,	// (0x0005f7cc) popup_slider_window_g4_ParamLimits

0xce26,	// (0x0005f7cc) popup_slider_window_g4

0xce3e,	// (0x0005f7e4) popup_slider_window_g5_ParamLimits

0xce3e,	// (0x0005f7e4) popup_slider_window_g5

0xce60,	// (0x0005f806) popup_slider_window_g6_ParamLimits

0xce60,	// (0x0005f806) popup_slider_window_g6

0xce9e,	// (0x0005f844) popup_slider_window_t2_ParamLimits

0xce9e,	// (0x0005f844) popup_slider_window_t2

0x0001,

0xfcda,	// (0x00062680) popup_slider_window_t_ParamLimits

0xfcda,	// (0x00062680) popup_slider_window_t

0xceb6,	// (0x0005f85c) slider_pane_ParamLimits

0xceb6,	// (0x0005f85c) slider_pane

0xdbfd,	// (0x000605a3) slider_pane_g1_ParamLimits

0xdbfd,	// (0x000605a3) slider_pane_g1

0xdc11,	// (0x000605b7) slider_pane_g2_ParamLimits

0xdc11,	// (0x000605b7) slider_pane_g2

0xdc27,	// (0x000605cd) slider_pane_g3_ParamLimits

0xdc27,	// (0x000605cd) slider_pane_g3

0x0003,

0xfdf3,	// (0x00062799) slider_pane_g_ParamLimits

0xfdf3,	// (0x00062799) slider_pane_g

0x6980,	// (0x00059326) popup_tb_float_extension_window_ParamLimits

0x6980,	// (0x00059326) popup_tb_float_extension_window

0xdc53,	// (0x000605f9) aid_size_cell_tb_float_ext

0xed01,	// (0x000616a7) bg_popup_sub_window_cp28

0xdc5f,	// (0x00060605) grid_tb_float_ext_pane

0xdc6b,	// (0x00060611) cell_tb_float_ext_pane_ParamLimits

0xdc6b,	// (0x00060611) cell_tb_float_ext_pane

0xdc87,	// (0x0006062d) cell_tb_float_ext_pane_g1

0xdc90,	// (0x00060636) grid_highlight_pane_cp12

0x715e,	// (0x00059b04) cell_last_hwr_side_pane_ParamLimits

0x715e,	// (0x00059b04) cell_last_hwr_side_pane

0xb797,	// (0x0005e13d) cell_last_hwr_side_pane_g1

0xdc99,	// (0x0006063f) cell_last_hwr_side_pane_g2

0x0001,

0xfdfc,	// (0x000627a2) cell_last_hwr_side_pane_g

0x79d3,	// (0x0005a379) vkb2_area_bottom_space_btn_pane_ParamLimits

0x79d3,	// (0x0005a379) vkb2_area_bottom_space_btn_pane

0x7284,	// (0x00059c2a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd740,	// (0x000600e6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7c71,	// (0x0005a617) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7cab,	// (0x0005a651) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7cab,	// (0x0005a651) vkb2_area_bottom_space_btn_pane_g1

0x7ce5,	// (0x0005a68b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7ce5,	// (0x0005a68b) vkb2_area_bottom_space_btn_pane_g2

0x7d1b,	// (0x0005a6c1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7d1b,	// (0x0005a6c1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe01,	// (0x000627a7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe01,	// (0x000627a7) vkb2_area_bottom_space_btn_pane_g

0x70ce,	// (0x00059a74) cel_fep_hwr_func_pane_ParamLimits

0x70ce,	// (0x00059a74) cel_fep_hwr_func_pane

0x710a,	// (0x00059ab0) cell_hwr_side_button_pane_ParamLimits

0x710a,	// (0x00059ab0) cell_hwr_side_button_pane

0xd0fd,	// (0x0005faa3) aid_area_touch_clock_ParamLimits

0xeea4,	// (0x0006184a) bg_uniindi_top_pane_ParamLimits

0xd111,	// (0x0005fab7) uniindi_top_pane_g1_ParamLimits

0xd127,	// (0x0005facd) uniindi_top_pane_g2_ParamLimits

0xd133,	// (0x0005fad9) uniindi_top_pane_g3_ParamLimits

0xd144,	// (0x0005faea) uniindi_top_pane_g4_ParamLimits

0xfd12,	// (0x000626b8) uniindi_top_pane_g_ParamLimits

0xd151,	// (0x0005faf7) uniindi_top_pane_t1_ParamLimits

0xeea4,	// (0x0006184a) bg_vkb2_func_pane_cp01_ParamLimits

0xeea4,	// (0x0006184a) bg_vkb2_func_pane_cp01

0xdca2,	// (0x00060648) cel_fep_hwr_func_pane_g1_ParamLimits

0xdca2,	// (0x00060648) cel_fep_hwr_func_pane_g1

0xeea4,	// (0x0006184a) bg_vkb2_func_pane_cp02_ParamLimits

0xeea4,	// (0x0006184a) bg_vkb2_func_pane_cp02

0xdca2,	// (0x00060648) cell_hwr_side_button_pane_g1_ParamLimits

0xdca2,	// (0x00060648) cell_hwr_side_button_pane_g1

0x8e43,	// (0x0005b7e9) status_pane_g4_ParamLimits

0x8e43,	// (0x0005b7e9) status_pane_g4

0x8e5d,	// (0x0005b803) status_pane_t1

0xb54a,	// (0x0005def0) form2_midp_gauge_slider_cont_pane

0xb552,	// (0x0005def8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb564,	// (0x0005df0a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb576,	// (0x0005df1c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad2,	// (0x00062478) form2_midp_gauge_slider_pane_t_ParamLimits

0xb588,	// (0x0005df2e) form2_midp_slider_pane_ParamLimits

0x7636,	// (0x00059fdc) aid_size_cell_func_vkb2_ParamLimits

0x7636,	// (0x00059fdc) aid_size_cell_func_vkb2

0xdc3f,	// (0x000605e5) slider_pane_g4_ParamLimits

0xdc3f,	// (0x000605e5) slider_pane_g4

0x7d65,	// (0x0005a70b) form2_midp_gauge_slider_pane_t2_cp01

0x7d73,	// (0x0005a719) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7d73,	// (0x0005a719) form2_midp_gauge_slider_pane_t3_cp01

0x7d90,	// (0x0005a736) form2_midp_slider_pane_cp01

0xed01,	// (0x000616a7) navi_smil_pane

0xdcdb,	// (0x00060681) navi_smil_pane_g1

0xdce3,	// (0x00060689) navi_smil_pane_t1

0xdcb0,	// (0x00060656) form2_midp_slider_pane_g1

0xdcb9,	// (0x0006065f) form2_midp_slider_pane_g2

0xdcc1,	// (0x00060667) form2_midp_slider_pane_g3

0xdcb0,	// (0x00060656) form2_midp_slider_pane_g4

0xdcc9,	// (0x0006066f) form2_midp_slider_pane_g5

0x0004,

0xfe0a,	// (0x000627b0) form2_midp_slider_pane_g

0x7d55,	// (0x0005a6fb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7d55,	// (0x0005a6fb) vkb2_area_bottom_space_btn_pane_g4

0x8c62,	// (0x0005b608) lc0_navi_pane_ParamLimits

0x8c62,	// (0x0005b608) lc0_navi_pane

0x8cde,	// (0x0005b684) lc0_stat_indi_pane_ParamLimits

0x8cde,	// (0x0005b684) lc0_stat_indi_pane

0x8cf5,	// (0x0005b69b) ls0_title_pane_ParamLimits

0x8cf5,	// (0x0005b69b) ls0_title_pane

0xf3b3,	// (0x00061d59) bg_popup_sub_pane_cp14_ParamLimits

0xd0e4,	// (0x0005fa8a) list_uniindi_pane_ParamLimits

0xd0f0,	// (0x0005fa96) uniindi_top_pane_ParamLimits

0xd190,	// (0x0005fb36) list_single_uniindi_pane_g1_ParamLimits

0xd1a3,	// (0x0005fb49) list_single_uniindi_pane_t1_ParamLimits

0x7d99,	// (0x0005a73f) lc0_stat_clock_pane_ParamLimits

0x7d99,	// (0x0005a73f) lc0_stat_clock_pane

0xdcf1,	// (0x00060697) lc0_stat_indi_pane_g1_ParamLimits

0xdcf1,	// (0x00060697) lc0_stat_indi_pane_g1

0xdcfe,	// (0x000606a4) lc0_stat_indi_pane_g2_ParamLimits

0xdcfe,	// (0x000606a4) lc0_stat_indi_pane_g2

0x0001,

0xfe15,	// (0x000627bb) lc0_stat_indi_pane_g_ParamLimits

0xfe15,	// (0x000627bb) lc0_stat_indi_pane_g

0x7da6,	// (0x0005a74c) lc0_uni_indicator_pane_ParamLimits

0x7da6,	// (0x0005a74c) lc0_uni_indicator_pane

0xdd0b,	// (0x000606b1) ls0_title_pane_g1_ParamLimits

0xdd0b,	// (0x000606b1) ls0_title_pane_g1

0xdd1f,	// (0x000606c5) ls0_title_pane_t1_ParamLimits

0xdd1f,	// (0x000606c5) ls0_title_pane_t1

0x7db3,	// (0x0005a759) lc0_uni_indicator_pane_g1_ParamLimits

0x7db3,	// (0x0005a759) lc0_uni_indicator_pane_g1

0xdd55,	// (0x000606fb) lc0_stat_clock_pane_t1

0x4ed1,	// (0x00057877) main_ai5_pane

0xdd63,	// (0x00060709) ai5_sk_pane_ParamLimits

0xdd63,	// (0x00060709) ai5_sk_pane

0xdd70,	// (0x00060716) cell_ai5_widget_pane_ParamLimits

0xdd70,	// (0x00060716) cell_ai5_widget_pane

0xde13,	// (0x000607b9) aid_size_cell_widget_grid

0xde21,	// (0x000607c7) bg_ai5_widget_pane_ParamLimits

0xde21,	// (0x000607c7) bg_ai5_widget_pane

0xde9d,	// (0x00060843) cell_ai5_widget_pane_g2

0xdeb1,	// (0x00060857) cell_ai5_widget_pane_g3

0xdecb,	// (0x00060871) cell_ai5_widget_pane_g4

0xdedb,	// (0x00060881) cell_ai5_widget_pane_g5

0xdeeb,	// (0x00060891) cell_ai5_widget_pane_g6

0xdef7,	// (0x0006089d) cell_ai5_widget_pane_g7

0xdf63,	// (0x00060909) cell_ai5_widget_pane_t1_ParamLimits

0xdf63,	// (0x00060909) cell_ai5_widget_pane_t1

0xdf80,	// (0x00060926) cell_ai5_widget_pane_t2_ParamLimits

0xdf80,	// (0x00060926) cell_ai5_widget_pane_t2

0xdf98,	// (0x0006093e) cell_ai5_widget_pane_t3_ParamLimits

0xdf98,	// (0x0006093e) cell_ai5_widget_pane_t3

0xdfb0,	// (0x00060956) cell_ai5_widget_pane_t4_ParamLimits

0xdfb0,	// (0x00060956) cell_ai5_widget_pane_t4

0xdfd6,	// (0x0006097c) cell_ai5_widget_pane_t5_ParamLimits

0xdfd6,	// (0x0006097c) cell_ai5_widget_pane_t5

0xdff6,	// (0x0006099c) cell_ai5_widget_pane_t6_ParamLimits

0xdff6,	// (0x0006099c) cell_ai5_widget_pane_t6

0xe008,	// (0x000609ae) cell_ai5_widget_pane_t7_ParamLimits

0xe008,	// (0x000609ae) cell_ai5_widget_pane_t7

0xe027,	// (0x000609cd) cell_ai5_widget_pane_t8_ParamLimits

0xe027,	// (0x000609cd) cell_ai5_widget_pane_t8

0x000b,

0xfe35,	// (0x000627db) cell_ai5_widget_pane_t_ParamLimits

0xfe35,	// (0x000627db) cell_ai5_widget_pane_t

0xe0ab,	// (0x00060a51) grid_ai5_widget_pane

0xf3b3,	// (0x00061d59) highlight_cell_ai5_widget_pane_ParamLimits

0xf3b3,	// (0x00061d59) highlight_cell_ai5_widget_pane

0xe0b9,	// (0x00060a5f) ai5_sk_left_pane

0xe0c3,	// (0x00060a69) ai5_sk_middle_pane

0xe0cd,	// (0x00060a73) ai5_sk_right_pane

0xe0d7,	// (0x00060a7d) bg_ai5_widget_pane_g1_ParamLimits

0xe0d7,	// (0x00060a7d) bg_ai5_widget_pane_g1

0xe0e3,	// (0x00060a89) bg_ai5_widget_pane_g2_ParamLimits

0xe0e3,	// (0x00060a89) bg_ai5_widget_pane_g2

0xe0ef,	// (0x00060a95) bg_ai5_widget_pane_g3_ParamLimits

0xe0ef,	// (0x00060a95) bg_ai5_widget_pane_g3

0xe0fb,	// (0x00060aa1) bg_ai5_widget_pane_g4_ParamLimits

0xe0fb,	// (0x00060aa1) bg_ai5_widget_pane_g4

0xe107,	// (0x00060aad) bg_ai5_widget_pane_g5_ParamLimits

0xe107,	// (0x00060aad) bg_ai5_widget_pane_g5

0xe113,	// (0x00060ab9) bg_ai5_widget_pane_g6_ParamLimits

0xe113,	// (0x00060ab9) bg_ai5_widget_pane_g6

0xe11f,	// (0x00060ac5) bg_ai5_widget_pane_g7_ParamLimits

0xe11f,	// (0x00060ac5) bg_ai5_widget_pane_g7

0xe12b,	// (0x00060ad1) bg_ai5_widget_pane_g8_ParamLimits

0xe12b,	// (0x00060ad1) bg_ai5_widget_pane_g8

0xe137,	// (0x00060add) bg_ai5_widget_pane_g9_ParamLimits

0xe137,	// (0x00060add) bg_ai5_widget_pane_g9

0x0008,

0xfe4e,	// (0x000627f4) bg_ai5_widget_pane_g_ParamLimits

0xfe4e,	// (0x000627f4) bg_ai5_widget_pane_g

0xe16f,	// (0x00060b15) cell_shortcut_ai5_widget_pane_ParamLimits

0xe16f,	// (0x00060b15) cell_shortcut_ai5_widget_pane

0x8761,	// (0x0005b107) bg_cell_shortcut_ai5_widget_pane

0xe182,	// (0x00060b28) cell_grid_ai5_widget_pane_g1

0x8761,	// (0x0005b107) highlight_cell_shortcut_ai5_widget_pane

0x8fde,	// (0x0005b984) ai5_sk_left_pane_g1

0xe18b,	// (0x00060b31) ai5_sk_left_pane_g2

0xe193,	// (0x00060b39) ai5_sk_left_pane_g3

0xe19b,	// (0x00060b41) ai5_sk_left_pane_g4

0x0003,

0xfe61,	// (0x00062807) ai5_sk_left_pane_g

0xe1a3,	// (0x00060b49) ai5_sk_left_pane_t1

0x8fe6,	// (0x0005b98c) ai5_sk_right_pane_g1

0xe1b1,	// (0x00060b57) ai5_sk_right_pane_g2

0xe1b9,	// (0x00060b5f) ai5_sk_right_pane_g3

0xe1c1,	// (0x00060b67) ai5_sk_right_pane_g4

0x0003,

0xfe6a,	// (0x00062810) ai5_sk_right_pane_g

0xe1c9,	// (0x00060b6f) ai5_sk_right_pane_t1

0x8fe6,	// (0x0005b98c) ai5_sk_middle_pane_g1

0x8fde,	// (0x0005b984) ai5_sk_middle_pane_g2

0x8ffe,	// (0x0005b9a4) ai5_sk_middle_pane_g3

0xe1b9,	// (0x00060b5f) ai5_sk_middle_pane_g4

0xe193,	// (0x00060b39) ai5_sk_middle_pane_g5

0xe1d7,	// (0x00060b7d) ai5_sk_middle_pane_g6

0xe1df,	// (0x00060b85) ai5_sk_middle_pane_g7

0x0006,

0xfe73,	// (0x00062819) ai5_sk_middle_pane_g

0x8ae8,	// (0x0005b48e) aid_touch_area_size_lc0_ParamLimits

0x8ae8,	// (0x0005b48e) aid_touch_area_size_lc0

0x72b3,	// (0x00059c59) cell_hwr_candidate_pane_t1_ParamLimits

0x8b06,	// (0x0005b4ac) aid_touch_navi_pane

0x8df5,	// (0x0005b79b) status_dt_navi_pane_ParamLimits

0x8df5,	// (0x0005b79b) status_dt_navi_pane

0x8e02,	// (0x0005b7a8) status_dt_sta_pane_ParamLimits

0x8e02,	// (0x0005b7a8) status_dt_sta_pane

0xe1e7,	// (0x00060b8d) dt_sta_controll_pane

0xe1f4,	// (0x00060b9a) dt_sta_indi_pane

0xe205,	// (0x00060bab) dt_sta_title_pane

0xeea4,	// (0x0006184a) bg_dt_sta_indi_pane_ParamLimits

0xeea4,	// (0x0006184a) bg_dt_sta_indi_pane

0xe218,	// (0x00060bbe) dt_sta_battery_pane

0xe220,	// (0x00060bc6) dt_sta_indi_pane_g1

0xe229,	// (0x00060bcf) dt_sta_indi_pane_g2

0xe232,	// (0x00060bd8) dt_sta_indi_pane_g3

0x0002,

0xfe82,	// (0x00062828) dt_sta_indi_pane_g

0xe23b,	// (0x00060be1) dt_sta_signal_pane

0xf3b3,	// (0x00061d59) bg_dt_sta_title_pane_ParamLimits

0xf3b3,	// (0x00061d59) bg_dt_sta_title_pane

0xe244,	// (0x00060bea) dt_sta_title_pane_g1

0xe24c,	// (0x00060bf2) dt_sta_title_pane_t1_ParamLimits

0xe24c,	// (0x00060bf2) dt_sta_title_pane_t1

0xed01,	// (0x000616a7) bg_dt_sta_control_pane

0xe261,	// (0x00060c07) dt_sta_controll_pane_g1

0xe26a,	// (0x00060c10) bg_dt_sta_title_pane_g1

0xe273,	// (0x00060c19) bg_dt_sta_title_pane_g2

0xe27c,	// (0x00060c22) bg_dt_sta_title_pane_g3

0x0002,

0xfe89,	// (0x0006282f) bg_dt_sta_title_pane_g

0xb797,	// (0x0005e13d) bg_dt_sta_indi_pane_g1

0xe285,	// (0x00060c2b) dt_sta_signal_pane_g1

0xe28d,	// (0x00060c33) dt_sta_signal_pane_g2

0x0001,

0xfe90,	// (0x00062836) dt_sta_signal_pane_g

0xe295,	// (0x00060c3b) dt_sta_battery_pane_g1

0xe29e,	// (0x00060c44) dt_sta_battery_pane_t1

0xb797,	// (0x0005e13d) bg_dt_sta_control_pane_g1

0x8254,	// (0x0005abfa) fep_china_uni_eep_pane

0x825c,	// (0x0005ac02) fep_china_uni_entry_pane_ParamLimits

0x826c,	// (0x0005ac12) popup_fep_china_uni_window_g1_ParamLimits

0x827c,	// (0x0005ac22) popup_fep_china_uni_window_g2_ParamLimits

0x827c,	// (0x0005ac22) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x000620a3) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x000620a3) popup_fep_china_uni_window_g

0xe2ad,	// (0x00060c53) fep_china_uni_eep_pane_g1

0xe2b5,	// (0x00060c5b) fep_china_uni_eep_pane_t1

0xdcd2,	// (0x00060678) aid_touch_area_size_smil_player

0x8c5a,	// (0x0005b600) lc0_clock_pane

0x8e51,	// (0x0005b7f7) status_pane_g5_ParamLimits

0x8e51,	// (0x0005b7f7) status_pane_g5

0x6605,	// (0x00058fab) popup_keymap_window

0x8e17,	// (0x0005b7bd) status_icon_pane

0xdeb1,	// (0x00060857) cell_ai5_widget_pane_g3_ParamLimits

0xdecb,	// (0x00060871) cell_ai5_widget_pane_g4_ParamLimits

0xdedb,	// (0x00060881) cell_ai5_widget_pane_g5_ParamLimits

0xdf03,	// (0x000608a9) cell_ai5_widget_pane_g8_ParamLimits

0xdf03,	// (0x000608a9) cell_ai5_widget_pane_g8

0xdf17,	// (0x000608bd) cell_ai5_widget_pane_g9_ParamLimits

0xdf17,	// (0x000608bd) cell_ai5_widget_pane_g9

0xdf2b,	// (0x000608d1) cell_ai5_widget_pane_g10_ParamLimits

0xdf2b,	// (0x000608d1) cell_ai5_widget_pane_g10

0xe2c4,	// (0x00060c6a) status_icon_pane_g1

0xed01,	// (0x000616a7) bg_popup_sub_pane_cp13

0xe2cc,	// (0x00060c72) popup_keymap_window_t1

0x8a39,	// (0x0005b3df) control_pane_g6_ParamLimits

0x8a39,	// (0x0005b3df) control_pane_g6

0x8a46,	// (0x0005b3ec) control_pane_g7_ParamLimits

0x8a46,	// (0x0005b3ec) control_pane_g7

0x8a53,	// (0x0005b3f9) control_pane_g8_ParamLimits

0x8a53,	// (0x0005b3f9) control_pane_g8

0xe1e7,	// (0x00060b8d) dt_sta_controll_pane_ParamLimits

0xe1f4,	// (0x00060b9a) dt_sta_indi_pane_ParamLimits

0xe205,	// (0x00060bab) dt_sta_title_pane_ParamLimits

0xf2f5,	// (0x00061c9b) aid_size_touch_scroll_bar_cale

0x4fae,	// (0x00057954) popup_discreet_window_ParamLimits

0x4fae,	// (0x00057954) popup_discreet_window

0x503c,	// (0x000579e2) popup_sk_window

0x963c,	// (0x0005bfe2) bg_popup_sub_pane_cp28_ParamLimits

0x963c,	// (0x0005bfe2) bg_popup_sub_pane_cp28

0xe2da,	// (0x00060c80) popup_discreet_window_g1_ParamLimits

0xe2da,	// (0x00060c80) popup_discreet_window_g1

0xe2fa,	// (0x00060ca0) popup_discreet_window_t1_ParamLimits

0xe2fa,	// (0x00060ca0) popup_discreet_window_t1

0xe318,	// (0x00060cbe) popup_discreet_window_t2_ParamLimits

0xe318,	// (0x00060cbe) popup_discreet_window_t2

0x0002,

0xfe95,	// (0x0006283b) popup_discreet_window_t_ParamLimits

0xfe95,	// (0x0006283b) popup_discreet_window_t

0x7dc6,	// (0x0005a76c) popup_sk_window_g1

0x7dd0,	// (0x0005a776) popup_sk_window_g2

0x0001,

0xfe9c,	// (0x00062842) popup_sk_window_g

0x7dd8,	// (0x0005a77e) popup_sk_window_t1

0x7de6,	// (0x0005a78c) popup_sk_window_t1_copy1

0xde9d,	// (0x00060843) cell_ai5_widget_pane_g2_ParamLimits

0xe039,	// (0x000609df) cell_ai5_widget_pane_t9_ParamLimits

0xe039,	// (0x000609df) cell_ai5_widget_pane_t9

0xed01,	// (0x000616a7) main_fep_fshwr2_pane

0x7df4,	// (0x0005a79a) aid_fshwr2_btn_pane

0x7e04,	// (0x0005a7aa) aid_fshwr2_syb_pane

0x7e18,	// (0x0005a7be) aid_fshwr2_txt_pane

0x7e28,	// (0x0005a7ce) fshwr2_func_candi_pane

0x7e48,	// (0x0005a7ee) fshwr2_hwr_syb_pane

0x7e5e,	// (0x0005a804) fshwr2_icf_pane

0x4ed1,	// (0x00057877) fshwr2_icf_bg_pane

0x7e92,	// (0x0005a838) fshwr2_icf_pane_t1_ParamLimits

0x7e92,	// (0x0005a838) fshwr2_icf_pane_t1

0x364a,	// (0x00055ff0) fshwr2_func_candi_pane_g1

0xe36a,	// (0x00060d10) fshwr2_func_candi_row_pane_ParamLimits

0xe36a,	// (0x00060d10) fshwr2_func_candi_row_pane

0x7eaa,	// (0x0005a850) cell_fshwr2_syb_pane_ParamLimits

0x7eaa,	// (0x0005a850) cell_fshwr2_syb_pane

0x7ecb,	// (0x0005a871) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7ecb,	// (0x0005a871) fshwr2_hwr_syb_pane_g1

0x4ed1,	// (0x00057877) bg_popup_call_pane_cp01

0x7ed9,	// (0x0005a87f) fshwr2_func_candi_cell_pane_ParamLimits

0x7ed9,	// (0x0005a87f) fshwr2_func_candi_cell_pane

0x9e76,	// (0x0005c81c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9e76,	// (0x0005c81c) fshwr2_func_candi_cell_bg_pane

0x7f2a,	// (0x0005a8d0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7f2a,	// (0x0005a8d0) fshwr2_func_candi_cell_pane_g1

0x7f55,	// (0x0005a8fb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7f55,	// (0x0005a8fb) fshwr2_func_candi_cell_pane_t1

0x4ed1,	// (0x00057877) bg_button_pane_cp08

0x8a88,	// (0x0005b42e) cell_fshwr2_syb_bg_pane

0x7f68,	// (0x0005a90e) cell_fshwr2_syb_bg_pane_g1

0x7f7c,	// (0x0005a922) cell_fshwr2_syb_bg_pane_t1

0xf3b3,	// (0x00061d59) main_tmo_pane

0xa323,	// (0x0005ccc9) uni_indicator_pane_g1_ParamLimits

0xa339,	// (0x0005ccdf) uni_indicator_pane_g2_ParamLimits

0xa34f,	// (0x0005ccf5) uni_indicator_pane_g3_ParamLimits

0xa362,	// (0x0005cd08) uni_indicator_pane_g4_ParamLimits

0xa362,	// (0x0005cd08) uni_indicator_pane_g4

0xa376,	// (0x0005cd1c) uni_indicator_pane_g5_ParamLimits

0xa376,	// (0x0005cd1c) uni_indicator_pane_g5

0xa376,	// (0x0005cd1c) uni_indicator_pane_g6_ParamLimits

0xa376,	// (0x0005cd1c) uni_indicator_pane_g6

0xf901,	// (0x000622a7) uni_indicator_pane_g_ParamLimits

0xccb0,	// (0x0005f656) popup_tmo_note_window_ParamLimits

0xccb0,	// (0x0005f656) popup_tmo_note_window

0x7618,	// (0x00059fbe) fshwr2_bg_pane

0x7f46,	// (0x0005a8ec) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7f46,	// (0x0005a8ec) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea1,	// (0x00062847) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea1,	// (0x00062847) fshwr2_func_candi_cell_pane_g

0x726c,	// (0x00059c12) bg_popup_window_pane_cp01

0x7f92,	// (0x0005a938) bg_popup_window_pane_g1_cp01

0xe38d,	// (0x00060d33) bg_popup_window_pane_cp22_ParamLimits

0xe38d,	// (0x00060d33) bg_popup_window_pane_cp22

0xe39b,	// (0x00060d41) listscroll_tmo_link_pane_ParamLimits

0xe39b,	// (0x00060d41) listscroll_tmo_link_pane

0xe3db,	// (0x00060d81) popup_tmo_note_window_g1_ParamLimits

0xe3db,	// (0x00060d81) popup_tmo_note_window_g1

0xe3e8,	// (0x00060d8e) tmo_note_info_pane_ParamLimits

0xe3e8,	// (0x00060d8e) tmo_note_info_pane

0xe402,	// (0x00060da8) list_tmo_note_info_pane_g1_ParamLimits

0xe402,	// (0x00060da8) list_tmo_note_info_pane_g1

0xe419,	// (0x00060dbf) list_tmo_note_info_pane_g2_ParamLimits

0xe419,	// (0x00060dbf) list_tmo_note_info_pane_g2

0x0001,

0xfea6,	// (0x0006284c) list_tmo_note_info_pane_g_ParamLimits

0xfea6,	// (0x0006284c) list_tmo_note_info_pane_g

0xe435,	// (0x00060ddb) list_tmo_note_info_text_pane_ParamLimits

0xe435,	// (0x00060ddb) list_tmo_note_info_text_pane

0xe4ba,	// (0x00060e60) list_tmo_link_pane

0xe4c7,	// (0x00060e6d) scroll_pane_cp20

0xe4d4,	// (0x00060e7a) list_single_tmo_link_pane_ParamLimits

0xe4d4,	// (0x00060e7a) list_single_tmo_link_pane

0xe4e4,	// (0x00060e8a) list_single_tmo_link_pane_t1

0xe4f2,	// (0x00060e98) list_tmo_note_info_text_pane_t1_ParamLimits

0xe4f2,	// (0x00060e98) list_tmo_note_info_text_pane_t1

0x5b55,	// (0x000584fb) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5b55,	// (0x000584fb) aid_size_touch_scroll_bar_cp01

0x5a92,	// (0x00058438) aid_size_touch_slider_marker

0x5024,	// (0x000579ca) popup_settings_window_ParamLimits

0x5024,	// (0x000579ca) popup_settings_window

0x3aa6,	// (0x0005644c) popup_candi_list_indi_window

0x8b06,	// (0x0005b4ac) aid_touch_navi_pane_ParamLimits

0x7571,	// (0x00059f17) rs_clock_indi_pane

0x757a,	// (0x00059f20) sctrl_sk_bottom_pane_ParamLimits

0x758b,	// (0x00059f31) sctrl_sk_top_pane_ParamLimits

0x7688,	// (0x0005a02e) popup_fep_tooltip_window

0xde13,	// (0x000607b9) aid_size_cell_widget_grid_ParamLimits

0xde88,	// (0x0006082e) cell_ai5_widget_pane_g1_ParamLimits

0xde88,	// (0x0006082e) cell_ai5_widget_pane_g1

0xdeeb,	// (0x00060891) cell_ai5_widget_pane_g6_ParamLimits

0xdef7,	// (0x0006089d) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1a,	// (0x000627c0) cell_ai5_widget_pane_g_ParamLimits

0xfe1a,	// (0x000627c0) cell_ai5_widget_pane_g

0xe068,	// (0x00060a0e) cell_ai5_widget_pane_t10_ParamLimits

0xe068,	// (0x00060a0e) cell_ai5_widget_pane_t10

0xe0ab,	// (0x00060a51) grid_ai5_widget_pane_ParamLimits

0xe143,	// (0x00060ae9) cell_contacts_ai5_widget_pane_ParamLimits

0xe143,	// (0x00060ae9) cell_contacts_ai5_widget_pane

0xe32d,	// (0x00060cd3) popup_discreet_window_t3_ParamLimits

0xe32d,	// (0x00060cd3) popup_discreet_window_t3

0x7e7a,	// (0x0005a820) popup_fshwr2_char_preview_window_ParamLimits

0x7e7a,	// (0x0005a820) popup_fshwr2_char_preview_window

0xe453,	// (0x00060df9) tmo_note_info_pane_t1

0xe468,	// (0x00060e0e) tmo_note_info_pane_t2

0xe481,	// (0x00060e27) tmo_note_info_pane_t3

0xe496,	// (0x00060e3c) tmo_note_info_pane_t4

0xe4a8,	// (0x00060e4e) tmo_note_info_pane_t5

0x0004,

0xfeab,	// (0x00062851) tmo_note_info_pane_t

0xe4ba,	// (0x00060e60) list_tmo_link_pane_ParamLimits

0xe4c7,	// (0x00060e6d) scroll_pane_cp20_ParamLimits

0x4ed1,	// (0x00057877) bg_popup_fep_char_preview_window_cp01

0xe50b,	// (0x00060eb1) popup_fshwr2_char_preview_window_t1

0xe519,	// (0x00060ebf) popup_candi_list_indi_window_g1

0xe522,	// (0x00060ec8) bg_cell_contacts_ai5_widget_pane

0xe52e,	// (0x00060ed4) cell_contacts_ai5_widget_pane_g1

0xe543,	// (0x00060ee9) cell_contacts_ai5_widget_pane_g2

0xe54f,	// (0x00060ef5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb6,	// (0x0006285c) cell_contacts_ai5_widget_pane_g

0xe55b,	// (0x00060f01) cell_contacts_ai5_widget_pane_t1

0xf3b3,	// (0x00061d59) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe5d2,	// (0x00060f78) settings_container_pane

0x8761,	// (0x0005b107) listscroll_set_pane_copy1

0xaec8,	// (0x0005d86e) scroll_pane_cp121_copy1

0xe5de,	// (0x00060f84) set_content_pane_copy1

0xe5e6,	// (0x00060f8c) aid_height_set_list_copy1_ParamLimits

0xe5e6,	// (0x00060f8c) aid_height_set_list_copy1

0xa576,	// (0x0005cf1c) aid_size_parent_copy1_ParamLimits

0xa576,	// (0x0005cf1c) aid_size_parent_copy1

0xe5f2,	// (0x00060f98) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe5f2,	// (0x00060f98) button_value_adjust_pane_cp6_copy1

0x8a88,	// (0x0005b42e) list_highlight_pane_cp2_copy1_ParamLimits

0x8a88,	// (0x0005b42e) list_highlight_pane_cp2_copy1

0xe606,	// (0x00060fac) list_set_pane_copy1_ParamLimits

0xe606,	// (0x00060fac) list_set_pane_copy1

0xe56d,	// (0x00060f13) main_pane_set_t1_copy1_ParamLimits

0xe56d,	// (0x00060f13) main_pane_set_t1_copy1

0xe5a7,	// (0x00060f4d) main_pane_set_t2_copy1_ParamLimits

0xe5a7,	// (0x00060f4d) main_pane_set_t2_copy1

0xe6c7,	// (0x0006106d) main_pane_set_t3_copy1

0xe6d5,	// (0x0006107b) main_pane_set_t4_copy1

0xe5c6,	// (0x00060f6c) set_content_pane_g1_copy1_ParamLimits

0xe5c6,	// (0x00060f6c) set_content_pane_g1_copy1

0xe6e3,	// (0x00061089) setting_code_pane_copy1

0xe6eb,	// (0x00061091) setting_slider_graphic_pane_copy1

0xe6eb,	// (0x00061091) setting_slider_pane_copy1

0xe6f3,	// (0x00061099) setting_text_pane_copy1

0xe6f3,	// (0x00061099) setting_volume_pane_copy1

0xe6e3,	// (0x00061089) settings_code_pane_cp2_copy1

0xe6fb,	// (0x000610a1) settings_code_pane_cp_copy1_ParamLimits

0xe6fb,	// (0x000610a1) settings_code_pane_cp_copy1

0x7f9b,	// (0x0005a941) volume_set_pane_copy1

0xe70f,	// (0x000610b5) volume_set_pane_g10_copy1

0xe71b,	// (0x000610c1) volume_set_pane_g1_copy1

0xe725,	// (0x000610cb) volume_set_pane_g2_copy1

0xe72f,	// (0x000610d5) volume_set_pane_g3_copy1

0xe739,	// (0x000610df) volume_set_pane_g4_copy1

0xe743,	// (0x000610e9) volume_set_pane_g5_copy1

0xe74d,	// (0x000610f3) volume_set_pane_g6_copy1

0xe757,	// (0x000610fd) volume_set_pane_g7_copy1

0xe761,	// (0x00061107) volume_set_pane_g8_copy1

0xe76b,	// (0x00061111) volume_set_pane_g9_copy1

0xed63,	// (0x00061709) bg_set_opt_pane_cp_copy1_ParamLimits

0xed63,	// (0x00061709) bg_set_opt_pane_cp_copy1

0x7fa7,	// (0x0005a94d) setting_slider_pane_t1_copy1_ParamLimits

0x7fa7,	// (0x0005a94d) setting_slider_pane_t1_copy1

0x7fc6,	// (0x0005a96c) setting_slider_pane_t2_copy1_ParamLimits

0x7fc6,	// (0x0005a96c) setting_slider_pane_t2_copy1

0x7fe0,	// (0x0005a986) setting_slider_pane_t3_copy1_ParamLimits

0x7fe0,	// (0x0005a986) setting_slider_pane_t3_copy1

0x7ff8,	// (0x0005a99e) slider_set_pane_copy1_ParamLimits

0x7ff8,	// (0x0005a99e) slider_set_pane_copy1

0xf40b,	// (0x00061db1) set_opt_bg_pane_g1_copy2

0xf413,	// (0x00061db9) set_opt_bg_pane_g2_copy2

0xe777,	// (0x0006111d) set_opt_bg_pane_g3_copy2

0xf423,	// (0x00061dc9) set_opt_bg_pane_g4_copy2

0xf42b,	// (0x00061dd1) set_opt_bg_pane_g5_copy2

0xf433,	// (0x00061dd9) set_opt_bg_pane_g6_copy2

0xe781,	// (0x00061127) set_opt_bg_pane_g7_copy2

0xe78b,	// (0x00061131) set_opt_bg_pane_g8_copy2

0xe795,	// (0x0006113b) set_opt_bg_pane_g9_copy2

0x800e,	// (0x0005a9b4) aid_size_touch_slider_mark_copy1_ParamLimits

0x800e,	// (0x0005a9b4) aid_size_touch_slider_mark_copy1

0xe79f,	// (0x00061145) slider_set_pane_g1_copy1

0x8022,	// (0x0005a9c8) slider_set_pane_g2_copy1

0x6df5,	// (0x0005979b) slider_set_pane_g3_copy1_ParamLimits

0x6df5,	// (0x0005979b) slider_set_pane_g3_copy1

0x6e09,	// (0x000597af) slider_set_pane_g4_copy1_ParamLimits

0x6e09,	// (0x000597af) slider_set_pane_g4_copy1

0x6e21,	// (0x000597c7) slider_set_pane_g5_copy1_ParamLimits

0x6e21,	// (0x000597c7) slider_set_pane_g5_copy1

0x6df5,	// (0x0005979b) slider_set_pane_g6_copy1_ParamLimits

0x6df5,	// (0x0005979b) slider_set_pane_g6_copy1

0x802a,	// (0x0005a9d0) slider_set_pane_g7_copy1_ParamLimits

0x802a,	// (0x0005a9d0) slider_set_pane_g7_copy1

0xed15,	// (0x000616bb) bg_set_opt_pane_cp2_copy1

0xe7a8,	// (0x0006114e) setting_slider_graphic_pane_g1_copy1

0xe7b1,	// (0x00061157) setting_slider_graphic_pane_t1_copy1

0xe7c1,	// (0x00061167) setting_slider_graphic_pane_t2_copy1

0xe7d1,	// (0x00061177) slider_set_pane_cp_copy1

0xe7e1,	// (0x00061187) input_focus_pane_cp1_copy1

0xe7ea,	// (0x00061190) list_set_text_pane_copy1

0xe7f2,	// (0x00061198) setting_text_pane_g1_copy1

0x31ed,	// (0x00055b93) set_text_pane_t1_copy1

0xe7e1,	// (0x00061187) input_focus_pane_cp2_copy1

0xe7f2,	// (0x00061198) setting_code_pane_g1_copy1

0xe7fb,	// (0x000611a1) setting_code_pane_t1_copy1

0xaccd,	// (0x0005d673) list_set_graphic_pane_copy1

0xed15,	// (0x000616bb) bg_set_opt_pane_cp4_copy1

0x8451,	// (0x0005adf7) list_set_graphic_pane_g1_copy1_ParamLimits

0x8451,	// (0x0005adf7) list_set_graphic_pane_g1_copy1

0xe809,	// (0x000611af) list_set_graphic_pane_g2_copy1

0x8469,	// (0x0005ae0f) list_set_graphic_pane_t1_copy1_ParamLimits

0x8469,	// (0x0005ae0f) list_set_graphic_pane_t1_copy1

0xb797,	// (0x0005e13d) rs_clock_indi_pane_g1

0xe811,	// (0x000611b7) rs_clock_indi_pane_t1

0xe81f,	// (0x000611c5) rs_indi_pane

0xe827,	// (0x000611cd) rs_indi_pane_g1

0xe830,	// (0x000611d6) rs_indi_pane_g2

0xe839,	// (0x000611df) rs_indi_pane_g3

0x0002,

0xfebd,	// (0x00062863) rs_indi_pane_g

0x8761,	// (0x0005b107) bg_popup_preview_window_pane_cp03

0xe842,	// (0x000611e8) popup_fep_tooltip_window_t1

0xc45c,	// (0x0005ee02) popup_note2_window_g2_ParamLimits

0xc45c,	// (0x0005ee02) popup_note2_window_g2

0x0001,

0xfc4a,	// (0x000625f0) popup_note2_window_g_ParamLimits

0xfc4a,	// (0x000625f0) popup_note2_window_g

0xc964,	// (0x0005f30a) bg_popup_sub_pane_cp11_ParamLimits

0xc971,	// (0x0005f317) cell_ai3_links_pane_g1_ParamLimits

0xc988,	// (0x0005f32e) cell_ai3_links_pane_t1

0x31ed,	// (0x00055b93) set_text_pane_t1_copy1_ParamLimits

0x8663,	// (0x0005b009) cell_graphic_popup_pane_cp2_ParamLimits

0x8663,	// (0x0005b009) cell_graphic_popup_pane_cp2

0xe850,	// (0x000611f6) cell_graphic_popup_pane_g1_cp2

0xf108,	// (0x00061aae) cell_graphic_popup_pane_g2_cp2

0xe858,	// (0x000611fe) cell_graphic_popup_pane_g3_cp2

0xe860,	// (0x00061206) cell_graphic_popup_pane_t2_cp2

0xf119,	// (0x00061abf) grid_highlight_pane_cp3_cp2

0x3483,	// (0x00055e29) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf3b3,	// (0x00061d59) main_tmo_pane_ParamLimits

0xcca4,	// (0x0005f64a) popup_tmo_big_image_note_window

0xde77,	// (0x0006081d) cell_ai5_widget_list_pane

0xde7f,	// (0x00060825) cell_ai5_widget_lrg_icon_pane

0xe453,	// (0x00060df9) tmo_note_info_pane_t1_ParamLimits

0xe468,	// (0x00060e0e) tmo_note_info_pane_t2_ParamLimits

0xe481,	// (0x00060e27) tmo_note_info_pane_t3_ParamLimits

0xe496,	// (0x00060e3c) tmo_note_info_pane_t4_ParamLimits

0xe4a8,	// (0x00060e4e) tmo_note_info_pane_t5_ParamLimits

0xfeab,	// (0x00062851) tmo_note_info_pane_t_ParamLimits

0xe5d2,	// (0x00060f78) settings_container_pane_ParamLimits

0xe7d9,	// (0x0006117f) indicator_popup_pane_cp5

0xe7d9,	// (0x0006117f) indicator_popup_pane_cp6

0xaccd,	// (0x0005d673) list_set_graphic_pane_copy1_ParamLimits

0xed01,	// (0x000616a7) bg_popup_window_pane_cp23

0xe86e,	// (0x00061214) popup_tmo_big_image_note_window_g1

0xe87a,	// (0x00061220) popup_tmo_big_image_note_window_t1

0xe88a,	// (0x00061230) popup_tmo_big_image_note_window_t2

0xe89a,	// (0x00061240) popup_tmo_big_image_note_window_t3

0x0002,

0xfec4,	// (0x0006286a) popup_tmo_big_image_note_window_t

0xb797,	// (0x0005e13d) cell_ai5_widget_lrg_icon_pane_g1

0xe8aa,	// (0x00061250) cell_ai5_widget_lrg_icon_pane_t1

0xe8b8,	// (0x0006125e) cell_ai5_widget_list_row_pane_ParamLimits

0xe8b8,	// (0x0006125e) cell_ai5_widget_list_row_pane

0xe8d0,	// (0x00061276) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe8d0,	// (0x00061276) cell_ai5_widget_list_row_pane_g1

0xe8dd,	// (0x00061283) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe8dd,	// (0x00061283) cell_ai5_widget_list_row_pane_t1

0xe908,	// (0x000612ae) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe908,	// (0x000612ae) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecb,	// (0x00062871) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecb,	// (0x00062871) cell_ai5_widget_list_row_pane_t

0x4ed1,	// (0x00057877) main_fep_vtchi_ss_pane

0xe958,	// (0x000612fe) popup_fep_char_pre_window

0xe960,	// (0x00061306) popup_fep_ituss_window

0xe98c,	// (0x00061332) popup_fep_vkbss_window

0x8a88,	// (0x0005b42e) grid_vkbss_keypad_pane_ParamLimits

0x8a88,	// (0x0005b42e) grid_vkbss_keypad_pane

0xe9ce,	// (0x00061374) ituss_keypad_pane

0x804a,	// (0x0005a9f0) aid_vkbss_key_offset_ParamLimits

0x804a,	// (0x0005a9f0) aid_vkbss_key_offset

0x8056,	// (0x0005a9fc) cell_vkbss_key_pane_ParamLimits

0x8056,	// (0x0005a9fc) cell_vkbss_key_pane

0xe9da,	// (0x00061380) bg_cell_vkbss_key_g1_ParamLimits

0xe9da,	// (0x00061380) bg_cell_vkbss_key_g1

0xe9e6,	// (0x0006138c) cell_vkbss_key_3p_pane_ParamLimits

0xe9e6,	// (0x0006138c) cell_vkbss_key_3p_pane

0xea1c,	// (0x000613c2) cell_vkbss_key_g1_ParamLimits

0xea1c,	// (0x000613c2) cell_vkbss_key_g1

0xea52,	// (0x000613f8) cell_vkbss_key_t1_ParamLimits

0xea52,	// (0x000613f8) cell_vkbss_key_t1

0x80b4,	// (0x0005aa5a) cell_ituss_key_pane_ParamLimits

0x80b4,	// (0x0005aa5a) cell_ituss_key_pane

0xeaae,	// (0x00061454) bg_cell_ituss_key_g1_ParamLimits

0xeaae,	// (0x00061454) bg_cell_ituss_key_g1

0xeaba,	// (0x00061460) cell_ituss_key_pane_g1_ParamLimits

0xeaba,	// (0x00061460) cell_ituss_key_pane_g1

0x80c5,	// (0x0005aa6b) cell_ituss_key_pane_g2_ParamLimits

0x80c5,	// (0x0005aa6b) cell_ituss_key_pane_g2

0x0005,

0xfed2,	// (0x00062878) cell_ituss_key_pane_g_ParamLimits

0xfed2,	// (0x00062878) cell_ituss_key_pane_g

0x8149,	// (0x0005aaef) cell_ituss_key_t1_ParamLimits

0x8149,	// (0x0005aaef) cell_ituss_key_t1

0x8183,	// (0x0005ab29) cell_ituss_key_t2_ParamLimits

0x8183,	// (0x0005ab29) cell_ituss_key_t2

0x81b5,	// (0x0005ab5b) cell_ituss_key_t3_ParamLimits

0x81b5,	// (0x0005ab5b) cell_ituss_key_t3

0x81e6,	// (0x0005ab8c) cell_ituss_key_t4_ParamLimits

0x81e6,	// (0x0005ab8c) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x00062885) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x00062885) cell_ituss_key_t

0xeae0,	// (0x00061486) cell_vkbss_key_3p_pane_g1

0xeae8,	// (0x0006148e) cell_vkbss_key_3p_pane_g2

0xeaf0,	// (0x00061496) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x00062890) cell_vkbss_key_3p_pane_g

0x8761,	// (0x0005b107) bg_popup_fep_char_preview_window_cp02

0xeaf8,	// (0x0006149e) popup_fep_char_pre_window_t1

0xde00,	// (0x000607a6) main_ai5_sk_pane

0xe522,	// (0x00060ec8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe52e,	// (0x00060ed4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe543,	// (0x00060ee9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe54f,	// (0x00060ef5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb6,	// (0x0006285c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe55b,	// (0x00060f01) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf3b3,	// (0x00061d59) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeb06,	// (0x000614ac) main_ai5_sk_pane_g1

0x9474,	// (0x0005be1a) popup_query_code_window_g1

0xe976,	// (0x0006131c) popup_fep_vkb_icf_pane

0xe9a5,	// (0x0006134b) popup_fep_vtchi_icf_pane

0xeb0f,	// (0x000614b5) bg_icf_pane

0xeb0f,	// (0x000614b5) list_vkb_icf_pane

0xeb1b,	// (0x000614c1) bg_icf_pane_cp01

0xeb2e,	// (0x000614d4) vtchi_icf_list_pane

0xeb8e,	// (0x00061534) list_vkb_icf_pane_t1_ParamLimits

0xeb8e,	// (0x00061534) list_vkb_icf_pane_t1

0xebaa,	// (0x00061550) vtchi_icf_list_pane_t1_ParamLimits

0xebaa,	// (0x00061550) vtchi_icf_list_pane_t1

0xe960,	// (0x00061306) popup_fep_ituss_window_ParamLimits

0xe9a5,	// (0x0006134b) popup_fep_vtchi_icf_pane_ParamLimits

0xe9ce,	// (0x00061374) ituss_keypad_pane_ParamLimits

0x8040,	// (0x0005a9e6) ituss_sks_pane

0xeb0f,	// (0x000614b5) bg_icf_pane_ParamLimits

0xe930,	// (0x000612d6) icf_edit_indi_pane_ParamLimits

0xe930,	// (0x000612d6) icf_edit_indi_pane

0xeb0f,	// (0x000614b5) list_vkb_icf_pane_ParamLimits

0xeb1b,	// (0x000614c1) bg_icf_pane_cp01_ParamLimits

0xe94b,	// (0x000612f1) icf_edit_indi_pane_cp01_ParamLimits

0xe94b,	// (0x000612f1) icf_edit_indi_pane_cp01

0xeb2e,	// (0x000614d4) vtchi_query_pane

0xdca2,	// (0x00060648) icf_edit_indi_pane_g1_ParamLimits

0xdca2,	// (0x00060648) icf_edit_indi_pane_g1

0xec1a,	// (0x000615c0) icf_edit_indi_pane_g2_ParamLimits

0xec1a,	// (0x000615c0) icf_edit_indi_pane_g2

0x0001,

0xff15,	// (0x000628bb) icf_edit_indi_pane_g_ParamLimits

0xff15,	// (0x000628bb) icf_edit_indi_pane_g

0xec2e,	// (0x000615d4) icf_edit_indi_pane_t1

0xebc3,	// (0x00061569) bg_input_focus_pane_cp042

0xf2ec,	// (0x00061c92) vtchi_button_pane

0xebcc,	// (0x00061572) vtchi_query_pane_t1

0xebda,	// (0x00061580) vtchi_query_pane_t2

0xebe8,	// (0x0006158e) vtchi_query_pane_t3

0x0002,

0xff04,	// (0x000628aa) vtchi_query_pane_t

0x4ed1,	// (0x00057877) bg_button_pane_cp13

0xebf6,	// (0x0006159c) vtchi_button_pane_g1

0x8229,	// (0x0005abcf) ituss_sks_pane_g1

0x8234,	// (0x0005abda) ituss_sks_pane_g2

0x0001,

0xff0b,	// (0x000628b1) ituss_sks_pane_g

0xebfe,	// (0x000615a4) ituss_sks_pane_t1

0xec0c,	// (0x000615b2) ituss_sks_pane_t2

0x0001,

0xff10,	// (0x000628b6) ituss_sks_pane_t

0xb26b,	// (0x0005dc11) indicator_nsta_pane_cp_g1

0xb274,	// (0x0005dc1a) indicator_nsta_pane_cp_g2

0xb27c,	// (0x0005dc22) indicator_nsta_pane_cp_g3

0xb284,	// (0x0005dc2a) indicator_nsta_pane_cp_g4

0xb274,	// (0x0005dc1a) indicator_nsta_pane_cp_g5

0xb27c,	// (0x0005dc22) indicator_nsta_pane_cp_g6

0x0005,

0xfa88,	// (0x0006242e) indicator_nsta_pane_cp_g

0xd9e9,	// (0x0006038f) cell_graphic2_pane_t2_ParamLimits

0xd9e9,	// (0x0006038f) cell_graphic2_pane_t2

0x0001,

0xfda1,	// (0x00062747) cell_graphic2_pane_t_ParamLimits

0xfda1,	// (0x00062747) cell_graphic2_pane_t

0xda15,	// (0x000603bb) cell_graphic2_control_pane_t1

0x5fb9,	// (0x0005895f) signal_pane_g3_ParamLimits

0x5fb9,	// (0x0005895f) signal_pane_g3

0x5fc8,	// (0x0005896e) signal_pane_g4_ParamLimits

0x5fc8,	// (0x0005896e) signal_pane_g4

0xe91a,	// (0x000612c0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe91a,	// (0x000612c0) cell_ai5_widget_list_row_pane_t3

0xeace,	// (0x00061474) cell_ituss_key_pane_t1_ParamLimits

0xeace,	// (0x00061474) cell_ituss_key_pane_t1

0x90db,	// (0x0005ba81) form_field_data_wide_pane_vc_t2_ParamLimits

0x90db,	// (0x0005ba81) form_field_data_wide_pane_vc_t2

0x90ef,	// (0x0005ba95) form_field_data_wide_pane_vc_t3_ParamLimits

0x90ef,	// (0x0005ba95) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x0006218f) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x0006218f) form_field_data_wide_pane_vc_t

0xaf08,	// (0x0005d8ae) form_field_slider_wide_pane_vc_t3_ParamLimits

0xaf08,	// (0x0005d8ae) form_field_slider_wide_pane_vc_t3

0xafde,	// (0x0005d984) form_field_popup_wide_pane_vc_t2_ParamLimits

0xafde,	// (0x0005d984) form_field_popup_wide_pane_vc_t2

0xaff5,	// (0x0005d99b) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaff5,	// (0x0005d99b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa77,	// (0x0006241d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa77,	// (0x0006241d) form_field_popup_wide_pane_vc_t

0x7df4,	// (0x0005a79a) aid_fshwr2_btn_pane_ParamLimits

0x7e04,	// (0x0005a7aa) aid_fshwr2_syb_pane_ParamLimits

0x7e18,	// (0x0005a7be) aid_fshwr2_txt_pane_ParamLimits

0x7618,	// (0x00059fbe) fshwr2_bg_pane_ParamLimits

0x7e28,	// (0x0005a7ce) fshwr2_func_candi_pane_ParamLimits

0x7e48,	// (0x0005a7ee) fshwr2_hwr_syb_pane_ParamLimits

0x7e5e,	// (0x0005a804) fshwr2_icf_pane_ParamLimits

0x3e55,	// (0x000567fb) list_double_graphic_pane_vc_g4_ParamLimits

0x3e55,	// (0x000567fb) list_double_graphic_pane_vc_g4

0x80e5,	// (0x0005aa8b) cell_ituss_key_pane_g3_ParamLimits

0x80e5,	// (0x0005aa8b) cell_ituss_key_pane_g3

0x8217,	// (0x0005abbd) cell_ituss_key_t5_ParamLimits

0x8217,	// (0x0005abbd) cell_ituss_key_t5

0xe98c,	// (0x00061332) popup_fep_vkbss_window_ParamLimits

0xde0a,	// (0x000607b0) aid_cell_ai5_quarter

0xec2e,	// (0x000615d4) icf_edit_indi_pane_t1_ParamLimits

0xef4c,	// (0x000618f2) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xef4c,	// (0x000618f2) aid_tch_indicator_popup_pane_cp2

0xef5f,	// (0x00061905) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xef5f,	// (0x00061905) aid_tch_query_popup_data_pane_cp2

0x941c,	// (0x0005bdc2) aid_tch_query_popup_pane_ParamLimits

0x941c,	// (0x0005bdc2) aid_tch_query_popup_pane

0x941c,	// (0x0005bdc2) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x941c,	// (0x0005bdc2) aid_tch_query_popup_data_pane_cp1

0x8a88,	// (0x0005b42e) cell_fshwr2_syb_bg_pane_ParamLimits

0x7f68,	// (0x0005a90e) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7f7c,	// (0x0005a922) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe976,	// (0x0006131c) popup_fep_vkb_icf_pane_ParamLimits

0x7c3a,	// (0x0005a5e0) bg_popup_fep_char_preview_window_g10

0xdf3f,	// (0x000608e5) cell_ai5_widget_pane_g11_ParamLimits

0xdf3f,	// (0x000608e5) cell_ai5_widget_pane_g11

0xdf4b,	// (0x000608f1) cell_ai5_widget_pane_g12_ParamLimits

0xdf4b,	// (0x000608f1) cell_ai5_widget_pane_g12

0xdf57,	// (0x000608fd) cell_ai5_widget_pane_g13_ParamLimits

0xdf57,	// (0x000608fd) cell_ai5_widget_pane_g13

0xe087,	// (0x00060a2d) cell_ai5_widget_pane_t11_ParamLimits

0xe087,	// (0x00060a2d) cell_ai5_widget_pane_t11

0xe099,	// (0x00060a3f) cell_ai5_widget_pane_t12_ParamLimits

0xe099,	// (0x00060a3f) cell_ai5_widget_pane_t12

0x80f1,	// (0x0005aa97) cell_ituss_key_pane_g4_ParamLimits

0x80f1,	// (0x0005aa97) cell_ituss_key_pane_g4

0x810d,	// (0x0005aab3) cell_ituss_key_pane_g5_ParamLimits

0x810d,	// (0x0005aab3) cell_ituss_key_pane_g5

0x8129,	// (0x0005aacf) cell_ituss_key_pane_g6_ParamLimits

0x8129,	// (0x0005aacf) cell_ituss_key_pane_g6

0x8fd6,	// (0x0005b97c) bg_icf_pane_g1

0xeb36,	// (0x000614dc) bg_icf_pane_g2

0xeb42,	// (0x000614e8) bg_icf_pane_g3

0xeb4c,	// (0x000614f2) bg_icf_pane_g4

0xeb58,	// (0x000614fe) bg_icf_pane_g5

0xeb62,	// (0x00061508) bg_icf_pane_g6

0xeb6e,	// (0x00061514) bg_icf_pane_g7

0xeb78,	// (0x0006151e) bg_icf_pane_g8

0xeb84,	// (0x0006152a) bg_icf_pane_g9

0x0008,

0xfef1,	// (0x00062897) bg_icf_pane_g

0xe9bb,	// (0x00061361) popup_hyb_candi_window_ParamLimits

0xe9bb,	// (0x00061361) popup_hyb_candi_window

0x904a,	// (0x0005b9f0) bg_popup_sub_pane_cp01_ParamLimits

0x904a,	// (0x0005b9f0) bg_popup_sub_pane_cp01

0xec47,	// (0x000615ed) entry_hyb_candi_pane_ParamLimits

0xec47,	// (0x000615ed) entry_hyb_candi_pane

0xec56,	// (0x000615fc) grid_hyb_candi_pane_ParamLimits

0xec56,	// (0x000615fc) grid_hyb_candi_pane

0xec6b,	// (0x00061611) grid_hyb_phrase_pane_ParamLimits

0xec6b,	// (0x00061611) grid_hyb_phrase_pane

0xec7a,	// (0x00061620) cell_hyb_candi_pane_ParamLimits

0xec7a,	// (0x00061620) cell_hyb_candi_pane

0xf2f5,	// (0x00061c9b) cell_hyb_candi_scroll_pane

0x364a,	// (0x00055ff0) cell_hyb_candi_pane_g1

0xec96,	// (0x0006163c) cell_hyb_candi_pane_t1

0xeca4,	// (0x0006164a) cell_hyb_phrase_pane

0x364a,	// (0x00055ff0) cell_hyb_phrase_pane_g1

0xecad,	// (0x00061653) cell_hyb_phrase_pane_t1

0xecbb,	// (0x00061661) entry_hyb_candi_pane_t1

0x8761,	// (0x0005b107) input_focus_pane_cp06

0xecc9,	// (0x0006166f) cell_hyb_candi_scroll_pane_g1

0xecd1,	// (0x00061677) cell_hyb_candi_scroll_pane_g1_aid

0xecd9,	// (0x0006167f) cell_hyb_candi_scroll_pane_g2

0xece1,	// (0x00061687) cell_hyb_candi_scroll_pane_g2_aid

0xece9,	// (0x0006168f) cell_hyb_candi_scroll_pane_g3

0xecf1,	// (0x00061697) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large

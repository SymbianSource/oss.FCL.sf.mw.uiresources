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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001c63f };

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
0x7b4a,	// (0x00024189) Screen

0x7b56,	// (0x00024195) application_window_ParamLimits

0x7b56,	// (0x00024195) application_window

0x2e23,	// (0x0001f462) screen_g1

0x5676,	// (0x00021cb5) area_bottom_pane_ParamLimits

0x5676,	// (0x00021cb5) area_bottom_pane

0x573c,	// (0x00021d7b) area_top_pane_ParamLimits

0x573c,	// (0x00021d7b) area_top_pane

0x57d0,	// (0x00021e0f) main_pane_ParamLimits

0x57d0,	// (0x00021e0f) main_pane

0x2e2d,	// (0x0001f46c) misc_graphics

0x9563,	// (0x00025ba2) battery_pane_ParamLimits

0x9563,	// (0x00025ba2) battery_pane

0xa245,	// (0x00026884) bg_status_flat_pane_g8

0xa24d,	// (0x0002688c) bg_status_flat_pane_g9

0x962b,	// (0x00025c6a) context_pane_ParamLimits

0x962b,	// (0x00025c6a) context_pane

0x9741,	// (0x00025d80) navi_pane_ParamLimits

0x9741,	// (0x00025d80) navi_pane

0x97c5,	// (0x00025e04) signal_pane_ParamLimits

0x97c5,	// (0x00025e04) signal_pane

0x0008,

0xf852,	// (0x0002be91) bg_status_flat_pane_g

0x9832,	// (0x00025e71) status_pane_g1_ParamLimits

0x9832,	// (0x00025e71) status_pane_g1

0x9846,	// (0x00025e85) status_pane_g2_ParamLimits

0x9846,	// (0x00025e85) status_pane_g2

0x9852,	// (0x00025e91) status_pane_g3_ParamLimits

0x9852,	// (0x00025e91) status_pane_g3

0x0004,

0xf779,	// (0x0002bdb8) status_pane_g_ParamLimits

0xf779,	// (0x0002bdb8) status_pane_g

0x9886,	// (0x00025ec5) title_pane_ParamLimits

0x9886,	// (0x00025ec5) title_pane

0x98c3,	// (0x00025f02) uni_indicator_pane_ParamLimits

0x98c3,	// (0x00025f02) uni_indicator_pane

0x9493,	// (0x00025ad2) bg_list_pane_ParamLimits

0x9493,	// (0x00025ad2) bg_list_pane

0x4c55,	// (0x00021294) find_pane

0x94b3,	// (0x00025af2) listscroll_app_pane_ParamLimits

0x94b3,	// (0x00025af2) listscroll_app_pane

0x94bf,	// (0x00025afe) listscroll_form_pane

0x4c5d,	// (0x0002129c) listscroll_gen_pane_ParamLimits

0x4c5d,	// (0x0002129c) listscroll_gen_pane

0x60a9,	// (0x000226e8) listscroll_set_pane

0x86bd,	// (0x00024cfc) main_idle_act_pane

0x918f,	// (0x000257ce) main_idle_trad_pane

0x918f,	// (0x000257ce) main_list_empty_pane

0x94b3,	// (0x00025af2) main_midp_pane

0x94d9,	// (0x00025b18) main_pane_g1_ParamLimits

0x94d9,	// (0x00025b18) main_pane_g1

0x60b1,	// (0x000226f0) popup_ai_message_window_ParamLimits

0x60b1,	// (0x000226f0) popup_ai_message_window

0x6157,	// (0x00022796) popup_fep_china_uni_window_ParamLimits

0x6157,	// (0x00022796) popup_fep_china_uni_window

0x61b3,	// (0x000227f2) popup_fep_japan_candidate_window_ParamLimits

0x61b3,	// (0x000227f2) popup_fep_japan_candidate_window

0x61d3,	// (0x00022812) popup_fep_japan_predictive_window_ParamLimits

0x61d3,	// (0x00022812) popup_fep_japan_predictive_window

0x6203,	// (0x00022842) popup_find_window

0x6210,	// (0x0002284f) popup_grid_graphic_window_ParamLimits

0x6210,	// (0x0002284f) popup_grid_graphic_window

0x623c,	// (0x0002287b) popup_large_graphic_colour_window

0x6262,	// (0x000228a1) popup_menu_window_ParamLimits

0x6262,	// (0x000228a1) popup_menu_window

0x641a,	// (0x00022a59) popup_note_image_window

0x6406,	// (0x00022a45) popup_note_wait_window_ParamLimits

0x6406,	// (0x00022a45) popup_note_wait_window

0x6406,	// (0x00022a45) popup_note_window_ParamLimits

0x6406,	// (0x00022a45) popup_note_window

0x6470,	// (0x00022aaf) popup_query_code_window_ParamLimits

0x6470,	// (0x00022aaf) popup_query_code_window

0x6484,	// (0x00022ac3) popup_query_data_code_window_ParamLimits

0x6484,	// (0x00022ac3) popup_query_data_code_window

0x64a1,	// (0x00022ae0) popup_query_data_window_ParamLimits

0x64a1,	// (0x00022ae0) popup_query_data_window

0x64bd,	// (0x00022afc) popup_query_sat_info_window_ParamLimits

0x64bd,	// (0x00022afc) popup_query_sat_info_window

0x64f6,	// (0x00022b35) popup_snote_single_graphic_window_ParamLimits

0x64f6,	// (0x00022b35) popup_snote_single_graphic_window

0x64f6,	// (0x00022b35) popup_snote_single_text_window_ParamLimits

0x64f6,	// (0x00022b35) popup_snote_single_text_window

0x650b,	// (0x00022b4a) popup_sub_window_general

0x663b,	// (0x00022c7a) popup_window_general_ParamLimits

0x663b,	// (0x00022c7a) popup_window_general

0x94e7,	// (0x00025b26) power_save_pane

0x5f37,	// (0x00022576) control_pane_g1_ParamLimits

0x5f37,	// (0x00022576) control_pane_g1

0x5f5e,	// (0x0002259d) control_pane_g2_ParamLimits

0x5f5e,	// (0x0002259d) control_pane_g2

0x9456,	// (0x00025a95) control_pane_g3_ParamLimits

0x9456,	// (0x00025a95) control_pane_g3

0x0007,

0xf761,	// (0x0002bda0) control_pane_g_ParamLimits

0xf761,	// (0x0002bda0) control_pane_g

0x5fa8,	// (0x000225e7) control_pane_t1_ParamLimits

0x5fa8,	// (0x000225e7) control_pane_t1

0x5ffe,	// (0x0002263d) control_pane_t2_ParamLimits

0x5ffe,	// (0x0002263d) control_pane_t2

0x0002,

0xf772,	// (0x0002bdb1) control_pane_t_ParamLimits

0xf772,	// (0x0002bdb1) control_pane_t

0x937b,	// (0x000259ba) navi_navi_volume_pane_cp1

0x9383,	// (0x000259c2) status_small_icon_pane

0x938b,	// (0x000259ca) status_small_pane_g1_ParamLimits

0x938b,	// (0x000259ca) status_small_pane_g1

0x93bf,	// (0x000259fe) status_small_pane_g2_ParamLimits

0x93bf,	// (0x000259fe) status_small_pane_g2

0x93cb,	// (0x00025a0a) status_small_pane_g3_ParamLimits

0x93cb,	// (0x00025a0a) status_small_pane_g3

0x93d7,	// (0x00025a16) status_small_pane_g4_ParamLimits

0x93d7,	// (0x00025a16) status_small_pane_g4

0x93e3,	// (0x00025a22) status_small_pane_g5_ParamLimits

0x93e3,	// (0x00025a22) status_small_pane_g5

0x93f1,	// (0x00025a30) status_small_pane_g6_ParamLimits

0x93f1,	// (0x00025a30) status_small_pane_g6

0x0007,

0xf750,	// (0x0002bd8f) status_small_pane_g_ParamLimits

0xf750,	// (0x0002bd8f) status_small_pane_g

0x9420,	// (0x00025a5f) status_small_pane_t1

0x9442,	// (0x00025a81) status_small_wait_pane_ParamLimits

0x9442,	// (0x00025a81) status_small_wait_pane

0x8bfc,	// (0x0002523b) aid_levels_signal_ParamLimits

0x8bfc,	// (0x0002523b) aid_levels_signal

0x8c0e,	// (0x0002524d) signal_pane_g1_ParamLimits

0x8c0e,	// (0x0002524d) signal_pane_g1

0x8c23,	// (0x00025262) signal_pane_g2_ParamLimits

0x8c23,	// (0x00025262) signal_pane_g2

0x0003,

0xf6e1,	// (0x0002bd20) signal_pane_g_ParamLimits

0xf6e1,	// (0x0002bd20) signal_pane_g

0x8c5e,	// (0x0002529d) context_pane_g1

0x7b66,	// (0x000241a5) title_pane_g1

0x7b9c,	// (0x000241db) title_pane_t1

0x7c04,	// (0x00024243) title_pane_t2

0x7c2a,	// (0x00024269) title_pane_t3

0x0002,

0xf530,	// (0x0002bb6f) title_pane_t

0x98db,	// (0x00025f1a) aid_levels_battery_ParamLimits

0x98db,	// (0x00025f1a) aid_levels_battery

0x98ef,	// (0x00025f2e) battery_pane_g1_ParamLimits

0x98ef,	// (0x00025f2e) battery_pane_g1

0x9905,	// (0x00025f44) battery_pane_g2_ParamLimits

0x9905,	// (0x00025f44) battery_pane_g2

0x0001,

0xf784,	// (0x0002bdc3) battery_pane_g_ParamLimits

0xf784,	// (0x0002bdc3) battery_pane_g

0xab7b,	// (0x000271ba) uni_indicator_pane_g1

0xab91,	// (0x000271d0) uni_indicator_pane_g2

0xaba7,	// (0x000271e6) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x0002bf39) uni_indicator_pane_g

0x8ff4,	// (0x00025633) navi_icon_pane_ParamLimits

0x8ff4,	// (0x00025633) navi_icon_pane

0x8f3d,	// (0x0002557c) navi_midp_pane

0x9010,	// (0x0002564f) navi_navi_pane

0x901a,	// (0x00025659) navi_text_pane_ParamLimits

0x901a,	// (0x00025659) navi_text_pane

0x2e23,	// (0x0001f462) status_small_wait_pane_g1

0x807f,	// (0x000246be) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x0002bf34) status_small_wait_pane_g

0xa8a0,	// (0x00026edf) navi_navi_icon_text_pane

0xa8a8,	// (0x00026ee7) navi_navi_pane_g1_ParamLimits

0xa8a8,	// (0x00026ee7) navi_navi_pane_g1

0xa8ba,	// (0x00026ef9) navi_navi_pane_g2_ParamLimits

0xa8ba,	// (0x00026ef9) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x0002bf02) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x0002bf02) navi_navi_pane_g

0xa8cc,	// (0x00026f0b) navi_navi_tabs_pane

0xa8d5,	// (0x00026f14) navi_navi_text_pane

0xa8a0,	// (0x00026edf) navi_navi_volume_pane

0xa87c,	// (0x00026ebb) navi_text_pane_t1

0xa870,	// (0x00026eaf) navi_icon_pane_g1

0xa7c3,	// (0x00026e02) navi_navi_text_pane_t1

0x68db,	// (0x00022f1a) navi_navi_volume_pane_g1

0x68e3,	// (0x00022f22) volume_small_pane

0xa729,	// (0x00026d68) navi_navi_icon_text_pane_g1

0xa731,	// (0x00026d70) navi_navi_icon_text_pane_t1

0x9010,	// (0x0002564f) navi_tabs_2_long_pane

0x9010,	// (0x0002564f) navi_tabs_2_pane

0x9010,	// (0x0002564f) navi_tabs_3_long_pane

0x9010,	// (0x0002564f) navi_tabs_3_pane

0x9010,	// (0x0002564f) navi_tabs_4_pane

0x68bb,	// (0x00022efa) tabs_2_active_pane_ParamLimits

0x68bb,	// (0x00022efa) tabs_2_active_pane

0x68cb,	// (0x00022f0a) tabs_2_passive_pane_ParamLimits

0x68cb,	// (0x00022f0a) tabs_2_passive_pane

0x6889,	// (0x00022ec8) tabs_3_active_pane_ParamLimits

0x6889,	// (0x00022ec8) tabs_3_active_pane

0x6899,	// (0x00022ed8) tabs_3_passive_pane_ParamLimits

0x6899,	// (0x00022ed8) tabs_3_passive_pane

0x68aa,	// (0x00022ee9) tabs_3_passive_pane_cp_ParamLimits

0x68aa,	// (0x00022ee9) tabs_3_passive_pane_cp

0x6845,	// (0x00022e84) tabs_4_active_pane_ParamLimits

0x6845,	// (0x00022e84) tabs_4_active_pane

0x6856,	// (0x00022e95) tabs_4_passive_pane_ParamLimits

0x6856,	// (0x00022e95) tabs_4_passive_pane

0x6867,	// (0x00022ea6) tabs_4_passive_pane_cp_ParamLimits

0x6867,	// (0x00022ea6) tabs_4_passive_pane_cp

0x6878,	// (0x00022eb7) tabs_4_passive_pane_cp2_ParamLimits

0x6878,	// (0x00022eb7) tabs_4_passive_pane_cp2

0x6821,	// (0x00022e60) tabs_2_long_active_pane_ParamLimits

0x6821,	// (0x00022e60) tabs_2_long_active_pane

0x6833,	// (0x00022e72) tabs_2_long_passive_pane_ParamLimits

0x6833,	// (0x00022e72) tabs_2_long_passive_pane

0x67e2,	// (0x00022e21) tabs_3_long_active_pane_ParamLimits

0x67e2,	// (0x00022e21) tabs_3_long_active_pane

0x67f5,	// (0x00022e34) tabs_3_long_passive_pane_ParamLimits

0x67f5,	// (0x00022e34) tabs_3_long_passive_pane

0x680e,	// (0x00022e4d) tabs_3_long_passive_pane_cp_ParamLimits

0x680e,	// (0x00022e4d) tabs_3_long_passive_pane_cp

0x6788,	// (0x00022dc7) volume_small_pane_g1

0x6791,	// (0x00022dd0) volume_small_pane_g2

0x679a,	// (0x00022dd9) volume_small_pane_g3

0x67a3,	// (0x00022de2) volume_small_pane_g4

0x67ac,	// (0x00022deb) volume_small_pane_g5

0x67b5,	// (0x00022df4) volume_small_pane_g6

0x67be,	// (0x00022dfd) volume_small_pane_g7

0x67c7,	// (0x00022e06) volume_small_pane_g8

0x67d0,	// (0x00022e0f) volume_small_pane_g9

0x67d9,	// (0x00022e18) volume_small_pane_g10

0x0009,

0xf88f,	// (0x0002bece) volume_small_pane_g

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp2_ParamLimits

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp2

0x7c4a,	// (0x00024289) tabs_3_active_pane_g1

0x7c52,	// (0x00024291) tabs_3_active_pane_t1

0x7c3c,	// (0x0002427b) bg_passive_tab_pane_cp2_ParamLimits

0x7c3c,	// (0x0002427b) bg_passive_tab_pane_cp2

0x7c4a,	// (0x00024289) tabs_3_passive_pane_g1

0x7c52,	// (0x00024291) tabs_3_passive_pane_t1

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp3_ParamLimits

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp3

0x7c64,	// (0x000242a3) tabs_4_active_pane_g1

0x7c6c,	// (0x000242ab) tabs_4_active_pane_t1

0x7c3c,	// (0x0002427b) bg_passive_tab_pane_cp3_ParamLimits

0x7c3c,	// (0x0002427b) bg_passive_tab_pane_cp3

0x7c64,	// (0x000242a3) tabs_4_1_passive_pane_g1

0x7c6c,	// (0x000242ab) tabs_4_1_passive_pane_t1

0x94b3,	// (0x00025af2) list_highlight_pane_cp2

0xadde,	// (0x0002741d) list_set_pane_ParamLimits

0xadde,	// (0x0002741d) list_set_pane

0xae84,	// (0x000274c3) main_pane_set_t1_ParamLimits

0xae84,	// (0x000274c3) main_pane_set_t1

0xaea4,	// (0x000274e3) main_pane_set_t2_ParamLimits

0xaea4,	// (0x000274e3) main_pane_set_t2

0xaeb8,	// (0x000274f7) main_pane_set_t3_ParamLimits

0xaeb8,	// (0x000274f7) main_pane_set_t3

0xaeca,	// (0x00027509) main_pane_set_t4_ParamLimits

0xaeca,	// (0x00027509) main_pane_set_t4

0x0003,

0xf95f,	// (0x0002bf9e) main_pane_set_t_ParamLimits

0xf95f,	// (0x0002bf9e) main_pane_set_t

0xaedc,	// (0x0002751b) setting_code_pane

0xaee8,	// (0x00027527) setting_slider_graphic_pane

0xaee8,	// (0x00027527) setting_slider_pane

0xaee8,	// (0x00027527) setting_text_pane

0xaee8,	// (0x00027527) setting_volume_pane

0x5a1f,	// (0x0002205e) volume_set_pane

0x7c3c,	// (0x0002427b) bg_set_opt_pane_cp

0x5a27,	// (0x00022066) setting_slider_pane_t1

0x5a40,	// (0x0002207f) setting_slider_pane_t2

0x5a5a,	// (0x00022099) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0002bb76) setting_slider_pane_t

0x5a72,	// (0x000220b1) slider_set_pane

0x2e2d,	// (0x0001f46c) bg_set_opt_pane_cp2

0x7c7e,	// (0x000242bd) setting_slider_graphic_pane_g1

0x5a88,	// (0x000220c7) setting_slider_graphic_pane_t1

0x5a98,	// (0x000220d7) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0002bb7d) setting_slider_graphic_pane_t

0x5aa8,	// (0x000220e7) slider_set_pane_cp

0x2e2d,	// (0x0001f46c) input_focus_pane_cp1

0xad9d,	// (0x000273dc) list_set_text_pane

0x2e23,	// (0x0001f462) setting_text_pane_g1

0x2e2d,	// (0x0001f46c) input_focus_pane_cp2

0x2e23,	// (0x0001f462) setting_code_pane_g1

0x7c87,	// (0x000242c6) setting_code_pane_t1

0x449c,	// (0x00020adb) set_text_pane_t1_ParamLimits

0x449c,	// (0x00020adb) set_text_pane_t1

0x8521,	// (0x00024b60) set_opt_bg_pane_g1

0x8529,	// (0x00024b68) set_opt_bg_pane_g2

0xad77,	// (0x000273b6) set_opt_bg_pane_g3

0x8539,	// (0x00024b78) set_opt_bg_pane_g4

0x8541,	// (0x00024b80) set_opt_bg_pane_g5

0x8549,	// (0x00024b88) set_opt_bg_pane_g6

0xad81,	// (0x000273c0) set_opt_bg_pane_g7

0xad89,	// (0x000273c8) set_opt_bg_pane_g8

0xad93,	// (0x000273d2) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x0002bf8b) set_opt_bg_pane_g

0xad6a,	// (0x000273a9) slider_set_pane_g1

0x6950,	// (0x00022f8f) slider_set_pane_g2

0x0006,

0xf93d,	// (0x0002bf7c) slider_set_pane_g

0x68ec,	// (0x00022f2b) volume_set_pane_g1

0x68f4,	// (0x00022f33) volume_set_pane_g2

0x68fc,	// (0x00022f3b) volume_set_pane_g3

0x6904,	// (0x00022f43) volume_set_pane_g4

0x690c,	// (0x00022f4b) volume_set_pane_g5

0x6914,	// (0x00022f53) volume_set_pane_g6

0x691c,	// (0x00022f5b) volume_set_pane_g7

0x6924,	// (0x00022f63) volume_set_pane_g8

0x692c,	// (0x00022f6b) volume_set_pane_g9

0x6934,	// (0x00022f73) volume_set_pane_g10

0x0009,

0xf915,	// (0x0002bf54) volume_set_pane_g

0x7c95,	// (0x000242d4) indicator_pane_ParamLimits

0x7c95,	// (0x000242d4) indicator_pane

0x7ca1,	// (0x000242e0) main_idle_pane_g2_ParamLimits

0x7ca1,	// (0x000242e0) main_idle_pane_g2

0x7cc9,	// (0x00024308) main_pane_idle_g1_ParamLimits

0x7cc9,	// (0x00024308) main_pane_idle_g1

0x7cd6,	// (0x00024315) popup_clock_digital_analogue_window_ParamLimits

0x7cd6,	// (0x00024315) popup_clock_digital_analogue_window

0x7ced,	// (0x0002432c) soft_indicator_pane_ParamLimits

0x7ced,	// (0x0002432c) soft_indicator_pane

0x7cf9,	// (0x00024338) wallpaper_pane_ParamLimits

0x7cf9,	// (0x00024338) wallpaper_pane

0x2e23,	// (0x0001f462) wallpaper_pane_g1

0x7d0d,	// (0x0002434c) indicator_pane_g1_ParamLimits

0x7d0d,	// (0x0002434c) indicator_pane_g1

0xb1c7,	// (0x00027806) navi_navi_icon_text_pane_srt_g1

0x7d28,	// (0x00024367) soft_indicator_pane_t1

0x7d42,	// (0x00024381) aid_ps_area_pane

0x7d53,	// (0x00024392) aid_ps_clock_pane

0x7d61,	// (0x000243a0) aid_ps_indicator_pane

0x7d6d,	// (0x000243ac) indicator_ps_pane_ParamLimits

0x7d6d,	// (0x000243ac) indicator_ps_pane

0x7d7c,	// (0x000243bb) power_save_pane_g1_ParamLimits

0x7d7c,	// (0x000243bb) power_save_pane_g1

0x7d88,	// (0x000243c7) power_save_pane_g2_ParamLimits

0x7d88,	// (0x000243c7) power_save_pane_g2

0x562a,	// (0x00021c69) aid_navinavi_width_pane

0x7d42,	// (0x00024381) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0002bb82) power_save_pane_g_ParamLimits

0xf543,	// (0x0002bb82) power_save_pane_g

0x7d96,	// (0x000243d5) power_save_pane_t1_ParamLimits

0x7d96,	// (0x000243d5) power_save_pane_t1

0x7d53,	// (0x00024392) aid_ps_clock_pane_ParamLimits

0x7d61,	// (0x000243a0) aid_ps_indicator_pane_ParamLimits

0x7da8,	// (0x000243e7) power_save_pane_t4_ParamLimits

0x7da8,	// (0x000243e7) power_save_pane_t4

0x0001,

0xf548,	// (0x0002bb87) power_save_pane_t_ParamLimits

0xf548,	// (0x0002bb87) power_save_pane_t

0x7dd2,	// (0x00024411) power_save_t3_ParamLimits

0x7dd2,	// (0x00024411) power_save_t3

0x7dbd,	// (0x000243fc) power_save_t2_ParamLimits

0x7dbd,	// (0x000243fc) power_save_t2

0x7de7,	// (0x00024426) indicator_ps_pane_g1

0x7df0,	// (0x0002442f) ai_gene_pane_ParamLimits

0x7df0,	// (0x0002442f) ai_gene_pane

0x7dfc,	// (0x0002443b) ai_links_pane_ParamLimits

0x7dfc,	// (0x0002443b) ai_links_pane

0x7e08,	// (0x00024447) indicator_pane_cp1_ParamLimits

0x7e08,	// (0x00024447) indicator_pane_cp1

0x7e14,	// (0x00024453) main_pane_idle_g1_cp_ParamLimits

0x7e14,	// (0x00024453) main_pane_idle_g1_cp

0x7e20,	// (0x0002445f) popup_ai_links_title_window

0x7e29,	// (0x00024468) soft_indicator_pane_cp1_ParamLimits

0x7e29,	// (0x00024468) soft_indicator_pane_cp1

0xab69,	// (0x000271a8) ai_links_pane_g1

0xab72,	// (0x000271b1) grid_ai_links_pane

0xab4c,	// (0x0002718b) ai_gene_pane_1

0xab57,	// (0x00027196) ai_gene_pane_2

0xab60,	// (0x0002719f) list_highlight_pane_cp4

0xab30,	// (0x0002716f) cell_ai_link_pane_ParamLimits

0xab30,	// (0x0002716f) cell_ai_link_pane

0xab28,	// (0x00027167) cell_ai_link_pane_g1

0x807f,	// (0x000246be) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x0002bf2f) cell_ai_link_pane_g

0x2e2d,	// (0x0001f46c) grid_highlight_cp2

0x2e2d,	// (0x0001f46c) bg_popup_sub_pane_cp1

0x7e43,	// (0x00024482) popup_ai_links_title_window_t1

0xaa76,	// (0x000270b5) ai_gene_pane_1_g1_ParamLimits

0xaa76,	// (0x000270b5) ai_gene_pane_1_g1

0xaa82,	// (0x000270c1) ai_gene_pane_1_g2_ParamLimits

0xaa82,	// (0x000270c1) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x0002bf25) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x0002bf25) ai_gene_pane_1_g

0xaa8f,	// (0x000270ce) ai_gene_pane_1_t1_ParamLimits

0xaa8f,	// (0x000270ce) ai_gene_pane_1_t1

0xaac3,	// (0x00027102) grid_ai_soft_ind_pane

0xaa61,	// (0x000270a0) ai_gene_pane_2_t1_ParamLimits

0xaa61,	// (0x000270a0) ai_gene_pane_2_t1

0x7e52,	// (0x00024491) main_pane_empty_t1_ParamLimits

0x7e52,	// (0x00024491) main_pane_empty_t1

0x7e6a,	// (0x000244a9) main_pane_empty_t2_ParamLimits

0x7e6a,	// (0x000244a9) main_pane_empty_t2

0x7e7f,	// (0x000244be) main_pane_empty_t3_ParamLimits

0x7e7f,	// (0x000244be) main_pane_empty_t3

0x7e91,	// (0x000244d0) main_pane_empty_t4_ParamLimits

0x7e91,	// (0x000244d0) main_pane_empty_t4

0x7ea3,	// (0x000244e2) main_pane_empty_t5_ParamLimits

0x7ea3,	// (0x000244e2) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0002bb8c) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0002bb8c) main_pane_empty_t

0x85e8,	// (0x00024c27) bg_popup_window_pane_ParamLimits

0x85e8,	// (0x00024c27) bg_popup_window_pane

0xa7d1,	// (0x00026e10) find_popup_pane_cp2_ParamLimits

0xa7d1,	// (0x00026e10) find_popup_pane_cp2

0xa7dd,	// (0x00026e1c) heading_pane_ParamLimits

0xa7dd,	// (0x00026e1c) heading_pane

0x2e2d,	// (0x0001f46c) bg_popup_sub_pane

0xa74b,	// (0x00026d8a) bg_popup_window_pane_g1_ParamLimits

0xa74b,	// (0x00026d8a) bg_popup_window_pane_g1

0xa757,	// (0x00026d96) bg_popup_window_pane_g2_ParamLimits

0xa757,	// (0x00026d96) bg_popup_window_pane_g2

0xa763,	// (0x00026da2) bg_popup_window_pane_g3_ParamLimits

0xa763,	// (0x00026da2) bg_popup_window_pane_g3

0xa76f,	// (0x00026dae) bg_popup_window_pane_g4_ParamLimits

0xa76f,	// (0x00026dae) bg_popup_window_pane_g4

0xa77b,	// (0x00026dba) bg_popup_window_pane_g5_ParamLimits

0xa77b,	// (0x00026dba) bg_popup_window_pane_g5

0xa787,	// (0x00026dc6) bg_popup_window_pane_g6_ParamLimits

0xa787,	// (0x00026dc6) bg_popup_window_pane_g6

0xa793,	// (0x00026dd2) bg_popup_window_pane_g7_ParamLimits

0xa793,	// (0x00026dd2) bg_popup_window_pane_g7

0xa79f,	// (0x00026dde) bg_popup_window_pane_g8_ParamLimits

0xa79f,	// (0x00026dde) bg_popup_window_pane_g8

0xa7ab,	// (0x00026dea) bg_popup_window_pane_g9_ParamLimits

0xa7ab,	// (0x00026dea) bg_popup_window_pane_g9

0xa7b7,	// (0x00026df6) bg_popup_window_pane_g10_ParamLimits

0xa7b7,	// (0x00026df6) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x0002beed) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x0002beed) bg_popup_window_pane_g

0xa6e0,	// (0x00026d1f) bg_popup_heading_pane_ParamLimits

0xa6e0,	// (0x00026d1f) bg_popup_heading_pane

0x69d8,	// (0x00023017) tabs_4_passive_pane_cp_srt_ParamLimits

0x69d8,	// (0x00023017) tabs_4_passive_pane_cp_srt

0x69ea,	// (0x00023029) tabs_4_passive_pane_srt_ParamLimits

0xa6f4,	// (0x00026d33) heading_pane_g2

0x69ea,	// (0x00023029) tabs_4_passive_pane_srt

0x94b3,	// (0x00025af2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94b3,	// (0x00025af2) bg_passive_tab_pane_cp3_srt

0xa6fc,	// (0x00026d3b) heading_pane_t1_ParamLimits

0xa6fc,	// (0x00026d3b) heading_pane_t1

0xa713,	// (0x00026d52) heading_pane_t2_ParamLimits

0xa713,	// (0x00026d52) heading_pane_t2

0x0001,

0xf8a9,	// (0x0002bee8) heading_pane_t_ParamLimits

0xf8a9,	// (0x0002bee8) heading_pane_t

0xa20d,	// (0x0002684c) bg_popup_heading_pane_g1

0xa2bc,	// (0x000268fb) bg_popup_heading_pane_g2

0xa2c6,	// (0x00026905) bg_popup_heading_pane_g3

0xa2d0,	// (0x0002690f) bg_popup_heading_pane_g4

0xa2da,	// (0x00026919) bg_popup_heading_pane_g5

0xa2e4,	// (0x00026923) bg_popup_heading_pane_g6

0xa2ec,	// (0x0002692b) bg_popup_heading_pane_g7

0xa2f4,	// (0x00026933) bg_popup_heading_pane_g8

0xa2fe,	// (0x0002693d) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x0002bea4) bg_popup_heading_pane_g

0x99dd,	// (0x0002601c) bg_popup_sub_pane_g1

0x99e5,	// (0x00026024) bg_popup_sub_pane_g2

0x99ed,	// (0x0002602c) bg_popup_sub_pane_g3

0x99f5,	// (0x00026034) bg_popup_sub_pane_g4

0x99fd,	// (0x0002603c) bg_popup_sub_pane_g5

0x9a05,	// (0x00026044) bg_popup_sub_pane_g6

0x9a0d,	// (0x0002604c) bg_popup_sub_pane_g7

0x9a15,	// (0x00026054) bg_popup_sub_pane_g8

0x9a1d,	// (0x0002605c) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x0002be7e) bg_popup_sub_pane_g

0x7eb7,	// (0x000244f6) bg_popup_window_pane_cp5_ParamLimits

0x7eb7,	// (0x000244f6) bg_popup_window_pane_cp5

0x7ed3,	// (0x00024512) popup_note_window_g1_ParamLimits

0x7ed3,	// (0x00024512) popup_note_window_g1

0x7edf,	// (0x0002451e) popup_note_window_t1_ParamLimits

0x7edf,	// (0x0002451e) popup_note_window_t1

0x7ef5,	// (0x00024534) popup_note_window_t2_ParamLimits

0x7ef5,	// (0x00024534) popup_note_window_t2

0x7f0b,	// (0x0002454a) popup_note_window_t3_ParamLimits

0x7f0b,	// (0x0002454a) popup_note_window_t3

0x7f21,	// (0x00024560) popup_note_window_t4_ParamLimits

0x7f21,	// (0x00024560) popup_note_window_t4

0x7f49,	// (0x00024588) popup_note_window_t5_ParamLimits

0x7f49,	// (0x00024588) popup_note_window_t5

0x0004,

0xf558,	// (0x0002bb97) popup_note_window_t_ParamLimits

0xf558,	// (0x0002bb97) popup_note_window_t

0x7f93,	// (0x000245d2) bg_popup_window_pane_cp6_ParamLimits

0x7f93,	// (0x000245d2) bg_popup_window_pane_cp6

0xa189,	// (0x000267c8) popup_note_image_window_g1_ParamLimits

0xa189,	// (0x000267c8) popup_note_image_window_g1

0xa195,	// (0x000267d4) popup_note_image_window_g2_ParamLimits

0xa195,	// (0x000267d4) popup_note_image_window_g2

0x0001,

0xf833,	// (0x0002be72) popup_note_image_window_g_ParamLimits

0xf833,	// (0x0002be72) popup_note_image_window_g

0xa1ae,	// (0x000267ed) popup_note_image_window_t1_ParamLimits

0xa1ae,	// (0x000267ed) popup_note_image_window_t1

0xa1c7,	// (0x00026806) popup_note_image_window_t2_ParamLimits

0xa1c7,	// (0x00026806) popup_note_image_window_t2

0xa1e0,	// (0x0002681f) popup_note_image_window_t3_ParamLimits

0xa1e0,	// (0x0002681f) popup_note_image_window_t3

0x0002,

0xf838,	// (0x0002be77) popup_note_image_window_t_ParamLimits

0xf838,	// (0x0002be77) popup_note_image_window_t

0xa04a,	// (0x00026689) bg_popup_window_pane_cp7_ParamLimits

0xa04a,	// (0x00026689) bg_popup_window_pane_cp7

0xa07a,	// (0x000266b9) popup_note_wait_window_g1_ParamLimits

0xa07a,	// (0x000266b9) popup_note_wait_window_g1

0xa086,	// (0x000266c5) popup_note_wait_window_g2_ParamLimits

0xa086,	// (0x000266c5) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x0002be60) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x0002be60) popup_note_wait_window_g

0xa09e,	// (0x000266dd) popup_note_wait_window_t1_ParamLimits

0xa09e,	// (0x000266dd) popup_note_wait_window_t1

0xa0c5,	// (0x00026704) popup_note_wait_window_t2_ParamLimits

0xa0c5,	// (0x00026704) popup_note_wait_window_t2

0xa0e2,	// (0x00026721) popup_note_wait_window_t3_ParamLimits

0xa0e2,	// (0x00026721) popup_note_wait_window_t3

0xa0f5,	// (0x00026734) popup_note_wait_window_t4_ParamLimits

0xa0f5,	// (0x00026734) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x0002be67) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x0002be67) popup_note_wait_window_t

0xa11a,	// (0x00026759) wait_bar_pane_ParamLimits

0xa11a,	// (0x00026759) wait_bar_pane

0x2e2d,	// (0x0001f46c) wait_anim_pane

0x2e2d,	// (0x0001f46c) wait_border_pane

0x2e23,	// (0x0001f462) wait_anim_pane_g1

0x2e23,	// (0x0001f462) wait_anim_pane_g2

0x0001,

0xf6dc,	// (0x0002bd1b) wait_anim_pane_g

0x9fee,	// (0x0002662d) wait_border_pane_g1

0x9ff9,	// (0x00026638) wait_border_pane_g2

0xa002,	// (0x00026641) wait_border_pane_g3

0x0002,

0xf81a,	// (0x0002be59) wait_border_pane_g

0x9e59,	// (0x00026498) bg_popup_window_pane_cp16_ParamLimits

0x9e59,	// (0x00026498) bg_popup_window_pane_cp16

0x9f59,	// (0x00026598) indicator_popup_pane_cp4_ParamLimits

0x9f59,	// (0x00026598) indicator_popup_pane_cp4

0x9f6d,	// (0x000265ac) popup_query_data_window_t1_ParamLimits

0x9f6d,	// (0x000265ac) popup_query_data_window_t1

0x9f7f,	// (0x000265be) popup_query_data_window_t2_ParamLimits

0x9f7f,	// (0x000265be) popup_query_data_window_t2

0x9f98,	// (0x000265d7) popup_query_data_window_t3_ParamLimits

0x9f98,	// (0x000265d7) popup_query_data_window_t3

0x0002,

0xf813,	// (0x0002be52) popup_query_data_window_t_ParamLimits

0xf813,	// (0x0002be52) popup_query_data_window_t

0x9fb2,	// (0x000265f1) query_popup_data_pane_ParamLimits

0x9fb2,	// (0x000265f1) query_popup_data_pane

0x9fc6,	// (0x00026605) query_popup_data_pane_cp1_ParamLimits

0x9fc6,	// (0x00026605) query_popup_data_pane_cp1

0x9e59,	// (0x00026498) bg_popup_window_pane_cp10_ParamLimits

0x9e59,	// (0x00026498) bg_popup_window_pane_cp10

0x9e8b,	// (0x000264ca) indicator_popup_pane_ParamLimits

0x9e8b,	// (0x000264ca) indicator_popup_pane

0x9ead,	// (0x000264ec) popup_query_code_window_t1_ParamLimits

0x9ead,	// (0x000264ec) popup_query_code_window_t1

0x9ec7,	// (0x00026506) popup_query_code_window_t2_ParamLimits

0x9ec7,	// (0x00026506) popup_query_code_window_t2

0x9f10,	// (0x0002654f) popup_query_code_window_t3_ParamLimits

0x9f10,	// (0x0002654f) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x0002be4b) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x0002be4b) popup_query_code_window_t

0x9f3f,	// (0x0002657e) query_popup_pane_ParamLimits

0x9f3f,	// (0x0002657e) query_popup_pane

0x7f93,	// (0x000245d2) bg_popup_window_pane_cp15_ParamLimits

0x7f93,	// (0x000245d2) bg_popup_window_pane_cp15

0x7fb1,	// (0x000245f0) indicator_popup_pane_cp1_ParamLimits

0x7fb1,	// (0x000245f0) indicator_popup_pane_cp1

0x7fc4,	// (0x00024603) indicator_popup_pane_cp2_ParamLimits

0x7fc4,	// (0x00024603) indicator_popup_pane_cp2

0x7fd7,	// (0x00024616) popup_query_data_code_window_g1_ParamLimits

0x7fd7,	// (0x00024616) popup_query_data_code_window_g1

0x7fea,	// (0x00024629) popup_query_data_code_window_t1_ParamLimits

0x7fea,	// (0x00024629) popup_query_data_code_window_t1

0x7ffc,	// (0x0002463b) popup_query_data_code_window_t2_ParamLimits

0x7ffc,	// (0x0002463b) popup_query_data_code_window_t2

0x800e,	// (0x0002464d) popup_query_data_code_window_t3_ParamLimits

0x800e,	// (0x0002464d) popup_query_data_code_window_t3

0x8024,	// (0x00024663) popup_query_data_code_window_t4_ParamLimits

0x8024,	// (0x00024663) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0002bba2) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0002bba2) popup_query_data_code_window_t

0x66a5,	// (0x00022ce4) list_single_midp_graphic_pane_g3

0x803c,	// (0x0002467b) query_popup_data_pane_cp2_ParamLimits

0x804f,	// (0x0002468e) query_popup_pane_cp2_ParamLimits

0x804f,	// (0x0002468e) query_popup_pane_cp2

0x2e2d,	// (0x0001f46c) bg_popup_window_pane_cp11

0x9e3d,	// (0x0002647c) heading_pane_cp5

0x9e45,	// (0x00026484) listscroll_popup_info_pane

0x2e2d,	// (0x0001f46c) input_focus_pane_cp3

0x8062,	// (0x000246a1) query_popup_pane_t1

0x8070,	// (0x000246af) list_popup_info_pane_ParamLimits

0x8070,	// (0x000246af) list_popup_info_pane

0x807f,	// (0x000246be) listscroll_popup_info_pane_g1

0x8087,	// (0x000246c6) scroll_pane_cp7

0x8091,	// (0x000246d0) popup_info_list_pane_t1_ParamLimits

0x8091,	// (0x000246d0) popup_info_list_pane_t1

0x80ab,	// (0x000246ea) popup_info_list_pane_t2_ParamLimits

0x80ab,	// (0x000246ea) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0002bbab) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0002bbab) popup_info_list_pane_t

0x2e2d,	// (0x0001f46c) bg_popup_window_pane_cp12

0xb1e1,	// (0x00027820) find_popup_pane

0x7c3c,	// (0x0002427b) bg_popup_window_pane_cp3

0x80c5,	// (0x00024704) heading_pane_cp3

0x80d4,	// (0x00024713) listscroll_popup_graphic_pane

0x2e2d,	// (0x0001f46c) bg_popup_window_pane_cp4

0x8134,	// (0x00024773) heading_pane_cp4

0x813e,	// (0x0002477d) listscroll_popup_colour_pane

0x8146,	// (0x00024785) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8146,	// (0x00024785) cell_large_graphic_colour_none_popup_pane

0x815a,	// (0x00024799) grid_large_graphic_colour_popup_pane_ParamLimits

0x815a,	// (0x00024799) grid_large_graphic_colour_popup_pane

0x817e,	// (0x000247bd) listscroll_popup_colour_pane_g1_ParamLimits

0x817e,	// (0x000247bd) listscroll_popup_colour_pane_g1

0x8195,	// (0x000247d4) listscroll_popup_colour_pane_g2_ParamLimits

0x8195,	// (0x000247d4) listscroll_popup_colour_pane_g2

0x81ac,	// (0x000247eb) listscroll_popup_colour_pane_g3_ParamLimits

0x81ac,	// (0x000247eb) listscroll_popup_colour_pane_g3

0x81bc,	// (0x000247fb) listscroll_popup_colour_pane_g4_ParamLimits

0x81bc,	// (0x000247fb) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0002bbb0) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0002bbb0) listscroll_popup_colour_pane_g

0x81cc,	// (0x0002480b) scroll_pane_cp6_ParamLimits

0x81cc,	// (0x0002480b) scroll_pane_cp6

0x81de,	// (0x0002481d) cell_large_graphic_colour_popup_pane_ParamLimits

0x81de,	// (0x0002481d) cell_large_graphic_colour_popup_pane

0x81fd,	// (0x0002483c) cell_large_graphic_colour_none_popup_pane_t1

0x2e2d,	// (0x0001f46c) grid_highlight_pane_cp5

0x820c,	// (0x0002484b) cell_large_graphic_colour_popup_pane_g1

0x8214,	// (0x00024853) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0002bbb9) cell_large_graphic_colour_popup_pane_g

0x821c,	// (0x0002485b) cell_large_graphic_colour_popup_pane_g2_copy1

0x8225,	// (0x00024864) grid_highlight_pane_cp4

0x822d,	// (0x0002486c) bg_popup_window_pane_cp8_ParamLimits

0x822d,	// (0x0002486c) bg_popup_window_pane_cp8

0x8248,	// (0x00024887) popup_snote_single_text_window_g1_ParamLimits

0x8248,	// (0x00024887) popup_snote_single_text_window_g1

0x825a,	// (0x00024899) popup_snote_single_text_window_t1_ParamLimits

0x825a,	// (0x00024899) popup_snote_single_text_window_t1

0x826d,	// (0x000248ac) popup_snote_single_text_window_t2_ParamLimits

0x826d,	// (0x000248ac) popup_snote_single_text_window_t2

0x8280,	// (0x000248bf) popup_snote_single_text_window_t3_ParamLimits

0x8280,	// (0x000248bf) popup_snote_single_text_window_t3

0x82b9,	// (0x000248f8) popup_snote_single_text_window_t4_ParamLimits

0x82b9,	// (0x000248f8) popup_snote_single_text_window_t4

0x82ed,	// (0x0002492c) popup_snote_single_text_window_t5_ParamLimits

0x82ed,	// (0x0002492c) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0002bbbe) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0002bbbe) popup_snote_single_text_window_t

0x831c,	// (0x0002495b) bg_popup_window_pane_cp9_ParamLimits

0x831c,	// (0x0002495b) bg_popup_window_pane_cp9

0x8248,	// (0x00024887) popup_snote_single_graphic_window_g1_ParamLimits

0x8248,	// (0x00024887) popup_snote_single_graphic_window_g1

0x832a,	// (0x00024969) popup_snote_single_graphic_window_g2_ParamLimits

0x832a,	// (0x00024969) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0002bbc9) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0002bbc9) popup_snote_single_graphic_window_g

0x8336,	// (0x00024975) popup_snote_single_graphic_window_t1_ParamLimits

0x8336,	// (0x00024975) popup_snote_single_graphic_window_t1

0x8349,	// (0x00024988) popup_snote_single_graphic_window_t2_ParamLimits

0x8349,	// (0x00024988) popup_snote_single_graphic_window_t2

0x835c,	// (0x0002499b) popup_snote_single_graphic_window_t3_ParamLimits

0x835c,	// (0x0002499b) popup_snote_single_graphic_window_t3

0x8395,	// (0x000249d4) popup_snote_single_graphic_window_t4_ParamLimits

0x8395,	// (0x000249d4) popup_snote_single_graphic_window_t4

0x83c9,	// (0x00024a08) popup_snote_single_graphic_window_t5_ParamLimits

0x83c9,	// (0x00024a08) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0002bbce) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0002bbce) popup_snote_single_graphic_window_t

0xb117,	// (0x00027756) grid_graphic_popup_pane_ParamLimits

0xb117,	// (0x00027756) grid_graphic_popup_pane

0xb141,	// (0x00027780) listscroll_popup_graphic_pane_g1_ParamLimits

0xb141,	// (0x00027780) listscroll_popup_graphic_pane_g1

0xb161,	// (0x000277a0) listscroll_popup_graphic_pane_g2_ParamLimits

0xb161,	// (0x000277a0) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x0002bfc8) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x0002bfc8) listscroll_popup_graphic_pane_g

0xb175,	// (0x000277b4) scroll_pane_cp5

0xb0a5,	// (0x000276e4) cell_graphic_popup_pane_ParamLimits

0xb0a5,	// (0x000276e4) cell_graphic_popup_pane

0xb086,	// (0x000276c5) cell_graphic_popup_pane_g1

0xb08e,	// (0x000276cd) cell_graphic_popup_pane_g2

0x821c,	// (0x0002485b) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x0002bfc1) cell_graphic_popup_pane_g

0xb097,	// (0x000276d6) cell_graphic_popup_pane_t2

0x8225,	// (0x00024864) grid_highlight_pane_cp3

0x840a,	// (0x00024a49) list_gen_pane_ParamLimits

0x840a,	// (0x00024a49) list_gen_pane

0x843c,	// (0x00024a7b) scroll_pane

0xafde,	// (0x0002761d) bg_list_pane_g1_ParamLimits

0xafde,	// (0x0002761d) bg_list_pane_g1

0xaffb,	// (0x0002763a) bg_list_pane_g2_ParamLimits

0xaffb,	// (0x0002763a) bg_list_pane_g2

0xb010,	// (0x0002764f) bg_list_pane_g3_ParamLimits

0xb010,	// (0x0002764f) bg_list_pane_g3

0xb024,	// (0x00027663) bg_list_pane_g4_ParamLimits

0xb024,	// (0x00027663) bg_list_pane_g4

0xb038,	// (0x00027677) bg_list_pane_g5_ParamLimits

0xb038,	// (0x00027677) bg_list_pane_g5

0x0004,

0xf977,	// (0x0002bfb6) bg_list_pane_g_ParamLimits

0xf977,	// (0x0002bfb6) bg_list_pane_g

0x4e60,	// (0x0002149f) list_double2_graphic_large_graphic_pane_ParamLimits

0x4e60,	// (0x0002149f) list_double2_graphic_large_graphic_pane

0x4e60,	// (0x0002149f) list_double2_graphic_pane_ParamLimits

0x4e60,	// (0x0002149f) list_double2_graphic_pane

0x4e60,	// (0x0002149f) list_double2_large_graphic_pane_ParamLimits

0x4e60,	// (0x0002149f) list_double2_large_graphic_pane

0x4e60,	// (0x0002149f) list_double2_pane_ParamLimits

0x4e60,	// (0x0002149f) list_double2_pane

0x4e60,	// (0x0002149f) list_double_graphic_heading_pane_ParamLimits

0x4e60,	// (0x0002149f) list_double_graphic_heading_pane

0x4e60,	// (0x0002149f) list_double_graphic_pane_ParamLimits

0x4e60,	// (0x0002149f) list_double_graphic_pane

0x4e60,	// (0x0002149f) list_double_heading_pane_ParamLimits

0x4e60,	// (0x0002149f) list_double_heading_pane

0x4e60,	// (0x0002149f) list_double_large_graphic_pane_ParamLimits

0x4e60,	// (0x0002149f) list_double_large_graphic_pane

0x4e60,	// (0x0002149f) list_double_number_pane_ParamLimits

0x4e60,	// (0x0002149f) list_double_number_pane

0x4e60,	// (0x0002149f) list_double_pane_ParamLimits

0x4e60,	// (0x0002149f) list_double_pane

0x4e60,	// (0x0002149f) list_double_time_pane_ParamLimits

0x4e60,	// (0x0002149f) list_double_time_pane

0x4e60,	// (0x0002149f) list_setting_number_pane_ParamLimits

0x4e60,	// (0x0002149f) list_setting_number_pane

0x4e60,	// (0x0002149f) list_setting_pane_ParamLimits

0x4e60,	// (0x0002149f) list_setting_pane

0x4eae,	// (0x000214ed) list_single_2graphic_pane_ParamLimits

0x4eae,	// (0x000214ed) list_single_2graphic_pane

0x4eae,	// (0x000214ed) list_single_graphic_heading_pane_ParamLimits

0x4eae,	// (0x000214ed) list_single_graphic_heading_pane

0x4eae,	// (0x000214ed) list_single_graphic_pane_ParamLimits

0x4eae,	// (0x000214ed) list_single_graphic_pane

0x4eae,	// (0x000214ed) list_single_heading_pane_ParamLimits

0x4eae,	// (0x000214ed) list_single_heading_pane

0xafbc,	// (0x000275fb) list_single_large_graphic_pane_ParamLimits

0xafbc,	// (0x000275fb) list_single_large_graphic_pane

0x4eae,	// (0x000214ed) list_single_number_heading_pane_ParamLimits

0x4eae,	// (0x000214ed) list_single_number_heading_pane

0x4eae,	// (0x000214ed) list_single_number_pane_ParamLimits

0x4eae,	// (0x000214ed) list_single_number_pane

0x4eae,	// (0x000214ed) list_single_pane_ParamLimits

0x4eae,	// (0x000214ed) list_single_pane

0x2e2d,	// (0x0001f46c) list_highlight_pane_cp1

0x44c3,	// (0x00020b02) list_single_pane_g1_ParamLimits

0x44c3,	// (0x00020b02) list_single_pane_g1

0x44cf,	// (0x00020b0e) list_single_pane_g2_ParamLimits

0x44cf,	// (0x00020b0e) list_single_pane_g2

0x0001,

0xf5a1,	// (0x0002bbe0) list_single_pane_g_ParamLimits

0xf5a1,	// (0x0002bbe0) list_single_pane_g

0x4e4a,	// (0x00021489) list_single_pane_t1_ParamLimits

0x4e4a,	// (0x00021489) list_single_pane_t1

0x44c3,	// (0x00020b02) list_single_number_pane_g1_ParamLimits

0x44c3,	// (0x00020b02) list_single_number_pane_g1

0x44cf,	// (0x00020b0e) list_single_number_pane_g2_ParamLimits

0x44cf,	// (0x00020b0e) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x0002bbe0) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x0002bbe0) list_single_number_pane_g

0x4df4,	// (0x00021433) list_single_number_pane_t1_ParamLimits

0x4df4,	// (0x00021433) list_single_number_pane_t1

0x4e0a,	// (0x00021449) list_single_number_pane_t2_ParamLimits

0x4e0a,	// (0x00021449) list_single_number_pane_t2

0x0001,

0xf938,	// (0x0002bf77) list_single_number_pane_t_ParamLimits

0xf938,	// (0x0002bf77) list_single_number_pane_t

0x44b7,	// (0x00020af6) list_single_graphic_pane_g1_ParamLimits

0x44b7,	// (0x00020af6) list_single_graphic_pane_g1

0x44c3,	// (0x00020b02) list_single_graphic_pane_g2_ParamLimits

0x44c3,	// (0x00020b02) list_single_graphic_pane_g2

0x44cf,	// (0x00020b0e) list_single_graphic_pane_g3_ParamLimits

0x44cf,	// (0x00020b0e) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0002bbd9) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0002bbd9) list_single_graphic_pane_g

0x44db,	// (0x00020b1a) list_single_graphic_pane_t1_ParamLimits

0x44db,	// (0x00020b1a) list_single_graphic_pane_t1

0x44c3,	// (0x00020b02) list_single_heading_pane_g1_ParamLimits

0x44c3,	// (0x00020b02) list_single_heading_pane_g1

0x44cf,	// (0x00020b0e) list_single_heading_pane_g2_ParamLimits

0x44cf,	// (0x00020b0e) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0002bbe0) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0002bbe0) list_single_heading_pane_g

0x44f1,	// (0x00020b30) list_single_heading_pane_t1_ParamLimits

0x44f1,	// (0x00020b30) list_single_heading_pane_t1

0x4507,	// (0x00020b46) list_single_heading_pane_t2_ParamLimits

0x4507,	// (0x00020b46) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0002bbe5) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0002bbe5) list_single_heading_pane_t

0x44c3,	// (0x00020b02) list_single_number_heading_pane_g1_ParamLimits

0x44c3,	// (0x00020b02) list_single_number_heading_pane_g1

0x44cf,	// (0x00020b0e) list_single_number_heading_pane_g2_ParamLimits

0x44cf,	// (0x00020b0e) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x0002bbe0) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x0002bbe0) list_single_number_heading_pane_g

0x44f1,	// (0x00020b30) list_single_number_heading_pane_t1_ParamLimits

0x44f1,	// (0x00020b30) list_single_number_heading_pane_t1

0x4519,	// (0x00020b58) list_single_number_heading_pane_t2_ParamLimits

0x4519,	// (0x00020b58) list_single_number_heading_pane_t2

0x452b,	// (0x00020b6a) list_single_number_heading_pane_t3_ParamLimits

0x452b,	// (0x00020b6a) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x0002bbea) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x0002bbea) list_single_number_heading_pane_t

0x453d,	// (0x00020b7c) list_single_graphic_heading_pane_g1_ParamLimits

0x453d,	// (0x00020b7c) list_single_graphic_heading_pane_g1

0x4549,	// (0x00020b88) list_single_graphic_heading_pane_g4_ParamLimits

0x4549,	// (0x00020b88) list_single_graphic_heading_pane_g4

0x44cf,	// (0x00020b0e) list_single_graphic_heading_pane_g5_ParamLimits

0x44cf,	// (0x00020b0e) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0002bbf1) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0002bbf1) list_single_graphic_heading_pane_g

0x44f1,	// (0x00020b30) list_single_graphic_heading_pane_t1_ParamLimits

0x44f1,	// (0x00020b30) list_single_graphic_heading_pane_t1

0x455a,	// (0x00020b99) list_single_graphic_heading_pane_t2_ParamLimits

0x455a,	// (0x00020b99) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x0002bbf8) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x0002bbf8) list_single_graphic_heading_pane_t

0x456c,	// (0x00020bab) list_single_large_graphic_pane_g1_ParamLimits

0x456c,	// (0x00020bab) list_single_large_graphic_pane_g1

0x4578,	// (0x00020bb7) list_single_large_graphic_pane_g2_ParamLimits

0x4578,	// (0x00020bb7) list_single_large_graphic_pane_g2

0x4584,	// (0x00020bc3) list_single_large_graphic_pane_g3_ParamLimits

0x4584,	// (0x00020bc3) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x0002bbfd) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x0002bbfd) list_single_large_graphic_pane_g

0x9ff9,	// (0x00026638) wait_border_pane_g2_copy1

0x4590,	// (0x00020bcf) list_single_large_graphic_pane_g4_cp2

0x4598,	// (0x00020bd7) list_single_large_graphic_pane_t1_ParamLimits

0x4598,	// (0x00020bd7) list_single_large_graphic_pane_t1

0x45ae,	// (0x00020bed) list_double_pane_g1_ParamLimits

0x45ae,	// (0x00020bed) list_double_pane_g1

0x45ba,	// (0x00020bf9) list_double_pane_g2_ParamLimits

0x45ba,	// (0x00020bf9) list_double_pane_g2

0x0001,

0xf5c5,	// (0x0002bc04) list_double_pane_g_ParamLimits

0xf5c5,	// (0x0002bc04) list_double_pane_g

0x45c6,	// (0x00020c05) list_double_pane_t1_ParamLimits

0x45c6,	// (0x00020c05) list_double_pane_t1

0x45dc,	// (0x00020c1b) list_double_pane_t2_ParamLimits

0x45dc,	// (0x00020c1b) list_double_pane_t2

0x0001,

0xf5ca,	// (0x0002bc09) list_double_pane_t_ParamLimits

0xf5ca,	// (0x0002bc09) list_double_pane_t

0x45ee,	// (0x00020c2d) list_double2_pane_g1_ParamLimits

0x45ee,	// (0x00020c2d) list_double2_pane_g1

0x45ff,	// (0x00020c3e) list_double2_pane_g2_ParamLimits

0x45ff,	// (0x00020c3e) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x0002bc0e) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x0002bc0e) list_double2_pane_g

0x460b,	// (0x00020c4a) list_double2_pane_t1_ParamLimits

0x460b,	// (0x00020c4a) list_double2_pane_t1

0x4621,	// (0x00020c60) list_double2_pane_t2_ParamLimits

0x4621,	// (0x00020c60) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x0002bc13) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x0002bc13) list_double2_pane_t

0x45ae,	// (0x00020bed) list_double_number_pane_g1_ParamLimits

0x45ae,	// (0x00020bed) list_double_number_pane_g1

0x45ba,	// (0x00020bf9) list_double_number_pane_g2_ParamLimits

0x45ba,	// (0x00020bf9) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x0002bc04) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x0002bc04) list_double_number_pane_g

0x4633,	// (0x00020c72) list_double_number_pane_t1_ParamLimits

0x4633,	// (0x00020c72) list_double_number_pane_t1

0x4645,	// (0x00020c84) list_double_number_pane_t2_ParamLimits

0x4645,	// (0x00020c84) list_double_number_pane_t2

0x465b,	// (0x00020c9a) list_double_number_pane_t3_ParamLimits

0x465b,	// (0x00020c9a) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x0002bc18) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x0002bc18) list_double_number_pane_t

0x466d,	// (0x00020cac) list_double_graphic_pane_g1_ParamLimits

0x466d,	// (0x00020cac) list_double_graphic_pane_g1

0x4679,	// (0x00020cb8) list_double_graphic_pane_g2_ParamLimits

0x4679,	// (0x00020cb8) list_double_graphic_pane_g2

0x4688,	// (0x00020cc7) list_double_graphic_pane_g3_ParamLimits

0x4688,	// (0x00020cc7) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0002bc1f) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0002bc1f) list_double_graphic_pane_g

0x46a0,	// (0x00020cdf) list_double_graphic_pane_t1_ParamLimits

0x46a0,	// (0x00020cdf) list_double_graphic_pane_t1

0x46b6,	// (0x00020cf5) list_double_graphic_pane_t2_ParamLimits

0x46b6,	// (0x00020cf5) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x0002bc28) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x0002bc28) list_double_graphic_pane_t

0x46c8,	// (0x00020d07) list_double2_graphic_pane_g1_ParamLimits

0x46c8,	// (0x00020d07) list_double2_graphic_pane_g1

0x46d4,	// (0x00020d13) list_double2_graphic_pane_g2_ParamLimits

0x46d4,	// (0x00020d13) list_double2_graphic_pane_g2

0x45ff,	// (0x00020c3e) list_double2_graphic_pane_g3_ParamLimits

0x45ff,	// (0x00020c3e) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x0002bc2d) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x0002bc2d) list_double2_graphic_pane_g

0x46e0,	// (0x00020d1f) list_double2_graphic_pane_t1_ParamLimits

0x46e0,	// (0x00020d1f) list_double2_graphic_pane_t1

0x46f6,	// (0x00020d35) list_double2_graphic_pane_t2_ParamLimits

0x46f6,	// (0x00020d35) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x0002bc34) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x0002bc34) list_double2_graphic_pane_t

0x4708,	// (0x00020d47) list_double_large_graphic_pane_g1_ParamLimits

0x4708,	// (0x00020d47) list_double_large_graphic_pane_g1

0x4727,	// (0x00020d66) list_double_large_graphic_pane_g2_ParamLimits

0x4727,	// (0x00020d66) list_double_large_graphic_pane_g2

0x45ba,	// (0x00020bf9) list_double_large_graphic_pane_g3_ParamLimits

0x45ba,	// (0x00020bf9) list_double_large_graphic_pane_g3

0x4738,	// (0x00020d77) list_double_large_graphic_pane_g4_ParamLimits

0x4738,	// (0x00020d77) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x0002bc39) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x0002bc39) list_double_large_graphic_pane_g

0x475f,	// (0x00020d9e) list_double_large_graphic_pane_t1_ParamLimits

0x475f,	// (0x00020d9e) list_double_large_graphic_pane_t1

0x4778,	// (0x00020db7) list_double_large_graphic_pane_t2_ParamLimits

0x4778,	// (0x00020db7) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x0002bc44) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x0002bc44) list_double_large_graphic_pane_t

0x478a,	// (0x00020dc9) list_double2_large_graphic_pane_g1_ParamLimits

0x478a,	// (0x00020dc9) list_double2_large_graphic_pane_g1

0x45ee,	// (0x00020c2d) list_double2_large_graphic_pane_g2_ParamLimits

0x45ee,	// (0x00020c2d) list_double2_large_graphic_pane_g2

0x45ff,	// (0x00020c3e) list_double2_large_graphic_pane_g3_ParamLimits

0x45ff,	// (0x00020c3e) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x0002bc49) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x0002bc49) list_double2_large_graphic_pane_g

0x4796,	// (0x00020dd5) list_double2_large_graphic_pane_t1_ParamLimits

0x4796,	// (0x00020dd5) list_double2_large_graphic_pane_t1

0x47ac,	// (0x00020deb) list_double2_large_graphic_pane_t2_ParamLimits

0x47ac,	// (0x00020deb) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x0002bc50) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x0002bc50) list_double2_large_graphic_pane_t

0x47be,	// (0x00020dfd) list_double_heading_pane_g1_ParamLimits

0x47be,	// (0x00020dfd) list_double_heading_pane_g1

0x47cf,	// (0x00020e0e) list_double_heading_pane_g2_ParamLimits

0x47cf,	// (0x00020e0e) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x0002bc55) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x0002bc55) list_double_heading_pane_g

0x47db,	// (0x00020e1a) list_double_heading_pane_t1_ParamLimits

0x47db,	// (0x00020e1a) list_double_heading_pane_t1

0x4621,	// (0x00020c60) list_double_heading_pane_t2_ParamLimits

0x4621,	// (0x00020c60) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x0002bc5a) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x0002bc5a) list_double_heading_pane_t

0x47f1,	// (0x00020e30) list_double_graphic_heading_pane_g1_ParamLimits

0x47f1,	// (0x00020e30) list_double_graphic_heading_pane_g1

0x47be,	// (0x00020dfd) list_double_graphic_heading_pane_g2_ParamLimits

0x47be,	// (0x00020dfd) list_double_graphic_heading_pane_g2

0x47cf,	// (0x00020e0e) list_double_graphic_heading_pane_g3_ParamLimits

0x47cf,	// (0x00020e0e) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x0002bc5f) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x0002bc5f) list_double_graphic_heading_pane_g

0x47fd,	// (0x00020e3c) list_double_graphic_heading_pane_t1_ParamLimits

0x47fd,	// (0x00020e3c) list_double_graphic_heading_pane_t1

0x46f6,	// (0x00020d35) list_double_graphic_heading_pane_t2_ParamLimits

0x46f6,	// (0x00020d35) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x0002bc66) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x0002bc66) list_double_graphic_heading_pane_t

0x4727,	// (0x00020d66) list_double_time_pane_g1_ParamLimits

0x4727,	// (0x00020d66) list_double_time_pane_g1

0x45ba,	// (0x00020bf9) list_double_time_pane_g2_ParamLimits

0x45ba,	// (0x00020bf9) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x0002bc6b) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x0002bc6b) list_double_time_pane_g

0x4813,	// (0x00020e52) list_double_time_pane_t1_ParamLimits

0x4813,	// (0x00020e52) list_double_time_pane_t1

0x4829,	// (0x00020e68) list_double_time_pane_t2_ParamLimits

0x4829,	// (0x00020e68) list_double_time_pane_t2

0x483b,	// (0x00020e7a) list_double_time_pane_t3_ParamLimits

0x483b,	// (0x00020e7a) list_double_time_pane_t3

0x484d,	// (0x00020e8c) list_double_time_pane_t4_ParamLimits

0x484d,	// (0x00020e8c) list_double_time_pane_t4

0x0003,

0xf631,	// (0x0002bc70) list_double_time_pane_t_ParamLimits

0xf631,	// (0x0002bc70) list_double_time_pane_t

0x46d4,	// (0x00020d13) list_setting_pane_g1_ParamLimits

0x46d4,	// (0x00020d13) list_setting_pane_g1

0x45ff,	// (0x00020c3e) list_setting_pane_g2_ParamLimits

0x45ff,	// (0x00020c3e) list_setting_pane_g2

0x0001,

0xf63a,	// (0x0002bc79) list_setting_pane_g_ParamLimits

0xf63a,	// (0x0002bc79) list_setting_pane_g

0x485f,	// (0x00020e9e) list_setting_pane_t1_ParamLimits

0x485f,	// (0x00020e9e) list_setting_pane_t1

0x4879,	// (0x00020eb8) list_setting_pane_t2_ParamLimits

0x4879,	// (0x00020eb8) list_setting_pane_t2

0x0002,

0xf63f,	// (0x0002bc7e) list_setting_pane_t_ParamLimits

0xf63f,	// (0x0002bc7e) list_setting_pane_t

0x48b8,	// (0x00020ef7) set_value_pane_cp_ParamLimits

0x48b8,	// (0x00020ef7) set_value_pane_cp

0x48c4,	// (0x00020f03) list_setting_number_pane_g1_ParamLimits

0x48c4,	// (0x00020f03) list_setting_number_pane_g1

0x48d0,	// (0x00020f0f) list_setting_number_pane_g2_ParamLimits

0x48d0,	// (0x00020f0f) list_setting_number_pane_g2

0x0001,

0xf646,	// (0x0002bc85) list_setting_number_pane_g_ParamLimits

0xf646,	// (0x0002bc85) list_setting_number_pane_g

0x48dc,	// (0x00020f1b) list_setting_number_pane_t1_ParamLimits

0x48dc,	// (0x00020f1b) list_setting_number_pane_t1

0x48f5,	// (0x00020f34) list_setting_number_pane_t2_ParamLimits

0x48f5,	// (0x00020f34) list_setting_number_pane_t2

0x490f,	// (0x00020f4e) list_setting_number_pane_t3_ParamLimits

0x490f,	// (0x00020f4e) list_setting_number_pane_t3

0x0003,

0xf64b,	// (0x0002bc8a) list_setting_number_pane_t_ParamLimits

0xf64b,	// (0x0002bc8a) list_setting_number_pane_t

0x48b8,	// (0x00020ef7) set_value_pane_ParamLimits

0x48b8,	// (0x00020ef7) set_value_pane

0x8470,	// (0x00024aaf) bg_set_opt_pane_ParamLimits

0x8470,	// (0x00024aaf) bg_set_opt_pane

0x4952,	// (0x00020f91) set_value_pane_t1

0x8491,	// (0x00024ad0) slider_set_pane_cp3

0x849a,	// (0x00024ad9) volume_small_pane_cp

0x84a3,	// (0x00024ae2) list_form_gen_pane

0x84ac,	// (0x00024aeb) scroll_pane_cp8

0x4968,	// (0x00020fa7) form_field_data_pane_ParamLimits

0x4968,	// (0x00020fa7) form_field_data_pane

0x4988,	// (0x00020fc7) form_field_data_wide_pane_ParamLimits

0x4988,	// (0x00020fc7) form_field_data_wide_pane

0x49a9,	// (0x00020fe8) form_field_popup_pane_ParamLimits

0x49a9,	// (0x00020fe8) form_field_popup_pane

0x49c9,	// (0x00021008) form_field_popup_wide_pane_ParamLimits

0x49c9,	// (0x00021008) form_field_popup_wide_pane

0x49e6,	// (0x00021025) form_field_slider_pane_ParamLimits

0x49e6,	// (0x00021025) form_field_slider_pane

0x49f9,	// (0x00021038) form_field_slider_wide_pane_ParamLimits

0x49f9,	// (0x00021038) form_field_slider_wide_pane

0x84bd,	// (0x00024afc) data_form_pane

0x4a16,	// (0x00021055) form_field_data_pane_t1

0x84c9,	// (0x00024b08) input_focus_pane

0x4a2e,	// (0x0002106d) data_form_wide_pane

0x4a4b,	// (0x0002108a) form_field_data_wide_pane_t1

0x823a,	// (0x00024879) input_focus_pane_cp6

0x4a6d,	// (0x000210ac) form_field_popup_pane_t1

0x84c9,	// (0x00024b08) input_focus_pane_cp7

0x84f7,	// (0x00024b36) list_form_pane

0x4a8d,	// (0x000210cc) form_field_popup_wide_pane_t1

0x84c9,	// (0x00024b08) input_focus_pane_cp8

0x8503,	// (0x00024b42) list_form_wide_pane

0x4aaa,	// (0x000210e9) form_field_slider_pane_t1_ParamLimits

0x4aaa,	// (0x000210e9) form_field_slider_pane_t1

0x4ac0,	// (0x000210ff) form_field_slider_pane_t2_ParamLimits

0x4ac0,	// (0x000210ff) form_field_slider_pane_t2

0x0001,

0xf65b,	// (0x0002bc9a) form_field_slider_pane_t_ParamLimits

0xf65b,	// (0x0002bc9a) form_field_slider_pane_t

0x7eb7,	// (0x000244f6) input_focus_pane_cp9_ParamLimits

0x7eb7,	// (0x000244f6) input_focus_pane_cp9

0x4ad5,	// (0x00021114) slider_cont_pane_ParamLimits

0x4ad5,	// (0x00021114) slider_cont_pane

0x850f,	// (0x00024b4e) form_field_slider_wide_pane_t1_ParamLimits

0x850f,	// (0x00024b4e) form_field_slider_wide_pane_t1

0x4ae9,	// (0x00021128) form_field_slider_wide_pane_t2_ParamLimits

0x4ae9,	// (0x00021128) form_field_slider_wide_pane_t2

0x0001,

0xf660,	// (0x0002bc9f) form_field_slider_wide_pane_t_ParamLimits

0xf660,	// (0x0002bc9f) form_field_slider_wide_pane_t

0x7eb7,	// (0x000244f6) input_focus_pane_cp10_ParamLimits

0x7eb7,	// (0x000244f6) input_focus_pane_cp10

0x4afb,	// (0x0002113a) slider_cont_pane_cp1_ParamLimits

0x4afb,	// (0x0002113a) slider_cont_pane_cp1

0x4b0f,	// (0x0002114e) slider_form_pane_cp

0x8521,	// (0x00024b60) input_focus_pane_g1

0x8529,	// (0x00024b68) input_focus_pane_g2

0x8531,	// (0x00024b70) input_focus_pane_g3

0x8539,	// (0x00024b78) input_focus_pane_g4

0x8541,	// (0x00024b80) input_focus_pane_g5

0x8549,	// (0x00024b88) input_focus_pane_g6

0x8551,	// (0x00024b90) input_focus_pane_g7

0x8559,	// (0x00024b98) input_focus_pane_g8

0x8561,	// (0x00024ba0) input_focus_pane_g9

0x2e23,	// (0x0001f462) input_focus_pane_g10

0x0009,

0xf665,	// (0x0002bca4) input_focus_pane_g

0xa002,	// (0x00026641) wait_border_pane_g3_copy1

0x4b17,	// (0x00021156) data_form_pane_t1

0x2e23,	// (0x0001f462) wait_anim_pane_g1_copy1

0x4e1c,	// (0x0002145b) data_form_wide_pane_t1

0x4b32,	// (0x00021171) list_form_graphic_pane_cp_ParamLimits

0x4b32,	// (0x00021171) list_form_graphic_pane_cp

0xaf12,	// (0x00027551) slider_form_pane_g1

0xaf1b,	// (0x0002755a) slider_form_pane_g2

0x0006,

0xf968,	// (0x0002bfa7) slider_form_pane_g

0x4b4b,	// (0x0002118a) list_form_graphic_pane_ParamLimits

0x4b4b,	// (0x0002118a) list_form_graphic_pane

0x4b67,	// (0x000211a6) list_form_graphic_pane_g1

0x4b6f,	// (0x000211ae) list_form_graphic_pane_t1_ParamLimits

0x4b6f,	// (0x000211ae) list_form_graphic_pane_t1

0x7c3c,	// (0x0002427b) list_highlight_pane_cp5_ParamLimits

0x7c3c,	// (0x0002427b) list_highlight_pane_cp5

0x4b84,	// (0x000211c3) find_pane_g1

0x8569,	// (0x00024ba8) input_find_pane

0x4b8d,	// (0x000211cc) input_find_pane_g1_ParamLimits

0x4b8d,	// (0x000211cc) input_find_pane_g1

0x4b99,	// (0x000211d8) input_find_pane_t1_ParamLimits

0x4b99,	// (0x000211d8) input_find_pane_t1

0x4bae,	// (0x000211ed) input_find_pane_t2_ParamLimits

0x4bae,	// (0x000211ed) input_find_pane_t2

0x0001,

0xf67a,	// (0x0002bcb9) input_find_pane_t_ParamLimits

0xf67a,	// (0x0002bcb9) input_find_pane_t

0x8572,	// (0x00024bb1) input_focus_pane_cp5_ParamLimits

0x8572,	// (0x00024bb1) input_focus_pane_cp5

0x8591,	// (0x00024bd0) bg_popup_window_pane_cp2_ParamLimits

0x8591,	// (0x00024bd0) bg_popup_window_pane_cp2

0x859e,	// (0x00024bdd) listscroll_menu_pane_ParamLimits

0x859e,	// (0x00024bdd) listscroll_menu_pane

0x85aa,	// (0x00024be9) popup_submenu_window_ParamLimits

0x85aa,	// (0x00024be9) popup_submenu_window

0x85d6,	// (0x00024c15) find_popup_pane_g1

0x85de,	// (0x00024c1d) input_popup_find_pane_cp

0x85e8,	// (0x00024c27) input_focus_pane_cp4_ParamLimits

0x85e8,	// (0x00024c27) input_focus_pane_cp4

0x8602,	// (0x00024c41) input_popup_find_pane_t1_ParamLimits

0x8602,	// (0x00024c41) input_popup_find_pane_t1

0x2e2d,	// (0x0001f46c) bg_popup_sub_pane_cp

0x8630,	// (0x00024c6f) listscroll_popup_sub_pane

0x8638,	// (0x00024c77) list_submenu_pane_ParamLimits

0x8638,	// (0x00024c77) list_submenu_pane

0x8649,	// (0x00024c88) scroll_pane_cp4

0x8651,	// (0x00024c90) list_single_popup_submenu_pane_ParamLimits

0x8651,	// (0x00024c90) list_single_popup_submenu_pane

0x8665,	// (0x00024ca4) list_single_popup_submenu_pane_g1

0x866d,	// (0x00024cac) list_single_popup_submenu_pane_t1_ParamLimits

0x866d,	// (0x00024cac) list_single_popup_submenu_pane_t1

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp1_ParamLimits

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp1

0x8682,	// (0x00024cc1) tabs_2_active_pane_g1

0x868a,	// (0x00024cc9) tabs_2_active_pane_t1

0x7c3c,	// (0x0002427b) bg_passive_tab_pane_cp1_ParamLimits

0x7c3c,	// (0x0002427b) bg_passive_tab_pane_cp1

0x8682,	// (0x00024cc1) tabs_2_passive_pane_g1

0x868a,	// (0x00024cc9) tabs_2_passive_pane_t1

0x869c,	// (0x00024cdb) bg_active_tab_pane_cp4

0x86aa,	// (0x00024ce9) tabs_2_long_active_pane_t1

0x86bd,	// (0x00024cfc) bg_passive_tab_pane_cp4

0x66ad,	// (0x00022cec) list_single_midp_graphic_pane_g4_ParamLimits

0x869c,	// (0x00024cdb) bg_active_tab_pane_cp5

0x86c9,	// (0x00024d08) tabs_3_long_active_pane_t1

0x86bd,	// (0x00024cfc) bg_passive_tab_pane_cp5

0x66ad,	// (0x00022cec) list_single_midp_graphic_pane_g4

0x7c3c,	// (0x0002427b) bg_popup_window_pane_cp13_ParamLimits

0x7c3c,	// (0x0002427b) bg_popup_window_pane_cp13

0x86e4,	// (0x00024d23) listscroll_popup_fast_pane_ParamLimits

0x86e4,	// (0x00024d23) listscroll_popup_fast_pane

0x86f3,	// (0x00024d32) grid_popup_fast_pane_ParamLimits

0x86f3,	// (0x00024d32) grid_popup_fast_pane

0x8705,	// (0x00024d44) scroll_pane_cp9_ParamLimits

0x8705,	// (0x00024d44) scroll_pane_cp9

0xc859,	// (0x00028e98) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc859,	// (0x00028e98) list_single_graphic_hl_pane_t1_cp2

0x8729,	// (0x00024d68) input_focus_pane_cp20_ParamLimits

0x8729,	// (0x00024d68) input_focus_pane_cp20

0x8737,	// (0x00024d76) query_popup_data_pane_t1_ParamLimits

0x8737,	// (0x00024d76) query_popup_data_pane_t1

0x874a,	// (0x00024d89) query_popup_data_pane_t2_ParamLimits

0x874a,	// (0x00024d89) query_popup_data_pane_t2

0x8790,	// (0x00024dcf) query_popup_data_pane_t3_ParamLimits

0x8790,	// (0x00024dcf) query_popup_data_pane_t3

0x87d1,	// (0x00024e10) query_popup_data_pane_t4_ParamLimits

0x87d1,	// (0x00024e10) query_popup_data_pane_t4

0x880d,	// (0x00024e4c) query_popup_data_pane_t5_ParamLimits

0x880d,	// (0x00024e4c) query_popup_data_pane_t5

0x0004,

0xf67f,	// (0x0002bcbe) query_popup_data_pane_t_ParamLimits

0xf67f,	// (0x0002bcbe) query_popup_data_pane_t

0x8521,	// (0x00024b60) bg_set_opt_pane_g1

0x8529,	// (0x00024b68) bg_set_opt_pane_g2

0x8531,	// (0x00024b70) bg_set_opt_pane_g3

0x8539,	// (0x00024b78) bg_set_opt_pane_g4

0x8541,	// (0x00024b80) bg_set_opt_pane_g5

0x8549,	// (0x00024b88) bg_set_opt_pane_g6

0x8551,	// (0x00024b90) bg_set_opt_pane_g7

0x8559,	// (0x00024b98) bg_set_opt_pane_g8

0x8561,	// (0x00024ba0) bg_set_opt_pane_g9

0x0008,

0xf68a,	// (0x0002bcc9) bg_set_opt_pane_g

0x5d4d,	// (0x0002238c) control_top_pane_stacon_ParamLimits

0x5d4d,	// (0x0002238c) control_top_pane_stacon

0x5da0,	// (0x000223df) signal_pane_stacon_ParamLimits

0x5da0,	// (0x000223df) signal_pane_stacon

0x8e18,	// (0x00025457) stacon_top_pane_g1_ParamLimits

0x8e18,	// (0x00025457) stacon_top_pane_g1

0x5dc5,	// (0x00022404) title_pane_stacon_ParamLimits

0x5dc5,	// (0x00022404) title_pane_stacon

0x5def,	// (0x0002242e) uni_indicator_pane_stacon_ParamLimits

0x5def,	// (0x0002242e) uni_indicator_pane_stacon

0x5e04,	// (0x00022443) battery_pane_stacon_ParamLimits

0x5e04,	// (0x00022443) battery_pane_stacon

0x5e48,	// (0x00022487) control_bottom_pane_stacon_ParamLimits

0x5e48,	// (0x00022487) control_bottom_pane_stacon

0x5e6b,	// (0x000224aa) navi_pane_stacon_ParamLimits

0x5e6b,	// (0x000224aa) navi_pane_stacon

0x8e3a,	// (0x00025479) stacon_bottom_pane_g1_ParamLimits

0x8e3a,	// (0x00025479) stacon_bottom_pane_g1

0x5ab0,	// (0x000220ef) aid_levels_signal_lsc_ParamLimits

0x5ab0,	// (0x000220ef) aid_levels_signal_lsc

0x5ac6,	// (0x00022105) signal_pane_stacon_g1_ParamLimits

0x5ac6,	// (0x00022105) signal_pane_stacon_g1

0x5ada,	// (0x00022119) signal_pane_stacon_g2_ParamLimits

0x5ada,	// (0x00022119) signal_pane_stacon_g2

0x0001,

0xf69d,	// (0x0002bcdc) signal_pane_stacon_g_ParamLimits

0xf69d,	// (0x0002bcdc) signal_pane_stacon_g

0x5b0f,	// (0x0002214e) title_pane_stacon_t1_ParamLimits

0x5b0f,	// (0x0002214e) title_pane_stacon_t1

0x8851,	// (0x00024e90) uni_indicator_pane_stacon_g1

0x885b,	// (0x00024e9a) uni_indicator_pane_stacon_g2

0x8865,	// (0x00024ea4) uni_indicator_pane_stacon_g3

0x886f,	// (0x00024eae) uni_indicator_pane_stacon_g4

0x0003,

0xf6a9,	// (0x0002bce8) uni_indicator_pane_stacon_g

0x5b34,	// (0x00022173) control_top_pane_stacon_g1

0x5b3c,	// (0x0002217b) control_top_pane_stacon_t1_ParamLimits

0x5b3c,	// (0x0002217b) control_top_pane_stacon_t1

0x5b73,	// (0x000221b2) aid_levels_battery_lsc_ParamLimits

0x5b73,	// (0x000221b2) aid_levels_battery_lsc

0x5b8a,	// (0x000221c9) battery_pane_stacon_g1_ParamLimits

0x5b8a,	// (0x000221c9) battery_pane_stacon_g1

0x5b9d,	// (0x000221dc) battery_pane_stacon_g2_ParamLimits

0x5b9d,	// (0x000221dc) battery_pane_stacon_g2

0x0001,

0xf6b2,	// (0x0002bcf1) battery_pane_stacon_g_ParamLimits

0xf6b2,	// (0x0002bcf1) battery_pane_stacon_g

0x5bdb,	// (0x0002221a) navi_icon_pane_stacon

0x5bef,	// (0x0002222e) navi_navi_pane_stacon

0x5bdb,	// (0x0002221a) navi_text_pane_stacon

0x5b34,	// (0x00022173) control_bottom_pane_stacon_g1

0x5c03,	// (0x00022242) control_bottom_pane_stacon_t1_ParamLimits

0x5c03,	// (0x00022242) control_bottom_pane_stacon_t1

0x8893,	// (0x00024ed2) grid_app_pane_ParamLimits

0x8893,	// (0x00024ed2) grid_app_pane

0x88b5,	// (0x00024ef4) scroll_pane_cp15_ParamLimits

0x88b5,	// (0x00024ef4) scroll_pane_cp15

0x88c8,	// (0x00024f07) cell_app_pane_ParamLimits

0x88c8,	// (0x00024f07) cell_app_pane

0x88f0,	// (0x00024f2f) cell_app_pane_g1_ParamLimits

0x88f0,	// (0x00024f2f) cell_app_pane_g1

0x8914,	// (0x00024f53) cell_app_pane_g2_ParamLimits

0x8914,	// (0x00024f53) cell_app_pane_g2

0x0001,

0xf6b7,	// (0x0002bcf6) cell_app_pane_g_ParamLimits

0xf6b7,	// (0x0002bcf6) cell_app_pane_g

0x8920,	// (0x00024f5f) cell_app_pane_t1_ParamLimits

0x8920,	// (0x00024f5f) cell_app_pane_t1

0x8937,	// (0x00024f76) grid_highlight_pane_ParamLimits

0x8937,	// (0x00024f76) grid_highlight_pane

0x8521,	// (0x00024b60) cell_highlight_pane_g1

0x8529,	// (0x00024b68) cell_highlight_pane_g2

0x8531,	// (0x00024b70) cell_highlight_pane_g3

0x8539,	// (0x00024b78) cell_highlight_pane_g4

0x8541,	// (0x00024b80) cell_highlight_pane_g5

0x8549,	// (0x00024b88) cell_highlight_pane_g6

0x8551,	// (0x00024b90) cell_highlight_pane_g7

0x8559,	// (0x00024b98) cell_highlight_pane_g8

0x8561,	// (0x00024ba0) cell_highlight_pane_g9

0x2e23,	// (0x0001f462) cell_highlight_pane_g10

0x0009,

0xf665,	// (0x0002bca4) cell_highlight_pane_g

0x8948,	// (0x00024f87) bg_scroll_pane

0x5c4d,	// (0x0002228c) scroll_handle_pane

0x898f,	// (0x00024fce) scroll_bg_pane_g1

0x89a4,	// (0x00024fe3) scroll_bg_pane_g2

0x89bc,	// (0x00024ffb) scroll_bg_pane_g3

0x0002,

0xf6bc,	// (0x0002bcfb) scroll_bg_pane_g

0x89d1,	// (0x00025010) scroll_handle_focus_pane_ParamLimits

0x89d1,	// (0x00025010) scroll_handle_focus_pane

0x898f,	// (0x00024fce) scroll_handle_pane_g1

0x89de,	// (0x0002501d) scroll_handle_pane_g2

0x89bc,	// (0x00024ffb) scroll_handle_pane_g3

0x0002,

0xf6c3,	// (0x0002bd02) scroll_handle_pane_g

0x85e8,	// (0x00024c27) bg_popup_sub_pane_cp21_ParamLimits

0x85e8,	// (0x00024c27) bg_popup_sub_pane_cp21

0x89f2,	// (0x00025031) popup_fep_japan_predictive_window_t1_ParamLimits

0x89f2,	// (0x00025031) popup_fep_japan_predictive_window_t1

0x8a0c,	// (0x0002504b) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a0c,	// (0x0002504b) popup_fep_japan_predictive_window_t2

0x8a3f,	// (0x0002507e) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a3f,	// (0x0002507e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ca,	// (0x0002bd09) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ca,	// (0x0002bd09) popup_fep_japan_predictive_window_t

0x2e2d,	// (0x0001f46c) bg_popup_sub_pane_cp23

0x8a76,	// (0x000250b5) listscroll_japin_cand_pane

0x8a7e,	// (0x000250bd) popup_fep_japan_candidate_window_t1

0x8a8c,	// (0x000250cb) candidate_pane_ParamLimits

0x8a8c,	// (0x000250cb) candidate_pane

0x8a9e,	// (0x000250dd) scroll_pane_cp30

0x8aa6,	// (0x000250e5) list_single_popup_jap_candidate_pane_ParamLimits

0x8aa6,	// (0x000250e5) list_single_popup_jap_candidate_pane

0x2e2d,	// (0x0001f46c) list_highlight_pane_cp30

0x8abb,	// (0x000250fa) list_single_popup_jap_candidate_pane_t1

0x8aca,	// (0x00025109) level_1_signal

0x8adc,	// (0x0002511b) level_2_signal

0x8aef,	// (0x0002512e) level_3_signal

0x8b02,	// (0x00025141) level_4_signal

0x8b15,	// (0x00025154) level_5_signal

0x8b28,	// (0x00025167) level_6_signal

0x8b3b,	// (0x0002517a) level_7_signal

0x8aca,	// (0x00025109) level_1_battery

0x8adc,	// (0x0002511b) level_2_battery

0x8aef,	// (0x0002512e) level_3_battery

0x8b02,	// (0x00025141) level_4_battery

0x8b15,	// (0x00025154) level_5_battery

0x8b28,	// (0x00025167) level_6_battery

0x8b3b,	// (0x0002517a) level_7_battery

0x8b66,	// (0x000251a5) list_menu_pane_ParamLimits

0x8b66,	// (0x000251a5) list_menu_pane

0x8b7c,	// (0x000251bb) scroll_pane_cp25_ParamLimits

0x8b7c,	// (0x000251bb) scroll_pane_cp25

0x8b95,	// (0x000251d4) list_double2_graphic_pane_cp2_ParamLimits

0x8b95,	// (0x000251d4) list_double2_graphic_pane_cp2

0x8b95,	// (0x000251d4) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b95,	// (0x000251d4) list_double2_large_graphic_pane_cp2

0x8b95,	// (0x000251d4) list_double2_pane_cp2_ParamLimits

0x8b95,	// (0x000251d4) list_double2_pane_cp2

0x8b95,	// (0x000251d4) list_double_graphic_pane_cp2_ParamLimits

0x8b95,	// (0x000251d4) list_double_graphic_pane_cp2

0x8b95,	// (0x000251d4) list_double_large_graphic_pane_cp2_ParamLimits

0x8b95,	// (0x000251d4) list_double_large_graphic_pane_cp2

0x8b95,	// (0x000251d4) list_double_number_pane_cp2_ParamLimits

0x8b95,	// (0x000251d4) list_double_number_pane_cp2

0x8b95,	// (0x000251d4) list_double_pane_cp2_ParamLimits

0x8b95,	// (0x000251d4) list_double_pane_cp2

0x8bb9,	// (0x000251f8) list_single_2graphic_pane_cp2_ParamLimits

0x8bb9,	// (0x000251f8) list_single_2graphic_pane_cp2

0x8bb9,	// (0x000251f8) list_single_graphic_heading_pane_cp2_ParamLimits

0x8bb9,	// (0x000251f8) list_single_graphic_heading_pane_cp2

0x8bb9,	// (0x000251f8) list_single_graphic_pane_cp2_ParamLimits

0x8bb9,	// (0x000251f8) list_single_graphic_pane_cp2

0x8bb9,	// (0x000251f8) list_single_heading_pane_cp2_ParamLimits

0x8bb9,	// (0x000251f8) list_single_heading_pane_cp2

0x8bd2,	// (0x00025211) list_single_large_graphic_pane_cp2_ParamLimits

0x8bd2,	// (0x00025211) list_single_large_graphic_pane_cp2

0x8bb9,	// (0x000251f8) list_single_number_heading_pane_cp2_ParamLimits

0x8bb9,	// (0x000251f8) list_single_number_heading_pane_cp2

0x8bb9,	// (0x000251f8) list_single_number_pane_cp2_ParamLimits

0x8bb9,	// (0x000251f8) list_single_number_pane_cp2

0x8be3,	// (0x00025222) list_single_pane_cp2_ParamLimits

0x8be3,	// (0x00025222) list_single_pane_cp2

0x8c67,	// (0x000252a6) bg_popup_sub_pane_cp22

0x5cff,	// (0x0002233e) popup_side_volume_key_window_g1

0x5d29,	// (0x00022368) popup_side_volume_key_window_t1

0x5d45,	// (0x00022384) volume_small_pane_cp1

0x7eb7,	// (0x000244f6) bg_popup_sub_pane_cp24_ParamLimits

0x7eb7,	// (0x000244f6) bg_popup_sub_pane_cp24

0x8c7d,	// (0x000252bc) fep_china_uni_candidate_pane_ParamLimits

0x8c7d,	// (0x000252bc) fep_china_uni_candidate_pane

0x8c91,	// (0x000252d0) fep_china_uni_entry_pane

0x8ca1,	// (0x000252e0) popup_fep_china_uni_window_g1

0x8cbd,	// (0x000252fc) fep_china_uni_entry_pane_g1

0x8cc5,	// (0x00025304) fep_china_uni_entry_pane_g2

0x0001,

0xf6fb,	// (0x0002bd3a) fep_china_uni_entry_pane_g

0x8ccd,	// (0x0002530c) fep_entry_item_pane

0x8cd7,	// (0x00025316) fep_candidate_item_pane

0x8cdf,	// (0x0002531e) fep_china_uni_candidate_pane_g1

0x8ce7,	// (0x00025326) fep_china_uni_candidate_pane_g2

0x8cef,	// (0x0002532e) fep_china_uni_candidate_pane_g3

0x8cf7,	// (0x00025336) fep_china_uni_candidate_pane_g4

0x0003,

0xf700,	// (0x0002bd3f) fep_china_uni_candidate_pane_g

0x2e23,	// (0x0001f462) fep_entry_item_pane_g1

0x8cff,	// (0x0002533e) fep_entry_item_pane_t1_ParamLimits

0x8cff,	// (0x0002533e) fep_entry_item_pane_t1

0x8d15,	// (0x00025354) fep_candidate_item_pane_t1_ParamLimits

0x8d15,	// (0x00025354) fep_candidate_item_pane_t1

0x8d2a,	// (0x00025369) fep_candidate_item_pane_t2_ParamLimits

0x8d2a,	// (0x00025369) fep_candidate_item_pane_t2

0x0001,

0xf709,	// (0x0002bd48) fep_candidate_item_pane_t_ParamLimits

0xf709,	// (0x0002bd48) fep_candidate_item_pane_t

0x7c3c,	// (0x0002427b) list_highlight_pane_cp31_ParamLimits

0x7c3c,	// (0x0002427b) list_highlight_pane_cp31

0x8d3c,	// (0x0002537b) level_1_signal_lsc

0x8d45,	// (0x00025384) level_2_signal_lsc

0x8d4e,	// (0x0002538d) level_3_signal_lsc

0x8d57,	// (0x00025396) level_4_signal_lsc

0x8d60,	// (0x0002539f) level_5_signal_lsc

0x8d69,	// (0x000253a8) level_6_signal_lsc

0x8d72,	// (0x000253b1) level_7_signal_lsc

0x8d72,	// (0x000253b1) level_1_battery_lsc

0x8d7b,	// (0x000253ba) level_2_battery_lsc

0x8d84,	// (0x000253c3) level_3_battery_lsc

0x8d8d,	// (0x000253cc) level_4_battery_lsc

0x8d96,	// (0x000253d5) level_5_battery_lsc

0x8d9f,	// (0x000253de) level_6_battery_lsc

0x8d3c,	// (0x0002537b) level_7_battery_lsc

0x8da8,	// (0x000253e7) scroll_handle_focus_pane_g1

0x8db1,	// (0x000253f0) scroll_handle_focus_pane_g2

0x8dba,	// (0x000253f9) scroll_handle_focus_pane_g3

0x0002,

0xf70e,	// (0x0002bd4d) scroll_handle_focus_pane_g

0x4bc3,	// (0x00021202) list_single_2graphic_pane_g1_ParamLimits

0x4bc3,	// (0x00021202) list_single_2graphic_pane_g1

0x4549,	// (0x00020b88) list_single_2graphic_pane_g2_ParamLimits

0x4549,	// (0x00020b88) list_single_2graphic_pane_g2

0x44cf,	// (0x00020b0e) list_single_2graphic_pane_g3_ParamLimits

0x44cf,	// (0x00020b0e) list_single_2graphic_pane_g3

0x4bcf,	// (0x0002120e) list_single_2graphic_pane_g4_ParamLimits

0x4bcf,	// (0x0002120e) list_single_2graphic_pane_g4

0x0003,

0xf715,	// (0x0002bd54) list_single_2graphic_pane_g_ParamLimits

0xf715,	// (0x0002bd54) list_single_2graphic_pane_g

0x4bdb,	// (0x0002121a) list_single_2graphic_pane_t1_ParamLimits

0x4bdb,	// (0x0002121a) list_single_2graphic_pane_t1

0x4c09,	// (0x00021248) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x4c09,	// (0x00021248) list_double2_graphic_large_graphic_pane_g1

0x45ee,	// (0x00020c2d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x45ee,	// (0x00020c2d) list_double2_graphic_large_graphic_pane_g2

0x45ff,	// (0x00020c3e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x45ff,	// (0x00020c3e) list_double2_graphic_large_graphic_pane_g3

0x4c19,	// (0x00021258) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x4c19,	// (0x00021258) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71e,	// (0x0002bd5d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71e,	// (0x0002bd5d) list_double2_graphic_large_graphic_pane_g

0x4c25,	// (0x00021264) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4c25,	// (0x00021264) list_double2_graphic_large_graphic_pane_t1

0x4c3b,	// (0x0002127a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4c3b,	// (0x0002127a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf727,	// (0x0002bd66) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf727,	// (0x0002bd66) list_double2_graphic_large_graphic_pane_t

0x8f05,	// (0x00025544) popup_fast_swap_window_ParamLimits

0x8f05,	// (0x00025544) popup_fast_swap_window

0x8f21,	// (0x00025560) popup_side_volume_key_window

0x8f3d,	// (0x0002557c) stacon_top_pane

0x8f47,	// (0x00025586) status_pane_ParamLimits

0x8f47,	// (0x00025586) status_pane

0x2e19,	// (0x0001f458) status_small_pane

0x2e2d,	// (0x0001f46c) control_pane

0x2e2d,	// (0x0001f46c) stacon_bottom_pane

0x84ac,	// (0x00024aeb) scroll_pane_cp121

0x84a3,	// (0x00024ae2) set_content_pane

0x8dc3,	// (0x00025402) bg_active_tab_pane_g1_cp1

0x8dcc,	// (0x0002540b) bg_active_tab_pane_g2_cp1

0x8dd5,	// (0x00025414) bg_active_tab_pane_g3_cp1

0x8dc3,	// (0x00025402) bg_passive_tab_pane_g1_cp1

0x8dcc,	// (0x0002540b) bg_passive_tab_pane_g2_cp1

0x8dd5,	// (0x00025414) bg_passive_tab_pane_g3_cp1

0x8dde,	// (0x0002541d) bg_active_tab_pane_g1_cp2

0x8dcc,	// (0x0002540b) bg_active_tab_pane_g2_cp2

0x8de7,	// (0x00025426) bg_active_tab_pane_g3_cp2

0x8dde,	// (0x0002541d) bg_passive_tab_pane_g1_cp2

0x8dcc,	// (0x0002540b) bg_passive_tab_pane_g2_cp2

0x8de7,	// (0x00025426) bg_passive_tab_pane_g3_cp2

0x8df0,	// (0x0002542f) bg_active_tab_pane_g1_cp3

0x8dcc,	// (0x0002540b) bg_active_tab_pane_g2_cp3

0x8df9,	// (0x00025438) bg_active_tab_pane_g3_cp3

0x8df0,	// (0x0002542f) bg_passive_tab_pane_g1_cp3

0x8dcc,	// (0x0002540b) bg_passive_tab_pane_g2_cp3

0x8df9,	// (0x00025438) bg_passive_tab_pane_g3_cp3

0x8e02,	// (0x00025441) bg_active_tab_pane_g1_cp4

0x8dcc,	// (0x0002540b) bg_active_tab_pane_g2_cp4

0x8e0d,	// (0x0002544c) bg_active_tab_pane_g3_cp4

0x8e02,	// (0x00025441) bg_passive_tab_pane_g1_cp4

0x8dcc,	// (0x0002540b) bg_passive_tab_pane_g2_cp4

0x8e0d,	// (0x0002544c) bg_passive_tab_pane_g3_cp4

0x8e56,	// (0x00025495) bg_active_tab_pane_g1_cp5

0x8dcc,	// (0x0002540b) bg_active_tab_pane_g2_cp5

0x8e5f,	// (0x0002549e) bg_active_tab_pane_g3_cp5

0x8e56,	// (0x00025495) bg_passive_tab_pane_g1_cp5

0x8dcc,	// (0x0002540b) bg_passive_tab_pane_g2_cp5

0x8e5f,	// (0x0002549e) bg_passive_tab_pane_g3_cp5

0x8e68,	// (0x000254a7) list_set_graphic_pane_ParamLimits

0x8e68,	// (0x000254a7) list_set_graphic_pane

0x2e2d,	// (0x0001f46c) bg_set_opt_pane_cp4

0x8e88,	// (0x000254c7) list_set_graphic_pane_g1_ParamLimits

0x8e88,	// (0x000254c7) list_set_graphic_pane_g1

0x8e94,	// (0x000254d3) list_set_graphic_pane_g2_ParamLimits

0x8e94,	// (0x000254d3) list_set_graphic_pane_g2

0x0001,

0xf72c,	// (0x0002bd6b) list_set_graphic_pane_g_ParamLimits

0xf72c,	// (0x0002bd6b) list_set_graphic_pane_g

0x0009,

0xfaa8,	// (0x0002c0e7) volume_small_pane_cp_g

0x8eb8,	// (0x000254f7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8eb8,	// (0x000254f7) list_double2_large_graphic_pane_g1_cp2

0x8ec4,	// (0x00025503) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8ec4,	// (0x00025503) list_double2_large_graphic_pane_g2_cp2

0x8ed5,	// (0x00025514) list_double2_large_graphic_pane_g3_cp2

0x8edd,	// (0x0002551c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8edd,	// (0x0002551c) list_double2_large_graphic_pane_t1_cp2

0x8ef3,	// (0x00025532) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8ef3,	// (0x00025532) list_double2_large_graphic_pane_t2_cp2

0xaad5,	// (0x00027114) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaad5,	// (0x00027114) list_double_large_graphic_pane_g1_cp2

0xaae6,	// (0x00027125) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaae6,	// (0x00027125) list_double_large_graphic_pane_g2_cp2

0x9063,	// (0x000256a2) list_double_large_graphic_pane_g3_cp2

0xaaf7,	// (0x00027136) list_double_large_graphic_pane_g4_cp

0xaaff,	// (0x0002713e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaaff,	// (0x0002713e) list_double_large_graphic_pane_t1_cp2

0xab16,	// (0x00027155) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab16,	// (0x00027155) list_double_large_graphic_pane_t2_cp2

0x8f55,	// (0x00025594) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f55,	// (0x00025594) list_double2_graphic_pane_g1_cp2

0x8f63,	// (0x000255a2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f63,	// (0x000255a2) list_double2_graphic_pane_g2_cp2

0x8f74,	// (0x000255b3) list_double2_graphic_pane_g3_cp2

0x8f7e,	// (0x000255bd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f7e,	// (0x000255bd) list_double2_graphic_pane_t1_cp2

0x8f94,	// (0x000255d3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f94,	// (0x000255d3) list_double2_graphic_pane_t2_cp2

0x8fa6,	// (0x000255e5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fa6,	// (0x000255e5) list_single_number_heading_pane_g1_cp2

0x8fb2,	// (0x000255f1) list_single_number_heading_pane_g2_cp2

0x8fba,	// (0x000255f9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fba,	// (0x000255f9) list_single_number_heading_pane_t1_cp2

0x8fd0,	// (0x0002560f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8fd0,	// (0x0002560f) list_single_number_heading_pane_t2_cp2

0x8fe2,	// (0x00025621) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fe2,	// (0x00025621) list_single_number_heading_pane_t3_cp2

0x8fa6,	// (0x000255e5) list_single_heading_pane_g1_cp2_ParamLimits

0x8fa6,	// (0x000255e5) list_single_heading_pane_g1_cp2

0x8fb2,	// (0x000255f1) list_single_heading_pane_g2_cp2

0x8fba,	// (0x000255f9) list_single_heading_pane_t1_cp2_ParamLimits

0x8fba,	// (0x000255f9) list_single_heading_pane_t1_cp2

0xa8dd,	// (0x00026f1c) list_single_heading_pane_t2_cp2_ParamLimits

0xa8dd,	// (0x00026f1c) list_single_heading_pane_t2_cp2

0xa825,	// (0x00026e64) list_double_graphic_pane_g1_cp2_ParamLimits

0xa825,	// (0x00026e64) list_double_graphic_pane_g1_cp2

0xa831,	// (0x00026e70) list_double_graphic_pane_g2_cp2_ParamLimits

0xa831,	// (0x00026e70) list_double_graphic_pane_g2_cp2

0xa840,	// (0x00026e7f) list_double_graphic_pane_g3_cp2

0xa848,	// (0x00026e87) list_double_graphic_pane_t1_cp2_ParamLimits

0xa848,	// (0x00026e87) list_double_graphic_pane_t1_cp2

0xa85e,	// (0x00026e9d) list_double_graphic_pane_t2_cp2_ParamLimits

0xa85e,	// (0x00026e9d) list_double_graphic_pane_t2_cp2

0x9057,	// (0x00025696) list_double_number_pane_g1_cp2_ParamLimits

0x9057,	// (0x00025696) list_double_number_pane_g1_cp2

0x9063,	// (0x000256a2) list_double_number_pane_g2_cp2

0xa7e9,	// (0x00026e28) list_double_number_pane_t1_cp2_ParamLimits

0xa7e9,	// (0x00026e28) list_double_number_pane_t1_cp2

0xa7fd,	// (0x00026e3c) list_double_number_pane_t2_cp2_ParamLimits

0xa7fd,	// (0x00026e3c) list_double_number_pane_t2_cp2

0xa813,	// (0x00026e52) list_double_number_pane_t3_cp2_ParamLimits

0xa813,	// (0x00026e52) list_double_number_pane_t3_cp2

0xa6d2,	// (0x00026d11) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6d2,	// (0x00026d11) list_single_graphic_pane_g1_cp2

0x90c8,	// (0x00025707) list_single_graphic_pane_g2_cp2_ParamLimits

0x90c8,	// (0x00025707) list_single_graphic_pane_g2_cp2

0x90d4,	// (0x00025713) list_single_graphic_pane_g3_cp2

0xa6a8,	// (0x00026ce7) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6a8,	// (0x00026ce7) list_single_graphic_pane_t1_cp2

0x90c8,	// (0x00025707) list_single_number_pane_g1_cp2_ParamLimits

0x90c8,	// (0x00025707) list_single_number_pane_g1_cp2

0x90d4,	// (0x00025713) list_single_number_pane_g2_cp2

0xa6a8,	// (0x00026ce7) list_single_number_pane_t1_cp2_ParamLimits

0xa6a8,	// (0x00026ce7) list_single_number_pane_t1_cp2

0xa6be,	// (0x00026cfd) list_single_number_pane_t2_cp2_ParamLimits

0xa6be,	// (0x00026cfd) list_single_number_pane_t2_cp2

0x8ec4,	// (0x00025503) list_double2_pane_g1_cp2_ParamLimits

0x8ec4,	// (0x00025503) list_double2_pane_g1_cp2

0x8ed5,	// (0x00025514) list_double2_pane_g2_cp2

0x902f,	// (0x0002566e) list_double2_pane_t1_cp2_ParamLimits

0x902f,	// (0x0002566e) list_double2_pane_t1_cp2

0x9045,	// (0x00025684) list_double2_pane_t2_cp2_ParamLimits

0x9045,	// (0x00025684) list_double2_pane_t2_cp2

0x9057,	// (0x00025696) list_double_pane_g1_cp2_ParamLimits

0x9057,	// (0x00025696) list_double_pane_g1_cp2

0x9063,	// (0x000256a2) list_double_pane_g2_cp2

0x906b,	// (0x000256aa) list_double_pane_t1_cp2_ParamLimits

0x906b,	// (0x000256aa) list_double_pane_t1_cp2

0x9081,	// (0x000256c0) list_double_pane_t2_cp2_ParamLimits

0x9081,	// (0x000256c0) list_double_pane_t2_cp2

0x90b8,	// (0x000256f7) list_single_pane_cp2_g3

0x90c8,	// (0x00025707) list_single_pane_g1_cp2_ParamLimits

0x90c8,	// (0x00025707) list_single_pane_g1_cp2

0x90d4,	// (0x00025713) list_single_pane_g2_cp2

0x90dc,	// (0x0002571b) list_single_pane_t1_cp2_ParamLimits

0x90dc,	// (0x0002571b) list_single_pane_t1_cp2

0x90f4,	// (0x00025733) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90f4,	// (0x00025733) list_single_large_graphic_pane_g1_cp2

0x9100,	// (0x0002573f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9100,	// (0x0002573f) list_single_large_graphic_pane_g2_cp2

0x910c,	// (0x0002574b) list_single_large_graphic_pane_g3_cp2

0x9114,	// (0x00025753) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9114,	// (0x00025753) list_single_large_graphic_pane_g4_cp1

0x912e,	// (0x0002576d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x912e,	// (0x0002576d) list_single_large_graphic_pane_t1_cp2

0xa674,	// (0x00026cb3) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa674,	// (0x00026cb3) list_single_graphic_heading_pane_g1_cp2

0xa641,	// (0x00026c80) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa641,	// (0x00026c80) list_single_graphic_heading_pane_g4_cp2

0x90d4,	// (0x00025713) list_single_graphic_heading_pane_g5_cp2

0xa680,	// (0x00026cbf) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa680,	// (0x00026cbf) list_single_graphic_heading_pane_t1_cp2

0xa696,	// (0x00026cd5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa696,	// (0x00026cd5) list_single_graphic_heading_pane_t2_cp2

0xa635,	// (0x00026c74) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa635,	// (0x00026c74) list_single_2graphic_pane_g1_cp2

0xa641,	// (0x00026c80) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa641,	// (0x00026c80) list_single_2graphic_pane_g2_cp2

0x90d4,	// (0x00025713) list_single_2graphic_pane_g3_cp2

0xa652,	// (0x00026c91) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa652,	// (0x00026c91) list_single_2graphic_pane_g4_cp2

0xa65e,	// (0x00026c9d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa65e,	// (0x00026c9d) list_single_2graphic_pane_t1_cp2

0x2e23,	// (0x0001f462) list_highlight_pane_g10_cp1

0xa20d,	// (0x0002684c) list_highlight_pane_g1_cp1

0xa215,	// (0x00026854) list_highlight_pane_g2_cp1

0xa21d,	// (0x0002685c) list_highlight_pane_g3_cp1

0xa225,	// (0x00026864) list_highlight_pane_g4_cp1

0xa22d,	// (0x0002686c) list_highlight_pane_g5_cp1

0xa235,	// (0x00026874) list_highlight_pane_g6_cp1

0xa23d,	// (0x0002687c) list_highlight_pane_g7_cp1

0xa245,	// (0x00026884) list_highlight_pane_g8_cp1

0xa24d,	// (0x0002688c) list_highlight_pane_g9_cp1

0xa12d,	// (0x0002676c) form_field_slider_pane_t3

0xa13b,	// (0x0002677a) form_field_slider_pane_t4

0xa149,	// (0x00026788) slider_form_pane_ParamLimits

0xa149,	// (0x00026788) slider_form_pane

0x2e2d,	// (0x0001f46c) control_abbreviations

0x2e2d,	// (0x0001f46c) control_conventions

0x2e2d,	// (0x0001f46c) control_definitions

0x2e2d,	// (0x0001f46c) format_table_attribute

0xa927,	// (0x00026f66) bg_popup_preview_window_pane_g9

0x2e2d,	// (0x0001f46c) format_table_data2

0x2e2d,	// (0x0001f46c) format_table_data3

0x2e2d,	// (0x0001f46c) format_table_data_example

0x0008,

0x2e2d,	// (0x0001f46c) intro_purpose

0xf8c8,	// (0x0002bf07) bg_popup_preview_window_pane_g

0x2e2d,	// (0x0001f46c) texts_category

0x2e2d,	// (0x0001f46c) texts_graphics

0x9144,	// (0x00025783) text_digital

0x9153,	// (0x00025792) text_primary

0x9162,	// (0x000257a1) text_primary_small

0x9171,	// (0x000257b0) text_secondary

0x9180,	// (0x000257bf) text_title

0xb05a,	// (0x00027699) bg_passive_tab_pane_g1_cp3_srt

0x8dcc,	// (0x0002540b) bg_passive_tab_pane_g2_cp3_srt

0xb063,	// (0x000276a2) bg_passive_tab_pane_g3_cp3_srt

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp3_srt_ParamLimits

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp3_srt

0xb06c,	// (0x000276ab) tabs_4_active_pane_srt_g1

0xb074,	// (0x000276b3) tabs_4_active_pane_srt_t1_ParamLimits

0xb074,	// (0x000276b3) tabs_4_active_pane_srt_t1

0xb05a,	// (0x00027699) bg_active_tab_pane_g1_cp3_copy1

0x8dcc,	// (0x0002540b) bg_active_tab_pane_g2_cp3_copy1

0xb063,	// (0x000276a2) bg_active_tab_pane_g3_cp3_copy1

0x7c3c,	// (0x0002427b) tabs_2_long_active_pane_srt_ParamLimits

0x7c3c,	// (0x0002427b) tabs_2_long_active_pane_srt

0x7c3c,	// (0x0002427b) tabs_2_long_passive_pane_srt_ParamLimits

0x7c3c,	// (0x0002427b) tabs_2_long_passive_pane_srt

0x86bd,	// (0x00024cfc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86bd,	// (0x00024cfc) bg_passive_tab_pane_cp4_srt

0xad45,	// (0x00027384) bg_passive_tab_pane_g1_cp4_srt

0x8dcc,	// (0x0002540b) bg_passive_tab_pane_g2_cp4_srt

0xad4e,	// (0x0002738d) bg_passive_tab_pane_g3_cp4_srt

0x869c,	// (0x00024cdb) bg_active_tab_pane_cp4_srt_ParamLimits

0x869c,	// (0x00024cdb) bg_active_tab_pane_cp4_srt

0xad57,	// (0x00027396) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad57,	// (0x00027396) tabs_2_long_active_pane_srt_t1

0xad45,	// (0x00027384) bg_active_tab_pane_g1_cp4_srt

0x8dcc,	// (0x0002540b) bg_active_tab_pane_g2_cp4_srt

0xad4e,	// (0x0002738d) bg_active_tab_pane_g3_cp4_srt

0x7eb7,	// (0x000244f6) tabs_3_long_active_pane_srt_ParamLimits

0x7eb7,	// (0x000244f6) tabs_3_long_active_pane_srt

0x7eb7,	// (0x000244f6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7eb7,	// (0x000244f6) tabs_3_long_passive_pane_cp_srt

0x7eb7,	// (0x000244f6) tabs_3_long_passive_pane_srt_ParamLimits

0x7eb7,	// (0x000244f6) tabs_3_long_passive_pane_srt

0x86bd,	// (0x00024cfc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86bd,	// (0x00024cfc) bg_passive_tab_pane_cp5_srt

0x8e56,	// (0x00025495) bg_passive_tab_pane_g1_cp5_srt

0x8dcc,	// (0x0002540b) bg_passive_tab_pane_g2_cp5_srt

0x8e5f,	// (0x0002549e) bg_passive_tab_pane_g3_cp5_srt

0x869c,	// (0x00024cdb) bg_active_tab_pane_cp5_srt_ParamLimits

0x869c,	// (0x00024cdb) bg_active_tab_pane_cp5_srt

0xad33,	// (0x00027372) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad33,	// (0x00027372) tabs_3_long_active_pane_srt_t1

0x8e56,	// (0x00025495) bg_active_tab_pane_g1_cp5_srt

0x8dcc,	// (0x0002540b) bg_active_tab_pane_g2_cp5_srt

0x8e5f,	// (0x0002549e) bg_active_tab_pane_g3_cp5_srt

0xad25,	// (0x00027364) navi_text_pane_srt_t1

0xad1d,	// (0x0002735c) navi_icon_pane_srt_g1

0x9355,	// (0x00025994) midp_editing_number_pane_srt

0x918f,	// (0x000257ce) midp_ticker_pane_srt

0x935d,	// (0x0002599c) midp_ticker_pane_srt_g1

0x9365,	// (0x000259a4) midp_ticker_pane_srt_g2

0x0001,

0xf74b,	// (0x0002bd8a) midp_ticker_pane_srt_g

0x936d,	// (0x000259ac) midp_ticker_pane_srt_t1

0xad0e,	// (0x0002734d) midp_editing_number_pane_t1_copy1

0x9197,	// (0x000257d6) listscroll_midp_pane

0x9197,	// (0x000257d6) midp_form_pane

0x9207,	// (0x00025846) midp_info_popup_window_ParamLimits

0x9207,	// (0x00025846) midp_info_popup_window

0x85e8,	// (0x00024c27) bg_popup_sub_pane_cp50_ParamLimits

0x85e8,	// (0x00024c27) bg_popup_sub_pane_cp50

0x9e31,	// (0x00026470) listscroll_midp_info_pane_ParamLimits

0x9e31,	// (0x00026470) listscroll_midp_info_pane

0x9e11,	// (0x00026450) listscroll_form_midp_pane_ParamLimits

0x9e11,	// (0x00026450) listscroll_form_midp_pane

0x9e1d,	// (0x0002645c) scroll_bar_cp050

0x9df1,	// (0x00026430) list_midp_pane

0xbae4,	// (0x00028123) signal_pane_g2_cp

0x9d2b,	// (0x0002636a) listscroll_midp_info_pane_t1_ParamLimits

0x9d2b,	// (0x0002636a) listscroll_midp_info_pane_t1

0x9d43,	// (0x00026382) listscroll_midp_info_pane_t2_ParamLimits

0x9d43,	// (0x00026382) listscroll_midp_info_pane_t2

0x9d81,	// (0x000263c0) listscroll_midp_info_pane_t3_ParamLimits

0x9d81,	// (0x000263c0) listscroll_midp_info_pane_t3

0x9dbb,	// (0x000263fa) listscroll_midp_info_pane_t4_ParamLimits

0x9dbb,	// (0x000263fa) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x0002be42) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x0002be42) listscroll_midp_info_pane_t

0x8649,	// (0x00024c88) scroll_pane_cp21

0x9cc9,	// (0x00026308) form_midp_field_choice_group_pane

0x9cd2,	// (0x00026311) form_midp_field_text_pane

0x9d11,	// (0x00026350) form_midp_field_time_pane

0x9d19,	// (0x00026358) form_midp_gauge_slider_pane

0x9d22,	// (0x00026361) form_midp_gauge_wait_pane

0x2e2d,	// (0x0001f46c) form_midp_image_pane

0x4dc2,	// (0x00021401) list_single_midp_pane_ParamLimits

0x4dc2,	// (0x00021401) list_single_midp_pane

0x9c81,	// (0x000262c0) form_midp_field_text_pane_t1

0x9a51,	// (0x00026090) input_focus_pane_cp050

0x9cb8,	// (0x000262f7) list_midp_form_text_pane

0x9c50,	// (0x0002628f) form_midp_field_choice_group_pane_t1

0x9c5e,	// (0x0002629d) input_focus_pane_cp051

0x9c72,	// (0x000262b1) list_midp_choice_pane

0x2e2d,	// (0x0001f46c) status_idle_pane

0x9c34,	// (0x00026273) form_midp_field_time_pane_t1

0x2e23,	// (0x0001f462) wait_anim_pane_g2_copy1

0x9c42,	// (0x00026281) form_midp_field_time_pane_t2

0x0001,

0x92b5,	// (0x000258f4) aid_navinavi_width_2_pane

0xf7fe,	// (0x0002be3d) form_midp_field_time_pane_t

0x2e2d,	// (0x0001f46c) input_focus_pane_cp052

0x2e2d,	// (0x0001f46c) bg_input_focus_pane_cp040

0x9bf4,	// (0x00026233) form_midp_gauge_slider_pane_t1

0x9c02,	// (0x00026241) form_midp_gauge_slider_pane_t2

0x9c10,	// (0x0002624f) form_midp_gauge_slider_pane_t3

0x9c1e,	// (0x0002625d) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x0002be34) form_midp_gauge_slider_pane_t

0x9c2c,	// (0x0002626b) form_midp_slider_pane

0x7c3c,	// (0x0002427b) bg_input_focus_pane_cp041_ParamLimits

0x7c3c,	// (0x0002427b) bg_input_focus_pane_cp041

0x9bc1,	// (0x00026200) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bc1,	// (0x00026200) form_midp_gauge_wait_pane_t1

0x9bd3,	// (0x00026212) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bd3,	// (0x00026212) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x0002be2f) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x0002be2f) form_midp_gauge_wait_pane_t

0x9be5,	// (0x00026224) form_midp_wait_pane_ParamLimits

0x9be5,	// (0x00026224) form_midp_wait_pane

0x9b8b,	// (0x000261ca) form_midp_image_pane_g1

0x9b94,	// (0x000261d3) form_midp_image_pane_t1

0x9ba3,	// (0x000261e2) form_midp_image_pane_t2

0x9bb2,	// (0x000261f1) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x0002be28) form_midp_image_pane_t

0x9b82,	// (0x000261c1) list_single_midp_pane_g1

0x4db3,	// (0x000213f2) list_single_midp_pane_t1

0x9b5a,	// (0x00026199) list_midp_form_item_pane_ParamLimits

0x9b5a,	// (0x00026199) list_midp_form_item_pane

0x925d,	// (0x0002589c) list_midp_form_item_pane_t1

0x926c,	// (0x000258ab) midp_ticker_pane_g1

0x9278,	// (0x000258b7) midp_ticker_pane_g2

0x0001,

0xf731,	// (0x0002bd70) midp_ticker_pane_g

0x9284,	// (0x000258c3) midp_ticker_pane_t1

0xaf5f,	// (0x0002759e) midp_editing_number_pane_t1

0xaf3d,	// (0x0002757c) midp_editing_number_pane

0xaf4c,	// (0x0002758b) midp_ticker_pane

0x9e3d,	// (0x0002647c) ai_message_heading_pane

0x2e2d,	// (0x0001f46c) bg_popup_window_pane_cp14

0x9e45,	// (0x00026484) listscroll_ai_message_pane

0xac98,	// (0x000272d7) ai_message_heading_pane_g1_ParamLimits

0xac98,	// (0x000272d7) ai_message_heading_pane_g1

0xaca4,	// (0x000272e3) ai_message_heading_pane_g2_ParamLimits

0xaca4,	// (0x000272e3) ai_message_heading_pane_g2

0xacb0,	// (0x000272ef) ai_message_heading_pane_g3_ParamLimits

0xacb0,	// (0x000272ef) ai_message_heading_pane_g3

0xacbc,	// (0x000272fb) ai_message_heading_pane_g4_ParamLimits

0xacbc,	// (0x000272fb) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x0002bf69) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x0002bf69) ai_message_heading_pane_g

0xacc8,	// (0x00027307) ai_message_heading_pane_t1_ParamLimits

0xacc8,	// (0x00027307) ai_message_heading_pane_t1

0xace2,	// (0x00027321) ai_message_heading_pane_t2_ParamLimits

0xace2,	// (0x00027321) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x0002bf72) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x0002bf72) ai_message_heading_pane_t

0xacf4,	// (0x00027333) bg_popup_heading_pane_cp1_ParamLimits

0xacf4,	// (0x00027333) bg_popup_heading_pane_cp1

0xac86,	// (0x000272c5) list_ai_message_pane_ParamLimits

0xac86,	// (0x000272c5) list_ai_message_pane

0x8649,	// (0x00024c88) scroll_pane_cp10

0xac22,	// (0x00027261) list_ai_message_pane_g1

0xac2a,	// (0x00027269) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x0002bf46) list_ai_message_pane_g

0xac32,	// (0x00027271) list_ai_message_pane_t1_ParamLimits

0xac32,	// (0x00027271) list_ai_message_pane_t1

0xac47,	// (0x00027286) list_ai_message_pane_t2_ParamLimits

0xac47,	// (0x00027286) list_ai_message_pane_t2

0xac5c,	// (0x0002729b) list_ai_message_pane_t3_ParamLimits

0xac5c,	// (0x0002729b) list_ai_message_pane_t3

0xac71,	// (0x000272b0) list_ai_message_pane_t4_ParamLimits

0xac71,	// (0x000272b0) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x0002bf4b) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x0002bf4b) list_ai_message_pane_t

0xac0d,	// (0x0002724c) cell_ai_soft_ind_pane_ParamLimits

0xac0d,	// (0x0002724c) cell_ai_soft_ind_pane

0x9296,	// (0x000258d5) cell_ai_soft_ind_pane_g1_ParamLimits

0x9296,	// (0x000258d5) cell_ai_soft_ind_pane_g1

0x2e2d,	// (0x0001f46c) grid_highlight_cp1

0x92a3,	// (0x000258e2) text_secondary_cp56_ParamLimits

0x92a3,	// (0x000258e2) text_secondary_cp56

0xabe2,	// (0x00027221) example_general_pane_ParamLimits

0xabe2,	// (0x00027221) example_general_pane

0xabee,	// (0x0002722d) example_parent_pane_g1_ParamLimits

0xabee,	// (0x0002722d) example_parent_pane_g1

0xabfa,	// (0x00027239) example_parent_pane_t1_ParamLimits

0xabfa,	// (0x00027239) example_parent_pane_t1

0x6428,	// (0x00022a67) popup_preview_text_window_ParamLimits

0x6428,	// (0x00022a67) popup_preview_text_window

0x90c0,	// (0x000256ff) list_single_pane_cp2_g4

0x7f93,	// (0x000245d2) bg_popup_preview_window_pane_ParamLimits

0x7f93,	// (0x000245d2) bg_popup_preview_window_pane

0xa92f,	// (0x00026f6e) popup_preview_text_window_t1_ParamLimits

0xa92f,	// (0x00026f6e) popup_preview_text_window_t1

0xa94d,	// (0x00026f8c) popup_preview_text_window_t2_ParamLimits

0xa94d,	// (0x00026f8c) popup_preview_text_window_t2

0xa996,	// (0x00026fd5) popup_preview_text_window_t3_ParamLimits

0xa996,	// (0x00026fd5) popup_preview_text_window_t3

0xa9db,	// (0x0002701a) popup_preview_text_window_t4_ParamLimits

0xa9db,	// (0x0002701a) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x0002bf1a) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x0002bf1a) popup_preview_text_window_t

0xaa59,	// (0x00027098) scroll_pane_cp11

0x99dd,	// (0x0002601c) bg_popup_preview_window_pane_g1

0xa8ef,	// (0x00026f2e) bg_popup_preview_window_pane_g2

0xa8f7,	// (0x00026f36) bg_popup_preview_window_pane_g3

0xa8ff,	// (0x00026f3e) bg_popup_preview_window_pane_g4

0xa907,	// (0x00026f46) bg_popup_preview_window_pane_g5

0xa90f,	// (0x00026f4e) bg_popup_preview_window_pane_g6

0xa917,	// (0x00026f56) bg_popup_preview_window_pane_g7

0xa91f,	// (0x00026f5e) bg_popup_preview_window_pane_g8

0x5636,	// (0x00021c75) aid_popup_width_pane

0x6406,	// (0x00022a45) popup_midp_note_alarm_window_ParamLimits

0x6406,	// (0x00022a45) popup_midp_note_alarm_window

0x84bd,	// (0x00024afc) data_form_pane_ParamLimits

0x4a0c,	// (0x0002104b) form_field_data_pane_g1

0x4a16,	// (0x00021055) form_field_data_pane_t1_ParamLimits

0x84c9,	// (0x00024b08) input_focus_pane_ParamLimits

0x4a2e,	// (0x0002106d) data_form_wide_pane_ParamLimits

0x4a3f,	// (0x0002107e) form_field_data_wide_pane_g1

0x4a4b,	// (0x0002108a) form_field_data_wide_pane_t1_ParamLimits

0x823a,	// (0x00024879) input_focus_pane_cp6_ParamLimits

0x85f6,	// (0x00024c35) input_popup_find_pane_g1_ParamLimits

0x85f6,	// (0x00024c35) input_popup_find_pane_g1

0x5bae,	// (0x000221ed) aid_navi_side_left_pane

0x5bc3,	// (0x00022202) aid_navi_side_right_pane

0xa308,	// (0x00026947) bg_popup_window_pane_cp30_ParamLimits

0xa308,	// (0x00026947) bg_popup_window_pane_cp30

0xa382,	// (0x000269c1) popup_midp_note_alarm_window_g1_ParamLimits

0xa382,	// (0x000269c1) popup_midp_note_alarm_window_g1

0xa3b2,	// (0x000269f1) popup_midp_note_alarm_window_t1_ParamLimits

0xa3b2,	// (0x000269f1) popup_midp_note_alarm_window_t1

0xa453,	// (0x00026a92) popup_midp_note_alarm_window_t2_ParamLimits

0xa453,	// (0x00026a92) popup_midp_note_alarm_window_t2

0xa501,	// (0x00026b40) popup_midp_note_alarm_window_t3_ParamLimits

0xa501,	// (0x00026b40) popup_midp_note_alarm_window_t3

0xa533,	// (0x00026b72) popup_midp_note_alarm_window_t4_ParamLimits

0xa533,	// (0x00026b72) popup_midp_note_alarm_window_t4

0xa559,	// (0x00026b98) popup_midp_note_alarm_window_t5_ParamLimits

0xa559,	// (0x00026b98) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x0002beb7) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x0002beb7) popup_midp_note_alarm_window_t

0xa605,	// (0x00026c44) wait_bar_pane_cp1_ParamLimits

0xa605,	// (0x00026c44) wait_bar_pane_cp1

0x2e2d,	// (0x0001f46c) wait_anim_pane_copy1

0x2e2d,	// (0x0001f46c) wait_border_pane_copy1

0x9fee,	// (0x0002662d) wait_border_pane_g1_copy1

0x4a65,	// (0x000210a4) form_field_popup_pane_g1

0x4a6d,	// (0x000210ac) form_field_popup_pane_t1_ParamLimits

0x84c9,	// (0x00024b08) input_focus_pane_cp7_ParamLimits

0x84f7,	// (0x00024b36) list_form_pane_ParamLimits

0x4a85,	// (0x000210c4) form_field_popup_wide_pane_g1

0x4a8d,	// (0x000210cc) form_field_popup_wide_pane_t1_ParamLimits

0x84c9,	// (0x00024b08) input_focus_pane_cp8_ParamLimits

0x8503,	// (0x00024b42) list_form_wide_pane_ParamLimits

0xb0ff,	// (0x0002773e) aid_size_cell_graphic_pane

0x4b17,	// (0x00021156) data_form_pane_t1_ParamLimits

0x4e1c,	// (0x0002145b) data_form_wide_pane_t1_ParamLimits

0x95a4,	// (0x00025be3) bg_status_flat_pane

0x7b9c,	// (0x000241db) title_pane_t1_ParamLimits

0x7c04,	// (0x00024243) title_pane_t2_ParamLimits

0x7c2a,	// (0x00024269) title_pane_t3_ParamLimits

0xf530,	// (0x0002bb6f) title_pane_t_ParamLimits

0x8aca,	// (0x00025109) level_1_signal_ParamLimits

0x8adc,	// (0x0002511b) level_2_signal_ParamLimits

0x8aef,	// (0x0002512e) level_3_signal_ParamLimits

0x8b02,	// (0x00025141) level_4_signal_ParamLimits

0x8b15,	// (0x00025154) level_5_signal_ParamLimits

0x8b28,	// (0x00025167) level_6_signal_ParamLimits

0x8b3b,	// (0x0002517a) level_7_signal_ParamLimits

0x8aca,	// (0x00025109) level_1_battery_ParamLimits

0x8adc,	// (0x0002511b) level_2_battery_ParamLimits

0x8aef,	// (0x0002512e) level_3_battery_ParamLimits

0x8b02,	// (0x00025141) level_4_battery_ParamLimits

0x8b15,	// (0x00025154) level_5_battery_ParamLimits

0x8b28,	// (0x00025167) level_6_battery_ParamLimits

0x8b3b,	// (0x0002517a) level_7_battery_ParamLimits

0xa20d,	// (0x0002684c) bg_status_flat_pane_g1

0xa215,	// (0x00026854) bg_status_flat_pane_g2

0xa21d,	// (0x0002685c) bg_status_flat_pane_g3

0xa225,	// (0x00026864) bg_status_flat_pane_g4

0xa22d,	// (0x0002686c) bg_status_flat_pane_g5

0xa235,	// (0x00026874) bg_status_flat_pane_g6

0xa23d,	// (0x0002687c) bg_status_flat_pane_g7

0x7c52,	// (0x00024291) tabs_3_active_pane_t1_ParamLimits

0x7c52,	// (0x00024291) tabs_3_passive_pane_t1_ParamLimits

0x7c6c,	// (0x000242ab) tabs_4_active_pane_t1_ParamLimits

0x7c6c,	// (0x000242ab) tabs_4_1_passive_pane_t1_ParamLimits

0x868a,	// (0x00024cc9) tabs_2_active_pane_t1_ParamLimits

0x868a,	// (0x00024cc9) tabs_2_passive_pane_t1_ParamLimits

0x869c,	// (0x00024cdb) bg_active_tab_pane_cp4_ParamLimits

0x86aa,	// (0x00024ce9) tabs_2_long_active_pane_t1_ParamLimits

0x86bd,	// (0x00024cfc) bg_passive_tab_pane_cp4_ParamLimits

0x66d5,	// (0x00022d14) list_single_midp_graphic_pane_t1_ParamLimits

0x869c,	// (0x00024cdb) bg_active_tab_pane_cp5_ParamLimits

0x86c9,	// (0x00024d08) tabs_3_long_active_pane_t1_ParamLimits

0x86bd,	// (0x00024cfc) bg_passive_tab_pane_cp5_ParamLimits

0x66d5,	// (0x00022d14) list_single_midp_graphic_pane_t1

0x95a4,	// (0x00025be3) bg_status_flat_pane_ParamLimits

0x966d,	// (0x00025cac) indicator_pane_cp2_ParamLimits

0x966d,	// (0x00025cac) indicator_pane_cp2

0x9798,	// (0x00025dd7) navi_pane_srt_ParamLimits

0x9798,	// (0x00025dd7) navi_pane_srt

0x97bc,	// (0x00025dfb) popup_clock_digital_analogue_window_cp1

0x7d19,	// (0x00024358) indicator_pane_t1

0x918f,	// (0x000257ce) copy_highlight_pane

0x918f,	// (0x000257ce) cursor_graphics_pane

0x918f,	// (0x000257ce) graphic_within_text_pane

0x918f,	// (0x000257ce) link_highlight_pane

0xaa1c,	// (0x0002705b) popup_preview_text_window_t5_ParamLimits

0xaa1c,	// (0x0002705b) popup_preview_text_window_t5

0x92bd,	// (0x000258fc) cursor_digital_pane

0x92bd,	// (0x000258fc) cursor_primary_pane

0x92ce,	// (0x0002590d) cursor_primary_small_pane

0x92d6,	// (0x00025915) cursor_secondary_pane

0x92de,	// (0x0002591d) cursor_title_pane

0x92bd,	// (0x000258fc) link_highlight_digital_pane

0x92c5,	// (0x00025904) link_highlight_primary_pane

0x92ce,	// (0x0002590d) link_highlight_primary_small_pane

0x92d6,	// (0x00025915) link_highlight_secondary_pane

0x92de,	// (0x0002591d) link_highlight_title_pane

0x92bd,	// (0x000258fc) copy_highlight_digital_pane

0x92bd,	// (0x000258fc) copy_highlight_primary_pane

0x92ce,	// (0x0002590d) copy_highlight_primary_small_pane

0x92d6,	// (0x00025915) copy_highlight_secondary_pane

0x92de,	// (0x0002591d) copy_highlight_title_pane

0x92d6,	// (0x00025915) graphic_text_digital_pane

0xa2ab,	// (0x000268ea) graphic_text_primary_pane

0xa2b4,	// (0x000268f3) graphic_text_primary_small_pane

0x92ce,	// (0x0002590d) graphic_text_secondary_pane

0x92bd,	// (0x000258fc) graphic_text_title_pane

0x92e6,	// (0x00025925) cursor_primary_pane_g1

0xa29d,	// (0x000268dc) cursor_text_primary_t1

0xa285,	// (0x000268c4) cursor_primary_small_pane_g1

0xa28f,	// (0x000268ce) cursor_text_primary_small_t1

0xa26d,	// (0x000268ac) cursor_primary_small_pane_g1_copy1

0xa277,	// (0x000268b6) cursor_text_primary_small_t1_copy1

0xa255,	// (0x00026894) cursor_text_title_t1

0xa263,	// (0x000268a2) cursor_title_pane_g1

0x92e6,	// (0x00025925) cursor_digital_pane_g1

0x92f0,	// (0x0002592f) cursor_text_digital_t1

0x9315,	// (0x00025954) link_highlight_primary_pane_g1

0xa1fe,	// (0x0002683d) link_highlight_primary_pane_t1

0x92fe,	// (0x0002593d) link_highlight_primary_small_pane_g1

0x9306,	// (0x00025945) link_highlight_primary_small_pane_t1

0x9315,	// (0x00025954) link_highlight_secondary_pane_g1

0x931d,	// (0x0002595c) link_highlight_secondary_pane_t1

0xa172,	// (0x000267b1) link_highlight_title_pane_g1

0xa17a,	// (0x000267b9) link_highlight_title_pane_t1

0xa15b,	// (0x0002679a) link_highlight_digital_pane_g1

0xa163,	// (0x000267a2) link_highlight_digital_pane_t1

0xa033,	// (0x00026672) copy_highlight_primary_pane_g1

0xa03b,	// (0x0002667a) copy_highlight_primary_pane_t1

0xa00d,	// (0x0002664c) copy_highlight_primary_small_pane_g1

0xa024,	// (0x00026663) copy_highlight_primary_small_pane_t1

0x932c,	// (0x0002596b) copy_highlight_secondary_pane_g1

0x9334,	// (0x00025973) copy_highlight_secondary_pane_t1

0xa00d,	// (0x0002664c) copy_highlight_title_pane_g1

0xa015,	// (0x00026654) copy_highlight_title_pane_t1

0xa033,	// (0x00026672) copy_highlight_digital_pane_g1

0xb2d9,	// (0x00027918) copy_highlight_digital_pane_t1

0xb22d,	// (0x0002786c) graphic_text_primary_pane_g1

0xb2bd,	// (0x000278fc) graphic_text_primary_pane_t1

0xb2cb,	// (0x0002790a) graphic_text_primary_pane_t2

0x0001,

0xf9a7,	// (0x0002bfe6) graphic_text_primary_pane_t

0xb299,	// (0x000278d8) graphic_text_primary_small_pane_g1

0xb2a1,	// (0x000278e0) graphic_text_primary_small_pane_t1

0xb2af,	// (0x000278ee) graphic_text_primary_small_pane_t2

0x0001,

0xf9a2,	// (0x0002bfe1) graphic_text_primary_small_pane_t

0xb275,	// (0x000278b4) graphic_text_secondary_pane_g1

0xb27d,	// (0x000278bc) graphic_text_secondary_pane_t1

0xb28b,	// (0x000278ca) graphic_text_secondary_pane_t2

0x0001,

0xf99d,	// (0x0002bfdc) graphic_text_secondary_pane_t

0xb251,	// (0x00027890) graphic_text_title_pane_g1

0xb259,	// (0x00027898) graphic_text_title_pane_t1

0xb267,	// (0x000278a6) graphic_text_title_pane_t2

0x0001,

0xf998,	// (0x0002bfd7) graphic_text_title_pane_t

0xb22d,	// (0x0002786c) graphic_text_digital_pane_g1

0xb235,	// (0x00027874) graphic_text_digital_pane_t1

0xb243,	// (0x00027882) graphic_text_digital_pane_t2

0x0001,

0xf993,	// (0x0002bfd2) graphic_text_digital_pane_t

0x7c3c,	// (0x0002427b) navi_icon_pane_srt_ParamLimits

0x7c3c,	// (0x0002427b) navi_icon_pane_srt

0x2e2d,	// (0x0001f46c) navi_midp_pane_srt

0x2e2d,	// (0x0001f46c) navi_navi_pane_srt

0x7c3c,	// (0x0002427b) navi_text_pane_srt_ParamLimits

0x7c3c,	// (0x0002427b) navi_text_pane_srt

0xb1f8,	// (0x00027837) navi_navi_icon_text_pane_srt

0xb200,	// (0x0002783f) navi_navi_pane_srt_g1_ParamLimits

0xb200,	// (0x0002783f) navi_navi_pane_srt_g1

0xb212,	// (0x00027851) navi_navi_pane_srt_g2_ParamLimits

0xb212,	// (0x00027851) navi_navi_pane_srt_g2

0x0001,

0xf98e,	// (0x0002bfcd) navi_navi_pane_srt_g_ParamLimits

0xf98e,	// (0x0002bfcd) navi_navi_pane_srt_g

0xb224,	// (0x00027863) navi_navi_tabs_pane_srt

0xb1f8,	// (0x00027837) navi_navi_text_pane_srt

0xb1f8,	// (0x00027837) navi_navi_volume_pane_srt

0xb1e9,	// (0x00027828) navi_navi_text_pane_srt_t1

0x6a4f,	// (0x0002308e) navi_navi_volume_pane_srt_g1

0x6a57,	// (0x00023096) volume_small_pane_srt_ParamLimits

0x6a57,	// (0x00023096) volume_small_pane_srt

0x5e8e,	// (0x000224cd) volume_small_pane_srt_g1_ParamLimits

0x5e8e,	// (0x000224cd) volume_small_pane_srt_g1

0x5e9e,	// (0x000224dd) volume_small_pane_srt_g2_ParamLimits

0x5e9e,	// (0x000224dd) volume_small_pane_srt_g2

0x5eaf,	// (0x000224ee) volume_small_pane_srt_g3_ParamLimits

0x5eaf,	// (0x000224ee) volume_small_pane_srt_g3

0x5ec0,	// (0x000224ff) volume_small_pane_srt_g4_ParamLimits

0x5ec0,	// (0x000224ff) volume_small_pane_srt_g4

0x5ed1,	// (0x00022510) volume_small_pane_srt_g5_ParamLimits

0x5ed1,	// (0x00022510) volume_small_pane_srt_g5

0x5ee2,	// (0x00022521) volume_small_pane_srt_g6_ParamLimits

0x5ee2,	// (0x00022521) volume_small_pane_srt_g6

0x5ef3,	// (0x00022532) volume_small_pane_srt_g7_ParamLimits

0x5ef3,	// (0x00022532) volume_small_pane_srt_g7

0x5f04,	// (0x00022543) volume_small_pane_srt_g8_ParamLimits

0x5f04,	// (0x00022543) volume_small_pane_srt_g8

0x5f15,	// (0x00022554) volume_small_pane_srt_g9_ParamLimits

0x5f15,	// (0x00022554) volume_small_pane_srt_g9

0x5f26,	// (0x00022565) volume_small_pane_srt_g10_ParamLimits

0x5f26,	// (0x00022565) volume_small_pane_srt_g10

0x0009,

0xf736,	// (0x0002bd75) volume_small_pane_srt_g_ParamLimits

0xf736,	// (0x0002bd75) volume_small_pane_srt_g

0x803c,	// (0x0002467b) query_popup_data_pane_cp2

0xb1cf,	// (0x0002780e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1cf,	// (0x0002780e) navi_navi_icon_text_pane_srt_t1

0xa2ab,	// (0x000268ea) navi_tabs_2_long_pane_srt

0xa2ab,	// (0x000268ea) navi_tabs_2_pane_srt

0xa2ab,	// (0x000268ea) navi_tabs_3_long_pane_srt

0xa2ab,	// (0x000268ea) navi_tabs_3_pane_srt

0xa2ab,	// (0x000268ea) navi_tabs_4_pane_srt

0x6a2f,	// (0x0002306e) tabs_2_active_pane_srt_ParamLimits

0x6a2f,	// (0x0002306e) tabs_2_active_pane_srt

0x6a3f,	// (0x0002307e) tabs_2_passive_pane_srt_ParamLimits

0x6a3f,	// (0x0002307e) tabs_2_passive_pane_srt

0x94b3,	// (0x00025af2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94b3,	// (0x00025af2) bg_passive_tab_pane_cp1_srt

0xb19b,	// (0x000277da) bg_passive_tab_pane_g1_cp1_srt

0x8dcc,	// (0x0002540b) bg_passive_tab_pane_g2_cp1_srt

0xb1a4,	// (0x000277e3) bg_passive_tab_pane_g3_cp1_srt

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp1_srt_ParamLimits

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp1_srt

0xb1ad,	// (0x000277ec) tabs_2_active_pane_srt_g1

0xb1b5,	// (0x000277f4) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b5,	// (0x000277f4) tabs_2_active_pane_srt_t1

0xb19b,	// (0x000277da) bg_active_tab_pane_g1_cp1_srt

0x8dcc,	// (0x0002540b) bg_active_tab_pane_g2_cp1_srt

0xb1a4,	// (0x000277e3) bg_active_tab_pane_g3_cp1_srt

0x69fc,	// (0x0002303b) tabs_3_active_pane_srt_ParamLimits

0x69fc,	// (0x0002303b) tabs_3_active_pane_srt

0x6a0d,	// (0x0002304c) tabs_3_passive_pane_cp_srt_ParamLimits

0x6a0d,	// (0x0002304c) tabs_3_passive_pane_cp_srt

0x6a1e,	// (0x0002305d) tabs_3_passive_pane_srt_ParamLimits

0x6a1e,	// (0x0002305d) tabs_3_passive_pane_srt

0x94b3,	// (0x00025af2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94b3,	// (0x00025af2) bg_passive_tab_pane_cp2_srt

0x9343,	// (0x00025982) bg_passive_tab_pane_g1_cp2_srt

0x8dcc,	// (0x0002540b) bg_passive_tab_pane_g2_cp2_srt

0x934c,	// (0x0002598b) bg_passive_tab_pane_g3_cp2_srt

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp2_srt_ParamLimits

0x7c3c,	// (0x0002427b) bg_active_tab_pane_cp2_srt

0xb181,	// (0x000277c0) tabs_3_active_pane_srt_g1

0xb189,	// (0x000277c8) tabs_3_active_pane_srt_t1_ParamLimits

0xb189,	// (0x000277c8) tabs_3_active_pane_srt_t1

0x9343,	// (0x00025982) bg_active_tab_pane_g1_cp2_srt

0x8dcc,	// (0x0002540b) bg_active_tab_pane_g2_cp2_srt

0x934c,	// (0x0002598b) bg_active_tab_pane_g3_cp2_srt

0x69b4,	// (0x00022ff3) tabs_4_active_pane_srt_ParamLimits

0x69b4,	// (0x00022ff3) tabs_4_active_pane_srt

0x69c6,	// (0x00023005) tabs_4_passive_pane_cp2_srt_ParamLimits

0x69c6,	// (0x00023005) tabs_4_passive_pane_cp2_srt

0x6099,	// (0x000226d8) aid_size_cell_toolbar

0x86bd,	// (0x00024cfc) main_idle_act_pane_ParamLimits

0x623c,	// (0x0002287b) popup_large_graphic_colour_window_ParamLimits

0x65a3,	// (0x00022be2) popup_toolbar_window_ParamLimits

0x65a3,	// (0x00022be2) popup_toolbar_window

0x4e7c,	// (0x000214bb) list_single_graphic_2heading_pane_ParamLimits

0x4e7c,	// (0x000214bb) list_single_graphic_2heading_pane

0x8879,	// (0x00024eb8) aid_size_cell_apps_grid_lsc_pane

0x888b,	// (0x00024eca) aid_size_cell_apps_grid_prt_pane

0x94b3,	// (0x00025af2) bg_wml_button_pane_cp1_ParamLimits

0x94b3,	// (0x00025af2) bg_wml_button_pane_cp1

0x9c81,	// (0x000262c0) form_midp_field_text_pane_t1_ParamLimits

0x9a51,	// (0x00026090) input_focus_pane_cp050_ParamLimits

0x9cb8,	// (0x000262f7) list_midp_form_text_pane_ParamLimits

0x9c5e,	// (0x0002629d) input_focus_pane_cp051_ParamLimits

0x9c72,	// (0x000262b1) list_midp_choice_pane_ParamLimits

0x9b0a,	// (0x00026149) list_single_2graphic_pane_cp3_ParamLimits

0x9b0a,	// (0x00026149) list_single_2graphic_pane_cp3

0x9b2b,	// (0x0002616a) list_single_midp_graphic_pane_ParamLimits

0x9b2b,	// (0x0002616a) list_single_midp_graphic_pane

0x4c79,	// (0x000212b8) list_single_graphic_2heading_pane_g1_ParamLimits

0x4c79,	// (0x000212b8) list_single_graphic_2heading_pane_g1

0x4c85,	// (0x000212c4) list_single_graphic_2heading_pane_g4_ParamLimits

0x4c85,	// (0x000212c4) list_single_graphic_2heading_pane_g4

0x4c91,	// (0x000212d0) list_single_graphic_2heading_pane_g5_ParamLimits

0x4c91,	// (0x000212d0) list_single_graphic_2heading_pane_g5

0x0002,

0xf789,	// (0x0002bdc8) list_single_graphic_2heading_pane_g_ParamLimits

0xf789,	// (0x0002bdc8) list_single_graphic_2heading_pane_g

0x4c9d,	// (0x000212dc) list_single_graphic_2heading_pane_t1_ParamLimits

0x4c9d,	// (0x000212dc) list_single_graphic_2heading_pane_t1

0x4cb1,	// (0x000212f0) list_single_graphic_2heading_pane_t2_ParamLimits

0x4cb1,	// (0x000212f0) list_single_graphic_2heading_pane_t2

0x4ccb,	// (0x0002130a) list_single_graphic_2heading_pane_t3_ParamLimits

0x4ccb,	// (0x0002130a) list_single_graphic_2heading_pane_t3

0x0002,

0xf790,	// (0x0002bdcf) list_single_graphic_2heading_pane_t_ParamLimits

0xf790,	// (0x0002bdcf) list_single_graphic_2heading_pane_t

0x991b,	// (0x00025f5a) bg_popup_sub_pane_cp2

0x9945,	// (0x00025f84) grid_toobar_pane

0x6650,	// (0x00022c8f) cell_toolbar_pane_ParamLimits

0x6650,	// (0x00022c8f) cell_toolbar_pane

0x9981,	// (0x00025fc0) cell_toolbar_pane_g1_ParamLimits

0x9981,	// (0x00025fc0) cell_toolbar_pane_g1

0x9995,	// (0x00025fd4) cell_toolbar_pane_g2_ParamLimits

0x9995,	// (0x00025fd4) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x0002bddd) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x0002bddd) cell_toolbar_pane_g

0x99b7,	// (0x00025ff6) grid_highlight_pane_cp2_ParamLimits

0x99b7,	// (0x00025ff6) grid_highlight_pane_cp2

0x99d1,	// (0x00026010) toolbar_button_pane

0x99dd,	// (0x0002601c) toolbar_button_pane_g1

0x99e5,	// (0x00026024) toolbar_button_pane_g2

0x99ed,	// (0x0002602c) toolbar_button_pane_g3

0x99f5,	// (0x00026034) toolbar_button_pane_g4

0x99fd,	// (0x0002603c) toolbar_button_pane_g5

0x9a05,	// (0x00026044) toolbar_button_pane_g6

0x9a0d,	// (0x0002604c) toolbar_button_pane_g7

0x9a15,	// (0x00026054) toolbar_button_pane_g8

0x9a1d,	// (0x0002605c) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x0002bde2) toolbar_button_pane_g

0x6688,	// (0x00022cc7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6688,	// (0x00022cc7) list_single_2graphic_pane_g1_cp3

0x6694,	// (0x00022cd3) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6694,	// (0x00022cd3) list_single_2graphic_pane_g2_cp3

0x66a5,	// (0x00022ce4) list_single_2graphic_pane_g3_cp3

0x66ad,	// (0x00022cec) list_single_2graphic_pane_g4_cp3_ParamLimits

0x66ad,	// (0x00022cec) list_single_2graphic_pane_g4_cp3

0x66b9,	// (0x00022cf8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x66b9,	// (0x00022cf8) list_single_2graphic_pane_t1_cp3

0xb155,	// (0x00027794) list_single_midp_graphic_pane_g2_ParamLimits

0xb155,	// (0x00027794) list_single_midp_graphic_pane_g2

0x60a1,	// (0x000226e0) aid_zoom_text_primary

0x4c4d,	// (0x0002128c) aid_zoom_text_secondary

0x93fd,	// (0x00025a3c) status_small_pane_g7_ParamLimits

0x93fd,	// (0x00025a3c) status_small_pane_g7

0x9420,	// (0x00025a5f) status_small_pane_t1_ParamLimits

0x7b73,	// (0x000241b2) title_pane_g2

0x0003,

0xf527,	// (0x0002bb66) title_pane_g

0x80e4,	// (0x00024723) aid_size_cell_colour_1_pane_ParamLimits

0x80e4,	// (0x00024723) aid_size_cell_colour_1_pane

0x80f8,	// (0x00024737) aid_size_cell_colour_2_pane_ParamLimits

0x80f8,	// (0x00024737) aid_size_cell_colour_2_pane

0x810c,	// (0x0002474b) aid_size_cell_colour_3_pane_ParamLimits

0x810c,	// (0x0002474b) aid_size_cell_colour_3_pane

0x8120,	// (0x0002475f) aid_size_cell_colour_4_pane_ParamLimits

0x8120,	// (0x0002475f) aid_size_cell_colour_4_pane

0x5aeb,	// (0x0002212a) title_pane_stacon_g1_ParamLimits

0x5aeb,	// (0x0002212a) title_pane_stacon_g1

0xa092,	// (0x000266d1) popup_note_wait_window_g3_ParamLimits

0xa092,	// (0x000266d1) popup_note_wait_window_g3

0xa108,	// (0x00026747) popup_note_wait_window_t5_ParamLimits

0xa108,	// (0x00026747) popup_note_wait_window_t5

0x2e2d,	// (0x0001f46c) main_feb_china_hwr_fs_writing_pane

0x611d,	// (0x0002275c) popup_feb_china_hwr_fs_window_ParamLimits

0x611d,	// (0x0002275c) popup_feb_china_hwr_fs_window

0x66eb,	// (0x00022d2a) aid_size_cell_hwr_fs_ParamLimits

0x66eb,	// (0x00022d2a) aid_size_cell_hwr_fs

0x9a51,	// (0x00026090) bg_popup_sub_pane_cp3_ParamLimits

0x9a51,	// (0x00026090) bg_popup_sub_pane_cp3

0x6700,	// (0x00022d3f) grid_hwr_fs_pane_ParamLimits

0x6700,	// (0x00022d3f) grid_hwr_fs_pane

0x6718,	// (0x00022d57) linegrid_hwr_fs_pane_ParamLimits

0x6718,	// (0x00022d57) linegrid_hwr_fs_pane

0x6728,	// (0x00022d67) cell_hwr_fs_pane_ParamLimits

0x6728,	// (0x00022d67) cell_hwr_fs_pane

0x9a5d,	// (0x0002609c) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a5d,	// (0x0002609c) linegrid_hwr_fs_pane_g1

0x9a69,	// (0x000260a8) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a69,	// (0x000260a8) linegrid_hwr_fs_pane_g2

0x9a7b,	// (0x000260ba) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a7b,	// (0x000260ba) linegrid_hwr_fs_pane_g3

0x674a,	// (0x00022d89) linegrid_hwr_fs_pane_g4_ParamLimits

0x674a,	// (0x00022d89) linegrid_hwr_fs_pane_g4

0x6764,	// (0x00022da3) linegrid_hwr_fs_pane_g5_ParamLimits

0x6764,	// (0x00022da3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x0002be0d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x0002be0d) linegrid_hwr_fs_pane_g

0x9a87,	// (0x000260c6) cell_hwr_fs_pane_g1_ParamLimits

0x9a87,	// (0x000260c6) cell_hwr_fs_pane_g1

0x9852,	// (0x00025e91) cell_hwr_fs_pane_g2_ParamLimits

0x9852,	// (0x00025e91) cell_hwr_fs_pane_g2

0x9a9d,	// (0x000260dc) cell_hwr_fs_pane_g3_ParamLimits

0x9a9d,	// (0x000260dc) cell_hwr_fs_pane_g3

0x9aaa,	// (0x000260e9) cell_hwr_fs_pane_g4_ParamLimits

0x9aaa,	// (0x000260e9) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x0002be18) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x0002be18) cell_hwr_fs_pane_g

0x677a,	// (0x00022db9) cell_hwr_fs_pane_t1

0x2e2d,	// (0x0001f46c) grid_highlight_pane_cp6

0x2e2d,	// (0x0001f46c) main_idle_act2_pane

0x8630,	// (0x00024c6f) aid_inside_area_popup_secondary

0xa73f,	// (0x00026d7e) aid_inside_area_window_primary_ParamLimits

0xa73f,	// (0x00026d7e) aid_inside_area_window_primary

0xb2e8,	// (0x00027927) ai2_news_ticker_pane

0xb2f0,	// (0x0002792f) aid_size_cell_ai1_link_ParamLimits

0xb2f0,	// (0x0002792f) aid_size_cell_ai1_link

0xb30a,	// (0x00027949) popup_ai2_data_window_ParamLimits

0xb30a,	// (0x00027949) popup_ai2_data_window

0xb320,	// (0x0002795f) popup_ai2_link_window_ParamLimits

0xb320,	// (0x0002795f) popup_ai2_link_window

0x9a51,	// (0x00026090) bg_popup_sub_pane_cp4_ParamLimits

0x9a51,	// (0x00026090) bg_popup_sub_pane_cp4

0xb334,	// (0x00027973) grid_ai2_link_pane_ParamLimits

0xb334,	// (0x00027973) grid_ai2_link_pane

0xb34b,	// (0x0002798a) popup_ai2_link_window_g1_ParamLimits

0xb34b,	// (0x0002798a) popup_ai2_link_window_g1

0xb357,	// (0x00027996) popup_ai2_link_window_g2_ParamLimits

0xb357,	// (0x00027996) popup_ai2_link_window_g2

0x0001,

0xf9ac,	// (0x0002bfeb) popup_ai2_link_window_g_ParamLimits

0xf9ac,	// (0x0002bfeb) popup_ai2_link_window_g

0xb366,	// (0x000279a5) ai2_mp_button_pane

0xb36e,	// (0x000279ad) ai2_mp_volume_pane

0x9c5e,	// (0x0002629d) bg_popup_sub_pane_cp5_ParamLimits

0x9c5e,	// (0x0002629d) bg_popup_sub_pane_cp5

0xb376,	// (0x000279b5) heading_ai2_gene_pane_ParamLimits

0xb376,	// (0x000279b5) heading_ai2_gene_pane

0xb382,	// (0x000279c1) list_ai2_gene_pane_ParamLimits

0xb382,	// (0x000279c1) list_ai2_gene_pane

0xb3ca,	// (0x00027a09) cell_ai2_link_pane_ParamLimits

0xb3ca,	// (0x00027a09) cell_ai2_link_pane

0xb3e0,	// (0x00027a1f) cell_ai2_link_pane_g1

0x2e2d,	// (0x0001f46c) grid_highlight_pane_cp7

0x6a6c,	// (0x000230ab) ai2_mp_volume_pane_g1

0xb4b0,	// (0x00027aef) ai2_mp_volume_pane_g2

0xb425,	// (0x00027a64) list_ai2_gene_pane_t1

0xb4b8,	// (0x00027af7) ai2_mp_volume_pane_g3

0x0002,

0xf9c5,	// (0x0002c004) ai2_mp_volume_pane_g

0x6a74,	// (0x000230b3) volume_small_pane_cp3

0xb4c0,	// (0x00027aff) aid_size_cell_ai2_button

0xb4c8,	// (0x00027b07) grid_ai2_button_pane

0xb4d1,	// (0x00027b10) cell_ai2_button_pane_ParamLimits

0xb4d1,	// (0x00027b10) cell_ai2_button_pane

0x2e23,	// (0x0001f462) cell_ai2_button_pane_g1

0x2e2d,	// (0x0001f46c) grid_highlight_pane_cp8

0xb470,	// (0x00027aaf) ai2_gene_pane_t1_ParamLimits

0xb470,	// (0x00027aaf) ai2_gene_pane_t1

0x608f,	// (0x000226ce) aid_height_parent_landscape

0xada5,	// (0x000273e4) aid_height_set_list

0xadb6,	// (0x000273f5) aid_size_parent

0xb0ff,	// (0x0002773e) aid_size_cell_graphic_pane_ParamLimits

0xb392,	// (0x000279d1) popup_ai2_data_window_g1_ParamLimits

0xb392,	// (0x000279d1) popup_ai2_data_window_g1

0xb39e,	// (0x000279dd) ai2_news_ticker_pane_g1

0xb3a6,	// (0x000279e5) ai2_news_ticker_pane_g2

0x0001,

0xf9b1,	// (0x0002bff0) ai2_news_ticker_pane_g

0xb3ae,	// (0x000279ed) ai2_news_ticker_pane_t1

0xb3bc,	// (0x000279fb) ai2_news_ticker_pane_t2

0x0001,

0xf9b6,	// (0x0002bff5) ai2_news_ticker_pane_t

0xb3e9,	// (0x00027a28) heading_ai2_gene_pane_g1

0xb3f1,	// (0x00027a30) heading_ai2_gene_pane_t1_ParamLimits

0xb3f1,	// (0x00027a30) heading_ai2_gene_pane_t1

0xb406,	// (0x00027a45) list_highlight_pane_cp6

0xb40e,	// (0x00027a4d) ai2_gene_pane_ParamLimits

0xb40e,	// (0x00027a4d) ai2_gene_pane

0xb433,	// (0x00027a72) list_ai2_gene_pane_t2

0x0001,

0xf9bb,	// (0x0002bffa) list_ai2_gene_pane_t

0xb441,	// (0x00027a80) list_highlight_pane_cp8_ParamLimits

0xb441,	// (0x00027a80) list_highlight_pane_cp8

0xb452,	// (0x00027a91) ai2_gene_pane_g1_ParamLimits

0xb452,	// (0x00027a91) ai2_gene_pane_g1

0xb464,	// (0x00027aa3) ai2_gene_pane_g2_ParamLimits

0xb464,	// (0x00027aa3) ai2_gene_pane_g2

0x0001,

0xf9c0,	// (0x0002bfff) ai2_gene_pane_g_ParamLimits

0xf9c0,	// (0x0002bfff) ai2_gene_pane_g

0x845f,	// (0x00024a9e) scroll_pane_cp12

0x604c,	// (0x0002268b) control_pane_t3_ParamLimits

0x604c,	// (0x0002268b) control_pane_t3

0x9411,	// (0x00025a50) status_small_pane_g8_ParamLimits

0x9411,	// (0x00025a50) status_small_pane_g8

0x6203,	// (0x00022842) popup_find_window_ParamLimits

0x641a,	// (0x00022a59) popup_note_image_window_ParamLimits

0x4c79,	// (0x000212b8) list_double2_graphic_pane_vc_g1_ParamLimits

0x4c79,	// (0x000212b8) list_double2_graphic_pane_vc_g1

0x4ce3,	// (0x00021322) list_double2_graphic_pane_vc_g2_ParamLimits

0x4ce3,	// (0x00021322) list_double2_graphic_pane_vc_g2

0x4cef,	// (0x0002132e) list_double2_graphic_pane_vc_g3_ParamLimits

0x4cef,	// (0x0002132e) list_double2_graphic_pane_vc_g3

0x0002,

0xf797,	// (0x0002bdd6) list_double2_graphic_pane_vc_g_ParamLimits

0xf797,	// (0x0002bdd6) list_double2_graphic_pane_vc_g

0x4cfb,	// (0x0002133a) list_double2_graphic_pane_vc_t1_ParamLimits

0x4cfb,	// (0x0002133a) list_double2_graphic_pane_vc_t1

0x4c85,	// (0x000212c4) list_single_heading_pane_vc_g1_ParamLimits

0x4c85,	// (0x000212c4) list_single_heading_pane_vc_g1

0x4c91,	// (0x000212d0) list_single_heading_pane_vc_g2_ParamLimits

0x4c91,	// (0x000212d0) list_single_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002bdf7) list_single_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002bdf7) list_single_heading_pane_vc_g

0x4d11,	// (0x00021350) list_single_heading_pane_vc_t1_ParamLimits

0x4d11,	// (0x00021350) list_single_heading_pane_vc_t1

0x4d27,	// (0x00021366) list_single_heading_pane_vc_t2_ParamLimits

0x4d27,	// (0x00021366) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x0002bdfc) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x0002bdfc) list_single_heading_pane_vc_t

0x4d3d,	// (0x0002137c) list_setting_number_pane_vc_g1_ParamLimits

0x4d3d,	// (0x0002137c) list_setting_number_pane_vc_g1

0x4d49,	// (0x00021388) list_setting_number_pane_vc_g2_ParamLimits

0x4d49,	// (0x00021388) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x0002be01) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x0002be01) list_setting_number_pane_vc_g

0x4d55,	// (0x00021394) list_setting_number_pane_vc_t1_ParamLimits

0x4d55,	// (0x00021394) list_setting_number_pane_vc_t1

0x4d69,	// (0x000213a8) list_setting_number_pane_vc_t2_ParamLimits

0x4d69,	// (0x000213a8) list_setting_number_pane_vc_t2

0x4d85,	// (0x000213c4) list_setting_number_pane_vc_t3_ParamLimits

0x4d85,	// (0x000213c4) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x0002be06) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x0002be06) list_setting_number_pane_vc_t

0x4da3,	// (0x000213e2) set_value_pane_vc_ParamLimits

0x4da3,	// (0x000213e2) set_value_pane_vc

0x4e7c,	// (0x000214bb) list_double2_graphic_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_double2_graphic_pane_vc

0xaf6e,	// (0x000275ad) list_double2_large_graphic_pane_vc_ParamLimits

0xaf6e,	// (0x000275ad) list_double2_large_graphic_pane_vc

0x4e7c,	// (0x000214bb) list_double2_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_double2_pane_vc

0x4e7c,	// (0x000214bb) list_double_graphic_heading_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_double_graphic_heading_pane_vc

0x4e7c,	// (0x000214bb) list_double_graphic_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_double_graphic_pane_vc

0x4e7c,	// (0x000214bb) list_double_heading_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_double_heading_pane_vc

0xaf80,	// (0x000275bf) list_double_large_graphic_pane_vc_ParamLimits

0xaf80,	// (0x000275bf) list_double_large_graphic_pane_vc

0x4e7c,	// (0x000214bb) list_double_number_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_double_number_pane_vc

0x4e7c,	// (0x000214bb) list_double_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_double_pane_vc

0x4e7c,	// (0x000214bb) list_double_time_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_double_time_pane_vc

0x4e7c,	// (0x000214bb) list_setting_number_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_setting_number_pane_vc

0x4e7c,	// (0x000214bb) list_setting_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_setting_pane_vc

0x4e7c,	// (0x000214bb) list_single_graphic_heading_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_single_graphic_heading_pane_vc

0x4e7c,	// (0x000214bb) list_single_heading_pane_vc_ParamLimits

0x4e7c,	// (0x000214bb) list_single_heading_pane_vc

0x4e8f,	// (0x000214ce) list_single_number_heading_pane_vc_ParamLimits

0x4e8f,	// (0x000214ce) list_single_number_heading_pane_vc

0x453d,	// (0x00020b7c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x453d,	// (0x00020b7c) list_double_graphic_heading_pane_vc_g1

0x44c3,	// (0x00020b02) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x44c3,	// (0x00020b02) list_double_graphic_heading_pane_vc_g2

0x44cf,	// (0x00020b0e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x44cf,	// (0x00020b0e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9cc,	// (0x0002c00b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9cc,	// (0x0002c00b) list_double_graphic_heading_pane_vc_g

0x4f0a,	// (0x00021549) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4f0a,	// (0x00021549) list_double_graphic_heading_pane_vc_t1

0x4f26,	// (0x00021565) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4f26,	// (0x00021565) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d3,	// (0x0002c012) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d3,	// (0x0002c012) list_double_graphic_heading_pane_vc_t

0x4d3d,	// (0x0002137c) list_setting_pane_vc_g1_ParamLimits

0x4d3d,	// (0x0002137c) list_setting_pane_vc_g1

0x4d49,	// (0x00021388) list_setting_pane_vc_g2_ParamLimits

0x4d49,	// (0x00021388) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x0002be01) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x0002be01) list_setting_pane_vc_g

0x4f44,	// (0x00021583) list_setting_pane_vc_t1_ParamLimits

0x4f44,	// (0x00021583) list_setting_pane_vc_t1

0x4f60,	// (0x0002159f) list_setting_pane_vc_t2_ParamLimits

0x4f60,	// (0x0002159f) list_setting_pane_vc_t2

0x0001,

0xfa01,	// (0x0002c040) list_setting_pane_vc_t_ParamLimits

0xfa01,	// (0x0002c040) list_setting_pane_vc_t

0x4da3,	// (0x000213e2) set_value_pane_cp_vc_ParamLimits

0x4da3,	// (0x000213e2) set_value_pane_cp_vc

0x4c85,	// (0x000212c4) list_single_number_heading_pane_vc_g1_ParamLimits

0x4c85,	// (0x000212c4) list_single_number_heading_pane_vc_g1

0x4c91,	// (0x000212d0) list_single_number_heading_pane_vc_g2_ParamLimits

0x4c91,	// (0x000212d0) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002bdf7) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002bdf7) list_single_number_heading_pane_vc_g

0x4f7c,	// (0x000215bb) list_single_number_heading_pane_vc_t1_ParamLimits

0x4f7c,	// (0x000215bb) list_single_number_heading_pane_vc_t1

0x4f92,	// (0x000215d1) list_single_number_heading_pane_vc_t2_ParamLimits

0x4f92,	// (0x000215d1) list_single_number_heading_pane_vc_t2

0x452b,	// (0x00020b6a) list_single_number_heading_pane_vc_t3_ParamLimits

0x452b,	// (0x00020b6a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa06,	// (0x0002c045) list_single_number_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0002c045) list_single_number_heading_pane_vc_t

0x4c79,	// (0x000212b8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4c79,	// (0x000212b8) list_single_graphic_heading_pane_vc_g1

0x4c85,	// (0x000212c4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4c85,	// (0x000212c4) list_single_graphic_heading_pane_vc_g4

0x4c91,	// (0x000212d0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4c91,	// (0x000212d0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf789,	// (0x0002bdc8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf789,	// (0x0002bdc8) list_single_graphic_heading_pane_vc_g

0x4f7c,	// (0x000215bb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4f7c,	// (0x000215bb) list_single_graphic_heading_pane_vc_t1

0x4fa8,	// (0x000215e7) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4fa8,	// (0x000215e7) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0d,	// (0x0002c04c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x0002c04c) list_single_graphic_heading_pane_vc_t

0x4c85,	// (0x000212c4) list_double2_pane_vc_g1_ParamLimits

0x4c85,	// (0x000212c4) list_double2_pane_vc_g1

0x4c91,	// (0x000212d0) list_double2_pane_vc_g2_ParamLimits

0x4c91,	// (0x000212d0) list_double2_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002bdf7) list_double2_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002bdf7) list_double2_pane_vc_g

0x4fba,	// (0x000215f9) list_double2_pane_vc_t1_ParamLimits

0x4fba,	// (0x000215f9) list_double2_pane_vc_t1

0x4fd0,	// (0x0002160f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4fd0,	// (0x0002160f) list_double2_large_graphic_pane_vc_g1

0x4578,	// (0x00020bb7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4578,	// (0x00020bb7) list_double2_large_graphic_pane_vc_g2

0x4584,	// (0x00020bc3) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4584,	// (0x00020bc3) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa12,	// (0x0002c051) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa12,	// (0x0002c051) list_double2_large_graphic_pane_vc_g

0x4fdc,	// (0x0002161b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4fdc,	// (0x0002161b) list_double2_large_graphic_pane_vc_t1

0x4ff2,	// (0x00021631) list_double_time_pane_vc_g1_ParamLimits

0x4ff2,	// (0x00021631) list_double_time_pane_vc_g1

0x4ffe,	// (0x0002163d) list_double_time_pane_vc_g2_ParamLimits

0x4ffe,	// (0x0002163d) list_double_time_pane_vc_g2

0x0001,

0xfa19,	// (0x0002c058) list_double_time_pane_vc_g_ParamLimits

0xfa19,	// (0x0002c058) list_double_time_pane_vc_g

0x500a,	// (0x00021649) list_double_time_pane_vc_t1_ParamLimits

0x500a,	// (0x00021649) list_double_time_pane_vc_t1

0x502e,	// (0x0002166d) list_double_time_pane_vc_t2_ParamLimits

0x502e,	// (0x0002166d) list_double_time_pane_vc_t2

0x5078,	// (0x000216b7) list_double_time_pane_vc_t3_ParamLimits

0x5078,	// (0x000216b7) list_double_time_pane_vc_t3

0x508a,	// (0x000216c9) list_double_time_pane_vc_t4_ParamLimits

0x508a,	// (0x000216c9) list_double_time_pane_vc_t4

0x0003,

0xfa1e,	// (0x0002c05d) list_double_time_pane_vc_t_ParamLimits

0xfa1e,	// (0x0002c05d) list_double_time_pane_vc_t

0x4c85,	// (0x000212c4) list_double_pane_vc_g1_ParamLimits

0x4c85,	// (0x000212c4) list_double_pane_vc_g1

0x4c91,	// (0x000212d0) list_double_pane_vc_g2_ParamLimits

0x4c91,	// (0x000212d0) list_double_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002bdf7) list_double_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002bdf7) list_double_pane_vc_g

0x509e,	// (0x000216dd) list_double_pane_vc_t1_ParamLimits

0x509e,	// (0x000216dd) list_double_pane_vc_t1

0x50b2,	// (0x000216f1) list_double_pane_vc_t2_ParamLimits

0x50b2,	// (0x000216f1) list_double_pane_vc_t2

0x0001,

0xfa27,	// (0x0002c066) list_double_pane_vc_t_ParamLimits

0xfa27,	// (0x0002c066) list_double_pane_vc_t

0x4c85,	// (0x000212c4) list_double_number_pane_vc_g1_ParamLimits

0x4c85,	// (0x000212c4) list_double_number_pane_vc_g1

0x4c91,	// (0x000212d0) list_double_number_pane_vc_g2_ParamLimits

0x4c91,	// (0x000212d0) list_double_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002bdf7) list_double_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002bdf7) list_double_number_pane_vc_g

0x50ca,	// (0x00021709) list_double_number_pane_vc_t1_ParamLimits

0x50ca,	// (0x00021709) list_double_number_pane_vc_t1

0x50dc,	// (0x0002171b) list_double_number_pane_vc_t2_ParamLimits

0x50dc,	// (0x0002171b) list_double_number_pane_vc_t2

0x50f0,	// (0x0002172f) list_double_number_pane_vc_t3_ParamLimits

0x50f0,	// (0x0002172f) list_double_number_pane_vc_t3

0x0002,

0xfa2c,	// (0x0002c06b) list_double_number_pane_vc_t_ParamLimits

0xfa2c,	// (0x0002c06b) list_double_number_pane_vc_t

0x510a,	// (0x00021749) list_double_large_graphic_pane_vc_g1_ParamLimits

0x510a,	// (0x00021749) list_double_large_graphic_pane_vc_g1

0x5126,	// (0x00021765) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5126,	// (0x00021765) list_double_large_graphic_pane_vc_g2

0x513a,	// (0x00021779) list_double_large_graphic_pane_vc_g3_ParamLimits

0x513a,	// (0x00021779) list_double_large_graphic_pane_vc_g3

0x5149,	// (0x00021788) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5149,	// (0x00021788) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa33,	// (0x0002c072) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa33,	// (0x0002c072) list_double_large_graphic_pane_vc_g

0x5158,	// (0x00021797) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5158,	// (0x00021797) list_double_large_graphic_pane_vc_t1

0x5174,	// (0x000217b3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5174,	// (0x000217b3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3c,	// (0x0002c07b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3c,	// (0x0002c07b) list_double_large_graphic_pane_vc_t

0x44c3,	// (0x00020b02) list_double_heading_pane_vc_g1_ParamLimits

0x44c3,	// (0x00020b02) list_double_heading_pane_vc_g1

0x44cf,	// (0x00020b0e) list_double_heading_pane_vc_g2_ParamLimits

0x44cf,	// (0x00020b0e) list_double_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0002bbe0) list_double_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0002bbe0) list_double_heading_pane_vc_g

0x5196,	// (0x000217d5) list_double_heading_pane_vc_t1_ParamLimits

0x5196,	// (0x000217d5) list_double_heading_pane_vc_t1

0x51aa,	// (0x000217e9) list_double_heading_pane_vc_t2_ParamLimits

0x51aa,	// (0x000217e9) list_double_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0002c080) list_double_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0002c080) list_double_heading_pane_vc_t

0x51c2,	// (0x00021801) list_double_graphic_pane_vc_g1_ParamLimits

0x51c2,	// (0x00021801) list_double_graphic_pane_vc_g1

0x51d5,	// (0x00021814) list_double_graphic_pane_vc_g2_ParamLimits

0x51d5,	// (0x00021814) list_double_graphic_pane_vc_g2

0x4c85,	// (0x000212c4) list_double_graphic_pane_vc_g3_ParamLimits

0x4c85,	// (0x000212c4) list_double_graphic_pane_vc_g3

0x0003,

0xfa46,	// (0x0002c085) list_double_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0002c085) list_double_graphic_pane_vc_g

0x51f2,	// (0x00021831) list_double_graphic_pane_vc_t1_ParamLimits

0x51f2,	// (0x00021831) list_double_graphic_pane_vc_t1

0x521c,	// (0x0002185b) list_double_graphic_pane_vc_t2_ParamLimits

0x521c,	// (0x0002185b) list_double_graphic_pane_vc_t2

0x0001,

0xfa4f,	// (0x0002c08e) list_double_graphic_pane_vc_t_ParamLimits

0xfa4f,	// (0x0002c08e) list_double_graphic_pane_vc_t

0x5642,	// (0x00021c81) aid_size_cell_fastswap

0x564a,	// (0x00021c89) aid_size_cell_touch_ParamLimits

0x564a,	// (0x00021c89) aid_size_cell_touch

0x58ab,	// (0x00021eea) popup_fast_swap_wide_window_ParamLimits

0x58ab,	// (0x00021eea) popup_fast_swap_wide_window

0x59bf,	// (0x00021ffe) touch_pane_ParamLimits

0x59bf,	// (0x00021ffe) touch_pane

0x84b5,	// (0x00024af4) button_value_adjust_pane_cp2

0x4960,	// (0x00020f9f) button_value_adjust_pane_cp4

0x4980,	// (0x00020fbf) form_field_data_pane_cp2

0x499f,	// (0x00020fde) form_field_data_wide_pane_cp2

0x8948,	// (0x00024f87) bg_scroll_pane_ParamLimits

0x5c4d,	// (0x0002228c) scroll_handle_pane_ParamLimits

0x5c61,	// (0x000222a0) scroll_sc2_down_pane_ParamLimits

0x5c61,	// (0x000222a0) scroll_sc2_down_pane

0x8979,	// (0x00024fb8) scroll_sc2_up_pane_ParamLimits

0x8979,	// (0x00024fb8) scroll_sc2_up_pane

0xbbb9,	// (0x000281f8) grid_wheel_folder_pane_g1_ParamLimits

0xbbb9,	// (0x000281f8) grid_wheel_folder_pane_g1

0x5e26,	// (0x00022465) clock_nsta_pane_cp2_ParamLimits

0x5e26,	// (0x00022465) clock_nsta_pane_cp2

0x9197,	// (0x000257d6) listscroll_midp_pane_ParamLimits

0x91a3,	// (0x000257e2) midp_canvas_pane

0x948b,	// (0x00025aca) nsta_clock_indic_pane

0x94bf,	// (0x00025afe) listscroll_form_pane_vc

0x94c7,	// (0x00025b06) listscroll_set_pane_vc_ParamLimits

0x94c7,	// (0x00025b06) listscroll_set_pane_vc

0x95c0,	// (0x00025bff) clock_nsta_pane

0x963b,	// (0x00025c7a) indicator_nsta_pane

0x991b,	// (0x00025f5a) bg_popup_sub_pane_cp2_ParamLimits

0x992f,	// (0x00025f6e) find_pane_cp2_ParamLimits

0x992f,	// (0x00025f6e) find_pane_cp2

0x9945,	// (0x00025f84) grid_toobar_pane_ParamLimits

0x9a25,	// (0x00026064) list_form_gen_pane_vc_ParamLimits

0x9a25,	// (0x00026064) list_form_gen_pane_vc

0x9a3b,	// (0x0002607a) scroll_pane_cp8_vc_ParamLimits

0x9a3b,	// (0x0002607a) scroll_pane_cp8_vc

0x9ab7,	// (0x000260f6) data_form_wide_pane_vc_ParamLimits

0x9ab7,	// (0x000260f6) data_form_wide_pane_vc

0x9ac3,	// (0x00026102) form_field_data_wide_pane_vc_g1

0x9acb,	// (0x0002610a) form_field_data_wide_pane_vc_t1_ParamLimits

0x9acb,	// (0x0002610a) form_field_data_wide_pane_vc_t1

0x84c9,	// (0x00024b08) input_focus_pane_cp6_vc_ParamLimits

0x84c9,	// (0x00024b08) input_focus_pane_cp6_vc

0x9df1,	// (0x00026430) list_midp_pane_ParamLimits

0x9dfd,	// (0x0002643c) scroll_pane_cp16_ParamLimits

0x9dfd,	// (0x0002643c) scroll_pane_cp16

0x9e67,	// (0x000264a6) button_value_adjust_pane_ParamLimits

0x9e67,	// (0x000264a6) button_value_adjust_pane

0xadc8,	// (0x00027407) button_value_adjust_pane_cp6_ParamLimits

0xadc8,	// (0x00027407) button_value_adjust_pane_cp6

0xaef2,	// (0x00027531) settings_code_pane_cp_ParamLimits

0xaef2,	// (0x00027531) settings_code_pane_cp

0x2e23,	// (0x0001f462) cell_touch_pane_g1

0x2e23,	// (0x0001f462) cell_touch_pane_g2

0x0001,

0xf6dc,	// (0x0002bd1b) cell_touch_pane_g

0xb4e3,	// (0x00027b22) cell_touch_pane_cp_ParamLimits

0xb4e3,	// (0x00027b22) cell_touch_pane_cp

0xb4f3,	// (0x00027b32) cell_touch_pane_ParamLimits

0xb4f3,	// (0x00027b32) cell_touch_pane

0x2e23,	// (0x0001f462) scroll_sc2_down_pane_g1

0x2e23,	// (0x0001f462) scroll_sc2_up_pane_g1

0x2e2d,	// (0x0001f46c) bg_set_opt_pane_cp4_vc

0xb505,	// (0x00027b44) list_set_graphic_pane_vc_g1_ParamLimits

0xb505,	// (0x00027b44) list_set_graphic_pane_vc_g1

0xb511,	// (0x00027b50) list_set_graphic_pane_vc_g2_ParamLimits

0xb511,	// (0x00027b50) list_set_graphic_pane_vc_g2

0x0001,

0xf9d8,	// (0x0002c017) list_set_graphic_pane_vc_g_ParamLimits

0xf9d8,	// (0x0002c017) list_set_graphic_pane_vc_g

0xb51d,	// (0x00027b5c) text_primary_small_cp13_vc_ParamLimits

0xb51d,	// (0x00027b5c) text_primary_small_cp13_vc

0xb535,	// (0x00027b74) list_set_graphic_pane_vc_ParamLimits

0xb535,	// (0x00027b74) list_set_graphic_pane_vc

0x2e2d,	// (0x0001f46c) input_focus_pane_cp2_vc

0x2e23,	// (0x0001f462) setting_code_pane_vc_g1

0x7c87,	// (0x000242c6) setting_code_pane_vc_t1

0xb548,	// (0x00027b87) set_text_pane_vc_t1_ParamLimits

0xb548,	// (0x00027b87) set_text_pane_vc_t1

0x2e2d,	// (0x0001f46c) input_focus_pane_cp1_vc

0xb564,	// (0x00027ba3) list_set_text_pane_vc

0x2e23,	// (0x0001f462) setting_text_pane_vc_g1

0x2e2d,	// (0x0001f46c) bg_set_opt_pane_cp2_vc

0x7c7e,	// (0x000242bd) setting_slider_graphic_pane_vc_g1

0xb56e,	// (0x00027bad) setting_slider_graphic_pane_vc_t1

0xb57e,	// (0x00027bbd) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9dd,	// (0x0002c01c) setting_slider_graphic_pane_vc_t

0xb58e,	// (0x00027bcd) slider_set_pane_cp_vc

0xb596,	// (0x00027bd5) slider_set_pane_vc_g1

0xb59f,	// (0x00027bde) slider_set_pane_vc_g2

0x0006,

0xf9e2,	// (0x0002c021) slider_set_pane_vc_g

0x8521,	// (0x00024b60) set_opt_bg_pane_g1_copy1

0x8529,	// (0x00024b68) set_opt_bg_pane_g2_copy1

0xb5cb,	// (0x00027c0a) set_opt_bg_pane_g3_copy1

0x8539,	// (0x00024b78) set_opt_bg_pane_g4_copy1

0x8541,	// (0x00024b80) set_opt_bg_pane_g5_copy1

0x8549,	// (0x00024b88) set_opt_bg_pane_g6_copy1

0xb5d5,	// (0x00027c14) set_opt_bg_pane_g7_copy1

0xb5df,	// (0x00027c1e) set_opt_bg_pane_g8_copy1

0xb5e9,	// (0x00027c28) set_opt_bg_pane_g9_copy1

0x2e2d,	// (0x0001f46c) bg_set_opt_pane_cp_vc

0xb5f3,	// (0x00027c32) setting_slider_pane_vc_t1

0xb602,	// (0x00027c41) setting_slider_pane_vc_t2

0xb612,	// (0x00027c51) setting_slider_pane_vc_t3

0x0002,

0xf9f1,	// (0x0002c030) setting_slider_pane_vc_t

0xb622,	// (0x00027c61) slider_set_pane_vc

0x6788,	// (0x00022dc7) volume_set_pane_vc_g1

0x6791,	// (0x00022dd0) volume_set_pane_vc_g2

0x679a,	// (0x00022dd9) volume_set_pane_vc_g3

0x67a3,	// (0x00022de2) volume_set_pane_vc_g4

0x67ac,	// (0x00022deb) volume_set_pane_vc_g5

0x67b5,	// (0x00022df4) volume_set_pane_vc_g6

0x67be,	// (0x00022dfd) volume_set_pane_vc_g7

0x67c7,	// (0x00022e06) volume_set_pane_vc_g8

0x67d0,	// (0x00022e0f) volume_set_pane_vc_g9

0x67d9,	// (0x00022e18) volume_set_pane_vc_g10

0x0009,

0xf88f,	// (0x0002bece) volume_set_pane_vc_g

0xb62a,	// (0x00027c69) volume_set_pane_vc

0xb632,	// (0x00027c71) button_value_adjust_pane_cp1_vc

0xb63c,	// (0x00027c7b) list_highlight_pane_cp2_vc

0xb645,	// (0x00027c84) list_set_pane_vc_ParamLimits

0xb645,	// (0x00027c84) list_set_pane_vc

0xb6a3,	// (0x00027ce2) main_pane_set_vc_t1_ParamLimits

0xb6a3,	// (0x00027ce2) main_pane_set_vc_t1

0xb6b8,	// (0x00027cf7) main_pane_set_vc_t2_ParamLimits

0xb6b8,	// (0x00027cf7) main_pane_set_vc_t2

0xb6ca,	// (0x00027d09) main_pane_set_vc_t3_ParamLimits

0xb6ca,	// (0x00027d09) main_pane_set_vc_t3

0xb6de,	// (0x00027d1d) main_pane_set_vc_t4_ParamLimits

0xb6de,	// (0x00027d1d) main_pane_set_vc_t4

0x0003,

0xf9f8,	// (0x0002c037) main_pane_set_vc_t_ParamLimits

0xf9f8,	// (0x0002c037) main_pane_set_vc_t

0xb6f2,	// (0x00027d31) setting_code_pane_vc_ParamLimits

0xb6f2,	// (0x00027d31) setting_code_pane_vc

0xb703,	// (0x00027d42) setting_slider_graphic_pane_vc

0xb703,	// (0x00027d42) setting_slider_pane_vc

0xb703,	// (0x00027d42) setting_text_pane_vc

0xb703,	// (0x00027d42) setting_volume_pane_vc

0xb70d,	// (0x00027d4c) scroll_pane_cp121_vc

0x84a3,	// (0x00024ae2) set_content_pane_vc

0xb715,	// (0x00027d54) button_value_adjust_pane_g1

0xb71e,	// (0x00027d5d) button_value_adjust_pane_g2

0x0001,

0xfa54,	// (0x0002c093) button_value_adjust_pane_g

0xb727,	// (0x00027d66) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb727,	// (0x00027d66) form_field_slider_wide_pane_vc_t1

0xb73b,	// (0x00027d7a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb73b,	// (0x00027d7a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa59,	// (0x0002c098) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa59,	// (0x0002c098) form_field_slider_wide_pane_vc_t

0x7eb7,	// (0x000244f6) input_focus_pane_cp10_vc_ParamLimits

0x7eb7,	// (0x000244f6) input_focus_pane_cp10_vc

0xb769,	// (0x00027da8) slider_cont_pane_cp1_vc_ParamLimits

0xb769,	// (0x00027da8) slider_cont_pane_cp1_vc

0xb77b,	// (0x00027dba) slider_form_pane_g1_cp2

0xb59f,	// (0x00027bde) slider_form_pane_g2_cp2

0xb7a8,	// (0x00027de7) form_field_slider_pane_vc_t3

0xb7b6,	// (0x00027df5) form_field_slider_pane_vc_t4

0xb7c4,	// (0x00027e03) slider_form_pane_vc_ParamLimits

0xb7c4,	// (0x00027e03) slider_form_pane_vc

0xb7d1,	// (0x00027e10) form_field_slider_pane_vc_t1_ParamLimits

0xb7d1,	// (0x00027e10) form_field_slider_pane_vc_t1

0xb73b,	// (0x00027d7a) form_field_slider_pane_vc_t2_ParamLimits

0xb73b,	// (0x00027d7a) form_field_slider_pane_vc_t2

0x0001,

0xfa6b,	// (0x0002c0aa) form_field_slider_pane_vc_t_ParamLimits

0xfa6b,	// (0x0002c0aa) form_field_slider_pane_vc_t

0x7eb7,	// (0x000244f6) input_focus_pane_cp9_vc_ParamLimits

0x7eb7,	// (0x000244f6) input_focus_pane_cp9_vc

0xb7ed,	// (0x00027e2c) slider_cont_pane_vc_ParamLimits

0xb7ed,	// (0x00027e2c) slider_cont_pane_vc

0xb801,	// (0x00027e40) list_form_graphic_pane_cp_vc_ParamLimits

0xb801,	// (0x00027e40) list_form_graphic_pane_cp_vc

0x9ac3,	// (0x00026102) form_field_popup_wide_pane_vc_g1

0xb816,	// (0x00027e55) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb816,	// (0x00027e55) form_field_popup_wide_pane_vc_t1

0x84c9,	// (0x00024b08) input_focus_pane_cp8_vc_ParamLimits

0x84c9,	// (0x00024b08) input_focus_pane_cp8_vc

0xb85b,	// (0x00027e9a) list_form_wide_pane_vc_ParamLimits

0xb85b,	// (0x00027e9a) list_form_wide_pane_vc

0xb867,	// (0x00027ea6) list_form_graphic_pane_vc_g1

0xb86f,	// (0x00027eae) list_form_graphic_pane_vc_t1_ParamLimits

0xb86f,	// (0x00027eae) list_form_graphic_pane_vc_t1

0x7c3c,	// (0x0002427b) list_highlight_pane_cp5_vc_ParamLimits

0x7c3c,	// (0x0002427b) list_highlight_pane_cp5_vc

0xb88b,	// (0x00027eca) list_form_graphic_pane_vc_ParamLimits

0xb88b,	// (0x00027eca) list_form_graphic_pane_vc

0x9ac3,	// (0x00026102) form_field_popup_pane_vc_g1

0xb8a1,	// (0x00027ee0) form_field_popup_pane_vc_t1_ParamLimits

0xb8a1,	// (0x00027ee0) form_field_popup_pane_vc_t1

0x84c9,	// (0x00024b08) input_focus_pane_cp7_vc_ParamLimits

0x84c9,	// (0x00024b08) input_focus_pane_cp7_vc

0xb8b8,	// (0x00027ef7) list_form_pane_vc_ParamLimits

0xb8b8,	// (0x00027ef7) list_form_pane_vc

0xb8c4,	// (0x00027f03) data_form_pane_vc_t1_ParamLimits

0xb8c4,	// (0x00027f03) data_form_pane_vc_t1

0x8521,	// (0x00024b60) input_focus_pane_vc_g1

0x8529,	// (0x00024b68) input_focus_pane_vc_g2

0x8531,	// (0x00024b70) input_focus_pane_vc_g3

0x8539,	// (0x00024b78) input_focus_pane_vc_g4

0x8541,	// (0x00024b80) input_focus_pane_vc_g5

0x8549,	// (0x00024b88) input_focus_pane_vc_g6

0x8551,	// (0x00024b90) input_focus_pane_vc_g7

0x8559,	// (0x00024b98) input_focus_pane_vc_g8

0x8561,	// (0x00024ba0) input_focus_pane_vc_g9

0x2e23,	// (0x0001f462) input_focus_pane_vc_g10

0x0009,

0xf665,	// (0x0002bca4) input_focus_pane_vc_g

0x9ab7,	// (0x000260f6) data_form_pane_vc_ParamLimits

0x9ab7,	// (0x000260f6) data_form_pane_vc

0x9ac3,	// (0x00026102) form_field_data_pane_vc_g1

0xb8df,	// (0x00027f1e) form_field_data_pane_vc_t1_ParamLimits

0xb8df,	// (0x00027f1e) form_field_data_pane_vc_t1

0x84c9,	// (0x00024b08) input_focus_pane_vc_ParamLimits

0x84c9,	// (0x00024b08) input_focus_pane_vc

0xb8f9,	// (0x00027f38) button_value_adjust_pane_cp3_vc

0xb901,	// (0x00027f40) button_value_adjust_pane_cp5_vc

0xb909,	// (0x00027f48) form_field_data_pane_vc_ParamLimits

0xb909,	// (0x00027f48) form_field_data_pane_vc

0xb920,	// (0x00027f5f) form_field_data_pane_vc_cp2

0xb928,	// (0x00027f67) form_field_data_wide_pane_vc_ParamLimits

0xb928,	// (0x00027f67) form_field_data_wide_pane_vc

0xb93e,	// (0x00027f7d) form_field_data_wide_pane_vc_cp2

0xb946,	// (0x00027f85) form_field_popup_pane_vc_ParamLimits

0xb946,	// (0x00027f85) form_field_popup_pane_vc

0xb95d,	// (0x00027f9c) form_field_popup_wide_pane_vc_ParamLimits

0xb95d,	// (0x00027f9c) form_field_popup_wide_pane_vc

0xb973,	// (0x00027fb2) form_field_slider_pane_vc_ParamLimits

0xb973,	// (0x00027fb2) form_field_slider_pane_vc

0xb986,	// (0x00027fc5) form_field_slider_wide_pane_vc_ParamLimits

0xb986,	// (0x00027fc5) form_field_slider_wide_pane_vc

0xb999,	// (0x00027fd8) grid_touch_1_pane_ParamLimits

0xb999,	// (0x00027fd8) grid_touch_1_pane

0xb9a5,	// (0x00027fe4) grid_touch_2_pane_ParamLimits

0xb9a5,	// (0x00027fe4) grid_touch_2_pane

0x9456,	// (0x00025a95) touch_pane_g1_ParamLimits

0x9456,	// (0x00025a95) touch_pane_g1

0xb9bd,	// (0x00027ffc) cell_app_pane_cp_wide_ParamLimits

0xb9bd,	// (0x00027ffc) cell_app_pane_cp_wide

0xb9ce,	// (0x0002800d) grid_popup_fast_wide_pane_ParamLimits

0xb9ce,	// (0x0002800d) grid_popup_fast_wide_pane

0xb9e2,	// (0x00028021) scroll_pane_cp19_ParamLimits

0xb9e2,	// (0x00028021) scroll_pane_cp19

0x2e2d,	// (0x0001f46c) bg_popup_window_pane_cp20

0xb9f6,	// (0x00028035) listscroll_popup_fast_wide_pane

0xb9fe,	// (0x0002803d) grid_indicator_nsta_pane

0xba10,	// (0x0002804f) clock_nsta_pane_g1

0xba19,	// (0x00028058) clock_nsta_pane_t1

0xba35,	// (0x00028074) cell_indicator_nsta_pane_ParamLimits

0xba35,	// (0x00028074) cell_indicator_nsta_pane

0xba6a,	// (0x000280a9) cell_indicator_nsta_pane_g1

0xba78,	// (0x000280b7) cell_indicator_nsta_pane_g2

0x0001,

0xfa7c,	// (0x0002c0bb) cell_indicator_nsta_pane_g

0xba8a,	// (0x000280c9) clock_nsta_pane_cp

0xba93,	// (0x000280d2) indicator_nsta_pane_cp

0xba9d,	// (0x000280dc) nsta_clock_indic_pane_g1

0x7d05,	// (0x00024344) grid_indicator_pane

0x8a6e,	// (0x000250ad) scroll_pane_cp29

0x5d75,	// (0x000223b4) indicator_nsta_pane_cp2_ParamLimits

0x5d75,	// (0x000223b4) indicator_nsta_pane_cp2

0x7c3c,	// (0x0002427b) main_apps_wheel_pane

0x9cd2,	// (0x00026311) form_midp_field_text_pane_ParamLimits

0x9e1d,	// (0x0002645c) scroll_bar_cp050_ParamLimits

0xbaf6,	// (0x00028135) cell_indicator_pane_ParamLimits

0xbaf6,	// (0x00028135) cell_indicator_pane

0xbb0d,	// (0x0002814c) cell_indicator_pane_g1

0xbb17,	// (0x00028156) grid_wheel_folder_pane_ParamLimits

0xbb17,	// (0x00028156) grid_wheel_folder_pane

0xbb2d,	// (0x0002816c) list_wheel_apps_pane_ParamLimits

0xbb2d,	// (0x0002816c) list_wheel_apps_pane

0xbb3e,	// (0x0002817d) main_apps_wheel_pane_g1_ParamLimits

0xbb3e,	// (0x0002817d) main_apps_wheel_pane_g1

0xbb52,	// (0x00028191) main_apps_wheel_pane_g2_ParamLimits

0xbb52,	// (0x00028191) main_apps_wheel_pane_g2

0x0001,

0xfa98,	// (0x0002c0d7) main_apps_wheel_pane_g_ParamLimits

0xfa98,	// (0x0002c0d7) main_apps_wheel_pane_g

0xbb6a,	// (0x000281a9) main_apps_wheel_pane_t1_ParamLimits

0xbb6a,	// (0x000281a9) main_apps_wheel_pane_t1

0xbb8d,	// (0x000281cc) list_wheel_apps_pane_g1

0xbb95,	// (0x000281d4) list_wheel_apps_pane_g2

0xbb9d,	// (0x000281dc) list_wheel_apps_pane_g3

0xbba5,	// (0x000281e4) list_wheel_apps_pane_g4

0xbbaf,	// (0x000281ee) list_wheel_apps_pane_g5

0x0004,

0xfa9d,	// (0x0002c0dc) list_wheel_apps_pane_g

0x9002,	// (0x00025641) navi_icon_text_pane

0x94ef,	// (0x00025b2e) aid_fill_nsta

0xbbd2,	// (0x00028211) navi_icon_text_pane_g1

0xbbde,	// (0x0002821d) navi_icon_text_pane_t1

0x8ea0,	// (0x000254df) list_set_graphic_pane_t1_ParamLimits

0x8ea0,	// (0x000254df) list_set_graphic_pane_t1

0xa588,	// (0x00026bc7) popup_midp_note_alarm_window_t6_ParamLimits

0xa588,	// (0x00026bc7) popup_midp_note_alarm_window_t6

0xa59a,	// (0x00026bd9) popup_midp_note_alarm_window_t7_ParamLimits

0xa59a,	// (0x00026bd9) popup_midp_note_alarm_window_t7

0xa5ac,	// (0x00026beb) popup_midp_note_alarm_window_t8_ParamLimits

0xa5ac,	// (0x00026beb) popup_midp_note_alarm_window_t8

0xa5be,	// (0x00026bfd) popup_midp_note_alarm_window_t9_ParamLimits

0xa5be,	// (0x00026bfd) popup_midp_note_alarm_window_t9

0xa5d0,	// (0x00026c0f) popup_midp_note_alarm_window_t10_ParamLimits

0xa5d0,	// (0x00026c0f) popup_midp_note_alarm_window_t10

0xa5e2,	// (0x00026c21) popup_midp_note_alarm_window_t11_ParamLimits

0xa5e2,	// (0x00026c21) popup_midp_note_alarm_window_t11

0xa5f4,	// (0x00026c33) scroll_pane_cp17_ParamLimits

0xa5f4,	// (0x00026c33) scroll_pane_cp17

0x6788,	// (0x00022dc7) volume_small_pane_cp_g1

0x6a7d,	// (0x000230bc) volume_small_pane_cp_g2

0x6a86,	// (0x000230c5) volume_small_pane_cp_g3

0x6a8f,	// (0x000230ce) volume_small_pane_cp_g4

0x6a98,	// (0x000230d7) volume_small_pane_cp_g5

0x6aa1,	// (0x000230e0) volume_small_pane_cp_g6

0x6aaa,	// (0x000230e9) volume_small_pane_cp_g7

0x6ab3,	// (0x000230f2) volume_small_pane_cp_g8

0x6abc,	// (0x000230fb) volume_small_pane_cp_g9

0x6ac5,	// (0x00023104) volume_small_pane_cp_g10

0x926c,	// (0x000258ab) midp_ticker_pane_g1_ParamLimits

0x9278,	// (0x000258b7) midp_ticker_pane_g2_ParamLimits

0xf731,	// (0x0002bd70) midp_ticker_pane_g_ParamLimits

0x9284,	// (0x000258c3) midp_ticker_pane_t1_ParamLimits

0x9505,	// (0x00025b44) aid_fill_nsta_2

0x9e09,	// (0x00026448) list_form2_midp_pane

0xaf3d,	// (0x0002757c) midp_editing_number_pane_ParamLimits

0xaf4c,	// (0x0002758b) midp_ticker_pane_ParamLimits

0xbbf0,	// (0x0002822f) form2_midp_field_pane

0xbc14,	// (0x00028253) scroll_pane_cp51

0xbc34,	// (0x00028273) form2_midp_button_pane_ParamLimits

0xbc34,	// (0x00028273) form2_midp_button_pane

0xbc46,	// (0x00028285) form2_midp_content_pane_ParamLimits

0xbc46,	// (0x00028285) form2_midp_content_pane

0xbc60,	// (0x0002829f) form2_midp_field_choice_group_pane

0xbc68,	// (0x000282a7) form2_midp_field_pane_g1

0xbc70,	// (0x000282af) form2_midp_field_pane_g2

0xbc78,	// (0x000282b7) form2_midp_field_pane_g3

0xbc80,	// (0x000282bf) form2_midp_field_pane_g4

0x0003,

0xfac2,	// (0x0002c101) form2_midp_field_pane_g

0xbc88,	// (0x000282c7) form2_midp_gauge_slider_pane

0xbc90,	// (0x000282cf) form2_midp_gauge_wait_pane

0xbc98,	// (0x000282d7) form2_midp_image_pane_ParamLimits

0xbc98,	// (0x000282d7) form2_midp_image_pane

0xbcb3,	// (0x000282f2) form2_midp_label_pane_ParamLimits

0xbcb3,	// (0x000282f2) form2_midp_label_pane

0xbccc,	// (0x0002830b) form2_midp_label_pane_cp_ParamLimits

0xbccc,	// (0x0002830b) form2_midp_label_pane_cp

0xbced,	// (0x0002832c) form2_midp_string_pane_ParamLimits

0xbced,	// (0x0002832c) form2_midp_string_pane

0x524b,	// (0x0002188a) form2_midp_text_pane_ParamLimits

0x524b,	// (0x0002188a) form2_midp_text_pane

0xbcff,	// (0x0002833e) form2_midp_time_pane

0xbd0f,	// (0x0002834e) input_focus_pane_cp51_ParamLimits

0xbd0f,	// (0x0002834e) input_focus_pane_cp51

0xbd27,	// (0x00028366) form2_midp_label_pane_t1_ParamLimits

0xbd27,	// (0x00028366) form2_midp_label_pane_t1

0x5266,	// (0x000218a5) form2_mdip_text_pane_t1_ParamLimits

0x5266,	// (0x000218a5) form2_mdip_text_pane_t1

0x5284,	// (0x000218c3) form2_midp_time_pane_t1

0xbd70,	// (0x000283af) form2_midp_gauge_slider_pane_t1

0xbd82,	// (0x000283c1) form2_midp_gauge_slider_pane_t2

0xbd94,	// (0x000283d3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacb,	// (0x0002c10a) form2_midp_gauge_slider_pane_t

0xbda6,	// (0x000283e5) form2_midp_slider_pane

0xbdb2,	// (0x000283f1) form2_midp_gauge_wait_pane_t1

0xbdc0,	// (0x000283ff) form2_midp_wait_pane_ParamLimits

0xbdc0,	// (0x000283ff) form2_midp_wait_pane

0xbdeb,	// (0x0002842a) list_single_2graphic_pane_cp4_ParamLimits

0xbdeb,	// (0x0002842a) list_single_2graphic_pane_cp4

0x9b2b,	// (0x0002616a) list_single_midp_graphic_pane_cp_ParamLimits

0x9b2b,	// (0x0002616a) list_single_midp_graphic_pane_cp

0x2e2d,	// (0x0001f46c) list_highlight_pane_cp20

0xbe0f,	// (0x0002844e) list_single_2graphic_pane_g1_cp4

0xbe17,	// (0x00028456) list_single_2graphic_pane_g2_cp4

0xbe1f,	// (0x0002845e) list_single_2graphic_pane_t1_cp4

0x7c3c,	// (0x0002427b) list_highlight_pane_cp21

0xbe2e,	// (0x0002846d) list_single_midp_graphic_pane_g4_cp

0xbe3d,	// (0x0002847c) list_single_midp_graphic_pane_t1_cp

0xbe52,	// (0x00028491) form2_mdip_string_pane_t1_ParamLimits

0xbe52,	// (0x00028491) form2_mdip_string_pane_t1

0x2e2d,	// (0x0001f46c) bg_wml_button_pane_cp2

0x2e23,	// (0x0001f462) form2_midp_image_pane_g1

0x474a,	// (0x00020d89) list_double_large_graphic_pane_g5_ParamLimits

0x474a,	// (0x00020d89) list_double_large_graphic_pane_g5

0x9197,	// (0x000257d6) midp_form_pane_ParamLimits

0x7c3c,	// (0x0002427b) main_apps_wheel_pane_ParamLimits

0x6440,	// (0x00022a7f) popup_preview_window_ParamLimits

0x6440,	// (0x00022a7f) popup_preview_window

0x65fb,	// (0x00022c3a) popup_touch_info_window_ParamLimits

0x65fb,	// (0x00022c3a) popup_touch_info_window

0x6619,	// (0x00022c58) popup_touch_menu_window_ParamLimits

0x6619,	// (0x00022c58) popup_touch_menu_window

0x2e19,	// (0x0001f458) bg_popup_sub_pane_cp6

0xbf4b,	// (0x0002858a) list_touch_menu_pane

0xbf53,	// (0x00028592) list_single_touch_menu_pane_ParamLimits

0xbf53,	// (0x00028592) list_single_touch_menu_pane

0xbf69,	// (0x000285a8) list_single_touch_menu_pane_t1

0x7c3c,	// (0x0002427b) bg_popup_sub_pane_cp7_ParamLimits

0x7c3c,	// (0x0002427b) bg_popup_sub_pane_cp7

0x9e3d,	// (0x0002647c) heading_sub_pane

0xbf77,	// (0x000285b6) list_touch_info_pane_ParamLimits

0xbf77,	// (0x000285b6) list_touch_info_pane

0xbf87,	// (0x000285c6) list_single_touch_info_pane_ParamLimits

0xbf87,	// (0x000285c6) list_single_touch_info_pane

0xbf99,	// (0x000285d8) list_single_touch_info_pane_t1

0xbfa7,	// (0x000285e6) list_single_touch_info_pane_t2

0x0001,

0xfad9,	// (0x0002c118) list_single_touch_info_pane_t

0x918f,	// (0x000257ce) bg_popup_heading_pane_cp

0xbfb5,	// (0x000285f4) heading_sub_pane_t1

0x9a51,	// (0x00026090) bg_popup_preview_window_pane_cp_ParamLimits

0x9a51,	// (0x00026090) bg_popup_preview_window_pane_cp

0x9e3d,	// (0x0002647c) heading_preview_pane

0xbf77,	// (0x000285b6) list_preview_pane_ParamLimits

0xbf77,	// (0x000285b6) list_preview_pane

0xbfc3,	// (0x00028602) popup_preview_window_g1

0xbf87,	// (0x000285c6) list_single_preview_pane_ParamLimits

0xbf87,	// (0x000285c6) list_single_preview_pane

0xbfcb,	// (0x0002860a) list_single_preview_pane_g1

0xbfd3,	// (0x00028612) list_single_preview_pane_t1

0xbf99,	// (0x000285d8) list_single_preview_pane_t2

0x0001,

0xfade,	// (0x0002c11d) list_single_preview_pane_t

0xbfe1,	// (0x00028620) bg_popup_heading_pane_cp2_ParamLimits

0xbfe1,	// (0x00028620) bg_popup_heading_pane_cp2

0xbff7,	// (0x00028636) heading_preview_pane_g1

0xbfff,	// (0x0002863e) heading_preview_pane_t1_ParamLimits

0xbfff,	// (0x0002863e) heading_preview_pane_t1

0x7d28,	// (0x00024367) soft_indicator_pane_t1_ParamLimits

0x843c,	// (0x00024a7b) scroll_pane_ParamLimits

0x8967,	// (0x00024fa6) scroll_sc2_left_pane

0x8970,	// (0x00024faf) scroll_sc2_right_pane

0x898f,	// (0x00024fce) scroll_bg_pane_g1_ParamLimits

0x89a4,	// (0x00024fe3) scroll_bg_pane_g2_ParamLimits

0x89bc,	// (0x00024ffb) scroll_bg_pane_g3_ParamLimits

0xf6bc,	// (0x0002bcfb) scroll_bg_pane_g_ParamLimits

0x898f,	// (0x00024fce) scroll_handle_pane_g1_ParamLimits

0x89de,	// (0x0002501d) scroll_handle_pane_g2_ParamLimits

0x89bc,	// (0x00024ffb) scroll_handle_pane_g3_ParamLimits

0xf6c3,	// (0x0002bd02) scroll_handle_pane_g_ParamLimits

0x60bf,	// (0x000226fe) popup_choice_list_window_ParamLimits

0x60bf,	// (0x000226fe) popup_choice_list_window

0x9927,	// (0x00025f66) choice_list_pane

0x99a9,	// (0x00025fe8) cell_toolbar_pane_t1

0x99d1,	// (0x00026010) toolbar_button_pane_ParamLimits

0xaaae,	// (0x000270ed) ai_gene_pane_1_t2_ParamLimits

0xaaae,	// (0x000270ed) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x0002bf2a) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x0002bf2a) ai_gene_pane_1_t

0xc01c,	// (0x0002865b) scroll_sc2_left_pane_g1

0xc01c,	// (0x0002865b) scroll_sc2_right_pane_g1

0x94b3,	// (0x00025af2) bg_popup_sub_pane_cp10

0xc026,	// (0x00028665) list_choice_list_pane

0xc03f,	// (0x0002867e) list_single_choice_list_pane_ParamLimits

0xc03f,	// (0x0002867e) list_single_choice_list_pane

0xc052,	// (0x00028691) list_single_choice_list_pane_g1

0x866d,	// (0x00024cac) list_single_choice_list_pane_t1_ParamLimits

0x866d,	// (0x00024cac) list_single_choice_list_pane_t1

0xc05a,	// (0x00028699) choice_list_pane_g1

0xc062,	// (0x000286a1) choice_list_pane_t1

0x2e19,	// (0x0001f458) input_focus_pane_cp11

0x8844,	// (0x00024e83) title_pane_stacon_g2_ParamLimits

0x8844,	// (0x00024e83) title_pane_stacon_g2

0x0002,

0xf6a2,	// (0x0002bce1) title_pane_stacon_g_ParamLimits

0xf6a2,	// (0x0002bce1) title_pane_stacon_g

0x918f,	// (0x000257ce) cursor_press_pane

0x616b,	// (0x000227aa) popup_fep_hwr_window_ParamLimits

0x616b,	// (0x000227aa) popup_fep_hwr_window

0x61e5,	// (0x00022824) popup_fep_vkb_window_ParamLimits

0x61e5,	// (0x00022824) popup_fep_vkb_window

0xc070,	// (0x000286af) cursor_press_pane_g1

0x0002,

0xfb07,	// (0x0002c146) fep_vkb_side_pane_g_ParamLimits

0x6b07,	// (0x00023146) fep_hwr_candidate_pane_ParamLimits

0x6b07,	// (0x00023146) fep_hwr_candidate_pane

0x6b31,	// (0x00023170) fep_hwr_side_pane_ParamLimits

0x6b31,	// (0x00023170) fep_hwr_side_pane

0x6b51,	// (0x00023190) fep_hwr_top_pane_ParamLimits

0x6b51,	// (0x00023190) fep_hwr_top_pane

0x6b69,	// (0x000231a8) fep_hwr_write_pane_ParamLimits

0x6b69,	// (0x000231a8) fep_hwr_write_pane

0xfb07,	// (0x0002c146) fep_vkb_side_pane_g

0xc078,	// (0x000286b7) fep_hwr_top_pane_g1

0xc08a,	// (0x000286c9) fep_hwr_top_pane_g2

0x6b95,	// (0x000231d4) fep_hwr_top_pane_g3

0x0002,

0xfae3,	// (0x0002c122) fep_hwr_top_pane_g

0x6baa,	// (0x000231e9) fep_hwr_top_text_pane

0x8b5e,	// (0x0002519d) fep_hwr_top_text_pane_g1

0xc0c0,	// (0x000286ff) fep_hwr_top_text_pane_t1

0x6ca0,	// (0x000232df) fep_hwr_candidate_pane_g1

0xc313,	// (0x00028952) fep_vkb_keypad_pane_g3_ParamLimits

0xc313,	// (0x00028952) fep_vkb_keypad_pane_g3

0xc33b,	// (0x0002897a) fep_vkb_keypad_pane_g4_ParamLimits

0xc33b,	// (0x0002897a) fep_vkb_keypad_pane_g4

0xc3aa,	// (0x000289e9) fep_vkb_bottom_pane_g2_ParamLimits

0xc3aa,	// (0x000289e9) fep_vkb_bottom_pane_g2

0x0001,

0xfb0e,	// (0x0002c14d) fep_vkb_bottom_pane_g_ParamLimits

0xfb0e,	// (0x0002c14d) fep_vkb_bottom_pane_g

0xc01c,	// (0x0002865b) cell_vkb_side_pane_g2

0x0001,

0xfb18,	// (0x0002c157) cell_vkb_side_pane_g

0xc435,	// (0x00028a74) cell_vkb_side_pane_t1

0xc443,	// (0x00028a82) cell_vkb_side_pane_t1_copy1

0xc01c,	// (0x0002865b) bg_fep_vkb_candidate_pane_g2

0xc56f,	// (0x00028bae) cell_vkb_candidate_pane_ParamLimits

0xc0ce,	// (0x0002870d) aid_size_cell_vkb_ParamLimits

0xc0ce,	// (0x0002870d) aid_size_cell_vkb

0xc56f,	// (0x00028bae) cell_vkb_candidate_pane

0x6cba,	// (0x000232f9) bg_popup_fep_shadow_pane_g1

0xc15c,	// (0x0002879b) fep_vkb_bottom_pane_ParamLimits

0xc15c,	// (0x0002879b) fep_vkb_bottom_pane

0xc192,	// (0x000287d1) fep_vkb_candidate_pane_ParamLimits

0xc192,	// (0x000287d1) fep_vkb_candidate_pane

0xc1ae,	// (0x000287ed) fep_vkb_keypad_pane_ParamLimits

0xc1ae,	// (0x000287ed) fep_vkb_keypad_pane

0xc1f4,	// (0x00028833) fep_vkb_side_pane_ParamLimits

0xc1f4,	// (0x00028833) fep_vkb_side_pane

0xc230,	// (0x0002886f) fep_vkb_top_pane_ParamLimits

0xc230,	// (0x0002886f) fep_vkb_top_pane

0xc26c,	// (0x000288ab) fep_vkb_top_pane_g1_ParamLimits

0xc26c,	// (0x000288ab) fep_vkb_top_pane_g1

0xc27b,	// (0x000288ba) fep_vkb_top_pane_g2_ParamLimits

0xc27b,	// (0x000288ba) fep_vkb_top_pane_g2

0xc28a,	// (0x000288c9) fep_vkb_top_pane_g3_ParamLimits

0xc28a,	// (0x000288c9) fep_vkb_top_pane_g3

0x0003,

0xfafe,	// (0x0002c13d) fep_vkb_top_pane_g_ParamLimits

0xfafe,	// (0x0002c13d) fep_vkb_top_pane_g

0xc2a8,	// (0x000288e7) fep_vkb_top_text_pane_ParamLimits

0xc2a8,	// (0x000288e7) fep_vkb_top_text_pane

0xc2b9,	// (0x000288f8) fep_vkb_side_pane_g1_ParamLimits

0xc2b9,	// (0x000288f8) fep_vkb_side_pane_g1

0xc302,	// (0x00028941) grid_vkb_side_pane_ParamLimits

0xc302,	// (0x00028941) grid_vkb_side_pane

0x6cc2,	// (0x00023301) bg_popup_fep_shadow_pane_g2

0x6ccb,	// (0x0002330a) bg_popup_fep_shadow_pane_g3

0x6cd3,	// (0x00023312) bg_popup_fep_shadow_pane_g4

0x6cdc,	// (0x0002331b) bg_popup_fep_shadow_pane_g5

0x6ce6,	// (0x00023325) bg_popup_fep_shadow_pane_g6

0x6cee,	// (0x0002332d) bg_popup_fep_shadow_pane_g7

0x8541,	// (0x00024b80) bg_popup_fep_shadow_pane_g8

0xc359,	// (0x00028998) grid_vkb_keypad_number_pane_ParamLimits

0xc359,	// (0x00028998) grid_vkb_keypad_number_pane

0xc369,	// (0x000289a8) grid_vkb_keypad_pane_ParamLimits

0xc369,	// (0x000289a8) grid_vkb_keypad_pane

0xc38f,	// (0x000289ce) fep_vkb_bottom_pane_g1_ParamLimits

0xc38f,	// (0x000289ce) fep_vkb_bottom_pane_g1

0xc3b8,	// (0x000289f7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3b8,	// (0x000289f7) grid_vkb_keypad_bottom_left_pane

0xc3cd,	// (0x00028a0c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3cd,	// (0x00028a0c) grid_vkb_keypad_bottom_right_pane

0xc3e2,	// (0x00028a21) fep_vkb_top_text_pane_g1

0xc3fd,	// (0x00028a3c) fep_vkb_top_text_pane_t1

0xc412,	// (0x00028a51) cell_vkb_side_pane_ParamLimits

0xc412,	// (0x00028a51) cell_vkb_side_pane

0xc01c,	// (0x0002865b) cell_vkb_side_pane_g1

0xc451,	// (0x00028a90) cell_vkb_keypad_pane_ParamLimits

0xc451,	// (0x00028a90) cell_vkb_keypad_pane

0xc4c6,	// (0x00028b05) cell_vkb_keypad_pane_g1

0x0008,

0xfb2b,	// (0x0002c16a) bg_popup_fep_shadow_pane_g

0xc01c,	// (0x0002865b) cell_hwr_side_pane_g1

0xc01c,	// (0x0002865b) cell_hwr_side_pane_g2

0xc4d0,	// (0x00028b0f) cell_vkb_keypad_pane_t1

0xc4de,	// (0x00028b1d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4de,	// (0x00028b1d) cell_vkb_keypad_bottom_left_pane

0xc4fb,	// (0x00028b3a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4fb,	// (0x00028b3a) cell_vkb_keypad_bottom_right_pane

0xc01c,	// (0x0002865b) cell_vkb_keypad_bottom_left_pane_g1

0xc01c,	// (0x0002865b) cell_vkb_keypad_bottom_right_pane_g1

0xc534,	// (0x00028b73) cell_vkb_keypad_number_pane_ParamLimits

0xc534,	// (0x00028b73) cell_vkb_keypad_number_pane

0xc553,	// (0x00028b92) cell_vkb_keypad_number_pane_g1

0xc55d,	// (0x00028b9c) cell_vkb_keypad_number_pane_g2

0xc566,	// (0x00028ba5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1d,	// (0x0002c15c) cell_vkb_keypad_number_pane_g

0xc4d0,	// (0x00028b0f) cell_vkb_keypad_number_pane_t1

0xc58a,	// (0x00028bc9) fep_vkb_candidate_pane_g1

0x0001,

0xfb18,	// (0x0002c157) cell_hwr_side_pane_g

0xc5a3,	// (0x00028be2) cell_hwr_side_pane_t1

0x6d00,	// (0x0002333f) cell_hwr_side_pane_t1_copy1

0xc29a,	// (0x000288d9) cell_hwr_candidate_pane_g1

0x6d0e,	// (0x0002334d) cell_hwr_candidate_pane_t1

0xc01c,	// (0x0002865b) cell_vkb_candidate_pane_g2

0xc5e7,	// (0x00028c26) cell_vkb_candidate_pane_t1

0x6ace,	// (0x0002310d) bg_popup_fep_shadow_pane_ParamLimits

0x6ace,	// (0x0002310d) bg_popup_fep_shadow_pane

0x1d1b,	// (0x0001e35a) bg_fep_hwr_top_pane_g4

0xc09c,	// (0x000286db) bg_hwr_side_pane_g1_ParamLimits

0xc09c,	// (0x000286db) bg_hwr_side_pane_g1

0x6be6,	// (0x00023225) cell_hwr_side_pane_ParamLimits

0x6be6,	// (0x00023225) cell_hwr_side_pane

0x6c21,	// (0x00023260) fep_hwr_write_pane_g1_ParamLimits

0x6c21,	// (0x00023260) fep_hwr_write_pane_g1

0x6c2e,	// (0x0002326d) fep_hwr_write_pane_g2_ParamLimits

0x6c2e,	// (0x0002326d) fep_hwr_write_pane_g2

0x6c3b,	// (0x0002327a) fep_hwr_write_pane_g3_ParamLimits

0x6c3b,	// (0x0002327a) fep_hwr_write_pane_g3

0x6c49,	// (0x00023288) fep_hwr_write_pane_g4_ParamLimits

0x6c49,	// (0x00023288) fep_hwr_write_pane_g4

0x0005,

0xfaea,	// (0x0002c129) fep_hwr_write_pane_g_ParamLimits

0xfaea,	// (0x0002c129) fep_hwr_write_pane_g

0x1d1b,	// (0x0001e35a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1d1b,	// (0x0001e35a) bg_fep_hwr_candidate_pane_g2

0x6c5e,	// (0x0002329d) cell_hwr_candidate_pane_ParamLimits

0x6c5e,	// (0x0002329d) cell_hwr_candidate_pane

0x6ca0,	// (0x000232df) fep_hwr_candidate_pane_g1_ParamLimits

0xc0fc,	// (0x0002873b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0fc,	// (0x0002873b) bg_popup_fep_shadow_pane_cp2

0xc29a,	// (0x000288d9) fep_vkb_top_pane_g4_ParamLimits

0xc29a,	// (0x000288d9) fep_vkb_top_pane_g4

0xc2e0,	// (0x0002891f) fep_vkb_side_pane_g2_ParamLimits

0xc2e0,	// (0x0002891f) fep_vkb_side_pane_g2

0x488d,	// (0x00020ecc) list_setting_pane_t4_ParamLimits

0x488d,	// (0x00020ecc) list_setting_pane_t4

0x4927,	// (0x00020f66) list_setting_number_pane_t5_ParamLimits

0x4927,	// (0x00020f66) list_setting_number_pane_t5

0x8ba5,	// (0x000251e4) list_double_heading_pane_cp2_ParamLimits

0x8ba5,	// (0x000251e4) list_double_heading_pane_cp2

0x84d7,	// (0x00024b16) list_double_heading_pane_g1_cp2_ParamLimits

0x84d7,	// (0x00024b16) list_double_heading_pane_g1_cp2

0x84e3,	// (0x00024b22) list_double_heading_pane_g2_cp2_ParamLimits

0x84e3,	// (0x00024b22) list_double_heading_pane_g2_cp2

0xc5f5,	// (0x00028c34) list_double_heading_pane_t1_cp2_ParamLimits

0xc5f5,	// (0x00028c34) list_double_heading_pane_t1_cp2

0xc60b,	// (0x00028c4a) list_double_heading_pane_t2_cp2_ParamLimits

0xc60b,	// (0x00028c4a) list_double_heading_pane_t2_cp2

0x2e11,	// (0x0001f450) aid_value_unit2

0x5905,	// (0x00021f44) popup_preview_fixed_window

0x7ec5,	// (0x00024504) bg_popup_preview_window_pane_cp02

0xc61d,	// (0x00028c5c) list_preview_fixed_pane

0xc663,	// (0x00028ca2) list_empty_pane_fp_ParamLimits

0xc663,	// (0x00028ca2) list_empty_pane_fp

0xc663,	// (0x00028ca2) list_single_cale_day_pane_fp_ParamLimits

0xc663,	// (0x00028ca2) list_single_cale_day_pane_fp

0xc663,	// (0x00028ca2) list_single_graphic_heading_pane_fp_ParamLimits

0xc663,	// (0x00028ca2) list_single_graphic_heading_pane_fp

0xc663,	// (0x00028ca2) list_single_graphic_pane_fp_ParamLimits

0xc663,	// (0x00028ca2) list_single_graphic_pane_fp

0xc663,	// (0x00028ca2) list_single_heading_pane_fp_ParamLimits

0xc663,	// (0x00028ca2) list_single_heading_pane_fp

0xc663,	// (0x00028ca2) list_single_pane_fp_ParamLimits

0xc663,	// (0x00028ca2) list_single_pane_fp

0xc678,	// (0x00028cb7) list_single_pane_fp_g1_ParamLimits

0xc678,	// (0x00028cb7) list_single_pane_fp_g1

0x5297,	// (0x000218d6) list_single_pane_fp_g2_ParamLimits

0x5297,	// (0x000218d6) list_single_pane_fp_g2

0x52a3,	// (0x000218e2) list_single_pane_fp_g3_ParamLimits

0x52a3,	// (0x000218e2) list_single_pane_fp_g3

0xc684,	// (0x00028cc3) list_single_pane_fp_g4_ParamLimits

0xc684,	// (0x00028cc3) list_single_pane_fp_g4

0x0003,

0xfb4c,	// (0x0002c18b) list_single_pane_fp_g_ParamLimits

0xfb4c,	// (0x0002c18b) list_single_pane_fp_g

0x52b7,	// (0x000218f6) list_single_pane_fp_t1_ParamLimits

0x52b7,	// (0x000218f6) list_single_pane_fp_t1

0x52ce,	// (0x0002190d) list_single_graphic_pane_fp_g1_ParamLimits

0x52ce,	// (0x0002190d) list_single_graphic_pane_fp_g1

0xc678,	// (0x00028cb7) list_single_graphic_pane_fp_g2_ParamLimits

0xc678,	// (0x00028cb7) list_single_graphic_pane_fp_g2

0x5297,	// (0x000218d6) list_single_graphic_pane_fp_g3_ParamLimits

0x5297,	// (0x000218d6) list_single_graphic_pane_fp_g3

0x52a3,	// (0x000218e2) list_single_graphic_pane_fp_g4_ParamLimits

0x52a3,	// (0x000218e2) list_single_graphic_pane_fp_g4

0xc684,	// (0x00028cc3) list_single_graphic_pane_fp_g5_ParamLimits

0xc684,	// (0x00028cc3) list_single_graphic_pane_fp_g5

0x0004,

0xfb55,	// (0x0002c194) list_single_graphic_pane_fp_g_ParamLimits

0xfb55,	// (0x0002c194) list_single_graphic_pane_fp_g

0x52da,	// (0x00021919) list_single_graphic_pane_fp_t1_ParamLimits

0x52da,	// (0x00021919) list_single_graphic_pane_fp_t1

0x52ce,	// (0x0002190d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x52ce,	// (0x0002190d) list_single_graphic_heading_pane_fp_g1

0xc678,	// (0x00028cb7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc678,	// (0x00028cb7) list_single_graphic_heading_pane_fp_g2

0x5297,	// (0x000218d6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5297,	// (0x000218d6) list_single_graphic_heading_pane_fp_g3

0x52a3,	// (0x000218e2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x52a3,	// (0x000218e2) list_single_graphic_heading_pane_fp_g4

0xc684,	// (0x00028cc3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc684,	// (0x00028cc3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb55,	// (0x0002c194) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb55,	// (0x0002c194) list_single_graphic_heading_pane_fp_g

0x52f0,	// (0x0002192f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x52f0,	// (0x0002192f) list_single_graphic_heading_pane_fp_t1

0x5306,	// (0x00021945) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5306,	// (0x00021945) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb60,	// (0x0002c19f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb60,	// (0x0002c19f) list_single_graphic_heading_pane_fp_t

0x5318,	// (0x00021957) list_single_cale_day_pane_fp_g1_ParamLimits

0x5318,	// (0x00021957) list_single_cale_day_pane_fp_g1

0xc690,	// (0x00028ccf) list_single_cale_day_pane_fp_g2_ParamLimits

0xc690,	// (0x00028ccf) list_single_cale_day_pane_fp_g2

0x5350,	// (0x0002198f) list_single_cale_day_pane_fp_g3_ParamLimits

0x5350,	// (0x0002198f) list_single_cale_day_pane_fp_g3

0x5378,	// (0x000219b7) list_single_cale_day_pane_fp_g4_ParamLimits

0x5378,	// (0x000219b7) list_single_cale_day_pane_fp_g4

0x539c,	// (0x000219db) list_single_cale_day_pane_fp_g5_ParamLimits

0x539c,	// (0x000219db) list_single_cale_day_pane_fp_g5

0x0004,

0xfb65,	// (0x0002c1a4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb65,	// (0x0002c1a4) list_single_cale_day_pane_fp_g

0x53c0,	// (0x000219ff) list_single_cale_day_pane_fp_t1_ParamLimits

0x53c0,	// (0x000219ff) list_single_cale_day_pane_fp_t1

0x53e6,	// (0x00021a25) list_single_cale_day_pane_fp_t2_ParamLimits

0x53e6,	// (0x00021a25) list_single_cale_day_pane_fp_t2

0x53ff,	// (0x00021a3e) list_single_cale_day_pane_fp_t3_ParamLimits

0x53ff,	// (0x00021a3e) list_single_cale_day_pane_fp_t3

0x0002,

0xfb70,	// (0x0002c1af) list_single_cale_day_pane_fp_t_ParamLimits

0xfb70,	// (0x0002c1af) list_single_cale_day_pane_fp_t

0xc678,	// (0x00028cb7) list_empty_pane_fp_g1_ParamLimits

0xc678,	// (0x00028cb7) list_empty_pane_fp_g1

0x5418,	// (0x00021a57) list_empty_pane_fp_t1

0x5426,	// (0x00021a65) list_empty_pane_fp_t2

0x0001,

0xfb77,	// (0x0002c1b6) list_empty_pane_fp_t

0xc678,	// (0x00028cb7) list_single_heading_pane_fp_g1_ParamLimits

0xc678,	// (0x00028cb7) list_single_heading_pane_fp_g1

0x5297,	// (0x000218d6) list_single_heading_pane_fp_g2_ParamLimits

0x5297,	// (0x000218d6) list_single_heading_pane_fp_g2

0x52a3,	// (0x000218e2) list_single_heading_pane_fp_g3_ParamLimits

0x52a3,	// (0x000218e2) list_single_heading_pane_fp_g3

0x0002,

0xfb7c,	// (0x0002c1bb) list_single_heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x0002c1bb) list_single_heading_pane_fp_g

0x5434,	// (0x00021a73) list_single_heading_pane_fp_t1_ParamLimits

0x5434,	// (0x00021a73) list_single_heading_pane_fp_t1

0x5446,	// (0x00021a85) list_single_heading_pane_fp_t2_ParamLimits

0x5446,	// (0x00021a85) list_single_heading_pane_fp_t2

0x0001,

0xfb83,	// (0x0002c1c2) list_single_heading_pane_fp_t_ParamLimits

0xfb83,	// (0x0002c1c2) list_single_heading_pane_fp_t

0x86db,	// (0x00024d1a) aid_size_cell_fast

0x7e35,	// (0x00024474) soft_indicator_pane_cp1_t1

0x8718,	// (0x00024d57) cell_app_pane_cp2_ParamLimits

0x8718,	// (0x00024d57) cell_app_pane_cp2

0x6af0,	// (0x0002312f) fep_hwr_candidate_drop_down_list_pane

0x1d29,	// (0x0001e368) fep_hwr_candidate_pane_g3_ParamLimits

0x1d29,	// (0x0001e368) fep_hwr_candidate_pane_g3

0x1d36,	// (0x0001e375) fep_hwr_candidate_pane_g4_ParamLimits

0x1d36,	// (0x0001e375) fep_hwr_candidate_pane_g4

0x0002,

0xfaf7,	// (0x0002c136) fep_hwr_candidate_pane_g_ParamLimits

0xfaf7,	// (0x0002c136) fep_hwr_candidate_pane_g

0xc181,	// (0x000287c0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc181,	// (0x000287c0) fep_vkb_candidate_drop_down_list_pane

0xc592,	// (0x00028bd1) fep_vkb_candidate_pane_g3

0xc59a,	// (0x00028bd9) fep_vkb_candidate_pane_g4

0x0002,

0xfb24,	// (0x0002c163) fep_vkb_candidate_pane_g

0xc29a,	// (0x000288d9) cell_hwr_candidate_pane_g1_ParamLimits

0xc69c,	// (0x00028cdb) cell_hwr_candidate_pane_g3_ParamLimits

0xc69c,	// (0x00028cdb) cell_hwr_candidate_pane_g3

0xc6bd,	// (0x00028cfc) cell_hwr_candidate_pane_g4_ParamLimits

0xc6bd,	// (0x00028cfc) cell_hwr_candidate_pane_g4

0x0002,

0xfb3e,	// (0x0002c17d) cell_hwr_candidate_pane_g_ParamLimits

0xfb3e,	// (0x0002c17d) cell_hwr_candidate_pane_g

0xc5b1,	// (0x00028bf0) cell_vkb_candidate_pane_g3_ParamLimits

0xc5b1,	// (0x00028bf0) cell_vkb_candidate_pane_g3

0xc5cc,	// (0x00028c0b) cell_vkb_candidate_pane_g4_ParamLimits

0xc5cc,	// (0x00028c0b) cell_vkb_candidate_pane_g4

0xc6de,	// (0x00028d1d) cell_app_pane_cp2_g1_ParamLimits

0xc6de,	// (0x00028d1d) cell_app_pane_cp2_g1

0xc6fc,	// (0x00028d3b) cell_app_pane_cp2_g2_ParamLimits

0xc6fc,	// (0x00028d3b) cell_app_pane_cp2_g2

0x0001,

0xfb88,	// (0x0002c1c7) cell_app_pane_cp2_g_ParamLimits

0xfb88,	// (0x0002c1c7) cell_app_pane_cp2_g

0xc708,	// (0x00028d47) cell_app_pane_cp2_t1_ParamLimits

0xc708,	// (0x00028d47) cell_app_pane_cp2_t1

0x84c9,	// (0x00024b08) grid_highlight_pane_cp1_ParamLimits

0x84c9,	// (0x00024b08) grid_highlight_pane_cp1

0x6d2c,	// (0x0002336b) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d2c,	// (0x0002336b) cell_hwr_candidate_pane_cp1

0xc29a,	// (0x000288d9) fep_hwr_candidate_drop_down_list_pane_g1

0xc71a,	// (0x00028d59) fep_hwr_candidate_drop_down_list_pane_g2

0xc727,	// (0x00028d66) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8d,	// (0x0002c1cc) fep_hwr_candidate_drop_down_list_pane_g

0x6d4b,	// (0x0002338a) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d54,	// (0x00023393) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d54,	// (0x00023393) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d61,	// (0x000233a0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d61,	// (0x000233a0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d6e,	// (0x000233ad) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d6e,	// (0x000233ad) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5b1,	// (0x00028bf0) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5b1,	// (0x00028bf0) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5cc,	// (0x00028c0b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5cc,	// (0x00028c0b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d7b,	// (0x000233ba) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d7b,	// (0x000233ba) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6d96,	// (0x000233d5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6d96,	// (0x000233d5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6db1,	// (0x000233f0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6db1,	// (0x000233f0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb94,	// (0x0002c1d3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb94,	// (0x0002c1d3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc734,	// (0x00028d73) cell_vkb_candidate_pane_cp1_ParamLimits

0xc734,	// (0x00028d73) cell_vkb_candidate_pane_cp1

0xc29a,	// (0x000288d9) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc29a,	// (0x000288d9) fep_vkb_candidate_drop_down_list_pane_g1

0xc71a,	// (0x00028d59) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc71a,	// (0x00028d59) fep_vkb_candidate_drop_down_list_pane_g2

0xc727,	// (0x00028d66) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc727,	// (0x00028d66) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8d,	// (0x0002c1cc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8d,	// (0x0002c1cc) fep_vkb_candidate_drop_down_list_pane_g

0xc754,	// (0x00028d93) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc754,	// (0x00028d93) fep_vkb_candidate_drop_down_list_scroll_pane

0xc761,	// (0x00028da0) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc761,	// (0x00028da0) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc76e,	// (0x00028dad) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc76e,	// (0x00028dad) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc77a,	// (0x00028db9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc77a,	// (0x00028db9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc69c,	// (0x00028cdb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc69c,	// (0x00028cdb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc6bd,	// (0x00028cfc) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6bd,	// (0x00028cfc) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc786,	// (0x00028dc5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc786,	// (0x00028dc5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7a7,	// (0x00028de6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7a7,	// (0x00028de6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7c8,	// (0x00028e07) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7c8,	// (0x00028e07) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba5,	// (0x0002c1e4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba5,	// (0x0002c1e4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b66,	// (0x000241a5) title_pane_g1_ParamLimits

0x7b73,	// (0x000241b2) title_pane_g2_ParamLimits

0xf527,	// (0x0002bb66) title_pane_g_ParamLimits

0x8b4e,	// (0x0002518d) aid_call2_pane

0x8b56,	// (0x00025195) aid_call_pane

0x8b5e,	// (0x0002519d) popup_clock_analogue_window_g1

0x8b5e,	// (0x0002519d) popup_clock_analogue_window_g2

0x5c76,	// (0x000222b5) popup_clock_analogue_window_g3

0x5c7f,	// (0x000222be) popup_clock_analogue_window_g4

0x2e23,	// (0x0001f462) popup_clock_analogue_window_g5

0x0004,

0xf6d1,	// (0x0002bd10) popup_clock_analogue_window_g

0x5c87,	// (0x000222c6) popup_clock_analogue_window_t1

0x5c95,	// (0x000222d4) clock_digital_number_pane_ParamLimits

0x5c95,	// (0x000222d4) clock_digital_number_pane

0x5ca1,	// (0x000222e0) clock_digital_number_pane_cp02_ParamLimits

0x5ca1,	// (0x000222e0) clock_digital_number_pane_cp02

0x5cad,	// (0x000222ec) clock_digital_number_pane_cp03_ParamLimits

0x5cad,	// (0x000222ec) clock_digital_number_pane_cp03

0x5cb9,	// (0x000222f8) clock_digital_number_pane_cp04_ParamLimits

0x5cb9,	// (0x000222f8) clock_digital_number_pane_cp04

0x5cc5,	// (0x00022304) clock_digital_separator_pane_ParamLimits

0x5cc5,	// (0x00022304) clock_digital_separator_pane

0x5cd1,	// (0x00022310) popup_clock_digital_window_t1_ParamLimits

0x5cd1,	// (0x00022310) popup_clock_digital_window_t1

0x2e23,	// (0x0001f462) clock_digital_number_pane_g1

0x2e23,	// (0x0001f462) clock_digital_number_pane_g2

0x0001,

0xf6dc,	// (0x0002bd1b) clock_digital_number_pane_g

0x2e23,	// (0x0001f462) clock_digital_separator_pane_g1

0x2e23,	// (0x0001f462) clock_digital_separator_pane_g2

0x0001,

0xf6dc,	// (0x0002bd1b) clock_digital_separator_pane_g

0x94ef,	// (0x00025b2e) aid_fill_nsta_ParamLimits

0x963b,	// (0x00025c7a) indicator_nsta_pane_ParamLimits

0x97b4,	// (0x00025df3) popup_clock_analogue_window

0x97b4,	// (0x00025df3) popup_clock_digital_window

0xb9fe,	// (0x0002803d) grid_indicator_nsta_pane_ParamLimits

0xba27,	// (0x00028066) clock_nsta_pane_t2

0x0001,

0xfa77,	// (0x0002c0b6) clock_nsta_pane_t

0x5c3a,	// (0x00022279) aid_size_max_handle

0x5c44,	// (0x00022283) aid_size_min_handle

0x918f,	// (0x000257ce) editor_scroll_pane

0xc7e3,	// (0x00028e22) ex_editor_pane

0x8649,	// (0x00024c88) scroll_pane_cp13

0x8468,	// (0x00024aa7) scroll_pane_cp14

0x8b8d,	// (0x000251cc) scroll_pane_cp36

0x8bb9,	// (0x000251f8) list_single_graphic_hl_pane_cp2_ParamLimits

0x8bb9,	// (0x000251f8) list_single_graphic_hl_pane_cp2

0xaf9e,	// (0x000275dd) list_single_graphic_hl_pane_ParamLimits

0xaf9e,	// (0x000275dd) list_single_graphic_hl_pane

0x545c,	// (0x00021a9b) aid_size_min_hl_cp1

0xc7eb,	// (0x00028e2a) list_highlight_pane_cp34_ParamLimits

0xc7eb,	// (0x00028e2a) list_highlight_pane_cp34

0xc7fc,	// (0x00028e3b) list_single_graphic_hl_pane_g1_ParamLimits

0xc7fc,	// (0x00028e3b) list_single_graphic_hl_pane_g1

0x5465,	// (0x00021aa4) list_single_graphic_hl_pane_g2_ParamLimits

0x5465,	// (0x00021aa4) list_single_graphic_hl_pane_g2

0x5465,	// (0x00021aa4) list_single_graphic_hl_pane_g3_ParamLimits

0x5465,	// (0x00021aa4) list_single_graphic_hl_pane_g3

0x5471,	// (0x00021ab0) list_single_graphic_hl_pane_g4_ParamLimits

0x5471,	// (0x00021ab0) list_single_graphic_hl_pane_g4

0x547d,	// (0x00021abc) list_single_graphic_hl_pane_g5_ParamLimits

0x547d,	// (0x00021abc) list_single_graphic_hl_pane_g5

0x0004,

0xfbb6,	// (0x0002c1f5) list_single_graphic_hl_pane_g_ParamLimits

0xfbb6,	// (0x0002c1f5) list_single_graphic_hl_pane_g

0x5491,	// (0x00021ad0) list_single_graphic_hl_pane_t1_ParamLimits

0x5491,	// (0x00021ad0) list_single_graphic_hl_pane_t1

0xc809,	// (0x00028e48) aid_size_min_hl_cp2

0xc812,	// (0x00028e51) list_highlight_pane_cp34_cp2_ParamLimits

0xc812,	// (0x00028e51) list_highlight_pane_cp34_cp2

0xc7fc,	// (0x00028e3b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7fc,	// (0x00028e3b) list_single_graphic_hl_pane_g1_cp2

0xc81f,	// (0x00028e5e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc81f,	// (0x00028e5e) list_single_graphic_hl_pane_g2_cp2

0xc82b,	// (0x00028e6a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc82b,	// (0x00028e6a) list_single_graphic_hl_pane_g3_cp2

0xc839,	// (0x00028e78) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc839,	// (0x00028e78) list_single_graphic_hl_pane_g4_cp2

0xc845,	// (0x00028e84) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc845,	// (0x00028e84) list_single_graphic_hl_pane_g5_cp2

0x5f85,	// (0x000225c4) control_pane_g4_ParamLimits

0x5f85,	// (0x000225c4) control_pane_g4

0x94b3,	// (0x00025af2) bg_popup_sub_pane_cp10_ParamLimits

0xc026,	// (0x00028665) list_choice_list_pane_ParamLimits

0xc035,	// (0x00028674) scroll_pane_cp23

0x7ec5,	// (0x00024504) bg_popup_preview_window_pane_cp02_ParamLimits

0xc61d,	// (0x00028c5c) list_preview_fixed_pane_ParamLimits

0xc633,	// (0x00028c72) list_preview_fixed_pane_cp_ParamLimits

0xc633,	// (0x00028c72) list_preview_fixed_pane_cp

0xc63f,	// (0x00028c7e) popup_preview_fixed_window_g1_ParamLimits

0xc63f,	// (0x00028c7e) popup_preview_fixed_window_g1

0xc64b,	// (0x00028c8a) popup_preview_fixed_window_g2_ParamLimits

0xc64b,	// (0x00028c8a) popup_preview_fixed_window_g2

0x0002,

0xfb45,	// (0x0002c184) popup_preview_fixed_window_g_ParamLimits

0xfb45,	// (0x0002c184) popup_preview_fixed_window_g

0x5bae,	// (0x000221ed) aid_navi_side_left_pane_ParamLimits

0x5bc3,	// (0x00022202) aid_navi_side_right_pane_ParamLimits

0x5bdb,	// (0x0002221a) navi_icon_pane_stacon_ParamLimits

0x5bef,	// (0x0002222e) navi_navi_pane_stacon_ParamLimits

0x5bdb,	// (0x0002221a) navi_text_pane_stacon_ParamLimits

0x2e19,	// (0x0001f458) main_text_info_pane

0xc86f,	// (0x00028eae) listscroll_text_info_pane

0xc877,	// (0x00028eb6) list_text_info_pane_ParamLimits

0xc877,	// (0x00028eb6) list_text_info_pane

0xc886,	// (0x00028ec5) scroll_pane_cp24_ParamLimits

0xc886,	// (0x00028ec5) scroll_pane_cp24

0xc8a4,	// (0x00028ee3) list_text_info_pane_t1_ParamLimits

0xc8a4,	// (0x00028ee3) list_text_info_pane_t1

0x60dd,	// (0x0002271c) popup_fast_swap2_window_ParamLimits

0x60dd,	// (0x0002271c) popup_fast_swap2_window

0xc8d5,	// (0x00028f14) aid_size_cell_fast2

0x2e19,	// (0x0001f458) bg_popup_window_pane_cp17

0x9e3d,	// (0x0002647c) heading_pane_cp2

0xc8df,	// (0x00028f1e) listscroll_fast2_pane

0xc8e7,	// (0x00028f26) grid_fast2_pane

0xc8f1,	// (0x00028f30) listscroll_fast2_pane_g1

0xc8f9,	// (0x00028f38) listscroll_fast2_pane_g2

0x0001,

0xfbc1,	// (0x0002c200) listscroll_fast2_pane_g

0x8649,	// (0x00024c88) scroll_pane_cp26

0xc903,	// (0x00028f42) cell_fast2_pane_ParamLimits

0xc903,	// (0x00028f42) cell_fast2_pane

0xc918,	// (0x00028f57) cell_fast2_pane_g1

0xc921,	// (0x00028f60) cell_fast2_pane_g2

0xc92a,	// (0x00028f69) cell_fast2_pane_g3

0x0002,

0xfbc6,	// (0x0002c205) cell_fast2_pane_g

0x8225,	// (0x00024864) grid_highlight_pane_cp9

0x823a,	// (0x00024879) main_eswt_pane_ParamLimits

0x823a,	// (0x00024879) main_eswt_pane

0xc89b,	// (0x00028eda) list_single_text_info_pane

0xc932,	// (0x00028f71) eswt_ctrl_button_pane

0xc932,	// (0x00028f71) eswt_ctrl_canvas_pane

0xc93a,	// (0x00028f79) eswt_ctrl_combo_pane

0xc932,	// (0x00028f71) eswt_ctrl_default_pane

0xc932,	// (0x00028f71) eswt_ctrl_label_pane

0xc942,	// (0x00028f81) eswt_ctrl_wait_pane

0xc94a,	// (0x00028f89) eswt_shell_pane

0x2e19,	// (0x0001f458) listscroll_eswt_app_pane

0xc96a,	// (0x00028fa9) popup_eswt_tasktip_window_ParamLimits

0xc96a,	// (0x00028fa9) popup_eswt_tasktip_window

0x9a51,	// (0x00026090) bg_popup_window_pane_cp18

0xc97b,	// (0x00028fba) eswt_control_pane_g1_ParamLimits

0xc97b,	// (0x00028fba) eswt_control_pane_g1

0xc988,	// (0x00028fc7) eswt_control_pane_g2_ParamLimits

0xc988,	// (0x00028fc7) eswt_control_pane_g2

0xc995,	// (0x00028fd4) eswt_control_pane_g3_ParamLimits

0xc995,	// (0x00028fd4) eswt_control_pane_g3

0xc9a2,	// (0x00028fe1) eswt_control_pane_g4_ParamLimits

0xc9a2,	// (0x00028fe1) eswt_control_pane_g4

0x0003,

0xfbcd,	// (0x0002c20c) eswt_control_pane_g_ParamLimits

0xfbcd,	// (0x0002c20c) eswt_control_pane_g

0x84c9,	// (0x00024b08) bg_button_pane_ParamLimits

0x84c9,	// (0x00024b08) bg_button_pane

0x823a,	// (0x00024879) common_borders_pane_copy2_ParamLimits

0x823a,	// (0x00024879) common_borders_pane_copy2

0xc9af,	// (0x00028fee) control_button_pane_g1_ParamLimits

0xc9af,	// (0x00028fee) control_button_pane_g1

0xc9bb,	// (0x00028ffa) control_button_pane_g2_ParamLimits

0xc9bb,	// (0x00028ffa) control_button_pane_g2

0xc9c7,	// (0x00029006) control_button_pane_g3_ParamLimits

0xc9c7,	// (0x00029006) control_button_pane_g3

0x0002,

0xfbd6,	// (0x0002c215) control_button_pane_g_ParamLimits

0xfbd6,	// (0x0002c215) control_button_pane_g

0xc9db,	// (0x0002901a) control_button_pane_t1

0xc9e9,	// (0x00029028) control_button_pane_t2

0x0001,

0xfbdd,	// (0x0002c21c) control_button_pane_t

0x99dd,	// (0x0002601c) bg_button_pane_g1

0x99e5,	// (0x00026024) bg_button_pane_g2

0x99ed,	// (0x0002602c) bg_button_pane_g3

0x99f5,	// (0x00026034) bg_button_pane_g4

0x99fd,	// (0x0002603c) bg_button_pane_g5

0x9a05,	// (0x00026044) bg_button_pane_g6

0x9a0d,	// (0x0002604c) bg_button_pane_g7

0x9a15,	// (0x00026054) bg_button_pane_g8

0x9a1d,	// (0x0002605c) bg_button_pane_g9

0x0008,

0xf83f,	// (0x0002be7e) bg_button_pane_g

0xbfe1,	// (0x00028620) common_borders_pane_ParamLimits

0xbfe1,	// (0x00028620) common_borders_pane

0xc97b,	// (0x00028fba) eswt_control_pane_g1_copy1_ParamLimits

0xc97b,	// (0x00028fba) eswt_control_pane_g1_copy1

0xc988,	// (0x00028fc7) eswt_control_pane_g2_copy1_ParamLimits

0xc988,	// (0x00028fc7) eswt_control_pane_g2_copy1

0xc995,	// (0x00028fd4) eswt_control_pane_g3_copy1_ParamLimits

0xc995,	// (0x00028fd4) eswt_control_pane_g3_copy1

0xc9a2,	// (0x00028fe1) eswt_control_pane_g4_copy1_ParamLimits

0xc9a2,	// (0x00028fe1) eswt_control_pane_g4_copy1

0xc01c,	// (0x0002865b) bg_eswt_ctrl_canvas_pane_g1

0xbfe1,	// (0x00028620) common_borders_pane_cp2_ParamLimits

0xbfe1,	// (0x00028620) common_borders_pane_cp2

0xbfe1,	// (0x00028620) common_borders_pane_cp3_ParamLimits

0xbfe1,	// (0x00028620) common_borders_pane_cp3

0xc9f7,	// (0x00029036) separator_horizontal_pane

0xc9ff,	// (0x0002903e) separator_vertical_pane

0xc97b,	// (0x00028fba) eswt_control_pane_g1_copy2_ParamLimits

0xc97b,	// (0x00028fba) eswt_control_pane_g1_copy2

0xc988,	// (0x00028fc7) eswt_control_pane_g2_copy2_ParamLimits

0xc988,	// (0x00028fc7) eswt_control_pane_g2_copy2

0xc995,	// (0x00028fd4) eswt_control_pane_g3_copy2_ParamLimits

0xc995,	// (0x00028fd4) eswt_control_pane_g3_copy2

0xc9a2,	// (0x00028fe1) eswt_control_pane_g4_copy2_ParamLimits

0xc9a2,	// (0x00028fe1) eswt_control_pane_g4_copy2

0x2e19,	// (0x0001f458) common_borders_pane_cp4

0xca08,	// (0x00029047) separator_horizontal_pane_g1

0xca11,	// (0x00029050) separator_horizontal_pane_g2

0xca1a,	// (0x00029059) separator_horizontal_pane_g3

0x0002,

0xfbe2,	// (0x0002c221) separator_horizontal_pane_g

0xc97b,	// (0x00028fba) eswt_control_pane_g1_copy3_ParamLimits

0xc97b,	// (0x00028fba) eswt_control_pane_g1_copy3

0xc988,	// (0x00028fc7) eswt_control_pane_g2_copy3_ParamLimits

0xc988,	// (0x00028fc7) eswt_control_pane_g2_copy3

0xc995,	// (0x00028fd4) eswt_control_pane_g3_copy3_ParamLimits

0xc995,	// (0x00028fd4) eswt_control_pane_g3_copy3

0xc9a2,	// (0x00028fe1) eswt_control_pane_g4_copy3_ParamLimits

0xc9a2,	// (0x00028fe1) eswt_control_pane_g4_copy3

0x2e19,	// (0x0001f458) common_borders_pane_cp5

0xca23,	// (0x00029062) separator_vertical_pane_g1

0xca2c,	// (0x0002906b) separator_vertical_pane_g2

0xca35,	// (0x00029074) separator_vertical_pane_g3

0x0002,

0xfbe9,	// (0x0002c228) separator_vertical_pane_g

0xc97b,	// (0x00028fba) eswt_control_pane_g1_copy4_ParamLimits

0xc97b,	// (0x00028fba) eswt_control_pane_g1_copy4

0xc988,	// (0x00028fc7) eswt_control_pane_g2_copy4_ParamLimits

0xc988,	// (0x00028fc7) eswt_control_pane_g2_copy4

0xc995,	// (0x00028fd4) eswt_control_pane_g3_copy4_ParamLimits

0xc995,	// (0x00028fd4) eswt_control_pane_g3_copy4

0xc9a2,	// (0x00028fe1) eswt_control_pane_g4_copy4_ParamLimits

0xc9a2,	// (0x00028fe1) eswt_control_pane_g4_copy4

0xca3e,	// (0x0002907d) eswt_ctrl_combo_button_pane

0xca46,	// (0x00029085) eswt_ctrl_input_pane

0xca4e,	// (0x0002908d) popup_choice_list_window_cp70

0xca56,	// (0x00029095) eswt_ctrl_input_pane_t1

0x2e19,	// (0x0001f458) input_focus_pane_cp70

0xbfe1,	// (0x00028620) bg_button_pane_cp70_ParamLimits

0xbfe1,	// (0x00028620) bg_button_pane_cp70

0xca64,	// (0x000290a3) eswt_ctrl_combo_button_pane_g1

0xca6c,	// (0x000290ab) wait_bar_pane_cp70

0x9a51,	// (0x00026090) bg_popup_window_pane_cp70_ParamLimits

0x9a51,	// (0x00026090) bg_popup_window_pane_cp70

0xca74,	// (0x000290b3) popup_eswt_tasktip_window_t1

0xca8a,	// (0x000290c9) wait_bar_pane_cp71_ParamLimits

0xca8a,	// (0x000290c9) wait_bar_pane_cp71

0xca96,	// (0x000290d5) grid_eswt_app_pane

0x8970,	// (0x00024faf) scroll_pane_cp70

0xca9f,	// (0x000290de) cell_eswt_app_pane_ParamLimits

0xca9f,	// (0x000290de) cell_eswt_app_pane

0xcacf,	// (0x0002910e) cell_eswt_app_pane_g1_ParamLimits

0xcacf,	// (0x0002910e) cell_eswt_app_pane_g1

0xcafe,	// (0x0002913d) cell_eswt_app_pane_g2_ParamLimits

0xcafe,	// (0x0002913d) cell_eswt_app_pane_g2

0x0001,

0xfbf0,	// (0x0002c22f) cell_eswt_app_pane_g_ParamLimits

0xfbf0,	// (0x0002c22f) cell_eswt_app_pane_g

0xcb27,	// (0x00029166) cell_eswt_app_pane_t1_ParamLimits

0xcb27,	// (0x00029166) cell_eswt_app_pane_t1

0xcb59,	// (0x00029198) grid_highlight_pane_cp70_ParamLimits

0xcb59,	// (0x00029198) grid_highlight_pane_cp70

0x9057,	// (0x00025696) set_content_pane_g1

0x943a,	// (0x00025a79) status_small_volume_pane

0x6dcc,	// (0x0002340b) status_small_volume_pane_g1

0x6dd4,	// (0x00023413) volume_small2_pane

0x6ddd,	// (0x0002341c) volume_small2_pane_g1

0x6de6,	// (0x00023425) volume_small2_pane_g2

0x6def,	// (0x0002342e) volume_small2_pane_g3

0x6df8,	// (0x00023437) volume_small2_pane_g4

0x6e01,	// (0x00023440) volume_small2_pane_g5

0x6e0a,	// (0x00023449) volume_small2_pane_g6

0x6e13,	// (0x00023452) volume_small2_pane_g7

0x6e1c,	// (0x0002345b) volume_small2_pane_g8

0x6e25,	// (0x00023464) volume_small2_pane_g9

0x6e2e,	// (0x0002346d) volume_small2_pane_g10

0x0009,

0xfbf5,	// (0x0002c234) volume_small2_pane_g

0xc3e2,	// (0x00028a21) fep_vkb_top_text_pane_g1_ParamLimits

0xc3fd,	// (0x00028a3c) fep_vkb_top_text_pane_t1_ParamLimits

0xc657,	// (0x00028c96) popup_preview_fixed_window_g3_ParamLimits

0xc657,	// (0x00028c96) popup_preview_fixed_window_g3

0x658e,	// (0x00022bcd) popup_toolbar_trans_pane

0xada5,	// (0x000273e4) aid_height_set_list_ParamLimits

0xadb6,	// (0x000273f5) aid_size_parent_ParamLimits

0x94b3,	// (0x00025af2) list_highlight_pane_cp2_ParamLimits

0x9057,	// (0x00025696) set_content_pane_g1_ParamLimits

0x4eee,	// (0x0002152d) list_single_image_pane_ParamLimits

0x4eee,	// (0x0002152d) list_single_image_pane

0xcb65,	// (0x000291a4) aid_size_cell_image_ParamLimits

0xcb65,	// (0x000291a4) aid_size_cell_image

0xcb72,	// (0x000291b1) grid_single_image_pane_ParamLimits

0xcb72,	// (0x000291b1) grid_single_image_pane

0xb155,	// (0x00027794) list_single_image_pane_g1_ParamLimits

0xb155,	// (0x00027794) list_single_image_pane_g1

0xcb7e,	// (0x000291bd) list_single_image_pane_g2_ParamLimits

0xcb7e,	// (0x000291bd) list_single_image_pane_g2

0x0001,

0xfc0a,	// (0x0002c249) list_single_image_pane_g_ParamLimits

0xfc0a,	// (0x0002c249) list_single_image_pane_g

0xcb92,	// (0x000291d1) list_single_image_pane_t1_ParamLimits

0xcb92,	// (0x000291d1) list_single_image_pane_t1

0xcba8,	// (0x000291e7) cell_image_list_pane_ParamLimits

0xcba8,	// (0x000291e7) cell_image_list_pane

0xcbbc,	// (0x000291fb) cell_image_list_pane_g1

0xcbc5,	// (0x00029204) cell_image_list_pane_g2

0x0001,

0xfc0f,	// (0x0002c24e) cell_image_list_pane_g

0xcbce,	// (0x0002920d) aid_size_cell_tb_trans_pane

0x84c9,	// (0x00024b08) bg_tb_trans_pane

0xcbe0,	// (0x0002921f) grid_tb_trans_pane

0x99dd,	// (0x0002601c) bg_tb_trans_pane_g1

0x99e5,	// (0x00026024) bg_tb_trans_pane_g2

0x99ed,	// (0x0002602c) bg_tb_trans_pane_g3

0x99f5,	// (0x00026034) bg_tb_trans_pane_g4

0x99fd,	// (0x0002603c) bg_tb_trans_pane_g5

0x9a15,	// (0x00026054) bg_tb_trans_pane_g6

0x9a1d,	// (0x0002605c) bg_tb_trans_pane_g7

0x9a05,	// (0x00026044) bg_tb_trans_pane_g8

0x9a0d,	// (0x0002604c) bg_tb_trans_pane_g9

0x0008,

0xfc14,	// (0x0002c253) bg_tb_trans_pane_g

0xcbf4,	// (0x00029233) cell_toolbar_trans_pane_ParamLimits

0xcbf4,	// (0x00029233) cell_toolbar_trans_pane

0xc01c,	// (0x0002865b) cell_toolbar_trans_pane_g1

0xbbf8,	// (0x00028237) list_form2_midp_pane_t1

0xbc06,	// (0x00028245) list_form2_midp_pane_t2

0x0001,

0xfabd,	// (0x0002c0fc) list_form2_midp_pane_t

0xbc14,	// (0x00028253) scroll_pane_cp51_ParamLimits

0xbdd0,	// (0x0002840f) form2_midp_wait_pane_g1

0xbdd9,	// (0x00028418) form2_midp_wait_pane_g2

0xbde2,	// (0x00028421) form2_midp_wait_pane_g3

0x0002,

0xfad2,	// (0x0002c111) form2_midp_wait_pane_g

0x7c3c,	// (0x0002427b) list_highlight_pane_cp21_ParamLimits

0xbe2e,	// (0x0002846d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe3d,	// (0x0002847c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4e8f,	// (0x000214ce) list_single_2graphic_im_pane_ParamLimits

0x4e8f,	// (0x000214ce) list_single_2graphic_im_pane

0xcc1a,	// (0x00029259) list_single_2graphic_im_pane_g1_ParamLimits

0xcc1a,	// (0x00029259) list_single_2graphic_im_pane_g1

0xcc2b,	// (0x0002926a) list_single_2graphic_im_pane_g2_ParamLimits

0xcc2b,	// (0x0002926a) list_single_2graphic_im_pane_g2

0xcc37,	// (0x00029276) list_single_2graphic_im_pane_g3_ParamLimits

0xcc37,	// (0x00029276) list_single_2graphic_im_pane_g3

0x0003,

0xfc27,	// (0x0002c266) list_single_2graphic_im_pane_g_ParamLimits

0xfc27,	// (0x0002c266) list_single_2graphic_im_pane_g

0xcc57,	// (0x00029296) list_single_2graphic_im_pane_t1_ParamLimits

0xcc57,	// (0x00029296) list_single_2graphic_im_pane_t1

0xc663,	// (0x00028ca2) list_single_graphic_2heading_pane_fp_ParamLimits

0xc663,	// (0x00028ca2) list_single_graphic_2heading_pane_fp

0x52ce,	// (0x0002190d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x52ce,	// (0x0002190d) list_single_graphic_2heading_pane_fp_g1

0xc678,	// (0x00028cb7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc678,	// (0x00028cb7) list_single_graphic_2heading_pane_fp_g2

0x5297,	// (0x000218d6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5297,	// (0x000218d6) list_single_graphic_2heading_pane_fp_g3

0x52a3,	// (0x000218e2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x52a3,	// (0x000218e2) list_single_graphic_2heading_pane_fp_g4

0xc684,	// (0x00028cc3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc684,	// (0x00028cc3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb55,	// (0x0002c194) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb55,	// (0x0002c194) list_single_graphic_2heading_pane_fp_g

0x54a7,	// (0x00021ae6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x54a7,	// (0x00021ae6) list_single_graphic_2heading_pane_fp_t1

0x5306,	// (0x00021945) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5306,	// (0x00021945) list_single_graphic_2heading_pane_fp_t2

0x54bd,	// (0x00021afc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x54bd,	// (0x00021afc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc30,	// (0x0002c26f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc30,	// (0x0002c26f) list_single_graphic_2heading_pane_fp_t

0xc0a8,	// (0x000286e7) fep_hwr_write_pane_g5_ParamLimits

0xc0a8,	// (0x000286e7) fep_hwr_write_pane_g5

0xc0b4,	// (0x000286f3) fep_hwr_write_pane_g6_ParamLimits

0xc0b4,	// (0x000286f3) fep_hwr_write_pane_g6

0xc94a,	// (0x00028f89) eswt_shell_pane_ParamLimits

0x9a51,	// (0x00026090) bg_popup_window_pane_cp18_ParamLimits

0x9e3d,	// (0x0002647c) heading_pane_cp70

0xca74,	// (0x000290b3) popup_eswt_tasktip_window_t1_ParamLimits

0x9544,	// (0x00025b83) aid_touch_tab_arrow_left

0x9553,	// (0x00025b92) aid_touch_tab_arrow_right

0x7b84,	// (0x000241c3) title_pane_g3_ParamLimits

0x7b84,	// (0x000241c3) title_pane_g3

0x8488,	// (0x00024ac7) set_value_pane_g1

0x658e,	// (0x00022bcd) popup_toolbar_trans_pane_ParamLimits

0xcbce,	// (0x0002920d) aid_size_cell_tb_trans_pane_ParamLimits

0x84c9,	// (0x00024b08) bg_tb_trans_pane_ParamLimits

0xcbe0,	// (0x0002921f) grid_tb_trans_pane_ParamLimits

0x7ec5,	// (0x00024504) cont_note_pane_ParamLimits

0x7ec5,	// (0x00024504) cont_note_pane

0x823a,	// (0x00024879) cont_snote2_single_text_pane_ParamLimits

0x823a,	// (0x00024879) cont_snote2_single_text_pane

0x823a,	// (0x00024879) cont_snote2_single_graphic_pane_ParamLimits

0x823a,	// (0x00024879) cont_snote2_single_graphic_pane

0xa06c,	// (0x000266ab) cont_note_wait_pane_ParamLimits

0xa06c,	// (0x000266ab) cont_note_wait_pane

0xa06c,	// (0x000266ab) cont_note_image_pane_ParamLimits

0xa06c,	// (0x000266ab) cont_note_image_pane

0xcc88,	// (0x000292c7) popup_note2_window_g1_ParamLimits

0xcc88,	// (0x000292c7) popup_note2_window_g1

0xccb9,	// (0x000292f8) popup_note2_window_t1_ParamLimits

0xccb9,	// (0x000292f8) popup_note2_window_t1

0xccfe,	// (0x0002933d) popup_note2_window_t2_ParamLimits

0xccfe,	// (0x0002933d) popup_note2_window_t2

0xcd43,	// (0x00029382) popup_note2_window_t3_ParamLimits

0xcd43,	// (0x00029382) popup_note2_window_t3

0xcd88,	// (0x000293c7) popup_note2_window_t4_ParamLimits

0xcd88,	// (0x000293c7) popup_note2_window_t4

0x7f49,	// (0x00024588) popup_note2_window_t5_ParamLimits

0x7f49,	// (0x00024588) popup_note2_window_t5

0x0004,

0xfc3c,	// (0x0002c27b) popup_note2_window_t_ParamLimits

0xfc3c,	// (0x0002c27b) popup_note2_window_t

0xcdb7,	// (0x000293f6) popup_note2_image_window_g1_ParamLimits

0xcdb7,	// (0x000293f6) popup_note2_image_window_g1

0xcdc3,	// (0x00029402) popup_note2_image_window_g2_ParamLimits

0xcdc3,	// (0x00029402) popup_note2_image_window_g2

0x0001,

0xfc47,	// (0x0002c286) popup_note2_image_window_g_ParamLimits

0xfc47,	// (0x0002c286) popup_note2_image_window_g

0xcdd5,	// (0x00029414) popup_note2_image_window_t1_ParamLimits

0xcdd5,	// (0x00029414) popup_note2_image_window_t1

0xcded,	// (0x0002942c) popup_note2_image_window_t2_ParamLimits

0xcded,	// (0x0002942c) popup_note2_image_window_t2

0xce05,	// (0x00029444) popup_note2_image_window_t3_ParamLimits

0xce05,	// (0x00029444) popup_note2_image_window_t3

0x0002,

0xfc4c,	// (0x0002c28b) popup_note2_image_window_t_ParamLimits

0xfc4c,	// (0x0002c28b) popup_note2_image_window_t

0xa07a,	// (0x000266b9) popup_note2_wait_window_g1_ParamLimits

0xa07a,	// (0x000266b9) popup_note2_wait_window_g1

0xce21,	// (0x00029460) popup_note2_wait_window_g2_ParamLimits

0xce21,	// (0x00029460) popup_note2_wait_window_g2

0xa092,	// (0x000266d1) popup_note2_wait_window_g3_ParamLimits

0xa092,	// (0x000266d1) popup_note2_wait_window_g3

0x0002,

0xfc53,	// (0x0002c292) popup_note2_wait_window_g_ParamLimits

0xfc53,	// (0x0002c292) popup_note2_wait_window_g

0xce2d,	// (0x0002946c) popup_note2_wait_window_t1_ParamLimits

0xce2d,	// (0x0002946c) popup_note2_wait_window_t1

0xce4b,	// (0x0002948a) popup_note2_wait_window_t2_ParamLimits

0xce4b,	// (0x0002948a) popup_note2_wait_window_t2

0xce69,	// (0x000294a8) popup_note2_wait_window_t3_ParamLimits

0xce69,	// (0x000294a8) popup_note2_wait_window_t3

0xce7b,	// (0x000294ba) popup_note2_wait_window_t4_ParamLimits

0xce7b,	// (0x000294ba) popup_note2_wait_window_t4

0x0003,

0xfc5a,	// (0x0002c299) popup_note2_wait_window_t_ParamLimits

0xfc5a,	// (0x0002c299) popup_note2_wait_window_t

0xce8d,	// (0x000294cc) wait_bar2_pane_ParamLimits

0xce8d,	// (0x000294cc) wait_bar2_pane

0xcea5,	// (0x000294e4) popup_snote2_single_text_window_g1_ParamLimits

0xcea5,	// (0x000294e4) popup_snote2_single_text_window_g1

0xcecd,	// (0x0002950c) popup_snote2_single_text_window_t1_ParamLimits

0xcecd,	// (0x0002950c) popup_snote2_single_text_window_t1

0xcf19,	// (0x00029558) popup_snote2_single_text_window_t2_ParamLimits

0xcf19,	// (0x00029558) popup_snote2_single_text_window_t2

0xcf65,	// (0x000295a4) popup_snote2_single_text_window_t3_ParamLimits

0xcf65,	// (0x000295a4) popup_snote2_single_text_window_t3

0xcfa6,	// (0x000295e5) popup_snote2_single_text_window_t4_ParamLimits

0xcfa6,	// (0x000295e5) popup_snote2_single_text_window_t4

0xcfdc,	// (0x0002961b) popup_snote2_single_text_window_t5_ParamLimits

0xcfdc,	// (0x0002961b) popup_snote2_single_text_window_t5

0x0004,

0xfc63,	// (0x0002c2a2) popup_snote2_single_text_window_t_ParamLimits

0xfc63,	// (0x0002c2a2) popup_snote2_single_text_window_t

0xd007,	// (0x00029646) popup_snote2_single_graphic_window_g1_ParamLimits

0xd007,	// (0x00029646) popup_snote2_single_graphic_window_g1

0xd02f,	// (0x0002966e) popup_snote2_single_graphic_window_g2_ParamLimits

0xd02f,	// (0x0002966e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6e,	// (0x0002c2ad) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6e,	// (0x0002c2ad) popup_snote2_single_graphic_window_g

0xd057,	// (0x00029696) popup_snote2_single_graphic_window_t1_ParamLimits

0xd057,	// (0x00029696) popup_snote2_single_graphic_window_t1

0xd0a3,	// (0x000296e2) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0a3,	// (0x000296e2) popup_snote2_single_graphic_window_t2

0xcf65,	// (0x000295a4) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf65,	// (0x000295a4) popup_snote2_single_graphic_window_t3

0xcfa6,	// (0x000295e5) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfa6,	// (0x000295e5) popup_snote2_single_graphic_window_t4

0xcfdc,	// (0x0002961b) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfdc,	// (0x0002961b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc73,	// (0x0002c2b2) popup_snote2_single_graphic_window_t_ParamLimits

0xfc73,	// (0x0002c2b2) popup_snote2_single_graphic_window_t

0xbad5,	// (0x00028114) clock_nsta_pane_cp2_t1

0xbad5,	// (0x00028114) clock_nsta_pane_cp2_t2

0x0001,

0xfa93,	// (0x0002c0d2) clock_nsta_pane_cp2_t

0x4a3f,	// (0x0002107e) form_field_data_wide_pane_g1_ParamLimits

0x84d7,	// (0x00024b16) form_field_data_wide_pane_g2_ParamLimits

0x84d7,	// (0x00024b16) form_field_data_wide_pane_g2

0x84e3,	// (0x00024b22) form_field_data_wide_pane_g3_ParamLimits

0x84e3,	// (0x00024b22) form_field_data_wide_pane_g3

0x0002,

0xf654,	// (0x0002bc93) form_field_data_wide_pane_g_ParamLimits

0xf654,	// (0x0002bc93) form_field_data_wide_pane_g

0xb9b1,	// (0x00027ff0) grid_touch_3_pane_ParamLimits

0xb9b1,	// (0x00027ff0) grid_touch_3_pane

0xd0ef,	// (0x0002972e) cell_touch_3_pane_ParamLimits

0xd0ef,	// (0x0002972e) cell_touch_3_pane

0xc01c,	// (0x0002865b) cell_touch_3_pane_g1

0xc01c,	// (0x0002865b) cell_touch_3_pane_g2

0x0001,

0xfb18,	// (0x0002c157) cell_touch_3_pane_g

0x7fa1,	// (0x000245e0) cont_query_data_pane

0x7fa9,	// (0x000245e8) cont_query_data_pane_cp1

0xd11d,	// (0x0002975c) button_value_adjust_pane_cp7

0xd125,	// (0x00029764) query_popup_pane_cp3

0x8c67,	// (0x000252a6) bg_popup_sub_pane_cp22_ParamLimits

0x5cf0,	// (0x0002232f) navi_navi_volume_pane_cp2

0x5d0b,	// (0x0002234a) popup_side_volume_key_window_g2

0x5d1a,	// (0x00022359) popup_side_volume_key_window_g3

0x0002,

0xf6ea,	// (0x0002bd29) popup_side_volume_key_window_g

0x5d37,	// (0x00022376) popup_side_volume_key_window_t2

0x0001,

0xf6f1,	// (0x0002bd30) popup_side_volume_key_window_t

0x8f21,	// (0x00025560) popup_side_volume_key_window_ParamLimits

0x4694,	// (0x00020cd3) list_double_graphic_pane_g4_ParamLimits

0x4694,	// (0x00020cd3) list_double_graphic_pane_g4

0x4ece,	// (0x0002150d) list_single_2heading_msg_pane_ParamLimits

0x4ece,	// (0x0002150d) list_single_2heading_msg_pane

0x54dd,	// (0x00021b1c) list_single_2heading_msg_pane_g1_ParamLimits

0x54dd,	// (0x00021b1c) list_single_2heading_msg_pane_g1

0x44c3,	// (0x00020b02) list_single_2heading_msg_pane_g2_ParamLimits

0x44c3,	// (0x00020b02) list_single_2heading_msg_pane_g2

0x54e9,	// (0x00021b28) list_single_2heading_msg_pane_g3_ParamLimits

0x54e9,	// (0x00021b28) list_single_2heading_msg_pane_g3

0x54f5,	// (0x00021b34) list_single_2heading_msg_pane_g4_ParamLimits

0x54f5,	// (0x00021b34) list_single_2heading_msg_pane_g4

0x0003,

0xfc7e,	// (0x0002c2bd) list_single_2heading_msg_pane_g_ParamLimits

0xfc7e,	// (0x0002c2bd) list_single_2heading_msg_pane_g

0x550d,	// (0x00021b4c) list_single_2heading_msg_pane_t1_ParamLimits

0x550d,	// (0x00021b4c) list_single_2heading_msg_pane_t1

0x5535,	// (0x00021b74) list_single_2heading_msg_pane_t2_ParamLimits

0x5535,	// (0x00021b74) list_single_2heading_msg_pane_t2

0x5569,	// (0x00021ba8) list_single_2heading_msg_pane_t3_ParamLimits

0x5569,	// (0x00021ba8) list_single_2heading_msg_pane_t3

0x55a2,	// (0x00021be1) list_single_2heading_msg_pane_t4_ParamLimits

0x55a2,	// (0x00021be1) list_single_2heading_msg_pane_t4

0x0003,

0xfc87,	// (0x0002c2c6) list_single_2heading_msg_pane_t_ParamLimits

0xfc87,	// (0x0002c2c6) list_single_2heading_msg_pane_t

0x7b90,	// (0x000241cf) title_pane_g4_ParamLimits

0x7b90,	// (0x000241cf) title_pane_g4

0x5aff,	// (0x0002213e) title_pane_stacon_g3_ParamLimits

0x5aff,	// (0x0002213e) title_pane_stacon_g3

0xcc4b,	// (0x0002928a) list_single_2graphic_im_pane_g4_ParamLimits

0xcc4b,	// (0x0002928a) list_single_2graphic_im_pane_g4

0xaacb,	// (0x0002710a) popup_side_volume_key_window_cp

0xb2fc,	// (0x0002793b) main_idle_act2_pane_t1

0x6680,	// (0x00022cbf) toolbar_button_pane_g10

0x8432,	// (0x00024a71) popup_toolbar_window_cp1

0xbac6,	// (0x00028105) clock_nsta_pane_cp_t1

0xbac6,	// (0x00028105) clock_nsta_pane_cp_t2

0x0001,

0xfa8e,	// (0x0002c0cd) clock_nsta_pane_cp_t

0x5cf0,	// (0x0002232f) navi_navi_volume_pane_cp2_ParamLimits

0x5cff,	// (0x0002233e) popup_side_volume_key_window_g1_ParamLimits

0x5d0b,	// (0x0002234a) popup_side_volume_key_window_g2_ParamLimits

0x5d1a,	// (0x00022359) popup_side_volume_key_window_g3_ParamLimits

0xf6ea,	// (0x0002bd29) popup_side_volume_key_window_g_ParamLimits

0x6adc,	// (0x0002311b) fep_hwr_aid_pane

0x1d1b,	// (0x0001e35a) bg_fep_hwr_top_pane_g4_ParamLimits

0xc078,	// (0x000286b7) fep_hwr_top_pane_g1_ParamLimits

0xc08a,	// (0x000286c9) fep_hwr_top_pane_g2_ParamLimits

0x6b95,	// (0x000231d4) fep_hwr_top_pane_g3_ParamLimits

0xfae3,	// (0x0002c122) fep_hwr_top_pane_g_ParamLimits

0x6baa,	// (0x000231e9) fep_hwr_top_text_pane_ParamLimits

0xa88e,	// (0x00026ecd) aid_touch_tab_arrow_arrow_2

0xa897,	// (0x00026ed6) aid_touch_tab_arrow_left_2

0x6af0,	// (0x0002312f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6b27,	// (0x00023166) fep_hwr_prediction_pane

0xc1ea,	// (0x00028829) fep_vkb_prediction_pane

0xc2ee,	// (0x0002892d) fep_vkb_side_pane_g3_ParamLimits

0xc2ee,	// (0x0002892d) fep_vkb_side_pane_g3

0xc29a,	// (0x000288d9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc71a,	// (0x00028d59) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc727,	// (0x00028d66) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8d,	// (0x0002c1cc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd14a,	// (0x00029789) fep_hwr_prediction_pane_g1

0x6e37,	// (0x00023476) fep_hwr_prediction_pane_g2

0x6e3f,	// (0x0002347e) fep_hwr_prediction_pane_g3

0x6e47,	// (0x00023486) fep_hwr_prediction_pane_g4

0x0003,

0xfc90,	// (0x0002c2cf) fep_hwr_prediction_pane_g

0xd14a,	// (0x00029789) fep_vkb_prediction_pane_g1

0xd154,	// (0x00029793) fep_vkb_prediction_pane_g2

0xd15c,	// (0x0002979b) fep_vkb_prediction_pane_g3

0xd164,	// (0x000297a3) fep_vkb_prediction_pane_g4

0x0003,

0xfc99,	// (0x0002c2d8) fep_vkb_prediction_pane_g

0x695c,	// (0x00022f9b) slider_set_pane_g3

0x6970,	// (0x00022faf) slider_set_pane_g4

0x6988,	// (0x00022fc7) slider_set_pane_g5

0x695c,	// (0x00022f9b) slider_set_pane_g6

0x699e,	// (0x00022fdd) slider_set_pane_g7

0xaf1b,	// (0x0002755a) slider_form_pane_g3

0xaf24,	// (0x00027563) slider_form_pane_g4

0xaf2c,	// (0x0002756b) slider_form_pane_g5

0xaf1b,	// (0x0002755a) slider_form_pane_g6

0xaf34,	// (0x00027573) slider_form_pane_g7

0xb5a7,	// (0x00027be6) slider_set_pane_vc_g3

0xb5b0,	// (0x00027bef) slider_set_pane_vc_g4

0xb5b9,	// (0x00027bf8) slider_set_pane_vc_g5

0xb5a7,	// (0x00027be6) slider_set_pane_vc_g6

0xb5c2,	// (0x00027c01) slider_set_pane_vc_g7

0xb784,	// (0x00027dc3) slider_form_pane_vc_g1

0xb78d,	// (0x00027dcc) slider_form_pane_vc_g2

0xb796,	// (0x00027dd5) slider_form_pane_vc_g3

0xb784,	// (0x00027dc3) slider_form_pane_vc_g4

0xb79f,	// (0x00027dde) slider_form_pane_vc_g5

0x0004,

0xfa60,	// (0x0002c09f) slider_form_pane_vc_g

0x2e19,	// (0x0001f458) main_idle_act3_pane

0xd16c,	// (0x000297ab) ai3_links_pane

0xd175,	// (0x000297b4) popup_ai3_data_window_ParamLimits

0xd175,	// (0x000297b4) popup_ai3_data_window

0x2e19,	// (0x0001f458) grid_ai3_links_pane

0xd18f,	// (0x000297ce) cell_ai3_links_pane_ParamLimits

0xd18f,	// (0x000297ce) cell_ai3_links_pane

0xd1a7,	// (0x000297e6) bg_popup_sub_pane_cp11

0xd1b4,	// (0x000297f3) cell_ai3_links_pane_g1

0x2e19,	// (0x0001f458) bg_popup_sub_pane_cp12

0xd1d9,	// (0x00029818) heading_ai3_data_pane

0xd1e1,	// (0x00029820) list_ai3_gene_pane

0xd1ed,	// (0x0002982c) popup_ai3_data_window_g1

0xd1f5,	// (0x00029834) heading_ai3_data_pane_g1

0xd1fd,	// (0x0002983c) heading_ai3_data_pane_t1

0xd20b,	// (0x0002984a) list_double_ai3_gene_pane_ParamLimits

0xd20b,	// (0x0002984a) list_double_ai3_gene_pane

0xd218,	// (0x00029857) list_single_ai3_gene_pane_ParamLimits

0xd218,	// (0x00029857) list_single_ai3_gene_pane

0xbfe1,	// (0x00028620) list_highlight_pane_cp7_ParamLimits

0xbfe1,	// (0x00028620) list_highlight_pane_cp7

0xd225,	// (0x00029864) list_single_a13_gene_pane_t1_ParamLimits

0xd225,	// (0x00029864) list_single_a13_gene_pane_t1

0xd23c,	// (0x0002987b) list_single_ai3_gene_pane_g1

0xd245,	// (0x00029884) list_single_ai3_gene_pane_g2

0x0001,

0xfca2,	// (0x0002c2e1) list_single_ai3_gene_pane_g

0xd24d,	// (0x0002988c) list_double_ai3_gene_pane_g1_ParamLimits

0xd24d,	// (0x0002988c) list_double_ai3_gene_pane_g1

0xd259,	// (0x00029898) list_double_ai3_gene_pane_t1_ParamLimits

0xd259,	// (0x00029898) list_double_ai3_gene_pane_t1

0xd275,	// (0x000298b4) list_double_ai3_gene_pane_t2_ParamLimits

0xd275,	// (0x000298b4) list_double_ai3_gene_pane_t2

0xd28b,	// (0x000298ca) list_double_ai3_gene_pane_t3_ParamLimits

0xd28b,	// (0x000298ca) list_double_ai3_gene_pane_t3

0x0002,

0xfca7,	// (0x0002c2e6) list_double_ai3_gene_pane_t_ParamLimits

0xfca7,	// (0x0002c2e6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x54d3,	// (0x00021b12) aid_size_min_col_2

0xd136,	// (0x00029775) aid_size_min_msg_ParamLimits

0xd136,	// (0x00029775) aid_size_min_msg

0xc3ee,	// (0x00028a2d) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ee,	// (0x00028a2d) fep_vkb_top_text_pane_g2

0x0001,

0xfb13,	// (0x0002c152) fep_vkb_top_text_pane_g_ParamLimits

0xfb13,	// (0x0002c152) fep_vkb_top_text_pane_g

0x2e19,	// (0x0001f458) main_hc_apps_shell_pane

0xd2a8,	// (0x000298e7) grid_hc_apps_pane_ParamLimits

0xd2a8,	// (0x000298e7) grid_hc_apps_pane

0xd2ba,	// (0x000298f9) list_hc_apps_pane

0xd2c2,	// (0x00029901) scroll_pane_cp37_ParamLimits

0xd2c2,	// (0x00029901) scroll_pane_cp37

0xd2ce,	// (0x0002990d) cell_hc_apps_pane_ParamLimits

0xd2ce,	// (0x0002990d) cell_hc_apps_pane

0xd37c,	// (0x000299bb) cell_hc_apps_pane_g1_ParamLimits

0xd37c,	// (0x000299bb) cell_hc_apps_pane_g1

0xd3ac,	// (0x000299eb) cell_hc_apps_pane_g2_ParamLimits

0xd3ac,	// (0x000299eb) cell_hc_apps_pane_g2

0xd3c8,	// (0x00029a07) cell_hc_apps_pane_g3_ParamLimits

0xd3c8,	// (0x00029a07) cell_hc_apps_pane_g3

0x0002,

0xfcae,	// (0x0002c2ed) cell_hc_apps_pane_g_ParamLimits

0xfcae,	// (0x0002c2ed) cell_hc_apps_pane_g

0xd3ea,	// (0x00029a29) cell_hc_apps_pane_t1_ParamLimits

0xd3ea,	// (0x00029a29) cell_hc_apps_pane_t1

0x7ec5,	// (0x00024504) grid_highlight_pane_cp10_ParamLimits

0x7ec5,	// (0x00024504) grid_highlight_pane_cp10

0xd42a,	// (0x00029a69) list_single_hc_apps_pane_ParamLimits

0xd42a,	// (0x00029a69) list_single_hc_apps_pane

0xd486,	// (0x00029ac5) list_single_hc_apps_pane_g1

0x55c7,	// (0x00021c06) list_single_hc_apps_pane_g2

0x0001,

0xfcb5,	// (0x0002c2f4) list_single_hc_apps_pane_g

0x55e0,	// (0x00021c1f) list_single_hc_apps_pane_g2_copy1

0x55fc,	// (0x00021c3b) list_single_hc_apps_pane_t1

0x7c3c,	// (0x0002427b) bg_set_opt_pane_cp_ParamLimits

0x5a27,	// (0x00022066) setting_slider_pane_t1_ParamLimits

0x5a40,	// (0x0002207f) setting_slider_pane_t2_ParamLimits

0x5a5a,	// (0x00022099) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0002bb76) setting_slider_pane_t_ParamLimits

0x5a72,	// (0x000220b1) slider_set_pane_ParamLimits

0x5f99,	// (0x000225d8) control_pane_g5_ParamLimits

0x5f99,	// (0x000225d8) control_pane_g5

0xad6a,	// (0x000273a9) slider_set_pane_g1_ParamLimits

0x6950,	// (0x00022f8f) slider_set_pane_g2_ParamLimits

0x695c,	// (0x00022f9b) slider_set_pane_g3_ParamLimits

0x6970,	// (0x00022faf) slider_set_pane_g4_ParamLimits

0x6988,	// (0x00022fc7) slider_set_pane_g5_ParamLimits

0x695c,	// (0x00022f9b) slider_set_pane_g6_ParamLimits

0x699e,	// (0x00022fdd) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x0002bf7c) slider_set_pane_g_ParamLimits

0x9002,	// (0x00025641) navi_icon_text_pane_ParamLimits

0x9505,	// (0x00025b44) aid_fill_nsta_2_ParamLimits

0x9544,	// (0x00025b83) aid_touch_tab_arrow_left_ParamLimits

0x9553,	// (0x00025b92) aid_touch_tab_arrow_right_ParamLimits

0x95c0,	// (0x00025bff) clock_nsta_pane_ParamLimits

0xa870,	// (0x00026eaf) navi_icon_pane_g1_ParamLimits

0xa87c,	// (0x00026ebb) navi_text_pane_t1_ParamLimits

0xbbd2,	// (0x00028211) navi_icon_text_pane_g1_ParamLimits

0xbbde,	// (0x0002821d) navi_icon_text_pane_t1_ParamLimits

0xd486,	// (0x00029ac5) list_single_hc_apps_pane_g1_ParamLimits

0x55c7,	// (0x00021c06) list_single_hc_apps_pane_g2_ParamLimits

0xfcb5,	// (0x0002c2f4) list_single_hc_apps_pane_g_ParamLimits

0x55e0,	// (0x00021c1f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x55fc,	// (0x00021c3b) list_single_hc_apps_pane_t1_ParamLimits

0x5931,	// (0x00021f70) popup_toolbar2_fixed_window_ParamLimits

0x5931,	// (0x00021f70) popup_toolbar2_fixed_window

0x6584,	// (0x00022bc3) popup_toolbar2_float_window

0x2e19,	// (0x0001f458) bg_popup_sub_pane_cp27

0xd49f,	// (0x00029ade) grid_toolbar2_float_pane

0x2e19,	// (0x0001f458) bg_popup_sub_pane_cp26

0xd49f,	// (0x00029ade) grid_toolbar2_fixed_pane

0xd4a7,	// (0x00029ae6) cell_toolbar2_fixed_pane_ParamLimits

0xd4a7,	// (0x00029ae6) cell_toolbar2_fixed_pane

0xd4b7,	// (0x00029af6) cell_toolbar2_fixed_pane_g1

0xd4c0,	// (0x00029aff) toolbar2_fixed_button_pane

0x99dd,	// (0x0002601c) toolbar2_fixed_button_pane_g1

0x99e5,	// (0x00026024) toolbar2_fixed_button_pane_g2

0x99ed,	// (0x0002602c) toolbar2_fixed_button_pane_g3

0x99f5,	// (0x00026034) toolbar2_fixed_button_pane_g4

0x99fd,	// (0x0002603c) toolbar2_fixed_button_pane_g5

0x9a05,	// (0x00026044) toolbar2_fixed_button_pane_g6

0x9a0d,	// (0x0002604c) toolbar2_fixed_button_pane_g7

0x9a15,	// (0x00026054) toolbar2_fixed_button_pane_g8

0x9a1d,	// (0x0002605c) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x0002be7e) toolbar2_fixed_button_pane_g

0xd4c8,	// (0x00029b07) cell_toolbar2_float_pane_ParamLimits

0xd4c8,	// (0x00029b07) cell_toolbar2_float_pane

0xd4d9,	// (0x00029b18) cell_toolbar2_float_pane_g1

0xd4c0,	// (0x00029aff) toolbar2_fixed_button_pane_cp

0xc14a,	// (0x00028789) fep_vkb_accented_list_pane_ParamLimits

0xc14a,	// (0x00028789) fep_vkb_accented_list_pane

0x6cf8,	// (0x00023337) bg_popup_fep_shadow_pane_g9

0x918f,	// (0x000257ce) bg_popup_fep_shadow_pane_cp3

0x8630,	// (0x00024c6f) list_accented_list_pane

0xd4e2,	// (0x00029b21) list_single_accented_list_pane_ParamLimits

0xd4e2,	// (0x00029b21) list_single_accented_list_pane

0x918f,	// (0x000257ce) list_highlight_pane_cp10

0xd4f3,	// (0x00029b32) list_single_accented_list_pane_t1

0x64d4,	// (0x00022b13) popup_slider_window_ParamLimits

0x64d4,	// (0x00022b13) popup_slider_window

0xd12d,	// (0x0002976c) aid_indentation_list_msg

0xd5b7,	// (0x00029bf6) bg_popup_window_pane_cp19

0xd61f,	// (0x00029c5e) popup_slider_window_g1

0xd63b,	// (0x00029c7a) popup_slider_window_g2

0xd657,	// (0x00029c96) popup_slider_window_g3

0x0005,

0xfcba,	// (0x0002c2f9) popup_slider_window_g

0xd6bd,	// (0x00029cfc) popup_slider_window_t1

0xd731,	// (0x00029d70) small_volume_slider_vertical_pane

0xc01c,	// (0x0002865b) small_volume_slider_vertical_pane_g1

0xc01c,	// (0x0002865b) small_volume_slider_vertical_pane_g2

0xd74d,	// (0x00029d8c) small_volume_slider_vertical_pane_g3

0x0002,

0xfccc,	// (0x0002c30b) small_volume_slider_vertical_pane_g

0x56ed,	// (0x00021d2c) area_side_right_pane_ParamLimits

0x56ed,	// (0x00021d2c) area_side_right_pane

0x6e4f,	// (0x0002348e) aid_size_side_button_ParamLimits

0x6e4f,	// (0x0002348e) aid_size_side_button

0x6e63,	// (0x000234a2) grid_sctrl_middle_pane_ParamLimits

0x6e63,	// (0x000234a2) grid_sctrl_middle_pane

0x6e82,	// (0x000234c1) sctrl_sk_bottom_pane

0x6e93,	// (0x000234d2) sctrl_sk_top_pane

0x6ea5,	// (0x000234e4) aid_touch_sctrl_top

0x7ec5,	// (0x00024504) bg_sctrl_sk_pane_ParamLimits

0x7ec5,	// (0x00024504) bg_sctrl_sk_pane

0x6eb2,	// (0x000234f1) sctrl_sk_top_pane_g1

0x6ebf,	// (0x000234fe) sctrl_sk_top_pane_t1

0x6ea5,	// (0x000234e4) aid_touch_sctrl_bottom

0x7ec5,	// (0x00024504) bg_sctrl_sk_pane_cp_ParamLimits

0x7ec5,	// (0x00024504) bg_sctrl_sk_pane_cp

0x6eda,	// (0x00023519) sctrl_sk_bottom_pane_g1

0x6ebf,	// (0x000234fe) sctrl_sk_bottom_pane_t1

0x6ee3,	// (0x00023522) cell_sctrl_middle_pane_ParamLimits

0x6ee3,	// (0x00023522) cell_sctrl_middle_pane

0x6efe,	// (0x0002353d) aid_touch_sctrl_middle_ParamLimits

0x6efe,	// (0x0002353d) aid_touch_sctrl_middle

0x84c9,	// (0x00024b08) bg_sctrl_middle_pane_ParamLimits

0x84c9,	// (0x00024b08) bg_sctrl_middle_pane

0xc29a,	// (0x000288d9) cell_sctrl_middle_pane_g1_ParamLimits

0xc29a,	// (0x000288d9) cell_sctrl_middle_pane_g1

0x6f10,	// (0x0002354f) cell_sctrl_middle_pane_g2_ParamLimits

0x6f10,	// (0x0002354f) cell_sctrl_middle_pane_g2

0x0001,

0xfcd8,	// (0x0002c317) cell_sctrl_middle_pane_g_ParamLimits

0xfcd8,	// (0x0002c317) cell_sctrl_middle_pane_g

0x99dd,	// (0x0002601c) bg_sctrl_middle_pane_g1

0x99e5,	// (0x00026024) bg_sctrl_middle_pane_g2

0x99ed,	// (0x0002602c) bg_sctrl_middle_pane_g3

0x99f5,	// (0x00026034) bg_sctrl_middle_pane_g4

0x99fd,	// (0x0002603c) bg_sctrl_middle_pane_g5

0x9a05,	// (0x00026044) bg_sctrl_middle_pane_g6

0x9a0d,	// (0x0002604c) bg_sctrl_middle_pane_g7

0x9a15,	// (0x00026054) bg_sctrl_middle_pane_g8

0x0007,

0xfcdd,	// (0x0002c31c) bg_sctrl_middle_pane_g

0x9a1d,	// (0x0002605c) bg_sctrl_middle_pane_g8_copy1

0x99dd,	// (0x0002601c) bg_sctrl_sk_pane_g1

0x99e5,	// (0x00026024) bg_sctrl_sk_pane_g2

0x99ed,	// (0x0002602c) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x0002be7e) bg_sctrl_sk_pane_g

0x83f8,	// (0x00024a37) aid_size_touch_scroll_bar

0x99f5,	// (0x00026034) bg_sctrl_sk_pane_g4

0x99fd,	// (0x0002603c) bg_sctrl_sk_pane_g5

0x9a05,	// (0x00026044) bg_sctrl_sk_pane_g6

0x9a0d,	// (0x0002604c) bg_sctrl_sk_pane_g7

0x9a15,	// (0x00026054) bg_sctrl_sk_pane_g8

0x9a1d,	// (0x0002605c) bg_sctrl_sk_pane_g9

0x613b,	// (0x0002277a) popup_fep_china_hwr2_fs_candidate_window

0x6145,	// (0x00022784) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6145,	// (0x00022784) popup_fep_china_hwr2_fs_control_window

0xc29a,	// (0x000288d9) sctrl_sk_top_pane_g2

0x0001,

0xfcd3,	// (0x0002c312) sctrl_sk_top_pane_g

0xd756,	// (0x00029d95) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd756,	// (0x00029d95) aid_fep_china_hwr2_fs_cell

0xd768,	// (0x00029da7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd768,	// (0x00029da7) bg_popup_fep_shadow_pane_cp4

0xd77f,	// (0x00029dbe) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd77f,	// (0x00029dbe) bg_popup_fep_shadow_pane_cp5

0xd791,	// (0x00029dd0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd791,	// (0x00029dd0) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a1,	// (0x00029de0) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7a9,	// (0x00029de8) aid_fep_china_hwr2_fs_candi_cell

0x2e19,	// (0x0001f458) bg_popup_fep_shadow_pane_cp6

0xd7b3,	// (0x00029df2) popup_fep_china_hwr2_fs_candidate_grid

0xd7bd,	// (0x00029dfc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7bd,	// (0x00029dfc) cell_fep_china_hwr2_fs_funtion_grid

0xc01c,	// (0x0002865b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7d5,	// (0x00029e14) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7d5,	// (0x00029e14) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7e3,	// (0x00029e22) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7e3,	// (0x00029e22) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcee,	// (0x0002c32d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcee,	// (0x0002c32d) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7f9,	// (0x00029e38) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7f9,	// (0x00029e38) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd80e,	// (0x00029e4d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd80e,	// (0x00029e4d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf3,	// (0x0002c332) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf3,	// (0x0002c332) cell_fep_china_hwr2_fs_funtion_grid_t

0xd82a,	// (0x00029e69) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd832,	// (0x00029e71) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd83a,	// (0x00029e79) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf8,	// (0x0002c337) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd842,	// (0x00029e81) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd842,	// (0x00029e81) cell_fep_china_hwr2_fs_candidate_grid

0xd85b,	// (0x00029e9a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd863,	// (0x00029ea2) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc01c,	// (0x0002865b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc01c,	// (0x0002865b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb18,	// (0x0002c157) cell_fep_china_hwr2_fs_candidate_grid_g

0xd86b,	// (0x00029eaa) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95d3,	// (0x00025c12) clock_nsta_pane_cp_24_ParamLimits

0x95d3,	// (0x00025c12) clock_nsta_pane_cp_24

0x9651,	// (0x00025c90) indicator_nsta_pane_cp_24_ParamLimits

0x9651,	// (0x00025c90) indicator_nsta_pane_cp_24

0xa6ec,	// (0x00026d2b) heading_pane_g1

0x0001,

0xf8a4,	// (0x0002bee3) heading_pane_g

0xb139,	// (0x00027778) grid_sct_catagory_button_pane

0xb175,	// (0x000277b4) scroll_pane_cp5_ParamLimits

0xbc20,	// (0x0002825f) button_value_adjust_pane_cp5_ParamLimits

0xbc20,	// (0x0002825f) button_value_adjust_pane_cp5

0xbcff,	// (0x0002833e) form2_midp_time_pane_ParamLimits

0xd879,	// (0x00029eb8) cell_sct_catagory_button_pane_ParamLimits

0xd879,	// (0x00029eb8) cell_sct_catagory_button_pane

0xbfe1,	// (0x00028620) bg_button_pane_cp01_ParamLimits

0xbfe1,	// (0x00028620) bg_button_pane_cp01

0xc01c,	// (0x0002865b) cell_sct_catagory_button_pane_g1

0x6513,	// (0x00022b52) popup_tb_extension_window

0xd88b,	// (0x00029eca) aid_size_cell_ext_ParamLimits

0xd88b,	// (0x00029eca) aid_size_cell_ext

0x7ec5,	// (0x00024504) bg_tb_trans_pane_cp1_ParamLimits

0x7ec5,	// (0x00024504) bg_tb_trans_pane_cp1

0xd8ab,	// (0x00029eea) grid_tb_ext_pane_ParamLimits

0xd8ab,	// (0x00029eea) grid_tb_ext_pane

0xd8d9,	// (0x00029f18) cell_tb_ext_pane_ParamLimits

0xd8d9,	// (0x00029f18) cell_tb_ext_pane

0xd8f0,	// (0x00029f2f) cell_tb_ext_pane_g1_ParamLimits

0xd8f0,	// (0x00029f2f) cell_tb_ext_pane_g1

0xd90d,	// (0x00029f4c) cell_tb_ext_pane_t1

0x7ec5,	// (0x00024504) list_highlight_pane_cp11_ParamLimits

0x7ec5,	// (0x00024504) list_highlight_pane_cp11

0x5950,	// (0x00021f8f) popup_uni_indicator_window_ParamLimits

0x5950,	// (0x00021f8f) popup_uni_indicator_window

0x84c9,	// (0x00024b08) bg_popup_sub_pane_cp14

0xd928,	// (0x00029f67) list_uniindi_pane

0xd934,	// (0x00029f73) uniindi_top_pane

0x7ec5,	// (0x00024504) bg_uniindi_top_pane

0xd953,	// (0x00029f92) uniindi_top_pane_g1

0xd969,	// (0x00029fa8) uniindi_top_pane_g2

0x0003,

0xfcff,	// (0x0002c33e) uniindi_top_pane_g

0xd993,	// (0x00029fd2) uniindi_top_pane_t1

0xd9bd,	// (0x00029ffc) list_single_uniindi_pane_ParamLimits

0xd9bd,	// (0x00029ffc) list_single_uniindi_pane

0xc01c,	// (0x0002865b) bg_uniindi_top_pane_g1

0xd9d0,	// (0x0002a00f) list_single_uniindi_pane_g1

0xd9e3,	// (0x0002a022) list_single_uniindi_pane_t1

0x2e19,	// (0x0001f458) control_bg_pane

0xda08,	// (0x0002a047) bg_sctrl_sk_pane_cp1

0xda11,	// (0x0002a050) bg_sctrl_sk_pane_cp2

0xda1a,	// (0x0002a059) control_bg_pane_g1

0xda23,	// (0x0002a062) control_bg_pane_g2

0x0001,

0xfd08,	// (0x0002c347) control_bg_pane_g

0xba6a,	// (0x000280a9) cell_indicator_nsta_pane_g1_ParamLimits

0xba78,	// (0x000280b7) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7c,	// (0x0002c0bb) cell_indicator_nsta_pane_g_ParamLimits

0x5284,	// (0x000218c3) form2_midp_time_pane_t1_ParamLimits

0x823a,	// (0x00024879) main_idle_act4_pane_ParamLimits

0x823a,	// (0x00024879) main_idle_act4_pane

0x6513,	// (0x00022b52) popup_tb_extension_window_ParamLimits

0xd8c9,	// (0x00029f08) tb_ext_find_pane_ParamLimits

0xd8c9,	// (0x00029f08) tb_ext_find_pane

0xda2c,	// (0x0002a06b) ai_gene_pane_1_cp1

0x92d6,	// (0x00025915) ai_gene_pane_2_cp1

0xda34,	// (0x0002a073) list_single_idle_plugin_calendar_pane

0xda3d,	// (0x0002a07c) list_single_idle_plugin_notification_pane

0xda46,	// (0x0002a085) list_single_idle_plugin_player_pane

0xda4f,	// (0x0002a08e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda4f,	// (0x0002a08e) list_single_idle_plugin_shortcut_pane

0xda71,	// (0x0002a0b0) main_idle_act4_pane_t1

0xda83,	// (0x0002a0c2) main_idle_act4_pane_t2

0x0001,

0xfd0d,	// (0x0002c34c) main_idle_act4_pane_t

0xda95,	// (0x0002a0d4) middle_sk_idle_act4_pane_ParamLimits

0xda95,	// (0x0002a0d4) middle_sk_idle_act4_pane

0xdaab,	// (0x0002a0ea) popup_clock_digital_analogue_window_cp2

0xdac5,	// (0x0002a104) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac5,	// (0x0002a104) shortcut_wheel_idle_act4_pane

0xc01c,	// (0x0002865b) shortcut_wheel_idle_act4_pane_g1

0xc01c,	// (0x0002865b) shortcut_wheel_idle_act4_pane_g2

0xc01c,	// (0x0002865b) shortcut_wheel_idle_act4_pane_g3

0xc01c,	// (0x0002865b) shortcut_wheel_idle_act4_pane_g4

0xc01c,	// (0x0002865b) shortcut_wheel_idle_act4_pane_g5

0xdad9,	// (0x0002a118) shortcut_wheel_idle_act4_pane_g6

0xdae1,	// (0x0002a120) shortcut_wheel_idle_act4_pane_g7

0xdae9,	// (0x0002a128) shortcut_wheel_idle_act4_pane_g8

0xdaf1,	// (0x0002a130) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd12,	// (0x0002c351) shortcut_wheel_idle_act4_pane_g

0xc29a,	// (0x000288d9) middle_sk_idle_act4_pane_g1_ParamLimits

0xc29a,	// (0x000288d9) middle_sk_idle_act4_pane_g1

0xdb55,	// (0x0002a194) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb55,	// (0x0002a194) middle_sk_idle_act4_pane_g2

0x0001,

0xfd35,	// (0x0002c374) middle_sk_idle_act4_pane_g_ParamLimits

0xfd35,	// (0x0002c374) middle_sk_idle_act4_pane_g

0xdb61,	// (0x0002a1a0) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb61,	// (0x0002a1a0) middle_sk_idle_act4_pane_t1

0xdb7e,	// (0x0002a1bd) grid_ai_shortcut_pane_ParamLimits

0xdb7e,	// (0x0002a1bd) grid_ai_shortcut_pane

0xdb97,	// (0x0002a1d6) list_highlight_pane_cp16_ParamLimits

0xdb97,	// (0x0002a1d6) list_highlight_pane_cp16

0xdba4,	// (0x0002a1e3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba4,	// (0x0002a1e3) list_single_idle_plugin_shortcut_pane_g1

0xdbb0,	// (0x0002a1ef) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb0,	// (0x0002a1ef) list_single_idle_plugin_shortcut_pane_g2

0xdbc8,	// (0x0002a207) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbc8,	// (0x0002a207) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3a,	// (0x0002c379) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3a,	// (0x0002c379) list_single_idle_plugin_shortcut_pane_g

0xdbdb,	// (0x0002a21a) cell_ai_shortcut_pane_ParamLimits

0xdbdb,	// (0x0002a21a) cell_ai_shortcut_pane

0xdbff,	// (0x0002a23e) cell_ai_shortcut_pane_g1_ParamLimits

0xdbff,	// (0x0002a23e) cell_ai_shortcut_pane_g1

0xda2c,	// (0x0002a06b) ai_gene_pane_1_cp2

0xdc21,	// (0x0002a260) ai_gene_pane_2_cp2

0xdc29,	// (0x0002a268) list_highlight_pane_cp15

0xdc32,	// (0x0002a271) list_single_idle_plugin_calendar_pane_g1

0xdc29,	// (0x0002a268) list_highlight_pane_cp17

0xdc3a,	// (0x0002a279) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc42,	// (0x0002a281) list_single_idle_plugin_player_pane_g1

0xb39e,	// (0x000279dd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd41,	// (0x0002c380) list_single_idle_plugin_player_pane_g

0xdc4a,	// (0x0002a289) list_single_idle_plugin_player_pane_t1

0xdc58,	// (0x0002a297) list_single_idle_plugin_player_pane_t2

0xdc66,	// (0x0002a2a5) list_single_idle_plugin_player_pane_t3

0xdc74,	// (0x0002a2b3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd46,	// (0x0002c385) list_single_idle_plugin_player_pane_t

0xdc82,	// (0x0002a2c1) wait_bar_pane_cp15

0xdc8a,	// (0x0002a2c9) grid_ai_notification_pane

0xb39e,	// (0x000279dd) list_single_idle_plugin_notification_pane_g1

0xdc93,	// (0x0002a2d2) cell_ai_notification_pane_ParamLimits

0xdc93,	// (0x0002a2d2) cell_ai_notification_pane

0xdca0,	// (0x0002a2df) cell_ai_notification_pane_g1

0xdca8,	// (0x0002a2e7) cell_ai_notification_pane_t1

0xdcb6,	// (0x0002a2f5) tb_ext_find_button_pane

0xdcbe,	// (0x0002a2fd) tb_ext_find_pane_g1

0xdcc6,	// (0x0002a305) tb_ext_find_pane_t1

0x8b5e,	// (0x0002519d) tb_ext_find_button_pane_g1

0xdcd4,	// (0x0002a313) tb_ext_find_button_pane_g2

0x0001,

0xfd4f,	// (0x0002c38e) tb_ext_find_button_pane_g

0xda71,	// (0x0002a0b0) main_idle_act4_pane_t1_ParamLimits

0xda83,	// (0x0002a0c2) main_idle_act4_pane_t2_ParamLimits

0xfd0d,	// (0x0002c34c) main_idle_act4_pane_t_ParamLimits

0xdaab,	// (0x0002a0ea) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdab9,	// (0x0002a0f8) sat_plugin_idle_act4_pane_ParamLimits

0xdab9,	// (0x0002a0f8) sat_plugin_idle_act4_pane

0xdcdd,	// (0x0002a31c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcdd,	// (0x0002a31c) sat_plugin_idle_act4_pane_t1

0xdcf0,	// (0x0002a32f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf0,	// (0x0002a32f) sat_plugin_idle_act4_pane_t2

0xdd03,	// (0x0002a342) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd03,	// (0x0002a342) sat_plugin_idle_act4_pane_t3

0xdd16,	// (0x0002a355) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd16,	// (0x0002a355) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd54,	// (0x0002c393) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd54,	// (0x0002c393) sat_plugin_idle_act4_pane_t

0x588b,	// (0x00021eca) popup_battery_window_ParamLimits

0x588b,	// (0x00021eca) popup_battery_window

0x7ec5,	// (0x00024504) bg_popup_sub_pane_cp25_ParamLimits

0x7ec5,	// (0x00024504) bg_popup_sub_pane_cp25

0xdd29,	// (0x0002a368) popup_battery_window_g1_ParamLimits

0xdd29,	// (0x0002a368) popup_battery_window_g1

0xdd35,	// (0x0002a374) popup_battery_window_t1_ParamLimits

0xdd35,	// (0x0002a374) popup_battery_window_t1

0xdd47,	// (0x0002a386) popup_battery_window_t2_ParamLimits

0xdd47,	// (0x0002a386) popup_battery_window_t2

0x0001,

0xfd5d,	// (0x0002c39c) popup_battery_window_t_ParamLimits

0xfd5d,	// (0x0002c39c) popup_battery_window_t

0x91a3,	// (0x000257e2) midp_canvas_pane_ParamLimits

0x921a,	// (0x00025859) midp_keypad_pane_ParamLimits

0x921a,	// (0x00025859) midp_keypad_pane

0x94b3,	// (0x00025af2) main_midp_pane_ParamLimits

0xbae4,	// (0x00028123) signal_pane_g2_cp_ParamLimits

0xdd64,	// (0x0002a3a3) aid_size_cell_midp_keypad_ParamLimits

0xdd64,	// (0x0002a3a3) aid_size_cell_midp_keypad

0xdd7e,	// (0x0002a3bd) midp_keyp_game_grid_pane_ParamLimits

0xdd7e,	// (0x0002a3bd) midp_keyp_game_grid_pane

0xdd9e,	// (0x0002a3dd) midp_keyp_rocker_pane_ParamLimits

0xdd9e,	// (0x0002a3dd) midp_keyp_rocker_pane

0xddd7,	// (0x0002a416) midp_keyp_sk_left_pane_ParamLimits

0xddd7,	// (0x0002a416) midp_keyp_sk_left_pane

0xde31,	// (0x0002a470) midp_keyp_sk_right_pane_ParamLimits

0xde31,	// (0x0002a470) midp_keyp_sk_right_pane

0x2e19,	// (0x0001f458) bg_button_pane_cp03

0xde8b,	// (0x0002a4ca) midp_keyp_sk_left_pane_g1

0x2e19,	// (0x0001f458) bg_button_pane_cp04

0xde8b,	// (0x0002a4ca) midp_keyp_sk_right_pane_g1

0xc01c,	// (0x0002865b) midp_keyp_rocker_pane_g1

0xde94,	// (0x0002a4d3) keyp_game_cell_pane_ParamLimits

0xde94,	// (0x0002a4d3) keyp_game_cell_pane

0x2e19,	// (0x0001f458) bg_button_pane_cp02

0xdea7,	// (0x0002a4e6) keyp_game_cell_pane_g1

0x58cf,	// (0x00021f0e) popup_fep_vkb2_window_ParamLimits

0x58cf,	// (0x00021f0e) popup_fep_vkb2_window

0x6f2e,	// (0x0002356d) aid_size_cell_vkb2_ParamLimits

0x6f2e,	// (0x0002356d) aid_size_cell_vkb2

0x6f7a,	// (0x000235b9) popup_fep_vkb2_window_g1_ParamLimits

0x6f7a,	// (0x000235b9) popup_fep_vkb2_window_g1

0x6fc2,	// (0x00023601) vkb2_area_bottom_pane_ParamLimits

0x6fc2,	// (0x00023601) vkb2_area_bottom_pane

0x700e,	// (0x0002364d) vkb2_area_keypad_pane_ParamLimits

0x700e,	// (0x0002364d) vkb2_area_keypad_pane

0x7050,	// (0x0002368f) vkb2_area_top_pane_ParamLimits

0x7050,	// (0x0002368f) vkb2_area_top_pane

0x70cf,	// (0x0002370e) vkb2_top_entry_pane_ParamLimits

0x70cf,	// (0x0002370e) vkb2_top_entry_pane

0x70f9,	// (0x00023738) vkb2_top_grid_left_pane_ParamLimits

0x70f9,	// (0x00023738) vkb2_top_grid_left_pane

0x7118,	// (0x00023757) vkb2_top_grid_right_pane_ParamLimits

0x7118,	// (0x00023757) vkb2_top_grid_right_pane

0x7137,	// (0x00023776) vkb2_cell_keypad_pane_ParamLimits

0x7137,	// (0x00023776) vkb2_cell_keypad_pane

0x7208,	// (0x00023847) vkb2_area_bottom_grid_pane_ParamLimits

0x7208,	// (0x00023847) vkb2_area_bottom_grid_pane

0x722e,	// (0x0002386d) vkb2_area_bottom_pane_g1_ParamLimits

0x722e,	// (0x0002386d) vkb2_area_bottom_pane_g1

0x7252,	// (0x00023891) vkb2_area_bottom_pane_g2_ParamLimits

0x7252,	// (0x00023891) vkb2_area_bottom_pane_g2

0x7280,	// (0x000238bf) vkb2_area_bottom_pane_g3_ParamLimits

0x7280,	// (0x000238bf) vkb2_area_bottom_pane_g3

0x0002,

0xfd62,	// (0x0002c3a1) vkb2_area_bottom_pane_g_ParamLimits

0xfd62,	// (0x0002c3a1) vkb2_area_bottom_pane_g

0x72e1,	// (0x00023920) vkb2_top_cell_left_pane_ParamLimits

0x72e1,	// (0x00023920) vkb2_top_cell_left_pane

0xdeb8,	// (0x0002a4f7) vkb2_top_entry_pane_g1_ParamLimits

0xdeb8,	// (0x0002a4f7) vkb2_top_entry_pane_g1

0xdec6,	// (0x0002a505) vkb2_top_entry_pane_t1_ParamLimits

0xdec6,	// (0x0002a505) vkb2_top_entry_pane_t1

0xdef8,	// (0x0002a537) vkb2_top_entry_pane_t2_ParamLimits

0xdef8,	// (0x0002a537) vkb2_top_entry_pane_t2

0xdf2a,	// (0x0002a569) vkb2_top_entry_pane_t3_ParamLimits

0xdf2a,	// (0x0002a569) vkb2_top_entry_pane_t3

0x0002,

0xfd69,	// (0x0002c3a8) vkb2_top_entry_pane_t_ParamLimits

0xfd69,	// (0x0002c3a8) vkb2_top_entry_pane_t

0x732e,	// (0x0002396d) vkb2_top_grid_right_pane_g1_ParamLimits

0x732e,	// (0x0002396d) vkb2_top_grid_right_pane_g1

0x7344,	// (0x00023983) vkb2_top_grid_right_pane_g2_ParamLimits

0x7344,	// (0x00023983) vkb2_top_grid_right_pane_g2

0x735c,	// (0x0002399b) vkb2_top_grid_right_pane_g3_ParamLimits

0x735c,	// (0x0002399b) vkb2_top_grid_right_pane_g3

0x7374,	// (0x000239b3) vkb2_top_grid_right_pane_g4_ParamLimits

0x7374,	// (0x000239b3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd70,	// (0x0002c3af) vkb2_top_grid_right_pane_g_ParamLimits

0xfd70,	// (0x0002c3af) vkb2_top_grid_right_pane_g

0x738a,	// (0x000239c9) vkb2_top_cell_left_pane_g1

0x73a1,	// (0x000239e0) vkb2_cell_keypad_pane_g1_ParamLimits

0x73a1,	// (0x000239e0) vkb2_cell_keypad_pane_g1

0xdf4e,	// (0x0002a58d) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf4e,	// (0x0002a58d) vkb2_cell_keypad_pane_t1

0x73af,	// (0x000239ee) vkb2_cell_bottom_grid_pane_ParamLimits

0x73af,	// (0x000239ee) vkb2_cell_bottom_grid_pane

0x73e8,	// (0x00023a27) vkb2_cell_bottom_grid_pane_g1

0xdaf9,	// (0x0002a138) aid_call2_pane_cp02

0xdb01,	// (0x0002a140) aid_call_pane_cp02

0xdb09,	// (0x0002a148) clock_digital_number_pane_cp10

0xdb11,	// (0x0002a150) clock_digital_number_pane_cp11

0xdb19,	// (0x0002a158) clock_digital_number_pane_cp12

0xdb21,	// (0x0002a160) clock_digital_number_pane_cp13

0xdb29,	// (0x0002a168) clock_digital_separator_pane_cp10

0x8b5e,	// (0x0002519d) popup_clock_digital_analogue_window_cp2_g1

0x8b5e,	// (0x0002519d) popup_clock_digital_analogue_window_cp2_g2

0xdb31,	// (0x0002a170) popup_clock_digital_analogue_window_cp2_g3

0x8b5e,	// (0x0002519d) popup_clock_digital_analogue_window_cp2_g4

0xdb31,	// (0x0002a170) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd25,	// (0x0002c364) popup_clock_digital_analogue_window_cp2_g

0xdb39,	// (0x0002a178) popup_clock_digital_analogue_window_cp2_t1

0xdb47,	// (0x0002a186) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd30,	// (0x0002c36f) popup_clock_digital_analogue_window_cp2_t

0xc01c,	// (0x0002865b) clock_digital_number_pane_cp10_g1

0xc01c,	// (0x0002865b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb18,	// (0x0002c157) clock_digital_number_pane_cp10_g

0xc01c,	// (0x0002865b) clock_digital_separator_pane_cp10_g1

0xc01c,	// (0x0002865b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb18,	// (0x0002c157) clock_digital_separator_pane_cp10_g

0xd975,	// (0x00029fb4) uniindi_top_pane_g3

0xd986,	// (0x00029fc5) uniindi_top_pane_g4

0x71c2,	// (0x00023801) vkb2_row_keypad_pane_ParamLimits

0x71c2,	// (0x00023801) vkb2_row_keypad_pane

0x7408,	// (0x00023a47) vkb2_cell_t_keypad_pane_ParamLimits

0x7408,	// (0x00023a47) vkb2_cell_t_keypad_pane

0x7418,	// (0x00023a57) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7418,	// (0x00023a57) vkb2_cell_t_keypad_pane_cp08

0x742b,	// (0x00023a6a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x742b,	// (0x00023a6a) vkb2_cell_t_keypad_pane_cp09

0x743f,	// (0x00023a7e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x743f,	// (0x00023a7e) vkb2_cell_t_keypad_pane_cp01

0x7450,	// (0x00023a8f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7450,	// (0x00023a8f) vkb2_cell_t_keypad_pane_cp02

0x7461,	// (0x00023aa0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7461,	// (0x00023aa0) vkb2_cell_t_keypad_pane_cp03

0x7472,	// (0x00023ab1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7472,	// (0x00023ab1) vkb2_cell_t_keypad_pane_cp04

0x7483,	// (0x00023ac2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7483,	// (0x00023ac2) vkb2_cell_t_keypad_pane_cp05

0x7494,	// (0x00023ad3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7494,	// (0x00023ad3) vkb2_cell_t_keypad_pane_cp06

0x74a5,	// (0x00023ae4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x74a5,	// (0x00023ae4) vkb2_cell_t_keypad_pane_cp07

0x74b6,	// (0x00023af5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x74b6,	// (0x00023af5) vkb2_cell_t_keypad_pane_cp10

0xc29a,	// (0x000288d9) vkb2_cell_t_keypad_pane_g1

0xdf65,	// (0x0002a5a4) vkb2_cell_t_keypad_pane_t1

0x2e19,	// (0x0001f458) popup_grid_graphic2_window

0xdf77,	// (0x0002a5b6) aid_size_cell_graphic2_ParamLimits

0xdf77,	// (0x0002a5b6) aid_size_cell_graphic2

0xdfaf,	// (0x0002a5ee) bg_popup_window_pane_cp21_ParamLimits

0xdfaf,	// (0x0002a5ee) bg_popup_window_pane_cp21

0xdfbd,	// (0x0002a5fc) graphic2_pages_pane_ParamLimits

0xdfbd,	// (0x0002a5fc) graphic2_pages_pane

0xe003,	// (0x0002a642) grid_graphic2_control_pane_ParamLimits

0xe003,	// (0x0002a642) grid_graphic2_control_pane

0xe041,	// (0x0002a680) grid_graphic2_pane_ParamLimits

0xe041,	// (0x0002a680) grid_graphic2_pane

0xe0b5,	// (0x0002a6f4) cell_graphic2_pane

0x2e19,	// (0x0001f458) main_comp_mode_pane

0xd1e1,	// (0x00029820) list_ai3_gene_pane_ParamLimits

0xd5b7,	// (0x00029bf6) bg_popup_window_pane_cp19_ParamLimits

0xd5c3,	// (0x00029c02) bg_touch_area_indi_pane_ParamLimits

0xd5c3,	// (0x00029c02) bg_touch_area_indi_pane

0xd5d9,	// (0x00029c18) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5d9,	// (0x00029c18) bg_touch_area_indi_pane_cp01

0xd5ef,	// (0x00029c2e) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ef,	// (0x00029c2e) bg_touch_area_indi_pane_cp02

0xd605,	// (0x00029c44) bg_touch_area_indi_pane_cp03_ParamLimits

0xd605,	// (0x00029c44) bg_touch_area_indi_pane_cp03

0xd61f,	// (0x00029c5e) popup_slider_window_g1_ParamLimits

0xd63b,	// (0x00029c7a) popup_slider_window_g2_ParamLimits

0xd657,	// (0x00029c96) popup_slider_window_g3_ParamLimits

0xfcba,	// (0x0002c2f9) popup_slider_window_g_ParamLimits

0xd6bd,	// (0x00029cfc) popup_slider_window_t1_ParamLimits

0xd731,	// (0x00029d70) small_volume_slider_vertical_pane_ParamLimits

0xe0b5,	// (0x0002a6f4) cell_graphic2_pane_ParamLimits

0xe104,	// (0x0002a743) bg_button_pane_cp10_ParamLimits

0xe104,	// (0x0002a743) bg_button_pane_cp10

0xe117,	// (0x0002a756) bg_button_pane_cp11_ParamLimits

0xe117,	// (0x0002a756) bg_button_pane_cp11

0xe12a,	// (0x0002a769) graphic2_pages_pane_g1_ParamLimits

0xe12a,	// (0x0002a769) graphic2_pages_pane_g1

0xe145,	// (0x0002a784) graphic2_pages_pane_g2_ParamLimits

0xe145,	// (0x0002a784) graphic2_pages_pane_g2

0x0001,

0xfd7e,	// (0x0002c3bd) graphic2_pages_pane_g_ParamLimits

0xfd7e,	// (0x0002c3bd) graphic2_pages_pane_g

0xe15d,	// (0x0002a79c) graphic2_pages_pane_t1_ParamLimits

0xe15d,	// (0x0002a79c) graphic2_pages_pane_t1

0xe175,	// (0x0002a7b4) cell_graphic2_control_pane_ParamLimits

0xe175,	// (0x0002a7b4) cell_graphic2_control_pane

0xe193,	// (0x0002a7d2) cell_graphic2_pane_g1_ParamLimits

0xe193,	// (0x0002a7d2) cell_graphic2_pane_g1

0xe1a0,	// (0x0002a7df) cell_graphic2_pane_g2_ParamLimits

0xe1a0,	// (0x0002a7df) cell_graphic2_pane_g2

0xe1ad,	// (0x0002a7ec) cell_graphic2_pane_g3_ParamLimits

0xe1ad,	// (0x0002a7ec) cell_graphic2_pane_g3

0xe1ba,	// (0x0002a7f9) cell_graphic2_pane_g4_ParamLimits

0xe1ba,	// (0x0002a7f9) cell_graphic2_pane_g4

0xe1c7,	// (0x0002a806) cell_graphic2_pane_g5_ParamLimits

0xe1c7,	// (0x0002a806) cell_graphic2_pane_g5

0x0004,

0xfd83,	// (0x0002c3c2) cell_graphic2_pane_g_ParamLimits

0xfd83,	// (0x0002c3c2) cell_graphic2_pane_g

0xe1e0,	// (0x0002a81f) cell_graphic2_pane_t1_ParamLimits

0xe1e0,	// (0x0002a81f) cell_graphic2_pane_t1

0x9a51,	// (0x00026090) grid_highlight_pane_cp11_ParamLimits

0x9a51,	// (0x00026090) grid_highlight_pane_cp11

0x7ec5,	// (0x00024504) bg_button_pane_cp05

0xe216,	// (0x0002a855) cell_graphic2_control_pane_g1

0xc01c,	// (0x0002865b) bg_touch_area_indi_pane_g1

0xe23e,	// (0x0002a87d) aid_cmod_rocker_key_size

0xe248,	// (0x0002a887) aid_cmode_itu_key_size

0xe252,	// (0x0002a891) main_cmode_video_pane

0xe25c,	// (0x0002a89b) main_comp_mode_itu_pane

0xe268,	// (0x0002a8a7) main_comp_mode_rocker_pane

0xe274,	// (0x0002a8b3) cell_cmode_rocker_pane_ParamLimits

0xe274,	// (0x0002a8b3) cell_cmode_rocker_pane

0xe286,	// (0x0002a8c5) cell_cmode_itu_pane_ParamLimits

0xe286,	// (0x0002a8c5) cell_cmode_itu_pane

0x84c9,	// (0x00024b08) bg_button_pane_cp06_ParamLimits

0x84c9,	// (0x00024b08) bg_button_pane_cp06

0xc29a,	// (0x000288d9) cell_cmode_rocker_pane_g1_ParamLimits

0xc29a,	// (0x000288d9) cell_cmode_rocker_pane_g1

0xd7d5,	// (0x00029e14) cell_cmode_rocker_pane_g2_ParamLimits

0xd7d5,	// (0x00029e14) cell_cmode_rocker_pane_g2

0x0001,

0xfd93,	// (0x0002c3d2) cell_cmode_rocker_pane_g_ParamLimits

0xfd93,	// (0x0002c3d2) cell_cmode_rocker_pane_g

0x2e19,	// (0x0001f458) bg_button_pane_cp07

0xe29b,	// (0x0002a8da) cell_cmode_itu_pane_g1

0xe2a4,	// (0x0002a8e3) cell_cmode_itu_pane_t1

0xe2b2,	// (0x0002a8f1) cell_cmode_itu_pane_t2

0x0001,

0xfd98,	// (0x0002c3d7) cell_cmode_itu_pane_t

0xd9f8,	// (0x0002a037) aid_touch_ctrl_left

0xda00,	// (0x0002a03f) aid_touch_ctrl_right

0x2e19,	// (0x0001f458) compa_mode_pane

0xe2c0,	// (0x0002a8ff) aid_cmod_rocker_key_size_cp

0xe2ca,	// (0x0002a909) aid_cmode_itu_key_size_cp

0xe2d4,	// (0x0002a913) compa_mode_pane_g1

0xe2dc,	// (0x0002a91b) compa_mode_pane_g2

0xe2e4,	// (0x0002a923) compa_mode_pane_g3

0x0002,

0xfd9d,	// (0x0002c3dc) compa_mode_pane_g

0xe2ec,	// (0x0002a92b) main_comp_mode_itu_pane_cp

0xe2f4,	// (0x0002a933) main_comp_mode_rocker_pane_cp

0xe2fc,	// (0x0002a93b) cell_cmode_itu_pane_cp_ParamLimits

0xe2fc,	// (0x0002a93b) cell_cmode_itu_pane_cp

0xe311,	// (0x0002a950) cell_cmode_rocker_pane_cp_ParamLimits

0xe311,	// (0x0002a950) cell_cmode_rocker_pane_cp

0x84c9,	// (0x00024b08) bg_button_pane_cp06_cp_ParamLimits

0x84c9,	// (0x00024b08) bg_button_pane_cp06_cp

0xc29a,	// (0x000288d9) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc29a,	// (0x000288d9) cell_cmode_rocker_pane_g1_cp

0xc01c,	// (0x0002865b) cell_cmode_rocker_pane_g2_cp

0x2e19,	// (0x0001f458) bg_button_pane_cp07_cp

0xaf1b,	// (0x0002755a) cell_cmode_itu_pane_g1_cp

0xe323,	// (0x0002a962) cell_cmode_itu_pane_t1_cp

0xe323,	// (0x0002a962) cell_cmode_itu_pane_t2_cp

0xaf08,	// (0x00027547) settings_code_pane_cp2

0x7c3c,	// (0x0002427b) bg_popup_window_pane_cp3_ParamLimits

0x80c5,	// (0x00024704) heading_pane_cp3_ParamLimits

0x80d4,	// (0x00024713) listscroll_popup_graphic_pane_ParamLimits

0x6adc,	// (0x0002311b) fep_hwr_aid_pane_ParamLimits

0x6ea5,	// (0x000234e4) aid_touch_sctrl_top_ParamLimits

0x6eb2,	// (0x000234f1) sctrl_sk_top_pane_g1_ParamLimits

0xc29a,	// (0x000288d9) sctrl_sk_top_pane_g2_ParamLimits

0xfcd3,	// (0x0002c312) sctrl_sk_top_pane_g_ParamLimits

0x6ebf,	// (0x000234fe) sctrl_sk_top_pane_t1_ParamLimits

0x6ea5,	// (0x000234e4) aid_touch_sctrl_bottom_ParamLimits

0x6ebf,	// (0x000234fe) sctrl_sk_bottom_pane_t1_ParamLimits

0xd941,	// (0x00029f80) aid_area_touch_clock

0x7096,	// (0x000236d5) aid_vkb2_area_top_pane_cell_ParamLimits

0x7096,	// (0x000236d5) aid_vkb2_area_top_pane_cell

0x71e4,	// (0x00023823) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x71e4,	// (0x00023823) aid_vkb2_area_bottom_pane_cell

0xdeb0,	// (0x0002a4ef) popup_char_count_window

0xe331,	// (0x0002a970) popup_char_count_window_g1

0xe33a,	// (0x0002a979) popup_char_count_window_g2

0xe343,	// (0x0002a982) popup_char_count_window_g3

0x0002,

0xfda4,	// (0x0002c3e3) popup_char_count_window_g

0xe34c,	// (0x0002a98b) popup_char_count_window_t1

0x6f58,	// (0x00023597) popup_fep_char_preview_window_ParamLimits

0x6f58,	// (0x00023597) popup_fep_char_preview_window

0x70b4,	// (0x000236f3) vkb2_top_candi_pane_ParamLimits

0x70b4,	// (0x000236f3) vkb2_top_candi_pane

0xe35a,	// (0x0002a999) cell_vkb2_top_candi_pane_ParamLimits

0xe35a,	// (0x0002a999) cell_vkb2_top_candi_pane

0xa06c,	// (0x000266ab) bg_popup_fep_char_preview_window_ParamLimits

0xa06c,	// (0x000266ab) bg_popup_fep_char_preview_window

0x74cb,	// (0x00023b0a) popup_fep_char_preview_window_t1_ParamLimits

0x74cb,	// (0x00023b0a) popup_fep_char_preview_window_t1

0xe3a4,	// (0x0002a9e3) bg_popup_fep_char_preview_window_g1

0xe3ac,	// (0x0002a9eb) bg_popup_fep_char_preview_window_g2

0xe3b4,	// (0x0002a9f3) bg_popup_fep_char_preview_window_g3

0xe3bc,	// (0x0002a9fb) bg_popup_fep_char_preview_window_g4

0xe3c4,	// (0x0002aa03) bg_popup_fep_char_preview_window_g5

0xe3cc,	// (0x0002aa0b) bg_popup_fep_char_preview_window_g6

0xe3d4,	// (0x0002aa13) bg_popup_fep_char_preview_window_g7

0xe3dc,	// (0x0002aa1b) bg_popup_fep_char_preview_window_g8

0xe3e4,	// (0x0002aa23) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdab,	// (0x0002c3ea) bg_popup_fep_char_preview_window_g

0xc29a,	// (0x000288d9) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc29a,	// (0x000288d9) cell_vkb2_top_candi_pane_g1

0xc69c,	// (0x00028cdb) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc69c,	// (0x00028cdb) cell_vkb2_top_candi_pane_g2

0xc6bd,	// (0x00028cfc) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc6bd,	// (0x00028cfc) cell_vkb2_top_candi_pane_g3

0x750d,	// (0x00023b4c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x750d,	// (0x00023b4c) cell_vkb2_top_candi_pane_g4

0xe3ec,	// (0x0002aa2b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3ec,	// (0x0002aa2b) cell_vkb2_top_candi_pane_g5

0xd7d5,	// (0x00029e14) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7d5,	// (0x00029e14) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc0,	// (0x0002c3ff) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc0,	// (0x0002c3ff) cell_vkb2_top_candi_pane_g

0x752e,	// (0x00023b6d) cell_vkb2_top_candi_pane_t1

0x693c,	// (0x00022f7b) aid_size_touch_slider_mark_ParamLimits

0x693c,	// (0x00022f7b) aid_size_touch_slider_mark

0xdff3,	// (0x0002a632) grid_graphic2_catg_pane_ParamLimits

0xdff3,	// (0x0002a632) grid_graphic2_catg_pane

0xe091,	// (0x0002a6d0) popup_grid_graphic2_window_t1_ParamLimits

0xe091,	// (0x0002a6d0) popup_grid_graphic2_window_t1

0xe0a3,	// (0x0002a6e2) popup_grid_graphic2_window_t2_ParamLimits

0xe0a3,	// (0x0002a6e2) popup_grid_graphic2_window_t2

0x0001,

0xfd79,	// (0x0002c3b8) popup_grid_graphic2_window_t_ParamLimits

0xfd79,	// (0x0002c3b8) popup_grid_graphic2_window_t

0x7ec5,	// (0x00024504) bg_button_pane_cp05_ParamLimits

0xe216,	// (0x0002a855) cell_graphic2_control_pane_g1_ParamLimits

0xe40d,	// (0x0002aa4c) cell_graphic2_catg_pane_ParamLimits

0xe40d,	// (0x0002aa4c) cell_graphic2_catg_pane

0x2e19,	// (0x0001f458) bg_button_pane_cp12

0xe41f,	// (0x0002aa5e) cell_graphic2_catg_pane_g1

0xd90d,	// (0x00029f4c) cell_tb_ext_pane_t1_ParamLimits

0x7301,	// (0x00023940) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7301,	// (0x00023940) vkb2_top_cell_right_narrow_pane

0x7319,	// (0x00023958) vkb2_top_cell_right_wide_pane_ParamLimits

0x7319,	// (0x00023958) vkb2_top_cell_right_wide_pane

0x6ace,	// (0x0002310d) bg_vkb2_func_pane_ParamLimits

0x6ace,	// (0x0002310d) bg_vkb2_func_pane

0x738a,	// (0x000239c9) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ace,	// (0x0002310d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ace,	// (0x0002310d) bg_vkb2_fuc_pane_cp03

0x73e8,	// (0x00023a27) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99e5,	// (0x00026024) bg_vkb2_func_pane_g1

0x99ed,	// (0x0002602c) bg_vkb2_func_pane_g2

0x99fd,	// (0x0002603c) bg_vkb2_func_pane_g3

0x99f5,	// (0x00026034) bg_vkb2_func_pane_g4

0x9a05,	// (0x00026044) bg_vkb2_func_pane_g5

0x9a0d,	// (0x0002604c) bg_vkb2_func_pane_g6

0x9a15,	// (0x00026054) bg_vkb2_func_pane_g7

0x9a1d,	// (0x0002605c) bg_vkb2_func_pane_g8

0x99dd,	// (0x0002601c) bg_vkb2_func_pane_g9

0x0008,

0xfdcd,	// (0x0002c40c) bg_vkb2_func_pane_g

0x6ace,	// (0x0002310d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ace,	// (0x0002310d) bg_vkb2_fuc_pane_cp01

0x738a,	// (0x000239c9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x738a,	// (0x000239c9) vkb2_top_cell_right_wide_pane_g1

0x6ace,	// (0x0002310d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ace,	// (0x0002310d) bg_vkb2_fuc_pane_cp02

0x754d,	// (0x00023b8c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x754d,	// (0x00023b8c) vkb2_top_cell_right_narrow_pane_g1

0xd531,	// (0x00029b70) aid_touch_area_decrease_ParamLimits

0xd531,	// (0x00029b70) aid_touch_area_decrease

0xd555,	// (0x00029b94) aid_touch_area_increase_ParamLimits

0xd555,	// (0x00029b94) aid_touch_area_increase

0xd56d,	// (0x00029bac) aid_touch_area_mute_ParamLimits

0xd56d,	// (0x00029bac) aid_touch_area_mute

0xd589,	// (0x00029bc8) aid_touch_area_slider_ParamLimits

0xd589,	// (0x00029bc8) aid_touch_area_slider

0xd673,	// (0x00029cb2) popup_slider_window_g4_ParamLimits

0xd673,	// (0x00029cb2) popup_slider_window_g4

0xd68b,	// (0x00029cca) popup_slider_window_g5_ParamLimits

0xd68b,	// (0x00029cca) popup_slider_window_g5

0xd6ad,	// (0x00029cec) popup_slider_window_g6_ParamLimits

0xd6ad,	// (0x00029cec) popup_slider_window_g6

0xd6eb,	// (0x00029d2a) popup_slider_window_t2_ParamLimits

0xd6eb,	// (0x00029d2a) popup_slider_window_t2

0x0001,

0xfcc7,	// (0x0002c306) popup_slider_window_t_ParamLimits

0xfcc7,	// (0x0002c306) popup_slider_window_t

0xd703,	// (0x00029d42) slider_pane_ParamLimits

0xd703,	// (0x00029d42) slider_pane

0xe428,	// (0x0002aa67) slider_pane_g1_ParamLimits

0xe428,	// (0x0002aa67) slider_pane_g1

0xe43c,	// (0x0002aa7b) slider_pane_g2_ParamLimits

0xe43c,	// (0x0002aa7b) slider_pane_g2

0xe452,	// (0x0002aa91) slider_pane_g3_ParamLimits

0xe452,	// (0x0002aa91) slider_pane_g3

0x0003,

0xfde0,	// (0x0002c41f) slider_pane_g_ParamLimits

0xfde0,	// (0x0002c41f) slider_pane_g

0x656f,	// (0x00022bae) popup_tb_float_extension_window_ParamLimits

0x656f,	// (0x00022bae) popup_tb_float_extension_window

0xe47e,	// (0x0002aabd) aid_size_cell_tb_float_ext

0x2e19,	// (0x0001f458) bg_popup_sub_window_cp28

0xe48a,	// (0x0002aac9) grid_tb_float_ext_pane

0xe494,	// (0x0002aad3) cell_tb_float_ext_pane_ParamLimits

0xe494,	// (0x0002aad3) cell_tb_float_ext_pane

0xe4ae,	// (0x0002aaed) cell_tb_float_ext_pane_g1

0xe4b7,	// (0x0002aaf6) grid_highlight_pane_cp12

0x6c0f,	// (0x0002324e) cell_last_hwr_side_pane_ParamLimits

0x6c0f,	// (0x0002324e) cell_last_hwr_side_pane

0xc01c,	// (0x0002865b) cell_last_hwr_side_pane_g1

0xe4c0,	// (0x0002aaff) cell_last_hwr_side_pane_g2

0x0001,

0xfde9,	// (0x0002c428) cell_last_hwr_side_pane_g

0x72b0,	// (0x000238ef) vkb2_area_bottom_space_btn_pane_ParamLimits

0x72b0,	// (0x000238ef) vkb2_area_bottom_space_btn_pane

0xc29a,	// (0x000288d9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf65,	// (0x0002a5a4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x752e,	// (0x00023b6d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x756d,	// (0x00023bac) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x756d,	// (0x00023bac) vkb2_area_bottom_space_btn_pane_g1

0x75a7,	// (0x00023be6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x75a7,	// (0x00023be6) vkb2_area_bottom_space_btn_pane_g2

0x75dd,	// (0x00023c1c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x75dd,	// (0x00023c1c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdee,	// (0x0002c42d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdee,	// (0x0002c42d) vkb2_area_bottom_space_btn_pane_g

0x6b83,	// (0x000231c2) cel_fep_hwr_func_pane_ParamLimits

0x6b83,	// (0x000231c2) cel_fep_hwr_func_pane

0x6bbf,	// (0x000231fe) cell_hwr_side_button_pane_ParamLimits

0x6bbf,	// (0x000231fe) cell_hwr_side_button_pane

0xd941,	// (0x00029f80) aid_area_touch_clock_ParamLimits

0x7ec5,	// (0x00024504) bg_uniindi_top_pane_ParamLimits

0xd953,	// (0x00029f92) uniindi_top_pane_g1_ParamLimits

0xd969,	// (0x00029fa8) uniindi_top_pane_g2_ParamLimits

0xd975,	// (0x00029fb4) uniindi_top_pane_g3_ParamLimits

0xd986,	// (0x00029fc5) uniindi_top_pane_g4_ParamLimits

0xfcff,	// (0x0002c33e) uniindi_top_pane_g_ParamLimits

0xd993,	// (0x00029fd2) uniindi_top_pane_t1_ParamLimits

0x7ec5,	// (0x00024504) bg_vkb2_func_pane_cp01_ParamLimits

0x7ec5,	// (0x00024504) bg_vkb2_func_pane_cp01

0xe4c9,	// (0x0002ab08) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4c9,	// (0x0002ab08) cel_fep_hwr_func_pane_g1

0x7ec5,	// (0x00024504) bg_vkb2_func_pane_cp02_ParamLimits

0x7ec5,	// (0x00024504) bg_vkb2_func_pane_cp02

0xe4c9,	// (0x0002ab08) cell_hwr_side_button_pane_g1_ParamLimits

0xe4c9,	// (0x0002ab08) cell_hwr_side_button_pane_g1

0x985e,	// (0x00025e9d) status_pane_g4_ParamLimits

0x985e,	// (0x00025e9d) status_pane_g4

0x9878,	// (0x00025eb7) status_pane_t1

0xbd68,	// (0x000283a7) form2_midp_gauge_slider_cont_pane

0xbd70,	// (0x000283af) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd82,	// (0x000283c1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd94,	// (0x000283d3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacb,	// (0x0002c10a) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda6,	// (0x000283e5) form2_midp_slider_pane_ParamLimits

0x6f20,	// (0x0002355f) aid_size_cell_func_vkb2_ParamLimits

0x6f20,	// (0x0002355f) aid_size_cell_func_vkb2

0xe46a,	// (0x0002aaa9) slider_pane_g4_ParamLimits

0xe46a,	// (0x0002aaa9) slider_pane_g4

0x7627,	// (0x00023c66) form2_midp_gauge_slider_pane_t2_cp01

0x7635,	// (0x00023c74) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7635,	// (0x00023c74) form2_midp_gauge_slider_pane_t3_cp01

0x7652,	// (0x00023c91) form2_midp_slider_pane_cp01

0x2e19,	// (0x0001f458) navi_smil_pane

0xe502,	// (0x0002ab41) navi_smil_pane_g1

0xe50a,	// (0x0002ab49) navi_smil_pane_t1

0xe4d7,	// (0x0002ab16) form2_midp_slider_pane_g1

0xe4e0,	// (0x0002ab1f) form2_midp_slider_pane_g2

0xe4e8,	// (0x0002ab27) form2_midp_slider_pane_g3

0xe4d7,	// (0x0002ab16) form2_midp_slider_pane_g4

0xe4f0,	// (0x0002ab2f) form2_midp_slider_pane_g5

0x0004,

0xfdf7,	// (0x0002c436) form2_midp_slider_pane_g

0x7617,	// (0x00023c56) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7617,	// (0x00023c56) vkb2_area_bottom_space_btn_pane_g4

0x968d,	// (0x00025ccc) lc0_navi_pane_ParamLimits

0x968d,	// (0x00025ccc) lc0_navi_pane

0x9703,	// (0x00025d42) lc0_stat_indi_pane_ParamLimits

0x9703,	// (0x00025d42) lc0_stat_indi_pane

0x971a,	// (0x00025d59) ls0_title_pane_ParamLimits

0x971a,	// (0x00025d59) ls0_title_pane

0x84c9,	// (0x00024b08) bg_popup_sub_pane_cp14_ParamLimits

0xd928,	// (0x00029f67) list_uniindi_pane_ParamLimits

0xd934,	// (0x00029f73) uniindi_top_pane_ParamLimits

0xd9d0,	// (0x0002a00f) list_single_uniindi_pane_g1_ParamLimits

0xd9e3,	// (0x0002a022) list_single_uniindi_pane_t1_ParamLimits

0x765b,	// (0x00023c9a) lc0_stat_clock_pane_ParamLimits

0x765b,	// (0x00023c9a) lc0_stat_clock_pane

0xe518,	// (0x0002ab57) lc0_stat_indi_pane_g1_ParamLimits

0xe518,	// (0x0002ab57) lc0_stat_indi_pane_g1

0xe525,	// (0x0002ab64) lc0_stat_indi_pane_g2_ParamLimits

0xe525,	// (0x0002ab64) lc0_stat_indi_pane_g2

0x0001,

0xfe02,	// (0x0002c441) lc0_stat_indi_pane_g_ParamLimits

0xfe02,	// (0x0002c441) lc0_stat_indi_pane_g

0x7668,	// (0x00023ca7) lc0_uni_indicator_pane_ParamLimits

0x7668,	// (0x00023ca7) lc0_uni_indicator_pane

0xe532,	// (0x0002ab71) ls0_title_pane_g1_ParamLimits

0xe532,	// (0x0002ab71) ls0_title_pane_g1

0xe546,	// (0x0002ab85) ls0_title_pane_t1_ParamLimits

0xe546,	// (0x0002ab85) ls0_title_pane_t1

0x7675,	// (0x00023cb4) lc0_uni_indicator_pane_g1_ParamLimits

0x7675,	// (0x00023cb4) lc0_uni_indicator_pane_g1

0xe57c,	// (0x0002abbb) lc0_stat_clock_pane_t1

0x2e19,	// (0x0001f458) main_ai5_pane

0xe592,	// (0x0002abd1) ai5_sk_pane_ParamLimits

0xe592,	// (0x0002abd1) ai5_sk_pane

0xe59f,	// (0x0002abde) cell_ai5_widget_pane_ParamLimits

0xe59f,	// (0x0002abde) cell_ai5_widget_pane

0xe668,	// (0x0002aca7) aid_size_cell_widget_grid

0xe676,	// (0x0002acb5) bg_ai5_widget_pane_ParamLimits

0xe676,	// (0x0002acb5) bg_ai5_widget_pane

0xe6f2,	// (0x0002ad31) cell_ai5_widget_pane_g2

0xe706,	// (0x0002ad45) cell_ai5_widget_pane_g3

0xe720,	// (0x0002ad5f) cell_ai5_widget_pane_g4

0xe730,	// (0x0002ad6f) cell_ai5_widget_pane_g5

0xe740,	// (0x0002ad7f) cell_ai5_widget_pane_g6

0xe74c,	// (0x0002ad8b) cell_ai5_widget_pane_g7

0xe7b8,	// (0x0002adf7) cell_ai5_widget_pane_t1_ParamLimits

0xe7b8,	// (0x0002adf7) cell_ai5_widget_pane_t1

0xe7d5,	// (0x0002ae14) cell_ai5_widget_pane_t2_ParamLimits

0xe7d5,	// (0x0002ae14) cell_ai5_widget_pane_t2

0xe7ed,	// (0x0002ae2c) cell_ai5_widget_pane_t3_ParamLimits

0xe7ed,	// (0x0002ae2c) cell_ai5_widget_pane_t3

0xe805,	// (0x0002ae44) cell_ai5_widget_pane_t4_ParamLimits

0xe805,	// (0x0002ae44) cell_ai5_widget_pane_t4

0xe82b,	// (0x0002ae6a) cell_ai5_widget_pane_t5_ParamLimits

0xe82b,	// (0x0002ae6a) cell_ai5_widget_pane_t5

0xe84a,	// (0x0002ae89) cell_ai5_widget_pane_t6_ParamLimits

0xe84a,	// (0x0002ae89) cell_ai5_widget_pane_t6

0xe85c,	// (0x0002ae9b) cell_ai5_widget_pane_t7_ParamLimits

0xe85c,	// (0x0002ae9b) cell_ai5_widget_pane_t7

0xe87b,	// (0x0002aeba) cell_ai5_widget_pane_t8_ParamLimits

0xe87b,	// (0x0002aeba) cell_ai5_widget_pane_t8

0x000b,

0xfe22,	// (0x0002c461) cell_ai5_widget_pane_t_ParamLimits

0xfe22,	// (0x0002c461) cell_ai5_widget_pane_t

0xe8ff,	// (0x0002af3e) grid_ai5_widget_pane

0x84c9,	// (0x00024b08) highlight_cell_ai5_widget_pane_ParamLimits

0x84c9,	// (0x00024b08) highlight_cell_ai5_widget_pane

0xe913,	// (0x0002af52) ai5_sk_left_pane

0xe91d,	// (0x0002af5c) ai5_sk_middle_pane

0xe927,	// (0x0002af66) ai5_sk_right_pane

0xe931,	// (0x0002af70) bg_ai5_widget_pane_g1_ParamLimits

0xe931,	// (0x0002af70) bg_ai5_widget_pane_g1

0xe93d,	// (0x0002af7c) bg_ai5_widget_pane_g2_ParamLimits

0xe93d,	// (0x0002af7c) bg_ai5_widget_pane_g2

0xe949,	// (0x0002af88) bg_ai5_widget_pane_g3_ParamLimits

0xe949,	// (0x0002af88) bg_ai5_widget_pane_g3

0xe955,	// (0x0002af94) bg_ai5_widget_pane_g4_ParamLimits

0xe955,	// (0x0002af94) bg_ai5_widget_pane_g4

0xe961,	// (0x0002afa0) bg_ai5_widget_pane_g5_ParamLimits

0xe961,	// (0x0002afa0) bg_ai5_widget_pane_g5

0xe96d,	// (0x0002afac) bg_ai5_widget_pane_g6_ParamLimits

0xe96d,	// (0x0002afac) bg_ai5_widget_pane_g6

0xe979,	// (0x0002afb8) bg_ai5_widget_pane_g7_ParamLimits

0xe979,	// (0x0002afb8) bg_ai5_widget_pane_g7

0xe985,	// (0x0002afc4) bg_ai5_widget_pane_g8_ParamLimits

0xe985,	// (0x0002afc4) bg_ai5_widget_pane_g8

0xe991,	// (0x0002afd0) bg_ai5_widget_pane_g9_ParamLimits

0xe991,	// (0x0002afd0) bg_ai5_widget_pane_g9

0x0008,

0xfe3b,	// (0x0002c47a) bg_ai5_widget_pane_g_ParamLimits

0xfe3b,	// (0x0002c47a) bg_ai5_widget_pane_g

0xe9c3,	// (0x0002b002) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c3,	// (0x0002b002) cell_shortcut_ai5_widget_pane

0x918f,	// (0x000257ce) bg_cell_shortcut_ai5_widget_pane

0xe9d4,	// (0x0002b013) cell_grid_ai5_widget_pane_g1

0x918f,	// (0x000257ce) highlight_cell_shortcut_ai5_widget_pane

0x99ed,	// (0x0002602c) ai5_sk_left_pane_g1

0xe9dd,	// (0x0002b01c) ai5_sk_left_pane_g2

0xe9e5,	// (0x0002b024) ai5_sk_left_pane_g3

0xe9ed,	// (0x0002b02c) ai5_sk_left_pane_g4

0x0003,

0xfe4e,	// (0x0002c48d) ai5_sk_left_pane_g

0xe9f5,	// (0x0002b034) ai5_sk_left_pane_t1

0x99e5,	// (0x00026024) ai5_sk_right_pane_g1

0xea03,	// (0x0002b042) ai5_sk_right_pane_g2

0xea0b,	// (0x0002b04a) ai5_sk_right_pane_g3

0xea13,	// (0x0002b052) ai5_sk_right_pane_g4

0x0003,

0xfe57,	// (0x0002c496) ai5_sk_right_pane_g

0xea1b,	// (0x0002b05a) ai5_sk_right_pane_t1

0x99e5,	// (0x00026024) ai5_sk_middle_pane_g1

0x99ed,	// (0x0002602c) ai5_sk_middle_pane_g2

0x9a05,	// (0x00026044) ai5_sk_middle_pane_g3

0xea0b,	// (0x0002b04a) ai5_sk_middle_pane_g4

0xe9e5,	// (0x0002b024) ai5_sk_middle_pane_g5

0xea29,	// (0x0002b068) ai5_sk_middle_pane_g6

0xea31,	// (0x0002b070) ai5_sk_middle_pane_g7

0x0006,

0xfe60,	// (0x0002c49f) ai5_sk_middle_pane_g

0x9513,	// (0x00025b52) aid_touch_area_size_lc0_ParamLimits

0x9513,	// (0x00025b52) aid_touch_area_size_lc0

0x6d0e,	// (0x0002334d) cell_hwr_candidate_pane_t1_ParamLimits

0x952f,	// (0x00025b6e) aid_touch_navi_pane

0x9808,	// (0x00025e47) status_dt_navi_pane_ParamLimits

0x9808,	// (0x00025e47) status_dt_navi_pane

0x9815,	// (0x00025e54) status_dt_sta_pane_ParamLimits

0x9815,	// (0x00025e54) status_dt_sta_pane

0xea39,	// (0x0002b078) dt_sta_controll_pane

0xea46,	// (0x0002b085) dt_sta_indi_pane

0xea57,	// (0x0002b096) dt_sta_title_pane

0x7ec5,	// (0x00024504) bg_dt_sta_indi_pane_ParamLimits

0x7ec5,	// (0x00024504) bg_dt_sta_indi_pane

0xea6a,	// (0x0002b0a9) dt_sta_battery_pane

0xea72,	// (0x0002b0b1) dt_sta_indi_pane_g1

0xea7b,	// (0x0002b0ba) dt_sta_indi_pane_g2

0xea84,	// (0x0002b0c3) dt_sta_indi_pane_g3

0x0002,

0xfe6f,	// (0x0002c4ae) dt_sta_indi_pane_g

0xea8d,	// (0x0002b0cc) dt_sta_signal_pane

0x84c9,	// (0x00024b08) bg_dt_sta_title_pane_ParamLimits

0x84c9,	// (0x00024b08) bg_dt_sta_title_pane

0xea96,	// (0x0002b0d5) dt_sta_title_pane_g1

0xea9e,	// (0x0002b0dd) dt_sta_title_pane_t1_ParamLimits

0xea9e,	// (0x0002b0dd) dt_sta_title_pane_t1

0x2e19,	// (0x0001f458) bg_dt_sta_control_pane

0xeab3,	// (0x0002b0f2) dt_sta_controll_pane_g1

0xeabc,	// (0x0002b0fb) bg_dt_sta_title_pane_g1

0xeac5,	// (0x0002b104) bg_dt_sta_title_pane_g2

0xeace,	// (0x0002b10d) bg_dt_sta_title_pane_g3

0x0002,

0xfe76,	// (0x0002c4b5) bg_dt_sta_title_pane_g

0xc01c,	// (0x0002865b) bg_dt_sta_indi_pane_g1

0xead7,	// (0x0002b116) dt_sta_signal_pane_g1

0xeadf,	// (0x0002b11e) dt_sta_signal_pane_g2

0x0001,

0xfe7d,	// (0x0002c4bc) dt_sta_signal_pane_g

0xeae7,	// (0x0002b126) dt_sta_battery_pane_g1

0xeaf0,	// (0x0002b12f) dt_sta_battery_pane_t1

0xc01c,	// (0x0002865b) bg_dt_sta_control_pane_g1

0x8c89,	// (0x000252c8) fep_china_uni_eep_pane

0x8c91,	// (0x000252d0) fep_china_uni_entry_pane_ParamLimits

0x8ca1,	// (0x000252e0) popup_fep_china_uni_window_g1_ParamLimits

0x8cb1,	// (0x000252f0) popup_fep_china_uni_window_g2_ParamLimits

0x8cb1,	// (0x000252f0) popup_fep_china_uni_window_g2

0x0001,

0xf6f6,	// (0x0002bd35) popup_fep_china_uni_window_g_ParamLimits

0xf6f6,	// (0x0002bd35) popup_fep_china_uni_window_g

0xeaff,	// (0x0002b13e) fep_china_uni_eep_pane_g1

0xeb07,	// (0x0002b146) fep_china_uni_eep_pane_t1

0xe4f9,	// (0x0002ab38) aid_touch_area_size_smil_player

0x9685,	// (0x00025cc4) lc0_clock_pane

0x986c,	// (0x00025eab) status_pane_g5_ParamLimits

0x986c,	// (0x00025eab) status_pane_g5

0x6234,	// (0x00022873) popup_keymap_window

0x982a,	// (0x00025e69) status_icon_pane

0xe706,	// (0x0002ad45) cell_ai5_widget_pane_g3_ParamLimits

0xe720,	// (0x0002ad5f) cell_ai5_widget_pane_g4_ParamLimits

0xe730,	// (0x0002ad6f) cell_ai5_widget_pane_g5_ParamLimits

0xe758,	// (0x0002ad97) cell_ai5_widget_pane_g8_ParamLimits

0xe758,	// (0x0002ad97) cell_ai5_widget_pane_g8

0xe76c,	// (0x0002adab) cell_ai5_widget_pane_g9_ParamLimits

0xe76c,	// (0x0002adab) cell_ai5_widget_pane_g9

0xe780,	// (0x0002adbf) cell_ai5_widget_pane_g10_ParamLimits

0xe780,	// (0x0002adbf) cell_ai5_widget_pane_g10

0xeb16,	// (0x0002b155) status_icon_pane_g1

0x2e19,	// (0x0001f458) bg_popup_sub_pane_cp13

0xeb1e,	// (0x0002b15d) popup_keymap_window_t1

0x9464,	// (0x00025aa3) control_pane_g6_ParamLimits

0x9464,	// (0x00025aa3) control_pane_g6

0x9471,	// (0x00025ab0) control_pane_g7_ParamLimits

0x9471,	// (0x00025ab0) control_pane_g7

0x947e,	// (0x00025abd) control_pane_g8_ParamLimits

0x947e,	// (0x00025abd) control_pane_g8

0xea39,	// (0x0002b078) dt_sta_controll_pane_ParamLimits

0xea46,	// (0x0002b085) dt_sta_indi_pane_ParamLimits

0xea57,	// (0x0002b096) dt_sta_title_pane_ParamLimits

0x8401,	// (0x00024a40) aid_size_touch_scroll_bar_cale

0x589f,	// (0x00021ede) popup_discreet_window_ParamLimits

0x589f,	// (0x00021ede) popup_discreet_window

0x5927,	// (0x00021f66) popup_sk_window

0xa06c,	// (0x000266ab) bg_popup_sub_pane_cp28_ParamLimits

0xa06c,	// (0x000266ab) bg_popup_sub_pane_cp28

0xeb2c,	// (0x0002b16b) popup_discreet_window_g1_ParamLimits

0xeb2c,	// (0x0002b16b) popup_discreet_window_g1

0xeb4c,	// (0x0002b18b) popup_discreet_window_t1_ParamLimits

0xeb4c,	// (0x0002b18b) popup_discreet_window_t1

0xeb6a,	// (0x0002b1a9) popup_discreet_window_t2_ParamLimits

0xeb6a,	// (0x0002b1a9) popup_discreet_window_t2

0x0002,

0xfe82,	// (0x0002c4c1) popup_discreet_window_t_ParamLimits

0xfe82,	// (0x0002c4c1) popup_discreet_window_t

0x7689,	// (0x00023cc8) popup_sk_window_g1

0x7693,	// (0x00023cd2) popup_sk_window_g2

0x0001,

0xfe89,	// (0x0002c4c8) popup_sk_window_g

0x769b,	// (0x00023cda) popup_sk_window_t1

0x76a9,	// (0x00023ce8) popup_sk_window_t1_copy1

0xe6f2,	// (0x0002ad31) cell_ai5_widget_pane_g2_ParamLimits

0xe88d,	// (0x0002aecc) cell_ai5_widget_pane_t9_ParamLimits

0xe88d,	// (0x0002aecc) cell_ai5_widget_pane_t9

0x2e19,	// (0x0001f458) main_fep_fshwr2_pane

0x76b7,	// (0x00023cf6) aid_fshwr2_btn_pane

0x76c7,	// (0x00023d06) aid_fshwr2_syb_pane

0x76db,	// (0x00023d1a) aid_fshwr2_txt_pane

0x76eb,	// (0x00023d2a) fshwr2_func_candi_pane

0x770f,	// (0x00023d4e) fshwr2_hwr_syb_pane

0x7729,	// (0x00023d68) fshwr2_icf_pane

0x2e19,	// (0x0001f458) fshwr2_icf_bg_pane

0x7757,	// (0x00023d96) fshwr2_icf_pane_t1_ParamLimits

0x7757,	// (0x00023d96) fshwr2_icf_pane_t1

0x8b5e,	// (0x0002519d) fshwr2_func_candi_pane_g1

0xebbc,	// (0x0002b1fb) fshwr2_func_candi_row_pane_ParamLimits

0xebbc,	// (0x0002b1fb) fshwr2_func_candi_row_pane

0x776f,	// (0x00023dae) cell_fshwr2_syb_pane_ParamLimits

0x776f,	// (0x00023dae) cell_fshwr2_syb_pane

0xe4c9,	// (0x0002ab08) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4c9,	// (0x0002ab08) fshwr2_hwr_syb_pane_g1

0x2e19,	// (0x0001f458) bg_popup_call_pane_cp01

0x7792,	// (0x00023dd1) fshwr2_func_candi_cell_pane_ParamLimits

0x7792,	// (0x00023dd1) fshwr2_func_candi_cell_pane

0xa6e0,	// (0x00026d1f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6e0,	// (0x00026d1f) fshwr2_func_candi_cell_bg_pane

0x77dd,	// (0x00023e1c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x77dd,	// (0x00023e1c) fshwr2_func_candi_cell_pane_g1

0x7808,	// (0x00023e47) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7808,	// (0x00023e47) fshwr2_func_candi_cell_pane_t1

0x2e19,	// (0x0001f458) bg_button_pane_cp08

0x94b3,	// (0x00025af2) cell_fshwr2_syb_bg_pane

0x781b,	// (0x00023e5a) cell_fshwr2_syb_bg_pane_g1

0x782f,	// (0x00023e6e) cell_fshwr2_syb_bg_pane_t1

0x84c9,	// (0x00024b08) main_tmo_pane

0xab7b,	// (0x000271ba) uni_indicator_pane_g1_ParamLimits

0xab91,	// (0x000271d0) uni_indicator_pane_g2_ParamLimits

0xaba7,	// (0x000271e6) uni_indicator_pane_g3_ParamLimits

0xabba,	// (0x000271f9) uni_indicator_pane_g4_ParamLimits

0xabba,	// (0x000271f9) uni_indicator_pane_g4

0xabce,	// (0x0002720d) uni_indicator_pane_g5_ParamLimits

0xabce,	// (0x0002720d) uni_indicator_pane_g5

0xabce,	// (0x0002720d) uni_indicator_pane_g6_ParamLimits

0xabce,	// (0x0002720d) uni_indicator_pane_g6

0xf8fa,	// (0x0002bf39) uni_indicator_pane_g_ParamLimits

0xd50d,	// (0x00029b4c) popup_tmo_note_window_ParamLimits

0xd50d,	// (0x00029b4c) popup_tmo_note_window

0x84c9,	// (0x00024b08) fshwr2_bg_pane

0x77f9,	// (0x00023e38) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x77f9,	// (0x00023e38) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8e,	// (0x0002c4cd) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8e,	// (0x0002c4cd) fshwr2_func_candi_cell_pane_g

0xc01c,	// (0x0002865b) bg_popup_window_pane_cp01

0x7845,	// (0x00023e84) bg_popup_window_pane_g1_cp01

0xebe3,	// (0x0002b222) bg_popup_window_pane_cp22_ParamLimits

0xebe3,	// (0x0002b222) bg_popup_window_pane_cp22

0xebf1,	// (0x0002b230) listscroll_tmo_link_pane_ParamLimits

0xebf1,	// (0x0002b230) listscroll_tmo_link_pane

0xec31,	// (0x0002b270) popup_tmo_note_window_g1_ParamLimits

0xec31,	// (0x0002b270) popup_tmo_note_window_g1

0xec3e,	// (0x0002b27d) tmo_note_info_pane_ParamLimits

0xec3e,	// (0x0002b27d) tmo_note_info_pane

0xec58,	// (0x0002b297) list_tmo_note_info_pane_g1_ParamLimits

0xec58,	// (0x0002b297) list_tmo_note_info_pane_g1

0xec6f,	// (0x0002b2ae) list_tmo_note_info_pane_g2_ParamLimits

0xec6f,	// (0x0002b2ae) list_tmo_note_info_pane_g2

0x0001,

0xfe93,	// (0x0002c4d2) list_tmo_note_info_pane_g_ParamLimits

0xfe93,	// (0x0002c4d2) list_tmo_note_info_pane_g

0xec8b,	// (0x0002b2ca) list_tmo_note_info_text_pane_ParamLimits

0xec8b,	// (0x0002b2ca) list_tmo_note_info_text_pane

0xed0c,	// (0x0002b34b) list_tmo_link_pane

0xed19,	// (0x0002b358) scroll_pane_cp20

0xed26,	// (0x0002b365) list_single_tmo_link_pane_ParamLimits

0xed26,	// (0x0002b365) list_single_tmo_link_pane

0xed36,	// (0x0002b375) list_single_tmo_link_pane_t1

0xed44,	// (0x0002b383) list_tmo_note_info_text_pane_t1_ParamLimits

0xed44,	// (0x0002b383) list_tmo_note_info_text_pane_t1

0x8585,	// (0x00024bc4) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8585,	// (0x00024bc4) aid_size_touch_scroll_bar_cp01

0x4aa2,	// (0x000210e1) aid_size_touch_slider_marker

0x590f,	// (0x00021f4e) popup_settings_window_ParamLimits

0x590f,	// (0x00021f4e) popup_settings_window

0x4c71,	// (0x000212b0) popup_candi_list_indi_window

0x952f,	// (0x00025b6e) aid_touch_navi_pane_ParamLimits

0x6e79,	// (0x000234b8) rs_clock_indi_pane

0x6e82,	// (0x000234c1) sctrl_sk_bottom_pane_ParamLimits

0x6e93,	// (0x000234d2) sctrl_sk_top_pane_ParamLimits

0x6f72,	// (0x000235b1) popup_fep_tooltip_window

0xe668,	// (0x0002aca7) aid_size_cell_widget_grid_ParamLimits

0xe6dd,	// (0x0002ad1c) cell_ai5_widget_pane_g1_ParamLimits

0xe6dd,	// (0x0002ad1c) cell_ai5_widget_pane_g1

0xe740,	// (0x0002ad7f) cell_ai5_widget_pane_g6_ParamLimits

0xe74c,	// (0x0002ad8b) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe07,	// (0x0002c446) cell_ai5_widget_pane_g_ParamLimits

0xfe07,	// (0x0002c446) cell_ai5_widget_pane_g

0xe8bc,	// (0x0002aefb) cell_ai5_widget_pane_t10_ParamLimits

0xe8bc,	// (0x0002aefb) cell_ai5_widget_pane_t10

0xe8ff,	// (0x0002af3e) grid_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0002afdc) cell_contacts_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0002afdc) cell_contacts_ai5_widget_pane

0xeb7f,	// (0x0002b1be) popup_discreet_window_t3_ParamLimits

0xeb7f,	// (0x0002b1be) popup_discreet_window_t3

0x7741,	// (0x00023d80) popup_fshwr2_char_preview_window_ParamLimits

0x7741,	// (0x00023d80) popup_fshwr2_char_preview_window

0xeca9,	// (0x0002b2e8) tmo_note_info_pane_t1

0xecbe,	// (0x0002b2fd) tmo_note_info_pane_t2

0xecd3,	// (0x0002b312) tmo_note_info_pane_t3

0xece8,	// (0x0002b327) tmo_note_info_pane_t4

0xecfa,	// (0x0002b339) tmo_note_info_pane_t5

0x0004,

0xfe98,	// (0x0002c4d7) tmo_note_info_pane_t

0xed0c,	// (0x0002b34b) list_tmo_link_pane_ParamLimits

0xed19,	// (0x0002b358) scroll_pane_cp20_ParamLimits

0x2e19,	// (0x0001f458) bg_popup_fep_char_preview_window_cp01

0xed5d,	// (0x0002b39c) popup_fshwr2_char_preview_window_t1

0xed6b,	// (0x0002b3aa) popup_candi_list_indi_window_g1

0xed74,	// (0x0002b3b3) bg_cell_contacts_ai5_widget_pane

0xed80,	// (0x0002b3bf) cell_contacts_ai5_widget_pane_g1

0xc6fc,	// (0x00028d3b) cell_contacts_ai5_widget_pane_g2

0xed95,	// (0x0002b3d4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea3,	// (0x0002c4e2) cell_contacts_ai5_widget_pane_g

0xeda1,	// (0x0002b3e0) cell_contacts_ai5_widget_pane_t1

0x84c9,	// (0x00024b08) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee18,	// (0x0002b457) settings_container_pane

0x918f,	// (0x000257ce) listscroll_set_pane_copy1

0xb70d,	// (0x00027d4c) scroll_pane_cp121_copy1

0x9e09,	// (0x00026448) set_content_pane_copy1

0xee24,	// (0x0002b463) aid_height_set_list_copy1_ParamLimits

0xee24,	// (0x0002b463) aid_height_set_list_copy1

0xadb6,	// (0x000273f5) aid_size_parent_copy1_ParamLimits

0xadb6,	// (0x000273f5) aid_size_parent_copy1

0xee30,	// (0x0002b46f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee30,	// (0x0002b46f) button_value_adjust_pane_cp6_copy1

0x94b3,	// (0x00025af2) list_highlight_pane_cp2_copy1_ParamLimits

0x94b3,	// (0x00025af2) list_highlight_pane_cp2_copy1

0xee44,	// (0x0002b483) list_set_pane_copy1_ParamLimits

0xee44,	// (0x0002b483) list_set_pane_copy1

0xedb3,	// (0x0002b3f2) main_pane_set_t1_copy1_ParamLimits

0xedb3,	// (0x0002b3f2) main_pane_set_t1_copy1

0xeded,	// (0x0002b42c) main_pane_set_t2_copy1_ParamLimits

0xeded,	// (0x0002b42c) main_pane_set_t2_copy1

0xeef1,	// (0x0002b530) main_pane_set_t3_copy1

0xeeff,	// (0x0002b53e) main_pane_set_t4_copy1

0xee0c,	// (0x0002b44b) set_content_pane_g1_copy1_ParamLimits

0xee0c,	// (0x0002b44b) set_content_pane_g1_copy1

0xef0d,	// (0x0002b54c) setting_code_pane_copy1

0xef15,	// (0x0002b554) setting_slider_graphic_pane_copy1

0xef15,	// (0x0002b554) setting_slider_pane_copy1

0xef1d,	// (0x0002b55c) setting_text_pane_copy1

0xef1d,	// (0x0002b55c) setting_volume_pane_copy1

0xef0d,	// (0x0002b54c) settings_code_pane_cp2_copy1

0xef25,	// (0x0002b564) settings_code_pane_cp_copy1_ParamLimits

0xef25,	// (0x0002b564) settings_code_pane_cp_copy1

0x784e,	// (0x00023e8d) volume_set_pane_copy1

0xef39,	// (0x0002b578) volume_set_pane_g10_copy1

0xef41,	// (0x0002b580) volume_set_pane_g1_copy1

0xef49,	// (0x0002b588) volume_set_pane_g2_copy1

0xef51,	// (0x0002b590) volume_set_pane_g3_copy1

0xef59,	// (0x0002b598) volume_set_pane_g4_copy1

0xef61,	// (0x0002b5a0) volume_set_pane_g5_copy1

0xef69,	// (0x0002b5a8) volume_set_pane_g6_copy1

0xef71,	// (0x0002b5b0) volume_set_pane_g7_copy1

0xef79,	// (0x0002b5b8) volume_set_pane_g8_copy1

0xef81,	// (0x0002b5c0) volume_set_pane_g9_copy1

0x7c3c,	// (0x0002427b) bg_set_opt_pane_cp_copy1_ParamLimits

0x7c3c,	// (0x0002427b) bg_set_opt_pane_cp_copy1

0x7856,	// (0x00023e95) setting_slider_pane_t1_copy1_ParamLimits

0x7856,	// (0x00023e95) setting_slider_pane_t1_copy1

0x7875,	// (0x00023eb4) setting_slider_pane_t2_copy1_ParamLimits

0x7875,	// (0x00023eb4) setting_slider_pane_t2_copy1

0x788f,	// (0x00023ece) setting_slider_pane_t3_copy1_ParamLimits

0x788f,	// (0x00023ece) setting_slider_pane_t3_copy1

0x78a7,	// (0x00023ee6) slider_set_pane_copy1_ParamLimits

0x78a7,	// (0x00023ee6) slider_set_pane_copy1

0x8521,	// (0x00024b60) set_opt_bg_pane_g1_copy2

0x8529,	// (0x00024b68) set_opt_bg_pane_g2_copy2

0xef89,	// (0x0002b5c8) set_opt_bg_pane_g3_copy2

0x8539,	// (0x00024b78) set_opt_bg_pane_g4_copy2

0x8541,	// (0x00024b80) set_opt_bg_pane_g5_copy2

0x8549,	// (0x00024b88) set_opt_bg_pane_g6_copy2

0xef93,	// (0x0002b5d2) set_opt_bg_pane_g7_copy2

0xef9b,	// (0x0002b5da) set_opt_bg_pane_g8_copy2

0xefa5,	// (0x0002b5e4) set_opt_bg_pane_g9_copy2

0x78bd,	// (0x00023efc) aid_size_touch_slider_mark_copy1_ParamLimits

0x78bd,	// (0x00023efc) aid_size_touch_slider_mark_copy1

0xefaf,	// (0x0002b5ee) slider_set_pane_g1_copy1

0x78d1,	// (0x00023f10) slider_set_pane_g2_copy1

0x695c,	// (0x00022f9b) slider_set_pane_g3_copy1_ParamLimits

0x695c,	// (0x00022f9b) slider_set_pane_g3_copy1

0x6970,	// (0x00022faf) slider_set_pane_g4_copy1_ParamLimits

0x6970,	// (0x00022faf) slider_set_pane_g4_copy1

0x6988,	// (0x00022fc7) slider_set_pane_g5_copy1_ParamLimits

0x6988,	// (0x00022fc7) slider_set_pane_g5_copy1

0x695c,	// (0x00022f9b) slider_set_pane_g6_copy1_ParamLimits

0x695c,	// (0x00022f9b) slider_set_pane_g6_copy1

0x78d9,	// (0x00023f18) slider_set_pane_g7_copy1_ParamLimits

0x78d9,	// (0x00023f18) slider_set_pane_g7_copy1

0x2e2d,	// (0x0001f46c) bg_set_opt_pane_cp2_copy1

0xefb8,	// (0x0002b5f7) setting_slider_graphic_pane_g1_copy1

0xefc1,	// (0x0002b600) setting_slider_graphic_pane_t1_copy1

0xefd1,	// (0x0002b610) setting_slider_graphic_pane_t2_copy1

0xefe1,	// (0x0002b620) slider_set_pane_cp_copy1

0xeff1,	// (0x0002b630) input_focus_pane_cp1_copy1

0xeffa,	// (0x0002b639) list_set_text_pane_copy1

0xf002,	// (0x0002b641) setting_text_pane_g1_copy1

0x449c,	// (0x00020adb) set_text_pane_t1_copy1

0xeff1,	// (0x0002b630) input_focus_pane_cp2_copy1

0xf002,	// (0x0002b641) setting_code_pane_g1_copy1

0xf00b,	// (0x0002b64a) setting_code_pane_t1_copy1

0xb535,	// (0x00027b74) list_set_graphic_pane_copy1

0x2e2d,	// (0x0001f46c) bg_set_opt_pane_cp4_copy1

0x8e88,	// (0x000254c7) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e88,	// (0x000254c7) list_set_graphic_pane_g1_copy1

0xf019,	// (0x0002b658) list_set_graphic_pane_g2_copy1

0x8ea0,	// (0x000254df) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ea0,	// (0x000254df) list_set_graphic_pane_t1_copy1

0xc01c,	// (0x0002865b) rs_clock_indi_pane_g1

0xf021,	// (0x0002b660) rs_clock_indi_pane_t1

0xf02f,	// (0x0002b66e) rs_indi_pane

0xf037,	// (0x0002b676) rs_indi_pane_g1

0xf040,	// (0x0002b67f) rs_indi_pane_g2

0xf049,	// (0x0002b688) rs_indi_pane_g3

0x0002,

0xfeaa,	// (0x0002c4e9) rs_indi_pane_g

0x918f,	// (0x000257ce) bg_popup_preview_window_pane_cp03

0xf052,	// (0x0002b691) popup_fep_tooltip_window_t1

0xccac,	// (0x000292eb) popup_note2_window_g2_ParamLimits

0xccac,	// (0x000292eb) popup_note2_window_g2

0x0001,

0xfc37,	// (0x0002c276) popup_note2_window_g_ParamLimits

0xfc37,	// (0x0002c276) popup_note2_window_g

0xd1a7,	// (0x000297e6) bg_popup_sub_pane_cp11_ParamLimits

0xd1b4,	// (0x000297f3) cell_ai3_links_pane_g1_ParamLimits

0xd1cb,	// (0x0002980a) cell_ai3_links_pane_t1

0x449c,	// (0x00020adb) set_text_pane_t1_copy1_ParamLimits

0x9093,	// (0x000256d2) cell_graphic_popup_pane_cp2_ParamLimits

0x9093,	// (0x000256d2) cell_graphic_popup_pane_cp2

0xf060,	// (0x0002b69f) cell_graphic_popup_pane_g1_cp2

0x8214,	// (0x00024853) cell_graphic_popup_pane_g2_cp2

0xf068,	// (0x0002b6a7) cell_graphic_popup_pane_g3_cp2

0xf070,	// (0x0002b6af) cell_graphic_popup_pane_t2_cp2

0x8225,	// (0x00024864) grid_highlight_pane_cp3_cp2

0x8879,	// (0x00024eb8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84c9,	// (0x00024b08) main_tmo_pane_ParamLimits

0xd501,	// (0x00029b40) popup_tmo_big_image_note_window

0xe6cc,	// (0x0002ad0b) cell_ai5_widget_list_pane

0xe6d4,	// (0x0002ad13) cell_ai5_widget_lrg_icon_pane

0xeca9,	// (0x0002b2e8) tmo_note_info_pane_t1_ParamLimits

0xecbe,	// (0x0002b2fd) tmo_note_info_pane_t2_ParamLimits

0xecd3,	// (0x0002b312) tmo_note_info_pane_t3_ParamLimits

0xece8,	// (0x0002b327) tmo_note_info_pane_t4_ParamLimits

0xecfa,	// (0x0002b339) tmo_note_info_pane_t5_ParamLimits

0xfe98,	// (0x0002c4d7) tmo_note_info_pane_t_ParamLimits

0xee18,	// (0x0002b457) settings_container_pane_ParamLimits

0xefe9,	// (0x0002b628) indicator_popup_pane_cp5

0xefe9,	// (0x0002b628) indicator_popup_pane_cp6

0xb535,	// (0x00027b74) list_set_graphic_pane_copy1_ParamLimits

0x2e19,	// (0x0001f458) bg_popup_window_pane_cp23

0xf07e,	// (0x0002b6bd) popup_tmo_big_image_note_window_g1

0xf088,	// (0x0002b6c7) popup_tmo_big_image_note_window_t1

0xf098,	// (0x0002b6d7) popup_tmo_big_image_note_window_t2

0xf0a8,	// (0x0002b6e7) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb1,	// (0x0002c4f0) popup_tmo_big_image_note_window_t

0xc01c,	// (0x0002865b) cell_ai5_widget_lrg_icon_pane_g1

0xf0b8,	// (0x0002b6f7) cell_ai5_widget_lrg_icon_pane_t1

0xf0c6,	// (0x0002b705) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c6,	// (0x0002b705) cell_ai5_widget_list_row_pane

0xf0dd,	// (0x0002b71c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0dd,	// (0x0002b71c) cell_ai5_widget_list_row_pane_g1

0xf0ea,	// (0x0002b729) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ea,	// (0x0002b729) cell_ai5_widget_list_row_pane_t1

0xf115,	// (0x0002b754) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf115,	// (0x0002b754) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb8,	// (0x0002c4f7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb8,	// (0x0002c4f7) cell_ai5_widget_list_row_pane_t

0x2e19,	// (0x0001f458) main_fep_vtchi_ss_pane

0xf165,	// (0x0002b7a4) popup_fep_char_pre_window

0xf16d,	// (0x0002b7ac) popup_fep_ituss_window

0xf19f,	// (0x0002b7de) popup_fep_vkbss_window

0x94b3,	// (0x00025af2) grid_vkbss_keypad_pane_ParamLimits

0x94b3,	// (0x00025af2) grid_vkbss_keypad_pane

0xf1e5,	// (0x0002b824) ituss_keypad_pane

0x791a,	// (0x00023f59) aid_vkbss_key_offset_ParamLimits

0x791a,	// (0x00023f59) aid_vkbss_key_offset

0x7926,	// (0x00023f65) cell_vkbss_key_pane_ParamLimits

0x7926,	// (0x00023f65) cell_vkbss_key_pane

0xf1f1,	// (0x0002b830) bg_cell_vkbss_key_g1_ParamLimits

0xf1f1,	// (0x0002b830) bg_cell_vkbss_key_g1

0xf1fd,	// (0x0002b83c) cell_vkbss_key_3p_pane_ParamLimits

0xf1fd,	// (0x0002b83c) cell_vkbss_key_3p_pane

0xf233,	// (0x0002b872) cell_vkbss_key_g1_ParamLimits

0xf233,	// (0x0002b872) cell_vkbss_key_g1

0xf269,	// (0x0002b8a8) cell_vkbss_key_t1_ParamLimits

0xf269,	// (0x0002b8a8) cell_vkbss_key_t1

0x7984,	// (0x00023fc3) cell_ituss_key_pane_ParamLimits

0x7984,	// (0x00023fc3) cell_ituss_key_pane

0xf2c5,	// (0x0002b904) bg_cell_ituss_key_g1_ParamLimits

0xf2c5,	// (0x0002b904) bg_cell_ituss_key_g1

0xf2d1,	// (0x0002b910) cell_ituss_key_pane_g1_ParamLimits

0xf2d1,	// (0x0002b910) cell_ituss_key_pane_g1

0x7995,	// (0x00023fd4) cell_ituss_key_pane_g2_ParamLimits

0x7995,	// (0x00023fd4) cell_ituss_key_pane_g2

0x0005,

0xfebf,	// (0x0002c4fe) cell_ituss_key_pane_g_ParamLimits

0xfebf,	// (0x0002c4fe) cell_ituss_key_pane_g

0x7a19,	// (0x00024058) cell_ituss_key_t1_ParamLimits

0x7a19,	// (0x00024058) cell_ituss_key_t1

0x7a53,	// (0x00024092) cell_ituss_key_t2_ParamLimits

0x7a53,	// (0x00024092) cell_ituss_key_t2

0x7a85,	// (0x000240c4) cell_ituss_key_t3_ParamLimits

0x7a85,	// (0x000240c4) cell_ituss_key_t3

0x7ab6,	// (0x000240f5) cell_ituss_key_t4_ParamLimits

0x7ab6,	// (0x000240f5) cell_ituss_key_t4

0x0005,

0xfecc,	// (0x0002c50b) cell_ituss_key_t_ParamLimits

0xfecc,	// (0x0002c50b) cell_ituss_key_t

0xf2f7,	// (0x0002b936) cell_vkbss_key_3p_pane_g1

0xf2ff,	// (0x0002b93e) cell_vkbss_key_3p_pane_g2

0xf307,	// (0x0002b946) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x0002c518) cell_vkbss_key_3p_pane_g

0x918f,	// (0x000257ce) bg_popup_fep_char_preview_window_cp02

0xf30f,	// (0x0002b94e) popup_fep_char_pre_window_t1

0xe655,	// (0x0002ac94) main_ai5_sk_pane

0xed74,	// (0x0002b3b3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed80,	// (0x0002b3bf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6fc,	// (0x00028d3b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed95,	// (0x0002b3d4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea3,	// (0x0002c4e2) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda1,	// (0x0002b3e0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84c9,	// (0x00024b08) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31d,	// (0x0002b95c) main_ai5_sk_pane_g1

0x9ea5,	// (0x000264e4) popup_query_code_window_g1

0xf186,	// (0x0002b7c5) popup_fep_vkb_icf_pane

0xf1b9,	// (0x0002b7f8) popup_fep_vtchi_icf_pane

0xf326,	// (0x0002b965) bg_icf_pane

0xf326,	// (0x0002b965) list_vkb_icf_pane

0xf332,	// (0x0002b971) bg_icf_pane_cp01

0xf345,	// (0x0002b984) vtchi_icf_list_pane

0xf3a5,	// (0x0002b9e4) list_vkb_icf_pane_t1_ParamLimits

0xf3a5,	// (0x0002b9e4) list_vkb_icf_pane_t1

0xf3c3,	// (0x0002ba02) vtchi_icf_list_pane_t1_ParamLimits

0xf3c3,	// (0x0002ba02) vtchi_icf_list_pane_t1

0xf16d,	// (0x0002b7ac) popup_fep_ituss_window_ParamLimits

0xf1b9,	// (0x0002b7f8) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e5,	// (0x0002b824) ituss_keypad_pane_ParamLimits

0x7910,	// (0x00023f4f) ituss_sks_pane

0xf326,	// (0x0002b965) bg_icf_pane_ParamLimits

0xf13d,	// (0x0002b77c) icf_edit_indi_pane_ParamLimits

0xf13d,	// (0x0002b77c) icf_edit_indi_pane

0xf326,	// (0x0002b965) list_vkb_icf_pane_ParamLimits

0xf332,	// (0x0002b971) bg_icf_pane_cp01_ParamLimits

0xf158,	// (0x0002b797) icf_edit_indi_pane_cp01_ParamLimits

0xf158,	// (0x0002b797) icf_edit_indi_pane_cp01

0xf345,	// (0x0002b984) vtchi_query_pane

0xe4c9,	// (0x0002ab08) icf_edit_indi_pane_g1_ParamLimits

0xe4c9,	// (0x0002ab08) icf_edit_indi_pane_g1

0xf438,	// (0x0002ba77) icf_edit_indi_pane_g2_ParamLimits

0xf438,	// (0x0002ba77) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0002c543) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0002c543) icf_edit_indi_pane_g

0xf44c,	// (0x0002ba8b) icf_edit_indi_pane_t1

0xf3e1,	// (0x0002ba20) bg_input_focus_pane_cp042

0x83f8,	// (0x00024a37) vtchi_button_pane

0xf3ea,	// (0x0002ba29) vtchi_query_pane_t1

0xf3f8,	// (0x0002ba37) vtchi_query_pane_t2

0xf406,	// (0x0002ba45) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0002c532) vtchi_query_pane_t

0x2e19,	// (0x0001f458) bg_button_pane_cp13

0xf414,	// (0x0002ba53) vtchi_button_pane_g1

0x7b37,	// (0x00024176) ituss_sks_pane_g1

0x7b42,	// (0x00024181) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0002c539) ituss_sks_pane_g

0xf41c,	// (0x0002ba5b) ituss_sks_pane_t1

0xf42a,	// (0x0002ba69) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002c53e) ituss_sks_pane_t

0xbaa5,	// (0x000280e4) indicator_nsta_pane_cp_g1

0xbaae,	// (0x000280ed) indicator_nsta_pane_cp_g2

0xbab6,	// (0x000280f5) indicator_nsta_pane_cp_g3

0xbabe,	// (0x000280fd) indicator_nsta_pane_cp_g4

0xbaae,	// (0x000280ed) indicator_nsta_pane_cp_g5

0xbab6,	// (0x000280f5) indicator_nsta_pane_cp_g6

0x0005,

0xfa81,	// (0x0002c0c0) indicator_nsta_pane_cp_g

0xe204,	// (0x0002a843) cell_graphic2_pane_t2_ParamLimits

0xe204,	// (0x0002a843) cell_graphic2_pane_t2

0x0001,

0xfd8e,	// (0x0002c3cd) cell_graphic2_pane_t_ParamLimits

0xfd8e,	// (0x0002c3cd) cell_graphic2_pane_t

0xe230,	// (0x0002a86f) cell_graphic2_control_pane_t1

0x8c38,	// (0x00025277) signal_pane_g3_ParamLimits

0x8c38,	// (0x00025277) signal_pane_g3

0x8c4a,	// (0x00025289) signal_pane_g4_ParamLimits

0x8c4a,	// (0x00025289) signal_pane_g4

0xf127,	// (0x0002b766) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf127,	// (0x0002b766) cell_ai5_widget_list_row_pane_t3

0xf2e5,	// (0x0002b924) cell_ituss_key_pane_t1_ParamLimits

0xf2e5,	// (0x0002b924) cell_ituss_key_pane_t1

0x9ae2,	// (0x00026121) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ae2,	// (0x00026121) form_field_data_wide_pane_vc_t2

0x9af6,	// (0x00026135) form_field_data_wide_pane_vc_t3_ParamLimits

0x9af6,	// (0x00026135) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002be21) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002be21) form_field_data_wide_pane_vc_t

0xb74f,	// (0x00027d8e) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb74f,	// (0x00027d8e) form_field_slider_wide_pane_vc_t3

0xb82d,	// (0x00027e6c) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb82d,	// (0x00027e6c) form_field_popup_wide_pane_vc_t2

0xb844,	// (0x00027e83) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb844,	// (0x00027e83) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa70,	// (0x0002c0af) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa70,	// (0x0002c0af) form_field_popup_wide_pane_vc_t

0x76b7,	// (0x00023cf6) aid_fshwr2_btn_pane_ParamLimits

0x76c7,	// (0x00023d06) aid_fshwr2_syb_pane_ParamLimits

0x76db,	// (0x00023d1a) aid_fshwr2_txt_pane_ParamLimits

0x84c9,	// (0x00024b08) fshwr2_bg_pane_ParamLimits

0x76eb,	// (0x00023d2a) fshwr2_func_candi_pane_ParamLimits

0x770f,	// (0x00023d4e) fshwr2_hwr_syb_pane_ParamLimits

0x7729,	// (0x00023d68) fshwr2_icf_pane_ParamLimits

0x51e6,	// (0x00021825) list_double_graphic_pane_vc_g4_ParamLimits

0x51e6,	// (0x00021825) list_double_graphic_pane_vc_g4

0x79b5,	// (0x00023ff4) cell_ituss_key_pane_g3_ParamLimits

0x79b5,	// (0x00023ff4) cell_ituss_key_pane_g3

0x7ae7,	// (0x00024126) cell_ituss_key_t5_ParamLimits

0x7ae7,	// (0x00024126) cell_ituss_key_t5

0xf19f,	// (0x0002b7de) popup_fep_vkbss_window_ParamLimits

0xe65f,	// (0x0002ac9e) aid_cell_ai5_quarter

0xf44c,	// (0x0002ba8b) icf_edit_indi_pane_t1_ParamLimits

0x7f6d,	// (0x000245ac) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7f6d,	// (0x000245ac) aid_tch_indicator_popup_pane_cp2

0x7f80,	// (0x000245bf) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7f80,	// (0x000245bf) aid_tch_query_popup_data_pane_cp2

0x9e4d,	// (0x0002648c) aid_tch_query_popup_pane_ParamLimits

0x9e4d,	// (0x0002648c) aid_tch_query_popup_pane

0x9e4d,	// (0x0002648c) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e4d,	// (0x0002648c) aid_tch_query_popup_data_pane_cp1

0x94b3,	// (0x00025af2) cell_fshwr2_syb_bg_pane_ParamLimits

0x781b,	// (0x00023e5a) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x782f,	// (0x00023e6e) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf186,	// (0x0002b7c5) popup_fep_vkb_icf_pane_ParamLimits

0x7505,	// (0x00023b44) bg_popup_fep_char_preview_window_g10

0xe794,	// (0x0002add3) cell_ai5_widget_pane_g11_ParamLimits

0xe794,	// (0x0002add3) cell_ai5_widget_pane_g11

0xe7a0,	// (0x0002addf) cell_ai5_widget_pane_g12_ParamLimits

0xe7a0,	// (0x0002addf) cell_ai5_widget_pane_g12

0xe7ac,	// (0x0002adeb) cell_ai5_widget_pane_g13_ParamLimits

0xe7ac,	// (0x0002adeb) cell_ai5_widget_pane_g13

0xe8db,	// (0x0002af1a) cell_ai5_widget_pane_t11_ParamLimits

0xe8db,	// (0x0002af1a) cell_ai5_widget_pane_t11

0xe8ed,	// (0x0002af2c) cell_ai5_widget_pane_t12_ParamLimits

0xe8ed,	// (0x0002af2c) cell_ai5_widget_pane_t12

0x79c1,	// (0x00024000) cell_ituss_key_pane_g4_ParamLimits

0x79c1,	// (0x00024000) cell_ituss_key_pane_g4

0x79dd,	// (0x0002401c) cell_ituss_key_pane_g5_ParamLimits

0x79dd,	// (0x0002401c) cell_ituss_key_pane_g5

0x79f9,	// (0x00024038) cell_ituss_key_pane_g6_ParamLimits

0x79f9,	// (0x00024038) cell_ituss_key_pane_g6

0x99dd,	// (0x0002601c) bg_icf_pane_g1

0xf34d,	// (0x0002b98c) bg_icf_pane_g2

0xf359,	// (0x0002b998) bg_icf_pane_g3

0xf363,	// (0x0002b9a2) bg_icf_pane_g4

0xf36f,	// (0x0002b9ae) bg_icf_pane_g5

0xf379,	// (0x0002b9b8) bg_icf_pane_g6

0xf385,	// (0x0002b9c4) bg_icf_pane_g7

0xf38f,	// (0x0002b9ce) bg_icf_pane_g8

0xf39b,	// (0x0002b9da) bg_icf_pane_g9

0x0008,

0xfee0,	// (0x0002c51f) bg_icf_pane_g

0xf1d2,	// (0x0002b811) popup_hyb_candi_window_ParamLimits

0xf1d2,	// (0x0002b811) popup_hyb_candi_window

0x9a51,	// (0x00026090) bg_popup_sub_pane_cp01_ParamLimits

0x9a51,	// (0x00026090) bg_popup_sub_pane_cp01

0xf465,	// (0x0002baa4) entry_hyb_candi_pane_ParamLimits

0xf465,	// (0x0002baa4) entry_hyb_candi_pane

0xf474,	// (0x0002bab3) grid_hyb_candi_pane_ParamLimits

0xf474,	// (0x0002bab3) grid_hyb_candi_pane

0xf489,	// (0x0002bac8) grid_hyb_phrase_pane_ParamLimits

0xf489,	// (0x0002bac8) grid_hyb_phrase_pane

0xf498,	// (0x0002bad7) cell_hyb_candi_pane_ParamLimits

0xf498,	// (0x0002bad7) cell_hyb_candi_pane

0xf4bb,	// (0x0002bafa) cell_hyb_candi_scroll_pane

0x8b5e,	// (0x0002519d) cell_hyb_candi_pane_g1

0xf4c4,	// (0x0002bb03) cell_hyb_candi_pane_t1

0xf4d2,	// (0x0002bb11) cell_hyb_phrase_pane

0x8b5e,	// (0x0002519d) cell_hyb_phrase_pane_g1

0xf4db,	// (0x0002bb1a) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x0002bb28) entry_hyb_candi_pane_t1

0x918f,	// (0x000257ce) input_focus_pane_cp06

0xf4f7,	// (0x0002bb36) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x0002bb3e) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x0002bb46) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x0002bb4e) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x0002bb56) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x0002bb5e) cell_hyb_candi_scroll_pane_g4

0xe58a,	// (0x0002abc9) ai5_page_g1

0x7af9,	// (0x00024138) cell_ituss_key_t6_ParamLimits

0x7af9,	// (0x00024138) cell_ituss_key_t6

0x78ef,	// (0x00023f2e) icf_edit_indi_pane_cp02_ParamLimits

0x78ef,	// (0x00023f2e) icf_edit_indi_pane_cp02

0x7903,	// (0x00023f42) icf_edit_indi_pane_cp03_ParamLimits

0x7903,	// (0x00023f42) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small

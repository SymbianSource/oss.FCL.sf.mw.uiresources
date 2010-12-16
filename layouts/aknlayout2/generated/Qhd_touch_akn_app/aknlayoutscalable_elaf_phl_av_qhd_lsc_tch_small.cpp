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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00021018 };

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
0xbdeb,	// (0x0002ce03) Screen

0xbdf7,	// (0x0002ce0f) application_window_ParamLimits

0xbdf7,	// (0x0002ce0f) application_window

0xeb6a,	// (0x0002fb82) screen_g1

0xbe2f,	// (0x0002ce47) area_bottom_pane_ParamLimits

0xbe2f,	// (0x0002ce47) area_bottom_pane

0x0d63,	// (0x00021d7b) area_top_pane_ParamLimits

0x0d63,	// (0x00021d7b) area_top_pane

0x0df7,	// (0x00021e0f) main_pane_ParamLimits

0x0df7,	// (0x00021e0f) main_pane

0xeb74,	// (0x0002fb8c) misc_graphics

0xd68b,	// (0x0002e6a3) battery_pane_ParamLimits

0xd68b,	// (0x0002e6a3) battery_pane

0x586c,	// (0x00026884) bg_status_flat_pane_g8

0x5874,	// (0x0002688c) bg_status_flat_pane_g9

0x4c52,	// (0x00025c6a) context_pane_ParamLimits

0x4c52,	// (0x00025c6a) context_pane

0xd7f6,	// (0x0002e80e) navi_pane_ParamLimits

0xd7f6,	// (0x0002e80e) navi_pane

0xd874,	// (0x0002e88c) signal_pane_ParamLimits

0xd874,	// (0x0002e88c) signal_pane

0x0008,

0xf84d,	// (0x00030865) bg_status_flat_pane_g

0xd904,	// (0x0002e91c) status_pane_g1_ParamLimits

0xd904,	// (0x0002e91c) status_pane_g1

0xd91a,	// (0x0002e932) status_pane_g2_ParamLimits

0xd91a,	// (0x0002e932) status_pane_g2

0x4e79,	// (0x00025e91) status_pane_g3_ParamLimits

0x4e79,	// (0x00025e91) status_pane_g3

0x0004,

0xf779,	// (0x00030791) status_pane_g_ParamLimits

0xf779,	// (0x00030791) status_pane_g

0xd926,	// (0x0002e93e) title_pane_ParamLimits

0xd926,	// (0x0002e93e) title_pane

0xd987,	// (0x0002e99f) uni_indicator_pane_ParamLimits

0xd987,	// (0x0002e99f) uni_indicator_pane

0x4aba,	// (0x00025ad2) bg_list_pane_ParamLimits

0x4aba,	// (0x00025ad2) bg_list_pane

0xbb4b,	// (0x0002cb63) find_pane

0x5078,	// (0x00026090) listscroll_app_pane_ParamLimits

0x5078,	// (0x00026090) listscroll_app_pane

0x4ae6,	// (0x00025afe) listscroll_form_pane

0xbb53,	// (0x0002cb6b) listscroll_gen_pane_ParamLimits

0xbb53,	// (0x0002cb6b) listscroll_gen_pane

0x16d0,	// (0x000226e8) listscroll_set_pane

0x63dd,	// (0x000273f5) main_idle_act_pane

0x47b6,	// (0x000257ce) main_idle_trad_pane

0x47b6,	// (0x000257ce) main_list_empty_pane

0x4ada,	// (0x00025af2) main_midp_pane

0x4b00,	// (0x00025b18) main_pane_g1_ParamLimits

0x4b00,	// (0x00025b18) main_pane_g1

0xc769,	// (0x0002d781) popup_ai_message_window_ParamLimits

0xc769,	// (0x0002d781) popup_ai_message_window

0xc7fa,	// (0x0002d812) popup_fep_china_uni_window_ParamLimits

0xc7fa,	// (0x0002d812) popup_fep_china_uni_window

0x17da,	// (0x000227f2) popup_fep_japan_candidate_window_ParamLimits

0x17da,	// (0x000227f2) popup_fep_japan_candidate_window

0x17fa,	// (0x00022812) popup_fep_japan_predictive_window_ParamLimits

0x17fa,	// (0x00022812) popup_fep_japan_predictive_window

0xc856,	// (0x0002d86e) popup_find_window

0xc873,	// (0x0002d88b) popup_grid_graphic_window_ParamLimits

0xc873,	// (0x0002d88b) popup_grid_graphic_window

0x1863,	// (0x0002287b) popup_large_graphic_colour_window

0xc917,	// (0x0002d92f) popup_menu_window_ParamLimits

0xc917,	// (0x0002d92f) popup_menu_window

0xcae9,	// (0x0002db01) popup_note_image_window

0xcaaf,	// (0x0002dac7) popup_note_wait_window_ParamLimits

0xcaaf,	// (0x0002dac7) popup_note_wait_window

0xcb01,	// (0x0002db19) popup_note_window_ParamLimits

0xcb01,	// (0x0002db19) popup_note_window

0xcba7,	// (0x0002dbbf) popup_query_code_window_ParamLimits

0xcba7,	// (0x0002dbbf) popup_query_code_window

0x1aab,	// (0x00022ac3) popup_query_data_code_window_ParamLimits

0x1aab,	// (0x00022ac3) popup_query_data_code_window

0xcbe1,	// (0x0002dbf9) popup_query_data_window_ParamLimits

0xcbe1,	// (0x0002dbf9) popup_query_data_window

0xcc63,	// (0x0002dc7b) popup_query_sat_info_window_ParamLimits

0xcc63,	// (0x0002dc7b) popup_query_sat_info_window

0xccfa,	// (0x0002dd12) popup_snote_single_graphic_window_ParamLimits

0xccfa,	// (0x0002dd12) popup_snote_single_graphic_window

0xccfa,	// (0x0002dd12) popup_snote_single_text_window_ParamLimits

0xccfa,	// (0x0002dd12) popup_snote_single_text_window

0x1b32,	// (0x00022b4a) popup_sub_window_general

0x1c62,	// (0x00022c7a) popup_window_general_ParamLimits

0x1c62,	// (0x00022c7a) popup_window_general

0x4b0e,	// (0x00025b26) power_save_pane

0xc5ea,	// (0x0002d602) control_pane_g1_ParamLimits

0xc5ea,	// (0x0002d602) control_pane_g1

0xc613,	// (0x0002d62b) control_pane_g2_ParamLimits

0xc613,	// (0x0002d62b) control_pane_g2

0x4a7d,	// (0x00025a95) control_pane_g3_ParamLimits

0x4a7d,	// (0x00025a95) control_pane_g3

0x0007,

0xf761,	// (0x00030779) control_pane_g_ParamLimits

0xf761,	// (0x00030779) control_pane_g

0xc654,	// (0x0002d66c) control_pane_t1_ParamLimits

0xc654,	// (0x0002d66c) control_pane_t1

0xc6bc,	// (0x0002d6d4) control_pane_t2_ParamLimits

0xc6bc,	// (0x0002d6d4) control_pane_t2

0x0002,

0xf772,	// (0x0003078a) control_pane_t_ParamLimits

0xf772,	// (0x0003078a) control_pane_t

0x49a2,	// (0x000259ba) navi_navi_volume_pane_cp1

0x49aa,	// (0x000259c2) status_small_icon_pane

0x49b2,	// (0x000259ca) status_small_pane_g1_ParamLimits

0x49b2,	// (0x000259ca) status_small_pane_g1

0x49e6,	// (0x000259fe) status_small_pane_g2_ParamLimits

0x49e6,	// (0x000259fe) status_small_pane_g2

0x49f2,	// (0x00025a0a) status_small_pane_g3_ParamLimits

0x49f2,	// (0x00025a0a) status_small_pane_g3

0xd5a7,	// (0x0002e5bf) status_small_pane_g4_ParamLimits

0xd5a7,	// (0x0002e5bf) status_small_pane_g4

0xd5b5,	// (0x0002e5cd) status_small_pane_g5_ParamLimits

0xd5b5,	// (0x0002e5cd) status_small_pane_g5

0x4a18,	// (0x00025a30) status_small_pane_g6_ParamLimits

0x4a18,	// (0x00025a30) status_small_pane_g6

0x0007,

0xf750,	// (0x00030768) status_small_pane_g_ParamLimits

0xf750,	// (0x00030768) status_small_pane_g

0x4a47,	// (0x00025a5f) status_small_pane_t1

0xd5cb,	// (0x0002e5e3) status_small_wait_pane_ParamLimits

0xd5cb,	// (0x0002e5e3) status_small_wait_pane

0xc4ca,	// (0x0002d4e2) aid_levels_signal_ParamLimits

0xc4ca,	// (0x0002d4e2) aid_levels_signal

0xc4e2,	// (0x0002d4fa) signal_pane_g1_ParamLimits

0xc4e2,	// (0x0002d4fa) signal_pane_g1

0xc4fd,	// (0x0002d515) signal_pane_g2_ParamLimits

0xc4fd,	// (0x0002d515) signal_pane_g2

0x0003,

0xf6e1,	// (0x000306f9) signal_pane_g_ParamLimits

0xf6e1,	// (0x000306f9) signal_pane_g

0x4285,	// (0x0002529d) context_pane_g1

0xbfcb,	// (0x0002cfe3) title_pane_g1

0xc002,	// (0x0002d01a) title_pane_t1

0x322b,	// (0x00024243) title_pane_t2

0x3251,	// (0x00024269) title_pane_t3

0x0002,

0xf530,	// (0x00030548) title_pane_t

0xd9af,	// (0x0002e9c7) aid_levels_battery_ParamLimits

0xd9af,	// (0x0002e9c7) aid_levels_battery

0xd9cb,	// (0x0002e9e3) battery_pane_g1_ParamLimits

0xd9cb,	// (0x0002e9e3) battery_pane_g1

0xd9e8,	// (0x0002ea00) battery_pane_g2_ParamLimits

0xd9e8,	// (0x0002ea00) battery_pane_g2

0x0001,

0xf784,	// (0x0003079c) battery_pane_g_ParamLimits

0xf784,	// (0x0003079c) battery_pane_g

0xdba9,	// (0x0002ebc1) uni_indicator_pane_g1

0xdbbf,	// (0x0002ebd7) uni_indicator_pane_g2

0xdbd5,	// (0x0002ebed) uni_indicator_pane_g3

0x0005,

0xf8f5,	// (0x0003090d) uni_indicator_pane_g

0x461b,	// (0x00025633) navi_icon_pane_ParamLimits

0x461b,	// (0x00025633) navi_icon_pane

0x4564,	// (0x0002557c) navi_midp_pane

0x4637,	// (0x0002564f) navi_navi_pane

0x4641,	// (0x00025659) navi_text_pane_ParamLimits

0x4641,	// (0x00025659) navi_text_pane

0xeb6a,	// (0x0002fb82) status_small_wait_pane_g1

0x36a6,	// (0x000246be) status_small_wait_pane_g2

0x0001,

0xf8f0,	// (0x00030908) status_small_wait_pane_g

0x5ec7,	// (0x00026edf) navi_navi_icon_text_pane

0x5ecf,	// (0x00026ee7) navi_navi_pane_g1_ParamLimits

0x5ecf,	// (0x00026ee7) navi_navi_pane_g1

0x5ee1,	// (0x00026ef9) navi_navi_pane_g2_ParamLimits

0x5ee1,	// (0x00026ef9) navi_navi_pane_g2

0x0001,

0xf8be,	// (0x000308d6) navi_navi_pane_g_ParamLimits

0xf8be,	// (0x000308d6) navi_navi_pane_g

0x5ef3,	// (0x00026f0b) navi_navi_tabs_pane

0x5efc,	// (0x00026f14) navi_navi_text_pane

0x5ec7,	// (0x00026edf) navi_navi_volume_pane

0x5ea3,	// (0x00026ebb) navi_text_pane_t1

0x5e97,	// (0x00026eaf) navi_icon_pane_g1

0x5dea,	// (0x00026e02) navi_navi_text_pane_t1

0x1f02,	// (0x00022f1a) navi_navi_volume_pane_g1

0x1f0a,	// (0x00022f22) volume_small_pane

0x5d50,	// (0x00026d68) navi_navi_icon_text_pane_g1

0x5d58,	// (0x00026d70) navi_navi_icon_text_pane_t1

0x4637,	// (0x0002564f) navi_tabs_2_long_pane

0x4637,	// (0x0002564f) navi_tabs_2_pane

0x4637,	// (0x0002564f) navi_tabs_3_long_pane

0x4637,	// (0x0002564f) navi_tabs_3_pane

0x4637,	// (0x0002564f) navi_tabs_4_pane

0x1ee2,	// (0x00022efa) tabs_2_active_pane_ParamLimits

0x1ee2,	// (0x00022efa) tabs_2_active_pane

0x1ef2,	// (0x00022f0a) tabs_2_passive_pane_ParamLimits

0x1ef2,	// (0x00022f0a) tabs_2_passive_pane

0x1eb0,	// (0x00022ec8) tabs_3_active_pane_ParamLimits

0x1eb0,	// (0x00022ec8) tabs_3_active_pane

0x1ec0,	// (0x00022ed8) tabs_3_passive_pane_ParamLimits

0x1ec0,	// (0x00022ed8) tabs_3_passive_pane

0x1ed1,	// (0x00022ee9) tabs_3_passive_pane_cp_ParamLimits

0x1ed1,	// (0x00022ee9) tabs_3_passive_pane_cp

0x1e6c,	// (0x00022e84) tabs_4_active_pane_ParamLimits

0x1e6c,	// (0x00022e84) tabs_4_active_pane

0x1e7d,	// (0x00022e95) tabs_4_passive_pane_ParamLimits

0x1e7d,	// (0x00022e95) tabs_4_passive_pane

0x1e8e,	// (0x00022ea6) tabs_4_passive_pane_cp_ParamLimits

0x1e8e,	// (0x00022ea6) tabs_4_passive_pane_cp

0x1e9f,	// (0x00022eb7) tabs_4_passive_pane_cp2_ParamLimits

0x1e9f,	// (0x00022eb7) tabs_4_passive_pane_cp2

0x1e48,	// (0x00022e60) tabs_2_long_active_pane_ParamLimits

0x1e48,	// (0x00022e60) tabs_2_long_active_pane

0x1e5a,	// (0x00022e72) tabs_2_long_passive_pane_ParamLimits

0x1e5a,	// (0x00022e72) tabs_2_long_passive_pane

0x1e09,	// (0x00022e21) tabs_3_long_active_pane_ParamLimits

0x1e09,	// (0x00022e21) tabs_3_long_active_pane

0x1e1c,	// (0x00022e34) tabs_3_long_passive_pane_ParamLimits

0x1e1c,	// (0x00022e34) tabs_3_long_passive_pane

0x1e35,	// (0x00022e4d) tabs_3_long_passive_pane_cp_ParamLimits

0x1e35,	// (0x00022e4d) tabs_3_long_passive_pane_cp

0x1daf,	// (0x00022dc7) volume_small_pane_g1

0x1db8,	// (0x00022dd0) volume_small_pane_g2

0x1dc1,	// (0x00022dd9) volume_small_pane_g3

0x1dca,	// (0x00022de2) volume_small_pane_g4

0x1dd3,	// (0x00022deb) volume_small_pane_g5

0x1ddc,	// (0x00022df4) volume_small_pane_g6

0x1de5,	// (0x00022dfd) volume_small_pane_g7

0x1dee,	// (0x00022e06) volume_small_pane_g8

0x1df7,	// (0x00022e0f) volume_small_pane_g9

0x1e00,	// (0x00022e18) volume_small_pane_g10

0x0009,

0xf88a,	// (0x000308a2) volume_small_pane_g

0x34de,	// (0x000244f6) bg_active_tab_pane_cp2_ParamLimits

0x34de,	// (0x000244f6) bg_active_tab_pane_cp2

0x3271,	// (0x00024289) tabs_3_active_pane_g1

0xc08e,	// (0x0002d0a6) tabs_3_active_pane_t1

0x34de,	// (0x000244f6) bg_passive_tab_pane_cp2_ParamLimits

0x34de,	// (0x000244f6) bg_passive_tab_pane_cp2

0x3271,	// (0x00024289) tabs_3_passive_pane_g1

0xc08e,	// (0x0002d0a6) tabs_3_passive_pane_t1

0x34de,	// (0x000244f6) bg_active_tab_pane_cp3_ParamLimits

0x34de,	// (0x000244f6) bg_active_tab_pane_cp3

0x328b,	// (0x000242a3) tabs_4_active_pane_g1

0xc0a0,	// (0x0002d0b8) tabs_4_active_pane_t1

0x34de,	// (0x000244f6) bg_passive_tab_pane_cp3_ParamLimits

0x34de,	// (0x000244f6) bg_passive_tab_pane_cp3

0x328b,	// (0x000242a3) tabs_4_1_passive_pane_g1

0xc0a0,	// (0x0002d0b8) tabs_4_1_passive_pane_t1

0x4ada,	// (0x00025af2) list_highlight_pane_cp2

0xdc5b,	// (0x0002ec73) list_set_pane_ParamLimits

0xdc5b,	// (0x0002ec73) list_set_pane

0xdcf5,	// (0x0002ed0d) main_pane_set_t1_ParamLimits

0xdcf5,	// (0x0002ed0d) main_pane_set_t1

0xdd15,	// (0x0002ed2d) main_pane_set_t2_ParamLimits

0xdd15,	// (0x0002ed2d) main_pane_set_t2

0xdd29,	// (0x0002ed41) main_pane_set_t3_ParamLimits

0xdd29,	// (0x0002ed41) main_pane_set_t3

0xdd3b,	// (0x0002ed53) main_pane_set_t4_ParamLimits

0xdd3b,	// (0x0002ed53) main_pane_set_t4

0x0003,

0xf95a,	// (0x00030972) main_pane_set_t_ParamLimits

0xf95a,	// (0x00030972) main_pane_set_t

0xdd4d,	// (0x0002ed65) setting_code_pane

0xdd57,	// (0x0002ed6f) setting_slider_graphic_pane

0xdd57,	// (0x0002ed6f) setting_slider_pane

0xdd57,	// (0x0002ed6f) setting_text_pane

0xdd57,	// (0x0002ed6f) setting_volume_pane

0x1046,	// (0x0002205e) volume_set_pane

0x3263,	// (0x0002427b) bg_set_opt_pane_cp

0x104e,	// (0x00022066) setting_slider_pane_t1

0x1067,	// (0x0002207f) setting_slider_pane_t2

0x1081,	// (0x00022099) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0003054f) setting_slider_pane_t

0x1099,	// (0x000220b1) slider_set_pane

0xeb74,	// (0x0002fb8c) bg_set_opt_pane_cp2

0x32a5,	// (0x000242bd) setting_slider_graphic_pane_g1

0x10af,	// (0x000220c7) setting_slider_graphic_pane_t1

0x10bf,	// (0x000220d7) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00030556) setting_slider_graphic_pane_t

0x10cf,	// (0x000220e7) slider_set_pane_cp

0xeb74,	// (0x0002fb8c) input_focus_pane_cp1

0x63c4,	// (0x000273dc) list_set_text_pane

0xeb6a,	// (0x0002fb82) setting_text_pane_g1

0xeb74,	// (0x0002fb8c) input_focus_pane_cp2

0xeb6a,	// (0x0002fb82) setting_code_pane_g1

0x32ae,	// (0x000242c6) setting_code_pane_t1

0xf473,	// (0x0003048b) set_text_pane_t1_ParamLimits

0xf473,	// (0x0003048b) set_text_pane_t1

0x3b48,	// (0x00024b60) set_opt_bg_pane_g1

0x3b50,	// (0x00024b68) set_opt_bg_pane_g2

0x639e,	// (0x000273b6) set_opt_bg_pane_g3

0x3b60,	// (0x00024b78) set_opt_bg_pane_g4

0x3b68,	// (0x00024b80) set_opt_bg_pane_g5

0x3b70,	// (0x00024b88) set_opt_bg_pane_g6

0x63a8,	// (0x000273c0) set_opt_bg_pane_g7

0x63b0,	// (0x000273c8) set_opt_bg_pane_g8

0x63ba,	// (0x000273d2) set_opt_bg_pane_g9

0x0008,

0xf947,	// (0x0003095f) set_opt_bg_pane_g

0x6391,	// (0x000273a9) slider_set_pane_g1

0x1f77,	// (0x00022f8f) slider_set_pane_g2

0x0006,

0xf938,	// (0x00030950) slider_set_pane_g

0x1f13,	// (0x00022f2b) volume_set_pane_g1

0x1f1b,	// (0x00022f33) volume_set_pane_g2

0x1f23,	// (0x00022f3b) volume_set_pane_g3

0x1f2b,	// (0x00022f43) volume_set_pane_g4

0x1f33,	// (0x00022f4b) volume_set_pane_g5

0x1f3b,	// (0x00022f53) volume_set_pane_g6

0x1f43,	// (0x00022f5b) volume_set_pane_g7

0x1f4b,	// (0x00022f63) volume_set_pane_g8

0x1f53,	// (0x00022f6b) volume_set_pane_g9

0x1f5b,	// (0x00022f73) volume_set_pane_g10

0x0009,

0xf910,	// (0x00030928) volume_set_pane_g

0xc0b2,	// (0x0002d0ca) indicator_pane_ParamLimits

0xc0b2,	// (0x0002d0ca) indicator_pane

0xc0da,	// (0x0002d0f2) main_idle_pane_g2_ParamLimits

0xc0da,	// (0x0002d0f2) main_idle_pane_g2

0xc112,	// (0x0002d12a) main_pane_idle_g1_ParamLimits

0xc112,	// (0x0002d12a) main_pane_idle_g1

0x32fd,	// (0x00024315) popup_clock_digital_analogue_window_ParamLimits

0x32fd,	// (0x00024315) popup_clock_digital_analogue_window

0xc139,	// (0x0002d151) soft_indicator_pane_ParamLimits

0xc139,	// (0x0002d151) soft_indicator_pane

0xc153,	// (0x0002d16b) wallpaper_pane_ParamLimits

0xc153,	// (0x0002d16b) wallpaper_pane

0xeb6a,	// (0x0002fb82) wallpaper_pane_g1

0xc165,	// (0x0002d17d) indicator_pane_g1_ParamLimits

0xc165,	// (0x0002d17d) indicator_pane_g1

0x67ee,	// (0x00027806) navi_navi_icon_text_pane_srt_g1

0x334f,	// (0x00024367) soft_indicator_pane_t1

0x3369,	// (0x00024381) aid_ps_area_pane

0xc17b,	// (0x0002d193) aid_ps_clock_pane

0x3388,	// (0x000243a0) aid_ps_indicator_pane

0x3394,	// (0x000243ac) indicator_ps_pane_ParamLimits

0x3394,	// (0x000243ac) indicator_ps_pane

0x33a3,	// (0x000243bb) power_save_pane_g1_ParamLimits

0x33a3,	// (0x000243bb) power_save_pane_g1

0x33af,	// (0x000243c7) power_save_pane_g2_ParamLimits

0x33af,	// (0x000243c7) power_save_pane_g2

0x0c51,	// (0x00021c69) aid_navinavi_width_pane

0x3369,	// (0x00024381) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0003055b) power_save_pane_g_ParamLimits

0xf543,	// (0x0003055b) power_save_pane_g

0x33bd,	// (0x000243d5) power_save_pane_t1_ParamLimits

0x33bd,	// (0x000243d5) power_save_pane_t1

0xc17b,	// (0x0002d193) aid_ps_clock_pane_ParamLimits

0x3388,	// (0x000243a0) aid_ps_indicator_pane_ParamLimits

0x33cf,	// (0x000243e7) power_save_pane_t4_ParamLimits

0x33cf,	// (0x000243e7) power_save_pane_t4

0x0001,

0xf548,	// (0x00030560) power_save_pane_t_ParamLimits

0xf548,	// (0x00030560) power_save_pane_t

0x33f9,	// (0x00024411) power_save_t3_ParamLimits

0x33f9,	// (0x00024411) power_save_t3

0x33e4,	// (0x000243fc) power_save_t2_ParamLimits

0x33e4,	// (0x000243fc) power_save_t2

0x340e,	// (0x00024426) indicator_ps_pane_g1

0xc189,	// (0x0002d1a1) ai_gene_pane_ParamLimits

0xc189,	// (0x0002d1a1) ai_gene_pane

0xc1a0,	// (0x0002d1b8) ai_links_pane_ParamLimits

0xc1a0,	// (0x0002d1b8) ai_links_pane

0xc1b8,	// (0x0002d1d0) indicator_pane_cp1_ParamLimits

0xc1b8,	// (0x0002d1d0) indicator_pane_cp1

0xc1c7,	// (0x0002d1df) main_pane_idle_g1_cp_ParamLimits

0xc1c7,	// (0x0002d1df) main_pane_idle_g1_cp

0x3447,	// (0x0002445f) popup_ai_links_title_window

0xc1df,	// (0x0002d1f7) soft_indicator_pane_cp1_ParamLimits

0xc1df,	// (0x0002d1f7) soft_indicator_pane_cp1

0x6190,	// (0x000271a8) ai_links_pane_g1

0x6199,	// (0x000271b1) grid_ai_links_pane

0xdba0,	// (0x0002ebb8) ai_gene_pane_1

0x617e,	// (0x00027196) ai_gene_pane_2

0x6187,	// (0x0002719f) list_highlight_pane_cp4

0xdb7c,	// (0x0002eb94) cell_ai_link_pane_ParamLimits

0xdb7c,	// (0x0002eb94) cell_ai_link_pane

0x614f,	// (0x00027167) cell_ai_link_pane_g1

0x36a6,	// (0x000246be) cell_ai_link_pane_g2

0x0001,

0xf8eb,	// (0x00030903) cell_ai_link_pane_g

0xeb74,	// (0x0002fb8c) grid_highlight_cp2

0xeb74,	// (0x0002fb8c) bg_popup_sub_pane_cp1

0x346a,	// (0x00024482) popup_ai_links_title_window_t1

0x609d,	// (0x000270b5) ai_gene_pane_1_g1_ParamLimits

0x609d,	// (0x000270b5) ai_gene_pane_1_g1

0x60a9,	// (0x000270c1) ai_gene_pane_1_g2_ParamLimits

0x60a9,	// (0x000270c1) ai_gene_pane_1_g2

0x0001,

0xf8e1,	// (0x000308f9) ai_gene_pane_1_g_ParamLimits

0xf8e1,	// (0x000308f9) ai_gene_pane_1_g

0x60b6,	// (0x000270ce) ai_gene_pane_1_t1_ParamLimits

0x60b6,	// (0x000270ce) ai_gene_pane_1_t1

0x60ea,	// (0x00027102) grid_ai_soft_ind_pane

0x6088,	// (0x000270a0) ai_gene_pane_2_t1_ParamLimits

0x6088,	// (0x000270a0) ai_gene_pane_2_t1

0xc1f3,	// (0x0002d20b) main_pane_empty_t1_ParamLimits

0xc1f3,	// (0x0002d20b) main_pane_empty_t1

0xc20b,	// (0x0002d223) main_pane_empty_t2_ParamLimits

0xc20b,	// (0x0002d223) main_pane_empty_t2

0xc220,	// (0x0002d238) main_pane_empty_t3_ParamLimits

0xc220,	// (0x0002d238) main_pane_empty_t3

0xc232,	// (0x0002d24a) main_pane_empty_t4_ParamLimits

0xc232,	// (0x0002d24a) main_pane_empty_t4

0xc244,	// (0x0002d25c) main_pane_empty_t5_ParamLimits

0xc244,	// (0x0002d25c) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00030565) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00030565) main_pane_empty_t

0x3c0f,	// (0x00024c27) bg_popup_window_pane_ParamLimits

0x3c0f,	// (0x00024c27) bg_popup_window_pane

0x5df8,	// (0x00026e10) find_popup_pane_cp2_ParamLimits

0x5df8,	// (0x00026e10) find_popup_pane_cp2

0x5e04,	// (0x00026e1c) heading_pane_ParamLimits

0x5e04,	// (0x00026e1c) heading_pane

0xeb74,	// (0x0002fb8c) bg_popup_sub_pane

0xdafd,	// (0x0002eb15) bg_popup_window_pane_g1_ParamLimits

0xdafd,	// (0x0002eb15) bg_popup_window_pane_g1

0xdb0c,	// (0x0002eb24) bg_popup_window_pane_g2_ParamLimits

0xdb0c,	// (0x0002eb24) bg_popup_window_pane_g2

0xdb18,	// (0x0002eb30) bg_popup_window_pane_g3_ParamLimits

0xdb18,	// (0x0002eb30) bg_popup_window_pane_g3

0xdb24,	// (0x0002eb3c) bg_popup_window_pane_g4_ParamLimits

0xdb24,	// (0x0002eb3c) bg_popup_window_pane_g4

0xdb33,	// (0x0002eb4b) bg_popup_window_pane_g5_ParamLimits

0xdb33,	// (0x0002eb4b) bg_popup_window_pane_g5

0xdb43,	// (0x0002eb5b) bg_popup_window_pane_g6_ParamLimits

0xdb43,	// (0x0002eb5b) bg_popup_window_pane_g6

0xdb4f,	// (0x0002eb67) bg_popup_window_pane_g7_ParamLimits

0xdb4f,	// (0x0002eb67) bg_popup_window_pane_g7

0xdb5e,	// (0x0002eb76) bg_popup_window_pane_g8_ParamLimits

0xdb5e,	// (0x0002eb76) bg_popup_window_pane_g8

0xdb6d,	// (0x0002eb85) bg_popup_window_pane_g9_ParamLimits

0xdb6d,	// (0x0002eb85) bg_popup_window_pane_g9

0x5dde,	// (0x00026df6) bg_popup_window_pane_g10_ParamLimits

0x5dde,	// (0x00026df6) bg_popup_window_pane_g10

0x0009,

0xf8a9,	// (0x000308c1) bg_popup_window_pane_g_ParamLimits

0xf8a9,	// (0x000308c1) bg_popup_window_pane_g

0x5d07,	// (0x00026d1f) bg_popup_heading_pane_ParamLimits

0x5d07,	// (0x00026d1f) bg_popup_heading_pane

0x1fff,	// (0x00023017) tabs_4_passive_pane_cp_srt_ParamLimits

0x1fff,	// (0x00023017) tabs_4_passive_pane_cp_srt

0x2011,	// (0x00023029) tabs_4_passive_pane_srt_ParamLimits

0x5d1b,	// (0x00026d33) heading_pane_g2

0x2011,	// (0x00023029) tabs_4_passive_pane_srt

0x5078,	// (0x00026090) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5078,	// (0x00026090) bg_passive_tab_pane_cp3_srt

0x5d23,	// (0x00026d3b) heading_pane_t1_ParamLimits

0x5d23,	// (0x00026d3b) heading_pane_t1

0x5d3a,	// (0x00026d52) heading_pane_t2_ParamLimits

0x5d3a,	// (0x00026d52) heading_pane_t2

0x0001,

0xf8a4,	// (0x000308bc) heading_pane_t_ParamLimits

0xf8a4,	// (0x000308bc) heading_pane_t

0x5834,	// (0x0002684c) bg_popup_heading_pane_g1

0x58e3,	// (0x000268fb) bg_popup_heading_pane_g2

0x58ed,	// (0x00026905) bg_popup_heading_pane_g3

0x58f7,	// (0x0002690f) bg_popup_heading_pane_g4

0x5901,	// (0x00026919) bg_popup_heading_pane_g5

0x590b,	// (0x00026923) bg_popup_heading_pane_g6

0x5913,	// (0x0002692b) bg_popup_heading_pane_g7

0x591b,	// (0x00026933) bg_popup_heading_pane_g8

0x5925,	// (0x0002693d) bg_popup_heading_pane_g9

0x0008,

0xf860,	// (0x00030878) bg_popup_heading_pane_g

0x5004,	// (0x0002601c) bg_popup_sub_pane_g1

0x500c,	// (0x00026024) bg_popup_sub_pane_g2

0x5014,	// (0x0002602c) bg_popup_sub_pane_g3

0x501c,	// (0x00026034) bg_popup_sub_pane_g4

0x5024,	// (0x0002603c) bg_popup_sub_pane_g5

0x502c,	// (0x00026044) bg_popup_sub_pane_g6

0x5034,	// (0x0002604c) bg_popup_sub_pane_g7

0x503c,	// (0x00026054) bg_popup_sub_pane_g8

0x5044,	// (0x0002605c) bg_popup_sub_pane_g9

0x0008,

0xf83a,	// (0x00030852) bg_popup_sub_pane_g

0x34de,	// (0x000244f6) bg_popup_window_pane_cp5_ParamLimits

0x34de,	// (0x000244f6) bg_popup_window_pane_cp5

0x34fa,	// (0x00024512) popup_note_window_g1_ParamLimits

0x34fa,	// (0x00024512) popup_note_window_g1

0x3506,	// (0x0002451e) popup_note_window_t1_ParamLimits

0x3506,	// (0x0002451e) popup_note_window_t1

0x351c,	// (0x00024534) popup_note_window_t2_ParamLimits

0x351c,	// (0x00024534) popup_note_window_t2

0x3532,	// (0x0002454a) popup_note_window_t3_ParamLimits

0x3532,	// (0x0002454a) popup_note_window_t3

0x3548,	// (0x00024560) popup_note_window_t4_ParamLimits

0x3548,	// (0x00024560) popup_note_window_t4

0x3570,	// (0x00024588) popup_note_window_t5_ParamLimits

0x3570,	// (0x00024588) popup_note_window_t5

0x0004,

0xf558,	// (0x00030570) popup_note_window_t_ParamLimits

0xf558,	// (0x00030570) popup_note_window_t

0x35ba,	// (0x000245d2) bg_popup_window_pane_cp6_ParamLimits

0x35ba,	// (0x000245d2) bg_popup_window_pane_cp6

0x57b0,	// (0x000267c8) popup_note_image_window_g1_ParamLimits

0x57b0,	// (0x000267c8) popup_note_image_window_g1

0x57bc,	// (0x000267d4) popup_note_image_window_g2_ParamLimits

0x57bc,	// (0x000267d4) popup_note_image_window_g2

0x0001,

0xf82e,	// (0x00030846) popup_note_image_window_g_ParamLimits

0xf82e,	// (0x00030846) popup_note_image_window_g

0x57d5,	// (0x000267ed) popup_note_image_window_t1_ParamLimits

0x57d5,	// (0x000267ed) popup_note_image_window_t1

0x57ee,	// (0x00026806) popup_note_image_window_t2_ParamLimits

0x57ee,	// (0x00026806) popup_note_image_window_t2

0x5807,	// (0x0002681f) popup_note_image_window_t3_ParamLimits

0x5807,	// (0x0002681f) popup_note_image_window_t3

0x0002,

0xf833,	// (0x0003084b) popup_note_image_window_t_ParamLimits

0xf833,	// (0x0003084b) popup_note_image_window_t

0x5671,	// (0x00026689) bg_popup_window_pane_cp7_ParamLimits

0x5671,	// (0x00026689) bg_popup_window_pane_cp7

0x56a1,	// (0x000266b9) popup_note_wait_window_g1_ParamLimits

0x56a1,	// (0x000266b9) popup_note_wait_window_g1

0x56ad,	// (0x000266c5) popup_note_wait_window_g2_ParamLimits

0x56ad,	// (0x000266c5) popup_note_wait_window_g2

0x0002,

0xf81c,	// (0x00030834) popup_note_wait_window_g_ParamLimits

0xf81c,	// (0x00030834) popup_note_wait_window_g

0x56c5,	// (0x000266dd) popup_note_wait_window_t1_ParamLimits

0x56c5,	// (0x000266dd) popup_note_wait_window_t1

0x56ec,	// (0x00026704) popup_note_wait_window_t2_ParamLimits

0x56ec,	// (0x00026704) popup_note_wait_window_t2

0x5709,	// (0x00026721) popup_note_wait_window_t3_ParamLimits

0x5709,	// (0x00026721) popup_note_wait_window_t3

0x571c,	// (0x00026734) popup_note_wait_window_t4_ParamLimits

0x571c,	// (0x00026734) popup_note_wait_window_t4

0x0004,

0xf823,	// (0x0003083b) popup_note_wait_window_t_ParamLimits

0xf823,	// (0x0003083b) popup_note_wait_window_t

0x5741,	// (0x00026759) wait_bar_pane_ParamLimits

0x5741,	// (0x00026759) wait_bar_pane

0xeb74,	// (0x0002fb8c) wait_anim_pane

0xeb74,	// (0x0002fb8c) wait_border_pane

0xeb6a,	// (0x0002fb82) wait_anim_pane_g1

0xeb6a,	// (0x0002fb82) wait_anim_pane_g2

0x0001,

0xf6dc,	// (0x000306f4) wait_anim_pane_g

0x5615,	// (0x0002662d) wait_border_pane_g1

0x5620,	// (0x00026638) wait_border_pane_g2

0x5629,	// (0x00026641) wait_border_pane_g3

0x0002,

0xf815,	// (0x0003082d) wait_border_pane_g

0x5480,	// (0x00026498) bg_popup_window_pane_cp16_ParamLimits

0x5480,	// (0x00026498) bg_popup_window_pane_cp16

0x5580,	// (0x00026598) indicator_popup_pane_cp4_ParamLimits

0x5580,	// (0x00026598) indicator_popup_pane_cp4

0x5594,	// (0x000265ac) popup_query_data_window_t1_ParamLimits

0x5594,	// (0x000265ac) popup_query_data_window_t1

0x55a6,	// (0x000265be) popup_query_data_window_t2_ParamLimits

0x55a6,	// (0x000265be) popup_query_data_window_t2

0x55bf,	// (0x000265d7) popup_query_data_window_t3_ParamLimits

0x55bf,	// (0x000265d7) popup_query_data_window_t3

0x0002,

0xf80e,	// (0x00030826) popup_query_data_window_t_ParamLimits

0xf80e,	// (0x00030826) popup_query_data_window_t

0x55d9,	// (0x000265f1) query_popup_data_pane_ParamLimits

0x55d9,	// (0x000265f1) query_popup_data_pane

0x55ed,	// (0x00026605) query_popup_data_pane_cp1_ParamLimits

0x55ed,	// (0x00026605) query_popup_data_pane_cp1

0x5480,	// (0x00026498) bg_popup_window_pane_cp10_ParamLimits

0x5480,	// (0x00026498) bg_popup_window_pane_cp10

0x54b2,	// (0x000264ca) indicator_popup_pane_ParamLimits

0x54b2,	// (0x000264ca) indicator_popup_pane

0x54d4,	// (0x000264ec) popup_query_code_window_t1_ParamLimits

0x54d4,	// (0x000264ec) popup_query_code_window_t1

0x54ee,	// (0x00026506) popup_query_code_window_t2_ParamLimits

0x54ee,	// (0x00026506) popup_query_code_window_t2

0x5537,	// (0x0002654f) popup_query_code_window_t3_ParamLimits

0x5537,	// (0x0002654f) popup_query_code_window_t3

0x0002,

0xf807,	// (0x0003081f) popup_query_code_window_t_ParamLimits

0xf807,	// (0x0003081f) popup_query_code_window_t

0x5566,	// (0x0002657e) query_popup_pane_ParamLimits

0x5566,	// (0x0002657e) query_popup_pane

0x35ba,	// (0x000245d2) bg_popup_window_pane_cp15_ParamLimits

0x35ba,	// (0x000245d2) bg_popup_window_pane_cp15

0x35d8,	// (0x000245f0) indicator_popup_pane_cp1_ParamLimits

0x35d8,	// (0x000245f0) indicator_popup_pane_cp1

0x35eb,	// (0x00024603) indicator_popup_pane_cp2_ParamLimits

0x35eb,	// (0x00024603) indicator_popup_pane_cp2

0x35fe,	// (0x00024616) popup_query_data_code_window_g1_ParamLimits

0x35fe,	// (0x00024616) popup_query_data_code_window_g1

0x3611,	// (0x00024629) popup_query_data_code_window_t1_ParamLimits

0x3611,	// (0x00024629) popup_query_data_code_window_t1

0x3623,	// (0x0002463b) popup_query_data_code_window_t2_ParamLimits

0x3623,	// (0x0002463b) popup_query_data_code_window_t2

0x3635,	// (0x0002464d) popup_query_data_code_window_t3_ParamLimits

0x3635,	// (0x0002464d) popup_query_data_code_window_t3

0x364b,	// (0x00024663) popup_query_data_code_window_t4_ParamLimits

0x364b,	// (0x00024663) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0003057b) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0003057b) popup_query_data_code_window_t

0x1ccc,	// (0x00022ce4) list_single_midp_graphic_pane_g3

0x3663,	// (0x0002467b) query_popup_data_pane_cp2_ParamLimits

0x3676,	// (0x0002468e) query_popup_pane_cp2_ParamLimits

0x3676,	// (0x0002468e) query_popup_pane_cp2

0xeb74,	// (0x0002fb8c) bg_popup_window_pane_cp11

0x5464,	// (0x0002647c) heading_pane_cp5

0x546c,	// (0x00026484) listscroll_popup_info_pane

0xeb74,	// (0x0002fb8c) input_focus_pane_cp3

0x3689,	// (0x000246a1) query_popup_pane_t1

0x3697,	// (0x000246af) list_popup_info_pane_ParamLimits

0x3697,	// (0x000246af) list_popup_info_pane

0x36a6,	// (0x000246be) listscroll_popup_info_pane_g1

0x36ae,	// (0x000246c6) scroll_pane_cp7

0x36b8,	// (0x000246d0) popup_info_list_pane_t1_ParamLimits

0x36b8,	// (0x000246d0) popup_info_list_pane_t1

0x36d2,	// (0x000246ea) popup_info_list_pane_t2_ParamLimits

0x36d2,	// (0x000246ea) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00030584) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00030584) popup_info_list_pane_t

0xeb74,	// (0x0002fb8c) bg_popup_window_pane_cp12

0x6808,	// (0x00027820) find_popup_pane

0x3263,	// (0x0002427b) bg_popup_window_pane_cp3

0x36ec,	// (0x00024704) heading_pane_cp3

0x36fb,	// (0x00024713) listscroll_popup_graphic_pane

0xeb74,	// (0x0002fb8c) bg_popup_window_pane_cp4

0xc2a6,	// (0x0002d2be) heading_pane_cp4

0x3765,	// (0x0002477d) listscroll_popup_colour_pane

0xc2b0,	// (0x0002d2c8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc2b0,	// (0x0002d2c8) cell_large_graphic_colour_none_popup_pane

0xc2c4,	// (0x0002d2dc) grid_large_graphic_colour_popup_pane_ParamLimits

0xc2c4,	// (0x0002d2dc) grid_large_graphic_colour_popup_pane

0xc2e8,	// (0x0002d300) listscroll_popup_colour_pane_g1_ParamLimits

0xc2e8,	// (0x0002d300) listscroll_popup_colour_pane_g1

0xc2ff,	// (0x0002d317) listscroll_popup_colour_pane_g2_ParamLimits

0xc2ff,	// (0x0002d317) listscroll_popup_colour_pane_g2

0xc313,	// (0x0002d32b) listscroll_popup_colour_pane_g3_ParamLimits

0xc313,	// (0x0002d32b) listscroll_popup_colour_pane_g3

0xc323,	// (0x0002d33b) listscroll_popup_colour_pane_g4_ParamLimits

0xc323,	// (0x0002d33b) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00030589) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00030589) listscroll_popup_colour_pane_g

0x37f3,	// (0x0002480b) scroll_pane_cp6_ParamLimits

0x37f3,	// (0x0002480b) scroll_pane_cp6

0xc333,	// (0x0002d34b) cell_large_graphic_colour_popup_pane_ParamLimits

0xc333,	// (0x0002d34b) cell_large_graphic_colour_popup_pane

0x3824,	// (0x0002483c) cell_large_graphic_colour_none_popup_pane_t1

0xeb74,	// (0x0002fb8c) grid_highlight_pane_cp5

0x3833,	// (0x0002484b) cell_large_graphic_colour_popup_pane_g1

0x383b,	// (0x00024853) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00030592) cell_large_graphic_colour_popup_pane_g

0x3843,	// (0x0002485b) cell_large_graphic_colour_popup_pane_g2_copy1

0x384c,	// (0x00024864) grid_highlight_pane_cp4

0x3854,	// (0x0002486c) bg_popup_window_pane_cp8_ParamLimits

0x3854,	// (0x0002486c) bg_popup_window_pane_cp8

0x386f,	// (0x00024887) popup_snote_single_text_window_g1_ParamLimits

0x386f,	// (0x00024887) popup_snote_single_text_window_g1

0x3881,	// (0x00024899) popup_snote_single_text_window_t1_ParamLimits

0x3881,	// (0x00024899) popup_snote_single_text_window_t1

0x3894,	// (0x000248ac) popup_snote_single_text_window_t2_ParamLimits

0x3894,	// (0x000248ac) popup_snote_single_text_window_t2

0x38a7,	// (0x000248bf) popup_snote_single_text_window_t3_ParamLimits

0x38a7,	// (0x000248bf) popup_snote_single_text_window_t3

0x38e0,	// (0x000248f8) popup_snote_single_text_window_t4_ParamLimits

0x38e0,	// (0x000248f8) popup_snote_single_text_window_t4

0x3914,	// (0x0002492c) popup_snote_single_text_window_t5_ParamLimits

0x3914,	// (0x0002492c) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00030597) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00030597) popup_snote_single_text_window_t

0x3943,	// (0x0002495b) bg_popup_window_pane_cp9_ParamLimits

0x3943,	// (0x0002495b) bg_popup_window_pane_cp9

0x386f,	// (0x00024887) popup_snote_single_graphic_window_g1_ParamLimits

0x386f,	// (0x00024887) popup_snote_single_graphic_window_g1

0x3951,	// (0x00024969) popup_snote_single_graphic_window_g2_ParamLimits

0x3951,	// (0x00024969) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x000305a2) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x000305a2) popup_snote_single_graphic_window_g

0x395d,	// (0x00024975) popup_snote_single_graphic_window_t1_ParamLimits

0x395d,	// (0x00024975) popup_snote_single_graphic_window_t1

0x3970,	// (0x00024988) popup_snote_single_graphic_window_t2_ParamLimits

0x3970,	// (0x00024988) popup_snote_single_graphic_window_t2

0x3983,	// (0x0002499b) popup_snote_single_graphic_window_t3_ParamLimits

0x3983,	// (0x0002499b) popup_snote_single_graphic_window_t3

0x39bc,	// (0x000249d4) popup_snote_single_graphic_window_t4_ParamLimits

0x39bc,	// (0x000249d4) popup_snote_single_graphic_window_t4

0x39f0,	// (0x00024a08) popup_snote_single_graphic_window_t5_ParamLimits

0x39f0,	// (0x00024a08) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x000305a7) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x000305a7) popup_snote_single_graphic_window_t

0x673e,	// (0x00027756) grid_graphic_popup_pane_ParamLimits

0x673e,	// (0x00027756) grid_graphic_popup_pane

0x6768,	// (0x00027780) listscroll_popup_graphic_pane_g1_ParamLimits

0x6768,	// (0x00027780) listscroll_popup_graphic_pane_g1

0xde61,	// (0x0002ee79) listscroll_popup_graphic_pane_g2_ParamLimits

0xde61,	// (0x0002ee79) listscroll_popup_graphic_pane_g2

0x0001,

0xf984,	// (0x0003099c) listscroll_popup_graphic_pane_g_ParamLimits

0xf984,	// (0x0003099c) listscroll_popup_graphic_pane_g

0x679c,	// (0x000277b4) scroll_pane_cp5

0xde1c,	// (0x0002ee34) cell_graphic_popup_pane_ParamLimits

0xde1c,	// (0x0002ee34) cell_graphic_popup_pane

0x66ad,	// (0x000276c5) cell_graphic_popup_pane_g1

0x66b5,	// (0x000276cd) cell_graphic_popup_pane_g2

0x3843,	// (0x0002485b) cell_graphic_popup_pane_g3

0x0002,

0xf97d,	// (0x00030995) cell_graphic_popup_pane_g

0x66be,	// (0x000276d6) cell_graphic_popup_pane_t2

0x384c,	// (0x00024864) grid_highlight_pane_cp3

0x3a31,	// (0x00024a49) list_gen_pane_ParamLimits

0x3a31,	// (0x00024a49) list_gen_pane

0x3a63,	// (0x00024a7b) scroll_pane

0xddd3,	// (0x0002edeb) bg_list_pane_g1_ParamLimits

0xddd3,	// (0x0002edeb) bg_list_pane_g1

0x6622,	// (0x0002763a) bg_list_pane_g2_ParamLimits

0x6622,	// (0x0002763a) bg_list_pane_g2

0x6637,	// (0x0002764f) bg_list_pane_g3_ParamLimits

0x6637,	// (0x0002764f) bg_list_pane_g3

0x664b,	// (0x00027663) bg_list_pane_g4_ParamLimits

0x664b,	// (0x00027663) bg_list_pane_g4

0xddf0,	// (0x0002ee08) bg_list_pane_g5_ParamLimits

0xddf0,	// (0x0002ee08) bg_list_pane_g5

0x0004,

0xf972,	// (0x0003098a) bg_list_pane_g_ParamLimits

0xf972,	// (0x0003098a) bg_list_pane_g

0xdd8a,	// (0x0002eda2) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_double2_graphic_large_graphic_pane

0xdd8a,	// (0x0002eda2) list_double2_graphic_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_double2_graphic_pane

0xdd8a,	// (0x0002eda2) list_double2_large_graphic_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_double2_large_graphic_pane

0xdd8a,	// (0x0002eda2) list_double2_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_double2_pane

0xdd8a,	// (0x0002eda2) list_double_graphic_heading_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_double_graphic_heading_pane

0xdd8a,	// (0x0002eda2) list_double_graphic_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_double_graphic_pane

0xdd8a,	// (0x0002eda2) list_double_heading_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_double_heading_pane

0xdd8a,	// (0x0002eda2) list_double_large_graphic_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_double_large_graphic_pane

0xdd8a,	// (0x0002eda2) list_double_number_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_double_number_pane

0xdd8a,	// (0x0002eda2) list_double_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_double_pane

0xdd8a,	// (0x0002eda2) list_double_time_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_double_time_pane

0xdd8a,	// (0x0002eda2) list_setting_number_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_setting_number_pane

0xdd8a,	// (0x0002eda2) list_setting_pane_ParamLimits

0xdd8a,	// (0x0002eda2) list_setting_pane

0xbbbc,	// (0x0002cbd4) list_single_2graphic_pane_ParamLimits

0xbbbc,	// (0x0002cbd4) list_single_2graphic_pane

0xbbbc,	// (0x0002cbd4) list_single_graphic_heading_pane_ParamLimits

0xbbbc,	// (0x0002cbd4) list_single_graphic_heading_pane

0xbbbc,	// (0x0002cbd4) list_single_graphic_pane_ParamLimits

0xbbbc,	// (0x0002cbd4) list_single_graphic_pane

0xbbbc,	// (0x0002cbd4) list_single_heading_pane_ParamLimits

0xbbbc,	// (0x0002cbd4) list_single_heading_pane

0xddc0,	// (0x0002edd8) list_single_large_graphic_pane_ParamLimits

0xddc0,	// (0x0002edd8) list_single_large_graphic_pane

0xbbbc,	// (0x0002cbd4) list_single_number_heading_pane_ParamLimits

0xbbbc,	// (0x0002cbd4) list_single_number_heading_pane

0xbbbc,	// (0x0002cbd4) list_single_number_pane_ParamLimits

0xbbbc,	// (0x0002cbd4) list_single_number_pane

0xbbbc,	// (0x0002cbd4) list_single_pane_ParamLimits

0xbbbc,	// (0x0002cbd4) list_single_pane

0xeb74,	// (0x0002fb8c) list_highlight_pane_cp1

0x02ac,	// (0x000212c4) list_single_pane_g1_ParamLimits

0x02ac,	// (0x000212c4) list_single_pane_g1

0x02b8,	// (0x000212d0) list_single_pane_g2_ParamLimits

0x02b8,	// (0x000212d0) list_single_pane_g2

0x0001,

0xf5a1,	// (0x000305b9) list_single_pane_g_ParamLimits

0xf5a1,	// (0x000305b9) list_single_pane_g

0x05e1,	// (0x000215f9) list_single_pane_t1_ParamLimits

0x05e1,	// (0x000215f9) list_single_pane_t1

0x02ac,	// (0x000212c4) list_single_number_pane_g1_ParamLimits

0x02ac,	// (0x000212c4) list_single_number_pane_g1

0x02b8,	// (0x000212d0) list_single_number_pane_g2_ParamLimits

0x02b8,	// (0x000212d0) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x000305b9) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x000305b9) list_single_number_pane_g

0x0322,	// (0x0002133a) list_single_number_pane_t1_ParamLimits

0x0322,	// (0x0002133a) list_single_number_pane_t1

0xbb7e,	// (0x0002cb96) list_single_number_pane_t2_ParamLimits

0xbb7e,	// (0x0002cb96) list_single_number_pane_t2

0x0001,

0xf933,	// (0x0003094b) list_single_number_pane_t_ParamLimits

0xf933,	// (0x0003094b) list_single_number_pane_t

0xb530,	// (0x0002c548) list_single_graphic_pane_g1_ParamLimits

0xb530,	// (0x0002c548) list_single_graphic_pane_g1

0x02ac,	// (0x000212c4) list_single_graphic_pane_g2_ParamLimits

0x02ac,	// (0x000212c4) list_single_graphic_pane_g2

0x02b8,	// (0x000212d0) list_single_graphic_pane_g3_ParamLimits

0x02b8,	// (0x000212d0) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x000305b2) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x000305b2) list_single_graphic_pane_g

0xb53c,	// (0x0002c554) list_single_graphic_pane_t1_ParamLimits

0xb53c,	// (0x0002c554) list_single_graphic_pane_t1

0x02ac,	// (0x000212c4) list_single_heading_pane_g1_ParamLimits

0x02ac,	// (0x000212c4) list_single_heading_pane_g1

0x02b8,	// (0x000212d0) list_single_heading_pane_g2_ParamLimits

0x02b8,	// (0x000212d0) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x000305b9) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x000305b9) list_single_heading_pane_g

0x05a3,	// (0x000215bb) list_single_heading_pane_t1_ParamLimits

0x05a3,	// (0x000215bb) list_single_heading_pane_t1

0xb552,	// (0x0002c56a) list_single_heading_pane_t2_ParamLimits

0xb552,	// (0x0002c56a) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x000305be) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x000305be) list_single_heading_pane_t

0x02ac,	// (0x000212c4) list_single_number_heading_pane_g1_ParamLimits

0x02ac,	// (0x000212c4) list_single_number_heading_pane_g1

0x02b8,	// (0x000212d0) list_single_number_heading_pane_g2_ParamLimits

0x02b8,	// (0x000212d0) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x000305b9) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x000305b9) list_single_number_heading_pane_g

0x05a3,	// (0x000215bb) list_single_number_heading_pane_t1_ParamLimits

0x05a3,	// (0x000215bb) list_single_number_heading_pane_t1

0xb564,	// (0x0002c57c) list_single_number_heading_pane_t2_ParamLimits

0xb564,	// (0x0002c57c) list_single_number_heading_pane_t2

0xb576,	// (0x0002c58e) list_single_number_heading_pane_t3_ParamLimits

0xb576,	// (0x0002c58e) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x000305c3) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x000305c3) list_single_number_heading_pane_t

0x02a0,	// (0x000212b8) list_single_graphic_heading_pane_g1_ParamLimits

0x02a0,	// (0x000212b8) list_single_graphic_heading_pane_g1

0xb588,	// (0x0002c5a0) list_single_graphic_heading_pane_g4_ParamLimits

0xb588,	// (0x0002c5a0) list_single_graphic_heading_pane_g4

0x02b8,	// (0x000212d0) list_single_graphic_heading_pane_g5_ParamLimits

0x02b8,	// (0x000212d0) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x000305ca) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x000305ca) list_single_graphic_heading_pane_g

0x05a3,	// (0x000215bb) list_single_graphic_heading_pane_t1_ParamLimits

0x05a3,	// (0x000215bb) list_single_graphic_heading_pane_t1

0xb599,	// (0x0002c5b1) list_single_graphic_heading_pane_t2_ParamLimits

0xb599,	// (0x0002c5b1) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x000305d1) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x000305d1) list_single_graphic_heading_pane_t

0x05f7,	// (0x0002160f) list_single_large_graphic_pane_g1_ParamLimits

0x05f7,	// (0x0002160f) list_single_large_graphic_pane_g1

0xf48e,	// (0x000304a6) list_single_large_graphic_pane_g2_ParamLimits

0xf48e,	// (0x000304a6) list_single_large_graphic_pane_g2

0xf49a,	// (0x000304b2) list_single_large_graphic_pane_g3_ParamLimits

0xf49a,	// (0x000304b2) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x000305d6) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x000305d6) list_single_large_graphic_pane_g

0x5620,	// (0x00026638) wait_border_pane_g2_copy1

0xb5ab,	// (0x0002c5c3) list_single_large_graphic_pane_g4_cp2

0x0603,	// (0x0002161b) list_single_large_graphic_pane_t1_ParamLimits

0x0603,	// (0x0002161b) list_single_large_graphic_pane_t1

0xb5b3,	// (0x0002c5cb) list_double_pane_g1_ParamLimits

0xb5b3,	// (0x0002c5cb) list_double_pane_g1

0xb5bf,	// (0x0002c5d7) list_double_pane_g2_ParamLimits

0xb5bf,	// (0x0002c5d7) list_double_pane_g2

0x0001,

0xf5c5,	// (0x000305dd) list_double_pane_g_ParamLimits

0xf5c5,	// (0x000305dd) list_double_pane_g

0xb5cb,	// (0x0002c5e3) list_double_pane_t1_ParamLimits

0xb5cb,	// (0x0002c5e3) list_double_pane_t1

0xb5e1,	// (0x0002c5f9) list_double_pane_t2_ParamLimits

0xb5e1,	// (0x0002c5f9) list_double_pane_t2

0x0001,

0xf5ca,	// (0x000305e2) list_double_pane_t_ParamLimits

0xf5ca,	// (0x000305e2) list_double_pane_t

0xb5f3,	// (0x0002c60b) list_double2_pane_g1_ParamLimits

0xb5f3,	// (0x0002c60b) list_double2_pane_g1

0xb604,	// (0x0002c61c) list_double2_pane_g2_ParamLimits

0xb604,	// (0x0002c61c) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x000305e7) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x000305e7) list_double2_pane_g

0xb610,	// (0x0002c628) list_double2_pane_t1_ParamLimits

0xb610,	// (0x0002c628) list_double2_pane_t1

0xb626,	// (0x0002c63e) list_double2_pane_t2_ParamLimits

0xb626,	// (0x0002c63e) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x000305ec) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x000305ec) list_double2_pane_t

0xb5b3,	// (0x0002c5cb) list_double_number_pane_g1_ParamLimits

0xb5b3,	// (0x0002c5cb) list_double_number_pane_g1

0xb5bf,	// (0x0002c5d7) list_double_number_pane_g2_ParamLimits

0xb5bf,	// (0x0002c5d7) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x000305dd) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x000305dd) list_double_number_pane_g

0xb638,	// (0x0002c650) list_double_number_pane_t1_ParamLimits

0xb638,	// (0x0002c650) list_double_number_pane_t1

0xb64a,	// (0x0002c662) list_double_number_pane_t2_ParamLimits

0xb64a,	// (0x0002c662) list_double_number_pane_t2

0xb660,	// (0x0002c678) list_double_number_pane_t3_ParamLimits

0xb660,	// (0x0002c678) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x000305f1) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x000305f1) list_double_number_pane_t

0xb672,	// (0x0002c68a) list_double_graphic_pane_g1_ParamLimits

0xb672,	// (0x0002c68a) list_double_graphic_pane_g1

0xb67e,	// (0x0002c696) list_double_graphic_pane_g2_ParamLimits

0xb67e,	// (0x0002c696) list_double_graphic_pane_g2

0xb68d,	// (0x0002c6a5) list_double_graphic_pane_g3_ParamLimits

0xb68d,	// (0x0002c6a5) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x000305f8) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x000305f8) list_double_graphic_pane_g

0xb6a5,	// (0x0002c6bd) list_double_graphic_pane_t1_ParamLimits

0xb6a5,	// (0x0002c6bd) list_double_graphic_pane_t1

0xb6bb,	// (0x0002c6d3) list_double_graphic_pane_t2_ParamLimits

0xb6bb,	// (0x0002c6d3) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x00030601) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x00030601) list_double_graphic_pane_t

0xb6cd,	// (0x0002c6e5) list_double2_graphic_pane_g1_ParamLimits

0xb6cd,	// (0x0002c6e5) list_double2_graphic_pane_g1

0xb6d9,	// (0x0002c6f1) list_double2_graphic_pane_g2_ParamLimits

0xb6d9,	// (0x0002c6f1) list_double2_graphic_pane_g2

0xb604,	// (0x0002c61c) list_double2_graphic_pane_g3_ParamLimits

0xb604,	// (0x0002c61c) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x00030606) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x00030606) list_double2_graphic_pane_g

0xb6e5,	// (0x0002c6fd) list_double2_graphic_pane_t1_ParamLimits

0xb6e5,	// (0x0002c6fd) list_double2_graphic_pane_t1

0xb6fb,	// (0x0002c713) list_double2_graphic_pane_t2_ParamLimits

0xb6fb,	// (0x0002c713) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x0003060d) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x0003060d) list_double2_graphic_pane_t

0xb70d,	// (0x0002c725) list_double_large_graphic_pane_g1_ParamLimits

0xb70d,	// (0x0002c725) list_double_large_graphic_pane_g1

0xb72c,	// (0x0002c744) list_double_large_graphic_pane_g2_ParamLimits

0xb72c,	// (0x0002c744) list_double_large_graphic_pane_g2

0xb5bf,	// (0x0002c5d7) list_double_large_graphic_pane_g3_ParamLimits

0xb5bf,	// (0x0002c5d7) list_double_large_graphic_pane_g3

0xb73d,	// (0x0002c755) list_double_large_graphic_pane_g4_ParamLimits

0xb73d,	// (0x0002c755) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x00030612) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x00030612) list_double_large_graphic_pane_g

0xb750,	// (0x0002c768) list_double_large_graphic_pane_t1_ParamLimits

0xb750,	// (0x0002c768) list_double_large_graphic_pane_t1

0xb769,	// (0x0002c781) list_double_large_graphic_pane_t2_ParamLimits

0xb769,	// (0x0002c781) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x0003061d) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x0003061d) list_double_large_graphic_pane_t

0xb77b,	// (0x0002c793) list_double2_large_graphic_pane_g1_ParamLimits

0xb77b,	// (0x0002c793) list_double2_large_graphic_pane_g1

0xb5f3,	// (0x0002c60b) list_double2_large_graphic_pane_g2_ParamLimits

0xb5f3,	// (0x0002c60b) list_double2_large_graphic_pane_g2

0xb604,	// (0x0002c61c) list_double2_large_graphic_pane_g3_ParamLimits

0xb604,	// (0x0002c61c) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x00030622) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x00030622) list_double2_large_graphic_pane_g

0xb787,	// (0x0002c79f) list_double2_large_graphic_pane_t1_ParamLimits

0xb787,	// (0x0002c79f) list_double2_large_graphic_pane_t1

0xb79d,	// (0x0002c7b5) list_double2_large_graphic_pane_t2_ParamLimits

0xb79d,	// (0x0002c7b5) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x00030629) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x00030629) list_double2_large_graphic_pane_t

0xb7af,	// (0x0002c7c7) list_double_heading_pane_g1_ParamLimits

0xb7af,	// (0x0002c7c7) list_double_heading_pane_g1

0xf4bb,	// (0x000304d3) list_double_heading_pane_g2_ParamLimits

0xf4bb,	// (0x000304d3) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x0003062e) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x0003062e) list_double_heading_pane_g

0xb7c0,	// (0x0002c7d8) list_double_heading_pane_t1_ParamLimits

0xb7c0,	// (0x0002c7d8) list_double_heading_pane_t1

0xb626,	// (0x0002c63e) list_double_heading_pane_t2_ParamLimits

0xb626,	// (0x0002c63e) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x00030633) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x00030633) list_double_heading_pane_t

0xb6cd,	// (0x0002c6e5) list_double_graphic_heading_pane_g1_ParamLimits

0xb6cd,	// (0x0002c6e5) list_double_graphic_heading_pane_g1

0xb7af,	// (0x0002c7c7) list_double_graphic_heading_pane_g2_ParamLimits

0xb7af,	// (0x0002c7c7) list_double_graphic_heading_pane_g2

0xf4bb,	// (0x000304d3) list_double_graphic_heading_pane_g3_ParamLimits

0xf4bb,	// (0x000304d3) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x00030638) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x00030638) list_double_graphic_heading_pane_g

0xb7d6,	// (0x0002c7ee) list_double_graphic_heading_pane_t1_ParamLimits

0xb7d6,	// (0x0002c7ee) list_double_graphic_heading_pane_t1

0xb6fb,	// (0x0002c713) list_double_graphic_heading_pane_t2_ParamLimits

0xb6fb,	// (0x0002c713) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x0003063f) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x0003063f) list_double_graphic_heading_pane_t

0xb72c,	// (0x0002c744) list_double_time_pane_g1_ParamLimits

0xb72c,	// (0x0002c744) list_double_time_pane_g1

0xb5bf,	// (0x0002c5d7) list_double_time_pane_g2_ParamLimits

0xb5bf,	// (0x0002c5d7) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x00030644) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x00030644) list_double_time_pane_g

0xb7ec,	// (0x0002c804) list_double_time_pane_t1_ParamLimits

0xb7ec,	// (0x0002c804) list_double_time_pane_t1

0xb802,	// (0x0002c81a) list_double_time_pane_t2_ParamLimits

0xb802,	// (0x0002c81a) list_double_time_pane_t2

0xb814,	// (0x0002c82c) list_double_time_pane_t3_ParamLimits

0xb814,	// (0x0002c82c) list_double_time_pane_t3

0xb826,	// (0x0002c83e) list_double_time_pane_t4_ParamLimits

0xb826,	// (0x0002c83e) list_double_time_pane_t4

0x0003,

0xf631,	// (0x00030649) list_double_time_pane_t_ParamLimits

0xf631,	// (0x00030649) list_double_time_pane_t

0xb6d9,	// (0x0002c6f1) list_setting_pane_g1_ParamLimits

0xb6d9,	// (0x0002c6f1) list_setting_pane_g1

0xb604,	// (0x0002c61c) list_setting_pane_g2_ParamLimits

0xb604,	// (0x0002c61c) list_setting_pane_g2

0x0001,

0xf63a,	// (0x00030652) list_setting_pane_g_ParamLimits

0xf63a,	// (0x00030652) list_setting_pane_g

0xb838,	// (0x0002c850) list_setting_pane_t1_ParamLimits

0xb838,	// (0x0002c850) list_setting_pane_t1

0xb852,	// (0x0002c86a) list_setting_pane_t2_ParamLimits

0xb852,	// (0x0002c86a) list_setting_pane_t2

0x0002,

0xf63f,	// (0x00030657) list_setting_pane_t_ParamLimits

0xf63f,	// (0x00030657) list_setting_pane_t

0xb891,	// (0x0002c8a9) set_value_pane_cp_ParamLimits

0xb891,	// (0x0002c8a9) set_value_pane_cp

0xb89d,	// (0x0002c8b5) list_setting_number_pane_g1_ParamLimits

0xb89d,	// (0x0002c8b5) list_setting_number_pane_g1

0xb8a9,	// (0x0002c8c1) list_setting_number_pane_g2_ParamLimits

0xb8a9,	// (0x0002c8c1) list_setting_number_pane_g2

0x0001,

0xf646,	// (0x0003065e) list_setting_number_pane_g_ParamLimits

0xf646,	// (0x0003065e) list_setting_number_pane_g

0xb8b5,	// (0x0002c8cd) list_setting_number_pane_t1_ParamLimits

0xb8b5,	// (0x0002c8cd) list_setting_number_pane_t1

0xb8ce,	// (0x0002c8e6) list_setting_number_pane_t2_ParamLimits

0xb8ce,	// (0x0002c8e6) list_setting_number_pane_t2

0xb8e8,	// (0x0002c900) list_setting_number_pane_t3_ParamLimits

0xb8e8,	// (0x0002c900) list_setting_number_pane_t3

0x0003,

0xf64b,	// (0x00030663) list_setting_number_pane_t_ParamLimits

0xf64b,	// (0x00030663) list_setting_number_pane_t

0xb891,	// (0x0002c8a9) set_value_pane_ParamLimits

0xb891,	// (0x0002c8a9) set_value_pane

0x3a97,	// (0x00024aaf) bg_set_opt_pane_ParamLimits

0x3a97,	// (0x00024aaf) bg_set_opt_pane

0xf509,	// (0x00030521) set_value_pane_t1

0x3ab8,	// (0x00024ad0) slider_set_pane_cp3

0x3ac1,	// (0x00024ad9) volume_small_pane_cp

0x3aca,	// (0x00024ae2) list_form_gen_pane

0x3ad3,	// (0x00024aeb) scroll_pane_cp8

0xb92b,	// (0x0002c943) form_field_data_pane_ParamLimits

0xb92b,	// (0x0002c943) form_field_data_pane

0xb942,	// (0x0002c95a) form_field_data_wide_pane_ParamLimits

0xb942,	// (0x0002c95a) form_field_data_wide_pane

0xb962,	// (0x0002c97a) form_field_popup_pane_ParamLimits

0xb962,	// (0x0002c97a) form_field_popup_pane

0xb982,	// (0x0002c99a) form_field_popup_wide_pane_ParamLimits

0xb982,	// (0x0002c99a) form_field_popup_wide_pane

0x000d,	// (0x00021025) form_field_slider_pane_ParamLimits

0x000d,	// (0x00021025) form_field_slider_pane

0x0020,	// (0x00021038) form_field_slider_wide_pane_ParamLimits

0x0020,	// (0x00021038) form_field_slider_wide_pane

0x3ae4,	// (0x00024afc) data_form_pane

0xb9a3,	// (0x0002c9bb) form_field_data_pane_t1

0x3af0,	// (0x00024b08) input_focus_pane

0x0055,	// (0x0002106d) data_form_wide_pane

0x0072,	// (0x0002108a) form_field_data_wide_pane_t1

0x3861,	// (0x00024879) input_focus_pane_cp6

0xb9bd,	// (0x0002c9d5) form_field_popup_pane_t1

0x3af0,	// (0x00024b08) input_focus_pane_cp7

0x3b1e,	// (0x00024b36) list_form_pane

0x00b4,	// (0x000210cc) form_field_popup_wide_pane_t1

0x3af0,	// (0x00024b08) input_focus_pane_cp8

0x3b2a,	// (0x00024b42) list_form_wide_pane

0xb9df,	// (0x0002c9f7) form_field_slider_pane_t1_ParamLimits

0xb9df,	// (0x0002c9f7) form_field_slider_pane_t1

0xb9f7,	// (0x0002ca0f) form_field_slider_pane_t2_ParamLimits

0xb9f7,	// (0x0002ca0f) form_field_slider_pane_t2

0x0001,

0xf65b,	// (0x00030673) form_field_slider_pane_t_ParamLimits

0xf65b,	// (0x00030673) form_field_slider_pane_t

0x34de,	// (0x000244f6) input_focus_pane_cp9_ParamLimits

0x34de,	// (0x000244f6) input_focus_pane_cp9

0xba0c,	// (0x0002ca24) slider_cont_pane_ParamLimits

0xba0c,	// (0x0002ca24) slider_cont_pane

0x3b36,	// (0x00024b4e) form_field_slider_wide_pane_t1_ParamLimits

0x3b36,	// (0x00024b4e) form_field_slider_wide_pane_t1

0x0110,	// (0x00021128) form_field_slider_wide_pane_t2_ParamLimits

0x0110,	// (0x00021128) form_field_slider_wide_pane_t2

0x0001,

0xf660,	// (0x00030678) form_field_slider_wide_pane_t_ParamLimits

0xf660,	// (0x00030678) form_field_slider_wide_pane_t

0x34de,	// (0x000244f6) input_focus_pane_cp10_ParamLimits

0x34de,	// (0x000244f6) input_focus_pane_cp10

0xba20,	// (0x0002ca38) slider_cont_pane_cp1_ParamLimits

0xba20,	// (0x0002ca38) slider_cont_pane_cp1

0xba34,	// (0x0002ca4c) slider_form_pane_cp

0x3b48,	// (0x00024b60) input_focus_pane_g1

0x3b50,	// (0x00024b68) input_focus_pane_g2

0x3b58,	// (0x00024b70) input_focus_pane_g3

0x3b60,	// (0x00024b78) input_focus_pane_g4

0x3b68,	// (0x00024b80) input_focus_pane_g5

0x3b70,	// (0x00024b88) input_focus_pane_g6

0x3b78,	// (0x00024b90) input_focus_pane_g7

0x3b80,	// (0x00024b98) input_focus_pane_g8

0x3b88,	// (0x00024ba0) input_focus_pane_g9

0xeb6a,	// (0x0002fb82) input_focus_pane_g10

0x0009,

0xf665,	// (0x0003067d) input_focus_pane_g

0x5629,	// (0x00026641) wait_border_pane_g3_copy1

0xba3c,	// (0x0002ca54) data_form_pane_t1

0xeb6a,	// (0x0002fb82) wait_anim_pane_g1_copy1

0xbb90,	// (0x0002cba8) data_form_wide_pane_t1

0xba56,	// (0x0002ca6e) list_form_graphic_pane_cp_ParamLimits

0xba56,	// (0x0002ca6e) list_form_graphic_pane_cp

0x6539,	// (0x00027551) slider_form_pane_g1

0x6542,	// (0x0002755a) slider_form_pane_g2

0x0006,

0xf963,	// (0x0003097b) slider_form_pane_g

0xba68,	// (0x0002ca80) list_form_graphic_pane_ParamLimits

0xba68,	// (0x0002ca80) list_form_graphic_pane

0x018e,	// (0x000211a6) list_form_graphic_pane_g1

0x0196,	// (0x000211ae) list_form_graphic_pane_t1_ParamLimits

0x0196,	// (0x000211ae) list_form_graphic_pane_t1

0x3263,	// (0x0002427b) list_highlight_pane_cp5_ParamLimits

0x3263,	// (0x0002427b) list_highlight_pane_cp5

0xba7b,	// (0x0002ca93) find_pane_g1

0x3b90,	// (0x00024ba8) input_find_pane

0xba84,	// (0x0002ca9c) input_find_pane_g1_ParamLimits

0xba84,	// (0x0002ca9c) input_find_pane_g1

0xba90,	// (0x0002caa8) input_find_pane_t1_ParamLimits

0xba90,	// (0x0002caa8) input_find_pane_t1

0xbaa5,	// (0x0002cabd) input_find_pane_t2_ParamLimits

0xbaa5,	// (0x0002cabd) input_find_pane_t2

0x0001,

0xf67a,	// (0x00030692) input_find_pane_t_ParamLimits

0xf67a,	// (0x00030692) input_find_pane_t

0x3b99,	// (0x00024bb1) input_focus_pane_cp5_ParamLimits

0x3b99,	// (0x00024bb1) input_focus_pane_cp5

0x3bb8,	// (0x00024bd0) bg_popup_window_pane_cp2_ParamLimits

0x3bb8,	// (0x00024bd0) bg_popup_window_pane_cp2

0x3bc5,	// (0x00024bdd) listscroll_menu_pane_ParamLimits

0x3bc5,	// (0x00024bdd) listscroll_menu_pane

0xc368,	// (0x0002d380) popup_submenu_window_ParamLimits

0xc368,	// (0x0002d380) popup_submenu_window

0x3bfd,	// (0x00024c15) find_popup_pane_g1

0x3c05,	// (0x00024c1d) input_popup_find_pane_cp

0x3c0f,	// (0x00024c27) input_focus_pane_cp4_ParamLimits

0x3c0f,	// (0x00024c27) input_focus_pane_cp4

0x3c29,	// (0x00024c41) input_popup_find_pane_t1_ParamLimits

0x3c29,	// (0x00024c41) input_popup_find_pane_t1

0xeb74,	// (0x0002fb8c) bg_popup_sub_pane_cp

0x3c57,	// (0x00024c6f) listscroll_popup_sub_pane

0x3c5f,	// (0x00024c77) list_submenu_pane_ParamLimits

0x3c5f,	// (0x00024c77) list_submenu_pane

0x3c70,	// (0x00024c88) scroll_pane_cp4

0x3c78,	// (0x00024c90) list_single_popup_submenu_pane_ParamLimits

0x3c78,	// (0x00024c90) list_single_popup_submenu_pane

0x3c8c,	// (0x00024ca4) list_single_popup_submenu_pane_g1

0x3c94,	// (0x00024cac) list_single_popup_submenu_pane_t1_ParamLimits

0x3c94,	// (0x00024cac) list_single_popup_submenu_pane_t1

0x34de,	// (0x000244f6) bg_active_tab_pane_cp1_ParamLimits

0x34de,	// (0x000244f6) bg_active_tab_pane_cp1

0x3ca9,	// (0x00024cc1) tabs_2_active_pane_g1

0xc3a2,	// (0x0002d3ba) tabs_2_active_pane_t1

0x34de,	// (0x000244f6) bg_passive_tab_pane_cp1_ParamLimits

0x34de,	// (0x000244f6) bg_passive_tab_pane_cp1

0x3ca9,	// (0x00024cc1) tabs_2_passive_pane_g1

0xc3a2,	// (0x0002d3ba) tabs_2_passive_pane_t1

0x3263,	// (0x0002427b) bg_active_tab_pane_cp4

0xc3b4,	// (0x0002d3cc) tabs_2_long_active_pane_t1

0x4ada,	// (0x00025af2) bg_passive_tab_pane_cp4

0x1cd4,	// (0x00022cec) list_single_midp_graphic_pane_g4_ParamLimits

0x3263,	// (0x0002427b) bg_active_tab_pane_cp5

0xc3c7,	// (0x0002d3df) tabs_3_long_active_pane_t1

0x4ada,	// (0x00025af2) bg_passive_tab_pane_cp5

0x1cd4,	// (0x00022cec) list_single_midp_graphic_pane_g4

0x3263,	// (0x0002427b) bg_popup_window_pane_cp13_ParamLimits

0x3263,	// (0x0002427b) bg_popup_window_pane_cp13

0x3d0b,	// (0x00024d23) listscroll_popup_fast_pane_ParamLimits

0x3d0b,	// (0x00024d23) listscroll_popup_fast_pane

0x3d1a,	// (0x00024d32) grid_popup_fast_pane_ParamLimits

0x3d1a,	// (0x00024d32) grid_popup_fast_pane

0x3d2c,	// (0x00024d44) scroll_pane_cp9_ParamLimits

0x3d2c,	// (0x00024d44) scroll_pane_cp9

0x7e80,	// (0x00028e98) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7e80,	// (0x00028e98) list_single_graphic_hl_pane_t1_cp2

0x3d50,	// (0x00024d68) input_focus_pane_cp20_ParamLimits

0x3d50,	// (0x00024d68) input_focus_pane_cp20

0x3d5e,	// (0x00024d76) query_popup_data_pane_t1_ParamLimits

0x3d5e,	// (0x00024d76) query_popup_data_pane_t1

0x3d71,	// (0x00024d89) query_popup_data_pane_t2_ParamLimits

0x3d71,	// (0x00024d89) query_popup_data_pane_t2

0x3db7,	// (0x00024dcf) query_popup_data_pane_t3_ParamLimits

0x3db7,	// (0x00024dcf) query_popup_data_pane_t3

0x3df8,	// (0x00024e10) query_popup_data_pane_t4_ParamLimits

0x3df8,	// (0x00024e10) query_popup_data_pane_t4

0x3e34,	// (0x00024e4c) query_popup_data_pane_t5_ParamLimits

0x3e34,	// (0x00024e4c) query_popup_data_pane_t5

0x0004,

0xf67f,	// (0x00030697) query_popup_data_pane_t_ParamLimits

0xf67f,	// (0x00030697) query_popup_data_pane_t

0x3b48,	// (0x00024b60) bg_set_opt_pane_g1

0x3b50,	// (0x00024b68) bg_set_opt_pane_g2

0x3b58,	// (0x00024b70) bg_set_opt_pane_g3

0x3b60,	// (0x00024b78) bg_set_opt_pane_g4

0x3b68,	// (0x00024b80) bg_set_opt_pane_g5

0x3b70,	// (0x00024b88) bg_set_opt_pane_g6

0x3b78,	// (0x00024b90) bg_set_opt_pane_g7

0x3b80,	// (0x00024b98) bg_set_opt_pane_g8

0x3b88,	// (0x00024ba0) bg_set_opt_pane_g9

0x0008,

0xf68a,	// (0x000306a2) bg_set_opt_pane_g

0x1374,	// (0x0002238c) control_top_pane_stacon_ParamLimits

0x1374,	// (0x0002238c) control_top_pane_stacon

0x13c7,	// (0x000223df) signal_pane_stacon_ParamLimits

0x13c7,	// (0x000223df) signal_pane_stacon

0x443f,	// (0x00025457) stacon_top_pane_g1_ParamLimits

0x443f,	// (0x00025457) stacon_top_pane_g1

0x13ec,	// (0x00022404) title_pane_stacon_ParamLimits

0x13ec,	// (0x00022404) title_pane_stacon

0x1416,	// (0x0002242e) uni_indicator_pane_stacon_ParamLimits

0x1416,	// (0x0002242e) uni_indicator_pane_stacon

0x142b,	// (0x00022443) battery_pane_stacon_ParamLimits

0x142b,	// (0x00022443) battery_pane_stacon

0x146f,	// (0x00022487) control_bottom_pane_stacon_ParamLimits

0x146f,	// (0x00022487) control_bottom_pane_stacon

0x1492,	// (0x000224aa) navi_pane_stacon_ParamLimits

0x1492,	// (0x000224aa) navi_pane_stacon

0x4461,	// (0x00025479) stacon_bottom_pane_g1_ParamLimits

0x4461,	// (0x00025479) stacon_bottom_pane_g1

0x10d7,	// (0x000220ef) aid_levels_signal_lsc_ParamLimits

0x10d7,	// (0x000220ef) aid_levels_signal_lsc

0x10ed,	// (0x00022105) signal_pane_stacon_g1_ParamLimits

0x10ed,	// (0x00022105) signal_pane_stacon_g1

0x1101,	// (0x00022119) signal_pane_stacon_g2_ParamLimits

0x1101,	// (0x00022119) signal_pane_stacon_g2

0x0001,

0xf69d,	// (0x000306b5) signal_pane_stacon_g_ParamLimits

0xf69d,	// (0x000306b5) signal_pane_stacon_g

0x1136,	// (0x0002214e) title_pane_stacon_t1_ParamLimits

0x1136,	// (0x0002214e) title_pane_stacon_t1

0x3e78,	// (0x00024e90) uni_indicator_pane_stacon_g1

0x3e82,	// (0x00024e9a) uni_indicator_pane_stacon_g2

0x3e8c,	// (0x00024ea4) uni_indicator_pane_stacon_g3

0x3e96,	// (0x00024eae) uni_indicator_pane_stacon_g4

0x0003,

0xf6a9,	// (0x000306c1) uni_indicator_pane_stacon_g

0x115b,	// (0x00022173) control_top_pane_stacon_g1

0x1163,	// (0x0002217b) control_top_pane_stacon_t1_ParamLimits

0x1163,	// (0x0002217b) control_top_pane_stacon_t1

0x119a,	// (0x000221b2) aid_levels_battery_lsc_ParamLimits

0x119a,	// (0x000221b2) aid_levels_battery_lsc

0x11b1,	// (0x000221c9) battery_pane_stacon_g1_ParamLimits

0x11b1,	// (0x000221c9) battery_pane_stacon_g1

0x11c4,	// (0x000221dc) battery_pane_stacon_g2_ParamLimits

0x11c4,	// (0x000221dc) battery_pane_stacon_g2

0x0001,

0xf6b2,	// (0x000306ca) battery_pane_stacon_g_ParamLimits

0xf6b2,	// (0x000306ca) battery_pane_stacon_g

0x1202,	// (0x0002221a) navi_icon_pane_stacon

0x1216,	// (0x0002222e) navi_navi_pane_stacon

0x1202,	// (0x0002221a) navi_text_pane_stacon

0x115b,	// (0x00022173) control_bottom_pane_stacon_g1

0x122a,	// (0x00022242) control_bottom_pane_stacon_t1_ParamLimits

0x122a,	// (0x00022242) control_bottom_pane_stacon_t1

0xc3d9,	// (0x0002d3f1) grid_app_pane_ParamLimits

0xc3d9,	// (0x0002d3f1) grid_app_pane

0xc411,	// (0x0002d429) scroll_pane_cp15_ParamLimits

0xc411,	// (0x0002d429) scroll_pane_cp15

0xc426,	// (0x0002d43e) cell_app_pane_ParamLimits

0xc426,	// (0x0002d43e) cell_app_pane

0xc46b,	// (0x0002d483) cell_app_pane_g1_ParamLimits

0xc46b,	// (0x0002d483) cell_app_pane_g1

0x3f3b,	// (0x00024f53) cell_app_pane_g2_ParamLimits

0x3f3b,	// (0x00024f53) cell_app_pane_g2

0x0001,

0xf6b7,	// (0x000306cf) cell_app_pane_g_ParamLimits

0xf6b7,	// (0x000306cf) cell_app_pane_g

0xc48f,	// (0x0002d4a7) cell_app_pane_t1_ParamLimits

0xc48f,	// (0x0002d4a7) cell_app_pane_t1

0x3f5e,	// (0x00024f76) grid_highlight_pane_ParamLimits

0x3f5e,	// (0x00024f76) grid_highlight_pane

0x3b48,	// (0x00024b60) cell_highlight_pane_g1

0x3b50,	// (0x00024b68) cell_highlight_pane_g2

0x3b58,	// (0x00024b70) cell_highlight_pane_g3

0x3b60,	// (0x00024b78) cell_highlight_pane_g4

0x3b68,	// (0x00024b80) cell_highlight_pane_g5

0x3b70,	// (0x00024b88) cell_highlight_pane_g6

0x3b78,	// (0x00024b90) cell_highlight_pane_g7

0x3b80,	// (0x00024b98) cell_highlight_pane_g8

0x3b88,	// (0x00024ba0) cell_highlight_pane_g9

0xeb6a,	// (0x0002fb82) cell_highlight_pane_g10

0x0009,

0xf665,	// (0x0003067d) cell_highlight_pane_g

0x3f6f,	// (0x00024f87) bg_scroll_pane

0x1274,	// (0x0002228c) scroll_handle_pane

0x3fb6,	// (0x00024fce) scroll_bg_pane_g1

0x3fcb,	// (0x00024fe3) scroll_bg_pane_g2

0x3fe3,	// (0x00024ffb) scroll_bg_pane_g3

0x0002,

0xf6bc,	// (0x000306d4) scroll_bg_pane_g

0x3ff8,	// (0x00025010) scroll_handle_focus_pane_ParamLimits

0x3ff8,	// (0x00025010) scroll_handle_focus_pane

0x3fb6,	// (0x00024fce) scroll_handle_pane_g1

0x4005,	// (0x0002501d) scroll_handle_pane_g2

0x3fe3,	// (0x00024ffb) scroll_handle_pane_g3

0x0002,

0xf6c3,	// (0x000306db) scroll_handle_pane_g

0x3c0f,	// (0x00024c27) bg_popup_sub_pane_cp21_ParamLimits

0x3c0f,	// (0x00024c27) bg_popup_sub_pane_cp21

0x4019,	// (0x00025031) popup_fep_japan_predictive_window_t1_ParamLimits

0x4019,	// (0x00025031) popup_fep_japan_predictive_window_t1

0x4033,	// (0x0002504b) popup_fep_japan_predictive_window_t2_ParamLimits

0x4033,	// (0x0002504b) popup_fep_japan_predictive_window_t2

0x4066,	// (0x0002507e) popup_fep_japan_predictive_window_t3_ParamLimits

0x4066,	// (0x0002507e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ca,	// (0x000306e2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ca,	// (0x000306e2) popup_fep_japan_predictive_window_t

0xeb74,	// (0x0002fb8c) bg_popup_sub_pane_cp23

0x409d,	// (0x000250b5) listscroll_japin_cand_pane

0x40a5,	// (0x000250bd) popup_fep_japan_candidate_window_t1

0x40b3,	// (0x000250cb) candidate_pane_ParamLimits

0x40b3,	// (0x000250cb) candidate_pane

0x40c5,	// (0x000250dd) scroll_pane_cp30

0x40cd,	// (0x000250e5) list_single_popup_jap_candidate_pane_ParamLimits

0x40cd,	// (0x000250e5) list_single_popup_jap_candidate_pane

0xeb74,	// (0x0002fb8c) list_highlight_pane_cp30

0x40e2,	// (0x000250fa) list_single_popup_jap_candidate_pane_t1

0x40f1,	// (0x00025109) level_1_signal

0x4103,	// (0x0002511b) level_2_signal

0x4116,	// (0x0002512e) level_3_signal

0x4129,	// (0x00025141) level_4_signal

0x413c,	// (0x00025154) level_5_signal

0x414f,	// (0x00025167) level_6_signal

0x4162,	// (0x0002517a) level_7_signal

0x40f1,	// (0x00025109) level_1_battery

0x4103,	// (0x0002511b) level_2_battery

0x4116,	// (0x0002512e) level_3_battery

0x4129,	// (0x00025141) level_4_battery

0x413c,	// (0x00025154) level_5_battery

0x414f,	// (0x00025167) level_6_battery

0x4162,	// (0x0002517a) level_7_battery

0x418d,	// (0x000251a5) list_menu_pane_ParamLimits

0x418d,	// (0x000251a5) list_menu_pane

0x41a3,	// (0x000251bb) scroll_pane_cp25_ParamLimits

0x41a3,	// (0x000251bb) scroll_pane_cp25

0x41bc,	// (0x000251d4) list_double2_graphic_pane_cp2_ParamLimits

0x41bc,	// (0x000251d4) list_double2_graphic_pane_cp2

0x41bc,	// (0x000251d4) list_double2_large_graphic_pane_cp2_ParamLimits

0x41bc,	// (0x000251d4) list_double2_large_graphic_pane_cp2

0x41bc,	// (0x000251d4) list_double2_pane_cp2_ParamLimits

0x41bc,	// (0x000251d4) list_double2_pane_cp2

0x41bc,	// (0x000251d4) list_double_graphic_pane_cp2_ParamLimits

0x41bc,	// (0x000251d4) list_double_graphic_pane_cp2

0x41bc,	// (0x000251d4) list_double_large_graphic_pane_cp2_ParamLimits

0x41bc,	// (0x000251d4) list_double_large_graphic_pane_cp2

0x41bc,	// (0x000251d4) list_double_number_pane_cp2_ParamLimits

0x41bc,	// (0x000251d4) list_double_number_pane_cp2

0x41bc,	// (0x000251d4) list_double_pane_cp2_ParamLimits

0x41bc,	// (0x000251d4) list_double_pane_cp2

0xc4a6,	// (0x0002d4be) list_single_2graphic_pane_cp2_ParamLimits

0xc4a6,	// (0x0002d4be) list_single_2graphic_pane_cp2

0xc4a6,	// (0x0002d4be) list_single_graphic_heading_pane_cp2_ParamLimits

0xc4a6,	// (0x0002d4be) list_single_graphic_heading_pane_cp2

0xc4a6,	// (0x0002d4be) list_single_graphic_pane_cp2_ParamLimits

0xc4a6,	// (0x0002d4be) list_single_graphic_pane_cp2

0xc4a6,	// (0x0002d4be) list_single_heading_pane_cp2_ParamLimits

0xc4a6,	// (0x0002d4be) list_single_heading_pane_cp2

0x41f9,	// (0x00025211) list_single_large_graphic_pane_cp2_ParamLimits

0x41f9,	// (0x00025211) list_single_large_graphic_pane_cp2

0xc4a6,	// (0x0002d4be) list_single_number_heading_pane_cp2_ParamLimits

0xc4a6,	// (0x0002d4be) list_single_number_heading_pane_cp2

0xc4a6,	// (0x0002d4be) list_single_number_pane_cp2_ParamLimits

0xc4a6,	// (0x0002d4be) list_single_number_pane_cp2

0xc4b8,	// (0x0002d4d0) list_single_pane_cp2_ParamLimits

0xc4b8,	// (0x0002d4d0) list_single_pane_cp2

0x428e,	// (0x000252a6) bg_popup_sub_pane_cp22

0x1326,	// (0x0002233e) popup_side_volume_key_window_g1

0x1350,	// (0x00022368) popup_side_volume_key_window_t1

0x136c,	// (0x00022384) volume_small_pane_cp1

0x34de,	// (0x000244f6) bg_popup_sub_pane_cp24_ParamLimits

0x34de,	// (0x000244f6) bg_popup_sub_pane_cp24

0x42a4,	// (0x000252bc) fep_china_uni_candidate_pane_ParamLimits

0x42a4,	// (0x000252bc) fep_china_uni_candidate_pane

0x42b8,	// (0x000252d0) fep_china_uni_entry_pane

0x42c8,	// (0x000252e0) popup_fep_china_uni_window_g1

0x42e4,	// (0x000252fc) fep_china_uni_entry_pane_g1

0x42ec,	// (0x00025304) fep_china_uni_entry_pane_g2

0x0001,

0xf6fb,	// (0x00030713) fep_china_uni_entry_pane_g

0x42f4,	// (0x0002530c) fep_entry_item_pane

0x42fe,	// (0x00025316) fep_candidate_item_pane

0x4306,	// (0x0002531e) fep_china_uni_candidate_pane_g1

0x430e,	// (0x00025326) fep_china_uni_candidate_pane_g2

0x4316,	// (0x0002532e) fep_china_uni_candidate_pane_g3

0x431e,	// (0x00025336) fep_china_uni_candidate_pane_g4

0x0003,

0xf700,	// (0x00030718) fep_china_uni_candidate_pane_g

0xeb6a,	// (0x0002fb82) fep_entry_item_pane_g1

0x4326,	// (0x0002533e) fep_entry_item_pane_t1_ParamLimits

0x4326,	// (0x0002533e) fep_entry_item_pane_t1

0x433c,	// (0x00025354) fep_candidate_item_pane_t1_ParamLimits

0x433c,	// (0x00025354) fep_candidate_item_pane_t1

0x4351,	// (0x00025369) fep_candidate_item_pane_t2_ParamLimits

0x4351,	// (0x00025369) fep_candidate_item_pane_t2

0x0001,

0xf709,	// (0x00030721) fep_candidate_item_pane_t_ParamLimits

0xf709,	// (0x00030721) fep_candidate_item_pane_t

0x3263,	// (0x0002427b) list_highlight_pane_cp31_ParamLimits

0x3263,	// (0x0002427b) list_highlight_pane_cp31

0x4363,	// (0x0002537b) level_1_signal_lsc

0x436c,	// (0x00025384) level_2_signal_lsc

0x4375,	// (0x0002538d) level_3_signal_lsc

0x437e,	// (0x00025396) level_4_signal_lsc

0x4387,	// (0x0002539f) level_5_signal_lsc

0x4390,	// (0x000253a8) level_6_signal_lsc

0x4399,	// (0x000253b1) level_7_signal_lsc

0x4399,	// (0x000253b1) level_1_battery_lsc

0x43a2,	// (0x000253ba) level_2_battery_lsc

0x43ab,	// (0x000253c3) level_3_battery_lsc

0x43b4,	// (0x000253cc) level_4_battery_lsc

0x43bd,	// (0x000253d5) level_5_battery_lsc

0x43c6,	// (0x000253de) level_6_battery_lsc

0x4363,	// (0x0002537b) level_7_battery_lsc

0x43cf,	// (0x000253e7) scroll_handle_focus_pane_g1

0x43d8,	// (0x000253f0) scroll_handle_focus_pane_g2

0x43e1,	// (0x000253f9) scroll_handle_focus_pane_g3

0x0002,

0xf70e,	// (0x00030726) scroll_handle_focus_pane_g

0xbaba,	// (0x0002cad2) list_single_2graphic_pane_g1_ParamLimits

0xbaba,	// (0x0002cad2) list_single_2graphic_pane_g1

0xb588,	// (0x0002c5a0) list_single_2graphic_pane_g2_ParamLimits

0xb588,	// (0x0002c5a0) list_single_2graphic_pane_g2

0x02b8,	// (0x000212d0) list_single_2graphic_pane_g3_ParamLimits

0x02b8,	// (0x000212d0) list_single_2graphic_pane_g3

0xbac6,	// (0x0002cade) list_single_2graphic_pane_g4_ParamLimits

0xbac6,	// (0x0002cade) list_single_2graphic_pane_g4

0x0003,

0xf715,	// (0x0003072d) list_single_2graphic_pane_g_ParamLimits

0xf715,	// (0x0003072d) list_single_2graphic_pane_g

0xbad7,	// (0x0002caef) list_single_2graphic_pane_t1_ParamLimits

0xbad7,	// (0x0002caef) list_single_2graphic_pane_t1

0xbb05,	// (0x0002cb1d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbb05,	// (0x0002cb1d) list_double2_graphic_large_graphic_pane_g1

0xb5f3,	// (0x0002c60b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb5f3,	// (0x0002c60b) list_double2_graphic_large_graphic_pane_g2

0xb604,	// (0x0002c61c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb604,	// (0x0002c61c) list_double2_graphic_large_graphic_pane_g3

0xbb17,	// (0x0002cb2f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb17,	// (0x0002cb2f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71e,	// (0x00030736) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71e,	// (0x00030736) list_double2_graphic_large_graphic_pane_g

0xbb23,	// (0x0002cb3b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb23,	// (0x0002cb3b) list_double2_graphic_large_graphic_pane_t1

0xbb39,	// (0x0002cb51) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb39,	// (0x0002cb51) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf727,	// (0x0003073f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf727,	// (0x0003073f) list_double2_graphic_large_graphic_pane_t

0x452c,	// (0x00025544) popup_fast_swap_window_ParamLimits

0x452c,	// (0x00025544) popup_fast_swap_window

0x4548,	// (0x00025560) popup_side_volume_key_window

0x4564,	// (0x0002557c) stacon_top_pane

0x456e,	// (0x00025586) status_pane_ParamLimits

0x456e,	// (0x00025586) status_pane

0xeb60,	// (0x0002fb78) status_small_pane

0xeb74,	// (0x0002fb8c) control_pane

0xeb74,	// (0x0002fb8c) stacon_bottom_pane

0x3ad3,	// (0x00024aeb) scroll_pane_cp121

0x3aca,	// (0x00024ae2) set_content_pane

0x43ea,	// (0x00025402) bg_active_tab_pane_g1_cp1

0x43f3,	// (0x0002540b) bg_active_tab_pane_g2_cp1

0x43fc,	// (0x00025414) bg_active_tab_pane_g3_cp1

0x43ea,	// (0x00025402) bg_passive_tab_pane_g1_cp1

0x43f3,	// (0x0002540b) bg_passive_tab_pane_g2_cp1

0x43fc,	// (0x00025414) bg_passive_tab_pane_g3_cp1

0x4405,	// (0x0002541d) bg_active_tab_pane_g1_cp2

0x43f3,	// (0x0002540b) bg_active_tab_pane_g2_cp2

0x440e,	// (0x00025426) bg_active_tab_pane_g3_cp2

0x4405,	// (0x0002541d) bg_passive_tab_pane_g1_cp2

0x43f3,	// (0x0002540b) bg_passive_tab_pane_g2_cp2

0x440e,	// (0x00025426) bg_passive_tab_pane_g3_cp2

0x4417,	// (0x0002542f) bg_active_tab_pane_g1_cp3

0x43f3,	// (0x0002540b) bg_active_tab_pane_g2_cp3

0x4420,	// (0x00025438) bg_active_tab_pane_g3_cp3

0x4417,	// (0x0002542f) bg_passive_tab_pane_g1_cp3

0x43f3,	// (0x0002540b) bg_passive_tab_pane_g2_cp3

0x4420,	// (0x00025438) bg_passive_tab_pane_g3_cp3

0x4429,	// (0x00025441) bg_active_tab_pane_g1_cp4

0x43f3,	// (0x0002540b) bg_active_tab_pane_g2_cp4

0x4434,	// (0x0002544c) bg_active_tab_pane_g3_cp4

0x4429,	// (0x00025441) bg_passive_tab_pane_g1_cp4

0x43f3,	// (0x0002540b) bg_passive_tab_pane_g2_cp4

0x4434,	// (0x0002544c) bg_passive_tab_pane_g3_cp4

0x447d,	// (0x00025495) bg_active_tab_pane_g1_cp5

0x43f3,	// (0x0002540b) bg_active_tab_pane_g2_cp5

0x4486,	// (0x0002549e) bg_active_tab_pane_g3_cp5

0x447d,	// (0x00025495) bg_passive_tab_pane_g1_cp5

0x43f3,	// (0x0002540b) bg_passive_tab_pane_g2_cp5

0x4486,	// (0x0002549e) bg_passive_tab_pane_g3_cp5

0x6b5c,	// (0x00027b74) list_set_graphic_pane_ParamLimits

0x6b5c,	// (0x00027b74) list_set_graphic_pane

0xeb74,	// (0x0002fb8c) bg_set_opt_pane_cp4

0x44af,	// (0x000254c7) list_set_graphic_pane_g1_ParamLimits

0x44af,	// (0x000254c7) list_set_graphic_pane_g1

0x44bb,	// (0x000254d3) list_set_graphic_pane_g2_ParamLimits

0x44bb,	// (0x000254d3) list_set_graphic_pane_g2

0x0001,

0xf72c,	// (0x00030744) list_set_graphic_pane_g_ParamLimits

0xf72c,	// (0x00030744) list_set_graphic_pane_g

0x0009,

0xfaa1,	// (0x00030ab9) volume_small_pane_cp_g

0x44df,	// (0x000254f7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x44df,	// (0x000254f7) list_double2_large_graphic_pane_g1_cp2

0x44eb,	// (0x00025503) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x44eb,	// (0x00025503) list_double2_large_graphic_pane_g2_cp2

0x44fc,	// (0x00025514) list_double2_large_graphic_pane_g3_cp2

0x4504,	// (0x0002551c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4504,	// (0x0002551c) list_double2_large_graphic_pane_t1_cp2

0x451a,	// (0x00025532) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x451a,	// (0x00025532) list_double2_large_graphic_pane_t2_cp2

0x60fc,	// (0x00027114) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x60fc,	// (0x00027114) list_double_large_graphic_pane_g1_cp2

0x610d,	// (0x00027125) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x610d,	// (0x00027125) list_double_large_graphic_pane_g2_cp2

0x468a,	// (0x000256a2) list_double_large_graphic_pane_g3_cp2

0x611e,	// (0x00027136) list_double_large_graphic_pane_g4_cp

0x6126,	// (0x0002713e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6126,	// (0x0002713e) list_double_large_graphic_pane_t1_cp2

0x613d,	// (0x00027155) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x613d,	// (0x00027155) list_double_large_graphic_pane_t2_cp2

0x457c,	// (0x00025594) list_double2_graphic_pane_g1_cp2_ParamLimits

0x457c,	// (0x00025594) list_double2_graphic_pane_g1_cp2

0x458a,	// (0x000255a2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x458a,	// (0x000255a2) list_double2_graphic_pane_g2_cp2

0x459b,	// (0x000255b3) list_double2_graphic_pane_g3_cp2

0x45a5,	// (0x000255bd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x45a5,	// (0x000255bd) list_double2_graphic_pane_t1_cp2

0x45bb,	// (0x000255d3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x45bb,	// (0x000255d3) list_double2_graphic_pane_t2_cp2

0x45cd,	// (0x000255e5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x45cd,	// (0x000255e5) list_single_number_heading_pane_g1_cp2

0x45d9,	// (0x000255f1) list_single_number_heading_pane_g2_cp2

0x45e1,	// (0x000255f9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x45e1,	// (0x000255f9) list_single_number_heading_pane_t1_cp2

0x45f7,	// (0x0002560f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x45f7,	// (0x0002560f) list_single_number_heading_pane_t2_cp2

0x4609,	// (0x00025621) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4609,	// (0x00025621) list_single_number_heading_pane_t3_cp2

0x45cd,	// (0x000255e5) list_single_heading_pane_g1_cp2_ParamLimits

0x45cd,	// (0x000255e5) list_single_heading_pane_g1_cp2

0x45d9,	// (0x000255f1) list_single_heading_pane_g2_cp2

0x45e1,	// (0x000255f9) list_single_heading_pane_t1_cp2_ParamLimits

0x45e1,	// (0x000255f9) list_single_heading_pane_t1_cp2

0x5f04,	// (0x00026f1c) list_single_heading_pane_t2_cp2_ParamLimits

0x5f04,	// (0x00026f1c) list_single_heading_pane_t2_cp2

0x5e4c,	// (0x00026e64) list_double_graphic_pane_g1_cp2_ParamLimits

0x5e4c,	// (0x00026e64) list_double_graphic_pane_g1_cp2

0x5e58,	// (0x00026e70) list_double_graphic_pane_g2_cp2_ParamLimits

0x5e58,	// (0x00026e70) list_double_graphic_pane_g2_cp2

0x5e67,	// (0x00026e7f) list_double_graphic_pane_g3_cp2

0x5e6f,	// (0x00026e87) list_double_graphic_pane_t1_cp2_ParamLimits

0x5e6f,	// (0x00026e87) list_double_graphic_pane_t1_cp2

0x5e85,	// (0x00026e9d) list_double_graphic_pane_t2_cp2_ParamLimits

0x5e85,	// (0x00026e9d) list_double_graphic_pane_t2_cp2

0x467e,	// (0x00025696) list_double_number_pane_g1_cp2_ParamLimits

0x467e,	// (0x00025696) list_double_number_pane_g1_cp2

0x468a,	// (0x000256a2) list_double_number_pane_g2_cp2

0x5e10,	// (0x00026e28) list_double_number_pane_t1_cp2_ParamLimits

0x5e10,	// (0x00026e28) list_double_number_pane_t1_cp2

0x5e24,	// (0x00026e3c) list_double_number_pane_t2_cp2_ParamLimits

0x5e24,	// (0x00026e3c) list_double_number_pane_t2_cp2

0x5e3a,	// (0x00026e52) list_double_number_pane_t3_cp2_ParamLimits

0x5e3a,	// (0x00026e52) list_double_number_pane_t3_cp2

0x5cf9,	// (0x00026d11) list_single_graphic_pane_g1_cp2_ParamLimits

0x5cf9,	// (0x00026d11) list_single_graphic_pane_g1_cp2

0x46ef,	// (0x00025707) list_single_graphic_pane_g2_cp2_ParamLimits

0x46ef,	// (0x00025707) list_single_graphic_pane_g2_cp2

0x46fb,	// (0x00025713) list_single_graphic_pane_g3_cp2

0x5ccf,	// (0x00026ce7) list_single_graphic_pane_t1_cp2_ParamLimits

0x5ccf,	// (0x00026ce7) list_single_graphic_pane_t1_cp2

0x46ef,	// (0x00025707) list_single_number_pane_g1_cp2_ParamLimits

0x46ef,	// (0x00025707) list_single_number_pane_g1_cp2

0x46fb,	// (0x00025713) list_single_number_pane_g2_cp2

0x5ccf,	// (0x00026ce7) list_single_number_pane_t1_cp2_ParamLimits

0x5ccf,	// (0x00026ce7) list_single_number_pane_t1_cp2

0x5ce5,	// (0x00026cfd) list_single_number_pane_t2_cp2_ParamLimits

0x5ce5,	// (0x00026cfd) list_single_number_pane_t2_cp2

0x44eb,	// (0x00025503) list_double2_pane_g1_cp2_ParamLimits

0x44eb,	// (0x00025503) list_double2_pane_g1_cp2

0x44fc,	// (0x00025514) list_double2_pane_g2_cp2

0x4656,	// (0x0002566e) list_double2_pane_t1_cp2_ParamLimits

0x4656,	// (0x0002566e) list_double2_pane_t1_cp2

0x466c,	// (0x00025684) list_double2_pane_t2_cp2_ParamLimits

0x466c,	// (0x00025684) list_double2_pane_t2_cp2

0x467e,	// (0x00025696) list_double_pane_g1_cp2_ParamLimits

0x467e,	// (0x00025696) list_double_pane_g1_cp2

0x468a,	// (0x000256a2) list_double_pane_g2_cp2

0x4692,	// (0x000256aa) list_double_pane_t1_cp2_ParamLimits

0x4692,	// (0x000256aa) list_double_pane_t1_cp2

0x46a8,	// (0x000256c0) list_double_pane_t2_cp2_ParamLimits

0x46a8,	// (0x000256c0) list_double_pane_t2_cp2

0x46df,	// (0x000256f7) list_single_pane_cp2_g3

0x46ef,	// (0x00025707) list_single_pane_g1_cp2_ParamLimits

0x46ef,	// (0x00025707) list_single_pane_g1_cp2

0x46fb,	// (0x00025713) list_single_pane_g2_cp2

0x4703,	// (0x0002571b) list_single_pane_t1_cp2_ParamLimits

0x4703,	// (0x0002571b) list_single_pane_t1_cp2

0x471b,	// (0x00025733) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x471b,	// (0x00025733) list_single_large_graphic_pane_g1_cp2

0x4727,	// (0x0002573f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4727,	// (0x0002573f) list_single_large_graphic_pane_g2_cp2

0x4733,	// (0x0002574b) list_single_large_graphic_pane_g3_cp2

0x473b,	// (0x00025753) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x473b,	// (0x00025753) list_single_large_graphic_pane_g4_cp1

0x4755,	// (0x0002576d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4755,	// (0x0002576d) list_single_large_graphic_pane_t1_cp2

0x5c9b,	// (0x00026cb3) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5c9b,	// (0x00026cb3) list_single_graphic_heading_pane_g1_cp2

0x5c68,	// (0x00026c80) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5c68,	// (0x00026c80) list_single_graphic_heading_pane_g4_cp2

0x46fb,	// (0x00025713) list_single_graphic_heading_pane_g5_cp2

0x5ca7,	// (0x00026cbf) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5ca7,	// (0x00026cbf) list_single_graphic_heading_pane_t1_cp2

0x5cbd,	// (0x00026cd5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5cbd,	// (0x00026cd5) list_single_graphic_heading_pane_t2_cp2

0x5c5c,	// (0x00026c74) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5c5c,	// (0x00026c74) list_single_2graphic_pane_g1_cp2

0x5c68,	// (0x00026c80) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5c68,	// (0x00026c80) list_single_2graphic_pane_g2_cp2

0x46fb,	// (0x00025713) list_single_2graphic_pane_g3_cp2

0x5c79,	// (0x00026c91) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c79,	// (0x00026c91) list_single_2graphic_pane_g4_cp2

0x5c85,	// (0x00026c9d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5c85,	// (0x00026c9d) list_single_2graphic_pane_t1_cp2

0xeb6a,	// (0x0002fb82) list_highlight_pane_g10_cp1

0x5834,	// (0x0002684c) list_highlight_pane_g1_cp1

0x583c,	// (0x00026854) list_highlight_pane_g2_cp1

0x5844,	// (0x0002685c) list_highlight_pane_g3_cp1

0x584c,	// (0x00026864) list_highlight_pane_g4_cp1

0x5854,	// (0x0002686c) list_highlight_pane_g5_cp1

0x585c,	// (0x00026874) list_highlight_pane_g6_cp1

0x5864,	// (0x0002687c) list_highlight_pane_g7_cp1

0x586c,	// (0x00026884) list_highlight_pane_g8_cp1

0x5874,	// (0x0002688c) list_highlight_pane_g9_cp1

0xdab4,	// (0x0002eacc) form_field_slider_pane_t3

0xdac2,	// (0x0002eada) form_field_slider_pane_t4

0x5770,	// (0x00026788) slider_form_pane_ParamLimits

0x5770,	// (0x00026788) slider_form_pane

0xeb74,	// (0x0002fb8c) control_abbreviations

0xeb74,	// (0x0002fb8c) control_conventions

0xeb74,	// (0x0002fb8c) control_definitions

0xeb74,	// (0x0002fb8c) format_table_attribute

0x5f4e,	// (0x00026f66) bg_popup_preview_window_pane_g9

0xeb74,	// (0x0002fb8c) format_table_data2

0xeb74,	// (0x0002fb8c) format_table_data3

0xeb74,	// (0x0002fb8c) format_table_data_example

0x0008,

0xeb74,	// (0x0002fb8c) intro_purpose

0xf8c3,	// (0x000308db) bg_popup_preview_window_pane_g

0xeb74,	// (0x0002fb8c) texts_category

0xeb74,	// (0x0002fb8c) texts_graphics

0x476b,	// (0x00025783) text_digital

0x477a,	// (0x00025792) text_primary

0x4789,	// (0x000257a1) text_primary_small

0x4798,	// (0x000257b0) text_secondary

0x47a7,	// (0x000257bf) text_title

0x6681,	// (0x00027699) bg_passive_tab_pane_g1_cp3_srt

0x43f3,	// (0x0002540b) bg_passive_tab_pane_g2_cp3_srt

0x668a,	// (0x000276a2) bg_passive_tab_pane_g3_cp3_srt

0x34de,	// (0x000244f6) bg_active_tab_pane_cp3_srt_ParamLimits

0x34de,	// (0x000244f6) bg_active_tab_pane_cp3_srt

0x6693,	// (0x000276ab) tabs_4_active_pane_srt_g1

0xde06,	// (0x0002ee1e) tabs_4_active_pane_srt_t1_ParamLimits

0xde06,	// (0x0002ee1e) tabs_4_active_pane_srt_t1

0x6681,	// (0x00027699) bg_active_tab_pane_g1_cp3_copy1

0x43f3,	// (0x0002540b) bg_active_tab_pane_g2_cp3_copy1

0x668a,	// (0x000276a2) bg_active_tab_pane_g3_cp3_copy1

0x3263,	// (0x0002427b) tabs_2_long_active_pane_srt_ParamLimits

0x3263,	// (0x0002427b) tabs_2_long_active_pane_srt

0x3263,	// (0x0002427b) tabs_2_long_passive_pane_srt_ParamLimits

0x3263,	// (0x0002427b) tabs_2_long_passive_pane_srt

0x4ada,	// (0x00025af2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4ada,	// (0x00025af2) bg_passive_tab_pane_cp4_srt

0x636c,	// (0x00027384) bg_passive_tab_pane_g1_cp4_srt

0x43f3,	// (0x0002540b) bg_passive_tab_pane_g2_cp4_srt

0x6375,	// (0x0002738d) bg_passive_tab_pane_g3_cp4_srt

0x3263,	// (0x0002427b) bg_active_tab_pane_cp4_srt_ParamLimits

0x3263,	// (0x0002427b) bg_active_tab_pane_cp4_srt

0xdc1f,	// (0x0002ec37) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc1f,	// (0x0002ec37) tabs_2_long_active_pane_srt_t1

0x636c,	// (0x00027384) bg_active_tab_pane_g1_cp4_srt

0x43f3,	// (0x0002540b) bg_active_tab_pane_g2_cp4_srt

0x6375,	// (0x0002738d) bg_active_tab_pane_g3_cp4_srt

0x34de,	// (0x000244f6) tabs_3_long_active_pane_srt_ParamLimits

0x34de,	// (0x000244f6) tabs_3_long_active_pane_srt

0x34de,	// (0x000244f6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x34de,	// (0x000244f6) tabs_3_long_passive_pane_cp_srt

0x34de,	// (0x000244f6) tabs_3_long_passive_pane_srt_ParamLimits

0x34de,	// (0x000244f6) tabs_3_long_passive_pane_srt

0x4ada,	// (0x00025af2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4ada,	// (0x00025af2) bg_passive_tab_pane_cp5_srt

0x447d,	// (0x00025495) bg_passive_tab_pane_g1_cp5_srt

0x43f3,	// (0x0002540b) bg_passive_tab_pane_g2_cp5_srt

0x4486,	// (0x0002549e) bg_passive_tab_pane_g3_cp5_srt

0x3263,	// (0x0002427b) bg_active_tab_pane_cp5_srt_ParamLimits

0x3263,	// (0x0002427b) bg_active_tab_pane_cp5_srt

0xdc09,	// (0x0002ec21) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdc09,	// (0x0002ec21) tabs_3_long_active_pane_srt_t1

0x447d,	// (0x00025495) bg_active_tab_pane_g1_cp5_srt

0x43f3,	// (0x0002540b) bg_active_tab_pane_g2_cp5_srt

0x4486,	// (0x0002549e) bg_active_tab_pane_g3_cp5_srt

0x634c,	// (0x00027364) navi_text_pane_srt_t1

0x6344,	// (0x0002735c) navi_icon_pane_srt_g1

0x497c,	// (0x00025994) midp_editing_number_pane_srt

0x47b6,	// (0x000257ce) midp_ticker_pane_srt

0x4984,	// (0x0002599c) midp_ticker_pane_srt_g1

0x498c,	// (0x000259a4) midp_ticker_pane_srt_g2

0x0001,

0xf74b,	// (0x00030763) midp_ticker_pane_srt_g

0x4994,	// (0x000259ac) midp_ticker_pane_srt_t1

0x6335,	// (0x0002734d) midp_editing_number_pane_t1_copy1

0xc545,	// (0x0002d55d) listscroll_midp_pane

0xc545,	// (0x0002d55d) midp_form_pane

0x482e,	// (0x00025846) midp_info_popup_window_ParamLimits

0x482e,	// (0x00025846) midp_info_popup_window

0x3c0f,	// (0x00024c27) bg_popup_sub_pane_cp50_ParamLimits

0x3c0f,	// (0x00024c27) bg_popup_sub_pane_cp50

0x5458,	// (0x00026470) listscroll_midp_info_pane_ParamLimits

0x5458,	// (0x00026470) listscroll_midp_info_pane

0x5438,	// (0x00026450) listscroll_form_midp_pane_ParamLimits

0x5438,	// (0x00026450) listscroll_form_midp_pane

0x5444,	// (0x0002645c) scroll_bar_cp050

0x5438,	// (0x00026450) list_midp_pane

0x710b,	// (0x00028123) signal_pane_g2_cp

0x5352,	// (0x0002636a) listscroll_midp_info_pane_t1_ParamLimits

0x5352,	// (0x0002636a) listscroll_midp_info_pane_t1

0x536a,	// (0x00026382) listscroll_midp_info_pane_t2_ParamLimits

0x536a,	// (0x00026382) listscroll_midp_info_pane_t2

0x53a8,	// (0x000263c0) listscroll_midp_info_pane_t3_ParamLimits

0x53a8,	// (0x000263c0) listscroll_midp_info_pane_t3

0x53e2,	// (0x000263fa) listscroll_midp_info_pane_t4_ParamLimits

0x53e2,	// (0x000263fa) listscroll_midp_info_pane_t4

0x0003,

0xf7fe,	// (0x00030816) listscroll_midp_info_pane_t_ParamLimits

0xf7fe,	// (0x00030816) listscroll_midp_info_pane_t

0x3c70,	// (0x00024c88) scroll_pane_cp21

0x52f0,	// (0x00026308) form_midp_field_choice_group_pane

0x52f9,	// (0x00026311) form_midp_field_text_pane

0x5338,	// (0x00026350) form_midp_field_time_pane

0x5340,	// (0x00026358) form_midp_gauge_slider_pane

0x5349,	// (0x00026361) form_midp_gauge_wait_pane

0xeb74,	// (0x0002fb8c) form_midp_image_pane

0xbb67,	// (0x0002cb7f) list_single_midp_pane_ParamLimits

0xbb67,	// (0x0002cb7f) list_single_midp_pane

0xda93,	// (0x0002eaab) form_midp_field_text_pane_t1

0x5078,	// (0x00026090) input_focus_pane_cp050

0x52df,	// (0x000262f7) list_midp_form_text_pane

0x5277,	// (0x0002628f) form_midp_field_choice_group_pane_t1

0x5285,	// (0x0002629d) input_focus_pane_cp051

0x5299,	// (0x000262b1) list_midp_choice_pane

0xeb74,	// (0x0002fb8c) status_idle_pane

0x525b,	// (0x00026273) form_midp_field_time_pane_t1

0xeb6a,	// (0x0002fb82) wait_anim_pane_g2_copy1

0x5269,	// (0x00026281) form_midp_field_time_pane_t2

0x0001,

0x48dc,	// (0x000258f4) aid_navinavi_width_2_pane

0xf7f9,	// (0x00030811) form_midp_field_time_pane_t

0xeb74,	// (0x0002fb8c) input_focus_pane_cp052

0xeb74,	// (0x0002fb8c) bg_input_focus_pane_cp040

0x521b,	// (0x00026233) form_midp_gauge_slider_pane_t1

0x5229,	// (0x00026241) form_midp_gauge_slider_pane_t2

0xda77,	// (0x0002ea8f) form_midp_gauge_slider_pane_t3

0xda85,	// (0x0002ea9d) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f0,	// (0x00030808) form_midp_gauge_slider_pane_t

0x5253,	// (0x0002626b) form_midp_slider_pane

0x3263,	// (0x0002427b) bg_input_focus_pane_cp041_ParamLimits

0x3263,	// (0x0002427b) bg_input_focus_pane_cp041

0x51e8,	// (0x00026200) form_midp_gauge_wait_pane_t1_ParamLimits

0x51e8,	// (0x00026200) form_midp_gauge_wait_pane_t1

0x51fa,	// (0x00026212) form_midp_gauge_wait_pane_t2_ParamLimits

0x51fa,	// (0x00026212) form_midp_gauge_wait_pane_t2

0x0001,

0xf7eb,	// (0x00030803) form_midp_gauge_wait_pane_t_ParamLimits

0xf7eb,	// (0x00030803) form_midp_gauge_wait_pane_t

0x520c,	// (0x00026224) form_midp_wait_pane_ParamLimits

0x520c,	// (0x00026224) form_midp_wait_pane

0x51b2,	// (0x000261ca) form_midp_image_pane_g1

0x51bb,	// (0x000261d3) form_midp_image_pane_t1

0x51ca,	// (0x000261e2) form_midp_image_pane_t2

0x51d9,	// (0x000261f1) form_midp_image_pane_t3

0x0002,

0xf7e4,	// (0x000307fc) form_midp_image_pane_t

0x51a9,	// (0x000261c1) list_single_midp_pane_g1

0x03da,	// (0x000213f2) list_single_midp_pane_t1

0xda63,	// (0x0002ea7b) list_midp_form_item_pane_ParamLimits

0xda63,	// (0x0002ea7b) list_midp_form_item_pane

0x4884,	// (0x0002589c) list_midp_form_item_pane_t1

0x4893,	// (0x000258ab) midp_ticker_pane_g1

0x489f,	// (0x000258b7) midp_ticker_pane_g2

0x0001,

0xf731,	// (0x00030749) midp_ticker_pane_g

0x48ab,	// (0x000258c3) midp_ticker_pane_t1

0x6586,	// (0x0002759e) midp_editing_number_pane_t1

0x6564,	// (0x0002757c) midp_editing_number_pane

0x6573,	// (0x0002758b) midp_ticker_pane

0x5464,	// (0x0002647c) ai_message_heading_pane

0xeb74,	// (0x0002fb8c) bg_popup_window_pane_cp14

0x546c,	// (0x00026484) listscroll_ai_message_pane

0x62bf,	// (0x000272d7) ai_message_heading_pane_g1_ParamLimits

0x62bf,	// (0x000272d7) ai_message_heading_pane_g1

0x62cb,	// (0x000272e3) ai_message_heading_pane_g2_ParamLimits

0x62cb,	// (0x000272e3) ai_message_heading_pane_g2

0x62d7,	// (0x000272ef) ai_message_heading_pane_g3_ParamLimits

0x62d7,	// (0x000272ef) ai_message_heading_pane_g3

0x62e3,	// (0x000272fb) ai_message_heading_pane_g4_ParamLimits

0x62e3,	// (0x000272fb) ai_message_heading_pane_g4

0x0003,

0xf925,	// (0x0003093d) ai_message_heading_pane_g_ParamLimits

0xf925,	// (0x0003093d) ai_message_heading_pane_g

0x62ef,	// (0x00027307) ai_message_heading_pane_t1_ParamLimits

0x62ef,	// (0x00027307) ai_message_heading_pane_t1

0x6309,	// (0x00027321) ai_message_heading_pane_t2_ParamLimits

0x6309,	// (0x00027321) ai_message_heading_pane_t2

0x0001,

0xf92e,	// (0x00030946) ai_message_heading_pane_t_ParamLimits

0xf92e,	// (0x00030946) ai_message_heading_pane_t

0x631b,	// (0x00027333) bg_popup_heading_pane_cp1_ParamLimits

0x631b,	// (0x00027333) bg_popup_heading_pane_cp1

0x62ad,	// (0x000272c5) list_ai_message_pane_ParamLimits

0x62ad,	// (0x000272c5) list_ai_message_pane

0x3c70,	// (0x00024c88) scroll_pane_cp10

0x6249,	// (0x00027261) list_ai_message_pane_g1

0x6251,	// (0x00027269) list_ai_message_pane_g2

0x0001,

0xf902,	// (0x0003091a) list_ai_message_pane_g

0x6259,	// (0x00027271) list_ai_message_pane_t1_ParamLimits

0x6259,	// (0x00027271) list_ai_message_pane_t1

0x626e,	// (0x00027286) list_ai_message_pane_t2_ParamLimits

0x626e,	// (0x00027286) list_ai_message_pane_t2

0x6283,	// (0x0002729b) list_ai_message_pane_t3_ParamLimits

0x6283,	// (0x0002729b) list_ai_message_pane_t3

0x6298,	// (0x000272b0) list_ai_message_pane_t4_ParamLimits

0x6298,	// (0x000272b0) list_ai_message_pane_t4

0x0003,

0xf907,	// (0x0003091f) list_ai_message_pane_t_ParamLimits

0xf907,	// (0x0003091f) list_ai_message_pane_t

0xdbe8,	// (0x0002ec00) cell_ai_soft_ind_pane_ParamLimits

0xdbe8,	// (0x0002ec00) cell_ai_soft_ind_pane

0x48bd,	// (0x000258d5) cell_ai_soft_ind_pane_g1_ParamLimits

0x48bd,	// (0x000258d5) cell_ai_soft_ind_pane_g1

0xeb74,	// (0x0002fb8c) grid_highlight_cp1

0x48ca,	// (0x000258e2) text_secondary_cp56_ParamLimits

0x48ca,	// (0x000258e2) text_secondary_cp56

0x6209,	// (0x00027221) example_general_pane_ParamLimits

0x6209,	// (0x00027221) example_general_pane

0x6215,	// (0x0002722d) example_parent_pane_g1_ParamLimits

0x6215,	// (0x0002722d) example_parent_pane_g1

0x6221,	// (0x00027239) example_parent_pane_t1_ParamLimits

0x6221,	// (0x00027239) example_parent_pane_t1

0xcb33,	// (0x0002db4b) popup_preview_text_window_ParamLimits

0xcb33,	// (0x0002db4b) popup_preview_text_window

0x46e7,	// (0x000256ff) list_single_pane_cp2_g4

0x35ba,	// (0x000245d2) bg_popup_preview_window_pane_ParamLimits

0x35ba,	// (0x000245d2) bg_popup_preview_window_pane

0x5f56,	// (0x00026f6e) popup_preview_text_window_t1_ParamLimits

0x5f56,	// (0x00026f6e) popup_preview_text_window_t1

0x5f74,	// (0x00026f8c) popup_preview_text_window_t2_ParamLimits

0x5f74,	// (0x00026f8c) popup_preview_text_window_t2

0x5fbd,	// (0x00026fd5) popup_preview_text_window_t3_ParamLimits

0x5fbd,	// (0x00026fd5) popup_preview_text_window_t3

0x6002,	// (0x0002701a) popup_preview_text_window_t4_ParamLimits

0x6002,	// (0x0002701a) popup_preview_text_window_t4

0x0004,

0xf8d6,	// (0x000308ee) popup_preview_text_window_t_ParamLimits

0xf8d6,	// (0x000308ee) popup_preview_text_window_t

0x6080,	// (0x00027098) scroll_pane_cp11

0x5004,	// (0x0002601c) bg_popup_preview_window_pane_g1

0x5f16,	// (0x00026f2e) bg_popup_preview_window_pane_g2

0x5f1e,	// (0x00026f36) bg_popup_preview_window_pane_g3

0x5f26,	// (0x00026f3e) bg_popup_preview_window_pane_g4

0x5f2e,	// (0x00026f46) bg_popup_preview_window_pane_g5

0x5f36,	// (0x00026f4e) bg_popup_preview_window_pane_g6

0x5f3e,	// (0x00026f56) bg_popup_preview_window_pane_g7

0x5f46,	// (0x00026f5e) bg_popup_preview_window_pane_g8

0x0c5d,	// (0x00021c75) aid_popup_width_pane

0xcaaf,	// (0x0002dac7) popup_midp_note_alarm_window_ParamLimits

0xcaaf,	// (0x0002dac7) popup_midp_note_alarm_window

0x3ae4,	// (0x00024afc) data_form_pane_ParamLimits

0xb999,	// (0x0002c9b1) form_field_data_pane_g1

0xb9a3,	// (0x0002c9bb) form_field_data_pane_t1_ParamLimits

0x3af0,	// (0x00024b08) input_focus_pane_ParamLimits

0x0055,	// (0x0002106d) data_form_wide_pane_ParamLimits

0x0066,	// (0x0002107e) form_field_data_wide_pane_g1

0x0072,	// (0x0002108a) form_field_data_wide_pane_t1_ParamLimits

0x3861,	// (0x00024879) input_focus_pane_cp6_ParamLimits

0xc394,	// (0x0002d3ac) input_popup_find_pane_g1_ParamLimits

0xc394,	// (0x0002d3ac) input_popup_find_pane_g1

0x11d5,	// (0x000221ed) aid_navi_side_left_pane

0x11ea,	// (0x00022202) aid_navi_side_right_pane

0x592f,	// (0x00026947) bg_popup_window_pane_cp30_ParamLimits

0x592f,	// (0x00026947) bg_popup_window_pane_cp30

0x59a9,	// (0x000269c1) popup_midp_note_alarm_window_g1_ParamLimits

0x59a9,	// (0x000269c1) popup_midp_note_alarm_window_g1

0x59d9,	// (0x000269f1) popup_midp_note_alarm_window_t1_ParamLimits

0x59d9,	// (0x000269f1) popup_midp_note_alarm_window_t1

0x5a7a,	// (0x00026a92) popup_midp_note_alarm_window_t2_ParamLimits

0x5a7a,	// (0x00026a92) popup_midp_note_alarm_window_t2

0x5b28,	// (0x00026b40) popup_midp_note_alarm_window_t3_ParamLimits

0x5b28,	// (0x00026b40) popup_midp_note_alarm_window_t3

0x5b5a,	// (0x00026b72) popup_midp_note_alarm_window_t4_ParamLimits

0x5b5a,	// (0x00026b72) popup_midp_note_alarm_window_t4

0x5b80,	// (0x00026b98) popup_midp_note_alarm_window_t5_ParamLimits

0x5b80,	// (0x00026b98) popup_midp_note_alarm_window_t5

0x000a,

0xf873,	// (0x0003088b) popup_midp_note_alarm_window_t_ParamLimits

0xf873,	// (0x0003088b) popup_midp_note_alarm_window_t

0x5c2c,	// (0x00026c44) wait_bar_pane_cp1_ParamLimits

0x5c2c,	// (0x00026c44) wait_bar_pane_cp1

0xeb74,	// (0x0002fb8c) wait_anim_pane_copy1

0xeb74,	// (0x0002fb8c) wait_border_pane_copy1

0x5615,	// (0x0002662d) wait_border_pane_g1_copy1

0x008c,	// (0x000210a4) form_field_popup_pane_g1

0xb9bd,	// (0x0002c9d5) form_field_popup_pane_t1_ParamLimits

0x3af0,	// (0x00024b08) input_focus_pane_cp7_ParamLimits

0x3b1e,	// (0x00024b36) list_form_pane_ParamLimits

0x00ac,	// (0x000210c4) form_field_popup_wide_pane_g1

0x00b4,	// (0x000210cc) form_field_popup_wide_pane_t1_ParamLimits

0x3af0,	// (0x00024b08) input_focus_pane_cp8_ParamLimits

0x3b2a,	// (0x00024b42) list_form_wide_pane_ParamLimits

0x6726,	// (0x0002773e) aid_size_cell_graphic_pane

0xba3c,	// (0x0002ca54) data_form_pane_t1_ParamLimits

0xbb90,	// (0x0002cba8) data_form_wide_pane_t1_ParamLimits

0xd6ea,	// (0x0002e702) bg_status_flat_pane

0xc002,	// (0x0002d01a) title_pane_t1_ParamLimits

0x322b,	// (0x00024243) title_pane_t2_ParamLimits

0x3251,	// (0x00024269) title_pane_t3_ParamLimits

0xf530,	// (0x00030548) title_pane_t_ParamLimits

0x40f1,	// (0x00025109) level_1_signal_ParamLimits

0x4103,	// (0x0002511b) level_2_signal_ParamLimits

0x4116,	// (0x0002512e) level_3_signal_ParamLimits

0x4129,	// (0x00025141) level_4_signal_ParamLimits

0x413c,	// (0x00025154) level_5_signal_ParamLimits

0x414f,	// (0x00025167) level_6_signal_ParamLimits

0x4162,	// (0x0002517a) level_7_signal_ParamLimits

0x40f1,	// (0x00025109) level_1_battery_ParamLimits

0x4103,	// (0x0002511b) level_2_battery_ParamLimits

0x4116,	// (0x0002512e) level_3_battery_ParamLimits

0x4129,	// (0x00025141) level_4_battery_ParamLimits

0x413c,	// (0x00025154) level_5_battery_ParamLimits

0x414f,	// (0x00025167) level_6_battery_ParamLimits

0x4162,	// (0x0002517a) level_7_battery_ParamLimits

0x5834,	// (0x0002684c) bg_status_flat_pane_g1

0x583c,	// (0x00026854) bg_status_flat_pane_g2

0x5844,	// (0x0002685c) bg_status_flat_pane_g3

0x584c,	// (0x00026864) bg_status_flat_pane_g4

0x5854,	// (0x0002686c) bg_status_flat_pane_g5

0x585c,	// (0x00026874) bg_status_flat_pane_g6

0x5864,	// (0x0002687c) bg_status_flat_pane_g7

0xc08e,	// (0x0002d0a6) tabs_3_active_pane_t1_ParamLimits

0xc08e,	// (0x0002d0a6) tabs_3_passive_pane_t1_ParamLimits

0xc0a0,	// (0x0002d0b8) tabs_4_active_pane_t1_ParamLimits

0xc0a0,	// (0x0002d0b8) tabs_4_1_passive_pane_t1_ParamLimits

0xc3a2,	// (0x0002d3ba) tabs_2_active_pane_t1_ParamLimits

0xc3a2,	// (0x0002d3ba) tabs_2_passive_pane_t1_ParamLimits

0x3263,	// (0x0002427b) bg_active_tab_pane_cp4_ParamLimits

0xc3b4,	// (0x0002d3cc) tabs_2_long_active_pane_t1_ParamLimits

0x4ada,	// (0x00025af2) bg_passive_tab_pane_cp4_ParamLimits

0x1cfc,	// (0x00022d14) list_single_midp_graphic_pane_t1_ParamLimits

0x3263,	// (0x0002427b) bg_active_tab_pane_cp5_ParamLimits

0xc3c7,	// (0x0002d3df) tabs_3_long_active_pane_t1_ParamLimits

0x4ada,	// (0x00025af2) bg_passive_tab_pane_cp5_ParamLimits

0x1cfc,	// (0x00022d14) list_single_midp_graphic_pane_t1

0xd6ea,	// (0x0002e702) bg_status_flat_pane_ParamLimits

0x4c94,	// (0x00025cac) indicator_pane_cp2_ParamLimits

0x4c94,	// (0x00025cac) indicator_pane_cp2

0xd868,	// (0x0002e880) navi_pane_srt_ParamLimits

0xd868,	// (0x0002e880) navi_pane_srt

0x4de3,	// (0x00025dfb) popup_clock_digital_analogue_window_cp1

0x3340,	// (0x00024358) indicator_pane_t1

0x47b6,	// (0x000257ce) copy_highlight_pane

0x47b6,	// (0x000257ce) cursor_graphics_pane

0x47b6,	// (0x000257ce) graphic_within_text_pane

0x47b6,	// (0x000257ce) link_highlight_pane

0x6043,	// (0x0002705b) popup_preview_text_window_t5_ParamLimits

0x6043,	// (0x0002705b) popup_preview_text_window_t5

0x48e4,	// (0x000258fc) cursor_digital_pane

0x48e4,	// (0x000258fc) cursor_primary_pane

0x48f5,	// (0x0002590d) cursor_primary_small_pane

0x48fd,	// (0x00025915) cursor_secondary_pane

0x4905,	// (0x0002591d) cursor_title_pane

0x48e4,	// (0x000258fc) link_highlight_digital_pane

0x48ec,	// (0x00025904) link_highlight_primary_pane

0x48f5,	// (0x0002590d) link_highlight_primary_small_pane

0x48fd,	// (0x00025915) link_highlight_secondary_pane

0x4905,	// (0x0002591d) link_highlight_title_pane

0x48e4,	// (0x000258fc) copy_highlight_digital_pane

0x48e4,	// (0x000258fc) copy_highlight_primary_pane

0x48f5,	// (0x0002590d) copy_highlight_primary_small_pane

0x48fd,	// (0x00025915) copy_highlight_secondary_pane

0x4905,	// (0x0002591d) copy_highlight_title_pane

0x48fd,	// (0x00025915) graphic_text_digital_pane

0x58d2,	// (0x000268ea) graphic_text_primary_pane

0x58db,	// (0x000268f3) graphic_text_primary_small_pane

0x48f5,	// (0x0002590d) graphic_text_secondary_pane

0x48e4,	// (0x000258fc) graphic_text_title_pane

0xd59d,	// (0x0002e5b5) cursor_primary_pane_g1

0x58c4,	// (0x000268dc) cursor_text_primary_t1

0xdae4,	// (0x0002eafc) cursor_primary_small_pane_g1

0x58b6,	// (0x000268ce) cursor_text_primary_small_t1

0xdada,	// (0x0002eaf2) cursor_primary_small_pane_g1_copy1

0x589e,	// (0x000268b6) cursor_text_primary_small_t1_copy1

0x587c,	// (0x00026894) cursor_text_title_t1

0xdad0,	// (0x0002eae8) cursor_title_pane_g1

0xd59d,	// (0x0002e5b5) cursor_digital_pane_g1

0x4917,	// (0x0002592f) cursor_text_digital_t1

0x493c,	// (0x00025954) link_highlight_primary_pane_g1

0x5825,	// (0x0002683d) link_highlight_primary_pane_t1

0x4925,	// (0x0002593d) link_highlight_primary_small_pane_g1

0x492d,	// (0x00025945) link_highlight_primary_small_pane_t1

0x493c,	// (0x00025954) link_highlight_secondary_pane_g1

0x4944,	// (0x0002595c) link_highlight_secondary_pane_t1

0x5799,	// (0x000267b1) link_highlight_title_pane_g1

0x57a1,	// (0x000267b9) link_highlight_title_pane_t1

0x5782,	// (0x0002679a) link_highlight_digital_pane_g1

0x578a,	// (0x000267a2) link_highlight_digital_pane_t1

0x565a,	// (0x00026672) copy_highlight_primary_pane_g1

0x5662,	// (0x0002667a) copy_highlight_primary_pane_t1

0x5634,	// (0x0002664c) copy_highlight_primary_small_pane_g1

0x564b,	// (0x00026663) copy_highlight_primary_small_pane_t1

0x4953,	// (0x0002596b) copy_highlight_secondary_pane_g1

0x495b,	// (0x00025973) copy_highlight_secondary_pane_t1

0x5634,	// (0x0002664c) copy_highlight_title_pane_g1

0x563c,	// (0x00026654) copy_highlight_title_pane_t1

0x565a,	// (0x00026672) copy_highlight_digital_pane_g1

0x6900,	// (0x00027918) copy_highlight_digital_pane_t1

0x6854,	// (0x0002786c) graphic_text_primary_pane_g1

0x68e4,	// (0x000278fc) graphic_text_primary_pane_t1

0x68f2,	// (0x0002790a) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x000309ba) graphic_text_primary_pane_t

0x68c0,	// (0x000278d8) graphic_text_primary_small_pane_g1

0x68c8,	// (0x000278e0) graphic_text_primary_small_pane_t1

0x68d6,	// (0x000278ee) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x000309b5) graphic_text_primary_small_pane_t

0x689c,	// (0x000278b4) graphic_text_secondary_pane_g1

0x68a4,	// (0x000278bc) graphic_text_secondary_pane_t1

0x68b2,	// (0x000278ca) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x000309b0) graphic_text_secondary_pane_t

0x6878,	// (0x00027890) graphic_text_title_pane_g1

0x6880,	// (0x00027898) graphic_text_title_pane_t1

0x688e,	// (0x000278a6) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x000309ab) graphic_text_title_pane_t

0x6854,	// (0x0002786c) graphic_text_digital_pane_g1

0x685c,	// (0x00027874) graphic_text_digital_pane_t1

0x686a,	// (0x00027882) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x000309a6) graphic_text_digital_pane_t

0x3263,	// (0x0002427b) navi_icon_pane_srt_ParamLimits

0x3263,	// (0x0002427b) navi_icon_pane_srt

0xeb74,	// (0x0002fb8c) navi_midp_pane_srt

0xeb74,	// (0x0002fb8c) navi_navi_pane_srt

0x3263,	// (0x0002427b) navi_text_pane_srt_ParamLimits

0x3263,	// (0x0002427b) navi_text_pane_srt

0x681f,	// (0x00027837) navi_navi_icon_text_pane_srt

0x6827,	// (0x0002783f) navi_navi_pane_srt_g1_ParamLimits

0x6827,	// (0x0002783f) navi_navi_pane_srt_g1

0x6839,	// (0x00027851) navi_navi_pane_srt_g2_ParamLimits

0x6839,	// (0x00027851) navi_navi_pane_srt_g2

0x0001,

0xf989,	// (0x000309a1) navi_navi_pane_srt_g_ParamLimits

0xf989,	// (0x000309a1) navi_navi_pane_srt_g

0x684b,	// (0x00027863) navi_navi_tabs_pane_srt

0x681f,	// (0x00027837) navi_navi_text_pane_srt

0x681f,	// (0x00027837) navi_navi_volume_pane_srt

0x6810,	// (0x00027828) navi_navi_text_pane_srt_t1

0x2076,	// (0x0002308e) navi_navi_volume_pane_srt_g1

0x207e,	// (0x00023096) volume_small_pane_srt_ParamLimits

0x207e,	// (0x00023096) volume_small_pane_srt

0x14b5,	// (0x000224cd) volume_small_pane_srt_g1_ParamLimits

0x14b5,	// (0x000224cd) volume_small_pane_srt_g1

0x14c5,	// (0x000224dd) volume_small_pane_srt_g2_ParamLimits

0x14c5,	// (0x000224dd) volume_small_pane_srt_g2

0x14d6,	// (0x000224ee) volume_small_pane_srt_g3_ParamLimits

0x14d6,	// (0x000224ee) volume_small_pane_srt_g3

0x14e7,	// (0x000224ff) volume_small_pane_srt_g4_ParamLimits

0x14e7,	// (0x000224ff) volume_small_pane_srt_g4

0x14f8,	// (0x00022510) volume_small_pane_srt_g5_ParamLimits

0x14f8,	// (0x00022510) volume_small_pane_srt_g5

0x1509,	// (0x00022521) volume_small_pane_srt_g6_ParamLimits

0x1509,	// (0x00022521) volume_small_pane_srt_g6

0x151a,	// (0x00022532) volume_small_pane_srt_g7_ParamLimits

0x151a,	// (0x00022532) volume_small_pane_srt_g7

0x152b,	// (0x00022543) volume_small_pane_srt_g8_ParamLimits

0x152b,	// (0x00022543) volume_small_pane_srt_g8

0x153c,	// (0x00022554) volume_small_pane_srt_g9_ParamLimits

0x153c,	// (0x00022554) volume_small_pane_srt_g9

0x154d,	// (0x00022565) volume_small_pane_srt_g10_ParamLimits

0x154d,	// (0x00022565) volume_small_pane_srt_g10

0x0009,

0xf736,	// (0x0003074e) volume_small_pane_srt_g_ParamLimits

0xf736,	// (0x0003074e) volume_small_pane_srt_g

0x3663,	// (0x0002467b) query_popup_data_pane_cp2

0x67f6,	// (0x0002780e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x67f6,	// (0x0002780e) navi_navi_icon_text_pane_srt_t1

0x58d2,	// (0x000268ea) navi_tabs_2_long_pane_srt

0x58d2,	// (0x000268ea) navi_tabs_2_pane_srt

0x58d2,	// (0x000268ea) navi_tabs_3_long_pane_srt

0x58d2,	// (0x000268ea) navi_tabs_3_pane_srt

0x58d2,	// (0x000268ea) navi_tabs_4_pane_srt

0x2056,	// (0x0002306e) tabs_2_active_pane_srt_ParamLimits

0x2056,	// (0x0002306e) tabs_2_active_pane_srt

0x2066,	// (0x0002307e) tabs_2_passive_pane_srt_ParamLimits

0x2066,	// (0x0002307e) tabs_2_passive_pane_srt

0x5078,	// (0x00026090) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5078,	// (0x00026090) bg_passive_tab_pane_cp1_srt

0x67c2,	// (0x000277da) bg_passive_tab_pane_g1_cp1_srt

0x43f3,	// (0x0002540b) bg_passive_tab_pane_g2_cp1_srt

0x67cb,	// (0x000277e3) bg_passive_tab_pane_g3_cp1_srt

0x34de,	// (0x000244f6) bg_active_tab_pane_cp1_srt_ParamLimits

0x34de,	// (0x000244f6) bg_active_tab_pane_cp1_srt

0x67d4,	// (0x000277ec) tabs_2_active_pane_srt_g1

0xde8b,	// (0x0002eea3) tabs_2_active_pane_srt_t1_ParamLimits

0xde8b,	// (0x0002eea3) tabs_2_active_pane_srt_t1

0x67c2,	// (0x000277da) bg_active_tab_pane_g1_cp1_srt

0x43f3,	// (0x0002540b) bg_active_tab_pane_g2_cp1_srt

0x67cb,	// (0x000277e3) bg_active_tab_pane_g3_cp1_srt

0x2023,	// (0x0002303b) tabs_3_active_pane_srt_ParamLimits

0x2023,	// (0x0002303b) tabs_3_active_pane_srt

0x2034,	// (0x0002304c) tabs_3_passive_pane_cp_srt_ParamLimits

0x2034,	// (0x0002304c) tabs_3_passive_pane_cp_srt

0x2045,	// (0x0002305d) tabs_3_passive_pane_srt_ParamLimits

0x2045,	// (0x0002305d) tabs_3_passive_pane_srt

0x5078,	// (0x00026090) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5078,	// (0x00026090) bg_passive_tab_pane_cp2_srt

0x496a,	// (0x00025982) bg_passive_tab_pane_g1_cp2_srt

0x43f3,	// (0x0002540b) bg_passive_tab_pane_g2_cp2_srt

0x4973,	// (0x0002598b) bg_passive_tab_pane_g3_cp2_srt

0x34de,	// (0x000244f6) bg_active_tab_pane_cp2_srt_ParamLimits

0x34de,	// (0x000244f6) bg_active_tab_pane_cp2_srt

0x67a8,	// (0x000277c0) tabs_3_active_pane_srt_g1

0xde75,	// (0x0002ee8d) tabs_3_active_pane_srt_t1_ParamLimits

0xde75,	// (0x0002ee8d) tabs_3_active_pane_srt_t1

0x496a,	// (0x00025982) bg_active_tab_pane_g1_cp2_srt

0x43f3,	// (0x0002540b) bg_active_tab_pane_g2_cp2_srt

0x4973,	// (0x0002598b) bg_active_tab_pane_g3_cp2_srt

0x1fdb,	// (0x00022ff3) tabs_4_active_pane_srt_ParamLimits

0x1fdb,	// (0x00022ff3) tabs_4_active_pane_srt

0x1fed,	// (0x00023005) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1fed,	// (0x00023005) tabs_4_passive_pane_cp2_srt

0x16c0,	// (0x000226d8) aid_size_cell_toolbar

0x63dd,	// (0x000273f5) main_idle_act_pane_ParamLimits

0x1863,	// (0x0002287b) popup_large_graphic_colour_window_ParamLimits

0xcdbf,	// (0x0002ddd7) popup_toolbar_window_ParamLimits

0xcdbf,	// (0x0002ddd7) popup_toolbar_window

0x04a3,	// (0x000214bb) list_single_graphic_2heading_pane_ParamLimits

0x04a3,	// (0x000214bb) list_single_graphic_2heading_pane

0x3ea0,	// (0x00024eb8) aid_size_cell_apps_grid_lsc_pane

0x3eb2,	// (0x00024eca) aid_size_cell_apps_grid_prt_pane

0x4ada,	// (0x00025af2) bg_wml_button_pane_cp1_ParamLimits

0x4ada,	// (0x00025af2) bg_wml_button_pane_cp1

0xda93,	// (0x0002eaab) form_midp_field_text_pane_t1_ParamLimits

0x5078,	// (0x00026090) input_focus_pane_cp050_ParamLimits

0x52df,	// (0x000262f7) list_midp_form_text_pane_ParamLimits

0x5285,	// (0x0002629d) input_focus_pane_cp051_ParamLimits

0x5299,	// (0x000262b1) list_midp_choice_pane_ParamLimits

0xda31,	// (0x0002ea49) list_single_2graphic_pane_cp3_ParamLimits

0xda31,	// (0x0002ea49) list_single_2graphic_pane_cp3

0xda44,	// (0x0002ea5c) list_single_midp_graphic_pane_ParamLimits

0xda44,	// (0x0002ea5c) list_single_midp_graphic_pane

0x02a0,	// (0x000212b8) list_single_graphic_2heading_pane_g1_ParamLimits

0x02a0,	// (0x000212b8) list_single_graphic_2heading_pane_g1

0x02ac,	// (0x000212c4) list_single_graphic_2heading_pane_g4_ParamLimits

0x02ac,	// (0x000212c4) list_single_graphic_2heading_pane_g4

0x02b8,	// (0x000212d0) list_single_graphic_2heading_pane_g5_ParamLimits

0x02b8,	// (0x000212d0) list_single_graphic_2heading_pane_g5

0x0002,

0xf789,	// (0x000307a1) list_single_graphic_2heading_pane_g_ParamLimits

0xf789,	// (0x000307a1) list_single_graphic_2heading_pane_g

0x02c4,	// (0x000212dc) list_single_graphic_2heading_pane_t1_ParamLimits

0x02c4,	// (0x000212dc) list_single_graphic_2heading_pane_t1

0x02d8,	// (0x000212f0) list_single_graphic_2heading_pane_t2_ParamLimits

0x02d8,	// (0x000212f0) list_single_graphic_2heading_pane_t2

0x02f2,	// (0x0002130a) list_single_graphic_2heading_pane_t3_ParamLimits

0x02f2,	// (0x0002130a) list_single_graphic_2heading_pane_t3

0x0002,

0xf790,	// (0x000307a8) list_single_graphic_2heading_pane_t_ParamLimits

0xf790,	// (0x000307a8) list_single_graphic_2heading_pane_t

0x4f42,	// (0x00025f5a) bg_popup_sub_pane_cp2

0x4f6c,	// (0x00025f84) grid_toobar_pane

0x1c77,	// (0x00022c8f) cell_toolbar_pane_ParamLimits

0x1c77,	// (0x00022c8f) cell_toolbar_pane

0x4fa8,	// (0x00025fc0) cell_toolbar_pane_g1_ParamLimits

0x4fa8,	// (0x00025fc0) cell_toolbar_pane_g1

0x4fbc,	// (0x00025fd4) cell_toolbar_pane_g2_ParamLimits

0x4fbc,	// (0x00025fd4) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x000307b6) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x000307b6) cell_toolbar_pane_g

0x4fde,	// (0x00025ff6) grid_highlight_pane_cp2_ParamLimits

0x4fde,	// (0x00025ff6) grid_highlight_pane_cp2

0x4ff8,	// (0x00026010) toolbar_button_pane

0x5004,	// (0x0002601c) toolbar_button_pane_g1

0x500c,	// (0x00026024) toolbar_button_pane_g2

0x5014,	// (0x0002602c) toolbar_button_pane_g3

0x501c,	// (0x00026034) toolbar_button_pane_g4

0x5024,	// (0x0002603c) toolbar_button_pane_g5

0x502c,	// (0x00026044) toolbar_button_pane_g6

0x5034,	// (0x0002604c) toolbar_button_pane_g7

0x503c,	// (0x00026054) toolbar_button_pane_g8

0x5044,	// (0x0002605c) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x000307bb) toolbar_button_pane_g

0x1caf,	// (0x00022cc7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1caf,	// (0x00022cc7) list_single_2graphic_pane_g1_cp3

0xce17,	// (0x0002de2f) list_single_2graphic_pane_g2_cp3_ParamLimits

0xce17,	// (0x0002de2f) list_single_2graphic_pane_g2_cp3

0x1ccc,	// (0x00022ce4) list_single_2graphic_pane_g3_cp3

0x1cd4,	// (0x00022cec) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1cd4,	// (0x00022cec) list_single_2graphic_pane_g4_cp3

0x1ce0,	// (0x00022cf8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1ce0,	// (0x00022cf8) list_single_2graphic_pane_t1_cp3

0x677c,	// (0x00027794) list_single_midp_graphic_pane_g2_ParamLimits

0x677c,	// (0x00027794) list_single_midp_graphic_pane_g2

0x16c8,	// (0x000226e0) aid_zoom_text_primary

0x0274,	// (0x0002128c) aid_zoom_text_secondary

0x4a24,	// (0x00025a3c) status_small_pane_g7_ParamLimits

0x4a24,	// (0x00025a3c) status_small_pane_g7

0x4a47,	// (0x00025a5f) status_small_pane_t1_ParamLimits

0xbfde,	// (0x0002cff6) title_pane_g2

0x0003,

0xf527,	// (0x0003053f) title_pane_g

0xc256,	// (0x0002d26e) aid_size_cell_colour_1_pane_ParamLimits

0xc256,	// (0x0002d26e) aid_size_cell_colour_1_pane

0xc26a,	// (0x0002d282) aid_size_cell_colour_2_pane_ParamLimits

0xc26a,	// (0x0002d282) aid_size_cell_colour_2_pane

0xc27e,	// (0x0002d296) aid_size_cell_colour_3_pane_ParamLimits

0xc27e,	// (0x0002d296) aid_size_cell_colour_3_pane

0xc292,	// (0x0002d2aa) aid_size_cell_colour_4_pane_ParamLimits

0xc292,	// (0x0002d2aa) aid_size_cell_colour_4_pane

0x1112,	// (0x0002212a) title_pane_stacon_g1_ParamLimits

0x1112,	// (0x0002212a) title_pane_stacon_g1

0x56b9,	// (0x000266d1) popup_note_wait_window_g3_ParamLimits

0x56b9,	// (0x000266d1) popup_note_wait_window_g3

0x572f,	// (0x00026747) popup_note_wait_window_t5_ParamLimits

0x572f,	// (0x00026747) popup_note_wait_window_t5

0xeb74,	// (0x0002fb8c) main_feb_china_hwr_fs_writing_pane

0xc7c1,	// (0x0002d7d9) popup_feb_china_hwr_fs_window_ParamLimits

0xc7c1,	// (0x0002d7d9) popup_feb_china_hwr_fs_window

0xce28,	// (0x0002de40) aid_size_cell_hwr_fs_ParamLimits

0xce28,	// (0x0002de40) aid_size_cell_hwr_fs

0x5078,	// (0x00026090) bg_popup_sub_pane_cp3_ParamLimits

0x5078,	// (0x00026090) bg_popup_sub_pane_cp3

0xce3d,	// (0x0002de55) grid_hwr_fs_pane_ParamLimits

0xce3d,	// (0x0002de55) grid_hwr_fs_pane

0x1d3f,	// (0x00022d57) linegrid_hwr_fs_pane_ParamLimits

0x1d3f,	// (0x00022d57) linegrid_hwr_fs_pane

0xce55,	// (0x0002de6d) cell_hwr_fs_pane_ParamLimits

0xce55,	// (0x0002de6d) cell_hwr_fs_pane

0x5084,	// (0x0002609c) linegrid_hwr_fs_pane_g1_ParamLimits

0x5084,	// (0x0002609c) linegrid_hwr_fs_pane_g1

0xda05,	// (0x0002ea1d) linegrid_hwr_fs_pane_g2_ParamLimits

0xda05,	// (0x0002ea1d) linegrid_hwr_fs_pane_g2

0x50a2,	// (0x000260ba) linegrid_hwr_fs_pane_g3_ParamLimits

0x50a2,	// (0x000260ba) linegrid_hwr_fs_pane_g3

0x1d71,	// (0x00022d89) linegrid_hwr_fs_pane_g4_ParamLimits

0x1d71,	// (0x00022d89) linegrid_hwr_fs_pane_g4

0x1d8b,	// (0x00022da3) linegrid_hwr_fs_pane_g5_ParamLimits

0x1d8b,	// (0x00022da3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c9,	// (0x000307e1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c9,	// (0x000307e1) linegrid_hwr_fs_pane_g

0x50ae,	// (0x000260c6) cell_hwr_fs_pane_g1_ParamLimits

0x50ae,	// (0x000260c6) cell_hwr_fs_pane_g1

0x4e79,	// (0x00025e91) cell_hwr_fs_pane_g2_ParamLimits

0x4e79,	// (0x00025e91) cell_hwr_fs_pane_g2

0xda17,	// (0x0002ea2f) cell_hwr_fs_pane_g3_ParamLimits

0xda17,	// (0x0002ea2f) cell_hwr_fs_pane_g3

0xda24,	// (0x0002ea3c) cell_hwr_fs_pane_g4_ParamLimits

0xda24,	// (0x0002ea3c) cell_hwr_fs_pane_g4

0x0003,

0xf7d4,	// (0x000307ec) cell_hwr_fs_pane_g_ParamLimits

0xf7d4,	// (0x000307ec) cell_hwr_fs_pane_g

0xce7b,	// (0x0002de93) cell_hwr_fs_pane_t1

0xeb74,	// (0x0002fb8c) grid_highlight_pane_cp6

0xeb74,	// (0x0002fb8c) main_idle_act2_pane

0x3c57,	// (0x00024c6f) aid_inside_area_popup_secondary

0xdaee,	// (0x0002eb06) aid_inside_area_window_primary_ParamLimits

0xdaee,	// (0x0002eb06) aid_inside_area_window_primary

0x690f,	// (0x00027927) ai2_news_ticker_pane

0x6917,	// (0x0002792f) aid_size_cell_ai1_link_ParamLimits

0x6917,	// (0x0002792f) aid_size_cell_ai1_link

0xdea1,	// (0x0002eeb9) popup_ai2_data_window_ParamLimits

0xdea1,	// (0x0002eeb9) popup_ai2_data_window

0x6947,	// (0x0002795f) popup_ai2_link_window_ParamLimits

0x6947,	// (0x0002795f) popup_ai2_link_window

0x5078,	// (0x00026090) bg_popup_sub_pane_cp4_ParamLimits

0x5078,	// (0x00026090) bg_popup_sub_pane_cp4

0x695b,	// (0x00027973) grid_ai2_link_pane_ParamLimits

0x695b,	// (0x00027973) grid_ai2_link_pane

0x6972,	// (0x0002798a) popup_ai2_link_window_g1_ParamLimits

0x6972,	// (0x0002798a) popup_ai2_link_window_g1

0x697e,	// (0x00027996) popup_ai2_link_window_g2_ParamLimits

0x697e,	// (0x00027996) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x000309bf) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x000309bf) popup_ai2_link_window_g

0x698d,	// (0x000279a5) ai2_mp_button_pane

0x6995,	// (0x000279ad) ai2_mp_volume_pane

0x5285,	// (0x0002629d) bg_popup_sub_pane_cp5_ParamLimits

0x5285,	// (0x0002629d) bg_popup_sub_pane_cp5

0x699d,	// (0x000279b5) heading_ai2_gene_pane_ParamLimits

0x699d,	// (0x000279b5) heading_ai2_gene_pane

0x69a9,	// (0x000279c1) list_ai2_gene_pane_ParamLimits

0x69a9,	// (0x000279c1) list_ai2_gene_pane

0x69f1,	// (0x00027a09) cell_ai2_link_pane_ParamLimits

0x69f1,	// (0x00027a09) cell_ai2_link_pane

0x6a07,	// (0x00027a1f) cell_ai2_link_pane_g1

0xeb74,	// (0x0002fb8c) grid_highlight_pane_cp7

0x2093,	// (0x000230ab) ai2_mp_volume_pane_g1

0x6ad7,	// (0x00027aef) ai2_mp_volume_pane_g2

0xdecb,	// (0x0002eee3) list_ai2_gene_pane_t1

0x6adf,	// (0x00027af7) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x000309d8) ai2_mp_volume_pane_g

0x209b,	// (0x000230b3) volume_small_pane_cp3

0x6ae7,	// (0x00027aff) aid_size_cell_ai2_button

0x6aef,	// (0x00027b07) grid_ai2_button_pane

0x6af8,	// (0x00027b10) cell_ai2_button_pane_ParamLimits

0x6af8,	// (0x00027b10) cell_ai2_button_pane

0xeb6a,	// (0x0002fb82) cell_ai2_button_pane_g1

0xeb74,	// (0x0002fb8c) grid_highlight_pane_cp8

0x6a97,	// (0x00027aaf) ai2_gene_pane_t1_ParamLimits

0x6a97,	// (0x00027aaf) ai2_gene_pane_t1

0xc75f,	// (0x0002d777) aid_height_parent_landscape

0xdc36,	// (0x0002ec4e) aid_height_set_list

0x63dd,	// (0x000273f5) aid_size_parent

0x6726,	// (0x0002773e) aid_size_cell_graphic_pane_ParamLimits

0x69b9,	// (0x000279d1) popup_ai2_data_window_g1_ParamLimits

0x69b9,	// (0x000279d1) popup_ai2_data_window_g1

0x69c5,	// (0x000279dd) ai2_news_ticker_pane_g1

0x69cd,	// (0x000279e5) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x000309c4) ai2_news_ticker_pane_g

0x69d5,	// (0x000279ed) ai2_news_ticker_pane_t1

0x69e3,	// (0x000279fb) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x000309c9) ai2_news_ticker_pane_t

0x6a10,	// (0x00027a28) heading_ai2_gene_pane_g1

0x6a18,	// (0x00027a30) heading_ai2_gene_pane_t1_ParamLimits

0x6a18,	// (0x00027a30) heading_ai2_gene_pane_t1

0x6a2d,	// (0x00027a45) list_highlight_pane_cp6

0xdeb5,	// (0x0002eecd) ai2_gene_pane_ParamLimits

0xdeb5,	// (0x0002eecd) ai2_gene_pane

0xded9,	// (0x0002eef1) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x000309ce) list_ai2_gene_pane_t

0x6a68,	// (0x00027a80) list_highlight_pane_cp8_ParamLimits

0x6a68,	// (0x00027a80) list_highlight_pane_cp8

0x6a79,	// (0x00027a91) ai2_gene_pane_g1_ParamLimits

0x6a79,	// (0x00027a91) ai2_gene_pane_g1

0x6a8b,	// (0x00027aa3) ai2_gene_pane_g2_ParamLimits

0x6a8b,	// (0x00027aa3) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x000309d3) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x000309d3) ai2_gene_pane_g

0x3a86,	// (0x00024a9e) scroll_pane_cp12

0xc71c,	// (0x0002d734) control_pane_t3_ParamLimits

0xc71c,	// (0x0002d734) control_pane_t3

0x4a38,	// (0x00025a50) status_small_pane_g8_ParamLimits

0x4a38,	// (0x00025a50) status_small_pane_g8

0xc856,	// (0x0002d86e) popup_find_window_ParamLimits

0xcae9,	// (0x0002db01) popup_note_image_window_ParamLimits

0x02a0,	// (0x000212b8) list_double2_graphic_pane_vc_g1_ParamLimits

0x02a0,	// (0x000212b8) list_double2_graphic_pane_vc_g1

0x030a,	// (0x00021322) list_double2_graphic_pane_vc_g2_ParamLimits

0x030a,	// (0x00021322) list_double2_graphic_pane_vc_g2

0x0316,	// (0x0002132e) list_double2_graphic_pane_vc_g3_ParamLimits

0x0316,	// (0x0002132e) list_double2_graphic_pane_vc_g3

0x0002,

0xf797,	// (0x000307af) list_double2_graphic_pane_vc_g_ParamLimits

0xf797,	// (0x000307af) list_double2_graphic_pane_vc_g

0x0322,	// (0x0002133a) list_double2_graphic_pane_vc_t1_ParamLimits

0x0322,	// (0x0002133a) list_double2_graphic_pane_vc_t1

0x02ac,	// (0x000212c4) list_single_heading_pane_vc_g1_ParamLimits

0x02ac,	// (0x000212c4) list_single_heading_pane_vc_g1

0x02b8,	// (0x000212d0) list_single_heading_pane_vc_g2_ParamLimits

0x02b8,	// (0x000212d0) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x000305b9) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x000305b9) list_single_heading_pane_vc_g

0x0338,	// (0x00021350) list_single_heading_pane_vc_t1_ParamLimits

0x0338,	// (0x00021350) list_single_heading_pane_vc_t1

0x034e,	// (0x00021366) list_single_heading_pane_vc_t2_ParamLimits

0x034e,	// (0x00021366) list_single_heading_pane_vc_t2

0x0001,

0xf7b8,	// (0x000307d0) list_single_heading_pane_vc_t_ParamLimits

0xf7b8,	// (0x000307d0) list_single_heading_pane_vc_t

0x0364,	// (0x0002137c) list_setting_number_pane_vc_g1_ParamLimits

0x0364,	// (0x0002137c) list_setting_number_pane_vc_g1

0x0370,	// (0x00021388) list_setting_number_pane_vc_g2_ParamLimits

0x0370,	// (0x00021388) list_setting_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x000307d5) list_setting_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x000307d5) list_setting_number_pane_vc_g

0x037c,	// (0x00021394) list_setting_number_pane_vc_t1_ParamLimits

0x037c,	// (0x00021394) list_setting_number_pane_vc_t1

0x0390,	// (0x000213a8) list_setting_number_pane_vc_t2_ParamLimits

0x0390,	// (0x000213a8) list_setting_number_pane_vc_t2

0x03ac,	// (0x000213c4) list_setting_number_pane_vc_t3_ParamLimits

0x03ac,	// (0x000213c4) list_setting_number_pane_vc_t3

0x0002,

0xf7c2,	// (0x000307da) list_setting_number_pane_vc_t_ParamLimits

0xf7c2,	// (0x000307da) list_setting_number_pane_vc_t

0x03ca,	// (0x000213e2) set_value_pane_vc_ParamLimits

0x03ca,	// (0x000213e2) set_value_pane_vc

0x04a3,	// (0x000214bb) list_double2_graphic_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_double2_graphic_pane_vc

0x6595,	// (0x000275ad) list_double2_large_graphic_pane_vc_ParamLimits

0x6595,	// (0x000275ad) list_double2_large_graphic_pane_vc

0x04a3,	// (0x000214bb) list_double2_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_double2_pane_vc

0x04a3,	// (0x000214bb) list_double_graphic_heading_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_double_graphic_heading_pane_vc

0x04a3,	// (0x000214bb) list_double_graphic_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_double_graphic_pane_vc

0x04a3,	// (0x000214bb) list_double_heading_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_double_heading_pane_vc

0x65a7,	// (0x000275bf) list_double_large_graphic_pane_vc_ParamLimits

0x65a7,	// (0x000275bf) list_double_large_graphic_pane_vc

0x04a3,	// (0x000214bb) list_double_number_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_double_number_pane_vc

0x04a3,	// (0x000214bb) list_double_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_double_pane_vc

0x04a3,	// (0x000214bb) list_double_time_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_double_time_pane_vc

0x04a3,	// (0x000214bb) list_setting_number_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_setting_number_pane_vc

0x04a3,	// (0x000214bb) list_setting_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_setting_pane_vc

0x04a3,	// (0x000214bb) list_single_graphic_heading_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_single_graphic_heading_pane_vc

0x04a3,	// (0x000214bb) list_single_heading_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_single_heading_pane_vc

0x04a3,	// (0x000214bb) list_single_number_heading_pane_vc_ParamLimits

0x04a3,	// (0x000214bb) list_single_number_heading_pane_vc

0xf4c7,	// (0x000304df) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xf4c7,	// (0x000304df) list_double_graphic_heading_pane_vc_g1

0xf4d3,	// (0x000304eb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf4d3,	// (0x000304eb) list_double_graphic_heading_pane_vc_g2

0xf4df,	// (0x000304f7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xf4df,	// (0x000304f7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c7,	// (0x000309df) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c7,	// (0x000309df) list_double_graphic_heading_pane_vc_g

0x0531,	// (0x00021549) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0531,	// (0x00021549) list_double_graphic_heading_pane_vc_t1

0x054d,	// (0x00021565) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x054d,	// (0x00021565) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x000309e6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x000309e6) list_double_graphic_heading_pane_vc_t

0x0364,	// (0x0002137c) list_setting_pane_vc_g1_ParamLimits

0x0364,	// (0x0002137c) list_setting_pane_vc_g1

0x0370,	// (0x00021388) list_setting_pane_vc_g2_ParamLimits

0x0370,	// (0x00021388) list_setting_pane_vc_g2

0x0001,

0xf7bd,	// (0x000307d5) list_setting_pane_vc_g_ParamLimits

0xf7bd,	// (0x000307d5) list_setting_pane_vc_g

0x056b,	// (0x00021583) list_setting_pane_vc_t1_ParamLimits

0x056b,	// (0x00021583) list_setting_pane_vc_t1

0x0587,	// (0x0002159f) list_setting_pane_vc_t2_ParamLimits

0x0587,	// (0x0002159f) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x00030a14) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x00030a14) list_setting_pane_vc_t

0x03ca,	// (0x000213e2) set_value_pane_cp_vc_ParamLimits

0x03ca,	// (0x000213e2) set_value_pane_cp_vc

0x02ac,	// (0x000212c4) list_single_number_heading_pane_vc_g1_ParamLimits

0x02ac,	// (0x000212c4) list_single_number_heading_pane_vc_g1

0x02b8,	// (0x000212d0) list_single_number_heading_pane_vc_g2_ParamLimits

0x02b8,	// (0x000212d0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x000305b9) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x000305b9) list_single_number_heading_pane_vc_g

0x05a3,	// (0x000215bb) list_single_number_heading_pane_vc_t1_ParamLimits

0x05a3,	// (0x000215bb) list_single_number_heading_pane_vc_t1

0x05b9,	// (0x000215d1) list_single_number_heading_pane_vc_t2_ParamLimits

0x05b9,	// (0x000215d1) list_single_number_heading_pane_vc_t2

0xf4eb,	// (0x00030503) list_single_number_heading_pane_vc_t3_ParamLimits

0xf4eb,	// (0x00030503) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x00030a19) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x00030a19) list_single_number_heading_pane_vc_t

0x02a0,	// (0x000212b8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x02a0,	// (0x000212b8) list_single_graphic_heading_pane_vc_g1

0x02ac,	// (0x000212c4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x02ac,	// (0x000212c4) list_single_graphic_heading_pane_vc_g4

0x02b8,	// (0x000212d0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x02b8,	// (0x000212d0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf789,	// (0x000307a1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf789,	// (0x000307a1) list_single_graphic_heading_pane_vc_g

0x05a3,	// (0x000215bb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x05a3,	// (0x000215bb) list_single_graphic_heading_pane_vc_t1

0x05cf,	// (0x000215e7) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x05cf,	// (0x000215e7) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x00030a20) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x00030a20) list_single_graphic_heading_pane_vc_t

0x02ac,	// (0x000212c4) list_double2_pane_vc_g1_ParamLimits

0x02ac,	// (0x000212c4) list_double2_pane_vc_g1

0x02b8,	// (0x000212d0) list_double2_pane_vc_g2_ParamLimits

0x02b8,	// (0x000212d0) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x000305b9) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x000305b9) list_double2_pane_vc_g

0x05e1,	// (0x000215f9) list_double2_pane_vc_t1_ParamLimits

0x05e1,	// (0x000215f9) list_double2_pane_vc_t1

0x05f7,	// (0x0002160f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x05f7,	// (0x0002160f) list_double2_large_graphic_pane_vc_g1

0xf48e,	// (0x000304a6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf48e,	// (0x000304a6) list_double2_large_graphic_pane_vc_g2

0xf49a,	// (0x000304b2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf49a,	// (0x000304b2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x000305d6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x000305d6) list_double2_large_graphic_pane_vc_g

0x0603,	// (0x0002161b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0603,	// (0x0002161b) list_double2_large_graphic_pane_vc_t1

0x0619,	// (0x00021631) list_double_time_pane_vc_g1_ParamLimits

0x0619,	// (0x00021631) list_double_time_pane_vc_g1

0x0625,	// (0x0002163d) list_double_time_pane_vc_g2_ParamLimits

0x0625,	// (0x0002163d) list_double_time_pane_vc_g2

0x0001,

0xfa0d,	// (0x00030a25) list_double_time_pane_vc_g_ParamLimits

0xfa0d,	// (0x00030a25) list_double_time_pane_vc_g

0x0631,	// (0x00021649) list_double_time_pane_vc_t1_ParamLimits

0x0631,	// (0x00021649) list_double_time_pane_vc_t1

0x0655,	// (0x0002166d) list_double_time_pane_vc_t2_ParamLimits

0x0655,	// (0x0002166d) list_double_time_pane_vc_t2

0x069f,	// (0x000216b7) list_double_time_pane_vc_t3_ParamLimits

0x069f,	// (0x000216b7) list_double_time_pane_vc_t3

0x06b1,	// (0x000216c9) list_double_time_pane_vc_t4_ParamLimits

0x06b1,	// (0x000216c9) list_double_time_pane_vc_t4

0x0003,

0xfa12,	// (0x00030a2a) list_double_time_pane_vc_t_ParamLimits

0xfa12,	// (0x00030a2a) list_double_time_pane_vc_t

0x02ac,	// (0x000212c4) list_double_pane_vc_g1_ParamLimits

0x02ac,	// (0x000212c4) list_double_pane_vc_g1

0x02b8,	// (0x000212d0) list_double_pane_vc_g2_ParamLimits

0x02b8,	// (0x000212d0) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x000305b9) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x000305b9) list_double_pane_vc_g

0x06c5,	// (0x000216dd) list_double_pane_vc_t1_ParamLimits

0x06c5,	// (0x000216dd) list_double_pane_vc_t1

0x06d9,	// (0x000216f1) list_double_pane_vc_t2_ParamLimits

0x06d9,	// (0x000216f1) list_double_pane_vc_t2

0x0001,

0xfa1b,	// (0x00030a33) list_double_pane_vc_t_ParamLimits

0xfa1b,	// (0x00030a33) list_double_pane_vc_t

0x02ac,	// (0x000212c4) list_double_number_pane_vc_g1_ParamLimits

0x02ac,	// (0x000212c4) list_double_number_pane_vc_g1

0x02b8,	// (0x000212d0) list_double_number_pane_vc_g2_ParamLimits

0x02b8,	// (0x000212d0) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x000305b9) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x000305b9) list_double_number_pane_vc_g

0x06f1,	// (0x00021709) list_double_number_pane_vc_t1_ParamLimits

0x06f1,	// (0x00021709) list_double_number_pane_vc_t1

0x0703,	// (0x0002171b) list_double_number_pane_vc_t2_ParamLimits

0x0703,	// (0x0002171b) list_double_number_pane_vc_t2

0x0717,	// (0x0002172f) list_double_number_pane_vc_t3_ParamLimits

0x0717,	// (0x0002172f) list_double_number_pane_vc_t3

0x0002,

0xfa20,	// (0x00030a38) list_double_number_pane_vc_t_ParamLimits

0xfa20,	// (0x00030a38) list_double_number_pane_vc_t

0x0731,	// (0x00021749) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0731,	// (0x00021749) list_double_large_graphic_pane_vc_g1

0x074d,	// (0x00021765) list_double_large_graphic_pane_vc_g2_ParamLimits

0x074d,	// (0x00021765) list_double_large_graphic_pane_vc_g2

0x0761,	// (0x00021779) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0761,	// (0x00021779) list_double_large_graphic_pane_vc_g3

0x0770,	// (0x00021788) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0770,	// (0x00021788) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa27,	// (0x00030a3f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x00030a3f) list_double_large_graphic_pane_vc_g

0x077f,	// (0x00021797) list_double_large_graphic_pane_vc_t1_ParamLimits

0x077f,	// (0x00021797) list_double_large_graphic_pane_vc_t1

0x079b,	// (0x000217b3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x079b,	// (0x000217b3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa30,	// (0x00030a48) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa30,	// (0x00030a48) list_double_large_graphic_pane_vc_t

0xf4d3,	// (0x000304eb) list_double_heading_pane_vc_g1_ParamLimits

0xf4d3,	// (0x000304eb) list_double_heading_pane_vc_g1

0xf4df,	// (0x000304f7) list_double_heading_pane_vc_g2_ParamLimits

0xf4df,	// (0x000304f7) list_double_heading_pane_vc_g2

0x0001,

0xfa35,	// (0x00030a4d) list_double_heading_pane_vc_g_ParamLimits

0xfa35,	// (0x00030a4d) list_double_heading_pane_vc_g

0x07bd,	// (0x000217d5) list_double_heading_pane_vc_t1_ParamLimits

0x07bd,	// (0x000217d5) list_double_heading_pane_vc_t1

0x07d1,	// (0x000217e9) list_double_heading_pane_vc_t2_ParamLimits

0x07d1,	// (0x000217e9) list_double_heading_pane_vc_t2

0x0001,

0xfa3a,	// (0x00030a52) list_double_heading_pane_vc_t_ParamLimits

0xfa3a,	// (0x00030a52) list_double_heading_pane_vc_t

0x07e9,	// (0x00021801) list_double_graphic_pane_vc_g1_ParamLimits

0x07e9,	// (0x00021801) list_double_graphic_pane_vc_g1

0x07fc,	// (0x00021814) list_double_graphic_pane_vc_g2_ParamLimits

0x07fc,	// (0x00021814) list_double_graphic_pane_vc_g2

0x02ac,	// (0x000212c4) list_double_graphic_pane_vc_g3_ParamLimits

0x02ac,	// (0x000212c4) list_double_graphic_pane_vc_g3

0x0003,

0xfa3f,	// (0x00030a57) list_double_graphic_pane_vc_g_ParamLimits

0xfa3f,	// (0x00030a57) list_double_graphic_pane_vc_g

0x0819,	// (0x00021831) list_double_graphic_pane_vc_t1_ParamLimits

0x0819,	// (0x00021831) list_double_graphic_pane_vc_t1

0x0843,	// (0x0002185b) list_double_graphic_pane_vc_t2_ParamLimits

0x0843,	// (0x0002185b) list_double_graphic_pane_vc_t2

0x0001,

0xfa48,	// (0x00030a60) list_double_graphic_pane_vc_t_ParamLimits

0xfa48,	// (0x00030a60) list_double_graphic_pane_vc_t

0x0c69,	// (0x00021c81) aid_size_cell_fastswap

0xbe07,	// (0x0002ce1f) aid_size_cell_touch_ParamLimits

0xbe07,	// (0x0002ce1f) aid_size_cell_touch

0x0ed2,	// (0x00021eea) popup_fast_swap_wide_window_ParamLimits

0x0ed2,	// (0x00021eea) popup_fast_swap_wide_window

0xbf75,	// (0x0002cf8d) touch_pane_ParamLimits

0xbf75,	// (0x0002cf8d) touch_pane

0x3adc,	// (0x00024af4) button_value_adjust_pane_cp2

0xf517,	// (0x0003052f) button_value_adjust_pane_cp4

0xf51f,	// (0x00030537) form_field_data_pane_cp2

0xb958,	// (0x0002c970) form_field_data_wide_pane_cp2

0x3f6f,	// (0x00024f87) bg_scroll_pane_ParamLimits

0x1274,	// (0x0002228c) scroll_handle_pane_ParamLimits

0x1288,	// (0x000222a0) scroll_sc2_down_pane_ParamLimits

0x1288,	// (0x000222a0) scroll_sc2_down_pane

0x3fa0,	// (0x00024fb8) scroll_sc2_up_pane_ParamLimits

0x3fa0,	// (0x00024fb8) scroll_sc2_up_pane

0xe009,	// (0x0002f021) grid_wheel_folder_pane_g1_ParamLimits

0xe009,	// (0x0002f021) grid_wheel_folder_pane_g1

0x144d,	// (0x00022465) clock_nsta_pane_cp2_ParamLimits

0x144d,	// (0x00022465) clock_nsta_pane_cp2

0xc545,	// (0x0002d55d) listscroll_midp_pane_ParamLimits

0xc551,	// (0x0002d569) midp_canvas_pane

0x4ab2,	// (0x00025aca) nsta_clock_indic_pane

0x4ae6,	// (0x00025afe) listscroll_form_pane_vc

0x4aee,	// (0x00025b06) listscroll_set_pane_vc_ParamLimits

0x4aee,	// (0x00025b06) listscroll_set_pane_vc

0xd712,	// (0x0002e72a) clock_nsta_pane

0xd73c,	// (0x0002e754) indicator_nsta_pane

0x4f42,	// (0x00025f5a) bg_popup_sub_pane_cp2_ParamLimits

0x4f56,	// (0x00025f6e) find_pane_cp2_ParamLimits

0x4f56,	// (0x00025f6e) find_pane_cp2

0x4f6c,	// (0x00025f84) grid_toobar_pane_ParamLimits

0x504c,	// (0x00026064) list_form_gen_pane_vc_ParamLimits

0x504c,	// (0x00026064) list_form_gen_pane_vc

0x5062,	// (0x0002607a) scroll_pane_cp8_vc_ParamLimits

0x5062,	// (0x0002607a) scroll_pane_cp8_vc

0x50de,	// (0x000260f6) data_form_wide_pane_vc_ParamLimits

0x50de,	// (0x000260f6) data_form_wide_pane_vc

0x50ea,	// (0x00026102) form_field_data_wide_pane_vc_g1

0x50f2,	// (0x0002610a) form_field_data_wide_pane_vc_t1_ParamLimits

0x50f2,	// (0x0002610a) form_field_data_wide_pane_vc_t1

0x3af0,	// (0x00024b08) input_focus_pane_cp6_vc_ParamLimits

0x3af0,	// (0x00024b08) input_focus_pane_cp6_vc

0x5438,	// (0x00026450) list_midp_pane_ParamLimits

0x679c,	// (0x000277b4) scroll_pane_cp16_ParamLimits

0x679c,	// (0x000277b4) scroll_pane_cp16

0x548e,	// (0x000264a6) button_value_adjust_pane_ParamLimits

0x548e,	// (0x000264a6) button_value_adjust_pane

0xdc47,	// (0x0002ec5f) button_value_adjust_pane_cp6_ParamLimits

0xdc47,	// (0x0002ec5f) button_value_adjust_pane_cp6

0xdd61,	// (0x0002ed79) settings_code_pane_cp_ParamLimits

0xdd61,	// (0x0002ed79) settings_code_pane_cp

0xeb6a,	// (0x0002fb82) cell_touch_pane_g1

0xeb6a,	// (0x0002fb82) cell_touch_pane_g2

0x0001,

0xf6dc,	// (0x000306f4) cell_touch_pane_g

0xdee7,	// (0x0002eeff) cell_touch_pane_cp_ParamLimits

0xdee7,	// (0x0002eeff) cell_touch_pane_cp

0xdf03,	// (0x0002ef1b) cell_touch_pane_ParamLimits

0xdf03,	// (0x0002ef1b) cell_touch_pane

0xeb6a,	// (0x0002fb82) scroll_sc2_down_pane_g1

0xeb6a,	// (0x0002fb82) scroll_sc2_up_pane_g1

0xeb74,	// (0x0002fb8c) bg_set_opt_pane_cp4_vc

0x6b2c,	// (0x00027b44) list_set_graphic_pane_vc_g1_ParamLimits

0x6b2c,	// (0x00027b44) list_set_graphic_pane_vc_g1

0x6b38,	// (0x00027b50) list_set_graphic_pane_vc_g2_ParamLimits

0x6b38,	// (0x00027b50) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x000309eb) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x000309eb) list_set_graphic_pane_vc_g

0x6b44,	// (0x00027b5c) text_primary_small_cp13_vc_ParamLimits

0x6b44,	// (0x00027b5c) text_primary_small_cp13_vc

0x6b5c,	// (0x00027b74) list_set_graphic_pane_vc_ParamLimits

0x6b5c,	// (0x00027b74) list_set_graphic_pane_vc

0xeb74,	// (0x0002fb8c) input_focus_pane_cp2_vc

0xeb6a,	// (0x0002fb82) setting_code_pane_vc_g1

0x32ae,	// (0x000242c6) setting_code_pane_vc_t1

0x6b6f,	// (0x00027b87) set_text_pane_vc_t1_ParamLimits

0x6b6f,	// (0x00027b87) set_text_pane_vc_t1

0xeb74,	// (0x0002fb8c) input_focus_pane_cp1_vc

0x6b8b,	// (0x00027ba3) list_set_text_pane_vc

0xeb6a,	// (0x0002fb82) setting_text_pane_vc_g1

0xeb74,	// (0x0002fb8c) bg_set_opt_pane_cp2_vc

0x32a5,	// (0x000242bd) setting_slider_graphic_pane_vc_g1

0x6b95,	// (0x00027bad) setting_slider_graphic_pane_vc_t1

0x6ba5,	// (0x00027bbd) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x000309f0) setting_slider_graphic_pane_vc_t

0x6bb5,	// (0x00027bcd) slider_set_pane_cp_vc

0x6bbd,	// (0x00027bd5) slider_set_pane_vc_g1

0x6bc6,	// (0x00027bde) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x000309f5) slider_set_pane_vc_g

0x3b48,	// (0x00024b60) set_opt_bg_pane_g1_copy1

0x3b50,	// (0x00024b68) set_opt_bg_pane_g2_copy1

0x6bf2,	// (0x00027c0a) set_opt_bg_pane_g3_copy1

0x3b60,	// (0x00024b78) set_opt_bg_pane_g4_copy1

0x3b68,	// (0x00024b80) set_opt_bg_pane_g5_copy1

0x3b70,	// (0x00024b88) set_opt_bg_pane_g6_copy1

0x6bfc,	// (0x00027c14) set_opt_bg_pane_g7_copy1

0x6c06,	// (0x00027c1e) set_opt_bg_pane_g8_copy1

0x6c10,	// (0x00027c28) set_opt_bg_pane_g9_copy1

0xeb74,	// (0x0002fb8c) bg_set_opt_pane_cp_vc

0x6c1a,	// (0x00027c32) setting_slider_pane_vc_t1

0x6c29,	// (0x00027c41) setting_slider_pane_vc_t2

0x6c39,	// (0x00027c51) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x00030a04) setting_slider_pane_vc_t

0x6c49,	// (0x00027c61) slider_set_pane_vc

0x1daf,	// (0x00022dc7) volume_set_pane_vc_g1

0x1db8,	// (0x00022dd0) volume_set_pane_vc_g2

0x1dc1,	// (0x00022dd9) volume_set_pane_vc_g3

0x1dca,	// (0x00022de2) volume_set_pane_vc_g4

0x1dd3,	// (0x00022deb) volume_set_pane_vc_g5

0x1ddc,	// (0x00022df4) volume_set_pane_vc_g6

0x1de5,	// (0x00022dfd) volume_set_pane_vc_g7

0x1dee,	// (0x00022e06) volume_set_pane_vc_g8

0x1df7,	// (0x00022e0f) volume_set_pane_vc_g9

0x1e00,	// (0x00022e18) volume_set_pane_vc_g10

0x0009,

0xf88a,	// (0x000308a2) volume_set_pane_vc_g

0x6c51,	// (0x00027c69) volume_set_pane_vc

0x6c59,	// (0x00027c71) button_value_adjust_pane_cp1_vc

0x6c63,	// (0x00027c7b) list_highlight_pane_cp2_vc

0x6c6c,	// (0x00027c84) list_set_pane_vc_ParamLimits

0x6c6c,	// (0x00027c84) list_set_pane_vc

0x6cca,	// (0x00027ce2) main_pane_set_vc_t1_ParamLimits

0x6cca,	// (0x00027ce2) main_pane_set_vc_t1

0x6cdf,	// (0x00027cf7) main_pane_set_vc_t2_ParamLimits

0x6cdf,	// (0x00027cf7) main_pane_set_vc_t2

0x6cf1,	// (0x00027d09) main_pane_set_vc_t3_ParamLimits

0x6cf1,	// (0x00027d09) main_pane_set_vc_t3

0x6d05,	// (0x00027d1d) main_pane_set_vc_t4_ParamLimits

0x6d05,	// (0x00027d1d) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x00030a0b) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x00030a0b) main_pane_set_vc_t

0x6d19,	// (0x00027d31) setting_code_pane_vc_ParamLimits

0x6d19,	// (0x00027d31) setting_code_pane_vc

0x6d2a,	// (0x00027d42) setting_slider_graphic_pane_vc

0x6d2a,	// (0x00027d42) setting_slider_pane_vc

0x6d2a,	// (0x00027d42) setting_text_pane_vc

0x6d2a,	// (0x00027d42) setting_volume_pane_vc

0x6d34,	// (0x00027d4c) scroll_pane_cp121_vc

0x3aca,	// (0x00024ae2) set_content_pane_vc

0x6d3c,	// (0x00027d54) button_value_adjust_pane_g1

0x6d45,	// (0x00027d5d) button_value_adjust_pane_g2

0x0001,

0xfa4d,	// (0x00030a65) button_value_adjust_pane_g

0x6d4e,	// (0x00027d66) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d4e,	// (0x00027d66) form_field_slider_wide_pane_vc_t1

0x6d62,	// (0x00027d7a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d62,	// (0x00027d7a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa52,	// (0x00030a6a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa52,	// (0x00030a6a) form_field_slider_wide_pane_vc_t

0x34de,	// (0x000244f6) input_focus_pane_cp10_vc_ParamLimits

0x34de,	// (0x000244f6) input_focus_pane_cp10_vc

0x6d90,	// (0x00027da8) slider_cont_pane_cp1_vc_ParamLimits

0x6d90,	// (0x00027da8) slider_cont_pane_cp1_vc

0x6da2,	// (0x00027dba) slider_form_pane_g1_cp2

0x6bc6,	// (0x00027bde) slider_form_pane_g2_cp2

0x6dcf,	// (0x00027de7) form_field_slider_pane_vc_t3

0x6ddd,	// (0x00027df5) form_field_slider_pane_vc_t4

0x6deb,	// (0x00027e03) slider_form_pane_vc_ParamLimits

0x6deb,	// (0x00027e03) slider_form_pane_vc

0x6df8,	// (0x00027e10) form_field_slider_pane_vc_t1_ParamLimits

0x6df8,	// (0x00027e10) form_field_slider_pane_vc_t1

0x6d62,	// (0x00027d7a) form_field_slider_pane_vc_t2_ParamLimits

0x6d62,	// (0x00027d7a) form_field_slider_pane_vc_t2

0x0001,

0xfa64,	// (0x00030a7c) form_field_slider_pane_vc_t_ParamLimits

0xfa64,	// (0x00030a7c) form_field_slider_pane_vc_t

0x34de,	// (0x000244f6) input_focus_pane_cp9_vc_ParamLimits

0x34de,	// (0x000244f6) input_focus_pane_cp9_vc

0x6e14,	// (0x00027e2c) slider_cont_pane_vc_ParamLimits

0x6e14,	// (0x00027e2c) slider_cont_pane_vc

0x6e28,	// (0x00027e40) list_form_graphic_pane_cp_vc_ParamLimits

0x6e28,	// (0x00027e40) list_form_graphic_pane_cp_vc

0x50ea,	// (0x00026102) form_field_popup_wide_pane_vc_g1

0x6e3d,	// (0x00027e55) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e3d,	// (0x00027e55) form_field_popup_wide_pane_vc_t1

0x3af0,	// (0x00024b08) input_focus_pane_cp8_vc_ParamLimits

0x3af0,	// (0x00024b08) input_focus_pane_cp8_vc

0x6e82,	// (0x00027e9a) list_form_wide_pane_vc_ParamLimits

0x6e82,	// (0x00027e9a) list_form_wide_pane_vc

0x6e8e,	// (0x00027ea6) list_form_graphic_pane_vc_g1

0x6e96,	// (0x00027eae) list_form_graphic_pane_vc_t1_ParamLimits

0x6e96,	// (0x00027eae) list_form_graphic_pane_vc_t1

0x3263,	// (0x0002427b) list_highlight_pane_cp5_vc_ParamLimits

0x3263,	// (0x0002427b) list_highlight_pane_cp5_vc

0x6eb2,	// (0x00027eca) list_form_graphic_pane_vc_ParamLimits

0x6eb2,	// (0x00027eca) list_form_graphic_pane_vc

0x50ea,	// (0x00026102) form_field_popup_pane_vc_g1

0x6ec8,	// (0x00027ee0) form_field_popup_pane_vc_t1_ParamLimits

0x6ec8,	// (0x00027ee0) form_field_popup_pane_vc_t1

0x3af0,	// (0x00024b08) input_focus_pane_cp7_vc_ParamLimits

0x3af0,	// (0x00024b08) input_focus_pane_cp7_vc

0x6edf,	// (0x00027ef7) list_form_pane_vc_ParamLimits

0x6edf,	// (0x00027ef7) list_form_pane_vc

0x6eeb,	// (0x00027f03) data_form_pane_vc_t1_ParamLimits

0x6eeb,	// (0x00027f03) data_form_pane_vc_t1

0x3b48,	// (0x00024b60) input_focus_pane_vc_g1

0x3b50,	// (0x00024b68) input_focus_pane_vc_g2

0x3b58,	// (0x00024b70) input_focus_pane_vc_g3

0x3b60,	// (0x00024b78) input_focus_pane_vc_g4

0x3b68,	// (0x00024b80) input_focus_pane_vc_g5

0x3b70,	// (0x00024b88) input_focus_pane_vc_g6

0x3b78,	// (0x00024b90) input_focus_pane_vc_g7

0x3b80,	// (0x00024b98) input_focus_pane_vc_g8

0x3b88,	// (0x00024ba0) input_focus_pane_vc_g9

0xeb6a,	// (0x0002fb82) input_focus_pane_vc_g10

0x0009,

0xf665,	// (0x0003067d) input_focus_pane_vc_g

0x50de,	// (0x000260f6) data_form_pane_vc_ParamLimits

0x50de,	// (0x000260f6) data_form_pane_vc

0x50ea,	// (0x00026102) form_field_data_pane_vc_g1

0x6f06,	// (0x00027f1e) form_field_data_pane_vc_t1_ParamLimits

0x6f06,	// (0x00027f1e) form_field_data_pane_vc_t1

0x3af0,	// (0x00024b08) input_focus_pane_vc_ParamLimits

0x3af0,	// (0x00024b08) input_focus_pane_vc

0x6f20,	// (0x00027f38) button_value_adjust_pane_cp3_vc

0x6f28,	// (0x00027f40) button_value_adjust_pane_cp5_vc

0x6f30,	// (0x00027f48) form_field_data_pane_vc_ParamLimits

0x6f30,	// (0x00027f48) form_field_data_pane_vc

0x6f47,	// (0x00027f5f) form_field_data_pane_vc_cp2

0x6f4f,	// (0x00027f67) form_field_data_wide_pane_vc_ParamLimits

0x6f4f,	// (0x00027f67) form_field_data_wide_pane_vc

0x6f65,	// (0x00027f7d) form_field_data_wide_pane_vc_cp2

0x6f6d,	// (0x00027f85) form_field_popup_pane_vc_ParamLimits

0x6f6d,	// (0x00027f85) form_field_popup_pane_vc

0x6f84,	// (0x00027f9c) form_field_popup_wide_pane_vc_ParamLimits

0x6f84,	// (0x00027f9c) form_field_popup_wide_pane_vc

0x6f9a,	// (0x00027fb2) form_field_slider_pane_vc_ParamLimits

0x6f9a,	// (0x00027fb2) form_field_slider_pane_vc

0x6fad,	// (0x00027fc5) form_field_slider_wide_pane_vc_ParamLimits

0x6fad,	// (0x00027fc5) form_field_slider_wide_pane_vc

0xdf21,	// (0x0002ef39) grid_touch_1_pane_ParamLimits

0xdf21,	// (0x0002ef39) grid_touch_1_pane

0xdf35,	// (0x0002ef4d) grid_touch_2_pane_ParamLimits

0xdf35,	// (0x0002ef4d) grid_touch_2_pane

0x7091,	// (0x000280a9) touch_pane_g1_ParamLimits

0x7091,	// (0x000280a9) touch_pane_g1

0x6fe4,	// (0x00027ffc) cell_app_pane_cp_wide_ParamLimits

0x6fe4,	// (0x00027ffc) cell_app_pane_cp_wide

0x6ff5,	// (0x0002800d) grid_popup_fast_wide_pane_ParamLimits

0x6ff5,	// (0x0002800d) grid_popup_fast_wide_pane

0x7009,	// (0x00028021) scroll_pane_cp19_ParamLimits

0x7009,	// (0x00028021) scroll_pane_cp19

0xeb74,	// (0x0002fb8c) bg_popup_window_pane_cp20

0x701d,	// (0x00028035) listscroll_popup_fast_wide_pane

0xdf5f,	// (0x0002ef77) grid_indicator_nsta_pane

0x7037,	// (0x0002804f) clock_nsta_pane_g1

0x7040,	// (0x00028058) clock_nsta_pane_t1

0xdf6b,	// (0x0002ef83) cell_indicator_nsta_pane_ParamLimits

0xdf6b,	// (0x0002ef83) cell_indicator_nsta_pane

0x7091,	// (0x000280a9) cell_indicator_nsta_pane_g1

0xdf86,	// (0x0002ef9e) cell_indicator_nsta_pane_g2

0x0001,

0xfa75,	// (0x00030a8d) cell_indicator_nsta_pane_g

0x70b1,	// (0x000280c9) clock_nsta_pane_cp

0x70ba,	// (0x000280d2) indicator_nsta_pane_cp

0x70c4,	// (0x000280dc) nsta_clock_indic_pane_g1

0x332c,	// (0x00024344) grid_indicator_pane

0x4095,	// (0x000250ad) scroll_pane_cp29

0x139c,	// (0x000223b4) indicator_nsta_pane_cp2_ParamLimits

0x139c,	// (0x000223b4) indicator_nsta_pane_cp2

0x3263,	// (0x0002427b) main_apps_wheel_pane

0x52f9,	// (0x00026311) form_midp_field_text_pane_ParamLimits

0x5444,	// (0x0002645c) scroll_bar_cp050_ParamLimits

0x711d,	// (0x00028135) cell_indicator_pane_ParamLimits

0x711d,	// (0x00028135) cell_indicator_pane

0x7134,	// (0x0002814c) cell_indicator_pane_g1

0xdf93,	// (0x0002efab) grid_wheel_folder_pane_ParamLimits

0xdf93,	// (0x0002efab) grid_wheel_folder_pane

0xdfa1,	// (0x0002efb9) list_wheel_apps_pane_ParamLimits

0xdfa1,	// (0x0002efb9) list_wheel_apps_pane

0xdfaf,	// (0x0002efc7) main_apps_wheel_pane_g1_ParamLimits

0xdfaf,	// (0x0002efc7) main_apps_wheel_pane_g1

0xdfbb,	// (0x0002efd3) main_apps_wheel_pane_g2_ParamLimits

0xdfbb,	// (0x0002efd3) main_apps_wheel_pane_g2

0x0001,

0xfa91,	// (0x00030aa9) main_apps_wheel_pane_g_ParamLimits

0xfa91,	// (0x00030aa9) main_apps_wheel_pane_g

0xdfc9,	// (0x0002efe1) main_apps_wheel_pane_t1_ParamLimits

0xdfc9,	// (0x0002efe1) main_apps_wheel_pane_t1

0xdfdd,	// (0x0002eff5) list_wheel_apps_pane_g1

0xdfe5,	// (0x0002effd) list_wheel_apps_pane_g2

0xdfed,	// (0x0002f005) list_wheel_apps_pane_g3

0xdff5,	// (0x0002f00d) list_wheel_apps_pane_g4

0xdfff,	// (0x0002f017) list_wheel_apps_pane_g5

0x0004,

0xfa96,	// (0x00030aae) list_wheel_apps_pane_g

0x4629,	// (0x00025641) navi_icon_text_pane

0xd606,	// (0x0002e61e) aid_fill_nsta

0x71f9,	// (0x00028211) navi_icon_text_pane_g1

0x7205,	// (0x0002821d) navi_icon_text_pane_t1

0x44c7,	// (0x000254df) list_set_graphic_pane_t1_ParamLimits

0x44c7,	// (0x000254df) list_set_graphic_pane_t1

0x5baf,	// (0x00026bc7) popup_midp_note_alarm_window_t6_ParamLimits

0x5baf,	// (0x00026bc7) popup_midp_note_alarm_window_t6

0x5bc1,	// (0x00026bd9) popup_midp_note_alarm_window_t7_ParamLimits

0x5bc1,	// (0x00026bd9) popup_midp_note_alarm_window_t7

0x5bd3,	// (0x00026beb) popup_midp_note_alarm_window_t8_ParamLimits

0x5bd3,	// (0x00026beb) popup_midp_note_alarm_window_t8

0x5be5,	// (0x00026bfd) popup_midp_note_alarm_window_t9_ParamLimits

0x5be5,	// (0x00026bfd) popup_midp_note_alarm_window_t9

0x5bf7,	// (0x00026c0f) popup_midp_note_alarm_window_t10_ParamLimits

0x5bf7,	// (0x00026c0f) popup_midp_note_alarm_window_t10

0x5c09,	// (0x00026c21) popup_midp_note_alarm_window_t11_ParamLimits

0x5c09,	// (0x00026c21) popup_midp_note_alarm_window_t11

0x5c1b,	// (0x00026c33) scroll_pane_cp17_ParamLimits

0x5c1b,	// (0x00026c33) scroll_pane_cp17

0x1daf,	// (0x00022dc7) volume_small_pane_cp_g1

0x20a4,	// (0x000230bc) volume_small_pane_cp_g2

0x20ad,	// (0x000230c5) volume_small_pane_cp_g3

0x20b6,	// (0x000230ce) volume_small_pane_cp_g4

0x20bf,	// (0x000230d7) volume_small_pane_cp_g5

0x20c8,	// (0x000230e0) volume_small_pane_cp_g6

0x20d1,	// (0x000230e9) volume_small_pane_cp_g7

0x20da,	// (0x000230f2) volume_small_pane_cp_g8

0x20e3,	// (0x000230fb) volume_small_pane_cp_g9

0x20ec,	// (0x00023104) volume_small_pane_cp_g10

0x4893,	// (0x000258ab) midp_ticker_pane_g1_ParamLimits

0x489f,	// (0x000258b7) midp_ticker_pane_g2_ParamLimits

0xf731,	// (0x00030749) midp_ticker_pane_g_ParamLimits

0x48ab,	// (0x000258c3) midp_ticker_pane_t1_ParamLimits

0xd62a,	// (0x0002e642) aid_fill_nsta_2

0x5430,	// (0x00026448) list_form2_midp_pane

0x6564,	// (0x0002757c) midp_editing_number_pane_ParamLimits

0x6573,	// (0x0002758b) midp_ticker_pane_ParamLimits

0x7217,	// (0x0002822f) form2_midp_field_pane

0x723b,	// (0x00028253) scroll_pane_cp51

0x725b,	// (0x00028273) form2_midp_button_pane_ParamLimits

0x725b,	// (0x00028273) form2_midp_button_pane

0x726d,	// (0x00028285) form2_midp_content_pane_ParamLimits

0x726d,	// (0x00028285) form2_midp_content_pane

0x7287,	// (0x0002829f) form2_midp_field_choice_group_pane

0x728f,	// (0x000282a7) form2_midp_field_pane_g1

0x7297,	// (0x000282af) form2_midp_field_pane_g2

0x729f,	// (0x000282b7) form2_midp_field_pane_g3

0x72a7,	// (0x000282bf) form2_midp_field_pane_g4

0x0003,

0xfabb,	// (0x00030ad3) form2_midp_field_pane_g

0x72af,	// (0x000282c7) form2_midp_gauge_slider_pane

0x72b7,	// (0x000282cf) form2_midp_gauge_wait_pane

0x72bf,	// (0x000282d7) form2_midp_image_pane_ParamLimits

0x72bf,	// (0x000282d7) form2_midp_image_pane

0x72da,	// (0x000282f2) form2_midp_label_pane_ParamLimits

0x72da,	// (0x000282f2) form2_midp_label_pane

0xe032,	// (0x0002f04a) form2_midp_label_pane_cp_ParamLimits

0xe032,	// (0x0002f04a) form2_midp_label_pane_cp

0x7314,	// (0x0002832c) form2_midp_string_pane_ParamLimits

0x7314,	// (0x0002832c) form2_midp_string_pane

0xbbe4,	// (0x0002cbfc) form2_midp_text_pane_ParamLimits

0xbbe4,	// (0x0002cbfc) form2_midp_text_pane

0x7326,	// (0x0002833e) form2_midp_time_pane

0x7336,	// (0x0002834e) input_focus_pane_cp51_ParamLimits

0x7336,	// (0x0002834e) input_focus_pane_cp51

0x734e,	// (0x00028366) form2_midp_label_pane_t1_ParamLimits

0x734e,	// (0x00028366) form2_midp_label_pane_t1

0xbbfd,	// (0x0002cc15) form2_mdip_text_pane_t1_ParamLimits

0xbbfd,	// (0x0002cc15) form2_mdip_text_pane_t1

0x08ab,	// (0x000218c3) form2_midp_time_pane_t1

0x7397,	// (0x000283af) form2_midp_gauge_slider_pane_t1

0xe051,	// (0x0002f069) form2_midp_gauge_slider_pane_t2

0xe063,	// (0x0002f07b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac4,	// (0x00030adc) form2_midp_gauge_slider_pane_t

0x73cd,	// (0x000283e5) form2_midp_slider_pane

0x73d9,	// (0x000283f1) form2_midp_gauge_wait_pane_t1

0x73e7,	// (0x000283ff) form2_midp_wait_pane_ParamLimits

0x73e7,	// (0x000283ff) form2_midp_wait_pane

0xe075,	// (0x0002f08d) list_single_2graphic_pane_cp4_ParamLimits

0xe075,	// (0x0002f08d) list_single_2graphic_pane_cp4

0xda44,	// (0x0002ea5c) list_single_midp_graphic_pane_cp_ParamLimits

0xda44,	// (0x0002ea5c) list_single_midp_graphic_pane_cp

0xeb74,	// (0x0002fb8c) list_highlight_pane_cp20

0x7436,	// (0x0002844e) list_single_2graphic_pane_g1_cp4

0x743e,	// (0x00028456) list_single_2graphic_pane_g2_cp4

0x7446,	// (0x0002845e) list_single_2graphic_pane_t1_cp4

0x3263,	// (0x0002427b) list_highlight_pane_cp21

0x7455,	// (0x0002846d) list_single_midp_graphic_pane_g4_cp

0x7464,	// (0x0002847c) list_single_midp_graphic_pane_t1_cp

0xe089,	// (0x0002f0a1) form2_mdip_string_pane_t1_ParamLimits

0xe089,	// (0x0002f0a1) form2_mdip_string_pane_t1

0xeb74,	// (0x0002fb8c) bg_wml_button_pane_cp2

0xeb6a,	// (0x0002fb82) form2_midp_image_pane_g1

0xf4a6,	// (0x000304be) list_double_large_graphic_pane_g5_ParamLimits

0xf4a6,	// (0x000304be) list_double_large_graphic_pane_g5

0xc545,	// (0x0002d55d) midp_form_pane_ParamLimits

0x3263,	// (0x0002427b) main_apps_wheel_pane_ParamLimits

0xcb67,	// (0x0002db7f) popup_preview_window_ParamLimits

0xcb67,	// (0x0002db7f) popup_preview_window

0x1c22,	// (0x00022c3a) popup_touch_info_window_ParamLimits

0x1c22,	// (0x00022c3a) popup_touch_info_window

0x1c40,	// (0x00022c58) popup_touch_menu_window_ParamLimits

0x1c40,	// (0x00022c58) popup_touch_menu_window

0xeb60,	// (0x0002fb78) bg_popup_sub_pane_cp6

0x7572,	// (0x0002858a) list_touch_menu_pane

0x757a,	// (0x00028592) list_single_touch_menu_pane_ParamLimits

0x757a,	// (0x00028592) list_single_touch_menu_pane

0x7590,	// (0x000285a8) list_single_touch_menu_pane_t1

0x3263,	// (0x0002427b) bg_popup_sub_pane_cp7_ParamLimits

0x3263,	// (0x0002427b) bg_popup_sub_pane_cp7

0x5464,	// (0x0002647c) heading_sub_pane

0x759e,	// (0x000285b6) list_touch_info_pane_ParamLimits

0x759e,	// (0x000285b6) list_touch_info_pane

0x75ae,	// (0x000285c6) list_single_touch_info_pane_ParamLimits

0x75ae,	// (0x000285c6) list_single_touch_info_pane

0x75c0,	// (0x000285d8) list_single_touch_info_pane_t1

0x75ce,	// (0x000285e6) list_single_touch_info_pane_t2

0x0001,

0xfad2,	// (0x00030aea) list_single_touch_info_pane_t

0x47b6,	// (0x000257ce) bg_popup_heading_pane_cp

0x75dc,	// (0x000285f4) heading_sub_pane_t1

0x5078,	// (0x00026090) bg_popup_preview_window_pane_cp_ParamLimits

0x5078,	// (0x00026090) bg_popup_preview_window_pane_cp

0x5464,	// (0x0002647c) heading_preview_pane

0x759e,	// (0x000285b6) list_preview_pane_ParamLimits

0x759e,	// (0x000285b6) list_preview_pane

0x75ea,	// (0x00028602) popup_preview_window_g1

0x75ae,	// (0x000285c6) list_single_preview_pane_ParamLimits

0x75ae,	// (0x000285c6) list_single_preview_pane

0x75f2,	// (0x0002860a) list_single_preview_pane_g1

0x75fa,	// (0x00028612) list_single_preview_pane_t1

0x75c0,	// (0x000285d8) list_single_preview_pane_t2

0x0001,

0xfad7,	// (0x00030aef) list_single_preview_pane_t

0x7608,	// (0x00028620) bg_popup_heading_pane_cp2_ParamLimits

0x7608,	// (0x00028620) bg_popup_heading_pane_cp2

0x761e,	// (0x00028636) heading_preview_pane_g1

0x7626,	// (0x0002863e) heading_preview_pane_t1_ParamLimits

0x7626,	// (0x0002863e) heading_preview_pane_t1

0x334f,	// (0x00024367) soft_indicator_pane_t1_ParamLimits

0x3a63,	// (0x00024a7b) scroll_pane_ParamLimits

0x3f8e,	// (0x00024fa6) scroll_sc2_left_pane

0x3f97,	// (0x00024faf) scroll_sc2_right_pane

0x3fb6,	// (0x00024fce) scroll_bg_pane_g1_ParamLimits

0x3fcb,	// (0x00024fe3) scroll_bg_pane_g2_ParamLimits

0x3fe3,	// (0x00024ffb) scroll_bg_pane_g3_ParamLimits

0xf6bc,	// (0x000306d4) scroll_bg_pane_g_ParamLimits

0x3fb6,	// (0x00024fce) scroll_handle_pane_g1_ParamLimits

0x4005,	// (0x0002501d) scroll_handle_pane_g2_ParamLimits

0x3fe3,	// (0x00024ffb) scroll_handle_pane_g3_ParamLimits

0xf6c3,	// (0x000306db) scroll_handle_pane_g_ParamLimits

0x16e6,	// (0x000226fe) popup_choice_list_window_ParamLimits

0x16e6,	// (0x000226fe) popup_choice_list_window

0x4f4e,	// (0x00025f66) choice_list_pane

0x4fd0,	// (0x00025fe8) cell_toolbar_pane_t1

0x4ff8,	// (0x00026010) toolbar_button_pane_ParamLimits

0x60d5,	// (0x000270ed) ai_gene_pane_1_t2_ParamLimits

0x60d5,	// (0x000270ed) ai_gene_pane_1_t2

0x0001,

0xf8e6,	// (0x000308fe) ai_gene_pane_1_t_ParamLimits

0xf8e6,	// (0x000308fe) ai_gene_pane_1_t

0x7643,	// (0x0002865b) scroll_sc2_left_pane_g1

0x7643,	// (0x0002865b) scroll_sc2_right_pane_g1

0x4ada,	// (0x00025af2) bg_popup_sub_pane_cp10

0x764d,	// (0x00028665) list_choice_list_pane

0x7666,	// (0x0002867e) list_single_choice_list_pane_ParamLimits

0x7666,	// (0x0002867e) list_single_choice_list_pane

0x7679,	// (0x00028691) list_single_choice_list_pane_g1

0x3c94,	// (0x00024cac) list_single_choice_list_pane_t1_ParamLimits

0x3c94,	// (0x00024cac) list_single_choice_list_pane_t1

0x7681,	// (0x00028699) choice_list_pane_g1

0x7689,	// (0x000286a1) choice_list_pane_t1

0xeb60,	// (0x0002fb78) input_focus_pane_cp11

0x3e6b,	// (0x00024e83) title_pane_stacon_g2_ParamLimits

0x3e6b,	// (0x00024e83) title_pane_stacon_g2

0x0002,

0xf6a2,	// (0x000306ba) title_pane_stacon_g_ParamLimits

0xf6a2,	// (0x000306ba) title_pane_stacon_g

0x47b6,	// (0x000257ce) cursor_press_pane

0xc80e,	// (0x0002d826) popup_fep_hwr_window_ParamLimits

0xc80e,	// (0x0002d826) popup_fep_hwr_window

0x180c,	// (0x00022824) popup_fep_vkb_window_ParamLimits

0x180c,	// (0x00022824) popup_fep_vkb_window

0x7697,	// (0x000286af) cursor_press_pane_g1

0x0002,

0xfb00,	// (0x00030b18) fep_vkb_side_pane_g_ParamLimits

0x212e,	// (0x00023146) fep_hwr_candidate_pane_ParamLimits

0x212e,	// (0x00023146) fep_hwr_candidate_pane

0x2158,	// (0x00023170) fep_hwr_side_pane_ParamLimits

0x2158,	// (0x00023170) fep_hwr_side_pane

0x2178,	// (0x00023190) fep_hwr_top_pane_ParamLimits

0x2178,	// (0x00023190) fep_hwr_top_pane

0x2190,	// (0x000231a8) fep_hwr_write_pane_ParamLimits

0x2190,	// (0x000231a8) fep_hwr_write_pane

0xfb00,	// (0x00030b18) fep_vkb_side_pane_g

0x769f,	// (0x000286b7) fep_hwr_top_pane_g1

0x76b1,	// (0x000286c9) fep_hwr_top_pane_g2

0x21bc,	// (0x000231d4) fep_hwr_top_pane_g3

0x0002,

0xfadc,	// (0x00030af4) fep_hwr_top_pane_g

0x21d1,	// (0x000231e9) fep_hwr_top_text_pane

0x4185,	// (0x0002519d) fep_hwr_top_text_pane_g1

0x76e7,	// (0x000286ff) fep_hwr_top_text_pane_t1

0x22c7,	// (0x000232df) fep_hwr_candidate_pane_g1

0x793a,	// (0x00028952) fep_vkb_keypad_pane_g3_ParamLimits

0x793a,	// (0x00028952) fep_vkb_keypad_pane_g3

0x7962,	// (0x0002897a) fep_vkb_keypad_pane_g4_ParamLimits

0x7962,	// (0x0002897a) fep_vkb_keypad_pane_g4

0x79d1,	// (0x000289e9) fep_vkb_bottom_pane_g2_ParamLimits

0x79d1,	// (0x000289e9) fep_vkb_bottom_pane_g2

0x0001,

0xfb07,	// (0x00030b1f) fep_vkb_bottom_pane_g_ParamLimits

0xfb07,	// (0x00030b1f) fep_vkb_bottom_pane_g

0x7643,	// (0x0002865b) cell_vkb_side_pane_g2

0x0001,

0xfb11,	// (0x00030b29) cell_vkb_side_pane_g

0x7a5c,	// (0x00028a74) cell_vkb_side_pane_t1

0x7a6a,	// (0x00028a82) cell_vkb_side_pane_t1_copy1

0x7643,	// (0x0002865b) bg_fep_vkb_candidate_pane_g2

0x7b96,	// (0x00028bae) cell_vkb_candidate_pane_ParamLimits

0x76f5,	// (0x0002870d) aid_size_cell_vkb_ParamLimits

0x76f5,	// (0x0002870d) aid_size_cell_vkb

0x7b96,	// (0x00028bae) cell_vkb_candidate_pane

0x22e1,	// (0x000232f9) bg_popup_fep_shadow_pane_g1

0xe133,	// (0x0002f14b) fep_vkb_bottom_pane_ParamLimits

0xe133,	// (0x0002f14b) fep_vkb_bottom_pane

0x77b9,	// (0x000287d1) fep_vkb_candidate_pane_ParamLimits

0x77b9,	// (0x000287d1) fep_vkb_candidate_pane

0xe158,	// (0x0002f170) fep_vkb_keypad_pane_ParamLimits

0xe158,	// (0x0002f170) fep_vkb_keypad_pane

0xe194,	// (0x0002f1ac) fep_vkb_side_pane_ParamLimits

0xe194,	// (0x0002f1ac) fep_vkb_side_pane

0xe1d0,	// (0x0002f1e8) fep_vkb_top_pane_ParamLimits

0xe1d0,	// (0x0002f1e8) fep_vkb_top_pane

0x7893,	// (0x000288ab) fep_vkb_top_pane_g1_ParamLimits

0x7893,	// (0x000288ab) fep_vkb_top_pane_g1

0x78a2,	// (0x000288ba) fep_vkb_top_pane_g2_ParamLimits

0x78a2,	// (0x000288ba) fep_vkb_top_pane_g2

0x78b1,	// (0x000288c9) fep_vkb_top_pane_g3_ParamLimits

0x78b1,	// (0x000288c9) fep_vkb_top_pane_g3

0x0003,

0xfaf7,	// (0x00030b0f) fep_vkb_top_pane_g_ParamLimits

0xfaf7,	// (0x00030b0f) fep_vkb_top_pane_g

0x78cf,	// (0x000288e7) fep_vkb_top_text_pane_ParamLimits

0x78cf,	// (0x000288e7) fep_vkb_top_text_pane

0xe20c,	// (0x0002f224) fep_vkb_side_pane_g1_ParamLimits

0xe20c,	// (0x0002f224) fep_vkb_side_pane_g1

0x7929,	// (0x00028941) grid_vkb_side_pane_ParamLimits

0x7929,	// (0x00028941) grid_vkb_side_pane

0x22e9,	// (0x00023301) bg_popup_fep_shadow_pane_g2

0x22f2,	// (0x0002330a) bg_popup_fep_shadow_pane_g3

0x22fa,	// (0x00023312) bg_popup_fep_shadow_pane_g4

0x2303,	// (0x0002331b) bg_popup_fep_shadow_pane_g5

0x230d,	// (0x00023325) bg_popup_fep_shadow_pane_g6

0x2315,	// (0x0002332d) bg_popup_fep_shadow_pane_g7

0x3b68,	// (0x00024b80) bg_popup_fep_shadow_pane_g8

0x7980,	// (0x00028998) grid_vkb_keypad_number_pane_ParamLimits

0x7980,	// (0x00028998) grid_vkb_keypad_number_pane

0x7990,	// (0x000289a8) grid_vkb_keypad_pane_ParamLimits

0x7990,	// (0x000289a8) grid_vkb_keypad_pane

0x79b6,	// (0x000289ce) fep_vkb_bottom_pane_g1_ParamLimits

0x79b6,	// (0x000289ce) fep_vkb_bottom_pane_g1

0x79df,	// (0x000289f7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x79df,	// (0x000289f7) grid_vkb_keypad_bottom_left_pane

0x79f4,	// (0x00028a0c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x79f4,	// (0x00028a0c) grid_vkb_keypad_bottom_right_pane

0x7a09,	// (0x00028a21) fep_vkb_top_text_pane_g1

0xe253,	// (0x0002f26b) fep_vkb_top_text_pane_t1

0xe265,	// (0x0002f27d) cell_vkb_side_pane_ParamLimits

0xe265,	// (0x0002f27d) cell_vkb_side_pane

0x7643,	// (0x0002865b) cell_vkb_side_pane_g1

0x7a78,	// (0x00028a90) cell_vkb_keypad_pane_ParamLimits

0x7a78,	// (0x00028a90) cell_vkb_keypad_pane

0x7aed,	// (0x00028b05) cell_vkb_keypad_pane_g1

0x0008,

0xfb24,	// (0x00030b3c) bg_popup_fep_shadow_pane_g

0x7643,	// (0x0002865b) cell_hwr_side_pane_g1

0x7643,	// (0x0002865b) cell_hwr_side_pane_g2

0x7af7,	// (0x00028b0f) cell_vkb_keypad_pane_t1

0xe27b,	// (0x0002f293) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe27b,	// (0x0002f293) cell_vkb_keypad_bottom_left_pane

0xe290,	// (0x0002f2a8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe290,	// (0x0002f2a8) cell_vkb_keypad_bottom_right_pane

0x7643,	// (0x0002865b) cell_vkb_keypad_bottom_left_pane_g1

0x7643,	// (0x0002865b) cell_vkb_keypad_bottom_right_pane_g1

0x7b5b,	// (0x00028b73) cell_vkb_keypad_number_pane_ParamLimits

0x7b5b,	// (0x00028b73) cell_vkb_keypad_number_pane

0x7b7a,	// (0x00028b92) cell_vkb_keypad_number_pane_g1

0x7b84,	// (0x00028b9c) cell_vkb_keypad_number_pane_g2

0x7b8d,	// (0x00028ba5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb16,	// (0x00030b2e) cell_vkb_keypad_number_pane_g

0x7af7,	// (0x00028b0f) cell_vkb_keypad_number_pane_t1

0x7bb1,	// (0x00028bc9) fep_vkb_candidate_pane_g1

0x0001,

0xfb11,	// (0x00030b29) cell_hwr_side_pane_g

0x7bca,	// (0x00028be2) cell_hwr_side_pane_t1

0x2327,	// (0x0002333f) cell_hwr_side_pane_t1_copy1

0x78c1,	// (0x000288d9) cell_hwr_candidate_pane_g1

0x2335,	// (0x0002334d) cell_hwr_candidate_pane_t1

0x7643,	// (0x0002865b) cell_vkb_candidate_pane_g2

0x7c0e,	// (0x00028c26) cell_vkb_candidate_pane_t1

0x20f5,	// (0x0002310d) bg_popup_fep_shadow_pane_ParamLimits

0x20f5,	// (0x0002310d) bg_popup_fep_shadow_pane

0xe0f9,	// (0x0002f111) bg_fep_hwr_top_pane_g4

0x76c3,	// (0x000286db) bg_hwr_side_pane_g1_ParamLimits

0x76c3,	// (0x000286db) bg_hwr_side_pane_g1

0xcea1,	// (0x0002deb9) cell_hwr_side_pane_ParamLimits

0xcea1,	// (0x0002deb9) cell_hwr_side_pane

0x2248,	// (0x00023260) fep_hwr_write_pane_g1_ParamLimits

0x2248,	// (0x00023260) fep_hwr_write_pane_g1

0x2255,	// (0x0002326d) fep_hwr_write_pane_g2_ParamLimits

0x2255,	// (0x0002326d) fep_hwr_write_pane_g2

0x2262,	// (0x0002327a) fep_hwr_write_pane_g3_ParamLimits

0x2262,	// (0x0002327a) fep_hwr_write_pane_g3

0xcec1,	// (0x0002ded9) fep_hwr_write_pane_g4_ParamLimits

0xcec1,	// (0x0002ded9) fep_hwr_write_pane_g4

0x0005,

0xfae3,	// (0x00030afb) fep_hwr_write_pane_g_ParamLimits

0xfae3,	// (0x00030afb) fep_hwr_write_pane_g

0xe0f9,	// (0x0002f111) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe0f9,	// (0x0002f111) bg_fep_hwr_candidate_pane_g2

0x2285,	// (0x0002329d) cell_hwr_candidate_pane_ParamLimits

0x2285,	// (0x0002329d) cell_hwr_candidate_pane

0x22c7,	// (0x000232df) fep_hwr_candidate_pane_g1_ParamLimits

0x7723,	// (0x0002873b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7723,	// (0x0002873b) bg_popup_fep_shadow_pane_cp2

0x78c1,	// (0x000288d9) fep_vkb_top_pane_g4_ParamLimits

0x78c1,	// (0x000288d9) fep_vkb_top_pane_g4

0x7907,	// (0x0002891f) fep_vkb_side_pane_g2_ParamLimits

0x7907,	// (0x0002891f) fep_vkb_side_pane_g2

0xb866,	// (0x0002c87e) list_setting_pane_t4_ParamLimits

0xb866,	// (0x0002c87e) list_setting_pane_t4

0xb900,	// (0x0002c918) list_setting_number_pane_t5_ParamLimits

0xb900,	// (0x0002c918) list_setting_number_pane_t5

0x41bc,	// (0x000251d4) list_double_heading_pane_cp2_ParamLimits

0x41bc,	// (0x000251d4) list_double_heading_pane_cp2

0x3afe,	// (0x00024b16) list_double_heading_pane_g1_cp2_ParamLimits

0x3afe,	// (0x00024b16) list_double_heading_pane_g1_cp2

0x3b0a,	// (0x00024b22) list_double_heading_pane_g2_cp2_ParamLimits

0x3b0a,	// (0x00024b22) list_double_heading_pane_g2_cp2

0x7c1c,	// (0x00028c34) list_double_heading_pane_t1_cp2_ParamLimits

0x7c1c,	// (0x00028c34) list_double_heading_pane_t1_cp2

0x7c32,	// (0x00028c4a) list_double_heading_pane_t2_cp2_ParamLimits

0x7c32,	// (0x00028c4a) list_double_heading_pane_t2_cp2

0xeb58,	// (0x0002fb70) aid_value_unit2

0x0f2c,	// (0x00021f44) popup_preview_fixed_window

0x34ec,	// (0x00024504) bg_popup_preview_window_pane_cp02

0x7c44,	// (0x00028c5c) list_preview_fixed_pane

0x7c8a,	// (0x00028ca2) list_empty_pane_fp_ParamLimits

0x7c8a,	// (0x00028ca2) list_empty_pane_fp

0x7c8a,	// (0x00028ca2) list_single_cale_day_pane_fp_ParamLimits

0x7c8a,	// (0x00028ca2) list_single_cale_day_pane_fp

0x7c8a,	// (0x00028ca2) list_single_graphic_heading_pane_fp_ParamLimits

0x7c8a,	// (0x00028ca2) list_single_graphic_heading_pane_fp

0x7c8a,	// (0x00028ca2) list_single_graphic_pane_fp_ParamLimits

0x7c8a,	// (0x00028ca2) list_single_graphic_pane_fp

0x7c8a,	// (0x00028ca2) list_single_heading_pane_fp_ParamLimits

0x7c8a,	// (0x00028ca2) list_single_heading_pane_fp

0x7c8a,	// (0x00028ca2) list_single_pane_fp_ParamLimits

0x7c8a,	// (0x00028ca2) list_single_pane_fp

0x7c9f,	// (0x00028cb7) list_single_pane_fp_g1_ParamLimits

0x7c9f,	// (0x00028cb7) list_single_pane_fp_g1

0x08be,	// (0x000218d6) list_single_pane_fp_g2_ParamLimits

0x08be,	// (0x000218d6) list_single_pane_fp_g2

0x08ca,	// (0x000218e2) list_single_pane_fp_g3_ParamLimits

0x08ca,	// (0x000218e2) list_single_pane_fp_g3

0x7cab,	// (0x00028cc3) list_single_pane_fp_g4_ParamLimits

0x7cab,	// (0x00028cc3) list_single_pane_fp_g4

0x0003,

0xfb45,	// (0x00030b5d) list_single_pane_fp_g_ParamLimits

0xfb45,	// (0x00030b5d) list_single_pane_fp_g

0x08de,	// (0x000218f6) list_single_pane_fp_t1_ParamLimits

0x08de,	// (0x000218f6) list_single_pane_fp_t1

0x08f5,	// (0x0002190d) list_single_graphic_pane_fp_g1_ParamLimits

0x08f5,	// (0x0002190d) list_single_graphic_pane_fp_g1

0x7c9f,	// (0x00028cb7) list_single_graphic_pane_fp_g2_ParamLimits

0x7c9f,	// (0x00028cb7) list_single_graphic_pane_fp_g2

0x08be,	// (0x000218d6) list_single_graphic_pane_fp_g3_ParamLimits

0x08be,	// (0x000218d6) list_single_graphic_pane_fp_g3

0x08ca,	// (0x000218e2) list_single_graphic_pane_fp_g4_ParamLimits

0x08ca,	// (0x000218e2) list_single_graphic_pane_fp_g4

0x7cab,	// (0x00028cc3) list_single_graphic_pane_fp_g5_ParamLimits

0x7cab,	// (0x00028cc3) list_single_graphic_pane_fp_g5

0x0004,

0xfb4e,	// (0x00030b66) list_single_graphic_pane_fp_g_ParamLimits

0xfb4e,	// (0x00030b66) list_single_graphic_pane_fp_g

0x0901,	// (0x00021919) list_single_graphic_pane_fp_t1_ParamLimits

0x0901,	// (0x00021919) list_single_graphic_pane_fp_t1

0x08f5,	// (0x0002190d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x08f5,	// (0x0002190d) list_single_graphic_heading_pane_fp_g1

0x7c9f,	// (0x00028cb7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7c9f,	// (0x00028cb7) list_single_graphic_heading_pane_fp_g2

0x08be,	// (0x000218d6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x08be,	// (0x000218d6) list_single_graphic_heading_pane_fp_g3

0x08ca,	// (0x000218e2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x08ca,	// (0x000218e2) list_single_graphic_heading_pane_fp_g4

0x7cab,	// (0x00028cc3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7cab,	// (0x00028cc3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb4e,	// (0x00030b66) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb4e,	// (0x00030b66) list_single_graphic_heading_pane_fp_g

0x0917,	// (0x0002192f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0917,	// (0x0002192f) list_single_graphic_heading_pane_fp_t1

0x092d,	// (0x00021945) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x092d,	// (0x00021945) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb59,	// (0x00030b71) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb59,	// (0x00030b71) list_single_graphic_heading_pane_fp_t

0x093f,	// (0x00021957) list_single_cale_day_pane_fp_g1_ParamLimits

0x093f,	// (0x00021957) list_single_cale_day_pane_fp_g1

0x7cb7,	// (0x00028ccf) list_single_cale_day_pane_fp_g2_ParamLimits

0x7cb7,	// (0x00028ccf) list_single_cale_day_pane_fp_g2

0x0977,	// (0x0002198f) list_single_cale_day_pane_fp_g3_ParamLimits

0x0977,	// (0x0002198f) list_single_cale_day_pane_fp_g3

0x099f,	// (0x000219b7) list_single_cale_day_pane_fp_g4_ParamLimits

0x099f,	// (0x000219b7) list_single_cale_day_pane_fp_g4

0x09c3,	// (0x000219db) list_single_cale_day_pane_fp_g5_ParamLimits

0x09c3,	// (0x000219db) list_single_cale_day_pane_fp_g5

0x0004,

0xfb5e,	// (0x00030b76) list_single_cale_day_pane_fp_g_ParamLimits

0xfb5e,	// (0x00030b76) list_single_cale_day_pane_fp_g

0x09e7,	// (0x000219ff) list_single_cale_day_pane_fp_t1_ParamLimits

0x09e7,	// (0x000219ff) list_single_cale_day_pane_fp_t1

0x0a0d,	// (0x00021a25) list_single_cale_day_pane_fp_t2_ParamLimits

0x0a0d,	// (0x00021a25) list_single_cale_day_pane_fp_t2

0x0a26,	// (0x00021a3e) list_single_cale_day_pane_fp_t3_ParamLimits

0x0a26,	// (0x00021a3e) list_single_cale_day_pane_fp_t3

0x0002,

0xfb69,	// (0x00030b81) list_single_cale_day_pane_fp_t_ParamLimits

0xfb69,	// (0x00030b81) list_single_cale_day_pane_fp_t

0x7c9f,	// (0x00028cb7) list_empty_pane_fp_g1_ParamLimits

0x7c9f,	// (0x00028cb7) list_empty_pane_fp_g1

0x0a3f,	// (0x00021a57) list_empty_pane_fp_t1

0x0a4d,	// (0x00021a65) list_empty_pane_fp_t2

0x0001,

0xfb70,	// (0x00030b88) list_empty_pane_fp_t

0x7c9f,	// (0x00028cb7) list_single_heading_pane_fp_g1_ParamLimits

0x7c9f,	// (0x00028cb7) list_single_heading_pane_fp_g1

0x08be,	// (0x000218d6) list_single_heading_pane_fp_g2_ParamLimits

0x08be,	// (0x000218d6) list_single_heading_pane_fp_g2

0x08ca,	// (0x000218e2) list_single_heading_pane_fp_g3_ParamLimits

0x08ca,	// (0x000218e2) list_single_heading_pane_fp_g3

0x0002,

0xfb75,	// (0x00030b8d) list_single_heading_pane_fp_g_ParamLimits

0xfb75,	// (0x00030b8d) list_single_heading_pane_fp_g

0x0a5b,	// (0x00021a73) list_single_heading_pane_fp_t1_ParamLimits

0x0a5b,	// (0x00021a73) list_single_heading_pane_fp_t1

0x0a6d,	// (0x00021a85) list_single_heading_pane_fp_t2_ParamLimits

0x0a6d,	// (0x00021a85) list_single_heading_pane_fp_t2

0x0001,

0xfb7c,	// (0x00030b94) list_single_heading_pane_fp_t_ParamLimits

0xfb7c,	// (0x00030b94) list_single_heading_pane_fp_t

0x3d02,	// (0x00024d1a) aid_size_cell_fast

0x345c,	// (0x00024474) soft_indicator_pane_cp1_t1

0x3d3f,	// (0x00024d57) cell_app_pane_cp2_ParamLimits

0x3d3f,	// (0x00024d57) cell_app_pane_cp2

0x2117,	// (0x0002312f) fep_hwr_candidate_drop_down_list_pane

0xe107,	// (0x0002f11f) fep_hwr_candidate_pane_g3_ParamLimits

0xe107,	// (0x0002f11f) fep_hwr_candidate_pane_g3

0xe114,	// (0x0002f12c) fep_hwr_candidate_pane_g4_ParamLimits

0xe114,	// (0x0002f12c) fep_hwr_candidate_pane_g4

0x0002,

0xfaf0,	// (0x00030b08) fep_hwr_candidate_pane_g_ParamLimits

0xfaf0,	// (0x00030b08) fep_hwr_candidate_pane_g

0x77a8,	// (0x000287c0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x77a8,	// (0x000287c0) fep_vkb_candidate_drop_down_list_pane

0x7bb9,	// (0x00028bd1) fep_vkb_candidate_pane_g3

0x7bc1,	// (0x00028bd9) fep_vkb_candidate_pane_g4

0x0002,

0xfb1d,	// (0x00030b35) fep_vkb_candidate_pane_g

0x78c1,	// (0x000288d9) cell_hwr_candidate_pane_g1_ParamLimits

0x7cc3,	// (0x00028cdb) cell_hwr_candidate_pane_g3_ParamLimits

0x7cc3,	// (0x00028cdb) cell_hwr_candidate_pane_g3

0x7ce4,	// (0x00028cfc) cell_hwr_candidate_pane_g4_ParamLimits

0x7ce4,	// (0x00028cfc) cell_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x00030b4f) cell_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x00030b4f) cell_hwr_candidate_pane_g

0x7bd8,	// (0x00028bf0) cell_vkb_candidate_pane_g3_ParamLimits

0x7bd8,	// (0x00028bf0) cell_vkb_candidate_pane_g3

0x7bf3,	// (0x00028c0b) cell_vkb_candidate_pane_g4_ParamLimits

0x7bf3,	// (0x00028c0b) cell_vkb_candidate_pane_g4

0x7d05,	// (0x00028d1d) cell_app_pane_cp2_g1_ParamLimits

0x7d05,	// (0x00028d1d) cell_app_pane_cp2_g1

0x7d23,	// (0x00028d3b) cell_app_pane_cp2_g2_ParamLimits

0x7d23,	// (0x00028d3b) cell_app_pane_cp2_g2

0x0001,

0xfb81,	// (0x00030b99) cell_app_pane_cp2_g_ParamLimits

0xfb81,	// (0x00030b99) cell_app_pane_cp2_g

0x7d2f,	// (0x00028d47) cell_app_pane_cp2_t1_ParamLimits

0x7d2f,	// (0x00028d47) cell_app_pane_cp2_t1

0x3af0,	// (0x00024b08) grid_highlight_pane_cp1_ParamLimits

0x3af0,	// (0x00024b08) grid_highlight_pane_cp1

0x2353,	// (0x0002336b) cell_hwr_candidate_pane_cp1_ParamLimits

0x2353,	// (0x0002336b) cell_hwr_candidate_pane_cp1

0x78c1,	// (0x000288d9) fep_hwr_candidate_drop_down_list_pane_g1

0x7d41,	// (0x00028d59) fep_hwr_candidate_drop_down_list_pane_g2

0x7d4e,	// (0x00028d66) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb86,	// (0x00030b9e) fep_hwr_candidate_drop_down_list_pane_g

0x2372,	// (0x0002338a) fep_hwr_candidate_drop_down_list_scroll_pane

0x237b,	// (0x00023393) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x237b,	// (0x00023393) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2388,	// (0x000233a0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2388,	// (0x000233a0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2395,	// (0x000233ad) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2395,	// (0x000233ad) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7bd8,	// (0x00028bf0) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bd8,	// (0x00028bf0) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7bf3,	// (0x00028c0b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7bf3,	// (0x00028c0b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x23a2,	// (0x000233ba) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x23a2,	// (0x000233ba) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x23bd,	// (0x000233d5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x23bd,	// (0x000233d5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x23d8,	// (0x000233f0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x23d8,	// (0x000233f0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8d,	// (0x00030ba5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8d,	// (0x00030ba5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d5b,	// (0x00028d73) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d5b,	// (0x00028d73) cell_vkb_candidate_pane_cp1

0x78c1,	// (0x000288d9) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x78c1,	// (0x000288d9) fep_vkb_candidate_drop_down_list_pane_g1

0x7d41,	// (0x00028d59) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d41,	// (0x00028d59) fep_vkb_candidate_drop_down_list_pane_g2

0x7d4e,	// (0x00028d66) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7d4e,	// (0x00028d66) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb86,	// (0x00030b9e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb86,	// (0x00030b9e) fep_vkb_candidate_drop_down_list_pane_g

0x7d7b,	// (0x00028d93) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7d7b,	// (0x00028d93) fep_vkb_candidate_drop_down_list_scroll_pane

0x7d88,	// (0x00028da0) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d88,	// (0x00028da0) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7d95,	// (0x00028dad) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d95,	// (0x00028dad) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7da1,	// (0x00028db9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7da1,	// (0x00028db9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7cc3,	// (0x00028cdb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7cc3,	// (0x00028cdb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7ce4,	// (0x00028cfc) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ce4,	// (0x00028cfc) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7dad,	// (0x00028dc5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7dad,	// (0x00028dc5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7dce,	// (0x00028de6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7dce,	// (0x00028de6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7def,	// (0x00028e07) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7def,	// (0x00028e07) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9e,	// (0x00030bb6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9e,	// (0x00030bb6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbfcb,	// (0x0002cfe3) title_pane_g1_ParamLimits

0xbfde,	// (0x0002cff6) title_pane_g2_ParamLimits

0xf527,	// (0x0003053f) title_pane_g_ParamLimits

0x4175,	// (0x0002518d) aid_call2_pane

0x417d,	// (0x00025195) aid_call_pane

0x4185,	// (0x0002519d) popup_clock_analogue_window_g1

0x4185,	// (0x0002519d) popup_clock_analogue_window_g2

0x129d,	// (0x000222b5) popup_clock_analogue_window_g3

0x12a6,	// (0x000222be) popup_clock_analogue_window_g4

0xeb6a,	// (0x0002fb82) popup_clock_analogue_window_g5

0x0004,

0xf6d1,	// (0x000306e9) popup_clock_analogue_window_g

0x12ae,	// (0x000222c6) popup_clock_analogue_window_t1

0x12bc,	// (0x000222d4) clock_digital_number_pane_ParamLimits

0x12bc,	// (0x000222d4) clock_digital_number_pane

0x12c8,	// (0x000222e0) clock_digital_number_pane_cp02_ParamLimits

0x12c8,	// (0x000222e0) clock_digital_number_pane_cp02

0x12d4,	// (0x000222ec) clock_digital_number_pane_cp03_ParamLimits

0x12d4,	// (0x000222ec) clock_digital_number_pane_cp03

0x12e0,	// (0x000222f8) clock_digital_number_pane_cp04_ParamLimits

0x12e0,	// (0x000222f8) clock_digital_number_pane_cp04

0x12ec,	// (0x00022304) clock_digital_separator_pane_ParamLimits

0x12ec,	// (0x00022304) clock_digital_separator_pane

0x12f8,	// (0x00022310) popup_clock_digital_window_t1_ParamLimits

0x12f8,	// (0x00022310) popup_clock_digital_window_t1

0xeb6a,	// (0x0002fb82) clock_digital_number_pane_g1

0xeb6a,	// (0x0002fb82) clock_digital_number_pane_g2

0x0001,

0xf6dc,	// (0x000306f4) clock_digital_number_pane_g

0xeb6a,	// (0x0002fb82) clock_digital_separator_pane_g1

0xeb6a,	// (0x0002fb82) clock_digital_separator_pane_g2

0x0001,

0xf6dc,	// (0x000306f4) clock_digital_separator_pane_g

0xd606,	// (0x0002e61e) aid_fill_nsta_ParamLimits

0xd73c,	// (0x0002e754) indicator_nsta_pane_ParamLimits

0x4ddb,	// (0x00025df3) popup_clock_analogue_window

0x4ddb,	// (0x00025df3) popup_clock_digital_window

0xdf5f,	// (0x0002ef77) grid_indicator_nsta_pane_ParamLimits

0x704e,	// (0x00028066) clock_nsta_pane_t2

0x0001,

0xfa70,	// (0x00030a88) clock_nsta_pane_t

0x1261,	// (0x00022279) aid_size_max_handle

0x126b,	// (0x00022283) aid_size_min_handle

0x47b6,	// (0x000257ce) editor_scroll_pane

0x7e0a,	// (0x00028e22) ex_editor_pane

0x3c70,	// (0x00024c88) scroll_pane_cp13

0x3a8f,	// (0x00024aa7) scroll_pane_cp14

0x41b4,	// (0x000251cc) scroll_pane_cp36

0xc4a6,	// (0x0002d4be) list_single_graphic_hl_pane_cp2_ParamLimits

0xc4a6,	// (0x0002d4be) list_single_graphic_hl_pane_cp2

0xdd9c,	// (0x0002edb4) list_single_graphic_hl_pane_ParamLimits

0xdd9c,	// (0x0002edb4) list_single_graphic_hl_pane

0x0a83,	// (0x00021a9b) aid_size_min_hl_cp1

0x7e12,	// (0x00028e2a) list_highlight_pane_cp34_ParamLimits

0x7e12,	// (0x00028e2a) list_highlight_pane_cp34

0x7e23,	// (0x00028e3b) list_single_graphic_hl_pane_g1_ParamLimits

0x7e23,	// (0x00028e3b) list_single_graphic_hl_pane_g1

0xf4fd,	// (0x00030515) list_single_graphic_hl_pane_g2_ParamLimits

0xf4fd,	// (0x00030515) list_single_graphic_hl_pane_g2

0xf4fd,	// (0x00030515) list_single_graphic_hl_pane_g3_ParamLimits

0xf4fd,	// (0x00030515) list_single_graphic_hl_pane_g3

0xf4d3,	// (0x000304eb) list_single_graphic_hl_pane_g4_ParamLimits

0xf4d3,	// (0x000304eb) list_single_graphic_hl_pane_g4

0xbc1a,	// (0x0002cc32) list_single_graphic_hl_pane_g5_ParamLimits

0xbc1a,	// (0x0002cc32) list_single_graphic_hl_pane_g5

0x0004,

0xfbaf,	// (0x00030bc7) list_single_graphic_hl_pane_g_ParamLimits

0xfbaf,	// (0x00030bc7) list_single_graphic_hl_pane_g

0xbc2e,	// (0x0002cc46) list_single_graphic_hl_pane_t1_ParamLimits

0xbc2e,	// (0x0002cc46) list_single_graphic_hl_pane_t1

0x7e30,	// (0x00028e48) aid_size_min_hl_cp2

0x7e39,	// (0x00028e51) list_highlight_pane_cp34_cp2_ParamLimits

0x7e39,	// (0x00028e51) list_highlight_pane_cp34_cp2

0x7e23,	// (0x00028e3b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e23,	// (0x00028e3b) list_single_graphic_hl_pane_g1_cp2

0x7e46,	// (0x00028e5e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7e46,	// (0x00028e5e) list_single_graphic_hl_pane_g2_cp2

0x7e52,	// (0x00028e6a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7e52,	// (0x00028e6a) list_single_graphic_hl_pane_g3_cp2

0x7e60,	// (0x00028e78) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7e60,	// (0x00028e78) list_single_graphic_hl_pane_g4_cp2

0x7e6c,	// (0x00028e84) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e6c,	// (0x00028e84) list_single_graphic_hl_pane_g5_cp2

0xc63c,	// (0x0002d654) control_pane_g4_ParamLimits

0xc63c,	// (0x0002d654) control_pane_g4

0x4ada,	// (0x00025af2) bg_popup_sub_pane_cp10_ParamLimits

0x764d,	// (0x00028665) list_choice_list_pane_ParamLimits

0x765c,	// (0x00028674) scroll_pane_cp23

0x34ec,	// (0x00024504) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c44,	// (0x00028c5c) list_preview_fixed_pane_ParamLimits

0x7c5a,	// (0x00028c72) list_preview_fixed_pane_cp_ParamLimits

0x7c5a,	// (0x00028c72) list_preview_fixed_pane_cp

0x7c66,	// (0x00028c7e) popup_preview_fixed_window_g1_ParamLimits

0x7c66,	// (0x00028c7e) popup_preview_fixed_window_g1

0x7c72,	// (0x00028c8a) popup_preview_fixed_window_g2_ParamLimits

0x7c72,	// (0x00028c8a) popup_preview_fixed_window_g2

0x0002,

0xfb3e,	// (0x00030b56) popup_preview_fixed_window_g_ParamLimits

0xfb3e,	// (0x00030b56) popup_preview_fixed_window_g

0x11d5,	// (0x000221ed) aid_navi_side_left_pane_ParamLimits

0x11ea,	// (0x00022202) aid_navi_side_right_pane_ParamLimits

0x1202,	// (0x0002221a) navi_icon_pane_stacon_ParamLimits

0x1216,	// (0x0002222e) navi_navi_pane_stacon_ParamLimits

0x1202,	// (0x0002221a) navi_text_pane_stacon_ParamLimits

0xeb60,	// (0x0002fb78) main_text_info_pane

0x7e96,	// (0x00028eae) listscroll_text_info_pane

0x7e9e,	// (0x00028eb6) list_text_info_pane_ParamLimits

0x7e9e,	// (0x00028eb6) list_text_info_pane

0x7ead,	// (0x00028ec5) scroll_pane_cp24_ParamLimits

0x7ead,	// (0x00028ec5) scroll_pane_cp24

0xe2ab,	// (0x0002f2c3) list_text_info_pane_t1_ParamLimits

0xe2ab,	// (0x0002f2c3) list_text_info_pane_t1

0xc781,	// (0x0002d799) popup_fast_swap2_window_ParamLimits

0xc781,	// (0x0002d799) popup_fast_swap2_window

0x7efc,	// (0x00028f14) aid_size_cell_fast2

0xeb60,	// (0x0002fb78) bg_popup_window_pane_cp17

0x5464,	// (0x0002647c) heading_pane_cp2

0x7f06,	// (0x00028f1e) listscroll_fast2_pane

0x7f0e,	// (0x00028f26) grid_fast2_pane

0x7f18,	// (0x00028f30) listscroll_fast2_pane_g1

0x7f20,	// (0x00028f38) listscroll_fast2_pane_g2

0x0001,

0xfbba,	// (0x00030bd2) listscroll_fast2_pane_g

0x3c70,	// (0x00024c88) scroll_pane_cp26

0x7f2a,	// (0x00028f42) cell_fast2_pane_ParamLimits

0x7f2a,	// (0x00028f42) cell_fast2_pane

0x7f3f,	// (0x00028f57) cell_fast2_pane_g1

0x7f48,	// (0x00028f60) cell_fast2_pane_g2

0x7f51,	// (0x00028f69) cell_fast2_pane_g3

0x0002,

0xfbbf,	// (0x00030bd7) cell_fast2_pane_g

0x384c,	// (0x00024864) grid_highlight_pane_cp9

0x3861,	// (0x00024879) main_eswt_pane_ParamLimits

0x3861,	// (0x00024879) main_eswt_pane

0x7ec2,	// (0x00028eda) list_single_text_info_pane

0x7f59,	// (0x00028f71) eswt_ctrl_button_pane

0x7f59,	// (0x00028f71) eswt_ctrl_canvas_pane

0x7f61,	// (0x00028f79) eswt_ctrl_combo_pane

0x7f59,	// (0x00028f71) eswt_ctrl_default_pane

0x7f59,	// (0x00028f71) eswt_ctrl_label_pane

0x7f69,	// (0x00028f81) eswt_ctrl_wait_pane

0x7f71,	// (0x00028f89) eswt_shell_pane

0xeb60,	// (0x0002fb78) listscroll_eswt_app_pane

0x7f91,	// (0x00028fa9) popup_eswt_tasktip_window_ParamLimits

0x7f91,	// (0x00028fa9) popup_eswt_tasktip_window

0x5078,	// (0x00026090) bg_popup_window_pane_cp18

0x7fa2,	// (0x00028fba) eswt_control_pane_g1_ParamLimits

0x7fa2,	// (0x00028fba) eswt_control_pane_g1

0x7faf,	// (0x00028fc7) eswt_control_pane_g2_ParamLimits

0x7faf,	// (0x00028fc7) eswt_control_pane_g2

0x7fbc,	// (0x00028fd4) eswt_control_pane_g3_ParamLimits

0x7fbc,	// (0x00028fd4) eswt_control_pane_g3

0x7fc9,	// (0x00028fe1) eswt_control_pane_g4_ParamLimits

0x7fc9,	// (0x00028fe1) eswt_control_pane_g4

0x0003,

0xfbc6,	// (0x00030bde) eswt_control_pane_g_ParamLimits

0xfbc6,	// (0x00030bde) eswt_control_pane_g

0x3af0,	// (0x00024b08) bg_button_pane_ParamLimits

0x3af0,	// (0x00024b08) bg_button_pane

0x3861,	// (0x00024879) common_borders_pane_copy2_ParamLimits

0x3861,	// (0x00024879) common_borders_pane_copy2

0x7fd6,	// (0x00028fee) control_button_pane_g1_ParamLimits

0x7fd6,	// (0x00028fee) control_button_pane_g1

0x7fe2,	// (0x00028ffa) control_button_pane_g2_ParamLimits

0x7fe2,	// (0x00028ffa) control_button_pane_g2

0x7fee,	// (0x00029006) control_button_pane_g3_ParamLimits

0x7fee,	// (0x00029006) control_button_pane_g3

0x0002,

0xfbcf,	// (0x00030be7) control_button_pane_g_ParamLimits

0xfbcf,	// (0x00030be7) control_button_pane_g

0x8002,	// (0x0002901a) control_button_pane_t1

0x8010,	// (0x00029028) control_button_pane_t2

0x0001,

0xfbd6,	// (0x00030bee) control_button_pane_t

0x5004,	// (0x0002601c) bg_button_pane_g1

0x500c,	// (0x00026024) bg_button_pane_g2

0x5014,	// (0x0002602c) bg_button_pane_g3

0x501c,	// (0x00026034) bg_button_pane_g4

0x5024,	// (0x0002603c) bg_button_pane_g5

0x502c,	// (0x00026044) bg_button_pane_g6

0x5034,	// (0x0002604c) bg_button_pane_g7

0x503c,	// (0x00026054) bg_button_pane_g8

0x5044,	// (0x0002605c) bg_button_pane_g9

0x0008,

0xf83a,	// (0x00030852) bg_button_pane_g

0x7608,	// (0x00028620) common_borders_pane_ParamLimits

0x7608,	// (0x00028620) common_borders_pane

0x7fa2,	// (0x00028fba) eswt_control_pane_g1_copy1_ParamLimits

0x7fa2,	// (0x00028fba) eswt_control_pane_g1_copy1

0x7faf,	// (0x00028fc7) eswt_control_pane_g2_copy1_ParamLimits

0x7faf,	// (0x00028fc7) eswt_control_pane_g2_copy1

0x7fbc,	// (0x00028fd4) eswt_control_pane_g3_copy1_ParamLimits

0x7fbc,	// (0x00028fd4) eswt_control_pane_g3_copy1

0x7fc9,	// (0x00028fe1) eswt_control_pane_g4_copy1_ParamLimits

0x7fc9,	// (0x00028fe1) eswt_control_pane_g4_copy1

0x7643,	// (0x0002865b) bg_eswt_ctrl_canvas_pane_g1

0x7608,	// (0x00028620) common_borders_pane_cp2_ParamLimits

0x7608,	// (0x00028620) common_borders_pane_cp2

0x7608,	// (0x00028620) common_borders_pane_cp3_ParamLimits

0x7608,	// (0x00028620) common_borders_pane_cp3

0x801e,	// (0x00029036) separator_horizontal_pane

0x8026,	// (0x0002903e) separator_vertical_pane

0x7fa2,	// (0x00028fba) eswt_control_pane_g1_copy2_ParamLimits

0x7fa2,	// (0x00028fba) eswt_control_pane_g1_copy2

0x7faf,	// (0x00028fc7) eswt_control_pane_g2_copy2_ParamLimits

0x7faf,	// (0x00028fc7) eswt_control_pane_g2_copy2

0x7fbc,	// (0x00028fd4) eswt_control_pane_g3_copy2_ParamLimits

0x7fbc,	// (0x00028fd4) eswt_control_pane_g3_copy2

0x7fc9,	// (0x00028fe1) eswt_control_pane_g4_copy2_ParamLimits

0x7fc9,	// (0x00028fe1) eswt_control_pane_g4_copy2

0xeb60,	// (0x0002fb78) common_borders_pane_cp4

0x802f,	// (0x00029047) separator_horizontal_pane_g1

0x8038,	// (0x00029050) separator_horizontal_pane_g2

0x8041,	// (0x00029059) separator_horizontal_pane_g3

0x0002,

0xfbdb,	// (0x00030bf3) separator_horizontal_pane_g

0x7fa2,	// (0x00028fba) eswt_control_pane_g1_copy3_ParamLimits

0x7fa2,	// (0x00028fba) eswt_control_pane_g1_copy3

0x7faf,	// (0x00028fc7) eswt_control_pane_g2_copy3_ParamLimits

0x7faf,	// (0x00028fc7) eswt_control_pane_g2_copy3

0x7fbc,	// (0x00028fd4) eswt_control_pane_g3_copy3_ParamLimits

0x7fbc,	// (0x00028fd4) eswt_control_pane_g3_copy3

0x7fc9,	// (0x00028fe1) eswt_control_pane_g4_copy3_ParamLimits

0x7fc9,	// (0x00028fe1) eswt_control_pane_g4_copy3

0xeb60,	// (0x0002fb78) common_borders_pane_cp5

0x804a,	// (0x00029062) separator_vertical_pane_g1

0x8053,	// (0x0002906b) separator_vertical_pane_g2

0x805c,	// (0x00029074) separator_vertical_pane_g3

0x0002,

0xfbe2,	// (0x00030bfa) separator_vertical_pane_g

0x7fa2,	// (0x00028fba) eswt_control_pane_g1_copy4_ParamLimits

0x7fa2,	// (0x00028fba) eswt_control_pane_g1_copy4

0x7faf,	// (0x00028fc7) eswt_control_pane_g2_copy4_ParamLimits

0x7faf,	// (0x00028fc7) eswt_control_pane_g2_copy4

0x7fbc,	// (0x00028fd4) eswt_control_pane_g3_copy4_ParamLimits

0x7fbc,	// (0x00028fd4) eswt_control_pane_g3_copy4

0x7fc9,	// (0x00028fe1) eswt_control_pane_g4_copy4_ParamLimits

0x7fc9,	// (0x00028fe1) eswt_control_pane_g4_copy4

0x8065,	// (0x0002907d) eswt_ctrl_combo_button_pane

0x806d,	// (0x00029085) eswt_ctrl_input_pane

0x8075,	// (0x0002908d) popup_choice_list_window_cp70

0x807d,	// (0x00029095) eswt_ctrl_input_pane_t1

0xeb60,	// (0x0002fb78) input_focus_pane_cp70

0x7608,	// (0x00028620) bg_button_pane_cp70_ParamLimits

0x7608,	// (0x00028620) bg_button_pane_cp70

0x808b,	// (0x000290a3) eswt_ctrl_combo_button_pane_g1

0x8093,	// (0x000290ab) wait_bar_pane_cp70

0x5078,	// (0x00026090) bg_popup_window_pane_cp70_ParamLimits

0x5078,	// (0x00026090) bg_popup_window_pane_cp70

0x809b,	// (0x000290b3) popup_eswt_tasktip_window_t1

0x80b1,	// (0x000290c9) wait_bar_pane_cp71_ParamLimits

0x80b1,	// (0x000290c9) wait_bar_pane_cp71

0x80bd,	// (0x000290d5) grid_eswt_app_pane

0x3f97,	// (0x00024faf) scroll_pane_cp70

0xe2c6,	// (0x0002f2de) cell_eswt_app_pane_ParamLimits

0xe2c6,	// (0x0002f2de) cell_eswt_app_pane

0xe2f0,	// (0x0002f308) cell_eswt_app_pane_g1_ParamLimits

0xe2f0,	// (0x0002f308) cell_eswt_app_pane_g1

0xe31f,	// (0x0002f337) cell_eswt_app_pane_g2_ParamLimits

0xe31f,	// (0x0002f337) cell_eswt_app_pane_g2

0x0001,

0xfbe9,	// (0x00030c01) cell_eswt_app_pane_g_ParamLimits

0xfbe9,	// (0x00030c01) cell_eswt_app_pane_g

0xe348,	// (0x0002f360) cell_eswt_app_pane_t1_ParamLimits

0xe348,	// (0x0002f360) cell_eswt_app_pane_t1

0x8180,	// (0x00029198) grid_highlight_pane_cp70_ParamLimits

0x8180,	// (0x00029198) grid_highlight_pane_cp70

0x467e,	// (0x00025696) set_content_pane_g1

0xd5c3,	// (0x0002e5db) status_small_volume_pane

0xced6,	// (0x0002deee) status_small_volume_pane_g1

0xcede,	// (0x0002def6) volume_small2_pane

0xcee7,	// (0x0002deff) volume_small2_pane_g1

0xcef0,	// (0x0002df08) volume_small2_pane_g2

0xcef9,	// (0x0002df11) volume_small2_pane_g3

0xcf02,	// (0x0002df1a) volume_small2_pane_g4

0xcf0b,	// (0x0002df23) volume_small2_pane_g5

0xcf14,	// (0x0002df2c) volume_small2_pane_g6

0xcf1d,	// (0x0002df35) volume_small2_pane_g7

0xcf26,	// (0x0002df3e) volume_small2_pane_g8

0xcf2f,	// (0x0002df47) volume_small2_pane_g9

0xcf38,	// (0x0002df50) volume_small2_pane_g10

0x0009,

0xfbee,	// (0x00030c06) volume_small2_pane_g

0x7a09,	// (0x00028a21) fep_vkb_top_text_pane_g1_ParamLimits

0xe253,	// (0x0002f26b) fep_vkb_top_text_pane_t1_ParamLimits

0x7c7e,	// (0x00028c96) popup_preview_fixed_window_g3_ParamLimits

0x7c7e,	// (0x00028c96) popup_preview_fixed_window_g3

0xcdaa,	// (0x0002ddc2) popup_toolbar_trans_pane

0xdc36,	// (0x0002ec4e) aid_height_set_list_ParamLimits

0x63dd,	// (0x000273f5) aid_size_parent_ParamLimits

0x4ada,	// (0x00025af2) list_highlight_pane_cp2_ParamLimits

0x467e,	// (0x00025696) set_content_pane_g1_ParamLimits

0xddae,	// (0x0002edc6) list_single_image_pane_ParamLimits

0xddae,	// (0x0002edc6) list_single_image_pane

0xe37a,	// (0x0002f392) aid_size_cell_image_ParamLimits

0xe37a,	// (0x0002f392) aid_size_cell_image

0xe387,	// (0x0002f39f) grid_single_image_pane_ParamLimits

0xe387,	// (0x0002f39f) grid_single_image_pane

0x677c,	// (0x00027794) list_single_image_pane_g1_ParamLimits

0x677c,	// (0x00027794) list_single_image_pane_g1

0x81a5,	// (0x000291bd) list_single_image_pane_g2_ParamLimits

0x81a5,	// (0x000291bd) list_single_image_pane_g2

0x0001,

0xfc03,	// (0x00030c1b) list_single_image_pane_g_ParamLimits

0xfc03,	// (0x00030c1b) list_single_image_pane_g

0x81b9,	// (0x000291d1) list_single_image_pane_t1_ParamLimits

0x81b9,	// (0x000291d1) list_single_image_pane_t1

0xe393,	// (0x0002f3ab) cell_image_list_pane_ParamLimits

0xe393,	// (0x0002f3ab) cell_image_list_pane

0xe3a7,	// (0x0002f3bf) cell_image_list_pane_g1

0xe3b0,	// (0x0002f3c8) cell_image_list_pane_g2

0x0001,

0xfc08,	// (0x00030c20) cell_image_list_pane_g

0x81f5,	// (0x0002920d) aid_size_cell_tb_trans_pane

0x3af0,	// (0x00024b08) bg_tb_trans_pane

0x8207,	// (0x0002921f) grid_tb_trans_pane

0x5004,	// (0x0002601c) bg_tb_trans_pane_g1

0x500c,	// (0x00026024) bg_tb_trans_pane_g2

0x5014,	// (0x0002602c) bg_tb_trans_pane_g3

0x501c,	// (0x00026034) bg_tb_trans_pane_g4

0x5024,	// (0x0002603c) bg_tb_trans_pane_g5

0x503c,	// (0x00026054) bg_tb_trans_pane_g6

0x5044,	// (0x0002605c) bg_tb_trans_pane_g7

0x502c,	// (0x00026044) bg_tb_trans_pane_g8

0x5034,	// (0x0002604c) bg_tb_trans_pane_g9

0x0008,

0xfc0d,	// (0x00030c25) bg_tb_trans_pane_g

0x821b,	// (0x00029233) cell_toolbar_trans_pane_ParamLimits

0x821b,	// (0x00029233) cell_toolbar_trans_pane

0x7643,	// (0x0002865b) cell_toolbar_trans_pane_g1

0xe016,	// (0x0002f02e) list_form2_midp_pane_t1

0xe024,	// (0x0002f03c) list_form2_midp_pane_t2

0x0001,

0xfab6,	// (0x00030ace) list_form2_midp_pane_t

0x723b,	// (0x00028253) scroll_pane_cp51_ParamLimits

0x73f7,	// (0x0002840f) form2_midp_wait_pane_g1

0x7400,	// (0x00028418) form2_midp_wait_pane_g2

0x7409,	// (0x00028421) form2_midp_wait_pane_g3

0x0002,

0xfacb,	// (0x00030ae3) form2_midp_wait_pane_g

0x3263,	// (0x0002427b) list_highlight_pane_cp21_ParamLimits

0x7455,	// (0x0002846d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7464,	// (0x0002847c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x04a3,	// (0x000214bb) list_single_2graphic_im_pane_ParamLimits

0x04a3,	// (0x000214bb) list_single_2graphic_im_pane

0x8241,	// (0x00029259) list_single_2graphic_im_pane_g1_ParamLimits

0x8241,	// (0x00029259) list_single_2graphic_im_pane_g1

0x8252,	// (0x0002926a) list_single_2graphic_im_pane_g2_ParamLimits

0x8252,	// (0x0002926a) list_single_2graphic_im_pane_g2

0x825e,	// (0x00029276) list_single_2graphic_im_pane_g3_ParamLimits

0x825e,	// (0x00029276) list_single_2graphic_im_pane_g3

0x0003,

0xfc20,	// (0x00030c38) list_single_2graphic_im_pane_g_ParamLimits

0xfc20,	// (0x00030c38) list_single_2graphic_im_pane_g

0x827e,	// (0x00029296) list_single_2graphic_im_pane_t1_ParamLimits

0x827e,	// (0x00029296) list_single_2graphic_im_pane_t1

0x7c8a,	// (0x00028ca2) list_single_graphic_2heading_pane_fp_ParamLimits

0x7c8a,	// (0x00028ca2) list_single_graphic_2heading_pane_fp

0x08f5,	// (0x0002190d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x08f5,	// (0x0002190d) list_single_graphic_2heading_pane_fp_g1

0x7c9f,	// (0x00028cb7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7c9f,	// (0x00028cb7) list_single_graphic_2heading_pane_fp_g2

0x08be,	// (0x000218d6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x08be,	// (0x000218d6) list_single_graphic_2heading_pane_fp_g3

0x08ca,	// (0x000218e2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x08ca,	// (0x000218e2) list_single_graphic_2heading_pane_fp_g4

0x7cab,	// (0x00028cc3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7cab,	// (0x00028cc3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb4e,	// (0x00030b66) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb4e,	// (0x00030b66) list_single_graphic_2heading_pane_fp_g

0x0ace,	// (0x00021ae6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0ace,	// (0x00021ae6) list_single_graphic_2heading_pane_fp_t1

0x092d,	// (0x00021945) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x092d,	// (0x00021945) list_single_graphic_2heading_pane_fp_t2

0x0ae4,	// (0x00021afc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0ae4,	// (0x00021afc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc29,	// (0x00030c41) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc29,	// (0x00030c41) list_single_graphic_2heading_pane_fp_t

0x76cf,	// (0x000286e7) fep_hwr_write_pane_g5_ParamLimits

0x76cf,	// (0x000286e7) fep_hwr_write_pane_g5

0x76db,	// (0x000286f3) fep_hwr_write_pane_g6_ParamLimits

0x76db,	// (0x000286f3) fep_hwr_write_pane_g6

0x7f71,	// (0x00028f89) eswt_shell_pane_ParamLimits

0x5078,	// (0x00026090) bg_popup_window_pane_cp18_ParamLimits

0x5464,	// (0x0002647c) heading_pane_cp70

0x809b,	// (0x000290b3) popup_eswt_tasktip_window_t1_ParamLimits

0xd661,	// (0x0002e679) aid_touch_tab_arrow_left

0xd677,	// (0x0002e68f) aid_touch_tab_arrow_right

0xbff6,	// (0x0002d00e) title_pane_g3_ParamLimits

0xbff6,	// (0x0002d00e) title_pane_g3

0x3aaf,	// (0x00024ac7) set_value_pane_g1

0xcdaa,	// (0x0002ddc2) popup_toolbar_trans_pane_ParamLimits

0x81f5,	// (0x0002920d) aid_size_cell_tb_trans_pane_ParamLimits

0x3af0,	// (0x00024b08) bg_tb_trans_pane_ParamLimits

0x8207,	// (0x0002921f) grid_tb_trans_pane_ParamLimits

0x34ec,	// (0x00024504) cont_note_pane_ParamLimits

0x34ec,	// (0x00024504) cont_note_pane

0x3861,	// (0x00024879) cont_snote2_single_text_pane_ParamLimits

0x3861,	// (0x00024879) cont_snote2_single_text_pane

0x3861,	// (0x00024879) cont_snote2_single_graphic_pane_ParamLimits

0x3861,	// (0x00024879) cont_snote2_single_graphic_pane

0x5693,	// (0x000266ab) cont_note_wait_pane_ParamLimits

0x5693,	// (0x000266ab) cont_note_wait_pane

0x5693,	// (0x000266ab) cont_note_image_pane_ParamLimits

0x5693,	// (0x000266ab) cont_note_image_pane

0x82af,	// (0x000292c7) popup_note2_window_g1_ParamLimits

0x82af,	// (0x000292c7) popup_note2_window_g1

0x82e0,	// (0x000292f8) popup_note2_window_t1_ParamLimits

0x82e0,	// (0x000292f8) popup_note2_window_t1

0x8325,	// (0x0002933d) popup_note2_window_t2_ParamLimits

0x8325,	// (0x0002933d) popup_note2_window_t2

0x836a,	// (0x00029382) popup_note2_window_t3_ParamLimits

0x836a,	// (0x00029382) popup_note2_window_t3

0x83af,	// (0x000293c7) popup_note2_window_t4_ParamLimits

0x83af,	// (0x000293c7) popup_note2_window_t4

0x3570,	// (0x00024588) popup_note2_window_t5_ParamLimits

0x3570,	// (0x00024588) popup_note2_window_t5

0x0004,

0xfc35,	// (0x00030c4d) popup_note2_window_t_ParamLimits

0xfc35,	// (0x00030c4d) popup_note2_window_t

0x83de,	// (0x000293f6) popup_note2_image_window_g1_ParamLimits

0x83de,	// (0x000293f6) popup_note2_image_window_g1

0x83ea,	// (0x00029402) popup_note2_image_window_g2_ParamLimits

0x83ea,	// (0x00029402) popup_note2_image_window_g2

0x0001,

0xfc40,	// (0x00030c58) popup_note2_image_window_g_ParamLimits

0xfc40,	// (0x00030c58) popup_note2_image_window_g

0x83fc,	// (0x00029414) popup_note2_image_window_t1_ParamLimits

0x83fc,	// (0x00029414) popup_note2_image_window_t1

0x8414,	// (0x0002942c) popup_note2_image_window_t2_ParamLimits

0x8414,	// (0x0002942c) popup_note2_image_window_t2

0x842c,	// (0x00029444) popup_note2_image_window_t3_ParamLimits

0x842c,	// (0x00029444) popup_note2_image_window_t3

0x0002,

0xfc45,	// (0x00030c5d) popup_note2_image_window_t_ParamLimits

0xfc45,	// (0x00030c5d) popup_note2_image_window_t

0x56a1,	// (0x000266b9) popup_note2_wait_window_g1_ParamLimits

0x56a1,	// (0x000266b9) popup_note2_wait_window_g1

0x8448,	// (0x00029460) popup_note2_wait_window_g2_ParamLimits

0x8448,	// (0x00029460) popup_note2_wait_window_g2

0x56b9,	// (0x000266d1) popup_note2_wait_window_g3_ParamLimits

0x56b9,	// (0x000266d1) popup_note2_wait_window_g3

0x0002,

0xfc4c,	// (0x00030c64) popup_note2_wait_window_g_ParamLimits

0xfc4c,	// (0x00030c64) popup_note2_wait_window_g

0x8454,	// (0x0002946c) popup_note2_wait_window_t1_ParamLimits

0x8454,	// (0x0002946c) popup_note2_wait_window_t1

0x8472,	// (0x0002948a) popup_note2_wait_window_t2_ParamLimits

0x8472,	// (0x0002948a) popup_note2_wait_window_t2

0x8490,	// (0x000294a8) popup_note2_wait_window_t3_ParamLimits

0x8490,	// (0x000294a8) popup_note2_wait_window_t3

0x84a2,	// (0x000294ba) popup_note2_wait_window_t4_ParamLimits

0x84a2,	// (0x000294ba) popup_note2_wait_window_t4

0x0003,

0xfc53,	// (0x00030c6b) popup_note2_wait_window_t_ParamLimits

0xfc53,	// (0x00030c6b) popup_note2_wait_window_t

0x84b4,	// (0x000294cc) wait_bar2_pane_ParamLimits

0x84b4,	// (0x000294cc) wait_bar2_pane

0x84cc,	// (0x000294e4) popup_snote2_single_text_window_g1_ParamLimits

0x84cc,	// (0x000294e4) popup_snote2_single_text_window_g1

0x84f4,	// (0x0002950c) popup_snote2_single_text_window_t1_ParamLimits

0x84f4,	// (0x0002950c) popup_snote2_single_text_window_t1

0x8540,	// (0x00029558) popup_snote2_single_text_window_t2_ParamLimits

0x8540,	// (0x00029558) popup_snote2_single_text_window_t2

0x858c,	// (0x000295a4) popup_snote2_single_text_window_t3_ParamLimits

0x858c,	// (0x000295a4) popup_snote2_single_text_window_t3

0x85cd,	// (0x000295e5) popup_snote2_single_text_window_t4_ParamLimits

0x85cd,	// (0x000295e5) popup_snote2_single_text_window_t4

0x8603,	// (0x0002961b) popup_snote2_single_text_window_t5_ParamLimits

0x8603,	// (0x0002961b) popup_snote2_single_text_window_t5

0x0004,

0xfc5c,	// (0x00030c74) popup_snote2_single_text_window_t_ParamLimits

0xfc5c,	// (0x00030c74) popup_snote2_single_text_window_t

0x862e,	// (0x00029646) popup_snote2_single_graphic_window_g1_ParamLimits

0x862e,	// (0x00029646) popup_snote2_single_graphic_window_g1

0x8656,	// (0x0002966e) popup_snote2_single_graphic_window_g2_ParamLimits

0x8656,	// (0x0002966e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc67,	// (0x00030c7f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc67,	// (0x00030c7f) popup_snote2_single_graphic_window_g

0x867e,	// (0x00029696) popup_snote2_single_graphic_window_t1_ParamLimits

0x867e,	// (0x00029696) popup_snote2_single_graphic_window_t1

0x86ca,	// (0x000296e2) popup_snote2_single_graphic_window_t2_ParamLimits

0x86ca,	// (0x000296e2) popup_snote2_single_graphic_window_t2

0x858c,	// (0x000295a4) popup_snote2_single_graphic_window_t3_ParamLimits

0x858c,	// (0x000295a4) popup_snote2_single_graphic_window_t3

0x85cd,	// (0x000295e5) popup_snote2_single_graphic_window_t4_ParamLimits

0x85cd,	// (0x000295e5) popup_snote2_single_graphic_window_t4

0x8603,	// (0x0002961b) popup_snote2_single_graphic_window_t5_ParamLimits

0x8603,	// (0x0002961b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6c,	// (0x00030c84) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6c,	// (0x00030c84) popup_snote2_single_graphic_window_t

0x70fc,	// (0x00028114) clock_nsta_pane_cp2_t1

0x70fc,	// (0x00028114) clock_nsta_pane_cp2_t2

0x0001,

0xfa8c,	// (0x00030aa4) clock_nsta_pane_cp2_t

0x0066,	// (0x0002107e) form_field_data_wide_pane_g1_ParamLimits

0x3afe,	// (0x00024b16) form_field_data_wide_pane_g2_ParamLimits

0x3afe,	// (0x00024b16) form_field_data_wide_pane_g2

0x3b0a,	// (0x00024b22) form_field_data_wide_pane_g3_ParamLimits

0x3b0a,	// (0x00024b22) form_field_data_wide_pane_g3

0x0002,

0xf654,	// (0x0003066c) form_field_data_wide_pane_g_ParamLimits

0xf654,	// (0x0003066c) form_field_data_wide_pane_g

0xdf49,	// (0x0002ef61) grid_touch_3_pane_ParamLimits

0xdf49,	// (0x0002ef61) grid_touch_3_pane

0xe3b9,	// (0x0002f3d1) cell_touch_3_pane_ParamLimits

0xe3b9,	// (0x0002f3d1) cell_touch_3_pane

0x7643,	// (0x0002865b) cell_touch_3_pane_g1

0x7643,	// (0x0002865b) cell_touch_3_pane_g2

0x0001,

0xfb11,	// (0x00030b29) cell_touch_3_pane_g

0x35c8,	// (0x000245e0) cont_query_data_pane

0x35d0,	// (0x000245e8) cont_query_data_pane_cp1

0x8744,	// (0x0002975c) button_value_adjust_pane_cp7

0x874c,	// (0x00029764) query_popup_pane_cp3

0x428e,	// (0x000252a6) bg_popup_sub_pane_cp22_ParamLimits

0x1317,	// (0x0002232f) navi_navi_volume_pane_cp2

0x1332,	// (0x0002234a) popup_side_volume_key_window_g2

0x1341,	// (0x00022359) popup_side_volume_key_window_g3

0x0002,

0xf6ea,	// (0x00030702) popup_side_volume_key_window_g

0x135e,	// (0x00022376) popup_side_volume_key_window_t2

0x0001,

0xf6f1,	// (0x00030709) popup_side_volume_key_window_t

0x4548,	// (0x00025560) popup_side_volume_key_window_ParamLimits

0xb699,	// (0x0002c6b1) list_double_graphic_pane_g4_ParamLimits

0xb699,	// (0x0002c6b1) list_double_graphic_pane_g4

0xbbd0,	// (0x0002cbe8) list_single_2heading_msg_pane_ParamLimits

0xbbd0,	// (0x0002cbe8) list_single_2heading_msg_pane

0xbc44,	// (0x0002cc5c) list_single_2heading_msg_pane_g1_ParamLimits

0xbc44,	// (0x0002cc5c) list_single_2heading_msg_pane_g1

0xbc50,	// (0x0002cc68) list_single_2heading_msg_pane_g2_ParamLimits

0xbc50,	// (0x0002cc68) list_single_2heading_msg_pane_g2

0xbc63,	// (0x0002cc7b) list_single_2heading_msg_pane_g3_ParamLimits

0xbc63,	// (0x0002cc7b) list_single_2heading_msg_pane_g3

0xbc6f,	// (0x0002cc87) list_single_2heading_msg_pane_g4_ParamLimits

0xbc6f,	// (0x0002cc87) list_single_2heading_msg_pane_g4

0x0003,

0xfc77,	// (0x00030c8f) list_single_2heading_msg_pane_g_ParamLimits

0xfc77,	// (0x00030c8f) list_single_2heading_msg_pane_g

0xbc87,	// (0x0002cc9f) list_single_2heading_msg_pane_t1_ParamLimits

0xbc87,	// (0x0002cc9f) list_single_2heading_msg_pane_t1

0xbcaf,	// (0x0002ccc7) list_single_2heading_msg_pane_t2_ParamLimits

0xbcaf,	// (0x0002ccc7) list_single_2heading_msg_pane_t2

0xbd1a,	// (0x0002cd32) list_single_2heading_msg_pane_t3_ParamLimits

0xbd1a,	// (0x0002cd32) list_single_2heading_msg_pane_t3

0x0bc9,	// (0x00021be1) list_single_2heading_msg_pane_t4_ParamLimits

0x0bc9,	// (0x00021be1) list_single_2heading_msg_pane_t4

0x0003,

0xfc80,	// (0x00030c98) list_single_2heading_msg_pane_t_ParamLimits

0xfc80,	// (0x00030c98) list_single_2heading_msg_pane_t

0x31b7,	// (0x000241cf) title_pane_g4_ParamLimits

0x31b7,	// (0x000241cf) title_pane_g4

0x1126,	// (0x0002213e) title_pane_stacon_g3_ParamLimits

0x1126,	// (0x0002213e) title_pane_stacon_g3

0x8272,	// (0x0002928a) list_single_2graphic_im_pane_g4_ParamLimits

0x8272,	// (0x0002928a) list_single_2graphic_im_pane_g4

0x60f2,	// (0x0002710a) popup_side_volume_key_window_cp

0x6923,	// (0x0002793b) main_idle_act2_pane_t1

0x1ca7,	// (0x00022cbf) toolbar_button_pane_g10

0xc352,	// (0x0002d36a) popup_toolbar_window_cp1

0x70ed,	// (0x00028105) clock_nsta_pane_cp_t1

0x70ed,	// (0x00028105) clock_nsta_pane_cp_t2

0x0001,

0xfa87,	// (0x00030a9f) clock_nsta_pane_cp_t

0x1317,	// (0x0002232f) navi_navi_volume_pane_cp2_ParamLimits

0x1326,	// (0x0002233e) popup_side_volume_key_window_g1_ParamLimits

0x1332,	// (0x0002234a) popup_side_volume_key_window_g2_ParamLimits

0x1341,	// (0x00022359) popup_side_volume_key_window_g3_ParamLimits

0xf6ea,	// (0x00030702) popup_side_volume_key_window_g_ParamLimits

0x2103,	// (0x0002311b) fep_hwr_aid_pane

0xe0f9,	// (0x0002f111) bg_fep_hwr_top_pane_g4_ParamLimits

0x769f,	// (0x000286b7) fep_hwr_top_pane_g1_ParamLimits

0x76b1,	// (0x000286c9) fep_hwr_top_pane_g2_ParamLimits

0x21bc,	// (0x000231d4) fep_hwr_top_pane_g3_ParamLimits

0xfadc,	// (0x00030af4) fep_hwr_top_pane_g_ParamLimits

0x21d1,	// (0x000231e9) fep_hwr_top_text_pane_ParamLimits

0x5eb5,	// (0x00026ecd) aid_touch_tab_arrow_arrow_2

0x5ebe,	// (0x00026ed6) aid_touch_tab_arrow_left_2

0x2117,	// (0x0002312f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x214e,	// (0x00023166) fep_hwr_prediction_pane

0x7811,	// (0x00028829) fep_vkb_prediction_pane

0xe233,	// (0x0002f24b) fep_vkb_side_pane_g3_ParamLimits

0xe233,	// (0x0002f24b) fep_vkb_side_pane_g3

0x78c1,	// (0x000288d9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7d41,	// (0x00028d59) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7d4e,	// (0x00028d66) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb86,	// (0x00030b9e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8771,	// (0x00029789) fep_hwr_prediction_pane_g1

0x245e,	// (0x00023476) fep_hwr_prediction_pane_g2

0x2466,	// (0x0002347e) fep_hwr_prediction_pane_g3

0x246e,	// (0x00023486) fep_hwr_prediction_pane_g4

0x0003,

0xfc89,	// (0x00030ca1) fep_hwr_prediction_pane_g

0x8771,	// (0x00029789) fep_vkb_prediction_pane_g1

0x877b,	// (0x00029793) fep_vkb_prediction_pane_g2

0x8783,	// (0x0002979b) fep_vkb_prediction_pane_g3

0x878b,	// (0x000297a3) fep_vkb_prediction_pane_g4

0x0003,

0xfc92,	// (0x00030caa) fep_vkb_prediction_pane_g

0x1f83,	// (0x00022f9b) slider_set_pane_g3

0x1f97,	// (0x00022faf) slider_set_pane_g4

0x1faf,	// (0x00022fc7) slider_set_pane_g5

0x1f83,	// (0x00022f9b) slider_set_pane_g6

0x1fc5,	// (0x00022fdd) slider_set_pane_g7

0x6542,	// (0x0002755a) slider_form_pane_g3

0x654b,	// (0x00027563) slider_form_pane_g4

0x6553,	// (0x0002756b) slider_form_pane_g5

0x6542,	// (0x0002755a) slider_form_pane_g6

0xdd81,	// (0x0002ed99) slider_form_pane_g7

0x6bce,	// (0x00027be6) slider_set_pane_vc_g3

0x6bd7,	// (0x00027bef) slider_set_pane_vc_g4

0x6be0,	// (0x00027bf8) slider_set_pane_vc_g5

0x6bce,	// (0x00027be6) slider_set_pane_vc_g6

0x6be9,	// (0x00027c01) slider_set_pane_vc_g7

0x6dab,	// (0x00027dc3) slider_form_pane_vc_g1

0x6db4,	// (0x00027dcc) slider_form_pane_vc_g2

0x6dbd,	// (0x00027dd5) slider_form_pane_vc_g3

0x6dab,	// (0x00027dc3) slider_form_pane_vc_g4

0x6dc6,	// (0x00027dde) slider_form_pane_vc_g5

0x0004,

0xfa59,	// (0x00030a71) slider_form_pane_vc_g

0xeb60,	// (0x0002fb78) main_idle_act3_pane

0x8793,	// (0x000297ab) ai3_links_pane

0xe401,	// (0x0002f419) popup_ai3_data_window_ParamLimits

0xe401,	// (0x0002f419) popup_ai3_data_window

0xeb60,	// (0x0002fb78) grid_ai3_links_pane

0xe41b,	// (0x0002f433) cell_ai3_links_pane_ParamLimits

0xe41b,	// (0x0002f433) cell_ai3_links_pane

0x87ce,	// (0x000297e6) bg_popup_sub_pane_cp11

0x87db,	// (0x000297f3) cell_ai3_links_pane_g1

0xeb60,	// (0x0002fb78) bg_popup_sub_pane_cp12

0x8800,	// (0x00029818) heading_ai3_data_pane

0x8808,	// (0x00029820) list_ai3_gene_pane

0x8814,	// (0x0002982c) popup_ai3_data_window_g1

0x881c,	// (0x00029834) heading_ai3_data_pane_g1

0x8824,	// (0x0002983c) heading_ai3_data_pane_t1

0x8832,	// (0x0002984a) list_double_ai3_gene_pane_ParamLimits

0x8832,	// (0x0002984a) list_double_ai3_gene_pane

0x883f,	// (0x00029857) list_single_ai3_gene_pane_ParamLimits

0x883f,	// (0x00029857) list_single_ai3_gene_pane

0x7608,	// (0x00028620) list_highlight_pane_cp7_ParamLimits

0x7608,	// (0x00028620) list_highlight_pane_cp7

0x884c,	// (0x00029864) list_single_a13_gene_pane_t1_ParamLimits

0x884c,	// (0x00029864) list_single_a13_gene_pane_t1

0x8863,	// (0x0002987b) list_single_ai3_gene_pane_g1

0x886c,	// (0x00029884) list_single_ai3_gene_pane_g2

0x0001,

0xfc9b,	// (0x00030cb3) list_single_ai3_gene_pane_g

0x8874,	// (0x0002988c) list_double_ai3_gene_pane_g1_ParamLimits

0x8874,	// (0x0002988c) list_double_ai3_gene_pane_g1

0x8880,	// (0x00029898) list_double_ai3_gene_pane_t1_ParamLimits

0x8880,	// (0x00029898) list_double_ai3_gene_pane_t1

0x889c,	// (0x000298b4) list_double_ai3_gene_pane_t2_ParamLimits

0x889c,	// (0x000298b4) list_double_ai3_gene_pane_t2

0x88b2,	// (0x000298ca) list_double_ai3_gene_pane_t3_ParamLimits

0x88b2,	// (0x000298ca) list_double_ai3_gene_pane_t3

0x0002,

0xfca0,	// (0x00030cb8) list_double_ai3_gene_pane_t_ParamLimits

0xfca0,	// (0x00030cb8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0afa,	// (0x00021b12) aid_size_min_col_2

0xe3eb,	// (0x0002f403) aid_size_min_msg_ParamLimits

0xe3eb,	// (0x0002f403) aid_size_min_msg

0xe247,	// (0x0002f25f) fep_vkb_top_text_pane_g2_ParamLimits

0xe247,	// (0x0002f25f) fep_vkb_top_text_pane_g2

0x0001,

0xfb0c,	// (0x00030b24) fep_vkb_top_text_pane_g_ParamLimits

0xfb0c,	// (0x00030b24) fep_vkb_top_text_pane_g

0xeb60,	// (0x0002fb78) main_hc_apps_shell_pane

0x88cf,	// (0x000298e7) grid_hc_apps_pane_ParamLimits

0x88cf,	// (0x000298e7) grid_hc_apps_pane

0x88e1,	// (0x000298f9) list_hc_apps_pane

0x88e9,	// (0x00029901) scroll_pane_cp37_ParamLimits

0x88e9,	// (0x00029901) scroll_pane_cp37

0xe435,	// (0x0002f44d) cell_hc_apps_pane_ParamLimits

0xe435,	// (0x0002f44d) cell_hc_apps_pane

0xe4f3,	// (0x0002f50b) cell_hc_apps_pane_g1_ParamLimits

0xe4f3,	// (0x0002f50b) cell_hc_apps_pane_g1

0x89d3,	// (0x000299eb) cell_hc_apps_pane_g2_ParamLimits

0x89d3,	// (0x000299eb) cell_hc_apps_pane_g2

0x89ef,	// (0x00029a07) cell_hc_apps_pane_g3_ParamLimits

0x89ef,	// (0x00029a07) cell_hc_apps_pane_g3

0x0002,

0xfca7,	// (0x00030cbf) cell_hc_apps_pane_g_ParamLimits

0xfca7,	// (0x00030cbf) cell_hc_apps_pane_g

0xe51f,	// (0x0002f537) cell_hc_apps_pane_t1_ParamLimits

0xe51f,	// (0x0002f537) cell_hc_apps_pane_t1

0x34ec,	// (0x00024504) grid_highlight_pane_cp10_ParamLimits

0x34ec,	// (0x00024504) grid_highlight_pane_cp10

0xe55d,	// (0x0002f575) list_single_hc_apps_pane_ParamLimits

0xe55d,	// (0x0002f575) list_single_hc_apps_pane

0xe58a,	// (0x0002f5a2) list_single_hc_apps_pane_g1

0xbd88,	// (0x0002cda0) list_single_hc_apps_pane_g2

0x0001,

0xfcae,	// (0x00030cc6) list_single_hc_apps_pane_g

0xbda1,	// (0x0002cdb9) list_single_hc_apps_pane_g2_copy1

0xbdbd,	// (0x0002cdd5) list_single_hc_apps_pane_t1

0x3263,	// (0x0002427b) bg_set_opt_pane_cp_ParamLimits

0x104e,	// (0x00022066) setting_slider_pane_t1_ParamLimits

0x1067,	// (0x0002207f) setting_slider_pane_t2_ParamLimits

0x1081,	// (0x00022099) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0003054f) setting_slider_pane_t_ParamLimits

0x1099,	// (0x000220b1) slider_set_pane_ParamLimits

0x15c0,	// (0x000225d8) control_pane_g5_ParamLimits

0x15c0,	// (0x000225d8) control_pane_g5

0x6391,	// (0x000273a9) slider_set_pane_g1_ParamLimits

0x1f77,	// (0x00022f8f) slider_set_pane_g2_ParamLimits

0x1f83,	// (0x00022f9b) slider_set_pane_g3_ParamLimits

0x1f97,	// (0x00022faf) slider_set_pane_g4_ParamLimits

0x1faf,	// (0x00022fc7) slider_set_pane_g5_ParamLimits

0x1f83,	// (0x00022f9b) slider_set_pane_g6_ParamLimits

0x1fc5,	// (0x00022fdd) slider_set_pane_g7_ParamLimits

0xf938,	// (0x00030950) slider_set_pane_g_ParamLimits

0x4629,	// (0x00025641) navi_icon_text_pane_ParamLimits

0xd62a,	// (0x0002e642) aid_fill_nsta_2_ParamLimits

0xd661,	// (0x0002e679) aid_touch_tab_arrow_left_ParamLimits

0xd677,	// (0x0002e68f) aid_touch_tab_arrow_right_ParamLimits

0xd712,	// (0x0002e72a) clock_nsta_pane_ParamLimits

0x5e97,	// (0x00026eaf) navi_icon_pane_g1_ParamLimits

0x5ea3,	// (0x00026ebb) navi_text_pane_t1_ParamLimits

0x71f9,	// (0x00028211) navi_icon_text_pane_g1_ParamLimits

0x7205,	// (0x0002821d) navi_icon_text_pane_t1_ParamLimits

0xe58a,	// (0x0002f5a2) list_single_hc_apps_pane_g1_ParamLimits

0xbd88,	// (0x0002cda0) list_single_hc_apps_pane_g2_ParamLimits

0xfcae,	// (0x00030cc6) list_single_hc_apps_pane_g_ParamLimits

0xbda1,	// (0x0002cdb9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbdbd,	// (0x0002cdd5) list_single_hc_apps_pane_t1_ParamLimits

0xbefb,	// (0x0002cf13) popup_toolbar2_fixed_window_ParamLimits

0xbefb,	// (0x0002cf13) popup_toolbar2_fixed_window

0xcda0,	// (0x0002ddb8) popup_toolbar2_float_window

0xeb60,	// (0x0002fb78) bg_popup_sub_pane_cp27

0x8ac6,	// (0x00029ade) grid_toolbar2_float_pane

0xeb60,	// (0x0002fb78) bg_popup_sub_pane_cp26

0x8ac6,	// (0x00029ade) grid_toolbar2_fixed_pane

0xe5a3,	// (0x0002f5bb) cell_toolbar2_fixed_pane_ParamLimits

0xe5a3,	// (0x0002f5bb) cell_toolbar2_fixed_pane

0xe5bd,	// (0x0002f5d5) cell_toolbar2_fixed_pane_g1

0x8ae7,	// (0x00029aff) toolbar2_fixed_button_pane

0x5004,	// (0x0002601c) toolbar2_fixed_button_pane_g1

0x500c,	// (0x00026024) toolbar2_fixed_button_pane_g2

0x5014,	// (0x0002602c) toolbar2_fixed_button_pane_g3

0x501c,	// (0x00026034) toolbar2_fixed_button_pane_g4

0x5024,	// (0x0002603c) toolbar2_fixed_button_pane_g5

0x502c,	// (0x00026044) toolbar2_fixed_button_pane_g6

0x5034,	// (0x0002604c) toolbar2_fixed_button_pane_g7

0x503c,	// (0x00026054) toolbar2_fixed_button_pane_g8

0x5044,	// (0x0002605c) toolbar2_fixed_button_pane_g9

0x0008,

0xf83a,	// (0x00030852) toolbar2_fixed_button_pane_g

0x8aef,	// (0x00029b07) cell_toolbar2_float_pane_ParamLimits

0x8aef,	// (0x00029b07) cell_toolbar2_float_pane

0x8b00,	// (0x00029b18) cell_toolbar2_float_pane_g1

0x8ae7,	// (0x00029aff) toolbar2_fixed_button_pane_cp

0xe121,	// (0x0002f139) fep_vkb_accented_list_pane_ParamLimits

0xe121,	// (0x0002f139) fep_vkb_accented_list_pane

0x231f,	// (0x00023337) bg_popup_fep_shadow_pane_g9

0x47b6,	// (0x000257ce) bg_popup_fep_shadow_pane_cp3

0x3c57,	// (0x00024c6f) list_accented_list_pane

0x8b09,	// (0x00029b21) list_single_accented_list_pane_ParamLimits

0x8b09,	// (0x00029b21) list_single_accented_list_pane

0x47b6,	// (0x000257ce) list_highlight_pane_cp10

0x8b1a,	// (0x00029b32) list_single_accented_list_pane_t1

0xccca,	// (0x0002dce2) popup_slider_window_ParamLimits

0xccca,	// (0x0002dce2) popup_slider_window

0x8754,	// (0x0002976c) aid_indentation_list_msg

0xe6b4,	// (0x0002f6cc) bg_popup_window_pane_cp19

0x8c46,	// (0x00029c5e) popup_slider_window_g1

0x8c62,	// (0x00029c7a) popup_slider_window_g2

0x8c7e,	// (0x00029c96) popup_slider_window_g3

0x0005,

0xfcb3,	// (0x00030ccb) popup_slider_window_g

0x8ce4,	// (0x00029cfc) popup_slider_window_t1

0x8d58,	// (0x00029d70) small_volume_slider_vertical_pane

0x7643,	// (0x0002865b) small_volume_slider_vertical_pane_g1

0x7643,	// (0x0002865b) small_volume_slider_vertical_pane_g2

0x8d74,	// (0x00029d8c) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc5,	// (0x00030cdd) small_volume_slider_vertical_pane_g

0x0d14,	// (0x00021d2c) area_side_right_pane_ParamLimits

0x0d14,	// (0x00021d2c) area_side_right_pane

0xcf41,	// (0x0002df59) aid_size_side_button_ParamLimits

0xcf41,	// (0x0002df59) aid_size_side_button

0xcf5a,	// (0x0002df72) grid_sctrl_middle_pane_ParamLimits

0xcf5a,	// (0x0002df72) grid_sctrl_middle_pane

0x24a9,	// (0x000234c1) sctrl_sk_bottom_pane

0x24ba,	// (0x000234d2) sctrl_sk_top_pane

0x24cc,	// (0x000234e4) aid_touch_sctrl_top

0x34ec,	// (0x00024504) bg_sctrl_sk_pane_ParamLimits

0x34ec,	// (0x00024504) bg_sctrl_sk_pane

0x24d9,	// (0x000234f1) sctrl_sk_top_pane_g1

0x24e6,	// (0x000234fe) sctrl_sk_top_pane_t1

0x24cc,	// (0x000234e4) aid_touch_sctrl_bottom

0x34ec,	// (0x00024504) bg_sctrl_sk_pane_cp_ParamLimits

0x34ec,	// (0x00024504) bg_sctrl_sk_pane_cp

0x2501,	// (0x00023519) sctrl_sk_bottom_pane_g1

0x24e6,	// (0x000234fe) sctrl_sk_bottom_pane_t1

0xcf79,	// (0x0002df91) cell_sctrl_middle_pane_ParamLimits

0xcf79,	// (0x0002df91) cell_sctrl_middle_pane

0xcf9c,	// (0x0002dfb4) aid_touch_sctrl_middle_ParamLimits

0xcf9c,	// (0x0002dfb4) aid_touch_sctrl_middle

0x34ec,	// (0x00024504) bg_sctrl_middle_pane_ParamLimits

0x34ec,	// (0x00024504) bg_sctrl_middle_pane

0x9af0,	// (0x0002ab08) cell_sctrl_middle_pane_g1_ParamLimits

0x9af0,	// (0x0002ab08) cell_sctrl_middle_pane_g1

0xcfb0,	// (0x0002dfc8) cell_sctrl_middle_pane_g2_ParamLimits

0xcfb0,	// (0x0002dfc8) cell_sctrl_middle_pane_g2

0x0001,

0xfcd1,	// (0x00030ce9) cell_sctrl_middle_pane_g_ParamLimits

0xfcd1,	// (0x00030ce9) cell_sctrl_middle_pane_g

0x5004,	// (0x0002601c) bg_sctrl_middle_pane_g1

0x500c,	// (0x00026024) bg_sctrl_middle_pane_g2

0x5014,	// (0x0002602c) bg_sctrl_middle_pane_g3

0x501c,	// (0x00026034) bg_sctrl_middle_pane_g4

0x5024,	// (0x0002603c) bg_sctrl_middle_pane_g5

0x502c,	// (0x00026044) bg_sctrl_middle_pane_g6

0x5034,	// (0x0002604c) bg_sctrl_middle_pane_g7

0x503c,	// (0x00026054) bg_sctrl_middle_pane_g8

0x0007,

0xfcd6,	// (0x00030cee) bg_sctrl_middle_pane_g

0x5044,	// (0x0002605c) bg_sctrl_middle_pane_g8_copy1

0x5004,	// (0x0002601c) bg_sctrl_sk_pane_g1

0x500c,	// (0x00026024) bg_sctrl_sk_pane_g2

0x5014,	// (0x0002602c) bg_sctrl_sk_pane_g3

0x0008,

0xf83a,	// (0x00030852) bg_sctrl_sk_pane_g

0x3a1f,	// (0x00024a37) aid_size_touch_scroll_bar

0x501c,	// (0x00026034) bg_sctrl_sk_pane_g4

0x5024,	// (0x0002603c) bg_sctrl_sk_pane_g5

0x502c,	// (0x00026044) bg_sctrl_sk_pane_g6

0x5034,	// (0x0002604c) bg_sctrl_sk_pane_g7

0x503c,	// (0x00026054) bg_sctrl_sk_pane_g8

0x5044,	// (0x0002605c) bg_sctrl_sk_pane_g9

0x1762,	// (0x0002277a) popup_fep_china_hwr2_fs_candidate_window

0xc7de,	// (0x0002d7f6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc7de,	// (0x0002d7f6) popup_fep_china_hwr2_fs_control_window

0x78c1,	// (0x000288d9) sctrl_sk_top_pane_g2

0x0001,

0xfccc,	// (0x00030ce4) sctrl_sk_top_pane_g

0xe76c,	// (0x0002f784) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe76c,	// (0x0002f784) aid_fep_china_hwr2_fs_cell

0xe780,	// (0x0002f798) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe780,	// (0x0002f798) bg_popup_fep_shadow_pane_cp4

0xe797,	// (0x0002f7af) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe797,	// (0x0002f7af) bg_popup_fep_shadow_pane_cp5

0xe7a9,	// (0x0002f7c1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7a9,	// (0x0002f7c1) popup_fep_china_hwr2_fs_control_bar_grid

0xe7bd,	// (0x0002f7d5) popup_fep_china_hwr2_fs_control_funtion_grid

0x8dd0,	// (0x00029de8) aid_fep_china_hwr2_fs_candi_cell

0xeb60,	// (0x0002fb78) bg_popup_fep_shadow_pane_cp6

0x8dda,	// (0x00029df2) popup_fep_china_hwr2_fs_candidate_grid

0xe7c5,	// (0x0002f7dd) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe7c5,	// (0x0002f7dd) cell_fep_china_hwr2_fs_funtion_grid

0x7643,	// (0x0002865b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8dfc,	// (0x00029e14) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8dfc,	// (0x00029e14) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8e0a,	// (0x00029e22) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8e0a,	// (0x00029e22) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce7,	// (0x00030cff) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce7,	// (0x00030cff) cell_fep_china_hwr2_fs_funtion_grid_g

0xe7dd,	// (0x0002f7f5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe7dd,	// (0x0002f7f5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe7f2,	// (0x0002f80a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe7f2,	// (0x0002f80a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcec,	// (0x00030d04) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcec,	// (0x00030d04) cell_fep_china_hwr2_fs_funtion_grid_t

0x8e51,	// (0x00029e69) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8e59,	// (0x00029e71) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8e61,	// (0x00029e79) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf1,	// (0x00030d09) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8e69,	// (0x00029e81) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8e69,	// (0x00029e81) cell_fep_china_hwr2_fs_candidate_grid

0x8e82,	// (0x00029e9a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8e8a,	// (0x00029ea2) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7643,	// (0x0002865b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7643,	// (0x0002865b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb11,	// (0x00030b29) cell_fep_china_hwr2_fs_candidate_grid_g

0x8e92,	// (0x00029eaa) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4bfa,	// (0x00025c12) clock_nsta_pane_cp_24_ParamLimits

0x4bfa,	// (0x00025c12) clock_nsta_pane_cp_24

0x4c78,	// (0x00025c90) indicator_nsta_pane_cp_24_ParamLimits

0x4c78,	// (0x00025c90) indicator_nsta_pane_cp_24

0x5d13,	// (0x00026d2b) heading_pane_g1

0x0001,

0xf89f,	// (0x000308b7) heading_pane_g

0x6760,	// (0x00027778) grid_sct_catagory_button_pane

0x679c,	// (0x000277b4) scroll_pane_cp5_ParamLimits

0x7247,	// (0x0002825f) button_value_adjust_pane_cp5_ParamLimits

0x7247,	// (0x0002825f) button_value_adjust_pane_cp5

0x7326,	// (0x0002833e) form2_midp_time_pane_ParamLimits

0x8ea0,	// (0x00029eb8) cell_sct_catagory_button_pane_ParamLimits

0x8ea0,	// (0x00029eb8) cell_sct_catagory_button_pane

0x7608,	// (0x00028620) bg_button_pane_cp01_ParamLimits

0x7608,	// (0x00028620) bg_button_pane_cp01

0x7643,	// (0x0002865b) cell_sct_catagory_button_pane_g1

0xcd43,	// (0x0002dd5b) popup_tb_extension_window

0xe80e,	// (0x0002f826) aid_size_cell_ext_ParamLimits

0xe80e,	// (0x0002f826) aid_size_cell_ext

0x3861,	// (0x00024879) bg_tb_trans_pane_cp1_ParamLimits

0x3861,	// (0x00024879) bg_tb_trans_pane_cp1

0xe834,	// (0x0002f84c) grid_tb_ext_pane_ParamLimits

0xe834,	// (0x0002f84c) grid_tb_ext_pane

0xe86f,	// (0x0002f887) cell_tb_ext_pane_ParamLimits

0xe86f,	// (0x0002f887) cell_tb_ext_pane

0xe897,	// (0x0002f8af) cell_tb_ext_pane_g1_ParamLimits

0xe897,	// (0x0002f8af) cell_tb_ext_pane_g1

0x8f34,	// (0x00029f4c) cell_tb_ext_pane_t1

0x34ec,	// (0x00024504) list_highlight_pane_cp11_ParamLimits

0x34ec,	// (0x00024504) list_highlight_pane_cp11

0xbf10,	// (0x0002cf28) popup_uni_indicator_window_ParamLimits

0xbf10,	// (0x0002cf28) popup_uni_indicator_window

0x3af0,	// (0x00024b08) bg_popup_sub_pane_cp14

0x8f4f,	// (0x00029f67) list_uniindi_pane

0x8f5b,	// (0x00029f73) uniindi_top_pane

0x34ec,	// (0x00024504) bg_uniindi_top_pane

0x8f7a,	// (0x00029f92) uniindi_top_pane_g1

0x8f90,	// (0x00029fa8) uniindi_top_pane_g2

0x0003,

0xfcf8,	// (0x00030d10) uniindi_top_pane_g

0x8fba,	// (0x00029fd2) uniindi_top_pane_t1

0x8fe4,	// (0x00029ffc) list_single_uniindi_pane_ParamLimits

0x8fe4,	// (0x00029ffc) list_single_uniindi_pane

0x7643,	// (0x0002865b) bg_uniindi_top_pane_g1

0x8ff7,	// (0x0002a00f) list_single_uniindi_pane_g1

0x900a,	// (0x0002a022) list_single_uniindi_pane_t1

0xeb60,	// (0x0002fb78) control_bg_pane

0x902f,	// (0x0002a047) bg_sctrl_sk_pane_cp1

0x9038,	// (0x0002a050) bg_sctrl_sk_pane_cp2

0x9041,	// (0x0002a059) control_bg_pane_g1

0x904a,	// (0x0002a062) control_bg_pane_g2

0x0001,

0xfd01,	// (0x00030d19) control_bg_pane_g

0x7091,	// (0x000280a9) cell_indicator_nsta_pane_g1_ParamLimits

0xdf86,	// (0x0002ef9e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa75,	// (0x00030a8d) cell_indicator_nsta_pane_g_ParamLimits

0x08ab,	// (0x000218c3) form2_midp_time_pane_t1_ParamLimits

0x20f5,	// (0x0002310d) main_idle_act4_pane_ParamLimits

0x20f5,	// (0x0002310d) main_idle_act4_pane

0xcd43,	// (0x0002dd5b) popup_tb_extension_window_ParamLimits

0xe856,	// (0x0002f86e) tb_ext_find_pane_ParamLimits

0xe856,	// (0x0002f86e) tb_ext_find_pane

0x9053,	// (0x0002a06b) ai_gene_pane_1_cp1

0x48fd,	// (0x00025915) ai_gene_pane_2_cp1

0x905b,	// (0x0002a073) list_single_idle_plugin_calendar_pane

0x9064,	// (0x0002a07c) list_single_idle_plugin_notification_pane

0x906d,	// (0x0002a085) list_single_idle_plugin_player_pane

0xe8b4,	// (0x0002f8cc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8b4,	// (0x0002f8cc) list_single_idle_plugin_shortcut_pane

0xe8dc,	// (0x0002f8f4) main_idle_act4_pane_t1

0xe8f2,	// (0x0002f90a) main_idle_act4_pane_t2

0x0001,

0xfd06,	// (0x00030d1e) main_idle_act4_pane_t

0xe908,	// (0x0002f920) middle_sk_idle_act4_pane_ParamLimits

0xe908,	// (0x0002f920) middle_sk_idle_act4_pane

0xe924,	// (0x0002f93c) popup_clock_digital_analogue_window_cp2

0xe94c,	// (0x0002f964) shortcut_wheel_idle_act4_pane_ParamLimits

0xe94c,	// (0x0002f964) shortcut_wheel_idle_act4_pane

0x7643,	// (0x0002865b) shortcut_wheel_idle_act4_pane_g1

0x7643,	// (0x0002865b) shortcut_wheel_idle_act4_pane_g2

0x7643,	// (0x0002865b) shortcut_wheel_idle_act4_pane_g3

0x7643,	// (0x0002865b) shortcut_wheel_idle_act4_pane_g4

0x7643,	// (0x0002865b) shortcut_wheel_idle_act4_pane_g5

0x9100,	// (0x0002a118) shortcut_wheel_idle_act4_pane_g6

0x9108,	// (0x0002a120) shortcut_wheel_idle_act4_pane_g7

0x9110,	// (0x0002a128) shortcut_wheel_idle_act4_pane_g8

0x9118,	// (0x0002a130) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0b,	// (0x00030d23) shortcut_wheel_idle_act4_pane_g

0xe0f9,	// (0x0002f111) middle_sk_idle_act4_pane_g1_ParamLimits

0xe0f9,	// (0x0002f111) middle_sk_idle_act4_pane_g1

0xe9c9,	// (0x0002f9e1) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9c9,	// (0x0002f9e1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2e,	// (0x00030d46) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2e,	// (0x00030d46) middle_sk_idle_act4_pane_g

0xe9e1,	// (0x0002f9f9) middle_sk_idle_act4_pane_t1_ParamLimits

0xe9e1,	// (0x0002f9f9) middle_sk_idle_act4_pane_t1

0xea10,	// (0x0002fa28) grid_ai_shortcut_pane_ParamLimits

0xea10,	// (0x0002fa28) grid_ai_shortcut_pane

0xea2d,	// (0x0002fa45) list_highlight_pane_cp16_ParamLimits

0xea2d,	// (0x0002fa45) list_highlight_pane_cp16

0xea3a,	// (0x0002fa52) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea3a,	// (0x0002fa52) list_single_idle_plugin_shortcut_pane_g1

0xea46,	// (0x0002fa5e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea46,	// (0x0002fa5e) list_single_idle_plugin_shortcut_pane_g2

0xea62,	// (0x0002fa7a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea62,	// (0x0002fa7a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd33,	// (0x00030d4b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd33,	// (0x00030d4b) list_single_idle_plugin_shortcut_pane_g

0xea77,	// (0x0002fa8f) cell_ai_shortcut_pane_ParamLimits

0xea77,	// (0x0002fa8f) cell_ai_shortcut_pane

0xea8d,	// (0x0002faa5) cell_ai_shortcut_pane_g1_ParamLimits

0xea8d,	// (0x0002faa5) cell_ai_shortcut_pane_g1

0x9053,	// (0x0002a06b) ai_gene_pane_1_cp2

0x9248,	// (0x0002a260) ai_gene_pane_2_cp2

0x9250,	// (0x0002a268) list_highlight_pane_cp15

0x9259,	// (0x0002a271) list_single_idle_plugin_calendar_pane_g1

0x9250,	// (0x0002a268) list_highlight_pane_cp17

0x9261,	// (0x0002a279) list_single_idle_plugin_calendar_pane_g1_copy1

0x9269,	// (0x0002a281) list_single_idle_plugin_player_pane_g1

0x69c5,	// (0x000279dd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3a,	// (0x00030d52) list_single_idle_plugin_player_pane_g

0x9271,	// (0x0002a289) list_single_idle_plugin_player_pane_t1

0x927f,	// (0x0002a297) list_single_idle_plugin_player_pane_t2

0x928d,	// (0x0002a2a5) list_single_idle_plugin_player_pane_t3

0x929b,	// (0x0002a2b3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3f,	// (0x00030d57) list_single_idle_plugin_player_pane_t

0x92a9,	// (0x0002a2c1) wait_bar_pane_cp15

0x92b1,	// (0x0002a2c9) grid_ai_notification_pane

0x69c5,	// (0x000279dd) list_single_idle_plugin_notification_pane_g1

0xeaaf,	// (0x0002fac7) cell_ai_notification_pane_ParamLimits

0xeaaf,	// (0x0002fac7) cell_ai_notification_pane

0x92c7,	// (0x0002a2df) cell_ai_notification_pane_g1

0x92cf,	// (0x0002a2e7) cell_ai_notification_pane_t1

0xeabc,	// (0x0002fad4) tb_ext_find_button_pane

0xeac4,	// (0x0002fadc) tb_ext_find_pane_g1

0xeacc,	// (0x0002fae4) tb_ext_find_pane_t1

0x4185,	// (0x0002519d) tb_ext_find_button_pane_g1

0x92fb,	// (0x0002a313) tb_ext_find_button_pane_g2

0x0001,

0xfd48,	// (0x00030d60) tb_ext_find_button_pane_g

0xe8dc,	// (0x0002f8f4) main_idle_act4_pane_t1_ParamLimits

0xe8f2,	// (0x0002f90a) main_idle_act4_pane_t2_ParamLimits

0xfd06,	// (0x00030d1e) main_idle_act4_pane_t_ParamLimits

0xe924,	// (0x0002f93c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe93c,	// (0x0002f954) sat_plugin_idle_act4_pane_ParamLimits

0xe93c,	// (0x0002f954) sat_plugin_idle_act4_pane

0xeada,	// (0x0002faf2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeada,	// (0x0002faf2) sat_plugin_idle_act4_pane_t1

0xeaf2,	// (0x0002fb0a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeaf2,	// (0x0002fb0a) sat_plugin_idle_act4_pane_t2

0xeb0a,	// (0x0002fb22) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb0a,	// (0x0002fb22) sat_plugin_idle_act4_pane_t3

0xeb22,	// (0x0002fb3a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb22,	// (0x0002fb3a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4d,	// (0x00030d65) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4d,	// (0x00030d65) sat_plugin_idle_act4_pane_t

0x0eb2,	// (0x00021eca) popup_battery_window_ParamLimits

0x0eb2,	// (0x00021eca) popup_battery_window

0x34ec,	// (0x00024504) bg_popup_sub_pane_cp25_ParamLimits

0x34ec,	// (0x00024504) bg_popup_sub_pane_cp25

0x9350,	// (0x0002a368) popup_battery_window_g1_ParamLimits

0x9350,	// (0x0002a368) popup_battery_window_g1

0x935c,	// (0x0002a374) popup_battery_window_t1_ParamLimits

0x935c,	// (0x0002a374) popup_battery_window_t1

0x936e,	// (0x0002a386) popup_battery_window_t2_ParamLimits

0x936e,	// (0x0002a386) popup_battery_window_t2

0x0001,

0xfd56,	// (0x00030d6e) popup_battery_window_t_ParamLimits

0xfd56,	// (0x00030d6e) popup_battery_window_t

0xc551,	// (0x0002d569) midp_canvas_pane_ParamLimits

0xc5ae,	// (0x0002d5c6) midp_keypad_pane_ParamLimits

0xc5ae,	// (0x0002d5c6) midp_keypad_pane

0x4ada,	// (0x00025af2) main_midp_pane_ParamLimits

0x710b,	// (0x00028123) signal_pane_g2_cp_ParamLimits

0xeb3a,	// (0x0002fb52) aid_size_cell_midp_keypad_ParamLimits

0xeb3a,	// (0x0002fb52) aid_size_cell_midp_keypad

0xeb7e,	// (0x0002fb96) midp_keyp_game_grid_pane_ParamLimits

0xeb7e,	// (0x0002fb96) midp_keyp_game_grid_pane

0xeba5,	// (0x0002fbbd) midp_keyp_rocker_pane_ParamLimits

0xeba5,	// (0x0002fbbd) midp_keyp_rocker_pane

0xebf6,	// (0x0002fc0e) midp_keyp_sk_left_pane_ParamLimits

0xebf6,	// (0x0002fc0e) midp_keyp_sk_left_pane

0xec4a,	// (0x0002fc62) midp_keyp_sk_right_pane_ParamLimits

0xec4a,	// (0x0002fc62) midp_keyp_sk_right_pane

0xeb60,	// (0x0002fb78) bg_button_pane_cp03

0xec9e,	// (0x0002fcb6) midp_keyp_sk_left_pane_g1

0xeb60,	// (0x0002fb78) bg_button_pane_cp04

0xec9e,	// (0x0002fcb6) midp_keyp_sk_right_pane_g1

0x7643,	// (0x0002865b) midp_keyp_rocker_pane_g1

0xeca7,	// (0x0002fcbf) keyp_game_cell_pane_ParamLimits

0xeca7,	// (0x0002fcbf) keyp_game_cell_pane

0xeb60,	// (0x0002fb78) bg_button_pane_cp02

0xeccb,	// (0x0002fce3) keyp_game_cell_pane_g1

0xbeab,	// (0x0002cec3) popup_fep_vkb2_window_ParamLimits

0xbeab,	// (0x0002cec3) popup_fep_vkb2_window

0xcfc2,	// (0x0002dfda) aid_size_cell_vkb2_ParamLimits

0xcfc2,	// (0x0002dfda) aid_size_cell_vkb2

0xcfee,	// (0x0002e006) popup_fep_vkb2_window_g1_ParamLimits

0xcfee,	// (0x0002e006) popup_fep_vkb2_window_g1

0xd03e,	// (0x0002e056) vkb2_area_bottom_pane_ParamLimits

0xd03e,	// (0x0002e056) vkb2_area_bottom_pane

0xd092,	// (0x0002e0aa) vkb2_area_keypad_pane_ParamLimits

0xd092,	// (0x0002e0aa) vkb2_area_keypad_pane

0xd0da,	// (0x0002e0f2) vkb2_area_top_pane_ParamLimits

0xd0da,	// (0x0002e0f2) vkb2_area_top_pane

0xd166,	// (0x0002e17e) vkb2_top_entry_pane_ParamLimits

0xd166,	// (0x0002e17e) vkb2_top_entry_pane

0xd193,	// (0x0002e1ab) vkb2_top_grid_left_pane_ParamLimits

0xd193,	// (0x0002e1ab) vkb2_top_grid_left_pane

0xd1b4,	// (0x0002e1cc) vkb2_top_grid_right_pane_ParamLimits

0xd1b4,	// (0x0002e1cc) vkb2_top_grid_right_pane

0x275e,	// (0x00023776) vkb2_cell_keypad_pane_ParamLimits

0x275e,	// (0x00023776) vkb2_cell_keypad_pane

0xd1fc,	// (0x0002e214) vkb2_area_bottom_grid_pane_ParamLimits

0xd1fc,	// (0x0002e214) vkb2_area_bottom_grid_pane

0xd226,	// (0x0002e23e) vkb2_area_bottom_pane_g1_ParamLimits

0xd226,	// (0x0002e23e) vkb2_area_bottom_pane_g1

0xd24c,	// (0x0002e264) vkb2_area_bottom_pane_g2_ParamLimits

0xd24c,	// (0x0002e264) vkb2_area_bottom_pane_g2

0xd27d,	// (0x0002e295) vkb2_area_bottom_pane_g3_ParamLimits

0xd27d,	// (0x0002e295) vkb2_area_bottom_pane_g3

0x0002,

0xfd5b,	// (0x00030d73) vkb2_area_bottom_pane_g_ParamLimits

0xfd5b,	// (0x00030d73) vkb2_area_bottom_pane_g

0x2908,	// (0x00023920) vkb2_top_cell_left_pane_ParamLimits

0x2908,	// (0x00023920) vkb2_top_cell_left_pane

0xecd4,	// (0x0002fcec) vkb2_top_entry_pane_g1_ParamLimits

0xecd4,	// (0x0002fcec) vkb2_top_entry_pane_g1

0xece2,	// (0x0002fcfa) vkb2_top_entry_pane_t1_ParamLimits

0xece2,	// (0x0002fcfa) vkb2_top_entry_pane_t1

0x951f,	// (0x0002a537) vkb2_top_entry_pane_t2_ParamLimits

0x951f,	// (0x0002a537) vkb2_top_entry_pane_t2

0x9551,	// (0x0002a569) vkb2_top_entry_pane_t3_ParamLimits

0x9551,	// (0x0002a569) vkb2_top_entry_pane_t3

0x0002,

0xfd62,	// (0x00030d7a) vkb2_top_entry_pane_t_ParamLimits

0xfd62,	// (0x00030d7a) vkb2_top_entry_pane_t

0xd2e7,	// (0x0002e2ff) vkb2_top_grid_right_pane_g1_ParamLimits

0xd2e7,	// (0x0002e2ff) vkb2_top_grid_right_pane_g1

0x296b,	// (0x00023983) vkb2_top_grid_right_pane_g2_ParamLimits

0x296b,	// (0x00023983) vkb2_top_grid_right_pane_g2

0x2983,	// (0x0002399b) vkb2_top_grid_right_pane_g3_ParamLimits

0x2983,	// (0x0002399b) vkb2_top_grid_right_pane_g3

0xd2fd,	// (0x0002e315) vkb2_top_grid_right_pane_g4_ParamLimits

0xd2fd,	// (0x0002e315) vkb2_top_grid_right_pane_g4

0x0003,

0xfd69,	// (0x00030d81) vkb2_top_grid_right_pane_g_ParamLimits

0xfd69,	// (0x00030d81) vkb2_top_grid_right_pane_g

0x29b1,	// (0x000239c9) vkb2_top_cell_left_pane_g1

0x29c8,	// (0x000239e0) vkb2_cell_keypad_pane_g1_ParamLimits

0x29c8,	// (0x000239e0) vkb2_cell_keypad_pane_g1

0x9575,	// (0x0002a58d) vkb2_cell_keypad_pane_t1_ParamLimits

0x9575,	// (0x0002a58d) vkb2_cell_keypad_pane_t1

0x29d6,	// (0x000239ee) vkb2_cell_bottom_grid_pane_ParamLimits

0x29d6,	// (0x000239ee) vkb2_cell_bottom_grid_pane

0x2a0f,	// (0x00023a27) vkb2_cell_bottom_grid_pane_g1

0xe96d,	// (0x0002f985) aid_call2_pane_cp02

0xe975,	// (0x0002f98d) aid_call_pane_cp02

0xe97d,	// (0x0002f995) clock_digital_number_pane_cp10

0xe985,	// (0x0002f99d) clock_digital_number_pane_cp11

0xe98d,	// (0x0002f9a5) clock_digital_number_pane_cp12

0xe995,	// (0x0002f9ad) clock_digital_number_pane_cp13

0xe99d,	// (0x0002f9b5) clock_digital_separator_pane_cp10

0x4185,	// (0x0002519d) popup_clock_digital_analogue_window_cp2_g1

0x4185,	// (0x0002519d) popup_clock_digital_analogue_window_cp2_g2

0xe9a5,	// (0x0002f9bd) popup_clock_digital_analogue_window_cp2_g3

0x4185,	// (0x0002519d) popup_clock_digital_analogue_window_cp2_g4

0xe9a5,	// (0x0002f9bd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1e,	// (0x00030d36) popup_clock_digital_analogue_window_cp2_g

0xe9ad,	// (0x0002f9c5) popup_clock_digital_analogue_window_cp2_t1

0xe9bb,	// (0x0002f9d3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd29,	// (0x00030d41) popup_clock_digital_analogue_window_cp2_t

0x7643,	// (0x0002865b) clock_digital_number_pane_cp10_g1

0x7643,	// (0x0002865b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb11,	// (0x00030b29) clock_digital_number_pane_cp10_g

0x7643,	// (0x0002865b) clock_digital_separator_pane_cp10_g1

0x7643,	// (0x0002865b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb11,	// (0x00030b29) clock_digital_separator_pane_cp10_g

0x8f9c,	// (0x00029fb4) uniindi_top_pane_g3

0x8fad,	// (0x00029fc5) uniindi_top_pane_g4

0x27e9,	// (0x00023801) vkb2_row_keypad_pane_ParamLimits

0x27e9,	// (0x00023801) vkb2_row_keypad_pane

0x2a2f,	// (0x00023a47) vkb2_cell_t_keypad_pane_ParamLimits

0x2a2f,	// (0x00023a47) vkb2_cell_t_keypad_pane

0x2a3f,	// (0x00023a57) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2a3f,	// (0x00023a57) vkb2_cell_t_keypad_pane_cp08

0x2a52,	// (0x00023a6a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2a52,	// (0x00023a6a) vkb2_cell_t_keypad_pane_cp09

0x2a66,	// (0x00023a7e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2a66,	// (0x00023a7e) vkb2_cell_t_keypad_pane_cp01

0x2a77,	// (0x00023a8f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2a77,	// (0x00023a8f) vkb2_cell_t_keypad_pane_cp02

0x2a88,	// (0x00023aa0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2a88,	// (0x00023aa0) vkb2_cell_t_keypad_pane_cp03

0x2a99,	// (0x00023ab1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2a99,	// (0x00023ab1) vkb2_cell_t_keypad_pane_cp04

0x2aaa,	// (0x00023ac2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2aaa,	// (0x00023ac2) vkb2_cell_t_keypad_pane_cp05

0x2abb,	// (0x00023ad3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2abb,	// (0x00023ad3) vkb2_cell_t_keypad_pane_cp06

0x2acc,	// (0x00023ae4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2acc,	// (0x00023ae4) vkb2_cell_t_keypad_pane_cp07

0x2add,	// (0x00023af5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2add,	// (0x00023af5) vkb2_cell_t_keypad_pane_cp10

0x78c1,	// (0x000288d9) vkb2_cell_t_keypad_pane_g1

0x958c,	// (0x0002a5a4) vkb2_cell_t_keypad_pane_t1

0xeb60,	// (0x0002fb78) popup_grid_graphic2_window

0xed1b,	// (0x0002fd33) aid_size_cell_graphic2_ParamLimits

0xed1b,	// (0x0002fd33) aid_size_cell_graphic2

0xed59,	// (0x0002fd71) bg_popup_window_pane_cp21_ParamLimits

0xed59,	// (0x0002fd71) bg_popup_window_pane_cp21

0xed67,	// (0x0002fd7f) graphic2_pages_pane_ParamLimits

0xed67,	// (0x0002fd7f) graphic2_pages_pane

0xedbd,	// (0x0002fdd5) grid_graphic2_control_pane_ParamLimits

0xedbd,	// (0x0002fdd5) grid_graphic2_control_pane

0xee05,	// (0x0002fe1d) grid_graphic2_pane_ParamLimits

0xee05,	// (0x0002fe1d) grid_graphic2_pane

0xee8c,	// (0x0002fea4) cell_graphic2_pane

0xeb60,	// (0x0002fb78) main_comp_mode_pane

0x8808,	// (0x00029820) list_ai3_gene_pane_ParamLimits

0xe6b4,	// (0x0002f6cc) bg_popup_window_pane_cp19_ParamLimits

0x8bea,	// (0x00029c02) bg_touch_area_indi_pane_ParamLimits

0x8bea,	// (0x00029c02) bg_touch_area_indi_pane

0x8c00,	// (0x00029c18) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c00,	// (0x00029c18) bg_touch_area_indi_pane_cp01

0x8c16,	// (0x00029c2e) bg_touch_area_indi_pane_cp02_ParamLimits

0x8c16,	// (0x00029c2e) bg_touch_area_indi_pane_cp02

0x8c2c,	// (0x00029c44) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c2c,	// (0x00029c44) bg_touch_area_indi_pane_cp03

0x8c46,	// (0x00029c5e) popup_slider_window_g1_ParamLimits

0x8c62,	// (0x00029c7a) popup_slider_window_g2_ParamLimits

0x8c7e,	// (0x00029c96) popup_slider_window_g3_ParamLimits

0xfcb3,	// (0x00030ccb) popup_slider_window_g_ParamLimits

0x8ce4,	// (0x00029cfc) popup_slider_window_t1_ParamLimits

0x8d58,	// (0x00029d70) small_volume_slider_vertical_pane_ParamLimits

0xee8c,	// (0x0002fea4) cell_graphic2_pane_ParamLimits

0xeee7,	// (0x0002feff) bg_button_pane_cp10_ParamLimits

0xeee7,	// (0x0002feff) bg_button_pane_cp10

0xeefa,	// (0x0002ff12) bg_button_pane_cp11_ParamLimits

0xeefa,	// (0x0002ff12) bg_button_pane_cp11

0xef0d,	// (0x0002ff25) graphic2_pages_pane_g1_ParamLimits

0xef0d,	// (0x0002ff25) graphic2_pages_pane_g1

0xef28,	// (0x0002ff40) graphic2_pages_pane_g2_ParamLimits

0xef28,	// (0x0002ff40) graphic2_pages_pane_g2

0x0001,

0xfd77,	// (0x00030d8f) graphic2_pages_pane_g_ParamLimits

0xfd77,	// (0x00030d8f) graphic2_pages_pane_g

0xef40,	// (0x0002ff58) graphic2_pages_pane_t1_ParamLimits

0xef40,	// (0x0002ff58) graphic2_pages_pane_t1

0xef58,	// (0x0002ff70) cell_graphic2_control_pane_ParamLimits

0xef58,	// (0x0002ff70) cell_graphic2_control_pane

0xef8a,	// (0x0002ffa2) cell_graphic2_pane_g1_ParamLimits

0xef8a,	// (0x0002ffa2) cell_graphic2_pane_g1

0xe107,	// (0x0002f11f) cell_graphic2_pane_g2_ParamLimits

0xe107,	// (0x0002f11f) cell_graphic2_pane_g2

0xef97,	// (0x0002ffaf) cell_graphic2_pane_g3_ParamLimits

0xef97,	// (0x0002ffaf) cell_graphic2_pane_g3

0xe114,	// (0x0002f12c) cell_graphic2_pane_g4_ParamLimits

0xe114,	// (0x0002f12c) cell_graphic2_pane_g4

0xefa4,	// (0x0002ffbc) cell_graphic2_pane_g5_ParamLimits

0xefa4,	// (0x0002ffbc) cell_graphic2_pane_g5

0x0004,

0xfd7c,	// (0x00030d94) cell_graphic2_pane_g_ParamLimits

0xfd7c,	// (0x00030d94) cell_graphic2_pane_g

0xefc1,	// (0x0002ffd9) cell_graphic2_pane_t1_ParamLimits

0xefc1,	// (0x0002ffd9) cell_graphic2_pane_t1

0x5d07,	// (0x00026d1f) grid_highlight_pane_cp11_ParamLimits

0x5d07,	// (0x00026d1f) grid_highlight_pane_cp11

0x34ec,	// (0x00024504) bg_button_pane_cp05

0xf00b,	// (0x00030023) cell_graphic2_control_pane_g1

0x7643,	// (0x0002865b) bg_touch_area_indi_pane_g1

0x9865,	// (0x0002a87d) aid_cmod_rocker_key_size

0x986f,	// (0x0002a887) aid_cmode_itu_key_size

0x9879,	// (0x0002a891) main_cmode_video_pane

0x9883,	// (0x0002a89b) main_comp_mode_itu_pane

0x988f,	// (0x0002a8a7) main_comp_mode_rocker_pane

0x989b,	// (0x0002a8b3) cell_cmode_rocker_pane_ParamLimits

0x989b,	// (0x0002a8b3) cell_cmode_rocker_pane

0x98ad,	// (0x0002a8c5) cell_cmode_itu_pane_ParamLimits

0x98ad,	// (0x0002a8c5) cell_cmode_itu_pane

0x3af0,	// (0x00024b08) bg_button_pane_cp06_ParamLimits

0x3af0,	// (0x00024b08) bg_button_pane_cp06

0x78c1,	// (0x000288d9) cell_cmode_rocker_pane_g1_ParamLimits

0x78c1,	// (0x000288d9) cell_cmode_rocker_pane_g1

0x8dfc,	// (0x00029e14) cell_cmode_rocker_pane_g2_ParamLimits

0x8dfc,	// (0x00029e14) cell_cmode_rocker_pane_g2

0x0001,

0xfd8c,	// (0x00030da4) cell_cmode_rocker_pane_g_ParamLimits

0xfd8c,	// (0x00030da4) cell_cmode_rocker_pane_g

0xeb60,	// (0x0002fb78) bg_button_pane_cp07

0x98c2,	// (0x0002a8da) cell_cmode_itu_pane_g1

0x98cb,	// (0x0002a8e3) cell_cmode_itu_pane_t1

0x98d9,	// (0x0002a8f1) cell_cmode_itu_pane_t2

0x0001,

0xfd91,	// (0x00030da9) cell_cmode_itu_pane_t

0x901f,	// (0x0002a037) aid_touch_ctrl_left

0x9027,	// (0x0002a03f) aid_touch_ctrl_right

0xeb60,	// (0x0002fb78) compa_mode_pane

0xf02f,	// (0x00030047) aid_cmod_rocker_key_size_cp

0xf039,	// (0x00030051) aid_cmode_itu_key_size_cp

0x98fb,	// (0x0002a913) compa_mode_pane_g1

0x9903,	// (0x0002a91b) compa_mode_pane_g2

0x990b,	// (0x0002a923) compa_mode_pane_g3

0x0002,

0xfd96,	// (0x00030dae) compa_mode_pane_g

0xf043,	// (0x0003005b) main_comp_mode_itu_pane_cp

0xf04b,	// (0x00030063) main_comp_mode_rocker_pane_cp

0xf053,	// (0x0003006b) cell_cmode_itu_pane_cp_ParamLimits

0xf053,	// (0x0003006b) cell_cmode_itu_pane_cp

0xf068,	// (0x00030080) cell_cmode_rocker_pane_cp_ParamLimits

0xf068,	// (0x00030080) cell_cmode_rocker_pane_cp

0x3af0,	// (0x00024b08) bg_button_pane_cp06_cp_ParamLimits

0x3af0,	// (0x00024b08) bg_button_pane_cp06_cp

0x78c1,	// (0x000288d9) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x78c1,	// (0x000288d9) cell_cmode_rocker_pane_g1_cp

0x7643,	// (0x0002865b) cell_cmode_rocker_pane_g2_cp

0xeb60,	// (0x0002fb78) bg_button_pane_cp07_cp

0xf07a,	// (0x00030092) cell_cmode_itu_pane_g1_cp

0xf083,	// (0x0003009b) cell_cmode_itu_pane_t1_cp

0xf083,	// (0x0003009b) cell_cmode_itu_pane_t2_cp

0xdd77,	// (0x0002ed8f) settings_code_pane_cp2

0x3263,	// (0x0002427b) bg_popup_window_pane_cp3_ParamLimits

0x36ec,	// (0x00024704) heading_pane_cp3_ParamLimits

0x36fb,	// (0x00024713) listscroll_popup_graphic_pane_ParamLimits

0x2103,	// (0x0002311b) fep_hwr_aid_pane_ParamLimits

0x24cc,	// (0x000234e4) aid_touch_sctrl_top_ParamLimits

0x24d9,	// (0x000234f1) sctrl_sk_top_pane_g1_ParamLimits

0x78c1,	// (0x000288d9) sctrl_sk_top_pane_g2_ParamLimits

0xfccc,	// (0x00030ce4) sctrl_sk_top_pane_g_ParamLimits

0x24e6,	// (0x000234fe) sctrl_sk_top_pane_t1_ParamLimits

0x24cc,	// (0x000234e4) aid_touch_sctrl_bottom_ParamLimits

0x24e6,	// (0x000234fe) sctrl_sk_bottom_pane_t1_ParamLimits

0x8f68,	// (0x00029f80) aid_area_touch_clock

0xd126,	// (0x0002e13e) aid_vkb2_area_top_pane_cell_ParamLimits

0xd126,	// (0x0002e13e) aid_vkb2_area_top_pane_cell

0xd1d5,	// (0x0002e1ed) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd1d5,	// (0x0002e1ed) aid_vkb2_area_bottom_pane_cell

0x94d7,	// (0x0002a4ef) popup_char_count_window

0x9958,	// (0x0002a970) popup_char_count_window_g1

0x9961,	// (0x0002a979) popup_char_count_window_g2

0x996a,	// (0x0002a982) popup_char_count_window_g3

0x0002,

0xfd9d,	// (0x00030db5) popup_char_count_window_g

0x9973,	// (0x0002a98b) popup_char_count_window_t1

0x257f,	// (0x00023597) popup_fep_char_preview_window_ParamLimits

0x257f,	// (0x00023597) popup_fep_char_preview_window

0xd146,	// (0x0002e15e) vkb2_top_candi_pane_ParamLimits

0xd146,	// (0x0002e15e) vkb2_top_candi_pane

0xf091,	// (0x000300a9) cell_vkb2_top_candi_pane_ParamLimits

0xf091,	// (0x000300a9) cell_vkb2_top_candi_pane

0x5693,	// (0x000266ab) bg_popup_fep_char_preview_window_ParamLimits

0x5693,	// (0x000266ab) bg_popup_fep_char_preview_window

0x2af2,	// (0x00023b0a) popup_fep_char_preview_window_t1_ParamLimits

0x2af2,	// (0x00023b0a) popup_fep_char_preview_window_t1

0x99cb,	// (0x0002a9e3) bg_popup_fep_char_preview_window_g1

0x99d3,	// (0x0002a9eb) bg_popup_fep_char_preview_window_g2

0x99db,	// (0x0002a9f3) bg_popup_fep_char_preview_window_g3

0x99e3,	// (0x0002a9fb) bg_popup_fep_char_preview_window_g4

0x99eb,	// (0x0002aa03) bg_popup_fep_char_preview_window_g5

0x99f3,	// (0x0002aa0b) bg_popup_fep_char_preview_window_g6

0x99fb,	// (0x0002aa13) bg_popup_fep_char_preview_window_g7

0x9a03,	// (0x0002aa1b) bg_popup_fep_char_preview_window_g8

0x9a0b,	// (0x0002aa23) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda4,	// (0x00030dbc) bg_popup_fep_char_preview_window_g

0x78c1,	// (0x000288d9) cell_vkb2_top_candi_pane_g1_ParamLimits

0x78c1,	// (0x000288d9) cell_vkb2_top_candi_pane_g1

0x7cc3,	// (0x00028cdb) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7cc3,	// (0x00028cdb) cell_vkb2_top_candi_pane_g2

0x7ce4,	// (0x00028cfc) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7ce4,	// (0x00028cfc) cell_vkb2_top_candi_pane_g3

0x2b34,	// (0x00023b4c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2b34,	// (0x00023b4c) cell_vkb2_top_candi_pane_g4

0x9a13,	// (0x0002aa2b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9a13,	// (0x0002aa2b) cell_vkb2_top_candi_pane_g5

0x8dfc,	// (0x00029e14) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8dfc,	// (0x00029e14) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb9,	// (0x00030dd1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb9,	// (0x00030dd1) cell_vkb2_top_candi_pane_g

0x2b55,	// (0x00023b6d) cell_vkb2_top_candi_pane_t1

0x1f63,	// (0x00022f7b) aid_size_touch_slider_mark_ParamLimits

0x1f63,	// (0x00022f7b) aid_size_touch_slider_mark

0xeda3,	// (0x0002fdbb) grid_graphic2_catg_pane_ParamLimits

0xeda3,	// (0x0002fdbb) grid_graphic2_catg_pane

0xee5f,	// (0x0002fe77) popup_grid_graphic2_window_t1_ParamLimits

0xee5f,	// (0x0002fe77) popup_grid_graphic2_window_t1

0xee75,	// (0x0002fe8d) popup_grid_graphic2_window_t2_ParamLimits

0xee75,	// (0x0002fe8d) popup_grid_graphic2_window_t2

0x0001,

0xfd72,	// (0x00030d8a) popup_grid_graphic2_window_t_ParamLimits

0xfd72,	// (0x00030d8a) popup_grid_graphic2_window_t

0x34ec,	// (0x00024504) bg_button_pane_cp05_ParamLimits

0xf00b,	// (0x00030023) cell_graphic2_control_pane_g1_ParamLimits

0xf0f1,	// (0x00030109) cell_graphic2_catg_pane_ParamLimits

0xf0f1,	// (0x00030109) cell_graphic2_catg_pane

0xeb60,	// (0x0002fb78) bg_button_pane_cp12

0xf103,	// (0x0003011b) cell_graphic2_catg_pane_g1

0x8f34,	// (0x00029f4c) cell_tb_ext_pane_t1_ParamLimits

0x2928,	// (0x00023940) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2928,	// (0x00023940) vkb2_top_cell_right_narrow_pane

0x2940,	// (0x00023958) vkb2_top_cell_right_wide_pane_ParamLimits

0x2940,	// (0x00023958) vkb2_top_cell_right_wide_pane

0x20f5,	// (0x0002310d) bg_vkb2_func_pane_ParamLimits

0x20f5,	// (0x0002310d) bg_vkb2_func_pane

0x29b1,	// (0x000239c9) vkb2_top_cell_left_pane_g1_ParamLimits

0x20f5,	// (0x0002310d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x20f5,	// (0x0002310d) bg_vkb2_fuc_pane_cp03

0x2a0f,	// (0x00023a27) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x500c,	// (0x00026024) bg_vkb2_func_pane_g1

0x5014,	// (0x0002602c) bg_vkb2_func_pane_g2

0x5024,	// (0x0002603c) bg_vkb2_func_pane_g3

0x501c,	// (0x00026034) bg_vkb2_func_pane_g4

0x502c,	// (0x00026044) bg_vkb2_func_pane_g5

0x5034,	// (0x0002604c) bg_vkb2_func_pane_g6

0x503c,	// (0x00026054) bg_vkb2_func_pane_g7

0x5044,	// (0x0002605c) bg_vkb2_func_pane_g8

0x5004,	// (0x0002601c) bg_vkb2_func_pane_g9

0x0008,

0xfdc6,	// (0x00030dde) bg_vkb2_func_pane_g

0x20f5,	// (0x0002310d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x20f5,	// (0x0002310d) bg_vkb2_fuc_pane_cp01

0x29b1,	// (0x000239c9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x29b1,	// (0x000239c9) vkb2_top_cell_right_wide_pane_g1

0x20f5,	// (0x0002310d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x20f5,	// (0x0002310d) bg_vkb2_fuc_pane_cp02

0x2b74,	// (0x00023b8c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2b74,	// (0x00023b8c) vkb2_top_cell_right_narrow_pane_g1

0xe5f6,	// (0x0002f60e) aid_touch_area_decrease_ParamLimits

0xe5f6,	// (0x0002f60e) aid_touch_area_decrease

0xe630,	// (0x0002f648) aid_touch_area_increase_ParamLimits

0xe630,	// (0x0002f648) aid_touch_area_increase

0xe658,	// (0x0002f670) aid_touch_area_mute_ParamLimits

0xe658,	// (0x0002f670) aid_touch_area_mute

0xe680,	// (0x0002f698) aid_touch_area_slider_ParamLimits

0xe680,	// (0x0002f698) aid_touch_area_slider

0xe6c0,	// (0x0002f6d8) popup_slider_window_g4_ParamLimits

0xe6c0,	// (0x0002f6d8) popup_slider_window_g4

0xe6e8,	// (0x0002f700) popup_slider_window_g5_ParamLimits

0xe6e8,	// (0x0002f700) popup_slider_window_g5

0xe71c,	// (0x0002f734) popup_slider_window_g6_ParamLimits

0xe71c,	// (0x0002f734) popup_slider_window_g6

0x8d12,	// (0x00029d2a) popup_slider_window_t2_ParamLimits

0x8d12,	// (0x00029d2a) popup_slider_window_t2

0x0001,

0xfcc0,	// (0x00030cd8) popup_slider_window_t_ParamLimits

0xfcc0,	// (0x00030cd8) popup_slider_window_t

0xe738,	// (0x0002f750) slider_pane_ParamLimits

0xe738,	// (0x0002f750) slider_pane

0x9a4f,	// (0x0002aa67) slider_pane_g1_ParamLimits

0x9a4f,	// (0x0002aa67) slider_pane_g1

0x9a63,	// (0x0002aa7b) slider_pane_g2_ParamLimits

0x9a63,	// (0x0002aa7b) slider_pane_g2

0x9a79,	// (0x0002aa91) slider_pane_g3_ParamLimits

0x9a79,	// (0x0002aa91) slider_pane_g3

0x0003,

0xfdd9,	// (0x00030df1) slider_pane_g_ParamLimits

0xfdd9,	// (0x00030df1) slider_pane_g

0xcd8b,	// (0x0002dda3) popup_tb_float_extension_window_ParamLimits

0xcd8b,	// (0x0002dda3) popup_tb_float_extension_window

0x9aa5,	// (0x0002aabd) aid_size_cell_tb_float_ext

0xeb60,	// (0x0002fb78) bg_popup_sub_window_cp28

0x9ab1,	// (0x0002aac9) grid_tb_float_ext_pane

0x9abb,	// (0x0002aad3) cell_tb_float_ext_pane_ParamLimits

0x9abb,	// (0x0002aad3) cell_tb_float_ext_pane

0x9ad5,	// (0x0002aaed) cell_tb_float_ext_pane_g1

0x9ade,	// (0x0002aaf6) grid_highlight_pane_cp12

0xceb4,	// (0x0002decc) cell_last_hwr_side_pane_ParamLimits

0xceb4,	// (0x0002decc) cell_last_hwr_side_pane

0x7643,	// (0x0002865b) cell_last_hwr_side_pane_g1

0x9ae7,	// (0x0002aaff) cell_last_hwr_side_pane_g2

0x0001,

0xfde2,	// (0x00030dfa) cell_last_hwr_side_pane_g

0xd2b2,	// (0x0002e2ca) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd2b2,	// (0x0002e2ca) vkb2_area_bottom_space_btn_pane

0x78c1,	// (0x000288d9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x958c,	// (0x0002a5a4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2b55,	// (0x00023b6d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2b94,	// (0x00023bac) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2b94,	// (0x00023bac) vkb2_area_bottom_space_btn_pane_g1

0x2bce,	// (0x00023be6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2bce,	// (0x00023be6) vkb2_area_bottom_space_btn_pane_g2

0x2c04,	// (0x00023c1c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2c04,	// (0x00023c1c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde7,	// (0x00030dff) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde7,	// (0x00030dff) vkb2_area_bottom_space_btn_pane_g

0x21aa,	// (0x000231c2) cel_fep_hwr_func_pane_ParamLimits

0x21aa,	// (0x000231c2) cel_fep_hwr_func_pane

0xce89,	// (0x0002dea1) cell_hwr_side_button_pane_ParamLimits

0xce89,	// (0x0002dea1) cell_hwr_side_button_pane

0x8f68,	// (0x00029f80) aid_area_touch_clock_ParamLimits

0x34ec,	// (0x00024504) bg_uniindi_top_pane_ParamLimits

0x8f7a,	// (0x00029f92) uniindi_top_pane_g1_ParamLimits

0x8f90,	// (0x00029fa8) uniindi_top_pane_g2_ParamLimits

0x8f9c,	// (0x00029fb4) uniindi_top_pane_g3_ParamLimits

0x8fad,	// (0x00029fc5) uniindi_top_pane_g4_ParamLimits

0xfcf8,	// (0x00030d10) uniindi_top_pane_g_ParamLimits

0x8fba,	// (0x00029fd2) uniindi_top_pane_t1_ParamLimits

0x34ec,	// (0x00024504) bg_vkb2_func_pane_cp01_ParamLimits

0x34ec,	// (0x00024504) bg_vkb2_func_pane_cp01

0x9af0,	// (0x0002ab08) cel_fep_hwr_func_pane_g1_ParamLimits

0x9af0,	// (0x0002ab08) cel_fep_hwr_func_pane_g1

0x34ec,	// (0x00024504) bg_vkb2_func_pane_cp02_ParamLimits

0x34ec,	// (0x00024504) bg_vkb2_func_pane_cp02

0x9af0,	// (0x0002ab08) cell_hwr_side_button_pane_g1_ParamLimits

0x9af0,	// (0x0002ab08) cell_hwr_side_button_pane_g1

0x4e85,	// (0x00025e9d) status_pane_g4_ParamLimits

0x4e85,	// (0x00025e9d) status_pane_g4

0x4e9f,	// (0x00025eb7) status_pane_t1

0x738f,	// (0x000283a7) form2_midp_gauge_slider_cont_pane

0x7397,	// (0x000283af) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe051,	// (0x0002f069) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe063,	// (0x0002f07b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac4,	// (0x00030adc) form2_midp_gauge_slider_pane_t_ParamLimits

0x73cd,	// (0x000283e5) form2_midp_slider_pane_ParamLimits

0x2547,	// (0x0002355f) aid_size_cell_func_vkb2_ParamLimits

0x2547,	// (0x0002355f) aid_size_cell_func_vkb2

0x9a91,	// (0x0002aaa9) slider_pane_g4_ParamLimits

0x9a91,	// (0x0002aaa9) slider_pane_g4

0xd31b,	// (0x0002e333) form2_midp_gauge_slider_pane_t2_cp01

0xd329,	// (0x0002e341) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd329,	// (0x0002e341) form2_midp_gauge_slider_pane_t3_cp01

0x2c79,	// (0x00023c91) form2_midp_slider_pane_cp01

0xeb60,	// (0x0002fb78) navi_smil_pane

0x9b29,	// (0x0002ab41) navi_smil_pane_g1

0x9b31,	// (0x0002ab49) navi_smil_pane_t1

0x9afe,	// (0x0002ab16) form2_midp_slider_pane_g1

0x9b07,	// (0x0002ab1f) form2_midp_slider_pane_g2

0x9b0f,	// (0x0002ab27) form2_midp_slider_pane_g3

0x9afe,	// (0x0002ab16) form2_midp_slider_pane_g4

0xf10c,	// (0x00030124) form2_midp_slider_pane_g5

0x0004,

0xfdf0,	// (0x00030e08) form2_midp_slider_pane_g

0x2c3e,	// (0x00023c56) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2c3e,	// (0x00023c56) vkb2_area_bottom_space_btn_pane_g4

0xd75d,	// (0x0002e775) lc0_navi_pane_ParamLimits

0xd75d,	// (0x0002e775) lc0_navi_pane

0xd7c7,	// (0x0002e7df) lc0_stat_indi_pane_ParamLimits

0xd7c7,	// (0x0002e7df) lc0_stat_indi_pane

0xd7dc,	// (0x0002e7f4) ls0_title_pane_ParamLimits

0xd7dc,	// (0x0002e7f4) ls0_title_pane

0x3af0,	// (0x00024b08) bg_popup_sub_pane_cp14_ParamLimits

0x8f4f,	// (0x00029f67) list_uniindi_pane_ParamLimits

0x8f5b,	// (0x00029f73) uniindi_top_pane_ParamLimits

0x8ff7,	// (0x0002a00f) list_single_uniindi_pane_g1_ParamLimits

0x900a,	// (0x0002a022) list_single_uniindi_pane_t1_ParamLimits

0xd346,	// (0x0002e35e) lc0_stat_clock_pane_ParamLimits

0xd346,	// (0x0002e35e) lc0_stat_clock_pane

0xf117,	// (0x0003012f) lc0_stat_indi_pane_g1_ParamLimits

0xf117,	// (0x0003012f) lc0_stat_indi_pane_g1

0xf124,	// (0x0003013c) lc0_stat_indi_pane_g2_ParamLimits

0xf124,	// (0x0003013c) lc0_stat_indi_pane_g2

0x0001,

0xfdfb,	// (0x00030e13) lc0_stat_indi_pane_g_ParamLimits

0xfdfb,	// (0x00030e13) lc0_stat_indi_pane_g

0xd353,	// (0x0002e36b) lc0_uni_indicator_pane_ParamLimits

0xd353,	// (0x0002e36b) lc0_uni_indicator_pane

0xf131,	// (0x00030149) ls0_title_pane_g1_ParamLimits

0xf131,	// (0x00030149) ls0_title_pane_g1

0xf145,	// (0x0003015d) ls0_title_pane_t1_ParamLimits

0xf145,	// (0x0003015d) ls0_title_pane_t1

0xd360,	// (0x0002e378) lc0_uni_indicator_pane_g1_ParamLimits

0xd360,	// (0x0002e378) lc0_uni_indicator_pane_g1

0x9ba3,	// (0x0002abbb) lc0_stat_clock_pane_t1

0xeb60,	// (0x0002fb78) main_ai5_pane

0x9bb9,	// (0x0002abd1) ai5_sk_pane_ParamLimits

0x9bb9,	// (0x0002abd1) ai5_sk_pane

0xf17d,	// (0x00030195) cell_ai5_widget_pane_ParamLimits

0xf17d,	// (0x00030195) cell_ai5_widget_pane

0x9c8f,	// (0x0002aca7) aid_size_cell_widget_grid

0x9c9d,	// (0x0002acb5) bg_ai5_widget_pane_ParamLimits

0x9c9d,	// (0x0002acb5) bg_ai5_widget_pane

0x9d19,	// (0x0002ad31) cell_ai5_widget_pane_g2

0x9d2d,	// (0x0002ad45) cell_ai5_widget_pane_g3

0x9d47,	// (0x0002ad5f) cell_ai5_widget_pane_g4

0x9d57,	// (0x0002ad6f) cell_ai5_widget_pane_g5

0x9d67,	// (0x0002ad7f) cell_ai5_widget_pane_g6

0x9d73,	// (0x0002ad8b) cell_ai5_widget_pane_g7

0x9ddf,	// (0x0002adf7) cell_ai5_widget_pane_t1_ParamLimits

0x9ddf,	// (0x0002adf7) cell_ai5_widget_pane_t1

0x9dfc,	// (0x0002ae14) cell_ai5_widget_pane_t2_ParamLimits

0x9dfc,	// (0x0002ae14) cell_ai5_widget_pane_t2

0x9e14,	// (0x0002ae2c) cell_ai5_widget_pane_t3_ParamLimits

0x9e14,	// (0x0002ae2c) cell_ai5_widget_pane_t3

0x9e2c,	// (0x0002ae44) cell_ai5_widget_pane_t4_ParamLimits

0x9e2c,	// (0x0002ae44) cell_ai5_widget_pane_t4

0x9e52,	// (0x0002ae6a) cell_ai5_widget_pane_t5_ParamLimits

0x9e52,	// (0x0002ae6a) cell_ai5_widget_pane_t5

0x9e71,	// (0x0002ae89) cell_ai5_widget_pane_t6_ParamLimits

0x9e71,	// (0x0002ae89) cell_ai5_widget_pane_t6

0x9e83,	// (0x0002ae9b) cell_ai5_widget_pane_t7_ParamLimits

0x9e83,	// (0x0002ae9b) cell_ai5_widget_pane_t7

0x9ea2,	// (0x0002aeba) cell_ai5_widget_pane_t8_ParamLimits

0x9ea2,	// (0x0002aeba) cell_ai5_widget_pane_t8

0x000b,

0xfe1b,	// (0x00030e33) cell_ai5_widget_pane_t_ParamLimits

0xfe1b,	// (0x00030e33) cell_ai5_widget_pane_t

0x9f26,	// (0x0002af3e) grid_ai5_widget_pane

0x3af0,	// (0x00024b08) highlight_cell_ai5_widget_pane_ParamLimits

0x3af0,	// (0x00024b08) highlight_cell_ai5_widget_pane

0xf1e9,	// (0x00030201) ai5_sk_left_pane

0xf1f3,	// (0x0003020b) ai5_sk_middle_pane

0xf1fd,	// (0x00030215) ai5_sk_right_pane

0x9f58,	// (0x0002af70) bg_ai5_widget_pane_g1_ParamLimits

0x9f58,	// (0x0002af70) bg_ai5_widget_pane_g1

0x9f64,	// (0x0002af7c) bg_ai5_widget_pane_g2_ParamLimits

0x9f64,	// (0x0002af7c) bg_ai5_widget_pane_g2

0x9f70,	// (0x0002af88) bg_ai5_widget_pane_g3_ParamLimits

0x9f70,	// (0x0002af88) bg_ai5_widget_pane_g3

0x9f7c,	// (0x0002af94) bg_ai5_widget_pane_g4_ParamLimits

0x9f7c,	// (0x0002af94) bg_ai5_widget_pane_g4

0x9f88,	// (0x0002afa0) bg_ai5_widget_pane_g5_ParamLimits

0x9f88,	// (0x0002afa0) bg_ai5_widget_pane_g5

0x9f94,	// (0x0002afac) bg_ai5_widget_pane_g6_ParamLimits

0x9f94,	// (0x0002afac) bg_ai5_widget_pane_g6

0x9fa0,	// (0x0002afb8) bg_ai5_widget_pane_g7_ParamLimits

0x9fa0,	// (0x0002afb8) bg_ai5_widget_pane_g7

0x9fac,	// (0x0002afc4) bg_ai5_widget_pane_g8_ParamLimits

0x9fac,	// (0x0002afc4) bg_ai5_widget_pane_g8

0x9fb8,	// (0x0002afd0) bg_ai5_widget_pane_g9_ParamLimits

0x9fb8,	// (0x0002afd0) bg_ai5_widget_pane_g9

0x0008,

0xfe34,	// (0x00030e4c) bg_ai5_widget_pane_g_ParamLimits

0xfe34,	// (0x00030e4c) bg_ai5_widget_pane_g

0x9fea,	// (0x0002b002) cell_shortcut_ai5_widget_pane_ParamLimits

0x9fea,	// (0x0002b002) cell_shortcut_ai5_widget_pane

0x47b6,	// (0x000257ce) bg_cell_shortcut_ai5_widget_pane

0x9ffb,	// (0x0002b013) cell_grid_ai5_widget_pane_g1

0x47b6,	// (0x000257ce) highlight_cell_shortcut_ai5_widget_pane

0x5014,	// (0x0002602c) ai5_sk_left_pane_g1

0xa004,	// (0x0002b01c) ai5_sk_left_pane_g2

0xa00c,	// (0x0002b024) ai5_sk_left_pane_g3

0xa014,	// (0x0002b02c) ai5_sk_left_pane_g4

0x0003,

0xfe47,	// (0x00030e5f) ai5_sk_left_pane_g

0xa01c,	// (0x0002b034) ai5_sk_left_pane_t1

0x500c,	// (0x00026024) ai5_sk_right_pane_g1

0xa02a,	// (0x0002b042) ai5_sk_right_pane_g2

0xa032,	// (0x0002b04a) ai5_sk_right_pane_g3

0xa03a,	// (0x0002b052) ai5_sk_right_pane_g4

0x0003,

0xfe50,	// (0x00030e68) ai5_sk_right_pane_g

0xa042,	// (0x0002b05a) ai5_sk_right_pane_t1

0x500c,	// (0x00026024) ai5_sk_middle_pane_g1

0x5014,	// (0x0002602c) ai5_sk_middle_pane_g2

0x502c,	// (0x00026044) ai5_sk_middle_pane_g3

0xa032,	// (0x0002b04a) ai5_sk_middle_pane_g4

0xa00c,	// (0x0002b024) ai5_sk_middle_pane_g5

0xa050,	// (0x0002b068) ai5_sk_middle_pane_g6

0xf207,	// (0x0003021f) ai5_sk_middle_pane_g7

0x0006,

0xfe59,	// (0x00030e71) ai5_sk_middle_pane_g

0xd649,	// (0x0002e661) aid_touch_area_size_lc0_ParamLimits

0xd649,	// (0x0002e661) aid_touch_area_size_lc0

0x2335,	// (0x0002334d) cell_hwr_candidate_pane_t1_ParamLimits

0x4b56,	// (0x00025b6e) aid_touch_navi_pane

0xd8d5,	// (0x0002e8ed) status_dt_navi_pane_ParamLimits

0xd8d5,	// (0x0002e8ed) status_dt_navi_pane

0xd8ed,	// (0x0002e905) status_dt_sta_pane_ParamLimits

0xd8ed,	// (0x0002e905) status_dt_sta_pane

0xf20f,	// (0x00030227) dt_sta_controll_pane

0xf21c,	// (0x00030234) dt_sta_indi_pane

0xf229,	// (0x00030241) dt_sta_title_pane

0x34ec,	// (0x00024504) bg_dt_sta_indi_pane_ParamLimits

0x34ec,	// (0x00024504) bg_dt_sta_indi_pane

0xf23b,	// (0x00030253) dt_sta_battery_pane

0xf243,	// (0x0003025b) dt_sta_indi_pane_g1

0xa0a2,	// (0x0002b0ba) dt_sta_indi_pane_g2

0xa0ab,	// (0x0002b0c3) dt_sta_indi_pane_g3

0x0002,

0xfe68,	// (0x00030e80) dt_sta_indi_pane_g

0xa0b4,	// (0x0002b0cc) dt_sta_signal_pane

0x3af0,	// (0x00024b08) bg_dt_sta_title_pane_ParamLimits

0x3af0,	// (0x00024b08) bg_dt_sta_title_pane

0xa0bd,	// (0x0002b0d5) dt_sta_title_pane_g1

0xa0c5,	// (0x0002b0dd) dt_sta_title_pane_t1_ParamLimits

0xa0c5,	// (0x0002b0dd) dt_sta_title_pane_t1

0xeb60,	// (0x0002fb78) bg_dt_sta_control_pane

0xf24c,	// (0x00030264) dt_sta_controll_pane_g1

0xa0e3,	// (0x0002b0fb) bg_dt_sta_title_pane_g1

0xa0ec,	// (0x0002b104) bg_dt_sta_title_pane_g2

0xa0f5,	// (0x0002b10d) bg_dt_sta_title_pane_g3

0x0002,

0xfe6f,	// (0x00030e87) bg_dt_sta_title_pane_g

0x7643,	// (0x0002865b) bg_dt_sta_indi_pane_g1

0xa0fe,	// (0x0002b116) dt_sta_signal_pane_g1

0xa106,	// (0x0002b11e) dt_sta_signal_pane_g2

0x0001,

0xfe76,	// (0x00030e8e) dt_sta_signal_pane_g

0xa10e,	// (0x0002b126) dt_sta_battery_pane_g1

0xa117,	// (0x0002b12f) dt_sta_battery_pane_t1

0x7643,	// (0x0002865b) bg_dt_sta_control_pane_g1

0x42b0,	// (0x000252c8) fep_china_uni_eep_pane

0x42b8,	// (0x000252d0) fep_china_uni_entry_pane_ParamLimits

0x42c8,	// (0x000252e0) popup_fep_china_uni_window_g1_ParamLimits

0x42d8,	// (0x000252f0) popup_fep_china_uni_window_g2_ParamLimits

0x42d8,	// (0x000252f0) popup_fep_china_uni_window_g2

0x0001,

0xf6f6,	// (0x0003070e) popup_fep_china_uni_window_g_ParamLimits

0xf6f6,	// (0x0003070e) popup_fep_china_uni_window_g

0xa126,	// (0x0002b13e) fep_china_uni_eep_pane_g1

0xa12e,	// (0x0002b146) fep_china_uni_eep_pane_t1

0x9b20,	// (0x0002ab38) aid_touch_area_size_smil_player

0x4cac,	// (0x00025cc4) lc0_clock_pane

0x4e93,	// (0x00025eab) status_pane_g5_ParamLimits

0x4e93,	// (0x00025eab) status_pane_g5

0xc90d,	// (0x0002d925) popup_keymap_window

0x4e51,	// (0x00025e69) status_icon_pane

0x9d2d,	// (0x0002ad45) cell_ai5_widget_pane_g3_ParamLimits

0x9d47,	// (0x0002ad5f) cell_ai5_widget_pane_g4_ParamLimits

0x9d57,	// (0x0002ad6f) cell_ai5_widget_pane_g5_ParamLimits

0x9d7f,	// (0x0002ad97) cell_ai5_widget_pane_g8_ParamLimits

0x9d7f,	// (0x0002ad97) cell_ai5_widget_pane_g8

0x9d93,	// (0x0002adab) cell_ai5_widget_pane_g9_ParamLimits

0x9d93,	// (0x0002adab) cell_ai5_widget_pane_g9

0x9da7,	// (0x0002adbf) cell_ai5_widget_pane_g10_ParamLimits

0x9da7,	// (0x0002adbf) cell_ai5_widget_pane_g10

0xa13d,	// (0x0002b155) status_icon_pane_g1

0xeb60,	// (0x0002fb78) bg_popup_sub_pane_cp13

0xa145,	// (0x0002b15d) popup_keymap_window_t1

0xd5df,	// (0x0002e5f7) control_pane_g6_ParamLimits

0xd5df,	// (0x0002e5f7) control_pane_g6

0xd5ec,	// (0x0002e604) control_pane_g7_ParamLimits

0xd5ec,	// (0x0002e604) control_pane_g7

0xd5f9,	// (0x0002e611) control_pane_g8_ParamLimits

0xd5f9,	// (0x0002e611) control_pane_g8

0xf20f,	// (0x00030227) dt_sta_controll_pane_ParamLimits

0xf21c,	// (0x00030234) dt_sta_indi_pane_ParamLimits

0xf229,	// (0x00030241) dt_sta_title_pane_ParamLimits

0x3a28,	// (0x00024a40) aid_size_touch_scroll_bar_cale

0x0ec6,	// (0x00021ede) popup_discreet_window_ParamLimits

0x0ec6,	// (0x00021ede) popup_discreet_window

0xbef1,	// (0x0002cf09) popup_sk_window

0x5693,	// (0x000266ab) bg_popup_sub_pane_cp28_ParamLimits

0x5693,	// (0x000266ab) bg_popup_sub_pane_cp28

0xa153,	// (0x0002b16b) popup_discreet_window_g1_ParamLimits

0xa153,	// (0x0002b16b) popup_discreet_window_g1

0xa173,	// (0x0002b18b) popup_discreet_window_t1_ParamLimits

0xa173,	// (0x0002b18b) popup_discreet_window_t1

0xa191,	// (0x0002b1a9) popup_discreet_window_t2_ParamLimits

0xa191,	// (0x0002b1a9) popup_discreet_window_t2

0x0002,

0xfe7b,	// (0x00030e93) popup_discreet_window_t_ParamLimits

0xfe7b,	// (0x00030e93) popup_discreet_window_t

0x2cb0,	// (0x00023cc8) popup_sk_window_g1

0x2cba,	// (0x00023cd2) popup_sk_window_g2

0x0001,

0xfe82,	// (0x00030e9a) popup_sk_window_g

0x2cc2,	// (0x00023cda) popup_sk_window_t1

0x2cd0,	// (0x00023ce8) popup_sk_window_t1_copy1

0x9d19,	// (0x0002ad31) cell_ai5_widget_pane_g2_ParamLimits

0x9eb4,	// (0x0002aecc) cell_ai5_widget_pane_t9_ParamLimits

0x9eb4,	// (0x0002aecc) cell_ai5_widget_pane_t9

0xeb60,	// (0x0002fb78) main_fep_fshwr2_pane

0xd387,	// (0x0002e39f) aid_fshwr2_btn_pane

0xd397,	// (0x0002e3af) aid_fshwr2_syb_pane

0xd3ab,	// (0x0002e3c3) aid_fshwr2_txt_pane

0xd3bb,	// (0x0002e3d3) fshwr2_func_candi_pane

0xd3db,	// (0x0002e3f3) fshwr2_hwr_syb_pane

0xd3fd,	// (0x0002e415) fshwr2_icf_pane

0xeb60,	// (0x0002fb78) fshwr2_icf_bg_pane

0xd42d,	// (0x0002e445) fshwr2_icf_pane_t1_ParamLimits

0xd42d,	// (0x0002e445) fshwr2_icf_pane_t1

0x4185,	// (0x0002519d) fshwr2_func_candi_pane_g1

0xf255,	// (0x0003026d) fshwr2_func_candi_row_pane_ParamLimits

0xf255,	// (0x0003026d) fshwr2_func_candi_row_pane

0xd446,	// (0x0002e45e) cell_fshwr2_syb_pane_ParamLimits

0xd446,	// (0x0002e45e) cell_fshwr2_syb_pane

0x9af0,	// (0x0002ab08) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9af0,	// (0x0002ab08) fshwr2_hwr_syb_pane_g1

0xeb60,	// (0x0002fb78) bg_popup_call_pane_cp01

0xd46c,	// (0x0002e484) fshwr2_func_candi_cell_pane_ParamLimits

0xd46c,	// (0x0002e484) fshwr2_func_candi_cell_pane

0x5474,	// (0x0002648c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5474,	// (0x0002648c) fshwr2_func_candi_cell_bg_pane

0xd4b7,	// (0x0002e4cf) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd4b7,	// (0x0002e4cf) fshwr2_func_candi_cell_pane_g1

0xd4ee,	// (0x0002e506) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd4ee,	// (0x0002e506) fshwr2_func_candi_cell_pane_t1

0xeb60,	// (0x0002fb78) bg_button_pane_cp08

0x4ada,	// (0x00025af2) cell_fshwr2_syb_bg_pane

0xd509,	// (0x0002e521) cell_fshwr2_syb_bg_pane_g1

0xd51c,	// (0x0002e534) cell_fshwr2_syb_bg_pane_t1

0x3af0,	// (0x00024b08) main_tmo_pane

0xdba9,	// (0x0002ebc1) uni_indicator_pane_g1_ParamLimits

0xdbbf,	// (0x0002ebd7) uni_indicator_pane_g2_ParamLimits

0xdbd5,	// (0x0002ebed) uni_indicator_pane_g3_ParamLimits

0x61e1,	// (0x000271f9) uni_indicator_pane_g4_ParamLimits

0x61e1,	// (0x000271f9) uni_indicator_pane_g4

0x61f5,	// (0x0002720d) uni_indicator_pane_g5_ParamLimits

0x61f5,	// (0x0002720d) uni_indicator_pane_g5

0x61f5,	// (0x0002720d) uni_indicator_pane_g6_ParamLimits

0x61f5,	// (0x0002720d) uni_indicator_pane_g6

0xf8f5,	// (0x0003090d) uni_indicator_pane_g_ParamLimits

0xe5d2,	// (0x0002f5ea) popup_tmo_note_window_ParamLimits

0xe5d2,	// (0x0002f5ea) popup_tmo_note_window

0x3af0,	// (0x00024b08) fshwr2_bg_pane

0xd4df,	// (0x0002e4f7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd4df,	// (0x0002e4f7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe87,	// (0x00030e9f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe87,	// (0x00030e9f) fshwr2_func_candi_cell_pane_g

0x7643,	// (0x0002865b) bg_popup_window_pane_cp01

0x2e6c,	// (0x00023e84) bg_popup_window_pane_g1_cp01

0xa20a,	// (0x0002b222) bg_popup_window_pane_cp22_ParamLimits

0xa20a,	// (0x0002b222) bg_popup_window_pane_cp22

0xa218,	// (0x0002b230) listscroll_tmo_link_pane_ParamLimits

0xa218,	// (0x0002b230) listscroll_tmo_link_pane

0xa258,	// (0x0002b270) popup_tmo_note_window_g1_ParamLimits

0xa258,	// (0x0002b270) popup_tmo_note_window_g1

0xa265,	// (0x0002b27d) tmo_note_info_pane_ParamLimits

0xa265,	// (0x0002b27d) tmo_note_info_pane

0xf278,	// (0x00030290) list_tmo_note_info_pane_g1_ParamLimits

0xf278,	// (0x00030290) list_tmo_note_info_pane_g1

0xa296,	// (0x0002b2ae) list_tmo_note_info_pane_g2_ParamLimits

0xa296,	// (0x0002b2ae) list_tmo_note_info_pane_g2

0x0001,

0xfe8c,	// (0x00030ea4) list_tmo_note_info_pane_g_ParamLimits

0xfe8c,	// (0x00030ea4) list_tmo_note_info_pane_g

0xa2b2,	// (0x0002b2ca) list_tmo_note_info_text_pane_ParamLimits

0xa2b2,	// (0x0002b2ca) list_tmo_note_info_text_pane

0xa333,	// (0x0002b34b) list_tmo_link_pane

0xa340,	// (0x0002b358) scroll_pane_cp20

0xa34d,	// (0x0002b365) list_single_tmo_link_pane_ParamLimits

0xa34d,	// (0x0002b365) list_single_tmo_link_pane

0xa35d,	// (0x0002b375) list_single_tmo_link_pane_t1

0xa36b,	// (0x0002b383) list_tmo_note_info_text_pane_t1_ParamLimits

0xa36b,	// (0x0002b383) list_tmo_note_info_text_pane_t1

0xc35c,	// (0x0002d374) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc35c,	// (0x0002d374) aid_size_touch_scroll_bar_cp01

0xb9d7,	// (0x0002c9ef) aid_size_touch_slider_marker

0xbee1,	// (0x0002cef9) popup_settings_window_ParamLimits

0xbee1,	// (0x0002cef9) popup_settings_window

0x0298,	// (0x000212b0) popup_candi_list_indi_window

0x4b56,	// (0x00025b6e) aid_touch_navi_pane_ParamLimits

0x24a0,	// (0x000234b8) rs_clock_indi_pane

0x24a9,	// (0x000234c1) sctrl_sk_bottom_pane_ParamLimits

0x24ba,	// (0x000234d2) sctrl_sk_top_pane_ParamLimits

0x2599,	// (0x000235b1) popup_fep_tooltip_window

0x9c8f,	// (0x0002aca7) aid_size_cell_widget_grid_ParamLimits

0x9d04,	// (0x0002ad1c) cell_ai5_widget_pane_g1_ParamLimits

0x9d04,	// (0x0002ad1c) cell_ai5_widget_pane_g1

0x9d67,	// (0x0002ad7f) cell_ai5_widget_pane_g6_ParamLimits

0x9d73,	// (0x0002ad8b) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe00,	// (0x00030e18) cell_ai5_widget_pane_g_ParamLimits

0xfe00,	// (0x00030e18) cell_ai5_widget_pane_g

0x9ee3,	// (0x0002aefb) cell_ai5_widget_pane_t10_ParamLimits

0x9ee3,	// (0x0002aefb) cell_ai5_widget_pane_t10

0x9f26,	// (0x0002af3e) grid_ai5_widget_pane_ParamLimits

0x9fc4,	// (0x0002afdc) cell_contacts_ai5_widget_pane_ParamLimits

0x9fc4,	// (0x0002afdc) cell_contacts_ai5_widget_pane

0xa1a6,	// (0x0002b1be) popup_discreet_window_t3_ParamLimits

0xa1a6,	// (0x0002b1be) popup_discreet_window_t3

0xd419,	// (0x0002e431) popup_fshwr2_char_preview_window_ParamLimits

0xd419,	// (0x0002e431) popup_fshwr2_char_preview_window

0xf28f,	// (0x000302a7) tmo_note_info_pane_t1

0xf2a4,	// (0x000302bc) tmo_note_info_pane_t2

0xf2bb,	// (0x000302d3) tmo_note_info_pane_t3

0xa30f,	// (0x0002b327) tmo_note_info_pane_t4

0xa321,	// (0x0002b339) tmo_note_info_pane_t5

0x0004,

0xfe91,	// (0x00030ea9) tmo_note_info_pane_t

0xa333,	// (0x0002b34b) list_tmo_link_pane_ParamLimits

0xa340,	// (0x0002b358) scroll_pane_cp20_ParamLimits

0xeb60,	// (0x0002fb78) bg_popup_fep_char_preview_window_cp01

0xf2d0,	// (0x000302e8) popup_fshwr2_char_preview_window_t1

0xa392,	// (0x0002b3aa) popup_candi_list_indi_window_g1

0xa39b,	// (0x0002b3b3) bg_cell_contacts_ai5_widget_pane

0xa3a7,	// (0x0002b3bf) cell_contacts_ai5_widget_pane_g1

0x7d23,	// (0x00028d3b) cell_contacts_ai5_widget_pane_g2

0xa3bc,	// (0x0002b3d4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9c,	// (0x00030eb4) cell_contacts_ai5_widget_pane_g

0xa3c8,	// (0x0002b3e0) cell_contacts_ai5_widget_pane_t1

0x3af0,	// (0x00024b08) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa43f,	// (0x0002b457) settings_container_pane

0x47b6,	// (0x000257ce) listscroll_set_pane_copy1

0x6d34,	// (0x00027d4c) scroll_pane_cp121_copy1

0x5430,	// (0x00026448) set_content_pane_copy1

0xa44b,	// (0x0002b463) aid_height_set_list_copy1_ParamLimits

0xa44b,	// (0x0002b463) aid_height_set_list_copy1

0x63dd,	// (0x000273f5) aid_size_parent_copy1_ParamLimits

0x63dd,	// (0x000273f5) aid_size_parent_copy1

0xa457,	// (0x0002b46f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa457,	// (0x0002b46f) button_value_adjust_pane_cp6_copy1

0x4ada,	// (0x00025af2) list_highlight_pane_cp2_copy1_ParamLimits

0x4ada,	// (0x00025af2) list_highlight_pane_cp2_copy1

0xa46b,	// (0x0002b483) list_set_pane_copy1_ParamLimits

0xa46b,	// (0x0002b483) list_set_pane_copy1

0xa3da,	// (0x0002b3f2) main_pane_set_t1_copy1_ParamLimits

0xa3da,	// (0x0002b3f2) main_pane_set_t1_copy1

0xa414,	// (0x0002b42c) main_pane_set_t2_copy1_ParamLimits

0xa414,	// (0x0002b42c) main_pane_set_t2_copy1

0xa518,	// (0x0002b530) main_pane_set_t3_copy1

0xa526,	// (0x0002b53e) main_pane_set_t4_copy1

0xa433,	// (0x0002b44b) set_content_pane_g1_copy1_ParamLimits

0xa433,	// (0x0002b44b) set_content_pane_g1_copy1

0xa534,	// (0x0002b54c) setting_code_pane_copy1

0xa53c,	// (0x0002b554) setting_slider_graphic_pane_copy1

0xa53c,	// (0x0002b554) setting_slider_pane_copy1

0xa544,	// (0x0002b55c) setting_text_pane_copy1

0xa544,	// (0x0002b55c) setting_volume_pane_copy1

0xa534,	// (0x0002b54c) settings_code_pane_cp2_copy1

0xa54c,	// (0x0002b564) settings_code_pane_cp_copy1_ParamLimits

0xa54c,	// (0x0002b564) settings_code_pane_cp_copy1

0x2e75,	// (0x00023e8d) volume_set_pane_copy1

0xa560,	// (0x0002b578) volume_set_pane_g10_copy1

0xa568,	// (0x0002b580) volume_set_pane_g1_copy1

0xa570,	// (0x0002b588) volume_set_pane_g2_copy1

0xa578,	// (0x0002b590) volume_set_pane_g3_copy1

0xa580,	// (0x0002b598) volume_set_pane_g4_copy1

0xa588,	// (0x0002b5a0) volume_set_pane_g5_copy1

0xa590,	// (0x0002b5a8) volume_set_pane_g6_copy1

0xa598,	// (0x0002b5b0) volume_set_pane_g7_copy1

0xa5a0,	// (0x0002b5b8) volume_set_pane_g8_copy1

0xa5a8,	// (0x0002b5c0) volume_set_pane_g9_copy1

0x3263,	// (0x0002427b) bg_set_opt_pane_cp_copy1_ParamLimits

0x3263,	// (0x0002427b) bg_set_opt_pane_cp_copy1

0x2e7d,	// (0x00023e95) setting_slider_pane_t1_copy1_ParamLimits

0x2e7d,	// (0x00023e95) setting_slider_pane_t1_copy1

0x2e9c,	// (0x00023eb4) setting_slider_pane_t2_copy1_ParamLimits

0x2e9c,	// (0x00023eb4) setting_slider_pane_t2_copy1

0x2eb6,	// (0x00023ece) setting_slider_pane_t3_copy1_ParamLimits

0x2eb6,	// (0x00023ece) setting_slider_pane_t3_copy1

0x2ece,	// (0x00023ee6) slider_set_pane_copy1_ParamLimits

0x2ece,	// (0x00023ee6) slider_set_pane_copy1

0x3b48,	// (0x00024b60) set_opt_bg_pane_g1_copy2

0x3b50,	// (0x00024b68) set_opt_bg_pane_g2_copy2

0xa5b0,	// (0x0002b5c8) set_opt_bg_pane_g3_copy2

0x3b60,	// (0x00024b78) set_opt_bg_pane_g4_copy2

0x3b68,	// (0x00024b80) set_opt_bg_pane_g5_copy2

0x3b70,	// (0x00024b88) set_opt_bg_pane_g6_copy2

0xa5ba,	// (0x0002b5d2) set_opt_bg_pane_g7_copy2

0xa5c2,	// (0x0002b5da) set_opt_bg_pane_g8_copy2

0xa5cc,	// (0x0002b5e4) set_opt_bg_pane_g9_copy2

0x2ee4,	// (0x00023efc) aid_size_touch_slider_mark_copy1_ParamLimits

0x2ee4,	// (0x00023efc) aid_size_touch_slider_mark_copy1

0xa5d6,	// (0x0002b5ee) slider_set_pane_g1_copy1

0x2ef8,	// (0x00023f10) slider_set_pane_g2_copy1

0x1f83,	// (0x00022f9b) slider_set_pane_g3_copy1_ParamLimits

0x1f83,	// (0x00022f9b) slider_set_pane_g3_copy1

0x1f97,	// (0x00022faf) slider_set_pane_g4_copy1_ParamLimits

0x1f97,	// (0x00022faf) slider_set_pane_g4_copy1

0x1faf,	// (0x00022fc7) slider_set_pane_g5_copy1_ParamLimits

0x1faf,	// (0x00022fc7) slider_set_pane_g5_copy1

0x1f83,	// (0x00022f9b) slider_set_pane_g6_copy1_ParamLimits

0x1f83,	// (0x00022f9b) slider_set_pane_g6_copy1

0x2f00,	// (0x00023f18) slider_set_pane_g7_copy1_ParamLimits

0x2f00,	// (0x00023f18) slider_set_pane_g7_copy1

0xeb74,	// (0x0002fb8c) bg_set_opt_pane_cp2_copy1

0xa5df,	// (0x0002b5f7) setting_slider_graphic_pane_g1_copy1

0xa5e8,	// (0x0002b600) setting_slider_graphic_pane_t1_copy1

0xa5f8,	// (0x0002b610) setting_slider_graphic_pane_t2_copy1

0xa608,	// (0x0002b620) slider_set_pane_cp_copy1

0xa618,	// (0x0002b630) input_focus_pane_cp1_copy1

0xa621,	// (0x0002b639) list_set_text_pane_copy1

0xa629,	// (0x0002b641) setting_text_pane_g1_copy1

0xf473,	// (0x0003048b) set_text_pane_t1_copy1

0xa618,	// (0x0002b630) input_focus_pane_cp2_copy1

0xa629,	// (0x0002b641) setting_code_pane_g1_copy1

0xa632,	// (0x0002b64a) setting_code_pane_t1_copy1

0x6b5c,	// (0x00027b74) list_set_graphic_pane_copy1

0xeb74,	// (0x0002fb8c) bg_set_opt_pane_cp4_copy1

0x44af,	// (0x000254c7) list_set_graphic_pane_g1_copy1_ParamLimits

0x44af,	// (0x000254c7) list_set_graphic_pane_g1_copy1

0xa640,	// (0x0002b658) list_set_graphic_pane_g2_copy1

0x44c7,	// (0x000254df) list_set_graphic_pane_t1_copy1_ParamLimits

0x44c7,	// (0x000254df) list_set_graphic_pane_t1_copy1

0x7643,	// (0x0002865b) rs_clock_indi_pane_g1

0xa648,	// (0x0002b660) rs_clock_indi_pane_t1

0xa656,	// (0x0002b66e) rs_indi_pane

0xa65e,	// (0x0002b676) rs_indi_pane_g1

0xa667,	// (0x0002b67f) rs_indi_pane_g2

0xa670,	// (0x0002b688) rs_indi_pane_g3

0x0002,

0xfea3,	// (0x00030ebb) rs_indi_pane_g

0x47b6,	// (0x000257ce) bg_popup_preview_window_pane_cp03

0xa679,	// (0x0002b691) popup_fep_tooltip_window_t1

0x82d3,	// (0x000292eb) popup_note2_window_g2_ParamLimits

0x82d3,	// (0x000292eb) popup_note2_window_g2

0x0001,

0xfc30,	// (0x00030c48) popup_note2_window_g_ParamLimits

0xfc30,	// (0x00030c48) popup_note2_window_g

0x87ce,	// (0x000297e6) bg_popup_sub_pane_cp11_ParamLimits

0x87db,	// (0x000297f3) cell_ai3_links_pane_g1_ParamLimits

0x87f2,	// (0x0002980a) cell_ai3_links_pane_t1

0xf473,	// (0x0003048b) set_text_pane_t1_copy1_ParamLimits

0x46ba,	// (0x000256d2) cell_graphic_popup_pane_cp2_ParamLimits

0x46ba,	// (0x000256d2) cell_graphic_popup_pane_cp2

0xa687,	// (0x0002b69f) cell_graphic_popup_pane_g1_cp2

0x383b,	// (0x00024853) cell_graphic_popup_pane_g2_cp2

0xa68f,	// (0x0002b6a7) cell_graphic_popup_pane_g3_cp2

0xa697,	// (0x0002b6af) cell_graphic_popup_pane_t2_cp2

0x384c,	// (0x00024864) grid_highlight_pane_cp3_cp2

0x3ea0,	// (0x00024eb8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3af0,	// (0x00024b08) main_tmo_pane_ParamLimits

0xe5c6,	// (0x0002f5de) popup_tmo_big_image_note_window

0x9cf3,	// (0x0002ad0b) cell_ai5_widget_list_pane

0x9cfb,	// (0x0002ad13) cell_ai5_widget_lrg_icon_pane

0xf28f,	// (0x000302a7) tmo_note_info_pane_t1_ParamLimits

0xf2a4,	// (0x000302bc) tmo_note_info_pane_t2_ParamLimits

0xf2bb,	// (0x000302d3) tmo_note_info_pane_t3_ParamLimits

0xa30f,	// (0x0002b327) tmo_note_info_pane_t4_ParamLimits

0xa321,	// (0x0002b339) tmo_note_info_pane_t5_ParamLimits

0xfe91,	// (0x00030ea9) tmo_note_info_pane_t_ParamLimits

0xa43f,	// (0x0002b457) settings_container_pane_ParamLimits

0xa610,	// (0x0002b628) indicator_popup_pane_cp5

0xa610,	// (0x0002b628) indicator_popup_pane_cp6

0x6b5c,	// (0x00027b74) list_set_graphic_pane_copy1_ParamLimits

0xeb60,	// (0x0002fb78) bg_popup_window_pane_cp23

0xa6a5,	// (0x0002b6bd) popup_tmo_big_image_note_window_g1

0xa6af,	// (0x0002b6c7) popup_tmo_big_image_note_window_t1

0xa6bf,	// (0x0002b6d7) popup_tmo_big_image_note_window_t2

0xa6cf,	// (0x0002b6e7) popup_tmo_big_image_note_window_t3

0x0002,

0xfeaa,	// (0x00030ec2) popup_tmo_big_image_note_window_t

0x7643,	// (0x0002865b) cell_ai5_widget_lrg_icon_pane_g1

0xa6df,	// (0x0002b6f7) cell_ai5_widget_lrg_icon_pane_t1

0xa6ed,	// (0x0002b705) cell_ai5_widget_list_row_pane_ParamLimits

0xa6ed,	// (0x0002b705) cell_ai5_widget_list_row_pane

0xa704,	// (0x0002b71c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa704,	// (0x0002b71c) cell_ai5_widget_list_row_pane_g1

0xa711,	// (0x0002b729) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa711,	// (0x0002b729) cell_ai5_widget_list_row_pane_t1

0xa73c,	// (0x0002b754) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa73c,	// (0x0002b754) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb1,	// (0x00030ec9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb1,	// (0x00030ec9) cell_ai5_widget_list_row_pane_t

0xeb60,	// (0x0002fb78) main_fep_vtchi_ss_pane

0xa78c,	// (0x0002b7a4) popup_fep_char_pre_window

0xa794,	// (0x0002b7ac) popup_fep_ituss_window

0xf2ed,	// (0x00030305) popup_fep_vkbss_window

0x4ada,	// (0x00025af2) grid_vkbss_keypad_pane_ParamLimits

0x4ada,	// (0x00025af2) grid_vkbss_keypad_pane

0xa80c,	// (0x0002b824) ituss_keypad_pane

0x2f41,	// (0x00023f59) aid_vkbss_key_offset_ParamLimits

0x2f41,	// (0x00023f59) aid_vkbss_key_offset

0xd546,	// (0x0002e55e) cell_vkbss_key_pane_ParamLimits

0xd546,	// (0x0002e55e) cell_vkbss_key_pane

0xa818,	// (0x0002b830) bg_cell_vkbss_key_g1_ParamLimits

0xa818,	// (0x0002b830) bg_cell_vkbss_key_g1

0xf2fa,	// (0x00030312) cell_vkbss_key_3p_pane_ParamLimits

0xf2fa,	// (0x00030312) cell_vkbss_key_3p_pane

0xf330,	// (0x00030348) cell_vkbss_key_g1_ParamLimits

0xf330,	// (0x00030348) cell_vkbss_key_g1

0xf366,	// (0x0003037e) cell_vkbss_key_t1_ParamLimits

0xf366,	// (0x0003037e) cell_vkbss_key_t1

0x2fab,	// (0x00023fc3) cell_ituss_key_pane_ParamLimits

0x2fab,	// (0x00023fc3) cell_ituss_key_pane

0xa8ec,	// (0x0002b904) bg_cell_ituss_key_g1_ParamLimits

0xa8ec,	// (0x0002b904) bg_cell_ituss_key_g1

0xa8f8,	// (0x0002b910) cell_ituss_key_pane_g1_ParamLimits

0xa8f8,	// (0x0002b910) cell_ituss_key_pane_g1

0x2fbc,	// (0x00023fd4) cell_ituss_key_pane_g2_ParamLimits

0x2fbc,	// (0x00023fd4) cell_ituss_key_pane_g2

0x0005,

0xfeb8,	// (0x00030ed0) cell_ituss_key_pane_g_ParamLimits

0xfeb8,	// (0x00030ed0) cell_ituss_key_pane_g

0x3040,	// (0x00024058) cell_ituss_key_t1_ParamLimits

0x3040,	// (0x00024058) cell_ituss_key_t1

0x307a,	// (0x00024092) cell_ituss_key_t2_ParamLimits

0x307a,	// (0x00024092) cell_ituss_key_t2

0x30ac,	// (0x000240c4) cell_ituss_key_t3_ParamLimits

0x30ac,	// (0x000240c4) cell_ituss_key_t3

0x30dd,	// (0x000240f5) cell_ituss_key_t4_ParamLimits

0x30dd,	// (0x000240f5) cell_ituss_key_t4

0x0005,

0xfec5,	// (0x00030edd) cell_ituss_key_t_ParamLimits

0xfec5,	// (0x00030edd) cell_ituss_key_t

0xf3c2,	// (0x000303da) cell_vkbss_key_3p_pane_g1

0xf3ca,	// (0x000303e2) cell_vkbss_key_3p_pane_g2

0xf3d2,	// (0x000303ea) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x00030eea) cell_vkbss_key_3p_pane_g

0x47b6,	// (0x000257ce) bg_popup_fep_char_preview_window_cp02

0xa936,	// (0x0002b94e) popup_fep_char_pre_window_t1

0xf1df,	// (0x000301f7) main_ai5_sk_pane

0xa39b,	// (0x0002b3b3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3a7,	// (0x0002b3bf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7d23,	// (0x00028d3b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3bc,	// (0x0002b3d4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9c,	// (0x00030eb4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3c8,	// (0x0002b3e0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3af0,	// (0x00024b08) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf3da,	// (0x000303f2) main_ai5_sk_pane_g1

0x54cc,	// (0x000264e4) popup_query_code_window_g1

0xf2de,	// (0x000302f6) popup_fep_vkb_icf_pane

0xa7e0,	// (0x0002b7f8) popup_fep_vtchi_icf_pane

0xa94d,	// (0x0002b965) bg_icf_pane

0xa94d,	// (0x0002b965) list_vkb_icf_pane

0xa959,	// (0x0002b971) bg_icf_pane_cp01

0xa96c,	// (0x0002b984) vtchi_icf_list_pane

0xf42f,	// (0x00030447) list_vkb_icf_pane_t1_ParamLimits

0xf42f,	// (0x00030447) list_vkb_icf_pane_t1

0xa9ea,	// (0x0002ba02) vtchi_icf_list_pane_t1_ParamLimits

0xa9ea,	// (0x0002ba02) vtchi_icf_list_pane_t1

0xa794,	// (0x0002b7ac) popup_fep_ituss_window_ParamLimits

0xa7e0,	// (0x0002b7f8) popup_fep_vtchi_icf_pane_ParamLimits

0xa80c,	// (0x0002b824) ituss_keypad_pane_ParamLimits

0x2f37,	// (0x00023f4f) ituss_sks_pane

0xa94d,	// (0x0002b965) bg_icf_pane_ParamLimits

0xa764,	// (0x0002b77c) icf_edit_indi_pane_ParamLimits

0xa764,	// (0x0002b77c) icf_edit_indi_pane

0xa94d,	// (0x0002b965) list_vkb_icf_pane_ParamLimits

0xa959,	// (0x0002b971) bg_icf_pane_cp01_ParamLimits

0xa77f,	// (0x0002b797) icf_edit_indi_pane_cp01_ParamLimits

0xa77f,	// (0x0002b797) icf_edit_indi_pane_cp01

0xa96c,	// (0x0002b984) vtchi_query_pane

0x9af0,	// (0x0002ab08) icf_edit_indi_pane_g1_ParamLimits

0x9af0,	// (0x0002ab08) icf_edit_indi_pane_g1

0xf446,	// (0x0003045e) icf_edit_indi_pane_g2_ParamLimits

0xf446,	// (0x0003045e) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x00030f15) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x00030f15) icf_edit_indi_pane_g

0xf45a,	// (0x00030472) icf_edit_indi_pane_t1

0xaa08,	// (0x0002ba20) bg_input_focus_pane_cp042

0x3a1f,	// (0x00024a37) vtchi_button_pane

0xaa11,	// (0x0002ba29) vtchi_query_pane_t1

0xaa1f,	// (0x0002ba37) vtchi_query_pane_t2

0xaa2d,	// (0x0002ba45) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x00030f04) vtchi_query_pane_t

0xeb60,	// (0x0002fb78) bg_button_pane_cp13

0xaa3b,	// (0x0002ba53) vtchi_button_pane_g1

0x315e,	// (0x00024176) ituss_sks_pane_g1

0x3169,	// (0x00024181) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x00030f0b) ituss_sks_pane_g

0xaa43,	// (0x0002ba5b) ituss_sks_pane_t1

0xaa51,	// (0x0002ba69) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x00030f10) ituss_sks_pane_t

0x70cc,	// (0x000280e4) indicator_nsta_pane_cp_g1

0x70d5,	// (0x000280ed) indicator_nsta_pane_cp_g2

0x70dd,	// (0x000280f5) indicator_nsta_pane_cp_g3

0x70e5,	// (0x000280fd) indicator_nsta_pane_cp_g4

0x70d5,	// (0x000280ed) indicator_nsta_pane_cp_g5

0x70dd,	// (0x000280f5) indicator_nsta_pane_cp_g6

0x0005,

0xfa7a,	// (0x00030a92) indicator_nsta_pane_cp_g

0xefec,	// (0x00030004) cell_graphic2_pane_t2_ParamLimits

0xefec,	// (0x00030004) cell_graphic2_pane_t2

0x0001,

0xfd87,	// (0x00030d9f) cell_graphic2_pane_t_ParamLimits

0xfd87,	// (0x00030d9f) cell_graphic2_pane_t

0xf021,	// (0x00030039) cell_graphic2_control_pane_t1

0xc519,	// (0x0002d531) signal_pane_g3_ParamLimits

0xc519,	// (0x0002d531) signal_pane_g3

0xc52d,	// (0x0002d545) signal_pane_g4_ParamLimits

0xc52d,	// (0x0002d545) signal_pane_g4

0xa74e,	// (0x0002b766) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa74e,	// (0x0002b766) cell_ai5_widget_list_row_pane_t3

0xa90c,	// (0x0002b924) cell_ituss_key_pane_t1_ParamLimits

0xa90c,	// (0x0002b924) cell_ituss_key_pane_t1

0x5109,	// (0x00026121) form_field_data_wide_pane_vc_t2_ParamLimits

0x5109,	// (0x00026121) form_field_data_wide_pane_vc_t2

0x511d,	// (0x00026135) form_field_data_wide_pane_vc_t3_ParamLimits

0x511d,	// (0x00026135) form_field_data_wide_pane_vc_t3

0x0002,

0xf7dd,	// (0x000307f5) form_field_data_wide_pane_vc_t_ParamLimits

0xf7dd,	// (0x000307f5) form_field_data_wide_pane_vc_t

0x6d76,	// (0x00027d8e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6d76,	// (0x00027d8e) form_field_slider_wide_pane_vc_t3

0x6e54,	// (0x00027e6c) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6e54,	// (0x00027e6c) form_field_popup_wide_pane_vc_t2

0x6e6b,	// (0x00027e83) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6e6b,	// (0x00027e83) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa69,	// (0x00030a81) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa69,	// (0x00030a81) form_field_popup_wide_pane_vc_t

0xd387,	// (0x0002e39f) aid_fshwr2_btn_pane_ParamLimits

0xd397,	// (0x0002e3af) aid_fshwr2_syb_pane_ParamLimits

0xd3ab,	// (0x0002e3c3) aid_fshwr2_txt_pane_ParamLimits

0x3af0,	// (0x00024b08) fshwr2_bg_pane_ParamLimits

0xd3bb,	// (0x0002e3d3) fshwr2_func_candi_pane_ParamLimits

0xd3db,	// (0x0002e3f3) fshwr2_hwr_syb_pane_ParamLimits

0xd3fd,	// (0x0002e415) fshwr2_icf_pane_ParamLimits

0x080d,	// (0x00021825) list_double_graphic_pane_vc_g4_ParamLimits

0x080d,	// (0x00021825) list_double_graphic_pane_vc_g4

0x2fdc,	// (0x00023ff4) cell_ituss_key_pane_g3_ParamLimits

0x2fdc,	// (0x00023ff4) cell_ituss_key_pane_g3

0x310e,	// (0x00024126) cell_ituss_key_t5_ParamLimits

0x310e,	// (0x00024126) cell_ituss_key_t5

0xf2ed,	// (0x00030305) popup_fep_vkbss_window_ParamLimits

0x9c86,	// (0x0002ac9e) aid_cell_ai5_quarter

0xf45a,	// (0x00030472) icf_edit_indi_pane_t1_ParamLimits

0x3594,	// (0x000245ac) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3594,	// (0x000245ac) aid_tch_indicator_popup_pane_cp2

0x35a7,	// (0x000245bf) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x35a7,	// (0x000245bf) aid_tch_query_popup_data_pane_cp2

0x5474,	// (0x0002648c) aid_tch_query_popup_pane_ParamLimits

0x5474,	// (0x0002648c) aid_tch_query_popup_pane

0x5474,	// (0x0002648c) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5474,	// (0x0002648c) aid_tch_query_popup_data_pane_cp1

0x4ada,	// (0x00025af2) cell_fshwr2_syb_bg_pane_ParamLimits

0xd509,	// (0x0002e521) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd51c,	// (0x0002e534) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf2de,	// (0x000302f6) popup_fep_vkb_icf_pane_ParamLimits

0xd313,	// (0x0002e32b) bg_popup_fep_char_preview_window_g10

0x9dbb,	// (0x0002add3) cell_ai5_widget_pane_g11_ParamLimits

0x9dbb,	// (0x0002add3) cell_ai5_widget_pane_g11

0x9dc7,	// (0x0002addf) cell_ai5_widget_pane_g12_ParamLimits

0x9dc7,	// (0x0002addf) cell_ai5_widget_pane_g12

0x9dd3,	// (0x0002adeb) cell_ai5_widget_pane_g13_ParamLimits

0x9dd3,	// (0x0002adeb) cell_ai5_widget_pane_g13

0x9f02,	// (0x0002af1a) cell_ai5_widget_pane_t11_ParamLimits

0x9f02,	// (0x0002af1a) cell_ai5_widget_pane_t11

0x9f14,	// (0x0002af2c) cell_ai5_widget_pane_t12_ParamLimits

0x9f14,	// (0x0002af2c) cell_ai5_widget_pane_t12

0x2fe8,	// (0x00024000) cell_ituss_key_pane_g4_ParamLimits

0x2fe8,	// (0x00024000) cell_ituss_key_pane_g4

0x3004,	// (0x0002401c) cell_ituss_key_pane_g5_ParamLimits

0x3004,	// (0x0002401c) cell_ituss_key_pane_g5

0x3020,	// (0x00024038) cell_ituss_key_pane_g6_ParamLimits

0x3020,	// (0x00024038) cell_ituss_key_pane_g6

0x5004,	// (0x0002601c) bg_icf_pane_g1

0xf3e3,	// (0x000303fb) bg_icf_pane_g2

0xf3ed,	// (0x00030405) bg_icf_pane_g3

0xf3f5,	// (0x0003040d) bg_icf_pane_g4

0xf3ff,	// (0x00030417) bg_icf_pane_g5

0xf409,	// (0x00030421) bg_icf_pane_g6

0xf413,	// (0x0003042b) bg_icf_pane_g7

0xf41b,	// (0x00030433) bg_icf_pane_g8

0xf425,	// (0x0003043d) bg_icf_pane_g9

0x0008,

0xfed9,	// (0x00030ef1) bg_icf_pane_g

0xa7f9,	// (0x0002b811) popup_hyb_candi_window_ParamLimits

0xa7f9,	// (0x0002b811) popup_hyb_candi_window

0x5078,	// (0x00026090) bg_popup_sub_pane_cp01_ParamLimits

0x5078,	// (0x00026090) bg_popup_sub_pane_cp01

0xaa8c,	// (0x0002baa4) entry_hyb_candi_pane_ParamLimits

0xaa8c,	// (0x0002baa4) entry_hyb_candi_pane

0xaa9b,	// (0x0002bab3) grid_hyb_candi_pane_ParamLimits

0xaa9b,	// (0x0002bab3) grid_hyb_candi_pane

0xaab0,	// (0x0002bac8) grid_hyb_phrase_pane_ParamLimits

0xaab0,	// (0x0002bac8) grid_hyb_phrase_pane

0xaabf,	// (0x0002bad7) cell_hyb_candi_pane_ParamLimits

0xaabf,	// (0x0002bad7) cell_hyb_candi_pane

0xaae2,	// (0x0002bafa) cell_hyb_candi_scroll_pane

0x4185,	// (0x0002519d) cell_hyb_candi_pane_g1

0xaaeb,	// (0x0002bb03) cell_hyb_candi_pane_t1

0xaaf9,	// (0x0002bb11) cell_hyb_phrase_pane

0x4185,	// (0x0002519d) cell_hyb_phrase_pane_g1

0xab02,	// (0x0002bb1a) cell_hyb_phrase_pane_t1

0xab10,	// (0x0002bb28) entry_hyb_candi_pane_t1

0x47b6,	// (0x000257ce) input_focus_pane_cp06

0xab1e,	// (0x0002bb36) cell_hyb_candi_scroll_pane_g1

0xab26,	// (0x0002bb3e) cell_hyb_candi_scroll_pane_g1_aid

0xab2e,	// (0x0002bb46) cell_hyb_candi_scroll_pane_g2

0xab36,	// (0x0002bb4e) cell_hyb_candi_scroll_pane_g2_aid

0xab3e,	// (0x0002bb56) cell_hyb_candi_scroll_pane_g3

0xab46,	// (0x0002bb5e) cell_hyb_candi_scroll_pane_g4

0xf173,	// (0x0003018b) ai5_page_g1

0x3120,	// (0x00024138) cell_ituss_key_t6_ParamLimits

0x3120,	// (0x00024138) cell_ituss_key_t6

0xd532,	// (0x0002e54a) icf_edit_indi_pane_cp02_ParamLimits

0xd532,	// (0x0002e54a) icf_edit_indi_pane_cp02

0x2f2a,	// (0x00023f42) icf_edit_indi_pane_cp03_ParamLimits

0x2f2a,	// (0x00023f42) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small

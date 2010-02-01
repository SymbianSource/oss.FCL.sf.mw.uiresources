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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f611 };

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
0xbd0b,	// (0x0001b31c) Screen

0xbd17,	// (0x0001b328) application_window_ParamLimits

0xbd17,	// (0x0001b328) application_window

0x1cbb,	// (0x000112cc) screen_g1

0xb3df,	// (0x0001a9f0) area_bottom_pane_ParamLimits

0xb3df,	// (0x0001a9f0) area_bottom_pane

0x018f,	// (0x0000f7a0) area_top_pane_ParamLimits

0x018f,	// (0x0000f7a0) area_top_pane

0x022d,	// (0x0000f83e) main_pane_ParamLimits

0x022d,	// (0x0000f83e) main_pane

0x1cc5,	// (0x000112d6) misc_graphics

0xd157,	// (0x0001c768) battery_pane_ParamLimits

0xd157,	// (0x0001c768) battery_pane

0x514b,	// (0x0001475c) bg_status_flat_pane_g8

0x5153,	// (0x00014764) bg_status_flat_pane_g9

0x4458,	// (0x00013a69) context_pane_ParamLimits

0x4458,	// (0x00013a69) context_pane

0xd2c2,	// (0x0001c8d3) navi_pane_ParamLimits

0xd2c2,	// (0x0001c8d3) navi_pane

0xd339,	// (0x0001c94a) signal_pane_ParamLimits

0xd339,	// (0x0001c94a) signal_pane

0x0008,

0xf880,	// (0x0001ee91) bg_status_flat_pane_g

0xd3c9,	// (0x0001c9da) status_pane_g1_ParamLimits

0xd3c9,	// (0x0001c9da) status_pane_g1

0xd3df,	// (0x0001c9f0) status_pane_g2_ParamLimits

0xd3df,	// (0x0001c9f0) status_pane_g2

0x4678,	// (0x00013c89) status_pane_g3_ParamLimits

0x4678,	// (0x00013c89) status_pane_g3

0x0004,

0xf7b3,	// (0x0001edc4) status_pane_g_ParamLimits

0xf7b3,	// (0x0001edc4) status_pane_g

0xd3eb,	// (0x0001c9fc) title_pane_ParamLimits

0xd3eb,	// (0x0001c9fc) title_pane

0xd44c,	// (0x0001ca5d) uni_indicator_pane_ParamLimits

0xd44c,	// (0x0001ca5d) uni_indicator_pane

0x3d03,	// (0x00013314) bg_list_pane_ParamLimits

0x3d03,	// (0x00013314) bg_list_pane

0xca33,	// (0x0001c044) find_pane

0xca3b,	// (0x0001c04c) listscroll_app_pane_ParamLimits

0xca3b,	// (0x0001c04c) listscroll_app_pane

0x3d37,	// (0x00013348) listscroll_form_pane

0xca47,	// (0x0001c058) listscroll_gen_pane_ParamLimits

0xca47,	// (0x0001c058) listscroll_gen_pane

0x3d37,	// (0x00013348) listscroll_set_pane

0x5d10,	// (0x00015321) main_idle_act_pane

0x39db,	// (0x00012fec) main_idle_trad_pane

0x39db,	// (0x00012fec) main_list_empty_pane

0x3d65,	// (0x00013376) main_midp_pane

0x3d71,	// (0x00013382) main_pane_g1_ParamLimits

0x3d71,	// (0x00013382) main_pane_g1

0xca5b,	// (0x0001c06c) popup_ai_message_window_ParamLimits

0xca5b,	// (0x0001c06c) popup_ai_message_window

0xcaec,	// (0x0001c0fd) popup_fep_china_uni_window_ParamLimits

0xcaec,	// (0x0001c0fd) popup_fep_china_uni_window

0x3e85,	// (0x00013496) popup_fep_japan_candidate_window_ParamLimits

0x3e85,	// (0x00013496) popup_fep_japan_candidate_window

0x3ea5,	// (0x000134b6) popup_fep_japan_predictive_window_ParamLimits

0x3ea5,	// (0x000134b6) popup_fep_japan_predictive_window

0xcb48,	// (0x0001c159) popup_find_window

0xcb65,	// (0x0001c176) popup_grid_graphic_window_ParamLimits

0xcb65,	// (0x0001c176) popup_grid_graphic_window

0x3f0a,	// (0x0001351b) popup_large_graphic_colour_window

0xcbfd,	// (0x0001c20e) popup_menu_window_ParamLimits

0xcbfd,	// (0x0001c20e) popup_menu_window

0xcdb7,	// (0x0001c3c8) popup_note_image_window

0xcd7d,	// (0x0001c38e) popup_note_wait_window_ParamLimits

0xcd7d,	// (0x0001c38e) popup_note_wait_window

0xcdcf,	// (0x0001c3e0) popup_note_window_ParamLimits

0xcdcf,	// (0x0001c3e0) popup_note_window

0xce75,	// (0x0001c486) popup_query_code_window_ParamLimits

0xce75,	// (0x0001c486) popup_query_code_window

0x4152,	// (0x00013763) popup_query_data_code_window_ParamLimits

0x4152,	// (0x00013763) popup_query_data_code_window

0xceaf,	// (0x0001c4c0) popup_query_data_window_ParamLimits

0xceaf,	// (0x0001c4c0) popup_query_data_window

0xcf25,	// (0x0001c536) popup_query_sat_info_window_ParamLimits

0xcf25,	// (0x0001c536) popup_query_sat_info_window

0xcfbc,	// (0x0001c5cd) popup_snote_single_graphic_window_ParamLimits

0xcfbc,	// (0x0001c5cd) popup_snote_single_graphic_window

0xcfbc,	// (0x0001c5cd) popup_snote_single_text_window_ParamLimits

0xcfbc,	// (0x0001c5cd) popup_snote_single_text_window

0x41d9,	// (0x000137ea) popup_sub_window_general

0x4309,	// (0x0001391a) popup_window_general_ParamLimits

0x4309,	// (0x0001391a) popup_window_general

0x431e,	// (0x0001392f) power_save_pane

0xb561,	// (0x0001ab72) control_pane_g1_ParamLimits

0xb561,	// (0x0001ab72) control_pane_g1

0xb58a,	// (0x0001ab9b) control_pane_g2_ParamLimits

0xb58a,	// (0x0001ab9b) control_pane_g2

0x3ca4,	// (0x000132b5) control_pane_g3_ParamLimits

0x3ca4,	// (0x000132b5) control_pane_g3

0x0007,

0xf79b,	// (0x0001edac) control_pane_g_ParamLimits

0xf79b,	// (0x0001edac) control_pane_g

0xb5c5,	// (0x0001abd6) control_pane_t1_ParamLimits

0xb5c5,	// (0x0001abd6) control_pane_t1

0xb623,	// (0x0001ac34) control_pane_t2_ParamLimits

0xb623,	// (0x0001ac34) control_pane_t2

0x0002,

0xf7ac,	// (0x0001edbd) control_pane_t_ParamLimits

0xf7ac,	// (0x0001edbd) control_pane_t

0x3bc5,	// (0x000131d6) navi_navi_volume_pane_cp1

0x3bce,	// (0x000131df) status_small_icon_pane

0x3bd6,	// (0x000131e7) status_small_pane_g1_ParamLimits

0x3bd6,	// (0x000131e7) status_small_pane_g1

0x3c0a,	// (0x0001321b) status_small_pane_g2_ParamLimits

0x3c0a,	// (0x0001321b) status_small_pane_g2

0x3c16,	// (0x00013227) status_small_pane_g3_ParamLimits

0x3c16,	// (0x00013227) status_small_pane_g3

0x3c22,	// (0x00013233) status_small_pane_g4_ParamLimits

0x3c22,	// (0x00013233) status_small_pane_g4

0x3c2e,	// (0x0001323f) status_small_pane_g5_ParamLimits

0x3c2e,	// (0x0001323f) status_small_pane_g5

0x3c3d,	// (0x0001324e) status_small_pane_g6_ParamLimits

0x3c3d,	// (0x0001324e) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001ed9b) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001ed9b) status_small_pane_g

0x3c6d,	// (0x0001327e) status_small_pane_t1

0x3c90,	// (0x000132a1) status_small_wait_pane_ParamLimits

0x3c90,	// (0x000132a1) status_small_wait_pane

0xc7eb,	// (0x0001bdfc) aid_levels_signal_ParamLimits

0xc7eb,	// (0x0001bdfc) aid_levels_signal

0xc803,	// (0x0001be14) signal_pane_g1_ParamLimits

0xc803,	// (0x0001be14) signal_pane_g1

0xc81e,	// (0x0001be2f) signal_pane_g2_ParamLimits

0xc81e,	// (0x0001be2f) signal_pane_g2

0x0001,

0xf71f,	// (0x0001ed30) signal_pane_g_ParamLimits

0xf71f,	// (0x0001ed30) signal_pane_g

0x342b,	// (0x00012a3c) context_pane_g1

0xbd27,	// (0x0001b338) title_pane_g1

0xbd5c,	// (0x0001b36d) title_pane_t1

0x1d6d,	// (0x0001137e) title_pane_t2

0x1d93,	// (0x000113a4) title_pane_t3

0x0002,

0xf573,	// (0x0001eb84) title_pane_t

0xd474,	// (0x0001ca85) aid_levels_battery_ParamLimits

0xd474,	// (0x0001ca85) aid_levels_battery

0xd490,	// (0x0001caa1) battery_pane_g1_ParamLimits

0xd490,	// (0x0001caa1) battery_pane_g1

0xd4ad,	// (0x0001cabe) battery_pane_g2_ParamLimits

0xd4ad,	// (0x0001cabe) battery_pane_g2

0x0001,

0xf7be,	// (0x0001edcf) battery_pane_g_ParamLimits

0xf7be,	// (0x0001edcf) battery_pane_g

0xd6cb,	// (0x0001ccdc) uni_indicator_pane_g1

0xd6e0,	// (0x0001ccf1) uni_indicator_pane_g2

0xd6f5,	// (0x0001cd06) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x0001ef39) uni_indicator_pane_g

0x384d,	// (0x00012e5e) navi_icon_pane_ParamLimits

0x384d,	// (0x00012e5e) navi_icon_pane

0x3796,	// (0x00012da7) navi_midp_pane

0x3869,	// (0x00012e7a) navi_navi_pane

0x3873,	// (0x00012e84) navi_text_pane_ParamLimits

0x3873,	// (0x00012e84) navi_text_pane

0x1cbb,	// (0x000112cc) status_small_wait_pane_g1

0x21dc,	// (0x000117ed) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x0001ef34) status_small_wait_pane_g

0x57ac,	// (0x00014dbd) navi_navi_icon_text_pane

0x57b4,	// (0x00014dc5) navi_navi_pane_g1_ParamLimits

0x57b4,	// (0x00014dc5) navi_navi_pane_g1

0x57c6,	// (0x00014dd7) navi_navi_pane_g2_ParamLimits

0x57c6,	// (0x00014dd7) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x0001ef02) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x0001ef02) navi_navi_pane_g

0x57d8,	// (0x00014de9) navi_navi_tabs_pane

0x57e1,	// (0x00014df2) navi_navi_text_pane

0x57ac,	// (0x00014dbd) navi_navi_volume_pane

0xd68c,	// (0x0001cc9d) navi_text_pane_t1

0xd680,	// (0x0001cc91) navi_icon_pane_g1

0x56c9,	// (0x00014cda) navi_navi_text_pane_t1

0xb86e,	// (0x0001ae7f) navi_navi_volume_pane_g1

0xb876,	// (0x0001ae87) volume_small_pane

0xd5dc,	// (0x0001cbed) navi_navi_icon_text_pane_g1

0xd5e4,	// (0x0001cbf5) navi_navi_icon_text_pane_t1

0x3869,	// (0x00012e7a) navi_tabs_2_long_pane

0x3869,	// (0x00012e7a) navi_tabs_2_pane

0x3869,	// (0x00012e7a) navi_tabs_3_long_pane

0x3869,	// (0x00012e7a) navi_tabs_3_pane

0x3869,	// (0x00012e7a) navi_tabs_4_pane

0xb84e,	// (0x0001ae5f) tabs_2_active_pane_ParamLimits

0xb84e,	// (0x0001ae5f) tabs_2_active_pane

0xb85e,	// (0x0001ae6f) tabs_2_passive_pane_ParamLimits

0xb85e,	// (0x0001ae6f) tabs_2_passive_pane

0xb81c,	// (0x0001ae2d) tabs_3_active_pane_ParamLimits

0xb81c,	// (0x0001ae2d) tabs_3_active_pane

0xb82c,	// (0x0001ae3d) tabs_3_passive_pane_ParamLimits

0xb82c,	// (0x0001ae3d) tabs_3_passive_pane

0xb83d,	// (0x0001ae4e) tabs_3_passive_pane_cp_ParamLimits

0xb83d,	// (0x0001ae4e) tabs_3_passive_pane_cp

0xb7d8,	// (0x0001ade9) tabs_4_active_pane_ParamLimits

0xb7d8,	// (0x0001ade9) tabs_4_active_pane

0xb7e9,	// (0x0001adfa) tabs_4_passive_pane_ParamLimits

0xb7e9,	// (0x0001adfa) tabs_4_passive_pane

0xb7fa,	// (0x0001ae0b) tabs_4_passive_pane_cp_ParamLimits

0xb7fa,	// (0x0001ae0b) tabs_4_passive_pane_cp

0xb80b,	// (0x0001ae1c) tabs_4_passive_pane_cp2_ParamLimits

0xb80b,	// (0x0001ae1c) tabs_4_passive_pane_cp2

0xb7b8,	// (0x0001adc9) tabs_2_long_active_pane_ParamLimits

0xb7b8,	// (0x0001adc9) tabs_2_long_active_pane

0xb7c8,	// (0x0001add9) tabs_2_long_passive_pane_ParamLimits

0xb7c8,	// (0x0001add9) tabs_2_long_passive_pane

0xb785,	// (0x0001ad96) tabs_3_long_active_pane_ParamLimits

0xb785,	// (0x0001ad96) tabs_3_long_active_pane

0xb796,	// (0x0001ada7) tabs_3_long_passive_pane_ParamLimits

0xb796,	// (0x0001ada7) tabs_3_long_passive_pane

0xb7a7,	// (0x0001adb8) tabs_3_long_passive_pane_cp_ParamLimits

0xb7a7,	// (0x0001adb8) tabs_3_long_passive_pane_cp

0x0c82,	// (0x00010293) volume_small_pane_g1

0xb734,	// (0x0001ad45) volume_small_pane_g2

0xb73d,	// (0x0001ad4e) volume_small_pane_g3

0xb746,	// (0x0001ad57) volume_small_pane_g4

0xb74f,	// (0x0001ad60) volume_small_pane_g5

0xb758,	// (0x0001ad69) volume_small_pane_g6

0xb761,	// (0x0001ad72) volume_small_pane_g7

0xb76a,	// (0x0001ad7b) volume_small_pane_g8

0xb773,	// (0x0001ad84) volume_small_pane_g9

0xb77c,	// (0x0001ad8d) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x0001eece) volume_small_pane_g

0x203a,	// (0x0001164b) bg_active_tab_pane_cp2_ParamLimits

0x203a,	// (0x0001164b) bg_active_tab_pane_cp2

0xbde8,	// (0x0001b3f9) tabs_3_active_pane_g1

0xbdf0,	// (0x0001b401) tabs_3_active_pane_t1

0x203a,	// (0x0001164b) bg_passive_tab_pane_cp2_ParamLimits

0x203a,	// (0x0001164b) bg_passive_tab_pane_cp2

0xbde8,	// (0x0001b3f9) tabs_3_passive_pane_g1

0xbdf0,	// (0x0001b401) tabs_3_passive_pane_t1

0x203a,	// (0x0001164b) bg_active_tab_pane_cp3_ParamLimits

0x203a,	// (0x0001164b) bg_active_tab_pane_cp3

0xbe02,	// (0x0001b413) tabs_4_active_pane_g1

0xbe0a,	// (0x0001b41b) tabs_4_active_pane_t1

0x203a,	// (0x0001164b) bg_passive_tab_pane_cp3_ParamLimits

0x203a,	// (0x0001164b) bg_passive_tab_pane_cp3

0xbe02,	// (0x0001b413) tabs_4_1_passive_pane_g1

0xbe0a,	// (0x0001b41b) tabs_4_1_passive_pane_t1

0x3d65,	// (0x00013376) list_highlight_pane_cp2

0xd790,	// (0x0001cda1) list_set_pane_ParamLimits

0xd790,	// (0x0001cda1) list_set_pane

0xd82a,	// (0x0001ce3b) main_pane_set_t1_ParamLimits

0xd82a,	// (0x0001ce3b) main_pane_set_t1

0xd84a,	// (0x0001ce5b) main_pane_set_t2_ParamLimits

0xd84a,	// (0x0001ce5b) main_pane_set_t2

0xd85e,	// (0x0001ce6f) main_pane_set_t3_ParamLimits

0xd85e,	// (0x0001ce6f) main_pane_set_t3

0xd870,	// (0x0001ce81) main_pane_set_t4_ParamLimits

0xd870,	// (0x0001ce81) main_pane_set_t4

0x0003,

0xf98d,	// (0x0001ef9e) main_pane_set_t_ParamLimits

0xf98d,	// (0x0001ef9e) main_pane_set_t

0xd882,	// (0x0001ce93) setting_code_pane

0xd88c,	// (0x0001ce9d) setting_slider_graphic_pane

0xd88c,	// (0x0001ce9d) setting_slider_pane

0xd88c,	// (0x0001ce9d) setting_text_pane

0xd88c,	// (0x0001ce9d) setting_volume_pane

0x0472,	// (0x0000fa83) volume_set_pane

0x1da5,	// (0x000113b6) bg_set_opt_pane_cp

0x047a,	// (0x0000fa8b) setting_slider_pane_t1

0x0493,	// (0x0000faa4) setting_slider_pane_t2

0x04ad,	// (0x0000fabe) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001eb8b) setting_slider_pane_t

0x04c5,	// (0x0000fad6) slider_set_pane

0x1cc5,	// (0x000112d6) bg_set_opt_pane_cp2

0x1de7,	// (0x000113f8) setting_slider_graphic_pane_g1

0x04db,	// (0x0000faec) setting_slider_graphic_pane_t1

0x04eb,	// (0x0000fafc) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0001eb92) setting_slider_graphic_pane_t

0x04fb,	// (0x0000fb0c) slider_set_pane_cp

0x1cc5,	// (0x000112d6) input_focus_pane_cp1

0x5cf7,	// (0x00015308) list_set_text_pane

0x1cbb,	// (0x000112cc) setting_text_pane_g1

0x1cc5,	// (0x000112d6) input_focus_pane_cp2

0x1cbb,	// (0x000112cc) setting_code_pane_g1

0x1df0,	// (0x00011401) setting_code_pane_t1

0x1dfe,	// (0x0001140f) set_text_pane_t1_ParamLimits

0x1dfe,	// (0x0001140f) set_text_pane_t1

0x2cc4,	// (0x000122d5) set_opt_bg_pane_g1

0x2ccc,	// (0x000122dd) set_opt_bg_pane_g2

0x5cd1,	// (0x000152e2) set_opt_bg_pane_g3

0x2cdc,	// (0x000122ed) set_opt_bg_pane_g4

0x2ce4,	// (0x000122f5) set_opt_bg_pane_g5

0x2cec,	// (0x000122fd) set_opt_bg_pane_g6

0x5cdb,	// (0x000152ec) set_opt_bg_pane_g7

0x5ce3,	// (0x000152f4) set_opt_bg_pane_g8

0x5ced,	// (0x000152fe) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0001ef8b) set_opt_bg_pane_g

0x5cc4,	// (0x000152d5) slider_set_pane_g1

0x0e4a,	// (0x0001045b) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0001ef7c) slider_set_pane_g

0x0de6,	// (0x000103f7) volume_set_pane_g1

0x0dee,	// (0x000103ff) volume_set_pane_g2

0x0df6,	// (0x00010407) volume_set_pane_g3

0x0dfe,	// (0x0001040f) volume_set_pane_g4

0x0e06,	// (0x00010417) volume_set_pane_g5

0x0e0e,	// (0x0001041f) volume_set_pane_g6

0x0e16,	// (0x00010427) volume_set_pane_g7

0x0e1e,	// (0x0001042f) volume_set_pane_g8

0x0e26,	// (0x00010437) volume_set_pane_g9

0x0e2e,	// (0x0001043f) volume_set_pane_g10

0x0009,

0xf943,	// (0x0001ef54) volume_set_pane_g

0xbe1c,	// (0x0001b42d) indicator_pane_ParamLimits

0xbe1c,	// (0x0001b42d) indicator_pane

0xbe44,	// (0x0001b455) main_idle_pane_g2_ParamLimits

0xbe44,	// (0x0001b455) main_idle_pane_g2

0xbe7c,	// (0x0001b48d) main_pane_idle_g1_ParamLimits

0xbe7c,	// (0x0001b48d) main_pane_idle_g1

0x1e59,	// (0x0001146a) popup_clock_digital_analogue_window_ParamLimits

0x1e59,	// (0x0001146a) popup_clock_digital_analogue_window

0xbea3,	// (0x0001b4b4) soft_indicator_pane_ParamLimits

0xbea3,	// (0x0001b4b4) soft_indicator_pane

0xbebd,	// (0x0001b4ce) wallpaper_pane_ParamLimits

0xbebd,	// (0x0001b4ce) wallpaper_pane

0x1cbb,	// (0x000112cc) wallpaper_pane_g1

0xbecf,	// (0x0001b4e0) indicator_pane_g1_ParamLimits

0xbecf,	// (0x0001b4e0) indicator_pane_g1

0x619e,	// (0x000157af) navi_navi_icon_text_pane_srt_g1

0x1eab,	// (0x000114bc) soft_indicator_pane_t1

0x1ec5,	// (0x000114d6) aid_ps_area_pane

0xbee5,	// (0x0001b4f6) aid_ps_clock_pane

0x1ee4,	// (0x000114f5) aid_ps_indicator_pane

0x1ef0,	// (0x00011501) indicator_ps_pane_ParamLimits

0x1ef0,	// (0x00011501) indicator_ps_pane

0x1eff,	// (0x00011510) power_save_pane_g1_ParamLimits

0x1eff,	// (0x00011510) power_save_pane_g1

0x1f0b,	// (0x0001151c) power_save_pane_g2_ParamLimits

0x1f0b,	// (0x0001151c) power_save_pane_g2

0x0083,	// (0x0000f694) aid_navinavi_width_pane

0x1ec5,	// (0x000114d6) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001eb97) power_save_pane_g_ParamLimits

0xf586,	// (0x0001eb97) power_save_pane_g

0x1f19,	// (0x0001152a) power_save_pane_t1_ParamLimits

0x1f19,	// (0x0001152a) power_save_pane_t1

0xbee5,	// (0x0001b4f6) aid_ps_clock_pane_ParamLimits

0x1ee4,	// (0x000114f5) aid_ps_indicator_pane_ParamLimits

0x1f2b,	// (0x0001153c) power_save_pane_t4_ParamLimits

0x1f2b,	// (0x0001153c) power_save_pane_t4

0x0001,

0xf58b,	// (0x0001eb9c) power_save_pane_t_ParamLimits

0xf58b,	// (0x0001eb9c) power_save_pane_t

0x1f55,	// (0x00011566) power_save_t3_ParamLimits

0x1f55,	// (0x00011566) power_save_t3

0x1f40,	// (0x00011551) power_save_t2_ParamLimits

0x1f40,	// (0x00011551) power_save_t2

0x1f6a,	// (0x0001157b) indicator_ps_pane_g1

0xbef3,	// (0x0001b504) ai_gene_pane_ParamLimits

0xbef3,	// (0x0001b504) ai_gene_pane

0xbf0a,	// (0x0001b51b) ai_links_pane_ParamLimits

0xbf0a,	// (0x0001b51b) ai_links_pane

0xbf22,	// (0x0001b533) indicator_pane_cp1_ParamLimits

0xbf22,	// (0x0001b533) indicator_pane_cp1

0xbf31,	// (0x0001b542) main_pane_idle_g1_cp_ParamLimits

0xbf31,	// (0x0001b542) main_pane_idle_g1_cp

0x1fa3,	// (0x000115b4) popup_ai_links_title_window

0xbf49,	// (0x0001b55a) soft_indicator_pane_cp1_ParamLimits

0xbf49,	// (0x0001b55a) soft_indicator_pane_cp1

0x5a75,	// (0x00015086) ai_links_pane_g1

0x5a7e,	// (0x0001508f) grid_ai_links_pane

0xd6c2,	// (0x0001ccd3) ai_gene_pane_1

0x5a63,	// (0x00015074) ai_gene_pane_2

0x5a6c,	// (0x0001507d) list_highlight_pane_cp4

0xd69e,	// (0x0001ccaf) cell_ai_link_pane_ParamLimits

0xd69e,	// (0x0001ccaf) cell_ai_link_pane

0x5a34,	// (0x00015045) cell_ai_link_pane_g1

0x21dc,	// (0x000117ed) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x0001ef2f) cell_ai_link_pane_g

0x1cc5,	// (0x000112d6) grid_highlight_cp2

0x1cc5,	// (0x000112d6) bg_popup_sub_pane_cp1

0x1fc6,	// (0x000115d7) popup_ai_links_title_window_t1

0x5982,	// (0x00014f93) ai_gene_pane_1_g1_ParamLimits

0x5982,	// (0x00014f93) ai_gene_pane_1_g1

0x598e,	// (0x00014f9f) ai_gene_pane_1_g2_ParamLimits

0x598e,	// (0x00014f9f) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x0001ef25) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x0001ef25) ai_gene_pane_1_g

0x599b,	// (0x00014fac) ai_gene_pane_1_t1_ParamLimits

0x599b,	// (0x00014fac) ai_gene_pane_1_t1

0x59cf,	// (0x00014fe0) grid_ai_soft_ind_pane

0x596d,	// (0x00014f7e) ai_gene_pane_2_t1_ParamLimits

0x596d,	// (0x00014f7e) ai_gene_pane_2_t1

0xbf5d,	// (0x0001b56e) main_pane_empty_t1_ParamLimits

0xbf5d,	// (0x0001b56e) main_pane_empty_t1

0xbf75,	// (0x0001b586) main_pane_empty_t2_ParamLimits

0xbf75,	// (0x0001b586) main_pane_empty_t2

0xbf8a,	// (0x0001b59b) main_pane_empty_t3_ParamLimits

0xbf8a,	// (0x0001b59b) main_pane_empty_t3

0xbf9c,	// (0x0001b5ad) main_pane_empty_t4_ParamLimits

0xbf9c,	// (0x0001b5ad) main_pane_empty_t4

0xbfae,	// (0x0001b5bf) main_pane_empty_t5_ParamLimits

0xbfae,	// (0x0001b5bf) main_pane_empty_t5

0x0004,

0xf590,	// (0x0001eba1) main_pane_empty_t_ParamLimits

0xf590,	// (0x0001eba1) main_pane_empty_t

0x2dc1,	// (0x000123d2) bg_popup_window_pane_ParamLimits

0x2dc1,	// (0x000123d2) bg_popup_window_pane

0x56d7,	// (0x00014ce8) find_popup_pane_cp2_ParamLimits

0x56d7,	// (0x00014ce8) find_popup_pane_cp2

0x56e3,	// (0x00014cf4) heading_pane_ParamLimits

0x56e3,	// (0x00014cf4) heading_pane

0x1cc5,	// (0x000112d6) bg_popup_sub_pane

0xd601,	// (0x0001cc12) bg_popup_window_pane_g1_ParamLimits

0xd601,	// (0x0001cc12) bg_popup_window_pane_g1

0xd610,	// (0x0001cc21) bg_popup_window_pane_g2_ParamLimits

0xd610,	// (0x0001cc21) bg_popup_window_pane_g2

0xd61c,	// (0x0001cc2d) bg_popup_window_pane_g3_ParamLimits

0xd61c,	// (0x0001cc2d) bg_popup_window_pane_g3

0xd628,	// (0x0001cc39) bg_popup_window_pane_g4_ParamLimits

0xd628,	// (0x0001cc39) bg_popup_window_pane_g4

0xd637,	// (0x0001cc48) bg_popup_window_pane_g5_ParamLimits

0xd637,	// (0x0001cc48) bg_popup_window_pane_g5

0xd647,	// (0x0001cc58) bg_popup_window_pane_g6_ParamLimits

0xd647,	// (0x0001cc58) bg_popup_window_pane_g6

0xd653,	// (0x0001cc64) bg_popup_window_pane_g7_ParamLimits

0xd653,	// (0x0001cc64) bg_popup_window_pane_g7

0xd662,	// (0x0001cc73) bg_popup_window_pane_g8_ParamLimits

0xd662,	// (0x0001cc73) bg_popup_window_pane_g8

0xd671,	// (0x0001cc82) bg_popup_window_pane_g9_ParamLimits

0xd671,	// (0x0001cc82) bg_popup_window_pane_g9

0x56bd,	// (0x00014cce) bg_popup_window_pane_g10_ParamLimits

0x56bd,	// (0x00014cce) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x0001eeed) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x0001eeed) bg_popup_window_pane_g

0x55e6,	// (0x00014bf7) bg_popup_heading_pane_ParamLimits

0x55e6,	// (0x00014bf7) bg_popup_heading_pane

0x0ed2,	// (0x000104e3) tabs_4_passive_pane_cp_srt_ParamLimits

0x0ed2,	// (0x000104e3) tabs_4_passive_pane_cp_srt

0x0ee4,	// (0x000104f5) tabs_4_passive_pane_srt_ParamLimits

0x55fa,	// (0x00014c0b) heading_pane_g2

0x0ee4,	// (0x000104f5) tabs_4_passive_pane_srt

0x4957,	// (0x00013f68) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4957,	// (0x00013f68) bg_passive_tab_pane_cp3_srt

0x5602,	// (0x00014c13) heading_pane_t1_ParamLimits

0x5602,	// (0x00014c13) heading_pane_t1

0x5619,	// (0x00014c2a) heading_pane_t2_ParamLimits

0x5619,	// (0x00014c2a) heading_pane_t2

0x0001,

0xf8d7,	// (0x0001eee8) heading_pane_t_ParamLimits

0xf8d7,	// (0x0001eee8) heading_pane_t

0x5113,	// (0x00014724) bg_popup_heading_pane_g1

0x51c2,	// (0x000147d3) bg_popup_heading_pane_g2

0x51cc,	// (0x000147dd) bg_popup_heading_pane_g3

0x51d6,	// (0x000147e7) bg_popup_heading_pane_g4

0x51e0,	// (0x000147f1) bg_popup_heading_pane_g5

0x51ea,	// (0x000147fb) bg_popup_heading_pane_g6

0x51f2,	// (0x00014803) bg_popup_heading_pane_g7

0x51fa,	// (0x0001480b) bg_popup_heading_pane_g8

0x5204,	// (0x00014815) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x0001eea4) bg_popup_heading_pane_g

0x483d,	// (0x00013e4e) bg_popup_sub_pane_g1

0x484d,	// (0x00013e5e) bg_popup_sub_pane_g2

0x4845,	// (0x00013e56) bg_popup_sub_pane_g3

0x485d,	// (0x00013e6e) bg_popup_sub_pane_g4

0x4855,	// (0x00013e66) bg_popup_sub_pane_g5

0x4865,	// (0x00013e76) bg_popup_sub_pane_g6

0x486d,	// (0x00013e7e) bg_popup_sub_pane_g7

0x487d,	// (0x00013e8e) bg_popup_sub_pane_g8

0x4875,	// (0x00013e86) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x0001ee7e) bg_popup_sub_pane_g

0x203a,	// (0x0001164b) bg_popup_window_pane_cp5_ParamLimits

0x203a,	// (0x0001164b) bg_popup_window_pane_cp5

0x2056,	// (0x00011667) popup_note_window_g1_ParamLimits

0x2056,	// (0x00011667) popup_note_window_g1

0x2062,	// (0x00011673) popup_note_window_t1_ParamLimits

0x2062,	// (0x00011673) popup_note_window_t1

0x2078,	// (0x00011689) popup_note_window_t2_ParamLimits

0x2078,	// (0x00011689) popup_note_window_t2

0x208e,	// (0x0001169f) popup_note_window_t3_ParamLimits

0x208e,	// (0x0001169f) popup_note_window_t3

0x20a4,	// (0x000116b5) popup_note_window_t4_ParamLimits

0x20a4,	// (0x000116b5) popup_note_window_t4

0x20cc,	// (0x000116dd) popup_note_window_t5_ParamLimits

0x20cc,	// (0x000116dd) popup_note_window_t5

0x0004,

0xf59b,	// (0x0001ebac) popup_note_window_t_ParamLimits

0xf59b,	// (0x0001ebac) popup_note_window_t

0x20f0,	// (0x00011701) bg_popup_window_pane_cp6_ParamLimits

0x20f0,	// (0x00011701) bg_popup_window_pane_cp6

0x508f,	// (0x000146a0) popup_note_image_window_g1_ParamLimits

0x508f,	// (0x000146a0) popup_note_image_window_g1

0x509b,	// (0x000146ac) popup_note_image_window_g2_ParamLimits

0x509b,	// (0x000146ac) popup_note_image_window_g2

0x0001,

0xf861,	// (0x0001ee72) popup_note_image_window_g_ParamLimits

0xf861,	// (0x0001ee72) popup_note_image_window_g

0x50b4,	// (0x000146c5) popup_note_image_window_t1_ParamLimits

0x50b4,	// (0x000146c5) popup_note_image_window_t1

0x50cd,	// (0x000146de) popup_note_image_window_t2_ParamLimits

0x50cd,	// (0x000146de) popup_note_image_window_t2

0x50e6,	// (0x000146f7) popup_note_image_window_t3_ParamLimits

0x50e6,	// (0x000146f7) popup_note_image_window_t3

0x0002,

0xf866,	// (0x0001ee77) popup_note_image_window_t_ParamLimits

0xf866,	// (0x0001ee77) popup_note_image_window_t

0x4f50,	// (0x00014561) bg_popup_window_pane_cp7_ParamLimits

0x4f50,	// (0x00014561) bg_popup_window_pane_cp7

0x4f80,	// (0x00014591) popup_note_wait_window_g1_ParamLimits

0x4f80,	// (0x00014591) popup_note_wait_window_g1

0x4f8c,	// (0x0001459d) popup_note_wait_window_g2_ParamLimits

0x4f8c,	// (0x0001459d) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x0001ee60) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x0001ee60) popup_note_wait_window_g

0x4fa4,	// (0x000145b5) popup_note_wait_window_t1_ParamLimits

0x4fa4,	// (0x000145b5) popup_note_wait_window_t1

0x4fcb,	// (0x000145dc) popup_note_wait_window_t2_ParamLimits

0x4fcb,	// (0x000145dc) popup_note_wait_window_t2

0x4fe8,	// (0x000145f9) popup_note_wait_window_t3_ParamLimits

0x4fe8,	// (0x000145f9) popup_note_wait_window_t3

0x4ffb,	// (0x0001460c) popup_note_wait_window_t4_ParamLimits

0x4ffb,	// (0x0001460c) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x0001ee67) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x0001ee67) popup_note_wait_window_t

0x5020,	// (0x00014631) wait_bar_pane_ParamLimits

0x5020,	// (0x00014631) wait_bar_pane

0x1cc5,	// (0x000112d6) wait_anim_pane

0x1cc5,	// (0x000112d6) wait_border_pane

0x1cbb,	// (0x000112cc) wait_anim_pane_g1

0x1cbb,	// (0x000112cc) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001ed2b) wait_anim_pane_g

0x4ef4,	// (0x00014505) wait_border_pane_g1

0x4eff,	// (0x00014510) wait_border_pane_g2

0x4f08,	// (0x00014519) wait_border_pane_g3

0x0002,

0xf848,	// (0x0001ee59) wait_border_pane_g

0x4d5f,	// (0x00014370) bg_popup_window_pane_cp16_ParamLimits

0x4d5f,	// (0x00014370) bg_popup_window_pane_cp16

0x4e5f,	// (0x00014470) indicator_popup_pane_cp4_ParamLimits

0x4e5f,	// (0x00014470) indicator_popup_pane_cp4

0x4e73,	// (0x00014484) popup_query_data_window_t1_ParamLimits

0x4e73,	// (0x00014484) popup_query_data_window_t1

0x4e85,	// (0x00014496) popup_query_data_window_t2_ParamLimits

0x4e85,	// (0x00014496) popup_query_data_window_t2

0x4e9e,	// (0x000144af) popup_query_data_window_t3_ParamLimits

0x4e9e,	// (0x000144af) popup_query_data_window_t3

0x0002,

0xf841,	// (0x0001ee52) popup_query_data_window_t_ParamLimits

0xf841,	// (0x0001ee52) popup_query_data_window_t

0x4eb8,	// (0x000144c9) query_popup_data_pane_ParamLimits

0x4eb8,	// (0x000144c9) query_popup_data_pane

0x4ecc,	// (0x000144dd) query_popup_data_pane_cp1_ParamLimits

0x4ecc,	// (0x000144dd) query_popup_data_pane_cp1

0x4d5f,	// (0x00014370) bg_popup_window_pane_cp10_ParamLimits

0x4d5f,	// (0x00014370) bg_popup_window_pane_cp10

0x4d91,	// (0x000143a2) indicator_popup_pane_ParamLimits

0x4d91,	// (0x000143a2) indicator_popup_pane

0x4db3,	// (0x000143c4) popup_query_code_window_t1_ParamLimits

0x4db3,	// (0x000143c4) popup_query_code_window_t1

0x4dcd,	// (0x000143de) popup_query_code_window_t2_ParamLimits

0x4dcd,	// (0x000143de) popup_query_code_window_t2

0x4e16,	// (0x00014427) popup_query_code_window_t3_ParamLimits

0x4e16,	// (0x00014427) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0001ee4b) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0001ee4b) popup_query_code_window_t

0x4e45,	// (0x00014456) query_popup_pane_ParamLimits

0x4e45,	// (0x00014456) query_popup_pane

0x20f0,	// (0x00011701) bg_popup_window_pane_cp15_ParamLimits

0x20f0,	// (0x00011701) bg_popup_window_pane_cp15

0x210e,	// (0x0001171f) indicator_popup_pane_cp1_ParamLimits

0x210e,	// (0x0001171f) indicator_popup_pane_cp1

0x2121,	// (0x00011732) indicator_popup_pane_cp2_ParamLimits

0x2121,	// (0x00011732) indicator_popup_pane_cp2

0x2134,	// (0x00011745) popup_query_data_code_window_g1_ParamLimits

0x2134,	// (0x00011745) popup_query_data_code_window_g1

0x2147,	// (0x00011758) popup_query_data_code_window_t1_ParamLimits

0x2147,	// (0x00011758) popup_query_data_code_window_t1

0x2159,	// (0x0001176a) popup_query_data_code_window_t2_ParamLimits

0x2159,	// (0x0001176a) popup_query_data_code_window_t2

0x216b,	// (0x0001177c) popup_query_data_code_window_t3_ParamLimits

0x216b,	// (0x0001177c) popup_query_data_code_window_t3

0x2181,	// (0x00011792) popup_query_data_code_window_t4_ParamLimits

0x2181,	// (0x00011792) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0001ebb7) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0001ebb7) popup_query_data_code_window_t

0x0b93,	// (0x000101a4) list_single_midp_graphic_pane_g3

0x2199,	// (0x000117aa) query_popup_data_pane_cp2_ParamLimits

0x21ac,	// (0x000117bd) query_popup_pane_cp2_ParamLimits

0x21ac,	// (0x000117bd) query_popup_pane_cp2

0x1cc5,	// (0x000112d6) bg_popup_window_pane_cp11

0x4d57,	// (0x00014368) heading_pane_cp5

0x2294,	// (0x000118a5) listscroll_popup_info_pane

0x1cc5,	// (0x000112d6) input_focus_pane_cp3

0x21bf,	// (0x000117d0) query_popup_pane_t1

0x21cd,	// (0x000117de) list_popup_info_pane_ParamLimits

0x21cd,	// (0x000117de) list_popup_info_pane

0x21dc,	// (0x000117ed) listscroll_popup_info_pane_g1

0x21e4,	// (0x000117f5) scroll_pane_cp7

0x21ee,	// (0x000117ff) popup_info_list_pane_t1_ParamLimits

0x21ee,	// (0x000117ff) popup_info_list_pane_t1

0x2208,	// (0x00011819) popup_info_list_pane_t2_ParamLimits

0x2208,	// (0x00011819) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0001ebc0) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0001ebc0) popup_info_list_pane_t

0x1cc5,	// (0x000112d6) bg_popup_window_pane_cp12

0x61b8,	// (0x000157c9) find_popup_pane

0x1da5,	// (0x000113b6) bg_popup_window_pane_cp3

0x2222,	// (0x00011833) heading_pane_cp3

0x222e,	// (0x0001183f) listscroll_popup_graphic_pane

0x1cc5,	// (0x000112d6) bg_popup_window_pane_cp4

0xc010,	// (0x0001b621) heading_pane_cp4

0x2294,	// (0x000118a5) listscroll_popup_colour_pane

0xc018,	// (0x0001b629) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc018,	// (0x0001b629) cell_large_graphic_colour_none_popup_pane

0xc02c,	// (0x0001b63d) grid_large_graphic_colour_popup_pane_ParamLimits

0xc02c,	// (0x0001b63d) grid_large_graphic_colour_popup_pane

0xc050,	// (0x0001b661) listscroll_popup_colour_pane_g1_ParamLimits

0xc050,	// (0x0001b661) listscroll_popup_colour_pane_g1

0xc067,	// (0x0001b678) listscroll_popup_colour_pane_g2_ParamLimits

0xc067,	// (0x0001b678) listscroll_popup_colour_pane_g2

0xc07e,	// (0x0001b68f) listscroll_popup_colour_pane_g3_ParamLimits

0xc07e,	// (0x0001b68f) listscroll_popup_colour_pane_g3

0xc08e,	// (0x0001b69f) listscroll_popup_colour_pane_g4_ParamLimits

0xc08e,	// (0x0001b69f) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0001ebc5) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0001ebc5) listscroll_popup_colour_pane_g

0x232e,	// (0x0001193f) scroll_pane_cp6_ParamLimits

0x232e,	// (0x0001193f) scroll_pane_cp6

0xc09e,	// (0x0001b6af) cell_large_graphic_colour_popup_pane_ParamLimits

0xc09e,	// (0x0001b6af) cell_large_graphic_colour_popup_pane

0x235f,	// (0x00011970) cell_large_graphic_colour_none_popup_pane_t1

0x1cc5,	// (0x000112d6) grid_highlight_pane_cp5

0x236e,	// (0x0001197f) cell_large_graphic_colour_popup_pane_g1

0x2376,	// (0x00011987) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0001ebce) cell_large_graphic_colour_popup_pane_g

0x237e,	// (0x0001198f) cell_large_graphic_colour_popup_pane_g2_copy1

0x2387,	// (0x00011998) grid_highlight_pane_cp4

0x238f,	// (0x000119a0) bg_popup_window_pane_cp8_ParamLimits

0x238f,	// (0x000119a0) bg_popup_window_pane_cp8

0x23aa,	// (0x000119bb) popup_snote_single_text_window_g1_ParamLimits

0x23aa,	// (0x000119bb) popup_snote_single_text_window_g1

0x23bc,	// (0x000119cd) popup_snote_single_text_window_t1_ParamLimits

0x23bc,	// (0x000119cd) popup_snote_single_text_window_t1

0x23cf,	// (0x000119e0) popup_snote_single_text_window_t2_ParamLimits

0x23cf,	// (0x000119e0) popup_snote_single_text_window_t2

0x23e2,	// (0x000119f3) popup_snote_single_text_window_t3_ParamLimits

0x23e2,	// (0x000119f3) popup_snote_single_text_window_t3

0x241b,	// (0x00011a2c) popup_snote_single_text_window_t4_ParamLimits

0x241b,	// (0x00011a2c) popup_snote_single_text_window_t4

0x244f,	// (0x00011a60) popup_snote_single_text_window_t5_ParamLimits

0x244f,	// (0x00011a60) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0001ebd3) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0001ebd3) popup_snote_single_text_window_t

0x247e,	// (0x00011a8f) bg_popup_window_pane_cp9_ParamLimits

0x247e,	// (0x00011a8f) bg_popup_window_pane_cp9

0x23aa,	// (0x000119bb) popup_snote_single_graphic_window_g1_ParamLimits

0x23aa,	// (0x000119bb) popup_snote_single_graphic_window_g1

0x248c,	// (0x00011a9d) popup_snote_single_graphic_window_g2_ParamLimits

0x248c,	// (0x00011a9d) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0001ebde) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0001ebde) popup_snote_single_graphic_window_g

0x2498,	// (0x00011aa9) popup_snote_single_graphic_window_t1_ParamLimits

0x2498,	// (0x00011aa9) popup_snote_single_graphic_window_t1

0x24ab,	// (0x00011abc) popup_snote_single_graphic_window_t2_ParamLimits

0x24ab,	// (0x00011abc) popup_snote_single_graphic_window_t2

0x24be,	// (0x00011acf) popup_snote_single_graphic_window_t3_ParamLimits

0x24be,	// (0x00011acf) popup_snote_single_graphic_window_t3

0x24f7,	// (0x00011b08) popup_snote_single_graphic_window_t4_ParamLimits

0x24f7,	// (0x00011b08) popup_snote_single_graphic_window_t4

0x252b,	// (0x00011b3c) popup_snote_single_graphic_window_t5_ParamLimits

0x252b,	// (0x00011b3c) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0001ebe3) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0001ebe3) popup_snote_single_graphic_window_t

0x60fc,	// (0x0001570d) grid_graphic_popup_pane_ParamLimits

0x60fc,	// (0x0001570d) grid_graphic_popup_pane

0x6124,	// (0x00015735) listscroll_popup_graphic_pane_g1_ParamLimits

0x6124,	// (0x00015735) listscroll_popup_graphic_pane_g1

0xd9c5,	// (0x0001cfd6) listscroll_popup_graphic_pane_g2_ParamLimits

0xd9c5,	// (0x0001cfd6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x0001efc8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x0001efc8) listscroll_popup_graphic_pane_g

0x614c,	// (0x0001575d) scroll_pane_cp5

0xd989,	// (0x0001cf9a) cell_graphic_popup_pane_ParamLimits

0xd989,	// (0x0001cf9a) cell_graphic_popup_pane

0x6086,	// (0x00015697) cell_graphic_popup_pane_g1

0x608e,	// (0x0001569f) cell_graphic_popup_pane_g2

0x237e,	// (0x0001198f) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x0001efc1) cell_graphic_popup_pane_g

0x6097,	// (0x000156a8) cell_graphic_popup_pane_t2

0x2387,	// (0x00011998) grid_highlight_pane_cp3

0x256c,	// (0x00011b7d) list_gen_pane_ParamLimits

0x256c,	// (0x00011b7d) list_gen_pane

0x259e,	// (0x00011baf) scroll_pane

0xd944,	// (0x0001cf55) bg_list_pane_g1_ParamLimits

0xd944,	// (0x0001cf55) bg_list_pane_g1

0x6003,	// (0x00015614) bg_list_pane_g2_ParamLimits

0x6003,	// (0x00015614) bg_list_pane_g2

0x6016,	// (0x00015627) bg_list_pane_g3_ParamLimits

0x6016,	// (0x00015627) bg_list_pane_g3

0x6028,	// (0x00015639) bg_list_pane_g4_ParamLimits

0x6028,	// (0x00015639) bg_list_pane_g4

0xd95f,	// (0x0001cf70) bg_list_pane_g5_ParamLimits

0xd95f,	// (0x0001cf70) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x0001efb6) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x0001efb6) bg_list_pane_g

0xd8ea,	// (0x0001cefb) list_double2_graphic_large_graphic_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_double2_graphic_large_graphic_pane

0xd8ea,	// (0x0001cefb) list_double2_graphic_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_double2_graphic_pane

0xd8ea,	// (0x0001cefb) list_double2_large_graphic_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_double2_large_graphic_pane

0xd8ea,	// (0x0001cefb) list_double2_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_double2_pane

0xd8ea,	// (0x0001cefb) list_double_graphic_heading_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_double_graphic_heading_pane

0xd8ea,	// (0x0001cefb) list_double_graphic_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_double_graphic_pane

0xd8ea,	// (0x0001cefb) list_double_heading_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_double_heading_pane

0xd8ea,	// (0x0001cefb) list_double_large_graphic_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_double_large_graphic_pane

0xd8ea,	// (0x0001cefb) list_double_number_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_double_number_pane

0xd8ea,	// (0x0001cefb) list_double_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_double_pane

0xd8ea,	// (0x0001cefb) list_double_time_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_double_time_pane

0xd8ea,	// (0x0001cefb) list_setting_number_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_setting_number_pane

0xd8ea,	// (0x0001cefb) list_setting_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_setting_pane

0xd8fc,	// (0x0001cf0d) list_single_2graphic_pane_ParamLimits

0xd8fc,	// (0x0001cf0d) list_single_2graphic_pane

0xd8fc,	// (0x0001cf0d) list_single_graphic_heading_pane_ParamLimits

0xd8fc,	// (0x0001cf0d) list_single_graphic_heading_pane

0xd8fc,	// (0x0001cf0d) list_single_graphic_pane_ParamLimits

0xd8fc,	// (0x0001cf0d) list_single_graphic_pane

0xd8fc,	// (0x0001cf0d) list_single_heading_pane_ParamLimits

0xd8fc,	// (0x0001cf0d) list_single_heading_pane

0xd8ea,	// (0x0001cefb) list_single_large_graphic_pane_ParamLimits

0xd8ea,	// (0x0001cefb) list_single_large_graphic_pane

0xd8fc,	// (0x0001cf0d) list_single_number_heading_pane_ParamLimits

0xd8fc,	// (0x0001cf0d) list_single_number_heading_pane

0xd8fc,	// (0x0001cf0d) list_single_number_pane_ParamLimits

0xd8fc,	// (0x0001cf0d) list_single_number_pane

0xd8fc,	// (0x0001cf0d) list_single_pane_ParamLimits

0xd8fc,	// (0x0001cf0d) list_single_pane

0x1cc5,	// (0x000112d6) list_highlight_pane_cp1

0x47b3,	// (0x00013dc4) list_single_pane_g1_ParamLimits

0x47b3,	// (0x00013dc4) list_single_pane_g1

0x47bf,	// (0x00013dd0) list_single_pane_g2_ParamLimits

0x47bf,	// (0x00013dd0) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0001ebf5) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0001ebf5) list_single_pane_g

0x6770,	// (0x00015d81) list_single_pane_t1_ParamLimits

0x6770,	// (0x00015d81) list_single_pane_t1

0x47b3,	// (0x00013dc4) list_single_number_pane_g1_ParamLimits

0x47b3,	// (0x00013dc4) list_single_number_pane_g1

0x47bf,	// (0x00013dd0) list_single_number_pane_g2_ParamLimits

0x47bf,	// (0x00013dd0) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0001ebf5) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0001ebf5) list_single_number_pane_g

0x47cb,	// (0x00013ddc) list_single_number_pane_t1_ParamLimits

0x47cb,	// (0x00013ddc) list_single_number_pane_t1

0xd72c,	// (0x0001cd3d) list_single_number_pane_t2_ParamLimits

0xd72c,	// (0x0001cd3d) list_single_number_pane_t2

0x0001,

0xf966,	// (0x0001ef77) list_single_number_pane_t_ParamLimits

0xf966,	// (0x0001ef77) list_single_number_pane_t

0x7bdc,	// (0x000171ed) list_single_graphic_pane_g1_ParamLimits

0x7bdc,	// (0x000171ed) list_single_graphic_pane_g1

0x47b3,	// (0x00013dc4) list_single_graphic_pane_g2_ParamLimits

0x47b3,	// (0x00013dc4) list_single_graphic_pane_g2

0x47bf,	// (0x00013dd0) list_single_graphic_pane_g3_ParamLimits

0x47bf,	// (0x00013dd0) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0001ebee) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0001ebee) list_single_graphic_pane_g

0xc0c7,	// (0x0001b6d8) list_single_graphic_pane_t1_ParamLimits

0xc0c7,	// (0x0001b6d8) list_single_graphic_pane_t1

0x47b3,	// (0x00013dc4) list_single_heading_pane_g1_ParamLimits

0x47b3,	// (0x00013dc4) list_single_heading_pane_g1

0x47bf,	// (0x00013dd0) list_single_heading_pane_g2_ParamLimits

0x47bf,	// (0x00013dd0) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001ebf5) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001ebf5) list_single_heading_pane_g

0xc0dd,	// (0x0001b6ee) list_single_heading_pane_t1_ParamLimits

0xc0dd,	// (0x0001b6ee) list_single_heading_pane_t1

0xc0f3,	// (0x0001b704) list_single_heading_pane_t2_ParamLimits

0xc0f3,	// (0x0001b704) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0001ebfa) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0001ebfa) list_single_heading_pane_t

0x47b3,	// (0x00013dc4) list_single_number_heading_pane_g1_ParamLimits

0x47b3,	// (0x00013dc4) list_single_number_heading_pane_g1

0x47bf,	// (0x00013dd0) list_single_number_heading_pane_g2_ParamLimits

0x47bf,	// (0x00013dd0) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001ebf5) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001ebf5) list_single_number_heading_pane_g

0xc0dd,	// (0x0001b6ee) list_single_number_heading_pane_t1_ParamLimits

0xc0dd,	// (0x0001b6ee) list_single_number_heading_pane_t1

0xc105,	// (0x0001b716) list_single_number_heading_pane_t2_ParamLimits

0xc105,	// (0x0001b716) list_single_number_heading_pane_t2

0x674a,	// (0x00015d5b) list_single_number_heading_pane_t3_ParamLimits

0x674a,	// (0x00015d5b) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0001ebff) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0001ebff) list_single_number_heading_pane_t

0x47a7,	// (0x00013db8) list_single_graphic_heading_pane_g1_ParamLimits

0x47a7,	// (0x00013db8) list_single_graphic_heading_pane_g1

0xc117,	// (0x0001b728) list_single_graphic_heading_pane_g4_ParamLimits

0xc117,	// (0x0001b728) list_single_graphic_heading_pane_g4

0x47bf,	// (0x00013dd0) list_single_graphic_heading_pane_g5_ParamLimits

0x47bf,	// (0x00013dd0) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0001ec06) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0001ec06) list_single_graphic_heading_pane_g

0xc0dd,	// (0x0001b6ee) list_single_graphic_heading_pane_t1_ParamLimits

0xc0dd,	// (0x0001b6ee) list_single_graphic_heading_pane_t1

0xc128,	// (0x0001b739) list_single_graphic_heading_pane_t2_ParamLimits

0xc128,	// (0x0001b739) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0001ec0d) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0001ec0d) list_single_graphic_heading_pane_t

0x6786,	// (0x00015d97) list_single_large_graphic_pane_g1_ParamLimits

0x6786,	// (0x00015d97) list_single_large_graphic_pane_g1

0x6792,	// (0x00015da3) list_single_large_graphic_pane_g2_ParamLimits

0x6792,	// (0x00015da3) list_single_large_graphic_pane_g2

0x679e,	// (0x00015daf) list_single_large_graphic_pane_g3_ParamLimits

0x679e,	// (0x00015daf) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0001ec12) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0001ec12) list_single_large_graphic_pane_g

0x4eff,	// (0x00014510) wait_border_pane_g2_copy1

0xc13a,	// (0x0001b74b) list_single_large_graphic_pane_g4_cp2

0x67aa,	// (0x00015dbb) list_single_large_graphic_pane_t1_ParamLimits

0x67aa,	// (0x00015dbb) list_single_large_graphic_pane_t1

0x37ff,	// (0x00012e10) list_double_pane_g1_ParamLimits

0x37ff,	// (0x00012e10) list_double_pane_g1

0xc142,	// (0x0001b753) list_double_pane_g2_ParamLimits

0xc142,	// (0x0001b753) list_double_pane_g2

0x0001,

0xf608,	// (0x0001ec19) list_double_pane_g_ParamLimits

0xf608,	// (0x0001ec19) list_double_pane_g

0xc14e,	// (0x0001b75f) list_double_pane_t1_ParamLimits

0xc14e,	// (0x0001b75f) list_double_pane_t1

0xc164,	// (0x0001b775) list_double_pane_t2_ParamLimits

0xc164,	// (0x0001b775) list_double_pane_t2

0x0001,

0xf60d,	// (0x0001ec1e) list_double_pane_t_ParamLimits

0xf60d,	// (0x0001ec1e) list_double_pane_t

0xc176,	// (0x0001b787) list_double2_pane_g1_ParamLimits

0xc176,	// (0x0001b787) list_double2_pane_g1

0x28f3,	// (0x00011f04) list_double2_pane_g2_ParamLimits

0x28f3,	// (0x00011f04) list_double2_pane_g2

0x0001,

0xf612,	// (0x0001ec23) list_double2_pane_g_ParamLimits

0xf612,	// (0x0001ec23) list_double2_pane_g

0xc187,	// (0x0001b798) list_double2_pane_t1_ParamLimits

0xc187,	// (0x0001b798) list_double2_pane_t1

0xc19d,	// (0x0001b7ae) list_double2_pane_t2_ParamLimits

0xc19d,	// (0x0001b7ae) list_double2_pane_t2

0x0001,

0xf617,	// (0x0001ec28) list_double2_pane_t_ParamLimits

0xf617,	// (0x0001ec28) list_double2_pane_t

0x37ff,	// (0x00012e10) list_double_number_pane_g1_ParamLimits

0x37ff,	// (0x00012e10) list_double_number_pane_g1

0xc142,	// (0x0001b753) list_double_number_pane_g2_ParamLimits

0xc142,	// (0x0001b753) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0001ec19) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0001ec19) list_double_number_pane_g

0xc1af,	// (0x0001b7c0) list_double_number_pane_t1_ParamLimits

0xc1af,	// (0x0001b7c0) list_double_number_pane_t1

0xc1c1,	// (0x0001b7d2) list_double_number_pane_t2_ParamLimits

0xc1c1,	// (0x0001b7d2) list_double_number_pane_t2

0xc1d7,	// (0x0001b7e8) list_double_number_pane_t3_ParamLimits

0xc1d7,	// (0x0001b7e8) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0001ec2d) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0001ec2d) list_double_number_pane_t

0xc1e9,	// (0x0001b7fa) list_double_graphic_pane_g1_ParamLimits

0xc1e9,	// (0x0001b7fa) list_double_graphic_pane_g1

0xc1f5,	// (0x0001b806) list_double_graphic_pane_g2_ParamLimits

0xc1f5,	// (0x0001b806) list_double_graphic_pane_g2

0xc204,	// (0x0001b815) list_double_graphic_pane_g3_ParamLimits

0xc204,	// (0x0001b815) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0001ec34) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0001ec34) list_double_graphic_pane_g

0xc21c,	// (0x0001b82d) list_double_graphic_pane_t1_ParamLimits

0xc21c,	// (0x0001b82d) list_double_graphic_pane_t1

0xc232,	// (0x0001b843) list_double_graphic_pane_t2_ParamLimits

0xc232,	// (0x0001b843) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001ec3d) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001ec3d) list_double_graphic_pane_t

0xc244,	// (0x0001b855) list_double2_graphic_pane_g1_ParamLimits

0xc244,	// (0x0001b855) list_double2_graphic_pane_g1

0xc250,	// (0x0001b861) list_double2_graphic_pane_g2_ParamLimits

0xc250,	// (0x0001b861) list_double2_graphic_pane_g2

0x28f3,	// (0x00011f04) list_double2_graphic_pane_g3_ParamLimits

0x28f3,	// (0x00011f04) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0001ec42) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0001ec42) list_double2_graphic_pane_g

0xc25c,	// (0x0001b86d) list_double2_graphic_pane_t1_ParamLimits

0xc25c,	// (0x0001b86d) list_double2_graphic_pane_t1

0xc272,	// (0x0001b883) list_double2_graphic_pane_t2_ParamLimits

0xc272,	// (0x0001b883) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0001ec49) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0001ec49) list_double2_graphic_pane_t

0xc284,	// (0x0001b895) list_double_large_graphic_pane_g1_ParamLimits

0xc284,	// (0x0001b895) list_double_large_graphic_pane_g1

0xc2af,	// (0x0001b8c0) list_double_large_graphic_pane_g2_ParamLimits

0xc2af,	// (0x0001b8c0) list_double_large_graphic_pane_g2

0xc142,	// (0x0001b753) list_double_large_graphic_pane_g3_ParamLimits

0xc142,	// (0x0001b753) list_double_large_graphic_pane_g3

0xc2c0,	// (0x0001b8d1) list_double_large_graphic_pane_g4_ParamLimits

0xc2c0,	// (0x0001b8d1) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0001ec4e) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0001ec4e) list_double_large_graphic_pane_g

0xc2d2,	// (0x0001b8e3) list_double_large_graphic_pane_t1_ParamLimits

0xc2d2,	// (0x0001b8e3) list_double_large_graphic_pane_t1

0xc2eb,	// (0x0001b8fc) list_double_large_graphic_pane_t2_ParamLimits

0xc2eb,	// (0x0001b8fc) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0001ec59) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0001ec59) list_double_large_graphic_pane_t

0xc2fd,	// (0x0001b90e) list_double2_large_graphic_pane_g1_ParamLimits

0xc2fd,	// (0x0001b90e) list_double2_large_graphic_pane_g1

0xc176,	// (0x0001b787) list_double2_large_graphic_pane_g2_ParamLimits

0xc176,	// (0x0001b787) list_double2_large_graphic_pane_g2

0x28f3,	// (0x00011f04) list_double2_large_graphic_pane_g3_ParamLimits

0x28f3,	// (0x00011f04) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0001ec5e) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0001ec5e) list_double2_large_graphic_pane_g

0xc309,	// (0x0001b91a) list_double2_large_graphic_pane_t1_ParamLimits

0xc309,	// (0x0001b91a) list_double2_large_graphic_pane_t1

0xc31f,	// (0x0001b930) list_double2_large_graphic_pane_t2_ParamLimits

0xc31f,	// (0x0001b930) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0001ec65) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0001ec65) list_double2_large_graphic_pane_t

0xc331,	// (0x0001b942) list_double_heading_pane_g1_ParamLimits

0xc331,	// (0x0001b942) list_double_heading_pane_g1

0xc342,	// (0x0001b953) list_double_heading_pane_g2_ParamLimits

0xc342,	// (0x0001b953) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001ec6a) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001ec6a) list_double_heading_pane_g

0xc34e,	// (0x0001b95f) list_double_heading_pane_t1_ParamLimits

0xc34e,	// (0x0001b95f) list_double_heading_pane_t1

0xc364,	// (0x0001b975) list_double_heading_pane_t2_ParamLimits

0xc364,	// (0x0001b975) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0001ec6f) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0001ec6f) list_double_heading_pane_t

0x2788,	// (0x00011d99) list_double_graphic_heading_pane_g1_ParamLimits

0x2788,	// (0x00011d99) list_double_graphic_heading_pane_g1

0xc331,	// (0x0001b942) list_double_graphic_heading_pane_g2_ParamLimits

0xc331,	// (0x0001b942) list_double_graphic_heading_pane_g2

0xc342,	// (0x0001b953) list_double_graphic_heading_pane_g3_ParamLimits

0xc342,	// (0x0001b953) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0001ec74) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0001ec74) list_double_graphic_heading_pane_g

0xc376,	// (0x0001b987) list_double_graphic_heading_pane_t1_ParamLimits

0xc376,	// (0x0001b987) list_double_graphic_heading_pane_t1

0xc38c,	// (0x0001b99d) list_double_graphic_heading_pane_t2_ParamLimits

0xc38c,	// (0x0001b99d) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001ec7b) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001ec7b) list_double_graphic_heading_pane_t

0xc2af,	// (0x0001b8c0) list_double_time_pane_g1_ParamLimits

0xc2af,	// (0x0001b8c0) list_double_time_pane_g1

0xc142,	// (0x0001b753) list_double_time_pane_g2_ParamLimits

0xc142,	// (0x0001b753) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0001ec80) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0001ec80) list_double_time_pane_g

0xc39e,	// (0x0001b9af) list_double_time_pane_t1_ParamLimits

0xc39e,	// (0x0001b9af) list_double_time_pane_t1

0xc3b4,	// (0x0001b9c5) list_double_time_pane_t2_ParamLimits

0xc3b4,	// (0x0001b9c5) list_double_time_pane_t2

0xc3c6,	// (0x0001b9d7) list_double_time_pane_t3_ParamLimits

0xc3c6,	// (0x0001b9d7) list_double_time_pane_t3

0xc3d8,	// (0x0001b9e9) list_double_time_pane_t4_ParamLimits

0xc3d8,	// (0x0001b9e9) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0001ec85) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0001ec85) list_double_time_pane_t

0xc250,	// (0x0001b861) list_setting_pane_g1_ParamLimits

0xc250,	// (0x0001b861) list_setting_pane_g1

0x28f3,	// (0x00011f04) list_setting_pane_g2_ParamLimits

0x28f3,	// (0x00011f04) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0001ec8e) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0001ec8e) list_setting_pane_g

0xc3ea,	// (0x0001b9fb) list_setting_pane_t1_ParamLimits

0xc3ea,	// (0x0001b9fb) list_setting_pane_t1

0xc401,	// (0x0001ba12) list_setting_pane_t2_ParamLimits

0xc401,	// (0x0001ba12) list_setting_pane_t2

0x0002,

0xf682,	// (0x0001ec93) list_setting_pane_t_ParamLimits

0xf682,	// (0x0001ec93) list_setting_pane_t

0xc440,	// (0x0001ba51) set_value_pane_cp_ParamLimits

0xc440,	// (0x0001ba51) set_value_pane_cp

0xc250,	// (0x0001b861) list_setting_number_pane_g1_ParamLimits

0xc250,	// (0x0001b861) list_setting_number_pane_g1

0x28f3,	// (0x00011f04) list_setting_number_pane_g2_ParamLimits

0x28f3,	// (0x00011f04) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x0001ec8e) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x0001ec8e) list_setting_number_pane_g

0xc44c,	// (0x0001ba5d) list_setting_number_pane_t1_ParamLimits

0xc44c,	// (0x0001ba5d) list_setting_number_pane_t1

0xc460,	// (0x0001ba71) list_setting_number_pane_t2_ParamLimits

0xc460,	// (0x0001ba71) list_setting_number_pane_t2

0xc477,	// (0x0001ba88) list_setting_number_pane_t3_ParamLimits

0xc477,	// (0x0001ba88) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001ec9a) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001ec9a) list_setting_number_pane_t

0xc440,	// (0x0001ba51) set_value_pane_ParamLimits

0xc440,	// (0x0001ba51) set_value_pane

0x2a53,	// (0x00012064) bg_set_opt_pane_ParamLimits

0x2a53,	// (0x00012064) bg_set_opt_pane

0x2a74,	// (0x00012085) set_value_pane_t1

0x2a82,	// (0x00012093) slider_set_pane_cp3

0x2a8b,	// (0x0001209c) volume_small_pane_cp

0x2a94,	// (0x000120a5) list_form_gen_pane

0x2a9d,	// (0x000120ae) scroll_pane_cp8

0xc4ba,	// (0x0001bacb) form_field_data_pane_ParamLimits

0xc4ba,	// (0x0001bacb) form_field_data_pane

0xc4d1,	// (0x0001bae2) form_field_data_wide_pane_ParamLimits

0xc4d1,	// (0x0001bae2) form_field_data_wide_pane

0xc4f1,	// (0x0001bb02) form_field_popup_pane_ParamLimits

0xc4f1,	// (0x0001bb02) form_field_popup_pane

0xc509,	// (0x0001bb1a) form_field_popup_wide_pane_ParamLimits

0xc509,	// (0x0001bb1a) form_field_popup_wide_pane

0x2b38,	// (0x00012149) form_field_slider_pane_ParamLimits

0x2b38,	// (0x00012149) form_field_slider_pane

0x2b4b,	// (0x0001215c) form_field_slider_wide_pane_ParamLimits

0x2b4b,	// (0x0001215c) form_field_slider_wide_pane

0x2b5e,	// (0x0001216f) data_form_pane

0xc52a,	// (0x0001bb3b) form_field_data_pane_t1

0x2b8c,	// (0x0001219d) input_focus_pane

0x2b9a,	// (0x000121ab) data_form_wide_pane

0x2bd2,	// (0x000121e3) form_field_data_wide_pane_t1

0x239c,	// (0x000119ad) input_focus_pane_cp6

0xc544,	// (0x0001bb55) form_field_popup_pane_t1

0x2b8c,	// (0x0001219d) input_focus_pane_cp7

0x2c0c,	// (0x0001221d) list_form_pane

0x2c20,	// (0x00012231) form_field_popup_wide_pane_t1

0x2b8c,	// (0x0001219d) input_focus_pane_cp8

0x2c35,	// (0x00012246) list_form_wide_pane

0xc566,	// (0x0001bb77) form_field_slider_pane_t1_ParamLimits

0xc566,	// (0x0001bb77) form_field_slider_pane_t1

0xc57e,	// (0x0001bb8f) form_field_slider_pane_t2_ParamLimits

0xc57e,	// (0x0001bb8f) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001ecaa) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001ecaa) form_field_slider_pane_t

0x203a,	// (0x0001164b) input_focus_pane_cp9_ParamLimits

0x203a,	// (0x0001164b) input_focus_pane_cp9

0xc593,	// (0x0001bba4) slider_cont_pane_ParamLimits

0xc593,	// (0x0001bba4) slider_cont_pane

0x2c84,	// (0x00012295) form_field_slider_wide_pane_t1_ParamLimits

0x2c84,	// (0x00012295) form_field_slider_wide_pane_t1

0x2c96,	// (0x000122a7) form_field_slider_wide_pane_t2_ParamLimits

0x2c96,	// (0x000122a7) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0001ecaf) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0001ecaf) form_field_slider_wide_pane_t

0x203a,	// (0x0001164b) input_focus_pane_cp10_ParamLimits

0x203a,	// (0x0001164b) input_focus_pane_cp10

0xc5a7,	// (0x0001bbb8) slider_cont_pane_cp1_ParamLimits

0xc5a7,	// (0x0001bbb8) slider_cont_pane_cp1

0xc5bb,	// (0x0001bbcc) slider_form_pane_cp

0x2cc4,	// (0x000122d5) input_focus_pane_g1

0x2ccc,	// (0x000122dd) input_focus_pane_g2

0x2cd4,	// (0x000122e5) input_focus_pane_g3

0x2cdc,	// (0x000122ed) input_focus_pane_g4

0x2ce4,	// (0x000122f5) input_focus_pane_g5

0x2cec,	// (0x000122fd) input_focus_pane_g6

0x2cf4,	// (0x00012305) input_focus_pane_g7

0x2cfc,	// (0x0001230d) input_focus_pane_g8

0x2d04,	// (0x00012315) input_focus_pane_g9

0x1cbb,	// (0x000112cc) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001ecb4) input_focus_pane_g

0x4f08,	// (0x00014519) wait_border_pane_g3_copy1

0xc5c3,	// (0x0001bbd4) data_form_pane_t1

0x1cbb,	// (0x000112cc) wait_anim_pane_g1_copy1

0xd8bf,	// (0x0001ced0) data_form_wide_pane_t1

0xc5dd,	// (0x0001bbee) list_form_graphic_pane_cp_ParamLimits

0xc5dd,	// (0x0001bbee) list_form_graphic_pane_cp

0x5e6c,	// (0x0001547d) slider_form_pane_g1

0x5e75,	// (0x00015486) slider_form_pane_g2

0x0006,

0xf996,	// (0x0001efa7) slider_form_pane_g

0xc5ee,	// (0x0001bbff) list_form_graphic_pane_ParamLimits

0xc5ee,	// (0x0001bbff) list_form_graphic_pane

0x2d5c,	// (0x0001236d) list_form_graphic_pane_g1

0x2d64,	// (0x00012375) list_form_graphic_pane_t1_ParamLimits

0x2d64,	// (0x00012375) list_form_graphic_pane_t1

0x1da5,	// (0x000113b6) list_highlight_pane_cp5_ParamLimits

0x1da5,	// (0x000113b6) list_highlight_pane_cp5

0xc600,	// (0x0001bc11) find_pane_g1

0x2d82,	// (0x00012393) input_find_pane

0xc609,	// (0x0001bc1a) input_find_pane_g1_ParamLimits

0xc609,	// (0x0001bc1a) input_find_pane_g1

0xc615,	// (0x0001bc26) input_find_pane_t1_ParamLimits

0xc615,	// (0x0001bc26) input_find_pane_t1

0xc62a,	// (0x0001bc3b) input_find_pane_t2_ParamLimits

0xc62a,	// (0x0001bc3b) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001ecc9) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001ecc9) input_find_pane_t

0x2dc1,	// (0x000123d2) input_focus_pane_cp5_ParamLimits

0x2dc1,	// (0x000123d2) input_focus_pane_cp5

0xc64b,	// (0x0001bc5c) bg_popup_window_pane_cp2_ParamLimits

0xc64b,	// (0x0001bc5c) bg_popup_window_pane_cp2

0xc658,	// (0x0001bc69) listscroll_menu_pane_ParamLimits

0xc658,	// (0x0001bc69) listscroll_menu_pane

0xc664,	// (0x0001bc75) popup_submenu_window_ParamLimits

0xc664,	// (0x0001bc75) popup_submenu_window

0x2e1e,	// (0x0001242f) find_popup_pane_g1

0x2e26,	// (0x00012437) input_popup_find_pane_cp

0x2dc1,	// (0x000123d2) input_focus_pane_cp4_ParamLimits

0x2dc1,	// (0x000123d2) input_focus_pane_cp4

0x2e3c,	// (0x0001244d) input_popup_find_pane_t1_ParamLimits

0x2e3c,	// (0x0001244d) input_popup_find_pane_t1

0x1cc5,	// (0x000112d6) bg_popup_sub_pane_cp

0x2e6a,	// (0x0001247b) listscroll_popup_sub_pane

0x2e72,	// (0x00012483) list_submenu_pane_ParamLimits

0x2e72,	// (0x00012483) list_submenu_pane

0x2e83,	// (0x00012494) scroll_pane_cp4

0x2e8b,	// (0x0001249c) list_single_popup_submenu_pane_ParamLimits

0x2e8b,	// (0x0001249c) list_single_popup_submenu_pane

0x2e9f,	// (0x000124b0) list_single_popup_submenu_pane_g1

0x2ea7,	// (0x000124b8) list_single_popup_submenu_pane_t1_ParamLimits

0x2ea7,	// (0x000124b8) list_single_popup_submenu_pane_t1

0x203a,	// (0x0001164b) bg_active_tab_pane_cp1_ParamLimits

0x203a,	// (0x0001164b) bg_active_tab_pane_cp1

0xc69c,	// (0x0001bcad) tabs_2_active_pane_g1

0xc6a4,	// (0x0001bcb5) tabs_2_active_pane_t1

0x203a,	// (0x0001164b) bg_passive_tab_pane_cp1_ParamLimits

0x203a,	// (0x0001164b) bg_passive_tab_pane_cp1

0xc69c,	// (0x0001bcad) tabs_2_passive_pane_g1

0xc6a4,	// (0x0001bcb5) tabs_2_passive_pane_t1

0x1da5,	// (0x000113b6) bg_active_tab_pane_cp4

0xc6b6,	// (0x0001bcc7) tabs_2_long_active_pane_t1

0x3d65,	// (0x00013376) bg_passive_tab_pane_cp4

0x0b9b,	// (0x000101ac) list_single_midp_graphic_pane_g4_ParamLimits

0x1da5,	// (0x000113b6) bg_active_tab_pane_cp5

0xc6c9,	// (0x0001bcda) tabs_3_long_active_pane_t1

0x3d65,	// (0x00013376) bg_passive_tab_pane_cp5

0x0b9b,	// (0x000101ac) list_single_midp_graphic_pane_g4

0x1da5,	// (0x000113b6) bg_popup_window_pane_cp13_ParamLimits

0x1da5,	// (0x000113b6) bg_popup_window_pane_cp13

0x2f1e,	// (0x0001252f) listscroll_popup_fast_pane_ParamLimits

0x2f1e,	// (0x0001252f) listscroll_popup_fast_pane

0x2f2d,	// (0x0001253e) grid_popup_fast_pane_ParamLimits

0x2f2d,	// (0x0001253e) grid_popup_fast_pane

0x2f3f,	// (0x00012550) scroll_pane_cp9_ParamLimits

0x2f3f,	// (0x00012550) scroll_pane_cp9

0x7c42,	// (0x00017253) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7c42,	// (0x00017253) list_single_graphic_hl_pane_t1_cp2

0x2f63,	// (0x00012574) input_focus_pane_cp20_ParamLimits

0x2f63,	// (0x00012574) input_focus_pane_cp20

0x2f71,	// (0x00012582) query_popup_data_pane_t1_ParamLimits

0x2f71,	// (0x00012582) query_popup_data_pane_t1

0x2f84,	// (0x00012595) query_popup_data_pane_t2_ParamLimits

0x2f84,	// (0x00012595) query_popup_data_pane_t2

0x2fca,	// (0x000125db) query_popup_data_pane_t3_ParamLimits

0x2fca,	// (0x000125db) query_popup_data_pane_t3

0x300b,	// (0x0001261c) query_popup_data_pane_t4_ParamLimits

0x300b,	// (0x0001261c) query_popup_data_pane_t4

0x3047,	// (0x00012658) query_popup_data_pane_t5_ParamLimits

0x3047,	// (0x00012658) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0001ecce) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0001ecce) query_popup_data_pane_t

0x2cc4,	// (0x000122d5) bg_set_opt_pane_g1

0x2ccc,	// (0x000122dd) bg_set_opt_pane_g2

0x2cd4,	// (0x000122e5) bg_set_opt_pane_g3

0x2cdc,	// (0x000122ed) bg_set_opt_pane_g4

0x2ce4,	// (0x000122f5) bg_set_opt_pane_g5

0x2cec,	// (0x000122fd) bg_set_opt_pane_g6

0x2cf4,	// (0x00012305) bg_set_opt_pane_g7

0x2cfc,	// (0x0001230d) bg_set_opt_pane_g8

0x2d04,	// (0x00012315) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001ecd9) bg_set_opt_pane_g

0x07a2,	// (0x0000fdb3) control_top_pane_stacon_ParamLimits

0x07a2,	// (0x0000fdb3) control_top_pane_stacon

0x07f5,	// (0x0000fe06) signal_pane_stacon_ParamLimits

0x07f5,	// (0x0000fe06) signal_pane_stacon

0x3674,	// (0x00012c85) stacon_top_pane_g1_ParamLimits

0x3674,	// (0x00012c85) stacon_top_pane_g1

0x081a,	// (0x0000fe2b) title_pane_stacon_ParamLimits

0x081a,	// (0x0000fe2b) title_pane_stacon

0x0844,	// (0x0000fe55) uni_indicator_pane_stacon_ParamLimits

0x0844,	// (0x0000fe55) uni_indicator_pane_stacon

0x0859,	// (0x0000fe6a) battery_pane_stacon_ParamLimits

0x0859,	// (0x0000fe6a) battery_pane_stacon

0x089d,	// (0x0000feae) control_bottom_pane_stacon_ParamLimits

0x089d,	// (0x0000feae) control_bottom_pane_stacon

0x08c0,	// (0x0000fed1) navi_pane_stacon_ParamLimits

0x08c0,	// (0x0000fed1) navi_pane_stacon

0x3696,	// (0x00012ca7) stacon_bottom_pane_g1_ParamLimits

0x3696,	// (0x00012ca7) stacon_bottom_pane_g1

0x0503,	// (0x0000fb14) aid_levels_signal_lsc_ParamLimits

0x0503,	// (0x0000fb14) aid_levels_signal_lsc

0x051a,	// (0x0000fb2b) signal_pane_stacon_g1_ParamLimits

0x051a,	// (0x0000fb2b) signal_pane_stacon_g1

0x052e,	// (0x0000fb3f) signal_pane_stacon_g2_ParamLimits

0x052e,	// (0x0000fb3f) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001ecec) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001ecec) signal_pane_stacon_g

0x0563,	// (0x0000fb74) title_pane_stacon_t1_ParamLimits

0x0563,	// (0x0000fb74) title_pane_stacon_t1

0x308b,	// (0x0001269c) uni_indicator_pane_stacon_g1

0x3095,	// (0x000126a6) uni_indicator_pane_stacon_g2

0x309f,	// (0x000126b0) uni_indicator_pane_stacon_g3

0x30a9,	// (0x000126ba) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001ecf8) uni_indicator_pane_stacon_g

0x0588,	// (0x0000fb99) control_top_pane_stacon_g1

0x0590,	// (0x0000fba1) control_top_pane_stacon_t1_ParamLimits

0x0590,	// (0x0000fba1) control_top_pane_stacon_t1

0x05c7,	// (0x0000fbd8) aid_levels_battery_lsc_ParamLimits

0x05c7,	// (0x0000fbd8) aid_levels_battery_lsc

0x05df,	// (0x0000fbf0) battery_pane_stacon_g1_ParamLimits

0x05df,	// (0x0000fbf0) battery_pane_stacon_g1

0x05f2,	// (0x0000fc03) battery_pane_stacon_g2_ParamLimits

0x05f2,	// (0x0000fc03) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0001ed01) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0001ed01) battery_pane_stacon_g

0x0630,	// (0x0000fc41) navi_icon_pane_stacon

0x0644,	// (0x0000fc55) navi_navi_pane_stacon

0x0630,	// (0x0000fc41) navi_text_pane_stacon

0x0588,	// (0x0000fb99) control_bottom_pane_stacon_g1

0x0658,	// (0x0000fc69) control_bottom_pane_stacon_t1_ParamLimits

0x0658,	// (0x0000fc69) control_bottom_pane_stacon_t1

0xc6db,	// (0x0001bcec) grid_app_pane_ParamLimits

0xc6db,	// (0x0001bcec) grid_app_pane

0xc749,	// (0x0001bd5a) scroll_pane_cp15_ParamLimits

0xc749,	// (0x0001bd5a) scroll_pane_cp15

0xc762,	// (0x0001bd73) cell_app_pane_ParamLimits

0xc762,	// (0x0001bd73) cell_app_pane

0xc7a7,	// (0x0001bdb8) cell_app_pane_g1_ParamLimits

0xc7a7,	// (0x0001bdb8) cell_app_pane_g1

0x314e,	// (0x0001275f) cell_app_pane_g2_ParamLimits

0x314e,	// (0x0001275f) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0001ed06) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0001ed06) cell_app_pane_g

0x315a,	// (0x0001276b) cell_app_pane_t1_ParamLimits

0x315a,	// (0x0001276b) cell_app_pane_t1

0x3171,	// (0x00012782) grid_highlight_pane_ParamLimits

0x3171,	// (0x00012782) grid_highlight_pane

0x2cc4,	// (0x000122d5) cell_highlight_pane_g1

0x2ccc,	// (0x000122dd) cell_highlight_pane_g2

0x2cd4,	// (0x000122e5) cell_highlight_pane_g3

0x2cdc,	// (0x000122ed) cell_highlight_pane_g4

0x2ce4,	// (0x000122f5) cell_highlight_pane_g5

0x2cec,	// (0x000122fd) cell_highlight_pane_g6

0x2cf4,	// (0x00012305) cell_highlight_pane_g7

0x2cfc,	// (0x0001230d) cell_highlight_pane_g8

0x2d04,	// (0x00012315) cell_highlight_pane_g9

0x1cbb,	// (0x000112cc) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001ecb4) cell_highlight_pane_g

0x3182,	// (0x00012793) bg_scroll_pane

0x06a2,	// (0x0000fcb3) scroll_handle_pane

0x31c9,	// (0x000127da) scroll_bg_pane_g1

0x31de,	// (0x000127ef) scroll_bg_pane_g2

0x31f6,	// (0x00012807) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0001ed0b) scroll_bg_pane_g

0x320b,	// (0x0001281c) scroll_handle_focus_pane_ParamLimits

0x320b,	// (0x0001281c) scroll_handle_focus_pane

0x31c9,	// (0x000127da) scroll_handle_pane_g1

0x3218,	// (0x00012829) scroll_handle_pane_g2

0x31f6,	// (0x00012807) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0001ed12) scroll_handle_pane_g

0x2dc1,	// (0x000123d2) bg_popup_sub_pane_cp21_ParamLimits

0x2dc1,	// (0x000123d2) bg_popup_sub_pane_cp21

0x322c,	// (0x0001283d) popup_fep_japan_predictive_window_t1_ParamLimits

0x322c,	// (0x0001283d) popup_fep_japan_predictive_window_t1

0x3246,	// (0x00012857) popup_fep_japan_predictive_window_t2_ParamLimits

0x3246,	// (0x00012857) popup_fep_japan_predictive_window_t2

0x3279,	// (0x0001288a) popup_fep_japan_predictive_window_t3_ParamLimits

0x3279,	// (0x0001288a) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001ed19) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001ed19) popup_fep_japan_predictive_window_t

0x1cc5,	// (0x000112d6) bg_popup_sub_pane_cp23

0x32b0,	// (0x000128c1) listscroll_japin_cand_pane

0x32b8,	// (0x000128c9) popup_fep_japan_candidate_window_t1

0x32c6,	// (0x000128d7) candidate_pane_ParamLimits

0x32c6,	// (0x000128d7) candidate_pane

0x32d8,	// (0x000128e9) scroll_pane_cp30

0x32e0,	// (0x000128f1) list_single_popup_jap_candidate_pane_ParamLimits

0x32e0,	// (0x000128f1) list_single_popup_jap_candidate_pane

0x1cc5,	// (0x000112d6) list_highlight_pane_cp30

0x32f5,	// (0x00012906) list_single_popup_jap_candidate_pane_t1

0x3304,	// (0x00012915) level_1_signal

0x3311,	// (0x00012922) level_2_signal

0x331e,	// (0x0001292f) level_3_signal

0x332b,	// (0x0001293c) level_4_signal

0x3338,	// (0x00012949) level_5_signal

0x3345,	// (0x00012956) level_6_signal

0x3352,	// (0x00012963) level_7_signal

0x3304,	// (0x00012915) level_1_battery

0x3311,	// (0x00012922) level_2_battery

0x331e,	// (0x0001292f) level_3_battery

0x332b,	// (0x0001293c) level_4_battery

0x3338,	// (0x00012949) level_5_battery

0x3345,	// (0x00012956) level_6_battery

0x3352,	// (0x00012963) level_7_battery

0x3377,	// (0x00012988) list_menu_pane_ParamLimits

0x3377,	// (0x00012988) list_menu_pane

0x3388,	// (0x00012999) scroll_pane_cp25_ParamLimits

0x3388,	// (0x00012999) scroll_pane_cp25

0x33a1,	// (0x000129b2) list_double2_graphic_pane_cp2_ParamLimits

0x33a1,	// (0x000129b2) list_double2_graphic_pane_cp2

0x33a1,	// (0x000129b2) list_double2_large_graphic_pane_cp2_ParamLimits

0x33a1,	// (0x000129b2) list_double2_large_graphic_pane_cp2

0x33a1,	// (0x000129b2) list_double2_pane_cp2_ParamLimits

0x33a1,	// (0x000129b2) list_double2_pane_cp2

0x33a1,	// (0x000129b2) list_double_graphic_pane_cp2_ParamLimits

0x33a1,	// (0x000129b2) list_double_graphic_pane_cp2

0x33a1,	// (0x000129b2) list_double_large_graphic_pane_cp2_ParamLimits

0x33a1,	// (0x000129b2) list_double_large_graphic_pane_cp2

0x33a1,	// (0x000129b2) list_double_number_pane_cp2_ParamLimits

0x33a1,	// (0x000129b2) list_double_number_pane_cp2

0x33a1,	// (0x000129b2) list_double_pane_cp2_ParamLimits

0x33a1,	// (0x000129b2) list_double_pane_cp2

0xc7da,	// (0x0001bdeb) list_single_2graphic_pane_cp2_ParamLimits

0xc7da,	// (0x0001bdeb) list_single_2graphic_pane_cp2

0xc7da,	// (0x0001bdeb) list_single_graphic_heading_pane_cp2_ParamLimits

0xc7da,	// (0x0001bdeb) list_single_graphic_heading_pane_cp2

0xc7da,	// (0x0001bdeb) list_single_graphic_pane_cp2_ParamLimits

0xc7da,	// (0x0001bdeb) list_single_graphic_pane_cp2

0xc7da,	// (0x0001bdeb) list_single_heading_pane_cp2_ParamLimits

0xc7da,	// (0x0001bdeb) list_single_heading_pane_cp2

0x33de,	// (0x000129ef) list_single_large_graphic_pane_cp2_ParamLimits

0x33de,	// (0x000129ef) list_single_large_graphic_pane_cp2

0xc7da,	// (0x0001bdeb) list_single_number_heading_pane_cp2_ParamLimits

0xc7da,	// (0x0001bdeb) list_single_number_heading_pane_cp2

0xc7da,	// (0x0001bdeb) list_single_number_pane_cp2_ParamLimits

0xc7da,	// (0x0001bdeb) list_single_number_pane_cp2

0xc7da,	// (0x0001bdeb) list_single_pane_cp2_ParamLimits

0xc7da,	// (0x0001bdeb) list_single_pane_cp2

0x3434,	// (0x00012a45) bg_popup_sub_pane_cp22

0x0754,	// (0x0000fd65) popup_side_volume_key_window_g1

0x077e,	// (0x0000fd8f) popup_side_volume_key_window_t1

0x079a,	// (0x0000fdab) volume_small_pane_cp1

0x203a,	// (0x0001164b) bg_popup_sub_pane_cp24_ParamLimits

0x203a,	// (0x0001164b) bg_popup_sub_pane_cp24

0x344a,	// (0x00012a5b) fep_china_uni_candidate_pane_ParamLimits

0x344a,	// (0x00012a5b) fep_china_uni_candidate_pane

0x345e,	// (0x00012a6f) fep_china_uni_entry_pane

0x346e,	// (0x00012a7f) popup_fep_china_uni_window_g1

0x348a,	// (0x00012a9b) fep_china_uni_entry_pane_g1

0x3492,	// (0x00012aa3) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001ed46) fep_china_uni_entry_pane_g

0x349a,	// (0x00012aab) fep_entry_item_pane

0x34a4,	// (0x00012ab5) fep_candidate_item_pane

0x34ac,	// (0x00012abd) fep_china_uni_candidate_pane_g1

0x34b4,	// (0x00012ac5) fep_china_uni_candidate_pane_g2

0x34bc,	// (0x00012acd) fep_china_uni_candidate_pane_g3

0x34c4,	// (0x00012ad5) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001ed4b) fep_china_uni_candidate_pane_g

0x1cbb,	// (0x000112cc) fep_entry_item_pane_g1

0x34cc,	// (0x00012add) fep_entry_item_pane_t1_ParamLimits

0x34cc,	// (0x00012add) fep_entry_item_pane_t1

0x34e2,	// (0x00012af3) fep_candidate_item_pane_t1_ParamLimits

0x34e2,	// (0x00012af3) fep_candidate_item_pane_t1

0x34f7,	// (0x00012b08) fep_candidate_item_pane_t2_ParamLimits

0x34f7,	// (0x00012b08) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001ed54) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001ed54) fep_candidate_item_pane_t

0x1da5,	// (0x000113b6) list_highlight_pane_cp31_ParamLimits

0x1da5,	// (0x000113b6) list_highlight_pane_cp31

0x3509,	// (0x00012b1a) level_1_signal_lsc

0x3512,	// (0x00012b23) level_2_signal_lsc

0x351b,	// (0x00012b2c) level_3_signal_lsc

0x3524,	// (0x00012b35) level_4_signal_lsc

0x352d,	// (0x00012b3e) level_5_signal_lsc

0x3536,	// (0x00012b47) level_6_signal_lsc

0x353f,	// (0x00012b50) level_7_signal_lsc

0x353f,	// (0x00012b50) level_1_battery_lsc

0x3548,	// (0x00012b59) level_2_battery_lsc

0x3551,	// (0x00012b62) level_3_battery_lsc

0x355a,	// (0x00012b6b) level_4_battery_lsc

0x3563,	// (0x00012b74) level_5_battery_lsc

0x356c,	// (0x00012b7d) level_6_battery_lsc

0x3509,	// (0x00012b1a) level_7_battery_lsc

0x3575,	// (0x00012b86) scroll_handle_focus_pane_g1

0x357e,	// (0x00012b8f) scroll_handle_focus_pane_g2

0x3587,	// (0x00012b98) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001ed59) scroll_handle_focus_pane_g

0xc83a,	// (0x0001be4b) list_single_2graphic_pane_g1_ParamLimits

0xc83a,	// (0x0001be4b) list_single_2graphic_pane_g1

0xc117,	// (0x0001b728) list_single_2graphic_pane_g2_ParamLimits

0xc117,	// (0x0001b728) list_single_2graphic_pane_g2

0x47bf,	// (0x00013dd0) list_single_2graphic_pane_g3_ParamLimits

0x47bf,	// (0x00013dd0) list_single_2graphic_pane_g3

0xc846,	// (0x0001be57) list_single_2graphic_pane_g4_ParamLimits

0xc846,	// (0x0001be57) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001ed60) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001ed60) list_single_2graphic_pane_g

0xc852,	// (0x0001be63) list_single_2graphic_pane_t1_ParamLimits

0xc852,	// (0x0001be63) list_single_2graphic_pane_t1

0xc880,	// (0x0001be91) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc880,	// (0x0001be91) list_double2_graphic_large_graphic_pane_g1

0xc176,	// (0x0001b787) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc176,	// (0x0001b787) list_double2_graphic_large_graphic_pane_g2

0x28f3,	// (0x00011f04) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x28f3,	// (0x00011f04) list_double2_graphic_large_graphic_pane_g3

0xc892,	// (0x0001bea3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc892,	// (0x0001bea3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001ed69) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001ed69) list_double2_graphic_large_graphic_pane_g

0xc89e,	// (0x0001beaf) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc89e,	// (0x0001beaf) list_double2_graphic_large_graphic_pane_t1

0xc8b4,	// (0x0001bec5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc8b4,	// (0x0001bec5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001ed72) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001ed72) list_double2_graphic_large_graphic_pane_t

0x375e,	// (0x00012d6f) popup_fast_swap_window_ParamLimits

0x375e,	// (0x00012d6f) popup_fast_swap_window

0x377a,	// (0x00012d8b) popup_side_volume_key_window

0x3796,	// (0x00012da7) stacon_top_pane

0x37a0,	// (0x00012db1) status_pane_ParamLimits

0x37a0,	// (0x00012db1) status_pane

0x3796,	// (0x00012da7) status_small_pane

0x1cc5,	// (0x000112d6) control_pane

0x1cc5,	// (0x000112d6) stacon_bottom_pane

0x2a9d,	// (0x000120ae) scroll_pane_cp121

0x2a94,	// (0x000120a5) set_content_pane

0x363a,	// (0x00012c4b) bg_active_tab_pane_g1_cp1

0x3628,	// (0x00012c39) bg_active_tab_pane_g2_cp1

0x3643,	// (0x00012c54) bg_active_tab_pane_g3_cp1

0x363a,	// (0x00012c4b) bg_passive_tab_pane_g1_cp1

0x3628,	// (0x00012c39) bg_passive_tab_pane_g2_cp1

0x3643,	// (0x00012c54) bg_passive_tab_pane_g3_cp1

0xc8c6,	// (0x0001bed7) bg_active_tab_pane_g1_cp2

0x3628,	// (0x00012c39) bg_active_tab_pane_g2_cp2

0xc8cf,	// (0x0001bee0) bg_active_tab_pane_g3_cp2

0xc8c6,	// (0x0001bed7) bg_passive_tab_pane_g1_cp2

0x3628,	// (0x00012c39) bg_passive_tab_pane_g2_cp2

0xc8cf,	// (0x0001bee0) bg_passive_tab_pane_g3_cp2

0xc8d8,	// (0x0001bee9) bg_active_tab_pane_g1_cp3

0x3628,	// (0x00012c39) bg_active_tab_pane_g2_cp3

0xc8e1,	// (0x0001bef2) bg_active_tab_pane_g3_cp3

0xc8d8,	// (0x0001bee9) bg_passive_tab_pane_g1_cp3

0x3628,	// (0x00012c39) bg_passive_tab_pane_g2_cp3

0xc8e1,	// (0x0001bef2) bg_passive_tab_pane_g3_cp3

0xc8ea,	// (0x0001befb) bg_active_tab_pane_g1_cp4

0x3628,	// (0x00012c39) bg_active_tab_pane_g2_cp4

0xc8f3,	// (0x0001bf04) bg_active_tab_pane_g3_cp4

0xc8ea,	// (0x0001befb) bg_passive_tab_pane_g1_cp4

0x3628,	// (0x00012c39) bg_passive_tab_pane_g2_cp4

0xc8f3,	// (0x0001bf04) bg_passive_tab_pane_g3_cp4

0x36b2,	// (0x00012cc3) bg_active_tab_pane_g1_cp5

0x3628,	// (0x00012c39) bg_active_tab_pane_g2_cp5

0x36bb,	// (0x00012ccc) bg_active_tab_pane_g3_cp5

0x36b2,	// (0x00012cc3) bg_passive_tab_pane_g1_cp5

0x3628,	// (0x00012c39) bg_passive_tab_pane_g2_cp5

0x36bb,	// (0x00012ccc) bg_passive_tab_pane_g3_cp5

0xc8fc,	// (0x0001bf0d) list_set_graphic_pane_ParamLimits

0xc8fc,	// (0x0001bf0d) list_set_graphic_pane

0x1cc5,	// (0x000112d6) bg_set_opt_pane_cp4

0xc90e,	// (0x0001bf1f) list_set_graphic_pane_g1_ParamLimits

0xc90e,	// (0x0001bf1f) list_set_graphic_pane_g1

0xc91a,	// (0x0001bf2b) list_set_graphic_pane_g2_ParamLimits

0xc91a,	// (0x0001bf2b) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001ed77) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001ed77) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x0001f0ea) volume_small_pane_cp_g

0x3711,	// (0x00012d22) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3711,	// (0x00012d22) list_double2_large_graphic_pane_g1_cp2

0x371d,	// (0x00012d2e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x371d,	// (0x00012d2e) list_double2_large_graphic_pane_g2_cp2

0x372e,	// (0x00012d3f) list_double2_large_graphic_pane_g3_cp2

0x3736,	// (0x00012d47) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3736,	// (0x00012d47) list_double2_large_graphic_pane_t1_cp2

0x374c,	// (0x00012d5d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x374c,	// (0x00012d5d) list_double2_large_graphic_pane_t2_cp2

0x59e1,	// (0x00014ff2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x59e1,	// (0x00014ff2) list_double_large_graphic_pane_g1_cp2

0x59f2,	// (0x00015003) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x59f2,	// (0x00015003) list_double_large_graphic_pane_g2_cp2

0x38bc,	// (0x00012ecd) list_double_large_graphic_pane_g3_cp2

0x5a03,	// (0x00015014) list_double_large_graphic_pane_g4_cp

0x5a0b,	// (0x0001501c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5a0b,	// (0x0001501c) list_double_large_graphic_pane_t1_cp2

0x5a22,	// (0x00015033) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5a22,	// (0x00015033) list_double_large_graphic_pane_t2_cp2

0x37ae,	// (0x00012dbf) list_double2_graphic_pane_g1_cp2_ParamLimits

0x37ae,	// (0x00012dbf) list_double2_graphic_pane_g1_cp2

0x37bc,	// (0x00012dcd) list_double2_graphic_pane_g2_cp2_ParamLimits

0x37bc,	// (0x00012dcd) list_double2_graphic_pane_g2_cp2

0x37cd,	// (0x00012dde) list_double2_graphic_pane_g3_cp2

0x37d7,	// (0x00012de8) list_double2_graphic_pane_t1_cp2_ParamLimits

0x37d7,	// (0x00012de8) list_double2_graphic_pane_t1_cp2

0x37ed,	// (0x00012dfe) list_double2_graphic_pane_t2_cp2_ParamLimits

0x37ed,	// (0x00012dfe) list_double2_graphic_pane_t2_cp2

0x37ff,	// (0x00012e10) list_single_number_heading_pane_g1_cp2_ParamLimits

0x37ff,	// (0x00012e10) list_single_number_heading_pane_g1_cp2

0x380b,	// (0x00012e1c) list_single_number_heading_pane_g2_cp2

0x3813,	// (0x00012e24) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3813,	// (0x00012e24) list_single_number_heading_pane_t1_cp2

0x3829,	// (0x00012e3a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3829,	// (0x00012e3a) list_single_number_heading_pane_t2_cp2

0x383b,	// (0x00012e4c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x383b,	// (0x00012e4c) list_single_number_heading_pane_t3_cp2

0x37ff,	// (0x00012e10) list_single_heading_pane_g1_cp2_ParamLimits

0x37ff,	// (0x00012e10) list_single_heading_pane_g1_cp2

0x380b,	// (0x00012e1c) list_single_heading_pane_g2_cp2

0x3813,	// (0x00012e24) list_single_heading_pane_t1_cp2_ParamLimits

0x3813,	// (0x00012e24) list_single_heading_pane_t1_cp2

0x57e9,	// (0x00014dfa) list_single_heading_pane_t2_cp2_ParamLimits

0x57e9,	// (0x00014dfa) list_single_heading_pane_t2_cp2

0x572b,	// (0x00014d3c) list_double_graphic_pane_g1_cp2_ParamLimits

0x572b,	// (0x00014d3c) list_double_graphic_pane_g1_cp2

0x5737,	// (0x00014d48) list_double_graphic_pane_g2_cp2_ParamLimits

0x5737,	// (0x00014d48) list_double_graphic_pane_g2_cp2

0x5746,	// (0x00014d57) list_double_graphic_pane_g3_cp2

0x574e,	// (0x00014d5f) list_double_graphic_pane_t1_cp2_ParamLimits

0x574e,	// (0x00014d5f) list_double_graphic_pane_t1_cp2

0x5764,	// (0x00014d75) list_double_graphic_pane_t2_cp2_ParamLimits

0x5764,	// (0x00014d75) list_double_graphic_pane_t2_cp2

0x38b0,	// (0x00012ec1) list_double_number_pane_g1_cp2_ParamLimits

0x38b0,	// (0x00012ec1) list_double_number_pane_g1_cp2

0x38bc,	// (0x00012ecd) list_double_number_pane_g2_cp2

0x56ef,	// (0x00014d00) list_double_number_pane_t1_cp2_ParamLimits

0x56ef,	// (0x00014d00) list_double_number_pane_t1_cp2

0x5703,	// (0x00014d14) list_double_number_pane_t2_cp2_ParamLimits

0x5703,	// (0x00014d14) list_double_number_pane_t2_cp2

0x5719,	// (0x00014d2a) list_double_number_pane_t3_cp2_ParamLimits

0x5719,	// (0x00014d2a) list_double_number_pane_t3_cp2

0x55d8,	// (0x00014be9) list_single_graphic_pane_g1_cp2_ParamLimits

0x55d8,	// (0x00014be9) list_single_graphic_pane_g1_cp2

0x3914,	// (0x00012f25) list_single_graphic_pane_g2_cp2_ParamLimits

0x3914,	// (0x00012f25) list_single_graphic_pane_g2_cp2

0x3920,	// (0x00012f31) list_single_graphic_pane_g3_cp2

0x55ae,	// (0x00014bbf) list_single_graphic_pane_t1_cp2_ParamLimits

0x55ae,	// (0x00014bbf) list_single_graphic_pane_t1_cp2

0x3914,	// (0x00012f25) list_single_number_pane_g1_cp2_ParamLimits

0x3914,	// (0x00012f25) list_single_number_pane_g1_cp2

0x3920,	// (0x00012f31) list_single_number_pane_g2_cp2

0x55ae,	// (0x00014bbf) list_single_number_pane_t1_cp2_ParamLimits

0x55ae,	// (0x00014bbf) list_single_number_pane_t1_cp2

0x55c4,	// (0x00014bd5) list_single_number_pane_t2_cp2_ParamLimits

0x55c4,	// (0x00014bd5) list_single_number_pane_t2_cp2

0x371d,	// (0x00012d2e) list_double2_pane_g1_cp2_ParamLimits

0x371d,	// (0x00012d2e) list_double2_pane_g1_cp2

0x372e,	// (0x00012d3f) list_double2_pane_g2_cp2

0x3888,	// (0x00012e99) list_double2_pane_t1_cp2_ParamLimits

0x3888,	// (0x00012e99) list_double2_pane_t1_cp2

0x389e,	// (0x00012eaf) list_double2_pane_t2_cp2_ParamLimits

0x389e,	// (0x00012eaf) list_double2_pane_t2_cp2

0x38b0,	// (0x00012ec1) list_double_pane_g1_cp2_ParamLimits

0x38b0,	// (0x00012ec1) list_double_pane_g1_cp2

0x38bc,	// (0x00012ecd) list_double_pane_g2_cp2

0x38c4,	// (0x00012ed5) list_double_pane_t1_cp2_ParamLimits

0x38c4,	// (0x00012ed5) list_double_pane_t1_cp2

0x38da,	// (0x00012eeb) list_double_pane_t2_cp2_ParamLimits

0x38da,	// (0x00012eeb) list_double_pane_t2_cp2

0x3904,	// (0x00012f15) list_single_pane_cp2_g3

0x3914,	// (0x00012f25) list_single_pane_g1_cp2_ParamLimits

0x3914,	// (0x00012f25) list_single_pane_g1_cp2

0x3920,	// (0x00012f31) list_single_pane_g2_cp2

0x3928,	// (0x00012f39) list_single_pane_t1_cp2_ParamLimits

0x3928,	// (0x00012f39) list_single_pane_t1_cp2

0x3940,	// (0x00012f51) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3940,	// (0x00012f51) list_single_large_graphic_pane_g1_cp2

0x394c,	// (0x00012f5d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x394c,	// (0x00012f5d) list_single_large_graphic_pane_g2_cp2

0x3958,	// (0x00012f69) list_single_large_graphic_pane_g3_cp2

0x3960,	// (0x00012f71) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3960,	// (0x00012f71) list_single_large_graphic_pane_g4_cp1

0x397a,	// (0x00012f8b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x397a,	// (0x00012f8b) list_single_large_graphic_pane_t1_cp2

0x557a,	// (0x00014b8b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x557a,	// (0x00014b8b) list_single_graphic_heading_pane_g1_cp2

0x5547,	// (0x00014b58) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5547,	// (0x00014b58) list_single_graphic_heading_pane_g4_cp2

0x3920,	// (0x00012f31) list_single_graphic_heading_pane_g5_cp2

0x5586,	// (0x00014b97) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5586,	// (0x00014b97) list_single_graphic_heading_pane_t1_cp2

0x559c,	// (0x00014bad) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x559c,	// (0x00014bad) list_single_graphic_heading_pane_t2_cp2

0x553b,	// (0x00014b4c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x553b,	// (0x00014b4c) list_single_2graphic_pane_g1_cp2

0x5547,	// (0x00014b58) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5547,	// (0x00014b58) list_single_2graphic_pane_g2_cp2

0x3920,	// (0x00012f31) list_single_2graphic_pane_g3_cp2

0x5558,	// (0x00014b69) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5558,	// (0x00014b69) list_single_2graphic_pane_g4_cp2

0x5564,	// (0x00014b75) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5564,	// (0x00014b75) list_single_2graphic_pane_t1_cp2

0x1cbb,	// (0x000112cc) list_highlight_pane_g10_cp1

0x5113,	// (0x00014724) list_highlight_pane_g1_cp1

0x511b,	// (0x0001472c) list_highlight_pane_g2_cp1

0x5123,	// (0x00014734) list_highlight_pane_g3_cp1

0x512b,	// (0x0001473c) list_highlight_pane_g4_cp1

0x5133,	// (0x00014744) list_highlight_pane_g5_cp1

0x513b,	// (0x0001474c) list_highlight_pane_g6_cp1

0x5143,	// (0x00014754) list_highlight_pane_g7_cp1

0x514b,	// (0x0001475c) list_highlight_pane_g8_cp1

0x5153,	// (0x00014764) list_highlight_pane_g9_cp1

0xd5a2,	// (0x0001cbb3) form_field_slider_pane_t3

0xd5b0,	// (0x0001cbc1) form_field_slider_pane_t4

0x504f,	// (0x00014660) slider_form_pane_ParamLimits

0x504f,	// (0x00014660) slider_form_pane

0x1cc5,	// (0x000112d6) control_abbreviations

0x1cc5,	// (0x000112d6) control_conventions

0x1cc5,	// (0x000112d6) control_definitions

0x1cc5,	// (0x000112d6) format_table_attribute

0x5833,	// (0x00014e44) bg_popup_preview_window_pane_g9

0x1cc5,	// (0x000112d6) format_table_data2

0x1cc5,	// (0x000112d6) format_table_data3

0x1cc5,	// (0x000112d6) format_table_data_example

0x0008,

0x1cc5,	// (0x000112d6) intro_purpose

0xf8f6,	// (0x0001ef07) bg_popup_preview_window_pane_g

0x1cc5,	// (0x000112d6) texts_category

0x1cc5,	// (0x000112d6) texts_graphics

0x3990,	// (0x00012fa1) text_digital

0x399f,	// (0x00012fb0) text_primary

0x39ae,	// (0x00012fbf) text_primary_small

0x39bd,	// (0x00012fce) text_secondary

0x39cc,	// (0x00012fdd) text_title

0x605a,	// (0x0001566b) bg_passive_tab_pane_g1_cp3_srt

0x3628,	// (0x00012c39) bg_passive_tab_pane_g2_cp3_srt

0x6063,	// (0x00015674) bg_passive_tab_pane_g3_cp3_srt

0x203a,	// (0x0001164b) bg_active_tab_pane_cp3_srt_ParamLimits

0x203a,	// (0x0001164b) bg_active_tab_pane_cp3_srt

0x606c,	// (0x0001567d) tabs_4_active_pane_srt_g1

0xd973,	// (0x0001cf84) tabs_4_active_pane_srt_t1_ParamLimits

0xd973,	// (0x0001cf84) tabs_4_active_pane_srt_t1

0x605a,	// (0x0001566b) bg_active_tab_pane_g1_cp3_copy1

0x3628,	// (0x00012c39) bg_active_tab_pane_g2_cp3_copy1

0x6063,	// (0x00015674) bg_active_tab_pane_g3_cp3_copy1

0x1da5,	// (0x000113b6) tabs_2_long_active_pane_srt_ParamLimits

0x1da5,	// (0x000113b6) tabs_2_long_active_pane_srt

0x1da5,	// (0x000113b6) tabs_2_long_passive_pane_srt_ParamLimits

0x1da5,	// (0x000113b6) tabs_2_long_passive_pane_srt

0x3d65,	// (0x00013376) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3d65,	// (0x00013376) bg_passive_tab_pane_cp4_srt

0x5c9f,	// (0x000152b0) bg_passive_tab_pane_g1_cp4_srt

0x3628,	// (0x00012c39) bg_passive_tab_pane_g2_cp4_srt

0x5ca8,	// (0x000152b9) bg_passive_tab_pane_g3_cp4_srt

0x1da5,	// (0x000113b6) bg_active_tab_pane_cp4_srt_ParamLimits

0x1da5,	// (0x000113b6) bg_active_tab_pane_cp4_srt

0xd754,	// (0x0001cd65) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd754,	// (0x0001cd65) tabs_2_long_active_pane_srt_t1

0x5c9f,	// (0x000152b0) bg_active_tab_pane_g1_cp4_srt

0x3628,	// (0x00012c39) bg_active_tab_pane_g2_cp4_srt

0x5ca8,	// (0x000152b9) bg_active_tab_pane_g3_cp4_srt

0x203a,	// (0x0001164b) tabs_3_long_active_pane_srt_ParamLimits

0x203a,	// (0x0001164b) tabs_3_long_active_pane_srt

0x203a,	// (0x0001164b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x203a,	// (0x0001164b) tabs_3_long_passive_pane_cp_srt

0x203a,	// (0x0001164b) tabs_3_long_passive_pane_srt_ParamLimits

0x203a,	// (0x0001164b) tabs_3_long_passive_pane_srt

0x3d65,	// (0x00013376) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3d65,	// (0x00013376) bg_passive_tab_pane_cp5_srt

0x36b2,	// (0x00012cc3) bg_passive_tab_pane_g1_cp5_srt

0x3628,	// (0x00012c39) bg_passive_tab_pane_g2_cp5_srt

0x36bb,	// (0x00012ccc) bg_passive_tab_pane_g3_cp5_srt

0x1da5,	// (0x000113b6) bg_active_tab_pane_cp5_srt_ParamLimits

0x1da5,	// (0x000113b6) bg_active_tab_pane_cp5_srt

0xd73e,	// (0x0001cd4f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd73e,	// (0x0001cd4f) tabs_3_long_active_pane_srt_t1

0x36b2,	// (0x00012cc3) bg_active_tab_pane_g1_cp5_srt

0x3628,	// (0x00012c39) bg_active_tab_pane_g2_cp5_srt

0x36bb,	// (0x00012ccc) bg_active_tab_pane_g3_cp5_srt

0x5c7f,	// (0x00015290) navi_text_pane_srt_t1

0x5c77,	// (0x00015288) navi_icon_pane_srt_g1

0x3b9f,	// (0x000131b0) midp_editing_number_pane_srt

0x39db,	// (0x00012fec) midp_ticker_pane_srt

0x3ba7,	// (0x000131b8) midp_ticker_pane_srt_g1

0x3baf,	// (0x000131c0) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001ed96) midp_ticker_pane_srt_g

0x3bb7,	// (0x000131c8) midp_ticker_pane_srt_t1

0x5c68,	// (0x00015279) midp_editing_number_pane_t1_copy1

0xc93e,	// (0x0001bf4f) listscroll_midp_pane

0xc93e,	// (0x0001bf4f) midp_form_pane

0x3a51,	// (0x00013062) midp_info_popup_window_ParamLimits

0x3a51,	// (0x00013062) midp_info_popup_window

0x2dc1,	// (0x000123d2) bg_popup_sub_pane_cp50_ParamLimits

0x2dc1,	// (0x000123d2) bg_popup_sub_pane_cp50

0x4d4b,	// (0x0001435c) listscroll_midp_info_pane_ParamLimits

0x4d4b,	// (0x0001435c) listscroll_midp_info_pane

0x4d33,	// (0x00014344) listscroll_form_midp_pane_ParamLimits

0x4d33,	// (0x00014344) listscroll_form_midp_pane

0x4d3f,	// (0x00014350) scroll_bar_cp050

0xd596,	// (0x0001cba7) list_midp_pane

0x6c7b,	// (0x0001628c) signal_pane_g2_cp

0x4c4d,	// (0x0001425e) listscroll_midp_info_pane_t1_ParamLimits

0x4c4d,	// (0x0001425e) listscroll_midp_info_pane_t1

0x4c65,	// (0x00014276) listscroll_midp_info_pane_t2_ParamLimits

0x4c65,	// (0x00014276) listscroll_midp_info_pane_t2

0x4ca3,	// (0x000142b4) listscroll_midp_info_pane_t3_ParamLimits

0x4ca3,	// (0x000142b4) listscroll_midp_info_pane_t3

0x4cdd,	// (0x000142ee) listscroll_midp_info_pane_t4_ParamLimits

0x4cdd,	// (0x000142ee) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x0001ee42) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x0001ee42) listscroll_midp_info_pane_t

0x2e83,	// (0x00012494) scroll_pane_cp21

0x4beb,	// (0x000141fc) form_midp_field_choice_group_pane

0x4bf4,	// (0x00014205) form_midp_field_text_pane

0x4c33,	// (0x00014244) form_midp_field_time_pane

0x4c3b,	// (0x0001424c) form_midp_gauge_slider_pane

0x4c44,	// (0x00014255) form_midp_gauge_wait_pane

0x1cc5,	// (0x000112d6) form_midp_image_pane

0xd57d,	// (0x0001cb8e) list_single_midp_pane_ParamLimits

0xd57d,	// (0x0001cb8e) list_single_midp_pane

0xd55b,	// (0x0001cb6c) form_midp_field_text_pane_t1

0x4957,	// (0x00013f68) input_focus_pane_cp050

0x4bab,	// (0x000141bc) list_midp_form_text_pane

0x4b43,	// (0x00014154) form_midp_field_choice_group_pane_t1

0x4b51,	// (0x00014162) input_focus_pane_cp051

0x4b65,	// (0x00014176) list_midp_choice_pane

0x1cc5,	// (0x000112d6) status_idle_pane

0x4b27,	// (0x00014138) form_midp_field_time_pane_t1

0x1cbb,	// (0x000112cc) wait_anim_pane_g2_copy1

0x4b35,	// (0x00014146) form_midp_field_time_pane_t2

0x0001,

0x3aff,	// (0x00013110) aid_navinavi_width_2_pane

0xf82c,	// (0x0001ee3d) form_midp_field_time_pane_t

0x1cc5,	// (0x000112d6) input_focus_pane_cp052

0x1cc5,	// (0x000112d6) bg_input_focus_pane_cp040

0x4ae7,	// (0x000140f8) form_midp_gauge_slider_pane_t1

0x4af5,	// (0x00014106) form_midp_gauge_slider_pane_t2

0xd53f,	// (0x0001cb50) form_midp_gauge_slider_pane_t3

0xd54d,	// (0x0001cb5e) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x0001ee34) form_midp_gauge_slider_pane_t

0x4b1f,	// (0x00014130) form_midp_slider_pane

0x1da5,	// (0x000113b6) bg_input_focus_pane_cp041_ParamLimits

0x1da5,	// (0x000113b6) bg_input_focus_pane_cp041

0x4ab4,	// (0x000140c5) form_midp_gauge_wait_pane_t1_ParamLimits

0x4ab4,	// (0x000140c5) form_midp_gauge_wait_pane_t1

0x4ac6,	// (0x000140d7) form_midp_gauge_wait_pane_t2_ParamLimits

0x4ac6,	// (0x000140d7) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x0001ee2f) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x0001ee2f) form_midp_gauge_wait_pane_t

0x4ad8,	// (0x000140e9) form_midp_wait_pane_ParamLimits

0x4ad8,	// (0x000140e9) form_midp_wait_pane

0x4a7e,	// (0x0001408f) form_midp_image_pane_g1

0x4a87,	// (0x00014098) form_midp_image_pane_t1

0x4a96,	// (0x000140a7) form_midp_image_pane_t2

0x4aa5,	// (0x000140b6) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x0001ee28) form_midp_image_pane_t

0x4a66,	// (0x00014077) list_single_midp_pane_g1

0x4a6f,	// (0x00014080) list_single_midp_pane_t1

0xd52a,	// (0x0001cb3b) list_midp_form_item_pane_ParamLimits

0xd52a,	// (0x0001cb3b) list_midp_form_item_pane

0x3aa7,	// (0x000130b8) list_midp_form_item_pane_t1

0x3ab6,	// (0x000130c7) midp_ticker_pane_g1

0x3ac2,	// (0x000130d3) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001ed7c) midp_ticker_pane_g

0xc9e6,	// (0x0001bff7) midp_ticker_pane_t1

0xd8db,	// (0x0001ceec) midp_editing_number_pane_t1

0x5eca,	// (0x000154db) midp_editing_number_pane

0x5ed9,	// (0x000154ea) midp_ticker_pane

0x5c30,	// (0x00015241) ai_message_heading_pane

0x1cc5,	// (0x000112d6) bg_popup_window_pane_cp14

0x5c38,	// (0x00015249) listscroll_ai_message_pane

0x5bba,	// (0x000151cb) ai_message_heading_pane_g1_ParamLimits

0x5bba,	// (0x000151cb) ai_message_heading_pane_g1

0x5bc6,	// (0x000151d7) ai_message_heading_pane_g2_ParamLimits

0x5bc6,	// (0x000151d7) ai_message_heading_pane_g2

0x5bd2,	// (0x000151e3) ai_message_heading_pane_g3_ParamLimits

0x5bd2,	// (0x000151e3) ai_message_heading_pane_g3

0x5bde,	// (0x000151ef) ai_message_heading_pane_g4_ParamLimits

0x5bde,	// (0x000151ef) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x0001ef69) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x0001ef69) ai_message_heading_pane_g

0x5bea,	// (0x000151fb) ai_message_heading_pane_t1_ParamLimits

0x5bea,	// (0x000151fb) ai_message_heading_pane_t1

0x5c04,	// (0x00015215) ai_message_heading_pane_t2_ParamLimits

0x5c04,	// (0x00015215) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x0001ef72) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x0001ef72) ai_message_heading_pane_t

0x5c16,	// (0x00015227) bg_popup_heading_pane_cp1_ParamLimits

0x5c16,	// (0x00015227) bg_popup_heading_pane_cp1

0x5ba8,	// (0x000151b9) list_ai_message_pane_ParamLimits

0x5ba8,	// (0x000151b9) list_ai_message_pane

0x2e83,	// (0x00012494) scroll_pane_cp10

0x5b44,	// (0x00015155) list_ai_message_pane_g1

0x5b4c,	// (0x0001515d) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x0001ef46) list_ai_message_pane_g

0x5b54,	// (0x00015165) list_ai_message_pane_t1_ParamLimits

0x5b54,	// (0x00015165) list_ai_message_pane_t1

0x5b69,	// (0x0001517a) list_ai_message_pane_t2_ParamLimits

0x5b69,	// (0x0001517a) list_ai_message_pane_t2

0x5b7e,	// (0x0001518f) list_ai_message_pane_t3_ParamLimits

0x5b7e,	// (0x0001518f) list_ai_message_pane_t3

0x5b93,	// (0x000151a4) list_ai_message_pane_t4_ParamLimits

0x5b93,	// (0x000151a4) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0001ef4b) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0001ef4b) list_ai_message_pane_t

0xd70b,	// (0x0001cd1c) cell_ai_soft_ind_pane_ParamLimits

0xd70b,	// (0x0001cd1c) cell_ai_soft_ind_pane

0x3ae0,	// (0x000130f1) cell_ai_soft_ind_pane_g1_ParamLimits

0x3ae0,	// (0x000130f1) cell_ai_soft_ind_pane_g1

0x1cc5,	// (0x000112d6) grid_highlight_cp1

0x3aed,	// (0x000130fe) text_secondary_cp56_ParamLimits

0x3aed,	// (0x000130fe) text_secondary_cp56

0x5b04,	// (0x00015115) example_general_pane_ParamLimits

0x5b04,	// (0x00015115) example_general_pane

0x5b10,	// (0x00015121) example_parent_pane_g1_ParamLimits

0x5b10,	// (0x00015121) example_parent_pane_g1

0x5b1c,	// (0x0001512d) example_parent_pane_t1_ParamLimits

0x5b1c,	// (0x0001512d) example_parent_pane_t1

0xce01,	// (0x0001c412) popup_preview_text_window_ParamLimits

0xce01,	// (0x0001c412) popup_preview_text_window

0x390c,	// (0x00012f1d) list_single_pane_cp2_g4

0x20f0,	// (0x00011701) bg_popup_preview_window_pane_ParamLimits

0x20f0,	// (0x00011701) bg_popup_preview_window_pane

0x583b,	// (0x00014e4c) popup_preview_text_window_t1_ParamLimits

0x583b,	// (0x00014e4c) popup_preview_text_window_t1

0x5859,	// (0x00014e6a) popup_preview_text_window_t2_ParamLimits

0x5859,	// (0x00014e6a) popup_preview_text_window_t2

0x58a2,	// (0x00014eb3) popup_preview_text_window_t3_ParamLimits

0x58a2,	// (0x00014eb3) popup_preview_text_window_t3

0x58e7,	// (0x00014ef8) popup_preview_text_window_t4_ParamLimits

0x58e7,	// (0x00014ef8) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0001ef1a) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0001ef1a) popup_preview_text_window_t

0x5965,	// (0x00014f76) scroll_pane_cp11

0x483d,	// (0x00013e4e) bg_popup_preview_window_pane_g1

0x57fb,	// (0x00014e0c) bg_popup_preview_window_pane_g2

0x5803,	// (0x00014e14) bg_popup_preview_window_pane_g3

0x580b,	// (0x00014e1c) bg_popup_preview_window_pane_g4

0x5813,	// (0x00014e24) bg_popup_preview_window_pane_g5

0x581b,	// (0x00014e2c) bg_popup_preview_window_pane_g6

0x5823,	// (0x00014e34) bg_popup_preview_window_pane_g7

0x582b,	// (0x00014e3c) bg_popup_preview_window_pane_g8

0x008f,	// (0x0000f6a0) aid_popup_width_pane

0xcd7d,	// (0x0001c38e) popup_midp_note_alarm_window_ParamLimits

0xcd7d,	// (0x0001c38e) popup_midp_note_alarm_window

0x2b5e,	// (0x0001216f) data_form_pane_ParamLimits

0xc520,	// (0x0001bb31) form_field_data_pane_g1

0xc52a,	// (0x0001bb3b) form_field_data_pane_t1_ParamLimits

0x2b8c,	// (0x0001219d) input_focus_pane_ParamLimits

0x2b9a,	// (0x000121ab) data_form_wide_pane_ParamLimits

0x2ba6,	// (0x000121b7) form_field_data_wide_pane_g1

0x2bd2,	// (0x000121e3) form_field_data_wide_pane_t1_ParamLimits

0x239c,	// (0x000119ad) input_focus_pane_cp6_ParamLimits

0xc68e,	// (0x0001bc9f) input_popup_find_pane_g1_ParamLimits

0xc68e,	// (0x0001bc9f) input_popup_find_pane_g1

0x0603,	// (0x0000fc14) aid_navi_side_left_pane

0x0618,	// (0x0000fc29) aid_navi_side_right_pane

0x520e,	// (0x0001481f) bg_popup_window_pane_cp30_ParamLimits

0x520e,	// (0x0001481f) bg_popup_window_pane_cp30

0x5288,	// (0x00014899) popup_midp_note_alarm_window_g1_ParamLimits

0x5288,	// (0x00014899) popup_midp_note_alarm_window_g1

0x52b8,	// (0x000148c9) popup_midp_note_alarm_window_t1_ParamLimits

0x52b8,	// (0x000148c9) popup_midp_note_alarm_window_t1

0x5359,	// (0x0001496a) popup_midp_note_alarm_window_t2_ParamLimits

0x5359,	// (0x0001496a) popup_midp_note_alarm_window_t2

0x5407,	// (0x00014a18) popup_midp_note_alarm_window_t3_ParamLimits

0x5407,	// (0x00014a18) popup_midp_note_alarm_window_t3

0x5439,	// (0x00014a4a) popup_midp_note_alarm_window_t4_ParamLimits

0x5439,	// (0x00014a4a) popup_midp_note_alarm_window_t4

0x545f,	// (0x00014a70) popup_midp_note_alarm_window_t5_ParamLimits

0x545f,	// (0x00014a70) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x0001eeb7) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x0001eeb7) popup_midp_note_alarm_window_t

0x550b,	// (0x00014b1c) wait_bar_pane_cp1_ParamLimits

0x550b,	// (0x00014b1c) wait_bar_pane_cp1

0x1cc5,	// (0x000112d6) wait_anim_pane_copy1

0x1cc5,	// (0x000112d6) wait_border_pane_copy1

0x4ef4,	// (0x00014505) wait_border_pane_g1_copy1

0x2bec,	// (0x000121fd) form_field_popup_pane_g1

0xc544,	// (0x0001bb55) form_field_popup_pane_t1_ParamLimits

0x2b8c,	// (0x0001219d) input_focus_pane_cp7_ParamLimits

0x2c0c,	// (0x0001221d) list_form_pane_ParamLimits

0x2c18,	// (0x00012229) form_field_popup_wide_pane_g1

0x2c20,	// (0x00012231) form_field_popup_wide_pane_t1_ParamLimits

0x2b8c,	// (0x0001219d) input_focus_pane_cp8_ParamLimits

0x2c35,	// (0x00012246) list_form_wide_pane_ParamLimits

0x60e6,	// (0x000156f7) aid_size_cell_graphic_pane

0xc5c3,	// (0x0001bbd4) data_form_pane_t1_ParamLimits

0xd8bf,	// (0x0001ced0) data_form_wide_pane_t1_ParamLimits

0xd1b6,	// (0x0001c7c7) bg_status_flat_pane

0xbd5c,	// (0x0001b36d) title_pane_t1_ParamLimits

0x1d6d,	// (0x0001137e) title_pane_t2_ParamLimits

0x1d93,	// (0x000113a4) title_pane_t3_ParamLimits

0xf573,	// (0x0001eb84) title_pane_t_ParamLimits

0x3304,	// (0x00012915) level_1_signal_ParamLimits

0x3311,	// (0x00012922) level_2_signal_ParamLimits

0x331e,	// (0x0001292f) level_3_signal_ParamLimits

0x332b,	// (0x0001293c) level_4_signal_ParamLimits

0x3338,	// (0x00012949) level_5_signal_ParamLimits

0x3345,	// (0x00012956) level_6_signal_ParamLimits

0x3352,	// (0x00012963) level_7_signal_ParamLimits

0x3304,	// (0x00012915) level_1_battery_ParamLimits

0x3311,	// (0x00012922) level_2_battery_ParamLimits

0x331e,	// (0x0001292f) level_3_battery_ParamLimits

0x332b,	// (0x0001293c) level_4_battery_ParamLimits

0x3338,	// (0x00012949) level_5_battery_ParamLimits

0x3345,	// (0x00012956) level_6_battery_ParamLimits

0x3352,	// (0x00012963) level_7_battery_ParamLimits

0x5113,	// (0x00014724) bg_status_flat_pane_g1

0x511b,	// (0x0001472c) bg_status_flat_pane_g2

0x5123,	// (0x00014734) bg_status_flat_pane_g3

0x512b,	// (0x0001473c) bg_status_flat_pane_g4

0x5133,	// (0x00014744) bg_status_flat_pane_g5

0x513b,	// (0x0001474c) bg_status_flat_pane_g6

0x5143,	// (0x00014754) bg_status_flat_pane_g7

0xbdf0,	// (0x0001b401) tabs_3_active_pane_t1_ParamLimits

0xbdf0,	// (0x0001b401) tabs_3_passive_pane_t1_ParamLimits

0xbe0a,	// (0x0001b41b) tabs_4_active_pane_t1_ParamLimits

0xbe0a,	// (0x0001b41b) tabs_4_1_passive_pane_t1_ParamLimits

0xc6a4,	// (0x0001bcb5) tabs_2_active_pane_t1_ParamLimits

0xc6a4,	// (0x0001bcb5) tabs_2_passive_pane_t1_ParamLimits

0x1da5,	// (0x000113b6) bg_active_tab_pane_cp4_ParamLimits

0xc6b6,	// (0x0001bcc7) tabs_2_long_active_pane_t1_ParamLimits

0x3d65,	// (0x00013376) bg_passive_tab_pane_cp4_ParamLimits

0x0bcf,	// (0x000101e0) list_single_midp_graphic_pane_t1_ParamLimits

0x1da5,	// (0x000113b6) bg_active_tab_pane_cp5_ParamLimits

0xc6c9,	// (0x0001bcda) tabs_3_long_active_pane_t1_ParamLimits

0x3d65,	// (0x00013376) bg_passive_tab_pane_cp5_ParamLimits

0x0bcf,	// (0x000101e0) list_single_midp_graphic_pane_t1

0xd1b6,	// (0x0001c7c7) bg_status_flat_pane_ParamLimits

0x449a,	// (0x00013aab) indicator_pane_cp2_ParamLimits

0x449a,	// (0x00013aab) indicator_pane_cp2

0xd32d,	// (0x0001c93e) navi_pane_srt_ParamLimits

0xd32d,	// (0x0001c93e) navi_pane_srt

0x45e2,	// (0x00013bf3) popup_clock_digital_analogue_window_cp1

0x1e9c,	// (0x000114ad) indicator_pane_t1

0x39db,	// (0x00012fec) copy_highlight_pane

0x39db,	// (0x00012fec) cursor_graphics_pane

0x39db,	// (0x00012fec) graphic_within_text_pane

0x39db,	// (0x00012fec) link_highlight_pane

0x5928,	// (0x00014f39) popup_preview_text_window_t5_ParamLimits

0x5928,	// (0x00014f39) popup_preview_text_window_t5

0x3b07,	// (0x00013118) cursor_digital_pane

0x3b07,	// (0x00013118) cursor_primary_pane

0x3b18,	// (0x00013129) cursor_primary_small_pane

0x3b20,	// (0x00013131) cursor_secondary_pane

0x3b28,	// (0x00013139) cursor_title_pane

0x3b07,	// (0x00013118) link_highlight_digital_pane

0x3b0f,	// (0x00013120) link_highlight_primary_pane

0x3b18,	// (0x00013129) link_highlight_primary_small_pane

0x3b20,	// (0x00013131) link_highlight_secondary_pane

0x3b28,	// (0x00013139) link_highlight_title_pane

0x3b07,	// (0x00013118) copy_highlight_digital_pane

0x3b07,	// (0x00013118) copy_highlight_primary_pane

0x3b18,	// (0x00013129) copy_highlight_primary_small_pane

0x3b20,	// (0x00013131) copy_highlight_secondary_pane

0x3b28,	// (0x00013139) copy_highlight_title_pane

0x3b20,	// (0x00013131) graphic_text_digital_pane

0x51b1,	// (0x000147c2) graphic_text_primary_pane

0x51ba,	// (0x000147cb) graphic_text_primary_small_pane

0x3b18,	// (0x00013129) graphic_text_secondary_pane

0x3b07,	// (0x00013118) graphic_text_title_pane

0xc9f8,	// (0x0001c009) cursor_primary_pane_g1

0x51a3,	// (0x000147b4) cursor_text_primary_t1

0xd5d2,	// (0x0001cbe3) cursor_primary_small_pane_g1

0x5195,	// (0x000147a6) cursor_text_primary_small_t1

0xd5c8,	// (0x0001cbd9) cursor_primary_small_pane_g1_copy1

0x517d,	// (0x0001478e) cursor_text_primary_small_t1_copy1

0x515b,	// (0x0001476c) cursor_text_title_t1

0xd5be,	// (0x0001cbcf) cursor_title_pane_g1

0xc9f8,	// (0x0001c009) cursor_digital_pane_g1

0x3b3a,	// (0x0001314b) cursor_text_digital_t1

0x3b5f,	// (0x00013170) link_highlight_primary_pane_g1

0x5104,	// (0x00014715) link_highlight_primary_pane_t1

0x3b48,	// (0x00013159) link_highlight_primary_small_pane_g1

0x3b50,	// (0x00013161) link_highlight_primary_small_pane_t1

0x3b5f,	// (0x00013170) link_highlight_secondary_pane_g1

0x3b67,	// (0x00013178) link_highlight_secondary_pane_t1

0x5078,	// (0x00014689) link_highlight_title_pane_g1

0x5080,	// (0x00014691) link_highlight_title_pane_t1

0x5061,	// (0x00014672) link_highlight_digital_pane_g1

0x5069,	// (0x0001467a) link_highlight_digital_pane_t1

0x4f39,	// (0x0001454a) copy_highlight_primary_pane_g1

0x4f41,	// (0x00014552) copy_highlight_primary_pane_t1

0x4f13,	// (0x00014524) copy_highlight_primary_small_pane_g1

0x4f2a,	// (0x0001453b) copy_highlight_primary_small_pane_t1

0x3b76,	// (0x00013187) copy_highlight_secondary_pane_g1

0x3b7e,	// (0x0001318f) copy_highlight_secondary_pane_t1

0x4f13,	// (0x00014524) copy_highlight_title_pane_g1

0x4f1b,	// (0x0001452c) copy_highlight_title_pane_t1

0x4f39,	// (0x0001454a) copy_highlight_digital_pane_g1

0x62b0,	// (0x000158c1) copy_highlight_digital_pane_t1

0x6204,	// (0x00015815) graphic_text_primary_pane_g1

0x6294,	// (0x000158a5) graphic_text_primary_pane_t1

0x62a2,	// (0x000158b3) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x0001efe6) graphic_text_primary_pane_t

0x6270,	// (0x00015881) graphic_text_primary_small_pane_g1

0x6278,	// (0x00015889) graphic_text_primary_small_pane_t1

0x6286,	// (0x00015897) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x0001efe1) graphic_text_primary_small_pane_t

0x624c,	// (0x0001585d) graphic_text_secondary_pane_g1

0x6254,	// (0x00015865) graphic_text_secondary_pane_t1

0x6262,	// (0x00015873) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x0001efdc) graphic_text_secondary_pane_t

0x6228,	// (0x00015839) graphic_text_title_pane_g1

0x6230,	// (0x00015841) graphic_text_title_pane_t1

0x623e,	// (0x0001584f) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x0001efd7) graphic_text_title_pane_t

0x6204,	// (0x00015815) graphic_text_digital_pane_g1

0x620c,	// (0x0001581d) graphic_text_digital_pane_t1

0x621a,	// (0x0001582b) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x0001efd2) graphic_text_digital_pane_t

0x1da5,	// (0x000113b6) navi_icon_pane_srt_ParamLimits

0x1da5,	// (0x000113b6) navi_icon_pane_srt

0x1cc5,	// (0x000112d6) navi_midp_pane_srt

0x1cc5,	// (0x000112d6) navi_navi_pane_srt

0x1da5,	// (0x000113b6) navi_text_pane_srt_ParamLimits

0x1da5,	// (0x000113b6) navi_text_pane_srt

0x61cf,	// (0x000157e0) navi_navi_icon_text_pane_srt

0x61d7,	// (0x000157e8) navi_navi_pane_srt_g1_ParamLimits

0x61d7,	// (0x000157e8) navi_navi_pane_srt_g1

0x61e9,	// (0x000157fa) navi_navi_pane_srt_g2_ParamLimits

0x61e9,	// (0x000157fa) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x0001efcd) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x0001efcd) navi_navi_pane_srt_g

0x61fb,	// (0x0001580c) navi_navi_tabs_pane_srt

0x61cf,	// (0x000157e0) navi_navi_text_pane_srt

0x61cf,	// (0x000157e0) navi_navi_volume_pane_srt

0x61c0,	// (0x000157d1) navi_navi_text_pane_srt_t1

0x0f49,	// (0x0001055a) navi_navi_volume_pane_srt_g1

0x0f51,	// (0x00010562) volume_small_pane_srt_ParamLimits

0x0f51,	// (0x00010562) volume_small_pane_srt

0x08e3,	// (0x0000fef4) volume_small_pane_srt_g1_ParamLimits

0x08e3,	// (0x0000fef4) volume_small_pane_srt_g1

0x08f3,	// (0x0000ff04) volume_small_pane_srt_g2_ParamLimits

0x08f3,	// (0x0000ff04) volume_small_pane_srt_g2

0x0904,	// (0x0000ff15) volume_small_pane_srt_g3_ParamLimits

0x0904,	// (0x0000ff15) volume_small_pane_srt_g3

0x0915,	// (0x0000ff26) volume_small_pane_srt_g4_ParamLimits

0x0915,	// (0x0000ff26) volume_small_pane_srt_g4

0x0926,	// (0x0000ff37) volume_small_pane_srt_g5_ParamLimits

0x0926,	// (0x0000ff37) volume_small_pane_srt_g5

0x0937,	// (0x0000ff48) volume_small_pane_srt_g6_ParamLimits

0x0937,	// (0x0000ff48) volume_small_pane_srt_g6

0x0948,	// (0x0000ff59) volume_small_pane_srt_g7_ParamLimits

0x0948,	// (0x0000ff59) volume_small_pane_srt_g7

0x0959,	// (0x0000ff6a) volume_small_pane_srt_g8_ParamLimits

0x0959,	// (0x0000ff6a) volume_small_pane_srt_g8

0x096a,	// (0x0000ff7b) volume_small_pane_srt_g9_ParamLimits

0x096a,	// (0x0000ff7b) volume_small_pane_srt_g9

0x097b,	// (0x0000ff8c) volume_small_pane_srt_g10_ParamLimits

0x097b,	// (0x0000ff8c) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001ed81) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001ed81) volume_small_pane_srt_g

0x2199,	// (0x000117aa) query_popup_data_pane_cp2

0x61a6,	// (0x000157b7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x61a6,	// (0x000157b7) navi_navi_icon_text_pane_srt_t1

0x51b1,	// (0x000147c2) navi_tabs_2_long_pane_srt

0x51b1,	// (0x000147c2) navi_tabs_2_pane_srt

0x51b1,	// (0x000147c2) navi_tabs_3_long_pane_srt

0x51b1,	// (0x000147c2) navi_tabs_3_pane_srt

0x51b1,	// (0x000147c2) navi_tabs_4_pane_srt

0x0f29,	// (0x0001053a) tabs_2_active_pane_srt_ParamLimits

0x0f29,	// (0x0001053a) tabs_2_active_pane_srt

0x0f39,	// (0x0001054a) tabs_2_passive_pane_srt_ParamLimits

0x0f39,	// (0x0001054a) tabs_2_passive_pane_srt

0x4957,	// (0x00013f68) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4957,	// (0x00013f68) bg_passive_tab_pane_cp1_srt

0x6172,	// (0x00015783) bg_passive_tab_pane_g1_cp1_srt

0x3628,	// (0x00012c39) bg_passive_tab_pane_g2_cp1_srt

0x617b,	// (0x0001578c) bg_passive_tab_pane_g3_cp1_srt

0x203a,	// (0x0001164b) bg_active_tab_pane_cp1_srt_ParamLimits

0x203a,	// (0x0001164b) bg_active_tab_pane_cp1_srt

0x6184,	// (0x00015795) tabs_2_active_pane_srt_g1

0xd9ef,	// (0x0001d000) tabs_2_active_pane_srt_t1_ParamLimits

0xd9ef,	// (0x0001d000) tabs_2_active_pane_srt_t1

0x6172,	// (0x00015783) bg_active_tab_pane_g1_cp1_srt

0x3628,	// (0x00012c39) bg_active_tab_pane_g2_cp1_srt

0x617b,	// (0x0001578c) bg_active_tab_pane_g3_cp1_srt

0x0ef6,	// (0x00010507) tabs_3_active_pane_srt_ParamLimits

0x0ef6,	// (0x00010507) tabs_3_active_pane_srt

0x0f07,	// (0x00010518) tabs_3_passive_pane_cp_srt_ParamLimits

0x0f07,	// (0x00010518) tabs_3_passive_pane_cp_srt

0x0f18,	// (0x00010529) tabs_3_passive_pane_srt_ParamLimits

0x0f18,	// (0x00010529) tabs_3_passive_pane_srt

0x4957,	// (0x00013f68) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4957,	// (0x00013f68) bg_passive_tab_pane_cp2_srt

0x3b8d,	// (0x0001319e) bg_passive_tab_pane_g1_cp2_srt

0x3628,	// (0x00012c39) bg_passive_tab_pane_g2_cp2_srt

0x3b96,	// (0x000131a7) bg_passive_tab_pane_g3_cp2_srt

0x203a,	// (0x0001164b) bg_active_tab_pane_cp2_srt_ParamLimits

0x203a,	// (0x0001164b) bg_active_tab_pane_cp2_srt

0x6158,	// (0x00015769) tabs_3_active_pane_srt_g1

0xd9d9,	// (0x0001cfea) tabs_3_active_pane_srt_t1_ParamLimits

0xd9d9,	// (0x0001cfea) tabs_3_active_pane_srt_t1

0x3b8d,	// (0x0001319e) bg_active_tab_pane_g1_cp2_srt

0x3628,	// (0x00012c39) bg_active_tab_pane_g2_cp2_srt

0x3b96,	// (0x000131a7) bg_active_tab_pane_g3_cp2_srt

0x0eae,	// (0x000104bf) tabs_4_active_pane_srt_ParamLimits

0x0eae,	// (0x000104bf) tabs_4_active_pane_srt

0x0ec0,	// (0x000104d1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0ec0,	// (0x000104d1) tabs_4_passive_pane_cp2_srt

0x3ceb,	// (0x000132fc) aid_size_cell_toolbar

0x5d10,	// (0x00015321) main_idle_act_pane_ParamLimits

0x3f0a,	// (0x0001351b) popup_large_graphic_colour_window_ParamLimits

0xd081,	// (0x0001c692) popup_toolbar_window_ParamLimits

0xd081,	// (0x0001c692) popup_toolbar_window

0x5f16,	// (0x00015527) list_single_graphic_2heading_pane_ParamLimits

0x5f16,	// (0x00015527) list_single_graphic_2heading_pane

0x30b3,	// (0x000126c4) aid_size_cell_apps_grid_lsc_pane

0x30c5,	// (0x000126d6) aid_size_cell_apps_grid_prt_pane

0x3d65,	// (0x00013376) bg_wml_button_pane_cp1_ParamLimits

0x3d65,	// (0x00013376) bg_wml_button_pane_cp1

0xd55b,	// (0x0001cb6c) form_midp_field_text_pane_t1_ParamLimits

0x4957,	// (0x00013f68) input_focus_pane_cp050_ParamLimits

0x4bab,	// (0x000141bc) list_midp_form_text_pane_ParamLimits

0x4b51,	// (0x00014162) input_focus_pane_cp051_ParamLimits

0x4b65,	// (0x00014176) list_midp_choice_pane_ParamLimits

0xd4f6,	// (0x0001cb07) list_single_2graphic_pane_cp3_ParamLimits

0xd4f6,	// (0x0001cb07) list_single_2graphic_pane_cp3

0xd50a,	// (0x0001cb1b) list_single_midp_graphic_pane_ParamLimits

0xd50a,	// (0x0001cb1b) list_single_midp_graphic_pane

0x0ad2,	// (0x000100e3) list_single_graphic_2heading_pane_g1_ParamLimits

0x0ad2,	// (0x000100e3) list_single_graphic_2heading_pane_g1

0x0ade,	// (0x000100ef) list_single_graphic_2heading_pane_g4_ParamLimits

0x0ade,	// (0x000100ef) list_single_graphic_2heading_pane_g4

0x0aea,	// (0x000100fb) list_single_graphic_2heading_pane_g5_ParamLimits

0x0aea,	// (0x000100fb) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001edd4) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001edd4) list_single_graphic_2heading_pane_g

0x0af6,	// (0x00010107) list_single_graphic_2heading_pane_t1_ParamLimits

0x0af6,	// (0x00010107) list_single_graphic_2heading_pane_t1

0x0b0a,	// (0x0001011b) list_single_graphic_2heading_pane_t2_ParamLimits

0x0b0a,	// (0x0001011b) list_single_graphic_2heading_pane_t2

0x0b26,	// (0x00010137) list_single_graphic_2heading_pane_t3_ParamLimits

0x0b26,	// (0x00010137) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001eddb) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001eddb) list_single_graphic_2heading_pane_t

0x4741,	// (0x00013d52) bg_popup_sub_pane_cp2

0x476b,	// (0x00013d7c) grid_toobar_pane

0x0b3e,	// (0x0001014f) cell_toolbar_pane_ParamLimits

0x0b3e,	// (0x0001014f) cell_toolbar_pane

0x47e1,	// (0x00013df2) cell_toolbar_pane_g1_ParamLimits

0x47e1,	// (0x00013df2) cell_toolbar_pane_g1

0x47f5,	// (0x00013e06) cell_toolbar_pane_g2_ParamLimits

0x47f5,	// (0x00013e06) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001ede9) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001ede9) cell_toolbar_pane_g

0x4817,	// (0x00013e28) grid_highlight_pane_cp2_ParamLimits

0x4817,	// (0x00013e28) grid_highlight_pane_cp2

0x4831,	// (0x00013e42) toolbar_button_pane

0x483d,	// (0x00013e4e) toolbar_button_pane_g1

0x4845,	// (0x00013e56) toolbar_button_pane_g2

0x484d,	// (0x00013e5e) toolbar_button_pane_g3

0x4855,	// (0x00013e66) toolbar_button_pane_g4

0x485d,	// (0x00013e6e) toolbar_button_pane_g5

0x4865,	// (0x00013e76) toolbar_button_pane_g6

0x486d,	// (0x00013e7e) toolbar_button_pane_g7

0x4875,	// (0x00013e86) toolbar_button_pane_g8

0x487d,	// (0x00013e8e) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0001edee) toolbar_button_pane_g

0x0b76,	// (0x00010187) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0b76,	// (0x00010187) list_single_2graphic_pane_g1_cp3

0xb6c2,	// (0x0001acd3) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb6c2,	// (0x0001acd3) list_single_2graphic_pane_g2_cp3

0x0b93,	// (0x000101a4) list_single_2graphic_pane_g3_cp3

0x0b9b,	// (0x000101ac) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0b9b,	// (0x000101ac) list_single_2graphic_pane_g4_cp3

0x0ba7,	// (0x000101b8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0ba7,	// (0x000101b8) list_single_2graphic_pane_t1_cp3

0x0bc3,	// (0x000101d4) list_single_midp_graphic_pane_g2_ParamLimits

0x0bc3,	// (0x000101d4) list_single_midp_graphic_pane_g2

0x3cf3,	// (0x00013304) aid_zoom_text_primary

0x3cfb,	// (0x0001330c) aid_zoom_text_secondary

0x3c4a,	// (0x0001325b) status_small_pane_g7_ParamLimits

0x3c4a,	// (0x0001325b) status_small_pane_g7

0x3c6d,	// (0x0001327e) status_small_pane_t1_ParamLimits

0xbd38,	// (0x0001b349) title_pane_g2

0x0003,

0xf56a,	// (0x0001eb7b) title_pane_g

0xbfc0,	// (0x0001b5d1) aid_size_cell_colour_1_pane_ParamLimits

0xbfc0,	// (0x0001b5d1) aid_size_cell_colour_1_pane

0xbfd4,	// (0x0001b5e5) aid_size_cell_colour_2_pane_ParamLimits

0xbfd4,	// (0x0001b5e5) aid_size_cell_colour_2_pane

0xbfe8,	// (0x0001b5f9) aid_size_cell_colour_3_pane_ParamLimits

0xbfe8,	// (0x0001b5f9) aid_size_cell_colour_3_pane

0xbffc,	// (0x0001b60d) aid_size_cell_colour_4_pane_ParamLimits

0xbffc,	// (0x0001b60d) aid_size_cell_colour_4_pane

0x053f,	// (0x0000fb50) title_pane_stacon_g1_ParamLimits

0x053f,	// (0x0000fb50) title_pane_stacon_g1

0x4f98,	// (0x000145a9) popup_note_wait_window_g3_ParamLimits

0x4f98,	// (0x000145a9) popup_note_wait_window_g3

0x500e,	// (0x0001461f) popup_note_wait_window_t5_ParamLimits

0x500e,	// (0x0001461f) popup_note_wait_window_t5

0x1cc5,	// (0x000112d6) main_feb_china_hwr_fs_writing_pane

0xcab3,	// (0x0001c0c4) popup_feb_china_hwr_fs_window_ParamLimits

0xcab3,	// (0x0001c0c4) popup_feb_china_hwr_fs_window

0xb6d3,	// (0x0001ace4) aid_size_cell_hwr_fs_ParamLimits

0xb6d3,	// (0x0001ace4) aid_size_cell_hwr_fs

0x4957,	// (0x00013f68) bg_popup_sub_pane_cp3_ParamLimits

0x4957,	// (0x00013f68) bg_popup_sub_pane_cp3

0xb6e8,	// (0x0001acf9) grid_hwr_fs_pane_ParamLimits

0xb6e8,	// (0x0001acf9) grid_hwr_fs_pane

0x0c12,	// (0x00010223) linegrid_hwr_fs_pane_ParamLimits

0x0c12,	// (0x00010223) linegrid_hwr_fs_pane

0xb700,	// (0x0001ad11) cell_hwr_fs_pane_ParamLimits

0xb700,	// (0x0001ad11) cell_hwr_fs_pane

0x4963,	// (0x00013f74) linegrid_hwr_fs_pane_g1_ParamLimits

0x4963,	// (0x00013f74) linegrid_hwr_fs_pane_g1

0xd4ca,	// (0x0001cadb) linegrid_hwr_fs_pane_g2_ParamLimits

0xd4ca,	// (0x0001cadb) linegrid_hwr_fs_pane_g2

0x4981,	// (0x00013f92) linegrid_hwr_fs_pane_g3_ParamLimits

0x4981,	// (0x00013f92) linegrid_hwr_fs_pane_g3

0x0c44,	// (0x00010255) linegrid_hwr_fs_pane_g4_ParamLimits

0x0c44,	// (0x00010255) linegrid_hwr_fs_pane_g4

0x0c5e,	// (0x0001026f) linegrid_hwr_fs_pane_g5_ParamLimits

0x0c5e,	// (0x0001026f) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x0001ee14) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x0001ee14) linegrid_hwr_fs_pane_g

0x498d,	// (0x00013f9e) cell_hwr_fs_pane_g1_ParamLimits

0x498d,	// (0x00013f9e) cell_hwr_fs_pane_g1

0x4678,	// (0x00013c89) cell_hwr_fs_pane_g2_ParamLimits

0x4678,	// (0x00013c89) cell_hwr_fs_pane_g2

0xd4dc,	// (0x0001caed) cell_hwr_fs_pane_g3_ParamLimits

0xd4dc,	// (0x0001caed) cell_hwr_fs_pane_g3

0xd4e9,	// (0x0001cafa) cell_hwr_fs_pane_g4_ParamLimits

0xd4e9,	// (0x0001cafa) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x0001ee1f) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x0001ee1f) cell_hwr_fs_pane_g

0xb726,	// (0x0001ad37) cell_hwr_fs_pane_t1

0x1cc5,	// (0x000112d6) grid_highlight_pane_cp6

0x1cc5,	// (0x000112d6) main_idle_act2_pane

0x2e6a,	// (0x0001247b) aid_inside_area_popup_secondary

0xd5f2,	// (0x0001cc03) aid_inside_area_window_primary_ParamLimits

0xd5f2,	// (0x0001cc03) aid_inside_area_window_primary

0x62bf,	// (0x000158d0) ai2_news_ticker_pane

0x62c7,	// (0x000158d8) aid_size_cell_ai1_link_ParamLimits

0x62c7,	// (0x000158d8) aid_size_cell_ai1_link

0xda05,	// (0x0001d016) popup_ai2_data_window_ParamLimits

0xda05,	// (0x0001d016) popup_ai2_data_window

0x62f7,	// (0x00015908) popup_ai2_link_window_ParamLimits

0x62f7,	// (0x00015908) popup_ai2_link_window

0x4957,	// (0x00013f68) bg_popup_sub_pane_cp4_ParamLimits

0x4957,	// (0x00013f68) bg_popup_sub_pane_cp4

0x630b,	// (0x0001591c) grid_ai2_link_pane_ParamLimits

0x630b,	// (0x0001591c) grid_ai2_link_pane

0x6322,	// (0x00015933) popup_ai2_link_window_g1_ParamLimits

0x6322,	// (0x00015933) popup_ai2_link_window_g1

0x632e,	// (0x0001593f) popup_ai2_link_window_g2_ParamLimits

0x632e,	// (0x0001593f) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x0001efeb) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x0001efeb) popup_ai2_link_window_g

0x633d,	// (0x0001594e) ai2_mp_button_pane

0x6345,	// (0x00015956) ai2_mp_volume_pane

0x4b51,	// (0x00014162) bg_popup_sub_pane_cp5_ParamLimits

0x4b51,	// (0x00014162) bg_popup_sub_pane_cp5

0x634d,	// (0x0001595e) heading_ai2_gene_pane_ParamLimits

0x634d,	// (0x0001595e) heading_ai2_gene_pane

0x6359,	// (0x0001596a) list_ai2_gene_pane_ParamLimits

0x6359,	// (0x0001596a) list_ai2_gene_pane

0x63a1,	// (0x000159b2) cell_ai2_link_pane_ParamLimits

0x63a1,	// (0x000159b2) cell_ai2_link_pane

0x63b7,	// (0x000159c8) cell_ai2_link_pane_g1

0x1cc5,	// (0x000112d6) grid_highlight_pane_cp7

0x0f66,	// (0x00010577) ai2_mp_volume_pane_g1

0x6487,	// (0x00015a98) ai2_mp_volume_pane_g2

0xda2f,	// (0x0001d040) list_ai2_gene_pane_t1

0x648f,	// (0x00015aa0) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x0001f004) ai2_mp_volume_pane_g

0x0f6e,	// (0x0001057f) volume_small_pane_cp3

0x6497,	// (0x00015aa8) aid_size_cell_ai2_button

0x649f,	// (0x00015ab0) grid_ai2_button_pane

0x64a8,	// (0x00015ab9) cell_ai2_button_pane_ParamLimits

0x64a8,	// (0x00015ab9) cell_ai2_button_pane

0x1cbb,	// (0x000112cc) cell_ai2_button_pane_g1

0x1cc5,	// (0x000112d6) grid_highlight_pane_cp8

0x6447,	// (0x00015a58) ai2_gene_pane_t1_ParamLimits

0x6447,	// (0x00015a58) ai2_gene_pane_t1

0xca29,	// (0x0001c03a) aid_height_parent_landscape

0xd76b,	// (0x0001cd7c) aid_height_set_list

0x5d10,	// (0x00015321) aid_size_parent

0x60e6,	// (0x000156f7) aid_size_cell_graphic_pane_ParamLimits

0x6369,	// (0x0001597a) popup_ai2_data_window_g1_ParamLimits

0x6369,	// (0x0001597a) popup_ai2_data_window_g1

0x6375,	// (0x00015986) ai2_news_ticker_pane_g1

0x637d,	// (0x0001598e) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x0001eff0) ai2_news_ticker_pane_g

0x6385,	// (0x00015996) ai2_news_ticker_pane_t1

0x6393,	// (0x000159a4) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0001eff5) ai2_news_ticker_pane_t

0x63c0,	// (0x000159d1) heading_ai2_gene_pane_g1

0x63c8,	// (0x000159d9) heading_ai2_gene_pane_t1_ParamLimits

0x63c8,	// (0x000159d9) heading_ai2_gene_pane_t1

0x63dd,	// (0x000159ee) list_highlight_pane_cp6

0xda19,	// (0x0001d02a) ai2_gene_pane_ParamLimits

0xda19,	// (0x0001d02a) ai2_gene_pane

0xda3d,	// (0x0001d04e) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x0001effa) list_ai2_gene_pane_t

0x6418,	// (0x00015a29) list_highlight_pane_cp8_ParamLimits

0x6418,	// (0x00015a29) list_highlight_pane_cp8

0x6429,	// (0x00015a3a) ai2_gene_pane_g1_ParamLimits

0x6429,	// (0x00015a3a) ai2_gene_pane_g1

0x643b,	// (0x00015a4c) ai2_gene_pane_g2_ParamLimits

0x643b,	// (0x00015a4c) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x0001efff) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x0001efff) ai2_gene_pane_g

0x25c1,	// (0x00011bd2) scroll_pane_cp12

0xb681,	// (0x0001ac92) control_pane_t3_ParamLimits

0xb681,	// (0x0001ac92) control_pane_t3

0x3c5e,	// (0x0001326f) status_small_pane_g8_ParamLimits

0x3c5e,	// (0x0001326f) status_small_pane_g8

0xcb48,	// (0x0001c159) popup_find_window_ParamLimits

0xcdb7,	// (0x0001c3c8) popup_note_image_window_ParamLimits

0x47a7,	// (0x00013db8) list_double2_graphic_pane_vc_g1_ParamLimits

0x47a7,	// (0x00013db8) list_double2_graphic_pane_vc_g1

0x47b3,	// (0x00013dc4) list_double2_graphic_pane_vc_g2_ParamLimits

0x47b3,	// (0x00013dc4) list_double2_graphic_pane_vc_g2

0x47bf,	// (0x00013dd0) list_double2_graphic_pane_vc_g3_ParamLimits

0x47bf,	// (0x00013dd0) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001ede2) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001ede2) list_double2_graphic_pane_vc_g

0x47cb,	// (0x00013ddc) list_double2_graphic_pane_vc_t1_ParamLimits

0x47cb,	// (0x00013ddc) list_double2_graphic_pane_vc_t1

0x47b3,	// (0x00013dc4) list_single_heading_pane_vc_g1_ParamLimits

0x47b3,	// (0x00013dc4) list_single_heading_pane_vc_g1

0x47bf,	// (0x00013dd0) list_single_heading_pane_vc_g2_ParamLimits

0x47bf,	// (0x00013dd0) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ebf5) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ebf5) list_single_heading_pane_vc_g

0x4885,	// (0x00013e96) list_single_heading_pane_vc_t1_ParamLimits

0x4885,	// (0x00013e96) list_single_heading_pane_vc_t1

0x489b,	// (0x00013eac) list_single_heading_pane_vc_t2_ParamLimits

0x489b,	// (0x00013eac) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x0001ee03) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x0001ee03) list_single_heading_pane_vc_t

0x48af,	// (0x00013ec0) list_setting_number_pane_vc_g1_ParamLimits

0x48af,	// (0x00013ec0) list_setting_number_pane_vc_g1

0x48bb,	// (0x00013ecc) list_setting_number_pane_vc_g2_ParamLimits

0x48bb,	// (0x00013ecc) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001ee08) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001ee08) list_setting_number_pane_vc_g

0x48c7,	// (0x00013ed8) list_setting_number_pane_vc_t1_ParamLimits

0x48c7,	// (0x00013ed8) list_setting_number_pane_vc_t1

0x48db,	// (0x00013eec) list_setting_number_pane_vc_t2_ParamLimits

0x48db,	// (0x00013eec) list_setting_number_pane_vc_t2

0x48f7,	// (0x00013f08) list_setting_number_pane_vc_t3_ParamLimits

0x48f7,	// (0x00013f08) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x0001ee0d) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x0001ee0d) list_setting_number_pane_vc_t

0x491d,	// (0x00013f2e) set_value_pane_vc_ParamLimits

0x491d,	// (0x00013f2e) set_value_pane_vc

0x5f16,	// (0x00015527) list_double2_graphic_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_double2_graphic_pane_vc

0x5f28,	// (0x00015539) list_double2_large_graphic_pane_vc_ParamLimits

0x5f28,	// (0x00015539) list_double2_large_graphic_pane_vc

0x5f16,	// (0x00015527) list_double2_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_double2_pane_vc

0x5f16,	// (0x00015527) list_double_graphic_heading_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_double_graphic_heading_pane_vc

0x5f16,	// (0x00015527) list_double_graphic_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_double_graphic_pane_vc

0x5f16,	// (0x00015527) list_double_heading_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_double_heading_pane_vc

0x5f28,	// (0x00015539) list_double_large_graphic_pane_vc_ParamLimits

0x5f28,	// (0x00015539) list_double_large_graphic_pane_vc

0x5f16,	// (0x00015527) list_double_number_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_double_number_pane_vc

0x5f16,	// (0x00015527) list_double_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_double_pane_vc

0x5f16,	// (0x00015527) list_double_time_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_double_time_pane_vc

0x5f16,	// (0x00015527) list_setting_number_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_setting_number_pane_vc

0x5f16,	// (0x00015527) list_setting_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_setting_pane_vc

0x5f16,	// (0x00015527) list_single_graphic_heading_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_single_graphic_heading_pane_vc

0x5f16,	// (0x00015527) list_single_heading_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_single_heading_pane_vc

0x5f16,	// (0x00015527) list_single_number_heading_pane_vc_ParamLimits

0x5f16,	// (0x00015527) list_single_number_heading_pane_vc

0x64dc,	// (0x00015aed) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x64dc,	// (0x00015aed) list_double_graphic_heading_pane_vc_g1

0x47b3,	// (0x00013dc4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x47b3,	// (0x00013dc4) list_double_graphic_heading_pane_vc_g2

0x47bf,	// (0x00013dd0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x47bf,	// (0x00013dd0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x0001f00b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001f00b) list_double_graphic_heading_pane_vc_g

0x64e8,	// (0x00015af9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x64e8,	// (0x00015af9) list_double_graphic_heading_pane_vc_t1

0x4885,	// (0x00013e96) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4885,	// (0x00013e96) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x0001f012) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0001f012) list_double_graphic_heading_pane_vc_t

0x48af,	// (0x00013ec0) list_setting_pane_vc_g1_ParamLimits

0x48af,	// (0x00013ec0) list_setting_pane_vc_g1

0x48bb,	// (0x00013ecc) list_setting_pane_vc_g2_ParamLimits

0x48bb,	// (0x00013ecc) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001ee08) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001ee08) list_setting_pane_vc_g

0x6700,	// (0x00015d11) list_setting_pane_vc_t1_ParamLimits

0x6700,	// (0x00015d11) list_setting_pane_vc_t1

0x6714,	// (0x00015d25) list_setting_pane_vc_t2_ParamLimits

0x6714,	// (0x00015d25) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x0001f055) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x0001f055) list_setting_pane_vc_t

0x491d,	// (0x00013f2e) set_value_pane_cp_vc_ParamLimits

0x491d,	// (0x00013f2e) set_value_pane_cp_vc

0x47b3,	// (0x00013dc4) list_single_number_heading_pane_vc_g1_ParamLimits

0x47b3,	// (0x00013dc4) list_single_number_heading_pane_vc_g1

0x47bf,	// (0x00013dd0) list_single_number_heading_pane_vc_g2_ParamLimits

0x47bf,	// (0x00013dd0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ebf5) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ebf5) list_single_number_heading_pane_vc_g

0x4885,	// (0x00013e96) list_single_number_heading_pane_vc_t1_ParamLimits

0x4885,	// (0x00013e96) list_single_number_heading_pane_vc_t1

0x6736,	// (0x00015d47) list_single_number_heading_pane_vc_t2_ParamLimits

0x6736,	// (0x00015d47) list_single_number_heading_pane_vc_t2

0x674a,	// (0x00015d5b) list_single_number_heading_pane_vc_t3_ParamLimits

0x674a,	// (0x00015d5b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x0001f05a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0001f05a) list_single_number_heading_pane_vc_t

0x47a7,	// (0x00013db8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x47a7,	// (0x00013db8) list_single_graphic_heading_pane_vc_g1

0x47b3,	// (0x00013dc4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x47b3,	// (0x00013dc4) list_single_graphic_heading_pane_vc_g4

0x47bf,	// (0x00013dd0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x47bf,	// (0x00013dd0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0001ede2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001ede2) list_single_graphic_heading_pane_vc_g

0x4885,	// (0x00013e96) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4885,	// (0x00013e96) list_single_graphic_heading_pane_vc_t1

0x675c,	// (0x00015d6d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x675c,	// (0x00015d6d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0001f061) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0001f061) list_single_graphic_heading_pane_vc_t

0x47b3,	// (0x00013dc4) list_double2_pane_vc_g1_ParamLimits

0x47b3,	// (0x00013dc4) list_double2_pane_vc_g1

0x47bf,	// (0x00013dd0) list_double2_pane_vc_g2_ParamLimits

0x47bf,	// (0x00013dd0) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ebf5) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ebf5) list_double2_pane_vc_g

0x6770,	// (0x00015d81) list_double2_pane_vc_t1_ParamLimits

0x6770,	// (0x00015d81) list_double2_pane_vc_t1

0x6786,	// (0x00015d97) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6786,	// (0x00015d97) list_double2_large_graphic_pane_vc_g1

0x6792,	// (0x00015da3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6792,	// (0x00015da3) list_double2_large_graphic_pane_vc_g2

0x679e,	// (0x00015daf) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x679e,	// (0x00015daf) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0001ec12) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0001ec12) list_double2_large_graphic_pane_vc_g

0x67aa,	// (0x00015dbb) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x67aa,	// (0x00015dbb) list_double2_large_graphic_pane_vc_t1

0x67c0,	// (0x00015dd1) list_double_time_pane_vc_g1_ParamLimits

0x67c0,	// (0x00015dd1) list_double_time_pane_vc_g1

0x67cc,	// (0x00015ddd) list_double_time_pane_vc_g2_ParamLimits

0x67cc,	// (0x00015ddd) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0001f066) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0001f066) list_double_time_pane_vc_g

0x67d8,	// (0x00015de9) list_double_time_pane_vc_t1_ParamLimits

0x67d8,	// (0x00015de9) list_double_time_pane_vc_t1

0x67f1,	// (0x00015e02) list_double_time_pane_vc_t2_ParamLimits

0x67f1,	// (0x00015e02) list_double_time_pane_vc_t2

0x680c,	// (0x00015e1d) list_double_time_pane_vc_t3_ParamLimits

0x680c,	// (0x00015e1d) list_double_time_pane_vc_t3

0x6824,	// (0x00015e35) list_double_time_pane_vc_t4_ParamLimits

0x6824,	// (0x00015e35) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0001f06b) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0001f06b) list_double_time_pane_vc_t

0x47b3,	// (0x00013dc4) list_double_pane_vc_g1_ParamLimits

0x47b3,	// (0x00013dc4) list_double_pane_vc_g1

0x47bf,	// (0x00013dd0) list_double_pane_vc_g2_ParamLimits

0x47bf,	// (0x00013dd0) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ebf5) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ebf5) list_double_pane_vc_g

0x6838,	// (0x00015e49) list_double_pane_vc_t1_ParamLimits

0x6838,	// (0x00015e49) list_double_pane_vc_t1

0x684a,	// (0x00015e5b) list_double_pane_vc_t2_ParamLimits

0x684a,	// (0x00015e5b) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0001f074) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0001f074) list_double_pane_vc_t

0x47b3,	// (0x00013dc4) list_double_number_pane_vc_g1_ParamLimits

0x47b3,	// (0x00013dc4) list_double_number_pane_vc_g1

0x47bf,	// (0x00013dd0) list_double_number_pane_vc_g2_ParamLimits

0x47bf,	// (0x00013dd0) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ebf5) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ebf5) list_double_number_pane_vc_g

0x6862,	// (0x00015e73) list_double_number_pane_vc_t1_ParamLimits

0x6862,	// (0x00015e73) list_double_number_pane_vc_t1

0x6876,	// (0x00015e87) list_double_number_pane_vc_t2_ParamLimits

0x6876,	// (0x00015e87) list_double_number_pane_vc_t2

0x684a,	// (0x00015e5b) list_double_number_pane_vc_t3_ParamLimits

0x684a,	// (0x00015e5b) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0001f079) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0001f079) list_double_number_pane_vc_t

0x6888,	// (0x00015e99) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6888,	// (0x00015e99) list_double_large_graphic_pane_vc_g1

0x6894,	// (0x00015ea5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6894,	// (0x00015ea5) list_double_large_graphic_pane_vc_g2

0x679e,	// (0x00015daf) list_double_large_graphic_pane_vc_g3_ParamLimits

0x679e,	// (0x00015daf) list_double_large_graphic_pane_vc_g3

0x68a3,	// (0x00015eb4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x68a3,	// (0x00015eb4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x0001f080) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0001f080) list_double_large_graphic_pane_vc_g

0x68af,	// (0x00015ec0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x68af,	// (0x00015ec0) list_double_large_graphic_pane_vc_t1

0x68c1,	// (0x00015ed2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x68c1,	// (0x00015ed2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0001f089) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0001f089) list_double_large_graphic_pane_vc_t

0x47b3,	// (0x00013dc4) list_double_heading_pane_vc_g1_ParamLimits

0x47b3,	// (0x00013dc4) list_double_heading_pane_vc_g1

0x47bf,	// (0x00013dd0) list_double_heading_pane_vc_g2_ParamLimits

0x47bf,	// (0x00013dd0) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ebf5) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ebf5) list_double_heading_pane_vc_g

0x68da,	// (0x00015eeb) list_double_heading_pane_vc_t1_ParamLimits

0x68da,	// (0x00015eeb) list_double_heading_pane_vc_t1

0x4885,	// (0x00013e96) list_double_heading_pane_vc_t2_ParamLimits

0x4885,	// (0x00013e96) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x0001f08e) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x0001f08e) list_double_heading_pane_vc_t

0x47a7,	// (0x00013db8) list_double_graphic_pane_vc_g1_ParamLimits

0x47a7,	// (0x00013db8) list_double_graphic_pane_vc_g1

0x68ee,	// (0x00015eff) list_double_graphic_pane_vc_g2_ParamLimits

0x68ee,	// (0x00015eff) list_double_graphic_pane_vc_g2

0x68fd,	// (0x00015f0e) list_double_graphic_pane_vc_g3_ParamLimits

0x68fd,	// (0x00015f0e) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x0001f093) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x0001f093) list_double_graphic_pane_vc_g

0x6909,	// (0x00015f1a) list_double_graphic_pane_vc_t1_ParamLimits

0x6909,	// (0x00015f1a) list_double_graphic_pane_vc_t1

0x684a,	// (0x00015e5b) list_double_graphic_pane_vc_t2_ParamLimits

0x684a,	// (0x00015e5b) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0001f09a) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0001f09a) list_double_graphic_pane_vc_t

0x009b,	// (0x0000f6ac) aid_size_cell_fastswap

0xb3b7,	// (0x0001a9c8) aid_size_cell_touch_ParamLimits

0xb3b7,	// (0x0001a9c8) aid_size_cell_touch

0x0308,	// (0x0000f919) popup_fast_swap_wide_window_ParamLimits

0x0308,	// (0x0000f919) popup_fast_swap_wide_window

0xb502,	// (0x0001ab13) touch_pane_ParamLimits

0xb502,	// (0x0001ab13) touch_pane

0x2aa6,	// (0x000120b7) button_value_adjust_pane_cp2

0x2aae,	// (0x000120bf) button_value_adjust_pane_cp4

0x2ad0,	// (0x000120e1) form_field_data_pane_cp2

0xc4e7,	// (0x0001baf8) form_field_data_wide_pane_cp2

0x3182,	// (0x00012793) bg_scroll_pane_ParamLimits

0x06a2,	// (0x0000fcb3) scroll_handle_pane_ParamLimits

0x06b6,	// (0x0000fcc7) scroll_sc2_down_pane_ParamLimits

0x06b6,	// (0x0000fcc7) scroll_sc2_down_pane

0x31b3,	// (0x000127c4) scroll_sc2_up_pane_ParamLimits

0x31b3,	// (0x000127c4) scroll_sc2_up_pane

0xdb68,	// (0x0001d179) grid_wheel_folder_pane_g1_ParamLimits

0xdb68,	// (0x0001d179) grid_wheel_folder_pane_g1

0x087b,	// (0x0000fe8c) clock_nsta_pane_cp2_ParamLimits

0x087b,	// (0x0000fe8c) clock_nsta_pane_cp2

0xc93e,	// (0x0001bf4f) listscroll_midp_pane_ParamLimits

0xc94f,	// (0x0001bf60) midp_canvas_pane

0x3cd9,	// (0x000132ea) nsta_clock_indic_pane

0x3d37,	// (0x00013348) listscroll_form_pane_vc

0x3d53,	// (0x00013364) listscroll_set_pane_vc_ParamLimits

0x3d53,	// (0x00013364) listscroll_set_pane_vc

0xd1de,	// (0x0001c7ef) clock_nsta_pane

0xd208,	// (0x0001c819) indicator_nsta_pane

0x4741,	// (0x00013d52) bg_popup_sub_pane_cp2_ParamLimits

0x4755,	// (0x00013d66) find_pane_cp2_ParamLimits

0x4755,	// (0x00013d66) find_pane_cp2

0x476b,	// (0x00013d7c) grid_toobar_pane_ParamLimits

0x492b,	// (0x00013f3c) list_form_gen_pane_vc_ParamLimits

0x492b,	// (0x00013f3c) list_form_gen_pane_vc

0x4941,	// (0x00013f52) scroll_pane_cp8_vc_ParamLimits

0x4941,	// (0x00013f52) scroll_pane_cp8_vc

0x49bd,	// (0x00013fce) data_form_wide_pane_vc_ParamLimits

0x49bd,	// (0x00013fce) data_form_wide_pane_vc

0x49c9,	// (0x00013fda) form_field_data_wide_pane_vc_g1

0x49d1,	// (0x00013fe2) form_field_data_wide_pane_vc_t1_ParamLimits

0x49d1,	// (0x00013fe2) form_field_data_wide_pane_vc_t1

0x2b8c,	// (0x0001219d) input_focus_pane_cp6_vc_ParamLimits

0x2b8c,	// (0x0001219d) input_focus_pane_cp6_vc

0xd596,	// (0x0001cba7) list_midp_pane_ParamLimits

0x614c,	// (0x0001575d) scroll_pane_cp16_ParamLimits

0x614c,	// (0x0001575d) scroll_pane_cp16

0x4d6d,	// (0x0001437e) button_value_adjust_pane_ParamLimits

0x4d6d,	// (0x0001437e) button_value_adjust_pane

0xd77c,	// (0x0001cd8d) button_value_adjust_pane_cp6_ParamLimits

0xd77c,	// (0x0001cd8d) button_value_adjust_pane_cp6

0xd896,	// (0x0001cea7) settings_code_pane_cp_ParamLimits

0xd896,	// (0x0001cea7) settings_code_pane_cp

0x1cbb,	// (0x000112cc) cell_touch_pane_g1

0x1cbb,	// (0x000112cc) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001ed2b) cell_touch_pane_g

0xda4b,	// (0x0001d05c) cell_touch_pane_cp_ParamLimits

0xda4b,	// (0x0001d05c) cell_touch_pane_cp

0xda67,	// (0x0001d078) cell_touch_pane_ParamLimits

0xda67,	// (0x0001d078) cell_touch_pane

0x1cbb,	// (0x000112cc) scroll_sc2_down_pane_g1

0x1cbb,	// (0x000112cc) scroll_sc2_up_pane_g1

0x1cc5,	// (0x000112d6) bg_set_opt_pane_cp4_vc

0x64fc,	// (0x00015b0d) list_set_graphic_pane_vc_g1_ParamLimits

0x64fc,	// (0x00015b0d) list_set_graphic_pane_vc_g1

0x6508,	// (0x00015b19) list_set_graphic_pane_vc_g2_ParamLimits

0x6508,	// (0x00015b19) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x0001f017) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x0001f017) list_set_graphic_pane_vc_g

0x6514,	// (0x00015b25) text_primary_small_cp13_vc_ParamLimits

0x6514,	// (0x00015b25) text_primary_small_cp13_vc

0x652c,	// (0x00015b3d) list_set_graphic_pane_vc_ParamLimits

0x652c,	// (0x00015b3d) list_set_graphic_pane_vc

0x1cc5,	// (0x000112d6) input_focus_pane_cp2_vc

0x1cbb,	// (0x000112cc) setting_code_pane_vc_g1

0x6540,	// (0x00015b51) setting_code_pane_vc_t1

0x654e,	// (0x00015b5f) set_text_pane_vc_t1_ParamLimits

0x654e,	// (0x00015b5f) set_text_pane_vc_t1

0x1cc5,	// (0x000112d6) input_focus_pane_cp1_vc

0x6569,	// (0x00015b7a) list_set_text_pane_vc

0x1cbb,	// (0x000112cc) setting_text_pane_vc_g1

0x1cc5,	// (0x000112d6) bg_set_opt_pane_cp2_vc

0x6573,	// (0x00015b84) setting_slider_graphic_pane_vc_g1

0x657b,	// (0x00015b8c) setting_slider_graphic_pane_vc_t1

0x6589,	// (0x00015b9a) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x0001f01c) setting_slider_graphic_pane_vc_t

0x6597,	// (0x00015ba8) slider_set_pane_cp_vc

0x659f,	// (0x00015bb0) slider_set_pane_vc_g1

0x65a8,	// (0x00015bb9) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x0001f021) slider_set_pane_vc_g

0x2cc4,	// (0x000122d5) set_opt_bg_pane_g1_copy1

0x2ccc,	// (0x000122dd) set_opt_bg_pane_g2_copy1

0x65d4,	// (0x00015be5) set_opt_bg_pane_g3_copy1

0x2cdc,	// (0x000122ed) set_opt_bg_pane_g4_copy1

0x2ce4,	// (0x000122f5) set_opt_bg_pane_g5_copy1

0x2cec,	// (0x000122fd) set_opt_bg_pane_g6_copy1

0x65de,	// (0x00015bef) set_opt_bg_pane_g7_copy1

0x65e6,	// (0x00015bf7) set_opt_bg_pane_g8_copy1

0x65f0,	// (0x00015c01) set_opt_bg_pane_g9_copy1

0x1cc5,	// (0x000112d6) bg_set_opt_pane_cp_vc

0x65fa,	// (0x00015c0b) setting_slider_pane_vc_t1

0x657b,	// (0x00015b8c) setting_slider_pane_vc_t2

0x6589,	// (0x00015b9a) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x0001f030) setting_slider_pane_vc_t

0x6597,	// (0x00015ba8) slider_set_pane_vc

0x0c82,	// (0x00010293) volume_set_pane_vc_g1

0x0c8b,	// (0x0001029c) volume_set_pane_vc_g2

0x0c94,	// (0x000102a5) volume_set_pane_vc_g3

0x0c9d,	// (0x000102ae) volume_set_pane_vc_g4

0x0ca6,	// (0x000102b7) volume_set_pane_vc_g5

0x0caf,	// (0x000102c0) volume_set_pane_vc_g6

0x0cb8,	// (0x000102c9) volume_set_pane_vc_g7

0x0cc1,	// (0x000102d2) volume_set_pane_vc_g8

0x0cca,	// (0x000102db) volume_set_pane_vc_g9

0x0cd3,	// (0x000102e4) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x0001f037) volume_set_pane_vc_g

0x6609,	// (0x00015c1a) volume_set_pane_vc

0x6611,	// (0x00015c22) button_value_adjust_pane_cp1_vc

0x661b,	// (0x00015c2c) list_highlight_pane_cp2_vc

0x6624,	// (0x00015c35) list_set_pane_vc_ParamLimits

0x6624,	// (0x00015c35) list_set_pane_vc

0x668e,	// (0x00015c9f) main_pane_set_vc_t1_ParamLimits

0x668e,	// (0x00015c9f) main_pane_set_vc_t1

0x66a3,	// (0x00015cb4) main_pane_set_vc_t2_ParamLimits

0x66a3,	// (0x00015cb4) main_pane_set_vc_t2

0x66b5,	// (0x00015cc6) main_pane_set_vc_t3_ParamLimits

0x66b5,	// (0x00015cc6) main_pane_set_vc_t3

0x66c9,	// (0x00015cda) main_pane_set_vc_t4_ParamLimits

0x66c9,	// (0x00015cda) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x0001f04c) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x0001f04c) main_pane_set_vc_t

0x66dd,	// (0x00015cee) setting_code_pane_vc_ParamLimits

0x66dd,	// (0x00015cee) setting_code_pane_vc

0x66ee,	// (0x00015cff) setting_slider_graphic_pane_vc

0x66ee,	// (0x00015cff) setting_slider_pane_vc

0x66ee,	// (0x00015cff) setting_text_pane_vc

0x66ee,	// (0x00015cff) setting_volume_pane_vc

0x66f8,	// (0x00015d09) scroll_pane_cp121_vc

0x2a94,	// (0x000120a5) set_content_pane_vc

0x691b,	// (0x00015f2c) button_value_adjust_pane_g1

0x6924,	// (0x00015f35) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0001f09f) button_value_adjust_pane_g

0x692d,	// (0x00015f3e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x692d,	// (0x00015f3e) form_field_slider_wide_pane_vc_t1

0x6941,	// (0x00015f52) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6941,	// (0x00015f52) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x0001f0a4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0001f0a4) form_field_slider_wide_pane_vc_t

0x203a,	// (0x0001164b) input_focus_pane_cp10_vc_ParamLimits

0x203a,	// (0x0001164b) input_focus_pane_cp10_vc

0x6953,	// (0x00015f64) slider_cont_pane_cp1_vc_ParamLimits

0x6953,	// (0x00015f64) slider_cont_pane_cp1_vc

0x659f,	// (0x00015bb0) slider_form_pane_g1_cp2

0x65a8,	// (0x00015bb9) slider_form_pane_g2_cp2

0x696c,	// (0x00015f7d) form_field_slider_pane_vc_t3

0x697a,	// (0x00015f8b) form_field_slider_pane_vc_t4

0x6988,	// (0x00015f99) slider_form_pane_vc_ParamLimits

0x6988,	// (0x00015f99) slider_form_pane_vc

0x6995,	// (0x00015fa6) form_field_slider_pane_vc_t1_ParamLimits

0x6995,	// (0x00015fa6) form_field_slider_pane_vc_t1

0x6941,	// (0x00015f52) form_field_slider_pane_vc_t2_ParamLimits

0x6941,	// (0x00015f52) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x0001f0b4) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x0001f0b4) form_field_slider_pane_vc_t

0x203a,	// (0x0001164b) input_focus_pane_cp9_vc_ParamLimits

0x203a,	// (0x0001164b) input_focus_pane_cp9_vc

0x69b1,	// (0x00015fc2) slider_cont_pane_vc_ParamLimits

0x69b1,	// (0x00015fc2) slider_cont_pane_vc

0x69c3,	// (0x00015fd4) list_form_graphic_pane_cp_vc_ParamLimits

0x69c3,	// (0x00015fd4) list_form_graphic_pane_cp_vc

0x49c9,	// (0x00013fda) form_field_popup_wide_pane_vc_g1

0x69d8,	// (0x00015fe9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x69d8,	// (0x00015fe9) form_field_popup_wide_pane_vc_t1

0x2b8c,	// (0x0001219d) input_focus_pane_cp8_vc_ParamLimits

0x2b8c,	// (0x0001219d) input_focus_pane_cp8_vc

0x69ef,	// (0x00016000) list_form_wide_pane_vc_ParamLimits

0x69ef,	// (0x00016000) list_form_wide_pane_vc

0x69fb,	// (0x0001600c) list_form_graphic_pane_vc_g1

0x6a03,	// (0x00016014) list_form_graphic_pane_vc_t1_ParamLimits

0x6a03,	// (0x00016014) list_form_graphic_pane_vc_t1

0x1da5,	// (0x000113b6) list_highlight_pane_cp5_vc_ParamLimits

0x1da5,	// (0x000113b6) list_highlight_pane_cp5_vc

0x6a1f,	// (0x00016030) list_form_graphic_pane_vc_ParamLimits

0x6a1f,	// (0x00016030) list_form_graphic_pane_vc

0x49c9,	// (0x00013fda) form_field_popup_pane_vc_g1

0x6a35,	// (0x00016046) form_field_popup_pane_vc_t1_ParamLimits

0x6a35,	// (0x00016046) form_field_popup_pane_vc_t1

0x2b8c,	// (0x0001219d) input_focus_pane_cp7_vc_ParamLimits

0x2b8c,	// (0x0001219d) input_focus_pane_cp7_vc

0x6a4c,	// (0x0001605d) list_form_pane_vc_ParamLimits

0x6a4c,	// (0x0001605d) list_form_pane_vc

0x6a58,	// (0x00016069) data_form_pane_vc_t1_ParamLimits

0x6a58,	// (0x00016069) data_form_pane_vc_t1

0x2cc4,	// (0x000122d5) input_focus_pane_vc_g1

0x2ccc,	// (0x000122dd) input_focus_pane_vc_g2

0x2cd4,	// (0x000122e5) input_focus_pane_vc_g3

0x2cdc,	// (0x000122ed) input_focus_pane_vc_g4

0x2ce4,	// (0x000122f5) input_focus_pane_vc_g5

0x2cec,	// (0x000122fd) input_focus_pane_vc_g6

0x2cf4,	// (0x00012305) input_focus_pane_vc_g7

0x2cfc,	// (0x0001230d) input_focus_pane_vc_g8

0x2d04,	// (0x00012315) input_focus_pane_vc_g9

0x1cbb,	// (0x000112cc) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001ecb4) input_focus_pane_vc_g

0x49bd,	// (0x00013fce) data_form_pane_vc_ParamLimits

0x49bd,	// (0x00013fce) data_form_pane_vc

0x49c9,	// (0x00013fda) form_field_data_pane_vc_g1

0x6a73,	// (0x00016084) form_field_data_pane_vc_t1_ParamLimits

0x6a73,	// (0x00016084) form_field_data_pane_vc_t1

0x2b8c,	// (0x0001219d) input_focus_pane_vc_ParamLimits

0x2b8c,	// (0x0001219d) input_focus_pane_vc

0x6a8d,	// (0x0001609e) button_value_adjust_pane_cp3_vc

0x6a95,	// (0x000160a6) button_value_adjust_pane_cp5_vc

0x6a9d,	// (0x000160ae) form_field_data_pane_vc_ParamLimits

0x6a9d,	// (0x000160ae) form_field_data_pane_vc

0x6ab4,	// (0x000160c5) form_field_data_pane_vc_cp2

0x6abc,	// (0x000160cd) form_field_data_wide_pane_vc_ParamLimits

0x6abc,	// (0x000160cd) form_field_data_wide_pane_vc

0x6ad2,	// (0x000160e3) form_field_data_wide_pane_vc_cp2

0x6ada,	// (0x000160eb) form_field_popup_pane_vc_ParamLimits

0x6ada,	// (0x000160eb) form_field_popup_pane_vc

0x6af1,	// (0x00016102) form_field_popup_wide_pane_vc_ParamLimits

0x6af1,	// (0x00016102) form_field_popup_wide_pane_vc

0x6b07,	// (0x00016118) form_field_slider_pane_vc_ParamLimits

0x6b07,	// (0x00016118) form_field_slider_pane_vc

0x6b1a,	// (0x0001612b) form_field_slider_wide_pane_vc_ParamLimits

0x6b1a,	// (0x0001612b) form_field_slider_wide_pane_vc

0xda85,	// (0x0001d096) grid_touch_1_pane_ParamLimits

0xda85,	// (0x0001d096) grid_touch_1_pane

0xda99,	// (0x0001d0aa) grid_touch_2_pane_ParamLimits

0xda99,	// (0x0001d0aa) grid_touch_2_pane

0x6bef,	// (0x00016200) touch_pane_g1_ParamLimits

0x6bef,	// (0x00016200) touch_pane_g1

0x6b51,	// (0x00016162) cell_app_pane_cp_wide_ParamLimits

0x6b51,	// (0x00016162) cell_app_pane_cp_wide

0x6b62,	// (0x00016173) grid_popup_fast_wide_pane_ParamLimits

0x6b62,	// (0x00016173) grid_popup_fast_wide_pane

0x6b76,	// (0x00016187) scroll_pane_cp19_ParamLimits

0x6b76,	// (0x00016187) scroll_pane_cp19

0x1cc5,	// (0x000112d6) bg_popup_window_pane_cp20

0x6b8a,	// (0x0001619b) listscroll_popup_fast_wide_pane

0x2ed6,	// (0x000124e7) grid_indicator_nsta_pane

0x6b92,	// (0x000161a3) clock_nsta_pane_g1

0x6b9b,	// (0x000161ac) clock_nsta_pane_t1

0xdac3,	// (0x0001d0d4) cell_indicator_nsta_pane_ParamLimits

0xdac3,	// (0x0001d0d4) cell_indicator_nsta_pane

0x6bef,	// (0x00016200) cell_indicator_nsta_pane_g1

0xdadc,	// (0x0001d0ed) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x0001f0be) cell_indicator_nsta_pane_g

0x6c13,	// (0x00016224) clock_nsta_pane_cp

0x6c1b,	// (0x0001622c) indicator_nsta_pane_cp

0x6c24,	// (0x00016235) nsta_clock_indic_pane_g1

0x1e88,	// (0x00011499) grid_indicator_pane

0x32a8,	// (0x000128b9) scroll_pane_cp29

0x07ca,	// (0x0000fddb) indicator_nsta_pane_cp2_ParamLimits

0x07ca,	// (0x0000fddb) indicator_nsta_pane_cp2

0x1da5,	// (0x000113b6) main_apps_wheel_pane

0x4bf4,	// (0x00014205) form_midp_field_text_pane_ParamLimits

0x4d3f,	// (0x00014350) scroll_bar_cp050_ParamLimits

0x6c8d,	// (0x0001629e) cell_indicator_pane_ParamLimits

0x6c8d,	// (0x0001629e) cell_indicator_pane

0x6ca4,	// (0x000162b5) cell_indicator_pane_g1

0xdaf2,	// (0x0001d103) grid_wheel_folder_pane_ParamLimits

0xdaf2,	// (0x0001d103) grid_wheel_folder_pane

0xdb00,	// (0x0001d111) list_wheel_apps_pane_ParamLimits

0xdb00,	// (0x0001d111) list_wheel_apps_pane

0xdb0e,	// (0x0001d11f) main_apps_wheel_pane_g1_ParamLimits

0xdb0e,	// (0x0001d11f) main_apps_wheel_pane_g1

0xdb1a,	// (0x0001d12b) main_apps_wheel_pane_g2_ParamLimits

0xdb1a,	// (0x0001d12b) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x0001f0da) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x0001f0da) main_apps_wheel_pane_g

0xdb28,	// (0x0001d139) main_apps_wheel_pane_t1_ParamLimits

0xdb28,	// (0x0001d139) main_apps_wheel_pane_t1

0xdb3c,	// (0x0001d14d) list_wheel_apps_pane_g1

0xdb44,	// (0x0001d155) list_wheel_apps_pane_g2

0xdb4c,	// (0x0001d15d) list_wheel_apps_pane_g3

0xdb54,	// (0x0001d165) list_wheel_apps_pane_g4

0xdb5e,	// (0x0001d16f) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x0001f0df) list_wheel_apps_pane_g

0x385b,	// (0x00012e6c) navi_icon_text_pane

0xd0d9,	// (0x0001c6ea) aid_fill_nsta

0xdb75,	// (0x0001d186) navi_icon_text_pane_g1

0xdb81,	// (0x0001d192) navi_icon_text_pane_t1

0xc926,	// (0x0001bf37) list_set_graphic_pane_t1_ParamLimits

0xc926,	// (0x0001bf37) list_set_graphic_pane_t1

0x548e,	// (0x00014a9f) popup_midp_note_alarm_window_t6_ParamLimits

0x548e,	// (0x00014a9f) popup_midp_note_alarm_window_t6

0x54a0,	// (0x00014ab1) popup_midp_note_alarm_window_t7_ParamLimits

0x54a0,	// (0x00014ab1) popup_midp_note_alarm_window_t7

0x54b2,	// (0x00014ac3) popup_midp_note_alarm_window_t8_ParamLimits

0x54b2,	// (0x00014ac3) popup_midp_note_alarm_window_t8

0x54c4,	// (0x00014ad5) popup_midp_note_alarm_window_t9_ParamLimits

0x54c4,	// (0x00014ad5) popup_midp_note_alarm_window_t9

0x54d6,	// (0x00014ae7) popup_midp_note_alarm_window_t10_ParamLimits

0x54d6,	// (0x00014ae7) popup_midp_note_alarm_window_t10

0x54e8,	// (0x00014af9) popup_midp_note_alarm_window_t11_ParamLimits

0x54e8,	// (0x00014af9) popup_midp_note_alarm_window_t11

0x54fa,	// (0x00014b0b) scroll_pane_cp17_ParamLimits

0x54fa,	// (0x00014b0b) scroll_pane_cp17

0x0c82,	// (0x00010293) volume_small_pane_cp_g1

0x0f77,	// (0x00010588) volume_small_pane_cp_g2

0x0f80,	// (0x00010591) volume_small_pane_cp_g3

0x0f89,	// (0x0001059a) volume_small_pane_cp_g4

0x0f92,	// (0x000105a3) volume_small_pane_cp_g5

0x0f9b,	// (0x000105ac) volume_small_pane_cp_g6

0x0fa4,	// (0x000105b5) volume_small_pane_cp_g7

0x0fad,	// (0x000105be) volume_small_pane_cp_g8

0x0fb6,	// (0x000105c7) volume_small_pane_cp_g9

0x0fbf,	// (0x000105d0) volume_small_pane_cp_g10

0x3ab6,	// (0x000130c7) midp_ticker_pane_g1_ParamLimits

0x3ac2,	// (0x000130d3) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001ed7c) midp_ticker_pane_g_ParamLimits

0xc9e6,	// (0x0001bff7) midp_ticker_pane_t1_ParamLimits

0xd0f9,	// (0x0001c70a) aid_fill_nsta_2

0x4d2b,	// (0x0001433c) list_form2_midp_pane

0x5eca,	// (0x000154db) midp_editing_number_pane_ParamLimits

0x5ed9,	// (0x000154ea) midp_ticker_pane_ParamLimits

0x6d8b,	// (0x0001639c) form2_midp_field_pane

0x6daf,	// (0x000163c0) scroll_pane_cp51

0x6dcf,	// (0x000163e0) form2_midp_button_pane_ParamLimits

0x6dcf,	// (0x000163e0) form2_midp_button_pane

0x6de1,	// (0x000163f2) form2_midp_content_pane_ParamLimits

0x6de1,	// (0x000163f2) form2_midp_content_pane

0x6dfb,	// (0x0001640c) form2_midp_field_choice_group_pane

0x6e03,	// (0x00016414) form2_midp_field_pane_g1

0x6e0b,	// (0x0001641c) form2_midp_field_pane_g2

0x6e13,	// (0x00016424) form2_midp_field_pane_g3

0x6e1b,	// (0x0001642c) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x0001f104) form2_midp_field_pane_g

0x6e23,	// (0x00016434) form2_midp_gauge_slider_pane

0x6e2b,	// (0x0001643c) form2_midp_gauge_wait_pane

0x6e33,	// (0x00016444) form2_midp_image_pane_ParamLimits

0x6e33,	// (0x00016444) form2_midp_image_pane

0x6e4e,	// (0x0001645f) form2_midp_label_pane_ParamLimits

0x6e4e,	// (0x0001645f) form2_midp_label_pane

0xdbaf,	// (0x0001d1c0) form2_midp_label_pane_cp_ParamLimits

0xdbaf,	// (0x0001d1c0) form2_midp_label_pane_cp

0x6e88,	// (0x00016499) form2_midp_string_pane_ParamLimits

0x6e88,	// (0x00016499) form2_midp_string_pane

0xdbd0,	// (0x0001d1e1) form2_midp_text_pane_ParamLimits

0xdbd0,	// (0x0001d1e1) form2_midp_text_pane

0x6eb7,	// (0x000164c8) form2_midp_time_pane

0x6ec7,	// (0x000164d8) input_focus_pane_cp51_ParamLimits

0x6ec7,	// (0x000164d8) input_focus_pane_cp51

0x6edf,	// (0x000164f0) form2_midp_label_pane_t1_ParamLimits

0x6edf,	// (0x000164f0) form2_midp_label_pane_t1

0xdbed,	// (0x0001d1fe) form2_mdip_text_pane_t1_ParamLimits

0xdbed,	// (0x0001d1fe) form2_mdip_text_pane_t1

0x6f3f,	// (0x00016550) form2_midp_time_pane_t1

0x6f5a,	// (0x0001656b) form2_midp_gauge_slider_pane_t1

0xdc09,	// (0x0001d21a) form2_midp_gauge_slider_pane_t2

0xdc1b,	// (0x0001d22c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x0001f10d) form2_midp_gauge_slider_pane_t

0x6f90,	// (0x000165a1) form2_midp_slider_pane

0x6f9c,	// (0x000165ad) form2_midp_gauge_wait_pane_t1

0x6faa,	// (0x000165bb) form2_midp_wait_pane_ParamLimits

0x6faa,	// (0x000165bb) form2_midp_wait_pane

0xdc2d,	// (0x0001d23e) list_single_2graphic_pane_cp4_ParamLimits

0xdc2d,	// (0x0001d23e) list_single_2graphic_pane_cp4

0xd50a,	// (0x0001cb1b) list_single_midp_graphic_pane_cp_ParamLimits

0xd50a,	// (0x0001cb1b) list_single_midp_graphic_pane_cp

0x1cc5,	// (0x000112d6) list_highlight_pane_cp20

0x7004,	// (0x00016615) list_single_2graphic_pane_g1_cp4

0x700c,	// (0x0001661d) list_single_2graphic_pane_g2_cp4

0x7014,	// (0x00016625) list_single_2graphic_pane_t1_cp4

0x1da5,	// (0x000113b6) list_highlight_pane_cp21

0x7023,	// (0x00016634) list_single_midp_graphic_pane_g4_cp

0x7032,	// (0x00016643) list_single_midp_graphic_pane_t1_cp

0xdc42,	// (0x0001d253) form2_mdip_string_pane_t1_ParamLimits

0xdc42,	// (0x0001d253) form2_mdip_string_pane_t1

0x1cc5,	// (0x000112d6) bg_wml_button_pane_cp2

0x1cbb,	// (0x000112cc) form2_midp_image_pane_g1

0x286e,	// (0x00011e7f) list_double_large_graphic_pane_g5_ParamLimits

0x286e,	// (0x00011e7f) list_double_large_graphic_pane_g5

0xc93e,	// (0x0001bf4f) midp_form_pane_ParamLimits

0x1da5,	// (0x000113b6) main_apps_wheel_pane_ParamLimits

0xce35,	// (0x0001c446) popup_preview_window_ParamLimits

0xce35,	// (0x0001c446) popup_preview_window

0x42c9,	// (0x000138da) popup_touch_info_window_ParamLimits

0x42c9,	// (0x000138da) popup_touch_info_window

0x42e7,	// (0x000138f8) popup_touch_menu_window_ParamLimits

0x42e7,	// (0x000138f8) popup_touch_menu_window

0x1cb1,	// (0x000112c2) bg_popup_sub_pane_cp6

0x7140,	// (0x00016751) list_touch_menu_pane

0x7148,	// (0x00016759) list_single_touch_menu_pane_ParamLimits

0x7148,	// (0x00016759) list_single_touch_menu_pane

0x715f,	// (0x00016770) list_single_touch_menu_pane_t1

0x1da5,	// (0x000113b6) bg_popup_sub_pane_cp7_ParamLimits

0x1da5,	// (0x000113b6) bg_popup_sub_pane_cp7

0x716d,	// (0x0001677e) heading_sub_pane

0x7175,	// (0x00016786) list_touch_info_pane_ParamLimits

0x7175,	// (0x00016786) list_touch_info_pane

0x7184,	// (0x00016795) list_single_touch_info_pane_ParamLimits

0x7184,	// (0x00016795) list_single_touch_info_pane

0x7196,	// (0x000167a7) list_single_touch_info_pane_t1

0x71a4,	// (0x000167b5) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x0001f11b) list_single_touch_info_pane_t

0x39db,	// (0x00012fec) bg_popup_heading_pane_cp

0x71b2,	// (0x000167c3) heading_sub_pane_t1

0x4957,	// (0x00013f68) bg_popup_preview_window_pane_cp_ParamLimits

0x4957,	// (0x00013f68) bg_popup_preview_window_pane_cp

0x716d,	// (0x0001677e) heading_preview_pane

0x7175,	// (0x00016786) list_preview_pane_ParamLimits

0x7175,	// (0x00016786) list_preview_pane

0x71c0,	// (0x000167d1) popup_preview_window_g1

0x7184,	// (0x00016795) list_single_preview_pane_ParamLimits

0x7184,	// (0x00016795) list_single_preview_pane

0x71c8,	// (0x000167d9) list_single_preview_pane_g1

0x71d0,	// (0x000167e1) list_single_preview_pane_t1

0x7196,	// (0x000167a7) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x0001f120) list_single_preview_pane_t

0x71de,	// (0x000167ef) bg_popup_heading_pane_cp2_ParamLimits

0x71de,	// (0x000167ef) bg_popup_heading_pane_cp2

0x71f4,	// (0x00016805) heading_preview_pane_g1

0x71fc,	// (0x0001680d) heading_preview_pane_t1_ParamLimits

0x71fc,	// (0x0001680d) heading_preview_pane_t1

0x1eab,	// (0x000114bc) soft_indicator_pane_t1_ParamLimits

0x259e,	// (0x00011baf) scroll_pane_ParamLimits

0x31a1,	// (0x000127b2) scroll_sc2_left_pane

0x31aa,	// (0x000127bb) scroll_sc2_right_pane

0x31c9,	// (0x000127da) scroll_bg_pane_g1_ParamLimits

0x31de,	// (0x000127ef) scroll_bg_pane_g2_ParamLimits

0x31f6,	// (0x00012807) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0001ed0b) scroll_bg_pane_g_ParamLimits

0x31c9,	// (0x000127da) scroll_handle_pane_g1_ParamLimits

0x3218,	// (0x00012829) scroll_handle_pane_g2_ParamLimits

0x31f6,	// (0x00012807) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0001ed12) scroll_handle_pane_g_ParamLimits

0x3d95,	// (0x000133a6) popup_choice_list_window_ParamLimits

0x3d95,	// (0x000133a6) popup_choice_list_window

0x474d,	// (0x00013d5e) choice_list_pane

0x4809,	// (0x00013e1a) cell_toolbar_pane_t1

0x4831,	// (0x00013e42) toolbar_button_pane_ParamLimits

0x59ba,	// (0x00014fcb) ai_gene_pane_1_t2_ParamLimits

0x59ba,	// (0x00014fcb) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0001ef2a) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0001ef2a) ai_gene_pane_1_t

0x7219,	// (0x0001682a) scroll_sc2_left_pane_g1

0x7219,	// (0x0001682a) scroll_sc2_right_pane_g1

0x3d65,	// (0x00013376) bg_popup_sub_pane_cp10

0x7223,	// (0x00016834) list_choice_list_pane

0x723a,	// (0x0001684b) list_single_choice_list_pane_ParamLimits

0x723a,	// (0x0001684b) list_single_choice_list_pane

0x724e,	// (0x0001685f) list_single_choice_list_pane_g1

0x7256,	// (0x00016867) list_single_choice_list_pane_t1_ParamLimits

0x7256,	// (0x00016867) list_single_choice_list_pane_t1

0x726b,	// (0x0001687c) choice_list_pane_g1

0x7273,	// (0x00016884) choice_list_pane_t1

0x1cb1,	// (0x000112c2) input_focus_pane_cp11

0x307e,	// (0x0001268f) title_pane_stacon_g2_ParamLimits

0x307e,	// (0x0001268f) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0001ecf1) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0001ecf1) title_pane_stacon_g

0x39db,	// (0x00012fec) cursor_press_pane

0xcb00,	// (0x0001c111) popup_fep_hwr_window_ParamLimits

0xcb00,	// (0x0001c111) popup_fep_hwr_window

0x3eb7,	// (0x000134c8) popup_fep_vkb_window_ParamLimits

0x3eb7,	// (0x000134c8) popup_fep_vkb_window

0x7281,	// (0x00016892) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x0001f149) fep_vkb_side_pane_g_ParamLimits

0x1001,	// (0x00010612) fep_hwr_candidate_pane_ParamLimits

0x1001,	// (0x00010612) fep_hwr_candidate_pane

0x102b,	// (0x0001063c) fep_hwr_side_pane_ParamLimits

0x102b,	// (0x0001063c) fep_hwr_side_pane

0x104b,	// (0x0001065c) fep_hwr_top_pane_ParamLimits

0x104b,	// (0x0001065c) fep_hwr_top_pane

0x1063,	// (0x00010674) fep_hwr_write_pane_ParamLimits

0x1063,	// (0x00010674) fep_hwr_write_pane

0xfb38,	// (0x0001f149) fep_vkb_side_pane_g

0x729b,	// (0x000168ac) fep_hwr_top_pane_g1

0x7289,	// (0x0001689a) fep_hwr_top_pane_g2

0x109d,	// (0x000106ae) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x0001f125) fep_hwr_top_pane_g

0x10b2,	// (0x000106c3) fep_hwr_top_text_pane

0x336f,	// (0x00012980) fep_hwr_top_text_pane_g1

0x72d1,	// (0x000168e2) fep_hwr_top_text_pane_t1

0x11a8,	// (0x000107b9) fep_hwr_candidate_pane_g1

0x7524,	// (0x00016b35) fep_vkb_keypad_pane_g3_ParamLimits

0x7524,	// (0x00016b35) fep_vkb_keypad_pane_g3

0x754c,	// (0x00016b5d) fep_vkb_keypad_pane_g4_ParamLimits

0x754c,	// (0x00016b5d) fep_vkb_keypad_pane_g4

0x75bb,	// (0x00016bcc) fep_vkb_bottom_pane_g2_ParamLimits

0x75bb,	// (0x00016bcc) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x0001f150) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x0001f150) fep_vkb_bottom_pane_g

0x7219,	// (0x0001682a) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x0001f15a) cell_vkb_side_pane_g

0x7646,	// (0x00016c57) cell_vkb_side_pane_t1

0x7654,	// (0x00016c65) cell_vkb_side_pane_t1_copy1

0x7219,	// (0x0001682a) bg_fep_vkb_candidate_pane_g2

0x7780,	// (0x00016d91) cell_vkb_candidate_pane_ParamLimits

0x72df,	// (0x000168f0) aid_size_cell_vkb_ParamLimits

0x72df,	// (0x000168f0) aid_size_cell_vkb

0x7780,	// (0x00016d91) cell_vkb_candidate_pane

0x11cf,	// (0x000107e0) bg_popup_fep_shadow_pane_g1

0xdcd0,	// (0x0001d2e1) fep_vkb_bottom_pane_ParamLimits

0xdcd0,	// (0x0001d2e1) fep_vkb_bottom_pane

0x73a3,	// (0x000169b4) fep_vkb_candidate_pane_ParamLimits

0x73a3,	// (0x000169b4) fep_vkb_candidate_pane

0xdcf5,	// (0x0001d306) fep_vkb_keypad_pane_ParamLimits

0xdcf5,	// (0x0001d306) fep_vkb_keypad_pane

0xdd31,	// (0x0001d342) fep_vkb_side_pane_ParamLimits

0xdd31,	// (0x0001d342) fep_vkb_side_pane

0xdd6d,	// (0x0001d37e) fep_vkb_top_pane_ParamLimits

0xdd6d,	// (0x0001d37e) fep_vkb_top_pane

0x747d,	// (0x00016a8e) fep_vkb_top_pane_g1_ParamLimits

0x747d,	// (0x00016a8e) fep_vkb_top_pane_g1

0x748c,	// (0x00016a9d) fep_vkb_top_pane_g2_ParamLimits

0x748c,	// (0x00016a9d) fep_vkb_top_pane_g2

0x749b,	// (0x00016aac) fep_vkb_top_pane_g3_ParamLimits

0x749b,	// (0x00016aac) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x0001f140) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x0001f140) fep_vkb_top_pane_g

0x74b9,	// (0x00016aca) fep_vkb_top_text_pane_ParamLimits

0x74b9,	// (0x00016aca) fep_vkb_top_text_pane

0xdda9,	// (0x0001d3ba) fep_vkb_side_pane_g1_ParamLimits

0xdda9,	// (0x0001d3ba) fep_vkb_side_pane_g1

0x7513,	// (0x00016b24) grid_vkb_side_pane_ParamLimits

0x7513,	// (0x00016b24) grid_vkb_side_pane

0x11d7,	// (0x000107e8) bg_popup_fep_shadow_pane_g2

0x11e0,	// (0x000107f1) bg_popup_fep_shadow_pane_g3

0x11e8,	// (0x000107f9) bg_popup_fep_shadow_pane_g4

0x11f1,	// (0x00010802) bg_popup_fep_shadow_pane_g5

0x11fb,	// (0x0001080c) bg_popup_fep_shadow_pane_g6

0x1203,	// (0x00010814) bg_popup_fep_shadow_pane_g7

0x2cdc,	// (0x000122ed) bg_popup_fep_shadow_pane_g8

0x756a,	// (0x00016b7b) grid_vkb_keypad_number_pane_ParamLimits

0x756a,	// (0x00016b7b) grid_vkb_keypad_number_pane

0x757a,	// (0x00016b8b) grid_vkb_keypad_pane_ParamLimits

0x757a,	// (0x00016b8b) grid_vkb_keypad_pane

0x75a0,	// (0x00016bb1) fep_vkb_bottom_pane_g1_ParamLimits

0x75a0,	// (0x00016bb1) fep_vkb_bottom_pane_g1

0x75c9,	// (0x00016bda) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x75c9,	// (0x00016bda) grid_vkb_keypad_bottom_left_pane

0x75de,	// (0x00016bef) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x75de,	// (0x00016bef) grid_vkb_keypad_bottom_right_pane

0x75f3,	// (0x00016c04) fep_vkb_top_text_pane_g1

0xddf0,	// (0x0001d401) fep_vkb_top_text_pane_t1

0xde02,	// (0x0001d413) cell_vkb_side_pane_ParamLimits

0xde02,	// (0x0001d413) cell_vkb_side_pane

0x7219,	// (0x0001682a) cell_vkb_side_pane_g1

0x7662,	// (0x00016c73) cell_vkb_keypad_pane_ParamLimits

0x7662,	// (0x00016c73) cell_vkb_keypad_pane

0x76d7,	// (0x00016ce8) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x0001f16d) bg_popup_fep_shadow_pane_g

0x1215,	// (0x00010826) cell_hwr_side_pane_g1

0x1215,	// (0x00010826) cell_hwr_side_pane_g2

0x76e1,	// (0x00016cf2) cell_vkb_keypad_pane_t1

0xde18,	// (0x0001d429) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xde18,	// (0x0001d429) cell_vkb_keypad_bottom_left_pane

0xde2d,	// (0x0001d43e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xde2d,	// (0x0001d43e) cell_vkb_keypad_bottom_right_pane

0x7219,	// (0x0001682a) cell_vkb_keypad_bottom_left_pane_g1

0x7219,	// (0x0001682a) cell_vkb_keypad_bottom_right_pane_g1

0x7745,	// (0x00016d56) cell_vkb_keypad_number_pane_ParamLimits

0x7745,	// (0x00016d56) cell_vkb_keypad_number_pane

0x7764,	// (0x00016d75) cell_vkb_keypad_number_pane_g1

0x776e,	// (0x00016d7f) cell_vkb_keypad_number_pane_g2

0x7777,	// (0x00016d88) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x0001f15f) cell_vkb_keypad_number_pane_g

0x76e1,	// (0x00016cf2) cell_vkb_keypad_number_pane_t1

0x779b,	// (0x00016dac) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x0001f180) cell_hwr_side_pane_g

0x77b4,	// (0x00016dc5) cell_hwr_side_pane_t1

0x121f,	// (0x00010830) cell_hwr_side_pane_t1_copy1

0x122d,	// (0x0001083e) cell_hwr_candidate_pane_g1

0x125c,	// (0x0001086d) cell_hwr_candidate_pane_t1

0x7219,	// (0x0001682a) cell_vkb_candidate_pane_g2

0x77f8,	// (0x00016e09) cell_vkb_candidate_pane_t1

0x0fc8,	// (0x000105d9) bg_popup_fep_shadow_pane_ParamLimits

0x0fc8,	// (0x000105d9) bg_popup_fep_shadow_pane

0x107d,	// (0x0001068e) bg_fep_hwr_top_pane_g4

0x72ad,	// (0x000168be) bg_hwr_side_pane_g1_ParamLimits

0x72ad,	// (0x000168be) bg_hwr_side_pane_g1

0xb897,	// (0x0001aea8) cell_hwr_side_pane_ParamLimits

0xb897,	// (0x0001aea8) cell_hwr_side_pane

0x1129,	// (0x0001073a) fep_hwr_write_pane_g1_ParamLimits

0x1129,	// (0x0001073a) fep_hwr_write_pane_g1

0x1136,	// (0x00010747) fep_hwr_write_pane_g2_ParamLimits

0x1136,	// (0x00010747) fep_hwr_write_pane_g2

0x1143,	// (0x00010754) fep_hwr_write_pane_g3_ParamLimits

0x1143,	// (0x00010754) fep_hwr_write_pane_g3

0xb8b7,	// (0x0001aec8) fep_hwr_write_pane_g4_ParamLimits

0xb8b7,	// (0x0001aec8) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x0001f12c) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x0001f12c) fep_hwr_write_pane_g

0x107d,	// (0x0001068e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x107d,	// (0x0001068e) bg_fep_hwr_candidate_pane_g2

0x1166,	// (0x00010777) cell_hwr_candidate_pane_ParamLimits

0x1166,	// (0x00010777) cell_hwr_candidate_pane

0x11a8,	// (0x000107b9) fep_hwr_candidate_pane_g1_ParamLimits

0x730d,	// (0x0001691e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x730d,	// (0x0001691e) bg_popup_fep_shadow_pane_cp2

0x74ab,	// (0x00016abc) fep_vkb_top_pane_g4_ParamLimits

0x74ab,	// (0x00016abc) fep_vkb_top_pane_g4

0x74f1,	// (0x00016b02) fep_vkb_side_pane_g2_ParamLimits

0x74f1,	// (0x00016b02) fep_vkb_side_pane_g2

0xc415,	// (0x0001ba26) list_setting_pane_t4_ParamLimits

0xc415,	// (0x0001ba26) list_setting_pane_t4

0xc48f,	// (0x0001baa0) list_setting_number_pane_t5_ParamLimits

0xc48f,	// (0x0001baa0) list_setting_number_pane_t5

0xc7cb,	// (0x0001bddc) list_double_heading_pane_cp2_ParamLimits

0xc7cb,	// (0x0001bddc) list_double_heading_pane_cp2

0x2bb2,	// (0x000121c3) list_double_heading_pane_g1_cp2_ParamLimits

0x2bb2,	// (0x000121c3) list_double_heading_pane_g1_cp2

0x2bbe,	// (0x000121cf) list_double_heading_pane_g2_cp2_ParamLimits

0x2bbe,	// (0x000121cf) list_double_heading_pane_g2_cp2

0x7806,	// (0x00016e17) list_double_heading_pane_t1_cp2_ParamLimits

0x7806,	// (0x00016e17) list_double_heading_pane_t1_cp2

0x781c,	// (0x00016e2d) list_double_heading_pane_t2_cp2_ParamLimits

0x781c,	// (0x00016e2d) list_double_heading_pane_t2_cp2

0x1c99,	// (0x000112aa) aid_value_unit2

0x0362,	// (0x0000f973) popup_preview_fixed_window

0x2048,	// (0x00011659) bg_popup_preview_window_pane_cp02

0x782e,	// (0x00016e3f) list_preview_fixed_pane

0x7874,	// (0x00016e85) list_empty_pane_fp_ParamLimits

0x7874,	// (0x00016e85) list_empty_pane_fp

0x7874,	// (0x00016e85) list_single_cale_day_pane_fp_ParamLimits

0x7874,	// (0x00016e85) list_single_cale_day_pane_fp

0x7874,	// (0x00016e85) list_single_graphic_heading_pane_fp_ParamLimits

0x7874,	// (0x00016e85) list_single_graphic_heading_pane_fp

0x7874,	// (0x00016e85) list_single_graphic_pane_fp_ParamLimits

0x7874,	// (0x00016e85) list_single_graphic_pane_fp

0x7874,	// (0x00016e85) list_single_heading_pane_fp_ParamLimits

0x7874,	// (0x00016e85) list_single_heading_pane_fp

0x7874,	// (0x00016e85) list_single_pane_fp_ParamLimits

0x7874,	// (0x00016e85) list_single_pane_fp

0x7889,	// (0x00016e9a) list_single_pane_fp_g1_ParamLimits

0x7889,	// (0x00016e9a) list_single_pane_fp_g1

0x27ef,	// (0x00011e00) list_single_pane_fp_g2_ParamLimits

0x27ef,	// (0x00011e00) list_single_pane_fp_g2

0x7895,	// (0x00016ea6) list_single_pane_fp_g3_ParamLimits

0x7895,	// (0x00016ea6) list_single_pane_fp_g3

0x78a9,	// (0x00016eba) list_single_pane_fp_g4_ParamLimits

0x78a9,	// (0x00016eba) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x0001f193) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x0001f193) list_single_pane_fp_g

0x78b5,	// (0x00016ec6) list_single_pane_fp_t1_ParamLimits

0x78b5,	// (0x00016ec6) list_single_pane_fp_t1

0x78cc,	// (0x00016edd) list_single_graphic_pane_fp_g1_ParamLimits

0x78cc,	// (0x00016edd) list_single_graphic_pane_fp_g1

0x7889,	// (0x00016e9a) list_single_graphic_pane_fp_g2_ParamLimits

0x7889,	// (0x00016e9a) list_single_graphic_pane_fp_g2

0x27ef,	// (0x00011e00) list_single_graphic_pane_fp_g3_ParamLimits

0x27ef,	// (0x00011e00) list_single_graphic_pane_fp_g3

0x7895,	// (0x00016ea6) list_single_graphic_pane_fp_g4_ParamLimits

0x7895,	// (0x00016ea6) list_single_graphic_pane_fp_g4

0x78a9,	// (0x00016eba) list_single_graphic_pane_fp_g5_ParamLimits

0x78a9,	// (0x00016eba) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x0001f19c) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x0001f19c) list_single_graphic_pane_fp_g

0x78d8,	// (0x00016ee9) list_single_graphic_pane_fp_t1_ParamLimits

0x78d8,	// (0x00016ee9) list_single_graphic_pane_fp_t1

0x78cc,	// (0x00016edd) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x78cc,	// (0x00016edd) list_single_graphic_heading_pane_fp_g1

0x7889,	// (0x00016e9a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7889,	// (0x00016e9a) list_single_graphic_heading_pane_fp_g2

0x27ef,	// (0x00011e00) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x27ef,	// (0x00011e00) list_single_graphic_heading_pane_fp_g3

0x7895,	// (0x00016ea6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7895,	// (0x00016ea6) list_single_graphic_heading_pane_fp_g4

0x78a9,	// (0x00016eba) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x78a9,	// (0x00016eba) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0001f19c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0001f19c) list_single_graphic_heading_pane_fp_g

0x78ee,	// (0x00016eff) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x78ee,	// (0x00016eff) list_single_graphic_heading_pane_fp_t1

0x7904,	// (0x00016f15) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7904,	// (0x00016f15) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x0001f1a7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x0001f1a7) list_single_graphic_heading_pane_fp_t

0x7916,	// (0x00016f27) list_single_cale_day_pane_fp_g1_ParamLimits

0x7916,	// (0x00016f27) list_single_cale_day_pane_fp_g1

0x794e,	// (0x00016f5f) list_single_cale_day_pane_fp_g2_ParamLimits

0x794e,	// (0x00016f5f) list_single_cale_day_pane_fp_g2

0x795a,	// (0x00016f6b) list_single_cale_day_pane_fp_g3_ParamLimits

0x795a,	// (0x00016f6b) list_single_cale_day_pane_fp_g3

0x7982,	// (0x00016f93) list_single_cale_day_pane_fp_g4_ParamLimits

0x7982,	// (0x00016f93) list_single_cale_day_pane_fp_g4

0x79a6,	// (0x00016fb7) list_single_cale_day_pane_fp_g5_ParamLimits

0x79a6,	// (0x00016fb7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x0001f1ac) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x0001f1ac) list_single_cale_day_pane_fp_g

0x79ca,	// (0x00016fdb) list_single_cale_day_pane_fp_t1_ParamLimits

0x79ca,	// (0x00016fdb) list_single_cale_day_pane_fp_t1

0x79f0,	// (0x00017001) list_single_cale_day_pane_fp_t2_ParamLimits

0x79f0,	// (0x00017001) list_single_cale_day_pane_fp_t2

0x7a09,	// (0x0001701a) list_single_cale_day_pane_fp_t3_ParamLimits

0x7a09,	// (0x0001701a) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x0001f1b7) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x0001f1b7) list_single_cale_day_pane_fp_t

0x7889,	// (0x00016e9a) list_empty_pane_fp_g1_ParamLimits

0x7889,	// (0x00016e9a) list_empty_pane_fp_g1

0x7a22,	// (0x00017033) list_empty_pane_fp_t1

0x7a30,	// (0x00017041) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x0001f1be) list_empty_pane_fp_t

0x7889,	// (0x00016e9a) list_single_heading_pane_fp_g1_ParamLimits

0x7889,	// (0x00016e9a) list_single_heading_pane_fp_g1

0x27ef,	// (0x00011e00) list_single_heading_pane_fp_g2_ParamLimits

0x27ef,	// (0x00011e00) list_single_heading_pane_fp_g2

0x7895,	// (0x00016ea6) list_single_heading_pane_fp_g3_ParamLimits

0x7895,	// (0x00016ea6) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x0001f1c3) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x0001f1c3) list_single_heading_pane_fp_g

0x7a3e,	// (0x0001704f) list_single_heading_pane_fp_t1_ParamLimits

0x7a3e,	// (0x0001704f) list_single_heading_pane_fp_t1

0x7a50,	// (0x00017061) list_single_heading_pane_fp_t2_ParamLimits

0x7a50,	// (0x00017061) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x0001f1ca) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x0001f1ca) list_single_heading_pane_fp_t

0x2f15,	// (0x00012526) aid_size_cell_fast

0x1fb8,	// (0x000115c9) soft_indicator_pane_cp1_t1

0x2f52,	// (0x00012563) cell_app_pane_cp2_ParamLimits

0x2f52,	// (0x00012563) cell_app_pane_cp2

0x0fea,	// (0x000105fb) fep_hwr_candidate_drop_down_list_pane

0x11c2,	// (0x000107d3) fep_hwr_candidate_pane_g3_ParamLimits

0x11c2,	// (0x000107d3) fep_hwr_candidate_pane_g3

0xea7c,	// (0x0001e08d) fep_hwr_candidate_pane_g4_ParamLimits

0xea7c,	// (0x0001e08d) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x0001f139) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x0001f139) fep_hwr_candidate_pane_g

0x7392,	// (0x000169a3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7392,	// (0x000169a3) fep_vkb_candidate_drop_down_list_pane

0x77a3,	// (0x00016db4) fep_vkb_candidate_pane_g3

0x77ab,	// (0x00016dbc) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x0001f166) fep_vkb_candidate_pane_g

0x122d,	// (0x0001083e) cell_hwr_candidate_pane_g1_ParamLimits

0x123b,	// (0x0001084c) cell_hwr_candidate_pane_g3_ParamLimits

0x123b,	// (0x0001084c) cell_hwr_candidate_pane_g3

0x9625,	// (0x00018c36) cell_hwr_candidate_pane_g4_ParamLimits

0x9625,	// (0x00018c36) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x0001f185) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x0001f185) cell_hwr_candidate_pane_g

0x77c2,	// (0x00016dd3) cell_vkb_candidate_pane_g3_ParamLimits

0x77c2,	// (0x00016dd3) cell_vkb_candidate_pane_g3

0x77dd,	// (0x00016dee) cell_vkb_candidate_pane_g4_ParamLimits

0x77dd,	// (0x00016dee) cell_vkb_candidate_pane_g4

0x7a66,	// (0x00017077) cell_app_pane_cp2_g1_ParamLimits

0x7a66,	// (0x00017077) cell_app_pane_cp2_g1

0x7a84,	// (0x00017095) cell_app_pane_cp2_g2_ParamLimits

0x7a84,	// (0x00017095) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x0001f1cf) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x0001f1cf) cell_app_pane_cp2_g

0x7a90,	// (0x000170a1) cell_app_pane_cp2_t1_ParamLimits

0x7a90,	// (0x000170a1) cell_app_pane_cp2_t1

0x2b8c,	// (0x0001219d) grid_highlight_pane_cp1_ParamLimits

0x2b8c,	// (0x0001219d) grid_highlight_pane_cp1

0x127a,	// (0x0001088b) cell_hwr_candidate_pane_cp1_ParamLimits

0x127a,	// (0x0001088b) cell_hwr_candidate_pane_cp1

0x122d,	// (0x0001083e) fep_hwr_candidate_drop_down_list_pane_g1

0x1299,	// (0x000108aa) fep_hwr_candidate_drop_down_list_pane_g2

0x12a6,	// (0x000108b7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0001f1d4) fep_hwr_candidate_drop_down_list_pane_g

0x12b3,	// (0x000108c4) fep_hwr_candidate_drop_down_list_scroll_pane

0x12bc,	// (0x000108cd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x12bc,	// (0x000108cd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x12c9,	// (0x000108da) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x12c9,	// (0x000108da) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x12d6,	// (0x000108e7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x12d6,	// (0x000108e7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x12e3,	// (0x000108f4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x12e3,	// (0x000108f4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x12fe,	// (0x0001090f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x12fe,	// (0x0001090f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1319,	// (0x0001092a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1319,	// (0x0001092a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1334,	// (0x00010945) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1334,	// (0x00010945) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x134f,	// (0x00010960) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x134f,	// (0x00010960) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0001f1db) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0001f1db) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7aa2,	// (0x000170b3) cell_vkb_candidate_pane_cp1_ParamLimits

0x7aa2,	// (0x000170b3) cell_vkb_candidate_pane_cp1

0x74ab,	// (0x00016abc) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x74ab,	// (0x00016abc) fep_vkb_candidate_drop_down_list_pane_g1

0x7ac2,	// (0x000170d3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ac2,	// (0x000170d3) fep_vkb_candidate_drop_down_list_pane_g2

0x7acf,	// (0x000170e0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7acf,	// (0x000170e0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x0001f1ec) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x0001f1ec) fep_vkb_candidate_drop_down_list_pane_g

0x7adc,	// (0x000170ed) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7adc,	// (0x000170ed) fep_vkb_candidate_drop_down_list_scroll_pane

0x7ae9,	// (0x000170fa) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ae9,	// (0x000170fa) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7af6,	// (0x00017107) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7af6,	// (0x00017107) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7b02,	// (0x00017113) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7b02,	// (0x00017113) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7b0e,	// (0x0001711f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7b0e,	// (0x0001711f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7b2f,	// (0x00017140) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b2f,	// (0x00017140) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7b50,	// (0x00017161) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7b50,	// (0x00017161) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7b71,	// (0x00017182) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b71,	// (0x00017182) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7b92,	// (0x000171a3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b92,	// (0x000171a3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x0001f1f3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x0001f1f3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbd27,	// (0x0001b338) title_pane_g1_ParamLimits

0xbd38,	// (0x0001b349) title_pane_g2_ParamLimits

0xf56a,	// (0x0001eb7b) title_pane_g_ParamLimits

0x335f,	// (0x00012970) aid_call2_pane

0x3367,	// (0x00012978) aid_call_pane

0x336f,	// (0x00012980) popup_clock_analogue_window_g1

0x336f,	// (0x00012980) popup_clock_analogue_window_g2

0x06cb,	// (0x0000fcdc) popup_clock_analogue_window_g3

0x06d4,	// (0x0000fce5) popup_clock_analogue_window_g4

0x1cbb,	// (0x000112cc) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0001ed20) popup_clock_analogue_window_g

0x06dc,	// (0x0000fced) popup_clock_analogue_window_t1

0x06ea,	// (0x0000fcfb) clock_digital_number_pane_ParamLimits

0x06ea,	// (0x0000fcfb) clock_digital_number_pane

0x06f6,	// (0x0000fd07) clock_digital_number_pane_cp02_ParamLimits

0x06f6,	// (0x0000fd07) clock_digital_number_pane_cp02

0x0702,	// (0x0000fd13) clock_digital_number_pane_cp03_ParamLimits

0x0702,	// (0x0000fd13) clock_digital_number_pane_cp03

0x070e,	// (0x0000fd1f) clock_digital_number_pane_cp04_ParamLimits

0x070e,	// (0x0000fd1f) clock_digital_number_pane_cp04

0x071a,	// (0x0000fd2b) clock_digital_separator_pane_ParamLimits

0x071a,	// (0x0000fd2b) clock_digital_separator_pane

0x0726,	// (0x0000fd37) popup_clock_digital_window_t1_ParamLimits

0x0726,	// (0x0000fd37) popup_clock_digital_window_t1

0x1cbb,	// (0x000112cc) clock_digital_number_pane_g1

0x1cbb,	// (0x000112cc) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001ed2b) clock_digital_number_pane_g

0x1cbb,	// (0x000112cc) clock_digital_separator_pane_g1

0x1cbb,	// (0x000112cc) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001ed2b) clock_digital_separator_pane_g

0xd0d9,	// (0x0001c6ea) aid_fill_nsta_ParamLimits

0xd208,	// (0x0001c819) indicator_nsta_pane_ParamLimits

0x45da,	// (0x00013beb) popup_clock_analogue_window

0x45da,	// (0x00013beb) popup_clock_digital_window

0x2ed6,	// (0x000124e7) grid_indicator_nsta_pane_ParamLimits

0x6ba9,	// (0x000161ba) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x0001f0b9) clock_nsta_pane_t

0x068f,	// (0x0000fca0) aid_size_max_handle

0xb558,	// (0x0001ab69) aid_size_min_handle

0x39db,	// (0x00012fec) editor_scroll_pane

0x7bad,	// (0x000171be) ex_editor_pane

0x2e83,	// (0x00012494) scroll_pane_cp13

0x25ca,	// (0x00011bdb) scroll_pane_cp14

0x3399,	// (0x000129aa) scroll_pane_cp36

0xc7da,	// (0x0001bdeb) list_single_graphic_hl_pane_cp2_ParamLimits

0xc7da,	// (0x0001bdeb) list_single_graphic_hl_pane_cp2

0xd922,	// (0x0001cf33) list_single_graphic_hl_pane_ParamLimits

0xd922,	// (0x0001cf33) list_single_graphic_hl_pane

0x7bb5,	// (0x000171c6) aid_size_min_hl_cp1

0x7bbe,	// (0x000171cf) list_highlight_pane_cp34_ParamLimits

0x7bbe,	// (0x000171cf) list_highlight_pane_cp34

0x7bcf,	// (0x000171e0) list_single_graphic_hl_pane_g1_ParamLimits

0x7bcf,	// (0x000171e0) list_single_graphic_hl_pane_g1

0xde48,	// (0x0001d459) list_single_graphic_hl_pane_g2_ParamLimits

0xde48,	// (0x0001d459) list_single_graphic_hl_pane_g2

0xde48,	// (0x0001d459) list_single_graphic_hl_pane_g3_ParamLimits

0xde48,	// (0x0001d459) list_single_graphic_hl_pane_g3

0x394c,	// (0x00012f5d) list_single_graphic_hl_pane_g4_ParamLimits

0x394c,	// (0x00012f5d) list_single_graphic_hl_pane_g4

0xde54,	// (0x0001d465) list_single_graphic_hl_pane_g5_ParamLimits

0xde54,	// (0x0001d465) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x0001f204) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x0001f204) list_single_graphic_hl_pane_g

0xde68,	// (0x0001d479) list_single_graphic_hl_pane_t1_ParamLimits

0xde68,	// (0x0001d479) list_single_graphic_hl_pane_t1

0x7c12,	// (0x00017223) aid_size_min_hl_cp2

0x7c1b,	// (0x0001722c) list_highlight_pane_cp34_cp2_ParamLimits

0x7c1b,	// (0x0001722c) list_highlight_pane_cp34_cp2

0x7bcf,	// (0x000171e0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7bcf,	// (0x000171e0) list_single_graphic_hl_pane_g1_cp2

0x7c28,	// (0x00017239) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7c28,	// (0x00017239) list_single_graphic_hl_pane_g2_cp2

0x7c34,	// (0x00017245) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7c34,	// (0x00017245) list_single_graphic_hl_pane_g3_cp2

0x47b3,	// (0x00013dc4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x47b3,	// (0x00013dc4) list_single_graphic_hl_pane_g4_cp2

0x7be8,	// (0x000171f9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7be8,	// (0x000171f9) list_single_graphic_hl_pane_g5_cp2

0xb5af,	// (0x0001abc0) control_pane_g4_ParamLimits

0xb5af,	// (0x0001abc0) control_pane_g4

0x3d65,	// (0x00013376) bg_popup_sub_pane_cp10_ParamLimits

0x7223,	// (0x00016834) list_choice_list_pane_ParamLimits

0x7232,	// (0x00016843) scroll_pane_cp23

0x2048,	// (0x00011659) bg_popup_preview_window_pane_cp02_ParamLimits

0x782e,	// (0x00016e3f) list_preview_fixed_pane_ParamLimits

0x7844,	// (0x00016e55) list_preview_fixed_pane_cp_ParamLimits

0x7844,	// (0x00016e55) list_preview_fixed_pane_cp

0x7850,	// (0x00016e61) popup_preview_fixed_window_g1_ParamLimits

0x7850,	// (0x00016e61) popup_preview_fixed_window_g1

0x785c,	// (0x00016e6d) popup_preview_fixed_window_g2_ParamLimits

0x785c,	// (0x00016e6d) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x0001f18c) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x0001f18c) popup_preview_fixed_window_g

0x0603,	// (0x0000fc14) aid_navi_side_left_pane_ParamLimits

0x0618,	// (0x0000fc29) aid_navi_side_right_pane_ParamLimits

0x0630,	// (0x0000fc41) navi_icon_pane_stacon_ParamLimits

0x0644,	// (0x0000fc55) navi_navi_pane_stacon_ParamLimits

0x0630,	// (0x0000fc41) navi_text_pane_stacon_ParamLimits

0x1cb1,	// (0x000112c2) main_text_info_pane

0x7c58,	// (0x00017269) listscroll_text_info_pane

0x7c60,	// (0x00017271) list_text_info_pane_ParamLimits

0x7c60,	// (0x00017271) list_text_info_pane

0x7c6f,	// (0x00017280) scroll_pane_cp24_ParamLimits

0x7c6f,	// (0x00017280) scroll_pane_cp24

0xde7e,	// (0x0001d48f) list_text_info_pane_t1_ParamLimits

0xde7e,	// (0x0001d48f) list_text_info_pane_t1

0xca73,	// (0x0001c084) popup_fast_swap2_window_ParamLimits

0xca73,	// (0x0001c084) popup_fast_swap2_window

0x7cbe,	// (0x000172cf) aid_size_cell_fast2

0x1cb1,	// (0x000112c2) bg_popup_window_pane_cp17

0x4d57,	// (0x00014368) heading_pane_cp2

0x2294,	// (0x000118a5) listscroll_fast2_pane

0x7cc8,	// (0x000172d9) grid_fast2_pane

0x7cd2,	// (0x000172e3) listscroll_fast2_pane_g1

0x7cda,	// (0x000172eb) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x0001f20f) listscroll_fast2_pane_g

0x2e83,	// (0x00012494) scroll_pane_cp26

0x7ce4,	// (0x000172f5) cell_fast2_pane_ParamLimits

0x7ce4,	// (0x000172f5) cell_fast2_pane

0x7cf9,	// (0x0001730a) cell_fast2_pane_g1

0x7d02,	// (0x00017313) cell_fast2_pane_g2

0x7d0b,	// (0x0001731c) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x0001f214) cell_fast2_pane_g

0x2387,	// (0x00011998) grid_highlight_pane_cp9

0x239c,	// (0x000119ad) main_eswt_pane_ParamLimits

0x239c,	// (0x000119ad) main_eswt_pane

0x7c84,	// (0x00017295) list_single_text_info_pane

0x7d13,	// (0x00017324) eswt_ctrl_button_pane

0x7d13,	// (0x00017324) eswt_ctrl_canvas_pane

0x7d1b,	// (0x0001732c) eswt_ctrl_combo_pane

0x7d13,	// (0x00017324) eswt_ctrl_default_pane

0x7d13,	// (0x00017324) eswt_ctrl_label_pane

0x7d23,	// (0x00017334) eswt_ctrl_wait_pane

0x7d2b,	// (0x0001733c) eswt_shell_pane

0x1cb1,	// (0x000112c2) listscroll_eswt_app_pane

0x7d4b,	// (0x0001735c) popup_eswt_tasktip_window_ParamLimits

0x7d4b,	// (0x0001735c) popup_eswt_tasktip_window

0x4957,	// (0x00013f68) bg_popup_window_pane_cp18

0x7d5c,	// (0x0001736d) eswt_control_pane_g1_ParamLimits

0x7d5c,	// (0x0001736d) eswt_control_pane_g1

0x7d69,	// (0x0001737a) eswt_control_pane_g2_ParamLimits

0x7d69,	// (0x0001737a) eswt_control_pane_g2

0x7d76,	// (0x00017387) eswt_control_pane_g3_ParamLimits

0x7d76,	// (0x00017387) eswt_control_pane_g3

0x7d83,	// (0x00017394) eswt_control_pane_g4_ParamLimits

0x7d83,	// (0x00017394) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x0001f21b) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x0001f21b) eswt_control_pane_g

0x2b8c,	// (0x0001219d) bg_button_pane_ParamLimits

0x2b8c,	// (0x0001219d) bg_button_pane

0x239c,	// (0x000119ad) common_borders_pane_copy2_ParamLimits

0x239c,	// (0x000119ad) common_borders_pane_copy2

0x7d90,	// (0x000173a1) control_button_pane_g1_ParamLimits

0x7d90,	// (0x000173a1) control_button_pane_g1

0x7d9c,	// (0x000173ad) control_button_pane_g2_ParamLimits

0x7d9c,	// (0x000173ad) control_button_pane_g2

0x7da8,	// (0x000173b9) control_button_pane_g3_ParamLimits

0x7da8,	// (0x000173b9) control_button_pane_g3

0x0002,

0xfc13,	// (0x0001f224) control_button_pane_g_ParamLimits

0xfc13,	// (0x0001f224) control_button_pane_g

0x7dbc,	// (0x000173cd) control_button_pane_t1

0x7dca,	// (0x000173db) control_button_pane_t2

0x0001,

0xfc1a,	// (0x0001f22b) control_button_pane_t

0x483d,	// (0x00013e4e) bg_button_pane_g1

0x484d,	// (0x00013e5e) bg_button_pane_g2

0x4845,	// (0x00013e56) bg_button_pane_g3

0x485d,	// (0x00013e6e) bg_button_pane_g4

0x4855,	// (0x00013e66) bg_button_pane_g5

0x4865,	// (0x00013e76) bg_button_pane_g6

0x486d,	// (0x00013e7e) bg_button_pane_g7

0x487d,	// (0x00013e8e) bg_button_pane_g8

0x4875,	// (0x00013e86) bg_button_pane_g9

0x0008,

0xf86d,	// (0x0001ee7e) bg_button_pane_g

0x71de,	// (0x000167ef) common_borders_pane_ParamLimits

0x71de,	// (0x000167ef) common_borders_pane

0x7d5c,	// (0x0001736d) eswt_control_pane_g1_copy1_ParamLimits

0x7d5c,	// (0x0001736d) eswt_control_pane_g1_copy1

0x7d69,	// (0x0001737a) eswt_control_pane_g2_copy1_ParamLimits

0x7d69,	// (0x0001737a) eswt_control_pane_g2_copy1

0x7d76,	// (0x00017387) eswt_control_pane_g3_copy1_ParamLimits

0x7d76,	// (0x00017387) eswt_control_pane_g3_copy1

0x7d83,	// (0x00017394) eswt_control_pane_g4_copy1_ParamLimits

0x7d83,	// (0x00017394) eswt_control_pane_g4_copy1

0x7219,	// (0x0001682a) bg_eswt_ctrl_canvas_pane_g1

0x71de,	// (0x000167ef) common_borders_pane_cp2_ParamLimits

0x71de,	// (0x000167ef) common_borders_pane_cp2

0x71de,	// (0x000167ef) common_borders_pane_cp3_ParamLimits

0x71de,	// (0x000167ef) common_borders_pane_cp3

0x7dd8,	// (0x000173e9) separator_horizontal_pane

0x7de0,	// (0x000173f1) separator_vertical_pane

0x7d5c,	// (0x0001736d) eswt_control_pane_g1_copy2_ParamLimits

0x7d5c,	// (0x0001736d) eswt_control_pane_g1_copy2

0x7d69,	// (0x0001737a) eswt_control_pane_g2_copy2_ParamLimits

0x7d69,	// (0x0001737a) eswt_control_pane_g2_copy2

0x7d76,	// (0x00017387) eswt_control_pane_g3_copy2_ParamLimits

0x7d76,	// (0x00017387) eswt_control_pane_g3_copy2

0x7d83,	// (0x00017394) eswt_control_pane_g4_copy2_ParamLimits

0x7d83,	// (0x00017394) eswt_control_pane_g4_copy2

0x1cb1,	// (0x000112c2) common_borders_pane_cp4

0x7de9,	// (0x000173fa) separator_horizontal_pane_g1

0x7df2,	// (0x00017403) separator_horizontal_pane_g2

0x7dfb,	// (0x0001740c) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x0001f230) separator_horizontal_pane_g

0x7d5c,	// (0x0001736d) eswt_control_pane_g1_copy3_ParamLimits

0x7d5c,	// (0x0001736d) eswt_control_pane_g1_copy3

0x7d69,	// (0x0001737a) eswt_control_pane_g2_copy3_ParamLimits

0x7d69,	// (0x0001737a) eswt_control_pane_g2_copy3

0x7d76,	// (0x00017387) eswt_control_pane_g3_copy3_ParamLimits

0x7d76,	// (0x00017387) eswt_control_pane_g3_copy3

0x7d83,	// (0x00017394) eswt_control_pane_g4_copy3_ParamLimits

0x7d83,	// (0x00017394) eswt_control_pane_g4_copy3

0x1cb1,	// (0x000112c2) common_borders_pane_cp5

0x7e04,	// (0x00017415) separator_vertical_pane_g1

0x7e0d,	// (0x0001741e) separator_vertical_pane_g2

0x7e16,	// (0x00017427) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x0001f237) separator_vertical_pane_g

0x7d5c,	// (0x0001736d) eswt_control_pane_g1_copy4_ParamLimits

0x7d5c,	// (0x0001736d) eswt_control_pane_g1_copy4

0x7d69,	// (0x0001737a) eswt_control_pane_g2_copy4_ParamLimits

0x7d69,	// (0x0001737a) eswt_control_pane_g2_copy4

0x7d76,	// (0x00017387) eswt_control_pane_g3_copy4_ParamLimits

0x7d76,	// (0x00017387) eswt_control_pane_g3_copy4

0x7d83,	// (0x00017394) eswt_control_pane_g4_copy4_ParamLimits

0x7d83,	// (0x00017394) eswt_control_pane_g4_copy4

0xde99,	// (0x0001d4aa) eswt_ctrl_combo_button_pane

0xdea1,	// (0x0001d4b2) eswt_ctrl_input_pane

0xdea9,	// (0x0001d4ba) popup_choice_list_window_cp70

0xdeb1,	// (0x0001d4c2) eswt_ctrl_input_pane_t1

0x1cb1,	// (0x000112c2) input_focus_pane_cp70

0x71de,	// (0x000167ef) bg_button_pane_cp70_ParamLimits

0x71de,	// (0x000167ef) bg_button_pane_cp70

0xdebf,	// (0x0001d4d0) eswt_ctrl_combo_button_pane_g1

0x7e4d,	// (0x0001745e) wait_bar_pane_cp70

0x4957,	// (0x00013f68) bg_popup_window_pane_cp70_ParamLimits

0x4957,	// (0x00013f68) bg_popup_window_pane_cp70

0x7e55,	// (0x00017466) popup_eswt_tasktip_window_t1

0x7e6b,	// (0x0001747c) wait_bar_pane_cp71_ParamLimits

0x7e6b,	// (0x0001747c) wait_bar_pane_cp71

0x7e77,	// (0x00017488) grid_eswt_app_pane

0x31a1,	// (0x000127b2) scroll_pane_cp70

0xdec7,	// (0x0001d4d8) cell_eswt_app_pane_ParamLimits

0xdec7,	// (0x0001d4d8) cell_eswt_app_pane

0xdef1,	// (0x0001d502) cell_eswt_app_pane_g1_ParamLimits

0xdef1,	// (0x0001d502) cell_eswt_app_pane_g1

0xdf20,	// (0x0001d531) cell_eswt_app_pane_g2_ParamLimits

0xdf20,	// (0x0001d531) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x0001f23e) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x0001f23e) cell_eswt_app_pane_g

0xdf49,	// (0x0001d55a) cell_eswt_app_pane_t1_ParamLimits

0xdf49,	// (0x0001d55a) cell_eswt_app_pane_t1

0x7f3a,	// (0x0001754b) grid_highlight_pane_cp70_ParamLimits

0x7f3a,	// (0x0001754b) grid_highlight_pane_cp70

0x38b0,	// (0x00012ec1) set_content_pane_g1

0x3c87,	// (0x00013298) status_small_volume_pane

0x136a,	// (0x0001097b) status_small_volume_pane_g1

0x1372,	// (0x00010983) volume_small2_pane

0x137b,	// (0x0001098c) volume_small2_pane_g1

0x1384,	// (0x00010995) volume_small2_pane_g2

0x138d,	// (0x0001099e) volume_small2_pane_g3

0x1396,	// (0x000109a7) volume_small2_pane_g4

0x139f,	// (0x000109b0) volume_small2_pane_g5

0x13a8,	// (0x000109b9) volume_small2_pane_g6

0x13b1,	// (0x000109c2) volume_small2_pane_g7

0x13ba,	// (0x000109cb) volume_small2_pane_g8

0x13c3,	// (0x000109d4) volume_small2_pane_g9

0x13cc,	// (0x000109dd) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x0001f243) volume_small2_pane_g

0x75f3,	// (0x00016c04) fep_vkb_top_text_pane_g1_ParamLimits

0xddf0,	// (0x0001d401) fep_vkb_top_text_pane_t1_ParamLimits

0x7868,	// (0x00016e79) popup_preview_fixed_window_g3_ParamLimits

0x7868,	// (0x00016e79) popup_preview_fixed_window_g3

0xd06c,	// (0x0001c67d) popup_toolbar_trans_pane

0xd76b,	// (0x0001cd7c) aid_height_set_list_ParamLimits

0x5d10,	// (0x00015321) aid_size_parent_ParamLimits

0x3d65,	// (0x00013376) list_highlight_pane_cp2_ParamLimits

0x38b0,	// (0x00012ec1) set_content_pane_g1_ParamLimits

0xd933,	// (0x0001cf44) list_single_image_pane_ParamLimits

0xd933,	// (0x0001cf44) list_single_image_pane

0x7f46,	// (0x00017557) aid_size_cell_image_ParamLimits

0x7f46,	// (0x00017557) aid_size_cell_image

0xdf7b,	// (0x0001d58c) grid_single_image_pane_ParamLimits

0xdf7b,	// (0x0001d58c) grid_single_image_pane

0x27ef,	// (0x00011e00) list_single_image_pane_g1_ParamLimits

0x27ef,	// (0x00011e00) list_single_image_pane_g1

0x7895,	// (0x00016ea6) list_single_image_pane_g2_ParamLimits

0x7895,	// (0x00016ea6) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x0001f258) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x0001f258) list_single_image_pane_g

0x2726,	// (0x00011d37) list_single_image_pane_t1_ParamLimits

0x2726,	// (0x00011d37) list_single_image_pane_t1

0xdf89,	// (0x0001d59a) cell_image_list_pane_ParamLimits

0xdf89,	// (0x0001d59a) cell_image_list_pane

0x7f74,	// (0x00017585) cell_image_list_pane_g1

0x7f7d,	// (0x0001758e) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x0001f25d) cell_image_list_pane_g

0x7f86,	// (0x00017597) aid_size_cell_tb_trans_pane

0x2b8c,	// (0x0001219d) bg_tb_trans_pane

0x7f98,	// (0x000175a9) grid_tb_trans_pane

0x483d,	// (0x00013e4e) bg_tb_trans_pane_g1

0x484d,	// (0x00013e5e) bg_tb_trans_pane_g2

0x4845,	// (0x00013e56) bg_tb_trans_pane_g3

0x485d,	// (0x00013e6e) bg_tb_trans_pane_g4

0x4855,	// (0x00013e66) bg_tb_trans_pane_g5

0x487d,	// (0x00013e8e) bg_tb_trans_pane_g6

0x4875,	// (0x00013e86) bg_tb_trans_pane_g7

0x4865,	// (0x00013e76) bg_tb_trans_pane_g8

0x486d,	// (0x00013e7e) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x0001f262) bg_tb_trans_pane_g

0x7fac,	// (0x000175bd) cell_toolbar_trans_pane_ParamLimits

0x7fac,	// (0x000175bd) cell_toolbar_trans_pane

0x7219,	// (0x0001682a) cell_toolbar_trans_pane_g1

0xdb93,	// (0x0001d1a4) list_form2_midp_pane_t1

0xdba1,	// (0x0001d1b2) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x0001f0ff) list_form2_midp_pane_t

0x6daf,	// (0x000163c0) scroll_pane_cp51_ParamLimits

0x6fba,	// (0x000165cb) form2_midp_wait_pane_g1

0x6fc3,	// (0x000165d4) form2_midp_wait_pane_g2

0x6fcc,	// (0x000165dd) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x0001f114) form2_midp_wait_pane_g

0x1da5,	// (0x000113b6) list_highlight_pane_cp21_ParamLimits

0x7023,	// (0x00016634) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7032,	// (0x00016643) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5f16,	// (0x00015527) list_single_2graphic_im_pane_ParamLimits

0x5f16,	// (0x00015527) list_single_2graphic_im_pane

0xdf9f,	// (0x0001d5b0) list_single_2graphic_im_pane_g1_ParamLimits

0xdf9f,	// (0x0001d5b0) list_single_2graphic_im_pane_g1

0xdfb0,	// (0x0001d5c1) list_single_2graphic_im_pane_g2_ParamLimits

0xdfb0,	// (0x0001d5c1) list_single_2graphic_im_pane_g2

0xdfbc,	// (0x0001d5cd) list_single_2graphic_im_pane_g3_ParamLimits

0xdfbc,	// (0x0001d5cd) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x0001f275) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x0001f275) list_single_2graphic_im_pane_g

0xdfd0,	// (0x0001d5e1) list_single_2graphic_im_pane_t1_ParamLimits

0xdfd0,	// (0x0001d5e1) list_single_2graphic_im_pane_t1

0x7874,	// (0x00016e85) list_single_graphic_2heading_pane_fp_ParamLimits

0x7874,	// (0x00016e85) list_single_graphic_2heading_pane_fp

0x78cc,	// (0x00016edd) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x78cc,	// (0x00016edd) list_single_graphic_2heading_pane_fp_g1

0x7889,	// (0x00016e9a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7889,	// (0x00016e9a) list_single_graphic_2heading_pane_fp_g2

0x27ef,	// (0x00011e00) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x27ef,	// (0x00011e00) list_single_graphic_2heading_pane_fp_g3

0x7895,	// (0x00016ea6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7895,	// (0x00016ea6) list_single_graphic_2heading_pane_fp_g4

0x78a9,	// (0x00016eba) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x78a9,	// (0x00016eba) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0001f19c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0001f19c) list_single_graphic_2heading_pane_fp_g

0x8040,	// (0x00017651) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8040,	// (0x00017651) list_single_graphic_2heading_pane_fp_t1

0x7904,	// (0x00016f15) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7904,	// (0x00016f15) list_single_graphic_2heading_pane_fp_t2

0x8056,	// (0x00017667) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8056,	// (0x00017667) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x0001f27e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x0001f27e) list_single_graphic_2heading_pane_fp_t

0x72b9,	// (0x000168ca) fep_hwr_write_pane_g5_ParamLimits

0x72b9,	// (0x000168ca) fep_hwr_write_pane_g5

0x72c5,	// (0x000168d6) fep_hwr_write_pane_g6_ParamLimits

0x72c5,	// (0x000168d6) fep_hwr_write_pane_g6

0x7d2b,	// (0x0001733c) eswt_shell_pane_ParamLimits

0x4957,	// (0x00013f68) bg_popup_window_pane_cp18_ParamLimits

0x5c30,	// (0x00015241) heading_pane_cp70

0x7e55,	// (0x00017466) popup_eswt_tasktip_window_t1_ParamLimits

0xd12d,	// (0x0001c73e) aid_touch_tab_arrow_left

0xd143,	// (0x0001c754) aid_touch_tab_arrow_right

0xbd50,	// (0x0001b361) title_pane_g3_ParamLimits

0xbd50,	// (0x0001b361) title_pane_g3

0x2a6b,	// (0x0001207c) set_value_pane_g1

0xd06c,	// (0x0001c67d) popup_toolbar_trans_pane_ParamLimits

0x7f86,	// (0x00017597) aid_size_cell_tb_trans_pane_ParamLimits

0x2b8c,	// (0x0001219d) bg_tb_trans_pane_ParamLimits

0x7f98,	// (0x000175a9) grid_tb_trans_pane_ParamLimits

0x2048,	// (0x00011659) cont_note_pane_ParamLimits

0x2048,	// (0x00011659) cont_note_pane

0x239c,	// (0x000119ad) cont_snote2_single_text_pane_ParamLimits

0x239c,	// (0x000119ad) cont_snote2_single_text_pane

0x239c,	// (0x000119ad) cont_snote2_single_graphic_pane_ParamLimits

0x239c,	// (0x000119ad) cont_snote2_single_graphic_pane

0x4f72,	// (0x00014583) cont_note_wait_pane_ParamLimits

0x4f72,	// (0x00014583) cont_note_wait_pane

0x4f72,	// (0x00014583) cont_note_image_pane_ParamLimits

0x4f72,	// (0x00014583) cont_note_image_pane

0x806c,	// (0x0001767d) popup_note2_window_g1_ParamLimits

0x806c,	// (0x0001767d) popup_note2_window_g1

0x809d,	// (0x000176ae) popup_note2_window_t1_ParamLimits

0x809d,	// (0x000176ae) popup_note2_window_t1

0x80e2,	// (0x000176f3) popup_note2_window_t2_ParamLimits

0x80e2,	// (0x000176f3) popup_note2_window_t2

0x8127,	// (0x00017738) popup_note2_window_t3_ParamLimits

0x8127,	// (0x00017738) popup_note2_window_t3

0x816c,	// (0x0001777d) popup_note2_window_t4_ParamLimits

0x816c,	// (0x0001777d) popup_note2_window_t4

0x20cc,	// (0x000116dd) popup_note2_window_t5_ParamLimits

0x20cc,	// (0x000116dd) popup_note2_window_t5

0x0004,

0xfc79,	// (0x0001f28a) popup_note2_window_t_ParamLimits

0xfc79,	// (0x0001f28a) popup_note2_window_t

0x819b,	// (0x000177ac) popup_note2_image_window_g1_ParamLimits

0x819b,	// (0x000177ac) popup_note2_image_window_g1

0x81a7,	// (0x000177b8) popup_note2_image_window_g2_ParamLimits

0x81a7,	// (0x000177b8) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x0001f295) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x0001f295) popup_note2_image_window_g

0x81b9,	// (0x000177ca) popup_note2_image_window_t1_ParamLimits

0x81b9,	// (0x000177ca) popup_note2_image_window_t1

0x81d1,	// (0x000177e2) popup_note2_image_window_t2_ParamLimits

0x81d1,	// (0x000177e2) popup_note2_image_window_t2

0x81e9,	// (0x000177fa) popup_note2_image_window_t3_ParamLimits

0x81e9,	// (0x000177fa) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x0001f29a) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x0001f29a) popup_note2_image_window_t

0x4f80,	// (0x00014591) popup_note2_wait_window_g1_ParamLimits

0x4f80,	// (0x00014591) popup_note2_wait_window_g1

0x8205,	// (0x00017816) popup_note2_wait_window_g2_ParamLimits

0x8205,	// (0x00017816) popup_note2_wait_window_g2

0x4f98,	// (0x000145a9) popup_note2_wait_window_g3_ParamLimits

0x4f98,	// (0x000145a9) popup_note2_wait_window_g3

0x0002,

0xfc90,	// (0x0001f2a1) popup_note2_wait_window_g_ParamLimits

0xfc90,	// (0x0001f2a1) popup_note2_wait_window_g

0x8211,	// (0x00017822) popup_note2_wait_window_t1_ParamLimits

0x8211,	// (0x00017822) popup_note2_wait_window_t1

0x822f,	// (0x00017840) popup_note2_wait_window_t2_ParamLimits

0x822f,	// (0x00017840) popup_note2_wait_window_t2

0x824d,	// (0x0001785e) popup_note2_wait_window_t3_ParamLimits

0x824d,	// (0x0001785e) popup_note2_wait_window_t3

0x825f,	// (0x00017870) popup_note2_wait_window_t4_ParamLimits

0x825f,	// (0x00017870) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x0001f2a8) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x0001f2a8) popup_note2_wait_window_t

0x8271,	// (0x00017882) wait_bar2_pane_ParamLimits

0x8271,	// (0x00017882) wait_bar2_pane

0x8289,	// (0x0001789a) popup_snote2_single_text_window_g1_ParamLimits

0x8289,	// (0x0001789a) popup_snote2_single_text_window_g1

0x82b1,	// (0x000178c2) popup_snote2_single_text_window_t1_ParamLimits

0x82b1,	// (0x000178c2) popup_snote2_single_text_window_t1

0x82fd,	// (0x0001790e) popup_snote2_single_text_window_t2_ParamLimits

0x82fd,	// (0x0001790e) popup_snote2_single_text_window_t2

0x8349,	// (0x0001795a) popup_snote2_single_text_window_t3_ParamLimits

0x8349,	// (0x0001795a) popup_snote2_single_text_window_t3

0x838a,	// (0x0001799b) popup_snote2_single_text_window_t4_ParamLimits

0x838a,	// (0x0001799b) popup_snote2_single_text_window_t4

0x83c0,	// (0x000179d1) popup_snote2_single_text_window_t5_ParamLimits

0x83c0,	// (0x000179d1) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x0001f2b1) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x0001f2b1) popup_snote2_single_text_window_t

0x83eb,	// (0x000179fc) popup_snote2_single_graphic_window_g1_ParamLimits

0x83eb,	// (0x000179fc) popup_snote2_single_graphic_window_g1

0x8413,	// (0x00017a24) popup_snote2_single_graphic_window_g2_ParamLimits

0x8413,	// (0x00017a24) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x0001f2bc) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x0001f2bc) popup_snote2_single_graphic_window_g

0x843b,	// (0x00017a4c) popup_snote2_single_graphic_window_t1_ParamLimits

0x843b,	// (0x00017a4c) popup_snote2_single_graphic_window_t1

0x8487,	// (0x00017a98) popup_snote2_single_graphic_window_t2_ParamLimits

0x8487,	// (0x00017a98) popup_snote2_single_graphic_window_t2

0x8349,	// (0x0001795a) popup_snote2_single_graphic_window_t3_ParamLimits

0x8349,	// (0x0001795a) popup_snote2_single_graphic_window_t3

0x838a,	// (0x0001799b) popup_snote2_single_graphic_window_t4_ParamLimits

0x838a,	// (0x0001799b) popup_snote2_single_graphic_window_t4

0x83c0,	// (0x000179d1) popup_snote2_single_graphic_window_t5_ParamLimits

0x83c0,	// (0x000179d1) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x0001f2c1) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x0001f2c1) popup_snote2_single_graphic_window_t

0x6c6c,	// (0x0001627d) clock_nsta_pane_cp2_t1

0x6c6c,	// (0x0001627d) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x0001f0d5) clock_nsta_pane_cp2_t

0x2ba6,	// (0x000121b7) form_field_data_wide_pane_g1_ParamLimits

0x2bb2,	// (0x000121c3) form_field_data_wide_pane_g2_ParamLimits

0x2bb2,	// (0x000121c3) form_field_data_wide_pane_g2

0x2bbe,	// (0x000121cf) form_field_data_wide_pane_g3_ParamLimits

0x2bbe,	// (0x000121cf) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001eca3) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001eca3) form_field_data_wide_pane_g

0xdaad,	// (0x0001d0be) grid_touch_3_pane_ParamLimits

0xdaad,	// (0x0001d0be) grid_touch_3_pane

0xe001,	// (0x0001d612) cell_touch_3_pane_ParamLimits

0xe001,	// (0x0001d612) cell_touch_3_pane

0x7219,	// (0x0001682a) cell_touch_3_pane_g1

0x7219,	// (0x0001682a) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x0001f15a) cell_touch_3_pane_g

0x20fe,	// (0x0001170f) cont_query_data_pane

0x2106,	// (0x00011717) cont_query_data_pane_cp1

0x8501,	// (0x00017b12) button_value_adjust_pane_cp7

0x8509,	// (0x00017b1a) query_popup_pane_cp3

0x3434,	// (0x00012a45) bg_popup_sub_pane_cp22_ParamLimits

0x0745,	// (0x0000fd56) navi_navi_volume_pane_cp2

0x0760,	// (0x0000fd71) popup_side_volume_key_window_g2

0x076f,	// (0x0000fd80) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001ed35) popup_side_volume_key_window_g

0x078c,	// (0x0000fd9d) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001ed3c) popup_side_volume_key_window_t

0x377a,	// (0x00012d8b) popup_side_volume_key_window_ParamLimits

0xc210,	// (0x0001b821) list_double_graphic_pane_g4_ParamLimits

0xc210,	// (0x0001b821) list_double_graphic_pane_g4

0xd90f,	// (0x0001cf20) list_single_2heading_msg_pane_ParamLimits

0xd90f,	// (0x0001cf20) list_single_2heading_msg_pane

0xe04a,	// (0x0001d65b) list_single_2heading_msg_pane_g1_ParamLimits

0xe04a,	// (0x0001d65b) list_single_2heading_msg_pane_g1

0xe056,	// (0x0001d667) list_single_2heading_msg_pane_g2_ParamLimits

0xe056,	// (0x0001d667) list_single_2heading_msg_pane_g2

0xe069,	// (0x0001d67a) list_single_2heading_msg_pane_g3_ParamLimits

0xe069,	// (0x0001d67a) list_single_2heading_msg_pane_g3

0xe075,	// (0x0001d686) list_single_2heading_msg_pane_g4_ParamLimits

0xe075,	// (0x0001d686) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x0001f2cc) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x0001f2cc) list_single_2heading_msg_pane_g

0xe08d,	// (0x0001d69e) list_single_2heading_msg_pane_t1_ParamLimits

0xe08d,	// (0x0001d69e) list_single_2heading_msg_pane_t1

0xe0b5,	// (0x0001d6c6) list_single_2heading_msg_pane_t2_ParamLimits

0xe0b5,	// (0x0001d6c6) list_single_2heading_msg_pane_t2

0xe120,	// (0x0001d731) list_single_2heading_msg_pane_t3_ParamLimits

0xe120,	// (0x0001d731) list_single_2heading_msg_pane_t3

0x85f8,	// (0x00017c09) list_single_2heading_msg_pane_t4_ParamLimits

0x85f8,	// (0x00017c09) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x0001f2d5) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x0001f2d5) list_single_2heading_msg_pane_t

0x1cf9,	// (0x0001130a) title_pane_g4_ParamLimits

0x1cf9,	// (0x0001130a) title_pane_g4

0x0553,	// (0x0000fb64) title_pane_stacon_g3_ParamLimits

0x0553,	// (0x0000fb64) title_pane_stacon_g3

0x8003,	// (0x00017614) list_single_2graphic_im_pane_g4_ParamLimits

0x8003,	// (0x00017614) list_single_2graphic_im_pane_g4

0x59d7,	// (0x00014fe8) popup_side_volume_key_window_cp

0x62d3,	// (0x000158e4) main_idle_act2_pane_t1

0x0b6e,	// (0x0001017f) toolbar_button_pane_g10

0xc0bd,	// (0x0001b6ce) popup_toolbar_window_cp1

0x6c5d,	// (0x0001626e) clock_nsta_pane_cp_t1

0x6c5d,	// (0x0001626e) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x0001f0d0) clock_nsta_pane_cp_t

0x0745,	// (0x0000fd56) navi_navi_volume_pane_cp2_ParamLimits

0x0754,	// (0x0000fd65) popup_side_volume_key_window_g1_ParamLimits

0x0760,	// (0x0000fd71) popup_side_volume_key_window_g2_ParamLimits

0x076f,	// (0x0000fd80) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001ed35) popup_side_volume_key_window_g_ParamLimits

0x0fd6,	// (0x000105e7) fep_hwr_aid_pane

0x107d,	// (0x0001068e) bg_fep_hwr_top_pane_g4_ParamLimits

0x729b,	// (0x000168ac) fep_hwr_top_pane_g1_ParamLimits

0x7289,	// (0x0001689a) fep_hwr_top_pane_g2_ParamLimits

0x109d,	// (0x000106ae) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x0001f125) fep_hwr_top_pane_g_ParamLimits

0x10b2,	// (0x000106c3) fep_hwr_top_text_pane_ParamLimits

0x579a,	// (0x00014dab) aid_touch_tab_arrow_arrow_2

0x57a3,	// (0x00014db4) aid_touch_tab_arrow_left_2

0x0fea,	// (0x000105fb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1021,	// (0x00010632) fep_hwr_prediction_pane

0x73fb,	// (0x00016a0c) fep_vkb_prediction_pane

0xddd0,	// (0x0001d3e1) fep_vkb_side_pane_g3_ParamLimits

0xddd0,	// (0x0001d3e1) fep_vkb_side_pane_g3

0x122d,	// (0x0001083e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1299,	// (0x000108aa) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x12a6,	// (0x000108b7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x0001f1d4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x13d5,	// (0x000109e6) fep_hwr_prediction_pane_g1

0x13df,	// (0x000109f0) fep_hwr_prediction_pane_g2

0x13e7,	// (0x000109f8) fep_hwr_prediction_pane_g3

0x13ef,	// (0x00010a00) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x0001f2de) fep_hwr_prediction_pane_g

0x861d,	// (0x00017c2e) fep_vkb_prediction_pane_g1

0x8627,	// (0x00017c38) fep_vkb_prediction_pane_g2

0x862f,	// (0x00017c40) fep_vkb_prediction_pane_g3

0x8637,	// (0x00017c48) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x0001f2e7) fep_vkb_prediction_pane_g

0x0e56,	// (0x00010467) slider_set_pane_g3

0x0e6a,	// (0x0001047b) slider_set_pane_g4

0x0e82,	// (0x00010493) slider_set_pane_g5

0x0e56,	// (0x00010467) slider_set_pane_g6

0x0e98,	// (0x000104a9) slider_set_pane_g7

0x5e75,	// (0x00015486) slider_form_pane_g3

0x5e7e,	// (0x0001548f) slider_form_pane_g4

0x5e86,	// (0x00015497) slider_form_pane_g5

0x5e75,	// (0x00015486) slider_form_pane_g6

0xd8b6,	// (0x0001cec7) slider_form_pane_g7

0x65b0,	// (0x00015bc1) slider_set_pane_vc_g3

0x65b9,	// (0x00015bca) slider_set_pane_vc_g4

0x65c2,	// (0x00015bd3) slider_set_pane_vc_g5

0x65b0,	// (0x00015bc1) slider_set_pane_vc_g6

0x65cb,	// (0x00015bdc) slider_set_pane_vc_g7

0x65b0,	// (0x00015bc1) slider_form_pane_vc_g1

0x65b9,	// (0x00015bca) slider_form_pane_vc_g2

0x65c2,	// (0x00015bd3) slider_form_pane_vc_g3

0x65b0,	// (0x00015bc1) slider_form_pane_vc_g4

0x6963,	// (0x00015f74) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x0001f0a9) slider_form_pane_vc_g

0x1cb1,	// (0x000112c2) main_idle_act3_pane

0x863f,	// (0x00017c50) ai3_links_pane

0xe18e,	// (0x0001d79f) popup_ai3_data_window_ParamLimits

0xe18e,	// (0x0001d79f) popup_ai3_data_window

0x1cb1,	// (0x000112c2) grid_ai3_links_pane

0xe1a8,	// (0x0001d7b9) cell_ai3_links_pane_ParamLimits

0xe1a8,	// (0x0001d7b9) cell_ai3_links_pane

0x867a,	// (0x00017c8b) bg_popup_sub_pane_cp11

0x8687,	// (0x00017c98) cell_ai3_links_pane_g1

0x1cb1,	// (0x000112c2) bg_popup_sub_pane_cp12

0x86ac,	// (0x00017cbd) heading_ai3_data_pane

0x86b4,	// (0x00017cc5) list_ai3_gene_pane

0x86c0,	// (0x00017cd1) popup_ai3_data_window_g1

0x86c8,	// (0x00017cd9) heading_ai3_data_pane_g1

0x86d0,	// (0x00017ce1) heading_ai3_data_pane_t1

0x86de,	// (0x00017cef) list_double_ai3_gene_pane_ParamLimits

0x86de,	// (0x00017cef) list_double_ai3_gene_pane

0x86eb,	// (0x00017cfc) list_single_ai3_gene_pane_ParamLimits

0x86eb,	// (0x00017cfc) list_single_ai3_gene_pane

0x71de,	// (0x000167ef) list_highlight_pane_cp7_ParamLimits

0x71de,	// (0x000167ef) list_highlight_pane_cp7

0x86f8,	// (0x00017d09) list_single_a13_gene_pane_t1_ParamLimits

0x86f8,	// (0x00017d09) list_single_a13_gene_pane_t1

0x870f,	// (0x00017d20) list_single_ai3_gene_pane_g1

0x8718,	// (0x00017d29) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x0001f2f0) list_single_ai3_gene_pane_g

0x8720,	// (0x00017d31) list_double_ai3_gene_pane_g1_ParamLimits

0x8720,	// (0x00017d31) list_double_ai3_gene_pane_g1

0x872c,	// (0x00017d3d) list_double_ai3_gene_pane_t1_ParamLimits

0x872c,	// (0x00017d3d) list_double_ai3_gene_pane_t1

0x8748,	// (0x00017d59) list_double_ai3_gene_pane_t2_ParamLimits

0x8748,	// (0x00017d59) list_double_ai3_gene_pane_t2

0x875e,	// (0x00017d6f) list_double_ai3_gene_pane_t3_ParamLimits

0x875e,	// (0x00017d6f) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x0001f2f5) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x0001f2f5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x851a,	// (0x00017b2b) aid_size_min_col_2

0xe034,	// (0x0001d645) aid_size_min_msg_ParamLimits

0xe034,	// (0x0001d645) aid_size_min_msg

0xdde4,	// (0x0001d3f5) fep_vkb_top_text_pane_g2_ParamLimits

0xdde4,	// (0x0001d3f5) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x0001f155) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x0001f155) fep_vkb_top_text_pane_g

0x1cb1,	// (0x000112c2) main_hc_apps_shell_pane

0x877b,	// (0x00017d8c) grid_hc_apps_pane_ParamLimits

0x877b,	// (0x00017d8c) grid_hc_apps_pane

0x878a,	// (0x00017d9b) list_hc_apps_pane

0x8792,	// (0x00017da3) scroll_pane_cp37_ParamLimits

0x8792,	// (0x00017da3) scroll_pane_cp37

0xe1c2,	// (0x0001d7d3) cell_hc_apps_pane_ParamLimits

0xe1c2,	// (0x0001d7d3) cell_hc_apps_pane

0xe280,	// (0x0001d891) cell_hc_apps_pane_g1_ParamLimits

0xe280,	// (0x0001d891) cell_hc_apps_pane_g1

0x887d,	// (0x00017e8e) cell_hc_apps_pane_g2_ParamLimits

0x887d,	// (0x00017e8e) cell_hc_apps_pane_g2

0x8899,	// (0x00017eaa) cell_hc_apps_pane_g3_ParamLimits

0x8899,	// (0x00017eaa) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x0001f2fc) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x0001f2fc) cell_hc_apps_pane_g

0xe2ad,	// (0x0001d8be) cell_hc_apps_pane_t1_ParamLimits

0xe2ad,	// (0x0001d8be) cell_hc_apps_pane_t1

0x2048,	// (0x00011659) grid_highlight_pane_cp10_ParamLimits

0x2048,	// (0x00011659) grid_highlight_pane_cp10

0xe2eb,	// (0x0001d8fc) list_single_hc_apps_pane_ParamLimits

0xe2eb,	// (0x0001d8fc) list_single_hc_apps_pane

0xe318,	// (0x0001d929) list_single_hc_apps_pane_g1

0xe331,	// (0x0001d942) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x0001f303) list_single_hc_apps_pane_g

0xe34a,	// (0x0001d95b) list_single_hc_apps_pane_g2_copy1

0x89a5,	// (0x00017fb6) list_single_hc_apps_pane_t1

0x1da5,	// (0x000113b6) bg_set_opt_pane_cp_ParamLimits

0x047a,	// (0x0000fa8b) setting_slider_pane_t1_ParamLimits

0x0493,	// (0x0000faa4) setting_slider_pane_t2_ParamLimits

0x04ad,	// (0x0000fabe) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001eb8b) setting_slider_pane_t_ParamLimits

0x04c5,	// (0x0000fad6) slider_set_pane_ParamLimits

0x09ea,	// (0x0000fffb) control_pane_g5_ParamLimits

0x09ea,	// (0x0000fffb) control_pane_g5

0x5cc4,	// (0x000152d5) slider_set_pane_g1_ParamLimits

0x0e4a,	// (0x0001045b) slider_set_pane_g2_ParamLimits

0x0e56,	// (0x00010467) slider_set_pane_g3_ParamLimits

0x0e6a,	// (0x0001047b) slider_set_pane_g4_ParamLimits

0x0e82,	// (0x00010493) slider_set_pane_g5_ParamLimits

0x0e56,	// (0x00010467) slider_set_pane_g6_ParamLimits

0x0e98,	// (0x000104a9) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0001ef7c) slider_set_pane_g_ParamLimits

0x385b,	// (0x00012e6c) navi_icon_text_pane_ParamLimits

0xd0f9,	// (0x0001c70a) aid_fill_nsta_2_ParamLimits

0xd12d,	// (0x0001c73e) aid_touch_tab_arrow_left_ParamLimits

0xd143,	// (0x0001c754) aid_touch_tab_arrow_right_ParamLimits

0xd1de,	// (0x0001c7ef) clock_nsta_pane_ParamLimits

0xd680,	// (0x0001cc91) navi_icon_pane_g1_ParamLimits

0xd68c,	// (0x0001cc9d) navi_text_pane_t1_ParamLimits

0xdb75,	// (0x0001d186) navi_icon_text_pane_g1_ParamLimits

0xdb81,	// (0x0001d192) navi_icon_text_pane_t1_ParamLimits

0xe318,	// (0x0001d929) list_single_hc_apps_pane_g1_ParamLimits

0xe331,	// (0x0001d942) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x0001f303) list_single_hc_apps_pane_g_ParamLimits

0xe34a,	// (0x0001d95b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x89a5,	// (0x00017fb6) list_single_hc_apps_pane_t1_ParamLimits

0xb4ed,	// (0x0001aafe) popup_toolbar2_fixed_window_ParamLimits

0xb4ed,	// (0x0001aafe) popup_toolbar2_fixed_window

0xd062,	// (0x0001c673) popup_toolbar2_float_window

0x1cb1,	// (0x000112c2) bg_popup_sub_pane_cp27

0x89d3,	// (0x00017fe4) grid_toolbar2_float_pane

0x1cb1,	// (0x000112c2) bg_popup_sub_pane_cp26

0x89d3,	// (0x00017fe4) grid_toolbar2_fixed_pane

0xe366,	// (0x0001d977) cell_toolbar2_fixed_pane_ParamLimits

0xe366,	// (0x0001d977) cell_toolbar2_fixed_pane

0xe381,	// (0x0001d992) cell_toolbar2_fixed_pane_g1

0x89f4,	// (0x00018005) toolbar2_fixed_button_pane

0x483d,	// (0x00013e4e) toolbar2_fixed_button_pane_g1

0x484d,	// (0x00013e5e) toolbar2_fixed_button_pane_g2

0x4845,	// (0x00013e56) toolbar2_fixed_button_pane_g3

0x485d,	// (0x00013e6e) toolbar2_fixed_button_pane_g4

0x4855,	// (0x00013e66) toolbar2_fixed_button_pane_g5

0x4865,	// (0x00013e76) toolbar2_fixed_button_pane_g6

0x486d,	// (0x00013e7e) toolbar2_fixed_button_pane_g7

0x487d,	// (0x00013e8e) toolbar2_fixed_button_pane_g8

0x4875,	// (0x00013e86) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x0001ee7e) toolbar2_fixed_button_pane_g

0x89fc,	// (0x0001800d) cell_toolbar2_float_pane_ParamLimits

0x89fc,	// (0x0001800d) cell_toolbar2_float_pane

0x8a0d,	// (0x0001801e) cell_toolbar2_float_pane_g1

0x89f4,	// (0x00018005) toolbar2_fixed_button_pane_cp

0xdcbe,	// (0x0001d2cf) fep_vkb_accented_list_pane_ParamLimits

0xdcbe,	// (0x0001d2cf) fep_vkb_accented_list_pane

0x120d,	// (0x0001081e) bg_popup_fep_shadow_pane_g9

0x39db,	// (0x00012fec) bg_popup_fep_shadow_pane_cp3

0x2e6a,	// (0x0001247b) list_accented_list_pane

0x8a16,	// (0x00018027) list_single_accented_list_pane_ParamLimits

0x8a16,	// (0x00018027) list_single_accented_list_pane

0x39db,	// (0x00012fec) list_highlight_pane_cp10

0x8a27,	// (0x00018038) list_single_accented_list_pane_t1

0xcf8c,	// (0x0001c59d) popup_slider_window_ParamLimits

0xcf8c,	// (0x0001c59d) popup_slider_window

0x8511,	// (0x00017b22) aid_indentation_list_msg

0xe47a,	// (0x0001da8b) bg_popup_window_pane_cp19

0x8b4b,	// (0x0001815c) popup_slider_window_g1

0x8b67,	// (0x00018178) popup_slider_window_g2

0x8b83,	// (0x00018194) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x0001f308) popup_slider_window_g

0x8bdf,	// (0x000181f0) popup_slider_window_t1

0x8c53,	// (0x00018264) small_volume_slider_vertical_pane

0x7219,	// (0x0001682a) small_volume_slider_vertical_pane_g1

0x7219,	// (0x0001682a) small_volume_slider_vertical_pane_g2

0x8c6f,	// (0x00018280) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x0001f31a) small_volume_slider_vertical_pane_g

0xb45b,	// (0x0001aa6c) area_side_right_pane_ParamLimits

0xb45b,	// (0x0001aa6c) area_side_right_pane

0xb8cc,	// (0x0001aedd) aid_size_side_button_ParamLimits

0xb8cc,	// (0x0001aedd) aid_size_side_button

0xb8e5,	// (0x0001aef6) grid_sctrl_middle_pane_ParamLimits

0xb8e5,	// (0x0001aef6) grid_sctrl_middle_pane

0x142b,	// (0x00010a3c) sctrl_sk_bottom_pane

0x143c,	// (0x00010a4d) sctrl_sk_top_pane

0x144e,	// (0x00010a5f) aid_touch_sctrl_top

0x145b,	// (0x00010a6c) bg_sctrl_sk_pane_ParamLimits

0x145b,	// (0x00010a6c) bg_sctrl_sk_pane

0x1469,	// (0x00010a7a) sctrl_sk_top_pane_g1

0x1476,	// (0x00010a87) sctrl_sk_top_pane_t1

0x144e,	// (0x00010a5f) aid_touch_sctrl_bottom

0x145b,	// (0x00010a6c) bg_sctrl_sk_pane_cp_ParamLimits

0x145b,	// (0x00010a6c) bg_sctrl_sk_pane_cp

0x1491,	// (0x00010aa2) sctrl_sk_bottom_pane_g1

0x1476,	// (0x00010a87) sctrl_sk_bottom_pane_t1

0xb8ff,	// (0x0001af10) cell_sctrl_middle_pane_ParamLimits

0xb8ff,	// (0x0001af10) cell_sctrl_middle_pane

0xb910,	// (0x0001af21) aid_touch_sctrl_middle_ParamLimits

0xb910,	// (0x0001af21) aid_touch_sctrl_middle

0xb91d,	// (0x0001af2e) bg_sctrl_middle_pane_ParamLimits

0xb91d,	// (0x0001af2e) bg_sctrl_middle_pane

0x1afe,	// (0x0001110f) cell_sctrl_middle_pane_g1_ParamLimits

0x1afe,	// (0x0001110f) cell_sctrl_middle_pane_g1

0xb92b,	// (0x0001af3c) cell_sctrl_middle_pane_g2_ParamLimits

0xb92b,	// (0x0001af3c) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x0001f326) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x0001f326) cell_sctrl_middle_pane_g

0x483d,	// (0x00013e4e) bg_sctrl_middle_pane_g1

0x4845,	// (0x00013e56) bg_sctrl_middle_pane_g2

0x484d,	// (0x00013e5e) bg_sctrl_middle_pane_g3

0x4855,	// (0x00013e66) bg_sctrl_middle_pane_g4

0x485d,	// (0x00013e6e) bg_sctrl_middle_pane_g5

0x4865,	// (0x00013e76) bg_sctrl_middle_pane_g6

0x486d,	// (0x00013e7e) bg_sctrl_middle_pane_g7

0x4875,	// (0x00013e86) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x0001f32b) bg_sctrl_middle_pane_g

0x487d,	// (0x00013e8e) bg_sctrl_middle_pane_g8_copy1

0x483d,	// (0x00013e4e) bg_sctrl_sk_pane_g1

0x484d,	// (0x00013e5e) bg_sctrl_sk_pane_g2

0x4845,	// (0x00013e56) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x0001ee7e) bg_sctrl_sk_pane_g

0x255a,	// (0x00011b6b) aid_size_touch_scroll_bar

0x485d,	// (0x00013e6e) bg_sctrl_sk_pane_g4

0x4855,	// (0x00013e66) bg_sctrl_sk_pane_g5

0x4865,	// (0x00013e76) bg_sctrl_sk_pane_g6

0x486d,	// (0x00013e7e) bg_sctrl_sk_pane_g7

0x487d,	// (0x00013e8e) bg_sctrl_sk_pane_g8

0x4875,	// (0x00013e86) bg_sctrl_sk_pane_g9

0x3e0d,	// (0x0001341e) popup_fep_china_hwr2_fs_candidate_window

0xcad0,	// (0x0001c0e1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcad0,	// (0x0001c0e1) popup_fep_china_hwr2_fs_control_window

0x122d,	// (0x0001083e) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x0001f321) sctrl_sk_top_pane_g

0xe532,	// (0x0001db43) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe532,	// (0x0001db43) aid_fep_china_hwr2_fs_cell

0xe546,	// (0x0001db57) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe546,	// (0x0001db57) bg_popup_fep_shadow_pane_cp4

0xe55d,	// (0x0001db6e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe55d,	// (0x0001db6e) bg_popup_fep_shadow_pane_cp5

0xe56f,	// (0x0001db80) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe56f,	// (0x0001db80) popup_fep_china_hwr2_fs_control_bar_grid

0xe583,	// (0x0001db94) popup_fep_china_hwr2_fs_control_funtion_grid

0x8ccb,	// (0x000182dc) aid_fep_china_hwr2_fs_candi_cell

0x1cb1,	// (0x000112c2) bg_popup_fep_shadow_pane_cp6

0x8cd5,	// (0x000182e6) popup_fep_china_hwr2_fs_candidate_grid

0xe58b,	// (0x0001db9c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe58b,	// (0x0001db9c) cell_fep_china_hwr2_fs_funtion_grid

0x7219,	// (0x0001682a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8cf7,	// (0x00018308) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8cf7,	// (0x00018308) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8d05,	// (0x00018316) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8d05,	// (0x00018316) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x0001f33c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x0001f33c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe5a3,	// (0x0001dbb4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe5a3,	// (0x0001dbb4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe5b8,	// (0x0001dbc9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe5b8,	// (0x0001dbc9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x0001f341) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x0001f341) cell_fep_china_hwr2_fs_funtion_grid_t

0x8d4c,	// (0x0001835d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8d54,	// (0x00018365) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8d5c,	// (0x0001836d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x0001f346) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8d64,	// (0x00018375) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8d64,	// (0x00018375) cell_fep_china_hwr2_fs_candidate_grid

0x8d7d,	// (0x0001838e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8d85,	// (0x00018396) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7219,	// (0x0001682a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7219,	// (0x0001682a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x0001f15a) cell_fep_china_hwr2_fs_candidate_grid_g

0x8d8d,	// (0x0001839e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4400,	// (0x00013a11) clock_nsta_pane_cp_24_ParamLimits

0x4400,	// (0x00013a11) clock_nsta_pane_cp_24

0x447e,	// (0x00013a8f) indicator_nsta_pane_cp_24_ParamLimits

0x447e,	// (0x00013a8f) indicator_nsta_pane_cp_24

0x55f2,	// (0x00014c03) heading_pane_g1

0x0001,

0xf8d2,	// (0x0001eee3) heading_pane_g

0x611c,	// (0x0001572d) grid_sct_catagory_button_pane

0x614c,	// (0x0001575d) scroll_pane_cp5_ParamLimits

0x6dbb,	// (0x000163cc) button_value_adjust_pane_cp5_ParamLimits

0x6dbb,	// (0x000163cc) button_value_adjust_pane_cp5

0x6eb7,	// (0x000164c8) form2_midp_time_pane_ParamLimits

0x8d9b,	// (0x000183ac) cell_sct_catagory_button_pane_ParamLimits

0x8d9b,	// (0x000183ac) cell_sct_catagory_button_pane

0x71de,	// (0x000167ef) bg_button_pane_cp01_ParamLimits

0x71de,	// (0x000167ef) bg_button_pane_cp01

0x7219,	// (0x0001682a) cell_sct_catagory_button_pane_g1

0xd005,	// (0x0001c616) popup_tb_extension_window

0xe5d4,	// (0x0001dbe5) aid_size_cell_ext_ParamLimits

0xe5d4,	// (0x0001dbe5) aid_size_cell_ext

0x239c,	// (0x000119ad) bg_tb_trans_pane_cp1_ParamLimits

0x239c,	// (0x000119ad) bg_tb_trans_pane_cp1

0xe5fa,	// (0x0001dc0b) grid_tb_ext_pane_ParamLimits

0xe5fa,	// (0x0001dc0b) grid_tb_ext_pane

0xe635,	// (0x0001dc46) cell_tb_ext_pane_ParamLimits

0xe635,	// (0x0001dc46) cell_tb_ext_pane

0xe65d,	// (0x0001dc6e) cell_tb_ext_pane_g1_ParamLimits

0xe65d,	// (0x0001dc6e) cell_tb_ext_pane_g1

0x8e2f,	// (0x00018440) cell_tb_ext_pane_t1

0x2048,	// (0x00011659) list_highlight_pane_cp11_ParamLimits

0x2048,	// (0x00011659) list_highlight_pane_cp11

0x03ad,	// (0x0000f9be) popup_uni_indicator_window_ParamLimits

0x03ad,	// (0x0000f9be) popup_uni_indicator_window

0x2b8c,	// (0x0001219d) bg_popup_sub_pane_cp14

0x8e4a,	// (0x0001845b) list_uniindi_pane

0x8e56,	// (0x00018467) uniindi_top_pane

0x2048,	// (0x00011659) bg_uniindi_top_pane

0x8e75,	// (0x00018486) uniindi_top_pane_g1

0x8e8b,	// (0x0001849c) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x0001f34d) uniindi_top_pane_g

0x8eb5,	// (0x000184c6) uniindi_top_pane_t1

0x8edf,	// (0x000184f0) list_single_uniindi_pane_ParamLimits

0x8edf,	// (0x000184f0) list_single_uniindi_pane

0x7219,	// (0x0001682a) bg_uniindi_top_pane_g1

0x8ef2,	// (0x00018503) list_single_uniindi_pane_g1

0x8f05,	// (0x00018516) list_single_uniindi_pane_t1

0x0223,	// (0x0000f834) control_bg_pane

0x8f2a,	// (0x0001853b) bg_sctrl_sk_pane_cp1

0x8f33,	// (0x00018544) bg_sctrl_sk_pane_cp2

0x8f3c,	// (0x0001854d) control_bg_pane_g1

0x8f45,	// (0x00018556) control_bg_pane_g2

0x0001,

0xfd45,	// (0x0001f356) control_bg_pane_g

0x6bef,	// (0x00016200) cell_indicator_nsta_pane_g1_ParamLimits

0xdadc,	// (0x0001d0ed) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x0001f0be) cell_indicator_nsta_pane_g_ParamLimits

0x6f3f,	// (0x00016550) form2_midp_time_pane_t1_ParamLimits

0xc713,	// (0x0001bd24) main_idle_act4_pane_ParamLimits

0xc713,	// (0x0001bd24) main_idle_act4_pane

0xd005,	// (0x0001c616) popup_tb_extension_window_ParamLimits

0xe61c,	// (0x0001dc2d) tb_ext_find_pane_ParamLimits

0xe61c,	// (0x0001dc2d) tb_ext_find_pane

0x8f4e,	// (0x0001855f) ai_gene_pane_1_cp1

0x3b20,	// (0x00013131) ai_gene_pane_2_cp1

0x8f56,	// (0x00018567) list_single_idle_plugin_calendar_pane

0x8f5f,	// (0x00018570) list_single_idle_plugin_notification_pane

0x8f68,	// (0x00018579) list_single_idle_plugin_player_pane

0xe67a,	// (0x0001dc8b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe67a,	// (0x0001dc8b) list_single_idle_plugin_shortcut_pane

0xe6a2,	// (0x0001dcb3) main_idle_act4_pane_t1

0xe6b8,	// (0x0001dcc9) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x0001f35b) main_idle_act4_pane_t

0xe6ce,	// (0x0001dcdf) middle_sk_idle_act4_pane_ParamLimits

0xe6ce,	// (0x0001dcdf) middle_sk_idle_act4_pane

0xe6ea,	// (0x0001dcfb) popup_clock_digital_analogue_window_cp2

0xe712,	// (0x0001dd23) shortcut_wheel_idle_act4_pane_ParamLimits

0xe712,	// (0x0001dd23) shortcut_wheel_idle_act4_pane

0x7219,	// (0x0001682a) shortcut_wheel_idle_act4_pane_g1

0x7219,	// (0x0001682a) shortcut_wheel_idle_act4_pane_g2

0x7219,	// (0x0001682a) shortcut_wheel_idle_act4_pane_g3

0x7219,	// (0x0001682a) shortcut_wheel_idle_act4_pane_g4

0x7219,	// (0x0001682a) shortcut_wheel_idle_act4_pane_g5

0x8ffb,	// (0x0001860c) shortcut_wheel_idle_act4_pane_g6

0x9003,	// (0x00018614) shortcut_wheel_idle_act4_pane_g7

0x900b,	// (0x0001861c) shortcut_wheel_idle_act4_pane_g8

0x9013,	// (0x00018624) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x0001f360) shortcut_wheel_idle_act4_pane_g

0xc721,	// (0x0001bd32) middle_sk_idle_act4_pane_g1_ParamLimits

0xc721,	// (0x0001bd32) middle_sk_idle_act4_pane_g1

0xe78f,	// (0x0001dda0) middle_sk_idle_act4_pane_g2_ParamLimits

0xe78f,	// (0x0001dda0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x0001f383) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x0001f383) middle_sk_idle_act4_pane_g

0xe7a7,	// (0x0001ddb8) middle_sk_idle_act4_pane_t1_ParamLimits

0xe7a7,	// (0x0001ddb8) middle_sk_idle_act4_pane_t1

0xe7d6,	// (0x0001dde7) grid_ai_shortcut_pane_ParamLimits

0xe7d6,	// (0x0001dde7) grid_ai_shortcut_pane

0xe7f3,	// (0x0001de04) list_highlight_pane_cp16_ParamLimits

0xe7f3,	// (0x0001de04) list_highlight_pane_cp16

0xe800,	// (0x0001de11) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe800,	// (0x0001de11) list_single_idle_plugin_shortcut_pane_g1

0xe80c,	// (0x0001de1d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe80c,	// (0x0001de1d) list_single_idle_plugin_shortcut_pane_g2

0xe828,	// (0x0001de39) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe828,	// (0x0001de39) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x0001f388) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x0001f388) list_single_idle_plugin_shortcut_pane_g

0xe83d,	// (0x0001de4e) cell_ai_shortcut_pane_ParamLimits

0xe83d,	// (0x0001de4e) cell_ai_shortcut_pane

0xe853,	// (0x0001de64) cell_ai_shortcut_pane_g1_ParamLimits

0xe853,	// (0x0001de64) cell_ai_shortcut_pane_g1

0x8f4e,	// (0x0001855f) ai_gene_pane_1_cp2

0x9143,	// (0x00018754) ai_gene_pane_2_cp2

0x914b,	// (0x0001875c) list_highlight_pane_cp15

0x9154,	// (0x00018765) list_single_idle_plugin_calendar_pane_g1

0x914b,	// (0x0001875c) list_highlight_pane_cp17

0x915c,	// (0x0001876d) list_single_idle_plugin_calendar_pane_g1_copy1

0x9164,	// (0x00018775) list_single_idle_plugin_player_pane_g1

0x6375,	// (0x00015986) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x0001f38f) list_single_idle_plugin_player_pane_g

0x916c,	// (0x0001877d) list_single_idle_plugin_player_pane_t1

0x917a,	// (0x0001878b) list_single_idle_plugin_player_pane_t2

0x9188,	// (0x00018799) list_single_idle_plugin_player_pane_t3

0x9196,	// (0x000187a7) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x0001f394) list_single_idle_plugin_player_pane_t

0x91a4,	// (0x000187b5) wait_bar_pane_cp15

0x91ac,	// (0x000187bd) grid_ai_notification_pane

0x6375,	// (0x00015986) list_single_idle_plugin_notification_pane_g1

0xe875,	// (0x0001de86) cell_ai_notification_pane_ParamLimits

0xe875,	// (0x0001de86) cell_ai_notification_pane

0x91c2,	// (0x000187d3) cell_ai_notification_pane_g1

0x91ca,	// (0x000187db) cell_ai_notification_pane_t1

0xe882,	// (0x0001de93) tb_ext_find_button_pane

0xe88a,	// (0x0001de9b) tb_ext_find_pane_g1

0xe892,	// (0x0001dea3) tb_ext_find_pane_t1

0x336f,	// (0x00012980) tb_ext_find_button_pane_g1

0x91f6,	// (0x00018807) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x0001f39d) tb_ext_find_button_pane_g

0xe6a2,	// (0x0001dcb3) main_idle_act4_pane_t1_ParamLimits

0xe6b8,	// (0x0001dcc9) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x0001f35b) main_idle_act4_pane_t_ParamLimits

0xe6ea,	// (0x0001dcfb) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe702,	// (0x0001dd13) sat_plugin_idle_act4_pane_ParamLimits

0xe702,	// (0x0001dd13) sat_plugin_idle_act4_pane

0xe8a0,	// (0x0001deb1) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe8a0,	// (0x0001deb1) sat_plugin_idle_act4_pane_t1

0xe8b8,	// (0x0001dec9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe8b8,	// (0x0001dec9) sat_plugin_idle_act4_pane_t2

0xe8d0,	// (0x0001dee1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe8d0,	// (0x0001dee1) sat_plugin_idle_act4_pane_t3

0xe8e8,	// (0x0001def9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe8e8,	// (0x0001def9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x0001f3a2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x0001f3a2) sat_plugin_idle_act4_pane_t

0x02e8,	// (0x0000f8f9) popup_battery_window_ParamLimits

0x02e8,	// (0x0000f8f9) popup_battery_window

0x2048,	// (0x00011659) bg_popup_sub_pane_cp25_ParamLimits

0x2048,	// (0x00011659) bg_popup_sub_pane_cp25

0x924b,	// (0x0001885c) popup_battery_window_g1_ParamLimits

0x924b,	// (0x0001885c) popup_battery_window_g1

0x9257,	// (0x00018868) popup_battery_window_t1_ParamLimits

0x9257,	// (0x00018868) popup_battery_window_t1

0x9269,	// (0x0001887a) popup_battery_window_t2_ParamLimits

0x9269,	// (0x0001887a) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x0001f3ab) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x0001f3ab) popup_battery_window_t

0xc94f,	// (0x0001bf60) midp_canvas_pane_ParamLimits

0xc9aa,	// (0x0001bfbb) midp_keypad_pane_ParamLimits

0xc9aa,	// (0x0001bfbb) midp_keypad_pane

0x3d65,	// (0x00013376) main_midp_pane_ParamLimits

0x6c7b,	// (0x0001628c) signal_pane_g2_cp_ParamLimits

0xe900,	// (0x0001df11) aid_size_cell_midp_keypad_ParamLimits

0xe900,	// (0x0001df11) aid_size_cell_midp_keypad

0xe91e,	// (0x0001df2f) midp_keyp_game_grid_pane_ParamLimits

0xe91e,	// (0x0001df2f) midp_keyp_game_grid_pane

0xe945,	// (0x0001df56) midp_keyp_rocker_pane_ParamLimits

0xe945,	// (0x0001df56) midp_keyp_rocker_pane

0xe99e,	// (0x0001dfaf) midp_keyp_sk_left_pane_ParamLimits

0xe99e,	// (0x0001dfaf) midp_keyp_sk_left_pane

0xe9f2,	// (0x0001e003) midp_keyp_sk_right_pane_ParamLimits

0xe9f2,	// (0x0001e003) midp_keyp_sk_right_pane

0x1cb1,	// (0x000112c2) bg_button_pane_cp03

0xea46,	// (0x0001e057) midp_keyp_sk_left_pane_g1

0x1cb1,	// (0x000112c2) bg_button_pane_cp04

0xea46,	// (0x0001e057) midp_keyp_sk_right_pane_g1

0x7219,	// (0x0001682a) midp_keyp_rocker_pane_g1

0xea4f,	// (0x0001e060) keyp_game_cell_pane_ParamLimits

0xea4f,	// (0x0001e060) keyp_game_cell_pane

0x1cb1,	// (0x000112c2) bg_button_pane_cp02

0xea73,	// (0x0001e084) keyp_game_cell_pane_g1

0xb49d,	// (0x0001aaae) popup_fep_vkb2_window_ParamLimits

0xb49d,	// (0x0001aaae) popup_fep_vkb2_window

0xb937,	// (0x0001af48) aid_size_cell_vkb2_ParamLimits

0xb937,	// (0x0001af48) aid_size_cell_vkb2

0xb96d,	// (0x0001af7e) popup_fep_vkb2_window_g1_ParamLimits

0xb96d,	// (0x0001af7e) popup_fep_vkb2_window_g1

0xb9bd,	// (0x0001afce) vkb2_area_bottom_pane_ParamLimits

0xb9bd,	// (0x0001afce) vkb2_area_bottom_pane

0xba11,	// (0x0001b022) vkb2_area_keypad_pane_ParamLimits

0xba11,	// (0x0001b022) vkb2_area_keypad_pane

0xba59,	// (0x0001b06a) vkb2_area_top_pane_ParamLimits

0xba59,	// (0x0001b06a) vkb2_area_top_pane

0xbadf,	// (0x0001b0f0) vkb2_top_entry_pane_ParamLimits

0xbadf,	// (0x0001b0f0) vkb2_top_entry_pane

0xbb0c,	// (0x0001b11d) vkb2_top_grid_left_pane_ParamLimits

0xbb0c,	// (0x0001b11d) vkb2_top_grid_left_pane

0xbb2c,	// (0x0001b13d) vkb2_top_grid_right_pane_ParamLimits

0xbb2c,	// (0x0001b13d) vkb2_top_grid_right_pane

0x16fd,	// (0x00010d0e) vkb2_cell_keypad_pane_ParamLimits

0x16fd,	// (0x00010d0e) vkb2_cell_keypad_pane

0xbb72,	// (0x0001b183) vkb2_area_bottom_grid_pane_ParamLimits

0xbb72,	// (0x0001b183) vkb2_area_bottom_grid_pane

0xbb9c,	// (0x0001b1ad) vkb2_area_bottom_pane_g1_ParamLimits

0xbb9c,	// (0x0001b1ad) vkb2_area_bottom_pane_g1

0xbbc2,	// (0x0001b1d3) vkb2_area_bottom_pane_g2_ParamLimits

0xbbc2,	// (0x0001b1d3) vkb2_area_bottom_pane_g2

0xbbf3,	// (0x0001b204) vkb2_area_bottom_pane_g3_ParamLimits

0xbbf3,	// (0x0001b204) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x0001f3b0) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x0001f3b0) vkb2_area_bottom_pane_g

0x18a7,	// (0x00010eb8) vkb2_top_cell_left_pane_ParamLimits

0x18a7,	// (0x00010eb8) vkb2_top_cell_left_pane

0xea89,	// (0x0001e09a) vkb2_top_entry_pane_g1_ParamLimits

0xea89,	// (0x0001e09a) vkb2_top_entry_pane_g1

0xea97,	// (0x0001e0a8) vkb2_top_entry_pane_t1_ParamLimits

0xea97,	// (0x0001e0a8) vkb2_top_entry_pane_t1

0x941a,	// (0x00018a2b) vkb2_top_entry_pane_t2_ParamLimits

0x941a,	// (0x00018a2b) vkb2_top_entry_pane_t2

0x944c,	// (0x00018a5d) vkb2_top_entry_pane_t3_ParamLimits

0x944c,	// (0x00018a5d) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x0001f3b7) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x0001f3b7) vkb2_top_entry_pane_t

0xbc5d,	// (0x0001b26e) vkb2_top_grid_right_pane_g1_ParamLimits

0xbc5d,	// (0x0001b26e) vkb2_top_grid_right_pane_g1

0x190a,	// (0x00010f1b) vkb2_top_grid_right_pane_g2_ParamLimits

0x190a,	// (0x00010f1b) vkb2_top_grid_right_pane_g2

0x1922,	// (0x00010f33) vkb2_top_grid_right_pane_g3_ParamLimits

0x1922,	// (0x00010f33) vkb2_top_grid_right_pane_g3

0xbc73,	// (0x0001b284) vkb2_top_grid_right_pane_g4_ParamLimits

0xbc73,	// (0x0001b284) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x0001f3be) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x0001f3be) vkb2_top_grid_right_pane_g

0x1950,	// (0x00010f61) vkb2_top_cell_left_pane_g1

0x1967,	// (0x00010f78) vkb2_cell_keypad_pane_g1_ParamLimits

0x1967,	// (0x00010f78) vkb2_cell_keypad_pane_g1

0x9470,	// (0x00018a81) vkb2_cell_keypad_pane_t1_ParamLimits

0x9470,	// (0x00018a81) vkb2_cell_keypad_pane_t1

0x1975,	// (0x00010f86) vkb2_cell_bottom_grid_pane_ParamLimits

0x1975,	// (0x00010f86) vkb2_cell_bottom_grid_pane

0x19ae,	// (0x00010fbf) vkb2_cell_bottom_grid_pane_g1

0xe733,	// (0x0001dd44) aid_call2_pane_cp02

0xe73b,	// (0x0001dd4c) aid_call_pane_cp02

0xe743,	// (0x0001dd54) clock_digital_number_pane_cp10

0xe74b,	// (0x0001dd5c) clock_digital_number_pane_cp11

0xe753,	// (0x0001dd64) clock_digital_number_pane_cp12

0xe75b,	// (0x0001dd6c) clock_digital_number_pane_cp13

0xe763,	// (0x0001dd74) clock_digital_separator_pane_cp10

0x336f,	// (0x00012980) popup_clock_digital_analogue_window_cp2_g1

0x336f,	// (0x00012980) popup_clock_digital_analogue_window_cp2_g2

0xe76b,	// (0x0001dd7c) popup_clock_digital_analogue_window_cp2_g3

0x336f,	// (0x00012980) popup_clock_digital_analogue_window_cp2_g4

0xe76b,	// (0x0001dd7c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x0001f373) popup_clock_digital_analogue_window_cp2_g

0xe773,	// (0x0001dd84) popup_clock_digital_analogue_window_cp2_t1

0xe781,	// (0x0001dd92) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x0001f37e) popup_clock_digital_analogue_window_cp2_t

0x7219,	// (0x0001682a) clock_digital_number_pane_cp10_g1

0x7219,	// (0x0001682a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x0001f15a) clock_digital_number_pane_cp10_g

0x7219,	// (0x0001682a) clock_digital_separator_pane_cp10_g1

0x7219,	// (0x0001682a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x0001f15a) clock_digital_separator_pane_cp10_g

0x8e97,	// (0x000184a8) uniindi_top_pane_g3

0x8ea8,	// (0x000184b9) uniindi_top_pane_g4

0x1788,	// (0x00010d99) vkb2_row_keypad_pane_ParamLimits

0x1788,	// (0x00010d99) vkb2_row_keypad_pane

0x19ca,	// (0x00010fdb) vkb2_cell_t_keypad_pane_ParamLimits

0x19ca,	// (0x00010fdb) vkb2_cell_t_keypad_pane

0x19da,	// (0x00010feb) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x19da,	// (0x00010feb) vkb2_cell_t_keypad_pane_cp08

0x19ed,	// (0x00010ffe) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x19ed,	// (0x00010ffe) vkb2_cell_t_keypad_pane_cp09

0x1a01,	// (0x00011012) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1a01,	// (0x00011012) vkb2_cell_t_keypad_pane_cp01

0x1a12,	// (0x00011023) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1a12,	// (0x00011023) vkb2_cell_t_keypad_pane_cp02

0x1a23,	// (0x00011034) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1a23,	// (0x00011034) vkb2_cell_t_keypad_pane_cp03

0x1a34,	// (0x00011045) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1a34,	// (0x00011045) vkb2_cell_t_keypad_pane_cp04

0x1a45,	// (0x00011056) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1a45,	// (0x00011056) vkb2_cell_t_keypad_pane_cp05

0x1a56,	// (0x00011067) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1a56,	// (0x00011067) vkb2_cell_t_keypad_pane_cp06

0x1a67,	// (0x00011078) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1a67,	// (0x00011078) vkb2_cell_t_keypad_pane_cp07

0x1a78,	// (0x00011089) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1a78,	// (0x00011089) vkb2_cell_t_keypad_pane_cp10

0x122d,	// (0x0001083e) vkb2_cell_t_keypad_pane_g1

0x9487,	// (0x00018a98) vkb2_cell_t_keypad_pane_t1

0x0223,	// (0x0000f834) popup_grid_graphic2_window

0xead0,	// (0x0001e0e1) aid_size_cell_graphic2_ParamLimits

0xead0,	// (0x0001e0e1) aid_size_cell_graphic2

0xeb0e,	// (0x0001e11f) bg_popup_window_pane_cp21_ParamLimits

0xeb0e,	// (0x0001e11f) bg_popup_window_pane_cp21

0xeb1c,	// (0x0001e12d) graphic2_pages_pane_ParamLimits

0xeb1c,	// (0x0001e12d) graphic2_pages_pane

0xeb72,	// (0x0001e183) grid_graphic2_control_pane_ParamLimits

0xeb72,	// (0x0001e183) grid_graphic2_control_pane

0xebba,	// (0x0001e1cb) grid_graphic2_pane_ParamLimits

0xebba,	// (0x0001e1cb) grid_graphic2_pane

0xec41,	// (0x0001e252) cell_graphic2_pane

0x1cb1,	// (0x000112c2) main_comp_mode_pane

0x86b4,	// (0x00017cc5) list_ai3_gene_pane_ParamLimits

0xe47a,	// (0x0001da8b) bg_popup_window_pane_cp19_ParamLimits

0x8aed,	// (0x000180fe) bg_touch_area_indi_pane_ParamLimits

0x8aed,	// (0x000180fe) bg_touch_area_indi_pane

0x8b03,	// (0x00018114) bg_touch_area_indi_pane_cp01_ParamLimits

0x8b03,	// (0x00018114) bg_touch_area_indi_pane_cp01

0x8b19,	// (0x0001812a) bg_touch_area_indi_pane_cp02_ParamLimits

0x8b19,	// (0x0001812a) bg_touch_area_indi_pane_cp02

0x8b31,	// (0x00018142) bg_touch_area_indi_pane_cp03_ParamLimits

0x8b31,	// (0x00018142) bg_touch_area_indi_pane_cp03

0x8b4b,	// (0x0001815c) popup_slider_window_g1_ParamLimits

0x8b67,	// (0x00018178) popup_slider_window_g2_ParamLimits

0x8b83,	// (0x00018194) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x0001f308) popup_slider_window_g_ParamLimits

0x8bdf,	// (0x000181f0) popup_slider_window_t1_ParamLimits

0x8c53,	// (0x00018264) small_volume_slider_vertical_pane_ParamLimits

0xec41,	// (0x0001e252) cell_graphic2_pane_ParamLimits

0xec9e,	// (0x0001e2af) bg_button_pane_cp10_ParamLimits

0xec9e,	// (0x0001e2af) bg_button_pane_cp10

0xecb1,	// (0x0001e2c2) bg_button_pane_cp11_ParamLimits

0xecb1,	// (0x0001e2c2) bg_button_pane_cp11

0xecc4,	// (0x0001e2d5) graphic2_pages_pane_g1_ParamLimits

0xecc4,	// (0x0001e2d5) graphic2_pages_pane_g1

0xecdf,	// (0x0001e2f0) graphic2_pages_pane_g2_ParamLimits

0xecdf,	// (0x0001e2f0) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x0001f3cc) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x0001f3cc) graphic2_pages_pane_g

0xecf7,	// (0x0001e308) graphic2_pages_pane_t1_ParamLimits

0xecf7,	// (0x0001e308) graphic2_pages_pane_t1

0xed0f,	// (0x0001e320) cell_graphic2_control_pane_ParamLimits

0xed0f,	// (0x0001e320) cell_graphic2_control_pane

0xed41,	// (0x0001e352) cell_graphic2_pane_g1_ParamLimits

0xed41,	// (0x0001e352) cell_graphic2_pane_g1

0xc72f,	// (0x0001bd40) cell_graphic2_pane_g2_ParamLimits

0xc72f,	// (0x0001bd40) cell_graphic2_pane_g2

0xea7c,	// (0x0001e08d) cell_graphic2_pane_g3_ParamLimits

0xea7c,	// (0x0001e08d) cell_graphic2_pane_g3

0xc73c,	// (0x0001bd4d) cell_graphic2_pane_g4_ParamLimits

0xc73c,	// (0x0001bd4d) cell_graphic2_pane_g4

0xed4e,	// (0x0001e35f) cell_graphic2_pane_g5_ParamLimits

0xed4e,	// (0x0001e35f) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x0001f3d1) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x0001f3d1) cell_graphic2_pane_g

0xed6e,	// (0x0001e37f) cell_graphic2_pane_t1_ParamLimits

0xed6e,	// (0x0001e37f) cell_graphic2_pane_t1

0x55e6,	// (0x00014bf7) grid_highlight_pane_cp11_ParamLimits

0x55e6,	// (0x00014bf7) grid_highlight_pane_cp11

0x2048,	// (0x00011659) bg_button_pane_cp05

0xeda3,	// (0x0001e3b4) cell_graphic2_control_pane_g1

0x7219,	// (0x0001682a) bg_touch_area_indi_pane_g1

0x9778,	// (0x00018d89) aid_cmod_rocker_key_size

0x9782,	// (0x00018d93) aid_cmode_itu_key_size

0x978c,	// (0x00018d9d) main_cmode_video_pane

0x9796,	// (0x00018da7) main_comp_mode_itu_pane

0x97a2,	// (0x00018db3) main_comp_mode_rocker_pane

0x97ae,	// (0x00018dbf) cell_cmode_rocker_pane_ParamLimits

0x97ae,	// (0x00018dbf) cell_cmode_rocker_pane

0x97c0,	// (0x00018dd1) cell_cmode_itu_pane_ParamLimits

0x97c0,	// (0x00018dd1) cell_cmode_itu_pane

0x2b8c,	// (0x0001219d) bg_button_pane_cp06_ParamLimits

0x2b8c,	// (0x0001219d) bg_button_pane_cp06

0x74ab,	// (0x00016abc) cell_cmode_rocker_pane_g1_ParamLimits

0x74ab,	// (0x00016abc) cell_cmode_rocker_pane_g1

0x8cf7,	// (0x00018308) cell_cmode_rocker_pane_g2_ParamLimits

0x8cf7,	// (0x00018308) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x0001f3e1) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x0001f3e1) cell_cmode_rocker_pane_g

0x1cb1,	// (0x000112c2) bg_button_pane_cp07

0x97d5,	// (0x00018de6) cell_cmode_itu_pane_g1

0x97de,	// (0x00018def) cell_cmode_itu_pane_t1

0x97ec,	// (0x00018dfd) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x0001f3e6) cell_cmode_itu_pane_t

0x8f1a,	// (0x0001852b) aid_touch_ctrl_left

0x8f22,	// (0x00018533) aid_touch_ctrl_right

0x1cb1,	// (0x000112c2) compa_mode_pane

0xedc9,	// (0x0001e3da) aid_cmod_rocker_key_size_cp

0xedd3,	// (0x0001e3e4) aid_cmode_itu_key_size_cp

0x980e,	// (0x00018e1f) compa_mode_pane_g1

0x9816,	// (0x00018e27) compa_mode_pane_g2

0x981e,	// (0x00018e2f) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x0001f3eb) compa_mode_pane_g

0xeddd,	// (0x0001e3ee) main_comp_mode_itu_pane_cp

0xede5,	// (0x0001e3f6) main_comp_mode_rocker_pane_cp

0xeded,	// (0x0001e3fe) cell_cmode_itu_pane_cp_ParamLimits

0xeded,	// (0x0001e3fe) cell_cmode_itu_pane_cp

0xee02,	// (0x0001e413) cell_cmode_rocker_pane_cp_ParamLimits

0xee02,	// (0x0001e413) cell_cmode_rocker_pane_cp

0x2b8c,	// (0x0001219d) bg_button_pane_cp06_cp_ParamLimits

0x2b8c,	// (0x0001219d) bg_button_pane_cp06_cp

0x74ab,	// (0x00016abc) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x74ab,	// (0x00016abc) cell_cmode_rocker_pane_g1_cp

0x7219,	// (0x0001682a) cell_cmode_rocker_pane_g2_cp

0x1cb1,	// (0x000112c2) bg_button_pane_cp07_cp

0xee14,	// (0x0001e425) cell_cmode_itu_pane_g1_cp

0xee1d,	// (0x0001e42e) cell_cmode_itu_pane_t1_cp

0xee1d,	// (0x0001e42e) cell_cmode_itu_pane_t2_cp

0xd8ac,	// (0x0001cebd) settings_code_pane_cp2

0x1da5,	// (0x000113b6) bg_popup_window_pane_cp3_ParamLimits

0x2222,	// (0x00011833) heading_pane_cp3_ParamLimits

0x222e,	// (0x0001183f) listscroll_popup_graphic_pane_ParamLimits

0x0fd6,	// (0x000105e7) fep_hwr_aid_pane_ParamLimits

0x144e,	// (0x00010a5f) aid_touch_sctrl_top_ParamLimits

0x1469,	// (0x00010a7a) sctrl_sk_top_pane_g1_ParamLimits

0x122d,	// (0x0001083e) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x0001f321) sctrl_sk_top_pane_g_ParamLimits

0x1476,	// (0x00010a87) sctrl_sk_top_pane_t1_ParamLimits

0x144e,	// (0x00010a5f) aid_touch_sctrl_bottom_ParamLimits

0x1476,	// (0x00010a87) sctrl_sk_bottom_pane_t1_ParamLimits

0x8e63,	// (0x00018474) aid_area_touch_clock

0xbaa1,	// (0x0001b0b2) aid_vkb2_area_top_pane_cell_ParamLimits

0xbaa1,	// (0x0001b0b2) aid_vkb2_area_top_pane_cell

0xbb4c,	// (0x0001b15d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbb4c,	// (0x0001b15d) aid_vkb2_area_bottom_pane_cell

0x93d2,	// (0x000189e3) popup_char_count_window

0x986b,	// (0x00018e7c) popup_char_count_window_g1

0x9874,	// (0x00018e85) popup_char_count_window_g2

0x987d,	// (0x00018e8e) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x0001f3f2) popup_char_count_window_g

0x9886,	// (0x00018e97) popup_char_count_window_t1

0x1525,	// (0x00010b36) popup_fep_char_preview_window_ParamLimits

0x1525,	// (0x00010b36) popup_fep_char_preview_window

0xbac1,	// (0x0001b0d2) vkb2_top_candi_pane_ParamLimits

0xbac1,	// (0x0001b0d2) vkb2_top_candi_pane

0xee2b,	// (0x0001e43c) cell_vkb2_top_candi_pane_ParamLimits

0xee2b,	// (0x0001e43c) cell_vkb2_top_candi_pane

0x1a8d,	// (0x0001109e) bg_popup_fep_char_preview_window_ParamLimits

0x1a8d,	// (0x0001109e) bg_popup_fep_char_preview_window

0x1a9b,	// (0x000110ac) popup_fep_char_preview_window_t1_ParamLimits

0x1a9b,	// (0x000110ac) popup_fep_char_preview_window_t1

0x98e1,	// (0x00018ef2) bg_popup_fep_char_preview_window_g1

0x98e9,	// (0x00018efa) bg_popup_fep_char_preview_window_g2

0x98f1,	// (0x00018f02) bg_popup_fep_char_preview_window_g3

0x98f9,	// (0x00018f0a) bg_popup_fep_char_preview_window_g4

0x9901,	// (0x00018f12) bg_popup_fep_char_preview_window_g5

0x1ad5,	// (0x000110e6) bg_popup_fep_char_preview_window_g6

0x9909,	// (0x00018f1a) bg_popup_fep_char_preview_window_g7

0x9911,	// (0x00018f22) bg_popup_fep_char_preview_window_g8

0x9919,	// (0x00018f2a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x0001f3f9) bg_popup_fep_char_preview_window_g

0x122d,	// (0x0001083e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x122d,	// (0x0001083e) cell_vkb2_top_candi_pane_g1

0x123b,	// (0x0001084c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x123b,	// (0x0001084c) cell_vkb2_top_candi_pane_g2

0x9625,	// (0x00018c36) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9625,	// (0x00018c36) cell_vkb2_top_candi_pane_g3

0x1add,	// (0x000110ee) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1add,	// (0x000110ee) cell_vkb2_top_candi_pane_g4

0x7b2f,	// (0x00017140) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7b2f,	// (0x00017140) cell_vkb2_top_candi_pane_g5

0x1afe,	// (0x0001110f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1afe,	// (0x0001110f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x0001f40c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x0001f40c) cell_vkb2_top_candi_pane_g

0x1b0c,	// (0x0001111d) cell_vkb2_top_candi_pane_t1

0x0e36,	// (0x00010447) aid_size_touch_slider_mark_ParamLimits

0x0e36,	// (0x00010447) aid_size_touch_slider_mark

0xeb58,	// (0x0001e169) grid_graphic2_catg_pane_ParamLimits

0xeb58,	// (0x0001e169) grid_graphic2_catg_pane

0xec14,	// (0x0001e225) popup_grid_graphic2_window_t1_ParamLimits

0xec14,	// (0x0001e225) popup_grid_graphic2_window_t1

0xec2a,	// (0x0001e23b) popup_grid_graphic2_window_t2_ParamLimits

0xec2a,	// (0x0001e23b) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x0001f3c7) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x0001f3c7) popup_grid_graphic2_window_t

0x2048,	// (0x00011659) bg_button_pane_cp05_ParamLimits

0xeda3,	// (0x0001e3b4) cell_graphic2_control_pane_g1_ParamLimits

0xee91,	// (0x0001e4a2) cell_graphic2_catg_pane_ParamLimits

0xee91,	// (0x0001e4a2) cell_graphic2_catg_pane

0x1cb1,	// (0x000112c2) bg_button_pane_cp12

0xeea3,	// (0x0001e4b4) cell_graphic2_catg_pane_g1

0x8e2f,	// (0x00018440) cell_tb_ext_pane_t1_ParamLimits

0x18c7,	// (0x00010ed8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x18c7,	// (0x00010ed8) vkb2_top_cell_right_narrow_pane

0x18df,	// (0x00010ef0) vkb2_top_cell_right_wide_pane_ParamLimits

0x18df,	// (0x00010ef0) vkb2_top_cell_right_wide_pane

0x0fc8,	// (0x000105d9) bg_vkb2_func_pane_ParamLimits

0x0fc8,	// (0x000105d9) bg_vkb2_func_pane

0x1950,	// (0x00010f61) vkb2_top_cell_left_pane_g1_ParamLimits

0x0fc8,	// (0x000105d9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0fc8,	// (0x000105d9) bg_vkb2_fuc_pane_cp03

0x19ae,	// (0x00010fbf) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4845,	// (0x00013e56) bg_vkb2_func_pane_g1

0x484d,	// (0x00013e5e) bg_vkb2_func_pane_g2

0x485d,	// (0x00013e6e) bg_vkb2_func_pane_g3

0x4855,	// (0x00013e66) bg_vkb2_func_pane_g4

0x4865,	// (0x00013e76) bg_vkb2_func_pane_g5

0x486d,	// (0x00013e7e) bg_vkb2_func_pane_g6

0x4875,	// (0x00013e86) bg_vkb2_func_pane_g7

0x487d,	// (0x00013e8e) bg_vkb2_func_pane_g8

0x483d,	// (0x00013e4e) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x0001f419) bg_vkb2_func_pane_g

0x0fc8,	// (0x000105d9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0fc8,	// (0x000105d9) bg_vkb2_fuc_pane_cp01

0x1950,	// (0x00010f61) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1950,	// (0x00010f61) vkb2_top_cell_right_wide_pane_g1

0x0fc8,	// (0x000105d9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0fc8,	// (0x000105d9) bg_vkb2_fuc_pane_cp02

0x19ae,	// (0x00010fbf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x19ae,	// (0x00010fbf) vkb2_top_cell_right_narrow_pane_g1

0xe3ba,	// (0x0001d9cb) aid_touch_area_decrease_ParamLimits

0xe3ba,	// (0x0001d9cb) aid_touch_area_decrease

0xe3ee,	// (0x0001d9ff) aid_touch_area_increase_ParamLimits

0xe3ee,	// (0x0001d9ff) aid_touch_area_increase

0xe416,	// (0x0001da27) aid_touch_area_mute_ParamLimits

0xe416,	// (0x0001da27) aid_touch_area_mute

0xe446,	// (0x0001da57) aid_touch_area_slider_ParamLimits

0xe446,	// (0x0001da57) aid_touch_area_slider

0xe486,	// (0x0001da97) popup_slider_window_g4_ParamLimits

0xe486,	// (0x0001da97) popup_slider_window_g4

0xe4ae,	// (0x0001dabf) popup_slider_window_g5_ParamLimits

0xe4ae,	// (0x0001dabf) popup_slider_window_g5

0xe4e2,	// (0x0001daf3) popup_slider_window_g6_ParamLimits

0xe4e2,	// (0x0001daf3) popup_slider_window_g6

0x8c0d,	// (0x0001821e) popup_slider_window_t2_ParamLimits

0x8c0d,	// (0x0001821e) popup_slider_window_t2

0x0001,

0xfd04,	// (0x0001f315) popup_slider_window_t_ParamLimits

0xfd04,	// (0x0001f315) popup_slider_window_t

0xe4fe,	// (0x0001db0f) slider_pane_ParamLimits

0xe4fe,	// (0x0001db0f) slider_pane

0x993c,	// (0x00018f4d) slider_pane_g1_ParamLimits

0x993c,	// (0x00018f4d) slider_pane_g1

0x9950,	// (0x00018f61) slider_pane_g2_ParamLimits

0x9950,	// (0x00018f61) slider_pane_g2

0x9966,	// (0x00018f77) slider_pane_g3_ParamLimits

0x9966,	// (0x00018f77) slider_pane_g3

0x0003,

0xfe1b,	// (0x0001f42c) slider_pane_g_ParamLimits

0xfe1b,	// (0x0001f42c) slider_pane_g

0xd04d,	// (0x0001c65e) popup_tb_float_extension_window_ParamLimits

0xd04d,	// (0x0001c65e) popup_tb_float_extension_window

0x9992,	// (0x00018fa3) aid_size_cell_tb_float_ext

0x1cb1,	// (0x000112c2) bg_popup_sub_window_cp28

0x999e,	// (0x00018faf) grid_tb_float_ext_pane

0x99a8,	// (0x00018fb9) cell_tb_float_ext_pane_ParamLimits

0x99a8,	// (0x00018fb9) cell_tb_float_ext_pane

0x99c2,	// (0x00018fd3) cell_tb_float_ext_pane_g1

0x99cb,	// (0x00018fdc) grid_highlight_pane_cp12

0xb8aa,	// (0x0001aebb) cell_last_hwr_side_pane_ParamLimits

0xb8aa,	// (0x0001aebb) cell_last_hwr_side_pane

0x7219,	// (0x0001682a) cell_last_hwr_side_pane_g1

0x99d4,	// (0x00018fe5) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x0001f435) cell_last_hwr_side_pane_g

0xbc28,	// (0x0001b239) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbc28,	// (0x0001b239) vkb2_area_bottom_space_btn_pane

0x122d,	// (0x0001083e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9487,	// (0x00018a98) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1b0c,	// (0x0001111d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1b2b,	// (0x0001113c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1b2b,	// (0x0001113c) vkb2_area_bottom_space_btn_pane_g1

0x1b65,	// (0x00011176) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1b65,	// (0x00011176) vkb2_area_bottom_space_btn_pane_g2

0x1b9b,	// (0x000111ac) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1b9b,	// (0x000111ac) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x0001f43a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x0001f43a) vkb2_area_bottom_space_btn_pane_g

0x108b,	// (0x0001069c) cel_fep_hwr_func_pane_ParamLimits

0x108b,	// (0x0001069c) cel_fep_hwr_func_pane

0xb87f,	// (0x0001ae90) cell_hwr_side_button_pane_ParamLimits

0xb87f,	// (0x0001ae90) cell_hwr_side_button_pane

0x8e63,	// (0x00018474) aid_area_touch_clock_ParamLimits

0x2048,	// (0x00011659) bg_uniindi_top_pane_ParamLimits

0x8e75,	// (0x00018486) uniindi_top_pane_g1_ParamLimits

0x8e8b,	// (0x0001849c) uniindi_top_pane_g2_ParamLimits

0x8e97,	// (0x000184a8) uniindi_top_pane_g3_ParamLimits

0x8ea8,	// (0x000184b9) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x0001f34d) uniindi_top_pane_g_ParamLimits

0x8eb5,	// (0x000184c6) uniindi_top_pane_t1_ParamLimits

0x2048,	// (0x00011659) bg_vkb2_func_pane_cp01_ParamLimits

0x2048,	// (0x00011659) bg_vkb2_func_pane_cp01

0x99dd,	// (0x00018fee) cel_fep_hwr_func_pane_g1_ParamLimits

0x99dd,	// (0x00018fee) cel_fep_hwr_func_pane_g1

0x2048,	// (0x00011659) bg_vkb2_func_pane_cp02_ParamLimits

0x2048,	// (0x00011659) bg_vkb2_func_pane_cp02

0x99dd,	// (0x00018fee) cell_hwr_side_button_pane_g1_ParamLimits

0x99dd,	// (0x00018fee) cell_hwr_side_button_pane_g1

0x4684,	// (0x00013c95) status_pane_g4_ParamLimits

0x4684,	// (0x00013c95) status_pane_g4

0x469e,	// (0x00013caf) status_pane_t1

0x6f52,	// (0x00016563) form2_midp_gauge_slider_cont_pane

0x6f5a,	// (0x0001656b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdc09,	// (0x0001d21a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdc1b,	// (0x0001d22c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x0001f10d) form2_midp_gauge_slider_pane_t_ParamLimits

0x6f90,	// (0x000165a1) form2_midp_slider_pane_ParamLimits

0x14e5,	// (0x00010af6) aid_size_cell_func_vkb2_ParamLimits

0x14e5,	// (0x00010af6) aid_size_cell_func_vkb2

0x997e,	// (0x00018f8f) slider_pane_g4_ParamLimits

0x997e,	// (0x00018f8f) slider_pane_g4

0xbc89,	// (0x0001b29a) form2_midp_gauge_slider_pane_t2_cp01

0xbc97,	// (0x0001b2a8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbc97,	// (0x0001b2a8) form2_midp_gauge_slider_pane_t3_cp01

0x1c10,	// (0x00011221) form2_midp_slider_pane_cp01

0x1cb1,	// (0x000112c2) navi_smil_pane

0x9a16,	// (0x00019027) navi_smil_pane_g1

0x9a1e,	// (0x0001902f) navi_smil_pane_t1

0x99eb,	// (0x00018ffc) form2_midp_slider_pane_g1

0x99f4,	// (0x00019005) form2_midp_slider_pane_g2

0x99fc,	// (0x0001900d) form2_midp_slider_pane_g3

0x99eb,	// (0x00018ffc) form2_midp_slider_pane_g4

0xeeac,	// (0x0001e4bd) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x0001f443) form2_midp_slider_pane_g

0x1bd5,	// (0x000111e6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1bd5,	// (0x000111e6) vkb2_area_bottom_space_btn_pane_g4

0xd229,	// (0x0001c83a) lc0_navi_pane_ParamLimits

0xd229,	// (0x0001c83a) lc0_navi_pane

0xd293,	// (0x0001c8a4) lc0_stat_indi_pane_ParamLimits

0xd293,	// (0x0001c8a4) lc0_stat_indi_pane

0xd2a8,	// (0x0001c8b9) ls0_title_pane_ParamLimits

0xd2a8,	// (0x0001c8b9) ls0_title_pane

0x2b8c,	// (0x0001219d) bg_popup_sub_pane_cp14_ParamLimits

0x8e4a,	// (0x0001845b) list_uniindi_pane_ParamLimits

0x8e56,	// (0x00018467) uniindi_top_pane_ParamLimits

0x8ef2,	// (0x00018503) list_single_uniindi_pane_g1_ParamLimits

0x8f05,	// (0x00018516) list_single_uniindi_pane_t1_ParamLimits

0xbcb4,	// (0x0001b2c5) lc0_stat_clock_pane_ParamLimits

0xbcb4,	// (0x0001b2c5) lc0_stat_clock_pane

0xeeb5,	// (0x0001e4c6) lc0_stat_indi_pane_g1_ParamLimits

0xeeb5,	// (0x0001e4c6) lc0_stat_indi_pane_g1

0xeec2,	// (0x0001e4d3) lc0_stat_indi_pane_g2_ParamLimits

0xeec2,	// (0x0001e4d3) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x0001f44e) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x0001f44e) lc0_stat_indi_pane_g

0xbcc1,	// (0x0001b2d2) lc0_uni_indicator_pane_ParamLimits

0xbcc1,	// (0x0001b2d2) lc0_uni_indicator_pane

0x9a46,	// (0x00019057) ls0_title_pane_g1_ParamLimits

0x9a46,	// (0x00019057) ls0_title_pane_g1

0xeecf,	// (0x0001e4e0) ls0_title_pane_t1_ParamLimits

0xeecf,	// (0x0001e4e0) ls0_title_pane_t1

0xbcce,	// (0x0001b2df) lc0_uni_indicator_pane_g1_ParamLimits

0xbcce,	// (0x0001b2df) lc0_uni_indicator_pane_g1

0x9a90,	// (0x000190a1) lc0_stat_clock_pane_t1

0x1cb1,	// (0x000112c2) main_ai5_pane

0x9a9e,	// (0x000190af) ai5_sk_pane_ParamLimits

0x9a9e,	// (0x000190af) ai5_sk_pane

0xeefd,	// (0x0001e50e) cell_ai5_widget_pane_ParamLimits

0xeefd,	// (0x0001e50e) cell_ai5_widget_pane

0x9b2d,	// (0x0001913e) aid_size_cell_widget_grid

0x9b41,	// (0x00019152) bg_ai5_widget_pane_ParamLimits

0x9b41,	// (0x00019152) bg_ai5_widget_pane

0xef86,	// (0x0001e597) cell_ai5_widget_pane_g2

0xef96,	// (0x0001e5a7) cell_ai5_widget_pane_g3

0xefb5,	// (0x0001e5c6) cell_ai5_widget_pane_g4

0xefc1,	// (0x0001e5d2) cell_ai5_widget_pane_g5

0xefcd,	// (0x0001e5de) cell_ai5_widget_pane_g6

0xefd9,	// (0x0001e5ea) cell_ai5_widget_pane_g7

0xf021,	// (0x0001e632) cell_ai5_widget_pane_t1_ParamLimits

0xf021,	// (0x0001e632) cell_ai5_widget_pane_t1

0xf03e,	// (0x0001e64f) cell_ai5_widget_pane_t2_ParamLimits

0xf03e,	// (0x0001e64f) cell_ai5_widget_pane_t2

0xf056,	// (0x0001e667) cell_ai5_widget_pane_t3_ParamLimits

0xf056,	// (0x0001e667) cell_ai5_widget_pane_t3

0xf06e,	// (0x0001e67f) cell_ai5_widget_pane_t4_ParamLimits

0xf06e,	// (0x0001e67f) cell_ai5_widget_pane_t4

0xf088,	// (0x0001e699) cell_ai5_widget_pane_t5_ParamLimits

0xf088,	// (0x0001e699) cell_ai5_widget_pane_t5

0x9c8a,	// (0x0001929b) cell_ai5_widget_pane_t6_ParamLimits

0x9c8a,	// (0x0001929b) cell_ai5_widget_pane_t6

0x9c9c,	// (0x000192ad) cell_ai5_widget_pane_t7_ParamLimits

0x9c9c,	// (0x000192ad) cell_ai5_widget_pane_t7

0xf0a7,	// (0x0001e6b8) cell_ai5_widget_pane_t8_ParamLimits

0xf0a7,	// (0x0001e6b8) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x0001f468) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x0001f468) cell_ai5_widget_pane_t

0xf0f3,	// (0x0001e704) grid_ai5_widget_pane

0x2b8c,	// (0x0001219d) highlight_cell_ai5_widget_pane_ParamLimits

0x2b8c,	// (0x0001219d) highlight_cell_ai5_widget_pane

0xf10b,	// (0x0001e71c) ai5_sk_left_pane

0xf115,	// (0x0001e726) ai5_sk_middle_pane

0xf11f,	// (0x0001e730) ai5_sk_right_pane

0x9d37,	// (0x00019348) bg_ai5_widget_pane_g1_ParamLimits

0x9d37,	// (0x00019348) bg_ai5_widget_pane_g1

0x9d43,	// (0x00019354) bg_ai5_widget_pane_g2_ParamLimits

0x9d43,	// (0x00019354) bg_ai5_widget_pane_g2

0x9d4f,	// (0x00019360) bg_ai5_widget_pane_g3_ParamLimits

0x9d4f,	// (0x00019360) bg_ai5_widget_pane_g3

0x9d5b,	// (0x0001936c) bg_ai5_widget_pane_g4_ParamLimits

0x9d5b,	// (0x0001936c) bg_ai5_widget_pane_g4

0x9d67,	// (0x00019378) bg_ai5_widget_pane_g5_ParamLimits

0x9d67,	// (0x00019378) bg_ai5_widget_pane_g5

0x9d73,	// (0x00019384) bg_ai5_widget_pane_g6_ParamLimits

0x9d73,	// (0x00019384) bg_ai5_widget_pane_g6

0x9d7f,	// (0x00019390) bg_ai5_widget_pane_g7_ParamLimits

0x9d7f,	// (0x00019390) bg_ai5_widget_pane_g7

0x9d8b,	// (0x0001939c) bg_ai5_widget_pane_g8_ParamLimits

0x9d8b,	// (0x0001939c) bg_ai5_widget_pane_g8

0x9d97,	// (0x000193a8) bg_ai5_widget_pane_g9_ParamLimits

0x9d97,	// (0x000193a8) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x0001f47d) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x0001f47d) bg_ai5_widget_pane_g

0x9dca,	// (0x000193db) cell_shortcut_ai5_widget_pane_ParamLimits

0x9dca,	// (0x000193db) cell_shortcut_ai5_widget_pane

0x1e88,	// (0x00011499) bg_cell_shortcut_ai5_widget_pane

0x9ddb,	// (0x000193ec) cell_grid_ai5_widget_pane_g1

0x9de4,	// (0x000193f5) highlight_cell_shortcut_ai5_widget_pane

0x4845,	// (0x00013e56) ai5_sk_left_pane_g1

0x9dec,	// (0x000193fd) ai5_sk_left_pane_g2

0x9df4,	// (0x00019405) ai5_sk_left_pane_g3

0x9dfc,	// (0x0001940d) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x0001f490) ai5_sk_left_pane_g

0x9e04,	// (0x00019415) ai5_sk_left_pane_t1

0x484d,	// (0x00013e5e) ai5_sk_right_pane_g1

0x9e12,	// (0x00019423) ai5_sk_right_pane_g2

0x9e1a,	// (0x0001942b) ai5_sk_right_pane_g3

0x9e22,	// (0x00019433) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x0001f499) ai5_sk_right_pane_g

0x9e2a,	// (0x0001943b) ai5_sk_right_pane_t1

0x484d,	// (0x00013e5e) ai5_sk_middle_pane_g1

0x4845,	// (0x00013e56) ai5_sk_middle_pane_g2

0x4865,	// (0x00013e76) ai5_sk_middle_pane_g3

0x9e1a,	// (0x0001942b) ai5_sk_middle_pane_g4

0x9df4,	// (0x00019405) ai5_sk_middle_pane_g5

0x9e38,	// (0x00019449) ai5_sk_middle_pane_g6

0xf129,	// (0x0001e73a) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x0001f4a2) ai5_sk_middle_pane_g

0xd115,	// (0x0001c726) aid_touch_area_size_lc0_ParamLimits

0xd115,	// (0x0001c726) aid_touch_area_size_lc0

0x125c,	// (0x0001086d) cell_hwr_candidate_pane_t1_ParamLimits

0x4366,	// (0x00013977) aid_touch_navi_pane

0xd39a,	// (0x0001c9ab) status_dt_navi_pane_ParamLimits

0xd39a,	// (0x0001c9ab) status_dt_navi_pane

0xd3b2,	// (0x0001c9c3) status_dt_sta_pane_ParamLimits

0xd3b2,	// (0x0001c9c3) status_dt_sta_pane

0xf131,	// (0x0001e742) dt_sta_controll_pane

0xf13e,	// (0x0001e74f) dt_sta_indi_pane

0xf14b,	// (0x0001e75c) dt_sta_title_pane

0x2048,	// (0x00011659) bg_dt_sta_indi_pane_ParamLimits

0x2048,	// (0x00011659) bg_dt_sta_indi_pane

0x9e79,	// (0x0001948a) dt_sta_battery_pane

0xf15d,	// (0x0001e76e) dt_sta_indi_pane_g1

0xf166,	// (0x0001e777) dt_sta_indi_pane_g2

0xf16f,	// (0x0001e780) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x0001f4b1) dt_sta_indi_pane_g

0xf178,	// (0x0001e789) dt_sta_signal_pane

0x2b8c,	// (0x0001219d) bg_dt_sta_title_pane_ParamLimits

0x2b8c,	// (0x0001219d) bg_dt_sta_title_pane

0x5746,	// (0x00014d57) dt_sta_title_pane_g1

0xf181,	// (0x0001e792) dt_sta_title_pane_t1_ParamLimits

0xf181,	// (0x0001e792) dt_sta_title_pane_t1

0x1cb1,	// (0x000112c2) bg_dt_sta_control_pane

0xf196,	// (0x0001e7a7) dt_sta_controll_pane_g1

0xf19f,	// (0x0001e7b0) bg_dt_sta_title_pane_g1

0xf1a8,	// (0x0001e7b9) bg_dt_sta_title_pane_g2

0xf1b1,	// (0x0001e7c2) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x0001f4b8) bg_dt_sta_title_pane_g

0x7219,	// (0x0001682a) bg_dt_sta_indi_pane_g1

0x9ee6,	// (0x000194f7) dt_sta_signal_pane_g1

0x9eee,	// (0x000194ff) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x0001f4bf) dt_sta_signal_pane_g

0x9ef6,	// (0x00019507) dt_sta_battery_pane_g1

0x9eff,	// (0x00019510) dt_sta_battery_pane_t1

0x7219,	// (0x0001682a) bg_dt_sta_control_pane_g1

0x3456,	// (0x00012a67) fep_china_uni_eep_pane

0x345e,	// (0x00012a6f) fep_china_uni_entry_pane_ParamLimits

0x346e,	// (0x00012a7f) popup_fep_china_uni_window_g1_ParamLimits

0x347e,	// (0x00012a8f) popup_fep_china_uni_window_g2_ParamLimits

0x347e,	// (0x00012a8f) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001ed41) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001ed41) popup_fep_china_uni_window_g

0x9f0e,	// (0x0001951f) fep_china_uni_eep_pane_g1

0x9f16,	// (0x00019527) fep_china_uni_eep_pane_t1

0x9a0d,	// (0x0001901e) aid_touch_area_size_smil_player

0x44b2,	// (0x00013ac3) lc0_clock_pane

0x4692,	// (0x00013ca3) status_pane_g5_ParamLimits

0x4692,	// (0x00013ca3) status_pane_g5

0xcbf3,	// (0x0001c204) popup_keymap_window

0x4650,	// (0x00013c61) status_icon_pane

0xef96,	// (0x0001e5a7) cell_ai5_widget_pane_g3_ParamLimits

0xefb5,	// (0x0001e5c6) cell_ai5_widget_pane_g4_ParamLimits

0xefc1,	// (0x0001e5d2) cell_ai5_widget_pane_g5_ParamLimits

0xefe5,	// (0x0001e5f6) cell_ai5_widget_pane_g8_ParamLimits

0xefe5,	// (0x0001e5f6) cell_ai5_widget_pane_g8

0xeff9,	// (0x0001e60a) cell_ai5_widget_pane_g9_ParamLimits

0xeff9,	// (0x0001e60a) cell_ai5_widget_pane_g9

0xf00d,	// (0x0001e61e) cell_ai5_widget_pane_g10_ParamLimits

0xf00d,	// (0x0001e61e) cell_ai5_widget_pane_g10

0x9f25,	// (0x00019536) status_icon_pane_g1

0x1cb1,	// (0x000112c2) bg_popup_sub_pane_cp13

0x9f2d,	// (0x0001953e) popup_keymap_window_t1

0xca02,	// (0x0001c013) control_pane_g6_ParamLimits

0xca02,	// (0x0001c013) control_pane_g6

0xca0f,	// (0x0001c020) control_pane_g7_ParamLimits

0xca0f,	// (0x0001c020) control_pane_g7

0xca1c,	// (0x0001c02d) control_pane_g8_ParamLimits

0xca1c,	// (0x0001c02d) control_pane_g8

0xf131,	// (0x0001e742) dt_sta_controll_pane_ParamLimits

0xf13e,	// (0x0001e74f) dt_sta_indi_pane_ParamLimits

0xf14b,	// (0x0001e75c) dt_sta_title_pane_ParamLimits

0x2563,	// (0x00011b74) aid_size_touch_scroll_bar_cale

0x02fc,	// (0x0000f90d) popup_discreet_window_ParamLimits

0x02fc,	// (0x0000f90d) popup_discreet_window

0xb4e3,	// (0x0001aaf4) popup_sk_window

0x4f72,	// (0x00014583) bg_popup_sub_pane_cp28_ParamLimits

0x4f72,	// (0x00014583) bg_popup_sub_pane_cp28

0x9f3b,	// (0x0001954c) popup_discreet_window_g1_ParamLimits

0x9f3b,	// (0x0001954c) popup_discreet_window_g1

0x9f5b,	// (0x0001956c) popup_discreet_window_t1_ParamLimits

0x9f5b,	// (0x0001956c) popup_discreet_window_t1

0x9f79,	// (0x0001958a) popup_discreet_window_t2_ParamLimits

0x9f79,	// (0x0001958a) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x0001f4c4) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x0001f4c4) popup_discreet_window_t

0x1c47,	// (0x00011258) popup_sk_window_g1

0x1c51,	// (0x00011262) popup_sk_window_g2

0x0001,

0xfeba,	// (0x0001f4cb) popup_sk_window_g

0x9fcb,	// (0x000195dc) popup_sk_window_t1

0x9fd9,	// (0x000195ea) popup_sk_window_t1_copy1

0xef86,	// (0x0001e597) cell_ai5_widget_pane_g2_ParamLimits

0xf0b9,	// (0x0001e6ca) cell_ai5_widget_pane_t9_ParamLimits

0xf0b9,	// (0x0001e6ca) cell_ai5_widget_pane_t9

0x1cb1,	// (0x000112c2) main_fep_fshwr2_pane

0xf1ba,	// (0x0001e7cb) aid_fshwr2_btn_pane

0xf1c2,	// (0x0001e7d3) aid_fshwr2_syb_pane

0xf1ca,	// (0x0001e7db) aid_fshwr2_txt_pane

0xf1d2,	// (0x0001e7e3) fshwr2_func_candi_pane

0xf1dc,	// (0x0001e7ed) fshwr2_hwr_syb_pane

0xf1ea,	// (0x0001e7fb) fshwr2_icf_pane

0x1cb1,	// (0x000112c2) fshwr2_icf_bg_pane

0xf1f4,	// (0x0001e805) fshwr2_icf_pane_t1_ParamLimits

0xf1f4,	// (0x0001e805) fshwr2_icf_pane_t1

0x7219,	// (0x0001682a) fshwr2_func_candi_pane_g1

0xa04c,	// (0x0001965d) fshwr2_func_candi_row_pane_ParamLimits

0xa04c,	// (0x0001965d) fshwr2_func_candi_row_pane

0xf20c,	// (0x0001e81d) cell_fshwr2_syb_pane_ParamLimits

0xf20c,	// (0x0001e81d) cell_fshwr2_syb_pane

0x74ab,	// (0x00016abc) fshwr2_hwr_syb_pane_g1_ParamLimits

0x74ab,	// (0x00016abc) fshwr2_hwr_syb_pane_g1

0x1cb1,	// (0x000112c2) bg_popup_call_pane_cp01

0xa077,	// (0x00019688) fshwr2_func_candi_cell_pane_ParamLimits

0xa077,	// (0x00019688) fshwr2_func_candi_cell_pane

0xa0a8,	// (0x000196b9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa0a8,	// (0x000196b9) fshwr2_func_candi_cell_bg_pane

0xa0c2,	// (0x000196d3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa0c2,	// (0x000196d3) fshwr2_func_candi_cell_pane_g1

0xa0ea,	// (0x000196fb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa0ea,	// (0x000196fb) fshwr2_func_candi_cell_pane_t1

0x1cb1,	// (0x000112c2) bg_button_pane_cp08

0x39db,	// (0x00012fec) cell_fshwr2_syb_bg_pane

0xf226,	// (0x0001e837) cell_fshwr2_syb_bg_pane_g1

0xf22e,	// (0x0001e83f) cell_fshwr2_syb_bg_pane_t1

0x2b8c,	// (0x0001219d) main_tmo_pane

0xd6cb,	// (0x0001ccdc) uni_indicator_pane_g1_ParamLimits

0xd6e0,	// (0x0001ccf1) uni_indicator_pane_g2_ParamLimits

0xd6f5,	// (0x0001cd06) uni_indicator_pane_g3_ParamLimits

0x5ac8,	// (0x000150d9) uni_indicator_pane_g4_ParamLimits

0x5ac8,	// (0x000150d9) uni_indicator_pane_g4

0x5adc,	// (0x000150ed) uni_indicator_pane_g5_ParamLimits

0x5adc,	// (0x000150ed) uni_indicator_pane_g5

0x5af0,	// (0x00015101) uni_indicator_pane_g6_ParamLimits

0x5af0,	// (0x00015101) uni_indicator_pane_g6

0xf928,	// (0x0001ef39) uni_indicator_pane_g_ParamLimits

0xe396,	// (0x0001d9a7) popup_tmo_note_window_ParamLimits

0xe396,	// (0x0001d9a7) popup_tmo_note_window

0x1cb1,	// (0x000112c2) fshwr2_bg_pane

0xa0db,	// (0x000196ec) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa0db,	// (0x000196ec) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x0001f4d0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x0001f4d0) fshwr2_func_candi_cell_pane_g

0x7219,	// (0x0001682a) bg_popup_window_pane_cp01

0xa114,	// (0x00019725) bg_popup_window_pane_g1_cp01

0xa11d,	// (0x0001972e) bg_popup_window_pane_cp22_ParamLimits

0xa11d,	// (0x0001972e) bg_popup_window_pane_cp22

0xa12b,	// (0x0001973c) listscroll_tmo_link_pane_ParamLimits

0xa12b,	// (0x0001973c) listscroll_tmo_link_pane

0xa16b,	// (0x0001977c) popup_tmo_note_window_g1_ParamLimits

0xa16b,	// (0x0001977c) popup_tmo_note_window_g1

0xa178,	// (0x00019789) tmo_note_info_pane_ParamLimits

0xa178,	// (0x00019789) tmo_note_info_pane

0xf23d,	// (0x0001e84e) list_tmo_note_info_pane_g1_ParamLimits

0xf23d,	// (0x0001e84e) list_tmo_note_info_pane_g1

0xa1a9,	// (0x000197ba) list_tmo_note_info_pane_g2_ParamLimits

0xa1a9,	// (0x000197ba) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x0001f4d5) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x0001f4d5) list_tmo_note_info_pane_g

0xa1c5,	// (0x000197d6) list_tmo_note_info_text_pane_ParamLimits

0xa1c5,	// (0x000197d6) list_tmo_note_info_text_pane

0xa246,	// (0x00019857) list_tmo_link_pane

0xa253,	// (0x00019864) scroll_pane_cp20

0xa260,	// (0x00019871) list_single_tmo_link_pane_ParamLimits

0xa260,	// (0x00019871) list_single_tmo_link_pane

0xa270,	// (0x00019881) list_single_tmo_link_pane_t1

0xa27e,	// (0x0001988f) list_tmo_note_info_text_pane_t1_ParamLimits

0xa27e,	// (0x0001988f) list_tmo_note_info_text_pane_t1

0xc63f,	// (0x0001bc50) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc63f,	// (0x0001bc50) aid_size_touch_scroll_bar_cp01

0xc55e,	// (0x0001bb6f) aid_size_touch_slider_marker

0xb4d3,	// (0x0001aae4) popup_settings_window_ParamLimits

0xb4d3,	// (0x0001aae4) popup_settings_window

0x3d8d,	// (0x0001339e) popup_candi_list_indi_window

0x4366,	// (0x00013977) aid_touch_navi_pane_ParamLimits

0x1422,	// (0x00010a33) rs_clock_indi_pane

0x142b,	// (0x00010a3c) sctrl_sk_bottom_pane_ParamLimits

0x143c,	// (0x00010a4d) sctrl_sk_top_pane_ParamLimits

0x153f,	// (0x00010b50) popup_fep_tooltip_window

0x9b2d,	// (0x0001913e) aid_size_cell_widget_grid_ParamLimits

0xef7a,	// (0x0001e58b) cell_ai5_widget_pane_g1_ParamLimits

0xef7a,	// (0x0001e58b) cell_ai5_widget_pane_g1

0xefcd,	// (0x0001e5de) cell_ai5_widget_pane_g6_ParamLimits

0xefd9,	// (0x0001e5ea) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x0001f453) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x0001f453) cell_ai5_widget_pane_g

0xf0dd,	// (0x0001e6ee) cell_ai5_widget_pane_t10_ParamLimits

0xf0dd,	// (0x0001e6ee) cell_ai5_widget_pane_t10

0xf0f3,	// (0x0001e704) grid_ai5_widget_pane_ParamLimits

0x9da3,	// (0x000193b4) cell_contacts_ai5_widget_pane_ParamLimits

0x9da3,	// (0x000193b4) cell_contacts_ai5_widget_pane

0x9f8e,	// (0x0001959f) popup_discreet_window_t3_ParamLimits

0x9f8e,	// (0x0001959f) popup_discreet_window_t3

0xa021,	// (0x00019632) popup_fshwr2_char_preview_window_ParamLimits

0xa021,	// (0x00019632) popup_fshwr2_char_preview_window

0xf254,	// (0x0001e865) tmo_note_info_pane_t1

0xf269,	// (0x0001e87a) tmo_note_info_pane_t2

0xf280,	// (0x0001e891) tmo_note_info_pane_t3

0xa222,	// (0x00019833) tmo_note_info_pane_t4

0xa234,	// (0x00019845) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x0001f4da) tmo_note_info_pane_t

0xa246,	// (0x00019857) list_tmo_link_pane_ParamLimits

0xa253,	// (0x00019864) scroll_pane_cp20_ParamLimits

0x1cb1,	// (0x000112c2) bg_popup_fep_char_preview_window_cp01

0xa297,	// (0x000198a8) popup_fshwr2_char_preview_window_t1

0xa2a5,	// (0x000198b6) popup_candi_list_indi_window_g1

0xa2ae,	// (0x000198bf) bg_cell_contacts_ai5_widget_pane

0xa2ba,	// (0x000198cb) cell_contacts_ai5_widget_pane_g1

0xa2ce,	// (0x000198df) cell_contacts_ai5_widget_pane_g2

0xa2dd,	// (0x000198ee) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x0001f4e5) cell_contacts_ai5_widget_pane_g

0xa2f0,	// (0x00019901) cell_contacts_ai5_widget_pane_t1

0x2b8c,	// (0x0001219d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2fa,	// (0x0001e90b) settings_container_pane

0x39db,	// (0x00012fec) listscroll_set_pane_copy1

0x66f8,	// (0x00015d09) scroll_pane_cp121_copy1

0xa376,	// (0x00019987) set_content_pane_copy1

0xf306,	// (0x0001e917) aid_height_set_list_copy1_ParamLimits

0xf306,	// (0x0001e917) aid_height_set_list_copy1

0x5d10,	// (0x00015321) aid_size_parent_copy1_ParamLimits

0x5d10,	// (0x00015321) aid_size_parent_copy1

0xf312,	// (0x0001e923) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf312,	// (0x0001e923) button_value_adjust_pane_cp6_copy1

0x3d65,	// (0x00013376) list_highlight_pane_cp2_copy1_ParamLimits

0x3d65,	// (0x00013376) list_highlight_pane_cp2_copy1

0xf326,	// (0x0001e937) list_set_pane_copy1_ParamLimits

0xf326,	// (0x0001e937) list_set_pane_copy1

0xf295,	// (0x0001e8a6) main_pane_set_t1_copy1_ParamLimits

0xf295,	// (0x0001e8a6) main_pane_set_t1_copy1

0xf2cf,	// (0x0001e8e0) main_pane_set_t2_copy1_ParamLimits

0xf2cf,	// (0x0001e8e0) main_pane_set_t2_copy1

0xf3d3,	// (0x0001e9e4) main_pane_set_t3_copy1

0xf3e1,	// (0x0001e9f2) main_pane_set_t4_copy1

0xf2ee,	// (0x0001e8ff) set_content_pane_g1_copy1_ParamLimits

0xf2ee,	// (0x0001e8ff) set_content_pane_g1_copy1

0xf3ef,	// (0x0001ea00) setting_code_pane_copy1

0xa471,	// (0x00019a82) setting_slider_graphic_pane_copy1

0xa471,	// (0x00019a82) setting_slider_pane_copy1

0xa471,	// (0x00019a82) setting_text_pane_copy1

0xa47b,	// (0x00019a8c) setting_volume_pane_copy1

0xf3f9,	// (0x0001ea0a) settings_code_pane_cp2_copy1

0xf401,	// (0x0001ea12) settings_code_pane_cp_copy1_ParamLimits

0xf401,	// (0x0001ea12) settings_code_pane_cp_copy1

0xf415,	// (0x0001ea26) volume_set_pane_copy1

0xf41d,	// (0x0001ea2e) volume_set_pane_g10_copy1

0xf425,	// (0x0001ea36) volume_set_pane_g1_copy1

0xf42d,	// (0x0001ea3e) volume_set_pane_g2_copy1

0xf435,	// (0x0001ea46) volume_set_pane_g3_copy1

0xf43d,	// (0x0001ea4e) volume_set_pane_g4_copy1

0xf445,	// (0x0001ea56) volume_set_pane_g5_copy1

0xf44d,	// (0x0001ea5e) volume_set_pane_g6_copy1

0xf455,	// (0x0001ea66) volume_set_pane_g7_copy1

0xf45d,	// (0x0001ea6e) volume_set_pane_g8_copy1

0xf465,	// (0x0001ea76) volume_set_pane_g9_copy1

0x1da5,	// (0x000113b6) bg_set_opt_pane_cp_copy1_ParamLimits

0x1da5,	// (0x000113b6) bg_set_opt_pane_cp_copy1

0xa4f8,	// (0x00019b09) setting_slider_pane_t1_copy1_ParamLimits

0xa4f8,	// (0x00019b09) setting_slider_pane_t1_copy1

0xf46d,	// (0x0001ea7e) setting_slider_pane_t2_copy1_ParamLimits

0xf46d,	// (0x0001ea7e) setting_slider_pane_t2_copy1

0xf487,	// (0x0001ea98) setting_slider_pane_t3_copy1_ParamLimits

0xf487,	// (0x0001ea98) setting_slider_pane_t3_copy1

0xf49f,	// (0x0001eab0) slider_set_pane_copy1_ParamLimits

0xf49f,	// (0x0001eab0) slider_set_pane_copy1

0x2cc4,	// (0x000122d5) set_opt_bg_pane_g1_copy2

0x2ccc,	// (0x000122dd) set_opt_bg_pane_g2_copy2

0xa55e,	// (0x00019b6f) set_opt_bg_pane_g3_copy2

0x2cdc,	// (0x000122ed) set_opt_bg_pane_g4_copy2

0x2ce4,	// (0x000122f5) set_opt_bg_pane_g5_copy2

0x2cec,	// (0x000122fd) set_opt_bg_pane_g6_copy2

0xf4b5,	// (0x0001eac6) set_opt_bg_pane_g7_copy2

0xa570,	// (0x00019b81) set_opt_bg_pane_g8_copy2

0xa57a,	// (0x00019b8b) set_opt_bg_pane_g9_copy2

0x1c5b,	// (0x0001126c) aid_size_touch_slider_mark_copy1_ParamLimits

0x1c5b,	// (0x0001126c) aid_size_touch_slider_mark_copy1

0xa584,	// (0x00019b95) slider_set_pane_g1_copy1

0x1c6f,	// (0x00011280) slider_set_pane_g2_copy1

0x0e56,	// (0x00010467) slider_set_pane_g3_copy1_ParamLimits

0x0e56,	// (0x00010467) slider_set_pane_g3_copy1

0x0e6a,	// (0x0001047b) slider_set_pane_g4_copy1_ParamLimits

0x0e6a,	// (0x0001047b) slider_set_pane_g4_copy1

0x0e82,	// (0x00010493) slider_set_pane_g5_copy1_ParamLimits

0x0e82,	// (0x00010493) slider_set_pane_g5_copy1

0x0e56,	// (0x00010467) slider_set_pane_g6_copy1_ParamLimits

0x0e56,	// (0x00010467) slider_set_pane_g6_copy1

0xbcf5,	// (0x0001b306) slider_set_pane_g7_copy1_ParamLimits

0xbcf5,	// (0x0001b306) slider_set_pane_g7_copy1

0x1cc5,	// (0x000112d6) bg_set_opt_pane_cp2_copy1

0xa58d,	// (0x00019b9e) setting_slider_graphic_pane_g1_copy1

0xf4bd,	// (0x0001eace) setting_slider_graphic_pane_t1_copy1

0xf4cd,	// (0x0001eade) setting_slider_graphic_pane_t2_copy1

0xf4dd,	// (0x0001eaee) slider_set_pane_cp_copy1

0xa5c6,	// (0x00019bd7) input_focus_pane_cp1_copy1

0xa5cf,	// (0x00019be0) list_set_text_pane_copy1

0xa5d7,	// (0x00019be8) setting_text_pane_g1_copy1

0x1dfe,	// (0x0001140f) set_text_pane_t1_copy1

0xa5c6,	// (0x00019bd7) input_focus_pane_cp2_copy1

0xa5d7,	// (0x00019be8) setting_code_pane_g1_copy1

0xf4e5,	// (0x0001eaf6) setting_code_pane_t1_copy1

0xc8fc,	// (0x0001bf0d) list_set_graphic_pane_copy1

0x1cc5,	// (0x000112d6) bg_set_opt_pane_cp4_copy1

0xc90e,	// (0x0001bf1f) list_set_graphic_pane_g1_copy1_ParamLimits

0xc90e,	// (0x0001bf1f) list_set_graphic_pane_g1_copy1

0xf4f3,	// (0x0001eb04) list_set_graphic_pane_g2_copy1

0xc926,	// (0x0001bf37) list_set_graphic_pane_t1_copy1_ParamLimits

0xc926,	// (0x0001bf37) list_set_graphic_pane_t1_copy1

0x7219,	// (0x0001682a) rs_clock_indi_pane_g1

0xa608,	// (0x00019c19) rs_clock_indi_pane_t1

0x9e79,	// (0x0001948a) rs_indi_pane

0xa616,	// (0x00019c27) rs_indi_pane_g1

0xa61f,	// (0x00019c30) rs_indi_pane_g2

0xa628,	// (0x00019c39) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x0001f4ec) rs_indi_pane_g

0x39db,	// (0x00012fec) bg_popup_preview_window_pane_cp03

0xa631,	// (0x00019c42) popup_fep_tooltip_window_t1

0x8090,	// (0x000176a1) popup_note2_window_g2_ParamLimits

0x8090,	// (0x000176a1) popup_note2_window_g2

0x0001,

0xfc74,	// (0x0001f285) popup_note2_window_g_ParamLimits

0xfc74,	// (0x0001f285) popup_note2_window_g

0x867a,	// (0x00017c8b) bg_popup_sub_pane_cp11_ParamLimits

0x8687,	// (0x00017c98) cell_ai3_links_pane_g1_ParamLimits

0x869e,	// (0x00017caf) cell_ai3_links_pane_t1

0x1dfe,	// (0x0001140f) set_text_pane_t1_copy1_ParamLimits

0x38ec,	// (0x00012efd) cell_graphic_popup_pane_cp2_ParamLimits

0x38ec,	// (0x00012efd) cell_graphic_popup_pane_cp2

0xa63f,	// (0x00019c50) cell_graphic_popup_pane_g1_cp2

0x2376,	// (0x00011987) cell_graphic_popup_pane_g2_cp2

0xa647,	// (0x00019c58) cell_graphic_popup_pane_g3_cp2

0xa64f,	// (0x00019c60) cell_graphic_popup_pane_t2_cp2

0x2387,	// (0x00011998) grid_highlight_pane_cp3_cp2

0x30b3,	// (0x000126c4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2b8c,	// (0x0001219d) main_tmo_pane_ParamLimits

0xe38a,	// (0x0001d99b) popup_tmo_big_image_note_window

0xef6a,	// (0x0001e57b) cell_ai5_widget_list_pane

0xef72,	// (0x0001e583) cell_ai5_widget_lrg_icon_pane

0xf254,	// (0x0001e865) tmo_note_info_pane_t1_ParamLimits

0xf269,	// (0x0001e87a) tmo_note_info_pane_t2_ParamLimits

0xf280,	// (0x0001e891) tmo_note_info_pane_t3_ParamLimits

0xa222,	// (0x00019833) tmo_note_info_pane_t4_ParamLimits

0xa234,	// (0x00019845) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x0001f4da) tmo_note_info_pane_t_ParamLimits

0xf2fa,	// (0x0001e90b) settings_container_pane_ParamLimits

0xa5be,	// (0x00019bcf) indicator_popup_pane_cp5

0xa5be,	// (0x00019bcf) indicator_popup_pane_cp6

0xc8fc,	// (0x0001bf0d) list_set_graphic_pane_copy1_ParamLimits

0x1cb1,	// (0x000112c2) bg_popup_window_pane_cp23

0xa65d,	// (0x00019c6e) popup_tmo_big_image_note_window_g1

0xa667,	// (0x00019c78) popup_tmo_big_image_note_window_t1

0xa677,	// (0x00019c88) popup_tmo_big_image_note_window_t2

0xa687,	// (0x00019c98) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x0001f4f3) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0001eb0c) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0001eb14) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0001eb22) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0001eb22) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0001eb3b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0001eb3b) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0001eb48) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0001eb48) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0001eb60) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0001eb60) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee9,	// (0x0001f4fa) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x0001f4fa) cell_ai5_widget_list_row_pane_t

0x0223,	// (0x0000f834) main_fep_vtchi_ss_pane

0xa6fd,	// (0x00019d0e) popup_fep_char_pre_window

0xa705,	// (0x00019d16) popup_fep_ituss_window

0xa726,	// (0x00019d37) popup_fep_vkbss_window

0xa745,	// (0x00019d56) grid_vkbss_keypad_pane_ParamLimits

0xa745,	// (0x00019d56) grid_vkbss_keypad_pane

0xa755,	// (0x00019d66) ituss_keypad_pane

0xa76e,	// (0x00019d7f) aid_vkbss_key_offset_ParamLimits

0xa76e,	// (0x00019d7f) aid_vkbss_key_offset

0xa77a,	// (0x00019d8b) cell_vkbss_key_pane_ParamLimits

0xa77a,	// (0x00019d8b) cell_vkbss_key_pane

0xa790,	// (0x00019da1) bg_cell_vkbss_key_g1_ParamLimits

0xa790,	// (0x00019da1) bg_cell_vkbss_key_g1

0xa79c,	// (0x00019dad) cell_vkbss_key_3p_pane_ParamLimits

0xa79c,	// (0x00019dad) cell_vkbss_key_3p_pane

0xa7b6,	// (0x00019dc7) cell_vkbss_key_g1_ParamLimits

0xa7b6,	// (0x00019dc7) cell_vkbss_key_g1

0xa7d0,	// (0x00019de1) cell_vkbss_key_t1_ParamLimits

0xa7d0,	// (0x00019de1) cell_vkbss_key_t1

0xa7fb,	// (0x00019e0c) cell_ituss_key_pane_ParamLimits

0xa7fb,	// (0x00019e0c) cell_ituss_key_pane

0xa80b,	// (0x00019e1c) bg_cell_ituss_key_g1_ParamLimits

0xa80b,	// (0x00019e1c) bg_cell_ituss_key_g1

0xa817,	// (0x00019e28) cell_ituss_key_pane_g1_ParamLimits

0xa817,	// (0x00019e28) cell_ituss_key_pane_g1

0xa823,	// (0x00019e34) cell_ituss_key_pane_g2_ParamLimits

0xa823,	// (0x00019e34) cell_ituss_key_pane_g2

0x0001,

0xfeee,	// (0x0001f4ff) cell_ituss_key_pane_g_ParamLimits

0xfeee,	// (0x0001f4ff) cell_ituss_key_pane_g

0xa83c,	// (0x00019e4d) cell_ituss_key_t1_ParamLimits

0xa83c,	// (0x00019e4d) cell_ituss_key_t1

0xa86a,	// (0x00019e7b) cell_ituss_key_t2_ParamLimits

0xa86a,	// (0x00019e7b) cell_ituss_key_t2

0xa89b,	// (0x00019eac) cell_ituss_key_t3_ParamLimits

0xa89b,	// (0x00019eac) cell_ituss_key_t3

0xa8cc,	// (0x00019edd) cell_ituss_key_t4_ParamLimits

0xa8cc,	// (0x00019edd) cell_ituss_key_t4

0x0003,

0xfef3,	// (0x0001f504) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0001f504) cell_ituss_key_t

0xa8fd,	// (0x00019f0e) cell_vkbss_key_3p_pane_g1

0xa905,	// (0x00019f16) cell_vkbss_key_3p_pane_g2

0xa90d,	// (0x00019f1e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x0001f50d) cell_vkbss_key_3p_pane_g

0x1cb1,	// (0x000112c2) bg_popup_fep_char_preview_window_cp02

0xa915,	// (0x00019f26) popup_fep_char_pre_window_t1

0xef60,	// (0x0001e571) main_ai5_sk_pane

0xa2ae,	// (0x000198bf) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa2ba,	// (0x000198cb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa2ce,	// (0x000198df) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa2dd,	// (0x000198ee) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x0001f4e5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa2f0,	// (0x00019901) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2b8c,	// (0x0001219d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0001eb72) main_ai5_sk_pane_g1

0x4dab,	// (0x000143bc) popup_query_code_window_g1

0xa71b,	// (0x00019d2c) popup_fep_vkb_icf_pane

0xa72f,	// (0x00019d40) popup_fep_vtchi_icf_pane

0x2b8c,	// (0x0001219d) bg_icf_pane

0xa93c,	// (0x00019f4d) list_vkb_icf_pane

0x2b8c,	// (0x0001219d) bg_icf_pane_cp01

0xa954,	// (0x00019f65) vtchi_icf_list_pane

0xa964,	// (0x00019f75) list_vkb_icf_pane_t1_ParamLimits

0xa964,	// (0x00019f75) list_vkb_icf_pane_t1

0xa97b,	// (0x00019f8c) vtchi_icf_list_pane_t1_ParamLimits

0xa97b,	// (0x00019f8c) vtchi_icf_list_pane_t1

0xa705,	// (0x00019d16) popup_fep_ituss_window_ParamLimits

0xa72f,	// (0x00019d40) popup_fep_vtchi_icf_pane_ParamLimits

0xa755,	// (0x00019d66) ituss_keypad_pane_ParamLimits

0xa765,	// (0x00019d76) ituss_sks_pane

0x2b8c,	// (0x0001219d) bg_icf_pane_ParamLimits

0xa92d,	// (0x00019f3e) icf_edit_indi_pane_ParamLimits

0xa92d,	// (0x00019f3e) icf_edit_indi_pane

0xa93c,	// (0x00019f4d) list_vkb_icf_pane_ParamLimits

0x2b8c,	// (0x0001219d) bg_icf_pane_cp01_ParamLimits

0xa948,	// (0x00019f59) icf_edit_indi_pane_cp01_ParamLimits

0xa948,	// (0x00019f59) icf_edit_indi_pane_cp01

0xa95c,	// (0x00019f6d) vtchi_query_pane

0x74ab,	// (0x00016abc) icf_edit_indi_pane_g1_ParamLimits

0x74ab,	// (0x00016abc) icf_edit_indi_pane_g1

0xa997,	// (0x00019fa8) icf_edit_indi_pane_g2_ParamLimits

0xa997,	// (0x00019fa8) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x0001f514) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x0001f514) icf_edit_indi_pane_g

0xa9a3,	// (0x00019fb4) icf_edit_indi_pane_t1

0xa9b1,	// (0x00019fc2) bg_input_focus_pane_cp042

0x255a,	// (0x00011b6b) vtchi_button_pane

0xa9ba,	// (0x00019fcb) vtchi_query_pane_t1

0xa9c8,	// (0x00019fd9) vtchi_query_pane_t2

0xa9d6,	// (0x00019fe7) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0001f519) vtchi_query_pane_t

0x1cb1,	// (0x000112c2) bg_button_pane_cp13

0xa9e4,	// (0x00019ff5) vtchi_button_pane_g1

0x8f3c,	// (0x0001854d) ituss_sks_pane_g1

0xa9ec,	// (0x00019ffd) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0001f520) ituss_sks_pane_g

0xa9f5,	// (0x0001a006) ituss_sks_pane_t1

0xaa03,	// (0x0001a014) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0001f525) ituss_sks_pane_t

0x6c2c,	// (0x0001623d) indicator_nsta_pane_cp_g1

0x6c35,	// (0x00016246) indicator_nsta_pane_cp_g2

0x6c3d,	// (0x0001624e) indicator_nsta_pane_cp_g3

0x6c45,	// (0x00016256) indicator_nsta_pane_cp_g4

0x6c4d,	// (0x0001625e) indicator_nsta_pane_cp_g5

0x6c55,	// (0x00016266) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x0001f0c3) indicator_nsta_pane_cp_g

0xed85,	// (0x0001e396) cell_graphic2_pane_t2_ParamLimits

0xed85,	// (0x0001e396) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x0001f3dc) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x0001f3dc) cell_graphic2_pane_t

0xedbb,	// (0x0001e3cc) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal

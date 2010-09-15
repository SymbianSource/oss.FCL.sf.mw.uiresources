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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x000207ef };

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
0xbe00,	// (0x0002c5ef) Screen

0xbe0c,	// (0x0002c5fb) application_window_ParamLimits

0xbe0c,	// (0x0002c5fb) application_window

0xe440,	// (0x0002ec2f) screen_g1

0xbe44,	// (0x0002c633) area_bottom_pane_ParamLimits

0xbe44,	// (0x0002c633) area_bottom_pane

0x0dd5,	// (0x000215c4) area_top_pane_ParamLimits

0x0dd5,	// (0x000215c4) area_top_pane

0x0e69,	// (0x00021658) main_pane_ParamLimits

0x0e69,	// (0x00021658) main_pane

0x31a0,	// (0x0002398f) misc_graphics

0xd6b8,	// (0x0002dea7) battery_pane_ParamLimits

0xd6b8,	// (0x0002dea7) battery_pane

0x5885,	// (0x00026074) bg_status_flat_pane_g8

0x588d,	// (0x0002607c) bg_status_flat_pane_g9

0x4c6b,	// (0x0002545a) context_pane_ParamLimits

0x4c6b,	// (0x0002545a) context_pane

0xd823,	// (0x0002e012) navi_pane_ParamLimits

0xd823,	// (0x0002e012) navi_pane

0xd8a1,	// (0x0002e090) signal_pane_ParamLimits

0xd8a1,	// (0x0002e090) signal_pane

0x0008,

0xf84f,	// (0x0003003e) bg_status_flat_pane_g

0xd931,	// (0x0002e120) status_pane_g1_ParamLimits

0xd931,	// (0x0002e120) status_pane_g1

0xd947,	// (0x0002e136) status_pane_g2_ParamLimits

0xd947,	// (0x0002e136) status_pane_g2

0x4e92,	// (0x00025681) status_pane_g3_ParamLimits

0x4e92,	// (0x00025681) status_pane_g3

0x0004,

0xf77b,	// (0x0002ff6a) status_pane_g_ParamLimits

0xf77b,	// (0x0002ff6a) status_pane_g

0xd953,	// (0x0002e142) title_pane_ParamLimits

0xd953,	// (0x0002e142) title_pane

0xd9b6,	// (0x0002e1a5) uni_indicator_pane_ParamLimits

0xd9b6,	// (0x0002e1a5) uni_indicator_pane

0x4ad3,	// (0x000252c2) bg_list_pane_ParamLimits

0x4ad3,	// (0x000252c2) bg_list_pane

0xbb60,	// (0x0002c34f) find_pane

0x5091,	// (0x00025880) listscroll_app_pane_ParamLimits

0x5091,	// (0x00025880) listscroll_app_pane

0x4aff,	// (0x000252ee) listscroll_form_pane

0xbb68,	// (0x0002c357) listscroll_gen_pane_ParamLimits

0xbb68,	// (0x0002c357) listscroll_gen_pane

0x1742,	// (0x00021f31) listscroll_set_pane

0x6412,	// (0x00026c01) main_idle_act_pane

0x47cf,	// (0x00024fbe) main_idle_trad_pane

0x47cf,	// (0x00024fbe) main_list_empty_pane

0x4af3,	// (0x000252e2) main_midp_pane

0x4b19,	// (0x00025308) main_pane_g1_ParamLimits

0x4b19,	// (0x00025308) main_pane_g1

0xc532,	// (0x0002cd21) popup_ai_message_window_ParamLimits

0xc532,	// (0x0002cd21) popup_ai_message_window

0xc5c3,	// (0x0002cdb2) popup_fep_china_uni_window_ParamLimits

0xc5c3,	// (0x0002cdb2) popup_fep_china_uni_window

0x184c,	// (0x0002203b) popup_fep_japan_candidate_window_ParamLimits

0x184c,	// (0x0002203b) popup_fep_japan_candidate_window

0x186c,	// (0x0002205b) popup_fep_japan_predictive_window_ParamLimits

0x186c,	// (0x0002205b) popup_fep_japan_predictive_window

0xc61f,	// (0x0002ce0e) popup_find_window

0xc63c,	// (0x0002ce2b) popup_grid_graphic_window_ParamLimits

0xc63c,	// (0x0002ce2b) popup_grid_graphic_window

0x18d5,	// (0x000220c4) popup_large_graphic_colour_window

0xc6e0,	// (0x0002cecf) popup_menu_window_ParamLimits

0xc6e0,	// (0x0002cecf) popup_menu_window

0xc8b2,	// (0x0002d0a1) popup_note_image_window

0xc878,	// (0x0002d067) popup_note_wait_window_ParamLimits

0xc878,	// (0x0002d067) popup_note_wait_window

0xc8ca,	// (0x0002d0b9) popup_note_window_ParamLimits

0xc8ca,	// (0x0002d0b9) popup_note_window

0xc970,	// (0x0002d15f) popup_query_code_window_ParamLimits

0xc970,	// (0x0002d15f) popup_query_code_window

0x1b1d,	// (0x0002230c) popup_query_data_code_window_ParamLimits

0x1b1d,	// (0x0002230c) popup_query_data_code_window

0xc9aa,	// (0x0002d199) popup_query_data_window_ParamLimits

0xc9aa,	// (0x0002d199) popup_query_data_window

0xca2c,	// (0x0002d21b) popup_query_sat_info_window_ParamLimits

0xca2c,	// (0x0002d21b) popup_query_sat_info_window

0xcac3,	// (0x0002d2b2) popup_snote_single_graphic_window_ParamLimits

0xcac3,	// (0x0002d2b2) popup_snote_single_graphic_window

0xcac3,	// (0x0002d2b2) popup_snote_single_text_window_ParamLimits

0xcac3,	// (0x0002d2b2) popup_snote_single_text_window

0x1ba4,	// (0x00022393) popup_sub_window_general

0x1cd4,	// (0x000224c3) popup_window_general_ParamLimits

0x1cd4,	// (0x000224c3) popup_window_general

0x4b27,	// (0x00025316) power_save_pane

0xc3b3,	// (0x0002cba2) control_pane_g1_ParamLimits

0xc3b3,	// (0x0002cba2) control_pane_g1

0xc3dc,	// (0x0002cbcb) control_pane_g2_ParamLimits

0xc3dc,	// (0x0002cbcb) control_pane_g2

0x4a96,	// (0x00025285) control_pane_g3_ParamLimits

0x4a96,	// (0x00025285) control_pane_g3

0x0007,

0xf763,	// (0x0002ff52) control_pane_g_ParamLimits

0xf763,	// (0x0002ff52) control_pane_g

0xc41d,	// (0x0002cc0c) control_pane_t1_ParamLimits

0xc41d,	// (0x0002cc0c) control_pane_t1

0xc485,	// (0x0002cc74) control_pane_t2_ParamLimits

0xc485,	// (0x0002cc74) control_pane_t2

0x0002,

0xf774,	// (0x0002ff63) control_pane_t_ParamLimits

0xf774,	// (0x0002ff63) control_pane_t

0x49bb,	// (0x000251aa) navi_navi_volume_pane_cp1

0x49c3,	// (0x000251b2) status_small_icon_pane

0x49cb,	// (0x000251ba) status_small_pane_g1_ParamLimits

0x49cb,	// (0x000251ba) status_small_pane_g1

0x49ff,	// (0x000251ee) status_small_pane_g2_ParamLimits

0x49ff,	// (0x000251ee) status_small_pane_g2

0x4a0b,	// (0x000251fa) status_small_pane_g3_ParamLimits

0x4a0b,	// (0x000251fa) status_small_pane_g3

0xd5d4,	// (0x0002ddc3) status_small_pane_g4_ParamLimits

0xd5d4,	// (0x0002ddc3) status_small_pane_g4

0xd5e2,	// (0x0002ddd1) status_small_pane_g5_ParamLimits

0xd5e2,	// (0x0002ddd1) status_small_pane_g5

0x4a31,	// (0x00025220) status_small_pane_g6_ParamLimits

0x4a31,	// (0x00025220) status_small_pane_g6

0x0007,

0xf752,	// (0x0002ff41) status_small_pane_g_ParamLimits

0xf752,	// (0x0002ff41) status_small_pane_g

0x4a60,	// (0x0002524f) status_small_pane_t1

0xd5f8,	// (0x0002dde7) status_small_wait_pane_ParamLimits

0xd5f8,	// (0x0002dde7) status_small_wait_pane

0xd4aa,	// (0x0002dc99) aid_levels_signal_ParamLimits

0xd4aa,	// (0x0002dc99) aid_levels_signal

0xd4c2,	// (0x0002dcb1) signal_pane_g1_ParamLimits

0xd4c2,	// (0x0002dcb1) signal_pane_g1

0xd4dd,	// (0x0002dccc) signal_pane_g2_ParamLimits

0xd4dd,	// (0x0002dccc) signal_pane_g2

0x0003,

0xf6e3,	// (0x0002fed2) signal_pane_g_ParamLimits

0xf6e3,	// (0x0002fed2) signal_pane_g

0x42a2,	// (0x00024a91) context_pane_g1

0xc022,	// (0x0002c811) title_pane_g1

0xc059,	// (0x0002c848) title_pane_t1

0x3248,	// (0x00023a37) title_pane_t2

0x326e,	// (0x00023a5d) title_pane_t3

0x0002,

0xf532,	// (0x0002fd21) title_pane_t

0xd9de,	// (0x0002e1cd) aid_levels_battery_ParamLimits

0xd9de,	// (0x0002e1cd) aid_levels_battery

0xd9fa,	// (0x0002e1e9) battery_pane_g1_ParamLimits

0xd9fa,	// (0x0002e1e9) battery_pane_g1

0xda17,	// (0x0002e206) battery_pane_g2_ParamLimits

0xda17,	// (0x0002e206) battery_pane_g2

0x0001,

0xf786,	// (0x0002ff75) battery_pane_g_ParamLimits

0xf786,	// (0x0002ff75) battery_pane_g

0xdbd8,	// (0x0002e3c7) uni_indicator_pane_g1

0xdbee,	// (0x0002e3dd) uni_indicator_pane_g2

0xdc04,	// (0x0002e3f3) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x000300e6) uni_indicator_pane_g

0x4638,	// (0x00024e27) navi_icon_pane_ParamLimits

0x4638,	// (0x00024e27) navi_icon_pane

0x4581,	// (0x00024d70) navi_midp_pane

0x4654,	// (0x00024e43) navi_navi_pane

0x465e,	// (0x00024e4d) navi_text_pane_ParamLimits

0x465e,	// (0x00024e4d) navi_text_pane

0xe440,	// (0x0002ec2f) status_small_wait_pane_g1

0x36c3,	// (0x00023eb2) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x000300e1) status_small_wait_pane_g

0x5eec,	// (0x000266db) navi_navi_icon_text_pane

0x5ef4,	// (0x000266e3) navi_navi_pane_g1_ParamLimits

0x5ef4,	// (0x000266e3) navi_navi_pane_g1

0x5f06,	// (0x000266f5) navi_navi_pane_g2_ParamLimits

0x5f06,	// (0x000266f5) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x000300af) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x000300af) navi_navi_pane_g

0x5f18,	// (0x00026707) navi_navi_tabs_pane

0x5f21,	// (0x00026710) navi_navi_text_pane

0x5eec,	// (0x000266db) navi_navi_volume_pane

0x5ec8,	// (0x000266b7) navi_text_pane_t1

0x5ebc,	// (0x000266ab) navi_icon_pane_g1

0x5e0f,	// (0x000265fe) navi_navi_text_pane_t1

0x1f74,	// (0x00022763) navi_navi_volume_pane_g1

0x1f7c,	// (0x0002276b) volume_small_pane

0x5d69,	// (0x00026558) navi_navi_icon_text_pane_g1

0x5d71,	// (0x00026560) navi_navi_icon_text_pane_t1

0x4654,	// (0x00024e43) navi_tabs_2_long_pane

0x4654,	// (0x00024e43) navi_tabs_2_pane

0x4654,	// (0x00024e43) navi_tabs_3_long_pane

0x4654,	// (0x00024e43) navi_tabs_3_pane

0x4654,	// (0x00024e43) navi_tabs_4_pane

0x1f54,	// (0x00022743) tabs_2_active_pane_ParamLimits

0x1f54,	// (0x00022743) tabs_2_active_pane

0x1f64,	// (0x00022753) tabs_2_passive_pane_ParamLimits

0x1f64,	// (0x00022753) tabs_2_passive_pane

0x1f22,	// (0x00022711) tabs_3_active_pane_ParamLimits

0x1f22,	// (0x00022711) tabs_3_active_pane

0x1f32,	// (0x00022721) tabs_3_passive_pane_ParamLimits

0x1f32,	// (0x00022721) tabs_3_passive_pane

0x1f43,	// (0x00022732) tabs_3_passive_pane_cp_ParamLimits

0x1f43,	// (0x00022732) tabs_3_passive_pane_cp

0x1ede,	// (0x000226cd) tabs_4_active_pane_ParamLimits

0x1ede,	// (0x000226cd) tabs_4_active_pane

0x1eef,	// (0x000226de) tabs_4_passive_pane_ParamLimits

0x1eef,	// (0x000226de) tabs_4_passive_pane

0x1f00,	// (0x000226ef) tabs_4_passive_pane_cp_ParamLimits

0x1f00,	// (0x000226ef) tabs_4_passive_pane_cp

0x1f11,	// (0x00022700) tabs_4_passive_pane_cp2_ParamLimits

0x1f11,	// (0x00022700) tabs_4_passive_pane_cp2

0x1eba,	// (0x000226a9) tabs_2_long_active_pane_ParamLimits

0x1eba,	// (0x000226a9) tabs_2_long_active_pane

0x1ecc,	// (0x000226bb) tabs_2_long_passive_pane_ParamLimits

0x1ecc,	// (0x000226bb) tabs_2_long_passive_pane

0x1e7b,	// (0x0002266a) tabs_3_long_active_pane_ParamLimits

0x1e7b,	// (0x0002266a) tabs_3_long_active_pane

0x1e8e,	// (0x0002267d) tabs_3_long_passive_pane_ParamLimits

0x1e8e,	// (0x0002267d) tabs_3_long_passive_pane

0x1ea7,	// (0x00022696) tabs_3_long_passive_pane_cp_ParamLimits

0x1ea7,	// (0x00022696) tabs_3_long_passive_pane_cp

0x1e21,	// (0x00022610) volume_small_pane_g1

0x1e2a,	// (0x00022619) volume_small_pane_g2

0x1e33,	// (0x00022622) volume_small_pane_g3

0x1e3c,	// (0x0002262b) volume_small_pane_g4

0x1e45,	// (0x00022634) volume_small_pane_g5

0x1e4e,	// (0x0002263d) volume_small_pane_g6

0x1e57,	// (0x00022646) volume_small_pane_g7

0x1e60,	// (0x0002264f) volume_small_pane_g8

0x1e69,	// (0x00022658) volume_small_pane_g9

0x1e72,	// (0x00022661) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0003007b) volume_small_pane_g

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp2_ParamLimits

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp2

0x328e,	// (0x00023a7d) tabs_3_active_pane_g1

0xc0e5,	// (0x0002c8d4) tabs_3_active_pane_t1

0x34fb,	// (0x00023cea) bg_passive_tab_pane_cp2_ParamLimits

0x34fb,	// (0x00023cea) bg_passive_tab_pane_cp2

0x328e,	// (0x00023a7d) tabs_3_passive_pane_g1

0xc0e5,	// (0x0002c8d4) tabs_3_passive_pane_t1

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp3_ParamLimits

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp3

0x32a8,	// (0x00023a97) tabs_4_active_pane_g1

0xc0f7,	// (0x0002c8e6) tabs_4_active_pane_t1

0x34fb,	// (0x00023cea) bg_passive_tab_pane_cp3_ParamLimits

0x34fb,	// (0x00023cea) bg_passive_tab_pane_cp3

0x32a8,	// (0x00023a97) tabs_4_1_passive_pane_g1

0xc0f7,	// (0x0002c8e6) tabs_4_1_passive_pane_t1

0x4af3,	// (0x000252e2) list_highlight_pane_cp2

0xdc8a,	// (0x0002e479) list_set_pane_ParamLimits

0xdc8a,	// (0x0002e479) list_set_pane

0xdd24,	// (0x0002e513) main_pane_set_t1_ParamLimits

0xdd24,	// (0x0002e513) main_pane_set_t1

0xdd44,	// (0x0002e533) main_pane_set_t2_ParamLimits

0xdd44,	// (0x0002e533) main_pane_set_t2

0xdd58,	// (0x0002e547) main_pane_set_t3_ParamLimits

0xdd58,	// (0x0002e547) main_pane_set_t3

0xdd6a,	// (0x0002e559) main_pane_set_t4_ParamLimits

0xdd6a,	// (0x0002e559) main_pane_set_t4

0x0003,

0xf95c,	// (0x0003014b) main_pane_set_t_ParamLimits

0xf95c,	// (0x0003014b) main_pane_set_t

0xdd7c,	// (0x0002e56b) setting_code_pane

0xdd86,	// (0x0002e575) setting_slider_graphic_pane

0xdd86,	// (0x0002e575) setting_slider_pane

0xdd86,	// (0x0002e575) setting_text_pane

0xdd86,	// (0x0002e575) setting_volume_pane

0x10b8,	// (0x000218a7) volume_set_pane

0x3280,	// (0x00023a6f) bg_set_opt_pane_cp

0x10c0,	// (0x000218af) setting_slider_pane_t1

0x10d9,	// (0x000218c8) setting_slider_pane_t2

0x10f3,	// (0x000218e2) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002fd28) setting_slider_pane_t

0x110b,	// (0x000218fa) slider_set_pane

0x31a0,	// (0x0002398f) bg_set_opt_pane_cp2

0x32c2,	// (0x00023ab1) setting_slider_graphic_pane_g1

0x1121,	// (0x00021910) setting_slider_graphic_pane_t1

0x1131,	// (0x00021920) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002fd2f) setting_slider_graphic_pane_t

0x1141,	// (0x00021930) slider_set_pane_cp

0x31a0,	// (0x0002398f) input_focus_pane_cp1

0x63f9,	// (0x00026be8) list_set_text_pane

0xe440,	// (0x0002ec2f) setting_text_pane_g1

0x31a0,	// (0x0002398f) input_focus_pane_cp2

0xe440,	// (0x0002ec2f) setting_code_pane_g1

0x32cb,	// (0x00023aba) setting_code_pane_t1

0xf433,	// (0x0002fc22) set_text_pane_t1_ParamLimits

0xf433,	// (0x0002fc22) set_text_pane_t1

0x3b65,	// (0x00024354) set_opt_bg_pane_g1

0x3b6d,	// (0x0002435c) set_opt_bg_pane_g2

0x63d3,	// (0x00026bc2) set_opt_bg_pane_g3

0x3b7d,	// (0x0002436c) set_opt_bg_pane_g4

0x3b85,	// (0x00024374) set_opt_bg_pane_g5

0x3b8d,	// (0x0002437c) set_opt_bg_pane_g6

0x63dd,	// (0x00026bcc) set_opt_bg_pane_g7

0x63e5,	// (0x00026bd4) set_opt_bg_pane_g8

0x63ef,	// (0x00026bde) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00030138) set_opt_bg_pane_g

0x63c6,	// (0x00026bb5) slider_set_pane_g1

0x1fe9,	// (0x000227d8) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00030129) slider_set_pane_g

0x1f85,	// (0x00022774) volume_set_pane_g1

0x1f8d,	// (0x0002277c) volume_set_pane_g2

0x1f95,	// (0x00022784) volume_set_pane_g3

0x1f9d,	// (0x0002278c) volume_set_pane_g4

0x1fa5,	// (0x00022794) volume_set_pane_g5

0x1fad,	// (0x0002279c) volume_set_pane_g6

0x1fb5,	// (0x000227a4) volume_set_pane_g7

0x1fbd,	// (0x000227ac) volume_set_pane_g8

0x1fc5,	// (0x000227b4) volume_set_pane_g9

0x1fcd,	// (0x000227bc) volume_set_pane_g10

0x0009,

0xf912,	// (0x00030101) volume_set_pane_g

0xc109,	// (0x0002c8f8) indicator_pane_ParamLimits

0xc109,	// (0x0002c8f8) indicator_pane

0xc131,	// (0x0002c920) main_idle_pane_g2_ParamLimits

0xc131,	// (0x0002c920) main_idle_pane_g2

0xc169,	// (0x0002c958) main_pane_idle_g1_ParamLimits

0xc169,	// (0x0002c958) main_pane_idle_g1

0x331a,	// (0x00023b09) popup_clock_digital_analogue_window_ParamLimits

0x331a,	// (0x00023b09) popup_clock_digital_analogue_window

0xc190,	// (0x0002c97f) soft_indicator_pane_ParamLimits

0xc190,	// (0x0002c97f) soft_indicator_pane

0xc1aa,	// (0x0002c999) wallpaper_pane_ParamLimits

0xc1aa,	// (0x0002c999) wallpaper_pane

0xe440,	// (0x0002ec2f) wallpaper_pane_g1

0xc1bc,	// (0x0002c9ab) indicator_pane_g1_ParamLimits

0xc1bc,	// (0x0002c9ab) indicator_pane_g1

0x6814,	// (0x00027003) navi_navi_icon_text_pane_srt_g1

0x336c,	// (0x00023b5b) soft_indicator_pane_t1

0x3386,	// (0x00023b75) aid_ps_area_pane

0xc1d2,	// (0x0002c9c1) aid_ps_clock_pane

0x33a5,	// (0x00023b94) aid_ps_indicator_pane

0x33b1,	// (0x00023ba0) indicator_ps_pane_ParamLimits

0x33b1,	// (0x00023ba0) indicator_ps_pane

0x33c0,	// (0x00023baf) power_save_pane_g1_ParamLimits

0x33c0,	// (0x00023baf) power_save_pane_g1

0x33cc,	// (0x00023bbb) power_save_pane_g2_ParamLimits

0x33cc,	// (0x00023bbb) power_save_pane_g2

0x0cc9,	// (0x000214b8) aid_navinavi_width_pane

0x3386,	// (0x00023b75) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002fd34) power_save_pane_g_ParamLimits

0xf545,	// (0x0002fd34) power_save_pane_g

0x33da,	// (0x00023bc9) power_save_pane_t1_ParamLimits

0x33da,	// (0x00023bc9) power_save_pane_t1

0xc1d2,	// (0x0002c9c1) aid_ps_clock_pane_ParamLimits

0x33a5,	// (0x00023b94) aid_ps_indicator_pane_ParamLimits

0x33ec,	// (0x00023bdb) power_save_pane_t4_ParamLimits

0x33ec,	// (0x00023bdb) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002fd39) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002fd39) power_save_pane_t

0x3416,	// (0x00023c05) power_save_t3_ParamLimits

0x3416,	// (0x00023c05) power_save_t3

0x3401,	// (0x00023bf0) power_save_t2_ParamLimits

0x3401,	// (0x00023bf0) power_save_t2

0x342b,	// (0x00023c1a) indicator_ps_pane_g1

0xc1e0,	// (0x0002c9cf) ai_gene_pane_ParamLimits

0xc1e0,	// (0x0002c9cf) ai_gene_pane

0xc1f7,	// (0x0002c9e6) ai_links_pane_ParamLimits

0xc1f7,	// (0x0002c9e6) ai_links_pane

0xc20f,	// (0x0002c9fe) indicator_pane_cp1_ParamLimits

0xc20f,	// (0x0002c9fe) indicator_pane_cp1

0xc21e,	// (0x0002ca0d) main_pane_idle_g1_cp_ParamLimits

0xc21e,	// (0x0002ca0d) main_pane_idle_g1_cp

0x3464,	// (0x00023c53) popup_ai_links_title_window

0xc236,	// (0x0002ca25) soft_indicator_pane_cp1_ParamLimits

0xc236,	// (0x0002ca25) soft_indicator_pane_cp1

0x61b5,	// (0x000269a4) ai_links_pane_g1

0x61be,	// (0x000269ad) grid_ai_links_pane

0xdbcf,	// (0x0002e3be) ai_gene_pane_1

0x61a3,	// (0x00026992) ai_gene_pane_2

0x61ac,	// (0x0002699b) list_highlight_pane_cp4

0xdbab,	// (0x0002e39a) cell_ai_link_pane_ParamLimits

0xdbab,	// (0x0002e39a) cell_ai_link_pane

0x6174,	// (0x00026963) cell_ai_link_pane_g1

0x36c3,	// (0x00023eb2) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x000300dc) cell_ai_link_pane_g

0x31a0,	// (0x0002398f) grid_highlight_cp2

0x31a0,	// (0x0002398f) bg_popup_sub_pane_cp1

0x3487,	// (0x00023c76) popup_ai_links_title_window_t1

0x60c2,	// (0x000268b1) ai_gene_pane_1_g1_ParamLimits

0x60c2,	// (0x000268b1) ai_gene_pane_1_g1

0x60ce,	// (0x000268bd) ai_gene_pane_1_g2_ParamLimits

0x60ce,	// (0x000268bd) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x000300d2) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x000300d2) ai_gene_pane_1_g

0x60db,	// (0x000268ca) ai_gene_pane_1_t1_ParamLimits

0x60db,	// (0x000268ca) ai_gene_pane_1_t1

0x610f,	// (0x000268fe) grid_ai_soft_ind_pane

0x60ad,	// (0x0002689c) ai_gene_pane_2_t1_ParamLimits

0x60ad,	// (0x0002689c) ai_gene_pane_2_t1

0xc24a,	// (0x0002ca39) main_pane_empty_t1_ParamLimits

0xc24a,	// (0x0002ca39) main_pane_empty_t1

0xc262,	// (0x0002ca51) main_pane_empty_t2_ParamLimits

0xc262,	// (0x0002ca51) main_pane_empty_t2

0xc277,	// (0x0002ca66) main_pane_empty_t3_ParamLimits

0xc277,	// (0x0002ca66) main_pane_empty_t3

0xc289,	// (0x0002ca78) main_pane_empty_t4_ParamLimits

0xc289,	// (0x0002ca78) main_pane_empty_t4

0xc29b,	// (0x0002ca8a) main_pane_empty_t5_ParamLimits

0xc29b,	// (0x0002ca8a) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002fd3e) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002fd3e) main_pane_empty_t

0x3c2c,	// (0x0002441b) bg_popup_window_pane_ParamLimits

0x3c2c,	// (0x0002441b) bg_popup_window_pane

0x5e1d,	// (0x0002660c) find_popup_pane_cp2_ParamLimits

0x5e1d,	// (0x0002660c) find_popup_pane_cp2

0x5e29,	// (0x00026618) heading_pane_ParamLimits

0x5e29,	// (0x00026618) heading_pane

0x31a0,	// (0x0002398f) bg_popup_sub_pane

0xdb2c,	// (0x0002e31b) bg_popup_window_pane_g1_ParamLimits

0xdb2c,	// (0x0002e31b) bg_popup_window_pane_g1

0xdb3b,	// (0x0002e32a) bg_popup_window_pane_g2_ParamLimits

0xdb3b,	// (0x0002e32a) bg_popup_window_pane_g2

0xdb47,	// (0x0002e336) bg_popup_window_pane_g3_ParamLimits

0xdb47,	// (0x0002e336) bg_popup_window_pane_g3

0xdb53,	// (0x0002e342) bg_popup_window_pane_g4_ParamLimits

0xdb53,	// (0x0002e342) bg_popup_window_pane_g4

0xdb62,	// (0x0002e351) bg_popup_window_pane_g5_ParamLimits

0xdb62,	// (0x0002e351) bg_popup_window_pane_g5

0xdb72,	// (0x0002e361) bg_popup_window_pane_g6_ParamLimits

0xdb72,	// (0x0002e361) bg_popup_window_pane_g6

0xdb7e,	// (0x0002e36d) bg_popup_window_pane_g7_ParamLimits

0xdb7e,	// (0x0002e36d) bg_popup_window_pane_g7

0xdb8d,	// (0x0002e37c) bg_popup_window_pane_g8_ParamLimits

0xdb8d,	// (0x0002e37c) bg_popup_window_pane_g8

0xdb9c,	// (0x0002e38b) bg_popup_window_pane_g9_ParamLimits

0xdb9c,	// (0x0002e38b) bg_popup_window_pane_g9

0x5e03,	// (0x000265f2) bg_popup_window_pane_g10_ParamLimits

0x5e03,	// (0x000265f2) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0003009a) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0003009a) bg_popup_window_pane_g

0x5d20,	// (0x0002650f) bg_popup_heading_pane_ParamLimits

0x5d20,	// (0x0002650f) bg_popup_heading_pane

0x2071,	// (0x00022860) tabs_4_passive_pane_cp_srt_ParamLimits

0x2071,	// (0x00022860) tabs_4_passive_pane_cp_srt

0x2083,	// (0x00022872) tabs_4_passive_pane_srt_ParamLimits

0x5d34,	// (0x00026523) heading_pane_g2

0x2083,	// (0x00022872) tabs_4_passive_pane_srt

0x5091,	// (0x00025880) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5091,	// (0x00025880) bg_passive_tab_pane_cp3_srt

0x5d3c,	// (0x0002652b) heading_pane_t1_ParamLimits

0x5d3c,	// (0x0002652b) heading_pane_t1

0x5d53,	// (0x00026542) heading_pane_t2_ParamLimits

0x5d53,	// (0x00026542) heading_pane_t2

0x0001,

0xf8a6,	// (0x00030095) heading_pane_t_ParamLimits

0xf8a6,	// (0x00030095) heading_pane_t

0x584d,	// (0x0002603c) bg_popup_heading_pane_g1

0x58fc,	// (0x000260eb) bg_popup_heading_pane_g2

0x5906,	// (0x000260f5) bg_popup_heading_pane_g3

0x5910,	// (0x000260ff) bg_popup_heading_pane_g4

0x591a,	// (0x00026109) bg_popup_heading_pane_g5

0x5924,	// (0x00026113) bg_popup_heading_pane_g6

0x592c,	// (0x0002611b) bg_popup_heading_pane_g7

0x5934,	// (0x00026123) bg_popup_heading_pane_g8

0x593e,	// (0x0002612d) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00030051) bg_popup_heading_pane_g

0x501d,	// (0x0002580c) bg_popup_sub_pane_g1

0x5025,	// (0x00025814) bg_popup_sub_pane_g2

0x502d,	// (0x0002581c) bg_popup_sub_pane_g3

0x5035,	// (0x00025824) bg_popup_sub_pane_g4

0x503d,	// (0x0002582c) bg_popup_sub_pane_g5

0x5045,	// (0x00025834) bg_popup_sub_pane_g6

0x504d,	// (0x0002583c) bg_popup_sub_pane_g7

0x5055,	// (0x00025844) bg_popup_sub_pane_g8

0x505d,	// (0x0002584c) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0003002b) bg_popup_sub_pane_g

0x34fb,	// (0x00023cea) bg_popup_window_pane_cp5_ParamLimits

0x34fb,	// (0x00023cea) bg_popup_window_pane_cp5

0x3517,	// (0x00023d06) popup_note_window_g1_ParamLimits

0x3517,	// (0x00023d06) popup_note_window_g1

0x3523,	// (0x00023d12) popup_note_window_t1_ParamLimits

0x3523,	// (0x00023d12) popup_note_window_t1

0x3539,	// (0x00023d28) popup_note_window_t2_ParamLimits

0x3539,	// (0x00023d28) popup_note_window_t2

0x354f,	// (0x00023d3e) popup_note_window_t3_ParamLimits

0x354f,	// (0x00023d3e) popup_note_window_t3

0x3565,	// (0x00023d54) popup_note_window_t4_ParamLimits

0x3565,	// (0x00023d54) popup_note_window_t4

0x358d,	// (0x00023d7c) popup_note_window_t5_ParamLimits

0x358d,	// (0x00023d7c) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002fd49) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002fd49) popup_note_window_t

0x35d7,	// (0x00023dc6) bg_popup_window_pane_cp6_ParamLimits

0x35d7,	// (0x00023dc6) bg_popup_window_pane_cp6

0x57c9,	// (0x00025fb8) popup_note_image_window_g1_ParamLimits

0x57c9,	// (0x00025fb8) popup_note_image_window_g1

0x57d5,	// (0x00025fc4) popup_note_image_window_g2_ParamLimits

0x57d5,	// (0x00025fc4) popup_note_image_window_g2

0x0001,

0xf830,	// (0x0003001f) popup_note_image_window_g_ParamLimits

0xf830,	// (0x0003001f) popup_note_image_window_g

0x57ee,	// (0x00025fdd) popup_note_image_window_t1_ParamLimits

0x57ee,	// (0x00025fdd) popup_note_image_window_t1

0x5807,	// (0x00025ff6) popup_note_image_window_t2_ParamLimits

0x5807,	// (0x00025ff6) popup_note_image_window_t2

0x5820,	// (0x0002600f) popup_note_image_window_t3_ParamLimits

0x5820,	// (0x0002600f) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00030024) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00030024) popup_note_image_window_t

0x568a,	// (0x00025e79) bg_popup_window_pane_cp7_ParamLimits

0x568a,	// (0x00025e79) bg_popup_window_pane_cp7

0x56ba,	// (0x00025ea9) popup_note_wait_window_g1_ParamLimits

0x56ba,	// (0x00025ea9) popup_note_wait_window_g1

0x56c6,	// (0x00025eb5) popup_note_wait_window_g2_ParamLimits

0x56c6,	// (0x00025eb5) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x0003000d) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x0003000d) popup_note_wait_window_g

0x56de,	// (0x00025ecd) popup_note_wait_window_t1_ParamLimits

0x56de,	// (0x00025ecd) popup_note_wait_window_t1

0x5705,	// (0x00025ef4) popup_note_wait_window_t2_ParamLimits

0x5705,	// (0x00025ef4) popup_note_wait_window_t2

0x5722,	// (0x00025f11) popup_note_wait_window_t3_ParamLimits

0x5722,	// (0x00025f11) popup_note_wait_window_t3

0x5735,	// (0x00025f24) popup_note_wait_window_t4_ParamLimits

0x5735,	// (0x00025f24) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00030014) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00030014) popup_note_wait_window_t

0x575a,	// (0x00025f49) wait_bar_pane_ParamLimits

0x575a,	// (0x00025f49) wait_bar_pane

0x31a0,	// (0x0002398f) wait_anim_pane

0x31a0,	// (0x0002398f) wait_border_pane

0xe440,	// (0x0002ec2f) wait_anim_pane_g1

0xe440,	// (0x0002ec2f) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0002fecd) wait_anim_pane_g

0x562e,	// (0x00025e1d) wait_border_pane_g1

0x5639,	// (0x00025e28) wait_border_pane_g2

0x5642,	// (0x00025e31) wait_border_pane_g3

0x0002,

0xf817,	// (0x00030006) wait_border_pane_g

0x5499,	// (0x00025c88) bg_popup_window_pane_cp16_ParamLimits

0x5499,	// (0x00025c88) bg_popup_window_pane_cp16

0x5599,	// (0x00025d88) indicator_popup_pane_cp4_ParamLimits

0x5599,	// (0x00025d88) indicator_popup_pane_cp4

0x55ad,	// (0x00025d9c) popup_query_data_window_t1_ParamLimits

0x55ad,	// (0x00025d9c) popup_query_data_window_t1

0x55bf,	// (0x00025dae) popup_query_data_window_t2_ParamLimits

0x55bf,	// (0x00025dae) popup_query_data_window_t2

0x55d8,	// (0x00025dc7) popup_query_data_window_t3_ParamLimits

0x55d8,	// (0x00025dc7) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0002ffff) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0002ffff) popup_query_data_window_t

0x55f2,	// (0x00025de1) query_popup_data_pane_ParamLimits

0x55f2,	// (0x00025de1) query_popup_data_pane

0x5606,	// (0x00025df5) query_popup_data_pane_cp1_ParamLimits

0x5606,	// (0x00025df5) query_popup_data_pane_cp1

0x5499,	// (0x00025c88) bg_popup_window_pane_cp10_ParamLimits

0x5499,	// (0x00025c88) bg_popup_window_pane_cp10

0x54cb,	// (0x00025cba) indicator_popup_pane_ParamLimits

0x54cb,	// (0x00025cba) indicator_popup_pane

0x54ed,	// (0x00025cdc) popup_query_code_window_t1_ParamLimits

0x54ed,	// (0x00025cdc) popup_query_code_window_t1

0x5507,	// (0x00025cf6) popup_query_code_window_t2_ParamLimits

0x5507,	// (0x00025cf6) popup_query_code_window_t2

0x5550,	// (0x00025d3f) popup_query_code_window_t3_ParamLimits

0x5550,	// (0x00025d3f) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0002fff8) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0002fff8) popup_query_code_window_t

0x557f,	// (0x00025d6e) query_popup_pane_ParamLimits

0x557f,	// (0x00025d6e) query_popup_pane

0x35d7,	// (0x00023dc6) bg_popup_window_pane_cp15_ParamLimits

0x35d7,	// (0x00023dc6) bg_popup_window_pane_cp15

0x35f5,	// (0x00023de4) indicator_popup_pane_cp1_ParamLimits

0x35f5,	// (0x00023de4) indicator_popup_pane_cp1

0x3608,	// (0x00023df7) indicator_popup_pane_cp2_ParamLimits

0x3608,	// (0x00023df7) indicator_popup_pane_cp2

0x361b,	// (0x00023e0a) popup_query_data_code_window_g1_ParamLimits

0x361b,	// (0x00023e0a) popup_query_data_code_window_g1

0x362e,	// (0x00023e1d) popup_query_data_code_window_t1_ParamLimits

0x362e,	// (0x00023e1d) popup_query_data_code_window_t1

0x3640,	// (0x00023e2f) popup_query_data_code_window_t2_ParamLimits

0x3640,	// (0x00023e2f) popup_query_data_code_window_t2

0x3652,	// (0x00023e41) popup_query_data_code_window_t3_ParamLimits

0x3652,	// (0x00023e41) popup_query_data_code_window_t3

0x3668,	// (0x00023e57) popup_query_data_code_window_t4_ParamLimits

0x3668,	// (0x00023e57) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002fd54) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002fd54) popup_query_data_code_window_t

0x1d3e,	// (0x0002252d) list_single_midp_graphic_pane_g3

0x3680,	// (0x00023e6f) query_popup_data_pane_cp2_ParamLimits

0x3693,	// (0x00023e82) query_popup_pane_cp2_ParamLimits

0x3693,	// (0x00023e82) query_popup_pane_cp2

0x31a0,	// (0x0002398f) bg_popup_window_pane_cp11

0x547d,	// (0x00025c6c) heading_pane_cp5

0x5485,	// (0x00025c74) listscroll_popup_info_pane

0x31a0,	// (0x0002398f) input_focus_pane_cp3

0x36a6,	// (0x00023e95) query_popup_pane_t1

0x36b4,	// (0x00023ea3) list_popup_info_pane_ParamLimits

0x36b4,	// (0x00023ea3) list_popup_info_pane

0x36c3,	// (0x00023eb2) listscroll_popup_info_pane_g1

0x36cb,	// (0x00023eba) scroll_pane_cp7

0x36d5,	// (0x00023ec4) popup_info_list_pane_t1_ParamLimits

0x36d5,	// (0x00023ec4) popup_info_list_pane_t1

0x36ef,	// (0x00023ede) popup_info_list_pane_t2_ParamLimits

0x36ef,	// (0x00023ede) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002fd5d) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002fd5d) popup_info_list_pane_t

0x31a0,	// (0x0002398f) bg_popup_window_pane_cp12

0x682e,	// (0x0002701d) find_popup_pane

0x3280,	// (0x00023a6f) bg_popup_window_pane_cp3

0x3709,	// (0x00023ef8) heading_pane_cp3

0x3718,	// (0x00023f07) listscroll_popup_graphic_pane

0x31a0,	// (0x0002398f) bg_popup_window_pane_cp4

0xc2fd,	// (0x0002caec) heading_pane_cp4

0x3782,	// (0x00023f71) listscroll_popup_colour_pane

0xc307,	// (0x0002caf6) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc307,	// (0x0002caf6) cell_large_graphic_colour_none_popup_pane

0xc31b,	// (0x0002cb0a) grid_large_graphic_colour_popup_pane_ParamLimits

0xc31b,	// (0x0002cb0a) grid_large_graphic_colour_popup_pane

0xc33f,	// (0x0002cb2e) listscroll_popup_colour_pane_g1_ParamLimits

0xc33f,	// (0x0002cb2e) listscroll_popup_colour_pane_g1

0xc356,	// (0x0002cb45) listscroll_popup_colour_pane_g2_ParamLimits

0xc356,	// (0x0002cb45) listscroll_popup_colour_pane_g2

0xc36a,	// (0x0002cb59) listscroll_popup_colour_pane_g3_ParamLimits

0xc36a,	// (0x0002cb59) listscroll_popup_colour_pane_g3

0xc37a,	// (0x0002cb69) listscroll_popup_colour_pane_g4_ParamLimits

0xc37a,	// (0x0002cb69) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002fd62) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002fd62) listscroll_popup_colour_pane_g

0x3810,	// (0x00023fff) scroll_pane_cp6_ParamLimits

0x3810,	// (0x00023fff) scroll_pane_cp6

0xc38a,	// (0x0002cb79) cell_large_graphic_colour_popup_pane_ParamLimits

0xc38a,	// (0x0002cb79) cell_large_graphic_colour_popup_pane

0x3841,	// (0x00024030) cell_large_graphic_colour_none_popup_pane_t1

0x31a0,	// (0x0002398f) grid_highlight_pane_cp5

0x3850,	// (0x0002403f) cell_large_graphic_colour_popup_pane_g1

0x3858,	// (0x00024047) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002fd6b) cell_large_graphic_colour_popup_pane_g

0x3860,	// (0x0002404f) cell_large_graphic_colour_popup_pane_g2_copy1

0x3869,	// (0x00024058) grid_highlight_pane_cp4

0x3871,	// (0x00024060) bg_popup_window_pane_cp8_ParamLimits

0x3871,	// (0x00024060) bg_popup_window_pane_cp8

0x388c,	// (0x0002407b) popup_snote_single_text_window_g1_ParamLimits

0x388c,	// (0x0002407b) popup_snote_single_text_window_g1

0x389e,	// (0x0002408d) popup_snote_single_text_window_t1_ParamLimits

0x389e,	// (0x0002408d) popup_snote_single_text_window_t1

0x38b1,	// (0x000240a0) popup_snote_single_text_window_t2_ParamLimits

0x38b1,	// (0x000240a0) popup_snote_single_text_window_t2

0x38c4,	// (0x000240b3) popup_snote_single_text_window_t3_ParamLimits

0x38c4,	// (0x000240b3) popup_snote_single_text_window_t3

0x38fd,	// (0x000240ec) popup_snote_single_text_window_t4_ParamLimits

0x38fd,	// (0x000240ec) popup_snote_single_text_window_t4

0x3931,	// (0x00024120) popup_snote_single_text_window_t5_ParamLimits

0x3931,	// (0x00024120) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002fd70) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002fd70) popup_snote_single_text_window_t

0x3960,	// (0x0002414f) bg_popup_window_pane_cp9_ParamLimits

0x3960,	// (0x0002414f) bg_popup_window_pane_cp9

0x388c,	// (0x0002407b) popup_snote_single_graphic_window_g1_ParamLimits

0x388c,	// (0x0002407b) popup_snote_single_graphic_window_g1

0x396e,	// (0x0002415d) popup_snote_single_graphic_window_g2_ParamLimits

0x396e,	// (0x0002415d) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002fd7b) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002fd7b) popup_snote_single_graphic_window_g

0x397a,	// (0x00024169) popup_snote_single_graphic_window_t1_ParamLimits

0x397a,	// (0x00024169) popup_snote_single_graphic_window_t1

0x398d,	// (0x0002417c) popup_snote_single_graphic_window_t2_ParamLimits

0x398d,	// (0x0002417c) popup_snote_single_graphic_window_t2

0x39a0,	// (0x0002418f) popup_snote_single_graphic_window_t3_ParamLimits

0x39a0,	// (0x0002418f) popup_snote_single_graphic_window_t3

0x39d9,	// (0x000241c8) popup_snote_single_graphic_window_t4_ParamLimits

0x39d9,	// (0x000241c8) popup_snote_single_graphic_window_t4

0x3a0d,	// (0x000241fc) popup_snote_single_graphic_window_t5_ParamLimits

0x3a0d,	// (0x000241fc) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002fd80) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002fd80) popup_snote_single_graphic_window_t

0x6770,	// (0x00026f5f) grid_graphic_popup_pane_ParamLimits

0x6770,	// (0x00026f5f) grid_graphic_popup_pane

0x679a,	// (0x00026f89) listscroll_popup_graphic_pane_g1_ParamLimits

0x679a,	// (0x00026f89) listscroll_popup_graphic_pane_g1

0xde8e,	// (0x0002e67d) listscroll_popup_graphic_pane_g2_ParamLimits

0xde8e,	// (0x0002e67d) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00030175) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00030175) listscroll_popup_graphic_pane_g

0x67c2,	// (0x00026fb1) scroll_pane_cp5

0xde4b,	// (0x0002e63a) cell_graphic_popup_pane_ParamLimits

0xde4b,	// (0x0002e63a) cell_graphic_popup_pane

0x66e2,	// (0x00026ed1) cell_graphic_popup_pane_g1

0x66ea,	// (0x00026ed9) cell_graphic_popup_pane_g2

0x3860,	// (0x0002404f) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0003016e) cell_graphic_popup_pane_g

0x66f3,	// (0x00026ee2) cell_graphic_popup_pane_t2

0x3869,	// (0x00024058) grid_highlight_pane_cp3

0x3a4e,	// (0x0002423d) list_gen_pane_ParamLimits

0x3a4e,	// (0x0002423d) list_gen_pane

0x3a80,	// (0x0002426f) scroll_pane

0xde02,	// (0x0002e5f1) bg_list_pane_g1_ParamLimits

0xde02,	// (0x0002e5f1) bg_list_pane_g1

0x6657,	// (0x00026e46) bg_list_pane_g2_ParamLimits

0x6657,	// (0x00026e46) bg_list_pane_g2

0x666c,	// (0x00026e5b) bg_list_pane_g3_ParamLimits

0x666c,	// (0x00026e5b) bg_list_pane_g3

0x6680,	// (0x00026e6f) bg_list_pane_g4_ParamLimits

0x6680,	// (0x00026e6f) bg_list_pane_g4

0xde1f,	// (0x0002e60e) bg_list_pane_g5_ParamLimits

0xde1f,	// (0x0002e60e) bg_list_pane_g5

0x0004,

0xf974,	// (0x00030163) bg_list_pane_g_ParamLimits

0xf974,	// (0x00030163) bg_list_pane_g

0xddb9,	// (0x0002e5a8) list_double2_graphic_large_graphic_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_double2_graphic_large_graphic_pane

0xddb9,	// (0x0002e5a8) list_double2_graphic_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_double2_graphic_pane

0xddb9,	// (0x0002e5a8) list_double2_large_graphic_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_double2_large_graphic_pane

0xddb9,	// (0x0002e5a8) list_double2_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_double2_pane

0xddb9,	// (0x0002e5a8) list_double_graphic_heading_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_double_graphic_heading_pane

0xddb9,	// (0x0002e5a8) list_double_graphic_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_double_graphic_pane

0xddb9,	// (0x0002e5a8) list_double_heading_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_double_heading_pane

0xddb9,	// (0x0002e5a8) list_double_large_graphic_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_double_large_graphic_pane

0xddb9,	// (0x0002e5a8) list_double_number_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_double_number_pane

0xddb9,	// (0x0002e5a8) list_double_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_double_pane

0xddb9,	// (0x0002e5a8) list_double_time_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_double_time_pane

0xddb9,	// (0x0002e5a8) list_setting_number_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_setting_number_pane

0xddb9,	// (0x0002e5a8) list_setting_pane_ParamLimits

0xddb9,	// (0x0002e5a8) list_setting_pane

0xbbd1,	// (0x0002c3c0) list_single_2graphic_pane_ParamLimits

0xbbd1,	// (0x0002c3c0) list_single_2graphic_pane

0xbbd1,	// (0x0002c3c0) list_single_graphic_heading_pane_ParamLimits

0xbbd1,	// (0x0002c3c0) list_single_graphic_heading_pane

0xbbd1,	// (0x0002c3c0) list_single_graphic_pane_ParamLimits

0xbbd1,	// (0x0002c3c0) list_single_graphic_pane

0xbbd1,	// (0x0002c3c0) list_single_heading_pane_ParamLimits

0xbbd1,	// (0x0002c3c0) list_single_heading_pane

0xddef,	// (0x0002e5de) list_single_large_graphic_pane_ParamLimits

0xddef,	// (0x0002e5de) list_single_large_graphic_pane

0xbbd1,	// (0x0002c3c0) list_single_number_heading_pane_ParamLimits

0xbbd1,	// (0x0002c3c0) list_single_number_heading_pane

0xbbd1,	// (0x0002c3c0) list_single_number_pane_ParamLimits

0xbbd1,	// (0x0002c3c0) list_single_number_pane

0xbbd1,	// (0x0002c3c0) list_single_pane_ParamLimits

0xbbd1,	// (0x0002c3c0) list_single_pane

0x31a0,	// (0x0002398f) list_highlight_pane_cp1

0x0311,	// (0x00020b00) list_single_pane_g1_ParamLimits

0x0311,	// (0x00020b00) list_single_pane_g1

0x031d,	// (0x00020b0c) list_single_pane_g2_ParamLimits

0x031d,	// (0x00020b0c) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002fd92) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002fd92) list_single_pane_g

0x0660,	// (0x00020e4f) list_single_pane_t1_ParamLimits

0x0660,	// (0x00020e4f) list_single_pane_t1

0x0311,	// (0x00020b00) list_single_number_pane_g1_ParamLimits

0x0311,	// (0x00020b00) list_single_number_pane_g1

0x031d,	// (0x00020b0c) list_single_number_pane_g2_ParamLimits

0x031d,	// (0x00020b0c) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002fd92) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002fd92) list_single_number_pane_g

0x0387,	// (0x00020b76) list_single_number_pane_t1_ParamLimits

0x0387,	// (0x00020b76) list_single_number_pane_t1

0xbb93,	// (0x0002c382) list_single_number_pane_t2_ParamLimits

0xbb93,	// (0x0002c382) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00030124) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00030124) list_single_number_pane_t

0xb557,	// (0x0002bd46) list_single_graphic_pane_g1_ParamLimits

0xb557,	// (0x0002bd46) list_single_graphic_pane_g1

0x0311,	// (0x00020b00) list_single_graphic_pane_g2_ParamLimits

0x0311,	// (0x00020b00) list_single_graphic_pane_g2

0x031d,	// (0x00020b0c) list_single_graphic_pane_g3_ParamLimits

0x031d,	// (0x00020b0c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002fd8b) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002fd8b) list_single_graphic_pane_g

0xb563,	// (0x0002bd52) list_single_graphic_pane_t1_ParamLimits

0xb563,	// (0x0002bd52) list_single_graphic_pane_t1

0x0311,	// (0x00020b00) list_single_heading_pane_g1_ParamLimits

0x0311,	// (0x00020b00) list_single_heading_pane_g1

0x031d,	// (0x00020b0c) list_single_heading_pane_g2_ParamLimits

0x031d,	// (0x00020b0c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002fd92) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002fd92) list_single_heading_pane_g

0x0610,	// (0x00020dff) list_single_heading_pane_t1_ParamLimits

0x0610,	// (0x00020dff) list_single_heading_pane_t1

0xb579,	// (0x0002bd68) list_single_heading_pane_t2_ParamLimits

0xb579,	// (0x0002bd68) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002fd97) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002fd97) list_single_heading_pane_t

0x0311,	// (0x00020b00) list_single_number_heading_pane_g1_ParamLimits

0x0311,	// (0x00020b00) list_single_number_heading_pane_g1

0x031d,	// (0x00020b0c) list_single_number_heading_pane_g2_ParamLimits

0x031d,	// (0x00020b0c) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002fd92) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002fd92) list_single_number_heading_pane_g

0x0610,	// (0x00020dff) list_single_number_heading_pane_t1_ParamLimits

0x0610,	// (0x00020dff) list_single_number_heading_pane_t1

0xb58b,	// (0x0002bd7a) list_single_number_heading_pane_t2_ParamLimits

0xb58b,	// (0x0002bd7a) list_single_number_heading_pane_t2

0x063c,	// (0x00020e2b) list_single_number_heading_pane_t3_ParamLimits

0x063c,	// (0x00020e2b) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002fd9c) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002fd9c) list_single_number_heading_pane_t

0x0305,	// (0x00020af4) list_single_graphic_heading_pane_g1_ParamLimits

0x0305,	// (0x00020af4) list_single_graphic_heading_pane_g1

0xb59d,	// (0x0002bd8c) list_single_graphic_heading_pane_g4_ParamLimits

0xb59d,	// (0x0002bd8c) list_single_graphic_heading_pane_g4

0x031d,	// (0x00020b0c) list_single_graphic_heading_pane_g5_ParamLimits

0x031d,	// (0x00020b0c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002fda3) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002fda3) list_single_graphic_heading_pane_g

0x0610,	// (0x00020dff) list_single_graphic_heading_pane_t1_ParamLimits

0x0610,	// (0x00020dff) list_single_graphic_heading_pane_t1

0xb5ae,	// (0x0002bd9d) list_single_graphic_heading_pane_t2_ParamLimits

0xb5ae,	// (0x0002bd9d) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002fdaa) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002fdaa) list_single_graphic_heading_pane_t

0x0676,	// (0x00020e65) list_single_large_graphic_pane_g1_ParamLimits

0x0676,	// (0x00020e65) list_single_large_graphic_pane_g1

0xf44e,	// (0x0002fc3d) list_single_large_graphic_pane_g2_ParamLimits

0xf44e,	// (0x0002fc3d) list_single_large_graphic_pane_g2

0xf45a,	// (0x0002fc49) list_single_large_graphic_pane_g3_ParamLimits

0xf45a,	// (0x0002fc49) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002fdaf) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002fdaf) list_single_large_graphic_pane_g

0x5639,	// (0x00025e28) wait_border_pane_g2_copy1

0xb5c0,	// (0x0002bdaf) list_single_large_graphic_pane_g4_cp2

0x0682,	// (0x00020e71) list_single_large_graphic_pane_t1_ParamLimits

0x0682,	// (0x00020e71) list_single_large_graphic_pane_t1

0xb5c8,	// (0x0002bdb7) list_double_pane_g1_ParamLimits

0xb5c8,	// (0x0002bdb7) list_double_pane_g1

0xb5d4,	// (0x0002bdc3) list_double_pane_g2_ParamLimits

0xb5d4,	// (0x0002bdc3) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002fdb6) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002fdb6) list_double_pane_g

0xb5e0,	// (0x0002bdcf) list_double_pane_t1_ParamLimits

0xb5e0,	// (0x0002bdcf) list_double_pane_t1

0xb5f6,	// (0x0002bde5) list_double_pane_t2_ParamLimits

0xb5f6,	// (0x0002bde5) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002fdbb) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002fdbb) list_double_pane_t

0xb608,	// (0x0002bdf7) list_double2_pane_g1_ParamLimits

0xb608,	// (0x0002bdf7) list_double2_pane_g1

0xb619,	// (0x0002be08) list_double2_pane_g2_ParamLimits

0xb619,	// (0x0002be08) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002fdc0) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002fdc0) list_double2_pane_g

0xb625,	// (0x0002be14) list_double2_pane_t1_ParamLimits

0xb625,	// (0x0002be14) list_double2_pane_t1

0xb63b,	// (0x0002be2a) list_double2_pane_t2_ParamLimits

0xb63b,	// (0x0002be2a) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002fdc5) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002fdc5) list_double2_pane_t

0xb5c8,	// (0x0002bdb7) list_double_number_pane_g1_ParamLimits

0xb5c8,	// (0x0002bdb7) list_double_number_pane_g1

0xb5d4,	// (0x0002bdc3) list_double_number_pane_g2_ParamLimits

0xb5d4,	// (0x0002bdc3) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002fdb6) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002fdb6) list_double_number_pane_g

0xb64d,	// (0x0002be3c) list_double_number_pane_t1_ParamLimits

0xb64d,	// (0x0002be3c) list_double_number_pane_t1

0xb65f,	// (0x0002be4e) list_double_number_pane_t2_ParamLimits

0xb65f,	// (0x0002be4e) list_double_number_pane_t2

0xb675,	// (0x0002be64) list_double_number_pane_t3_ParamLimits

0xb675,	// (0x0002be64) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002fdca) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002fdca) list_double_number_pane_t

0xb687,	// (0x0002be76) list_double_graphic_pane_g1_ParamLimits

0xb687,	// (0x0002be76) list_double_graphic_pane_g1

0xb693,	// (0x0002be82) list_double_graphic_pane_g2_ParamLimits

0xb693,	// (0x0002be82) list_double_graphic_pane_g2

0xb6a2,	// (0x0002be91) list_double_graphic_pane_g3_ParamLimits

0xb6a2,	// (0x0002be91) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002fdd1) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002fdd1) list_double_graphic_pane_g

0xb6ba,	// (0x0002bea9) list_double_graphic_pane_t1_ParamLimits

0xb6ba,	// (0x0002bea9) list_double_graphic_pane_t1

0xb6d0,	// (0x0002bebf) list_double_graphic_pane_t2_ParamLimits

0xb6d0,	// (0x0002bebf) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002fdda) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002fdda) list_double_graphic_pane_t

0xb6e2,	// (0x0002bed1) list_double2_graphic_pane_g1_ParamLimits

0xb6e2,	// (0x0002bed1) list_double2_graphic_pane_g1

0xb6ee,	// (0x0002bedd) list_double2_graphic_pane_g2_ParamLimits

0xb6ee,	// (0x0002bedd) list_double2_graphic_pane_g2

0xb619,	// (0x0002be08) list_double2_graphic_pane_g3_ParamLimits

0xb619,	// (0x0002be08) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002fddf) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002fddf) list_double2_graphic_pane_g

0xb6fa,	// (0x0002bee9) list_double2_graphic_pane_t1_ParamLimits

0xb6fa,	// (0x0002bee9) list_double2_graphic_pane_t1

0xb710,	// (0x0002beff) list_double2_graphic_pane_t2_ParamLimits

0xb710,	// (0x0002beff) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002fde6) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002fde6) list_double2_graphic_pane_t

0xb722,	// (0x0002bf11) list_double_large_graphic_pane_g1_ParamLimits

0xb722,	// (0x0002bf11) list_double_large_graphic_pane_g1

0xb741,	// (0x0002bf30) list_double_large_graphic_pane_g2_ParamLimits

0xb741,	// (0x0002bf30) list_double_large_graphic_pane_g2

0xb5d4,	// (0x0002bdc3) list_double_large_graphic_pane_g3_ParamLimits

0xb5d4,	// (0x0002bdc3) list_double_large_graphic_pane_g3

0xb752,	// (0x0002bf41) list_double_large_graphic_pane_g4_ParamLimits

0xb752,	// (0x0002bf41) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002fdeb) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002fdeb) list_double_large_graphic_pane_g

0xb765,	// (0x0002bf54) list_double_large_graphic_pane_t1_ParamLimits

0xb765,	// (0x0002bf54) list_double_large_graphic_pane_t1

0xb77e,	// (0x0002bf6d) list_double_large_graphic_pane_t2_ParamLimits

0xb77e,	// (0x0002bf6d) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002fdf6) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002fdf6) list_double_large_graphic_pane_t

0xb790,	// (0x0002bf7f) list_double2_large_graphic_pane_g1_ParamLimits

0xb790,	// (0x0002bf7f) list_double2_large_graphic_pane_g1

0xb608,	// (0x0002bdf7) list_double2_large_graphic_pane_g2_ParamLimits

0xb608,	// (0x0002bdf7) list_double2_large_graphic_pane_g2

0xb619,	// (0x0002be08) list_double2_large_graphic_pane_g3_ParamLimits

0xb619,	// (0x0002be08) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002fdfb) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002fdfb) list_double2_large_graphic_pane_g

0xb79c,	// (0x0002bf8b) list_double2_large_graphic_pane_t1_ParamLimits

0xb79c,	// (0x0002bf8b) list_double2_large_graphic_pane_t1

0xb7b2,	// (0x0002bfa1) list_double2_large_graphic_pane_t2_ParamLimits

0xb7b2,	// (0x0002bfa1) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002fe02) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002fe02) list_double2_large_graphic_pane_t

0xb7c4,	// (0x0002bfb3) list_double_heading_pane_g1_ParamLimits

0xb7c4,	// (0x0002bfb3) list_double_heading_pane_g1

0xf47b,	// (0x0002fc6a) list_double_heading_pane_g2_ParamLimits

0xf47b,	// (0x0002fc6a) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002fe07) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002fe07) list_double_heading_pane_g

0xb7d5,	// (0x0002bfc4) list_double_heading_pane_t1_ParamLimits

0xb7d5,	// (0x0002bfc4) list_double_heading_pane_t1

0xb63b,	// (0x0002be2a) list_double_heading_pane_t2_ParamLimits

0xb63b,	// (0x0002be2a) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002fe0c) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002fe0c) list_double_heading_pane_t

0xb6e2,	// (0x0002bed1) list_double_graphic_heading_pane_g1_ParamLimits

0xb6e2,	// (0x0002bed1) list_double_graphic_heading_pane_g1

0xb7c4,	// (0x0002bfb3) list_double_graphic_heading_pane_g2_ParamLimits

0xb7c4,	// (0x0002bfb3) list_double_graphic_heading_pane_g2

0xf47b,	// (0x0002fc6a) list_double_graphic_heading_pane_g3_ParamLimits

0xf47b,	// (0x0002fc6a) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002fe11) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002fe11) list_double_graphic_heading_pane_g

0xb7eb,	// (0x0002bfda) list_double_graphic_heading_pane_t1_ParamLimits

0xb7eb,	// (0x0002bfda) list_double_graphic_heading_pane_t1

0xb710,	// (0x0002beff) list_double_graphic_heading_pane_t2_ParamLimits

0xb710,	// (0x0002beff) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002fe18) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002fe18) list_double_graphic_heading_pane_t

0xb741,	// (0x0002bf30) list_double_time_pane_g1_ParamLimits

0xb741,	// (0x0002bf30) list_double_time_pane_g1

0xb5d4,	// (0x0002bdc3) list_double_time_pane_g2_ParamLimits

0xb5d4,	// (0x0002bdc3) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002fe1d) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002fe1d) list_double_time_pane_g

0xb801,	// (0x0002bff0) list_double_time_pane_t1_ParamLimits

0xb801,	// (0x0002bff0) list_double_time_pane_t1

0xb817,	// (0x0002c006) list_double_time_pane_t2_ParamLimits

0xb817,	// (0x0002c006) list_double_time_pane_t2

0xb829,	// (0x0002c018) list_double_time_pane_t3_ParamLimits

0xb829,	// (0x0002c018) list_double_time_pane_t3

0xb83b,	// (0x0002c02a) list_double_time_pane_t4_ParamLimits

0xb83b,	// (0x0002c02a) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002fe22) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002fe22) list_double_time_pane_t

0xb6ee,	// (0x0002bedd) list_setting_pane_g1_ParamLimits

0xb6ee,	// (0x0002bedd) list_setting_pane_g1

0xb619,	// (0x0002be08) list_setting_pane_g2_ParamLimits

0xb619,	// (0x0002be08) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002fe2b) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002fe2b) list_setting_pane_g

0xb84d,	// (0x0002c03c) list_setting_pane_t1_ParamLimits

0xb84d,	// (0x0002c03c) list_setting_pane_t1

0xb867,	// (0x0002c056) list_setting_pane_t2_ParamLimits

0xb867,	// (0x0002c056) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002fe30) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002fe30) list_setting_pane_t

0xb8a6,	// (0x0002c095) set_value_pane_cp_ParamLimits

0xb8a6,	// (0x0002c095) set_value_pane_cp

0xb8b2,	// (0x0002c0a1) list_setting_number_pane_g1_ParamLimits

0xb8b2,	// (0x0002c0a1) list_setting_number_pane_g1

0xb8be,	// (0x0002c0ad) list_setting_number_pane_g2_ParamLimits

0xb8be,	// (0x0002c0ad) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002fe37) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002fe37) list_setting_number_pane_g

0xb8ca,	// (0x0002c0b9) list_setting_number_pane_t1_ParamLimits

0xb8ca,	// (0x0002c0b9) list_setting_number_pane_t1

0xb8e3,	// (0x0002c0d2) list_setting_number_pane_t2_ParamLimits

0xb8e3,	// (0x0002c0d2) list_setting_number_pane_t2

0xb8fd,	// (0x0002c0ec) list_setting_number_pane_t3_ParamLimits

0xb8fd,	// (0x0002c0ec) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002fe3c) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002fe3c) list_setting_number_pane_t

0xb8a6,	// (0x0002c095) set_value_pane_ParamLimits

0xb8a6,	// (0x0002c095) set_value_pane

0x3ab4,	// (0x000242a3) bg_set_opt_pane_ParamLimits

0x3ab4,	// (0x000242a3) bg_set_opt_pane

0xf513,	// (0x0002fd02) set_value_pane_t1

0x3ad5,	// (0x000242c4) slider_set_pane_cp3

0x3ade,	// (0x000242cd) volume_small_pane_cp

0x3ae7,	// (0x000242d6) list_form_gen_pane

0x3af0,	// (0x000242df) scroll_pane_cp8

0xb940,	// (0x0002c12f) form_field_data_pane_ParamLimits

0xb940,	// (0x0002c12f) form_field_data_pane

0xb957,	// (0x0002c146) form_field_data_wide_pane_ParamLimits

0xb957,	// (0x0002c146) form_field_data_wide_pane

0xb977,	// (0x0002c166) form_field_popup_pane_ParamLimits

0xb977,	// (0x0002c166) form_field_popup_pane

0xb997,	// (0x0002c186) form_field_popup_wide_pane_ParamLimits

0xb997,	// (0x0002c186) form_field_popup_wide_pane

0x0072,	// (0x00020861) form_field_slider_pane_ParamLimits

0x0072,	// (0x00020861) form_field_slider_pane

0x0085,	// (0x00020874) form_field_slider_wide_pane_ParamLimits

0x0085,	// (0x00020874) form_field_slider_wide_pane

0x3b01,	// (0x000242f0) data_form_pane

0xb9b8,	// (0x0002c1a7) form_field_data_pane_t1

0x3b0d,	// (0x000242fc) input_focus_pane

0x00ba,	// (0x000208a9) data_form_wide_pane

0x00d7,	// (0x000208c6) form_field_data_wide_pane_t1

0x387e,	// (0x0002406d) input_focus_pane_cp6

0xb9d2,	// (0x0002c1c1) form_field_popup_pane_t1

0x3b0d,	// (0x000242fc) input_focus_pane_cp7

0x3b3b,	// (0x0002432a) list_form_pane

0x0119,	// (0x00020908) form_field_popup_wide_pane_t1

0x3b0d,	// (0x000242fc) input_focus_pane_cp8

0x3b47,	// (0x00024336) list_form_wide_pane

0xb9f4,	// (0x0002c1e3) form_field_slider_pane_t1_ParamLimits

0xb9f4,	// (0x0002c1e3) form_field_slider_pane_t1

0xba0c,	// (0x0002c1fb) form_field_slider_pane_t2_ParamLimits

0xba0c,	// (0x0002c1fb) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002fe4c) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002fe4c) form_field_slider_pane_t

0x34fb,	// (0x00023cea) input_focus_pane_cp9_ParamLimits

0x34fb,	// (0x00023cea) input_focus_pane_cp9

0xba21,	// (0x0002c210) slider_cont_pane_ParamLimits

0xba21,	// (0x0002c210) slider_cont_pane

0x3b53,	// (0x00024342) form_field_slider_wide_pane_t1_ParamLimits

0x3b53,	// (0x00024342) form_field_slider_wide_pane_t1

0x0175,	// (0x00020964) form_field_slider_wide_pane_t2_ParamLimits

0x0175,	// (0x00020964) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002fe51) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002fe51) form_field_slider_wide_pane_t

0x34fb,	// (0x00023cea) input_focus_pane_cp10_ParamLimits

0x34fb,	// (0x00023cea) input_focus_pane_cp10

0xba35,	// (0x0002c224) slider_cont_pane_cp1_ParamLimits

0xba35,	// (0x0002c224) slider_cont_pane_cp1

0xba49,	// (0x0002c238) slider_form_pane_cp

0x3b65,	// (0x00024354) input_focus_pane_g1

0x3b6d,	// (0x0002435c) input_focus_pane_g2

0x3b75,	// (0x00024364) input_focus_pane_g3

0x3b7d,	// (0x0002436c) input_focus_pane_g4

0x3b85,	// (0x00024374) input_focus_pane_g5

0x3b8d,	// (0x0002437c) input_focus_pane_g6

0x3b95,	// (0x00024384) input_focus_pane_g7

0x3b9d,	// (0x0002438c) input_focus_pane_g8

0x3ba5,	// (0x00024394) input_focus_pane_g9

0xe440,	// (0x0002ec2f) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002fe56) input_focus_pane_g

0x5642,	// (0x00025e31) wait_border_pane_g3_copy1

0xba51,	// (0x0002c240) data_form_pane_t1

0xe440,	// (0x0002ec2f) wait_anim_pane_g1_copy1

0xbba5,	// (0x0002c394) data_form_wide_pane_t1

0xba6b,	// (0x0002c25a) list_form_graphic_pane_cp_ParamLimits

0xba6b,	// (0x0002c25a) list_form_graphic_pane_cp

0x656e,	// (0x00026d5d) slider_form_pane_g1

0x6577,	// (0x00026d66) slider_form_pane_g2

0x0006,

0xf965,	// (0x00030154) slider_form_pane_g

0xba7d,	// (0x0002c26c) list_form_graphic_pane_ParamLimits

0xba7d,	// (0x0002c26c) list_form_graphic_pane

0x01f3,	// (0x000209e2) list_form_graphic_pane_g1

0x01fb,	// (0x000209ea) list_form_graphic_pane_t1_ParamLimits

0x01fb,	// (0x000209ea) list_form_graphic_pane_t1

0x3280,	// (0x00023a6f) list_highlight_pane_cp5_ParamLimits

0x3280,	// (0x00023a6f) list_highlight_pane_cp5

0xba90,	// (0x0002c27f) find_pane_g1

0x3bad,	// (0x0002439c) input_find_pane

0xba99,	// (0x0002c288) input_find_pane_g1_ParamLimits

0xba99,	// (0x0002c288) input_find_pane_g1

0xbaa5,	// (0x0002c294) input_find_pane_t1_ParamLimits

0xbaa5,	// (0x0002c294) input_find_pane_t1

0xbaba,	// (0x0002c2a9) input_find_pane_t2_ParamLimits

0xbaba,	// (0x0002c2a9) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002fe6b) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002fe6b) input_find_pane_t

0x3bb6,	// (0x000243a5) input_focus_pane_cp5_ParamLimits

0x3bb6,	// (0x000243a5) input_focus_pane_cp5

0x3bd5,	// (0x000243c4) bg_popup_window_pane_cp2_ParamLimits

0x3bd5,	// (0x000243c4) bg_popup_window_pane_cp2

0x3be2,	// (0x000243d1) listscroll_menu_pane_ParamLimits

0x3be2,	// (0x000243d1) listscroll_menu_pane

0xd348,	// (0x0002db37) popup_submenu_window_ParamLimits

0xd348,	// (0x0002db37) popup_submenu_window

0x3c1a,	// (0x00024409) find_popup_pane_g1

0x3c22,	// (0x00024411) input_popup_find_pane_cp

0x3c2c,	// (0x0002441b) input_focus_pane_cp4_ParamLimits

0x3c2c,	// (0x0002441b) input_focus_pane_cp4

0x3c46,	// (0x00024435) input_popup_find_pane_t1_ParamLimits

0x3c46,	// (0x00024435) input_popup_find_pane_t1

0x31a0,	// (0x0002398f) bg_popup_sub_pane_cp

0x3c74,	// (0x00024463) listscroll_popup_sub_pane

0x3c7c,	// (0x0002446b) list_submenu_pane_ParamLimits

0x3c7c,	// (0x0002446b) list_submenu_pane

0x3c8d,	// (0x0002447c) scroll_pane_cp4

0x3c95,	// (0x00024484) list_single_popup_submenu_pane_ParamLimits

0x3c95,	// (0x00024484) list_single_popup_submenu_pane

0x3ca9,	// (0x00024498) list_single_popup_submenu_pane_g1

0x3cb1,	// (0x000244a0) list_single_popup_submenu_pane_t1_ParamLimits

0x3cb1,	// (0x000244a0) list_single_popup_submenu_pane_t1

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp1_ParamLimits

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp1

0x3cc6,	// (0x000244b5) tabs_2_active_pane_g1

0xd382,	// (0x0002db71) tabs_2_active_pane_t1

0x34fb,	// (0x00023cea) bg_passive_tab_pane_cp1_ParamLimits

0x34fb,	// (0x00023cea) bg_passive_tab_pane_cp1

0x3cc6,	// (0x000244b5) tabs_2_passive_pane_g1

0xd382,	// (0x0002db71) tabs_2_passive_pane_t1

0x3280,	// (0x00023a6f) bg_active_tab_pane_cp4

0xd394,	// (0x0002db83) tabs_2_long_active_pane_t1

0x4af3,	// (0x000252e2) bg_passive_tab_pane_cp4

0x1d46,	// (0x00022535) list_single_midp_graphic_pane_g4_ParamLimits

0x3280,	// (0x00023a6f) bg_active_tab_pane_cp5

0xd3a7,	// (0x0002db96) tabs_3_long_active_pane_t1

0x4af3,	// (0x000252e2) bg_passive_tab_pane_cp5

0x1d46,	// (0x00022535) list_single_midp_graphic_pane_g4

0x3280,	// (0x00023a6f) bg_popup_window_pane_cp13_ParamLimits

0x3280,	// (0x00023a6f) bg_popup_window_pane_cp13

0x3d28,	// (0x00024517) listscroll_popup_fast_pane_ParamLimits

0x3d28,	// (0x00024517) listscroll_popup_fast_pane

0x3d37,	// (0x00024526) grid_popup_fast_pane_ParamLimits

0x3d37,	// (0x00024526) grid_popup_fast_pane

0x3d49,	// (0x00024538) scroll_pane_cp9_ParamLimits

0x3d49,	// (0x00024538) scroll_pane_cp9

0x7ead,	// (0x0002869c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ead,	// (0x0002869c) list_single_graphic_hl_pane_t1_cp2

0x3d6d,	// (0x0002455c) input_focus_pane_cp20_ParamLimits

0x3d6d,	// (0x0002455c) input_focus_pane_cp20

0x3d7b,	// (0x0002456a) query_popup_data_pane_t1_ParamLimits

0x3d7b,	// (0x0002456a) query_popup_data_pane_t1

0x3d8e,	// (0x0002457d) query_popup_data_pane_t2_ParamLimits

0x3d8e,	// (0x0002457d) query_popup_data_pane_t2

0x3dd4,	// (0x000245c3) query_popup_data_pane_t3_ParamLimits

0x3dd4,	// (0x000245c3) query_popup_data_pane_t3

0x3e15,	// (0x00024604) query_popup_data_pane_t4_ParamLimits

0x3e15,	// (0x00024604) query_popup_data_pane_t4

0x3e51,	// (0x00024640) query_popup_data_pane_t5_ParamLimits

0x3e51,	// (0x00024640) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002fe70) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002fe70) query_popup_data_pane_t

0x3b65,	// (0x00024354) bg_set_opt_pane_g1

0x3b6d,	// (0x0002435c) bg_set_opt_pane_g2

0x3b75,	// (0x00024364) bg_set_opt_pane_g3

0x3b7d,	// (0x0002436c) bg_set_opt_pane_g4

0x3b85,	// (0x00024374) bg_set_opt_pane_g5

0x3b8d,	// (0x0002437c) bg_set_opt_pane_g6

0x3b95,	// (0x00024384) bg_set_opt_pane_g7

0x3b9d,	// (0x0002438c) bg_set_opt_pane_g8

0x3ba5,	// (0x00024394) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002fe7b) bg_set_opt_pane_g

0x13e6,	// (0x00021bd5) control_top_pane_stacon_ParamLimits

0x13e6,	// (0x00021bd5) control_top_pane_stacon

0x1439,	// (0x00021c28) signal_pane_stacon_ParamLimits

0x1439,	// (0x00021c28) signal_pane_stacon

0x445c,	// (0x00024c4b) stacon_top_pane_g1_ParamLimits

0x445c,	// (0x00024c4b) stacon_top_pane_g1

0x145e,	// (0x00021c4d) title_pane_stacon_ParamLimits

0x145e,	// (0x00021c4d) title_pane_stacon

0x1488,	// (0x00021c77) uni_indicator_pane_stacon_ParamLimits

0x1488,	// (0x00021c77) uni_indicator_pane_stacon

0x149d,	// (0x00021c8c) battery_pane_stacon_ParamLimits

0x149d,	// (0x00021c8c) battery_pane_stacon

0x14e1,	// (0x00021cd0) control_bottom_pane_stacon_ParamLimits

0x14e1,	// (0x00021cd0) control_bottom_pane_stacon

0x1504,	// (0x00021cf3) navi_pane_stacon_ParamLimits

0x1504,	// (0x00021cf3) navi_pane_stacon

0x447e,	// (0x00024c6d) stacon_bottom_pane_g1_ParamLimits

0x447e,	// (0x00024c6d) stacon_bottom_pane_g1

0x1149,	// (0x00021938) aid_levels_signal_lsc_ParamLimits

0x1149,	// (0x00021938) aid_levels_signal_lsc

0x115f,	// (0x0002194e) signal_pane_stacon_g1_ParamLimits

0x115f,	// (0x0002194e) signal_pane_stacon_g1

0x1173,	// (0x00021962) signal_pane_stacon_g2_ParamLimits

0x1173,	// (0x00021962) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002fe8e) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002fe8e) signal_pane_stacon_g

0x11a8,	// (0x00021997) title_pane_stacon_t1_ParamLimits

0x11a8,	// (0x00021997) title_pane_stacon_t1

0x3e95,	// (0x00024684) uni_indicator_pane_stacon_g1

0x3e9f,	// (0x0002468e) uni_indicator_pane_stacon_g2

0x3ea9,	// (0x00024698) uni_indicator_pane_stacon_g3

0x3eb3,	// (0x000246a2) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002fe9a) uni_indicator_pane_stacon_g

0x11cd,	// (0x000219bc) control_top_pane_stacon_g1

0x11d5,	// (0x000219c4) control_top_pane_stacon_t1_ParamLimits

0x11d5,	// (0x000219c4) control_top_pane_stacon_t1

0x120c,	// (0x000219fb) aid_levels_battery_lsc_ParamLimits

0x120c,	// (0x000219fb) aid_levels_battery_lsc

0x1223,	// (0x00021a12) battery_pane_stacon_g1_ParamLimits

0x1223,	// (0x00021a12) battery_pane_stacon_g1

0x1236,	// (0x00021a25) battery_pane_stacon_g2_ParamLimits

0x1236,	// (0x00021a25) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002fea3) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002fea3) battery_pane_stacon_g

0x1274,	// (0x00021a63) navi_icon_pane_stacon

0x1288,	// (0x00021a77) navi_navi_pane_stacon

0x1274,	// (0x00021a63) navi_text_pane_stacon

0x11cd,	// (0x000219bc) control_bottom_pane_stacon_g1

0x129c,	// (0x00021a8b) control_bottom_pane_stacon_t1_ParamLimits

0x129c,	// (0x00021a8b) control_bottom_pane_stacon_t1

0xd3b9,	// (0x0002dba8) grid_app_pane_ParamLimits

0xd3b9,	// (0x0002dba8) grid_app_pane

0xd3f1,	// (0x0002dbe0) scroll_pane_cp15_ParamLimits

0xd3f1,	// (0x0002dbe0) scroll_pane_cp15

0xd406,	// (0x0002dbf5) cell_app_pane_ParamLimits

0xd406,	// (0x0002dbf5) cell_app_pane

0xd44b,	// (0x0002dc3a) cell_app_pane_g1_ParamLimits

0xd44b,	// (0x0002dc3a) cell_app_pane_g1

0x3f58,	// (0x00024747) cell_app_pane_g2_ParamLimits

0x3f58,	// (0x00024747) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002fea8) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002fea8) cell_app_pane_g

0xd46f,	// (0x0002dc5e) cell_app_pane_t1_ParamLimits

0xd46f,	// (0x0002dc5e) cell_app_pane_t1

0x3f7b,	// (0x0002476a) grid_highlight_pane_ParamLimits

0x3f7b,	// (0x0002476a) grid_highlight_pane

0x3b65,	// (0x00024354) cell_highlight_pane_g1

0x3b6d,	// (0x0002435c) cell_highlight_pane_g2

0x3b75,	// (0x00024364) cell_highlight_pane_g3

0x3b7d,	// (0x0002436c) cell_highlight_pane_g4

0x3b85,	// (0x00024374) cell_highlight_pane_g5

0x3b8d,	// (0x0002437c) cell_highlight_pane_g6

0x3b95,	// (0x00024384) cell_highlight_pane_g7

0x3b9d,	// (0x0002438c) cell_highlight_pane_g8

0x3ba5,	// (0x00024394) cell_highlight_pane_g9

0xe440,	// (0x0002ec2f) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002fe56) cell_highlight_pane_g

0x3f8c,	// (0x0002477b) bg_scroll_pane

0x12e6,	// (0x00021ad5) scroll_handle_pane

0x3fd3,	// (0x000247c2) scroll_bg_pane_g1

0x3fe8,	// (0x000247d7) scroll_bg_pane_g2

0x4000,	// (0x000247ef) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002fead) scroll_bg_pane_g

0x4015,	// (0x00024804) scroll_handle_focus_pane_ParamLimits

0x4015,	// (0x00024804) scroll_handle_focus_pane

0x3fd3,	// (0x000247c2) scroll_handle_pane_g1

0x4022,	// (0x00024811) scroll_handle_pane_g2

0x4000,	// (0x000247ef) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002feb4) scroll_handle_pane_g

0x3c2c,	// (0x0002441b) bg_popup_sub_pane_cp21_ParamLimits

0x3c2c,	// (0x0002441b) bg_popup_sub_pane_cp21

0x4036,	// (0x00024825) popup_fep_japan_predictive_window_t1_ParamLimits

0x4036,	// (0x00024825) popup_fep_japan_predictive_window_t1

0x4050,	// (0x0002483f) popup_fep_japan_predictive_window_t2_ParamLimits

0x4050,	// (0x0002483f) popup_fep_japan_predictive_window_t2

0x4083,	// (0x00024872) popup_fep_japan_predictive_window_t3_ParamLimits

0x4083,	// (0x00024872) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002febb) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002febb) popup_fep_japan_predictive_window_t

0x31a0,	// (0x0002398f) bg_popup_sub_pane_cp23

0x40ba,	// (0x000248a9) listscroll_japin_cand_pane

0x40c2,	// (0x000248b1) popup_fep_japan_candidate_window_t1

0x40d0,	// (0x000248bf) candidate_pane_ParamLimits

0x40d0,	// (0x000248bf) candidate_pane

0x40e2,	// (0x000248d1) scroll_pane_cp30

0x40ea,	// (0x000248d9) list_single_popup_jap_candidate_pane_ParamLimits

0x40ea,	// (0x000248d9) list_single_popup_jap_candidate_pane

0x31a0,	// (0x0002398f) list_highlight_pane_cp30

0x40ff,	// (0x000248ee) list_single_popup_jap_candidate_pane_t1

0x410e,	// (0x000248fd) level_1_signal

0x4120,	// (0x0002490f) level_2_signal

0x4133,	// (0x00024922) level_3_signal

0x4146,	// (0x00024935) level_4_signal

0x4159,	// (0x00024948) level_5_signal

0x416c,	// (0x0002495b) level_6_signal

0x417f,	// (0x0002496e) level_7_signal

0x410e,	// (0x000248fd) level_1_battery

0x4120,	// (0x0002490f) level_2_battery

0x4133,	// (0x00024922) level_3_battery

0x4146,	// (0x00024935) level_4_battery

0x4159,	// (0x00024948) level_5_battery

0x416c,	// (0x0002495b) level_6_battery

0x417f,	// (0x0002496e) level_7_battery

0x41aa,	// (0x00024999) list_menu_pane_ParamLimits

0x41aa,	// (0x00024999) list_menu_pane

0x41c0,	// (0x000249af) scroll_pane_cp25_ParamLimits

0x41c0,	// (0x000249af) scroll_pane_cp25

0x41d9,	// (0x000249c8) list_double2_graphic_pane_cp2_ParamLimits

0x41d9,	// (0x000249c8) list_double2_graphic_pane_cp2

0x41d9,	// (0x000249c8) list_double2_large_graphic_pane_cp2_ParamLimits

0x41d9,	// (0x000249c8) list_double2_large_graphic_pane_cp2

0x41d9,	// (0x000249c8) list_double2_pane_cp2_ParamLimits

0x41d9,	// (0x000249c8) list_double2_pane_cp2

0x41d9,	// (0x000249c8) list_double_graphic_pane_cp2_ParamLimits

0x41d9,	// (0x000249c8) list_double_graphic_pane_cp2

0x41d9,	// (0x000249c8) list_double_large_graphic_pane_cp2_ParamLimits

0x41d9,	// (0x000249c8) list_double_large_graphic_pane_cp2

0x41d9,	// (0x000249c8) list_double_number_pane_cp2_ParamLimits

0x41d9,	// (0x000249c8) list_double_number_pane_cp2

0x41d9,	// (0x000249c8) list_double_pane_cp2_ParamLimits

0x41d9,	// (0x000249c8) list_double_pane_cp2

0xd486,	// (0x0002dc75) list_single_2graphic_pane_cp2_ParamLimits

0xd486,	// (0x0002dc75) list_single_2graphic_pane_cp2

0xd486,	// (0x0002dc75) list_single_graphic_heading_pane_cp2_ParamLimits

0xd486,	// (0x0002dc75) list_single_graphic_heading_pane_cp2

0xd486,	// (0x0002dc75) list_single_graphic_pane_cp2_ParamLimits

0xd486,	// (0x0002dc75) list_single_graphic_pane_cp2

0xd486,	// (0x0002dc75) list_single_heading_pane_cp2_ParamLimits

0xd486,	// (0x0002dc75) list_single_heading_pane_cp2

0x4216,	// (0x00024a05) list_single_large_graphic_pane_cp2_ParamLimits

0x4216,	// (0x00024a05) list_single_large_graphic_pane_cp2

0xd486,	// (0x0002dc75) list_single_number_heading_pane_cp2_ParamLimits

0xd486,	// (0x0002dc75) list_single_number_heading_pane_cp2

0xd486,	// (0x0002dc75) list_single_number_pane_cp2_ParamLimits

0xd486,	// (0x0002dc75) list_single_number_pane_cp2

0xd498,	// (0x0002dc87) list_single_pane_cp2_ParamLimits

0xd498,	// (0x0002dc87) list_single_pane_cp2

0x42ab,	// (0x00024a9a) bg_popup_sub_pane_cp22

0x1398,	// (0x00021b87) popup_side_volume_key_window_g1

0x13c2,	// (0x00021bb1) popup_side_volume_key_window_t1

0x13de,	// (0x00021bcd) volume_small_pane_cp1

0x34fb,	// (0x00023cea) bg_popup_sub_pane_cp24_ParamLimits

0x34fb,	// (0x00023cea) bg_popup_sub_pane_cp24

0x42c1,	// (0x00024ab0) fep_china_uni_candidate_pane_ParamLimits

0x42c1,	// (0x00024ab0) fep_china_uni_candidate_pane

0x42d5,	// (0x00024ac4) fep_china_uni_entry_pane

0x42e5,	// (0x00024ad4) popup_fep_china_uni_window_g1

0x4301,	// (0x00024af0) fep_china_uni_entry_pane_g1

0x4309,	// (0x00024af8) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0002feec) fep_china_uni_entry_pane_g

0x4311,	// (0x00024b00) fep_entry_item_pane

0x431b,	// (0x00024b0a) fep_candidate_item_pane

0x4323,	// (0x00024b12) fep_china_uni_candidate_pane_g1

0x432b,	// (0x00024b1a) fep_china_uni_candidate_pane_g2

0x4333,	// (0x00024b22) fep_china_uni_candidate_pane_g3

0x433b,	// (0x00024b2a) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0002fef1) fep_china_uni_candidate_pane_g

0xe440,	// (0x0002ec2f) fep_entry_item_pane_g1

0x4343,	// (0x00024b32) fep_entry_item_pane_t1_ParamLimits

0x4343,	// (0x00024b32) fep_entry_item_pane_t1

0x4359,	// (0x00024b48) fep_candidate_item_pane_t1_ParamLimits

0x4359,	// (0x00024b48) fep_candidate_item_pane_t1

0x436e,	// (0x00024b5d) fep_candidate_item_pane_t2_ParamLimits

0x436e,	// (0x00024b5d) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0002fefa) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0002fefa) fep_candidate_item_pane_t

0x3280,	// (0x00023a6f) list_highlight_pane_cp31_ParamLimits

0x3280,	// (0x00023a6f) list_highlight_pane_cp31

0x4380,	// (0x00024b6f) level_1_signal_lsc

0x4389,	// (0x00024b78) level_2_signal_lsc

0x4392,	// (0x00024b81) level_3_signal_lsc

0x439b,	// (0x00024b8a) level_4_signal_lsc

0x43a4,	// (0x00024b93) level_5_signal_lsc

0x43ad,	// (0x00024b9c) level_6_signal_lsc

0x43b6,	// (0x00024ba5) level_7_signal_lsc

0x43b6,	// (0x00024ba5) level_1_battery_lsc

0x43bf,	// (0x00024bae) level_2_battery_lsc

0x43c8,	// (0x00024bb7) level_3_battery_lsc

0x43d1,	// (0x00024bc0) level_4_battery_lsc

0x43da,	// (0x00024bc9) level_5_battery_lsc

0x43e3,	// (0x00024bd2) level_6_battery_lsc

0x4380,	// (0x00024b6f) level_7_battery_lsc

0x43ec,	// (0x00024bdb) scroll_handle_focus_pane_g1

0x43f5,	// (0x00024be4) scroll_handle_focus_pane_g2

0x43fe,	// (0x00024bed) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0002feff) scroll_handle_focus_pane_g

0xbacf,	// (0x0002c2be) list_single_2graphic_pane_g1_ParamLimits

0xbacf,	// (0x0002c2be) list_single_2graphic_pane_g1

0xb59d,	// (0x0002bd8c) list_single_2graphic_pane_g2_ParamLimits

0xb59d,	// (0x0002bd8c) list_single_2graphic_pane_g2

0x031d,	// (0x00020b0c) list_single_2graphic_pane_g3_ParamLimits

0x031d,	// (0x00020b0c) list_single_2graphic_pane_g3

0xbadb,	// (0x0002c2ca) list_single_2graphic_pane_g4_ParamLimits

0xbadb,	// (0x0002c2ca) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002ff06) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002ff06) list_single_2graphic_pane_g

0xbaec,	// (0x0002c2db) list_single_2graphic_pane_t1_ParamLimits

0xbaec,	// (0x0002c2db) list_single_2graphic_pane_t1

0xbb1a,	// (0x0002c309) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbb1a,	// (0x0002c309) list_double2_graphic_large_graphic_pane_g1

0xb608,	// (0x0002bdf7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb608,	// (0x0002bdf7) list_double2_graphic_large_graphic_pane_g2

0xb619,	// (0x0002be08) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb619,	// (0x0002be08) list_double2_graphic_large_graphic_pane_g3

0xbb2c,	// (0x0002c31b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb2c,	// (0x0002c31b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0002ff0f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0002ff0f) list_double2_graphic_large_graphic_pane_g

0xbb38,	// (0x0002c327) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb38,	// (0x0002c327) list_double2_graphic_large_graphic_pane_t1

0xbb4e,	// (0x0002c33d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb4e,	// (0x0002c33d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002ff18) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002ff18) list_double2_graphic_large_graphic_pane_t

0x4549,	// (0x00024d38) popup_fast_swap_window_ParamLimits

0x4549,	// (0x00024d38) popup_fast_swap_window

0x4565,	// (0x00024d54) popup_side_volume_key_window

0x4581,	// (0x00024d70) stacon_top_pane

0x458b,	// (0x00024d7a) status_pane_ParamLimits

0x458b,	// (0x00024d7a) status_pane

0xe436,	// (0x0002ec25) status_small_pane

0x31a0,	// (0x0002398f) control_pane

0x31a0,	// (0x0002398f) stacon_bottom_pane

0x3af0,	// (0x000242df) scroll_pane_cp121

0x3ae7,	// (0x000242d6) set_content_pane

0x4407,	// (0x00024bf6) bg_active_tab_pane_g1_cp1

0x4410,	// (0x00024bff) bg_active_tab_pane_g2_cp1

0x4419,	// (0x00024c08) bg_active_tab_pane_g3_cp1

0x4407,	// (0x00024bf6) bg_passive_tab_pane_g1_cp1

0x4410,	// (0x00024bff) bg_passive_tab_pane_g2_cp1

0x4419,	// (0x00024c08) bg_passive_tab_pane_g3_cp1

0x4422,	// (0x00024c11) bg_active_tab_pane_g1_cp2

0x4410,	// (0x00024bff) bg_active_tab_pane_g2_cp2

0x442b,	// (0x00024c1a) bg_active_tab_pane_g3_cp2

0x4422,	// (0x00024c11) bg_passive_tab_pane_g1_cp2

0x4410,	// (0x00024bff) bg_passive_tab_pane_g2_cp2

0x442b,	// (0x00024c1a) bg_passive_tab_pane_g3_cp2

0x4434,	// (0x00024c23) bg_active_tab_pane_g1_cp3

0x4410,	// (0x00024bff) bg_active_tab_pane_g2_cp3

0x443d,	// (0x00024c2c) bg_active_tab_pane_g3_cp3

0x4434,	// (0x00024c23) bg_passive_tab_pane_g1_cp3

0x4410,	// (0x00024bff) bg_passive_tab_pane_g2_cp3

0x443d,	// (0x00024c2c) bg_passive_tab_pane_g3_cp3

0x4446,	// (0x00024c35) bg_active_tab_pane_g1_cp4

0x4410,	// (0x00024bff) bg_active_tab_pane_g2_cp4

0x4451,	// (0x00024c40) bg_active_tab_pane_g3_cp4

0x4446,	// (0x00024c35) bg_passive_tab_pane_g1_cp4

0x4410,	// (0x00024bff) bg_passive_tab_pane_g2_cp4

0x4451,	// (0x00024c40) bg_passive_tab_pane_g3_cp4

0x449a,	// (0x00024c89) bg_active_tab_pane_g1_cp5

0x4410,	// (0x00024bff) bg_active_tab_pane_g2_cp5

0x44a3,	// (0x00024c92) bg_active_tab_pane_g3_cp5

0x449a,	// (0x00024c89) bg_passive_tab_pane_g1_cp5

0x4410,	// (0x00024bff) bg_passive_tab_pane_g2_cp5

0x44a3,	// (0x00024c92) bg_passive_tab_pane_g3_cp5

0x6b82,	// (0x00027371) list_set_graphic_pane_ParamLimits

0x6b82,	// (0x00027371) list_set_graphic_pane

0x31a0,	// (0x0002398f) bg_set_opt_pane_cp4

0x44cc,	// (0x00024cbb) list_set_graphic_pane_g1_ParamLimits

0x44cc,	// (0x00024cbb) list_set_graphic_pane_g1

0x44d8,	// (0x00024cc7) list_set_graphic_pane_g2_ParamLimits

0x44d8,	// (0x00024cc7) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0002ff1d) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0002ff1d) list_set_graphic_pane_g

0x0009,

0xfa9e,	// (0x0003028d) volume_small_pane_cp_g

0x44fc,	// (0x00024ceb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x44fc,	// (0x00024ceb) list_double2_large_graphic_pane_g1_cp2

0x4508,	// (0x00024cf7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4508,	// (0x00024cf7) list_double2_large_graphic_pane_g2_cp2

0x4519,	// (0x00024d08) list_double2_large_graphic_pane_g3_cp2

0x4521,	// (0x00024d10) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4521,	// (0x00024d10) list_double2_large_graphic_pane_t1_cp2

0x4537,	// (0x00024d26) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4537,	// (0x00024d26) list_double2_large_graphic_pane_t2_cp2

0x6121,	// (0x00026910) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6121,	// (0x00026910) list_double_large_graphic_pane_g1_cp2

0x6132,	// (0x00026921) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6132,	// (0x00026921) list_double_large_graphic_pane_g2_cp2

0x46a7,	// (0x00024e96) list_double_large_graphic_pane_g3_cp2

0x6143,	// (0x00026932) list_double_large_graphic_pane_g4_cp

0x614b,	// (0x0002693a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x614b,	// (0x0002693a) list_double_large_graphic_pane_t1_cp2

0x6162,	// (0x00026951) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6162,	// (0x00026951) list_double_large_graphic_pane_t2_cp2

0x4599,	// (0x00024d88) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4599,	// (0x00024d88) list_double2_graphic_pane_g1_cp2

0x45a7,	// (0x00024d96) list_double2_graphic_pane_g2_cp2_ParamLimits

0x45a7,	// (0x00024d96) list_double2_graphic_pane_g2_cp2

0x45b8,	// (0x00024da7) list_double2_graphic_pane_g3_cp2

0x45c2,	// (0x00024db1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x45c2,	// (0x00024db1) list_double2_graphic_pane_t1_cp2

0x45d8,	// (0x00024dc7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x45d8,	// (0x00024dc7) list_double2_graphic_pane_t2_cp2

0x45ea,	// (0x00024dd9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x45ea,	// (0x00024dd9) list_single_number_heading_pane_g1_cp2

0x45f6,	// (0x00024de5) list_single_number_heading_pane_g2_cp2

0x45fe,	// (0x00024ded) list_single_number_heading_pane_t1_cp2_ParamLimits

0x45fe,	// (0x00024ded) list_single_number_heading_pane_t1_cp2

0x4614,	// (0x00024e03) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4614,	// (0x00024e03) list_single_number_heading_pane_t2_cp2

0x4626,	// (0x00024e15) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4626,	// (0x00024e15) list_single_number_heading_pane_t3_cp2

0x45ea,	// (0x00024dd9) list_single_heading_pane_g1_cp2_ParamLimits

0x45ea,	// (0x00024dd9) list_single_heading_pane_g1_cp2

0x45f6,	// (0x00024de5) list_single_heading_pane_g2_cp2

0x45fe,	// (0x00024ded) list_single_heading_pane_t1_cp2_ParamLimits

0x45fe,	// (0x00024ded) list_single_heading_pane_t1_cp2

0x5f29,	// (0x00026718) list_single_heading_pane_t2_cp2_ParamLimits

0x5f29,	// (0x00026718) list_single_heading_pane_t2_cp2

0x5e71,	// (0x00026660) list_double_graphic_pane_g1_cp2_ParamLimits

0x5e71,	// (0x00026660) list_double_graphic_pane_g1_cp2

0x5e7d,	// (0x0002666c) list_double_graphic_pane_g2_cp2_ParamLimits

0x5e7d,	// (0x0002666c) list_double_graphic_pane_g2_cp2

0x5e8c,	// (0x0002667b) list_double_graphic_pane_g3_cp2

0x5e94,	// (0x00026683) list_double_graphic_pane_t1_cp2_ParamLimits

0x5e94,	// (0x00026683) list_double_graphic_pane_t1_cp2

0x5eaa,	// (0x00026699) list_double_graphic_pane_t2_cp2_ParamLimits

0x5eaa,	// (0x00026699) list_double_graphic_pane_t2_cp2

0x469b,	// (0x00024e8a) list_double_number_pane_g1_cp2_ParamLimits

0x469b,	// (0x00024e8a) list_double_number_pane_g1_cp2

0x46a7,	// (0x00024e96) list_double_number_pane_g2_cp2

0x5e35,	// (0x00026624) list_double_number_pane_t1_cp2_ParamLimits

0x5e35,	// (0x00026624) list_double_number_pane_t1_cp2

0x5e49,	// (0x00026638) list_double_number_pane_t2_cp2_ParamLimits

0x5e49,	// (0x00026638) list_double_number_pane_t2_cp2

0x5e5f,	// (0x0002664e) list_double_number_pane_t3_cp2_ParamLimits

0x5e5f,	// (0x0002664e) list_double_number_pane_t3_cp2

0x5d12,	// (0x00026501) list_single_graphic_pane_g1_cp2_ParamLimits

0x5d12,	// (0x00026501) list_single_graphic_pane_g1_cp2

0x4708,	// (0x00024ef7) list_single_graphic_pane_g2_cp2_ParamLimits

0x4708,	// (0x00024ef7) list_single_graphic_pane_g2_cp2

0x4714,	// (0x00024f03) list_single_graphic_pane_g3_cp2

0x5ce8,	// (0x000264d7) list_single_graphic_pane_t1_cp2_ParamLimits

0x5ce8,	// (0x000264d7) list_single_graphic_pane_t1_cp2

0x4708,	// (0x00024ef7) list_single_number_pane_g1_cp2_ParamLimits

0x4708,	// (0x00024ef7) list_single_number_pane_g1_cp2

0x4714,	// (0x00024f03) list_single_number_pane_g2_cp2

0x5ce8,	// (0x000264d7) list_single_number_pane_t1_cp2_ParamLimits

0x5ce8,	// (0x000264d7) list_single_number_pane_t1_cp2

0x5cfe,	// (0x000264ed) list_single_number_pane_t2_cp2_ParamLimits

0x5cfe,	// (0x000264ed) list_single_number_pane_t2_cp2

0x4508,	// (0x00024cf7) list_double2_pane_g1_cp2_ParamLimits

0x4508,	// (0x00024cf7) list_double2_pane_g1_cp2

0x4519,	// (0x00024d08) list_double2_pane_g2_cp2

0x4673,	// (0x00024e62) list_double2_pane_t1_cp2_ParamLimits

0x4673,	// (0x00024e62) list_double2_pane_t1_cp2

0x4689,	// (0x00024e78) list_double2_pane_t2_cp2_ParamLimits

0x4689,	// (0x00024e78) list_double2_pane_t2_cp2

0x469b,	// (0x00024e8a) list_double_pane_g1_cp2_ParamLimits

0x469b,	// (0x00024e8a) list_double_pane_g1_cp2

0x46a7,	// (0x00024e96) list_double_pane_g2_cp2

0x46af,	// (0x00024e9e) list_double_pane_t1_cp2_ParamLimits

0x46af,	// (0x00024e9e) list_double_pane_t1_cp2

0x46c5,	// (0x00024eb4) list_double_pane_t2_cp2_ParamLimits

0x46c5,	// (0x00024eb4) list_double_pane_t2_cp2

0x46f8,	// (0x00024ee7) list_single_pane_cp2_g3

0x4708,	// (0x00024ef7) list_single_pane_g1_cp2_ParamLimits

0x4708,	// (0x00024ef7) list_single_pane_g1_cp2

0x4714,	// (0x00024f03) list_single_pane_g2_cp2

0x471c,	// (0x00024f0b) list_single_pane_t1_cp2_ParamLimits

0x471c,	// (0x00024f0b) list_single_pane_t1_cp2

0x4734,	// (0x00024f23) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4734,	// (0x00024f23) list_single_large_graphic_pane_g1_cp2

0x4740,	// (0x00024f2f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4740,	// (0x00024f2f) list_single_large_graphic_pane_g2_cp2

0x474c,	// (0x00024f3b) list_single_large_graphic_pane_g3_cp2

0x4754,	// (0x00024f43) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4754,	// (0x00024f43) list_single_large_graphic_pane_g4_cp1

0x476e,	// (0x00024f5d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x476e,	// (0x00024f5d) list_single_large_graphic_pane_t1_cp2

0x5cb4,	// (0x000264a3) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5cb4,	// (0x000264a3) list_single_graphic_heading_pane_g1_cp2

0x5c81,	// (0x00026470) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5c81,	// (0x00026470) list_single_graphic_heading_pane_g4_cp2

0x4714,	// (0x00024f03) list_single_graphic_heading_pane_g5_cp2

0x5cc0,	// (0x000264af) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5cc0,	// (0x000264af) list_single_graphic_heading_pane_t1_cp2

0x5cd6,	// (0x000264c5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5cd6,	// (0x000264c5) list_single_graphic_heading_pane_t2_cp2

0x5c75,	// (0x00026464) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5c75,	// (0x00026464) list_single_2graphic_pane_g1_cp2

0x5c81,	// (0x00026470) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5c81,	// (0x00026470) list_single_2graphic_pane_g2_cp2

0x4714,	// (0x00024f03) list_single_2graphic_pane_g3_cp2

0x5c92,	// (0x00026481) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c92,	// (0x00026481) list_single_2graphic_pane_g4_cp2

0x5c9e,	// (0x0002648d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5c9e,	// (0x0002648d) list_single_2graphic_pane_t1_cp2

0xe440,	// (0x0002ec2f) list_highlight_pane_g10_cp1

0x584d,	// (0x0002603c) list_highlight_pane_g1_cp1

0x5855,	// (0x00026044) list_highlight_pane_g2_cp1

0x585d,	// (0x0002604c) list_highlight_pane_g3_cp1

0x5865,	// (0x00026054) list_highlight_pane_g4_cp1

0x586d,	// (0x0002605c) list_highlight_pane_g5_cp1

0x5875,	// (0x00026064) list_highlight_pane_g6_cp1

0x587d,	// (0x0002606c) list_highlight_pane_g7_cp1

0x5885,	// (0x00026074) list_highlight_pane_g8_cp1

0x588d,	// (0x0002607c) list_highlight_pane_g9_cp1

0xdae3,	// (0x0002e2d2) form_field_slider_pane_t3

0xdaf1,	// (0x0002e2e0) form_field_slider_pane_t4

0x5789,	// (0x00025f78) slider_form_pane_ParamLimits

0x5789,	// (0x00025f78) slider_form_pane

0x31a0,	// (0x0002398f) control_abbreviations

0x31a0,	// (0x0002398f) control_conventions

0x31a0,	// (0x0002398f) control_definitions

0x31a0,	// (0x0002398f) format_table_attribute

0x5f73,	// (0x00026762) bg_popup_preview_window_pane_g9

0x31a0,	// (0x0002398f) format_table_data2

0x31a0,	// (0x0002398f) format_table_data3

0x31a0,	// (0x0002398f) format_table_data_example

0x0008,

0x31a0,	// (0x0002398f) intro_purpose

0xf8c5,	// (0x000300b4) bg_popup_preview_window_pane_g

0x31a0,	// (0x0002398f) texts_category

0x31a0,	// (0x0002398f) texts_graphics

0x4784,	// (0x00024f73) text_digital

0x4793,	// (0x00024f82) text_primary

0x47a2,	// (0x00024f91) text_primary_small

0x47b1,	// (0x00024fa0) text_secondary

0x47c0,	// (0x00024faf) text_title

0x66b6,	// (0x00026ea5) bg_passive_tab_pane_g1_cp3_srt

0x4410,	// (0x00024bff) bg_passive_tab_pane_g2_cp3_srt

0x66bf,	// (0x00026eae) bg_passive_tab_pane_g3_cp3_srt

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp3_srt_ParamLimits

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp3_srt

0x66c8,	// (0x00026eb7) tabs_4_active_pane_srt_g1

0xde35,	// (0x0002e624) tabs_4_active_pane_srt_t1_ParamLimits

0xde35,	// (0x0002e624) tabs_4_active_pane_srt_t1

0x66b6,	// (0x00026ea5) bg_active_tab_pane_g1_cp3_copy1

0x4410,	// (0x00024bff) bg_active_tab_pane_g2_cp3_copy1

0x66bf,	// (0x00026eae) bg_active_tab_pane_g3_cp3_copy1

0x3280,	// (0x00023a6f) tabs_2_long_active_pane_srt_ParamLimits

0x3280,	// (0x00023a6f) tabs_2_long_active_pane_srt

0x3280,	// (0x00023a6f) tabs_2_long_passive_pane_srt_ParamLimits

0x3280,	// (0x00023a6f) tabs_2_long_passive_pane_srt

0x4af3,	// (0x000252e2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4af3,	// (0x000252e2) bg_passive_tab_pane_cp4_srt

0x63a1,	// (0x00026b90) bg_passive_tab_pane_g1_cp4_srt

0x4410,	// (0x00024bff) bg_passive_tab_pane_g2_cp4_srt

0x63aa,	// (0x00026b99) bg_passive_tab_pane_g3_cp4_srt

0x3280,	// (0x00023a6f) bg_active_tab_pane_cp4_srt_ParamLimits

0x3280,	// (0x00023a6f) bg_active_tab_pane_cp4_srt

0xdc4e,	// (0x0002e43d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc4e,	// (0x0002e43d) tabs_2_long_active_pane_srt_t1

0x63a1,	// (0x00026b90) bg_active_tab_pane_g1_cp4_srt

0x4410,	// (0x00024bff) bg_active_tab_pane_g2_cp4_srt

0x63aa,	// (0x00026b99) bg_active_tab_pane_g3_cp4_srt

0x34fb,	// (0x00023cea) tabs_3_long_active_pane_srt_ParamLimits

0x34fb,	// (0x00023cea) tabs_3_long_active_pane_srt

0x34fb,	// (0x00023cea) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x34fb,	// (0x00023cea) tabs_3_long_passive_pane_cp_srt

0x34fb,	// (0x00023cea) tabs_3_long_passive_pane_srt_ParamLimits

0x34fb,	// (0x00023cea) tabs_3_long_passive_pane_srt

0x4af3,	// (0x000252e2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4af3,	// (0x000252e2) bg_passive_tab_pane_cp5_srt

0x449a,	// (0x00024c89) bg_passive_tab_pane_g1_cp5_srt

0x4410,	// (0x00024bff) bg_passive_tab_pane_g2_cp5_srt

0x44a3,	// (0x00024c92) bg_passive_tab_pane_g3_cp5_srt

0x3280,	// (0x00023a6f) bg_active_tab_pane_cp5_srt_ParamLimits

0x3280,	// (0x00023a6f) bg_active_tab_pane_cp5_srt

0xdc38,	// (0x0002e427) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdc38,	// (0x0002e427) tabs_3_long_active_pane_srt_t1

0x449a,	// (0x00024c89) bg_active_tab_pane_g1_cp5_srt

0x4410,	// (0x00024bff) bg_active_tab_pane_g2_cp5_srt

0x44a3,	// (0x00024c92) bg_active_tab_pane_g3_cp5_srt

0x6381,	// (0x00026b70) navi_text_pane_srt_t1

0x6379,	// (0x00026b68) navi_icon_pane_srt_g1

0x4995,	// (0x00025184) midp_editing_number_pane_srt

0x47cf,	// (0x00024fbe) midp_ticker_pane_srt

0x499d,	// (0x0002518c) midp_ticker_pane_srt_g1

0x49a5,	// (0x00025194) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002ff3c) midp_ticker_pane_srt_g

0x49ad,	// (0x0002519c) midp_ticker_pane_srt_t1

0x636a,	// (0x00026b59) midp_editing_number_pane_t1_copy1

0xd525,	// (0x0002dd14) listscroll_midp_pane

0xd525,	// (0x0002dd14) midp_form_pane

0x4847,	// (0x00025036) midp_info_popup_window_ParamLimits

0x4847,	// (0x00025036) midp_info_popup_window

0x3c2c,	// (0x0002441b) bg_popup_sub_pane_cp50_ParamLimits

0x3c2c,	// (0x0002441b) bg_popup_sub_pane_cp50

0x5471,	// (0x00025c60) listscroll_midp_info_pane_ParamLimits

0x5471,	// (0x00025c60) listscroll_midp_info_pane

0x5451,	// (0x00025c40) listscroll_form_midp_pane_ParamLimits

0x5451,	// (0x00025c40) listscroll_form_midp_pane

0x545d,	// (0x00025c4c) scroll_bar_cp050

0x5451,	// (0x00025c40) list_midp_pane

0x7131,	// (0x00027920) signal_pane_g2_cp

0x536b,	// (0x00025b5a) listscroll_midp_info_pane_t1_ParamLimits

0x536b,	// (0x00025b5a) listscroll_midp_info_pane_t1

0x5383,	// (0x00025b72) listscroll_midp_info_pane_t2_ParamLimits

0x5383,	// (0x00025b72) listscroll_midp_info_pane_t2

0x53c1,	// (0x00025bb0) listscroll_midp_info_pane_t3_ParamLimits

0x53c1,	// (0x00025bb0) listscroll_midp_info_pane_t3

0x53fb,	// (0x00025bea) listscroll_midp_info_pane_t4_ParamLimits

0x53fb,	// (0x00025bea) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0002ffef) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0002ffef) listscroll_midp_info_pane_t

0x3c8d,	// (0x0002447c) scroll_pane_cp21

0x5309,	// (0x00025af8) form_midp_field_choice_group_pane

0x5312,	// (0x00025b01) form_midp_field_text_pane

0x5351,	// (0x00025b40) form_midp_field_time_pane

0x5359,	// (0x00025b48) form_midp_gauge_slider_pane

0x5362,	// (0x00025b51) form_midp_gauge_wait_pane

0x31a0,	// (0x0002398f) form_midp_image_pane

0xbb7c,	// (0x0002c36b) list_single_midp_pane_ParamLimits

0xbb7c,	// (0x0002c36b) list_single_midp_pane

0xdac2,	// (0x0002e2b1) form_midp_field_text_pane_t1

0x5091,	// (0x00025880) input_focus_pane_cp050

0x52f8,	// (0x00025ae7) list_midp_form_text_pane

0x5290,	// (0x00025a7f) form_midp_field_choice_group_pane_t1

0x529e,	// (0x00025a8d) input_focus_pane_cp051

0x52b2,	// (0x00025aa1) list_midp_choice_pane

0x31a0,	// (0x0002398f) status_idle_pane

0x5274,	// (0x00025a63) form_midp_field_time_pane_t1

0xe440,	// (0x0002ec2f) wait_anim_pane_g2_copy1

0x5282,	// (0x00025a71) form_midp_field_time_pane_t2

0x0001,

0x48f5,	// (0x000250e4) aid_navinavi_width_2_pane

0xf7fb,	// (0x0002ffea) form_midp_field_time_pane_t

0x31a0,	// (0x0002398f) input_focus_pane_cp052

0x31a0,	// (0x0002398f) bg_input_focus_pane_cp040

0x5234,	// (0x00025a23) form_midp_gauge_slider_pane_t1

0x5242,	// (0x00025a31) form_midp_gauge_slider_pane_t2

0xdaa6,	// (0x0002e295) form_midp_gauge_slider_pane_t3

0xdab4,	// (0x0002e2a3) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0002ffe1) form_midp_gauge_slider_pane_t

0x526c,	// (0x00025a5b) form_midp_slider_pane

0x3280,	// (0x00023a6f) bg_input_focus_pane_cp041_ParamLimits

0x3280,	// (0x00023a6f) bg_input_focus_pane_cp041

0x5201,	// (0x000259f0) form_midp_gauge_wait_pane_t1_ParamLimits

0x5201,	// (0x000259f0) form_midp_gauge_wait_pane_t1

0x5213,	// (0x00025a02) form_midp_gauge_wait_pane_t2_ParamLimits

0x5213,	// (0x00025a02) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0002ffdc) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0002ffdc) form_midp_gauge_wait_pane_t

0x5225,	// (0x00025a14) form_midp_wait_pane_ParamLimits

0x5225,	// (0x00025a14) form_midp_wait_pane

0x51cb,	// (0x000259ba) form_midp_image_pane_g1

0x51d4,	// (0x000259c3) form_midp_image_pane_t1

0x51e3,	// (0x000259d2) form_midp_image_pane_t2

0x51f2,	// (0x000259e1) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0002ffd5) form_midp_image_pane_t

0x51c2,	// (0x000259b1) list_single_midp_pane_g1

0x043b,	// (0x00020c2a) list_single_midp_pane_t1

0xda92,	// (0x0002e281) list_midp_form_item_pane_ParamLimits

0xda92,	// (0x0002e281) list_midp_form_item_pane

0x489d,	// (0x0002508c) list_midp_form_item_pane_t1

0x48ac,	// (0x0002509b) midp_ticker_pane_g1

0x48b8,	// (0x000250a7) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0002ff22) midp_ticker_pane_g

0x48c4,	// (0x000250b3) midp_ticker_pane_t1

0x65bb,	// (0x00026daa) midp_editing_number_pane_t1

0x6599,	// (0x00026d88) midp_editing_number_pane

0x65a8,	// (0x00026d97) midp_ticker_pane

0x635a,	// (0x00026b49) ai_message_heading_pane

0x31a0,	// (0x0002398f) bg_popup_window_pane_cp14

0x6362,	// (0x00026b51) listscroll_ai_message_pane

0x62e4,	// (0x00026ad3) ai_message_heading_pane_g1_ParamLimits

0x62e4,	// (0x00026ad3) ai_message_heading_pane_g1

0x62f0,	// (0x00026adf) ai_message_heading_pane_g2_ParamLimits

0x62f0,	// (0x00026adf) ai_message_heading_pane_g2

0x62fc,	// (0x00026aeb) ai_message_heading_pane_g3_ParamLimits

0x62fc,	// (0x00026aeb) ai_message_heading_pane_g3

0x6308,	// (0x00026af7) ai_message_heading_pane_g4_ParamLimits

0x6308,	// (0x00026af7) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x00030116) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x00030116) ai_message_heading_pane_g

0x6314,	// (0x00026b03) ai_message_heading_pane_t1_ParamLimits

0x6314,	// (0x00026b03) ai_message_heading_pane_t1

0x632e,	// (0x00026b1d) ai_message_heading_pane_t2_ParamLimits

0x632e,	// (0x00026b1d) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0003011f) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0003011f) ai_message_heading_pane_t

0x6340,	// (0x00026b2f) bg_popup_heading_pane_cp1_ParamLimits

0x6340,	// (0x00026b2f) bg_popup_heading_pane_cp1

0x62d2,	// (0x00026ac1) list_ai_message_pane_ParamLimits

0x62d2,	// (0x00026ac1) list_ai_message_pane

0x3c8d,	// (0x0002447c) scroll_pane_cp10

0x626e,	// (0x00026a5d) list_ai_message_pane_g1

0x6276,	// (0x00026a65) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x000300f3) list_ai_message_pane_g

0x627e,	// (0x00026a6d) list_ai_message_pane_t1_ParamLimits

0x627e,	// (0x00026a6d) list_ai_message_pane_t1

0x6293,	// (0x00026a82) list_ai_message_pane_t2_ParamLimits

0x6293,	// (0x00026a82) list_ai_message_pane_t2

0x62a8,	// (0x00026a97) list_ai_message_pane_t3_ParamLimits

0x62a8,	// (0x00026a97) list_ai_message_pane_t3

0x62bd,	// (0x00026aac) list_ai_message_pane_t4_ParamLimits

0x62bd,	// (0x00026aac) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x000300f8) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x000300f8) list_ai_message_pane_t

0xdc17,	// (0x0002e406) cell_ai_soft_ind_pane_ParamLimits

0xdc17,	// (0x0002e406) cell_ai_soft_ind_pane

0x48d6,	// (0x000250c5) cell_ai_soft_ind_pane_g1_ParamLimits

0x48d6,	// (0x000250c5) cell_ai_soft_ind_pane_g1

0x31a0,	// (0x0002398f) grid_highlight_cp1

0x48e3,	// (0x000250d2) text_secondary_cp56_ParamLimits

0x48e3,	// (0x000250d2) text_secondary_cp56

0x622e,	// (0x00026a1d) example_general_pane_ParamLimits

0x622e,	// (0x00026a1d) example_general_pane

0x623a,	// (0x00026a29) example_parent_pane_g1_ParamLimits

0x623a,	// (0x00026a29) example_parent_pane_g1

0x6246,	// (0x00026a35) example_parent_pane_t1_ParamLimits

0x6246,	// (0x00026a35) example_parent_pane_t1

0xc8fc,	// (0x0002d0eb) popup_preview_text_window_ParamLimits

0xc8fc,	// (0x0002d0eb) popup_preview_text_window

0x4700,	// (0x00024eef) list_single_pane_cp2_g4

0x35d7,	// (0x00023dc6) bg_popup_preview_window_pane_ParamLimits

0x35d7,	// (0x00023dc6) bg_popup_preview_window_pane

0x5f7b,	// (0x0002676a) popup_preview_text_window_t1_ParamLimits

0x5f7b,	// (0x0002676a) popup_preview_text_window_t1

0x5f99,	// (0x00026788) popup_preview_text_window_t2_ParamLimits

0x5f99,	// (0x00026788) popup_preview_text_window_t2

0x5fe2,	// (0x000267d1) popup_preview_text_window_t3_ParamLimits

0x5fe2,	// (0x000267d1) popup_preview_text_window_t3

0x6027,	// (0x00026816) popup_preview_text_window_t4_ParamLimits

0x6027,	// (0x00026816) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x000300c7) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x000300c7) popup_preview_text_window_t

0x60a5,	// (0x00026894) scroll_pane_cp11

0x501d,	// (0x0002580c) bg_popup_preview_window_pane_g1

0x5f3b,	// (0x0002672a) bg_popup_preview_window_pane_g2

0x5f43,	// (0x00026732) bg_popup_preview_window_pane_g3

0x5f4b,	// (0x0002673a) bg_popup_preview_window_pane_g4

0x5f53,	// (0x00026742) bg_popup_preview_window_pane_g5

0x5f5b,	// (0x0002674a) bg_popup_preview_window_pane_g6

0x5f63,	// (0x00026752) bg_popup_preview_window_pane_g7

0x5f6b,	// (0x0002675a) bg_popup_preview_window_pane_g8

0x0cd5,	// (0x000214c4) aid_popup_width_pane

0xc878,	// (0x0002d067) popup_midp_note_alarm_window_ParamLimits

0xc878,	// (0x0002d067) popup_midp_note_alarm_window

0x3b01,	// (0x000242f0) data_form_pane_ParamLimits

0xb9ae,	// (0x0002c19d) form_field_data_pane_g1

0xb9b8,	// (0x0002c1a7) form_field_data_pane_t1_ParamLimits

0x3b0d,	// (0x000242fc) input_focus_pane_ParamLimits

0x00ba,	// (0x000208a9) data_form_wide_pane_ParamLimits

0x00cb,	// (0x000208ba) form_field_data_wide_pane_g1

0x00d7,	// (0x000208c6) form_field_data_wide_pane_t1_ParamLimits

0x387e,	// (0x0002406d) input_focus_pane_cp6_ParamLimits

0xd374,	// (0x0002db63) input_popup_find_pane_g1_ParamLimits

0xd374,	// (0x0002db63) input_popup_find_pane_g1

0x1247,	// (0x00021a36) aid_navi_side_left_pane

0x125c,	// (0x00021a4b) aid_navi_side_right_pane

0x5948,	// (0x00026137) bg_popup_window_pane_cp30_ParamLimits

0x5948,	// (0x00026137) bg_popup_window_pane_cp30

0x59c2,	// (0x000261b1) popup_midp_note_alarm_window_g1_ParamLimits

0x59c2,	// (0x000261b1) popup_midp_note_alarm_window_g1

0x59f2,	// (0x000261e1) popup_midp_note_alarm_window_t1_ParamLimits

0x59f2,	// (0x000261e1) popup_midp_note_alarm_window_t1

0x5a93,	// (0x00026282) popup_midp_note_alarm_window_t2_ParamLimits

0x5a93,	// (0x00026282) popup_midp_note_alarm_window_t2

0x5b41,	// (0x00026330) popup_midp_note_alarm_window_t3_ParamLimits

0x5b41,	// (0x00026330) popup_midp_note_alarm_window_t3

0x5b73,	// (0x00026362) popup_midp_note_alarm_window_t4_ParamLimits

0x5b73,	// (0x00026362) popup_midp_note_alarm_window_t4

0x5b99,	// (0x00026388) popup_midp_note_alarm_window_t5_ParamLimits

0x5b99,	// (0x00026388) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00030064) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00030064) popup_midp_note_alarm_window_t

0x5c45,	// (0x00026434) wait_bar_pane_cp1_ParamLimits

0x5c45,	// (0x00026434) wait_bar_pane_cp1

0x31a0,	// (0x0002398f) wait_anim_pane_copy1

0x31a0,	// (0x0002398f) wait_border_pane_copy1

0x562e,	// (0x00025e1d) wait_border_pane_g1_copy1

0x00f1,	// (0x000208e0) form_field_popup_pane_g1

0xb9d2,	// (0x0002c1c1) form_field_popup_pane_t1_ParamLimits

0x3b0d,	// (0x000242fc) input_focus_pane_cp7_ParamLimits

0x3b3b,	// (0x0002432a) list_form_pane_ParamLimits

0x0111,	// (0x00020900) form_field_popup_wide_pane_g1

0x0119,	// (0x00020908) form_field_popup_wide_pane_t1_ParamLimits

0x3b0d,	// (0x000242fc) input_focus_pane_cp8_ParamLimits

0x3b47,	// (0x00024336) list_form_wide_pane_ParamLimits

0x6758,	// (0x00026f47) aid_size_cell_graphic_pane

0xba51,	// (0x0002c240) data_form_pane_t1_ParamLimits

0xbba5,	// (0x0002c394) data_form_wide_pane_t1_ParamLimits

0xd717,	// (0x0002df06) bg_status_flat_pane

0xc059,	// (0x0002c848) title_pane_t1_ParamLimits

0x3248,	// (0x00023a37) title_pane_t2_ParamLimits

0x326e,	// (0x00023a5d) title_pane_t3_ParamLimits

0xf532,	// (0x0002fd21) title_pane_t_ParamLimits

0x410e,	// (0x000248fd) level_1_signal_ParamLimits

0x4120,	// (0x0002490f) level_2_signal_ParamLimits

0x4133,	// (0x00024922) level_3_signal_ParamLimits

0x4146,	// (0x00024935) level_4_signal_ParamLimits

0x4159,	// (0x00024948) level_5_signal_ParamLimits

0x416c,	// (0x0002495b) level_6_signal_ParamLimits

0x417f,	// (0x0002496e) level_7_signal_ParamLimits

0x410e,	// (0x000248fd) level_1_battery_ParamLimits

0x4120,	// (0x0002490f) level_2_battery_ParamLimits

0x4133,	// (0x00024922) level_3_battery_ParamLimits

0x4146,	// (0x00024935) level_4_battery_ParamLimits

0x4159,	// (0x00024948) level_5_battery_ParamLimits

0x416c,	// (0x0002495b) level_6_battery_ParamLimits

0x417f,	// (0x0002496e) level_7_battery_ParamLimits

0x584d,	// (0x0002603c) bg_status_flat_pane_g1

0x5855,	// (0x00026044) bg_status_flat_pane_g2

0x585d,	// (0x0002604c) bg_status_flat_pane_g3

0x5865,	// (0x00026054) bg_status_flat_pane_g4

0x586d,	// (0x0002605c) bg_status_flat_pane_g5

0x5875,	// (0x00026064) bg_status_flat_pane_g6

0x587d,	// (0x0002606c) bg_status_flat_pane_g7

0xc0e5,	// (0x0002c8d4) tabs_3_active_pane_t1_ParamLimits

0xc0e5,	// (0x0002c8d4) tabs_3_passive_pane_t1_ParamLimits

0xc0f7,	// (0x0002c8e6) tabs_4_active_pane_t1_ParamLimits

0xc0f7,	// (0x0002c8e6) tabs_4_1_passive_pane_t1_ParamLimits

0xd382,	// (0x0002db71) tabs_2_active_pane_t1_ParamLimits

0xd382,	// (0x0002db71) tabs_2_passive_pane_t1_ParamLimits

0x3280,	// (0x00023a6f) bg_active_tab_pane_cp4_ParamLimits

0xd394,	// (0x0002db83) tabs_2_long_active_pane_t1_ParamLimits

0x4af3,	// (0x000252e2) bg_passive_tab_pane_cp4_ParamLimits

0x1d6e,	// (0x0002255d) list_single_midp_graphic_pane_t1_ParamLimits

0x3280,	// (0x00023a6f) bg_active_tab_pane_cp5_ParamLimits

0xd3a7,	// (0x0002db96) tabs_3_long_active_pane_t1_ParamLimits

0x4af3,	// (0x000252e2) bg_passive_tab_pane_cp5_ParamLimits

0x1d6e,	// (0x0002255d) list_single_midp_graphic_pane_t1

0xd717,	// (0x0002df06) bg_status_flat_pane_ParamLimits

0x4cad,	// (0x0002549c) indicator_pane_cp2_ParamLimits

0x4cad,	// (0x0002549c) indicator_pane_cp2

0xd895,	// (0x0002e084) navi_pane_srt_ParamLimits

0xd895,	// (0x0002e084) navi_pane_srt

0x4dfc,	// (0x000255eb) popup_clock_digital_analogue_window_cp1

0x335d,	// (0x00023b4c) indicator_pane_t1

0x47cf,	// (0x00024fbe) copy_highlight_pane

0x47cf,	// (0x00024fbe) cursor_graphics_pane

0x47cf,	// (0x00024fbe) graphic_within_text_pane

0x47cf,	// (0x00024fbe) link_highlight_pane

0x6068,	// (0x00026857) popup_preview_text_window_t5_ParamLimits

0x6068,	// (0x00026857) popup_preview_text_window_t5

0x48fd,	// (0x000250ec) cursor_digital_pane

0x48fd,	// (0x000250ec) cursor_primary_pane

0x490e,	// (0x000250fd) cursor_primary_small_pane

0x4916,	// (0x00025105) cursor_secondary_pane

0x491e,	// (0x0002510d) cursor_title_pane

0x48fd,	// (0x000250ec) link_highlight_digital_pane

0x4905,	// (0x000250f4) link_highlight_primary_pane

0x490e,	// (0x000250fd) link_highlight_primary_small_pane

0x4916,	// (0x00025105) link_highlight_secondary_pane

0x491e,	// (0x0002510d) link_highlight_title_pane

0x48fd,	// (0x000250ec) copy_highlight_digital_pane

0x48fd,	// (0x000250ec) copy_highlight_primary_pane

0x490e,	// (0x000250fd) copy_highlight_primary_small_pane

0x4916,	// (0x00025105) copy_highlight_secondary_pane

0x491e,	// (0x0002510d) copy_highlight_title_pane

0x4916,	// (0x00025105) graphic_text_digital_pane

0x58eb,	// (0x000260da) graphic_text_primary_pane

0x58f4,	// (0x000260e3) graphic_text_primary_small_pane

0x490e,	// (0x000250fd) graphic_text_secondary_pane

0x48fd,	// (0x000250ec) graphic_text_title_pane

0xd5ca,	// (0x0002ddb9) cursor_primary_pane_g1

0x58dd,	// (0x000260cc) cursor_text_primary_t1

0xdb13,	// (0x0002e302) cursor_primary_small_pane_g1

0x58cf,	// (0x000260be) cursor_text_primary_small_t1

0xdb09,	// (0x0002e2f8) cursor_primary_small_pane_g1_copy1

0x58b7,	// (0x000260a6) cursor_text_primary_small_t1_copy1

0x5895,	// (0x00026084) cursor_text_title_t1

0xdaff,	// (0x0002e2ee) cursor_title_pane_g1

0xd5ca,	// (0x0002ddb9) cursor_digital_pane_g1

0x4930,	// (0x0002511f) cursor_text_digital_t1

0x4955,	// (0x00025144) link_highlight_primary_pane_g1

0x583e,	// (0x0002602d) link_highlight_primary_pane_t1

0x493e,	// (0x0002512d) link_highlight_primary_small_pane_g1

0x4946,	// (0x00025135) link_highlight_primary_small_pane_t1

0x4955,	// (0x00025144) link_highlight_secondary_pane_g1

0x495d,	// (0x0002514c) link_highlight_secondary_pane_t1

0x57b2,	// (0x00025fa1) link_highlight_title_pane_g1

0x57ba,	// (0x00025fa9) link_highlight_title_pane_t1

0x579b,	// (0x00025f8a) link_highlight_digital_pane_g1

0x57a3,	// (0x00025f92) link_highlight_digital_pane_t1

0x5673,	// (0x00025e62) copy_highlight_primary_pane_g1

0x567b,	// (0x00025e6a) copy_highlight_primary_pane_t1

0x564d,	// (0x00025e3c) copy_highlight_primary_small_pane_g1

0x5664,	// (0x00025e53) copy_highlight_primary_small_pane_t1

0x496c,	// (0x0002515b) copy_highlight_secondary_pane_g1

0x4974,	// (0x00025163) copy_highlight_secondary_pane_t1

0x564d,	// (0x00025e3c) copy_highlight_title_pane_g1

0x5655,	// (0x00025e44) copy_highlight_title_pane_t1

0x5673,	// (0x00025e62) copy_highlight_digital_pane_g1

0x6926,	// (0x00027115) copy_highlight_digital_pane_t1

0x687a,	// (0x00027069) graphic_text_primary_pane_g1

0x690a,	// (0x000270f9) graphic_text_primary_pane_t1

0x6918,	// (0x00027107) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00030193) graphic_text_primary_pane_t

0x68e6,	// (0x000270d5) graphic_text_primary_small_pane_g1

0x68ee,	// (0x000270dd) graphic_text_primary_small_pane_t1

0x68fc,	// (0x000270eb) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x0003018e) graphic_text_primary_small_pane_t

0x68c2,	// (0x000270b1) graphic_text_secondary_pane_g1

0x68ca,	// (0x000270b9) graphic_text_secondary_pane_t1

0x68d8,	// (0x000270c7) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00030189) graphic_text_secondary_pane_t

0x689e,	// (0x0002708d) graphic_text_title_pane_g1

0x68a6,	// (0x00027095) graphic_text_title_pane_t1

0x68b4,	// (0x000270a3) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00030184) graphic_text_title_pane_t

0x687a,	// (0x00027069) graphic_text_digital_pane_g1

0x6882,	// (0x00027071) graphic_text_digital_pane_t1

0x6890,	// (0x0002707f) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x0003017f) graphic_text_digital_pane_t

0x3280,	// (0x00023a6f) navi_icon_pane_srt_ParamLimits

0x3280,	// (0x00023a6f) navi_icon_pane_srt

0x31a0,	// (0x0002398f) navi_midp_pane_srt

0x31a0,	// (0x0002398f) navi_navi_pane_srt

0x3280,	// (0x00023a6f) navi_text_pane_srt_ParamLimits

0x3280,	// (0x00023a6f) navi_text_pane_srt

0x6845,	// (0x00027034) navi_navi_icon_text_pane_srt

0x684d,	// (0x0002703c) navi_navi_pane_srt_g1_ParamLimits

0x684d,	// (0x0002703c) navi_navi_pane_srt_g1

0x685f,	// (0x0002704e) navi_navi_pane_srt_g2_ParamLimits

0x685f,	// (0x0002704e) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x0003017a) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x0003017a) navi_navi_pane_srt_g

0x6871,	// (0x00027060) navi_navi_tabs_pane_srt

0x6845,	// (0x00027034) navi_navi_text_pane_srt

0x6845,	// (0x00027034) navi_navi_volume_pane_srt

0x6836,	// (0x00027025) navi_navi_text_pane_srt_t1

0x20e8,	// (0x000228d7) navi_navi_volume_pane_srt_g1

0x20f0,	// (0x000228df) volume_small_pane_srt_ParamLimits

0x20f0,	// (0x000228df) volume_small_pane_srt

0x1527,	// (0x00021d16) volume_small_pane_srt_g1_ParamLimits

0x1527,	// (0x00021d16) volume_small_pane_srt_g1

0x1537,	// (0x00021d26) volume_small_pane_srt_g2_ParamLimits

0x1537,	// (0x00021d26) volume_small_pane_srt_g2

0x1548,	// (0x00021d37) volume_small_pane_srt_g3_ParamLimits

0x1548,	// (0x00021d37) volume_small_pane_srt_g3

0x1559,	// (0x00021d48) volume_small_pane_srt_g4_ParamLimits

0x1559,	// (0x00021d48) volume_small_pane_srt_g4

0x156a,	// (0x00021d59) volume_small_pane_srt_g5_ParamLimits

0x156a,	// (0x00021d59) volume_small_pane_srt_g5

0x157b,	// (0x00021d6a) volume_small_pane_srt_g6_ParamLimits

0x157b,	// (0x00021d6a) volume_small_pane_srt_g6

0x158c,	// (0x00021d7b) volume_small_pane_srt_g7_ParamLimits

0x158c,	// (0x00021d7b) volume_small_pane_srt_g7

0x159d,	// (0x00021d8c) volume_small_pane_srt_g8_ParamLimits

0x159d,	// (0x00021d8c) volume_small_pane_srt_g8

0x15ae,	// (0x00021d9d) volume_small_pane_srt_g9_ParamLimits

0x15ae,	// (0x00021d9d) volume_small_pane_srt_g9

0x15bf,	// (0x00021dae) volume_small_pane_srt_g10_ParamLimits

0x15bf,	// (0x00021dae) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002ff27) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002ff27) volume_small_pane_srt_g

0x3680,	// (0x00023e6f) query_popup_data_pane_cp2

0x681c,	// (0x0002700b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x681c,	// (0x0002700b) navi_navi_icon_text_pane_srt_t1

0x58eb,	// (0x000260da) navi_tabs_2_long_pane_srt

0x58eb,	// (0x000260da) navi_tabs_2_pane_srt

0x58eb,	// (0x000260da) navi_tabs_3_long_pane_srt

0x58eb,	// (0x000260da) navi_tabs_3_pane_srt

0x58eb,	// (0x000260da) navi_tabs_4_pane_srt

0x20c8,	// (0x000228b7) tabs_2_active_pane_srt_ParamLimits

0x20c8,	// (0x000228b7) tabs_2_active_pane_srt

0x20d8,	// (0x000228c7) tabs_2_passive_pane_srt_ParamLimits

0x20d8,	// (0x000228c7) tabs_2_passive_pane_srt

0x5091,	// (0x00025880) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5091,	// (0x00025880) bg_passive_tab_pane_cp1_srt

0x67e8,	// (0x00026fd7) bg_passive_tab_pane_g1_cp1_srt

0x4410,	// (0x00024bff) bg_passive_tab_pane_g2_cp1_srt

0x67f1,	// (0x00026fe0) bg_passive_tab_pane_g3_cp1_srt

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp1_srt_ParamLimits

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp1_srt

0x67fa,	// (0x00026fe9) tabs_2_active_pane_srt_g1

0xdeb8,	// (0x0002e6a7) tabs_2_active_pane_srt_t1_ParamLimits

0xdeb8,	// (0x0002e6a7) tabs_2_active_pane_srt_t1

0x67e8,	// (0x00026fd7) bg_active_tab_pane_g1_cp1_srt

0x4410,	// (0x00024bff) bg_active_tab_pane_g2_cp1_srt

0x67f1,	// (0x00026fe0) bg_active_tab_pane_g3_cp1_srt

0x2095,	// (0x00022884) tabs_3_active_pane_srt_ParamLimits

0x2095,	// (0x00022884) tabs_3_active_pane_srt

0x20a6,	// (0x00022895) tabs_3_passive_pane_cp_srt_ParamLimits

0x20a6,	// (0x00022895) tabs_3_passive_pane_cp_srt

0x20b7,	// (0x000228a6) tabs_3_passive_pane_srt_ParamLimits

0x20b7,	// (0x000228a6) tabs_3_passive_pane_srt

0x5091,	// (0x00025880) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5091,	// (0x00025880) bg_passive_tab_pane_cp2_srt

0x4983,	// (0x00025172) bg_passive_tab_pane_g1_cp2_srt

0x4410,	// (0x00024bff) bg_passive_tab_pane_g2_cp2_srt

0x498c,	// (0x0002517b) bg_passive_tab_pane_g3_cp2_srt

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp2_srt_ParamLimits

0x34fb,	// (0x00023cea) bg_active_tab_pane_cp2_srt

0x67ce,	// (0x00026fbd) tabs_3_active_pane_srt_g1

0xdea2,	// (0x0002e691) tabs_3_active_pane_srt_t1_ParamLimits

0xdea2,	// (0x0002e691) tabs_3_active_pane_srt_t1

0x4983,	// (0x00025172) bg_active_tab_pane_g1_cp2_srt

0x4410,	// (0x00024bff) bg_active_tab_pane_g2_cp2_srt

0x498c,	// (0x0002517b) bg_active_tab_pane_g3_cp2_srt

0x204d,	// (0x0002283c) tabs_4_active_pane_srt_ParamLimits

0x204d,	// (0x0002283c) tabs_4_active_pane_srt

0x205f,	// (0x0002284e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x205f,	// (0x0002284e) tabs_4_passive_pane_cp2_srt

0x1732,	// (0x00021f21) aid_size_cell_toolbar

0x6412,	// (0x00026c01) main_idle_act_pane_ParamLimits

0x18d5,	// (0x000220c4) popup_large_graphic_colour_window_ParamLimits

0xcb88,	// (0x0002d377) popup_toolbar_window_ParamLimits

0xcb88,	// (0x0002d377) popup_toolbar_window

0x0504,	// (0x00020cf3) list_single_graphic_2heading_pane_ParamLimits

0x0504,	// (0x00020cf3) list_single_graphic_2heading_pane

0x3ebd,	// (0x000246ac) aid_size_cell_apps_grid_lsc_pane

0x3ecf,	// (0x000246be) aid_size_cell_apps_grid_prt_pane

0x4af3,	// (0x000252e2) bg_wml_button_pane_cp1_ParamLimits

0x4af3,	// (0x000252e2) bg_wml_button_pane_cp1

0xdac2,	// (0x0002e2b1) form_midp_field_text_pane_t1_ParamLimits

0x5091,	// (0x00025880) input_focus_pane_cp050_ParamLimits

0x52f8,	// (0x00025ae7) list_midp_form_text_pane_ParamLimits

0x529e,	// (0x00025a8d) input_focus_pane_cp051_ParamLimits

0x52b2,	// (0x00025aa1) list_midp_choice_pane_ParamLimits

0xda60,	// (0x0002e24f) list_single_2graphic_pane_cp3_ParamLimits

0xda60,	// (0x0002e24f) list_single_2graphic_pane_cp3

0xda73,	// (0x0002e262) list_single_midp_graphic_pane_ParamLimits

0xda73,	// (0x0002e262) list_single_midp_graphic_pane

0x0305,	// (0x00020af4) list_single_graphic_2heading_pane_g1_ParamLimits

0x0305,	// (0x00020af4) list_single_graphic_2heading_pane_g1

0x0311,	// (0x00020b00) list_single_graphic_2heading_pane_g4_ParamLimits

0x0311,	// (0x00020b00) list_single_graphic_2heading_pane_g4

0x031d,	// (0x00020b0c) list_single_graphic_2heading_pane_g5_ParamLimits

0x031d,	// (0x00020b0c) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0002ff7a) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0002ff7a) list_single_graphic_2heading_pane_g

0x0329,	// (0x00020b18) list_single_graphic_2heading_pane_t1_ParamLimits

0x0329,	// (0x00020b18) list_single_graphic_2heading_pane_t1

0x033d,	// (0x00020b2c) list_single_graphic_2heading_pane_t2_ParamLimits

0x033d,	// (0x00020b2c) list_single_graphic_2heading_pane_t2

0x0357,	// (0x00020b46) list_single_graphic_2heading_pane_t3_ParamLimits

0x0357,	// (0x00020b46) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0002ff81) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0002ff81) list_single_graphic_2heading_pane_t

0x4f5b,	// (0x0002574a) bg_popup_sub_pane_cp2

0x4f85,	// (0x00025774) grid_toobar_pane

0x1ce9,	// (0x000224d8) cell_toolbar_pane_ParamLimits

0x1ce9,	// (0x000224d8) cell_toolbar_pane

0x4fc1,	// (0x000257b0) cell_toolbar_pane_g1_ParamLimits

0x4fc1,	// (0x000257b0) cell_toolbar_pane_g1

0x4fd5,	// (0x000257c4) cell_toolbar_pane_g2_ParamLimits

0x4fd5,	// (0x000257c4) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0002ff8f) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0002ff8f) cell_toolbar_pane_g

0x4ff7,	// (0x000257e6) grid_highlight_pane_cp2_ParamLimits

0x4ff7,	// (0x000257e6) grid_highlight_pane_cp2

0x5011,	// (0x00025800) toolbar_button_pane

0x501d,	// (0x0002580c) toolbar_button_pane_g1

0x5025,	// (0x00025814) toolbar_button_pane_g2

0x502d,	// (0x0002581c) toolbar_button_pane_g3

0x5035,	// (0x00025824) toolbar_button_pane_g4

0x503d,	// (0x0002582c) toolbar_button_pane_g5

0x5045,	// (0x00025834) toolbar_button_pane_g6

0x504d,	// (0x0002583c) toolbar_button_pane_g7

0x5055,	// (0x00025844) toolbar_button_pane_g8

0x505d,	// (0x0002584c) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0002ff94) toolbar_button_pane_g

0x1d21,	// (0x00022510) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1d21,	// (0x00022510) list_single_2graphic_pane_g1_cp3

0xcbe0,	// (0x0002d3cf) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcbe0,	// (0x0002d3cf) list_single_2graphic_pane_g2_cp3

0x1d3e,	// (0x0002252d) list_single_2graphic_pane_g3_cp3

0x1d46,	// (0x00022535) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1d46,	// (0x00022535) list_single_2graphic_pane_g4_cp3

0x1d52,	// (0x00022541) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1d52,	// (0x00022541) list_single_2graphic_pane_t1_cp3

0x5da3,	// (0x00026592) list_single_midp_graphic_pane_g2_ParamLimits

0x5da3,	// (0x00026592) list_single_midp_graphic_pane_g2

0x173a,	// (0x00021f29) aid_zoom_text_primary

0x02d9,	// (0x00020ac8) aid_zoom_text_secondary

0x4a3d,	// (0x0002522c) status_small_pane_g7_ParamLimits

0x4a3d,	// (0x0002522c) status_small_pane_g7

0x4a60,	// (0x0002524f) status_small_pane_t1_ParamLimits

0xc035,	// (0x0002c824) title_pane_g2

0x0003,

0xf529,	// (0x0002fd18) title_pane_g

0xc2ad,	// (0x0002ca9c) aid_size_cell_colour_1_pane_ParamLimits

0xc2ad,	// (0x0002ca9c) aid_size_cell_colour_1_pane

0xc2c1,	// (0x0002cab0) aid_size_cell_colour_2_pane_ParamLimits

0xc2c1,	// (0x0002cab0) aid_size_cell_colour_2_pane

0xc2d5,	// (0x0002cac4) aid_size_cell_colour_3_pane_ParamLimits

0xc2d5,	// (0x0002cac4) aid_size_cell_colour_3_pane

0xc2e9,	// (0x0002cad8) aid_size_cell_colour_4_pane_ParamLimits

0xc2e9,	// (0x0002cad8) aid_size_cell_colour_4_pane

0x1184,	// (0x00021973) title_pane_stacon_g1_ParamLimits

0x1184,	// (0x00021973) title_pane_stacon_g1

0x56d2,	// (0x00025ec1) popup_note_wait_window_g3_ParamLimits

0x56d2,	// (0x00025ec1) popup_note_wait_window_g3

0x5748,	// (0x00025f37) popup_note_wait_window_t5_ParamLimits

0x5748,	// (0x00025f37) popup_note_wait_window_t5

0x31a0,	// (0x0002398f) main_feb_china_hwr_fs_writing_pane

0xc58a,	// (0x0002cd79) popup_feb_china_hwr_fs_window_ParamLimits

0xc58a,	// (0x0002cd79) popup_feb_china_hwr_fs_window

0xcbf1,	// (0x0002d3e0) aid_size_cell_hwr_fs_ParamLimits

0xcbf1,	// (0x0002d3e0) aid_size_cell_hwr_fs

0x5091,	// (0x00025880) bg_popup_sub_pane_cp3_ParamLimits

0x5091,	// (0x00025880) bg_popup_sub_pane_cp3

0xcc06,	// (0x0002d3f5) grid_hwr_fs_pane_ParamLimits

0xcc06,	// (0x0002d3f5) grid_hwr_fs_pane

0x1db1,	// (0x000225a0) linegrid_hwr_fs_pane_ParamLimits

0x1db1,	// (0x000225a0) linegrid_hwr_fs_pane

0xcc1e,	// (0x0002d40d) cell_hwr_fs_pane_ParamLimits

0xcc1e,	// (0x0002d40d) cell_hwr_fs_pane

0x509d,	// (0x0002588c) linegrid_hwr_fs_pane_g1_ParamLimits

0x509d,	// (0x0002588c) linegrid_hwr_fs_pane_g1

0xda34,	// (0x0002e223) linegrid_hwr_fs_pane_g2_ParamLimits

0xda34,	// (0x0002e223) linegrid_hwr_fs_pane_g2

0x50bb,	// (0x000258aa) linegrid_hwr_fs_pane_g3_ParamLimits

0x50bb,	// (0x000258aa) linegrid_hwr_fs_pane_g3

0x1de3,	// (0x000225d2) linegrid_hwr_fs_pane_g4_ParamLimits

0x1de3,	// (0x000225d2) linegrid_hwr_fs_pane_g4

0x1dfd,	// (0x000225ec) linegrid_hwr_fs_pane_g5_ParamLimits

0x1dfd,	// (0x000225ec) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0002ffba) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0002ffba) linegrid_hwr_fs_pane_g

0x50c7,	// (0x000258b6) cell_hwr_fs_pane_g1_ParamLimits

0x50c7,	// (0x000258b6) cell_hwr_fs_pane_g1

0x4e92,	// (0x00025681) cell_hwr_fs_pane_g2_ParamLimits

0x4e92,	// (0x00025681) cell_hwr_fs_pane_g2

0xda46,	// (0x0002e235) cell_hwr_fs_pane_g3_ParamLimits

0xda46,	// (0x0002e235) cell_hwr_fs_pane_g3

0xda53,	// (0x0002e242) cell_hwr_fs_pane_g4_ParamLimits

0xda53,	// (0x0002e242) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0002ffc5) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0002ffc5) cell_hwr_fs_pane_g

0xcc44,	// (0x0002d433) cell_hwr_fs_pane_t1

0x31a0,	// (0x0002398f) grid_highlight_pane_cp6

0x31a0,	// (0x0002398f) main_idle_act2_pane

0x3c74,	// (0x00024463) aid_inside_area_popup_secondary

0xdb1d,	// (0x0002e30c) aid_inside_area_window_primary_ParamLimits

0xdb1d,	// (0x0002e30c) aid_inside_area_window_primary

0x6935,	// (0x00027124) ai2_news_ticker_pane

0x693d,	// (0x0002712c) aid_size_cell_ai1_link_ParamLimits

0x693d,	// (0x0002712c) aid_size_cell_ai1_link

0xdece,	// (0x0002e6bd) popup_ai2_data_window_ParamLimits

0xdece,	// (0x0002e6bd) popup_ai2_data_window

0x696d,	// (0x0002715c) popup_ai2_link_window_ParamLimits

0x696d,	// (0x0002715c) popup_ai2_link_window

0x5091,	// (0x00025880) bg_popup_sub_pane_cp4_ParamLimits

0x5091,	// (0x00025880) bg_popup_sub_pane_cp4

0x6981,	// (0x00027170) grid_ai2_link_pane_ParamLimits

0x6981,	// (0x00027170) grid_ai2_link_pane

0x6998,	// (0x00027187) popup_ai2_link_window_g1_ParamLimits

0x6998,	// (0x00027187) popup_ai2_link_window_g1

0x69a4,	// (0x00027193) popup_ai2_link_window_g2_ParamLimits

0x69a4,	// (0x00027193) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00030198) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00030198) popup_ai2_link_window_g

0x69b3,	// (0x000271a2) ai2_mp_button_pane

0x69bb,	// (0x000271aa) ai2_mp_volume_pane

0x529e,	// (0x00025a8d) bg_popup_sub_pane_cp5_ParamLimits

0x529e,	// (0x00025a8d) bg_popup_sub_pane_cp5

0x69c3,	// (0x000271b2) heading_ai2_gene_pane_ParamLimits

0x69c3,	// (0x000271b2) heading_ai2_gene_pane

0x69cf,	// (0x000271be) list_ai2_gene_pane_ParamLimits

0x69cf,	// (0x000271be) list_ai2_gene_pane

0x6a17,	// (0x00027206) cell_ai2_link_pane_ParamLimits

0x6a17,	// (0x00027206) cell_ai2_link_pane

0x6a2d,	// (0x0002721c) cell_ai2_link_pane_g1

0x31a0,	// (0x0002398f) grid_highlight_pane_cp7

0x2105,	// (0x000228f4) ai2_mp_volume_pane_g1

0x6afd,	// (0x000272ec) ai2_mp_volume_pane_g2

0xdef8,	// (0x0002e6e7) list_ai2_gene_pane_t1

0x6b05,	// (0x000272f4) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x000301b1) ai2_mp_volume_pane_g

0x210d,	// (0x000228fc) volume_small_pane_cp3

0x6b0d,	// (0x000272fc) aid_size_cell_ai2_button

0x6b15,	// (0x00027304) grid_ai2_button_pane

0x6b1e,	// (0x0002730d) cell_ai2_button_pane_ParamLimits

0x6b1e,	// (0x0002730d) cell_ai2_button_pane

0xe440,	// (0x0002ec2f) cell_ai2_button_pane_g1

0x31a0,	// (0x0002398f) grid_highlight_pane_cp8

0x6abd,	// (0x000272ac) ai2_gene_pane_t1_ParamLimits

0x6abd,	// (0x000272ac) ai2_gene_pane_t1

0xc528,	// (0x0002cd17) aid_height_parent_landscape

0xdc65,	// (0x0002e454) aid_height_set_list

0x6412,	// (0x00026c01) aid_size_parent

0x6758,	// (0x00026f47) aid_size_cell_graphic_pane_ParamLimits

0x69df,	// (0x000271ce) popup_ai2_data_window_g1_ParamLimits

0x69df,	// (0x000271ce) popup_ai2_data_window_g1

0x69eb,	// (0x000271da) ai2_news_ticker_pane_g1

0x69f3,	// (0x000271e2) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x0003019d) ai2_news_ticker_pane_g

0x69fb,	// (0x000271ea) ai2_news_ticker_pane_t1

0x6a09,	// (0x000271f8) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x000301a2) ai2_news_ticker_pane_t

0x6a36,	// (0x00027225) heading_ai2_gene_pane_g1

0x6a3e,	// (0x0002722d) heading_ai2_gene_pane_t1_ParamLimits

0x6a3e,	// (0x0002722d) heading_ai2_gene_pane_t1

0x6a53,	// (0x00027242) list_highlight_pane_cp6

0xdee2,	// (0x0002e6d1) ai2_gene_pane_ParamLimits

0xdee2,	// (0x0002e6d1) ai2_gene_pane

0xdf06,	// (0x0002e6f5) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x000301a7) list_ai2_gene_pane_t

0x6a8e,	// (0x0002727d) list_highlight_pane_cp8_ParamLimits

0x6a8e,	// (0x0002727d) list_highlight_pane_cp8

0x6a9f,	// (0x0002728e) ai2_gene_pane_g1_ParamLimits

0x6a9f,	// (0x0002728e) ai2_gene_pane_g1

0x6ab1,	// (0x000272a0) ai2_gene_pane_g2_ParamLimits

0x6ab1,	// (0x000272a0) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x000301ac) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x000301ac) ai2_gene_pane_g

0x3aa3,	// (0x00024292) scroll_pane_cp12

0xc4e5,	// (0x0002ccd4) control_pane_t3_ParamLimits

0xc4e5,	// (0x0002ccd4) control_pane_t3

0x4a51,	// (0x00025240) status_small_pane_g8_ParamLimits

0x4a51,	// (0x00025240) status_small_pane_g8

0xc61f,	// (0x0002ce0e) popup_find_window_ParamLimits

0xc8b2,	// (0x0002d0a1) popup_note_image_window_ParamLimits

0x0305,	// (0x00020af4) list_double2_graphic_pane_vc_g1_ParamLimits

0x0305,	// (0x00020af4) list_double2_graphic_pane_vc_g1

0x036f,	// (0x00020b5e) list_double2_graphic_pane_vc_g2_ParamLimits

0x036f,	// (0x00020b5e) list_double2_graphic_pane_vc_g2

0x037b,	// (0x00020b6a) list_double2_graphic_pane_vc_g3_ParamLimits

0x037b,	// (0x00020b6a) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0002ff88) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0002ff88) list_double2_graphic_pane_vc_g

0x0387,	// (0x00020b76) list_double2_graphic_pane_vc_t1_ParamLimits

0x0387,	// (0x00020b76) list_double2_graphic_pane_vc_t1

0x0311,	// (0x00020b00) list_single_heading_pane_vc_g1_ParamLimits

0x0311,	// (0x00020b00) list_single_heading_pane_vc_g1

0x031d,	// (0x00020b0c) list_single_heading_pane_vc_g2_ParamLimits

0x031d,	// (0x00020b0c) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fd92) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fd92) list_single_heading_pane_vc_g

0x039d,	// (0x00020b8c) list_single_heading_pane_vc_t1_ParamLimits

0x039d,	// (0x00020b8c) list_single_heading_pane_vc_t1

0x03b3,	// (0x00020ba2) list_single_heading_pane_vc_t2_ParamLimits

0x03b3,	// (0x00020ba2) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0002ffa9) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0002ffa9) list_single_heading_pane_vc_t

0x03c5,	// (0x00020bb4) list_setting_number_pane_vc_g1_ParamLimits

0x03c5,	// (0x00020bb4) list_setting_number_pane_vc_g1

0x03d1,	// (0x00020bc0) list_setting_number_pane_vc_g2_ParamLimits

0x03d1,	// (0x00020bc0) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0002ffae) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002ffae) list_setting_number_pane_vc_g

0x03dd,	// (0x00020bcc) list_setting_number_pane_vc_t1_ParamLimits

0x03dd,	// (0x00020bcc) list_setting_number_pane_vc_t1

0x03f1,	// (0x00020be0) list_setting_number_pane_vc_t2_ParamLimits

0x03f1,	// (0x00020be0) list_setting_number_pane_vc_t2

0x040d,	// (0x00020bfc) list_setting_number_pane_vc_t3_ParamLimits

0x040d,	// (0x00020bfc) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0002ffb3) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0002ffb3) list_setting_number_pane_vc_t

0x042b,	// (0x00020c1a) set_value_pane_vc_ParamLimits

0x042b,	// (0x00020c1a) set_value_pane_vc

0x0504,	// (0x00020cf3) list_double2_graphic_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_double2_graphic_pane_vc

0x65ca,	// (0x00026db9) list_double2_large_graphic_pane_vc_ParamLimits

0x65ca,	// (0x00026db9) list_double2_large_graphic_pane_vc

0x0504,	// (0x00020cf3) list_double2_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_double2_pane_vc

0x0504,	// (0x00020cf3) list_double_graphic_heading_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_double_graphic_heading_pane_vc

0x0504,	// (0x00020cf3) list_double_graphic_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_double_graphic_pane_vc

0x0504,	// (0x00020cf3) list_double_heading_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_double_heading_pane_vc

0x65dc,	// (0x00026dcb) list_double_large_graphic_pane_vc_ParamLimits

0x65dc,	// (0x00026dcb) list_double_large_graphic_pane_vc

0x0504,	// (0x00020cf3) list_double_number_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_double_number_pane_vc

0x0504,	// (0x00020cf3) list_double_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_double_pane_vc

0x0504,	// (0x00020cf3) list_double_time_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_double_time_pane_vc

0x0504,	// (0x00020cf3) list_setting_number_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_setting_number_pane_vc

0x0504,	// (0x00020cf3) list_setting_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_setting_pane_vc

0x0504,	// (0x00020cf3) list_single_graphic_heading_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_single_graphic_heading_pane_vc

0x0504,	// (0x00020cf3) list_single_heading_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_single_heading_pane_vc

0x0504,	// (0x00020cf3) list_single_number_heading_pane_vc_ParamLimits

0x0504,	// (0x00020cf3) list_single_number_heading_pane_vc

0x0592,	// (0x00020d81) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0592,	// (0x00020d81) list_double_graphic_heading_pane_vc_g1

0x0311,	// (0x00020b00) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0311,	// (0x00020b00) list_double_graphic_heading_pane_vc_g2

0x031d,	// (0x00020b0c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x031d,	// (0x00020b0c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x000301b8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x000301b8) list_double_graphic_heading_pane_vc_g

0x059e,	// (0x00020d8d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x059e,	// (0x00020d8d) list_double_graphic_heading_pane_vc_t1

0x05ba,	// (0x00020da9) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x05ba,	// (0x00020da9) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x000301bf) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x000301bf) list_double_graphic_heading_pane_vc_t

0x03c5,	// (0x00020bb4) list_setting_pane_vc_g1_ParamLimits

0x03c5,	// (0x00020bb4) list_setting_pane_vc_g1

0x03d1,	// (0x00020bc0) list_setting_pane_vc_g2_ParamLimits

0x03d1,	// (0x00020bc0) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0002ffae) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002ffae) list_setting_pane_vc_g

0x05d8,	// (0x00020dc7) list_setting_pane_vc_t1_ParamLimits

0x05d8,	// (0x00020dc7) list_setting_pane_vc_t1

0x05f4,	// (0x00020de3) list_setting_pane_vc_t2_ParamLimits

0x05f4,	// (0x00020de3) list_setting_pane_vc_t2

0x0001,

0xf9fe,	// (0x000301ed) list_setting_pane_vc_t_ParamLimits

0xf9fe,	// (0x000301ed) list_setting_pane_vc_t

0x042b,	// (0x00020c1a) set_value_pane_cp_vc_ParamLimits

0x042b,	// (0x00020c1a) set_value_pane_cp_vc

0x0311,	// (0x00020b00) list_single_number_heading_pane_vc_g1_ParamLimits

0x0311,	// (0x00020b00) list_single_number_heading_pane_vc_g1

0x031d,	// (0x00020b0c) list_single_number_heading_pane_vc_g2_ParamLimits

0x031d,	// (0x00020b0c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fd92) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fd92) list_single_number_heading_pane_vc_g

0x0610,	// (0x00020dff) list_single_number_heading_pane_vc_t1_ParamLimits

0x0610,	// (0x00020dff) list_single_number_heading_pane_vc_t1

0x0626,	// (0x00020e15) list_single_number_heading_pane_vc_t2_ParamLimits

0x0626,	// (0x00020e15) list_single_number_heading_pane_vc_t2

0x063c,	// (0x00020e2b) list_single_number_heading_pane_vc_t3_ParamLimits

0x063c,	// (0x00020e2b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa03,	// (0x000301f2) list_single_number_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x000301f2) list_single_number_heading_pane_vc_t

0x0305,	// (0x00020af4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0305,	// (0x00020af4) list_single_graphic_heading_pane_vc_g1

0x0311,	// (0x00020b00) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0311,	// (0x00020b00) list_single_graphic_heading_pane_vc_g4

0x031d,	// (0x00020b0c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x031d,	// (0x00020b0c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf78b,	// (0x0002ff7a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf78b,	// (0x0002ff7a) list_single_graphic_heading_pane_vc_g

0x0610,	// (0x00020dff) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0610,	// (0x00020dff) list_single_graphic_heading_pane_vc_t1

0x064e,	// (0x00020e3d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x064e,	// (0x00020e3d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0a,	// (0x000301f9) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0a,	// (0x000301f9) list_single_graphic_heading_pane_vc_t

0x0311,	// (0x00020b00) list_double2_pane_vc_g1_ParamLimits

0x0311,	// (0x00020b00) list_double2_pane_vc_g1

0x031d,	// (0x00020b0c) list_double2_pane_vc_g2_ParamLimits

0x031d,	// (0x00020b0c) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fd92) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fd92) list_double2_pane_vc_g

0x0660,	// (0x00020e4f) list_double2_pane_vc_t1_ParamLimits

0x0660,	// (0x00020e4f) list_double2_pane_vc_t1

0x0676,	// (0x00020e65) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0676,	// (0x00020e65) list_double2_large_graphic_pane_vc_g1

0xf44e,	// (0x0002fc3d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf44e,	// (0x0002fc3d) list_double2_large_graphic_pane_vc_g2

0xf45a,	// (0x0002fc49) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf45a,	// (0x0002fc49) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0002fdaf) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0002fdaf) list_double2_large_graphic_pane_vc_g

0x0682,	// (0x00020e71) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0682,	// (0x00020e71) list_double2_large_graphic_pane_vc_t1

0x0698,	// (0x00020e87) list_double_time_pane_vc_g1_ParamLimits

0x0698,	// (0x00020e87) list_double_time_pane_vc_g1

0x06a4,	// (0x00020e93) list_double_time_pane_vc_g2_ParamLimits

0x06a4,	// (0x00020e93) list_double_time_pane_vc_g2

0x0001,

0xfa0f,	// (0x000301fe) list_double_time_pane_vc_g_ParamLimits

0xfa0f,	// (0x000301fe) list_double_time_pane_vc_g

0x06b0,	// (0x00020e9f) list_double_time_pane_vc_t1_ParamLimits

0x06b0,	// (0x00020e9f) list_double_time_pane_vc_t1

0x06d4,	// (0x00020ec3) list_double_time_pane_vc_t2_ParamLimits

0x06d4,	// (0x00020ec3) list_double_time_pane_vc_t2

0x071e,	// (0x00020f0d) list_double_time_pane_vc_t3_ParamLimits

0x071e,	// (0x00020f0d) list_double_time_pane_vc_t3

0x0730,	// (0x00020f1f) list_double_time_pane_vc_t4_ParamLimits

0x0730,	// (0x00020f1f) list_double_time_pane_vc_t4

0x0003,

0xfa14,	// (0x00030203) list_double_time_pane_vc_t_ParamLimits

0xfa14,	// (0x00030203) list_double_time_pane_vc_t

0x0311,	// (0x00020b00) list_double_pane_vc_g1_ParamLimits

0x0311,	// (0x00020b00) list_double_pane_vc_g1

0x031d,	// (0x00020b0c) list_double_pane_vc_g2_ParamLimits

0x031d,	// (0x00020b0c) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fd92) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fd92) list_double_pane_vc_g

0x0744,	// (0x00020f33) list_double_pane_vc_t1_ParamLimits

0x0744,	// (0x00020f33) list_double_pane_vc_t1

0x0758,	// (0x00020f47) list_double_pane_vc_t2_ParamLimits

0x0758,	// (0x00020f47) list_double_pane_vc_t2

0x0001,

0xfa1d,	// (0x0003020c) list_double_pane_vc_t_ParamLimits

0xfa1d,	// (0x0003020c) list_double_pane_vc_t

0x0311,	// (0x00020b00) list_double_number_pane_vc_g1_ParamLimits

0x0311,	// (0x00020b00) list_double_number_pane_vc_g1

0x031d,	// (0x00020b0c) list_double_number_pane_vc_g2_ParamLimits

0x031d,	// (0x00020b0c) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fd92) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fd92) list_double_number_pane_vc_g

0x0770,	// (0x00020f5f) list_double_number_pane_vc_t1_ParamLimits

0x0770,	// (0x00020f5f) list_double_number_pane_vc_t1

0x0782,	// (0x00020f71) list_double_number_pane_vc_t2_ParamLimits

0x0782,	// (0x00020f71) list_double_number_pane_vc_t2

0x0796,	// (0x00020f85) list_double_number_pane_vc_t3_ParamLimits

0x0796,	// (0x00020f85) list_double_number_pane_vc_t3

0x0002,

0xfa22,	// (0x00030211) list_double_number_pane_vc_t_ParamLimits

0xfa22,	// (0x00030211) list_double_number_pane_vc_t

0x07ae,	// (0x00020f9d) list_double_large_graphic_pane_vc_g1_ParamLimits

0x07ae,	// (0x00020f9d) list_double_large_graphic_pane_vc_g1

0x07ca,	// (0x00020fb9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x07ca,	// (0x00020fb9) list_double_large_graphic_pane_vc_g2

0x07de,	// (0x00020fcd) list_double_large_graphic_pane_vc_g3_ParamLimits

0x07de,	// (0x00020fcd) list_double_large_graphic_pane_vc_g3

0x07ed,	// (0x00020fdc) list_double_large_graphic_pane_vc_g4_ParamLimits

0x07ed,	// (0x00020fdc) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa29,	// (0x00030218) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa29,	// (0x00030218) list_double_large_graphic_pane_vc_g

0x07fc,	// (0x00020feb) list_double_large_graphic_pane_vc_t1_ParamLimits

0x07fc,	// (0x00020feb) list_double_large_graphic_pane_vc_t1

0x0818,	// (0x00021007) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0818,	// (0x00021007) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa32,	// (0x00030221) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa32,	// (0x00030221) list_double_large_graphic_pane_vc_t

0x0311,	// (0x00020b00) list_double_heading_pane_vc_g1_ParamLimits

0x0311,	// (0x00020b00) list_double_heading_pane_vc_g1

0x031d,	// (0x00020b0c) list_double_heading_pane_vc_g2_ParamLimits

0x031d,	// (0x00020b0c) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fd92) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fd92) list_double_heading_pane_vc_g

0x083a,	// (0x00021029) list_double_heading_pane_vc_t1_ParamLimits

0x083a,	// (0x00021029) list_double_heading_pane_vc_t1

0x084e,	// (0x0002103d) list_double_heading_pane_vc_t2_ParamLimits

0x084e,	// (0x0002103d) list_double_heading_pane_vc_t2

0x0001,

0xfa37,	// (0x00030226) list_double_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x00030226) list_double_heading_pane_vc_t

0x0866,	// (0x00021055) list_double_graphic_pane_vc_g1_ParamLimits

0x0866,	// (0x00021055) list_double_graphic_pane_vc_g1

0x0879,	// (0x00021068) list_double_graphic_pane_vc_g2_ParamLimits

0x0879,	// (0x00021068) list_double_graphic_pane_vc_g2

0x0311,	// (0x00020b00) list_double_graphic_pane_vc_g3_ParamLimits

0x0311,	// (0x00020b00) list_double_graphic_pane_vc_g3

0x0003,

0xfa3c,	// (0x0003022b) list_double_graphic_pane_vc_g_ParamLimits

0xfa3c,	// (0x0003022b) list_double_graphic_pane_vc_g

0x0896,	// (0x00021085) list_double_graphic_pane_vc_t1_ParamLimits

0x0896,	// (0x00021085) list_double_graphic_pane_vc_t1

0x08c0,	// (0x000210af) list_double_graphic_pane_vc_t2_ParamLimits

0x08c0,	// (0x000210af) list_double_graphic_pane_vc_t2

0x0001,

0xfa45,	// (0x00030234) list_double_graphic_pane_vc_t_ParamLimits

0xfa45,	// (0x00030234) list_double_graphic_pane_vc_t

0x0ce1,	// (0x000214d0) aid_size_cell_fastswap

0xbe1c,	// (0x0002c60b) aid_size_cell_touch_ParamLimits

0xbe1c,	// (0x0002c60b) aid_size_cell_touch

0x0f44,	// (0x00021733) popup_fast_swap_wide_window_ParamLimits

0x0f44,	// (0x00021733) popup_fast_swap_wide_window

0xbfcc,	// (0x0002c7bb) touch_pane_ParamLimits

0xbfcc,	// (0x0002c7bb) touch_pane

0x3af9,	// (0x000242e8) button_value_adjust_pane_cp2

0xf521,	// (0x0002fd10) button_value_adjust_pane_cp4

0x000c,	// (0x000207fb) form_field_data_pane_cp2

0xb96d,	// (0x0002c15c) form_field_data_wide_pane_cp2

0x3f8c,	// (0x0002477b) bg_scroll_pane_ParamLimits

0x12e6,	// (0x00021ad5) scroll_handle_pane_ParamLimits

0x12fa,	// (0x00021ae9) scroll_sc2_down_pane_ParamLimits

0x12fa,	// (0x00021ae9) scroll_sc2_down_pane

0x3fbd,	// (0x000247ac) scroll_sc2_up_pane_ParamLimits

0x3fbd,	// (0x000247ac) scroll_sc2_up_pane

0xe036,	// (0x0002e825) grid_wheel_folder_pane_g1_ParamLimits

0xe036,	// (0x0002e825) grid_wheel_folder_pane_g1

0x14bf,	// (0x00021cae) clock_nsta_pane_cp2_ParamLimits

0x14bf,	// (0x00021cae) clock_nsta_pane_cp2

0xd525,	// (0x0002dd14) listscroll_midp_pane_ParamLimits

0xd531,	// (0x0002dd20) midp_canvas_pane

0x4acb,	// (0x000252ba) nsta_clock_indic_pane

0x4aff,	// (0x000252ee) listscroll_form_pane_vc

0x4b07,	// (0x000252f6) listscroll_set_pane_vc_ParamLimits

0x4b07,	// (0x000252f6) listscroll_set_pane_vc

0xd73f,	// (0x0002df2e) clock_nsta_pane

0xd769,	// (0x0002df58) indicator_nsta_pane

0x4f5b,	// (0x0002574a) bg_popup_sub_pane_cp2_ParamLimits

0x4f6f,	// (0x0002575e) find_pane_cp2_ParamLimits

0x4f6f,	// (0x0002575e) find_pane_cp2

0x4f85,	// (0x00025774) grid_toobar_pane_ParamLimits

0x5065,	// (0x00025854) list_form_gen_pane_vc_ParamLimits

0x5065,	// (0x00025854) list_form_gen_pane_vc

0x507b,	// (0x0002586a) scroll_pane_cp8_vc_ParamLimits

0x507b,	// (0x0002586a) scroll_pane_cp8_vc

0x50f7,	// (0x000258e6) data_form_wide_pane_vc_ParamLimits

0x50f7,	// (0x000258e6) data_form_wide_pane_vc

0x5103,	// (0x000258f2) form_field_data_wide_pane_vc_g1

0x510b,	// (0x000258fa) form_field_data_wide_pane_vc_t1_ParamLimits

0x510b,	// (0x000258fa) form_field_data_wide_pane_vc_t1

0x3b0d,	// (0x000242fc) input_focus_pane_cp6_vc_ParamLimits

0x3b0d,	// (0x000242fc) input_focus_pane_cp6_vc

0x5451,	// (0x00025c40) list_midp_pane_ParamLimits

0x67c2,	// (0x00026fb1) scroll_pane_cp16_ParamLimits

0x67c2,	// (0x00026fb1) scroll_pane_cp16

0x54a7,	// (0x00025c96) button_value_adjust_pane_ParamLimits

0x54a7,	// (0x00025c96) button_value_adjust_pane

0xdc76,	// (0x0002e465) button_value_adjust_pane_cp6_ParamLimits

0xdc76,	// (0x0002e465) button_value_adjust_pane_cp6

0xdd90,	// (0x0002e57f) settings_code_pane_cp_ParamLimits

0xdd90,	// (0x0002e57f) settings_code_pane_cp

0xe440,	// (0x0002ec2f) cell_touch_pane_g1

0xe440,	// (0x0002ec2f) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0002fecd) cell_touch_pane_g

0xdf14,	// (0x0002e703) cell_touch_pane_cp_ParamLimits

0xdf14,	// (0x0002e703) cell_touch_pane_cp

0xdf30,	// (0x0002e71f) cell_touch_pane_ParamLimits

0xdf30,	// (0x0002e71f) cell_touch_pane

0xe440,	// (0x0002ec2f) scroll_sc2_down_pane_g1

0xe440,	// (0x0002ec2f) scroll_sc2_up_pane_g1

0x31a0,	// (0x0002398f) bg_set_opt_pane_cp4_vc

0x6b52,	// (0x00027341) list_set_graphic_pane_vc_g1_ParamLimits

0x6b52,	// (0x00027341) list_set_graphic_pane_vc_g1

0x6b5e,	// (0x0002734d) list_set_graphic_pane_vc_g2_ParamLimits

0x6b5e,	// (0x0002734d) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x000301c4) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x000301c4) list_set_graphic_pane_vc_g

0x6b6a,	// (0x00027359) text_primary_small_cp13_vc_ParamLimits

0x6b6a,	// (0x00027359) text_primary_small_cp13_vc

0x6b82,	// (0x00027371) list_set_graphic_pane_vc_ParamLimits

0x6b82,	// (0x00027371) list_set_graphic_pane_vc

0x31a0,	// (0x0002398f) input_focus_pane_cp2_vc

0xe440,	// (0x0002ec2f) setting_code_pane_vc_g1

0x32cb,	// (0x00023aba) setting_code_pane_vc_t1

0x6b95,	// (0x00027384) set_text_pane_vc_t1_ParamLimits

0x6b95,	// (0x00027384) set_text_pane_vc_t1

0x31a0,	// (0x0002398f) input_focus_pane_cp1_vc

0x6bb1,	// (0x000273a0) list_set_text_pane_vc

0xe440,	// (0x0002ec2f) setting_text_pane_vc_g1

0x31a0,	// (0x0002398f) bg_set_opt_pane_cp2_vc

0x32c2,	// (0x00023ab1) setting_slider_graphic_pane_vc_g1

0x6bbb,	// (0x000273aa) setting_slider_graphic_pane_vc_t1

0x6bcb,	// (0x000273ba) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x000301c9) setting_slider_graphic_pane_vc_t

0x6bdb,	// (0x000273ca) slider_set_pane_cp_vc

0x6be3,	// (0x000273d2) slider_set_pane_vc_g1

0x6bec,	// (0x000273db) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x000301ce) slider_set_pane_vc_g

0x3b65,	// (0x00024354) set_opt_bg_pane_g1_copy1

0x3b6d,	// (0x0002435c) set_opt_bg_pane_g2_copy1

0x6c18,	// (0x00027407) set_opt_bg_pane_g3_copy1

0x3b7d,	// (0x0002436c) set_opt_bg_pane_g4_copy1

0x3b85,	// (0x00024374) set_opt_bg_pane_g5_copy1

0x3b8d,	// (0x0002437c) set_opt_bg_pane_g6_copy1

0x6c22,	// (0x00027411) set_opt_bg_pane_g7_copy1

0x6c2c,	// (0x0002741b) set_opt_bg_pane_g8_copy1

0x6c36,	// (0x00027425) set_opt_bg_pane_g9_copy1

0x31a0,	// (0x0002398f) bg_set_opt_pane_cp_vc

0x6c40,	// (0x0002742f) setting_slider_pane_vc_t1

0x6c4f,	// (0x0002743e) setting_slider_pane_vc_t2

0x6c5f,	// (0x0002744e) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x000301dd) setting_slider_pane_vc_t

0x6c6f,	// (0x0002745e) slider_set_pane_vc

0x1e21,	// (0x00022610) volume_set_pane_vc_g1

0x1e2a,	// (0x00022619) volume_set_pane_vc_g2

0x1e33,	// (0x00022622) volume_set_pane_vc_g3

0x1e3c,	// (0x0002262b) volume_set_pane_vc_g4

0x1e45,	// (0x00022634) volume_set_pane_vc_g5

0x1e4e,	// (0x0002263d) volume_set_pane_vc_g6

0x1e57,	// (0x00022646) volume_set_pane_vc_g7

0x1e60,	// (0x0002264f) volume_set_pane_vc_g8

0x1e69,	// (0x00022658) volume_set_pane_vc_g9

0x1e72,	// (0x00022661) volume_set_pane_vc_g10

0x0009,

0xf88c,	// (0x0003007b) volume_set_pane_vc_g

0x6c77,	// (0x00027466) volume_set_pane_vc

0x6c7f,	// (0x0002746e) button_value_adjust_pane_cp1_vc

0x6c89,	// (0x00027478) list_highlight_pane_cp2_vc

0x6c92,	// (0x00027481) list_set_pane_vc_ParamLimits

0x6c92,	// (0x00027481) list_set_pane_vc

0x6cf0,	// (0x000274df) main_pane_set_vc_t1_ParamLimits

0x6cf0,	// (0x000274df) main_pane_set_vc_t1

0x6d05,	// (0x000274f4) main_pane_set_vc_t2_ParamLimits

0x6d05,	// (0x000274f4) main_pane_set_vc_t2

0x6d17,	// (0x00027506) main_pane_set_vc_t3_ParamLimits

0x6d17,	// (0x00027506) main_pane_set_vc_t3

0x6d2b,	// (0x0002751a) main_pane_set_vc_t4_ParamLimits

0x6d2b,	// (0x0002751a) main_pane_set_vc_t4

0x0003,

0xf9f5,	// (0x000301e4) main_pane_set_vc_t_ParamLimits

0xf9f5,	// (0x000301e4) main_pane_set_vc_t

0x6d3f,	// (0x0002752e) setting_code_pane_vc_ParamLimits

0x6d3f,	// (0x0002752e) setting_code_pane_vc

0x6d50,	// (0x0002753f) setting_slider_graphic_pane_vc

0x6d50,	// (0x0002753f) setting_slider_pane_vc

0x6d50,	// (0x0002753f) setting_text_pane_vc

0x6d50,	// (0x0002753f) setting_volume_pane_vc

0x6d5a,	// (0x00027549) scroll_pane_cp121_vc

0x3ae7,	// (0x000242d6) set_content_pane_vc

0x6d62,	// (0x00027551) button_value_adjust_pane_g1

0x6d6b,	// (0x0002755a) button_value_adjust_pane_g2

0x0001,

0xfa4a,	// (0x00030239) button_value_adjust_pane_g

0x6d74,	// (0x00027563) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d74,	// (0x00027563) form_field_slider_wide_pane_vc_t1

0x6d88,	// (0x00027577) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d88,	// (0x00027577) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4f,	// (0x0003023e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4f,	// (0x0003023e) form_field_slider_wide_pane_vc_t

0x34fb,	// (0x00023cea) input_focus_pane_cp10_vc_ParamLimits

0x34fb,	// (0x00023cea) input_focus_pane_cp10_vc

0x6db6,	// (0x000275a5) slider_cont_pane_cp1_vc_ParamLimits

0x6db6,	// (0x000275a5) slider_cont_pane_cp1_vc

0x6dc8,	// (0x000275b7) slider_form_pane_g1_cp2

0x6bec,	// (0x000273db) slider_form_pane_g2_cp2

0x6df5,	// (0x000275e4) form_field_slider_pane_vc_t3

0x6e03,	// (0x000275f2) form_field_slider_pane_vc_t4

0x6e11,	// (0x00027600) slider_form_pane_vc_ParamLimits

0x6e11,	// (0x00027600) slider_form_pane_vc

0x6e1e,	// (0x0002760d) form_field_slider_pane_vc_t1_ParamLimits

0x6e1e,	// (0x0002760d) form_field_slider_pane_vc_t1

0x6d88,	// (0x00027577) form_field_slider_pane_vc_t2_ParamLimits

0x6d88,	// (0x00027577) form_field_slider_pane_vc_t2

0x0001,

0xfa61,	// (0x00030250) form_field_slider_pane_vc_t_ParamLimits

0xfa61,	// (0x00030250) form_field_slider_pane_vc_t

0x34fb,	// (0x00023cea) input_focus_pane_cp9_vc_ParamLimits

0x34fb,	// (0x00023cea) input_focus_pane_cp9_vc

0x6e3a,	// (0x00027629) slider_cont_pane_vc_ParamLimits

0x6e3a,	// (0x00027629) slider_cont_pane_vc

0x6e4e,	// (0x0002763d) list_form_graphic_pane_cp_vc_ParamLimits

0x6e4e,	// (0x0002763d) list_form_graphic_pane_cp_vc

0x5103,	// (0x000258f2) form_field_popup_wide_pane_vc_g1

0x6e63,	// (0x00027652) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e63,	// (0x00027652) form_field_popup_wide_pane_vc_t1

0x3b0d,	// (0x000242fc) input_focus_pane_cp8_vc_ParamLimits

0x3b0d,	// (0x000242fc) input_focus_pane_cp8_vc

0x6ea8,	// (0x00027697) list_form_wide_pane_vc_ParamLimits

0x6ea8,	// (0x00027697) list_form_wide_pane_vc

0x6eb4,	// (0x000276a3) list_form_graphic_pane_vc_g1

0x6ebc,	// (0x000276ab) list_form_graphic_pane_vc_t1_ParamLimits

0x6ebc,	// (0x000276ab) list_form_graphic_pane_vc_t1

0x3280,	// (0x00023a6f) list_highlight_pane_cp5_vc_ParamLimits

0x3280,	// (0x00023a6f) list_highlight_pane_cp5_vc

0x6ed8,	// (0x000276c7) list_form_graphic_pane_vc_ParamLimits

0x6ed8,	// (0x000276c7) list_form_graphic_pane_vc

0x5103,	// (0x000258f2) form_field_popup_pane_vc_g1

0x6eee,	// (0x000276dd) form_field_popup_pane_vc_t1_ParamLimits

0x6eee,	// (0x000276dd) form_field_popup_pane_vc_t1

0x3b0d,	// (0x000242fc) input_focus_pane_cp7_vc_ParamLimits

0x3b0d,	// (0x000242fc) input_focus_pane_cp7_vc

0x6f05,	// (0x000276f4) list_form_pane_vc_ParamLimits

0x6f05,	// (0x000276f4) list_form_pane_vc

0x6f11,	// (0x00027700) data_form_pane_vc_t1_ParamLimits

0x6f11,	// (0x00027700) data_form_pane_vc_t1

0x3b65,	// (0x00024354) input_focus_pane_vc_g1

0x3b6d,	// (0x0002435c) input_focus_pane_vc_g2

0x3b75,	// (0x00024364) input_focus_pane_vc_g3

0x3b7d,	// (0x0002436c) input_focus_pane_vc_g4

0x3b85,	// (0x00024374) input_focus_pane_vc_g5

0x3b8d,	// (0x0002437c) input_focus_pane_vc_g6

0x3b95,	// (0x00024384) input_focus_pane_vc_g7

0x3b9d,	// (0x0002438c) input_focus_pane_vc_g8

0x3ba5,	// (0x00024394) input_focus_pane_vc_g9

0xe440,	// (0x0002ec2f) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002fe56) input_focus_pane_vc_g

0x50f7,	// (0x000258e6) data_form_pane_vc_ParamLimits

0x50f7,	// (0x000258e6) data_form_pane_vc

0x5103,	// (0x000258f2) form_field_data_pane_vc_g1

0x6f2c,	// (0x0002771b) form_field_data_pane_vc_t1_ParamLimits

0x6f2c,	// (0x0002771b) form_field_data_pane_vc_t1

0x3b0d,	// (0x000242fc) input_focus_pane_vc_ParamLimits

0x3b0d,	// (0x000242fc) input_focus_pane_vc

0x6f46,	// (0x00027735) button_value_adjust_pane_cp3_vc

0x6f4e,	// (0x0002773d) button_value_adjust_pane_cp5_vc

0x6f56,	// (0x00027745) form_field_data_pane_vc_ParamLimits

0x6f56,	// (0x00027745) form_field_data_pane_vc

0x6f6d,	// (0x0002775c) form_field_data_pane_vc_cp2

0x6f75,	// (0x00027764) form_field_data_wide_pane_vc_ParamLimits

0x6f75,	// (0x00027764) form_field_data_wide_pane_vc

0x6f8b,	// (0x0002777a) form_field_data_wide_pane_vc_cp2

0x6f93,	// (0x00027782) form_field_popup_pane_vc_ParamLimits

0x6f93,	// (0x00027782) form_field_popup_pane_vc

0x6faa,	// (0x00027799) form_field_popup_wide_pane_vc_ParamLimits

0x6faa,	// (0x00027799) form_field_popup_wide_pane_vc

0x6fc0,	// (0x000277af) form_field_slider_pane_vc_ParamLimits

0x6fc0,	// (0x000277af) form_field_slider_pane_vc

0x6fd3,	// (0x000277c2) form_field_slider_wide_pane_vc_ParamLimits

0x6fd3,	// (0x000277c2) form_field_slider_wide_pane_vc

0xdf4e,	// (0x0002e73d) grid_touch_1_pane_ParamLimits

0xdf4e,	// (0x0002e73d) grid_touch_1_pane

0xdf62,	// (0x0002e751) grid_touch_2_pane_ParamLimits

0xdf62,	// (0x0002e751) grid_touch_2_pane

0x70b7,	// (0x000278a6) touch_pane_g1_ParamLimits

0x70b7,	// (0x000278a6) touch_pane_g1

0x700a,	// (0x000277f9) cell_app_pane_cp_wide_ParamLimits

0x700a,	// (0x000277f9) cell_app_pane_cp_wide

0x701b,	// (0x0002780a) grid_popup_fast_wide_pane_ParamLimits

0x701b,	// (0x0002780a) grid_popup_fast_wide_pane

0x702f,	// (0x0002781e) scroll_pane_cp19_ParamLimits

0x702f,	// (0x0002781e) scroll_pane_cp19

0x31a0,	// (0x0002398f) bg_popup_window_pane_cp20

0x7043,	// (0x00027832) listscroll_popup_fast_wide_pane

0xdf8c,	// (0x0002e77b) grid_indicator_nsta_pane

0x705d,	// (0x0002784c) clock_nsta_pane_g1

0x7066,	// (0x00027855) clock_nsta_pane_t1

0xdf98,	// (0x0002e787) cell_indicator_nsta_pane_ParamLimits

0xdf98,	// (0x0002e787) cell_indicator_nsta_pane

0x70b7,	// (0x000278a6) cell_indicator_nsta_pane_g1

0xdfb3,	// (0x0002e7a2) cell_indicator_nsta_pane_g2

0x0001,

0xfa72,	// (0x00030261) cell_indicator_nsta_pane_g

0x70d7,	// (0x000278c6) clock_nsta_pane_cp

0x70e0,	// (0x000278cf) indicator_nsta_pane_cp

0x70ea,	// (0x000278d9) nsta_clock_indic_pane_g1

0x3349,	// (0x00023b38) grid_indicator_pane

0x40b2,	// (0x000248a1) scroll_pane_cp29

0x140e,	// (0x00021bfd) indicator_nsta_pane_cp2_ParamLimits

0x140e,	// (0x00021bfd) indicator_nsta_pane_cp2

0x3280,	// (0x00023a6f) main_apps_wheel_pane

0x5312,	// (0x00025b01) form_midp_field_text_pane_ParamLimits

0x545d,	// (0x00025c4c) scroll_bar_cp050_ParamLimits

0x7143,	// (0x00027932) cell_indicator_pane_ParamLimits

0x7143,	// (0x00027932) cell_indicator_pane

0x715a,	// (0x00027949) cell_indicator_pane_g1

0xdfc0,	// (0x0002e7af) grid_wheel_folder_pane_ParamLimits

0xdfc0,	// (0x0002e7af) grid_wheel_folder_pane

0xdfce,	// (0x0002e7bd) list_wheel_apps_pane_ParamLimits

0xdfce,	// (0x0002e7bd) list_wheel_apps_pane

0xdfdc,	// (0x0002e7cb) main_apps_wheel_pane_g1_ParamLimits

0xdfdc,	// (0x0002e7cb) main_apps_wheel_pane_g1

0xdfe8,	// (0x0002e7d7) main_apps_wheel_pane_g2_ParamLimits

0xdfe8,	// (0x0002e7d7) main_apps_wheel_pane_g2

0x0001,

0xfa8e,	// (0x0003027d) main_apps_wheel_pane_g_ParamLimits

0xfa8e,	// (0x0003027d) main_apps_wheel_pane_g

0xdff6,	// (0x0002e7e5) main_apps_wheel_pane_t1_ParamLimits

0xdff6,	// (0x0002e7e5) main_apps_wheel_pane_t1

0xe00a,	// (0x0002e7f9) list_wheel_apps_pane_g1

0xe012,	// (0x0002e801) list_wheel_apps_pane_g2

0xe01a,	// (0x0002e809) list_wheel_apps_pane_g3

0xe022,	// (0x0002e811) list_wheel_apps_pane_g4

0xe02c,	// (0x0002e81b) list_wheel_apps_pane_g5

0x0004,

0xfa93,	// (0x00030282) list_wheel_apps_pane_g

0x4646,	// (0x00024e35) navi_icon_text_pane

0xd633,	// (0x0002de22) aid_fill_nsta

0x721f,	// (0x00027a0e) navi_icon_text_pane_g1

0x722b,	// (0x00027a1a) navi_icon_text_pane_t1

0x44e4,	// (0x00024cd3) list_set_graphic_pane_t1_ParamLimits

0x44e4,	// (0x00024cd3) list_set_graphic_pane_t1

0x5bc8,	// (0x000263b7) popup_midp_note_alarm_window_t6_ParamLimits

0x5bc8,	// (0x000263b7) popup_midp_note_alarm_window_t6

0x5bda,	// (0x000263c9) popup_midp_note_alarm_window_t7_ParamLimits

0x5bda,	// (0x000263c9) popup_midp_note_alarm_window_t7

0x5bec,	// (0x000263db) popup_midp_note_alarm_window_t8_ParamLimits

0x5bec,	// (0x000263db) popup_midp_note_alarm_window_t8

0x5bfe,	// (0x000263ed) popup_midp_note_alarm_window_t9_ParamLimits

0x5bfe,	// (0x000263ed) popup_midp_note_alarm_window_t9

0x5c10,	// (0x000263ff) popup_midp_note_alarm_window_t10_ParamLimits

0x5c10,	// (0x000263ff) popup_midp_note_alarm_window_t10

0x5c22,	// (0x00026411) popup_midp_note_alarm_window_t11_ParamLimits

0x5c22,	// (0x00026411) popup_midp_note_alarm_window_t11

0x5c34,	// (0x00026423) scroll_pane_cp17_ParamLimits

0x5c34,	// (0x00026423) scroll_pane_cp17

0x1e21,	// (0x00022610) volume_small_pane_cp_g1

0x2116,	// (0x00022905) volume_small_pane_cp_g2

0x211f,	// (0x0002290e) volume_small_pane_cp_g3

0x2128,	// (0x00022917) volume_small_pane_cp_g4

0x2131,	// (0x00022920) volume_small_pane_cp_g5

0x213a,	// (0x00022929) volume_small_pane_cp_g6

0x2143,	// (0x00022932) volume_small_pane_cp_g7

0x214c,	// (0x0002293b) volume_small_pane_cp_g8

0x2155,	// (0x00022944) volume_small_pane_cp_g9

0x215e,	// (0x0002294d) volume_small_pane_cp_g10

0x48ac,	// (0x0002509b) midp_ticker_pane_g1_ParamLimits

0x48b8,	// (0x000250a7) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0002ff22) midp_ticker_pane_g_ParamLimits

0x48c4,	// (0x000250b3) midp_ticker_pane_t1_ParamLimits

0xd657,	// (0x0002de46) aid_fill_nsta_2

0x5449,	// (0x00025c38) list_form2_midp_pane

0x6599,	// (0x00026d88) midp_editing_number_pane_ParamLimits

0x65a8,	// (0x00026d97) midp_ticker_pane_ParamLimits

0x723d,	// (0x00027a2c) form2_midp_field_pane

0x7261,	// (0x00027a50) scroll_pane_cp51

0x7281,	// (0x00027a70) form2_midp_button_pane_ParamLimits

0x7281,	// (0x00027a70) form2_midp_button_pane

0x7293,	// (0x00027a82) form2_midp_content_pane_ParamLimits

0x7293,	// (0x00027a82) form2_midp_content_pane

0x72ad,	// (0x00027a9c) form2_midp_field_choice_group_pane

0x72b5,	// (0x00027aa4) form2_midp_field_pane_g1

0x72bd,	// (0x00027aac) form2_midp_field_pane_g2

0x72c5,	// (0x00027ab4) form2_midp_field_pane_g3

0x72cd,	// (0x00027abc) form2_midp_field_pane_g4

0x0003,

0xfab8,	// (0x000302a7) form2_midp_field_pane_g

0x72d5,	// (0x00027ac4) form2_midp_gauge_slider_pane

0x72dd,	// (0x00027acc) form2_midp_gauge_wait_pane

0x72e5,	// (0x00027ad4) form2_midp_image_pane_ParamLimits

0x72e5,	// (0x00027ad4) form2_midp_image_pane

0x7300,	// (0x00027aef) form2_midp_label_pane_ParamLimits

0x7300,	// (0x00027aef) form2_midp_label_pane

0xe05f,	// (0x0002e84e) form2_midp_label_pane_cp_ParamLimits

0xe05f,	// (0x0002e84e) form2_midp_label_pane_cp

0x733a,	// (0x00027b29) form2_midp_string_pane_ParamLimits

0x733a,	// (0x00027b29) form2_midp_string_pane

0xbbf9,	// (0x0002c3e8) form2_midp_text_pane_ParamLimits

0xbbf9,	// (0x0002c3e8) form2_midp_text_pane

0x734c,	// (0x00027b3b) form2_midp_time_pane

0x735c,	// (0x00027b4b) input_focus_pane_cp51_ParamLimits

0x735c,	// (0x00027b4b) input_focus_pane_cp51

0x7374,	// (0x00027b63) form2_midp_label_pane_t1_ParamLimits

0x7374,	// (0x00027b63) form2_midp_label_pane_t1

0xbc12,	// (0x0002c401) form2_mdip_text_pane_t1_ParamLimits

0xbc12,	// (0x0002c401) form2_mdip_text_pane_t1

0x0923,	// (0x00021112) form2_midp_time_pane_t1

0x73bd,	// (0x00027bac) form2_midp_gauge_slider_pane_t1

0xe07e,	// (0x0002e86d) form2_midp_gauge_slider_pane_t2

0xe090,	// (0x0002e87f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac1,	// (0x000302b0) form2_midp_gauge_slider_pane_t

0x73f3,	// (0x00027be2) form2_midp_slider_pane

0x73ff,	// (0x00027bee) form2_midp_gauge_wait_pane_t1

0x740d,	// (0x00027bfc) form2_midp_wait_pane_ParamLimits

0x740d,	// (0x00027bfc) form2_midp_wait_pane

0xe0a2,	// (0x0002e891) list_single_2graphic_pane_cp4_ParamLimits

0xe0a2,	// (0x0002e891) list_single_2graphic_pane_cp4

0xda73,	// (0x0002e262) list_single_midp_graphic_pane_cp_ParamLimits

0xda73,	// (0x0002e262) list_single_midp_graphic_pane_cp

0x31a0,	// (0x0002398f) list_highlight_pane_cp20

0x745c,	// (0x00027c4b) list_single_2graphic_pane_g1_cp4

0x7464,	// (0x00027c53) list_single_2graphic_pane_g2_cp4

0x746c,	// (0x00027c5b) list_single_2graphic_pane_t1_cp4

0x3280,	// (0x00023a6f) list_highlight_pane_cp21

0x747b,	// (0x00027c6a) list_single_midp_graphic_pane_g4_cp

0x748a,	// (0x00027c79) list_single_midp_graphic_pane_t1_cp

0xe0b6,	// (0x0002e8a5) form2_mdip_string_pane_t1_ParamLimits

0xe0b6,	// (0x0002e8a5) form2_mdip_string_pane_t1

0x31a0,	// (0x0002398f) bg_wml_button_pane_cp2

0xe440,	// (0x0002ec2f) form2_midp_image_pane_g1

0xf466,	// (0x0002fc55) list_double_large_graphic_pane_g5_ParamLimits

0xf466,	// (0x0002fc55) list_double_large_graphic_pane_g5

0xd525,	// (0x0002dd14) midp_form_pane_ParamLimits

0x3280,	// (0x00023a6f) main_apps_wheel_pane_ParamLimits

0xc930,	// (0x0002d11f) popup_preview_window_ParamLimits

0xc930,	// (0x0002d11f) popup_preview_window

0x1c94,	// (0x00022483) popup_touch_info_window_ParamLimits

0x1c94,	// (0x00022483) popup_touch_info_window

0x1cb2,	// (0x000224a1) popup_touch_menu_window_ParamLimits

0x1cb2,	// (0x000224a1) popup_touch_menu_window

0xe436,	// (0x0002ec25) bg_popup_sub_pane_cp6

0x7598,	// (0x00027d87) list_touch_menu_pane

0x75a0,	// (0x00027d8f) list_single_touch_menu_pane_ParamLimits

0x75a0,	// (0x00027d8f) list_single_touch_menu_pane

0x75b6,	// (0x00027da5) list_single_touch_menu_pane_t1

0x3280,	// (0x00023a6f) bg_popup_sub_pane_cp7_ParamLimits

0x3280,	// (0x00023a6f) bg_popup_sub_pane_cp7

0x75c4,	// (0x00027db3) heading_sub_pane

0x75cc,	// (0x00027dbb) list_touch_info_pane_ParamLimits

0x75cc,	// (0x00027dbb) list_touch_info_pane

0x75db,	// (0x00027dca) list_single_touch_info_pane_ParamLimits

0x75db,	// (0x00027dca) list_single_touch_info_pane

0x75ed,	// (0x00027ddc) list_single_touch_info_pane_t1

0x75fb,	// (0x00027dea) list_single_touch_info_pane_t2

0x0001,

0xfacf,	// (0x000302be) list_single_touch_info_pane_t

0x47cf,	// (0x00024fbe) bg_popup_heading_pane_cp

0x7609,	// (0x00027df8) heading_sub_pane_t1

0x5091,	// (0x00025880) bg_popup_preview_window_pane_cp_ParamLimits

0x5091,	// (0x00025880) bg_popup_preview_window_pane_cp

0x75c4,	// (0x00027db3) heading_preview_pane

0x75cc,	// (0x00027dbb) list_preview_pane_ParamLimits

0x75cc,	// (0x00027dbb) list_preview_pane

0x7617,	// (0x00027e06) popup_preview_window_g1

0x75db,	// (0x00027dca) list_single_preview_pane_ParamLimits

0x75db,	// (0x00027dca) list_single_preview_pane

0x761f,	// (0x00027e0e) list_single_preview_pane_g1

0x7627,	// (0x00027e16) list_single_preview_pane_t1

0x75ed,	// (0x00027ddc) list_single_preview_pane_t2

0x0001,

0xfad4,	// (0x000302c3) list_single_preview_pane_t

0x7635,	// (0x00027e24) bg_popup_heading_pane_cp2_ParamLimits

0x7635,	// (0x00027e24) bg_popup_heading_pane_cp2

0x764b,	// (0x00027e3a) heading_preview_pane_g1

0x7653,	// (0x00027e42) heading_preview_pane_t1_ParamLimits

0x7653,	// (0x00027e42) heading_preview_pane_t1

0x336c,	// (0x00023b5b) soft_indicator_pane_t1_ParamLimits

0x3a80,	// (0x0002426f) scroll_pane_ParamLimits

0x3fab,	// (0x0002479a) scroll_sc2_left_pane

0x3fb4,	// (0x000247a3) scroll_sc2_right_pane

0x3fd3,	// (0x000247c2) scroll_bg_pane_g1_ParamLimits

0x3fe8,	// (0x000247d7) scroll_bg_pane_g2_ParamLimits

0x4000,	// (0x000247ef) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002fead) scroll_bg_pane_g_ParamLimits

0x3fd3,	// (0x000247c2) scroll_handle_pane_g1_ParamLimits

0x4022,	// (0x00024811) scroll_handle_pane_g2_ParamLimits

0x4000,	// (0x000247ef) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002feb4) scroll_handle_pane_g_ParamLimits

0x1758,	// (0x00021f47) popup_choice_list_window_ParamLimits

0x1758,	// (0x00021f47) popup_choice_list_window

0x4f67,	// (0x00025756) choice_list_pane

0x4fe9,	// (0x000257d8) cell_toolbar_pane_t1

0x5011,	// (0x00025800) toolbar_button_pane_ParamLimits

0x60fa,	// (0x000268e9) ai_gene_pane_1_t2_ParamLimits

0x60fa,	// (0x000268e9) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x000300d7) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x000300d7) ai_gene_pane_1_t

0x7670,	// (0x00027e5f) scroll_sc2_left_pane_g1

0x7670,	// (0x00027e5f) scroll_sc2_right_pane_g1

0x4af3,	// (0x000252e2) bg_popup_sub_pane_cp10

0x767a,	// (0x00027e69) list_choice_list_pane

0x7693,	// (0x00027e82) list_single_choice_list_pane_ParamLimits

0x7693,	// (0x00027e82) list_single_choice_list_pane

0x76a6,	// (0x00027e95) list_single_choice_list_pane_g1

0x3cb1,	// (0x000244a0) list_single_choice_list_pane_t1_ParamLimits

0x3cb1,	// (0x000244a0) list_single_choice_list_pane_t1

0x76ae,	// (0x00027e9d) choice_list_pane_g1

0x76b6,	// (0x00027ea5) choice_list_pane_t1

0xe436,	// (0x0002ec25) input_focus_pane_cp11

0x3e88,	// (0x00024677) title_pane_stacon_g2_ParamLimits

0x3e88,	// (0x00024677) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002fe93) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002fe93) title_pane_stacon_g

0x47cf,	// (0x00024fbe) cursor_press_pane

0xc5d7,	// (0x0002cdc6) popup_fep_hwr_window_ParamLimits

0xc5d7,	// (0x0002cdc6) popup_fep_hwr_window

0x187e,	// (0x0002206d) popup_fep_vkb_window_ParamLimits

0x187e,	// (0x0002206d) popup_fep_vkb_window

0x76c4,	// (0x00027eb3) cursor_press_pane_g1

0x0002,

0xfafd,	// (0x000302ec) fep_vkb_side_pane_g_ParamLimits

0x21a0,	// (0x0002298f) fep_hwr_candidate_pane_ParamLimits

0x21a0,	// (0x0002298f) fep_hwr_candidate_pane

0x21ca,	// (0x000229b9) fep_hwr_side_pane_ParamLimits

0x21ca,	// (0x000229b9) fep_hwr_side_pane

0x21ea,	// (0x000229d9) fep_hwr_top_pane_ParamLimits

0x21ea,	// (0x000229d9) fep_hwr_top_pane

0x2202,	// (0x000229f1) fep_hwr_write_pane_ParamLimits

0x2202,	// (0x000229f1) fep_hwr_write_pane

0xfafd,	// (0x000302ec) fep_vkb_side_pane_g

0x76cc,	// (0x00027ebb) fep_hwr_top_pane_g1

0x76de,	// (0x00027ecd) fep_hwr_top_pane_g2

0x222e,	// (0x00022a1d) fep_hwr_top_pane_g3

0x0002,

0xfad9,	// (0x000302c8) fep_hwr_top_pane_g

0x2243,	// (0x00022a32) fep_hwr_top_text_pane

0x41a2,	// (0x00024991) fep_hwr_top_text_pane_g1

0x7714,	// (0x00027f03) fep_hwr_top_text_pane_t1

0x2339,	// (0x00022b28) fep_hwr_candidate_pane_g1

0x7967,	// (0x00028156) fep_vkb_keypad_pane_g3_ParamLimits

0x7967,	// (0x00028156) fep_vkb_keypad_pane_g3

0x798f,	// (0x0002817e) fep_vkb_keypad_pane_g4_ParamLimits

0x798f,	// (0x0002817e) fep_vkb_keypad_pane_g4

0x79fe,	// (0x000281ed) fep_vkb_bottom_pane_g2_ParamLimits

0x79fe,	// (0x000281ed) fep_vkb_bottom_pane_g2

0x0001,

0xfb04,	// (0x000302f3) fep_vkb_bottom_pane_g_ParamLimits

0xfb04,	// (0x000302f3) fep_vkb_bottom_pane_g

0x7670,	// (0x00027e5f) cell_vkb_side_pane_g2

0x0001,

0xfb0e,	// (0x000302fd) cell_vkb_side_pane_g

0x7a89,	// (0x00028278) cell_vkb_side_pane_t1

0x7a97,	// (0x00028286) cell_vkb_side_pane_t1_copy1

0x7670,	// (0x00027e5f) bg_fep_vkb_candidate_pane_g2

0x7bc3,	// (0x000283b2) cell_vkb_candidate_pane_ParamLimits

0x7722,	// (0x00027f11) aid_size_cell_vkb_ParamLimits

0x7722,	// (0x00027f11) aid_size_cell_vkb

0x7bc3,	// (0x000283b2) cell_vkb_candidate_pane

0x2353,	// (0x00022b42) bg_popup_fep_shadow_pane_g1

0xe160,	// (0x0002e94f) fep_vkb_bottom_pane_ParamLimits

0xe160,	// (0x0002e94f) fep_vkb_bottom_pane

0x77e6,	// (0x00027fd5) fep_vkb_candidate_pane_ParamLimits

0x77e6,	// (0x00027fd5) fep_vkb_candidate_pane

0xe185,	// (0x0002e974) fep_vkb_keypad_pane_ParamLimits

0xe185,	// (0x0002e974) fep_vkb_keypad_pane

0xe1c1,	// (0x0002e9b0) fep_vkb_side_pane_ParamLimits

0xe1c1,	// (0x0002e9b0) fep_vkb_side_pane

0xe1fd,	// (0x0002e9ec) fep_vkb_top_pane_ParamLimits

0xe1fd,	// (0x0002e9ec) fep_vkb_top_pane

0x78c0,	// (0x000280af) fep_vkb_top_pane_g1_ParamLimits

0x78c0,	// (0x000280af) fep_vkb_top_pane_g1

0x78cf,	// (0x000280be) fep_vkb_top_pane_g2_ParamLimits

0x78cf,	// (0x000280be) fep_vkb_top_pane_g2

0x78de,	// (0x000280cd) fep_vkb_top_pane_g3_ParamLimits

0x78de,	// (0x000280cd) fep_vkb_top_pane_g3

0x0003,

0xfaf4,	// (0x000302e3) fep_vkb_top_pane_g_ParamLimits

0xfaf4,	// (0x000302e3) fep_vkb_top_pane_g

0x78fc,	// (0x000280eb) fep_vkb_top_text_pane_ParamLimits

0x78fc,	// (0x000280eb) fep_vkb_top_text_pane

0xe239,	// (0x0002ea28) fep_vkb_side_pane_g1_ParamLimits

0xe239,	// (0x0002ea28) fep_vkb_side_pane_g1

0x7956,	// (0x00028145) grid_vkb_side_pane_ParamLimits

0x7956,	// (0x00028145) grid_vkb_side_pane

0x235b,	// (0x00022b4a) bg_popup_fep_shadow_pane_g2

0x2364,	// (0x00022b53) bg_popup_fep_shadow_pane_g3

0x236c,	// (0x00022b5b) bg_popup_fep_shadow_pane_g4

0x2375,	// (0x00022b64) bg_popup_fep_shadow_pane_g5

0x237f,	// (0x00022b6e) bg_popup_fep_shadow_pane_g6

0x2387,	// (0x00022b76) bg_popup_fep_shadow_pane_g7

0x3b85,	// (0x00024374) bg_popup_fep_shadow_pane_g8

0x79ad,	// (0x0002819c) grid_vkb_keypad_number_pane_ParamLimits

0x79ad,	// (0x0002819c) grid_vkb_keypad_number_pane

0x79bd,	// (0x000281ac) grid_vkb_keypad_pane_ParamLimits

0x79bd,	// (0x000281ac) grid_vkb_keypad_pane

0x79e3,	// (0x000281d2) fep_vkb_bottom_pane_g1_ParamLimits

0x79e3,	// (0x000281d2) fep_vkb_bottom_pane_g1

0x7a0c,	// (0x000281fb) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a0c,	// (0x000281fb) grid_vkb_keypad_bottom_left_pane

0x7a21,	// (0x00028210) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a21,	// (0x00028210) grid_vkb_keypad_bottom_right_pane

0x7a36,	// (0x00028225) fep_vkb_top_text_pane_g1

0xe280,	// (0x0002ea6f) fep_vkb_top_text_pane_t1

0xe292,	// (0x0002ea81) cell_vkb_side_pane_ParamLimits

0xe292,	// (0x0002ea81) cell_vkb_side_pane

0x7670,	// (0x00027e5f) cell_vkb_side_pane_g1

0x7aa5,	// (0x00028294) cell_vkb_keypad_pane_ParamLimits

0x7aa5,	// (0x00028294) cell_vkb_keypad_pane

0x7b1a,	// (0x00028309) cell_vkb_keypad_pane_g1

0x0008,

0xfb21,	// (0x00030310) bg_popup_fep_shadow_pane_g

0x7670,	// (0x00027e5f) cell_hwr_side_pane_g1

0x7670,	// (0x00027e5f) cell_hwr_side_pane_g2

0x7b24,	// (0x00028313) cell_vkb_keypad_pane_t1

0xe2a8,	// (0x0002ea97) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe2a8,	// (0x0002ea97) cell_vkb_keypad_bottom_left_pane

0xe2bd,	// (0x0002eaac) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe2bd,	// (0x0002eaac) cell_vkb_keypad_bottom_right_pane

0x7670,	// (0x00027e5f) cell_vkb_keypad_bottom_left_pane_g1

0x7670,	// (0x00027e5f) cell_vkb_keypad_bottom_right_pane_g1

0x7b88,	// (0x00028377) cell_vkb_keypad_number_pane_ParamLimits

0x7b88,	// (0x00028377) cell_vkb_keypad_number_pane

0x7ba7,	// (0x00028396) cell_vkb_keypad_number_pane_g1

0x7bb1,	// (0x000283a0) cell_vkb_keypad_number_pane_g2

0x7bba,	// (0x000283a9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb13,	// (0x00030302) cell_vkb_keypad_number_pane_g

0x7b24,	// (0x00028313) cell_vkb_keypad_number_pane_t1

0x7bde,	// (0x000283cd) fep_vkb_candidate_pane_g1

0x0001,

0xfb0e,	// (0x000302fd) cell_hwr_side_pane_g

0x7bf7,	// (0x000283e6) cell_hwr_side_pane_t1

0x2399,	// (0x00022b88) cell_hwr_side_pane_t1_copy1

0x78ee,	// (0x000280dd) cell_hwr_candidate_pane_g1

0x23a7,	// (0x00022b96) cell_hwr_candidate_pane_t1

0x7670,	// (0x00027e5f) cell_vkb_candidate_pane_g2

0x7c7d,	// (0x0002846c) cell_vkb_candidate_pane_t1

0x2167,	// (0x00022956) bg_popup_fep_shadow_pane_ParamLimits

0x2167,	// (0x00022956) bg_popup_fep_shadow_pane

0xe126,	// (0x0002e915) bg_fep_hwr_top_pane_g4

0x76f0,	// (0x00027edf) bg_hwr_side_pane_g1_ParamLimits

0x76f0,	// (0x00027edf) bg_hwr_side_pane_g1

0xcc6a,	// (0x0002d459) cell_hwr_side_pane_ParamLimits

0xcc6a,	// (0x0002d459) cell_hwr_side_pane

0x22ba,	// (0x00022aa9) fep_hwr_write_pane_g1_ParamLimits

0x22ba,	// (0x00022aa9) fep_hwr_write_pane_g1

0x22c7,	// (0x00022ab6) fep_hwr_write_pane_g2_ParamLimits

0x22c7,	// (0x00022ab6) fep_hwr_write_pane_g2

0x22d4,	// (0x00022ac3) fep_hwr_write_pane_g3_ParamLimits

0x22d4,	// (0x00022ac3) fep_hwr_write_pane_g3

0xcc8a,	// (0x0002d479) fep_hwr_write_pane_g4_ParamLimits

0xcc8a,	// (0x0002d479) fep_hwr_write_pane_g4

0x0005,

0xfae0,	// (0x000302cf) fep_hwr_write_pane_g_ParamLimits

0xfae0,	// (0x000302cf) fep_hwr_write_pane_g

0xe126,	// (0x0002e915) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe126,	// (0x0002e915) bg_fep_hwr_candidate_pane_g2

0x22f7,	// (0x00022ae6) cell_hwr_candidate_pane_ParamLimits

0x22f7,	// (0x00022ae6) cell_hwr_candidate_pane

0x2339,	// (0x00022b28) fep_hwr_candidate_pane_g1_ParamLimits

0x7750,	// (0x00027f3f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7750,	// (0x00027f3f) bg_popup_fep_shadow_pane_cp2

0x78ee,	// (0x000280dd) fep_vkb_top_pane_g4_ParamLimits

0x78ee,	// (0x000280dd) fep_vkb_top_pane_g4

0x7934,	// (0x00028123) fep_vkb_side_pane_g2_ParamLimits

0x7934,	// (0x00028123) fep_vkb_side_pane_g2

0xb87b,	// (0x0002c06a) list_setting_pane_t4_ParamLimits

0xb87b,	// (0x0002c06a) list_setting_pane_t4

0xb915,	// (0x0002c104) list_setting_number_pane_t5_ParamLimits

0xb915,	// (0x0002c104) list_setting_number_pane_t5

0x41d9,	// (0x000249c8) list_double_heading_pane_cp2_ParamLimits

0x41d9,	// (0x000249c8) list_double_heading_pane_cp2

0x3b1b,	// (0x0002430a) list_double_heading_pane_g1_cp2_ParamLimits

0x3b1b,	// (0x0002430a) list_double_heading_pane_g1_cp2

0x3b27,	// (0x00024316) list_double_heading_pane_g2_cp2_ParamLimits

0x3b27,	// (0x00024316) list_double_heading_pane_g2_cp2

0x7c8b,	// (0x0002847a) list_double_heading_pane_t1_cp2_ParamLimits

0x7c8b,	// (0x0002847a) list_double_heading_pane_t1_cp2

0x7ca1,	// (0x00028490) list_double_heading_pane_t2_cp2_ParamLimits

0x7ca1,	// (0x00028490) list_double_heading_pane_t2_cp2

0xe42e,	// (0x0002ec1d) aid_value_unit2

0x0f9e,	// (0x0002178d) popup_preview_fixed_window

0x3509,	// (0x00023cf8) bg_popup_preview_window_pane_cp02

0x7cb3,	// (0x000284a2) list_preview_fixed_pane

0x7cf9,	// (0x000284e8) list_empty_pane_fp_ParamLimits

0x7cf9,	// (0x000284e8) list_empty_pane_fp

0x7cf9,	// (0x000284e8) list_single_cale_day_pane_fp_ParamLimits

0x7cf9,	// (0x000284e8) list_single_cale_day_pane_fp

0x7cf9,	// (0x000284e8) list_single_graphic_heading_pane_fp_ParamLimits

0x7cf9,	// (0x000284e8) list_single_graphic_heading_pane_fp

0x7cf9,	// (0x000284e8) list_single_graphic_pane_fp_ParamLimits

0x7cf9,	// (0x000284e8) list_single_graphic_pane_fp

0x7cf9,	// (0x000284e8) list_single_heading_pane_fp_ParamLimits

0x7cf9,	// (0x000284e8) list_single_heading_pane_fp

0x7cf9,	// (0x000284e8) list_single_pane_fp_ParamLimits

0x7cf9,	// (0x000284e8) list_single_pane_fp

0x7d0e,	// (0x000284fd) list_single_pane_fp_g1_ParamLimits

0x7d0e,	// (0x000284fd) list_single_pane_fp_g1

0x0936,	// (0x00021125) list_single_pane_fp_g2_ParamLimits

0x0936,	// (0x00021125) list_single_pane_fp_g2

0x0942,	// (0x00021131) list_single_pane_fp_g3_ParamLimits

0x0942,	// (0x00021131) list_single_pane_fp_g3

0x7d1a,	// (0x00028509) list_single_pane_fp_g4_ParamLimits

0x7d1a,	// (0x00028509) list_single_pane_fp_g4

0x0003,

0xfb42,	// (0x00030331) list_single_pane_fp_g_ParamLimits

0xfb42,	// (0x00030331) list_single_pane_fp_g

0x0956,	// (0x00021145) list_single_pane_fp_t1_ParamLimits

0x0956,	// (0x00021145) list_single_pane_fp_t1

0x096d,	// (0x0002115c) list_single_graphic_pane_fp_g1_ParamLimits

0x096d,	// (0x0002115c) list_single_graphic_pane_fp_g1

0x7d0e,	// (0x000284fd) list_single_graphic_pane_fp_g2_ParamLimits

0x7d0e,	// (0x000284fd) list_single_graphic_pane_fp_g2

0x0936,	// (0x00021125) list_single_graphic_pane_fp_g3_ParamLimits

0x0936,	// (0x00021125) list_single_graphic_pane_fp_g3

0x0942,	// (0x00021131) list_single_graphic_pane_fp_g4_ParamLimits

0x0942,	// (0x00021131) list_single_graphic_pane_fp_g4

0x7d1a,	// (0x00028509) list_single_graphic_pane_fp_g5_ParamLimits

0x7d1a,	// (0x00028509) list_single_graphic_pane_fp_g5

0x0004,

0xfb4b,	// (0x0003033a) list_single_graphic_pane_fp_g_ParamLimits

0xfb4b,	// (0x0003033a) list_single_graphic_pane_fp_g

0x0979,	// (0x00021168) list_single_graphic_pane_fp_t1_ParamLimits

0x0979,	// (0x00021168) list_single_graphic_pane_fp_t1

0x096d,	// (0x0002115c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x096d,	// (0x0002115c) list_single_graphic_heading_pane_fp_g1

0x7d0e,	// (0x000284fd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d0e,	// (0x000284fd) list_single_graphic_heading_pane_fp_g2

0x0936,	// (0x00021125) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0936,	// (0x00021125) list_single_graphic_heading_pane_fp_g3

0x0942,	// (0x00021131) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0942,	// (0x00021131) list_single_graphic_heading_pane_fp_g4

0x7d1a,	// (0x00028509) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d1a,	// (0x00028509) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb4b,	// (0x0003033a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb4b,	// (0x0003033a) list_single_graphic_heading_pane_fp_g

0x098f,	// (0x0002117e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x098f,	// (0x0002117e) list_single_graphic_heading_pane_fp_t1

0x09a5,	// (0x00021194) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x09a5,	// (0x00021194) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb56,	// (0x00030345) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb56,	// (0x00030345) list_single_graphic_heading_pane_fp_t

0x09b7,	// (0x000211a6) list_single_cale_day_pane_fp_g1_ParamLimits

0x09b7,	// (0x000211a6) list_single_cale_day_pane_fp_g1

0x7d26,	// (0x00028515) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d26,	// (0x00028515) list_single_cale_day_pane_fp_g2

0x09ef,	// (0x000211de) list_single_cale_day_pane_fp_g3_ParamLimits

0x09ef,	// (0x000211de) list_single_cale_day_pane_fp_g3

0x0a17,	// (0x00021206) list_single_cale_day_pane_fp_g4_ParamLimits

0x0a17,	// (0x00021206) list_single_cale_day_pane_fp_g4

0x0a3b,	// (0x0002122a) list_single_cale_day_pane_fp_g5_ParamLimits

0x0a3b,	// (0x0002122a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb5b,	// (0x0003034a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb5b,	// (0x0003034a) list_single_cale_day_pane_fp_g

0x0a5f,	// (0x0002124e) list_single_cale_day_pane_fp_t1_ParamLimits

0x0a5f,	// (0x0002124e) list_single_cale_day_pane_fp_t1

0x0a85,	// (0x00021274) list_single_cale_day_pane_fp_t2_ParamLimits

0x0a85,	// (0x00021274) list_single_cale_day_pane_fp_t2

0x0a9e,	// (0x0002128d) list_single_cale_day_pane_fp_t3_ParamLimits

0x0a9e,	// (0x0002128d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb66,	// (0x00030355) list_single_cale_day_pane_fp_t_ParamLimits

0xfb66,	// (0x00030355) list_single_cale_day_pane_fp_t

0x7d0e,	// (0x000284fd) list_empty_pane_fp_g1_ParamLimits

0x7d0e,	// (0x000284fd) list_empty_pane_fp_g1

0x0ab7,	// (0x000212a6) list_empty_pane_fp_t1

0x0ac5,	// (0x000212b4) list_empty_pane_fp_t2

0x0001,

0xfb6d,	// (0x0003035c) list_empty_pane_fp_t

0x7d0e,	// (0x000284fd) list_single_heading_pane_fp_g1_ParamLimits

0x7d0e,	// (0x000284fd) list_single_heading_pane_fp_g1

0x0936,	// (0x00021125) list_single_heading_pane_fp_g2_ParamLimits

0x0936,	// (0x00021125) list_single_heading_pane_fp_g2

0x0942,	// (0x00021131) list_single_heading_pane_fp_g3_ParamLimits

0x0942,	// (0x00021131) list_single_heading_pane_fp_g3

0x0002,

0xfb72,	// (0x00030361) list_single_heading_pane_fp_g_ParamLimits

0xfb72,	// (0x00030361) list_single_heading_pane_fp_g

0x0ad3,	// (0x000212c2) list_single_heading_pane_fp_t1_ParamLimits

0x0ad3,	// (0x000212c2) list_single_heading_pane_fp_t1

0x0ae5,	// (0x000212d4) list_single_heading_pane_fp_t2_ParamLimits

0x0ae5,	// (0x000212d4) list_single_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x00030368) list_single_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x00030368) list_single_heading_pane_fp_t

0x3d1f,	// (0x0002450e) aid_size_cell_fast

0x3479,	// (0x00023c68) soft_indicator_pane_cp1_t1

0x3d5c,	// (0x0002454b) cell_app_pane_cp2_ParamLimits

0x3d5c,	// (0x0002454b) cell_app_pane_cp2

0x2189,	// (0x00022978) fep_hwr_candidate_drop_down_list_pane

0xe134,	// (0x0002e923) fep_hwr_candidate_pane_g3_ParamLimits

0xe134,	// (0x0002e923) fep_hwr_candidate_pane_g3

0xe141,	// (0x0002e930) fep_hwr_candidate_pane_g4_ParamLimits

0xe141,	// (0x0002e930) fep_hwr_candidate_pane_g4

0x0002,

0xfaed,	// (0x000302dc) fep_hwr_candidate_pane_g_ParamLimits

0xfaed,	// (0x000302dc) fep_hwr_candidate_pane_g

0x77d5,	// (0x00027fc4) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x77d5,	// (0x00027fc4) fep_vkb_candidate_drop_down_list_pane

0x7be6,	// (0x000283d5) fep_vkb_candidate_pane_g3

0x7bee,	// (0x000283dd) fep_vkb_candidate_pane_g4

0x0002,

0xfb1a,	// (0x00030309) fep_vkb_candidate_pane_g

0x78ee,	// (0x000280dd) cell_hwr_candidate_pane_g1_ParamLimits

0x7c05,	// (0x000283f4) cell_hwr_candidate_pane_g3_ParamLimits

0x7c05,	// (0x000283f4) cell_hwr_candidate_pane_g3

0x7c26,	// (0x00028415) cell_hwr_candidate_pane_g4_ParamLimits

0x7c26,	// (0x00028415) cell_hwr_candidate_pane_g4

0x0002,

0xfb34,	// (0x00030323) cell_hwr_candidate_pane_g_ParamLimits

0xfb34,	// (0x00030323) cell_hwr_candidate_pane_g

0x7c47,	// (0x00028436) cell_vkb_candidate_pane_g3_ParamLimits

0x7c47,	// (0x00028436) cell_vkb_candidate_pane_g3

0x7c62,	// (0x00028451) cell_vkb_candidate_pane_g4_ParamLimits

0x7c62,	// (0x00028451) cell_vkb_candidate_pane_g4

0x7d32,	// (0x00028521) cell_app_pane_cp2_g1_ParamLimits

0x7d32,	// (0x00028521) cell_app_pane_cp2_g1

0x7d50,	// (0x0002853f) cell_app_pane_cp2_g2_ParamLimits

0x7d50,	// (0x0002853f) cell_app_pane_cp2_g2

0x0001,

0xfb7e,	// (0x0003036d) cell_app_pane_cp2_g_ParamLimits

0xfb7e,	// (0x0003036d) cell_app_pane_cp2_g

0x7d5c,	// (0x0002854b) cell_app_pane_cp2_t1_ParamLimits

0x7d5c,	// (0x0002854b) cell_app_pane_cp2_t1

0x3b0d,	// (0x000242fc) grid_highlight_pane_cp1_ParamLimits

0x3b0d,	// (0x000242fc) grid_highlight_pane_cp1

0x23c5,	// (0x00022bb4) cell_hwr_candidate_pane_cp1_ParamLimits

0x23c5,	// (0x00022bb4) cell_hwr_candidate_pane_cp1

0x78ee,	// (0x000280dd) fep_hwr_candidate_drop_down_list_pane_g1

0x7d6e,	// (0x0002855d) fep_hwr_candidate_drop_down_list_pane_g2

0x7d7b,	// (0x0002856a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb83,	// (0x00030372) fep_hwr_candidate_drop_down_list_pane_g

0x23e4,	// (0x00022bd3) fep_hwr_candidate_drop_down_list_scroll_pane

0x23ed,	// (0x00022bdc) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x23ed,	// (0x00022bdc) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x23fa,	// (0x00022be9) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x23fa,	// (0x00022be9) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2407,	// (0x00022bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2407,	// (0x00022bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c47,	// (0x00028436) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c47,	// (0x00028436) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c62,	// (0x00028451) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c62,	// (0x00028451) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2414,	// (0x00022c03) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2414,	// (0x00022c03) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x242f,	// (0x00022c1e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x242f,	// (0x00022c1e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x244a,	// (0x00022c39) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x244a,	// (0x00022c39) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8a,	// (0x00030379) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8a,	// (0x00030379) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d88,	// (0x00028577) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d88,	// (0x00028577) cell_vkb_candidate_pane_cp1

0x78ee,	// (0x000280dd) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x78ee,	// (0x000280dd) fep_vkb_candidate_drop_down_list_pane_g1

0x7d6e,	// (0x0002855d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d6e,	// (0x0002855d) fep_vkb_candidate_drop_down_list_pane_g2

0x7d7b,	// (0x0002856a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7d7b,	// (0x0002856a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb83,	// (0x00030372) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb83,	// (0x00030372) fep_vkb_candidate_drop_down_list_pane_g

0x7da8,	// (0x00028597) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7da8,	// (0x00028597) fep_vkb_candidate_drop_down_list_scroll_pane

0x7db5,	// (0x000285a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7db5,	// (0x000285a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7dc2,	// (0x000285b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7dc2,	// (0x000285b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7dce,	// (0x000285bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7dce,	// (0x000285bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7c05,	// (0x000283f4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c05,	// (0x000283f4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7c26,	// (0x00028415) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c26,	// (0x00028415) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7dda,	// (0x000285c9) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7dda,	// (0x000285c9) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7dfb,	// (0x000285ea) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7dfb,	// (0x000285ea) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e1c,	// (0x0002860b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e1c,	// (0x0002860b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0003038a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0003038a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc022,	// (0x0002c811) title_pane_g1_ParamLimits

0xc035,	// (0x0002c824) title_pane_g2_ParamLimits

0xf529,	// (0x0002fd18) title_pane_g_ParamLimits

0x4192,	// (0x00024981) aid_call2_pane

0x419a,	// (0x00024989) aid_call_pane

0x41a2,	// (0x00024991) popup_clock_analogue_window_g1

0x41a2,	// (0x00024991) popup_clock_analogue_window_g2

0x130f,	// (0x00021afe) popup_clock_analogue_window_g3

0x1318,	// (0x00021b07) popup_clock_analogue_window_g4

0xe440,	// (0x0002ec2f) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002fec2) popup_clock_analogue_window_g

0x1320,	// (0x00021b0f) popup_clock_analogue_window_t1

0x132e,	// (0x00021b1d) clock_digital_number_pane_ParamLimits

0x132e,	// (0x00021b1d) clock_digital_number_pane

0x133a,	// (0x00021b29) clock_digital_number_pane_cp02_ParamLimits

0x133a,	// (0x00021b29) clock_digital_number_pane_cp02

0x1346,	// (0x00021b35) clock_digital_number_pane_cp03_ParamLimits

0x1346,	// (0x00021b35) clock_digital_number_pane_cp03

0x1352,	// (0x00021b41) clock_digital_number_pane_cp04_ParamLimits

0x1352,	// (0x00021b41) clock_digital_number_pane_cp04

0x135e,	// (0x00021b4d) clock_digital_separator_pane_ParamLimits

0x135e,	// (0x00021b4d) clock_digital_separator_pane

0x136a,	// (0x00021b59) popup_clock_digital_window_t1_ParamLimits

0x136a,	// (0x00021b59) popup_clock_digital_window_t1

0xe440,	// (0x0002ec2f) clock_digital_number_pane_g1

0xe440,	// (0x0002ec2f) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0002fecd) clock_digital_number_pane_g

0xe440,	// (0x0002ec2f) clock_digital_separator_pane_g1

0xe440,	// (0x0002ec2f) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0002fecd) clock_digital_separator_pane_g

0xd633,	// (0x0002de22) aid_fill_nsta_ParamLimits

0xd769,	// (0x0002df58) indicator_nsta_pane_ParamLimits

0x4df4,	// (0x000255e3) popup_clock_analogue_window

0x4df4,	// (0x000255e3) popup_clock_digital_window

0xdf8c,	// (0x0002e77b) grid_indicator_nsta_pane_ParamLimits

0x7074,	// (0x00027863) clock_nsta_pane_t2

0x0001,

0xfa6d,	// (0x0003025c) clock_nsta_pane_t

0x12d3,	// (0x00021ac2) aid_size_max_handle

0x12dd,	// (0x00021acc) aid_size_min_handle

0x47cf,	// (0x00024fbe) editor_scroll_pane

0x7e37,	// (0x00028626) ex_editor_pane

0x3c8d,	// (0x0002447c) scroll_pane_cp13

0x3aac,	// (0x0002429b) scroll_pane_cp14

0x41d1,	// (0x000249c0) scroll_pane_cp36

0xd486,	// (0x0002dc75) list_single_graphic_hl_pane_cp2_ParamLimits

0xd486,	// (0x0002dc75) list_single_graphic_hl_pane_cp2

0xddcb,	// (0x0002e5ba) list_single_graphic_hl_pane_ParamLimits

0xddcb,	// (0x0002e5ba) list_single_graphic_hl_pane

0x0afb,	// (0x000212ea) aid_size_min_hl_cp1

0x7e3f,	// (0x0002862e) list_highlight_pane_cp34_ParamLimits

0x7e3f,	// (0x0002862e) list_highlight_pane_cp34

0x7e50,	// (0x0002863f) list_single_graphic_hl_pane_g1_ParamLimits

0x7e50,	// (0x0002863f) list_single_graphic_hl_pane_g1

0xf487,	// (0x0002fc76) list_single_graphic_hl_pane_g2_ParamLimits

0xf487,	// (0x0002fc76) list_single_graphic_hl_pane_g2

0xf487,	// (0x0002fc76) list_single_graphic_hl_pane_g3_ParamLimits

0xf487,	// (0x0002fc76) list_single_graphic_hl_pane_g3

0xf493,	// (0x0002fc82) list_single_graphic_hl_pane_g4_ParamLimits

0xf493,	// (0x0002fc82) list_single_graphic_hl_pane_g4

0xbc2f,	// (0x0002c41e) list_single_graphic_hl_pane_g5_ParamLimits

0xbc2f,	// (0x0002c41e) list_single_graphic_hl_pane_g5

0x0004,

0xfbac,	// (0x0003039b) list_single_graphic_hl_pane_g_ParamLimits

0xfbac,	// (0x0003039b) list_single_graphic_hl_pane_g

0xbc43,	// (0x0002c432) list_single_graphic_hl_pane_t1_ParamLimits

0xbc43,	// (0x0002c432) list_single_graphic_hl_pane_t1

0x7e5d,	// (0x0002864c) aid_size_min_hl_cp2

0x7e66,	// (0x00028655) list_highlight_pane_cp34_cp2_ParamLimits

0x7e66,	// (0x00028655) list_highlight_pane_cp34_cp2

0x7e50,	// (0x0002863f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e50,	// (0x0002863f) list_single_graphic_hl_pane_g1_cp2

0x7e73,	// (0x00028662) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7e73,	// (0x00028662) list_single_graphic_hl_pane_g2_cp2

0x7e7f,	// (0x0002866e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7e7f,	// (0x0002866e) list_single_graphic_hl_pane_g3_cp2

0x7e8d,	// (0x0002867c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7e8d,	// (0x0002867c) list_single_graphic_hl_pane_g4_cp2

0x7e99,	// (0x00028688) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e99,	// (0x00028688) list_single_graphic_hl_pane_g5_cp2

0xc405,	// (0x0002cbf4) control_pane_g4_ParamLimits

0xc405,	// (0x0002cbf4) control_pane_g4

0x4af3,	// (0x000252e2) bg_popup_sub_pane_cp10_ParamLimits

0x767a,	// (0x00027e69) list_choice_list_pane_ParamLimits

0x7689,	// (0x00027e78) scroll_pane_cp23

0x3509,	// (0x00023cf8) bg_popup_preview_window_pane_cp02_ParamLimits

0x7cb3,	// (0x000284a2) list_preview_fixed_pane_ParamLimits

0x7cc9,	// (0x000284b8) list_preview_fixed_pane_cp_ParamLimits

0x7cc9,	// (0x000284b8) list_preview_fixed_pane_cp

0x7cd5,	// (0x000284c4) popup_preview_fixed_window_g1_ParamLimits

0x7cd5,	// (0x000284c4) popup_preview_fixed_window_g1

0x7ce1,	// (0x000284d0) popup_preview_fixed_window_g2_ParamLimits

0x7ce1,	// (0x000284d0) popup_preview_fixed_window_g2

0x0002,

0xfb3b,	// (0x0003032a) popup_preview_fixed_window_g_ParamLimits

0xfb3b,	// (0x0003032a) popup_preview_fixed_window_g

0x1247,	// (0x00021a36) aid_navi_side_left_pane_ParamLimits

0x125c,	// (0x00021a4b) aid_navi_side_right_pane_ParamLimits

0x1274,	// (0x00021a63) navi_icon_pane_stacon_ParamLimits

0x1288,	// (0x00021a77) navi_navi_pane_stacon_ParamLimits

0x1274,	// (0x00021a63) navi_text_pane_stacon_ParamLimits

0xe436,	// (0x0002ec25) main_text_info_pane

0x7ec3,	// (0x000286b2) listscroll_text_info_pane

0x7ecb,	// (0x000286ba) list_text_info_pane_ParamLimits

0x7ecb,	// (0x000286ba) list_text_info_pane

0x7eda,	// (0x000286c9) scroll_pane_cp24_ParamLimits

0x7eda,	// (0x000286c9) scroll_pane_cp24

0xe2d8,	// (0x0002eac7) list_text_info_pane_t1_ParamLimits

0xe2d8,	// (0x0002eac7) list_text_info_pane_t1

0xc54a,	// (0x0002cd39) popup_fast_swap2_window_ParamLimits

0xc54a,	// (0x0002cd39) popup_fast_swap2_window

0x7f29,	// (0x00028718) aid_size_cell_fast2

0xe436,	// (0x0002ec25) bg_popup_window_pane_cp17

0x7f33,	// (0x00028722) heading_pane_cp2

0x7f3b,	// (0x0002872a) listscroll_fast2_pane

0x7f43,	// (0x00028732) grid_fast2_pane

0x7f4d,	// (0x0002873c) listscroll_fast2_pane_g1

0x7f55,	// (0x00028744) listscroll_fast2_pane_g2

0x0001,

0xfbb7,	// (0x000303a6) listscroll_fast2_pane_g

0x3c8d,	// (0x0002447c) scroll_pane_cp26

0x7f5f,	// (0x0002874e) cell_fast2_pane_ParamLimits

0x7f5f,	// (0x0002874e) cell_fast2_pane

0x7f74,	// (0x00028763) cell_fast2_pane_g1

0x7f7d,	// (0x0002876c) cell_fast2_pane_g2

0x7f86,	// (0x00028775) cell_fast2_pane_g3

0x0002,

0xfbbc,	// (0x000303ab) cell_fast2_pane_g

0x3869,	// (0x00024058) grid_highlight_pane_cp9

0x387e,	// (0x0002406d) main_eswt_pane_ParamLimits

0x387e,	// (0x0002406d) main_eswt_pane

0x7eef,	// (0x000286de) list_single_text_info_pane

0x7f8e,	// (0x0002877d) eswt_ctrl_button_pane

0x7f8e,	// (0x0002877d) eswt_ctrl_canvas_pane

0x7f96,	// (0x00028785) eswt_ctrl_combo_pane

0x7f8e,	// (0x0002877d) eswt_ctrl_default_pane

0x7f8e,	// (0x0002877d) eswt_ctrl_label_pane

0x7f9e,	// (0x0002878d) eswt_ctrl_wait_pane

0x7fa6,	// (0x00028795) eswt_shell_pane

0xe436,	// (0x0002ec25) listscroll_eswt_app_pane

0x7fc6,	// (0x000287b5) popup_eswt_tasktip_window_ParamLimits

0x7fc6,	// (0x000287b5) popup_eswt_tasktip_window

0x5091,	// (0x00025880) bg_popup_window_pane_cp18

0x7fdf,	// (0x000287ce) eswt_control_pane_g1_ParamLimits

0x7fdf,	// (0x000287ce) eswt_control_pane_g1

0x7fec,	// (0x000287db) eswt_control_pane_g2_ParamLimits

0x7fec,	// (0x000287db) eswt_control_pane_g2

0x7ff9,	// (0x000287e8) eswt_control_pane_g3_ParamLimits

0x7ff9,	// (0x000287e8) eswt_control_pane_g3

0x8006,	// (0x000287f5) eswt_control_pane_g4_ParamLimits

0x8006,	// (0x000287f5) eswt_control_pane_g4

0x0003,

0xfbc3,	// (0x000303b2) eswt_control_pane_g_ParamLimits

0xfbc3,	// (0x000303b2) eswt_control_pane_g

0x3b0d,	// (0x000242fc) bg_button_pane_ParamLimits

0x3b0d,	// (0x000242fc) bg_button_pane

0x387e,	// (0x0002406d) common_borders_pane_copy2_ParamLimits

0x387e,	// (0x0002406d) common_borders_pane_copy2

0x8013,	// (0x00028802) control_button_pane_g1_ParamLimits

0x8013,	// (0x00028802) control_button_pane_g1

0x801f,	// (0x0002880e) control_button_pane_g2_ParamLimits

0x801f,	// (0x0002880e) control_button_pane_g2

0x802b,	// (0x0002881a) control_button_pane_g3_ParamLimits

0x802b,	// (0x0002881a) control_button_pane_g3

0x0002,

0xfbcc,	// (0x000303bb) control_button_pane_g_ParamLimits

0xfbcc,	// (0x000303bb) control_button_pane_g

0x803f,	// (0x0002882e) control_button_pane_t1

0x804d,	// (0x0002883c) control_button_pane_t2

0x0001,

0xfbd3,	// (0x000303c2) control_button_pane_t

0x501d,	// (0x0002580c) bg_button_pane_g1

0x5025,	// (0x00025814) bg_button_pane_g2

0x502d,	// (0x0002581c) bg_button_pane_g3

0x5035,	// (0x00025824) bg_button_pane_g4

0x503d,	// (0x0002582c) bg_button_pane_g5

0x5045,	// (0x00025834) bg_button_pane_g6

0x504d,	// (0x0002583c) bg_button_pane_g7

0x5055,	// (0x00025844) bg_button_pane_g8

0x505d,	// (0x0002584c) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0003002b) bg_button_pane_g

0x7635,	// (0x00027e24) common_borders_pane_ParamLimits

0x7635,	// (0x00027e24) common_borders_pane

0x7fdf,	// (0x000287ce) eswt_control_pane_g1_copy1_ParamLimits

0x7fdf,	// (0x000287ce) eswt_control_pane_g1_copy1

0x7fec,	// (0x000287db) eswt_control_pane_g2_copy1_ParamLimits

0x7fec,	// (0x000287db) eswt_control_pane_g2_copy1

0x7ff9,	// (0x000287e8) eswt_control_pane_g3_copy1_ParamLimits

0x7ff9,	// (0x000287e8) eswt_control_pane_g3_copy1

0x8006,	// (0x000287f5) eswt_control_pane_g4_copy1_ParamLimits

0x8006,	// (0x000287f5) eswt_control_pane_g4_copy1

0x7670,	// (0x00027e5f) bg_eswt_ctrl_canvas_pane_g1

0x7635,	// (0x00027e24) common_borders_pane_cp2_ParamLimits

0x7635,	// (0x00027e24) common_borders_pane_cp2

0x7635,	// (0x00027e24) common_borders_pane_cp3_ParamLimits

0x7635,	// (0x00027e24) common_borders_pane_cp3

0x805b,	// (0x0002884a) separator_horizontal_pane

0x8063,	// (0x00028852) separator_vertical_pane

0x7fdf,	// (0x000287ce) eswt_control_pane_g1_copy2_ParamLimits

0x7fdf,	// (0x000287ce) eswt_control_pane_g1_copy2

0x7fec,	// (0x000287db) eswt_control_pane_g2_copy2_ParamLimits

0x7fec,	// (0x000287db) eswt_control_pane_g2_copy2

0x7ff9,	// (0x000287e8) eswt_control_pane_g3_copy2_ParamLimits

0x7ff9,	// (0x000287e8) eswt_control_pane_g3_copy2

0x8006,	// (0x000287f5) eswt_control_pane_g4_copy2_ParamLimits

0x8006,	// (0x000287f5) eswt_control_pane_g4_copy2

0xe436,	// (0x0002ec25) common_borders_pane_cp4

0x806c,	// (0x0002885b) separator_horizontal_pane_g1

0x8075,	// (0x00028864) separator_horizontal_pane_g2

0x807e,	// (0x0002886d) separator_horizontal_pane_g3

0x0002,

0xfbd8,	// (0x000303c7) separator_horizontal_pane_g

0x7fdf,	// (0x000287ce) eswt_control_pane_g1_copy3_ParamLimits

0x7fdf,	// (0x000287ce) eswt_control_pane_g1_copy3

0x7fec,	// (0x000287db) eswt_control_pane_g2_copy3_ParamLimits

0x7fec,	// (0x000287db) eswt_control_pane_g2_copy3

0x7ff9,	// (0x000287e8) eswt_control_pane_g3_copy3_ParamLimits

0x7ff9,	// (0x000287e8) eswt_control_pane_g3_copy3

0x8006,	// (0x000287f5) eswt_control_pane_g4_copy3_ParamLimits

0x8006,	// (0x000287f5) eswt_control_pane_g4_copy3

0xe436,	// (0x0002ec25) common_borders_pane_cp5

0x8087,	// (0x00028876) separator_vertical_pane_g1

0x8090,	// (0x0002887f) separator_vertical_pane_g2

0x8099,	// (0x00028888) separator_vertical_pane_g3

0x0002,

0xfbdf,	// (0x000303ce) separator_vertical_pane_g

0x7fdf,	// (0x000287ce) eswt_control_pane_g1_copy4_ParamLimits

0x7fdf,	// (0x000287ce) eswt_control_pane_g1_copy4

0x7fec,	// (0x000287db) eswt_control_pane_g2_copy4_ParamLimits

0x7fec,	// (0x000287db) eswt_control_pane_g2_copy4

0x7ff9,	// (0x000287e8) eswt_control_pane_g3_copy4_ParamLimits

0x7ff9,	// (0x000287e8) eswt_control_pane_g3_copy4

0x8006,	// (0x000287f5) eswt_control_pane_g4_copy4_ParamLimits

0x8006,	// (0x000287f5) eswt_control_pane_g4_copy4

0x80a2,	// (0x00028891) eswt_ctrl_combo_button_pane

0x80aa,	// (0x00028899) eswt_ctrl_input_pane

0x80b2,	// (0x000288a1) popup_choice_list_window_cp70

0x80ba,	// (0x000288a9) eswt_ctrl_input_pane_t1

0xe436,	// (0x0002ec25) input_focus_pane_cp70

0x7635,	// (0x00027e24) bg_button_pane_cp70_ParamLimits

0x7635,	// (0x00027e24) bg_button_pane_cp70

0x80c8,	// (0x000288b7) eswt_ctrl_combo_button_pane_g1

0x80d0,	// (0x000288bf) wait_bar_pane_cp70

0x5091,	// (0x00025880) bg_popup_window_pane_cp70_ParamLimits

0x5091,	// (0x00025880) bg_popup_window_pane_cp70

0x80d8,	// (0x000288c7) popup_eswt_tasktip_window_t1

0x80ee,	// (0x000288dd) wait_bar_pane_cp71_ParamLimits

0x80ee,	// (0x000288dd) wait_bar_pane_cp71

0x80fa,	// (0x000288e9) grid_eswt_app_pane

0x3fb4,	// (0x000247a3) scroll_pane_cp70

0xe2f3,	// (0x0002eae2) cell_eswt_app_pane_ParamLimits

0xe2f3,	// (0x0002eae2) cell_eswt_app_pane

0xe31d,	// (0x0002eb0c) cell_eswt_app_pane_g1_ParamLimits

0xe31d,	// (0x0002eb0c) cell_eswt_app_pane_g1

0xe34c,	// (0x0002eb3b) cell_eswt_app_pane_g2_ParamLimits

0xe34c,	// (0x0002eb3b) cell_eswt_app_pane_g2

0x0001,

0xfbe6,	// (0x000303d5) cell_eswt_app_pane_g_ParamLimits

0xfbe6,	// (0x000303d5) cell_eswt_app_pane_g

0xe375,	// (0x0002eb64) cell_eswt_app_pane_t1_ParamLimits

0xe375,	// (0x0002eb64) cell_eswt_app_pane_t1

0x81bd,	// (0x000289ac) grid_highlight_pane_cp70_ParamLimits

0x81bd,	// (0x000289ac) grid_highlight_pane_cp70

0x469b,	// (0x00024e8a) set_content_pane_g1

0xd5f0,	// (0x0002dddf) status_small_volume_pane

0xcc9f,	// (0x0002d48e) status_small_volume_pane_g1

0xcca7,	// (0x0002d496) volume_small2_pane

0xccb0,	// (0x0002d49f) volume_small2_pane_g1

0xccb9,	// (0x0002d4a8) volume_small2_pane_g2

0xccc2,	// (0x0002d4b1) volume_small2_pane_g3

0xcccb,	// (0x0002d4ba) volume_small2_pane_g4

0xccd4,	// (0x0002d4c3) volume_small2_pane_g5

0xccdd,	// (0x0002d4cc) volume_small2_pane_g6

0xcce6,	// (0x0002d4d5) volume_small2_pane_g7

0xccef,	// (0x0002d4de) volume_small2_pane_g8

0xccf8,	// (0x0002d4e7) volume_small2_pane_g9

0xcd01,	// (0x0002d4f0) volume_small2_pane_g10

0x0009,

0xfbeb,	// (0x000303da) volume_small2_pane_g

0x7a36,	// (0x00028225) fep_vkb_top_text_pane_g1_ParamLimits

0xe280,	// (0x0002ea6f) fep_vkb_top_text_pane_t1_ParamLimits

0x7ced,	// (0x000284dc) popup_preview_fixed_window_g3_ParamLimits

0x7ced,	// (0x000284dc) popup_preview_fixed_window_g3

0xcb73,	// (0x0002d362) popup_toolbar_trans_pane

0xdc65,	// (0x0002e454) aid_height_set_list_ParamLimits

0x6412,	// (0x00026c01) aid_size_parent_ParamLimits

0x4af3,	// (0x000252e2) list_highlight_pane_cp2_ParamLimits

0x469b,	// (0x00024e8a) set_content_pane_g1_ParamLimits

0xdddd,	// (0x0002e5cc) list_single_image_pane_ParamLimits

0xdddd,	// (0x0002e5cc) list_single_image_pane

0xe3a7,	// (0x0002eb96) aid_size_cell_image_ParamLimits

0xe3a7,	// (0x0002eb96) aid_size_cell_image

0xe3b4,	// (0x0002eba3) grid_single_image_pane_ParamLimits

0xe3b4,	// (0x0002eba3) grid_single_image_pane

0x5da3,	// (0x00026592) list_single_image_pane_g1_ParamLimits

0x5da3,	// (0x00026592) list_single_image_pane_g1

0x81e2,	// (0x000289d1) list_single_image_pane_g2_ParamLimits

0x81e2,	// (0x000289d1) list_single_image_pane_g2

0x0001,

0xfc00,	// (0x000303ef) list_single_image_pane_g_ParamLimits

0xfc00,	// (0x000303ef) list_single_image_pane_g

0x81f6,	// (0x000289e5) list_single_image_pane_t1_ParamLimits

0x81f6,	// (0x000289e5) list_single_image_pane_t1

0xe3c0,	// (0x0002ebaf) cell_image_list_pane_ParamLimits

0xe3c0,	// (0x0002ebaf) cell_image_list_pane

0xe3d4,	// (0x0002ebc3) cell_image_list_pane_g1

0xe3dd,	// (0x0002ebcc) cell_image_list_pane_g2

0x0001,

0xfc05,	// (0x000303f4) cell_image_list_pane_g

0x8232,	// (0x00028a21) aid_size_cell_tb_trans_pane

0x3b0d,	// (0x000242fc) bg_tb_trans_pane

0x8244,	// (0x00028a33) grid_tb_trans_pane

0x501d,	// (0x0002580c) bg_tb_trans_pane_g1

0x5025,	// (0x00025814) bg_tb_trans_pane_g2

0x502d,	// (0x0002581c) bg_tb_trans_pane_g3

0x5035,	// (0x00025824) bg_tb_trans_pane_g4

0x503d,	// (0x0002582c) bg_tb_trans_pane_g5

0x5055,	// (0x00025844) bg_tb_trans_pane_g6

0x505d,	// (0x0002584c) bg_tb_trans_pane_g7

0x5045,	// (0x00025834) bg_tb_trans_pane_g8

0x504d,	// (0x0002583c) bg_tb_trans_pane_g9

0x0008,

0xfc0a,	// (0x000303f9) bg_tb_trans_pane_g

0x8258,	// (0x00028a47) cell_toolbar_trans_pane_ParamLimits

0x8258,	// (0x00028a47) cell_toolbar_trans_pane

0x7670,	// (0x00027e5f) cell_toolbar_trans_pane_g1

0xe043,	// (0x0002e832) list_form2_midp_pane_t1

0xe051,	// (0x0002e840) list_form2_midp_pane_t2

0x0001,

0xfab3,	// (0x000302a2) list_form2_midp_pane_t

0x7261,	// (0x00027a50) scroll_pane_cp51_ParamLimits

0x741d,	// (0x00027c0c) form2_midp_wait_pane_g1

0x7426,	// (0x00027c15) form2_midp_wait_pane_g2

0x742f,	// (0x00027c1e) form2_midp_wait_pane_g3

0x0002,

0xfac8,	// (0x000302b7) form2_midp_wait_pane_g

0x3280,	// (0x00023a6f) list_highlight_pane_cp21_ParamLimits

0x747b,	// (0x00027c6a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x748a,	// (0x00027c79) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x0504,	// (0x00020cf3) list_single_2graphic_im_pane_ParamLimits

0x0504,	// (0x00020cf3) list_single_2graphic_im_pane

0x827e,	// (0x00028a6d) list_single_2graphic_im_pane_g1_ParamLimits

0x827e,	// (0x00028a6d) list_single_2graphic_im_pane_g1

0x828f,	// (0x00028a7e) list_single_2graphic_im_pane_g2_ParamLimits

0x828f,	// (0x00028a7e) list_single_2graphic_im_pane_g2

0x829b,	// (0x00028a8a) list_single_2graphic_im_pane_g3_ParamLimits

0x829b,	// (0x00028a8a) list_single_2graphic_im_pane_g3

0x0003,

0xfc1d,	// (0x0003040c) list_single_2graphic_im_pane_g_ParamLimits

0xfc1d,	// (0x0003040c) list_single_2graphic_im_pane_g

0x82bb,	// (0x00028aaa) list_single_2graphic_im_pane_t1_ParamLimits

0x82bb,	// (0x00028aaa) list_single_2graphic_im_pane_t1

0x7cf9,	// (0x000284e8) list_single_graphic_2heading_pane_fp_ParamLimits

0x7cf9,	// (0x000284e8) list_single_graphic_2heading_pane_fp

0x096d,	// (0x0002115c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x096d,	// (0x0002115c) list_single_graphic_2heading_pane_fp_g1

0x7d0e,	// (0x000284fd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d0e,	// (0x000284fd) list_single_graphic_2heading_pane_fp_g2

0x0936,	// (0x00021125) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0936,	// (0x00021125) list_single_graphic_2heading_pane_fp_g3

0x0942,	// (0x00021131) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0942,	// (0x00021131) list_single_graphic_2heading_pane_fp_g4

0x7d1a,	// (0x00028509) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d1a,	// (0x00028509) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb4b,	// (0x0003033a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb4b,	// (0x0003033a) list_single_graphic_2heading_pane_fp_g

0x0b46,	// (0x00021335) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0b46,	// (0x00021335) list_single_graphic_2heading_pane_fp_t1

0x09a5,	// (0x00021194) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x09a5,	// (0x00021194) list_single_graphic_2heading_pane_fp_t2

0x0b5c,	// (0x0002134b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0b5c,	// (0x0002134b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc26,	// (0x00030415) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc26,	// (0x00030415) list_single_graphic_2heading_pane_fp_t

0x76fc,	// (0x00027eeb) fep_hwr_write_pane_g5_ParamLimits

0x76fc,	// (0x00027eeb) fep_hwr_write_pane_g5

0x7708,	// (0x00027ef7) fep_hwr_write_pane_g6_ParamLimits

0x7708,	// (0x00027ef7) fep_hwr_write_pane_g6

0x7fa6,	// (0x00028795) eswt_shell_pane_ParamLimits

0x5091,	// (0x00025880) bg_popup_window_pane_cp18_ParamLimits

0x7fd7,	// (0x000287c6) heading_pane_cp70

0x80d8,	// (0x000288c7) popup_eswt_tasktip_window_t1_ParamLimits

0xd68e,	// (0x0002de7d) aid_touch_tab_arrow_left

0xd6a4,	// (0x0002de93) aid_touch_tab_arrow_right

0xc04d,	// (0x0002c83c) title_pane_g3_ParamLimits

0xc04d,	// (0x0002c83c) title_pane_g3

0x3acc,	// (0x000242bb) set_value_pane_g1

0xcb73,	// (0x0002d362) popup_toolbar_trans_pane_ParamLimits

0x8232,	// (0x00028a21) aid_size_cell_tb_trans_pane_ParamLimits

0x3b0d,	// (0x000242fc) bg_tb_trans_pane_ParamLimits

0x8244,	// (0x00028a33) grid_tb_trans_pane_ParamLimits

0x3509,	// (0x00023cf8) cont_note_pane_ParamLimits

0x3509,	// (0x00023cf8) cont_note_pane

0x387e,	// (0x0002406d) cont_snote2_single_text_pane_ParamLimits

0x387e,	// (0x0002406d) cont_snote2_single_text_pane

0x387e,	// (0x0002406d) cont_snote2_single_graphic_pane_ParamLimits

0x387e,	// (0x0002406d) cont_snote2_single_graphic_pane

0x56ac,	// (0x00025e9b) cont_note_wait_pane_ParamLimits

0x56ac,	// (0x00025e9b) cont_note_wait_pane

0x56ac,	// (0x00025e9b) cont_note_image_pane_ParamLimits

0x56ac,	// (0x00025e9b) cont_note_image_pane

0x82ec,	// (0x00028adb) popup_note2_window_g1_ParamLimits

0x82ec,	// (0x00028adb) popup_note2_window_g1

0x831d,	// (0x00028b0c) popup_note2_window_t1_ParamLimits

0x831d,	// (0x00028b0c) popup_note2_window_t1

0x8362,	// (0x00028b51) popup_note2_window_t2_ParamLimits

0x8362,	// (0x00028b51) popup_note2_window_t2

0x83a7,	// (0x00028b96) popup_note2_window_t3_ParamLimits

0x83a7,	// (0x00028b96) popup_note2_window_t3

0x83ec,	// (0x00028bdb) popup_note2_window_t4_ParamLimits

0x83ec,	// (0x00028bdb) popup_note2_window_t4

0x358d,	// (0x00023d7c) popup_note2_window_t5_ParamLimits

0x358d,	// (0x00023d7c) popup_note2_window_t5

0x0004,

0xfc32,	// (0x00030421) popup_note2_window_t_ParamLimits

0xfc32,	// (0x00030421) popup_note2_window_t

0x841b,	// (0x00028c0a) popup_note2_image_window_g1_ParamLimits

0x841b,	// (0x00028c0a) popup_note2_image_window_g1

0x8427,	// (0x00028c16) popup_note2_image_window_g2_ParamLimits

0x8427,	// (0x00028c16) popup_note2_image_window_g2

0x0001,

0xfc3d,	// (0x0003042c) popup_note2_image_window_g_ParamLimits

0xfc3d,	// (0x0003042c) popup_note2_image_window_g

0x8439,	// (0x00028c28) popup_note2_image_window_t1_ParamLimits

0x8439,	// (0x00028c28) popup_note2_image_window_t1

0x8451,	// (0x00028c40) popup_note2_image_window_t2_ParamLimits

0x8451,	// (0x00028c40) popup_note2_image_window_t2

0x8469,	// (0x00028c58) popup_note2_image_window_t3_ParamLimits

0x8469,	// (0x00028c58) popup_note2_image_window_t3

0x0002,

0xfc42,	// (0x00030431) popup_note2_image_window_t_ParamLimits

0xfc42,	// (0x00030431) popup_note2_image_window_t

0x56ba,	// (0x00025ea9) popup_note2_wait_window_g1_ParamLimits

0x56ba,	// (0x00025ea9) popup_note2_wait_window_g1

0x8485,	// (0x00028c74) popup_note2_wait_window_g2_ParamLimits

0x8485,	// (0x00028c74) popup_note2_wait_window_g2

0x56d2,	// (0x00025ec1) popup_note2_wait_window_g3_ParamLimits

0x56d2,	// (0x00025ec1) popup_note2_wait_window_g3

0x0002,

0xfc49,	// (0x00030438) popup_note2_wait_window_g_ParamLimits

0xfc49,	// (0x00030438) popup_note2_wait_window_g

0x8491,	// (0x00028c80) popup_note2_wait_window_t1_ParamLimits

0x8491,	// (0x00028c80) popup_note2_wait_window_t1

0x84af,	// (0x00028c9e) popup_note2_wait_window_t2_ParamLimits

0x84af,	// (0x00028c9e) popup_note2_wait_window_t2

0x84cd,	// (0x00028cbc) popup_note2_wait_window_t3_ParamLimits

0x84cd,	// (0x00028cbc) popup_note2_wait_window_t3

0x84df,	// (0x00028cce) popup_note2_wait_window_t4_ParamLimits

0x84df,	// (0x00028cce) popup_note2_wait_window_t4

0x0003,

0xfc50,	// (0x0003043f) popup_note2_wait_window_t_ParamLimits

0xfc50,	// (0x0003043f) popup_note2_wait_window_t

0x84f1,	// (0x00028ce0) wait_bar2_pane_ParamLimits

0x84f1,	// (0x00028ce0) wait_bar2_pane

0x8509,	// (0x00028cf8) popup_snote2_single_text_window_g1_ParamLimits

0x8509,	// (0x00028cf8) popup_snote2_single_text_window_g1

0x8531,	// (0x00028d20) popup_snote2_single_text_window_t1_ParamLimits

0x8531,	// (0x00028d20) popup_snote2_single_text_window_t1

0x857d,	// (0x00028d6c) popup_snote2_single_text_window_t2_ParamLimits

0x857d,	// (0x00028d6c) popup_snote2_single_text_window_t2

0x85c9,	// (0x00028db8) popup_snote2_single_text_window_t3_ParamLimits

0x85c9,	// (0x00028db8) popup_snote2_single_text_window_t3

0x860a,	// (0x00028df9) popup_snote2_single_text_window_t4_ParamLimits

0x860a,	// (0x00028df9) popup_snote2_single_text_window_t4

0x8640,	// (0x00028e2f) popup_snote2_single_text_window_t5_ParamLimits

0x8640,	// (0x00028e2f) popup_snote2_single_text_window_t5

0x0004,

0xfc59,	// (0x00030448) popup_snote2_single_text_window_t_ParamLimits

0xfc59,	// (0x00030448) popup_snote2_single_text_window_t

0x866b,	// (0x00028e5a) popup_snote2_single_graphic_window_g1_ParamLimits

0x866b,	// (0x00028e5a) popup_snote2_single_graphic_window_g1

0x8693,	// (0x00028e82) popup_snote2_single_graphic_window_g2_ParamLimits

0x8693,	// (0x00028e82) popup_snote2_single_graphic_window_g2

0x0001,

0xfc64,	// (0x00030453) popup_snote2_single_graphic_window_g_ParamLimits

0xfc64,	// (0x00030453) popup_snote2_single_graphic_window_g

0x86bb,	// (0x00028eaa) popup_snote2_single_graphic_window_t1_ParamLimits

0x86bb,	// (0x00028eaa) popup_snote2_single_graphic_window_t1

0x8707,	// (0x00028ef6) popup_snote2_single_graphic_window_t2_ParamLimits

0x8707,	// (0x00028ef6) popup_snote2_single_graphic_window_t2

0x85c9,	// (0x00028db8) popup_snote2_single_graphic_window_t3_ParamLimits

0x85c9,	// (0x00028db8) popup_snote2_single_graphic_window_t3

0x860a,	// (0x00028df9) popup_snote2_single_graphic_window_t4_ParamLimits

0x860a,	// (0x00028df9) popup_snote2_single_graphic_window_t4

0x8640,	// (0x00028e2f) popup_snote2_single_graphic_window_t5_ParamLimits

0x8640,	// (0x00028e2f) popup_snote2_single_graphic_window_t5

0x0004,

0xfc69,	// (0x00030458) popup_snote2_single_graphic_window_t_ParamLimits

0xfc69,	// (0x00030458) popup_snote2_single_graphic_window_t

0x7122,	// (0x00027911) clock_nsta_pane_cp2_t1

0x7122,	// (0x00027911) clock_nsta_pane_cp2_t2

0x0001,

0xfa89,	// (0x00030278) clock_nsta_pane_cp2_t

0x00cb,	// (0x000208ba) form_field_data_wide_pane_g1_ParamLimits

0x3b1b,	// (0x0002430a) form_field_data_wide_pane_g2_ParamLimits

0x3b1b,	// (0x0002430a) form_field_data_wide_pane_g2

0x3b27,	// (0x00024316) form_field_data_wide_pane_g3_ParamLimits

0x3b27,	// (0x00024316) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002fe45) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002fe45) form_field_data_wide_pane_g

0xdf76,	// (0x0002e765) grid_touch_3_pane_ParamLimits

0xdf76,	// (0x0002e765) grid_touch_3_pane

0xe3e6,	// (0x0002ebd5) cell_touch_3_pane_ParamLimits

0xe3e6,	// (0x0002ebd5) cell_touch_3_pane

0x7670,	// (0x00027e5f) cell_touch_3_pane_g1

0x7670,	// (0x00027e5f) cell_touch_3_pane_g2

0x0001,

0xfb0e,	// (0x000302fd) cell_touch_3_pane_g

0x35e5,	// (0x00023dd4) cont_query_data_pane

0x35ed,	// (0x00023ddc) cont_query_data_pane_cp1

0x8781,	// (0x00028f70) button_value_adjust_pane_cp7

0x8789,	// (0x00028f78) query_popup_pane_cp3

0x42ab,	// (0x00024a9a) bg_popup_sub_pane_cp22_ParamLimits

0x1389,	// (0x00021b78) navi_navi_volume_pane_cp2

0x13a4,	// (0x00021b93) popup_side_volume_key_window_g2

0x13b3,	// (0x00021ba2) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0002fedb) popup_side_volume_key_window_g

0x13d0,	// (0x00021bbf) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0002fee2) popup_side_volume_key_window_t

0x4565,	// (0x00024d54) popup_side_volume_key_window_ParamLimits

0xb6ae,	// (0x0002be9d) list_double_graphic_pane_g4_ParamLimits

0xb6ae,	// (0x0002be9d) list_double_graphic_pane_g4

0xbbe5,	// (0x0002c3d4) list_single_2heading_msg_pane_ParamLimits

0xbbe5,	// (0x0002c3d4) list_single_2heading_msg_pane

0xbc59,	// (0x0002c448) list_single_2heading_msg_pane_g1_ParamLimits

0xbc59,	// (0x0002c448) list_single_2heading_msg_pane_g1

0xbc65,	// (0x0002c454) list_single_2heading_msg_pane_g2_ParamLimits

0xbc65,	// (0x0002c454) list_single_2heading_msg_pane_g2

0xbc78,	// (0x0002c467) list_single_2heading_msg_pane_g3_ParamLimits

0xbc78,	// (0x0002c467) list_single_2heading_msg_pane_g3

0xbc84,	// (0x0002c473) list_single_2heading_msg_pane_g4_ParamLimits

0xbc84,	// (0x0002c473) list_single_2heading_msg_pane_g4

0x0003,

0xfc74,	// (0x00030463) list_single_2heading_msg_pane_g_ParamLimits

0xfc74,	// (0x00030463) list_single_2heading_msg_pane_g

0xbc9c,	// (0x0002c48b) list_single_2heading_msg_pane_t1_ParamLimits

0xbc9c,	// (0x0002c48b) list_single_2heading_msg_pane_t1

0xbcc4,	// (0x0002c4b3) list_single_2heading_msg_pane_t2_ParamLimits

0xbcc4,	// (0x0002c4b3) list_single_2heading_msg_pane_t2

0xbd2f,	// (0x0002c51e) list_single_2heading_msg_pane_t3_ParamLimits

0xbd2f,	// (0x0002c51e) list_single_2heading_msg_pane_t3

0x0c41,	// (0x00021430) list_single_2heading_msg_pane_t4_ParamLimits

0x0c41,	// (0x00021430) list_single_2heading_msg_pane_t4

0x0003,

0xfc7d,	// (0x0003046c) list_single_2heading_msg_pane_t_ParamLimits

0xfc7d,	// (0x0003046c) list_single_2heading_msg_pane_t

0x31d4,	// (0x000239c3) title_pane_g4_ParamLimits

0x31d4,	// (0x000239c3) title_pane_g4

0x1198,	// (0x00021987) title_pane_stacon_g3_ParamLimits

0x1198,	// (0x00021987) title_pane_stacon_g3

0x82af,	// (0x00028a9e) list_single_2graphic_im_pane_g4_ParamLimits

0x82af,	// (0x00028a9e) list_single_2graphic_im_pane_g4

0x6117,	// (0x00026906) popup_side_volume_key_window_cp

0x6949,	// (0x00027138) main_idle_act2_pane_t1

0x1d19,	// (0x00022508) toolbar_button_pane_g10

0xc3a9,	// (0x0002cb98) popup_toolbar_window_cp1

0x7113,	// (0x00027902) clock_nsta_pane_cp_t1

0x7113,	// (0x00027902) clock_nsta_pane_cp_t2

0x0001,

0xfa84,	// (0x00030273) clock_nsta_pane_cp_t

0x1389,	// (0x00021b78) navi_navi_volume_pane_cp2_ParamLimits

0x1398,	// (0x00021b87) popup_side_volume_key_window_g1_ParamLimits

0x13a4,	// (0x00021b93) popup_side_volume_key_window_g2_ParamLimits

0x13b3,	// (0x00021ba2) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0002fedb) popup_side_volume_key_window_g_ParamLimits

0x2175,	// (0x00022964) fep_hwr_aid_pane

0xe126,	// (0x0002e915) bg_fep_hwr_top_pane_g4_ParamLimits

0x76cc,	// (0x00027ebb) fep_hwr_top_pane_g1_ParamLimits

0x76de,	// (0x00027ecd) fep_hwr_top_pane_g2_ParamLimits

0x222e,	// (0x00022a1d) fep_hwr_top_pane_g3_ParamLimits

0xfad9,	// (0x000302c8) fep_hwr_top_pane_g_ParamLimits

0x2243,	// (0x00022a32) fep_hwr_top_text_pane_ParamLimits

0x5eda,	// (0x000266c9) aid_touch_tab_arrow_arrow_2

0x5ee3,	// (0x000266d2) aid_touch_tab_arrow_left_2

0x2189,	// (0x00022978) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x21c0,	// (0x000229af) fep_hwr_prediction_pane

0x783e,	// (0x0002802d) fep_vkb_prediction_pane

0xe260,	// (0x0002ea4f) fep_vkb_side_pane_g3_ParamLimits

0xe260,	// (0x0002ea4f) fep_vkb_side_pane_g3

0x78ee,	// (0x000280dd) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7d6e,	// (0x0002855d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7d7b,	// (0x0002856a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb83,	// (0x00030372) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x87ae,	// (0x00028f9d) fep_hwr_prediction_pane_g1

0x24d0,	// (0x00022cbf) fep_hwr_prediction_pane_g2

0x24d8,	// (0x00022cc7) fep_hwr_prediction_pane_g3

0x24e0,	// (0x00022ccf) fep_hwr_prediction_pane_g4

0x0003,

0xfc86,	// (0x00030475) fep_hwr_prediction_pane_g

0x87ae,	// (0x00028f9d) fep_vkb_prediction_pane_g1

0x87b8,	// (0x00028fa7) fep_vkb_prediction_pane_g2

0x87c0,	// (0x00028faf) fep_vkb_prediction_pane_g3

0x87c8,	// (0x00028fb7) fep_vkb_prediction_pane_g4

0x0003,

0xfc8f,	// (0x0003047e) fep_vkb_prediction_pane_g

0x1ff5,	// (0x000227e4) slider_set_pane_g3

0x2009,	// (0x000227f8) slider_set_pane_g4

0x2021,	// (0x00022810) slider_set_pane_g5

0x1ff5,	// (0x000227e4) slider_set_pane_g6

0x2037,	// (0x00022826) slider_set_pane_g7

0x6577,	// (0x00026d66) slider_form_pane_g3

0x6580,	// (0x00026d6f) slider_form_pane_g4

0x6588,	// (0x00026d77) slider_form_pane_g5

0x6577,	// (0x00026d66) slider_form_pane_g6

0xddb0,	// (0x0002e59f) slider_form_pane_g7

0x6bf4,	// (0x000273e3) slider_set_pane_vc_g3

0x6bfd,	// (0x000273ec) slider_set_pane_vc_g4

0x6c06,	// (0x000273f5) slider_set_pane_vc_g5

0x6bf4,	// (0x000273e3) slider_set_pane_vc_g6

0x6c0f,	// (0x000273fe) slider_set_pane_vc_g7

0x6dd1,	// (0x000275c0) slider_form_pane_vc_g1

0x6dda,	// (0x000275c9) slider_form_pane_vc_g2

0x6de3,	// (0x000275d2) slider_form_pane_vc_g3

0x6dd1,	// (0x000275c0) slider_form_pane_vc_g4

0x6dec,	// (0x000275db) slider_form_pane_vc_g5

0x0004,

0xfa56,	// (0x00030245) slider_form_pane_vc_g

0xe436,	// (0x0002ec25) main_idle_act3_pane

0x87d0,	// (0x00028fbf) ai3_links_pane

0xe44a,	// (0x0002ec39) popup_ai3_data_window_ParamLimits

0xe44a,	// (0x0002ec39) popup_ai3_data_window

0xe436,	// (0x0002ec25) grid_ai3_links_pane

0xe464,	// (0x0002ec53) cell_ai3_links_pane_ParamLimits

0xe464,	// (0x0002ec53) cell_ai3_links_pane

0x880b,	// (0x00028ffa) bg_popup_sub_pane_cp11

0x8818,	// (0x00029007) cell_ai3_links_pane_g1

0xe436,	// (0x0002ec25) bg_popup_sub_pane_cp12

0x883d,	// (0x0002902c) heading_ai3_data_pane

0x8845,	// (0x00029034) list_ai3_gene_pane

0x8851,	// (0x00029040) popup_ai3_data_window_g1

0x8859,	// (0x00029048) heading_ai3_data_pane_g1

0x8861,	// (0x00029050) heading_ai3_data_pane_t1

0x886f,	// (0x0002905e) list_double_ai3_gene_pane_ParamLimits

0x886f,	// (0x0002905e) list_double_ai3_gene_pane

0x887c,	// (0x0002906b) list_single_ai3_gene_pane_ParamLimits

0x887c,	// (0x0002906b) list_single_ai3_gene_pane

0x7635,	// (0x00027e24) list_highlight_pane_cp7_ParamLimits

0x7635,	// (0x00027e24) list_highlight_pane_cp7

0x8889,	// (0x00029078) list_single_a13_gene_pane_t1_ParamLimits

0x8889,	// (0x00029078) list_single_a13_gene_pane_t1

0x88a0,	// (0x0002908f) list_single_ai3_gene_pane_g1

0x88a9,	// (0x00029098) list_single_ai3_gene_pane_g2

0x0001,

0xfc98,	// (0x00030487) list_single_ai3_gene_pane_g

0x88b1,	// (0x000290a0) list_double_ai3_gene_pane_g1_ParamLimits

0x88b1,	// (0x000290a0) list_double_ai3_gene_pane_g1

0x88bd,	// (0x000290ac) list_double_ai3_gene_pane_t1_ParamLimits

0x88bd,	// (0x000290ac) list_double_ai3_gene_pane_t1

0x88d9,	// (0x000290c8) list_double_ai3_gene_pane_t2_ParamLimits

0x88d9,	// (0x000290c8) list_double_ai3_gene_pane_t2

0x88ef,	// (0x000290de) list_double_ai3_gene_pane_t3_ParamLimits

0x88ef,	// (0x000290de) list_double_ai3_gene_pane_t3

0x0002,

0xfc9d,	// (0x0003048c) list_double_ai3_gene_pane_t_ParamLimits

0xfc9d,	// (0x0003048c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0b72,	// (0x00021361) aid_size_min_col_2

0xe418,	// (0x0002ec07) aid_size_min_msg_ParamLimits

0xe418,	// (0x0002ec07) aid_size_min_msg

0xe274,	// (0x0002ea63) fep_vkb_top_text_pane_g2_ParamLimits

0xe274,	// (0x0002ea63) fep_vkb_top_text_pane_g2

0x0001,

0xfb09,	// (0x000302f8) fep_vkb_top_text_pane_g_ParamLimits

0xfb09,	// (0x000302f8) fep_vkb_top_text_pane_g

0xe436,	// (0x0002ec25) main_hc_apps_shell_pane

0x890c,	// (0x000290fb) grid_hc_apps_pane_ParamLimits

0x890c,	// (0x000290fb) grid_hc_apps_pane

0x891e,	// (0x0002910d) list_hc_apps_pane

0x8926,	// (0x00029115) scroll_pane_cp37_ParamLimits

0x8926,	// (0x00029115) scroll_pane_cp37

0xe47e,	// (0x0002ec6d) cell_hc_apps_pane_ParamLimits

0xe47e,	// (0x0002ec6d) cell_hc_apps_pane

0xe53c,	// (0x0002ed2b) cell_hc_apps_pane_g1_ParamLimits

0xe53c,	// (0x0002ed2b) cell_hc_apps_pane_g1

0x8a10,	// (0x000291ff) cell_hc_apps_pane_g2_ParamLimits

0x8a10,	// (0x000291ff) cell_hc_apps_pane_g2

0x8a2c,	// (0x0002921b) cell_hc_apps_pane_g3_ParamLimits

0x8a2c,	// (0x0002921b) cell_hc_apps_pane_g3

0x0002,

0xfca4,	// (0x00030493) cell_hc_apps_pane_g_ParamLimits

0xfca4,	// (0x00030493) cell_hc_apps_pane_g

0xe568,	// (0x0002ed57) cell_hc_apps_pane_t1_ParamLimits

0xe568,	// (0x0002ed57) cell_hc_apps_pane_t1

0x3509,	// (0x00023cf8) grid_highlight_pane_cp10_ParamLimits

0x3509,	// (0x00023cf8) grid_highlight_pane_cp10

0xe5a6,	// (0x0002ed95) list_single_hc_apps_pane_ParamLimits

0xe5a6,	// (0x0002ed95) list_single_hc_apps_pane

0xe5d3,	// (0x0002edc2) list_single_hc_apps_pane_g1

0xbd9d,	// (0x0002c58c) list_single_hc_apps_pane_g2

0x0001,

0xfcab,	// (0x0003049a) list_single_hc_apps_pane_g

0xbdb6,	// (0x0002c5a5) list_single_hc_apps_pane_g2_copy1

0xbdd2,	// (0x0002c5c1) list_single_hc_apps_pane_t1

0x3280,	// (0x00023a6f) bg_set_opt_pane_cp_ParamLimits

0x10c0,	// (0x000218af) setting_slider_pane_t1_ParamLimits

0x10d9,	// (0x000218c8) setting_slider_pane_t2_ParamLimits

0x10f3,	// (0x000218e2) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002fd28) setting_slider_pane_t_ParamLimits

0x110b,	// (0x000218fa) slider_set_pane_ParamLimits

0x1632,	// (0x00021e21) control_pane_g5_ParamLimits

0x1632,	// (0x00021e21) control_pane_g5

0x63c6,	// (0x00026bb5) slider_set_pane_g1_ParamLimits

0x1fe9,	// (0x000227d8) slider_set_pane_g2_ParamLimits

0x1ff5,	// (0x000227e4) slider_set_pane_g3_ParamLimits

0x2009,	// (0x000227f8) slider_set_pane_g4_ParamLimits

0x2021,	// (0x00022810) slider_set_pane_g5_ParamLimits

0x1ff5,	// (0x000227e4) slider_set_pane_g6_ParamLimits

0x2037,	// (0x00022826) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00030129) slider_set_pane_g_ParamLimits

0x4646,	// (0x00024e35) navi_icon_text_pane_ParamLimits

0xd657,	// (0x0002de46) aid_fill_nsta_2_ParamLimits

0xd68e,	// (0x0002de7d) aid_touch_tab_arrow_left_ParamLimits

0xd6a4,	// (0x0002de93) aid_touch_tab_arrow_right_ParamLimits

0xd73f,	// (0x0002df2e) clock_nsta_pane_ParamLimits

0x5ebc,	// (0x000266ab) navi_icon_pane_g1_ParamLimits

0x5ec8,	// (0x000266b7) navi_text_pane_t1_ParamLimits

0x721f,	// (0x00027a0e) navi_icon_text_pane_g1_ParamLimits

0x722b,	// (0x00027a1a) navi_icon_text_pane_t1_ParamLimits

0xe5d3,	// (0x0002edc2) list_single_hc_apps_pane_g1_ParamLimits

0xbd9d,	// (0x0002c58c) list_single_hc_apps_pane_g2_ParamLimits

0xfcab,	// (0x0003049a) list_single_hc_apps_pane_g_ParamLimits

0xbdb6,	// (0x0002c5a5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbdd2,	// (0x0002c5c1) list_single_hc_apps_pane_t1_ParamLimits

0xbf52,	// (0x0002c741) popup_toolbar2_fixed_window_ParamLimits

0xbf52,	// (0x0002c741) popup_toolbar2_fixed_window

0xcb69,	// (0x0002d358) popup_toolbar2_float_window

0xe436,	// (0x0002ec25) bg_popup_sub_pane_cp27

0x8b03,	// (0x000292f2) grid_toolbar2_float_pane

0xe436,	// (0x0002ec25) bg_popup_sub_pane_cp26

0x8b03,	// (0x000292f2) grid_toolbar2_fixed_pane

0xe5ec,	// (0x0002eddb) cell_toolbar2_fixed_pane_ParamLimits

0xe5ec,	// (0x0002eddb) cell_toolbar2_fixed_pane

0xe606,	// (0x0002edf5) cell_toolbar2_fixed_pane_g1

0x8b24,	// (0x00029313) toolbar2_fixed_button_pane

0x501d,	// (0x0002580c) toolbar2_fixed_button_pane_g1

0x5025,	// (0x00025814) toolbar2_fixed_button_pane_g2

0x502d,	// (0x0002581c) toolbar2_fixed_button_pane_g3

0x5035,	// (0x00025824) toolbar2_fixed_button_pane_g4

0x503d,	// (0x0002582c) toolbar2_fixed_button_pane_g5

0x5045,	// (0x00025834) toolbar2_fixed_button_pane_g6

0x504d,	// (0x0002583c) toolbar2_fixed_button_pane_g7

0x5055,	// (0x00025844) toolbar2_fixed_button_pane_g8

0x505d,	// (0x0002584c) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0003002b) toolbar2_fixed_button_pane_g

0x8b2c,	// (0x0002931b) cell_toolbar2_float_pane_ParamLimits

0x8b2c,	// (0x0002931b) cell_toolbar2_float_pane

0x8b3d,	// (0x0002932c) cell_toolbar2_float_pane_g1

0x8b24,	// (0x00029313) toolbar2_fixed_button_pane_cp

0xe14e,	// (0x0002e93d) fep_vkb_accented_list_pane_ParamLimits

0xe14e,	// (0x0002e93d) fep_vkb_accented_list_pane

0x2391,	// (0x00022b80) bg_popup_fep_shadow_pane_g9

0x47cf,	// (0x00024fbe) bg_popup_fep_shadow_pane_cp3

0x3c74,	// (0x00024463) list_accented_list_pane

0x8b46,	// (0x00029335) list_single_accented_list_pane_ParamLimits

0x8b46,	// (0x00029335) list_single_accented_list_pane

0x47cf,	// (0x00024fbe) list_highlight_pane_cp10

0x8b57,	// (0x00029346) list_single_accented_list_pane_t1

0xca93,	// (0x0002d282) popup_slider_window_ParamLimits

0xca93,	// (0x0002d282) popup_slider_window

0x8791,	// (0x00028f80) aid_indentation_list_msg

0xe6fd,	// (0x0002eeec) bg_popup_window_pane_cp19

0x8c83,	// (0x00029472) popup_slider_window_g1

0x8c9f,	// (0x0002948e) popup_slider_window_g2

0x8cbb,	// (0x000294aa) popup_slider_window_g3

0x0005,

0xfcb0,	// (0x0003049f) popup_slider_window_g

0x8d21,	// (0x00029510) popup_slider_window_t1

0x8d95,	// (0x00029584) small_volume_slider_vertical_pane

0x7670,	// (0x00027e5f) small_volume_slider_vertical_pane_g1

0x7670,	// (0x00027e5f) small_volume_slider_vertical_pane_g2

0x8db1,	// (0x000295a0) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc2,	// (0x000304b1) small_volume_slider_vertical_pane_g

0xbec0,	// (0x0002c6af) area_side_right_pane_ParamLimits

0xbec0,	// (0x0002c6af) area_side_right_pane

0xcd0a,	// (0x0002d4f9) aid_size_side_button_ParamLimits

0xcd0a,	// (0x0002d4f9) aid_size_side_button

0xcd23,	// (0x0002d512) grid_sctrl_middle_pane_ParamLimits

0xcd23,	// (0x0002d512) grid_sctrl_middle_pane

0x251b,	// (0x00022d0a) sctrl_sk_bottom_pane

0x252c,	// (0x00022d1b) sctrl_sk_top_pane

0x253e,	// (0x00022d2d) aid_touch_sctrl_top

0x3509,	// (0x00023cf8) bg_sctrl_sk_pane_ParamLimits

0x3509,	// (0x00023cf8) bg_sctrl_sk_pane

0x254b,	// (0x00022d3a) sctrl_sk_top_pane_g1

0x2558,	// (0x00022d47) sctrl_sk_top_pane_t1

0x253e,	// (0x00022d2d) aid_touch_sctrl_bottom

0x3509,	// (0x00023cf8) bg_sctrl_sk_pane_cp_ParamLimits

0x3509,	// (0x00023cf8) bg_sctrl_sk_pane_cp

0x2573,	// (0x00022d62) sctrl_sk_bottom_pane_g1

0x2558,	// (0x00022d47) sctrl_sk_bottom_pane_t1

0xcd3d,	// (0x0002d52c) cell_sctrl_middle_pane_ParamLimits

0xcd3d,	// (0x0002d52c) cell_sctrl_middle_pane

0xcd4e,	// (0x0002d53d) aid_touch_sctrl_middle_ParamLimits

0xcd4e,	// (0x0002d53d) aid_touch_sctrl_middle

0xcd5b,	// (0x0002d54a) bg_sctrl_middle_pane_ParamLimits

0xcd5b,	// (0x0002d54a) bg_sctrl_middle_pane

0x8e39,	// (0x00029628) cell_sctrl_middle_pane_g1_ParamLimits

0x8e39,	// (0x00029628) cell_sctrl_middle_pane_g1

0xcd69,	// (0x0002d558) cell_sctrl_middle_pane_g2_ParamLimits

0xcd69,	// (0x0002d558) cell_sctrl_middle_pane_g2

0x0001,

0xfcce,	// (0x000304bd) cell_sctrl_middle_pane_g_ParamLimits

0xfcce,	// (0x000304bd) cell_sctrl_middle_pane_g

0x501d,	// (0x0002580c) bg_sctrl_middle_pane_g1

0x5025,	// (0x00025814) bg_sctrl_middle_pane_g2

0x502d,	// (0x0002581c) bg_sctrl_middle_pane_g3

0x5035,	// (0x00025824) bg_sctrl_middle_pane_g4

0x503d,	// (0x0002582c) bg_sctrl_middle_pane_g5

0x5045,	// (0x00025834) bg_sctrl_middle_pane_g6

0x504d,	// (0x0002583c) bg_sctrl_middle_pane_g7

0x5055,	// (0x00025844) bg_sctrl_middle_pane_g8

0x0007,

0xfcd3,	// (0x000304c2) bg_sctrl_middle_pane_g

0x505d,	// (0x0002584c) bg_sctrl_middle_pane_g8_copy1

0x501d,	// (0x0002580c) bg_sctrl_sk_pane_g1

0x5025,	// (0x00025814) bg_sctrl_sk_pane_g2

0x502d,	// (0x0002581c) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0003002b) bg_sctrl_sk_pane_g

0x3a3c,	// (0x0002422b) aid_size_touch_scroll_bar

0x5035,	// (0x00025824) bg_sctrl_sk_pane_g4

0x503d,	// (0x0002582c) bg_sctrl_sk_pane_g5

0x5045,	// (0x00025834) bg_sctrl_sk_pane_g6

0x504d,	// (0x0002583c) bg_sctrl_sk_pane_g7

0x5055,	// (0x00025844) bg_sctrl_sk_pane_g8

0x505d,	// (0x0002584c) bg_sctrl_sk_pane_g9

0x17d4,	// (0x00021fc3) popup_fep_china_hwr2_fs_candidate_window

0xc5a7,	// (0x0002cd96) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc5a7,	// (0x0002cd96) popup_fep_china_hwr2_fs_control_window

0x78ee,	// (0x000280dd) sctrl_sk_top_pane_g2

0x0001,

0xfcc9,	// (0x000304b8) sctrl_sk_top_pane_g

0xe7b5,	// (0x0002efa4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7b5,	// (0x0002efa4) aid_fep_china_hwr2_fs_cell

0xe7c9,	// (0x0002efb8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7c9,	// (0x0002efb8) bg_popup_fep_shadow_pane_cp4

0xe7e0,	// (0x0002efcf) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7e0,	// (0x0002efcf) bg_popup_fep_shadow_pane_cp5

0xe7f2,	// (0x0002efe1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7f2,	// (0x0002efe1) popup_fep_china_hwr2_fs_control_bar_grid

0xe806,	// (0x0002eff5) popup_fep_china_hwr2_fs_control_funtion_grid

0x8e0d,	// (0x000295fc) aid_fep_china_hwr2_fs_candi_cell

0xe436,	// (0x0002ec25) bg_popup_fep_shadow_pane_cp6

0x8e17,	// (0x00029606) popup_fep_china_hwr2_fs_candidate_grid

0xe80e,	// (0x0002effd) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe80e,	// (0x0002effd) cell_fep_china_hwr2_fs_funtion_grid

0x7670,	// (0x00027e5f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8e39,	// (0x00029628) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8e39,	// (0x00029628) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8e47,	// (0x00029636) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8e47,	// (0x00029636) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce4,	// (0x000304d3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce4,	// (0x000304d3) cell_fep_china_hwr2_fs_funtion_grid_g

0xe826,	// (0x0002f015) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe826,	// (0x0002f015) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe83b,	// (0x0002f02a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe83b,	// (0x0002f02a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce9,	// (0x000304d8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce9,	// (0x000304d8) cell_fep_china_hwr2_fs_funtion_grid_t

0x8e8e,	// (0x0002967d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8e96,	// (0x00029685) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8e9e,	// (0x0002968d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcee,	// (0x000304dd) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8ea6,	// (0x00029695) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8ea6,	// (0x00029695) cell_fep_china_hwr2_fs_candidate_grid

0x8ebf,	// (0x000296ae) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ec7,	// (0x000296b6) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7670,	// (0x00027e5f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7670,	// (0x00027e5f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0e,	// (0x000302fd) cell_fep_china_hwr2_fs_candidate_grid_g

0x8ecf,	// (0x000296be) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4c13,	// (0x00025402) clock_nsta_pane_cp_24_ParamLimits

0x4c13,	// (0x00025402) clock_nsta_pane_cp_24

0x4c91,	// (0x00025480) indicator_nsta_pane_cp_24_ParamLimits

0x4c91,	// (0x00025480) indicator_nsta_pane_cp_24

0x5d2c,	// (0x0002651b) heading_pane_g1

0x0001,

0xf8a1,	// (0x00030090) heading_pane_g

0x6792,	// (0x00026f81) grid_sct_catagory_button_pane

0x67c2,	// (0x00026fb1) scroll_pane_cp5_ParamLimits

0x726d,	// (0x00027a5c) button_value_adjust_pane_cp5_ParamLimits

0x726d,	// (0x00027a5c) button_value_adjust_pane_cp5

0x734c,	// (0x00027b3b) form2_midp_time_pane_ParamLimits

0x8edd,	// (0x000296cc) cell_sct_catagory_button_pane_ParamLimits

0x8edd,	// (0x000296cc) cell_sct_catagory_button_pane

0x7635,	// (0x00027e24) bg_button_pane_cp01_ParamLimits

0x7635,	// (0x00027e24) bg_button_pane_cp01

0x7670,	// (0x00027e5f) cell_sct_catagory_button_pane_g1

0xcb0c,	// (0x0002d2fb) popup_tb_extension_window

0xe857,	// (0x0002f046) aid_size_cell_ext_ParamLimits

0xe857,	// (0x0002f046) aid_size_cell_ext

0x387e,	// (0x0002406d) bg_tb_trans_pane_cp1_ParamLimits

0x387e,	// (0x0002406d) bg_tb_trans_pane_cp1

0xe87d,	// (0x0002f06c) grid_tb_ext_pane_ParamLimits

0xe87d,	// (0x0002f06c) grid_tb_ext_pane

0xe8b8,	// (0x0002f0a7) cell_tb_ext_pane_ParamLimits

0xe8b8,	// (0x0002f0a7) cell_tb_ext_pane

0xe8e0,	// (0x0002f0cf) cell_tb_ext_pane_g1_ParamLimits

0xe8e0,	// (0x0002f0cf) cell_tb_ext_pane_g1

0x8f71,	// (0x00029760) cell_tb_ext_pane_t1

0x3509,	// (0x00023cf8) list_highlight_pane_cp11_ParamLimits

0x3509,	// (0x00023cf8) list_highlight_pane_cp11

0xbf67,	// (0x0002c756) popup_uni_indicator_window_ParamLimits

0xbf67,	// (0x0002c756) popup_uni_indicator_window

0x3b0d,	// (0x000242fc) bg_popup_sub_pane_cp14

0x8f8c,	// (0x0002977b) list_uniindi_pane

0x8f98,	// (0x00029787) uniindi_top_pane

0x3509,	// (0x00023cf8) bg_uniindi_top_pane

0x8fb7,	// (0x000297a6) uniindi_top_pane_g1

0x8fcd,	// (0x000297bc) uniindi_top_pane_g2

0x0003,

0xfcf5,	// (0x000304e4) uniindi_top_pane_g

0x8ff7,	// (0x000297e6) uniindi_top_pane_t1

0x9021,	// (0x00029810) list_single_uniindi_pane_ParamLimits

0x9021,	// (0x00029810) list_single_uniindi_pane

0x7670,	// (0x00027e5f) bg_uniindi_top_pane_g1

0x9034,	// (0x00029823) list_single_uniindi_pane_g1

0x9047,	// (0x00029836) list_single_uniindi_pane_t1

0xe436,	// (0x0002ec25) control_bg_pane

0x906c,	// (0x0002985b) bg_sctrl_sk_pane_cp1

0x9075,	// (0x00029864) bg_sctrl_sk_pane_cp2

0x907e,	// (0x0002986d) control_bg_pane_g1

0x9087,	// (0x00029876) control_bg_pane_g2

0x0001,

0xfcfe,	// (0x000304ed) control_bg_pane_g

0x70b7,	// (0x000278a6) cell_indicator_nsta_pane_g1_ParamLimits

0xdfb3,	// (0x0002e7a2) cell_indicator_nsta_pane_g2_ParamLimits

0xfa72,	// (0x00030261) cell_indicator_nsta_pane_g_ParamLimits

0x0923,	// (0x00021112) form2_midp_time_pane_t1_ParamLimits

0x2167,	// (0x00022956) main_idle_act4_pane_ParamLimits

0x2167,	// (0x00022956) main_idle_act4_pane

0xcb0c,	// (0x0002d2fb) popup_tb_extension_window_ParamLimits

0xe89f,	// (0x0002f08e) tb_ext_find_pane_ParamLimits

0xe89f,	// (0x0002f08e) tb_ext_find_pane

0x9090,	// (0x0002987f) ai_gene_pane_1_cp1

0x4916,	// (0x00025105) ai_gene_pane_2_cp1

0x9098,	// (0x00029887) list_single_idle_plugin_calendar_pane

0x90a1,	// (0x00029890) list_single_idle_plugin_notification_pane

0x90aa,	// (0x00029899) list_single_idle_plugin_player_pane

0xe8fd,	// (0x0002f0ec) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8fd,	// (0x0002f0ec) list_single_idle_plugin_shortcut_pane

0xe925,	// (0x0002f114) main_idle_act4_pane_t1

0xe93b,	// (0x0002f12a) main_idle_act4_pane_t2

0x0001,

0xfd03,	// (0x000304f2) main_idle_act4_pane_t

0xe951,	// (0x0002f140) middle_sk_idle_act4_pane_ParamLimits

0xe951,	// (0x0002f140) middle_sk_idle_act4_pane

0xe96d,	// (0x0002f15c) popup_clock_digital_analogue_window_cp2

0xe995,	// (0x0002f184) shortcut_wheel_idle_act4_pane_ParamLimits

0xe995,	// (0x0002f184) shortcut_wheel_idle_act4_pane

0x7670,	// (0x00027e5f) shortcut_wheel_idle_act4_pane_g1

0x7670,	// (0x00027e5f) shortcut_wheel_idle_act4_pane_g2

0x7670,	// (0x00027e5f) shortcut_wheel_idle_act4_pane_g3

0x7670,	// (0x00027e5f) shortcut_wheel_idle_act4_pane_g4

0x7670,	// (0x00027e5f) shortcut_wheel_idle_act4_pane_g5

0x913d,	// (0x0002992c) shortcut_wheel_idle_act4_pane_g6

0x9145,	// (0x00029934) shortcut_wheel_idle_act4_pane_g7

0x914d,	// (0x0002993c) shortcut_wheel_idle_act4_pane_g8

0x9155,	// (0x00029944) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd08,	// (0x000304f7) shortcut_wheel_idle_act4_pane_g

0xe126,	// (0x0002e915) middle_sk_idle_act4_pane_g1_ParamLimits

0xe126,	// (0x0002e915) middle_sk_idle_act4_pane_g1

0xea12,	// (0x0002f201) middle_sk_idle_act4_pane_g2_ParamLimits

0xea12,	// (0x0002f201) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2b,	// (0x0003051a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2b,	// (0x0003051a) middle_sk_idle_act4_pane_g

0xea2a,	// (0x0002f219) middle_sk_idle_act4_pane_t1_ParamLimits

0xea2a,	// (0x0002f219) middle_sk_idle_act4_pane_t1

0xea59,	// (0x0002f248) grid_ai_shortcut_pane_ParamLimits

0xea59,	// (0x0002f248) grid_ai_shortcut_pane

0xea76,	// (0x0002f265) list_highlight_pane_cp16_ParamLimits

0xea76,	// (0x0002f265) list_highlight_pane_cp16

0xea83,	// (0x0002f272) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea83,	// (0x0002f272) list_single_idle_plugin_shortcut_pane_g1

0xea8f,	// (0x0002f27e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea8f,	// (0x0002f27e) list_single_idle_plugin_shortcut_pane_g2

0xeaab,	// (0x0002f29a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeaab,	// (0x0002f29a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd30,	// (0x0003051f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd30,	// (0x0003051f) list_single_idle_plugin_shortcut_pane_g

0xeac0,	// (0x0002f2af) cell_ai_shortcut_pane_ParamLimits

0xeac0,	// (0x0002f2af) cell_ai_shortcut_pane

0xead6,	// (0x0002f2c5) cell_ai_shortcut_pane_g1_ParamLimits

0xead6,	// (0x0002f2c5) cell_ai_shortcut_pane_g1

0x9090,	// (0x0002987f) ai_gene_pane_1_cp2

0x9285,	// (0x00029a74) ai_gene_pane_2_cp2

0x928d,	// (0x00029a7c) list_highlight_pane_cp15

0x9296,	// (0x00029a85) list_single_idle_plugin_calendar_pane_g1

0x928d,	// (0x00029a7c) list_highlight_pane_cp17

0x929e,	// (0x00029a8d) list_single_idle_plugin_calendar_pane_g1_copy1

0x92a6,	// (0x00029a95) list_single_idle_plugin_player_pane_g1

0x69eb,	// (0x000271da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd37,	// (0x00030526) list_single_idle_plugin_player_pane_g

0x92ae,	// (0x00029a9d) list_single_idle_plugin_player_pane_t1

0x92bc,	// (0x00029aab) list_single_idle_plugin_player_pane_t2

0x92ca,	// (0x00029ab9) list_single_idle_plugin_player_pane_t3

0x92d8,	// (0x00029ac7) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3c,	// (0x0003052b) list_single_idle_plugin_player_pane_t

0x92e6,	// (0x00029ad5) wait_bar_pane_cp15

0x92ee,	// (0x00029add) grid_ai_notification_pane

0x69eb,	// (0x000271da) list_single_idle_plugin_notification_pane_g1

0xeaf8,	// (0x0002f2e7) cell_ai_notification_pane_ParamLimits

0xeaf8,	// (0x0002f2e7) cell_ai_notification_pane

0x9304,	// (0x00029af3) cell_ai_notification_pane_g1

0x930c,	// (0x00029afb) cell_ai_notification_pane_t1

0xeb05,	// (0x0002f2f4) tb_ext_find_button_pane

0xeb0d,	// (0x0002f2fc) tb_ext_find_pane_g1

0xeb15,	// (0x0002f304) tb_ext_find_pane_t1

0x41a2,	// (0x00024991) tb_ext_find_button_pane_g1

0x9338,	// (0x00029b27) tb_ext_find_button_pane_g2

0x0001,

0xfd45,	// (0x00030534) tb_ext_find_button_pane_g

0xe925,	// (0x0002f114) main_idle_act4_pane_t1_ParamLimits

0xe93b,	// (0x0002f12a) main_idle_act4_pane_t2_ParamLimits

0xfd03,	// (0x000304f2) main_idle_act4_pane_t_ParamLimits

0xe96d,	// (0x0002f15c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe985,	// (0x0002f174) sat_plugin_idle_act4_pane_ParamLimits

0xe985,	// (0x0002f174) sat_plugin_idle_act4_pane

0xeb23,	// (0x0002f312) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb23,	// (0x0002f312) sat_plugin_idle_act4_pane_t1

0xeb3b,	// (0x0002f32a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb3b,	// (0x0002f32a) sat_plugin_idle_act4_pane_t2

0xeb53,	// (0x0002f342) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb53,	// (0x0002f342) sat_plugin_idle_act4_pane_t3

0xeb6b,	// (0x0002f35a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb6b,	// (0x0002f35a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4a,	// (0x00030539) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4a,	// (0x00030539) sat_plugin_idle_act4_pane_t

0x0f24,	// (0x00021713) popup_battery_window_ParamLimits

0x0f24,	// (0x00021713) popup_battery_window

0x3509,	// (0x00023cf8) bg_popup_sub_pane_cp25_ParamLimits

0x3509,	// (0x00023cf8) bg_popup_sub_pane_cp25

0x938d,	// (0x00029b7c) popup_battery_window_g1_ParamLimits

0x938d,	// (0x00029b7c) popup_battery_window_g1

0x9399,	// (0x00029b88) popup_battery_window_t1_ParamLimits

0x9399,	// (0x00029b88) popup_battery_window_t1

0x93ab,	// (0x00029b9a) popup_battery_window_t2_ParamLimits

0x93ab,	// (0x00029b9a) popup_battery_window_t2

0x0001,

0xfd53,	// (0x00030542) popup_battery_window_t_ParamLimits

0xfd53,	// (0x00030542) popup_battery_window_t

0xd531,	// (0x0002dd20) midp_canvas_pane_ParamLimits

0xd58e,	// (0x0002dd7d) midp_keypad_pane_ParamLimits

0xd58e,	// (0x0002dd7d) midp_keypad_pane

0x4af3,	// (0x000252e2) main_midp_pane_ParamLimits

0x7131,	// (0x00027920) signal_pane_g2_cp_ParamLimits

0xeb83,	// (0x0002f372) aid_size_cell_midp_keypad_ParamLimits

0xeb83,	// (0x0002f372) aid_size_cell_midp_keypad

0xeba1,	// (0x0002f390) midp_keyp_game_grid_pane_ParamLimits

0xeba1,	// (0x0002f390) midp_keyp_game_grid_pane

0xebc8,	// (0x0002f3b7) midp_keyp_rocker_pane_ParamLimits

0xebc8,	// (0x0002f3b7) midp_keyp_rocker_pane

0xec19,	// (0x0002f408) midp_keyp_sk_left_pane_ParamLimits

0xec19,	// (0x0002f408) midp_keyp_sk_left_pane

0xec6d,	// (0x0002f45c) midp_keyp_sk_right_pane_ParamLimits

0xec6d,	// (0x0002f45c) midp_keyp_sk_right_pane

0xe436,	// (0x0002ec25) bg_button_pane_cp03

0xecc1,	// (0x0002f4b0) midp_keyp_sk_left_pane_g1

0xe436,	// (0x0002ec25) bg_button_pane_cp04

0xecc1,	// (0x0002f4b0) midp_keyp_sk_right_pane_g1

0x7670,	// (0x00027e5f) midp_keyp_rocker_pane_g1

0xecca,	// (0x0002f4b9) keyp_game_cell_pane_ParamLimits

0xecca,	// (0x0002f4b9) keyp_game_cell_pane

0xe436,	// (0x0002ec25) bg_button_pane_cp02

0xecee,	// (0x0002f4dd) keyp_game_cell_pane_g1

0xbf02,	// (0x0002c6f1) popup_fep_vkb2_window_ParamLimits

0xbf02,	// (0x0002c6f1) popup_fep_vkb2_window

0xcd75,	// (0x0002d564) aid_size_cell_vkb2_ParamLimits

0xcd75,	// (0x0002d564) aid_size_cell_vkb2

0xcda1,	// (0x0002d590) popup_fep_vkb2_window_g1_ParamLimits

0xcda1,	// (0x0002d590) popup_fep_vkb2_window_g1

0xcdf1,	// (0x0002d5e0) vkb2_area_bottom_pane_ParamLimits

0xcdf1,	// (0x0002d5e0) vkb2_area_bottom_pane

0xce45,	// (0x0002d634) vkb2_area_keypad_pane_ParamLimits

0xce45,	// (0x0002d634) vkb2_area_keypad_pane

0xce8d,	// (0x0002d67c) vkb2_area_top_pane_ParamLimits

0xce8d,	// (0x0002d67c) vkb2_area_top_pane

0xcf19,	// (0x0002d708) vkb2_top_entry_pane_ParamLimits

0xcf19,	// (0x0002d708) vkb2_top_entry_pane

0xcf46,	// (0x0002d735) vkb2_top_grid_left_pane_ParamLimits

0xcf46,	// (0x0002d735) vkb2_top_grid_left_pane

0xcf67,	// (0x0002d756) vkb2_top_grid_right_pane_ParamLimits

0xcf67,	// (0x0002d756) vkb2_top_grid_right_pane

0x27d0,	// (0x00022fbf) vkb2_cell_keypad_pane_ParamLimits

0x27d0,	// (0x00022fbf) vkb2_cell_keypad_pane

0xcfaf,	// (0x0002d79e) vkb2_area_bottom_grid_pane_ParamLimits

0xcfaf,	// (0x0002d79e) vkb2_area_bottom_grid_pane

0xcfd9,	// (0x0002d7c8) vkb2_area_bottom_pane_g1_ParamLimits

0xcfd9,	// (0x0002d7c8) vkb2_area_bottom_pane_g1

0xcfff,	// (0x0002d7ee) vkb2_area_bottom_pane_g2_ParamLimits

0xcfff,	// (0x0002d7ee) vkb2_area_bottom_pane_g2

0xd030,	// (0x0002d81f) vkb2_area_bottom_pane_g3_ParamLimits

0xd030,	// (0x0002d81f) vkb2_area_bottom_pane_g3

0x0002,

0xfd58,	// (0x00030547) vkb2_area_bottom_pane_g_ParamLimits

0xfd58,	// (0x00030547) vkb2_area_bottom_pane_g

0x297a,	// (0x00023169) vkb2_top_cell_left_pane_ParamLimits

0x297a,	// (0x00023169) vkb2_top_cell_left_pane

0xecf7,	// (0x0002f4e6) vkb2_top_entry_pane_g1_ParamLimits

0xecf7,	// (0x0002f4e6) vkb2_top_entry_pane_g1

0xed05,	// (0x0002f4f4) vkb2_top_entry_pane_t1_ParamLimits

0xed05,	// (0x0002f4f4) vkb2_top_entry_pane_t1

0x955c,	// (0x00029d4b) vkb2_top_entry_pane_t2_ParamLimits

0x955c,	// (0x00029d4b) vkb2_top_entry_pane_t2

0x958e,	// (0x00029d7d) vkb2_top_entry_pane_t3_ParamLimits

0x958e,	// (0x00029d7d) vkb2_top_entry_pane_t3

0x0002,

0xfd5f,	// (0x0003054e) vkb2_top_entry_pane_t_ParamLimits

0xfd5f,	// (0x0003054e) vkb2_top_entry_pane_t

0xd09a,	// (0x0002d889) vkb2_top_grid_right_pane_g1_ParamLimits

0xd09a,	// (0x0002d889) vkb2_top_grid_right_pane_g1

0x29dd,	// (0x000231cc) vkb2_top_grid_right_pane_g2_ParamLimits

0x29dd,	// (0x000231cc) vkb2_top_grid_right_pane_g2

0x29f5,	// (0x000231e4) vkb2_top_grid_right_pane_g3_ParamLimits

0x29f5,	// (0x000231e4) vkb2_top_grid_right_pane_g3

0xd0b0,	// (0x0002d89f) vkb2_top_grid_right_pane_g4_ParamLimits

0xd0b0,	// (0x0002d89f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd66,	// (0x00030555) vkb2_top_grid_right_pane_g_ParamLimits

0xfd66,	// (0x00030555) vkb2_top_grid_right_pane_g

0x2a23,	// (0x00023212) vkb2_top_cell_left_pane_g1

0x2a3a,	// (0x00023229) vkb2_cell_keypad_pane_g1_ParamLimits

0x2a3a,	// (0x00023229) vkb2_cell_keypad_pane_g1

0x95b2,	// (0x00029da1) vkb2_cell_keypad_pane_t1_ParamLimits

0x95b2,	// (0x00029da1) vkb2_cell_keypad_pane_t1

0x2a48,	// (0x00023237) vkb2_cell_bottom_grid_pane_ParamLimits

0x2a48,	// (0x00023237) vkb2_cell_bottom_grid_pane

0x2a81,	// (0x00023270) vkb2_cell_bottom_grid_pane_g1

0xe9b6,	// (0x0002f1a5) aid_call2_pane_cp02

0xe9be,	// (0x0002f1ad) aid_call_pane_cp02

0xe9c6,	// (0x0002f1b5) clock_digital_number_pane_cp10

0xe9ce,	// (0x0002f1bd) clock_digital_number_pane_cp11

0xe9d6,	// (0x0002f1c5) clock_digital_number_pane_cp12

0xe9de,	// (0x0002f1cd) clock_digital_number_pane_cp13

0xe9e6,	// (0x0002f1d5) clock_digital_separator_pane_cp10

0x41a2,	// (0x00024991) popup_clock_digital_analogue_window_cp2_g1

0x41a2,	// (0x00024991) popup_clock_digital_analogue_window_cp2_g2

0xe9ee,	// (0x0002f1dd) popup_clock_digital_analogue_window_cp2_g3

0x41a2,	// (0x00024991) popup_clock_digital_analogue_window_cp2_g4

0xe9ee,	// (0x0002f1dd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1b,	// (0x0003050a) popup_clock_digital_analogue_window_cp2_g

0xe9f6,	// (0x0002f1e5) popup_clock_digital_analogue_window_cp2_t1

0xea04,	// (0x0002f1f3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd26,	// (0x00030515) popup_clock_digital_analogue_window_cp2_t

0x7670,	// (0x00027e5f) clock_digital_number_pane_cp10_g1

0x7670,	// (0x00027e5f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0e,	// (0x000302fd) clock_digital_number_pane_cp10_g

0x7670,	// (0x00027e5f) clock_digital_separator_pane_cp10_g1

0x7670,	// (0x00027e5f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0e,	// (0x000302fd) clock_digital_separator_pane_cp10_g

0x8fd9,	// (0x000297c8) uniindi_top_pane_g3

0x8fea,	// (0x000297d9) uniindi_top_pane_g4

0x285b,	// (0x0002304a) vkb2_row_keypad_pane_ParamLimits

0x285b,	// (0x0002304a) vkb2_row_keypad_pane

0x2aa1,	// (0x00023290) vkb2_cell_t_keypad_pane_ParamLimits

0x2aa1,	// (0x00023290) vkb2_cell_t_keypad_pane

0x2ab1,	// (0x000232a0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2ab1,	// (0x000232a0) vkb2_cell_t_keypad_pane_cp08

0x2ac4,	// (0x000232b3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2ac4,	// (0x000232b3) vkb2_cell_t_keypad_pane_cp09

0x2ad8,	// (0x000232c7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2ad8,	// (0x000232c7) vkb2_cell_t_keypad_pane_cp01

0x2ae9,	// (0x000232d8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2ae9,	// (0x000232d8) vkb2_cell_t_keypad_pane_cp02

0x2afa,	// (0x000232e9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2afa,	// (0x000232e9) vkb2_cell_t_keypad_pane_cp03

0x2b0b,	// (0x000232fa) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2b0b,	// (0x000232fa) vkb2_cell_t_keypad_pane_cp04

0x2b1c,	// (0x0002330b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2b1c,	// (0x0002330b) vkb2_cell_t_keypad_pane_cp05

0x2b2d,	// (0x0002331c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2b2d,	// (0x0002331c) vkb2_cell_t_keypad_pane_cp06

0x2b3e,	// (0x0002332d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2b3e,	// (0x0002332d) vkb2_cell_t_keypad_pane_cp07

0x2b4f,	// (0x0002333e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2b4f,	// (0x0002333e) vkb2_cell_t_keypad_pane_cp10

0x78ee,	// (0x000280dd) vkb2_cell_t_keypad_pane_g1

0x95c9,	// (0x00029db8) vkb2_cell_t_keypad_pane_t1

0xe436,	// (0x0002ec25) popup_grid_graphic2_window

0xed3e,	// (0x0002f52d) aid_size_cell_graphic2_ParamLimits

0xed3e,	// (0x0002f52d) aid_size_cell_graphic2

0xed7c,	// (0x0002f56b) bg_popup_window_pane_cp21_ParamLimits

0xed7c,	// (0x0002f56b) bg_popup_window_pane_cp21

0xed8a,	// (0x0002f579) graphic2_pages_pane_ParamLimits

0xed8a,	// (0x0002f579) graphic2_pages_pane

0xede0,	// (0x0002f5cf) grid_graphic2_control_pane_ParamLimits

0xede0,	// (0x0002f5cf) grid_graphic2_control_pane

0xee28,	// (0x0002f617) grid_graphic2_pane_ParamLimits

0xee28,	// (0x0002f617) grid_graphic2_pane

0xeeaf,	// (0x0002f69e) cell_graphic2_pane

0xe436,	// (0x0002ec25) main_comp_mode_pane

0x8845,	// (0x00029034) list_ai3_gene_pane_ParamLimits

0xe6fd,	// (0x0002eeec) bg_popup_window_pane_cp19_ParamLimits

0x8c27,	// (0x00029416) bg_touch_area_indi_pane_ParamLimits

0x8c27,	// (0x00029416) bg_touch_area_indi_pane

0x8c3d,	// (0x0002942c) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c3d,	// (0x0002942c) bg_touch_area_indi_pane_cp01

0x8c53,	// (0x00029442) bg_touch_area_indi_pane_cp02_ParamLimits

0x8c53,	// (0x00029442) bg_touch_area_indi_pane_cp02

0x8c69,	// (0x00029458) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c69,	// (0x00029458) bg_touch_area_indi_pane_cp03

0x8c83,	// (0x00029472) popup_slider_window_g1_ParamLimits

0x8c9f,	// (0x0002948e) popup_slider_window_g2_ParamLimits

0x8cbb,	// (0x000294aa) popup_slider_window_g3_ParamLimits

0xfcb0,	// (0x0003049f) popup_slider_window_g_ParamLimits

0x8d21,	// (0x00029510) popup_slider_window_t1_ParamLimits

0x8d95,	// (0x00029584) small_volume_slider_vertical_pane_ParamLimits

0xeeaf,	// (0x0002f69e) cell_graphic2_pane_ParamLimits

0xef0a,	// (0x0002f6f9) bg_button_pane_cp10_ParamLimits

0xef0a,	// (0x0002f6f9) bg_button_pane_cp10

0xef1d,	// (0x0002f70c) bg_button_pane_cp11_ParamLimits

0xef1d,	// (0x0002f70c) bg_button_pane_cp11

0xef30,	// (0x0002f71f) graphic2_pages_pane_g1_ParamLimits

0xef30,	// (0x0002f71f) graphic2_pages_pane_g1

0xef4b,	// (0x0002f73a) graphic2_pages_pane_g2_ParamLimits

0xef4b,	// (0x0002f73a) graphic2_pages_pane_g2

0x0001,

0xfd74,	// (0x00030563) graphic2_pages_pane_g_ParamLimits

0xfd74,	// (0x00030563) graphic2_pages_pane_g

0xef63,	// (0x0002f752) graphic2_pages_pane_t1_ParamLimits

0xef63,	// (0x0002f752) graphic2_pages_pane_t1

0xef7b,	// (0x0002f76a) cell_graphic2_control_pane_ParamLimits

0xef7b,	// (0x0002f76a) cell_graphic2_control_pane

0xefad,	// (0x0002f79c) cell_graphic2_pane_g1_ParamLimits

0xefad,	// (0x0002f79c) cell_graphic2_pane_g1

0xe134,	// (0x0002e923) cell_graphic2_pane_g2_ParamLimits

0xe134,	// (0x0002e923) cell_graphic2_pane_g2

0xefba,	// (0x0002f7a9) cell_graphic2_pane_g3_ParamLimits

0xefba,	// (0x0002f7a9) cell_graphic2_pane_g3

0xe141,	// (0x0002e930) cell_graphic2_pane_g4_ParamLimits

0xe141,	// (0x0002e930) cell_graphic2_pane_g4

0xefc7,	// (0x0002f7b6) cell_graphic2_pane_g5_ParamLimits

0xefc7,	// (0x0002f7b6) cell_graphic2_pane_g5

0x0004,

0xfd79,	// (0x00030568) cell_graphic2_pane_g_ParamLimits

0xfd79,	// (0x00030568) cell_graphic2_pane_g

0xefe4,	// (0x0002f7d3) cell_graphic2_pane_t1_ParamLimits

0xefe4,	// (0x0002f7d3) cell_graphic2_pane_t1

0x5d20,	// (0x0002650f) grid_highlight_pane_cp11_ParamLimits

0x5d20,	// (0x0002650f) grid_highlight_pane_cp11

0x3509,	// (0x00023cf8) bg_button_pane_cp05

0xf02e,	// (0x0002f81d) cell_graphic2_control_pane_g1

0x7670,	// (0x00027e5f) bg_touch_area_indi_pane_g1

0x98a2,	// (0x0002a091) aid_cmod_rocker_key_size

0x98ac,	// (0x0002a09b) aid_cmode_itu_key_size

0x98b6,	// (0x0002a0a5) main_cmode_video_pane

0x98c0,	// (0x0002a0af) main_comp_mode_itu_pane

0x98cc,	// (0x0002a0bb) main_comp_mode_rocker_pane

0x98d8,	// (0x0002a0c7) cell_cmode_rocker_pane_ParamLimits

0x98d8,	// (0x0002a0c7) cell_cmode_rocker_pane

0x98ea,	// (0x0002a0d9) cell_cmode_itu_pane_ParamLimits

0x98ea,	// (0x0002a0d9) cell_cmode_itu_pane

0x3b0d,	// (0x000242fc) bg_button_pane_cp06_ParamLimits

0x3b0d,	// (0x000242fc) bg_button_pane_cp06

0x78ee,	// (0x000280dd) cell_cmode_rocker_pane_g1_ParamLimits

0x78ee,	// (0x000280dd) cell_cmode_rocker_pane_g1

0x8e39,	// (0x00029628) cell_cmode_rocker_pane_g2_ParamLimits

0x8e39,	// (0x00029628) cell_cmode_rocker_pane_g2

0x0001,

0xfd89,	// (0x00030578) cell_cmode_rocker_pane_g_ParamLimits

0xfd89,	// (0x00030578) cell_cmode_rocker_pane_g

0xe436,	// (0x0002ec25) bg_button_pane_cp07

0x98ff,	// (0x0002a0ee) cell_cmode_itu_pane_g1

0x9908,	// (0x0002a0f7) cell_cmode_itu_pane_t1

0x9916,	// (0x0002a105) cell_cmode_itu_pane_t2

0x0001,

0xfd8e,	// (0x0003057d) cell_cmode_itu_pane_t

0x905c,	// (0x0002984b) aid_touch_ctrl_left

0x9064,	// (0x00029853) aid_touch_ctrl_right

0xe436,	// (0x0002ec25) compa_mode_pane

0xf052,	// (0x0002f841) aid_cmod_rocker_key_size_cp

0xf05c,	// (0x0002f84b) aid_cmode_itu_key_size_cp

0x9938,	// (0x0002a127) compa_mode_pane_g1

0x9940,	// (0x0002a12f) compa_mode_pane_g2

0x9948,	// (0x0002a137) compa_mode_pane_g3

0x0002,

0xfd93,	// (0x00030582) compa_mode_pane_g

0xf066,	// (0x0002f855) main_comp_mode_itu_pane_cp

0xf06e,	// (0x0002f85d) main_comp_mode_rocker_pane_cp

0xf076,	// (0x0002f865) cell_cmode_itu_pane_cp_ParamLimits

0xf076,	// (0x0002f865) cell_cmode_itu_pane_cp

0xf08b,	// (0x0002f87a) cell_cmode_rocker_pane_cp_ParamLimits

0xf08b,	// (0x0002f87a) cell_cmode_rocker_pane_cp

0x3b0d,	// (0x000242fc) bg_button_pane_cp06_cp_ParamLimits

0x3b0d,	// (0x000242fc) bg_button_pane_cp06_cp

0x78ee,	// (0x000280dd) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x78ee,	// (0x000280dd) cell_cmode_rocker_pane_g1_cp

0x7670,	// (0x00027e5f) cell_cmode_rocker_pane_g2_cp

0xe436,	// (0x0002ec25) bg_button_pane_cp07_cp

0xf09d,	// (0x0002f88c) cell_cmode_itu_pane_g1_cp

0xf0a6,	// (0x0002f895) cell_cmode_itu_pane_t1_cp

0xf0a6,	// (0x0002f895) cell_cmode_itu_pane_t2_cp

0xdda6,	// (0x0002e595) settings_code_pane_cp2

0x3280,	// (0x00023a6f) bg_popup_window_pane_cp3_ParamLimits

0x3709,	// (0x00023ef8) heading_pane_cp3_ParamLimits

0x3718,	// (0x00023f07) listscroll_popup_graphic_pane_ParamLimits

0x2175,	// (0x00022964) fep_hwr_aid_pane_ParamLimits

0x253e,	// (0x00022d2d) aid_touch_sctrl_top_ParamLimits

0x254b,	// (0x00022d3a) sctrl_sk_top_pane_g1_ParamLimits

0x78ee,	// (0x000280dd) sctrl_sk_top_pane_g2_ParamLimits

0xfcc9,	// (0x000304b8) sctrl_sk_top_pane_g_ParamLimits

0x2558,	// (0x00022d47) sctrl_sk_top_pane_t1_ParamLimits

0x253e,	// (0x00022d2d) aid_touch_sctrl_bottom_ParamLimits

0x2558,	// (0x00022d47) sctrl_sk_bottom_pane_t1_ParamLimits

0x8fa5,	// (0x00029794) aid_area_touch_clock

0xced9,	// (0x0002d6c8) aid_vkb2_area_top_pane_cell_ParamLimits

0xced9,	// (0x0002d6c8) aid_vkb2_area_top_pane_cell

0xcf88,	// (0x0002d777) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcf88,	// (0x0002d777) aid_vkb2_area_bottom_pane_cell

0x9514,	// (0x00029d03) popup_char_count_window

0x9995,	// (0x0002a184) popup_char_count_window_g1

0x999e,	// (0x0002a18d) popup_char_count_window_g2

0x99a7,	// (0x0002a196) popup_char_count_window_g3

0x0002,

0xfd9a,	// (0x00030589) popup_char_count_window_g

0x99b0,	// (0x0002a19f) popup_char_count_window_t1

0x25f1,	// (0x00022de0) popup_fep_char_preview_window_ParamLimits

0x25f1,	// (0x00022de0) popup_fep_char_preview_window

0xcef9,	// (0x0002d6e8) vkb2_top_candi_pane_ParamLimits

0xcef9,	// (0x0002d6e8) vkb2_top_candi_pane

0xf0b4,	// (0x0002f8a3) cell_vkb2_top_candi_pane_ParamLimits

0xf0b4,	// (0x0002f8a3) cell_vkb2_top_candi_pane

0x56ac,	// (0x00025e9b) bg_popup_fep_char_preview_window_ParamLimits

0x56ac,	// (0x00025e9b) bg_popup_fep_char_preview_window

0x2b64,	// (0x00023353) popup_fep_char_preview_window_t1_ParamLimits

0x2b64,	// (0x00023353) popup_fep_char_preview_window_t1

0x9a08,	// (0x0002a1f7) bg_popup_fep_char_preview_window_g1

0x9a10,	// (0x0002a1ff) bg_popup_fep_char_preview_window_g2

0x9a18,	// (0x0002a207) bg_popup_fep_char_preview_window_g3

0x9a49,	// (0x0002a238) bg_popup_fep_char_preview_window_g4

0x9a51,	// (0x0002a240) bg_popup_fep_char_preview_window_g5

0x9a59,	// (0x0002a248) bg_popup_fep_char_preview_window_g6

0x9a61,	// (0x0002a250) bg_popup_fep_char_preview_window_g7

0x9a20,	// (0x0002a20f) bg_popup_fep_char_preview_window_g8

0x9a69,	// (0x0002a258) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda1,	// (0x00030590) bg_popup_fep_char_preview_window_g

0x78ee,	// (0x000280dd) cell_vkb2_top_candi_pane_g1_ParamLimits

0x78ee,	// (0x000280dd) cell_vkb2_top_candi_pane_g1

0x7c05,	// (0x000283f4) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7c05,	// (0x000283f4) cell_vkb2_top_candi_pane_g2

0x7c26,	// (0x00028415) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7c26,	// (0x00028415) cell_vkb2_top_candi_pane_g3

0x2ba6,	// (0x00023395) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2ba6,	// (0x00023395) cell_vkb2_top_candi_pane_g4

0x9a28,	// (0x0002a217) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9a28,	// (0x0002a217) cell_vkb2_top_candi_pane_g5

0x8e39,	// (0x00029628) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8e39,	// (0x00029628) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb6,	// (0x000305a5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb6,	// (0x000305a5) cell_vkb2_top_candi_pane_g

0x2bc7,	// (0x000233b6) cell_vkb2_top_candi_pane_t1

0x1fd5,	// (0x000227c4) aid_size_touch_slider_mark_ParamLimits

0x1fd5,	// (0x000227c4) aid_size_touch_slider_mark

0xedc6,	// (0x0002f5b5) grid_graphic2_catg_pane_ParamLimits

0xedc6,	// (0x0002f5b5) grid_graphic2_catg_pane

0xee82,	// (0x0002f671) popup_grid_graphic2_window_t1_ParamLimits

0xee82,	// (0x0002f671) popup_grid_graphic2_window_t1

0xee98,	// (0x0002f687) popup_grid_graphic2_window_t2_ParamLimits

0xee98,	// (0x0002f687) popup_grid_graphic2_window_t2

0x0001,

0xfd6f,	// (0x0003055e) popup_grid_graphic2_window_t_ParamLimits

0xfd6f,	// (0x0003055e) popup_grid_graphic2_window_t

0x3509,	// (0x00023cf8) bg_button_pane_cp05_ParamLimits

0xf02e,	// (0x0002f81d) cell_graphic2_control_pane_g1_ParamLimits

0xf114,	// (0x0002f903) cell_graphic2_catg_pane_ParamLimits

0xf114,	// (0x0002f903) cell_graphic2_catg_pane

0xe436,	// (0x0002ec25) bg_button_pane_cp12

0xf126,	// (0x0002f915) cell_graphic2_catg_pane_g1

0x8f71,	// (0x00029760) cell_tb_ext_pane_t1_ParamLimits

0x299a,	// (0x00023189) vkb2_top_cell_right_narrow_pane_ParamLimits

0x299a,	// (0x00023189) vkb2_top_cell_right_narrow_pane

0x29b2,	// (0x000231a1) vkb2_top_cell_right_wide_pane_ParamLimits

0x29b2,	// (0x000231a1) vkb2_top_cell_right_wide_pane

0x2167,	// (0x00022956) bg_vkb2_func_pane_ParamLimits

0x2167,	// (0x00022956) bg_vkb2_func_pane

0x2a23,	// (0x00023212) vkb2_top_cell_left_pane_g1_ParamLimits

0x2167,	// (0x00022956) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2167,	// (0x00022956) bg_vkb2_fuc_pane_cp03

0x2a81,	// (0x00023270) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5025,	// (0x00025814) bg_vkb2_func_pane_g1

0x502d,	// (0x0002581c) bg_vkb2_func_pane_g2

0x503d,	// (0x0002582c) bg_vkb2_func_pane_g3

0x5035,	// (0x00025824) bg_vkb2_func_pane_g4

0x5045,	// (0x00025834) bg_vkb2_func_pane_g5

0x504d,	// (0x0002583c) bg_vkb2_func_pane_g6

0x5055,	// (0x00025844) bg_vkb2_func_pane_g7

0x505d,	// (0x0002584c) bg_vkb2_func_pane_g8

0x501d,	// (0x0002580c) bg_vkb2_func_pane_g9

0x0008,

0xfdc3,	// (0x000305b2) bg_vkb2_func_pane_g

0x2167,	// (0x00022956) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2167,	// (0x00022956) bg_vkb2_fuc_pane_cp01

0x2a23,	// (0x00023212) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2a23,	// (0x00023212) vkb2_top_cell_right_wide_pane_g1

0x2167,	// (0x00022956) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2167,	// (0x00022956) bg_vkb2_fuc_pane_cp02

0x2be6,	// (0x000233d5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2be6,	// (0x000233d5) vkb2_top_cell_right_narrow_pane_g1

0xe63f,	// (0x0002ee2e) aid_touch_area_decrease_ParamLimits

0xe63f,	// (0x0002ee2e) aid_touch_area_decrease

0xe679,	// (0x0002ee68) aid_touch_area_increase_ParamLimits

0xe679,	// (0x0002ee68) aid_touch_area_increase

0xe6a1,	// (0x0002ee90) aid_touch_area_mute_ParamLimits

0xe6a1,	// (0x0002ee90) aid_touch_area_mute

0xe6c9,	// (0x0002eeb8) aid_touch_area_slider_ParamLimits

0xe6c9,	// (0x0002eeb8) aid_touch_area_slider

0xe709,	// (0x0002eef8) popup_slider_window_g4_ParamLimits

0xe709,	// (0x0002eef8) popup_slider_window_g4

0xe731,	// (0x0002ef20) popup_slider_window_g5_ParamLimits

0xe731,	// (0x0002ef20) popup_slider_window_g5

0xe765,	// (0x0002ef54) popup_slider_window_g6_ParamLimits

0xe765,	// (0x0002ef54) popup_slider_window_g6

0x8d4f,	// (0x0002953e) popup_slider_window_t2_ParamLimits

0x8d4f,	// (0x0002953e) popup_slider_window_t2

0x0001,

0xfcbd,	// (0x000304ac) popup_slider_window_t_ParamLimits

0xfcbd,	// (0x000304ac) popup_slider_window_t

0xe781,	// (0x0002ef70) slider_pane_ParamLimits

0xe781,	// (0x0002ef70) slider_pane

0x9a8c,	// (0x0002a27b) slider_pane_g1_ParamLimits

0x9a8c,	// (0x0002a27b) slider_pane_g1

0x9aa0,	// (0x0002a28f) slider_pane_g2_ParamLimits

0x9aa0,	// (0x0002a28f) slider_pane_g2

0x9ab6,	// (0x0002a2a5) slider_pane_g3_ParamLimits

0x9ab6,	// (0x0002a2a5) slider_pane_g3

0x0003,

0xfdd6,	// (0x000305c5) slider_pane_g_ParamLimits

0xfdd6,	// (0x000305c5) slider_pane_g

0xcb54,	// (0x0002d343) popup_tb_float_extension_window_ParamLimits

0xcb54,	// (0x0002d343) popup_tb_float_extension_window

0x9ae2,	// (0x0002a2d1) aid_size_cell_tb_float_ext

0xe436,	// (0x0002ec25) bg_popup_sub_window_cp28

0x9aee,	// (0x0002a2dd) grid_tb_float_ext_pane

0x9af8,	// (0x0002a2e7) cell_tb_float_ext_pane_ParamLimits

0x9af8,	// (0x0002a2e7) cell_tb_float_ext_pane

0x9b12,	// (0x0002a301) cell_tb_float_ext_pane_g1

0x9b1b,	// (0x0002a30a) grid_highlight_pane_cp12

0xcc7d,	// (0x0002d46c) cell_last_hwr_side_pane_ParamLimits

0xcc7d,	// (0x0002d46c) cell_last_hwr_side_pane

0x7670,	// (0x00027e5f) cell_last_hwr_side_pane_g1

0x9b24,	// (0x0002a313) cell_last_hwr_side_pane_g2

0x0001,

0xfddf,	// (0x000305ce) cell_last_hwr_side_pane_g

0xd065,	// (0x0002d854) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd065,	// (0x0002d854) vkb2_area_bottom_space_btn_pane

0x78ee,	// (0x000280dd) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x95c9,	// (0x00029db8) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2bc7,	// (0x000233b6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2c06,	// (0x000233f5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2c06,	// (0x000233f5) vkb2_area_bottom_space_btn_pane_g1

0x2c40,	// (0x0002342f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2c40,	// (0x0002342f) vkb2_area_bottom_space_btn_pane_g2

0x2c76,	// (0x00023465) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2c76,	// (0x00023465) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde4,	// (0x000305d3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde4,	// (0x000305d3) vkb2_area_bottom_space_btn_pane_g

0x221c,	// (0x00022a0b) cel_fep_hwr_func_pane_ParamLimits

0x221c,	// (0x00022a0b) cel_fep_hwr_func_pane

0xcc52,	// (0x0002d441) cell_hwr_side_button_pane_ParamLimits

0xcc52,	// (0x0002d441) cell_hwr_side_button_pane

0x8fa5,	// (0x00029794) aid_area_touch_clock_ParamLimits

0x3509,	// (0x00023cf8) bg_uniindi_top_pane_ParamLimits

0x8fb7,	// (0x000297a6) uniindi_top_pane_g1_ParamLimits

0x8fcd,	// (0x000297bc) uniindi_top_pane_g2_ParamLimits

0x8fd9,	// (0x000297c8) uniindi_top_pane_g3_ParamLimits

0x8fea,	// (0x000297d9) uniindi_top_pane_g4_ParamLimits

0xfcf5,	// (0x000304e4) uniindi_top_pane_g_ParamLimits

0x8ff7,	// (0x000297e6) uniindi_top_pane_t1_ParamLimits

0x3509,	// (0x00023cf8) bg_vkb2_func_pane_cp01_ParamLimits

0x3509,	// (0x00023cf8) bg_vkb2_func_pane_cp01

0x9b2d,	// (0x0002a31c) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b2d,	// (0x0002a31c) cel_fep_hwr_func_pane_g1

0x3509,	// (0x00023cf8) bg_vkb2_func_pane_cp02_ParamLimits

0x3509,	// (0x00023cf8) bg_vkb2_func_pane_cp02

0x9b2d,	// (0x0002a31c) cell_hwr_side_button_pane_g1_ParamLimits

0x9b2d,	// (0x0002a31c) cell_hwr_side_button_pane_g1

0x4e9e,	// (0x0002568d) status_pane_g4_ParamLimits

0x4e9e,	// (0x0002568d) status_pane_g4

0x4eb8,	// (0x000256a7) status_pane_t1

0x73b5,	// (0x00027ba4) form2_midp_gauge_slider_cont_pane

0x73bd,	// (0x00027bac) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe07e,	// (0x0002e86d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe090,	// (0x0002e87f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac1,	// (0x000302b0) form2_midp_gauge_slider_pane_t_ParamLimits

0x73f3,	// (0x00027be2) form2_midp_slider_pane_ParamLimits

0x25b9,	// (0x00022da8) aid_size_cell_func_vkb2_ParamLimits

0x25b9,	// (0x00022da8) aid_size_cell_func_vkb2

0x9ace,	// (0x0002a2bd) slider_pane_g4_ParamLimits

0x9ace,	// (0x0002a2bd) slider_pane_g4

0xd0ce,	// (0x0002d8bd) form2_midp_gauge_slider_pane_t2_cp01

0xd0dc,	// (0x0002d8cb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd0dc,	// (0x0002d8cb) form2_midp_gauge_slider_pane_t3_cp01

0x2ceb,	// (0x000234da) form2_midp_slider_pane_cp01

0xe436,	// (0x0002ec25) navi_smil_pane

0x9b66,	// (0x0002a355) navi_smil_pane_g1

0x9b6e,	// (0x0002a35d) navi_smil_pane_t1

0x9b3b,	// (0x0002a32a) form2_midp_slider_pane_g1

0x9b44,	// (0x0002a333) form2_midp_slider_pane_g2

0x9b4c,	// (0x0002a33b) form2_midp_slider_pane_g3

0x9b3b,	// (0x0002a32a) form2_midp_slider_pane_g4

0xf12f,	// (0x0002f91e) form2_midp_slider_pane_g5

0x0004,

0xfded,	// (0x000305dc) form2_midp_slider_pane_g

0x2cb0,	// (0x0002349f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2cb0,	// (0x0002349f) vkb2_area_bottom_space_btn_pane_g4

0xd78a,	// (0x0002df79) lc0_navi_pane_ParamLimits

0xd78a,	// (0x0002df79) lc0_navi_pane

0xd7f4,	// (0x0002dfe3) lc0_stat_indi_pane_ParamLimits

0xd7f4,	// (0x0002dfe3) lc0_stat_indi_pane

0xd809,	// (0x0002dff8) ls0_title_pane_ParamLimits

0xd809,	// (0x0002dff8) ls0_title_pane

0x3b0d,	// (0x000242fc) bg_popup_sub_pane_cp14_ParamLimits

0x8f8c,	// (0x0002977b) list_uniindi_pane_ParamLimits

0x8f98,	// (0x00029787) uniindi_top_pane_ParamLimits

0x9034,	// (0x00029823) list_single_uniindi_pane_g1_ParamLimits

0x9047,	// (0x00029836) list_single_uniindi_pane_t1_ParamLimits

0xd0f9,	// (0x0002d8e8) lc0_stat_clock_pane_ParamLimits

0xd0f9,	// (0x0002d8e8) lc0_stat_clock_pane

0xf13a,	// (0x0002f929) lc0_stat_indi_pane_g1_ParamLimits

0xf13a,	// (0x0002f929) lc0_stat_indi_pane_g1

0xf147,	// (0x0002f936) lc0_stat_indi_pane_g2_ParamLimits

0xf147,	// (0x0002f936) lc0_stat_indi_pane_g2

0x0001,

0xfdf8,	// (0x000305e7) lc0_stat_indi_pane_g_ParamLimits

0xfdf8,	// (0x000305e7) lc0_stat_indi_pane_g

0xd106,	// (0x0002d8f5) lc0_uni_indicator_pane_ParamLimits

0xd106,	// (0x0002d8f5) lc0_uni_indicator_pane

0xf154,	// (0x0002f943) ls0_title_pane_g1_ParamLimits

0xf154,	// (0x0002f943) ls0_title_pane_g1

0xf168,	// (0x0002f957) ls0_title_pane_t1_ParamLimits

0xf168,	// (0x0002f957) ls0_title_pane_t1

0xd113,	// (0x0002d902) lc0_uni_indicator_pane_g1_ParamLimits

0xd113,	// (0x0002d902) lc0_uni_indicator_pane_g1

0x9be0,	// (0x0002a3cf) lc0_stat_clock_pane_t1

0xe436,	// (0x0002ec25) main_ai5_pane

0x9bee,	// (0x0002a3dd) ai5_sk_pane_ParamLimits

0x9bee,	// (0x0002a3dd) ai5_sk_pane

0xf196,	// (0x0002f985) cell_ai5_widget_pane_ParamLimits

0xf196,	// (0x0002f985) cell_ai5_widget_pane

0x9cc4,	// (0x0002a4b3) aid_size_cell_widget_grid

0x9cd2,	// (0x0002a4c1) bg_ai5_widget_pane_ParamLimits

0x9cd2,	// (0x0002a4c1) bg_ai5_widget_pane

0x9d4e,	// (0x0002a53d) cell_ai5_widget_pane_g2

0x9d62,	// (0x0002a551) cell_ai5_widget_pane_g3

0x9d7c,	// (0x0002a56b) cell_ai5_widget_pane_g4

0x9d8c,	// (0x0002a57b) cell_ai5_widget_pane_g5

0x9d9c,	// (0x0002a58b) cell_ai5_widget_pane_g6

0x9da8,	// (0x0002a597) cell_ai5_widget_pane_g7

0x9e14,	// (0x0002a603) cell_ai5_widget_pane_t1_ParamLimits

0x9e14,	// (0x0002a603) cell_ai5_widget_pane_t1

0x9e31,	// (0x0002a620) cell_ai5_widget_pane_t2_ParamLimits

0x9e31,	// (0x0002a620) cell_ai5_widget_pane_t2

0x9e49,	// (0x0002a638) cell_ai5_widget_pane_t3_ParamLimits

0x9e49,	// (0x0002a638) cell_ai5_widget_pane_t3

0x9e61,	// (0x0002a650) cell_ai5_widget_pane_t4_ParamLimits

0x9e61,	// (0x0002a650) cell_ai5_widget_pane_t4

0x9e87,	// (0x0002a676) cell_ai5_widget_pane_t5_ParamLimits

0x9e87,	// (0x0002a676) cell_ai5_widget_pane_t5

0x9ea6,	// (0x0002a695) cell_ai5_widget_pane_t6_ParamLimits

0x9ea6,	// (0x0002a695) cell_ai5_widget_pane_t6

0x9eb8,	// (0x0002a6a7) cell_ai5_widget_pane_t7_ParamLimits

0x9eb8,	// (0x0002a6a7) cell_ai5_widget_pane_t7

0x9ed7,	// (0x0002a6c6) cell_ai5_widget_pane_t8_ParamLimits

0x9ed7,	// (0x0002a6c6) cell_ai5_widget_pane_t8

0x000b,

0xfe18,	// (0x00030607) cell_ai5_widget_pane_t_ParamLimits

0xfe18,	// (0x00030607) cell_ai5_widget_pane_t

0x9f5b,	// (0x0002a74a) grid_ai5_widget_pane

0x3b0d,	// (0x000242fc) highlight_cell_ai5_widget_pane_ParamLimits

0x3b0d,	// (0x000242fc) highlight_cell_ai5_widget_pane

0xf202,	// (0x0002f9f1) ai5_sk_left_pane

0xf20c,	// (0x0002f9fb) ai5_sk_middle_pane

0xf216,	// (0x0002fa05) ai5_sk_right_pane

0x9f87,	// (0x0002a776) bg_ai5_widget_pane_g1_ParamLimits

0x9f87,	// (0x0002a776) bg_ai5_widget_pane_g1

0x9f93,	// (0x0002a782) bg_ai5_widget_pane_g2_ParamLimits

0x9f93,	// (0x0002a782) bg_ai5_widget_pane_g2

0x9f9f,	// (0x0002a78e) bg_ai5_widget_pane_g3_ParamLimits

0x9f9f,	// (0x0002a78e) bg_ai5_widget_pane_g3

0x9fab,	// (0x0002a79a) bg_ai5_widget_pane_g4_ParamLimits

0x9fab,	// (0x0002a79a) bg_ai5_widget_pane_g4

0x9fb7,	// (0x0002a7a6) bg_ai5_widget_pane_g5_ParamLimits

0x9fb7,	// (0x0002a7a6) bg_ai5_widget_pane_g5

0x9fc3,	// (0x0002a7b2) bg_ai5_widget_pane_g6_ParamLimits

0x9fc3,	// (0x0002a7b2) bg_ai5_widget_pane_g6

0x9fcf,	// (0x0002a7be) bg_ai5_widget_pane_g7_ParamLimits

0x9fcf,	// (0x0002a7be) bg_ai5_widget_pane_g7

0x9fdb,	// (0x0002a7ca) bg_ai5_widget_pane_g8_ParamLimits

0x9fdb,	// (0x0002a7ca) bg_ai5_widget_pane_g8

0x9fe7,	// (0x0002a7d6) bg_ai5_widget_pane_g9_ParamLimits

0x9fe7,	// (0x0002a7d6) bg_ai5_widget_pane_g9

0x0008,

0xfe31,	// (0x00030620) bg_ai5_widget_pane_g_ParamLimits

0xfe31,	// (0x00030620) bg_ai5_widget_pane_g

0xa019,	// (0x0002a808) cell_shortcut_ai5_widget_pane_ParamLimits

0xa019,	// (0x0002a808) cell_shortcut_ai5_widget_pane

0x47cf,	// (0x00024fbe) bg_cell_shortcut_ai5_widget_pane

0xa02a,	// (0x0002a819) cell_grid_ai5_widget_pane_g1

0x47cf,	// (0x00024fbe) highlight_cell_shortcut_ai5_widget_pane

0x502d,	// (0x0002581c) ai5_sk_left_pane_g1

0xa033,	// (0x0002a822) ai5_sk_left_pane_g2

0xa03b,	// (0x0002a82a) ai5_sk_left_pane_g3

0xa043,	// (0x0002a832) ai5_sk_left_pane_g4

0x0003,

0xfe44,	// (0x00030633) ai5_sk_left_pane_g

0xa04b,	// (0x0002a83a) ai5_sk_left_pane_t1

0x5025,	// (0x00025814) ai5_sk_right_pane_g1

0xa059,	// (0x0002a848) ai5_sk_right_pane_g2

0xa061,	// (0x0002a850) ai5_sk_right_pane_g3

0xa069,	// (0x0002a858) ai5_sk_right_pane_g4

0x0003,

0xfe4d,	// (0x0003063c) ai5_sk_right_pane_g

0xa071,	// (0x0002a860) ai5_sk_right_pane_t1

0x5025,	// (0x00025814) ai5_sk_middle_pane_g1

0x502d,	// (0x0002581c) ai5_sk_middle_pane_g2

0x5045,	// (0x00025834) ai5_sk_middle_pane_g3

0xa061,	// (0x0002a850) ai5_sk_middle_pane_g4

0xa03b,	// (0x0002a82a) ai5_sk_middle_pane_g5

0xa07f,	// (0x0002a86e) ai5_sk_middle_pane_g6

0xf220,	// (0x0002fa0f) ai5_sk_middle_pane_g7

0x0006,

0xfe56,	// (0x00030645) ai5_sk_middle_pane_g

0xd676,	// (0x0002de65) aid_touch_area_size_lc0_ParamLimits

0xd676,	// (0x0002de65) aid_touch_area_size_lc0

0x23a7,	// (0x00022b96) cell_hwr_candidate_pane_t1_ParamLimits

0x4b6f,	// (0x0002535e) aid_touch_navi_pane

0xd902,	// (0x0002e0f1) status_dt_navi_pane_ParamLimits

0xd902,	// (0x0002e0f1) status_dt_navi_pane

0xd91a,	// (0x0002e109) status_dt_sta_pane_ParamLimits

0xd91a,	// (0x0002e109) status_dt_sta_pane

0xf228,	// (0x0002fa17) dt_sta_controll_pane

0xf235,	// (0x0002fa24) dt_sta_indi_pane

0xf242,	// (0x0002fa31) dt_sta_title_pane

0x3509,	// (0x00023cf8) bg_dt_sta_indi_pane_ParamLimits

0x3509,	// (0x00023cf8) bg_dt_sta_indi_pane

0xf254,	// (0x0002fa43) dt_sta_battery_pane

0xf25c,	// (0x0002fa4b) dt_sta_indi_pane_g1

0xa0d1,	// (0x0002a8c0) dt_sta_indi_pane_g2

0xa0da,	// (0x0002a8c9) dt_sta_indi_pane_g3

0x0002,

0xfe65,	// (0x00030654) dt_sta_indi_pane_g

0xa0e3,	// (0x0002a8d2) dt_sta_signal_pane

0x3b0d,	// (0x000242fc) bg_dt_sta_title_pane_ParamLimits

0x3b0d,	// (0x000242fc) bg_dt_sta_title_pane

0xa0ec,	// (0x0002a8db) dt_sta_title_pane_g1

0xa0f4,	// (0x0002a8e3) dt_sta_title_pane_t1_ParamLimits

0xa0f4,	// (0x0002a8e3) dt_sta_title_pane_t1

0xe436,	// (0x0002ec25) bg_dt_sta_control_pane

0xf265,	// (0x0002fa54) dt_sta_controll_pane_g1

0xa112,	// (0x0002a901) bg_dt_sta_title_pane_g1

0xa11b,	// (0x0002a90a) bg_dt_sta_title_pane_g2

0xa124,	// (0x0002a913) bg_dt_sta_title_pane_g3

0x0002,

0xfe6c,	// (0x0003065b) bg_dt_sta_title_pane_g

0x7670,	// (0x00027e5f) bg_dt_sta_indi_pane_g1

0xa12d,	// (0x0002a91c) dt_sta_signal_pane_g1

0xa135,	// (0x0002a924) dt_sta_signal_pane_g2

0x0001,

0xfe73,	// (0x00030662) dt_sta_signal_pane_g

0xa13d,	// (0x0002a92c) dt_sta_battery_pane_g1

0xa146,	// (0x0002a935) dt_sta_battery_pane_t1

0x7670,	// (0x00027e5f) bg_dt_sta_control_pane_g1

0x42cd,	// (0x00024abc) fep_china_uni_eep_pane

0x42d5,	// (0x00024ac4) fep_china_uni_entry_pane_ParamLimits

0x42e5,	// (0x00024ad4) popup_fep_china_uni_window_g1_ParamLimits

0x42f5,	// (0x00024ae4) popup_fep_china_uni_window_g2_ParamLimits

0x42f5,	// (0x00024ae4) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0002fee7) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0002fee7) popup_fep_china_uni_window_g

0xa155,	// (0x0002a944) fep_china_uni_eep_pane_g1

0xa15d,	// (0x0002a94c) fep_china_uni_eep_pane_t1

0x9b5d,	// (0x0002a34c) aid_touch_area_size_smil_player

0x4cc5,	// (0x000254b4) lc0_clock_pane

0x4eac,	// (0x0002569b) status_pane_g5_ParamLimits

0x4eac,	// (0x0002569b) status_pane_g5

0xc6d6,	// (0x0002cec5) popup_keymap_window

0x4e6a,	// (0x00025659) status_icon_pane

0x9d62,	// (0x0002a551) cell_ai5_widget_pane_g3_ParamLimits

0x9d7c,	// (0x0002a56b) cell_ai5_widget_pane_g4_ParamLimits

0x9d8c,	// (0x0002a57b) cell_ai5_widget_pane_g5_ParamLimits

0x9db4,	// (0x0002a5a3) cell_ai5_widget_pane_g8_ParamLimits

0x9db4,	// (0x0002a5a3) cell_ai5_widget_pane_g8

0x9dc8,	// (0x0002a5b7) cell_ai5_widget_pane_g9_ParamLimits

0x9dc8,	// (0x0002a5b7) cell_ai5_widget_pane_g9

0x9ddc,	// (0x0002a5cb) cell_ai5_widget_pane_g10_ParamLimits

0x9ddc,	// (0x0002a5cb) cell_ai5_widget_pane_g10

0xa16c,	// (0x0002a95b) status_icon_pane_g1

0xe436,	// (0x0002ec25) bg_popup_sub_pane_cp13

0xa174,	// (0x0002a963) popup_keymap_window_t1

0xd60c,	// (0x0002ddfb) control_pane_g6_ParamLimits

0xd60c,	// (0x0002ddfb) control_pane_g6

0xd619,	// (0x0002de08) control_pane_g7_ParamLimits

0xd619,	// (0x0002de08) control_pane_g7

0xd626,	// (0x0002de15) control_pane_g8_ParamLimits

0xd626,	// (0x0002de15) control_pane_g8

0xf228,	// (0x0002fa17) dt_sta_controll_pane_ParamLimits

0xf235,	// (0x0002fa24) dt_sta_indi_pane_ParamLimits

0xf242,	// (0x0002fa31) dt_sta_title_pane_ParamLimits

0x3a45,	// (0x00024234) aid_size_touch_scroll_bar_cale

0x0f38,	// (0x00021727) popup_discreet_window_ParamLimits

0x0f38,	// (0x00021727) popup_discreet_window

0xbf48,	// (0x0002c737) popup_sk_window

0x56ac,	// (0x00025e9b) bg_popup_sub_pane_cp28_ParamLimits

0x56ac,	// (0x00025e9b) bg_popup_sub_pane_cp28

0xa182,	// (0x0002a971) popup_discreet_window_g1_ParamLimits

0xa182,	// (0x0002a971) popup_discreet_window_g1

0xa1a2,	// (0x0002a991) popup_discreet_window_t1_ParamLimits

0xa1a2,	// (0x0002a991) popup_discreet_window_t1

0xa1c0,	// (0x0002a9af) popup_discreet_window_t2_ParamLimits

0xa1c0,	// (0x0002a9af) popup_discreet_window_t2

0x0002,

0xfe78,	// (0x00030667) popup_discreet_window_t_ParamLimits

0xfe78,	// (0x00030667) popup_discreet_window_t

0x2d22,	// (0x00023511) popup_sk_window_g1

0x2d2c,	// (0x0002351b) popup_sk_window_g2

0x0001,

0xfe7f,	// (0x0003066e) popup_sk_window_g

0x2d34,	// (0x00023523) popup_sk_window_t1

0x2d42,	// (0x00023531) popup_sk_window_t1_copy1

0x9d4e,	// (0x0002a53d) cell_ai5_widget_pane_g2_ParamLimits

0x9ee9,	// (0x0002a6d8) cell_ai5_widget_pane_t9_ParamLimits

0x9ee9,	// (0x0002a6d8) cell_ai5_widget_pane_t9

0xe436,	// (0x0002ec25) main_fep_fshwr2_pane

0xd13a,	// (0x0002d929) aid_fshwr2_btn_pane

0xd14a,	// (0x0002d939) aid_fshwr2_syb_pane

0xd15e,	// (0x0002d94d) aid_fshwr2_txt_pane

0xd16e,	// (0x0002d95d) fshwr2_func_candi_pane

0xd18e,	// (0x0002d97d) fshwr2_hwr_syb_pane

0xd1b0,	// (0x0002d99f) fshwr2_icf_pane

0xe436,	// (0x0002ec25) fshwr2_icf_bg_pane

0xd1e0,	// (0x0002d9cf) fshwr2_icf_pane_t1_ParamLimits

0xd1e0,	// (0x0002d9cf) fshwr2_icf_pane_t1

0x41a2,	// (0x00024991) fshwr2_func_candi_pane_g1

0xf26e,	// (0x0002fa5d) fshwr2_func_candi_row_pane_ParamLimits

0xf26e,	// (0x0002fa5d) fshwr2_func_candi_row_pane

0xd1f9,	// (0x0002d9e8) cell_fshwr2_syb_pane_ParamLimits

0xd1f9,	// (0x0002d9e8) cell_fshwr2_syb_pane

0x9b2d,	// (0x0002a31c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9b2d,	// (0x0002a31c) fshwr2_hwr_syb_pane_g1

0xe436,	// (0x0002ec25) bg_popup_call_pane_cp01

0xd21f,	// (0x0002da0e) fshwr2_func_candi_cell_pane_ParamLimits

0xd21f,	// (0x0002da0e) fshwr2_func_candi_cell_pane

0x548d,	// (0x00025c7c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x548d,	// (0x00025c7c) fshwr2_func_candi_cell_bg_pane

0xd26a,	// (0x0002da59) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd26a,	// (0x0002da59) fshwr2_func_candi_cell_pane_g1

0xd2a1,	// (0x0002da90) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd2a1,	// (0x0002da90) fshwr2_func_candi_cell_pane_t1

0xe436,	// (0x0002ec25) bg_button_pane_cp08

0x4af3,	// (0x000252e2) cell_fshwr2_syb_bg_pane

0xd2bc,	// (0x0002daab) cell_fshwr2_syb_bg_pane_g1

0xd2cf,	// (0x0002dabe) cell_fshwr2_syb_bg_pane_t1

0x3b0d,	// (0x000242fc) main_tmo_pane

0xdbd8,	// (0x0002e3c7) uni_indicator_pane_g1_ParamLimits

0xdbee,	// (0x0002e3dd) uni_indicator_pane_g2_ParamLimits

0xdc04,	// (0x0002e3f3) uni_indicator_pane_g3_ParamLimits

0x6206,	// (0x000269f5) uni_indicator_pane_g4_ParamLimits

0x6206,	// (0x000269f5) uni_indicator_pane_g4

0x621a,	// (0x00026a09) uni_indicator_pane_g5_ParamLimits

0x621a,	// (0x00026a09) uni_indicator_pane_g5

0x621a,	// (0x00026a09) uni_indicator_pane_g6_ParamLimits

0x621a,	// (0x00026a09) uni_indicator_pane_g6

0xf8f7,	// (0x000300e6) uni_indicator_pane_g_ParamLimits

0xe61b,	// (0x0002ee0a) popup_tmo_note_window_ParamLimits

0xe61b,	// (0x0002ee0a) popup_tmo_note_window

0x3b0d,	// (0x000242fc) fshwr2_bg_pane

0xd292,	// (0x0002da81) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd292,	// (0x0002da81) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe84,	// (0x00030673) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe84,	// (0x00030673) fshwr2_func_candi_cell_pane_g

0x7670,	// (0x00027e5f) bg_popup_window_pane_cp01

0x2ede,	// (0x000236cd) bg_popup_window_pane_g1_cp01

0xa239,	// (0x0002aa28) bg_popup_window_pane_cp22_ParamLimits

0xa239,	// (0x0002aa28) bg_popup_window_pane_cp22

0xa247,	// (0x0002aa36) listscroll_tmo_link_pane_ParamLimits

0xa247,	// (0x0002aa36) listscroll_tmo_link_pane

0xa287,	// (0x0002aa76) popup_tmo_note_window_g1_ParamLimits

0xa287,	// (0x0002aa76) popup_tmo_note_window_g1

0xa294,	// (0x0002aa83) tmo_note_info_pane_ParamLimits

0xa294,	// (0x0002aa83) tmo_note_info_pane

0xf291,	// (0x0002fa80) list_tmo_note_info_pane_g1_ParamLimits

0xf291,	// (0x0002fa80) list_tmo_note_info_pane_g1

0xa2c5,	// (0x0002aab4) list_tmo_note_info_pane_g2_ParamLimits

0xa2c5,	// (0x0002aab4) list_tmo_note_info_pane_g2

0x0001,

0xfe89,	// (0x00030678) list_tmo_note_info_pane_g_ParamLimits

0xfe89,	// (0x00030678) list_tmo_note_info_pane_g

0xa2e1,	// (0x0002aad0) list_tmo_note_info_text_pane_ParamLimits

0xa2e1,	// (0x0002aad0) list_tmo_note_info_text_pane

0xa362,	// (0x0002ab51) list_tmo_link_pane

0xa36f,	// (0x0002ab5e) scroll_pane_cp20

0xa37c,	// (0x0002ab6b) list_single_tmo_link_pane_ParamLimits

0xa37c,	// (0x0002ab6b) list_single_tmo_link_pane

0xa38c,	// (0x0002ab7b) list_single_tmo_link_pane_t1

0xa39a,	// (0x0002ab89) list_tmo_note_info_text_pane_t1_ParamLimits

0xa39a,	// (0x0002ab89) list_tmo_note_info_text_pane_t1

0xd33c,	// (0x0002db2b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd33c,	// (0x0002db2b) aid_size_touch_scroll_bar_cp01

0xb9ec,	// (0x0002c1db) aid_size_touch_slider_marker

0xbf38,	// (0x0002c727) popup_settings_window_ParamLimits

0xbf38,	// (0x0002c727) popup_settings_window

0x02fd,	// (0x00020aec) popup_candi_list_indi_window

0x4b6f,	// (0x0002535e) aid_touch_navi_pane_ParamLimits

0x2512,	// (0x00022d01) rs_clock_indi_pane

0x251b,	// (0x00022d0a) sctrl_sk_bottom_pane_ParamLimits

0x252c,	// (0x00022d1b) sctrl_sk_top_pane_ParamLimits

0x260b,	// (0x00022dfa) popup_fep_tooltip_window

0x9cc4,	// (0x0002a4b3) aid_size_cell_widget_grid_ParamLimits

0x9d39,	// (0x0002a528) cell_ai5_widget_pane_g1_ParamLimits

0x9d39,	// (0x0002a528) cell_ai5_widget_pane_g1

0x9d9c,	// (0x0002a58b) cell_ai5_widget_pane_g6_ParamLimits

0x9da8,	// (0x0002a597) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdfd,	// (0x000305ec) cell_ai5_widget_pane_g_ParamLimits

0xfdfd,	// (0x000305ec) cell_ai5_widget_pane_g

0x9f18,	// (0x0002a707) cell_ai5_widget_pane_t10_ParamLimits

0x9f18,	// (0x0002a707) cell_ai5_widget_pane_t10

0x9f5b,	// (0x0002a74a) grid_ai5_widget_pane_ParamLimits

0x9ff3,	// (0x0002a7e2) cell_contacts_ai5_widget_pane_ParamLimits

0x9ff3,	// (0x0002a7e2) cell_contacts_ai5_widget_pane

0xa1d5,	// (0x0002a9c4) popup_discreet_window_t3_ParamLimits

0xa1d5,	// (0x0002a9c4) popup_discreet_window_t3

0xd1cc,	// (0x0002d9bb) popup_fshwr2_char_preview_window_ParamLimits

0xd1cc,	// (0x0002d9bb) popup_fshwr2_char_preview_window

0xf2a8,	// (0x0002fa97) tmo_note_info_pane_t1

0xf2bd,	// (0x0002faac) tmo_note_info_pane_t2

0xf2d4,	// (0x0002fac3) tmo_note_info_pane_t3

0xa33e,	// (0x0002ab2d) tmo_note_info_pane_t4

0xa350,	// (0x0002ab3f) tmo_note_info_pane_t5

0x0004,

0xfe8e,	// (0x0003067d) tmo_note_info_pane_t

0xa362,	// (0x0002ab51) list_tmo_link_pane_ParamLimits

0xa36f,	// (0x0002ab5e) scroll_pane_cp20_ParamLimits

0xe436,	// (0x0002ec25) bg_popup_fep_char_preview_window_cp01

0xf2e9,	// (0x0002fad8) popup_fshwr2_char_preview_window_t1

0xa3c1,	// (0x0002abb0) popup_candi_list_indi_window_g1

0xa3ca,	// (0x0002abb9) bg_cell_contacts_ai5_widget_pane

0xa3d6,	// (0x0002abc5) cell_contacts_ai5_widget_pane_g1

0x7d50,	// (0x0002853f) cell_contacts_ai5_widget_pane_g2

0xa3eb,	// (0x0002abda) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe99,	// (0x00030688) cell_contacts_ai5_widget_pane_g

0xa3f7,	// (0x0002abe6) cell_contacts_ai5_widget_pane_t1

0x3b0d,	// (0x000242fc) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa46e,	// (0x0002ac5d) settings_container_pane

0x47cf,	// (0x00024fbe) listscroll_set_pane_copy1

0x6d5a,	// (0x00027549) scroll_pane_cp121_copy1

0x5449,	// (0x00025c38) set_content_pane_copy1

0xa47a,	// (0x0002ac69) aid_height_set_list_copy1_ParamLimits

0xa47a,	// (0x0002ac69) aid_height_set_list_copy1

0x6412,	// (0x00026c01) aid_size_parent_copy1_ParamLimits

0x6412,	// (0x00026c01) aid_size_parent_copy1

0xa486,	// (0x0002ac75) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa486,	// (0x0002ac75) button_value_adjust_pane_cp6_copy1

0x4af3,	// (0x000252e2) list_highlight_pane_cp2_copy1_ParamLimits

0x4af3,	// (0x000252e2) list_highlight_pane_cp2_copy1

0xa49a,	// (0x0002ac89) list_set_pane_copy1_ParamLimits

0xa49a,	// (0x0002ac89) list_set_pane_copy1

0xa409,	// (0x0002abf8) main_pane_set_t1_copy1_ParamLimits

0xa409,	// (0x0002abf8) main_pane_set_t1_copy1

0xa443,	// (0x0002ac32) main_pane_set_t2_copy1_ParamLimits

0xa443,	// (0x0002ac32) main_pane_set_t2_copy1

0xa547,	// (0x0002ad36) main_pane_set_t3_copy1

0xa555,	// (0x0002ad44) main_pane_set_t4_copy1

0xa462,	// (0x0002ac51) set_content_pane_g1_copy1_ParamLimits

0xa462,	// (0x0002ac51) set_content_pane_g1_copy1

0xa563,	// (0x0002ad52) setting_code_pane_copy1

0xa56b,	// (0x0002ad5a) setting_slider_graphic_pane_copy1

0xa56b,	// (0x0002ad5a) setting_slider_pane_copy1

0xa573,	// (0x0002ad62) setting_text_pane_copy1

0xa573,	// (0x0002ad62) setting_volume_pane_copy1

0xa563,	// (0x0002ad52) settings_code_pane_cp2_copy1

0xa57b,	// (0x0002ad6a) settings_code_pane_cp_copy1_ParamLimits

0xa57b,	// (0x0002ad6a) settings_code_pane_cp_copy1

0x2ee7,	// (0x000236d6) volume_set_pane_copy1

0xa58f,	// (0x0002ad7e) volume_set_pane_g10_copy1

0xa597,	// (0x0002ad86) volume_set_pane_g1_copy1

0xa59f,	// (0x0002ad8e) volume_set_pane_g2_copy1

0xa5a7,	// (0x0002ad96) volume_set_pane_g3_copy1

0xa5af,	// (0x0002ad9e) volume_set_pane_g4_copy1

0xa5b7,	// (0x0002ada6) volume_set_pane_g5_copy1

0xa5bf,	// (0x0002adae) volume_set_pane_g6_copy1

0xa5c7,	// (0x0002adb6) volume_set_pane_g7_copy1

0xa5cf,	// (0x0002adbe) volume_set_pane_g8_copy1

0xa5d7,	// (0x0002adc6) volume_set_pane_g9_copy1

0x3280,	// (0x00023a6f) bg_set_opt_pane_cp_copy1_ParamLimits

0x3280,	// (0x00023a6f) bg_set_opt_pane_cp_copy1

0x2eef,	// (0x000236de) setting_slider_pane_t1_copy1_ParamLimits

0x2eef,	// (0x000236de) setting_slider_pane_t1_copy1

0x2f0e,	// (0x000236fd) setting_slider_pane_t2_copy1_ParamLimits

0x2f0e,	// (0x000236fd) setting_slider_pane_t2_copy1

0x2f28,	// (0x00023717) setting_slider_pane_t3_copy1_ParamLimits

0x2f28,	// (0x00023717) setting_slider_pane_t3_copy1

0x2f40,	// (0x0002372f) slider_set_pane_copy1_ParamLimits

0x2f40,	// (0x0002372f) slider_set_pane_copy1

0x3b65,	// (0x00024354) set_opt_bg_pane_g1_copy2

0x3b6d,	// (0x0002435c) set_opt_bg_pane_g2_copy2

0xa5df,	// (0x0002adce) set_opt_bg_pane_g3_copy2

0x3b7d,	// (0x0002436c) set_opt_bg_pane_g4_copy2

0x3b85,	// (0x00024374) set_opt_bg_pane_g5_copy2

0x3b8d,	// (0x0002437c) set_opt_bg_pane_g6_copy2

0xa5e9,	// (0x0002add8) set_opt_bg_pane_g7_copy2

0xa5f1,	// (0x0002ade0) set_opt_bg_pane_g8_copy2

0xa5fb,	// (0x0002adea) set_opt_bg_pane_g9_copy2

0x2f56,	// (0x00023745) aid_size_touch_slider_mark_copy1_ParamLimits

0x2f56,	// (0x00023745) aid_size_touch_slider_mark_copy1

0xa605,	// (0x0002adf4) slider_set_pane_g1_copy1

0x2f6a,	// (0x00023759) slider_set_pane_g2_copy1

0x1ff5,	// (0x000227e4) slider_set_pane_g3_copy1_ParamLimits

0x1ff5,	// (0x000227e4) slider_set_pane_g3_copy1

0x2009,	// (0x000227f8) slider_set_pane_g4_copy1_ParamLimits

0x2009,	// (0x000227f8) slider_set_pane_g4_copy1

0x2021,	// (0x00022810) slider_set_pane_g5_copy1_ParamLimits

0x2021,	// (0x00022810) slider_set_pane_g5_copy1

0x1ff5,	// (0x000227e4) slider_set_pane_g6_copy1_ParamLimits

0x1ff5,	// (0x000227e4) slider_set_pane_g6_copy1

0x2f72,	// (0x00023761) slider_set_pane_g7_copy1_ParamLimits

0x2f72,	// (0x00023761) slider_set_pane_g7_copy1

0x31a0,	// (0x0002398f) bg_set_opt_pane_cp2_copy1

0xa60e,	// (0x0002adfd) setting_slider_graphic_pane_g1_copy1

0xa617,	// (0x0002ae06) setting_slider_graphic_pane_t1_copy1

0xa627,	// (0x0002ae16) setting_slider_graphic_pane_t2_copy1

0xa637,	// (0x0002ae26) slider_set_pane_cp_copy1

0xa647,	// (0x0002ae36) input_focus_pane_cp1_copy1

0xa650,	// (0x0002ae3f) list_set_text_pane_copy1

0xa658,	// (0x0002ae47) setting_text_pane_g1_copy1

0xf433,	// (0x0002fc22) set_text_pane_t1_copy1

0xa647,	// (0x0002ae36) input_focus_pane_cp2_copy1

0xa658,	// (0x0002ae47) setting_code_pane_g1_copy1

0xa661,	// (0x0002ae50) setting_code_pane_t1_copy1

0x6b82,	// (0x00027371) list_set_graphic_pane_copy1

0x31a0,	// (0x0002398f) bg_set_opt_pane_cp4_copy1

0x44cc,	// (0x00024cbb) list_set_graphic_pane_g1_copy1_ParamLimits

0x44cc,	// (0x00024cbb) list_set_graphic_pane_g1_copy1

0xa66f,	// (0x0002ae5e) list_set_graphic_pane_g2_copy1

0x44e4,	// (0x00024cd3) list_set_graphic_pane_t1_copy1_ParamLimits

0x44e4,	// (0x00024cd3) list_set_graphic_pane_t1_copy1

0x7670,	// (0x00027e5f) rs_clock_indi_pane_g1

0xa677,	// (0x0002ae66) rs_clock_indi_pane_t1

0xa685,	// (0x0002ae74) rs_indi_pane

0xa68d,	// (0x0002ae7c) rs_indi_pane_g1

0xa696,	// (0x0002ae85) rs_indi_pane_g2

0xa69f,	// (0x0002ae8e) rs_indi_pane_g3

0x0002,

0xfea0,	// (0x0003068f) rs_indi_pane_g

0x47cf,	// (0x00024fbe) bg_popup_preview_window_pane_cp03

0xa6a8,	// (0x0002ae97) popup_fep_tooltip_window_t1

0x8310,	// (0x00028aff) popup_note2_window_g2_ParamLimits

0x8310,	// (0x00028aff) popup_note2_window_g2

0x0001,

0xfc2d,	// (0x0003041c) popup_note2_window_g_ParamLimits

0xfc2d,	// (0x0003041c) popup_note2_window_g

0x880b,	// (0x00028ffa) bg_popup_sub_pane_cp11_ParamLimits

0x8818,	// (0x00029007) cell_ai3_links_pane_g1_ParamLimits

0x882f,	// (0x0002901e) cell_ai3_links_pane_t1

0xf433,	// (0x0002fc22) set_text_pane_t1_copy1_ParamLimits

0x46d7,	// (0x00024ec6) cell_graphic_popup_pane_cp2_ParamLimits

0x46d7,	// (0x00024ec6) cell_graphic_popup_pane_cp2

0xa6b6,	// (0x0002aea5) cell_graphic_popup_pane_g1_cp2

0x3858,	// (0x00024047) cell_graphic_popup_pane_g2_cp2

0xa6be,	// (0x0002aead) cell_graphic_popup_pane_g3_cp2

0xa6c6,	// (0x0002aeb5) cell_graphic_popup_pane_t2_cp2

0x3869,	// (0x00024058) grid_highlight_pane_cp3_cp2

0x3ebd,	// (0x000246ac) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3b0d,	// (0x000242fc) main_tmo_pane_ParamLimits

0xe60f,	// (0x0002edfe) popup_tmo_big_image_note_window

0x9d28,	// (0x0002a517) cell_ai5_widget_list_pane

0x9d30,	// (0x0002a51f) cell_ai5_widget_lrg_icon_pane

0xf2a8,	// (0x0002fa97) tmo_note_info_pane_t1_ParamLimits

0xf2bd,	// (0x0002faac) tmo_note_info_pane_t2_ParamLimits

0xf2d4,	// (0x0002fac3) tmo_note_info_pane_t3_ParamLimits

0xa33e,	// (0x0002ab2d) tmo_note_info_pane_t4_ParamLimits

0xa350,	// (0x0002ab3f) tmo_note_info_pane_t5_ParamLimits

0xfe8e,	// (0x0003067d) tmo_note_info_pane_t_ParamLimits

0xa46e,	// (0x0002ac5d) settings_container_pane_ParamLimits

0xa63f,	// (0x0002ae2e) indicator_popup_pane_cp5

0xa63f,	// (0x0002ae2e) indicator_popup_pane_cp6

0x6b82,	// (0x00027371) list_set_graphic_pane_copy1_ParamLimits

0xe436,	// (0x0002ec25) bg_popup_window_pane_cp23

0xa6d4,	// (0x0002aec3) popup_tmo_big_image_note_window_g1

0xa6de,	// (0x0002aecd) popup_tmo_big_image_note_window_t1

0xa6ee,	// (0x0002aedd) popup_tmo_big_image_note_window_t2

0xa6fe,	// (0x0002aeed) popup_tmo_big_image_note_window_t3

0x0002,

0xfea7,	// (0x00030696) popup_tmo_big_image_note_window_t

0x7670,	// (0x00027e5f) cell_ai5_widget_lrg_icon_pane_g1

0xa70e,	// (0x0002aefd) cell_ai5_widget_lrg_icon_pane_t1

0xa71c,	// (0x0002af0b) cell_ai5_widget_list_row_pane_ParamLimits

0xa71c,	// (0x0002af0b) cell_ai5_widget_list_row_pane

0xa733,	// (0x0002af22) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa733,	// (0x0002af22) cell_ai5_widget_list_row_pane_g1

0xa740,	// (0x0002af2f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa740,	// (0x0002af2f) cell_ai5_widget_list_row_pane_t1

0xa771,	// (0x0002af60) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa771,	// (0x0002af60) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeae,	// (0x0003069d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeae,	// (0x0003069d) cell_ai5_widget_list_row_pane_t

0xe436,	// (0x0002ec25) main_fep_vtchi_ss_pane

0xa7c1,	// (0x0002afb0) popup_fep_char_pre_window

0xa7c9,	// (0x0002afb8) popup_fep_ituss_window

0xf321,	// (0x0002fb10) popup_fep_vkbss_window

0x4af3,	// (0x000252e2) grid_vkbss_keypad_pane_ParamLimits

0x4af3,	// (0x000252e2) grid_vkbss_keypad_pane

0xa835,	// (0x0002b024) ituss_keypad_pane

0x2f92,	// (0x00023781) aid_vkbss_key_offset_ParamLimits

0x2f92,	// (0x00023781) aid_vkbss_key_offset

0xd2e5,	// (0x0002dad4) cell_vkbss_key_pane_ParamLimits

0xd2e5,	// (0x0002dad4) cell_vkbss_key_pane

0xa841,	// (0x0002b030) bg_cell_vkbss_key_g1_ParamLimits

0xa841,	// (0x0002b030) bg_cell_vkbss_key_g1

0xf32e,	// (0x0002fb1d) cell_vkbss_key_3p_pane_ParamLimits

0xf32e,	// (0x0002fb1d) cell_vkbss_key_3p_pane

0xf364,	// (0x0002fb53) cell_vkbss_key_g1_ParamLimits

0xf364,	// (0x0002fb53) cell_vkbss_key_g1

0xf39a,	// (0x0002fb89) cell_vkbss_key_t1_ParamLimits

0xf39a,	// (0x0002fb89) cell_vkbss_key_t1

0x2ffc,	// (0x000237eb) cell_ituss_key_pane_ParamLimits

0x2ffc,	// (0x000237eb) cell_ituss_key_pane

0xa915,	// (0x0002b104) bg_cell_ituss_key_g1_ParamLimits

0xa915,	// (0x0002b104) bg_cell_ituss_key_g1

0xa921,	// (0x0002b110) cell_ituss_key_pane_g1_ParamLimits

0xa921,	// (0x0002b110) cell_ituss_key_pane_g1

0x300d,	// (0x000237fc) cell_ituss_key_pane_g2_ParamLimits

0x300d,	// (0x000237fc) cell_ituss_key_pane_g2

0x0005,

0xfeb5,	// (0x000306a4) cell_ituss_key_pane_g_ParamLimits

0xfeb5,	// (0x000306a4) cell_ituss_key_pane_g

0x3091,	// (0x00023880) cell_ituss_key_t1_ParamLimits

0x3091,	// (0x00023880) cell_ituss_key_t1

0x30cb,	// (0x000238ba) cell_ituss_key_t2_ParamLimits

0x30cb,	// (0x000238ba) cell_ituss_key_t2

0x30fd,	// (0x000238ec) cell_ituss_key_t3_ParamLimits

0x30fd,	// (0x000238ec) cell_ituss_key_t3

0x312e,	// (0x0002391d) cell_ituss_key_t4_ParamLimits

0x312e,	// (0x0002391d) cell_ituss_key_t4

0x0004,

0xfec2,	// (0x000306b1) cell_ituss_key_t_ParamLimits

0xfec2,	// (0x000306b1) cell_ituss_key_t

0xf3f6,	// (0x0002fbe5) cell_vkbss_key_3p_pane_g1

0xf3fe,	// (0x0002fbed) cell_vkbss_key_3p_pane_g2

0xf406,	// (0x0002fbf5) cell_vkbss_key_3p_pane_g3

0x0002,

0xfecd,	// (0x000306bc) cell_vkbss_key_3p_pane_g

0x47cf,	// (0x00024fbe) bg_popup_fep_char_preview_window_cp02

0xa95f,	// (0x0002b14e) popup_fep_char_pre_window_t1

0xf1f8,	// (0x0002f9e7) main_ai5_sk_pane

0xa3ca,	// (0x0002abb9) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3d6,	// (0x0002abc5) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7d50,	// (0x0002853f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3eb,	// (0x0002abda) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe99,	// (0x00030688) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3f7,	// (0x0002abe6) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3b0d,	// (0x000242fc) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf40e,	// (0x0002fbfd) main_ai5_sk_pane_g1

0x54e5,	// (0x00025cd4) popup_query_code_window_g1

0xf312,	// (0x0002fb01) popup_fep_vkb_icf_pane

0xa80c,	// (0x0002affb) popup_fep_vtchi_icf_pane

0xa976,	// (0x0002b165) bg_icf_pane

0xa976,	// (0x0002b165) list_vkb_icf_pane

0xa982,	// (0x0002b171) bg_icf_pane_cp01

0xa995,	// (0x0002b184) vtchi_icf_list_pane

0xf4cf,	// (0x0002fcbe) list_vkb_icf_pane_t1_ParamLimits

0xf4cf,	// (0x0002fcbe) list_vkb_icf_pane_t1

0xaa13,	// (0x0002b202) vtchi_icf_list_pane_t1_ParamLimits

0xaa13,	// (0x0002b202) vtchi_icf_list_pane_t1

0xa7c9,	// (0x0002afb8) popup_fep_ituss_window_ParamLimits

0xa80c,	// (0x0002affb) popup_fep_vtchi_icf_pane_ParamLimits

0xa835,	// (0x0002b024) ituss_keypad_pane_ParamLimits

0x2f88,	// (0x00023777) ituss_sks_pane

0xa976,	// (0x0002b165) bg_icf_pane_ParamLimits

0xf2f7,	// (0x0002fae6) icf_edit_indi_pane_ParamLimits

0xf2f7,	// (0x0002fae6) icf_edit_indi_pane

0xa976,	// (0x0002b165) list_vkb_icf_pane_ParamLimits

0xa982,	// (0x0002b171) bg_icf_pane_cp01_ParamLimits

0xa7b4,	// (0x0002afa3) icf_edit_indi_pane_cp01_ParamLimits

0xa7b4,	// (0x0002afa3) icf_edit_indi_pane_cp01

0xa995,	// (0x0002b184) vtchi_query_pane

0x9b2d,	// (0x0002a31c) icf_edit_indi_pane_g1_ParamLimits

0x9b2d,	// (0x0002a31c) icf_edit_indi_pane_g1

0xf4e6,	// (0x0002fcd5) icf_edit_indi_pane_g2_ParamLimits

0xf4e6,	// (0x0002fcd5) icf_edit_indi_pane_g2

0x0001,

0xfef8,	// (0x000306e7) icf_edit_indi_pane_g_ParamLimits

0xfef8,	// (0x000306e7) icf_edit_indi_pane_g

0xf4fa,	// (0x0002fce9) icf_edit_indi_pane_t1

0xaa31,	// (0x0002b220) bg_input_focus_pane_cp042

0x3a3c,	// (0x0002422b) vtchi_button_pane

0xaa3a,	// (0x0002b229) vtchi_query_pane_t1

0xaa48,	// (0x0002b237) vtchi_query_pane_t2

0xaa56,	// (0x0002b245) vtchi_query_pane_t3

0x0002,

0xfee7,	// (0x000306d6) vtchi_query_pane_t

0xe436,	// (0x0002ec25) bg_button_pane_cp13

0xaa64,	// (0x0002b253) vtchi_button_pane_g1

0x3171,	// (0x00023960) ituss_sks_pane_g1

0x317c,	// (0x0002396b) ituss_sks_pane_g2

0x0001,

0xfeee,	// (0x000306dd) ituss_sks_pane_g

0xaa6c,	// (0x0002b25b) ituss_sks_pane_t1

0xaa7a,	// (0x0002b269) ituss_sks_pane_t2

0x0001,

0xfef3,	// (0x000306e2) ituss_sks_pane_t

0x70f2,	// (0x000278e1) indicator_nsta_pane_cp_g1

0x70fb,	// (0x000278ea) indicator_nsta_pane_cp_g2

0x7103,	// (0x000278f2) indicator_nsta_pane_cp_g3

0x710b,	// (0x000278fa) indicator_nsta_pane_cp_g4

0x70fb,	// (0x000278ea) indicator_nsta_pane_cp_g5

0x7103,	// (0x000278f2) indicator_nsta_pane_cp_g6

0x0005,

0xfa77,	// (0x00030266) indicator_nsta_pane_cp_g

0xf00f,	// (0x0002f7fe) cell_graphic2_pane_t2_ParamLimits

0xf00f,	// (0x0002f7fe) cell_graphic2_pane_t2

0x0001,

0xfd84,	// (0x00030573) cell_graphic2_pane_t_ParamLimits

0xfd84,	// (0x00030573) cell_graphic2_pane_t

0xf044,	// (0x0002f833) cell_graphic2_control_pane_t1

0xd4f9,	// (0x0002dce8) signal_pane_g3_ParamLimits

0xd4f9,	// (0x0002dce8) signal_pane_g3

0xd50d,	// (0x0002dcfc) signal_pane_g4_ParamLimits

0xd50d,	// (0x0002dcfc) signal_pane_g4

0xa783,	// (0x0002af72) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa783,	// (0x0002af72) cell_ai5_widget_list_row_pane_t3

0xa935,	// (0x0002b124) cell_ituss_key_pane_t1_ParamLimits

0xa935,	// (0x0002b124) cell_ituss_key_pane_t1

0x5122,	// (0x00025911) form_field_data_wide_pane_vc_t2_ParamLimits

0x5122,	// (0x00025911) form_field_data_wide_pane_vc_t2

0x5136,	// (0x00025925) form_field_data_wide_pane_vc_t3_ParamLimits

0x5136,	// (0x00025925) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0002ffce) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0002ffce) form_field_data_wide_pane_vc_t

0x6d9c,	// (0x0002758b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6d9c,	// (0x0002758b) form_field_slider_wide_pane_vc_t3

0x6e7a,	// (0x00027669) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6e7a,	// (0x00027669) form_field_popup_wide_pane_vc_t2

0x6e91,	// (0x00027680) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6e91,	// (0x00027680) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa66,	// (0x00030255) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x00030255) form_field_popup_wide_pane_vc_t

0xd13a,	// (0x0002d929) aid_fshwr2_btn_pane_ParamLimits

0xd14a,	// (0x0002d939) aid_fshwr2_syb_pane_ParamLimits

0xd15e,	// (0x0002d94d) aid_fshwr2_txt_pane_ParamLimits

0x3b0d,	// (0x000242fc) fshwr2_bg_pane_ParamLimits

0xd16e,	// (0x0002d95d) fshwr2_func_candi_pane_ParamLimits

0xd18e,	// (0x0002d97d) fshwr2_hwr_syb_pane_ParamLimits

0xd1b0,	// (0x0002d99f) fshwr2_icf_pane_ParamLimits

0x088a,	// (0x00021079) list_double_graphic_pane_vc_g4_ParamLimits

0x088a,	// (0x00021079) list_double_graphic_pane_vc_g4

0x302d,	// (0x0002381c) cell_ituss_key_pane_g3_ParamLimits

0x302d,	// (0x0002381c) cell_ituss_key_pane_g3

0x315f,	// (0x0002394e) cell_ituss_key_t5_ParamLimits

0x315f,	// (0x0002394e) cell_ituss_key_t5

0xf321,	// (0x0002fb10) popup_fep_vkbss_window_ParamLimits

0x9cbb,	// (0x0002a4aa) aid_cell_ai5_quarter

0xf4fa,	// (0x0002fce9) icf_edit_indi_pane_t1_ParamLimits

0x35b1,	// (0x00023da0) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x35b1,	// (0x00023da0) aid_tch_indicator_popup_pane_cp2

0x35c4,	// (0x00023db3) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x35c4,	// (0x00023db3) aid_tch_query_popup_data_pane_cp2

0x548d,	// (0x00025c7c) aid_tch_query_popup_pane_ParamLimits

0x548d,	// (0x00025c7c) aid_tch_query_popup_pane

0x548d,	// (0x00025c7c) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x548d,	// (0x00025c7c) aid_tch_query_popup_data_pane_cp1

0x4af3,	// (0x000252e2) cell_fshwr2_syb_bg_pane_ParamLimits

0xd2bc,	// (0x0002daab) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd2cf,	// (0x0002dabe) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf312,	// (0x0002fb01) popup_fep_vkb_icf_pane_ParamLimits

0xd0c6,	// (0x0002d8b5) bg_popup_fep_char_preview_window_g10

0x9df0,	// (0x0002a5df) cell_ai5_widget_pane_g11_ParamLimits

0x9df0,	// (0x0002a5df) cell_ai5_widget_pane_g11

0x9dfc,	// (0x0002a5eb) cell_ai5_widget_pane_g12_ParamLimits

0x9dfc,	// (0x0002a5eb) cell_ai5_widget_pane_g12

0x9e08,	// (0x0002a5f7) cell_ai5_widget_pane_g13_ParamLimits

0x9e08,	// (0x0002a5f7) cell_ai5_widget_pane_g13

0x9f37,	// (0x0002a726) cell_ai5_widget_pane_t11_ParamLimits

0x9f37,	// (0x0002a726) cell_ai5_widget_pane_t11

0x9f49,	// (0x0002a738) cell_ai5_widget_pane_t12_ParamLimits

0x9f49,	// (0x0002a738) cell_ai5_widget_pane_t12

0x3039,	// (0x00023828) cell_ituss_key_pane_g4_ParamLimits

0x3039,	// (0x00023828) cell_ituss_key_pane_g4

0x3055,	// (0x00023844) cell_ituss_key_pane_g5_ParamLimits

0x3055,	// (0x00023844) cell_ituss_key_pane_g5

0x3071,	// (0x00023860) cell_ituss_key_pane_g6_ParamLimits

0x3071,	// (0x00023860) cell_ituss_key_pane_g6

0x501d,	// (0x0002580c) bg_icf_pane_g1

0xf417,	// (0x0002fc06) bg_icf_pane_g2

0xf421,	// (0x0002fc10) bg_icf_pane_g3

0xf429,	// (0x0002fc18) bg_icf_pane_g4

0xf49f,	// (0x0002fc8e) bg_icf_pane_g5

0xf4a9,	// (0x0002fc98) bg_icf_pane_g6

0xf4b3,	// (0x0002fca2) bg_icf_pane_g7

0xf4bb,	// (0x0002fcaa) bg_icf_pane_g8

0xf4c5,	// (0x0002fcb4) bg_icf_pane_g9

0x0008,

0xfed4,	// (0x000306c3) bg_icf_pane_g

0xa822,	// (0x0002b011) popup_hyb_candi_window_ParamLimits

0xa822,	// (0x0002b011) popup_hyb_candi_window

0x5091,	// (0x00025880) bg_popup_sub_pane_cp01_ParamLimits

0x5091,	// (0x00025880) bg_popup_sub_pane_cp01

0xaab5,	// (0x0002b2a4) entry_hyb_candi_pane_ParamLimits

0xaab5,	// (0x0002b2a4) entry_hyb_candi_pane

0xaac4,	// (0x0002b2b3) grid_hyb_candi_pane_ParamLimits

0xaac4,	// (0x0002b2b3) grid_hyb_candi_pane

0xaad9,	// (0x0002b2c8) grid_hyb_phrase_pane_ParamLimits

0xaad9,	// (0x0002b2c8) grid_hyb_phrase_pane

0xaae8,	// (0x0002b2d7) cell_hyb_candi_pane_ParamLimits

0xaae8,	// (0x0002b2d7) cell_hyb_candi_pane

0xab0b,	// (0x0002b2fa) cell_hyb_candi_scroll_pane

0x41a2,	// (0x00024991) cell_hyb_candi_pane_g1

0xab14,	// (0x0002b303) cell_hyb_candi_pane_t1

0xab22,	// (0x0002b311) cell_hyb_phrase_pane

0x41a2,	// (0x00024991) cell_hyb_phrase_pane_g1

0xab2b,	// (0x0002b31a) cell_hyb_phrase_pane_t1

0xab39,	// (0x0002b328) entry_hyb_candi_pane_t1

0x47cf,	// (0x00024fbe) input_focus_pane_cp06

0xab47,	// (0x0002b336) cell_hyb_candi_scroll_pane_g1

0xab4f,	// (0x0002b33e) cell_hyb_candi_scroll_pane_g1_aid

0xab57,	// (0x0002b346) cell_hyb_candi_scroll_pane_g2

0xab5f,	// (0x0002b34e) cell_hyb_candi_scroll_pane_g2_aid

0xab67,	// (0x0002b356) cell_hyb_candi_scroll_pane_g3

0xab6f,	// (0x0002b35e) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small

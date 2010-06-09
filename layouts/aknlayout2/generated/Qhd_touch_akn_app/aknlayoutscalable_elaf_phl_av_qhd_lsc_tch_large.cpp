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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003eb23 };

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
0xd0d0,	// (0x0004bbf3) Screen

0xd0dc,	// (0x0004bbff) application_window_ParamLimits

0xd0dc,	// (0x0004bbff) application_window

0x37bd,	// (0x000422e0) screen_g1

0xbf4f,	// (0x0004aa72) area_bottom_pane_ParamLimits

0xbf4f,	// (0x0004aa72) area_bottom_pane

0x1278,	// (0x0003fd9b) area_top_pane_ParamLimits

0x1278,	// (0x0003fd9b) area_top_pane

0x130c,	// (0x0003fe2f) main_pane_ParamLimits

0x130c,	// (0x0003fe2f) main_pane

0x37c7,	// (0x000422ea) misc_graphics

0xd818,	// (0x0004c33b) battery_pane_ParamLimits

0xd818,	// (0x0004c33b) battery_pane

0x5e66,	// (0x00044989) bg_status_flat_pane_g8

0x5e6e,	// (0x00044991) bg_status_flat_pane_g9

0x5254,	// (0x00043d77) context_pane_ParamLimits

0x5254,	// (0x00043d77) context_pane

0xd983,	// (0x0004c4a6) navi_pane_ParamLimits

0xd983,	// (0x0004c4a6) navi_pane

0xda01,	// (0x0004c524) signal_pane_ParamLimits

0xda01,	// (0x0004c524) signal_pane

0x0008,

0xf879,	// (0x0004e39c) bg_status_flat_pane_g

0xda91,	// (0x0004c5b4) status_pane_g1_ParamLimits

0xda91,	// (0x0004c5b4) status_pane_g1

0xdaa7,	// (0x0004c5ca) status_pane_g2_ParamLimits

0xdaa7,	// (0x0004c5ca) status_pane_g2

0x547b,	// (0x00043f9e) status_pane_g3_ParamLimits

0x547b,	// (0x00043f9e) status_pane_g3

0x0004,

0xf7a5,	// (0x0004e2c8) status_pane_g_ParamLimits

0xf7a5,	// (0x0004e2c8) status_pane_g

0xdab3,	// (0x0004c5d6) title_pane_ParamLimits

0xdab3,	// (0x0004c5d6) title_pane

0xdb16,	// (0x0004c639) uni_indicator_pane_ParamLimits

0xdb16,	// (0x0004c639) uni_indicator_pane

0x50b1,	// (0x00043bd4) bg_list_pane_ParamLimits

0x50b1,	// (0x00043bd4) bg_list_pane

0xd78b,	// (0x0004c2ae) find_pane

0xc30a,	// (0x0004ae2d) listscroll_app_pane_ParamLimits

0xc30a,	// (0x0004ae2d) listscroll_app_pane

0x50e2,	// (0x00043c05) listscroll_form_pane

0xc31e,	// (0x0004ae41) listscroll_gen_pane_ParamLimits

0xc31e,	// (0x0004ae41) listscroll_gen_pane

0x1cc5,	// (0x000407e8) listscroll_set_pane

0x69e7,	// (0x0004550a) main_idle_act_pane

0x4dad,	// (0x000438d0) main_idle_trad_pane

0x4dad,	// (0x000438d0) main_list_empty_pane

0x50fc,	// (0x00043c1f) main_midp_pane

0x5108,	// (0x00043c2b) main_pane_g1_ParamLimits

0x5108,	// (0x00043c2b) main_pane_g1

0xc332,	// (0x0004ae55) popup_ai_message_window_ParamLimits

0xc332,	// (0x0004ae55) popup_ai_message_window

0xc3c3,	// (0x0004aee6) popup_fep_china_uni_window_ParamLimits

0xc3c3,	// (0x0004aee6) popup_fep_china_uni_window

0x1dcf,	// (0x000408f2) popup_fep_japan_candidate_window_ParamLimits

0x1dcf,	// (0x000408f2) popup_fep_japan_candidate_window

0x1def,	// (0x00040912) popup_fep_japan_predictive_window_ParamLimits

0x1def,	// (0x00040912) popup_fep_japan_predictive_window

0xc41f,	// (0x0004af42) popup_find_window

0xc43c,	// (0x0004af5f) popup_grid_graphic_window_ParamLimits

0xc43c,	// (0x0004af5f) popup_grid_graphic_window

0x1e56,	// (0x00040979) popup_large_graphic_colour_window

0xc4da,	// (0x0004affd) popup_menu_window_ParamLimits

0xc4da,	// (0x0004affd) popup_menu_window

0xc6ac,	// (0x0004b1cf) popup_note_image_window

0xc672,	// (0x0004b195) popup_note_wait_window_ParamLimits

0xc672,	// (0x0004b195) popup_note_wait_window

0xc6c4,	// (0x0004b1e7) popup_note_window_ParamLimits

0xc6c4,	// (0x0004b1e7) popup_note_window

0xc76a,	// (0x0004b28d) popup_query_code_window_ParamLimits

0xc76a,	// (0x0004b28d) popup_query_code_window

0x209e,	// (0x00040bc1) popup_query_data_code_window_ParamLimits

0x209e,	// (0x00040bc1) popup_query_data_code_window

0xc7a4,	// (0x0004b2c7) popup_query_data_window_ParamLimits

0xc7a4,	// (0x0004b2c7) popup_query_data_window

0xc826,	// (0x0004b349) popup_query_sat_info_window_ParamLimits

0xc826,	// (0x0004b349) popup_query_sat_info_window

0xc8bd,	// (0x0004b3e0) popup_snote_single_graphic_window_ParamLimits

0xc8bd,	// (0x0004b3e0) popup_snote_single_graphic_window

0xc8bd,	// (0x0004b3e0) popup_snote_single_text_window_ParamLimits

0xc8bd,	// (0x0004b3e0) popup_snote_single_text_window

0x2125,	// (0x00040c48) popup_sub_window_general

0x2255,	// (0x00040d78) popup_window_general_ParamLimits

0x2255,	// (0x00040d78) popup_window_general

0x5116,	// (0x00043c39) power_save_pane

0xc18f,	// (0x0004acb2) control_pane_g1_ParamLimits

0xc18f,	// (0x0004acb2) control_pane_g1

0xc1b8,	// (0x0004acdb) control_pane_g2_ParamLimits

0xc1b8,	// (0x0004acdb) control_pane_g2

0x5074,	// (0x00043b97) control_pane_g3_ParamLimits

0x5074,	// (0x00043b97) control_pane_g3

0x0007,

0xf78d,	// (0x0004e2b0) control_pane_g_ParamLimits

0xf78d,	// (0x0004e2b0) control_pane_g

0xc1f9,	// (0x0004ad1c) control_pane_t1_ParamLimits

0xc1f9,	// (0x0004ad1c) control_pane_t1

0xc25f,	// (0x0004ad82) control_pane_t2_ParamLimits

0xc25f,	// (0x0004ad82) control_pane_t2

0x0002,

0xf79e,	// (0x0004e2c1) control_pane_t_ParamLimits

0xf79e,	// (0x0004e2c1) control_pane_t

0xd6bd,	// (0x0004c1e0) navi_navi_volume_pane_cp1

0xd6c5,	// (0x0004c1e8) status_small_icon_pane

0x4fa9,	// (0x00043acc) status_small_pane_g1_ParamLimits

0x4fa9,	// (0x00043acc) status_small_pane_g1

0xd6cd,	// (0x0004c1f0) status_small_pane_g2_ParamLimits

0xd6cd,	// (0x0004c1f0) status_small_pane_g2

0xd6d9,	// (0x0004c1fc) status_small_pane_g3_ParamLimits

0xd6d9,	// (0x0004c1fc) status_small_pane_g3

0xd6e5,	// (0x0004c208) status_small_pane_g4_ParamLimits

0xd6e5,	// (0x0004c208) status_small_pane_g4

0xd6f1,	// (0x0004c214) status_small_pane_g5_ParamLimits

0xd6f1,	// (0x0004c214) status_small_pane_g5

0xd6ff,	// (0x0004c222) status_small_pane_g6_ParamLimits

0xd6ff,	// (0x0004c222) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004e29f) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004e29f) status_small_pane_g

0xd72e,	// (0x0004c251) status_small_pane_t1

0xd750,	// (0x0004c273) status_small_wait_pane_ParamLimits

0xd750,	// (0x0004c273) status_small_wait_pane

0xd588,	// (0x0004c0ab) aid_levels_signal_ParamLimits

0xd588,	// (0x0004c0ab) aid_levels_signal

0xd5a0,	// (0x0004c0c3) signal_pane_g1_ParamLimits

0xd5a0,	// (0x0004c0c3) signal_pane_g1

0xd5bb,	// (0x0004c0de) signal_pane_g2_ParamLimits

0xd5bb,	// (0x0004c0de) signal_pane_g2

0x0003,

0xf70d,	// (0x0004e230) signal_pane_g_ParamLimits

0xf70d,	// (0x0004e230) signal_pane_g

0x4881,	// (0x000433a4) context_pane_g1

0xd0ec,	// (0x0004bc0f) title_pane_g1

0xd123,	// (0x0004bc46) title_pane_t1

0x386f,	// (0x00042392) title_pane_t2

0x3895,	// (0x000423b8) title_pane_t3

0x0002,

0xf557,	// (0x0004e07a) title_pane_t

0xdb3e,	// (0x0004c661) aid_levels_battery_ParamLimits

0xdb3e,	// (0x0004c661) aid_levels_battery

0xdb5a,	// (0x0004c67d) battery_pane_g1_ParamLimits

0xdb5a,	// (0x0004c67d) battery_pane_g1

0xdb77,	// (0x0004c69a) battery_pane_g2_ParamLimits

0xdb77,	// (0x0004c69a) battery_pane_g2

0x0001,

0xf7b0,	// (0x0004e2d3) battery_pane_g_ParamLimits

0xf7b0,	// (0x0004e2d3) battery_pane_g

0xdd38,	// (0x0004c85b) uni_indicator_pane_g1

0xdd4e,	// (0x0004c871) uni_indicator_pane_g2

0xdd64,	// (0x0004c887) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0004e444) uni_indicator_pane_g

0x4c1f,	// (0x00043742) navi_icon_pane_ParamLimits

0x4c1f,	// (0x00043742) navi_icon_pane

0x4b5d,	// (0x00043680) navi_midp_pane

0x4c3b,	// (0x0004375e) navi_navi_pane

0x4c45,	// (0x00043768) navi_text_pane_ParamLimits

0x4c45,	// (0x00043768) navi_text_pane

0x37bd,	// (0x000422e0) status_small_wait_pane_g1

0x3cc4,	// (0x000427e7) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0004e43f) status_small_wait_pane_g

0x64c1,	// (0x00044fe4) navi_navi_icon_text_pane

0x64c9,	// (0x00044fec) navi_navi_pane_g1_ParamLimits

0x64c9,	// (0x00044fec) navi_navi_pane_g1

0x64db,	// (0x00044ffe) navi_navi_pane_g2_ParamLimits

0x64db,	// (0x00044ffe) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0004e40d) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0004e40d) navi_navi_pane_g

0x64ed,	// (0x00045010) navi_navi_tabs_pane

0x64f6,	// (0x00045019) navi_navi_text_pane

0x64c1,	// (0x00044fe4) navi_navi_volume_pane

0x649d,	// (0x00044fc0) navi_text_pane_t1

0x6491,	// (0x00044fb4) navi_icon_pane_g1

0x63e4,	// (0x00044f07) navi_navi_text_pane_t1

0x250d,	// (0x00041030) navi_navi_volume_pane_g1

0x2515,	// (0x00041038) volume_small_pane

0x634a,	// (0x00044e6d) navi_navi_icon_text_pane_g1

0x6352,	// (0x00044e75) navi_navi_icon_text_pane_t1

0x4c3b,	// (0x0004375e) navi_tabs_2_long_pane

0x4c3b,	// (0x0004375e) navi_tabs_2_pane

0x4c3b,	// (0x0004375e) navi_tabs_3_long_pane

0x4c3b,	// (0x0004375e) navi_tabs_3_pane

0x4c3b,	// (0x0004375e) navi_tabs_4_pane

0x24ed,	// (0x00041010) tabs_2_active_pane_ParamLimits

0x24ed,	// (0x00041010) tabs_2_active_pane

0x24fd,	// (0x00041020) tabs_2_passive_pane_ParamLimits

0x24fd,	// (0x00041020) tabs_2_passive_pane

0x24bb,	// (0x00040fde) tabs_3_active_pane_ParamLimits

0x24bb,	// (0x00040fde) tabs_3_active_pane

0x24cb,	// (0x00040fee) tabs_3_passive_pane_ParamLimits

0x24cb,	// (0x00040fee) tabs_3_passive_pane

0x24dc,	// (0x00040fff) tabs_3_passive_pane_cp_ParamLimits

0x24dc,	// (0x00040fff) tabs_3_passive_pane_cp

0x2477,	// (0x00040f9a) tabs_4_active_pane_ParamLimits

0x2477,	// (0x00040f9a) tabs_4_active_pane

0x2488,	// (0x00040fab) tabs_4_passive_pane_ParamLimits

0x2488,	// (0x00040fab) tabs_4_passive_pane

0x2499,	// (0x00040fbc) tabs_4_passive_pane_cp_ParamLimits

0x2499,	// (0x00040fbc) tabs_4_passive_pane_cp

0x24aa,	// (0x00040fcd) tabs_4_passive_pane_cp2_ParamLimits

0x24aa,	// (0x00040fcd) tabs_4_passive_pane_cp2

0x2453,	// (0x00040f76) tabs_2_long_active_pane_ParamLimits

0x2453,	// (0x00040f76) tabs_2_long_active_pane

0x2465,	// (0x00040f88) tabs_2_long_passive_pane_ParamLimits

0x2465,	// (0x00040f88) tabs_2_long_passive_pane

0x2414,	// (0x00040f37) tabs_3_long_active_pane_ParamLimits

0x2414,	// (0x00040f37) tabs_3_long_active_pane

0x2427,	// (0x00040f4a) tabs_3_long_passive_pane_ParamLimits

0x2427,	// (0x00040f4a) tabs_3_long_passive_pane

0x2440,	// (0x00040f63) tabs_3_long_passive_pane_cp_ParamLimits

0x2440,	// (0x00040f63) tabs_3_long_passive_pane_cp

0x23ba,	// (0x00040edd) volume_small_pane_g1

0x23c3,	// (0x00040ee6) volume_small_pane_g2

0x23cc,	// (0x00040eef) volume_small_pane_g3

0x23d5,	// (0x00040ef8) volume_small_pane_g4

0x23de,	// (0x00040f01) volume_small_pane_g5

0x23e7,	// (0x00040f0a) volume_small_pane_g6

0x23f0,	// (0x00040f13) volume_small_pane_g7

0x23f9,	// (0x00040f1c) volume_small_pane_g8

0x2402,	// (0x00040f25) volume_small_pane_g9

0x240b,	// (0x00040f2e) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0004e3d9) volume_small_pane_g

0x3b22,	// (0x00042645) bg_active_tab_pane_cp2_ParamLimits

0x3b22,	// (0x00042645) bg_active_tab_pane_cp2

0x38b5,	// (0x000423d8) tabs_3_active_pane_g1

0xd1af,	// (0x0004bcd2) tabs_3_active_pane_t1

0x3b22,	// (0x00042645) bg_passive_tab_pane_cp2_ParamLimits

0x3b22,	// (0x00042645) bg_passive_tab_pane_cp2

0x38b5,	// (0x000423d8) tabs_3_passive_pane_g1

0xd1af,	// (0x0004bcd2) tabs_3_passive_pane_t1

0x3b22,	// (0x00042645) bg_active_tab_pane_cp3_ParamLimits

0x3b22,	// (0x00042645) bg_active_tab_pane_cp3

0x38cf,	// (0x000423f2) tabs_4_active_pane_g1

0xd1c1,	// (0x0004bce4) tabs_4_active_pane_t1

0x3b22,	// (0x00042645) bg_passive_tab_pane_cp3_ParamLimits

0x3b22,	// (0x00042645) bg_passive_tab_pane_cp3

0x38cf,	// (0x000423f2) tabs_4_1_passive_pane_g1

0xd1c1,	// (0x0004bce4) tabs_4_1_passive_pane_t1

0x50fc,	// (0x00043c1f) list_highlight_pane_cp2

0xddea,	// (0x0004c90d) list_set_pane_ParamLimits

0xddea,	// (0x0004c90d) list_set_pane

0xde84,	// (0x0004c9a7) main_pane_set_t1_ParamLimits

0xde84,	// (0x0004c9a7) main_pane_set_t1

0xdea4,	// (0x0004c9c7) main_pane_set_t2_ParamLimits

0xdea4,	// (0x0004c9c7) main_pane_set_t2

0xdeb8,	// (0x0004c9db) main_pane_set_t3_ParamLimits

0xdeb8,	// (0x0004c9db) main_pane_set_t3

0xdeca,	// (0x0004c9ed) main_pane_set_t4_ParamLimits

0xdeca,	// (0x0004c9ed) main_pane_set_t4

0x0003,

0xf986,	// (0x0004e4a9) main_pane_set_t_ParamLimits

0xf986,	// (0x0004e4a9) main_pane_set_t

0xdedc,	// (0x0004c9ff) setting_code_pane

0xdee6,	// (0x0004ca09) setting_slider_graphic_pane

0xdee6,	// (0x0004ca09) setting_slider_pane

0xdee6,	// (0x0004ca09) setting_text_pane

0xdee6,	// (0x0004ca09) setting_volume_pane

0x155b,	// (0x0004007e) volume_set_pane

0x38a7,	// (0x000423ca) bg_set_opt_pane_cp

0x1563,	// (0x00040086) setting_slider_pane_t1

0x157c,	// (0x0004009f) setting_slider_pane_t2

0x1596,	// (0x000400b9) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004e081) setting_slider_pane_t

0x15ae,	// (0x000400d1) slider_set_pane

0x37c7,	// (0x000422ea) bg_set_opt_pane_cp2

0x38e9,	// (0x0004240c) setting_slider_graphic_pane_g1

0x15c4,	// (0x000400e7) setting_slider_graphic_pane_t1

0x15d4,	// (0x000400f7) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004e088) setting_slider_graphic_pane_t

0x15e4,	// (0x00040107) slider_set_pane_cp

0x37c7,	// (0x000422ea) input_focus_pane_cp1

0x69ce,	// (0x000454f1) list_set_text_pane

0x37bd,	// (0x000422e0) setting_text_pane_g1

0x37c7,	// (0x000422ea) input_focus_pane_cp2

0x37bd,	// (0x000422e0) setting_code_pane_g1

0x38f2,	// (0x00042415) setting_code_pane_t1

0x01c5,	// (0x0003ece8) set_text_pane_t1_ParamLimits

0x01c5,	// (0x0003ece8) set_text_pane_t1

0x416e,	// (0x00042c91) set_opt_bg_pane_g1

0x4176,	// (0x00042c99) set_opt_bg_pane_g2

0x69a8,	// (0x000454cb) set_opt_bg_pane_g3

0x4186,	// (0x00042ca9) set_opt_bg_pane_g4

0x418e,	// (0x00042cb1) set_opt_bg_pane_g5

0x4196,	// (0x00042cb9) set_opt_bg_pane_g6

0x69b2,	// (0x000454d5) set_opt_bg_pane_g7

0x69ba,	// (0x000454dd) set_opt_bg_pane_g8

0x69c4,	// (0x000454e7) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0004e496) set_opt_bg_pane_g

0x699b,	// (0x000454be) slider_set_pane_g1

0x2582,	// (0x000410a5) slider_set_pane_g2

0x0006,

0xf964,	// (0x0004e487) slider_set_pane_g

0x251e,	// (0x00041041) volume_set_pane_g1

0x2526,	// (0x00041049) volume_set_pane_g2

0x252e,	// (0x00041051) volume_set_pane_g3

0x2536,	// (0x00041059) volume_set_pane_g4

0x253e,	// (0x00041061) volume_set_pane_g5

0x2546,	// (0x00041069) volume_set_pane_g6

0x254e,	// (0x00041071) volume_set_pane_g7

0x2556,	// (0x00041079) volume_set_pane_g8

0x255e,	// (0x00041081) volume_set_pane_g9

0x2566,	// (0x00041089) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0004e45f) volume_set_pane_g

0xd1d3,	// (0x0004bcf6) indicator_pane_ParamLimits

0xd1d3,	// (0x0004bcf6) indicator_pane

0xd1fb,	// (0x0004bd1e) main_idle_pane_g2_ParamLimits

0xd1fb,	// (0x0004bd1e) main_idle_pane_g2

0xd233,	// (0x0004bd56) main_pane_idle_g1_ParamLimits

0xd233,	// (0x0004bd56) main_pane_idle_g1

0x3941,	// (0x00042464) popup_clock_digital_analogue_window_ParamLimits

0x3941,	// (0x00042464) popup_clock_digital_analogue_window

0xd25a,	// (0x0004bd7d) soft_indicator_pane_ParamLimits

0xd25a,	// (0x0004bd7d) soft_indicator_pane

0xd274,	// (0x0004bd97) wallpaper_pane_ParamLimits

0xd274,	// (0x0004bd97) wallpaper_pane

0x37bd,	// (0x000422e0) wallpaper_pane_g1

0xd286,	// (0x0004bda9) indicator_pane_g1_ParamLimits

0xd286,	// (0x0004bda9) indicator_pane_g1

0x6d7d,	// (0x000458a0) navi_navi_icon_text_pane_srt_g1

0x3993,	// (0x000424b6) soft_indicator_pane_t1

0x39ad,	// (0x000424d0) aid_ps_area_pane

0xd29c,	// (0x0004bdbf) aid_ps_clock_pane

0x39cc,	// (0x000424ef) aid_ps_indicator_pane

0x39d8,	// (0x000424fb) indicator_ps_pane_ParamLimits

0x39d8,	// (0x000424fb) indicator_ps_pane

0x39e7,	// (0x0004250a) power_save_pane_g1_ParamLimits

0x39e7,	// (0x0004250a) power_save_pane_g1

0x39f3,	// (0x00042516) power_save_pane_g2_ParamLimits

0x39f3,	// (0x00042516) power_save_pane_g2

0x116c,	// (0x0003fc8f) aid_navinavi_width_pane

0x39ad,	// (0x000424d0) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004e08d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004e08d) power_save_pane_g

0x3a01,	// (0x00042524) power_save_pane_t1_ParamLimits

0x3a01,	// (0x00042524) power_save_pane_t1

0xd29c,	// (0x0004bdbf) aid_ps_clock_pane_ParamLimits

0x39cc,	// (0x000424ef) aid_ps_indicator_pane_ParamLimits

0x3a13,	// (0x00042536) power_save_pane_t4_ParamLimits

0x3a13,	// (0x00042536) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004e092) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004e092) power_save_pane_t

0x3a3d,	// (0x00042560) power_save_t3_ParamLimits

0x3a3d,	// (0x00042560) power_save_t3

0x3a28,	// (0x0004254b) power_save_t2_ParamLimits

0x3a28,	// (0x0004254b) power_save_t2

0x3a52,	// (0x00042575) indicator_ps_pane_g1

0xd2aa,	// (0x0004bdcd) ai_gene_pane_ParamLimits

0xd2aa,	// (0x0004bdcd) ai_gene_pane

0xd2c1,	// (0x0004bde4) ai_links_pane_ParamLimits

0xd2c1,	// (0x0004bde4) ai_links_pane

0xd2d9,	// (0x0004bdfc) indicator_pane_cp1_ParamLimits

0xd2d9,	// (0x0004bdfc) indicator_pane_cp1

0xd2e8,	// (0x0004be0b) main_pane_idle_g1_cp_ParamLimits

0xd2e8,	// (0x0004be0b) main_pane_idle_g1_cp

0x3a8b,	// (0x000425ae) popup_ai_links_title_window

0xd300,	// (0x0004be23) soft_indicator_pane_cp1_ParamLimits

0xd300,	// (0x0004be23) soft_indicator_pane_cp1

0x678a,	// (0x000452ad) ai_links_pane_g1

0x6793,	// (0x000452b6) grid_ai_links_pane

0xdd2f,	// (0x0004c852) ai_gene_pane_1

0x6778,	// (0x0004529b) ai_gene_pane_2

0x6781,	// (0x000452a4) list_highlight_pane_cp4

0xdd0b,	// (0x0004c82e) cell_ai_link_pane_ParamLimits

0xdd0b,	// (0x0004c82e) cell_ai_link_pane

0x6749,	// (0x0004526c) cell_ai_link_pane_g1

0x3cc4,	// (0x000427e7) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0004e43a) cell_ai_link_pane_g

0x37c7,	// (0x000422ea) grid_highlight_cp2

0x37c7,	// (0x000422ea) bg_popup_sub_pane_cp1

0x3aae,	// (0x000425d1) popup_ai_links_title_window_t1

0x6697,	// (0x000451ba) ai_gene_pane_1_g1_ParamLimits

0x6697,	// (0x000451ba) ai_gene_pane_1_g1

0x66a3,	// (0x000451c6) ai_gene_pane_1_g2_ParamLimits

0x66a3,	// (0x000451c6) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0004e430) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0004e430) ai_gene_pane_1_g

0x66b0,	// (0x000451d3) ai_gene_pane_1_t1_ParamLimits

0x66b0,	// (0x000451d3) ai_gene_pane_1_t1

0x66e4,	// (0x00045207) grid_ai_soft_ind_pane

0x6682,	// (0x000451a5) ai_gene_pane_2_t1_ParamLimits

0x6682,	// (0x000451a5) ai_gene_pane_2_t1

0xd314,	// (0x0004be37) main_pane_empty_t1_ParamLimits

0xd314,	// (0x0004be37) main_pane_empty_t1

0xd32c,	// (0x0004be4f) main_pane_empty_t2_ParamLimits

0xd32c,	// (0x0004be4f) main_pane_empty_t2

0xd341,	// (0x0004be64) main_pane_empty_t3_ParamLimits

0xd341,	// (0x0004be64) main_pane_empty_t3

0xd353,	// (0x0004be76) main_pane_empty_t4_ParamLimits

0xd353,	// (0x0004be76) main_pane_empty_t4

0xd365,	// (0x0004be88) main_pane_empty_t5_ParamLimits

0xd365,	// (0x0004be88) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004e097) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004e097) main_pane_empty_t

0x41bf,	// (0x00042ce2) bg_popup_window_pane_ParamLimits

0x41bf,	// (0x00042ce2) bg_popup_window_pane

0x63f2,	// (0x00044f15) find_popup_pane_cp2_ParamLimits

0x63f2,	// (0x00044f15) find_popup_pane_cp2

0x63fe,	// (0x00044f21) heading_pane_ParamLimits

0x63fe,	// (0x00044f21) heading_pane

0x37c7,	// (0x000422ea) bg_popup_sub_pane

0xdc8c,	// (0x0004c7af) bg_popup_window_pane_g1_ParamLimits

0xdc8c,	// (0x0004c7af) bg_popup_window_pane_g1

0xdc9b,	// (0x0004c7be) bg_popup_window_pane_g2_ParamLimits

0xdc9b,	// (0x0004c7be) bg_popup_window_pane_g2

0xdca7,	// (0x0004c7ca) bg_popup_window_pane_g3_ParamLimits

0xdca7,	// (0x0004c7ca) bg_popup_window_pane_g3

0xdcb3,	// (0x0004c7d6) bg_popup_window_pane_g4_ParamLimits

0xdcb3,	// (0x0004c7d6) bg_popup_window_pane_g4

0xdcc2,	// (0x0004c7e5) bg_popup_window_pane_g5_ParamLimits

0xdcc2,	// (0x0004c7e5) bg_popup_window_pane_g5

0xdcd2,	// (0x0004c7f5) bg_popup_window_pane_g6_ParamLimits

0xdcd2,	// (0x0004c7f5) bg_popup_window_pane_g6

0xdcde,	// (0x0004c801) bg_popup_window_pane_g7_ParamLimits

0xdcde,	// (0x0004c801) bg_popup_window_pane_g7

0xdced,	// (0x0004c810) bg_popup_window_pane_g8_ParamLimits

0xdced,	// (0x0004c810) bg_popup_window_pane_g8

0xdcfc,	// (0x0004c81f) bg_popup_window_pane_g9_ParamLimits

0xdcfc,	// (0x0004c81f) bg_popup_window_pane_g9

0x63d8,	// (0x00044efb) bg_popup_window_pane_g10_ParamLimits

0x63d8,	// (0x00044efb) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0004e3f8) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0004e3f8) bg_popup_window_pane_g

0x6301,	// (0x00044e24) bg_popup_heading_pane_ParamLimits

0x6301,	// (0x00044e24) bg_popup_heading_pane

0x26a0,	// (0x000411c3) tabs_4_passive_pane_cp_srt_ParamLimits

0x26a0,	// (0x000411c3) tabs_4_passive_pane_cp_srt

0x26b2,	// (0x000411d5) tabs_4_passive_pane_srt_ParamLimits

0x6315,	// (0x00044e38) heading_pane_g2

0x26b2,	// (0x000411d5) tabs_4_passive_pane_srt

0x567a,	// (0x0004419d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x567a,	// (0x0004419d) bg_passive_tab_pane_cp3_srt

0x631d,	// (0x00044e40) heading_pane_t1_ParamLimits

0x631d,	// (0x00044e40) heading_pane_t1

0x6334,	// (0x00044e57) heading_pane_t2_ParamLimits

0x6334,	// (0x00044e57) heading_pane_t2

0x0001,

0xf8d0,	// (0x0004e3f3) heading_pane_t_ParamLimits

0xf8d0,	// (0x0004e3f3) heading_pane_t

0x5e2e,	// (0x00044951) bg_popup_heading_pane_g1

0x5edd,	// (0x00044a00) bg_popup_heading_pane_g2

0x5ee7,	// (0x00044a0a) bg_popup_heading_pane_g3

0x5ef1,	// (0x00044a14) bg_popup_heading_pane_g4

0x5efb,	// (0x00044a1e) bg_popup_heading_pane_g5

0x5f05,	// (0x00044a28) bg_popup_heading_pane_g6

0x5f0d,	// (0x00044a30) bg_popup_heading_pane_g7

0x5f15,	// (0x00044a38) bg_popup_heading_pane_g8

0x5f1f,	// (0x00044a42) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0004e3af) bg_popup_heading_pane_g

0x5606,	// (0x00044129) bg_popup_sub_pane_g1

0x560e,	// (0x00044131) bg_popup_sub_pane_g2

0x5616,	// (0x00044139) bg_popup_sub_pane_g3

0x561e,	// (0x00044141) bg_popup_sub_pane_g4

0x5626,	// (0x00044149) bg_popup_sub_pane_g5

0x562e,	// (0x00044151) bg_popup_sub_pane_g6

0x5636,	// (0x00044159) bg_popup_sub_pane_g7

0x563e,	// (0x00044161) bg_popup_sub_pane_g8

0x5646,	// (0x00044169) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0004e389) bg_popup_sub_pane_g

0x3b22,	// (0x00042645) bg_popup_window_pane_cp5_ParamLimits

0x3b22,	// (0x00042645) bg_popup_window_pane_cp5

0x3b3e,	// (0x00042661) popup_note_window_g1_ParamLimits

0x3b3e,	// (0x00042661) popup_note_window_g1

0x3b4a,	// (0x0004266d) popup_note_window_t1_ParamLimits

0x3b4a,	// (0x0004266d) popup_note_window_t1

0x3b60,	// (0x00042683) popup_note_window_t2_ParamLimits

0x3b60,	// (0x00042683) popup_note_window_t2

0x3b76,	// (0x00042699) popup_note_window_t3_ParamLimits

0x3b76,	// (0x00042699) popup_note_window_t3

0x3b8c,	// (0x000426af) popup_note_window_t4_ParamLimits

0x3b8c,	// (0x000426af) popup_note_window_t4

0x3bb4,	// (0x000426d7) popup_note_window_t5_ParamLimits

0x3bb4,	// (0x000426d7) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004e0a2) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004e0a2) popup_note_window_t

0x3bd8,	// (0x000426fb) bg_popup_window_pane_cp6_ParamLimits

0x3bd8,	// (0x000426fb) bg_popup_window_pane_cp6

0x5daa,	// (0x000448cd) popup_note_image_window_g1_ParamLimits

0x5daa,	// (0x000448cd) popup_note_image_window_g1

0x5db6,	// (0x000448d9) popup_note_image_window_g2_ParamLimits

0x5db6,	// (0x000448d9) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0004e37d) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0004e37d) popup_note_image_window_g

0x5dcf,	// (0x000448f2) popup_note_image_window_t1_ParamLimits

0x5dcf,	// (0x000448f2) popup_note_image_window_t1

0x5de8,	// (0x0004490b) popup_note_image_window_t2_ParamLimits

0x5de8,	// (0x0004490b) popup_note_image_window_t2

0x5e01,	// (0x00044924) popup_note_image_window_t3_ParamLimits

0x5e01,	// (0x00044924) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0004e382) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0004e382) popup_note_image_window_t

0x5c6b,	// (0x0004478e) bg_popup_window_pane_cp7_ParamLimits

0x5c6b,	// (0x0004478e) bg_popup_window_pane_cp7

0x5c9b,	// (0x000447be) popup_note_wait_window_g1_ParamLimits

0x5c9b,	// (0x000447be) popup_note_wait_window_g1

0x5ca7,	// (0x000447ca) popup_note_wait_window_g2_ParamLimits

0x5ca7,	// (0x000447ca) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0004e36b) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0004e36b) popup_note_wait_window_g

0x5cbf,	// (0x000447e2) popup_note_wait_window_t1_ParamLimits

0x5cbf,	// (0x000447e2) popup_note_wait_window_t1

0x5ce6,	// (0x00044809) popup_note_wait_window_t2_ParamLimits

0x5ce6,	// (0x00044809) popup_note_wait_window_t2

0x5d03,	// (0x00044826) popup_note_wait_window_t3_ParamLimits

0x5d03,	// (0x00044826) popup_note_wait_window_t3

0x5d16,	// (0x00044839) popup_note_wait_window_t4_ParamLimits

0x5d16,	// (0x00044839) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0004e372) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0004e372) popup_note_wait_window_t

0x5d3b,	// (0x0004485e) wait_bar_pane_ParamLimits

0x5d3b,	// (0x0004485e) wait_bar_pane

0x37c7,	// (0x000422ea) wait_anim_pane

0x37c7,	// (0x000422ea) wait_border_pane

0x37bd,	// (0x000422e0) wait_anim_pane_g1

0x37bd,	// (0x000422e0) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0004e22b) wait_anim_pane_g

0x5c0f,	// (0x00044732) wait_border_pane_g1

0x5c1a,	// (0x0004473d) wait_border_pane_g2

0x5c23,	// (0x00044746) wait_border_pane_g3

0x0002,

0xf841,	// (0x0004e364) wait_border_pane_g

0x5a7a,	// (0x0004459d) bg_popup_window_pane_cp16_ParamLimits

0x5a7a,	// (0x0004459d) bg_popup_window_pane_cp16

0x5b7a,	// (0x0004469d) indicator_popup_pane_cp4_ParamLimits

0x5b7a,	// (0x0004469d) indicator_popup_pane_cp4

0x5b8e,	// (0x000446b1) popup_query_data_window_t1_ParamLimits

0x5b8e,	// (0x000446b1) popup_query_data_window_t1

0x5ba0,	// (0x000446c3) popup_query_data_window_t2_ParamLimits

0x5ba0,	// (0x000446c3) popup_query_data_window_t2

0x5bb9,	// (0x000446dc) popup_query_data_window_t3_ParamLimits

0x5bb9,	// (0x000446dc) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0004e35d) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0004e35d) popup_query_data_window_t

0x5bd3,	// (0x000446f6) query_popup_data_pane_ParamLimits

0x5bd3,	// (0x000446f6) query_popup_data_pane

0x5be7,	// (0x0004470a) query_popup_data_pane_cp1_ParamLimits

0x5be7,	// (0x0004470a) query_popup_data_pane_cp1

0x5a7a,	// (0x0004459d) bg_popup_window_pane_cp10_ParamLimits

0x5a7a,	// (0x0004459d) bg_popup_window_pane_cp10

0x5aac,	// (0x000445cf) indicator_popup_pane_ParamLimits

0x5aac,	// (0x000445cf) indicator_popup_pane

0x5ace,	// (0x000445f1) popup_query_code_window_t1_ParamLimits

0x5ace,	// (0x000445f1) popup_query_code_window_t1

0x5ae8,	// (0x0004460b) popup_query_code_window_t2_ParamLimits

0x5ae8,	// (0x0004460b) popup_query_code_window_t2

0x5b31,	// (0x00044654) popup_query_code_window_t3_ParamLimits

0x5b31,	// (0x00044654) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0004e356) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0004e356) popup_query_code_window_t

0x5b60,	// (0x00044683) query_popup_pane_ParamLimits

0x5b60,	// (0x00044683) query_popup_pane

0x3bd8,	// (0x000426fb) bg_popup_window_pane_cp15_ParamLimits

0x3bd8,	// (0x000426fb) bg_popup_window_pane_cp15

0x3bf6,	// (0x00042719) indicator_popup_pane_cp1_ParamLimits

0x3bf6,	// (0x00042719) indicator_popup_pane_cp1

0x3c09,	// (0x0004272c) indicator_popup_pane_cp2_ParamLimits

0x3c09,	// (0x0004272c) indicator_popup_pane_cp2

0x3c1c,	// (0x0004273f) popup_query_data_code_window_g1_ParamLimits

0x3c1c,	// (0x0004273f) popup_query_data_code_window_g1

0x3c2f,	// (0x00042752) popup_query_data_code_window_t1_ParamLimits

0x3c2f,	// (0x00042752) popup_query_data_code_window_t1

0x3c41,	// (0x00042764) popup_query_data_code_window_t2_ParamLimits

0x3c41,	// (0x00042764) popup_query_data_code_window_t2

0x3c53,	// (0x00042776) popup_query_data_code_window_t3_ParamLimits

0x3c53,	// (0x00042776) popup_query_data_code_window_t3

0x3c69,	// (0x0004278c) popup_query_data_code_window_t4_ParamLimits

0x3c69,	// (0x0004278c) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004e0ad) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004e0ad) popup_query_data_code_window_t

0x22cb,	// (0x00040dee) list_single_midp_graphic_pane_g3

0x3c81,	// (0x000427a4) query_popup_data_pane_cp2_ParamLimits

0x3c94,	// (0x000427b7) query_popup_pane_cp2_ParamLimits

0x3c94,	// (0x000427b7) query_popup_pane_cp2

0x37c7,	// (0x000422ea) bg_popup_window_pane_cp11

0x5a72,	// (0x00044595) heading_pane_cp5

0x3d7f,	// (0x000428a2) listscroll_popup_info_pane

0x37c7,	// (0x000422ea) input_focus_pane_cp3

0x3ca7,	// (0x000427ca) query_popup_pane_t1

0x3cb5,	// (0x000427d8) list_popup_info_pane_ParamLimits

0x3cb5,	// (0x000427d8) list_popup_info_pane

0x3cc4,	// (0x000427e7) listscroll_popup_info_pane_g1

0x3ccc,	// (0x000427ef) scroll_pane_cp7

0x3cd6,	// (0x000427f9) popup_info_list_pane_t1_ParamLimits

0x3cd6,	// (0x000427f9) popup_info_list_pane_t1

0x3cf0,	// (0x00042813) popup_info_list_pane_t2_ParamLimits

0x3cf0,	// (0x00042813) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004e0b6) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004e0b6) popup_info_list_pane_t

0x37c7,	// (0x000422ea) bg_popup_window_pane_cp12

0x6d97,	// (0x000458ba) find_popup_pane

0x38a7,	// (0x000423ca) bg_popup_window_pane_cp3

0x3d0a,	// (0x0004282d) heading_pane_cp3

0x3d16,	// (0x00042839) listscroll_popup_graphic_pane

0x37c7,	// (0x000422ea) bg_popup_window_pane_cp4

0xd3c7,	// (0x0004beea) heading_pane_cp4

0x3d7f,	// (0x000428a2) listscroll_popup_colour_pane

0x3d87,	// (0x000428aa) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3d87,	// (0x000428aa) cell_large_graphic_colour_none_popup_pane

0xd3cf,	// (0x0004bef2) grid_large_graphic_colour_popup_pane_ParamLimits

0xd3cf,	// (0x0004bef2) grid_large_graphic_colour_popup_pane

0x3dc7,	// (0x000428ea) listscroll_popup_colour_pane_g1_ParamLimits

0x3dc7,	// (0x000428ea) listscroll_popup_colour_pane_g1

0x3dde,	// (0x00042901) listscroll_popup_colour_pane_g2_ParamLimits

0x3dde,	// (0x00042901) listscroll_popup_colour_pane_g2

0x3df5,	// (0x00042918) listscroll_popup_colour_pane_g3_ParamLimits

0x3df5,	// (0x00042918) listscroll_popup_colour_pane_g3

0xd3f3,	// (0x0004bf16) listscroll_popup_colour_pane_g4_ParamLimits

0xd3f3,	// (0x0004bf16) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004e0bb) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004e0bb) listscroll_popup_colour_pane_g

0x3e19,	// (0x0004293c) scroll_pane_cp6_ParamLimits

0x3e19,	// (0x0004293c) scroll_pane_cp6

0xd403,	// (0x0004bf26) cell_large_graphic_colour_popup_pane_ParamLimits

0xd403,	// (0x0004bf26) cell_large_graphic_colour_popup_pane

0x3e4a,	// (0x0004296d) cell_large_graphic_colour_none_popup_pane_t1

0x37c7,	// (0x000422ea) grid_highlight_pane_cp5

0x3e59,	// (0x0004297c) cell_large_graphic_colour_popup_pane_g1

0x3e61,	// (0x00042984) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004e0c4) cell_large_graphic_colour_popup_pane_g

0x3e69,	// (0x0004298c) cell_large_graphic_colour_popup_pane_g2_copy1

0x3e72,	// (0x00042995) grid_highlight_pane_cp4

0x3e7a,	// (0x0004299d) bg_popup_window_pane_cp8_ParamLimits

0x3e7a,	// (0x0004299d) bg_popup_window_pane_cp8

0x3e95,	// (0x000429b8) popup_snote_single_text_window_g1_ParamLimits

0x3e95,	// (0x000429b8) popup_snote_single_text_window_g1

0x3ea7,	// (0x000429ca) popup_snote_single_text_window_t1_ParamLimits

0x3ea7,	// (0x000429ca) popup_snote_single_text_window_t1

0x3eba,	// (0x000429dd) popup_snote_single_text_window_t2_ParamLimits

0x3eba,	// (0x000429dd) popup_snote_single_text_window_t2

0x3ecd,	// (0x000429f0) popup_snote_single_text_window_t3_ParamLimits

0x3ecd,	// (0x000429f0) popup_snote_single_text_window_t3

0x3f06,	// (0x00042a29) popup_snote_single_text_window_t4_ParamLimits

0x3f06,	// (0x00042a29) popup_snote_single_text_window_t4

0x3f3a,	// (0x00042a5d) popup_snote_single_text_window_t5_ParamLimits

0x3f3a,	// (0x00042a5d) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004e0c9) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004e0c9) popup_snote_single_text_window_t

0x3f69,	// (0x00042a8c) bg_popup_window_pane_cp9_ParamLimits

0x3f69,	// (0x00042a8c) bg_popup_window_pane_cp9

0x3e95,	// (0x000429b8) popup_snote_single_graphic_window_g1_ParamLimits

0x3e95,	// (0x000429b8) popup_snote_single_graphic_window_g1

0x3f77,	// (0x00042a9a) popup_snote_single_graphic_window_g2_ParamLimits

0x3f77,	// (0x00042a9a) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004e0d4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004e0d4) popup_snote_single_graphic_window_g

0x3f83,	// (0x00042aa6) popup_snote_single_graphic_window_t1_ParamLimits

0x3f83,	// (0x00042aa6) popup_snote_single_graphic_window_t1

0x3f96,	// (0x00042ab9) popup_snote_single_graphic_window_t2_ParamLimits

0x3f96,	// (0x00042ab9) popup_snote_single_graphic_window_t2

0x3fa9,	// (0x00042acc) popup_snote_single_graphic_window_t3_ParamLimits

0x3fa9,	// (0x00042acc) popup_snote_single_graphic_window_t3

0x3fe2,	// (0x00042b05) popup_snote_single_graphic_window_t4_ParamLimits

0x3fe2,	// (0x00042b05) popup_snote_single_graphic_window_t4

0x4016,	// (0x00042b39) popup_snote_single_graphic_window_t5_ParamLimits

0x4016,	// (0x00042b39) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004e0d9) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004e0d9) popup_snote_single_graphic_window_t

0x6cd9,	// (0x000457fc) grid_graphic_popup_pane_ParamLimits

0x6cd9,	// (0x000457fc) grid_graphic_popup_pane

0x6d03,	// (0x00045826) listscroll_popup_graphic_pane_g1_ParamLimits

0x6d03,	// (0x00045826) listscroll_popup_graphic_pane_g1

0xdff5,	// (0x0004cb18) listscroll_popup_graphic_pane_g2_ParamLimits

0xdff5,	// (0x0004cb18) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0004e4d3) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0004e4d3) listscroll_popup_graphic_pane_g

0x6d2b,	// (0x0004584e) scroll_pane_cp5

0xdf9a,	// (0x0004cabd) cell_graphic_popup_pane_ParamLimits

0xdf9a,	// (0x0004cabd) cell_graphic_popup_pane

0x6c59,	// (0x0004577c) cell_graphic_popup_pane_g1

0x6c61,	// (0x00045784) cell_graphic_popup_pane_g2

0x3e69,	// (0x0004298c) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0004e4cc) cell_graphic_popup_pane_g

0x6c6a,	// (0x0004578d) cell_graphic_popup_pane_t2

0x3e72,	// (0x00042995) grid_highlight_pane_cp3

0x4057,	// (0x00042b7a) list_gen_pane_ParamLimits

0x4057,	// (0x00042b7a) list_gen_pane

0x4089,	// (0x00042bac) scroll_pane

0xdf51,	// (0x0004ca74) bg_list_pane_g1_ParamLimits

0xdf51,	// (0x0004ca74) bg_list_pane_g1

0x6bce,	// (0x000456f1) bg_list_pane_g2_ParamLimits

0x6bce,	// (0x000456f1) bg_list_pane_g2

0x6be3,	// (0x00045706) bg_list_pane_g3_ParamLimits

0x6be3,	// (0x00045706) bg_list_pane_g3

0x6bf7,	// (0x0004571a) bg_list_pane_g4_ParamLimits

0x6bf7,	// (0x0004571a) bg_list_pane_g4

0xdf6e,	// (0x0004ca91) bg_list_pane_g5_ParamLimits

0xdf6e,	// (0x0004ca91) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0004e4c1) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0004e4c1) bg_list_pane_g

0xdf19,	// (0x0004ca3c) list_double2_graphic_large_graphic_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_double2_graphic_large_graphic_pane

0xdf19,	// (0x0004ca3c) list_double2_graphic_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_double2_graphic_pane

0xdf19,	// (0x0004ca3c) list_double2_large_graphic_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_double2_large_graphic_pane

0xdf19,	// (0x0004ca3c) list_double2_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_double2_pane

0xdf19,	// (0x0004ca3c) list_double_graphic_heading_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_double_graphic_heading_pane

0xdf19,	// (0x0004ca3c) list_double_graphic_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_double_graphic_pane

0xdf19,	// (0x0004ca3c) list_double_heading_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_double_heading_pane

0xdf19,	// (0x0004ca3c) list_double_large_graphic_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_double_large_graphic_pane

0xdf19,	// (0x0004ca3c) list_double_number_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_double_number_pane

0xdf19,	// (0x0004ca3c) list_double_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_double_pane

0xdf19,	// (0x0004ca3c) list_double_time_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_double_time_pane

0xdf19,	// (0x0004ca3c) list_setting_number_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_setting_number_pane

0xdf19,	// (0x0004ca3c) list_setting_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_setting_pane

0xdf2b,	// (0x0004ca4e) list_single_2graphic_pane_ParamLimits

0xdf2b,	// (0x0004ca4e) list_single_2graphic_pane

0xdf2b,	// (0x0004ca4e) list_single_graphic_heading_pane_ParamLimits

0xdf2b,	// (0x0004ca4e) list_single_graphic_heading_pane

0xdf2b,	// (0x0004ca4e) list_single_graphic_pane_ParamLimits

0xdf2b,	// (0x0004ca4e) list_single_graphic_pane

0xdf2b,	// (0x0004ca4e) list_single_heading_pane_ParamLimits

0xdf2b,	// (0x0004ca4e) list_single_heading_pane

0xdf19,	// (0x0004ca3c) list_single_large_graphic_pane_ParamLimits

0xdf19,	// (0x0004ca3c) list_single_large_graphic_pane

0xdf2b,	// (0x0004ca4e) list_single_number_heading_pane_ParamLimits

0xdf2b,	// (0x0004ca4e) list_single_number_heading_pane

0xdf2b,	// (0x0004ca4e) list_single_number_pane_ParamLimits

0xdf2b,	// (0x0004ca4e) list_single_number_pane

0xdf2b,	// (0x0004ca4e) list_single_pane_ParamLimits

0xdf2b,	// (0x0004ca4e) list_single_pane

0x37c7,	// (0x000422ea) list_highlight_pane_cp1

0x4ce6,	// (0x00043809) list_single_pane_g1_ParamLimits

0x4ce6,	// (0x00043809) list_single_pane_g1

0x229a,	// (0x00040dbd) list_single_pane_g2_ParamLimits

0x229a,	// (0x00040dbd) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004e0f5) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004e0f5) list_single_pane_g

0x0c16,	// (0x0003f739) list_single_pane_t1_ParamLimits

0x0c16,	// (0x0003f739) list_single_pane_t1

0x4ce6,	// (0x00043809) list_single_number_pane_g1_ParamLimits

0x4ce6,	// (0x00043809) list_single_number_pane_g1

0x229a,	// (0x00040dbd) list_single_number_pane_g2_ParamLimits

0x229a,	// (0x00040dbd) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004e0f5) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004e0f5) list_single_number_pane_g

0x09a7,	// (0x0003f4ca) list_single_number_pane_t1_ParamLimits

0x09a7,	// (0x0003f4ca) list_single_number_pane_t1

0xbd94,	// (0x0004a8b7) list_single_number_pane_t2_ParamLimits

0xbd94,	// (0x0004a8b7) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0004e482) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0004e482) list_single_number_pane_t

0xb748,	// (0x0004a26b) list_single_graphic_pane_g1_ParamLimits

0xb748,	// (0x0004a26b) list_single_graphic_pane_g1

0x4ce6,	// (0x00043809) list_single_graphic_pane_g2_ParamLimits

0x4ce6,	// (0x00043809) list_single_graphic_pane_g2

0x229a,	// (0x00040dbd) list_single_graphic_pane_g3_ParamLimits

0x229a,	// (0x00040dbd) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004e0e4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004e0e4) list_single_graphic_pane_g

0xb754,	// (0x0004a277) list_single_graphic_pane_t1_ParamLimits

0xb754,	// (0x0004a277) list_single_graphic_pane_t1

0xb76a,	// (0x0004a28d) list_single_heading_pane_g1_ParamLimits

0xb76a,	// (0x0004a28d) list_single_heading_pane_g1

0x229a,	// (0x00040dbd) list_single_heading_pane_g2_ParamLimits

0x229a,	// (0x00040dbd) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004e0eb) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004e0eb) list_single_heading_pane_g

0xb77d,	// (0x0004a2a0) list_single_heading_pane_t1_ParamLimits

0xb77d,	// (0x0004a2a0) list_single_heading_pane_t1

0xc12d,	// (0x0004ac50) list_single_heading_pane_t2_ParamLimits

0xc12d,	// (0x0004ac50) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004e0f0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004e0f0) list_single_heading_pane_t

0x4ce6,	// (0x00043809) list_single_number_heading_pane_g1_ParamLimits

0x4ce6,	// (0x00043809) list_single_number_heading_pane_g1

0x229a,	// (0x00040dbd) list_single_number_heading_pane_g2_ParamLimits

0x229a,	// (0x00040dbd) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004e0f5) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004e0f5) list_single_number_heading_pane_g

0xb793,	// (0x0004a2b6) list_single_number_heading_pane_t1_ParamLimits

0xb793,	// (0x0004a2b6) list_single_number_heading_pane_t1

0x0be0,	// (0x0003f703) list_single_number_heading_pane_t2_ParamLimits

0x0be0,	// (0x0003f703) list_single_number_heading_pane_t2

0x0bf2,	// (0x0003f715) list_single_number_heading_pane_t3_ParamLimits

0x0bf2,	// (0x0003f715) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004e0fa) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004e0fa) list_single_number_heading_pane_t

0xb7a9,	// (0x0004a2cc) list_single_graphic_heading_pane_g1_ParamLimits

0xb7a9,	// (0x0004a2cc) list_single_graphic_heading_pane_g1

0xc13f,	// (0x0004ac62) list_single_graphic_heading_pane_g4_ParamLimits

0xc13f,	// (0x0004ac62) list_single_graphic_heading_pane_g4

0x229a,	// (0x00040dbd) list_single_graphic_heading_pane_g5_ParamLimits

0x229a,	// (0x00040dbd) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004e101) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004e101) list_single_graphic_heading_pane_g

0xb793,	// (0x0004a2b6) list_single_graphic_heading_pane_t1_ParamLimits

0xb793,	// (0x0004a2b6) list_single_graphic_heading_pane_t1

0xb7c1,	// (0x0004a2e4) list_single_graphic_heading_pane_t2_ParamLimits

0xb7c1,	// (0x0004a2e4) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004e108) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004e108) list_single_graphic_heading_pane_t

0x0c2c,	// (0x0003f74f) list_single_large_graphic_pane_g1_ParamLimits

0x0c2c,	// (0x0003f74f) list_single_large_graphic_pane_g1

0x0c38,	// (0x0003f75b) list_single_large_graphic_pane_g2_ParamLimits

0x0c38,	// (0x0003f75b) list_single_large_graphic_pane_g2

0x0c44,	// (0x0003f767) list_single_large_graphic_pane_g3_ParamLimits

0x0c44,	// (0x0003f767) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004e10d) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004e10d) list_single_large_graphic_pane_g

0x5c1a,	// (0x0004473d) wait_border_pane_g2_copy1

0x164b,	// (0x0004016e) list_single_large_graphic_pane_g4_cp2

0x0c50,	// (0x0003f773) list_single_large_graphic_pane_t1_ParamLimits

0x0c50,	// (0x0003f773) list_single_large_graphic_pane_t1

0x4bd1,	// (0x000436f4) list_double_pane_g1_ParamLimits

0x4bd1,	// (0x000436f4) list_double_pane_g1

0xc150,	// (0x0004ac73) list_double_pane_g2_ParamLimits

0xc150,	// (0x0004ac73) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004e114) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004e114) list_double_pane_g

0xb7d7,	// (0x0004a2fa) list_double_pane_t1_ParamLimits

0xb7d7,	// (0x0004a2fa) list_double_pane_t1

0xb7ed,	// (0x0004a310) list_double_pane_t2_ParamLimits

0xb7ed,	// (0x0004a310) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004e119) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004e119) list_double_pane_t

0xb7ff,	// (0x0004a322) list_double2_pane_g1_ParamLimits

0xb7ff,	// (0x0004a322) list_double2_pane_g1

0xb810,	// (0x0004a333) list_double2_pane_g2_ParamLimits

0xb810,	// (0x0004a333) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004e11e) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004e11e) list_double2_pane_g

0xb81c,	// (0x0004a33f) list_double2_pane_t1_ParamLimits

0xb81c,	// (0x0004a33f) list_double2_pane_t1

0xb832,	// (0x0004a355) list_double2_pane_t2_ParamLimits

0xb832,	// (0x0004a355) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004e123) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004e123) list_double2_pane_t

0x4bd1,	// (0x000436f4) list_double_number_pane_g1_ParamLimits

0x4bd1,	// (0x000436f4) list_double_number_pane_g1

0xc150,	// (0x0004ac73) list_double_number_pane_g2_ParamLimits

0xc150,	// (0x0004ac73) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004e114) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004e114) list_double_number_pane_g

0xb844,	// (0x0004a367) list_double_number_pane_t1_ParamLimits

0xb844,	// (0x0004a367) list_double_number_pane_t1

0xb856,	// (0x0004a379) list_double_number_pane_t2_ParamLimits

0xb856,	// (0x0004a379) list_double_number_pane_t2

0xb86c,	// (0x0004a38f) list_double_number_pane_t3_ParamLimits

0xb86c,	// (0x0004a38f) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004e128) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004e128) list_double_number_pane_t

0xb87e,	// (0x0004a3a1) list_double_graphic_pane_g1_ParamLimits

0xb87e,	// (0x0004a3a1) list_double_graphic_pane_g1

0xb88a,	// (0x0004a3ad) list_double_graphic_pane_g2_ParamLimits

0xb88a,	// (0x0004a3ad) list_double_graphic_pane_g2

0xb899,	// (0x0004a3bc) list_double_graphic_pane_g3_ParamLimits

0xb899,	// (0x0004a3bc) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004e12f) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004e12f) list_double_graphic_pane_g

0xb8a5,	// (0x0004a3c8) list_double_graphic_pane_t1_ParamLimits

0xb8a5,	// (0x0004a3c8) list_double_graphic_pane_t1

0xb8bb,	// (0x0004a3de) list_double_graphic_pane_t2_ParamLimits

0xb8bb,	// (0x0004a3de) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004e138) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004e138) list_double_graphic_pane_t

0xb8cd,	// (0x0004a3f0) list_double2_graphic_pane_g1_ParamLimits

0xb8cd,	// (0x0004a3f0) list_double2_graphic_pane_g1

0xb8d9,	// (0x0004a3fc) list_double2_graphic_pane_g2_ParamLimits

0xb8d9,	// (0x0004a3fc) list_double2_graphic_pane_g2

0xc168,	// (0x0004ac8b) list_double2_graphic_pane_g3_ParamLimits

0xc168,	// (0x0004ac8b) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004e13d) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004e13d) list_double2_graphic_pane_g

0xb8e5,	// (0x0004a408) list_double2_graphic_pane_t1_ParamLimits

0xb8e5,	// (0x0004a408) list_double2_graphic_pane_t1

0xb8fb,	// (0x0004a41e) list_double2_graphic_pane_t2_ParamLimits

0xb8fb,	// (0x0004a41e) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004e144) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004e144) list_double2_graphic_pane_t

0xb90d,	// (0x0004a430) list_double_large_graphic_pane_g1_ParamLimits

0xb90d,	// (0x0004a430) list_double_large_graphic_pane_g1

0xb92c,	// (0x0004a44f) list_double_large_graphic_pane_g2_ParamLimits

0xb92c,	// (0x0004a44f) list_double_large_graphic_pane_g2

0xc150,	// (0x0004ac73) list_double_large_graphic_pane_g3_ParamLimits

0xc150,	// (0x0004ac73) list_double_large_graphic_pane_g3

0xb942,	// (0x0004a465) list_double_large_graphic_pane_g4_ParamLimits

0xb942,	// (0x0004a465) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004e149) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004e149) list_double_large_graphic_pane_g

0xb954,	// (0x0004a477) list_double_large_graphic_pane_t1_ParamLimits

0xb954,	// (0x0004a477) list_double_large_graphic_pane_t1

0xb96d,	// (0x0004a490) list_double_large_graphic_pane_t2_ParamLimits

0xb96d,	// (0x0004a490) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004e154) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004e154) list_double_large_graphic_pane_t

0xb97f,	// (0x0004a4a2) list_double2_large_graphic_pane_g1_ParamLimits

0xb97f,	// (0x0004a4a2) list_double2_large_graphic_pane_g1

0xb98b,	// (0x0004a4ae) list_double2_large_graphic_pane_g2_ParamLimits

0xb98b,	// (0x0004a4ae) list_double2_large_graphic_pane_g2

0xc168,	// (0x0004ac8b) list_double2_large_graphic_pane_g3_ParamLimits

0xc168,	// (0x0004ac8b) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004e159) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004e159) list_double2_large_graphic_pane_g

0xb99c,	// (0x0004a4bf) list_double2_large_graphic_pane_t1_ParamLimits

0xb99c,	// (0x0004a4bf) list_double2_large_graphic_pane_t1

0xb9b2,	// (0x0004a4d5) list_double2_large_graphic_pane_t2_ParamLimits

0xb9b2,	// (0x0004a4d5) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004e160) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004e160) list_double2_large_graphic_pane_t

0xb9c4,	// (0x0004a4e7) list_double_heading_pane_g1_ParamLimits

0xb9c4,	// (0x0004a4e7) list_double_heading_pane_g1

0xb9d5,	// (0x0004a4f8) list_double_heading_pane_g2_ParamLimits

0xb9d5,	// (0x0004a4f8) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004e165) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004e165) list_double_heading_pane_g

0xb9e1,	// (0x0004a504) list_double_heading_pane_t1_ParamLimits

0xb9e1,	// (0x0004a504) list_double_heading_pane_t1

0xb832,	// (0x0004a355) list_double_heading_pane_t2_ParamLimits

0xb832,	// (0x0004a355) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004e16a) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004e16a) list_double_heading_pane_t

0xb9f7,	// (0x0004a51a) list_double_graphic_heading_pane_g1_ParamLimits

0xb9f7,	// (0x0004a51a) list_double_graphic_heading_pane_g1

0xb9c4,	// (0x0004a4e7) list_double_graphic_heading_pane_g2_ParamLimits

0xb9c4,	// (0x0004a4e7) list_double_graphic_heading_pane_g2

0xb9d5,	// (0x0004a4f8) list_double_graphic_heading_pane_g3_ParamLimits

0xb9d5,	// (0x0004a4f8) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004e16f) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004e16f) list_double_graphic_heading_pane_g

0xba03,	// (0x0004a526) list_double_graphic_heading_pane_t1_ParamLimits

0xba03,	// (0x0004a526) list_double_graphic_heading_pane_t1

0xb8fb,	// (0x0004a41e) list_double_graphic_heading_pane_t2_ParamLimits

0xb8fb,	// (0x0004a41e) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004e176) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004e176) list_double_graphic_heading_pane_t

0xba19,	// (0x0004a53c) list_double_time_pane_g1_ParamLimits

0xba19,	// (0x0004a53c) list_double_time_pane_g1

0xba2a,	// (0x0004a54d) list_double_time_pane_g2_ParamLimits

0xba2a,	// (0x0004a54d) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004e17b) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004e17b) list_double_time_pane_g

0xba36,	// (0x0004a559) list_double_time_pane_t1_ParamLimits

0xba36,	// (0x0004a559) list_double_time_pane_t1

0xba4c,	// (0x0004a56f) list_double_time_pane_t2_ParamLimits

0xba4c,	// (0x0004a56f) list_double_time_pane_t2

0xba5e,	// (0x0004a581) list_double_time_pane_t3_ParamLimits

0xba5e,	// (0x0004a581) list_double_time_pane_t3

0xba70,	// (0x0004a593) list_double_time_pane_t4_ParamLimits

0xba70,	// (0x0004a593) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0004e180) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0004e180) list_double_time_pane_t

0xba82,	// (0x0004a5a5) list_setting_pane_g1_ParamLimits

0xba82,	// (0x0004a5a5) list_setting_pane_g1

0xb810,	// (0x0004a333) list_setting_pane_g2_ParamLimits

0xb810,	// (0x0004a333) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004e189) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004e189) list_setting_pane_g

0xba8e,	// (0x0004a5b1) list_setting_pane_t1_ParamLimits

0xba8e,	// (0x0004a5b1) list_setting_pane_t1

0xbaa8,	// (0x0004a5cb) list_setting_pane_t2_ParamLimits

0xbaa8,	// (0x0004a5cb) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004e18e) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004e18e) list_setting_pane_t

0xbae7,	// (0x0004a60a) set_value_pane_cp_ParamLimits

0xbae7,	// (0x0004a60a) set_value_pane_cp

0xbaf3,	// (0x0004a616) list_setting_number_pane_g1_ParamLimits

0xbaf3,	// (0x0004a616) list_setting_number_pane_g1

0xbaff,	// (0x0004a622) list_setting_number_pane_g2_ParamLimits

0xbaff,	// (0x0004a622) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004e195) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004e195) list_setting_number_pane_g

0xbb0b,	// (0x0004a62e) list_setting_number_pane_t1_ParamLimits

0xbb0b,	// (0x0004a62e) list_setting_number_pane_t1

0xbb24,	// (0x0004a647) list_setting_number_pane_t2_ParamLimits

0xbb24,	// (0x0004a647) list_setting_number_pane_t2

0xbb3e,	// (0x0004a661) list_setting_number_pane_t3_ParamLimits

0xbb3e,	// (0x0004a661) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004e19a) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004e19a) list_setting_number_pane_t

0xbae7,	// (0x0004a60a) set_value_pane_ParamLimits

0xbae7,	// (0x0004a60a) set_value_pane

0x40c9,	// (0x00042bec) bg_set_opt_pane_ParamLimits

0x40c9,	// (0x00042bec) bg_set_opt_pane

0x0638,	// (0x0003f15b) set_value_pane_t1

0x40ea,	// (0x00042c0d) slider_set_pane_cp3

0x40f3,	// (0x00042c16) volume_small_pane_cp

0x40fc,	// (0x00042c1f) list_form_gen_pane

0x4105,	// (0x00042c28) scroll_pane_cp8

0xbb81,	// (0x0004a6a4) form_field_data_pane_ParamLimits

0xbb81,	// (0x0004a6a4) form_field_data_pane

0xbb98,	// (0x0004a6bb) form_field_data_wide_pane_ParamLimits

0xbb98,	// (0x0004a6bb) form_field_data_wide_pane

0xbbb8,	// (0x0004a6db) form_field_popup_pane_ParamLimits

0xbbb8,	// (0x0004a6db) form_field_popup_pane

0xbbd0,	// (0x0004a6f3) form_field_popup_wide_pane_ParamLimits

0xbbd0,	// (0x0004a6f3) form_field_popup_wide_pane

0x06d4,	// (0x0003f1f7) form_field_slider_pane_ParamLimits

0x06d4,	// (0x0003f1f7) form_field_slider_pane

0x06e7,	// (0x0003f20a) form_field_slider_wide_pane_ParamLimits

0x06e7,	// (0x0003f20a) form_field_slider_wide_pane

0x4116,	// (0x00042c39) data_form_pane

0xbbf1,	// (0x0004a714) form_field_data_pane_t1

0x4122,	// (0x00042c45) input_focus_pane

0x071c,	// (0x0003f23f) data_form_wide_pane

0x0739,	// (0x0003f25c) form_field_data_wide_pane_t1

0x3e87,	// (0x000429aa) input_focus_pane_cp6

0xbc0b,	// (0x0004a72e) form_field_popup_pane_t1

0x4122,	// (0x00042c45) input_focus_pane_cp7

0x4144,	// (0x00042c67) list_form_pane

0x077b,	// (0x0003f29e) form_field_popup_wide_pane_t1

0x4122,	// (0x00042c45) input_focus_pane_cp8

0x4150,	// (0x00042c73) list_form_wide_pane

0xbc2d,	// (0x0004a750) form_field_slider_pane_t1_ParamLimits

0xbc2d,	// (0x0004a750) form_field_slider_pane_t1

0xbc45,	// (0x0004a768) form_field_slider_pane_t2_ParamLimits

0xbc45,	// (0x0004a768) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004e1aa) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004e1aa) form_field_slider_pane_t

0x3b22,	// (0x00042645) input_focus_pane_cp9_ParamLimits

0x3b22,	// (0x00042645) input_focus_pane_cp9

0xbc5a,	// (0x0004a77d) slider_cont_pane_ParamLimits

0xbc5a,	// (0x0004a77d) slider_cont_pane

0x415c,	// (0x00042c7f) form_field_slider_wide_pane_t1_ParamLimits

0x415c,	// (0x00042c7f) form_field_slider_wide_pane_t1

0x07d7,	// (0x0003f2fa) form_field_slider_wide_pane_t2_ParamLimits

0x07d7,	// (0x0003f2fa) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004e1af) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004e1af) form_field_slider_wide_pane_t

0x3b22,	// (0x00042645) input_focus_pane_cp10_ParamLimits

0x3b22,	// (0x00042645) input_focus_pane_cp10

0xbc6e,	// (0x0004a791) slider_cont_pane_cp1_ParamLimits

0xbc6e,	// (0x0004a791) slider_cont_pane_cp1

0xbc82,	// (0x0004a7a5) slider_form_pane_cp

0x416e,	// (0x00042c91) input_focus_pane_g1

0x4176,	// (0x00042c99) input_focus_pane_g2

0x417e,	// (0x00042ca1) input_focus_pane_g3

0x4186,	// (0x00042ca9) input_focus_pane_g4

0x418e,	// (0x00042cb1) input_focus_pane_g5

0x4196,	// (0x00042cb9) input_focus_pane_g6

0x419e,	// (0x00042cc1) input_focus_pane_g7

0x41a6,	// (0x00042cc9) input_focus_pane_g8

0x41ae,	// (0x00042cd1) input_focus_pane_g9

0x37bd,	// (0x000422e0) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004e1b4) input_focus_pane_g

0x5c23,	// (0x00044746) wait_border_pane_g3_copy1

0xbc8a,	// (0x0004a7ad) data_form_pane_t1

0x37bd,	// (0x000422e0) wait_anim_pane_g1_copy1

0xbda6,	// (0x0004a8c9) data_form_wide_pane_t1

0xbca3,	// (0x0004a7c6) list_form_graphic_pane_cp_ParamLimits

0xbca3,	// (0x0004a7c6) list_form_graphic_pane_cp

0x6b43,	// (0x00045666) slider_form_pane_g1

0x6b4c,	// (0x0004566f) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0004e4b2) slider_form_pane_g

0xbcb4,	// (0x0004a7d7) list_form_graphic_pane_ParamLimits

0xbcb4,	// (0x0004a7d7) list_form_graphic_pane

0x0855,	// (0x0003f378) list_form_graphic_pane_g1

0x085d,	// (0x0003f380) list_form_graphic_pane_t1_ParamLimits

0x085d,	// (0x0003f380) list_form_graphic_pane_t1

0x38a7,	// (0x000423ca) list_highlight_pane_cp5_ParamLimits

0x38a7,	// (0x000423ca) list_highlight_pane_cp5

0xbcc6,	// (0x0004a7e9) find_pane_g1

0x41b6,	// (0x00042cd9) input_find_pane

0xbccf,	// (0x0004a7f2) input_find_pane_g1_ParamLimits

0xbccf,	// (0x0004a7f2) input_find_pane_g1

0xbcdb,	// (0x0004a7fe) input_find_pane_t1_ParamLimits

0xbcdb,	// (0x0004a7fe) input_find_pane_t1

0xbcf0,	// (0x0004a813) input_find_pane_t2_ParamLimits

0xbcf0,	// (0x0004a813) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004e1c9) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004e1c9) input_find_pane_t

0x41bf,	// (0x00042ce2) input_focus_pane_cp5_ParamLimits

0x41bf,	// (0x00042ce2) input_focus_pane_cp5

0x41d9,	// (0x00042cfc) bg_popup_window_pane_cp2_ParamLimits

0x41d9,	// (0x00042cfc) bg_popup_window_pane_cp2

0x41e6,	// (0x00042d09) listscroll_menu_pane_ParamLimits

0x41e6,	// (0x00042d09) listscroll_menu_pane

0xd438,	// (0x0004bf5b) popup_submenu_window_ParamLimits

0xd438,	// (0x0004bf5b) popup_submenu_window

0x421e,	// (0x00042d41) find_popup_pane_g1

0x4226,	// (0x00042d49) input_popup_find_pane_cp

0x41bf,	// (0x00042ce2) input_focus_pane_cp4_ParamLimits

0x41bf,	// (0x00042ce2) input_focus_pane_cp4

0x423c,	// (0x00042d5f) input_popup_find_pane_t1_ParamLimits

0x423c,	// (0x00042d5f) input_popup_find_pane_t1

0x37c7,	// (0x000422ea) bg_popup_sub_pane_cp

0x426a,	// (0x00042d8d) listscroll_popup_sub_pane

0x4272,	// (0x00042d95) list_submenu_pane_ParamLimits

0x4272,	// (0x00042d95) list_submenu_pane

0x4283,	// (0x00042da6) scroll_pane_cp4

0x428b,	// (0x00042dae) list_single_popup_submenu_pane_ParamLimits

0x428b,	// (0x00042dae) list_single_popup_submenu_pane

0x429f,	// (0x00042dc2) list_single_popup_submenu_pane_g1

0x42a7,	// (0x00042dca) list_single_popup_submenu_pane_t1_ParamLimits

0x42a7,	// (0x00042dca) list_single_popup_submenu_pane_t1

0x3b22,	// (0x00042645) bg_active_tab_pane_cp1_ParamLimits

0x3b22,	// (0x00042645) bg_active_tab_pane_cp1

0x42bc,	// (0x00042ddf) tabs_2_active_pane_g1

0xd472,	// (0x0004bf95) tabs_2_active_pane_t1

0x3b22,	// (0x00042645) bg_passive_tab_pane_cp1_ParamLimits

0x3b22,	// (0x00042645) bg_passive_tab_pane_cp1

0x42bc,	// (0x00042ddf) tabs_2_passive_pane_g1

0xd472,	// (0x0004bf95) tabs_2_passive_pane_t1

0x38a7,	// (0x000423ca) bg_active_tab_pane_cp4

0xd484,	// (0x0004bfa7) tabs_2_long_active_pane_t1

0x50fc,	// (0x00043c1f) bg_passive_tab_pane_cp4

0x1945,	// (0x00040468) list_single_midp_graphic_pane_g4_ParamLimits

0x38a7,	// (0x000423ca) bg_active_tab_pane_cp5

0xd497,	// (0x0004bfba) tabs_3_long_active_pane_t1

0x50fc,	// (0x00043c1f) bg_passive_tab_pane_cp5

0x1945,	// (0x00040468) list_single_midp_graphic_pane_g4

0x38a7,	// (0x000423ca) bg_popup_window_pane_cp13_ParamLimits

0x38a7,	// (0x000423ca) bg_popup_window_pane_cp13

0x431e,	// (0x00042e41) listscroll_popup_fast_pane_ParamLimits

0x431e,	// (0x00042e41) listscroll_popup_fast_pane

0x432d,	// (0x00042e50) grid_popup_fast_pane_ParamLimits

0x432d,	// (0x00042e50) grid_popup_fast_pane

0x433f,	// (0x00042e62) scroll_pane_cp9_ParamLimits

0x433f,	// (0x00042e62) scroll_pane_cp9

0x83ec,	// (0x00046f0f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x83ec,	// (0x00046f0f) list_single_graphic_hl_pane_t1_cp2

0x4363,	// (0x00042e86) input_focus_pane_cp20_ParamLimits

0x4363,	// (0x00042e86) input_focus_pane_cp20

0x4371,	// (0x00042e94) query_popup_data_pane_t1_ParamLimits

0x4371,	// (0x00042e94) query_popup_data_pane_t1

0x4384,	// (0x00042ea7) query_popup_data_pane_t2_ParamLimits

0x4384,	// (0x00042ea7) query_popup_data_pane_t2

0x43ca,	// (0x00042eed) query_popup_data_pane_t3_ParamLimits

0x43ca,	// (0x00042eed) query_popup_data_pane_t3

0x440b,	// (0x00042f2e) query_popup_data_pane_t4_ParamLimits

0x440b,	// (0x00042f2e) query_popup_data_pane_t4

0x4447,	// (0x00042f6a) query_popup_data_pane_t5_ParamLimits

0x4447,	// (0x00042f6a) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004e1ce) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004e1ce) query_popup_data_pane_t

0x416e,	// (0x00042c91) bg_set_opt_pane_g1

0x4176,	// (0x00042c99) bg_set_opt_pane_g2

0x417e,	// (0x00042ca1) bg_set_opt_pane_g3

0x4186,	// (0x00042ca9) bg_set_opt_pane_g4

0x418e,	// (0x00042cb1) bg_set_opt_pane_g5

0x4196,	// (0x00042cb9) bg_set_opt_pane_g6

0x419e,	// (0x00042cc1) bg_set_opt_pane_g7

0x41a6,	// (0x00042cc9) bg_set_opt_pane_g8

0x41ae,	// (0x00042cd1) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004e1d9) bg_set_opt_pane_g

0x1951,	// (0x00040474) control_top_pane_stacon_ParamLimits

0x1951,	// (0x00040474) control_top_pane_stacon

0x19a4,	// (0x000404c7) signal_pane_stacon_ParamLimits

0x19a4,	// (0x000404c7) signal_pane_stacon

0x4a3b,	// (0x0004355e) stacon_top_pane_g1_ParamLimits

0x4a3b,	// (0x0004355e) stacon_top_pane_g1

0x19c9,	// (0x000404ec) title_pane_stacon_ParamLimits

0x19c9,	// (0x000404ec) title_pane_stacon

0x19f3,	// (0x00040516) uni_indicator_pane_stacon_ParamLimits

0x19f3,	// (0x00040516) uni_indicator_pane_stacon

0x1a08,	// (0x0004052b) battery_pane_stacon_ParamLimits

0x1a08,	// (0x0004052b) battery_pane_stacon

0x1a4c,	// (0x0004056f) control_bottom_pane_stacon_ParamLimits

0x1a4c,	// (0x0004056f) control_bottom_pane_stacon

0x1a6f,	// (0x00040592) navi_pane_stacon_ParamLimits

0x1a6f,	// (0x00040592) navi_pane_stacon

0x4a5d,	// (0x00043580) stacon_bottom_pane_g1_ParamLimits

0x4a5d,	// (0x00043580) stacon_bottom_pane_g1

0x1698,	// (0x000401bb) aid_levels_signal_lsc_ParamLimits

0x1698,	// (0x000401bb) aid_levels_signal_lsc

0x16ae,	// (0x000401d1) signal_pane_stacon_g1_ParamLimits

0x16ae,	// (0x000401d1) signal_pane_stacon_g1

0x16c2,	// (0x000401e5) signal_pane_stacon_g2_ParamLimits

0x16c2,	// (0x000401e5) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004e1ec) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004e1ec) signal_pane_stacon_g

0x16f7,	// (0x0004021a) title_pane_stacon_t1_ParamLimits

0x16f7,	// (0x0004021a) title_pane_stacon_t1

0x448b,	// (0x00042fae) uni_indicator_pane_stacon_g1

0x4495,	// (0x00042fb8) uni_indicator_pane_stacon_g2

0x449f,	// (0x00042fc2) uni_indicator_pane_stacon_g3

0x44a9,	// (0x00042fcc) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004e1f8) uni_indicator_pane_stacon_g

0x171c,	// (0x0004023f) control_top_pane_stacon_g1

0x1724,	// (0x00040247) control_top_pane_stacon_t1_ParamLimits

0x1724,	// (0x00040247) control_top_pane_stacon_t1

0x175b,	// (0x0004027e) aid_levels_battery_lsc_ParamLimits

0x175b,	// (0x0004027e) aid_levels_battery_lsc

0x1772,	// (0x00040295) battery_pane_stacon_g1_ParamLimits

0x1772,	// (0x00040295) battery_pane_stacon_g1

0x1785,	// (0x000402a8) battery_pane_stacon_g2_ParamLimits

0x1785,	// (0x000402a8) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0004e201) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0004e201) battery_pane_stacon_g

0x17c3,	// (0x000402e6) navi_icon_pane_stacon

0x17d7,	// (0x000402fa) navi_navi_pane_stacon

0x17c3,	// (0x000402e6) navi_text_pane_stacon

0x171c,	// (0x0004023f) control_bottom_pane_stacon_g1

0x17eb,	// (0x0004030e) control_bottom_pane_stacon_t1_ParamLimits

0x17eb,	// (0x0004030e) control_bottom_pane_stacon_t1

0xd4a9,	// (0x0004bfcc) grid_app_pane_ParamLimits

0xd4a9,	// (0x0004bfcc) grid_app_pane

0xd4e1,	// (0x0004c004) scroll_pane_cp15_ParamLimits

0xd4e1,	// (0x0004c004) scroll_pane_cp15

0xd4f6,	// (0x0004c019) cell_app_pane_ParamLimits

0xd4f6,	// (0x0004c019) cell_app_pane

0xd53b,	// (0x0004c05e) cell_app_pane_g1_ParamLimits

0xd53b,	// (0x0004c05e) cell_app_pane_g1

0x4550,	// (0x00043073) cell_app_pane_g2_ParamLimits

0x4550,	// (0x00043073) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004e206) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004e206) cell_app_pane_g

0xd55f,	// (0x0004c082) cell_app_pane_t1_ParamLimits

0xd55f,	// (0x0004c082) cell_app_pane_t1

0x4573,	// (0x00043096) grid_highlight_pane_ParamLimits

0x4573,	// (0x00043096) grid_highlight_pane

0x416e,	// (0x00042c91) cell_highlight_pane_g1

0x4176,	// (0x00042c99) cell_highlight_pane_g2

0x417e,	// (0x00042ca1) cell_highlight_pane_g3

0x4186,	// (0x00042ca9) cell_highlight_pane_g4

0x418e,	// (0x00042cb1) cell_highlight_pane_g5

0x4196,	// (0x00042cb9) cell_highlight_pane_g6

0x419e,	// (0x00042cc1) cell_highlight_pane_g7

0x41a6,	// (0x00042cc9) cell_highlight_pane_g8

0x41ae,	// (0x00042cd1) cell_highlight_pane_g9

0x37bd,	// (0x000422e0) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004e1b4) cell_highlight_pane_g

0x4584,	// (0x000430a7) bg_scroll_pane

0x1835,	// (0x00040358) scroll_handle_pane

0x45cb,	// (0x000430ee) scroll_bg_pane_g1

0x45e0,	// (0x00043103) scroll_bg_pane_g2

0x45f8,	// (0x0004311b) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004e20b) scroll_bg_pane_g

0x460d,	// (0x00043130) scroll_handle_focus_pane_ParamLimits

0x460d,	// (0x00043130) scroll_handle_focus_pane

0x45cb,	// (0x000430ee) scroll_handle_pane_g1

0x461a,	// (0x0004313d) scroll_handle_pane_g2

0x45f8,	// (0x0004311b) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0004e212) scroll_handle_pane_g

0x41bf,	// (0x00042ce2) bg_popup_sub_pane_cp21_ParamLimits

0x41bf,	// (0x00042ce2) bg_popup_sub_pane_cp21

0x462e,	// (0x00043151) popup_fep_japan_predictive_window_t1_ParamLimits

0x462e,	// (0x00043151) popup_fep_japan_predictive_window_t1

0x4648,	// (0x0004316b) popup_fep_japan_predictive_window_t2_ParamLimits

0x4648,	// (0x0004316b) popup_fep_japan_predictive_window_t2

0x467b,	// (0x0004319e) popup_fep_japan_predictive_window_t3_ParamLimits

0x467b,	// (0x0004319e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004e219) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004e219) popup_fep_japan_predictive_window_t

0x37c7,	// (0x000422ea) bg_popup_sub_pane_cp23

0x46b2,	// (0x000431d5) listscroll_japin_cand_pane

0x46ba,	// (0x000431dd) popup_fep_japan_candidate_window_t1

0x46c8,	// (0x000431eb) candidate_pane_ParamLimits

0x46c8,	// (0x000431eb) candidate_pane

0x46da,	// (0x000431fd) scroll_pane_cp30

0x46e2,	// (0x00043205) list_single_popup_jap_candidate_pane_ParamLimits

0x46e2,	// (0x00043205) list_single_popup_jap_candidate_pane

0x37c7,	// (0x000422ea) list_highlight_pane_cp30

0x46f7,	// (0x0004321a) list_single_popup_jap_candidate_pane_t1

0x4706,	// (0x00043229) level_1_signal

0x4718,	// (0x0004323b) level_2_signal

0x472b,	// (0x0004324e) level_3_signal

0x473e,	// (0x00043261) level_4_signal

0x4751,	// (0x00043274) level_5_signal

0x4764,	// (0x00043287) level_6_signal

0x4777,	// (0x0004329a) level_7_signal

0x4706,	// (0x00043229) level_1_battery

0x4718,	// (0x0004323b) level_2_battery

0x472b,	// (0x0004324e) level_3_battery

0x473e,	// (0x00043261) level_4_battery

0x4751,	// (0x00043274) level_5_battery

0x4764,	// (0x00043287) level_6_battery

0x4777,	// (0x0004329a) level_7_battery

0x47a2,	// (0x000432c5) list_menu_pane_ParamLimits

0x47a2,	// (0x000432c5) list_menu_pane

0x47b8,	// (0x000432db) scroll_pane_cp25_ParamLimits

0x47b8,	// (0x000432db) scroll_pane_cp25

0x47d1,	// (0x000432f4) list_double2_graphic_pane_cp2_ParamLimits

0x47d1,	// (0x000432f4) list_double2_graphic_pane_cp2

0x47d1,	// (0x000432f4) list_double2_large_graphic_pane_cp2_ParamLimits

0x47d1,	// (0x000432f4) list_double2_large_graphic_pane_cp2

0x47d1,	// (0x000432f4) list_double2_pane_cp2_ParamLimits

0x47d1,	// (0x000432f4) list_double2_pane_cp2

0x47d1,	// (0x000432f4) list_double_graphic_pane_cp2_ParamLimits

0x47d1,	// (0x000432f4) list_double_graphic_pane_cp2

0x47d1,	// (0x000432f4) list_double_large_graphic_pane_cp2_ParamLimits

0x47d1,	// (0x000432f4) list_double_large_graphic_pane_cp2

0x47d1,	// (0x000432f4) list_double_number_pane_cp2_ParamLimits

0x47d1,	// (0x000432f4) list_double_number_pane_cp2

0x47d1,	// (0x000432f4) list_double_pane_cp2_ParamLimits

0x47d1,	// (0x000432f4) list_double_pane_cp2

0xd576,	// (0x0004c099) list_single_2graphic_pane_cp2_ParamLimits

0xd576,	// (0x0004c099) list_single_2graphic_pane_cp2

0xd576,	// (0x0004c099) list_single_graphic_heading_pane_cp2_ParamLimits

0xd576,	// (0x0004c099) list_single_graphic_heading_pane_cp2

0xd576,	// (0x0004c099) list_single_graphic_pane_cp2_ParamLimits

0xd576,	// (0x0004c099) list_single_graphic_pane_cp2

0xd576,	// (0x0004c099) list_single_heading_pane_cp2_ParamLimits

0xd576,	// (0x0004c099) list_single_heading_pane_cp2

0x480e,	// (0x00043331) list_single_large_graphic_pane_cp2_ParamLimits

0x480e,	// (0x00043331) list_single_large_graphic_pane_cp2

0xd576,	// (0x0004c099) list_single_number_heading_pane_cp2_ParamLimits

0xd576,	// (0x0004c099) list_single_number_heading_pane_cp2

0xd576,	// (0x0004c099) list_single_number_pane_cp2_ParamLimits

0xd576,	// (0x0004c099) list_single_number_pane_cp2

0xd576,	// (0x0004c099) list_single_pane_cp2_ParamLimits

0xd576,	// (0x0004c099) list_single_pane_cp2

0x488a,	// (0x000433ad) bg_popup_sub_pane_cp22

0x18e7,	// (0x0004040a) popup_side_volume_key_window_g1

0x1911,	// (0x00040434) popup_side_volume_key_window_t1

0x192d,	// (0x00040450) volume_small_pane_cp1

0x3b22,	// (0x00042645) bg_popup_sub_pane_cp24_ParamLimits

0x3b22,	// (0x00042645) bg_popup_sub_pane_cp24

0x48a0,	// (0x000433c3) fep_china_uni_candidate_pane_ParamLimits

0x48a0,	// (0x000433c3) fep_china_uni_candidate_pane

0x48b4,	// (0x000433d7) fep_china_uni_entry_pane

0x48c4,	// (0x000433e7) popup_fep_china_uni_window_g1

0x48e0,	// (0x00043403) fep_china_uni_entry_pane_g1

0x48e8,	// (0x0004340b) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0004e24a) fep_china_uni_entry_pane_g

0x48f0,	// (0x00043413) fep_entry_item_pane

0x48fa,	// (0x0004341d) fep_candidate_item_pane

0x4902,	// (0x00043425) fep_china_uni_candidate_pane_g1

0x490a,	// (0x0004342d) fep_china_uni_candidate_pane_g2

0x4912,	// (0x00043435) fep_china_uni_candidate_pane_g3

0x491a,	// (0x0004343d) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0004e24f) fep_china_uni_candidate_pane_g

0x37bd,	// (0x000422e0) fep_entry_item_pane_g1

0x4922,	// (0x00043445) fep_entry_item_pane_t1_ParamLimits

0x4922,	// (0x00043445) fep_entry_item_pane_t1

0x4938,	// (0x0004345b) fep_candidate_item_pane_t1_ParamLimits

0x4938,	// (0x0004345b) fep_candidate_item_pane_t1

0x494d,	// (0x00043470) fep_candidate_item_pane_t2_ParamLimits

0x494d,	// (0x00043470) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0004e258) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0004e258) fep_candidate_item_pane_t

0x38a7,	// (0x000423ca) list_highlight_pane_cp31_ParamLimits

0x38a7,	// (0x000423ca) list_highlight_pane_cp31

0x495f,	// (0x00043482) level_1_signal_lsc

0x4968,	// (0x0004348b) level_2_signal_lsc

0x4971,	// (0x00043494) level_3_signal_lsc

0x497a,	// (0x0004349d) level_4_signal_lsc

0x4983,	// (0x000434a6) level_5_signal_lsc

0x498c,	// (0x000434af) level_6_signal_lsc

0x4995,	// (0x000434b8) level_7_signal_lsc

0x4995,	// (0x000434b8) level_1_battery_lsc

0x499e,	// (0x000434c1) level_2_battery_lsc

0x49a7,	// (0x000434ca) level_3_battery_lsc

0x49b0,	// (0x000434d3) level_4_battery_lsc

0x49b9,	// (0x000434dc) level_5_battery_lsc

0x49c2,	// (0x000434e5) level_6_battery_lsc

0x495f,	// (0x00043482) level_7_battery_lsc

0x49cb,	// (0x000434ee) scroll_handle_focus_pane_g1

0x49d4,	// (0x000434f7) scroll_handle_focus_pane_g2

0x49dd,	// (0x00043500) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0004e25d) scroll_handle_focus_pane_g

0xbd05,	// (0x0004a828) list_single_2graphic_pane_g1_ParamLimits

0xbd05,	// (0x0004a828) list_single_2graphic_pane_g1

0xc13f,	// (0x0004ac62) list_single_2graphic_pane_g2_ParamLimits

0xc13f,	// (0x0004ac62) list_single_2graphic_pane_g2

0x229a,	// (0x00040dbd) list_single_2graphic_pane_g3_ParamLimits

0x229a,	// (0x00040dbd) list_single_2graphic_pane_g3

0xbd11,	// (0x0004a834) list_single_2graphic_pane_g4_ParamLimits

0xbd11,	// (0x0004a834) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0004e264) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0004e264) list_single_2graphic_pane_g

0xbd1d,	// (0x0004a840) list_single_2graphic_pane_t1_ParamLimits

0xbd1d,	// (0x0004a840) list_single_2graphic_pane_t1

0xc17d,	// (0x0004aca0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc17d,	// (0x0004aca0) list_double2_graphic_large_graphic_pane_g1

0xb98b,	// (0x0004a4ae) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb98b,	// (0x0004a4ae) list_double2_graphic_large_graphic_pane_g2

0xc168,	// (0x0004ac8b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc168,	// (0x0004ac8b) list_double2_graphic_large_graphic_pane_g3

0xbd4b,	// (0x0004a86e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbd4b,	// (0x0004a86e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0004e26d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0004e26d) list_double2_graphic_large_graphic_pane_g

0xbd57,	// (0x0004a87a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd57,	// (0x0004a87a) list_double2_graphic_large_graphic_pane_t1

0xbd6d,	// (0x0004a890) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd6d,	// (0x0004a890) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0004e276) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0004e276) list_double2_graphic_large_graphic_pane_t

0x4b25,	// (0x00043648) popup_fast_swap_window_ParamLimits

0x4b25,	// (0x00043648) popup_fast_swap_window

0x4b41,	// (0x00043664) popup_side_volume_key_window

0x4b5d,	// (0x00043680) stacon_top_pane

0x4b67,	// (0x0004368a) status_pane_ParamLimits

0x4b67,	// (0x0004368a) status_pane

0xd603,	// (0x0004c126) status_small_pane

0x37c7,	// (0x000422ea) control_pane

0x37c7,	// (0x000422ea) stacon_bottom_pane

0x4105,	// (0x00042c28) scroll_pane_cp121

0x40fc,	// (0x00042c1f) set_content_pane

0x49e6,	// (0x00043509) bg_active_tab_pane_g1_cp1

0x49ef,	// (0x00043512) bg_active_tab_pane_g2_cp1

0x49f8,	// (0x0004351b) bg_active_tab_pane_g3_cp1

0x49e6,	// (0x00043509) bg_passive_tab_pane_g1_cp1

0x49ef,	// (0x00043512) bg_passive_tab_pane_g2_cp1

0x49f8,	// (0x0004351b) bg_passive_tab_pane_g3_cp1

0x4a01,	// (0x00043524) bg_active_tab_pane_g1_cp2

0x49ef,	// (0x00043512) bg_active_tab_pane_g2_cp2

0x4a0a,	// (0x0004352d) bg_active_tab_pane_g3_cp2

0x4a01,	// (0x00043524) bg_passive_tab_pane_g1_cp2

0x49ef,	// (0x00043512) bg_passive_tab_pane_g2_cp2

0x4a0a,	// (0x0004352d) bg_passive_tab_pane_g3_cp2

0x4a13,	// (0x00043536) bg_active_tab_pane_g1_cp3

0x49ef,	// (0x00043512) bg_active_tab_pane_g2_cp3

0x4a1c,	// (0x0004353f) bg_active_tab_pane_g3_cp3

0x4a13,	// (0x00043536) bg_passive_tab_pane_g1_cp3

0x49ef,	// (0x00043512) bg_passive_tab_pane_g2_cp3

0x4a1c,	// (0x0004353f) bg_passive_tab_pane_g3_cp3

0x4a25,	// (0x00043548) bg_active_tab_pane_g1_cp4

0x49ef,	// (0x00043512) bg_active_tab_pane_g2_cp4

0x4a30,	// (0x00043553) bg_active_tab_pane_g3_cp4

0x4a25,	// (0x00043548) bg_passive_tab_pane_g1_cp4

0x49ef,	// (0x00043512) bg_passive_tab_pane_g2_cp4

0x4a30,	// (0x00043553) bg_passive_tab_pane_g3_cp4

0x4a79,	// (0x0004359c) bg_active_tab_pane_g1_cp5

0x49ef,	// (0x00043512) bg_active_tab_pane_g2_cp5

0x4a82,	// (0x000435a5) bg_active_tab_pane_g3_cp5

0x4a79,	// (0x0004359c) bg_passive_tab_pane_g1_cp5

0x49ef,	// (0x00043512) bg_passive_tab_pane_g2_cp5

0x4a82,	// (0x000435a5) bg_passive_tab_pane_g3_cp5

0x70eb,	// (0x00045c0e) list_set_graphic_pane_ParamLimits

0x70eb,	// (0x00045c0e) list_set_graphic_pane

0x37c7,	// (0x000422ea) bg_set_opt_pane_cp4

0x4aa8,	// (0x000435cb) list_set_graphic_pane_g1_ParamLimits

0x4aa8,	// (0x000435cb) list_set_graphic_pane_g1

0x4ab4,	// (0x000435d7) list_set_graphic_pane_g2_ParamLimits

0x4ab4,	// (0x000435d7) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0004e27b) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0004e27b) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0004e5e4) volume_small_pane_cp_g

0x4ad8,	// (0x000435fb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4ad8,	// (0x000435fb) list_double2_large_graphic_pane_g1_cp2

0x4ae4,	// (0x00043607) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4ae4,	// (0x00043607) list_double2_large_graphic_pane_g2_cp2

0x4af5,	// (0x00043618) list_double2_large_graphic_pane_g3_cp2

0x4afd,	// (0x00043620) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4afd,	// (0x00043620) list_double2_large_graphic_pane_t1_cp2

0x4b13,	// (0x00043636) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4b13,	// (0x00043636) list_double2_large_graphic_pane_t2_cp2

0x66f6,	// (0x00045219) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x66f6,	// (0x00045219) list_double_large_graphic_pane_g1_cp2

0x6707,	// (0x0004522a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6707,	// (0x0004522a) list_double_large_graphic_pane_g2_cp2

0x4c8e,	// (0x000437b1) list_double_large_graphic_pane_g3_cp2

0x6718,	// (0x0004523b) list_double_large_graphic_pane_g4_cp

0x6720,	// (0x00045243) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6720,	// (0x00045243) list_double_large_graphic_pane_t1_cp2

0x6737,	// (0x0004525a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6737,	// (0x0004525a) list_double_large_graphic_pane_t2_cp2

0x4b80,	// (0x000436a3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4b80,	// (0x000436a3) list_double2_graphic_pane_g1_cp2

0x4b8e,	// (0x000436b1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4b8e,	// (0x000436b1) list_double2_graphic_pane_g2_cp2

0x4b9f,	// (0x000436c2) list_double2_graphic_pane_g3_cp2

0x4ba9,	// (0x000436cc) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4ba9,	// (0x000436cc) list_double2_graphic_pane_t1_cp2

0x4bbf,	// (0x000436e2) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4bbf,	// (0x000436e2) list_double2_graphic_pane_t2_cp2

0x4bd1,	// (0x000436f4) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4bd1,	// (0x000436f4) list_single_number_heading_pane_g1_cp2

0x4bdd,	// (0x00043700) list_single_number_heading_pane_g2_cp2

0x4be5,	// (0x00043708) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4be5,	// (0x00043708) list_single_number_heading_pane_t1_cp2

0x4bfb,	// (0x0004371e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4bfb,	// (0x0004371e) list_single_number_heading_pane_t2_cp2

0x4c0d,	// (0x00043730) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4c0d,	// (0x00043730) list_single_number_heading_pane_t3_cp2

0x4bd1,	// (0x000436f4) list_single_heading_pane_g1_cp2_ParamLimits

0x4bd1,	// (0x000436f4) list_single_heading_pane_g1_cp2

0x4bdd,	// (0x00043700) list_single_heading_pane_g2_cp2

0x4be5,	// (0x00043708) list_single_heading_pane_t1_cp2_ParamLimits

0x4be5,	// (0x00043708) list_single_heading_pane_t1_cp2

0x64fe,	// (0x00045021) list_single_heading_pane_t2_cp2_ParamLimits

0x64fe,	// (0x00045021) list_single_heading_pane_t2_cp2

0x6446,	// (0x00044f69) list_double_graphic_pane_g1_cp2_ParamLimits

0x6446,	// (0x00044f69) list_double_graphic_pane_g1_cp2

0x6452,	// (0x00044f75) list_double_graphic_pane_g2_cp2_ParamLimits

0x6452,	// (0x00044f75) list_double_graphic_pane_g2_cp2

0x6461,	// (0x00044f84) list_double_graphic_pane_g3_cp2

0x6469,	// (0x00044f8c) list_double_graphic_pane_t1_cp2_ParamLimits

0x6469,	// (0x00044f8c) list_double_graphic_pane_t1_cp2

0x647f,	// (0x00044fa2) list_double_graphic_pane_t2_cp2_ParamLimits

0x647f,	// (0x00044fa2) list_double_graphic_pane_t2_cp2

0x4c82,	// (0x000437a5) list_double_number_pane_g1_cp2_ParamLimits

0x4c82,	// (0x000437a5) list_double_number_pane_g1_cp2

0x4c8e,	// (0x000437b1) list_double_number_pane_g2_cp2

0x640a,	// (0x00044f2d) list_double_number_pane_t1_cp2_ParamLimits

0x640a,	// (0x00044f2d) list_double_number_pane_t1_cp2

0x641e,	// (0x00044f41) list_double_number_pane_t2_cp2_ParamLimits

0x641e,	// (0x00044f41) list_double_number_pane_t2_cp2

0x6434,	// (0x00044f57) list_double_number_pane_t3_cp2_ParamLimits

0x6434,	// (0x00044f57) list_double_number_pane_t3_cp2

0x62f3,	// (0x00044e16) list_single_graphic_pane_g1_cp2_ParamLimits

0x62f3,	// (0x00044e16) list_single_graphic_pane_g1_cp2

0x4ce6,	// (0x00043809) list_single_graphic_pane_g2_cp2_ParamLimits

0x4ce6,	// (0x00043809) list_single_graphic_pane_g2_cp2

0x4cf2,	// (0x00043815) list_single_graphic_pane_g3_cp2

0x62c9,	// (0x00044dec) list_single_graphic_pane_t1_cp2_ParamLimits

0x62c9,	// (0x00044dec) list_single_graphic_pane_t1_cp2

0x4ce6,	// (0x00043809) list_single_number_pane_g1_cp2_ParamLimits

0x4ce6,	// (0x00043809) list_single_number_pane_g1_cp2

0x4cf2,	// (0x00043815) list_single_number_pane_g2_cp2

0x62c9,	// (0x00044dec) list_single_number_pane_t1_cp2_ParamLimits

0x62c9,	// (0x00044dec) list_single_number_pane_t1_cp2

0x62df,	// (0x00044e02) list_single_number_pane_t2_cp2_ParamLimits

0x62df,	// (0x00044e02) list_single_number_pane_t2_cp2

0x4ae4,	// (0x00043607) list_double2_pane_g1_cp2_ParamLimits

0x4ae4,	// (0x00043607) list_double2_pane_g1_cp2

0x4af5,	// (0x00043618) list_double2_pane_g2_cp2

0x4c5a,	// (0x0004377d) list_double2_pane_t1_cp2_ParamLimits

0x4c5a,	// (0x0004377d) list_double2_pane_t1_cp2

0x4c70,	// (0x00043793) list_double2_pane_t2_cp2_ParamLimits

0x4c70,	// (0x00043793) list_double2_pane_t2_cp2

0x4c82,	// (0x000437a5) list_double_pane_g1_cp2_ParamLimits

0x4c82,	// (0x000437a5) list_double_pane_g1_cp2

0x4c8e,	// (0x000437b1) list_double_pane_g2_cp2

0x4c96,	// (0x000437b9) list_double_pane_t1_cp2_ParamLimits

0x4c96,	// (0x000437b9) list_double_pane_t1_cp2

0x4cac,	// (0x000437cf) list_double_pane_t2_cp2_ParamLimits

0x4cac,	// (0x000437cf) list_double_pane_t2_cp2

0x4cd6,	// (0x000437f9) list_single_pane_cp2_g3

0x4ce6,	// (0x00043809) list_single_pane_g1_cp2_ParamLimits

0x4ce6,	// (0x00043809) list_single_pane_g1_cp2

0x4cf2,	// (0x00043815) list_single_pane_g2_cp2

0x4cfa,	// (0x0004381d) list_single_pane_t1_cp2_ParamLimits

0x4cfa,	// (0x0004381d) list_single_pane_t1_cp2

0x4d12,	// (0x00043835) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4d12,	// (0x00043835) list_single_large_graphic_pane_g1_cp2

0x4d1e,	// (0x00043841) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4d1e,	// (0x00043841) list_single_large_graphic_pane_g2_cp2

0x4d2a,	// (0x0004384d) list_single_large_graphic_pane_g3_cp2

0x4d32,	// (0x00043855) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4d32,	// (0x00043855) list_single_large_graphic_pane_g4_cp1

0x4d4c,	// (0x0004386f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4d4c,	// (0x0004386f) list_single_large_graphic_pane_t1_cp2

0x6295,	// (0x00044db8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6295,	// (0x00044db8) list_single_graphic_heading_pane_g1_cp2

0x6262,	// (0x00044d85) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6262,	// (0x00044d85) list_single_graphic_heading_pane_g4_cp2

0x4cf2,	// (0x00043815) list_single_graphic_heading_pane_g5_cp2

0x62a1,	// (0x00044dc4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x62a1,	// (0x00044dc4) list_single_graphic_heading_pane_t1_cp2

0x62b7,	// (0x00044dda) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x62b7,	// (0x00044dda) list_single_graphic_heading_pane_t2_cp2

0x6256,	// (0x00044d79) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6256,	// (0x00044d79) list_single_2graphic_pane_g1_cp2

0x6262,	// (0x00044d85) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6262,	// (0x00044d85) list_single_2graphic_pane_g2_cp2

0x4cf2,	// (0x00043815) list_single_2graphic_pane_g3_cp2

0x6273,	// (0x00044d96) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6273,	// (0x00044d96) list_single_2graphic_pane_g4_cp2

0x627f,	// (0x00044da2) list_single_2graphic_pane_t1_cp2_ParamLimits

0x627f,	// (0x00044da2) list_single_2graphic_pane_t1_cp2

0x37bd,	// (0x000422e0) list_highlight_pane_g10_cp1

0x5e2e,	// (0x00044951) list_highlight_pane_g1_cp1

0x5e36,	// (0x00044959) list_highlight_pane_g2_cp1

0x5e3e,	// (0x00044961) list_highlight_pane_g3_cp1

0x5e46,	// (0x00044969) list_highlight_pane_g4_cp1

0x5e4e,	// (0x00044971) list_highlight_pane_g5_cp1

0x5e56,	// (0x00044979) list_highlight_pane_g6_cp1

0x5e5e,	// (0x00044981) list_highlight_pane_g7_cp1

0x5e66,	// (0x00044989) list_highlight_pane_g8_cp1

0x5e6e,	// (0x00044991) list_highlight_pane_g9_cp1

0xdc43,	// (0x0004c766) form_field_slider_pane_t3

0xdc51,	// (0x0004c774) form_field_slider_pane_t4

0x5d6a,	// (0x0004488d) slider_form_pane_ParamLimits

0x5d6a,	// (0x0004488d) slider_form_pane

0x37c7,	// (0x000422ea) control_abbreviations

0x37c7,	// (0x000422ea) control_conventions

0x37c7,	// (0x000422ea) control_definitions

0x37c7,	// (0x000422ea) format_table_attribute

0x6548,	// (0x0004506b) bg_popup_preview_window_pane_g9

0x37c7,	// (0x000422ea) format_table_data2

0x37c7,	// (0x000422ea) format_table_data3

0x37c7,	// (0x000422ea) format_table_data_example

0x0008,

0x37c7,	// (0x000422ea) intro_purpose

0xf8ef,	// (0x0004e412) bg_popup_preview_window_pane_g

0x37c7,	// (0x000422ea) texts_category

0x37c7,	// (0x000422ea) texts_graphics

0x4d62,	// (0x00043885) text_digital

0x4d71,	// (0x00043894) text_primary

0x4d80,	// (0x000438a3) text_primary_small

0x4d8f,	// (0x000438b2) text_secondary

0x4d9e,	// (0x000438c1) text_title

0x6c2d,	// (0x00045750) bg_passive_tab_pane_g1_cp3_srt

0x49ef,	// (0x00043512) bg_passive_tab_pane_g2_cp3_srt

0x6c36,	// (0x00045759) bg_passive_tab_pane_g3_cp3_srt

0x3b22,	// (0x00042645) bg_active_tab_pane_cp3_srt_ParamLimits

0x3b22,	// (0x00042645) bg_active_tab_pane_cp3_srt

0x6c3f,	// (0x00045762) tabs_4_active_pane_srt_g1

0xdf84,	// (0x0004caa7) tabs_4_active_pane_srt_t1_ParamLimits

0xdf84,	// (0x0004caa7) tabs_4_active_pane_srt_t1

0x6c2d,	// (0x00045750) bg_active_tab_pane_g1_cp3_copy1

0x49ef,	// (0x00043512) bg_active_tab_pane_g2_cp3_copy1

0x6c36,	// (0x00045759) bg_active_tab_pane_g3_cp3_copy1

0x38a7,	// (0x000423ca) tabs_2_long_active_pane_srt_ParamLimits

0x38a7,	// (0x000423ca) tabs_2_long_active_pane_srt

0x38a7,	// (0x000423ca) tabs_2_long_passive_pane_srt_ParamLimits

0x38a7,	// (0x000423ca) tabs_2_long_passive_pane_srt

0x50fc,	// (0x00043c1f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x50fc,	// (0x00043c1f) bg_passive_tab_pane_cp4_srt

0x6976,	// (0x00045499) bg_passive_tab_pane_g1_cp4_srt

0x49ef,	// (0x00043512) bg_passive_tab_pane_g2_cp4_srt

0x697f,	// (0x000454a2) bg_passive_tab_pane_g3_cp4_srt

0x38a7,	// (0x000423ca) bg_active_tab_pane_cp4_srt_ParamLimits

0x38a7,	// (0x000423ca) bg_active_tab_pane_cp4_srt

0xddae,	// (0x0004c8d1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xddae,	// (0x0004c8d1) tabs_2_long_active_pane_srt_t1

0x6976,	// (0x00045499) bg_active_tab_pane_g1_cp4_srt

0x49ef,	// (0x00043512) bg_active_tab_pane_g2_cp4_srt

0x697f,	// (0x000454a2) bg_active_tab_pane_g3_cp4_srt

0x3b22,	// (0x00042645) tabs_3_long_active_pane_srt_ParamLimits

0x3b22,	// (0x00042645) tabs_3_long_active_pane_srt

0x3b22,	// (0x00042645) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3b22,	// (0x00042645) tabs_3_long_passive_pane_cp_srt

0x3b22,	// (0x00042645) tabs_3_long_passive_pane_srt_ParamLimits

0x3b22,	// (0x00042645) tabs_3_long_passive_pane_srt

0x50fc,	// (0x00043c1f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x50fc,	// (0x00043c1f) bg_passive_tab_pane_cp5_srt

0x4a79,	// (0x0004359c) bg_passive_tab_pane_g1_cp5_srt

0x49ef,	// (0x00043512) bg_passive_tab_pane_g2_cp5_srt

0x4a82,	// (0x000435a5) bg_passive_tab_pane_g3_cp5_srt

0x38a7,	// (0x000423ca) bg_active_tab_pane_cp5_srt_ParamLimits

0x38a7,	// (0x000423ca) bg_active_tab_pane_cp5_srt

0xdd98,	// (0x0004c8bb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd98,	// (0x0004c8bb) tabs_3_long_active_pane_srt_t1

0x4a79,	// (0x0004359c) bg_active_tab_pane_g1_cp5_srt

0x49ef,	// (0x00043512) bg_active_tab_pane_g2_cp5_srt

0x4a82,	// (0x000435a5) bg_active_tab_pane_g3_cp5_srt

0x6956,	// (0x00045479) navi_text_pane_srt_t1

0x694e,	// (0x00045471) navi_icon_pane_srt_g1

0x4f73,	// (0x00043a96) midp_editing_number_pane_srt

0x4dad,	// (0x000438d0) midp_ticker_pane_srt

0x4f7b,	// (0x00043a9e) midp_ticker_pane_srt_g1

0x4f83,	// (0x00043aa6) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004e29a) midp_ticker_pane_srt_g

0x4f8b,	// (0x00043aae) midp_ticker_pane_srt_t1

0x693f,	// (0x00045462) midp_editing_number_pane_t1_copy1

0xd60e,	// (0x0004c131) listscroll_midp_pane

0xd60e,	// (0x0004c131) midp_form_pane

0x4e25,	// (0x00043948) midp_info_popup_window_ParamLimits

0x4e25,	// (0x00043948) midp_info_popup_window

0x41bf,	// (0x00042ce2) bg_popup_sub_pane_cp50_ParamLimits

0x41bf,	// (0x00042ce2) bg_popup_sub_pane_cp50

0x5a66,	// (0x00044589) listscroll_midp_info_pane_ParamLimits

0x5a66,	// (0x00044589) listscroll_midp_info_pane

0x5a46,	// (0x00044569) listscroll_form_midp_pane_ParamLimits

0x5a46,	// (0x00044569) listscroll_form_midp_pane

0x5a52,	// (0x00044575) scroll_bar_cp050

0x5a46,	// (0x00044569) list_midp_pane

0x7670,	// (0x00046193) signal_pane_g2_cp

0x5954,	// (0x00044477) listscroll_midp_info_pane_t1_ParamLimits

0x5954,	// (0x00044477) listscroll_midp_info_pane_t1

0x596c,	// (0x0004448f) listscroll_midp_info_pane_t2_ParamLimits

0x596c,	// (0x0004448f) listscroll_midp_info_pane_t2

0x59aa,	// (0x000444cd) listscroll_midp_info_pane_t3_ParamLimits

0x59aa,	// (0x000444cd) listscroll_midp_info_pane_t3

0x59e4,	// (0x00044507) listscroll_midp_info_pane_t4_ParamLimits

0x59e4,	// (0x00044507) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0004e34d) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0004e34d) listscroll_midp_info_pane_t

0x4283,	// (0x00042da6) scroll_pane_cp21

0x58f2,	// (0x00044415) form_midp_field_choice_group_pane

0x58fb,	// (0x0004441e) form_midp_field_text_pane

0x593a,	// (0x0004445d) form_midp_field_time_pane

0x5942,	// (0x00044465) form_midp_gauge_slider_pane

0x594b,	// (0x0004446e) form_midp_gauge_wait_pane

0x37c7,	// (0x000422ea) form_midp_image_pane

0xbd7f,	// (0x0004a8a2) list_single_midp_pane_ParamLimits

0xbd7f,	// (0x0004a8a2) list_single_midp_pane

0xdc22,	// (0x0004c745) form_midp_field_text_pane_t1

0x567a,	// (0x0004419d) input_focus_pane_cp050

0x58e1,	// (0x00044404) list_midp_form_text_pane

0x5879,	// (0x0004439c) form_midp_field_choice_group_pane_t1

0x5887,	// (0x000443aa) input_focus_pane_cp051

0x589b,	// (0x000443be) list_midp_choice_pane

0x37c7,	// (0x000422ea) status_idle_pane

0x585d,	// (0x00044380) form_midp_field_time_pane_t1

0x37bd,	// (0x000422e0) wait_anim_pane_g2_copy1

0x586b,	// (0x0004438e) form_midp_field_time_pane_t2

0x0001,

0x4ed3,	// (0x000439f6) aid_navinavi_width_2_pane

0xf825,	// (0x0004e348) form_midp_field_time_pane_t

0x37c7,	// (0x000422ea) input_focus_pane_cp052

0x37c7,	// (0x000422ea) bg_input_focus_pane_cp040

0x581d,	// (0x00044340) form_midp_gauge_slider_pane_t1

0x582b,	// (0x0004434e) form_midp_gauge_slider_pane_t2

0xdc06,	// (0x0004c729) form_midp_gauge_slider_pane_t3

0xdc14,	// (0x0004c737) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0004e33f) form_midp_gauge_slider_pane_t

0x5855,	// (0x00044378) form_midp_slider_pane

0x38a7,	// (0x000423ca) bg_input_focus_pane_cp041_ParamLimits

0x38a7,	// (0x000423ca) bg_input_focus_pane_cp041

0x57ea,	// (0x0004430d) form_midp_gauge_wait_pane_t1_ParamLimits

0x57ea,	// (0x0004430d) form_midp_gauge_wait_pane_t1

0x57fc,	// (0x0004431f) form_midp_gauge_wait_pane_t2_ParamLimits

0x57fc,	// (0x0004431f) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0004e33a) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0004e33a) form_midp_gauge_wait_pane_t

0x580e,	// (0x00044331) form_midp_wait_pane_ParamLimits

0x580e,	// (0x00044331) form_midp_wait_pane

0x57b4,	// (0x000442d7) form_midp_image_pane_g1

0x57bd,	// (0x000442e0) form_midp_image_pane_t1

0x57cc,	// (0x000442ef) form_midp_image_pane_t2

0x57db,	// (0x000442fe) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0004e333) form_midp_image_pane_t

0x57ab,	// (0x000442ce) list_single_midp_pane_g1

0x0a51,	// (0x0003f574) list_single_midp_pane_t1

0xdbf2,	// (0x0004c715) list_midp_form_item_pane_ParamLimits

0xdbf2,	// (0x0004c715) list_midp_form_item_pane

0x4e7b,	// (0x0004399e) list_midp_form_item_pane_t1

0x4e8a,	// (0x000439ad) midp_ticker_pane_g1

0x4e96,	// (0x000439b9) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0004e280) midp_ticker_pane_g

0x4ea2,	// (0x000439c5) midp_ticker_pane_t1

0x6b90,	// (0x000456b3) midp_editing_number_pane_t1

0x6b6e,	// (0x00045691) midp_editing_number_pane

0x6b7d,	// (0x000456a0) midp_ticker_pane

0x692f,	// (0x00045452) ai_message_heading_pane

0x37c7,	// (0x000422ea) bg_popup_window_pane_cp14

0x6937,	// (0x0004545a) listscroll_ai_message_pane

0x68b9,	// (0x000453dc) ai_message_heading_pane_g1_ParamLimits

0x68b9,	// (0x000453dc) ai_message_heading_pane_g1

0x68c5,	// (0x000453e8) ai_message_heading_pane_g2_ParamLimits

0x68c5,	// (0x000453e8) ai_message_heading_pane_g2

0x68d1,	// (0x000453f4) ai_message_heading_pane_g3_ParamLimits

0x68d1,	// (0x000453f4) ai_message_heading_pane_g3

0x68dd,	// (0x00045400) ai_message_heading_pane_g4_ParamLimits

0x68dd,	// (0x00045400) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0004e474) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0004e474) ai_message_heading_pane_g

0x68e9,	// (0x0004540c) ai_message_heading_pane_t1_ParamLimits

0x68e9,	// (0x0004540c) ai_message_heading_pane_t1

0x6903,	// (0x00045426) ai_message_heading_pane_t2_ParamLimits

0x6903,	// (0x00045426) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0004e47d) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0004e47d) ai_message_heading_pane_t

0x6915,	// (0x00045438) bg_popup_heading_pane_cp1_ParamLimits

0x6915,	// (0x00045438) bg_popup_heading_pane_cp1

0x68a7,	// (0x000453ca) list_ai_message_pane_ParamLimits

0x68a7,	// (0x000453ca) list_ai_message_pane

0x4283,	// (0x00042da6) scroll_pane_cp10

0x6843,	// (0x00045366) list_ai_message_pane_g1

0x684b,	// (0x0004536e) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0004e451) list_ai_message_pane_g

0x6853,	// (0x00045376) list_ai_message_pane_t1_ParamLimits

0x6853,	// (0x00045376) list_ai_message_pane_t1

0x6868,	// (0x0004538b) list_ai_message_pane_t2_ParamLimits

0x6868,	// (0x0004538b) list_ai_message_pane_t2

0x687d,	// (0x000453a0) list_ai_message_pane_t3_ParamLimits

0x687d,	// (0x000453a0) list_ai_message_pane_t3

0x6892,	// (0x000453b5) list_ai_message_pane_t4_ParamLimits

0x6892,	// (0x000453b5) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0004e456) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0004e456) list_ai_message_pane_t

0xdd77,	// (0x0004c89a) cell_ai_soft_ind_pane_ParamLimits

0xdd77,	// (0x0004c89a) cell_ai_soft_ind_pane

0x4eb4,	// (0x000439d7) cell_ai_soft_ind_pane_g1_ParamLimits

0x4eb4,	// (0x000439d7) cell_ai_soft_ind_pane_g1

0x37c7,	// (0x000422ea) grid_highlight_cp1

0x4ec1,	// (0x000439e4) text_secondary_cp56_ParamLimits

0x4ec1,	// (0x000439e4) text_secondary_cp56

0x6803,	// (0x00045326) example_general_pane_ParamLimits

0x6803,	// (0x00045326) example_general_pane

0x680f,	// (0x00045332) example_parent_pane_g1_ParamLimits

0x680f,	// (0x00045332) example_parent_pane_g1

0x681b,	// (0x0004533e) example_parent_pane_t1_ParamLimits

0x681b,	// (0x0004533e) example_parent_pane_t1

0xc6f6,	// (0x0004b219) popup_preview_text_window_ParamLimits

0xc6f6,	// (0x0004b219) popup_preview_text_window

0x4cde,	// (0x00043801) list_single_pane_cp2_g4

0x3bd8,	// (0x000426fb) bg_popup_preview_window_pane_ParamLimits

0x3bd8,	// (0x000426fb) bg_popup_preview_window_pane

0x6550,	// (0x00045073) popup_preview_text_window_t1_ParamLimits

0x6550,	// (0x00045073) popup_preview_text_window_t1

0x656e,	// (0x00045091) popup_preview_text_window_t2_ParamLimits

0x656e,	// (0x00045091) popup_preview_text_window_t2

0x65b7,	// (0x000450da) popup_preview_text_window_t3_ParamLimits

0x65b7,	// (0x000450da) popup_preview_text_window_t3

0x65fc,	// (0x0004511f) popup_preview_text_window_t4_ParamLimits

0x65fc,	// (0x0004511f) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0004e425) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0004e425) popup_preview_text_window_t

0x667a,	// (0x0004519d) scroll_pane_cp11

0x5606,	// (0x00044129) bg_popup_preview_window_pane_g1

0x6510,	// (0x00045033) bg_popup_preview_window_pane_g2

0x6518,	// (0x0004503b) bg_popup_preview_window_pane_g3

0x6520,	// (0x00045043) bg_popup_preview_window_pane_g4

0x6528,	// (0x0004504b) bg_popup_preview_window_pane_g5

0x6530,	// (0x00045053) bg_popup_preview_window_pane_g6

0x6538,	// (0x0004505b) bg_popup_preview_window_pane_g7

0x6540,	// (0x00045063) bg_popup_preview_window_pane_g8

0x1178,	// (0x0003fc9b) aid_popup_width_pane

0xc672,	// (0x0004b195) popup_midp_note_alarm_window_ParamLimits

0xc672,	// (0x0004b195) popup_midp_note_alarm_window

0x4116,	// (0x00042c39) data_form_pane_ParamLimits

0xbbe7,	// (0x0004a70a) form_field_data_pane_g1

0xbbf1,	// (0x0004a714) form_field_data_pane_t1_ParamLimits

0x4122,	// (0x00042c45) input_focus_pane_ParamLimits

0x071c,	// (0x0003f23f) data_form_wide_pane_ParamLimits

0x072d,	// (0x0003f250) form_field_data_wide_pane_g1

0x0739,	// (0x0003f25c) form_field_data_wide_pane_t1_ParamLimits

0x3e87,	// (0x000429aa) input_focus_pane_cp6_ParamLimits

0xd464,	// (0x0004bf87) input_popup_find_pane_g1_ParamLimits

0xd464,	// (0x0004bf87) input_popup_find_pane_g1

0x1796,	// (0x000402b9) aid_navi_side_left_pane

0x17ab,	// (0x000402ce) aid_navi_side_right_pane

0x5f29,	// (0x00044a4c) bg_popup_window_pane_cp30_ParamLimits

0x5f29,	// (0x00044a4c) bg_popup_window_pane_cp30

0x5fa3,	// (0x00044ac6) popup_midp_note_alarm_window_g1_ParamLimits

0x5fa3,	// (0x00044ac6) popup_midp_note_alarm_window_g1

0x5fd3,	// (0x00044af6) popup_midp_note_alarm_window_t1_ParamLimits

0x5fd3,	// (0x00044af6) popup_midp_note_alarm_window_t1

0x6074,	// (0x00044b97) popup_midp_note_alarm_window_t2_ParamLimits

0x6074,	// (0x00044b97) popup_midp_note_alarm_window_t2

0x6122,	// (0x00044c45) popup_midp_note_alarm_window_t3_ParamLimits

0x6122,	// (0x00044c45) popup_midp_note_alarm_window_t3

0x6154,	// (0x00044c77) popup_midp_note_alarm_window_t4_ParamLimits

0x6154,	// (0x00044c77) popup_midp_note_alarm_window_t4

0x617a,	// (0x00044c9d) popup_midp_note_alarm_window_t5_ParamLimits

0x617a,	// (0x00044c9d) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0004e3c2) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0004e3c2) popup_midp_note_alarm_window_t

0x6226,	// (0x00044d49) wait_bar_pane_cp1_ParamLimits

0x6226,	// (0x00044d49) wait_bar_pane_cp1

0x37c7,	// (0x000422ea) wait_anim_pane_copy1

0x37c7,	// (0x000422ea) wait_border_pane_copy1

0x5c0f,	// (0x00044732) wait_border_pane_g1_copy1

0x0753,	// (0x0003f276) form_field_popup_pane_g1

0xbc0b,	// (0x0004a72e) form_field_popup_pane_t1_ParamLimits

0x4122,	// (0x00042c45) input_focus_pane_cp7_ParamLimits

0x4144,	// (0x00042c67) list_form_pane_ParamLimits

0x0773,	// (0x0003f296) form_field_popup_wide_pane_g1

0x077b,	// (0x0003f29e) form_field_popup_wide_pane_t1_ParamLimits

0x4122,	// (0x00042c45) input_focus_pane_cp8_ParamLimits

0x4150,	// (0x00042c73) list_form_wide_pane_ParamLimits

0xdfdd,	// (0x0004cb00) aid_size_cell_graphic_pane

0xbc8a,	// (0x0004a7ad) data_form_pane_t1_ParamLimits

0xbda6,	// (0x0004a8c9) data_form_wide_pane_t1_ParamLimits

0xd877,	// (0x0004c39a) bg_status_flat_pane

0xd123,	// (0x0004bc46) title_pane_t1_ParamLimits

0x386f,	// (0x00042392) title_pane_t2_ParamLimits

0x3895,	// (0x000423b8) title_pane_t3_ParamLimits

0xf557,	// (0x0004e07a) title_pane_t_ParamLimits

0x4706,	// (0x00043229) level_1_signal_ParamLimits

0x4718,	// (0x0004323b) level_2_signal_ParamLimits

0x472b,	// (0x0004324e) level_3_signal_ParamLimits

0x473e,	// (0x00043261) level_4_signal_ParamLimits

0x4751,	// (0x00043274) level_5_signal_ParamLimits

0x4764,	// (0x00043287) level_6_signal_ParamLimits

0x4777,	// (0x0004329a) level_7_signal_ParamLimits

0x4706,	// (0x00043229) level_1_battery_ParamLimits

0x4718,	// (0x0004323b) level_2_battery_ParamLimits

0x472b,	// (0x0004324e) level_3_battery_ParamLimits

0x473e,	// (0x00043261) level_4_battery_ParamLimits

0x4751,	// (0x00043274) level_5_battery_ParamLimits

0x4764,	// (0x00043287) level_6_battery_ParamLimits

0x4777,	// (0x0004329a) level_7_battery_ParamLimits

0x5e2e,	// (0x00044951) bg_status_flat_pane_g1

0x5e36,	// (0x00044959) bg_status_flat_pane_g2

0x5e3e,	// (0x00044961) bg_status_flat_pane_g3

0x5e46,	// (0x00044969) bg_status_flat_pane_g4

0x5e4e,	// (0x00044971) bg_status_flat_pane_g5

0x5e56,	// (0x00044979) bg_status_flat_pane_g6

0x5e5e,	// (0x00044981) bg_status_flat_pane_g7

0xd1af,	// (0x0004bcd2) tabs_3_active_pane_t1_ParamLimits

0xd1af,	// (0x0004bcd2) tabs_3_passive_pane_t1_ParamLimits

0xd1c1,	// (0x0004bce4) tabs_4_active_pane_t1_ParamLimits

0xd1c1,	// (0x0004bce4) tabs_4_1_passive_pane_t1_ParamLimits

0xd472,	// (0x0004bf95) tabs_2_active_pane_t1_ParamLimits

0xd472,	// (0x0004bf95) tabs_2_passive_pane_t1_ParamLimits

0x38a7,	// (0x000423ca) bg_active_tab_pane_cp4_ParamLimits

0xd484,	// (0x0004bfa7) tabs_2_long_active_pane_t1_ParamLimits

0x50fc,	// (0x00043c1f) bg_passive_tab_pane_cp4_ParamLimits

0x22ef,	// (0x00040e12) list_single_midp_graphic_pane_t1_ParamLimits

0x38a7,	// (0x000423ca) bg_active_tab_pane_cp5_ParamLimits

0xd497,	// (0x0004bfba) tabs_3_long_active_pane_t1_ParamLimits

0x50fc,	// (0x00043c1f) bg_passive_tab_pane_cp5_ParamLimits

0x22ef,	// (0x00040e12) list_single_midp_graphic_pane_t1

0xd877,	// (0x0004c39a) bg_status_flat_pane_ParamLimits

0x5296,	// (0x00043db9) indicator_pane_cp2_ParamLimits

0x5296,	// (0x00043db9) indicator_pane_cp2

0xd9f5,	// (0x0004c518) navi_pane_srt_ParamLimits

0xd9f5,	// (0x0004c518) navi_pane_srt

0x53e5,	// (0x00043f08) popup_clock_digital_analogue_window_cp1

0x3984,	// (0x000424a7) indicator_pane_t1

0x4dad,	// (0x000438d0) copy_highlight_pane

0x4dad,	// (0x000438d0) cursor_graphics_pane

0x4dad,	// (0x000438d0) graphic_within_text_pane

0x4dad,	// (0x000438d0) link_highlight_pane

0x663d,	// (0x00045160) popup_preview_text_window_t5_ParamLimits

0x663d,	// (0x00045160) popup_preview_text_window_t5

0x4edb,	// (0x000439fe) cursor_digital_pane

0x4edb,	// (0x000439fe) cursor_primary_pane

0x4eec,	// (0x00043a0f) cursor_primary_small_pane

0x4ef4,	// (0x00043a17) cursor_secondary_pane

0x4efc,	// (0x00043a1f) cursor_title_pane

0x4edb,	// (0x000439fe) link_highlight_digital_pane

0x4ee3,	// (0x00043a06) link_highlight_primary_pane

0x4eec,	// (0x00043a0f) link_highlight_primary_small_pane

0x4ef4,	// (0x00043a17) link_highlight_secondary_pane

0x4efc,	// (0x00043a1f) link_highlight_title_pane

0x4edb,	// (0x000439fe) copy_highlight_digital_pane

0x4edb,	// (0x000439fe) copy_highlight_primary_pane

0x4eec,	// (0x00043a0f) copy_highlight_primary_small_pane

0x4ef4,	// (0x00043a17) copy_highlight_secondary_pane

0x4efc,	// (0x00043a1f) copy_highlight_title_pane

0x4ef4,	// (0x00043a17) graphic_text_digital_pane

0x5ecc,	// (0x000449ef) graphic_text_primary_pane

0x5ed5,	// (0x000449f8) graphic_text_primary_small_pane

0x4eec,	// (0x00043a0f) graphic_text_secondary_pane

0x4edb,	// (0x000439fe) graphic_text_title_pane

0xd6b3,	// (0x0004c1d6) cursor_primary_pane_g1

0x5ebe,	// (0x000449e1) cursor_text_primary_t1

0xdc73,	// (0x0004c796) cursor_primary_small_pane_g1

0x5eb0,	// (0x000449d3) cursor_text_primary_small_t1

0xdc69,	// (0x0004c78c) cursor_primary_small_pane_g1_copy1

0x5e98,	// (0x000449bb) cursor_text_primary_small_t1_copy1

0x5e76,	// (0x00044999) cursor_text_title_t1

0xdc5f,	// (0x0004c782) cursor_title_pane_g1

0xd6b3,	// (0x0004c1d6) cursor_digital_pane_g1

0x4f0e,	// (0x00043a31) cursor_text_digital_t1

0x4f33,	// (0x00043a56) link_highlight_primary_pane_g1

0x5e1f,	// (0x00044942) link_highlight_primary_pane_t1

0x4f1c,	// (0x00043a3f) link_highlight_primary_small_pane_g1

0x4f24,	// (0x00043a47) link_highlight_primary_small_pane_t1

0x4f33,	// (0x00043a56) link_highlight_secondary_pane_g1

0x4f3b,	// (0x00043a5e) link_highlight_secondary_pane_t1

0x5d93,	// (0x000448b6) link_highlight_title_pane_g1

0x5d9b,	// (0x000448be) link_highlight_title_pane_t1

0x5d7c,	// (0x0004489f) link_highlight_digital_pane_g1

0x5d84,	// (0x000448a7) link_highlight_digital_pane_t1

0x5c54,	// (0x00044777) copy_highlight_primary_pane_g1

0x5c5c,	// (0x0004477f) copy_highlight_primary_pane_t1

0x5c2e,	// (0x00044751) copy_highlight_primary_small_pane_g1

0x5c45,	// (0x00044768) copy_highlight_primary_small_pane_t1

0x4f4a,	// (0x00043a6d) copy_highlight_secondary_pane_g1

0x4f52,	// (0x00043a75) copy_highlight_secondary_pane_t1

0x5c2e,	// (0x00044751) copy_highlight_title_pane_g1

0x5c36,	// (0x00044759) copy_highlight_title_pane_t1

0x5c54,	// (0x00044777) copy_highlight_digital_pane_g1

0x6e8f,	// (0x000459b2) copy_highlight_digital_pane_t1

0x6de3,	// (0x00045906) graphic_text_primary_pane_g1

0x6e73,	// (0x00045996) graphic_text_primary_pane_t1

0x6e81,	// (0x000459a4) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0004e4f1) graphic_text_primary_pane_t

0x6e4f,	// (0x00045972) graphic_text_primary_small_pane_g1

0x6e57,	// (0x0004597a) graphic_text_primary_small_pane_t1

0x6e65,	// (0x00045988) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0004e4ec) graphic_text_primary_small_pane_t

0x6e2b,	// (0x0004594e) graphic_text_secondary_pane_g1

0x6e33,	// (0x00045956) graphic_text_secondary_pane_t1

0x6e41,	// (0x00045964) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0004e4e7) graphic_text_secondary_pane_t

0x6e07,	// (0x0004592a) graphic_text_title_pane_g1

0x6e0f,	// (0x00045932) graphic_text_title_pane_t1

0x6e1d,	// (0x00045940) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0004e4e2) graphic_text_title_pane_t

0x6de3,	// (0x00045906) graphic_text_digital_pane_g1

0x6deb,	// (0x0004590e) graphic_text_digital_pane_t1

0x6df9,	// (0x0004591c) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0004e4dd) graphic_text_digital_pane_t

0x38a7,	// (0x000423ca) navi_icon_pane_srt_ParamLimits

0x38a7,	// (0x000423ca) navi_icon_pane_srt

0x37c7,	// (0x000422ea) navi_midp_pane_srt

0x37c7,	// (0x000422ea) navi_navi_pane_srt

0x38a7,	// (0x000423ca) navi_text_pane_srt_ParamLimits

0x38a7,	// (0x000423ca) navi_text_pane_srt

0x6dae,	// (0x000458d1) navi_navi_icon_text_pane_srt

0x6db6,	// (0x000458d9) navi_navi_pane_srt_g1_ParamLimits

0x6db6,	// (0x000458d9) navi_navi_pane_srt_g1

0x6dc8,	// (0x000458eb) navi_navi_pane_srt_g2_ParamLimits

0x6dc8,	// (0x000458eb) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0004e4d8) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0004e4d8) navi_navi_pane_srt_g

0x6dda,	// (0x000458fd) navi_navi_tabs_pane_srt

0x6dae,	// (0x000458d1) navi_navi_text_pane_srt

0x6dae,	// (0x000458d1) navi_navi_volume_pane_srt

0x6d9f,	// (0x000458c2) navi_navi_text_pane_srt_t1

0x2717,	// (0x0004123a) navi_navi_volume_pane_srt_g1

0x271f,	// (0x00041242) volume_small_pane_srt_ParamLimits

0x271f,	// (0x00041242) volume_small_pane_srt

0x1a92,	// (0x000405b5) volume_small_pane_srt_g1_ParamLimits

0x1a92,	// (0x000405b5) volume_small_pane_srt_g1

0x1aa2,	// (0x000405c5) volume_small_pane_srt_g2_ParamLimits

0x1aa2,	// (0x000405c5) volume_small_pane_srt_g2

0x1ab3,	// (0x000405d6) volume_small_pane_srt_g3_ParamLimits

0x1ab3,	// (0x000405d6) volume_small_pane_srt_g3

0x1ac4,	// (0x000405e7) volume_small_pane_srt_g4_ParamLimits

0x1ac4,	// (0x000405e7) volume_small_pane_srt_g4

0x1ad5,	// (0x000405f8) volume_small_pane_srt_g5_ParamLimits

0x1ad5,	// (0x000405f8) volume_small_pane_srt_g5

0x1ae6,	// (0x00040609) volume_small_pane_srt_g6_ParamLimits

0x1ae6,	// (0x00040609) volume_small_pane_srt_g6

0x1af7,	// (0x0004061a) volume_small_pane_srt_g7_ParamLimits

0x1af7,	// (0x0004061a) volume_small_pane_srt_g7

0x1b08,	// (0x0004062b) volume_small_pane_srt_g8_ParamLimits

0x1b08,	// (0x0004062b) volume_small_pane_srt_g8

0x1b19,	// (0x0004063c) volume_small_pane_srt_g9_ParamLimits

0x1b19,	// (0x0004063c) volume_small_pane_srt_g9

0x1b2a,	// (0x0004064d) volume_small_pane_srt_g10_ParamLimits

0x1b2a,	// (0x0004064d) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004e285) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004e285) volume_small_pane_srt_g

0x3c81,	// (0x000427a4) query_popup_data_pane_cp2

0x6d85,	// (0x000458a8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6d85,	// (0x000458a8) navi_navi_icon_text_pane_srt_t1

0x5ecc,	// (0x000449ef) navi_tabs_2_long_pane_srt

0x5ecc,	// (0x000449ef) navi_tabs_2_pane_srt

0x5ecc,	// (0x000449ef) navi_tabs_3_long_pane_srt

0x5ecc,	// (0x000449ef) navi_tabs_3_pane_srt

0x5ecc,	// (0x000449ef) navi_tabs_4_pane_srt

0x26f7,	// (0x0004121a) tabs_2_active_pane_srt_ParamLimits

0x26f7,	// (0x0004121a) tabs_2_active_pane_srt

0x2707,	// (0x0004122a) tabs_2_passive_pane_srt_ParamLimits

0x2707,	// (0x0004122a) tabs_2_passive_pane_srt

0x567a,	// (0x0004419d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x567a,	// (0x0004419d) bg_passive_tab_pane_cp1_srt

0x6d51,	// (0x00045874) bg_passive_tab_pane_g1_cp1_srt

0x49ef,	// (0x00043512) bg_passive_tab_pane_g2_cp1_srt

0x6d5a,	// (0x0004587d) bg_passive_tab_pane_g3_cp1_srt

0x3b22,	// (0x00042645) bg_active_tab_pane_cp1_srt_ParamLimits

0x3b22,	// (0x00042645) bg_active_tab_pane_cp1_srt

0x6d63,	// (0x00045886) tabs_2_active_pane_srt_g1

0xe01f,	// (0x0004cb42) tabs_2_active_pane_srt_t1_ParamLimits

0xe01f,	// (0x0004cb42) tabs_2_active_pane_srt_t1

0x6d51,	// (0x00045874) bg_active_tab_pane_g1_cp1_srt

0x49ef,	// (0x00043512) bg_active_tab_pane_g2_cp1_srt

0x6d5a,	// (0x0004587d) bg_active_tab_pane_g3_cp1_srt

0x26c4,	// (0x000411e7) tabs_3_active_pane_srt_ParamLimits

0x26c4,	// (0x000411e7) tabs_3_active_pane_srt

0x26d5,	// (0x000411f8) tabs_3_passive_pane_cp_srt_ParamLimits

0x26d5,	// (0x000411f8) tabs_3_passive_pane_cp_srt

0x26e6,	// (0x00041209) tabs_3_passive_pane_srt_ParamLimits

0x26e6,	// (0x00041209) tabs_3_passive_pane_srt

0x567a,	// (0x0004419d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x567a,	// (0x0004419d) bg_passive_tab_pane_cp2_srt

0x4f61,	// (0x00043a84) bg_passive_tab_pane_g1_cp2_srt

0x49ef,	// (0x00043512) bg_passive_tab_pane_g2_cp2_srt

0x4f6a,	// (0x00043a8d) bg_passive_tab_pane_g3_cp2_srt

0x3b22,	// (0x00042645) bg_active_tab_pane_cp2_srt_ParamLimits

0x3b22,	// (0x00042645) bg_active_tab_pane_cp2_srt

0x6d37,	// (0x0004585a) tabs_3_active_pane_srt_g1

0xe009,	// (0x0004cb2c) tabs_3_active_pane_srt_t1_ParamLimits

0xe009,	// (0x0004cb2c) tabs_3_active_pane_srt_t1

0x4f61,	// (0x00043a84) bg_active_tab_pane_g1_cp2_srt

0x49ef,	// (0x00043512) bg_active_tab_pane_g2_cp2_srt

0x4f6a,	// (0x00043a8d) bg_active_tab_pane_g3_cp2_srt

0x267c,	// (0x0004119f) tabs_4_active_pane_srt_ParamLimits

0x267c,	// (0x0004119f) tabs_4_active_pane_srt

0x268e,	// (0x000411b1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x268e,	// (0x000411b1) tabs_4_passive_pane_cp2_srt

0x1c99,	// (0x000407bc) aid_size_cell_toolbar

0x69e7,	// (0x0004550a) main_idle_act_pane_ParamLimits

0x1e56,	// (0x00040979) popup_large_graphic_colour_window_ParamLimits

0xc982,	// (0x0004b4a5) popup_toolbar_window_ParamLimits

0xc982,	// (0x0004b4a5) popup_toolbar_window

0x6b9f,	// (0x000456c2) list_single_graphic_2heading_pane_ParamLimits

0x6b9f,	// (0x000456c2) list_single_graphic_2heading_pane

0x44b3,	// (0x00042fd6) aid_size_cell_apps_grid_lsc_pane

0x44c5,	// (0x00042fe8) aid_size_cell_apps_grid_prt_pane

0x50fc,	// (0x00043c1f) bg_wml_button_pane_cp1_ParamLimits

0x50fc,	// (0x00043c1f) bg_wml_button_pane_cp1

0xdc22,	// (0x0004c745) form_midp_field_text_pane_t1_ParamLimits

0x567a,	// (0x0004419d) input_focus_pane_cp050_ParamLimits

0x58e1,	// (0x00044404) list_midp_form_text_pane_ParamLimits

0x5887,	// (0x000443aa) input_focus_pane_cp051_ParamLimits

0x589b,	// (0x000443be) list_midp_choice_pane_ParamLimits

0xdbc0,	// (0x0004c6e3) list_single_2graphic_pane_cp3_ParamLimits

0xdbc0,	// (0x0004c6e3) list_single_2graphic_pane_cp3

0xdbd3,	// (0x0004c6f6) list_single_midp_graphic_pane_ParamLimits

0xdbd3,	// (0x0004c6f6) list_single_midp_graphic_pane

0x092f,	// (0x0003f452) list_single_graphic_2heading_pane_g1_ParamLimits

0x092f,	// (0x0003f452) list_single_graphic_2heading_pane_g1

0x093b,	// (0x0003f45e) list_single_graphic_2heading_pane_g4_ParamLimits

0x093b,	// (0x0003f45e) list_single_graphic_2heading_pane_g4

0x0947,	// (0x0003f46a) list_single_graphic_2heading_pane_g5_ParamLimits

0x0947,	// (0x0003f46a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004e2d8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004e2d8) list_single_graphic_2heading_pane_g

0x0953,	// (0x0003f476) list_single_graphic_2heading_pane_t1_ParamLimits

0x0953,	// (0x0003f476) list_single_graphic_2heading_pane_t1

0x0967,	// (0x0003f48a) list_single_graphic_2heading_pane_t2_ParamLimits

0x0967,	// (0x0003f48a) list_single_graphic_2heading_pane_t2

0x0983,	// (0x0003f4a6) list_single_graphic_2heading_pane_t3_ParamLimits

0x0983,	// (0x0003f4a6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004e2df) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004e2df) list_single_graphic_2heading_pane_t

0x5544,	// (0x00044067) bg_popup_sub_pane_cp2

0x556e,	// (0x00044091) grid_toobar_pane

0x226a,	// (0x00040d8d) cell_toolbar_pane_ParamLimits

0x226a,	// (0x00040d8d) cell_toolbar_pane

0x55aa,	// (0x000440cd) cell_toolbar_pane_g1_ParamLimits

0x55aa,	// (0x000440cd) cell_toolbar_pane_g1

0x55be,	// (0x000440e1) cell_toolbar_pane_g2_ParamLimits

0x55be,	// (0x000440e1) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004e2ed) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004e2ed) cell_toolbar_pane_g

0x55e0,	// (0x00044103) grid_highlight_pane_cp2_ParamLimits

0x55e0,	// (0x00044103) grid_highlight_pane_cp2

0x55fa,	// (0x0004411d) toolbar_button_pane

0x5606,	// (0x00044129) toolbar_button_pane_g1

0x560e,	// (0x00044131) toolbar_button_pane_g2

0x5616,	// (0x00044139) toolbar_button_pane_g3

0x561e,	// (0x00044141) toolbar_button_pane_g4

0x5626,	// (0x00044149) toolbar_button_pane_g5

0x562e,	// (0x00044151) toolbar_button_pane_g6

0x5636,	// (0x00044159) toolbar_button_pane_g7

0x563e,	// (0x00044161) toolbar_button_pane_g8

0x5646,	// (0x00044169) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0004e2f2) toolbar_button_pane_g

0x22ae,	// (0x00040dd1) list_single_2graphic_pane_g1_cp3_ParamLimits

0x22ae,	// (0x00040dd1) list_single_2graphic_pane_g1_cp3

0xc9da,	// (0x0004b4fd) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc9da,	// (0x0004b4fd) list_single_2graphic_pane_g2_cp3

0x22cb,	// (0x00040dee) list_single_2graphic_pane_g3_cp3

0x1945,	// (0x00040468) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1945,	// (0x00040468) list_single_2graphic_pane_g4_cp3

0x22d3,	// (0x00040df6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x22d3,	// (0x00040df6) list_single_2graphic_pane_t1_cp3

0x5a1a,	// (0x0004453d) list_single_midp_graphic_pane_g2_ParamLimits

0x5a1a,	// (0x0004453d) list_single_midp_graphic_pane_g2

0x091f,	// (0x0003f442) aid_zoom_text_primary

0x1ca1,	// (0x000407c4) aid_zoom_text_secondary

0xd70b,	// (0x0004c22e) status_small_pane_g7_ParamLimits

0xd70b,	// (0x0004c22e) status_small_pane_g7

0xd72e,	// (0x0004c251) status_small_pane_t1_ParamLimits

0xd0ff,	// (0x0004bc22) title_pane_g2

0x0003,

0xf54e,	// (0x0004e071) title_pane_g

0xd377,	// (0x0004be9a) aid_size_cell_colour_1_pane_ParamLimits

0xd377,	// (0x0004be9a) aid_size_cell_colour_1_pane

0xd38b,	// (0x0004beae) aid_size_cell_colour_2_pane_ParamLimits

0xd38b,	// (0x0004beae) aid_size_cell_colour_2_pane

0xd39f,	// (0x0004bec2) aid_size_cell_colour_3_pane_ParamLimits

0xd39f,	// (0x0004bec2) aid_size_cell_colour_3_pane

0xd3b3,	// (0x0004bed6) aid_size_cell_colour_4_pane_ParamLimits

0xd3b3,	// (0x0004bed6) aid_size_cell_colour_4_pane

0x16d3,	// (0x000401f6) title_pane_stacon_g1_ParamLimits

0x16d3,	// (0x000401f6) title_pane_stacon_g1

0x5cb3,	// (0x000447d6) popup_note_wait_window_g3_ParamLimits

0x5cb3,	// (0x000447d6) popup_note_wait_window_g3

0x5d29,	// (0x0004484c) popup_note_wait_window_t5_ParamLimits

0x5d29,	// (0x0004484c) popup_note_wait_window_t5

0x37c7,	// (0x000422ea) main_feb_china_hwr_fs_writing_pane

0xc38a,	// (0x0004aead) popup_feb_china_hwr_fs_window_ParamLimits

0xc38a,	// (0x0004aead) popup_feb_china_hwr_fs_window

0xc9eb,	// (0x0004b50e) aid_size_cell_hwr_fs_ParamLimits

0xc9eb,	// (0x0004b50e) aid_size_cell_hwr_fs

0x567a,	// (0x0004419d) bg_popup_sub_pane_cp3_ParamLimits

0x567a,	// (0x0004419d) bg_popup_sub_pane_cp3

0xca00,	// (0x0004b523) grid_hwr_fs_pane_ParamLimits

0xca00,	// (0x0004b523) grid_hwr_fs_pane

0x234a,	// (0x00040e6d) linegrid_hwr_fs_pane_ParamLimits

0x234a,	// (0x00040e6d) linegrid_hwr_fs_pane

0xca18,	// (0x0004b53b) cell_hwr_fs_pane_ParamLimits

0xca18,	// (0x0004b53b) cell_hwr_fs_pane

0x5686,	// (0x000441a9) linegrid_hwr_fs_pane_g1_ParamLimits

0x5686,	// (0x000441a9) linegrid_hwr_fs_pane_g1

0xdb94,	// (0x0004c6b7) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb94,	// (0x0004c6b7) linegrid_hwr_fs_pane_g2

0x56a4,	// (0x000441c7) linegrid_hwr_fs_pane_g3_ParamLimits

0x56a4,	// (0x000441c7) linegrid_hwr_fs_pane_g3

0x237c,	// (0x00040e9f) linegrid_hwr_fs_pane_g4_ParamLimits

0x237c,	// (0x00040e9f) linegrid_hwr_fs_pane_g4

0x2396,	// (0x00040eb9) linegrid_hwr_fs_pane_g5_ParamLimits

0x2396,	// (0x00040eb9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0004e318) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0004e318) linegrid_hwr_fs_pane_g

0x56b0,	// (0x000441d3) cell_hwr_fs_pane_g1_ParamLimits

0x56b0,	// (0x000441d3) cell_hwr_fs_pane_g1

0x547b,	// (0x00043f9e) cell_hwr_fs_pane_g2_ParamLimits

0x547b,	// (0x00043f9e) cell_hwr_fs_pane_g2

0xdba6,	// (0x0004c6c9) cell_hwr_fs_pane_g3_ParamLimits

0xdba6,	// (0x0004c6c9) cell_hwr_fs_pane_g3

0xdbb3,	// (0x0004c6d6) cell_hwr_fs_pane_g4_ParamLimits

0xdbb3,	// (0x0004c6d6) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0004e323) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0004e323) cell_hwr_fs_pane_g

0xca3e,	// (0x0004b561) cell_hwr_fs_pane_t1

0x37c7,	// (0x000422ea) grid_highlight_pane_cp6

0x37c7,	// (0x000422ea) main_idle_act2_pane

0x426a,	// (0x00042d8d) aid_inside_area_popup_secondary

0xdc7d,	// (0x0004c7a0) aid_inside_area_window_primary_ParamLimits

0xdc7d,	// (0x0004c7a0) aid_inside_area_window_primary

0x6e9e,	// (0x000459c1) ai2_news_ticker_pane

0x6ea6,	// (0x000459c9) aid_size_cell_ai1_link_ParamLimits

0x6ea6,	// (0x000459c9) aid_size_cell_ai1_link

0xe035,	// (0x0004cb58) popup_ai2_data_window_ParamLimits

0xe035,	// (0x0004cb58) popup_ai2_data_window

0x6ed6,	// (0x000459f9) popup_ai2_link_window_ParamLimits

0x6ed6,	// (0x000459f9) popup_ai2_link_window

0x567a,	// (0x0004419d) bg_popup_sub_pane_cp4_ParamLimits

0x567a,	// (0x0004419d) bg_popup_sub_pane_cp4

0x6eea,	// (0x00045a0d) grid_ai2_link_pane_ParamLimits

0x6eea,	// (0x00045a0d) grid_ai2_link_pane

0x6f01,	// (0x00045a24) popup_ai2_link_window_g1_ParamLimits

0x6f01,	// (0x00045a24) popup_ai2_link_window_g1

0x6f0d,	// (0x00045a30) popup_ai2_link_window_g2_ParamLimits

0x6f0d,	// (0x00045a30) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0004e4f6) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0004e4f6) popup_ai2_link_window_g

0x6f1c,	// (0x00045a3f) ai2_mp_button_pane

0x6f24,	// (0x00045a47) ai2_mp_volume_pane

0x5887,	// (0x000443aa) bg_popup_sub_pane_cp5_ParamLimits

0x5887,	// (0x000443aa) bg_popup_sub_pane_cp5

0x6f2c,	// (0x00045a4f) heading_ai2_gene_pane_ParamLimits

0x6f2c,	// (0x00045a4f) heading_ai2_gene_pane

0x6f38,	// (0x00045a5b) list_ai2_gene_pane_ParamLimits

0x6f38,	// (0x00045a5b) list_ai2_gene_pane

0x6f80,	// (0x00045aa3) cell_ai2_link_pane_ParamLimits

0x6f80,	// (0x00045aa3) cell_ai2_link_pane

0x6f96,	// (0x00045ab9) cell_ai2_link_pane_g1

0x37c7,	// (0x000422ea) grid_highlight_pane_cp7

0x2734,	// (0x00041257) ai2_mp_volume_pane_g1

0x7066,	// (0x00045b89) ai2_mp_volume_pane_g2

0xe05f,	// (0x0004cb82) list_ai2_gene_pane_t1

0x706e,	// (0x00045b91) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0004e50f) ai2_mp_volume_pane_g

0x273c,	// (0x0004125f) volume_small_pane_cp3

0x7076,	// (0x00045b99) aid_size_cell_ai2_button

0x707e,	// (0x00045ba1) grid_ai2_button_pane

0x7087,	// (0x00045baa) cell_ai2_button_pane_ParamLimits

0x7087,	// (0x00045baa) cell_ai2_button_pane

0x37bd,	// (0x000422e0) cell_ai2_button_pane_g1

0x37c7,	// (0x000422ea) grid_highlight_pane_cp8

0x7026,	// (0x00045b49) ai2_gene_pane_t1_ParamLimits

0x7026,	// (0x00045b49) ai2_gene_pane_t1

0xc300,	// (0x0004ae23) aid_height_parent_landscape

0xddc5,	// (0x0004c8e8) aid_height_set_list

0x69e7,	// (0x0004550a) aid_size_parent

0xdfdd,	// (0x0004cb00) aid_size_cell_graphic_pane_ParamLimits

0x6f48,	// (0x00045a6b) popup_ai2_data_window_g1_ParamLimits

0x6f48,	// (0x00045a6b) popup_ai2_data_window_g1

0x6f54,	// (0x00045a77) ai2_news_ticker_pane_g1

0x6f5c,	// (0x00045a7f) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0004e4fb) ai2_news_ticker_pane_g

0x6f64,	// (0x00045a87) ai2_news_ticker_pane_t1

0x6f72,	// (0x00045a95) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0004e500) ai2_news_ticker_pane_t

0x6f9f,	// (0x00045ac2) heading_ai2_gene_pane_g1

0x6fa7,	// (0x00045aca) heading_ai2_gene_pane_t1_ParamLimits

0x6fa7,	// (0x00045aca) heading_ai2_gene_pane_t1

0x6fbc,	// (0x00045adf) list_highlight_pane_cp6

0xe049,	// (0x0004cb6c) ai2_gene_pane_ParamLimits

0xe049,	// (0x0004cb6c) ai2_gene_pane

0xe06d,	// (0x0004cb90) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0004e505) list_ai2_gene_pane_t

0x6ff7,	// (0x00045b1a) list_highlight_pane_cp8_ParamLimits

0x6ff7,	// (0x00045b1a) list_highlight_pane_cp8

0x7008,	// (0x00045b2b) ai2_gene_pane_g1_ParamLimits

0x7008,	// (0x00045b2b) ai2_gene_pane_g1

0x701a,	// (0x00045b3d) ai2_gene_pane_g2_ParamLimits

0x701a,	// (0x00045b3d) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0004e50a) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0004e50a) ai2_gene_pane_g

0x40ac,	// (0x00042bcf) scroll_pane_cp12

0xc2bd,	// (0x0004ade0) control_pane_t3_ParamLimits

0xc2bd,	// (0x0004ade0) control_pane_t3

0xd71f,	// (0x0004c242) status_small_pane_g8_ParamLimits

0xd71f,	// (0x0004c242) status_small_pane_g8

0xc41f,	// (0x0004af42) popup_find_window_ParamLimits

0xc6ac,	// (0x0004b1cf) popup_note_image_window_ParamLimits

0x099b,	// (0x0003f4be) list_double2_graphic_pane_vc_g1_ParamLimits

0x099b,	// (0x0003f4be) list_double2_graphic_pane_vc_g1

0x4ce6,	// (0x00043809) list_double2_graphic_pane_vc_g2_ParamLimits

0x4ce6,	// (0x00043809) list_double2_graphic_pane_vc_g2

0x229a,	// (0x00040dbd) list_double2_graphic_pane_vc_g3_ParamLimits

0x229a,	// (0x00040dbd) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004e2e6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004e2e6) list_double2_graphic_pane_vc_g

0x09a7,	// (0x0003f4ca) list_double2_graphic_pane_vc_t1_ParamLimits

0x09a7,	// (0x0003f4ca) list_double2_graphic_pane_vc_t1

0x4ce6,	// (0x00043809) list_single_heading_pane_vc_g1_ParamLimits

0x4ce6,	// (0x00043809) list_single_heading_pane_vc_g1

0x229a,	// (0x00040dbd) list_single_heading_pane_vc_g2_ParamLimits

0x229a,	// (0x00040dbd) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e0f5) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e0f5) list_single_heading_pane_vc_g

0x09bd,	// (0x0003f4e0) list_single_heading_pane_vc_t1_ParamLimits

0x09bd,	// (0x0003f4e0) list_single_heading_pane_vc_t1

0x09d3,	// (0x0003f4f6) list_single_heading_pane_vc_t2_ParamLimits

0x09d3,	// (0x0003f4f6) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0004e307) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0004e307) list_single_heading_pane_vc_t

0x2305,	// (0x00040e28) list_setting_number_pane_vc_g1_ParamLimits

0x2305,	// (0x00040e28) list_setting_number_pane_vc_g1

0x2311,	// (0x00040e34) list_setting_number_pane_vc_g2_ParamLimits

0x2311,	// (0x00040e34) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004e30c) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004e30c) list_setting_number_pane_vc_g

0x09e5,	// (0x0003f508) list_setting_number_pane_vc_t1_ParamLimits

0x09e5,	// (0x0003f508) list_setting_number_pane_vc_t1

0x09f9,	// (0x0003f51c) list_setting_number_pane_vc_t2_ParamLimits

0x09f9,	// (0x0003f51c) list_setting_number_pane_vc_t2

0x0a15,	// (0x0003f538) list_setting_number_pane_vc_t3_ParamLimits

0x0a15,	// (0x0003f538) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0004e311) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0004e311) list_setting_number_pane_vc_t

0x0a41,	// (0x0003f564) set_value_pane_vc_ParamLimits

0x0a41,	// (0x0003f564) set_value_pane_vc

0x6b9f,	// (0x000456c2) list_double2_graphic_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_double2_graphic_pane_vc

0x0af8,	// (0x0003f61b) list_double2_large_graphic_pane_vc_ParamLimits

0x0af8,	// (0x0003f61b) list_double2_large_graphic_pane_vc

0x6b9f,	// (0x000456c2) list_double2_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_double2_pane_vc

0x6b9f,	// (0x000456c2) list_double_graphic_heading_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_double_graphic_heading_pane_vc

0x6b9f,	// (0x000456c2) list_double_graphic_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_double_graphic_pane_vc

0x6b9f,	// (0x000456c2) list_double_heading_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_double_heading_pane_vc

0x0b09,	// (0x0003f62c) list_double_large_graphic_pane_vc_ParamLimits

0x0b09,	// (0x0003f62c) list_double_large_graphic_pane_vc

0x6b9f,	// (0x000456c2) list_double_number_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_double_number_pane_vc

0x6b9f,	// (0x000456c2) list_double_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_double_pane_vc

0x6b9f,	// (0x000456c2) list_double_time_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_double_time_pane_vc

0x6b9f,	// (0x000456c2) list_setting_number_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_setting_number_pane_vc

0x6b9f,	// (0x000456c2) list_setting_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_setting_pane_vc

0x6b9f,	// (0x000456c2) list_single_graphic_heading_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_single_graphic_heading_pane_vc

0x6b9f,	// (0x000456c2) list_single_heading_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_single_heading_pane_vc

0x6b9f,	// (0x000456c2) list_single_number_heading_pane_vc_ParamLimits

0x6b9f,	// (0x000456c2) list_single_number_heading_pane_vc

0x099b,	// (0x0003f4be) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x099b,	// (0x0003f4be) list_double_graphic_heading_pane_vc_g1

0x4ce6,	// (0x00043809) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4ce6,	// (0x00043809) list_double_graphic_heading_pane_vc_g2

0x229a,	// (0x00040dbd) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x229a,	// (0x00040dbd) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004e2e6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004e2e6) list_double_graphic_heading_pane_vc_g

0x0b58,	// (0x0003f67b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0b58,	// (0x0003f67b) list_double_graphic_heading_pane_vc_t1

0x0b74,	// (0x0003f697) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b74,	// (0x0003f697) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0004e516) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0004e516) list_double_graphic_heading_pane_vc_t

0x2305,	// (0x00040e28) list_setting_pane_vc_g1_ParamLimits

0x2305,	// (0x00040e28) list_setting_pane_vc_g1

0x2311,	// (0x00040e34) list_setting_pane_vc_g2_ParamLimits

0x2311,	// (0x00040e34) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004e30c) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004e30c) list_setting_pane_vc_g

0x0b92,	// (0x0003f6b5) list_setting_pane_vc_t1_ParamLimits

0x0b92,	// (0x0003f6b5) list_setting_pane_vc_t1

0x0bae,	// (0x0003f6d1) list_setting_pane_vc_t2_ParamLimits

0x0bae,	// (0x0003f6d1) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0004e544) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0004e544) list_setting_pane_vc_t

0x0a41,	// (0x0003f564) set_value_pane_cp_vc_ParamLimits

0x0a41,	// (0x0003f564) set_value_pane_cp_vc

0x4ce6,	// (0x00043809) list_single_number_heading_pane_vc_g1_ParamLimits

0x4ce6,	// (0x00043809) list_single_number_heading_pane_vc_g1

0x229a,	// (0x00040dbd) list_single_number_heading_pane_vc_g2_ParamLimits

0x229a,	// (0x00040dbd) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e0f5) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e0f5) list_single_number_heading_pane_vc_g

0x0bca,	// (0x0003f6ed) list_single_number_heading_pane_vc_t1_ParamLimits

0x0bca,	// (0x0003f6ed) list_single_number_heading_pane_vc_t1

0x0be0,	// (0x0003f703) list_single_number_heading_pane_vc_t2_ParamLimits

0x0be0,	// (0x0003f703) list_single_number_heading_pane_vc_t2

0x0bf2,	// (0x0003f715) list_single_number_heading_pane_vc_t3_ParamLimits

0x0bf2,	// (0x0003f715) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0004e549) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0004e549) list_single_number_heading_pane_vc_t

0x099b,	// (0x0003f4be) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x099b,	// (0x0003f4be) list_single_graphic_heading_pane_vc_g1

0x4ce6,	// (0x00043809) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4ce6,	// (0x00043809) list_single_graphic_heading_pane_vc_g4

0x229a,	// (0x00040dbd) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x229a,	// (0x00040dbd) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0004e2e6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004e2e6) list_single_graphic_heading_pane_vc_g

0x0bca,	// (0x0003f6ed) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0bca,	// (0x0003f6ed) list_single_graphic_heading_pane_vc_t1

0x0c04,	// (0x0003f727) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0c04,	// (0x0003f727) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0004e550) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0004e550) list_single_graphic_heading_pane_vc_t

0x4ce6,	// (0x00043809) list_double2_pane_vc_g1_ParamLimits

0x4ce6,	// (0x00043809) list_double2_pane_vc_g1

0x229a,	// (0x00040dbd) list_double2_pane_vc_g2_ParamLimits

0x229a,	// (0x00040dbd) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e0f5) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e0f5) list_double2_pane_vc_g

0x0c16,	// (0x0003f739) list_double2_pane_vc_t1_ParamLimits

0x0c16,	// (0x0003f739) list_double2_pane_vc_t1

0x0c2c,	// (0x0003f74f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0c2c,	// (0x0003f74f) list_double2_large_graphic_pane_vc_g1

0x0c38,	// (0x0003f75b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0c38,	// (0x0003f75b) list_double2_large_graphic_pane_vc_g2

0x0c44,	// (0x0003f767) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0c44,	// (0x0003f767) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0004e10d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0004e10d) list_double2_large_graphic_pane_vc_g

0x0c50,	// (0x0003f773) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0c50,	// (0x0003f773) list_double2_large_graphic_pane_vc_t1

0x2745,	// (0x00041268) list_double_time_pane_vc_g1_ParamLimits

0x2745,	// (0x00041268) list_double_time_pane_vc_g1

0x2751,	// (0x00041274) list_double_time_pane_vc_g2_ParamLimits

0x2751,	// (0x00041274) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0004e555) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0004e555) list_double_time_pane_vc_g

0x0c66,	// (0x0003f789) list_double_time_pane_vc_t1_ParamLimits

0x0c66,	// (0x0003f789) list_double_time_pane_vc_t1

0x0c8a,	// (0x0003f7ad) list_double_time_pane_vc_t2_ParamLimits

0x0c8a,	// (0x0003f7ad) list_double_time_pane_vc_t2

0x0cd9,	// (0x0003f7fc) list_double_time_pane_vc_t3_ParamLimits

0x0cd9,	// (0x0003f7fc) list_double_time_pane_vc_t3

0x0ceb,	// (0x0003f80e) list_double_time_pane_vc_t4_ParamLimits

0x0ceb,	// (0x0003f80e) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0004e55a) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0004e55a) list_double_time_pane_vc_t

0x4ce6,	// (0x00043809) list_double_pane_vc_g1_ParamLimits

0x4ce6,	// (0x00043809) list_double_pane_vc_g1

0x229a,	// (0x00040dbd) list_double_pane_vc_g2_ParamLimits

0x229a,	// (0x00040dbd) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e0f5) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e0f5) list_double_pane_vc_g

0x0cff,	// (0x0003f822) list_double_pane_vc_t1_ParamLimits

0x0cff,	// (0x0003f822) list_double_pane_vc_t1

0x0d13,	// (0x0003f836) list_double_pane_vc_t2_ParamLimits

0x0d13,	// (0x0003f836) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0004e563) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0004e563) list_double_pane_vc_t

0x4ce6,	// (0x00043809) list_double_number_pane_vc_g1_ParamLimits

0x4ce6,	// (0x00043809) list_double_number_pane_vc_g1

0x229a,	// (0x00040dbd) list_double_number_pane_vc_g2_ParamLimits

0x229a,	// (0x00040dbd) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e0f5) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e0f5) list_double_number_pane_vc_g

0x0d2b,	// (0x0003f84e) list_double_number_pane_vc_t1_ParamLimits

0x0d2b,	// (0x0003f84e) list_double_number_pane_vc_t1

0x0d3d,	// (0x0003f860) list_double_number_pane_vc_t2_ParamLimits

0x0d3d,	// (0x0003f860) list_double_number_pane_vc_t2

0x0d51,	// (0x0003f874) list_double_number_pane_vc_t3_ParamLimits

0x0d51,	// (0x0003f874) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0004e568) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0004e568) list_double_number_pane_vc_t

0x0d69,	// (0x0003f88c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0d69,	// (0x0003f88c) list_double_large_graphic_pane_vc_g1

0x0d8b,	// (0x0003f8ae) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0d8b,	// (0x0003f8ae) list_double_large_graphic_pane_vc_g2

0x0d9f,	// (0x0003f8c2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0d9f,	// (0x0003f8c2) list_double_large_graphic_pane_vc_g3

0x0dae,	// (0x0003f8d1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0dae,	// (0x0003f8d1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0004e56f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0004e56f) list_double_large_graphic_pane_vc_g

0x0dba,	// (0x0003f8dd) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0dba,	// (0x0003f8dd) list_double_large_graphic_pane_vc_t1

0x0dd6,	// (0x0003f8f9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0dd6,	// (0x0003f8f9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0004e578) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0004e578) list_double_large_graphic_pane_vc_t

0x4ce6,	// (0x00043809) list_double_heading_pane_vc_g1_ParamLimits

0x4ce6,	// (0x00043809) list_double_heading_pane_vc_g1

0x229a,	// (0x00040dbd) list_double_heading_pane_vc_g2_ParamLimits

0x229a,	// (0x00040dbd) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e0f5) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e0f5) list_double_heading_pane_vc_g

0x0df8,	// (0x0003f91b) list_double_heading_pane_vc_t1_ParamLimits

0x0df8,	// (0x0003f91b) list_double_heading_pane_vc_t1

0x0e0c,	// (0x0003f92f) list_double_heading_pane_vc_t2_ParamLimits

0x0e0c,	// (0x0003f92f) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0004e57d) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0004e57d) list_double_heading_pane_vc_t

0x0e24,	// (0x0003f947) list_double_graphic_pane_vc_g1_ParamLimits

0x0e24,	// (0x0003f947) list_double_graphic_pane_vc_g1

0x275d,	// (0x00041280) list_double_graphic_pane_vc_g2_ParamLimits

0x275d,	// (0x00041280) list_double_graphic_pane_vc_g2

0x4ce6,	// (0x00043809) list_double_graphic_pane_vc_g3_ParamLimits

0x4ce6,	// (0x00043809) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0004e582) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0004e582) list_double_graphic_pane_vc_g

0x0e30,	// (0x0003f953) list_double_graphic_pane_vc_t1_ParamLimits

0x0e30,	// (0x0003f953) list_double_graphic_pane_vc_t1

0x0e5a,	// (0x0003f97d) list_double_graphic_pane_vc_t2_ParamLimits

0x0e5a,	// (0x0003f97d) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0004e58b) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0004e58b) list_double_graphic_pane_vc_t

0x1184,	// (0x0003fca7) aid_size_cell_fastswap

0xbf27,	// (0x0004aa4a) aid_size_cell_touch_ParamLimits

0xbf27,	// (0x0004aa4a) aid_size_cell_touch

0x13e7,	// (0x0003ff0a) popup_fast_swap_wide_window_ParamLimits

0x13e7,	// (0x0003ff0a) popup_fast_swap_wide_window

0xc0d7,	// (0x0004abfa) touch_pane_ParamLimits

0xc0d7,	// (0x0004abfa) touch_pane

0x410e,	// (0x00042c31) button_value_adjust_pane_cp2

0x0646,	// (0x0003f169) button_value_adjust_pane_cp4

0x066a,	// (0x0003f18d) form_field_data_pane_cp2

0xbbae,	// (0x0004a6d1) form_field_data_wide_pane_cp2

0x4584,	// (0x000430a7) bg_scroll_pane_ParamLimits

0x1835,	// (0x00040358) scroll_handle_pane_ParamLimits

0x1849,	// (0x0004036c) scroll_sc2_down_pane_ParamLimits

0x1849,	// (0x0004036c) scroll_sc2_down_pane

0x45b5,	// (0x000430d8) scroll_sc2_up_pane_ParamLimits

0x45b5,	// (0x000430d8) scroll_sc2_up_pane

0xe18d,	// (0x0004ccb0) grid_wheel_folder_pane_g1_ParamLimits

0xe18d,	// (0x0004ccb0) grid_wheel_folder_pane_g1

0x1a2a,	// (0x0004054d) clock_nsta_pane_cp2_ParamLimits

0x1a2a,	// (0x0004054d) clock_nsta_pane_cp2

0xd60e,	// (0x0004c131) listscroll_midp_pane_ParamLimits

0xd61a,	// (0x0004c13d) midp_canvas_pane

0x50a9,	// (0x00043bcc) nsta_clock_indic_pane

0x50e2,	// (0x00043c05) listscroll_form_pane_vc

0x50ea,	// (0x00043c0d) listscroll_set_pane_vc_ParamLimits

0x50ea,	// (0x00043c0d) listscroll_set_pane_vc

0xd89f,	// (0x0004c3c2) clock_nsta_pane

0xd8c9,	// (0x0004c3ec) indicator_nsta_pane

0x5544,	// (0x00044067) bg_popup_sub_pane_cp2_ParamLimits

0x5558,	// (0x0004407b) find_pane_cp2_ParamLimits

0x5558,	// (0x0004407b) find_pane_cp2

0x556e,	// (0x00044091) grid_toobar_pane_ParamLimits

0x564e,	// (0x00044171) list_form_gen_pane_vc_ParamLimits

0x564e,	// (0x00044171) list_form_gen_pane_vc

0x5664,	// (0x00044187) scroll_pane_cp8_vc_ParamLimits

0x5664,	// (0x00044187) scroll_pane_cp8_vc

0x56e0,	// (0x00044203) data_form_wide_pane_vc_ParamLimits

0x56e0,	// (0x00044203) data_form_wide_pane_vc

0x56ec,	// (0x0004420f) form_field_data_wide_pane_vc_g1

0x56f4,	// (0x00044217) form_field_data_wide_pane_vc_t1_ParamLimits

0x56f4,	// (0x00044217) form_field_data_wide_pane_vc_t1

0x4122,	// (0x00042c45) input_focus_pane_cp6_vc_ParamLimits

0x4122,	// (0x00042c45) input_focus_pane_cp6_vc

0x5a46,	// (0x00044569) list_midp_pane_ParamLimits

0x6d2b,	// (0x0004584e) scroll_pane_cp16_ParamLimits

0x6d2b,	// (0x0004584e) scroll_pane_cp16

0x5a88,	// (0x000445ab) button_value_adjust_pane_ParamLimits

0x5a88,	// (0x000445ab) button_value_adjust_pane

0xddd6,	// (0x0004c8f9) button_value_adjust_pane_cp6_ParamLimits

0xddd6,	// (0x0004c8f9) button_value_adjust_pane_cp6

0xdef0,	// (0x0004ca13) settings_code_pane_cp_ParamLimits

0xdef0,	// (0x0004ca13) settings_code_pane_cp

0x37bd,	// (0x000422e0) cell_touch_pane_g1

0x37bd,	// (0x000422e0) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0004e22b) cell_touch_pane_g

0xe07b,	// (0x0004cb9e) cell_touch_pane_cp_ParamLimits

0xe07b,	// (0x0004cb9e) cell_touch_pane_cp

0xe097,	// (0x0004cbba) cell_touch_pane_ParamLimits

0xe097,	// (0x0004cbba) cell_touch_pane

0x37bd,	// (0x000422e0) scroll_sc2_down_pane_g1

0x37bd,	// (0x000422e0) scroll_sc2_up_pane_g1

0x37c7,	// (0x000422ea) bg_set_opt_pane_cp4_vc

0x70bb,	// (0x00045bde) list_set_graphic_pane_vc_g1_ParamLimits

0x70bb,	// (0x00045bde) list_set_graphic_pane_vc_g1

0x70c7,	// (0x00045bea) list_set_graphic_pane_vc_g2_ParamLimits

0x70c7,	// (0x00045bea) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0004e51b) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0004e51b) list_set_graphic_pane_vc_g

0x70d3,	// (0x00045bf6) text_primary_small_cp13_vc_ParamLimits

0x70d3,	// (0x00045bf6) text_primary_small_cp13_vc

0x70eb,	// (0x00045c0e) list_set_graphic_pane_vc_ParamLimits

0x70eb,	// (0x00045c0e) list_set_graphic_pane_vc

0x37c7,	// (0x000422ea) input_focus_pane_cp2_vc

0x37bd,	// (0x000422e0) setting_code_pane_vc_g1

0x38f2,	// (0x00042415) setting_code_pane_vc_t1

0x70fd,	// (0x00045c20) set_text_pane_vc_t1_ParamLimits

0x70fd,	// (0x00045c20) set_text_pane_vc_t1

0x37c7,	// (0x000422ea) input_focus_pane_cp1_vc

0x7119,	// (0x00045c3c) list_set_text_pane_vc

0x37bd,	// (0x000422e0) setting_text_pane_vc_g1

0x37c7,	// (0x000422ea) bg_set_opt_pane_cp2_vc

0x38e9,	// (0x0004240c) setting_slider_graphic_pane_vc_g1

0x7123,	// (0x00045c46) setting_slider_graphic_pane_vc_t1

0x7133,	// (0x00045c56) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0004e520) setting_slider_graphic_pane_vc_t

0x7143,	// (0x00045c66) slider_set_pane_cp_vc

0x714b,	// (0x00045c6e) slider_set_pane_vc_g1

0x7154,	// (0x00045c77) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0004e525) slider_set_pane_vc_g

0x416e,	// (0x00042c91) set_opt_bg_pane_g1_copy1

0x4176,	// (0x00042c99) set_opt_bg_pane_g2_copy1

0x7180,	// (0x00045ca3) set_opt_bg_pane_g3_copy1

0x4186,	// (0x00042ca9) set_opt_bg_pane_g4_copy1

0x418e,	// (0x00042cb1) set_opt_bg_pane_g5_copy1

0x4196,	// (0x00042cb9) set_opt_bg_pane_g6_copy1

0x718a,	// (0x00045cad) set_opt_bg_pane_g7_copy1

0x7192,	// (0x00045cb5) set_opt_bg_pane_g8_copy1

0x719c,	// (0x00045cbf) set_opt_bg_pane_g9_copy1

0x37c7,	// (0x000422ea) bg_set_opt_pane_cp_vc

0x71a6,	// (0x00045cc9) setting_slider_pane_vc_t1

0x71b5,	// (0x00045cd8) setting_slider_pane_vc_t2

0x71c5,	// (0x00045ce8) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0004e534) setting_slider_pane_vc_t

0x71d5,	// (0x00045cf8) slider_set_pane_vc

0x23ba,	// (0x00040edd) volume_set_pane_vc_g1

0x23c3,	// (0x00040ee6) volume_set_pane_vc_g2

0x23cc,	// (0x00040eef) volume_set_pane_vc_g3

0x23d5,	// (0x00040ef8) volume_set_pane_vc_g4

0x23de,	// (0x00040f01) volume_set_pane_vc_g5

0x23e7,	// (0x00040f0a) volume_set_pane_vc_g6

0x23f0,	// (0x00040f13) volume_set_pane_vc_g7

0x23f9,	// (0x00040f1c) volume_set_pane_vc_g8

0x2402,	// (0x00040f25) volume_set_pane_vc_g9

0x240b,	// (0x00040f2e) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0004e3d9) volume_set_pane_vc_g

0x71dd,	// (0x00045d00) volume_set_pane_vc

0x71e5,	// (0x00045d08) button_value_adjust_pane_cp1_vc

0x71ef,	// (0x00045d12) list_highlight_pane_cp2_vc

0x71f8,	// (0x00045d1b) list_set_pane_vc_ParamLimits

0x71f8,	// (0x00045d1b) list_set_pane_vc

0x7256,	// (0x00045d79) main_pane_set_vc_t1_ParamLimits

0x7256,	// (0x00045d79) main_pane_set_vc_t1

0x726b,	// (0x00045d8e) main_pane_set_vc_t2_ParamLimits

0x726b,	// (0x00045d8e) main_pane_set_vc_t2

0x727d,	// (0x00045da0) main_pane_set_vc_t3_ParamLimits

0x727d,	// (0x00045da0) main_pane_set_vc_t3

0x7291,	// (0x00045db4) main_pane_set_vc_t4_ParamLimits

0x7291,	// (0x00045db4) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0004e53b) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0004e53b) main_pane_set_vc_t

0x72a5,	// (0x00045dc8) setting_code_pane_vc_ParamLimits

0x72a5,	// (0x00045dc8) setting_code_pane_vc

0x72b6,	// (0x00045dd9) setting_slider_graphic_pane_vc

0x72b6,	// (0x00045dd9) setting_slider_pane_vc

0x72b6,	// (0x00045dd9) setting_text_pane_vc

0x72b6,	// (0x00045dd9) setting_volume_pane_vc

0x72c0,	// (0x00045de3) scroll_pane_cp121_vc

0x40fc,	// (0x00042c1f) set_content_pane_vc

0x72c8,	// (0x00045deb) button_value_adjust_pane_g1

0x72d1,	// (0x00045df4) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0004e590) button_value_adjust_pane_g

0x72da,	// (0x00045dfd) form_field_slider_wide_pane_vc_t1_ParamLimits

0x72da,	// (0x00045dfd) form_field_slider_wide_pane_vc_t1

0x72ee,	// (0x00045e11) form_field_slider_wide_pane_vc_t2_ParamLimits

0x72ee,	// (0x00045e11) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0004e595) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0004e595) form_field_slider_wide_pane_vc_t

0x3b22,	// (0x00042645) input_focus_pane_cp10_vc_ParamLimits

0x3b22,	// (0x00042645) input_focus_pane_cp10_vc

0x731c,	// (0x00045e3f) slider_cont_pane_cp1_vc_ParamLimits

0x731c,	// (0x00045e3f) slider_cont_pane_cp1_vc

0x732e,	// (0x00045e51) slider_form_pane_g1_cp2

0x7154,	// (0x00045c77) slider_form_pane_g2_cp2

0x735b,	// (0x00045e7e) form_field_slider_pane_vc_t3

0x7369,	// (0x00045e8c) form_field_slider_pane_vc_t4

0x7377,	// (0x00045e9a) slider_form_pane_vc_ParamLimits

0x7377,	// (0x00045e9a) slider_form_pane_vc

0x7384,	// (0x00045ea7) form_field_slider_pane_vc_t1_ParamLimits

0x7384,	// (0x00045ea7) form_field_slider_pane_vc_t1

0x72ee,	// (0x00045e11) form_field_slider_pane_vc_t2_ParamLimits

0x72ee,	// (0x00045e11) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0004e5a7) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0004e5a7) form_field_slider_pane_vc_t

0x3b22,	// (0x00042645) input_focus_pane_cp9_vc_ParamLimits

0x3b22,	// (0x00042645) input_focus_pane_cp9_vc

0x73a0,	// (0x00045ec3) slider_cont_pane_vc_ParamLimits

0x73a0,	// (0x00045ec3) slider_cont_pane_vc

0x73b4,	// (0x00045ed7) list_form_graphic_pane_cp_vc_ParamLimits

0x73b4,	// (0x00045ed7) list_form_graphic_pane_cp_vc

0x56ec,	// (0x0004420f) form_field_popup_wide_pane_vc_g1

0x73c9,	// (0x00045eec) form_field_popup_wide_pane_vc_t1_ParamLimits

0x73c9,	// (0x00045eec) form_field_popup_wide_pane_vc_t1

0x4122,	// (0x00042c45) input_focus_pane_cp8_vc_ParamLimits

0x4122,	// (0x00042c45) input_focus_pane_cp8_vc

0x740e,	// (0x00045f31) list_form_wide_pane_vc_ParamLimits

0x740e,	// (0x00045f31) list_form_wide_pane_vc

0x741a,	// (0x00045f3d) list_form_graphic_pane_vc_g1

0x7422,	// (0x00045f45) list_form_graphic_pane_vc_t1_ParamLimits

0x7422,	// (0x00045f45) list_form_graphic_pane_vc_t1

0x38a7,	// (0x000423ca) list_highlight_pane_cp5_vc_ParamLimits

0x38a7,	// (0x000423ca) list_highlight_pane_cp5_vc

0x743e,	// (0x00045f61) list_form_graphic_pane_vc_ParamLimits

0x743e,	// (0x00045f61) list_form_graphic_pane_vc

0x56ec,	// (0x0004420f) form_field_popup_pane_vc_g1

0x7454,	// (0x00045f77) form_field_popup_pane_vc_t1_ParamLimits

0x7454,	// (0x00045f77) form_field_popup_pane_vc_t1

0x4122,	// (0x00042c45) input_focus_pane_cp7_vc_ParamLimits

0x4122,	// (0x00042c45) input_focus_pane_cp7_vc

0x746b,	// (0x00045f8e) list_form_pane_vc_ParamLimits

0x746b,	// (0x00045f8e) list_form_pane_vc

0x7477,	// (0x00045f9a) data_form_pane_vc_t1_ParamLimits

0x7477,	// (0x00045f9a) data_form_pane_vc_t1

0x416e,	// (0x00042c91) input_focus_pane_vc_g1

0x4176,	// (0x00042c99) input_focus_pane_vc_g2

0x417e,	// (0x00042ca1) input_focus_pane_vc_g3

0x4186,	// (0x00042ca9) input_focus_pane_vc_g4

0x418e,	// (0x00042cb1) input_focus_pane_vc_g5

0x4196,	// (0x00042cb9) input_focus_pane_vc_g6

0x419e,	// (0x00042cc1) input_focus_pane_vc_g7

0x41a6,	// (0x00042cc9) input_focus_pane_vc_g8

0x41ae,	// (0x00042cd1) input_focus_pane_vc_g9

0x37bd,	// (0x000422e0) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004e1b4) input_focus_pane_vc_g

0x56e0,	// (0x00044203) data_form_pane_vc_ParamLimits

0x56e0,	// (0x00044203) data_form_pane_vc

0x56ec,	// (0x0004420f) form_field_data_pane_vc_g1

0x7492,	// (0x00045fb5) form_field_data_pane_vc_t1_ParamLimits

0x7492,	// (0x00045fb5) form_field_data_pane_vc_t1

0x4122,	// (0x00042c45) input_focus_pane_vc_ParamLimits

0x4122,	// (0x00042c45) input_focus_pane_vc

0x74ac,	// (0x00045fcf) button_value_adjust_pane_cp3_vc

0x74b4,	// (0x00045fd7) button_value_adjust_pane_cp5_vc

0x74bc,	// (0x00045fdf) form_field_data_pane_vc_ParamLimits

0x74bc,	// (0x00045fdf) form_field_data_pane_vc

0x74d3,	// (0x00045ff6) form_field_data_pane_vc_cp2

0x74db,	// (0x00045ffe) form_field_data_wide_pane_vc_ParamLimits

0x74db,	// (0x00045ffe) form_field_data_wide_pane_vc

0x74f1,	// (0x00046014) form_field_data_wide_pane_vc_cp2

0x74f9,	// (0x0004601c) form_field_popup_pane_vc_ParamLimits

0x74f9,	// (0x0004601c) form_field_popup_pane_vc

0x7510,	// (0x00046033) form_field_popup_wide_pane_vc_ParamLimits

0x7510,	// (0x00046033) form_field_popup_wide_pane_vc

0x7526,	// (0x00046049) form_field_slider_pane_vc_ParamLimits

0x7526,	// (0x00046049) form_field_slider_pane_vc

0x7539,	// (0x0004605c) form_field_slider_wide_pane_vc_ParamLimits

0x7539,	// (0x0004605c) form_field_slider_wide_pane_vc

0xe0b5,	// (0x0004cbd8) grid_touch_1_pane_ParamLimits

0xe0b5,	// (0x0004cbd8) grid_touch_1_pane

0xe0c9,	// (0x0004cbec) grid_touch_2_pane_ParamLimits

0xe0c9,	// (0x0004cbec) grid_touch_2_pane

0x7607,	// (0x0004612a) touch_pane_g1_ParamLimits

0x7607,	// (0x0004612a) touch_pane_g1

0x7570,	// (0x00046093) cell_app_pane_cp_wide_ParamLimits

0x7570,	// (0x00046093) cell_app_pane_cp_wide

0x7581,	// (0x000460a4) grid_popup_fast_wide_pane_ParamLimits

0x7581,	// (0x000460a4) grid_popup_fast_wide_pane

0x7595,	// (0x000460b8) scroll_pane_cp19_ParamLimits

0x7595,	// (0x000460b8) scroll_pane_cp19

0x37c7,	// (0x000422ea) bg_popup_window_pane_cp20

0x75a9,	// (0x000460cc) listscroll_popup_fast_wide_pane

0x42d6,	// (0x00042df9) grid_indicator_nsta_pane

0x75b1,	// (0x000460d4) clock_nsta_pane_g1

0x75ba,	// (0x000460dd) clock_nsta_pane_t1

0xe0f3,	// (0x0004cc16) cell_indicator_nsta_pane_ParamLimits

0xe0f3,	// (0x0004cc16) cell_indicator_nsta_pane

0x7607,	// (0x0004612a) cell_indicator_nsta_pane_g1

0xe10a,	// (0x0004cc2d) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0004e5b8) cell_indicator_nsta_pane_g

0x7622,	// (0x00046145) clock_nsta_pane_cp

0x762a,	// (0x0004614d) indicator_nsta_pane_cp

0x7632,	// (0x00046155) nsta_clock_indic_pane_g1

0x3970,	// (0x00042493) grid_indicator_pane

0x46aa,	// (0x000431cd) scroll_pane_cp29

0x1979,	// (0x0004049c) indicator_nsta_pane_cp2_ParamLimits

0x1979,	// (0x0004049c) indicator_nsta_pane_cp2

0x38a7,	// (0x000423ca) main_apps_wheel_pane

0x58fb,	// (0x0004441e) form_midp_field_text_pane_ParamLimits

0x5a52,	// (0x00044575) scroll_bar_cp050_ParamLimits

0x7682,	// (0x000461a5) cell_indicator_pane_ParamLimits

0x7682,	// (0x000461a5) cell_indicator_pane

0x7699,	// (0x000461bc) cell_indicator_pane_g1

0xe117,	// (0x0004cc3a) grid_wheel_folder_pane_ParamLimits

0xe117,	// (0x0004cc3a) grid_wheel_folder_pane

0xe125,	// (0x0004cc48) list_wheel_apps_pane_ParamLimits

0xe125,	// (0x0004cc48) list_wheel_apps_pane

0xe133,	// (0x0004cc56) main_apps_wheel_pane_g1_ParamLimits

0xe133,	// (0x0004cc56) main_apps_wheel_pane_g1

0xe13f,	// (0x0004cc62) main_apps_wheel_pane_g2_ParamLimits

0xe13f,	// (0x0004cc62) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0004e5d4) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0004e5d4) main_apps_wheel_pane_g

0xe14d,	// (0x0004cc70) main_apps_wheel_pane_t1_ParamLimits

0xe14d,	// (0x0004cc70) main_apps_wheel_pane_t1

0xe161,	// (0x0004cc84) list_wheel_apps_pane_g1

0xe169,	// (0x0004cc8c) list_wheel_apps_pane_g2

0xe171,	// (0x0004cc94) list_wheel_apps_pane_g3

0xe179,	// (0x0004cc9c) list_wheel_apps_pane_g4

0xe183,	// (0x0004cca6) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0004e5d9) list_wheel_apps_pane_g

0x4c2d,	// (0x00043750) navi_icon_text_pane

0xd793,	// (0x0004c2b6) aid_fill_nsta

0x775e,	// (0x00046281) navi_icon_text_pane_g1

0x776a,	// (0x0004628d) navi_icon_text_pane_t1

0x4ac0,	// (0x000435e3) list_set_graphic_pane_t1_ParamLimits

0x4ac0,	// (0x000435e3) list_set_graphic_pane_t1

0x61a9,	// (0x00044ccc) popup_midp_note_alarm_window_t6_ParamLimits

0x61a9,	// (0x00044ccc) popup_midp_note_alarm_window_t6

0x61bb,	// (0x00044cde) popup_midp_note_alarm_window_t7_ParamLimits

0x61bb,	// (0x00044cde) popup_midp_note_alarm_window_t7

0x61cd,	// (0x00044cf0) popup_midp_note_alarm_window_t8_ParamLimits

0x61cd,	// (0x00044cf0) popup_midp_note_alarm_window_t8

0x61df,	// (0x00044d02) popup_midp_note_alarm_window_t9_ParamLimits

0x61df,	// (0x00044d02) popup_midp_note_alarm_window_t9

0x61f1,	// (0x00044d14) popup_midp_note_alarm_window_t10_ParamLimits

0x61f1,	// (0x00044d14) popup_midp_note_alarm_window_t10

0x6203,	// (0x00044d26) popup_midp_note_alarm_window_t11_ParamLimits

0x6203,	// (0x00044d26) popup_midp_note_alarm_window_t11

0x6215,	// (0x00044d38) scroll_pane_cp17_ParamLimits

0x6215,	// (0x00044d38) scroll_pane_cp17

0x23ba,	// (0x00040edd) volume_small_pane_cp_g1

0x277a,	// (0x0004129d) volume_small_pane_cp_g2

0x2783,	// (0x000412a6) volume_small_pane_cp_g3

0x278c,	// (0x000412af) volume_small_pane_cp_g4

0x2795,	// (0x000412b8) volume_small_pane_cp_g5

0x279e,	// (0x000412c1) volume_small_pane_cp_g6

0x27a7,	// (0x000412ca) volume_small_pane_cp_g7

0x27b0,	// (0x000412d3) volume_small_pane_cp_g8

0x27b9,	// (0x000412dc) volume_small_pane_cp_g9

0x27c2,	// (0x000412e5) volume_small_pane_cp_g10

0x4e8a,	// (0x000439ad) midp_ticker_pane_g1_ParamLimits

0x4e96,	// (0x000439b9) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0004e280) midp_ticker_pane_g_ParamLimits

0x4ea2,	// (0x000439c5) midp_ticker_pane_t1_ParamLimits

0xd7b7,	// (0x0004c2da) aid_fill_nsta_2

0x5a3e,	// (0x00044561) list_form2_midp_pane

0x6b6e,	// (0x00045691) midp_editing_number_pane_ParamLimits

0x6b7d,	// (0x000456a0) midp_ticker_pane_ParamLimits

0x777c,	// (0x0004629f) form2_midp_field_pane

0x77a0,	// (0x000462c3) scroll_pane_cp51

0x77c0,	// (0x000462e3) form2_midp_button_pane_ParamLimits

0x77c0,	// (0x000462e3) form2_midp_button_pane

0x77d2,	// (0x000462f5) form2_midp_content_pane_ParamLimits

0x77d2,	// (0x000462f5) form2_midp_content_pane

0x77ec,	// (0x0004630f) form2_midp_field_choice_group_pane

0x77f4,	// (0x00046317) form2_midp_field_pane_g1

0x77fc,	// (0x0004631f) form2_midp_field_pane_g2

0x7804,	// (0x00046327) form2_midp_field_pane_g3

0x780c,	// (0x0004632f) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0004e5fe) form2_midp_field_pane_g

0x7814,	// (0x00046337) form2_midp_gauge_slider_pane

0x781c,	// (0x0004633f) form2_midp_gauge_wait_pane

0x7824,	// (0x00046347) form2_midp_image_pane_ParamLimits

0x7824,	// (0x00046347) form2_midp_image_pane

0x783f,	// (0x00046362) form2_midp_label_pane_ParamLimits

0x783f,	// (0x00046362) form2_midp_label_pane

0xe1b6,	// (0x0004ccd9) form2_midp_label_pane_cp_ParamLimits

0xe1b6,	// (0x0004ccd9) form2_midp_label_pane_cp

0x7879,	// (0x0004639c) form2_midp_string_pane_ParamLimits

0x7879,	// (0x0004639c) form2_midp_string_pane

0xbdd2,	// (0x0004a8f5) form2_midp_text_pane_ParamLimits

0xbdd2,	// (0x0004a8f5) form2_midp_text_pane

0x788b,	// (0x000463ae) form2_midp_time_pane

0x789b,	// (0x000463be) input_focus_pane_cp51_ParamLimits

0x789b,	// (0x000463be) input_focus_pane_cp51

0x78b3,	// (0x000463d6) form2_midp_label_pane_t1_ParamLimits

0x78b3,	// (0x000463d6) form2_midp_label_pane_t1

0xbdeb,	// (0x0004a90e) form2_mdip_text_pane_t1_ParamLimits

0xbdeb,	// (0x0004a90e) form2_mdip_text_pane_t1

0x0ec1,	// (0x0003f9e4) form2_midp_time_pane_t1

0x78fc,	// (0x0004641f) form2_midp_gauge_slider_pane_t1

0xe1d5,	// (0x0004ccf8) form2_midp_gauge_slider_pane_t2

0xe1e7,	// (0x0004cd0a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0004e607) form2_midp_gauge_slider_pane_t

0x7932,	// (0x00046455) form2_midp_slider_pane

0x793e,	// (0x00046461) form2_midp_gauge_wait_pane_t1

0x794c,	// (0x0004646f) form2_midp_wait_pane_ParamLimits

0x794c,	// (0x0004646f) form2_midp_wait_pane

0xe1f9,	// (0x0004cd1c) list_single_2graphic_pane_cp4_ParamLimits

0xe1f9,	// (0x0004cd1c) list_single_2graphic_pane_cp4

0xdbd3,	// (0x0004c6f6) list_single_midp_graphic_pane_cp_ParamLimits

0xdbd3,	// (0x0004c6f6) list_single_midp_graphic_pane_cp

0x37c7,	// (0x000422ea) list_highlight_pane_cp20

0x799b,	// (0x000464be) list_single_2graphic_pane_g1_cp4

0x79a3,	// (0x000464c6) list_single_2graphic_pane_g2_cp4

0x79ab,	// (0x000464ce) list_single_2graphic_pane_t1_cp4

0x38a7,	// (0x000423ca) list_highlight_pane_cp21

0x79ba,	// (0x000464dd) list_single_midp_graphic_pane_g4_cp

0x79c9,	// (0x000464ec) list_single_midp_graphic_pane_t1_cp

0xe20d,	// (0x0004cd30) form2_mdip_string_pane_t1_ParamLimits

0xe20d,	// (0x0004cd30) form2_mdip_string_pane_t1

0x37c7,	// (0x000422ea) bg_wml_button_pane_cp2

0x37bd,	// (0x000422e0) form2_midp_image_pane_g1

0x166b,	// (0x0004018e) list_double_large_graphic_pane_g5_ParamLimits

0x166b,	// (0x0004018e) list_double_large_graphic_pane_g5

0xd60e,	// (0x0004c131) midp_form_pane_ParamLimits

0x38a7,	// (0x000423ca) main_apps_wheel_pane_ParamLimits

0xc72a,	// (0x0004b24d) popup_preview_window_ParamLimits

0xc72a,	// (0x0004b24d) popup_preview_window

0x2215,	// (0x00040d38) popup_touch_info_window_ParamLimits

0x2215,	// (0x00040d38) popup_touch_info_window

0x2233,	// (0x00040d56) popup_touch_menu_window_ParamLimits

0x2233,	// (0x00040d56) popup_touch_menu_window

0x37b3,	// (0x000422d6) bg_popup_sub_pane_cp6

0x7ad7,	// (0x000465fa) list_touch_menu_pane

0x7adf,	// (0x00046602) list_single_touch_menu_pane_ParamLimits

0x7adf,	// (0x00046602) list_single_touch_menu_pane

0x7af5,	// (0x00046618) list_single_touch_menu_pane_t1

0x38a7,	// (0x000423ca) bg_popup_sub_pane_cp7_ParamLimits

0x38a7,	// (0x000423ca) bg_popup_sub_pane_cp7

0x7b03,	// (0x00046626) heading_sub_pane

0x7b0b,	// (0x0004662e) list_touch_info_pane_ParamLimits

0x7b0b,	// (0x0004662e) list_touch_info_pane

0x7b1a,	// (0x0004663d) list_single_touch_info_pane_ParamLimits

0x7b1a,	// (0x0004663d) list_single_touch_info_pane

0x7b2c,	// (0x0004664f) list_single_touch_info_pane_t1

0x7b3a,	// (0x0004665d) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0004e615) list_single_touch_info_pane_t

0x4dad,	// (0x000438d0) bg_popup_heading_pane_cp

0x7b48,	// (0x0004666b) heading_sub_pane_t1

0x567a,	// (0x0004419d) bg_popup_preview_window_pane_cp_ParamLimits

0x567a,	// (0x0004419d) bg_popup_preview_window_pane_cp

0x7b03,	// (0x00046626) heading_preview_pane

0x7b0b,	// (0x0004662e) list_preview_pane_ParamLimits

0x7b0b,	// (0x0004662e) list_preview_pane

0x7b56,	// (0x00046679) popup_preview_window_g1

0x7b1a,	// (0x0004663d) list_single_preview_pane_ParamLimits

0x7b1a,	// (0x0004663d) list_single_preview_pane

0x7b5e,	// (0x00046681) list_single_preview_pane_g1

0x7b66,	// (0x00046689) list_single_preview_pane_t1

0x7b2c,	// (0x0004664f) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0004e61a) list_single_preview_pane_t

0x7b74,	// (0x00046697) bg_popup_heading_pane_cp2_ParamLimits

0x7b74,	// (0x00046697) bg_popup_heading_pane_cp2

0x7b8a,	// (0x000466ad) heading_preview_pane_g1

0x7b92,	// (0x000466b5) heading_preview_pane_t1_ParamLimits

0x7b92,	// (0x000466b5) heading_preview_pane_t1

0x3993,	// (0x000424b6) soft_indicator_pane_t1_ParamLimits

0x4089,	// (0x00042bac) scroll_pane_ParamLimits

0x45a3,	// (0x000430c6) scroll_sc2_left_pane

0x45ac,	// (0x000430cf) scroll_sc2_right_pane

0x45cb,	// (0x000430ee) scroll_bg_pane_g1_ParamLimits

0x45e0,	// (0x00043103) scroll_bg_pane_g2_ParamLimits

0x45f8,	// (0x0004311b) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004e20b) scroll_bg_pane_g_ParamLimits

0x45cb,	// (0x000430ee) scroll_handle_pane_g1_ParamLimits

0x461a,	// (0x0004313d) scroll_handle_pane_g2_ParamLimits

0x45f8,	// (0x0004311b) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0004e212) scroll_handle_pane_g_ParamLimits

0x1cdb,	// (0x000407fe) popup_choice_list_window_ParamLimits

0x1cdb,	// (0x000407fe) popup_choice_list_window

0x5550,	// (0x00044073) choice_list_pane

0x55d2,	// (0x000440f5) cell_toolbar_pane_t1

0x55fa,	// (0x0004411d) toolbar_button_pane_ParamLimits

0x66cf,	// (0x000451f2) ai_gene_pane_1_t2_ParamLimits

0x66cf,	// (0x000451f2) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0004e435) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0004e435) ai_gene_pane_1_t

0x7baf,	// (0x000466d2) scroll_sc2_left_pane_g1

0x7baf,	// (0x000466d2) scroll_sc2_right_pane_g1

0x50fc,	// (0x00043c1f) bg_popup_sub_pane_cp10

0x7bb9,	// (0x000466dc) list_choice_list_pane

0x7bde,	// (0x00046701) list_single_choice_list_pane_ParamLimits

0x7bde,	// (0x00046701) list_single_choice_list_pane

0x7bf1,	// (0x00046714) list_single_choice_list_pane_g1

0x42a7,	// (0x00042dca) list_single_choice_list_pane_t1_ParamLimits

0x42a7,	// (0x00042dca) list_single_choice_list_pane_t1

0x7bf9,	// (0x0004671c) choice_list_pane_g1

0x7c01,	// (0x00046724) choice_list_pane_t1

0x37b3,	// (0x000422d6) input_focus_pane_cp11

0x447e,	// (0x00042fa1) title_pane_stacon_g2_ParamLimits

0x447e,	// (0x00042fa1) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0004e1f1) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0004e1f1) title_pane_stacon_g

0x4dad,	// (0x000438d0) cursor_press_pane

0xc3d7,	// (0x0004aefa) popup_fep_hwr_window_ParamLimits

0xc3d7,	// (0x0004aefa) popup_fep_hwr_window

0x1e01,	// (0x00040924) popup_fep_vkb_window_ParamLimits

0x1e01,	// (0x00040924) popup_fep_vkb_window

0x7c0f,	// (0x00046732) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0004e643) fep_vkb_side_pane_g_ParamLimits

0x2804,	// (0x00041327) fep_hwr_candidate_pane_ParamLimits

0x2804,	// (0x00041327) fep_hwr_candidate_pane

0x282e,	// (0x00041351) fep_hwr_side_pane_ParamLimits

0x282e,	// (0x00041351) fep_hwr_side_pane

0x284e,	// (0x00041371) fep_hwr_top_pane_ParamLimits

0x284e,	// (0x00041371) fep_hwr_top_pane

0x2866,	// (0x00041389) fep_hwr_write_pane_ParamLimits

0x2866,	// (0x00041389) fep_hwr_write_pane

0xfb20,	// (0x0004e643) fep_vkb_side_pane_g

0x7c17,	// (0x0004673a) fep_hwr_top_pane_g1

0x7c29,	// (0x0004674c) fep_hwr_top_pane_g2

0x2892,	// (0x000413b5) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0004e61f) fep_hwr_top_pane_g

0x28a7,	// (0x000413ca) fep_hwr_top_text_pane

0x479a,	// (0x000432bd) fep_hwr_top_text_pane_g1

0x7c5f,	// (0x00046782) fep_hwr_top_text_pane_t1

0x299d,	// (0x000414c0) fep_hwr_candidate_pane_g1

0x7eb2,	// (0x000469d5) fep_vkb_keypad_pane_g3_ParamLimits

0x7eb2,	// (0x000469d5) fep_vkb_keypad_pane_g3

0x7eda,	// (0x000469fd) fep_vkb_keypad_pane_g4_ParamLimits

0x7eda,	// (0x000469fd) fep_vkb_keypad_pane_g4

0x7f49,	// (0x00046a6c) fep_vkb_bottom_pane_g2_ParamLimits

0x7f49,	// (0x00046a6c) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0004e64a) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0004e64a) fep_vkb_bottom_pane_g

0x7baf,	// (0x000466d2) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0004e654) cell_vkb_side_pane_g

0x7fd4,	// (0x00046af7) cell_vkb_side_pane_t1

0x7fe2,	// (0x00046b05) cell_vkb_side_pane_t1_copy1

0x7baf,	// (0x000466d2) bg_fep_vkb_candidate_pane_g2

0x810e,	// (0x00046c31) cell_vkb_candidate_pane_ParamLimits

0x7c6d,	// (0x00046790) aid_size_cell_vkb_ParamLimits

0x7c6d,	// (0x00046790) aid_size_cell_vkb

0x810e,	// (0x00046c31) cell_vkb_candidate_pane

0x29b7,	// (0x000414da) bg_popup_fep_shadow_pane_g1

0xe2b7,	// (0x0004cdda) fep_vkb_bottom_pane_ParamLimits

0xe2b7,	// (0x0004cdda) fep_vkb_bottom_pane

0x7d31,	// (0x00046854) fep_vkb_candidate_pane_ParamLimits

0x7d31,	// (0x00046854) fep_vkb_candidate_pane

0xe2dc,	// (0x0004cdff) fep_vkb_keypad_pane_ParamLimits

0xe2dc,	// (0x0004cdff) fep_vkb_keypad_pane

0xe318,	// (0x0004ce3b) fep_vkb_side_pane_ParamLimits

0xe318,	// (0x0004ce3b) fep_vkb_side_pane

0xe354,	// (0x0004ce77) fep_vkb_top_pane_ParamLimits

0xe354,	// (0x0004ce77) fep_vkb_top_pane

0x7e0b,	// (0x0004692e) fep_vkb_top_pane_g1_ParamLimits

0x7e0b,	// (0x0004692e) fep_vkb_top_pane_g1

0x7e1a,	// (0x0004693d) fep_vkb_top_pane_g2_ParamLimits

0x7e1a,	// (0x0004693d) fep_vkb_top_pane_g2

0x7e29,	// (0x0004694c) fep_vkb_top_pane_g3_ParamLimits

0x7e29,	// (0x0004694c) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0004e63a) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0004e63a) fep_vkb_top_pane_g

0x7e47,	// (0x0004696a) fep_vkb_top_text_pane_ParamLimits

0x7e47,	// (0x0004696a) fep_vkb_top_text_pane

0xe390,	// (0x0004ceb3) fep_vkb_side_pane_g1_ParamLimits

0xe390,	// (0x0004ceb3) fep_vkb_side_pane_g1

0x7ea1,	// (0x000469c4) grid_vkb_side_pane_ParamLimits

0x7ea1,	// (0x000469c4) grid_vkb_side_pane

0x29bf,	// (0x000414e2) bg_popup_fep_shadow_pane_g2

0x29c8,	// (0x000414eb) bg_popup_fep_shadow_pane_g3

0x29d0,	// (0x000414f3) bg_popup_fep_shadow_pane_g4

0x29d9,	// (0x000414fc) bg_popup_fep_shadow_pane_g5

0x29e3,	// (0x00041506) bg_popup_fep_shadow_pane_g6

0x29eb,	// (0x0004150e) bg_popup_fep_shadow_pane_g7

0x418e,	// (0x00042cb1) bg_popup_fep_shadow_pane_g8

0x7ef8,	// (0x00046a1b) grid_vkb_keypad_number_pane_ParamLimits

0x7ef8,	// (0x00046a1b) grid_vkb_keypad_number_pane

0x7f08,	// (0x00046a2b) grid_vkb_keypad_pane_ParamLimits

0x7f08,	// (0x00046a2b) grid_vkb_keypad_pane

0x7f2e,	// (0x00046a51) fep_vkb_bottom_pane_g1_ParamLimits

0x7f2e,	// (0x00046a51) fep_vkb_bottom_pane_g1

0x7f57,	// (0x00046a7a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7f57,	// (0x00046a7a) grid_vkb_keypad_bottom_left_pane

0x7f6c,	// (0x00046a8f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7f6c,	// (0x00046a8f) grid_vkb_keypad_bottom_right_pane

0x7f81,	// (0x00046aa4) fep_vkb_top_text_pane_g1

0xe3d7,	// (0x0004cefa) fep_vkb_top_text_pane_t1

0xe3e9,	// (0x0004cf0c) cell_vkb_side_pane_ParamLimits

0xe3e9,	// (0x0004cf0c) cell_vkb_side_pane

0x7baf,	// (0x000466d2) cell_vkb_side_pane_g1

0x7ff0,	// (0x00046b13) cell_vkb_keypad_pane_ParamLimits

0x7ff0,	// (0x00046b13) cell_vkb_keypad_pane

0x8065,	// (0x00046b88) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0004e667) bg_popup_fep_shadow_pane_g

0x7baf,	// (0x000466d2) cell_hwr_side_pane_g1

0x7baf,	// (0x000466d2) cell_hwr_side_pane_g2

0x806f,	// (0x00046b92) cell_vkb_keypad_pane_t1

0xe3ff,	// (0x0004cf22) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe3ff,	// (0x0004cf22) cell_vkb_keypad_bottom_left_pane

0xe414,	// (0x0004cf37) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe414,	// (0x0004cf37) cell_vkb_keypad_bottom_right_pane

0x7baf,	// (0x000466d2) cell_vkb_keypad_bottom_left_pane_g1

0x7baf,	// (0x000466d2) cell_vkb_keypad_bottom_right_pane_g1

0x80d3,	// (0x00046bf6) cell_vkb_keypad_number_pane_ParamLimits

0x80d3,	// (0x00046bf6) cell_vkb_keypad_number_pane

0x80f2,	// (0x00046c15) cell_vkb_keypad_number_pane_g1

0x80fc,	// (0x00046c1f) cell_vkb_keypad_number_pane_g2

0x8105,	// (0x00046c28) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0004e659) cell_vkb_keypad_number_pane_g

0x806f,	// (0x00046b92) cell_vkb_keypad_number_pane_t1

0x8129,	// (0x00046c4c) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0004e654) cell_hwr_side_pane_g

0x8142,	// (0x00046c65) cell_hwr_side_pane_t1

0x29fd,	// (0x00041520) cell_hwr_side_pane_t1_copy1

0x7e39,	// (0x0004695c) cell_hwr_candidate_pane_g1

0x2a0b,	// (0x0004152e) cell_hwr_candidate_pane_t1

0x7baf,	// (0x000466d2) cell_vkb_candidate_pane_g2

0x81c8,	// (0x00046ceb) cell_vkb_candidate_pane_t1

0x27cb,	// (0x000412ee) bg_popup_fep_shadow_pane_ParamLimits

0x27cb,	// (0x000412ee) bg_popup_fep_shadow_pane

0xe27d,	// (0x0004cda0) bg_fep_hwr_top_pane_g4

0x7c3b,	// (0x0004675e) bg_hwr_side_pane_g1_ParamLimits

0x7c3b,	// (0x0004675e) bg_hwr_side_pane_g1

0xca86,	// (0x0004b5a9) cell_hwr_side_pane_ParamLimits

0xca86,	// (0x0004b5a9) cell_hwr_side_pane

0x291e,	// (0x00041441) fep_hwr_write_pane_g1_ParamLimits

0x291e,	// (0x00041441) fep_hwr_write_pane_g1

0x292b,	// (0x0004144e) fep_hwr_write_pane_g2_ParamLimits

0x292b,	// (0x0004144e) fep_hwr_write_pane_g2

0x2938,	// (0x0004145b) fep_hwr_write_pane_g3_ParamLimits

0x2938,	// (0x0004145b) fep_hwr_write_pane_g3

0xcaa6,	// (0x0004b5c9) fep_hwr_write_pane_g4_ParamLimits

0xcaa6,	// (0x0004b5c9) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0004e626) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0004e626) fep_hwr_write_pane_g

0xe27d,	// (0x0004cda0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe27d,	// (0x0004cda0) bg_fep_hwr_candidate_pane_g2

0x295b,	// (0x0004147e) cell_hwr_candidate_pane_ParamLimits

0x295b,	// (0x0004147e) cell_hwr_candidate_pane

0x299d,	// (0x000414c0) fep_hwr_candidate_pane_g1_ParamLimits

0x7c9b,	// (0x000467be) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7c9b,	// (0x000467be) bg_popup_fep_shadow_pane_cp2

0x7e39,	// (0x0004695c) fep_vkb_top_pane_g4_ParamLimits

0x7e39,	// (0x0004695c) fep_vkb_top_pane_g4

0x7e7f,	// (0x000469a2) fep_vkb_side_pane_g2_ParamLimits

0x7e7f,	// (0x000469a2) fep_vkb_side_pane_g2

0xbabc,	// (0x0004a5df) list_setting_pane_t4_ParamLimits

0xbabc,	// (0x0004a5df) list_setting_pane_t4

0xbb56,	// (0x0004a679) list_setting_number_pane_t5_ParamLimits

0xbb56,	// (0x0004a679) list_setting_number_pane_t5

0x47d1,	// (0x000432f4) list_double_heading_pane_cp2_ParamLimits

0x47d1,	// (0x000432f4) list_double_heading_pane_cp2

0x40bd,	// (0x00042be0) list_double_heading_pane_g1_cp2_ParamLimits

0x40bd,	// (0x00042be0) list_double_heading_pane_g1_cp2

0x4130,	// (0x00042c53) list_double_heading_pane_g2_cp2_ParamLimits

0x4130,	// (0x00042c53) list_double_heading_pane_g2_cp2

0x81d6,	// (0x00046cf9) list_double_heading_pane_t1_cp2_ParamLimits

0x81d6,	// (0x00046cf9) list_double_heading_pane_t1_cp2

0x81ec,	// (0x00046d0f) list_double_heading_pane_t2_cp2_ParamLimits

0x81ec,	// (0x00046d0f) list_double_heading_pane_t2_cp2

0x379b,	// (0x000422be) aid_value_unit2

0x1441,	// (0x0003ff64) popup_preview_fixed_window

0x3b30,	// (0x00042653) bg_popup_preview_window_pane_cp02

0x81fe,	// (0x00046d21) list_preview_fixed_pane

0x8244,	// (0x00046d67) list_empty_pane_fp_ParamLimits

0x8244,	// (0x00046d67) list_empty_pane_fp

0x8244,	// (0x00046d67) list_single_cale_day_pane_fp_ParamLimits

0x8244,	// (0x00046d67) list_single_cale_day_pane_fp

0x8244,	// (0x00046d67) list_single_graphic_heading_pane_fp_ParamLimits

0x8244,	// (0x00046d67) list_single_graphic_heading_pane_fp

0x8244,	// (0x00046d67) list_single_graphic_pane_fp_ParamLimits

0x8244,	// (0x00046d67) list_single_graphic_pane_fp

0x8244,	// (0x00046d67) list_single_heading_pane_fp_ParamLimits

0x8244,	// (0x00046d67) list_single_heading_pane_fp

0x8244,	// (0x00046d67) list_single_pane_fp_ParamLimits

0x8244,	// (0x00046d67) list_single_pane_fp

0x8259,	// (0x00046d7c) list_single_pane_fp_g1_ParamLimits

0x8259,	// (0x00046d7c) list_single_pane_fp_g1

0x40bd,	// (0x00042be0) list_single_pane_fp_g2_ParamLimits

0x40bd,	// (0x00042be0) list_single_pane_fp_g2

0x4130,	// (0x00042c53) list_single_pane_fp_g3_ParamLimits

0x4130,	// (0x00042c53) list_single_pane_fp_g3

0x8265,	// (0x00046d88) list_single_pane_fp_g4_ParamLimits

0x8265,	// (0x00046d88) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0004e688) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0004e688) list_single_pane_fp_g

0x0ed4,	// (0x0003f9f7) list_single_pane_fp_t1_ParamLimits

0x0ed4,	// (0x0003f9f7) list_single_pane_fp_t1

0x0eeb,	// (0x0003fa0e) list_single_graphic_pane_fp_g1_ParamLimits

0x0eeb,	// (0x0003fa0e) list_single_graphic_pane_fp_g1

0x8259,	// (0x00046d7c) list_single_graphic_pane_fp_g2_ParamLimits

0x8259,	// (0x00046d7c) list_single_graphic_pane_fp_g2

0x40bd,	// (0x00042be0) list_single_graphic_pane_fp_g3_ParamLimits

0x40bd,	// (0x00042be0) list_single_graphic_pane_fp_g3

0x4130,	// (0x00042c53) list_single_graphic_pane_fp_g4_ParamLimits

0x4130,	// (0x00042c53) list_single_graphic_pane_fp_g4

0x8265,	// (0x00046d88) list_single_graphic_pane_fp_g5_ParamLimits

0x8265,	// (0x00046d88) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004e691) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004e691) list_single_graphic_pane_fp_g

0x0ef7,	// (0x0003fa1a) list_single_graphic_pane_fp_t1_ParamLimits

0x0ef7,	// (0x0003fa1a) list_single_graphic_pane_fp_t1

0x0eeb,	// (0x0003fa0e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0eeb,	// (0x0003fa0e) list_single_graphic_heading_pane_fp_g1

0x8259,	// (0x00046d7c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8259,	// (0x00046d7c) list_single_graphic_heading_pane_fp_g2

0x40bd,	// (0x00042be0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x40bd,	// (0x00042be0) list_single_graphic_heading_pane_fp_g3

0x4130,	// (0x00042c53) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4130,	// (0x00042c53) list_single_graphic_heading_pane_fp_g4

0x8265,	// (0x00046d88) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8265,	// (0x00046d88) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004e691) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004e691) list_single_graphic_heading_pane_fp_g

0x0f0d,	// (0x0003fa30) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0f0d,	// (0x0003fa30) list_single_graphic_heading_pane_fp_t1

0x0f23,	// (0x0003fa46) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0f23,	// (0x0003fa46) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0004e69c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0004e69c) list_single_graphic_heading_pane_fp_t

0x0f35,	// (0x0003fa58) list_single_cale_day_pane_fp_g1_ParamLimits

0x0f35,	// (0x0003fa58) list_single_cale_day_pane_fp_g1

0x8271,	// (0x00046d94) list_single_cale_day_pane_fp_g2_ParamLimits

0x8271,	// (0x00046d94) list_single_cale_day_pane_fp_g2

0x2a29,	// (0x0004154c) list_single_cale_day_pane_fp_g3_ParamLimits

0x2a29,	// (0x0004154c) list_single_cale_day_pane_fp_g3

0x2a51,	// (0x00041574) list_single_cale_day_pane_fp_g4_ParamLimits

0x2a51,	// (0x00041574) list_single_cale_day_pane_fp_g4

0x2a75,	// (0x00041598) list_single_cale_day_pane_fp_g5_ParamLimits

0x2a75,	// (0x00041598) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e6a1) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e6a1) list_single_cale_day_pane_fp_g

0x0f6d,	// (0x0003fa90) list_single_cale_day_pane_fp_t1_ParamLimits

0x0f6d,	// (0x0003fa90) list_single_cale_day_pane_fp_t1

0x0f93,	// (0x0003fab6) list_single_cale_day_pane_fp_t2_ParamLimits

0x0f93,	// (0x0003fab6) list_single_cale_day_pane_fp_t2

0x0fac,	// (0x0003facf) list_single_cale_day_pane_fp_t3_ParamLimits

0x0fac,	// (0x0003facf) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0004e6ac) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0004e6ac) list_single_cale_day_pane_fp_t

0x8259,	// (0x00046d7c) list_empty_pane_fp_g1_ParamLimits

0x8259,	// (0x00046d7c) list_empty_pane_fp_g1

0x0fc5,	// (0x0003fae8) list_empty_pane_fp_t1

0x0fd3,	// (0x0003faf6) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0004e6b3) list_empty_pane_fp_t

0x8259,	// (0x00046d7c) list_single_heading_pane_fp_g1_ParamLimits

0x8259,	// (0x00046d7c) list_single_heading_pane_fp_g1

0x40bd,	// (0x00042be0) list_single_heading_pane_fp_g2_ParamLimits

0x40bd,	// (0x00042be0) list_single_heading_pane_fp_g2

0x4130,	// (0x00042c53) list_single_heading_pane_fp_g3_ParamLimits

0x4130,	// (0x00042c53) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0004e6b8) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0004e6b8) list_single_heading_pane_fp_g

0x0fe1,	// (0x0003fb04) list_single_heading_pane_fp_t1_ParamLimits

0x0fe1,	// (0x0003fb04) list_single_heading_pane_fp_t1

0x0ff3,	// (0x0003fb16) list_single_heading_pane_fp_t2_ParamLimits

0x0ff3,	// (0x0003fb16) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004e6bf) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0004e6bf) list_single_heading_pane_fp_t

0x4315,	// (0x00042e38) aid_size_cell_fast

0x3aa0,	// (0x000425c3) soft_indicator_pane_cp1_t1

0x4352,	// (0x00042e75) cell_app_pane_cp2_ParamLimits

0x4352,	// (0x00042e75) cell_app_pane_cp2

0x27ed,	// (0x00041310) fep_hwr_candidate_drop_down_list_pane

0xe28b,	// (0x0004cdae) fep_hwr_candidate_pane_g3_ParamLimits

0xe28b,	// (0x0004cdae) fep_hwr_candidate_pane_g3

0xe298,	// (0x0004cdbb) fep_hwr_candidate_pane_g4_ParamLimits

0xe298,	// (0x0004cdbb) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0004e633) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0004e633) fep_hwr_candidate_pane_g

0x7d20,	// (0x00046843) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7d20,	// (0x00046843) fep_vkb_candidate_drop_down_list_pane

0x8131,	// (0x00046c54) fep_vkb_candidate_pane_g3

0x8139,	// (0x00046c5c) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0004e660) fep_vkb_candidate_pane_g

0x7e39,	// (0x0004695c) cell_hwr_candidate_pane_g1_ParamLimits

0x8150,	// (0x00046c73) cell_hwr_candidate_pane_g3_ParamLimits

0x8150,	// (0x00046c73) cell_hwr_candidate_pane_g3

0x8171,	// (0x00046c94) cell_hwr_candidate_pane_g4_ParamLimits

0x8171,	// (0x00046c94) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0004e67a) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0004e67a) cell_hwr_candidate_pane_g

0x8192,	// (0x00046cb5) cell_vkb_candidate_pane_g3_ParamLimits

0x8192,	// (0x00046cb5) cell_vkb_candidate_pane_g3

0x81ad,	// (0x00046cd0) cell_vkb_candidate_pane_g4_ParamLimits

0x81ad,	// (0x00046cd0) cell_vkb_candidate_pane_g4

0x827d,	// (0x00046da0) cell_app_pane_cp2_g1_ParamLimits

0x827d,	// (0x00046da0) cell_app_pane_cp2_g1

0x829b,	// (0x00046dbe) cell_app_pane_cp2_g2_ParamLimits

0x829b,	// (0x00046dbe) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0004e6c4) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0004e6c4) cell_app_pane_cp2_g

0x82a7,	// (0x00046dca) cell_app_pane_cp2_t1_ParamLimits

0x82a7,	// (0x00046dca) cell_app_pane_cp2_t1

0x4122,	// (0x00042c45) grid_highlight_pane_cp1_ParamLimits

0x4122,	// (0x00042c45) grid_highlight_pane_cp1

0x2a99,	// (0x000415bc) cell_hwr_candidate_pane_cp1_ParamLimits

0x2a99,	// (0x000415bc) cell_hwr_candidate_pane_cp1

0x7e39,	// (0x0004695c) fep_hwr_candidate_drop_down_list_pane_g1

0x82b9,	// (0x00046ddc) fep_hwr_candidate_drop_down_list_pane_g2

0x82c6,	// (0x00046de9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004e6c9) fep_hwr_candidate_drop_down_list_pane_g

0x2ab8,	// (0x000415db) fep_hwr_candidate_drop_down_list_scroll_pane

0x2ac1,	// (0x000415e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2ac1,	// (0x000415e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2ace,	// (0x000415f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2ace,	// (0x000415f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2adb,	// (0x000415fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2adb,	// (0x000415fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8192,	// (0x00046cb5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8192,	// (0x00046cb5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x81ad,	// (0x00046cd0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x81ad,	// (0x00046cd0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2ae8,	// (0x0004160b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2ae8,	// (0x0004160b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2b03,	// (0x00041626) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2b03,	// (0x00041626) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2b1e,	// (0x00041641) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2b1e,	// (0x00041641) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0004e6d0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0004e6d0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x82d3,	// (0x00046df6) cell_vkb_candidate_pane_cp1_ParamLimits

0x82d3,	// (0x00046df6) cell_vkb_candidate_pane_cp1

0x7e39,	// (0x0004695c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7e39,	// (0x0004695c) fep_vkb_candidate_drop_down_list_pane_g1

0x82b9,	// (0x00046ddc) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x82b9,	// (0x00046ddc) fep_vkb_candidate_drop_down_list_pane_g2

0x82c6,	// (0x00046de9) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x82c6,	// (0x00046de9) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004e6c9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0004e6c9) fep_vkb_candidate_drop_down_list_pane_g

0x82f3,	// (0x00046e16) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x82f3,	// (0x00046e16) fep_vkb_candidate_drop_down_list_scroll_pane

0x8300,	// (0x00046e23) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8300,	// (0x00046e23) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x830d,	// (0x00046e30) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x830d,	// (0x00046e30) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8319,	// (0x00046e3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8319,	// (0x00046e3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8150,	// (0x00046c73) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8150,	// (0x00046c73) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8171,	// (0x00046c94) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8171,	// (0x00046c94) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8325,	// (0x00046e48) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8325,	// (0x00046e48) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8346,	// (0x00046e69) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8346,	// (0x00046e69) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8367,	// (0x00046e8a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8367,	// (0x00046e8a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0004e6e1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0004e6e1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd0ec,	// (0x0004bc0f) title_pane_g1_ParamLimits

0xd0ff,	// (0x0004bc22) title_pane_g2_ParamLimits

0xf54e,	// (0x0004e071) title_pane_g_ParamLimits

0x478a,	// (0x000432ad) aid_call2_pane

0x4792,	// (0x000432b5) aid_call_pane

0x479a,	// (0x000432bd) popup_clock_analogue_window_g1

0x479a,	// (0x000432bd) popup_clock_analogue_window_g2

0x185e,	// (0x00040381) popup_clock_analogue_window_g3

0x1867,	// (0x0004038a) popup_clock_analogue_window_g4

0x37bd,	// (0x000422e0) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0004e220) popup_clock_analogue_window_g

0x186f,	// (0x00040392) popup_clock_analogue_window_t1

0x187d,	// (0x000403a0) clock_digital_number_pane_ParamLimits

0x187d,	// (0x000403a0) clock_digital_number_pane

0x1889,	// (0x000403ac) clock_digital_number_pane_cp02_ParamLimits

0x1889,	// (0x000403ac) clock_digital_number_pane_cp02

0x1895,	// (0x000403b8) clock_digital_number_pane_cp03_ParamLimits

0x1895,	// (0x000403b8) clock_digital_number_pane_cp03

0x18a1,	// (0x000403c4) clock_digital_number_pane_cp04_ParamLimits

0x18a1,	// (0x000403c4) clock_digital_number_pane_cp04

0x18ad,	// (0x000403d0) clock_digital_separator_pane_ParamLimits

0x18ad,	// (0x000403d0) clock_digital_separator_pane

0x18b9,	// (0x000403dc) popup_clock_digital_window_t1_ParamLimits

0x18b9,	// (0x000403dc) popup_clock_digital_window_t1

0x37bd,	// (0x000422e0) clock_digital_number_pane_g1

0x37bd,	// (0x000422e0) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0004e22b) clock_digital_number_pane_g

0x37bd,	// (0x000422e0) clock_digital_separator_pane_g1

0x37bd,	// (0x000422e0) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0004e22b) clock_digital_separator_pane_g

0xd793,	// (0x0004c2b6) aid_fill_nsta_ParamLimits

0xd8c9,	// (0x0004c3ec) indicator_nsta_pane_ParamLimits

0x53dd,	// (0x00043f00) popup_clock_analogue_window

0x53dd,	// (0x00043f00) popup_clock_digital_window

0x42d6,	// (0x00042df9) grid_indicator_nsta_pane_ParamLimits

0x75c8,	// (0x000460eb) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0004e5b3) clock_nsta_pane_t

0x1822,	// (0x00040345) aid_size_max_handle

0xc174,	// (0x0004ac97) aid_size_min_handle

0x4dad,	// (0x000438d0) editor_scroll_pane

0x8382,	// (0x00046ea5) ex_editor_pane

0x4283,	// (0x00042da6) scroll_pane_cp13

0x40b5,	// (0x00042bd8) scroll_pane_cp14

0x47c9,	// (0x000432ec) scroll_pane_cp36

0xd576,	// (0x0004c099) list_single_graphic_hl_pane_cp2_ParamLimits

0xd576,	// (0x0004c099) list_single_graphic_hl_pane_cp2

0xca4c,	// (0x0004b56f) list_single_graphic_hl_pane_ParamLimits

0xca4c,	// (0x0004b56f) list_single_graphic_hl_pane

0x1009,	// (0x0003fb2c) aid_size_min_hl_cp1

0x838a,	// (0x00046ead) list_highlight_pane_cp34_ParamLimits

0x838a,	// (0x00046ead) list_highlight_pane_cp34

0x839b,	// (0x00046ebe) list_single_graphic_hl_pane_g1_ParamLimits

0x839b,	// (0x00046ebe) list_single_graphic_hl_pane_g1

0xbe04,	// (0x0004a927) list_single_graphic_hl_pane_g2_ParamLimits

0xbe04,	// (0x0004a927) list_single_graphic_hl_pane_g2

0xbe04,	// (0x0004a927) list_single_graphic_hl_pane_g3_ParamLimits

0xbe04,	// (0x0004a927) list_single_graphic_hl_pane_g3

0x4d1e,	// (0x00043841) list_single_graphic_hl_pane_g4_ParamLimits

0x4d1e,	// (0x00043841) list_single_graphic_hl_pane_g4

0x2b39,	// (0x0004165c) list_single_graphic_hl_pane_g5_ParamLimits

0x2b39,	// (0x0004165c) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0004e6f2) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0004e6f2) list_single_graphic_hl_pane_g

0xbe10,	// (0x0004a933) list_single_graphic_hl_pane_t1_ParamLimits

0xbe10,	// (0x0004a933) list_single_graphic_hl_pane_t1

0x83a8,	// (0x00046ecb) aid_size_min_hl_cp2

0x83b1,	// (0x00046ed4) list_highlight_pane_cp34_cp2_ParamLimits

0x83b1,	// (0x00046ed4) list_highlight_pane_cp34_cp2

0x839b,	// (0x00046ebe) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x839b,	// (0x00046ebe) list_single_graphic_hl_pane_g1_cp2

0x83be,	// (0x00046ee1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x83be,	// (0x00046ee1) list_single_graphic_hl_pane_g2_cp2

0x83ca,	// (0x00046eed) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x83ca,	// (0x00046eed) list_single_graphic_hl_pane_g3_cp2

0x7bd2,	// (0x000466f5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7bd2,	// (0x000466f5) list_single_graphic_hl_pane_g4_cp2

0x83d8,	// (0x00046efb) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x83d8,	// (0x00046efb) list_single_graphic_hl_pane_g5_cp2

0xc1e1,	// (0x0004ad04) control_pane_g4_ParamLimits

0xc1e1,	// (0x0004ad04) control_pane_g4

0x50fc,	// (0x00043c1f) bg_popup_sub_pane_cp10_ParamLimits

0x7bb9,	// (0x000466dc) list_choice_list_pane_ParamLimits

0x7bc8,	// (0x000466eb) scroll_pane_cp23

0x3b30,	// (0x00042653) bg_popup_preview_window_pane_cp02_ParamLimits

0x81fe,	// (0x00046d21) list_preview_fixed_pane_ParamLimits

0x8214,	// (0x00046d37) list_preview_fixed_pane_cp_ParamLimits

0x8214,	// (0x00046d37) list_preview_fixed_pane_cp

0x8220,	// (0x00046d43) popup_preview_fixed_window_g1_ParamLimits

0x8220,	// (0x00046d43) popup_preview_fixed_window_g1

0x822c,	// (0x00046d4f) popup_preview_fixed_window_g2_ParamLimits

0x822c,	// (0x00046d4f) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0004e681) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0004e681) popup_preview_fixed_window_g

0x1796,	// (0x000402b9) aid_navi_side_left_pane_ParamLimits

0x17ab,	// (0x000402ce) aid_navi_side_right_pane_ParamLimits

0x17c3,	// (0x000402e6) navi_icon_pane_stacon_ParamLimits

0x17d7,	// (0x000402fa) navi_navi_pane_stacon_ParamLimits

0x17c3,	// (0x000402e6) navi_text_pane_stacon_ParamLimits

0x37b3,	// (0x000422d6) main_text_info_pane

0x8402,	// (0x00046f25) listscroll_text_info_pane

0x840a,	// (0x00046f2d) list_text_info_pane_ParamLimits

0x840a,	// (0x00046f2d) list_text_info_pane

0x8419,	// (0x00046f3c) scroll_pane_cp24_ParamLimits

0x8419,	// (0x00046f3c) scroll_pane_cp24

0xe42f,	// (0x0004cf52) list_text_info_pane_t1_ParamLimits

0xe42f,	// (0x0004cf52) list_text_info_pane_t1

0xc34a,	// (0x0004ae6d) popup_fast_swap2_window_ParamLimits

0xc34a,	// (0x0004ae6d) popup_fast_swap2_window

0x8468,	// (0x00046f8b) aid_size_cell_fast2

0x37b3,	// (0x000422d6) bg_popup_window_pane_cp17

0x5a72,	// (0x00044595) heading_pane_cp2

0x3d7f,	// (0x000428a2) listscroll_fast2_pane

0x8472,	// (0x00046f95) grid_fast2_pane

0x847c,	// (0x00046f9f) listscroll_fast2_pane_g1

0x8484,	// (0x00046fa7) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0004e6fd) listscroll_fast2_pane_g

0x4283,	// (0x00042da6) scroll_pane_cp26

0x848e,	// (0x00046fb1) cell_fast2_pane_ParamLimits

0x848e,	// (0x00046fb1) cell_fast2_pane

0x84a3,	// (0x00046fc6) cell_fast2_pane_g1

0x84ac,	// (0x00046fcf) cell_fast2_pane_g2

0x84b5,	// (0x00046fd8) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0004e702) cell_fast2_pane_g

0x3e72,	// (0x00042995) grid_highlight_pane_cp9

0x3e87,	// (0x000429aa) main_eswt_pane_ParamLimits

0x3e87,	// (0x000429aa) main_eswt_pane

0x842e,	// (0x00046f51) list_single_text_info_pane

0x84bd,	// (0x00046fe0) eswt_ctrl_button_pane

0x84bd,	// (0x00046fe0) eswt_ctrl_canvas_pane

0x84c5,	// (0x00046fe8) eswt_ctrl_combo_pane

0x84bd,	// (0x00046fe0) eswt_ctrl_default_pane

0x84bd,	// (0x00046fe0) eswt_ctrl_label_pane

0x84cd,	// (0x00046ff0) eswt_ctrl_wait_pane

0x84d5,	// (0x00046ff8) eswt_shell_pane

0x37b3,	// (0x000422d6) listscroll_eswt_app_pane

0x84f5,	// (0x00047018) popup_eswt_tasktip_window_ParamLimits

0x84f5,	// (0x00047018) popup_eswt_tasktip_window

0x567a,	// (0x0004419d) bg_popup_window_pane_cp18

0x8506,	// (0x00047029) eswt_control_pane_g1_ParamLimits

0x8506,	// (0x00047029) eswt_control_pane_g1

0x8513,	// (0x00047036) eswt_control_pane_g2_ParamLimits

0x8513,	// (0x00047036) eswt_control_pane_g2

0x8520,	// (0x00047043) eswt_control_pane_g3_ParamLimits

0x8520,	// (0x00047043) eswt_control_pane_g3

0x852d,	// (0x00047050) eswt_control_pane_g4_ParamLimits

0x852d,	// (0x00047050) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0004e709) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0004e709) eswt_control_pane_g

0x4122,	// (0x00042c45) bg_button_pane_ParamLimits

0x4122,	// (0x00042c45) bg_button_pane

0x3e87,	// (0x000429aa) common_borders_pane_copy2_ParamLimits

0x3e87,	// (0x000429aa) common_borders_pane_copy2

0x853a,	// (0x0004705d) control_button_pane_g1_ParamLimits

0x853a,	// (0x0004705d) control_button_pane_g1

0x8546,	// (0x00047069) control_button_pane_g2_ParamLimits

0x8546,	// (0x00047069) control_button_pane_g2

0x8552,	// (0x00047075) control_button_pane_g3_ParamLimits

0x8552,	// (0x00047075) control_button_pane_g3

0x0002,

0xfbef,	// (0x0004e712) control_button_pane_g_ParamLimits

0xfbef,	// (0x0004e712) control_button_pane_g

0x8566,	// (0x00047089) control_button_pane_t1

0x8574,	// (0x00047097) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0004e719) control_button_pane_t

0x5606,	// (0x00044129) bg_button_pane_g1

0x560e,	// (0x00044131) bg_button_pane_g2

0x5616,	// (0x00044139) bg_button_pane_g3

0x561e,	// (0x00044141) bg_button_pane_g4

0x5626,	// (0x00044149) bg_button_pane_g5

0x562e,	// (0x00044151) bg_button_pane_g6

0x5636,	// (0x00044159) bg_button_pane_g7

0x563e,	// (0x00044161) bg_button_pane_g8

0x5646,	// (0x00044169) bg_button_pane_g9

0x0008,

0xf866,	// (0x0004e389) bg_button_pane_g

0x7b74,	// (0x00046697) common_borders_pane_ParamLimits

0x7b74,	// (0x00046697) common_borders_pane

0x8506,	// (0x00047029) eswt_control_pane_g1_copy1_ParamLimits

0x8506,	// (0x00047029) eswt_control_pane_g1_copy1

0x8513,	// (0x00047036) eswt_control_pane_g2_copy1_ParamLimits

0x8513,	// (0x00047036) eswt_control_pane_g2_copy1

0x8520,	// (0x00047043) eswt_control_pane_g3_copy1_ParamLimits

0x8520,	// (0x00047043) eswt_control_pane_g3_copy1

0x852d,	// (0x00047050) eswt_control_pane_g4_copy1_ParamLimits

0x852d,	// (0x00047050) eswt_control_pane_g4_copy1

0x7baf,	// (0x000466d2) bg_eswt_ctrl_canvas_pane_g1

0x7b74,	// (0x00046697) common_borders_pane_cp2_ParamLimits

0x7b74,	// (0x00046697) common_borders_pane_cp2

0x7b74,	// (0x00046697) common_borders_pane_cp3_ParamLimits

0x7b74,	// (0x00046697) common_borders_pane_cp3

0x8582,	// (0x000470a5) separator_horizontal_pane

0x858a,	// (0x000470ad) separator_vertical_pane

0x8506,	// (0x00047029) eswt_control_pane_g1_copy2_ParamLimits

0x8506,	// (0x00047029) eswt_control_pane_g1_copy2

0x8513,	// (0x00047036) eswt_control_pane_g2_copy2_ParamLimits

0x8513,	// (0x00047036) eswt_control_pane_g2_copy2

0x8520,	// (0x00047043) eswt_control_pane_g3_copy2_ParamLimits

0x8520,	// (0x00047043) eswt_control_pane_g3_copy2

0x852d,	// (0x00047050) eswt_control_pane_g4_copy2_ParamLimits

0x852d,	// (0x00047050) eswt_control_pane_g4_copy2

0x37b3,	// (0x000422d6) common_borders_pane_cp4

0x8593,	// (0x000470b6) separator_horizontal_pane_g1

0x859c,	// (0x000470bf) separator_horizontal_pane_g2

0x85a5,	// (0x000470c8) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0004e71e) separator_horizontal_pane_g

0x8506,	// (0x00047029) eswt_control_pane_g1_copy3_ParamLimits

0x8506,	// (0x00047029) eswt_control_pane_g1_copy3

0x8513,	// (0x00047036) eswt_control_pane_g2_copy3_ParamLimits

0x8513,	// (0x00047036) eswt_control_pane_g2_copy3

0x8520,	// (0x00047043) eswt_control_pane_g3_copy3_ParamLimits

0x8520,	// (0x00047043) eswt_control_pane_g3_copy3

0x852d,	// (0x00047050) eswt_control_pane_g4_copy3_ParamLimits

0x852d,	// (0x00047050) eswt_control_pane_g4_copy3

0x37b3,	// (0x000422d6) common_borders_pane_cp5

0x85ae,	// (0x000470d1) separator_vertical_pane_g1

0x85b7,	// (0x000470da) separator_vertical_pane_g2

0x85c0,	// (0x000470e3) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0004e725) separator_vertical_pane_g

0x8506,	// (0x00047029) eswt_control_pane_g1_copy4_ParamLimits

0x8506,	// (0x00047029) eswt_control_pane_g1_copy4

0x8513,	// (0x00047036) eswt_control_pane_g2_copy4_ParamLimits

0x8513,	// (0x00047036) eswt_control_pane_g2_copy4

0x8520,	// (0x00047043) eswt_control_pane_g3_copy4_ParamLimits

0x8520,	// (0x00047043) eswt_control_pane_g3_copy4

0x852d,	// (0x00047050) eswt_control_pane_g4_copy4_ParamLimits

0x852d,	// (0x00047050) eswt_control_pane_g4_copy4

0xe44a,	// (0x0004cf6d) eswt_ctrl_combo_button_pane

0xe452,	// (0x0004cf75) eswt_ctrl_input_pane

0xe45a,	// (0x0004cf7d) popup_choice_list_window_cp70

0xe462,	// (0x0004cf85) eswt_ctrl_input_pane_t1

0x37b3,	// (0x000422d6) input_focus_pane_cp70

0x7b74,	// (0x00046697) bg_button_pane_cp70_ParamLimits

0x7b74,	// (0x00046697) bg_button_pane_cp70

0xe470,	// (0x0004cf93) eswt_ctrl_combo_button_pane_g1

0x85f7,	// (0x0004711a) wait_bar_pane_cp70

0x567a,	// (0x0004419d) bg_popup_window_pane_cp70_ParamLimits

0x567a,	// (0x0004419d) bg_popup_window_pane_cp70

0x85ff,	// (0x00047122) popup_eswt_tasktip_window_t1

0x8615,	// (0x00047138) wait_bar_pane_cp71_ParamLimits

0x8615,	// (0x00047138) wait_bar_pane_cp71

0x8621,	// (0x00047144) grid_eswt_app_pane

0x45ac,	// (0x000430cf) scroll_pane_cp70

0xe478,	// (0x0004cf9b) cell_eswt_app_pane_ParamLimits

0xe478,	// (0x0004cf9b) cell_eswt_app_pane

0xe4a2,	// (0x0004cfc5) cell_eswt_app_pane_g1_ParamLimits

0xe4a2,	// (0x0004cfc5) cell_eswt_app_pane_g1

0xe4d1,	// (0x0004cff4) cell_eswt_app_pane_g2_ParamLimits

0xe4d1,	// (0x0004cff4) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0004e72c) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0004e72c) cell_eswt_app_pane_g

0xe4fa,	// (0x0004d01d) cell_eswt_app_pane_t1_ParamLimits

0xe4fa,	// (0x0004d01d) cell_eswt_app_pane_t1

0x86e4,	// (0x00047207) grid_highlight_pane_cp70_ParamLimits

0x86e4,	// (0x00047207) grid_highlight_pane_cp70

0x4c82,	// (0x000437a5) set_content_pane_g1

0xd748,	// (0x0004c26b) status_small_volume_pane

0x2b4d,	// (0x00041670) status_small_volume_pane_g1

0x2b55,	// (0x00041678) volume_small2_pane

0x2b5e,	// (0x00041681) volume_small2_pane_g1

0x2b67,	// (0x0004168a) volume_small2_pane_g2

0x2b70,	// (0x00041693) volume_small2_pane_g3

0x2b79,	// (0x0004169c) volume_small2_pane_g4

0x2b82,	// (0x000416a5) volume_small2_pane_g5

0x2b8b,	// (0x000416ae) volume_small2_pane_g6

0x2b94,	// (0x000416b7) volume_small2_pane_g7

0x2b9d,	// (0x000416c0) volume_small2_pane_g8

0x2ba6,	// (0x000416c9) volume_small2_pane_g9

0x2baf,	// (0x000416d2) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0004e731) volume_small2_pane_g

0x7f81,	// (0x00046aa4) fep_vkb_top_text_pane_g1_ParamLimits

0xe3d7,	// (0x0004cefa) fep_vkb_top_text_pane_t1_ParamLimits

0x8238,	// (0x00046d5b) popup_preview_fixed_window_g3_ParamLimits

0x8238,	// (0x00046d5b) popup_preview_fixed_window_g3

0xc96d,	// (0x0004b490) popup_toolbar_trans_pane

0xddc5,	// (0x0004c8e8) aid_height_set_list_ParamLimits

0x69e7,	// (0x0004550a) aid_size_parent_ParamLimits

0x50fc,	// (0x00043c1f) list_highlight_pane_cp2_ParamLimits

0x4c82,	// (0x000437a5) set_content_pane_g1_ParamLimits

0xca5d,	// (0x0004b580) list_single_image_pane_ParamLimits

0xca5d,	// (0x0004b580) list_single_image_pane

0xe52c,	// (0x0004d04f) aid_size_cell_image_ParamLimits

0xe52c,	// (0x0004d04f) aid_size_cell_image

0xe539,	// (0x0004d05c) grid_single_image_pane_ParamLimits

0xe539,	// (0x0004d05c) grid_single_image_pane

0x5a1a,	// (0x0004453d) list_single_image_pane_g1_ParamLimits

0x5a1a,	// (0x0004453d) list_single_image_pane_g1

0x8709,	// (0x0004722c) list_single_image_pane_g2_ParamLimits

0x8709,	// (0x0004722c) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0004e746) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0004e746) list_single_image_pane_g

0x871d,	// (0x00047240) list_single_image_pane_t1_ParamLimits

0x871d,	// (0x00047240) list_single_image_pane_t1

0xe547,	// (0x0004d06a) cell_image_list_pane_ParamLimits

0xe547,	// (0x0004d06a) cell_image_list_pane

0xe55d,	// (0x0004d080) cell_image_list_pane_g1

0xe566,	// (0x0004d089) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0004e74b) cell_image_list_pane_g

0x8759,	// (0x0004727c) aid_size_cell_tb_trans_pane

0x4122,	// (0x00042c45) bg_tb_trans_pane

0x876b,	// (0x0004728e) grid_tb_trans_pane

0x5606,	// (0x00044129) bg_tb_trans_pane_g1

0x560e,	// (0x00044131) bg_tb_trans_pane_g2

0x5616,	// (0x00044139) bg_tb_trans_pane_g3

0x561e,	// (0x00044141) bg_tb_trans_pane_g4

0x5626,	// (0x00044149) bg_tb_trans_pane_g5

0x563e,	// (0x00044161) bg_tb_trans_pane_g6

0x5646,	// (0x00044169) bg_tb_trans_pane_g7

0x562e,	// (0x00044151) bg_tb_trans_pane_g8

0x5636,	// (0x00044159) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0004e750) bg_tb_trans_pane_g

0x877f,	// (0x000472a2) cell_toolbar_trans_pane_ParamLimits

0x877f,	// (0x000472a2) cell_toolbar_trans_pane

0x7baf,	// (0x000466d2) cell_toolbar_trans_pane_g1

0xe19a,	// (0x0004ccbd) list_form2_midp_pane_t1

0xe1a8,	// (0x0004cccb) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0004e5f9) list_form2_midp_pane_t

0x77a0,	// (0x000462c3) scroll_pane_cp51_ParamLimits

0x795c,	// (0x0004647f) form2_midp_wait_pane_g1

0x7965,	// (0x00046488) form2_midp_wait_pane_g2

0x796e,	// (0x00046491) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0004e60e) form2_midp_wait_pane_g

0x38a7,	// (0x000423ca) list_highlight_pane_cp21_ParamLimits

0x79ba,	// (0x000464dd) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x79c9,	// (0x000464ec) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6b9f,	// (0x000456c2) list_single_2graphic_im_pane_ParamLimits

0x6b9f,	// (0x000456c2) list_single_2graphic_im_pane

0xe56f,	// (0x0004d092) list_single_2graphic_im_pane_g1_ParamLimits

0xe56f,	// (0x0004d092) list_single_2graphic_im_pane_g1

0xe580,	// (0x0004d0a3) list_single_2graphic_im_pane_g2_ParamLimits

0xe580,	// (0x0004d0a3) list_single_2graphic_im_pane_g2

0xe58c,	// (0x0004d0af) list_single_2graphic_im_pane_g3_ParamLimits

0xe58c,	// (0x0004d0af) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0004e763) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0004e763) list_single_2graphic_im_pane_g

0xe5a0,	// (0x0004d0c3) list_single_2graphic_im_pane_t1_ParamLimits

0xe5a0,	// (0x0004d0c3) list_single_2graphic_im_pane_t1

0x8244,	// (0x00046d67) list_single_graphic_2heading_pane_fp_ParamLimits

0x8244,	// (0x00046d67) list_single_graphic_2heading_pane_fp

0x0eeb,	// (0x0003fa0e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0eeb,	// (0x0003fa0e) list_single_graphic_2heading_pane_fp_g1

0x8259,	// (0x00046d7c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8259,	// (0x00046d7c) list_single_graphic_2heading_pane_fp_g2

0x40bd,	// (0x00042be0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x40bd,	// (0x00042be0) list_single_graphic_2heading_pane_fp_g3

0x4130,	// (0x00042c53) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4130,	// (0x00042c53) list_single_graphic_2heading_pane_fp_g4

0x8265,	// (0x00046d88) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8265,	// (0x00046d88) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004e691) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004e691) list_single_graphic_2heading_pane_fp_g

0x1034,	// (0x0003fb57) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1034,	// (0x0003fb57) list_single_graphic_2heading_pane_fp_t1

0x0f23,	// (0x0003fa46) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0f23,	// (0x0003fa46) list_single_graphic_2heading_pane_fp_t2

0x104a,	// (0x0003fb6d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x104a,	// (0x0003fb6d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0004e76c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0004e76c) list_single_graphic_2heading_pane_fp_t

0x7c47,	// (0x0004676a) fep_hwr_write_pane_g5_ParamLimits

0x7c47,	// (0x0004676a) fep_hwr_write_pane_g5

0x7c53,	// (0x00046776) fep_hwr_write_pane_g6_ParamLimits

0x7c53,	// (0x00046776) fep_hwr_write_pane_g6

0x84d5,	// (0x00046ff8) eswt_shell_pane_ParamLimits

0x567a,	// (0x0004419d) bg_popup_window_pane_cp18_ParamLimits

0x692f,	// (0x00045452) heading_pane_cp70

0x85ff,	// (0x00047122) popup_eswt_tasktip_window_t1_ParamLimits

0xd7ee,	// (0x0004c311) aid_touch_tab_arrow_left

0xd804,	// (0x0004c327) aid_touch_tab_arrow_right

0xd117,	// (0x0004bc3a) title_pane_g3_ParamLimits

0xd117,	// (0x0004bc3a) title_pane_g3

0x40e1,	// (0x00042c04) set_value_pane_g1

0xc96d,	// (0x0004b490) popup_toolbar_trans_pane_ParamLimits

0x8759,	// (0x0004727c) aid_size_cell_tb_trans_pane_ParamLimits

0x4122,	// (0x00042c45) bg_tb_trans_pane_ParamLimits

0x876b,	// (0x0004728e) grid_tb_trans_pane_ParamLimits

0x3b30,	// (0x00042653) cont_note_pane_ParamLimits

0x3b30,	// (0x00042653) cont_note_pane

0x3e87,	// (0x000429aa) cont_snote2_single_text_pane_ParamLimits

0x3e87,	// (0x000429aa) cont_snote2_single_text_pane

0x3e87,	// (0x000429aa) cont_snote2_single_graphic_pane_ParamLimits

0x3e87,	// (0x000429aa) cont_snote2_single_graphic_pane

0x5c8d,	// (0x000447b0) cont_note_wait_pane_ParamLimits

0x5c8d,	// (0x000447b0) cont_note_wait_pane

0x5c8d,	// (0x000447b0) cont_note_image_pane_ParamLimits

0x5c8d,	// (0x000447b0) cont_note_image_pane

0x8813,	// (0x00047336) popup_note2_window_g1_ParamLimits

0x8813,	// (0x00047336) popup_note2_window_g1

0x8844,	// (0x00047367) popup_note2_window_t1_ParamLimits

0x8844,	// (0x00047367) popup_note2_window_t1

0x8889,	// (0x000473ac) popup_note2_window_t2_ParamLimits

0x8889,	// (0x000473ac) popup_note2_window_t2

0x88ce,	// (0x000473f1) popup_note2_window_t3_ParamLimits

0x88ce,	// (0x000473f1) popup_note2_window_t3

0x8913,	// (0x00047436) popup_note2_window_t4_ParamLimits

0x8913,	// (0x00047436) popup_note2_window_t4

0x3bb4,	// (0x000426d7) popup_note2_window_t5_ParamLimits

0x3bb4,	// (0x000426d7) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0004e778) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0004e778) popup_note2_window_t

0x8942,	// (0x00047465) popup_note2_image_window_g1_ParamLimits

0x8942,	// (0x00047465) popup_note2_image_window_g1

0x894e,	// (0x00047471) popup_note2_image_window_g2_ParamLimits

0x894e,	// (0x00047471) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0004e783) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0004e783) popup_note2_image_window_g

0x8960,	// (0x00047483) popup_note2_image_window_t1_ParamLimits

0x8960,	// (0x00047483) popup_note2_image_window_t1

0x8978,	// (0x0004749b) popup_note2_image_window_t2_ParamLimits

0x8978,	// (0x0004749b) popup_note2_image_window_t2

0x8990,	// (0x000474b3) popup_note2_image_window_t3_ParamLimits

0x8990,	// (0x000474b3) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0004e788) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0004e788) popup_note2_image_window_t

0x5c9b,	// (0x000447be) popup_note2_wait_window_g1_ParamLimits

0x5c9b,	// (0x000447be) popup_note2_wait_window_g1

0x89ac,	// (0x000474cf) popup_note2_wait_window_g2_ParamLimits

0x89ac,	// (0x000474cf) popup_note2_wait_window_g2

0x5cb3,	// (0x000447d6) popup_note2_wait_window_g3_ParamLimits

0x5cb3,	// (0x000447d6) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0004e78f) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0004e78f) popup_note2_wait_window_g

0x89b8,	// (0x000474db) popup_note2_wait_window_t1_ParamLimits

0x89b8,	// (0x000474db) popup_note2_wait_window_t1

0x89d6,	// (0x000474f9) popup_note2_wait_window_t2_ParamLimits

0x89d6,	// (0x000474f9) popup_note2_wait_window_t2

0x89f4,	// (0x00047517) popup_note2_wait_window_t3_ParamLimits

0x89f4,	// (0x00047517) popup_note2_wait_window_t3

0x8a06,	// (0x00047529) popup_note2_wait_window_t4_ParamLimits

0x8a06,	// (0x00047529) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0004e796) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0004e796) popup_note2_wait_window_t

0x8a18,	// (0x0004753b) wait_bar2_pane_ParamLimits

0x8a18,	// (0x0004753b) wait_bar2_pane

0x8a30,	// (0x00047553) popup_snote2_single_text_window_g1_ParamLimits

0x8a30,	// (0x00047553) popup_snote2_single_text_window_g1

0x8a58,	// (0x0004757b) popup_snote2_single_text_window_t1_ParamLimits

0x8a58,	// (0x0004757b) popup_snote2_single_text_window_t1

0x8aa4,	// (0x000475c7) popup_snote2_single_text_window_t2_ParamLimits

0x8aa4,	// (0x000475c7) popup_snote2_single_text_window_t2

0x8af0,	// (0x00047613) popup_snote2_single_text_window_t3_ParamLimits

0x8af0,	// (0x00047613) popup_snote2_single_text_window_t3

0x8b31,	// (0x00047654) popup_snote2_single_text_window_t4_ParamLimits

0x8b31,	// (0x00047654) popup_snote2_single_text_window_t4

0x8b67,	// (0x0004768a) popup_snote2_single_text_window_t5_ParamLimits

0x8b67,	// (0x0004768a) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0004e79f) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0004e79f) popup_snote2_single_text_window_t

0x8b92,	// (0x000476b5) popup_snote2_single_graphic_window_g1_ParamLimits

0x8b92,	// (0x000476b5) popup_snote2_single_graphic_window_g1

0x8bba,	// (0x000476dd) popup_snote2_single_graphic_window_g2_ParamLimits

0x8bba,	// (0x000476dd) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0004e7aa) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0004e7aa) popup_snote2_single_graphic_window_g

0x8be2,	// (0x00047705) popup_snote2_single_graphic_window_t1_ParamLimits

0x8be2,	// (0x00047705) popup_snote2_single_graphic_window_t1

0x8c2e,	// (0x00047751) popup_snote2_single_graphic_window_t2_ParamLimits

0x8c2e,	// (0x00047751) popup_snote2_single_graphic_window_t2

0x8af0,	// (0x00047613) popup_snote2_single_graphic_window_t3_ParamLimits

0x8af0,	// (0x00047613) popup_snote2_single_graphic_window_t3

0x8b31,	// (0x00047654) popup_snote2_single_graphic_window_t4_ParamLimits

0x8b31,	// (0x00047654) popup_snote2_single_graphic_window_t4

0x8b67,	// (0x0004768a) popup_snote2_single_graphic_window_t5_ParamLimits

0x8b67,	// (0x0004768a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0004e7af) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0004e7af) popup_snote2_single_graphic_window_t

0x7661,	// (0x00046184) clock_nsta_pane_cp2_t1

0x7661,	// (0x00046184) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0004e5cf) clock_nsta_pane_cp2_t

0x072d,	// (0x0003f250) form_field_data_wide_pane_g1_ParamLimits

0x40bd,	// (0x00042be0) form_field_data_wide_pane_g2_ParamLimits

0x40bd,	// (0x00042be0) form_field_data_wide_pane_g2

0x4130,	// (0x00042c53) form_field_data_wide_pane_g3_ParamLimits

0x4130,	// (0x00042c53) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0004e1a3) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0004e1a3) form_field_data_wide_pane_g

0xe0dd,	// (0x0004cc00) grid_touch_3_pane_ParamLimits

0xe0dd,	// (0x0004cc00) grid_touch_3_pane

0xe5d1,	// (0x0004d0f4) cell_touch_3_pane_ParamLimits

0xe5d1,	// (0x0004d0f4) cell_touch_3_pane

0x7baf,	// (0x000466d2) cell_touch_3_pane_g1

0x7baf,	// (0x000466d2) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0004e654) cell_touch_3_pane_g

0x3be6,	// (0x00042709) cont_query_data_pane

0x3bee,	// (0x00042711) cont_query_data_pane_cp1

0x8ca8,	// (0x000477cb) button_value_adjust_pane_cp7

0x8cb0,	// (0x000477d3) query_popup_pane_cp3

0x488a,	// (0x000433ad) bg_popup_sub_pane_cp22_ParamLimits

0x18d8,	// (0x000403fb) navi_navi_volume_pane_cp2

0x18f3,	// (0x00040416) popup_side_volume_key_window_g2

0x1902,	// (0x00040425) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0004e239) popup_side_volume_key_window_g

0x191f,	// (0x00040442) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0004e240) popup_side_volume_key_window_t

0x4b41,	// (0x00043664) popup_side_volume_key_window_ParamLimits

0xc15c,	// (0x0004ac7f) list_double_graphic_pane_g4_ParamLimits

0xc15c,	// (0x0004ac7f) list_double_graphic_pane_g4

0xdf3e,	// (0x0004ca61) list_single_2heading_msg_pane_ParamLimits

0xdf3e,	// (0x0004ca61) list_single_2heading_msg_pane

0xcabb,	// (0x0004b5de) list_single_2heading_msg_pane_g1_ParamLimits

0xcabb,	// (0x0004b5de) list_single_2heading_msg_pane_g1

0xcac7,	// (0x0004b5ea) list_single_2heading_msg_pane_g2_ParamLimits

0xcac7,	// (0x0004b5ea) list_single_2heading_msg_pane_g2

0xcada,	// (0x0004b5fd) list_single_2heading_msg_pane_g3_ParamLimits

0xcada,	// (0x0004b5fd) list_single_2heading_msg_pane_g3

0xcae6,	// (0x0004b609) list_single_2heading_msg_pane_g4_ParamLimits

0xcae6,	// (0x0004b609) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0004e7ba) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0004e7ba) list_single_2heading_msg_pane_g

0xbe26,	// (0x0004a949) list_single_2heading_msg_pane_t1_ParamLimits

0xbe26,	// (0x0004a949) list_single_2heading_msg_pane_t1

0xbe4e,	// (0x0004a971) list_single_2heading_msg_pane_t2_ParamLimits

0xbe4e,	// (0x0004a971) list_single_2heading_msg_pane_t2

0xbeb9,	// (0x0004a9dc) list_single_2heading_msg_pane_t3_ParamLimits

0xbeb9,	// (0x0004a9dc) list_single_2heading_msg_pane_t3

0x10ff,	// (0x0003fc22) list_single_2heading_msg_pane_t4_ParamLimits

0x10ff,	// (0x0003fc22) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0004e7c3) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0004e7c3) list_single_2heading_msg_pane_t

0x37fb,	// (0x0004231e) title_pane_g4_ParamLimits

0x37fb,	// (0x0004231e) title_pane_g4

0x16e7,	// (0x0004020a) title_pane_stacon_g3_ParamLimits

0x16e7,	// (0x0004020a) title_pane_stacon_g3

0x87d6,	// (0x000472f9) list_single_2graphic_im_pane_g4_ParamLimits

0x87d6,	// (0x000472f9) list_single_2graphic_im_pane_g4

0x66ec,	// (0x0004520f) popup_side_volume_key_window_cp

0x6eb2,	// (0x000459d5) main_idle_act2_pane_t1

0x22a6,	// (0x00040dc9) toolbar_button_pane_g10

0xd422,	// (0x0004bf45) popup_toolbar_window_cp1

0x7652,	// (0x00046175) clock_nsta_pane_cp_t1

0x7652,	// (0x00046175) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0004e5ca) clock_nsta_pane_cp_t

0x18d8,	// (0x000403fb) navi_navi_volume_pane_cp2_ParamLimits

0x18e7,	// (0x0004040a) popup_side_volume_key_window_g1_ParamLimits

0x18f3,	// (0x00040416) popup_side_volume_key_window_g2_ParamLimits

0x1902,	// (0x00040425) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0004e239) popup_side_volume_key_window_g_ParamLimits

0x27d9,	// (0x000412fc) fep_hwr_aid_pane

0xe27d,	// (0x0004cda0) bg_fep_hwr_top_pane_g4_ParamLimits

0x7c17,	// (0x0004673a) fep_hwr_top_pane_g1_ParamLimits

0x7c29,	// (0x0004674c) fep_hwr_top_pane_g2_ParamLimits

0x2892,	// (0x000413b5) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0004e61f) fep_hwr_top_pane_g_ParamLimits

0x28a7,	// (0x000413ca) fep_hwr_top_text_pane_ParamLimits

0x64af,	// (0x00044fd2) aid_touch_tab_arrow_arrow_2

0x64b8,	// (0x00044fdb) aid_touch_tab_arrow_left_2

0x27ed,	// (0x00041310) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2824,	// (0x00041347) fep_hwr_prediction_pane

0x7d89,	// (0x000468ac) fep_vkb_prediction_pane

0xe3b7,	// (0x0004ceda) fep_vkb_side_pane_g3_ParamLimits

0xe3b7,	// (0x0004ceda) fep_vkb_side_pane_g3

0x7e39,	// (0x0004695c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x82b9,	// (0x00046ddc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x82c6,	// (0x00046de9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0004e6c9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8cd5,	// (0x000477f8) fep_hwr_prediction_pane_g1

0x2bdc,	// (0x000416ff) fep_hwr_prediction_pane_g2

0x2be4,	// (0x00041707) fep_hwr_prediction_pane_g3

0x2bec,	// (0x0004170f) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0004e7cc) fep_hwr_prediction_pane_g

0x8cd5,	// (0x000477f8) fep_vkb_prediction_pane_g1

0x8cdf,	// (0x00047802) fep_vkb_prediction_pane_g2

0x8ce7,	// (0x0004780a) fep_vkb_prediction_pane_g3

0x8cef,	// (0x00047812) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0004e7d5) fep_vkb_prediction_pane_g

0x258e,	// (0x000410b1) slider_set_pane_g3

0x25a2,	// (0x000410c5) slider_set_pane_g4

0x25ba,	// (0x000410dd) slider_set_pane_g5

0x258e,	// (0x000410b1) slider_set_pane_g6

0x25d0,	// (0x000410f3) slider_set_pane_g7

0x6b4c,	// (0x0004566f) slider_form_pane_g3

0x6b55,	// (0x00045678) slider_form_pane_g4

0x6b5d,	// (0x00045680) slider_form_pane_g5

0x6b4c,	// (0x0004566f) slider_form_pane_g6

0xdf10,	// (0x0004ca33) slider_form_pane_g7

0x715c,	// (0x00045c7f) slider_set_pane_vc_g3

0x7165,	// (0x00045c88) slider_set_pane_vc_g4

0x716e,	// (0x00045c91) slider_set_pane_vc_g5

0x715c,	// (0x00045c7f) slider_set_pane_vc_g6

0x7177,	// (0x00045c9a) slider_set_pane_vc_g7

0x7337,	// (0x00045e5a) slider_form_pane_vc_g1

0x7340,	// (0x00045e63) slider_form_pane_vc_g2

0x7349,	// (0x00045e6c) slider_form_pane_vc_g3

0x7337,	// (0x00045e5a) slider_form_pane_vc_g4

0x7352,	// (0x00045e75) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0004e59c) slider_form_pane_vc_g

0x37b3,	// (0x000422d6) main_idle_act3_pane

0x8cf7,	// (0x0004781a) ai3_links_pane

0xe619,	// (0x0004d13c) popup_ai3_data_window_ParamLimits

0xe619,	// (0x0004d13c) popup_ai3_data_window

0x37b3,	// (0x000422d6) grid_ai3_links_pane

0xe633,	// (0x0004d156) cell_ai3_links_pane_ParamLimits

0xe633,	// (0x0004d156) cell_ai3_links_pane

0x8d32,	// (0x00047855) bg_popup_sub_pane_cp11

0x8d3f,	// (0x00047862) cell_ai3_links_pane_g1

0x37b3,	// (0x000422d6) bg_popup_sub_pane_cp12

0x8d64,	// (0x00047887) heading_ai3_data_pane

0x8d6c,	// (0x0004788f) list_ai3_gene_pane

0x8d78,	// (0x0004789b) popup_ai3_data_window_g1

0x8d80,	// (0x000478a3) heading_ai3_data_pane_g1

0x8d88,	// (0x000478ab) heading_ai3_data_pane_t1

0x8d96,	// (0x000478b9) list_double_ai3_gene_pane_ParamLimits

0x8d96,	// (0x000478b9) list_double_ai3_gene_pane

0x8da3,	// (0x000478c6) list_single_ai3_gene_pane_ParamLimits

0x8da3,	// (0x000478c6) list_single_ai3_gene_pane

0x7b74,	// (0x00046697) list_highlight_pane_cp7_ParamLimits

0x7b74,	// (0x00046697) list_highlight_pane_cp7

0x8db0,	// (0x000478d3) list_single_a13_gene_pane_t1_ParamLimits

0x8db0,	// (0x000478d3) list_single_a13_gene_pane_t1

0x8dc7,	// (0x000478ea) list_single_ai3_gene_pane_g1

0x8dd0,	// (0x000478f3) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0004e7de) list_single_ai3_gene_pane_g

0x8dd8,	// (0x000478fb) list_double_ai3_gene_pane_g1_ParamLimits

0x8dd8,	// (0x000478fb) list_double_ai3_gene_pane_g1

0x8de4,	// (0x00047907) list_double_ai3_gene_pane_t1_ParamLimits

0x8de4,	// (0x00047907) list_double_ai3_gene_pane_t1

0x8e00,	// (0x00047923) list_double_ai3_gene_pane_t2_ParamLimits

0x8e00,	// (0x00047923) list_double_ai3_gene_pane_t2

0x8e16,	// (0x00047939) list_double_ai3_gene_pane_t3_ParamLimits

0x8e16,	// (0x00047939) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0004e7e3) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0004e7e3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1060,	// (0x0003fb83) aid_size_min_col_2

0xe603,	// (0x0004d126) aid_size_min_msg_ParamLimits

0xe603,	// (0x0004d126) aid_size_min_msg

0xe3cb,	// (0x0004ceee) fep_vkb_top_text_pane_g2_ParamLimits

0xe3cb,	// (0x0004ceee) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0004e64f) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0004e64f) fep_vkb_top_text_pane_g

0x37b3,	// (0x000422d6) main_hc_apps_shell_pane

0x8e33,	// (0x00047956) grid_hc_apps_pane_ParamLimits

0x8e33,	// (0x00047956) grid_hc_apps_pane

0x8e42,	// (0x00047965) list_hc_apps_pane

0x8e4a,	// (0x0004796d) scroll_pane_cp37_ParamLimits

0x8e4a,	// (0x0004796d) scroll_pane_cp37

0xe64d,	// (0x0004d170) cell_hc_apps_pane_ParamLimits

0xe64d,	// (0x0004d170) cell_hc_apps_pane

0xe70b,	// (0x0004d22e) cell_hc_apps_pane_g1_ParamLimits

0xe70b,	// (0x0004d22e) cell_hc_apps_pane_g1

0x8f35,	// (0x00047a58) cell_hc_apps_pane_g2_ParamLimits

0x8f35,	// (0x00047a58) cell_hc_apps_pane_g2

0x8f51,	// (0x00047a74) cell_hc_apps_pane_g3_ParamLimits

0x8f51,	// (0x00047a74) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0004e7ea) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0004e7ea) cell_hc_apps_pane_g

0xe738,	// (0x0004d25b) cell_hc_apps_pane_t1_ParamLimits

0xe738,	// (0x0004d25b) cell_hc_apps_pane_t1

0x3b30,	// (0x00042653) grid_highlight_pane_cp10_ParamLimits

0x3b30,	// (0x00042653) grid_highlight_pane_cp10

0xe776,	// (0x0004d299) list_single_hc_apps_pane_ParamLimits

0xe776,	// (0x0004d299) list_single_hc_apps_pane

0xe7a3,	// (0x0004d2c6) list_single_hc_apps_pane_g1

0xcafe,	// (0x0004b621) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0004e7f1) list_single_hc_apps_pane_g

0xcb17,	// (0x0004b63a) list_single_hc_apps_pane_g2_copy1

0x1124,	// (0x0003fc47) list_single_hc_apps_pane_t1

0x38a7,	// (0x000423ca) bg_set_opt_pane_cp_ParamLimits

0x1563,	// (0x00040086) setting_slider_pane_t1_ParamLimits

0x157c,	// (0x0004009f) setting_slider_pane_t2_ParamLimits

0x1596,	// (0x000400b9) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004e081) setting_slider_pane_t_ParamLimits

0x15ae,	// (0x000400d1) slider_set_pane_ParamLimits

0x1b9d,	// (0x000406c0) control_pane_g5_ParamLimits

0x1b9d,	// (0x000406c0) control_pane_g5

0x699b,	// (0x000454be) slider_set_pane_g1_ParamLimits

0x2582,	// (0x000410a5) slider_set_pane_g2_ParamLimits

0x258e,	// (0x000410b1) slider_set_pane_g3_ParamLimits

0x25a2,	// (0x000410c5) slider_set_pane_g4_ParamLimits

0x25ba,	// (0x000410dd) slider_set_pane_g5_ParamLimits

0x258e,	// (0x000410b1) slider_set_pane_g6_ParamLimits

0x25d0,	// (0x000410f3) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0004e487) slider_set_pane_g_ParamLimits

0x4c2d,	// (0x00043750) navi_icon_text_pane_ParamLimits

0xd7b7,	// (0x0004c2da) aid_fill_nsta_2_ParamLimits

0xd7ee,	// (0x0004c311) aid_touch_tab_arrow_left_ParamLimits

0xd804,	// (0x0004c327) aid_touch_tab_arrow_right_ParamLimits

0xd89f,	// (0x0004c3c2) clock_nsta_pane_ParamLimits

0x6491,	// (0x00044fb4) navi_icon_pane_g1_ParamLimits

0x649d,	// (0x00044fc0) navi_text_pane_t1_ParamLimits

0x775e,	// (0x00046281) navi_icon_text_pane_g1_ParamLimits

0x776a,	// (0x0004628d) navi_icon_text_pane_t1_ParamLimits

0xe7a3,	// (0x0004d2c6) list_single_hc_apps_pane_g1_ParamLimits

0xcafe,	// (0x0004b621) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0004e7f1) list_single_hc_apps_pane_g_ParamLimits

0xcb17,	// (0x0004b63a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x1124,	// (0x0003fc47) list_single_hc_apps_pane_t1_ParamLimits

0xc05d,	// (0x0004ab80) popup_toolbar2_fixed_window_ParamLimits

0xc05d,	// (0x0004ab80) popup_toolbar2_fixed_window

0xc963,	// (0x0004b486) popup_toolbar2_float_window

0x37b3,	// (0x000422d6) bg_popup_sub_pane_cp27

0x9028,	// (0x00047b4b) grid_toolbar2_float_pane

0x37b3,	// (0x000422d6) bg_popup_sub_pane_cp26

0x9028,	// (0x00047b4b) grid_toolbar2_fixed_pane

0xe7bc,	// (0x0004d2df) cell_toolbar2_fixed_pane_ParamLimits

0xe7bc,	// (0x0004d2df) cell_toolbar2_fixed_pane

0xe7d6,	// (0x0004d2f9) cell_toolbar2_fixed_pane_g1

0x9049,	// (0x00047b6c) toolbar2_fixed_button_pane

0x5606,	// (0x00044129) toolbar2_fixed_button_pane_g1

0x560e,	// (0x00044131) toolbar2_fixed_button_pane_g2

0x5616,	// (0x00044139) toolbar2_fixed_button_pane_g3

0x561e,	// (0x00044141) toolbar2_fixed_button_pane_g4

0x5626,	// (0x00044149) toolbar2_fixed_button_pane_g5

0x562e,	// (0x00044151) toolbar2_fixed_button_pane_g6

0x5636,	// (0x00044159) toolbar2_fixed_button_pane_g7

0x563e,	// (0x00044161) toolbar2_fixed_button_pane_g8

0x5646,	// (0x00044169) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0004e389) toolbar2_fixed_button_pane_g

0x9051,	// (0x00047b74) cell_toolbar2_float_pane_ParamLimits

0x9051,	// (0x00047b74) cell_toolbar2_float_pane

0x9062,	// (0x00047b85) cell_toolbar2_float_pane_g1

0x9049,	// (0x00047b6c) toolbar2_fixed_button_pane_cp

0xe2a5,	// (0x0004cdc8) fep_vkb_accented_list_pane_ParamLimits

0xe2a5,	// (0x0004cdc8) fep_vkb_accented_list_pane

0x29f5,	// (0x00041518) bg_popup_fep_shadow_pane_g9

0x4dad,	// (0x000438d0) bg_popup_fep_shadow_pane_cp3

0x426a,	// (0x00042d8d) list_accented_list_pane

0x906b,	// (0x00047b8e) list_single_accented_list_pane_ParamLimits

0x906b,	// (0x00047b8e) list_single_accented_list_pane

0x4dad,	// (0x000438d0) list_highlight_pane_cp10

0x907c,	// (0x00047b9f) list_single_accented_list_pane_t1

0xc88d,	// (0x0004b3b0) popup_slider_window_ParamLimits

0xc88d,	// (0x0004b3b0) popup_slider_window

0x8cb8,	// (0x000477db) aid_indentation_list_msg

0xe8cf,	// (0x0004d3f2) bg_popup_window_pane_cp19

0x91a0,	// (0x00047cc3) popup_slider_window_g1

0x91bc,	// (0x00047cdf) popup_slider_window_g2

0x91d8,	// (0x00047cfb) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x0004e7f6) popup_slider_window_g

0x9234,	// (0x00047d57) popup_slider_window_t1

0x92a8,	// (0x00047dcb) small_volume_slider_vertical_pane

0x7baf,	// (0x000466d2) small_volume_slider_vertical_pane_g1

0x7baf,	// (0x000466d2) small_volume_slider_vertical_pane_g2

0x92c4,	// (0x00047de7) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x0004e808) small_volume_slider_vertical_pane_g

0xbfcb,	// (0x0004aaee) area_side_right_pane_ParamLimits

0xbfcb,	// (0x0004aaee) area_side_right_pane

0xcb33,	// (0x0004b656) aid_size_side_button_ParamLimits

0xcb33,	// (0x0004b656) aid_size_side_button

0xcb4c,	// (0x0004b66f) grid_sctrl_middle_pane_ParamLimits

0xcb4c,	// (0x0004b66f) grid_sctrl_middle_pane

0x2c5c,	// (0x0004177f) sctrl_sk_bottom_pane

0x2c6d,	// (0x00041790) sctrl_sk_top_pane

0x2c7f,	// (0x000417a2) aid_touch_sctrl_top

0x3b30,	// (0x00042653) bg_sctrl_sk_pane_ParamLimits

0x3b30,	// (0x00042653) bg_sctrl_sk_pane

0x2c8c,	// (0x000417af) sctrl_sk_top_pane_g1

0x2c99,	// (0x000417bc) sctrl_sk_top_pane_t1

0x2c7f,	// (0x000417a2) aid_touch_sctrl_bottom

0x3b30,	// (0x00042653) bg_sctrl_sk_pane_cp_ParamLimits

0x3b30,	// (0x00042653) bg_sctrl_sk_pane_cp

0x2cb4,	// (0x000417d7) sctrl_sk_bottom_pane_g1

0x2c99,	// (0x000417bc) sctrl_sk_bottom_pane_t1

0xcb66,	// (0x0004b689) cell_sctrl_middle_pane_ParamLimits

0xcb66,	// (0x0004b689) cell_sctrl_middle_pane

0xcb77,	// (0x0004b69a) aid_touch_sctrl_middle_ParamLimits

0xcb77,	// (0x0004b69a) aid_touch_sctrl_middle

0xcb84,	// (0x0004b6a7) bg_sctrl_middle_pane_ParamLimits

0xcb84,	// (0x0004b6a7) bg_sctrl_middle_pane

0x934c,	// (0x00047e6f) cell_sctrl_middle_pane_g1_ParamLimits

0x934c,	// (0x00047e6f) cell_sctrl_middle_pane_g1

0xcb92,	// (0x0004b6b5) cell_sctrl_middle_pane_g2_ParamLimits

0xcb92,	// (0x0004b6b5) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x0004e814) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x0004e814) cell_sctrl_middle_pane_g

0x5606,	// (0x00044129) bg_sctrl_middle_pane_g1

0x560e,	// (0x00044131) bg_sctrl_middle_pane_g2

0x5616,	// (0x00044139) bg_sctrl_middle_pane_g3

0x561e,	// (0x00044141) bg_sctrl_middle_pane_g4

0x5626,	// (0x00044149) bg_sctrl_middle_pane_g5

0x562e,	// (0x00044151) bg_sctrl_middle_pane_g6

0x5636,	// (0x00044159) bg_sctrl_middle_pane_g7

0x563e,	// (0x00044161) bg_sctrl_middle_pane_g8

0x0007,

0xfcf6,	// (0x0004e819) bg_sctrl_middle_pane_g

0x5646,	// (0x00044169) bg_sctrl_middle_pane_g8_copy1

0x5606,	// (0x00044129) bg_sctrl_sk_pane_g1

0x560e,	// (0x00044131) bg_sctrl_sk_pane_g2

0x5616,	// (0x00044139) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0004e389) bg_sctrl_sk_pane_g

0x4045,	// (0x00042b68) aid_size_touch_scroll_bar

0x561e,	// (0x00044141) bg_sctrl_sk_pane_g4

0x5626,	// (0x00044149) bg_sctrl_sk_pane_g5

0x562e,	// (0x00044151) bg_sctrl_sk_pane_g6

0x5636,	// (0x00044159) bg_sctrl_sk_pane_g7

0x563e,	// (0x00044161) bg_sctrl_sk_pane_g8

0x5646,	// (0x00044169) bg_sctrl_sk_pane_g9

0x1d57,	// (0x0004087a) popup_fep_china_hwr2_fs_candidate_window

0xc3a7,	// (0x0004aeca) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc3a7,	// (0x0004aeca) popup_fep_china_hwr2_fs_control_window

0x7e39,	// (0x0004695c) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x0004e80f) sctrl_sk_top_pane_g

0xe987,	// (0x0004d4aa) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe987,	// (0x0004d4aa) aid_fep_china_hwr2_fs_cell

0xe99b,	// (0x0004d4be) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe99b,	// (0x0004d4be) bg_popup_fep_shadow_pane_cp4

0xe9b2,	// (0x0004d4d5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe9b2,	// (0x0004d4d5) bg_popup_fep_shadow_pane_cp5

0xe9c4,	// (0x0004d4e7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe9c4,	// (0x0004d4e7) popup_fep_china_hwr2_fs_control_bar_grid

0xe9d8,	// (0x0004d4fb) popup_fep_china_hwr2_fs_control_funtion_grid

0x9320,	// (0x00047e43) aid_fep_china_hwr2_fs_candi_cell

0x37b3,	// (0x000422d6) bg_popup_fep_shadow_pane_cp6

0x932a,	// (0x00047e4d) popup_fep_china_hwr2_fs_candidate_grid

0xe9e0,	// (0x0004d503) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9e0,	// (0x0004d503) cell_fep_china_hwr2_fs_funtion_grid

0x7baf,	// (0x000466d2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x934c,	// (0x00047e6f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x934c,	// (0x00047e6f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x935a,	// (0x00047e7d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x935a,	// (0x00047e7d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd07,	// (0x0004e82a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd07,	// (0x0004e82a) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9f8,	// (0x0004d51b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9f8,	// (0x0004d51b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xea0d,	// (0x0004d530) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xea0d,	// (0x0004d530) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0c,	// (0x0004e82f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0c,	// (0x0004e82f) cell_fep_china_hwr2_fs_funtion_grid_t

0x93a1,	// (0x00047ec4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x93a9,	// (0x00047ecc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x93b1,	// (0x00047ed4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd11,	// (0x0004e834) popup_fep_china_hwr2_fs_control_bar_grid_g

0x93b9,	// (0x00047edc) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x93b9,	// (0x00047edc) cell_fep_china_hwr2_fs_candidate_grid

0x93d2,	// (0x00047ef5) popup_fep_china_hwr2_fs_candidate_grid_g20

0x93da,	// (0x00047efd) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7baf,	// (0x000466d2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7baf,	// (0x000466d2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0004e654) cell_fep_china_hwr2_fs_candidate_grid_g

0x93e2,	// (0x00047f05) cell_fep_china_hwr2_fs_candidate_grid_t1

0x51fc,	// (0x00043d1f) clock_nsta_pane_cp_24_ParamLimits

0x51fc,	// (0x00043d1f) clock_nsta_pane_cp_24

0x527a,	// (0x00043d9d) indicator_nsta_pane_cp_24_ParamLimits

0x527a,	// (0x00043d9d) indicator_nsta_pane_cp_24

0x630d,	// (0x00044e30) heading_pane_g1

0x0001,

0xf8cb,	// (0x0004e3ee) heading_pane_g

0x6cfb,	// (0x0004581e) grid_sct_catagory_button_pane

0x6d2b,	// (0x0004584e) scroll_pane_cp5_ParamLimits

0x77ac,	// (0x000462cf) button_value_adjust_pane_cp5_ParamLimits

0x77ac,	// (0x000462cf) button_value_adjust_pane_cp5

0x788b,	// (0x000463ae) form2_midp_time_pane_ParamLimits

0x93f0,	// (0x00047f13) cell_sct_catagory_button_pane_ParamLimits

0x93f0,	// (0x00047f13) cell_sct_catagory_button_pane

0x7b74,	// (0x00046697) bg_button_pane_cp01_ParamLimits

0x7b74,	// (0x00046697) bg_button_pane_cp01

0x7baf,	// (0x000466d2) cell_sct_catagory_button_pane_g1

0xc906,	// (0x0004b429) popup_tb_extension_window

0xea29,	// (0x0004d54c) aid_size_cell_ext_ParamLimits

0xea29,	// (0x0004d54c) aid_size_cell_ext

0x3e87,	// (0x000429aa) bg_tb_trans_pane_cp1_ParamLimits

0x3e87,	// (0x000429aa) bg_tb_trans_pane_cp1

0xea4f,	// (0x0004d572) grid_tb_ext_pane_ParamLimits

0xea4f,	// (0x0004d572) grid_tb_ext_pane

0xea8a,	// (0x0004d5ad) cell_tb_ext_pane_ParamLimits

0xea8a,	// (0x0004d5ad) cell_tb_ext_pane

0xeab2,	// (0x0004d5d5) cell_tb_ext_pane_g1_ParamLimits

0xeab2,	// (0x0004d5d5) cell_tb_ext_pane_g1

0x9484,	// (0x00047fa7) cell_tb_ext_pane_t1

0x3b30,	// (0x00042653) list_highlight_pane_cp11_ParamLimits

0x3b30,	// (0x00042653) list_highlight_pane_cp11

0xc072,	// (0x0004ab95) popup_uni_indicator_window_ParamLimits

0xc072,	// (0x0004ab95) popup_uni_indicator_window

0x4122,	// (0x00042c45) bg_popup_sub_pane_cp14

0x949f,	// (0x00047fc2) list_uniindi_pane

0x94ab,	// (0x00047fce) uniindi_top_pane

0x3b30,	// (0x00042653) bg_uniindi_top_pane

0x94ca,	// (0x00047fed) uniindi_top_pane_g1

0x94e0,	// (0x00048003) uniindi_top_pane_g2

0x0003,

0xfd18,	// (0x0004e83b) uniindi_top_pane_g

0x950a,	// (0x0004802d) uniindi_top_pane_t1

0x9534,	// (0x00048057) list_single_uniindi_pane_ParamLimits

0x9534,	// (0x00048057) list_single_uniindi_pane

0x7baf,	// (0x000466d2) bg_uniindi_top_pane_g1

0x9547,	// (0x0004806a) list_single_uniindi_pane_g1

0x955a,	// (0x0004807d) list_single_uniindi_pane_t1

0x37b3,	// (0x000422d6) control_bg_pane

0x957f,	// (0x000480a2) bg_sctrl_sk_pane_cp1

0x9588,	// (0x000480ab) bg_sctrl_sk_pane_cp2

0x9591,	// (0x000480b4) control_bg_pane_g1

0x959a,	// (0x000480bd) control_bg_pane_g2

0x0001,

0xfd21,	// (0x0004e844) control_bg_pane_g

0x7607,	// (0x0004612a) cell_indicator_nsta_pane_g1_ParamLimits

0xe10a,	// (0x0004cc2d) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0004e5b8) cell_indicator_nsta_pane_g_ParamLimits

0x0ec1,	// (0x0003f9e4) form2_midp_time_pane_t1_ParamLimits

0x27cb,	// (0x000412ee) main_idle_act4_pane_ParamLimits

0x27cb,	// (0x000412ee) main_idle_act4_pane

0xc906,	// (0x0004b429) popup_tb_extension_window_ParamLimits

0xea71,	// (0x0004d594) tb_ext_find_pane_ParamLimits

0xea71,	// (0x0004d594) tb_ext_find_pane

0x95a3,	// (0x000480c6) ai_gene_pane_1_cp1

0x4ef4,	// (0x00043a17) ai_gene_pane_2_cp1

0x95ab,	// (0x000480ce) list_single_idle_plugin_calendar_pane

0x95b4,	// (0x000480d7) list_single_idle_plugin_notification_pane

0x95bd,	// (0x000480e0) list_single_idle_plugin_player_pane

0xeacf,	// (0x0004d5f2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeacf,	// (0x0004d5f2) list_single_idle_plugin_shortcut_pane

0xeaf7,	// (0x0004d61a) main_idle_act4_pane_t1

0xeb0d,	// (0x0004d630) main_idle_act4_pane_t2

0x0001,

0xfd26,	// (0x0004e849) main_idle_act4_pane_t

0xeb23,	// (0x0004d646) middle_sk_idle_act4_pane_ParamLimits

0xeb23,	// (0x0004d646) middle_sk_idle_act4_pane

0xeb3f,	// (0x0004d662) popup_clock_digital_analogue_window_cp2

0xeb67,	// (0x0004d68a) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb67,	// (0x0004d68a) shortcut_wheel_idle_act4_pane

0x7baf,	// (0x000466d2) shortcut_wheel_idle_act4_pane_g1

0x7baf,	// (0x000466d2) shortcut_wheel_idle_act4_pane_g2

0x7baf,	// (0x000466d2) shortcut_wheel_idle_act4_pane_g3

0x7baf,	// (0x000466d2) shortcut_wheel_idle_act4_pane_g4

0x7baf,	// (0x000466d2) shortcut_wheel_idle_act4_pane_g5

0x9650,	// (0x00048173) shortcut_wheel_idle_act4_pane_g6

0x9658,	// (0x0004817b) shortcut_wheel_idle_act4_pane_g7

0x9660,	// (0x00048183) shortcut_wheel_idle_act4_pane_g8

0x9668,	// (0x0004818b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0004e84e) shortcut_wheel_idle_act4_pane_g

0xe27d,	// (0x0004cda0) middle_sk_idle_act4_pane_g1_ParamLimits

0xe27d,	// (0x0004cda0) middle_sk_idle_act4_pane_g1

0xebe4,	// (0x0004d707) middle_sk_idle_act4_pane_g2_ParamLimits

0xebe4,	// (0x0004d707) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4e,	// (0x0004e871) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4e,	// (0x0004e871) middle_sk_idle_act4_pane_g

0xebfc,	// (0x0004d71f) middle_sk_idle_act4_pane_t1_ParamLimits

0xebfc,	// (0x0004d71f) middle_sk_idle_act4_pane_t1

0xec2b,	// (0x0004d74e) grid_ai_shortcut_pane_ParamLimits

0xec2b,	// (0x0004d74e) grid_ai_shortcut_pane

0xec48,	// (0x0004d76b) list_highlight_pane_cp16_ParamLimits

0xec48,	// (0x0004d76b) list_highlight_pane_cp16

0xec55,	// (0x0004d778) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec55,	// (0x0004d778) list_single_idle_plugin_shortcut_pane_g1

0xec61,	// (0x0004d784) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec61,	// (0x0004d784) list_single_idle_plugin_shortcut_pane_g2

0xec7d,	// (0x0004d7a0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec7d,	// (0x0004d7a0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd53,	// (0x0004e876) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd53,	// (0x0004e876) list_single_idle_plugin_shortcut_pane_g

0xec92,	// (0x0004d7b5) cell_ai_shortcut_pane_ParamLimits

0xec92,	// (0x0004d7b5) cell_ai_shortcut_pane

0xeca8,	// (0x0004d7cb) cell_ai_shortcut_pane_g1_ParamLimits

0xeca8,	// (0x0004d7cb) cell_ai_shortcut_pane_g1

0x95a3,	// (0x000480c6) ai_gene_pane_1_cp2

0x9798,	// (0x000482bb) ai_gene_pane_2_cp2

0x97a0,	// (0x000482c3) list_highlight_pane_cp15

0x97a9,	// (0x000482cc) list_single_idle_plugin_calendar_pane_g1

0x97a0,	// (0x000482c3) list_highlight_pane_cp17

0x97b1,	// (0x000482d4) list_single_idle_plugin_calendar_pane_g1_copy1

0x97b9,	// (0x000482dc) list_single_idle_plugin_player_pane_g1

0x6f54,	// (0x00045a77) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0004e87d) list_single_idle_plugin_player_pane_g

0x97c1,	// (0x000482e4) list_single_idle_plugin_player_pane_t1

0x97cf,	// (0x000482f2) list_single_idle_plugin_player_pane_t2

0x97dd,	// (0x00048300) list_single_idle_plugin_player_pane_t3

0x97eb,	// (0x0004830e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5f,	// (0x0004e882) list_single_idle_plugin_player_pane_t

0x97f9,	// (0x0004831c) wait_bar_pane_cp15

0x9801,	// (0x00048324) grid_ai_notification_pane

0x6f54,	// (0x00045a77) list_single_idle_plugin_notification_pane_g1

0xecca,	// (0x0004d7ed) cell_ai_notification_pane_ParamLimits

0xecca,	// (0x0004d7ed) cell_ai_notification_pane

0x9817,	// (0x0004833a) cell_ai_notification_pane_g1

0x981f,	// (0x00048342) cell_ai_notification_pane_t1

0xecd7,	// (0x0004d7fa) tb_ext_find_button_pane

0xecdf,	// (0x0004d802) tb_ext_find_pane_g1

0xece7,	// (0x0004d80a) tb_ext_find_pane_t1

0x479a,	// (0x000432bd) tb_ext_find_button_pane_g1

0x984b,	// (0x0004836e) tb_ext_find_button_pane_g2

0x0001,

0xfd68,	// (0x0004e88b) tb_ext_find_button_pane_g

0xeaf7,	// (0x0004d61a) main_idle_act4_pane_t1_ParamLimits

0xeb0d,	// (0x0004d630) main_idle_act4_pane_t2_ParamLimits

0xfd26,	// (0x0004e849) main_idle_act4_pane_t_ParamLimits

0xeb3f,	// (0x0004d662) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb57,	// (0x0004d67a) sat_plugin_idle_act4_pane_ParamLimits

0xeb57,	// (0x0004d67a) sat_plugin_idle_act4_pane

0xecf5,	// (0x0004d818) sat_plugin_idle_act4_pane_t1_ParamLimits

0xecf5,	// (0x0004d818) sat_plugin_idle_act4_pane_t1

0xed0d,	// (0x0004d830) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed0d,	// (0x0004d830) sat_plugin_idle_act4_pane_t2

0xed25,	// (0x0004d848) sat_plugin_idle_act4_pane_t3_ParamLimits

0xed25,	// (0x0004d848) sat_plugin_idle_act4_pane_t3

0xed3d,	// (0x0004d860) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed3d,	// (0x0004d860) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6d,	// (0x0004e890) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6d,	// (0x0004e890) sat_plugin_idle_act4_pane_t

0x13c7,	// (0x0003feea) popup_battery_window_ParamLimits

0x13c7,	// (0x0003feea) popup_battery_window

0x3b30,	// (0x00042653) bg_popup_sub_pane_cp25_ParamLimits

0x3b30,	// (0x00042653) bg_popup_sub_pane_cp25

0x98a0,	// (0x000483c3) popup_battery_window_g1_ParamLimits

0x98a0,	// (0x000483c3) popup_battery_window_g1

0x98ac,	// (0x000483cf) popup_battery_window_t1_ParamLimits

0x98ac,	// (0x000483cf) popup_battery_window_t1

0x98be,	// (0x000483e1) popup_battery_window_t2_ParamLimits

0x98be,	// (0x000483e1) popup_battery_window_t2

0x0001,

0xfd76,	// (0x0004e899) popup_battery_window_t_ParamLimits

0xfd76,	// (0x0004e899) popup_battery_window_t

0xd61a,	// (0x0004c13d) midp_canvas_pane_ParamLimits

0xd677,	// (0x0004c19a) midp_keypad_pane_ParamLimits

0xd677,	// (0x0004c19a) midp_keypad_pane

0x50fc,	// (0x00043c1f) main_midp_pane_ParamLimits

0x7670,	// (0x00046193) signal_pane_g2_cp_ParamLimits

0xed55,	// (0x0004d878) aid_size_cell_midp_keypad_ParamLimits

0xed55,	// (0x0004d878) aid_size_cell_midp_keypad

0xed73,	// (0x0004d896) midp_keyp_game_grid_pane_ParamLimits

0xed73,	// (0x0004d896) midp_keyp_game_grid_pane

0xed9a,	// (0x0004d8bd) midp_keyp_rocker_pane_ParamLimits

0xed9a,	// (0x0004d8bd) midp_keyp_rocker_pane

0xedeb,	// (0x0004d90e) midp_keyp_sk_left_pane_ParamLimits

0xedeb,	// (0x0004d90e) midp_keyp_sk_left_pane

0xee3f,	// (0x0004d962) midp_keyp_sk_right_pane_ParamLimits

0xee3f,	// (0x0004d962) midp_keyp_sk_right_pane

0x37b3,	// (0x000422d6) bg_button_pane_cp03

0xee93,	// (0x0004d9b6) midp_keyp_sk_left_pane_g1

0x37b3,	// (0x000422d6) bg_button_pane_cp04

0xee93,	// (0x0004d9b6) midp_keyp_sk_right_pane_g1

0x7baf,	// (0x000466d2) midp_keyp_rocker_pane_g1

0xee9c,	// (0x0004d9bf) keyp_game_cell_pane_ParamLimits

0xee9c,	// (0x0004d9bf) keyp_game_cell_pane

0x37b3,	// (0x000422d6) bg_button_pane_cp02

0xeec0,	// (0x0004d9e3) keyp_game_cell_pane_g1

0xc00d,	// (0x0004ab30) popup_fep_vkb2_window_ParamLimits

0xc00d,	// (0x0004ab30) popup_fep_vkb2_window

0xcb9e,	// (0x0004b6c1) aid_size_cell_vkb2_ParamLimits

0xcb9e,	// (0x0004b6c1) aid_size_cell_vkb2

0xcbd4,	// (0x0004b6f7) popup_fep_vkb2_window_g1_ParamLimits

0xcbd4,	// (0x0004b6f7) popup_fep_vkb2_window_g1

0xcc24,	// (0x0004b747) vkb2_area_bottom_pane_ParamLimits

0xcc24,	// (0x0004b747) vkb2_area_bottom_pane

0xcc78,	// (0x0004b79b) vkb2_area_keypad_pane_ParamLimits

0xcc78,	// (0x0004b79b) vkb2_area_keypad_pane

0xccc0,	// (0x0004b7e3) vkb2_area_top_pane_ParamLimits

0xccc0,	// (0x0004b7e3) vkb2_area_top_pane

0xcd46,	// (0x0004b869) vkb2_top_entry_pane_ParamLimits

0xcd46,	// (0x0004b869) vkb2_top_entry_pane

0xcd73,	// (0x0004b896) vkb2_top_grid_left_pane_ParamLimits

0xcd73,	// (0x0004b896) vkb2_top_grid_left_pane

0xcd93,	// (0x0004b8b6) vkb2_top_grid_right_pane_ParamLimits

0xcd93,	// (0x0004b8b6) vkb2_top_grid_right_pane

0x2f12,	// (0x00041a35) vkb2_cell_keypad_pane_ParamLimits

0x2f12,	// (0x00041a35) vkb2_cell_keypad_pane

0xcdd9,	// (0x0004b8fc) vkb2_area_bottom_grid_pane_ParamLimits

0xcdd9,	// (0x0004b8fc) vkb2_area_bottom_grid_pane

0xce03,	// (0x0004b926) vkb2_area_bottom_pane_g1_ParamLimits

0xce03,	// (0x0004b926) vkb2_area_bottom_pane_g1

0xce29,	// (0x0004b94c) vkb2_area_bottom_pane_g2_ParamLimits

0xce29,	// (0x0004b94c) vkb2_area_bottom_pane_g2

0xce5a,	// (0x0004b97d) vkb2_area_bottom_pane_g3_ParamLimits

0xce5a,	// (0x0004b97d) vkb2_area_bottom_pane_g3

0x0002,

0x0045,	// (0x0003eb68) vkb2_area_bottom_pane_g_ParamLimits

0x0045,	// (0x0003eb68) vkb2_area_bottom_pane_g

0x30bc,	// (0x00041bdf) vkb2_top_cell_left_pane_ParamLimits

0x30bc,	// (0x00041bdf) vkb2_top_cell_left_pane

0xeec9,	// (0x0004d9ec) vkb2_top_entry_pane_g1_ParamLimits

0xeec9,	// (0x0004d9ec) vkb2_top_entry_pane_g1

0xeed7,	// (0x0004d9fa) vkb2_top_entry_pane_t1_ParamLimits

0xeed7,	// (0x0004d9fa) vkb2_top_entry_pane_t1

0x9a6f,	// (0x00048592) vkb2_top_entry_pane_t2_ParamLimits

0x9a6f,	// (0x00048592) vkb2_top_entry_pane_t2

0x9aa1,	// (0x000485c4) vkb2_top_entry_pane_t3_ParamLimits

0x9aa1,	// (0x000485c4) vkb2_top_entry_pane_t3

0x0002,

0xfd7b,	// (0x0004e89e) vkb2_top_entry_pane_t_ParamLimits

0xfd7b,	// (0x0004e89e) vkb2_top_entry_pane_t

0xcec4,	// (0x0004b9e7) vkb2_top_grid_right_pane_g1_ParamLimits

0xcec4,	// (0x0004b9e7) vkb2_top_grid_right_pane_g1

0x311f,	// (0x00041c42) vkb2_top_grid_right_pane_g2_ParamLimits

0x311f,	// (0x00041c42) vkb2_top_grid_right_pane_g2

0x3137,	// (0x00041c5a) vkb2_top_grid_right_pane_g3_ParamLimits

0x3137,	// (0x00041c5a) vkb2_top_grid_right_pane_g3

0xceda,	// (0x0004b9fd) vkb2_top_grid_right_pane_g4_ParamLimits

0xceda,	// (0x0004b9fd) vkb2_top_grid_right_pane_g4

0x0003,

0xfd82,	// (0x0004e8a5) vkb2_top_grid_right_pane_g_ParamLimits

0xfd82,	// (0x0004e8a5) vkb2_top_grid_right_pane_g

0x3165,	// (0x00041c88) vkb2_top_cell_left_pane_g1

0x317c,	// (0x00041c9f) vkb2_cell_keypad_pane_g1_ParamLimits

0x317c,	// (0x00041c9f) vkb2_cell_keypad_pane_g1

0x9ac5,	// (0x000485e8) vkb2_cell_keypad_pane_t1_ParamLimits

0x9ac5,	// (0x000485e8) vkb2_cell_keypad_pane_t1

0x318a,	// (0x00041cad) vkb2_cell_bottom_grid_pane_ParamLimits

0x318a,	// (0x00041cad) vkb2_cell_bottom_grid_pane

0x31c3,	// (0x00041ce6) vkb2_cell_bottom_grid_pane_g1

0xeb88,	// (0x0004d6ab) aid_call2_pane_cp02

0xeb90,	// (0x0004d6b3) aid_call_pane_cp02

0xeb98,	// (0x0004d6bb) clock_digital_number_pane_cp10

0xeba0,	// (0x0004d6c3) clock_digital_number_pane_cp11

0xeba8,	// (0x0004d6cb) clock_digital_number_pane_cp12

0xebb0,	// (0x0004d6d3) clock_digital_number_pane_cp13

0xebb8,	// (0x0004d6db) clock_digital_separator_pane_cp10

0x479a,	// (0x000432bd) popup_clock_digital_analogue_window_cp2_g1

0x479a,	// (0x000432bd) popup_clock_digital_analogue_window_cp2_g2

0xebc0,	// (0x0004d6e3) popup_clock_digital_analogue_window_cp2_g3

0x479a,	// (0x000432bd) popup_clock_digital_analogue_window_cp2_g4

0xebc0,	// (0x0004d6e3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0004e861) popup_clock_digital_analogue_window_cp2_g

0xebc8,	// (0x0004d6eb) popup_clock_digital_analogue_window_cp2_t1

0xebd6,	// (0x0004d6f9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd49,	// (0x0004e86c) popup_clock_digital_analogue_window_cp2_t

0x7baf,	// (0x000466d2) clock_digital_number_pane_cp10_g1

0x7baf,	// (0x000466d2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004e654) clock_digital_number_pane_cp10_g

0x7baf,	// (0x000466d2) clock_digital_separator_pane_cp10_g1

0x7baf,	// (0x000466d2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004e654) clock_digital_separator_pane_cp10_g

0x94ec,	// (0x0004800f) uniindi_top_pane_g3

0x94fd,	// (0x00048020) uniindi_top_pane_g4

0x2f9d,	// (0x00041ac0) vkb2_row_keypad_pane_ParamLimits

0x2f9d,	// (0x00041ac0) vkb2_row_keypad_pane

0x31df,	// (0x00041d02) vkb2_cell_t_keypad_pane_ParamLimits

0x31df,	// (0x00041d02) vkb2_cell_t_keypad_pane

0x31ef,	// (0x00041d12) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x31ef,	// (0x00041d12) vkb2_cell_t_keypad_pane_cp08

0x3202,	// (0x00041d25) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3202,	// (0x00041d25) vkb2_cell_t_keypad_pane_cp09

0x3216,	// (0x00041d39) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x3216,	// (0x00041d39) vkb2_cell_t_keypad_pane_cp01

0x3227,	// (0x00041d4a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3227,	// (0x00041d4a) vkb2_cell_t_keypad_pane_cp02

0x3238,	// (0x00041d5b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x3238,	// (0x00041d5b) vkb2_cell_t_keypad_pane_cp03

0x3249,	// (0x00041d6c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3249,	// (0x00041d6c) vkb2_cell_t_keypad_pane_cp04

0x325a,	// (0x00041d7d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x325a,	// (0x00041d7d) vkb2_cell_t_keypad_pane_cp05

0x326b,	// (0x00041d8e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x326b,	// (0x00041d8e) vkb2_cell_t_keypad_pane_cp06

0x327c,	// (0x00041d9f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x327c,	// (0x00041d9f) vkb2_cell_t_keypad_pane_cp07

0x328d,	// (0x00041db0) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x328d,	// (0x00041db0) vkb2_cell_t_keypad_pane_cp10

0x7e39,	// (0x0004695c) vkb2_cell_t_keypad_pane_g1

0x9adc,	// (0x000485ff) vkb2_cell_t_keypad_pane_t1

0x37b3,	// (0x000422d6) popup_grid_graphic2_window

0xef10,	// (0x0004da33) aid_size_cell_graphic2_ParamLimits

0xef10,	// (0x0004da33) aid_size_cell_graphic2

0xef4e,	// (0x0004da71) bg_popup_window_pane_cp21_ParamLimits

0xef4e,	// (0x0004da71) bg_popup_window_pane_cp21

0xef5c,	// (0x0004da7f) graphic2_pages_pane_ParamLimits

0xef5c,	// (0x0004da7f) graphic2_pages_pane

0xefb2,	// (0x0004dad5) grid_graphic2_control_pane_ParamLimits

0xefb2,	// (0x0004dad5) grid_graphic2_control_pane

0xeffa,	// (0x0004db1d) grid_graphic2_pane_ParamLimits

0xeffa,	// (0x0004db1d) grid_graphic2_pane

0xf081,	// (0x0004dba4) cell_graphic2_pane

0x37b3,	// (0x000422d6) main_comp_mode_pane

0x8d6c,	// (0x0004788f) list_ai3_gene_pane_ParamLimits

0xe8cf,	// (0x0004d3f2) bg_popup_window_pane_cp19_ParamLimits

0x9142,	// (0x00047c65) bg_touch_area_indi_pane_ParamLimits

0x9142,	// (0x00047c65) bg_touch_area_indi_pane

0x9158,	// (0x00047c7b) bg_touch_area_indi_pane_cp01_ParamLimits

0x9158,	// (0x00047c7b) bg_touch_area_indi_pane_cp01

0x916e,	// (0x00047c91) bg_touch_area_indi_pane_cp02_ParamLimits

0x916e,	// (0x00047c91) bg_touch_area_indi_pane_cp02

0x9186,	// (0x00047ca9) bg_touch_area_indi_pane_cp03_ParamLimits

0x9186,	// (0x00047ca9) bg_touch_area_indi_pane_cp03

0x91a0,	// (0x00047cc3) popup_slider_window_g1_ParamLimits

0x91bc,	// (0x00047cdf) popup_slider_window_g2_ParamLimits

0x91d8,	// (0x00047cfb) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x0004e7f6) popup_slider_window_g_ParamLimits

0x9234,	// (0x00047d57) popup_slider_window_t1_ParamLimits

0x92a8,	// (0x00047dcb) small_volume_slider_vertical_pane_ParamLimits

0xf081,	// (0x0004dba4) cell_graphic2_pane_ParamLimits

0xf0e9,	// (0x0004dc0c) bg_button_pane_cp10_ParamLimits

0xf0e9,	// (0x0004dc0c) bg_button_pane_cp10

0xf0fc,	// (0x0004dc1f) bg_button_pane_cp11_ParamLimits

0xf0fc,	// (0x0004dc1f) bg_button_pane_cp11

0xf10f,	// (0x0004dc32) graphic2_pages_pane_g1_ParamLimits

0xf10f,	// (0x0004dc32) graphic2_pages_pane_g1

0xf12a,	// (0x0004dc4d) graphic2_pages_pane_g2_ParamLimits

0xf12a,	// (0x0004dc4d) graphic2_pages_pane_g2

0x0001,

0x0061,	// (0x0003eb84) graphic2_pages_pane_g_ParamLimits

0x0061,	// (0x0003eb84) graphic2_pages_pane_g

0xf142,	// (0x0004dc65) graphic2_pages_pane_t1_ParamLimits

0xf142,	// (0x0004dc65) graphic2_pages_pane_t1

0xf15a,	// (0x0004dc7d) cell_graphic2_control_pane_ParamLimits

0xf15a,	// (0x0004dc7d) cell_graphic2_control_pane

0xf18c,	// (0x0004dcaf) cell_graphic2_pane_g1_ParamLimits

0xf18c,	// (0x0004dcaf) cell_graphic2_pane_g1

0xe28b,	// (0x0004cdae) cell_graphic2_pane_g2_ParamLimits

0xe28b,	// (0x0004cdae) cell_graphic2_pane_g2

0xf0dc,	// (0x0004dbff) cell_graphic2_pane_g3_ParamLimits

0xf0dc,	// (0x0004dbff) cell_graphic2_pane_g3

0xe298,	// (0x0004cdbb) cell_graphic2_pane_g4_ParamLimits

0xe298,	// (0x0004cdbb) cell_graphic2_pane_g4

0xf199,	// (0x0004dcbc) cell_graphic2_pane_g5_ParamLimits

0xf199,	// (0x0004dcbc) cell_graphic2_pane_g5

0x0004,

0xfd90,	// (0x0004e8b3) cell_graphic2_pane_g_ParamLimits

0xfd90,	// (0x0004e8b3) cell_graphic2_pane_g

0xf1b9,	// (0x0004dcdc) cell_graphic2_pane_t1_ParamLimits

0xf1b9,	// (0x0004dcdc) cell_graphic2_pane_t1

0x6301,	// (0x00044e24) grid_highlight_pane_cp11_ParamLimits

0x6301,	// (0x00044e24) grid_highlight_pane_cp11

0x3b30,	// (0x00042653) bg_button_pane_cp05

0xf202,	// (0x0004dd25) cell_graphic2_control_pane_g1

0x7baf,	// (0x000466d2) bg_touch_area_indi_pane_g1

0x9dd9,	// (0x000488fc) aid_cmod_rocker_key_size

0x9de3,	// (0x00048906) aid_cmode_itu_key_size

0x9ded,	// (0x00048910) main_cmode_video_pane

0x9df7,	// (0x0004891a) main_comp_mode_itu_pane

0x9e03,	// (0x00048926) main_comp_mode_rocker_pane

0x9e0f,	// (0x00048932) cell_cmode_rocker_pane_ParamLimits

0x9e0f,	// (0x00048932) cell_cmode_rocker_pane

0x9e21,	// (0x00048944) cell_cmode_itu_pane_ParamLimits

0x9e21,	// (0x00048944) cell_cmode_itu_pane

0x4122,	// (0x00042c45) bg_button_pane_cp06_ParamLimits

0x4122,	// (0x00042c45) bg_button_pane_cp06

0x7e39,	// (0x0004695c) cell_cmode_rocker_pane_g1_ParamLimits

0x7e39,	// (0x0004695c) cell_cmode_rocker_pane_g1

0x934c,	// (0x00047e6f) cell_cmode_rocker_pane_g2_ParamLimits

0x934c,	// (0x00047e6f) cell_cmode_rocker_pane_g2

0x0001,

0xfd9b,	// (0x0004e8be) cell_cmode_rocker_pane_g_ParamLimits

0xfd9b,	// (0x0004e8be) cell_cmode_rocker_pane_g

0x37b3,	// (0x000422d6) bg_button_pane_cp07

0x9e36,	// (0x00048959) cell_cmode_itu_pane_g1

0x9e3f,	// (0x00048962) cell_cmode_itu_pane_t1

0x9e4d,	// (0x00048970) cell_cmode_itu_pane_t2

0x0001,

0xfda0,	// (0x0004e8c3) cell_cmode_itu_pane_t

0x956f,	// (0x00048092) aid_touch_ctrl_left

0x9577,	// (0x0004809a) aid_touch_ctrl_right

0x37b3,	// (0x000422d6) compa_mode_pane

0xf226,	// (0x0004dd49) aid_cmod_rocker_key_size_cp

0xf230,	// (0x0004dd53) aid_cmode_itu_key_size_cp

0x9e6f,	// (0x00048992) compa_mode_pane_g1

0x9e77,	// (0x0004899a) compa_mode_pane_g2

0x9e7f,	// (0x000489a2) compa_mode_pane_g3

0x0002,

0xfda5,	// (0x0004e8c8) compa_mode_pane_g

0xf23a,	// (0x0004dd5d) main_comp_mode_itu_pane_cp

0xf242,	// (0x0004dd65) main_comp_mode_rocker_pane_cp

0xf24a,	// (0x0004dd6d) cell_cmode_itu_pane_cp_ParamLimits

0xf24a,	// (0x0004dd6d) cell_cmode_itu_pane_cp

0xf25f,	// (0x0004dd82) cell_cmode_rocker_pane_cp_ParamLimits

0xf25f,	// (0x0004dd82) cell_cmode_rocker_pane_cp

0x4122,	// (0x00042c45) bg_button_pane_cp06_cp_ParamLimits

0x4122,	// (0x00042c45) bg_button_pane_cp06_cp

0x7e39,	// (0x0004695c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7e39,	// (0x0004695c) cell_cmode_rocker_pane_g1_cp

0x7baf,	// (0x000466d2) cell_cmode_rocker_pane_g2_cp

0x37b3,	// (0x000422d6) bg_button_pane_cp07_cp

0xf271,	// (0x0004dd94) cell_cmode_itu_pane_g1_cp

0xf27a,	// (0x0004dd9d) cell_cmode_itu_pane_t1_cp

0xf27a,	// (0x0004dd9d) cell_cmode_itu_pane_t2_cp

0xdf06,	// (0x0004ca29) settings_code_pane_cp2

0x38a7,	// (0x000423ca) bg_popup_window_pane_cp3_ParamLimits

0x3d0a,	// (0x0004282d) heading_pane_cp3_ParamLimits

0x3d16,	// (0x00042839) listscroll_popup_graphic_pane_ParamLimits

0x27d9,	// (0x000412fc) fep_hwr_aid_pane_ParamLimits

0x2c7f,	// (0x000417a2) aid_touch_sctrl_top_ParamLimits

0x2c8c,	// (0x000417af) sctrl_sk_top_pane_g1_ParamLimits

0x7e39,	// (0x0004695c) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x0004e80f) sctrl_sk_top_pane_g_ParamLimits

0x2c99,	// (0x000417bc) sctrl_sk_top_pane_t1_ParamLimits

0x2c7f,	// (0x000417a2) aid_touch_sctrl_bottom_ParamLimits

0x2c99,	// (0x000417bc) sctrl_sk_bottom_pane_t1_ParamLimits

0x94b8,	// (0x00047fdb) aid_area_touch_clock

0xcd08,	// (0x0004b82b) aid_vkb2_area_top_pane_cell_ParamLimits

0xcd08,	// (0x0004b82b) aid_vkb2_area_top_pane_cell

0xcdb3,	// (0x0004b8d6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcdb3,	// (0x0004b8d6) aid_vkb2_area_bottom_pane_cell

0x9a27,	// (0x0004854a) popup_char_count_window

0x9ecc,	// (0x000489ef) popup_char_count_window_g1

0x9ed5,	// (0x000489f8) popup_char_count_window_g2

0x9ede,	// (0x00048a01) popup_char_count_window_g3

0x0002,

0xfdac,	// (0x0004e8cf) popup_char_count_window_g

0x9ee7,	// (0x00048a0a) popup_char_count_window_t1

0x2d3a,	// (0x0004185d) popup_fep_char_preview_window_ParamLimits

0x2d3a,	// (0x0004185d) popup_fep_char_preview_window

0xcd28,	// (0x0004b84b) vkb2_top_candi_pane_ParamLimits

0xcd28,	// (0x0004b84b) vkb2_top_candi_pane

0xf288,	// (0x0004ddab) cell_vkb2_top_candi_pane_ParamLimits

0xf288,	// (0x0004ddab) cell_vkb2_top_candi_pane

0x5c8d,	// (0x000447b0) bg_popup_fep_char_preview_window_ParamLimits

0x5c8d,	// (0x000447b0) bg_popup_fep_char_preview_window

0x32a2,	// (0x00041dc5) popup_fep_char_preview_window_t1_ParamLimits

0x32a2,	// (0x00041dc5) popup_fep_char_preview_window_t1

0x9f42,	// (0x00048a65) bg_popup_fep_char_preview_window_g1

0x9f4a,	// (0x00048a6d) bg_popup_fep_char_preview_window_g2

0x9f52,	// (0x00048a75) bg_popup_fep_char_preview_window_g3

0x9f5a,	// (0x00048a7d) bg_popup_fep_char_preview_window_g4

0x9f62,	// (0x00048a85) bg_popup_fep_char_preview_window_g5

0x32dc,	// (0x00041dff) bg_popup_fep_char_preview_window_g6

0x9f6a,	// (0x00048a8d) bg_popup_fep_char_preview_window_g7

0x9f72,	// (0x00048a95) bg_popup_fep_char_preview_window_g8

0x9f7a,	// (0x00048a9d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdb3,	// (0x0004e8d6) bg_popup_fep_char_preview_window_g

0x7e39,	// (0x0004695c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7e39,	// (0x0004695c) cell_vkb2_top_candi_pane_g1

0x8150,	// (0x00046c73) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8150,	// (0x00046c73) cell_vkb2_top_candi_pane_g2

0x8171,	// (0x00046c94) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8171,	// (0x00046c94) cell_vkb2_top_candi_pane_g3

0x32e4,	// (0x00041e07) cell_vkb2_top_candi_pane_g4_ParamLimits

0x32e4,	// (0x00041e07) cell_vkb2_top_candi_pane_g4

0x9cec,	// (0x0004880f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9cec,	// (0x0004880f) cell_vkb2_top_candi_pane_g5

0x934c,	// (0x00047e6f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x934c,	// (0x00047e6f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc6,	// (0x0004e8e9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc6,	// (0x0004e8e9) cell_vkb2_top_candi_pane_g

0x3305,	// (0x00041e28) cell_vkb2_top_candi_pane_t1

0x256e,	// (0x00041091) aid_size_touch_slider_mark_ParamLimits

0x256e,	// (0x00041091) aid_size_touch_slider_mark

0xef98,	// (0x0004dabb) grid_graphic2_catg_pane_ParamLimits

0xef98,	// (0x0004dabb) grid_graphic2_catg_pane

0xf054,	// (0x0004db77) popup_grid_graphic2_window_t1_ParamLimits

0xf054,	// (0x0004db77) popup_grid_graphic2_window_t1

0xf06a,	// (0x0004db8d) popup_grid_graphic2_window_t2_ParamLimits

0xf06a,	// (0x0004db8d) popup_grid_graphic2_window_t2

0x0001,

0xfd8b,	// (0x0004e8ae) popup_grid_graphic2_window_t_ParamLimits

0xfd8b,	// (0x0004e8ae) popup_grid_graphic2_window_t

0x3b30,	// (0x00042653) bg_button_pane_cp05_ParamLimits

0xf202,	// (0x0004dd25) cell_graphic2_control_pane_g1_ParamLimits

0xf2ee,	// (0x0004de11) cell_graphic2_catg_pane_ParamLimits

0xf2ee,	// (0x0004de11) cell_graphic2_catg_pane

0x37b3,	// (0x000422d6) bg_button_pane_cp12

0xf300,	// (0x0004de23) cell_graphic2_catg_pane_g1

0x9484,	// (0x00047fa7) cell_tb_ext_pane_t1_ParamLimits

0x30dc,	// (0x00041bff) vkb2_top_cell_right_narrow_pane_ParamLimits

0x30dc,	// (0x00041bff) vkb2_top_cell_right_narrow_pane

0x30f4,	// (0x00041c17) vkb2_top_cell_right_wide_pane_ParamLimits

0x30f4,	// (0x00041c17) vkb2_top_cell_right_wide_pane

0x27cb,	// (0x000412ee) bg_vkb2_func_pane_ParamLimits

0x27cb,	// (0x000412ee) bg_vkb2_func_pane

0x3165,	// (0x00041c88) vkb2_top_cell_left_pane_g1_ParamLimits

0x27cb,	// (0x000412ee) bg_vkb2_fuc_pane_cp03_ParamLimits

0x27cb,	// (0x000412ee) bg_vkb2_fuc_pane_cp03

0x31c3,	// (0x00041ce6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x560e,	// (0x00044131) bg_vkb2_func_pane_g1

0x5616,	// (0x00044139) bg_vkb2_func_pane_g2

0x5626,	// (0x00044149) bg_vkb2_func_pane_g3

0x561e,	// (0x00044141) bg_vkb2_func_pane_g4

0x562e,	// (0x00044151) bg_vkb2_func_pane_g5

0x5636,	// (0x00044159) bg_vkb2_func_pane_g6

0x563e,	// (0x00044161) bg_vkb2_func_pane_g7

0x5646,	// (0x00044169) bg_vkb2_func_pane_g8

0x5606,	// (0x00044129) bg_vkb2_func_pane_g9

0x0008,

0xfdd3,	// (0x0004e8f6) bg_vkb2_func_pane_g

0x27cb,	// (0x000412ee) bg_vkb2_fuc_pane_cp01_ParamLimits

0x27cb,	// (0x000412ee) bg_vkb2_fuc_pane_cp01

0x3165,	// (0x00041c88) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3165,	// (0x00041c88) vkb2_top_cell_right_wide_pane_g1

0x27cb,	// (0x000412ee) bg_vkb2_fuc_pane_cp02_ParamLimits

0x27cb,	// (0x000412ee) bg_vkb2_fuc_pane_cp02

0x31c3,	// (0x00041ce6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x31c3,	// (0x00041ce6) vkb2_top_cell_right_narrow_pane_g1

0xe80f,	// (0x0004d332) aid_touch_area_decrease_ParamLimits

0xe80f,	// (0x0004d332) aid_touch_area_decrease

0xe843,	// (0x0004d366) aid_touch_area_increase_ParamLimits

0xe843,	// (0x0004d366) aid_touch_area_increase

0xe86b,	// (0x0004d38e) aid_touch_area_mute_ParamLimits

0xe86b,	// (0x0004d38e) aid_touch_area_mute

0xe89b,	// (0x0004d3be) aid_touch_area_slider_ParamLimits

0xe89b,	// (0x0004d3be) aid_touch_area_slider

0xe8db,	// (0x0004d3fe) popup_slider_window_g4_ParamLimits

0xe8db,	// (0x0004d3fe) popup_slider_window_g4

0xe903,	// (0x0004d426) popup_slider_window_g5_ParamLimits

0xe903,	// (0x0004d426) popup_slider_window_g5

0xe937,	// (0x0004d45a) popup_slider_window_g6_ParamLimits

0xe937,	// (0x0004d45a) popup_slider_window_g6

0x9262,	// (0x00047d85) popup_slider_window_t2_ParamLimits

0x9262,	// (0x00047d85) popup_slider_window_t2

0x0001,

0xfce0,	// (0x0004e803) popup_slider_window_t_ParamLimits

0xfce0,	// (0x0004e803) popup_slider_window_t

0xe953,	// (0x0004d476) slider_pane_ParamLimits

0xe953,	// (0x0004d476) slider_pane

0x9f9d,	// (0x00048ac0) slider_pane_g1_ParamLimits

0x9f9d,	// (0x00048ac0) slider_pane_g1

0x9fb1,	// (0x00048ad4) slider_pane_g2_ParamLimits

0x9fb1,	// (0x00048ad4) slider_pane_g2

0x9fc7,	// (0x00048aea) slider_pane_g3_ParamLimits

0x9fc7,	// (0x00048aea) slider_pane_g3

0x0003,

0xfde6,	// (0x0004e909) slider_pane_g_ParamLimits

0xfde6,	// (0x0004e909) slider_pane_g

0xc94e,	// (0x0004b471) popup_tb_float_extension_window_ParamLimits

0xc94e,	// (0x0004b471) popup_tb_float_extension_window

0x9ff3,	// (0x00048b16) aid_size_cell_tb_float_ext

0x37b3,	// (0x000422d6) bg_popup_sub_window_cp28

0x9fff,	// (0x00048b22) grid_tb_float_ext_pane

0xa009,	// (0x00048b2c) cell_tb_float_ext_pane_ParamLimits

0xa009,	// (0x00048b2c) cell_tb_float_ext_pane

0xa023,	// (0x00048b46) cell_tb_float_ext_pane_g1

0xa02c,	// (0x00048b4f) grid_highlight_pane_cp12

0xca99,	// (0x0004b5bc) cell_last_hwr_side_pane_ParamLimits

0xca99,	// (0x0004b5bc) cell_last_hwr_side_pane

0x7baf,	// (0x000466d2) cell_last_hwr_side_pane_g1

0xa035,	// (0x00048b58) cell_last_hwr_side_pane_g2

0x0001,

0xfdef,	// (0x0004e912) cell_last_hwr_side_pane_g

0xce8f,	// (0x0004b9b2) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce8f,	// (0x0004b9b2) vkb2_area_bottom_space_btn_pane

0x7e39,	// (0x0004695c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9adc,	// (0x000485ff) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3305,	// (0x00041e28) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3324,	// (0x00041e47) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3324,	// (0x00041e47) vkb2_area_bottom_space_btn_pane_g1

0x335e,	// (0x00041e81) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x335e,	// (0x00041e81) vkb2_area_bottom_space_btn_pane_g2

0x3394,	// (0x00041eb7) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3394,	// (0x00041eb7) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf4,	// (0x0004e917) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf4,	// (0x0004e917) vkb2_area_bottom_space_btn_pane_g

0x2880,	// (0x000413a3) cel_fep_hwr_func_pane_ParamLimits

0x2880,	// (0x000413a3) cel_fep_hwr_func_pane

0xca6e,	// (0x0004b591) cell_hwr_side_button_pane_ParamLimits

0xca6e,	// (0x0004b591) cell_hwr_side_button_pane

0x94b8,	// (0x00047fdb) aid_area_touch_clock_ParamLimits

0x3b30,	// (0x00042653) bg_uniindi_top_pane_ParamLimits

0x94ca,	// (0x00047fed) uniindi_top_pane_g1_ParamLimits

0x94e0,	// (0x00048003) uniindi_top_pane_g2_ParamLimits

0x94ec,	// (0x0004800f) uniindi_top_pane_g3_ParamLimits

0x94fd,	// (0x00048020) uniindi_top_pane_g4_ParamLimits

0xfd18,	// (0x0004e83b) uniindi_top_pane_g_ParamLimits

0x950a,	// (0x0004802d) uniindi_top_pane_t1_ParamLimits

0x3b30,	// (0x00042653) bg_vkb2_func_pane_cp01_ParamLimits

0x3b30,	// (0x00042653) bg_vkb2_func_pane_cp01

0xa03e,	// (0x00048b61) cel_fep_hwr_func_pane_g1_ParamLimits

0xa03e,	// (0x00048b61) cel_fep_hwr_func_pane_g1

0x3b30,	// (0x00042653) bg_vkb2_func_pane_cp02_ParamLimits

0x3b30,	// (0x00042653) bg_vkb2_func_pane_cp02

0xa03e,	// (0x00048b61) cell_hwr_side_button_pane_g1_ParamLimits

0xa03e,	// (0x00048b61) cell_hwr_side_button_pane_g1

0x5487,	// (0x00043faa) status_pane_g4_ParamLimits

0x5487,	// (0x00043faa) status_pane_g4

0x54a1,	// (0x00043fc4) status_pane_t1

0x78f4,	// (0x00046417) form2_midp_gauge_slider_cont_pane

0x78fc,	// (0x0004641f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe1d5,	// (0x0004ccf8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe1e7,	// (0x0004cd0a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0004e607) form2_midp_gauge_slider_pane_t_ParamLimits

0x7932,	// (0x00046455) form2_midp_slider_pane_ParamLimits

0x2cfa,	// (0x0004181d) aid_size_cell_func_vkb2_ParamLimits

0x2cfa,	// (0x0004181d) aid_size_cell_func_vkb2

0x9fdf,	// (0x00048b02) slider_pane_g4_ParamLimits

0x9fdf,	// (0x00048b02) slider_pane_g4

0xcef0,	// (0x0004ba13) form2_midp_gauge_slider_pane_t2_cp01

0xcefe,	// (0x0004ba21) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcefe,	// (0x0004ba21) form2_midp_gauge_slider_pane_t3_cp01

0x3409,	// (0x00041f2c) form2_midp_slider_pane_cp01

0x37b3,	// (0x000422d6) navi_smil_pane

0xa077,	// (0x00048b9a) navi_smil_pane_g1

0xa07f,	// (0x00048ba2) navi_smil_pane_t1

0xa04c,	// (0x00048b6f) form2_midp_slider_pane_g1

0xa055,	// (0x00048b78) form2_midp_slider_pane_g2

0xa05d,	// (0x00048b80) form2_midp_slider_pane_g3

0xa04c,	// (0x00048b6f) form2_midp_slider_pane_g4

0xf309,	// (0x0004de2c) form2_midp_slider_pane_g5

0x0004,

0xfdfd,	// (0x0004e920) form2_midp_slider_pane_g

0x33ce,	// (0x00041ef1) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x33ce,	// (0x00041ef1) vkb2_area_bottom_space_btn_pane_g4

0xd8ea,	// (0x0004c40d) lc0_navi_pane_ParamLimits

0xd8ea,	// (0x0004c40d) lc0_navi_pane

0xd954,	// (0x0004c477) lc0_stat_indi_pane_ParamLimits

0xd954,	// (0x0004c477) lc0_stat_indi_pane

0xd969,	// (0x0004c48c) ls0_title_pane_ParamLimits

0xd969,	// (0x0004c48c) ls0_title_pane

0x4122,	// (0x00042c45) bg_popup_sub_pane_cp14_ParamLimits

0x949f,	// (0x00047fc2) list_uniindi_pane_ParamLimits

0x94ab,	// (0x00047fce) uniindi_top_pane_ParamLimits

0x9547,	// (0x0004806a) list_single_uniindi_pane_g1_ParamLimits

0x955a,	// (0x0004807d) list_single_uniindi_pane_t1_ParamLimits

0xcf1b,	// (0x0004ba3e) lc0_stat_clock_pane_ParamLimits

0xcf1b,	// (0x0004ba3e) lc0_stat_clock_pane

0xf314,	// (0x0004de37) lc0_stat_indi_pane_g1_ParamLimits

0xf314,	// (0x0004de37) lc0_stat_indi_pane_g1

0xf321,	// (0x0004de44) lc0_stat_indi_pane_g2_ParamLimits

0xf321,	// (0x0004de44) lc0_stat_indi_pane_g2

0x0001,

0x00e3,	// (0x0003ec06) lc0_stat_indi_pane_g_ParamLimits

0x00e3,	// (0x0003ec06) lc0_stat_indi_pane_g

0xcf28,	// (0x0004ba4b) lc0_uni_indicator_pane_ParamLimits

0xcf28,	// (0x0004ba4b) lc0_uni_indicator_pane

0xf32e,	// (0x0004de51) ls0_title_pane_g1_ParamLimits

0xf32e,	// (0x0004de51) ls0_title_pane_g1

0xf342,	// (0x0004de65) ls0_title_pane_t1_ParamLimits

0xf342,	// (0x0004de65) ls0_title_pane_t1

0xcf35,	// (0x0004ba58) lc0_uni_indicator_pane_g1_ParamLimits

0xcf35,	// (0x0004ba58) lc0_uni_indicator_pane_g1

0xa0f1,	// (0x00048c14) lc0_stat_clock_pane_t1

0x37b3,	// (0x000422d6) main_ai5_pane

0xa0ff,	// (0x00048c22) ai5_sk_pane_ParamLimits

0xa0ff,	// (0x00048c22) ai5_sk_pane

0xf370,	// (0x0004de93) cell_ai5_widget_pane_ParamLimits

0xf370,	// (0x0004de93) cell_ai5_widget_pane

0xa1be,	// (0x00048ce1) aid_size_cell_widget_grid

0xa1d4,	// (0x00048cf7) bg_ai5_widget_pane_ParamLimits

0xa1d4,	// (0x00048cf7) bg_ai5_widget_pane

0xa248,	// (0x00048d6b) cell_ai5_widget_pane_g2

0xa258,	// (0x00048d7b) cell_ai5_widget_pane_g3

0xa26f,	// (0x00048d92) cell_ai5_widget_pane_g4

0xa27b,	// (0x00048d9e) cell_ai5_widget_pane_g5

0xa287,	// (0x00048daa) cell_ai5_widget_pane_g6

0xa293,	// (0x00048db6) cell_ai5_widget_pane_g7

0xa2db,	// (0x00048dfe) cell_ai5_widget_pane_t1_ParamLimits

0xa2db,	// (0x00048dfe) cell_ai5_widget_pane_t1

0xa2f8,	// (0x00048e1b) cell_ai5_widget_pane_t2_ParamLimits

0xa2f8,	// (0x00048e1b) cell_ai5_widget_pane_t2

0xa310,	// (0x00048e33) cell_ai5_widget_pane_t3_ParamLimits

0xa310,	// (0x00048e33) cell_ai5_widget_pane_t3

0xa328,	// (0x00048e4b) cell_ai5_widget_pane_t4_ParamLimits

0xa328,	// (0x00048e4b) cell_ai5_widget_pane_t4

0xa345,	// (0x00048e68) cell_ai5_widget_pane_t5_ParamLimits

0xa345,	// (0x00048e68) cell_ai5_widget_pane_t5

0xa364,	// (0x00048e87) cell_ai5_widget_pane_t6_ParamLimits

0xa364,	// (0x00048e87) cell_ai5_widget_pane_t6

0xa376,	// (0x00048e99) cell_ai5_widget_pane_t7_ParamLimits

0xa376,	// (0x00048e99) cell_ai5_widget_pane_t7

0xa38f,	// (0x00048eb2) cell_ai5_widget_pane_t8_ParamLimits

0xa38f,	// (0x00048eb2) cell_ai5_widget_pane_t8

0x0009,

0xfe1d,	// (0x0004e940) cell_ai5_widget_pane_t_ParamLimits

0xfe1d,	// (0x0004e940) cell_ai5_widget_pane_t

0xa3e3,	// (0x00048f06) grid_ai5_widget_pane

0x4122,	// (0x00042c45) highlight_cell_ai5_widget_pane_ParamLimits

0x4122,	// (0x00042c45) highlight_cell_ai5_widget_pane

0xf3d6,	// (0x0004def9) ai5_sk_left_pane

0xf3e0,	// (0x0004df03) ai5_sk_middle_pane

0xf3ea,	// (0x0004df0d) ai5_sk_right_pane

0xa418,	// (0x00048f3b) bg_ai5_widget_pane_g1_ParamLimits

0xa418,	// (0x00048f3b) bg_ai5_widget_pane_g1

0xa424,	// (0x00048f47) bg_ai5_widget_pane_g2_ParamLimits

0xa424,	// (0x00048f47) bg_ai5_widget_pane_g2

0xa430,	// (0x00048f53) bg_ai5_widget_pane_g3_ParamLimits

0xa430,	// (0x00048f53) bg_ai5_widget_pane_g3

0xa43c,	// (0x00048f5f) bg_ai5_widget_pane_g4_ParamLimits

0xa43c,	// (0x00048f5f) bg_ai5_widget_pane_g4

0xa448,	// (0x00048f6b) bg_ai5_widget_pane_g5_ParamLimits

0xa448,	// (0x00048f6b) bg_ai5_widget_pane_g5

0xa454,	// (0x00048f77) bg_ai5_widget_pane_g6_ParamLimits

0xa454,	// (0x00048f77) bg_ai5_widget_pane_g6

0xa460,	// (0x00048f83) bg_ai5_widget_pane_g7_ParamLimits

0xa460,	// (0x00048f83) bg_ai5_widget_pane_g7

0xa46c,	// (0x00048f8f) bg_ai5_widget_pane_g8_ParamLimits

0xa46c,	// (0x00048f8f) bg_ai5_widget_pane_g8

0xa478,	// (0x00048f9b) bg_ai5_widget_pane_g9_ParamLimits

0xa478,	// (0x00048f9b) bg_ai5_widget_pane_g9

0x0008,

0xfe32,	// (0x0004e955) bg_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x0004e955) bg_ai5_widget_pane_g

0xa4aa,	// (0x00048fcd) cell_shortcut_ai5_widget_pane_ParamLimits

0xa4aa,	// (0x00048fcd) cell_shortcut_ai5_widget_pane

0x4dad,	// (0x000438d0) bg_cell_shortcut_ai5_widget_pane

0xa4bb,	// (0x00048fde) cell_grid_ai5_widget_pane_g1

0x4dad,	// (0x000438d0) highlight_cell_shortcut_ai5_widget_pane

0x5616,	// (0x00044139) ai5_sk_left_pane_g1

0xa4c4,	// (0x00048fe7) ai5_sk_left_pane_g2

0xa4cc,	// (0x00048fef) ai5_sk_left_pane_g3

0xa4d4,	// (0x00048ff7) ai5_sk_left_pane_g4

0x0003,

0xfe45,	// (0x0004e968) ai5_sk_left_pane_g

0xa4dc,	// (0x00048fff) ai5_sk_left_pane_t1

0x560e,	// (0x00044131) ai5_sk_right_pane_g1

0xa4ea,	// (0x0004900d) ai5_sk_right_pane_g2

0xa4f2,	// (0x00049015) ai5_sk_right_pane_g3

0xa4fa,	// (0x0004901d) ai5_sk_right_pane_g4

0x0003,

0xfe4e,	// (0x0004e971) ai5_sk_right_pane_g

0xa502,	// (0x00049025) ai5_sk_right_pane_t1

0x560e,	// (0x00044131) ai5_sk_middle_pane_g1

0x5616,	// (0x00044139) ai5_sk_middle_pane_g2

0x562e,	// (0x00044151) ai5_sk_middle_pane_g3

0xa4f2,	// (0x00049015) ai5_sk_middle_pane_g4

0xa4cc,	// (0x00048fef) ai5_sk_middle_pane_g5

0xa510,	// (0x00049033) ai5_sk_middle_pane_g6

0xf3f4,	// (0x0004df17) ai5_sk_middle_pane_g7

0x0006,

0xfe57,	// (0x0004e97a) ai5_sk_middle_pane_g

0xd7d6,	// (0x0004c2f9) aid_touch_area_size_lc0_ParamLimits

0xd7d6,	// (0x0004c2f9) aid_touch_area_size_lc0

0x2a0b,	// (0x0004152e) cell_hwr_candidate_pane_t1_ParamLimits

0x515e,	// (0x00043c81) aid_touch_navi_pane

0xda62,	// (0x0004c585) status_dt_navi_pane_ParamLimits

0xda62,	// (0x0004c585) status_dt_navi_pane

0xda7a,	// (0x0004c59d) status_dt_sta_pane_ParamLimits

0xda7a,	// (0x0004c59d) status_dt_sta_pane

0xf3fc,	// (0x0004df1f) dt_sta_controll_pane

0xf409,	// (0x0004df2c) dt_sta_indi_pane

0xf416,	// (0x0004df39) dt_sta_title_pane

0x3b30,	// (0x00042653) bg_dt_sta_indi_pane_ParamLimits

0x3b30,	// (0x00042653) bg_dt_sta_indi_pane

0xf428,	// (0x0004df4b) dt_sta_battery_pane

0xf430,	// (0x0004df53) dt_sta_indi_pane_g1

0xa562,	// (0x00049085) dt_sta_indi_pane_g2

0xa56b,	// (0x0004908e) dt_sta_indi_pane_g3

0x0002,

0xfe66,	// (0x0004e989) dt_sta_indi_pane_g

0xa574,	// (0x00049097) dt_sta_signal_pane

0x4122,	// (0x00042c45) bg_dt_sta_title_pane_ParamLimits

0x4122,	// (0x00042c45) bg_dt_sta_title_pane

0xa57d,	// (0x000490a0) dt_sta_title_pane_g1

0xa585,	// (0x000490a8) dt_sta_title_pane_t1_ParamLimits

0xa585,	// (0x000490a8) dt_sta_title_pane_t1

0x37b3,	// (0x000422d6) bg_dt_sta_control_pane

0xf439,	// (0x0004df5c) dt_sta_controll_pane_g1

0xa5a3,	// (0x000490c6) bg_dt_sta_title_pane_g1

0xa5ac,	// (0x000490cf) bg_dt_sta_title_pane_g2

0xa5b5,	// (0x000490d8) bg_dt_sta_title_pane_g3

0x0002,

0xfe6d,	// (0x0004e990) bg_dt_sta_title_pane_g

0x7baf,	// (0x000466d2) bg_dt_sta_indi_pane_g1

0xa5be,	// (0x000490e1) dt_sta_signal_pane_g1

0xa5c6,	// (0x000490e9) dt_sta_signal_pane_g2

0x0001,

0xfe74,	// (0x0004e997) dt_sta_signal_pane_g

0xa5ce,	// (0x000490f1) dt_sta_battery_pane_g1

0xa5d7,	// (0x000490fa) dt_sta_battery_pane_t1

0x7baf,	// (0x000466d2) bg_dt_sta_control_pane_g1

0x48ac,	// (0x000433cf) fep_china_uni_eep_pane

0x48b4,	// (0x000433d7) fep_china_uni_entry_pane_ParamLimits

0x48c4,	// (0x000433e7) popup_fep_china_uni_window_g1_ParamLimits

0x48d4,	// (0x000433f7) popup_fep_china_uni_window_g2_ParamLimits

0x48d4,	// (0x000433f7) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0004e245) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0004e245) popup_fep_china_uni_window_g

0xa5e6,	// (0x00049109) fep_china_uni_eep_pane_g1

0xa5ee,	// (0x00049111) fep_china_uni_eep_pane_t1

0xa06e,	// (0x00048b91) aid_touch_area_size_smil_player

0x52ae,	// (0x00043dd1) lc0_clock_pane

0x5495,	// (0x00043fb8) status_pane_g5_ParamLimits

0x5495,	// (0x00043fb8) status_pane_g5

0xc4d0,	// (0x0004aff3) popup_keymap_window

0x5453,	// (0x00043f76) status_icon_pane

0xa258,	// (0x00048d7b) cell_ai5_widget_pane_g3_ParamLimits

0xa26f,	// (0x00048d92) cell_ai5_widget_pane_g4_ParamLimits

0xa27b,	// (0x00048d9e) cell_ai5_widget_pane_g5_ParamLimits

0xa29f,	// (0x00048dc2) cell_ai5_widget_pane_g8_ParamLimits

0xa29f,	// (0x00048dc2) cell_ai5_widget_pane_g8

0xa2b3,	// (0x00048dd6) cell_ai5_widget_pane_g9_ParamLimits

0xa2b3,	// (0x00048dd6) cell_ai5_widget_pane_g9

0xa2c7,	// (0x00048dea) cell_ai5_widget_pane_g10_ParamLimits

0xa2c7,	// (0x00048dea) cell_ai5_widget_pane_g10

0xa5fd,	// (0x00049120) status_icon_pane_g1

0x37b3,	// (0x000422d6) bg_popup_sub_pane_cp13

0xa605,	// (0x00049128) popup_keymap_window_t1

0xd764,	// (0x0004c287) control_pane_g6_ParamLimits

0xd764,	// (0x0004c287) control_pane_g6

0xd771,	// (0x0004c294) control_pane_g7_ParamLimits

0xd771,	// (0x0004c294) control_pane_g7

0xd77e,	// (0x0004c2a1) control_pane_g8_ParamLimits

0xd77e,	// (0x0004c2a1) control_pane_g8

0xf3fc,	// (0x0004df1f) dt_sta_controll_pane_ParamLimits

0xf409,	// (0x0004df2c) dt_sta_indi_pane_ParamLimits

0xf416,	// (0x0004df39) dt_sta_title_pane_ParamLimits

0x404e,	// (0x00042b71) aid_size_touch_scroll_bar_cale

0x13db,	// (0x0003fefe) popup_discreet_window_ParamLimits

0x13db,	// (0x0003fefe) popup_discreet_window

0xc053,	// (0x0004ab76) popup_sk_window

0x5c8d,	// (0x000447b0) bg_popup_sub_pane_cp28_ParamLimits

0x5c8d,	// (0x000447b0) bg_popup_sub_pane_cp28

0xa613,	// (0x00049136) popup_discreet_window_g1_ParamLimits

0xa613,	// (0x00049136) popup_discreet_window_g1

0xa633,	// (0x00049156) popup_discreet_window_t1_ParamLimits

0xa633,	// (0x00049156) popup_discreet_window_t1

0xa651,	// (0x00049174) popup_discreet_window_t2_ParamLimits

0xa651,	// (0x00049174) popup_discreet_window_t2

0x0002,

0xfe79,	// (0x0004e99c) popup_discreet_window_t_ParamLimits

0xfe79,	// (0x0004e99c) popup_discreet_window_t

0x3440,	// (0x00041f63) popup_sk_window_g1

0x344a,	// (0x00041f6d) popup_sk_window_g2

0x0001,

0xfe80,	// (0x0004e9a3) popup_sk_window_g

0x3452,	// (0x00041f75) popup_sk_window_t1

0x3460,	// (0x00041f83) popup_sk_window_t1_copy1

0xa248,	// (0x00048d6b) cell_ai5_widget_pane_g2_ParamLimits

0xa3a1,	// (0x00048ec4) cell_ai5_widget_pane_t9_ParamLimits

0xa3a1,	// (0x00048ec4) cell_ai5_widget_pane_t9

0x37b3,	// (0x000422d6) main_fep_fshwr2_pane

0xcf5c,	// (0x0004ba7f) aid_fshwr2_btn_pane

0xcf6d,	// (0x0004ba90) aid_fshwr2_syb_pane

0xcf7e,	// (0x0004baa1) aid_fshwr2_txt_pane

0xcf8a,	// (0x0004baad) fshwr2_func_candi_pane

0xcfa9,	// (0x0004bacc) fshwr2_hwr_syb_pane

0xcfc4,	// (0x0004bae7) fshwr2_icf_pane

0x37b3,	// (0x000422d6) fshwr2_icf_bg_pane

0x34e0,	// (0x00042003) fshwr2_icf_pane_t1_ParamLimits

0x34e0,	// (0x00042003) fshwr2_icf_pane_t1

0x479a,	// (0x000432bd) fshwr2_func_candi_pane_g1

0xf442,	// (0x0004df65) fshwr2_func_candi_row_pane_ParamLimits

0xf442,	// (0x0004df65) fshwr2_func_candi_row_pane

0xcff0,	// (0x0004bb13) cell_fshwr2_syb_pane_ParamLimits

0xcff0,	// (0x0004bb13) cell_fshwr2_syb_pane

0x7e39,	// (0x0004695c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7e39,	// (0x0004695c) fshwr2_hwr_syb_pane_g1

0x37b3,	// (0x000422d6) bg_popup_call_pane_cp01

0xd006,	// (0x0004bb29) fshwr2_func_candi_cell_pane_ParamLimits

0xd006,	// (0x0004bb29) fshwr2_func_candi_cell_pane

0xf465,	// (0x0004df88) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf465,	// (0x0004df88) fshwr2_func_candi_cell_bg_pane

0xd051,	// (0x0004bb74) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd051,	// (0x0004bb74) fshwr2_func_candi_cell_pane_g1

0xd088,	// (0x0004bbab) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd088,	// (0x0004bbab) fshwr2_func_candi_cell_pane_t1

0x37b3,	// (0x000422d6) bg_button_pane_cp08

0xa6bf,	// (0x000491e2) cell_fshwr2_syb_bg_pane

0xd0a3,	// (0x0004bbc6) cell_fshwr2_syb_bg_pane_g1

0xd0ab,	// (0x0004bbce) cell_fshwr2_syb_bg_pane_t1

0x4122,	// (0x00042c45) main_tmo_pane

0xdd38,	// (0x0004c85b) uni_indicator_pane_g1_ParamLimits

0xdd4e,	// (0x0004c871) uni_indicator_pane_g2_ParamLimits

0xdd64,	// (0x0004c887) uni_indicator_pane_g3_ParamLimits

0x67db,	// (0x000452fe) uni_indicator_pane_g4_ParamLimits

0x67db,	// (0x000452fe) uni_indicator_pane_g4

0x67ef,	// (0x00045312) uni_indicator_pane_g5_ParamLimits

0x67ef,	// (0x00045312) uni_indicator_pane_g5

0x67ef,	// (0x00045312) uni_indicator_pane_g6_ParamLimits

0x67ef,	// (0x00045312) uni_indicator_pane_g6

0xf921,	// (0x0004e444) uni_indicator_pane_g_ParamLimits

0xe7eb,	// (0x0004d30e) popup_tmo_note_window_ParamLimits

0xe7eb,	// (0x0004d30e) popup_tmo_note_window

0x4122,	// (0x00042c45) fshwr2_bg_pane

0xd079,	// (0x0004bb9c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd079,	// (0x0004bb9c) fshwr2_func_candi_cell_pane_g2

0x0001,

0x0165,	// (0x0003ec88) fshwr2_func_candi_cell_pane_g_ParamLimits

0x0165,	// (0x0003ec88) fshwr2_func_candi_cell_pane_g

0x7baf,	// (0x000466d2) bg_popup_window_pane_cp01

0x35ab,	// (0x000420ce) bg_popup_window_pane_g1_cp01

0xa6c7,	// (0x000491ea) bg_popup_window_pane_cp22_ParamLimits

0xa6c7,	// (0x000491ea) bg_popup_window_pane_cp22

0xa6d5,	// (0x000491f8) listscroll_tmo_link_pane_ParamLimits

0xa6d5,	// (0x000491f8) listscroll_tmo_link_pane

0xa715,	// (0x00049238) popup_tmo_note_window_g1_ParamLimits

0xa715,	// (0x00049238) popup_tmo_note_window_g1

0xa722,	// (0x00049245) tmo_note_info_pane_ParamLimits

0xa722,	// (0x00049245) tmo_note_info_pane

0xf471,	// (0x0004df94) list_tmo_note_info_pane_g1_ParamLimits

0xf471,	// (0x0004df94) list_tmo_note_info_pane_g1

0xa753,	// (0x00049276) list_tmo_note_info_pane_g2_ParamLimits

0xa753,	// (0x00049276) list_tmo_note_info_pane_g2

0x0001,

0xfe85,	// (0x0004e9a8) list_tmo_note_info_pane_g_ParamLimits

0xfe85,	// (0x0004e9a8) list_tmo_note_info_pane_g

0xa76f,	// (0x00049292) list_tmo_note_info_text_pane_ParamLimits

0xa76f,	// (0x00049292) list_tmo_note_info_text_pane

0xa7f0,	// (0x00049313) list_tmo_link_pane

0xa7fd,	// (0x00049320) scroll_pane_cp20

0xa80a,	// (0x0004932d) list_single_tmo_link_pane_ParamLimits

0xa80a,	// (0x0004932d) list_single_tmo_link_pane

0xa81a,	// (0x0004933d) list_single_tmo_link_pane_t1

0xa828,	// (0x0004934b) list_tmo_note_info_text_pane_t1_ParamLimits

0xa828,	// (0x0004934b) list_tmo_note_info_text_pane_t1

0xd42c,	// (0x0004bf4f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd42c,	// (0x0004bf4f) aid_size_touch_scroll_bar_cp01

0xbc25,	// (0x0004a748) aid_size_touch_slider_marker

0xc043,	// (0x0004ab66) popup_settings_window_ParamLimits

0xc043,	// (0x0004ab66) popup_settings_window

0x0927,	// (0x0003f44a) popup_candi_list_indi_window

0x515e,	// (0x00043c81) aid_touch_navi_pane_ParamLimits

0x2c53,	// (0x00041776) rs_clock_indi_pane

0x2c5c,	// (0x0004177f) sctrl_sk_bottom_pane_ParamLimits

0x2c6d,	// (0x00041790) sctrl_sk_top_pane_ParamLimits

0x2d54,	// (0x00041877) popup_fep_tooltip_window

0xa1be,	// (0x00048ce1) aid_size_cell_widget_grid_ParamLimits

0xa233,	// (0x00048d56) cell_ai5_widget_pane_g1_ParamLimits

0xa233,	// (0x00048d56) cell_ai5_widget_pane_g1

0xa287,	// (0x00048daa) cell_ai5_widget_pane_g6_ParamLimits

0xa293,	// (0x00048db6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe08,	// (0x0004e92b) cell_ai5_widget_pane_g_ParamLimits

0xfe08,	// (0x0004e92b) cell_ai5_widget_pane_g

0xa3c5,	// (0x00048ee8) cell_ai5_widget_pane_t10_ParamLimits

0xa3c5,	// (0x00048ee8) cell_ai5_widget_pane_t10

0xa3e3,	// (0x00048f06) grid_ai5_widget_pane_ParamLimits

0xa484,	// (0x00048fa7) cell_contacts_ai5_widget_pane_ParamLimits

0xa484,	// (0x00048fa7) cell_contacts_ai5_widget_pane

0xa666,	// (0x00049189) popup_discreet_window_t3_ParamLimits

0xa666,	// (0x00049189) popup_discreet_window_t3

0xcfdc,	// (0x0004baff) popup_fshwr2_char_preview_window_ParamLimits

0xcfdc,	// (0x0004baff) popup_fshwr2_char_preview_window

0xf488,	// (0x0004dfab) tmo_note_info_pane_t1

0xf49d,	// (0x0004dfc0) tmo_note_info_pane_t2

0xf4b4,	// (0x0004dfd7) tmo_note_info_pane_t3

0xa7cc,	// (0x000492ef) tmo_note_info_pane_t4

0xa7de,	// (0x00049301) tmo_note_info_pane_t5

0x0004,

0xfe8a,	// (0x0004e9ad) tmo_note_info_pane_t

0xa7f0,	// (0x00049313) list_tmo_link_pane_ParamLimits

0xa7fd,	// (0x00049320) scroll_pane_cp20_ParamLimits

0x37b3,	// (0x000422d6) bg_popup_fep_char_preview_window_cp01

0xa841,	// (0x00049364) popup_fshwr2_char_preview_window_t1

0xa84f,	// (0x00049372) popup_candi_list_indi_window_g1

0xa858,	// (0x0004937b) bg_cell_contacts_ai5_widget_pane

0xa864,	// (0x00049387) cell_contacts_ai5_widget_pane_g1

0x829b,	// (0x00046dbe) cell_contacts_ai5_widget_pane_g2

0xa879,	// (0x0004939c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe95,	// (0x0004e9b8) cell_contacts_ai5_widget_pane_g

0xa885,	// (0x000493a8) cell_contacts_ai5_widget_pane_t1

0x4122,	// (0x00042c45) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa8fc,	// (0x0004941f) settings_container_pane

0x4dad,	// (0x000438d0) listscroll_set_pane_copy1

0x72c0,	// (0x00045de3) scroll_pane_cp121_copy1

0x5a3e,	// (0x00044561) set_content_pane_copy1

0xa908,	// (0x0004942b) aid_height_set_list_copy1_ParamLimits

0xa908,	// (0x0004942b) aid_height_set_list_copy1

0x69e7,	// (0x0004550a) aid_size_parent_copy1_ParamLimits

0x69e7,	// (0x0004550a) aid_size_parent_copy1

0xa914,	// (0x00049437) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa914,	// (0x00049437) button_value_adjust_pane_cp6_copy1

0x50fc,	// (0x00043c1f) list_highlight_pane_cp2_copy1_ParamLimits

0x50fc,	// (0x00043c1f) list_highlight_pane_cp2_copy1

0xa928,	// (0x0004944b) list_set_pane_copy1_ParamLimits

0xa928,	// (0x0004944b) list_set_pane_copy1

0xa897,	// (0x000493ba) main_pane_set_t1_copy1_ParamLimits

0xa897,	// (0x000493ba) main_pane_set_t1_copy1

0xa8d1,	// (0x000493f4) main_pane_set_t2_copy1_ParamLimits

0xa8d1,	// (0x000493f4) main_pane_set_t2_copy1

0xa9d5,	// (0x000494f8) main_pane_set_t3_copy1

0xa9e3,	// (0x00049506) main_pane_set_t4_copy1

0xa8f0,	// (0x00049413) set_content_pane_g1_copy1_ParamLimits

0xa8f0,	// (0x00049413) set_content_pane_g1_copy1

0xa9f1,	// (0x00049514) setting_code_pane_copy1

0xa9f9,	// (0x0004951c) setting_slider_graphic_pane_copy1

0xa9f9,	// (0x0004951c) setting_slider_pane_copy1

0xa9f9,	// (0x0004951c) setting_text_pane_copy1

0xa9f9,	// (0x0004951c) setting_volume_pane_copy1

0xa9f1,	// (0x00049514) settings_code_pane_cp2_copy1

0xaa01,	// (0x00049524) settings_code_pane_cp_copy1_ParamLimits

0xaa01,	// (0x00049524) settings_code_pane_cp_copy1

0x35b4,	// (0x000420d7) volume_set_pane_copy1

0xaa15,	// (0x00049538) volume_set_pane_g10_copy1

0xaa1d,	// (0x00049540) volume_set_pane_g1_copy1

0xaa25,	// (0x00049548) volume_set_pane_g2_copy1

0xaa2d,	// (0x00049550) volume_set_pane_g3_copy1

0xaa35,	// (0x00049558) volume_set_pane_g4_copy1

0xaa3d,	// (0x00049560) volume_set_pane_g5_copy1

0xaa45,	// (0x00049568) volume_set_pane_g6_copy1

0xaa4d,	// (0x00049570) volume_set_pane_g7_copy1

0xaa55,	// (0x00049578) volume_set_pane_g8_copy1

0xaa5d,	// (0x00049580) volume_set_pane_g9_copy1

0x38a7,	// (0x000423ca) bg_set_opt_pane_cp_copy1_ParamLimits

0x38a7,	// (0x000423ca) bg_set_opt_pane_cp_copy1

0x35bc,	// (0x000420df) setting_slider_pane_t1_copy1_ParamLimits

0x35bc,	// (0x000420df) setting_slider_pane_t1_copy1

0x35da,	// (0x000420fd) setting_slider_pane_t2_copy1_ParamLimits

0x35da,	// (0x000420fd) setting_slider_pane_t2_copy1

0x35f4,	// (0x00042117) setting_slider_pane_t3_copy1_ParamLimits

0x35f4,	// (0x00042117) setting_slider_pane_t3_copy1

0x360c,	// (0x0004212f) slider_set_pane_copy1_ParamLimits

0x360c,	// (0x0004212f) slider_set_pane_copy1

0x416e,	// (0x00042c91) set_opt_bg_pane_g1_copy2

0x4176,	// (0x00042c99) set_opt_bg_pane_g2_copy2

0xaa65,	// (0x00049588) set_opt_bg_pane_g3_copy2

0x4186,	// (0x00042ca9) set_opt_bg_pane_g4_copy2

0x418e,	// (0x00042cb1) set_opt_bg_pane_g5_copy2

0x4196,	// (0x00042cb9) set_opt_bg_pane_g6_copy2

0xaa6f,	// (0x00049592) set_opt_bg_pane_g7_copy2

0xaa77,	// (0x0004959a) set_opt_bg_pane_g8_copy2

0xaa81,	// (0x000495a4) set_opt_bg_pane_g9_copy2

0x3622,	// (0x00042145) aid_size_touch_slider_mark_copy1_ParamLimits

0x3622,	// (0x00042145) aid_size_touch_slider_mark_copy1

0xaa8b,	// (0x000495ae) slider_set_pane_g1_copy1

0x3636,	// (0x00042159) slider_set_pane_g2_copy1

0x258e,	// (0x000410b1) slider_set_pane_g3_copy1_ParamLimits

0x258e,	// (0x000410b1) slider_set_pane_g3_copy1

0x25a2,	// (0x000410c5) slider_set_pane_g4_copy1_ParamLimits

0x25a2,	// (0x000410c5) slider_set_pane_g4_copy1

0x25ba,	// (0x000410dd) slider_set_pane_g5_copy1_ParamLimits

0x25ba,	// (0x000410dd) slider_set_pane_g5_copy1

0x258e,	// (0x000410b1) slider_set_pane_g6_copy1_ParamLimits

0x258e,	// (0x000410b1) slider_set_pane_g6_copy1

0x363e,	// (0x00042161) slider_set_pane_g7_copy1_ParamLimits

0x363e,	// (0x00042161) slider_set_pane_g7_copy1

0x37c7,	// (0x000422ea) bg_set_opt_pane_cp2_copy1

0xaa94,	// (0x000495b7) setting_slider_graphic_pane_g1_copy1

0xaa9d,	// (0x000495c0) setting_slider_graphic_pane_t1_copy1

0xaaad,	// (0x000495d0) setting_slider_graphic_pane_t2_copy1

0xaabd,	// (0x000495e0) slider_set_pane_cp_copy1

0xaacd,	// (0x000495f0) input_focus_pane_cp1_copy1

0xaad6,	// (0x000495f9) list_set_text_pane_copy1

0xaade,	// (0x00049601) setting_text_pane_g1_copy1

0x1152,	// (0x0003fc75) set_text_pane_t1_copy1

0xaacd,	// (0x000495f0) input_focus_pane_cp2_copy1

0xaade,	// (0x00049601) setting_code_pane_g1_copy1

0xaae7,	// (0x0004960a) setting_code_pane_t1_copy1

0xaaf5,	// (0x00049618) list_set_graphic_pane_copy1

0x37c7,	// (0x000422ea) bg_set_opt_pane_cp4_copy1

0x4aa8,	// (0x000435cb) list_set_graphic_pane_g1_copy1_ParamLimits

0x4aa8,	// (0x000435cb) list_set_graphic_pane_g1_copy1

0xab08,	// (0x0004962b) list_set_graphic_pane_g2_copy1

0x4ac0,	// (0x000435e3) list_set_graphic_pane_t1_copy1_ParamLimits

0x4ac0,	// (0x000435e3) list_set_graphic_pane_t1_copy1

0x7baf,	// (0x000466d2) rs_clock_indi_pane_g1

0xab10,	// (0x00049633) rs_clock_indi_pane_t1

0xab1e,	// (0x00049641) rs_indi_pane

0xab26,	// (0x00049649) rs_indi_pane_g1

0xab2f,	// (0x00049652) rs_indi_pane_g2

0xab38,	// (0x0004965b) rs_indi_pane_g3

0x0002,

0xfe9c,	// (0x0004e9bf) rs_indi_pane_g

0x4dad,	// (0x000438d0) bg_popup_preview_window_pane_cp03

0xab41,	// (0x00049664) popup_fep_tooltip_window_t1

0x8837,	// (0x0004735a) popup_note2_window_g2_ParamLimits

0x8837,	// (0x0004735a) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0004e773) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0004e773) popup_note2_window_g

0x8d32,	// (0x00047855) bg_popup_sub_pane_cp11_ParamLimits

0x8d3f,	// (0x00047862) cell_ai3_links_pane_g1_ParamLimits

0x8d56,	// (0x00047879) cell_ai3_links_pane_t1

0x1152,	// (0x0003fc75) set_text_pane_t1_copy1_ParamLimits

0x4cbe,	// (0x000437e1) cell_graphic_popup_pane_cp2_ParamLimits

0x4cbe,	// (0x000437e1) cell_graphic_popup_pane_cp2

0xab4f,	// (0x00049672) cell_graphic_popup_pane_g1_cp2

0x3e61,	// (0x00042984) cell_graphic_popup_pane_g2_cp2

0xab57,	// (0x0004967a) cell_graphic_popup_pane_g3_cp2

0xab5f,	// (0x00049682) cell_graphic_popup_pane_t2_cp2

0x3e72,	// (0x00042995) grid_highlight_pane_cp3_cp2

0x44b3,	// (0x00042fd6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4122,	// (0x00042c45) main_tmo_pane_ParamLimits

0xe7df,	// (0x0004d302) popup_tmo_big_image_note_window

0xa222,	// (0x00048d45) cell_ai5_widget_list_pane

0xa22a,	// (0x00048d4d) cell_ai5_widget_lrg_icon_pane

0xf488,	// (0x0004dfab) tmo_note_info_pane_t1_ParamLimits

0xf49d,	// (0x0004dfc0) tmo_note_info_pane_t2_ParamLimits

0xf4b4,	// (0x0004dfd7) tmo_note_info_pane_t3_ParamLimits

0xa7cc,	// (0x000492ef) tmo_note_info_pane_t4_ParamLimits

0xa7de,	// (0x00049301) tmo_note_info_pane_t5_ParamLimits

0xfe8a,	// (0x0004e9ad) tmo_note_info_pane_t_ParamLimits

0xa8fc,	// (0x0004941f) settings_container_pane_ParamLimits

0xaac5,	// (0x000495e8) indicator_popup_pane_cp5

0xaac5,	// (0x000495e8) indicator_popup_pane_cp6

0xaaf5,	// (0x00049618) list_set_graphic_pane_copy1_ParamLimits

0x37b3,	// (0x000422d6) bg_popup_window_pane_cp23

0xab6d,	// (0x00049690) popup_tmo_big_image_note_window_g1

0xab77,	// (0x0004969a) popup_tmo_big_image_note_window_t1

0xab87,	// (0x000496aa) popup_tmo_big_image_note_window_t2

0xab97,	// (0x000496ba) popup_tmo_big_image_note_window_t3

0x0002,

0xfea3,	// (0x0004e9c6) popup_tmo_big_image_note_window_t

0x7baf,	// (0x000466d2) cell_ai5_widget_lrg_icon_pane_g1

0xaba7,	// (0x000496ca) cell_ai5_widget_lrg_icon_pane_t1

0xabb5,	// (0x000496d8) cell_ai5_widget_list_row_pane_ParamLimits

0xabb5,	// (0x000496d8) cell_ai5_widget_list_row_pane

0xabcc,	// (0x000496ef) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xabcc,	// (0x000496ef) cell_ai5_widget_list_row_pane_g1

0xabd9,	// (0x000496fc) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xabd9,	// (0x000496fc) cell_ai5_widget_list_row_pane_t1

0xac0a,	// (0x0004972d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xac0a,	// (0x0004972d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeaa,	// (0x0004e9cd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeaa,	// (0x0004e9cd) cell_ai5_widget_list_row_pane_t

0x37b3,	// (0x000422d6) main_fep_vtchi_ss_pane

0xac4e,	// (0x00049771) popup_fep_char_pre_window

0xac56,	// (0x00049779) popup_fep_ituss_window

0xf4c9,	// (0x0004dfec) popup_fep_vkbss_window

0xf4d6,	// (0x0004dff9) grid_vkbss_keypad_pane_ParamLimits

0xf4d6,	// (0x0004dff9) grid_vkbss_keypad_pane

0xacb1,	// (0x000497d4) ituss_keypad_pane

0x3660,	// (0x00042183) aid_vkbss_key_offset_ParamLimits

0x3660,	// (0x00042183) aid_vkbss_key_offset

0xd0ba,	// (0x0004bbdd) cell_vkbss_key_pane_ParamLimits

0xd0ba,	// (0x0004bbdd) cell_vkbss_key_pane

0xacc0,	// (0x000497e3) bg_cell_vkbss_key_g1_ParamLimits

0xacc0,	// (0x000497e3) bg_cell_vkbss_key_g1

0xf4e6,	// (0x0004e009) cell_vkbss_key_3p_pane_ParamLimits

0xf4e6,	// (0x0004e009) cell_vkbss_key_3p_pane

0xf500,	// (0x0004e023) cell_vkbss_key_g1_ParamLimits

0xf500,	// (0x0004e023) cell_vkbss_key_g1

0xf51a,	// (0x0004e03d) cell_vkbss_key_t1_ParamLimits

0xf51a,	// (0x0004e03d) cell_vkbss_key_t1

0x3682,	// (0x000421a5) cell_ituss_key_pane_ParamLimits

0x3682,	// (0x000421a5) cell_ituss_key_pane

0xad1f,	// (0x00049842) bg_cell_ituss_key_g1_ParamLimits

0xad1f,	// (0x00049842) bg_cell_ituss_key_g1

0xad2b,	// (0x0004984e) cell_ituss_key_pane_g1_ParamLimits

0xad2b,	// (0x0004984e) cell_ituss_key_pane_g1

0x3693,	// (0x000421b6) cell_ituss_key_pane_g2_ParamLimits

0x3693,	// (0x000421b6) cell_ituss_key_pane_g2

0x0002,

0xfeb1,	// (0x0004e9d4) cell_ituss_key_pane_g_ParamLimits

0xfeb1,	// (0x0004e9d4) cell_ituss_key_pane_g

0x36bf,	// (0x000421e2) cell_ituss_key_t1_ParamLimits

0x36bf,	// (0x000421e2) cell_ituss_key_t1

0x36f9,	// (0x0004221c) cell_ituss_key_t2_ParamLimits

0x36f9,	// (0x0004221c) cell_ituss_key_t2

0x372a,	// (0x0004224d) cell_ituss_key_t3_ParamLimits

0x372a,	// (0x0004224d) cell_ituss_key_t3

0x36f9,	// (0x0004221c) cell_ituss_key_t4_ParamLimits

0x36f9,	// (0x0004221c) cell_ituss_key_t4

0x0004,

0xfeb8,	// (0x0004e9db) cell_ituss_key_t_ParamLimits

0xfeb8,	// (0x0004e9db) cell_ituss_key_t

0xad57,	// (0x0004987a) cell_vkbss_key_3p_pane_g1

0xad5f,	// (0x00049882) cell_vkbss_key_3p_pane_g2

0xad67,	// (0x0004988a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec3,	// (0x0004e9e6) cell_vkbss_key_3p_pane_g

0x37b3,	// (0x000422d6) bg_popup_fep_char_preview_window_cp02

0x376d,	// (0x00042290) popup_fep_char_pre_window_t1

0xf3cc,	// (0x0004deef) main_ai5_sk_pane

0xa858,	// (0x0004937b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa864,	// (0x00049387) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x829b,	// (0x00046dbe) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa879,	// (0x0004939c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe95,	// (0x0004e9b8) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa885,	// (0x000493a8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4122,	// (0x00042c45) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0004e068) main_ai5_sk_pane_g1

0x5ac6,	// (0x000445e9) popup_query_code_window_g1

0xac6c,	// (0x0004978f) popup_fep_vkb_icf_pane

0xac8b,	// (0x000497ae) popup_fep_vtchi_icf_pane

0xad78,	// (0x0004989b) bg_icf_pane

0xad84,	// (0x000498a7) list_vkb_icf_pane

0xad93,	// (0x000498b6) bg_icf_pane_cp01

0xada6,	// (0x000498c9) vtchi_icf_list_pane

0xadb6,	// (0x000498d9) list_vkb_icf_pane_t1_ParamLimits

0xadb6,	// (0x000498d9) list_vkb_icf_pane_t1

0xadcc,	// (0x000498ef) vtchi_icf_list_pane_t1_ParamLimits

0xadcc,	// (0x000498ef) vtchi_icf_list_pane_t1

0xac56,	// (0x00049779) popup_fep_ituss_window_ParamLimits

0xac8b,	// (0x000497ae) popup_fep_vtchi_icf_pane_ParamLimits

0xacb1,	// (0x000497d4) ituss_keypad_pane_ParamLimits

0x3654,	// (0x00042177) ituss_sks_pane

0xad78,	// (0x0004989b) bg_icf_pane_ParamLimits

0xac32,	// (0x00049755) icf_edit_indi_pane_ParamLimits

0xac32,	// (0x00049755) icf_edit_indi_pane

0xad84,	// (0x000498a7) list_vkb_icf_pane_ParamLimits

0xad93,	// (0x000498b6) bg_icf_pane_cp01_ParamLimits

0xac41,	// (0x00049764) icf_edit_indi_pane_cp01_ParamLimits

0xac41,	// (0x00049764) icf_edit_indi_pane_cp01

0xadae,	// (0x000498d1) vtchi_query_pane

0x7e39,	// (0x0004695c) icf_edit_indi_pane_g1_ParamLimits

0x7e39,	// (0x0004695c) icf_edit_indi_pane_g1

0xae3d,	// (0x00049960) icf_edit_indi_pane_g2_ParamLimits

0xae3d,	// (0x00049960) icf_edit_indi_pane_g2

0x0001,

0xfedb,	// (0x0004e9fe) icf_edit_indi_pane_g_ParamLimits

0xfedb,	// (0x0004e9fe) icf_edit_indi_pane_g

0xae4c,	// (0x0004996f) icf_edit_indi_pane_t1

0xade6,	// (0x00049909) bg_input_focus_pane_cp042

0x4045,	// (0x00042b68) vtchi_button_pane

0xadef,	// (0x00049912) vtchi_query_pane_t1

0xadfd,	// (0x00049920) vtchi_query_pane_t2

0xae0b,	// (0x0004992e) vtchi_query_pane_t3

0x0002,

0xfeca,	// (0x0004e9ed) vtchi_query_pane_t

0x37b3,	// (0x000422d6) bg_button_pane_cp13

0xae19,	// (0x0004993c) vtchi_button_pane_g1

0x377c,	// (0x0004229f) ituss_sks_pane_g1

0x3787,	// (0x000422aa) ituss_sks_pane_g2

0x0001,

0xfed1,	// (0x0004e9f4) ituss_sks_pane_g

0xae21,	// (0x00049944) ituss_sks_pane_t1

0xae2f,	// (0x00049952) ituss_sks_pane_t2

0x0001,

0xfed6,	// (0x0004e9f9) ituss_sks_pane_t

0x763a,	// (0x0004615d) indicator_nsta_pane_cp_g1

0x7642,	// (0x00046165) indicator_nsta_pane_cp_g2

0x764a,	// (0x0004616d) indicator_nsta_pane_cp_g3

0x763a,	// (0x0004615d) indicator_nsta_pane_cp_g4

0x7642,	// (0x00046165) indicator_nsta_pane_cp_g5

0x764a,	// (0x0004616d) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0004e5bd) indicator_nsta_pane_cp_g

0xf1e4,	// (0x0004dd07) cell_graphic2_pane_t2_ParamLimits

0xf1e4,	// (0x0004dd07) cell_graphic2_pane_t2

0x0001,

0x0071,	// (0x0003eb94) cell_graphic2_pane_t_ParamLimits

0x0071,	// (0x0003eb94) cell_graphic2_pane_t

0xf218,	// (0x0004dd3b) cell_graphic2_control_pane_t1

0xd5d7,	// (0x0004c0fa) signal_pane_g3_ParamLimits

0xd5d7,	// (0x0004c0fa) signal_pane_g3

0xd5eb,	// (0x0004c10e) signal_pane_g4_ParamLimits

0xd5eb,	// (0x0004c10e) signal_pane_g4

0xac1c,	// (0x0004973f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xac1c,	// (0x0004973f) cell_ai5_widget_list_row_pane_t3

0xad45,	// (0x00049868) cell_ituss_key_pane_t1_ParamLimits

0xad45,	// (0x00049868) cell_ituss_key_pane_t1

0x570b,	// (0x0004422e) form_field_data_wide_pane_vc_t2_ParamLimits

0x570b,	// (0x0004422e) form_field_data_wide_pane_vc_t2

0x571f,	// (0x00044242) form_field_data_wide_pane_vc_t3_ParamLimits

0x571f,	// (0x00044242) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0004e32c) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0004e32c) form_field_data_wide_pane_vc_t

0x7302,	// (0x00045e25) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7302,	// (0x00045e25) form_field_slider_wide_pane_vc_t3

0x73e0,	// (0x00045f03) form_field_popup_wide_pane_vc_t2_ParamLimits

0x73e0,	// (0x00045f03) form_field_popup_wide_pane_vc_t2

0x73f7,	// (0x00045f1a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x73f7,	// (0x00045f1a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0004e5ac) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0004e5ac) form_field_popup_wide_pane_vc_t

0xcf5c,	// (0x0004ba7f) aid_fshwr2_btn_pane_ParamLimits

0xcf6d,	// (0x0004ba90) aid_fshwr2_syb_pane_ParamLimits

0xcf7e,	// (0x0004baa1) aid_fshwr2_txt_pane_ParamLimits

0x4122,	// (0x00042c45) fshwr2_bg_pane_ParamLimits

0xcf8a,	// (0x0004baad) fshwr2_func_candi_pane_ParamLimits

0xcfa9,	// (0x0004bacc) fshwr2_hwr_syb_pane_ParamLimits

0xcfc4,	// (0x0004bae7) fshwr2_icf_pane_ParamLimits

0x276e,	// (0x00041291) list_double_graphic_pane_vc_g4_ParamLimits

0x276e,	// (0x00041291) list_double_graphic_pane_vc_g4

0x36b3,	// (0x000421d6) cell_ituss_key_pane_g3_ParamLimits

0x36b3,	// (0x000421d6) cell_ituss_key_pane_g3

0x375b,	// (0x0004227e) cell_ituss_key_t5_ParamLimits

0x375b,	// (0x0004227e) cell_ituss_key_t5

0xf4c9,	// (0x0004dfec) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large

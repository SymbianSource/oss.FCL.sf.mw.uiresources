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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000cbc5 };

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
0x7548,	// (0x0001410d) Screen

0x7554,	// (0x00014119) application_window_ParamLimits

0x7554,	// (0x00014119) application_window

0x3542,	// (0x00010107) screen_g1

0x4e70,	// (0x00011a35) area_bottom_pane_ParamLimits

0x4e70,	// (0x00011a35) area_bottom_pane

0x4f30,	// (0x00011af5) area_top_pane_ParamLimits

0x4f30,	// (0x00011af5) area_top_pane

0x4fce,	// (0x00011b93) main_pane_ParamLimits

0x4fce,	// (0x00011b93) main_pane

0x36bb,	// (0x00010280) misc_graphics

0x8c39,	// (0x000157fe) battery_pane_ParamLimits

0x8c39,	// (0x000157fe) battery_pane

0x9a1a,	// (0x000165df) bg_status_flat_pane_g8

0x9a22,	// (0x000165e7) bg_status_flat_pane_g9

0x8d01,	// (0x000158c6) context_pane_ParamLimits

0x8d01,	// (0x000158c6) context_pane

0x8e25,	// (0x000159ea) navi_pane_ParamLimits

0x8e25,	// (0x000159ea) navi_pane

0x8eb5,	// (0x00015a7a) signal_pane_ParamLimits

0x8eb5,	// (0x00015a7a) signal_pane

0x0008,

0xf84f,	// (0x0001c414) bg_status_flat_pane_g

0x8f22,	// (0x00015ae7) status_pane_g1_ParamLimits

0x8f22,	// (0x00015ae7) status_pane_g1

0x8f2e,	// (0x00015af3) status_pane_g2_ParamLimits

0x8f2e,	// (0x00015af3) status_pane_g2

0x8f3a,	// (0x00015aff) status_pane_g3_ParamLimits

0x8f3a,	// (0x00015aff) status_pane_g3

0x0004,

0xf776,	// (0x0001c33b) status_pane_g_ParamLimits

0xf776,	// (0x0001c33b) status_pane_g

0x8f6e,	// (0x00015b33) title_pane_ParamLimits

0x8f6e,	// (0x00015b33) title_pane

0x8fad,	// (0x00015b72) uni_indicator_pane_ParamLimits

0x8fad,	// (0x00015b72) uni_indicator_pane

0x8b5b,	// (0x00015720) bg_list_pane_ParamLimits

0x8b5b,	// (0x00015720) bg_list_pane

0x8b7b,	// (0x00015740) find_pane

0x8b83,	// (0x00015748) listscroll_app_pane_ParamLimits

0x8b83,	// (0x00015748) listscroll_app_pane

0x8b8f,	// (0x00015754) listscroll_form_pane

0x58ad,	// (0x00012472) listscroll_gen_pane_ParamLimits

0x58ad,	// (0x00012472) listscroll_gen_pane

0x58c1,	// (0x00012486) listscroll_set_pane

0x7eb2,	// (0x00014a77) main_idle_act_pane

0x8854,	// (0x00015419) main_idle_trad_pane

0x8854,	// (0x00015419) main_list_empty_pane

0x8b83,	// (0x00015748) main_midp_pane

0x8ba9,	// (0x0001576e) main_pane_g1_ParamLimits

0x8ba9,	// (0x0001576e) main_pane_g1

0x58d7,	// (0x0001249c) popup_ai_message_window_ParamLimits

0x58d7,	// (0x0001249c) popup_ai_message_window

0x598b,	// (0x00012550) popup_fep_china_uni_window_ParamLimits

0x598b,	// (0x00012550) popup_fep_china_uni_window

0x59eb,	// (0x000125b0) popup_fep_japan_candidate_window_ParamLimits

0x59eb,	// (0x000125b0) popup_fep_japan_candidate_window

0x5a15,	// (0x000125da) popup_fep_japan_predictive_window_ParamLimits

0x5a15,	// (0x000125da) popup_fep_japan_predictive_window

0x5a4b,	// (0x00012610) popup_find_window

0x5a58,	// (0x0001261d) popup_grid_graphic_window_ParamLimits

0x5a58,	// (0x0001261d) popup_grid_graphic_window

0x5a88,	// (0x0001264d) popup_large_graphic_colour_window

0x5aae,	// (0x00012673) popup_menu_window_ParamLimits

0x5aae,	// (0x00012673) popup_menu_window

0x5c78,	// (0x0001283d) popup_note_image_window

0x5c62,	// (0x00012827) popup_note_wait_window_ParamLimits

0x5c62,	// (0x00012827) popup_note_wait_window

0x5c62,	// (0x00012827) popup_note_window_ParamLimits

0x5c62,	// (0x00012827) popup_note_window

0x5cde,	// (0x000128a3) popup_query_code_window_ParamLimits

0x5cde,	// (0x000128a3) popup_query_code_window

0x5cf4,	// (0x000128b9) popup_query_data_code_window_ParamLimits

0x5cf4,	// (0x000128b9) popup_query_data_code_window

0x5d17,	// (0x000128dc) popup_query_data_window_ParamLimits

0x5d17,	// (0x000128dc) popup_query_data_window

0x5d39,	// (0x000128fe) popup_query_sat_info_window_ParamLimits

0x5d39,	// (0x000128fe) popup_query_sat_info_window

0x5d78,	// (0x0001293d) popup_snote_single_graphic_window_ParamLimits

0x5d78,	// (0x0001293d) popup_snote_single_graphic_window

0x5d78,	// (0x0001293d) popup_snote_single_text_window_ParamLimits

0x5d78,	// (0x0001293d) popup_snote_single_text_window

0x5d8f,	// (0x00012954) popup_sub_window_general

0x5ed5,	// (0x00012a9a) popup_window_general_ParamLimits

0x5ed5,	// (0x00012a9a) popup_window_general

0x8bbf,	// (0x00015784) power_save_pane

0x5754,	// (0x00012319) control_pane_g1_ParamLimits

0x5754,	// (0x00012319) control_pane_g1

0x5777,	// (0x0001233c) control_pane_g2_ParamLimits

0x5777,	// (0x0001233c) control_pane_g2

0x8b1e,	// (0x000156e3) control_pane_g3_ParamLimits

0x8b1e,	// (0x000156e3) control_pane_g3

0x0007,

0xf75e,	// (0x0001c323) control_pane_g_ParamLimits

0xf75e,	// (0x0001c323) control_pane_g

0x57bc,	// (0x00012381) control_pane_t1_ParamLimits

0x57bc,	// (0x00012381) control_pane_t1

0x5804,	// (0x000123c9) control_pane_t2_ParamLimits

0x5804,	// (0x000123c9) control_pane_t2

0x0002,

0xf76f,	// (0x0001c334) control_pane_t_ParamLimits

0xf76f,	// (0x0001c334) control_pane_t

0x8a43,	// (0x00015608) navi_navi_volume_pane_cp1

0x8a4b,	// (0x00015610) status_small_icon_pane

0x8a53,	// (0x00015618) status_small_pane_g1_ParamLimits

0x8a53,	// (0x00015618) status_small_pane_g1

0x8a87,	// (0x0001564c) status_small_pane_g2_ParamLimits

0x8a87,	// (0x0001564c) status_small_pane_g2

0x8a93,	// (0x00015658) status_small_pane_g3_ParamLimits

0x8a93,	// (0x00015658) status_small_pane_g3

0x8a9f,	// (0x00015664) status_small_pane_g4_ParamLimits

0x8a9f,	// (0x00015664) status_small_pane_g4

0x8aab,	// (0x00015670) status_small_pane_g5_ParamLimits

0x8aab,	// (0x00015670) status_small_pane_g5

0x8ab9,	// (0x0001567e) status_small_pane_g6_ParamLimits

0x8ab9,	// (0x0001567e) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001c312) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001c312) status_small_pane_g

0x8ae8,	// (0x000156ad) status_small_pane_t1

0x8b0a,	// (0x000156cf) status_small_wait_pane_ParamLimits

0x8b0a,	// (0x000156cf) status_small_wait_pane

0x8235,	// (0x00014dfa) aid_levels_signal_ParamLimits

0x8235,	// (0x00014dfa) aid_levels_signal

0x8244,	// (0x00014e09) signal_pane_g1_ParamLimits

0x8244,	// (0x00014e09) signal_pane_g1

0x8259,	// (0x00014e1e) signal_pane_g2_ParamLimits

0x8259,	// (0x00014e1e) signal_pane_g2

0x0003,

0xf6de,	// (0x0001c2a3) signal_pane_g_ParamLimits

0xf6de,	// (0x0001c2a3) signal_pane_g

0x828a,	// (0x00014e4f) context_pane_g1

0x7564,	// (0x00014129) title_pane_g1

0x7596,	// (0x0001415b) title_pane_t1

0x3725,	// (0x000102ea) title_pane_t2

0x374b,	// (0x00010310) title_pane_t3

0x0002,

0xf532,	// (0x0001c0f7) title_pane_t

0x8fc5,	// (0x00015b8a) aid_levels_battery_ParamLimits

0x8fc5,	// (0x00015b8a) aid_levels_battery

0x8fd6,	// (0x00015b9b) battery_pane_g1_ParamLimits

0x8fd6,	// (0x00015b9b) battery_pane_g1

0x8fec,	// (0x00015bb1) battery_pane_g2_ParamLimits

0x8fec,	// (0x00015bb1) battery_pane_g2

0x0001,

0xf781,	// (0x0001c346) battery_pane_g_ParamLimits

0xf781,	// (0x0001c346) battery_pane_g

0xa364,	// (0x00016f29) uni_indicator_pane_g1

0xa37a,	// (0x00016f3f) uni_indicator_pane_g2

0xa390,	// (0x00016f55) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0001c4bc) uni_indicator_pane_g

0x86b7,	// (0x0001527c) navi_icon_pane_ParamLimits

0x86b7,	// (0x0001527c) navi_icon_pane

0x85fe,	// (0x000151c3) navi_midp_pane

0x86d3,	// (0x00015298) navi_navi_pane

0x86dd,	// (0x000152a2) navi_text_pane_ParamLimits

0x86dd,	// (0x000152a2) navi_text_pane

0x3542,	// (0x00010107) status_small_wait_pane_g1

0x3b19,	// (0x000106de) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0001c4b7) status_small_wait_pane_g

0xa077,	// (0x00016c3c) navi_navi_icon_text_pane

0xa07f,	// (0x00016c44) navi_navi_pane_g1_ParamLimits

0xa07f,	// (0x00016c44) navi_navi_pane_g1

0xa091,	// (0x00016c56) navi_navi_pane_g2_ParamLimits

0xa091,	// (0x00016c56) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0001c485) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0001c485) navi_navi_pane_g

0xa0a3,	// (0x00016c68) navi_navi_tabs_pane

0xa0ac,	// (0x00016c71) navi_navi_text_pane

0xa077,	// (0x00016c3c) navi_navi_volume_pane

0xa053,	// (0x00016c18) navi_text_pane_t1

0xa047,	// (0x00016c0c) navi_icon_pane_g1

0x9f9a,	// (0x00016b5f) navi_navi_text_pane_t1

0x61fe,	// (0x00012dc3) navi_navi_volume_pane_g1

0x6206,	// (0x00012dcb) volume_small_pane

0x9f00,	// (0x00016ac5) navi_navi_icon_text_pane_g1

0x9f08,	// (0x00016acd) navi_navi_icon_text_pane_t1

0x86d3,	// (0x00015298) navi_tabs_2_long_pane

0x86d3,	// (0x00015298) navi_tabs_2_pane

0x86d3,	// (0x00015298) navi_tabs_3_long_pane

0x86d3,	// (0x00015298) navi_tabs_3_pane

0x86d3,	// (0x00015298) navi_tabs_4_pane

0x61de,	// (0x00012da3) tabs_2_active_pane_ParamLimits

0x61de,	// (0x00012da3) tabs_2_active_pane

0x61ee,	// (0x00012db3) tabs_2_passive_pane_ParamLimits

0x61ee,	// (0x00012db3) tabs_2_passive_pane

0x61ac,	// (0x00012d71) tabs_3_active_pane_ParamLimits

0x61ac,	// (0x00012d71) tabs_3_active_pane

0x61bc,	// (0x00012d81) tabs_3_passive_pane_ParamLimits

0x61bc,	// (0x00012d81) tabs_3_passive_pane

0x61cd,	// (0x00012d92) tabs_3_passive_pane_cp_ParamLimits

0x61cd,	// (0x00012d92) tabs_3_passive_pane_cp

0x6160,	// (0x00012d25) tabs_4_active_pane_ParamLimits

0x6160,	// (0x00012d25) tabs_4_active_pane

0x6173,	// (0x00012d38) tabs_4_passive_pane_ParamLimits

0x6173,	// (0x00012d38) tabs_4_passive_pane

0x6184,	// (0x00012d49) tabs_4_passive_pane_cp_ParamLimits

0x6184,	// (0x00012d49) tabs_4_passive_pane_cp

0x6195,	// (0x00012d5a) tabs_4_passive_pane_cp2_ParamLimits

0x6195,	// (0x00012d5a) tabs_4_passive_pane_cp2

0x613c,	// (0x00012d01) tabs_2_long_active_pane_ParamLimits

0x613c,	// (0x00012d01) tabs_2_long_active_pane

0x614e,	// (0x00012d13) tabs_2_long_passive_pane_ParamLimits

0x614e,	// (0x00012d13) tabs_2_long_passive_pane

0x60fd,	// (0x00012cc2) tabs_3_long_active_pane_ParamLimits

0x60fd,	// (0x00012cc2) tabs_3_long_active_pane

0x6110,	// (0x00012cd5) tabs_3_long_passive_pane_ParamLimits

0x6110,	// (0x00012cd5) tabs_3_long_passive_pane

0x6129,	// (0x00012cee) tabs_3_long_passive_pane_cp_ParamLimits

0x6129,	// (0x00012cee) tabs_3_long_passive_pane_cp

0x60a3,	// (0x00012c68) volume_small_pane_g1

0x60ac,	// (0x00012c71) volume_small_pane_g2

0x60b5,	// (0x00012c7a) volume_small_pane_g3

0x60be,	// (0x00012c83) volume_small_pane_g4

0x60c7,	// (0x00012c8c) volume_small_pane_g5

0x60d0,	// (0x00012c95) volume_small_pane_g6

0x60d9,	// (0x00012c9e) volume_small_pane_g7

0x60e2,	// (0x00012ca7) volume_small_pane_g8

0x60eb,	// (0x00012cb0) volume_small_pane_g9

0x60f4,	// (0x00012cb9) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0001c451) volume_small_pane_g

0x3775,	// (0x0001033a) bg_active_tab_pane_cp2_ParamLimits

0x3775,	// (0x0001033a) bg_active_tab_pane_cp2

0x75fe,	// (0x000141c3) tabs_3_active_pane_g1

0x7606,	// (0x000141cb) tabs_3_active_pane_t1

0x3775,	// (0x0001033a) bg_passive_tab_pane_cp2_ParamLimits

0x3775,	// (0x0001033a) bg_passive_tab_pane_cp2

0x75fe,	// (0x000141c3) tabs_3_passive_pane_g1

0x7606,	// (0x000141cb) tabs_3_passive_pane_t1

0x3775,	// (0x0001033a) bg_active_tab_pane_cp3_ParamLimits

0x3775,	// (0x0001033a) bg_active_tab_pane_cp3

0x7618,	// (0x000141dd) tabs_4_active_pane_g1

0x7620,	// (0x000141e5) tabs_4_active_pane_t1

0x3775,	// (0x0001033a) bg_passive_tab_pane_cp3_ParamLimits

0x3775,	// (0x0001033a) bg_passive_tab_pane_cp3

0x7618,	// (0x000141dd) tabs_4_1_passive_pane_g1

0x7620,	// (0x000141e5) tabs_4_1_passive_pane_t1

0x8b83,	// (0x00015748) list_highlight_pane_cp2

0xa605,	// (0x000171ca) list_set_pane_ParamLimits

0xa605,	// (0x000171ca) list_set_pane

0xa6c7,	// (0x0001728c) main_pane_set_t1_ParamLimits

0xa6c7,	// (0x0001728c) main_pane_set_t1

0xa6e7,	// (0x000172ac) main_pane_set_t2_ParamLimits

0xa6e7,	// (0x000172ac) main_pane_set_t2

0xa6fb,	// (0x000172c0) main_pane_set_t3_ParamLimits

0xa6fb,	// (0x000172c0) main_pane_set_t3

0xa70f,	// (0x000172d4) main_pane_set_t4_ParamLimits

0xa70f,	// (0x000172d4) main_pane_set_t4

0x0003,

0xf95c,	// (0x0001c521) main_pane_set_t_ParamLimits

0xf95c,	// (0x0001c521) main_pane_set_t

0xa723,	// (0x000172e8) setting_code_pane

0xa72d,	// (0x000172f2) setting_slider_graphic_pane

0xa72d,	// (0x000172f2) setting_slider_pane

0xa72d,	// (0x000172f2) setting_text_pane

0xa72d,	// (0x000172f2) setting_volume_pane

0x522d,	// (0x00011df2) volume_set_pane

0x3775,	// (0x0001033a) bg_set_opt_pane_cp

0x5237,	// (0x00011dfc) setting_slider_pane_t1

0x5250,	// (0x00011e15) setting_slider_pane_t2

0x526a,	// (0x00011e2f) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001c0fe) setting_slider_pane_t

0x5282,	// (0x00011e47) slider_set_pane

0x36bb,	// (0x00010280) bg_set_opt_pane_cp2

0x37e4,	// (0x000103a9) setting_slider_graphic_pane_g1

0x5298,	// (0x00011e5d) setting_slider_graphic_pane_t1

0x52a8,	// (0x00011e6d) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001c105) setting_slider_graphic_pane_t

0x52b8,	// (0x00011e7d) slider_set_pane_cp

0x36bb,	// (0x00010280) input_focus_pane_cp1

0xa5c6,	// (0x0001718b) list_set_text_pane

0x3542,	// (0x00010107) setting_text_pane_g1

0x36bb,	// (0x00010280) input_focus_pane_cp2

0x3542,	// (0x00010107) setting_code_pane_g1

0x3815,	// (0x000103da) setting_code_pane_t1

0x3823,	// (0x000103e8) set_text_pane_t1_ParamLimits

0x3823,	// (0x000103e8) set_text_pane_t1

0x3fa8,	// (0x00010b6d) set_opt_bg_pane_g1

0x3fb0,	// (0x00010b75) set_opt_bg_pane_g2

0xa59e,	// (0x00017163) set_opt_bg_pane_g3

0x3fc0,	// (0x00010b85) set_opt_bg_pane_g4

0x3fc8,	// (0x00010b8d) set_opt_bg_pane_g5

0x3fd0,	// (0x00010b95) set_opt_bg_pane_g6

0xa5a8,	// (0x0001716d) set_opt_bg_pane_g7

0xa5b2,	// (0x00017177) set_opt_bg_pane_g8

0xa5bc,	// (0x00017181) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0001c50e) set_opt_bg_pane_g

0xa591,	// (0x00017156) slider_set_pane_g1

0x6287,	// (0x00012e4c) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0001c4ff) slider_set_pane_g

0x620f,	// (0x00012dd4) volume_set_pane_g1

0x6219,	// (0x00012dde) volume_set_pane_g2

0x6223,	// (0x00012de8) volume_set_pane_g3

0x622d,	// (0x00012df2) volume_set_pane_g4

0x6237,	// (0x00012dfc) volume_set_pane_g5

0x6241,	// (0x00012e06) volume_set_pane_g6

0x624b,	// (0x00012e10) volume_set_pane_g7

0x6255,	// (0x00012e1a) volume_set_pane_g8

0x625f,	// (0x00012e24) volume_set_pane_g9

0x6269,	// (0x00012e2e) volume_set_pane_g10

0x0009,

0xf912,	// (0x0001c4d7) volume_set_pane_g

0x7632,	// (0x000141f7) indicator_pane_ParamLimits

0x7632,	// (0x000141f7) indicator_pane

0x763e,	// (0x00014203) main_idle_pane_g2_ParamLimits

0x763e,	// (0x00014203) main_idle_pane_g2

0x7666,	// (0x0001422b) main_pane_idle_g1_ParamLimits

0x7666,	// (0x0001422b) main_pane_idle_g1

0x383d,	// (0x00010402) popup_clock_digital_analogue_window_ParamLimits

0x383d,	// (0x00010402) popup_clock_digital_analogue_window

0x7674,	// (0x00014239) soft_indicator_pane_ParamLimits

0x7674,	// (0x00014239) soft_indicator_pane

0x7682,	// (0x00014247) wallpaper_pane_ParamLimits

0x7682,	// (0x00014247) wallpaper_pane

0x3542,	// (0x00010107) wallpaper_pane_g1

0x768e,	// (0x00014253) indicator_pane_g1_ParamLimits

0x768e,	// (0x00014253) indicator_pane_g1

0xaa97,	// (0x0001765c) navi_navi_icon_text_pane_srt_g1

0x386b,	// (0x00010430) soft_indicator_pane_t1

0x3885,	// (0x0001044a) aid_ps_area_pane

0x769a,	// (0x0001425f) aid_ps_clock_pane

0x3896,	// (0x0001045b) aid_ps_indicator_pane

0x38a2,	// (0x00010467) indicator_ps_pane_ParamLimits

0x38a2,	// (0x00010467) indicator_ps_pane

0x38b1,	// (0x00010476) power_save_pane_g1_ParamLimits

0x38b1,	// (0x00010476) power_save_pane_g1

0x38bd,	// (0x00010482) power_save_pane_g2_ParamLimits

0x38bd,	// (0x00010482) power_save_pane_g2

0x4e24,	// (0x000119e9) aid_navinavi_width_pane

0x3885,	// (0x0001044a) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001c10a) power_save_pane_g_ParamLimits

0xf545,	// (0x0001c10a) power_save_pane_g

0x38cb,	// (0x00010490) power_save_pane_t1_ParamLimits

0x38cb,	// (0x00010490) power_save_pane_t1

0x769a,	// (0x0001425f) aid_ps_clock_pane_ParamLimits

0x3896,	// (0x0001045b) aid_ps_indicator_pane_ParamLimits

0x38dd,	// (0x000104a2) power_save_pane_t4_ParamLimits

0x38dd,	// (0x000104a2) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001c10f) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001c10f) power_save_pane_t

0x3907,	// (0x000104cc) power_save_t3_ParamLimits

0x3907,	// (0x000104cc) power_save_t3

0x38f2,	// (0x000104b7) power_save_t2_ParamLimits

0x38f2,	// (0x000104b7) power_save_t2

0x391c,	// (0x000104e1) indicator_ps_pane_g1

0x76a8,	// (0x0001426d) ai_gene_pane_ParamLimits

0x76a8,	// (0x0001426d) ai_gene_pane

0x76b4,	// (0x00014279) ai_links_pane_ParamLimits

0x76b4,	// (0x00014279) ai_links_pane

0x76c0,	// (0x00014285) indicator_pane_cp1_ParamLimits

0x76c0,	// (0x00014285) indicator_pane_cp1

0x76cc,	// (0x00014291) main_pane_idle_g1_cp_ParamLimits

0x76cc,	// (0x00014291) main_pane_idle_g1_cp

0x3925,	// (0x000104ea) popup_ai_links_title_window

0x76d8,	// (0x0001429d) soft_indicator_pane_cp1_ParamLimits

0x76d8,	// (0x0001429d) soft_indicator_pane_cp1

0xa352,	// (0x00016f17) ai_links_pane_g1

0xa35b,	// (0x00016f20) grid_ai_links_pane

0xa337,	// (0x00016efc) ai_gene_pane_1

0xa340,	// (0x00016f05) ai_gene_pane_2

0xa349,	// (0x00016f0e) list_highlight_pane_cp4

0xa317,	// (0x00016edc) cell_ai_link_pane_ParamLimits

0xa317,	// (0x00016edc) cell_ai_link_pane

0xa30f,	// (0x00016ed4) cell_ai_link_pane_g1

0x3b19,	// (0x000106de) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x0001c4b2) cell_ai_link_pane_g

0x36bb,	// (0x00010280) grid_highlight_cp2

0x36bb,	// (0x00010280) bg_popup_sub_pane_cp1

0x393c,	// (0x00010501) popup_ai_links_title_window_t1

0xa25b,	// (0x00016e20) ai_gene_pane_1_g1_ParamLimits

0xa25b,	// (0x00016e20) ai_gene_pane_1_g1

0xa267,	// (0x00016e2c) ai_gene_pane_1_g2_ParamLimits

0xa267,	// (0x00016e2c) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0001c4a8) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0001c4a8) ai_gene_pane_1_g

0xa274,	// (0x00016e39) ai_gene_pane_1_t1_ParamLimits

0xa274,	// (0x00016e39) ai_gene_pane_1_t1

0xa2a8,	// (0x00016e6d) grid_ai_soft_ind_pane

0xa246,	// (0x00016e0b) ai_gene_pane_2_t1_ParamLimits

0xa246,	// (0x00016e0b) ai_gene_pane_2_t1

0x76e4,	// (0x000142a9) main_pane_empty_t1_ParamLimits

0x76e4,	// (0x000142a9) main_pane_empty_t1

0x76fc,	// (0x000142c1) main_pane_empty_t2_ParamLimits

0x76fc,	// (0x000142c1) main_pane_empty_t2

0x7711,	// (0x000142d6) main_pane_empty_t3_ParamLimits

0x7711,	// (0x000142d6) main_pane_empty_t3

0x7723,	// (0x000142e8) main_pane_empty_t4_ParamLimits

0x7723,	// (0x000142e8) main_pane_empty_t4

0x7735,	// (0x000142fa) main_pane_empty_t5_ParamLimits

0x7735,	// (0x000142fa) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001c114) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001c114) main_pane_empty_t

0x4066,	// (0x00010c2b) bg_popup_window_pane_ParamLimits

0x4066,	// (0x00010c2b) bg_popup_window_pane

0x9fa8,	// (0x00016b6d) find_popup_pane_cp2_ParamLimits

0x9fa8,	// (0x00016b6d) find_popup_pane_cp2

0x9fb4,	// (0x00016b79) heading_pane_ParamLimits

0x9fb4,	// (0x00016b79) heading_pane

0x36bb,	// (0x00010280) bg_popup_sub_pane

0x9f22,	// (0x00016ae7) bg_popup_window_pane_g1_ParamLimits

0x9f22,	// (0x00016ae7) bg_popup_window_pane_g1

0x9f2e,	// (0x00016af3) bg_popup_window_pane_g2_ParamLimits

0x9f2e,	// (0x00016af3) bg_popup_window_pane_g2

0x9f3a,	// (0x00016aff) bg_popup_window_pane_g3_ParamLimits

0x9f3a,	// (0x00016aff) bg_popup_window_pane_g3

0x9f46,	// (0x00016b0b) bg_popup_window_pane_g4_ParamLimits

0x9f46,	// (0x00016b0b) bg_popup_window_pane_g4

0x9f52,	// (0x00016b17) bg_popup_window_pane_g5_ParamLimits

0x9f52,	// (0x00016b17) bg_popup_window_pane_g5

0x9f5e,	// (0x00016b23) bg_popup_window_pane_g6_ParamLimits

0x9f5e,	// (0x00016b23) bg_popup_window_pane_g6

0x9f6a,	// (0x00016b2f) bg_popup_window_pane_g7_ParamLimits

0x9f6a,	// (0x00016b2f) bg_popup_window_pane_g7

0x9f76,	// (0x00016b3b) bg_popup_window_pane_g8_ParamLimits

0x9f76,	// (0x00016b3b) bg_popup_window_pane_g8

0x9f82,	// (0x00016b47) bg_popup_window_pane_g9_ParamLimits

0x9f82,	// (0x00016b47) bg_popup_window_pane_g9

0x9f8e,	// (0x00016b53) bg_popup_window_pane_g10_ParamLimits

0x9f8e,	// (0x00016b53) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0001c470) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0001c470) bg_popup_window_pane_g

0x9eb7,	// (0x00016a7c) bg_popup_heading_pane_ParamLimits

0x9eb7,	// (0x00016a7c) bg_popup_heading_pane

0x630f,	// (0x00012ed4) tabs_4_passive_pane_cp_srt_ParamLimits

0x630f,	// (0x00012ed4) tabs_4_passive_pane_cp_srt

0x6321,	// (0x00012ee6) tabs_4_passive_pane_srt_ParamLimits

0x9ecb,	// (0x00016a90) heading_pane_g2

0x6321,	// (0x00012ee6) tabs_4_passive_pane_srt

0x8b83,	// (0x00015748) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b83,	// (0x00015748) bg_passive_tab_pane_cp3_srt

0x9ed3,	// (0x00016a98) heading_pane_t1_ParamLimits

0x9ed3,	// (0x00016a98) heading_pane_t1

0x9eea,	// (0x00016aaf) heading_pane_t2_ParamLimits

0x9eea,	// (0x00016aaf) heading_pane_t2

0x0001,

0xf8a6,	// (0x0001c46b) heading_pane_t_ParamLimits

0xf8a6,	// (0x0001c46b) heading_pane_t

0x99e2,	// (0x000165a7) bg_popup_heading_pane_g1

0x9a91,	// (0x00016656) bg_popup_heading_pane_g2

0x9a9b,	// (0x00016660) bg_popup_heading_pane_g3

0x9aa5,	// (0x0001666a) bg_popup_heading_pane_g4

0x9aaf,	// (0x00016674) bg_popup_heading_pane_g5

0x9ab9,	// (0x0001667e) bg_popup_heading_pane_g6

0x9ac1,	// (0x00016686) bg_popup_heading_pane_g7

0x9ac9,	// (0x0001668e) bg_popup_heading_pane_g8

0x9ad3,	// (0x00016698) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x0001c427) bg_popup_heading_pane_g

0x90fb,	// (0x00015cc0) bg_popup_sub_pane_g1

0x910b,	// (0x00015cd0) bg_popup_sub_pane_g2

0x9103,	// (0x00015cc8) bg_popup_sub_pane_g3

0x911b,	// (0x00015ce0) bg_popup_sub_pane_g4

0x9113,	// (0x00015cd8) bg_popup_sub_pane_g5

0x9123,	// (0x00015ce8) bg_popup_sub_pane_g6

0x912b,	// (0x00015cf0) bg_popup_sub_pane_g7

0x913b,	// (0x00015d00) bg_popup_sub_pane_g8

0x9133,	// (0x00015cf8) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0001c401) bg_popup_sub_pane_g

0x375d,	// (0x00010322) bg_popup_window_pane_cp5_ParamLimits

0x375d,	// (0x00010322) bg_popup_window_pane_cp5

0x3959,	// (0x0001051e) popup_note_window_g1_ParamLimits

0x3959,	// (0x0001051e) popup_note_window_g1

0x3965,	// (0x0001052a) popup_note_window_t1_ParamLimits

0x3965,	// (0x0001052a) popup_note_window_t1

0x397b,	// (0x00010540) popup_note_window_t2_ParamLimits

0x397b,	// (0x00010540) popup_note_window_t2

0x3991,	// (0x00010556) popup_note_window_t3_ParamLimits

0x3991,	// (0x00010556) popup_note_window_t3

0x39a7,	// (0x0001056c) popup_note_window_t4_ParamLimits

0x39a7,	// (0x0001056c) popup_note_window_t4

0x39cf,	// (0x00010594) popup_note_window_t5_ParamLimits

0x39cf,	// (0x00010594) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001c11f) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001c11f) popup_note_window_t

0x3a19,	// (0x000105de) bg_popup_window_pane_cp6_ParamLimits

0x3a19,	// (0x000105de) bg_popup_window_pane_cp6

0x995e,	// (0x00016523) popup_note_image_window_g1_ParamLimits

0x995e,	// (0x00016523) popup_note_image_window_g1

0x996a,	// (0x0001652f) popup_note_image_window_g2_ParamLimits

0x996a,	// (0x0001652f) popup_note_image_window_g2

0x0001,

0xf830,	// (0x0001c3f5) popup_note_image_window_g_ParamLimits

0xf830,	// (0x0001c3f5) popup_note_image_window_g

0x9983,	// (0x00016548) popup_note_image_window_t1_ParamLimits

0x9983,	// (0x00016548) popup_note_image_window_t1

0x999c,	// (0x00016561) popup_note_image_window_t2_ParamLimits

0x999c,	// (0x00016561) popup_note_image_window_t2

0x99b5,	// (0x0001657a) popup_note_image_window_t3_ParamLimits

0x99b5,	// (0x0001657a) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0001c3fa) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0001c3fa) popup_note_image_window_t

0x981e,	// (0x000163e3) bg_popup_window_pane_cp7_ParamLimits

0x981e,	// (0x000163e3) bg_popup_window_pane_cp7

0x984e,	// (0x00016413) popup_note_wait_window_g1_ParamLimits

0x984e,	// (0x00016413) popup_note_wait_window_g1

0x985a,	// (0x0001641f) popup_note_wait_window_g2_ParamLimits

0x985a,	// (0x0001641f) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x0001c3e3) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x0001c3e3) popup_note_wait_window_g

0x9872,	// (0x00016437) popup_note_wait_window_t1_ParamLimits

0x9872,	// (0x00016437) popup_note_wait_window_t1

0x9899,	// (0x0001645e) popup_note_wait_window_t2_ParamLimits

0x9899,	// (0x0001645e) popup_note_wait_window_t2

0x98b7,	// (0x0001647c) popup_note_wait_window_t3_ParamLimits

0x98b7,	// (0x0001647c) popup_note_wait_window_t3

0x98ca,	// (0x0001648f) popup_note_wait_window_t4_ParamLimits

0x98ca,	// (0x0001648f) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0001c3ea) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0001c3ea) popup_note_wait_window_t

0x98ef,	// (0x000164b4) wait_bar_pane_ParamLimits

0x98ef,	// (0x000164b4) wait_bar_pane

0x36bb,	// (0x00010280) wait_anim_pane

0x36bb,	// (0x00010280) wait_border_pane

0x3542,	// (0x00010107) wait_anim_pane_g1

0x3542,	// (0x00010107) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0001c29e) wait_anim_pane_g

0x97c2,	// (0x00016387) wait_border_pane_g1

0x97cd,	// (0x00016392) wait_border_pane_g2

0x97d6,	// (0x0001639b) wait_border_pane_g3

0x0002,

0xf817,	// (0x0001c3dc) wait_border_pane_g

0x962c,	// (0x000161f1) bg_popup_window_pane_cp16_ParamLimits

0x962c,	// (0x000161f1) bg_popup_window_pane_cp16

0x972c,	// (0x000162f1) indicator_popup_pane_cp4_ParamLimits

0x972c,	// (0x000162f1) indicator_popup_pane_cp4

0x9740,	// (0x00016305) popup_query_data_window_t1_ParamLimits

0x9740,	// (0x00016305) popup_query_data_window_t1

0x9752,	// (0x00016317) popup_query_data_window_t2_ParamLimits

0x9752,	// (0x00016317) popup_query_data_window_t2

0x976b,	// (0x00016330) popup_query_data_window_t3_ParamLimits

0x976b,	// (0x00016330) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0001c3d5) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0001c3d5) popup_query_data_window_t

0x9785,	// (0x0001634a) query_popup_data_pane_ParamLimits

0x9785,	// (0x0001634a) query_popup_data_pane

0x9799,	// (0x0001635e) query_popup_data_pane_cp1_ParamLimits

0x9799,	// (0x0001635e) query_popup_data_pane_cp1

0x962c,	// (0x000161f1) bg_popup_window_pane_cp10_ParamLimits

0x962c,	// (0x000161f1) bg_popup_window_pane_cp10

0x965e,	// (0x00016223) indicator_popup_pane_ParamLimits

0x965e,	// (0x00016223) indicator_popup_pane

0x9680,	// (0x00016245) popup_query_code_window_t1_ParamLimits

0x9680,	// (0x00016245) popup_query_code_window_t1

0x969a,	// (0x0001625f) popup_query_code_window_t2_ParamLimits

0x969a,	// (0x0001625f) popup_query_code_window_t2

0x96e3,	// (0x000162a8) popup_query_code_window_t3_ParamLimits

0x96e3,	// (0x000162a8) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0001c3ce) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0001c3ce) popup_query_code_window_t

0x9712,	// (0x000162d7) query_popup_pane_ParamLimits

0x9712,	// (0x000162d7) query_popup_pane

0x3a19,	// (0x000105de) bg_popup_window_pane_cp15_ParamLimits

0x3a19,	// (0x000105de) bg_popup_window_pane_cp15

0x3a39,	// (0x000105fe) indicator_popup_pane_cp1_ParamLimits

0x3a39,	// (0x000105fe) indicator_popup_pane_cp1

0x3a4c,	// (0x00010611) indicator_popup_pane_cp2_ParamLimits

0x3a4c,	// (0x00010611) indicator_popup_pane_cp2

0x3a67,	// (0x0001062c) popup_query_data_code_window_g1_ParamLimits

0x3a67,	// (0x0001062c) popup_query_data_code_window_g1

0x3a7a,	// (0x0001063f) popup_query_data_code_window_t1_ParamLimits

0x3a7a,	// (0x0001063f) popup_query_data_code_window_t1

0x3a8c,	// (0x00010651) popup_query_data_code_window_t2_ParamLimits

0x3a8c,	// (0x00010651) popup_query_data_code_window_t2

0x3a9e,	// (0x00010663) popup_query_data_code_window_t3_ParamLimits

0x3a9e,	// (0x00010663) popup_query_data_code_window_t3

0x3ab4,	// (0x00010679) popup_query_data_code_window_t4_ParamLimits

0x3ab4,	// (0x00010679) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001c12a) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001c12a) popup_query_data_code_window_t

0x5faf,	// (0x00012b74) list_single_midp_graphic_pane_g3

0x3ace,	// (0x00010693) query_popup_data_pane_cp2_ParamLimits

0x3ae1,	// (0x000106a6) query_popup_pane_cp2_ParamLimits

0x3ae1,	// (0x000106a6) query_popup_pane_cp2

0x36bb,	// (0x00010280) bg_popup_window_pane_cp11

0x9610,	// (0x000161d5) heading_pane_cp5

0x9618,	// (0x000161dd) listscroll_popup_info_pane

0x36bb,	// (0x00010280) input_focus_pane_cp3

0x3afc,	// (0x000106c1) query_popup_pane_t1

0x3b0a,	// (0x000106cf) list_popup_info_pane_ParamLimits

0x3b0a,	// (0x000106cf) list_popup_info_pane

0x3b19,	// (0x000106de) listscroll_popup_info_pane_g1

0x3b21,	// (0x000106e6) scroll_pane_cp7

0x3b2b,	// (0x000106f0) popup_info_list_pane_t1_ParamLimits

0x3b2b,	// (0x000106f0) popup_info_list_pane_t1

0x3b45,	// (0x0001070a) popup_info_list_pane_t2_ParamLimits

0x3b45,	// (0x0001070a) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001c133) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001c133) popup_info_list_pane_t

0x36bb,	// (0x00010280) bg_popup_window_pane_cp12

0xaab1,	// (0x00017676) find_popup_pane

0x3775,	// (0x0001033a) bg_popup_window_pane_cp3

0x3b5f,	// (0x00010724) heading_pane_cp3

0x3b6e,	// (0x00010733) listscroll_popup_graphic_pane

0x36bb,	// (0x00010280) bg_popup_window_pane_cp4

0x7797,	// (0x0001435c) heading_pane_cp4

0x3b7e,	// (0x00010743) listscroll_popup_colour_pane

0x77a1,	// (0x00014366) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x77a1,	// (0x00014366) cell_large_graphic_colour_none_popup_pane

0x77b5,	// (0x0001437a) grid_large_graphic_colour_popup_pane_ParamLimits

0x77b5,	// (0x0001437a) grid_large_graphic_colour_popup_pane

0x77e1,	// (0x000143a6) listscroll_popup_colour_pane_g1_ParamLimits

0x77e1,	// (0x000143a6) listscroll_popup_colour_pane_g1

0x77f8,	// (0x000143bd) listscroll_popup_colour_pane_g2_ParamLimits

0x77f8,	// (0x000143bd) listscroll_popup_colour_pane_g2

0x780f,	// (0x000143d4) listscroll_popup_colour_pane_g3_ParamLimits

0x780f,	// (0x000143d4) listscroll_popup_colour_pane_g3

0x781f,	// (0x000143e4) listscroll_popup_colour_pane_g4_ParamLimits

0x781f,	// (0x000143e4) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001c138) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001c138) listscroll_popup_colour_pane_g

0x3b86,	// (0x0001074b) scroll_pane_cp6_ParamLimits

0x3b86,	// (0x0001074b) scroll_pane_cp6

0x7833,	// (0x000143f8) cell_large_graphic_colour_popup_pane_ParamLimits

0x7833,	// (0x000143f8) cell_large_graphic_colour_popup_pane

0x3b98,	// (0x0001075d) cell_large_graphic_colour_none_popup_pane_t1

0x36bb,	// (0x00010280) grid_highlight_pane_cp5

0x3ba7,	// (0x0001076c) cell_large_graphic_colour_popup_pane_g1

0x3baf,	// (0x00010774) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001c141) cell_large_graphic_colour_popup_pane_g

0x3bb7,	// (0x0001077c) cell_large_graphic_colour_popup_pane_g2_copy1

0x3bc0,	// (0x00010785) grid_highlight_pane_cp4

0x3bc8,	// (0x0001078d) bg_popup_window_pane_cp8_ParamLimits

0x3bc8,	// (0x0001078d) bg_popup_window_pane_cp8

0x3be3,	// (0x000107a8) popup_snote_single_text_window_g1_ParamLimits

0x3be3,	// (0x000107a8) popup_snote_single_text_window_g1

0x3bf5,	// (0x000107ba) popup_snote_single_text_window_t1_ParamLimits

0x3bf5,	// (0x000107ba) popup_snote_single_text_window_t1

0x3c08,	// (0x000107cd) popup_snote_single_text_window_t2_ParamLimits

0x3c08,	// (0x000107cd) popup_snote_single_text_window_t2

0x3c1b,	// (0x000107e0) popup_snote_single_text_window_t3_ParamLimits

0x3c1b,	// (0x000107e0) popup_snote_single_text_window_t3

0x3c54,	// (0x00010819) popup_snote_single_text_window_t4_ParamLimits

0x3c54,	// (0x00010819) popup_snote_single_text_window_t4

0x3c88,	// (0x0001084d) popup_snote_single_text_window_t5_ParamLimits

0x3c88,	// (0x0001084d) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001c146) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001c146) popup_snote_single_text_window_t

0x3cb7,	// (0x0001087c) bg_popup_window_pane_cp9_ParamLimits

0x3cb7,	// (0x0001087c) bg_popup_window_pane_cp9

0x3be3,	// (0x000107a8) popup_snote_single_graphic_window_g1_ParamLimits

0x3be3,	// (0x000107a8) popup_snote_single_graphic_window_g1

0x3cc5,	// (0x0001088a) popup_snote_single_graphic_window_g2_ParamLimits

0x3cc5,	// (0x0001088a) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001c151) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001c151) popup_snote_single_graphic_window_g

0x3cd1,	// (0x00010896) popup_snote_single_graphic_window_t1_ParamLimits

0x3cd1,	// (0x00010896) popup_snote_single_graphic_window_t1

0x3ce4,	// (0x000108a9) popup_snote_single_graphic_window_t2_ParamLimits

0x3ce4,	// (0x000108a9) popup_snote_single_graphic_window_t2

0x3cf7,	// (0x000108bc) popup_snote_single_graphic_window_t3_ParamLimits

0x3cf7,	// (0x000108bc) popup_snote_single_graphic_window_t3

0x3d30,	// (0x000108f5) popup_snote_single_graphic_window_t4_ParamLimits

0x3d30,	// (0x000108f5) popup_snote_single_graphic_window_t4

0x3d64,	// (0x00010929) popup_snote_single_graphic_window_t5_ParamLimits

0x3d64,	// (0x00010929) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001c156) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001c156) popup_snote_single_graphic_window_t

0xa9ef,	// (0x000175b4) grid_graphic_popup_pane_ParamLimits

0xa9ef,	// (0x000175b4) grid_graphic_popup_pane

0xaa1d,	// (0x000175e2) listscroll_popup_graphic_pane_g1_ParamLimits

0xaa1d,	// (0x000175e2) listscroll_popup_graphic_pane_g1

0xaa31,	// (0x000175f6) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa31,	// (0x000175f6) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0001c54b) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0001c54b) listscroll_popup_graphic_pane_g

0xaa45,	// (0x0001760a) scroll_pane_cp5

0xa987,	// (0x0001754c) cell_graphic_popup_pane_ParamLimits

0xa987,	// (0x0001754c) cell_graphic_popup_pane

0xa968,	// (0x0001752d) cell_graphic_popup_pane_g1

0xa970,	// (0x00017535) cell_graphic_popup_pane_g2

0x3bb7,	// (0x0001077c) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0001c544) cell_graphic_popup_pane_g

0xa979,	// (0x0001753e) cell_graphic_popup_pane_t2

0x3bc0,	// (0x00010785) grid_highlight_pane_cp3

0x3da5,	// (0x0001096a) list_gen_pane_ParamLimits

0x3da5,	// (0x0001096a) list_gen_pane

0x3dcd,	// (0x00010992) scroll_pane

0xa8c0,	// (0x00017485) bg_list_pane_g1_ParamLimits

0xa8c0,	// (0x00017485) bg_list_pane_g1

0xa8dd,	// (0x000174a2) bg_list_pane_g2_ParamLimits

0xa8dd,	// (0x000174a2) bg_list_pane_g2

0xa8f2,	// (0x000174b7) bg_list_pane_g3_ParamLimits

0xa8f2,	// (0x000174b7) bg_list_pane_g3

0xa906,	// (0x000174cb) bg_list_pane_g4_ParamLimits

0xa906,	// (0x000174cb) bg_list_pane_g4

0xa91a,	// (0x000174df) bg_list_pane_g5_ParamLimits

0xa91a,	// (0x000174df) bg_list_pane_g5

0x0004,

0xf974,	// (0x0001c539) bg_list_pane_g_ParamLimits

0xf974,	// (0x0001c539) bg_list_pane_g

0xa7e6,	// (0x000173ab) list_double2_graphic_large_graphic_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_double2_graphic_large_graphic_pane

0xa7e6,	// (0x000173ab) list_double2_graphic_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_double2_graphic_pane

0xa7e6,	// (0x000173ab) list_double2_large_graphic_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_double2_large_graphic_pane

0xa7e6,	// (0x000173ab) list_double2_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_double2_pane

0xa7e6,	// (0x000173ab) list_double_graphic_heading_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_double_graphic_heading_pane

0xa7e6,	// (0x000173ab) list_double_graphic_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_double_graphic_pane

0xa7e6,	// (0x000173ab) list_double_heading_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_double_heading_pane

0xa7e6,	// (0x000173ab) list_double_large_graphic_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_double_large_graphic_pane

0xa7e6,	// (0x000173ab) list_double_number_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_double_number_pane

0xa7e6,	// (0x000173ab) list_double_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_double_pane

0xa7e6,	// (0x000173ab) list_double_time_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_double_time_pane

0xa7e6,	// (0x000173ab) list_setting_number_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_setting_number_pane

0xa7e6,	// (0x000173ab) list_setting_pane_ParamLimits

0xa7e6,	// (0x000173ab) list_setting_pane

0xa84a,	// (0x0001740f) list_single_2graphic_pane_ParamLimits

0xa84a,	// (0x0001740f) list_single_2graphic_pane

0xa84a,	// (0x0001740f) list_single_graphic_heading_pane_ParamLimits

0xa84a,	// (0x0001740f) list_single_graphic_heading_pane

0xa84a,	// (0x0001740f) list_single_graphic_pane_ParamLimits

0xa84a,	// (0x0001740f) list_single_graphic_pane

0xa84a,	// (0x0001740f) list_single_heading_pane_ParamLimits

0xa84a,	// (0x0001740f) list_single_heading_pane

0xa8a5,	// (0x0001746a) list_single_large_graphic_pane_ParamLimits

0xa8a5,	// (0x0001746a) list_single_large_graphic_pane

0xa84a,	// (0x0001740f) list_single_number_heading_pane_ParamLimits

0xa84a,	// (0x0001740f) list_single_number_heading_pane

0xa84a,	// (0x0001740f) list_single_number_pane_ParamLimits

0xa84a,	// (0x0001740f) list_single_number_pane

0xa84a,	// (0x0001740f) list_single_pane_ParamLimits

0xa84a,	// (0x0001740f) list_single_pane

0x36bb,	// (0x00010280) list_highlight_pane_cp1

0x786a,	// (0x0001442f) list_single_pane_g1_ParamLimits

0x786a,	// (0x0001442f) list_single_pane_g1

0x7876,	// (0x0001443b) list_single_pane_g2_ParamLimits

0x7876,	// (0x0001443b) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001c168) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001c168) list_single_pane_g

0xa79f,	// (0x00017364) list_single_pane_t1_ParamLimits

0xa79f,	// (0x00017364) list_single_pane_t1

0x786a,	// (0x0001442f) list_single_number_pane_g1_ParamLimits

0x786a,	// (0x0001442f) list_single_number_pane_g1

0x7876,	// (0x0001443b) list_single_number_pane_g2_ParamLimits

0x7876,	// (0x0001443b) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001c168) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001c168) list_single_number_pane_g

0xa50d,	// (0x000170d2) list_single_number_pane_t1_ParamLimits

0xa50d,	// (0x000170d2) list_single_number_pane_t1

0xa523,	// (0x000170e8) list_single_number_pane_t2_ParamLimits

0xa523,	// (0x000170e8) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0001c4fa) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0001c4fa) list_single_number_pane_t

0x785e,	// (0x00014423) list_single_graphic_pane_g1_ParamLimits

0x785e,	// (0x00014423) list_single_graphic_pane_g1

0x786a,	// (0x0001442f) list_single_graphic_pane_g2_ParamLimits

0x786a,	// (0x0001442f) list_single_graphic_pane_g2

0x7876,	// (0x0001443b) list_single_graphic_pane_g3_ParamLimits

0x7876,	// (0x0001443b) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001c161) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001c161) list_single_graphic_pane_g

0x7882,	// (0x00014447) list_single_graphic_pane_t1_ParamLimits

0x7882,	// (0x00014447) list_single_graphic_pane_t1

0x786a,	// (0x0001442f) list_single_heading_pane_g1_ParamLimits

0x786a,	// (0x0001442f) list_single_heading_pane_g1

0x7876,	// (0x0001443b) list_single_heading_pane_g2_ParamLimits

0x7876,	// (0x0001443b) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001c168) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001c168) list_single_heading_pane_g

0x7898,	// (0x0001445d) list_single_heading_pane_t1_ParamLimits

0x7898,	// (0x0001445d) list_single_heading_pane_t1

0x78ae,	// (0x00014473) list_single_heading_pane_t2_ParamLimits

0x78ae,	// (0x00014473) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001c16d) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001c16d) list_single_heading_pane_t

0x786a,	// (0x0001442f) list_single_number_heading_pane_g1_ParamLimits

0x786a,	// (0x0001442f) list_single_number_heading_pane_g1

0x7876,	// (0x0001443b) list_single_number_heading_pane_g2_ParamLimits

0x7876,	// (0x0001443b) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001c168) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001c168) list_single_number_heading_pane_g

0x7898,	// (0x0001445d) list_single_number_heading_pane_t1_ParamLimits

0x7898,	// (0x0001445d) list_single_number_heading_pane_t1

0x78c0,	// (0x00014485) list_single_number_heading_pane_t2_ParamLimits

0x78c0,	// (0x00014485) list_single_number_heading_pane_t2

0x78d2,	// (0x00014497) list_single_number_heading_pane_t3_ParamLimits

0x78d2,	// (0x00014497) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001c172) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001c172) list_single_number_heading_pane_t

0x78e4,	// (0x000144a9) list_single_graphic_heading_pane_g1_ParamLimits

0x78e4,	// (0x000144a9) list_single_graphic_heading_pane_g1

0x78f0,	// (0x000144b5) list_single_graphic_heading_pane_g4_ParamLimits

0x78f0,	// (0x000144b5) list_single_graphic_heading_pane_g4

0x7876,	// (0x0001443b) list_single_graphic_heading_pane_g5_ParamLimits

0x7876,	// (0x0001443b) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001c179) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001c179) list_single_graphic_heading_pane_g

0x7898,	// (0x0001445d) list_single_graphic_heading_pane_t1_ParamLimits

0x7898,	// (0x0001445d) list_single_graphic_heading_pane_t1

0x7901,	// (0x000144c6) list_single_graphic_heading_pane_t2_ParamLimits

0x7901,	// (0x000144c6) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001c180) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001c180) list_single_graphic_heading_pane_t

0x7913,	// (0x000144d8) list_single_large_graphic_pane_g1_ParamLimits

0x7913,	// (0x000144d8) list_single_large_graphic_pane_g1

0x786a,	// (0x0001442f) list_single_large_graphic_pane_g2_ParamLimits

0x786a,	// (0x0001442f) list_single_large_graphic_pane_g2

0x7876,	// (0x0001443b) list_single_large_graphic_pane_g3_ParamLimits

0x7876,	// (0x0001443b) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001c185) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001c185) list_single_large_graphic_pane_g

0x97cd,	// (0x00016392) wait_border_pane_g2_copy1

0x791f,	// (0x000144e4) list_single_large_graphic_pane_g4_cp2

0x7927,	// (0x000144ec) list_single_large_graphic_pane_t1_ParamLimits

0x7927,	// (0x000144ec) list_single_large_graphic_pane_t1

0x3e22,	// (0x000109e7) list_double_pane_g1_ParamLimits

0x3e22,	// (0x000109e7) list_double_pane_g1

0x793d,	// (0x00014502) list_double_pane_g2_ParamLimits

0x793d,	// (0x00014502) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001c18c) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001c18c) list_double_pane_g

0x7949,	// (0x0001450e) list_double_pane_t1_ParamLimits

0x7949,	// (0x0001450e) list_double_pane_t1

0x795f,	// (0x00014524) list_double_pane_t2_ParamLimits

0x795f,	// (0x00014524) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001c191) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001c191) list_double_pane_t

0x7971,	// (0x00014536) list_double2_pane_g1_ParamLimits

0x7971,	// (0x00014536) list_double2_pane_g1

0x7982,	// (0x00014547) list_double2_pane_g2_ParamLimits

0x7982,	// (0x00014547) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001c196) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001c196) list_double2_pane_g

0x798e,	// (0x00014553) list_double2_pane_t1_ParamLimits

0x798e,	// (0x00014553) list_double2_pane_t1

0x79a4,	// (0x00014569) list_double2_pane_t2_ParamLimits

0x79a4,	// (0x00014569) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001c19b) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001c19b) list_double2_pane_t

0x3e22,	// (0x000109e7) list_double_number_pane_g1_ParamLimits

0x3e22,	// (0x000109e7) list_double_number_pane_g1

0x793d,	// (0x00014502) list_double_number_pane_g2_ParamLimits

0x793d,	// (0x00014502) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001c18c) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001c18c) list_double_number_pane_g

0x79b6,	// (0x0001457b) list_double_number_pane_t1_ParamLimits

0x79b6,	// (0x0001457b) list_double_number_pane_t1

0x79c8,	// (0x0001458d) list_double_number_pane_t2_ParamLimits

0x79c8,	// (0x0001458d) list_double_number_pane_t2

0x79de,	// (0x000145a3) list_double_number_pane_t3_ParamLimits

0x79de,	// (0x000145a3) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001c1a0) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001c1a0) list_double_number_pane_t

0x79f0,	// (0x000145b5) list_double_graphic_pane_g1_ParamLimits

0x79f0,	// (0x000145b5) list_double_graphic_pane_g1

0x79fc,	// (0x000145c1) list_double_graphic_pane_g2_ParamLimits

0x79fc,	// (0x000145c1) list_double_graphic_pane_g2

0x7a0b,	// (0x000145d0) list_double_graphic_pane_g3_ParamLimits

0x7a0b,	// (0x000145d0) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001c1a7) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001c1a7) list_double_graphic_pane_g

0x7a23,	// (0x000145e8) list_double_graphic_pane_t1_ParamLimits

0x7a23,	// (0x000145e8) list_double_graphic_pane_t1

0x7a39,	// (0x000145fe) list_double_graphic_pane_t2_ParamLimits

0x7a39,	// (0x000145fe) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001c1b0) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001c1b0) list_double_graphic_pane_t

0x7a4b,	// (0x00014610) list_double2_graphic_pane_g1_ParamLimits

0x7a4b,	// (0x00014610) list_double2_graphic_pane_g1

0x7a57,	// (0x0001461c) list_double2_graphic_pane_g2_ParamLimits

0x7a57,	// (0x0001461c) list_double2_graphic_pane_g2

0x7982,	// (0x00014547) list_double2_graphic_pane_g3_ParamLimits

0x7982,	// (0x00014547) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001c1b5) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001c1b5) list_double2_graphic_pane_g

0x7a63,	// (0x00014628) list_double2_graphic_pane_t1_ParamLimits

0x7a63,	// (0x00014628) list_double2_graphic_pane_t1

0x7a79,	// (0x0001463e) list_double2_graphic_pane_t2_ParamLimits

0x7a79,	// (0x0001463e) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001c1bc) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001c1bc) list_double2_graphic_pane_t

0x7a8b,	// (0x00014650) list_double_large_graphic_pane_g1_ParamLimits

0x7a8b,	// (0x00014650) list_double_large_graphic_pane_g1

0x7aaa,	// (0x0001466f) list_double_large_graphic_pane_g2_ParamLimits

0x7aaa,	// (0x0001466f) list_double_large_graphic_pane_g2

0x793d,	// (0x00014502) list_double_large_graphic_pane_g3_ParamLimits

0x793d,	// (0x00014502) list_double_large_graphic_pane_g3

0x7abb,	// (0x00014680) list_double_large_graphic_pane_g4_ParamLimits

0x7abb,	// (0x00014680) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001c1c1) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001c1c1) list_double_large_graphic_pane_g

0x7ace,	// (0x00014693) list_double_large_graphic_pane_t1_ParamLimits

0x7ace,	// (0x00014693) list_double_large_graphic_pane_t1

0x7ae7,	// (0x000146ac) list_double_large_graphic_pane_t2_ParamLimits

0x7ae7,	// (0x000146ac) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001c1cc) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001c1cc) list_double_large_graphic_pane_t

0x7af9,	// (0x000146be) list_double2_large_graphic_pane_g1_ParamLimits

0x7af9,	// (0x000146be) list_double2_large_graphic_pane_g1

0x7971,	// (0x00014536) list_double2_large_graphic_pane_g2_ParamLimits

0x7971,	// (0x00014536) list_double2_large_graphic_pane_g2

0x7982,	// (0x00014547) list_double2_large_graphic_pane_g3_ParamLimits

0x7982,	// (0x00014547) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001c1d1) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001c1d1) list_double2_large_graphic_pane_g

0x7b05,	// (0x000146ca) list_double2_large_graphic_pane_t1_ParamLimits

0x7b05,	// (0x000146ca) list_double2_large_graphic_pane_t1

0x7b1b,	// (0x000146e0) list_double2_large_graphic_pane_t2_ParamLimits

0x7b1b,	// (0x000146e0) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001c1d8) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001c1d8) list_double2_large_graphic_pane_t

0x7b2d,	// (0x000146f2) list_double_heading_pane_g1_ParamLimits

0x7b2d,	// (0x000146f2) list_double_heading_pane_g1

0x7b3e,	// (0x00014703) list_double_heading_pane_g2_ParamLimits

0x7b3e,	// (0x00014703) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001c1dd) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001c1dd) list_double_heading_pane_g

0x7b4a,	// (0x0001470f) list_double_heading_pane_t1_ParamLimits

0x7b4a,	// (0x0001470f) list_double_heading_pane_t1

0x7b60,	// (0x00014725) list_double_heading_pane_t2_ParamLimits

0x7b60,	// (0x00014725) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001c1e2) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001c1e2) list_double_heading_pane_t

0x3e01,	// (0x000109c6) list_double_graphic_heading_pane_g1_ParamLimits

0x3e01,	// (0x000109c6) list_double_graphic_heading_pane_g1

0x7b2d,	// (0x000146f2) list_double_graphic_heading_pane_g2_ParamLimits

0x7b2d,	// (0x000146f2) list_double_graphic_heading_pane_g2

0x7b3e,	// (0x00014703) list_double_graphic_heading_pane_g3_ParamLimits

0x7b3e,	// (0x00014703) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001c1e7) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001c1e7) list_double_graphic_heading_pane_g

0x7b72,	// (0x00014737) list_double_graphic_heading_pane_t1_ParamLimits

0x7b72,	// (0x00014737) list_double_graphic_heading_pane_t1

0x7b88,	// (0x0001474d) list_double_graphic_heading_pane_t2_ParamLimits

0x7b88,	// (0x0001474d) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001c1ee) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001c1ee) list_double_graphic_heading_pane_t

0x7aaa,	// (0x0001466f) list_double_time_pane_g1_ParamLimits

0x7aaa,	// (0x0001466f) list_double_time_pane_g1

0x793d,	// (0x00014502) list_double_time_pane_g2_ParamLimits

0x793d,	// (0x00014502) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001c1f3) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001c1f3) list_double_time_pane_g

0x7b9a,	// (0x0001475f) list_double_time_pane_t1_ParamLimits

0x7b9a,	// (0x0001475f) list_double_time_pane_t1

0x7bb0,	// (0x00014775) list_double_time_pane_t2_ParamLimits

0x7bb0,	// (0x00014775) list_double_time_pane_t2

0x7bc2,	// (0x00014787) list_double_time_pane_t3_ParamLimits

0x7bc2,	// (0x00014787) list_double_time_pane_t3

0x7bd4,	// (0x00014799) list_double_time_pane_t4_ParamLimits

0x7bd4,	// (0x00014799) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001c1f8) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001c1f8) list_double_time_pane_t

0x7a57,	// (0x0001461c) list_setting_pane_g1_ParamLimits

0x7a57,	// (0x0001461c) list_setting_pane_g1

0x7982,	// (0x00014547) list_setting_pane_g2_ParamLimits

0x7982,	// (0x00014547) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001c201) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001c201) list_setting_pane_g

0x7be6,	// (0x000147ab) list_setting_pane_t1_ParamLimits

0x7be6,	// (0x000147ab) list_setting_pane_t1

0x7bfd,	// (0x000147c2) list_setting_pane_t2_ParamLimits

0x7bfd,	// (0x000147c2) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001c206) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001c206) list_setting_pane_t

0x7c3c,	// (0x00014801) set_value_pane_cp_ParamLimits

0x7c3c,	// (0x00014801) set_value_pane_cp

0x7a57,	// (0x0001461c) list_setting_number_pane_g1_ParamLimits

0x7a57,	// (0x0001461c) list_setting_number_pane_g1

0x7982,	// (0x00014547) list_setting_number_pane_g2_ParamLimits

0x7982,	// (0x00014547) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001c201) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001c201) list_setting_number_pane_g

0x7c4a,	// (0x0001480f) list_setting_number_pane_t1_ParamLimits

0x7c4a,	// (0x0001480f) list_setting_number_pane_t1

0x7c5e,	// (0x00014823) list_setting_number_pane_t2_ParamLimits

0x7c5e,	// (0x00014823) list_setting_number_pane_t2

0x7c75,	// (0x0001483a) list_setting_number_pane_t3_ParamLimits

0x7c75,	// (0x0001483a) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001c20d) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001c20d) list_setting_number_pane_t

0x7c3c,	// (0x00014801) set_value_pane_ParamLimits

0x7c3c,	// (0x00014801) set_value_pane

0x3e2e,	// (0x000109f3) bg_set_opt_pane_ParamLimits

0x3e2e,	// (0x000109f3) bg_set_opt_pane

0x3e4f,	// (0x00010a14) set_value_pane_t1

0x3e5d,	// (0x00010a22) slider_set_pane_cp3

0x3e66,	// (0x00010a2b) volume_small_pane_cp

0x3e6f,	// (0x00010a34) list_form_gen_pane

0x3e78,	// (0x00010a3d) scroll_pane_cp8

0x7cb8,	// (0x0001487d) form_field_data_pane_ParamLimits

0x7cb8,	// (0x0001487d) form_field_data_pane

0x7cd6,	// (0x0001489b) form_field_data_wide_pane_ParamLimits

0x7cd6,	// (0x0001489b) form_field_data_wide_pane

0x3e99,	// (0x00010a5e) form_field_popup_pane_ParamLimits

0x3e99,	// (0x00010a5e) form_field_popup_pane

0x7cfd,	// (0x000148c2) form_field_popup_wide_pane_ParamLimits

0x7cfd,	// (0x000148c2) form_field_popup_wide_pane

0x3ebb,	// (0x00010a80) form_field_slider_pane_ParamLimits

0x3ebb,	// (0x00010a80) form_field_slider_pane

0x3ece,	// (0x00010a93) form_field_slider_wide_pane_ParamLimits

0x3ece,	// (0x00010a93) form_field_slider_wide_pane

0x3ee1,	// (0x00010aa6) data_form_pane

0x7d28,	// (0x000148ed) form_field_data_pane_t1

0x3eed,	// (0x00010ab2) input_focus_pane

0x3efb,	// (0x00010ac0) data_form_wide_pane

0x3f33,	// (0x00010af8) form_field_data_wide_pane_t1

0x3bd5,	// (0x0001079a) input_focus_pane_cp6

0x7d42,	// (0x00014907) form_field_popup_pane_t1

0x3eed,	// (0x00010ab2) input_focus_pane_cp7

0x3f52,	// (0x00010b17) list_form_pane

0x3f66,	// (0x00010b2b) form_field_popup_wide_pane_t1

0x3eed,	// (0x00010ab2) input_focus_pane_cp8

0x3f78,	// (0x00010b3d) list_form_wide_pane

0x7d64,	// (0x00014929) form_field_slider_pane_t1_ParamLimits

0x7d64,	// (0x00014929) form_field_slider_pane_t1

0x7d78,	// (0x0001493d) form_field_slider_pane_t2_ParamLimits

0x7d78,	// (0x0001493d) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001c21d) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001c21d) form_field_slider_pane_t

0x375d,	// (0x00010322) input_focus_pane_cp9_ParamLimits

0x375d,	// (0x00010322) input_focus_pane_cp9

0x7d8a,	// (0x0001494f) slider_cont_pane_ParamLimits

0x7d8a,	// (0x0001494f) slider_cont_pane

0x3f84,	// (0x00010b49) form_field_slider_wide_pane_t1_ParamLimits

0x3f84,	// (0x00010b49) form_field_slider_wide_pane_t1

0x3f96,	// (0x00010b5b) form_field_slider_wide_pane_t2_ParamLimits

0x3f96,	// (0x00010b5b) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001c222) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001c222) form_field_slider_wide_pane_t

0x375d,	// (0x00010322) input_focus_pane_cp10_ParamLimits

0x375d,	// (0x00010322) input_focus_pane_cp10

0x7d9e,	// (0x00014963) slider_cont_pane_cp1_ParamLimits

0x7d9e,	// (0x00014963) slider_cont_pane_cp1

0x7db2,	// (0x00014977) slider_form_pane_cp

0x3fa8,	// (0x00010b6d) input_focus_pane_g1

0x3fb0,	// (0x00010b75) input_focus_pane_g2

0x3fb8,	// (0x00010b7d) input_focus_pane_g3

0x3fc0,	// (0x00010b85) input_focus_pane_g4

0x3fc8,	// (0x00010b8d) input_focus_pane_g5

0x3fd0,	// (0x00010b95) input_focus_pane_g6

0x3fd8,	// (0x00010b9d) input_focus_pane_g7

0x3fe0,	// (0x00010ba5) input_focus_pane_g8

0x3fe8,	// (0x00010bad) input_focus_pane_g9

0x3542,	// (0x00010107) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001c227) input_focus_pane_g

0x97d6,	// (0x0001639b) wait_border_pane_g3_copy1

0x7dba,	// (0x0001497f) data_form_pane_t1

0x3542,	// (0x00010107) wait_anim_pane_g1_copy1

0xa780,	// (0x00017345) data_form_wide_pane_t1

0x7dd9,	// (0x0001499e) list_form_graphic_pane_cp_ParamLimits

0x7dd9,	// (0x0001499e) list_form_graphic_pane_cp

0xa755,	// (0x0001731a) slider_form_pane_g1

0xa75e,	// (0x00017323) slider_form_pane_g2

0x0006,

0xf965,	// (0x0001c52a) slider_form_pane_g

0x3ff0,	// (0x00010bb5) list_form_graphic_pane_ParamLimits

0x3ff0,	// (0x00010bb5) list_form_graphic_pane

0x4002,	// (0x00010bc7) list_form_graphic_pane_g1

0x400a,	// (0x00010bcf) list_form_graphic_pane_t1_ParamLimits

0x400a,	// (0x00010bcf) list_form_graphic_pane_t1

0x3775,	// (0x0001033a) list_highlight_pane_cp5_ParamLimits

0x3775,	// (0x0001033a) list_highlight_pane_cp5

0x7dee,	// (0x000149b3) find_pane_g1

0x401f,	// (0x00010be4) input_find_pane

0x7df7,	// (0x000149bc) input_find_pane_g1_ParamLimits

0x7df7,	// (0x000149bc) input_find_pane_g1

0x7e03,	// (0x000149c8) input_find_pane_t1_ParamLimits

0x7e03,	// (0x000149c8) input_find_pane_t1

0x7e18,	// (0x000149dd) input_find_pane_t2_ParamLimits

0x7e18,	// (0x000149dd) input_find_pane_t2

0x0001,

0xf677,	// (0x0001c23c) input_find_pane_t_ParamLimits

0xf677,	// (0x0001c23c) input_find_pane_t

0x4028,	// (0x00010bed) input_focus_pane_cp5_ParamLimits

0x4028,	// (0x00010bed) input_focus_pane_cp5

0x403b,	// (0x00010c00) bg_popup_window_pane_cp2_ParamLimits

0x403b,	// (0x00010c00) bg_popup_window_pane_cp2

0x4048,	// (0x00010c0d) listscroll_menu_pane_ParamLimits

0x4048,	// (0x00010c0d) listscroll_menu_pane

0x7e39,	// (0x000149fe) popup_submenu_window_ParamLimits

0x7e39,	// (0x000149fe) popup_submenu_window

0x4054,	// (0x00010c19) find_popup_pane_g1

0x405c,	// (0x00010c21) input_popup_find_pane_cp

0x4066,	// (0x00010c2b) input_focus_pane_cp4_ParamLimits

0x4066,	// (0x00010c2b) input_focus_pane_cp4

0x4074,	// (0x00010c39) input_popup_find_pane_t1_ParamLimits

0x4074,	// (0x00010c39) input_popup_find_pane_t1

0x36bb,	// (0x00010280) bg_popup_sub_pane_cp

0x40a2,	// (0x00010c67) listscroll_popup_sub_pane

0x40aa,	// (0x00010c6f) list_submenu_pane_ParamLimits

0x40aa,	// (0x00010c6f) list_submenu_pane

0x40bb,	// (0x00010c80) scroll_pane_cp4

0x40c3,	// (0x00010c88) list_single_popup_submenu_pane_ParamLimits

0x40c3,	// (0x00010c88) list_single_popup_submenu_pane

0x40d8,	// (0x00010c9d) list_single_popup_submenu_pane_g1

0x40e0,	// (0x00010ca5) list_single_popup_submenu_pane_t1_ParamLimits

0x40e0,	// (0x00010ca5) list_single_popup_submenu_pane_t1

0x3775,	// (0x0001033a) bg_active_tab_pane_cp1_ParamLimits

0x3775,	// (0x0001033a) bg_active_tab_pane_cp1

0x7e77,	// (0x00014a3c) tabs_2_active_pane_g1

0x7e7f,	// (0x00014a44) tabs_2_active_pane_t1

0x3775,	// (0x0001033a) bg_passive_tab_pane_cp1_ParamLimits

0x3775,	// (0x0001033a) bg_passive_tab_pane_cp1

0x7e77,	// (0x00014a3c) tabs_2_passive_pane_g1

0x7e7f,	// (0x00014a44) tabs_2_passive_pane_t1

0x7e91,	// (0x00014a56) bg_active_tab_pane_cp4

0x7e9f,	// (0x00014a64) tabs_2_long_active_pane_t1

0x7eb2,	// (0x00014a77) bg_passive_tab_pane_cp4

0x5fb7,	// (0x00012b7c) list_single_midp_graphic_pane_g4_ParamLimits

0x7e91,	// (0x00014a56) bg_active_tab_pane_cp5

0x7ebe,	// (0x00014a83) tabs_3_long_active_pane_t1

0x7eb2,	// (0x00014a77) bg_passive_tab_pane_cp5

0x5fb7,	// (0x00012b7c) list_single_midp_graphic_pane_g4

0x3775,	// (0x0001033a) bg_popup_window_pane_cp13_ParamLimits

0x3775,	// (0x0001033a) bg_popup_window_pane_cp13

0x40fe,	// (0x00010cc3) listscroll_popup_fast_pane_ParamLimits

0x40fe,	// (0x00010cc3) listscroll_popup_fast_pane

0x410d,	// (0x00010cd2) grid_popup_fast_pane_ParamLimits

0x410d,	// (0x00010cd2) grid_popup_fast_pane

0x411f,	// (0x00010ce4) scroll_pane_cp9_ParamLimits

0x411f,	// (0x00010ce4) scroll_pane_cp9

0xc6c5,	// (0x0001928a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6c5,	// (0x0001928a) list_single_graphic_hl_pane_t1_cp2

0x4143,	// (0x00010d08) input_focus_pane_cp20_ParamLimits

0x4143,	// (0x00010d08) input_focus_pane_cp20

0x4151,	// (0x00010d16) query_popup_data_pane_t1_ParamLimits

0x4151,	// (0x00010d16) query_popup_data_pane_t1

0x4164,	// (0x00010d29) query_popup_data_pane_t2_ParamLimits

0x4164,	// (0x00010d29) query_popup_data_pane_t2

0x41aa,	// (0x00010d6f) query_popup_data_pane_t3_ParamLimits

0x41aa,	// (0x00010d6f) query_popup_data_pane_t3

0x41eb,	// (0x00010db0) query_popup_data_pane_t4_ParamLimits

0x41eb,	// (0x00010db0) query_popup_data_pane_t4

0x4227,	// (0x00010dec) query_popup_data_pane_t5_ParamLimits

0x4227,	// (0x00010dec) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001c241) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001c241) query_popup_data_pane_t

0x3fa8,	// (0x00010b6d) bg_set_opt_pane_g1

0x3fb0,	// (0x00010b75) bg_set_opt_pane_g2

0x3fb8,	// (0x00010b7d) bg_set_opt_pane_g3

0x3fc0,	// (0x00010b85) bg_set_opt_pane_g4

0x3fc8,	// (0x00010b8d) bg_set_opt_pane_g5

0x3fd0,	// (0x00010b95) bg_set_opt_pane_g6

0x3fd8,	// (0x00010b9d) bg_set_opt_pane_g7

0x3fe0,	// (0x00010ba5) bg_set_opt_pane_g8

0x3fe8,	// (0x00010bad) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001c24c) bg_set_opt_pane_g

0x556a,	// (0x0001212f) control_top_pane_stacon_ParamLimits

0x556a,	// (0x0001212f) control_top_pane_stacon

0x55bd,	// (0x00012182) signal_pane_stacon_ParamLimits

0x55bd,	// (0x00012182) signal_pane_stacon

0x84dd,	// (0x000150a2) stacon_top_pane_g1_ParamLimits

0x84dd,	// (0x000150a2) stacon_top_pane_g1

0x55e2,	// (0x000121a7) title_pane_stacon_ParamLimits

0x55e2,	// (0x000121a7) title_pane_stacon

0x560c,	// (0x000121d1) uni_indicator_pane_stacon_ParamLimits

0x560c,	// (0x000121d1) uni_indicator_pane_stacon

0x5621,	// (0x000121e6) battery_pane_stacon_ParamLimits

0x5621,	// (0x000121e6) battery_pane_stacon

0x5665,	// (0x0001222a) control_bottom_pane_stacon_ParamLimits

0x5665,	// (0x0001222a) control_bottom_pane_stacon

0x5688,	// (0x0001224d) navi_pane_stacon_ParamLimits

0x5688,	// (0x0001224d) navi_pane_stacon

0x84ff,	// (0x000150c4) stacon_bottom_pane_g1_ParamLimits

0x84ff,	// (0x000150c4) stacon_bottom_pane_g1

0x52c0,	// (0x00011e85) aid_levels_signal_lsc_ParamLimits

0x52c0,	// (0x00011e85) aid_levels_signal_lsc

0x52d7,	// (0x00011e9c) signal_pane_stacon_g1_ParamLimits

0x52d7,	// (0x00011e9c) signal_pane_stacon_g1

0x52eb,	// (0x00011eb0) signal_pane_stacon_g2_ParamLimits

0x52eb,	// (0x00011eb0) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001c25f) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001c25f) signal_pane_stacon_g

0x5320,	// (0x00011ee5) title_pane_stacon_t1_ParamLimits

0x5320,	// (0x00011ee5) title_pane_stacon_t1

0x4304,	// (0x00010ec9) uni_indicator_pane_stacon_g1

0x430e,	// (0x00010ed3) uni_indicator_pane_stacon_g2

0x42f0,	// (0x00010eb5) uni_indicator_pane_stacon_g3

0x42fa,	// (0x00010ebf) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0001c26b) uni_indicator_pane_stacon_g

0x5345,	// (0x00011f0a) control_top_pane_stacon_g1

0x534d,	// (0x00011f12) control_top_pane_stacon_t1_ParamLimits

0x534d,	// (0x00011f12) control_top_pane_stacon_t1

0x5384,	// (0x00011f49) aid_levels_battery_lsc_ParamLimits

0x5384,	// (0x00011f49) aid_levels_battery_lsc

0x539c,	// (0x00011f61) battery_pane_stacon_g1_ParamLimits

0x539c,	// (0x00011f61) battery_pane_stacon_g1

0x53ae,	// (0x00011f73) battery_pane_stacon_g2_ParamLimits

0x53ae,	// (0x00011f73) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001c274) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001c274) battery_pane_stacon_g

0x53ec,	// (0x00011fb1) navi_icon_pane_stacon

0x5400,	// (0x00011fc5) navi_navi_pane_stacon

0x53ec,	// (0x00011fb1) navi_text_pane_stacon

0x5416,	// (0x00011fdb) control_bottom_pane_stacon_g1

0x541e,	// (0x00011fe3) control_bottom_pane_stacon_t1_ParamLimits

0x541e,	// (0x00011fe3) control_bottom_pane_stacon_t1

0x7ed0,	// (0x00014a95) grid_app_pane_ParamLimits

0x7ed0,	// (0x00014a95) grid_app_pane

0x7ef2,	// (0x00014ab7) scroll_pane_cp15_ParamLimits

0x7ef2,	// (0x00014ab7) scroll_pane_cp15

0x7f05,	// (0x00014aca) cell_app_pane_ParamLimits

0x7f05,	// (0x00014aca) cell_app_pane

0x7f31,	// (0x00014af6) cell_app_pane_g1_ParamLimits

0x7f31,	// (0x00014af6) cell_app_pane_g1

0x7f55,	// (0x00014b1a) cell_app_pane_g2_ParamLimits

0x7f55,	// (0x00014b1a) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0001c279) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0001c279) cell_app_pane_g

0x7f61,	// (0x00014b26) cell_app_pane_t1_ParamLimits

0x7f61,	// (0x00014b26) cell_app_pane_t1

0x7f92,	// (0x00014b57) grid_highlight_pane_ParamLimits

0x7f92,	// (0x00014b57) grid_highlight_pane

0x3fa8,	// (0x00010b6d) cell_highlight_pane_g1

0x3fb0,	// (0x00010b75) cell_highlight_pane_g2

0x3fb8,	// (0x00010b7d) cell_highlight_pane_g3

0x3fc0,	// (0x00010b85) cell_highlight_pane_g4

0x3fc8,	// (0x00010b8d) cell_highlight_pane_g5

0x3fd0,	// (0x00010b95) cell_highlight_pane_g6

0x3fd8,	// (0x00010b9d) cell_highlight_pane_g7

0x3fe0,	// (0x00010ba5) cell_highlight_pane_g8

0x3fe8,	// (0x00010bad) cell_highlight_pane_g9

0x3542,	// (0x00010107) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001c227) cell_highlight_pane_g

0x7fa3,	// (0x00014b68) bg_scroll_pane

0x5468,	// (0x0001202d) scroll_handle_pane

0x7fea,	// (0x00014baf) scroll_bg_pane_g1

0x7fff,	// (0x00014bc4) scroll_bg_pane_g2

0x8017,	// (0x00014bdc) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001c27e) scroll_bg_pane_g

0x802c,	// (0x00014bf1) scroll_handle_focus_pane_ParamLimits

0x802c,	// (0x00014bf1) scroll_handle_focus_pane

0x7fea,	// (0x00014baf) scroll_handle_pane_g1

0x8039,	// (0x00014bfe) scroll_handle_pane_g2

0x8017,	// (0x00014bdc) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001c285) scroll_handle_pane_g

0x4066,	// (0x00010c2b) bg_popup_sub_pane_cp21_ParamLimits

0x4066,	// (0x00010c2b) bg_popup_sub_pane_cp21

0x804d,	// (0x00014c12) popup_fep_japan_predictive_window_t1_ParamLimits

0x804d,	// (0x00014c12) popup_fep_japan_predictive_window_t1

0x8064,	// (0x00014c29) popup_fep_japan_predictive_window_t2_ParamLimits

0x8064,	// (0x00014c29) popup_fep_japan_predictive_window_t2

0x8097,	// (0x00014c5c) popup_fep_japan_predictive_window_t3_ParamLimits

0x8097,	// (0x00014c5c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0001c28c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0001c28c) popup_fep_japan_predictive_window_t

0x36bb,	// (0x00010280) bg_popup_sub_pane_cp23

0x80ce,	// (0x00014c93) listscroll_japin_cand_pane

0x80d6,	// (0x00014c9b) popup_fep_japan_candidate_window_t1

0x80e4,	// (0x00014ca9) candidate_pane_ParamLimits

0x80e4,	// (0x00014ca9) candidate_pane

0x80f6,	// (0x00014cbb) scroll_pane_cp30

0x8100,	// (0x00014cc5) list_single_popup_jap_candidate_pane_ParamLimits

0x8100,	// (0x00014cc5) list_single_popup_jap_candidate_pane

0x36bb,	// (0x00010280) list_highlight_pane_cp30

0x8114,	// (0x00014cd9) list_single_popup_jap_candidate_pane_t1

0x8123,	// (0x00014ce8) level_1_signal

0x8130,	// (0x00014cf5) level_2_signal

0x813d,	// (0x00014d02) level_3_signal

0x814a,	// (0x00014d0f) level_4_signal

0x8157,	// (0x00014d1c) level_5_signal

0x8164,	// (0x00014d29) level_6_signal

0x8171,	// (0x00014d36) level_7_signal

0x8123,	// (0x00014ce8) level_1_battery

0x8130,	// (0x00014cf5) level_2_battery

0x813d,	// (0x00014d02) level_3_battery

0x814a,	// (0x00014d0f) level_4_battery

0x8157,	// (0x00014d1c) level_5_battery

0x8164,	// (0x00014d29) level_6_battery

0x8171,	// (0x00014d36) level_7_battery

0x8196,	// (0x00014d5b) list_menu_pane_ParamLimits

0x8196,	// (0x00014d5b) list_menu_pane

0x81ac,	// (0x00014d71) scroll_pane_cp25_ParamLimits

0x81ac,	// (0x00014d71) scroll_pane_cp25

0x81c5,	// (0x00014d8a) list_double2_graphic_pane_cp2_ParamLimits

0x81c5,	// (0x00014d8a) list_double2_graphic_pane_cp2

0x81c5,	// (0x00014d8a) list_double2_large_graphic_pane_cp2_ParamLimits

0x81c5,	// (0x00014d8a) list_double2_large_graphic_pane_cp2

0x81c5,	// (0x00014d8a) list_double2_pane_cp2_ParamLimits

0x81c5,	// (0x00014d8a) list_double2_pane_cp2

0x81c5,	// (0x00014d8a) list_double_graphic_pane_cp2_ParamLimits

0x81c5,	// (0x00014d8a) list_double_graphic_pane_cp2

0x81c5,	// (0x00014d8a) list_double_large_graphic_pane_cp2_ParamLimits

0x81c5,	// (0x00014d8a) list_double_large_graphic_pane_cp2

0x81c5,	// (0x00014d8a) list_double_number_pane_cp2_ParamLimits

0x81c5,	// (0x00014d8a) list_double_number_pane_cp2

0x81c5,	// (0x00014d8a) list_double_pane_cp2_ParamLimits

0x81c5,	// (0x00014d8a) list_double_pane_cp2

0x81eb,	// (0x00014db0) list_single_2graphic_pane_cp2_ParamLimits

0x81eb,	// (0x00014db0) list_single_2graphic_pane_cp2

0x81eb,	// (0x00014db0) list_single_graphic_heading_pane_cp2_ParamLimits

0x81eb,	// (0x00014db0) list_single_graphic_heading_pane_cp2

0x81eb,	// (0x00014db0) list_single_graphic_pane_cp2_ParamLimits

0x81eb,	// (0x00014db0) list_single_graphic_pane_cp2

0x81eb,	// (0x00014db0) list_single_heading_pane_cp2_ParamLimits

0x81eb,	// (0x00014db0) list_single_heading_pane_cp2

0x8208,	// (0x00014dcd) list_single_large_graphic_pane_cp2_ParamLimits

0x8208,	// (0x00014dcd) list_single_large_graphic_pane_cp2

0x81eb,	// (0x00014db0) list_single_number_heading_pane_cp2_ParamLimits

0x81eb,	// (0x00014db0) list_single_number_heading_pane_cp2

0x81eb,	// (0x00014db0) list_single_number_pane_cp2_ParamLimits

0x81eb,	// (0x00014db0) list_single_number_pane_cp2

0x8218,	// (0x00014ddd) list_single_pane_cp2_ParamLimits

0x8218,	// (0x00014ddd) list_single_pane_cp2

0x8293,	// (0x00014e58) bg_popup_sub_pane_cp22

0x551a,	// (0x000120df) popup_side_volume_key_window_g1

0x5544,	// (0x00012109) popup_side_volume_key_window_t1

0x5562,	// (0x00012127) volume_small_pane_cp1

0x375d,	// (0x00010322) bg_popup_sub_pane_cp24_ParamLimits

0x375d,	// (0x00010322) bg_popup_sub_pane_cp24

0x82a9,	// (0x00014e6e) fep_china_uni_candidate_pane_ParamLimits

0x82a9,	// (0x00014e6e) fep_china_uni_candidate_pane

0x82bd,	// (0x00014e82) fep_china_uni_entry_pane

0x82cd,	// (0x00014e92) popup_fep_china_uni_window_g1

0x82e9,	// (0x00014eae) fep_china_uni_entry_pane_g1

0x82f3,	// (0x00014eb8) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0001c2bd) fep_china_uni_entry_pane_g

0x82fd,	// (0x00014ec2) fep_entry_item_pane

0x8307,	// (0x00014ecc) fep_candidate_item_pane

0x830f,	// (0x00014ed4) fep_china_uni_candidate_pane_g1

0x8319,	// (0x00014ede) fep_china_uni_candidate_pane_g2

0x8321,	// (0x00014ee6) fep_china_uni_candidate_pane_g3

0x8329,	// (0x00014eee) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0001c2c2) fep_china_uni_candidate_pane_g

0x3542,	// (0x00010107) fep_entry_item_pane_g1

0x8333,	// (0x00014ef8) fep_entry_item_pane_t1_ParamLimits

0x8333,	// (0x00014ef8) fep_entry_item_pane_t1

0x8349,	// (0x00014f0e) fep_candidate_item_pane_t1_ParamLimits

0x8349,	// (0x00014f0e) fep_candidate_item_pane_t1

0x835e,	// (0x00014f23) fep_candidate_item_pane_t2_ParamLimits

0x835e,	// (0x00014f23) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0001c2cb) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0001c2cb) fep_candidate_item_pane_t

0x3775,	// (0x0001033a) list_highlight_pane_cp31_ParamLimits

0x3775,	// (0x0001033a) list_highlight_pane_cp31

0x8370,	// (0x00014f35) level_1_signal_lsc

0x8379,	// (0x00014f3e) level_2_signal_lsc

0x8382,	// (0x00014f47) level_3_signal_lsc

0x838b,	// (0x00014f50) level_4_signal_lsc

0x8394,	// (0x00014f59) level_5_signal_lsc

0x839d,	// (0x00014f62) level_6_signal_lsc

0x83a6,	// (0x00014f6b) level_7_signal_lsc

0x83a6,	// (0x00014f6b) level_1_battery_lsc

0x83af,	// (0x00014f74) level_2_battery_lsc

0x83b8,	// (0x00014f7d) level_3_battery_lsc

0x83c1,	// (0x00014f86) level_4_battery_lsc

0x83ca,	// (0x00014f8f) level_5_battery_lsc

0x83d3,	// (0x00014f98) level_6_battery_lsc

0x8370,	// (0x00014f35) level_7_battery_lsc

0x83dc,	// (0x00014fa1) scroll_handle_focus_pane_g1

0x83e5,	// (0x00014faa) scroll_handle_focus_pane_g2

0x83ee,	// (0x00014fb3) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0001c2d0) scroll_handle_focus_pane_g

0x83f7,	// (0x00014fbc) list_single_2graphic_pane_g1_ParamLimits

0x83f7,	// (0x00014fbc) list_single_2graphic_pane_g1

0x78f0,	// (0x000144b5) list_single_2graphic_pane_g2_ParamLimits

0x78f0,	// (0x000144b5) list_single_2graphic_pane_g2

0x7876,	// (0x0001443b) list_single_2graphic_pane_g3_ParamLimits

0x7876,	// (0x0001443b) list_single_2graphic_pane_g3

0x8403,	// (0x00014fc8) list_single_2graphic_pane_g4_ParamLimits

0x8403,	// (0x00014fc8) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0001c2d7) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0001c2d7) list_single_2graphic_pane_g

0x8414,	// (0x00014fd9) list_single_2graphic_pane_t1_ParamLimits

0x8414,	// (0x00014fd9) list_single_2graphic_pane_t1

0x8442,	// (0x00015007) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8442,	// (0x00015007) list_double2_graphic_large_graphic_pane_g1

0x7971,	// (0x00014536) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7971,	// (0x00014536) list_double2_graphic_large_graphic_pane_g2

0x7982,	// (0x00014547) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7982,	// (0x00014547) list_double2_graphic_large_graphic_pane_g3

0x8454,	// (0x00015019) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8454,	// (0x00015019) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0001c2e0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0001c2e0) list_double2_graphic_large_graphic_pane_g

0x8460,	// (0x00015025) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8460,	// (0x00015025) list_double2_graphic_large_graphic_pane_t1

0x8476,	// (0x0001503b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8476,	// (0x0001503b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0001c2e9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0001c2e9) list_double2_graphic_large_graphic_pane_t

0x85c2,	// (0x00015187) popup_fast_swap_window_ParamLimits

0x85c2,	// (0x00015187) popup_fast_swap_window

0x85e0,	// (0x000151a5) popup_side_volume_key_window

0x85fe,	// (0x000151c3) stacon_top_pane

0x8608,	// (0x000151cd) status_pane_ParamLimits

0x8608,	// (0x000151cd) status_pane

0x3538,	// (0x000100fd) status_small_pane

0x36bb,	// (0x00010280) control_pane

0x36bb,	// (0x00010280) stacon_bottom_pane

0x3e78,	// (0x00010a3d) scroll_pane_cp121

0x3e6f,	// (0x00010a34) set_content_pane

0x8488,	// (0x0001504d) bg_active_tab_pane_g1_cp1

0x8491,	// (0x00015056) bg_active_tab_pane_g2_cp1

0x849a,	// (0x0001505f) bg_active_tab_pane_g3_cp1

0x8488,	// (0x0001504d) bg_passive_tab_pane_g1_cp1

0x8491,	// (0x00015056) bg_passive_tab_pane_g2_cp1

0x849a,	// (0x0001505f) bg_passive_tab_pane_g3_cp1

0x84a3,	// (0x00015068) bg_active_tab_pane_g1_cp2

0x8491,	// (0x00015056) bg_active_tab_pane_g2_cp2

0x84ac,	// (0x00015071) bg_active_tab_pane_g3_cp2

0x84a3,	// (0x00015068) bg_passive_tab_pane_g1_cp2

0x8491,	// (0x00015056) bg_passive_tab_pane_g2_cp2

0x84ac,	// (0x00015071) bg_passive_tab_pane_g3_cp2

0x84b5,	// (0x0001507a) bg_active_tab_pane_g1_cp3

0x8491,	// (0x00015056) bg_active_tab_pane_g2_cp3

0x84be,	// (0x00015083) bg_active_tab_pane_g3_cp3

0x84b5,	// (0x0001507a) bg_passive_tab_pane_g1_cp3

0x8491,	// (0x00015056) bg_passive_tab_pane_g2_cp3

0x84be,	// (0x00015083) bg_passive_tab_pane_g3_cp3

0x84c7,	// (0x0001508c) bg_active_tab_pane_g1_cp4

0x8491,	// (0x00015056) bg_active_tab_pane_g2_cp4

0x84d2,	// (0x00015097) bg_active_tab_pane_g3_cp4

0x84c7,	// (0x0001508c) bg_passive_tab_pane_g1_cp4

0x8491,	// (0x00015056) bg_passive_tab_pane_g2_cp4

0x84d2,	// (0x00015097) bg_passive_tab_pane_g3_cp4

0x851b,	// (0x000150e0) bg_active_tab_pane_g1_cp5

0x8491,	// (0x00015056) bg_active_tab_pane_g2_cp5

0x8524,	// (0x000150e9) bg_active_tab_pane_g3_cp5

0x851b,	// (0x000150e0) bg_passive_tab_pane_g1_cp5

0x8491,	// (0x00015056) bg_passive_tab_pane_g2_cp5

0x8524,	// (0x000150e9) bg_passive_tab_pane_g3_cp5

0x852d,	// (0x000150f2) list_set_graphic_pane_ParamLimits

0x852d,	// (0x000150f2) list_set_graphic_pane

0x36bb,	// (0x00010280) bg_set_opt_pane_cp4

0x8543,	// (0x00015108) list_set_graphic_pane_g1_ParamLimits

0x8543,	// (0x00015108) list_set_graphic_pane_g1

0x854f,	// (0x00015114) list_set_graphic_pane_g2_ParamLimits

0x854f,	// (0x00015114) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001c2ee) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001c2ee) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0001c66f) volume_small_pane_cp_g

0x8573,	// (0x00015138) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8573,	// (0x00015138) list_double2_large_graphic_pane_g1_cp2

0x8581,	// (0x00015146) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8581,	// (0x00015146) list_double2_large_graphic_pane_g2_cp2

0x8592,	// (0x00015157) list_double2_large_graphic_pane_g3_cp2

0x859a,	// (0x0001515f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x859a,	// (0x0001515f) list_double2_large_graphic_pane_t1_cp2

0x85b0,	// (0x00015175) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x85b0,	// (0x00015175) list_double2_large_graphic_pane_t2_cp2

0xa2ba,	// (0x00016e7f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa2ba,	// (0x00016e7f) list_double_large_graphic_pane_g1_cp2

0xa2cd,	// (0x00016e92) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa2cd,	// (0x00016e92) list_double_large_graphic_pane_g2_cp2

0x8726,	// (0x000152eb) list_double_large_graphic_pane_g3_cp2

0xa2de,	// (0x00016ea3) list_double_large_graphic_pane_g4_cp

0xa2e6,	// (0x00016eab) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa2e6,	// (0x00016eab) list_double_large_graphic_pane_t1_cp2

0xa2fd,	// (0x00016ec2) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa2fd,	// (0x00016ec2) list_double_large_graphic_pane_t2_cp2

0x8616,	// (0x000151db) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8616,	// (0x000151db) list_double2_graphic_pane_g1_cp2

0x8624,	// (0x000151e9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8624,	// (0x000151e9) list_double2_graphic_pane_g2_cp2

0x8635,	// (0x000151fa) list_double2_graphic_pane_g3_cp2

0x863f,	// (0x00015204) list_double2_graphic_pane_t1_cp2_ParamLimits

0x863f,	// (0x00015204) list_double2_graphic_pane_t1_cp2

0x8655,	// (0x0001521a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8655,	// (0x0001521a) list_double2_graphic_pane_t2_cp2

0x8667,	// (0x0001522c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8667,	// (0x0001522c) list_single_number_heading_pane_g1_cp2

0x8673,	// (0x00015238) list_single_number_heading_pane_g2_cp2

0x867b,	// (0x00015240) list_single_number_heading_pane_t1_cp2_ParamLimits

0x867b,	// (0x00015240) list_single_number_heading_pane_t1_cp2

0x8691,	// (0x00015256) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8691,	// (0x00015256) list_single_number_heading_pane_t2_cp2

0x86a5,	// (0x0001526a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x86a5,	// (0x0001526a) list_single_number_heading_pane_t3_cp2

0x8667,	// (0x0001522c) list_single_heading_pane_g1_cp2_ParamLimits

0x8667,	// (0x0001522c) list_single_heading_pane_g1_cp2

0x8673,	// (0x00015238) list_single_heading_pane_g2_cp2

0x867b,	// (0x00015240) list_single_heading_pane_t1_cp2_ParamLimits

0x867b,	// (0x00015240) list_single_heading_pane_t1_cp2

0xa0b4,	// (0x00016c79) list_single_heading_pane_t2_cp2_ParamLimits

0xa0b4,	// (0x00016c79) list_single_heading_pane_t2_cp2

0x9ffc,	// (0x00016bc1) list_double_graphic_pane_g1_cp2_ParamLimits

0x9ffc,	// (0x00016bc1) list_double_graphic_pane_g1_cp2

0xa008,	// (0x00016bcd) list_double_graphic_pane_g2_cp2_ParamLimits

0xa008,	// (0x00016bcd) list_double_graphic_pane_g2_cp2

0xa017,	// (0x00016bdc) list_double_graphic_pane_g3_cp2

0xa01f,	// (0x00016be4) list_double_graphic_pane_t1_cp2_ParamLimits

0xa01f,	// (0x00016be4) list_double_graphic_pane_t1_cp2

0xa035,	// (0x00016bfa) list_double_graphic_pane_t2_cp2_ParamLimits

0xa035,	// (0x00016bfa) list_double_graphic_pane_t2_cp2

0x871a,	// (0x000152df) list_double_number_pane_g1_cp2_ParamLimits

0x871a,	// (0x000152df) list_double_number_pane_g1_cp2

0x8726,	// (0x000152eb) list_double_number_pane_g2_cp2

0x9fc0,	// (0x00016b85) list_double_number_pane_t1_cp2_ParamLimits

0x9fc0,	// (0x00016b85) list_double_number_pane_t1_cp2

0x9fd4,	// (0x00016b99) list_double_number_pane_t2_cp2_ParamLimits

0x9fd4,	// (0x00016b99) list_double_number_pane_t2_cp2

0x9fea,	// (0x00016baf) list_double_number_pane_t3_cp2_ParamLimits

0x9fea,	// (0x00016baf) list_double_number_pane_t3_cp2

0x9ea9,	// (0x00016a6e) list_single_graphic_pane_g1_cp2_ParamLimits

0x9ea9,	// (0x00016a6e) list_single_graphic_pane_g1_cp2

0x878b,	// (0x00015350) list_single_graphic_pane_g2_cp2_ParamLimits

0x878b,	// (0x00015350) list_single_graphic_pane_g2_cp2

0x8797,	// (0x0001535c) list_single_graphic_pane_g3_cp2

0x9e7f,	// (0x00016a44) list_single_graphic_pane_t1_cp2_ParamLimits

0x9e7f,	// (0x00016a44) list_single_graphic_pane_t1_cp2

0x878b,	// (0x00015350) list_single_number_pane_g1_cp2_ParamLimits

0x878b,	// (0x00015350) list_single_number_pane_g1_cp2

0x8797,	// (0x0001535c) list_single_number_pane_g2_cp2

0x9e7f,	// (0x00016a44) list_single_number_pane_t1_cp2_ParamLimits

0x9e7f,	// (0x00016a44) list_single_number_pane_t1_cp2

0x9e95,	// (0x00016a5a) list_single_number_pane_t2_cp2_ParamLimits

0x9e95,	// (0x00016a5a) list_single_number_pane_t2_cp2

0x8581,	// (0x00015146) list_double2_pane_g1_cp2_ParamLimits

0x8581,	// (0x00015146) list_double2_pane_g1_cp2

0x8592,	// (0x00015157) list_double2_pane_g2_cp2

0x86f2,	// (0x000152b7) list_double2_pane_t1_cp2_ParamLimits

0x86f2,	// (0x000152b7) list_double2_pane_t1_cp2

0x8708,	// (0x000152cd) list_double2_pane_t2_cp2_ParamLimits

0x8708,	// (0x000152cd) list_double2_pane_t2_cp2

0x871a,	// (0x000152df) list_double_pane_g1_cp2_ParamLimits

0x871a,	// (0x000152df) list_double_pane_g1_cp2

0x8726,	// (0x000152eb) list_double_pane_g2_cp2

0x872e,	// (0x000152f3) list_double_pane_t1_cp2_ParamLimits

0x872e,	// (0x000152f3) list_double_pane_t1_cp2

0x8744,	// (0x00015309) list_double_pane_t2_cp2_ParamLimits

0x8744,	// (0x00015309) list_double_pane_t2_cp2

0x877b,	// (0x00015340) list_single_pane_cp2_g3

0x878b,	// (0x00015350) list_single_pane_g1_cp2_ParamLimits

0x878b,	// (0x00015350) list_single_pane_g1_cp2

0x8797,	// (0x0001535c) list_single_pane_g2_cp2

0x879f,	// (0x00015364) list_single_pane_t1_cp2_ParamLimits

0x879f,	// (0x00015364) list_single_pane_t1_cp2

0x87b7,	// (0x0001537c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x87b7,	// (0x0001537c) list_single_large_graphic_pane_g1_cp2

0x87c5,	// (0x0001538a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x87c5,	// (0x0001538a) list_single_large_graphic_pane_g2_cp2

0x87d1,	// (0x00015396) list_single_large_graphic_pane_g3_cp2

0x87d9,	// (0x0001539e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x87d9,	// (0x0001539e) list_single_large_graphic_pane_g4_cp1

0x87f3,	// (0x000153b8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x87f3,	// (0x000153b8) list_single_large_graphic_pane_t1_cp2

0x9e49,	// (0x00016a0e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9e49,	// (0x00016a0e) list_single_graphic_heading_pane_g1_cp2

0x9e16,	// (0x000169db) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e16,	// (0x000169db) list_single_graphic_heading_pane_g4_cp2

0x8797,	// (0x0001535c) list_single_graphic_heading_pane_g5_cp2

0x9e55,	// (0x00016a1a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9e55,	// (0x00016a1a) list_single_graphic_heading_pane_t1_cp2

0x9e6b,	// (0x00016a30) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9e6b,	// (0x00016a30) list_single_graphic_heading_pane_t2_cp2

0x9e0a,	// (0x000169cf) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e0a,	// (0x000169cf) list_single_2graphic_pane_g1_cp2

0x9e16,	// (0x000169db) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e16,	// (0x000169db) list_single_2graphic_pane_g2_cp2

0x8797,	// (0x0001535c) list_single_2graphic_pane_g3_cp2

0x9e27,	// (0x000169ec) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9e27,	// (0x000169ec) list_single_2graphic_pane_g4_cp2

0x9e33,	// (0x000169f8) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9e33,	// (0x000169f8) list_single_2graphic_pane_t1_cp2

0x3542,	// (0x00010107) list_highlight_pane_g10_cp1

0x99e2,	// (0x000165a7) list_highlight_pane_g1_cp1

0x99ea,	// (0x000165af) list_highlight_pane_g2_cp1

0x99f2,	// (0x000165b7) list_highlight_pane_g3_cp1

0x99fa,	// (0x000165bf) list_highlight_pane_g4_cp1

0x9a02,	// (0x000165c7) list_highlight_pane_g5_cp1

0x9a0a,	// (0x000165cf) list_highlight_pane_g6_cp1

0x9a12,	// (0x000165d7) list_highlight_pane_g7_cp1

0x9a1a,	// (0x000165df) list_highlight_pane_g8_cp1

0x9a22,	// (0x000165e7) list_highlight_pane_g9_cp1

0x9902,	// (0x000164c7) form_field_slider_pane_t3

0x9910,	// (0x000164d5) form_field_slider_pane_t4

0x991e,	// (0x000164e3) slider_form_pane_ParamLimits

0x991e,	// (0x000164e3) slider_form_pane

0x36bb,	// (0x00010280) control_abbreviations

0x36bb,	// (0x00010280) control_conventions

0x36bb,	// (0x00010280) control_definitions

0x36bb,	// (0x00010280) format_table_attribute

0xa10a,	// (0x00016ccf) bg_popup_preview_window_pane_g9

0x36bb,	// (0x00010280) format_table_data2

0x36bb,	// (0x00010280) format_table_data3

0x36bb,	// (0x00010280) format_table_data_example

0x0008,

0x36bb,	// (0x00010280) intro_purpose

0xf8c5,	// (0x0001c48a) bg_popup_preview_window_pane_g

0x36bb,	// (0x00010280) texts_category

0x36bb,	// (0x00010280) texts_graphics

0x8809,	// (0x000153ce) text_digital

0x8818,	// (0x000153dd) text_primary

0x8827,	// (0x000153ec) text_primary_small

0x8836,	// (0x000153fb) text_secondary

0x8845,	// (0x0001540a) text_title

0xa93c,	// (0x00017501) bg_passive_tab_pane_g1_cp3_srt

0x8491,	// (0x00015056) bg_passive_tab_pane_g2_cp3_srt

0xa945,	// (0x0001750a) bg_passive_tab_pane_g3_cp3_srt

0x3775,	// (0x0001033a) bg_active_tab_pane_cp3_srt_ParamLimits

0x3775,	// (0x0001033a) bg_active_tab_pane_cp3_srt

0xa94e,	// (0x00017513) tabs_4_active_pane_srt_g1

0xa956,	// (0x0001751b) tabs_4_active_pane_srt_t1_ParamLimits

0xa956,	// (0x0001751b) tabs_4_active_pane_srt_t1

0xa93c,	// (0x00017501) bg_active_tab_pane_g1_cp3_copy1

0x8491,	// (0x00015056) bg_active_tab_pane_g2_cp3_copy1

0xa945,	// (0x0001750a) bg_active_tab_pane_g3_cp3_copy1

0x3775,	// (0x0001033a) tabs_2_long_active_pane_srt_ParamLimits

0x3775,	// (0x0001033a) tabs_2_long_active_pane_srt

0x3775,	// (0x0001033a) tabs_2_long_passive_pane_srt_ParamLimits

0x3775,	// (0x0001033a) tabs_2_long_passive_pane_srt

0x7eb2,	// (0x00014a77) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7eb2,	// (0x00014a77) bg_passive_tab_pane_cp4_srt

0xa56c,	// (0x00017131) bg_passive_tab_pane_g1_cp4_srt

0x8491,	// (0x00015056) bg_passive_tab_pane_g2_cp4_srt

0xa575,	// (0x0001713a) bg_passive_tab_pane_g3_cp4_srt

0x7e91,	// (0x00014a56) bg_active_tab_pane_cp4_srt_ParamLimits

0x7e91,	// (0x00014a56) bg_active_tab_pane_cp4_srt

0xa57e,	// (0x00017143) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa57e,	// (0x00017143) tabs_2_long_active_pane_srt_t1

0xa56c,	// (0x00017131) bg_active_tab_pane_g1_cp4_srt

0x8491,	// (0x00015056) bg_active_tab_pane_g2_cp4_srt

0xa575,	// (0x0001713a) bg_active_tab_pane_g3_cp4_srt

0x375d,	// (0x00010322) tabs_3_long_active_pane_srt_ParamLimits

0x375d,	// (0x00010322) tabs_3_long_active_pane_srt

0x375d,	// (0x00010322) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x375d,	// (0x00010322) tabs_3_long_passive_pane_cp_srt

0x375d,	// (0x00010322) tabs_3_long_passive_pane_srt_ParamLimits

0x375d,	// (0x00010322) tabs_3_long_passive_pane_srt

0x7eb2,	// (0x00014a77) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7eb2,	// (0x00014a77) bg_passive_tab_pane_cp5_srt

0x851b,	// (0x000150e0) bg_passive_tab_pane_g1_cp5_srt

0x8491,	// (0x00015056) bg_passive_tab_pane_g2_cp5_srt

0x8524,	// (0x000150e9) bg_passive_tab_pane_g3_cp5_srt

0x7e91,	// (0x00014a56) bg_active_tab_pane_cp5_srt_ParamLimits

0x7e91,	// (0x00014a56) bg_active_tab_pane_cp5_srt

0xa55a,	// (0x0001711f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa55a,	// (0x0001711f) tabs_3_long_active_pane_srt_t1

0x851b,	// (0x000150e0) bg_active_tab_pane_g1_cp5_srt

0x8491,	// (0x00015056) bg_active_tab_pane_g2_cp5_srt

0x8524,	// (0x000150e9) bg_active_tab_pane_g3_cp5_srt

0xa54c,	// (0x00017111) navi_text_pane_srt_t1

0xa544,	// (0x00017109) navi_icon_pane_srt_g1

0x8a1d,	// (0x000155e2) midp_editing_number_pane_srt

0x8854,	// (0x00015419) midp_ticker_pane_srt

0x8a25,	// (0x000155ea) midp_ticker_pane_srt_g1

0x8a2d,	// (0x000155f2) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001c30d) midp_ticker_pane_srt_g

0x8a35,	// (0x000155fa) midp_ticker_pane_srt_t1

0xa535,	// (0x000170fa) midp_editing_number_pane_t1_copy1

0x885c,	// (0x00015421) listscroll_midp_pane

0x885c,	// (0x00015421) midp_form_pane

0x88cb,	// (0x00015490) midp_info_popup_window_ParamLimits

0x88cb,	// (0x00015490) midp_info_popup_window

0x4066,	// (0x00010c2b) bg_popup_sub_pane_cp50_ParamLimits

0x4066,	// (0x00010c2b) bg_popup_sub_pane_cp50

0x9604,	// (0x000161c9) listscroll_midp_info_pane_ParamLimits

0x9604,	// (0x000161c9) listscroll_midp_info_pane

0x95e4,	// (0x000161a9) listscroll_form_midp_pane_ParamLimits

0x95e4,	// (0x000161a9) listscroll_form_midp_pane

0x95f0,	// (0x000161b5) scroll_bar_cp050

0x95c4,	// (0x00016189) list_midp_pane

0xb6ff,	// (0x000182c4) signal_pane_g2_cp

0x94fe,	// (0x000160c3) listscroll_midp_info_pane_t1_ParamLimits

0x94fe,	// (0x000160c3) listscroll_midp_info_pane_t1

0x9516,	// (0x000160db) listscroll_midp_info_pane_t2_ParamLimits

0x9516,	// (0x000160db) listscroll_midp_info_pane_t2

0x9554,	// (0x00016119) listscroll_midp_info_pane_t3_ParamLimits

0x9554,	// (0x00016119) listscroll_midp_info_pane_t3

0x958e,	// (0x00016153) listscroll_midp_info_pane_t4_ParamLimits

0x958e,	// (0x00016153) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0001c3c5) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0001c3c5) listscroll_midp_info_pane_t

0x40bb,	// (0x00010c80) scroll_pane_cp21

0x9498,	// (0x0001605d) form_midp_field_choice_group_pane

0x94a1,	// (0x00016066) form_midp_field_text_pane

0x94e4,	// (0x000160a9) form_midp_field_time_pane

0x94ec,	// (0x000160b1) form_midp_gauge_slider_pane

0x94f5,	// (0x000160ba) form_midp_gauge_wait_pane

0x36bb,	// (0x00010280) form_midp_image_pane

0x9478,	// (0x0001603d) list_single_midp_pane_ParamLimits

0x9478,	// (0x0001603d) list_single_midp_pane

0x943c,	// (0x00016001) form_midp_field_text_pane_t1

0x921f,	// (0x00015de4) input_focus_pane_cp050

0x9467,	// (0x0001602c) list_midp_form_text_pane

0x940b,	// (0x00015fd0) form_midp_field_choice_group_pane_t1

0x9419,	// (0x00015fde) input_focus_pane_cp051

0x942d,	// (0x00015ff2) list_midp_choice_pane

0x36bb,	// (0x00010280) status_idle_pane

0x93ef,	// (0x00015fb4) form_midp_field_time_pane_t1

0x3542,	// (0x00010107) wait_anim_pane_g2_copy1

0x93fd,	// (0x00015fc2) form_midp_field_time_pane_t2

0x0001,

0x897b,	// (0x00015540) aid_navinavi_width_2_pane

0xf7fb,	// (0x0001c3c0) form_midp_field_time_pane_t

0x36bb,	// (0x00010280) input_focus_pane_cp052

0x36bb,	// (0x00010280) bg_input_focus_pane_cp040

0x93af,	// (0x00015f74) form_midp_gauge_slider_pane_t1

0x93bd,	// (0x00015f82) form_midp_gauge_slider_pane_t2

0x93cb,	// (0x00015f90) form_midp_gauge_slider_pane_t3

0x93d9,	// (0x00015f9e) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0001c3b7) form_midp_gauge_slider_pane_t

0x93e7,	// (0x00015fac) form_midp_slider_pane

0x3775,	// (0x0001033a) bg_input_focus_pane_cp041_ParamLimits

0x3775,	// (0x0001033a) bg_input_focus_pane_cp041

0x937c,	// (0x00015f41) form_midp_gauge_wait_pane_t1_ParamLimits

0x937c,	// (0x00015f41) form_midp_gauge_wait_pane_t1

0x938e,	// (0x00015f53) form_midp_gauge_wait_pane_t2_ParamLimits

0x938e,	// (0x00015f53) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0001c3b2) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0001c3b2) form_midp_gauge_wait_pane_t

0x93a0,	// (0x00015f65) form_midp_wait_pane_ParamLimits

0x93a0,	// (0x00015f65) form_midp_wait_pane

0x9344,	// (0x00015f09) form_midp_image_pane_g1

0x934d,	// (0x00015f12) form_midp_image_pane_t1

0x935c,	// (0x00015f21) form_midp_image_pane_t2

0x936b,	// (0x00015f30) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0001c3ab) form_midp_image_pane_t

0x932c,	// (0x00015ef1) list_single_midp_pane_g1

0x9335,	// (0x00015efa) list_single_midp_pane_t1

0x9312,	// (0x00015ed7) list_midp_form_item_pane_ParamLimits

0x9312,	// (0x00015ed7) list_midp_form_item_pane

0x8923,	// (0x000154e8) list_midp_form_item_pane_t1

0x8932,	// (0x000154f7) midp_ticker_pane_g1

0x893e,	// (0x00015503) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001c2f3) midp_ticker_pane_g

0x894a,	// (0x0001550f) midp_ticker_pane_t1

0xa7d7,	// (0x0001739c) midp_editing_number_pane_t1

0xa7b5,	// (0x0001737a) midp_editing_number_pane

0xa7c4,	// (0x00017389) midp_ticker_pane

0xa4fd,	// (0x000170c2) ai_message_heading_pane

0x36bb,	// (0x00010280) bg_popup_window_pane_cp14

0xa505,	// (0x000170ca) listscroll_ai_message_pane

0xa483,	// (0x00017048) ai_message_heading_pane_g1_ParamLimits

0xa483,	// (0x00017048) ai_message_heading_pane_g1

0xa48f,	// (0x00017054) ai_message_heading_pane_g2_ParamLimits

0xa48f,	// (0x00017054) ai_message_heading_pane_g2

0xa49d,	// (0x00017062) ai_message_heading_pane_g3_ParamLimits

0xa49d,	// (0x00017062) ai_message_heading_pane_g3

0xa4a9,	// (0x0001706e) ai_message_heading_pane_g4_ParamLimits

0xa4a9,	// (0x0001706e) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0001c4ec) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0001c4ec) ai_message_heading_pane_g

0xa4b5,	// (0x0001707a) ai_message_heading_pane_t1_ParamLimits

0xa4b5,	// (0x0001707a) ai_message_heading_pane_t1

0xa4cf,	// (0x00017094) ai_message_heading_pane_t2_ParamLimits

0xa4cf,	// (0x00017094) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0001c4f5) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0001c4f5) ai_message_heading_pane_t

0xa4e3,	// (0x000170a8) bg_popup_heading_pane_cp1_ParamLimits

0xa4e3,	// (0x000170a8) bg_popup_heading_pane_cp1

0xa471,	// (0x00017036) list_ai_message_pane_ParamLimits

0xa471,	// (0x00017036) list_ai_message_pane

0x40bb,	// (0x00010c80) scroll_pane_cp10

0xa40d,	// (0x00016fd2) list_ai_message_pane_g1

0xa415,	// (0x00016fda) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0001c4c9) list_ai_message_pane_g

0xa41d,	// (0x00016fe2) list_ai_message_pane_t1_ParamLimits

0xa41d,	// (0x00016fe2) list_ai_message_pane_t1

0xa432,	// (0x00016ff7) list_ai_message_pane_t2_ParamLimits

0xa432,	// (0x00016ff7) list_ai_message_pane_t2

0xa447,	// (0x0001700c) list_ai_message_pane_t3_ParamLimits

0xa447,	// (0x0001700c) list_ai_message_pane_t3

0xa45c,	// (0x00017021) list_ai_message_pane_t4_ParamLimits

0xa45c,	// (0x00017021) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0001c4ce) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0001c4ce) list_ai_message_pane_t

0xa3f6,	// (0x00016fbb) cell_ai_soft_ind_pane_ParamLimits

0xa3f6,	// (0x00016fbb) cell_ai_soft_ind_pane

0x895c,	// (0x00015521) cell_ai_soft_ind_pane_g1_ParamLimits

0x895c,	// (0x00015521) cell_ai_soft_ind_pane_g1

0x36bb,	// (0x00010280) grid_highlight_cp1

0x8969,	// (0x0001552e) text_secondary_cp56_ParamLimits

0x8969,	// (0x0001552e) text_secondary_cp56

0xa3cb,	// (0x00016f90) example_general_pane_ParamLimits

0xa3cb,	// (0x00016f90) example_general_pane

0xa3d7,	// (0x00016f9c) example_parent_pane_g1_ParamLimits

0xa3d7,	// (0x00016f9c) example_parent_pane_g1

0xa3e3,	// (0x00016fa8) example_parent_pane_t1_ParamLimits

0xa3e3,	// (0x00016fa8) example_parent_pane_t1

0x5c86,	// (0x0001284b) popup_preview_text_window_ParamLimits

0x5c86,	// (0x0001284b) popup_preview_text_window

0x8783,	// (0x00015348) list_single_pane_cp2_g4

0x3a19,	// (0x000105de) bg_popup_preview_window_pane_ParamLimits

0x3a19,	// (0x000105de) bg_popup_preview_window_pane

0xa114,	// (0x00016cd9) popup_preview_text_window_t1_ParamLimits

0xa114,	// (0x00016cd9) popup_preview_text_window_t1

0xa132,	// (0x00016cf7) popup_preview_text_window_t2_ParamLimits

0xa132,	// (0x00016cf7) popup_preview_text_window_t2

0xa17b,	// (0x00016d40) popup_preview_text_window_t3_ParamLimits

0xa17b,	// (0x00016d40) popup_preview_text_window_t3

0xa1c0,	// (0x00016d85) popup_preview_text_window_t4_ParamLimits

0xa1c0,	// (0x00016d85) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x0001c49d) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x0001c49d) popup_preview_text_window_t

0xa23e,	// (0x00016e03) scroll_pane_cp11

0x90fb,	// (0x00015cc0) bg_popup_preview_window_pane_g1

0xa0c8,	// (0x00016c8d) bg_popup_preview_window_pane_g2

0xa0d2,	// (0x00016c97) bg_popup_preview_window_pane_g3

0xa0dc,	// (0x00016ca1) bg_popup_preview_window_pane_g4

0xa0e6,	// (0x00016cab) bg_popup_preview_window_pane_g5

0xa0f0,	// (0x00016cb5) bg_popup_preview_window_pane_g6

0xa0f8,	// (0x00016cbd) bg_popup_preview_window_pane_g7

0xa100,	// (0x00016cc5) bg_popup_preview_window_pane_g8

0x4e30,	// (0x000119f5) aid_popup_width_pane

0x5c62,	// (0x00012827) popup_midp_note_alarm_window_ParamLimits

0x5c62,	// (0x00012827) popup_midp_note_alarm_window

0x3ee1,	// (0x00010aa6) data_form_pane_ParamLimits

0x7d1e,	// (0x000148e3) form_field_data_pane_g1

0x7d28,	// (0x000148ed) form_field_data_pane_t1_ParamLimits

0x3eed,	// (0x00010ab2) input_focus_pane_ParamLimits

0x3efb,	// (0x00010ac0) data_form_wide_pane_ParamLimits

0x3f07,	// (0x00010acc) form_field_data_wide_pane_g1

0x3f33,	// (0x00010af8) form_field_data_wide_pane_t1_ParamLimits

0x3bd5,	// (0x0001079a) input_focus_pane_cp6_ParamLimits

0x7e69,	// (0x00014a2e) input_popup_find_pane_g1_ParamLimits

0x7e69,	// (0x00014a2e) input_popup_find_pane_g1

0x53bf,	// (0x00011f84) aid_navi_side_left_pane

0x53d4,	// (0x00011f99) aid_navi_side_right_pane

0x9add,	// (0x000166a2) bg_popup_window_pane_cp30_ParamLimits

0x9add,	// (0x000166a2) bg_popup_window_pane_cp30

0x9b57,	// (0x0001671c) popup_midp_note_alarm_window_g1_ParamLimits

0x9b57,	// (0x0001671c) popup_midp_note_alarm_window_g1

0x9b87,	// (0x0001674c) popup_midp_note_alarm_window_t1_ParamLimits

0x9b87,	// (0x0001674c) popup_midp_note_alarm_window_t1

0x9c28,	// (0x000167ed) popup_midp_note_alarm_window_t2_ParamLimits

0x9c28,	// (0x000167ed) popup_midp_note_alarm_window_t2

0x9cd6,	// (0x0001689b) popup_midp_note_alarm_window_t3_ParamLimits

0x9cd6,	// (0x0001689b) popup_midp_note_alarm_window_t3

0x9d08,	// (0x000168cd) popup_midp_note_alarm_window_t4_ParamLimits

0x9d08,	// (0x000168cd) popup_midp_note_alarm_window_t4

0x9d2e,	// (0x000168f3) popup_midp_note_alarm_window_t5_ParamLimits

0x9d2e,	// (0x000168f3) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0001c43a) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0001c43a) popup_midp_note_alarm_window_t

0x9dda,	// (0x0001699f) wait_bar_pane_cp1_ParamLimits

0x9dda,	// (0x0001699f) wait_bar_pane_cp1

0x36bb,	// (0x00010280) wait_anim_pane_copy1

0x36bb,	// (0x00010280) wait_border_pane_copy1

0x97c2,	// (0x00016387) wait_border_pane_g1_copy1

0x3f4a,	// (0x00010b0f) form_field_popup_pane_g1

0x7d42,	// (0x00014907) form_field_popup_pane_t1_ParamLimits

0x3eed,	// (0x00010ab2) input_focus_pane_cp7_ParamLimits

0x3f52,	// (0x00010b17) list_form_pane_ParamLimits

0x3f5e,	// (0x00010b23) form_field_popup_wide_pane_g1

0x3f66,	// (0x00010b2b) form_field_popup_wide_pane_t1_ParamLimits

0x3eed,	// (0x00010ab2) input_focus_pane_cp8_ParamLimits

0x3f78,	// (0x00010b3d) list_form_wide_pane_ParamLimits

0xa9d7,	// (0x0001759c) aid_size_cell_graphic_pane

0x7dba,	// (0x0001497f) data_form_pane_t1_ParamLimits

0xa780,	// (0x00017345) data_form_wide_pane_t1_ParamLimits

0x8c7a,	// (0x0001583f) bg_status_flat_pane

0x7596,	// (0x0001415b) title_pane_t1_ParamLimits

0x3725,	// (0x000102ea) title_pane_t2_ParamLimits

0x374b,	// (0x00010310) title_pane_t3_ParamLimits

0xf532,	// (0x0001c0f7) title_pane_t_ParamLimits

0x8123,	// (0x00014ce8) level_1_signal_ParamLimits

0x8130,	// (0x00014cf5) level_2_signal_ParamLimits

0x813d,	// (0x00014d02) level_3_signal_ParamLimits

0x814a,	// (0x00014d0f) level_4_signal_ParamLimits

0x8157,	// (0x00014d1c) level_5_signal_ParamLimits

0x8164,	// (0x00014d29) level_6_signal_ParamLimits

0x8171,	// (0x00014d36) level_7_signal_ParamLimits

0x8123,	// (0x00014ce8) level_1_battery_ParamLimits

0x8130,	// (0x00014cf5) level_2_battery_ParamLimits

0x813d,	// (0x00014d02) level_3_battery_ParamLimits

0x814a,	// (0x00014d0f) level_4_battery_ParamLimits

0x8157,	// (0x00014d1c) level_5_battery_ParamLimits

0x8164,	// (0x00014d29) level_6_battery_ParamLimits

0x8171,	// (0x00014d36) level_7_battery_ParamLimits

0x99e2,	// (0x000165a7) bg_status_flat_pane_g1

0x99ea,	// (0x000165af) bg_status_flat_pane_g2

0x99f2,	// (0x000165b7) bg_status_flat_pane_g3

0x99fa,	// (0x000165bf) bg_status_flat_pane_g4

0x9a02,	// (0x000165c7) bg_status_flat_pane_g5

0x9a0a,	// (0x000165cf) bg_status_flat_pane_g6

0x9a12,	// (0x000165d7) bg_status_flat_pane_g7

0x7606,	// (0x000141cb) tabs_3_active_pane_t1_ParamLimits

0x7606,	// (0x000141cb) tabs_3_passive_pane_t1_ParamLimits

0x7620,	// (0x000141e5) tabs_4_active_pane_t1_ParamLimits

0x7620,	// (0x000141e5) tabs_4_1_passive_pane_t1_ParamLimits

0x7e7f,	// (0x00014a44) tabs_2_active_pane_t1_ParamLimits

0x7e7f,	// (0x00014a44) tabs_2_passive_pane_t1_ParamLimits

0x7e91,	// (0x00014a56) bg_active_tab_pane_cp4_ParamLimits

0x7e9f,	// (0x00014a64) tabs_2_long_active_pane_t1_ParamLimits

0x7eb2,	// (0x00014a77) bg_passive_tab_pane_cp4_ParamLimits

0x5fea,	// (0x00012baf) list_single_midp_graphic_pane_t1_ParamLimits

0x7e91,	// (0x00014a56) bg_active_tab_pane_cp5_ParamLimits

0x7ebe,	// (0x00014a83) tabs_3_long_active_pane_t1_ParamLimits

0x7eb2,	// (0x00014a77) bg_passive_tab_pane_cp5_ParamLimits

0x5fea,	// (0x00012baf) list_single_midp_graphic_pane_t1

0x8c7a,	// (0x0001583f) bg_status_flat_pane_ParamLimits

0x8d45,	// (0x0001590a) indicator_pane_cp2_ParamLimits

0x8d45,	// (0x0001590a) indicator_pane_cp2

0x8e88,	// (0x00015a4d) navi_pane_srt_ParamLimits

0x8e88,	// (0x00015a4d) navi_pane_srt

0x8eac,	// (0x00015a71) popup_clock_digital_analogue_window_cp1

0x385c,	// (0x00010421) indicator_pane_t1

0x8854,	// (0x00015419) copy_highlight_pane

0x8854,	// (0x00015419) cursor_graphics_pane

0x8854,	// (0x00015419) graphic_within_text_pane

0x8854,	// (0x00015419) link_highlight_pane

0xa201,	// (0x00016dc6) popup_preview_text_window_t5_ParamLimits

0xa201,	// (0x00016dc6) popup_preview_text_window_t5

0x8985,	// (0x0001554a) cursor_digital_pane

0x8985,	// (0x0001554a) cursor_primary_pane

0x8996,	// (0x0001555b) cursor_primary_small_pane

0x899e,	// (0x00015563) cursor_secondary_pane

0x89a6,	// (0x0001556b) cursor_title_pane

0x8985,	// (0x0001554a) link_highlight_digital_pane

0x898d,	// (0x00015552) link_highlight_primary_pane

0x8996,	// (0x0001555b) link_highlight_primary_small_pane

0x899e,	// (0x00015563) link_highlight_secondary_pane

0x89a6,	// (0x0001556b) link_highlight_title_pane

0x8985,	// (0x0001554a) copy_highlight_digital_pane

0x8985,	// (0x0001554a) copy_highlight_primary_pane

0x8996,	// (0x0001555b) copy_highlight_primary_small_pane

0x899e,	// (0x00015563) copy_highlight_secondary_pane

0x89a6,	// (0x0001556b) copy_highlight_title_pane

0x899e,	// (0x00015563) graphic_text_digital_pane

0x9a80,	// (0x00016645) graphic_text_primary_pane

0x9a89,	// (0x0001664e) graphic_text_primary_small_pane

0x8996,	// (0x0001555b) graphic_text_secondary_pane

0x8985,	// (0x0001554a) graphic_text_title_pane

0x89ae,	// (0x00015573) cursor_primary_pane_g1

0x9a72,	// (0x00016637) cursor_text_primary_t1

0x9a5a,	// (0x0001661f) cursor_primary_small_pane_g1

0x9a64,	// (0x00016629) cursor_text_primary_small_t1

0x9a42,	// (0x00016607) cursor_primary_small_pane_g1_copy1

0x9a4c,	// (0x00016611) cursor_text_primary_small_t1_copy1

0x9a2a,	// (0x000165ef) cursor_text_title_t1

0x9a38,	// (0x000165fd) cursor_title_pane_g1

0x89ae,	// (0x00015573) cursor_digital_pane_g1

0x89b8,	// (0x0001557d) cursor_text_digital_t1

0x89c6,	// (0x0001558b) link_highlight_primary_pane_g1

0x99d3,	// (0x00016598) link_highlight_primary_pane_t1

0x89c6,	// (0x0001558b) link_highlight_primary_small_pane_g1

0x89ce,	// (0x00015593) link_highlight_primary_small_pane_t1

0x89dd,	// (0x000155a2) link_highlight_secondary_pane_g1

0x89e5,	// (0x000155aa) link_highlight_secondary_pane_t1

0x9947,	// (0x0001650c) link_highlight_title_pane_g1

0x994f,	// (0x00016514) link_highlight_title_pane_t1

0x9930,	// (0x000164f5) link_highlight_digital_pane_g1

0x9938,	// (0x000164fd) link_highlight_digital_pane_t1

0x97f8,	// (0x000163bd) copy_highlight_primary_pane_g1

0x980f,	// (0x000163d4) copy_highlight_primary_pane_t1

0x97f8,	// (0x000163bd) copy_highlight_primary_small_pane_g1

0x9800,	// (0x000163c5) copy_highlight_primary_small_pane_t1

0x89f4,	// (0x000155b9) copy_highlight_secondary_pane_g1

0x89fc,	// (0x000155c1) copy_highlight_secondary_pane_t1

0x97e1,	// (0x000163a6) copy_highlight_title_pane_g1

0x97e9,	// (0x000163ae) copy_highlight_title_pane_t1

0x97f8,	// (0x000163bd) copy_highlight_digital_pane_g1

0xaba9,	// (0x0001776e) copy_highlight_digital_pane_t1

0xaafd,	// (0x000176c2) graphic_text_primary_pane_g1

0xab8d,	// (0x00017752) graphic_text_primary_pane_t1

0xab9b,	// (0x00017760) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x0001c569) graphic_text_primary_pane_t

0xab69,	// (0x0001772e) graphic_text_primary_small_pane_g1

0xab71,	// (0x00017736) graphic_text_primary_small_pane_t1

0xab7f,	// (0x00017744) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x0001c564) graphic_text_primary_small_pane_t

0xab45,	// (0x0001770a) graphic_text_secondary_pane_g1

0xab4d,	// (0x00017712) graphic_text_secondary_pane_t1

0xab5b,	// (0x00017720) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x0001c55f) graphic_text_secondary_pane_t

0xab21,	// (0x000176e6) graphic_text_title_pane_g1

0xab29,	// (0x000176ee) graphic_text_title_pane_t1

0xab37,	// (0x000176fc) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x0001c55a) graphic_text_title_pane_t

0xaafd,	// (0x000176c2) graphic_text_digital_pane_g1

0xab05,	// (0x000176ca) graphic_text_digital_pane_t1

0xab13,	// (0x000176d8) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x0001c555) graphic_text_digital_pane_t

0x3775,	// (0x0001033a) navi_icon_pane_srt_ParamLimits

0x3775,	// (0x0001033a) navi_icon_pane_srt

0x36bb,	// (0x00010280) navi_midp_pane_srt

0x36bb,	// (0x00010280) navi_navi_pane_srt

0x3775,	// (0x0001033a) navi_text_pane_srt_ParamLimits

0x3775,	// (0x0001033a) navi_text_pane_srt

0xaac8,	// (0x0001768d) navi_navi_icon_text_pane_srt

0xaad0,	// (0x00017695) navi_navi_pane_srt_g1_ParamLimits

0xaad0,	// (0x00017695) navi_navi_pane_srt_g1

0xaae2,	// (0x000176a7) navi_navi_pane_srt_g2_ParamLimits

0xaae2,	// (0x000176a7) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x0001c550) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x0001c550) navi_navi_pane_srt_g

0xaaf4,	// (0x000176b9) navi_navi_tabs_pane_srt

0xaac8,	// (0x0001768d) navi_navi_text_pane_srt

0xaac8,	// (0x0001768d) navi_navi_volume_pane_srt

0xaab9,	// (0x0001767e) navi_navi_text_pane_srt_t1

0x6386,	// (0x00012f4b) navi_navi_volume_pane_srt_g1

0x638e,	// (0x00012f53) volume_small_pane_srt_ParamLimits

0x638e,	// (0x00012f53) volume_small_pane_srt

0x56ab,	// (0x00012270) volume_small_pane_srt_g1_ParamLimits

0x56ab,	// (0x00012270) volume_small_pane_srt_g1

0x56bb,	// (0x00012280) volume_small_pane_srt_g2_ParamLimits

0x56bb,	// (0x00012280) volume_small_pane_srt_g2

0x56cc,	// (0x00012291) volume_small_pane_srt_g3_ParamLimits

0x56cc,	// (0x00012291) volume_small_pane_srt_g3

0x56dd,	// (0x000122a2) volume_small_pane_srt_g4_ParamLimits

0x56dd,	// (0x000122a2) volume_small_pane_srt_g4

0x56ee,	// (0x000122b3) volume_small_pane_srt_g5_ParamLimits

0x56ee,	// (0x000122b3) volume_small_pane_srt_g5

0x56ff,	// (0x000122c4) volume_small_pane_srt_g6_ParamLimits

0x56ff,	// (0x000122c4) volume_small_pane_srt_g6

0x5710,	// (0x000122d5) volume_small_pane_srt_g7_ParamLimits

0x5710,	// (0x000122d5) volume_small_pane_srt_g7

0x5721,	// (0x000122e6) volume_small_pane_srt_g8_ParamLimits

0x5721,	// (0x000122e6) volume_small_pane_srt_g8

0x5732,	// (0x000122f7) volume_small_pane_srt_g9_ParamLimits

0x5732,	// (0x000122f7) volume_small_pane_srt_g9

0x5743,	// (0x00012308) volume_small_pane_srt_g10_ParamLimits

0x5743,	// (0x00012308) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0001c2f8) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0001c2f8) volume_small_pane_srt_g

0x3ace,	// (0x00010693) query_popup_data_pane_cp2

0xaa9f,	// (0x00017664) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaa9f,	// (0x00017664) navi_navi_icon_text_pane_srt_t1

0x9a80,	// (0x00016645) navi_tabs_2_long_pane_srt

0x9a80,	// (0x00016645) navi_tabs_2_pane_srt

0x9a80,	// (0x00016645) navi_tabs_3_long_pane_srt

0x9a80,	// (0x00016645) navi_tabs_3_pane_srt

0x9a80,	// (0x00016645) navi_tabs_4_pane_srt

0x6366,	// (0x00012f2b) tabs_2_active_pane_srt_ParamLimits

0x6366,	// (0x00012f2b) tabs_2_active_pane_srt

0x6376,	// (0x00012f3b) tabs_2_passive_pane_srt_ParamLimits

0x6376,	// (0x00012f3b) tabs_2_passive_pane_srt

0x8b83,	// (0x00015748) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b83,	// (0x00015748) bg_passive_tab_pane_cp1_srt

0xaa6b,	// (0x00017630) bg_passive_tab_pane_g1_cp1_srt

0x8491,	// (0x00015056) bg_passive_tab_pane_g2_cp1_srt

0xaa74,	// (0x00017639) bg_passive_tab_pane_g3_cp1_srt

0x3775,	// (0x0001033a) bg_active_tab_pane_cp1_srt_ParamLimits

0x3775,	// (0x0001033a) bg_active_tab_pane_cp1_srt

0xaa7d,	// (0x00017642) tabs_2_active_pane_srt_g1

0xaa85,	// (0x0001764a) tabs_2_active_pane_srt_t1_ParamLimits

0xaa85,	// (0x0001764a) tabs_2_active_pane_srt_t1

0xaa6b,	// (0x00017630) bg_active_tab_pane_g1_cp1_srt

0x8491,	// (0x00015056) bg_active_tab_pane_g2_cp1_srt

0xaa74,	// (0x00017639) bg_active_tab_pane_g3_cp1_srt

0x6333,	// (0x00012ef8) tabs_3_active_pane_srt_ParamLimits

0x6333,	// (0x00012ef8) tabs_3_active_pane_srt

0x6344,	// (0x00012f09) tabs_3_passive_pane_cp_srt_ParamLimits

0x6344,	// (0x00012f09) tabs_3_passive_pane_cp_srt

0x6355,	// (0x00012f1a) tabs_3_passive_pane_srt_ParamLimits

0x6355,	// (0x00012f1a) tabs_3_passive_pane_srt

0x8b83,	// (0x00015748) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b83,	// (0x00015748) bg_passive_tab_pane_cp2_srt

0x8a0b,	// (0x000155d0) bg_passive_tab_pane_g1_cp2_srt

0x8491,	// (0x00015056) bg_passive_tab_pane_g2_cp2_srt

0x8a14,	// (0x000155d9) bg_passive_tab_pane_g3_cp2_srt

0x3775,	// (0x0001033a) bg_active_tab_pane_cp2_srt_ParamLimits

0x3775,	// (0x0001033a) bg_active_tab_pane_cp2_srt

0xaa51,	// (0x00017616) tabs_3_active_pane_srt_g1

0xaa59,	// (0x0001761e) tabs_3_active_pane_srt_t1_ParamLimits

0xaa59,	// (0x0001761e) tabs_3_active_pane_srt_t1

0x8a0b,	// (0x000155d0) bg_active_tab_pane_g1_cp2_srt

0x8491,	// (0x00015056) bg_active_tab_pane_g2_cp2_srt

0x8a14,	// (0x000155d9) bg_active_tab_pane_g3_cp2_srt

0x62eb,	// (0x00012eb0) tabs_4_active_pane_srt_ParamLimits

0x62eb,	// (0x00012eb0) tabs_4_active_pane_srt

0x62fd,	// (0x00012ec2) tabs_4_passive_pane_cp2_srt_ParamLimits

0x62fd,	// (0x00012ec2) tabs_4_passive_pane_cp2_srt

0x5895,	// (0x0001245a) aid_size_cell_toolbar

0x7eb2,	// (0x00014a77) main_idle_act_pane_ParamLimits

0x5a88,	// (0x0001264d) popup_large_graphic_colour_window_ParamLimits

0x5e2f,	// (0x000129f4) popup_toolbar_window_ParamLimits

0x5e2f,	// (0x000129f4) popup_toolbar_window

0xa7fd,	// (0x000173c2) list_single_graphic_2heading_pane_ParamLimits

0xa7fd,	// (0x000173c2) list_single_graphic_2heading_pane

0x4428,	// (0x00010fed) aid_size_cell_apps_grid_lsc_pane

0x443a,	// (0x00010fff) aid_size_cell_apps_grid_prt_pane

0x8b83,	// (0x00015748) bg_wml_button_pane_cp1_ParamLimits

0x8b83,	// (0x00015748) bg_wml_button_pane_cp1

0x943c,	// (0x00016001) form_midp_field_text_pane_t1_ParamLimits

0x921f,	// (0x00015de4) input_focus_pane_cp050_ParamLimits

0x9467,	// (0x0001602c) list_midp_form_text_pane_ParamLimits

0x9419,	// (0x00015fde) input_focus_pane_cp051_ParamLimits

0x942d,	// (0x00015ff2) list_midp_choice_pane_ParamLimits

0x92d8,	// (0x00015e9d) list_single_2graphic_pane_cp3_ParamLimits

0x92d8,	// (0x00015e9d) list_single_2graphic_pane_cp3

0x92ee,	// (0x00015eb3) list_single_midp_graphic_pane_ParamLimits

0x92ee,	// (0x00015eb3) list_single_midp_graphic_pane

0x5eee,	// (0x00012ab3) list_single_graphic_2heading_pane_g1_ParamLimits

0x5eee,	// (0x00012ab3) list_single_graphic_2heading_pane_g1

0x5efa,	// (0x00012abf) list_single_graphic_2heading_pane_g4_ParamLimits

0x5efa,	// (0x00012abf) list_single_graphic_2heading_pane_g4

0x5f06,	// (0x00012acb) list_single_graphic_2heading_pane_g5_ParamLimits

0x5f06,	// (0x00012acb) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0001c34b) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0001c34b) list_single_graphic_2heading_pane_g

0x5f12,	// (0x00012ad7) list_single_graphic_2heading_pane_t1_ParamLimits

0x5f12,	// (0x00012ad7) list_single_graphic_2heading_pane_t1

0x5f26,	// (0x00012aeb) list_single_graphic_2heading_pane_t2_ParamLimits

0x5f26,	// (0x00012aeb) list_single_graphic_2heading_pane_t2

0x5f42,	// (0x00012b07) list_single_graphic_2heading_pane_t3_ParamLimits

0x5f42,	// (0x00012b07) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001c352) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001c352) list_single_graphic_2heading_pane_t

0x8fff,	// (0x00015bc4) bg_popup_sub_pane_cp2

0x9029,	// (0x00015bee) grid_toobar_pane

0x5f5a,	// (0x00012b1f) cell_toolbar_pane_ParamLimits

0x5f5a,	// (0x00012b1f) cell_toolbar_pane

0x909f,	// (0x00015c64) cell_toolbar_pane_g1_ParamLimits

0x909f,	// (0x00015c64) cell_toolbar_pane_g1

0x90b3,	// (0x00015c78) cell_toolbar_pane_g2_ParamLimits

0x90b3,	// (0x00015c78) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0001c360) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0001c360) cell_toolbar_pane_g

0x90d5,	// (0x00015c9a) grid_highlight_pane_cp2_ParamLimits

0x90d5,	// (0x00015c9a) grid_highlight_pane_cp2

0x90ef,	// (0x00015cb4) toolbar_button_pane

0x90fb,	// (0x00015cc0) toolbar_button_pane_g1

0x9103,	// (0x00015cc8) toolbar_button_pane_g2

0x910b,	// (0x00015cd0) toolbar_button_pane_g3

0x9113,	// (0x00015cd8) toolbar_button_pane_g4

0x911b,	// (0x00015ce0) toolbar_button_pane_g5

0x9123,	// (0x00015ce8) toolbar_button_pane_g6

0x912b,	// (0x00015cf0) toolbar_button_pane_g7

0x9133,	// (0x00015cf8) toolbar_button_pane_g8

0x913b,	// (0x00015d00) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x0001c365) toolbar_button_pane_g

0x5f92,	// (0x00012b57) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5f92,	// (0x00012b57) list_single_2graphic_pane_g1_cp3

0x5f9e,	// (0x00012b63) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5f9e,	// (0x00012b63) list_single_2graphic_pane_g2_cp3

0x5faf,	// (0x00012b74) list_single_2graphic_pane_g3_cp3

0x5fb7,	// (0x00012b7c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5fb7,	// (0x00012b7c) list_single_2graphic_pane_g4_cp3

0x5fc3,	// (0x00012b88) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5fc3,	// (0x00012b88) list_single_2graphic_pane_t1_cp3

0x5fde,	// (0x00012ba3) list_single_midp_graphic_pane_g2_ParamLimits

0x5fde,	// (0x00012ba3) list_single_midp_graphic_pane_g2

0x589d,	// (0x00012462) aid_zoom_text_primary

0x58a5,	// (0x0001246a) aid_zoom_text_secondary

0x8ac5,	// (0x0001568a) status_small_pane_g7_ParamLimits

0x8ac5,	// (0x0001568a) status_small_pane_g7

0x8ae8,	// (0x000156ad) status_small_pane_t1_ParamLimits

0x7571,	// (0x00014136) title_pane_g2

0x0003,

0xf529,	// (0x0001c0ee) title_pane_g

0x7747,	// (0x0001430c) aid_size_cell_colour_1_pane_ParamLimits

0x7747,	// (0x0001430c) aid_size_cell_colour_1_pane

0x775b,	// (0x00014320) aid_size_cell_colour_2_pane_ParamLimits

0x775b,	// (0x00014320) aid_size_cell_colour_2_pane

0x776f,	// (0x00014334) aid_size_cell_colour_3_pane_ParamLimits

0x776f,	// (0x00014334) aid_size_cell_colour_3_pane

0x7783,	// (0x00014348) aid_size_cell_colour_4_pane_ParamLimits

0x7783,	// (0x00014348) aid_size_cell_colour_4_pane

0x52fc,	// (0x00011ec1) title_pane_stacon_g1_ParamLimits

0x52fc,	// (0x00011ec1) title_pane_stacon_g1

0x9866,	// (0x0001642b) popup_note_wait_window_g3_ParamLimits

0x9866,	// (0x0001642b) popup_note_wait_window_g3

0x98dd,	// (0x000164a2) popup_note_wait_window_t5_ParamLimits

0x98dd,	// (0x000164a2) popup_note_wait_window_t5

0x36bb,	// (0x00010280) main_feb_china_hwr_fs_writing_pane

0x594d,	// (0x00012512) popup_feb_china_hwr_fs_window_ParamLimits

0x594d,	// (0x00012512) popup_feb_china_hwr_fs_window

0x6000,	// (0x00012bc5) aid_size_cell_hwr_fs_ParamLimits

0x6000,	// (0x00012bc5) aid_size_cell_hwr_fs

0x921f,	// (0x00015de4) bg_popup_sub_pane_cp3_ParamLimits

0x921f,	// (0x00015de4) bg_popup_sub_pane_cp3

0x6015,	// (0x00012bda) grid_hwr_fs_pane_ParamLimits

0x6015,	// (0x00012bda) grid_hwr_fs_pane

0x602d,	// (0x00012bf2) linegrid_hwr_fs_pane_ParamLimits

0x602d,	// (0x00012bf2) linegrid_hwr_fs_pane

0x603d,	// (0x00012c02) cell_hwr_fs_pane_ParamLimits

0x603d,	// (0x00012c02) cell_hwr_fs_pane

0x922b,	// (0x00015df0) linegrid_hwr_fs_pane_g1_ParamLimits

0x922b,	// (0x00015df0) linegrid_hwr_fs_pane_g1

0x9237,	// (0x00015dfc) linegrid_hwr_fs_pane_g2_ParamLimits

0x9237,	// (0x00015dfc) linegrid_hwr_fs_pane_g2

0x9249,	// (0x00015e0e) linegrid_hwr_fs_pane_g3_ParamLimits

0x9249,	// (0x00015e0e) linegrid_hwr_fs_pane_g3

0x6061,	// (0x00012c26) linegrid_hwr_fs_pane_g4_ParamLimits

0x6061,	// (0x00012c26) linegrid_hwr_fs_pane_g4

0x607f,	// (0x00012c44) linegrid_hwr_fs_pane_g5_ParamLimits

0x607f,	// (0x00012c44) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0001c390) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0001c390) linegrid_hwr_fs_pane_g

0x9255,	// (0x00015e1a) cell_hwr_fs_pane_g1_ParamLimits

0x9255,	// (0x00015e1a) cell_hwr_fs_pane_g1

0x8f3a,	// (0x00015aff) cell_hwr_fs_pane_g2_ParamLimits

0x8f3a,	// (0x00015aff) cell_hwr_fs_pane_g2

0x926b,	// (0x00015e30) cell_hwr_fs_pane_g3_ParamLimits

0x926b,	// (0x00015e30) cell_hwr_fs_pane_g3

0x9278,	// (0x00015e3d) cell_hwr_fs_pane_g4_ParamLimits

0x9278,	// (0x00015e3d) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0001c39b) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0001c39b) cell_hwr_fs_pane_g

0x6095,	// (0x00012c5a) cell_hwr_fs_pane_t1

0x36bb,	// (0x00010280) grid_highlight_pane_cp6

0x36bb,	// (0x00010280) main_idle_act2_pane

0x40a2,	// (0x00010c67) aid_inside_area_popup_secondary

0x9f16,	// (0x00016adb) aid_inside_area_window_primary_ParamLimits

0x9f16,	// (0x00016adb) aid_inside_area_window_primary

0xabb8,	// (0x0001777d) ai2_news_ticker_pane

0xabc0,	// (0x00017785) aid_size_cell_ai1_link_ParamLimits

0xabc0,	// (0x00017785) aid_size_cell_ai1_link

0xabda,	// (0x0001779f) popup_ai2_data_window_ParamLimits

0xabda,	// (0x0001779f) popup_ai2_data_window

0xabf8,	// (0x000177bd) popup_ai2_link_window_ParamLimits

0xabf8,	// (0x000177bd) popup_ai2_link_window

0x921f,	// (0x00015de4) bg_popup_sub_pane_cp4_ParamLimits

0x921f,	// (0x00015de4) bg_popup_sub_pane_cp4

0xac0e,	// (0x000177d3) grid_ai2_link_pane_ParamLimits

0xac0e,	// (0x000177d3) grid_ai2_link_pane

0xac25,	// (0x000177ea) popup_ai2_link_window_g1_ParamLimits

0xac25,	// (0x000177ea) popup_ai2_link_window_g1

0xac31,	// (0x000177f6) popup_ai2_link_window_g2_ParamLimits

0xac31,	// (0x000177f6) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x0001c56e) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x0001c56e) popup_ai2_link_window_g

0xac42,	// (0x00017807) ai2_mp_button_pane

0xac4a,	// (0x0001780f) ai2_mp_volume_pane

0x9419,	// (0x00015fde) bg_popup_sub_pane_cp5_ParamLimits

0x9419,	// (0x00015fde) bg_popup_sub_pane_cp5

0xac52,	// (0x00017817) heading_ai2_gene_pane_ParamLimits

0xac52,	// (0x00017817) heading_ai2_gene_pane

0xac5e,	// (0x00017823) list_ai2_gene_pane_ParamLimits

0xac5e,	// (0x00017823) list_ai2_gene_pane

0xaca6,	// (0x0001786b) cell_ai2_link_pane_ParamLimits

0xaca6,	// (0x0001786b) cell_ai2_link_pane

0xacbc,	// (0x00017881) cell_ai2_link_pane_g1

0x36bb,	// (0x00010280) grid_highlight_pane_cp7

0x63a3,	// (0x00012f68) ai2_mp_volume_pane_g1

0xad8f,	// (0x00017954) ai2_mp_volume_pane_g2

0xad04,	// (0x000178c9) list_ai2_gene_pane_t1

0xad97,	// (0x0001795c) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x0001c587) ai2_mp_volume_pane_g

0x63ab,	// (0x00012f70) volume_small_pane_cp3

0xad9f,	// (0x00017964) aid_size_cell_ai2_button

0xada7,	// (0x0001796c) grid_ai2_button_pane

0xadb0,	// (0x00017975) cell_ai2_button_pane_ParamLimits

0xadb0,	// (0x00017975) cell_ai2_button_pane

0x3542,	// (0x00010107) cell_ai2_button_pane_g1

0x36bb,	// (0x00010280) grid_highlight_pane_cp8

0xad4f,	// (0x00017914) ai2_gene_pane_t1_ParamLimits

0xad4f,	// (0x00017914) ai2_gene_pane_t1

0x588b,	// (0x00012450) aid_height_parent_landscape

0xa5ce,	// (0x00017193) aid_height_set_list

0xa5df,	// (0x000171a4) aid_size_parent

0xa9d7,	// (0x0001759c) aid_size_cell_graphic_pane_ParamLimits

0xac6e,	// (0x00017833) popup_ai2_data_window_g1_ParamLimits

0xac6e,	// (0x00017833) popup_ai2_data_window_g1

0xac7a,	// (0x0001783f) ai2_news_ticker_pane_g1

0xac82,	// (0x00017847) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x0001c573) ai2_news_ticker_pane_g

0xac8a,	// (0x0001784f) ai2_news_ticker_pane_t1

0xac98,	// (0x0001785d) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x0001c578) ai2_news_ticker_pane_t

0xacc5,	// (0x0001788a) heading_ai2_gene_pane_g1

0xaccd,	// (0x00017892) heading_ai2_gene_pane_t1_ParamLimits

0xaccd,	// (0x00017892) heading_ai2_gene_pane_t1

0xace2,	// (0x000178a7) list_highlight_pane_cp6

0xacea,	// (0x000178af) ai2_gene_pane_ParamLimits

0xacea,	// (0x000178af) ai2_gene_pane

0xad12,	// (0x000178d7) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x0001c57d) list_ai2_gene_pane_t

0xad20,	// (0x000178e5) list_highlight_pane_cp8_ParamLimits

0xad20,	// (0x000178e5) list_highlight_pane_cp8

0xad31,	// (0x000178f6) ai2_gene_pane_g1_ParamLimits

0xad31,	// (0x000178f6) ai2_gene_pane_g1

0xad43,	// (0x00017908) ai2_gene_pane_g2_ParamLimits

0xad43,	// (0x00017908) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x0001c582) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x0001c582) ai2_gene_pane_g

0x3df0,	// (0x000109b5) scroll_pane_cp12

0x584a,	// (0x0001240f) control_pane_t3_ParamLimits

0x584a,	// (0x0001240f) control_pane_t3

0x8ad9,	// (0x0001569e) status_small_pane_g8_ParamLimits

0x8ad9,	// (0x0001569e) status_small_pane_g8

0x5a4b,	// (0x00012610) popup_find_window_ParamLimits

0x5c78,	// (0x0001283d) popup_note_image_window_ParamLimits

0x9065,	// (0x00015c2a) list_double2_graphic_pane_vc_g1_ParamLimits

0x9065,	// (0x00015c2a) list_double2_graphic_pane_vc_g1

0x9071,	// (0x00015c36) list_double2_graphic_pane_vc_g2_ParamLimits

0x9071,	// (0x00015c36) list_double2_graphic_pane_vc_g2

0x907d,	// (0x00015c42) list_double2_graphic_pane_vc_g3_ParamLimits

0x907d,	// (0x00015c42) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x0001c359) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x0001c359) list_double2_graphic_pane_vc_g

0x9089,	// (0x00015c4e) list_double2_graphic_pane_vc_t1_ParamLimits

0x9089,	// (0x00015c4e) list_double2_graphic_pane_vc_t1

0x9071,	// (0x00015c36) list_single_heading_pane_vc_g1_ParamLimits

0x9071,	// (0x00015c36) list_single_heading_pane_vc_g1

0x907d,	// (0x00015c42) list_single_heading_pane_vc_g2_ParamLimits

0x907d,	// (0x00015c42) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c37a) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c37a) list_single_heading_pane_vc_g

0x9143,	// (0x00015d08) list_single_heading_pane_vc_t1_ParamLimits

0x9143,	// (0x00015d08) list_single_heading_pane_vc_t1

0x9159,	// (0x00015d1e) list_single_heading_pane_vc_t2_ParamLimits

0x9159,	// (0x00015d1e) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0001c37f) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0001c37f) list_single_heading_pane_vc_t

0x916b,	// (0x00015d30) list_setting_number_pane_vc_g1_ParamLimits

0x916b,	// (0x00015d30) list_setting_number_pane_vc_g1

0x9177,	// (0x00015d3c) list_setting_number_pane_vc_g2_ParamLimits

0x9177,	// (0x00015d3c) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001c384) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c384) list_setting_number_pane_vc_g

0x9183,	// (0x00015d48) list_setting_number_pane_vc_t1_ParamLimits

0x9183,	// (0x00015d48) list_setting_number_pane_vc_t1

0x9197,	// (0x00015d5c) list_setting_number_pane_vc_t2_ParamLimits

0x9197,	// (0x00015d5c) list_setting_number_pane_vc_t2

0x91b3,	// (0x00015d78) list_setting_number_pane_vc_t3_ParamLimits

0x91b3,	// (0x00015d78) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0001c389) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0001c389) list_setting_number_pane_vc_t

0x91e1,	// (0x00015da6) set_value_pane_vc_ParamLimits

0x91e1,	// (0x00015da6) set_value_pane_vc

0xa7fd,	// (0x000173c2) list_double2_graphic_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_double2_graphic_pane_vc

0xa7fd,	// (0x000173c2) list_double2_large_graphic_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_double2_large_graphic_pane_vc

0xa7fd,	// (0x000173c2) list_double2_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_double2_pane_vc

0xa7fd,	// (0x000173c2) list_double_graphic_heading_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_double_graphic_heading_pane_vc

0xa7fd,	// (0x000173c2) list_double_graphic_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_double_graphic_pane_vc

0xa7fd,	// (0x000173c2) list_double_heading_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_double_heading_pane_vc

0xa811,	// (0x000173d6) list_double_large_graphic_pane_vc_ParamLimits

0xa811,	// (0x000173d6) list_double_large_graphic_pane_vc

0xa7fd,	// (0x000173c2) list_double_number_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_double_number_pane_vc

0xa7fd,	// (0x000173c2) list_double_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_double_pane_vc

0xa7fd,	// (0x000173c2) list_double_time_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_double_time_pane_vc

0xa7fd,	// (0x000173c2) list_setting_number_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_setting_number_pane_vc

0xa7fd,	// (0x000173c2) list_setting_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_setting_pane_vc

0xa7fd,	// (0x000173c2) list_single_graphic_heading_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_single_graphic_heading_pane_vc

0xa7fd,	// (0x000173c2) list_single_heading_pane_vc_ParamLimits

0xa7fd,	// (0x000173c2) list_single_heading_pane_vc

0xa833,	// (0x000173f8) list_single_number_heading_pane_vc_ParamLimits

0xa833,	// (0x000173f8) list_single_number_heading_pane_vc

0x9065,	// (0x00015c2a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9065,	// (0x00015c2a) list_double_graphic_heading_pane_vc_g1

0x87c5,	// (0x0001538a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x87c5,	// (0x0001538a) list_double_graphic_heading_pane_vc_g2

0xade3,	// (0x000179a8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xade3,	// (0x000179a8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x0001c58e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x0001c58e) list_double_graphic_heading_pane_vc_g

0xadef,	// (0x000179b4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xadef,	// (0x000179b4) list_double_graphic_heading_pane_vc_t1

0xae05,	// (0x000179ca) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae05,	// (0x000179ca) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x0001c595) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x0001c595) list_double_graphic_heading_pane_vc_t

0x916b,	// (0x00015d30) list_setting_pane_vc_g1_ParamLimits

0x916b,	// (0x00015d30) list_setting_pane_vc_g1

0x9177,	// (0x00015d3c) list_setting_pane_vc_g2_ParamLimits

0x9177,	// (0x00015d3c) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001c384) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c384) list_setting_pane_vc_g

0xb056,	// (0x00017c1b) list_setting_pane_vc_t1_ParamLimits

0xb056,	// (0x00017c1b) list_setting_pane_vc_t1

0xb072,	// (0x00017c37) list_setting_pane_vc_t2_ParamLimits

0xb072,	// (0x00017c37) list_setting_pane_vc_t2

0x0001,

0xf9fe,	// (0x0001c5c3) list_setting_pane_vc_t_ParamLimits

0xf9fe,	// (0x0001c5c3) list_setting_pane_vc_t

0x91e1,	// (0x00015da6) set_value_pane_cp_vc_ParamLimits

0x91e1,	// (0x00015da6) set_value_pane_cp_vc

0x9071,	// (0x00015c36) list_single_number_heading_pane_vc_g1_ParamLimits

0x9071,	// (0x00015c36) list_single_number_heading_pane_vc_g1

0x907d,	// (0x00015c42) list_single_number_heading_pane_vc_g2_ParamLimits

0x907d,	// (0x00015c42) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c37a) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c37a) list_single_number_heading_pane_vc_g

0xb08e,	// (0x00017c53) list_single_number_heading_pane_vc_t1_ParamLimits

0xb08e,	// (0x00017c53) list_single_number_heading_pane_vc_t1

0xb0a4,	// (0x00017c69) list_single_number_heading_pane_vc_t2_ParamLimits

0xb0a4,	// (0x00017c69) list_single_number_heading_pane_vc_t2

0xb0ba,	// (0x00017c7f) list_single_number_heading_pane_vc_t3_ParamLimits

0xb0ba,	// (0x00017c7f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa03,	// (0x0001c5c8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x0001c5c8) list_single_number_heading_pane_vc_t

0x9065,	// (0x00015c2a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9065,	// (0x00015c2a) list_single_graphic_heading_pane_vc_g1

0x9071,	// (0x00015c36) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9071,	// (0x00015c36) list_single_graphic_heading_pane_vc_g4

0x907d,	// (0x00015c42) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x907d,	// (0x00015c42) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x0001c359) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x0001c359) list_single_graphic_heading_pane_vc_g

0xb08e,	// (0x00017c53) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb08e,	// (0x00017c53) list_single_graphic_heading_pane_vc_t1

0xb0cc,	// (0x00017c91) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb0cc,	// (0x00017c91) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0a,	// (0x0001c5cf) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0a,	// (0x0001c5cf) list_single_graphic_heading_pane_vc_t

0x9071,	// (0x00015c36) list_double2_pane_vc_g1_ParamLimits

0x9071,	// (0x00015c36) list_double2_pane_vc_g1

0x907d,	// (0x00015c42) list_double2_pane_vc_g2_ParamLimits

0x907d,	// (0x00015c42) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c37a) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c37a) list_double2_pane_vc_g

0xb0de,	// (0x00017ca3) list_double2_pane_vc_t1_ParamLimits

0xb0de,	// (0x00017ca3) list_double2_pane_vc_t1

0xb0f4,	// (0x00017cb9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb0f4,	// (0x00017cb9) list_double2_large_graphic_pane_vc_g1

0x9071,	// (0x00015c36) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9071,	// (0x00015c36) list_double2_large_graphic_pane_vc_g2

0x907d,	// (0x00015c42) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x907d,	// (0x00015c42) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0f,	// (0x0001c5d4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0f,	// (0x0001c5d4) list_double2_large_graphic_pane_vc_g

0xb100,	// (0x00017cc5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb100,	// (0x00017cc5) list_double2_large_graphic_pane_vc_t1

0xb116,	// (0x00017cdb) list_double_time_pane_vc_g1_ParamLimits

0xb116,	// (0x00017cdb) list_double_time_pane_vc_g1

0xb122,	// (0x00017ce7) list_double_time_pane_vc_g2_ParamLimits

0xb122,	// (0x00017ce7) list_double_time_pane_vc_g2

0x0001,

0xfa16,	// (0x0001c5db) list_double_time_pane_vc_g_ParamLimits

0xfa16,	// (0x0001c5db) list_double_time_pane_vc_g

0xb12e,	// (0x00017cf3) list_double_time_pane_vc_t1_ParamLimits

0xb12e,	// (0x00017cf3) list_double_time_pane_vc_t1

0xb15e,	// (0x00017d23) list_double_time_pane_vc_t2_ParamLimits

0xb15e,	// (0x00017d23) list_double_time_pane_vc_t2

0xb187,	// (0x00017d4c) list_double_time_pane_vc_t3_ParamLimits

0xb187,	// (0x00017d4c) list_double_time_pane_vc_t3

0xb199,	// (0x00017d5e) list_double_time_pane_vc_t4_ParamLimits

0xb199,	// (0x00017d5e) list_double_time_pane_vc_t4

0x0003,

0xfa1b,	// (0x0001c5e0) list_double_time_pane_vc_t_ParamLimits

0xfa1b,	// (0x0001c5e0) list_double_time_pane_vc_t

0x9071,	// (0x00015c36) list_double_pane_vc_g1_ParamLimits

0x9071,	// (0x00015c36) list_double_pane_vc_g1

0x907d,	// (0x00015c42) list_double_pane_vc_g2_ParamLimits

0x907d,	// (0x00015c42) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c37a) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c37a) list_double_pane_vc_g

0xb1ad,	// (0x00017d72) list_double_pane_vc_t1_ParamLimits

0xb1ad,	// (0x00017d72) list_double_pane_vc_t1

0xb1c1,	// (0x00017d86) list_double_pane_vc_t2_ParamLimits

0xb1c1,	// (0x00017d86) list_double_pane_vc_t2

0x0001,

0xfa24,	// (0x0001c5e9) list_double_pane_vc_t_ParamLimits

0xfa24,	// (0x0001c5e9) list_double_pane_vc_t

0x9071,	// (0x00015c36) list_double_number_pane_vc_g1_ParamLimits

0x9071,	// (0x00015c36) list_double_number_pane_vc_g1

0x907d,	// (0x00015c42) list_double_number_pane_vc_g2_ParamLimits

0x907d,	// (0x00015c42) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c37a) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c37a) list_double_number_pane_vc_g

0xb1d7,	// (0x00017d9c) list_double_number_pane_vc_t1_ParamLimits

0xb1d7,	// (0x00017d9c) list_double_number_pane_vc_t1

0xb1e9,	// (0x00017dae) list_double_number_pane_vc_t2_ParamLimits

0xb1e9,	// (0x00017dae) list_double_number_pane_vc_t2

0xb1c1,	// (0x00017d86) list_double_number_pane_vc_t3_ParamLimits

0xb1c1,	// (0x00017d86) list_double_number_pane_vc_t3

0x0002,

0xfa29,	// (0x0001c5ee) list_double_number_pane_vc_t_ParamLimits

0xfa29,	// (0x0001c5ee) list_double_number_pane_vc_t

0xb1fd,	// (0x00017dc2) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb1fd,	// (0x00017dc2) list_double_large_graphic_pane_vc_g1

0xb21f,	// (0x00017de4) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb21f,	// (0x00017de4) list_double_large_graphic_pane_vc_g2

0xb233,	// (0x00017df8) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb233,	// (0x00017df8) list_double_large_graphic_pane_vc_g3

0xb242,	// (0x00017e07) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb242,	// (0x00017e07) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa30,	// (0x0001c5f5) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa30,	// (0x0001c5f5) list_double_large_graphic_pane_vc_g

0xb24e,	// (0x00017e13) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb24e,	// (0x00017e13) list_double_large_graphic_pane_vc_t1

0xb26a,	// (0x00017e2f) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb26a,	// (0x00017e2f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa39,	// (0x0001c5fe) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa39,	// (0x0001c5fe) list_double_large_graphic_pane_vc_t

0x87c5,	// (0x0001538a) list_double_heading_pane_vc_g1_ParamLimits

0x87c5,	// (0x0001538a) list_double_heading_pane_vc_g1

0xade3,	// (0x000179a8) list_double_heading_pane_vc_g2_ParamLimits

0xade3,	// (0x000179a8) list_double_heading_pane_vc_g2

0x0001,

0xfa3e,	// (0x0001c603) list_double_heading_pane_vc_g_ParamLimits

0xfa3e,	// (0x0001c603) list_double_heading_pane_vc_g

0xb28a,	// (0x00017e4f) list_double_heading_pane_vc_t1_ParamLimits

0xb28a,	// (0x00017e4f) list_double_heading_pane_vc_t1

0xb29c,	// (0x00017e61) list_double_heading_pane_vc_t2_ParamLimits

0xb29c,	// (0x00017e61) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0001c608) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0001c608) list_double_heading_pane_vc_t

0xb2b4,	// (0x00017e79) list_double_graphic_pane_vc_g1_ParamLimits

0xb2b4,	// (0x00017e79) list_double_graphic_pane_vc_g1

0xb2c0,	// (0x00017e85) list_double_graphic_pane_vc_g2_ParamLimits

0xb2c0,	// (0x00017e85) list_double_graphic_pane_vc_g2

0x9071,	// (0x00015c36) list_double_graphic_pane_vc_g3_ParamLimits

0x9071,	// (0x00015c36) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0001c60d) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0001c60d) list_double_graphic_pane_vc_g

0xb2dd,	// (0x00017ea2) list_double_graphic_pane_vc_t1_ParamLimits

0xb2dd,	// (0x00017ea2) list_double_graphic_pane_vc_t1

0xb307,	// (0x00017ecc) list_double_graphic_pane_vc_t2_ParamLimits

0xb307,	// (0x00017ecc) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0001c616) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0001c616) list_double_graphic_pane_vc_t

0x4e3c,	// (0x00011a01) aid_size_cell_fastswap

0x4e44,	// (0x00011a09) aid_size_cell_touch_ParamLimits

0x4e44,	// (0x00011a09) aid_size_cell_touch

0x50af,	// (0x00011c74) popup_fast_swap_wide_window_ParamLimits

0x50af,	// (0x00011c74) popup_fast_swap_wide_window

0x51cd,	// (0x00011d92) touch_pane_ParamLimits

0x51cd,	// (0x00011d92) touch_pane

0x3e81,	// (0x00010a46) button_value_adjust_pane_cp2

0x3e89,	// (0x00010a4e) button_value_adjust_pane_cp4

0x3e91,	// (0x00010a56) form_field_data_pane_cp2

0x7cf3,	// (0x000148b8) form_field_data_wide_pane_cp2

0x7fa3,	// (0x00014b68) bg_scroll_pane_ParamLimits

0x5468,	// (0x0001202d) scroll_handle_pane_ParamLimits

0x547c,	// (0x00012041) scroll_sc2_down_pane_ParamLimits

0x547c,	// (0x00012041) scroll_sc2_down_pane

0x7fd4,	// (0x00014b99) scroll_sc2_up_pane_ParamLimits

0x7fd4,	// (0x00014b99) scroll_sc2_up_pane

0xb7e7,	// (0x000183ac) grid_wheel_folder_pane_g1_ParamLimits

0xb7e7,	// (0x000183ac) grid_wheel_folder_pane_g1

0x5643,	// (0x00012208) clock_nsta_pane_cp2_ParamLimits

0x5643,	// (0x00012208) clock_nsta_pane_cp2

0x885c,	// (0x00015421) listscroll_midp_pane_ParamLimits

0x8868,	// (0x0001542d) midp_canvas_pane

0x8b53,	// (0x00015718) nsta_clock_indic_pane

0x8b8f,	// (0x00015754) listscroll_form_pane_vc

0x8b97,	// (0x0001575c) listscroll_set_pane_vc_ParamLimits

0x8b97,	// (0x0001575c) listscroll_set_pane_vc

0x8c96,	// (0x0001585b) clock_nsta_pane

0x8d13,	// (0x000158d8) indicator_nsta_pane

0x8fff,	// (0x00015bc4) bg_popup_sub_pane_cp2_ParamLimits

0x9013,	// (0x00015bd8) find_pane_cp2_ParamLimits

0x9013,	// (0x00015bd8) find_pane_cp2

0x9029,	// (0x00015bee) grid_toobar_pane_ParamLimits

0x91f3,	// (0x00015db8) list_form_gen_pane_vc_ParamLimits

0x91f3,	// (0x00015db8) list_form_gen_pane_vc

0x9209,	// (0x00015dce) scroll_pane_cp8_vc_ParamLimits

0x9209,	// (0x00015dce) scroll_pane_cp8_vc

0x9285,	// (0x00015e4a) data_form_wide_pane_vc_ParamLimits

0x9285,	// (0x00015e4a) data_form_wide_pane_vc

0x9291,	// (0x00015e56) form_field_data_wide_pane_vc_g1

0x9299,	// (0x00015e5e) form_field_data_wide_pane_vc_t1_ParamLimits

0x9299,	// (0x00015e5e) form_field_data_wide_pane_vc_t1

0x3eed,	// (0x00010ab2) input_focus_pane_cp6_vc_ParamLimits

0x3eed,	// (0x00010ab2) input_focus_pane_cp6_vc

0x95c4,	// (0x00016189) list_midp_pane_ParamLimits

0x95d0,	// (0x00016195) scroll_pane_cp16_ParamLimits

0x95d0,	// (0x00016195) scroll_pane_cp16

0x963a,	// (0x000161ff) button_value_adjust_pane_ParamLimits

0x963a,	// (0x000161ff) button_value_adjust_pane

0xa5f1,	// (0x000171b6) button_value_adjust_pane_cp6_ParamLimits

0xa5f1,	// (0x000171b6) button_value_adjust_pane_cp6

0xa739,	// (0x000172fe) settings_code_pane_cp_ParamLimits

0xa739,	// (0x000172fe) settings_code_pane_cp

0x3542,	// (0x00010107) cell_touch_pane_g1

0x3542,	// (0x00010107) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0001c29e) cell_touch_pane_g

0xadc2,	// (0x00017987) cell_touch_pane_cp_ParamLimits

0xadc2,	// (0x00017987) cell_touch_pane_cp

0xadd2,	// (0x00017997) cell_touch_pane_ParamLimits

0xadd2,	// (0x00017997) cell_touch_pane

0x3542,	// (0x00010107) scroll_sc2_down_pane_g1

0x3542,	// (0x00010107) scroll_sc2_up_pane_g1

0x36bb,	// (0x00010280) bg_set_opt_pane_cp4_vc

0xae23,	// (0x000179e8) list_set_graphic_pane_vc_g1_ParamLimits

0xae23,	// (0x000179e8) list_set_graphic_pane_vc_g1

0xae2f,	// (0x000179f4) list_set_graphic_pane_vc_g2_ParamLimits

0xae2f,	// (0x000179f4) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x0001c59a) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x0001c59a) list_set_graphic_pane_vc_g

0xae3b,	// (0x00017a00) text_primary_small_cp13_vc_ParamLimits

0xae3b,	// (0x00017a00) text_primary_small_cp13_vc

0xae53,	// (0x00017a18) list_set_graphic_pane_vc_ParamLimits

0xae53,	// (0x00017a18) list_set_graphic_pane_vc

0x36bb,	// (0x00010280) input_focus_pane_cp2_vc

0x3542,	// (0x00010107) setting_code_pane_vc_g1

0x3815,	// (0x000103da) setting_code_pane_vc_t1

0xae66,	// (0x00017a2b) set_text_pane_vc_t1_ParamLimits

0xae66,	// (0x00017a2b) set_text_pane_vc_t1

0x36bb,	// (0x00010280) input_focus_pane_cp1_vc

0xae87,	// (0x00017a4c) list_set_text_pane_vc

0x3542,	// (0x00010107) setting_text_pane_vc_g1

0x36bb,	// (0x00010280) bg_set_opt_pane_cp2_vc

0x37e4,	// (0x000103a9) setting_slider_graphic_pane_vc_g1

0xae91,	// (0x00017a56) setting_slider_graphic_pane_vc_t1

0xaea3,	// (0x00017a68) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x0001c59f) setting_slider_graphic_pane_vc_t

0xaeb5,	// (0x00017a7a) slider_set_pane_cp_vc

0xaebf,	// (0x00017a84) slider_set_pane_vc_g1

0xaec8,	// (0x00017a8d) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x0001c5a4) slider_set_pane_vc_g

0x3fa8,	// (0x00010b6d) set_opt_bg_pane_g1_copy1

0x3fb0,	// (0x00010b75) set_opt_bg_pane_g2_copy1

0xaef4,	// (0x00017ab9) set_opt_bg_pane_g3_copy1

0x3fc0,	// (0x00010b85) set_opt_bg_pane_g4_copy1

0x3fc8,	// (0x00010b8d) set_opt_bg_pane_g5_copy1

0x3fd0,	// (0x00010b95) set_opt_bg_pane_g6_copy1

0xaefe,	// (0x00017ac3) set_opt_bg_pane_g7_copy1

0xaf08,	// (0x00017acd) set_opt_bg_pane_g8_copy1

0xaf12,	// (0x00017ad7) set_opt_bg_pane_g9_copy1

0x36bb,	// (0x00010280) bg_set_opt_pane_cp_vc

0xaf1c,	// (0x00017ae1) setting_slider_pane_vc_t1

0xaf2b,	// (0x00017af0) setting_slider_pane_vc_t2

0xaf3d,	// (0x00017b02) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x0001c5b3) setting_slider_pane_vc_t

0xaf4f,	// (0x00017b14) slider_set_pane_vc

0x60a3,	// (0x00012c68) volume_set_pane_vc_g1

0x60ac,	// (0x00012c71) volume_set_pane_vc_g2

0x60b5,	// (0x00012c7a) volume_set_pane_vc_g3

0x60be,	// (0x00012c83) volume_set_pane_vc_g4

0x60c7,	// (0x00012c8c) volume_set_pane_vc_g5

0x60d0,	// (0x00012c95) volume_set_pane_vc_g6

0x60d9,	// (0x00012c9e) volume_set_pane_vc_g7

0x60e2,	// (0x00012ca7) volume_set_pane_vc_g8

0x60eb,	// (0x00012cb0) volume_set_pane_vc_g9

0x60f4,	// (0x00012cb9) volume_set_pane_vc_g10

0x0009,

0xf88c,	// (0x0001c451) volume_set_pane_vc_g

0xaf59,	// (0x00017b1e) volume_set_pane_vc

0xaf63,	// (0x00017b28) button_value_adjust_pane_cp1_vc

0xaf6d,	// (0x00017b32) list_highlight_pane_cp2_vc

0xaf76,	// (0x00017b3b) list_set_pane_vc_ParamLimits

0xaf76,	// (0x00017b3b) list_set_pane_vc

0xafe4,	// (0x00017ba9) main_pane_set_vc_t1_ParamLimits

0xafe4,	// (0x00017ba9) main_pane_set_vc_t1

0xaff9,	// (0x00017bbe) main_pane_set_vc_t2_ParamLimits

0xaff9,	// (0x00017bbe) main_pane_set_vc_t2

0xb00b,	// (0x00017bd0) main_pane_set_vc_t3_ParamLimits

0xb00b,	// (0x00017bd0) main_pane_set_vc_t3

0xb01f,	// (0x00017be4) main_pane_set_vc_t4_ParamLimits

0xb01f,	// (0x00017be4) main_pane_set_vc_t4

0x0003,

0xf9f5,	// (0x0001c5ba) main_pane_set_vc_t_ParamLimits

0xf9f5,	// (0x0001c5ba) main_pane_set_vc_t

0xb033,	// (0x00017bf8) setting_code_pane_vc_ParamLimits

0xb033,	// (0x00017bf8) setting_code_pane_vc

0xb044,	// (0x00017c09) setting_slider_graphic_pane_vc

0xb044,	// (0x00017c09) setting_slider_pane_vc

0xb044,	// (0x00017c09) setting_text_pane_vc

0xb044,	// (0x00017c09) setting_volume_pane_vc

0xb04e,	// (0x00017c13) scroll_pane_cp121_vc

0x3e6f,	// (0x00010a34) set_content_pane_vc

0xb325,	// (0x00017eea) button_value_adjust_pane_g1

0xb32e,	// (0x00017ef3) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0001c61b) button_value_adjust_pane_g

0xb337,	// (0x00017efc) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb337,	// (0x00017efc) form_field_slider_wide_pane_vc_t1

0xb349,	// (0x00017f0e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb349,	// (0x00017f0e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0001c620) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0001c620) form_field_slider_wide_pane_vc_t

0x375d,	// (0x00010322) input_focus_pane_cp10_vc_ParamLimits

0x375d,	// (0x00010322) input_focus_pane_cp10_vc

0xb375,	// (0x00017f3a) slider_cont_pane_cp1_vc_ParamLimits

0xb375,	// (0x00017f3a) slider_cont_pane_cp1_vc

0xb387,	// (0x00017f4c) slider_form_pane_g1_cp2

0xaec8,	// (0x00017a8d) slider_form_pane_g2_cp2

0xb3b4,	// (0x00017f79) form_field_slider_pane_vc_t3

0xb3c2,	// (0x00017f87) form_field_slider_pane_vc_t4

0xb3d0,	// (0x00017f95) slider_form_pane_vc_ParamLimits

0xb3d0,	// (0x00017f95) slider_form_pane_vc

0xb3dd,	// (0x00017fa2) form_field_slider_pane_vc_t1_ParamLimits

0xb3dd,	// (0x00017fa2) form_field_slider_pane_vc_t1

0xb349,	// (0x00017f0e) form_field_slider_pane_vc_t2_ParamLimits

0xb349,	// (0x00017f0e) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0001c632) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001c632) form_field_slider_pane_vc_t

0x375d,	// (0x00010322) input_focus_pane_cp9_vc_ParamLimits

0x375d,	// (0x00010322) input_focus_pane_cp9_vc

0xb3f3,	// (0x00017fb8) slider_cont_pane_vc_ParamLimits

0xb3f3,	// (0x00017fb8) slider_cont_pane_vc

0xb407,	// (0x00017fcc) list_form_graphic_pane_cp_vc_ParamLimits

0xb407,	// (0x00017fcc) list_form_graphic_pane_cp_vc

0x9291,	// (0x00015e56) form_field_popup_wide_pane_vc_g1

0xb41c,	// (0x00017fe1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb41c,	// (0x00017fe1) form_field_popup_wide_pane_vc_t1

0x3eed,	// (0x00010ab2) input_focus_pane_cp8_vc_ParamLimits

0x3eed,	// (0x00010ab2) input_focus_pane_cp8_vc

0xb461,	// (0x00018026) list_form_wide_pane_vc_ParamLimits

0xb461,	// (0x00018026) list_form_wide_pane_vc

0xb46d,	// (0x00018032) list_form_graphic_pane_vc_g1

0xb475,	// (0x0001803a) list_form_graphic_pane_vc_t1_ParamLimits

0xb475,	// (0x0001803a) list_form_graphic_pane_vc_t1

0x3775,	// (0x0001033a) list_highlight_pane_cp5_vc_ParamLimits

0x3775,	// (0x0001033a) list_highlight_pane_cp5_vc

0xb491,	// (0x00018056) list_form_graphic_pane_vc_ParamLimits

0xb491,	// (0x00018056) list_form_graphic_pane_vc

0x9291,	// (0x00015e56) form_field_popup_pane_vc_g1

0xb4a7,	// (0x0001806c) form_field_popup_pane_vc_t1_ParamLimits

0xb4a7,	// (0x0001806c) form_field_popup_pane_vc_t1

0x3eed,	// (0x00010ab2) input_focus_pane_cp7_vc_ParamLimits

0x3eed,	// (0x00010ab2) input_focus_pane_cp7_vc

0xb4be,	// (0x00018083) list_form_pane_vc_ParamLimits

0xb4be,	// (0x00018083) list_form_pane_vc

0xb4ca,	// (0x0001808f) data_form_pane_vc_t1_ParamLimits

0xb4ca,	// (0x0001808f) data_form_pane_vc_t1

0x3fa8,	// (0x00010b6d) input_focus_pane_vc_g1

0x3fb0,	// (0x00010b75) input_focus_pane_vc_g2

0x3fb8,	// (0x00010b7d) input_focus_pane_vc_g3

0x3fc0,	// (0x00010b85) input_focus_pane_vc_g4

0x3fc8,	// (0x00010b8d) input_focus_pane_vc_g5

0x3fd0,	// (0x00010b95) input_focus_pane_vc_g6

0x3fd8,	// (0x00010b9d) input_focus_pane_vc_g7

0x3fe0,	// (0x00010ba5) input_focus_pane_vc_g8

0x3fe8,	// (0x00010bad) input_focus_pane_vc_g9

0x3542,	// (0x00010107) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001c227) input_focus_pane_vc_g

0x9285,	// (0x00015e4a) data_form_pane_vc_ParamLimits

0x9285,	// (0x00015e4a) data_form_pane_vc

0x9291,	// (0x00015e56) form_field_data_pane_vc_g1

0xb4e7,	// (0x000180ac) form_field_data_pane_vc_t1_ParamLimits

0xb4e7,	// (0x000180ac) form_field_data_pane_vc_t1

0x3eed,	// (0x00010ab2) input_focus_pane_vc_ParamLimits

0x3eed,	// (0x00010ab2) input_focus_pane_vc

0xb501,	// (0x000180c6) button_value_adjust_pane_cp3_vc

0xb509,	// (0x000180ce) button_value_adjust_pane_cp5_vc

0xb511,	// (0x000180d6) form_field_data_pane_vc_ParamLimits

0xb511,	// (0x000180d6) form_field_data_pane_vc

0xb52c,	// (0x000180f1) form_field_data_pane_vc_cp2

0xb534,	// (0x000180f9) form_field_data_wide_pane_vc_ParamLimits

0xb534,	// (0x000180f9) form_field_data_wide_pane_vc

0xb54e,	// (0x00018113) form_field_data_wide_pane_vc_cp2

0xb556,	// (0x0001811b) form_field_popup_pane_vc_ParamLimits

0xb556,	// (0x0001811b) form_field_popup_pane_vc

0xb571,	// (0x00018136) form_field_popup_wide_pane_vc_ParamLimits

0xb571,	// (0x00018136) form_field_popup_wide_pane_vc

0xb58b,	// (0x00018150) form_field_slider_pane_vc_ParamLimits

0xb58b,	// (0x00018150) form_field_slider_pane_vc

0xb59e,	// (0x00018163) form_field_slider_wide_pane_vc_ParamLimits

0xb59e,	// (0x00018163) form_field_slider_wide_pane_vc

0xb5b1,	// (0x00018176) grid_touch_1_pane_ParamLimits

0xb5b1,	// (0x00018176) grid_touch_1_pane

0xb5bd,	// (0x00018182) grid_touch_2_pane_ParamLimits

0xb5bd,	// (0x00018182) grid_touch_2_pane

0x8b1e,	// (0x000156e3) touch_pane_g1_ParamLimits

0x8b1e,	// (0x000156e3) touch_pane_g1

0xb5d7,	// (0x0001819c) cell_app_pane_cp_wide_ParamLimits

0xb5d7,	// (0x0001819c) cell_app_pane_cp_wide

0xb5e8,	// (0x000181ad) grid_popup_fast_wide_pane_ParamLimits

0xb5e8,	// (0x000181ad) grid_popup_fast_wide_pane

0xb5fc,	// (0x000181c1) scroll_pane_cp19_ParamLimits

0xb5fc,	// (0x000181c1) scroll_pane_cp19

0x36bb,	// (0x00010280) bg_popup_window_pane_cp20

0xb610,	// (0x000181d5) listscroll_popup_fast_wide_pane

0xb618,	// (0x000181dd) grid_indicator_nsta_pane

0xb62a,	// (0x000181ef) clock_nsta_pane_g1

0xb633,	// (0x000181f8) clock_nsta_pane_t1

0xb64f,	// (0x00018214) cell_indicator_nsta_pane_ParamLimits

0xb64f,	// (0x00018214) cell_indicator_nsta_pane

0xb684,	// (0x00018249) cell_indicator_nsta_pane_g1

0xb692,	// (0x00018257) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0001c643) cell_indicator_nsta_pane_g

0xb6a5,	// (0x0001826a) clock_nsta_pane_cp

0xb6ae,	// (0x00018273) indicator_nsta_pane_cp

0xb6b8,	// (0x0001827d) nsta_clock_indic_pane_g1

0x3854,	// (0x00010419) grid_indicator_pane

0x80c6,	// (0x00014c8b) scroll_pane_cp29

0x5592,	// (0x00012157) indicator_nsta_pane_cp2_ParamLimits

0x5592,	// (0x00012157) indicator_nsta_pane_cp2

0x3775,	// (0x0001033a) main_apps_wheel_pane

0x94a1,	// (0x00016066) form_midp_field_text_pane_ParamLimits

0x95f0,	// (0x000161b5) scroll_bar_cp050_ParamLimits

0xb711,	// (0x000182d6) cell_indicator_pane_ParamLimits

0xb711,	// (0x000182d6) cell_indicator_pane

0xb729,	// (0x000182ee) cell_indicator_pane_g1

0xb733,	// (0x000182f8) grid_wheel_folder_pane_ParamLimits

0xb733,	// (0x000182f8) grid_wheel_folder_pane

0xb747,	// (0x0001830c) list_wheel_apps_pane_ParamLimits

0xb747,	// (0x0001830c) list_wheel_apps_pane

0xb75a,	// (0x0001831f) main_apps_wheel_pane_g1_ParamLimits

0xb75a,	// (0x0001831f) main_apps_wheel_pane_g1

0xb776,	// (0x0001833b) main_apps_wheel_pane_g2_ParamLimits

0xb776,	// (0x0001833b) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0001c65f) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0001c65f) main_apps_wheel_pane_g

0xb792,	// (0x00018357) main_apps_wheel_pane_t1_ParamLimits

0xb792,	// (0x00018357) main_apps_wheel_pane_t1

0xb7bb,	// (0x00018380) list_wheel_apps_pane_g1

0xb7c3,	// (0x00018388) list_wheel_apps_pane_g2

0xb7cb,	// (0x00018390) list_wheel_apps_pane_g3

0xb7d3,	// (0x00018398) list_wheel_apps_pane_g4

0xb7dd,	// (0x000183a2) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0001c664) list_wheel_apps_pane_g

0x86c5,	// (0x0001528a) navi_icon_text_pane

0x8bc7,	// (0x0001578c) aid_fill_nsta

0xb7fe,	// (0x000183c3) navi_icon_text_pane_g1

0xb80a,	// (0x000183cf) navi_icon_text_pane_t1

0x855b,	// (0x00015120) list_set_graphic_pane_t1_ParamLimits

0x855b,	// (0x00015120) list_set_graphic_pane_t1

0x9d5d,	// (0x00016922) popup_midp_note_alarm_window_t6_ParamLimits

0x9d5d,	// (0x00016922) popup_midp_note_alarm_window_t6

0x9d6f,	// (0x00016934) popup_midp_note_alarm_window_t7_ParamLimits

0x9d6f,	// (0x00016934) popup_midp_note_alarm_window_t7

0x9d81,	// (0x00016946) popup_midp_note_alarm_window_t8_ParamLimits

0x9d81,	// (0x00016946) popup_midp_note_alarm_window_t8

0x9d93,	// (0x00016958) popup_midp_note_alarm_window_t9_ParamLimits

0x9d93,	// (0x00016958) popup_midp_note_alarm_window_t9

0x9da5,	// (0x0001696a) popup_midp_note_alarm_window_t10_ParamLimits

0x9da5,	// (0x0001696a) popup_midp_note_alarm_window_t10

0x9db7,	// (0x0001697c) popup_midp_note_alarm_window_t11_ParamLimits

0x9db7,	// (0x0001697c) popup_midp_note_alarm_window_t11

0x9dc9,	// (0x0001698e) scroll_pane_cp17_ParamLimits

0x9dc9,	// (0x0001698e) scroll_pane_cp17

0x60a3,	// (0x00012c68) volume_small_pane_cp_g1

0x63b4,	// (0x00012f79) volume_small_pane_cp_g2

0x63bd,	// (0x00012f82) volume_small_pane_cp_g3

0x63c6,	// (0x00012f8b) volume_small_pane_cp_g4

0x63cf,	// (0x00012f94) volume_small_pane_cp_g5

0x63d8,	// (0x00012f9d) volume_small_pane_cp_g6

0x63e1,	// (0x00012fa6) volume_small_pane_cp_g7

0x63ea,	// (0x00012faf) volume_small_pane_cp_g8

0x63f3,	// (0x00012fb8) volume_small_pane_cp_g9

0x63fc,	// (0x00012fc1) volume_small_pane_cp_g10

0x8932,	// (0x000154f7) midp_ticker_pane_g1_ParamLimits

0x893e,	// (0x00015503) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001c2f3) midp_ticker_pane_g_ParamLimits

0x894a,	// (0x0001550f) midp_ticker_pane_t1_ParamLimits

0x8bdd,	// (0x000157a2) aid_fill_nsta_2

0x95dc,	// (0x000161a1) list_form2_midp_pane

0xa7b5,	// (0x0001737a) midp_editing_number_pane_ParamLimits

0xa7c4,	// (0x00017389) midp_ticker_pane_ParamLimits

0xb81c,	// (0x000183e1) form2_midp_field_pane

0xb840,	// (0x00018405) scroll_pane_cp51

0xb860,	// (0x00018425) form2_midp_button_pane_ParamLimits

0xb860,	// (0x00018425) form2_midp_button_pane

0xb872,	// (0x00018437) form2_midp_content_pane_ParamLimits

0xb872,	// (0x00018437) form2_midp_content_pane

0xb88c,	// (0x00018451) form2_midp_field_choice_group_pane

0xb894,	// (0x00018459) form2_midp_field_pane_g1

0xb89c,	// (0x00018461) form2_midp_field_pane_g2

0xb8a4,	// (0x00018469) form2_midp_field_pane_g3

0xb8ac,	// (0x00018471) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0001c689) form2_midp_field_pane_g

0xb8b4,	// (0x00018479) form2_midp_gauge_slider_pane

0xb8bc,	// (0x00018481) form2_midp_gauge_wait_pane

0xb8c4,	// (0x00018489) form2_midp_image_pane_ParamLimits

0xb8c4,	// (0x00018489) form2_midp_image_pane

0xb8df,	// (0x000184a4) form2_midp_label_pane_ParamLimits

0xb8df,	// (0x000184a4) form2_midp_label_pane

0xb8fe,	// (0x000184c3) form2_midp_label_pane_cp_ParamLimits

0xb8fe,	// (0x000184c3) form2_midp_label_pane_cp

0xb91f,	// (0x000184e4) form2_midp_string_pane_ParamLimits

0xb91f,	// (0x000184e4) form2_midp_string_pane

0xb931,	// (0x000184f6) form2_midp_text_pane_ParamLimits

0xb931,	// (0x000184f6) form2_midp_text_pane

0xb952,	// (0x00018517) form2_midp_time_pane

0xb962,	// (0x00018527) input_focus_pane_cp51_ParamLimits

0xb962,	// (0x00018527) input_focus_pane_cp51

0xb97a,	// (0x0001853f) form2_midp_label_pane_t1_ParamLimits

0xb97a,	// (0x0001853f) form2_midp_label_pane_t1

0xb9c0,	// (0x00018585) form2_mdip_text_pane_t1_ParamLimits

0xb9c0,	// (0x00018585) form2_mdip_text_pane_t1

0xb9df,	// (0x000185a4) form2_midp_time_pane_t1

0xb9fa,	// (0x000185bf) form2_midp_gauge_slider_pane_t1

0xba0c,	// (0x000185d1) form2_midp_gauge_slider_pane_t2

0xba1e,	// (0x000185e3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0001c692) form2_midp_gauge_slider_pane_t

0xba30,	// (0x000185f5) form2_midp_slider_pane

0xba3c,	// (0x00018601) form2_midp_gauge_wait_pane_t1

0xba4a,	// (0x0001860f) form2_midp_wait_pane_ParamLimits

0xba4a,	// (0x0001860f) form2_midp_wait_pane

0xba75,	// (0x0001863a) list_single_2graphic_pane_cp4_ParamLimits

0xba75,	// (0x0001863a) list_single_2graphic_pane_cp4

0x92ee,	// (0x00015eb3) list_single_midp_graphic_pane_cp_ParamLimits

0x92ee,	// (0x00015eb3) list_single_midp_graphic_pane_cp

0x36bb,	// (0x00010280) list_highlight_pane_cp20

0xba8e,	// (0x00018653) list_single_2graphic_pane_g1_cp4

0xacc5,	// (0x0001788a) list_single_2graphic_pane_g2_cp4

0xba96,	// (0x0001865b) list_single_2graphic_pane_t1_cp4

0x3775,	// (0x0001033a) list_highlight_pane_cp21

0xbaa5,	// (0x0001866a) list_single_midp_graphic_pane_g4_cp

0xbab4,	// (0x00018679) list_single_midp_graphic_pane_t1_cp

0xbac9,	// (0x0001868e) form2_mdip_string_pane_t1_ParamLimits

0xbac9,	// (0x0001868e) form2_mdip_string_pane_t1

0x36bb,	// (0x00010280) bg_wml_button_pane_cp2

0x3542,	// (0x00010107) form2_midp_image_pane_g1

0x3e0d,	// (0x000109d2) list_double_large_graphic_pane_g5_ParamLimits

0x3e0d,	// (0x000109d2) list_double_large_graphic_pane_g5

0x885c,	// (0x00015421) midp_form_pane_ParamLimits

0x3775,	// (0x0001033a) main_apps_wheel_pane_ParamLimits

0x5ca0,	// (0x00012865) popup_preview_window_ParamLimits

0x5ca0,	// (0x00012865) popup_preview_window

0x5e87,	// (0x00012a4c) popup_touch_info_window_ParamLimits

0x5e87,	// (0x00012a4c) popup_touch_info_window

0x5ea9,	// (0x00012a6e) popup_touch_menu_window_ParamLimits

0x5ea9,	// (0x00012a6e) popup_touch_menu_window

0x3538,	// (0x000100fd) bg_popup_sub_pane_cp6

0xbb65,	// (0x0001872a) list_touch_menu_pane

0xbb6d,	// (0x00018732) list_single_touch_menu_pane_ParamLimits

0xbb6d,	// (0x00018732) list_single_touch_menu_pane

0xbb85,	// (0x0001874a) list_single_touch_menu_pane_t1

0x3775,	// (0x0001033a) bg_popup_sub_pane_cp7_ParamLimits

0x3775,	// (0x0001033a) bg_popup_sub_pane_cp7

0xbb93,	// (0x00018758) heading_sub_pane

0xbb9b,	// (0x00018760) list_touch_info_pane_ParamLimits

0xbb9b,	// (0x00018760) list_touch_info_pane

0xbbaa,	// (0x0001876f) list_single_touch_info_pane_ParamLimits

0xbbaa,	// (0x0001876f) list_single_touch_info_pane

0xbbbc,	// (0x00018781) list_single_touch_info_pane_t1

0xbbca,	// (0x0001878f) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0001c6a0) list_single_touch_info_pane_t

0x8854,	// (0x00015419) bg_popup_heading_pane_cp

0xbbd8,	// (0x0001879d) heading_sub_pane_t1

0x921f,	// (0x00015de4) bg_popup_preview_window_pane_cp_ParamLimits

0x921f,	// (0x00015de4) bg_popup_preview_window_pane_cp

0xbb93,	// (0x00018758) heading_preview_pane

0xbb9b,	// (0x00018760) list_preview_pane_ParamLimits

0xbb9b,	// (0x00018760) list_preview_pane

0xbbe6,	// (0x000187ab) popup_preview_window_g1

0xbbaa,	// (0x0001876f) list_single_preview_pane_ParamLimits

0xbbaa,	// (0x0001876f) list_single_preview_pane

0xbbee,	// (0x000187b3) list_single_preview_pane_g1

0xbbf6,	// (0x000187bb) list_single_preview_pane_t1

0xbbbc,	// (0x00018781) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0001c6a5) list_single_preview_pane_t

0xbc04,	// (0x000187c9) bg_popup_heading_pane_cp2_ParamLimits

0xbc04,	// (0x000187c9) bg_popup_heading_pane_cp2

0xbc1a,	// (0x000187df) heading_preview_pane_g1

0xbc22,	// (0x000187e7) heading_preview_pane_t1_ParamLimits

0xbc22,	// (0x000187e7) heading_preview_pane_t1

0x386b,	// (0x00010430) soft_indicator_pane_t1_ParamLimits

0x3dcd,	// (0x00010992) scroll_pane_ParamLimits

0x7fc2,	// (0x00014b87) scroll_sc2_left_pane

0x7fcb,	// (0x00014b90) scroll_sc2_right_pane

0x7fea,	// (0x00014baf) scroll_bg_pane_g1_ParamLimits

0x7fff,	// (0x00014bc4) scroll_bg_pane_g2_ParamLimits

0x8017,	// (0x00014bdc) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001c27e) scroll_bg_pane_g_ParamLimits

0x7fea,	// (0x00014baf) scroll_handle_pane_g1_ParamLimits

0x8039,	// (0x00014bfe) scroll_handle_pane_g2_ParamLimits

0x8017,	// (0x00014bdc) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001c285) scroll_handle_pane_g_ParamLimits

0x58e5,	// (0x000124aa) popup_choice_list_window_ParamLimits

0x58e5,	// (0x000124aa) popup_choice_list_window

0x900b,	// (0x00015bd0) choice_list_pane

0x90c7,	// (0x00015c8c) cell_toolbar_pane_t1

0x90ef,	// (0x00015cb4) toolbar_button_pane_ParamLimits

0xa293,	// (0x00016e58) ai_gene_pane_1_t2_ParamLimits

0xa293,	// (0x00016e58) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x0001c4ad) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x0001c4ad) ai_gene_pane_1_t

0xbc3f,	// (0x00018804) scroll_sc2_left_pane_g1

0xbc3f,	// (0x00018804) scroll_sc2_right_pane_g1

0x8b83,	// (0x00015748) bg_popup_sub_pane_cp10

0xbc49,	// (0x0001880e) list_choice_list_pane

0xbc62,	// (0x00018827) list_single_choice_list_pane_ParamLimits

0xbc62,	// (0x00018827) list_single_choice_list_pane

0xbc7a,	// (0x0001883f) list_single_choice_list_pane_g1

0x40e0,	// (0x00010ca5) list_single_choice_list_pane_t1_ParamLimits

0x40e0,	// (0x00010ca5) list_single_choice_list_pane_t1

0xbc82,	// (0x00018847) choice_list_pane_g1

0xbc8a,	// (0x0001884f) choice_list_pane_t1

0x3538,	// (0x000100fd) input_focus_pane_cp11

0x42ae,	// (0x00010e73) title_pane_stacon_g2_ParamLimits

0x42ae,	// (0x00010e73) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001c264) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001c264) title_pane_stacon_g

0x8854,	// (0x00015419) cursor_press_pane

0x599f,	// (0x00012564) popup_fep_hwr_window_ParamLimits

0x599f,	// (0x00012564) popup_fep_hwr_window

0x5a29,	// (0x000125ee) popup_fep_vkb_window_ParamLimits

0x5a29,	// (0x000125ee) popup_fep_vkb_window

0xbc98,	// (0x0001885d) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0001c6ce) fep_vkb_side_pane_g_ParamLimits

0x643e,	// (0x00013003) fep_hwr_candidate_pane_ParamLimits

0x643e,	// (0x00013003) fep_hwr_candidate_pane

0x6468,	// (0x0001302d) fep_hwr_side_pane_ParamLimits

0x6468,	// (0x0001302d) fep_hwr_side_pane

0x648a,	// (0x0001304f) fep_hwr_top_pane_ParamLimits

0x648a,	// (0x0001304f) fep_hwr_top_pane

0x64a2,	// (0x00013067) fep_hwr_write_pane_ParamLimits

0x64a2,	// (0x00013067) fep_hwr_write_pane

0xfb09,	// (0x0001c6ce) fep_vkb_side_pane_g

0xbca0,	// (0x00018865) fep_hwr_top_pane_g1

0xbcb2,	// (0x00018877) fep_hwr_top_pane_g2

0x64dc,	// (0x000130a1) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0001c6aa) fep_hwr_top_pane_g

0x64f1,	// (0x000130b6) fep_hwr_top_text_pane

0x818e,	// (0x00014d53) fep_hwr_top_text_pane_g1

0xbce8,	// (0x000188ad) fep_hwr_top_text_pane_t1

0x65fb,	// (0x000131c0) fep_hwr_candidate_pane_g1

0xbf33,	// (0x00018af8) fep_vkb_keypad_pane_g3_ParamLimits

0xbf33,	// (0x00018af8) fep_vkb_keypad_pane_g3

0xbf5f,	// (0x00018b24) fep_vkb_keypad_pane_g4_ParamLimits

0xbf5f,	// (0x00018b24) fep_vkb_keypad_pane_g4

0xbfd6,	// (0x00018b9b) fep_vkb_bottom_pane_g2_ParamLimits

0xbfd6,	// (0x00018b9b) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0001c6d5) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0001c6d5) fep_vkb_bottom_pane_g

0xbc3f,	// (0x00018804) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0001c6df) cell_vkb_side_pane_g

0xc061,	// (0x00018c26) cell_vkb_side_pane_t1

0xc06f,	// (0x00018c34) cell_vkb_side_pane_t1_copy1

0xbc3f,	// (0x00018804) bg_fep_vkb_candidate_pane_g2

0xc1b3,	// (0x00018d78) cell_vkb_candidate_pane_ParamLimits

0xbcf6,	// (0x000188bb) aid_size_cell_vkb_ParamLimits

0xbcf6,	// (0x000188bb) aid_size_cell_vkb

0xc1b3,	// (0x00018d78) cell_vkb_candidate_pane

0x6622,	// (0x000131e7) bg_popup_fep_shadow_pane_g1

0xbd88,	// (0x0001894d) fep_vkb_bottom_pane_ParamLimits

0xbd88,	// (0x0001894d) fep_vkb_bottom_pane

0xbdc5,	// (0x0001898a) fep_vkb_candidate_pane_ParamLimits

0xbdc5,	// (0x0001898a) fep_vkb_candidate_pane

0xbde1,	// (0x000189a6) fep_vkb_keypad_pane_ParamLimits

0xbde1,	// (0x000189a6) fep_vkb_keypad_pane

0xbe14,	// (0x000189d9) fep_vkb_side_pane_ParamLimits

0xbe14,	// (0x000189d9) fep_vkb_side_pane

0xbe50,	// (0x00018a15) fep_vkb_top_pane_ParamLimits

0xbe50,	// (0x00018a15) fep_vkb_top_pane

0xbe8c,	// (0x00018a51) fep_vkb_top_pane_g1_ParamLimits

0xbe8c,	// (0x00018a51) fep_vkb_top_pane_g1

0xbe9b,	// (0x00018a60) fep_vkb_top_pane_g2_ParamLimits

0xbe9b,	// (0x00018a60) fep_vkb_top_pane_g2

0xbeaa,	// (0x00018a6f) fep_vkb_top_pane_g3_ParamLimits

0xbeaa,	// (0x00018a6f) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0001c6c5) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0001c6c5) fep_vkb_top_pane_g

0xbec8,	// (0x00018a8d) fep_vkb_top_text_pane_ParamLimits

0xbec8,	// (0x00018a8d) fep_vkb_top_text_pane

0xbed9,	// (0x00018a9e) fep_vkb_side_pane_g1_ParamLimits

0xbed9,	// (0x00018a9e) fep_vkb_side_pane_g1

0xbf22,	// (0x00018ae7) grid_vkb_side_pane_ParamLimits

0xbf22,	// (0x00018ae7) grid_vkb_side_pane

0x662a,	// (0x000131ef) bg_popup_fep_shadow_pane_g2

0x6633,	// (0x000131f8) bg_popup_fep_shadow_pane_g3

0x663b,	// (0x00013200) bg_popup_fep_shadow_pane_g4

0x6644,	// (0x00013209) bg_popup_fep_shadow_pane_g5

0x664e,	// (0x00013213) bg_popup_fep_shadow_pane_g6

0x6656,	// (0x0001321b) bg_popup_fep_shadow_pane_g7

0x3fc0,	// (0x00010b85) bg_popup_fep_shadow_pane_g8

0xbf81,	// (0x00018b46) grid_vkb_keypad_number_pane_ParamLimits

0xbf81,	// (0x00018b46) grid_vkb_keypad_number_pane

0xbf95,	// (0x00018b5a) grid_vkb_keypad_pane_ParamLimits

0xbf95,	// (0x00018b5a) grid_vkb_keypad_pane

0xbfbb,	// (0x00018b80) fep_vkb_bottom_pane_g1_ParamLimits

0xbfbb,	// (0x00018b80) fep_vkb_bottom_pane_g1

0xbfe4,	// (0x00018ba9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbfe4,	// (0x00018ba9) grid_vkb_keypad_bottom_left_pane

0xbff9,	// (0x00018bbe) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbff9,	// (0x00018bbe) grid_vkb_keypad_bottom_right_pane

0xc00e,	// (0x00018bd3) fep_vkb_top_text_pane_g1

0xc029,	// (0x00018bee) fep_vkb_top_text_pane_t1

0xc03e,	// (0x00018c03) cell_vkb_side_pane_ParamLimits

0xc03e,	// (0x00018c03) cell_vkb_side_pane

0xbc3f,	// (0x00018804) cell_vkb_side_pane_g1

0xc07d,	// (0x00018c42) cell_vkb_keypad_pane_ParamLimits

0xc07d,	// (0x00018c42) cell_vkb_keypad_pane

0xc10a,	// (0x00018ccf) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0001c6f2) bg_popup_fep_shadow_pane_g

0x6668,	// (0x0001322d) cell_hwr_side_pane_g1

0x6668,	// (0x0001322d) cell_hwr_side_pane_g2

0xc114,	// (0x00018cd9) cell_vkb_keypad_pane_t1

0xc122,	// (0x00018ce7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc122,	// (0x00018ce7) cell_vkb_keypad_bottom_left_pane

0xc13f,	// (0x00018d04) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc13f,	// (0x00018d04) cell_vkb_keypad_bottom_right_pane

0xbc3f,	// (0x00018804) cell_vkb_keypad_bottom_left_pane_g1

0xbc3f,	// (0x00018804) cell_vkb_keypad_bottom_right_pane_g1

0xc178,	// (0x00018d3d) cell_vkb_keypad_number_pane_ParamLimits

0xc178,	// (0x00018d3d) cell_vkb_keypad_number_pane

0xc197,	// (0x00018d5c) cell_vkb_keypad_number_pane_g1

0xc1a1,	// (0x00018d66) cell_vkb_keypad_number_pane_g2

0xc1aa,	// (0x00018d6f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0001c6e4) cell_vkb_keypad_number_pane_g

0xc114,	// (0x00018cd9) cell_vkb_keypad_number_pane_t1

0xc1d4,	// (0x00018d99) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0001c705) cell_hwr_side_pane_g

0xc1ed,	// (0x00018db2) cell_hwr_side_pane_t1

0x6672,	// (0x00013237) cell_hwr_side_pane_t1_copy1

0x6680,	// (0x00013245) cell_hwr_candidate_pane_g1

0x66af,	// (0x00013274) cell_hwr_candidate_pane_t1

0xbc3f,	// (0x00018804) cell_vkb_candidate_pane_g2

0xc231,	// (0x00018df6) cell_vkb_candidate_pane_t1

0x6405,	// (0x00012fca) bg_popup_fep_shadow_pane_ParamLimits

0x6405,	// (0x00012fca) bg_popup_fep_shadow_pane

0x64bc,	// (0x00013081) bg_fep_hwr_top_pane_g4

0xbcc4,	// (0x00018889) bg_hwr_side_pane_g1_ParamLimits

0xbcc4,	// (0x00018889) bg_hwr_side_pane_g1

0x652f,	// (0x000130f4) cell_hwr_side_pane_ParamLimits

0x652f,	// (0x000130f4) cell_hwr_side_pane

0x656c,	// (0x00013131) fep_hwr_write_pane_g1_ParamLimits

0x656c,	// (0x00013131) fep_hwr_write_pane_g1

0x6579,	// (0x0001313e) fep_hwr_write_pane_g2_ParamLimits

0x6579,	// (0x0001313e) fep_hwr_write_pane_g2

0x6586,	// (0x0001314b) fep_hwr_write_pane_g3_ParamLimits

0x6586,	// (0x0001314b) fep_hwr_write_pane_g3

0x6594,	// (0x00013159) fep_hwr_write_pane_g4_ParamLimits

0x6594,	// (0x00013159) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0001c6b1) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0001c6b1) fep_hwr_write_pane_g

0x64bc,	// (0x00013081) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x64bc,	// (0x00013081) bg_fep_hwr_candidate_pane_g2

0x65a9,	// (0x0001316e) cell_hwr_candidate_pane_ParamLimits

0x65a9,	// (0x0001316e) cell_hwr_candidate_pane

0x65fb,	// (0x000131c0) fep_hwr_candidate_pane_g1_ParamLimits

0xbd24,	// (0x000188e9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd24,	// (0x000188e9) bg_popup_fep_shadow_pane_cp2

0xbeba,	// (0x00018a7f) fep_vkb_top_pane_g4_ParamLimits

0xbeba,	// (0x00018a7f) fep_vkb_top_pane_g4

0xbf00,	// (0x00018ac5) fep_vkb_side_pane_g2_ParamLimits

0xbf00,	// (0x00018ac5) fep_vkb_side_pane_g2

0x7c11,	// (0x000147d6) list_setting_pane_t4_ParamLimits

0x7c11,	// (0x000147d6) list_setting_pane_t4

0x7c8d,	// (0x00014852) list_setting_number_pane_t5_ParamLimits

0x7c8d,	// (0x00014852) list_setting_number_pane_t5

0x81d5,	// (0x00014d9a) list_double_heading_pane_cp2_ParamLimits

0x81d5,	// (0x00014d9a) list_double_heading_pane_cp2

0xc23f,	// (0x00018e04) list_double_heading_pane_g1_cp2_ParamLimits

0xc23f,	// (0x00018e04) list_double_heading_pane_g1_cp2

0xc24b,	// (0x00018e10) list_double_heading_pane_g2_cp2_ParamLimits

0xc24b,	// (0x00018e10) list_double_heading_pane_g2_cp2

0xc25f,	// (0x00018e24) list_double_heading_pane_t1_cp2_ParamLimits

0xc25f,	// (0x00018e24) list_double_heading_pane_t1_cp2

0xc275,	// (0x00018e3a) list_double_heading_pane_t2_cp2_ParamLimits

0xc275,	// (0x00018e3a) list_double_heading_pane_t2_cp2

0x3530,	// (0x000100f5) aid_value_unit2

0x510d,	// (0x00011cd2) popup_preview_fixed_window

0x394b,	// (0x00010510) bg_popup_preview_window_pane_cp02

0xc287,	// (0x00018e4c) list_preview_fixed_pane

0xc2cd,	// (0x00018e92) list_empty_pane_fp_ParamLimits

0xc2cd,	// (0x00018e92) list_empty_pane_fp

0xc2cd,	// (0x00018e92) list_single_cale_day_pane_fp_ParamLimits

0xc2cd,	// (0x00018e92) list_single_cale_day_pane_fp

0xc2cd,	// (0x00018e92) list_single_graphic_heading_pane_fp_ParamLimits

0xc2cd,	// (0x00018e92) list_single_graphic_heading_pane_fp

0xc2cd,	// (0x00018e92) list_single_graphic_pane_fp_ParamLimits

0xc2cd,	// (0x00018e92) list_single_graphic_pane_fp

0xc2cd,	// (0x00018e92) list_single_heading_pane_fp_ParamLimits

0xc2cd,	// (0x00018e92) list_single_heading_pane_fp

0xc2cd,	// (0x00018e92) list_single_pane_fp_ParamLimits

0xc2cd,	// (0x00018e92) list_single_pane_fp

0xc2e6,	// (0x00018eab) list_single_pane_fp_g1_ParamLimits

0xc2e6,	// (0x00018eab) list_single_pane_fp_g1

0x3e22,	// (0x000109e7) list_single_pane_fp_g2_ParamLimits

0x3e22,	// (0x000109e7) list_single_pane_fp_g2

0xc2f2,	// (0x00018eb7) list_single_pane_fp_g3_ParamLimits

0xc2f2,	// (0x00018eb7) list_single_pane_fp_g3

0xc306,	// (0x00018ecb) list_single_pane_fp_g4_ParamLimits

0xc306,	// (0x00018ecb) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x0001c718) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x0001c718) list_single_pane_fp_g

0xc312,	// (0x00018ed7) list_single_pane_fp_t1_ParamLimits

0xc312,	// (0x00018ed7) list_single_pane_fp_t1

0xc329,	// (0x00018eee) list_single_graphic_pane_fp_g1_ParamLimits

0xc329,	// (0x00018eee) list_single_graphic_pane_fp_g1

0xc2e6,	// (0x00018eab) list_single_graphic_pane_fp_g2_ParamLimits

0xc2e6,	// (0x00018eab) list_single_graphic_pane_fp_g2

0x3e22,	// (0x000109e7) list_single_graphic_pane_fp_g3_ParamLimits

0x3e22,	// (0x000109e7) list_single_graphic_pane_fp_g3

0xc2f2,	// (0x00018eb7) list_single_graphic_pane_fp_g4_ParamLimits

0xc2f2,	// (0x00018eb7) list_single_graphic_pane_fp_g4

0xc306,	// (0x00018ecb) list_single_graphic_pane_fp_g5_ParamLimits

0xc306,	// (0x00018ecb) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c721) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c721) list_single_graphic_pane_fp_g

0xc335,	// (0x00018efa) list_single_graphic_pane_fp_t1_ParamLimits

0xc335,	// (0x00018efa) list_single_graphic_pane_fp_t1

0xc329,	// (0x00018eee) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc329,	// (0x00018eee) list_single_graphic_heading_pane_fp_g1

0xc2e6,	// (0x00018eab) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc2e6,	// (0x00018eab) list_single_graphic_heading_pane_fp_g2

0x3e22,	// (0x000109e7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3e22,	// (0x000109e7) list_single_graphic_heading_pane_fp_g3

0xc2f2,	// (0x00018eb7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc2f2,	// (0x00018eb7) list_single_graphic_heading_pane_fp_g4

0xc306,	// (0x00018ecb) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc306,	// (0x00018ecb) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c721) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c721) list_single_graphic_heading_pane_fp_g

0xc34b,	// (0x00018f10) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc34b,	// (0x00018f10) list_single_graphic_heading_pane_fp_t1

0xc361,	// (0x00018f26) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc361,	// (0x00018f26) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x0001c72c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x0001c72c) list_single_graphic_heading_pane_fp_t

0xc373,	// (0x00018f38) list_single_cale_day_pane_fp_g1_ParamLimits

0xc373,	// (0x00018f38) list_single_cale_day_pane_fp_g1

0xc3ab,	// (0x00018f70) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3ab,	// (0x00018f70) list_single_cale_day_pane_fp_g2

0xc3b7,	// (0x00018f7c) list_single_cale_day_pane_fp_g3_ParamLimits

0xc3b7,	// (0x00018f7c) list_single_cale_day_pane_fp_g3

0xc3df,	// (0x00018fa4) list_single_cale_day_pane_fp_g4_ParamLimits

0xc3df,	// (0x00018fa4) list_single_cale_day_pane_fp_g4

0xc403,	// (0x00018fc8) list_single_cale_day_pane_fp_g5_ParamLimits

0xc403,	// (0x00018fc8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x0001c731) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x0001c731) list_single_cale_day_pane_fp_g

0xc427,	// (0x00018fec) list_single_cale_day_pane_fp_t1_ParamLimits

0xc427,	// (0x00018fec) list_single_cale_day_pane_fp_t1

0xc44d,	// (0x00019012) list_single_cale_day_pane_fp_t2_ParamLimits

0xc44d,	// (0x00019012) list_single_cale_day_pane_fp_t2

0xc466,	// (0x0001902b) list_single_cale_day_pane_fp_t3_ParamLimits

0xc466,	// (0x0001902b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x0001c73c) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x0001c73c) list_single_cale_day_pane_fp_t

0xc2e6,	// (0x00018eab) list_empty_pane_fp_g1_ParamLimits

0xc2e6,	// (0x00018eab) list_empty_pane_fp_g1

0xc47f,	// (0x00019044) list_empty_pane_fp_t1

0xc48d,	// (0x00019052) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x0001c743) list_empty_pane_fp_t

0xc2e6,	// (0x00018eab) list_single_heading_pane_fp_g1_ParamLimits

0xc2e6,	// (0x00018eab) list_single_heading_pane_fp_g1

0x3e22,	// (0x000109e7) list_single_heading_pane_fp_g2_ParamLimits

0x3e22,	// (0x000109e7) list_single_heading_pane_fp_g2

0xc2f2,	// (0x00018eb7) list_single_heading_pane_fp_g3_ParamLimits

0xc2f2,	// (0x00018eb7) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x0001c748) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0001c748) list_single_heading_pane_fp_g

0xc49b,	// (0x00019060) list_single_heading_pane_fp_t1_ParamLimits

0xc49b,	// (0x00019060) list_single_heading_pane_fp_t1

0xc4ad,	// (0x00019072) list_single_heading_pane_fp_t2_ParamLimits

0xc4ad,	// (0x00019072) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0001c74f) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0001c74f) list_single_heading_pane_fp_t

0x40f5,	// (0x00010cba) aid_size_cell_fast

0x392e,	// (0x000104f3) soft_indicator_pane_cp1_t1

0x4132,	// (0x00010cf7) cell_app_pane_cp2_ParamLimits

0x4132,	// (0x00010cf7) cell_app_pane_cp2

0x6427,	// (0x00012fec) fep_hwr_candidate_drop_down_list_pane

0x6615,	// (0x000131da) fep_hwr_candidate_pane_g3_ParamLimits

0x6615,	// (0x000131da) fep_hwr_candidate_pane_g3

0x2a88,	// (0x0000f64d) fep_hwr_candidate_pane_g4_ParamLimits

0x2a88,	// (0x0000f64d) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0001c6be) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0001c6be) fep_hwr_candidate_pane_g

0xbdb4,	// (0x00018979) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbdb4,	// (0x00018979) fep_vkb_candidate_drop_down_list_pane

0xc1dc,	// (0x00018da1) fep_vkb_candidate_pane_g3

0xc1e4,	// (0x00018da9) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0001c6eb) fep_vkb_candidate_pane_g

0x6680,	// (0x00013245) cell_hwr_candidate_pane_g1_ParamLimits

0x668e,	// (0x00013253) cell_hwr_candidate_pane_g3_ParamLimits

0x668e,	// (0x00013253) cell_hwr_candidate_pane_g3

0xc9f6,	// (0x000195bb) cell_hwr_candidate_pane_g4_ParamLimits

0xc9f6,	// (0x000195bb) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x0001c70a) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x0001c70a) cell_hwr_candidate_pane_g

0xc1fb,	// (0x00018dc0) cell_vkb_candidate_pane_g3_ParamLimits

0xc1fb,	// (0x00018dc0) cell_vkb_candidate_pane_g3

0xc216,	// (0x00018ddb) cell_vkb_candidate_pane_g4_ParamLimits

0xc216,	// (0x00018ddb) cell_vkb_candidate_pane_g4

0xc4c3,	// (0x00019088) cell_app_pane_cp2_g1_ParamLimits

0xc4c3,	// (0x00019088) cell_app_pane_cp2_g1

0xc4e1,	// (0x000190a6) cell_app_pane_cp2_g2_ParamLimits

0xc4e1,	// (0x000190a6) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x0001c754) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x0001c754) cell_app_pane_cp2_g

0xc4ed,	// (0x000190b2) cell_app_pane_cp2_t1_ParamLimits

0xc4ed,	// (0x000190b2) cell_app_pane_cp2_t1

0x3eed,	// (0x00010ab2) grid_highlight_pane_cp1_ParamLimits

0x3eed,	// (0x00010ab2) grid_highlight_pane_cp1

0x66cd,	// (0x00013292) cell_hwr_candidate_pane_cp1_ParamLimits

0x66cd,	// (0x00013292) cell_hwr_candidate_pane_cp1

0x6680,	// (0x00013245) fep_hwr_candidate_drop_down_list_pane_g1

0x66f1,	// (0x000132b6) fep_hwr_candidate_drop_down_list_pane_g2

0x66fe,	// (0x000132c3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0001c759) fep_hwr_candidate_drop_down_list_pane_g

0x670b,	// (0x000132d0) fep_hwr_candidate_drop_down_list_scroll_pane

0x6714,	// (0x000132d9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6714,	// (0x000132d9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6721,	// (0x000132e6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6721,	// (0x000132e6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x672e,	// (0x000132f3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x672e,	// (0x000132f3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x673b,	// (0x00013300) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x673b,	// (0x00013300) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6756,	// (0x0001331b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6756,	// (0x0001331b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6771,	// (0x00013336) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6771,	// (0x00013336) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x678c,	// (0x00013351) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x678c,	// (0x00013351) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x67a7,	// (0x0001336c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x67a7,	// (0x0001336c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0001c760) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0001c760) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc4ff,	// (0x000190c4) cell_vkb_candidate_pane_cp1_ParamLimits

0xc4ff,	// (0x000190c4) cell_vkb_candidate_pane_cp1

0xbeba,	// (0x00018a7f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbeba,	// (0x00018a7f) fep_vkb_candidate_drop_down_list_pane_g1

0xc525,	// (0x000190ea) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc525,	// (0x000190ea) fep_vkb_candidate_drop_down_list_pane_g2

0xc532,	// (0x000190f7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc532,	// (0x000190f7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x0001c771) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x0001c771) fep_vkb_candidate_drop_down_list_pane_g

0xc53f,	// (0x00019104) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc53f,	// (0x00019104) fep_vkb_candidate_drop_down_list_scroll_pane

0xc54c,	// (0x00019111) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc54c,	// (0x00019111) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc559,	// (0x0001911e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc559,	// (0x0001911e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc565,	// (0x0001912a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc565,	// (0x0001912a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc571,	// (0x00019136) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc571,	// (0x00019136) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc592,	// (0x00019157) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc592,	// (0x00019157) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5b3,	// (0x00019178) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5b3,	// (0x00019178) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc5d4,	// (0x00019199) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc5d4,	// (0x00019199) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc5f5,	// (0x000191ba) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc5f5,	// (0x000191ba) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x0001c778) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x0001c778) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7564,	// (0x00014129) title_pane_g1_ParamLimits

0x7571,	// (0x00014136) title_pane_g2_ParamLimits

0xf529,	// (0x0001c0ee) title_pane_g_ParamLimits

0x817e,	// (0x00014d43) aid_call2_pane

0x8186,	// (0x00014d4b) aid_call_pane

0x818e,	// (0x00014d53) popup_clock_analogue_window_g1

0x818e,	// (0x00014d53) popup_clock_analogue_window_g2

0x5491,	// (0x00012056) popup_clock_analogue_window_g3

0x549a,	// (0x0001205f) popup_clock_analogue_window_g4

0x3542,	// (0x00010107) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0001c293) popup_clock_analogue_window_g

0x54a2,	// (0x00012067) popup_clock_analogue_window_t1

0x54b0,	// (0x00012075) clock_digital_number_pane_ParamLimits

0x54b0,	// (0x00012075) clock_digital_number_pane

0x54bc,	// (0x00012081) clock_digital_number_pane_cp02_ParamLimits

0x54bc,	// (0x00012081) clock_digital_number_pane_cp02

0x54c8,	// (0x0001208d) clock_digital_number_pane_cp03_ParamLimits

0x54c8,	// (0x0001208d) clock_digital_number_pane_cp03

0x54d4,	// (0x00012099) clock_digital_number_pane_cp04_ParamLimits

0x54d4,	// (0x00012099) clock_digital_number_pane_cp04

0x54e0,	// (0x000120a5) clock_digital_separator_pane_ParamLimits

0x54e0,	// (0x000120a5) clock_digital_separator_pane

0x54ec,	// (0x000120b1) popup_clock_digital_window_t1_ParamLimits

0x54ec,	// (0x000120b1) popup_clock_digital_window_t1

0x3542,	// (0x00010107) clock_digital_number_pane_g1

0x3542,	// (0x00010107) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0001c29e) clock_digital_number_pane_g

0x3542,	// (0x00010107) clock_digital_separator_pane_g1

0x3542,	// (0x00010107) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0001c29e) clock_digital_separator_pane_g

0x8bc7,	// (0x0001578c) aid_fill_nsta_ParamLimits

0x8d13,	// (0x000158d8) indicator_nsta_pane_ParamLimits

0x8ea4,	// (0x00015a69) popup_clock_analogue_window

0x8ea4,	// (0x00015a69) popup_clock_digital_window

0xb618,	// (0x000181dd) grid_indicator_nsta_pane_ParamLimits

0xb641,	// (0x00018206) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0001c63e) clock_nsta_pane_t

0x5455,	// (0x0001201a) aid_size_max_handle

0x545f,	// (0x00012024) aid_size_min_handle

0x8854,	// (0x00015419) editor_scroll_pane

0xc610,	// (0x000191d5) ex_editor_pane

0x40bb,	// (0x00010c80) scroll_pane_cp13

0x3df9,	// (0x000109be) scroll_pane_cp14

0x81bd,	// (0x00014d82) scroll_pane_cp36

0x81eb,	// (0x00014db0) list_single_graphic_hl_pane_cp2_ParamLimits

0x81eb,	// (0x00014db0) list_single_graphic_hl_pane_cp2

0xa87a,	// (0x0001743f) list_single_graphic_hl_pane_ParamLimits

0xa87a,	// (0x0001743f) list_single_graphic_hl_pane

0xc618,	// (0x000191dd) aid_size_min_hl_cp1

0xc621,	// (0x000191e6) list_highlight_pane_cp34_ParamLimits

0xc621,	// (0x000191e6) list_highlight_pane_cp34

0xc632,	// (0x000191f7) list_single_graphic_hl_pane_g1_ParamLimits

0xc632,	// (0x000191f7) list_single_graphic_hl_pane_g1

0xc63f,	// (0x00019204) list_single_graphic_hl_pane_g2_ParamLimits

0xc63f,	// (0x00019204) list_single_graphic_hl_pane_g2

0xc63f,	// (0x00019204) list_single_graphic_hl_pane_g3_ParamLimits

0xc63f,	// (0x00019204) list_single_graphic_hl_pane_g3

0x871a,	// (0x000152df) list_single_graphic_hl_pane_g4_ParamLimits

0x871a,	// (0x000152df) list_single_graphic_hl_pane_g4

0xc64b,	// (0x00019210) list_single_graphic_hl_pane_g5_ParamLimits

0xc64b,	// (0x00019210) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x0001c789) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x0001c789) list_single_graphic_hl_pane_g

0xc65f,	// (0x00019224) list_single_graphic_hl_pane_t1_ParamLimits

0xc65f,	// (0x00019224) list_single_graphic_hl_pane_t1

0xc675,	// (0x0001923a) aid_size_min_hl_cp2

0xc67e,	// (0x00019243) list_highlight_pane_cp34_cp2_ParamLimits

0xc67e,	// (0x00019243) list_highlight_pane_cp34_cp2

0xc632,	// (0x000191f7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc632,	// (0x000191f7) list_single_graphic_hl_pane_g1_cp2

0xc68b,	// (0x00019250) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc68b,	// (0x00019250) list_single_graphic_hl_pane_g2_cp2

0xc697,	// (0x0001925c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc697,	// (0x0001925c) list_single_graphic_hl_pane_g3_cp2

0xc6a5,	// (0x0001926a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc6a5,	// (0x0001926a) list_single_graphic_hl_pane_g4_cp2

0xc6b1,	// (0x00019276) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc6b1,	// (0x00019276) list_single_graphic_hl_pane_g5_cp2

0x5799,	// (0x0001235e) control_pane_g4_ParamLimits

0x5799,	// (0x0001235e) control_pane_g4

0x8b83,	// (0x00015748) bg_popup_sub_pane_cp10_ParamLimits

0xbc49,	// (0x0001880e) list_choice_list_pane_ParamLimits

0xbc58,	// (0x0001881d) scroll_pane_cp23

0x394b,	// (0x00010510) bg_popup_preview_window_pane_cp02_ParamLimits

0xc287,	// (0x00018e4c) list_preview_fixed_pane_ParamLimits

0xc29d,	// (0x00018e62) list_preview_fixed_pane_cp_ParamLimits

0xc29d,	// (0x00018e62) list_preview_fixed_pane_cp

0xc2a9,	// (0x00018e6e) popup_preview_fixed_window_g1_ParamLimits

0xc2a9,	// (0x00018e6e) popup_preview_fixed_window_g1

0xc2b5,	// (0x00018e7a) popup_preview_fixed_window_g2_ParamLimits

0xc2b5,	// (0x00018e7a) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x0001c711) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x0001c711) popup_preview_fixed_window_g

0x53bf,	// (0x00011f84) aid_navi_side_left_pane_ParamLimits

0x53d4,	// (0x00011f99) aid_navi_side_right_pane_ParamLimits

0x53ec,	// (0x00011fb1) navi_icon_pane_stacon_ParamLimits

0x5400,	// (0x00011fc5) navi_navi_pane_stacon_ParamLimits

0x53ec,	// (0x00011fb1) navi_text_pane_stacon_ParamLimits

0x4fc4,	// (0x00011b89) main_text_info_pane

0xc6db,	// (0x000192a0) listscroll_text_info_pane

0xc6e3,	// (0x000192a8) list_text_info_pane_ParamLimits

0xc6e3,	// (0x000192a8) list_text_info_pane

0xc6f2,	// (0x000192b7) scroll_pane_cp24_ParamLimits

0xc6f2,	// (0x000192b7) scroll_pane_cp24

0xc710,	// (0x000192d5) list_text_info_pane_t1_ParamLimits

0xc710,	// (0x000192d5) list_text_info_pane_t1

0x5907,	// (0x000124cc) popup_fast_swap2_window_ParamLimits

0x5907,	// (0x000124cc) popup_fast_swap2_window

0xc735,	// (0x000192fa) aid_size_cell_fast2

0x3538,	// (0x000100fd) bg_popup_window_pane_cp17

0xc73f,	// (0x00019304) heading_pane_cp2

0xc747,	// (0x0001930c) listscroll_fast2_pane

0xc74f,	// (0x00019314) grid_fast2_pane

0xc759,	// (0x0001931e) listscroll_fast2_pane_g1

0xc763,	// (0x00019328) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x0001c794) listscroll_fast2_pane_g

0x40bb,	// (0x00010c80) scroll_pane_cp26

0xc76d,	// (0x00019332) cell_fast2_pane_ParamLimits

0xc76d,	// (0x00019332) cell_fast2_pane

0xc784,	// (0x00019349) cell_fast2_pane_g1

0xc78d,	// (0x00019352) cell_fast2_pane_g2

0xc796,	// (0x0001935b) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x0001c799) cell_fast2_pane_g

0x3bc0,	// (0x00010785) grid_highlight_pane_cp9

0x58c9,	// (0x0001248e) main_eswt_pane_ParamLimits

0x58c9,	// (0x0001248e) main_eswt_pane

0xc707,	// (0x000192cc) list_single_text_info_pane

0xc79e,	// (0x00019363) eswt_ctrl_button_pane

0xc79e,	// (0x00019363) eswt_ctrl_canvas_pane

0xc7a6,	// (0x0001936b) eswt_ctrl_combo_pane

0xc79e,	// (0x00019363) eswt_ctrl_default_pane

0xc79e,	// (0x00019363) eswt_ctrl_label_pane

0xc7ae,	// (0x00019373) eswt_ctrl_wait_pane

0xc7b6,	// (0x0001937b) eswt_shell_pane

0x3538,	// (0x000100fd) listscroll_eswt_app_pane

0xc7d6,	// (0x0001939b) popup_eswt_tasktip_window_ParamLimits

0xc7d6,	// (0x0001939b) popup_eswt_tasktip_window

0x921f,	// (0x00015de4) bg_popup_window_pane_cp18

0xc7ef,	// (0x000193b4) eswt_control_pane_g1_ParamLimits

0xc7ef,	// (0x000193b4) eswt_control_pane_g1

0xc7fc,	// (0x000193c1) eswt_control_pane_g2_ParamLimits

0xc7fc,	// (0x000193c1) eswt_control_pane_g2

0xc809,	// (0x000193ce) eswt_control_pane_g3_ParamLimits

0xc809,	// (0x000193ce) eswt_control_pane_g3

0xc816,	// (0x000193db) eswt_control_pane_g4_ParamLimits

0xc816,	// (0x000193db) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x0001c7a0) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x0001c7a0) eswt_control_pane_g

0x3eed,	// (0x00010ab2) bg_button_pane_ParamLimits

0x3eed,	// (0x00010ab2) bg_button_pane

0x3bd5,	// (0x0001079a) common_borders_pane_copy2_ParamLimits

0x3bd5,	// (0x0001079a) common_borders_pane_copy2

0xc823,	// (0x000193e8) control_button_pane_g1_ParamLimits

0xc823,	// (0x000193e8) control_button_pane_g1

0xc82f,	// (0x000193f4) control_button_pane_g2_ParamLimits

0xc82f,	// (0x000193f4) control_button_pane_g2

0xc83b,	// (0x00019400) control_button_pane_g3_ParamLimits

0xc83b,	// (0x00019400) control_button_pane_g3

0x0002,

0xfbe4,	// (0x0001c7a9) control_button_pane_g_ParamLimits

0xfbe4,	// (0x0001c7a9) control_button_pane_g

0xc84f,	// (0x00019414) control_button_pane_t1

0xc85d,	// (0x00019422) control_button_pane_t2

0x0001,

0xfbeb,	// (0x0001c7b0) control_button_pane_t

0x90fb,	// (0x00015cc0) bg_button_pane_g1

0x910b,	// (0x00015cd0) bg_button_pane_g2

0x9103,	// (0x00015cc8) bg_button_pane_g3

0x911b,	// (0x00015ce0) bg_button_pane_g4

0x9113,	// (0x00015cd8) bg_button_pane_g5

0x9123,	// (0x00015ce8) bg_button_pane_g6

0x912b,	// (0x00015cf0) bg_button_pane_g7

0x913b,	// (0x00015d00) bg_button_pane_g8

0x9133,	// (0x00015cf8) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0001c401) bg_button_pane_g

0xbc04,	// (0x000187c9) common_borders_pane_ParamLimits

0xbc04,	// (0x000187c9) common_borders_pane

0xc7ef,	// (0x000193b4) eswt_control_pane_g1_copy1_ParamLimits

0xc7ef,	// (0x000193b4) eswt_control_pane_g1_copy1

0xc7fc,	// (0x000193c1) eswt_control_pane_g2_copy1_ParamLimits

0xc7fc,	// (0x000193c1) eswt_control_pane_g2_copy1

0xc809,	// (0x000193ce) eswt_control_pane_g3_copy1_ParamLimits

0xc809,	// (0x000193ce) eswt_control_pane_g3_copy1

0xc816,	// (0x000193db) eswt_control_pane_g4_copy1_ParamLimits

0xc816,	// (0x000193db) eswt_control_pane_g4_copy1

0xbc3f,	// (0x00018804) bg_eswt_ctrl_canvas_pane_g1

0xbc04,	// (0x000187c9) common_borders_pane_cp2_ParamLimits

0xbc04,	// (0x000187c9) common_borders_pane_cp2

0xbc04,	// (0x000187c9) common_borders_pane_cp3_ParamLimits

0xbc04,	// (0x000187c9) common_borders_pane_cp3

0xc86b,	// (0x00019430) separator_horizontal_pane

0xc873,	// (0x00019438) separator_vertical_pane

0xc7ef,	// (0x000193b4) eswt_control_pane_g1_copy2_ParamLimits

0xc7ef,	// (0x000193b4) eswt_control_pane_g1_copy2

0xc7fc,	// (0x000193c1) eswt_control_pane_g2_copy2_ParamLimits

0xc7fc,	// (0x000193c1) eswt_control_pane_g2_copy2

0xc809,	// (0x000193ce) eswt_control_pane_g3_copy2_ParamLimits

0xc809,	// (0x000193ce) eswt_control_pane_g3_copy2

0xc816,	// (0x000193db) eswt_control_pane_g4_copy2_ParamLimits

0xc816,	// (0x000193db) eswt_control_pane_g4_copy2

0x3538,	// (0x000100fd) common_borders_pane_cp4

0xc87c,	// (0x00019441) separator_horizontal_pane_g1

0xc885,	// (0x0001944a) separator_horizontal_pane_g2

0xc88e,	// (0x00019453) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x0001c7b5) separator_horizontal_pane_g

0xc7ef,	// (0x000193b4) eswt_control_pane_g1_copy3_ParamLimits

0xc7ef,	// (0x000193b4) eswt_control_pane_g1_copy3

0xc7fc,	// (0x000193c1) eswt_control_pane_g2_copy3_ParamLimits

0xc7fc,	// (0x000193c1) eswt_control_pane_g2_copy3

0xc809,	// (0x000193ce) eswt_control_pane_g3_copy3_ParamLimits

0xc809,	// (0x000193ce) eswt_control_pane_g3_copy3

0xc816,	// (0x000193db) eswt_control_pane_g4_copy3_ParamLimits

0xc816,	// (0x000193db) eswt_control_pane_g4_copy3

0x3538,	// (0x000100fd) common_borders_pane_cp5

0xc897,	// (0x0001945c) separator_vertical_pane_g1

0xc8a0,	// (0x00019465) separator_vertical_pane_g2

0xc8a9,	// (0x0001946e) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x0001c7bc) separator_vertical_pane_g

0xc7ef,	// (0x000193b4) eswt_control_pane_g1_copy4_ParamLimits

0xc7ef,	// (0x000193b4) eswt_control_pane_g1_copy4

0xc7fc,	// (0x000193c1) eswt_control_pane_g2_copy4_ParamLimits

0xc7fc,	// (0x000193c1) eswt_control_pane_g2_copy4

0xc809,	// (0x000193ce) eswt_control_pane_g3_copy4_ParamLimits

0xc809,	// (0x000193ce) eswt_control_pane_g3_copy4

0xc816,	// (0x000193db) eswt_control_pane_g4_copy4_ParamLimits

0xc816,	// (0x000193db) eswt_control_pane_g4_copy4

0xc8b2,	// (0x00019477) eswt_ctrl_combo_button_pane

0xc8ba,	// (0x0001947f) eswt_ctrl_input_pane

0xc8c2,	// (0x00019487) popup_choice_list_window_cp70

0xc8ca,	// (0x0001948f) eswt_ctrl_input_pane_t1

0x3538,	// (0x000100fd) input_focus_pane_cp70

0xbc04,	// (0x000187c9) bg_button_pane_cp70_ParamLimits

0xbc04,	// (0x000187c9) bg_button_pane_cp70

0xc8d8,	// (0x0001949d) eswt_ctrl_combo_button_pane_g1

0xc8e0,	// (0x000194a5) wait_bar_pane_cp70

0x921f,	// (0x00015de4) bg_popup_window_pane_cp70_ParamLimits

0x921f,	// (0x00015de4) bg_popup_window_pane_cp70

0xc8e8,	// (0x000194ad) popup_eswt_tasktip_window_t1

0xc8fe,	// (0x000194c3) wait_bar_pane_cp71_ParamLimits

0xc8fe,	// (0x000194c3) wait_bar_pane_cp71

0xc90a,	// (0x000194cf) grid_eswt_app_pane

0x7fc2,	// (0x00014b87) scroll_pane_cp70

0xc913,	// (0x000194d8) cell_eswt_app_pane_ParamLimits

0xc913,	// (0x000194d8) cell_eswt_app_pane

0xc945,	// (0x0001950a) cell_eswt_app_pane_g1_ParamLimits

0xc945,	// (0x0001950a) cell_eswt_app_pane_g1

0xc974,	// (0x00019539) cell_eswt_app_pane_g2_ParamLimits

0xc974,	// (0x00019539) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x0001c7c3) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x0001c7c3) cell_eswt_app_pane_g

0xc99d,	// (0x00019562) cell_eswt_app_pane_t1_ParamLimits

0xc99d,	// (0x00019562) cell_eswt_app_pane_t1

0xc9cf,	// (0x00019594) grid_highlight_pane_cp70_ParamLimits

0xc9cf,	// (0x00019594) grid_highlight_pane_cp70

0x871a,	// (0x000152df) set_content_pane_g1

0x8b02,	// (0x000156c7) status_small_volume_pane

0x67c2,	// (0x00013387) status_small_volume_pane_g1

0x67ca,	// (0x0001338f) volume_small2_pane

0x67d3,	// (0x00013398) volume_small2_pane_g1

0x67dc,	// (0x000133a1) volume_small2_pane_g2

0x67e5,	// (0x000133aa) volume_small2_pane_g3

0x67ee,	// (0x000133b3) volume_small2_pane_g4

0x67f7,	// (0x000133bc) volume_small2_pane_g5

0x6800,	// (0x000133c5) volume_small2_pane_g6

0x6809,	// (0x000133ce) volume_small2_pane_g7

0x6812,	// (0x000133d7) volume_small2_pane_g8

0x681b,	// (0x000133e0) volume_small2_pane_g9

0x6824,	// (0x000133e9) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x0001c7c8) volume_small2_pane_g

0xc00e,	// (0x00018bd3) fep_vkb_top_text_pane_g1_ParamLimits

0xc029,	// (0x00018bee) fep_vkb_top_text_pane_t1_ParamLimits

0xc2c1,	// (0x00018e86) popup_preview_fixed_window_g3_ParamLimits

0xc2c1,	// (0x00018e86) popup_preview_fixed_window_g3

0x5e1a,	// (0x000129df) popup_toolbar_trans_pane

0xa5ce,	// (0x00017193) aid_height_set_list_ParamLimits

0xa5df,	// (0x000171a4) aid_size_parent_ParamLimits

0x8b83,	// (0x00015748) list_highlight_pane_cp2_ParamLimits

0x871a,	// (0x000152df) set_content_pane_g1_ParamLimits

0xa891,	// (0x00017456) list_single_image_pane_ParamLimits

0xa891,	// (0x00017456) list_single_image_pane

0xc9db,	// (0x000195a0) aid_size_cell_image_ParamLimits

0xc9db,	// (0x000195a0) aid_size_cell_image

0xc9e8,	// (0x000195ad) grid_single_image_pane_ParamLimits

0xc9e8,	// (0x000195ad) grid_single_image_pane

0x3f13,	// (0x00010ad8) list_single_image_pane_g1_ParamLimits

0x3f13,	// (0x00010ad8) list_single_image_pane_g1

0x3f1f,	// (0x00010ae4) list_single_image_pane_g2_ParamLimits

0x3f1f,	// (0x00010ae4) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x0001c7dd) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x0001c7dd) list_single_image_pane_g

0xca17,	// (0x000195dc) list_single_image_pane_t1_ParamLimits

0xca17,	// (0x000195dc) list_single_image_pane_t1

0xca2d,	// (0x000195f2) cell_image_list_pane_ParamLimits

0xca2d,	// (0x000195f2) cell_image_list_pane

0xca45,	// (0x0001960a) cell_image_list_pane_g1

0xca4e,	// (0x00019613) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x0001c7e2) cell_image_list_pane_g

0xca57,	// (0x0001961c) aid_size_cell_tb_trans_pane

0x3eed,	// (0x00010ab2) bg_tb_trans_pane

0xca69,	// (0x0001962e) grid_tb_trans_pane

0x90fb,	// (0x00015cc0) bg_tb_trans_pane_g1

0x910b,	// (0x00015cd0) bg_tb_trans_pane_g2

0x9103,	// (0x00015cc8) bg_tb_trans_pane_g3

0x911b,	// (0x00015ce0) bg_tb_trans_pane_g4

0x9113,	// (0x00015cd8) bg_tb_trans_pane_g5

0x913b,	// (0x00015d00) bg_tb_trans_pane_g6

0x9133,	// (0x00015cf8) bg_tb_trans_pane_g7

0x9123,	// (0x00015ce8) bg_tb_trans_pane_g8

0x912b,	// (0x00015cf0) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x0001c7e7) bg_tb_trans_pane_g

0xca7d,	// (0x00019642) cell_toolbar_trans_pane_ParamLimits

0xca7d,	// (0x00019642) cell_toolbar_trans_pane

0xbc3f,	// (0x00018804) cell_toolbar_trans_pane_g1

0xb824,	// (0x000183e9) list_form2_midp_pane_t1

0xb832,	// (0x000183f7) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0001c684) list_form2_midp_pane_t

0xb840,	// (0x00018405) scroll_pane_cp51_ParamLimits

0xba5a,	// (0x0001861f) form2_midp_wait_pane_g1

0xba63,	// (0x00018628) form2_midp_wait_pane_g2

0xba6c,	// (0x00018631) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0001c699) form2_midp_wait_pane_g

0x3775,	// (0x0001033a) list_highlight_pane_cp21_ParamLimits

0xbaa5,	// (0x0001866a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbab4,	// (0x00018679) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa833,	// (0x000173f8) list_single_2graphic_im_pane_ParamLimits

0xa833,	// (0x000173f8) list_single_2graphic_im_pane

0xcaa3,	// (0x00019668) list_single_2graphic_im_pane_g1_ParamLimits

0xcaa3,	// (0x00019668) list_single_2graphic_im_pane_g1

0xcab4,	// (0x00019679) list_single_2graphic_im_pane_g2_ParamLimits

0xcab4,	// (0x00019679) list_single_2graphic_im_pane_g2

0xcac0,	// (0x00019685) list_single_2graphic_im_pane_g3_ParamLimits

0xcac0,	// (0x00019685) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x0001c7fa) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x0001c7fa) list_single_2graphic_im_pane_g

0xcae0,	// (0x000196a5) list_single_2graphic_im_pane_t1_ParamLimits

0xcae0,	// (0x000196a5) list_single_2graphic_im_pane_t1

0xc2cd,	// (0x00018e92) list_single_graphic_2heading_pane_fp_ParamLimits

0xc2cd,	// (0x00018e92) list_single_graphic_2heading_pane_fp

0xc329,	// (0x00018eee) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc329,	// (0x00018eee) list_single_graphic_2heading_pane_fp_g1

0xc2e6,	// (0x00018eab) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc2e6,	// (0x00018eab) list_single_graphic_2heading_pane_fp_g2

0x3e22,	// (0x000109e7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3e22,	// (0x000109e7) list_single_graphic_2heading_pane_fp_g3

0xc2f2,	// (0x00018eb7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc2f2,	// (0x00018eb7) list_single_graphic_2heading_pane_fp_g4

0xc306,	// (0x00018ecb) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc306,	// (0x00018ecb) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c721) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c721) list_single_graphic_2heading_pane_fp_g

0xcb11,	// (0x000196d6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb11,	// (0x000196d6) list_single_graphic_2heading_pane_fp_t1

0xc361,	// (0x00018f26) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc361,	// (0x00018f26) list_single_graphic_2heading_pane_fp_t2

0xcb27,	// (0x000196ec) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb27,	// (0x000196ec) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x0001c803) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x0001c803) list_single_graphic_2heading_pane_fp_t

0xbcd0,	// (0x00018895) fep_hwr_write_pane_g5_ParamLimits

0xbcd0,	// (0x00018895) fep_hwr_write_pane_g5

0xbcdc,	// (0x000188a1) fep_hwr_write_pane_g6_ParamLimits

0xbcdc,	// (0x000188a1) fep_hwr_write_pane_g6

0xc7b6,	// (0x0001937b) eswt_shell_pane_ParamLimits

0x921f,	// (0x00015de4) bg_popup_window_pane_cp18_ParamLimits

0xc7e7,	// (0x000193ac) heading_pane_cp70

0xc8e8,	// (0x000194ad) popup_eswt_tasktip_window_t1_ParamLimits

0x8c1e,	// (0x000157e3) aid_touch_tab_arrow_left

0x8c2a,	// (0x000157ef) aid_touch_tab_arrow_right

0x758a,	// (0x0001414f) title_pane_g3_ParamLimits

0x758a,	// (0x0001414f) title_pane_g3

0x3e46,	// (0x00010a0b) set_value_pane_g1

0x5e1a,	// (0x000129df) popup_toolbar_trans_pane_ParamLimits

0xca57,	// (0x0001961c) aid_size_cell_tb_trans_pane_ParamLimits

0x3eed,	// (0x00010ab2) bg_tb_trans_pane_ParamLimits

0xca69,	// (0x0001962e) grid_tb_trans_pane_ParamLimits

0x394b,	// (0x00010510) cont_note_pane_ParamLimits

0x394b,	// (0x00010510) cont_note_pane

0x3bd5,	// (0x0001079a) cont_snote2_single_text_pane_ParamLimits

0x3bd5,	// (0x0001079a) cont_snote2_single_text_pane

0x3bd5,	// (0x0001079a) cont_snote2_single_graphic_pane_ParamLimits

0x3bd5,	// (0x0001079a) cont_snote2_single_graphic_pane

0x9840,	// (0x00016405) cont_note_wait_pane_ParamLimits

0x9840,	// (0x00016405) cont_note_wait_pane

0x9840,	// (0x00016405) cont_note_image_pane_ParamLimits

0x9840,	// (0x00016405) cont_note_image_pane

0xcb3d,	// (0x00019702) popup_note2_window_g1_ParamLimits

0xcb3d,	// (0x00019702) popup_note2_window_g1

0xcb6e,	// (0x00019733) popup_note2_window_t1_ParamLimits

0xcb6e,	// (0x00019733) popup_note2_window_t1

0xcbb3,	// (0x00019778) popup_note2_window_t2_ParamLimits

0xcbb3,	// (0x00019778) popup_note2_window_t2

0xcbf8,	// (0x000197bd) popup_note2_window_t3_ParamLimits

0xcbf8,	// (0x000197bd) popup_note2_window_t3

0xcc3d,	// (0x00019802) popup_note2_window_t4_ParamLimits

0xcc3d,	// (0x00019802) popup_note2_window_t4

0x39cf,	// (0x00010594) popup_note2_window_t5_ParamLimits

0x39cf,	// (0x00010594) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x0001c80f) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x0001c80f) popup_note2_window_t

0xcc6c,	// (0x00019831) popup_note2_image_window_g1_ParamLimits

0xcc6c,	// (0x00019831) popup_note2_image_window_g1

0xcc78,	// (0x0001983d) popup_note2_image_window_g2_ParamLimits

0xcc78,	// (0x0001983d) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x0001c81a) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x0001c81a) popup_note2_image_window_g

0xcc8a,	// (0x0001984f) popup_note2_image_window_t1_ParamLimits

0xcc8a,	// (0x0001984f) popup_note2_image_window_t1

0xcca2,	// (0x00019867) popup_note2_image_window_t2_ParamLimits

0xcca2,	// (0x00019867) popup_note2_image_window_t2

0xccba,	// (0x0001987f) popup_note2_image_window_t3_ParamLimits

0xccba,	// (0x0001987f) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x0001c81f) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x0001c81f) popup_note2_image_window_t

0x984e,	// (0x00016413) popup_note2_wait_window_g1_ParamLimits

0x984e,	// (0x00016413) popup_note2_wait_window_g1

0xccd6,	// (0x0001989b) popup_note2_wait_window_g2_ParamLimits

0xccd6,	// (0x0001989b) popup_note2_wait_window_g2

0x9866,	// (0x0001642b) popup_note2_wait_window_g3_ParamLimits

0x9866,	// (0x0001642b) popup_note2_wait_window_g3

0x0002,

0xfc61,	// (0x0001c826) popup_note2_wait_window_g_ParamLimits

0xfc61,	// (0x0001c826) popup_note2_wait_window_g

0xcce2,	// (0x000198a7) popup_note2_wait_window_t1_ParamLimits

0xcce2,	// (0x000198a7) popup_note2_wait_window_t1

0xcd00,	// (0x000198c5) popup_note2_wait_window_t2_ParamLimits

0xcd00,	// (0x000198c5) popup_note2_wait_window_t2

0xcd1e,	// (0x000198e3) popup_note2_wait_window_t3_ParamLimits

0xcd1e,	// (0x000198e3) popup_note2_wait_window_t3

0xcd30,	// (0x000198f5) popup_note2_wait_window_t4_ParamLimits

0xcd30,	// (0x000198f5) popup_note2_wait_window_t4

0x0003,

0xfc68,	// (0x0001c82d) popup_note2_wait_window_t_ParamLimits

0xfc68,	// (0x0001c82d) popup_note2_wait_window_t

0xcd42,	// (0x00019907) wait_bar2_pane_ParamLimits

0xcd42,	// (0x00019907) wait_bar2_pane

0xcd5a,	// (0x0001991f) popup_snote2_single_text_window_g1_ParamLimits

0xcd5a,	// (0x0001991f) popup_snote2_single_text_window_g1

0xcd82,	// (0x00019947) popup_snote2_single_text_window_t1_ParamLimits

0xcd82,	// (0x00019947) popup_snote2_single_text_window_t1

0xcdce,	// (0x00019993) popup_snote2_single_text_window_t2_ParamLimits

0xcdce,	// (0x00019993) popup_snote2_single_text_window_t2

0xce1a,	// (0x000199df) popup_snote2_single_text_window_t3_ParamLimits

0xce1a,	// (0x000199df) popup_snote2_single_text_window_t3

0xce5b,	// (0x00019a20) popup_snote2_single_text_window_t4_ParamLimits

0xce5b,	// (0x00019a20) popup_snote2_single_text_window_t4

0xce91,	// (0x00019a56) popup_snote2_single_text_window_t5_ParamLimits

0xce91,	// (0x00019a56) popup_snote2_single_text_window_t5

0x0004,

0xfc71,	// (0x0001c836) popup_snote2_single_text_window_t_ParamLimits

0xfc71,	// (0x0001c836) popup_snote2_single_text_window_t

0xcebc,	// (0x00019a81) popup_snote2_single_graphic_window_g1_ParamLimits

0xcebc,	// (0x00019a81) popup_snote2_single_graphic_window_g1

0xcee4,	// (0x00019aa9) popup_snote2_single_graphic_window_g2_ParamLimits

0xcee4,	// (0x00019aa9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7c,	// (0x0001c841) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7c,	// (0x0001c841) popup_snote2_single_graphic_window_g

0xcf0c,	// (0x00019ad1) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf0c,	// (0x00019ad1) popup_snote2_single_graphic_window_t1

0xcf58,	// (0x00019b1d) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf58,	// (0x00019b1d) popup_snote2_single_graphic_window_t2

0xce1a,	// (0x000199df) popup_snote2_single_graphic_window_t3_ParamLimits

0xce1a,	// (0x000199df) popup_snote2_single_graphic_window_t3

0xce5b,	// (0x00019a20) popup_snote2_single_graphic_window_t4_ParamLimits

0xce5b,	// (0x00019a20) popup_snote2_single_graphic_window_t4

0xce91,	// (0x00019a56) popup_snote2_single_graphic_window_t5_ParamLimits

0xce91,	// (0x00019a56) popup_snote2_single_graphic_window_t5

0x0004,

0xfc81,	// (0x0001c846) popup_snote2_single_graphic_window_t_ParamLimits

0xfc81,	// (0x0001c846) popup_snote2_single_graphic_window_t

0xb6f0,	// (0x000182b5) clock_nsta_pane_cp2_t1

0xb6f0,	// (0x000182b5) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0001c65a) clock_nsta_pane_cp2_t

0x3f07,	// (0x00010acc) form_field_data_wide_pane_g1_ParamLimits

0x3f13,	// (0x00010ad8) form_field_data_wide_pane_g2_ParamLimits

0x3f13,	// (0x00010ad8) form_field_data_wide_pane_g2

0x3f1f,	// (0x00010ae4) form_field_data_wide_pane_g3_ParamLimits

0x3f1f,	// (0x00010ae4) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001c216) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001c216) form_field_data_wide_pane_g

0xb5cb,	// (0x00018190) grid_touch_3_pane_ParamLimits

0xb5cb,	// (0x00018190) grid_touch_3_pane

0xcfa4,	// (0x00019b69) cell_touch_3_pane_ParamLimits

0xcfa4,	// (0x00019b69) cell_touch_3_pane

0xbc3f,	// (0x00018804) cell_touch_3_pane_g1

0xbc3f,	// (0x00018804) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0001c6df) cell_touch_3_pane_g

0x3a27,	// (0x000105ec) cont_query_data_pane

0x3a2f,	// (0x000105f4) cont_query_data_pane_cp1

0xcfd7,	// (0x00019b9c) button_value_adjust_pane_cp7

0xcfdf,	// (0x00019ba4) query_popup_pane_cp3

0x8293,	// (0x00014e58) bg_popup_sub_pane_cp22_ParamLimits

0x550b,	// (0x000120d0) navi_navi_volume_pane_cp2

0x5526,	// (0x000120eb) popup_side_volume_key_window_g2

0x5535,	// (0x000120fa) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0001c2ac) popup_side_volume_key_window_g

0x5552,	// (0x00012117) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0001c2b3) popup_side_volume_key_window_t

0x85e0,	// (0x000151a5) popup_side_volume_key_window_ParamLimits

0x7a17,	// (0x000145dc) list_double_graphic_pane_g4_ParamLimits

0x7a17,	// (0x000145dc) list_double_graphic_pane_g4

0xa862,	// (0x00017427) list_single_2heading_msg_pane_ParamLimits

0xa862,	// (0x00017427) list_single_2heading_msg_pane

0xd010,	// (0x00019bd5) list_single_2heading_msg_pane_g1_ParamLimits

0xd010,	// (0x00019bd5) list_single_2heading_msg_pane_g1

0xd01c,	// (0x00019be1) list_single_2heading_msg_pane_g2_ParamLimits

0xd01c,	// (0x00019be1) list_single_2heading_msg_pane_g2

0xd028,	// (0x00019bed) list_single_2heading_msg_pane_g3_ParamLimits

0xd028,	// (0x00019bed) list_single_2heading_msg_pane_g3

0xd034,	// (0x00019bf9) list_single_2heading_msg_pane_g4_ParamLimits

0xd034,	// (0x00019bf9) list_single_2heading_msg_pane_g4

0x0003,

0xfc8c,	// (0x0001c851) list_single_2heading_msg_pane_g_ParamLimits

0xfc8c,	// (0x0001c851) list_single_2heading_msg_pane_g

0xd04c,	// (0x00019c11) list_single_2heading_msg_pane_t1_ParamLimits

0xd04c,	// (0x00019c11) list_single_2heading_msg_pane_t1

0xd074,	// (0x00019c39) list_single_2heading_msg_pane_t2_ParamLimits

0xd074,	// (0x00019c39) list_single_2heading_msg_pane_t2

0xd0a3,	// (0x00019c68) list_single_2heading_msg_pane_t3_ParamLimits

0xd0a3,	// (0x00019c68) list_single_2heading_msg_pane_t3

0xd0dc,	// (0x00019ca1) list_single_2heading_msg_pane_t4_ParamLimits

0xd0dc,	// (0x00019ca1) list_single_2heading_msg_pane_t4

0x0003,

0xfc95,	// (0x0001c85a) list_single_2heading_msg_pane_t_ParamLimits

0xfc95,	// (0x0001c85a) list_single_2heading_msg_pane_t

0x3719,	// (0x000102de) title_pane_g4_ParamLimits

0x3719,	// (0x000102de) title_pane_g4

0x5310,	// (0x00011ed5) title_pane_stacon_g3_ParamLimits

0x5310,	// (0x00011ed5) title_pane_stacon_g3

0xcad4,	// (0x00019699) list_single_2graphic_im_pane_g4_ParamLimits

0xcad4,	// (0x00019699) list_single_2graphic_im_pane_g4

0xa2b0,	// (0x00016e75) popup_side_volume_key_window_cp

0xabcc,	// (0x00017791) main_idle_act2_pane_t1

0x5f8a,	// (0x00012b4f) toolbar_button_pane_g10

0x7854,	// (0x00014419) popup_toolbar_window_cp1

0xb6e1,	// (0x000182a6) clock_nsta_pane_cp_t1

0xb6e1,	// (0x000182a6) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0001c655) clock_nsta_pane_cp_t

0x550b,	// (0x000120d0) navi_navi_volume_pane_cp2_ParamLimits

0x551a,	// (0x000120df) popup_side_volume_key_window_g1_ParamLimits

0x5526,	// (0x000120eb) popup_side_volume_key_window_g2_ParamLimits

0x5535,	// (0x000120fa) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0001c2ac) popup_side_volume_key_window_g_ParamLimits

0x6413,	// (0x00012fd8) fep_hwr_aid_pane

0x64bc,	// (0x00013081) bg_fep_hwr_top_pane_g4_ParamLimits

0xbca0,	// (0x00018865) fep_hwr_top_pane_g1_ParamLimits

0xbcb2,	// (0x00018877) fep_hwr_top_pane_g2_ParamLimits

0x64dc,	// (0x000130a1) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0001c6aa) fep_hwr_top_pane_g_ParamLimits

0x64f1,	// (0x000130b6) fep_hwr_top_text_pane_ParamLimits

0xa065,	// (0x00016c2a) aid_touch_tab_arrow_arrow_2

0xa06e,	// (0x00016c33) aid_touch_tab_arrow_left_2

0x6427,	// (0x00012fec) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x645e,	// (0x00013023) fep_hwr_prediction_pane

0xbe08,	// (0x000189cd) fep_vkb_prediction_pane

0xbf0e,	// (0x00018ad3) fep_vkb_side_pane_g3_ParamLimits

0xbf0e,	// (0x00018ad3) fep_vkb_side_pane_g3

0x6680,	// (0x00013245) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x66f1,	// (0x000132b6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x66fe,	// (0x000132c3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x0001c759) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x682d,	// (0x000133f2) fep_hwr_prediction_pane_g1

0x6837,	// (0x000133fc) fep_hwr_prediction_pane_g2

0x683f,	// (0x00013404) fep_hwr_prediction_pane_g3

0x6847,	// (0x0001340c) fep_hwr_prediction_pane_g4

0x0003,

0xfc9e,	// (0x0001c863) fep_hwr_prediction_pane_g

0xd101,	// (0x00019cc6) fep_vkb_prediction_pane_g1

0xd10b,	// (0x00019cd0) fep_vkb_prediction_pane_g2

0xd113,	// (0x00019cd8) fep_vkb_prediction_pane_g3

0xd11b,	// (0x00019ce0) fep_vkb_prediction_pane_g4

0x0003,

0xfca7,	// (0x0001c86c) fep_vkb_prediction_pane_g

0x6293,	// (0x00012e58) slider_set_pane_g3

0x62a7,	// (0x00012e6c) slider_set_pane_g4

0x62bf,	// (0x00012e84) slider_set_pane_g5

0x6293,	// (0x00012e58) slider_set_pane_g6

0x62d5,	// (0x00012e9a) slider_set_pane_g7

0xa75e,	// (0x00017323) slider_form_pane_g3

0xa767,	// (0x0001732c) slider_form_pane_g4

0xa76f,	// (0x00017334) slider_form_pane_g5

0xa75e,	// (0x00017323) slider_form_pane_g6

0xa777,	// (0x0001733c) slider_form_pane_g7

0xaed0,	// (0x00017a95) slider_set_pane_vc_g3

0xaed9,	// (0x00017a9e) slider_set_pane_vc_g4

0xaee2,	// (0x00017aa7) slider_set_pane_vc_g5

0xaed0,	// (0x00017a95) slider_set_pane_vc_g6

0xaeeb,	// (0x00017ab0) slider_set_pane_vc_g7

0xb390,	// (0x00017f55) slider_form_pane_vc_g1

0xb399,	// (0x00017f5e) slider_form_pane_vc_g2

0xb3a2,	// (0x00017f67) slider_form_pane_vc_g3

0xb390,	// (0x00017f55) slider_form_pane_vc_g4

0xb3ab,	// (0x00017f70) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0001c627) slider_form_pane_vc_g

0x4fc4,	// (0x00011b89) main_idle_act3_pane

0xd123,	// (0x00019ce8) ai3_links_pane

0xd12c,	// (0x00019cf1) popup_ai3_data_window_ParamLimits

0xd12c,	// (0x00019cf1) popup_ai3_data_window

0x3538,	// (0x000100fd) grid_ai3_links_pane

0xd14a,	// (0x00019d0f) cell_ai3_links_pane_ParamLimits

0xd14a,	// (0x00019d0f) cell_ai3_links_pane

0xd164,	// (0x00019d29) bg_popup_sub_pane_cp11

0xd171,	// (0x00019d36) cell_ai3_links_pane_g1

0x3538,	// (0x000100fd) bg_popup_sub_pane_cp12

0xd196,	// (0x00019d5b) heading_ai3_data_pane

0xd19e,	// (0x00019d63) list_ai3_gene_pane

0xd1aa,	// (0x00019d6f) popup_ai3_data_window_g1

0xd1b2,	// (0x00019d77) heading_ai3_data_pane_g1

0xd1ba,	// (0x00019d7f) heading_ai3_data_pane_t1

0xd1c8,	// (0x00019d8d) list_double_ai3_gene_pane_ParamLimits

0xd1c8,	// (0x00019d8d) list_double_ai3_gene_pane

0xd1d5,	// (0x00019d9a) list_single_ai3_gene_pane_ParamLimits

0xd1d5,	// (0x00019d9a) list_single_ai3_gene_pane

0xbc04,	// (0x000187c9) list_highlight_pane_cp7_ParamLimits

0xbc04,	// (0x000187c9) list_highlight_pane_cp7

0xd1e2,	// (0x00019da7) list_single_a13_gene_pane_t1_ParamLimits

0xd1e2,	// (0x00019da7) list_single_a13_gene_pane_t1

0xd1f9,	// (0x00019dbe) list_single_ai3_gene_pane_g1

0xd202,	// (0x00019dc7) list_single_ai3_gene_pane_g2

0x0001,

0xfcb0,	// (0x0001c875) list_single_ai3_gene_pane_g

0xd20a,	// (0x00019dcf) list_double_ai3_gene_pane_g1_ParamLimits

0xd20a,	// (0x00019dcf) list_double_ai3_gene_pane_g1

0xd216,	// (0x00019ddb) list_double_ai3_gene_pane_t1_ParamLimits

0xd216,	// (0x00019ddb) list_double_ai3_gene_pane_t1

0xd232,	// (0x00019df7) list_double_ai3_gene_pane_t2_ParamLimits

0xd232,	// (0x00019df7) list_double_ai3_gene_pane_t2

0xd247,	// (0x00019e0c) list_double_ai3_gene_pane_t3_ParamLimits

0xd247,	// (0x00019e0c) list_double_ai3_gene_pane_t3

0x0002,

0xfcb5,	// (0x0001c87a) list_double_ai3_gene_pane_t_ParamLimits

0xfcb5,	// (0x0001c87a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcff0,	// (0x00019bb5) aid_size_min_col_2

0xcffa,	// (0x00019bbf) aid_size_min_msg_ParamLimits

0xcffa,	// (0x00019bbf) aid_size_min_msg

0xc01a,	// (0x00018bdf) fep_vkb_top_text_pane_g2_ParamLimits

0xc01a,	// (0x00018bdf) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0001c6da) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0001c6da) fep_vkb_top_text_pane_g

0x4fc4,	// (0x00011b89) main_hc_apps_shell_pane

0xd264,	// (0x00019e29) grid_hc_apps_pane_ParamLimits

0xd264,	// (0x00019e29) grid_hc_apps_pane

0xd276,	// (0x00019e3b) list_hc_apps_pane

0xd27e,	// (0x00019e43) scroll_pane_cp37_ParamLimits

0xd27e,	// (0x00019e43) scroll_pane_cp37

0xd28a,	// (0x00019e4f) cell_hc_apps_pane_ParamLimits

0xd28a,	// (0x00019e4f) cell_hc_apps_pane

0xd33e,	// (0x00019f03) cell_hc_apps_pane_g1_ParamLimits

0xd33e,	// (0x00019f03) cell_hc_apps_pane_g1

0xd36a,	// (0x00019f2f) cell_hc_apps_pane_g2_ParamLimits

0xd36a,	// (0x00019f2f) cell_hc_apps_pane_g2

0xd386,	// (0x00019f4b) cell_hc_apps_pane_g3_ParamLimits

0xd386,	// (0x00019f4b) cell_hc_apps_pane_g3

0x0002,

0xfcbc,	// (0x0001c881) cell_hc_apps_pane_g_ParamLimits

0xfcbc,	// (0x0001c881) cell_hc_apps_pane_g

0xd3a8,	// (0x00019f6d) cell_hc_apps_pane_t1_ParamLimits

0xd3a8,	// (0x00019f6d) cell_hc_apps_pane_t1

0x394b,	// (0x00010510) grid_highlight_pane_cp10_ParamLimits

0x394b,	// (0x00010510) grid_highlight_pane_cp10

0xd3e8,	// (0x00019fad) list_single_hc_apps_pane_ParamLimits

0xd3e8,	// (0x00019fad) list_single_hc_apps_pane

0xd427,	// (0x00019fec) list_single_hc_apps_pane_g1

0xd440,	// (0x0001a005) list_single_hc_apps_pane_g2

0x0001,

0xfcc3,	// (0x0001c888) list_single_hc_apps_pane_g

0xd459,	// (0x0001a01e) list_single_hc_apps_pane_g2_copy1

0xd475,	// (0x0001a03a) list_single_hc_apps_pane_t1

0x3775,	// (0x0001033a) bg_set_opt_pane_cp_ParamLimits

0x5237,	// (0x00011dfc) setting_slider_pane_t1_ParamLimits

0x5250,	// (0x00011e15) setting_slider_pane_t2_ParamLimits

0x526a,	// (0x00011e2f) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001c0fe) setting_slider_pane_t_ParamLimits

0x5282,	// (0x00011e47) slider_set_pane_ParamLimits

0x57ad,	// (0x00012372) control_pane_g5_ParamLimits

0x57ad,	// (0x00012372) control_pane_g5

0xa591,	// (0x00017156) slider_set_pane_g1_ParamLimits

0x6287,	// (0x00012e4c) slider_set_pane_g2_ParamLimits

0x6293,	// (0x00012e58) slider_set_pane_g3_ParamLimits

0x62a7,	// (0x00012e6c) slider_set_pane_g4_ParamLimits

0x62bf,	// (0x00012e84) slider_set_pane_g5_ParamLimits

0x6293,	// (0x00012e58) slider_set_pane_g6_ParamLimits

0x62d5,	// (0x00012e9a) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0001c4ff) slider_set_pane_g_ParamLimits

0x86c5,	// (0x0001528a) navi_icon_text_pane_ParamLimits

0x8bdd,	// (0x000157a2) aid_fill_nsta_2_ParamLimits

0x8c1e,	// (0x000157e3) aid_touch_tab_arrow_left_ParamLimits

0x8c2a,	// (0x000157ef) aid_touch_tab_arrow_right_ParamLimits

0x8c96,	// (0x0001585b) clock_nsta_pane_ParamLimits

0xa047,	// (0x00016c0c) navi_icon_pane_g1_ParamLimits

0xa053,	// (0x00016c18) navi_text_pane_t1_ParamLimits

0xb7fe,	// (0x000183c3) navi_icon_text_pane_g1_ParamLimits

0xb80a,	// (0x000183cf) navi_icon_text_pane_t1_ParamLimits

0xd427,	// (0x00019fec) list_single_hc_apps_pane_g1_ParamLimits

0xd440,	// (0x0001a005) list_single_hc_apps_pane_g2_ParamLimits

0xfcc3,	// (0x0001c888) list_single_hc_apps_pane_g_ParamLimits

0xd459,	// (0x0001a01e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd475,	// (0x0001a03a) list_single_hc_apps_pane_t1_ParamLimits

0x5139,	// (0x00011cfe) popup_toolbar2_fixed_window_ParamLimits

0x5139,	// (0x00011cfe) popup_toolbar2_fixed_window

0x5e10,	// (0x000129d5) popup_toolbar2_float_window

0x3538,	// (0x000100fd) bg_popup_sub_pane_cp27

0xd4a3,	// (0x0001a068) grid_toolbar2_float_pane

0x3538,	// (0x000100fd) bg_popup_sub_pane_cp26

0xd4a3,	// (0x0001a068) grid_toolbar2_fixed_pane

0xd4ab,	// (0x0001a070) cell_toolbar2_fixed_pane_ParamLimits

0xd4ab,	// (0x0001a070) cell_toolbar2_fixed_pane

0xd4bb,	// (0x0001a080) cell_toolbar2_fixed_pane_g1

0xd4c4,	// (0x0001a089) toolbar2_fixed_button_pane

0x90fb,	// (0x00015cc0) toolbar2_fixed_button_pane_g1

0x910b,	// (0x00015cd0) toolbar2_fixed_button_pane_g2

0x9103,	// (0x00015cc8) toolbar2_fixed_button_pane_g3

0x911b,	// (0x00015ce0) toolbar2_fixed_button_pane_g4

0x9113,	// (0x00015cd8) toolbar2_fixed_button_pane_g5

0x9123,	// (0x00015ce8) toolbar2_fixed_button_pane_g6

0x912b,	// (0x00015cf0) toolbar2_fixed_button_pane_g7

0x913b,	// (0x00015d00) toolbar2_fixed_button_pane_g8

0x9133,	// (0x00015cf8) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0001c401) toolbar2_fixed_button_pane_g

0xd4cc,	// (0x0001a091) cell_toolbar2_float_pane_ParamLimits

0xd4cc,	// (0x0001a091) cell_toolbar2_float_pane

0xd4dd,	// (0x0001a0a2) cell_toolbar2_float_pane_g1

0xd4c4,	// (0x0001a089) toolbar2_fixed_button_pane_cp

0xbd76,	// (0x0001893b) fep_vkb_accented_list_pane_ParamLimits

0xbd76,	// (0x0001893b) fep_vkb_accented_list_pane

0x6660,	// (0x00013225) bg_popup_fep_shadow_pane_g9

0x8854,	// (0x00015419) bg_popup_fep_shadow_pane_cp3

0x40a2,	// (0x00010c67) list_accented_list_pane

0xd4e6,	// (0x0001a0ab) list_single_accented_list_pane_ParamLimits

0xd4e6,	// (0x0001a0ab) list_single_accented_list_pane

0x8854,	// (0x00015419) list_highlight_pane_cp10

0xd4f7,	// (0x0001a0bc) list_single_accented_list_pane_t1

0x5d56,	// (0x0001291b) popup_slider_window_ParamLimits

0x5d56,	// (0x0001291b) popup_slider_window

0xcfe7,	// (0x00019bac) aid_indentation_list_msg

0xd5c7,	// (0x0001a18c) bg_popup_window_pane_cp19

0xd633,	// (0x0001a1f8) popup_slider_window_g1

0xd64f,	// (0x0001a214) popup_slider_window_g2

0xd66b,	// (0x0001a230) popup_slider_window_g3

0x0005,

0xfcc8,	// (0x0001c88d) popup_slider_window_g

0xd6d1,	// (0x0001a296) popup_slider_window_t1

0xd745,	// (0x0001a30a) small_volume_slider_vertical_pane

0xbc3f,	// (0x00018804) small_volume_slider_vertical_pane_g1

0xbc3f,	// (0x00018804) small_volume_slider_vertical_pane_g2

0xd761,	// (0x0001a326) small_volume_slider_vertical_pane_g3

0x0002,

0xfcda,	// (0x0001c89f) small_volume_slider_vertical_pane_g

0x4ee7,	// (0x00011aac) area_side_right_pane_ParamLimits

0x4ee7,	// (0x00011aac) area_side_right_pane

0x684f,	// (0x00013414) aid_size_side_button_ParamLimits

0x684f,	// (0x00013414) aid_size_side_button

0x6863,	// (0x00013428) grid_sctrl_middle_pane_ParamLimits

0x6863,	// (0x00013428) grid_sctrl_middle_pane

0x6882,	// (0x00013447) sctrl_sk_bottom_pane

0x6893,	// (0x00013458) sctrl_sk_top_pane

0x68a5,	// (0x0001346a) aid_touch_sctrl_top

0x68b2,	// (0x00013477) bg_sctrl_sk_pane_ParamLimits

0x68b2,	// (0x00013477) bg_sctrl_sk_pane

0x68c0,	// (0x00013485) sctrl_sk_top_pane_g1

0x68cd,	// (0x00013492) sctrl_sk_top_pane_t1

0x68a5,	// (0x0001346a) aid_touch_sctrl_bottom

0x68b2,	// (0x00013477) bg_sctrl_sk_pane_cp_ParamLimits

0x68b2,	// (0x00013477) bg_sctrl_sk_pane_cp

0x68e8,	// (0x000134ad) sctrl_sk_bottom_pane_g1

0x68cd,	// (0x00013492) sctrl_sk_bottom_pane_t1

0x68f1,	// (0x000134b6) cell_sctrl_middle_pane_ParamLimits

0x68f1,	// (0x000134b6) cell_sctrl_middle_pane

0x690e,	// (0x000134d3) aid_touch_sctrl_middle_ParamLimits

0x690e,	// (0x000134d3) aid_touch_sctrl_middle

0x6920,	// (0x000134e5) bg_sctrl_middle_pane_ParamLimits

0x6920,	// (0x000134e5) bg_sctrl_middle_pane

0x6680,	// (0x00013245) cell_sctrl_middle_pane_g1_ParamLimits

0x6680,	// (0x00013245) cell_sctrl_middle_pane_g1

0x692e,	// (0x000134f3) cell_sctrl_middle_pane_g2_ParamLimits

0x692e,	// (0x000134f3) cell_sctrl_middle_pane_g2

0x0001,

0xfce6,	// (0x0001c8ab) cell_sctrl_middle_pane_g_ParamLimits

0xfce6,	// (0x0001c8ab) cell_sctrl_middle_pane_g

0x90fb,	// (0x00015cc0) bg_sctrl_middle_pane_g1

0x9103,	// (0x00015cc8) bg_sctrl_middle_pane_g2

0x910b,	// (0x00015cd0) bg_sctrl_middle_pane_g3

0x9113,	// (0x00015cd8) bg_sctrl_middle_pane_g4

0x911b,	// (0x00015ce0) bg_sctrl_middle_pane_g5

0x9123,	// (0x00015ce8) bg_sctrl_middle_pane_g6

0x912b,	// (0x00015cf0) bg_sctrl_middle_pane_g7

0x9133,	// (0x00015cf8) bg_sctrl_middle_pane_g8

0x0007,

0xfceb,	// (0x0001c8b0) bg_sctrl_middle_pane_g

0x913b,	// (0x00015d00) bg_sctrl_middle_pane_g8_copy1

0x90fb,	// (0x00015cc0) bg_sctrl_sk_pane_g1

0x910b,	// (0x00015cd0) bg_sctrl_sk_pane_g2

0x9103,	// (0x00015cc8) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0001c401) bg_sctrl_sk_pane_g

0x3d93,	// (0x00010958) aid_size_touch_scroll_bar

0x911b,	// (0x00015ce0) bg_sctrl_sk_pane_g4

0x9113,	// (0x00015cd8) bg_sctrl_sk_pane_g5

0x9123,	// (0x00015ce8) bg_sctrl_sk_pane_g6

0x912b,	// (0x00015cf0) bg_sctrl_sk_pane_g7

0x913b,	// (0x00015d00) bg_sctrl_sk_pane_g8

0x9133,	// (0x00015cf8) bg_sctrl_sk_pane_g9

0x596b,	// (0x00012530) popup_fep_china_hwr2_fs_candidate_window

0x5975,	// (0x0001253a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5975,	// (0x0001253a) popup_fep_china_hwr2_fs_control_window

0x6680,	// (0x00013245) sctrl_sk_top_pane_g2

0x0001,

0xfce1,	// (0x0001c8a6) sctrl_sk_top_pane_g

0xd76a,	// (0x0001a32f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd76a,	// (0x0001a32f) aid_fep_china_hwr2_fs_cell

0xd77d,	// (0x0001a342) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd77d,	// (0x0001a342) bg_popup_fep_shadow_pane_cp4

0xd796,	// (0x0001a35b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd796,	// (0x0001a35b) bg_popup_fep_shadow_pane_cp5

0xd7a8,	// (0x0001a36d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7a8,	// (0x0001a36d) popup_fep_china_hwr2_fs_control_bar_grid

0xd7b8,	// (0x0001a37d) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7c0,	// (0x0001a385) aid_fep_china_hwr2_fs_candi_cell

0x3538,	// (0x000100fd) bg_popup_fep_shadow_pane_cp6

0xd7ca,	// (0x0001a38f) popup_fep_china_hwr2_fs_candidate_grid

0xd7d4,	// (0x0001a399) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7d4,	// (0x0001a399) cell_fep_china_hwr2_fs_funtion_grid

0xbc3f,	// (0x00018804) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7ec,	// (0x0001a3b1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7ec,	// (0x0001a3b1) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7fa,	// (0x0001a3bf) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7fa,	// (0x0001a3bf) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfc,	// (0x0001c8c1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfc,	// (0x0001c8c1) cell_fep_china_hwr2_fs_funtion_grid_g

0xd810,	// (0x0001a3d5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd810,	// (0x0001a3d5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd825,	// (0x0001a3ea) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd825,	// (0x0001a3ea) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd01,	// (0x0001c8c6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd01,	// (0x0001c8c6) cell_fep_china_hwr2_fs_funtion_grid_t

0xd841,	// (0x0001a406) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd849,	// (0x0001a40e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd851,	// (0x0001a416) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd06,	// (0x0001c8cb) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd859,	// (0x0001a41e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd859,	// (0x0001a41e) cell_fep_china_hwr2_fs_candidate_grid

0xd878,	// (0x0001a43d) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd880,	// (0x0001a445) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbc3f,	// (0x00018804) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbc3f,	// (0x00018804) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0001c6df) cell_fep_china_hwr2_fs_candidate_grid_g

0xd888,	// (0x0001a44d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8ca9,	// (0x0001586e) clock_nsta_pane_cp_24_ParamLimits

0x8ca9,	// (0x0001586e) clock_nsta_pane_cp_24

0x8d29,	// (0x000158ee) indicator_nsta_pane_cp_24_ParamLimits

0x8d29,	// (0x000158ee) indicator_nsta_pane_cp_24

0x9ec3,	// (0x00016a88) heading_pane_g1

0x0001,

0xf8a1,	// (0x0001c466) heading_pane_g

0xaa13,	// (0x000175d8) grid_sct_catagory_button_pane

0xaa45,	// (0x0001760a) scroll_pane_cp5_ParamLimits

0xb84c,	// (0x00018411) button_value_adjust_pane_cp5_ParamLimits

0xb84c,	// (0x00018411) button_value_adjust_pane_cp5

0xb952,	// (0x00018517) form2_midp_time_pane_ParamLimits

0xd896,	// (0x0001a45b) cell_sct_catagory_button_pane_ParamLimits

0xd896,	// (0x0001a45b) cell_sct_catagory_button_pane

0xbc04,	// (0x000187c9) bg_button_pane_cp01_ParamLimits

0xbc04,	// (0x000187c9) bg_button_pane_cp01

0xbc3f,	// (0x00018804) cell_sct_catagory_button_pane_g1

0x5d97,	// (0x0001295c) popup_tb_extension_window

0xd8a8,	// (0x0001a46d) aid_size_cell_ext_ParamLimits

0xd8a8,	// (0x0001a46d) aid_size_cell_ext

0x394b,	// (0x00010510) bg_tb_trans_pane_cp1_ParamLimits

0x394b,	// (0x00010510) bg_tb_trans_pane_cp1

0xd8c8,	// (0x0001a48d) grid_tb_ext_pane_ParamLimits

0xd8c8,	// (0x0001a48d) grid_tb_ext_pane

0xd8f6,	// (0x0001a4bb) cell_tb_ext_pane_ParamLimits

0xd8f6,	// (0x0001a4bb) cell_tb_ext_pane

0xd90d,	// (0x0001a4d2) cell_tb_ext_pane_g1_ParamLimits

0xd90d,	// (0x0001a4d2) cell_tb_ext_pane_g1

0xd92a,	// (0x0001a4ef) cell_tb_ext_pane_t1

0x394b,	// (0x00010510) list_highlight_pane_cp11_ParamLimits

0x394b,	// (0x00010510) list_highlight_pane_cp11

0x5158,	// (0x00011d1d) popup_uni_indicator_window_ParamLimits

0x5158,	// (0x00011d1d) popup_uni_indicator_window

0x3eed,	// (0x00010ab2) bg_popup_sub_pane_cp14

0xd945,	// (0x0001a50a) list_uniindi_pane

0xd951,	// (0x0001a516) uniindi_top_pane

0x394b,	// (0x00010510) bg_uniindi_top_pane

0xd972,	// (0x0001a537) uniindi_top_pane_g1

0xd988,	// (0x0001a54d) uniindi_top_pane_g2

0x0003,

0xfd0d,	// (0x0001c8d2) uniindi_top_pane_g

0xd9b2,	// (0x0001a577) uniindi_top_pane_t1

0xd9de,	// (0x0001a5a3) list_single_uniindi_pane_ParamLimits

0xd9de,	// (0x0001a5a3) list_single_uniindi_pane

0xbc3f,	// (0x00018804) bg_uniindi_top_pane_g1

0xd9f1,	// (0x0001a5b6) list_single_uniindi_pane_g1

0xda04,	// (0x0001a5c9) list_single_uniindi_pane_t1

0x4fc4,	// (0x00011b89) control_bg_pane

0xda29,	// (0x0001a5ee) bg_sctrl_sk_pane_cp1

0xda32,	// (0x0001a5f7) bg_sctrl_sk_pane_cp2

0xda3b,	// (0x0001a600) control_bg_pane_g1

0xda44,	// (0x0001a609) control_bg_pane_g2

0x0001,

0xfd16,	// (0x0001c8db) control_bg_pane_g

0xb684,	// (0x00018249) cell_indicator_nsta_pane_g1_ParamLimits

0xb692,	// (0x00018257) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0001c643) cell_indicator_nsta_pane_g_ParamLimits

0xb9df,	// (0x000185a4) form2_midp_time_pane_t1_ParamLimits

0x58c9,	// (0x0001248e) main_idle_act4_pane_ParamLimits

0x58c9,	// (0x0001248e) main_idle_act4_pane

0x5d97,	// (0x0001295c) popup_tb_extension_window_ParamLimits

0xd8e8,	// (0x0001a4ad) tb_ext_find_pane_ParamLimits

0xd8e8,	// (0x0001a4ad) tb_ext_find_pane

0xda4d,	// (0x0001a612) ai_gene_pane_1_cp1

0x899e,	// (0x00015563) ai_gene_pane_2_cp1

0xda55,	// (0x0001a61a) list_single_idle_plugin_calendar_pane

0xda5e,	// (0x0001a623) list_single_idle_plugin_notification_pane

0xda67,	// (0x0001a62c) list_single_idle_plugin_player_pane

0xda70,	// (0x0001a635) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda70,	// (0x0001a635) list_single_idle_plugin_shortcut_pane

0xda92,	// (0x0001a657) main_idle_act4_pane_t1

0xdaa4,	// (0x0001a669) main_idle_act4_pane_t2

0x0001,

0xfd1b,	// (0x0001c8e0) main_idle_act4_pane_t

0xdab6,	// (0x0001a67b) middle_sk_idle_act4_pane_ParamLimits

0xdab6,	// (0x0001a67b) middle_sk_idle_act4_pane

0xdacc,	// (0x0001a691) popup_clock_digital_analogue_window_cp2

0xdae6,	// (0x0001a6ab) shortcut_wheel_idle_act4_pane_ParamLimits

0xdae6,	// (0x0001a6ab) shortcut_wheel_idle_act4_pane

0xbc3f,	// (0x00018804) shortcut_wheel_idle_act4_pane_g1

0xbc3f,	// (0x00018804) shortcut_wheel_idle_act4_pane_g2

0xbc3f,	// (0x00018804) shortcut_wheel_idle_act4_pane_g3

0xbc3f,	// (0x00018804) shortcut_wheel_idle_act4_pane_g4

0xbc3f,	// (0x00018804) shortcut_wheel_idle_act4_pane_g5

0xdafa,	// (0x0001a6bf) shortcut_wheel_idle_act4_pane_g6

0xdb02,	// (0x0001a6c7) shortcut_wheel_idle_act4_pane_g7

0xdb0a,	// (0x0001a6cf) shortcut_wheel_idle_act4_pane_g8

0xdb12,	// (0x0001a6d7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd20,	// (0x0001c8e5) shortcut_wheel_idle_act4_pane_g

0xbeba,	// (0x00018a7f) middle_sk_idle_act4_pane_g1_ParamLimits

0xbeba,	// (0x00018a7f) middle_sk_idle_act4_pane_g1

0xdb76,	// (0x0001a73b) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb76,	// (0x0001a73b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd43,	// (0x0001c908) middle_sk_idle_act4_pane_g_ParamLimits

0xfd43,	// (0x0001c908) middle_sk_idle_act4_pane_g

0xdb82,	// (0x0001a747) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb82,	// (0x0001a747) middle_sk_idle_act4_pane_t1

0xdb9f,	// (0x0001a764) grid_ai_shortcut_pane_ParamLimits

0xdb9f,	// (0x0001a764) grid_ai_shortcut_pane

0xdbb8,	// (0x0001a77d) list_highlight_pane_cp16_ParamLimits

0xdbb8,	// (0x0001a77d) list_highlight_pane_cp16

0xdbc5,	// (0x0001a78a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbc5,	// (0x0001a78a) list_single_idle_plugin_shortcut_pane_g1

0xdbd1,	// (0x0001a796) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbd1,	// (0x0001a796) list_single_idle_plugin_shortcut_pane_g2

0xdbeb,	// (0x0001a7b0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbeb,	// (0x0001a7b0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd48,	// (0x0001c90d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd48,	// (0x0001c90d) list_single_idle_plugin_shortcut_pane_g

0xdbfe,	// (0x0001a7c3) cell_ai_shortcut_pane_ParamLimits

0xdbfe,	// (0x0001a7c3) cell_ai_shortcut_pane

0xdc21,	// (0x0001a7e6) cell_ai_shortcut_pane_g1_ParamLimits

0xdc21,	// (0x0001a7e6) cell_ai_shortcut_pane_g1

0xda4d,	// (0x0001a612) ai_gene_pane_1_cp2

0xdc43,	// (0x0001a808) ai_gene_pane_2_cp2

0xdc4b,	// (0x0001a810) list_highlight_pane_cp15

0xdc54,	// (0x0001a819) list_single_idle_plugin_calendar_pane_g1

0xdc4b,	// (0x0001a810) list_highlight_pane_cp17

0xdc5c,	// (0x0001a821) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc64,	// (0x0001a829) list_single_idle_plugin_player_pane_g1

0xac7a,	// (0x0001783f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4f,	// (0x0001c914) list_single_idle_plugin_player_pane_g

0xdc6c,	// (0x0001a831) list_single_idle_plugin_player_pane_t1

0xdc7a,	// (0x0001a83f) list_single_idle_plugin_player_pane_t2

0xdc88,	// (0x0001a84d) list_single_idle_plugin_player_pane_t3

0xdc96,	// (0x0001a85b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd54,	// (0x0001c919) list_single_idle_plugin_player_pane_t

0xdca4,	// (0x0001a869) wait_bar_pane_cp15

0xdcac,	// (0x0001a871) grid_ai_notification_pane

0xac7a,	// (0x0001783f) list_single_idle_plugin_notification_pane_g1

0xdcb5,	// (0x0001a87a) cell_ai_notification_pane_ParamLimits

0xdcb5,	// (0x0001a87a) cell_ai_notification_pane

0xdcc2,	// (0x0001a887) cell_ai_notification_pane_g1

0xdcca,	// (0x0001a88f) cell_ai_notification_pane_t1

0xdcd8,	// (0x0001a89d) tb_ext_find_button_pane

0xdce0,	// (0x0001a8a5) tb_ext_find_pane_g1

0xdce8,	// (0x0001a8ad) tb_ext_find_pane_t1

0x818e,	// (0x00014d53) tb_ext_find_button_pane_g1

0xdcf6,	// (0x0001a8bb) tb_ext_find_button_pane_g2

0x0001,

0xfd5d,	// (0x0001c922) tb_ext_find_button_pane_g

0xda92,	// (0x0001a657) main_idle_act4_pane_t1_ParamLimits

0xdaa4,	// (0x0001a669) main_idle_act4_pane_t2_ParamLimits

0xfd1b,	// (0x0001c8e0) main_idle_act4_pane_t_ParamLimits

0xdacc,	// (0x0001a691) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdada,	// (0x0001a69f) sat_plugin_idle_act4_pane_ParamLimits

0xdada,	// (0x0001a69f) sat_plugin_idle_act4_pane

0xdcff,	// (0x0001a8c4) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcff,	// (0x0001a8c4) sat_plugin_idle_act4_pane_t1

0xdd12,	// (0x0001a8d7) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd12,	// (0x0001a8d7) sat_plugin_idle_act4_pane_t2

0xdd25,	// (0x0001a8ea) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd25,	// (0x0001a8ea) sat_plugin_idle_act4_pane_t3

0xdd38,	// (0x0001a8fd) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd38,	// (0x0001a8fd) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd62,	// (0x0001c927) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd62,	// (0x0001c927) sat_plugin_idle_act4_pane_t

0x5089,	// (0x00011c4e) popup_battery_window_ParamLimits

0x5089,	// (0x00011c4e) popup_battery_window

0x394b,	// (0x00010510) bg_popup_sub_pane_cp25_ParamLimits

0x394b,	// (0x00010510) bg_popup_sub_pane_cp25

0xdd4b,	// (0x0001a910) popup_battery_window_g1_ParamLimits

0xdd4b,	// (0x0001a910) popup_battery_window_g1

0xdd57,	// (0x0001a91c) popup_battery_window_t1_ParamLimits

0xdd57,	// (0x0001a91c) popup_battery_window_t1

0xdd69,	// (0x0001a92e) popup_battery_window_t2_ParamLimits

0xdd69,	// (0x0001a92e) popup_battery_window_t2

0x0001,

0xfd6b,	// (0x0001c930) popup_battery_window_t_ParamLimits

0xfd6b,	// (0x0001c930) popup_battery_window_t

0x8868,	// (0x0001542d) midp_canvas_pane_ParamLimits

0x88e0,	// (0x000154a5) midp_keypad_pane_ParamLimits

0x88e0,	// (0x000154a5) midp_keypad_pane

0x8b83,	// (0x00015748) main_midp_pane_ParamLimits

0xb6ff,	// (0x000182c4) signal_pane_g2_cp_ParamLimits

0xdd86,	// (0x0001a94b) aid_size_cell_midp_keypad_ParamLimits

0xdd86,	// (0x0001a94b) aid_size_cell_midp_keypad

0xdda0,	// (0x0001a965) midp_keyp_game_grid_pane_ParamLimits

0xdda0,	// (0x0001a965) midp_keyp_game_grid_pane

0xddc0,	// (0x0001a985) midp_keyp_rocker_pane_ParamLimits

0xddc0,	// (0x0001a985) midp_keyp_rocker_pane

0xddef,	// (0x0001a9b4) midp_keyp_sk_left_pane_ParamLimits

0xddef,	// (0x0001a9b4) midp_keyp_sk_left_pane

0xde4b,	// (0x0001aa10) midp_keyp_sk_right_pane_ParamLimits

0xde4b,	// (0x0001aa10) midp_keyp_sk_right_pane

0x3538,	// (0x000100fd) bg_button_pane_cp03

0xdea7,	// (0x0001aa6c) midp_keyp_sk_left_pane_g1

0x3538,	// (0x000100fd) bg_button_pane_cp04

0xdea7,	// (0x0001aa6c) midp_keyp_sk_right_pane_g1

0xbc3f,	// (0x00018804) midp_keyp_rocker_pane_g1

0xdeaf,	// (0x0001aa74) keyp_game_cell_pane_ParamLimits

0xdeaf,	// (0x0001aa74) keyp_game_cell_pane

0x3538,	// (0x000100fd) bg_button_pane_cp02

0xdec2,	// (0x0001aa87) keyp_game_cell_pane_g1

0x50d3,	// (0x00011c98) popup_fep_vkb2_window_ParamLimits

0x50d3,	// (0x00011c98) popup_fep_vkb2_window

0x694c,	// (0x00013511) aid_size_cell_vkb2_ParamLimits

0x694c,	// (0x00013511) aid_size_cell_vkb2

0x6998,	// (0x0001355d) popup_fep_vkb2_window_g1_ParamLimits

0x6998,	// (0x0001355d) popup_fep_vkb2_window_g1

0x69e0,	// (0x000135a5) vkb2_area_bottom_pane_ParamLimits

0x69e0,	// (0x000135a5) vkb2_area_bottom_pane

0x6a34,	// (0x000135f9) vkb2_area_keypad_pane_ParamLimits

0x6a34,	// (0x000135f9) vkb2_area_keypad_pane

0x6a7a,	// (0x0001363f) vkb2_area_top_pane_ParamLimits

0x6a7a,	// (0x0001363f) vkb2_area_top_pane

0x6afa,	// (0x000136bf) vkb2_top_entry_pane_ParamLimits

0x6afa,	// (0x000136bf) vkb2_top_entry_pane

0x6b24,	// (0x000136e9) vkb2_top_grid_left_pane_ParamLimits

0x6b24,	// (0x000136e9) vkb2_top_grid_left_pane

0x6b43,	// (0x00013708) vkb2_top_grid_right_pane_ParamLimits

0x6b43,	// (0x00013708) vkb2_top_grid_right_pane

0x6b62,	// (0x00013727) vkb2_cell_keypad_pane_ParamLimits

0x6b62,	// (0x00013727) vkb2_cell_keypad_pane

0x6c33,	// (0x000137f8) vkb2_area_bottom_grid_pane_ParamLimits

0x6c33,	// (0x000137f8) vkb2_area_bottom_grid_pane

0x6c59,	// (0x0001381e) vkb2_area_bottom_pane_g1_ParamLimits

0x6c59,	// (0x0001381e) vkb2_area_bottom_pane_g1

0x6c7d,	// (0x00013842) vkb2_area_bottom_pane_g2_ParamLimits

0x6c7d,	// (0x00013842) vkb2_area_bottom_pane_g2

0x6cab,	// (0x00013870) vkb2_area_bottom_pane_g3_ParamLimits

0x6cab,	// (0x00013870) vkb2_area_bottom_pane_g3

0x0002,

0xfd70,	// (0x0001c935) vkb2_area_bottom_pane_g_ParamLimits

0xfd70,	// (0x0001c935) vkb2_area_bottom_pane_g

0x6d0c,	// (0x000138d1) vkb2_top_cell_left_pane_ParamLimits

0x6d0c,	// (0x000138d1) vkb2_top_cell_left_pane

0xded3,	// (0x0001aa98) vkb2_top_entry_pane_g1_ParamLimits

0xded3,	// (0x0001aa98) vkb2_top_entry_pane_g1

0xdee1,	// (0x0001aaa6) vkb2_top_entry_pane_t1_ParamLimits

0xdee1,	// (0x0001aaa6) vkb2_top_entry_pane_t1

0xdf13,	// (0x0001aad8) vkb2_top_entry_pane_t2_ParamLimits

0xdf13,	// (0x0001aad8) vkb2_top_entry_pane_t2

0xdf45,	// (0x0001ab0a) vkb2_top_entry_pane_t3_ParamLimits

0xdf45,	// (0x0001ab0a) vkb2_top_entry_pane_t3

0x0002,

0xfd77,	// (0x0001c93c) vkb2_top_entry_pane_t_ParamLimits

0xfd77,	// (0x0001c93c) vkb2_top_entry_pane_t

0x6d59,	// (0x0001391e) vkb2_top_grid_right_pane_g1_ParamLimits

0x6d59,	// (0x0001391e) vkb2_top_grid_right_pane_g1

0x6d6f,	// (0x00013934) vkb2_top_grid_right_pane_g2_ParamLimits

0x6d6f,	// (0x00013934) vkb2_top_grid_right_pane_g2

0x6d87,	// (0x0001394c) vkb2_top_grid_right_pane_g3_ParamLimits

0x6d87,	// (0x0001394c) vkb2_top_grid_right_pane_g3

0x6d9f,	// (0x00013964) vkb2_top_grid_right_pane_g4_ParamLimits

0x6d9f,	// (0x00013964) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7e,	// (0x0001c943) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7e,	// (0x0001c943) vkb2_top_grid_right_pane_g

0x6db5,	// (0x0001397a) vkb2_top_cell_left_pane_g1

0x6dcc,	// (0x00013991) vkb2_cell_keypad_pane_g1_ParamLimits

0x6dcc,	// (0x00013991) vkb2_cell_keypad_pane_g1

0xdf69,	// (0x0001ab2e) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf69,	// (0x0001ab2e) vkb2_cell_keypad_pane_t1

0x6dda,	// (0x0001399f) vkb2_cell_bottom_grid_pane_ParamLimits

0x6dda,	// (0x0001399f) vkb2_cell_bottom_grid_pane

0x6e13,	// (0x000139d8) vkb2_cell_bottom_grid_pane_g1

0xdb1a,	// (0x0001a6df) aid_call2_pane_cp02

0xdb22,	// (0x0001a6e7) aid_call_pane_cp02

0xdb2a,	// (0x0001a6ef) clock_digital_number_pane_cp10

0xdb32,	// (0x0001a6f7) clock_digital_number_pane_cp11

0xdb3a,	// (0x0001a6ff) clock_digital_number_pane_cp12

0xdb42,	// (0x0001a707) clock_digital_number_pane_cp13

0xdb4a,	// (0x0001a70f) clock_digital_separator_pane_cp10

0x818e,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g1

0x818e,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g2

0xdb52,	// (0x0001a717) popup_clock_digital_analogue_window_cp2_g3

0x818e,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g4

0xdb52,	// (0x0001a717) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd33,	// (0x0001c8f8) popup_clock_digital_analogue_window_cp2_g

0xdb5a,	// (0x0001a71f) popup_clock_digital_analogue_window_cp2_t1

0xdb68,	// (0x0001a72d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3e,	// (0x0001c903) popup_clock_digital_analogue_window_cp2_t

0xbc3f,	// (0x00018804) clock_digital_number_pane_cp10_g1

0xbc3f,	// (0x00018804) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0001c6df) clock_digital_number_pane_cp10_g

0xbc3f,	// (0x00018804) clock_digital_separator_pane_cp10_g1

0xbc3f,	// (0x00018804) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0001c6df) clock_digital_separator_pane_cp10_g

0xd994,	// (0x0001a559) uniindi_top_pane_g3

0xd9a5,	// (0x0001a56a) uniindi_top_pane_g4

0x6bed,	// (0x000137b2) vkb2_row_keypad_pane_ParamLimits

0x6bed,	// (0x000137b2) vkb2_row_keypad_pane

0x6e2f,	// (0x000139f4) vkb2_cell_t_keypad_pane_ParamLimits

0x6e2f,	// (0x000139f4) vkb2_cell_t_keypad_pane

0x6e3f,	// (0x00013a04) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6e3f,	// (0x00013a04) vkb2_cell_t_keypad_pane_cp08

0x6e54,	// (0x00013a19) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6e54,	// (0x00013a19) vkb2_cell_t_keypad_pane_cp09

0x6e68,	// (0x00013a2d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6e68,	// (0x00013a2d) vkb2_cell_t_keypad_pane_cp01

0x6e79,	// (0x00013a3e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6e79,	// (0x00013a3e) vkb2_cell_t_keypad_pane_cp02

0x6e8a,	// (0x00013a4f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6e8a,	// (0x00013a4f) vkb2_cell_t_keypad_pane_cp03

0x6e9b,	// (0x00013a60) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6e9b,	// (0x00013a60) vkb2_cell_t_keypad_pane_cp04

0x6eac,	// (0x00013a71) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6eac,	// (0x00013a71) vkb2_cell_t_keypad_pane_cp05

0x6ebd,	// (0x00013a82) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6ebd,	// (0x00013a82) vkb2_cell_t_keypad_pane_cp06

0x6ed0,	// (0x00013a95) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6ed0,	// (0x00013a95) vkb2_cell_t_keypad_pane_cp07

0x6ee5,	// (0x00013aaa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6ee5,	// (0x00013aaa) vkb2_cell_t_keypad_pane_cp10

0x6680,	// (0x00013245) vkb2_cell_t_keypad_pane_g1

0xdf80,	// (0x0001ab45) vkb2_cell_t_keypad_pane_t1

0x4fc4,	// (0x00011b89) popup_grid_graphic2_window

0xdf92,	// (0x0001ab57) aid_size_cell_graphic2_ParamLimits

0xdf92,	// (0x0001ab57) aid_size_cell_graphic2

0xdfca,	// (0x0001ab8f) bg_popup_window_pane_cp21_ParamLimits

0xdfca,	// (0x0001ab8f) bg_popup_window_pane_cp21

0xdfd8,	// (0x0001ab9d) graphic2_pages_pane_ParamLimits

0xdfd8,	// (0x0001ab9d) graphic2_pages_pane

0xe01e,	// (0x0001abe3) grid_graphic2_control_pane_ParamLimits

0xe01e,	// (0x0001abe3) grid_graphic2_control_pane

0xe05c,	// (0x0001ac21) grid_graphic2_pane_ParamLimits

0xe05c,	// (0x0001ac21) grid_graphic2_pane

0xe0d2,	// (0x0001ac97) cell_graphic2_pane

0x4fc4,	// (0x00011b89) main_comp_mode_pane

0xd19e,	// (0x00019d63) list_ai3_gene_pane_ParamLimits

0xd5c7,	// (0x0001a18c) bg_popup_window_pane_cp19_ParamLimits

0xd5d3,	// (0x0001a198) bg_touch_area_indi_pane_ParamLimits

0xd5d3,	// (0x0001a198) bg_touch_area_indi_pane

0xd5e9,	// (0x0001a1ae) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5e9,	// (0x0001a1ae) bg_touch_area_indi_pane_cp01

0xd5ff,	// (0x0001a1c4) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ff,	// (0x0001a1c4) bg_touch_area_indi_pane_cp02

0xd619,	// (0x0001a1de) bg_touch_area_indi_pane_cp03_ParamLimits

0xd619,	// (0x0001a1de) bg_touch_area_indi_pane_cp03

0xd633,	// (0x0001a1f8) popup_slider_window_g1_ParamLimits

0xd64f,	// (0x0001a214) popup_slider_window_g2_ParamLimits

0xd66b,	// (0x0001a230) popup_slider_window_g3_ParamLimits

0xfcc8,	// (0x0001c88d) popup_slider_window_g_ParamLimits

0xd6d1,	// (0x0001a296) popup_slider_window_t1_ParamLimits

0xd745,	// (0x0001a30a) small_volume_slider_vertical_pane_ParamLimits

0xe0d2,	// (0x0001ac97) cell_graphic2_pane_ParamLimits

0xe126,	// (0x0001aceb) bg_button_pane_cp10_ParamLimits

0xe126,	// (0x0001aceb) bg_button_pane_cp10

0xe13b,	// (0x0001ad00) bg_button_pane_cp11_ParamLimits

0xe13b,	// (0x0001ad00) bg_button_pane_cp11

0xe150,	// (0x0001ad15) graphic2_pages_pane_g1_ParamLimits

0xe150,	// (0x0001ad15) graphic2_pages_pane_g1

0xe16b,	// (0x0001ad30) graphic2_pages_pane_g2_ParamLimits

0xe16b,	// (0x0001ad30) graphic2_pages_pane_g2

0x0001,

0xfd8c,	// (0x0001c951) graphic2_pages_pane_g_ParamLimits

0xfd8c,	// (0x0001c951) graphic2_pages_pane_g

0xe183,	// (0x0001ad48) graphic2_pages_pane_t1_ParamLimits

0xe183,	// (0x0001ad48) graphic2_pages_pane_t1

0xe199,	// (0x0001ad5e) cell_graphic2_control_pane_ParamLimits

0xe199,	// (0x0001ad5e) cell_graphic2_control_pane

0xe1b9,	// (0x0001ad7e) cell_graphic2_pane_g1_ParamLimits

0xe1b9,	// (0x0001ad7e) cell_graphic2_pane_g1

0xe1c6,	// (0x0001ad8b) cell_graphic2_pane_g2_ParamLimits

0xe1c6,	// (0x0001ad8b) cell_graphic2_pane_g2

0xe1d3,	// (0x0001ad98) cell_graphic2_pane_g3_ParamLimits

0xe1d3,	// (0x0001ad98) cell_graphic2_pane_g3

0xe1e0,	// (0x0001ada5) cell_graphic2_pane_g4_ParamLimits

0xe1e0,	// (0x0001ada5) cell_graphic2_pane_g4

0xe1ed,	// (0x0001adb2) cell_graphic2_pane_g5_ParamLimits

0xe1ed,	// (0x0001adb2) cell_graphic2_pane_g5

0x0004,

0xfd91,	// (0x0001c956) cell_graphic2_pane_g_ParamLimits

0xfd91,	// (0x0001c956) cell_graphic2_pane_g

0xe205,	// (0x0001adca) cell_graphic2_pane_t1_ParamLimits

0xe205,	// (0x0001adca) cell_graphic2_pane_t1

0x921f,	// (0x00015de4) grid_highlight_pane_cp11_ParamLimits

0x921f,	// (0x00015de4) grid_highlight_pane_cp11

0x394b,	// (0x00010510) bg_button_pane_cp05

0xe23b,	// (0x0001ae00) cell_graphic2_control_pane_g1

0xbc3f,	// (0x00018804) bg_touch_area_indi_pane_g1

0xe263,	// (0x0001ae28) aid_cmod_rocker_key_size

0xe26d,	// (0x0001ae32) aid_cmode_itu_key_size

0xe277,	// (0x0001ae3c) main_cmode_video_pane

0xe281,	// (0x0001ae46) main_comp_mode_itu_pane

0xe28d,	// (0x0001ae52) main_comp_mode_rocker_pane

0xe299,	// (0x0001ae5e) cell_cmode_rocker_pane_ParamLimits

0xe299,	// (0x0001ae5e) cell_cmode_rocker_pane

0xe2ad,	// (0x0001ae72) cell_cmode_itu_pane_ParamLimits

0xe2ad,	// (0x0001ae72) cell_cmode_itu_pane

0x3eed,	// (0x00010ab2) bg_button_pane_cp06_ParamLimits

0x3eed,	// (0x00010ab2) bg_button_pane_cp06

0xbeba,	// (0x00018a7f) cell_cmode_rocker_pane_g1_ParamLimits

0xbeba,	// (0x00018a7f) cell_cmode_rocker_pane_g1

0xd7ec,	// (0x0001a3b1) cell_cmode_rocker_pane_g2_ParamLimits

0xd7ec,	// (0x0001a3b1) cell_cmode_rocker_pane_g2

0x0001,

0xfda1,	// (0x0001c966) cell_cmode_rocker_pane_g_ParamLimits

0xfda1,	// (0x0001c966) cell_cmode_rocker_pane_g

0x3538,	// (0x000100fd) bg_button_pane_cp07

0xe2c4,	// (0x0001ae89) cell_cmode_itu_pane_g1

0xe2cd,	// (0x0001ae92) cell_cmode_itu_pane_t1

0xe2db,	// (0x0001aea0) cell_cmode_itu_pane_t2

0x0001,

0xfda6,	// (0x0001c96b) cell_cmode_itu_pane_t

0xda19,	// (0x0001a5de) aid_touch_ctrl_left

0xda21,	// (0x0001a5e6) aid_touch_ctrl_right

0x3538,	// (0x000100fd) compa_mode_pane

0xe2e9,	// (0x0001aeae) aid_cmod_rocker_key_size_cp

0xe2f3,	// (0x0001aeb8) aid_cmode_itu_key_size_cp

0xe2fd,	// (0x0001aec2) compa_mode_pane_g1

0xe305,	// (0x0001aeca) compa_mode_pane_g2

0xe30d,	// (0x0001aed2) compa_mode_pane_g3

0x0002,

0xfdab,	// (0x0001c970) compa_mode_pane_g

0xe315,	// (0x0001aeda) main_comp_mode_itu_pane_cp

0xe31d,	// (0x0001aee2) main_comp_mode_rocker_pane_cp

0xe325,	// (0x0001aeea) cell_cmode_itu_pane_cp_ParamLimits

0xe325,	// (0x0001aeea) cell_cmode_itu_pane_cp

0xe33a,	// (0x0001aeff) cell_cmode_rocker_pane_cp_ParamLimits

0xe33a,	// (0x0001aeff) cell_cmode_rocker_pane_cp

0x3eed,	// (0x00010ab2) bg_button_pane_cp06_cp_ParamLimits

0x3eed,	// (0x00010ab2) bg_button_pane_cp06_cp

0xbeba,	// (0x00018a7f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbeba,	// (0x00018a7f) cell_cmode_rocker_pane_g1_cp

0xbc3f,	// (0x00018804) cell_cmode_rocker_pane_g2_cp

0x3538,	// (0x000100fd) bg_button_pane_cp07_cp

0xe34c,	// (0x0001af11) cell_cmode_itu_pane_g1_cp

0xe355,	// (0x0001af1a) cell_cmode_itu_pane_t1_cp

0xe355,	// (0x0001af1a) cell_cmode_itu_pane_t2_cp

0xa74d,	// (0x00017312) settings_code_pane_cp2

0x3775,	// (0x0001033a) bg_popup_window_pane_cp3_ParamLimits

0x3b5f,	// (0x00010724) heading_pane_cp3_ParamLimits

0x3b6e,	// (0x00010733) listscroll_popup_graphic_pane_ParamLimits

0x6413,	// (0x00012fd8) fep_hwr_aid_pane_ParamLimits

0x68a5,	// (0x0001346a) aid_touch_sctrl_top_ParamLimits

0x68c0,	// (0x00013485) sctrl_sk_top_pane_g1_ParamLimits

0x6680,	// (0x00013245) sctrl_sk_top_pane_g2_ParamLimits

0xfce1,	// (0x0001c8a6) sctrl_sk_top_pane_g_ParamLimits

0x68cd,	// (0x00013492) sctrl_sk_top_pane_t1_ParamLimits

0x68a5,	// (0x0001346a) aid_touch_sctrl_bottom_ParamLimits

0x68cd,	// (0x00013492) sctrl_sk_bottom_pane_t1_ParamLimits

0xd95e,	// (0x0001a523) aid_area_touch_clock

0x6ac0,	// (0x00013685) aid_vkb2_area_top_pane_cell_ParamLimits

0x6ac0,	// (0x00013685) aid_vkb2_area_top_pane_cell

0x6c0f,	// (0x000137d4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6c0f,	// (0x000137d4) aid_vkb2_area_bottom_pane_cell

0xdecb,	// (0x0001aa90) popup_char_count_window

0xe363,	// (0x0001af28) popup_char_count_window_g1

0xe36c,	// (0x0001af31) popup_char_count_window_g2

0xe375,	// (0x0001af3a) popup_char_count_window_g3

0x0002,

0xfdb2,	// (0x0001c977) popup_char_count_window_g

0xe37e,	// (0x0001af43) popup_char_count_window_t1

0x6976,	// (0x0001353b) popup_fep_char_preview_window_ParamLimits

0x6976,	// (0x0001353b) popup_fep_char_preview_window

0x6ade,	// (0x000136a3) vkb2_top_candi_pane_ParamLimits

0x6ade,	// (0x000136a3) vkb2_top_candi_pane

0xe38c,	// (0x0001af51) cell_vkb2_top_candi_pane_ParamLimits

0xe38c,	// (0x0001af51) cell_vkb2_top_candi_pane

0x6efa,	// (0x00013abf) bg_popup_fep_char_preview_window_ParamLimits

0x6efa,	// (0x00013abf) bg_popup_fep_char_preview_window

0x6f08,	// (0x00013acd) popup_fep_char_preview_window_t1_ParamLimits

0x6f08,	// (0x00013acd) popup_fep_char_preview_window_t1

0xe3da,	// (0x0001af9f) bg_popup_fep_char_preview_window_g1

0xe3e2,	// (0x0001afa7) bg_popup_fep_char_preview_window_g2

0xe3ea,	// (0x0001afaf) bg_popup_fep_char_preview_window_g3

0xe3f2,	// (0x0001afb7) bg_popup_fep_char_preview_window_g4

0xe3fa,	// (0x0001afbf) bg_popup_fep_char_preview_window_g5

0xe402,	// (0x0001afc7) bg_popup_fep_char_preview_window_g6

0xe40a,	// (0x0001afcf) bg_popup_fep_char_preview_window_g7

0xe412,	// (0x0001afd7) bg_popup_fep_char_preview_window_g8

0xe41a,	// (0x0001afdf) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb9,	// (0x0001c97e) bg_popup_fep_char_preview_window_g

0x6680,	// (0x00013245) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6680,	// (0x00013245) cell_vkb2_top_candi_pane_g1

0x668e,	// (0x00013253) cell_vkb2_top_candi_pane_g2_ParamLimits

0x668e,	// (0x00013253) cell_vkb2_top_candi_pane_g2

0xc9f6,	// (0x000195bb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc9f6,	// (0x000195bb) cell_vkb2_top_candi_pane_g3

0x6f4a,	// (0x00013b0f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6f4a,	// (0x00013b0f) cell_vkb2_top_candi_pane_g4

0xc592,	// (0x00019157) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc592,	// (0x00019157) cell_vkb2_top_candi_pane_g5

0x6f6b,	// (0x00013b30) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6f6b,	// (0x00013b30) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdce,	// (0x0001c993) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdce,	// (0x0001c993) cell_vkb2_top_candi_pane_g

0x6f79,	// (0x00013b3e) cell_vkb2_top_candi_pane_t1

0x6273,	// (0x00012e38) aid_size_touch_slider_mark_ParamLimits

0x6273,	// (0x00012e38) aid_size_touch_slider_mark

0xe00e,	// (0x0001abd3) grid_graphic2_catg_pane_ParamLimits

0xe00e,	// (0x0001abd3) grid_graphic2_catg_pane

0xe0ac,	// (0x0001ac71) popup_grid_graphic2_window_t1_ParamLimits

0xe0ac,	// (0x0001ac71) popup_grid_graphic2_window_t1

0xe0be,	// (0x0001ac83) popup_grid_graphic2_window_t2_ParamLimits

0xe0be,	// (0x0001ac83) popup_grid_graphic2_window_t2

0x0001,

0xfd87,	// (0x0001c94c) popup_grid_graphic2_window_t_ParamLimits

0xfd87,	// (0x0001c94c) popup_grid_graphic2_window_t

0x394b,	// (0x00010510) bg_button_pane_cp05_ParamLimits

0xe23b,	// (0x0001ae00) cell_graphic2_control_pane_g1_ParamLimits

0xe422,	// (0x0001afe7) cell_graphic2_catg_pane_ParamLimits

0xe422,	// (0x0001afe7) cell_graphic2_catg_pane

0x3538,	// (0x000100fd) bg_button_pane_cp12

0xe434,	// (0x0001aff9) cell_graphic2_catg_pane_g1

0xd92a,	// (0x0001a4ef) cell_tb_ext_pane_t1_ParamLimits

0x6d2c,	// (0x000138f1) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6d2c,	// (0x000138f1) vkb2_top_cell_right_narrow_pane

0x6d44,	// (0x00013909) vkb2_top_cell_right_wide_pane_ParamLimits

0x6d44,	// (0x00013909) vkb2_top_cell_right_wide_pane

0x6405,	// (0x00012fca) bg_vkb2_func_pane_ParamLimits

0x6405,	// (0x00012fca) bg_vkb2_func_pane

0x6db5,	// (0x0001397a) vkb2_top_cell_left_pane_g1_ParamLimits

0x6405,	// (0x00012fca) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6405,	// (0x00012fca) bg_vkb2_fuc_pane_cp03

0x6e13,	// (0x000139d8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9103,	// (0x00015cc8) bg_vkb2_func_pane_g1

0x910b,	// (0x00015cd0) bg_vkb2_func_pane_g2

0x911b,	// (0x00015ce0) bg_vkb2_func_pane_g3

0x9113,	// (0x00015cd8) bg_vkb2_func_pane_g4

0x9123,	// (0x00015ce8) bg_vkb2_func_pane_g5

0x912b,	// (0x00015cf0) bg_vkb2_func_pane_g6

0x9133,	// (0x00015cf8) bg_vkb2_func_pane_g7

0x913b,	// (0x00015d00) bg_vkb2_func_pane_g8

0x90fb,	// (0x00015cc0) bg_vkb2_func_pane_g9

0x0008,

0xfddb,	// (0x0001c9a0) bg_vkb2_func_pane_g

0x6405,	// (0x00012fca) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6405,	// (0x00012fca) bg_vkb2_fuc_pane_cp01

0x6db5,	// (0x0001397a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6db5,	// (0x0001397a) vkb2_top_cell_right_wide_pane_g1

0x6405,	// (0x00012fca) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6405,	// (0x00012fca) bg_vkb2_fuc_pane_cp02

0x6f97,	// (0x00013b5c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6f97,	// (0x00013b5c) vkb2_top_cell_right_narrow_pane_g1

0xd541,	// (0x0001a106) aid_touch_area_decrease_ParamLimits

0xd541,	// (0x0001a106) aid_touch_area_decrease

0xd565,	// (0x0001a12a) aid_touch_area_increase_ParamLimits

0xd565,	// (0x0001a12a) aid_touch_area_increase

0xd57d,	// (0x0001a142) aid_touch_area_mute_ParamLimits

0xd57d,	// (0x0001a142) aid_touch_area_mute

0xd599,	// (0x0001a15e) aid_touch_area_slider_ParamLimits

0xd599,	// (0x0001a15e) aid_touch_area_slider

0xd687,	// (0x0001a24c) popup_slider_window_g4_ParamLimits

0xd687,	// (0x0001a24c) popup_slider_window_g4

0xd69f,	// (0x0001a264) popup_slider_window_g5_ParamLimits

0xd69f,	// (0x0001a264) popup_slider_window_g5

0xd6c1,	// (0x0001a286) popup_slider_window_g6_ParamLimits

0xd6c1,	// (0x0001a286) popup_slider_window_g6

0xd6ff,	// (0x0001a2c4) popup_slider_window_t2_ParamLimits

0xd6ff,	// (0x0001a2c4) popup_slider_window_t2

0x0001,

0xfcd5,	// (0x0001c89a) popup_slider_window_t_ParamLimits

0xfcd5,	// (0x0001c89a) popup_slider_window_t

0xd717,	// (0x0001a2dc) slider_pane_ParamLimits

0xd717,	// (0x0001a2dc) slider_pane

0xe43d,	// (0x0001b002) slider_pane_g1_ParamLimits

0xe43d,	// (0x0001b002) slider_pane_g1

0xe451,	// (0x0001b016) slider_pane_g2_ParamLimits

0xe451,	// (0x0001b016) slider_pane_g2

0xe467,	// (0x0001b02c) slider_pane_g3_ParamLimits

0xe467,	// (0x0001b02c) slider_pane_g3

0x0003,

0xfdee,	// (0x0001c9b3) slider_pane_g_ParamLimits

0xfdee,	// (0x0001c9b3) slider_pane_g

0x5df9,	// (0x000129be) popup_tb_float_extension_window_ParamLimits

0x5df9,	// (0x000129be) popup_tb_float_extension_window

0xe493,	// (0x0001b058) aid_size_cell_tb_float_ext

0x3538,	// (0x000100fd) bg_popup_sub_window_cp28

0xe49f,	// (0x0001b064) grid_tb_float_ext_pane

0xe4ab,	// (0x0001b070) cell_tb_float_ext_pane_ParamLimits

0xe4ab,	// (0x0001b070) cell_tb_float_ext_pane

0xe4c7,	// (0x0001b08c) cell_tb_float_ext_pane_g1

0xe4d0,	// (0x0001b095) grid_highlight_pane_cp12

0x655a,	// (0x0001311f) cell_last_hwr_side_pane_ParamLimits

0x655a,	// (0x0001311f) cell_last_hwr_side_pane

0xbc3f,	// (0x00018804) cell_last_hwr_side_pane_g1

0xe4d9,	// (0x0001b09e) cell_last_hwr_side_pane_g2

0x0001,

0xfdf7,	// (0x0001c9bc) cell_last_hwr_side_pane_g

0x6cdb,	// (0x000138a0) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6cdb,	// (0x000138a0) vkb2_area_bottom_space_btn_pane

0x6680,	// (0x00013245) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf80,	// (0x0001ab45) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6f79,	// (0x00013b3e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6fb3,	// (0x00013b78) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6fb3,	// (0x00013b78) vkb2_area_bottom_space_btn_pane_g1

0x6fed,	// (0x00013bb2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6fed,	// (0x00013bb2) vkb2_area_bottom_space_btn_pane_g2

0x7023,	// (0x00013be8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7023,	// (0x00013be8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfc,	// (0x0001c9c1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfc,	// (0x0001c9c1) vkb2_area_bottom_space_btn_pane_g

0x64ca,	// (0x0001308f) cel_fep_hwr_func_pane_ParamLimits

0x64ca,	// (0x0001308f) cel_fep_hwr_func_pane

0x6506,	// (0x000130cb) cell_hwr_side_button_pane_ParamLimits

0x6506,	// (0x000130cb) cell_hwr_side_button_pane

0xd95e,	// (0x0001a523) aid_area_touch_clock_ParamLimits

0x394b,	// (0x00010510) bg_uniindi_top_pane_ParamLimits

0xd972,	// (0x0001a537) uniindi_top_pane_g1_ParamLimits

0xd988,	// (0x0001a54d) uniindi_top_pane_g2_ParamLimits

0xd994,	// (0x0001a559) uniindi_top_pane_g3_ParamLimits

0xd9a5,	// (0x0001a56a) uniindi_top_pane_g4_ParamLimits

0xfd0d,	// (0x0001c8d2) uniindi_top_pane_g_ParamLimits

0xd9b2,	// (0x0001a577) uniindi_top_pane_t1_ParamLimits

0x394b,	// (0x00010510) bg_vkb2_func_pane_cp01_ParamLimits

0x394b,	// (0x00010510) bg_vkb2_func_pane_cp01

0xe4e2,	// (0x0001b0a7) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e2,	// (0x0001b0a7) cel_fep_hwr_func_pane_g1

0x394b,	// (0x00010510) bg_vkb2_func_pane_cp02_ParamLimits

0x394b,	// (0x00010510) bg_vkb2_func_pane_cp02

0xe4e2,	// (0x0001b0a7) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e2,	// (0x0001b0a7) cell_hwr_side_button_pane_g1

0x8f46,	// (0x00015b0b) status_pane_g4_ParamLimits

0x8f46,	// (0x00015b0b) status_pane_g4

0x8f60,	// (0x00015b25) status_pane_t1

0xb9f2,	// (0x000185b7) form2_midp_gauge_slider_cont_pane

0xb9fa,	// (0x000185bf) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba0c,	// (0x000185d1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba1e,	// (0x000185e3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0001c692) form2_midp_gauge_slider_pane_t_ParamLimits

0xba30,	// (0x000185f5) form2_midp_slider_pane_ParamLimits

0x693e,	// (0x00013503) aid_size_cell_func_vkb2_ParamLimits

0x693e,	// (0x00013503) aid_size_cell_func_vkb2

0xe47f,	// (0x0001b044) slider_pane_g4_ParamLimits

0xe47f,	// (0x0001b044) slider_pane_g4

0x706d,	// (0x00013c32) form2_midp_gauge_slider_pane_t2_cp01

0x707b,	// (0x00013c40) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x707b,	// (0x00013c40) form2_midp_gauge_slider_pane_t3_cp01

0x7098,	// (0x00013c5d) form2_midp_slider_pane_cp01

0x3538,	// (0x000100fd) navi_smil_pane

0xe51b,	// (0x0001b0e0) navi_smil_pane_g1

0xe523,	// (0x0001b0e8) navi_smil_pane_t1

0xe4f0,	// (0x0001b0b5) form2_midp_slider_pane_g1

0xe4f9,	// (0x0001b0be) form2_midp_slider_pane_g2

0xe501,	// (0x0001b0c6) form2_midp_slider_pane_g3

0xe4f0,	// (0x0001b0b5) form2_midp_slider_pane_g4

0xe509,	// (0x0001b0ce) form2_midp_slider_pane_g5

0x0004,

0xfe05,	// (0x0001c9ca) form2_midp_slider_pane_g

0x705d,	// (0x00013c22) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x705d,	// (0x00013c22) vkb2_area_bottom_space_btn_pane_g4

0x8d65,	// (0x0001592a) lc0_navi_pane_ParamLimits

0x8d65,	// (0x0001592a) lc0_navi_pane

0x8de1,	// (0x000159a6) lc0_stat_indi_pane_ParamLimits

0x8de1,	// (0x000159a6) lc0_stat_indi_pane

0x8df8,	// (0x000159bd) ls0_title_pane_ParamLimits

0x8df8,	// (0x000159bd) ls0_title_pane

0x3eed,	// (0x00010ab2) bg_popup_sub_pane_cp14_ParamLimits

0xd945,	// (0x0001a50a) list_uniindi_pane_ParamLimits

0xd951,	// (0x0001a516) uniindi_top_pane_ParamLimits

0xd9f1,	// (0x0001a5b6) list_single_uniindi_pane_g1_ParamLimits

0xda04,	// (0x0001a5c9) list_single_uniindi_pane_t1_ParamLimits

0x70a1,	// (0x00013c66) lc0_stat_clock_pane_ParamLimits

0x70a1,	// (0x00013c66) lc0_stat_clock_pane

0xe531,	// (0x0001b0f6) lc0_stat_indi_pane_g1_ParamLimits

0xe531,	// (0x0001b0f6) lc0_stat_indi_pane_g1

0xe53e,	// (0x0001b103) lc0_stat_indi_pane_g2_ParamLimits

0xe53e,	// (0x0001b103) lc0_stat_indi_pane_g2

0x0001,

0xfe10,	// (0x0001c9d5) lc0_stat_indi_pane_g_ParamLimits

0xfe10,	// (0x0001c9d5) lc0_stat_indi_pane_g

0x70ae,	// (0x00013c73) lc0_uni_indicator_pane_ParamLimits

0x70ae,	// (0x00013c73) lc0_uni_indicator_pane

0xe54b,	// (0x0001b110) ls0_title_pane_g1_ParamLimits

0xe54b,	// (0x0001b110) ls0_title_pane_g1

0xe55f,	// (0x0001b124) ls0_title_pane_t1_ParamLimits

0xe55f,	// (0x0001b124) ls0_title_pane_t1

0x70bb,	// (0x00013c80) lc0_uni_indicator_pane_g1_ParamLimits

0x70bb,	// (0x00013c80) lc0_uni_indicator_pane_g1

0xe595,	// (0x0001b15a) lc0_stat_clock_pane_t1

0x4fc4,	// (0x00011b89) main_ai5_pane

0xe5a3,	// (0x0001b168) ai5_sk_pane_ParamLimits

0xe5a3,	// (0x0001b168) ai5_sk_pane

0xe5b0,	// (0x0001b175) cell_ai5_widget_pane_ParamLimits

0xe5b0,	// (0x0001b175) cell_ai5_widget_pane

0xe64f,	// (0x0001b214) aid_size_cell_widget_grid

0xe65d,	// (0x0001b222) bg_ai5_widget_pane_ParamLimits

0xe65d,	// (0x0001b222) bg_ai5_widget_pane

0xe6d9,	// (0x0001b29e) cell_ai5_widget_pane_g2

0xe6ed,	// (0x0001b2b2) cell_ai5_widget_pane_g3

0xe707,	// (0x0001b2cc) cell_ai5_widget_pane_g4

0xe717,	// (0x0001b2dc) cell_ai5_widget_pane_g5

0xe727,	// (0x0001b2ec) cell_ai5_widget_pane_g6

0xe733,	// (0x0001b2f8) cell_ai5_widget_pane_g7

0xe79f,	// (0x0001b364) cell_ai5_widget_pane_t1_ParamLimits

0xe79f,	// (0x0001b364) cell_ai5_widget_pane_t1

0xe7bc,	// (0x0001b381) cell_ai5_widget_pane_t2_ParamLimits

0xe7bc,	// (0x0001b381) cell_ai5_widget_pane_t2

0xe7d4,	// (0x0001b399) cell_ai5_widget_pane_t3_ParamLimits

0xe7d4,	// (0x0001b399) cell_ai5_widget_pane_t3

0xe7ec,	// (0x0001b3b1) cell_ai5_widget_pane_t4_ParamLimits

0xe7ec,	// (0x0001b3b1) cell_ai5_widget_pane_t4

0xe812,	// (0x0001b3d7) cell_ai5_widget_pane_t5_ParamLimits

0xe812,	// (0x0001b3d7) cell_ai5_widget_pane_t5

0xe832,	// (0x0001b3f7) cell_ai5_widget_pane_t6_ParamLimits

0xe832,	// (0x0001b3f7) cell_ai5_widget_pane_t6

0xe844,	// (0x0001b409) cell_ai5_widget_pane_t7_ParamLimits

0xe844,	// (0x0001b409) cell_ai5_widget_pane_t7

0xe863,	// (0x0001b428) cell_ai5_widget_pane_t8_ParamLimits

0xe863,	// (0x0001b428) cell_ai5_widget_pane_t8

0x000b,

0xfe30,	// (0x0001c9f5) cell_ai5_widget_pane_t_ParamLimits

0xfe30,	// (0x0001c9f5) cell_ai5_widget_pane_t

0xe8e7,	// (0x0001b4ac) grid_ai5_widget_pane

0x3eed,	// (0x00010ab2) highlight_cell_ai5_widget_pane_ParamLimits

0x3eed,	// (0x00010ab2) highlight_cell_ai5_widget_pane

0xe8f5,	// (0x0001b4ba) ai5_sk_left_pane

0xe8ff,	// (0x0001b4c4) ai5_sk_middle_pane

0xe909,	// (0x0001b4ce) ai5_sk_right_pane

0xe913,	// (0x0001b4d8) bg_ai5_widget_pane_g1_ParamLimits

0xe913,	// (0x0001b4d8) bg_ai5_widget_pane_g1

0xe91f,	// (0x0001b4e4) bg_ai5_widget_pane_g2_ParamLimits

0xe91f,	// (0x0001b4e4) bg_ai5_widget_pane_g2

0xe92b,	// (0x0001b4f0) bg_ai5_widget_pane_g3_ParamLimits

0xe92b,	// (0x0001b4f0) bg_ai5_widget_pane_g3

0xe937,	// (0x0001b4fc) bg_ai5_widget_pane_g4_ParamLimits

0xe937,	// (0x0001b4fc) bg_ai5_widget_pane_g4

0xe943,	// (0x0001b508) bg_ai5_widget_pane_g5_ParamLimits

0xe943,	// (0x0001b508) bg_ai5_widget_pane_g5

0xe94f,	// (0x0001b514) bg_ai5_widget_pane_g6_ParamLimits

0xe94f,	// (0x0001b514) bg_ai5_widget_pane_g6

0xe95b,	// (0x0001b520) bg_ai5_widget_pane_g7_ParamLimits

0xe95b,	// (0x0001b520) bg_ai5_widget_pane_g7

0xe967,	// (0x0001b52c) bg_ai5_widget_pane_g8_ParamLimits

0xe967,	// (0x0001b52c) bg_ai5_widget_pane_g8

0xe973,	// (0x0001b538) bg_ai5_widget_pane_g9_ParamLimits

0xe973,	// (0x0001b538) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x0001ca0e) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x0001ca0e) bg_ai5_widget_pane_g

0xe9ab,	// (0x0001b570) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9ab,	// (0x0001b570) cell_shortcut_ai5_widget_pane

0x8854,	// (0x00015419) bg_cell_shortcut_ai5_widget_pane

0xe9be,	// (0x0001b583) cell_grid_ai5_widget_pane_g1

0x8854,	// (0x00015419) highlight_cell_shortcut_ai5_widget_pane

0x9103,	// (0x00015cc8) ai5_sk_left_pane_g1

0xe9c7,	// (0x0001b58c) ai5_sk_left_pane_g2

0xe9cf,	// (0x0001b594) ai5_sk_left_pane_g3

0xe9d7,	// (0x0001b59c) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x0001ca21) ai5_sk_left_pane_g

0xe9df,	// (0x0001b5a4) ai5_sk_left_pane_t1

0x910b,	// (0x00015cd0) ai5_sk_right_pane_g1

0xe9ed,	// (0x0001b5b2) ai5_sk_right_pane_g2

0xe9f5,	// (0x0001b5ba) ai5_sk_right_pane_g3

0xe9fd,	// (0x0001b5c2) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x0001ca2a) ai5_sk_right_pane_g

0xea05,	// (0x0001b5ca) ai5_sk_right_pane_t1

0x910b,	// (0x00015cd0) ai5_sk_middle_pane_g1

0x9103,	// (0x00015cc8) ai5_sk_middle_pane_g2

0x9123,	// (0x00015ce8) ai5_sk_middle_pane_g3

0xe9f5,	// (0x0001b5ba) ai5_sk_middle_pane_g4

0xe9cf,	// (0x0001b594) ai5_sk_middle_pane_g5

0xea13,	// (0x0001b5d8) ai5_sk_middle_pane_g6

0xea1b,	// (0x0001b5e0) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x0001ca33) ai5_sk_middle_pane_g

0x8beb,	// (0x000157b0) aid_touch_area_size_lc0_ParamLimits

0x8beb,	// (0x000157b0) aid_touch_area_size_lc0

0x66af,	// (0x00013274) cell_hwr_candidate_pane_t1_ParamLimits

0x8c09,	// (0x000157ce) aid_touch_navi_pane

0x8ef8,	// (0x00015abd) status_dt_navi_pane_ParamLimits

0x8ef8,	// (0x00015abd) status_dt_navi_pane

0x8f05,	// (0x00015aca) status_dt_sta_pane_ParamLimits

0x8f05,	// (0x00015aca) status_dt_sta_pane

0xea23,	// (0x0001b5e8) dt_sta_controll_pane

0xea30,	// (0x0001b5f5) dt_sta_indi_pane

0xea41,	// (0x0001b606) dt_sta_title_pane

0x394b,	// (0x00010510) bg_dt_sta_indi_pane_ParamLimits

0x394b,	// (0x00010510) bg_dt_sta_indi_pane

0xea54,	// (0x0001b619) dt_sta_battery_pane

0xea5c,	// (0x0001b621) dt_sta_indi_pane_g1

0xea65,	// (0x0001b62a) dt_sta_indi_pane_g2

0xea6e,	// (0x0001b633) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x0001ca42) dt_sta_indi_pane_g

0xea77,	// (0x0001b63c) dt_sta_signal_pane

0x3eed,	// (0x00010ab2) bg_dt_sta_title_pane_ParamLimits

0x3eed,	// (0x00010ab2) bg_dt_sta_title_pane

0xea80,	// (0x0001b645) dt_sta_title_pane_g1

0xea88,	// (0x0001b64d) dt_sta_title_pane_t1_ParamLimits

0xea88,	// (0x0001b64d) dt_sta_title_pane_t1

0x3538,	// (0x000100fd) bg_dt_sta_control_pane

0xea9d,	// (0x0001b662) dt_sta_controll_pane_g1

0xeaa6,	// (0x0001b66b) bg_dt_sta_title_pane_g1

0xeaaf,	// (0x0001b674) bg_dt_sta_title_pane_g2

0xeab8,	// (0x0001b67d) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x0001ca49) bg_dt_sta_title_pane_g

0xbc3f,	// (0x00018804) bg_dt_sta_indi_pane_g1

0xeac1,	// (0x0001b686) dt_sta_signal_pane_g1

0xeac9,	// (0x0001b68e) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x0001ca50) dt_sta_signal_pane_g

0xead1,	// (0x0001b696) dt_sta_battery_pane_g1

0xeada,	// (0x0001b69f) dt_sta_battery_pane_t1

0xbc3f,	// (0x00018804) bg_dt_sta_control_pane_g1

0x82b5,	// (0x00014e7a) fep_china_uni_eep_pane

0x82bd,	// (0x00014e82) fep_china_uni_entry_pane_ParamLimits

0x82cd,	// (0x00014e92) popup_fep_china_uni_window_g1_ParamLimits

0x82dd,	// (0x00014ea2) popup_fep_china_uni_window_g2_ParamLimits

0x82dd,	// (0x00014ea2) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0001c2b8) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0001c2b8) popup_fep_china_uni_window_g

0xeae9,	// (0x0001b6ae) fep_china_uni_eep_pane_g1

0xeaf1,	// (0x0001b6b6) fep_china_uni_eep_pane_t1

0xe512,	// (0x0001b0d7) aid_touch_area_size_smil_player

0x8d5d,	// (0x00015922) lc0_clock_pane

0x8f54,	// (0x00015b19) status_pane_g5_ParamLimits

0x8f54,	// (0x00015b19) status_pane_g5

0x5a7e,	// (0x00012643) popup_keymap_window

0x8f1a,	// (0x00015adf) status_icon_pane

0xe6ed,	// (0x0001b2b2) cell_ai5_widget_pane_g3_ParamLimits

0xe707,	// (0x0001b2cc) cell_ai5_widget_pane_g4_ParamLimits

0xe717,	// (0x0001b2dc) cell_ai5_widget_pane_g5_ParamLimits

0xe73f,	// (0x0001b304) cell_ai5_widget_pane_g8_ParamLimits

0xe73f,	// (0x0001b304) cell_ai5_widget_pane_g8

0xe753,	// (0x0001b318) cell_ai5_widget_pane_g9_ParamLimits

0xe753,	// (0x0001b318) cell_ai5_widget_pane_g9

0xe767,	// (0x0001b32c) cell_ai5_widget_pane_g10_ParamLimits

0xe767,	// (0x0001b32c) cell_ai5_widget_pane_g10

0xeb00,	// (0x0001b6c5) status_icon_pane_g1

0x3538,	// (0x000100fd) bg_popup_sub_pane_cp13

0xeb08,	// (0x0001b6cd) popup_keymap_window_t1

0x8b2c,	// (0x000156f1) control_pane_g6_ParamLimits

0x8b2c,	// (0x000156f1) control_pane_g6

0x8b39,	// (0x000156fe) control_pane_g7_ParamLimits

0x8b39,	// (0x000156fe) control_pane_g7

0x8b46,	// (0x0001570b) control_pane_g8_ParamLimits

0x8b46,	// (0x0001570b) control_pane_g8

0xea23,	// (0x0001b5e8) dt_sta_controll_pane_ParamLimits

0xea30,	// (0x0001b5f5) dt_sta_indi_pane_ParamLimits

0xea41,	// (0x0001b606) dt_sta_title_pane_ParamLimits

0x3d9c,	// (0x00010961) aid_size_touch_scroll_bar_cale

0x50a1,	// (0x00011c66) popup_discreet_window_ParamLimits

0x50a1,	// (0x00011c66) popup_discreet_window

0x512f,	// (0x00011cf4) popup_sk_window

0x9840,	// (0x00016405) bg_popup_sub_pane_cp28_ParamLimits

0x9840,	// (0x00016405) bg_popup_sub_pane_cp28

0xeb16,	// (0x0001b6db) popup_discreet_window_g1_ParamLimits

0xeb16,	// (0x0001b6db) popup_discreet_window_g1

0xeb36,	// (0x0001b6fb) popup_discreet_window_t1_ParamLimits

0xeb36,	// (0x0001b6fb) popup_discreet_window_t1

0xeb54,	// (0x0001b719) popup_discreet_window_t2_ParamLimits

0xeb54,	// (0x0001b719) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x0001ca55) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x0001ca55) popup_discreet_window_t

0x70ce,	// (0x00013c93) popup_sk_window_g1

0x70d8,	// (0x00013c9d) popup_sk_window_g2

0x0001,

0xfe97,	// (0x0001ca5c) popup_sk_window_g

0x70e0,	// (0x00013ca5) popup_sk_window_t1

0x70ee,	// (0x00013cb3) popup_sk_window_t1_copy1

0xe6d9,	// (0x0001b29e) cell_ai5_widget_pane_g2_ParamLimits

0xe875,	// (0x0001b43a) cell_ai5_widget_pane_t9_ParamLimits

0xe875,	// (0x0001b43a) cell_ai5_widget_pane_t9

0x3538,	// (0x000100fd) main_fep_fshwr2_pane

0x70fc,	// (0x00013cc1) aid_fshwr2_btn_pane

0x710c,	// (0x00013cd1) aid_fshwr2_syb_pane

0x7120,	// (0x00013ce5) aid_fshwr2_txt_pane

0x7130,	// (0x00013cf5) fshwr2_func_candi_pane

0x7150,	// (0x00013d15) fshwr2_hwr_syb_pane

0x7166,	// (0x00013d2b) fshwr2_icf_pane

0x4fc4,	// (0x00011b89) fshwr2_icf_bg_pane

0x719a,	// (0x00013d5f) fshwr2_icf_pane_t1_ParamLimits

0x719a,	// (0x00013d5f) fshwr2_icf_pane_t1

0x818e,	// (0x00014d53) fshwr2_func_candi_pane_g1

0xeba6,	// (0x0001b76b) fshwr2_func_candi_row_pane_ParamLimits

0xeba6,	// (0x0001b76b) fshwr2_func_candi_row_pane

0x71b2,	// (0x00013d77) cell_fshwr2_syb_pane_ParamLimits

0x71b2,	// (0x00013d77) cell_fshwr2_syb_pane

0x71d3,	// (0x00013d98) fshwr2_hwr_syb_pane_g1_ParamLimits

0x71d3,	// (0x00013d98) fshwr2_hwr_syb_pane_g1

0x4fc4,	// (0x00011b89) bg_popup_call_pane_cp01

0x71e1,	// (0x00013da6) fshwr2_func_candi_cell_pane_ParamLimits

0x71e1,	// (0x00013da6) fshwr2_func_candi_cell_pane

0x9eb7,	// (0x00016a7c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9eb7,	// (0x00016a7c) fshwr2_func_candi_cell_bg_pane

0x7232,	// (0x00013df7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7232,	// (0x00013df7) fshwr2_func_candi_cell_pane_g1

0x725d,	// (0x00013e22) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x725d,	// (0x00013e22) fshwr2_func_candi_cell_pane_t1

0x4fc4,	// (0x00011b89) bg_button_pane_cp08

0x8b83,	// (0x00015748) cell_fshwr2_syb_bg_pane

0x7270,	// (0x00013e35) cell_fshwr2_syb_bg_pane_g1

0x7284,	// (0x00013e49) cell_fshwr2_syb_bg_pane_t1

0x3eed,	// (0x00010ab2) main_tmo_pane

0xa364,	// (0x00016f29) uni_indicator_pane_g1_ParamLimits

0xa37a,	// (0x00016f3f) uni_indicator_pane_g2_ParamLimits

0xa390,	// (0x00016f55) uni_indicator_pane_g3_ParamLimits

0xa3a3,	// (0x00016f68) uni_indicator_pane_g4_ParamLimits

0xa3a3,	// (0x00016f68) uni_indicator_pane_g4

0xa3b7,	// (0x00016f7c) uni_indicator_pane_g5_ParamLimits

0xa3b7,	// (0x00016f7c) uni_indicator_pane_g5

0xa3b7,	// (0x00016f7c) uni_indicator_pane_g6_ParamLimits

0xa3b7,	// (0x00016f7c) uni_indicator_pane_g6

0xf8f7,	// (0x0001c4bc) uni_indicator_pane_g_ParamLimits

0xd511,	// (0x0001a0d6) popup_tmo_note_window_ParamLimits

0xd511,	// (0x0001a0d6) popup_tmo_note_window

0x6920,	// (0x000134e5) fshwr2_bg_pane

0x724e,	// (0x00013e13) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x724e,	// (0x00013e13) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x0001ca61) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x0001ca61) fshwr2_func_candi_cell_pane_g

0x6668,	// (0x0001322d) bg_popup_window_pane_cp01

0x729a,	// (0x00013e5f) bg_popup_window_pane_g1_cp01

0xebc9,	// (0x0001b78e) bg_popup_window_pane_cp22_ParamLimits

0xebc9,	// (0x0001b78e) bg_popup_window_pane_cp22

0xebd7,	// (0x0001b79c) listscroll_tmo_link_pane_ParamLimits

0xebd7,	// (0x0001b79c) listscroll_tmo_link_pane

0xec17,	// (0x0001b7dc) popup_tmo_note_window_g1_ParamLimits

0xec17,	// (0x0001b7dc) popup_tmo_note_window_g1

0xec24,	// (0x0001b7e9) tmo_note_info_pane_ParamLimits

0xec24,	// (0x0001b7e9) tmo_note_info_pane

0xec3e,	// (0x0001b803) list_tmo_note_info_pane_g1_ParamLimits

0xec3e,	// (0x0001b803) list_tmo_note_info_pane_g1

0xec55,	// (0x0001b81a) list_tmo_note_info_pane_g2_ParamLimits

0xec55,	// (0x0001b81a) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x0001ca66) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x0001ca66) list_tmo_note_info_pane_g

0xec71,	// (0x0001b836) list_tmo_note_info_text_pane_ParamLimits

0xec71,	// (0x0001b836) list_tmo_note_info_text_pane

0xecf6,	// (0x0001b8bb) list_tmo_link_pane

0xed03,	// (0x0001b8c8) scroll_pane_cp20

0xed10,	// (0x0001b8d5) list_single_tmo_link_pane_ParamLimits

0xed10,	// (0x0001b8d5) list_single_tmo_link_pane

0xed20,	// (0x0001b8e5) list_single_tmo_link_pane_t1

0xed2e,	// (0x0001b8f3) list_tmo_note_info_text_pane_t1_ParamLimits

0xed2e,	// (0x0001b8f3) list_tmo_note_info_text_pane_t1

0x7e2d,	// (0x000149f2) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7e2d,	// (0x000149f2) aid_size_touch_scroll_bar_cp01

0x7d5c,	// (0x00014921) aid_size_touch_slider_marker

0x5117,	// (0x00011cdc) popup_settings_window_ParamLimits

0x5117,	// (0x00011cdc) popup_settings_window

0x8bb7,	// (0x0001577c) popup_candi_list_indi_window

0x8c09,	// (0x000157ce) aid_touch_navi_pane_ParamLimits

0x6879,	// (0x0001343e) rs_clock_indi_pane

0x6882,	// (0x00013447) sctrl_sk_bottom_pane_ParamLimits

0x6893,	// (0x00013458) sctrl_sk_top_pane_ParamLimits

0x6990,	// (0x00013555) popup_fep_tooltip_window

0xe64f,	// (0x0001b214) aid_size_cell_widget_grid_ParamLimits

0xe6c4,	// (0x0001b289) cell_ai5_widget_pane_g1_ParamLimits

0xe6c4,	// (0x0001b289) cell_ai5_widget_pane_g1

0xe727,	// (0x0001b2ec) cell_ai5_widget_pane_g6_ParamLimits

0xe733,	// (0x0001b2f8) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe15,	// (0x0001c9da) cell_ai5_widget_pane_g_ParamLimits

0xfe15,	// (0x0001c9da) cell_ai5_widget_pane_g

0xe8a4,	// (0x0001b469) cell_ai5_widget_pane_t10_ParamLimits

0xe8a4,	// (0x0001b469) cell_ai5_widget_pane_t10

0xe8e7,	// (0x0001b4ac) grid_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0001b544) cell_contacts_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0001b544) cell_contacts_ai5_widget_pane

0xeb69,	// (0x0001b72e) popup_discreet_window_t3_ParamLimits

0xeb69,	// (0x0001b72e) popup_discreet_window_t3

0x7182,	// (0x00013d47) popup_fshwr2_char_preview_window_ParamLimits

0x7182,	// (0x00013d47) popup_fshwr2_char_preview_window

0xec8f,	// (0x0001b854) tmo_note_info_pane_t1

0xeca4,	// (0x0001b869) tmo_note_info_pane_t2

0xecbd,	// (0x0001b882) tmo_note_info_pane_t3

0xecd2,	// (0x0001b897) tmo_note_info_pane_t4

0xece4,	// (0x0001b8a9) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x0001ca6b) tmo_note_info_pane_t

0xecf6,	// (0x0001b8bb) list_tmo_link_pane_ParamLimits

0xed03,	// (0x0001b8c8) scroll_pane_cp20_ParamLimits

0x4fc4,	// (0x00011b89) bg_popup_fep_char_preview_window_cp01

0xed47,	// (0x0001b90c) popup_fshwr2_char_preview_window_t1

0xed55,	// (0x0001b91a) popup_candi_list_indi_window_g1

0xed5e,	// (0x0001b923) bg_cell_contacts_ai5_widget_pane

0xed6a,	// (0x0001b92f) cell_contacts_ai5_widget_pane_g1

0xed7f,	// (0x0001b944) cell_contacts_ai5_widget_pane_g2

0xed8b,	// (0x0001b950) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x0001ca76) cell_contacts_ai5_widget_pane_g

0xed97,	// (0x0001b95c) cell_contacts_ai5_widget_pane_t1

0x3eed,	// (0x00010ab2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0e,	// (0x0001b9d3) settings_container_pane

0x8854,	// (0x00015419) listscroll_set_pane_copy1

0xb04e,	// (0x00017c13) scroll_pane_cp121_copy1

0xee1a,	// (0x0001b9df) set_content_pane_copy1

0xee22,	// (0x0001b9e7) aid_height_set_list_copy1_ParamLimits

0xee22,	// (0x0001b9e7) aid_height_set_list_copy1

0xa5df,	// (0x000171a4) aid_size_parent_copy1_ParamLimits

0xa5df,	// (0x000171a4) aid_size_parent_copy1

0xee2e,	// (0x0001b9f3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2e,	// (0x0001b9f3) button_value_adjust_pane_cp6_copy1

0x8b83,	// (0x00015748) list_highlight_pane_cp2_copy1_ParamLimits

0x8b83,	// (0x00015748) list_highlight_pane_cp2_copy1

0xee42,	// (0x0001ba07) list_set_pane_copy1_ParamLimits

0xee42,	// (0x0001ba07) list_set_pane_copy1

0xeda9,	// (0x0001b96e) main_pane_set_t1_copy1_ParamLimits

0xeda9,	// (0x0001b96e) main_pane_set_t1_copy1

0xede3,	// (0x0001b9a8) main_pane_set_t2_copy1_ParamLimits

0xede3,	// (0x0001b9a8) main_pane_set_t2_copy1

0xef03,	// (0x0001bac8) main_pane_set_t3_copy1

0xef11,	// (0x0001bad6) main_pane_set_t4_copy1

0xee02,	// (0x0001b9c7) set_content_pane_g1_copy1_ParamLimits

0xee02,	// (0x0001b9c7) set_content_pane_g1_copy1

0xef1f,	// (0x0001bae4) setting_code_pane_copy1

0xef27,	// (0x0001baec) setting_slider_graphic_pane_copy1

0xef27,	// (0x0001baec) setting_slider_pane_copy1

0xef2f,	// (0x0001baf4) setting_text_pane_copy1

0xef2f,	// (0x0001baf4) setting_volume_pane_copy1

0xef1f,	// (0x0001bae4) settings_code_pane_cp2_copy1

0xef37,	// (0x0001bafc) settings_code_pane_cp_copy1_ParamLimits

0xef37,	// (0x0001bafc) settings_code_pane_cp_copy1

0x72a3,	// (0x00013e68) volume_set_pane_copy1

0xef4b,	// (0x0001bb10) volume_set_pane_g10_copy1

0xef57,	// (0x0001bb1c) volume_set_pane_g1_copy1

0xef61,	// (0x0001bb26) volume_set_pane_g2_copy1

0xef6b,	// (0x0001bb30) volume_set_pane_g3_copy1

0xef75,	// (0x0001bb3a) volume_set_pane_g4_copy1

0xef7f,	// (0x0001bb44) volume_set_pane_g5_copy1

0xef89,	// (0x0001bb4e) volume_set_pane_g6_copy1

0xef93,	// (0x0001bb58) volume_set_pane_g7_copy1

0xef9d,	// (0x0001bb62) volume_set_pane_g8_copy1

0xefa7,	// (0x0001bb6c) volume_set_pane_g9_copy1

0x3775,	// (0x0001033a) bg_set_opt_pane_cp_copy1_ParamLimits

0x3775,	// (0x0001033a) bg_set_opt_pane_cp_copy1

0x72af,	// (0x00013e74) setting_slider_pane_t1_copy1_ParamLimits

0x72af,	// (0x00013e74) setting_slider_pane_t1_copy1

0x72ce,	// (0x00013e93) setting_slider_pane_t2_copy1_ParamLimits

0x72ce,	// (0x00013e93) setting_slider_pane_t2_copy1

0x72e8,	// (0x00013ead) setting_slider_pane_t3_copy1_ParamLimits

0x72e8,	// (0x00013ead) setting_slider_pane_t3_copy1

0x7300,	// (0x00013ec5) slider_set_pane_copy1_ParamLimits

0x7300,	// (0x00013ec5) slider_set_pane_copy1

0x3fa8,	// (0x00010b6d) set_opt_bg_pane_g1_copy2

0x3fb0,	// (0x00010b75) set_opt_bg_pane_g2_copy2

0xefb3,	// (0x0001bb78) set_opt_bg_pane_g3_copy2

0x3fc0,	// (0x00010b85) set_opt_bg_pane_g4_copy2

0x3fc8,	// (0x00010b8d) set_opt_bg_pane_g5_copy2

0x3fd0,	// (0x00010b95) set_opt_bg_pane_g6_copy2

0xefbd,	// (0x0001bb82) set_opt_bg_pane_g7_copy2

0xefc7,	// (0x0001bb8c) set_opt_bg_pane_g8_copy2

0xefd1,	// (0x0001bb96) set_opt_bg_pane_g9_copy2

0x7316,	// (0x00013edb) aid_size_touch_slider_mark_copy1_ParamLimits

0x7316,	// (0x00013edb) aid_size_touch_slider_mark_copy1

0xefdb,	// (0x0001bba0) slider_set_pane_g1_copy1

0x732a,	// (0x00013eef) slider_set_pane_g2_copy1

0x6293,	// (0x00012e58) slider_set_pane_g3_copy1_ParamLimits

0x6293,	// (0x00012e58) slider_set_pane_g3_copy1

0x62a7,	// (0x00012e6c) slider_set_pane_g4_copy1_ParamLimits

0x62a7,	// (0x00012e6c) slider_set_pane_g4_copy1

0x62bf,	// (0x00012e84) slider_set_pane_g5_copy1_ParamLimits

0x62bf,	// (0x00012e84) slider_set_pane_g5_copy1

0x6293,	// (0x00012e58) slider_set_pane_g6_copy1_ParamLimits

0x6293,	// (0x00012e58) slider_set_pane_g6_copy1

0x7332,	// (0x00013ef7) slider_set_pane_g7_copy1_ParamLimits

0x7332,	// (0x00013ef7) slider_set_pane_g7_copy1

0x36bb,	// (0x00010280) bg_set_opt_pane_cp2_copy1

0xefe4,	// (0x0001bba9) setting_slider_graphic_pane_g1_copy1

0xefed,	// (0x0001bbb2) setting_slider_graphic_pane_t1_copy1

0xeffd,	// (0x0001bbc2) setting_slider_graphic_pane_t2_copy1

0xf00d,	// (0x0001bbd2) slider_set_pane_cp_copy1

0xf01d,	// (0x0001bbe2) input_focus_pane_cp1_copy1

0xf026,	// (0x0001bbeb) list_set_text_pane_copy1

0xf02e,	// (0x0001bbf3) setting_text_pane_g1_copy1

0x3823,	// (0x000103e8) set_text_pane_t1_copy1

0xf01d,	// (0x0001bbe2) input_focus_pane_cp2_copy1

0xf02e,	// (0x0001bbf3) setting_code_pane_g1_copy1

0xf037,	// (0x0001bbfc) setting_code_pane_t1_copy1

0xae53,	// (0x00017a18) list_set_graphic_pane_copy1

0x36bb,	// (0x00010280) bg_set_opt_pane_cp4_copy1

0x8543,	// (0x00015108) list_set_graphic_pane_g1_copy1_ParamLimits

0x8543,	// (0x00015108) list_set_graphic_pane_g1_copy1

0xf045,	// (0x0001bc0a) list_set_graphic_pane_g2_copy1

0x855b,	// (0x00015120) list_set_graphic_pane_t1_copy1_ParamLimits

0x855b,	// (0x00015120) list_set_graphic_pane_t1_copy1

0xbc3f,	// (0x00018804) rs_clock_indi_pane_g1

0xf04d,	// (0x0001bc12) rs_clock_indi_pane_t1

0xf05b,	// (0x0001bc20) rs_indi_pane

0xf063,	// (0x0001bc28) rs_indi_pane_g1

0xf06c,	// (0x0001bc31) rs_indi_pane_g2

0xed55,	// (0x0001b91a) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x0001ca7d) rs_indi_pane_g

0x8854,	// (0x00015419) bg_popup_preview_window_pane_cp03

0xf075,	// (0x0001bc3a) popup_fep_tooltip_window_t1

0xcb61,	// (0x00019726) popup_note2_window_g2_ParamLimits

0xcb61,	// (0x00019726) popup_note2_window_g2

0x0001,

0xfc45,	// (0x0001c80a) popup_note2_window_g_ParamLimits

0xfc45,	// (0x0001c80a) popup_note2_window_g

0xd164,	// (0x00019d29) bg_popup_sub_pane_cp11_ParamLimits

0xd171,	// (0x00019d36) cell_ai3_links_pane_g1_ParamLimits

0xd188,	// (0x00019d4d) cell_ai3_links_pane_t1

0x3823,	// (0x000103e8) set_text_pane_t1_copy1_ParamLimits

0x8756,	// (0x0001531b) cell_graphic_popup_pane_cp2_ParamLimits

0x8756,	// (0x0001531b) cell_graphic_popup_pane_cp2

0xf083,	// (0x0001bc48) cell_graphic_popup_pane_g1_cp2

0x3baf,	// (0x00010774) cell_graphic_popup_pane_g2_cp2

0xf08b,	// (0x0001bc50) cell_graphic_popup_pane_g3_cp2

0xf093,	// (0x0001bc58) cell_graphic_popup_pane_t2_cp2

0x3bc0,	// (0x00010785) grid_highlight_pane_cp3_cp2

0x4428,	// (0x00010fed) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3eed,	// (0x00010ab2) main_tmo_pane_ParamLimits

0xd505,	// (0x0001a0ca) popup_tmo_big_image_note_window

0xe6b3,	// (0x0001b278) cell_ai5_widget_list_pane

0xe6bb,	// (0x0001b280) cell_ai5_widget_lrg_icon_pane

0xec8f,	// (0x0001b854) tmo_note_info_pane_t1_ParamLimits

0xeca4,	// (0x0001b869) tmo_note_info_pane_t2_ParamLimits

0xecbd,	// (0x0001b882) tmo_note_info_pane_t3_ParamLimits

0xecd2,	// (0x0001b897) tmo_note_info_pane_t4_ParamLimits

0xece4,	// (0x0001b8a9) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x0001ca6b) tmo_note_info_pane_t_ParamLimits

0xee0e,	// (0x0001b9d3) settings_container_pane_ParamLimits

0xf015,	// (0x0001bbda) indicator_popup_pane_cp5

0xf015,	// (0x0001bbda) indicator_popup_pane_cp6

0xae53,	// (0x00017a18) list_set_graphic_pane_copy1_ParamLimits

0x3538,	// (0x000100fd) bg_popup_window_pane_cp23

0xf0a1,	// (0x0001bc66) popup_tmo_big_image_note_window_g1

0xf0ad,	// (0x0001bc72) popup_tmo_big_image_note_window_t1

0xf0bd,	// (0x0001bc82) popup_tmo_big_image_note_window_t2

0xf0cd,	// (0x0001bc92) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x0001ca84) popup_tmo_big_image_note_window_t

0xbc3f,	// (0x00018804) cell_ai5_widget_lrg_icon_pane_g1

0xf0dd,	// (0x0001bca2) cell_ai5_widget_lrg_icon_pane_t1

0xf0eb,	// (0x0001bcb0) cell_ai5_widget_list_row_pane_ParamLimits

0xf0eb,	// (0x0001bcb0) cell_ai5_widget_list_row_pane

0xf103,	// (0x0001bcc8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf103,	// (0x0001bcc8) cell_ai5_widget_list_row_pane_g1

0xf110,	// (0x0001bcd5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf110,	// (0x0001bcd5) cell_ai5_widget_list_row_pane_t1

0xf13b,	// (0x0001bd00) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13b,	// (0x0001bd00) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x0001ca8b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x0001ca8b) cell_ai5_widget_list_row_pane_t

0x4fc4,	// (0x00011b89) main_fep_vtchi_ss_pane

0xf18b,	// (0x0001bd50) popup_fep_char_pre_window

0xf193,	// (0x0001bd58) popup_fep_ituss_window

0xf1bf,	// (0x0001bd84) popup_fep_vkbss_window

0x8b83,	// (0x00015748) grid_vkbss_keypad_pane_ParamLimits

0x8b83,	// (0x00015748) grid_vkbss_keypad_pane

0xf201,	// (0x0001bdc6) ituss_keypad_pane

0x7352,	// (0x00013f17) aid_vkbss_key_offset_ParamLimits

0x7352,	// (0x00013f17) aid_vkbss_key_offset

0x735e,	// (0x00013f23) cell_vkbss_key_pane_ParamLimits

0x735e,	// (0x00013f23) cell_vkbss_key_pane

0xf20d,	// (0x0001bdd2) bg_cell_vkbss_key_g1_ParamLimits

0xf20d,	// (0x0001bdd2) bg_cell_vkbss_key_g1

0xf219,	// (0x0001bdde) cell_vkbss_key_3p_pane_ParamLimits

0xf219,	// (0x0001bdde) cell_vkbss_key_3p_pane

0xf24f,	// (0x0001be14) cell_vkbss_key_g1_ParamLimits

0xf24f,	// (0x0001be14) cell_vkbss_key_g1

0xf285,	// (0x0001be4a) cell_vkbss_key_t1_ParamLimits

0xf285,	// (0x0001be4a) cell_vkbss_key_t1

0x73c0,	// (0x00013f85) cell_ituss_key_pane_ParamLimits

0x73c0,	// (0x00013f85) cell_ituss_key_pane

0xf2e1,	// (0x0001bea6) bg_cell_ituss_key_g1_ParamLimits

0xf2e1,	// (0x0001bea6) bg_cell_ituss_key_g1

0xf2ed,	// (0x0001beb2) cell_ituss_key_pane_g1_ParamLimits

0xf2ed,	// (0x0001beb2) cell_ituss_key_pane_g1

0x73d1,	// (0x00013f96) cell_ituss_key_pane_g2_ParamLimits

0x73d1,	// (0x00013f96) cell_ituss_key_pane_g2

0x0005,

0xfecd,	// (0x0001ca92) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x0001ca92) cell_ituss_key_pane_g

0x7455,	// (0x0001401a) cell_ituss_key_t1_ParamLimits

0x7455,	// (0x0001401a) cell_ituss_key_t1

0x748f,	// (0x00014054) cell_ituss_key_t2_ParamLimits

0x748f,	// (0x00014054) cell_ituss_key_t2

0x74c1,	// (0x00014086) cell_ituss_key_t3_ParamLimits

0x74c1,	// (0x00014086) cell_ituss_key_t3

0x74f2,	// (0x000140b7) cell_ituss_key_t4_ParamLimits

0x74f2,	// (0x000140b7) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0001ca9f) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0001ca9f) cell_ituss_key_t

0xf313,	// (0x0001bed8) cell_vkbss_key_3p_pane_g1

0xf31b,	// (0x0001bee0) cell_vkbss_key_3p_pane_g2

0xf323,	// (0x0001bee8) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0001caaa) cell_vkbss_key_3p_pane_g

0x8854,	// (0x00015419) bg_popup_fep_char_preview_window_cp02

0xf32b,	// (0x0001bef0) popup_fep_char_pre_window_t1

0xe63c,	// (0x0001b201) main_ai5_sk_pane

0xed5e,	// (0x0001b923) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed6a,	// (0x0001b92f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed7f,	// (0x0001b944) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed8b,	// (0x0001b950) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x0001ca76) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed97,	// (0x0001b95c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3eed,	// (0x00010ab2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf339,	// (0x0001befe) main_ai5_sk_pane_g1

0x9678,	// (0x0001623d) popup_query_code_window_g1

0xf1a9,	// (0x0001bd6e) popup_fep_vkb_icf_pane

0xf1d8,	// (0x0001bd9d) popup_fep_vtchi_icf_pane

0xf342,	// (0x0001bf07) bg_icf_pane

0xf342,	// (0x0001bf07) list_vkb_icf_pane

0xf34e,	// (0x0001bf13) bg_icf_pane_cp01

0xf361,	// (0x0001bf26) vtchi_icf_list_pane

0xf3c1,	// (0x0001bf86) list_vkb_icf_pane_t1_ParamLimits

0xf3c1,	// (0x0001bf86) list_vkb_icf_pane_t1

0xf3da,	// (0x0001bf9f) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0001bf9f) vtchi_icf_list_pane_t1

0xf193,	// (0x0001bd58) popup_fep_ituss_window_ParamLimits

0xf1d8,	// (0x0001bd9d) popup_fep_vtchi_icf_pane_ParamLimits

0xf201,	// (0x0001bdc6) ituss_keypad_pane_ParamLimits

0x7348,	// (0x00013f0d) ituss_sks_pane

0xf342,	// (0x0001bf07) bg_icf_pane_ParamLimits

0xf163,	// (0x0001bd28) icf_edit_indi_pane_ParamLimits

0xf163,	// (0x0001bd28) icf_edit_indi_pane

0xf342,	// (0x0001bf07) list_vkb_icf_pane_ParamLimits

0xf34e,	// (0x0001bf13) bg_icf_pane_cp01_ParamLimits

0xf17e,	// (0x0001bd43) icf_edit_indi_pane_cp01_ParamLimits

0xf17e,	// (0x0001bd43) icf_edit_indi_pane_cp01

0xf361,	// (0x0001bf26) vtchi_query_pane

0xe4e2,	// (0x0001b0a7) icf_edit_indi_pane_g1_ParamLimits

0xe4e2,	// (0x0001b0a7) icf_edit_indi_pane_g1

0xf44a,	// (0x0001c00f) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0001c00f) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001cad5) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001cad5) icf_edit_indi_pane_g

0xf45e,	// (0x0001c023) icf_edit_indi_pane_t1

0xf3f3,	// (0x0001bfb8) bg_input_focus_pane_cp042

0x3d93,	// (0x00010958) vtchi_button_pane

0xf3fc,	// (0x0001bfc1) vtchi_query_pane_t1

0xf40a,	// (0x0001bfcf) vtchi_query_pane_t2

0xf418,	// (0x0001bfdd) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001cac4) vtchi_query_pane_t

0x4fc4,	// (0x00011b89) bg_button_pane_cp13

0xf426,	// (0x0001bfeb) vtchi_button_pane_g1

0x7535,	// (0x000140fa) ituss_sks_pane_g1

0x7540,	// (0x00014105) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001cacb) ituss_sks_pane_g

0xf42e,	// (0x0001bff3) ituss_sks_pane_t1

0xf43c,	// (0x0001c001) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001cad0) ituss_sks_pane_t

0xb6c0,	// (0x00018285) indicator_nsta_pane_cp_g1

0xb6c9,	// (0x0001828e) indicator_nsta_pane_cp_g2

0xb6d1,	// (0x00018296) indicator_nsta_pane_cp_g3

0xb6d9,	// (0x0001829e) indicator_nsta_pane_cp_g4

0xb6c9,	// (0x0001828e) indicator_nsta_pane_cp_g5

0xb6d1,	// (0x00018296) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0001c648) indicator_nsta_pane_cp_g

0xe229,	// (0x0001adee) cell_graphic2_pane_t2_ParamLimits

0xe229,	// (0x0001adee) cell_graphic2_pane_t2

0x0001,

0xfd9c,	// (0x0001c961) cell_graphic2_pane_t_ParamLimits

0xfd9c,	// (0x0001c961) cell_graphic2_pane_t

0xe255,	// (0x0001ae1a) cell_graphic2_control_pane_t1

0x826b,	// (0x00014e30) signal_pane_g3_ParamLimits

0x826b,	// (0x00014e30) signal_pane_g3

0x827a,	// (0x00014e3f) signal_pane_g4_ParamLimits

0x827a,	// (0x00014e3f) signal_pane_g4

0xf14d,	// (0x0001bd12) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14d,	// (0x0001bd12) cell_ai5_widget_list_row_pane_t3

0xf301,	// (0x0001bec6) cell_ituss_key_pane_t1_ParamLimits

0xf301,	// (0x0001bec6) cell_ituss_key_pane_t1

0x92b0,	// (0x00015e75) form_field_data_wide_pane_vc_t2_ParamLimits

0x92b0,	// (0x00015e75) form_field_data_wide_pane_vc_t2

0x92c4,	// (0x00015e89) form_field_data_wide_pane_vc_t3_ParamLimits

0x92c4,	// (0x00015e89) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0001c3a4) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c3a4) form_field_data_wide_pane_vc_t

0xb35d,	// (0x00017f22) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb35d,	// (0x00017f22) form_field_slider_wide_pane_vc_t3

0xb433,	// (0x00017ff8) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb433,	// (0x00017ff8) form_field_popup_wide_pane_vc_t2

0xb44a,	// (0x0001800f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb44a,	// (0x0001800f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0001c637) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0001c637) form_field_popup_wide_pane_vc_t

0x70fc,	// (0x00013cc1) aid_fshwr2_btn_pane_ParamLimits

0x710c,	// (0x00013cd1) aid_fshwr2_syb_pane_ParamLimits

0x7120,	// (0x00013ce5) aid_fshwr2_txt_pane_ParamLimits

0x6920,	// (0x000134e5) fshwr2_bg_pane_ParamLimits

0x7130,	// (0x00013cf5) fshwr2_func_candi_pane_ParamLimits

0x7150,	// (0x00013d15) fshwr2_hwr_syb_pane_ParamLimits

0x7166,	// (0x00013d2b) fshwr2_icf_pane_ParamLimits

0xb2d1,	// (0x00017e96) list_double_graphic_pane_vc_g4_ParamLimits

0xb2d1,	// (0x00017e96) list_double_graphic_pane_vc_g4

0x73f1,	// (0x00013fb6) cell_ituss_key_pane_g3_ParamLimits

0x73f1,	// (0x00013fb6) cell_ituss_key_pane_g3

0x7523,	// (0x000140e8) cell_ituss_key_t5_ParamLimits

0x7523,	// (0x000140e8) cell_ituss_key_t5

0xf1bf,	// (0x0001bd84) popup_fep_vkbss_window_ParamLimits

0xe646,	// (0x0001b20b) aid_cell_ai5_quarter

0xf45e,	// (0x0001c023) icf_edit_indi_pane_t1_ParamLimits

0x39f3,	// (0x000105b8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x39f3,	// (0x000105b8) aid_tch_indicator_popup_pane_cp2

0x3a06,	// (0x000105cb) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3a06,	// (0x000105cb) aid_tch_query_popup_data_pane_cp2

0x9620,	// (0x000161e5) aid_tch_query_popup_pane_ParamLimits

0x9620,	// (0x000161e5) aid_tch_query_popup_pane

0x9620,	// (0x000161e5) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9620,	// (0x000161e5) aid_tch_query_popup_data_pane_cp1

0x8b83,	// (0x00015748) cell_fshwr2_syb_bg_pane_ParamLimits

0x7270,	// (0x00013e35) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7284,	// (0x00013e49) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a9,	// (0x0001bd6e) popup_fep_vkb_icf_pane_ParamLimits

0x6f42,	// (0x00013b07) bg_popup_fep_char_preview_window_g10

0xe77b,	// (0x0001b340) cell_ai5_widget_pane_g11_ParamLimits

0xe77b,	// (0x0001b340) cell_ai5_widget_pane_g11

0xe787,	// (0x0001b34c) cell_ai5_widget_pane_g12_ParamLimits

0xe787,	// (0x0001b34c) cell_ai5_widget_pane_g12

0xe793,	// (0x0001b358) cell_ai5_widget_pane_g13_ParamLimits

0xe793,	// (0x0001b358) cell_ai5_widget_pane_g13

0xe8c3,	// (0x0001b488) cell_ai5_widget_pane_t11_ParamLimits

0xe8c3,	// (0x0001b488) cell_ai5_widget_pane_t11

0xe8d5,	// (0x0001b49a) cell_ai5_widget_pane_t12_ParamLimits

0xe8d5,	// (0x0001b49a) cell_ai5_widget_pane_t12

0x73fd,	// (0x00013fc2) cell_ituss_key_pane_g4_ParamLimits

0x73fd,	// (0x00013fc2) cell_ituss_key_pane_g4

0x7419,	// (0x00013fde) cell_ituss_key_pane_g5_ParamLimits

0x7419,	// (0x00013fde) cell_ituss_key_pane_g5

0x7435,	// (0x00013ffa) cell_ituss_key_pane_g6_ParamLimits

0x7435,	// (0x00013ffa) cell_ituss_key_pane_g6

0x90fb,	// (0x00015cc0) bg_icf_pane_g1

0xf369,	// (0x0001bf2e) bg_icf_pane_g2

0xf375,	// (0x0001bf3a) bg_icf_pane_g3

0xf37f,	// (0x0001bf44) bg_icf_pane_g4

0xf38b,	// (0x0001bf50) bg_icf_pane_g5

0xf395,	// (0x0001bf5a) bg_icf_pane_g6

0xf3a1,	// (0x0001bf66) bg_icf_pane_g7

0xf3ab,	// (0x0001bf70) bg_icf_pane_g8

0xf3b7,	// (0x0001bf7c) bg_icf_pane_g9

0x0008,

0xfeec,	// (0x0001cab1) bg_icf_pane_g

0xf1ee,	// (0x0001bdb3) popup_hyb_candi_window_ParamLimits

0xf1ee,	// (0x0001bdb3) popup_hyb_candi_window

0x921f,	// (0x00015de4) bg_popup_sub_pane_cp01_ParamLimits

0x921f,	// (0x00015de4) bg_popup_sub_pane_cp01

0xf477,	// (0x0001c03c) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0001c03c) entry_hyb_candi_pane

0xf486,	// (0x0001c04b) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0001c04b) grid_hyb_candi_pane

0xf49b,	// (0x0001c060) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0001c060) grid_hyb_phrase_pane

0xf4aa,	// (0x0001c06f) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0001c06f) cell_hyb_candi_pane

0x3d9c,	// (0x00010961) cell_hyb_candi_scroll_pane

0x818e,	// (0x00014d53) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0001c08b) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0001c099) cell_hyb_phrase_pane

0x818e,	// (0x00014d53) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0001c0a2) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0001c0b0) entry_hyb_candi_pane_t1

0x8854,	// (0x00015419) input_focus_pane_cp06

0xf4f9,	// (0x0001c0be) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0001c0c6) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0001c0ce) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0001c0d6) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0001c0de) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0001c0e6) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal

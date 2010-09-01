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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004c950 };

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
0x7736,	// (0x00054086) Screen

0x7742,	// (0x00054092) application_window_ParamLimits

0x7742,	// (0x00054092) application_window

0x27e1,	// (0x0004f131) screen_g1

0x4639,	// (0x00050f89) area_bottom_pane_ParamLimits

0x4639,	// (0x00050f89) area_bottom_pane

0x46f9,	// (0x00051049) area_top_pane_ParamLimits

0x46f9,	// (0x00051049) area_top_pane

0x4797,	// (0x000510e7) main_pane_ParamLimits

0x4797,	// (0x000510e7) main_pane

0x7752,	// (0x000540a2) misc_graphics

0x9590,	// (0x00055ee0) battery_pane_ParamLimits

0x9590,	// (0x00055ee0) battery_pane

0xa272,	// (0x00056bc2) bg_status_flat_pane_g8

0xa27a,	// (0x00056bca) bg_status_flat_pane_g9

0x9658,	// (0x00055fa8) context_pane_ParamLimits

0x9658,	// (0x00055fa8) context_pane

0x976e,	// (0x000560be) navi_pane_ParamLimits

0x976e,	// (0x000560be) navi_pane

0x97f2,	// (0x00056142) signal_pane_ParamLimits

0x97f2,	// (0x00056142) signal_pane

0x0008,

0xf854,	// (0x0005c1a4) bg_status_flat_pane_g

0x985f,	// (0x000561af) status_pane_g1_ParamLimits

0x985f,	// (0x000561af) status_pane_g1

0x9873,	// (0x000561c3) status_pane_g2_ParamLimits

0x9873,	// (0x000561c3) status_pane_g2

0x987f,	// (0x000561cf) status_pane_g3_ParamLimits

0x987f,	// (0x000561cf) status_pane_g3

0x0004,

0xf780,	// (0x0005c0d0) status_pane_g_ParamLimits

0xf780,	// (0x0005c0d0) status_pane_g

0x98b3,	// (0x00056203) title_pane_ParamLimits

0x98b3,	// (0x00056203) title_pane

0x98f0,	// (0x00056240) uni_indicator_pane_ParamLimits

0x98f0,	// (0x00056240) uni_indicator_pane

0x94c0,	// (0x00055e10) bg_list_pane_ParamLimits

0x94c0,	// (0x00055e10) bg_list_pane

0x808d,	// (0x000549dd) find_pane

0x94e0,	// (0x00055e30) listscroll_app_pane_ParamLimits

0x94e0,	// (0x00055e30) listscroll_app_pane

0x94ec,	// (0x00055e3c) listscroll_form_pane

0x56f5,	// (0x00052045) listscroll_gen_pane_ParamLimits

0x56f5,	// (0x00052045) listscroll_gen_pane

0x5709,	// (0x00052059) listscroll_set_pane

0x8711,	// (0x00055061) main_idle_act_pane

0x91bc,	// (0x00055b0c) main_idle_trad_pane

0x91bc,	// (0x00055b0c) main_list_empty_pane

0x94e0,	// (0x00055e30) main_midp_pane

0x9506,	// (0x00055e56) main_pane_g1_ParamLimits

0x9506,	// (0x00055e56) main_pane_g1

0x571f,	// (0x0005206f) popup_ai_message_window_ParamLimits

0x571f,	// (0x0005206f) popup_ai_message_window

0x57cd,	// (0x0005211d) popup_fep_china_uni_window_ParamLimits

0x57cd,	// (0x0005211d) popup_fep_china_uni_window

0x5829,	// (0x00052179) popup_fep_japan_candidate_window_ParamLimits

0x5829,	// (0x00052179) popup_fep_japan_candidate_window

0x5849,	// (0x00052199) popup_fep_japan_predictive_window_ParamLimits

0x5849,	// (0x00052199) popup_fep_japan_predictive_window

0x5879,	// (0x000521c9) popup_find_window

0x5886,	// (0x000521d6) popup_grid_graphic_window_ParamLimits

0x5886,	// (0x000521d6) popup_grid_graphic_window

0x58b2,	// (0x00052202) popup_large_graphic_colour_window

0x58d8,	// (0x00052228) popup_menu_window_ParamLimits

0x58d8,	// (0x00052228) popup_menu_window

0x5a90,	// (0x000523e0) popup_note_image_window

0x5a7c,	// (0x000523cc) popup_note_wait_window_ParamLimits

0x5a7c,	// (0x000523cc) popup_note_wait_window

0x5a7c,	// (0x000523cc) popup_note_window_ParamLimits

0x5a7c,	// (0x000523cc) popup_note_window

0x5ae6,	// (0x00052436) popup_query_code_window_ParamLimits

0x5ae6,	// (0x00052436) popup_query_code_window

0x5afa,	// (0x0005244a) popup_query_data_code_window_ParamLimits

0x5afa,	// (0x0005244a) popup_query_data_code_window

0x5b17,	// (0x00052467) popup_query_data_window_ParamLimits

0x5b17,	// (0x00052467) popup_query_data_window

0x5b33,	// (0x00052483) popup_query_sat_info_window_ParamLimits

0x5b33,	// (0x00052483) popup_query_sat_info_window

0x5b6c,	// (0x000524bc) popup_snote_single_graphic_window_ParamLimits

0x5b6c,	// (0x000524bc) popup_snote_single_graphic_window

0x5b6c,	// (0x000524bc) popup_snote_single_text_window_ParamLimits

0x5b6c,	// (0x000524bc) popup_snote_single_text_window

0x5b81,	// (0x000524d1) popup_sub_window_general

0x5cb1,	// (0x00052601) popup_window_general_ParamLimits

0x5cb1,	// (0x00052601) popup_window_general

0x9514,	// (0x00055e64) power_save_pane

0x5587,	// (0x00051ed7) control_pane_g1_ParamLimits

0x5587,	// (0x00051ed7) control_pane_g1

0x55ae,	// (0x00051efe) control_pane_g2_ParamLimits

0x55ae,	// (0x00051efe) control_pane_g2

0x9483,	// (0x00055dd3) control_pane_g3_ParamLimits

0x9483,	// (0x00055dd3) control_pane_g3

0x0007,

0xf768,	// (0x0005c0b8) control_pane_g_ParamLimits

0xf768,	// (0x0005c0b8) control_pane_g

0x55f8,	// (0x00051f48) control_pane_t1_ParamLimits

0x55f8,	// (0x00051f48) control_pane_t1

0x564c,	// (0x00051f9c) control_pane_t2_ParamLimits

0x564c,	// (0x00051f9c) control_pane_t2

0x0002,

0xf779,	// (0x0005c0c9) control_pane_t_ParamLimits

0xf779,	// (0x0005c0c9) control_pane_t

0x93a8,	// (0x00055cf8) navi_navi_volume_pane_cp1

0x93b0,	// (0x00055d00) status_small_icon_pane

0x93b8,	// (0x00055d08) status_small_pane_g1_ParamLimits

0x93b8,	// (0x00055d08) status_small_pane_g1

0x93ec,	// (0x00055d3c) status_small_pane_g2_ParamLimits

0x93ec,	// (0x00055d3c) status_small_pane_g2

0x93f8,	// (0x00055d48) status_small_pane_g3_ParamLimits

0x93f8,	// (0x00055d48) status_small_pane_g3

0x9404,	// (0x00055d54) status_small_pane_g4_ParamLimits

0x9404,	// (0x00055d54) status_small_pane_g4

0x9410,	// (0x00055d60) status_small_pane_g5_ParamLimits

0x9410,	// (0x00055d60) status_small_pane_g5

0x941e,	// (0x00055d6e) status_small_pane_g6_ParamLimits

0x941e,	// (0x00055d6e) status_small_pane_g6

0x0007,

0xf757,	// (0x0005c0a7) status_small_pane_g_ParamLimits

0xf757,	// (0x0005c0a7) status_small_pane_g

0x944d,	// (0x00055d9d) status_small_pane_t1

0x946f,	// (0x00055dbf) status_small_wait_pane_ParamLimits

0x946f,	// (0x00055dbf) status_small_wait_pane

0x8c37,	// (0x00055587) aid_levels_signal_ParamLimits

0x8c37,	// (0x00055587) aid_levels_signal

0x8c49,	// (0x00055599) signal_pane_g1_ParamLimits

0x8c49,	// (0x00055599) signal_pane_g1

0x8c5e,	// (0x000555ae) signal_pane_g2_ParamLimits

0x8c5e,	// (0x000555ae) signal_pane_g2

0x0003,

0xf6e8,	// (0x0005c038) signal_pane_g_ParamLimits

0xf6e8,	// (0x0005c038) signal_pane_g

0x8c99,	// (0x000555e9) context_pane_g1

0x775c,	// (0x000540ac) title_pane_g1

0x7792,	// (0x000540e2) title_pane_t1

0x77fa,	// (0x0005414a) title_pane_t2

0x7820,	// (0x00054170) title_pane_t3

0x0002,

0xf532,	// (0x0005be82) title_pane_t

0x9908,	// (0x00056258) aid_levels_battery_ParamLimits

0x9908,	// (0x00056258) aid_levels_battery

0x991c,	// (0x0005626c) battery_pane_g1_ParamLimits

0x991c,	// (0x0005626c) battery_pane_g1

0x9932,	// (0x00056282) battery_pane_g2_ParamLimits

0x9932,	// (0x00056282) battery_pane_g2

0x0001,

0xf78b,	// (0x0005c0db) battery_pane_g_ParamLimits

0xf78b,	// (0x0005c0db) battery_pane_g

0xaba8,	// (0x000574f8) uni_indicator_pane_g1

0xabbe,	// (0x0005750e) uni_indicator_pane_g2

0xabd4,	// (0x00057524) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0005c24c) uni_indicator_pane_g

0x903a,	// (0x0005598a) navi_icon_pane_ParamLimits

0x903a,	// (0x0005598a) navi_icon_pane

0x8f78,	// (0x000558c8) navi_midp_pane

0x9056,	// (0x000559a6) navi_navi_pane

0x9060,	// (0x000559b0) navi_text_pane_ParamLimits

0x9060,	// (0x000559b0) navi_text_pane

0x27e1,	// (0x0004f131) status_small_wait_pane_g1

0x7c75,	// (0x000545c5) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0005c247) status_small_wait_pane_g

0xa8cd,	// (0x0005721d) navi_navi_icon_text_pane

0xa8d5,	// (0x00057225) navi_navi_pane_g1_ParamLimits

0xa8d5,	// (0x00057225) navi_navi_pane_g1

0xa8e7,	// (0x00057237) navi_navi_pane_g2_ParamLimits

0xa8e7,	// (0x00057237) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0005c215) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0005c215) navi_navi_pane_g

0xa8f9,	// (0x00057249) navi_navi_tabs_pane

0xa902,	// (0x00057252) navi_navi_text_pane

0xa8cd,	// (0x0005721d) navi_navi_volume_pane

0xa8a9,	// (0x000571f9) navi_text_pane_t1

0xa89d,	// (0x000571ed) navi_icon_pane_g1

0xa7f0,	// (0x00057140) navi_navi_text_pane_t1

0x604c,	// (0x0005299c) navi_navi_volume_pane_g1

0x6054,	// (0x000529a4) volume_small_pane

0xa756,	// (0x000570a6) navi_navi_icon_text_pane_g1

0xa75e,	// (0x000570ae) navi_navi_icon_text_pane_t1

0x9056,	// (0x000559a6) navi_tabs_2_long_pane

0x9056,	// (0x000559a6) navi_tabs_2_pane

0x9056,	// (0x000559a6) navi_tabs_3_long_pane

0x9056,	// (0x000559a6) navi_tabs_3_pane

0x9056,	// (0x000559a6) navi_tabs_4_pane

0x602c,	// (0x0005297c) tabs_2_active_pane_ParamLimits

0x602c,	// (0x0005297c) tabs_2_active_pane

0x603c,	// (0x0005298c) tabs_2_passive_pane_ParamLimits

0x603c,	// (0x0005298c) tabs_2_passive_pane

0x5ffa,	// (0x0005294a) tabs_3_active_pane_ParamLimits

0x5ffa,	// (0x0005294a) tabs_3_active_pane

0x600a,	// (0x0005295a) tabs_3_passive_pane_ParamLimits

0x600a,	// (0x0005295a) tabs_3_passive_pane

0x601b,	// (0x0005296b) tabs_3_passive_pane_cp_ParamLimits

0x601b,	// (0x0005296b) tabs_3_passive_pane_cp

0x5fb6,	// (0x00052906) tabs_4_active_pane_ParamLimits

0x5fb6,	// (0x00052906) tabs_4_active_pane

0x5fc7,	// (0x00052917) tabs_4_passive_pane_ParamLimits

0x5fc7,	// (0x00052917) tabs_4_passive_pane

0x5fd8,	// (0x00052928) tabs_4_passive_pane_cp_ParamLimits

0x5fd8,	// (0x00052928) tabs_4_passive_pane_cp

0x5fe9,	// (0x00052939) tabs_4_passive_pane_cp2_ParamLimits

0x5fe9,	// (0x00052939) tabs_4_passive_pane_cp2

0x5f92,	// (0x000528e2) tabs_2_long_active_pane_ParamLimits

0x5f92,	// (0x000528e2) tabs_2_long_active_pane

0x5fa4,	// (0x000528f4) tabs_2_long_passive_pane_ParamLimits

0x5fa4,	// (0x000528f4) tabs_2_long_passive_pane

0x5f53,	// (0x000528a3) tabs_3_long_active_pane_ParamLimits

0x5f53,	// (0x000528a3) tabs_3_long_active_pane

0x5f66,	// (0x000528b6) tabs_3_long_passive_pane_ParamLimits

0x5f66,	// (0x000528b6) tabs_3_long_passive_pane

0x5f7f,	// (0x000528cf) tabs_3_long_passive_pane_cp_ParamLimits

0x5f7f,	// (0x000528cf) tabs_3_long_passive_pane_cp

0x5ef9,	// (0x00052849) volume_small_pane_g1

0x5f02,	// (0x00052852) volume_small_pane_g2

0x5f0b,	// (0x0005285b) volume_small_pane_g3

0x5f14,	// (0x00052864) volume_small_pane_g4

0x5f1d,	// (0x0005286d) volume_small_pane_g5

0x5f26,	// (0x00052876) volume_small_pane_g6

0x5f2f,	// (0x0005287f) volume_small_pane_g7

0x5f38,	// (0x00052888) volume_small_pane_g8

0x5f41,	// (0x00052891) volume_small_pane_g9

0x5f4a,	// (0x0005289a) volume_small_pane_g10

0x0009,

0xf891,	// (0x0005c1e1) volume_small_pane_g

0x7832,	// (0x00054182) bg_active_tab_pane_cp2_ParamLimits

0x7832,	// (0x00054182) bg_active_tab_pane_cp2

0x7840,	// (0x00054190) tabs_3_active_pane_g1

0x7848,	// (0x00054198) tabs_3_active_pane_t1

0x7832,	// (0x00054182) bg_passive_tab_pane_cp2_ParamLimits

0x7832,	// (0x00054182) bg_passive_tab_pane_cp2

0x7840,	// (0x00054190) tabs_3_passive_pane_g1

0x7848,	// (0x00054198) tabs_3_passive_pane_t1

0x7832,	// (0x00054182) bg_active_tab_pane_cp3_ParamLimits

0x7832,	// (0x00054182) bg_active_tab_pane_cp3

0x785a,	// (0x000541aa) tabs_4_active_pane_g1

0x7862,	// (0x000541b2) tabs_4_active_pane_t1

0x7832,	// (0x00054182) bg_passive_tab_pane_cp3_ParamLimits

0x7832,	// (0x00054182) bg_passive_tab_pane_cp3

0x785a,	// (0x000541aa) tabs_4_1_passive_pane_g1

0x7862,	// (0x000541b2) tabs_4_1_passive_pane_t1

0x94e0,	// (0x00055e30) list_highlight_pane_cp2

0xae1b,	// (0x0005776b) list_set_pane_ParamLimits

0xae1b,	// (0x0005776b) list_set_pane

0xaec1,	// (0x00057811) main_pane_set_t1_ParamLimits

0xaec1,	// (0x00057811) main_pane_set_t1

0xaee1,	// (0x00057831) main_pane_set_t2_ParamLimits

0xaee1,	// (0x00057831) main_pane_set_t2

0xaef5,	// (0x00057845) main_pane_set_t3_ParamLimits

0xaef5,	// (0x00057845) main_pane_set_t3

0xaf07,	// (0x00057857) main_pane_set_t4_ParamLimits

0xaf07,	// (0x00057857) main_pane_set_t4

0x0003,

0xf961,	// (0x0005c2b1) main_pane_set_t_ParamLimits

0xf961,	// (0x0005c2b1) main_pane_set_t

0xaf19,	// (0x00057869) setting_code_pane

0xaf25,	// (0x00057875) setting_slider_graphic_pane

0xaf25,	// (0x00057875) setting_slider_pane

0xaf25,	// (0x00057875) setting_text_pane

0xaf25,	// (0x00057875) setting_volume_pane

0x49e6,	// (0x00051336) volume_set_pane

0x7832,	// (0x00054182) bg_set_opt_pane_cp

0x49ee,	// (0x0005133e) setting_slider_pane_t1

0x4a07,	// (0x00051357) setting_slider_pane_t2

0x4a21,	// (0x00051371) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0005be89) setting_slider_pane_t

0x4a39,	// (0x00051389) slider_set_pane

0x7752,	// (0x000540a2) bg_set_opt_pane_cp2

0x7874,	// (0x000541c4) setting_slider_graphic_pane_g1

0x4a4f,	// (0x0005139f) setting_slider_graphic_pane_t1

0x4a5f,	// (0x000513af) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0005be90) setting_slider_graphic_pane_t

0x4a6f,	// (0x000513bf) slider_set_pane_cp

0x7752,	// (0x000540a2) input_focus_pane_cp1

0xadda,	// (0x0005772a) list_set_text_pane

0x27e1,	// (0x0004f131) setting_text_pane_g1

0x7752,	// (0x000540a2) input_focus_pane_cp2

0x27e1,	// (0x0004f131) setting_code_pane_g1

0x787d,	// (0x000541cd) setting_code_pane_t1

0x3aad,	// (0x000503fd) set_text_pane_t1_ParamLimits

0x3aad,	// (0x000503fd) set_text_pane_t1

0x8575,	// (0x00054ec5) set_opt_bg_pane_g1

0x857d,	// (0x00054ecd) set_opt_bg_pane_g2

0xadb4,	// (0x00057704) set_opt_bg_pane_g3

0x858d,	// (0x00054edd) set_opt_bg_pane_g4

0x8595,	// (0x00054ee5) set_opt_bg_pane_g5

0x859d,	// (0x00054eed) set_opt_bg_pane_g6

0xadbe,	// (0x0005770e) set_opt_bg_pane_g7

0xadc6,	// (0x00057716) set_opt_bg_pane_g8

0xadd0,	// (0x00057720) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0005c29e) set_opt_bg_pane_g

0xada7,	// (0x000576f7) slider_set_pane_g1

0x60d3,	// (0x00052a23) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0005c28f) slider_set_pane_g

0x605d,	// (0x000529ad) volume_set_pane_g1

0x6065,	// (0x000529b5) volume_set_pane_g2

0x606d,	// (0x000529bd) volume_set_pane_g3

0x6075,	// (0x000529c5) volume_set_pane_g4

0x607d,	// (0x000529cd) volume_set_pane_g5

0x6085,	// (0x000529d5) volume_set_pane_g6

0x608d,	// (0x000529dd) volume_set_pane_g7

0x6095,	// (0x000529e5) volume_set_pane_g8

0x609d,	// (0x000529ed) volume_set_pane_g9

0x60a5,	// (0x000529f5) volume_set_pane_g10

0x0009,

0xf917,	// (0x0005c267) volume_set_pane_g

0x788b,	// (0x000541db) indicator_pane_ParamLimits

0x788b,	// (0x000541db) indicator_pane

0x7897,	// (0x000541e7) main_idle_pane_g2_ParamLimits

0x7897,	// (0x000541e7) main_idle_pane_g2

0x78bf,	// (0x0005420f) main_pane_idle_g1_ParamLimits

0x78bf,	// (0x0005420f) main_pane_idle_g1

0x78cc,	// (0x0005421c) popup_clock_digital_analogue_window_ParamLimits

0x78cc,	// (0x0005421c) popup_clock_digital_analogue_window

0x78e3,	// (0x00054233) soft_indicator_pane_ParamLimits

0x78e3,	// (0x00054233) soft_indicator_pane

0x78ef,	// (0x0005423f) wallpaper_pane_ParamLimits

0x78ef,	// (0x0005423f) wallpaper_pane

0x27e1,	// (0x0004f131) wallpaper_pane_g1

0x7903,	// (0x00054253) indicator_pane_g1_ParamLimits

0x7903,	// (0x00054253) indicator_pane_g1

0xb1d3,	// (0x00057b23) navi_navi_icon_text_pane_srt_g1

0x791e,	// (0x0005426e) soft_indicator_pane_t1

0x7938,	// (0x00054288) aid_ps_area_pane

0x7949,	// (0x00054299) aid_ps_clock_pane

0x7957,	// (0x000542a7) aid_ps_indicator_pane

0x7963,	// (0x000542b3) indicator_ps_pane_ParamLimits

0x7963,	// (0x000542b3) indicator_ps_pane

0x7972,	// (0x000542c2) power_save_pane_g1_ParamLimits

0x7972,	// (0x000542c2) power_save_pane_g1

0x797e,	// (0x000542ce) power_save_pane_g2_ParamLimits

0x797e,	// (0x000542ce) power_save_pane_g2

0x45ed,	// (0x00050f3d) aid_navinavi_width_pane

0x7938,	// (0x00054288) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005be95) power_save_pane_g_ParamLimits

0xf545,	// (0x0005be95) power_save_pane_g

0x798c,	// (0x000542dc) power_save_pane_t1_ParamLimits

0x798c,	// (0x000542dc) power_save_pane_t1

0x7949,	// (0x00054299) aid_ps_clock_pane_ParamLimits

0x7957,	// (0x000542a7) aid_ps_indicator_pane_ParamLimits

0x799e,	// (0x000542ee) power_save_pane_t4_ParamLimits

0x799e,	// (0x000542ee) power_save_pane_t4

0x0001,

0xf54a,	// (0x0005be9a) power_save_pane_t_ParamLimits

0xf54a,	// (0x0005be9a) power_save_pane_t

0x79c8,	// (0x00054318) power_save_t3_ParamLimits

0x79c8,	// (0x00054318) power_save_t3

0x79b3,	// (0x00054303) power_save_t2_ParamLimits

0x79b3,	// (0x00054303) power_save_t2

0x79dd,	// (0x0005432d) indicator_ps_pane_g1

0x79e6,	// (0x00054336) ai_gene_pane_ParamLimits

0x79e6,	// (0x00054336) ai_gene_pane

0x79f2,	// (0x00054342) ai_links_pane_ParamLimits

0x79f2,	// (0x00054342) ai_links_pane

0x79fe,	// (0x0005434e) indicator_pane_cp1_ParamLimits

0x79fe,	// (0x0005434e) indicator_pane_cp1

0x7a0a,	// (0x0005435a) main_pane_idle_g1_cp_ParamLimits

0x7a0a,	// (0x0005435a) main_pane_idle_g1_cp

0x7a16,	// (0x00054366) popup_ai_links_title_window

0x7a1f,	// (0x0005436f) soft_indicator_pane_cp1_ParamLimits

0x7a1f,	// (0x0005436f) soft_indicator_pane_cp1

0xab96,	// (0x000574e6) ai_links_pane_g1

0xab9f,	// (0x000574ef) grid_ai_links_pane

0xab79,	// (0x000574c9) ai_gene_pane_1

0xab84,	// (0x000574d4) ai_gene_pane_2

0xab8d,	// (0x000574dd) list_highlight_pane_cp4

0xab5d,	// (0x000574ad) cell_ai_link_pane_ParamLimits

0xab5d,	// (0x000574ad) cell_ai_link_pane

0xab55,	// (0x000574a5) cell_ai_link_pane_g1

0x7c75,	// (0x000545c5) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0005c242) cell_ai_link_pane_g

0x7752,	// (0x000540a2) grid_highlight_cp2

0x7752,	// (0x000540a2) bg_popup_sub_pane_cp1

0x7a39,	// (0x00054389) popup_ai_links_title_window_t1

0xaaa3,	// (0x000573f3) ai_gene_pane_1_g1_ParamLimits

0xaaa3,	// (0x000573f3) ai_gene_pane_1_g1

0xaaaf,	// (0x000573ff) ai_gene_pane_1_g2_ParamLimits

0xaaaf,	// (0x000573ff) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0005c238) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0005c238) ai_gene_pane_1_g

0xaabc,	// (0x0005740c) ai_gene_pane_1_t1_ParamLimits

0xaabc,	// (0x0005740c) ai_gene_pane_1_t1

0xaaf0,	// (0x00057440) grid_ai_soft_ind_pane

0xaa8e,	// (0x000573de) ai_gene_pane_2_t1_ParamLimits

0xaa8e,	// (0x000573de) ai_gene_pane_2_t1

0x7a48,	// (0x00054398) main_pane_empty_t1_ParamLimits

0x7a48,	// (0x00054398) main_pane_empty_t1

0x7a60,	// (0x000543b0) main_pane_empty_t2_ParamLimits

0x7a60,	// (0x000543b0) main_pane_empty_t2

0x7a75,	// (0x000543c5) main_pane_empty_t3_ParamLimits

0x7a75,	// (0x000543c5) main_pane_empty_t3

0x7a87,	// (0x000543d7) main_pane_empty_t4_ParamLimits

0x7a87,	// (0x000543d7) main_pane_empty_t4

0x7a99,	// (0x000543e9) main_pane_empty_t5_ParamLimits

0x7a99,	// (0x000543e9) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0005be9f) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0005be9f) main_pane_empty_t

0x863c,	// (0x00054f8c) bg_popup_window_pane_ParamLimits

0x863c,	// (0x00054f8c) bg_popup_window_pane

0xa7fe,	// (0x0005714e) find_popup_pane_cp2_ParamLimits

0xa7fe,	// (0x0005714e) find_popup_pane_cp2

0xa80a,	// (0x0005715a) heading_pane_ParamLimits

0xa80a,	// (0x0005715a) heading_pane

0x7752,	// (0x000540a2) bg_popup_sub_pane

0xa778,	// (0x000570c8) bg_popup_window_pane_g1_ParamLimits

0xa778,	// (0x000570c8) bg_popup_window_pane_g1

0xa784,	// (0x000570d4) bg_popup_window_pane_g2_ParamLimits

0xa784,	// (0x000570d4) bg_popup_window_pane_g2

0xa790,	// (0x000570e0) bg_popup_window_pane_g3_ParamLimits

0xa790,	// (0x000570e0) bg_popup_window_pane_g3

0xa79c,	// (0x000570ec) bg_popup_window_pane_g4_ParamLimits

0xa79c,	// (0x000570ec) bg_popup_window_pane_g4

0xa7a8,	// (0x000570f8) bg_popup_window_pane_g5_ParamLimits

0xa7a8,	// (0x000570f8) bg_popup_window_pane_g5

0xa7b4,	// (0x00057104) bg_popup_window_pane_g6_ParamLimits

0xa7b4,	// (0x00057104) bg_popup_window_pane_g6

0xa7c0,	// (0x00057110) bg_popup_window_pane_g7_ParamLimits

0xa7c0,	// (0x00057110) bg_popup_window_pane_g7

0xa7cc,	// (0x0005711c) bg_popup_window_pane_g8_ParamLimits

0xa7cc,	// (0x0005711c) bg_popup_window_pane_g8

0xa7d8,	// (0x00057128) bg_popup_window_pane_g9_ParamLimits

0xa7d8,	// (0x00057128) bg_popup_window_pane_g9

0xa7e4,	// (0x00057134) bg_popup_window_pane_g10_ParamLimits

0xa7e4,	// (0x00057134) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0005c200) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0005c200) bg_popup_window_pane_g

0xa70d,	// (0x0005705d) bg_popup_heading_pane_ParamLimits

0xa70d,	// (0x0005705d) bg_popup_heading_pane

0x61d8,	// (0x00052b28) tabs_4_passive_pane_cp_srt_ParamLimits

0x61d8,	// (0x00052b28) tabs_4_passive_pane_cp_srt

0x61ea,	// (0x00052b3a) tabs_4_passive_pane_srt_ParamLimits

0xa721,	// (0x00057071) heading_pane_g2

0x61ea,	// (0x00052b3a) tabs_4_passive_pane_srt

0x94e0,	// (0x00055e30) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94e0,	// (0x00055e30) bg_passive_tab_pane_cp3_srt

0xa729,	// (0x00057079) heading_pane_t1_ParamLimits

0xa729,	// (0x00057079) heading_pane_t1

0xa740,	// (0x00057090) heading_pane_t2_ParamLimits

0xa740,	// (0x00057090) heading_pane_t2

0x0001,

0xf8ab,	// (0x0005c1fb) heading_pane_t_ParamLimits

0xf8ab,	// (0x0005c1fb) heading_pane_t

0xa23a,	// (0x00056b8a) bg_popup_heading_pane_g1

0xa2e9,	// (0x00056c39) bg_popup_heading_pane_g2

0xa2f3,	// (0x00056c43) bg_popup_heading_pane_g3

0xa2fd,	// (0x00056c4d) bg_popup_heading_pane_g4

0xa307,	// (0x00056c57) bg_popup_heading_pane_g5

0xa311,	// (0x00056c61) bg_popup_heading_pane_g6

0xa319,	// (0x00056c69) bg_popup_heading_pane_g7

0xa321,	// (0x00056c71) bg_popup_heading_pane_g8

0xa32b,	// (0x00056c7b) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0005c1b7) bg_popup_heading_pane_g

0x9a0a,	// (0x0005635a) bg_popup_sub_pane_g1

0x9a1a,	// (0x0005636a) bg_popup_sub_pane_g2

0x9a12,	// (0x00056362) bg_popup_sub_pane_g3

0x9a2a,	// (0x0005637a) bg_popup_sub_pane_g4

0x9a22,	// (0x00056372) bg_popup_sub_pane_g5

0x9a32,	// (0x00056382) bg_popup_sub_pane_g6

0x9a3a,	// (0x0005638a) bg_popup_sub_pane_g7

0x9a4a,	// (0x0005639a) bg_popup_sub_pane_g8

0x9a42,	// (0x00056392) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0005c191) bg_popup_sub_pane_g

0x7aad,	// (0x000543fd) bg_popup_window_pane_cp5_ParamLimits

0x7aad,	// (0x000543fd) bg_popup_window_pane_cp5

0x7ac9,	// (0x00054419) popup_note_window_g1_ParamLimits

0x7ac9,	// (0x00054419) popup_note_window_g1

0x7ad5,	// (0x00054425) popup_note_window_t1_ParamLimits

0x7ad5,	// (0x00054425) popup_note_window_t1

0x7aeb,	// (0x0005443b) popup_note_window_t2_ParamLimits

0x7aeb,	// (0x0005443b) popup_note_window_t2

0x7b01,	// (0x00054451) popup_note_window_t3_ParamLimits

0x7b01,	// (0x00054451) popup_note_window_t3

0x7b17,	// (0x00054467) popup_note_window_t4_ParamLimits

0x7b17,	// (0x00054467) popup_note_window_t4

0x7b3f,	// (0x0005448f) popup_note_window_t5_ParamLimits

0x7b3f,	// (0x0005448f) popup_note_window_t5

0x0004,

0xf55a,	// (0x0005beaa) popup_note_window_t_ParamLimits

0xf55a,	// (0x0005beaa) popup_note_window_t

0x7b89,	// (0x000544d9) bg_popup_window_pane_cp6_ParamLimits

0x7b89,	// (0x000544d9) bg_popup_window_pane_cp6

0xa1b6,	// (0x00056b06) popup_note_image_window_g1_ParamLimits

0xa1b6,	// (0x00056b06) popup_note_image_window_g1

0xa1c2,	// (0x00056b12) popup_note_image_window_g2_ParamLimits

0xa1c2,	// (0x00056b12) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0005c185) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0005c185) popup_note_image_window_g

0xa1db,	// (0x00056b2b) popup_note_image_window_t1_ParamLimits

0xa1db,	// (0x00056b2b) popup_note_image_window_t1

0xa1f4,	// (0x00056b44) popup_note_image_window_t2_ParamLimits

0xa1f4,	// (0x00056b44) popup_note_image_window_t2

0xa20d,	// (0x00056b5d) popup_note_image_window_t3_ParamLimits

0xa20d,	// (0x00056b5d) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0005c18a) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0005c18a) popup_note_image_window_t

0xa077,	// (0x000569c7) bg_popup_window_pane_cp7_ParamLimits

0xa077,	// (0x000569c7) bg_popup_window_pane_cp7

0xa0a7,	// (0x000569f7) popup_note_wait_window_g1_ParamLimits

0xa0a7,	// (0x000569f7) popup_note_wait_window_g1

0xa0b3,	// (0x00056a03) popup_note_wait_window_g2_ParamLimits

0xa0b3,	// (0x00056a03) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0005c173) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0005c173) popup_note_wait_window_g

0xa0cb,	// (0x00056a1b) popup_note_wait_window_t1_ParamLimits

0xa0cb,	// (0x00056a1b) popup_note_wait_window_t1

0xa0f2,	// (0x00056a42) popup_note_wait_window_t2_ParamLimits

0xa0f2,	// (0x00056a42) popup_note_wait_window_t2

0xa10f,	// (0x00056a5f) popup_note_wait_window_t3_ParamLimits

0xa10f,	// (0x00056a5f) popup_note_wait_window_t3

0xa122,	// (0x00056a72) popup_note_wait_window_t4_ParamLimits

0xa122,	// (0x00056a72) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0005c17a) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0005c17a) popup_note_wait_window_t

0xa147,	// (0x00056a97) wait_bar_pane_ParamLimits

0xa147,	// (0x00056a97) wait_bar_pane

0x7752,	// (0x000540a2) wait_anim_pane

0x7752,	// (0x000540a2) wait_border_pane

0x27e1,	// (0x0004f131) wait_anim_pane_g1

0x27e1,	// (0x0004f131) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0005c033) wait_anim_pane_g

0xa01b,	// (0x0005696b) wait_border_pane_g1

0xa026,	// (0x00056976) wait_border_pane_g2

0xa02f,	// (0x0005697f) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0005c16c) wait_border_pane_g

0x9e86,	// (0x000567d6) bg_popup_window_pane_cp16_ParamLimits

0x9e86,	// (0x000567d6) bg_popup_window_pane_cp16

0x9f86,	// (0x000568d6) indicator_popup_pane_cp4_ParamLimits

0x9f86,	// (0x000568d6) indicator_popup_pane_cp4

0x9f9a,	// (0x000568ea) popup_query_data_window_t1_ParamLimits

0x9f9a,	// (0x000568ea) popup_query_data_window_t1

0x9fac,	// (0x000568fc) popup_query_data_window_t2_ParamLimits

0x9fac,	// (0x000568fc) popup_query_data_window_t2

0x9fc5,	// (0x00056915) popup_query_data_window_t3_ParamLimits

0x9fc5,	// (0x00056915) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0005c165) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0005c165) popup_query_data_window_t

0x9fdf,	// (0x0005692f) query_popup_data_pane_ParamLimits

0x9fdf,	// (0x0005692f) query_popup_data_pane

0x9ff3,	// (0x00056943) query_popup_data_pane_cp1_ParamLimits

0x9ff3,	// (0x00056943) query_popup_data_pane_cp1

0x9e86,	// (0x000567d6) bg_popup_window_pane_cp10_ParamLimits

0x9e86,	// (0x000567d6) bg_popup_window_pane_cp10

0x9eb8,	// (0x00056808) indicator_popup_pane_ParamLimits

0x9eb8,	// (0x00056808) indicator_popup_pane

0x9eda,	// (0x0005682a) popup_query_code_window_t1_ParamLimits

0x9eda,	// (0x0005682a) popup_query_code_window_t1

0x9ef4,	// (0x00056844) popup_query_code_window_t2_ParamLimits

0x9ef4,	// (0x00056844) popup_query_code_window_t2

0x9f3d,	// (0x0005688d) popup_query_code_window_t3_ParamLimits

0x9f3d,	// (0x0005688d) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0005c15e) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0005c15e) popup_query_code_window_t

0x9f6c,	// (0x000568bc) query_popup_pane_ParamLimits

0x9f6c,	// (0x000568bc) query_popup_pane

0x7b89,	// (0x000544d9) bg_popup_window_pane_cp15_ParamLimits

0x7b89,	// (0x000544d9) bg_popup_window_pane_cp15

0x7ba7,	// (0x000544f7) indicator_popup_pane_cp1_ParamLimits

0x7ba7,	// (0x000544f7) indicator_popup_pane_cp1

0x7bba,	// (0x0005450a) indicator_popup_pane_cp2_ParamLimits

0x7bba,	// (0x0005450a) indicator_popup_pane_cp2

0x7bcd,	// (0x0005451d) popup_query_data_code_window_g1_ParamLimits

0x7bcd,	// (0x0005451d) popup_query_data_code_window_g1

0x7be0,	// (0x00054530) popup_query_data_code_window_t1_ParamLimits

0x7be0,	// (0x00054530) popup_query_data_code_window_t1

0x7bf2,	// (0x00054542) popup_query_data_code_window_t2_ParamLimits

0x7bf2,	// (0x00054542) popup_query_data_code_window_t2

0x7c04,	// (0x00054554) popup_query_data_code_window_t3_ParamLimits

0x7c04,	// (0x00054554) popup_query_data_code_window_t3

0x7c1a,	// (0x0005456a) popup_query_data_code_window_t4_ParamLimits

0x7c1a,	// (0x0005456a) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005beb5) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005beb5) popup_query_data_code_window_t

0x5d3d,	// (0x0005268d) list_single_midp_graphic_pane_g3

0x7c32,	// (0x00054582) query_popup_data_pane_cp2_ParamLimits

0x7c45,	// (0x00054595) query_popup_pane_cp2_ParamLimits

0x7c45,	// (0x00054595) query_popup_pane_cp2

0x7752,	// (0x000540a2) bg_popup_window_pane_cp11

0x9e6a,	// (0x000567ba) heading_pane_cp5

0x9e72,	// (0x000567c2) listscroll_popup_info_pane

0x7752,	// (0x000540a2) input_focus_pane_cp3

0x7c58,	// (0x000545a8) query_popup_pane_t1

0x7c66,	// (0x000545b6) list_popup_info_pane_ParamLimits

0x7c66,	// (0x000545b6) list_popup_info_pane

0x7c75,	// (0x000545c5) listscroll_popup_info_pane_g1

0x7c7d,	// (0x000545cd) scroll_pane_cp7

0x7c87,	// (0x000545d7) popup_info_list_pane_t1_ParamLimits

0x7c87,	// (0x000545d7) popup_info_list_pane_t1

0x7ca1,	// (0x000545f1) popup_info_list_pane_t2_ParamLimits

0x7ca1,	// (0x000545f1) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0005bebe) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0005bebe) popup_info_list_pane_t

0x7752,	// (0x000540a2) bg_popup_window_pane_cp12

0xb1ed,	// (0x00057b3d) find_popup_pane

0x7832,	// (0x00054182) bg_popup_window_pane_cp3

0x7cbb,	// (0x0005460b) heading_pane_cp3

0x7cca,	// (0x0005461a) listscroll_popup_graphic_pane

0x7752,	// (0x000540a2) bg_popup_window_pane_cp4

0x7d2a,	// (0x0005467a) heading_pane_cp4

0x7d34,	// (0x00054684) listscroll_popup_colour_pane

0x7d3c,	// (0x0005468c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d3c,	// (0x0005468c) cell_large_graphic_colour_none_popup_pane

0x7d50,	// (0x000546a0) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d50,	// (0x000546a0) grid_large_graphic_colour_popup_pane

0x7d74,	// (0x000546c4) listscroll_popup_colour_pane_g1_ParamLimits

0x7d74,	// (0x000546c4) listscroll_popup_colour_pane_g1

0x7d8b,	// (0x000546db) listscroll_popup_colour_pane_g2_ParamLimits

0x7d8b,	// (0x000546db) listscroll_popup_colour_pane_g2

0x7da2,	// (0x000546f2) listscroll_popup_colour_pane_g3_ParamLimits

0x7da2,	// (0x000546f2) listscroll_popup_colour_pane_g3

0x7db2,	// (0x00054702) listscroll_popup_colour_pane_g4_ParamLimits

0x7db2,	// (0x00054702) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005bec3) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005bec3) listscroll_popup_colour_pane_g

0x7dc2,	// (0x00054712) scroll_pane_cp6_ParamLimits

0x7dc2,	// (0x00054712) scroll_pane_cp6

0x7dd4,	// (0x00054724) cell_large_graphic_colour_popup_pane_ParamLimits

0x7dd4,	// (0x00054724) cell_large_graphic_colour_popup_pane

0x7df3,	// (0x00054743) cell_large_graphic_colour_none_popup_pane_t1

0x7752,	// (0x000540a2) grid_highlight_pane_cp5

0x7e02,	// (0x00054752) cell_large_graphic_colour_popup_pane_g1

0x7e0a,	// (0x0005475a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0005becc) cell_large_graphic_colour_popup_pane_g

0x7e12,	// (0x00054762) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e1b,	// (0x0005476b) grid_highlight_pane_cp4

0x7e23,	// (0x00054773) bg_popup_window_pane_cp8_ParamLimits

0x7e23,	// (0x00054773) bg_popup_window_pane_cp8

0x7e3e,	// (0x0005478e) popup_snote_single_text_window_g1_ParamLimits

0x7e3e,	// (0x0005478e) popup_snote_single_text_window_g1

0x7e50,	// (0x000547a0) popup_snote_single_text_window_t1_ParamLimits

0x7e50,	// (0x000547a0) popup_snote_single_text_window_t1

0x7e63,	// (0x000547b3) popup_snote_single_text_window_t2_ParamLimits

0x7e63,	// (0x000547b3) popup_snote_single_text_window_t2

0x7e76,	// (0x000547c6) popup_snote_single_text_window_t3_ParamLimits

0x7e76,	// (0x000547c6) popup_snote_single_text_window_t3

0x7eaf,	// (0x000547ff) popup_snote_single_text_window_t4_ParamLimits

0x7eaf,	// (0x000547ff) popup_snote_single_text_window_t4

0x7ee3,	// (0x00054833) popup_snote_single_text_window_t5_ParamLimits

0x7ee3,	// (0x00054833) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0005bed1) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0005bed1) popup_snote_single_text_window_t

0x7f12,	// (0x00054862) bg_popup_window_pane_cp9_ParamLimits

0x7f12,	// (0x00054862) bg_popup_window_pane_cp9

0x7e3e,	// (0x0005478e) popup_snote_single_graphic_window_g1_ParamLimits

0x7e3e,	// (0x0005478e) popup_snote_single_graphic_window_g1

0x7f20,	// (0x00054870) popup_snote_single_graphic_window_g2_ParamLimits

0x7f20,	// (0x00054870) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0005bedc) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0005bedc) popup_snote_single_graphic_window_g

0x7f2c,	// (0x0005487c) popup_snote_single_graphic_window_t1_ParamLimits

0x7f2c,	// (0x0005487c) popup_snote_single_graphic_window_t1

0x7f3f,	// (0x0005488f) popup_snote_single_graphic_window_t2_ParamLimits

0x7f3f,	// (0x0005488f) popup_snote_single_graphic_window_t2

0x7f52,	// (0x000548a2) popup_snote_single_graphic_window_t3_ParamLimits

0x7f52,	// (0x000548a2) popup_snote_single_graphic_window_t3

0x7f8b,	// (0x000548db) popup_snote_single_graphic_window_t4_ParamLimits

0x7f8b,	// (0x000548db) popup_snote_single_graphic_window_t4

0x7fbf,	// (0x0005490f) popup_snote_single_graphic_window_t5_ParamLimits

0x7fbf,	// (0x0005490f) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0005bee1) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0005bee1) popup_snote_single_graphic_window_t

0xb12f,	// (0x00057a7f) grid_graphic_popup_pane_ParamLimits

0xb12f,	// (0x00057a7f) grid_graphic_popup_pane

0xb159,	// (0x00057aa9) listscroll_popup_graphic_pane_g1_ParamLimits

0xb159,	// (0x00057aa9) listscroll_popup_graphic_pane_g1

0xb16d,	// (0x00057abd) listscroll_popup_graphic_pane_g2_ParamLimits

0xb16d,	// (0x00057abd) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0005c2db) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0005c2db) listscroll_popup_graphic_pane_g

0xb181,	// (0x00057ad1) scroll_pane_cp5

0xb0c0,	// (0x00057a10) cell_graphic_popup_pane_ParamLimits

0xb0c0,	// (0x00057a10) cell_graphic_popup_pane

0xb0a1,	// (0x000579f1) cell_graphic_popup_pane_g1

0xb0a9,	// (0x000579f9) cell_graphic_popup_pane_g2

0x7e12,	// (0x00054762) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0005c2d4) cell_graphic_popup_pane_g

0xb0b2,	// (0x00057a02) cell_graphic_popup_pane_t2

0x7e1b,	// (0x0005476b) grid_highlight_pane_cp3

0x8452,	// (0x00054da2) list_gen_pane_ParamLimits

0x8452,	// (0x00054da2) list_gen_pane

0x8484,	// (0x00054dd4) scroll_pane

0xaff9,	// (0x00057949) bg_list_pane_g1_ParamLimits

0xaff9,	// (0x00057949) bg_list_pane_g1

0xb016,	// (0x00057966) bg_list_pane_g2_ParamLimits

0xb016,	// (0x00057966) bg_list_pane_g2

0xb02b,	// (0x0005797b) bg_list_pane_g3_ParamLimits

0xb02b,	// (0x0005797b) bg_list_pane_g3

0xb03f,	// (0x0005798f) bg_list_pane_g4_ParamLimits

0xb03f,	// (0x0005798f) bg_list_pane_g4

0xb053,	// (0x000579a3) bg_list_pane_g5_ParamLimits

0xb053,	// (0x000579a3) bg_list_pane_g5

0x0004,

0xf979,	// (0x0005c2c9) bg_list_pane_g_ParamLimits

0xf979,	// (0x0005c2c9) bg_list_pane_g

0x80ad,	// (0x000549fd) list_double2_graphic_large_graphic_pane_ParamLimits

0x80ad,	// (0x000549fd) list_double2_graphic_large_graphic_pane

0x80ad,	// (0x000549fd) list_double2_graphic_pane_ParamLimits

0x80ad,	// (0x000549fd) list_double2_graphic_pane

0x80ad,	// (0x000549fd) list_double2_large_graphic_pane_ParamLimits

0x80ad,	// (0x000549fd) list_double2_large_graphic_pane

0x80ad,	// (0x000549fd) list_double2_pane_ParamLimits

0x80ad,	// (0x000549fd) list_double2_pane

0x80ad,	// (0x000549fd) list_double_graphic_heading_pane_ParamLimits

0x80ad,	// (0x000549fd) list_double_graphic_heading_pane

0x80ad,	// (0x000549fd) list_double_graphic_pane_ParamLimits

0x80ad,	// (0x000549fd) list_double_graphic_pane

0x80ad,	// (0x000549fd) list_double_heading_pane_ParamLimits

0x80ad,	// (0x000549fd) list_double_heading_pane

0x80ad,	// (0x000549fd) list_double_large_graphic_pane_ParamLimits

0x80ad,	// (0x000549fd) list_double_large_graphic_pane

0x80ad,	// (0x000549fd) list_double_number_pane_ParamLimits

0x80ad,	// (0x000549fd) list_double_number_pane

0x80ad,	// (0x000549fd) list_double_pane_ParamLimits

0x80ad,	// (0x000549fd) list_double_pane

0x80ad,	// (0x000549fd) list_double_time_pane_ParamLimits

0x80ad,	// (0x000549fd) list_double_time_pane

0x80ad,	// (0x000549fd) list_setting_number_pane_ParamLimits

0x80ad,	// (0x000549fd) list_setting_number_pane

0x80ad,	// (0x000549fd) list_setting_pane_ParamLimits

0x80ad,	// (0x000549fd) list_setting_pane

0x80e6,	// (0x00054a36) list_single_2graphic_pane_ParamLimits

0x80e6,	// (0x00054a36) list_single_2graphic_pane

0x80e6,	// (0x00054a36) list_single_graphic_heading_pane_ParamLimits

0x80e6,	// (0x00054a36) list_single_graphic_heading_pane

0x80e6,	// (0x00054a36) list_single_graphic_pane_ParamLimits

0x80e6,	// (0x00054a36) list_single_graphic_pane

0x80e6,	// (0x00054a36) list_single_heading_pane_ParamLimits

0x80e6,	// (0x00054a36) list_single_heading_pane

0x6195,	// (0x00052ae5) list_single_large_graphic_pane_ParamLimits

0x6195,	// (0x00052ae5) list_single_large_graphic_pane

0x80e6,	// (0x00054a36) list_single_number_heading_pane_ParamLimits

0x80e6,	// (0x00054a36) list_single_number_heading_pane

0x80e6,	// (0x00054a36) list_single_number_pane_ParamLimits

0x80e6,	// (0x00054a36) list_single_number_pane

0x80e6,	// (0x00054a36) list_single_pane_ParamLimits

0x80e6,	// (0x00054a36) list_single_pane

0x7752,	// (0x000540a2) list_highlight_pane_cp1

0x84b8,	// (0x00054e08) list_single_pane_g1_ParamLimits

0x84b8,	// (0x00054e08) list_single_pane_g1

0x7fee,	// (0x0005493e) list_single_pane_g2_ParamLimits

0x7fee,	// (0x0005493e) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0005befd) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0005befd) list_single_pane_g

0x6167,	// (0x00052ab7) list_single_pane_t1_ParamLimits

0x6167,	// (0x00052ab7) list_single_pane_t1

0x84b8,	// (0x00054e08) list_single_number_pane_g1_ParamLimits

0x84b8,	// (0x00054e08) list_single_number_pane_g1

0x7fee,	// (0x0005493e) list_single_number_pane_g2_ParamLimits

0x7fee,	// (0x0005493e) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0005befd) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0005befd) list_single_number_pane_g

0x5d02,	// (0x00052652) list_single_number_pane_t1_ParamLimits

0x5d02,	// (0x00052652) list_single_number_pane_t1

0x60ad,	// (0x000529fd) list_single_number_pane_t2_ParamLimits

0x60ad,	// (0x000529fd) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0005c28a) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0005c28a) list_single_number_pane_t

0x3ac6,	// (0x00050416) list_single_graphic_pane_g1_ParamLimits

0x3ac6,	// (0x00050416) list_single_graphic_pane_g1

0x84b8,	// (0x00054e08) list_single_graphic_pane_g2_ParamLimits

0x84b8,	// (0x00054e08) list_single_graphic_pane_g2

0x7fee,	// (0x0005493e) list_single_graphic_pane_g3_ParamLimits

0x7fee,	// (0x0005493e) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0005beec) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0005beec) list_single_graphic_pane_g

0x3ad2,	// (0x00050422) list_single_graphic_pane_t1_ParamLimits

0x3ad2,	// (0x00050422) list_single_graphic_pane_t1

0x3ae8,	// (0x00050438) list_single_heading_pane_g1_ParamLimits

0x3ae8,	// (0x00050438) list_single_heading_pane_g1

0x7fee,	// (0x0005493e) list_single_heading_pane_g2_ParamLimits

0x7fee,	// (0x0005493e) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0005bef3) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0005bef3) list_single_heading_pane_g

0x3afb,	// (0x0005044b) list_single_heading_pane_t1_ParamLimits

0x3afb,	// (0x0005044b) list_single_heading_pane_t1

0x7ffa,	// (0x0005494a) list_single_heading_pane_t2_ParamLimits

0x7ffa,	// (0x0005494a) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0005bef8) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0005bef8) list_single_heading_pane_t

0x84b8,	// (0x00054e08) list_single_number_heading_pane_g1_ParamLimits

0x84b8,	// (0x00054e08) list_single_number_heading_pane_g1

0x7fee,	// (0x0005493e) list_single_number_heading_pane_g2_ParamLimits

0x7fee,	// (0x0005493e) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0005befd) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0005befd) list_single_number_heading_pane_g

0x3b11,	// (0x00050461) list_single_number_heading_pane_t1_ParamLimits

0x3b11,	// (0x00050461) list_single_number_heading_pane_t1

0x3b27,	// (0x00050477) list_single_number_heading_pane_t2_ParamLimits

0x3b27,	// (0x00050477) list_single_number_heading_pane_t2

0x3b39,	// (0x00050489) list_single_number_heading_pane_t3_ParamLimits

0x3b39,	// (0x00050489) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0005bf02) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0005bf02) list_single_number_heading_pane_t

0x3b4b,	// (0x0005049b) list_single_graphic_heading_pane_g1_ParamLimits

0x3b4b,	// (0x0005049b) list_single_graphic_heading_pane_g1

0x800c,	// (0x0005495c) list_single_graphic_heading_pane_g4_ParamLimits

0x800c,	// (0x0005495c) list_single_graphic_heading_pane_g4

0x7fee,	// (0x0005493e) list_single_graphic_heading_pane_g5_ParamLimits

0x7fee,	// (0x0005493e) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0005bf09) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0005bf09) list_single_graphic_heading_pane_g

0x3b11,	// (0x00050461) list_single_graphic_heading_pane_t1_ParamLimits

0x3b11,	// (0x00050461) list_single_graphic_heading_pane_t1

0x3b63,	// (0x000504b3) list_single_graphic_heading_pane_t2_ParamLimits

0x3b63,	// (0x000504b3) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0005bf10) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0005bf10) list_single_graphic_heading_pane_t

0x4a77,	// (0x000513c7) list_single_large_graphic_pane_g1_ParamLimits

0x4a77,	// (0x000513c7) list_single_large_graphic_pane_g1

0x4a83,	// (0x000513d3) list_single_large_graphic_pane_g2_ParamLimits

0x4a83,	// (0x000513d3) list_single_large_graphic_pane_g2

0x4a8f,	// (0x000513df) list_single_large_graphic_pane_g3_ParamLimits

0x4a8f,	// (0x000513df) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0005bf15) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0005bf15) list_single_large_graphic_pane_g

0xa026,	// (0x00056976) wait_border_pane_g2_copy1

0x4a9b,	// (0x000513eb) list_single_large_graphic_pane_g4_cp2

0x4aa3,	// (0x000513f3) list_single_large_graphic_pane_t1_ParamLimits

0x4aa3,	// (0x000513f3) list_single_large_graphic_pane_t1

0x801d,	// (0x0005496d) list_double_pane_g1_ParamLimits

0x801d,	// (0x0005496d) list_double_pane_g1

0x8029,	// (0x00054979) list_double_pane_g2_ParamLimits

0x8029,	// (0x00054979) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0005bf1c) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0005bf1c) list_double_pane_g

0x4ab9,	// (0x00051409) list_double_pane_t1_ParamLimits

0x4ab9,	// (0x00051409) list_double_pane_t1

0x4acf,	// (0x0005141f) list_double_pane_t2_ParamLimits

0x4acf,	// (0x0005141f) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005bf21) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005bf21) list_double_pane_t

0x4ae1,	// (0x00051431) list_double2_pane_g1_ParamLimits

0x4ae1,	// (0x00051431) list_double2_pane_g1

0x3b79,	// (0x000504c9) list_double2_pane_g2_ParamLimits

0x3b79,	// (0x000504c9) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0005bf26) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0005bf26) list_double2_pane_g

0x4af2,	// (0x00051442) list_double2_pane_t1_ParamLimits

0x4af2,	// (0x00051442) list_double2_pane_t1

0x4b08,	// (0x00051458) list_double2_pane_t2_ParamLimits

0x4b08,	// (0x00051458) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0005bf2b) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0005bf2b) list_double2_pane_t

0x801d,	// (0x0005496d) list_double_number_pane_g1_ParamLimits

0x801d,	// (0x0005496d) list_double_number_pane_g1

0x8029,	// (0x00054979) list_double_number_pane_g2_ParamLimits

0x8029,	// (0x00054979) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0005bf1c) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0005bf1c) list_double_number_pane_g

0x4b1a,	// (0x0005146a) list_double_number_pane_t1_ParamLimits

0x4b1a,	// (0x0005146a) list_double_number_pane_t1

0x4b2c,	// (0x0005147c) list_double_number_pane_t2_ParamLimits

0x4b2c,	// (0x0005147c) list_double_number_pane_t2

0x4b42,	// (0x00051492) list_double_number_pane_t3_ParamLimits

0x4b42,	// (0x00051492) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0005bf30) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0005bf30) list_double_number_pane_t

0x4b54,	// (0x000514a4) list_double_graphic_pane_g1_ParamLimits

0x4b54,	// (0x000514a4) list_double_graphic_pane_g1

0x8035,	// (0x00054985) list_double_graphic_pane_g2_ParamLimits

0x8035,	// (0x00054985) list_double_graphic_pane_g2

0x8044,	// (0x00054994) list_double_graphic_pane_g3_ParamLimits

0x8044,	// (0x00054994) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0005bf37) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0005bf37) list_double_graphic_pane_g

0x4b6c,	// (0x000514bc) list_double_graphic_pane_t1_ParamLimits

0x4b6c,	// (0x000514bc) list_double_graphic_pane_t1

0x4b82,	// (0x000514d2) list_double_graphic_pane_t2_ParamLimits

0x4b82,	// (0x000514d2) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0005bf40) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0005bf40) list_double_graphic_pane_t

0x3b9b,	// (0x000504eb) list_double2_graphic_pane_g1_ParamLimits

0x3b9b,	// (0x000504eb) list_double2_graphic_pane_g1

0x84c4,	// (0x00054e14) list_double2_graphic_pane_g2_ParamLimits

0x84c4,	// (0x00054e14) list_double2_graphic_pane_g2

0x8050,	// (0x000549a0) list_double2_graphic_pane_g3_ParamLimits

0x8050,	// (0x000549a0) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0005bf45) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0005bf45) list_double2_graphic_pane_g

0x3b85,	// (0x000504d5) list_double2_graphic_pane_t1_ParamLimits

0x3b85,	// (0x000504d5) list_double2_graphic_pane_t1

0x4b94,	// (0x000514e4) list_double2_graphic_pane_t2_ParamLimits

0x4b94,	// (0x000514e4) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0005bf4c) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0005bf4c) list_double2_graphic_pane_t

0x4ba6,	// (0x000514f6) list_double_large_graphic_pane_g1_ParamLimits

0x4ba6,	// (0x000514f6) list_double_large_graphic_pane_g1

0x4bb9,	// (0x00051509) list_double_large_graphic_pane_g2_ParamLimits

0x4bb9,	// (0x00051509) list_double_large_graphic_pane_g2

0x8029,	// (0x00054979) list_double_large_graphic_pane_g3_ParamLimits

0x8029,	// (0x00054979) list_double_large_graphic_pane_g3

0x4bcf,	// (0x0005151f) list_double_large_graphic_pane_g4_ParamLimits

0x4bcf,	// (0x0005151f) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0005bf51) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0005bf51) list_double_large_graphic_pane_g

0x4be0,	// (0x00051530) list_double_large_graphic_pane_t1_ParamLimits

0x4be0,	// (0x00051530) list_double_large_graphic_pane_t1

0x4bf9,	// (0x00051549) list_double_large_graphic_pane_t2_ParamLimits

0x4bf9,	// (0x00051549) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0005bf5c) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0005bf5c) list_double_large_graphic_pane_t

0x4c0b,	// (0x0005155b) list_double2_large_graphic_pane_g1_ParamLimits

0x4c0b,	// (0x0005155b) list_double2_large_graphic_pane_g1

0x4c17,	// (0x00051567) list_double2_large_graphic_pane_g2_ParamLimits

0x4c17,	// (0x00051567) list_double2_large_graphic_pane_g2

0x8050,	// (0x000549a0) list_double2_large_graphic_pane_g3_ParamLimits

0x8050,	// (0x000549a0) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0005bf61) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0005bf61) list_double2_large_graphic_pane_g

0x4c28,	// (0x00051578) list_double2_large_graphic_pane_t1_ParamLimits

0x4c28,	// (0x00051578) list_double2_large_graphic_pane_t1

0x4c3e,	// (0x0005158e) list_double2_large_graphic_pane_t2_ParamLimits

0x4c3e,	// (0x0005158e) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0005bf68) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0005bf68) list_double2_large_graphic_pane_t

0x4c50,	// (0x000515a0) list_double_heading_pane_g1_ParamLimits

0x4c50,	// (0x000515a0) list_double_heading_pane_g1

0x4c61,	// (0x000515b1) list_double_heading_pane_g2_ParamLimits

0x4c61,	// (0x000515b1) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0005bf6d) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0005bf6d) list_double_heading_pane_g

0x4c6d,	// (0x000515bd) list_double_heading_pane_t1_ParamLimits

0x4c6d,	// (0x000515bd) list_double_heading_pane_t1

0x4b08,	// (0x00051458) list_double_heading_pane_t2_ParamLimits

0x4b08,	// (0x00051458) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0005bf72) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0005bf72) list_double_heading_pane_t

0x4c83,	// (0x000515d3) list_double_graphic_heading_pane_g1_ParamLimits

0x4c83,	// (0x000515d3) list_double_graphic_heading_pane_g1

0x4c50,	// (0x000515a0) list_double_graphic_heading_pane_g2_ParamLimits

0x4c50,	// (0x000515a0) list_double_graphic_heading_pane_g2

0x4c61,	// (0x000515b1) list_double_graphic_heading_pane_g3_ParamLimits

0x4c61,	// (0x000515b1) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0005bf77) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0005bf77) list_double_graphic_heading_pane_g

0x4c8f,	// (0x000515df) list_double_graphic_heading_pane_t1_ParamLimits

0x4c8f,	// (0x000515df) list_double_graphic_heading_pane_t1

0x4b94,	// (0x000514e4) list_double_graphic_heading_pane_t2_ParamLimits

0x4b94,	// (0x000514e4) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0005bf7e) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0005bf7e) list_double_graphic_heading_pane_t

0x4ca5,	// (0x000515f5) list_double_time_pane_g1_ParamLimits

0x4ca5,	// (0x000515f5) list_double_time_pane_g1

0x4cb6,	// (0x00051606) list_double_time_pane_g2_ParamLimits

0x4cb6,	// (0x00051606) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0005bf83) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0005bf83) list_double_time_pane_g

0x4cc2,	// (0x00051612) list_double_time_pane_t1_ParamLimits

0x4cc2,	// (0x00051612) list_double_time_pane_t1

0x4cd8,	// (0x00051628) list_double_time_pane_t2_ParamLimits

0x4cd8,	// (0x00051628) list_double_time_pane_t2

0x4cea,	// (0x0005163a) list_double_time_pane_t3_ParamLimits

0x4cea,	// (0x0005163a) list_double_time_pane_t3

0x4cfc,	// (0x0005164c) list_double_time_pane_t4_ParamLimits

0x4cfc,	// (0x0005164c) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0005bf88) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0005bf88) list_double_time_pane_t

0x4d0e,	// (0x0005165e) list_setting_pane_g1_ParamLimits

0x4d0e,	// (0x0005165e) list_setting_pane_g1

0x4d1a,	// (0x0005166a) list_setting_pane_g2_ParamLimits

0x4d1a,	// (0x0005166a) list_setting_pane_g2

0x0001,

0xf641,	// (0x0005bf91) list_setting_pane_g_ParamLimits

0xf641,	// (0x0005bf91) list_setting_pane_g

0x4d26,	// (0x00051676) list_setting_pane_t1_ParamLimits

0x4d26,	// (0x00051676) list_setting_pane_t1

0x4d40,	// (0x00051690) list_setting_pane_t2_ParamLimits

0x4d40,	// (0x00051690) list_setting_pane_t2

0x0002,

0xf646,	// (0x0005bf96) list_setting_pane_t_ParamLimits

0xf646,	// (0x0005bf96) list_setting_pane_t

0x4d7f,	// (0x000516cf) set_value_pane_cp_ParamLimits

0x4d7f,	// (0x000516cf) set_value_pane_cp

0x4d8b,	// (0x000516db) list_setting_number_pane_g1_ParamLimits

0x4d8b,	// (0x000516db) list_setting_number_pane_g1

0x4d97,	// (0x000516e7) list_setting_number_pane_g2_ParamLimits

0x4d97,	// (0x000516e7) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0005bf9d) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0005bf9d) list_setting_number_pane_g

0x4da3,	// (0x000516f3) list_setting_number_pane_t1_ParamLimits

0x4da3,	// (0x000516f3) list_setting_number_pane_t1

0x4dbc,	// (0x0005170c) list_setting_number_pane_t2_ParamLimits

0x4dbc,	// (0x0005170c) list_setting_number_pane_t2

0x4dd6,	// (0x00051726) list_setting_number_pane_t3_ParamLimits

0x4dd6,	// (0x00051726) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0005bfa2) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0005bfa2) list_setting_number_pane_t

0x4d7f,	// (0x000516cf) set_value_pane_ParamLimits

0x4d7f,	// (0x000516cf) set_value_pane

0x84d0,	// (0x00054e20) bg_set_opt_pane_ParamLimits

0x84d0,	// (0x00054e20) bg_set_opt_pane

0x4e19,	// (0x00051769) set_value_pane_t1

0x84f1,	// (0x00054e41) slider_set_pane_cp3

0x84fa,	// (0x00054e4a) volume_small_pane_cp

0x8503,	// (0x00054e53) list_form_gen_pane

0x850c,	// (0x00054e5c) scroll_pane_cp8

0x4e2f,	// (0x0005177f) form_field_data_pane_ParamLimits

0x4e2f,	// (0x0005177f) form_field_data_pane

0x4e53,	// (0x000517a3) form_field_data_wide_pane_ParamLimits

0x4e53,	// (0x000517a3) form_field_data_wide_pane

0x4e76,	// (0x000517c6) form_field_popup_pane_ParamLimits

0x4e76,	// (0x000517c6) form_field_popup_pane

0x4e96,	// (0x000517e6) form_field_popup_wide_pane_ParamLimits

0x4e96,	// (0x000517e6) form_field_popup_wide_pane

0x4eb5,	// (0x00051805) form_field_slider_pane_ParamLimits

0x4eb5,	// (0x00051805) form_field_slider_pane

0x4ec8,	// (0x00051818) form_field_slider_wide_pane_ParamLimits

0x4ec8,	// (0x00051818) form_field_slider_wide_pane

0x851d,	// (0x00054e6d) data_form_pane

0x4ee5,	// (0x00051835) form_field_data_pane_t1

0x8529,	// (0x00054e79) input_focus_pane

0x4efd,	// (0x0005184d) data_form_wide_pane

0x4f1a,	// (0x0005186a) form_field_data_wide_pane_t1

0x7e30,	// (0x00054780) input_focus_pane_cp6

0x4f3c,	// (0x0005188c) form_field_popup_pane_t1

0x8529,	// (0x00054e79) input_focus_pane_cp7

0x854b,	// (0x00054e9b) list_form_pane

0x4f5c,	// (0x000518ac) form_field_popup_wide_pane_t1

0x8529,	// (0x00054e79) input_focus_pane_cp8

0x8557,	// (0x00054ea7) list_form_wide_pane

0x4f79,	// (0x000518c9) form_field_slider_pane_t1_ParamLimits

0x4f79,	// (0x000518c9) form_field_slider_pane_t1

0x4f8f,	// (0x000518df) form_field_slider_pane_t2_ParamLimits

0x4f8f,	// (0x000518df) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0005bfb2) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0005bfb2) form_field_slider_pane_t

0x7aad,	// (0x000543fd) input_focus_pane_cp9_ParamLimits

0x7aad,	// (0x000543fd) input_focus_pane_cp9

0x4fa4,	// (0x000518f4) slider_cont_pane_ParamLimits

0x4fa4,	// (0x000518f4) slider_cont_pane

0x8563,	// (0x00054eb3) form_field_slider_wide_pane_t1_ParamLimits

0x8563,	// (0x00054eb3) form_field_slider_wide_pane_t1

0x4fb8,	// (0x00051908) form_field_slider_wide_pane_t2_ParamLimits

0x4fb8,	// (0x00051908) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0005bfb7) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0005bfb7) form_field_slider_wide_pane_t

0x7aad,	// (0x000543fd) input_focus_pane_cp10_ParamLimits

0x7aad,	// (0x000543fd) input_focus_pane_cp10

0x4fca,	// (0x0005191a) slider_cont_pane_cp1_ParamLimits

0x4fca,	// (0x0005191a) slider_cont_pane_cp1

0x4fde,	// (0x0005192e) slider_form_pane_cp

0x8575,	// (0x00054ec5) input_focus_pane_g1

0x857d,	// (0x00054ecd) input_focus_pane_g2

0x8585,	// (0x00054ed5) input_focus_pane_g3

0x858d,	// (0x00054edd) input_focus_pane_g4

0x8595,	// (0x00054ee5) input_focus_pane_g5

0x859d,	// (0x00054eed) input_focus_pane_g6

0x85a5,	// (0x00054ef5) input_focus_pane_g7

0x85ad,	// (0x00054efd) input_focus_pane_g8

0x85b5,	// (0x00054f05) input_focus_pane_g9

0x27e1,	// (0x0004f131) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0005bfbc) input_focus_pane_g

0xa02f,	// (0x0005697f) wait_border_pane_g3_copy1

0x4fe6,	// (0x00051936) data_form_pane_t1

0x27e1,	// (0x0004f131) wait_anim_pane_g1_copy1

0x6137,	// (0x00052a87) data_form_wide_pane_t1

0x5001,	// (0x00051951) list_form_graphic_pane_cp_ParamLimits

0x5001,	// (0x00051951) list_form_graphic_pane_cp

0xaf4f,	// (0x0005789f) slider_form_pane_g1

0xaf58,	// (0x000578a8) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0005c2ba) slider_form_pane_g

0x501a,	// (0x0005196a) list_form_graphic_pane_ParamLimits

0x501a,	// (0x0005196a) list_form_graphic_pane

0x5036,	// (0x00051986) list_form_graphic_pane_g1

0x503e,	// (0x0005198e) list_form_graphic_pane_t1_ParamLimits

0x503e,	// (0x0005198e) list_form_graphic_pane_t1

0x7832,	// (0x00054182) list_highlight_pane_cp5_ParamLimits

0x7832,	// (0x00054182) list_highlight_pane_cp5

0x5053,	// (0x000519a3) find_pane_g1

0x85bd,	// (0x00054f0d) input_find_pane

0x505c,	// (0x000519ac) input_find_pane_g1_ParamLimits

0x505c,	// (0x000519ac) input_find_pane_g1

0x5068,	// (0x000519b8) input_find_pane_t1_ParamLimits

0x5068,	// (0x000519b8) input_find_pane_t1

0x507d,	// (0x000519cd) input_find_pane_t2_ParamLimits

0x507d,	// (0x000519cd) input_find_pane_t2

0x0001,

0xf681,	// (0x0005bfd1) input_find_pane_t_ParamLimits

0xf681,	// (0x0005bfd1) input_find_pane_t

0x85c6,	// (0x00054f16) input_focus_pane_cp5_ParamLimits

0x85c6,	// (0x00054f16) input_focus_pane_cp5

0x85e5,	// (0x00054f35) bg_popup_window_pane_cp2_ParamLimits

0x85e5,	// (0x00054f35) bg_popup_window_pane_cp2

0x85f2,	// (0x00054f42) listscroll_menu_pane_ParamLimits

0x85f2,	// (0x00054f42) listscroll_menu_pane

0x85fe,	// (0x00054f4e) popup_submenu_window_ParamLimits

0x85fe,	// (0x00054f4e) popup_submenu_window

0x862a,	// (0x00054f7a) find_popup_pane_g1

0x8632,	// (0x00054f82) input_popup_find_pane_cp

0x863c,	// (0x00054f8c) input_focus_pane_cp4_ParamLimits

0x863c,	// (0x00054f8c) input_focus_pane_cp4

0x8656,	// (0x00054fa6) input_popup_find_pane_t1_ParamLimits

0x8656,	// (0x00054fa6) input_popup_find_pane_t1

0x7752,	// (0x000540a2) bg_popup_sub_pane_cp

0x8684,	// (0x00054fd4) listscroll_popup_sub_pane

0x868c,	// (0x00054fdc) list_submenu_pane_ParamLimits

0x868c,	// (0x00054fdc) list_submenu_pane

0x869d,	// (0x00054fed) scroll_pane_cp4

0x86a5,	// (0x00054ff5) list_single_popup_submenu_pane_ParamLimits

0x86a5,	// (0x00054ff5) list_single_popup_submenu_pane

0x86b9,	// (0x00055009) list_single_popup_submenu_pane_g1

0x86c1,	// (0x00055011) list_single_popup_submenu_pane_t1_ParamLimits

0x86c1,	// (0x00055011) list_single_popup_submenu_pane_t1

0x7832,	// (0x00054182) bg_active_tab_pane_cp1_ParamLimits

0x7832,	// (0x00054182) bg_active_tab_pane_cp1

0x86d6,	// (0x00055026) tabs_2_active_pane_g1

0x86de,	// (0x0005502e) tabs_2_active_pane_t1

0x7832,	// (0x00054182) bg_passive_tab_pane_cp1_ParamLimits

0x7832,	// (0x00054182) bg_passive_tab_pane_cp1

0x86d6,	// (0x00055026) tabs_2_passive_pane_g1

0x86de,	// (0x0005502e) tabs_2_passive_pane_t1

0x86f0,	// (0x00055040) bg_active_tab_pane_cp4

0x86fe,	// (0x0005504e) tabs_2_long_active_pane_t1

0x8711,	// (0x00055061) bg_passive_tab_pane_cp4

0x5d45,	// (0x00052695) list_single_midp_graphic_pane_g4_ParamLimits

0x86f0,	// (0x00055040) bg_active_tab_pane_cp5

0x871d,	// (0x0005506d) tabs_3_long_active_pane_t1

0x8711,	// (0x00055061) bg_passive_tab_pane_cp5

0x5d45,	// (0x00052695) list_single_midp_graphic_pane_g4

0x7832,	// (0x00054182) bg_popup_window_pane_cp13_ParamLimits

0x7832,	// (0x00054182) bg_popup_window_pane_cp13

0x8738,	// (0x00055088) listscroll_popup_fast_pane_ParamLimits

0x8738,	// (0x00055088) listscroll_popup_fast_pane

0x8747,	// (0x00055097) grid_popup_fast_pane_ParamLimits

0x8747,	// (0x00055097) grid_popup_fast_pane

0x8759,	// (0x000550a9) scroll_pane_cp9_ParamLimits

0x8759,	// (0x000550a9) scroll_pane_cp9

0xc878,	// (0x000591c8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc878,	// (0x000591c8) list_single_graphic_hl_pane_t1_cp2

0x877d,	// (0x000550cd) input_focus_pane_cp20_ParamLimits

0x877d,	// (0x000550cd) input_focus_pane_cp20

0x878b,	// (0x000550db) query_popup_data_pane_t1_ParamLimits

0x878b,	// (0x000550db) query_popup_data_pane_t1

0x879e,	// (0x000550ee) query_popup_data_pane_t2_ParamLimits

0x879e,	// (0x000550ee) query_popup_data_pane_t2

0x87e4,	// (0x00055134) query_popup_data_pane_t3_ParamLimits

0x87e4,	// (0x00055134) query_popup_data_pane_t3

0x8825,	// (0x00055175) query_popup_data_pane_t4_ParamLimits

0x8825,	// (0x00055175) query_popup_data_pane_t4

0x8861,	// (0x000551b1) query_popup_data_pane_t5_ParamLimits

0x8861,	// (0x000551b1) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0005bfd6) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0005bfd6) query_popup_data_pane_t

0x8575,	// (0x00054ec5) bg_set_opt_pane_g1

0x857d,	// (0x00054ecd) bg_set_opt_pane_g2

0x8585,	// (0x00054ed5) bg_set_opt_pane_g3

0x858d,	// (0x00054edd) bg_set_opt_pane_g4

0x8595,	// (0x00054ee5) bg_set_opt_pane_g5

0x859d,	// (0x00054eed) bg_set_opt_pane_g6

0x85a5,	// (0x00054ef5) bg_set_opt_pane_g7

0x85ad,	// (0x00054efd) bg_set_opt_pane_g8

0x85b5,	// (0x00054f05) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0005bfe1) bg_set_opt_pane_g

0x539d,	// (0x00051ced) control_top_pane_stacon_ParamLimits

0x539d,	// (0x00051ced) control_top_pane_stacon

0x53f0,	// (0x00051d40) signal_pane_stacon_ParamLimits

0x53f0,	// (0x00051d40) signal_pane_stacon

0x8e53,	// (0x000557a3) stacon_top_pane_g1_ParamLimits

0x8e53,	// (0x000557a3) stacon_top_pane_g1

0x5415,	// (0x00051d65) title_pane_stacon_ParamLimits

0x5415,	// (0x00051d65) title_pane_stacon

0x543f,	// (0x00051d8f) uni_indicator_pane_stacon_ParamLimits

0x543f,	// (0x00051d8f) uni_indicator_pane_stacon

0x5454,	// (0x00051da4) battery_pane_stacon_ParamLimits

0x5454,	// (0x00051da4) battery_pane_stacon

0x5498,	// (0x00051de8) control_bottom_pane_stacon_ParamLimits

0x5498,	// (0x00051de8) control_bottom_pane_stacon

0x54bb,	// (0x00051e0b) navi_pane_stacon_ParamLimits

0x54bb,	// (0x00051e0b) navi_pane_stacon

0x8e75,	// (0x000557c5) stacon_bottom_pane_g1_ParamLimits

0x8e75,	// (0x000557c5) stacon_bottom_pane_g1

0x5092,	// (0x000519e2) aid_levels_signal_lsc_ParamLimits

0x5092,	// (0x000519e2) aid_levels_signal_lsc

0x50a8,	// (0x000519f8) signal_pane_stacon_g1_ParamLimits

0x50a8,	// (0x000519f8) signal_pane_stacon_g1

0x50bc,	// (0x00051a0c) signal_pane_stacon_g2_ParamLimits

0x50bc,	// (0x00051a0c) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0005bff4) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0005bff4) signal_pane_stacon_g

0x50f1,	// (0x00051a41) title_pane_stacon_t1_ParamLimits

0x50f1,	// (0x00051a41) title_pane_stacon_t1

0x88a5,	// (0x000551f5) uni_indicator_pane_stacon_g1

0x88af,	// (0x000551ff) uni_indicator_pane_stacon_g2

0x88b9,	// (0x00055209) uni_indicator_pane_stacon_g3

0x88c3,	// (0x00055213) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0005c000) uni_indicator_pane_stacon_g

0x5116,	// (0x00051a66) control_top_pane_stacon_g1

0x511e,	// (0x00051a6e) control_top_pane_stacon_t1_ParamLimits

0x511e,	// (0x00051a6e) control_top_pane_stacon_t1

0x5155,	// (0x00051aa5) aid_levels_battery_lsc_ParamLimits

0x5155,	// (0x00051aa5) aid_levels_battery_lsc

0x516c,	// (0x00051abc) battery_pane_stacon_g1_ParamLimits

0x516c,	// (0x00051abc) battery_pane_stacon_g1

0x517f,	// (0x00051acf) battery_pane_stacon_g2_ParamLimits

0x517f,	// (0x00051acf) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0005c009) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0005c009) battery_pane_stacon_g

0x51bd,	// (0x00051b0d) navi_icon_pane_stacon

0x51d1,	// (0x00051b21) navi_navi_pane_stacon

0x51bd,	// (0x00051b0d) navi_text_pane_stacon

0x5116,	// (0x00051a66) control_bottom_pane_stacon_g1

0x51e5,	// (0x00051b35) control_bottom_pane_stacon_t1_ParamLimits

0x51e5,	// (0x00051b35) control_bottom_pane_stacon_t1

0x88e7,	// (0x00055237) grid_app_pane_ParamLimits

0x88e7,	// (0x00055237) grid_app_pane

0x8909,	// (0x00055259) scroll_pane_cp15_ParamLimits

0x8909,	// (0x00055259) scroll_pane_cp15

0x891c,	// (0x0005526c) cell_app_pane_ParamLimits

0x891c,	// (0x0005526c) cell_app_pane

0x8944,	// (0x00055294) cell_app_pane_g1_ParamLimits

0x8944,	// (0x00055294) cell_app_pane_g1

0x8968,	// (0x000552b8) cell_app_pane_g2_ParamLimits

0x8968,	// (0x000552b8) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0005c00e) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0005c00e) cell_app_pane_g

0x8974,	// (0x000552c4) cell_app_pane_t1_ParamLimits

0x8974,	// (0x000552c4) cell_app_pane_t1

0x898b,	// (0x000552db) grid_highlight_pane_ParamLimits

0x898b,	// (0x000552db) grid_highlight_pane

0x8575,	// (0x00054ec5) cell_highlight_pane_g1

0x857d,	// (0x00054ecd) cell_highlight_pane_g2

0x8585,	// (0x00054ed5) cell_highlight_pane_g3

0x858d,	// (0x00054edd) cell_highlight_pane_g4

0x8595,	// (0x00054ee5) cell_highlight_pane_g5

0x859d,	// (0x00054eed) cell_highlight_pane_g6

0x85a5,	// (0x00054ef5) cell_highlight_pane_g7

0x85ad,	// (0x00054efd) cell_highlight_pane_g8

0x85b5,	// (0x00054f05) cell_highlight_pane_g9

0x27e1,	// (0x0004f131) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0005bfbc) cell_highlight_pane_g

0x899c,	// (0x000552ec) bg_scroll_pane

0x522f,	// (0x00051b7f) scroll_handle_pane

0x89e3,	// (0x00055333) scroll_bg_pane_g1

0x89f8,	// (0x00055348) scroll_bg_pane_g2

0x8a10,	// (0x00055360) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0005c013) scroll_bg_pane_g

0x8a25,	// (0x00055375) scroll_handle_focus_pane_ParamLimits

0x8a25,	// (0x00055375) scroll_handle_focus_pane

0x89e3,	// (0x00055333) scroll_handle_pane_g1

0x8a32,	// (0x00055382) scroll_handle_pane_g2

0x8a10,	// (0x00055360) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0005c01a) scroll_handle_pane_g

0x863c,	// (0x00054f8c) bg_popup_sub_pane_cp21_ParamLimits

0x863c,	// (0x00054f8c) bg_popup_sub_pane_cp21

0x8a46,	// (0x00055396) popup_fep_japan_predictive_window_t1_ParamLimits

0x8a46,	// (0x00055396) popup_fep_japan_predictive_window_t1

0x8a60,	// (0x000553b0) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a60,	// (0x000553b0) popup_fep_japan_predictive_window_t2

0x8a93,	// (0x000553e3) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a93,	// (0x000553e3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0005c021) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0005c021) popup_fep_japan_predictive_window_t

0x7752,	// (0x000540a2) bg_popup_sub_pane_cp23

0x8aca,	// (0x0005541a) listscroll_japin_cand_pane

0x8ad2,	// (0x00055422) popup_fep_japan_candidate_window_t1

0x8ae0,	// (0x00055430) candidate_pane_ParamLimits

0x8ae0,	// (0x00055430) candidate_pane

0x8af2,	// (0x00055442) scroll_pane_cp30

0x8afa,	// (0x0005544a) list_single_popup_jap_candidate_pane_ParamLimits

0x8afa,	// (0x0005544a) list_single_popup_jap_candidate_pane

0x7752,	// (0x000540a2) list_highlight_pane_cp30

0x8b0f,	// (0x0005545f) list_single_popup_jap_candidate_pane_t1

0x8b1e,	// (0x0005546e) level_1_signal

0x8b30,	// (0x00055480) level_2_signal

0x8b43,	// (0x00055493) level_3_signal

0x8b56,	// (0x000554a6) level_4_signal

0x8b69,	// (0x000554b9) level_5_signal

0x8b7c,	// (0x000554cc) level_6_signal

0x8b8f,	// (0x000554df) level_7_signal

0x8b1e,	// (0x0005546e) level_1_battery

0x8b30,	// (0x00055480) level_2_battery

0x8b43,	// (0x00055493) level_3_battery

0x8b56,	// (0x000554a6) level_4_battery

0x8b69,	// (0x000554b9) level_5_battery

0x8b7c,	// (0x000554cc) level_6_battery

0x8b8f,	// (0x000554df) level_7_battery

0x8bba,	// (0x0005550a) list_menu_pane_ParamLimits

0x8bba,	// (0x0005550a) list_menu_pane

0x8bd0,	// (0x00055520) scroll_pane_cp25_ParamLimits

0x8bd0,	// (0x00055520) scroll_pane_cp25

0x8be9,	// (0x00055539) list_double2_graphic_pane_cp2_ParamLimits

0x8be9,	// (0x00055539) list_double2_graphic_pane_cp2

0x8be9,	// (0x00055539) list_double2_large_graphic_pane_cp2_ParamLimits

0x8be9,	// (0x00055539) list_double2_large_graphic_pane_cp2

0x8be9,	// (0x00055539) list_double2_pane_cp2_ParamLimits

0x8be9,	// (0x00055539) list_double2_pane_cp2

0x8be9,	// (0x00055539) list_double_graphic_pane_cp2_ParamLimits

0x8be9,	// (0x00055539) list_double_graphic_pane_cp2

0x8be9,	// (0x00055539) list_double_large_graphic_pane_cp2_ParamLimits

0x8be9,	// (0x00055539) list_double_large_graphic_pane_cp2

0x8be9,	// (0x00055539) list_double_number_pane_cp2_ParamLimits

0x8be9,	// (0x00055539) list_double_number_pane_cp2

0x8be9,	// (0x00055539) list_double_pane_cp2_ParamLimits

0x8be9,	// (0x00055539) list_double_pane_cp2

0x8c0d,	// (0x0005555d) list_single_2graphic_pane_cp2_ParamLimits

0x8c0d,	// (0x0005555d) list_single_2graphic_pane_cp2

0x8c0d,	// (0x0005555d) list_single_graphic_heading_pane_cp2_ParamLimits

0x8c0d,	// (0x0005555d) list_single_graphic_heading_pane_cp2

0x8c0d,	// (0x0005555d) list_single_graphic_pane_cp2_ParamLimits

0x8c0d,	// (0x0005555d) list_single_graphic_pane_cp2

0x8c0d,	// (0x0005555d) list_single_heading_pane_cp2_ParamLimits

0x8c0d,	// (0x0005555d) list_single_heading_pane_cp2

0x8c26,	// (0x00055576) list_single_large_graphic_pane_cp2_ParamLimits

0x8c26,	// (0x00055576) list_single_large_graphic_pane_cp2

0x8c0d,	// (0x0005555d) list_single_number_heading_pane_cp2_ParamLimits

0x8c0d,	// (0x0005555d) list_single_number_heading_pane_cp2

0x8c0d,	// (0x0005555d) list_single_number_pane_cp2_ParamLimits

0x8c0d,	// (0x0005555d) list_single_number_pane_cp2

0x8c0d,	// (0x0005555d) list_single_pane_cp2_ParamLimits

0x8c0d,	// (0x0005555d) list_single_pane_cp2

0x8ca2,	// (0x000555f2) bg_popup_sub_pane_cp22

0x52e1,	// (0x00051c31) popup_side_volume_key_window_g1

0x530b,	// (0x00051c5b) popup_side_volume_key_window_t1

0x5327,	// (0x00051c77) volume_small_pane_cp1

0x7aad,	// (0x000543fd) bg_popup_sub_pane_cp24_ParamLimits

0x7aad,	// (0x000543fd) bg_popup_sub_pane_cp24

0x8cb8,	// (0x00055608) fep_china_uni_candidate_pane_ParamLimits

0x8cb8,	// (0x00055608) fep_china_uni_candidate_pane

0x8ccc,	// (0x0005561c) fep_china_uni_entry_pane

0x8cdc,	// (0x0005562c) popup_fep_china_uni_window_g1

0x8cf8,	// (0x00055648) fep_china_uni_entry_pane_g1

0x8d00,	// (0x00055650) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0005c052) fep_china_uni_entry_pane_g

0x8d08,	// (0x00055658) fep_entry_item_pane

0x8d12,	// (0x00055662) fep_candidate_item_pane

0x8d1a,	// (0x0005566a) fep_china_uni_candidate_pane_g1

0x8d22,	// (0x00055672) fep_china_uni_candidate_pane_g2

0x8d2a,	// (0x0005567a) fep_china_uni_candidate_pane_g3

0x8d32,	// (0x00055682) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0005c057) fep_china_uni_candidate_pane_g

0x27e1,	// (0x0004f131) fep_entry_item_pane_g1

0x8d3a,	// (0x0005568a) fep_entry_item_pane_t1_ParamLimits

0x8d3a,	// (0x0005568a) fep_entry_item_pane_t1

0x8d50,	// (0x000556a0) fep_candidate_item_pane_t1_ParamLimits

0x8d50,	// (0x000556a0) fep_candidate_item_pane_t1

0x8d65,	// (0x000556b5) fep_candidate_item_pane_t2_ParamLimits

0x8d65,	// (0x000556b5) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0005c060) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0005c060) fep_candidate_item_pane_t

0x7832,	// (0x00054182) list_highlight_pane_cp31_ParamLimits

0x7832,	// (0x00054182) list_highlight_pane_cp31

0x8d77,	// (0x000556c7) level_1_signal_lsc

0x8d80,	// (0x000556d0) level_2_signal_lsc

0x8d89,	// (0x000556d9) level_3_signal_lsc

0x8d92,	// (0x000556e2) level_4_signal_lsc

0x8d9b,	// (0x000556eb) level_5_signal_lsc

0x8da4,	// (0x000556f4) level_6_signal_lsc

0x8dad,	// (0x000556fd) level_7_signal_lsc

0x8dad,	// (0x000556fd) level_1_battery_lsc

0x8db6,	// (0x00055706) level_2_battery_lsc

0x8dbf,	// (0x0005570f) level_3_battery_lsc

0x8dc8,	// (0x00055718) level_4_battery_lsc

0x8dd1,	// (0x00055721) level_5_battery_lsc

0x8dda,	// (0x0005572a) level_6_battery_lsc

0x8d77,	// (0x000556c7) level_7_battery_lsc

0x8de3,	// (0x00055733) scroll_handle_focus_pane_g1

0x8dec,	// (0x0005573c) scroll_handle_focus_pane_g2

0x8df5,	// (0x00055745) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0005c065) scroll_handle_focus_pane_g

0x532f,	// (0x00051c7f) list_single_2graphic_pane_g1_ParamLimits

0x532f,	// (0x00051c7f) list_single_2graphic_pane_g1

0x800c,	// (0x0005495c) list_single_2graphic_pane_g2_ParamLimits

0x800c,	// (0x0005495c) list_single_2graphic_pane_g2

0x7fee,	// (0x0005493e) list_single_2graphic_pane_g3_ParamLimits

0x7fee,	// (0x0005493e) list_single_2graphic_pane_g3

0x533b,	// (0x00051c8b) list_single_2graphic_pane_g4_ParamLimits

0x533b,	// (0x00051c8b) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0005c06c) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0005c06c) list_single_2graphic_pane_g

0x5347,	// (0x00051c97) list_single_2graphic_pane_t1_ParamLimits

0x5347,	// (0x00051c97) list_single_2graphic_pane_t1

0x8071,	// (0x000549c1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8071,	// (0x000549c1) list_double2_graphic_large_graphic_pane_g1

0x4c17,	// (0x00051567) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4c17,	// (0x00051567) list_double2_graphic_large_graphic_pane_g2

0x8050,	// (0x000549a0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8050,	// (0x000549a0) list_double2_graphic_large_graphic_pane_g3

0x8081,	// (0x000549d1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8081,	// (0x000549d1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0005c075) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0005c075) list_double2_graphic_large_graphic_pane_g

0x5375,	// (0x00051cc5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5375,	// (0x00051cc5) list_double2_graphic_large_graphic_pane_t1

0x538b,	// (0x00051cdb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x538b,	// (0x00051cdb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0005c07e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0005c07e) list_double2_graphic_large_graphic_pane_t

0x8f40,	// (0x00055890) popup_fast_swap_window_ParamLimits

0x8f40,	// (0x00055890) popup_fast_swap_window

0x8f5c,	// (0x000558ac) popup_side_volume_key_window

0x8f78,	// (0x000558c8) stacon_top_pane

0x8f82,	// (0x000558d2) status_pane_ParamLimits

0x8f82,	// (0x000558d2) status_pane

0x8f90,	// (0x000558e0) status_small_pane

0x7752,	// (0x000540a2) control_pane

0x7752,	// (0x000540a2) stacon_bottom_pane

0x850c,	// (0x00054e5c) scroll_pane_cp121

0x8503,	// (0x00054e53) set_content_pane

0x8dfe,	// (0x0005574e) bg_active_tab_pane_g1_cp1

0x8e07,	// (0x00055757) bg_active_tab_pane_g2_cp1

0x8e10,	// (0x00055760) bg_active_tab_pane_g3_cp1

0x8dfe,	// (0x0005574e) bg_passive_tab_pane_g1_cp1

0x8e07,	// (0x00055757) bg_passive_tab_pane_g2_cp1

0x8e10,	// (0x00055760) bg_passive_tab_pane_g3_cp1

0x8e19,	// (0x00055769) bg_active_tab_pane_g1_cp2

0x8e07,	// (0x00055757) bg_active_tab_pane_g2_cp2

0x8e22,	// (0x00055772) bg_active_tab_pane_g3_cp2

0x8e19,	// (0x00055769) bg_passive_tab_pane_g1_cp2

0x8e07,	// (0x00055757) bg_passive_tab_pane_g2_cp2

0x8e22,	// (0x00055772) bg_passive_tab_pane_g3_cp2

0x8e2b,	// (0x0005577b) bg_active_tab_pane_g1_cp3

0x8e07,	// (0x00055757) bg_active_tab_pane_g2_cp3

0x8e34,	// (0x00055784) bg_active_tab_pane_g3_cp3

0x8e2b,	// (0x0005577b) bg_passive_tab_pane_g1_cp3

0x8e07,	// (0x00055757) bg_passive_tab_pane_g2_cp3

0x8e34,	// (0x00055784) bg_passive_tab_pane_g3_cp3

0x8e3d,	// (0x0005578d) bg_active_tab_pane_g1_cp4

0x8e07,	// (0x00055757) bg_active_tab_pane_g2_cp4

0x8e48,	// (0x00055798) bg_active_tab_pane_g3_cp4

0x8e3d,	// (0x0005578d) bg_passive_tab_pane_g1_cp4

0x8e07,	// (0x00055757) bg_passive_tab_pane_g2_cp4

0x8e48,	// (0x00055798) bg_passive_tab_pane_g3_cp4

0x8e91,	// (0x000557e1) bg_active_tab_pane_g1_cp5

0x8e07,	// (0x00055757) bg_active_tab_pane_g2_cp5

0x8e9a,	// (0x000557ea) bg_active_tab_pane_g3_cp5

0x8e91,	// (0x000557e1) bg_passive_tab_pane_g1_cp5

0x8e07,	// (0x00055757) bg_passive_tab_pane_g2_cp5

0x8e9a,	// (0x000557ea) bg_passive_tab_pane_g3_cp5

0x8ea3,	// (0x000557f3) list_set_graphic_pane_ParamLimits

0x8ea3,	// (0x000557f3) list_set_graphic_pane

0x7752,	// (0x000540a2) bg_set_opt_pane_cp4

0x8ec3,	// (0x00055813) list_set_graphic_pane_g1_ParamLimits

0x8ec3,	// (0x00055813) list_set_graphic_pane_g1

0x8ecf,	// (0x0005581f) list_set_graphic_pane_g2_ParamLimits

0x8ecf,	// (0x0005581f) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0005c083) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0005c083) list_set_graphic_pane_g

0x0009,

0xfaa3,	// (0x0005c3f3) volume_small_pane_cp_g

0x8ef3,	// (0x00055843) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8ef3,	// (0x00055843) list_double2_large_graphic_pane_g1_cp2

0x8eff,	// (0x0005584f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8eff,	// (0x0005584f) list_double2_large_graphic_pane_g2_cp2

0x8f10,	// (0x00055860) list_double2_large_graphic_pane_g3_cp2

0x8f18,	// (0x00055868) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8f18,	// (0x00055868) list_double2_large_graphic_pane_t1_cp2

0x8f2e,	// (0x0005587e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8f2e,	// (0x0005587e) list_double2_large_graphic_pane_t2_cp2

0xab02,	// (0x00057452) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab02,	// (0x00057452) list_double_large_graphic_pane_g1_cp2

0xab13,	// (0x00057463) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab13,	// (0x00057463) list_double_large_graphic_pane_g2_cp2

0x90a9,	// (0x000559f9) list_double_large_graphic_pane_g3_cp2

0xab24,	// (0x00057474) list_double_large_graphic_pane_g4_cp

0xab2c,	// (0x0005747c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab2c,	// (0x0005747c) list_double_large_graphic_pane_t1_cp2

0xab43,	// (0x00057493) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab43,	// (0x00057493) list_double_large_graphic_pane_t2_cp2

0x8f9b,	// (0x000558eb) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f9b,	// (0x000558eb) list_double2_graphic_pane_g1_cp2

0x8fa9,	// (0x000558f9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8fa9,	// (0x000558f9) list_double2_graphic_pane_g2_cp2

0x8fba,	// (0x0005590a) list_double2_graphic_pane_g3_cp2

0x8fc4,	// (0x00055914) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8fc4,	// (0x00055914) list_double2_graphic_pane_t1_cp2

0x8fda,	// (0x0005592a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8fda,	// (0x0005592a) list_double2_graphic_pane_t2_cp2

0x8fec,	// (0x0005593c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fec,	// (0x0005593c) list_single_number_heading_pane_g1_cp2

0x8ff8,	// (0x00055948) list_single_number_heading_pane_g2_cp2

0x9000,	// (0x00055950) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9000,	// (0x00055950) list_single_number_heading_pane_t1_cp2

0x9016,	// (0x00055966) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9016,	// (0x00055966) list_single_number_heading_pane_t2_cp2

0x9028,	// (0x00055978) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9028,	// (0x00055978) list_single_number_heading_pane_t3_cp2

0x8fec,	// (0x0005593c) list_single_heading_pane_g1_cp2_ParamLimits

0x8fec,	// (0x0005593c) list_single_heading_pane_g1_cp2

0x8ff8,	// (0x00055948) list_single_heading_pane_g2_cp2

0x9000,	// (0x00055950) list_single_heading_pane_t1_cp2_ParamLimits

0x9000,	// (0x00055950) list_single_heading_pane_t1_cp2

0xa90a,	// (0x0005725a) list_single_heading_pane_t2_cp2_ParamLimits

0xa90a,	// (0x0005725a) list_single_heading_pane_t2_cp2

0xa852,	// (0x000571a2) list_double_graphic_pane_g1_cp2_ParamLimits

0xa852,	// (0x000571a2) list_double_graphic_pane_g1_cp2

0xa85e,	// (0x000571ae) list_double_graphic_pane_g2_cp2_ParamLimits

0xa85e,	// (0x000571ae) list_double_graphic_pane_g2_cp2

0xa86d,	// (0x000571bd) list_double_graphic_pane_g3_cp2

0xa875,	// (0x000571c5) list_double_graphic_pane_t1_cp2_ParamLimits

0xa875,	// (0x000571c5) list_double_graphic_pane_t1_cp2

0xa88b,	// (0x000571db) list_double_graphic_pane_t2_cp2_ParamLimits

0xa88b,	// (0x000571db) list_double_graphic_pane_t2_cp2

0x909d,	// (0x000559ed) list_double_number_pane_g1_cp2_ParamLimits

0x909d,	// (0x000559ed) list_double_number_pane_g1_cp2

0x90a9,	// (0x000559f9) list_double_number_pane_g2_cp2

0xa816,	// (0x00057166) list_double_number_pane_t1_cp2_ParamLimits

0xa816,	// (0x00057166) list_double_number_pane_t1_cp2

0xa82a,	// (0x0005717a) list_double_number_pane_t2_cp2_ParamLimits

0xa82a,	// (0x0005717a) list_double_number_pane_t2_cp2

0xa840,	// (0x00057190) list_double_number_pane_t3_cp2_ParamLimits

0xa840,	// (0x00057190) list_double_number_pane_t3_cp2

0xa6ff,	// (0x0005704f) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6ff,	// (0x0005704f) list_single_graphic_pane_g1_cp2

0x9101,	// (0x00055a51) list_single_graphic_pane_g2_cp2_ParamLimits

0x9101,	// (0x00055a51) list_single_graphic_pane_g2_cp2

0x910d,	// (0x00055a5d) list_single_graphic_pane_g3_cp2

0xa6d5,	// (0x00057025) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6d5,	// (0x00057025) list_single_graphic_pane_t1_cp2

0x9101,	// (0x00055a51) list_single_number_pane_g1_cp2_ParamLimits

0x9101,	// (0x00055a51) list_single_number_pane_g1_cp2

0x910d,	// (0x00055a5d) list_single_number_pane_g2_cp2

0xa6d5,	// (0x00057025) list_single_number_pane_t1_cp2_ParamLimits

0xa6d5,	// (0x00057025) list_single_number_pane_t1_cp2

0xa6eb,	// (0x0005703b) list_single_number_pane_t2_cp2_ParamLimits

0xa6eb,	// (0x0005703b) list_single_number_pane_t2_cp2

0x8eff,	// (0x0005584f) list_double2_pane_g1_cp2_ParamLimits

0x8eff,	// (0x0005584f) list_double2_pane_g1_cp2

0x8f10,	// (0x00055860) list_double2_pane_g2_cp2

0x9075,	// (0x000559c5) list_double2_pane_t1_cp2_ParamLimits

0x9075,	// (0x000559c5) list_double2_pane_t1_cp2

0x908b,	// (0x000559db) list_double2_pane_t2_cp2_ParamLimits

0x908b,	// (0x000559db) list_double2_pane_t2_cp2

0x909d,	// (0x000559ed) list_double_pane_g1_cp2_ParamLimits

0x909d,	// (0x000559ed) list_double_pane_g1_cp2

0x90a9,	// (0x000559f9) list_double_pane_g2_cp2

0x90b1,	// (0x00055a01) list_double_pane_t1_cp2_ParamLimits

0x90b1,	// (0x00055a01) list_double_pane_t1_cp2

0x90c7,	// (0x00055a17) list_double_pane_t2_cp2_ParamLimits

0x90c7,	// (0x00055a17) list_double_pane_t2_cp2

0x90f1,	// (0x00055a41) list_single_pane_cp2_g3

0x9101,	// (0x00055a51) list_single_pane_g1_cp2_ParamLimits

0x9101,	// (0x00055a51) list_single_pane_g1_cp2

0x910d,	// (0x00055a5d) list_single_pane_g2_cp2

0x9115,	// (0x00055a65) list_single_pane_t1_cp2_ParamLimits

0x9115,	// (0x00055a65) list_single_pane_t1_cp2

0x912d,	// (0x00055a7d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x912d,	// (0x00055a7d) list_single_large_graphic_pane_g1_cp2

0x84b8,	// (0x00054e08) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x84b8,	// (0x00054e08) list_single_large_graphic_pane_g2_cp2

0x9139,	// (0x00055a89) list_single_large_graphic_pane_g3_cp2

0x9141,	// (0x00055a91) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9141,	// (0x00055a91) list_single_large_graphic_pane_g4_cp1

0x915b,	// (0x00055aab) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x915b,	// (0x00055aab) list_single_large_graphic_pane_t1_cp2

0xa6a1,	// (0x00056ff1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6a1,	// (0x00056ff1) list_single_graphic_heading_pane_g1_cp2

0xa66e,	// (0x00056fbe) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa66e,	// (0x00056fbe) list_single_graphic_heading_pane_g4_cp2

0x910d,	// (0x00055a5d) list_single_graphic_heading_pane_g5_cp2

0xa6ad,	// (0x00056ffd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6ad,	// (0x00056ffd) list_single_graphic_heading_pane_t1_cp2

0xa6c3,	// (0x00057013) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6c3,	// (0x00057013) list_single_graphic_heading_pane_t2_cp2

0xa662,	// (0x00056fb2) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa662,	// (0x00056fb2) list_single_2graphic_pane_g1_cp2

0xa66e,	// (0x00056fbe) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa66e,	// (0x00056fbe) list_single_2graphic_pane_g2_cp2

0x910d,	// (0x00055a5d) list_single_2graphic_pane_g3_cp2

0xa67f,	// (0x00056fcf) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa67f,	// (0x00056fcf) list_single_2graphic_pane_g4_cp2

0xa68b,	// (0x00056fdb) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa68b,	// (0x00056fdb) list_single_2graphic_pane_t1_cp2

0x27e1,	// (0x0004f131) list_highlight_pane_g10_cp1

0xa23a,	// (0x00056b8a) list_highlight_pane_g1_cp1

0xa242,	// (0x00056b92) list_highlight_pane_g2_cp1

0xa24a,	// (0x00056b9a) list_highlight_pane_g3_cp1

0xa252,	// (0x00056ba2) list_highlight_pane_g4_cp1

0xa25a,	// (0x00056baa) list_highlight_pane_g5_cp1

0xa262,	// (0x00056bb2) list_highlight_pane_g6_cp1

0xa26a,	// (0x00056bba) list_highlight_pane_g7_cp1

0xa272,	// (0x00056bc2) list_highlight_pane_g8_cp1

0xa27a,	// (0x00056bca) list_highlight_pane_g9_cp1

0xa15a,	// (0x00056aaa) form_field_slider_pane_t3

0xa168,	// (0x00056ab8) form_field_slider_pane_t4

0xa176,	// (0x00056ac6) slider_form_pane_ParamLimits

0xa176,	// (0x00056ac6) slider_form_pane

0x7752,	// (0x000540a2) control_abbreviations

0x7752,	// (0x000540a2) control_conventions

0x7752,	// (0x000540a2) control_definitions

0x7752,	// (0x000540a2) format_table_attribute

0xa954,	// (0x000572a4) bg_popup_preview_window_pane_g9

0x7752,	// (0x000540a2) format_table_data2

0x7752,	// (0x000540a2) format_table_data3

0x7752,	// (0x000540a2) format_table_data_example

0x0008,

0x7752,	// (0x000540a2) intro_purpose

0xf8ca,	// (0x0005c21a) bg_popup_preview_window_pane_g

0x7752,	// (0x000540a2) texts_category

0x7752,	// (0x000540a2) texts_graphics

0x9171,	// (0x00055ac1) text_digital

0x9180,	// (0x00055ad0) text_primary

0x918f,	// (0x00055adf) text_primary_small

0x919e,	// (0x00055aee) text_secondary

0x91ad,	// (0x00055afd) text_title

0xb075,	// (0x000579c5) bg_passive_tab_pane_g1_cp3_srt

0x8e07,	// (0x00055757) bg_passive_tab_pane_g2_cp3_srt

0xb07e,	// (0x000579ce) bg_passive_tab_pane_g3_cp3_srt

0x7832,	// (0x00054182) bg_active_tab_pane_cp3_srt_ParamLimits

0x7832,	// (0x00054182) bg_active_tab_pane_cp3_srt

0xb087,	// (0x000579d7) tabs_4_active_pane_srt_g1

0xb08f,	// (0x000579df) tabs_4_active_pane_srt_t1_ParamLimits

0xb08f,	// (0x000579df) tabs_4_active_pane_srt_t1

0xb075,	// (0x000579c5) bg_active_tab_pane_g1_cp3_copy1

0x8e07,	// (0x00055757) bg_active_tab_pane_g2_cp3_copy1

0xb07e,	// (0x000579ce) bg_active_tab_pane_g3_cp3_copy1

0x7832,	// (0x00054182) tabs_2_long_active_pane_srt_ParamLimits

0x7832,	// (0x00054182) tabs_2_long_active_pane_srt

0x7832,	// (0x00054182) tabs_2_long_passive_pane_srt_ParamLimits

0x7832,	// (0x00054182) tabs_2_long_passive_pane_srt

0x8711,	// (0x00055061) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8711,	// (0x00055061) bg_passive_tab_pane_cp4_srt

0xad82,	// (0x000576d2) bg_passive_tab_pane_g1_cp4_srt

0x8e07,	// (0x00055757) bg_passive_tab_pane_g2_cp4_srt

0xad8b,	// (0x000576db) bg_passive_tab_pane_g3_cp4_srt

0x86f0,	// (0x00055040) bg_active_tab_pane_cp4_srt_ParamLimits

0x86f0,	// (0x00055040) bg_active_tab_pane_cp4_srt

0xad94,	// (0x000576e4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad94,	// (0x000576e4) tabs_2_long_active_pane_srt_t1

0xad82,	// (0x000576d2) bg_active_tab_pane_g1_cp4_srt

0x8e07,	// (0x00055757) bg_active_tab_pane_g2_cp4_srt

0xad8b,	// (0x000576db) bg_active_tab_pane_g3_cp4_srt

0x7aad,	// (0x000543fd) tabs_3_long_active_pane_srt_ParamLimits

0x7aad,	// (0x000543fd) tabs_3_long_active_pane_srt

0x7aad,	// (0x000543fd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7aad,	// (0x000543fd) tabs_3_long_passive_pane_cp_srt

0x7aad,	// (0x000543fd) tabs_3_long_passive_pane_srt_ParamLimits

0x7aad,	// (0x000543fd) tabs_3_long_passive_pane_srt

0x8711,	// (0x00055061) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8711,	// (0x00055061) bg_passive_tab_pane_cp5_srt

0x8e91,	// (0x000557e1) bg_passive_tab_pane_g1_cp5_srt

0x8e07,	// (0x00055757) bg_passive_tab_pane_g2_cp5_srt

0x8e9a,	// (0x000557ea) bg_passive_tab_pane_g3_cp5_srt

0x86f0,	// (0x00055040) bg_active_tab_pane_cp5_srt_ParamLimits

0x86f0,	// (0x00055040) bg_active_tab_pane_cp5_srt

0xad70,	// (0x000576c0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad70,	// (0x000576c0) tabs_3_long_active_pane_srt_t1

0x8e91,	// (0x000557e1) bg_active_tab_pane_g1_cp5_srt

0x8e07,	// (0x00055757) bg_active_tab_pane_g2_cp5_srt

0x8e9a,	// (0x000557ea) bg_active_tab_pane_g3_cp5_srt

0xad62,	// (0x000576b2) navi_text_pane_srt_t1

0xad5a,	// (0x000576aa) navi_icon_pane_srt_g1

0x9382,	// (0x00055cd2) midp_editing_number_pane_srt

0x91bc,	// (0x00055b0c) midp_ticker_pane_srt

0x938a,	// (0x00055cda) midp_ticker_pane_srt_g1

0x9392,	// (0x00055ce2) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0005c0a2) midp_ticker_pane_srt_g

0x939a,	// (0x00055cea) midp_ticker_pane_srt_t1

0xad4b,	// (0x0005769b) midp_editing_number_pane_t1_copy1

0x91c4,	// (0x00055b14) listscroll_midp_pane

0x91c4,	// (0x00055b14) midp_form_pane

0x9234,	// (0x00055b84) midp_info_popup_window_ParamLimits

0x9234,	// (0x00055b84) midp_info_popup_window

0x863c,	// (0x00054f8c) bg_popup_sub_pane_cp50_ParamLimits

0x863c,	// (0x00054f8c) bg_popup_sub_pane_cp50

0x9e5e,	// (0x000567ae) listscroll_midp_info_pane_ParamLimits

0x9e5e,	// (0x000567ae) listscroll_midp_info_pane

0x9e3e,	// (0x0005678e) listscroll_form_midp_pane_ParamLimits

0x9e3e,	// (0x0005678e) listscroll_form_midp_pane

0x9e4a,	// (0x0005679a) scroll_bar_cp050

0x9e1e,	// (0x0005676e) list_midp_pane

0xbafc,	// (0x0005844c) signal_pane_g2_cp

0x9d58,	// (0x000566a8) listscroll_midp_info_pane_t1_ParamLimits

0x9d58,	// (0x000566a8) listscroll_midp_info_pane_t1

0x9d70,	// (0x000566c0) listscroll_midp_info_pane_t2_ParamLimits

0x9d70,	// (0x000566c0) listscroll_midp_info_pane_t2

0x9dae,	// (0x000566fe) listscroll_midp_info_pane_t3_ParamLimits

0x9dae,	// (0x000566fe) listscroll_midp_info_pane_t3

0x9de8,	// (0x00056738) listscroll_midp_info_pane_t4_ParamLimits

0x9de8,	// (0x00056738) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0005c155) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0005c155) listscroll_midp_info_pane_t

0x869d,	// (0x00054fed) scroll_pane_cp21

0x9cf6,	// (0x00056646) form_midp_field_choice_group_pane

0x9cff,	// (0x0005664f) form_midp_field_text_pane

0x9d3e,	// (0x0005668e) form_midp_field_time_pane

0x9d46,	// (0x00056696) form_midp_gauge_slider_pane

0x9d4f,	// (0x0005669f) form_midp_gauge_wait_pane

0x7752,	// (0x000540a2) form_midp_image_pane

0x5ecf,	// (0x0005281f) list_single_midp_pane_ParamLimits

0x5ecf,	// (0x0005281f) list_single_midp_pane

0x9cae,	// (0x000565fe) form_midp_field_text_pane_t1

0x9a7e,	// (0x000563ce) input_focus_pane_cp050

0x9ce5,	// (0x00056635) list_midp_form_text_pane

0x9c7d,	// (0x000565cd) form_midp_field_choice_group_pane_t1

0x9c8b,	// (0x000565db) input_focus_pane_cp051

0x9c9f,	// (0x000565ef) list_midp_choice_pane

0x7752,	// (0x000540a2) status_idle_pane

0x9c61,	// (0x000565b1) form_midp_field_time_pane_t1

0x27e1,	// (0x0004f131) wait_anim_pane_g2_copy1

0x9c6f,	// (0x000565bf) form_midp_field_time_pane_t2

0x0001,

0x92e2,	// (0x00055c32) aid_navinavi_width_2_pane

0xf800,	// (0x0005c150) form_midp_field_time_pane_t

0x7752,	// (0x000540a2) input_focus_pane_cp052

0x7752,	// (0x000540a2) bg_input_focus_pane_cp040

0x9c21,	// (0x00056571) form_midp_gauge_slider_pane_t1

0x9c2f,	// (0x0005657f) form_midp_gauge_slider_pane_t2

0x9c3d,	// (0x0005658d) form_midp_gauge_slider_pane_t3

0x9c4b,	// (0x0005659b) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0005c147) form_midp_gauge_slider_pane_t

0x9c59,	// (0x000565a9) form_midp_slider_pane

0x7832,	// (0x00054182) bg_input_focus_pane_cp041_ParamLimits

0x7832,	// (0x00054182) bg_input_focus_pane_cp041

0x9bee,	// (0x0005653e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bee,	// (0x0005653e) form_midp_gauge_wait_pane_t1

0x9c00,	// (0x00056550) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c00,	// (0x00056550) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0005c142) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0005c142) form_midp_gauge_wait_pane_t

0x9c12,	// (0x00056562) form_midp_wait_pane_ParamLimits

0x9c12,	// (0x00056562) form_midp_wait_pane

0x9bb8,	// (0x00056508) form_midp_image_pane_g1

0x9bc1,	// (0x00056511) form_midp_image_pane_t1

0x9bd0,	// (0x00056520) form_midp_image_pane_t2

0x9bdf,	// (0x0005652f) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0005c13b) form_midp_image_pane_t

0x9baf,	// (0x000564ff) list_single_midp_pane_g1

0x5ec0,	// (0x00052810) list_single_midp_pane_t1

0x9b87,	// (0x000564d7) list_midp_form_item_pane_ParamLimits

0x9b87,	// (0x000564d7) list_midp_form_item_pane

0x928a,	// (0x00055bda) list_midp_form_item_pane_t1

0x9299,	// (0x00055be9) midp_ticker_pane_g1

0x92a5,	// (0x00055bf5) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0005c088) midp_ticker_pane_g

0x92b1,	// (0x00055c01) midp_ticker_pane_t1

0xaf9c,	// (0x000578ec) midp_editing_number_pane_t1

0xaf7a,	// (0x000578ca) midp_editing_number_pane

0xaf89,	// (0x000578d9) midp_ticker_pane

0xad3b,	// (0x0005768b) ai_message_heading_pane

0x7752,	// (0x000540a2) bg_popup_window_pane_cp14

0xad43,	// (0x00057693) listscroll_ai_message_pane

0xacc5,	// (0x00057615) ai_message_heading_pane_g1_ParamLimits

0xacc5,	// (0x00057615) ai_message_heading_pane_g1

0xacd1,	// (0x00057621) ai_message_heading_pane_g2_ParamLimits

0xacd1,	// (0x00057621) ai_message_heading_pane_g2

0xacdd,	// (0x0005762d) ai_message_heading_pane_g3_ParamLimits

0xacdd,	// (0x0005762d) ai_message_heading_pane_g3

0xace9,	// (0x00057639) ai_message_heading_pane_g4_ParamLimits

0xace9,	// (0x00057639) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0005c27c) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0005c27c) ai_message_heading_pane_g

0xacf5,	// (0x00057645) ai_message_heading_pane_t1_ParamLimits

0xacf5,	// (0x00057645) ai_message_heading_pane_t1

0xad0f,	// (0x0005765f) ai_message_heading_pane_t2_ParamLimits

0xad0f,	// (0x0005765f) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0005c285) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0005c285) ai_message_heading_pane_t

0xad21,	// (0x00057671) bg_popup_heading_pane_cp1_ParamLimits

0xad21,	// (0x00057671) bg_popup_heading_pane_cp1

0xacb3,	// (0x00057603) list_ai_message_pane_ParamLimits

0xacb3,	// (0x00057603) list_ai_message_pane

0x869d,	// (0x00054fed) scroll_pane_cp10

0xac4f,	// (0x0005759f) list_ai_message_pane_g1

0xac57,	// (0x000575a7) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0005c259) list_ai_message_pane_g

0xac5f,	// (0x000575af) list_ai_message_pane_t1_ParamLimits

0xac5f,	// (0x000575af) list_ai_message_pane_t1

0xac74,	// (0x000575c4) list_ai_message_pane_t2_ParamLimits

0xac74,	// (0x000575c4) list_ai_message_pane_t2

0xac89,	// (0x000575d9) list_ai_message_pane_t3_ParamLimits

0xac89,	// (0x000575d9) list_ai_message_pane_t3

0xac9e,	// (0x000575ee) list_ai_message_pane_t4_ParamLimits

0xac9e,	// (0x000575ee) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0005c25e) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0005c25e) list_ai_message_pane_t

0xac3a,	// (0x0005758a) cell_ai_soft_ind_pane_ParamLimits

0xac3a,	// (0x0005758a) cell_ai_soft_ind_pane

0x92c3,	// (0x00055c13) cell_ai_soft_ind_pane_g1_ParamLimits

0x92c3,	// (0x00055c13) cell_ai_soft_ind_pane_g1

0x7752,	// (0x000540a2) grid_highlight_cp1

0x92d0,	// (0x00055c20) text_secondary_cp56_ParamLimits

0x92d0,	// (0x00055c20) text_secondary_cp56

0xac0f,	// (0x0005755f) example_general_pane_ParamLimits

0xac0f,	// (0x0005755f) example_general_pane

0xac1b,	// (0x0005756b) example_parent_pane_g1_ParamLimits

0xac1b,	// (0x0005756b) example_parent_pane_g1

0xac27,	// (0x00057577) example_parent_pane_t1_ParamLimits

0xac27,	// (0x00057577) example_parent_pane_t1

0x5a9e,	// (0x000523ee) popup_preview_text_window_ParamLimits

0x5a9e,	// (0x000523ee) popup_preview_text_window

0x90f9,	// (0x00055a49) list_single_pane_cp2_g4

0x7b89,	// (0x000544d9) bg_popup_preview_window_pane_ParamLimits

0x7b89,	// (0x000544d9) bg_popup_preview_window_pane

0xa95c,	// (0x000572ac) popup_preview_text_window_t1_ParamLimits

0xa95c,	// (0x000572ac) popup_preview_text_window_t1

0xa97a,	// (0x000572ca) popup_preview_text_window_t2_ParamLimits

0xa97a,	// (0x000572ca) popup_preview_text_window_t2

0xa9c3,	// (0x00057313) popup_preview_text_window_t3_ParamLimits

0xa9c3,	// (0x00057313) popup_preview_text_window_t3

0xaa08,	// (0x00057358) popup_preview_text_window_t4_ParamLimits

0xaa08,	// (0x00057358) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0005c22d) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0005c22d) popup_preview_text_window_t

0xaa86,	// (0x000573d6) scroll_pane_cp11

0x9a0a,	// (0x0005635a) bg_popup_preview_window_pane_g1

0xa91c,	// (0x0005726c) bg_popup_preview_window_pane_g2

0xa924,	// (0x00057274) bg_popup_preview_window_pane_g3

0xa92c,	// (0x0005727c) bg_popup_preview_window_pane_g4

0xa934,	// (0x00057284) bg_popup_preview_window_pane_g5

0xa93c,	// (0x0005728c) bg_popup_preview_window_pane_g6

0xa944,	// (0x00057294) bg_popup_preview_window_pane_g7

0xa94c,	// (0x0005729c) bg_popup_preview_window_pane_g8

0x45f9,	// (0x00050f49) aid_popup_width_pane

0x5a7c,	// (0x000523cc) popup_midp_note_alarm_window_ParamLimits

0x5a7c,	// (0x000523cc) popup_midp_note_alarm_window

0x851d,	// (0x00054e6d) data_form_pane_ParamLimits

0x4edb,	// (0x0005182b) form_field_data_pane_g1

0x4ee5,	// (0x00051835) form_field_data_pane_t1_ParamLimits

0x8529,	// (0x00054e79) input_focus_pane_ParamLimits

0x4efd,	// (0x0005184d) data_form_wide_pane_ParamLimits

0x4f0e,	// (0x0005185e) form_field_data_wide_pane_g1

0x4f1a,	// (0x0005186a) form_field_data_wide_pane_t1_ParamLimits

0x7e30,	// (0x00054780) input_focus_pane_cp6_ParamLimits

0x864a,	// (0x00054f9a) input_popup_find_pane_g1_ParamLimits

0x864a,	// (0x00054f9a) input_popup_find_pane_g1

0x5190,	// (0x00051ae0) aid_navi_side_left_pane

0x51a5,	// (0x00051af5) aid_navi_side_right_pane

0xa335,	// (0x00056c85) bg_popup_window_pane_cp30_ParamLimits

0xa335,	// (0x00056c85) bg_popup_window_pane_cp30

0xa3af,	// (0x00056cff) popup_midp_note_alarm_window_g1_ParamLimits

0xa3af,	// (0x00056cff) popup_midp_note_alarm_window_g1

0xa3df,	// (0x00056d2f) popup_midp_note_alarm_window_t1_ParamLimits

0xa3df,	// (0x00056d2f) popup_midp_note_alarm_window_t1

0xa480,	// (0x00056dd0) popup_midp_note_alarm_window_t2_ParamLimits

0xa480,	// (0x00056dd0) popup_midp_note_alarm_window_t2

0xa52e,	// (0x00056e7e) popup_midp_note_alarm_window_t3_ParamLimits

0xa52e,	// (0x00056e7e) popup_midp_note_alarm_window_t3

0xa560,	// (0x00056eb0) popup_midp_note_alarm_window_t4_ParamLimits

0xa560,	// (0x00056eb0) popup_midp_note_alarm_window_t4

0xa586,	// (0x00056ed6) popup_midp_note_alarm_window_t5_ParamLimits

0xa586,	// (0x00056ed6) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0005c1ca) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0005c1ca) popup_midp_note_alarm_window_t

0xa632,	// (0x00056f82) wait_bar_pane_cp1_ParamLimits

0xa632,	// (0x00056f82) wait_bar_pane_cp1

0x7752,	// (0x000540a2) wait_anim_pane_copy1

0x7752,	// (0x000540a2) wait_border_pane_copy1

0xa01b,	// (0x0005696b) wait_border_pane_g1_copy1

0x4f34,	// (0x00051884) form_field_popup_pane_g1

0x4f3c,	// (0x0005188c) form_field_popup_pane_t1_ParamLimits

0x8529,	// (0x00054e79) input_focus_pane_cp7_ParamLimits

0x854b,	// (0x00054e9b) list_form_pane_ParamLimits

0x4f54,	// (0x000518a4) form_field_popup_wide_pane_g1

0x4f5c,	// (0x000518ac) form_field_popup_wide_pane_t1_ParamLimits

0x8529,	// (0x00054e79) input_focus_pane_cp8_ParamLimits

0x8557,	// (0x00054ea7) list_form_wide_pane_ParamLimits

0xb117,	// (0x00057a67) aid_size_cell_graphic_pane

0x4fe6,	// (0x00051936) data_form_pane_t1_ParamLimits

0x6137,	// (0x00052a87) data_form_wide_pane_t1_ParamLimits

0x95d1,	// (0x00055f21) bg_status_flat_pane

0x7792,	// (0x000540e2) title_pane_t1_ParamLimits

0x77fa,	// (0x0005414a) title_pane_t2_ParamLimits

0x7820,	// (0x00054170) title_pane_t3_ParamLimits

0xf532,	// (0x0005be82) title_pane_t_ParamLimits

0x8b1e,	// (0x0005546e) level_1_signal_ParamLimits

0x8b30,	// (0x00055480) level_2_signal_ParamLimits

0x8b43,	// (0x00055493) level_3_signal_ParamLimits

0x8b56,	// (0x000554a6) level_4_signal_ParamLimits

0x8b69,	// (0x000554b9) level_5_signal_ParamLimits

0x8b7c,	// (0x000554cc) level_6_signal_ParamLimits

0x8b8f,	// (0x000554df) level_7_signal_ParamLimits

0x8b1e,	// (0x0005546e) level_1_battery_ParamLimits

0x8b30,	// (0x00055480) level_2_battery_ParamLimits

0x8b43,	// (0x00055493) level_3_battery_ParamLimits

0x8b56,	// (0x000554a6) level_4_battery_ParamLimits

0x8b69,	// (0x000554b9) level_5_battery_ParamLimits

0x8b7c,	// (0x000554cc) level_6_battery_ParamLimits

0x8b8f,	// (0x000554df) level_7_battery_ParamLimits

0xa23a,	// (0x00056b8a) bg_status_flat_pane_g1

0xa242,	// (0x00056b92) bg_status_flat_pane_g2

0xa24a,	// (0x00056b9a) bg_status_flat_pane_g3

0xa252,	// (0x00056ba2) bg_status_flat_pane_g4

0xa25a,	// (0x00056baa) bg_status_flat_pane_g5

0xa262,	// (0x00056bb2) bg_status_flat_pane_g6

0xa26a,	// (0x00056bba) bg_status_flat_pane_g7

0x7848,	// (0x00054198) tabs_3_active_pane_t1_ParamLimits

0x7848,	// (0x00054198) tabs_3_passive_pane_t1_ParamLimits

0x7862,	// (0x000541b2) tabs_4_active_pane_t1_ParamLimits

0x7862,	// (0x000541b2) tabs_4_1_passive_pane_t1_ParamLimits

0x86de,	// (0x0005502e) tabs_2_active_pane_t1_ParamLimits

0x86de,	// (0x0005502e) tabs_2_passive_pane_t1_ParamLimits

0x86f0,	// (0x00055040) bg_active_tab_pane_cp4_ParamLimits

0x86fe,	// (0x0005504e) tabs_2_long_active_pane_t1_ParamLimits

0x8711,	// (0x00055061) bg_passive_tab_pane_cp4_ParamLimits

0x5da1,	// (0x000526f1) list_single_midp_graphic_pane_t1_ParamLimits

0x86f0,	// (0x00055040) bg_active_tab_pane_cp5_ParamLimits

0x871d,	// (0x0005506d) tabs_3_long_active_pane_t1_ParamLimits

0x8711,	// (0x00055061) bg_passive_tab_pane_cp5_ParamLimits

0x5da1,	// (0x000526f1) list_single_midp_graphic_pane_t1

0x95d1,	// (0x00055f21) bg_status_flat_pane_ParamLimits

0x969a,	// (0x00055fea) indicator_pane_cp2_ParamLimits

0x969a,	// (0x00055fea) indicator_pane_cp2

0x97c5,	// (0x00056115) navi_pane_srt_ParamLimits

0x97c5,	// (0x00056115) navi_pane_srt

0x97e9,	// (0x00056139) popup_clock_digital_analogue_window_cp1

0x790f,	// (0x0005425f) indicator_pane_t1

0x91bc,	// (0x00055b0c) copy_highlight_pane

0x91bc,	// (0x00055b0c) cursor_graphics_pane

0x91bc,	// (0x00055b0c) graphic_within_text_pane

0x91bc,	// (0x00055b0c) link_highlight_pane

0xaa49,	// (0x00057399) popup_preview_text_window_t5_ParamLimits

0xaa49,	// (0x00057399) popup_preview_text_window_t5

0x92ea,	// (0x00055c3a) cursor_digital_pane

0x92ea,	// (0x00055c3a) cursor_primary_pane

0x92fb,	// (0x00055c4b) cursor_primary_small_pane

0x9303,	// (0x00055c53) cursor_secondary_pane

0x930b,	// (0x00055c5b) cursor_title_pane

0x92ea,	// (0x00055c3a) link_highlight_digital_pane

0x92f2,	// (0x00055c42) link_highlight_primary_pane

0x92fb,	// (0x00055c4b) link_highlight_primary_small_pane

0x9303,	// (0x00055c53) link_highlight_secondary_pane

0x930b,	// (0x00055c5b) link_highlight_title_pane

0x92ea,	// (0x00055c3a) copy_highlight_digital_pane

0x92ea,	// (0x00055c3a) copy_highlight_primary_pane

0x92fb,	// (0x00055c4b) copy_highlight_primary_small_pane

0x9303,	// (0x00055c53) copy_highlight_secondary_pane

0x930b,	// (0x00055c5b) copy_highlight_title_pane

0x9303,	// (0x00055c53) graphic_text_digital_pane

0xa2d8,	// (0x00056c28) graphic_text_primary_pane

0xa2e1,	// (0x00056c31) graphic_text_primary_small_pane

0x92fb,	// (0x00055c4b) graphic_text_secondary_pane

0x92ea,	// (0x00055c3a) graphic_text_title_pane

0x9313,	// (0x00055c63) cursor_primary_pane_g1

0xa2ca,	// (0x00056c1a) cursor_text_primary_t1

0xa2b2,	// (0x00056c02) cursor_primary_small_pane_g1

0xa2bc,	// (0x00056c0c) cursor_text_primary_small_t1

0xa29a,	// (0x00056bea) cursor_primary_small_pane_g1_copy1

0xa2a4,	// (0x00056bf4) cursor_text_primary_small_t1_copy1

0xa282,	// (0x00056bd2) cursor_text_title_t1

0xa290,	// (0x00056be0) cursor_title_pane_g1

0x9313,	// (0x00055c63) cursor_digital_pane_g1

0x931d,	// (0x00055c6d) cursor_text_digital_t1

0x9342,	// (0x00055c92) link_highlight_primary_pane_g1

0xa22b,	// (0x00056b7b) link_highlight_primary_pane_t1

0x932b,	// (0x00055c7b) link_highlight_primary_small_pane_g1

0x9333,	// (0x00055c83) link_highlight_primary_small_pane_t1

0x9342,	// (0x00055c92) link_highlight_secondary_pane_g1

0x934a,	// (0x00055c9a) link_highlight_secondary_pane_t1

0xa19f,	// (0x00056aef) link_highlight_title_pane_g1

0xa1a7,	// (0x00056af7) link_highlight_title_pane_t1

0xa188,	// (0x00056ad8) link_highlight_digital_pane_g1

0xa190,	// (0x00056ae0) link_highlight_digital_pane_t1

0xa060,	// (0x000569b0) copy_highlight_primary_pane_g1

0xa068,	// (0x000569b8) copy_highlight_primary_pane_t1

0xa03a,	// (0x0005698a) copy_highlight_primary_small_pane_g1

0xa051,	// (0x000569a1) copy_highlight_primary_small_pane_t1

0x9359,	// (0x00055ca9) copy_highlight_secondary_pane_g1

0x9361,	// (0x00055cb1) copy_highlight_secondary_pane_t1

0xa03a,	// (0x0005698a) copy_highlight_title_pane_g1

0xa042,	// (0x00056992) copy_highlight_title_pane_t1

0xa060,	// (0x000569b0) copy_highlight_digital_pane_g1

0xb2e5,	// (0x00057c35) copy_highlight_digital_pane_t1

0xb239,	// (0x00057b89) graphic_text_primary_pane_g1

0xb2c9,	// (0x00057c19) graphic_text_primary_pane_t1

0xb2d7,	// (0x00057c27) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0005c2f9) graphic_text_primary_pane_t

0xb2a5,	// (0x00057bf5) graphic_text_primary_small_pane_g1

0xb2ad,	// (0x00057bfd) graphic_text_primary_small_pane_t1

0xb2bb,	// (0x00057c0b) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0005c2f4) graphic_text_primary_small_pane_t

0xb281,	// (0x00057bd1) graphic_text_secondary_pane_g1

0xb289,	// (0x00057bd9) graphic_text_secondary_pane_t1

0xb297,	// (0x00057be7) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0005c2ef) graphic_text_secondary_pane_t

0xb25d,	// (0x00057bad) graphic_text_title_pane_g1

0xb265,	// (0x00057bb5) graphic_text_title_pane_t1

0xb273,	// (0x00057bc3) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0005c2ea) graphic_text_title_pane_t

0xb239,	// (0x00057b89) graphic_text_digital_pane_g1

0xb241,	// (0x00057b91) graphic_text_digital_pane_t1

0xb24f,	// (0x00057b9f) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0005c2e5) graphic_text_digital_pane_t

0x7832,	// (0x00054182) navi_icon_pane_srt_ParamLimits

0x7832,	// (0x00054182) navi_icon_pane_srt

0x7752,	// (0x000540a2) navi_midp_pane_srt

0x7752,	// (0x000540a2) navi_navi_pane_srt

0x7832,	// (0x00054182) navi_text_pane_srt_ParamLimits

0x7832,	// (0x00054182) navi_text_pane_srt

0xb204,	// (0x00057b54) navi_navi_icon_text_pane_srt

0xb20c,	// (0x00057b5c) navi_navi_pane_srt_g1_ParamLimits

0xb20c,	// (0x00057b5c) navi_navi_pane_srt_g1

0xb21e,	// (0x00057b6e) navi_navi_pane_srt_g2_ParamLimits

0xb21e,	// (0x00057b6e) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0005c2e0) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0005c2e0) navi_navi_pane_srt_g

0xb230,	// (0x00057b80) navi_navi_tabs_pane_srt

0xb204,	// (0x00057b54) navi_navi_text_pane_srt

0xb204,	// (0x00057b54) navi_navi_volume_pane_srt

0xb1f5,	// (0x00057b45) navi_navi_text_pane_srt_t1

0x624f,	// (0x00052b9f) navi_navi_volume_pane_srt_g1

0x6257,	// (0x00052ba7) volume_small_pane_srt_ParamLimits

0x6257,	// (0x00052ba7) volume_small_pane_srt

0x54de,	// (0x00051e2e) volume_small_pane_srt_g1_ParamLimits

0x54de,	// (0x00051e2e) volume_small_pane_srt_g1

0x54ee,	// (0x00051e3e) volume_small_pane_srt_g2_ParamLimits

0x54ee,	// (0x00051e3e) volume_small_pane_srt_g2

0x54ff,	// (0x00051e4f) volume_small_pane_srt_g3_ParamLimits

0x54ff,	// (0x00051e4f) volume_small_pane_srt_g3

0x5510,	// (0x00051e60) volume_small_pane_srt_g4_ParamLimits

0x5510,	// (0x00051e60) volume_small_pane_srt_g4

0x5521,	// (0x00051e71) volume_small_pane_srt_g5_ParamLimits

0x5521,	// (0x00051e71) volume_small_pane_srt_g5

0x5532,	// (0x00051e82) volume_small_pane_srt_g6_ParamLimits

0x5532,	// (0x00051e82) volume_small_pane_srt_g6

0x5543,	// (0x00051e93) volume_small_pane_srt_g7_ParamLimits

0x5543,	// (0x00051e93) volume_small_pane_srt_g7

0x5554,	// (0x00051ea4) volume_small_pane_srt_g8_ParamLimits

0x5554,	// (0x00051ea4) volume_small_pane_srt_g8

0x5565,	// (0x00051eb5) volume_small_pane_srt_g9_ParamLimits

0x5565,	// (0x00051eb5) volume_small_pane_srt_g9

0x5576,	// (0x00051ec6) volume_small_pane_srt_g10_ParamLimits

0x5576,	// (0x00051ec6) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0005c08d) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0005c08d) volume_small_pane_srt_g

0x7c32,	// (0x00054582) query_popup_data_pane_cp2

0xb1db,	// (0x00057b2b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1db,	// (0x00057b2b) navi_navi_icon_text_pane_srt_t1

0xa2d8,	// (0x00056c28) navi_tabs_2_long_pane_srt

0xa2d8,	// (0x00056c28) navi_tabs_2_pane_srt

0xa2d8,	// (0x00056c28) navi_tabs_3_long_pane_srt

0xa2d8,	// (0x00056c28) navi_tabs_3_pane_srt

0xa2d8,	// (0x00056c28) navi_tabs_4_pane_srt

0x622f,	// (0x00052b7f) tabs_2_active_pane_srt_ParamLimits

0x622f,	// (0x00052b7f) tabs_2_active_pane_srt

0x623f,	// (0x00052b8f) tabs_2_passive_pane_srt_ParamLimits

0x623f,	// (0x00052b8f) tabs_2_passive_pane_srt

0x94e0,	// (0x00055e30) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94e0,	// (0x00055e30) bg_passive_tab_pane_cp1_srt

0xb1a7,	// (0x00057af7) bg_passive_tab_pane_g1_cp1_srt

0x8e07,	// (0x00055757) bg_passive_tab_pane_g2_cp1_srt

0xb1b0,	// (0x00057b00) bg_passive_tab_pane_g3_cp1_srt

0x7832,	// (0x00054182) bg_active_tab_pane_cp1_srt_ParamLimits

0x7832,	// (0x00054182) bg_active_tab_pane_cp1_srt

0xb1b9,	// (0x00057b09) tabs_2_active_pane_srt_g1

0xb1c1,	// (0x00057b11) tabs_2_active_pane_srt_t1_ParamLimits

0xb1c1,	// (0x00057b11) tabs_2_active_pane_srt_t1

0xb1a7,	// (0x00057af7) bg_active_tab_pane_g1_cp1_srt

0x8e07,	// (0x00055757) bg_active_tab_pane_g2_cp1_srt

0xb1b0,	// (0x00057b00) bg_active_tab_pane_g3_cp1_srt

0x61fc,	// (0x00052b4c) tabs_3_active_pane_srt_ParamLimits

0x61fc,	// (0x00052b4c) tabs_3_active_pane_srt

0x620d,	// (0x00052b5d) tabs_3_passive_pane_cp_srt_ParamLimits

0x620d,	// (0x00052b5d) tabs_3_passive_pane_cp_srt

0x621e,	// (0x00052b6e) tabs_3_passive_pane_srt_ParamLimits

0x621e,	// (0x00052b6e) tabs_3_passive_pane_srt

0x94e0,	// (0x00055e30) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94e0,	// (0x00055e30) bg_passive_tab_pane_cp2_srt

0x9370,	// (0x00055cc0) bg_passive_tab_pane_g1_cp2_srt

0x8e07,	// (0x00055757) bg_passive_tab_pane_g2_cp2_srt

0x9379,	// (0x00055cc9) bg_passive_tab_pane_g3_cp2_srt

0x7832,	// (0x00054182) bg_active_tab_pane_cp2_srt_ParamLimits

0x7832,	// (0x00054182) bg_active_tab_pane_cp2_srt

0xb18d,	// (0x00057add) tabs_3_active_pane_srt_g1

0xb195,	// (0x00057ae5) tabs_3_active_pane_srt_t1_ParamLimits

0xb195,	// (0x00057ae5) tabs_3_active_pane_srt_t1

0x9370,	// (0x00055cc0) bg_active_tab_pane_g1_cp2_srt

0x8e07,	// (0x00055757) bg_active_tab_pane_g2_cp2_srt

0x9379,	// (0x00055cc9) bg_active_tab_pane_g3_cp2_srt

0x61b4,	// (0x00052b04) tabs_4_active_pane_srt_ParamLimits

0x61b4,	// (0x00052b04) tabs_4_active_pane_srt

0x61c6,	// (0x00052b16) tabs_4_passive_pane_cp2_srt_ParamLimits

0x61c6,	// (0x00052b16) tabs_4_passive_pane_cp2_srt

0x56e5,	// (0x00052035) aid_size_cell_toolbar

0x8711,	// (0x00055061) main_idle_act_pane_ParamLimits

0x58b2,	// (0x00052202) popup_large_graphic_colour_window_ParamLimits

0x5c19,	// (0x00052569) popup_toolbar_window_ParamLimits

0x5c19,	// (0x00052569) popup_toolbar_window

0xafab,	// (0x000578fb) list_single_graphic_2heading_pane_ParamLimits

0xafab,	// (0x000578fb) list_single_graphic_2heading_pane

0x88cd,	// (0x0005521d) aid_size_cell_apps_grid_lsc_pane

0x88df,	// (0x0005522f) aid_size_cell_apps_grid_prt_pane

0x94e0,	// (0x00055e30) bg_wml_button_pane_cp1_ParamLimits

0x94e0,	// (0x00055e30) bg_wml_button_pane_cp1

0x9cae,	// (0x000565fe) form_midp_field_text_pane_t1_ParamLimits

0x9a7e,	// (0x000563ce) input_focus_pane_cp050_ParamLimits

0x9ce5,	// (0x00056635) list_midp_form_text_pane_ParamLimits

0x9c8b,	// (0x000565db) input_focus_pane_cp051_ParamLimits

0x9c9f,	// (0x000565ef) list_midp_choice_pane_ParamLimits

0x9b37,	// (0x00056487) list_single_2graphic_pane_cp3_ParamLimits

0x9b37,	// (0x00056487) list_single_2graphic_pane_cp3

0x9b58,	// (0x000564a8) list_single_midp_graphic_pane_ParamLimits

0x9b58,	// (0x000564a8) list_single_midp_graphic_pane

0x4581,	// (0x00050ed1) list_single_graphic_2heading_pane_g1_ParamLimits

0x4581,	// (0x00050ed1) list_single_graphic_2heading_pane_g1

0x458d,	// (0x00050edd) list_single_graphic_2heading_pane_g4_ParamLimits

0x458d,	// (0x00050edd) list_single_graphic_2heading_pane_g4

0x4599,	// (0x00050ee9) list_single_graphic_2heading_pane_g5_ParamLimits

0x4599,	// (0x00050ee9) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0005c0e0) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0005c0e0) list_single_graphic_2heading_pane_g

0x45a5,	// (0x00050ef5) list_single_graphic_2heading_pane_t1_ParamLimits

0x45a5,	// (0x00050ef5) list_single_graphic_2heading_pane_t1

0x45b9,	// (0x00050f09) list_single_graphic_2heading_pane_t2_ParamLimits

0x45b9,	// (0x00050f09) list_single_graphic_2heading_pane_t2

0x45d5,	// (0x00050f25) list_single_graphic_2heading_pane_t3_ParamLimits

0x45d5,	// (0x00050f25) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0005c0e7) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0005c0e7) list_single_graphic_2heading_pane_t

0x9948,	// (0x00056298) bg_popup_sub_pane_cp2

0x9972,	// (0x000562c2) grid_toobar_pane

0x5cc6,	// (0x00052616) cell_toolbar_pane_ParamLimits

0x5cc6,	// (0x00052616) cell_toolbar_pane

0x99ae,	// (0x000562fe) cell_toolbar_pane_g1_ParamLimits

0x99ae,	// (0x000562fe) cell_toolbar_pane_g1

0x99c2,	// (0x00056312) cell_toolbar_pane_g2_ParamLimits

0x99c2,	// (0x00056312) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x0005c0f5) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x0005c0f5) cell_toolbar_pane_g

0x99e4,	// (0x00056334) grid_highlight_pane_cp2_ParamLimits

0x99e4,	// (0x00056334) grid_highlight_pane_cp2

0x99fe,	// (0x0005634e) toolbar_button_pane

0x9a0a,	// (0x0005635a) toolbar_button_pane_g1

0x9a12,	// (0x00056362) toolbar_button_pane_g2

0x9a1a,	// (0x0005636a) toolbar_button_pane_g3

0x9a22,	// (0x00056372) toolbar_button_pane_g4

0x9a2a,	// (0x0005637a) toolbar_button_pane_g5

0x9a32,	// (0x00056382) toolbar_button_pane_g6

0x9a3a,	// (0x0005638a) toolbar_button_pane_g7

0x9a42,	// (0x00056392) toolbar_button_pane_g8

0x9a4a,	// (0x0005639a) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x0005c0fa) toolbar_button_pane_g

0x5d20,	// (0x00052670) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5d20,	// (0x00052670) list_single_2graphic_pane_g1_cp3

0x5d2c,	// (0x0005267c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5d2c,	// (0x0005267c) list_single_2graphic_pane_g2_cp3

0x5d3d,	// (0x0005268d) list_single_2graphic_pane_g3_cp3

0x5d45,	// (0x00052695) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5d45,	// (0x00052695) list_single_2graphic_pane_g4_cp3

0x5d51,	// (0x000526a1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5d51,	// (0x000526a1) list_single_2graphic_pane_t1_cp3

0x5d95,	// (0x000526e5) list_single_midp_graphic_pane_g2_ParamLimits

0x5d95,	// (0x000526e5) list_single_midp_graphic_pane_g2

0x4579,	// (0x00050ec9) aid_zoom_text_primary

0x56ed,	// (0x0005203d) aid_zoom_text_secondary

0x942a,	// (0x00055d7a) status_small_pane_g7_ParamLimits

0x942a,	// (0x00055d7a) status_small_pane_g7

0x944d,	// (0x00055d9d) status_small_pane_t1_ParamLimits

0x7769,	// (0x000540b9) title_pane_g2

0x0003,

0xf529,	// (0x0005be79) title_pane_g

0x7cda,	// (0x0005462a) aid_size_cell_colour_1_pane_ParamLimits

0x7cda,	// (0x0005462a) aid_size_cell_colour_1_pane

0x7cee,	// (0x0005463e) aid_size_cell_colour_2_pane_ParamLimits

0x7cee,	// (0x0005463e) aid_size_cell_colour_2_pane

0x7d02,	// (0x00054652) aid_size_cell_colour_3_pane_ParamLimits

0x7d02,	// (0x00054652) aid_size_cell_colour_3_pane

0x7d16,	// (0x00054666) aid_size_cell_colour_4_pane_ParamLimits

0x7d16,	// (0x00054666) aid_size_cell_colour_4_pane

0x50cd,	// (0x00051a1d) title_pane_stacon_g1_ParamLimits

0x50cd,	// (0x00051a1d) title_pane_stacon_g1

0xa0bf,	// (0x00056a0f) popup_note_wait_window_g3_ParamLimits

0xa0bf,	// (0x00056a0f) popup_note_wait_window_g3

0xa135,	// (0x00056a85) popup_note_wait_window_t5_ParamLimits

0xa135,	// (0x00056a85) popup_note_wait_window_t5

0x7752,	// (0x000540a2) main_feb_china_hwr_fs_writing_pane

0x5793,	// (0x000520e3) popup_feb_china_hwr_fs_window_ParamLimits

0x5793,	// (0x000520e3) popup_feb_china_hwr_fs_window

0x5e23,	// (0x00052773) aid_size_cell_hwr_fs_ParamLimits

0x5e23,	// (0x00052773) aid_size_cell_hwr_fs

0x9a7e,	// (0x000563ce) bg_popup_sub_pane_cp3_ParamLimits

0x9a7e,	// (0x000563ce) bg_popup_sub_pane_cp3

0x5e38,	// (0x00052788) grid_hwr_fs_pane_ParamLimits

0x5e38,	// (0x00052788) grid_hwr_fs_pane

0x5e50,	// (0x000527a0) linegrid_hwr_fs_pane_ParamLimits

0x5e50,	// (0x000527a0) linegrid_hwr_fs_pane

0x5e60,	// (0x000527b0) cell_hwr_fs_pane_ParamLimits

0x5e60,	// (0x000527b0) cell_hwr_fs_pane

0x9a8a,	// (0x000563da) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a8a,	// (0x000563da) linegrid_hwr_fs_pane_g1

0x9a96,	// (0x000563e6) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a96,	// (0x000563e6) linegrid_hwr_fs_pane_g2

0x9aa8,	// (0x000563f8) linegrid_hwr_fs_pane_g3_ParamLimits

0x9aa8,	// (0x000563f8) linegrid_hwr_fs_pane_g3

0x5e82,	// (0x000527d2) linegrid_hwr_fs_pane_g4_ParamLimits

0x5e82,	// (0x000527d2) linegrid_hwr_fs_pane_g4

0x5e9c,	// (0x000527ec) linegrid_hwr_fs_pane_g5_ParamLimits

0x5e9c,	// (0x000527ec) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0005c120) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0005c120) linegrid_hwr_fs_pane_g

0x9ab4,	// (0x00056404) cell_hwr_fs_pane_g1_ParamLimits

0x9ab4,	// (0x00056404) cell_hwr_fs_pane_g1

0x987f,	// (0x000561cf) cell_hwr_fs_pane_g2_ParamLimits

0x987f,	// (0x000561cf) cell_hwr_fs_pane_g2

0x9aca,	// (0x0005641a) cell_hwr_fs_pane_g3_ParamLimits

0x9aca,	// (0x0005641a) cell_hwr_fs_pane_g3

0x9ad7,	// (0x00056427) cell_hwr_fs_pane_g4_ParamLimits

0x9ad7,	// (0x00056427) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0005c12b) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0005c12b) cell_hwr_fs_pane_g

0x5eb2,	// (0x00052802) cell_hwr_fs_pane_t1

0x7752,	// (0x000540a2) grid_highlight_pane_cp6

0x7752,	// (0x000540a2) main_idle_act2_pane

0x8684,	// (0x00054fd4) aid_inside_area_popup_secondary

0xa76c,	// (0x000570bc) aid_inside_area_window_primary_ParamLimits

0xa76c,	// (0x000570bc) aid_inside_area_window_primary

0xb2f4,	// (0x00057c44) ai2_news_ticker_pane

0xb2fc,	// (0x00057c4c) aid_size_cell_ai1_link_ParamLimits

0xb2fc,	// (0x00057c4c) aid_size_cell_ai1_link

0xb316,	// (0x00057c66) popup_ai2_data_window_ParamLimits

0xb316,	// (0x00057c66) popup_ai2_data_window

0xb32c,	// (0x00057c7c) popup_ai2_link_window_ParamLimits

0xb32c,	// (0x00057c7c) popup_ai2_link_window

0x9a7e,	// (0x000563ce) bg_popup_sub_pane_cp4_ParamLimits

0x9a7e,	// (0x000563ce) bg_popup_sub_pane_cp4

0xb340,	// (0x00057c90) grid_ai2_link_pane_ParamLimits

0xb340,	// (0x00057c90) grid_ai2_link_pane

0xb357,	// (0x00057ca7) popup_ai2_link_window_g1_ParamLimits

0xb357,	// (0x00057ca7) popup_ai2_link_window_g1

0xb363,	// (0x00057cb3) popup_ai2_link_window_g2_ParamLimits

0xb363,	// (0x00057cb3) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0005c2fe) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0005c2fe) popup_ai2_link_window_g

0xb372,	// (0x00057cc2) ai2_mp_button_pane

0xb37a,	// (0x00057cca) ai2_mp_volume_pane

0x9c8b,	// (0x000565db) bg_popup_sub_pane_cp5_ParamLimits

0x9c8b,	// (0x000565db) bg_popup_sub_pane_cp5

0xb382,	// (0x00057cd2) heading_ai2_gene_pane_ParamLimits

0xb382,	// (0x00057cd2) heading_ai2_gene_pane

0xb38e,	// (0x00057cde) list_ai2_gene_pane_ParamLimits

0xb38e,	// (0x00057cde) list_ai2_gene_pane

0xb3d6,	// (0x00057d26) cell_ai2_link_pane_ParamLimits

0xb3d6,	// (0x00057d26) cell_ai2_link_pane

0xb3ec,	// (0x00057d3c) cell_ai2_link_pane_g1

0x7752,	// (0x000540a2) grid_highlight_pane_cp7

0x626c,	// (0x00052bbc) ai2_mp_volume_pane_g1

0xb4bc,	// (0x00057e0c) ai2_mp_volume_pane_g2

0xb431,	// (0x00057d81) list_ai2_gene_pane_t1

0xb4c4,	// (0x00057e14) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0005c317) ai2_mp_volume_pane_g

0x6274,	// (0x00052bc4) volume_small_pane_cp3

0xb4cc,	// (0x00057e1c) aid_size_cell_ai2_button

0xb4d4,	// (0x00057e24) grid_ai2_button_pane

0xb4dd,	// (0x00057e2d) cell_ai2_button_pane_ParamLimits

0xb4dd,	// (0x00057e2d) cell_ai2_button_pane

0x27e1,	// (0x0004f131) cell_ai2_button_pane_g1

0x7752,	// (0x000540a2) grid_highlight_pane_cp8

0xb47c,	// (0x00057dcc) ai2_gene_pane_t1_ParamLimits

0xb47c,	// (0x00057dcc) ai2_gene_pane_t1

0x56db,	// (0x0005202b) aid_height_parent_landscape

0xade2,	// (0x00057732) aid_height_set_list

0xadf3,	// (0x00057743) aid_size_parent

0xb117,	// (0x00057a67) aid_size_cell_graphic_pane_ParamLimits

0xb39e,	// (0x00057cee) popup_ai2_data_window_g1_ParamLimits

0xb39e,	// (0x00057cee) popup_ai2_data_window_g1

0xb3aa,	// (0x00057cfa) ai2_news_ticker_pane_g1

0xb3b2,	// (0x00057d02) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0005c303) ai2_news_ticker_pane_g

0xb3ba,	// (0x00057d0a) ai2_news_ticker_pane_t1

0xb3c8,	// (0x00057d18) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0005c308) ai2_news_ticker_pane_t

0xb3f5,	// (0x00057d45) heading_ai2_gene_pane_g1

0xb3fd,	// (0x00057d4d) heading_ai2_gene_pane_t1_ParamLimits

0xb3fd,	// (0x00057d4d) heading_ai2_gene_pane_t1

0xb412,	// (0x00057d62) list_highlight_pane_cp6

0xb41a,	// (0x00057d6a) ai2_gene_pane_ParamLimits

0xb41a,	// (0x00057d6a) ai2_gene_pane

0xb43f,	// (0x00057d8f) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0005c30d) list_ai2_gene_pane_t

0xb44d,	// (0x00057d9d) list_highlight_pane_cp8_ParamLimits

0xb44d,	// (0x00057d9d) list_highlight_pane_cp8

0xb45e,	// (0x00057dae) ai2_gene_pane_g1_ParamLimits

0xb45e,	// (0x00057dae) ai2_gene_pane_g1

0xb470,	// (0x00057dc0) ai2_gene_pane_g2_ParamLimits

0xb470,	// (0x00057dc0) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0005c312) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0005c312) ai2_gene_pane_g

0x84a7,	// (0x00054df7) scroll_pane_cp12

0x5698,	// (0x00051fe8) control_pane_t3_ParamLimits

0x5698,	// (0x00051fe8) control_pane_t3

0x943e,	// (0x00055d8e) status_small_pane_g8_ParamLimits

0x943e,	// (0x00055d8e) status_small_pane_g8

0x5879,	// (0x000521c9) popup_find_window_ParamLimits

0x5a90,	// (0x000523e0) popup_note_image_window_ParamLimits

0x5cf6,	// (0x00052646) list_double2_graphic_pane_vc_g1_ParamLimits

0x5cf6,	// (0x00052646) list_double2_graphic_pane_vc_g1

0x84b8,	// (0x00054e08) list_double2_graphic_pane_vc_g2_ParamLimits

0x84b8,	// (0x00054e08) list_double2_graphic_pane_vc_g2

0x7fee,	// (0x0005493e) list_double2_graphic_pane_vc_g3_ParamLimits

0x7fee,	// (0x0005493e) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0005c0ee) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0005c0ee) list_double2_graphic_pane_vc_g

0x5d02,	// (0x00052652) list_double2_graphic_pane_vc_t1_ParamLimits

0x5d02,	// (0x00052652) list_double2_graphic_pane_vc_t1

0x84b8,	// (0x00054e08) list_single_heading_pane_vc_g1_ParamLimits

0x84b8,	// (0x00054e08) list_single_heading_pane_vc_g1

0x7fee,	// (0x0005493e) list_single_heading_pane_vc_g2_ParamLimits

0x7fee,	// (0x0005493e) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005befd) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005befd) list_single_heading_pane_vc_g

0x5d6d,	// (0x000526bd) list_single_heading_pane_vc_t1_ParamLimits

0x5d6d,	// (0x000526bd) list_single_heading_pane_vc_t1

0x5d83,	// (0x000526d3) list_single_heading_pane_vc_t2_ParamLimits

0x5d83,	// (0x000526d3) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0005c10f) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0005c10f) list_single_heading_pane_vc_t

0x8095,	// (0x000549e5) list_setting_number_pane_vc_g1_ParamLimits

0x8095,	// (0x000549e5) list_setting_number_pane_vc_g1

0x80a1,	// (0x000549f1) list_setting_number_pane_vc_g2_ParamLimits

0x80a1,	// (0x000549f1) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0005c114) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0005c114) list_setting_number_pane_vc_g

0x5db7,	// (0x00052707) list_setting_number_pane_vc_t1_ParamLimits

0x5db7,	// (0x00052707) list_setting_number_pane_vc_t1

0x5dcb,	// (0x0005271b) list_setting_number_pane_vc_t2_ParamLimits

0x5dcb,	// (0x0005271b) list_setting_number_pane_vc_t2

0x5de7,	// (0x00052737) list_setting_number_pane_vc_t3_ParamLimits

0x5de7,	// (0x00052737) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0005c119) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0005c119) list_setting_number_pane_vc_t

0x5e13,	// (0x00052763) set_value_pane_vc_ParamLimits

0x5e13,	// (0x00052763) set_value_pane_vc

0xafab,	// (0x000578fb) list_double2_graphic_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_double2_graphic_pane_vc

0xafab,	// (0x000578fb) list_double2_large_graphic_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_double2_large_graphic_pane_vc

0xafab,	// (0x000578fb) list_double2_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_double2_pane_vc

0xafab,	// (0x000578fb) list_double_graphic_heading_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_double_graphic_heading_pane_vc

0xafab,	// (0x000578fb) list_double_graphic_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_double_graphic_pane_vc

0xafab,	// (0x000578fb) list_double_heading_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_double_heading_pane_vc

0xafbd,	// (0x0005790d) list_double_large_graphic_pane_vc_ParamLimits

0xafbd,	// (0x0005790d) list_double_large_graphic_pane_vc

0xafab,	// (0x000578fb) list_double_number_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_double_number_pane_vc

0xafab,	// (0x000578fb) list_double_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_double_pane_vc

0xafab,	// (0x000578fb) list_double_time_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_double_time_pane_vc

0xafab,	// (0x000578fb) list_setting_number_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_setting_number_pane_vc

0xafab,	// (0x000578fb) list_setting_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_setting_pane_vc

0xafab,	// (0x000578fb) list_single_graphic_heading_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_single_graphic_heading_pane_vc

0xafab,	// (0x000578fb) list_single_heading_pane_vc_ParamLimits

0xafab,	// (0x000578fb) list_single_heading_pane_vc

0x80c8,	// (0x00054a18) list_single_number_heading_pane_vc_ParamLimits

0x80c8,	// (0x00054a18) list_single_number_heading_pane_vc

0x5cf6,	// (0x00052646) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5cf6,	// (0x00052646) list_double_graphic_heading_pane_vc_g1

0x84b8,	// (0x00054e08) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x84b8,	// (0x00054e08) list_double_graphic_heading_pane_vc_g2

0x7fee,	// (0x0005493e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7fee,	// (0x0005493e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x0005c0ee) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0005c0ee) list_double_graphic_heading_pane_vc_g

0x627d,	// (0x00052bcd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x627d,	// (0x00052bcd) list_double_graphic_heading_pane_vc_t1

0x6299,	// (0x00052be9) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6299,	// (0x00052be9) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x0005c31e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x0005c31e) list_double_graphic_heading_pane_vc_t

0x8095,	// (0x000549e5) list_setting_pane_vc_g1_ParamLimits

0x8095,	// (0x000549e5) list_setting_pane_vc_g1

0x80a1,	// (0x000549f1) list_setting_pane_vc_g2_ParamLimits

0x80a1,	// (0x000549f1) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0005c114) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0005c114) list_setting_pane_vc_g

0x62b7,	// (0x00052c07) list_setting_pane_vc_t1_ParamLimits

0x62b7,	// (0x00052c07) list_setting_pane_vc_t1

0x62d3,	// (0x00052c23) list_setting_pane_vc_t2_ParamLimits

0x62d3,	// (0x00052c23) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x0005c34c) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x0005c34c) list_setting_pane_vc_t

0x5e13,	// (0x00052763) set_value_pane_cp_vc_ParamLimits

0x5e13,	// (0x00052763) set_value_pane_cp_vc

0x84b8,	// (0x00054e08) list_single_number_heading_pane_vc_g1_ParamLimits

0x84b8,	// (0x00054e08) list_single_number_heading_pane_vc_g1

0x7fee,	// (0x0005493e) list_single_number_heading_pane_vc_g2_ParamLimits

0x7fee,	// (0x0005493e) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005befd) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005befd) list_single_number_heading_pane_vc_g

0x62ef,	// (0x00052c3f) list_single_number_heading_pane_vc_t1_ParamLimits

0x62ef,	// (0x00052c3f) list_single_number_heading_pane_vc_t1

0x3b27,	// (0x00050477) list_single_number_heading_pane_vc_t2_ParamLimits

0x3b27,	// (0x00050477) list_single_number_heading_pane_vc_t2

0x3b39,	// (0x00050489) list_single_number_heading_pane_vc_t3_ParamLimits

0x3b39,	// (0x00050489) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x0005c351) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0005c351) list_single_number_heading_pane_vc_t

0x5cf6,	// (0x00052646) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5cf6,	// (0x00052646) list_single_graphic_heading_pane_vc_g1

0x84b8,	// (0x00054e08) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x84b8,	// (0x00054e08) list_single_graphic_heading_pane_vc_g4

0x7fee,	// (0x0005493e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7fee,	// (0x0005493e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0005c0ee) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0005c0ee) list_single_graphic_heading_pane_vc_g

0x62ef,	// (0x00052c3f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x62ef,	// (0x00052c3f) list_single_graphic_heading_pane_vc_t1

0x6305,	// (0x00052c55) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6305,	// (0x00052c55) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x0005c358) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0005c358) list_single_graphic_heading_pane_vc_t

0x84b8,	// (0x00054e08) list_double2_pane_vc_g1_ParamLimits

0x84b8,	// (0x00054e08) list_double2_pane_vc_g1

0x7fee,	// (0x0005493e) list_double2_pane_vc_g2_ParamLimits

0x7fee,	// (0x0005493e) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005befd) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005befd) list_double2_pane_vc_g

0x6167,	// (0x00052ab7) list_double2_pane_vc_t1_ParamLimits

0x6167,	// (0x00052ab7) list_double2_pane_vc_t1

0x8124,	// (0x00054a74) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x8124,	// (0x00054a74) list_double2_large_graphic_pane_vc_g1

0x84b8,	// (0x00054e08) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x84b8,	// (0x00054e08) list_double2_large_graphic_pane_vc_g2

0x7fee,	// (0x0005493e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7fee,	// (0x0005493e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0d,	// (0x0005c35d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0d,	// (0x0005c35d) list_double2_large_graphic_pane_vc_g

0x6317,	// (0x00052c67) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6317,	// (0x00052c67) list_double2_large_graphic_pane_vc_t1

0x8130,	// (0x00054a80) list_double_time_pane_vc_g1_ParamLimits

0x8130,	// (0x00054a80) list_double_time_pane_vc_g1

0x813c,	// (0x00054a8c) list_double_time_pane_vc_g2_ParamLimits

0x813c,	// (0x00054a8c) list_double_time_pane_vc_g2

0x0001,

0xfa14,	// (0x0005c364) list_double_time_pane_vc_g_ParamLimits

0xfa14,	// (0x0005c364) list_double_time_pane_vc_g

0x632d,	// (0x00052c7d) list_double_time_pane_vc_t1_ParamLimits

0x632d,	// (0x00052c7d) list_double_time_pane_vc_t1

0x6351,	// (0x00052ca1) list_double_time_pane_vc_t2_ParamLimits

0x6351,	// (0x00052ca1) list_double_time_pane_vc_t2

0x63a0,	// (0x00052cf0) list_double_time_pane_vc_t3_ParamLimits

0x63a0,	// (0x00052cf0) list_double_time_pane_vc_t3

0x63b2,	// (0x00052d02) list_double_time_pane_vc_t4_ParamLimits

0x63b2,	// (0x00052d02) list_double_time_pane_vc_t4

0x0003,

0xfa19,	// (0x0005c369) list_double_time_pane_vc_t_ParamLimits

0xfa19,	// (0x0005c369) list_double_time_pane_vc_t

0x84b8,	// (0x00054e08) list_double_pane_vc_g1_ParamLimits

0x84b8,	// (0x00054e08) list_double_pane_vc_g1

0x7fee,	// (0x0005493e) list_double_pane_vc_g2_ParamLimits

0x7fee,	// (0x0005493e) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005befd) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005befd) list_double_pane_vc_g

0x63c6,	// (0x00052d16) list_double_pane_vc_t1_ParamLimits

0x63c6,	// (0x00052d16) list_double_pane_vc_t1

0x63da,	// (0x00052d2a) list_double_pane_vc_t2_ParamLimits

0x63da,	// (0x00052d2a) list_double_pane_vc_t2

0x0001,

0xfa22,	// (0x0005c372) list_double_pane_vc_t_ParamLimits

0xfa22,	// (0x0005c372) list_double_pane_vc_t

0x84b8,	// (0x00054e08) list_double_number_pane_vc_g1_ParamLimits

0x84b8,	// (0x00054e08) list_double_number_pane_vc_g1

0x7fee,	// (0x0005493e) list_double_number_pane_vc_g2_ParamLimits

0x7fee,	// (0x0005493e) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005befd) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005befd) list_double_number_pane_vc_g

0x63f2,	// (0x00052d42) list_double_number_pane_vc_t1_ParamLimits

0x63f2,	// (0x00052d42) list_double_number_pane_vc_t1

0x6404,	// (0x00052d54) list_double_number_pane_vc_t2_ParamLimits

0x6404,	// (0x00052d54) list_double_number_pane_vc_t2

0x6418,	// (0x00052d68) list_double_number_pane_vc_t3_ParamLimits

0x6418,	// (0x00052d68) list_double_number_pane_vc_t3

0x0002,

0xfa27,	// (0x0005c377) list_double_number_pane_vc_t_ParamLimits

0xfa27,	// (0x0005c377) list_double_number_pane_vc_t

0x8148,	// (0x00054a98) list_double_large_graphic_pane_vc_g1_ParamLimits

0x8148,	// (0x00054a98) list_double_large_graphic_pane_vc_g1

0x8164,	// (0x00054ab4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x8164,	// (0x00054ab4) list_double_large_graphic_pane_vc_g2

0x8178,	// (0x00054ac8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x8178,	// (0x00054ac8) list_double_large_graphic_pane_vc_g3

0x6430,	// (0x00052d80) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6430,	// (0x00052d80) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2e,	// (0x0005c37e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0005c37e) list_double_large_graphic_pane_vc_g

0x643f,	// (0x00052d8f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x643f,	// (0x00052d8f) list_double_large_graphic_pane_vc_t1

0x645b,	// (0x00052dab) list_double_large_graphic_pane_vc_t2_ParamLimits

0x645b,	// (0x00052dab) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa37,	// (0x0005c387) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa37,	// (0x0005c387) list_double_large_graphic_pane_vc_t

0x84b8,	// (0x00054e08) list_double_heading_pane_vc_g1_ParamLimits

0x84b8,	// (0x00054e08) list_double_heading_pane_vc_g1

0x7fee,	// (0x0005493e) list_double_heading_pane_vc_g2_ParamLimits

0x7fee,	// (0x0005493e) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005befd) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005befd) list_double_heading_pane_vc_g

0x647d,	// (0x00052dcd) list_double_heading_pane_vc_t1_ParamLimits

0x647d,	// (0x00052dcd) list_double_heading_pane_vc_t1

0x6491,	// (0x00052de1) list_double_heading_pane_vc_t2_ParamLimits

0x6491,	// (0x00052de1) list_double_heading_pane_vc_t2

0x0001,

0xfa3c,	// (0x0005c38c) list_double_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0005c38c) list_double_heading_pane_vc_t

0x64a9,	// (0x00052df9) list_double_graphic_pane_vc_g1_ParamLimits

0x64a9,	// (0x00052df9) list_double_graphic_pane_vc_g1

0x8187,	// (0x00054ad7) list_double_graphic_pane_vc_g2_ParamLimits

0x8187,	// (0x00054ad7) list_double_graphic_pane_vc_g2

0x84b8,	// (0x00054e08) list_double_graphic_pane_vc_g3_ParamLimits

0x84b8,	// (0x00054e08) list_double_graphic_pane_vc_g3

0x0003,

0xfa41,	// (0x0005c391) list_double_graphic_pane_vc_g_ParamLimits

0xfa41,	// (0x0005c391) list_double_graphic_pane_vc_g

0x64b5,	// (0x00052e05) list_double_graphic_pane_vc_t1_ParamLimits

0x64b5,	// (0x00052e05) list_double_graphic_pane_vc_t1

0x64df,	// (0x00052e2f) list_double_graphic_pane_vc_t2_ParamLimits

0x64df,	// (0x00052e2f) list_double_graphic_pane_vc_t2

0x0001,

0xfa4a,	// (0x0005c39a) list_double_graphic_pane_vc_t_ParamLimits

0xfa4a,	// (0x0005c39a) list_double_graphic_pane_vc_t

0x4605,	// (0x00050f55) aid_size_cell_fastswap

0x460d,	// (0x00050f5d) aid_size_cell_touch_ParamLimits

0x460d,	// (0x00050f5d) aid_size_cell_touch

0x4872,	// (0x000511c2) popup_fast_swap_wide_window_ParamLimits

0x4872,	// (0x000511c2) popup_fast_swap_wide_window

0x4986,	// (0x000512d6) touch_pane_ParamLimits

0x4986,	// (0x000512d6) touch_pane

0x8515,	// (0x00054e65) button_value_adjust_pane_cp2

0x4e27,	// (0x00051777) button_value_adjust_pane_cp4

0x4e4b,	// (0x0005179b) form_field_data_pane_cp2

0x4e6c,	// (0x000517bc) form_field_data_wide_pane_cp2

0x899c,	// (0x000552ec) bg_scroll_pane_ParamLimits

0x522f,	// (0x00051b7f) scroll_handle_pane_ParamLimits

0x5243,	// (0x00051b93) scroll_sc2_down_pane_ParamLimits

0x5243,	// (0x00051b93) scroll_sc2_down_pane

0x89cd,	// (0x0005531d) scroll_sc2_up_pane_ParamLimits

0x89cd,	// (0x0005531d) scroll_sc2_up_pane

0xbbd1,	// (0x00058521) grid_wheel_folder_pane_g1_ParamLimits

0xbbd1,	// (0x00058521) grid_wheel_folder_pane_g1

0x5476,	// (0x00051dc6) clock_nsta_pane_cp2_ParamLimits

0x5476,	// (0x00051dc6) clock_nsta_pane_cp2

0x91c4,	// (0x00055b14) listscroll_midp_pane_ParamLimits

0x91d0,	// (0x00055b20) midp_canvas_pane

0x94b8,	// (0x00055e08) nsta_clock_indic_pane

0x94ec,	// (0x00055e3c) listscroll_form_pane_vc

0x94f4,	// (0x00055e44) listscroll_set_pane_vc_ParamLimits

0x94f4,	// (0x00055e44) listscroll_set_pane_vc

0x95ed,	// (0x00055f3d) clock_nsta_pane

0x9668,	// (0x00055fb8) indicator_nsta_pane

0x9948,	// (0x00056298) bg_popup_sub_pane_cp2_ParamLimits

0x995c,	// (0x000562ac) find_pane_cp2_ParamLimits

0x995c,	// (0x000562ac) find_pane_cp2

0x9972,	// (0x000562c2) grid_toobar_pane_ParamLimits

0x9a52,	// (0x000563a2) list_form_gen_pane_vc_ParamLimits

0x9a52,	// (0x000563a2) list_form_gen_pane_vc

0x9a68,	// (0x000563b8) scroll_pane_cp8_vc_ParamLimits

0x9a68,	// (0x000563b8) scroll_pane_cp8_vc

0x9ae4,	// (0x00056434) data_form_wide_pane_vc_ParamLimits

0x9ae4,	// (0x00056434) data_form_wide_pane_vc

0x9af0,	// (0x00056440) form_field_data_wide_pane_vc_g1

0x9af8,	// (0x00056448) form_field_data_wide_pane_vc_t1_ParamLimits

0x9af8,	// (0x00056448) form_field_data_wide_pane_vc_t1

0x8529,	// (0x00054e79) input_focus_pane_cp6_vc_ParamLimits

0x8529,	// (0x00054e79) input_focus_pane_cp6_vc

0x9e1e,	// (0x0005676e) list_midp_pane_ParamLimits

0x9e2a,	// (0x0005677a) scroll_pane_cp16_ParamLimits

0x9e2a,	// (0x0005677a) scroll_pane_cp16

0x9e94,	// (0x000567e4) button_value_adjust_pane_ParamLimits

0x9e94,	// (0x000567e4) button_value_adjust_pane

0xae05,	// (0x00057755) button_value_adjust_pane_cp6_ParamLimits

0xae05,	// (0x00057755) button_value_adjust_pane_cp6

0xaf2f,	// (0x0005787f) settings_code_pane_cp_ParamLimits

0xaf2f,	// (0x0005787f) settings_code_pane_cp

0x27e1,	// (0x0004f131) cell_touch_pane_g1

0x27e1,	// (0x0004f131) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0005c033) cell_touch_pane_g

0xb4ef,	// (0x00057e3f) cell_touch_pane_cp_ParamLimits

0xb4ef,	// (0x00057e3f) cell_touch_pane_cp

0xb4ff,	// (0x00057e4f) cell_touch_pane_ParamLimits

0xb4ff,	// (0x00057e4f) cell_touch_pane

0x27e1,	// (0x0004f131) scroll_sc2_down_pane_g1

0x27e1,	// (0x0004f131) scroll_sc2_up_pane_g1

0x7752,	// (0x000540a2) bg_set_opt_pane_cp4_vc

0xb511,	// (0x00057e61) list_set_graphic_pane_vc_g1_ParamLimits

0xb511,	// (0x00057e61) list_set_graphic_pane_vc_g1

0xb51d,	// (0x00057e6d) list_set_graphic_pane_vc_g2_ParamLimits

0xb51d,	// (0x00057e6d) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x0005c323) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x0005c323) list_set_graphic_pane_vc_g

0xb529,	// (0x00057e79) text_primary_small_cp13_vc_ParamLimits

0xb529,	// (0x00057e79) text_primary_small_cp13_vc

0xb541,	// (0x00057e91) list_set_graphic_pane_vc_ParamLimits

0xb541,	// (0x00057e91) list_set_graphic_pane_vc

0x7752,	// (0x000540a2) input_focus_pane_cp2_vc

0x27e1,	// (0x0004f131) setting_code_pane_vc_g1

0x787d,	// (0x000541cd) setting_code_pane_vc_t1

0xb554,	// (0x00057ea4) set_text_pane_vc_t1_ParamLimits

0xb554,	// (0x00057ea4) set_text_pane_vc_t1

0x7752,	// (0x000540a2) input_focus_pane_cp1_vc

0xb570,	// (0x00057ec0) list_set_text_pane_vc

0x27e1,	// (0x0004f131) setting_text_pane_vc_g1

0x7752,	// (0x000540a2) bg_set_opt_pane_cp2_vc

0x7874,	// (0x000541c4) setting_slider_graphic_pane_vc_g1

0xb57a,	// (0x00057eca) setting_slider_graphic_pane_vc_t1

0xb58a,	// (0x00057eda) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x0005c328) setting_slider_graphic_pane_vc_t

0xb59a,	// (0x00057eea) slider_set_pane_cp_vc

0xb5a2,	// (0x00057ef2) slider_set_pane_vc_g1

0xb5ab,	// (0x00057efb) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x0005c32d) slider_set_pane_vc_g

0x8575,	// (0x00054ec5) set_opt_bg_pane_g1_copy1

0x857d,	// (0x00054ecd) set_opt_bg_pane_g2_copy1

0xb5d7,	// (0x00057f27) set_opt_bg_pane_g3_copy1

0x858d,	// (0x00054edd) set_opt_bg_pane_g4_copy1

0x8595,	// (0x00054ee5) set_opt_bg_pane_g5_copy1

0x859d,	// (0x00054eed) set_opt_bg_pane_g6_copy1

0xb5e1,	// (0x00057f31) set_opt_bg_pane_g7_copy1

0xb5eb,	// (0x00057f3b) set_opt_bg_pane_g8_copy1

0xb5f5,	// (0x00057f45) set_opt_bg_pane_g9_copy1

0x7752,	// (0x000540a2) bg_set_opt_pane_cp_vc

0xb5ff,	// (0x00057f4f) setting_slider_pane_vc_t1

0xb60e,	// (0x00057f5e) setting_slider_pane_vc_t2

0xb61e,	// (0x00057f6e) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x0005c33c) setting_slider_pane_vc_t

0xb62e,	// (0x00057f7e) slider_set_pane_vc

0x5ef9,	// (0x00052849) volume_set_pane_vc_g1

0x5f02,	// (0x00052852) volume_set_pane_vc_g2

0x5f0b,	// (0x0005285b) volume_set_pane_vc_g3

0x5f14,	// (0x00052864) volume_set_pane_vc_g4

0x5f1d,	// (0x0005286d) volume_set_pane_vc_g5

0x5f26,	// (0x00052876) volume_set_pane_vc_g6

0x5f2f,	// (0x0005287f) volume_set_pane_vc_g7

0x5f38,	// (0x00052888) volume_set_pane_vc_g8

0x5f41,	// (0x00052891) volume_set_pane_vc_g9

0x5f4a,	// (0x0005289a) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0005c1e1) volume_set_pane_vc_g

0xb636,	// (0x00057f86) volume_set_pane_vc

0xb63e,	// (0x00057f8e) button_value_adjust_pane_cp1_vc

0xb648,	// (0x00057f98) list_highlight_pane_cp2_vc

0xb651,	// (0x00057fa1) list_set_pane_vc_ParamLimits

0xb651,	// (0x00057fa1) list_set_pane_vc

0xb6af,	// (0x00057fff) main_pane_set_vc_t1_ParamLimits

0xb6af,	// (0x00057fff) main_pane_set_vc_t1

0xb6c4,	// (0x00058014) main_pane_set_vc_t2_ParamLimits

0xb6c4,	// (0x00058014) main_pane_set_vc_t2

0xb6d6,	// (0x00058026) main_pane_set_vc_t3_ParamLimits

0xb6d6,	// (0x00058026) main_pane_set_vc_t3

0xb6ea,	// (0x0005803a) main_pane_set_vc_t4_ParamLimits

0xb6ea,	// (0x0005803a) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x0005c343) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x0005c343) main_pane_set_vc_t

0xb6fe,	// (0x0005804e) setting_code_pane_vc_ParamLimits

0xb6fe,	// (0x0005804e) setting_code_pane_vc

0xb70f,	// (0x0005805f) setting_slider_graphic_pane_vc

0xb70f,	// (0x0005805f) setting_slider_pane_vc

0xb70f,	// (0x0005805f) setting_text_pane_vc

0xb70f,	// (0x0005805f) setting_volume_pane_vc

0xb719,	// (0x00058069) scroll_pane_cp121_vc

0x8503,	// (0x00054e53) set_content_pane_vc

0xb721,	// (0x00058071) button_value_adjust_pane_g1

0xb72a,	// (0x0005807a) button_value_adjust_pane_g2

0x0001,

0xfa4f,	// (0x0005c39f) button_value_adjust_pane_g

0xb733,	// (0x00058083) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb733,	// (0x00058083) form_field_slider_wide_pane_vc_t1

0xb747,	// (0x00058097) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb747,	// (0x00058097) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa54,	// (0x0005c3a4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa54,	// (0x0005c3a4) form_field_slider_wide_pane_vc_t

0x7aad,	// (0x000543fd) input_focus_pane_cp10_vc_ParamLimits

0x7aad,	// (0x000543fd) input_focus_pane_cp10_vc

0xb775,	// (0x000580c5) slider_cont_pane_cp1_vc_ParamLimits

0xb775,	// (0x000580c5) slider_cont_pane_cp1_vc

0xb787,	// (0x000580d7) slider_form_pane_g1_cp2

0xb5ab,	// (0x00057efb) slider_form_pane_g2_cp2

0xb7b4,	// (0x00058104) form_field_slider_pane_vc_t3

0xb7c2,	// (0x00058112) form_field_slider_pane_vc_t4

0xb7d0,	// (0x00058120) slider_form_pane_vc_ParamLimits

0xb7d0,	// (0x00058120) slider_form_pane_vc

0xb7e9,	// (0x00058139) form_field_slider_pane_vc_t1_ParamLimits

0xb7e9,	// (0x00058139) form_field_slider_pane_vc_t1

0xb747,	// (0x00058097) form_field_slider_pane_vc_t2_ParamLimits

0xb747,	// (0x00058097) form_field_slider_pane_vc_t2

0x0001,

0xfa66,	// (0x0005c3b6) form_field_slider_pane_vc_t_ParamLimits

0xfa66,	// (0x0005c3b6) form_field_slider_pane_vc_t

0x7aad,	// (0x000543fd) input_focus_pane_cp9_vc_ParamLimits

0x7aad,	// (0x000543fd) input_focus_pane_cp9_vc

0xb805,	// (0x00058155) slider_cont_pane_vc_ParamLimits

0xb805,	// (0x00058155) slider_cont_pane_vc

0xb819,	// (0x00058169) list_form_graphic_pane_cp_vc_ParamLimits

0xb819,	// (0x00058169) list_form_graphic_pane_cp_vc

0x9af0,	// (0x00056440) form_field_popup_wide_pane_vc_g1

0xb82e,	// (0x0005817e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb82e,	// (0x0005817e) form_field_popup_wide_pane_vc_t1

0x8529,	// (0x00054e79) input_focus_pane_cp8_vc_ParamLimits

0x8529,	// (0x00054e79) input_focus_pane_cp8_vc

0xb873,	// (0x000581c3) list_form_wide_pane_vc_ParamLimits

0xb873,	// (0x000581c3) list_form_wide_pane_vc

0xb87f,	// (0x000581cf) list_form_graphic_pane_vc_g1

0xb887,	// (0x000581d7) list_form_graphic_pane_vc_t1_ParamLimits

0xb887,	// (0x000581d7) list_form_graphic_pane_vc_t1

0x7832,	// (0x00054182) list_highlight_pane_cp5_vc_ParamLimits

0x7832,	// (0x00054182) list_highlight_pane_cp5_vc

0xb8a3,	// (0x000581f3) list_form_graphic_pane_vc_ParamLimits

0xb8a3,	// (0x000581f3) list_form_graphic_pane_vc

0x9af0,	// (0x00056440) form_field_popup_pane_vc_g1

0xb8b9,	// (0x00058209) form_field_popup_pane_vc_t1_ParamLimits

0xb8b9,	// (0x00058209) form_field_popup_pane_vc_t1

0x8529,	// (0x00054e79) input_focus_pane_cp7_vc_ParamLimits

0x8529,	// (0x00054e79) input_focus_pane_cp7_vc

0xb8d0,	// (0x00058220) list_form_pane_vc_ParamLimits

0xb8d0,	// (0x00058220) list_form_pane_vc

0xb8dc,	// (0x0005822c) data_form_pane_vc_t1_ParamLimits

0xb8dc,	// (0x0005822c) data_form_pane_vc_t1

0x8575,	// (0x00054ec5) input_focus_pane_vc_g1

0x857d,	// (0x00054ecd) input_focus_pane_vc_g2

0x8585,	// (0x00054ed5) input_focus_pane_vc_g3

0x858d,	// (0x00054edd) input_focus_pane_vc_g4

0x8595,	// (0x00054ee5) input_focus_pane_vc_g5

0x859d,	// (0x00054eed) input_focus_pane_vc_g6

0x85a5,	// (0x00054ef5) input_focus_pane_vc_g7

0x85ad,	// (0x00054efd) input_focus_pane_vc_g8

0x85b5,	// (0x00054f05) input_focus_pane_vc_g9

0x27e1,	// (0x0004f131) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0005bfbc) input_focus_pane_vc_g

0x9ae4,	// (0x00056434) data_form_pane_vc_ParamLimits

0x9ae4,	// (0x00056434) data_form_pane_vc

0x9af0,	// (0x00056440) form_field_data_pane_vc_g1

0xb8f7,	// (0x00058247) form_field_data_pane_vc_t1_ParamLimits

0xb8f7,	// (0x00058247) form_field_data_pane_vc_t1

0x8529,	// (0x00054e79) input_focus_pane_vc_ParamLimits

0x8529,	// (0x00054e79) input_focus_pane_vc

0xb911,	// (0x00058261) button_value_adjust_pane_cp3_vc

0xb919,	// (0x00058269) button_value_adjust_pane_cp5_vc

0xb921,	// (0x00058271) form_field_data_pane_vc_ParamLimits

0xb921,	// (0x00058271) form_field_data_pane_vc

0xb938,	// (0x00058288) form_field_data_pane_vc_cp2

0xb940,	// (0x00058290) form_field_data_wide_pane_vc_ParamLimits

0xb940,	// (0x00058290) form_field_data_wide_pane_vc

0xb956,	// (0x000582a6) form_field_data_wide_pane_vc_cp2

0xb95e,	// (0x000582ae) form_field_popup_pane_vc_ParamLimits

0xb95e,	// (0x000582ae) form_field_popup_pane_vc

0xb975,	// (0x000582c5) form_field_popup_wide_pane_vc_ParamLimits

0xb975,	// (0x000582c5) form_field_popup_wide_pane_vc

0xb98b,	// (0x000582db) form_field_slider_pane_vc_ParamLimits

0xb98b,	// (0x000582db) form_field_slider_pane_vc

0xb99e,	// (0x000582ee) form_field_slider_wide_pane_vc_ParamLimits

0xb99e,	// (0x000582ee) form_field_slider_wide_pane_vc

0xb9b1,	// (0x00058301) grid_touch_1_pane_ParamLimits

0xb9b1,	// (0x00058301) grid_touch_1_pane

0xb9bd,	// (0x0005830d) grid_touch_2_pane_ParamLimits

0xb9bd,	// (0x0005830d) grid_touch_2_pane

0x9483,	// (0x00055dd3) touch_pane_g1_ParamLimits

0x9483,	// (0x00055dd3) touch_pane_g1

0xb9d5,	// (0x00058325) cell_app_pane_cp_wide_ParamLimits

0xb9d5,	// (0x00058325) cell_app_pane_cp_wide

0xb9e6,	// (0x00058336) grid_popup_fast_wide_pane_ParamLimits

0xb9e6,	// (0x00058336) grid_popup_fast_wide_pane

0xb9fa,	// (0x0005834a) scroll_pane_cp19_ParamLimits

0xb9fa,	// (0x0005834a) scroll_pane_cp19

0x7752,	// (0x000540a2) bg_popup_window_pane_cp20

0xba0e,	// (0x0005835e) listscroll_popup_fast_wide_pane

0xba16,	// (0x00058366) grid_indicator_nsta_pane

0xba28,	// (0x00058378) clock_nsta_pane_g1

0xba31,	// (0x00058381) clock_nsta_pane_t1

0xba4d,	// (0x0005839d) cell_indicator_nsta_pane_ParamLimits

0xba4d,	// (0x0005839d) cell_indicator_nsta_pane

0xba82,	// (0x000583d2) cell_indicator_nsta_pane_g1

0xba90,	// (0x000583e0) cell_indicator_nsta_pane_g2

0x0001,

0xfa77,	// (0x0005c3c7) cell_indicator_nsta_pane_g

0xbaa2,	// (0x000583f2) clock_nsta_pane_cp

0xbaab,	// (0x000583fb) indicator_nsta_pane_cp

0xbab5,	// (0x00058405) nsta_clock_indic_pane_g1

0x78fb,	// (0x0005424b) grid_indicator_pane

0x8ac2,	// (0x00055412) scroll_pane_cp29

0x53c5,	// (0x00051d15) indicator_nsta_pane_cp2_ParamLimits

0x53c5,	// (0x00051d15) indicator_nsta_pane_cp2

0x7832,	// (0x00054182) main_apps_wheel_pane

0x9cff,	// (0x0005664f) form_midp_field_text_pane_ParamLimits

0x9e4a,	// (0x0005679a) scroll_bar_cp050_ParamLimits

0xbb0e,	// (0x0005845e) cell_indicator_pane_ParamLimits

0xbb0e,	// (0x0005845e) cell_indicator_pane

0xbb25,	// (0x00058475) cell_indicator_pane_g1

0xbb2f,	// (0x0005847f) grid_wheel_folder_pane_ParamLimits

0xbb2f,	// (0x0005847f) grid_wheel_folder_pane

0xbb45,	// (0x00058495) list_wheel_apps_pane_ParamLimits

0xbb45,	// (0x00058495) list_wheel_apps_pane

0xbb56,	// (0x000584a6) main_apps_wheel_pane_g1_ParamLimits

0xbb56,	// (0x000584a6) main_apps_wheel_pane_g1

0xbb6a,	// (0x000584ba) main_apps_wheel_pane_g2_ParamLimits

0xbb6a,	// (0x000584ba) main_apps_wheel_pane_g2

0x0001,

0xfa93,	// (0x0005c3e3) main_apps_wheel_pane_g_ParamLimits

0xfa93,	// (0x0005c3e3) main_apps_wheel_pane_g

0xbb82,	// (0x000584d2) main_apps_wheel_pane_t1_ParamLimits

0xbb82,	// (0x000584d2) main_apps_wheel_pane_t1

0xbba5,	// (0x000584f5) list_wheel_apps_pane_g1

0xbbad,	// (0x000584fd) list_wheel_apps_pane_g2

0xbbb5,	// (0x00058505) list_wheel_apps_pane_g3

0xbbbd,	// (0x0005850d) list_wheel_apps_pane_g4

0xbbc7,	// (0x00058517) list_wheel_apps_pane_g5

0x0004,

0xfa98,	// (0x0005c3e8) list_wheel_apps_pane_g

0x9048,	// (0x00055998) navi_icon_text_pane

0x951c,	// (0x00055e6c) aid_fill_nsta

0xbbea,	// (0x0005853a) navi_icon_text_pane_g1

0xbbf6,	// (0x00058546) navi_icon_text_pane_t1

0x8edb,	// (0x0005582b) list_set_graphic_pane_t1_ParamLimits

0x8edb,	// (0x0005582b) list_set_graphic_pane_t1

0xa5b5,	// (0x00056f05) popup_midp_note_alarm_window_t6_ParamLimits

0xa5b5,	// (0x00056f05) popup_midp_note_alarm_window_t6

0xa5c7,	// (0x00056f17) popup_midp_note_alarm_window_t7_ParamLimits

0xa5c7,	// (0x00056f17) popup_midp_note_alarm_window_t7

0xa5d9,	// (0x00056f29) popup_midp_note_alarm_window_t8_ParamLimits

0xa5d9,	// (0x00056f29) popup_midp_note_alarm_window_t8

0xa5eb,	// (0x00056f3b) popup_midp_note_alarm_window_t9_ParamLimits

0xa5eb,	// (0x00056f3b) popup_midp_note_alarm_window_t9

0xa5fd,	// (0x00056f4d) popup_midp_note_alarm_window_t10_ParamLimits

0xa5fd,	// (0x00056f4d) popup_midp_note_alarm_window_t10

0xa60f,	// (0x00056f5f) popup_midp_note_alarm_window_t11_ParamLimits

0xa60f,	// (0x00056f5f) popup_midp_note_alarm_window_t11

0xa621,	// (0x00056f71) scroll_pane_cp17_ParamLimits

0xa621,	// (0x00056f71) scroll_pane_cp17

0x5ef9,	// (0x00052849) volume_small_pane_cp_g1

0x6509,	// (0x00052e59) volume_small_pane_cp_g2

0x6512,	// (0x00052e62) volume_small_pane_cp_g3

0x651b,	// (0x00052e6b) volume_small_pane_cp_g4

0x6524,	// (0x00052e74) volume_small_pane_cp_g5

0x652d,	// (0x00052e7d) volume_small_pane_cp_g6

0x6536,	// (0x00052e86) volume_small_pane_cp_g7

0x653f,	// (0x00052e8f) volume_small_pane_cp_g8

0x6548,	// (0x00052e98) volume_small_pane_cp_g9

0x6551,	// (0x00052ea1) volume_small_pane_cp_g10

0x9299,	// (0x00055be9) midp_ticker_pane_g1_ParamLimits

0x92a5,	// (0x00055bf5) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0005c088) midp_ticker_pane_g_ParamLimits

0x92b1,	// (0x00055c01) midp_ticker_pane_t1_ParamLimits

0x9532,	// (0x00055e82) aid_fill_nsta_2

0x9e36,	// (0x00056786) list_form2_midp_pane

0xaf7a,	// (0x000578ca) midp_editing_number_pane_ParamLimits

0xaf89,	// (0x000578d9) midp_ticker_pane_ParamLimits

0xbc08,	// (0x00058558) form2_midp_field_pane

0xbc2c,	// (0x0005857c) scroll_pane_cp51

0xbc4c,	// (0x0005859c) form2_midp_button_pane_ParamLimits

0xbc4c,	// (0x0005859c) form2_midp_button_pane

0xbc5e,	// (0x000585ae) form2_midp_content_pane_ParamLimits

0xbc5e,	// (0x000585ae) form2_midp_content_pane

0xbc78,	// (0x000585c8) form2_midp_field_choice_group_pane

0xbc80,	// (0x000585d0) form2_midp_field_pane_g1

0xbc88,	// (0x000585d8) form2_midp_field_pane_g2

0xbc90,	// (0x000585e0) form2_midp_field_pane_g3

0xbc98,	// (0x000585e8) form2_midp_field_pane_g4

0x0003,

0xfabd,	// (0x0005c40d) form2_midp_field_pane_g

0xbca0,	// (0x000585f0) form2_midp_gauge_slider_pane

0xbca8,	// (0x000585f8) form2_midp_gauge_wait_pane

0xbcb0,	// (0x00058600) form2_midp_image_pane_ParamLimits

0xbcb0,	// (0x00058600) form2_midp_image_pane

0xbccb,	// (0x0005861b) form2_midp_label_pane_ParamLimits

0xbccb,	// (0x0005861b) form2_midp_label_pane

0xbce4,	// (0x00058634) form2_midp_label_pane_cp_ParamLimits

0xbce4,	// (0x00058634) form2_midp_label_pane_cp

0xbd05,	// (0x00058655) form2_midp_string_pane_ParamLimits

0xbd05,	// (0x00058655) form2_midp_string_pane

0x655a,	// (0x00052eaa) form2_midp_text_pane_ParamLimits

0x655a,	// (0x00052eaa) form2_midp_text_pane

0xbd17,	// (0x00058667) form2_midp_time_pane

0xbd27,	// (0x00058677) input_focus_pane_cp51_ParamLimits

0xbd27,	// (0x00058677) input_focus_pane_cp51

0xbd3f,	// (0x0005868f) form2_midp_label_pane_t1_ParamLimits

0xbd3f,	// (0x0005868f) form2_midp_label_pane_t1

0x6579,	// (0x00052ec9) form2_mdip_text_pane_t1_ParamLimits

0x6579,	// (0x00052ec9) form2_mdip_text_pane_t1

0x6597,	// (0x00052ee7) form2_midp_time_pane_t1

0xbd88,	// (0x000586d8) form2_midp_gauge_slider_pane_t1

0xbd9a,	// (0x000586ea) form2_midp_gauge_slider_pane_t2

0xbdac,	// (0x000586fc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac6,	// (0x0005c416) form2_midp_gauge_slider_pane_t

0xbdbe,	// (0x0005870e) form2_midp_slider_pane

0xbdca,	// (0x0005871a) form2_midp_gauge_wait_pane_t1

0xbdd8,	// (0x00058728) form2_midp_wait_pane_ParamLimits

0xbdd8,	// (0x00058728) form2_midp_wait_pane

0xbe03,	// (0x00058753) list_single_2graphic_pane_cp4_ParamLimits

0xbe03,	// (0x00058753) list_single_2graphic_pane_cp4

0x9b58,	// (0x000564a8) list_single_midp_graphic_pane_cp_ParamLimits

0x9b58,	// (0x000564a8) list_single_midp_graphic_pane_cp

0x7752,	// (0x000540a2) list_highlight_pane_cp20

0xbe27,	// (0x00058777) list_single_2graphic_pane_g1_cp4

0xbe2f,	// (0x0005877f) list_single_2graphic_pane_g2_cp4

0xbe37,	// (0x00058787) list_single_2graphic_pane_t1_cp4

0x7832,	// (0x00054182) list_highlight_pane_cp21

0xbe46,	// (0x00058796) list_single_midp_graphic_pane_g4_cp

0xbe55,	// (0x000587a5) list_single_midp_graphic_pane_t1_cp

0xbe6a,	// (0x000587ba) form2_mdip_string_pane_t1_ParamLimits

0xbe6a,	// (0x000587ba) form2_mdip_string_pane_t1

0x7752,	// (0x000540a2) bg_wml_button_pane_cp2

0x27e1,	// (0x0004f131) form2_midp_image_pane_g1

0x805c,	// (0x000549ac) list_double_large_graphic_pane_g5_ParamLimits

0x805c,	// (0x000549ac) list_double_large_graphic_pane_g5

0x91c4,	// (0x00055b14) midp_form_pane_ParamLimits

0x7832,	// (0x00054182) main_apps_wheel_pane_ParamLimits

0x5ab6,	// (0x00052406) popup_preview_window_ParamLimits

0x5ab6,	// (0x00052406) popup_preview_window

0x5c71,	// (0x000525c1) popup_touch_info_window_ParamLimits

0x5c71,	// (0x000525c1) popup_touch_info_window

0x5c8f,	// (0x000525df) popup_touch_menu_window_ParamLimits

0x5c8f,	// (0x000525df) popup_touch_menu_window

0x27d7,	// (0x0004f127) bg_popup_sub_pane_cp6

0xbf63,	// (0x000588b3) list_touch_menu_pane

0xbf6b,	// (0x000588bb) list_single_touch_menu_pane_ParamLimits

0xbf6b,	// (0x000588bb) list_single_touch_menu_pane

0xbf81,	// (0x000588d1) list_single_touch_menu_pane_t1

0x7832,	// (0x00054182) bg_popup_sub_pane_cp7_ParamLimits

0x7832,	// (0x00054182) bg_popup_sub_pane_cp7

0xbf8f,	// (0x000588df) heading_sub_pane

0xbf97,	// (0x000588e7) list_touch_info_pane_ParamLimits

0xbf97,	// (0x000588e7) list_touch_info_pane

0xbfa6,	// (0x000588f6) list_single_touch_info_pane_ParamLimits

0xbfa6,	// (0x000588f6) list_single_touch_info_pane

0xbfb8,	// (0x00058908) list_single_touch_info_pane_t1

0xbfc6,	// (0x00058916) list_single_touch_info_pane_t2

0x0001,

0xfad4,	// (0x0005c424) list_single_touch_info_pane_t

0x91bc,	// (0x00055b0c) bg_popup_heading_pane_cp

0xbfd4,	// (0x00058924) heading_sub_pane_t1

0x9a7e,	// (0x000563ce) bg_popup_preview_window_pane_cp_ParamLimits

0x9a7e,	// (0x000563ce) bg_popup_preview_window_pane_cp

0xbf8f,	// (0x000588df) heading_preview_pane

0xbf97,	// (0x000588e7) list_preview_pane_ParamLimits

0xbf97,	// (0x000588e7) list_preview_pane

0xbfe2,	// (0x00058932) popup_preview_window_g1

0xbfa6,	// (0x000588f6) list_single_preview_pane_ParamLimits

0xbfa6,	// (0x000588f6) list_single_preview_pane

0xbfea,	// (0x0005893a) list_single_preview_pane_g1

0xbff2,	// (0x00058942) list_single_preview_pane_t1

0xbfb8,	// (0x00058908) list_single_preview_pane_t2

0x0001,

0xfad9,	// (0x0005c429) list_single_preview_pane_t

0xc000,	// (0x00058950) bg_popup_heading_pane_cp2_ParamLimits

0xc000,	// (0x00058950) bg_popup_heading_pane_cp2

0xc016,	// (0x00058966) heading_preview_pane_g1

0xc01e,	// (0x0005896e) heading_preview_pane_t1_ParamLimits

0xc01e,	// (0x0005896e) heading_preview_pane_t1

0x791e,	// (0x0005426e) soft_indicator_pane_t1_ParamLimits

0x8484,	// (0x00054dd4) scroll_pane_ParamLimits

0x89bb,	// (0x0005530b) scroll_sc2_left_pane

0x89c4,	// (0x00055314) scroll_sc2_right_pane

0x89e3,	// (0x00055333) scroll_bg_pane_g1_ParamLimits

0x89f8,	// (0x00055348) scroll_bg_pane_g2_ParamLimits

0x8a10,	// (0x00055360) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0005c013) scroll_bg_pane_g_ParamLimits

0x89e3,	// (0x00055333) scroll_handle_pane_g1_ParamLimits

0x8a32,	// (0x00055382) scroll_handle_pane_g2_ParamLimits

0x8a10,	// (0x00055360) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0005c01a) scroll_handle_pane_g_ParamLimits

0x5735,	// (0x00052085) popup_choice_list_window_ParamLimits

0x5735,	// (0x00052085) popup_choice_list_window

0x9954,	// (0x000562a4) choice_list_pane

0x99d6,	// (0x00056326) cell_toolbar_pane_t1

0x99fe,	// (0x0005634e) toolbar_button_pane_ParamLimits

0xaadb,	// (0x0005742b) ai_gene_pane_1_t2_ParamLimits

0xaadb,	// (0x0005742b) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0005c23d) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0005c23d) ai_gene_pane_1_t

0xc03b,	// (0x0005898b) scroll_sc2_left_pane_g1

0xc03b,	// (0x0005898b) scroll_sc2_right_pane_g1

0x94e0,	// (0x00055e30) bg_popup_sub_pane_cp10

0xc045,	// (0x00058995) list_choice_list_pane

0xc05e,	// (0x000589ae) list_single_choice_list_pane_ParamLimits

0xc05e,	// (0x000589ae) list_single_choice_list_pane

0xc071,	// (0x000589c1) list_single_choice_list_pane_g1

0x86c1,	// (0x00055011) list_single_choice_list_pane_t1_ParamLimits

0x86c1,	// (0x00055011) list_single_choice_list_pane_t1

0xc079,	// (0x000589c9) choice_list_pane_g1

0xc081,	// (0x000589d1) choice_list_pane_t1

0x27d7,	// (0x0004f127) input_focus_pane_cp11

0x8898,	// (0x000551e8) title_pane_stacon_g2_ParamLimits

0x8898,	// (0x000551e8) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0005bff9) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0005bff9) title_pane_stacon_g

0x91bc,	// (0x00055b0c) cursor_press_pane

0x57e1,	// (0x00052131) popup_fep_hwr_window_ParamLimits

0x57e1,	// (0x00052131) popup_fep_hwr_window

0x585b,	// (0x000521ab) popup_fep_vkb_window_ParamLimits

0x585b,	// (0x000521ab) popup_fep_vkb_window

0xc08f,	// (0x000589df) cursor_press_pane_g1

0x0002,

0xfb02,	// (0x0005c452) fep_vkb_side_pane_g_ParamLimits

0x65e3,	// (0x00052f33) fep_hwr_candidate_pane_ParamLimits

0x65e3,	// (0x00052f33) fep_hwr_candidate_pane

0x660d,	// (0x00052f5d) fep_hwr_side_pane_ParamLimits

0x660d,	// (0x00052f5d) fep_hwr_side_pane

0x662d,	// (0x00052f7d) fep_hwr_top_pane_ParamLimits

0x662d,	// (0x00052f7d) fep_hwr_top_pane

0x6645,	// (0x00052f95) fep_hwr_write_pane_ParamLimits

0x6645,	// (0x00052f95) fep_hwr_write_pane

0xfb02,	// (0x0005c452) fep_vkb_side_pane_g

0xc097,	// (0x000589e7) fep_hwr_top_pane_g1

0xc0a9,	// (0x000589f9) fep_hwr_top_pane_g2

0x667f,	// (0x00052fcf) fep_hwr_top_pane_g3

0x0002,

0xfade,	// (0x0005c42e) fep_hwr_top_pane_g

0x6694,	// (0x00052fe4) fep_hwr_top_text_pane

0x8bb2,	// (0x00055502) fep_hwr_top_text_pane_g1

0xc0df,	// (0x00058a2f) fep_hwr_top_text_pane_t1

0x678a,	// (0x000530da) fep_hwr_candidate_pane_g1

0xc332,	// (0x00058c82) fep_vkb_keypad_pane_g3_ParamLimits

0xc332,	// (0x00058c82) fep_vkb_keypad_pane_g3

0xc35a,	// (0x00058caa) fep_vkb_keypad_pane_g4_ParamLimits

0xc35a,	// (0x00058caa) fep_vkb_keypad_pane_g4

0xc3c9,	// (0x00058d19) fep_vkb_bottom_pane_g2_ParamLimits

0xc3c9,	// (0x00058d19) fep_vkb_bottom_pane_g2

0x0001,

0xfb09,	// (0x0005c459) fep_vkb_bottom_pane_g_ParamLimits

0xfb09,	// (0x0005c459) fep_vkb_bottom_pane_g

0xc03b,	// (0x0005898b) cell_vkb_side_pane_g2

0x0001,

0xfb13,	// (0x0005c463) cell_vkb_side_pane_g

0xc454,	// (0x00058da4) cell_vkb_side_pane_t1

0xc462,	// (0x00058db2) cell_vkb_side_pane_t1_copy1

0xc03b,	// (0x0005898b) bg_fep_vkb_candidate_pane_g2

0xc58e,	// (0x00058ede) cell_vkb_candidate_pane_ParamLimits

0xc0ed,	// (0x00058a3d) aid_size_cell_vkb_ParamLimits

0xc0ed,	// (0x00058a3d) aid_size_cell_vkb

0xc58e,	// (0x00058ede) cell_vkb_candidate_pane

0x67b1,	// (0x00053101) bg_popup_fep_shadow_pane_g1

0xc17b,	// (0x00058acb) fep_vkb_bottom_pane_ParamLimits

0xc17b,	// (0x00058acb) fep_vkb_bottom_pane

0xc1b1,	// (0x00058b01) fep_vkb_candidate_pane_ParamLimits

0xc1b1,	// (0x00058b01) fep_vkb_candidate_pane

0xc1cd,	// (0x00058b1d) fep_vkb_keypad_pane_ParamLimits

0xc1cd,	// (0x00058b1d) fep_vkb_keypad_pane

0xc213,	// (0x00058b63) fep_vkb_side_pane_ParamLimits

0xc213,	// (0x00058b63) fep_vkb_side_pane

0xc24f,	// (0x00058b9f) fep_vkb_top_pane_ParamLimits

0xc24f,	// (0x00058b9f) fep_vkb_top_pane

0xc28b,	// (0x00058bdb) fep_vkb_top_pane_g1_ParamLimits

0xc28b,	// (0x00058bdb) fep_vkb_top_pane_g1

0xc29a,	// (0x00058bea) fep_vkb_top_pane_g2_ParamLimits

0xc29a,	// (0x00058bea) fep_vkb_top_pane_g2

0xc2a9,	// (0x00058bf9) fep_vkb_top_pane_g3_ParamLimits

0xc2a9,	// (0x00058bf9) fep_vkb_top_pane_g3

0x0003,

0xfaf9,	// (0x0005c449) fep_vkb_top_pane_g_ParamLimits

0xfaf9,	// (0x0005c449) fep_vkb_top_pane_g

0xc2c7,	// (0x00058c17) fep_vkb_top_text_pane_ParamLimits

0xc2c7,	// (0x00058c17) fep_vkb_top_text_pane

0xc2d8,	// (0x00058c28) fep_vkb_side_pane_g1_ParamLimits

0xc2d8,	// (0x00058c28) fep_vkb_side_pane_g1

0xc321,	// (0x00058c71) grid_vkb_side_pane_ParamLimits

0xc321,	// (0x00058c71) grid_vkb_side_pane

0x67b9,	// (0x00053109) bg_popup_fep_shadow_pane_g2

0x67c2,	// (0x00053112) bg_popup_fep_shadow_pane_g3

0x67ca,	// (0x0005311a) bg_popup_fep_shadow_pane_g4

0x67d3,	// (0x00053123) bg_popup_fep_shadow_pane_g5

0x67dd,	// (0x0005312d) bg_popup_fep_shadow_pane_g6

0x67e5,	// (0x00053135) bg_popup_fep_shadow_pane_g7

0x858d,	// (0x00054edd) bg_popup_fep_shadow_pane_g8

0xc378,	// (0x00058cc8) grid_vkb_keypad_number_pane_ParamLimits

0xc378,	// (0x00058cc8) grid_vkb_keypad_number_pane

0xc388,	// (0x00058cd8) grid_vkb_keypad_pane_ParamLimits

0xc388,	// (0x00058cd8) grid_vkb_keypad_pane

0xc3ae,	// (0x00058cfe) fep_vkb_bottom_pane_g1_ParamLimits

0xc3ae,	// (0x00058cfe) fep_vkb_bottom_pane_g1

0xc3d7,	// (0x00058d27) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3d7,	// (0x00058d27) grid_vkb_keypad_bottom_left_pane

0xc3ec,	// (0x00058d3c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3ec,	// (0x00058d3c) grid_vkb_keypad_bottom_right_pane

0xc401,	// (0x00058d51) fep_vkb_top_text_pane_g1

0xc41c,	// (0x00058d6c) fep_vkb_top_text_pane_t1

0xc431,	// (0x00058d81) cell_vkb_side_pane_ParamLimits

0xc431,	// (0x00058d81) cell_vkb_side_pane

0xc03b,	// (0x0005898b) cell_vkb_side_pane_g1

0xc470,	// (0x00058dc0) cell_vkb_keypad_pane_ParamLimits

0xc470,	// (0x00058dc0) cell_vkb_keypad_pane

0xc4e5,	// (0x00058e35) cell_vkb_keypad_pane_g1

0x0008,

0xfb26,	// (0x0005c476) bg_popup_fep_shadow_pane_g

0x67f7,	// (0x00053147) cell_hwr_side_pane_g1

0x67f7,	// (0x00053147) cell_hwr_side_pane_g2

0xc4ef,	// (0x00058e3f) cell_vkb_keypad_pane_t1

0xc4fd,	// (0x00058e4d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4fd,	// (0x00058e4d) cell_vkb_keypad_bottom_left_pane

0xc51a,	// (0x00058e6a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc51a,	// (0x00058e6a) cell_vkb_keypad_bottom_right_pane

0xc03b,	// (0x0005898b) cell_vkb_keypad_bottom_left_pane_g1

0xc03b,	// (0x0005898b) cell_vkb_keypad_bottom_right_pane_g1

0xc553,	// (0x00058ea3) cell_vkb_keypad_number_pane_ParamLimits

0xc553,	// (0x00058ea3) cell_vkb_keypad_number_pane

0xc572,	// (0x00058ec2) cell_vkb_keypad_number_pane_g1

0xc57c,	// (0x00058ecc) cell_vkb_keypad_number_pane_g2

0xc585,	// (0x00058ed5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb18,	// (0x0005c468) cell_vkb_keypad_number_pane_g

0xc4ef,	// (0x00058e3f) cell_vkb_keypad_number_pane_t1

0xc5a9,	// (0x00058ef9) fep_vkb_candidate_pane_g1

0x0001,

0xfb39,	// (0x0005c489) cell_hwr_side_pane_g

0xc5c2,	// (0x00058f12) cell_hwr_side_pane_t1

0x6801,	// (0x00053151) cell_hwr_side_pane_t1_copy1

0x680f,	// (0x0005315f) cell_hwr_candidate_pane_g1

0x683e,	// (0x0005318e) cell_hwr_candidate_pane_t1

0xc03b,	// (0x0005898b) cell_vkb_candidate_pane_g2

0xc606,	// (0x00058f56) cell_vkb_candidate_pane_t1

0x65aa,	// (0x00052efa) bg_popup_fep_shadow_pane_ParamLimits

0x65aa,	// (0x00052efa) bg_popup_fep_shadow_pane

0x665f,	// (0x00052faf) bg_fep_hwr_top_pane_g4

0xc0bb,	// (0x00058a0b) bg_hwr_side_pane_g1_ParamLimits

0xc0bb,	// (0x00058a0b) bg_hwr_side_pane_g1

0x66d0,	// (0x00053020) cell_hwr_side_pane_ParamLimits

0x66d0,	// (0x00053020) cell_hwr_side_pane

0x670b,	// (0x0005305b) fep_hwr_write_pane_g1_ParamLimits

0x670b,	// (0x0005305b) fep_hwr_write_pane_g1

0x6718,	// (0x00053068) fep_hwr_write_pane_g2_ParamLimits

0x6718,	// (0x00053068) fep_hwr_write_pane_g2

0x6725,	// (0x00053075) fep_hwr_write_pane_g3_ParamLimits

0x6725,	// (0x00053075) fep_hwr_write_pane_g3

0x6733,	// (0x00053083) fep_hwr_write_pane_g4_ParamLimits

0x6733,	// (0x00053083) fep_hwr_write_pane_g4

0x0005,

0xfae5,	// (0x0005c435) fep_hwr_write_pane_g_ParamLimits

0xfae5,	// (0x0005c435) fep_hwr_write_pane_g

0x665f,	// (0x00052faf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x665f,	// (0x00052faf) bg_fep_hwr_candidate_pane_g2

0x6748,	// (0x00053098) cell_hwr_candidate_pane_ParamLimits

0x6748,	// (0x00053098) cell_hwr_candidate_pane

0x678a,	// (0x000530da) fep_hwr_candidate_pane_g1_ParamLimits

0xc11b,	// (0x00058a6b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc11b,	// (0x00058a6b) bg_popup_fep_shadow_pane_cp2

0xc2b9,	// (0x00058c09) fep_vkb_top_pane_g4_ParamLimits

0xc2b9,	// (0x00058c09) fep_vkb_top_pane_g4

0xc2ff,	// (0x00058c4f) fep_vkb_side_pane_g2_ParamLimits

0xc2ff,	// (0x00058c4f) fep_vkb_side_pane_g2

0x4d54,	// (0x000516a4) list_setting_pane_t4_ParamLimits

0x4d54,	// (0x000516a4) list_setting_pane_t4

0x4dee,	// (0x0005173e) list_setting_number_pane_t5_ParamLimits

0x4dee,	// (0x0005173e) list_setting_number_pane_t5

0x8bf9,	// (0x00055549) list_double_heading_pane_cp2_ParamLimits

0x8bf9,	// (0x00055549) list_double_heading_pane_cp2

0x84c4,	// (0x00054e14) list_double_heading_pane_g1_cp2_ParamLimits

0x84c4,	// (0x00054e14) list_double_heading_pane_g1_cp2

0x8537,	// (0x00054e87) list_double_heading_pane_g2_cp2_ParamLimits

0x8537,	// (0x00054e87) list_double_heading_pane_g2_cp2

0xc614,	// (0x00058f64) list_double_heading_pane_t1_cp2_ParamLimits

0xc614,	// (0x00058f64) list_double_heading_pane_t1_cp2

0xc62a,	// (0x00058f7a) list_double_heading_pane_t2_cp2_ParamLimits

0xc62a,	// (0x00058f7a) list_double_heading_pane_t2_cp2

0x18c3,	// (0x0004e213) aid_value_unit2

0x48cc,	// (0x0005121c) popup_preview_fixed_window

0x7abb,	// (0x0005440b) bg_popup_preview_window_pane_cp02

0xc63c,	// (0x00058f8c) list_preview_fixed_pane

0xc682,	// (0x00058fd2) list_empty_pane_fp_ParamLimits

0xc682,	// (0x00058fd2) list_empty_pane_fp

0xc682,	// (0x00058fd2) list_single_cale_day_pane_fp_ParamLimits

0xc682,	// (0x00058fd2) list_single_cale_day_pane_fp

0xc682,	// (0x00058fd2) list_single_graphic_heading_pane_fp_ParamLimits

0xc682,	// (0x00058fd2) list_single_graphic_heading_pane_fp

0xc682,	// (0x00058fd2) list_single_graphic_pane_fp_ParamLimits

0xc682,	// (0x00058fd2) list_single_graphic_pane_fp

0xc682,	// (0x00058fd2) list_single_heading_pane_fp_ParamLimits

0xc682,	// (0x00058fd2) list_single_heading_pane_fp

0xc682,	// (0x00058fd2) list_single_pane_fp_ParamLimits

0xc682,	// (0x00058fd2) list_single_pane_fp

0xc697,	// (0x00058fe7) list_single_pane_fp_g1_ParamLimits

0xc697,	// (0x00058fe7) list_single_pane_fp_g1

0x84c4,	// (0x00054e14) list_single_pane_fp_g2_ParamLimits

0x84c4,	// (0x00054e14) list_single_pane_fp_g2

0x8537,	// (0x00054e87) list_single_pane_fp_g3_ParamLimits

0x8537,	// (0x00054e87) list_single_pane_fp_g3

0xc6a3,	// (0x00058ff3) list_single_pane_fp_g4_ParamLimits

0xc6a3,	// (0x00058ff3) list_single_pane_fp_g4

0x0003,

0xfb4c,	// (0x0005c49c) list_single_pane_fp_g_ParamLimits

0xfb4c,	// (0x0005c49c) list_single_pane_fp_g

0x685c,	// (0x000531ac) list_single_pane_fp_t1_ParamLimits

0x685c,	// (0x000531ac) list_single_pane_fp_t1

0x6873,	// (0x000531c3) list_single_graphic_pane_fp_g1_ParamLimits

0x6873,	// (0x000531c3) list_single_graphic_pane_fp_g1

0xc697,	// (0x00058fe7) list_single_graphic_pane_fp_g2_ParamLimits

0xc697,	// (0x00058fe7) list_single_graphic_pane_fp_g2

0x84c4,	// (0x00054e14) list_single_graphic_pane_fp_g3_ParamLimits

0x84c4,	// (0x00054e14) list_single_graphic_pane_fp_g3

0x8537,	// (0x00054e87) list_single_graphic_pane_fp_g4_ParamLimits

0x8537,	// (0x00054e87) list_single_graphic_pane_fp_g4

0xc6a3,	// (0x00058ff3) list_single_graphic_pane_fp_g5_ParamLimits

0xc6a3,	// (0x00058ff3) list_single_graphic_pane_fp_g5

0x0004,

0xfb55,	// (0x0005c4a5) list_single_graphic_pane_fp_g_ParamLimits

0xfb55,	// (0x0005c4a5) list_single_graphic_pane_fp_g

0x687f,	// (0x000531cf) list_single_graphic_pane_fp_t1_ParamLimits

0x687f,	// (0x000531cf) list_single_graphic_pane_fp_t1

0x6873,	// (0x000531c3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6873,	// (0x000531c3) list_single_graphic_heading_pane_fp_g1

0xc697,	// (0x00058fe7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc697,	// (0x00058fe7) list_single_graphic_heading_pane_fp_g2

0x84c4,	// (0x00054e14) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x84c4,	// (0x00054e14) list_single_graphic_heading_pane_fp_g3

0x8537,	// (0x00054e87) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8537,	// (0x00054e87) list_single_graphic_heading_pane_fp_g4

0xc6a3,	// (0x00058ff3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6a3,	// (0x00058ff3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb55,	// (0x0005c4a5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb55,	// (0x0005c4a5) list_single_graphic_heading_pane_fp_g

0x6895,	// (0x000531e5) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6895,	// (0x000531e5) list_single_graphic_heading_pane_fp_t1

0x68ab,	// (0x000531fb) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x68ab,	// (0x000531fb) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb60,	// (0x0005c4b0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb60,	// (0x0005c4b0) list_single_graphic_heading_pane_fp_t

0x68bd,	// (0x0005320d) list_single_cale_day_pane_fp_g1_ParamLimits

0x68bd,	// (0x0005320d) list_single_cale_day_pane_fp_g1

0xc6af,	// (0x00058fff) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6af,	// (0x00058fff) list_single_cale_day_pane_fp_g2

0x81a4,	// (0x00054af4) list_single_cale_day_pane_fp_g3_ParamLimits

0x81a4,	// (0x00054af4) list_single_cale_day_pane_fp_g3

0x81cc,	// (0x00054b1c) list_single_cale_day_pane_fp_g4_ParamLimits

0x81cc,	// (0x00054b1c) list_single_cale_day_pane_fp_g4

0x81f0,	// (0x00054b40) list_single_cale_day_pane_fp_g5_ParamLimits

0x81f0,	// (0x00054b40) list_single_cale_day_pane_fp_g5

0x0004,

0xfb65,	// (0x0005c4b5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb65,	// (0x0005c4b5) list_single_cale_day_pane_fp_g

0x68f5,	// (0x00053245) list_single_cale_day_pane_fp_t1_ParamLimits

0x68f5,	// (0x00053245) list_single_cale_day_pane_fp_t1

0x691b,	// (0x0005326b) list_single_cale_day_pane_fp_t2_ParamLimits

0x691b,	// (0x0005326b) list_single_cale_day_pane_fp_t2

0x6934,	// (0x00053284) list_single_cale_day_pane_fp_t3_ParamLimits

0x6934,	// (0x00053284) list_single_cale_day_pane_fp_t3

0x0002,

0xfb70,	// (0x0005c4c0) list_single_cale_day_pane_fp_t_ParamLimits

0xfb70,	// (0x0005c4c0) list_single_cale_day_pane_fp_t

0xc697,	// (0x00058fe7) list_empty_pane_fp_g1_ParamLimits

0xc697,	// (0x00058fe7) list_empty_pane_fp_g1

0x8214,	// (0x00054b64) list_empty_pane_fp_t1

0x8222,	// (0x00054b72) list_empty_pane_fp_t2

0x0001,

0xfb77,	// (0x0005c4c7) list_empty_pane_fp_t

0xc697,	// (0x00058fe7) list_single_heading_pane_fp_g1_ParamLimits

0xc697,	// (0x00058fe7) list_single_heading_pane_fp_g1

0x84c4,	// (0x00054e14) list_single_heading_pane_fp_g2_ParamLimits

0x84c4,	// (0x00054e14) list_single_heading_pane_fp_g2

0x8537,	// (0x00054e87) list_single_heading_pane_fp_g3_ParamLimits

0x8537,	// (0x00054e87) list_single_heading_pane_fp_g3

0x0002,

0xfb7c,	// (0x0005c4cc) list_single_heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x0005c4cc) list_single_heading_pane_fp_g

0x8230,	// (0x00054b80) list_single_heading_pane_fp_t1_ParamLimits

0x8230,	// (0x00054b80) list_single_heading_pane_fp_t1

0x8242,	// (0x00054b92) list_single_heading_pane_fp_t2_ParamLimits

0x8242,	// (0x00054b92) list_single_heading_pane_fp_t2

0x0001,

0xfb83,	// (0x0005c4d3) list_single_heading_pane_fp_t_ParamLimits

0xfb83,	// (0x0005c4d3) list_single_heading_pane_fp_t

0x872f,	// (0x0005507f) aid_size_cell_fast

0x7a2b,	// (0x0005437b) soft_indicator_pane_cp1_t1

0x876c,	// (0x000550bc) cell_app_pane_cp2_ParamLimits

0x876c,	// (0x000550bc) cell_app_pane_cp2

0x65cc,	// (0x00052f1c) fep_hwr_candidate_drop_down_list_pane

0x67a4,	// (0x000530f4) fep_hwr_candidate_pane_g3_ParamLimits

0x67a4,	// (0x000530f4) fep_hwr_candidate_pane_g3

0x35c8,	// (0x0004ff18) fep_hwr_candidate_pane_g4_ParamLimits

0x35c8,	// (0x0004ff18) fep_hwr_candidate_pane_g4

0x0002,

0xfaf2,	// (0x0005c442) fep_hwr_candidate_pane_g_ParamLimits

0xfaf2,	// (0x0005c442) fep_hwr_candidate_pane_g

0xc1a0,	// (0x00058af0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1a0,	// (0x00058af0) fep_vkb_candidate_drop_down_list_pane

0xc5b1,	// (0x00058f01) fep_vkb_candidate_pane_g3

0xc5b9,	// (0x00058f09) fep_vkb_candidate_pane_g4

0x0002,

0xfb1f,	// (0x0005c46f) fep_vkb_candidate_pane_g

0x680f,	// (0x0005315f) cell_hwr_candidate_pane_g1_ParamLimits

0x681d,	// (0x0005316d) cell_hwr_candidate_pane_g3_ParamLimits

0x681d,	// (0x0005316d) cell_hwr_candidate_pane_g3

0xdeab,	// (0x0005a7fb) cell_hwr_candidate_pane_g4_ParamLimits

0xdeab,	// (0x0005a7fb) cell_hwr_candidate_pane_g4

0x0002,

0xfb3e,	// (0x0005c48e) cell_hwr_candidate_pane_g_ParamLimits

0xfb3e,	// (0x0005c48e) cell_hwr_candidate_pane_g

0xc5d0,	// (0x00058f20) cell_vkb_candidate_pane_g3_ParamLimits

0xc5d0,	// (0x00058f20) cell_vkb_candidate_pane_g3

0xc5eb,	// (0x00058f3b) cell_vkb_candidate_pane_g4_ParamLimits

0xc5eb,	// (0x00058f3b) cell_vkb_candidate_pane_g4

0xc6bb,	// (0x0005900b) cell_app_pane_cp2_g1_ParamLimits

0xc6bb,	// (0x0005900b) cell_app_pane_cp2_g1

0xc6d9,	// (0x00059029) cell_app_pane_cp2_g2_ParamLimits

0xc6d9,	// (0x00059029) cell_app_pane_cp2_g2

0x0001,

0xfb88,	// (0x0005c4d8) cell_app_pane_cp2_g_ParamLimits

0xfb88,	// (0x0005c4d8) cell_app_pane_cp2_g

0xc6e5,	// (0x00059035) cell_app_pane_cp2_t1_ParamLimits

0xc6e5,	// (0x00059035) cell_app_pane_cp2_t1

0x8529,	// (0x00054e79) grid_highlight_pane_cp1_ParamLimits

0x8529,	// (0x00054e79) grid_highlight_pane_cp1

0x694d,	// (0x0005329d) cell_hwr_candidate_pane_cp1_ParamLimits

0x694d,	// (0x0005329d) cell_hwr_candidate_pane_cp1

0x680f,	// (0x0005315f) fep_hwr_candidate_drop_down_list_pane_g1

0x696c,	// (0x000532bc) fep_hwr_candidate_drop_down_list_pane_g2

0x6979,	// (0x000532c9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8d,	// (0x0005c4dd) fep_hwr_candidate_drop_down_list_pane_g

0x6986,	// (0x000532d6) fep_hwr_candidate_drop_down_list_scroll_pane

0x698f,	// (0x000532df) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x698f,	// (0x000532df) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x699c,	// (0x000532ec) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x699c,	// (0x000532ec) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x69a9,	// (0x000532f9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x69a9,	// (0x000532f9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x69b6,	// (0x00053306) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x69b6,	// (0x00053306) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x69d1,	// (0x00053321) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x69d1,	// (0x00053321) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x69ec,	// (0x0005333c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x69ec,	// (0x0005333c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6a07,	// (0x00053357) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6a07,	// (0x00053357) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6a22,	// (0x00053372) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6a22,	// (0x00053372) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb94,	// (0x0005c4e4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb94,	// (0x0005c4e4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc6f7,	// (0x00059047) cell_vkb_candidate_pane_cp1_ParamLimits

0xc6f7,	// (0x00059047) cell_vkb_candidate_pane_cp1

0xc2b9,	// (0x00058c09) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2b9,	// (0x00058c09) fep_vkb_candidate_drop_down_list_pane_g1

0xc717,	// (0x00059067) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc717,	// (0x00059067) fep_vkb_candidate_drop_down_list_pane_g2

0xc724,	// (0x00059074) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc724,	// (0x00059074) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba5,	// (0x0005c4f5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba5,	// (0x0005c4f5) fep_vkb_candidate_drop_down_list_pane_g

0xc731,	// (0x00059081) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc731,	// (0x00059081) fep_vkb_candidate_drop_down_list_scroll_pane

0xc73e,	// (0x0005908e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc73e,	// (0x0005908e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc74b,	// (0x0005909b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc74b,	// (0x0005909b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc757,	// (0x000590a7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc757,	// (0x000590a7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc763,	// (0x000590b3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc763,	// (0x000590b3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc784,	// (0x000590d4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc784,	// (0x000590d4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7a5,	// (0x000590f5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7a5,	// (0x000590f5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7c6,	// (0x00059116) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7c6,	// (0x00059116) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7e7,	// (0x00059137) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7e7,	// (0x00059137) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbac,	// (0x0005c4fc) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbac,	// (0x0005c4fc) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x775c,	// (0x000540ac) title_pane_g1_ParamLimits

0x7769,	// (0x000540b9) title_pane_g2_ParamLimits

0xf529,	// (0x0005be79) title_pane_g_ParamLimits

0x8ba2,	// (0x000554f2) aid_call2_pane

0x8baa,	// (0x000554fa) aid_call_pane

0x8bb2,	// (0x00055502) popup_clock_analogue_window_g1

0x8bb2,	// (0x00055502) popup_clock_analogue_window_g2

0x5258,	// (0x00051ba8) popup_clock_analogue_window_g3

0x5261,	// (0x00051bb1) popup_clock_analogue_window_g4

0x27e1,	// (0x0004f131) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0005c028) popup_clock_analogue_window_g

0x5269,	// (0x00051bb9) popup_clock_analogue_window_t1

0x5277,	// (0x00051bc7) clock_digital_number_pane_ParamLimits

0x5277,	// (0x00051bc7) clock_digital_number_pane

0x5283,	// (0x00051bd3) clock_digital_number_pane_cp02_ParamLimits

0x5283,	// (0x00051bd3) clock_digital_number_pane_cp02

0x528f,	// (0x00051bdf) clock_digital_number_pane_cp03_ParamLimits

0x528f,	// (0x00051bdf) clock_digital_number_pane_cp03

0x529b,	// (0x00051beb) clock_digital_number_pane_cp04_ParamLimits

0x529b,	// (0x00051beb) clock_digital_number_pane_cp04

0x52a7,	// (0x00051bf7) clock_digital_separator_pane_ParamLimits

0x52a7,	// (0x00051bf7) clock_digital_separator_pane

0x52b3,	// (0x00051c03) popup_clock_digital_window_t1_ParamLimits

0x52b3,	// (0x00051c03) popup_clock_digital_window_t1

0x27e1,	// (0x0004f131) clock_digital_number_pane_g1

0x27e1,	// (0x0004f131) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0005c033) clock_digital_number_pane_g

0x27e1,	// (0x0004f131) clock_digital_separator_pane_g1

0x27e1,	// (0x0004f131) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0005c033) clock_digital_separator_pane_g

0x951c,	// (0x00055e6c) aid_fill_nsta_ParamLimits

0x9668,	// (0x00055fb8) indicator_nsta_pane_ParamLimits

0x97e1,	// (0x00056131) popup_clock_analogue_window

0x97e1,	// (0x00056131) popup_clock_digital_window

0xba16,	// (0x00058366) grid_indicator_nsta_pane_ParamLimits

0xba3f,	// (0x0005838f) clock_nsta_pane_t2

0x0001,

0xfa72,	// (0x0005c3c2) clock_nsta_pane_t

0x521c,	// (0x00051b6c) aid_size_max_handle

0x5226,	// (0x00051b76) aid_size_min_handle

0x91bc,	// (0x00055b0c) editor_scroll_pane

0xc802,	// (0x00059152) ex_editor_pane

0x869d,	// (0x00054fed) scroll_pane_cp13

0x84b0,	// (0x00054e00) scroll_pane_cp14

0x8be1,	// (0x00055531) scroll_pane_cp36

0x8c0d,	// (0x0005555d) list_single_graphic_hl_pane_cp2_ParamLimits

0x8c0d,	// (0x0005555d) list_single_graphic_hl_pane_cp2

0xafdb,	// (0x0005792b) list_single_graphic_hl_pane_ParamLimits

0xafdb,	// (0x0005792b) list_single_graphic_hl_pane

0x8258,	// (0x00054ba8) aid_size_min_hl_cp1

0xc80a,	// (0x0005915a) list_highlight_pane_cp34_ParamLimits

0xc80a,	// (0x0005915a) list_highlight_pane_cp34

0xc81b,	// (0x0005916b) list_single_graphic_hl_pane_g1_ParamLimits

0xc81b,	// (0x0005916b) list_single_graphic_hl_pane_g1

0x8261,	// (0x00054bb1) list_single_graphic_hl_pane_g2_ParamLimits

0x8261,	// (0x00054bb1) list_single_graphic_hl_pane_g2

0x8261,	// (0x00054bb1) list_single_graphic_hl_pane_g3_ParamLimits

0x8261,	// (0x00054bb1) list_single_graphic_hl_pane_g3

0x9101,	// (0x00055a51) list_single_graphic_hl_pane_g4_ParamLimits

0x9101,	// (0x00055a51) list_single_graphic_hl_pane_g4

0x826d,	// (0x00054bbd) list_single_graphic_hl_pane_g5_ParamLimits

0x826d,	// (0x00054bbd) list_single_graphic_hl_pane_g5

0x0004,

0xfbbd,	// (0x0005c50d) list_single_graphic_hl_pane_g_ParamLimits

0xfbbd,	// (0x0005c50d) list_single_graphic_hl_pane_g

0x8281,	// (0x00054bd1) list_single_graphic_hl_pane_t1_ParamLimits

0x8281,	// (0x00054bd1) list_single_graphic_hl_pane_t1

0xc828,	// (0x00059178) aid_size_min_hl_cp2

0xc831,	// (0x00059181) list_highlight_pane_cp34_cp2_ParamLimits

0xc831,	// (0x00059181) list_highlight_pane_cp34_cp2

0xc81b,	// (0x0005916b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc81b,	// (0x0005916b) list_single_graphic_hl_pane_g1_cp2

0xc83e,	// (0x0005918e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc83e,	// (0x0005918e) list_single_graphic_hl_pane_g2_cp2

0xc84a,	// (0x0005919a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc84a,	// (0x0005919a) list_single_graphic_hl_pane_g3_cp2

0xc858,	// (0x000591a8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc858,	// (0x000591a8) list_single_graphic_hl_pane_g4_cp2

0xc864,	// (0x000591b4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc864,	// (0x000591b4) list_single_graphic_hl_pane_g5_cp2

0x55d5,	// (0x00051f25) control_pane_g4_ParamLimits

0x55d5,	// (0x00051f25) control_pane_g4

0x94e0,	// (0x00055e30) bg_popup_sub_pane_cp10_ParamLimits

0xc045,	// (0x00058995) list_choice_list_pane_ParamLimits

0xc054,	// (0x000589a4) scroll_pane_cp23

0x7abb,	// (0x0005440b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc63c,	// (0x00058f8c) list_preview_fixed_pane_ParamLimits

0xc652,	// (0x00058fa2) list_preview_fixed_pane_cp_ParamLimits

0xc652,	// (0x00058fa2) list_preview_fixed_pane_cp

0xc65e,	// (0x00058fae) popup_preview_fixed_window_g1_ParamLimits

0xc65e,	// (0x00058fae) popup_preview_fixed_window_g1

0xc66a,	// (0x00058fba) popup_preview_fixed_window_g2_ParamLimits

0xc66a,	// (0x00058fba) popup_preview_fixed_window_g2

0x0002,

0xfb45,	// (0x0005c495) popup_preview_fixed_window_g_ParamLimits

0xfb45,	// (0x0005c495) popup_preview_fixed_window_g

0x5190,	// (0x00051ae0) aid_navi_side_left_pane_ParamLimits

0x51a5,	// (0x00051af5) aid_navi_side_right_pane_ParamLimits

0x51bd,	// (0x00051b0d) navi_icon_pane_stacon_ParamLimits

0x51d1,	// (0x00051b21) navi_navi_pane_stacon_ParamLimits

0x51bd,	// (0x00051b0d) navi_text_pane_stacon_ParamLimits

0x478d,	// (0x000510dd) main_text_info_pane

0xc88e,	// (0x000591de) listscroll_text_info_pane

0xc896,	// (0x000591e6) list_text_info_pane_ParamLimits

0xc896,	// (0x000591e6) list_text_info_pane

0xc8a5,	// (0x000591f5) scroll_pane_cp24_ParamLimits

0xc8a5,	// (0x000591f5) scroll_pane_cp24

0xc8c3,	// (0x00059213) list_text_info_pane_t1_ParamLimits

0xc8c3,	// (0x00059213) list_text_info_pane_t1

0x5753,	// (0x000520a3) popup_fast_swap2_window_ParamLimits

0x5753,	// (0x000520a3) popup_fast_swap2_window

0xc8f4,	// (0x00059244) aid_size_cell_fast2

0x27d7,	// (0x0004f127) bg_popup_window_pane_cp17

0x9e6a,	// (0x000567ba) heading_pane_cp2

0x9e72,	// (0x000567c2) listscroll_fast2_pane

0xc8fe,	// (0x0005924e) grid_fast2_pane

0xc908,	// (0x00059258) listscroll_fast2_pane_g1

0xc910,	// (0x00059260) listscroll_fast2_pane_g2

0x0001,

0xfbc8,	// (0x0005c518) listscroll_fast2_pane_g

0x869d,	// (0x00054fed) scroll_pane_cp26

0xc91a,	// (0x0005926a) cell_fast2_pane_ParamLimits

0xc91a,	// (0x0005926a) cell_fast2_pane

0xc92f,	// (0x0005927f) cell_fast2_pane_g1

0xc938,	// (0x00059288) cell_fast2_pane_g2

0xc941,	// (0x00059291) cell_fast2_pane_g3

0x0002,

0xfbcd,	// (0x0005c51d) cell_fast2_pane_g

0x7e1b,	// (0x0005476b) grid_highlight_pane_cp9

0x5711,	// (0x00052061) main_eswt_pane_ParamLimits

0x5711,	// (0x00052061) main_eswt_pane

0xc8ba,	// (0x0005920a) list_single_text_info_pane

0xc949,	// (0x00059299) eswt_ctrl_button_pane

0xc949,	// (0x00059299) eswt_ctrl_canvas_pane

0xc951,	// (0x000592a1) eswt_ctrl_combo_pane

0xc949,	// (0x00059299) eswt_ctrl_default_pane

0xc949,	// (0x00059299) eswt_ctrl_label_pane

0xc959,	// (0x000592a9) eswt_ctrl_wait_pane

0xc961,	// (0x000592b1) eswt_shell_pane

0x27d7,	// (0x0004f127) listscroll_eswt_app_pane

0xc981,	// (0x000592d1) popup_eswt_tasktip_window_ParamLimits

0xc981,	// (0x000592d1) popup_eswt_tasktip_window

0x9a7e,	// (0x000563ce) bg_popup_window_pane_cp18

0xc992,	// (0x000592e2) eswt_control_pane_g1_ParamLimits

0xc992,	// (0x000592e2) eswt_control_pane_g1

0xc99f,	// (0x000592ef) eswt_control_pane_g2_ParamLimits

0xc99f,	// (0x000592ef) eswt_control_pane_g2

0xc9ac,	// (0x000592fc) eswt_control_pane_g3_ParamLimits

0xc9ac,	// (0x000592fc) eswt_control_pane_g3

0xc9b9,	// (0x00059309) eswt_control_pane_g4_ParamLimits

0xc9b9,	// (0x00059309) eswt_control_pane_g4

0x0003,

0xfbd4,	// (0x0005c524) eswt_control_pane_g_ParamLimits

0xfbd4,	// (0x0005c524) eswt_control_pane_g

0x8529,	// (0x00054e79) bg_button_pane_ParamLimits

0x8529,	// (0x00054e79) bg_button_pane

0x7e30,	// (0x00054780) common_borders_pane_copy2_ParamLimits

0x7e30,	// (0x00054780) common_borders_pane_copy2

0xc9c6,	// (0x00059316) control_button_pane_g1_ParamLimits

0xc9c6,	// (0x00059316) control_button_pane_g1

0xc9d2,	// (0x00059322) control_button_pane_g2_ParamLimits

0xc9d2,	// (0x00059322) control_button_pane_g2

0xc9de,	// (0x0005932e) control_button_pane_g3_ParamLimits

0xc9de,	// (0x0005932e) control_button_pane_g3

0x0002,

0xfbdd,	// (0x0005c52d) control_button_pane_g_ParamLimits

0xfbdd,	// (0x0005c52d) control_button_pane_g

0xc9f2,	// (0x00059342) control_button_pane_t1

0xca00,	// (0x00059350) control_button_pane_t2

0x0001,

0xfbe4,	// (0x0005c534) control_button_pane_t

0x9a0a,	// (0x0005635a) bg_button_pane_g1

0x9a1a,	// (0x0005636a) bg_button_pane_g2

0x9a12,	// (0x00056362) bg_button_pane_g3

0x9a2a,	// (0x0005637a) bg_button_pane_g4

0x9a22,	// (0x00056372) bg_button_pane_g5

0x9a32,	// (0x00056382) bg_button_pane_g6

0x9a3a,	// (0x0005638a) bg_button_pane_g7

0x9a4a,	// (0x0005639a) bg_button_pane_g8

0x9a42,	// (0x00056392) bg_button_pane_g9

0x0008,

0xf841,	// (0x0005c191) bg_button_pane_g

0xc000,	// (0x00058950) common_borders_pane_ParamLimits

0xc000,	// (0x00058950) common_borders_pane

0xc992,	// (0x000592e2) eswt_control_pane_g1_copy1_ParamLimits

0xc992,	// (0x000592e2) eswt_control_pane_g1_copy1

0xc99f,	// (0x000592ef) eswt_control_pane_g2_copy1_ParamLimits

0xc99f,	// (0x000592ef) eswt_control_pane_g2_copy1

0xc9ac,	// (0x000592fc) eswt_control_pane_g3_copy1_ParamLimits

0xc9ac,	// (0x000592fc) eswt_control_pane_g3_copy1

0xc9b9,	// (0x00059309) eswt_control_pane_g4_copy1_ParamLimits

0xc9b9,	// (0x00059309) eswt_control_pane_g4_copy1

0xc03b,	// (0x0005898b) bg_eswt_ctrl_canvas_pane_g1

0xc000,	// (0x00058950) common_borders_pane_cp2_ParamLimits

0xc000,	// (0x00058950) common_borders_pane_cp2

0xc000,	// (0x00058950) common_borders_pane_cp3_ParamLimits

0xc000,	// (0x00058950) common_borders_pane_cp3

0xca0e,	// (0x0005935e) separator_horizontal_pane

0xca16,	// (0x00059366) separator_vertical_pane

0xc992,	// (0x000592e2) eswt_control_pane_g1_copy2_ParamLimits

0xc992,	// (0x000592e2) eswt_control_pane_g1_copy2

0xc99f,	// (0x000592ef) eswt_control_pane_g2_copy2_ParamLimits

0xc99f,	// (0x000592ef) eswt_control_pane_g2_copy2

0xc9ac,	// (0x000592fc) eswt_control_pane_g3_copy2_ParamLimits

0xc9ac,	// (0x000592fc) eswt_control_pane_g3_copy2

0xc9b9,	// (0x00059309) eswt_control_pane_g4_copy2_ParamLimits

0xc9b9,	// (0x00059309) eswt_control_pane_g4_copy2

0x27d7,	// (0x0004f127) common_borders_pane_cp4

0xca1f,	// (0x0005936f) separator_horizontal_pane_g1

0xca28,	// (0x00059378) separator_horizontal_pane_g2

0xca31,	// (0x00059381) separator_horizontal_pane_g3

0x0002,

0xfbe9,	// (0x0005c539) separator_horizontal_pane_g

0xc992,	// (0x000592e2) eswt_control_pane_g1_copy3_ParamLimits

0xc992,	// (0x000592e2) eswt_control_pane_g1_copy3

0xc99f,	// (0x000592ef) eswt_control_pane_g2_copy3_ParamLimits

0xc99f,	// (0x000592ef) eswt_control_pane_g2_copy3

0xc9ac,	// (0x000592fc) eswt_control_pane_g3_copy3_ParamLimits

0xc9ac,	// (0x000592fc) eswt_control_pane_g3_copy3

0xc9b9,	// (0x00059309) eswt_control_pane_g4_copy3_ParamLimits

0xc9b9,	// (0x00059309) eswt_control_pane_g4_copy3

0x27d7,	// (0x0004f127) common_borders_pane_cp5

0xca3a,	// (0x0005938a) separator_vertical_pane_g1

0xca43,	// (0x00059393) separator_vertical_pane_g2

0xca4c,	// (0x0005939c) separator_vertical_pane_g3

0x0002,

0xfbf0,	// (0x0005c540) separator_vertical_pane_g

0xc992,	// (0x000592e2) eswt_control_pane_g1_copy4_ParamLimits

0xc992,	// (0x000592e2) eswt_control_pane_g1_copy4

0xc99f,	// (0x000592ef) eswt_control_pane_g2_copy4_ParamLimits

0xc99f,	// (0x000592ef) eswt_control_pane_g2_copy4

0xc9ac,	// (0x000592fc) eswt_control_pane_g3_copy4_ParamLimits

0xc9ac,	// (0x000592fc) eswt_control_pane_g3_copy4

0xc9b9,	// (0x00059309) eswt_control_pane_g4_copy4_ParamLimits

0xc9b9,	// (0x00059309) eswt_control_pane_g4_copy4

0xca55,	// (0x000593a5) eswt_ctrl_combo_button_pane

0xca5d,	// (0x000593ad) eswt_ctrl_input_pane

0xca65,	// (0x000593b5) popup_choice_list_window_cp70

0xca6d,	// (0x000593bd) eswt_ctrl_input_pane_t1

0x27d7,	// (0x0004f127) input_focus_pane_cp70

0xc000,	// (0x00058950) bg_button_pane_cp70_ParamLimits

0xc000,	// (0x00058950) bg_button_pane_cp70

0xca7b,	// (0x000593cb) eswt_ctrl_combo_button_pane_g1

0xca83,	// (0x000593d3) wait_bar_pane_cp70

0x9a7e,	// (0x000563ce) bg_popup_window_pane_cp70_ParamLimits

0x9a7e,	// (0x000563ce) bg_popup_window_pane_cp70

0xca8b,	// (0x000593db) popup_eswt_tasktip_window_t1

0xcaa1,	// (0x000593f1) wait_bar_pane_cp71_ParamLimits

0xcaa1,	// (0x000593f1) wait_bar_pane_cp71

0xcaad,	// (0x000593fd) grid_eswt_app_pane

0x89bb,	// (0x0005530b) scroll_pane_cp70

0xcab6,	// (0x00059406) cell_eswt_app_pane_ParamLimits

0xcab6,	// (0x00059406) cell_eswt_app_pane

0xcae6,	// (0x00059436) cell_eswt_app_pane_g1_ParamLimits

0xcae6,	// (0x00059436) cell_eswt_app_pane_g1

0xcb15,	// (0x00059465) cell_eswt_app_pane_g2_ParamLimits

0xcb15,	// (0x00059465) cell_eswt_app_pane_g2

0x0001,

0xfbf7,	// (0x0005c547) cell_eswt_app_pane_g_ParamLimits

0xfbf7,	// (0x0005c547) cell_eswt_app_pane_g

0xcb3e,	// (0x0005948e) cell_eswt_app_pane_t1_ParamLimits

0xcb3e,	// (0x0005948e) cell_eswt_app_pane_t1

0xcb70,	// (0x000594c0) grid_highlight_pane_cp70_ParamLimits

0xcb70,	// (0x000594c0) grid_highlight_pane_cp70

0x909d,	// (0x000559ed) set_content_pane_g1

0x9467,	// (0x00055db7) status_small_volume_pane

0x6a3d,	// (0x0005338d) status_small_volume_pane_g1

0x6a45,	// (0x00053395) volume_small2_pane

0x6a4e,	// (0x0005339e) volume_small2_pane_g1

0x6a57,	// (0x000533a7) volume_small2_pane_g2

0x6a60,	// (0x000533b0) volume_small2_pane_g3

0x6a69,	// (0x000533b9) volume_small2_pane_g4

0x6a72,	// (0x000533c2) volume_small2_pane_g5

0x6a7b,	// (0x000533cb) volume_small2_pane_g6

0x6a84,	// (0x000533d4) volume_small2_pane_g7

0x6a8d,	// (0x000533dd) volume_small2_pane_g8

0x6a96,	// (0x000533e6) volume_small2_pane_g9

0x6a9f,	// (0x000533ef) volume_small2_pane_g10

0x0009,

0xfbfc,	// (0x0005c54c) volume_small2_pane_g

0xc401,	// (0x00058d51) fep_vkb_top_text_pane_g1_ParamLimits

0xc41c,	// (0x00058d6c) fep_vkb_top_text_pane_t1_ParamLimits

0xc676,	// (0x00058fc6) popup_preview_fixed_window_g3_ParamLimits

0xc676,	// (0x00058fc6) popup_preview_fixed_window_g3

0x5c04,	// (0x00052554) popup_toolbar_trans_pane

0xade2,	// (0x00057732) aid_height_set_list_ParamLimits

0xadf3,	// (0x00057743) aid_size_parent_ParamLimits

0x94e0,	// (0x00055e30) list_highlight_pane_cp2_ParamLimits

0x909d,	// (0x000559ed) set_content_pane_g1_ParamLimits

0x617d,	// (0x00052acd) list_single_image_pane_ParamLimits

0x617d,	// (0x00052acd) list_single_image_pane

0xcb7c,	// (0x000594cc) aid_size_cell_image_ParamLimits

0xcb7c,	// (0x000594cc) aid_size_cell_image

0xcb89,	// (0x000594d9) grid_single_image_pane_ParamLimits

0xcb89,	// (0x000594d9) grid_single_image_pane

0xb7dd,	// (0x0005812d) list_single_image_pane_g1_ParamLimits

0xb7dd,	// (0x0005812d) list_single_image_pane_g1

0xcb95,	// (0x000594e5) list_single_image_pane_g2_ParamLimits

0xcb95,	// (0x000594e5) list_single_image_pane_g2

0x0001,

0xfc11,	// (0x0005c561) list_single_image_pane_g_ParamLimits

0xfc11,	// (0x0005c561) list_single_image_pane_g

0xcba9,	// (0x000594f9) list_single_image_pane_t1_ParamLimits

0xcba9,	// (0x000594f9) list_single_image_pane_t1

0xcbbf,	// (0x0005950f) cell_image_list_pane_ParamLimits

0xcbbf,	// (0x0005950f) cell_image_list_pane

0xcbd3,	// (0x00059523) cell_image_list_pane_g1

0xcbdc,	// (0x0005952c) cell_image_list_pane_g2

0x0001,

0xfc16,	// (0x0005c566) cell_image_list_pane_g

0xcbe5,	// (0x00059535) aid_size_cell_tb_trans_pane

0x8529,	// (0x00054e79) bg_tb_trans_pane

0xcbf7,	// (0x00059547) grid_tb_trans_pane

0x9a0a,	// (0x0005635a) bg_tb_trans_pane_g1

0x9a1a,	// (0x0005636a) bg_tb_trans_pane_g2

0x9a12,	// (0x00056362) bg_tb_trans_pane_g3

0x9a2a,	// (0x0005637a) bg_tb_trans_pane_g4

0x9a22,	// (0x00056372) bg_tb_trans_pane_g5

0x9a4a,	// (0x0005639a) bg_tb_trans_pane_g6

0x9a42,	// (0x00056392) bg_tb_trans_pane_g7

0x9a32,	// (0x00056382) bg_tb_trans_pane_g8

0x9a3a,	// (0x0005638a) bg_tb_trans_pane_g9

0x0008,

0xfc1b,	// (0x0005c56b) bg_tb_trans_pane_g

0xcc0b,	// (0x0005955b) cell_toolbar_trans_pane_ParamLimits

0xcc0b,	// (0x0005955b) cell_toolbar_trans_pane

0xc03b,	// (0x0005898b) cell_toolbar_trans_pane_g1

0xbc10,	// (0x00058560) list_form2_midp_pane_t1

0xbc1e,	// (0x0005856e) list_form2_midp_pane_t2

0x0001,

0xfab8,	// (0x0005c408) list_form2_midp_pane_t

0xbc2c,	// (0x0005857c) scroll_pane_cp51_ParamLimits

0xbde8,	// (0x00058738) form2_midp_wait_pane_g1

0xbdf1,	// (0x00058741) form2_midp_wait_pane_g2

0xbdfa,	// (0x0005874a) form2_midp_wait_pane_g3

0x0002,

0xfacd,	// (0x0005c41d) form2_midp_wait_pane_g

0x7832,	// (0x00054182) list_highlight_pane_cp21_ParamLimits

0xbe46,	// (0x00058796) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe55,	// (0x000587a5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x80c8,	// (0x00054a18) list_single_2graphic_im_pane_ParamLimits

0x80c8,	// (0x00054a18) list_single_2graphic_im_pane

0xcc31,	// (0x00059581) list_single_2graphic_im_pane_g1_ParamLimits

0xcc31,	// (0x00059581) list_single_2graphic_im_pane_g1

0xcc42,	// (0x00059592) list_single_2graphic_im_pane_g2_ParamLimits

0xcc42,	// (0x00059592) list_single_2graphic_im_pane_g2

0xcc4e,	// (0x0005959e) list_single_2graphic_im_pane_g3_ParamLimits

0xcc4e,	// (0x0005959e) list_single_2graphic_im_pane_g3

0x0003,

0xfc2e,	// (0x0005c57e) list_single_2graphic_im_pane_g_ParamLimits

0xfc2e,	// (0x0005c57e) list_single_2graphic_im_pane_g

0xcc6e,	// (0x000595be) list_single_2graphic_im_pane_t1_ParamLimits

0xcc6e,	// (0x000595be) list_single_2graphic_im_pane_t1

0xc682,	// (0x00058fd2) list_single_graphic_2heading_pane_fp_ParamLimits

0xc682,	// (0x00058fd2) list_single_graphic_2heading_pane_fp

0x6873,	// (0x000531c3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6873,	// (0x000531c3) list_single_graphic_2heading_pane_fp_g1

0xc697,	// (0x00058fe7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc697,	// (0x00058fe7) list_single_graphic_2heading_pane_fp_g2

0x84c4,	// (0x00054e14) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x84c4,	// (0x00054e14) list_single_graphic_2heading_pane_fp_g3

0x8537,	// (0x00054e87) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8537,	// (0x00054e87) list_single_graphic_2heading_pane_fp_g4

0xc6a3,	// (0x00058ff3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6a3,	// (0x00058ff3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb55,	// (0x0005c4a5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb55,	// (0x0005c4a5) list_single_graphic_2heading_pane_fp_g

0x8297,	// (0x00054be7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8297,	// (0x00054be7) list_single_graphic_2heading_pane_fp_t1

0x68ab,	// (0x000531fb) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x68ab,	// (0x000531fb) list_single_graphic_2heading_pane_fp_t2

0x82ad,	// (0x00054bfd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x82ad,	// (0x00054bfd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc37,	// (0x0005c587) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc37,	// (0x0005c587) list_single_graphic_2heading_pane_fp_t

0xc0c7,	// (0x00058a17) fep_hwr_write_pane_g5_ParamLimits

0xc0c7,	// (0x00058a17) fep_hwr_write_pane_g5

0xc0d3,	// (0x00058a23) fep_hwr_write_pane_g6_ParamLimits

0xc0d3,	// (0x00058a23) fep_hwr_write_pane_g6

0xc961,	// (0x000592b1) eswt_shell_pane_ParamLimits

0x9a7e,	// (0x000563ce) bg_popup_window_pane_cp18_ParamLimits

0xad3b,	// (0x0005768b) heading_pane_cp70

0xca8b,	// (0x000593db) popup_eswt_tasktip_window_t1_ParamLimits

0x9571,	// (0x00055ec1) aid_touch_tab_arrow_left

0x9580,	// (0x00055ed0) aid_touch_tab_arrow_right

0x777a,	// (0x000540ca) title_pane_g3_ParamLimits

0x777a,	// (0x000540ca) title_pane_g3

0x84e8,	// (0x00054e38) set_value_pane_g1

0x5c04,	// (0x00052554) popup_toolbar_trans_pane_ParamLimits

0xcbe5,	// (0x00059535) aid_size_cell_tb_trans_pane_ParamLimits

0x8529,	// (0x00054e79) bg_tb_trans_pane_ParamLimits

0xcbf7,	// (0x00059547) grid_tb_trans_pane_ParamLimits

0x7abb,	// (0x0005440b) cont_note_pane_ParamLimits

0x7abb,	// (0x0005440b) cont_note_pane

0x7e30,	// (0x00054780) cont_snote2_single_text_pane_ParamLimits

0x7e30,	// (0x00054780) cont_snote2_single_text_pane

0x7e30,	// (0x00054780) cont_snote2_single_graphic_pane_ParamLimits

0x7e30,	// (0x00054780) cont_snote2_single_graphic_pane

0xa099,	// (0x000569e9) cont_note_wait_pane_ParamLimits

0xa099,	// (0x000569e9) cont_note_wait_pane

0xa099,	// (0x000569e9) cont_note_image_pane_ParamLimits

0xa099,	// (0x000569e9) cont_note_image_pane

0xcc9f,	// (0x000595ef) popup_note2_window_g1_ParamLimits

0xcc9f,	// (0x000595ef) popup_note2_window_g1

0xccd0,	// (0x00059620) popup_note2_window_t1_ParamLimits

0xccd0,	// (0x00059620) popup_note2_window_t1

0xcd15,	// (0x00059665) popup_note2_window_t2_ParamLimits

0xcd15,	// (0x00059665) popup_note2_window_t2

0xcd5a,	// (0x000596aa) popup_note2_window_t3_ParamLimits

0xcd5a,	// (0x000596aa) popup_note2_window_t3

0xcd9f,	// (0x000596ef) popup_note2_window_t4_ParamLimits

0xcd9f,	// (0x000596ef) popup_note2_window_t4

0x7b3f,	// (0x0005448f) popup_note2_window_t5_ParamLimits

0x7b3f,	// (0x0005448f) popup_note2_window_t5

0x0004,

0xfc43,	// (0x0005c593) popup_note2_window_t_ParamLimits

0xfc43,	// (0x0005c593) popup_note2_window_t

0xcdce,	// (0x0005971e) popup_note2_image_window_g1_ParamLimits

0xcdce,	// (0x0005971e) popup_note2_image_window_g1

0xcdda,	// (0x0005972a) popup_note2_image_window_g2_ParamLimits

0xcdda,	// (0x0005972a) popup_note2_image_window_g2

0x0001,

0xfc4e,	// (0x0005c59e) popup_note2_image_window_g_ParamLimits

0xfc4e,	// (0x0005c59e) popup_note2_image_window_g

0xcdec,	// (0x0005973c) popup_note2_image_window_t1_ParamLimits

0xcdec,	// (0x0005973c) popup_note2_image_window_t1

0xce04,	// (0x00059754) popup_note2_image_window_t2_ParamLimits

0xce04,	// (0x00059754) popup_note2_image_window_t2

0xce1c,	// (0x0005976c) popup_note2_image_window_t3_ParamLimits

0xce1c,	// (0x0005976c) popup_note2_image_window_t3

0x0002,

0xfc53,	// (0x0005c5a3) popup_note2_image_window_t_ParamLimits

0xfc53,	// (0x0005c5a3) popup_note2_image_window_t

0xa0a7,	// (0x000569f7) popup_note2_wait_window_g1_ParamLimits

0xa0a7,	// (0x000569f7) popup_note2_wait_window_g1

0xce38,	// (0x00059788) popup_note2_wait_window_g2_ParamLimits

0xce38,	// (0x00059788) popup_note2_wait_window_g2

0xa0bf,	// (0x00056a0f) popup_note2_wait_window_g3_ParamLimits

0xa0bf,	// (0x00056a0f) popup_note2_wait_window_g3

0x0002,

0xfc5a,	// (0x0005c5aa) popup_note2_wait_window_g_ParamLimits

0xfc5a,	// (0x0005c5aa) popup_note2_wait_window_g

0xce44,	// (0x00059794) popup_note2_wait_window_t1_ParamLimits

0xce44,	// (0x00059794) popup_note2_wait_window_t1

0xce62,	// (0x000597b2) popup_note2_wait_window_t2_ParamLimits

0xce62,	// (0x000597b2) popup_note2_wait_window_t2

0xce80,	// (0x000597d0) popup_note2_wait_window_t3_ParamLimits

0xce80,	// (0x000597d0) popup_note2_wait_window_t3

0xce92,	// (0x000597e2) popup_note2_wait_window_t4_ParamLimits

0xce92,	// (0x000597e2) popup_note2_wait_window_t4

0x0003,

0xfc61,	// (0x0005c5b1) popup_note2_wait_window_t_ParamLimits

0xfc61,	// (0x0005c5b1) popup_note2_wait_window_t

0xcea4,	// (0x000597f4) wait_bar2_pane_ParamLimits

0xcea4,	// (0x000597f4) wait_bar2_pane

0xcebc,	// (0x0005980c) popup_snote2_single_text_window_g1_ParamLimits

0xcebc,	// (0x0005980c) popup_snote2_single_text_window_g1

0xcee4,	// (0x00059834) popup_snote2_single_text_window_t1_ParamLimits

0xcee4,	// (0x00059834) popup_snote2_single_text_window_t1

0xcf30,	// (0x00059880) popup_snote2_single_text_window_t2_ParamLimits

0xcf30,	// (0x00059880) popup_snote2_single_text_window_t2

0xcf7c,	// (0x000598cc) popup_snote2_single_text_window_t3_ParamLimits

0xcf7c,	// (0x000598cc) popup_snote2_single_text_window_t3

0xcfbd,	// (0x0005990d) popup_snote2_single_text_window_t4_ParamLimits

0xcfbd,	// (0x0005990d) popup_snote2_single_text_window_t4

0xcff3,	// (0x00059943) popup_snote2_single_text_window_t5_ParamLimits

0xcff3,	// (0x00059943) popup_snote2_single_text_window_t5

0x0004,

0xfc6a,	// (0x0005c5ba) popup_snote2_single_text_window_t_ParamLimits

0xfc6a,	// (0x0005c5ba) popup_snote2_single_text_window_t

0xd01e,	// (0x0005996e) popup_snote2_single_graphic_window_g1_ParamLimits

0xd01e,	// (0x0005996e) popup_snote2_single_graphic_window_g1

0xd046,	// (0x00059996) popup_snote2_single_graphic_window_g2_ParamLimits

0xd046,	// (0x00059996) popup_snote2_single_graphic_window_g2

0x0001,

0xfc75,	// (0x0005c5c5) popup_snote2_single_graphic_window_g_ParamLimits

0xfc75,	// (0x0005c5c5) popup_snote2_single_graphic_window_g

0xd06e,	// (0x000599be) popup_snote2_single_graphic_window_t1_ParamLimits

0xd06e,	// (0x000599be) popup_snote2_single_graphic_window_t1

0xd0ba,	// (0x00059a0a) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0ba,	// (0x00059a0a) popup_snote2_single_graphic_window_t2

0xcf7c,	// (0x000598cc) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf7c,	// (0x000598cc) popup_snote2_single_graphic_window_t3

0xcfbd,	// (0x0005990d) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfbd,	// (0x0005990d) popup_snote2_single_graphic_window_t4

0xcff3,	// (0x00059943) popup_snote2_single_graphic_window_t5_ParamLimits

0xcff3,	// (0x00059943) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7a,	// (0x0005c5ca) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7a,	// (0x0005c5ca) popup_snote2_single_graphic_window_t

0xbaed,	// (0x0005843d) clock_nsta_pane_cp2_t1

0xbaed,	// (0x0005843d) clock_nsta_pane_cp2_t2

0x0001,

0xfa8e,	// (0x0005c3de) clock_nsta_pane_cp2_t

0x4f0e,	// (0x0005185e) form_field_data_wide_pane_g1_ParamLimits

0x84c4,	// (0x00054e14) form_field_data_wide_pane_g2_ParamLimits

0x84c4,	// (0x00054e14) form_field_data_wide_pane_g2

0x8537,	// (0x00054e87) form_field_data_wide_pane_g3_ParamLimits

0x8537,	// (0x00054e87) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0005bfab) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0005bfab) form_field_data_wide_pane_g

0xb9c9,	// (0x00058319) grid_touch_3_pane_ParamLimits

0xb9c9,	// (0x00058319) grid_touch_3_pane

0xd106,	// (0x00059a56) cell_touch_3_pane_ParamLimits

0xd106,	// (0x00059a56) cell_touch_3_pane

0xc03b,	// (0x0005898b) cell_touch_3_pane_g1

0xc03b,	// (0x0005898b) cell_touch_3_pane_g2

0x0001,

0xfb13,	// (0x0005c463) cell_touch_3_pane_g

0x7b97,	// (0x000544e7) cont_query_data_pane

0x7b9f,	// (0x000544ef) cont_query_data_pane_cp1

0xd134,	// (0x00059a84) button_value_adjust_pane_cp7

0xd13c,	// (0x00059a8c) query_popup_pane_cp3

0x8ca2,	// (0x000555f2) bg_popup_sub_pane_cp22_ParamLimits

0x52d2,	// (0x00051c22) navi_navi_volume_pane_cp2

0x52ed,	// (0x00051c3d) popup_side_volume_key_window_g2

0x52fc,	// (0x00051c4c) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0005c041) popup_side_volume_key_window_g

0x5319,	// (0x00051c69) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0005c048) popup_side_volume_key_window_t

0x8f5c,	// (0x000558ac) popup_side_volume_key_window_ParamLimits

0x4b60,	// (0x000514b0) list_double_graphic_pane_g4_ParamLimits

0x4b60,	// (0x000514b0) list_double_graphic_pane_g4

0x8105,	// (0x00054a55) list_single_2heading_msg_pane_ParamLimits

0x8105,	// (0x00054a55) list_single_2heading_msg_pane

0x82cd,	// (0x00054c1d) list_single_2heading_msg_pane_g1_ParamLimits

0x82cd,	// (0x00054c1d) list_single_2heading_msg_pane_g1

0x82d9,	// (0x00054c29) list_single_2heading_msg_pane_g2_ParamLimits

0x82d9,	// (0x00054c29) list_single_2heading_msg_pane_g2

0x82e5,	// (0x00054c35) list_single_2heading_msg_pane_g3_ParamLimits

0x82e5,	// (0x00054c35) list_single_2heading_msg_pane_g3

0x82f1,	// (0x00054c41) list_single_2heading_msg_pane_g4_ParamLimits

0x82f1,	// (0x00054c41) list_single_2heading_msg_pane_g4

0x0003,

0xfc85,	// (0x0005c5d5) list_single_2heading_msg_pane_g_ParamLimits

0xfc85,	// (0x0005c5d5) list_single_2heading_msg_pane_g

0x8309,	// (0x00054c59) list_single_2heading_msg_pane_t1_ParamLimits

0x8309,	// (0x00054c59) list_single_2heading_msg_pane_t1

0x8331,	// (0x00054c81) list_single_2heading_msg_pane_t2_ParamLimits

0x8331,	// (0x00054c81) list_single_2heading_msg_pane_t2

0x8365,	// (0x00054cb5) list_single_2heading_msg_pane_t3_ParamLimits

0x8365,	// (0x00054cb5) list_single_2heading_msg_pane_t3

0x839e,	// (0x00054cee) list_single_2heading_msg_pane_t4_ParamLimits

0x839e,	// (0x00054cee) list_single_2heading_msg_pane_t4

0x0003,

0xfc8e,	// (0x0005c5de) list_single_2heading_msg_pane_t_ParamLimits

0xfc8e,	// (0x0005c5de) list_single_2heading_msg_pane_t

0x7786,	// (0x000540d6) title_pane_g4_ParamLimits

0x7786,	// (0x000540d6) title_pane_g4

0x50e1,	// (0x00051a31) title_pane_stacon_g3_ParamLimits

0x50e1,	// (0x00051a31) title_pane_stacon_g3

0xcc62,	// (0x000595b2) list_single_2graphic_im_pane_g4_ParamLimits

0xcc62,	// (0x000595b2) list_single_2graphic_im_pane_g4

0xaaf8,	// (0x00057448) popup_side_volume_key_window_cp

0xb308,	// (0x00057c58) main_idle_act2_pane_t1

0x5d18,	// (0x00052668) toolbar_button_pane_g10

0x847a,	// (0x00054dca) popup_toolbar_window_cp1

0xbade,	// (0x0005842e) clock_nsta_pane_cp_t1

0xbade,	// (0x0005842e) clock_nsta_pane_cp_t2

0x0001,

0xfa89,	// (0x0005c3d9) clock_nsta_pane_cp_t

0x52d2,	// (0x00051c22) navi_navi_volume_pane_cp2_ParamLimits

0x52e1,	// (0x00051c31) popup_side_volume_key_window_g1_ParamLimits

0x52ed,	// (0x00051c3d) popup_side_volume_key_window_g2_ParamLimits

0x52fc,	// (0x00051c4c) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0005c041) popup_side_volume_key_window_g_ParamLimits

0x65b8,	// (0x00052f08) fep_hwr_aid_pane

0x665f,	// (0x00052faf) bg_fep_hwr_top_pane_g4_ParamLimits

0xc097,	// (0x000589e7) fep_hwr_top_pane_g1_ParamLimits

0xc0a9,	// (0x000589f9) fep_hwr_top_pane_g2_ParamLimits

0x667f,	// (0x00052fcf) fep_hwr_top_pane_g3_ParamLimits

0xfade,	// (0x0005c42e) fep_hwr_top_pane_g_ParamLimits

0x6694,	// (0x00052fe4) fep_hwr_top_text_pane_ParamLimits

0xa8bb,	// (0x0005720b) aid_touch_tab_arrow_arrow_2

0xa8c4,	// (0x00057214) aid_touch_tab_arrow_left_2

0x65cc,	// (0x00052f1c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6603,	// (0x00052f53) fep_hwr_prediction_pane

0xc209,	// (0x00058b59) fep_vkb_prediction_pane

0xc30d,	// (0x00058c5d) fep_vkb_side_pane_g3_ParamLimits

0xc30d,	// (0x00058c5d) fep_vkb_side_pane_g3

0x680f,	// (0x0005315f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x696c,	// (0x000532bc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6979,	// (0x000532c9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8d,	// (0x0005c4dd) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6aa8,	// (0x000533f8) fep_hwr_prediction_pane_g1

0x6ab2,	// (0x00053402) fep_hwr_prediction_pane_g2

0x6aba,	// (0x0005340a) fep_hwr_prediction_pane_g3

0x6ac2,	// (0x00053412) fep_hwr_prediction_pane_g4

0x0003,

0xfc97,	// (0x0005c5e7) fep_hwr_prediction_pane_g

0xd161,	// (0x00059ab1) fep_vkb_prediction_pane_g1

0xd16b,	// (0x00059abb) fep_vkb_prediction_pane_g2

0xd173,	// (0x00059ac3) fep_vkb_prediction_pane_g3

0xd17b,	// (0x00059acb) fep_vkb_prediction_pane_g4

0x0003,

0xfca0,	// (0x0005c5f0) fep_vkb_prediction_pane_g

0x60df,	// (0x00052a2f) slider_set_pane_g3

0x60f3,	// (0x00052a43) slider_set_pane_g4

0x610b,	// (0x00052a5b) slider_set_pane_g5

0x60df,	// (0x00052a2f) slider_set_pane_g6

0x6121,	// (0x00052a71) slider_set_pane_g7

0xaf58,	// (0x000578a8) slider_form_pane_g3

0xaf61,	// (0x000578b1) slider_form_pane_g4

0xaf69,	// (0x000578b9) slider_form_pane_g5

0xaf58,	// (0x000578a8) slider_form_pane_g6

0xaf71,	// (0x000578c1) slider_form_pane_g7

0xb5b3,	// (0x00057f03) slider_set_pane_vc_g3

0xb5bc,	// (0x00057f0c) slider_set_pane_vc_g4

0xb5c5,	// (0x00057f15) slider_set_pane_vc_g5

0xb5b3,	// (0x00057f03) slider_set_pane_vc_g6

0xb5ce,	// (0x00057f1e) slider_set_pane_vc_g7

0xb790,	// (0x000580e0) slider_form_pane_vc_g1

0xb799,	// (0x000580e9) slider_form_pane_vc_g2

0xb7a2,	// (0x000580f2) slider_form_pane_vc_g3

0xb790,	// (0x000580e0) slider_form_pane_vc_g4

0xb7ab,	// (0x000580fb) slider_form_pane_vc_g5

0x0004,

0xfa5b,	// (0x0005c3ab) slider_form_pane_vc_g

0x478d,	// (0x000510dd) main_idle_act3_pane

0xd183,	// (0x00059ad3) ai3_links_pane

0xd18c,	// (0x00059adc) popup_ai3_data_window_ParamLimits

0xd18c,	// (0x00059adc) popup_ai3_data_window

0x27d7,	// (0x0004f127) grid_ai3_links_pane

0xd1a6,	// (0x00059af6) cell_ai3_links_pane_ParamLimits

0xd1a6,	// (0x00059af6) cell_ai3_links_pane

0xd1be,	// (0x00059b0e) bg_popup_sub_pane_cp11

0xd1cb,	// (0x00059b1b) cell_ai3_links_pane_g1

0x27d7,	// (0x0004f127) bg_popup_sub_pane_cp12

0xd1f0,	// (0x00059b40) heading_ai3_data_pane

0xd1f8,	// (0x00059b48) list_ai3_gene_pane

0xd204,	// (0x00059b54) popup_ai3_data_window_g1

0xd20c,	// (0x00059b5c) heading_ai3_data_pane_g1

0xd214,	// (0x00059b64) heading_ai3_data_pane_t1

0xd222,	// (0x00059b72) list_double_ai3_gene_pane_ParamLimits

0xd222,	// (0x00059b72) list_double_ai3_gene_pane

0xd22f,	// (0x00059b7f) list_single_ai3_gene_pane_ParamLimits

0xd22f,	// (0x00059b7f) list_single_ai3_gene_pane

0xc000,	// (0x00058950) list_highlight_pane_cp7_ParamLimits

0xc000,	// (0x00058950) list_highlight_pane_cp7

0xd23c,	// (0x00059b8c) list_single_a13_gene_pane_t1_ParamLimits

0xd23c,	// (0x00059b8c) list_single_a13_gene_pane_t1

0xd253,	// (0x00059ba3) list_single_ai3_gene_pane_g1

0xd25c,	// (0x00059bac) list_single_ai3_gene_pane_g2

0x0001,

0xfca9,	// (0x0005c5f9) list_single_ai3_gene_pane_g

0xd264,	// (0x00059bb4) list_double_ai3_gene_pane_g1_ParamLimits

0xd264,	// (0x00059bb4) list_double_ai3_gene_pane_g1

0xd270,	// (0x00059bc0) list_double_ai3_gene_pane_t1_ParamLimits

0xd270,	// (0x00059bc0) list_double_ai3_gene_pane_t1

0xd28c,	// (0x00059bdc) list_double_ai3_gene_pane_t2_ParamLimits

0xd28c,	// (0x00059bdc) list_double_ai3_gene_pane_t2

0xd2a2,	// (0x00059bf2) list_double_ai3_gene_pane_t3_ParamLimits

0xd2a2,	// (0x00059bf2) list_double_ai3_gene_pane_t3

0x0002,

0xfcae,	// (0x0005c5fe) list_double_ai3_gene_pane_t_ParamLimits

0xfcae,	// (0x0005c5fe) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x82c3,	// (0x00054c13) aid_size_min_col_2

0xd14d,	// (0x00059a9d) aid_size_min_msg_ParamLimits

0xd14d,	// (0x00059a9d) aid_size_min_msg

0xc40d,	// (0x00058d5d) fep_vkb_top_text_pane_g2_ParamLimits

0xc40d,	// (0x00058d5d) fep_vkb_top_text_pane_g2

0x0001,

0xfb0e,	// (0x0005c45e) fep_vkb_top_text_pane_g_ParamLimits

0xfb0e,	// (0x0005c45e) fep_vkb_top_text_pane_g

0x478d,	// (0x000510dd) main_hc_apps_shell_pane

0xd2bf,	// (0x00059c0f) grid_hc_apps_pane_ParamLimits

0xd2bf,	// (0x00059c0f) grid_hc_apps_pane

0xd2d1,	// (0x00059c21) list_hc_apps_pane

0xd2d9,	// (0x00059c29) scroll_pane_cp37_ParamLimits

0xd2d9,	// (0x00059c29) scroll_pane_cp37

0xd2e5,	// (0x00059c35) cell_hc_apps_pane_ParamLimits

0xd2e5,	// (0x00059c35) cell_hc_apps_pane

0xd393,	// (0x00059ce3) cell_hc_apps_pane_g1_ParamLimits

0xd393,	// (0x00059ce3) cell_hc_apps_pane_g1

0xd3c3,	// (0x00059d13) cell_hc_apps_pane_g2_ParamLimits

0xd3c3,	// (0x00059d13) cell_hc_apps_pane_g2

0xd3df,	// (0x00059d2f) cell_hc_apps_pane_g3_ParamLimits

0xd3df,	// (0x00059d2f) cell_hc_apps_pane_g3

0x0002,

0xfcb5,	// (0x0005c605) cell_hc_apps_pane_g_ParamLimits

0xfcb5,	// (0x0005c605) cell_hc_apps_pane_g

0xd401,	// (0x00059d51) cell_hc_apps_pane_t1_ParamLimits

0xd401,	// (0x00059d51) cell_hc_apps_pane_t1

0x7abb,	// (0x0005440b) grid_highlight_pane_cp10_ParamLimits

0x7abb,	// (0x0005440b) grid_highlight_pane_cp10

0xd441,	// (0x00059d91) list_single_hc_apps_pane_ParamLimits

0xd441,	// (0x00059d91) list_single_hc_apps_pane

0xd49d,	// (0x00059ded) list_single_hc_apps_pane_g1

0x83c3,	// (0x00054d13) list_single_hc_apps_pane_g2

0x0001,

0xfcbc,	// (0x0005c60c) list_single_hc_apps_pane_g

0x83dc,	// (0x00054d2c) list_single_hc_apps_pane_g2_copy1

0x83f8,	// (0x00054d48) list_single_hc_apps_pane_t1

0x7832,	// (0x00054182) bg_set_opt_pane_cp_ParamLimits

0x49ee,	// (0x0005133e) setting_slider_pane_t1_ParamLimits

0x4a07,	// (0x00051357) setting_slider_pane_t2_ParamLimits

0x4a21,	// (0x00051371) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0005be89) setting_slider_pane_t_ParamLimits

0x4a39,	// (0x00051389) slider_set_pane_ParamLimits

0x55e9,	// (0x00051f39) control_pane_g5_ParamLimits

0x55e9,	// (0x00051f39) control_pane_g5

0xada7,	// (0x000576f7) slider_set_pane_g1_ParamLimits

0x60d3,	// (0x00052a23) slider_set_pane_g2_ParamLimits

0x60df,	// (0x00052a2f) slider_set_pane_g3_ParamLimits

0x60f3,	// (0x00052a43) slider_set_pane_g4_ParamLimits

0x610b,	// (0x00052a5b) slider_set_pane_g5_ParamLimits

0x60df,	// (0x00052a2f) slider_set_pane_g6_ParamLimits

0x6121,	// (0x00052a71) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0005c28f) slider_set_pane_g_ParamLimits

0x9048,	// (0x00055998) navi_icon_text_pane_ParamLimits

0x9532,	// (0x00055e82) aid_fill_nsta_2_ParamLimits

0x9571,	// (0x00055ec1) aid_touch_tab_arrow_left_ParamLimits

0x9580,	// (0x00055ed0) aid_touch_tab_arrow_right_ParamLimits

0x95ed,	// (0x00055f3d) clock_nsta_pane_ParamLimits

0xa89d,	// (0x000571ed) navi_icon_pane_g1_ParamLimits

0xa8a9,	// (0x000571f9) navi_text_pane_t1_ParamLimits

0xbbea,	// (0x0005853a) navi_icon_text_pane_g1_ParamLimits

0xbbf6,	// (0x00058546) navi_icon_text_pane_t1_ParamLimits

0xd49d,	// (0x00059ded) list_single_hc_apps_pane_g1_ParamLimits

0x83c3,	// (0x00054d13) list_single_hc_apps_pane_g2_ParamLimits

0xfcbc,	// (0x0005c60c) list_single_hc_apps_pane_g_ParamLimits

0x83dc,	// (0x00054d2c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x83f8,	// (0x00054d48) list_single_hc_apps_pane_t1_ParamLimits

0x48f8,	// (0x00051248) popup_toolbar2_fixed_window_ParamLimits

0x48f8,	// (0x00051248) popup_toolbar2_fixed_window

0x5bfa,	// (0x0005254a) popup_toolbar2_float_window

0x27d7,	// (0x0004f127) bg_popup_sub_pane_cp27

0xd4b6,	// (0x00059e06) grid_toolbar2_float_pane

0x27d7,	// (0x0004f127) bg_popup_sub_pane_cp26

0xd4b6,	// (0x00059e06) grid_toolbar2_fixed_pane

0xd4be,	// (0x00059e0e) cell_toolbar2_fixed_pane_ParamLimits

0xd4be,	// (0x00059e0e) cell_toolbar2_fixed_pane

0xd4ce,	// (0x00059e1e) cell_toolbar2_fixed_pane_g1

0xd4d7,	// (0x00059e27) toolbar2_fixed_button_pane

0x9a0a,	// (0x0005635a) toolbar2_fixed_button_pane_g1

0x9a1a,	// (0x0005636a) toolbar2_fixed_button_pane_g2

0x9a12,	// (0x00056362) toolbar2_fixed_button_pane_g3

0x9a2a,	// (0x0005637a) toolbar2_fixed_button_pane_g4

0x9a22,	// (0x00056372) toolbar2_fixed_button_pane_g5

0x9a32,	// (0x00056382) toolbar2_fixed_button_pane_g6

0x9a3a,	// (0x0005638a) toolbar2_fixed_button_pane_g7

0x9a4a,	// (0x0005639a) toolbar2_fixed_button_pane_g8

0x9a42,	// (0x00056392) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0005c191) toolbar2_fixed_button_pane_g

0xd4df,	// (0x00059e2f) cell_toolbar2_float_pane_ParamLimits

0xd4df,	// (0x00059e2f) cell_toolbar2_float_pane

0xd4f0,	// (0x00059e40) cell_toolbar2_float_pane_g1

0xd4d7,	// (0x00059e27) toolbar2_fixed_button_pane_cp

0xc169,	// (0x00058ab9) fep_vkb_accented_list_pane_ParamLimits

0xc169,	// (0x00058ab9) fep_vkb_accented_list_pane

0x67ef,	// (0x0005313f) bg_popup_fep_shadow_pane_g9

0x91bc,	// (0x00055b0c) bg_popup_fep_shadow_pane_cp3

0x8684,	// (0x00054fd4) list_accented_list_pane

0xd4f9,	// (0x00059e49) list_single_accented_list_pane_ParamLimits

0xd4f9,	// (0x00059e49) list_single_accented_list_pane

0x91bc,	// (0x00055b0c) list_highlight_pane_cp10

0xd50a,	// (0x00059e5a) list_single_accented_list_pane_t1

0x5b4a,	// (0x0005249a) popup_slider_window_ParamLimits

0x5b4a,	// (0x0005249a) popup_slider_window

0xd144,	// (0x00059a94) aid_indentation_list_msg

0xd5ce,	// (0x00059f1e) bg_popup_window_pane_cp19

0xd636,	// (0x00059f86) popup_slider_window_g1

0xd652,	// (0x00059fa2) popup_slider_window_g2

0xd66e,	// (0x00059fbe) popup_slider_window_g3

0x0005,

0xfcc1,	// (0x0005c611) popup_slider_window_g

0xd6d4,	// (0x0005a024) popup_slider_window_t1

0xd748,	// (0x0005a098) small_volume_slider_vertical_pane

0xc03b,	// (0x0005898b) small_volume_slider_vertical_pane_g1

0xc03b,	// (0x0005898b) small_volume_slider_vertical_pane_g2

0xd764,	// (0x0005a0b4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd3,	// (0x0005c623) small_volume_slider_vertical_pane_g

0x46b0,	// (0x00051000) area_side_right_pane_ParamLimits

0x46b0,	// (0x00051000) area_side_right_pane

0x6aca,	// (0x0005341a) aid_size_side_button_ParamLimits

0x6aca,	// (0x0005341a) aid_size_side_button

0x6ade,	// (0x0005342e) grid_sctrl_middle_pane_ParamLimits

0x6ade,	// (0x0005342e) grid_sctrl_middle_pane

0x6afd,	// (0x0005344d) sctrl_sk_bottom_pane

0x6b0e,	// (0x0005345e) sctrl_sk_top_pane

0x6b20,	// (0x00053470) aid_touch_sctrl_top

0x6b2d,	// (0x0005347d) bg_sctrl_sk_pane_ParamLimits

0x6b2d,	// (0x0005347d) bg_sctrl_sk_pane

0x6b3b,	// (0x0005348b) sctrl_sk_top_pane_g1

0x6b48,	// (0x00053498) sctrl_sk_top_pane_t1

0x6b20,	// (0x00053470) aid_touch_sctrl_bottom

0x6b2d,	// (0x0005347d) bg_sctrl_sk_pane_cp_ParamLimits

0x6b2d,	// (0x0005347d) bg_sctrl_sk_pane_cp

0x6b63,	// (0x000534b3) sctrl_sk_bottom_pane_g1

0x6b48,	// (0x00053498) sctrl_sk_bottom_pane_t1

0x6b6c,	// (0x000534bc) cell_sctrl_middle_pane_ParamLimits

0x6b6c,	// (0x000534bc) cell_sctrl_middle_pane

0x6b87,	// (0x000534d7) aid_touch_sctrl_middle_ParamLimits

0x6b87,	// (0x000534d7) aid_touch_sctrl_middle

0x6b99,	// (0x000534e9) bg_sctrl_middle_pane_ParamLimits

0x6b99,	// (0x000534e9) bg_sctrl_middle_pane

0x680f,	// (0x0005315f) cell_sctrl_middle_pane_g1_ParamLimits

0x680f,	// (0x0005315f) cell_sctrl_middle_pane_g1

0x6ba7,	// (0x000534f7) cell_sctrl_middle_pane_g2_ParamLimits

0x6ba7,	// (0x000534f7) cell_sctrl_middle_pane_g2

0x0001,

0xfcdf,	// (0x0005c62f) cell_sctrl_middle_pane_g_ParamLimits

0xfcdf,	// (0x0005c62f) cell_sctrl_middle_pane_g

0x9a0a,	// (0x0005635a) bg_sctrl_middle_pane_g1

0x9a12,	// (0x00056362) bg_sctrl_middle_pane_g2

0x9a1a,	// (0x0005636a) bg_sctrl_middle_pane_g3

0x9a22,	// (0x00056372) bg_sctrl_middle_pane_g4

0x9a2a,	// (0x0005637a) bg_sctrl_middle_pane_g5

0x9a32,	// (0x00056382) bg_sctrl_middle_pane_g6

0x9a3a,	// (0x0005638a) bg_sctrl_middle_pane_g7

0x9a42,	// (0x00056392) bg_sctrl_middle_pane_g8

0x0007,

0xfce4,	// (0x0005c634) bg_sctrl_middle_pane_g

0x9a4a,	// (0x0005639a) bg_sctrl_middle_pane_g8_copy1

0x9a0a,	// (0x0005635a) bg_sctrl_sk_pane_g1

0x9a1a,	// (0x0005636a) bg_sctrl_sk_pane_g2

0x9a12,	// (0x00056362) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0005c191) bg_sctrl_sk_pane_g

0x8440,	// (0x00054d90) aid_size_touch_scroll_bar

0x9a2a,	// (0x0005637a) bg_sctrl_sk_pane_g4

0x9a22,	// (0x00056372) bg_sctrl_sk_pane_g5

0x9a32,	// (0x00056382) bg_sctrl_sk_pane_g6

0x9a3a,	// (0x0005638a) bg_sctrl_sk_pane_g7

0x9a4a,	// (0x0005639a) bg_sctrl_sk_pane_g8

0x9a42,	// (0x00056392) bg_sctrl_sk_pane_g9

0x57b1,	// (0x00052101) popup_fep_china_hwr2_fs_candidate_window

0x57bb,	// (0x0005210b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x57bb,	// (0x0005210b) popup_fep_china_hwr2_fs_control_window

0x680f,	// (0x0005315f) sctrl_sk_top_pane_g2

0x0001,

0xfcda,	// (0x0005c62a) sctrl_sk_top_pane_g

0xd76d,	// (0x0005a0bd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd76d,	// (0x0005a0bd) aid_fep_china_hwr2_fs_cell

0xd77f,	// (0x0005a0cf) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd77f,	// (0x0005a0cf) bg_popup_fep_shadow_pane_cp4

0xd796,	// (0x0005a0e6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd796,	// (0x0005a0e6) bg_popup_fep_shadow_pane_cp5

0xd7a8,	// (0x0005a0f8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7a8,	// (0x0005a0f8) popup_fep_china_hwr2_fs_control_bar_grid

0xd7b8,	// (0x0005a108) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7c0,	// (0x0005a110) aid_fep_china_hwr2_fs_candi_cell

0x27d7,	// (0x0004f127) bg_popup_fep_shadow_pane_cp6

0xd7ca,	// (0x0005a11a) popup_fep_china_hwr2_fs_candidate_grid

0xd7d4,	// (0x0005a124) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7d4,	// (0x0005a124) cell_fep_china_hwr2_fs_funtion_grid

0xc03b,	// (0x0005898b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7ec,	// (0x0005a13c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7ec,	// (0x0005a13c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7fa,	// (0x0005a14a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7fa,	// (0x0005a14a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf5,	// (0x0005c645) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf5,	// (0x0005c645) cell_fep_china_hwr2_fs_funtion_grid_g

0xd810,	// (0x0005a160) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd810,	// (0x0005a160) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd825,	// (0x0005a175) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd825,	// (0x0005a175) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfa,	// (0x0005c64a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfa,	// (0x0005c64a) cell_fep_china_hwr2_fs_funtion_grid_t

0xd841,	// (0x0005a191) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd849,	// (0x0005a199) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd851,	// (0x0005a1a1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcff,	// (0x0005c64f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd859,	// (0x0005a1a9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd859,	// (0x0005a1a9) cell_fep_china_hwr2_fs_candidate_grid

0xd872,	// (0x0005a1c2) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd87a,	// (0x0005a1ca) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc03b,	// (0x0005898b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc03b,	// (0x0005898b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb13,	// (0x0005c463) cell_fep_china_hwr2_fs_candidate_grid_g

0xd882,	// (0x0005a1d2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9600,	// (0x00055f50) clock_nsta_pane_cp_24_ParamLimits

0x9600,	// (0x00055f50) clock_nsta_pane_cp_24

0x967e,	// (0x00055fce) indicator_nsta_pane_cp_24_ParamLimits

0x967e,	// (0x00055fce) indicator_nsta_pane_cp_24

0xa719,	// (0x00057069) heading_pane_g1

0x0001,

0xf8a6,	// (0x0005c1f6) heading_pane_g

0xb151,	// (0x00057aa1) grid_sct_catagory_button_pane

0xb181,	// (0x00057ad1) scroll_pane_cp5_ParamLimits

0xbc38,	// (0x00058588) button_value_adjust_pane_cp5_ParamLimits

0xbc38,	// (0x00058588) button_value_adjust_pane_cp5

0xbd17,	// (0x00058667) form2_midp_time_pane_ParamLimits

0xd890,	// (0x0005a1e0) cell_sct_catagory_button_pane_ParamLimits

0xd890,	// (0x0005a1e0) cell_sct_catagory_button_pane

0xc000,	// (0x00058950) bg_button_pane_cp01_ParamLimits

0xc000,	// (0x00058950) bg_button_pane_cp01

0xc03b,	// (0x0005898b) cell_sct_catagory_button_pane_g1

0x5b89,	// (0x000524d9) popup_tb_extension_window

0xd8a2,	// (0x0005a1f2) aid_size_cell_ext_ParamLimits

0xd8a2,	// (0x0005a1f2) aid_size_cell_ext

0x7abb,	// (0x0005440b) bg_tb_trans_pane_cp1_ParamLimits

0x7abb,	// (0x0005440b) bg_tb_trans_pane_cp1

0xd8c2,	// (0x0005a212) grid_tb_ext_pane_ParamLimits

0xd8c2,	// (0x0005a212) grid_tb_ext_pane

0xd8f0,	// (0x0005a240) cell_tb_ext_pane_ParamLimits

0xd8f0,	// (0x0005a240) cell_tb_ext_pane

0xd907,	// (0x0005a257) cell_tb_ext_pane_g1_ParamLimits

0xd907,	// (0x0005a257) cell_tb_ext_pane_g1

0xd924,	// (0x0005a274) cell_tb_ext_pane_t1

0x7abb,	// (0x0005440b) list_highlight_pane_cp11_ParamLimits

0x7abb,	// (0x0005440b) list_highlight_pane_cp11

0x4917,	// (0x00051267) popup_uni_indicator_window_ParamLimits

0x4917,	// (0x00051267) popup_uni_indicator_window

0x8529,	// (0x00054e79) bg_popup_sub_pane_cp14

0xd93f,	// (0x0005a28f) list_uniindi_pane

0xd94b,	// (0x0005a29b) uniindi_top_pane

0x7abb,	// (0x0005440b) bg_uniindi_top_pane

0xd96a,	// (0x0005a2ba) uniindi_top_pane_g1

0xd980,	// (0x0005a2d0) uniindi_top_pane_g2

0x0003,

0xfd06,	// (0x0005c656) uniindi_top_pane_g

0xd9aa,	// (0x0005a2fa) uniindi_top_pane_t1

0xd9d4,	// (0x0005a324) list_single_uniindi_pane_ParamLimits

0xd9d4,	// (0x0005a324) list_single_uniindi_pane

0xc03b,	// (0x0005898b) bg_uniindi_top_pane_g1

0xd9e7,	// (0x0005a337) list_single_uniindi_pane_g1

0xd9fa,	// (0x0005a34a) list_single_uniindi_pane_t1

0x478d,	// (0x000510dd) control_bg_pane

0xda1f,	// (0x0005a36f) bg_sctrl_sk_pane_cp1

0xda28,	// (0x0005a378) bg_sctrl_sk_pane_cp2

0xda31,	// (0x0005a381) control_bg_pane_g1

0xda3a,	// (0x0005a38a) control_bg_pane_g2

0x0001,

0xfd0f,	// (0x0005c65f) control_bg_pane_g

0xba82,	// (0x000583d2) cell_indicator_nsta_pane_g1_ParamLimits

0xba90,	// (0x000583e0) cell_indicator_nsta_pane_g2_ParamLimits

0xfa77,	// (0x0005c3c7) cell_indicator_nsta_pane_g_ParamLimits

0x6597,	// (0x00052ee7) form2_midp_time_pane_t1_ParamLimits

0x5711,	// (0x00052061) main_idle_act4_pane_ParamLimits

0x5711,	// (0x00052061) main_idle_act4_pane

0x5b89,	// (0x000524d9) popup_tb_extension_window_ParamLimits

0xd8e0,	// (0x0005a230) tb_ext_find_pane_ParamLimits

0xd8e0,	// (0x0005a230) tb_ext_find_pane

0xda43,	// (0x0005a393) ai_gene_pane_1_cp1

0x9303,	// (0x00055c53) ai_gene_pane_2_cp1

0xda4b,	// (0x0005a39b) list_single_idle_plugin_calendar_pane

0xda54,	// (0x0005a3a4) list_single_idle_plugin_notification_pane

0xda5d,	// (0x0005a3ad) list_single_idle_plugin_player_pane

0xda66,	// (0x0005a3b6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda66,	// (0x0005a3b6) list_single_idle_plugin_shortcut_pane

0xda88,	// (0x0005a3d8) main_idle_act4_pane_t1

0xda9a,	// (0x0005a3ea) main_idle_act4_pane_t2

0x0001,

0xfd14,	// (0x0005c664) main_idle_act4_pane_t

0xdaac,	// (0x0005a3fc) middle_sk_idle_act4_pane_ParamLimits

0xdaac,	// (0x0005a3fc) middle_sk_idle_act4_pane

0xdac2,	// (0x0005a412) popup_clock_digital_analogue_window_cp2

0xdadc,	// (0x0005a42c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdadc,	// (0x0005a42c) shortcut_wheel_idle_act4_pane

0xc03b,	// (0x0005898b) shortcut_wheel_idle_act4_pane_g1

0xc03b,	// (0x0005898b) shortcut_wheel_idle_act4_pane_g2

0xc03b,	// (0x0005898b) shortcut_wheel_idle_act4_pane_g3

0xc03b,	// (0x0005898b) shortcut_wheel_idle_act4_pane_g4

0xc03b,	// (0x0005898b) shortcut_wheel_idle_act4_pane_g5

0xdaf0,	// (0x0005a440) shortcut_wheel_idle_act4_pane_g6

0xdaf8,	// (0x0005a448) shortcut_wheel_idle_act4_pane_g7

0xdb00,	// (0x0005a450) shortcut_wheel_idle_act4_pane_g8

0xdb08,	// (0x0005a458) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd19,	// (0x0005c669) shortcut_wheel_idle_act4_pane_g

0xc2b9,	// (0x00058c09) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2b9,	// (0x00058c09) middle_sk_idle_act4_pane_g1

0xdb6c,	// (0x0005a4bc) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb6c,	// (0x0005a4bc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3c,	// (0x0005c68c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3c,	// (0x0005c68c) middle_sk_idle_act4_pane_g

0xdb78,	// (0x0005a4c8) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb78,	// (0x0005a4c8) middle_sk_idle_act4_pane_t1

0xdb95,	// (0x0005a4e5) grid_ai_shortcut_pane_ParamLimits

0xdb95,	// (0x0005a4e5) grid_ai_shortcut_pane

0xdbae,	// (0x0005a4fe) list_highlight_pane_cp16_ParamLimits

0xdbae,	// (0x0005a4fe) list_highlight_pane_cp16

0xdbbb,	// (0x0005a50b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbbb,	// (0x0005a50b) list_single_idle_plugin_shortcut_pane_g1

0xdbc7,	// (0x0005a517) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc7,	// (0x0005a517) list_single_idle_plugin_shortcut_pane_g2

0xdbdf,	// (0x0005a52f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbdf,	// (0x0005a52f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd41,	// (0x0005c691) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd41,	// (0x0005c691) list_single_idle_plugin_shortcut_pane_g

0xdbf2,	// (0x0005a542) cell_ai_shortcut_pane_ParamLimits

0xdbf2,	// (0x0005a542) cell_ai_shortcut_pane

0xdc16,	// (0x0005a566) cell_ai_shortcut_pane_g1_ParamLimits

0xdc16,	// (0x0005a566) cell_ai_shortcut_pane_g1

0xda43,	// (0x0005a393) ai_gene_pane_1_cp2

0xdc38,	// (0x0005a588) ai_gene_pane_2_cp2

0xdc40,	// (0x0005a590) list_highlight_pane_cp15

0xdc49,	// (0x0005a599) list_single_idle_plugin_calendar_pane_g1

0xdc40,	// (0x0005a590) list_highlight_pane_cp17

0xdc51,	// (0x0005a5a1) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc59,	// (0x0005a5a9) list_single_idle_plugin_player_pane_g1

0xb3aa,	// (0x00057cfa) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd48,	// (0x0005c698) list_single_idle_plugin_player_pane_g

0xdc61,	// (0x0005a5b1) list_single_idle_plugin_player_pane_t1

0xdc6f,	// (0x0005a5bf) list_single_idle_plugin_player_pane_t2

0xdc7d,	// (0x0005a5cd) list_single_idle_plugin_player_pane_t3

0xdc8b,	// (0x0005a5db) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4d,	// (0x0005c69d) list_single_idle_plugin_player_pane_t

0xdc99,	// (0x0005a5e9) wait_bar_pane_cp15

0xdca1,	// (0x0005a5f1) grid_ai_notification_pane

0xb3aa,	// (0x00057cfa) list_single_idle_plugin_notification_pane_g1

0xdcaa,	// (0x0005a5fa) cell_ai_notification_pane_ParamLimits

0xdcaa,	// (0x0005a5fa) cell_ai_notification_pane

0xdcb7,	// (0x0005a607) cell_ai_notification_pane_g1

0xdcbf,	// (0x0005a60f) cell_ai_notification_pane_t1

0xdccd,	// (0x0005a61d) tb_ext_find_button_pane

0xdcd5,	// (0x0005a625) tb_ext_find_pane_g1

0xdcdd,	// (0x0005a62d) tb_ext_find_pane_t1

0x8bb2,	// (0x00055502) tb_ext_find_button_pane_g1

0xdceb,	// (0x0005a63b) tb_ext_find_button_pane_g2

0x0001,

0xfd56,	// (0x0005c6a6) tb_ext_find_button_pane_g

0xda88,	// (0x0005a3d8) main_idle_act4_pane_t1_ParamLimits

0xda9a,	// (0x0005a3ea) main_idle_act4_pane_t2_ParamLimits

0xfd14,	// (0x0005c664) main_idle_act4_pane_t_ParamLimits

0xdac2,	// (0x0005a412) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdad0,	// (0x0005a420) sat_plugin_idle_act4_pane_ParamLimits

0xdad0,	// (0x0005a420) sat_plugin_idle_act4_pane

0xdcf4,	// (0x0005a644) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcf4,	// (0x0005a644) sat_plugin_idle_act4_pane_t1

0xdd07,	// (0x0005a657) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd07,	// (0x0005a657) sat_plugin_idle_act4_pane_t2

0xdd1a,	// (0x0005a66a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd1a,	// (0x0005a66a) sat_plugin_idle_act4_pane_t3

0xdd2d,	// (0x0005a67d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd2d,	// (0x0005a67d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5b,	// (0x0005c6ab) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5b,	// (0x0005c6ab) sat_plugin_idle_act4_pane_t

0x4852,	// (0x000511a2) popup_battery_window_ParamLimits

0x4852,	// (0x000511a2) popup_battery_window

0x7abb,	// (0x0005440b) bg_popup_sub_pane_cp25_ParamLimits

0x7abb,	// (0x0005440b) bg_popup_sub_pane_cp25

0xdd40,	// (0x0005a690) popup_battery_window_g1_ParamLimits

0xdd40,	// (0x0005a690) popup_battery_window_g1

0xdd4c,	// (0x0005a69c) popup_battery_window_t1_ParamLimits

0xdd4c,	// (0x0005a69c) popup_battery_window_t1

0xdd5e,	// (0x0005a6ae) popup_battery_window_t2_ParamLimits

0xdd5e,	// (0x0005a6ae) popup_battery_window_t2

0x0001,

0xfd64,	// (0x0005c6b4) popup_battery_window_t_ParamLimits

0xfd64,	// (0x0005c6b4) popup_battery_window_t

0x91d0,	// (0x00055b20) midp_canvas_pane_ParamLimits

0x9247,	// (0x00055b97) midp_keypad_pane_ParamLimits

0x9247,	// (0x00055b97) midp_keypad_pane

0x94e0,	// (0x00055e30) main_midp_pane_ParamLimits

0xbafc,	// (0x0005844c) signal_pane_g2_cp_ParamLimits

0xdd7b,	// (0x0005a6cb) aid_size_cell_midp_keypad_ParamLimits

0xdd7b,	// (0x0005a6cb) aid_size_cell_midp_keypad

0xdd95,	// (0x0005a6e5) midp_keyp_game_grid_pane_ParamLimits

0xdd95,	// (0x0005a6e5) midp_keyp_game_grid_pane

0xddb5,	// (0x0005a705) midp_keyp_rocker_pane_ParamLimits

0xddb5,	// (0x0005a705) midp_keyp_rocker_pane

0xddee,	// (0x0005a73e) midp_keyp_sk_left_pane_ParamLimits

0xddee,	// (0x0005a73e) midp_keyp_sk_left_pane

0xde48,	// (0x0005a798) midp_keyp_sk_right_pane_ParamLimits

0xde48,	// (0x0005a798) midp_keyp_sk_right_pane

0x27d7,	// (0x0004f127) bg_button_pane_cp03

0xdea2,	// (0x0005a7f2) midp_keyp_sk_left_pane_g1

0x27d7,	// (0x0004f127) bg_button_pane_cp04

0xdea2,	// (0x0005a7f2) midp_keyp_sk_right_pane_g1

0xc03b,	// (0x0005898b) midp_keyp_rocker_pane_g1

0xdecc,	// (0x0005a81c) keyp_game_cell_pane_ParamLimits

0xdecc,	// (0x0005a81c) keyp_game_cell_pane

0x27d7,	// (0x0004f127) bg_button_pane_cp02

0xdedf,	// (0x0005a82f) keyp_game_cell_pane_g1

0x4896,	// (0x000511e6) popup_fep_vkb2_window_ParamLimits

0x4896,	// (0x000511e6) popup_fep_vkb2_window

0x6bc5,	// (0x00053515) aid_size_cell_vkb2_ParamLimits

0x6bc5,	// (0x00053515) aid_size_cell_vkb2

0x6c19,	// (0x00053569) popup_fep_vkb2_window_g1_ParamLimits

0x6c19,	// (0x00053569) popup_fep_vkb2_window_g1

0x6c61,	// (0x000535b1) vkb2_area_bottom_pane_ParamLimits

0x6c61,	// (0x000535b1) vkb2_area_bottom_pane

0x6cad,	// (0x000535fd) vkb2_area_keypad_pane_ParamLimits

0x6cad,	// (0x000535fd) vkb2_area_keypad_pane

0x6cef,	// (0x0005363f) vkb2_area_top_pane_ParamLimits

0x6cef,	// (0x0005363f) vkb2_area_top_pane

0x6d69,	// (0x000536b9) vkb2_top_entry_pane_ParamLimits

0x6d69,	// (0x000536b9) vkb2_top_entry_pane

0x6d93,	// (0x000536e3) vkb2_top_grid_left_pane_ParamLimits

0x6d93,	// (0x000536e3) vkb2_top_grid_left_pane

0x6db1,	// (0x00053701) vkb2_top_grid_right_pane_ParamLimits

0x6db1,	// (0x00053701) vkb2_top_grid_right_pane

0x6dcf,	// (0x0005371f) vkb2_cell_keypad_pane_ParamLimits

0x6dcf,	// (0x0005371f) vkb2_cell_keypad_pane

0x6ea0,	// (0x000537f0) vkb2_area_bottom_grid_pane_ParamLimits

0x6ea0,	// (0x000537f0) vkb2_area_bottom_grid_pane

0x6ec6,	// (0x00053816) vkb2_area_bottom_pane_g1_ParamLimits

0x6ec6,	// (0x00053816) vkb2_area_bottom_pane_g1

0x6eea,	// (0x0005383a) vkb2_area_bottom_pane_g2_ParamLimits

0x6eea,	// (0x0005383a) vkb2_area_bottom_pane_g2

0x6f18,	// (0x00053868) vkb2_area_bottom_pane_g3_ParamLimits

0x6f18,	// (0x00053868) vkb2_area_bottom_pane_g3

0x0002,

0xfd69,	// (0x0005c6b9) vkb2_area_bottom_pane_g_ParamLimits

0xfd69,	// (0x0005c6b9) vkb2_area_bottom_pane_g

0x6f79,	// (0x000538c9) vkb2_top_cell_left_pane_ParamLimits

0x6f79,	// (0x000538c9) vkb2_top_cell_left_pane

0xdef0,	// (0x0005a840) vkb2_top_entry_pane_g1_ParamLimits

0xdef0,	// (0x0005a840) vkb2_top_entry_pane_g1

0xdefe,	// (0x0005a84e) vkb2_top_entry_pane_t1_ParamLimits

0xdefe,	// (0x0005a84e) vkb2_top_entry_pane_t1

0xdf30,	// (0x0005a880) vkb2_top_entry_pane_t2_ParamLimits

0xdf30,	// (0x0005a880) vkb2_top_entry_pane_t2

0xdf62,	// (0x0005a8b2) vkb2_top_entry_pane_t3_ParamLimits

0xdf62,	// (0x0005a8b2) vkb2_top_entry_pane_t3

0x0002,

0xfd70,	// (0x0005c6c0) vkb2_top_entry_pane_t_ParamLimits

0xfd70,	// (0x0005c6c0) vkb2_top_entry_pane_t

0x6fc6,	// (0x00053916) vkb2_top_grid_right_pane_g1_ParamLimits

0x6fc6,	// (0x00053916) vkb2_top_grid_right_pane_g1

0x6fdc,	// (0x0005392c) vkb2_top_grid_right_pane_g2_ParamLimits

0x6fdc,	// (0x0005392c) vkb2_top_grid_right_pane_g2

0x6ff4,	// (0x00053944) vkb2_top_grid_right_pane_g3_ParamLimits

0x6ff4,	// (0x00053944) vkb2_top_grid_right_pane_g3

0x700c,	// (0x0005395c) vkb2_top_grid_right_pane_g4_ParamLimits

0x700c,	// (0x0005395c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd77,	// (0x0005c6c7) vkb2_top_grid_right_pane_g_ParamLimits

0xfd77,	// (0x0005c6c7) vkb2_top_grid_right_pane_g

0x7022,	// (0x00053972) vkb2_top_cell_left_pane_g1

0x7039,	// (0x00053989) vkb2_cell_keypad_pane_g1_ParamLimits

0x7039,	// (0x00053989) vkb2_cell_keypad_pane_g1

0xdf86,	// (0x0005a8d6) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf86,	// (0x0005a8d6) vkb2_cell_keypad_pane_t1

0x7047,	// (0x00053997) vkb2_cell_bottom_grid_pane_ParamLimits

0x7047,	// (0x00053997) vkb2_cell_bottom_grid_pane

0x7080,	// (0x000539d0) vkb2_cell_bottom_grid_pane_g1

0xdb10,	// (0x0005a460) aid_call2_pane_cp02

0xdb18,	// (0x0005a468) aid_call_pane_cp02

0xdb20,	// (0x0005a470) clock_digital_number_pane_cp10

0xdb28,	// (0x0005a478) clock_digital_number_pane_cp11

0xdb30,	// (0x0005a480) clock_digital_number_pane_cp12

0xdb38,	// (0x0005a488) clock_digital_number_pane_cp13

0xdb40,	// (0x0005a490) clock_digital_separator_pane_cp10

0x8bb2,	// (0x00055502) popup_clock_digital_analogue_window_cp2_g1

0x8bb2,	// (0x00055502) popup_clock_digital_analogue_window_cp2_g2

0xdb48,	// (0x0005a498) popup_clock_digital_analogue_window_cp2_g3

0x8bb2,	// (0x00055502) popup_clock_digital_analogue_window_cp2_g4

0xdb48,	// (0x0005a498) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2c,	// (0x0005c67c) popup_clock_digital_analogue_window_cp2_g

0xdb50,	// (0x0005a4a0) popup_clock_digital_analogue_window_cp2_t1

0xdb5e,	// (0x0005a4ae) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd37,	// (0x0005c687) popup_clock_digital_analogue_window_cp2_t

0xc03b,	// (0x0005898b) clock_digital_number_pane_cp10_g1

0xc03b,	// (0x0005898b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb13,	// (0x0005c463) clock_digital_number_pane_cp10_g

0xc03b,	// (0x0005898b) clock_digital_separator_pane_cp10_g1

0xc03b,	// (0x0005898b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb13,	// (0x0005c463) clock_digital_separator_pane_cp10_g

0xd98c,	// (0x0005a2dc) uniindi_top_pane_g3

0xd99d,	// (0x0005a2ed) uniindi_top_pane_g4

0x6e5a,	// (0x000537aa) vkb2_row_keypad_pane_ParamLimits

0x6e5a,	// (0x000537aa) vkb2_row_keypad_pane

0x709c,	// (0x000539ec) vkb2_cell_t_keypad_pane_ParamLimits

0x709c,	// (0x000539ec) vkb2_cell_t_keypad_pane

0x70ac,	// (0x000539fc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x70ac,	// (0x000539fc) vkb2_cell_t_keypad_pane_cp08

0x70bf,	// (0x00053a0f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x70bf,	// (0x00053a0f) vkb2_cell_t_keypad_pane_cp09

0x70d3,	// (0x00053a23) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x70d3,	// (0x00053a23) vkb2_cell_t_keypad_pane_cp01

0x70e4,	// (0x00053a34) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x70e4,	// (0x00053a34) vkb2_cell_t_keypad_pane_cp02

0x70f5,	// (0x00053a45) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x70f5,	// (0x00053a45) vkb2_cell_t_keypad_pane_cp03

0x7106,	// (0x00053a56) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7106,	// (0x00053a56) vkb2_cell_t_keypad_pane_cp04

0x7117,	// (0x00053a67) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7117,	// (0x00053a67) vkb2_cell_t_keypad_pane_cp05

0x7128,	// (0x00053a78) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7128,	// (0x00053a78) vkb2_cell_t_keypad_pane_cp06

0x7139,	// (0x00053a89) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7139,	// (0x00053a89) vkb2_cell_t_keypad_pane_cp07

0x714a,	// (0x00053a9a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x714a,	// (0x00053a9a) vkb2_cell_t_keypad_pane_cp10

0x680f,	// (0x0005315f) vkb2_cell_t_keypad_pane_g1

0xdf9d,	// (0x0005a8ed) vkb2_cell_t_keypad_pane_t1

0x478d,	// (0x000510dd) popup_grid_graphic2_window

0xdfaf,	// (0x0005a8ff) aid_size_cell_graphic2_ParamLimits

0xdfaf,	// (0x0005a8ff) aid_size_cell_graphic2

0xdfe7,	// (0x0005a937) bg_popup_window_pane_cp21_ParamLimits

0xdfe7,	// (0x0005a937) bg_popup_window_pane_cp21

0xdff5,	// (0x0005a945) graphic2_pages_pane_ParamLimits

0xdff5,	// (0x0005a945) graphic2_pages_pane

0xe03b,	// (0x0005a98b) grid_graphic2_control_pane_ParamLimits

0xe03b,	// (0x0005a98b) grid_graphic2_control_pane

0xe079,	// (0x0005a9c9) grid_graphic2_pane_ParamLimits

0xe079,	// (0x0005a9c9) grid_graphic2_pane

0xe0ed,	// (0x0005aa3d) cell_graphic2_pane

0x478d,	// (0x000510dd) main_comp_mode_pane

0xd1f8,	// (0x00059b48) list_ai3_gene_pane_ParamLimits

0xd5ce,	// (0x00059f1e) bg_popup_window_pane_cp19_ParamLimits

0xd5da,	// (0x00059f2a) bg_touch_area_indi_pane_ParamLimits

0xd5da,	// (0x00059f2a) bg_touch_area_indi_pane

0xd5f0,	// (0x00059f40) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5f0,	// (0x00059f40) bg_touch_area_indi_pane_cp01

0xd606,	// (0x00059f56) bg_touch_area_indi_pane_cp02_ParamLimits

0xd606,	// (0x00059f56) bg_touch_area_indi_pane_cp02

0xd61c,	// (0x00059f6c) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61c,	// (0x00059f6c) bg_touch_area_indi_pane_cp03

0xd636,	// (0x00059f86) popup_slider_window_g1_ParamLimits

0xd652,	// (0x00059fa2) popup_slider_window_g2_ParamLimits

0xd66e,	// (0x00059fbe) popup_slider_window_g3_ParamLimits

0xfcc1,	// (0x0005c611) popup_slider_window_g_ParamLimits

0xd6d4,	// (0x0005a024) popup_slider_window_t1_ParamLimits

0xd748,	// (0x0005a098) small_volume_slider_vertical_pane_ParamLimits

0xe0ed,	// (0x0005aa3d) cell_graphic2_pane_ParamLimits

0xe13c,	// (0x0005aa8c) bg_button_pane_cp10_ParamLimits

0xe13c,	// (0x0005aa8c) bg_button_pane_cp10

0xe14f,	// (0x0005aa9f) bg_button_pane_cp11_ParamLimits

0xe14f,	// (0x0005aa9f) bg_button_pane_cp11

0xe162,	// (0x0005aab2) graphic2_pages_pane_g1_ParamLimits

0xe162,	// (0x0005aab2) graphic2_pages_pane_g1

0xe17d,	// (0x0005aacd) graphic2_pages_pane_g2_ParamLimits

0xe17d,	// (0x0005aacd) graphic2_pages_pane_g2

0x0001,

0xfd85,	// (0x0005c6d5) graphic2_pages_pane_g_ParamLimits

0xfd85,	// (0x0005c6d5) graphic2_pages_pane_g

0xe195,	// (0x0005aae5) graphic2_pages_pane_t1_ParamLimits

0xe195,	// (0x0005aae5) graphic2_pages_pane_t1

0xe1ad,	// (0x0005aafd) cell_graphic2_control_pane_ParamLimits

0xe1ad,	// (0x0005aafd) cell_graphic2_control_pane

0xe1cb,	// (0x0005ab1b) cell_graphic2_pane_g1_ParamLimits

0xe1cb,	// (0x0005ab1b) cell_graphic2_pane_g1

0xe1d8,	// (0x0005ab28) cell_graphic2_pane_g2_ParamLimits

0xe1d8,	// (0x0005ab28) cell_graphic2_pane_g2

0xe1e5,	// (0x0005ab35) cell_graphic2_pane_g3_ParamLimits

0xe1e5,	// (0x0005ab35) cell_graphic2_pane_g3

0xe1f2,	// (0x0005ab42) cell_graphic2_pane_g4_ParamLimits

0xe1f2,	// (0x0005ab42) cell_graphic2_pane_g4

0xe1ff,	// (0x0005ab4f) cell_graphic2_pane_g5_ParamLimits

0xe1ff,	// (0x0005ab4f) cell_graphic2_pane_g5

0x0004,

0xfd8a,	// (0x0005c6da) cell_graphic2_pane_g_ParamLimits

0xfd8a,	// (0x0005c6da) cell_graphic2_pane_g

0xe218,	// (0x0005ab68) cell_graphic2_pane_t1_ParamLimits

0xe218,	// (0x0005ab68) cell_graphic2_pane_t1

0x9a7e,	// (0x000563ce) grid_highlight_pane_cp11_ParamLimits

0x9a7e,	// (0x000563ce) grid_highlight_pane_cp11

0x7abb,	// (0x0005440b) bg_button_pane_cp05

0xe24e,	// (0x0005ab9e) cell_graphic2_control_pane_g1

0xc03b,	// (0x0005898b) bg_touch_area_indi_pane_g1

0xe276,	// (0x0005abc6) aid_cmod_rocker_key_size

0xe280,	// (0x0005abd0) aid_cmode_itu_key_size

0xe28a,	// (0x0005abda) main_cmode_video_pane

0xe294,	// (0x0005abe4) main_comp_mode_itu_pane

0xe2a0,	// (0x0005abf0) main_comp_mode_rocker_pane

0xe2ac,	// (0x0005abfc) cell_cmode_rocker_pane_ParamLimits

0xe2ac,	// (0x0005abfc) cell_cmode_rocker_pane

0xe2be,	// (0x0005ac0e) cell_cmode_itu_pane_ParamLimits

0xe2be,	// (0x0005ac0e) cell_cmode_itu_pane

0x8529,	// (0x00054e79) bg_button_pane_cp06_ParamLimits

0x8529,	// (0x00054e79) bg_button_pane_cp06

0xc2b9,	// (0x00058c09) cell_cmode_rocker_pane_g1_ParamLimits

0xc2b9,	// (0x00058c09) cell_cmode_rocker_pane_g1

0xd7ec,	// (0x0005a13c) cell_cmode_rocker_pane_g2_ParamLimits

0xd7ec,	// (0x0005a13c) cell_cmode_rocker_pane_g2

0x0001,

0xfd9a,	// (0x0005c6ea) cell_cmode_rocker_pane_g_ParamLimits

0xfd9a,	// (0x0005c6ea) cell_cmode_rocker_pane_g

0x27d7,	// (0x0004f127) bg_button_pane_cp07

0xe2d3,	// (0x0005ac23) cell_cmode_itu_pane_g1

0xe2dc,	// (0x0005ac2c) cell_cmode_itu_pane_t1

0xe2ea,	// (0x0005ac3a) cell_cmode_itu_pane_t2

0x0001,

0xfd9f,	// (0x0005c6ef) cell_cmode_itu_pane_t

0xda0f,	// (0x0005a35f) aid_touch_ctrl_left

0xda17,	// (0x0005a367) aid_touch_ctrl_right

0x27d7,	// (0x0004f127) compa_mode_pane

0xe2f8,	// (0x0005ac48) aid_cmod_rocker_key_size_cp

0xe302,	// (0x0005ac52) aid_cmode_itu_key_size_cp

0xe30c,	// (0x0005ac5c) compa_mode_pane_g1

0xe314,	// (0x0005ac64) compa_mode_pane_g2

0xe31c,	// (0x0005ac6c) compa_mode_pane_g3

0x0002,

0xfda4,	// (0x0005c6f4) compa_mode_pane_g

0xe324,	// (0x0005ac74) main_comp_mode_itu_pane_cp

0xe32c,	// (0x0005ac7c) main_comp_mode_rocker_pane_cp

0xe334,	// (0x0005ac84) cell_cmode_itu_pane_cp_ParamLimits

0xe334,	// (0x0005ac84) cell_cmode_itu_pane_cp

0xe349,	// (0x0005ac99) cell_cmode_rocker_pane_cp_ParamLimits

0xe349,	// (0x0005ac99) cell_cmode_rocker_pane_cp

0x8529,	// (0x00054e79) bg_button_pane_cp06_cp_ParamLimits

0x8529,	// (0x00054e79) bg_button_pane_cp06_cp

0xc2b9,	// (0x00058c09) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2b9,	// (0x00058c09) cell_cmode_rocker_pane_g1_cp

0xc03b,	// (0x0005898b) cell_cmode_rocker_pane_g2_cp

0x27d7,	// (0x0004f127) bg_button_pane_cp07_cp

0xaf58,	// (0x000578a8) cell_cmode_itu_pane_g1_cp

0xe35b,	// (0x0005acab) cell_cmode_itu_pane_t1_cp

0xe35b,	// (0x0005acab) cell_cmode_itu_pane_t2_cp

0xaf45,	// (0x00057895) settings_code_pane_cp2

0x7832,	// (0x00054182) bg_popup_window_pane_cp3_ParamLimits

0x7cbb,	// (0x0005460b) heading_pane_cp3_ParamLimits

0x7cca,	// (0x0005461a) listscroll_popup_graphic_pane_ParamLimits

0x65b8,	// (0x00052f08) fep_hwr_aid_pane_ParamLimits

0x6b20,	// (0x00053470) aid_touch_sctrl_top_ParamLimits

0x6b3b,	// (0x0005348b) sctrl_sk_top_pane_g1_ParamLimits

0x680f,	// (0x0005315f) sctrl_sk_top_pane_g2_ParamLimits

0xfcda,	// (0x0005c62a) sctrl_sk_top_pane_g_ParamLimits

0x6b48,	// (0x00053498) sctrl_sk_top_pane_t1_ParamLimits

0x6b20,	// (0x00053470) aid_touch_sctrl_bottom_ParamLimits

0x6b48,	// (0x00053498) sctrl_sk_bottom_pane_t1_ParamLimits

0xd958,	// (0x0005a2a8) aid_area_touch_clock

0x6d31,	// (0x00053681) aid_vkb2_area_top_pane_cell_ParamLimits

0x6d31,	// (0x00053681) aid_vkb2_area_top_pane_cell

0x6e7c,	// (0x000537cc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6e7c,	// (0x000537cc) aid_vkb2_area_bottom_pane_cell

0xdee8,	// (0x0005a838) popup_char_count_window

0xe369,	// (0x0005acb9) popup_char_count_window_g1

0xe372,	// (0x0005acc2) popup_char_count_window_g2

0xe37b,	// (0x0005accb) popup_char_count_window_g3

0x0002,

0xfdab,	// (0x0005c6fb) popup_char_count_window_g

0xe384,	// (0x0005acd4) popup_char_count_window_t1

0x6bf7,	// (0x00053547) popup_fep_char_preview_window_ParamLimits

0x6bf7,	// (0x00053547) popup_fep_char_preview_window

0x6d4f,	// (0x0005369f) vkb2_top_candi_pane_ParamLimits

0x6d4f,	// (0x0005369f) vkb2_top_candi_pane

0xe392,	// (0x0005ace2) cell_vkb2_top_candi_pane_ParamLimits

0xe392,	// (0x0005ace2) cell_vkb2_top_candi_pane

0x715f,	// (0x00053aaf) bg_popup_fep_char_preview_window_ParamLimits

0x715f,	// (0x00053aaf) bg_popup_fep_char_preview_window

0x716d,	// (0x00053abd) popup_fep_char_preview_window_t1_ParamLimits

0x716d,	// (0x00053abd) popup_fep_char_preview_window_t1

0xe3df,	// (0x0005ad2f) bg_popup_fep_char_preview_window_g1

0xe3e7,	// (0x0005ad37) bg_popup_fep_char_preview_window_g2

0xe3ef,	// (0x0005ad3f) bg_popup_fep_char_preview_window_g3

0xe3f7,	// (0x0005ad47) bg_popup_fep_char_preview_window_g4

0xe3ff,	// (0x0005ad4f) bg_popup_fep_char_preview_window_g5

0xe407,	// (0x0005ad57) bg_popup_fep_char_preview_window_g6

0xe40f,	// (0x0005ad5f) bg_popup_fep_char_preview_window_g7

0xe417,	// (0x0005ad67) bg_popup_fep_char_preview_window_g8

0xe41f,	// (0x0005ad6f) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb2,	// (0x0005c702) bg_popup_fep_char_preview_window_g

0x680f,	// (0x0005315f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x680f,	// (0x0005315f) cell_vkb2_top_candi_pane_g1

0x681d,	// (0x0005316d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x681d,	// (0x0005316d) cell_vkb2_top_candi_pane_g2

0xdeab,	// (0x0005a7fb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdeab,	// (0x0005a7fb) cell_vkb2_top_candi_pane_g3

0x71af,	// (0x00053aff) cell_vkb2_top_candi_pane_g4_ParamLimits

0x71af,	// (0x00053aff) cell_vkb2_top_candi_pane_g4

0xc784,	// (0x000590d4) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc784,	// (0x000590d4) cell_vkb2_top_candi_pane_g5

0x71d0,	// (0x00053b20) cell_vkb2_top_candi_pane_g6_ParamLimits

0x71d0,	// (0x00053b20) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc7,	// (0x0005c717) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc7,	// (0x0005c717) cell_vkb2_top_candi_pane_g

0x71de,	// (0x00053b2e) cell_vkb2_top_candi_pane_t1

0x60bf,	// (0x00052a0f) aid_size_touch_slider_mark_ParamLimits

0x60bf,	// (0x00052a0f) aid_size_touch_slider_mark

0xe02b,	// (0x0005a97b) grid_graphic2_catg_pane_ParamLimits

0xe02b,	// (0x0005a97b) grid_graphic2_catg_pane

0xe0c9,	// (0x0005aa19) popup_grid_graphic2_window_t1_ParamLimits

0xe0c9,	// (0x0005aa19) popup_grid_graphic2_window_t1

0xe0db,	// (0x0005aa2b) popup_grid_graphic2_window_t2_ParamLimits

0xe0db,	// (0x0005aa2b) popup_grid_graphic2_window_t2

0x0001,

0xfd80,	// (0x0005c6d0) popup_grid_graphic2_window_t_ParamLimits

0xfd80,	// (0x0005c6d0) popup_grid_graphic2_window_t

0x7abb,	// (0x0005440b) bg_button_pane_cp05_ParamLimits

0xe24e,	// (0x0005ab9e) cell_graphic2_control_pane_g1_ParamLimits

0xe427,	// (0x0005ad77) cell_graphic2_catg_pane_ParamLimits

0xe427,	// (0x0005ad77) cell_graphic2_catg_pane

0x27d7,	// (0x0004f127) bg_button_pane_cp12

0xe439,	// (0x0005ad89) cell_graphic2_catg_pane_g1

0xd924,	// (0x0005a274) cell_tb_ext_pane_t1_ParamLimits

0x6f99,	// (0x000538e9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6f99,	// (0x000538e9) vkb2_top_cell_right_narrow_pane

0x6fb1,	// (0x00053901) vkb2_top_cell_right_wide_pane_ParamLimits

0x6fb1,	// (0x00053901) vkb2_top_cell_right_wide_pane

0x65aa,	// (0x00052efa) bg_vkb2_func_pane_ParamLimits

0x65aa,	// (0x00052efa) bg_vkb2_func_pane

0x7022,	// (0x00053972) vkb2_top_cell_left_pane_g1_ParamLimits

0x65aa,	// (0x00052efa) bg_vkb2_fuc_pane_cp03_ParamLimits

0x65aa,	// (0x00052efa) bg_vkb2_fuc_pane_cp03

0x7080,	// (0x000539d0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a12,	// (0x00056362) bg_vkb2_func_pane_g1

0x9a1a,	// (0x0005636a) bg_vkb2_func_pane_g2

0x9a2a,	// (0x0005637a) bg_vkb2_func_pane_g3

0x9a22,	// (0x00056372) bg_vkb2_func_pane_g4

0x9a32,	// (0x00056382) bg_vkb2_func_pane_g5

0x9a3a,	// (0x0005638a) bg_vkb2_func_pane_g6

0x9a42,	// (0x00056392) bg_vkb2_func_pane_g7

0x9a4a,	// (0x0005639a) bg_vkb2_func_pane_g8

0x9a0a,	// (0x0005635a) bg_vkb2_func_pane_g9

0x0008,

0xfdd4,	// (0x0005c724) bg_vkb2_func_pane_g

0x65aa,	// (0x00052efa) bg_vkb2_fuc_pane_cp01_ParamLimits

0x65aa,	// (0x00052efa) bg_vkb2_fuc_pane_cp01

0x7022,	// (0x00053972) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7022,	// (0x00053972) vkb2_top_cell_right_wide_pane_g1

0x65aa,	// (0x00052efa) bg_vkb2_fuc_pane_cp02_ParamLimits

0x65aa,	// (0x00052efa) bg_vkb2_fuc_pane_cp02

0x7080,	// (0x000539d0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7080,	// (0x000539d0) vkb2_top_cell_right_narrow_pane_g1

0xd548,	// (0x00059e98) aid_touch_area_decrease_ParamLimits

0xd548,	// (0x00059e98) aid_touch_area_decrease

0xd56c,	// (0x00059ebc) aid_touch_area_increase_ParamLimits

0xd56c,	// (0x00059ebc) aid_touch_area_increase

0xd584,	// (0x00059ed4) aid_touch_area_mute_ParamLimits

0xd584,	// (0x00059ed4) aid_touch_area_mute

0xd5a0,	// (0x00059ef0) aid_touch_area_slider_ParamLimits

0xd5a0,	// (0x00059ef0) aid_touch_area_slider

0xd68a,	// (0x00059fda) popup_slider_window_g4_ParamLimits

0xd68a,	// (0x00059fda) popup_slider_window_g4

0xd6a2,	// (0x00059ff2) popup_slider_window_g5_ParamLimits

0xd6a2,	// (0x00059ff2) popup_slider_window_g5

0xd6c4,	// (0x0005a014) popup_slider_window_g6_ParamLimits

0xd6c4,	// (0x0005a014) popup_slider_window_g6

0xd702,	// (0x0005a052) popup_slider_window_t2_ParamLimits

0xd702,	// (0x0005a052) popup_slider_window_t2

0x0001,

0xfcce,	// (0x0005c61e) popup_slider_window_t_ParamLimits

0xfcce,	// (0x0005c61e) popup_slider_window_t

0xd71a,	// (0x0005a06a) slider_pane_ParamLimits

0xd71a,	// (0x0005a06a) slider_pane

0xe442,	// (0x0005ad92) slider_pane_g1_ParamLimits

0xe442,	// (0x0005ad92) slider_pane_g1

0xe456,	// (0x0005ada6) slider_pane_g2_ParamLimits

0xe456,	// (0x0005ada6) slider_pane_g2

0xe46c,	// (0x0005adbc) slider_pane_g3_ParamLimits

0xe46c,	// (0x0005adbc) slider_pane_g3

0x0003,

0xfde7,	// (0x0005c737) slider_pane_g_ParamLimits

0xfde7,	// (0x0005c737) slider_pane_g

0x5be5,	// (0x00052535) popup_tb_float_extension_window_ParamLimits

0x5be5,	// (0x00052535) popup_tb_float_extension_window

0xe498,	// (0x0005ade8) aid_size_cell_tb_float_ext

0x27d7,	// (0x0004f127) bg_popup_sub_window_cp28

0xe4a4,	// (0x0005adf4) grid_tb_float_ext_pane

0xe4ae,	// (0x0005adfe) cell_tb_float_ext_pane_ParamLimits

0xe4ae,	// (0x0005adfe) cell_tb_float_ext_pane

0xe4c8,	// (0x0005ae18) cell_tb_float_ext_pane_g1

0xe4d1,	// (0x0005ae21) grid_highlight_pane_cp12

0x66f9,	// (0x00053049) cell_last_hwr_side_pane_ParamLimits

0x66f9,	// (0x00053049) cell_last_hwr_side_pane

0xc03b,	// (0x0005898b) cell_last_hwr_side_pane_g1

0xe4da,	// (0x0005ae2a) cell_last_hwr_side_pane_g2

0x0001,

0xfdf0,	// (0x0005c740) cell_last_hwr_side_pane_g

0x6f48,	// (0x00053898) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6f48,	// (0x00053898) vkb2_area_bottom_space_btn_pane

0x680f,	// (0x0005315f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf9d,	// (0x0005a8ed) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x71de,	// (0x00053b2e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x71fd,	// (0x00053b4d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x71fd,	// (0x00053b4d) vkb2_area_bottom_space_btn_pane_g1

0x7237,	// (0x00053b87) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7237,	// (0x00053b87) vkb2_area_bottom_space_btn_pane_g2

0x726d,	// (0x00053bbd) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x726d,	// (0x00053bbd) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf5,	// (0x0005c745) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf5,	// (0x0005c745) vkb2_area_bottom_space_btn_pane_g

0x666d,	// (0x00052fbd) cel_fep_hwr_func_pane_ParamLimits

0x666d,	// (0x00052fbd) cel_fep_hwr_func_pane

0x66a9,	// (0x00052ff9) cell_hwr_side_button_pane_ParamLimits

0x66a9,	// (0x00052ff9) cell_hwr_side_button_pane

0xd958,	// (0x0005a2a8) aid_area_touch_clock_ParamLimits

0x7abb,	// (0x0005440b) bg_uniindi_top_pane_ParamLimits

0xd96a,	// (0x0005a2ba) uniindi_top_pane_g1_ParamLimits

0xd980,	// (0x0005a2d0) uniindi_top_pane_g2_ParamLimits

0xd98c,	// (0x0005a2dc) uniindi_top_pane_g3_ParamLimits

0xd99d,	// (0x0005a2ed) uniindi_top_pane_g4_ParamLimits

0xfd06,	// (0x0005c656) uniindi_top_pane_g_ParamLimits

0xd9aa,	// (0x0005a2fa) uniindi_top_pane_t1_ParamLimits

0x7abb,	// (0x0005440b) bg_vkb2_func_pane_cp01_ParamLimits

0x7abb,	// (0x0005440b) bg_vkb2_func_pane_cp01

0xe4e3,	// (0x0005ae33) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e3,	// (0x0005ae33) cel_fep_hwr_func_pane_g1

0x7abb,	// (0x0005440b) bg_vkb2_func_pane_cp02_ParamLimits

0x7abb,	// (0x0005440b) bg_vkb2_func_pane_cp02

0xe4e3,	// (0x0005ae33) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e3,	// (0x0005ae33) cell_hwr_side_button_pane_g1

0x988b,	// (0x000561db) status_pane_g4_ParamLimits

0x988b,	// (0x000561db) status_pane_g4

0x98a5,	// (0x000561f5) status_pane_t1

0xbd80,	// (0x000586d0) form2_midp_gauge_slider_cont_pane

0xbd88,	// (0x000586d8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd9a,	// (0x000586ea) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdac,	// (0x000586fc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac6,	// (0x0005c416) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdbe,	// (0x0005870e) form2_midp_slider_pane_ParamLimits

0x6bb7,	// (0x00053507) aid_size_cell_func_vkb2_ParamLimits

0x6bb7,	// (0x00053507) aid_size_cell_func_vkb2

0xe484,	// (0x0005add4) slider_pane_g4_ParamLimits

0xe484,	// (0x0005add4) slider_pane_g4

0x72b7,	// (0x00053c07) form2_midp_gauge_slider_pane_t2_cp01

0x72c5,	// (0x00053c15) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x72c5,	// (0x00053c15) form2_midp_gauge_slider_pane_t3_cp01

0x72e2,	// (0x00053c32) form2_midp_slider_pane_cp01

0x27d7,	// (0x0004f127) navi_smil_pane

0xe51c,	// (0x0005ae6c) navi_smil_pane_g1

0xe524,	// (0x0005ae74) navi_smil_pane_t1

0xe4f1,	// (0x0005ae41) form2_midp_slider_pane_g1

0xe4fa,	// (0x0005ae4a) form2_midp_slider_pane_g2

0xe502,	// (0x0005ae52) form2_midp_slider_pane_g3

0xe4f1,	// (0x0005ae41) form2_midp_slider_pane_g4

0xe50a,	// (0x0005ae5a) form2_midp_slider_pane_g5

0x0004,

0xfdfe,	// (0x0005c74e) form2_midp_slider_pane_g

0x72a7,	// (0x00053bf7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x72a7,	// (0x00053bf7) vkb2_area_bottom_space_btn_pane_g4

0x96ba,	// (0x0005600a) lc0_navi_pane_ParamLimits

0x96ba,	// (0x0005600a) lc0_navi_pane

0x9730,	// (0x00056080) lc0_stat_indi_pane_ParamLimits

0x9730,	// (0x00056080) lc0_stat_indi_pane

0x9747,	// (0x00056097) ls0_title_pane_ParamLimits

0x9747,	// (0x00056097) ls0_title_pane

0x8529,	// (0x00054e79) bg_popup_sub_pane_cp14_ParamLimits

0xd93f,	// (0x0005a28f) list_uniindi_pane_ParamLimits

0xd94b,	// (0x0005a29b) uniindi_top_pane_ParamLimits

0xd9e7,	// (0x0005a337) list_single_uniindi_pane_g1_ParamLimits

0xd9fa,	// (0x0005a34a) list_single_uniindi_pane_t1_ParamLimits

0x72eb,	// (0x00053c3b) lc0_stat_clock_pane_ParamLimits

0x72eb,	// (0x00053c3b) lc0_stat_clock_pane

0xe532,	// (0x0005ae82) lc0_stat_indi_pane_g1_ParamLimits

0xe532,	// (0x0005ae82) lc0_stat_indi_pane_g1

0xe53f,	// (0x0005ae8f) lc0_stat_indi_pane_g2_ParamLimits

0xe53f,	// (0x0005ae8f) lc0_stat_indi_pane_g2

0x0001,

0xfe09,	// (0x0005c759) lc0_stat_indi_pane_g_ParamLimits

0xfe09,	// (0x0005c759) lc0_stat_indi_pane_g

0x72f8,	// (0x00053c48) lc0_uni_indicator_pane_ParamLimits

0x72f8,	// (0x00053c48) lc0_uni_indicator_pane

0xe54c,	// (0x0005ae9c) ls0_title_pane_g1_ParamLimits

0xe54c,	// (0x0005ae9c) ls0_title_pane_g1

0xe560,	// (0x0005aeb0) ls0_title_pane_t1_ParamLimits

0xe560,	// (0x0005aeb0) ls0_title_pane_t1

0x7305,	// (0x00053c55) lc0_uni_indicator_pane_g1_ParamLimits

0x7305,	// (0x00053c55) lc0_uni_indicator_pane_g1

0xe596,	// (0x0005aee6) lc0_stat_clock_pane_t1

0x478d,	// (0x000510dd) main_ai5_pane

0xe5a4,	// (0x0005aef4) ai5_sk_pane_ParamLimits

0xe5a4,	// (0x0005aef4) ai5_sk_pane

0xe5b1,	// (0x0005af01) cell_ai5_widget_pane_ParamLimits

0xe5b1,	// (0x0005af01) cell_ai5_widget_pane

0xe67a,	// (0x0005afca) aid_size_cell_widget_grid

0xe690,	// (0x0005afe0) bg_ai5_widget_pane_ParamLimits

0xe690,	// (0x0005afe0) bg_ai5_widget_pane

0xe70c,	// (0x0005b05c) cell_ai5_widget_pane_g2

0xe720,	// (0x0005b070) cell_ai5_widget_pane_g3

0xe73a,	// (0x0005b08a) cell_ai5_widget_pane_g4

0xe74a,	// (0x0005b09a) cell_ai5_widget_pane_g5

0xe75a,	// (0x0005b0aa) cell_ai5_widget_pane_g6

0xe766,	// (0x0005b0b6) cell_ai5_widget_pane_g7

0xe7d2,	// (0x0005b122) cell_ai5_widget_pane_t1_ParamLimits

0xe7d2,	// (0x0005b122) cell_ai5_widget_pane_t1

0xe7ef,	// (0x0005b13f) cell_ai5_widget_pane_t2_ParamLimits

0xe7ef,	// (0x0005b13f) cell_ai5_widget_pane_t2

0xe807,	// (0x0005b157) cell_ai5_widget_pane_t3_ParamLimits

0xe807,	// (0x0005b157) cell_ai5_widget_pane_t3

0xe81f,	// (0x0005b16f) cell_ai5_widget_pane_t4_ParamLimits

0xe81f,	// (0x0005b16f) cell_ai5_widget_pane_t4

0xe845,	// (0x0005b195) cell_ai5_widget_pane_t5_ParamLimits

0xe845,	// (0x0005b195) cell_ai5_widget_pane_t5

0xe864,	// (0x0005b1b4) cell_ai5_widget_pane_t6_ParamLimits

0xe864,	// (0x0005b1b4) cell_ai5_widget_pane_t6

0xe876,	// (0x0005b1c6) cell_ai5_widget_pane_t7_ParamLimits

0xe876,	// (0x0005b1c6) cell_ai5_widget_pane_t7

0xe895,	// (0x0005b1e5) cell_ai5_widget_pane_t8_ParamLimits

0xe895,	// (0x0005b1e5) cell_ai5_widget_pane_t8

0x000b,

0xfe29,	// (0x0005c779) cell_ai5_widget_pane_t_ParamLimits

0xfe29,	// (0x0005c779) cell_ai5_widget_pane_t

0xe919,	// (0x0005b269) grid_ai5_widget_pane

0x8529,	// (0x00054e79) highlight_cell_ai5_widget_pane_ParamLimits

0x8529,	// (0x00054e79) highlight_cell_ai5_widget_pane

0xe930,	// (0x0005b280) ai5_sk_left_pane

0xe93a,	// (0x0005b28a) ai5_sk_middle_pane

0xe944,	// (0x0005b294) ai5_sk_right_pane

0xe94e,	// (0x0005b29e) bg_ai5_widget_pane_g1_ParamLimits

0xe94e,	// (0x0005b29e) bg_ai5_widget_pane_g1

0xe95a,	// (0x0005b2aa) bg_ai5_widget_pane_g2_ParamLimits

0xe95a,	// (0x0005b2aa) bg_ai5_widget_pane_g2

0xe966,	// (0x0005b2b6) bg_ai5_widget_pane_g3_ParamLimits

0xe966,	// (0x0005b2b6) bg_ai5_widget_pane_g3

0xe972,	// (0x0005b2c2) bg_ai5_widget_pane_g4_ParamLimits

0xe972,	// (0x0005b2c2) bg_ai5_widget_pane_g4

0xe97e,	// (0x0005b2ce) bg_ai5_widget_pane_g5_ParamLimits

0xe97e,	// (0x0005b2ce) bg_ai5_widget_pane_g5

0xe98a,	// (0x0005b2da) bg_ai5_widget_pane_g6_ParamLimits

0xe98a,	// (0x0005b2da) bg_ai5_widget_pane_g6

0xe996,	// (0x0005b2e6) bg_ai5_widget_pane_g7_ParamLimits

0xe996,	// (0x0005b2e6) bg_ai5_widget_pane_g7

0xe9a2,	// (0x0005b2f2) bg_ai5_widget_pane_g8_ParamLimits

0xe9a2,	// (0x0005b2f2) bg_ai5_widget_pane_g8

0xe9ae,	// (0x0005b2fe) bg_ai5_widget_pane_g9_ParamLimits

0xe9ae,	// (0x0005b2fe) bg_ai5_widget_pane_g9

0x0008,

0xfe42,	// (0x0005c792) bg_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x0005c792) bg_ai5_widget_pane_g

0xe9e0,	// (0x0005b330) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9e0,	// (0x0005b330) cell_shortcut_ai5_widget_pane

0x91bc,	// (0x00055b0c) bg_cell_shortcut_ai5_widget_pane

0xe9f1,	// (0x0005b341) cell_grid_ai5_widget_pane_g1

0x91bc,	// (0x00055b0c) highlight_cell_shortcut_ai5_widget_pane

0x9a12,	// (0x00056362) ai5_sk_left_pane_g1

0xe9fa,	// (0x0005b34a) ai5_sk_left_pane_g2

0xea02,	// (0x0005b352) ai5_sk_left_pane_g3

0xea0a,	// (0x0005b35a) ai5_sk_left_pane_g4

0x0003,

0xfe55,	// (0x0005c7a5) ai5_sk_left_pane_g

0xea12,	// (0x0005b362) ai5_sk_left_pane_t1

0x9a1a,	// (0x0005636a) ai5_sk_right_pane_g1

0xea20,	// (0x0005b370) ai5_sk_right_pane_g2

0xea28,	// (0x0005b378) ai5_sk_right_pane_g3

0xea30,	// (0x0005b380) ai5_sk_right_pane_g4

0x0003,

0xfe5e,	// (0x0005c7ae) ai5_sk_right_pane_g

0xea38,	// (0x0005b388) ai5_sk_right_pane_t1

0x9a1a,	// (0x0005636a) ai5_sk_middle_pane_g1

0x9a12,	// (0x00056362) ai5_sk_middle_pane_g2

0x9a32,	// (0x00056382) ai5_sk_middle_pane_g3

0xea28,	// (0x0005b378) ai5_sk_middle_pane_g4

0xea02,	// (0x0005b352) ai5_sk_middle_pane_g5

0xea46,	// (0x0005b396) ai5_sk_middle_pane_g6

0xea4e,	// (0x0005b39e) ai5_sk_middle_pane_g7

0x0006,

0xfe67,	// (0x0005c7b7) ai5_sk_middle_pane_g

0x9540,	// (0x00055e90) aid_touch_area_size_lc0_ParamLimits

0x9540,	// (0x00055e90) aid_touch_area_size_lc0

0x683e,	// (0x0005318e) cell_hwr_candidate_pane_t1_ParamLimits

0x955c,	// (0x00055eac) aid_touch_navi_pane

0x9835,	// (0x00056185) status_dt_navi_pane_ParamLimits

0x9835,	// (0x00056185) status_dt_navi_pane

0x9842,	// (0x00056192) status_dt_sta_pane_ParamLimits

0x9842,	// (0x00056192) status_dt_sta_pane

0xea56,	// (0x0005b3a6) dt_sta_controll_pane

0xea63,	// (0x0005b3b3) dt_sta_indi_pane

0xea74,	// (0x0005b3c4) dt_sta_title_pane

0x7abb,	// (0x0005440b) bg_dt_sta_indi_pane_ParamLimits

0x7abb,	// (0x0005440b) bg_dt_sta_indi_pane

0xea87,	// (0x0005b3d7) dt_sta_battery_pane

0xea8f,	// (0x0005b3df) dt_sta_indi_pane_g1

0xea98,	// (0x0005b3e8) dt_sta_indi_pane_g2

0xeaa1,	// (0x0005b3f1) dt_sta_indi_pane_g3

0x0002,

0xfe76,	// (0x0005c7c6) dt_sta_indi_pane_g

0xeaaa,	// (0x0005b3fa) dt_sta_signal_pane

0x8529,	// (0x00054e79) bg_dt_sta_title_pane_ParamLimits

0x8529,	// (0x00054e79) bg_dt_sta_title_pane

0xeab3,	// (0x0005b403) dt_sta_title_pane_g1

0xeabb,	// (0x0005b40b) dt_sta_title_pane_t1_ParamLimits

0xeabb,	// (0x0005b40b) dt_sta_title_pane_t1

0x27d7,	// (0x0004f127) bg_dt_sta_control_pane

0xead0,	// (0x0005b420) dt_sta_controll_pane_g1

0xead9,	// (0x0005b429) bg_dt_sta_title_pane_g1

0xeae2,	// (0x0005b432) bg_dt_sta_title_pane_g2

0xeaeb,	// (0x0005b43b) bg_dt_sta_title_pane_g3

0x0002,

0xfe7d,	// (0x0005c7cd) bg_dt_sta_title_pane_g

0xc03b,	// (0x0005898b) bg_dt_sta_indi_pane_g1

0xeaf4,	// (0x0005b444) dt_sta_signal_pane_g1

0xeafc,	// (0x0005b44c) dt_sta_signal_pane_g2

0x0001,

0xfe84,	// (0x0005c7d4) dt_sta_signal_pane_g

0xeb04,	// (0x0005b454) dt_sta_battery_pane_g1

0xeb0d,	// (0x0005b45d) dt_sta_battery_pane_t1

0xc03b,	// (0x0005898b) bg_dt_sta_control_pane_g1

0x8cc4,	// (0x00055614) fep_china_uni_eep_pane

0x8ccc,	// (0x0005561c) fep_china_uni_entry_pane_ParamLimits

0x8cdc,	// (0x0005562c) popup_fep_china_uni_window_g1_ParamLimits

0x8cec,	// (0x0005563c) popup_fep_china_uni_window_g2_ParamLimits

0x8cec,	// (0x0005563c) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0005c04d) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0005c04d) popup_fep_china_uni_window_g

0xeb1c,	// (0x0005b46c) fep_china_uni_eep_pane_g1

0xeb24,	// (0x0005b474) fep_china_uni_eep_pane_t1

0xe513,	// (0x0005ae63) aid_touch_area_size_smil_player

0x96b2,	// (0x00056002) lc0_clock_pane

0x9899,	// (0x000561e9) status_pane_g5_ParamLimits

0x9899,	// (0x000561e9) status_pane_g5

0x58aa,	// (0x000521fa) popup_keymap_window

0x9857,	// (0x000561a7) status_icon_pane

0xe720,	// (0x0005b070) cell_ai5_widget_pane_g3_ParamLimits

0xe73a,	// (0x0005b08a) cell_ai5_widget_pane_g4_ParamLimits

0xe74a,	// (0x0005b09a) cell_ai5_widget_pane_g5_ParamLimits

0xe772,	// (0x0005b0c2) cell_ai5_widget_pane_g8_ParamLimits

0xe772,	// (0x0005b0c2) cell_ai5_widget_pane_g8

0xe786,	// (0x0005b0d6) cell_ai5_widget_pane_g9_ParamLimits

0xe786,	// (0x0005b0d6) cell_ai5_widget_pane_g9

0xe79a,	// (0x0005b0ea) cell_ai5_widget_pane_g10_ParamLimits

0xe79a,	// (0x0005b0ea) cell_ai5_widget_pane_g10

0xeb33,	// (0x0005b483) status_icon_pane_g1

0x27d7,	// (0x0004f127) bg_popup_sub_pane_cp13

0xeb3b,	// (0x0005b48b) popup_keymap_window_t1

0x9491,	// (0x00055de1) control_pane_g6_ParamLimits

0x9491,	// (0x00055de1) control_pane_g6

0x949e,	// (0x00055dee) control_pane_g7_ParamLimits

0x949e,	// (0x00055dee) control_pane_g7

0x94ab,	// (0x00055dfb) control_pane_g8_ParamLimits

0x94ab,	// (0x00055dfb) control_pane_g8

0xea56,	// (0x0005b3a6) dt_sta_controll_pane_ParamLimits

0xea63,	// (0x0005b3b3) dt_sta_indi_pane_ParamLimits

0xea74,	// (0x0005b3c4) dt_sta_title_pane_ParamLimits

0x8449,	// (0x00054d99) aid_size_touch_scroll_bar_cale

0x4866,	// (0x000511b6) popup_discreet_window_ParamLimits

0x4866,	// (0x000511b6) popup_discreet_window

0x48ee,	// (0x0005123e) popup_sk_window

0xa099,	// (0x000569e9) bg_popup_sub_pane_cp28_ParamLimits

0xa099,	// (0x000569e9) bg_popup_sub_pane_cp28

0xeb49,	// (0x0005b499) popup_discreet_window_g1_ParamLimits

0xeb49,	// (0x0005b499) popup_discreet_window_g1

0xeb69,	// (0x0005b4b9) popup_discreet_window_t1_ParamLimits

0xeb69,	// (0x0005b4b9) popup_discreet_window_t1

0xeb87,	// (0x0005b4d7) popup_discreet_window_t2_ParamLimits

0xeb87,	// (0x0005b4d7) popup_discreet_window_t2

0x0002,

0xfe89,	// (0x0005c7d9) popup_discreet_window_t_ParamLimits

0xfe89,	// (0x0005c7d9) popup_discreet_window_t

0x7319,	// (0x00053c69) popup_sk_window_g1

0x7323,	// (0x00053c73) popup_sk_window_g2

0x0001,

0xfe90,	// (0x0005c7e0) popup_sk_window_g

0x732b,	// (0x00053c7b) popup_sk_window_t1

0x7339,	// (0x00053c89) popup_sk_window_t1_copy1

0xe70c,	// (0x0005b05c) cell_ai5_widget_pane_g2_ParamLimits

0xe8a7,	// (0x0005b1f7) cell_ai5_widget_pane_t9_ParamLimits

0xe8a7,	// (0x0005b1f7) cell_ai5_widget_pane_t9

0x27d7,	// (0x0004f127) main_fep_fshwr2_pane

0x7347,	// (0x00053c97) aid_fshwr2_btn_pane

0x7353,	// (0x00053ca3) aid_fshwr2_syb_pane

0x7365,	// (0x00053cb5) aid_fshwr2_txt_pane

0x7371,	// (0x00053cc1) fshwr2_func_candi_pane

0x738d,	// (0x00053cdd) fshwr2_hwr_syb_pane

0x73a7,	// (0x00053cf7) fshwr2_icf_pane

0x478d,	// (0x000510dd) fshwr2_icf_bg_pane

0x73d5,	// (0x00053d25) fshwr2_icf_pane_t1_ParamLimits

0x73d5,	// (0x00053d25) fshwr2_icf_pane_t1

0x8bb2,	// (0x00055502) fshwr2_func_candi_pane_g1

0xebd9,	// (0x0005b529) fshwr2_func_candi_row_pane_ParamLimits

0xebd9,	// (0x0005b529) fshwr2_func_candi_row_pane

0x73ed,	// (0x00053d3d) cell_fshwr2_syb_pane_ParamLimits

0x73ed,	// (0x00053d3d) cell_fshwr2_syb_pane

0x7410,	// (0x00053d60) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7410,	// (0x00053d60) fshwr2_hwr_syb_pane_g1

0x478d,	// (0x000510dd) bg_popup_call_pane_cp01

0x741e,	// (0x00053d6e) fshwr2_func_candi_cell_pane_ParamLimits

0x741e,	// (0x00053d6e) fshwr2_func_candi_cell_pane

0xa70d,	// (0x0005705d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa70d,	// (0x0005705d) fshwr2_func_candi_cell_bg_pane

0x7469,	// (0x00053db9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7469,	// (0x00053db9) fshwr2_func_candi_cell_pane_g1

0x7489,	// (0x00053dd9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7489,	// (0x00053dd9) fshwr2_func_candi_cell_pane_t1

0x478d,	// (0x000510dd) bg_button_pane_cp08

0x94e0,	// (0x00055e30) cell_fshwr2_syb_bg_pane

0x749c,	// (0x00053dec) cell_fshwr2_syb_bg_pane_g1

0x74b0,	// (0x00053e00) cell_fshwr2_syb_bg_pane_t1

0x8529,	// (0x00054e79) main_tmo_pane

0xaba8,	// (0x000574f8) uni_indicator_pane_g1_ParamLimits

0xabbe,	// (0x0005750e) uni_indicator_pane_g2_ParamLimits

0xabd4,	// (0x00057524) uni_indicator_pane_g3_ParamLimits

0xabe7,	// (0x00057537) uni_indicator_pane_g4_ParamLimits

0xabe7,	// (0x00057537) uni_indicator_pane_g4

0xabfb,	// (0x0005754b) uni_indicator_pane_g5_ParamLimits

0xabfb,	// (0x0005754b) uni_indicator_pane_g5

0xabfb,	// (0x0005754b) uni_indicator_pane_g6_ParamLimits

0xabfb,	// (0x0005754b) uni_indicator_pane_g6

0xf8fc,	// (0x0005c24c) uni_indicator_pane_g_ParamLimits

0xd524,	// (0x00059e74) popup_tmo_note_window_ParamLimits

0xd524,	// (0x00059e74) popup_tmo_note_window

0x6b99,	// (0x000534e9) fshwr2_bg_pane

0x747a,	// (0x00053dca) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x747a,	// (0x00053dca) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe95,	// (0x0005c7e5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe95,	// (0x0005c7e5) fshwr2_func_candi_cell_pane_g

0x67f7,	// (0x00053147) bg_popup_window_pane_cp01

0x74c6,	// (0x00053e16) bg_popup_window_pane_g1_cp01

0xec00,	// (0x0005b550) bg_popup_window_pane_cp22_ParamLimits

0xec00,	// (0x0005b550) bg_popup_window_pane_cp22

0xec0e,	// (0x0005b55e) listscroll_tmo_link_pane_ParamLimits

0xec0e,	// (0x0005b55e) listscroll_tmo_link_pane

0xec4e,	// (0x0005b59e) popup_tmo_note_window_g1_ParamLimits

0xec4e,	// (0x0005b59e) popup_tmo_note_window_g1

0xec5b,	// (0x0005b5ab) tmo_note_info_pane_ParamLimits

0xec5b,	// (0x0005b5ab) tmo_note_info_pane

0xec75,	// (0x0005b5c5) list_tmo_note_info_pane_g1_ParamLimits

0xec75,	// (0x0005b5c5) list_tmo_note_info_pane_g1

0xec8c,	// (0x0005b5dc) list_tmo_note_info_pane_g2_ParamLimits

0xec8c,	// (0x0005b5dc) list_tmo_note_info_pane_g2

0x0001,

0xfe9a,	// (0x0005c7ea) list_tmo_note_info_pane_g_ParamLimits

0xfe9a,	// (0x0005c7ea) list_tmo_note_info_pane_g

0xeca8,	// (0x0005b5f8) list_tmo_note_info_text_pane_ParamLimits

0xeca8,	// (0x0005b5f8) list_tmo_note_info_text_pane

0xed29,	// (0x0005b679) list_tmo_link_pane

0xed36,	// (0x0005b686) scroll_pane_cp20

0xed43,	// (0x0005b693) list_single_tmo_link_pane_ParamLimits

0xed43,	// (0x0005b693) list_single_tmo_link_pane

0xed53,	// (0x0005b6a3) list_single_tmo_link_pane_t1

0xed61,	// (0x0005b6b1) list_tmo_note_info_text_pane_t1_ParamLimits

0xed61,	// (0x0005b6b1) list_tmo_note_info_text_pane_t1

0x85d9,	// (0x00054f29) aid_size_touch_scroll_bar_cp01_ParamLimits

0x85d9,	// (0x00054f29) aid_size_touch_scroll_bar_cp01

0x4f71,	// (0x000518c1) aid_size_touch_slider_marker

0x48d6,	// (0x00051226) popup_settings_window_ParamLimits

0x48d6,	// (0x00051226) popup_settings_window

0x572d,	// (0x0005207d) popup_candi_list_indi_window

0x955c,	// (0x00055eac) aid_touch_navi_pane_ParamLimits

0x6af4,	// (0x00053444) rs_clock_indi_pane

0x6afd,	// (0x0005344d) sctrl_sk_bottom_pane_ParamLimits

0x6b0e,	// (0x0005345e) sctrl_sk_top_pane_ParamLimits

0x6c11,	// (0x00053561) popup_fep_tooltip_window

0xe67a,	// (0x0005afca) aid_size_cell_widget_grid_ParamLimits

0xe6f7,	// (0x0005b047) cell_ai5_widget_pane_g1_ParamLimits

0xe6f7,	// (0x0005b047) cell_ai5_widget_pane_g1

0xe75a,	// (0x0005b0aa) cell_ai5_widget_pane_g6_ParamLimits

0xe766,	// (0x0005b0b6) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0e,	// (0x0005c75e) cell_ai5_widget_pane_g_ParamLimits

0xfe0e,	// (0x0005c75e) cell_ai5_widget_pane_g

0xe8d6,	// (0x0005b226) cell_ai5_widget_pane_t10_ParamLimits

0xe8d6,	// (0x0005b226) cell_ai5_widget_pane_t10

0xe919,	// (0x0005b269) grid_ai5_widget_pane_ParamLimits

0xe9ba,	// (0x0005b30a) cell_contacts_ai5_widget_pane_ParamLimits

0xe9ba,	// (0x0005b30a) cell_contacts_ai5_widget_pane

0xeb9c,	// (0x0005b4ec) popup_discreet_window_t3_ParamLimits

0xeb9c,	// (0x0005b4ec) popup_discreet_window_t3

0x73bf,	// (0x00053d0f) popup_fshwr2_char_preview_window_ParamLimits

0x73bf,	// (0x00053d0f) popup_fshwr2_char_preview_window

0xecc6,	// (0x0005b616) tmo_note_info_pane_t1

0xecdb,	// (0x0005b62b) tmo_note_info_pane_t2

0xecf0,	// (0x0005b640) tmo_note_info_pane_t3

0xed05,	// (0x0005b655) tmo_note_info_pane_t4

0xed17,	// (0x0005b667) tmo_note_info_pane_t5

0x0004,

0xfe9f,	// (0x0005c7ef) tmo_note_info_pane_t

0xed29,	// (0x0005b679) list_tmo_link_pane_ParamLimits

0xed36,	// (0x0005b686) scroll_pane_cp20_ParamLimits

0x478d,	// (0x000510dd) bg_popup_fep_char_preview_window_cp01

0xed7a,	// (0x0005b6ca) popup_fshwr2_char_preview_window_t1

0xed88,	// (0x0005b6d8) popup_candi_list_indi_window_g1

0xed91,	// (0x0005b6e1) bg_cell_contacts_ai5_widget_pane

0xed9d,	// (0x0005b6ed) cell_contacts_ai5_widget_pane_g1

0xc6d9,	// (0x00059029) cell_contacts_ai5_widget_pane_g2

0xedb2,	// (0x0005b702) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaa,	// (0x0005c7fa) cell_contacts_ai5_widget_pane_g

0xedbe,	// (0x0005b70e) cell_contacts_ai5_widget_pane_t1

0x8529,	// (0x00054e79) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee35,	// (0x0005b785) settings_container_pane

0x91bc,	// (0x00055b0c) listscroll_set_pane_copy1

0xb719,	// (0x00058069) scroll_pane_cp121_copy1

0x9e36,	// (0x00056786) set_content_pane_copy1

0xee41,	// (0x0005b791) aid_height_set_list_copy1_ParamLimits

0xee41,	// (0x0005b791) aid_height_set_list_copy1

0xadf3,	// (0x00057743) aid_size_parent_copy1_ParamLimits

0xadf3,	// (0x00057743) aid_size_parent_copy1

0xee4d,	// (0x0005b79d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee4d,	// (0x0005b79d) button_value_adjust_pane_cp6_copy1

0x94e0,	// (0x00055e30) list_highlight_pane_cp2_copy1_ParamLimits

0x94e0,	// (0x00055e30) list_highlight_pane_cp2_copy1

0xee61,	// (0x0005b7b1) list_set_pane_copy1_ParamLimits

0xee61,	// (0x0005b7b1) list_set_pane_copy1

0xedd0,	// (0x0005b720) main_pane_set_t1_copy1_ParamLimits

0xedd0,	// (0x0005b720) main_pane_set_t1_copy1

0xee0a,	// (0x0005b75a) main_pane_set_t2_copy1_ParamLimits

0xee0a,	// (0x0005b75a) main_pane_set_t2_copy1

0xef0e,	// (0x0005b85e) main_pane_set_t3_copy1

0xef1c,	// (0x0005b86c) main_pane_set_t4_copy1

0xee29,	// (0x0005b779) set_content_pane_g1_copy1_ParamLimits

0xee29,	// (0x0005b779) set_content_pane_g1_copy1

0xef2a,	// (0x0005b87a) setting_code_pane_copy1

0xef32,	// (0x0005b882) setting_slider_graphic_pane_copy1

0xef32,	// (0x0005b882) setting_slider_pane_copy1

0xef3a,	// (0x0005b88a) setting_text_pane_copy1

0xef3a,	// (0x0005b88a) setting_volume_pane_copy1

0xef2a,	// (0x0005b87a) settings_code_pane_cp2_copy1

0xef42,	// (0x0005b892) settings_code_pane_cp_copy1_ParamLimits

0xef42,	// (0x0005b892) settings_code_pane_cp_copy1

0x74cf,	// (0x00053e1f) volume_set_pane_copy1

0xef56,	// (0x0005b8a6) volume_set_pane_g10_copy1

0xef5e,	// (0x0005b8ae) volume_set_pane_g1_copy1

0xef66,	// (0x0005b8b6) volume_set_pane_g2_copy1

0xef6e,	// (0x0005b8be) volume_set_pane_g3_copy1

0xef76,	// (0x0005b8c6) volume_set_pane_g4_copy1

0xef7e,	// (0x0005b8ce) volume_set_pane_g5_copy1

0xef86,	// (0x0005b8d6) volume_set_pane_g6_copy1

0xef8e,	// (0x0005b8de) volume_set_pane_g7_copy1

0xef96,	// (0x0005b8e6) volume_set_pane_g8_copy1

0xef9e,	// (0x0005b8ee) volume_set_pane_g9_copy1

0x7832,	// (0x00054182) bg_set_opt_pane_cp_copy1_ParamLimits

0x7832,	// (0x00054182) bg_set_opt_pane_cp_copy1

0x74d7,	// (0x00053e27) setting_slider_pane_t1_copy1_ParamLimits

0x74d7,	// (0x00053e27) setting_slider_pane_t1_copy1

0x74f6,	// (0x00053e46) setting_slider_pane_t2_copy1_ParamLimits

0x74f6,	// (0x00053e46) setting_slider_pane_t2_copy1

0x7510,	// (0x00053e60) setting_slider_pane_t3_copy1_ParamLimits

0x7510,	// (0x00053e60) setting_slider_pane_t3_copy1

0x7528,	// (0x00053e78) slider_set_pane_copy1_ParamLimits

0x7528,	// (0x00053e78) slider_set_pane_copy1

0x8575,	// (0x00054ec5) set_opt_bg_pane_g1_copy2

0x857d,	// (0x00054ecd) set_opt_bg_pane_g2_copy2

0xefa6,	// (0x0005b8f6) set_opt_bg_pane_g3_copy2

0x858d,	// (0x00054edd) set_opt_bg_pane_g4_copy2

0x8595,	// (0x00054ee5) set_opt_bg_pane_g5_copy2

0x859d,	// (0x00054eed) set_opt_bg_pane_g6_copy2

0xefb0,	// (0x0005b900) set_opt_bg_pane_g7_copy2

0xefb8,	// (0x0005b908) set_opt_bg_pane_g8_copy2

0xefc2,	// (0x0005b912) set_opt_bg_pane_g9_copy2

0x753e,	// (0x00053e8e) aid_size_touch_slider_mark_copy1_ParamLimits

0x753e,	// (0x00053e8e) aid_size_touch_slider_mark_copy1

0xefcc,	// (0x0005b91c) slider_set_pane_g1_copy1

0x7552,	// (0x00053ea2) slider_set_pane_g2_copy1

0x60df,	// (0x00052a2f) slider_set_pane_g3_copy1_ParamLimits

0x60df,	// (0x00052a2f) slider_set_pane_g3_copy1

0x60f3,	// (0x00052a43) slider_set_pane_g4_copy1_ParamLimits

0x60f3,	// (0x00052a43) slider_set_pane_g4_copy1

0x610b,	// (0x00052a5b) slider_set_pane_g5_copy1_ParamLimits

0x610b,	// (0x00052a5b) slider_set_pane_g5_copy1

0x60df,	// (0x00052a2f) slider_set_pane_g6_copy1_ParamLimits

0x60df,	// (0x00052a2f) slider_set_pane_g6_copy1

0x755a,	// (0x00053eaa) slider_set_pane_g7_copy1_ParamLimits

0x755a,	// (0x00053eaa) slider_set_pane_g7_copy1

0x7752,	// (0x000540a2) bg_set_opt_pane_cp2_copy1

0xefd5,	// (0x0005b925) setting_slider_graphic_pane_g1_copy1

0xefde,	// (0x0005b92e) setting_slider_graphic_pane_t1_copy1

0xefee,	// (0x0005b93e) setting_slider_graphic_pane_t2_copy1

0xeffe,	// (0x0005b94e) slider_set_pane_cp_copy1

0xf00e,	// (0x0005b95e) input_focus_pane_cp1_copy1

0xf017,	// (0x0005b967) list_set_text_pane_copy1

0xf01f,	// (0x0005b96f) setting_text_pane_g1_copy1

0x8426,	// (0x00054d76) set_text_pane_t1_copy1

0xf00e,	// (0x0005b95e) input_focus_pane_cp2_copy1

0xf01f,	// (0x0005b96f) setting_code_pane_g1_copy1

0xf028,	// (0x0005b978) setting_code_pane_t1_copy1

0xb541,	// (0x00057e91) list_set_graphic_pane_copy1

0x7752,	// (0x000540a2) bg_set_opt_pane_cp4_copy1

0x8ec3,	// (0x00055813) list_set_graphic_pane_g1_copy1_ParamLimits

0x8ec3,	// (0x00055813) list_set_graphic_pane_g1_copy1

0xf036,	// (0x0005b986) list_set_graphic_pane_g2_copy1

0x8edb,	// (0x0005582b) list_set_graphic_pane_t1_copy1_ParamLimits

0x8edb,	// (0x0005582b) list_set_graphic_pane_t1_copy1

0xc03b,	// (0x0005898b) rs_clock_indi_pane_g1

0xf03e,	// (0x0005b98e) rs_clock_indi_pane_t1

0xf04c,	// (0x0005b99c) rs_indi_pane

0xf054,	// (0x0005b9a4) rs_indi_pane_g1

0xf05d,	// (0x0005b9ad) rs_indi_pane_g2

0xf066,	// (0x0005b9b6) rs_indi_pane_g3

0x0002,

0xfeb1,	// (0x0005c801) rs_indi_pane_g

0x91bc,	// (0x00055b0c) bg_popup_preview_window_pane_cp03

0xf06f,	// (0x0005b9bf) popup_fep_tooltip_window_t1

0xccc3,	// (0x00059613) popup_note2_window_g2_ParamLimits

0xccc3,	// (0x00059613) popup_note2_window_g2

0x0001,

0xfc3e,	// (0x0005c58e) popup_note2_window_g_ParamLimits

0xfc3e,	// (0x0005c58e) popup_note2_window_g

0xd1be,	// (0x00059b0e) bg_popup_sub_pane_cp11_ParamLimits

0xd1cb,	// (0x00059b1b) cell_ai3_links_pane_g1_ParamLimits

0xd1e2,	// (0x00059b32) cell_ai3_links_pane_t1

0x8426,	// (0x00054d76) set_text_pane_t1_copy1_ParamLimits

0x90d9,	// (0x00055a29) cell_graphic_popup_pane_cp2_ParamLimits

0x90d9,	// (0x00055a29) cell_graphic_popup_pane_cp2

0xf07d,	// (0x0005b9cd) cell_graphic_popup_pane_g1_cp2

0x7e0a,	// (0x0005475a) cell_graphic_popup_pane_g2_cp2

0xf085,	// (0x0005b9d5) cell_graphic_popup_pane_g3_cp2

0xf08d,	// (0x0005b9dd) cell_graphic_popup_pane_t2_cp2

0x7e1b,	// (0x0005476b) grid_highlight_pane_cp3_cp2

0x88cd,	// (0x0005521d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8529,	// (0x00054e79) main_tmo_pane_ParamLimits

0xd518,	// (0x00059e68) popup_tmo_big_image_note_window

0xe6e6,	// (0x0005b036) cell_ai5_widget_list_pane

0xe6ee,	// (0x0005b03e) cell_ai5_widget_lrg_icon_pane

0xecc6,	// (0x0005b616) tmo_note_info_pane_t1_ParamLimits

0xecdb,	// (0x0005b62b) tmo_note_info_pane_t2_ParamLimits

0xecf0,	// (0x0005b640) tmo_note_info_pane_t3_ParamLimits

0xed05,	// (0x0005b655) tmo_note_info_pane_t4_ParamLimits

0xed17,	// (0x0005b667) tmo_note_info_pane_t5_ParamLimits

0xfe9f,	// (0x0005c7ef) tmo_note_info_pane_t_ParamLimits

0xee35,	// (0x0005b785) settings_container_pane_ParamLimits

0xf006,	// (0x0005b956) indicator_popup_pane_cp5

0xf006,	// (0x0005b956) indicator_popup_pane_cp6

0xb541,	// (0x00057e91) list_set_graphic_pane_copy1_ParamLimits

0x27d7,	// (0x0004f127) bg_popup_window_pane_cp23

0xf09b,	// (0x0005b9eb) popup_tmo_big_image_note_window_g1

0xf0a5,	// (0x0005b9f5) popup_tmo_big_image_note_window_t1

0xf0b5,	// (0x0005ba05) popup_tmo_big_image_note_window_t2

0xf0c5,	// (0x0005ba15) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb8,	// (0x0005c808) popup_tmo_big_image_note_window_t

0xc03b,	// (0x0005898b) cell_ai5_widget_lrg_icon_pane_g1

0xf0d5,	// (0x0005ba25) cell_ai5_widget_lrg_icon_pane_t1

0xf0e3,	// (0x0005ba33) cell_ai5_widget_list_row_pane_ParamLimits

0xf0e3,	// (0x0005ba33) cell_ai5_widget_list_row_pane

0xf0fa,	// (0x0005ba4a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0fa,	// (0x0005ba4a) cell_ai5_widget_list_row_pane_g1

0xf107,	// (0x0005ba57) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf107,	// (0x0005ba57) cell_ai5_widget_list_row_pane_t1

0xf138,	// (0x0005ba88) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf138,	// (0x0005ba88) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebf,	// (0x0005c80f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebf,	// (0x0005c80f) cell_ai5_widget_list_row_pane_t

0x478d,	// (0x000510dd) main_fep_vtchi_ss_pane

0xf188,	// (0x0005bad8) popup_fep_char_pre_window

0xf190,	// (0x0005bae0) popup_fep_ituss_window

0xf1bc,	// (0x0005bb0c) popup_fep_vkbss_window

0x94e0,	// (0x00055e30) grid_vkbss_keypad_pane_ParamLimits

0x94e0,	// (0x00055e30) grid_vkbss_keypad_pane

0x94e0,	// (0x00055e30) ituss_keypad_pane

0x757c,	// (0x00053ecc) aid_vkbss_key_offset_ParamLimits

0x757c,	// (0x00053ecc) aid_vkbss_key_offset

0x7588,	// (0x00053ed8) cell_vkbss_key_pane_ParamLimits

0x7588,	// (0x00053ed8) cell_vkbss_key_pane

0xf1fc,	// (0x0005bb4c) bg_cell_vkbss_key_g1_ParamLimits

0xf1fc,	// (0x0005bb4c) bg_cell_vkbss_key_g1

0xf208,	// (0x0005bb58) cell_vkbss_key_3p_pane_ParamLimits

0xf208,	// (0x0005bb58) cell_vkbss_key_3p_pane

0xf23e,	// (0x0005bb8e) cell_vkbss_key_g1_ParamLimits

0xf23e,	// (0x0005bb8e) cell_vkbss_key_g1

0xf274,	// (0x0005bbc4) cell_vkbss_key_t1_ParamLimits

0xf274,	// (0x0005bbc4) cell_vkbss_key_t1

0x75e0,	// (0x00053f30) cell_ituss_key_pane_ParamLimits

0x75e0,	// (0x00053f30) cell_ituss_key_pane

0xf2d0,	// (0x0005bc20) bg_cell_ituss_key_g1_ParamLimits

0xf2d0,	// (0x0005bc20) bg_cell_ituss_key_g1

0xf2dc,	// (0x0005bc2c) cell_ituss_key_pane_g1_ParamLimits

0xf2dc,	// (0x0005bc2c) cell_ituss_key_pane_g1

0x75f1,	// (0x00053f41) cell_ituss_key_pane_g2_ParamLimits

0x75f1,	// (0x00053f41) cell_ituss_key_pane_g2

0x0005,

0xfec6,	// (0x0005c816) cell_ituss_key_pane_g_ParamLimits

0xfec6,	// (0x0005c816) cell_ituss_key_pane_g

0x7675,	// (0x00053fc5) cell_ituss_key_t1_ParamLimits

0x7675,	// (0x00053fc5) cell_ituss_key_t1

0x76af,	// (0x00053fff) cell_ituss_key_t2_ParamLimits

0x76af,	// (0x00053fff) cell_ituss_key_t2

0x76e0,	// (0x00054030) cell_ituss_key_t3_ParamLimits

0x76e0,	// (0x00054030) cell_ituss_key_t3

0x76af,	// (0x00053fff) cell_ituss_key_t4_ParamLimits

0x76af,	// (0x00053fff) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x0005c823) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x0005c823) cell_ituss_key_t

0xf302,	// (0x0005bc52) cell_vkbss_key_3p_pane_g1

0xf30a,	// (0x0005bc5a) cell_vkbss_key_3p_pane_g2

0xf312,	// (0x0005bc62) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x0005c82e) cell_vkbss_key_3p_pane_g

0x91bc,	// (0x00055b0c) bg_popup_fep_char_preview_window_cp02

0xf31a,	// (0x0005bc6a) popup_fep_char_pre_window_t1

0xe667,	// (0x0005afb7) main_ai5_sk_pane

0xed91,	// (0x0005b6e1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed9d,	// (0x0005b6ed) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6d9,	// (0x00059029) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedb2,	// (0x0005b702) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaa,	// (0x0005c7fa) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedbe,	// (0x0005b70e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8529,	// (0x00054e79) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf328,	// (0x0005bc78) main_ai5_sk_pane_g1

0x9ed2,	// (0x00056822) popup_query_code_window_g1

0xf1a6,	// (0x0005baf6) popup_fep_vkb_icf_pane

0xf1d3,	// (0x0005bb23) popup_fep_vtchi_icf_pane

0x94e0,	// (0x00055e30) bg_icf_pane

0x94e0,	// (0x00055e30) list_vkb_icf_pane

0xf331,	// (0x0005bc81) bg_icf_pane_cp01

0x91bc,	// (0x00055b0c) vtchi_icf_list_pane

0xf3a4,	// (0x0005bcf4) list_vkb_icf_pane_t1_ParamLimits

0xf3a4,	// (0x0005bcf4) list_vkb_icf_pane_t1

0xf3c5,	// (0x0005bd15) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0005bd15) vtchi_icf_list_pane_t1

0xf190,	// (0x0005bae0) popup_fep_ituss_window_ParamLimits

0xf1d3,	// (0x0005bb23) popup_fep_vtchi_icf_pane_ParamLimits

0x94e0,	// (0x00055e30) ituss_keypad_pane_ParamLimits

0x7570,	// (0x00053ec0) ituss_sks_pane

0x94e0,	// (0x00055e30) bg_icf_pane_ParamLimits

0xf160,	// (0x0005bab0) icf_edit_indi_pane_ParamLimits

0xf160,	// (0x0005bab0) icf_edit_indi_pane

0x94e0,	// (0x00055e30) list_vkb_icf_pane_ParamLimits

0xf331,	// (0x0005bc81) bg_icf_pane_cp01_ParamLimits

0xf17b,	// (0x0005bacb) icf_edit_indi_pane_cp01_ParamLimits

0xf17b,	// (0x0005bacb) icf_edit_indi_pane_cp01

0xf344,	// (0x0005bc94) vtchi_query_pane

0xe4e3,	// (0x0005ae33) icf_edit_indi_pane_g1_ParamLimits

0xe4e3,	// (0x0005ae33) icf_edit_indi_pane_g1

0xf43a,	// (0x0005bd8a) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0005bd8a) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0005c859) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0005c859) icf_edit_indi_pane_g

0xf44e,	// (0x0005bd9e) icf_edit_indi_pane_t1

0xf3e3,	// (0x0005bd33) bg_input_focus_pane_cp042

0x8440,	// (0x00054d90) vtchi_button_pane

0xf3ec,	// (0x0005bd3c) vtchi_query_pane_t1

0xf3fa,	// (0x0005bd4a) vtchi_query_pane_t2

0xf408,	// (0x0005bd58) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0005c848) vtchi_query_pane_t

0x478d,	// (0x000510dd) bg_button_pane_cp13

0xf416,	// (0x0005bd66) vtchi_button_pane_g1

0x7723,	// (0x00054073) ituss_sks_pane_g1

0x772e,	// (0x0005407e) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0005c84f) ituss_sks_pane_g

0xf41e,	// (0x0005bd6e) ituss_sks_pane_t1

0xf42c,	// (0x0005bd7c) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0005c854) ituss_sks_pane_t

0xbabd,	// (0x0005840d) indicator_nsta_pane_cp_g1

0xbac6,	// (0x00058416) indicator_nsta_pane_cp_g2

0xbace,	// (0x0005841e) indicator_nsta_pane_cp_g3

0xbad6,	// (0x00058426) indicator_nsta_pane_cp_g4

0xbac6,	// (0x00058416) indicator_nsta_pane_cp_g5

0xbace,	// (0x0005841e) indicator_nsta_pane_cp_g6

0x0005,

0xfa7c,	// (0x0005c3cc) indicator_nsta_pane_cp_g

0xe23c,	// (0x0005ab8c) cell_graphic2_pane_t2_ParamLimits

0xe23c,	// (0x0005ab8c) cell_graphic2_pane_t2

0x0001,

0xfd95,	// (0x0005c6e5) cell_graphic2_pane_t_ParamLimits

0xfd95,	// (0x0005c6e5) cell_graphic2_pane_t

0xe268,	// (0x0005abb8) cell_graphic2_control_pane_t1

0x8c73,	// (0x000555c3) signal_pane_g3_ParamLimits

0x8c73,	// (0x000555c3) signal_pane_g3

0x8c85,	// (0x000555d5) signal_pane_g4_ParamLimits

0x8c85,	// (0x000555d5) signal_pane_g4

0xf14a,	// (0x0005ba9a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14a,	// (0x0005ba9a) cell_ai5_widget_list_row_pane_t3

0xf2f0,	// (0x0005bc40) cell_ituss_key_pane_t1_ParamLimits

0xf2f0,	// (0x0005bc40) cell_ituss_key_pane_t1

0x9b0f,	// (0x0005645f) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b0f,	// (0x0005645f) form_field_data_wide_pane_vc_t2

0x9b23,	// (0x00056473) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b23,	// (0x00056473) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0005c134) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005c134) form_field_data_wide_pane_vc_t

0xb75b,	// (0x000580ab) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb75b,	// (0x000580ab) form_field_slider_wide_pane_vc_t3

0xb845,	// (0x00058195) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb845,	// (0x00058195) form_field_popup_wide_pane_vc_t2

0xb85c,	// (0x000581ac) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb85c,	// (0x000581ac) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6b,	// (0x0005c3bb) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6b,	// (0x0005c3bb) form_field_popup_wide_pane_vc_t

0x7347,	// (0x00053c97) aid_fshwr2_btn_pane_ParamLimits

0x7353,	// (0x00053ca3) aid_fshwr2_syb_pane_ParamLimits

0x7365,	// (0x00053cb5) aid_fshwr2_txt_pane_ParamLimits

0x6b99,	// (0x000534e9) fshwr2_bg_pane_ParamLimits

0x7371,	// (0x00053cc1) fshwr2_func_candi_pane_ParamLimits

0x738d,	// (0x00053cdd) fshwr2_hwr_syb_pane_ParamLimits

0x73a7,	// (0x00053cf7) fshwr2_icf_pane_ParamLimits

0x8198,	// (0x00054ae8) list_double_graphic_pane_vc_g4_ParamLimits

0x8198,	// (0x00054ae8) list_double_graphic_pane_vc_g4

0x7611,	// (0x00053f61) cell_ituss_key_pane_g3_ParamLimits

0x7611,	// (0x00053f61) cell_ituss_key_pane_g3

0x7711,	// (0x00054061) cell_ituss_key_t5_ParamLimits

0x7711,	// (0x00054061) cell_ituss_key_t5

0xf1bc,	// (0x0005bb0c) popup_fep_vkbss_window_ParamLimits

0xe671,	// (0x0005afc1) aid_cell_ai5_quarter

0xf44e,	// (0x0005bd9e) icf_edit_indi_pane_t1_ParamLimits

0x7b63,	// (0x000544b3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7b63,	// (0x000544b3) aid_tch_indicator_popup_pane_cp2

0x7b76,	// (0x000544c6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7b76,	// (0x000544c6) aid_tch_query_popup_data_pane_cp2

0x9e7a,	// (0x000567ca) aid_tch_query_popup_pane_ParamLimits

0x9e7a,	// (0x000567ca) aid_tch_query_popup_pane

0x9e7a,	// (0x000567ca) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e7a,	// (0x000567ca) aid_tch_query_popup_data_pane_cp1

0x94e0,	// (0x00055e30) cell_fshwr2_syb_bg_pane_ParamLimits

0x749c,	// (0x00053dec) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x74b0,	// (0x00053e00) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a6,	// (0x0005baf6) popup_fep_vkb_icf_pane_ParamLimits

0x71a7,	// (0x00053af7) bg_popup_fep_char_preview_window_g10

0xe7ae,	// (0x0005b0fe) cell_ai5_widget_pane_g11_ParamLimits

0xe7ae,	// (0x0005b0fe) cell_ai5_widget_pane_g11

0xe7ba,	// (0x0005b10a) cell_ai5_widget_pane_g12_ParamLimits

0xe7ba,	// (0x0005b10a) cell_ai5_widget_pane_g12

0xe7c6,	// (0x0005b116) cell_ai5_widget_pane_g13_ParamLimits

0xe7c6,	// (0x0005b116) cell_ai5_widget_pane_g13

0xe8f5,	// (0x0005b245) cell_ai5_widget_pane_t11_ParamLimits

0xe8f5,	// (0x0005b245) cell_ai5_widget_pane_t11

0xe907,	// (0x0005b257) cell_ai5_widget_pane_t12_ParamLimits

0xe907,	// (0x0005b257) cell_ai5_widget_pane_t12

0x761d,	// (0x00053f6d) cell_ituss_key_pane_g4_ParamLimits

0x761d,	// (0x00053f6d) cell_ituss_key_pane_g4

0x7639,	// (0x00053f89) cell_ituss_key_pane_g5_ParamLimits

0x7639,	// (0x00053f89) cell_ituss_key_pane_g5

0x7655,	// (0x00053fa5) cell_ituss_key_pane_g6_ParamLimits

0x7655,	// (0x00053fa5) cell_ituss_key_pane_g6

0x9a0a,	// (0x0005635a) bg_icf_pane_g1

0xf34c,	// (0x0005bc9c) bg_icf_pane_g2

0xf358,	// (0x0005bca8) bg_icf_pane_g3

0xf362,	// (0x0005bcb2) bg_icf_pane_g4

0xf36e,	// (0x0005bcbe) bg_icf_pane_g5

0xf378,	// (0x0005bcc8) bg_icf_pane_g6

0xf384,	// (0x0005bcd4) bg_icf_pane_g7

0xf38e,	// (0x0005bcde) bg_icf_pane_g8

0xf39a,	// (0x0005bcea) bg_icf_pane_g9

0x0008,

0xfee5,	// (0x0005c835) bg_icf_pane_g

0xf1e9,	// (0x0005bb39) popup_hyb_candi_window_ParamLimits

0xf1e9,	// (0x0005bb39) popup_hyb_candi_window

0x9a7e,	// (0x000563ce) bg_popup_sub_pane_cp01_ParamLimits

0x9a7e,	// (0x000563ce) bg_popup_sub_pane_cp01

0xf467,	// (0x0005bdb7) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0005bdb7) entry_hyb_candi_pane

0xf476,	// (0x0005bdc6) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0005bdc6) grid_hyb_candi_pane

0xf48b,	// (0x0005bddb) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0005bddb) grid_hyb_phrase_pane

0xf49a,	// (0x0005bdea) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0005bdea) cell_hyb_candi_pane

0xf4bd,	// (0x0005be0d) cell_hyb_candi_scroll_pane

0x8bb2,	// (0x00055502) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0005be16) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0005be24) cell_hyb_phrase_pane

0x8bb2,	// (0x00055502) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0005be2d) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0005be3b) entry_hyb_candi_pane_t1

0x91bc,	// (0x00055b0c) input_focus_pane_cp06

0xf4f9,	// (0x0005be49) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0005be51) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0005be59) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0005be61) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0005be69) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0005be71) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

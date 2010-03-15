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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00037101 };

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
0x8f8d,	// (0x0004008e) Screen

0x8f99,	// (0x0004009a) application_window_ParamLimits

0x8f99,	// (0x0004009a) application_window

0x84c0,	// (0x0003f5c1) screen_g1

0x8fd1,	// (0x000400d2) area_bottom_pane_ParamLimits

0x8fd1,	// (0x000400d2) area_bottom_pane

0xe868,	// (0x00045969) area_top_pane_ParamLimits

0xe868,	// (0x00045969) area_top_pane

0xe906,	// (0x00045a07) main_pane_ParamLimits

0xe906,	// (0x00045a07) main_pane

0x84ca,	// (0x0003f5cb) misc_graphics

0xa8d5,	// (0x000419d6) battery_pane_ParamLimits

0xa8d5,	// (0x000419d6) battery_pane

0x2d57,	// (0x00039e58) bg_status_flat_pane_g8

0x2d5f,	// (0x00039e60) bg_status_flat_pane_g9

0x2161,	// (0x00039262) context_pane_ParamLimits

0x2161,	// (0x00039262) context_pane

0xbd68,	// (0x00042e69) navi_pane_ParamLimits

0xbd68,	// (0x00042e69) navi_pane

0xbdf2,	// (0x00042ef3) signal_pane_ParamLimits

0xbdf2,	// (0x00042ef3) signal_pane

0x0008,

0xf87a,	// (0x0004697b) bg_status_flat_pane_g

0xbe82,	// (0x00042f83) status_pane_g1_ParamLimits

0xbe82,	// (0x00042f83) status_pane_g1

0xbe98,	// (0x00042f99) status_pane_g2_ParamLimits

0xbe98,	// (0x00042f99) status_pane_g2

0x23a2,	// (0x000394a3) status_pane_g3_ParamLimits

0x23a2,	// (0x000394a3) status_pane_g3

0x0004,

0xf7a6,	// (0x000468a7) status_pane_g_ParamLimits

0xf7a6,	// (0x000468a7) status_pane_g

0xbea4,	// (0x00042fa5) title_pane_ParamLimits

0xbea4,	// (0x00042fa5) title_pane

0xbf07,	// (0x00043008) uni_indicator_pane_ParamLimits

0xbf07,	// (0x00043008) uni_indicator_pane

0x198a,	// (0x00038a8b) bg_list_pane_ParamLimits

0x198a,	// (0x00038a8b) bg_list_pane

0xa0f9,	// (0x000411fa) find_pane

0xa101,	// (0x00041202) listscroll_app_pane_ParamLimits

0xa101,	// (0x00041202) listscroll_app_pane

0x19be,	// (0x00038abf) listscroll_form_pane

0xa10d,	// (0x0004120e) listscroll_gen_pane_ParamLimits

0xa10d,	// (0x0004120e) listscroll_gen_pane

0x19be,	// (0x00038abf) listscroll_set_pane

0x390a,	// (0x0003aa0b) main_idle_act_pane

0x1672,	// (0x00038773) main_idle_trad_pane

0x1672,	// (0x00038773) main_list_empty_pane

0x19ec,	// (0x00038aed) main_midp_pane

0x19f8,	// (0x00038af9) main_pane_g1_ParamLimits

0x19f8,	// (0x00038af9) main_pane_g1

0xa12f,	// (0x00041230) popup_ai_message_window_ParamLimits

0xa12f,	// (0x00041230) popup_ai_message_window

0xa1cf,	// (0x000412d0) popup_fep_china_uni_window_ParamLimits

0xa1cf,	// (0x000412d0) popup_fep_china_uni_window

0x1b1a,	// (0x00038c1b) popup_fep_japan_candidate_window_ParamLimits

0x1b1a,	// (0x00038c1b) popup_fep_japan_candidate_window

0x1b44,	// (0x00038c45) popup_fep_japan_predictive_window_ParamLimits

0x1b44,	// (0x00038c45) popup_fep_japan_predictive_window

0xa22f,	// (0x00041330) popup_find_window

0xa24c,	// (0x0004134d) popup_grid_graphic_window_ParamLimits

0xa24c,	// (0x0004134d) popup_grid_graphic_window

0x1bb5,	// (0x00038cb6) popup_large_graphic_colour_window

0xa2f0,	// (0x000413f1) popup_menu_window_ParamLimits

0xa2f0,	// (0x000413f1) popup_menu_window

0xa4e0,	// (0x000415e1) popup_note_image_window

0xa4a0,	// (0x000415a1) popup_note_wait_window_ParamLimits

0xa4a0,	// (0x000415a1) popup_note_wait_window

0xa4f8,	// (0x000415f9) popup_note_window_ParamLimits

0xa4f8,	// (0x000415f9) popup_note_window

0xa5a6,	// (0x000416a7) popup_query_code_window_ParamLimits

0xa5a6,	// (0x000416a7) popup_query_code_window

0x1e21,	// (0x00038f22) popup_query_data_code_window_ParamLimits

0x1e21,	// (0x00038f22) popup_query_data_code_window

0xa5e6,	// (0x000416e7) popup_query_data_window_ParamLimits

0xa5e6,	// (0x000416e7) popup_query_data_window

0xa67a,	// (0x0004177b) popup_query_sat_info_window_ParamLimits

0xa67a,	// (0x0004177b) popup_query_sat_info_window

0xa725,	// (0x00041826) popup_snote_single_graphic_window_ParamLimits

0xa725,	// (0x00041826) popup_snote_single_graphic_window

0xa725,	// (0x00041826) popup_snote_single_text_window_ParamLimits

0xa725,	// (0x00041826) popup_snote_single_text_window

0x1ebc,	// (0x00038fbd) popup_sub_window_general

0x2002,	// (0x00039103) popup_window_general_ParamLimits

0x2002,	// (0x00039103) popup_window_general

0x201b,	// (0x0003911c) power_save_pane

0x9f67,	// (0x00041068) control_pane_g1_ParamLimits

0x9f67,	// (0x00041068) control_pane_g1

0x9f90,	// (0x00041091) control_pane_g2_ParamLimits

0x9f90,	// (0x00041091) control_pane_g2

0x1933,	// (0x00038a34) control_pane_g3_ParamLimits

0x1933,	// (0x00038a34) control_pane_g3

0x0007,

0xf78e,	// (0x0004688f) control_pane_g_ParamLimits

0xf78e,	// (0x0004688f) control_pane_g

0x9ff2,	// (0x000410f3) control_pane_t1_ParamLimits

0x9ff2,	// (0x000410f3) control_pane_t1

0xa050,	// (0x00041151) control_pane_t2_ParamLimits

0xa050,	// (0x00041151) control_pane_t2

0x0002,

0xf79f,	// (0x000468a0) control_pane_t_ParamLimits

0xf79f,	// (0x000468a0) control_pane_t

0x1854,	// (0x00038955) navi_navi_volume_pane_cp1

0x185d,	// (0x0003895e) status_small_icon_pane

0x1865,	// (0x00038966) status_small_pane_g1_ParamLimits

0x1865,	// (0x00038966) status_small_pane_g1

0x1899,	// (0x0003899a) status_small_pane_g2_ParamLimits

0x1899,	// (0x0003899a) status_small_pane_g2

0x18a5,	// (0x000389a6) status_small_pane_g3_ParamLimits

0x18a5,	// (0x000389a6) status_small_pane_g3

0x18b1,	// (0x000389b2) status_small_pane_g4_ParamLimits

0x18b1,	// (0x000389b2) status_small_pane_g4

0x18bd,	// (0x000389be) status_small_pane_g5_ParamLimits

0x18bd,	// (0x000389be) status_small_pane_g5

0x18cc,	// (0x000389cd) status_small_pane_g6_ParamLimits

0x18cc,	// (0x000389cd) status_small_pane_g6

0x0007,

0xf77d,	// (0x0004687e) status_small_pane_g_ParamLimits

0xf77d,	// (0x0004687e) status_small_pane_g

0x18fc,	// (0x000389fd) status_small_pane_t1

0x191f,	// (0x00038a20) status_small_wait_pane_ParamLimits

0x191f,	// (0x00038a20) status_small_wait_pane

0x9cb1,	// (0x00040db2) aid_levels_signal_ParamLimits

0x9cb1,	// (0x00040db2) aid_levels_signal

0x9cc9,	// (0x00040dca) signal_pane_g1_ParamLimits

0x9cc9,	// (0x00040dca) signal_pane_g1

0x9ce4,	// (0x00040de5) signal_pane_g2_ParamLimits

0x9ce4,	// (0x00040de5) signal_pane_g2

0x0003,

0xf70e,	// (0x0004680f) signal_pane_g_ParamLimits

0xf70e,	// (0x0004680f) signal_pane_g

0xef90,	// (0x00046091) context_pane_g1

0x914e,	// (0x0004024f) title_pane_g1

0x9179,	// (0x0004027a) title_pane_t1

0x84ec,	// (0x0003f5ed) title_pane_t2

0x8512,	// (0x0003f613) title_pane_t3

0x0002,

0xf55d,	// (0x0004665e) title_pane_t

0xbf2f,	// (0x00043030) aid_levels_battery_ParamLimits

0xbf2f,	// (0x00043030) aid_levels_battery

0xbf4b,	// (0x0004304c) battery_pane_g1_ParamLimits

0xbf4b,	// (0x0004304c) battery_pane_g1

0xbf68,	// (0x00043069) battery_pane_g2_ParamLimits

0xbf68,	// (0x00043069) battery_pane_g2

0x0001,

0xf7b1,	// (0x000468b2) battery_pane_g_ParamLimits

0xf7b1,	// (0x000468b2) battery_pane_g

0xc21e,	// (0x0004331f) uni_indicator_pane_g1

0xc233,	// (0x00043334) uni_indicator_pane_g2

0xc248,	// (0x00043349) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x00046a23) uni_indicator_pane_g

0xf3e1,	// (0x000464e2) navi_icon_pane_ParamLimits

0xf3e1,	// (0x000464e2) navi_icon_pane

0xf365,	// (0x00046466) navi_midp_pane

0xf3fd,	// (0x000464fe) navi_navi_pane

0xf407,	// (0x00046508) navi_text_pane_ParamLimits

0xf407,	// (0x00046508) navi_text_pane

0x84c0,	// (0x0003f5c1) status_small_wait_pane_g1

0xb593,	// (0x00042694) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x00046a1e) status_small_wait_pane_g

0xc185,	// (0x00043286) navi_navi_icon_text_pane

0xc18d,	// (0x0004328e) navi_navi_pane_g1_ParamLimits

0xc18d,	// (0x0004328e) navi_navi_pane_g1

0xc19f,	// (0x000432a0) navi_navi_pane_g2_ParamLimits

0xc19f,	// (0x000432a0) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x000469ec) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x000469ec) navi_navi_pane_g

0x33e0,	// (0x0003a4e1) navi_navi_tabs_pane

0xc1b1,	// (0x000432b2) navi_navi_text_pane

0xc185,	// (0x00043286) navi_navi_volume_pane

0xc173,	// (0x00043274) navi_text_pane_t1

0xc167,	// (0x00043268) navi_icon_pane_g1

0x32d7,	// (0x0003a3d8) navi_navi_text_pane_t1

0xab1c,	// (0x00041c1d) navi_navi_volume_pane_g1

0xab24,	// (0x00041c25) volume_small_pane

0xc0af,	// (0x000431b0) navi_navi_icon_text_pane_g1

0xc0b7,	// (0x000431b8) navi_navi_icon_text_pane_t1

0xf3fd,	// (0x000464fe) navi_tabs_2_long_pane

0xf3fd,	// (0x000464fe) navi_tabs_2_pane

0xf3fd,	// (0x000464fe) navi_tabs_3_long_pane

0xf3fd,	// (0x000464fe) navi_tabs_3_pane

0xf3fd,	// (0x000464fe) navi_tabs_4_pane

0xaafc,	// (0x00041bfd) tabs_2_active_pane_ParamLimits

0xaafc,	// (0x00041bfd) tabs_2_active_pane

0xab0c,	// (0x00041c0d) tabs_2_passive_pane_ParamLimits

0xab0c,	// (0x00041c0d) tabs_2_passive_pane

0xaaca,	// (0x00041bcb) tabs_3_active_pane_ParamLimits

0xaaca,	// (0x00041bcb) tabs_3_active_pane

0xaada,	// (0x00041bdb) tabs_3_passive_pane_ParamLimits

0xaada,	// (0x00041bdb) tabs_3_passive_pane

0xaaeb,	// (0x00041bec) tabs_3_passive_pane_cp_ParamLimits

0xaaeb,	// (0x00041bec) tabs_3_passive_pane_cp

0xaa86,	// (0x00041b87) tabs_4_active_pane_ParamLimits

0xaa86,	// (0x00041b87) tabs_4_active_pane

0xaa97,	// (0x00041b98) tabs_4_passive_pane_ParamLimits

0xaa97,	// (0x00041b98) tabs_4_passive_pane

0xaaa8,	// (0x00041ba9) tabs_4_passive_pane_cp_ParamLimits

0xaaa8,	// (0x00041ba9) tabs_4_passive_pane_cp

0xaab9,	// (0x00041bba) tabs_4_passive_pane_cp2_ParamLimits

0xaab9,	// (0x00041bba) tabs_4_passive_pane_cp2

0xaa62,	// (0x00041b63) tabs_2_long_active_pane_ParamLimits

0xaa62,	// (0x00041b63) tabs_2_long_active_pane

0xaa74,	// (0x00041b75) tabs_2_long_passive_pane_ParamLimits

0xaa74,	// (0x00041b75) tabs_2_long_passive_pane

0xaa17,	// (0x00041b18) tabs_3_long_active_pane_ParamLimits

0xaa17,	// (0x00041b18) tabs_3_long_active_pane

0xaa30,	// (0x00041b31) tabs_3_long_passive_pane_ParamLimits

0xaa30,	// (0x00041b31) tabs_3_long_passive_pane

0xaa49,	// (0x00041b4a) tabs_3_long_passive_pane_cp_ParamLimits

0xaa49,	// (0x00041b4a) tabs_3_long_passive_pane_cp

0x01e0,	// (0x000372e1) volume_small_pane_g1

0xa9c6,	// (0x00041ac7) volume_small_pane_g2

0xa9cf,	// (0x00041ad0) volume_small_pane_g3

0xa9d8,	// (0x00041ad9) volume_small_pane_g4

0xa9e1,	// (0x00041ae2) volume_small_pane_g5

0xa9ea,	// (0x00041aeb) volume_small_pane_g6

0xa9f3,	// (0x00041af4) volume_small_pane_g7

0xa9fc,	// (0x00041afd) volume_small_pane_g8

0xaa05,	// (0x00041b06) volume_small_pane_g9

0xaa0e,	// (0x00041b0f) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x000469b8) volume_small_pane_g

0x8524,	// (0x0003f625) bg_active_tab_pane_cp2_ParamLimits

0x8524,	// (0x0003f625) bg_active_tab_pane_cp2

0x9205,	// (0x00040306) tabs_3_active_pane_g1

0x920d,	// (0x0004030e) tabs_3_active_pane_t1

0x8524,	// (0x0003f625) bg_passive_tab_pane_cp2_ParamLimits

0x8524,	// (0x0003f625) bg_passive_tab_pane_cp2

0x9205,	// (0x00040306) tabs_3_passive_pane_g1

0x920d,	// (0x0004030e) tabs_3_passive_pane_t1

0x8524,	// (0x0003f625) bg_active_tab_pane_cp3_ParamLimits

0x8524,	// (0x0003f625) bg_active_tab_pane_cp3

0x921f,	// (0x00040320) tabs_4_active_pane_g1

0x9227,	// (0x00040328) tabs_4_active_pane_t1

0x8524,	// (0x0003f625) bg_passive_tab_pane_cp3_ParamLimits

0x8524,	// (0x0003f625) bg_passive_tab_pane_cp3

0x921f,	// (0x00040320) tabs_4_1_passive_pane_g1

0x9227,	// (0x00040328) tabs_4_1_passive_pane_t1

0x19ec,	// (0x00038aed) list_highlight_pane_cp2

0xc306,	// (0x00043407) list_set_pane_ParamLimits

0xc306,	// (0x00043407) list_set_pane

0xc3ce,	// (0x000434cf) main_pane_set_t1_ParamLimits

0xc3ce,	// (0x000434cf) main_pane_set_t1

0xc3ee,	// (0x000434ef) main_pane_set_t2_ParamLimits

0xc3ee,	// (0x000434ef) main_pane_set_t2

0xc402,	// (0x00043503) main_pane_set_t3_ParamLimits

0xc402,	// (0x00043503) main_pane_set_t3

0xc416,	// (0x00043517) main_pane_set_t4_ParamLimits

0xc416,	// (0x00043517) main_pane_set_t4

0x0003,

0xf987,	// (0x00046a88) main_pane_set_t_ParamLimits

0xf987,	// (0x00046a88) main_pane_set_t

0xc42a,	// (0x0004352b) setting_code_pane

0x3a5e,	// (0x0003ab5f) setting_slider_graphic_pane

0x3a5e,	// (0x0003ab5f) setting_slider_pane

0x3a5e,	// (0x0003ab5f) setting_text_pane

0x3a5e,	// (0x0003ab5f) setting_volume_pane

0xea82,	// (0x00045b83) volume_set_pane

0xb2b8,	// (0x000423b9) bg_set_opt_pane_cp

0xea8c,	// (0x00045b8d) setting_slider_pane_t1

0xeaa5,	// (0x00045ba6) setting_slider_pane_t2

0xeabf,	// (0x00045bc0) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00046665) setting_slider_pane_t

0xead7,	// (0x00045bd8) slider_set_pane

0x84ca,	// (0x0003f5cb) bg_set_opt_pane_cp2

0xb2c6,	// (0x000423c7) setting_slider_graphic_pane_g1

0xeaed,	// (0x00045bee) setting_slider_graphic_pane_t1

0xeafd,	// (0x00045bfe) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0004666c) setting_slider_graphic_pane_t

0xeb0d,	// (0x00045c0e) slider_set_pane_cp

0x84ca,	// (0x0003f5cb) input_focus_pane_cp1

0x38f1,	// (0x0003a9f2) list_set_text_pane

0x84c0,	// (0x0003f5c1) setting_text_pane_g1

0x84ca,	// (0x0003f5cb) input_focus_pane_cp2

0x84c0,	// (0x0003f5c1) setting_code_pane_g1

0xb2cf,	// (0x000423d0) setting_code_pane_t1

0xce78,	// (0x00043f79) set_text_pane_t1_ParamLimits

0xce78,	// (0x00043f79) set_text_pane_t1

0xb928,	// (0x00042a29) set_opt_bg_pane_g1

0xb930,	// (0x00042a31) set_opt_bg_pane_g2

0x38c9,	// (0x0003a9ca) set_opt_bg_pane_g3

0xb940,	// (0x00042a41) set_opt_bg_pane_g4

0xb948,	// (0x00042a49) set_opt_bg_pane_g5

0xb950,	// (0x00042a51) set_opt_bg_pane_g6

0x38d3,	// (0x0003a9d4) set_opt_bg_pane_g7

0x38dd,	// (0x0003a9de) set_opt_bg_pane_g8

0x38e7,	// (0x0003a9e8) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x00046a75) set_opt_bg_pane_g

0x38bc,	// (0x0003a9bd) slider_set_pane_g1

0x03ec,	// (0x000374ed) slider_set_pane_g2

0x0006,

0xf965,	// (0x00046a66) slider_set_pane_g

0x034c,	// (0x0003744d) volume_set_pane_g1

0x0356,	// (0x00037457) volume_set_pane_g2

0x0360,	// (0x00037461) volume_set_pane_g3

0x036a,	// (0x0003746b) volume_set_pane_g4

0x0374,	// (0x00037475) volume_set_pane_g5

0x037e,	// (0x0003747f) volume_set_pane_g6

0x0388,	// (0x00037489) volume_set_pane_g7

0x0392,	// (0x00037493) volume_set_pane_g8

0x039c,	// (0x0003749d) volume_set_pane_g9

0x03a6,	// (0x000374a7) volume_set_pane_g10

0x0009,

0xf93d,	// (0x00046a3e) volume_set_pane_g

0x9239,	// (0x0004033a) indicator_pane_ParamLimits

0x9239,	// (0x0004033a) indicator_pane

0x9265,	// (0x00040366) main_idle_pane_g2_ParamLimits

0x9265,	// (0x00040366) main_idle_pane_g2

0x929d,	// (0x0004039e) main_pane_idle_g1_ParamLimits

0x929d,	// (0x0004039e) main_pane_idle_g1

0xb2dd,	// (0x000423de) popup_clock_digital_analogue_window_ParamLimits

0xb2dd,	// (0x000423de) popup_clock_digital_analogue_window

0x92cb,	// (0x000403cc) soft_indicator_pane_ParamLimits

0x92cb,	// (0x000403cc) soft_indicator_pane

0x92e7,	// (0x000403e8) wallpaper_pane_ParamLimits

0x92e7,	// (0x000403e8) wallpaper_pane

0x84c0,	// (0x0003f5c1) wallpaper_pane_g1

0x92f9,	// (0x000403fa) indicator_pane_g1_ParamLimits

0x92f9,	// (0x000403fa) indicator_pane_g1

0x3d18,	// (0x0003ae19) navi_navi_icon_text_pane_srt_g1

0xb30b,	// (0x0004240c) soft_indicator_pane_t1

0xb325,	// (0x00042426) aid_ps_area_pane

0x9312,	// (0x00040413) aid_ps_clock_pane

0xb336,	// (0x00042437) aid_ps_indicator_pane

0xb342,	// (0x00042443) indicator_ps_pane_ParamLimits

0xb342,	// (0x00042443) indicator_ps_pane

0xb351,	// (0x00042452) power_save_pane_g1_ParamLimits

0xb351,	// (0x00042452) power_save_pane_g1

0xb35d,	// (0x0004245e) power_save_pane_g2_ParamLimits

0xb35d,	// (0x0004245e) power_save_pane_g2

0xe848,	// (0x00045949) aid_navinavi_width_pane

0xb325,	// (0x00042426) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00046671) power_save_pane_g_ParamLimits

0xf570,	// (0x00046671) power_save_pane_g

0xb36b,	// (0x0004246c) power_save_pane_t1_ParamLimits

0xb36b,	// (0x0004246c) power_save_pane_t1

0x9312,	// (0x00040413) aid_ps_clock_pane_ParamLimits

0xb336,	// (0x00042437) aid_ps_indicator_pane_ParamLimits

0xb37d,	// (0x0004247e) power_save_pane_t4_ParamLimits

0xb37d,	// (0x0004247e) power_save_pane_t4

0x0001,

0xf575,	// (0x00046676) power_save_pane_t_ParamLimits

0xf575,	// (0x00046676) power_save_pane_t

0xb3a7,	// (0x000424a8) power_save_t3_ParamLimits

0xb3a7,	// (0x000424a8) power_save_t3

0xb392,	// (0x00042493) power_save_t2_ParamLimits

0xb392,	// (0x00042493) power_save_t2

0xb3bc,	// (0x000424bd) indicator_ps_pane_g1

0x9320,	// (0x00040421) ai_gene_pane_ParamLimits

0x9320,	// (0x00040421) ai_gene_pane

0x9337,	// (0x00040438) ai_links_pane_ParamLimits

0x9337,	// (0x00040438) ai_links_pane

0x934f,	// (0x00040450) indicator_pane_cp1_ParamLimits

0x934f,	// (0x00040450) indicator_pane_cp1

0x935e,	// (0x0004045f) main_pane_idle_g1_cp_ParamLimits

0x935e,	// (0x0004045f) main_pane_idle_g1_cp

0xb3c5,	// (0x000424c6) popup_ai_links_title_window

0x9376,	// (0x00040477) soft_indicator_pane_cp1_ParamLimits

0x9376,	// (0x00040477) soft_indicator_pane_cp1

0x368f,	// (0x0003a790) ai_links_pane_g1

0x3698,	// (0x0003a799) grid_ai_links_pane

0xc215,	// (0x00043316) ai_gene_pane_1

0x367d,	// (0x0003a77e) ai_gene_pane_2

0x3686,	// (0x0003a787) list_highlight_pane_cp4

0xc1f1,	// (0x000432f2) cell_ai_link_pane_ParamLimits

0xc1f1,	// (0x000432f2) cell_ai_link_pane

0x364c,	// (0x0003a74d) cell_ai_link_pane_g1

0xb593,	// (0x00042694) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x00046a19) cell_ai_link_pane_g

0x84ca,	// (0x0003f5cb) grid_highlight_cp2

0x84ca,	// (0x0003f5cb) bg_popup_sub_pane_cp1

0xb3dc,	// (0x000424dd) popup_ai_links_title_window_t1

0x3598,	// (0x0003a699) ai_gene_pane_1_g1_ParamLimits

0x3598,	// (0x0003a699) ai_gene_pane_1_g1

0x35a4,	// (0x0003a6a5) ai_gene_pane_1_g2_ParamLimits

0x35a4,	// (0x0003a6a5) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x00046a0f) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x00046a0f) ai_gene_pane_1_g

0x35b1,	// (0x0003a6b2) ai_gene_pane_1_t1_ParamLimits

0x35b1,	// (0x0003a6b2) ai_gene_pane_1_t1

0x35e5,	// (0x0003a6e6) grid_ai_soft_ind_pane

0x3583,	// (0x0003a684) ai_gene_pane_2_t1_ParamLimits

0x3583,	// (0x0003a684) ai_gene_pane_2_t1

0x938a,	// (0x0004048b) main_pane_empty_t1_ParamLimits

0x938a,	// (0x0004048b) main_pane_empty_t1

0x93a2,	// (0x000404a3) main_pane_empty_t2_ParamLimits

0x93a2,	// (0x000404a3) main_pane_empty_t2

0x93b7,	// (0x000404b8) main_pane_empty_t3_ParamLimits

0x93b7,	// (0x000404b8) main_pane_empty_t3

0x93c9,	// (0x000404ca) main_pane_empty_t4_ParamLimits

0x93c9,	// (0x000404ca) main_pane_empty_t4

0x93db,	// (0x000404dc) main_pane_empty_t5_ParamLimits

0x93db,	// (0x000404dc) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0004667b) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0004667b) main_pane_empty_t

0xb979,	// (0x00042a7a) bg_popup_window_pane_ParamLimits

0xb979,	// (0x00042a7a) bg_popup_window_pane

0x32e5,	// (0x0003a3e6) find_popup_pane_cp2_ParamLimits

0x32e5,	// (0x0003a3e6) find_popup_pane_cp2

0x32f1,	// (0x0003a3f2) heading_pane_ParamLimits

0x32f1,	// (0x0003a3f2) heading_pane

0x84ca,	// (0x0003f5cb) bg_popup_sub_pane

0xc0d4,	// (0x000431d5) bg_popup_window_pane_g1_ParamLimits

0xc0d4,	// (0x000431d5) bg_popup_window_pane_g1

0xc0e3,	// (0x000431e4) bg_popup_window_pane_g2_ParamLimits

0xc0e3,	// (0x000431e4) bg_popup_window_pane_g2

0xc0ef,	// (0x000431f0) bg_popup_window_pane_g3_ParamLimits

0xc0ef,	// (0x000431f0) bg_popup_window_pane_g3

0xc0fb,	// (0x000431fc) bg_popup_window_pane_g4_ParamLimits

0xc0fb,	// (0x000431fc) bg_popup_window_pane_g4

0xc10a,	// (0x0004320b) bg_popup_window_pane_g5_ParamLimits

0xc10a,	// (0x0004320b) bg_popup_window_pane_g5

0xc11a,	// (0x0004321b) bg_popup_window_pane_g6_ParamLimits

0xc11a,	// (0x0004321b) bg_popup_window_pane_g6

0xc126,	// (0x00043227) bg_popup_window_pane_g7_ParamLimits

0xc126,	// (0x00043227) bg_popup_window_pane_g7

0xc135,	// (0x00043236) bg_popup_window_pane_g8_ParamLimits

0xc135,	// (0x00043236) bg_popup_window_pane_g8

0xc144,	// (0x00043245) bg_popup_window_pane_g9_ParamLimits

0xc144,	// (0x00043245) bg_popup_window_pane_g9

0x32cb,	// (0x0003a3cc) bg_popup_window_pane_g10_ParamLimits

0x32cb,	// (0x0003a3cc) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x000469d7) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x000469d7) bg_popup_window_pane_g

0x31f4,	// (0x0003a2f5) bg_popup_heading_pane_ParamLimits

0x31f4,	// (0x0003a2f5) bg_popup_heading_pane

0x04fd,	// (0x000375fe) tabs_4_passive_pane_cp_srt_ParamLimits

0x04fd,	// (0x000375fe) tabs_4_passive_pane_cp_srt

0x050f,	// (0x00037610) tabs_4_passive_pane_srt_ParamLimits

0x3208,	// (0x0003a309) heading_pane_g2

0x050f,	// (0x00037610) tabs_4_passive_pane_srt

0x25a1,	// (0x000396a2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x25a1,	// (0x000396a2) bg_passive_tab_pane_cp3_srt

0x3210,	// (0x0003a311) heading_pane_t1_ParamLimits

0x3210,	// (0x0003a311) heading_pane_t1

0x3227,	// (0x0003a328) heading_pane_t2_ParamLimits

0x3227,	// (0x0003a328) heading_pane_t2

0x0001,

0xf8d1,	// (0x000469d2) heading_pane_t_ParamLimits

0xf8d1,	// (0x000469d2) heading_pane_t

0x2d1f,	// (0x00039e20) bg_popup_heading_pane_g1

0x2dce,	// (0x00039ecf) bg_popup_heading_pane_g2

0x2dd8,	// (0x00039ed9) bg_popup_heading_pane_g3

0x2de2,	// (0x00039ee3) bg_popup_heading_pane_g4

0x2dec,	// (0x00039eed) bg_popup_heading_pane_g5

0x2df6,	// (0x00039ef7) bg_popup_heading_pane_g6

0x2dfe,	// (0x00039eff) bg_popup_heading_pane_g7

0x2e06,	// (0x00039f07) bg_popup_heading_pane_g8

0x2e10,	// (0x00039f11) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0004698e) bg_popup_heading_pane_g

0x252d,	// (0x0003962e) bg_popup_sub_pane_g1

0x253d,	// (0x0003963e) bg_popup_sub_pane_g2

0x2535,	// (0x00039636) bg_popup_sub_pane_g3

0x254d,	// (0x0003964e) bg_popup_sub_pane_g4

0x2545,	// (0x00039646) bg_popup_sub_pane_g5

0x2555,	// (0x00039656) bg_popup_sub_pane_g6

0x255d,	// (0x0003965e) bg_popup_sub_pane_g7

0x256d,	// (0x0003966e) bg_popup_sub_pane_g8

0x2565,	// (0x00039666) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x00046968) bg_popup_sub_pane_g

0x8524,	// (0x0003f625) bg_popup_window_pane_cp5_ParamLimits

0x8524,	// (0x0003f625) bg_popup_window_pane_cp5

0xb3f9,	// (0x000424fa) popup_note_window_g1_ParamLimits

0xb3f9,	// (0x000424fa) popup_note_window_g1

0xb405,	// (0x00042506) popup_note_window_t1_ParamLimits

0xb405,	// (0x00042506) popup_note_window_t1

0xb41b,	// (0x0004251c) popup_note_window_t2_ParamLimits

0xb41b,	// (0x0004251c) popup_note_window_t2

0xb431,	// (0x00042532) popup_note_window_t3_ParamLimits

0xb431,	// (0x00042532) popup_note_window_t3

0xb447,	// (0x00042548) popup_note_window_t4_ParamLimits

0xb447,	// (0x00042548) popup_note_window_t4

0xb46f,	// (0x00042570) popup_note_window_t5_ParamLimits

0xb46f,	// (0x00042570) popup_note_window_t5

0x0004,

0xf585,	// (0x00046686) popup_note_window_t_ParamLimits

0xf585,	// (0x00046686) popup_note_window_t

0xb493,	// (0x00042594) bg_popup_window_pane_cp6_ParamLimits

0xb493,	// (0x00042594) bg_popup_window_pane_cp6

0x2c9b,	// (0x00039d9c) popup_note_image_window_g1_ParamLimits

0x2c9b,	// (0x00039d9c) popup_note_image_window_g1

0x2ca7,	// (0x00039da8) popup_note_image_window_g2_ParamLimits

0x2ca7,	// (0x00039da8) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0004695c) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0004695c) popup_note_image_window_g

0x2cc0,	// (0x00039dc1) popup_note_image_window_t1_ParamLimits

0x2cc0,	// (0x00039dc1) popup_note_image_window_t1

0x2cd9,	// (0x00039dda) popup_note_image_window_t2_ParamLimits

0x2cd9,	// (0x00039dda) popup_note_image_window_t2

0x2cf2,	// (0x00039df3) popup_note_image_window_t3_ParamLimits

0x2cf2,	// (0x00039df3) popup_note_image_window_t3

0x0002,

0xf860,	// (0x00046961) popup_note_image_window_t_ParamLimits

0xf860,	// (0x00046961) popup_note_image_window_t

0x2b5b,	// (0x00039c5c) bg_popup_window_pane_cp7_ParamLimits

0x2b5b,	// (0x00039c5c) bg_popup_window_pane_cp7

0x2b8b,	// (0x00039c8c) popup_note_wait_window_g1_ParamLimits

0x2b8b,	// (0x00039c8c) popup_note_wait_window_g1

0x2b97,	// (0x00039c98) popup_note_wait_window_g2_ParamLimits

0x2b97,	// (0x00039c98) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0004694a) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0004694a) popup_note_wait_window_g

0x2baf,	// (0x00039cb0) popup_note_wait_window_t1_ParamLimits

0x2baf,	// (0x00039cb0) popup_note_wait_window_t1

0x2bd6,	// (0x00039cd7) popup_note_wait_window_t2_ParamLimits

0x2bd6,	// (0x00039cd7) popup_note_wait_window_t2

0x2bf4,	// (0x00039cf5) popup_note_wait_window_t3_ParamLimits

0x2bf4,	// (0x00039cf5) popup_note_wait_window_t3

0x2c07,	// (0x00039d08) popup_note_wait_window_t4_ParamLimits

0x2c07,	// (0x00039d08) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x00046951) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x00046951) popup_note_wait_window_t

0x2c2c,	// (0x00039d2d) wait_bar_pane_ParamLimits

0x2c2c,	// (0x00039d2d) wait_bar_pane

0x84ca,	// (0x0003f5cb) wait_anim_pane

0x84ca,	// (0x0003f5cb) wait_border_pane

0x84c0,	// (0x0003f5c1) wait_anim_pane_g1

0x84c0,	// (0x0003f5c1) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0004680a) wait_anim_pane_g

0x2aff,	// (0x00039c00) wait_border_pane_g1

0x2b0a,	// (0x00039c0b) wait_border_pane_g2

0x2b13,	// (0x00039c14) wait_border_pane_g3

0x0002,

0xf842,	// (0x00046943) wait_border_pane_g

0x2969,	// (0x00039a6a) bg_popup_window_pane_cp16_ParamLimits

0x2969,	// (0x00039a6a) bg_popup_window_pane_cp16

0x2a69,	// (0x00039b6a) indicator_popup_pane_cp4_ParamLimits

0x2a69,	// (0x00039b6a) indicator_popup_pane_cp4

0x2a7d,	// (0x00039b7e) popup_query_data_window_t1_ParamLimits

0x2a7d,	// (0x00039b7e) popup_query_data_window_t1

0x2a8f,	// (0x00039b90) popup_query_data_window_t2_ParamLimits

0x2a8f,	// (0x00039b90) popup_query_data_window_t2

0x2aa8,	// (0x00039ba9) popup_query_data_window_t3_ParamLimits

0x2aa8,	// (0x00039ba9) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0004693c) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0004693c) popup_query_data_window_t

0x2ac2,	// (0x00039bc3) query_popup_data_pane_ParamLimits

0x2ac2,	// (0x00039bc3) query_popup_data_pane

0x2ad6,	// (0x00039bd7) query_popup_data_pane_cp1_ParamLimits

0x2ad6,	// (0x00039bd7) query_popup_data_pane_cp1

0x2969,	// (0x00039a6a) bg_popup_window_pane_cp10_ParamLimits

0x2969,	// (0x00039a6a) bg_popup_window_pane_cp10

0x299b,	// (0x00039a9c) indicator_popup_pane_ParamLimits

0x299b,	// (0x00039a9c) indicator_popup_pane

0x29bd,	// (0x00039abe) popup_query_code_window_t1_ParamLimits

0x29bd,	// (0x00039abe) popup_query_code_window_t1

0x29d7,	// (0x00039ad8) popup_query_code_window_t2_ParamLimits

0x29d7,	// (0x00039ad8) popup_query_code_window_t2

0x2a20,	// (0x00039b21) popup_query_code_window_t3_ParamLimits

0x2a20,	// (0x00039b21) popup_query_code_window_t3

0x0002,

0xf834,	// (0x00046935) popup_query_code_window_t_ParamLimits

0xf834,	// (0x00046935) popup_query_code_window_t

0x2a4f,	// (0x00039b50) query_popup_pane_ParamLimits

0x2a4f,	// (0x00039b50) query_popup_pane

0xb493,	// (0x00042594) bg_popup_window_pane_cp15_ParamLimits

0xb493,	// (0x00042594) bg_popup_window_pane_cp15

0xb4b3,	// (0x000425b4) indicator_popup_pane_cp1_ParamLimits

0xb4b3,	// (0x000425b4) indicator_popup_pane_cp1

0xb4c6,	// (0x000425c7) indicator_popup_pane_cp2_ParamLimits

0xb4c6,	// (0x000425c7) indicator_popup_pane_cp2

0xb4e1,	// (0x000425e2) popup_query_data_code_window_g1_ParamLimits

0xb4e1,	// (0x000425e2) popup_query_data_code_window_g1

0xb4f4,	// (0x000425f5) popup_query_data_code_window_t1_ParamLimits

0xb4f4,	// (0x000425f5) popup_query_data_code_window_t1

0xb506,	// (0x00042607) popup_query_data_code_window_t2_ParamLimits

0xb506,	// (0x00042607) popup_query_data_code_window_t2

0xb518,	// (0x00042619) popup_query_data_code_window_t3_ParamLimits

0xb518,	// (0x00042619) popup_query_data_code_window_t3

0xb52e,	// (0x0004262f) popup_query_data_code_window_t4_ParamLimits

0xb52e,	// (0x0004262f) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00046691) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00046691) popup_query_data_code_window_t

0x00c9,	// (0x000371ca) list_single_midp_graphic_pane_g3

0xb548,	// (0x00042649) query_popup_data_pane_cp2_ParamLimits

0xb55b,	// (0x0004265c) query_popup_pane_cp2_ParamLimits

0xb55b,	// (0x0004265c) query_popup_pane_cp2

0x84ca,	// (0x0003f5cb) bg_popup_window_pane_cp11

0x2961,	// (0x00039a62) heading_pane_cp5

0xb5f1,	// (0x000426f2) listscroll_popup_info_pane

0x84ca,	// (0x0003f5cb) input_focus_pane_cp3

0xb576,	// (0x00042677) query_popup_pane_t1

0xb584,	// (0x00042685) list_popup_info_pane_ParamLimits

0xb584,	// (0x00042685) list_popup_info_pane

0xb593,	// (0x00042694) listscroll_popup_info_pane_g1

0xb59b,	// (0x0004269c) scroll_pane_cp7

0xb5a5,	// (0x000426a6) popup_info_list_pane_t1_ParamLimits

0xb5a5,	// (0x000426a6) popup_info_list_pane_t1

0xb5bf,	// (0x000426c0) popup_info_list_pane_t2_ParamLimits

0xb5bf,	// (0x000426c0) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0004669a) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0004669a) popup_info_list_pane_t

0x84ca,	// (0x0003f5cb) bg_popup_window_pane_cp12

0x3d32,	// (0x0003ae33) find_popup_pane

0xb2b8,	// (0x000423b9) bg_popup_window_pane_cp3

0xb5d9,	// (0x000426da) heading_pane_cp3

0xb5e5,	// (0x000426e6) listscroll_popup_graphic_pane

0x84ca,	// (0x0003f5cb) bg_popup_window_pane_cp4

0x943d,	// (0x0004053e) heading_pane_cp4

0xb5f1,	// (0x000426f2) listscroll_popup_colour_pane

0x9447,	// (0x00040548) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9447,	// (0x00040548) cell_large_graphic_colour_none_popup_pane

0x945b,	// (0x0004055c) grid_large_graphic_colour_popup_pane_ParamLimits

0x945b,	// (0x0004055c) grid_large_graphic_colour_popup_pane

0x947f,	// (0x00040580) listscroll_popup_colour_pane_g1_ParamLimits

0x947f,	// (0x00040580) listscroll_popup_colour_pane_g1

0x9496,	// (0x00040597) listscroll_popup_colour_pane_g2_ParamLimits

0x9496,	// (0x00040597) listscroll_popup_colour_pane_g2

0x94ad,	// (0x000405ae) listscroll_popup_colour_pane_g3_ParamLimits

0x94ad,	// (0x000405ae) listscroll_popup_colour_pane_g3

0x94bd,	// (0x000405be) listscroll_popup_colour_pane_g4_ParamLimits

0x94bd,	// (0x000405be) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0004669f) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0004669f) listscroll_popup_colour_pane_g

0xb5f9,	// (0x000426fa) scroll_pane_cp6_ParamLimits

0xb5f9,	// (0x000426fa) scroll_pane_cp6

0x94cd,	// (0x000405ce) cell_large_graphic_colour_popup_pane_ParamLimits

0x94cd,	// (0x000405ce) cell_large_graphic_colour_popup_pane

0xb60b,	// (0x0004270c) cell_large_graphic_colour_none_popup_pane_t1

0x84ca,	// (0x0003f5cb) grid_highlight_pane_cp5

0xb61a,	// (0x0004271b) cell_large_graphic_colour_popup_pane_g1

0xb622,	// (0x00042723) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000466a8) cell_large_graphic_colour_popup_pane_g

0xb62a,	// (0x0004272b) cell_large_graphic_colour_popup_pane_g2_copy1

0xb633,	// (0x00042734) grid_highlight_pane_cp4

0xb63b,	// (0x0004273c) bg_popup_window_pane_cp8_ParamLimits

0xb63b,	// (0x0004273c) bg_popup_window_pane_cp8

0xb656,	// (0x00042757) popup_snote_single_text_window_g1_ParamLimits

0xb656,	// (0x00042757) popup_snote_single_text_window_g1

0xb668,	// (0x00042769) popup_snote_single_text_window_t1_ParamLimits

0xb668,	// (0x00042769) popup_snote_single_text_window_t1

0xb67b,	// (0x0004277c) popup_snote_single_text_window_t2_ParamLimits

0xb67b,	// (0x0004277c) popup_snote_single_text_window_t2

0xb68e,	// (0x0004278f) popup_snote_single_text_window_t3_ParamLimits

0xb68e,	// (0x0004278f) popup_snote_single_text_window_t3

0xb6c7,	// (0x000427c8) popup_snote_single_text_window_t4_ParamLimits

0xb6c7,	// (0x000427c8) popup_snote_single_text_window_t4

0xb6fb,	// (0x000427fc) popup_snote_single_text_window_t5_ParamLimits

0xb6fb,	// (0x000427fc) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000466ad) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000466ad) popup_snote_single_text_window_t

0xb72a,	// (0x0004282b) bg_popup_window_pane_cp9_ParamLimits

0xb72a,	// (0x0004282b) bg_popup_window_pane_cp9

0xb656,	// (0x00042757) popup_snote_single_graphic_window_g1_ParamLimits

0xb656,	// (0x00042757) popup_snote_single_graphic_window_g1

0xb738,	// (0x00042839) popup_snote_single_graphic_window_g2_ParamLimits

0xb738,	// (0x00042839) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000466b8) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000466b8) popup_snote_single_graphic_window_g

0xb744,	// (0x00042845) popup_snote_single_graphic_window_t1_ParamLimits

0xb744,	// (0x00042845) popup_snote_single_graphic_window_t1

0xb757,	// (0x00042858) popup_snote_single_graphic_window_t2_ParamLimits

0xb757,	// (0x00042858) popup_snote_single_graphic_window_t2

0xb76a,	// (0x0004286b) popup_snote_single_graphic_window_t3_ParamLimits

0xb76a,	// (0x0004286b) popup_snote_single_graphic_window_t3

0xb7a3,	// (0x000428a4) popup_snote_single_graphic_window_t4_ParamLimits

0xb7a3,	// (0x000428a4) popup_snote_single_graphic_window_t4

0xb7d7,	// (0x000428d8) popup_snote_single_graphic_window_t5_ParamLimits

0xb7d7,	// (0x000428d8) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000466bd) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000466bd) popup_snote_single_graphic_window_t

0x3c70,	// (0x0003ad71) grid_graphic_popup_pane_ParamLimits

0x3c70,	// (0x0003ad71) grid_graphic_popup_pane

0x3c9e,	// (0x0003ad9f) listscroll_popup_graphic_pane_g1_ParamLimits

0x3c9e,	// (0x0003ad9f) listscroll_popup_graphic_pane_g1

0xc543,	// (0x00043644) listscroll_popup_graphic_pane_g2_ParamLimits

0xc543,	// (0x00043644) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x00046ab2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x00046ab2) listscroll_popup_graphic_pane_g

0x3cc6,	// (0x0003adc7) scroll_pane_cp5

0xc502,	// (0x00043603) cell_graphic_popup_pane_ParamLimits

0xc502,	// (0x00043603) cell_graphic_popup_pane

0x3bf9,	// (0x0003acfa) cell_graphic_popup_pane_g1

0x3c01,	// (0x0003ad02) cell_graphic_popup_pane_g2

0xb62a,	// (0x0004272b) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x00046aab) cell_graphic_popup_pane_g

0x3c0a,	// (0x0003ad0b) cell_graphic_popup_pane_t2

0xb633,	// (0x00042734) grid_highlight_pane_cp3

0xb818,	// (0x00042919) list_gen_pane_ParamLimits

0xb818,	// (0x00042919) list_gen_pane

0xb840,	// (0x00042941) scroll_pane

0xc4b9,	// (0x000435ba) bg_list_pane_g1_ParamLimits

0xc4b9,	// (0x000435ba) bg_list_pane_g1

0x3b6e,	// (0x0003ac6f) bg_list_pane_g2_ParamLimits

0x3b6e,	// (0x0003ac6f) bg_list_pane_g2

0x3b83,	// (0x0003ac84) bg_list_pane_g3_ParamLimits

0x3b83,	// (0x0003ac84) bg_list_pane_g3

0x3b97,	// (0x0003ac98) bg_list_pane_g4_ParamLimits

0x3b97,	// (0x0003ac98) bg_list_pane_g4

0xc4d6,	// (0x000435d7) bg_list_pane_g5_ParamLimits

0xc4d6,	// (0x000435d7) bg_list_pane_g5

0x0004,

0xf99f,	// (0x00046aa0) bg_list_pane_g_ParamLimits

0xf99f,	// (0x00046aa0) bg_list_pane_g

0xc468,	// (0x00043569) list_double2_graphic_large_graphic_pane_ParamLimits

0xc468,	// (0x00043569) list_double2_graphic_large_graphic_pane

0xc468,	// (0x00043569) list_double2_graphic_pane_ParamLimits

0xc468,	// (0x00043569) list_double2_graphic_pane

0xc468,	// (0x00043569) list_double2_large_graphic_pane_ParamLimits

0xc468,	// (0x00043569) list_double2_large_graphic_pane

0xc47c,	// (0x0004357d) list_double2_pane_ParamLimits

0xc47c,	// (0x0004357d) list_double2_pane

0xc468,	// (0x00043569) list_double_graphic_heading_pane_ParamLimits

0xc468,	// (0x00043569) list_double_graphic_heading_pane

0xc468,	// (0x00043569) list_double_graphic_pane_ParamLimits

0xc468,	// (0x00043569) list_double_graphic_pane

0xc468,	// (0x00043569) list_double_heading_pane_ParamLimits

0xc468,	// (0x00043569) list_double_heading_pane

0xc468,	// (0x00043569) list_double_large_graphic_pane_ParamLimits

0xc468,	// (0x00043569) list_double_large_graphic_pane

0xc468,	// (0x00043569) list_double_number_pane_ParamLimits

0xc468,	// (0x00043569) list_double_number_pane

0xc468,	// (0x00043569) list_double_pane_ParamLimits

0xc468,	// (0x00043569) list_double_pane

0xc468,	// (0x00043569) list_double_time_pane_ParamLimits

0xc468,	// (0x00043569) list_double_time_pane

0xc468,	// (0x00043569) list_setting_number_pane_ParamLimits

0xc468,	// (0x00043569) list_setting_number_pane

0xc468,	// (0x00043569) list_setting_pane_ParamLimits

0xc468,	// (0x00043569) list_setting_pane

0xab6b,	// (0x00041c6c) list_single_2graphic_pane_ParamLimits

0xab6b,	// (0x00041c6c) list_single_2graphic_pane

0xab6b,	// (0x00041c6c) list_single_graphic_heading_pane_ParamLimits

0xab6b,	// (0x00041c6c) list_single_graphic_heading_pane

0xab6b,	// (0x00041c6c) list_single_graphic_pane_ParamLimits

0xab6b,	// (0x00041c6c) list_single_graphic_pane

0xab6b,	// (0x00041c6c) list_single_heading_pane_ParamLimits

0xab6b,	// (0x00041c6c) list_single_heading_pane

0xc47c,	// (0x0004357d) list_single_large_graphic_pane_ParamLimits

0xc47c,	// (0x0004357d) list_single_large_graphic_pane

0xab6b,	// (0x00041c6c) list_single_number_heading_pane_ParamLimits

0xab6b,	// (0x00041c6c) list_single_number_heading_pane

0xab6b,	// (0x00041c6c) list_single_number_pane_ParamLimits

0xab6b,	// (0x00041c6c) list_single_number_pane

0xab6b,	// (0x00041c6c) list_single_pane_ParamLimits

0xab6b,	// (0x00041c6c) list_single_pane

0x84ca,	// (0x0003f5cb) list_highlight_pane_cp1

0xce93,	// (0x00043f94) list_single_pane_g1_ParamLimits

0xce93,	// (0x00043f94) list_single_pane_g1

0xce9f,	// (0x00043fa0) list_single_pane_g2_ParamLimits

0xce9f,	// (0x00043fa0) list_single_pane_g2

0x0001,

0xf5ce,	// (0x000466cf) list_single_pane_g_ParamLimits

0xf5ce,	// (0x000466cf) list_single_pane_g

0xd2d0,	// (0x000443d1) list_single_pane_t1_ParamLimits

0xd2d0,	// (0x000443d1) list_single_pane_t1

0xce93,	// (0x00043f94) list_single_number_pane_g1_ParamLimits

0xce93,	// (0x00043f94) list_single_number_pane_g1

0xce9f,	// (0x00043fa0) list_single_number_pane_g2_ParamLimits

0xce9f,	// (0x00043fa0) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x000466cf) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x000466cf) list_single_number_pane_g

0xd1f9,	// (0x000442fa) list_single_number_pane_t1_ParamLimits

0xd1f9,	// (0x000442fa) list_single_number_pane_t1

0xab2d,	// (0x00041c2e) list_single_number_pane_t2_ParamLimits

0xab2d,	// (0x00041c2e) list_single_number_pane_t2

0x0001,

0xf960,	// (0x00046a61) list_single_number_pane_t_ParamLimits

0xf960,	// (0x00046a61) list_single_number_pane_t

0x94f8,	// (0x000405f9) list_single_graphic_pane_g1_ParamLimits

0x94f8,	// (0x000405f9) list_single_graphic_pane_g1

0xce93,	// (0x00043f94) list_single_graphic_pane_g2_ParamLimits

0xce93,	// (0x00043f94) list_single_graphic_pane_g2

0xce9f,	// (0x00043fa0) list_single_graphic_pane_g3_ParamLimits

0xce9f,	// (0x00043fa0) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000466c8) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000466c8) list_single_graphic_pane_g

0x9504,	// (0x00040605) list_single_graphic_pane_t1_ParamLimits

0x9504,	// (0x00040605) list_single_graphic_pane_t1

0xce93,	// (0x00043f94) list_single_heading_pane_g1_ParamLimits

0xce93,	// (0x00043f94) list_single_heading_pane_g1

0xce9f,	// (0x00043fa0) list_single_heading_pane_g2_ParamLimits

0xce9f,	// (0x00043fa0) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000466cf) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000466cf) list_single_heading_pane_g

0x951a,	// (0x0004061b) list_single_heading_pane_t1_ParamLimits

0x951a,	// (0x0004061b) list_single_heading_pane_t1

0x9530,	// (0x00040631) list_single_heading_pane_t2_ParamLimits

0x9530,	// (0x00040631) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000466d4) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000466d4) list_single_heading_pane_t

0xce93,	// (0x00043f94) list_single_number_heading_pane_g1_ParamLimits

0xce93,	// (0x00043f94) list_single_number_heading_pane_g1

0xce9f,	// (0x00043fa0) list_single_number_heading_pane_g2_ParamLimits

0xce9f,	// (0x00043fa0) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x000466cf) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x000466cf) list_single_number_heading_pane_g

0x951a,	// (0x0004061b) list_single_number_heading_pane_t1_ParamLimits

0x951a,	// (0x0004061b) list_single_number_heading_pane_t1

0x9542,	// (0x00040643) list_single_number_heading_pane_t2_ParamLimits

0x9542,	// (0x00040643) list_single_number_heading_pane_t2

0xceab,	// (0x00043fac) list_single_number_heading_pane_t3_ParamLimits

0xceab,	// (0x00043fac) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x000466d9) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x000466d9) list_single_number_heading_pane_t

0xcebd,	// (0x00043fbe) list_single_graphic_heading_pane_g1_ParamLimits

0xcebd,	// (0x00043fbe) list_single_graphic_heading_pane_g1

0x9554,	// (0x00040655) list_single_graphic_heading_pane_g4_ParamLimits

0x9554,	// (0x00040655) list_single_graphic_heading_pane_g4

0xce9f,	// (0x00043fa0) list_single_graphic_heading_pane_g5_ParamLimits

0xce9f,	// (0x00043fa0) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x000466e0) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x000466e0) list_single_graphic_heading_pane_g

0x951a,	// (0x0004061b) list_single_graphic_heading_pane_t1_ParamLimits

0x951a,	// (0x0004061b) list_single_graphic_heading_pane_t1

0x9565,	// (0x00040666) list_single_graphic_heading_pane_t2_ParamLimits

0x9565,	// (0x00040666) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x000466e7) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x000466e7) list_single_graphic_heading_pane_t

0xcec9,	// (0x00043fca) list_single_large_graphic_pane_g1_ParamLimits

0xcec9,	// (0x00043fca) list_single_large_graphic_pane_g1

0xced5,	// (0x00043fd6) list_single_large_graphic_pane_g2_ParamLimits

0xced5,	// (0x00043fd6) list_single_large_graphic_pane_g2

0xcee1,	// (0x00043fe2) list_single_large_graphic_pane_g3_ParamLimits

0xcee1,	// (0x00043fe2) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x000466ec) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x000466ec) list_single_large_graphic_pane_g

0x2b0a,	// (0x00039c0b) wait_border_pane_g2_copy1

0x9577,	// (0x00040678) list_single_large_graphic_pane_g4_cp2

0xceed,	// (0x00043fee) list_single_large_graphic_pane_t1_ParamLimits

0xceed,	// (0x00043fee) list_single_large_graphic_pane_t1

0x957f,	// (0x00040680) list_double_pane_g1_ParamLimits

0x957f,	// (0x00040680) list_double_pane_g1

0x958b,	// (0x0004068c) list_double_pane_g2_ParamLimits

0x958b,	// (0x0004068c) list_double_pane_g2

0x0001,

0xf5f2,	// (0x000466f3) list_double_pane_g_ParamLimits

0xf5f2,	// (0x000466f3) list_double_pane_g

0x9597,	// (0x00040698) list_double_pane_t1_ParamLimits

0x9597,	// (0x00040698) list_double_pane_t1

0x95ad,	// (0x000406ae) list_double_pane_t2_ParamLimits

0x95ad,	// (0x000406ae) list_double_pane_t2

0x0001,

0xf5f7,	// (0x000466f8) list_double_pane_t_ParamLimits

0xf5f7,	// (0x000466f8) list_double_pane_t

0x95bf,	// (0x000406c0) list_double2_pane_g1_ParamLimits

0x95bf,	// (0x000406c0) list_double2_pane_g1

0x95d0,	// (0x000406d1) list_double2_pane_g2_ParamLimits

0x95d0,	// (0x000406d1) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x000466fd) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x000466fd) list_double2_pane_g

0x95dc,	// (0x000406dd) list_double2_pane_t1_ParamLimits

0x95dc,	// (0x000406dd) list_double2_pane_t1

0x95f2,	// (0x000406f3) list_double2_pane_t2_ParamLimits

0x95f2,	// (0x000406f3) list_double2_pane_t2

0x0001,

0xf601,	// (0x00046702) list_double2_pane_t_ParamLimits

0xf601,	// (0x00046702) list_double2_pane_t

0x957f,	// (0x00040680) list_double_number_pane_g1_ParamLimits

0x957f,	// (0x00040680) list_double_number_pane_g1

0x958b,	// (0x0004068c) list_double_number_pane_g2_ParamLimits

0x958b,	// (0x0004068c) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x000466f3) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x000466f3) list_double_number_pane_g

0x9604,	// (0x00040705) list_double_number_pane_t1_ParamLimits

0x9604,	// (0x00040705) list_double_number_pane_t1

0x9616,	// (0x00040717) list_double_number_pane_t2_ParamLimits

0x9616,	// (0x00040717) list_double_number_pane_t2

0x962c,	// (0x0004072d) list_double_number_pane_t3_ParamLimits

0x962c,	// (0x0004072d) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00046707) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00046707) list_double_number_pane_t

0x963e,	// (0x0004073f) list_double_graphic_pane_g1_ParamLimits

0x963e,	// (0x0004073f) list_double_graphic_pane_g1

0x964a,	// (0x0004074b) list_double_graphic_pane_g2_ParamLimits

0x964a,	// (0x0004074b) list_double_graphic_pane_g2

0x9659,	// (0x0004075a) list_double_graphic_pane_g3_ParamLimits

0x9659,	// (0x0004075a) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0004670e) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0004670e) list_double_graphic_pane_g

0x9671,	// (0x00040772) list_double_graphic_pane_t1_ParamLimits

0x9671,	// (0x00040772) list_double_graphic_pane_t1

0x9687,	// (0x00040788) list_double_graphic_pane_t2_ParamLimits

0x9687,	// (0x00040788) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00046717) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00046717) list_double_graphic_pane_t

0x9699,	// (0x0004079a) list_double2_graphic_pane_g1_ParamLimits

0x9699,	// (0x0004079a) list_double2_graphic_pane_g1

0x96a5,	// (0x000407a6) list_double2_graphic_pane_g2_ParamLimits

0x96a5,	// (0x000407a6) list_double2_graphic_pane_g2

0x96b1,	// (0x000407b2) list_double2_graphic_pane_g3_ParamLimits

0x96b1,	// (0x000407b2) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0004671c) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0004671c) list_double2_graphic_pane_g

0x96bd,	// (0x000407be) list_double2_graphic_pane_t1_ParamLimits

0x96bd,	// (0x000407be) list_double2_graphic_pane_t1

0x96d3,	// (0x000407d4) list_double2_graphic_pane_t2_ParamLimits

0x96d3,	// (0x000407d4) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00046723) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00046723) list_double2_graphic_pane_t

0x96e5,	// (0x000407e6) list_double_large_graphic_pane_g1_ParamLimits

0x96e5,	// (0x000407e6) list_double_large_graphic_pane_g1

0x9710,	// (0x00040811) list_double_large_graphic_pane_g2_ParamLimits

0x9710,	// (0x00040811) list_double_large_graphic_pane_g2

0x958b,	// (0x0004068c) list_double_large_graphic_pane_g3_ParamLimits

0x958b,	// (0x0004068c) list_double_large_graphic_pane_g3

0x9721,	// (0x00040822) list_double_large_graphic_pane_g4_ParamLimits

0x9721,	// (0x00040822) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00046728) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00046728) list_double_large_graphic_pane_g

0x9734,	// (0x00040835) list_double_large_graphic_pane_t1_ParamLimits

0x9734,	// (0x00040835) list_double_large_graphic_pane_t1

0x974d,	// (0x0004084e) list_double_large_graphic_pane_t2_ParamLimits

0x974d,	// (0x0004084e) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00046733) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00046733) list_double_large_graphic_pane_t

0x975f,	// (0x00040860) list_double2_large_graphic_pane_g1_ParamLimits

0x975f,	// (0x00040860) list_double2_large_graphic_pane_g1

0x976b,	// (0x0004086c) list_double2_large_graphic_pane_g2_ParamLimits

0x976b,	// (0x0004086c) list_double2_large_graphic_pane_g2

0x977c,	// (0x0004087d) list_double2_large_graphic_pane_g3_ParamLimits

0x977c,	// (0x0004087d) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00046738) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00046738) list_double2_large_graphic_pane_g

0x9788,	// (0x00040889) list_double2_large_graphic_pane_t1_ParamLimits

0x9788,	// (0x00040889) list_double2_large_graphic_pane_t1

0x979e,	// (0x0004089f) list_double2_large_graphic_pane_t2_ParamLimits

0x979e,	// (0x0004089f) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0004673f) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0004673f) list_double2_large_graphic_pane_t

0x97b0,	// (0x000408b1) list_double_heading_pane_g1_ParamLimits

0x97b0,	// (0x000408b1) list_double_heading_pane_g1

0x97c1,	// (0x000408c2) list_double_heading_pane_g2_ParamLimits

0x97c1,	// (0x000408c2) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00046744) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00046744) list_double_heading_pane_g

0x97cd,	// (0x000408ce) list_double_heading_pane_t1_ParamLimits

0x97cd,	// (0x000408ce) list_double_heading_pane_t1

0x97e3,	// (0x000408e4) list_double_heading_pane_t2_ParamLimits

0x97e3,	// (0x000408e4) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00046749) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00046749) list_double_heading_pane_t

0x97f5,	// (0x000408f6) list_double_graphic_heading_pane_g1_ParamLimits

0x97f5,	// (0x000408f6) list_double_graphic_heading_pane_g1

0x97b0,	// (0x000408b1) list_double_graphic_heading_pane_g2_ParamLimits

0x97b0,	// (0x000408b1) list_double_graphic_heading_pane_g2

0x97c1,	// (0x000408c2) list_double_graphic_heading_pane_g3_ParamLimits

0x97c1,	// (0x000408c2) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0004674e) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0004674e) list_double_graphic_heading_pane_g

0x9801,	// (0x00040902) list_double_graphic_heading_pane_t1_ParamLimits

0x9801,	// (0x00040902) list_double_graphic_heading_pane_t1

0x96d3,	// (0x000407d4) list_double_graphic_heading_pane_t2_ParamLimits

0x96d3,	// (0x000407d4) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00046755) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00046755) list_double_graphic_heading_pane_t

0x9710,	// (0x00040811) list_double_time_pane_g1_ParamLimits

0x9710,	// (0x00040811) list_double_time_pane_g1

0x958b,	// (0x0004068c) list_double_time_pane_g2_ParamLimits

0x958b,	// (0x0004068c) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0004675a) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0004675a) list_double_time_pane_g

0x9817,	// (0x00040918) list_double_time_pane_t1_ParamLimits

0x9817,	// (0x00040918) list_double_time_pane_t1

0x982d,	// (0x0004092e) list_double_time_pane_t2_ParamLimits

0x982d,	// (0x0004092e) list_double_time_pane_t2

0x983f,	// (0x00040940) list_double_time_pane_t3_ParamLimits

0x983f,	// (0x00040940) list_double_time_pane_t3

0x9851,	// (0x00040952) list_double_time_pane_t4_ParamLimits

0x9851,	// (0x00040952) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0004675f) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0004675f) list_double_time_pane_t

0x9863,	// (0x00040964) list_setting_pane_g1_ParamLimits

0x9863,	// (0x00040964) list_setting_pane_g1

0x97c1,	// (0x000408c2) list_setting_pane_g2_ParamLimits

0x97c1,	// (0x000408c2) list_setting_pane_g2

0x0001,

0xf667,	// (0x00046768) list_setting_pane_g_ParamLimits

0xf667,	// (0x00046768) list_setting_pane_g

0x986f,	// (0x00040970) list_setting_pane_t1_ParamLimits

0x986f,	// (0x00040970) list_setting_pane_t1

0x9886,	// (0x00040987) list_setting_pane_t2_ParamLimits

0x9886,	// (0x00040987) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0004676d) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0004676d) list_setting_pane_t

0x98c5,	// (0x000409c6) set_value_pane_cp_ParamLimits

0x98c5,	// (0x000409c6) set_value_pane_cp

0x98d3,	// (0x000409d4) list_setting_number_pane_g1_ParamLimits

0x98d3,	// (0x000409d4) list_setting_number_pane_g1

0x98df,	// (0x000409e0) list_setting_number_pane_g2_ParamLimits

0x98df,	// (0x000409e0) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00046774) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00046774) list_setting_number_pane_g

0x98eb,	// (0x000409ec) list_setting_number_pane_t1_ParamLimits

0x98eb,	// (0x000409ec) list_setting_number_pane_t1

0x98ff,	// (0x00040a00) list_setting_number_pane_t2_ParamLimits

0x98ff,	// (0x00040a00) list_setting_number_pane_t2

0x9916,	// (0x00040a17) list_setting_number_pane_t3_ParamLimits

0x9916,	// (0x00040a17) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x00046779) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x00046779) list_setting_number_pane_t

0x98c5,	// (0x000409c6) set_value_pane_ParamLimits

0x98c5,	// (0x000409c6) set_value_pane

0xb874,	// (0x00042975) bg_set_opt_pane_ParamLimits

0xb874,	// (0x00042975) bg_set_opt_pane

0xcf18,	// (0x00044019) set_value_pane_t1

0xb895,	// (0x00042996) slider_set_pane_cp3

0xb89e,	// (0x0004299f) volume_small_pane_cp

0xb8a7,	// (0x000429a8) list_form_gen_pane

0xb8b0,	// (0x000429b1) scroll_pane_cp8

0x9959,	// (0x00040a5a) form_field_data_pane_ParamLimits

0x9959,	// (0x00040a5a) form_field_data_pane

0x9974,	// (0x00040a75) form_field_data_wide_pane_ParamLimits

0x9974,	// (0x00040a75) form_field_data_wide_pane

0xcf36,	// (0x00044037) form_field_popup_pane_ParamLimits

0xcf36,	// (0x00044037) form_field_popup_pane

0x9996,	// (0x00040a97) form_field_popup_wide_pane_ParamLimits

0x9996,	// (0x00040a97) form_field_popup_wide_pane

0xcf58,	// (0x00044059) form_field_slider_pane_ParamLimits

0xcf58,	// (0x00044059) form_field_slider_pane

0xcf6b,	// (0x0004406c) form_field_slider_wide_pane_ParamLimits

0xcf6b,	// (0x0004406c) form_field_slider_wide_pane

0xb8c1,	// (0x000429c2) data_form_pane

0x99c1,	// (0x00040ac2) form_field_data_pane_t1

0xb8cd,	// (0x000429ce) input_focus_pane

0xcf7e,	// (0x0004407f) data_form_wide_pane

0xcf9b,	// (0x0004409c) form_field_data_wide_pane_t1

0xb648,	// (0x00042749) input_focus_pane_cp6

0x99db,	// (0x00040adc) form_field_popup_pane_t1

0xb8cd,	// (0x000429ce) input_focus_pane_cp7

0xb8fb,	// (0x000429fc) list_form_pane

0xcfc5,	// (0x000440c6) form_field_popup_wide_pane_t1

0xb8cd,	// (0x000429ce) input_focus_pane_cp8

0xb907,	// (0x00042a08) list_form_wide_pane

0x99fd,	// (0x00040afe) form_field_slider_pane_t1_ParamLimits

0x99fd,	// (0x00040afe) form_field_slider_pane_t1

0x9a15,	// (0x00040b16) form_field_slider_pane_t2_ParamLimits

0x9a15,	// (0x00040b16) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x00046789) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x00046789) form_field_slider_pane_t

0x8524,	// (0x0003f625) input_focus_pane_cp9_ParamLimits

0x8524,	// (0x0003f625) input_focus_pane_cp9

0x9a2a,	// (0x00040b2b) slider_cont_pane_ParamLimits

0x9a2a,	// (0x00040b2b) slider_cont_pane

0xb916,	// (0x00042a17) form_field_slider_wide_pane_t1_ParamLimits

0xb916,	// (0x00042a17) form_field_slider_wide_pane_t1

0xcfda,	// (0x000440db) form_field_slider_wide_pane_t2_ParamLimits

0xcfda,	// (0x000440db) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0004678e) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0004678e) form_field_slider_wide_pane_t

0x8524,	// (0x0003f625) input_focus_pane_cp10_ParamLimits

0x8524,	// (0x0003f625) input_focus_pane_cp10

0x9a3e,	// (0x00040b3f) slider_cont_pane_cp1_ParamLimits

0x9a3e,	// (0x00040b3f) slider_cont_pane_cp1

0x9a52,	// (0x00040b53) slider_form_pane_cp

0xb928,	// (0x00042a29) input_focus_pane_g1

0xb930,	// (0x00042a31) input_focus_pane_g2

0xb938,	// (0x00042a39) input_focus_pane_g3

0xb940,	// (0x00042a41) input_focus_pane_g4

0xb948,	// (0x00042a49) input_focus_pane_g5

0xb950,	// (0x00042a51) input_focus_pane_g6

0xb958,	// (0x00042a59) input_focus_pane_g7

0xb960,	// (0x00042a61) input_focus_pane_g8

0xb968,	// (0x00042a69) input_focus_pane_g9

0x84c0,	// (0x0003f5c1) input_focus_pane_g10

0x0009,

0xf692,	// (0x00046793) input_focus_pane_g

0x2b13,	// (0x00039c14) wait_border_pane_g3_copy1

0x9a5a,	// (0x00040b5b) data_form_pane_t1

0x84c0,	// (0x0003f5c1) wait_anim_pane_g1_copy1

0xab3f,	// (0x00041c40) data_form_wide_pane_t1

0xcfec,	// (0x000440ed) list_form_graphic_pane_cp_ParamLimits

0xcfec,	// (0x000440ed) list_form_graphic_pane_cp

0x3a86,	// (0x0003ab87) slider_form_pane_g1

0x3a8f,	// (0x0003ab90) slider_form_pane_g2

0x0006,

0xf990,	// (0x00046a91) slider_form_pane_g

0xcfec,	// (0x000440ed) list_form_graphic_pane_ParamLimits

0xcfec,	// (0x000440ed) list_form_graphic_pane

0xcffe,	// (0x000440ff) list_form_graphic_pane_g1

0xd006,	// (0x00044107) list_form_graphic_pane_t1_ParamLimits

0xd006,	// (0x00044107) list_form_graphic_pane_t1

0xb2b8,	// (0x000423b9) list_highlight_pane_cp5_ParamLimits

0xb2b8,	// (0x000423b9) list_highlight_pane_cp5

0x9a74,	// (0x00040b75) find_pane_g1

0xb970,	// (0x00042a71) input_find_pane

0x9a7d,	// (0x00040b7e) input_find_pane_g1_ParamLimits

0x9a7d,	// (0x00040b7e) input_find_pane_g1

0x9a89,	// (0x00040b8a) input_find_pane_t1_ParamLimits

0x9a89,	// (0x00040b8a) input_find_pane_t1

0x9a9e,	// (0x00040b9f) input_find_pane_t2_ParamLimits

0x9a9e,	// (0x00040b9f) input_find_pane_t2

0x0001,

0xf6a7,	// (0x000467a8) input_find_pane_t_ParamLimits

0xf6a7,	// (0x000467a8) input_find_pane_t

0xb979,	// (0x00042a7a) input_focus_pane_cp5_ParamLimits

0xb979,	// (0x00042a7a) input_focus_pane_cp5

0xb987,	// (0x00042a88) bg_popup_window_pane_cp2_ParamLimits

0xb987,	// (0x00042a88) bg_popup_window_pane_cp2

0xb994,	// (0x00042a95) listscroll_menu_pane_ParamLimits

0xb994,	// (0x00042a95) listscroll_menu_pane

0x9abf,	// (0x00040bc0) popup_submenu_window_ParamLimits

0x9abf,	// (0x00040bc0) popup_submenu_window

0xb9a0,	// (0x00042aa1) find_popup_pane_g1

0xb9a8,	// (0x00042aa9) input_popup_find_pane_cp

0xb979,	// (0x00042a7a) input_focus_pane_cp4_ParamLimits

0xb979,	// (0x00042a7a) input_focus_pane_cp4

0xb9b2,	// (0x00042ab3) input_popup_find_pane_t1_ParamLimits

0xb9b2,	// (0x00042ab3) input_popup_find_pane_t1

0x84ca,	// (0x0003f5cb) bg_popup_sub_pane_cp

0xb9e0,	// (0x00042ae1) listscroll_popup_sub_pane

0xb9e8,	// (0x00042ae9) list_submenu_pane_ParamLimits

0xb9e8,	// (0x00042ae9) list_submenu_pane

0xb9f9,	// (0x00042afa) scroll_pane_cp4

0xba01,	// (0x00042b02) list_single_popup_submenu_pane_ParamLimits

0xba01,	// (0x00042b02) list_single_popup_submenu_pane

0xba16,	// (0x00042b17) list_single_popup_submenu_pane_g1

0xba1e,	// (0x00042b1f) list_single_popup_submenu_pane_t1_ParamLimits

0xba1e,	// (0x00042b1f) list_single_popup_submenu_pane_t1

0x8524,	// (0x0003f625) bg_active_tab_pane_cp1_ParamLimits

0x8524,	// (0x0003f625) bg_active_tab_pane_cp1

0x9afd,	// (0x00040bfe) tabs_2_active_pane_g1

0x9b05,	// (0x00040c06) tabs_2_active_pane_t1

0x8524,	// (0x0003f625) bg_passive_tab_pane_cp1_ParamLimits

0x8524,	// (0x0003f625) bg_passive_tab_pane_cp1

0x9afd,	// (0x00040bfe) tabs_2_passive_pane_g1

0x9b05,	// (0x00040c06) tabs_2_passive_pane_t1

0xb2b8,	// (0x000423b9) bg_active_tab_pane_cp4

0x9b17,	// (0x00040c18) tabs_2_long_active_pane_t1

0x19ec,	// (0x00038aed) bg_passive_tab_pane_cp4

0x00d1,	// (0x000371d2) list_single_midp_graphic_pane_g4_ParamLimits

0xb2b8,	// (0x000423b9) bg_active_tab_pane_cp5

0x9b2a,	// (0x00040c2b) tabs_3_long_active_pane_t1

0x19ec,	// (0x00038aed) bg_passive_tab_pane_cp5

0x00d1,	// (0x000371d2) list_single_midp_graphic_pane_g4

0xb2b8,	// (0x000423b9) bg_popup_window_pane_cp13_ParamLimits

0xb2b8,	// (0x000423b9) bg_popup_window_pane_cp13

0xba3c,	// (0x00042b3d) listscroll_popup_fast_pane_ParamLimits

0xba3c,	// (0x00042b3d) listscroll_popup_fast_pane

0xba4b,	// (0x00042b4c) grid_popup_fast_pane_ParamLimits

0xba4b,	// (0x00042b4c) grid_popup_fast_pane

0xba5d,	// (0x00042b5e) scroll_pane_cp9_ParamLimits

0xba5d,	// (0x00042b5e) scroll_pane_cp9

0x5417,	// (0x0003c518) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5417,	// (0x0003c518) list_single_graphic_hl_pane_t1_cp2

0xba81,	// (0x00042b82) input_focus_pane_cp20_ParamLimits

0xba81,	// (0x00042b82) input_focus_pane_cp20

0xba8f,	// (0x00042b90) query_popup_data_pane_t1_ParamLimits

0xba8f,	// (0x00042b90) query_popup_data_pane_t1

0xbaa2,	// (0x00042ba3) query_popup_data_pane_t2_ParamLimits

0xbaa2,	// (0x00042ba3) query_popup_data_pane_t2

0xbae8,	// (0x00042be9) query_popup_data_pane_t3_ParamLimits

0xbae8,	// (0x00042be9) query_popup_data_pane_t3

0xbb29,	// (0x00042c2a) query_popup_data_pane_t4_ParamLimits

0xbb29,	// (0x00042c2a) query_popup_data_pane_t4

0xbb65,	// (0x00042c66) query_popup_data_pane_t5_ParamLimits

0xbb65,	// (0x00042c66) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x000467ad) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x000467ad) query_popup_data_pane_t

0xb928,	// (0x00042a29) bg_set_opt_pane_g1

0xb930,	// (0x00042a31) bg_set_opt_pane_g2

0xb938,	// (0x00042a39) bg_set_opt_pane_g3

0xb940,	// (0x00042a41) bg_set_opt_pane_g4

0xb948,	// (0x00042a49) bg_set_opt_pane_g5

0xb950,	// (0x00042a51) bg_set_opt_pane_g6

0xb958,	// (0x00042a59) bg_set_opt_pane_g7

0xb960,	// (0x00042a61) bg_set_opt_pane_g8

0xb968,	// (0x00042a69) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x000467b8) bg_set_opt_pane_g

0xf165,	// (0x00046266) control_top_pane_stacon_ParamLimits

0xf165,	// (0x00046266) control_top_pane_stacon

0xf1b8,	// (0x000462b9) signal_pane_stacon_ParamLimits

0xf1b8,	// (0x000462b9) signal_pane_stacon

0xf1dd,	// (0x000462de) stacon_top_pane_g1_ParamLimits

0xf1dd,	// (0x000462de) stacon_top_pane_g1

0xf1ff,	// (0x00046300) title_pane_stacon_ParamLimits

0xf1ff,	// (0x00046300) title_pane_stacon

0xf229,	// (0x0004632a) uni_indicator_pane_stacon_ParamLimits

0xf229,	// (0x0004632a) uni_indicator_pane_stacon

0xf241,	// (0x00046342) battery_pane_stacon_ParamLimits

0xf241,	// (0x00046342) battery_pane_stacon

0xf285,	// (0x00046386) control_bottom_pane_stacon_ParamLimits

0xf285,	// (0x00046386) control_bottom_pane_stacon

0xf2a8,	// (0x000463a9) navi_pane_stacon_ParamLimits

0xf2a8,	// (0x000463a9) navi_pane_stacon

0xf2cb,	// (0x000463cc) stacon_bottom_pane_g1_ParamLimits

0xf2cb,	// (0x000463cc) stacon_bottom_pane_g1

0xed55,	// (0x00045e56) aid_levels_signal_lsc_ParamLimits

0xed55,	// (0x00045e56) aid_levels_signal_lsc

0xed6c,	// (0x00045e6d) signal_pane_stacon_g1_ParamLimits

0xed6c,	// (0x00045e6d) signal_pane_stacon_g1

0xed80,	// (0x00045e81) signal_pane_stacon_g2_ParamLimits

0xed80,	// (0x00045e81) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x000467cb) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x000467cb) signal_pane_stacon_g

0xedb5,	// (0x00045eb6) title_pane_stacon_t1_ParamLimits

0xedb5,	// (0x00045eb6) title_pane_stacon_t1

0xbba9,	// (0x00042caa) uni_indicator_pane_stacon_g1

0xbbb3,	// (0x00042cb4) uni_indicator_pane_stacon_g2

0xbbbd,	// (0x00042cbe) uni_indicator_pane_stacon_g3

0xbbc7,	// (0x00042cc8) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x000467d7) uni_indicator_pane_stacon_g

0xedda,	// (0x00045edb) control_top_pane_stacon_g1

0xede2,	// (0x00045ee3) control_top_pane_stacon_t1_ParamLimits

0xede2,	// (0x00045ee3) control_top_pane_stacon_t1

0xee19,	// (0x00045f1a) aid_levels_battery_lsc_ParamLimits

0xee19,	// (0x00045f1a) aid_levels_battery_lsc

0xee31,	// (0x00045f32) battery_pane_stacon_g1_ParamLimits

0xee31,	// (0x00045f32) battery_pane_stacon_g1

0xee44,	// (0x00045f45) battery_pane_stacon_g2_ParamLimits

0xee44,	// (0x00045f45) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x000467e0) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x000467e0) battery_pane_stacon_g

0xee82,	// (0x00045f83) navi_icon_pane_stacon

0xee96,	// (0x00045f97) navi_navi_pane_stacon

0xee82,	// (0x00045f83) navi_text_pane_stacon

0xedda,	// (0x00045edb) control_bottom_pane_stacon_g1

0xeeac,	// (0x00045fad) control_bottom_pane_stacon_t1_ParamLimits

0xeeac,	// (0x00045fad) control_bottom_pane_stacon_t1

0x9b3c,	// (0x00040c3d) grid_app_pane_ParamLimits

0x9b3c,	// (0x00040c3d) grid_app_pane

0x9b74,	// (0x00040c75) scroll_pane_cp15_ParamLimits

0x9b74,	// (0x00040c75) scroll_pane_cp15

0x9b8d,	// (0x00040c8e) cell_app_pane_ParamLimits

0x9b8d,	// (0x00040c8e) cell_app_pane

0x9bda,	// (0x00040cdb) cell_app_pane_g1_ParamLimits

0x9bda,	// (0x00040cdb) cell_app_pane_g1

0xbbeb,	// (0x00042cec) cell_app_pane_g2_ParamLimits

0xbbeb,	// (0x00042cec) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x000467e5) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x000467e5) cell_app_pane_g

0xbbf7,	// (0x00042cf8) cell_app_pane_t1_ParamLimits

0xbbf7,	// (0x00042cf8) cell_app_pane_t1

0xbc0e,	// (0x00042d0f) grid_highlight_pane_ParamLimits

0xbc0e,	// (0x00042d0f) grid_highlight_pane

0xb928,	// (0x00042a29) cell_highlight_pane_g1

0xb930,	// (0x00042a31) cell_highlight_pane_g2

0xb938,	// (0x00042a39) cell_highlight_pane_g3

0xb940,	// (0x00042a41) cell_highlight_pane_g4

0xb948,	// (0x00042a49) cell_highlight_pane_g5

0xb950,	// (0x00042a51) cell_highlight_pane_g6

0xb958,	// (0x00042a59) cell_highlight_pane_g7

0xb960,	// (0x00042a61) cell_highlight_pane_g8

0xb968,	// (0x00042a69) cell_highlight_pane_g9

0x84c0,	// (0x0003f5c1) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00046793) cell_highlight_pane_g

0xbc1f,	// (0x00042d20) bg_scroll_pane

0xeeed,	// (0x00045fee) scroll_handle_pane

0xd031,	// (0x00044132) scroll_bg_pane_g1

0xd046,	// (0x00044147) scroll_bg_pane_g2

0xd05e,	// (0x0004415f) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x000467ea) scroll_bg_pane_g

0xd073,	// (0x00044174) scroll_handle_focus_pane_ParamLimits

0xd073,	// (0x00044174) scroll_handle_focus_pane

0xd031,	// (0x00044132) scroll_handle_pane_g1

0xd080,	// (0x00044181) scroll_handle_pane_g2

0xd05e,	// (0x0004415f) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x000467f1) scroll_handle_pane_g

0xb979,	// (0x00042a7a) bg_popup_sub_pane_cp21_ParamLimits

0xb979,	// (0x00042a7a) bg_popup_sub_pane_cp21

0xd094,	// (0x00044195) popup_fep_japan_predictive_window_t1_ParamLimits

0xd094,	// (0x00044195) popup_fep_japan_predictive_window_t1

0xd0ab,	// (0x000441ac) popup_fep_japan_predictive_window_t2_ParamLimits

0xd0ab,	// (0x000441ac) popup_fep_japan_predictive_window_t2

0xd0de,	// (0x000441df) popup_fep_japan_predictive_window_t3_ParamLimits

0xd0de,	// (0x000441df) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x000467f8) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x000467f8) popup_fep_japan_predictive_window_t

0x84ca,	// (0x0003f5cb) bg_popup_sub_pane_cp23

0xd115,	// (0x00044216) listscroll_japin_cand_pane

0xd11d,	// (0x0004421e) popup_fep_japan_candidate_window_t1

0xd12b,	// (0x0004422c) candidate_pane_ParamLimits

0xd12b,	// (0x0004422c) candidate_pane

0xd13d,	// (0x0004423e) scroll_pane_cp30

0xd147,	// (0x00044248) list_single_popup_jap_candidate_pane_ParamLimits

0xd147,	// (0x00044248) list_single_popup_jap_candidate_pane

0x84ca,	// (0x0003f5cb) list_highlight_pane_cp30

0xd15b,	// (0x0004425c) list_single_popup_jap_candidate_pane_t1

0x9c03,	// (0x00040d04) level_1_signal

0x9c15,	// (0x00040d16) level_2_signal

0x9c28,	// (0x00040d29) level_3_signal

0x9c3b,	// (0x00040d3c) level_4_signal

0x9c4e,	// (0x00040d4f) level_5_signal

0x9c61,	// (0x00040d62) level_6_signal

0x9c74,	// (0x00040d75) level_7_signal

0x9c03,	// (0x00040d04) level_1_battery

0x9c15,	// (0x00040d16) level_2_battery

0x9c28,	// (0x00040d29) level_3_battery

0x9c3b,	// (0x00040d3c) level_4_battery

0x9c4e,	// (0x00040d4f) level_5_battery

0x9c61,	// (0x00040d62) level_6_battery

0x9c74,	// (0x00040d75) level_7_battery

0xd182,	// (0x00044283) list_menu_pane_ParamLimits

0xd182,	// (0x00044283) list_menu_pane

0xd198,	// (0x00044299) scroll_pane_cp25_ParamLimits

0xd198,	// (0x00044299) scroll_pane_cp25

0xd1b1,	// (0x000442b2) list_double2_graphic_pane_cp2_ParamLimits

0xd1b1,	// (0x000442b2) list_double2_graphic_pane_cp2

0xd1b1,	// (0x000442b2) list_double2_large_graphic_pane_cp2_ParamLimits

0xd1b1,	// (0x000442b2) list_double2_large_graphic_pane_cp2

0xd1b1,	// (0x000442b2) list_double2_pane_cp2_ParamLimits

0xd1b1,	// (0x000442b2) list_double2_pane_cp2

0xd1b1,	// (0x000442b2) list_double_graphic_pane_cp2_ParamLimits

0xd1b1,	// (0x000442b2) list_double_graphic_pane_cp2

0xd1b1,	// (0x000442b2) list_double_large_graphic_pane_cp2_ParamLimits

0xd1b1,	// (0x000442b2) list_double_large_graphic_pane_cp2

0xd1b1,	// (0x000442b2) list_double_number_pane_cp2_ParamLimits

0xd1b1,	// (0x000442b2) list_double_number_pane_cp2

0xd1b1,	// (0x000442b2) list_double_pane_cp2_ParamLimits

0xd1b1,	// (0x000442b2) list_double_pane_cp2

0x9c9a,	// (0x00040d9b) list_single_2graphic_pane_cp2_ParamLimits

0x9c9a,	// (0x00040d9b) list_single_2graphic_pane_cp2

0x9c9a,	// (0x00040d9b) list_single_graphic_heading_pane_cp2_ParamLimits

0x9c9a,	// (0x00040d9b) list_single_graphic_heading_pane_cp2

0x9c9a,	// (0x00040d9b) list_single_graphic_pane_cp2_ParamLimits

0x9c9a,	// (0x00040d9b) list_single_graphic_pane_cp2

0x9c9a,	// (0x00040d9b) list_single_heading_pane_cp2_ParamLimits

0x9c9a,	// (0x00040d9b) list_single_heading_pane_cp2

0xd1c1,	// (0x000442c2) list_single_large_graphic_pane_cp2_ParamLimits

0xd1c1,	// (0x000442c2) list_single_large_graphic_pane_cp2

0x9c9a,	// (0x00040d9b) list_single_number_heading_pane_cp2_ParamLimits

0x9c9a,	// (0x00040d9b) list_single_number_heading_pane_cp2

0x9c9a,	// (0x00040d9b) list_single_number_pane_cp2_ParamLimits

0x9c9a,	// (0x00040d9b) list_single_number_pane_cp2

0x9c9a,	// (0x00040d9b) list_single_pane_cp2_ParamLimits

0x9c9a,	// (0x00040d9b) list_single_pane_cp2

0xef99,	// (0x0004609a) bg_popup_sub_pane_cp22

0xefbe,	// (0x000460bf) popup_side_volume_key_window_g1

0xefe8,	// (0x000460e9) popup_side_volume_key_window_t1

0xf006,	// (0x00046107) volume_small_pane_cp1

0x8524,	// (0x0003f625) bg_popup_sub_pane_cp24_ParamLimits

0x8524,	// (0x0003f625) bg_popup_sub_pane_cp24

0xf00e,	// (0x0004610f) fep_china_uni_candidate_pane_ParamLimits

0xf00e,	// (0x0004610f) fep_china_uni_candidate_pane

0xf022,	// (0x00046123) fep_china_uni_entry_pane

0xf032,	// (0x00046133) popup_fep_china_uni_window_g1

0xf04e,	// (0x0004614f) fep_china_uni_entry_pane_g1

0xf058,	// (0x00046159) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00046829) fep_china_uni_entry_pane_g

0xf062,	// (0x00046163) fep_entry_item_pane

0xf06c,	// (0x0004616d) fep_candidate_item_pane

0xf074,	// (0x00046175) fep_china_uni_candidate_pane_g1

0xf07e,	// (0x0004617f) fep_china_uni_candidate_pane_g2

0xf086,	// (0x00046187) fep_china_uni_candidate_pane_g3

0xf08e,	// (0x0004618f) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0004682e) fep_china_uni_candidate_pane_g

0x84c0,	// (0x0003f5c1) fep_entry_item_pane_g1

0xf098,	// (0x00046199) fep_entry_item_pane_t1_ParamLimits

0xf098,	// (0x00046199) fep_entry_item_pane_t1

0xf0ae,	// (0x000461af) fep_candidate_item_pane_t1_ParamLimits

0xf0ae,	// (0x000461af) fep_candidate_item_pane_t1

0xf0c3,	// (0x000461c4) fep_candidate_item_pane_t2_ParamLimits

0xf0c3,	// (0x000461c4) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x00046837) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x00046837) fep_candidate_item_pane_t

0xb2b8,	// (0x000423b9) list_highlight_pane_cp31_ParamLimits

0xb2b8,	// (0x000423b9) list_highlight_pane_cp31

0xf0d5,	// (0x000461d6) level_1_signal_lsc

0xf0de,	// (0x000461df) level_2_signal_lsc

0xf0e7,	// (0x000461e8) level_3_signal_lsc

0xf0f0,	// (0x000461f1) level_4_signal_lsc

0xf0f9,	// (0x000461fa) level_5_signal_lsc

0xf102,	// (0x00046203) level_6_signal_lsc

0xf10b,	// (0x0004620c) level_7_signal_lsc

0xf10b,	// (0x0004620c) level_1_battery_lsc

0xf114,	// (0x00046215) level_2_battery_lsc

0xf11d,	// (0x0004621e) level_3_battery_lsc

0xf126,	// (0x00046227) level_4_battery_lsc

0xf12f,	// (0x00046230) level_5_battery_lsc

0xf138,	// (0x00046239) level_6_battery_lsc

0xf0d5,	// (0x000461d6) level_7_battery_lsc

0xf141,	// (0x00046242) scroll_handle_focus_pane_g1

0xf14a,	// (0x0004624b) scroll_handle_focus_pane_g2

0xf153,	// (0x00046254) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0004683c) scroll_handle_focus_pane_g

0x9d2c,	// (0x00040e2d) list_single_2graphic_pane_g1_ParamLimits

0x9d2c,	// (0x00040e2d) list_single_2graphic_pane_g1

0x9554,	// (0x00040655) list_single_2graphic_pane_g2_ParamLimits

0x9554,	// (0x00040655) list_single_2graphic_pane_g2

0xce9f,	// (0x00043fa0) list_single_2graphic_pane_g3_ParamLimits

0xce9f,	// (0x00043fa0) list_single_2graphic_pane_g3

0x9d38,	// (0x00040e39) list_single_2graphic_pane_g4_ParamLimits

0x9d38,	// (0x00040e39) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00046843) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00046843) list_single_2graphic_pane_g

0x9d44,	// (0x00040e45) list_single_2graphic_pane_t1_ParamLimits

0x9d44,	// (0x00040e45) list_single_2graphic_pane_t1

0x9d72,	// (0x00040e73) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9d72,	// (0x00040e73) list_double2_graphic_large_graphic_pane_g1

0x976b,	// (0x0004086c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x976b,	// (0x0004086c) list_double2_graphic_large_graphic_pane_g2

0x977c,	// (0x0004087d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x977c,	// (0x0004087d) list_double2_graphic_large_graphic_pane_g3

0x9d84,	// (0x00040e85) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9d84,	// (0x00040e85) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0004684c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0004684c) list_double2_graphic_large_graphic_pane_g

0x9d90,	// (0x00040e91) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9d90,	// (0x00040e91) list_double2_graphic_large_graphic_pane_t1

0x9da6,	// (0x00040ea7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9da6,	// (0x00040ea7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00046855) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00046855) list_double2_graphic_large_graphic_pane_t

0xf329,	// (0x0004642a) popup_fast_swap_window_ParamLimits

0xf329,	// (0x0004642a) popup_fast_swap_window

0xf347,	// (0x00046448) popup_side_volume_key_window

0xf365,	// (0x00046466) stacon_top_pane

0xf36f,	// (0x00046470) status_pane_ParamLimits

0xf36f,	// (0x00046470) status_pane

0xf365,	// (0x00046466) status_small_pane

0x84ca,	// (0x0003f5cb) control_pane

0x84ca,	// (0x0003f5cb) stacon_bottom_pane

0xb8b0,	// (0x000429b1) scroll_pane_cp121

0xb8a7,	// (0x000429a8) set_content_pane

0x9db8,	// (0x00040eb9) bg_active_tab_pane_g1_cp1

0xf15c,	// (0x0004625d) bg_active_tab_pane_g2_cp1

0x9dc1,	// (0x00040ec2) bg_active_tab_pane_g3_cp1

0x9db8,	// (0x00040eb9) bg_passive_tab_pane_g1_cp1

0xf15c,	// (0x0004625d) bg_passive_tab_pane_g2_cp1

0x9dc1,	// (0x00040ec2) bg_passive_tab_pane_g3_cp1

0x9dca,	// (0x00040ecb) bg_active_tab_pane_g1_cp2

0xf15c,	// (0x0004625d) bg_active_tab_pane_g2_cp2

0x9dd3,	// (0x00040ed4) bg_active_tab_pane_g3_cp2

0x9dca,	// (0x00040ecb) bg_passive_tab_pane_g1_cp2

0xf15c,	// (0x0004625d) bg_passive_tab_pane_g2_cp2

0x9dd3,	// (0x00040ed4) bg_passive_tab_pane_g3_cp2

0x9ddc,	// (0x00040edd) bg_active_tab_pane_g1_cp3

0xf15c,	// (0x0004625d) bg_active_tab_pane_g2_cp3

0x9de5,	// (0x00040ee6) bg_active_tab_pane_g3_cp3

0x9ddc,	// (0x00040edd) bg_passive_tab_pane_g1_cp3

0xf15c,	// (0x0004625d) bg_passive_tab_pane_g2_cp3

0x9de5,	// (0x00040ee6) bg_passive_tab_pane_g3_cp3

0x9dee,	// (0x00040eef) bg_active_tab_pane_g1_cp4

0xf15c,	// (0x0004625d) bg_active_tab_pane_g2_cp4

0x9df7,	// (0x00040ef8) bg_active_tab_pane_g3_cp4

0x9dee,	// (0x00040eef) bg_passive_tab_pane_g1_cp4

0xf15c,	// (0x0004625d) bg_passive_tab_pane_g2_cp4

0x9df7,	// (0x00040ef8) bg_passive_tab_pane_g3_cp4

0xf2e7,	// (0x000463e8) bg_active_tab_pane_g1_cp5

0xf15c,	// (0x0004625d) bg_active_tab_pane_g2_cp5

0xf2f0,	// (0x000463f1) bg_active_tab_pane_g3_cp5

0xf2e7,	// (0x000463e8) bg_passive_tab_pane_g1_cp5

0xf15c,	// (0x0004625d) bg_passive_tab_pane_g2_cp5

0xf2f0,	// (0x000463f1) bg_passive_tab_pane_g3_cp5

0x4088,	// (0x0003b189) list_set_graphic_pane_ParamLimits

0x4088,	// (0x0003b189) list_set_graphic_pane

0x84ca,	// (0x0003f5cb) bg_set_opt_pane_cp4

0x9e00,	// (0x00040f01) list_set_graphic_pane_g1_ParamLimits

0x9e00,	// (0x00040f01) list_set_graphic_pane_g1

0x9e0c,	// (0x00040f0d) list_set_graphic_pane_g2_ParamLimits

0x9e0c,	// (0x00040f0d) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0004685a) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0004685a) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x00046bdd) volume_small_pane_cp_g

0x9e30,	// (0x00040f31) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9e30,	// (0x00040f31) list_double2_large_graphic_pane_g1_cp2

0x9e3e,	// (0x00040f3f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9e3e,	// (0x00040f3f) list_double2_large_graphic_pane_g2_cp2

0xf2f9,	// (0x000463fa) list_double2_large_graphic_pane_g3_cp2

0xf301,	// (0x00046402) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf301,	// (0x00046402) list_double2_large_graphic_pane_t1_cp2

0xf317,	// (0x00046418) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf317,	// (0x00046418) list_double2_large_graphic_pane_t2_cp2

0xc1cd,	// (0x000432ce) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc1cd,	// (0x000432ce) list_double_large_graphic_pane_g1_cp2

0xc1e0,	// (0x000432e1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc1e0,	// (0x000432e1) list_double_large_graphic_pane_g2_cp2

0xf450,	// (0x00046551) list_double_large_graphic_pane_g3_cp2

0x361b,	// (0x0003a71c) list_double_large_graphic_pane_g4_cp

0x3623,	// (0x0003a724) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3623,	// (0x0003a724) list_double_large_graphic_pane_t1_cp2

0x363a,	// (0x0003a73b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x363a,	// (0x0003a73b) list_double_large_graphic_pane_t2_cp2

0x9e4f,	// (0x00040f50) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9e4f,	// (0x00040f50) list_double2_graphic_pane_g1_cp2

0x9e5d,	// (0x00040f5e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9e5d,	// (0x00040f5e) list_double2_graphic_pane_g2_cp2

0x9e6e,	// (0x00040f6f) list_double2_graphic_pane_g3_cp2

0xf37d,	// (0x0004647e) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf37d,	// (0x0004647e) list_double2_graphic_pane_t1_cp2

0xf393,	// (0x00046494) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf393,	// (0x00046494) list_double2_graphic_pane_t2_cp2

0xf3a5,	// (0x000464a6) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf3a5,	// (0x000464a6) list_single_number_heading_pane_g1_cp2

0xf3b1,	// (0x000464b2) list_single_number_heading_pane_g2_cp2

0xf3b9,	// (0x000464ba) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf3b9,	// (0x000464ba) list_single_number_heading_pane_t1_cp2

0x9e78,	// (0x00040f79) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9e78,	// (0x00040f79) list_single_number_heading_pane_t2_cp2

0xf3cf,	// (0x000464d0) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf3cf,	// (0x000464d0) list_single_number_heading_pane_t3_cp2

0xf3a5,	// (0x000464a6) list_single_heading_pane_g1_cp2_ParamLimits

0xf3a5,	// (0x000464a6) list_single_heading_pane_g1_cp2

0xf3b1,	// (0x000464b2) list_single_heading_pane_g2_cp2

0xf3b9,	// (0x000464ba) list_single_heading_pane_t1_cp2_ParamLimits

0xf3b9,	// (0x000464ba) list_single_heading_pane_t1_cp2

0xc1b9,	// (0x000432ba) list_single_heading_pane_t2_cp2_ParamLimits

0xc1b9,	// (0x000432ba) list_single_heading_pane_t2_cp2

0x3339,	// (0x0003a43a) list_double_graphic_pane_g1_cp2_ParamLimits

0x3339,	// (0x0003a43a) list_double_graphic_pane_g1_cp2

0x3345,	// (0x0003a446) list_double_graphic_pane_g2_cp2_ParamLimits

0x3345,	// (0x0003a446) list_double_graphic_pane_g2_cp2

0x3354,	// (0x0003a455) list_double_graphic_pane_g3_cp2

0x335c,	// (0x0003a45d) list_double_graphic_pane_t1_cp2_ParamLimits

0x335c,	// (0x0003a45d) list_double_graphic_pane_t1_cp2

0x3372,	// (0x0003a473) list_double_graphic_pane_t2_cp2_ParamLimits

0x3372,	// (0x0003a473) list_double_graphic_pane_t2_cp2

0xf444,	// (0x00046545) list_double_number_pane_g1_cp2_ParamLimits

0xf444,	// (0x00046545) list_double_number_pane_g1_cp2

0xf450,	// (0x00046551) list_double_number_pane_g2_cp2

0xc153,	// (0x00043254) list_double_number_pane_t1_cp2_ParamLimits

0xc153,	// (0x00043254) list_double_number_pane_t1_cp2

0x3311,	// (0x0003a412) list_double_number_pane_t2_cp2_ParamLimits

0x3311,	// (0x0003a412) list_double_number_pane_t2_cp2

0x3327,	// (0x0003a428) list_double_number_pane_t3_cp2_ParamLimits

0x3327,	// (0x0003a428) list_double_number_pane_t3_cp2

0xc0a1,	// (0x000431a2) list_single_graphic_pane_g1_cp2_ParamLimits

0xc0a1,	// (0x000431a2) list_single_graphic_pane_g1_cp2

0xf490,	// (0x00046591) list_single_graphic_pane_g2_cp2_ParamLimits

0xf490,	// (0x00046591) list_single_graphic_pane_g2_cp2

0x15b5,	// (0x000386b6) list_single_graphic_pane_g3_cp2

0x31bc,	// (0x0003a2bd) list_single_graphic_pane_t1_cp2_ParamLimits

0x31bc,	// (0x0003a2bd) list_single_graphic_pane_t1_cp2

0xf490,	// (0x00046591) list_single_number_pane_g1_cp2_ParamLimits

0xf490,	// (0x00046591) list_single_number_pane_g1_cp2

0x15b5,	// (0x000386b6) list_single_number_pane_g2_cp2

0x31bc,	// (0x0003a2bd) list_single_number_pane_t1_cp2_ParamLimits

0x31bc,	// (0x0003a2bd) list_single_number_pane_t1_cp2

0xc08d,	// (0x0004318e) list_single_number_pane_t2_cp2_ParamLimits

0xc08d,	// (0x0004318e) list_single_number_pane_t2_cp2

0x9e3e,	// (0x00040f3f) list_double2_pane_g1_cp2_ParamLimits

0x9e3e,	// (0x00040f3f) list_double2_pane_g1_cp2

0xf2f9,	// (0x000463fa) list_double2_pane_g2_cp2

0xf41c,	// (0x0004651d) list_double2_pane_t1_cp2_ParamLimits

0xf41c,	// (0x0004651d) list_double2_pane_t1_cp2

0xf432,	// (0x00046533) list_double2_pane_t2_cp2_ParamLimits

0xf432,	// (0x00046533) list_double2_pane_t2_cp2

0xf444,	// (0x00046545) list_double_pane_g1_cp2_ParamLimits

0xf444,	// (0x00046545) list_double_pane_g1_cp2

0xf450,	// (0x00046551) list_double_pane_g2_cp2

0xf458,	// (0x00046559) list_double_pane_t1_cp2_ParamLimits

0xf458,	// (0x00046559) list_double_pane_t1_cp2

0xf46e,	// (0x0004656f) list_double_pane_t2_cp2_ParamLimits

0xf46e,	// (0x0004656f) list_double_pane_t2_cp2

0xf480,	// (0x00046581) list_single_pane_cp2_g3

0xf490,	// (0x00046591) list_single_pane_g1_cp2_ParamLimits

0xf490,	// (0x00046591) list_single_pane_g1_cp2

0x15b5,	// (0x000386b6) list_single_pane_g2_cp2

0x15bd,	// (0x000386be) list_single_pane_t1_cp2_ParamLimits

0x15bd,	// (0x000386be) list_single_pane_t1_cp2

0x9ea6,	// (0x00040fa7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9ea6,	// (0x00040fa7) list_single_large_graphic_pane_g1_cp2

0x15e3,	// (0x000386e4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x15e3,	// (0x000386e4) list_single_large_graphic_pane_g2_cp2

0x15ef,	// (0x000386f0) list_single_large_graphic_pane_g3_cp2

0x15f7,	// (0x000386f8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x15f7,	// (0x000386f8) list_single_large_graphic_pane_g4_cp1

0x1611,	// (0x00038712) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1611,	// (0x00038712) list_single_large_graphic_pane_t1_cp2

0x3186,	// (0x0003a287) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3186,	// (0x0003a287) list_single_graphic_heading_pane_g1_cp2

0xc068,	// (0x00043169) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc068,	// (0x00043169) list_single_graphic_heading_pane_g4_cp2

0x15b5,	// (0x000386b6) list_single_graphic_heading_pane_g5_cp2

0x3192,	// (0x0003a293) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3192,	// (0x0003a293) list_single_graphic_heading_pane_t1_cp2

0xc079,	// (0x0004317a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc079,	// (0x0004317a) list_single_graphic_heading_pane_t2_cp2

0x3147,	// (0x0003a248) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3147,	// (0x0003a248) list_single_2graphic_pane_g1_cp2

0xc068,	// (0x00043169) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc068,	// (0x00043169) list_single_2graphic_pane_g2_cp2

0x15b5,	// (0x000386b6) list_single_2graphic_pane_g3_cp2

0x3164,	// (0x0003a265) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3164,	// (0x0003a265) list_single_2graphic_pane_g4_cp2

0x3170,	// (0x0003a271) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3170,	// (0x0003a271) list_single_2graphic_pane_t1_cp2

0x84c0,	// (0x0003f5c1) list_highlight_pane_g10_cp1

0x2d1f,	// (0x00039e20) list_highlight_pane_g1_cp1

0x2d27,	// (0x00039e28) list_highlight_pane_g2_cp1

0x2d2f,	// (0x00039e30) list_highlight_pane_g3_cp1

0x2d37,	// (0x00039e38) list_highlight_pane_g4_cp1

0x2d3f,	// (0x00039e40) list_highlight_pane_g5_cp1

0x2d47,	// (0x00039e48) list_highlight_pane_g6_cp1

0x2d4f,	// (0x00039e50) list_highlight_pane_g7_cp1

0x2d57,	// (0x00039e58) list_highlight_pane_g8_cp1

0x2d5f,	// (0x00039e60) list_highlight_pane_g9_cp1

0xc02e,	// (0x0004312f) form_field_slider_pane_t3

0xc03c,	// (0x0004313d) form_field_slider_pane_t4

0x2c5b,	// (0x00039d5c) slider_form_pane_ParamLimits

0x2c5b,	// (0x00039d5c) slider_form_pane

0x84ca,	// (0x0003f5cb) control_abbreviations

0x84ca,	// (0x0003f5cb) control_conventions

0x84ca,	// (0x0003f5cb) control_definitions

0x84ca,	// (0x0003f5cb) format_table_attribute

0x3447,	// (0x0003a548) bg_popup_preview_window_pane_g9

0x84ca,	// (0x0003f5cb) format_table_data2

0x84ca,	// (0x0003f5cb) format_table_data3

0x84ca,	// (0x0003f5cb) format_table_data_example

0x0008,

0x84ca,	// (0x0003f5cb) intro_purpose

0xf8f0,	// (0x000469f1) bg_popup_preview_window_pane_g

0x84ca,	// (0x0003f5cb) texts_category

0x84ca,	// (0x0003f5cb) texts_graphics

0x1627,	// (0x00038728) text_digital

0x1636,	// (0x00038737) text_primary

0x1645,	// (0x00038746) text_primary_small

0x1654,	// (0x00038755) text_secondary

0x1663,	// (0x00038764) text_title

0x3bcd,	// (0x0003acce) bg_passive_tab_pane_g1_cp3_srt

0xf15c,	// (0x0004625d) bg_passive_tab_pane_g2_cp3_srt

0x3bd6,	// (0x0003acd7) bg_passive_tab_pane_g3_cp3_srt

0x8524,	// (0x0003f625) bg_active_tab_pane_cp3_srt_ParamLimits

0x8524,	// (0x0003f625) bg_active_tab_pane_cp3_srt

0x3bdf,	// (0x0003ace0) tabs_4_active_pane_srt_g1

0xc4ec,	// (0x000435ed) tabs_4_active_pane_srt_t1_ParamLimits

0xc4ec,	// (0x000435ed) tabs_4_active_pane_srt_t1

0x3bcd,	// (0x0003acce) bg_active_tab_pane_g1_cp3_copy1

0xf15c,	// (0x0004625d) bg_active_tab_pane_g2_cp3_copy1

0x3bd6,	// (0x0003acd7) bg_active_tab_pane_g3_cp3_copy1

0xb2b8,	// (0x000423b9) tabs_2_long_active_pane_srt_ParamLimits

0xb2b8,	// (0x000423b9) tabs_2_long_active_pane_srt

0xb2b8,	// (0x000423b9) tabs_2_long_passive_pane_srt_ParamLimits

0xb2b8,	// (0x000423b9) tabs_2_long_passive_pane_srt

0x19ec,	// (0x00038aed) bg_passive_tab_pane_cp4_srt_ParamLimits

0x19ec,	// (0x00038aed) bg_passive_tab_pane_cp4_srt

0x3897,	// (0x0003a998) bg_passive_tab_pane_g1_cp4_srt

0xf15c,	// (0x0004625d) bg_passive_tab_pane_g2_cp4_srt

0x38a0,	// (0x0003a9a1) bg_passive_tab_pane_g3_cp4_srt

0xb2b8,	// (0x000423b9) bg_active_tab_pane_cp4_srt_ParamLimits

0xb2b8,	// (0x000423b9) bg_active_tab_pane_cp4_srt

0xc2ca,	// (0x000433cb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc2ca,	// (0x000433cb) tabs_2_long_active_pane_srt_t1

0x3897,	// (0x0003a998) bg_active_tab_pane_g1_cp4_srt

0xf15c,	// (0x0004625d) bg_active_tab_pane_g2_cp4_srt

0x38a0,	// (0x0003a9a1) bg_active_tab_pane_g3_cp4_srt

0x8524,	// (0x0003f625) tabs_3_long_active_pane_srt_ParamLimits

0x8524,	// (0x0003f625) tabs_3_long_active_pane_srt

0x8524,	// (0x0003f625) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8524,	// (0x0003f625) tabs_3_long_passive_pane_cp_srt

0x8524,	// (0x0003f625) tabs_3_long_passive_pane_srt_ParamLimits

0x8524,	// (0x0003f625) tabs_3_long_passive_pane_srt

0x19ec,	// (0x00038aed) bg_passive_tab_pane_cp5_srt_ParamLimits

0x19ec,	// (0x00038aed) bg_passive_tab_pane_cp5_srt

0xf2e7,	// (0x000463e8) bg_passive_tab_pane_g1_cp5_srt

0xf15c,	// (0x0004625d) bg_passive_tab_pane_g2_cp5_srt

0xf2f0,	// (0x000463f1) bg_passive_tab_pane_g3_cp5_srt

0xb2b8,	// (0x000423b9) bg_active_tab_pane_cp5_srt_ParamLimits

0xb2b8,	// (0x000423b9) bg_active_tab_pane_cp5_srt

0xc2b4,	// (0x000433b5) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc2b4,	// (0x000433b5) tabs_3_long_active_pane_srt_t1

0xf2e7,	// (0x000463e8) bg_active_tab_pane_g1_cp5_srt

0xf15c,	// (0x0004625d) bg_active_tab_pane_g2_cp5_srt

0xf2f0,	// (0x000463f1) bg_active_tab_pane_g3_cp5_srt

0x3877,	// (0x0003a978) navi_text_pane_srt_t1

0x386f,	// (0x0003a970) navi_icon_pane_srt_g1

0x182e,	// (0x0003892f) midp_editing_number_pane_srt

0x1672,	// (0x00038773) midp_ticker_pane_srt

0x1836,	// (0x00038937) midp_ticker_pane_srt_g1

0x183e,	// (0x0003893f) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x00046879) midp_ticker_pane_srt_g

0x1846,	// (0x00038947) midp_ticker_pane_srt_t1

0x3860,	// (0x0003a961) midp_editing_number_pane_t1_copy1

0x19ec,	// (0x00038aed) listscroll_midp_pane

0x19ec,	// (0x00038aed) midp_form_pane

0x16dc,	// (0x000387dd) midp_info_popup_window_ParamLimits

0x16dc,	// (0x000387dd) midp_info_popup_window

0xb979,	// (0x00042a7a) bg_popup_sub_pane_cp50_ParamLimits

0xb979,	// (0x00042a7a) bg_popup_sub_pane_cp50

0x2955,	// (0x00039a56) listscroll_midp_info_pane_ParamLimits

0x2955,	// (0x00039a56) listscroll_midp_info_pane

0x293d,	// (0x00039a3e) listscroll_form_midp_pane_ParamLimits

0x293d,	// (0x00039a3e) listscroll_form_midp_pane

0x2949,	// (0x00039a4a) scroll_bar_cp050

0xc022,	// (0x00043123) list_midp_pane

0x4668,	// (0x0003b769) signal_pane_g2_cp

0x2857,	// (0x00039958) listscroll_midp_info_pane_t1_ParamLimits

0x2857,	// (0x00039958) listscroll_midp_info_pane_t1

0x286f,	// (0x00039970) listscroll_midp_info_pane_t2_ParamLimits

0x286f,	// (0x00039970) listscroll_midp_info_pane_t2

0x28ad,	// (0x000399ae) listscroll_midp_info_pane_t3_ParamLimits

0x28ad,	// (0x000399ae) listscroll_midp_info_pane_t3

0x28e7,	// (0x000399e8) listscroll_midp_info_pane_t4_ParamLimits

0x28e7,	// (0x000399e8) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0004692c) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0004692c) listscroll_midp_info_pane_t

0xb9f9,	// (0x00042afa) scroll_pane_cp21

0x27f1,	// (0x000398f2) form_midp_field_choice_group_pane

0x27fa,	// (0x000398fb) form_midp_field_text_pane

0x283d,	// (0x0003993e) form_midp_field_time_pane

0x2845,	// (0x00039946) form_midp_gauge_slider_pane

0x284e,	// (0x0003994f) form_midp_gauge_wait_pane

0x84ca,	// (0x0003f5cb) form_midp_image_pane

0xa9a6,	// (0x00041aa7) list_single_midp_pane_ParamLimits

0xa9a6,	// (0x00041aa7) list_single_midp_pane

0xbffa,	// (0x000430fb) form_midp_field_text_pane_t1

0x25a1,	// (0x000396a2) input_focus_pane_cp050

0x27e0,	// (0x000398e1) list_midp_form_text_pane

0x2784,	// (0x00039885) form_midp_field_choice_group_pane_t1

0x2792,	// (0x00039893) input_focus_pane_cp051

0x27a6,	// (0x000398a7) list_midp_choice_pane

0x84ca,	// (0x0003f5cb) status_idle_pane

0x2768,	// (0x00039869) form_midp_field_time_pane_t1

0x84c0,	// (0x0003f5c1) wait_anim_pane_g2_copy1

0x2776,	// (0x00039877) form_midp_field_time_pane_t2

0x0001,

0x178c,	// (0x0003888d) aid_navinavi_width_2_pane

0xf826,	// (0x00046927) form_midp_field_time_pane_t

0x84ca,	// (0x0003f5cb) input_focus_pane_cp052

0x84ca,	// (0x0003f5cb) bg_input_focus_pane_cp040

0x2728,	// (0x00039829) form_midp_gauge_slider_pane_t1

0x2736,	// (0x00039837) form_midp_gauge_slider_pane_t2

0xbfde,	// (0x000430df) form_midp_gauge_slider_pane_t3

0xbfec,	// (0x000430ed) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0004691e) form_midp_gauge_slider_pane_t

0x2760,	// (0x00039861) form_midp_slider_pane

0xb2b8,	// (0x000423b9) bg_input_focus_pane_cp041_ParamLimits

0xb2b8,	// (0x000423b9) bg_input_focus_pane_cp041

0x26f5,	// (0x000397f6) form_midp_gauge_wait_pane_t1_ParamLimits

0x26f5,	// (0x000397f6) form_midp_gauge_wait_pane_t1

0x2707,	// (0x00039808) form_midp_gauge_wait_pane_t2_ParamLimits

0x2707,	// (0x00039808) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x00046919) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x00046919) form_midp_gauge_wait_pane_t

0x2719,	// (0x0003981a) form_midp_wait_pane_ParamLimits

0x2719,	// (0x0003981a) form_midp_wait_pane

0x26bd,	// (0x000397be) form_midp_image_pane_g1

0x26c6,	// (0x000397c7) form_midp_image_pane_t1

0x26d5,	// (0x000397d6) form_midp_image_pane_t2

0x26e4,	// (0x000397e5) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x00046912) form_midp_image_pane_t

0x26b4,	// (0x000397b5) list_single_midp_pane_g1

0xd2c1,	// (0x000443c2) list_single_midp_pane_t1

0xbfc7,	// (0x000430c8) list_midp_form_item_pane_ParamLimits

0xbfc7,	// (0x000430c8) list_midp_form_item_pane

0x1734,	// (0x00038835) list_midp_form_item_pane_t1

0x1743,	// (0x00038844) midp_ticker_pane_g1

0x174f,	// (0x00038850) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0004685f) midp_ticker_pane_g

0x9f4b,	// (0x0004104c) midp_ticker_pane_t1

0xc459,	// (0x0004355a) midp_editing_number_pane_t1

0x3ab1,	// (0x0003abb2) midp_editing_number_pane

0x3ac0,	// (0x0003abc1) midp_ticker_pane

0x3850,	// (0x0003a951) ai_message_heading_pane

0x84ca,	// (0x0003f5cb) bg_popup_window_pane_cp14

0x3858,	// (0x0003a959) listscroll_ai_message_pane

0x37d6,	// (0x0003a8d7) ai_message_heading_pane_g1_ParamLimits

0x37d6,	// (0x0003a8d7) ai_message_heading_pane_g1

0x37e2,	// (0x0003a8e3) ai_message_heading_pane_g2_ParamLimits

0x37e2,	// (0x0003a8e3) ai_message_heading_pane_g2

0x37f0,	// (0x0003a8f1) ai_message_heading_pane_g3_ParamLimits

0x37f0,	// (0x0003a8f1) ai_message_heading_pane_g3

0x37fc,	// (0x0003a8fd) ai_message_heading_pane_g4_ParamLimits

0x37fc,	// (0x0003a8fd) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x00046a53) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x00046a53) ai_message_heading_pane_g

0x3808,	// (0x0003a909) ai_message_heading_pane_t1_ParamLimits

0x3808,	// (0x0003a909) ai_message_heading_pane_t1

0x3822,	// (0x0003a923) ai_message_heading_pane_t2_ParamLimits

0x3822,	// (0x0003a923) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x00046a5c) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x00046a5c) ai_message_heading_pane_t

0x3836,	// (0x0003a937) bg_popup_heading_pane_cp1_ParamLimits

0x3836,	// (0x0003a937) bg_popup_heading_pane_cp1

0x37c4,	// (0x0003a8c5) list_ai_message_pane_ParamLimits

0x37c4,	// (0x0003a8c5) list_ai_message_pane

0xb9f9,	// (0x00042afa) scroll_pane_cp10

0x3760,	// (0x0003a861) list_ai_message_pane_g1

0x3768,	// (0x0003a869) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x00046a30) list_ai_message_pane_g

0x3770,	// (0x0003a871) list_ai_message_pane_t1_ParamLimits

0x3770,	// (0x0003a871) list_ai_message_pane_t1

0x3785,	// (0x0003a886) list_ai_message_pane_t2_ParamLimits

0x3785,	// (0x0003a886) list_ai_message_pane_t2

0x379a,	// (0x0003a89b) list_ai_message_pane_t3_ParamLimits

0x379a,	// (0x0003a89b) list_ai_message_pane_t3

0x37af,	// (0x0003a8b0) list_ai_message_pane_t4_ParamLimits

0x37af,	// (0x0003a8b0) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x00046a35) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x00046a35) list_ai_message_pane_t

0xc29a,	// (0x0004339b) cell_ai_soft_ind_pane_ParamLimits

0xc29a,	// (0x0004339b) cell_ai_soft_ind_pane

0x176d,	// (0x0003886e) cell_ai_soft_ind_pane_g1_ParamLimits

0x176d,	// (0x0003886e) cell_ai_soft_ind_pane_g1

0x84ca,	// (0x0003f5cb) grid_highlight_cp1

0x177a,	// (0x0003887b) text_secondary_cp56_ParamLimits

0x177a,	// (0x0003887b) text_secondary_cp56

0x371e,	// (0x0003a81f) example_general_pane_ParamLimits

0x371e,	// (0x0003a81f) example_general_pane

0x372a,	// (0x0003a82b) example_parent_pane_g1_ParamLimits

0x372a,	// (0x0003a82b) example_parent_pane_g1

0x3736,	// (0x0003a837) example_parent_pane_t1_ParamLimits

0x3736,	// (0x0003a837) example_parent_pane_t1

0xa530,	// (0x00041631) popup_preview_text_window_ParamLimits

0xa530,	// (0x00041631) popup_preview_text_window

0xf488,	// (0x00046589) list_single_pane_cp2_g4

0xb493,	// (0x00042594) bg_popup_preview_window_pane_ParamLimits

0xb493,	// (0x00042594) bg_popup_preview_window_pane

0x3451,	// (0x0003a552) popup_preview_text_window_t1_ParamLimits

0x3451,	// (0x0003a552) popup_preview_text_window_t1

0x346f,	// (0x0003a570) popup_preview_text_window_t2_ParamLimits

0x346f,	// (0x0003a570) popup_preview_text_window_t2

0x34b8,	// (0x0003a5b9) popup_preview_text_window_t3_ParamLimits

0x34b8,	// (0x0003a5b9) popup_preview_text_window_t3

0x34fd,	// (0x0003a5fe) popup_preview_text_window_t4_ParamLimits

0x34fd,	// (0x0003a5fe) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x00046a04) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x00046a04) popup_preview_text_window_t

0x357b,	// (0x0003a67c) scroll_pane_cp11

0x252d,	// (0x0003962e) bg_popup_preview_window_pane_g1

0x3405,	// (0x0003a506) bg_popup_preview_window_pane_g2

0x340f,	// (0x0003a510) bg_popup_preview_window_pane_g3

0x3419,	// (0x0003a51a) bg_popup_preview_window_pane_g4

0x3423,	// (0x0003a524) bg_popup_preview_window_pane_g5

0x342d,	// (0x0003a52e) bg_popup_preview_window_pane_g6

0x3435,	// (0x0003a536) bg_popup_preview_window_pane_g7

0x343d,	// (0x0003a53e) bg_popup_preview_window_pane_g8

0xe854,	// (0x00045955) aid_popup_width_pane

0xa4a0,	// (0x000415a1) popup_midp_note_alarm_window_ParamLimits

0xa4a0,	// (0x000415a1) popup_midp_note_alarm_window

0xb8c1,	// (0x000429c2) data_form_pane_ParamLimits

0x99b7,	// (0x00040ab8) form_field_data_pane_g1

0x99c1,	// (0x00040ac2) form_field_data_pane_t1_ParamLimits

0xb8cd,	// (0x000429ce) input_focus_pane_ParamLimits

0xcf7e,	// (0x0004407f) data_form_wide_pane_ParamLimits

0xcf8f,	// (0x00044090) form_field_data_wide_pane_g1

0xcf9b,	// (0x0004409c) form_field_data_wide_pane_t1_ParamLimits

0xb648,	// (0x00042749) input_focus_pane_cp6_ParamLimits

0x9aef,	// (0x00040bf0) input_popup_find_pane_g1_ParamLimits

0x9aef,	// (0x00040bf0) input_popup_find_pane_g1

0xee55,	// (0x00045f56) aid_navi_side_left_pane

0xee6a,	// (0x00045f6b) aid_navi_side_right_pane

0x2e1a,	// (0x00039f1b) bg_popup_window_pane_cp30_ParamLimits

0x2e1a,	// (0x00039f1b) bg_popup_window_pane_cp30

0x2e94,	// (0x00039f95) popup_midp_note_alarm_window_g1_ParamLimits

0x2e94,	// (0x00039f95) popup_midp_note_alarm_window_g1

0x2ec4,	// (0x00039fc5) popup_midp_note_alarm_window_t1_ParamLimits

0x2ec4,	// (0x00039fc5) popup_midp_note_alarm_window_t1

0x2f65,	// (0x0003a066) popup_midp_note_alarm_window_t2_ParamLimits

0x2f65,	// (0x0003a066) popup_midp_note_alarm_window_t2

0x3013,	// (0x0003a114) popup_midp_note_alarm_window_t3_ParamLimits

0x3013,	// (0x0003a114) popup_midp_note_alarm_window_t3

0x3045,	// (0x0003a146) popup_midp_note_alarm_window_t4_ParamLimits

0x3045,	// (0x0003a146) popup_midp_note_alarm_window_t4

0x306b,	// (0x0003a16c) popup_midp_note_alarm_window_t5_ParamLimits

0x306b,	// (0x0003a16c) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x000469a1) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x000469a1) popup_midp_note_alarm_window_t

0x3117,	// (0x0003a218) wait_bar_pane_cp1_ParamLimits

0x3117,	// (0x0003a218) wait_bar_pane_cp1

0x84ca,	// (0x0003f5cb) wait_anim_pane_copy1

0x84ca,	// (0x0003f5cb) wait_border_pane_copy1

0x2aff,	// (0x00039c00) wait_border_pane_g1_copy1

0xcfb5,	// (0x000440b6) form_field_popup_pane_g1

0x99db,	// (0x00040adc) form_field_popup_pane_t1_ParamLimits

0xb8cd,	// (0x000429ce) input_focus_pane_cp7_ParamLimits

0xb8fb,	// (0x000429fc) list_form_pane_ParamLimits

0xcfbd,	// (0x000440be) form_field_popup_wide_pane_g1

0xcfc5,	// (0x000440c6) form_field_popup_wide_pane_t1_ParamLimits

0xb8cd,	// (0x000429ce) input_focus_pane_cp8_ParamLimits

0xb907,	// (0x00042a08) list_form_wide_pane_ParamLimits

0x3c5a,	// (0x0003ad5b) aid_size_cell_graphic_pane

0x9a5a,	// (0x00040b5b) data_form_pane_t1_ParamLimits

0xab3f,	// (0x00041c40) data_form_wide_pane_t1_ParamLimits

0xbc50,	// (0x00042d51) bg_status_flat_pane

0x9179,	// (0x0004027a) title_pane_t1_ParamLimits

0x84ec,	// (0x0003f5ed) title_pane_t2_ParamLimits

0x8512,	// (0x0003f613) title_pane_t3_ParamLimits

0xf55d,	// (0x0004665e) title_pane_t_ParamLimits

0x9c03,	// (0x00040d04) level_1_signal_ParamLimits

0x9c15,	// (0x00040d16) level_2_signal_ParamLimits

0x9c28,	// (0x00040d29) level_3_signal_ParamLimits

0x9c3b,	// (0x00040d3c) level_4_signal_ParamLimits

0x9c4e,	// (0x00040d4f) level_5_signal_ParamLimits

0x9c61,	// (0x00040d62) level_6_signal_ParamLimits

0x9c74,	// (0x00040d75) level_7_signal_ParamLimits

0x9c03,	// (0x00040d04) level_1_battery_ParamLimits

0x9c15,	// (0x00040d16) level_2_battery_ParamLimits

0x9c28,	// (0x00040d29) level_3_battery_ParamLimits

0x9c3b,	// (0x00040d3c) level_4_battery_ParamLimits

0x9c4e,	// (0x00040d4f) level_5_battery_ParamLimits

0x9c61,	// (0x00040d62) level_6_battery_ParamLimits

0x9c74,	// (0x00040d75) level_7_battery_ParamLimits

0x2d1f,	// (0x00039e20) bg_status_flat_pane_g1

0x2d27,	// (0x00039e28) bg_status_flat_pane_g2

0x2d2f,	// (0x00039e30) bg_status_flat_pane_g3

0x2d37,	// (0x00039e38) bg_status_flat_pane_g4

0x2d3f,	// (0x00039e40) bg_status_flat_pane_g5

0x2d47,	// (0x00039e48) bg_status_flat_pane_g6

0x2d4f,	// (0x00039e50) bg_status_flat_pane_g7

0x920d,	// (0x0004030e) tabs_3_active_pane_t1_ParamLimits

0x920d,	// (0x0004030e) tabs_3_passive_pane_t1_ParamLimits

0x9227,	// (0x00040328) tabs_4_active_pane_t1_ParamLimits

0x9227,	// (0x00040328) tabs_4_1_passive_pane_t1_ParamLimits

0x9b05,	// (0x00040c06) tabs_2_active_pane_t1_ParamLimits

0x9b05,	// (0x00040c06) tabs_2_passive_pane_t1_ParamLimits

0xb2b8,	// (0x000423b9) bg_active_tab_pane_cp4_ParamLimits

0x9b17,	// (0x00040c18) tabs_2_long_active_pane_t1_ParamLimits

0x19ec,	// (0x00038aed) bg_passive_tab_pane_cp4_ParamLimits

0x0104,	// (0x00037205) list_single_midp_graphic_pane_t1_ParamLimits

0xb2b8,	// (0x000423b9) bg_active_tab_pane_cp5_ParamLimits

0x9b2a,	// (0x00040c2b) tabs_3_long_active_pane_t1_ParamLimits

0x19ec,	// (0x00038aed) bg_passive_tab_pane_cp5_ParamLimits

0x0104,	// (0x00037205) list_single_midp_graphic_pane_t1

0xbc50,	// (0x00042d51) bg_status_flat_pane_ParamLimits

0x21a5,	// (0x000392a6) indicator_pane_cp2_ParamLimits

0x21a5,	// (0x000392a6) indicator_pane_cp2

0xbde6,	// (0x00042ee7) navi_pane_srt_ParamLimits

0xbde6,	// (0x00042ee7) navi_pane_srt

0x230c,	// (0x0003940d) popup_clock_digital_analogue_window_cp1

0xb2fc,	// (0x000423fd) indicator_pane_t1

0x1672,	// (0x00038773) copy_highlight_pane

0x1672,	// (0x00038773) cursor_graphics_pane

0x1672,	// (0x00038773) graphic_within_text_pane

0x1672,	// (0x00038773) link_highlight_pane

0x353e,	// (0x0003a63f) popup_preview_text_window_t5_ParamLimits

0x353e,	// (0x0003a63f) popup_preview_text_window_t5

0x1796,	// (0x00038897) cursor_digital_pane

0x1796,	// (0x00038897) cursor_primary_pane

0x17a7,	// (0x000388a8) cursor_primary_small_pane

0x17af,	// (0x000388b0) cursor_secondary_pane

0x17b7,	// (0x000388b8) cursor_title_pane

0x1796,	// (0x00038897) link_highlight_digital_pane

0x179e,	// (0x0003889f) link_highlight_primary_pane

0x17a7,	// (0x000388a8) link_highlight_primary_small_pane

0x17af,	// (0x000388b0) link_highlight_secondary_pane

0x17b7,	// (0x000388b8) link_highlight_title_pane

0x1796,	// (0x00038897) copy_highlight_digital_pane

0x1796,	// (0x00038897) copy_highlight_primary_pane

0x17a7,	// (0x000388a8) copy_highlight_primary_small_pane

0x17af,	// (0x000388b0) copy_highlight_secondary_pane

0x17b7,	// (0x000388b8) copy_highlight_title_pane

0x17af,	// (0x000388b0) graphic_text_digital_pane

0x2dbd,	// (0x00039ebe) graphic_text_primary_pane

0x2dc6,	// (0x00039ec7) graphic_text_primary_small_pane

0x17a7,	// (0x000388a8) graphic_text_secondary_pane

0x1796,	// (0x00038897) graphic_text_title_pane

0x9f5d,	// (0x0004105e) cursor_primary_pane_g1

0x2daf,	// (0x00039eb0) cursor_text_primary_t1

0xc05e,	// (0x0004315f) cursor_primary_small_pane_g1

0x2da1,	// (0x00039ea2) cursor_text_primary_small_t1

0xc054,	// (0x00043155) cursor_primary_small_pane_g1_copy1

0x2d89,	// (0x00039e8a) cursor_text_primary_small_t1_copy1

0x2d67,	// (0x00039e68) cursor_text_title_t1

0xc04a,	// (0x0004314b) cursor_title_pane_g1

0x9f5d,	// (0x0004105e) cursor_digital_pane_g1

0x17c9,	// (0x000388ca) cursor_text_digital_t1

0x17d7,	// (0x000388d8) link_highlight_primary_pane_g1

0x2d10,	// (0x00039e11) link_highlight_primary_pane_t1

0x17d7,	// (0x000388d8) link_highlight_primary_small_pane_g1

0x17df,	// (0x000388e0) link_highlight_primary_small_pane_t1

0x17ee,	// (0x000388ef) link_highlight_secondary_pane_g1

0x17f6,	// (0x000388f7) link_highlight_secondary_pane_t1

0x2c84,	// (0x00039d85) link_highlight_title_pane_g1

0x2c8c,	// (0x00039d8d) link_highlight_title_pane_t1

0x2c6d,	// (0x00039d6e) link_highlight_digital_pane_g1

0x2c75,	// (0x00039d76) link_highlight_digital_pane_t1

0x2b35,	// (0x00039c36) copy_highlight_primary_pane_g1

0x2b4c,	// (0x00039c4d) copy_highlight_primary_pane_t1

0x2b35,	// (0x00039c36) copy_highlight_primary_small_pane_g1

0x2b3d,	// (0x00039c3e) copy_highlight_primary_small_pane_t1

0x1805,	// (0x00038906) copy_highlight_secondary_pane_g1

0x180d,	// (0x0003890e) copy_highlight_secondary_pane_t1

0x2b1e,	// (0x00039c1f) copy_highlight_title_pane_g1

0x2b26,	// (0x00039c27) copy_highlight_title_pane_t1

0x2b35,	// (0x00039c36) copy_highlight_digital_pane_g1

0x3e2a,	// (0x0003af2b) copy_highlight_digital_pane_t1

0x3d7e,	// (0x0003ae7f) graphic_text_primary_pane_g1

0x3e0e,	// (0x0003af0f) graphic_text_primary_pane_t1

0x3e1c,	// (0x0003af1d) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x00046ad0) graphic_text_primary_pane_t

0x3dea,	// (0x0003aeeb) graphic_text_primary_small_pane_g1

0x3df2,	// (0x0003aef3) graphic_text_primary_small_pane_t1

0x3e00,	// (0x0003af01) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x00046acb) graphic_text_primary_small_pane_t

0x3dc6,	// (0x0003aec7) graphic_text_secondary_pane_g1

0x3dce,	// (0x0003aecf) graphic_text_secondary_pane_t1

0x3ddc,	// (0x0003aedd) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x00046ac6) graphic_text_secondary_pane_t

0x3da2,	// (0x0003aea3) graphic_text_title_pane_g1

0x3daa,	// (0x0003aeab) graphic_text_title_pane_t1

0x3db8,	// (0x0003aeb9) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x00046ac1) graphic_text_title_pane_t

0x3d7e,	// (0x0003ae7f) graphic_text_digital_pane_g1

0x3d86,	// (0x0003ae87) graphic_text_digital_pane_t1

0x3d94,	// (0x0003ae95) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x00046abc) graphic_text_digital_pane_t

0xb2b8,	// (0x000423b9) navi_icon_pane_srt_ParamLimits

0xb2b8,	// (0x000423b9) navi_icon_pane_srt

0x84ca,	// (0x0003f5cb) navi_midp_pane_srt

0x84ca,	// (0x0003f5cb) navi_navi_pane_srt

0xb2b8,	// (0x000423b9) navi_text_pane_srt_ParamLimits

0xb2b8,	// (0x000423b9) navi_text_pane_srt

0x3d49,	// (0x0003ae4a) navi_navi_icon_text_pane_srt

0x3d51,	// (0x0003ae52) navi_navi_pane_srt_g1_ParamLimits

0x3d51,	// (0x0003ae52) navi_navi_pane_srt_g1

0x3d63,	// (0x0003ae64) navi_navi_pane_srt_g2_ParamLimits

0x3d63,	// (0x0003ae64) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x00046ab7) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x00046ab7) navi_navi_pane_srt_g

0x3d75,	// (0x0003ae76) navi_navi_tabs_pane_srt

0x3d49,	// (0x0003ae4a) navi_navi_text_pane_srt

0x3d49,	// (0x0003ae4a) navi_navi_volume_pane_srt

0x3d3a,	// (0x0003ae3b) navi_navi_text_pane_srt_t1

0x0574,	// (0x00037675) navi_navi_volume_pane_srt_g1

0x057c,	// (0x0003767d) volume_small_pane_srt_ParamLimits

0x057c,	// (0x0003767d) volume_small_pane_srt

0xf49c,	// (0x0004659d) volume_small_pane_srt_g1_ParamLimits

0xf49c,	// (0x0004659d) volume_small_pane_srt_g1

0xf4ac,	// (0x000465ad) volume_small_pane_srt_g2_ParamLimits

0xf4ac,	// (0x000465ad) volume_small_pane_srt_g2

0xf4bd,	// (0x000465be) volume_small_pane_srt_g3_ParamLimits

0xf4bd,	// (0x000465be) volume_small_pane_srt_g3

0xf4ce,	// (0x000465cf) volume_small_pane_srt_g4_ParamLimits

0xf4ce,	// (0x000465cf) volume_small_pane_srt_g4

0xf4df,	// (0x000465e0) volume_small_pane_srt_g5_ParamLimits

0xf4df,	// (0x000465e0) volume_small_pane_srt_g5

0xf4f0,	// (0x000465f1) volume_small_pane_srt_g6_ParamLimits

0xf4f0,	// (0x000465f1) volume_small_pane_srt_g6

0xf501,	// (0x00046602) volume_small_pane_srt_g7_ParamLimits

0xf501,	// (0x00046602) volume_small_pane_srt_g7

0xf512,	// (0x00046613) volume_small_pane_srt_g8_ParamLimits

0xf512,	// (0x00046613) volume_small_pane_srt_g8

0xf523,	// (0x00046624) volume_small_pane_srt_g9_ParamLimits

0xf523,	// (0x00046624) volume_small_pane_srt_g9

0xf534,	// (0x00046635) volume_small_pane_srt_g10_ParamLimits

0xf534,	// (0x00046635) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00046864) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00046864) volume_small_pane_srt_g

0xb548,	// (0x00042649) query_popup_data_pane_cp2

0x3d20,	// (0x0003ae21) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3d20,	// (0x0003ae21) navi_navi_icon_text_pane_srt_t1

0x2dbd,	// (0x00039ebe) navi_tabs_2_long_pane_srt

0x2dbd,	// (0x00039ebe) navi_tabs_2_pane_srt

0x2dbd,	// (0x00039ebe) navi_tabs_3_long_pane_srt

0x2dbd,	// (0x00039ebe) navi_tabs_3_pane_srt

0x2dbd,	// (0x00039ebe) navi_tabs_4_pane_srt

0x0554,	// (0x00037655) tabs_2_active_pane_srt_ParamLimits

0x0554,	// (0x00037655) tabs_2_active_pane_srt

0x0564,	// (0x00037665) tabs_2_passive_pane_srt_ParamLimits

0x0564,	// (0x00037665) tabs_2_passive_pane_srt

0x25a1,	// (0x000396a2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x25a1,	// (0x000396a2) bg_passive_tab_pane_cp1_srt

0x3cec,	// (0x0003aded) bg_passive_tab_pane_g1_cp1_srt

0xf15c,	// (0x0004625d) bg_passive_tab_pane_g2_cp1_srt

0x3cf5,	// (0x0003adf6) bg_passive_tab_pane_g3_cp1_srt

0x8524,	// (0x0003f625) bg_active_tab_pane_cp1_srt_ParamLimits

0x8524,	// (0x0003f625) bg_active_tab_pane_cp1_srt

0x3cfe,	// (0x0003adff) tabs_2_active_pane_srt_g1

0xc56d,	// (0x0004366e) tabs_2_active_pane_srt_t1_ParamLimits

0xc56d,	// (0x0004366e) tabs_2_active_pane_srt_t1

0x3cec,	// (0x0003aded) bg_active_tab_pane_g1_cp1_srt

0xf15c,	// (0x0004625d) bg_active_tab_pane_g2_cp1_srt

0x3cf5,	// (0x0003adf6) bg_active_tab_pane_g3_cp1_srt

0x0521,	// (0x00037622) tabs_3_active_pane_srt_ParamLimits

0x0521,	// (0x00037622) tabs_3_active_pane_srt

0x0532,	// (0x00037633) tabs_3_passive_pane_cp_srt_ParamLimits

0x0532,	// (0x00037633) tabs_3_passive_pane_cp_srt

0x0543,	// (0x00037644) tabs_3_passive_pane_srt_ParamLimits

0x0543,	// (0x00037644) tabs_3_passive_pane_srt

0x25a1,	// (0x000396a2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x25a1,	// (0x000396a2) bg_passive_tab_pane_cp2_srt

0x181c,	// (0x0003891d) bg_passive_tab_pane_g1_cp2_srt

0xf15c,	// (0x0004625d) bg_passive_tab_pane_g2_cp2_srt

0x1825,	// (0x00038926) bg_passive_tab_pane_g3_cp2_srt

0x8524,	// (0x0003f625) bg_active_tab_pane_cp2_srt_ParamLimits

0x8524,	// (0x0003f625) bg_active_tab_pane_cp2_srt

0x3cd2,	// (0x0003add3) tabs_3_active_pane_srt_g1

0xc557,	// (0x00043658) tabs_3_active_pane_srt_t1_ParamLimits

0xc557,	// (0x00043658) tabs_3_active_pane_srt_t1

0x181c,	// (0x0003891d) bg_active_tab_pane_g1_cp2_srt

0xf15c,	// (0x0004625d) bg_active_tab_pane_g2_cp2_srt

0x1825,	// (0x00038926) bg_active_tab_pane_g3_cp2_srt

0x04d9,	// (0x000375da) tabs_4_active_pane_srt_ParamLimits

0x04d9,	// (0x000375da) tabs_4_active_pane_srt

0x04eb,	// (0x000375ec) tabs_4_passive_pane_cp2_srt_ParamLimits

0x04eb,	// (0x000375ec) tabs_4_passive_pane_cp2_srt

0x197a,	// (0x00038a7b) aid_size_cell_toolbar

0x390a,	// (0x0003aa0b) main_idle_act_pane_ParamLimits

0x1bb5,	// (0x00038cb6) popup_large_graphic_colour_window_ParamLimits

0xa7f6,	// (0x000418f7) popup_toolbar_window_ParamLimits

0xa7f6,	// (0x000418f7) popup_toolbar_window

0xd2e6,	// (0x000443e7) list_single_graphic_2heading_pane_ParamLimits

0xd2e6,	// (0x000443e7) list_single_graphic_2heading_pane

0xbbd1,	// (0x00042cd2) aid_size_cell_apps_grid_lsc_pane

0xbbe3,	// (0x00042ce4) aid_size_cell_apps_grid_prt_pane

0x19ec,	// (0x00038aed) bg_wml_button_pane_cp1_ParamLimits

0x19ec,	// (0x00038aed) bg_wml_button_pane_cp1

0xbffa,	// (0x000430fb) form_midp_field_text_pane_t1_ParamLimits

0x25a1,	// (0x000396a2) input_focus_pane_cp050_ParamLimits

0x27e0,	// (0x000398e1) list_midp_form_text_pane_ParamLimits

0x2792,	// (0x00039893) input_focus_pane_cp051_ParamLimits

0x27a6,	// (0x000398a7) list_midp_choice_pane_ParamLimits

0xbfb1,	// (0x000430b2) list_single_2graphic_pane_cp3_ParamLimits

0xbfb1,	// (0x000430b2) list_single_2graphic_pane_cp3

0x498b,	// (0x0003ba8c) list_single_midp_graphic_pane_ParamLimits

0x498b,	// (0x0003ba8c) list_single_midp_graphic_pane

0xeb15,	// (0x00045c16) list_single_graphic_2heading_pane_g1_ParamLimits

0xeb15,	// (0x00045c16) list_single_graphic_2heading_pane_g1

0xeb21,	// (0x00045c22) list_single_graphic_2heading_pane_g4_ParamLimits

0xeb21,	// (0x00045c22) list_single_graphic_2heading_pane_g4

0xeb2d,	// (0x00045c2e) list_single_graphic_2heading_pane_g5_ParamLimits

0xeb2d,	// (0x00045c2e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x000468b7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x000468b7) list_single_graphic_2heading_pane_g

0xeb39,	// (0x00045c3a) list_single_graphic_2heading_pane_t1_ParamLimits

0xeb39,	// (0x00045c3a) list_single_graphic_2heading_pane_t1

0xeb4d,	// (0x00045c4e) list_single_graphic_2heading_pane_t2_ParamLimits

0xeb4d,	// (0x00045c4e) list_single_graphic_2heading_pane_t2

0xeb69,	// (0x00045c6a) list_single_graphic_2heading_pane_t3_ParamLimits

0xeb69,	// (0x00045c6a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x000468be) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x000468be) list_single_graphic_2heading_pane_t

0x246b,	// (0x0003956c) bg_popup_sub_pane_cp2

0x2495,	// (0x00039596) grid_toobar_pane

0x0074,	// (0x00037175) cell_toolbar_pane_ParamLimits

0x0074,	// (0x00037175) cell_toolbar_pane

0x24d1,	// (0x000395d2) cell_toolbar_pane_g1_ParamLimits

0x24d1,	// (0x000395d2) cell_toolbar_pane_g1

0x24e5,	// (0x000395e6) cell_toolbar_pane_g2_ParamLimits

0x24e5,	// (0x000395e6) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x000468cc) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x000468cc) cell_toolbar_pane_g

0x2507,	// (0x00039608) grid_highlight_pane_cp2_ParamLimits

0x2507,	// (0x00039608) grid_highlight_pane_cp2

0x2521,	// (0x00039622) toolbar_button_pane

0x252d,	// (0x0003962e) toolbar_button_pane_g1

0x2535,	// (0x00039636) toolbar_button_pane_g2

0x253d,	// (0x0003963e) toolbar_button_pane_g3

0x2545,	// (0x00039646) toolbar_button_pane_g4

0x254d,	// (0x0003964e) toolbar_button_pane_g5

0x2555,	// (0x00039656) toolbar_button_pane_g6

0x255d,	// (0x0003965e) toolbar_button_pane_g7

0x2565,	// (0x00039666) toolbar_button_pane_g8

0x256d,	// (0x0003966e) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x000468d1) toolbar_button_pane_g

0x00ac,	// (0x000371ad) list_single_2graphic_pane_g1_cp3_ParamLimits

0x00ac,	// (0x000371ad) list_single_2graphic_pane_g1_cp3

0xa934,	// (0x00041a35) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa934,	// (0x00041a35) list_single_2graphic_pane_g2_cp3

0x00c9,	// (0x000371ca) list_single_2graphic_pane_g3_cp3

0x00d1,	// (0x000371d2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x00d1,	// (0x000371d2) list_single_2graphic_pane_g4_cp3

0x00dd,	// (0x000371de) list_single_2graphic_pane_t1_cp3_ParamLimits

0x00dd,	// (0x000371de) list_single_2graphic_pane_t1_cp3

0x00f8,	// (0x000371f9) list_single_midp_graphic_pane_g2_ParamLimits

0x00f8,	// (0x000371f9) list_single_midp_graphic_pane_g2

0x1982,	// (0x00038a83) aid_zoom_text_primary

0xd1d1,	// (0x000442d2) aid_zoom_text_secondary

0x18d9,	// (0x000389da) status_small_pane_g7_ParamLimits

0x18d9,	// (0x000389da) status_small_pane_g7

0x18fc,	// (0x000389fd) status_small_pane_t1_ParamLimits

0x9161,	// (0x00040262) title_pane_g2

0x0003,

0xf554,	// (0x00046655) title_pane_g

0x93ed,	// (0x000404ee) aid_size_cell_colour_1_pane_ParamLimits

0x93ed,	// (0x000404ee) aid_size_cell_colour_1_pane

0x9401,	// (0x00040502) aid_size_cell_colour_2_pane_ParamLimits

0x9401,	// (0x00040502) aid_size_cell_colour_2_pane

0x9415,	// (0x00040516) aid_size_cell_colour_3_pane_ParamLimits

0x9415,	// (0x00040516) aid_size_cell_colour_3_pane

0x9429,	// (0x0004052a) aid_size_cell_colour_4_pane_ParamLimits

0x9429,	// (0x0004052a) aid_size_cell_colour_4_pane

0xed91,	// (0x00045e92) title_pane_stacon_g1_ParamLimits

0xed91,	// (0x00045e92) title_pane_stacon_g1

0x2ba3,	// (0x00039ca4) popup_note_wait_window_g3_ParamLimits

0x2ba3,	// (0x00039ca4) popup_note_wait_window_g3

0x2c1a,	// (0x00039d1b) popup_note_wait_window_t5_ParamLimits

0x2c1a,	// (0x00039d1b) popup_note_wait_window_t5

0x84ca,	// (0x0003f5cb) main_feb_china_hwr_fs_writing_pane

0xa18d,	// (0x0004128e) popup_feb_china_hwr_fs_window_ParamLimits

0xa18d,	// (0x0004128e) popup_feb_china_hwr_fs_window

0xa945,	// (0x00041a46) aid_size_cell_hwr_fs_ParamLimits

0xa945,	// (0x00041a46) aid_size_cell_hwr_fs

0x25a1,	// (0x000396a2) bg_popup_sub_pane_cp3_ParamLimits

0x25a1,	// (0x000396a2) bg_popup_sub_pane_cp3

0xa95a,	// (0x00041a5b) grid_hwr_fs_pane_ParamLimits

0xa95a,	// (0x00041a5b) grid_hwr_fs_pane

0x0147,	// (0x00037248) linegrid_hwr_fs_pane_ParamLimits

0x0147,	// (0x00037248) linegrid_hwr_fs_pane

0xa972,	// (0x00041a73) cell_hwr_fs_pane_ParamLimits

0xa972,	// (0x00041a73) cell_hwr_fs_pane

0x25ad,	// (0x000396ae) linegrid_hwr_fs_pane_g1_ParamLimits

0x25ad,	// (0x000396ae) linegrid_hwr_fs_pane_g1

0xbf85,	// (0x00043086) linegrid_hwr_fs_pane_g2_ParamLimits

0xbf85,	// (0x00043086) linegrid_hwr_fs_pane_g2

0x25cb,	// (0x000396cc) linegrid_hwr_fs_pane_g3_ParamLimits

0x25cb,	// (0x000396cc) linegrid_hwr_fs_pane_g3

0x017b,	// (0x0003727c) linegrid_hwr_fs_pane_g4_ParamLimits

0x017b,	// (0x0003727c) linegrid_hwr_fs_pane_g4

0x0199,	// (0x0003729a) linegrid_hwr_fs_pane_g5_ParamLimits

0x0199,	// (0x0003729a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x000468f7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x000468f7) linegrid_hwr_fs_pane_g

0x25d7,	// (0x000396d8) cell_hwr_fs_pane_g1_ParamLimits

0x25d7,	// (0x000396d8) cell_hwr_fs_pane_g1

0x23a2,	// (0x000394a3) cell_hwr_fs_pane_g2_ParamLimits

0x23a2,	// (0x000394a3) cell_hwr_fs_pane_g2

0xbf97,	// (0x00043098) cell_hwr_fs_pane_g3_ParamLimits

0xbf97,	// (0x00043098) cell_hwr_fs_pane_g3

0xbfa4,	// (0x000430a5) cell_hwr_fs_pane_g4_ParamLimits

0xbfa4,	// (0x000430a5) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00046902) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00046902) cell_hwr_fs_pane_g

0xa998,	// (0x00041a99) cell_hwr_fs_pane_t1

0x84ca,	// (0x0003f5cb) grid_highlight_pane_cp6

0x84ca,	// (0x0003f5cb) main_idle_act2_pane

0xb9e0,	// (0x00042ae1) aid_inside_area_popup_secondary

0xc0c5,	// (0x000431c6) aid_inside_area_window_primary_ParamLimits

0xc0c5,	// (0x000431c6) aid_inside_area_window_primary

0x3e39,	// (0x0003af3a) ai2_news_ticker_pane

0x3e41,	// (0x0003af42) aid_size_cell_ai1_link_ParamLimits

0x3e41,	// (0x0003af42) aid_size_cell_ai1_link

0x3e5b,	// (0x0003af5c) popup_ai2_data_window_ParamLimits

0x3e5b,	// (0x0003af5c) popup_ai2_data_window

0x3e79,	// (0x0003af7a) popup_ai2_link_window_ParamLimits

0x3e79,	// (0x0003af7a) popup_ai2_link_window

0x25a1,	// (0x000396a2) bg_popup_sub_pane_cp4_ParamLimits

0x25a1,	// (0x000396a2) bg_popup_sub_pane_cp4

0x3e8f,	// (0x0003af90) grid_ai2_link_pane_ParamLimits

0x3e8f,	// (0x0003af90) grid_ai2_link_pane

0x3ea6,	// (0x0003afa7) popup_ai2_link_window_g1_ParamLimits

0x3ea6,	// (0x0003afa7) popup_ai2_link_window_g1

0x3eb2,	// (0x0003afb3) popup_ai2_link_window_g2_ParamLimits

0x3eb2,	// (0x0003afb3) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x00046ad5) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x00046ad5) popup_ai2_link_window_g

0x3ec3,	// (0x0003afc4) ai2_mp_button_pane

0x3ecb,	// (0x0003afcc) ai2_mp_volume_pane

0x2792,	// (0x00039893) bg_popup_sub_pane_cp5_ParamLimits

0x2792,	// (0x00039893) bg_popup_sub_pane_cp5

0x3ed3,	// (0x0003afd4) heading_ai2_gene_pane_ParamLimits

0x3ed3,	// (0x0003afd4) heading_ai2_gene_pane

0x3edf,	// (0x0003afe0) list_ai2_gene_pane_ParamLimits

0x3edf,	// (0x0003afe0) list_ai2_gene_pane

0x3f27,	// (0x0003b028) cell_ai2_link_pane_ParamLimits

0x3f27,	// (0x0003b028) cell_ai2_link_pane

0x3f3d,	// (0x0003b03e) cell_ai2_link_pane_g1

0x84ca,	// (0x0003f5cb) grid_highlight_pane_cp7

0x0591,	// (0x00037692) ai2_mp_volume_pane_g1

0x4010,	// (0x0003b111) ai2_mp_volume_pane_g2

0x3f85,	// (0x0003b086) list_ai2_gene_pane_t1

0x4018,	// (0x0003b119) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x00046aee) ai2_mp_volume_pane_g

0x0599,	// (0x0003769a) volume_small_pane_cp3

0x4020,	// (0x0003b121) aid_size_cell_ai2_button

0x4028,	// (0x0003b129) grid_ai2_button_pane

0x4031,	// (0x0003b132) cell_ai2_button_pane_ParamLimits

0x4031,	// (0x0003b132) cell_ai2_button_pane

0x84c0,	// (0x0003f5c1) cell_ai2_button_pane_g1

0x84ca,	// (0x0003f5cb) grid_highlight_pane_cp8

0x3fd0,	// (0x0003b0d1) ai2_gene_pane_t1_ParamLimits

0x3fd0,	// (0x0003b0d1) ai2_gene_pane_t1

0xa0ef,	// (0x000411f0) aid_height_parent_landscape

0xc2e1,	// (0x000433e2) aid_height_set_list

0x390a,	// (0x0003aa0b) aid_size_parent

0x3c5a,	// (0x0003ad5b) aid_size_cell_graphic_pane_ParamLimits

0x3eef,	// (0x0003aff0) popup_ai2_data_window_g1_ParamLimits

0x3eef,	// (0x0003aff0) popup_ai2_data_window_g1

0x3efb,	// (0x0003affc) ai2_news_ticker_pane_g1

0x3f03,	// (0x0003b004) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x00046ada) ai2_news_ticker_pane_g

0x3f0b,	// (0x0003b00c) ai2_news_ticker_pane_t1

0x3f19,	// (0x0003b01a) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x00046adf) ai2_news_ticker_pane_t

0x3f46,	// (0x0003b047) heading_ai2_gene_pane_g1

0x3f4e,	// (0x0003b04f) heading_ai2_gene_pane_t1_ParamLimits

0x3f4e,	// (0x0003b04f) heading_ai2_gene_pane_t1

0x3f63,	// (0x0003b064) list_highlight_pane_cp6

0x3f6b,	// (0x0003b06c) ai2_gene_pane_ParamLimits

0x3f6b,	// (0x0003b06c) ai2_gene_pane

0x3f93,	// (0x0003b094) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x00046ae4) list_ai2_gene_pane_t

0x3fa1,	// (0x0003b0a2) list_highlight_pane_cp8_ParamLimits

0x3fa1,	// (0x0003b0a2) list_highlight_pane_cp8

0x3fb2,	// (0x0003b0b3) ai2_gene_pane_g1_ParamLimits

0x3fb2,	// (0x0003b0b3) ai2_gene_pane_g1

0x3fc4,	// (0x0003b0c5) ai2_gene_pane_g2_ParamLimits

0x3fc4,	// (0x0003b0c5) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x00046ae9) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x00046ae9) ai2_gene_pane_g

0xb863,	// (0x00042964) scroll_pane_cp12

0xa0ae,	// (0x000411af) control_pane_t3_ParamLimits

0xa0ae,	// (0x000411af) control_pane_t3

0x18ed,	// (0x000389ee) status_small_pane_g8_ParamLimits

0x18ed,	// (0x000389ee) status_small_pane_g8

0xa22f,	// (0x00041330) popup_find_window_ParamLimits

0xa4e0,	// (0x000415e1) popup_note_image_window_ParamLimits

0xcebd,	// (0x00043fbe) list_double2_graphic_pane_vc_g1_ParamLimits

0xcebd,	// (0x00043fbe) list_double2_graphic_pane_vc_g1

0xd1e1,	// (0x000442e2) list_double2_graphic_pane_vc_g2_ParamLimits

0xd1e1,	// (0x000442e2) list_double2_graphic_pane_vc_g2

0xd1ed,	// (0x000442ee) list_double2_graphic_pane_vc_g3_ParamLimits

0xd1ed,	// (0x000442ee) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x000468c5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x000468c5) list_double2_graphic_pane_vc_g

0xd1f9,	// (0x000442fa) list_double2_graphic_pane_vc_t1_ParamLimits

0xd1f9,	// (0x000442fa) list_double2_graphic_pane_vc_t1

0xce93,	// (0x00043f94) list_single_heading_pane_vc_g1_ParamLimits

0xce93,	// (0x00043f94) list_single_heading_pane_vc_g1

0xce9f,	// (0x00043fa0) list_single_heading_pane_vc_g2_ParamLimits

0xce9f,	// (0x00043fa0) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000466cf) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000466cf) list_single_heading_pane_vc_g

0xd20f,	// (0x00044310) list_single_heading_pane_vc_t1_ParamLimits

0xd20f,	// (0x00044310) list_single_heading_pane_vc_t1

0xd227,	// (0x00044328) list_single_heading_pane_vc_t2_ParamLimits

0xd227,	// (0x00044328) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x000468e6) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x000468e6) list_single_heading_pane_vc_t

0xd239,	// (0x0004433a) list_setting_number_pane_vc_g1_ParamLimits

0xd239,	// (0x0004433a) list_setting_number_pane_vc_g1

0xd245,	// (0x00044346) list_setting_number_pane_vc_g2_ParamLimits

0xd245,	// (0x00044346) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x000468eb) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x000468eb) list_setting_number_pane_vc_g

0xd251,	// (0x00044352) list_setting_number_pane_vc_t1_ParamLimits

0xd251,	// (0x00044352) list_setting_number_pane_vc_t1

0xd265,	// (0x00044366) list_setting_number_pane_vc_t2_ParamLimits

0xd265,	// (0x00044366) list_setting_number_pane_vc_t2

0xd281,	// (0x00044382) list_setting_number_pane_vc_t3_ParamLimits

0xd281,	// (0x00044382) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x000468f0) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x000468f0) list_setting_number_pane_vc_t

0xd2af,	// (0x000443b0) set_value_pane_vc_ParamLimits

0xd2af,	// (0x000443b0) set_value_pane_vc

0xd2e6,	// (0x000443e7) list_double2_graphic_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_double2_graphic_pane_vc

0x3ae2,	// (0x0003abe3) list_double2_large_graphic_pane_vc_ParamLimits

0x3ae2,	// (0x0003abe3) list_double2_large_graphic_pane_vc

0xd2e6,	// (0x000443e7) list_double2_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_double2_pane_vc

0xd2e6,	// (0x000443e7) list_double_graphic_heading_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_double_graphic_heading_pane_vc

0xd2e6,	// (0x000443e7) list_double_graphic_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_double_graphic_pane_vc

0xd2e6,	// (0x000443e7) list_double_heading_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_double_heading_pane_vc

0x3ae2,	// (0x0003abe3) list_double_large_graphic_pane_vc_ParamLimits

0x3ae2,	// (0x0003abe3) list_double_large_graphic_pane_vc

0xd2e6,	// (0x000443e7) list_double_number_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_double_number_pane_vc

0xd2e6,	// (0x000443e7) list_double_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_double_pane_vc

0xd2e6,	// (0x000443e7) list_double_time_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_double_time_pane_vc

0xd2e6,	// (0x000443e7) list_setting_number_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_setting_number_pane_vc

0xd2e6,	// (0x000443e7) list_setting_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_setting_pane_vc

0xd2e6,	// (0x000443e7) list_single_graphic_heading_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_single_graphic_heading_pane_vc

0xd2e6,	// (0x000443e7) list_single_heading_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_single_heading_pane_vc

0xd2e6,	// (0x000443e7) list_single_number_heading_pane_vc_ParamLimits

0xd2e6,	// (0x000443e7) list_single_number_heading_pane_vc

0xcebd,	// (0x00043fbe) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xcebd,	// (0x00043fbe) list_double_graphic_heading_pane_vc_g1

0xce93,	// (0x00043f94) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xce93,	// (0x00043f94) list_double_graphic_heading_pane_vc_g2

0xce9f,	// (0x00043fa0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xce9f,	// (0x00043fa0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x00046af5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x00046af5) list_double_graphic_heading_pane_vc_g

0xd2fb,	// (0x000443fc) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd2fb,	// (0x000443fc) list_double_graphic_heading_pane_vc_t1

0xd311,	// (0x00044412) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd311,	// (0x00044412) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x00046afc) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x00046afc) list_double_graphic_heading_pane_vc_t

0xd239,	// (0x0004433a) list_setting_pane_vc_g1_ParamLimits

0xd239,	// (0x0004433a) list_setting_pane_vc_g1

0xd245,	// (0x00044346) list_setting_pane_vc_g2_ParamLimits

0xd245,	// (0x00044346) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x000468eb) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x000468eb) list_setting_pane_vc_g

0xd33b,	// (0x0004443c) list_setting_pane_vc_t1_ParamLimits

0xd33b,	// (0x0004443c) list_setting_pane_vc_t1

0xd357,	// (0x00044458) list_setting_pane_vc_t2_ParamLimits

0xd357,	// (0x00044458) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x00046b3f) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x00046b3f) list_setting_pane_vc_t

0xd2af,	// (0x000443b0) set_value_pane_cp_vc_ParamLimits

0xd2af,	// (0x000443b0) set_value_pane_cp_vc

0xce93,	// (0x00043f94) list_single_number_heading_pane_vc_g1_ParamLimits

0xce93,	// (0x00043f94) list_single_number_heading_pane_vc_g1

0xce9f,	// (0x00043fa0) list_single_number_heading_pane_vc_g2_ParamLimits

0xce9f,	// (0x00043fa0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000466cf) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000466cf) list_single_number_heading_pane_vc_g

0xd20f,	// (0x00044310) list_single_number_heading_pane_vc_t1_ParamLimits

0xd20f,	// (0x00044310) list_single_number_heading_pane_vc_t1

0xd373,	// (0x00044474) list_single_number_heading_pane_vc_t2_ParamLimits

0xd373,	// (0x00044474) list_single_number_heading_pane_vc_t2

0xceab,	// (0x00043fac) list_single_number_heading_pane_vc_t3_ParamLimits

0xceab,	// (0x00043fac) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x00046b44) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00046b44) list_single_number_heading_pane_vc_t

0xcebd,	// (0x00043fbe) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xcebd,	// (0x00043fbe) list_single_graphic_heading_pane_vc_g1

0xce93,	// (0x00043f94) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xce93,	// (0x00043f94) list_single_graphic_heading_pane_vc_g4

0xce9f,	// (0x00043fa0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xce9f,	// (0x00043fa0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f4,	// (0x00046af5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x00046af5) list_single_graphic_heading_pane_vc_g

0xd20f,	// (0x00044310) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd20f,	// (0x00044310) list_single_graphic_heading_pane_vc_t1

0xd385,	// (0x00044486) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd385,	// (0x00044486) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x00046b4b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x00046b4b) list_single_graphic_heading_pane_vc_t

0xce93,	// (0x00043f94) list_double2_pane_vc_g1_ParamLimits

0xce93,	// (0x00043f94) list_double2_pane_vc_g1

0xce9f,	// (0x00043fa0) list_double2_pane_vc_g2_ParamLimits

0xce9f,	// (0x00043fa0) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x000466cf) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x000466cf) list_double2_pane_vc_g

0xd2d0,	// (0x000443d1) list_double2_pane_vc_t1_ParamLimits

0xd2d0,	// (0x000443d1) list_double2_pane_vc_t1

0xcec9,	// (0x00043fca) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xcec9,	// (0x00043fca) list_double2_large_graphic_pane_vc_g1

0xced5,	// (0x00043fd6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xced5,	// (0x00043fd6) list_double2_large_graphic_pane_vc_g2

0xcee1,	// (0x00043fe2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xcee1,	// (0x00043fe2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x000466ec) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x000466ec) list_double2_large_graphic_pane_vc_g

0xceed,	// (0x00043fee) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xceed,	// (0x00043fee) list_double2_large_graphic_pane_vc_t1

0xd397,	// (0x00044498) list_double_time_pane_vc_g1_ParamLimits

0xd397,	// (0x00044498) list_double_time_pane_vc_g1

0xd3a3,	// (0x000444a4) list_double_time_pane_vc_g2_ParamLimits

0xd3a3,	// (0x000444a4) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x00046b50) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x00046b50) list_double_time_pane_vc_g

0xd3af,	// (0x000444b0) list_double_time_pane_vc_t1_ParamLimits

0xd3af,	// (0x000444b0) list_double_time_pane_vc_t1

0xd3d9,	// (0x000444da) list_double_time_pane_vc_t2_ParamLimits

0xd3d9,	// (0x000444da) list_double_time_pane_vc_t2

0xd422,	// (0x00044523) list_double_time_pane_vc_t3_ParamLimits

0xd422,	// (0x00044523) list_double_time_pane_vc_t3

0xd434,	// (0x00044535) list_double_time_pane_vc_t4_ParamLimits

0xd434,	// (0x00044535) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x00046b55) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x00046b55) list_double_time_pane_vc_t

0xce93,	// (0x00043f94) list_double_pane_vc_g1_ParamLimits

0xce93,	// (0x00043f94) list_double_pane_vc_g1

0xce9f,	// (0x00043fa0) list_double_pane_vc_g2_ParamLimits

0xce9f,	// (0x00043fa0) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x000466cf) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x000466cf) list_double_pane_vc_g

0xd459,	// (0x0004455a) list_double_pane_vc_t1_ParamLimits

0xd459,	// (0x0004455a) list_double_pane_vc_t1

0xd46d,	// (0x0004456e) list_double_pane_vc_t2_ParamLimits

0xd46d,	// (0x0004456e) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x00046b5e) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x00046b5e) list_double_pane_vc_t

0xce93,	// (0x00043f94) list_double_number_pane_vc_g1_ParamLimits

0xce93,	// (0x00043f94) list_double_number_pane_vc_g1

0xce9f,	// (0x00043fa0) list_double_number_pane_vc_g2_ParamLimits

0xce9f,	// (0x00043fa0) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x000466cf) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x000466cf) list_double_number_pane_vc_g

0xd483,	// (0x00044584) list_double_number_pane_vc_t1_ParamLimits

0xd483,	// (0x00044584) list_double_number_pane_vc_t1

0xd497,	// (0x00044598) list_double_number_pane_vc_t2_ParamLimits

0xd497,	// (0x00044598) list_double_number_pane_vc_t2

0xd4ab,	// (0x000445ac) list_double_number_pane_vc_t3_ParamLimits

0xd4ab,	// (0x000445ac) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x00046b63) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x00046b63) list_double_number_pane_vc_t

0xd4c1,	// (0x000445c2) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd4c1,	// (0x000445c2) list_double_large_graphic_pane_vc_g1

0xd4d2,	// (0x000445d3) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd4d2,	// (0x000445d3) list_double_large_graphic_pane_vc_g2

0xcee1,	// (0x00043fe2) list_double_large_graphic_pane_vc_g3_ParamLimits

0xcee1,	// (0x00043fe2) list_double_large_graphic_pane_vc_g3

0xd4e1,	// (0x000445e2) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd4e1,	// (0x000445e2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x00046b6a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x00046b6a) list_double_large_graphic_pane_vc_g

0xd4ed,	// (0x000445ee) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd4ed,	// (0x000445ee) list_double_large_graphic_pane_vc_t1

0xd506,	// (0x00044607) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd506,	// (0x00044607) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x00046b73) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x00046b73) list_double_large_graphic_pane_vc_t

0xce93,	// (0x00043f94) list_double_heading_pane_vc_g1_ParamLimits

0xce93,	// (0x00043f94) list_double_heading_pane_vc_g1

0xce9f,	// (0x00043fa0) list_double_heading_pane_vc_g2_ParamLimits

0xce9f,	// (0x00043fa0) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000466cf) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000466cf) list_double_heading_pane_vc_g

0xd51d,	// (0x0004461e) list_double_heading_pane_vc_t1_ParamLimits

0xd51d,	// (0x0004461e) list_double_heading_pane_vc_t1

0xd20f,	// (0x00044310) list_double_heading_pane_vc_t2_ParamLimits

0xd20f,	// (0x00044310) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x00046b78) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x00046b78) list_double_heading_pane_vc_t

0xd52f,	// (0x00044630) list_double_graphic_pane_vc_g1_ParamLimits

0xd52f,	// (0x00044630) list_double_graphic_pane_vc_g1

0xd53f,	// (0x00044640) list_double_graphic_pane_vc_g2_ParamLimits

0xd53f,	// (0x00044640) list_double_graphic_pane_vc_g2

0xd54e,	// (0x0004464f) list_double_graphic_pane_vc_g3_ParamLimits

0xd54e,	// (0x0004464f) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x00046b7d) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x00046b7d) list_double_graphic_pane_vc_g

0xd55a,	// (0x0004465b) list_double_graphic_pane_vc_t1_ParamLimits

0xd55a,	// (0x0004465b) list_double_graphic_pane_vc_t1

0xd56e,	// (0x0004466f) list_double_graphic_pane_vc_t2_ParamLimits

0xd56e,	// (0x0004466f) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00046b84) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00046b84) list_double_graphic_pane_vc_t

0xe860,	// (0x00045961) aid_size_cell_fastswap

0x8fa9,	// (0x000400aa) aid_size_cell_touch_ParamLimits

0x8fa9,	// (0x000400aa) aid_size_cell_touch

0xe9e7,	// (0x00045ae8) popup_fast_swap_wide_window_ParamLimits

0xe9e7,	// (0x00045ae8) popup_fast_swap_wide_window

0x90f8,	// (0x000401f9) touch_pane_ParamLimits

0x90f8,	// (0x000401f9) touch_pane

0xb8b9,	// (0x000429ba) button_value_adjust_pane_cp2

0xcf26,	// (0x00044027) button_value_adjust_pane_cp4

0xcf2e,	// (0x0004402f) form_field_data_pane_cp2

0x998c,	// (0x00040a8d) form_field_data_wide_pane_cp2

0xbc1f,	// (0x00042d20) bg_scroll_pane_ParamLimits

0xeeed,	// (0x00045fee) scroll_handle_pane_ParamLimits

0xef01,	// (0x00046002) scroll_sc2_down_pane_ParamLimits

0xef01,	// (0x00046002) scroll_sc2_down_pane

0xd01b,	// (0x0004411c) scroll_sc2_up_pane_ParamLimits

0xd01b,	// (0x0004411c) scroll_sc2_up_pane

0xc6ae,	// (0x000437af) grid_wheel_folder_pane_g1_ParamLimits

0xc6ae,	// (0x000437af) grid_wheel_folder_pane_g1

0xf263,	// (0x00046364) clock_nsta_pane_cp2_ParamLimits

0xf263,	// (0x00046364) clock_nsta_pane_cp2

0x19ec,	// (0x00038aed) listscroll_midp_pane_ParamLimits

0x9eb4,	// (0x00040fb5) midp_canvas_pane

0x1968,	// (0x00038a69) nsta_clock_indic_pane

0x19be,	// (0x00038abf) listscroll_form_pane_vc

0x19da,	// (0x00038adb) listscroll_set_pane_vc_ParamLimits

0x19da,	// (0x00038adb) listscroll_set_pane_vc

0xbc78,	// (0x00042d79) clock_nsta_pane

0xbca2,	// (0x00042da3) indicator_nsta_pane

0x246b,	// (0x0003956c) bg_popup_sub_pane_cp2_ParamLimits

0x247f,	// (0x00039580) find_pane_cp2_ParamLimits

0x247f,	// (0x00039580) find_pane_cp2

0x2495,	// (0x00039596) grid_toobar_pane_ParamLimits

0x2575,	// (0x00039676) list_form_gen_pane_vc_ParamLimits

0x2575,	// (0x00039676) list_form_gen_pane_vc

0x258b,	// (0x0003968c) scroll_pane_cp8_vc_ParamLimits

0x258b,	// (0x0003968c) scroll_pane_cp8_vc

0x2607,	// (0x00039708) data_form_wide_pane_vc_ParamLimits

0x2607,	// (0x00039708) data_form_wide_pane_vc

0x2613,	// (0x00039714) form_field_data_wide_pane_vc_g1

0x261b,	// (0x0003971c) form_field_data_wide_pane_vc_t1_ParamLimits

0x261b,	// (0x0003971c) form_field_data_wide_pane_vc_t1

0xb8cd,	// (0x000429ce) input_focus_pane_cp6_vc_ParamLimits

0xb8cd,	// (0x000429ce) input_focus_pane_cp6_vc

0xc022,	// (0x00043123) list_midp_pane_ParamLimits

0x3cc6,	// (0x0003adc7) scroll_pane_cp16_ParamLimits

0x3cc6,	// (0x0003adc7) scroll_pane_cp16

0x2977,	// (0x00039a78) button_value_adjust_pane_ParamLimits

0x2977,	// (0x00039a78) button_value_adjust_pane

0xc2f2,	// (0x000433f3) button_value_adjust_pane_cp6_ParamLimits

0xc2f2,	// (0x000433f3) button_value_adjust_pane_cp6

0xc434,	// (0x00043535) settings_code_pane_cp_ParamLimits

0xc434,	// (0x00043535) settings_code_pane_cp

0x84c0,	// (0x0003f5c1) cell_touch_pane_g1

0x84c0,	// (0x0003f5c1) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0004680a) cell_touch_pane_g

0xc583,	// (0x00043684) cell_touch_pane_cp_ParamLimits

0xc583,	// (0x00043684) cell_touch_pane_cp

0xc59f,	// (0x000436a0) cell_touch_pane_ParamLimits

0xc59f,	// (0x000436a0) cell_touch_pane

0x84c0,	// (0x0003f5c1) scroll_sc2_down_pane_g1

0x84c0,	// (0x0003f5c1) scroll_sc2_up_pane_g1

0x84ca,	// (0x0003f5cb) bg_set_opt_pane_cp4_vc

0x4064,	// (0x0003b165) list_set_graphic_pane_vc_g1_ParamLimits

0x4064,	// (0x0003b165) list_set_graphic_pane_vc_g1

0xd32f,	// (0x00044430) list_set_graphic_pane_vc_g2_ParamLimits

0xd32f,	// (0x00044430) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x00046b01) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x00046b01) list_set_graphic_pane_vc_g

0x4070,	// (0x0003b171) text_primary_small_cp13_vc_ParamLimits

0x4070,	// (0x0003b171) text_primary_small_cp13_vc

0x4088,	// (0x0003b189) list_set_graphic_pane_vc_ParamLimits

0x4088,	// (0x0003b189) list_set_graphic_pane_vc

0x84ca,	// (0x0003f5cb) input_focus_pane_cp2_vc

0x84c0,	// (0x0003f5c1) setting_code_pane_vc_g1

0xb2cf,	// (0x000423d0) setting_code_pane_vc_t1

0x409d,	// (0x0003b19e) set_text_pane_vc_t1_ParamLimits

0x409d,	// (0x0003b19e) set_text_pane_vc_t1

0x84ca,	// (0x0003f5cb) input_focus_pane_cp1_vc

0x40bb,	// (0x0003b1bc) list_set_text_pane_vc

0x84c0,	// (0x0003f5c1) setting_text_pane_vc_g1

0x84ca,	// (0x0003f5cb) bg_set_opt_pane_cp2_vc

0xb2c6,	// (0x000423c7) setting_slider_graphic_pane_vc_g1

0x40c5,	// (0x0003b1c6) setting_slider_graphic_pane_vc_t1

0x40d7,	// (0x0003b1d8) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x00046b06) setting_slider_graphic_pane_vc_t

0x40e9,	// (0x0003b1ea) slider_set_pane_cp_vc

0x40f3,	// (0x0003b1f4) slider_set_pane_vc_g1

0x40fc,	// (0x0003b1fd) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x00046b0b) slider_set_pane_vc_g

0xb928,	// (0x00042a29) set_opt_bg_pane_g1_copy1

0xb930,	// (0x00042a31) set_opt_bg_pane_g2_copy1

0x4128,	// (0x0003b229) set_opt_bg_pane_g3_copy1

0xb940,	// (0x00042a41) set_opt_bg_pane_g4_copy1

0xb948,	// (0x00042a49) set_opt_bg_pane_g5_copy1

0xb950,	// (0x00042a51) set_opt_bg_pane_g6_copy1

0x4132,	// (0x0003b233) set_opt_bg_pane_g7_copy1

0x413c,	// (0x0003b23d) set_opt_bg_pane_g8_copy1

0x4146,	// (0x0003b247) set_opt_bg_pane_g9_copy1

0x84ca,	// (0x0003f5cb) bg_set_opt_pane_cp_vc

0x4150,	// (0x0003b251) setting_slider_pane_vc_t1

0x415f,	// (0x0003b260) setting_slider_pane_vc_t2

0x4171,	// (0x0003b272) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x00046b1a) setting_slider_pane_vc_t

0x4183,	// (0x0003b284) slider_set_pane_vc

0x01e0,	// (0x000372e1) volume_set_pane_vc_g1

0x01e9,	// (0x000372ea) volume_set_pane_vc_g2

0x01f2,	// (0x000372f3) volume_set_pane_vc_g3

0x01fb,	// (0x000372fc) volume_set_pane_vc_g4

0x0204,	// (0x00037305) volume_set_pane_vc_g5

0x020d,	// (0x0003730e) volume_set_pane_vc_g6

0x0216,	// (0x00037317) volume_set_pane_vc_g7

0x021f,	// (0x00037320) volume_set_pane_vc_g8

0x0228,	// (0x00037329) volume_set_pane_vc_g9

0x0231,	// (0x00037332) volume_set_pane_vc_g10

0x0009,

0xfa20,	// (0x00046b21) volume_set_pane_vc_g

0x418d,	// (0x0003b28e) volume_set_pane_vc

0x4197,	// (0x0003b298) button_value_adjust_pane_cp1_vc

0x41a1,	// (0x0003b2a2) list_highlight_pane_cp2_vc

0x41aa,	// (0x0003b2ab) list_set_pane_vc_ParamLimits

0x41aa,	// (0x0003b2ab) list_set_pane_vc

0x421a,	// (0x0003b31b) main_pane_set_vc_t1_ParamLimits

0x421a,	// (0x0003b31b) main_pane_set_vc_t1

0x422f,	// (0x0003b330) main_pane_set_vc_t2_ParamLimits

0x422f,	// (0x0003b330) main_pane_set_vc_t2

0x4241,	// (0x0003b342) main_pane_set_vc_t3_ParamLimits

0x4241,	// (0x0003b342) main_pane_set_vc_t3

0x4255,	// (0x0003b356) main_pane_set_vc_t4_ParamLimits

0x4255,	// (0x0003b356) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x00046b36) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x00046b36) main_pane_set_vc_t

0x4269,	// (0x0003b36a) setting_code_pane_vc_ParamLimits

0x4269,	// (0x0003b36a) setting_code_pane_vc

0x427a,	// (0x0003b37b) setting_slider_graphic_pane_vc

0x427a,	// (0x0003b37b) setting_slider_pane_vc

0x427a,	// (0x0003b37b) setting_text_pane_vc

0x427a,	// (0x0003b37b) setting_volume_pane_vc

0x4284,	// (0x0003b385) scroll_pane_cp121_vc

0xb8a7,	// (0x000429a8) set_content_pane_vc

0x428c,	// (0x0003b38d) button_value_adjust_pane_g1

0x4295,	// (0x0003b396) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x00046b89) button_value_adjust_pane_g

0x429e,	// (0x0003b39f) form_field_slider_wide_pane_vc_t1_ParamLimits

0x429e,	// (0x0003b39f) form_field_slider_wide_pane_vc_t1

0x42b0,	// (0x0003b3b1) form_field_slider_wide_pane_vc_t2_ParamLimits

0x42b0,	// (0x0003b3b1) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x00046b8e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x00046b8e) form_field_slider_wide_pane_vc_t

0x8524,	// (0x0003f625) input_focus_pane_cp10_vc_ParamLimits

0x8524,	// (0x0003f625) input_focus_pane_cp10_vc

0x42dc,	// (0x0003b3dd) slider_cont_pane_cp1_vc_ParamLimits

0x42dc,	// (0x0003b3dd) slider_cont_pane_cp1_vc

0x42ee,	// (0x0003b3ef) slider_form_pane_g1_cp2

0x40fc,	// (0x0003b1fd) slider_form_pane_g2_cp2

0x431b,	// (0x0003b41c) form_field_slider_pane_vc_t3

0x4329,	// (0x0003b42a) form_field_slider_pane_vc_t4

0x4337,	// (0x0003b438) slider_form_pane_vc_ParamLimits

0x4337,	// (0x0003b438) slider_form_pane_vc

0x4344,	// (0x0003b445) form_field_slider_pane_vc_t1_ParamLimits

0x4344,	// (0x0003b445) form_field_slider_pane_vc_t1

0x42b0,	// (0x0003b3b1) form_field_slider_pane_vc_t2_ParamLimits

0x42b0,	// (0x0003b3b1) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x00046ba0) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x00046ba0) form_field_slider_pane_vc_t

0x8524,	// (0x0003f625) input_focus_pane_cp9_vc_ParamLimits

0x8524,	// (0x0003f625) input_focus_pane_cp9_vc

0x435a,	// (0x0003b45b) slider_cont_pane_vc_ParamLimits

0x435a,	// (0x0003b45b) slider_cont_pane_vc

0x436e,	// (0x0003b46f) list_form_graphic_pane_cp_vc_ParamLimits

0x436e,	// (0x0003b46f) list_form_graphic_pane_cp_vc

0x2613,	// (0x00039714) form_field_popup_wide_pane_vc_g1

0x4383,	// (0x0003b484) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4383,	// (0x0003b484) form_field_popup_wide_pane_vc_t1

0xb8cd,	// (0x000429ce) input_focus_pane_cp8_vc_ParamLimits

0xb8cd,	// (0x000429ce) input_focus_pane_cp8_vc

0x43c8,	// (0x0003b4c9) list_form_wide_pane_vc_ParamLimits

0x43c8,	// (0x0003b4c9) list_form_wide_pane_vc

0x43d4,	// (0x0003b4d5) list_form_graphic_pane_vc_g1

0x43dc,	// (0x0003b4dd) list_form_graphic_pane_vc_t1_ParamLimits

0x43dc,	// (0x0003b4dd) list_form_graphic_pane_vc_t1

0xb2b8,	// (0x000423b9) list_highlight_pane_cp5_vc_ParamLimits

0xb2b8,	// (0x000423b9) list_highlight_pane_cp5_vc

0x43f8,	// (0x0003b4f9) list_form_graphic_pane_vc_ParamLimits

0x43f8,	// (0x0003b4f9) list_form_graphic_pane_vc

0x2613,	// (0x00039714) form_field_popup_pane_vc_g1

0x440e,	// (0x0003b50f) form_field_popup_pane_vc_t1_ParamLimits

0x440e,	// (0x0003b50f) form_field_popup_pane_vc_t1

0xb8cd,	// (0x000429ce) input_focus_pane_cp7_vc_ParamLimits

0xb8cd,	// (0x000429ce) input_focus_pane_cp7_vc

0x4425,	// (0x0003b526) list_form_pane_vc_ParamLimits

0x4425,	// (0x0003b526) list_form_pane_vc

0x4431,	// (0x0003b532) data_form_pane_vc_t1_ParamLimits

0x4431,	// (0x0003b532) data_form_pane_vc_t1

0xb928,	// (0x00042a29) input_focus_pane_vc_g1

0xb930,	// (0x00042a31) input_focus_pane_vc_g2

0xb938,	// (0x00042a39) input_focus_pane_vc_g3

0xb940,	// (0x00042a41) input_focus_pane_vc_g4

0xb948,	// (0x00042a49) input_focus_pane_vc_g5

0xb950,	// (0x00042a51) input_focus_pane_vc_g6

0xb958,	// (0x00042a59) input_focus_pane_vc_g7

0xb960,	// (0x00042a61) input_focus_pane_vc_g8

0xb968,	// (0x00042a69) input_focus_pane_vc_g9

0x84c0,	// (0x0003f5c1) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00046793) input_focus_pane_vc_g

0x2607,	// (0x00039708) data_form_pane_vc_ParamLimits

0x2607,	// (0x00039708) data_form_pane_vc

0x2613,	// (0x00039714) form_field_data_pane_vc_g1

0x444e,	// (0x0003b54f) form_field_data_pane_vc_t1_ParamLimits

0x444e,	// (0x0003b54f) form_field_data_pane_vc_t1

0xb8cd,	// (0x000429ce) input_focus_pane_vc_ParamLimits

0xb8cd,	// (0x000429ce) input_focus_pane_vc

0x4468,	// (0x0003b569) button_value_adjust_pane_cp3_vc

0x4470,	// (0x0003b571) button_value_adjust_pane_cp5_vc

0x4478,	// (0x0003b579) form_field_data_pane_vc_ParamLimits

0x4478,	// (0x0003b579) form_field_data_pane_vc

0x4493,	// (0x0003b594) form_field_data_pane_vc_cp2

0x449b,	// (0x0003b59c) form_field_data_wide_pane_vc_ParamLimits

0x449b,	// (0x0003b59c) form_field_data_wide_pane_vc

0x44b5,	// (0x0003b5b6) form_field_data_wide_pane_vc_cp2

0x44bd,	// (0x0003b5be) form_field_popup_pane_vc_ParamLimits

0x44bd,	// (0x0003b5be) form_field_popup_pane_vc

0x44d8,	// (0x0003b5d9) form_field_popup_wide_pane_vc_ParamLimits

0x44d8,	// (0x0003b5d9) form_field_popup_wide_pane_vc

0x44f2,	// (0x0003b5f3) form_field_slider_pane_vc_ParamLimits

0x44f2,	// (0x0003b5f3) form_field_slider_pane_vc

0x4505,	// (0x0003b606) form_field_slider_wide_pane_vc_ParamLimits

0x4505,	// (0x0003b606) form_field_slider_wide_pane_vc

0xc5bd,	// (0x000436be) grid_touch_1_pane_ParamLimits

0xc5bd,	// (0x000436be) grid_touch_1_pane

0xc5d1,	// (0x000436d2) grid_touch_2_pane_ParamLimits

0xc5d1,	// (0x000436d2) grid_touch_2_pane

0x45dc,	// (0x0003b6dd) touch_pane_g1_ParamLimits

0x45dc,	// (0x0003b6dd) touch_pane_g1

0x453e,	// (0x0003b63f) cell_app_pane_cp_wide_ParamLimits

0x453e,	// (0x0003b63f) cell_app_pane_cp_wide

0x454f,	// (0x0003b650) grid_popup_fast_wide_pane_ParamLimits

0x454f,	// (0x0003b650) grid_popup_fast_wide_pane

0x4563,	// (0x0003b664) scroll_pane_cp19_ParamLimits

0x4563,	// (0x0003b664) scroll_pane_cp19

0x84ca,	// (0x0003f5cb) bg_popup_window_pane_cp20

0x4577,	// (0x0003b678) listscroll_popup_fast_wide_pane

0xd584,	// (0x00044685) grid_indicator_nsta_pane

0x457f,	// (0x0003b680) clock_nsta_pane_g1

0x4588,	// (0x0003b689) clock_nsta_pane_t1

0xc5fd,	// (0x000436fe) cell_indicator_nsta_pane_ParamLimits

0xc5fd,	// (0x000436fe) cell_indicator_nsta_pane

0x45dc,	// (0x0003b6dd) cell_indicator_nsta_pane_g1

0xc61a,	// (0x0004371b) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x00046bb1) cell_indicator_nsta_pane_g

0x4600,	// (0x0003b701) clock_nsta_pane_cp

0x4608,	// (0x0003b709) indicator_nsta_pane_cp

0x4611,	// (0x0003b712) nsta_clock_indic_pane_g1

0xb2f4,	// (0x000423f5) grid_indicator_pane

0xd10d,	// (0x0004420e) scroll_pane_cp29

0xf18d,	// (0x0004628e) indicator_nsta_pane_cp2_ParamLimits

0xf18d,	// (0x0004628e) indicator_nsta_pane_cp2

0xb2b8,	// (0x000423b9) main_apps_wheel_pane

0x27fa,	// (0x000398fb) form_midp_field_text_pane_ParamLimits

0x2949,	// (0x00039a4a) scroll_bar_cp050_ParamLimits

0x467a,	// (0x0003b77b) cell_indicator_pane_ParamLimits

0x467a,	// (0x0003b77b) cell_indicator_pane

0x4692,	// (0x0003b793) cell_indicator_pane_g1

0xc630,	// (0x00043731) grid_wheel_folder_pane_ParamLimits

0xc630,	// (0x00043731) grid_wheel_folder_pane

0xc63e,	// (0x0004373f) list_wheel_apps_pane_ParamLimits

0xc63e,	// (0x0004373f) list_wheel_apps_pane

0xc64c,	// (0x0004374d) main_apps_wheel_pane_g1_ParamLimits

0xc64c,	// (0x0004374d) main_apps_wheel_pane_g1

0xc65c,	// (0x0004375d) main_apps_wheel_pane_g2_ParamLimits

0xc65c,	// (0x0004375d) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x00046bcd) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x00046bcd) main_apps_wheel_pane_g

0xc66c,	// (0x0004376d) main_apps_wheel_pane_t1_ParamLimits

0xc66c,	// (0x0004376d) main_apps_wheel_pane_t1

0xc684,	// (0x00043785) list_wheel_apps_pane_g1

0xc68c,	// (0x0004378d) list_wheel_apps_pane_g2

0xc694,	// (0x00043795) list_wheel_apps_pane_g3

0xc69c,	// (0x0004379d) list_wheel_apps_pane_g4

0xc6a4,	// (0x000437a5) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x00046bd2) list_wheel_apps_pane_g

0xf3ef,	// (0x000464f0) navi_icon_text_pane

0xa84e,	// (0x0004194f) aid_fill_nsta

0xc6c1,	// (0x000437c2) navi_icon_text_pane_g1

0xc6cd,	// (0x000437ce) navi_icon_text_pane_t1

0x9e18,	// (0x00040f19) list_set_graphic_pane_t1_ParamLimits

0x9e18,	// (0x00040f19) list_set_graphic_pane_t1

0x309a,	// (0x0003a19b) popup_midp_note_alarm_window_t6_ParamLimits

0x309a,	// (0x0003a19b) popup_midp_note_alarm_window_t6

0x30ac,	// (0x0003a1ad) popup_midp_note_alarm_window_t7_ParamLimits

0x30ac,	// (0x0003a1ad) popup_midp_note_alarm_window_t7

0x30be,	// (0x0003a1bf) popup_midp_note_alarm_window_t8_ParamLimits

0x30be,	// (0x0003a1bf) popup_midp_note_alarm_window_t8

0x30d0,	// (0x0003a1d1) popup_midp_note_alarm_window_t9_ParamLimits

0x30d0,	// (0x0003a1d1) popup_midp_note_alarm_window_t9

0x30e2,	// (0x0003a1e3) popup_midp_note_alarm_window_t10_ParamLimits

0x30e2,	// (0x0003a1e3) popup_midp_note_alarm_window_t10

0x30f4,	// (0x0003a1f5) popup_midp_note_alarm_window_t11_ParamLimits

0x30f4,	// (0x0003a1f5) popup_midp_note_alarm_window_t11

0x3106,	// (0x0003a207) scroll_pane_cp17_ParamLimits

0x3106,	// (0x0003a207) scroll_pane_cp17

0x01e0,	// (0x000372e1) volume_small_pane_cp_g1

0x05a2,	// (0x000376a3) volume_small_pane_cp_g2

0x05ab,	// (0x000376ac) volume_small_pane_cp_g3

0x05b4,	// (0x000376b5) volume_small_pane_cp_g4

0x05bd,	// (0x000376be) volume_small_pane_cp_g5

0x05c6,	// (0x000376c7) volume_small_pane_cp_g6

0x05cf,	// (0x000376d0) volume_small_pane_cp_g7

0x05d8,	// (0x000376d9) volume_small_pane_cp_g8

0x05e1,	// (0x000376e2) volume_small_pane_cp_g9

0x05ea,	// (0x000376eb) volume_small_pane_cp_g10

0x1743,	// (0x00038844) midp_ticker_pane_g1_ParamLimits

0x174f,	// (0x00038850) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0004685f) midp_ticker_pane_g_ParamLimits

0x9f4b,	// (0x0004104c) midp_ticker_pane_t1_ParamLimits

0xa872,	// (0x00041973) aid_fill_nsta_2

0x2935,	// (0x00039a36) list_form2_midp_pane

0x3ab1,	// (0x0003abb2) midp_editing_number_pane_ParamLimits

0x3ac0,	// (0x0003abc1) midp_ticker_pane_ParamLimits

0x4785,	// (0x0003b886) form2_midp_field_pane

0x47a9,	// (0x0003b8aa) scroll_pane_cp51

0x47c9,	// (0x0003b8ca) form2_midp_button_pane_ParamLimits

0x47c9,	// (0x0003b8ca) form2_midp_button_pane

0x47db,	// (0x0003b8dc) form2_midp_content_pane_ParamLimits

0x47db,	// (0x0003b8dc) form2_midp_content_pane

0x47f5,	// (0x0003b8f6) form2_midp_field_choice_group_pane

0x47fd,	// (0x0003b8fe) form2_midp_field_pane_g1

0x4805,	// (0x0003b906) form2_midp_field_pane_g2

0x480d,	// (0x0003b90e) form2_midp_field_pane_g3

0x4815,	// (0x0003b916) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x00046bf7) form2_midp_field_pane_g

0x481d,	// (0x0003b91e) form2_midp_gauge_slider_pane

0x4825,	// (0x0003b926) form2_midp_gauge_wait_pane

0x482d,	// (0x0003b92e) form2_midp_image_pane_ParamLimits

0x482d,	// (0x0003b92e) form2_midp_image_pane

0x4848,	// (0x0003b949) form2_midp_label_pane_ParamLimits

0x4848,	// (0x0003b949) form2_midp_label_pane

0xc6fb,	// (0x000437fc) form2_midp_label_pane_cp_ParamLimits

0xc6fb,	// (0x000437fc) form2_midp_label_pane_cp

0x4888,	// (0x0003b989) form2_midp_string_pane_ParamLimits

0x4888,	// (0x0003b989) form2_midp_string_pane

0xd592,	// (0x00044693) form2_midp_text_pane_ParamLimits

0xd592,	// (0x00044693) form2_midp_text_pane

0x489a,	// (0x0003b99b) form2_midp_time_pane

0x48aa,	// (0x0003b9ab) input_focus_pane_cp51_ParamLimits

0x48aa,	// (0x0003b9ab) input_focus_pane_cp51

0x48c2,	// (0x0003b9c3) form2_midp_label_pane_t1_ParamLimits

0x48c2,	// (0x0003b9c3) form2_midp_label_pane_t1

0xd5b3,	// (0x000446b4) form2_mdip_text_pane_t1_ParamLimits

0xd5b3,	// (0x000446b4) form2_mdip_text_pane_t1

0xd5d7,	// (0x000446d8) form2_midp_time_pane_t1

0x4910,	// (0x0003ba11) form2_midp_gauge_slider_pane_t1

0xc71c,	// (0x0004381d) form2_midp_gauge_slider_pane_t2

0xc72e,	// (0x0004382f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x00046c00) form2_midp_gauge_slider_pane_t

0x4946,	// (0x0003ba47) form2_midp_slider_pane

0x4952,	// (0x0003ba53) form2_midp_gauge_wait_pane_t1

0x4960,	// (0x0003ba61) form2_midp_wait_pane_ParamLimits

0x4960,	// (0x0003ba61) form2_midp_wait_pane

0x265a,	// (0x0003975b) list_single_2graphic_pane_cp4_ParamLimits

0x265a,	// (0x0003975b) list_single_2graphic_pane_cp4

0x498b,	// (0x0003ba8c) list_single_midp_graphic_pane_cp_ParamLimits

0x498b,	// (0x0003ba8c) list_single_midp_graphic_pane_cp

0x84ca,	// (0x0003f5cb) list_highlight_pane_cp20

0x49af,	// (0x0003bab0) list_single_2graphic_pane_g1_cp4

0x3f46,	// (0x0003b047) list_single_2graphic_pane_g2_cp4

0x49b7,	// (0x0003bab8) list_single_2graphic_pane_t1_cp4

0xb2b8,	// (0x000423b9) list_highlight_pane_cp21

0x49c6,	// (0x0003bac7) list_single_midp_graphic_pane_g4_cp

0x49d5,	// (0x0003bad6) list_single_midp_graphic_pane_t1_cp

0xc740,	// (0x00043841) form2_mdip_string_pane_t1_ParamLimits

0xc740,	// (0x00043841) form2_mdip_string_pane_t1

0x84ca,	// (0x0003f5cb) bg_wml_button_pane_cp2

0x84c0,	// (0x0003f5c1) form2_midp_image_pane_g1

0xcf03,	// (0x00044004) list_double_large_graphic_pane_g5_ParamLimits

0xcf03,	// (0x00044004) list_double_large_graphic_pane_g5

0x19ec,	// (0x00038aed) midp_form_pane_ParamLimits

0xb2b8,	// (0x000423b9) main_apps_wheel_pane_ParamLimits

0xa566,	// (0x00041667) popup_preview_window_ParamLimits

0xa566,	// (0x00041667) popup_preview_window

0x1fb4,	// (0x000390b5) popup_touch_info_window_ParamLimits

0x1fb4,	// (0x000390b5) popup_touch_info_window

0x1fd6,	// (0x000390d7) popup_touch_menu_window_ParamLimits

0x1fd6,	// (0x000390d7) popup_touch_menu_window

0x84b6,	// (0x0003f5b7) bg_popup_sub_pane_cp6

0x4a8f,	// (0x0003bb90) list_touch_menu_pane

0x4a97,	// (0x0003bb98) list_single_touch_menu_pane_ParamLimits

0x4a97,	// (0x0003bb98) list_single_touch_menu_pane

0x4aaf,	// (0x0003bbb0) list_single_touch_menu_pane_t1

0xb2b8,	// (0x000423b9) bg_popup_sub_pane_cp7_ParamLimits

0xb2b8,	// (0x000423b9) bg_popup_sub_pane_cp7

0x4abd,	// (0x0003bbbe) heading_sub_pane

0x4ac5,	// (0x0003bbc6) list_touch_info_pane_ParamLimits

0x4ac5,	// (0x0003bbc6) list_touch_info_pane

0x4ad4,	// (0x0003bbd5) list_single_touch_info_pane_ParamLimits

0x4ad4,	// (0x0003bbd5) list_single_touch_info_pane

0x4ae6,	// (0x0003bbe7) list_single_touch_info_pane_t1

0x4af4,	// (0x0003bbf5) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x00046c0e) list_single_touch_info_pane_t

0x1672,	// (0x00038773) bg_popup_heading_pane_cp

0x4b02,	// (0x0003bc03) heading_sub_pane_t1

0x25a1,	// (0x000396a2) bg_popup_preview_window_pane_cp_ParamLimits

0x25a1,	// (0x000396a2) bg_popup_preview_window_pane_cp

0x4abd,	// (0x0003bbbe) heading_preview_pane

0x4ac5,	// (0x0003bbc6) list_preview_pane_ParamLimits

0x4ac5,	// (0x0003bbc6) list_preview_pane

0x4b10,	// (0x0003bc11) popup_preview_window_g1

0x4ad4,	// (0x0003bbd5) list_single_preview_pane_ParamLimits

0x4ad4,	// (0x0003bbd5) list_single_preview_pane

0x4b18,	// (0x0003bc19) list_single_preview_pane_g1

0x4b20,	// (0x0003bc21) list_single_preview_pane_t1

0x4ae6,	// (0x0003bbe7) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x00046c13) list_single_preview_pane_t

0x4b2e,	// (0x0003bc2f) bg_popup_heading_pane_cp2_ParamLimits

0x4b2e,	// (0x0003bc2f) bg_popup_heading_pane_cp2

0x4b44,	// (0x0003bc45) heading_preview_pane_g1

0x4b4c,	// (0x0003bc4d) heading_preview_pane_t1_ParamLimits

0x4b4c,	// (0x0003bc4d) heading_preview_pane_t1

0xb30b,	// (0x0004240c) soft_indicator_pane_t1_ParamLimits

0xb840,	// (0x00042941) scroll_pane_ParamLimits

0xbc3e,	// (0x00042d3f) scroll_sc2_left_pane

0xbc47,	// (0x00042d48) scroll_sc2_right_pane

0xd031,	// (0x00044132) scroll_bg_pane_g1_ParamLimits

0xd046,	// (0x00044147) scroll_bg_pane_g2_ParamLimits

0xd05e,	// (0x0004415f) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x000467ea) scroll_bg_pane_g_ParamLimits

0xd031,	// (0x00044132) scroll_handle_pane_g1_ParamLimits

0xd080,	// (0x00044181) scroll_handle_pane_g2_ParamLimits

0xd05e,	// (0x0004415f) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x000467f1) scroll_handle_pane_g_ParamLimits

0x1a14,	// (0x00038b15) popup_choice_list_window_ParamLimits

0x1a14,	// (0x00038b15) popup_choice_list_window

0x2477,	// (0x00039578) choice_list_pane

0x24f9,	// (0x000395fa) cell_toolbar_pane_t1

0x2521,	// (0x00039622) toolbar_button_pane_ParamLimits

0x35d0,	// (0x0003a6d1) ai_gene_pane_1_t2_ParamLimits

0x35d0,	// (0x0003a6d1) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x00046a14) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x00046a14) ai_gene_pane_1_t

0x4b69,	// (0x0003bc6a) scroll_sc2_left_pane_g1

0x4b69,	// (0x0003bc6a) scroll_sc2_right_pane_g1

0x19ec,	// (0x00038aed) bg_popup_sub_pane_cp10

0x4b73,	// (0x0003bc74) list_choice_list_pane

0x4b8c,	// (0x0003bc8d) list_single_choice_list_pane_ParamLimits

0x4b8c,	// (0x0003bc8d) list_single_choice_list_pane

0x4ba4,	// (0x0003bca5) list_single_choice_list_pane_g1

0xba1e,	// (0x00042b1f) list_single_choice_list_pane_t1_ParamLimits

0xba1e,	// (0x00042b1f) list_single_choice_list_pane_t1

0x4bac,	// (0x0003bcad) choice_list_pane_g1

0x4bb4,	// (0x0003bcb5) choice_list_pane_t1

0x84b6,	// (0x0003f5b7) input_focus_pane_cp11

0xbb9c,	// (0x00042c9d) title_pane_stacon_g2_ParamLimits

0xbb9c,	// (0x00042c9d) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x000467d0) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000467d0) title_pane_stacon_g

0x1672,	// (0x00038773) cursor_press_pane

0xa1e3,	// (0x000412e4) popup_fep_hwr_window_ParamLimits

0xa1e3,	// (0x000412e4) popup_fep_hwr_window

0x1b58,	// (0x00038c59) popup_fep_vkb_window_ParamLimits

0x1b58,	// (0x00038c59) popup_fep_vkb_window

0x4bc2,	// (0x0003bcc3) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x00046c3c) fep_vkb_side_pane_g_ParamLimits

0x062c,	// (0x0003772d) fep_hwr_candidate_pane_ParamLimits

0x062c,	// (0x0003772d) fep_hwr_candidate_pane

0x0656,	// (0x00037757) fep_hwr_side_pane_ParamLimits

0x0656,	// (0x00037757) fep_hwr_side_pane

0x0678,	// (0x00037779) fep_hwr_top_pane_ParamLimits

0x0678,	// (0x00037779) fep_hwr_top_pane

0x0690,	// (0x00037791) fep_hwr_write_pane_ParamLimits

0x0690,	// (0x00037791) fep_hwr_write_pane

0xfb3b,	// (0x00046c3c) fep_vkb_side_pane_g

0x4bca,	// (0x0003bccb) fep_hwr_top_pane_g1

0x4bdc,	// (0x0003bcdd) fep_hwr_top_pane_g2

0x06ca,	// (0x000377cb) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x00046c18) fep_hwr_top_pane_g

0x06df,	// (0x000377e0) fep_hwr_top_text_pane

0xd17a,	// (0x0004427b) fep_hwr_top_text_pane_g1

0x4c12,	// (0x0003bd13) fep_hwr_top_text_pane_t1

0x07e9,	// (0x000378ea) fep_hwr_candidate_pane_g1

0x4e89,	// (0x0003bf8a) fep_vkb_keypad_pane_g3_ParamLimits

0x4e89,	// (0x0003bf8a) fep_vkb_keypad_pane_g3

0x4eb5,	// (0x0003bfb6) fep_vkb_keypad_pane_g4_ParamLimits

0x4eb5,	// (0x0003bfb6) fep_vkb_keypad_pane_g4

0x4f2c,	// (0x0003c02d) fep_vkb_bottom_pane_g2_ParamLimits

0x4f2c,	// (0x0003c02d) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00046c43) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00046c43) fep_vkb_bottom_pane_g

0x4b69,	// (0x0003bc6a) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x00046c4d) cell_vkb_side_pane_g

0x4fb7,	// (0x0003c0b8) cell_vkb_side_pane_t1

0x4fc5,	// (0x0003c0c6) cell_vkb_side_pane_t1_copy1

0x4b69,	// (0x0003bc6a) bg_fep_vkb_candidate_pane_g2

0x5109,	// (0x0003c20a) cell_vkb_candidate_pane_ParamLimits

0x4c20,	// (0x0003bd21) aid_size_cell_vkb_ParamLimits

0x4c20,	// (0x0003bd21) aid_size_cell_vkb

0x5109,	// (0x0003c20a) cell_vkb_candidate_pane

0x0810,	// (0x00037911) bg_popup_fep_shadow_pane_g1

0xc7f5,	// (0x000438f6) fep_vkb_bottom_pane_ParamLimits

0xc7f5,	// (0x000438f6) fep_vkb_bottom_pane

0x4cef,	// (0x0003bdf0) fep_vkb_candidate_pane_ParamLimits

0x4cef,	// (0x0003bdf0) fep_vkb_candidate_pane

0xc821,	// (0x00043922) fep_vkb_keypad_pane_ParamLimits

0xc821,	// (0x00043922) fep_vkb_keypad_pane

0xc848,	// (0x00043949) fep_vkb_side_pane_ParamLimits

0xc848,	// (0x00043949) fep_vkb_side_pane

0xc884,	// (0x00043985) fep_vkb_top_pane_ParamLimits

0xc884,	// (0x00043985) fep_vkb_top_pane

0x4de2,	// (0x0003bee3) fep_vkb_top_pane_g1_ParamLimits

0x4de2,	// (0x0003bee3) fep_vkb_top_pane_g1

0x4df1,	// (0x0003bef2) fep_vkb_top_pane_g2_ParamLimits

0x4df1,	// (0x0003bef2) fep_vkb_top_pane_g2

0x4e00,	// (0x0003bf01) fep_vkb_top_pane_g3_ParamLimits

0x4e00,	// (0x0003bf01) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x00046c33) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x00046c33) fep_vkb_top_pane_g

0x4e1e,	// (0x0003bf1f) fep_vkb_top_text_pane_ParamLimits

0x4e1e,	// (0x0003bf1f) fep_vkb_top_text_pane

0xc8c0,	// (0x000439c1) fep_vkb_side_pane_g1_ParamLimits

0xc8c0,	// (0x000439c1) fep_vkb_side_pane_g1

0x4e78,	// (0x0003bf79) grid_vkb_side_pane_ParamLimits

0x4e78,	// (0x0003bf79) grid_vkb_side_pane

0x0818,	// (0x00037919) bg_popup_fep_shadow_pane_g2

0x0821,	// (0x00037922) bg_popup_fep_shadow_pane_g3

0x0829,	// (0x0003792a) bg_popup_fep_shadow_pane_g4

0x0832,	// (0x00037933) bg_popup_fep_shadow_pane_g5

0x083c,	// (0x0003793d) bg_popup_fep_shadow_pane_g6

0x0844,	// (0x00037945) bg_popup_fep_shadow_pane_g7

0xb940,	// (0x00042a41) bg_popup_fep_shadow_pane_g8

0x4ed7,	// (0x0003bfd8) grid_vkb_keypad_number_pane_ParamLimits

0x4ed7,	// (0x0003bfd8) grid_vkb_keypad_number_pane

0x4eeb,	// (0x0003bfec) grid_vkb_keypad_pane_ParamLimits

0x4eeb,	// (0x0003bfec) grid_vkb_keypad_pane

0x4f11,	// (0x0003c012) fep_vkb_bottom_pane_g1_ParamLimits

0x4f11,	// (0x0003c012) fep_vkb_bottom_pane_g1

0x4f3a,	// (0x0003c03b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4f3a,	// (0x0003c03b) grid_vkb_keypad_bottom_left_pane

0x4f4f,	// (0x0003c050) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4f4f,	// (0x0003c050) grid_vkb_keypad_bottom_right_pane

0x4f64,	// (0x0003c065) fep_vkb_top_text_pane_g1

0xc907,	// (0x00043a08) fep_vkb_top_text_pane_t1

0xc919,	// (0x00043a1a) cell_vkb_side_pane_ParamLimits

0xc919,	// (0x00043a1a) cell_vkb_side_pane

0x4b69,	// (0x0003bc6a) cell_vkb_side_pane_g1

0x4fd3,	// (0x0003c0d4) cell_vkb_keypad_pane_ParamLimits

0x4fd3,	// (0x0003c0d4) cell_vkb_keypad_pane

0x5060,	// (0x0003c161) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x00046c60) bg_popup_fep_shadow_pane_g

0x0856,	// (0x00037957) cell_hwr_side_pane_g1

0x0856,	// (0x00037957) cell_hwr_side_pane_g2

0x506a,	// (0x0003c16b) cell_vkb_keypad_pane_t1

0xc92f,	// (0x00043a30) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc92f,	// (0x00043a30) cell_vkb_keypad_bottom_left_pane

0xc944,	// (0x00043a45) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc944,	// (0x00043a45) cell_vkb_keypad_bottom_right_pane

0x4b69,	// (0x0003bc6a) cell_vkb_keypad_bottom_left_pane_g1

0x4b69,	// (0x0003bc6a) cell_vkb_keypad_bottom_right_pane_g1

0x50ce,	// (0x0003c1cf) cell_vkb_keypad_number_pane_ParamLimits

0x50ce,	// (0x0003c1cf) cell_vkb_keypad_number_pane

0x50ed,	// (0x0003c1ee) cell_vkb_keypad_number_pane_g1

0x50f7,	// (0x0003c1f8) cell_vkb_keypad_number_pane_g2

0x5100,	// (0x0003c201) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00046c52) cell_vkb_keypad_number_pane_g

0x506a,	// (0x0003c16b) cell_vkb_keypad_number_pane_t1

0x512a,	// (0x0003c22b) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x00046c73) cell_hwr_side_pane_g

0x5143,	// (0x0003c244) cell_hwr_side_pane_t1

0x0860,	// (0x00037961) cell_hwr_side_pane_t1_copy1

0x086e,	// (0x0003796f) cell_hwr_candidate_pane_g1

0x089d,	// (0x0003799e) cell_hwr_candidate_pane_t1

0x4b69,	// (0x0003bc6a) cell_vkb_candidate_pane_g2

0x5187,	// (0x0003c288) cell_vkb_candidate_pane_t1

0x05f3,	// (0x000376f4) bg_popup_fep_shadow_pane_ParamLimits

0x05f3,	// (0x000376f4) bg_popup_fep_shadow_pane

0x06aa,	// (0x000377ab) bg_fep_hwr_top_pane_g4

0x4bee,	// (0x0003bcef) bg_hwr_side_pane_g1_ParamLimits

0x4bee,	// (0x0003bcef) bg_hwr_side_pane_g1

0xabaf,	// (0x00041cb0) cell_hwr_side_pane_ParamLimits

0xabaf,	// (0x00041cb0) cell_hwr_side_pane

0x075a,	// (0x0003785b) fep_hwr_write_pane_g1_ParamLimits

0x075a,	// (0x0003785b) fep_hwr_write_pane_g1

0x0767,	// (0x00037868) fep_hwr_write_pane_g2_ParamLimits

0x0767,	// (0x00037868) fep_hwr_write_pane_g2

0x0774,	// (0x00037875) fep_hwr_write_pane_g3_ParamLimits

0x0774,	// (0x00037875) fep_hwr_write_pane_g3

0xabcf,	// (0x00041cd0) fep_hwr_write_pane_g4_ParamLimits

0xabcf,	// (0x00041cd0) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x00046c1f) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x00046c1f) fep_hwr_write_pane_g

0x06aa,	// (0x000377ab) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x06aa,	// (0x000377ab) bg_fep_hwr_candidate_pane_g2

0x0797,	// (0x00037898) cell_hwr_candidate_pane_ParamLimits

0x0797,	// (0x00037898) cell_hwr_candidate_pane

0x07e9,	// (0x000378ea) fep_hwr_candidate_pane_g1_ParamLimits

0x4c4e,	// (0x0003bd4f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4c4e,	// (0x0003bd4f) bg_popup_fep_shadow_pane_cp2

0x4e10,	// (0x0003bf11) fep_vkb_top_pane_g4_ParamLimits

0x4e10,	// (0x0003bf11) fep_vkb_top_pane_g4

0x4e56,	// (0x0003bf57) fep_vkb_side_pane_g2_ParamLimits

0x4e56,	// (0x0003bf57) fep_vkb_side_pane_g2

0x989a,	// (0x0004099b) list_setting_pane_t4_ParamLimits

0x989a,	// (0x0004099b) list_setting_pane_t4

0x992e,	// (0x00040a2f) list_setting_number_pane_t5_ParamLimits

0x992e,	// (0x00040a2f) list_setting_number_pane_t5

0x9c87,	// (0x00040d88) list_double_heading_pane_cp2_ParamLimits

0x9c87,	// (0x00040d88) list_double_heading_pane_cp2

0x5195,	// (0x0003c296) list_double_heading_pane_g1_cp2_ParamLimits

0x5195,	// (0x0003c296) list_double_heading_pane_g1_cp2

0x51a1,	// (0x0003c2a2) list_double_heading_pane_g2_cp2_ParamLimits

0x51a1,	// (0x0003c2a2) list_double_heading_pane_g2_cp2

0x51b5,	// (0x0003c2b6) list_double_heading_pane_t1_cp2_ParamLimits

0x51b5,	// (0x0003c2b6) list_double_heading_pane_t1_cp2

0x51cb,	// (0x0003c2cc) list_double_heading_pane_t2_cp2_ParamLimits

0x51cb,	// (0x0003c2cc) list_double_heading_pane_t2_cp2

0x84ae,	// (0x0003f5af) aid_value_unit2

0xea0b,	// (0x00045b0c) popup_preview_fixed_window

0xb3eb,	// (0x000424ec) bg_popup_preview_window_pane_cp02

0x51dd,	// (0x0003c2de) list_preview_fixed_pane

0x5223,	// (0x0003c324) list_empty_pane_fp_ParamLimits

0x5223,	// (0x0003c324) list_empty_pane_fp

0x5223,	// (0x0003c324) list_single_cale_day_pane_fp_ParamLimits

0x5223,	// (0x0003c324) list_single_cale_day_pane_fp

0x5223,	// (0x0003c324) list_single_graphic_heading_pane_fp_ParamLimits

0x5223,	// (0x0003c324) list_single_graphic_heading_pane_fp

0x5223,	// (0x0003c324) list_single_graphic_pane_fp_ParamLimits

0x5223,	// (0x0003c324) list_single_graphic_pane_fp

0x5223,	// (0x0003c324) list_single_heading_pane_fp_ParamLimits

0x5223,	// (0x0003c324) list_single_heading_pane_fp

0x5223,	// (0x0003c324) list_single_pane_fp_ParamLimits

0x5223,	// (0x0003c324) list_single_pane_fp

0x523c,	// (0x0003c33d) list_single_pane_fp_g1_ParamLimits

0x523c,	// (0x0003c33d) list_single_pane_fp_g1

0xd5ea,	// (0x000446eb) list_single_pane_fp_g2_ParamLimits

0xd5ea,	// (0x000446eb) list_single_pane_fp_g2

0xd5f6,	// (0x000446f7) list_single_pane_fp_g3_ParamLimits

0xd5f6,	// (0x000446f7) list_single_pane_fp_g3

0x5248,	// (0x0003c349) list_single_pane_fp_g4_ParamLimits

0x5248,	// (0x0003c349) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x00046c86) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x00046c86) list_single_pane_fp_g

0xd60a,	// (0x0004470b) list_single_pane_fp_t1_ParamLimits

0xd60a,	// (0x0004470b) list_single_pane_fp_t1

0xd621,	// (0x00044722) list_single_graphic_pane_fp_g1_ParamLimits

0xd621,	// (0x00044722) list_single_graphic_pane_fp_g1

0x523c,	// (0x0003c33d) list_single_graphic_pane_fp_g2_ParamLimits

0x523c,	// (0x0003c33d) list_single_graphic_pane_fp_g2

0xd5ea,	// (0x000446eb) list_single_graphic_pane_fp_g3_ParamLimits

0xd5ea,	// (0x000446eb) list_single_graphic_pane_fp_g3

0xd5f6,	// (0x000446f7) list_single_graphic_pane_fp_g4_ParamLimits

0xd5f6,	// (0x000446f7) list_single_graphic_pane_fp_g4

0x5248,	// (0x0003c349) list_single_graphic_pane_fp_g5_ParamLimits

0x5248,	// (0x0003c349) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x00046c8f) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x00046c8f) list_single_graphic_pane_fp_g

0xd62d,	// (0x0004472e) list_single_graphic_pane_fp_t1_ParamLimits

0xd62d,	// (0x0004472e) list_single_graphic_pane_fp_t1

0xd621,	// (0x00044722) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd621,	// (0x00044722) list_single_graphic_heading_pane_fp_g1

0x523c,	// (0x0003c33d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x523c,	// (0x0003c33d) list_single_graphic_heading_pane_fp_g2

0xd5ea,	// (0x000446eb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd5ea,	// (0x000446eb) list_single_graphic_heading_pane_fp_g3

0xd5f6,	// (0x000446f7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd5f6,	// (0x000446f7) list_single_graphic_heading_pane_fp_g4

0x5248,	// (0x0003c349) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5248,	// (0x0003c349) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00046c8f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00046c8f) list_single_graphic_heading_pane_fp_g

0xd643,	// (0x00044744) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd643,	// (0x00044744) list_single_graphic_heading_pane_fp_t1

0xeb81,	// (0x00045c82) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeb81,	// (0x00045c82) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x00046c9a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x00046c9a) list_single_graphic_heading_pane_fp_t

0xeb93,	// (0x00045c94) list_single_cale_day_pane_fp_g1_ParamLimits

0xeb93,	// (0x00045c94) list_single_cale_day_pane_fp_g1

0x5254,	// (0x0003c355) list_single_cale_day_pane_fp_g2_ParamLimits

0x5254,	// (0x0003c355) list_single_cale_day_pane_fp_g2

0xebcb,	// (0x00045ccc) list_single_cale_day_pane_fp_g3_ParamLimits

0xebcb,	// (0x00045ccc) list_single_cale_day_pane_fp_g3

0xebf3,	// (0x00045cf4) list_single_cale_day_pane_fp_g4_ParamLimits

0xebf3,	// (0x00045cf4) list_single_cale_day_pane_fp_g4

0xec17,	// (0x00045d18) list_single_cale_day_pane_fp_g5_ParamLimits

0xec17,	// (0x00045d18) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x00046c9f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x00046c9f) list_single_cale_day_pane_fp_g

0xec3b,	// (0x00045d3c) list_single_cale_day_pane_fp_t1_ParamLimits

0xec3b,	// (0x00045d3c) list_single_cale_day_pane_fp_t1

0xec61,	// (0x00045d62) list_single_cale_day_pane_fp_t2_ParamLimits

0xec61,	// (0x00045d62) list_single_cale_day_pane_fp_t2

0xec7a,	// (0x00045d7b) list_single_cale_day_pane_fp_t3_ParamLimits

0xec7a,	// (0x00045d7b) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x00046caa) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x00046caa) list_single_cale_day_pane_fp_t

0x523c,	// (0x0003c33d) list_empty_pane_fp_g1_ParamLimits

0x523c,	// (0x0003c33d) list_empty_pane_fp_g1

0xec93,	// (0x00045d94) list_empty_pane_fp_t1

0xeca1,	// (0x00045da2) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x00046cb1) list_empty_pane_fp_t

0x523c,	// (0x0003c33d) list_single_heading_pane_fp_g1_ParamLimits

0x523c,	// (0x0003c33d) list_single_heading_pane_fp_g1

0xd5ea,	// (0x000446eb) list_single_heading_pane_fp_g2_ParamLimits

0xd5ea,	// (0x000446eb) list_single_heading_pane_fp_g2

0xd5f6,	// (0x000446f7) list_single_heading_pane_fp_g3_ParamLimits

0xd5f6,	// (0x000446f7) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x00046cb6) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x00046cb6) list_single_heading_pane_fp_g

0xecaf,	// (0x00045db0) list_single_heading_pane_fp_t1_ParamLimits

0xecaf,	// (0x00045db0) list_single_heading_pane_fp_t1

0xecc1,	// (0x00045dc2) list_single_heading_pane_fp_t2_ParamLimits

0xecc1,	// (0x00045dc2) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x00046cbd) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x00046cbd) list_single_heading_pane_fp_t

0xba33,	// (0x00042b34) aid_size_cell_fast

0xb3ce,	// (0x000424cf) soft_indicator_pane_cp1_t1

0xba70,	// (0x00042b71) cell_app_pane_cp2_ParamLimits

0xba70,	// (0x00042b71) cell_app_pane_cp2

0x0615,	// (0x00037716) fep_hwr_candidate_drop_down_list_pane

0x0803,	// (0x00037904) fep_hwr_candidate_pane_g3_ParamLimits

0x0803,	// (0x00037904) fep_hwr_candidate_pane_g3

0xc7d6,	// (0x000438d7) fep_hwr_candidate_pane_g4_ParamLimits

0xc7d6,	// (0x000438d7) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00046c2c) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x00046c2c) fep_hwr_candidate_pane_g

0x4cde,	// (0x0003bddf) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4cde,	// (0x0003bddf) fep_vkb_candidate_drop_down_list_pane

0x5132,	// (0x0003c233) fep_vkb_candidate_pane_g3

0x513a,	// (0x0003c23b) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x00046c59) fep_vkb_candidate_pane_g

0x086e,	// (0x0003796f) cell_hwr_candidate_pane_g1_ParamLimits

0x087c,	// (0x0003797d) cell_hwr_candidate_pane_g3_ParamLimits

0x087c,	// (0x0003797d) cell_hwr_candidate_pane_g3

0x68f5,	// (0x0003d9f6) cell_hwr_candidate_pane_g4_ParamLimits

0x68f5,	// (0x0003d9f6) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x00046c78) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x00046c78) cell_hwr_candidate_pane_g

0x5151,	// (0x0003c252) cell_vkb_candidate_pane_g3_ParamLimits

0x5151,	// (0x0003c252) cell_vkb_candidate_pane_g3

0x516c,	// (0x0003c26d) cell_vkb_candidate_pane_g4_ParamLimits

0x516c,	// (0x0003c26d) cell_vkb_candidate_pane_g4

0x5260,	// (0x0003c361) cell_app_pane_cp2_g1_ParamLimits

0x5260,	// (0x0003c361) cell_app_pane_cp2_g1

0x527e,	// (0x0003c37f) cell_app_pane_cp2_g2_ParamLimits

0x527e,	// (0x0003c37f) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x00046cc2) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x00046cc2) cell_app_pane_cp2_g

0x528a,	// (0x0003c38b) cell_app_pane_cp2_t1_ParamLimits

0x528a,	// (0x0003c38b) cell_app_pane_cp2_t1

0xb8cd,	// (0x000429ce) grid_highlight_pane_cp1_ParamLimits

0xb8cd,	// (0x000429ce) grid_highlight_pane_cp1

0x08bb,	// (0x000379bc) cell_hwr_candidate_pane_cp1_ParamLimits

0x08bb,	// (0x000379bc) cell_hwr_candidate_pane_cp1

0x086e,	// (0x0003796f) fep_hwr_candidate_drop_down_list_pane_g1

0x08df,	// (0x000379e0) fep_hwr_candidate_drop_down_list_pane_g2

0x08ec,	// (0x000379ed) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00046cc7) fep_hwr_candidate_drop_down_list_pane_g

0x08f9,	// (0x000379fa) fep_hwr_candidate_drop_down_list_scroll_pane

0x0902,	// (0x00037a03) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0902,	// (0x00037a03) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x090f,	// (0x00037a10) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x090f,	// (0x00037a10) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x091c,	// (0x00037a1d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x091c,	// (0x00037a1d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0929,	// (0x00037a2a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0929,	// (0x00037a2a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0944,	// (0x00037a45) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0944,	// (0x00037a45) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x095f,	// (0x00037a60) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x095f,	// (0x00037a60) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x097a,	// (0x00037a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x097a,	// (0x00037a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0995,	// (0x00037a96) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0995,	// (0x00037a96) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x00046cce) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x00046cce) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x529c,	// (0x0003c39d) cell_vkb_candidate_pane_cp1_ParamLimits

0x529c,	// (0x0003c39d) cell_vkb_candidate_pane_cp1

0x4e10,	// (0x0003bf11) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4e10,	// (0x0003bf11) fep_vkb_candidate_drop_down_list_pane_g1

0x52c2,	// (0x0003c3c3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x52c2,	// (0x0003c3c3) fep_vkb_candidate_drop_down_list_pane_g2

0x52cf,	// (0x0003c3d0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x52cf,	// (0x0003c3d0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x00046cdf) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x00046cdf) fep_vkb_candidate_drop_down_list_pane_g

0x52dc,	// (0x0003c3dd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x52dc,	// (0x0003c3dd) fep_vkb_candidate_drop_down_list_scroll_pane

0x52e9,	// (0x0003c3ea) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x52e9,	// (0x0003c3ea) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x52f6,	// (0x0003c3f7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x52f6,	// (0x0003c3f7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5302,	// (0x0003c403) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5302,	// (0x0003c403) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x530e,	// (0x0003c40f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x530e,	// (0x0003c40f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x532f,	// (0x0003c430) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x532f,	// (0x0003c430) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5350,	// (0x0003c451) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5350,	// (0x0003c451) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5371,	// (0x0003c472) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5371,	// (0x0003c472) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5392,	// (0x0003c493) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5392,	// (0x0003c493) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x00046ce6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x00046ce6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x914e,	// (0x0004024f) title_pane_g1_ParamLimits

0x9161,	// (0x00040262) title_pane_g2_ParamLimits

0xf554,	// (0x00046655) title_pane_g_ParamLimits

0xd16a,	// (0x0004426b) aid_call2_pane

0xd172,	// (0x00044273) aid_call_pane

0xd17a,	// (0x0004427b) popup_clock_analogue_window_g1

0xd17a,	// (0x0004427b) popup_clock_analogue_window_g2

0xef16,	// (0x00046017) popup_clock_analogue_window_g3

0xef1f,	// (0x00046020) popup_clock_analogue_window_g4

0x84c0,	// (0x0003f5c1) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x000467ff) popup_clock_analogue_window_g

0xef27,	// (0x00046028) popup_clock_analogue_window_t1

0xef35,	// (0x00046036) clock_digital_number_pane_ParamLimits

0xef35,	// (0x00046036) clock_digital_number_pane

0xef41,	// (0x00046042) clock_digital_number_pane_cp02_ParamLimits

0xef41,	// (0x00046042) clock_digital_number_pane_cp02

0xef4d,	// (0x0004604e) clock_digital_number_pane_cp03_ParamLimits

0xef4d,	// (0x0004604e) clock_digital_number_pane_cp03

0xef59,	// (0x0004605a) clock_digital_number_pane_cp04_ParamLimits

0xef59,	// (0x0004605a) clock_digital_number_pane_cp04

0xef65,	// (0x00046066) clock_digital_separator_pane_ParamLimits

0xef65,	// (0x00046066) clock_digital_separator_pane

0xef71,	// (0x00046072) popup_clock_digital_window_t1_ParamLimits

0xef71,	// (0x00046072) popup_clock_digital_window_t1

0x84c0,	// (0x0003f5c1) clock_digital_number_pane_g1

0x84c0,	// (0x0003f5c1) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0004680a) clock_digital_number_pane_g

0x84c0,	// (0x0003f5c1) clock_digital_separator_pane_g1

0x84c0,	// (0x0003f5c1) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0004680a) clock_digital_separator_pane_g

0xa84e,	// (0x0004194f) aid_fill_nsta_ParamLimits

0xbca2,	// (0x00042da3) indicator_nsta_pane_ParamLimits

0x2304,	// (0x00039405) popup_clock_analogue_window

0x2304,	// (0x00039405) popup_clock_digital_window

0xd584,	// (0x00044685) grid_indicator_nsta_pane_ParamLimits

0x4596,	// (0x0003b697) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x00046bac) clock_nsta_pane_t

0xeee3,	// (0x00045fe4) aid_size_max_handle

0x9bfa,	// (0x00040cfb) aid_size_min_handle

0x1672,	// (0x00038773) editor_scroll_pane

0x53ad,	// (0x0003c4ae) ex_editor_pane

0xb9f9,	// (0x00042afa) scroll_pane_cp13

0xb86c,	// (0x0004296d) scroll_pane_cp14

0xd1a9,	// (0x000442aa) scroll_pane_cp36

0x9c9a,	// (0x00040d9b) list_single_graphic_hl_pane_cp2_ParamLimits

0x9c9a,	// (0x00040d9b) list_single_graphic_hl_pane_cp2

0xc491,	// (0x00043592) list_single_graphic_hl_pane_ParamLimits

0xc491,	// (0x00043592) list_single_graphic_hl_pane

0xecd7,	// (0x00045dd8) aid_size_min_hl_cp1

0x53b5,	// (0x0003c4b6) list_highlight_pane_cp34_ParamLimits

0x53b5,	// (0x0003c4b6) list_highlight_pane_cp34

0x53c6,	// (0x0003c4c7) list_single_graphic_hl_pane_g1_ParamLimits

0x53c6,	// (0x0003c4c7) list_single_graphic_hl_pane_g1

0xabe4,	// (0x00041ce5) list_single_graphic_hl_pane_g2_ParamLimits

0xabe4,	// (0x00041ce5) list_single_graphic_hl_pane_g2

0xabe4,	// (0x00041ce5) list_single_graphic_hl_pane_g3_ParamLimits

0xabe4,	// (0x00041ce5) list_single_graphic_hl_pane_g3

0xd659,	// (0x0004475a) list_single_graphic_hl_pane_g4_ParamLimits

0xd659,	// (0x0004475a) list_single_graphic_hl_pane_g4

0xabf0,	// (0x00041cf1) list_single_graphic_hl_pane_g5_ParamLimits

0xabf0,	// (0x00041cf1) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x00046cf7) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x00046cf7) list_single_graphic_hl_pane_g

0xac04,	// (0x00041d05) list_single_graphic_hl_pane_t1_ParamLimits

0xac04,	// (0x00041d05) list_single_graphic_hl_pane_t1

0x53d3,	// (0x0003c4d4) aid_size_min_hl_cp2

0x53dc,	// (0x0003c4dd) list_highlight_pane_cp34_cp2_ParamLimits

0x53dc,	// (0x0003c4dd) list_highlight_pane_cp34_cp2

0x53c6,	// (0x0003c4c7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x53c6,	// (0x0003c4c7) list_single_graphic_hl_pane_g1_cp2

0x53e9,	// (0x0003c4ea) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x53e9,	// (0x0003c4ea) list_single_graphic_hl_pane_g2_cp2

0xc95f,	// (0x00043a60) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc95f,	// (0x00043a60) list_single_graphic_hl_pane_g3_cp2

0xd665,	// (0x00044766) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd665,	// (0x00044766) list_single_graphic_hl_pane_g4_cp2

0x5403,	// (0x0003c504) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5403,	// (0x0003c504) list_single_graphic_hl_pane_g5_cp2

0x9fb5,	// (0x000410b6) control_pane_g4_ParamLimits

0x9fb5,	// (0x000410b6) control_pane_g4

0x19ec,	// (0x00038aed) bg_popup_sub_pane_cp10_ParamLimits

0x4b73,	// (0x0003bc74) list_choice_list_pane_ParamLimits

0x4b82,	// (0x0003bc83) scroll_pane_cp23

0xb3eb,	// (0x000424ec) bg_popup_preview_window_pane_cp02_ParamLimits

0x51dd,	// (0x0003c2de) list_preview_fixed_pane_ParamLimits

0x51f3,	// (0x0003c2f4) list_preview_fixed_pane_cp_ParamLimits

0x51f3,	// (0x0003c2f4) list_preview_fixed_pane_cp

0x51ff,	// (0x0003c300) popup_preview_fixed_window_g1_ParamLimits

0x51ff,	// (0x0003c300) popup_preview_fixed_window_g1

0x520b,	// (0x0003c30c) popup_preview_fixed_window_g2_ParamLimits

0x520b,	// (0x0003c30c) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x00046c7f) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x00046c7f) popup_preview_fixed_window_g

0xee55,	// (0x00045f56) aid_navi_side_left_pane_ParamLimits

0xee6a,	// (0x00045f6b) aid_navi_side_right_pane_ParamLimits

0xee82,	// (0x00045f83) navi_icon_pane_stacon_ParamLimits

0xee96,	// (0x00045f97) navi_navi_pane_stacon_ParamLimits

0xee82,	// (0x00045f83) navi_text_pane_stacon_ParamLimits

0x84b6,	// (0x0003f5b7) main_text_info_pane

0x542d,	// (0x0003c52e) listscroll_text_info_pane

0x5435,	// (0x0003c536) list_text_info_pane_ParamLimits

0x5435,	// (0x0003c536) list_text_info_pane

0x5444,	// (0x0003c545) scroll_pane_cp24_ParamLimits

0x5444,	// (0x0003c545) scroll_pane_cp24

0xc96d,	// (0x00043a6e) list_text_info_pane_t1_ParamLimits

0xc96d,	// (0x00043a6e) list_text_info_pane_t1

0xa147,	// (0x00041248) popup_fast_swap2_window_ParamLimits

0xa147,	// (0x00041248) popup_fast_swap2_window

0x5487,	// (0x0003c588) aid_size_cell_fast2

0x84b6,	// (0x0003f5b7) bg_popup_window_pane_cp17

0x2961,	// (0x00039a62) heading_pane_cp2

0xb5f1,	// (0x000426f2) listscroll_fast2_pane

0x5491,	// (0x0003c592) grid_fast2_pane

0x549b,	// (0x0003c59c) listscroll_fast2_pane_g1

0x54a5,	// (0x0003c5a6) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x00046d02) listscroll_fast2_pane_g

0xb9f9,	// (0x00042afa) scroll_pane_cp26

0x54af,	// (0x0003c5b0) cell_fast2_pane_ParamLimits

0x54af,	// (0x0003c5b0) cell_fast2_pane

0x54c6,	// (0x0003c5c7) cell_fast2_pane_g1

0x54cf,	// (0x0003c5d0) cell_fast2_pane_g2

0x54d8,	// (0x0003c5d9) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x00046d07) cell_fast2_pane_g

0xb633,	// (0x00042734) grid_highlight_pane_cp9

0xb648,	// (0x00042749) main_eswt_pane_ParamLimits

0xb648,	// (0x00042749) main_eswt_pane

0x5459,	// (0x0003c55a) list_single_text_info_pane

0x54e0,	// (0x0003c5e1) eswt_ctrl_button_pane

0x54e0,	// (0x0003c5e1) eswt_ctrl_canvas_pane

0x54e8,	// (0x0003c5e9) eswt_ctrl_combo_pane

0x54e0,	// (0x0003c5e1) eswt_ctrl_default_pane

0x54e0,	// (0x0003c5e1) eswt_ctrl_label_pane

0x54f0,	// (0x0003c5f1) eswt_ctrl_wait_pane

0x54f8,	// (0x0003c5f9) eswt_shell_pane

0x84b6,	// (0x0003f5b7) listscroll_eswt_app_pane

0x5518,	// (0x0003c619) popup_eswt_tasktip_window_ParamLimits

0x5518,	// (0x0003c619) popup_eswt_tasktip_window

0x25a1,	// (0x000396a2) bg_popup_window_pane_cp18

0x5529,	// (0x0003c62a) eswt_control_pane_g1_ParamLimits

0x5529,	// (0x0003c62a) eswt_control_pane_g1

0x5536,	// (0x0003c637) eswt_control_pane_g2_ParamLimits

0x5536,	// (0x0003c637) eswt_control_pane_g2

0x5543,	// (0x0003c644) eswt_control_pane_g3_ParamLimits

0x5543,	// (0x0003c644) eswt_control_pane_g3

0x5550,	// (0x0003c651) eswt_control_pane_g4_ParamLimits

0x5550,	// (0x0003c651) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x00046d0e) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x00046d0e) eswt_control_pane_g

0xb8cd,	// (0x000429ce) bg_button_pane_ParamLimits

0xb8cd,	// (0x000429ce) bg_button_pane

0xb648,	// (0x00042749) common_borders_pane_copy2_ParamLimits

0xb648,	// (0x00042749) common_borders_pane_copy2

0x555d,	// (0x0003c65e) control_button_pane_g1_ParamLimits

0x555d,	// (0x0003c65e) control_button_pane_g1

0x5569,	// (0x0003c66a) control_button_pane_g2_ParamLimits

0x5569,	// (0x0003c66a) control_button_pane_g2

0x5575,	// (0x0003c676) control_button_pane_g3_ParamLimits

0x5575,	// (0x0003c676) control_button_pane_g3

0x0002,

0xfc16,	// (0x00046d17) control_button_pane_g_ParamLimits

0xfc16,	// (0x00046d17) control_button_pane_g

0x5589,	// (0x0003c68a) control_button_pane_t1

0x5597,	// (0x0003c698) control_button_pane_t2

0x0001,

0xfc1d,	// (0x00046d1e) control_button_pane_t

0x252d,	// (0x0003962e) bg_button_pane_g1

0x253d,	// (0x0003963e) bg_button_pane_g2

0x2535,	// (0x00039636) bg_button_pane_g3

0x254d,	// (0x0003964e) bg_button_pane_g4

0x2545,	// (0x00039646) bg_button_pane_g5

0x2555,	// (0x00039656) bg_button_pane_g6

0x255d,	// (0x0003965e) bg_button_pane_g7

0x256d,	// (0x0003966e) bg_button_pane_g8

0x2565,	// (0x00039666) bg_button_pane_g9

0x0008,

0xf867,	// (0x00046968) bg_button_pane_g

0x4b2e,	// (0x0003bc2f) common_borders_pane_ParamLimits

0x4b2e,	// (0x0003bc2f) common_borders_pane

0x5529,	// (0x0003c62a) eswt_control_pane_g1_copy1_ParamLimits

0x5529,	// (0x0003c62a) eswt_control_pane_g1_copy1

0x5536,	// (0x0003c637) eswt_control_pane_g2_copy1_ParamLimits

0x5536,	// (0x0003c637) eswt_control_pane_g2_copy1

0x5543,	// (0x0003c644) eswt_control_pane_g3_copy1_ParamLimits

0x5543,	// (0x0003c644) eswt_control_pane_g3_copy1

0x5550,	// (0x0003c651) eswt_control_pane_g4_copy1_ParamLimits

0x5550,	// (0x0003c651) eswt_control_pane_g4_copy1

0x4b69,	// (0x0003bc6a) bg_eswt_ctrl_canvas_pane_g1

0x4b2e,	// (0x0003bc2f) common_borders_pane_cp2_ParamLimits

0x4b2e,	// (0x0003bc2f) common_borders_pane_cp2

0x4b2e,	// (0x0003bc2f) common_borders_pane_cp3_ParamLimits

0x4b2e,	// (0x0003bc2f) common_borders_pane_cp3

0x55a5,	// (0x0003c6a6) separator_horizontal_pane

0x55ad,	// (0x0003c6ae) separator_vertical_pane

0x5529,	// (0x0003c62a) eswt_control_pane_g1_copy2_ParamLimits

0x5529,	// (0x0003c62a) eswt_control_pane_g1_copy2

0x5536,	// (0x0003c637) eswt_control_pane_g2_copy2_ParamLimits

0x5536,	// (0x0003c637) eswt_control_pane_g2_copy2

0x5543,	// (0x0003c644) eswt_control_pane_g3_copy2_ParamLimits

0x5543,	// (0x0003c644) eswt_control_pane_g3_copy2

0x5550,	// (0x0003c651) eswt_control_pane_g4_copy2_ParamLimits

0x5550,	// (0x0003c651) eswt_control_pane_g4_copy2

0x84b6,	// (0x0003f5b7) common_borders_pane_cp4

0x55b6,	// (0x0003c6b7) separator_horizontal_pane_g1

0x55bf,	// (0x0003c6c0) separator_horizontal_pane_g2

0x55c8,	// (0x0003c6c9) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x00046d23) separator_horizontal_pane_g

0x5529,	// (0x0003c62a) eswt_control_pane_g1_copy3_ParamLimits

0x5529,	// (0x0003c62a) eswt_control_pane_g1_copy3

0x5536,	// (0x0003c637) eswt_control_pane_g2_copy3_ParamLimits

0x5536,	// (0x0003c637) eswt_control_pane_g2_copy3

0x5543,	// (0x0003c644) eswt_control_pane_g3_copy3_ParamLimits

0x5543,	// (0x0003c644) eswt_control_pane_g3_copy3

0x5550,	// (0x0003c651) eswt_control_pane_g4_copy3_ParamLimits

0x5550,	// (0x0003c651) eswt_control_pane_g4_copy3

0x84b6,	// (0x0003f5b7) common_borders_pane_cp5

0x55d1,	// (0x0003c6d2) separator_vertical_pane_g1

0x55da,	// (0x0003c6db) separator_vertical_pane_g2

0x55e3,	// (0x0003c6e4) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x00046d2a) separator_vertical_pane_g

0x5529,	// (0x0003c62a) eswt_control_pane_g1_copy4_ParamLimits

0x5529,	// (0x0003c62a) eswt_control_pane_g1_copy4

0x5536,	// (0x0003c637) eswt_control_pane_g2_copy4_ParamLimits

0x5536,	// (0x0003c637) eswt_control_pane_g2_copy4

0x5543,	// (0x0003c644) eswt_control_pane_g3_copy4_ParamLimits

0x5543,	// (0x0003c644) eswt_control_pane_g3_copy4

0x5550,	// (0x0003c651) eswt_control_pane_g4_copy4_ParamLimits

0x5550,	// (0x0003c651) eswt_control_pane_g4_copy4

0xc98f,	// (0x00043a90) eswt_ctrl_combo_button_pane

0xc997,	// (0x00043a98) eswt_ctrl_input_pane

0xc99f,	// (0x00043aa0) popup_choice_list_window_cp70

0xc9a7,	// (0x00043aa8) eswt_ctrl_input_pane_t1

0x84b6,	// (0x0003f5b7) input_focus_pane_cp70

0x4b2e,	// (0x0003bc2f) bg_button_pane_cp70_ParamLimits

0x4b2e,	// (0x0003bc2f) bg_button_pane_cp70

0xc9b5,	// (0x00043ab6) eswt_ctrl_combo_button_pane_g1

0x561a,	// (0x0003c71b) wait_bar_pane_cp70

0x25a1,	// (0x000396a2) bg_popup_window_pane_cp70_ParamLimits

0x25a1,	// (0x000396a2) bg_popup_window_pane_cp70

0x5622,	// (0x0003c723) popup_eswt_tasktip_window_t1

0x5638,	// (0x0003c739) wait_bar_pane_cp71_ParamLimits

0x5638,	// (0x0003c739) wait_bar_pane_cp71

0x5644,	// (0x0003c745) grid_eswt_app_pane

0xbc3e,	// (0x00042d3f) scroll_pane_cp70

0xc9bd,	// (0x00043abe) cell_eswt_app_pane_ParamLimits

0xc9bd,	// (0x00043abe) cell_eswt_app_pane

0xc9ef,	// (0x00043af0) cell_eswt_app_pane_g1_ParamLimits

0xc9ef,	// (0x00043af0) cell_eswt_app_pane_g1

0xca1e,	// (0x00043b1f) cell_eswt_app_pane_g2_ParamLimits

0xca1e,	// (0x00043b1f) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x00046d31) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x00046d31) cell_eswt_app_pane_g

0xca47,	// (0x00043b48) cell_eswt_app_pane_t1_ParamLimits

0xca47,	// (0x00043b48) cell_eswt_app_pane_t1

0x5709,	// (0x0003c80a) grid_highlight_pane_cp70_ParamLimits

0x5709,	// (0x0003c80a) grid_highlight_pane_cp70

0xf444,	// (0x00046545) set_content_pane_g1

0x1916,	// (0x00038a17) status_small_volume_pane

0x09e6,	// (0x00037ae7) status_small_volume_pane_g1

0x09ee,	// (0x00037aef) volume_small2_pane

0x09f7,	// (0x00037af8) volume_small2_pane_g1

0x0a00,	// (0x00037b01) volume_small2_pane_g2

0x0a09,	// (0x00037b0a) volume_small2_pane_g3

0x0a12,	// (0x00037b13) volume_small2_pane_g4

0x0a1b,	// (0x00037b1c) volume_small2_pane_g5

0x0a24,	// (0x00037b25) volume_small2_pane_g6

0x0a2d,	// (0x00037b2e) volume_small2_pane_g7

0x0a36,	// (0x00037b37) volume_small2_pane_g8

0x0a3f,	// (0x00037b40) volume_small2_pane_g9

0x0a48,	// (0x00037b49) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x00046d36) volume_small2_pane_g

0x4f64,	// (0x0003c065) fep_vkb_top_text_pane_g1_ParamLimits

0xc907,	// (0x00043a08) fep_vkb_top_text_pane_t1_ParamLimits

0x5217,	// (0x0003c318) popup_preview_fixed_window_g3_ParamLimits

0x5217,	// (0x0003c318) popup_preview_fixed_window_g3

0xa7e1,	// (0x000418e2) popup_toolbar_trans_pane

0xc2e1,	// (0x000433e2) aid_height_set_list_ParamLimits

0x390a,	// (0x0003aa0b) aid_size_parent_ParamLimits

0x19ec,	// (0x00038aed) list_highlight_pane_cp2_ParamLimits

0xf444,	// (0x00046545) set_content_pane_g1_ParamLimits

0xc4a5,	// (0x000435a6) list_single_image_pane_ParamLimits

0xc4a5,	// (0x000435a6) list_single_image_pane

0xca79,	// (0x00043b7a) aid_size_cell_image_ParamLimits

0xca79,	// (0x00043b7a) aid_size_cell_image

0xca86,	// (0x00043b87) grid_single_image_pane_ParamLimits

0xca86,	// (0x00043b87) grid_single_image_pane

0xb8db,	// (0x000429dc) list_single_image_pane_g1_ParamLimits

0xb8db,	// (0x000429dc) list_single_image_pane_g1

0xb8e7,	// (0x000429e8) list_single_image_pane_g2_ParamLimits

0xb8e7,	// (0x000429e8) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x00046d4b) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x00046d4b) list_single_image_pane_g

0x5730,	// (0x0003c831) list_single_image_pane_t1_ParamLimits

0x5730,	// (0x0003c831) list_single_image_pane_t1

0xca94,	// (0x00043b95) cell_image_list_pane_ParamLimits

0xca94,	// (0x00043b95) cell_image_list_pane

0xcaa8,	// (0x00043ba9) cell_image_list_pane_g1

0xcab1,	// (0x00043bb2) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x00046d50) cell_image_list_pane_g

0x576e,	// (0x0003c86f) aid_size_cell_tb_trans_pane

0xb8cd,	// (0x000429ce) bg_tb_trans_pane

0x5780,	// (0x0003c881) grid_tb_trans_pane

0x252d,	// (0x0003962e) bg_tb_trans_pane_g1

0x253d,	// (0x0003963e) bg_tb_trans_pane_g2

0x2535,	// (0x00039636) bg_tb_trans_pane_g3

0x254d,	// (0x0003964e) bg_tb_trans_pane_g4

0x2545,	// (0x00039646) bg_tb_trans_pane_g5

0x256d,	// (0x0003966e) bg_tb_trans_pane_g6

0x2565,	// (0x00039666) bg_tb_trans_pane_g7

0x2555,	// (0x00039656) bg_tb_trans_pane_g8

0x255d,	// (0x0003965e) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x00046d55) bg_tb_trans_pane_g

0x5794,	// (0x0003c895) cell_toolbar_trans_pane_ParamLimits

0x5794,	// (0x0003c895) cell_toolbar_trans_pane

0x4b69,	// (0x0003bc6a) cell_toolbar_trans_pane_g1

0xc6df,	// (0x000437e0) list_form2_midp_pane_t1

0xc6ed,	// (0x000437ee) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x00046bf2) list_form2_midp_pane_t

0x47a9,	// (0x0003b8aa) scroll_pane_cp51_ParamLimits

0x4970,	// (0x0003ba71) form2_midp_wait_pane_g1

0x4979,	// (0x0003ba7a) form2_midp_wait_pane_g2

0x4982,	// (0x0003ba83) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x00046c07) form2_midp_wait_pane_g

0xb2b8,	// (0x000423b9) list_highlight_pane_cp21_ParamLimits

0x49c6,	// (0x0003bac7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x49d5,	// (0x0003bad6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd2e6,	// (0x000443e7) list_single_2graphic_im_pane_ParamLimits

0xd2e6,	// (0x000443e7) list_single_2graphic_im_pane

0xcaba,	// (0x00043bbb) list_single_2graphic_im_pane_g1_ParamLimits

0xcaba,	// (0x00043bbb) list_single_2graphic_im_pane_g1

0xcacb,	// (0x00043bcc) list_single_2graphic_im_pane_g2_ParamLimits

0xcacb,	// (0x00043bcc) list_single_2graphic_im_pane_g2

0xcad7,	// (0x00043bd8) list_single_2graphic_im_pane_g3_ParamLimits

0xcad7,	// (0x00043bd8) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x00046d68) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x00046d68) list_single_2graphic_im_pane_g

0xcaeb,	// (0x00043bec) list_single_2graphic_im_pane_t1_ParamLimits

0xcaeb,	// (0x00043bec) list_single_2graphic_im_pane_t1

0x5223,	// (0x0003c324) list_single_graphic_2heading_pane_fp_ParamLimits

0x5223,	// (0x0003c324) list_single_graphic_2heading_pane_fp

0xd621,	// (0x00044722) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd621,	// (0x00044722) list_single_graphic_2heading_pane_fp_g1

0x523c,	// (0x0003c33d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x523c,	// (0x0003c33d) list_single_graphic_2heading_pane_fp_g2

0xd5ea,	// (0x000446eb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd5ea,	// (0x000446eb) list_single_graphic_2heading_pane_fp_g3

0xd5f6,	// (0x000446f7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd5f6,	// (0x000446f7) list_single_graphic_2heading_pane_fp_g4

0x5248,	// (0x0003c349) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5248,	// (0x0003c349) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00046c8f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00046c8f) list_single_graphic_2heading_pane_fp_g

0xece0,	// (0x00045de1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xece0,	// (0x00045de1) list_single_graphic_2heading_pane_fp_t1

0xeb81,	// (0x00045c82) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeb81,	// (0x00045c82) list_single_graphic_2heading_pane_fp_t2

0xecf6,	// (0x00045df7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xecf6,	// (0x00045df7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x00046d71) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x00046d71) list_single_graphic_2heading_pane_fp_t

0x4bfa,	// (0x0003bcfb) fep_hwr_write_pane_g5_ParamLimits

0x4bfa,	// (0x0003bcfb) fep_hwr_write_pane_g5

0x4c06,	// (0x0003bd07) fep_hwr_write_pane_g6_ParamLimits

0x4c06,	// (0x0003bd07) fep_hwr_write_pane_g6

0x54f8,	// (0x0003c5f9) eswt_shell_pane_ParamLimits

0x25a1,	// (0x000396a2) bg_popup_window_pane_cp18_ParamLimits

0x3850,	// (0x0003a951) heading_pane_cp70

0x5622,	// (0x0003c723) popup_eswt_tasktip_window_t1_ParamLimits

0xa8ab,	// (0x000419ac) aid_touch_tab_arrow_left

0xa8c1,	// (0x000419c2) aid_touch_tab_arrow_right

0x84d4,	// (0x0003f5d5) title_pane_g3_ParamLimits

0x84d4,	// (0x0003f5d5) title_pane_g3

0xb88c,	// (0x0004298d) set_value_pane_g1

0xa7e1,	// (0x000418e2) popup_toolbar_trans_pane_ParamLimits

0x576e,	// (0x0003c86f) aid_size_cell_tb_trans_pane_ParamLimits

0xb8cd,	// (0x000429ce) bg_tb_trans_pane_ParamLimits

0x5780,	// (0x0003c881) grid_tb_trans_pane_ParamLimits

0xb3eb,	// (0x000424ec) cont_note_pane_ParamLimits

0xb3eb,	// (0x000424ec) cont_note_pane

0xb648,	// (0x00042749) cont_snote2_single_text_pane_ParamLimits

0xb648,	// (0x00042749) cont_snote2_single_text_pane

0xb648,	// (0x00042749) cont_snote2_single_graphic_pane_ParamLimits

0xb648,	// (0x00042749) cont_snote2_single_graphic_pane

0x2b7d,	// (0x00039c7e) cont_note_wait_pane_ParamLimits

0x2b7d,	// (0x00039c7e) cont_note_wait_pane

0x2b7d,	// (0x00039c7e) cont_note_image_pane_ParamLimits

0x2b7d,	// (0x00039c7e) cont_note_image_pane

0x5828,	// (0x0003c929) popup_note2_window_g1_ParamLimits

0x5828,	// (0x0003c929) popup_note2_window_g1

0x5859,	// (0x0003c95a) popup_note2_window_t1_ParamLimits

0x5859,	// (0x0003c95a) popup_note2_window_t1

0x589e,	// (0x0003c99f) popup_note2_window_t2_ParamLimits

0x589e,	// (0x0003c99f) popup_note2_window_t2

0x58e3,	// (0x0003c9e4) popup_note2_window_t3_ParamLimits

0x58e3,	// (0x0003c9e4) popup_note2_window_t3

0x5928,	// (0x0003ca29) popup_note2_window_t4_ParamLimits

0x5928,	// (0x0003ca29) popup_note2_window_t4

0xb46f,	// (0x00042570) popup_note2_window_t5_ParamLimits

0xb46f,	// (0x00042570) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x00046d7d) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x00046d7d) popup_note2_window_t

0x5957,	// (0x0003ca58) popup_note2_image_window_g1_ParamLimits

0x5957,	// (0x0003ca58) popup_note2_image_window_g1

0x5963,	// (0x0003ca64) popup_note2_image_window_g2_ParamLimits

0x5963,	// (0x0003ca64) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x00046d88) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x00046d88) popup_note2_image_window_g

0x5975,	// (0x0003ca76) popup_note2_image_window_t1_ParamLimits

0x5975,	// (0x0003ca76) popup_note2_image_window_t1

0x598d,	// (0x0003ca8e) popup_note2_image_window_t2_ParamLimits

0x598d,	// (0x0003ca8e) popup_note2_image_window_t2

0x59a5,	// (0x0003caa6) popup_note2_image_window_t3_ParamLimits

0x59a5,	// (0x0003caa6) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x00046d8d) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x00046d8d) popup_note2_image_window_t

0x2b8b,	// (0x00039c8c) popup_note2_wait_window_g1_ParamLimits

0x2b8b,	// (0x00039c8c) popup_note2_wait_window_g1

0x59c1,	// (0x0003cac2) popup_note2_wait_window_g2_ParamLimits

0x59c1,	// (0x0003cac2) popup_note2_wait_window_g2

0x2ba3,	// (0x00039ca4) popup_note2_wait_window_g3_ParamLimits

0x2ba3,	// (0x00039ca4) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x00046d94) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x00046d94) popup_note2_wait_window_g

0x59cd,	// (0x0003cace) popup_note2_wait_window_t1_ParamLimits

0x59cd,	// (0x0003cace) popup_note2_wait_window_t1

0x59eb,	// (0x0003caec) popup_note2_wait_window_t2_ParamLimits

0x59eb,	// (0x0003caec) popup_note2_wait_window_t2

0x5a09,	// (0x0003cb0a) popup_note2_wait_window_t3_ParamLimits

0x5a09,	// (0x0003cb0a) popup_note2_wait_window_t3

0x5a1b,	// (0x0003cb1c) popup_note2_wait_window_t4_ParamLimits

0x5a1b,	// (0x0003cb1c) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x00046d9b) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x00046d9b) popup_note2_wait_window_t

0x5a2d,	// (0x0003cb2e) wait_bar2_pane_ParamLimits

0x5a2d,	// (0x0003cb2e) wait_bar2_pane

0x5a45,	// (0x0003cb46) popup_snote2_single_text_window_g1_ParamLimits

0x5a45,	// (0x0003cb46) popup_snote2_single_text_window_g1

0x5a6d,	// (0x0003cb6e) popup_snote2_single_text_window_t1_ParamLimits

0x5a6d,	// (0x0003cb6e) popup_snote2_single_text_window_t1

0x5ab9,	// (0x0003cbba) popup_snote2_single_text_window_t2_ParamLimits

0x5ab9,	// (0x0003cbba) popup_snote2_single_text_window_t2

0x5b05,	// (0x0003cc06) popup_snote2_single_text_window_t3_ParamLimits

0x5b05,	// (0x0003cc06) popup_snote2_single_text_window_t3

0x5b46,	// (0x0003cc47) popup_snote2_single_text_window_t4_ParamLimits

0x5b46,	// (0x0003cc47) popup_snote2_single_text_window_t4

0x5b7c,	// (0x0003cc7d) popup_snote2_single_text_window_t5_ParamLimits

0x5b7c,	// (0x0003cc7d) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x00046da4) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x00046da4) popup_snote2_single_text_window_t

0x5ba7,	// (0x0003cca8) popup_snote2_single_graphic_window_g1_ParamLimits

0x5ba7,	// (0x0003cca8) popup_snote2_single_graphic_window_g1

0x5bcf,	// (0x0003ccd0) popup_snote2_single_graphic_window_g2_ParamLimits

0x5bcf,	// (0x0003ccd0) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x00046daf) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x00046daf) popup_snote2_single_graphic_window_g

0x5bf7,	// (0x0003ccf8) popup_snote2_single_graphic_window_t1_ParamLimits

0x5bf7,	// (0x0003ccf8) popup_snote2_single_graphic_window_t1

0x5c43,	// (0x0003cd44) popup_snote2_single_graphic_window_t2_ParamLimits

0x5c43,	// (0x0003cd44) popup_snote2_single_graphic_window_t2

0x5b05,	// (0x0003cc06) popup_snote2_single_graphic_window_t3_ParamLimits

0x5b05,	// (0x0003cc06) popup_snote2_single_graphic_window_t3

0x5b46,	// (0x0003cc47) popup_snote2_single_graphic_window_t4_ParamLimits

0x5b46,	// (0x0003cc47) popup_snote2_single_graphic_window_t4

0x5b7c,	// (0x0003cc7d) popup_snote2_single_graphic_window_t5_ParamLimits

0x5b7c,	// (0x0003cc7d) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x00046db4) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x00046db4) popup_snote2_single_graphic_window_t

0x4659,	// (0x0003b75a) clock_nsta_pane_cp2_t1

0x4659,	// (0x0003b75a) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x00046bc8) clock_nsta_pane_cp2_t

0xcf8f,	// (0x00044090) form_field_data_wide_pane_g1_ParamLimits

0xb8db,	// (0x000429dc) form_field_data_wide_pane_g2_ParamLimits

0xb8db,	// (0x000429dc) form_field_data_wide_pane_g2

0xb8e7,	// (0x000429e8) form_field_data_wide_pane_g3_ParamLimits

0xb8e7,	// (0x000429e8) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00046782) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00046782) form_field_data_wide_pane_g

0xc5e7,	// (0x000436e8) grid_touch_3_pane_ParamLimits

0xc5e7,	// (0x000436e8) grid_touch_3_pane

0xcb1c,	// (0x00043c1d) cell_touch_3_pane_ParamLimits

0xcb1c,	// (0x00043c1d) cell_touch_3_pane

0x4b69,	// (0x0003bc6a) cell_touch_3_pane_g1

0x4b69,	// (0x0003bc6a) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x00046c4d) cell_touch_3_pane_g

0xb4a1,	// (0x000425a2) cont_query_data_pane

0xb4a9,	// (0x000425aa) cont_query_data_pane_cp1

0x5cc2,	// (0x0003cdc3) button_value_adjust_pane_cp7

0x5cca,	// (0x0003cdcb) query_popup_pane_cp3

0xef99,	// (0x0004609a) bg_popup_sub_pane_cp22_ParamLimits

0xefaf,	// (0x000460b0) navi_navi_volume_pane_cp2

0xefca,	// (0x000460cb) popup_side_volume_key_window_g2

0xefd9,	// (0x000460da) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00046818) popup_side_volume_key_window_g

0xeff6,	// (0x000460f7) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0004681f) popup_side_volume_key_window_t

0xf347,	// (0x00046448) popup_side_volume_key_window_ParamLimits

0x9665,	// (0x00040766) list_double_graphic_pane_g4_ParamLimits

0x9665,	// (0x00040766) list_double_graphic_pane_g4

0xab81,	// (0x00041c82) list_single_2heading_msg_pane_ParamLimits

0xab81,	// (0x00041c82) list_single_2heading_msg_pane

0xac1a,	// (0x00041d1b) list_single_2heading_msg_pane_g1_ParamLimits

0xac1a,	// (0x00041d1b) list_single_2heading_msg_pane_g1

0xac26,	// (0x00041d27) list_single_2heading_msg_pane_g2_ParamLimits

0xac26,	// (0x00041d27) list_single_2heading_msg_pane_g2

0xac39,	// (0x00041d3a) list_single_2heading_msg_pane_g3_ParamLimits

0xac39,	// (0x00041d3a) list_single_2heading_msg_pane_g3

0xac45,	// (0x00041d46) list_single_2heading_msg_pane_g4_ParamLimits

0xac45,	// (0x00041d46) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x00046dbf) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x00046dbf) list_single_2heading_msg_pane_g

0xac5d,	// (0x00041d5e) list_single_2heading_msg_pane_t1_ParamLimits

0xac5d,	// (0x00041d5e) list_single_2heading_msg_pane_t1

0xac85,	// (0x00041d86) list_single_2heading_msg_pane_t2_ParamLimits

0xac85,	// (0x00041d86) list_single_2heading_msg_pane_t2

0xacf0,	// (0x00041df1) list_single_2heading_msg_pane_t3_ParamLimits

0xacf0,	// (0x00041df1) list_single_2heading_msg_pane_t3

0xed16,	// (0x00045e17) list_single_2heading_msg_pane_t4_ParamLimits

0xed16,	// (0x00045e17) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x00046dc8) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x00046dc8) list_single_2heading_msg_pane_t

0x84e0,	// (0x0003f5e1) title_pane_g4_ParamLimits

0x84e0,	// (0x0003f5e1) title_pane_g4

0xeda5,	// (0x00045ea6) title_pane_stacon_g3_ParamLimits

0xeda5,	// (0x00045ea6) title_pane_stacon_g3

0x57eb,	// (0x0003c8ec) list_single_2graphic_im_pane_g4_ParamLimits

0x57eb,	// (0x0003c8ec) list_single_2graphic_im_pane_g4

0x35ed,	// (0x0003a6ee) popup_side_volume_key_window_cp

0x3e4d,	// (0x0003af4e) main_idle_act2_pane_t1

0x00a4,	// (0x000371a5) toolbar_button_pane_g10

0x94ee,	// (0x000405ef) popup_toolbar_window_cp1

0x464a,	// (0x0003b74b) clock_nsta_pane_cp_t1

0x464a,	// (0x0003b74b) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x00046bc3) clock_nsta_pane_cp_t

0xefaf,	// (0x000460b0) navi_navi_volume_pane_cp2_ParamLimits

0xefbe,	// (0x000460bf) popup_side_volume_key_window_g1_ParamLimits

0xefca,	// (0x000460cb) popup_side_volume_key_window_g2_ParamLimits

0xefd9,	// (0x000460da) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00046818) popup_side_volume_key_window_g_ParamLimits

0x0601,	// (0x00037702) fep_hwr_aid_pane

0x06aa,	// (0x000377ab) bg_fep_hwr_top_pane_g4_ParamLimits

0x4bca,	// (0x0003bccb) fep_hwr_top_pane_g1_ParamLimits

0x4bdc,	// (0x0003bcdd) fep_hwr_top_pane_g2_ParamLimits

0x06ca,	// (0x000377cb) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x00046c18) fep_hwr_top_pane_g_ParamLimits

0x06df,	// (0x000377e0) fep_hwr_top_text_pane_ParamLimits

0x33a2,	// (0x0003a4a3) aid_touch_tab_arrow_arrow_2

0x33ab,	// (0x0003a4ac) aid_touch_tab_arrow_left_2

0x0615,	// (0x00037716) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x064c,	// (0x0003774d) fep_hwr_prediction_pane

0x4d5e,	// (0x0003be5f) fep_vkb_prediction_pane

0xc8e7,	// (0x000439e8) fep_vkb_side_pane_g3_ParamLimits

0xc8e7,	// (0x000439e8) fep_vkb_side_pane_g3

0x086e,	// (0x0003796f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x08df,	// (0x000379e0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x08ec,	// (0x000379ed) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x00046cc7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0b16,	// (0x00037c17) fep_hwr_prediction_pane_g1

0x0b20,	// (0x00037c21) fep_hwr_prediction_pane_g2

0x0b28,	// (0x00037c29) fep_hwr_prediction_pane_g3

0x0b30,	// (0x00037c31) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00046dd1) fep_hwr_prediction_pane_g

0x5cf1,	// (0x0003cdf2) fep_vkb_prediction_pane_g1

0x5cfb,	// (0x0003cdfc) fep_vkb_prediction_pane_g2

0x5d03,	// (0x0003ce04) fep_vkb_prediction_pane_g3

0x5d0b,	// (0x0003ce0c) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x00046dda) fep_vkb_prediction_pane_g

0x03f8,	// (0x000374f9) slider_set_pane_g3

0x040c,	// (0x0003750d) slider_set_pane_g4

0x0424,	// (0x00037525) slider_set_pane_g5

0x03f8,	// (0x000374f9) slider_set_pane_g6

0x043a,	// (0x0003753b) slider_set_pane_g7

0x3a8f,	// (0x0003ab90) slider_form_pane_g3

0x3a98,	// (0x0003ab99) slider_form_pane_g4

0x3aa0,	// (0x0003aba1) slider_form_pane_g5

0x3a8f,	// (0x0003ab90) slider_form_pane_g6

0xc450,	// (0x00043551) slider_form_pane_g7

0x4104,	// (0x0003b205) slider_set_pane_vc_g3

0x410d,	// (0x0003b20e) slider_set_pane_vc_g4

0x4116,	// (0x0003b217) slider_set_pane_vc_g5

0x4104,	// (0x0003b205) slider_set_pane_vc_g6

0x411f,	// (0x0003b220) slider_set_pane_vc_g7

0x42f7,	// (0x0003b3f8) slider_form_pane_vc_g1

0x4300,	// (0x0003b401) slider_form_pane_vc_g2

0x4309,	// (0x0003b40a) slider_form_pane_vc_g3

0x42f7,	// (0x0003b3f8) slider_form_pane_vc_g4

0x4312,	// (0x0003b413) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x00046b95) slider_form_pane_vc_g

0x84b6,	// (0x0003f5b7) main_idle_act3_pane

0x5d13,	// (0x0003ce14) ai3_links_pane

0xcb66,	// (0x00043c67) popup_ai3_data_window_ParamLimits

0xcb66,	// (0x00043c67) popup_ai3_data_window

0x84b6,	// (0x0003f5b7) grid_ai3_links_pane

0xcb84,	// (0x00043c85) cell_ai3_links_pane_ParamLimits

0xcb84,	// (0x00043c85) cell_ai3_links_pane

0x5d54,	// (0x0003ce55) bg_popup_sub_pane_cp11

0x5d61,	// (0x0003ce62) cell_ai3_links_pane_g1

0x84b6,	// (0x0003f5b7) bg_popup_sub_pane_cp12

0x5d86,	// (0x0003ce87) heading_ai3_data_pane

0x5d8e,	// (0x0003ce8f) list_ai3_gene_pane

0x5d9a,	// (0x0003ce9b) popup_ai3_data_window_g1

0x5da2,	// (0x0003cea3) heading_ai3_data_pane_g1

0x5daa,	// (0x0003ceab) heading_ai3_data_pane_t1

0x5db8,	// (0x0003ceb9) list_double_ai3_gene_pane_ParamLimits

0x5db8,	// (0x0003ceb9) list_double_ai3_gene_pane

0x5dc5,	// (0x0003cec6) list_single_ai3_gene_pane_ParamLimits

0x5dc5,	// (0x0003cec6) list_single_ai3_gene_pane

0x4b2e,	// (0x0003bc2f) list_highlight_pane_cp7_ParamLimits

0x4b2e,	// (0x0003bc2f) list_highlight_pane_cp7

0x5dd2,	// (0x0003ced3) list_single_a13_gene_pane_t1_ParamLimits

0x5dd2,	// (0x0003ced3) list_single_a13_gene_pane_t1

0x5de9,	// (0x0003ceea) list_single_ai3_gene_pane_g1

0x5df2,	// (0x0003cef3) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x00046de3) list_single_ai3_gene_pane_g

0x5dfa,	// (0x0003cefb) list_double_ai3_gene_pane_g1_ParamLimits

0x5dfa,	// (0x0003cefb) list_double_ai3_gene_pane_g1

0x5e06,	// (0x0003cf07) list_double_ai3_gene_pane_t1_ParamLimits

0x5e06,	// (0x0003cf07) list_double_ai3_gene_pane_t1

0x5e22,	// (0x0003cf23) list_double_ai3_gene_pane_t2_ParamLimits

0x5e22,	// (0x0003cf23) list_double_ai3_gene_pane_t2

0x5e37,	// (0x0003cf38) list_double_ai3_gene_pane_t3_ParamLimits

0x5e37,	// (0x0003cf38) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x00046de8) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x00046de8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xed0c,	// (0x00045e0d) aid_size_min_col_2

0xcb50,	// (0x00043c51) aid_size_min_msg_ParamLimits

0xcb50,	// (0x00043c51) aid_size_min_msg

0xc8fb,	// (0x000439fc) fep_vkb_top_text_pane_g2_ParamLimits

0xc8fb,	// (0x000439fc) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x00046c48) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x00046c48) fep_vkb_top_text_pane_g

0x84b6,	// (0x0003f5b7) main_hc_apps_shell_pane

0x5e54,	// (0x0003cf55) grid_hc_apps_pane_ParamLimits

0x5e54,	// (0x0003cf55) grid_hc_apps_pane

0x5e63,	// (0x0003cf64) list_hc_apps_pane

0x5e6b,	// (0x0003cf6c) scroll_pane_cp37_ParamLimits

0x5e6b,	// (0x0003cf6c) scroll_pane_cp37

0xcb9e,	// (0x00043c9f) cell_hc_apps_pane_ParamLimits

0xcb9e,	// (0x00043c9f) cell_hc_apps_pane

0xcc68,	// (0x00043d69) cell_hc_apps_pane_g1_ParamLimits

0xcc68,	// (0x00043d69) cell_hc_apps_pane_g1

0x5f60,	// (0x0003d061) cell_hc_apps_pane_g2_ParamLimits

0x5f60,	// (0x0003d061) cell_hc_apps_pane_g2

0x5f7c,	// (0x0003d07d) cell_hc_apps_pane_g3_ParamLimits

0x5f7c,	// (0x0003d07d) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x00046def) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x00046def) cell_hc_apps_pane_g

0xcc95,	// (0x00043d96) cell_hc_apps_pane_t1_ParamLimits

0xcc95,	// (0x00043d96) cell_hc_apps_pane_t1

0xb3eb,	// (0x000424ec) grid_highlight_pane_cp10_ParamLimits

0xb3eb,	// (0x000424ec) grid_highlight_pane_cp10

0xccd5,	// (0x00043dd6) list_single_hc_apps_pane_ParamLimits

0xccd5,	// (0x00043dd6) list_single_hc_apps_pane

0xcd0f,	// (0x00043e10) list_single_hc_apps_pane_g1

0xad5e,	// (0x00041e5f) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x00046df6) list_single_hc_apps_pane_g

0xad77,	// (0x00041e78) list_single_hc_apps_pane_g2_copy1

0xad93,	// (0x00041e94) list_single_hc_apps_pane_t1

0xb2b8,	// (0x000423b9) bg_set_opt_pane_cp_ParamLimits

0xea8c,	// (0x00045b8d) setting_slider_pane_t1_ParamLimits

0xeaa5,	// (0x00045ba6) setting_slider_pane_t2_ParamLimits

0xeabf,	// (0x00045bc0) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00046665) setting_slider_pane_t_ParamLimits

0xead7,	// (0x00045bd8) slider_set_pane_ParamLimits

0xf545,	// (0x00046646) control_pane_g5_ParamLimits

0xf545,	// (0x00046646) control_pane_g5

0x38bc,	// (0x0003a9bd) slider_set_pane_g1_ParamLimits

0x03ec,	// (0x000374ed) slider_set_pane_g2_ParamLimits

0x03f8,	// (0x000374f9) slider_set_pane_g3_ParamLimits

0x040c,	// (0x0003750d) slider_set_pane_g4_ParamLimits

0x0424,	// (0x00037525) slider_set_pane_g5_ParamLimits

0x03f8,	// (0x000374f9) slider_set_pane_g6_ParamLimits

0x043a,	// (0x0003753b) slider_set_pane_g7_ParamLimits

0xf965,	// (0x00046a66) slider_set_pane_g_ParamLimits

0xf3ef,	// (0x000464f0) navi_icon_text_pane_ParamLimits

0xa872,	// (0x00041973) aid_fill_nsta_2_ParamLimits

0xa8ab,	// (0x000419ac) aid_touch_tab_arrow_left_ParamLimits

0xa8c1,	// (0x000419c2) aid_touch_tab_arrow_right_ParamLimits

0xbc78,	// (0x00042d79) clock_nsta_pane_ParamLimits

0xc167,	// (0x00043268) navi_icon_pane_g1_ParamLimits

0xc173,	// (0x00043274) navi_text_pane_t1_ParamLimits

0xc6c1,	// (0x000437c2) navi_icon_text_pane_g1_ParamLimits

0xc6cd,	// (0x000437ce) navi_icon_text_pane_t1_ParamLimits

0xcd0f,	// (0x00043e10) list_single_hc_apps_pane_g1_ParamLimits

0xad5e,	// (0x00041e5f) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x00046df6) list_single_hc_apps_pane_g_ParamLimits

0xad77,	// (0x00041e78) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xad93,	// (0x00041e94) list_single_hc_apps_pane_t1_ParamLimits

0x90e3,	// (0x000401e4) popup_toolbar2_fixed_window_ParamLimits

0x90e3,	// (0x000401e4) popup_toolbar2_fixed_window

0xa7d7,	// (0x000418d8) popup_toolbar2_float_window

0x84b6,	// (0x0003f5b7) bg_popup_sub_pane_cp27

0x6036,	// (0x0003d137) grid_toolbar2_float_pane

0x84b6,	// (0x0003f5b7) bg_popup_sub_pane_cp26

0x6036,	// (0x0003d137) grid_toolbar2_fixed_pane

0xcd28,	// (0x00043e29) cell_toolbar2_fixed_pane_ParamLimits

0xcd28,	// (0x00043e29) cell_toolbar2_fixed_pane

0xcd45,	// (0x00043e46) cell_toolbar2_fixed_pane_g1

0x6057,	// (0x0003d158) toolbar2_fixed_button_pane

0x252d,	// (0x0003962e) toolbar2_fixed_button_pane_g1

0x253d,	// (0x0003963e) toolbar2_fixed_button_pane_g2

0x2535,	// (0x00039636) toolbar2_fixed_button_pane_g3

0x254d,	// (0x0003964e) toolbar2_fixed_button_pane_g4

0x2545,	// (0x00039646) toolbar2_fixed_button_pane_g5

0x2555,	// (0x00039656) toolbar2_fixed_button_pane_g6

0x255d,	// (0x0003965e) toolbar2_fixed_button_pane_g7

0x256d,	// (0x0003966e) toolbar2_fixed_button_pane_g8

0x2565,	// (0x00039666) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x00046968) toolbar2_fixed_button_pane_g

0x605f,	// (0x0003d160) cell_toolbar2_float_pane_ParamLimits

0x605f,	// (0x0003d160) cell_toolbar2_float_pane

0x6070,	// (0x0003d171) cell_toolbar2_float_pane_g1

0x6057,	// (0x0003d158) toolbar2_fixed_button_pane_cp

0xc7e3,	// (0x000438e4) fep_vkb_accented_list_pane_ParamLimits

0xc7e3,	// (0x000438e4) fep_vkb_accented_list_pane

0x084e,	// (0x0003794f) bg_popup_fep_shadow_pane_g9

0x1672,	// (0x00038773) bg_popup_fep_shadow_pane_cp3

0xb9e0,	// (0x00042ae1) list_accented_list_pane

0x6079,	// (0x0003d17a) list_single_accented_list_pane_ParamLimits

0x6079,	// (0x0003d17a) list_single_accented_list_pane

0x1672,	// (0x00038773) list_highlight_pane_cp10

0x608a,	// (0x0003d18b) list_single_accented_list_pane_t1

0xa6f3,	// (0x000417f4) popup_slider_window_ParamLimits

0xa6f3,	// (0x000417f4) popup_slider_window

0x5cd2,	// (0x0003cdd3) aid_indentation_list_msg

0xd671,	// (0x00044772) bg_popup_window_pane_cp19

0x61c4,	// (0x0003d2c5) popup_slider_window_g1

0x61e0,	// (0x0003d2e1) popup_slider_window_g2

0x61fc,	// (0x0003d2fd) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x00046dfb) popup_slider_window_g

0x6258,	// (0x0003d359) popup_slider_window_t1

0x62cc,	// (0x0003d3cd) small_volume_slider_vertical_pane

0x4b69,	// (0x0003bc6a) small_volume_slider_vertical_pane_g1

0x4b69,	// (0x0003bc6a) small_volume_slider_vertical_pane_g2

0x62e8,	// (0x0003d3e9) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x00046e0d) small_volume_slider_vertical_pane_g

0x904d,	// (0x0004014e) area_side_right_pane_ParamLimits

0x904d,	// (0x0004014e) area_side_right_pane

0xadc1,	// (0x00041ec2) aid_size_side_button_ParamLimits

0xadc1,	// (0x00041ec2) aid_size_side_button

0xadda,	// (0x00041edb) grid_sctrl_middle_pane_ParamLimits

0xadda,	// (0x00041edb) grid_sctrl_middle_pane

0x0bcf,	// (0x00037cd0) sctrl_sk_bottom_pane

0x0be0,	// (0x00037ce1) sctrl_sk_top_pane

0x0bf2,	// (0x00037cf3) aid_touch_sctrl_top

0x0bff,	// (0x00037d00) bg_sctrl_sk_pane_ParamLimits

0x0bff,	// (0x00037d00) bg_sctrl_sk_pane

0x0c0d,	// (0x00037d0e) sctrl_sk_top_pane_g1

0x0c1a,	// (0x00037d1b) sctrl_sk_top_pane_t1

0x0bf2,	// (0x00037cf3) aid_touch_sctrl_bottom

0x0bff,	// (0x00037d00) bg_sctrl_sk_pane_cp_ParamLimits

0x0bff,	// (0x00037d00) bg_sctrl_sk_pane_cp

0x0c35,	// (0x00037d36) sctrl_sk_bottom_pane_g1

0x0c1a,	// (0x00037d1b) sctrl_sk_bottom_pane_t1

0xadf4,	// (0x00041ef5) cell_sctrl_middle_pane_ParamLimits

0xadf4,	// (0x00041ef5) cell_sctrl_middle_pane

0xae07,	// (0x00041f08) aid_touch_sctrl_middle_ParamLimits

0xae07,	// (0x00041f08) aid_touch_sctrl_middle

0xae14,	// (0x00041f15) bg_sctrl_middle_pane_ParamLimits

0xae14,	// (0x00041f15) bg_sctrl_middle_pane

0x12b8,	// (0x000383b9) cell_sctrl_middle_pane_g1_ParamLimits

0x12b8,	// (0x000383b9) cell_sctrl_middle_pane_g1

0xae22,	// (0x00041f23) cell_sctrl_middle_pane_g2_ParamLimits

0xae22,	// (0x00041f23) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x00046e19) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x00046e19) cell_sctrl_middle_pane_g

0x252d,	// (0x0003962e) bg_sctrl_middle_pane_g1

0x2535,	// (0x00039636) bg_sctrl_middle_pane_g2

0x253d,	// (0x0003963e) bg_sctrl_middle_pane_g3

0x2545,	// (0x00039646) bg_sctrl_middle_pane_g4

0x254d,	// (0x0003964e) bg_sctrl_middle_pane_g5

0x2555,	// (0x00039656) bg_sctrl_middle_pane_g6

0x255d,	// (0x0003965e) bg_sctrl_middle_pane_g7

0x2565,	// (0x00039666) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x00046e1e) bg_sctrl_middle_pane_g

0x256d,	// (0x0003966e) bg_sctrl_middle_pane_g8_copy1

0x252d,	// (0x0003962e) bg_sctrl_sk_pane_g1

0x253d,	// (0x0003963e) bg_sctrl_sk_pane_g2

0x2535,	// (0x00039636) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x00046968) bg_sctrl_sk_pane_g

0xb806,	// (0x00042907) aid_size_touch_scroll_bar

0x254d,	// (0x0003964e) bg_sctrl_sk_pane_g4

0x2545,	// (0x00039646) bg_sctrl_sk_pane_g5

0x2555,	// (0x00039656) bg_sctrl_sk_pane_g6

0x255d,	// (0x0003965e) bg_sctrl_sk_pane_g7

0x256d,	// (0x0003966e) bg_sctrl_sk_pane_g8

0x2565,	// (0x00039666) bg_sctrl_sk_pane_g9

0x1a9a,	// (0x00038b9b) popup_fep_china_hwr2_fs_candidate_window

0xa1ab,	// (0x000412ac) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa1ab,	// (0x000412ac) popup_fep_china_hwr2_fs_control_window

0x086e,	// (0x0003796f) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x00046e14) sctrl_sk_top_pane_g

0xd729,	// (0x0004482a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd729,	// (0x0004482a) aid_fep_china_hwr2_fs_cell

0xd73f,	// (0x00044840) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd73f,	// (0x00044840) bg_popup_fep_shadow_pane_cp4

0xd756,	// (0x00044857) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd756,	// (0x00044857) bg_popup_fep_shadow_pane_cp5

0xd768,	// (0x00044869) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd768,	// (0x00044869) popup_fep_china_hwr2_fs_control_bar_grid

0xd77c,	// (0x0004487d) popup_fep_china_hwr2_fs_control_funtion_grid

0x6347,	// (0x0003d448) aid_fep_china_hwr2_fs_candi_cell

0x84b6,	// (0x0003f5b7) bg_popup_fep_shadow_pane_cp6

0x6351,	// (0x0003d452) popup_fep_china_hwr2_fs_candidate_grid

0xd784,	// (0x00044885) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd784,	// (0x00044885) cell_fep_china_hwr2_fs_funtion_grid

0x4b69,	// (0x0003bc6a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6373,	// (0x0003d474) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6373,	// (0x0003d474) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6381,	// (0x0003d482) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6381,	// (0x0003d482) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x00046e2f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x00046e2f) cell_fep_china_hwr2_fs_funtion_grid_g

0xd79c,	// (0x0004489d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd79c,	// (0x0004489d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7b1,	// (0x000448b2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7b1,	// (0x000448b2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x00046e34) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x00046e34) cell_fep_china_hwr2_fs_funtion_grid_t

0x63c8,	// (0x0003d4c9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x63d0,	// (0x0003d4d1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x63d8,	// (0x0003d4d9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x00046e39) popup_fep_china_hwr2_fs_control_bar_grid_g

0x63e0,	// (0x0003d4e1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x63e0,	// (0x0003d4e1) cell_fep_china_hwr2_fs_candidate_grid

0x63ff,	// (0x0003d500) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6407,	// (0x0003d508) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4b69,	// (0x0003bc6a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4b69,	// (0x0003bc6a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x00046c4d) cell_fep_china_hwr2_fs_candidate_grid_g

0x640f,	// (0x0003d510) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2109,	// (0x0003920a) clock_nsta_pane_cp_24_ParamLimits

0x2109,	// (0x0003920a) clock_nsta_pane_cp_24

0x2189,	// (0x0003928a) indicator_nsta_pane_cp_24_ParamLimits

0x2189,	// (0x0003928a) indicator_nsta_pane_cp_24

0x3200,	// (0x0003a301) heading_pane_g1

0x0001,

0xf8cc,	// (0x000469cd) heading_pane_g

0x3c94,	// (0x0003ad95) grid_sct_catagory_button_pane

0x3cc6,	// (0x0003adc7) scroll_pane_cp5_ParamLimits

0x47b5,	// (0x0003b8b6) button_value_adjust_pane_cp5_ParamLimits

0x47b5,	// (0x0003b8b6) button_value_adjust_pane_cp5

0x489a,	// (0x0003b99b) form2_midp_time_pane_ParamLimits

0x641d,	// (0x0003d51e) cell_sct_catagory_button_pane_ParamLimits

0x641d,	// (0x0003d51e) cell_sct_catagory_button_pane

0x4b2e,	// (0x0003bc2f) bg_button_pane_cp01_ParamLimits

0x4b2e,	// (0x0003bc2f) bg_button_pane_cp01

0x4b69,	// (0x0003bc6a) cell_sct_catagory_button_pane_g1

0xa774,	// (0x00041875) popup_tb_extension_window

0xd7cd,	// (0x000448ce) aid_size_cell_ext_ParamLimits

0xd7cd,	// (0x000448ce) aid_size_cell_ext

0xb648,	// (0x00042749) bg_tb_trans_pane_cp1_ParamLimits

0xb648,	// (0x00042749) bg_tb_trans_pane_cp1

0xd7f3,	// (0x000448f4) grid_tb_ext_pane_ParamLimits

0xd7f3,	// (0x000448f4) grid_tb_ext_pane

0xd833,	// (0x00044934) cell_tb_ext_pane_ParamLimits

0xd833,	// (0x00044934) cell_tb_ext_pane

0xd85b,	// (0x0004495c) cell_tb_ext_pane_g1_ParamLimits

0xd85b,	// (0x0004495c) cell_tb_ext_pane_g1

0x64b3,	// (0x0003d5b4) cell_tb_ext_pane_t1

0xb3eb,	// (0x000424ec) list_highlight_pane_cp11_ParamLimits

0xb3eb,	// (0x000424ec) list_highlight_pane_cp11

0xea15,	// (0x00045b16) popup_uni_indicator_window_ParamLimits

0xea15,	// (0x00045b16) popup_uni_indicator_window

0xb8cd,	// (0x000429ce) bg_popup_sub_pane_cp14

0x64ce,	// (0x0003d5cf) list_uniindi_pane

0x64da,	// (0x0003d5db) uniindi_top_pane

0xb3eb,	// (0x000424ec) bg_uniindi_top_pane

0x64fb,	// (0x0003d5fc) uniindi_top_pane_g1

0x6511,	// (0x0003d612) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x00046e40) uniindi_top_pane_g

0x653b,	// (0x0003d63c) uniindi_top_pane_t1

0x6567,	// (0x0003d668) list_single_uniindi_pane_ParamLimits

0x6567,	// (0x0003d668) list_single_uniindi_pane

0x4b69,	// (0x0003bc6a) bg_uniindi_top_pane_g1

0x6579,	// (0x0003d67a) list_single_uniindi_pane_g1

0x658c,	// (0x0003d68d) list_single_uniindi_pane_t1

0xe8fc,	// (0x000459fd) control_bg_pane

0x65b1,	// (0x0003d6b2) bg_sctrl_sk_pane_cp1

0x65ba,	// (0x0003d6bb) bg_sctrl_sk_pane_cp2

0x65c3,	// (0x0003d6c4) control_bg_pane_g1

0x65cc,	// (0x0003d6cd) control_bg_pane_g2

0x0001,

0xfd48,	// (0x00046e49) control_bg_pane_g

0x45dc,	// (0x0003b6dd) cell_indicator_nsta_pane_g1_ParamLimits

0xc61a,	// (0x0004371b) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x00046bb1) cell_indicator_nsta_pane_g_ParamLimits

0xd5d7,	// (0x000446d8) form2_midp_time_pane_t1_ParamLimits

0xa121,	// (0x00041222) main_idle_act4_pane_ParamLimits

0xa121,	// (0x00041222) main_idle_act4_pane

0xa774,	// (0x00041875) popup_tb_extension_window_ParamLimits

0xd81b,	// (0x0004491c) tb_ext_find_pane_ParamLimits

0xd81b,	// (0x0004491c) tb_ext_find_pane

0x65d5,	// (0x0003d6d6) ai_gene_pane_1_cp1

0x17af,	// (0x000388b0) ai_gene_pane_2_cp1

0x65dd,	// (0x0003d6de) list_single_idle_plugin_calendar_pane

0x65e6,	// (0x0003d6e7) list_single_idle_plugin_notification_pane

0x65ef,	// (0x0003d6f0) list_single_idle_plugin_player_pane

0xd878,	// (0x00044979) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd878,	// (0x00044979) list_single_idle_plugin_shortcut_pane

0xd8a0,	// (0x000449a1) main_idle_act4_pane_t1

0xd8b8,	// (0x000449b9) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x00046e4e) main_idle_act4_pane_t

0xd8d0,	// (0x000449d1) middle_sk_idle_act4_pane_ParamLimits

0xd8d0,	// (0x000449d1) middle_sk_idle_act4_pane

0xd8ec,	// (0x000449ed) popup_clock_digital_analogue_window_cp2

0xd913,	// (0x00044a14) shortcut_wheel_idle_act4_pane_ParamLimits

0xd913,	// (0x00044a14) shortcut_wheel_idle_act4_pane

0x4b69,	// (0x0003bc6a) shortcut_wheel_idle_act4_pane_g1

0x4b69,	// (0x0003bc6a) shortcut_wheel_idle_act4_pane_g2

0x4b69,	// (0x0003bc6a) shortcut_wheel_idle_act4_pane_g3

0x4b69,	// (0x0003bc6a) shortcut_wheel_idle_act4_pane_g4

0x4b69,	// (0x0003bc6a) shortcut_wheel_idle_act4_pane_g5

0x6682,	// (0x0003d783) shortcut_wheel_idle_act4_pane_g6

0x668a,	// (0x0003d78b) shortcut_wheel_idle_act4_pane_g7

0x6692,	// (0x0003d793) shortcut_wheel_idle_act4_pane_g8

0x669a,	// (0x0003d79b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x00046e53) shortcut_wheel_idle_act4_pane_g

0xce50,	// (0x00043f51) middle_sk_idle_act4_pane_g1_ParamLimits

0xce50,	// (0x00043f51) middle_sk_idle_act4_pane_g1

0xd990,	// (0x00044a91) middle_sk_idle_act4_pane_g2_ParamLimits

0xd990,	// (0x00044a91) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x00046e76) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x00046e76) middle_sk_idle_act4_pane_g

0xd9a8,	// (0x00044aa9) middle_sk_idle_act4_pane_t1_ParamLimits

0xd9a8,	// (0x00044aa9) middle_sk_idle_act4_pane_t1

0xd9d7,	// (0x00044ad8) grid_ai_shortcut_pane_ParamLimits

0xd9d7,	// (0x00044ad8) grid_ai_shortcut_pane

0xd9f4,	// (0x00044af5) list_highlight_pane_cp16_ParamLimits

0xd9f4,	// (0x00044af5) list_highlight_pane_cp16

0xda01,	// (0x00044b02) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xda01,	// (0x00044b02) list_single_idle_plugin_shortcut_pane_g1

0xda0d,	// (0x00044b0e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xda0d,	// (0x00044b0e) list_single_idle_plugin_shortcut_pane_g2

0xda2b,	// (0x00044b2c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xda2b,	// (0x00044b2c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x00046e7b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x00046e7b) list_single_idle_plugin_shortcut_pane_g

0xda40,	// (0x00044b41) cell_ai_shortcut_pane_ParamLimits

0xda40,	// (0x00044b41) cell_ai_shortcut_pane

0xda56,	// (0x00044b57) cell_ai_shortcut_pane_g1_ParamLimits

0xda56,	// (0x00044b57) cell_ai_shortcut_pane_g1

0x65d5,	// (0x0003d6d6) ai_gene_pane_1_cp2

0x67cb,	// (0x0003d8cc) ai_gene_pane_2_cp2

0x67d3,	// (0x0003d8d4) list_highlight_pane_cp15

0x67dc,	// (0x0003d8dd) list_single_idle_plugin_calendar_pane_g1

0x67d3,	// (0x0003d8d4) list_highlight_pane_cp17

0x67e4,	// (0x0003d8e5) list_single_idle_plugin_calendar_pane_g1_copy1

0x67ec,	// (0x0003d8ed) list_single_idle_plugin_player_pane_g1

0x3efb,	// (0x0003affc) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x00046e82) list_single_idle_plugin_player_pane_g

0x67f4,	// (0x0003d8f5) list_single_idle_plugin_player_pane_t1

0x6802,	// (0x0003d903) list_single_idle_plugin_player_pane_t2

0x6810,	// (0x0003d911) list_single_idle_plugin_player_pane_t3

0x681e,	// (0x0003d91f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x00046e87) list_single_idle_plugin_player_pane_t

0x682c,	// (0x0003d92d) wait_bar_pane_cp15

0x6834,	// (0x0003d935) grid_ai_notification_pane

0x3efb,	// (0x0003affc) list_single_idle_plugin_notification_pane_g1

0xda78,	// (0x00044b79) cell_ai_notification_pane_ParamLimits

0xda78,	// (0x00044b79) cell_ai_notification_pane

0x684a,	// (0x0003d94b) cell_ai_notification_pane_g1

0x6852,	// (0x0003d953) cell_ai_notification_pane_t1

0xda85,	// (0x00044b86) tb_ext_find_button_pane

0xda8d,	// (0x00044b8e) tb_ext_find_pane_g1

0xda95,	// (0x00044b96) tb_ext_find_pane_t1

0xd17a,	// (0x0004427b) tb_ext_find_button_pane_g1

0x687e,	// (0x0003d97f) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x00046e90) tb_ext_find_button_pane_g

0xd8a0,	// (0x000449a1) main_idle_act4_pane_t1_ParamLimits

0xd8b8,	// (0x000449b9) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x00046e4e) main_idle_act4_pane_t_ParamLimits

0xd8ec,	// (0x000449ed) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd903,	// (0x00044a04) sat_plugin_idle_act4_pane_ParamLimits

0xd903,	// (0x00044a04) sat_plugin_idle_act4_pane

0xdaa3,	// (0x00044ba4) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdaa3,	// (0x00044ba4) sat_plugin_idle_act4_pane_t1

0xdabb,	// (0x00044bbc) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdabb,	// (0x00044bbc) sat_plugin_idle_act4_pane_t2

0xdad3,	// (0x00044bd4) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdad3,	// (0x00044bd4) sat_plugin_idle_act4_pane_t3

0xdaeb,	// (0x00044bec) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdaeb,	// (0x00044bec) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x00046e95) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x00046e95) sat_plugin_idle_act4_pane_t

0xe9c1,	// (0x00045ac2) popup_battery_window_ParamLimits

0xe9c1,	// (0x00045ac2) popup_battery_window

0xb3eb,	// (0x000424ec) bg_popup_sub_pane_cp25_ParamLimits

0xb3eb,	// (0x000424ec) bg_popup_sub_pane_cp25

0x68d3,	// (0x0003d9d4) popup_battery_window_g1_ParamLimits

0x68d3,	// (0x0003d9d4) popup_battery_window_g1

0x6916,	// (0x0003da17) popup_battery_window_t1_ParamLimits

0x6916,	// (0x0003da17) popup_battery_window_t1

0x6928,	// (0x0003da29) popup_battery_window_t2_ParamLimits

0x6928,	// (0x0003da29) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x00046e9e) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x00046e9e) popup_battery_window_t

0x9eb4,	// (0x00040fb5) midp_canvas_pane_ParamLimits

0x9f0f,	// (0x00041010) midp_keypad_pane_ParamLimits

0x9f0f,	// (0x00041010) midp_keypad_pane

0x19ec,	// (0x00038aed) main_midp_pane_ParamLimits

0x4668,	// (0x0003b769) signal_pane_g2_cp_ParamLimits

0xdb03,	// (0x00044c04) aid_size_cell_midp_keypad_ParamLimits

0xdb03,	// (0x00044c04) aid_size_cell_midp_keypad

0xdb21,	// (0x00044c22) midp_keyp_game_grid_pane_ParamLimits

0xdb21,	// (0x00044c22) midp_keyp_game_grid_pane

0xdb48,	// (0x00044c49) midp_keyp_rocker_pane_ParamLimits

0xdb48,	// (0x00044c49) midp_keyp_rocker_pane

0xdb87,	// (0x00044c88) midp_keyp_sk_left_pane_ParamLimits

0xdb87,	// (0x00044c88) midp_keyp_sk_left_pane

0xdbdb,	// (0x00044cdc) midp_keyp_sk_right_pane_ParamLimits

0xdbdb,	// (0x00044cdc) midp_keyp_sk_right_pane

0x84b6,	// (0x0003f5b7) bg_button_pane_cp03

0xdc2f,	// (0x00044d30) midp_keyp_sk_left_pane_g1

0x84b6,	// (0x0003f5b7) bg_button_pane_cp04

0xdc2f,	// (0x00044d30) midp_keyp_sk_right_pane_g1

0x4b69,	// (0x0003bc6a) midp_keyp_rocker_pane_g1

0xdc38,	// (0x00044d39) keyp_game_cell_pane_ParamLimits

0xdc38,	// (0x00044d39) keyp_game_cell_pane

0x84b6,	// (0x0003f5b7) bg_button_pane_cp02

0xdc5e,	// (0x00044d5f) keyp_game_cell_pane_g1

0x908f,	// (0x00040190) popup_fep_vkb2_window_ParamLimits

0x908f,	// (0x00040190) popup_fep_vkb2_window

0xae2e,	// (0x00041f2f) aid_size_cell_vkb2_ParamLimits

0xae2e,	// (0x00041f2f) aid_size_cell_vkb2

0xae64,	// (0x00041f65) popup_fep_vkb2_window_g1_ParamLimits

0xae64,	// (0x00041f65) popup_fep_vkb2_window_g1

0xaeb4,	// (0x00041fb5) vkb2_area_bottom_pane_ParamLimits

0xaeb4,	// (0x00041fb5) vkb2_area_bottom_pane

0xaf10,	// (0x00042011) vkb2_area_keypad_pane_ParamLimits

0xaf10,	// (0x00042011) vkb2_area_keypad_pane

0xaf5e,	// (0x0004205f) vkb2_area_top_pane_ParamLimits

0xaf5e,	// (0x0004205f) vkb2_area_top_pane

0xafe4,	// (0x000420e5) vkb2_top_entry_pane_ParamLimits

0xafe4,	// (0x000420e5) vkb2_top_entry_pane

0xb011,	// (0x00042112) vkb2_top_grid_left_pane_ParamLimits

0xb011,	// (0x00042112) vkb2_top_grid_left_pane

0xb031,	// (0x00042132) vkb2_top_grid_right_pane_ParamLimits

0xb031,	// (0x00042132) vkb2_top_grid_right_pane

0x0eaf,	// (0x00037fb0) vkb2_cell_keypad_pane_ParamLimits

0x0eaf,	// (0x00037fb0) vkb2_cell_keypad_pane

0xb077,	// (0x00042178) vkb2_area_bottom_grid_pane_ParamLimits

0xb077,	// (0x00042178) vkb2_area_bottom_grid_pane

0xb0a1,	// (0x000421a2) vkb2_area_bottom_pane_g1_ParamLimits

0xb0a1,	// (0x000421a2) vkb2_area_bottom_pane_g1

0xb0c7,	// (0x000421c8) vkb2_area_bottom_pane_g2_ParamLimits

0xb0c7,	// (0x000421c8) vkb2_area_bottom_pane_g2

0xb0f8,	// (0x000421f9) vkb2_area_bottom_pane_g3_ParamLimits

0xb0f8,	// (0x000421f9) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x00046ea3) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x00046ea3) vkb2_area_bottom_pane_g

0x1059,	// (0x0003815a) vkb2_top_cell_left_pane_ParamLimits

0x1059,	// (0x0003815a) vkb2_top_cell_left_pane

0xdc67,	// (0x00044d68) vkb2_top_entry_pane_g1_ParamLimits

0xdc67,	// (0x00044d68) vkb2_top_entry_pane_g1

0xdc75,	// (0x00044d76) vkb2_top_entry_pane_t1_ParamLimits

0xdc75,	// (0x00044d76) vkb2_top_entry_pane_t1

0x6acb,	// (0x0003dbcc) vkb2_top_entry_pane_t2_ParamLimits

0x6acb,	// (0x0003dbcc) vkb2_top_entry_pane_t2

0x6afd,	// (0x0003dbfe) vkb2_top_entry_pane_t3_ParamLimits

0x6afd,	// (0x0003dbfe) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x00046eaa) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x00046eaa) vkb2_top_entry_pane_t

0xb162,	// (0x00042263) vkb2_top_grid_right_pane_g1_ParamLimits

0xb162,	// (0x00042263) vkb2_top_grid_right_pane_g1

0x10bc,	// (0x000381bd) vkb2_top_grid_right_pane_g2_ParamLimits

0x10bc,	// (0x000381bd) vkb2_top_grid_right_pane_g2

0x10d4,	// (0x000381d5) vkb2_top_grid_right_pane_g3_ParamLimits

0x10d4,	// (0x000381d5) vkb2_top_grid_right_pane_g3

0xb178,	// (0x00042279) vkb2_top_grid_right_pane_g4_ParamLimits

0xb178,	// (0x00042279) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x00046eb1) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x00046eb1) vkb2_top_grid_right_pane_g

0x1102,	// (0x00038203) vkb2_top_cell_left_pane_g1

0x1119,	// (0x0003821a) vkb2_cell_keypad_pane_g1_ParamLimits

0x1119,	// (0x0003821a) vkb2_cell_keypad_pane_g1

0x6b21,	// (0x0003dc22) vkb2_cell_keypad_pane_t1_ParamLimits

0x6b21,	// (0x0003dc22) vkb2_cell_keypad_pane_t1

0x1127,	// (0x00038228) vkb2_cell_bottom_grid_pane_ParamLimits

0x1127,	// (0x00038228) vkb2_cell_bottom_grid_pane

0x1160,	// (0x00038261) vkb2_cell_bottom_grid_pane_g1

0xd934,	// (0x00044a35) aid_call2_pane_cp02

0xd93c,	// (0x00044a3d) aid_call_pane_cp02

0xd944,	// (0x00044a45) clock_digital_number_pane_cp10

0xd94c,	// (0x00044a4d) clock_digital_number_pane_cp11

0xd954,	// (0x00044a55) clock_digital_number_pane_cp12

0xd95c,	// (0x00044a5d) clock_digital_number_pane_cp13

0xd964,	// (0x00044a65) clock_digital_separator_pane_cp10

0xd17a,	// (0x0004427b) popup_clock_digital_analogue_window_cp2_g1

0xd17a,	// (0x0004427b) popup_clock_digital_analogue_window_cp2_g2

0xd96c,	// (0x00044a6d) popup_clock_digital_analogue_window_cp2_g3

0xd17a,	// (0x0004427b) popup_clock_digital_analogue_window_cp2_g4

0xd96c,	// (0x00044a6d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x00046e66) popup_clock_digital_analogue_window_cp2_g

0xd974,	// (0x00044a75) popup_clock_digital_analogue_window_cp2_t1

0xd982,	// (0x00044a83) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x00046e71) popup_clock_digital_analogue_window_cp2_t

0x4b69,	// (0x0003bc6a) clock_digital_number_pane_cp10_g1

0x4b69,	// (0x0003bc6a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00046c4d) clock_digital_number_pane_cp10_g

0x4b69,	// (0x0003bc6a) clock_digital_separator_pane_cp10_g1

0x4b69,	// (0x0003bc6a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00046c4d) clock_digital_separator_pane_cp10_g

0x651d,	// (0x0003d61e) uniindi_top_pane_g3

0x652e,	// (0x0003d62f) uniindi_top_pane_g4

0x0f3a,	// (0x0003803b) vkb2_row_keypad_pane_ParamLimits

0x0f3a,	// (0x0003803b) vkb2_row_keypad_pane

0x117c,	// (0x0003827d) vkb2_cell_t_keypad_pane_ParamLimits

0x117c,	// (0x0003827d) vkb2_cell_t_keypad_pane

0x118c,	// (0x0003828d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x118c,	// (0x0003828d) vkb2_cell_t_keypad_pane_cp08

0x11a1,	// (0x000382a2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x11a1,	// (0x000382a2) vkb2_cell_t_keypad_pane_cp09

0x11b5,	// (0x000382b6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x11b5,	// (0x000382b6) vkb2_cell_t_keypad_pane_cp01

0x11c6,	// (0x000382c7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x11c6,	// (0x000382c7) vkb2_cell_t_keypad_pane_cp02

0x11d7,	// (0x000382d8) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x11d7,	// (0x000382d8) vkb2_cell_t_keypad_pane_cp03

0x11e8,	// (0x000382e9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x11e8,	// (0x000382e9) vkb2_cell_t_keypad_pane_cp04

0x11f9,	// (0x000382fa) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x11f9,	// (0x000382fa) vkb2_cell_t_keypad_pane_cp05

0x120a,	// (0x0003830b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x120a,	// (0x0003830b) vkb2_cell_t_keypad_pane_cp06

0x121d,	// (0x0003831e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x121d,	// (0x0003831e) vkb2_cell_t_keypad_pane_cp07

0x1232,	// (0x00038333) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1232,	// (0x00038333) vkb2_cell_t_keypad_pane_cp10

0x086e,	// (0x0003796f) vkb2_cell_t_keypad_pane_g1

0x6b38,	// (0x0003dc39) vkb2_cell_t_keypad_pane_t1

0xe8fc,	// (0x000459fd) popup_grid_graphic2_window

0xdcae,	// (0x00044daf) aid_size_cell_graphic2_ParamLimits

0xdcae,	// (0x00044daf) aid_size_cell_graphic2

0xdcec,	// (0x00044ded) bg_popup_window_pane_cp21_ParamLimits

0xdcec,	// (0x00044ded) bg_popup_window_pane_cp21

0xdcfa,	// (0x00044dfb) graphic2_pages_pane_ParamLimits

0xdcfa,	// (0x00044dfb) graphic2_pages_pane

0xdd52,	// (0x00044e53) grid_graphic2_control_pane_ParamLimits

0xdd52,	// (0x00044e53) grid_graphic2_control_pane

0xdd9a,	// (0x00044e9b) grid_graphic2_pane_ParamLimits

0xdd9a,	// (0x00044e9b) grid_graphic2_pane

0xde25,	// (0x00044f26) cell_graphic2_pane

0x84b6,	// (0x0003f5b7) main_comp_mode_pane

0x5d8e,	// (0x0003ce8f) list_ai3_gene_pane_ParamLimits

0xd671,	// (0x00044772) bg_popup_window_pane_cp19_ParamLimits

0x6162,	// (0x0003d263) bg_touch_area_indi_pane_ParamLimits

0x6162,	// (0x0003d263) bg_touch_area_indi_pane

0x6178,	// (0x0003d279) bg_touch_area_indi_pane_cp01_ParamLimits

0x6178,	// (0x0003d279) bg_touch_area_indi_pane_cp01

0x6190,	// (0x0003d291) bg_touch_area_indi_pane_cp02_ParamLimits

0x6190,	// (0x0003d291) bg_touch_area_indi_pane_cp02

0x61aa,	// (0x0003d2ab) bg_touch_area_indi_pane_cp03_ParamLimits

0x61aa,	// (0x0003d2ab) bg_touch_area_indi_pane_cp03

0x61c4,	// (0x0003d2c5) popup_slider_window_g1_ParamLimits

0x61e0,	// (0x0003d2e1) popup_slider_window_g2_ParamLimits

0x61fc,	// (0x0003d2fd) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x00046dfb) popup_slider_window_g_ParamLimits

0x6258,	// (0x0003d359) popup_slider_window_t1_ParamLimits

0x62cc,	// (0x0003d3cd) small_volume_slider_vertical_pane_ParamLimits

0xde25,	// (0x00044f26) cell_graphic2_pane_ParamLimits

0xde88,	// (0x00044f89) bg_button_pane_cp10_ParamLimits

0xde88,	// (0x00044f89) bg_button_pane_cp10

0xde9b,	// (0x00044f9c) bg_button_pane_cp11_ParamLimits

0xde9b,	// (0x00044f9c) bg_button_pane_cp11

0xdeae,	// (0x00044faf) graphic2_pages_pane_g1_ParamLimits

0xdeae,	// (0x00044faf) graphic2_pages_pane_g1

0xdec9,	// (0x00044fca) graphic2_pages_pane_g2_ParamLimits

0xdec9,	// (0x00044fca) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x00046ebf) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x00046ebf) graphic2_pages_pane_g

0xdee1,	// (0x00044fe2) graphic2_pages_pane_t1_ParamLimits

0xdee1,	// (0x00044fe2) graphic2_pages_pane_t1

0xdef9,	// (0x00044ffa) cell_graphic2_control_pane_ParamLimits

0xdef9,	// (0x00044ffa) cell_graphic2_control_pane

0xdf2d,	// (0x0004502e) cell_graphic2_pane_g1_ParamLimits

0xdf2d,	// (0x0004502e) cell_graphic2_pane_g1

0xce5e,	// (0x00043f5f) cell_graphic2_pane_g2_ParamLimits

0xce5e,	// (0x00043f5f) cell_graphic2_pane_g2

0xc7d6,	// (0x000438d7) cell_graphic2_pane_g3_ParamLimits

0xc7d6,	// (0x000438d7) cell_graphic2_pane_g3

0xce6b,	// (0x00043f6c) cell_graphic2_pane_g4_ParamLimits

0xce6b,	// (0x00043f6c) cell_graphic2_pane_g4

0xdf3a,	// (0x0004503b) cell_graphic2_pane_g5_ParamLimits

0xdf3a,	// (0x0004503b) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x00046ec4) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x00046ec4) cell_graphic2_pane_g

0xdf5a,	// (0x0004505b) cell_graphic2_pane_t1_ParamLimits

0xdf5a,	// (0x0004505b) cell_graphic2_pane_t1

0x31f4,	// (0x0003a2f5) grid_highlight_pane_cp11_ParamLimits

0x31f4,	// (0x0003a2f5) grid_highlight_pane_cp11

0xb3eb,	// (0x000424ec) bg_button_pane_cp05

0xdf8f,	// (0x00045090) cell_graphic2_control_pane_g1

0x4b69,	// (0x0003bc6a) bg_touch_area_indi_pane_g1

0x6e12,	// (0x0003df13) aid_cmod_rocker_key_size

0x6e1c,	// (0x0003df1d) aid_cmode_itu_key_size

0x6e26,	// (0x0003df27) main_cmode_video_pane

0x6e30,	// (0x0003df31) main_comp_mode_itu_pane

0x6e3c,	// (0x0003df3d) main_comp_mode_rocker_pane

0x6e48,	// (0x0003df49) cell_cmode_rocker_pane_ParamLimits

0x6e48,	// (0x0003df49) cell_cmode_rocker_pane

0x6e5c,	// (0x0003df5d) cell_cmode_itu_pane_ParamLimits

0x6e5c,	// (0x0003df5d) cell_cmode_itu_pane

0xb8cd,	// (0x000429ce) bg_button_pane_cp06_ParamLimits

0xb8cd,	// (0x000429ce) bg_button_pane_cp06

0x4e10,	// (0x0003bf11) cell_cmode_rocker_pane_g1_ParamLimits

0x4e10,	// (0x0003bf11) cell_cmode_rocker_pane_g1

0x6373,	// (0x0003d474) cell_cmode_rocker_pane_g2_ParamLimits

0x6373,	// (0x0003d474) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x00046ed4) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x00046ed4) cell_cmode_rocker_pane_g

0x84b6,	// (0x0003f5b7) bg_button_pane_cp07

0x6e73,	// (0x0003df74) cell_cmode_itu_pane_g1

0x6e7c,	// (0x0003df7d) cell_cmode_itu_pane_t1

0x6e8a,	// (0x0003df8b) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x00046ed9) cell_cmode_itu_pane_t

0x65a1,	// (0x0003d6a2) aid_touch_ctrl_left

0x65a9,	// (0x0003d6aa) aid_touch_ctrl_right

0x84b6,	// (0x0003f5b7) compa_mode_pane

0xdfb5,	// (0x000450b6) aid_cmod_rocker_key_size_cp

0xdfbf,	// (0x000450c0) aid_cmode_itu_key_size_cp

0x6eac,	// (0x0003dfad) compa_mode_pane_g1

0x6eb4,	// (0x0003dfb5) compa_mode_pane_g2

0x6ebc,	// (0x0003dfbd) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x00046ede) compa_mode_pane_g

0xdfc9,	// (0x000450ca) main_comp_mode_itu_pane_cp

0xdfd1,	// (0x000450d2) main_comp_mode_rocker_pane_cp

0xdfd9,	// (0x000450da) cell_cmode_itu_pane_cp_ParamLimits

0xdfd9,	// (0x000450da) cell_cmode_itu_pane_cp

0xdfee,	// (0x000450ef) cell_cmode_rocker_pane_cp_ParamLimits

0xdfee,	// (0x000450ef) cell_cmode_rocker_pane_cp

0xb8cd,	// (0x000429ce) bg_button_pane_cp06_cp_ParamLimits

0xb8cd,	// (0x000429ce) bg_button_pane_cp06_cp

0x4e10,	// (0x0003bf11) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4e10,	// (0x0003bf11) cell_cmode_rocker_pane_g1_cp

0x4b69,	// (0x0003bc6a) cell_cmode_rocker_pane_g2_cp

0x84b6,	// (0x0003f5b7) bg_button_pane_cp07_cp

0xe000,	// (0x00045101) cell_cmode_itu_pane_g1_cp

0xe009,	// (0x0004510a) cell_cmode_itu_pane_t1_cp

0xe009,	// (0x0004510a) cell_cmode_itu_pane_t2_cp

0xc448,	// (0x00043549) settings_code_pane_cp2

0xb2b8,	// (0x000423b9) bg_popup_window_pane_cp3_ParamLimits

0xb5d9,	// (0x000426da) heading_pane_cp3_ParamLimits

0xb5e5,	// (0x000426e6) listscroll_popup_graphic_pane_ParamLimits

0x0601,	// (0x00037702) fep_hwr_aid_pane_ParamLimits

0x0bf2,	// (0x00037cf3) aid_touch_sctrl_top_ParamLimits

0x0c0d,	// (0x00037d0e) sctrl_sk_top_pane_g1_ParamLimits

0x086e,	// (0x0003796f) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x00046e14) sctrl_sk_top_pane_g_ParamLimits

0x0c1a,	// (0x00037d1b) sctrl_sk_top_pane_t1_ParamLimits

0x0bf2,	// (0x00037cf3) aid_touch_sctrl_bottom_ParamLimits

0x0c1a,	// (0x00037d1b) sctrl_sk_bottom_pane_t1_ParamLimits

0x64e7,	// (0x0003d5e8) aid_area_touch_clock

0xafa6,	// (0x000420a7) aid_vkb2_area_top_pane_cell_ParamLimits

0xafa6,	// (0x000420a7) aid_vkb2_area_top_pane_cell

0xb051,	// (0x00042152) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb051,	// (0x00042152) aid_vkb2_area_bottom_pane_cell

0x6a83,	// (0x0003db84) popup_char_count_window

0x6f12,	// (0x0003e013) popup_char_count_window_g1

0x6f1b,	// (0x0003e01c) popup_char_count_window_g2

0x6f24,	// (0x0003e025) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x00046ee5) popup_char_count_window_g

0x6f2d,	// (0x0003e02e) popup_char_count_window_t1

0x0ccb,	// (0x00037dcc) popup_fep_char_preview_window_ParamLimits

0x0ccb,	// (0x00037dcc) popup_fep_char_preview_window

0xafc6,	// (0x000420c7) vkb2_top_candi_pane_ParamLimits

0xafc6,	// (0x000420c7) vkb2_top_candi_pane

0xe017,	// (0x00045118) cell_vkb2_top_candi_pane_ParamLimits

0xe017,	// (0x00045118) cell_vkb2_top_candi_pane

0x1247,	// (0x00038348) bg_popup_fep_char_preview_window_ParamLimits

0x1247,	// (0x00038348) bg_popup_fep_char_preview_window

0x1255,	// (0x00038356) popup_fep_char_preview_window_t1_ParamLimits

0x1255,	// (0x00038356) popup_fep_char_preview_window_t1

0x6f8c,	// (0x0003e08d) bg_popup_fep_char_preview_window_g1

0x6f94,	// (0x0003e095) bg_popup_fep_char_preview_window_g2

0x6f9c,	// (0x0003e09d) bg_popup_fep_char_preview_window_g3

0x6fa4,	// (0x0003e0a5) bg_popup_fep_char_preview_window_g4

0x6fac,	// (0x0003e0ad) bg_popup_fep_char_preview_window_g5

0x128f,	// (0x00038390) bg_popup_fep_char_preview_window_g6

0x6fb4,	// (0x0003e0b5) bg_popup_fep_char_preview_window_g7

0x6fbc,	// (0x0003e0bd) bg_popup_fep_char_preview_window_g8

0x6fc4,	// (0x0003e0c5) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x00046eec) bg_popup_fep_char_preview_window_g

0x086e,	// (0x0003796f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x086e,	// (0x0003796f) cell_vkb2_top_candi_pane_g1

0x087c,	// (0x0003797d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x087c,	// (0x0003797d) cell_vkb2_top_candi_pane_g2

0x68f5,	// (0x0003d9f6) cell_vkb2_top_candi_pane_g3_ParamLimits

0x68f5,	// (0x0003d9f6) cell_vkb2_top_candi_pane_g3

0x1297,	// (0x00038398) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1297,	// (0x00038398) cell_vkb2_top_candi_pane_g4

0x532f,	// (0x0003c430) cell_vkb2_top_candi_pane_g5_ParamLimits

0x532f,	// (0x0003c430) cell_vkb2_top_candi_pane_g5

0x12b8,	// (0x000383b9) cell_vkb2_top_candi_pane_g6_ParamLimits

0x12b8,	// (0x000383b9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x00046eff) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x00046eff) cell_vkb2_top_candi_pane_g

0x12c6,	// (0x000383c7) cell_vkb2_top_candi_pane_t1

0x03d8,	// (0x000374d9) aid_size_touch_slider_mark_ParamLimits

0x03d8,	// (0x000374d9) aid_size_touch_slider_mark

0xdd36,	// (0x00044e37) grid_graphic2_catg_pane_ParamLimits

0xdd36,	// (0x00044e37) grid_graphic2_catg_pane

0xddf4,	// (0x00044ef5) popup_grid_graphic2_window_t1_ParamLimits

0xddf4,	// (0x00044ef5) popup_grid_graphic2_window_t1

0xde0a,	// (0x00044f0b) popup_grid_graphic2_window_t2_ParamLimits

0xde0a,	// (0x00044f0b) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x00046eba) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x00046eba) popup_grid_graphic2_window_t

0xb3eb,	// (0x000424ec) bg_button_pane_cp05_ParamLimits

0xdf8f,	// (0x00045090) cell_graphic2_control_pane_g1_ParamLimits

0xe081,	// (0x00045182) cell_graphic2_catg_pane_ParamLimits

0xe081,	// (0x00045182) cell_graphic2_catg_pane

0x84b6,	// (0x0003f5b7) bg_button_pane_cp12

0xe093,	// (0x00045194) cell_graphic2_catg_pane_g1

0x64b3,	// (0x0003d5b4) cell_tb_ext_pane_t1_ParamLimits

0x1079,	// (0x0003817a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1079,	// (0x0003817a) vkb2_top_cell_right_narrow_pane

0x1091,	// (0x00038192) vkb2_top_cell_right_wide_pane_ParamLimits

0x1091,	// (0x00038192) vkb2_top_cell_right_wide_pane

0x05f3,	// (0x000376f4) bg_vkb2_func_pane_ParamLimits

0x05f3,	// (0x000376f4) bg_vkb2_func_pane

0x1102,	// (0x00038203) vkb2_top_cell_left_pane_g1_ParamLimits

0x05f3,	// (0x000376f4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x05f3,	// (0x000376f4) bg_vkb2_fuc_pane_cp03

0x1160,	// (0x00038261) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2535,	// (0x00039636) bg_vkb2_func_pane_g1

0x253d,	// (0x0003963e) bg_vkb2_func_pane_g2

0x254d,	// (0x0003964e) bg_vkb2_func_pane_g3

0x2545,	// (0x00039646) bg_vkb2_func_pane_g4

0x2555,	// (0x00039656) bg_vkb2_func_pane_g5

0x255d,	// (0x0003965e) bg_vkb2_func_pane_g6

0x2565,	// (0x00039666) bg_vkb2_func_pane_g7

0x256d,	// (0x0003966e) bg_vkb2_func_pane_g8

0x252d,	// (0x0003962e) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x00046f0c) bg_vkb2_func_pane_g

0x05f3,	// (0x000376f4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x05f3,	// (0x000376f4) bg_vkb2_fuc_pane_cp01

0x1102,	// (0x00038203) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1102,	// (0x00038203) vkb2_top_cell_right_wide_pane_g1

0x05f3,	// (0x000376f4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x05f3,	// (0x000376f4) bg_vkb2_fuc_pane_cp02

0x1160,	// (0x00038261) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1160,	// (0x00038261) vkb2_top_cell_right_narrow_pane_g1

0xcd8a,	// (0x00043e8b) aid_touch_area_decrease_ParamLimits

0xcd8a,	// (0x00043e8b) aid_touch_area_decrease

0xcdc4,	// (0x00043ec5) aid_touch_area_increase_ParamLimits

0xcdc4,	// (0x00043ec5) aid_touch_area_increase

0xcdec,	// (0x00043eed) aid_touch_area_mute_ParamLimits

0xcdec,	// (0x00043eed) aid_touch_area_mute

0xce1c,	// (0x00043f1d) aid_touch_area_slider_ParamLimits

0xce1c,	// (0x00043f1d) aid_touch_area_slider

0xd67d,	// (0x0004477e) popup_slider_window_g4_ParamLimits

0xd67d,	// (0x0004477e) popup_slider_window_g4

0xd6a5,	// (0x000447a6) popup_slider_window_g5_ParamLimits

0xd6a5,	// (0x000447a6) popup_slider_window_g5

0xd6d9,	// (0x000447da) popup_slider_window_g6_ParamLimits

0xd6d9,	// (0x000447da) popup_slider_window_g6

0x6286,	// (0x0003d387) popup_slider_window_t2_ParamLimits

0x6286,	// (0x0003d387) popup_slider_window_t2

0x0001,

0xfd07,	// (0x00046e08) popup_slider_window_t_ParamLimits

0xfd07,	// (0x00046e08) popup_slider_window_t

0xd6f5,	// (0x000447f6) slider_pane_ParamLimits

0xd6f5,	// (0x000447f6) slider_pane

0x6fe7,	// (0x0003e0e8) slider_pane_g1_ParamLimits

0x6fe7,	// (0x0003e0e8) slider_pane_g1

0x6ffb,	// (0x0003e0fc) slider_pane_g2_ParamLimits

0x6ffb,	// (0x0003e0fc) slider_pane_g2

0x7011,	// (0x0003e112) slider_pane_g3_ParamLimits

0x7011,	// (0x0003e112) slider_pane_g3

0x0003,

0xfe1e,	// (0x00046f1f) slider_pane_g_ParamLimits

0xfe1e,	// (0x00046f1f) slider_pane_g

0xa7c0,	// (0x000418c1) popup_tb_float_extension_window_ParamLimits

0xa7c0,	// (0x000418c1) popup_tb_float_extension_window

0x703d,	// (0x0003e13e) aid_size_cell_tb_float_ext

0x84b6,	// (0x0003f5b7) bg_popup_sub_window_cp28

0x7049,	// (0x0003e14a) grid_tb_float_ext_pane

0x7055,	// (0x0003e156) cell_tb_float_ext_pane_ParamLimits

0x7055,	// (0x0003e156) cell_tb_float_ext_pane

0x7071,	// (0x0003e172) cell_tb_float_ext_pane_g1

0x707a,	// (0x0003e17b) grid_highlight_pane_cp12

0xabc2,	// (0x00041cc3) cell_last_hwr_side_pane_ParamLimits

0xabc2,	// (0x00041cc3) cell_last_hwr_side_pane

0x4b69,	// (0x0003bc6a) cell_last_hwr_side_pane_g1

0x7083,	// (0x0003e184) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x00046f28) cell_last_hwr_side_pane_g

0xb12d,	// (0x0004222e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb12d,	// (0x0004222e) vkb2_area_bottom_space_btn_pane

0x086e,	// (0x0003796f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6b38,	// (0x0003dc39) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x12c6,	// (0x000383c7) cell_vkb2_top_candi_pane_t1_ParamLimits

0x12e4,	// (0x000383e5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x12e4,	// (0x000383e5) vkb2_area_bottom_space_btn_pane_g1

0x131e,	// (0x0003841f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x131e,	// (0x0003841f) vkb2_area_bottom_space_btn_pane_g2

0x1354,	// (0x00038455) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1354,	// (0x00038455) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x00046f2d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x00046f2d) vkb2_area_bottom_space_btn_pane_g

0x06b8,	// (0x000377b9) cel_fep_hwr_func_pane_ParamLimits

0x06b8,	// (0x000377b9) cel_fep_hwr_func_pane

0xab97,	// (0x00041c98) cell_hwr_side_button_pane_ParamLimits

0xab97,	// (0x00041c98) cell_hwr_side_button_pane

0x64e7,	// (0x0003d5e8) aid_area_touch_clock_ParamLimits

0xb3eb,	// (0x000424ec) bg_uniindi_top_pane_ParamLimits

0x64fb,	// (0x0003d5fc) uniindi_top_pane_g1_ParamLimits

0x6511,	// (0x0003d612) uniindi_top_pane_g2_ParamLimits

0x651d,	// (0x0003d61e) uniindi_top_pane_g3_ParamLimits

0x652e,	// (0x0003d62f) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x00046e40) uniindi_top_pane_g_ParamLimits

0x653b,	// (0x0003d63c) uniindi_top_pane_t1_ParamLimits

0xb3eb,	// (0x000424ec) bg_vkb2_func_pane_cp01_ParamLimits

0xb3eb,	// (0x000424ec) bg_vkb2_func_pane_cp01

0x708c,	// (0x0003e18d) cel_fep_hwr_func_pane_g1_ParamLimits

0x708c,	// (0x0003e18d) cel_fep_hwr_func_pane_g1

0xb3eb,	// (0x000424ec) bg_vkb2_func_pane_cp02_ParamLimits

0xb3eb,	// (0x000424ec) bg_vkb2_func_pane_cp02

0x708c,	// (0x0003e18d) cell_hwr_side_button_pane_g1_ParamLimits

0x708c,	// (0x0003e18d) cell_hwr_side_button_pane_g1

0x23ae,	// (0x000394af) status_pane_g4_ParamLimits

0x23ae,	// (0x000394af) status_pane_g4

0x23c8,	// (0x000394c9) status_pane_t1

0x4908,	// (0x0003ba09) form2_midp_gauge_slider_cont_pane

0x4910,	// (0x0003ba11) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc71c,	// (0x0004381d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc72e,	// (0x0004382f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x00046c00) form2_midp_gauge_slider_pane_t_ParamLimits

0x4946,	// (0x0003ba47) form2_midp_slider_pane_ParamLimits

0x0c8b,	// (0x00037d8c) aid_size_cell_func_vkb2_ParamLimits

0x0c8b,	// (0x00037d8c) aid_size_cell_func_vkb2

0x7029,	// (0x0003e12a) slider_pane_g4_ParamLimits

0x7029,	// (0x0003e12a) slider_pane_g4

0xb18e,	// (0x0004228f) form2_midp_gauge_slider_pane_t2_cp01

0xb19c,	// (0x0004229d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb19c,	// (0x0004229d) form2_midp_gauge_slider_pane_t3_cp01

0x13c9,	// (0x000384ca) form2_midp_slider_pane_cp01

0x84b6,	// (0x0003f5b7) navi_smil_pane

0x70c5,	// (0x0003e1c6) navi_smil_pane_g1

0x70cd,	// (0x0003e1ce) navi_smil_pane_t1

0x709a,	// (0x0003e19b) form2_midp_slider_pane_g1

0x70a3,	// (0x0003e1a4) form2_midp_slider_pane_g2

0x70ab,	// (0x0003e1ac) form2_midp_slider_pane_g3

0x709a,	// (0x0003e19b) form2_midp_slider_pane_g4

0xe09c,	// (0x0004519d) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x00046f36) form2_midp_slider_pane_g

0x138e,	// (0x0003848f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x138e,	// (0x0003848f) vkb2_area_bottom_space_btn_pane_g4

0xbcc3,	// (0x00042dc4) lc0_navi_pane_ParamLimits

0xbcc3,	// (0x00042dc4) lc0_navi_pane

0xbd33,	// (0x00042e34) lc0_stat_indi_pane_ParamLimits

0xbd33,	// (0x00042e34) lc0_stat_indi_pane

0xbd48,	// (0x00042e49) ls0_title_pane_ParamLimits

0xbd48,	// (0x00042e49) ls0_title_pane

0xb8cd,	// (0x000429ce) bg_popup_sub_pane_cp14_ParamLimits

0x64ce,	// (0x0003d5cf) list_uniindi_pane_ParamLimits

0x64da,	// (0x0003d5db) uniindi_top_pane_ParamLimits

0x6579,	// (0x0003d67a) list_single_uniindi_pane_g1_ParamLimits

0x658c,	// (0x0003d68d) list_single_uniindi_pane_t1_ParamLimits

0xb1b9,	// (0x000422ba) lc0_stat_clock_pane_ParamLimits

0xb1b9,	// (0x000422ba) lc0_stat_clock_pane

0xe0a5,	// (0x000451a6) lc0_stat_indi_pane_g1_ParamLimits

0xe0a5,	// (0x000451a6) lc0_stat_indi_pane_g1

0xe0b2,	// (0x000451b3) lc0_stat_indi_pane_g2_ParamLimits

0xe0b2,	// (0x000451b3) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x00046f41) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x00046f41) lc0_stat_indi_pane_g

0xb1c6,	// (0x000422c7) lc0_uni_indicator_pane_ParamLimits

0xb1c6,	// (0x000422c7) lc0_uni_indicator_pane

0xe0bf,	// (0x000451c0) ls0_title_pane_g1_ParamLimits

0xe0bf,	// (0x000451c0) ls0_title_pane_g1

0xe0d3,	// (0x000451d4) ls0_title_pane_t1_ParamLimits

0xe0d3,	// (0x000451d4) ls0_title_pane_t1

0xb1d3,	// (0x000422d4) lc0_uni_indicator_pane_g1_ParamLimits

0xb1d3,	// (0x000422d4) lc0_uni_indicator_pane_g1

0x713f,	// (0x0003e240) lc0_stat_clock_pane_t1

0x84b6,	// (0x0003f5b7) main_ai5_pane

0x714d,	// (0x0003e24e) ai5_sk_pane_ParamLimits

0x714d,	// (0x0003e24e) ai5_sk_pane

0xe101,	// (0x00045202) cell_ai5_widget_pane_ParamLimits

0xe101,	// (0x00045202) cell_ai5_widget_pane

0x76f6,	// (0x0003e7f7) aid_size_cell_widget_grid

0x770c,	// (0x0003e80d) bg_ai5_widget_pane_ParamLimits

0x770c,	// (0x0003e80d) bg_ai5_widget_pane

0x7776,	// (0x0003e877) cell_ai5_widget_pane_g2

0x7786,	// (0x0003e887) cell_ai5_widget_pane_g3

0x77a5,	// (0x0003e8a6) cell_ai5_widget_pane_g4

0x77b1,	// (0x0003e8b2) cell_ai5_widget_pane_g5

0xe458,	// (0x00045559) cell_ai5_widget_pane_g6

0xe464,	// (0x00045565) cell_ai5_widget_pane_g7

0x7811,	// (0x0003e912) cell_ai5_widget_pane_t1_ParamLimits

0x7811,	// (0x0003e912) cell_ai5_widget_pane_t1

0x782e,	// (0x0003e92f) cell_ai5_widget_pane_t2_ParamLimits

0x782e,	// (0x0003e92f) cell_ai5_widget_pane_t2

0x7846,	// (0x0003e947) cell_ai5_widget_pane_t3_ParamLimits

0x7846,	// (0x0003e947) cell_ai5_widget_pane_t3

0x785e,	// (0x0003e95f) cell_ai5_widget_pane_t4_ParamLimits

0x785e,	// (0x0003e95f) cell_ai5_widget_pane_t4

0x7878,	// (0x0003e979) cell_ai5_widget_pane_t5_ParamLimits

0x7878,	// (0x0003e979) cell_ai5_widget_pane_t5

0x7897,	// (0x0003e998) cell_ai5_widget_pane_t6_ParamLimits

0x7897,	// (0x0003e998) cell_ai5_widget_pane_t6

0x78a9,	// (0x0003e9aa) cell_ai5_widget_pane_t7_ParamLimits

0x78a9,	// (0x0003e9aa) cell_ai5_widget_pane_t7

0x78c2,	// (0x0003e9c3) cell_ai5_widget_pane_t8_ParamLimits

0x78c2,	// (0x0003e9c3) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x00046f5b) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x00046f5b) cell_ai5_widget_pane_t

0x790e,	// (0x0003ea0f) grid_ai5_widget_pane

0xb8cd,	// (0x000429ce) highlight_cell_ai5_widget_pane_ParamLimits

0xb8cd,	// (0x000429ce) highlight_cell_ai5_widget_pane

0xe470,	// (0x00045571) ai5_sk_left_pane

0xe47a,	// (0x0004557b) ai5_sk_middle_pane

0xe484,	// (0x00045585) ai5_sk_right_pane

0x7944,	// (0x0003ea45) bg_ai5_widget_pane_g1_ParamLimits

0x7944,	// (0x0003ea45) bg_ai5_widget_pane_g1

0x7950,	// (0x0003ea51) bg_ai5_widget_pane_g2_ParamLimits

0x7950,	// (0x0003ea51) bg_ai5_widget_pane_g2

0x795c,	// (0x0003ea5d) bg_ai5_widget_pane_g3_ParamLimits

0x795c,	// (0x0003ea5d) bg_ai5_widget_pane_g3

0x7968,	// (0x0003ea69) bg_ai5_widget_pane_g4_ParamLimits

0x7968,	// (0x0003ea69) bg_ai5_widget_pane_g4

0x7974,	// (0x0003ea75) bg_ai5_widget_pane_g5_ParamLimits

0x7974,	// (0x0003ea75) bg_ai5_widget_pane_g5

0x7980,	// (0x0003ea81) bg_ai5_widget_pane_g6_ParamLimits

0x7980,	// (0x0003ea81) bg_ai5_widget_pane_g6

0x798c,	// (0x0003ea8d) bg_ai5_widget_pane_g7_ParamLimits

0x798c,	// (0x0003ea8d) bg_ai5_widget_pane_g7

0x7998,	// (0x0003ea99) bg_ai5_widget_pane_g8_ParamLimits

0x7998,	// (0x0003ea99) bg_ai5_widget_pane_g8

0x79a4,	// (0x0003eaa5) bg_ai5_widget_pane_g9_ParamLimits

0x79a4,	// (0x0003eaa5) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x00046f70) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x00046f70) bg_ai5_widget_pane_g

0x79dd,	// (0x0003eade) cell_shortcut_ai5_widget_pane_ParamLimits

0x79dd,	// (0x0003eade) cell_shortcut_ai5_widget_pane

0x1672,	// (0x00038773) bg_cell_shortcut_ai5_widget_pane

0x79f0,	// (0x0003eaf1) cell_grid_ai5_widget_pane_g1

0x79f9,	// (0x0003eafa) highlight_cell_shortcut_ai5_widget_pane

0x2535,	// (0x00039636) ai5_sk_left_pane_g1

0x7a01,	// (0x0003eb02) ai5_sk_left_pane_g2

0x7a09,	// (0x0003eb0a) ai5_sk_left_pane_g3

0x7a11,	// (0x0003eb12) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x00046f83) ai5_sk_left_pane_g

0x7a19,	// (0x0003eb1a) ai5_sk_left_pane_t1

0x253d,	// (0x0003963e) ai5_sk_right_pane_g1

0x7a27,	// (0x0003eb28) ai5_sk_right_pane_g2

0x7a2f,	// (0x0003eb30) ai5_sk_right_pane_g3

0x7a37,	// (0x0003eb38) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x00046f8c) ai5_sk_right_pane_g

0x7a3f,	// (0x0003eb40) ai5_sk_right_pane_t1

0x253d,	// (0x0003963e) ai5_sk_middle_pane_g1

0x2535,	// (0x00039636) ai5_sk_middle_pane_g2

0x2555,	// (0x00039656) ai5_sk_middle_pane_g3

0x7a2f,	// (0x0003eb30) ai5_sk_middle_pane_g4

0x7a09,	// (0x0003eb0a) ai5_sk_middle_pane_g5

0x7a4d,	// (0x0003eb4e) ai5_sk_middle_pane_g6

0xe48e,	// (0x0004558f) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x00046f95) ai5_sk_middle_pane_g

0xa891,	// (0x00041992) aid_touch_area_size_lc0_ParamLimits

0xa891,	// (0x00041992) aid_touch_area_size_lc0

0x089d,	// (0x0003799e) cell_hwr_candidate_pane_t1_ParamLimits

0x2065,	// (0x00039166) aid_touch_navi_pane

0xbe53,	// (0x00042f54) status_dt_navi_pane_ParamLimits

0xbe53,	// (0x00042f54) status_dt_navi_pane

0xbe6b,	// (0x00042f6c) status_dt_sta_pane_ParamLimits

0xbe6b,	// (0x00042f6c) status_dt_sta_pane

0xe496,	// (0x00045597) dt_sta_controll_pane

0xe4a3,	// (0x000455a4) dt_sta_indi_pane

0xe4b0,	// (0x000455b1) dt_sta_title_pane

0xb3eb,	// (0x000424ec) bg_dt_sta_indi_pane_ParamLimits

0xb3eb,	// (0x000424ec) bg_dt_sta_indi_pane

0xe4c2,	// (0x000455c3) dt_sta_battery_pane

0xe4ca,	// (0x000455cb) dt_sta_indi_pane_g1

0xe4d3,	// (0x000455d4) dt_sta_indi_pane_g2

0xe4dc,	// (0x000455dd) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x00046fa4) dt_sta_indi_pane_g

0xe4e5,	// (0x000455e6) dt_sta_signal_pane

0xb8cd,	// (0x000429ce) bg_dt_sta_title_pane_ParamLimits

0xb8cd,	// (0x000429ce) bg_dt_sta_title_pane

0xe4ee,	// (0x000455ef) dt_sta_title_pane_g1

0xe4f6,	// (0x000455f7) dt_sta_title_pane_t1_ParamLimits

0xe4f6,	// (0x000455f7) dt_sta_title_pane_t1

0x84b6,	// (0x0003f5b7) bg_dt_sta_control_pane

0xe50b,	// (0x0004560c) dt_sta_controll_pane_g1

0xe514,	// (0x00045615) bg_dt_sta_title_pane_g1

0xe51d,	// (0x0004561e) bg_dt_sta_title_pane_g2

0xe526,	// (0x00045627) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x00046fab) bg_dt_sta_title_pane_g

0x4b69,	// (0x0003bc6a) bg_dt_sta_indi_pane_g1

0x7afb,	// (0x0003ebfc) dt_sta_signal_pane_g1

0x7b03,	// (0x0003ec04) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x00046fb2) dt_sta_signal_pane_g

0x7b0b,	// (0x0003ec0c) dt_sta_battery_pane_g1

0x7b14,	// (0x0003ec15) dt_sta_battery_pane_t1

0x4b69,	// (0x0003bc6a) bg_dt_sta_control_pane_g1

0xf01a,	// (0x0004611b) fep_china_uni_eep_pane

0xf022,	// (0x00046123) fep_china_uni_entry_pane_ParamLimits

0xf032,	// (0x00046133) popup_fep_china_uni_window_g1_ParamLimits

0xf042,	// (0x00046143) popup_fep_china_uni_window_g2_ParamLimits

0xf042,	// (0x00046143) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00046824) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00046824) popup_fep_china_uni_window_g

0x7b23,	// (0x0003ec24) fep_china_uni_eep_pane_g1

0x7b2b,	// (0x0003ec2c) fep_china_uni_eep_pane_t1

0x70bc,	// (0x0003e1bd) aid_touch_area_size_smil_player

0x21bd,	// (0x000392be) lc0_clock_pane

0x23bc,	// (0x000394bd) status_pane_g5_ParamLimits

0x23bc,	// (0x000394bd) status_pane_g5

0xa2e6,	// (0x000413e7) popup_keymap_window

0x237a,	// (0x0003947b) status_icon_pane

0x7786,	// (0x0003e887) cell_ai5_widget_pane_g3_ParamLimits

0x77a5,	// (0x0003e8a6) cell_ai5_widget_pane_g4_ParamLimits

0x77b1,	// (0x0003e8b2) cell_ai5_widget_pane_g5_ParamLimits

0x77d5,	// (0x0003e8d6) cell_ai5_widget_pane_g8_ParamLimits

0x77d5,	// (0x0003e8d6) cell_ai5_widget_pane_g8

0x77e9,	// (0x0003e8ea) cell_ai5_widget_pane_g9_ParamLimits

0x77e9,	// (0x0003e8ea) cell_ai5_widget_pane_g9

0x77fd,	// (0x0003e8fe) cell_ai5_widget_pane_g10_ParamLimits

0x77fd,	// (0x0003e8fe) cell_ai5_widget_pane_g10

0x7b3a,	// (0x0003ec3b) status_icon_pane_g1

0x84b6,	// (0x0003f5b7) bg_popup_sub_pane_cp13

0x7b42,	// (0x0003ec43) popup_keymap_window_t1

0x9fcb,	// (0x000410cc) control_pane_g6_ParamLimits

0x9fcb,	// (0x000410cc) control_pane_g6

0x9fd8,	// (0x000410d9) control_pane_g7_ParamLimits

0x9fd8,	// (0x000410d9) control_pane_g7

0x9fe5,	// (0x000410e6) control_pane_g8_ParamLimits

0x9fe5,	// (0x000410e6) control_pane_g8

0xe496,	// (0x00045597) dt_sta_controll_pane_ParamLimits

0xe4a3,	// (0x000455a4) dt_sta_indi_pane_ParamLimits

0xe4b0,	// (0x000455b1) dt_sta_title_pane_ParamLimits

0xb80f,	// (0x00042910) aid_size_touch_scroll_bar_cale

0xe9d9,	// (0x00045ada) popup_discreet_window_ParamLimits

0xe9d9,	// (0x00045ada) popup_discreet_window

0x90d9,	// (0x000401da) popup_sk_window

0x2b7d,	// (0x00039c7e) bg_popup_sub_pane_cp28_ParamLimits

0x2b7d,	// (0x00039c7e) bg_popup_sub_pane_cp28

0x7b50,	// (0x0003ec51) popup_discreet_window_g1_ParamLimits

0x7b50,	// (0x0003ec51) popup_discreet_window_g1

0x7b70,	// (0x0003ec71) popup_discreet_window_t1_ParamLimits

0x7b70,	// (0x0003ec71) popup_discreet_window_t1

0x7b8e,	// (0x0003ec8f) popup_discreet_window_t2_ParamLimits

0x7b8e,	// (0x0003ec8f) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x00046fb7) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x00046fb7) popup_discreet_window_t

0x13ff,	// (0x00038500) popup_sk_window_g1

0x1409,	// (0x0003850a) popup_sk_window_g2

0x0001,

0xfebd,	// (0x00046fbe) popup_sk_window_g

0x1413,	// (0x00038514) popup_sk_window_t1

0x1423,	// (0x00038524) popup_sk_window_t1_copy1

0x7776,	// (0x0003e877) cell_ai5_widget_pane_g2_ParamLimits

0x78d4,	// (0x0003e9d5) cell_ai5_widget_pane_t9_ParamLimits

0x78d4,	// (0x0003e9d5) cell_ai5_widget_pane_t9

0x84b6,	// (0x0003f5b7) main_fep_fshwr2_pane

0xb1f2,	// (0x000422f3) aid_fshwr2_btn_pane

0xb201,	// (0x00042302) aid_fshwr2_syb_pane

0xb213,	// (0x00042314) aid_fshwr2_txt_pane

0xb222,	// (0x00042323) fshwr2_func_candi_pane

0xb233,	// (0x00042334) fshwr2_hwr_syb_pane

0xb24e,	// (0x0004234f) fshwr2_icf_pane

0x84b6,	// (0x0003f5b7) fshwr2_icf_bg_pane

0xe52f,	// (0x00045630) fshwr2_icf_pane_t1_ParamLimits

0xe52f,	// (0x00045630) fshwr2_icf_pane_t1

0x4b69,	// (0x0003bc6a) fshwr2_func_candi_pane_g1

0x7bf7,	// (0x0003ecf8) fshwr2_func_candi_row_pane_ParamLimits

0x7bf7,	// (0x0003ecf8) fshwr2_func_candi_row_pane

0xe547,	// (0x00045648) cell_fshwr2_syb_pane_ParamLimits

0xe547,	// (0x00045648) cell_fshwr2_syb_pane

0x4e10,	// (0x0003bf11) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4e10,	// (0x0003bf11) fshwr2_hwr_syb_pane_g1

0x84b6,	// (0x0003f5b7) bg_popup_call_pane_cp01

0x7c22,	// (0x0003ed23) fshwr2_func_candi_cell_pane_ParamLimits

0x7c22,	// (0x0003ed23) fshwr2_func_candi_cell_pane

0x7c54,	// (0x0003ed55) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7c54,	// (0x0003ed55) fshwr2_func_candi_cell_bg_pane

0x7c6e,	// (0x0003ed6f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7c6e,	// (0x0003ed6f) fshwr2_func_candi_cell_pane_g1

0x7c8e,	// (0x0003ed8f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c8e,	// (0x0003ed8f) fshwr2_func_candi_cell_pane_t1

0x84b6,	// (0x0003f5b7) bg_button_pane_cp08

0x1672,	// (0x00038773) cell_fshwr2_syb_bg_pane

0xe560,	// (0x00045661) cell_fshwr2_syb_bg_pane_g1

0xe568,	// (0x00045669) cell_fshwr2_syb_bg_pane_t1

0xb8cd,	// (0x000429ce) main_tmo_pane

0xc21e,	// (0x0004331f) uni_indicator_pane_g1_ParamLimits

0xc233,	// (0x00043334) uni_indicator_pane_g2_ParamLimits

0xc248,	// (0x00043349) uni_indicator_pane_g3_ParamLimits

0xc25e,	// (0x0004335f) uni_indicator_pane_g4_ParamLimits

0xc25e,	// (0x0004335f) uni_indicator_pane_g4

0xc272,	// (0x00043373) uni_indicator_pane_g5_ParamLimits

0xc272,	// (0x00043373) uni_indicator_pane_g5

0xc286,	// (0x00043387) uni_indicator_pane_g6_ParamLimits

0xc286,	// (0x00043387) uni_indicator_pane_g6

0xf922,	// (0x00046a23) uni_indicator_pane_g_ParamLimits

0xcd5a,	// (0x00043e5b) popup_tmo_note_window_ParamLimits

0xcd5a,	// (0x00043e5b) popup_tmo_note_window

0x0c6d,	// (0x00037d6e) fshwr2_bg_pane

0x7c7f,	// (0x0003ed80) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c7f,	// (0x0003ed80) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x00046fc3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x00046fc3) fshwr2_func_candi_cell_pane_g

0x4b69,	// (0x0003bc6a) bg_popup_window_pane_cp01

0x7cb8,	// (0x0003edb9) bg_popup_window_pane_g1_cp01

0x7cc1,	// (0x0003edc2) bg_popup_window_pane_cp22_ParamLimits

0x7cc1,	// (0x0003edc2) bg_popup_window_pane_cp22

0x7ccf,	// (0x0003edd0) listscroll_tmo_link_pane_ParamLimits

0x7ccf,	// (0x0003edd0) listscroll_tmo_link_pane

0x7d0f,	// (0x0003ee10) popup_tmo_note_window_g1_ParamLimits

0x7d0f,	// (0x0003ee10) popup_tmo_note_window_g1

0x7d1c,	// (0x0003ee1d) tmo_note_info_pane_ParamLimits

0x7d1c,	// (0x0003ee1d) tmo_note_info_pane

0xe577,	// (0x00045678) list_tmo_note_info_pane_g1_ParamLimits

0xe577,	// (0x00045678) list_tmo_note_info_pane_g1

0x7d4d,	// (0x0003ee4e) list_tmo_note_info_pane_g2_ParamLimits

0x7d4d,	// (0x0003ee4e) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x00046fc8) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x00046fc8) list_tmo_note_info_pane_g

0x7d69,	// (0x0003ee6a) list_tmo_note_info_text_pane_ParamLimits

0x7d69,	// (0x0003ee6a) list_tmo_note_info_text_pane

0x7dee,	// (0x0003eeef) list_tmo_link_pane

0x7dfb,	// (0x0003eefc) scroll_pane_cp20

0x7e08,	// (0x0003ef09) list_single_tmo_link_pane_ParamLimits

0x7e08,	// (0x0003ef09) list_single_tmo_link_pane

0x7e18,	// (0x0003ef19) list_single_tmo_link_pane_t1

0x7e26,	// (0x0003ef27) list_tmo_note_info_text_pane_t1_ParamLimits

0x7e26,	// (0x0003ef27) list_tmo_note_info_text_pane_t1

0x9ab3,	// (0x00040bb4) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9ab3,	// (0x00040bb4) aid_size_touch_scroll_bar_cp01

0x99f5,	// (0x00040af6) aid_size_touch_slider_marker

0x90c9,	// (0x000401ca) popup_settings_window_ParamLimits

0x90c9,	// (0x000401ca) popup_settings_window

0xd1d9,	// (0x000442da) popup_candi_list_indi_window

0x2065,	// (0x00039166) aid_touch_navi_pane_ParamLimits

0x0bc6,	// (0x00037cc7) rs_clock_indi_pane

0x0bcf,	// (0x00037cd0) sctrl_sk_bottom_pane_ParamLimits

0x0be0,	// (0x00037ce1) sctrl_sk_top_pane_ParamLimits

0x0ce5,	// (0x00037de6) popup_fep_tooltip_window

0x76f6,	// (0x0003e7f7) aid_size_cell_widget_grid_ParamLimits

0x776a,	// (0x0003e86b) cell_ai5_widget_pane_g1_ParamLimits

0x776a,	// (0x0003e86b) cell_ai5_widget_pane_g1

0xe458,	// (0x00045559) cell_ai5_widget_pane_g6_ParamLimits

0xe464,	// (0x00045565) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x00046f46) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x00046f46) cell_ai5_widget_pane_g

0x78f8,	// (0x0003e9f9) cell_ai5_widget_pane_t10_ParamLimits

0x78f8,	// (0x0003e9f9) cell_ai5_widget_pane_t10

0x790e,	// (0x0003ea0f) grid_ai5_widget_pane_ParamLimits

0x79b0,	// (0x0003eab1) cell_contacts_ai5_widget_pane_ParamLimits

0x79b0,	// (0x0003eab1) cell_contacts_ai5_widget_pane

0x7ba3,	// (0x0003eca4) popup_discreet_window_t3_ParamLimits

0x7ba3,	// (0x0003eca4) popup_discreet_window_t3

0x1493,	// (0x00038594) popup_fshwr2_char_preview_window_ParamLimits

0x1493,	// (0x00038594) popup_fshwr2_char_preview_window

0xe58e,	// (0x0004568f) tmo_note_info_pane_t1

0xe5a3,	// (0x000456a4) tmo_note_info_pane_t2

0xe5bc,	// (0x000456bd) tmo_note_info_pane_t3

0x7dca,	// (0x0003eecb) tmo_note_info_pane_t4

0x7ddc,	// (0x0003eedd) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x00046fcd) tmo_note_info_pane_t

0x7dee,	// (0x0003eeef) list_tmo_link_pane_ParamLimits

0x7dfb,	// (0x0003eefc) scroll_pane_cp20_ParamLimits

0x84b6,	// (0x0003f5b7) bg_popup_fep_char_preview_window_cp01

0x7e3f,	// (0x0003ef40) popup_fshwr2_char_preview_window_t1

0x7e4d,	// (0x0003ef4e) popup_candi_list_indi_window_g1

0x7e56,	// (0x0003ef57) bg_cell_contacts_ai5_widget_pane

0x7e62,	// (0x0003ef63) cell_contacts_ai5_widget_pane_g1

0x7e75,	// (0x0003ef76) cell_contacts_ai5_widget_pane_g2

0x7e81,	// (0x0003ef82) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x00046fd8) cell_contacts_ai5_widget_pane_g

0x7e93,	// (0x0003ef94) cell_contacts_ai5_widget_pane_t1

0xb8cd,	// (0x000429ce) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe636,	// (0x00045737) settings_container_pane

0x1672,	// (0x00038773) listscroll_set_pane_copy1

0x4284,	// (0x0003b385) scroll_pane_cp121_copy1

0x7f19,	// (0x0003f01a) set_content_pane_copy1

0xe642,	// (0x00045743) aid_height_set_list_copy1_ParamLimits

0xe642,	// (0x00045743) aid_height_set_list_copy1

0x390a,	// (0x0003aa0b) aid_size_parent_copy1_ParamLimits

0x390a,	// (0x0003aa0b) aid_size_parent_copy1

0xe64e,	// (0x0004574f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe64e,	// (0x0004574f) button_value_adjust_pane_cp6_copy1

0x19ec,	// (0x00038aed) list_highlight_pane_cp2_copy1_ParamLimits

0x19ec,	// (0x00038aed) list_highlight_pane_cp2_copy1

0xe662,	// (0x00045763) list_set_pane_copy1_ParamLimits

0xe662,	// (0x00045763) list_set_pane_copy1

0xe5d1,	// (0x000456d2) main_pane_set_t1_copy1_ParamLimits

0xe5d1,	// (0x000456d2) main_pane_set_t1_copy1

0xe60b,	// (0x0004570c) main_pane_set_t2_copy1_ParamLimits

0xe60b,	// (0x0004570c) main_pane_set_t2_copy1

0xe729,	// (0x0004582a) main_pane_set_t3_copy1

0xe737,	// (0x00045838) main_pane_set_t4_copy1

0xe62a,	// (0x0004572b) set_content_pane_g1_copy1_ParamLimits

0xe62a,	// (0x0004572b) set_content_pane_g1_copy1

0xe745,	// (0x00045846) setting_code_pane_copy1

0x802c,	// (0x0003f12d) setting_slider_graphic_pane_copy1

0x802c,	// (0x0003f12d) setting_slider_pane_copy1

0x802c,	// (0x0003f12d) setting_text_pane_copy1

0x802c,	// (0x0003f12d) setting_volume_pane_copy1

0xe745,	// (0x00045846) settings_code_pane_cp2_copy1

0xe74d,	// (0x0004584e) settings_code_pane_cp_copy1_ParamLimits

0xe74d,	// (0x0004584e) settings_code_pane_cp_copy1

0xb264,	// (0x00042365) volume_set_pane_copy1

0xe761,	// (0x00045862) volume_set_pane_g10_copy1

0xe76d,	// (0x0004586e) volume_set_pane_g1_copy1

0xe777,	// (0x00045878) volume_set_pane_g2_copy1

0xe781,	// (0x00045882) volume_set_pane_g3_copy1

0xe78b,	// (0x0004588c) volume_set_pane_g4_copy1

0xe795,	// (0x00045896) volume_set_pane_g5_copy1

0xe79f,	// (0x000458a0) volume_set_pane_g6_copy1

0xe7a9,	// (0x000458aa) volume_set_pane_g7_copy1

0xe7b3,	// (0x000458b4) volume_set_pane_g8_copy1

0xe7bd,	// (0x000458be) volume_set_pane_g9_copy1

0xb2b8,	// (0x000423b9) bg_set_opt_pane_cp_copy1_ParamLimits

0xb2b8,	// (0x000423b9) bg_set_opt_pane_cp_copy1

0x14b7,	// (0x000385b8) setting_slider_pane_t1_copy1_ParamLimits

0x14b7,	// (0x000385b8) setting_slider_pane_t1_copy1

0xb270,	// (0x00042371) setting_slider_pane_t2_copy1_ParamLimits

0xb270,	// (0x00042371) setting_slider_pane_t2_copy1

0xb28a,	// (0x0004238b) setting_slider_pane_t3_copy1_ParamLimits

0xb28a,	// (0x0004238b) setting_slider_pane_t3_copy1

0xb2a2,	// (0x000423a3) slider_set_pane_copy1_ParamLimits

0xb2a2,	// (0x000423a3) slider_set_pane_copy1

0xb928,	// (0x00042a29) set_opt_bg_pane_g1_copy2

0xb930,	// (0x00042a31) set_opt_bg_pane_g2_copy2

0x80ae,	// (0x0003f1af) set_opt_bg_pane_g3_copy2

0xb940,	// (0x00042a41) set_opt_bg_pane_g4_copy2

0xb948,	// (0x00042a49) set_opt_bg_pane_g5_copy2

0xb950,	// (0x00042a51) set_opt_bg_pane_g6_copy2

0xe7c7,	// (0x000458c8) set_opt_bg_pane_g7_copy2

0x80c2,	// (0x0003f1c3) set_opt_bg_pane_g8_copy2

0x80cc,	// (0x0003f1cd) set_opt_bg_pane_g9_copy2

0x80d6,	// (0x0003f1d7) aid_size_touch_slider_mark_copy1_ParamLimits

0x80d6,	// (0x0003f1d7) aid_size_touch_slider_mark_copy1

0x80ea,	// (0x0003f1eb) slider_set_pane_g1_copy1

0x80f3,	// (0x0003f1f4) slider_set_pane_g2_copy1

0x4d0b,	// (0x0003be0c) slider_set_pane_g3_copy1_ParamLimits

0x4d0b,	// (0x0003be0c) slider_set_pane_g3_copy1

0x4d1f,	// (0x0003be20) slider_set_pane_g4_copy1_ParamLimits

0x4d1f,	// (0x0003be20) slider_set_pane_g4_copy1

0x68df,	// (0x0003d9e0) slider_set_pane_g5_copy1_ParamLimits

0x68df,	// (0x0003d9e0) slider_set_pane_g5_copy1

0x4d0b,	// (0x0003be0c) slider_set_pane_g6_copy1_ParamLimits

0x4d0b,	// (0x0003be0c) slider_set_pane_g6_copy1

0xe7d1,	// (0x000458d2) slider_set_pane_g7_copy1_ParamLimits

0xe7d1,	// (0x000458d2) slider_set_pane_g7_copy1

0x84ca,	// (0x0003f5cb) bg_set_opt_pane_cp2_copy1

0x8111,	// (0x0003f212) setting_slider_graphic_pane_g1_copy1

0xe7e7,	// (0x000458e8) setting_slider_graphic_pane_t1_copy1

0xe7f7,	// (0x000458f8) setting_slider_graphic_pane_t2_copy1

0xe807,	// (0x00045908) slider_set_pane_cp_copy1

0x814a,	// (0x0003f24b) input_focus_pane_cp1_copy1

0x8153,	// (0x0003f254) list_set_text_pane_copy1

0x815b,	// (0x0003f25c) setting_text_pane_g1_copy1

0xed3b,	// (0x00045e3c) set_text_pane_t1_copy1

0x814a,	// (0x0003f24b) input_focus_pane_cp2_copy1

0x815b,	// (0x0003f25c) setting_code_pane_g1_copy1

0xe80f,	// (0x00045910) setting_code_pane_t1_copy1

0xe81d,	// (0x0004591e) list_set_graphic_pane_copy1

0x84ca,	// (0x0003f5cb) bg_set_opt_pane_cp4_copy1

0x9e00,	// (0x00040f01) list_set_graphic_pane_g1_copy1_ParamLimits

0x9e00,	// (0x00040f01) list_set_graphic_pane_g1_copy1

0xe82f,	// (0x00045930) list_set_graphic_pane_g2_copy1

0x9e18,	// (0x00040f19) list_set_graphic_pane_t1_copy1_ParamLimits

0x9e18,	// (0x00040f19) list_set_graphic_pane_t1_copy1

0x4b69,	// (0x0003bc6a) rs_clock_indi_pane_g1

0x818c,	// (0x0003f28d) rs_clock_indi_pane_t1

0x819a,	// (0x0003f29b) rs_indi_pane

0x81a2,	// (0x0003f2a3) rs_indi_pane_g1

0x81ab,	// (0x0003f2ac) rs_indi_pane_g2

0x81b4,	// (0x0003f2b5) rs_indi_pane_g3

0x0002,

0xfede,	// (0x00046fdf) rs_indi_pane_g

0x1672,	// (0x00038773) bg_popup_preview_window_pane_cp03

0x81bd,	// (0x0003f2be) popup_fep_tooltip_window_t1

0x584c,	// (0x0003c94d) popup_note2_window_g2_ParamLimits

0x584c,	// (0x0003c94d) popup_note2_window_g2

0x0001,

0xfc77,	// (0x00046d78) popup_note2_window_g_ParamLimits

0xfc77,	// (0x00046d78) popup_note2_window_g

0x5d54,	// (0x0003ce55) bg_popup_sub_pane_cp11_ParamLimits

0x5d61,	// (0x0003ce62) cell_ai3_links_pane_g1_ParamLimits

0x5d78,	// (0x0003ce79) cell_ai3_links_pane_t1

0xed3b,	// (0x00045e3c) set_text_pane_t1_copy1_ParamLimits

0x9e8c,	// (0x00040f8d) cell_graphic_popup_pane_cp2_ParamLimits

0x9e8c,	// (0x00040f8d) cell_graphic_popup_pane_cp2

0xe837,	// (0x00045938) cell_graphic_popup_pane_g1_cp2

0xb622,	// (0x00042723) cell_graphic_popup_pane_g2_cp2

0x81d3,	// (0x0003f2d4) cell_graphic_popup_pane_g3_cp2

0x81db,	// (0x0003f2dc) cell_graphic_popup_pane_t2_cp2

0xb633,	// (0x00042734) grid_highlight_pane_cp3_cp2

0xbbd1,	// (0x00042cd2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb8cd,	// (0x000429ce) main_tmo_pane_ParamLimits

0xcd4e,	// (0x00043e4f) popup_tmo_big_image_note_window

0x775a,	// (0x0003e85b) cell_ai5_widget_list_pane

0x7762,	// (0x0003e863) cell_ai5_widget_lrg_icon_pane

0xe58e,	// (0x0004568f) tmo_note_info_pane_t1_ParamLimits

0xe5a3,	// (0x000456a4) tmo_note_info_pane_t2_ParamLimits

0xe5bc,	// (0x000456bd) tmo_note_info_pane_t3_ParamLimits

0x7dca,	// (0x0003eecb) tmo_note_info_pane_t4_ParamLimits

0x7ddc,	// (0x0003eedd) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x00046fcd) tmo_note_info_pane_t_ParamLimits

0xe636,	// (0x00045737) settings_container_pane_ParamLimits

0x8142,	// (0x0003f243) indicator_popup_pane_cp5

0x8142,	// (0x0003f243) indicator_popup_pane_cp6

0xe81d,	// (0x0004591e) list_set_graphic_pane_copy1_ParamLimits

0x84b6,	// (0x0003f5b7) bg_popup_window_pane_cp23

0x81e9,	// (0x0003f2ea) popup_tmo_big_image_note_window_g1

0x81f5,	// (0x0003f2f6) popup_tmo_big_image_note_window_t1

0x8205,	// (0x0003f306) popup_tmo_big_image_note_window_t2

0x8215,	// (0x0003f316) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x00046fe6) popup_tmo_big_image_note_window_t

0x8225,	// (0x0003f326) cell_ai5_widget_lrg_icon_pane_g1

0x822d,	// (0x0003f32e) cell_ai5_widget_lrg_icon_pane_t1

0x823b,	// (0x0003f33c) cell_ai5_widget_list_row_pane_ParamLimits

0x823b,	// (0x0003f33c) cell_ai5_widget_list_row_pane

0x8254,	// (0x0003f355) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8254,	// (0x0003f355) cell_ai5_widget_list_row_pane_g1

0x8261,	// (0x0003f362) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8261,	// (0x0003f362) cell_ai5_widget_list_row_pane_t1

0x8279,	// (0x0003f37a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8279,	// (0x0003f37a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeec,	// (0x00046fed) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x00046fed) cell_ai5_widget_list_row_pane_t

0xe8fc,	// (0x000459fd) main_fep_vtchi_ss_pane

0x152c,	// (0x0003862d) popup_fep_char_pre_window

0x1534,	// (0x00038635) popup_fep_ituss_window

0x1555,	// (0x00038656) popup_fep_vkbss_window

0x82a1,	// (0x0003f3a2) grid_vkbss_keypad_pane_ParamLimits

0x82a1,	// (0x0003f3a2) grid_vkbss_keypad_pane

0x82b1,	// (0x0003f3b2) ituss_keypad_pane

0x1582,	// (0x00038683) aid_vkbss_key_offset_ParamLimits

0x1582,	// (0x00038683) aid_vkbss_key_offset

0x158e,	// (0x0003868f) cell_vkbss_key_pane_ParamLimits

0x158e,	// (0x0003868f) cell_vkbss_key_pane

0x82c1,	// (0x0003f3c2) bg_cell_vkbss_key_g1_ParamLimits

0x82c1,	// (0x0003f3c2) bg_cell_vkbss_key_g1

0x82cd,	// (0x0003f3ce) cell_vkbss_key_3p_pane_ParamLimits

0x82cd,	// (0x0003f3ce) cell_vkbss_key_3p_pane

0x82e7,	// (0x0003f3e8) cell_vkbss_key_g1_ParamLimits

0x82e7,	// (0x0003f3e8) cell_vkbss_key_g1

0x8301,	// (0x0003f402) cell_vkbss_key_t1_ParamLimits

0x8301,	// (0x0003f402) cell_vkbss_key_t1

0x15a4,	// (0x000386a5) cell_ituss_key_pane_ParamLimits

0x15a4,	// (0x000386a5) cell_ituss_key_pane

0x832c,	// (0x0003f42d) bg_cell_ituss_key_g1_ParamLimits

0x832c,	// (0x0003f42d) bg_cell_ituss_key_g1

0x8338,	// (0x0003f439) cell_ituss_key_pane_g1_ParamLimits

0x8338,	// (0x0003f439) cell_ituss_key_pane_g1

0x834c,	// (0x0003f44d) cell_ituss_key_pane_g2_ParamLimits

0x834c,	// (0x0003f44d) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x00046ff4) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x00046ff4) cell_ituss_key_pane_g

0x837e,	// (0x0003f47f) cell_ituss_key_t1_ParamLimits

0x837e,	// (0x0003f47f) cell_ituss_key_t1

0x83b8,	// (0x0003f4b9) cell_ituss_key_t2_ParamLimits

0x83b8,	// (0x0003f4b9) cell_ituss_key_t2

0x83e9,	// (0x0003f4ea) cell_ituss_key_t3_ParamLimits

0x83e9,	// (0x0003f4ea) cell_ituss_key_t3

0x841a,	// (0x0003f51b) cell_ituss_key_t4_ParamLimits

0x841a,	// (0x0003f51b) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x00046ff9) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x00046ff9) cell_ituss_key_t

0x844b,	// (0x0003f54c) cell_vkbss_key_3p_pane_g1

0x8453,	// (0x0003f554) cell_vkbss_key_3p_pane_g2

0x845b,	// (0x0003f55c) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00047002) cell_vkbss_key_3p_pane_g

0x84b6,	// (0x0003f5b7) bg_popup_fep_char_preview_window_cp02

0x8463,	// (0x0003f564) popup_fep_char_pre_window_t1

0xe44e,	// (0x0004554f) main_ai5_sk_pane

0x7e56,	// (0x0003ef57) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7e62,	// (0x0003ef63) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7e75,	// (0x0003ef76) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7e81,	// (0x0003ef82) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x00046fd8) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7e93,	// (0x0003ef94) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb8cd,	// (0x000429ce) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe83f,	// (0x00045940) main_ai5_sk_pane_g1

0x29b5,	// (0x00039ab6) popup_query_code_window_g1

0x154a,	// (0x0003864b) popup_fep_vkb_icf_pane

0x1560,	// (0x00038661) popup_fep_vtchi_icf_pane

0xb8cd,	// (0x000429ce) bg_icf_pane

0x847b,	// (0x0003f57c) list_vkb_icf_pane

0xb8cd,	// (0x000429ce) bg_icf_pane_cp01

0x8487,	// (0x0003f588) vtchi_icf_list_pane

0x8498,	// (0x0003f599) list_vkb_icf_pane_t1_ParamLimits

0x8498,	// (0x0003f599) list_vkb_icf_pane_t1

0x8532,	// (0x0003f633) vtchi_icf_list_pane_t1_ParamLimits

0x8532,	// (0x0003f633) vtchi_icf_list_pane_t1

0x1534,	// (0x00038635) popup_fep_ituss_window_ParamLimits

0x1560,	// (0x00038661) popup_fep_vtchi_icf_pane_ParamLimits

0x82b1,	// (0x0003f3b2) ituss_keypad_pane_ParamLimits

0x1576,	// (0x00038677) ituss_sks_pane

0xb8cd,	// (0x000429ce) bg_icf_pane_ParamLimits

0x151d,	// (0x0003861e) icf_edit_indi_pane_ParamLimits

0x151d,	// (0x0003861e) icf_edit_indi_pane

0x847b,	// (0x0003f57c) list_vkb_icf_pane_ParamLimits

0xb8cd,	// (0x000429ce) bg_icf_pane_cp01_ParamLimits

0x151d,	// (0x0003861e) icf_edit_indi_pane_cp01_ParamLimits

0x151d,	// (0x0003861e) icf_edit_indi_pane_cp01

0x848f,	// (0x0003f590) vtchi_query_pane

0x4e10,	// (0x0003bf11) icf_edit_indi_pane_g1_ParamLimits

0x4e10,	// (0x0003bf11) icf_edit_indi_pane_g1

0x85b4,	// (0x0003f6b5) icf_edit_indi_pane_g2_ParamLimits

0x85b4,	// (0x0003f6b5) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0004701a) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0004701a) icf_edit_indi_pane_g

0x85c3,	// (0x0003f6c4) icf_edit_indi_pane_t1

0x854a,	// (0x0003f64b) bg_input_focus_pane_cp042

0xb806,	// (0x00042907) vtchi_button_pane

0x8553,	// (0x0003f654) vtchi_query_pane_t1

0x8561,	// (0x0003f662) vtchi_query_pane_t2

0x856f,	// (0x0003f670) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00047009) vtchi_query_pane_t

0x84b6,	// (0x0003f5b7) bg_button_pane_cp13

0x857d,	// (0x0003f67e) vtchi_button_pane_g1

0x8585,	// (0x0003f686) ituss_sks_pane_g1

0x8590,	// (0x0003f691) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00047010) ituss_sks_pane_g

0x8598,	// (0x0003f699) ituss_sks_pane_t1

0x85a6,	// (0x0003f6a7) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00047015) ituss_sks_pane_t

0x4619,	// (0x0003b71a) indicator_nsta_pane_cp_g1

0x4622,	// (0x0003b723) indicator_nsta_pane_cp_g2

0x462a,	// (0x0003b72b) indicator_nsta_pane_cp_g3

0x4632,	// (0x0003b733) indicator_nsta_pane_cp_g4

0x463a,	// (0x0003b73b) indicator_nsta_pane_cp_g5

0x4642,	// (0x0003b743) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x00046bb6) indicator_nsta_pane_cp_g

0xdf71,	// (0x00045072) cell_graphic2_pane_t2_ParamLimits

0xdf71,	// (0x00045072) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x00046ecf) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x00046ecf) cell_graphic2_pane_t

0xdfa7,	// (0x000450a8) cell_graphic2_control_pane_t1

0x9d00,	// (0x00040e01) signal_pane_g3_ParamLimits

0x9d00,	// (0x00040e01) signal_pane_g3

0x9d14,	// (0x00040e15) signal_pane_g4_ParamLimits

0x9d14,	// (0x00040e15) signal_pane_g4

0x828b,	// (0x0003f38c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x828b,	// (0x0003f38c) cell_ai5_widget_list_row_pane_t3

0x836c,	// (0x0003f46d) cell_ituss_key_pane_t1_ParamLimits

0x836c,	// (0x0003f46d) cell_ituss_key_pane_t1

0x2632,	// (0x00039733) form_field_data_wide_pane_vc_t2_ParamLimits

0x2632,	// (0x00039733) form_field_data_wide_pane_vc_t2

0x2646,	// (0x00039747) form_field_data_wide_pane_vc_t3_ParamLimits

0x2646,	// (0x00039747) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0004690b) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0004690b) form_field_data_wide_pane_vc_t

0x42c4,	// (0x0003b3c5) form_field_slider_wide_pane_vc_t3_ParamLimits

0x42c4,	// (0x0003b3c5) form_field_slider_wide_pane_vc_t3

0x439a,	// (0x0003b49b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x439a,	// (0x0003b49b) form_field_popup_wide_pane_vc_t2

0x43b1,	// (0x0003b4b2) form_field_popup_wide_pane_vc_t3_ParamLimits

0x43b1,	// (0x0003b4b2) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x00046ba5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x00046ba5) form_field_popup_wide_pane_vc_t

0xb1f2,	// (0x000422f3) aid_fshwr2_btn_pane_ParamLimits

0xb201,	// (0x00042302) aid_fshwr2_syb_pane_ParamLimits

0xb213,	// (0x00042314) aid_fshwr2_txt_pane_ParamLimits

0x0c6d,	// (0x00037d6e) fshwr2_bg_pane_ParamLimits

0xb222,	// (0x00042323) fshwr2_func_candi_pane_ParamLimits

0xb233,	// (0x00042334) fshwr2_hwr_syb_pane_ParamLimits

0xb24e,	// (0x0004234f) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small

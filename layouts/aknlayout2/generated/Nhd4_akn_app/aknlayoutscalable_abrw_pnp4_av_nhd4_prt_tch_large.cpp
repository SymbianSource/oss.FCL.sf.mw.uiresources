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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000565ae };

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
0x5191,	// (0x0005b73f) Screen

0x519d,	// (0x0005b74b) application_window_ParamLimits

0x519d,	// (0x0005b74b) application_window

0xe0ad,	// (0x0006465b) screen_g1

0x51f9,	// (0x0005b7a7) area_bottom_pane_ParamLimits

0x51f9,	// (0x0005b7a7) area_bottom_pane

0x52b9,	// (0x0005b867) area_top_pane_ParamLimits

0x52b9,	// (0x0005b867) area_top_pane

0x5357,	// (0x0005b905) main_pane_ParamLimits

0x5357,	// (0x0005b905) main_pane

0xe0b7,	// (0x00064665) misc_graphics

0x7390,	// (0x0005d93e) battery_pane_ParamLimits

0x7390,	// (0x0005d93e) battery_pane

0x98a5,	// (0x0005fe53) bg_status_flat_pane_g8

0x98ad,	// (0x0005fe5b) bg_status_flat_pane_g9

0x7458,	// (0x0005da06) context_pane_ParamLimits

0x7458,	// (0x0005da06) context_pane

0x756e,	// (0x0005db1c) navi_pane_ParamLimits

0x756e,	// (0x0005db1c) navi_pane

0x75f2,	// (0x0005dba0) signal_pane_ParamLimits

0x75f2,	// (0x0005dba0) signal_pane

0x0008,

0xf84f,	// (0x00065dfd) bg_status_flat_pane_g

0x8e86,	// (0x0005f434) status_pane_g1_ParamLimits

0x8e86,	// (0x0005f434) status_pane_g1

0x8e9a,	// (0x0005f448) status_pane_g2_ParamLimits

0x8e9a,	// (0x0005f448) status_pane_g2

0x8ea6,	// (0x0005f454) status_pane_g3_ParamLimits

0x8ea6,	// (0x0005f454) status_pane_g3

0x0004,

0xf776,	// (0x00065d24) status_pane_g_ParamLimits

0xf776,	// (0x00065d24) status_pane_g

0x8eda,	// (0x0005f488) title_pane_ParamLimits

0x8eda,	// (0x0005f488) title_pane

0x8f17,	// (0x0005f4c5) uni_indicator_pane_ParamLimits

0x8f17,	// (0x0005f4c5) uni_indicator_pane

0x180a,	// (0x00057db8) bg_list_pane_ParamLimits

0x180a,	// (0x00057db8) bg_list_pane

0x6d47,	// (0x0005d2f5) find_pane

0xf51d,	// (0x00065acb) listscroll_app_pane_ParamLimits

0xf51d,	// (0x00065acb) listscroll_app_pane

0x182a,	// (0x00057dd8) listscroll_form_pane

0x6d4f,	// (0x0005d2fd) listscroll_gen_pane_ParamLimits

0x6d4f,	// (0x0005d2fd) listscroll_gen_pane

0x6d63,	// (0x0005d311) listscroll_set_pane

0x6220,	// (0x0005c7ce) main_idle_act_pane

0x169e,	// (0x00057c4c) main_idle_trad_pane

0x169e,	// (0x00057c4c) main_list_empty_pane

0xf51d,	// (0x00065acb) main_midp_pane

0x1844,	// (0x00057df2) main_pane_g1_ParamLimits

0x1844,	// (0x00057df2) main_pane_g1

0x6d79,	// (0x0005d327) popup_ai_message_window_ParamLimits

0x6d79,	// (0x0005d327) popup_ai_message_window

0x6e1d,	// (0x0005d3cb) popup_fep_china_uni_window_ParamLimits

0x6e1d,	// (0x0005d3cb) popup_fep_china_uni_window

0x6e77,	// (0x0005d425) popup_fep_japan_candidate_window_ParamLimits

0x6e77,	// (0x0005d425) popup_fep_japan_candidate_window

0x6e95,	// (0x0005d443) popup_fep_japan_predictive_window_ParamLimits

0x6e95,	// (0x0005d443) popup_fep_japan_predictive_window

0x6ec5,	// (0x0005d473) popup_find_window

0x6ed2,	// (0x0005d480) popup_grid_graphic_window_ParamLimits

0x6ed2,	// (0x0005d480) popup_grid_graphic_window

0x6efc,	// (0x0005d4aa) popup_large_graphic_colour_window

0x6f22,	// (0x0005d4d0) popup_menu_window_ParamLimits

0x6f22,	// (0x0005d4d0) popup_menu_window

0x70de,	// (0x0005d68c) popup_note_image_window

0x70ca,	// (0x0005d678) popup_note_wait_window_ParamLimits

0x70ca,	// (0x0005d678) popup_note_wait_window

0x70ca,	// (0x0005d678) popup_note_window_ParamLimits

0x70ca,	// (0x0005d678) popup_note_window

0x7134,	// (0x0005d6e2) popup_query_code_window_ParamLimits

0x7134,	// (0x0005d6e2) popup_query_code_window

0x7148,	// (0x0005d6f6) popup_query_data_code_window_ParamLimits

0x7148,	// (0x0005d6f6) popup_query_data_code_window

0x7165,	// (0x0005d713) popup_query_data_window_ParamLimits

0x7165,	// (0x0005d713) popup_query_data_window

0x7181,	// (0x0005d72f) popup_query_sat_info_window_ParamLimits

0x7181,	// (0x0005d72f) popup_query_sat_info_window

0x71ba,	// (0x0005d768) popup_snote_single_graphic_window_ParamLimits

0x71ba,	// (0x0005d768) popup_snote_single_graphic_window

0x71ba,	// (0x0005d768) popup_snote_single_text_window_ParamLimits

0x71ba,	// (0x0005d768) popup_snote_single_text_window

0x71cf,	// (0x0005d77d) popup_sub_window_general

0x72ff,	// (0x0005d8ad) popup_window_general_ParamLimits

0x72ff,	// (0x0005d8ad) popup_window_general

0x7314,	// (0x0005d8c2) power_save_pane

0x6bae,	// (0x0005d15c) control_pane_g1_ParamLimits

0x6bae,	// (0x0005d15c) control_pane_g1

0x6bd5,	// (0x0005d183) control_pane_g2_ParamLimits

0x6bd5,	// (0x0005d183) control_pane_g2

0x17f4,	// (0x00057da2) control_pane_g3_ParamLimits

0x17f4,	// (0x00057da2) control_pane_g3

0x0007,

0xf75e,	// (0x00065d0c) control_pane_g_ParamLimits

0xf75e,	// (0x00065d0c) control_pane_g

0x6c46,	// (0x0005d1f4) control_pane_t1_ParamLimits

0x6c46,	// (0x0005d1f4) control_pane_t1

0x6c9c,	// (0x0005d24a) control_pane_t2_ParamLimits

0x6c9c,	// (0x0005d24a) control_pane_t2

0x0002,

0xf76f,	// (0x00065d1d) control_pane_t_ParamLimits

0xf76f,	// (0x00065d1d) control_pane_t

0x6b27,	// (0x0005d0d5) navi_navi_volume_pane_cp1

0x6b2f,	// (0x0005d0dd) status_small_icon_pane

0x17a0,	// (0x00057d4e) status_small_pane_g1_ParamLimits

0x17a0,	// (0x00057d4e) status_small_pane_g1

0x6b37,	// (0x0005d0e5) status_small_pane_g2_ParamLimits

0x6b37,	// (0x0005d0e5) status_small_pane_g2

0x17d4,	// (0x00057d82) status_small_pane_g3_ParamLimits

0x17d4,	// (0x00057d82) status_small_pane_g3

0x6b43,	// (0x0005d0f1) status_small_pane_g4_ParamLimits

0x6b43,	// (0x0005d0f1) status_small_pane_g4

0x6b4f,	// (0x0005d0fd) status_small_pane_g5_ParamLimits

0x6b4f,	// (0x0005d0fd) status_small_pane_g5

0x6b5d,	// (0x0005d10b) status_small_pane_g6_ParamLimits

0x6b5d,	// (0x0005d10b) status_small_pane_g6

0x0007,

0xf74d,	// (0x00065cfb) status_small_pane_g_ParamLimits

0xf74d,	// (0x00065cfb) status_small_pane_g

0x6b78,	// (0x0005d126) status_small_pane_t1

0x6b9a,	// (0x0005d148) status_small_wait_pane_ParamLimits

0x6b9a,	// (0x0005d148) status_small_wait_pane

0x6609,	// (0x0005cbb7) aid_levels_signal_ParamLimits

0x6609,	// (0x0005cbb7) aid_levels_signal

0x661b,	// (0x0005cbc9) signal_pane_g1_ParamLimits

0x661b,	// (0x0005cbc9) signal_pane_g1

0x6630,	// (0x0005cbde) signal_pane_g2_ParamLimits

0x6630,	// (0x0005cbde) signal_pane_g2

0x0003,

0xf6de,	// (0x00065c8c) signal_pane_g_ParamLimits

0xf6de,	// (0x00065c8c) signal_pane_g

0x1298,	// (0x00057846) context_pane_g1

0x5598,	// (0x0005bb46) title_pane_g1

0x55c2,	// (0x0005bb70) title_pane_t1

0xe0cd,	// (0x0006467b) title_pane_t2

0xe0f3,	// (0x000646a1) title_pane_t3

0x0002,

0xf532,	// (0x00065ae0) title_pane_t

0x8f2f,	// (0x0005f4dd) aid_levels_battery_ParamLimits

0x8f2f,	// (0x0005f4dd) aid_levels_battery

0x8f43,	// (0x0005f4f1) battery_pane_g1_ParamLimits

0x8f43,	// (0x0005f4f1) battery_pane_g1

0x8f59,	// (0x0005f507) battery_pane_g2_ParamLimits

0x8f59,	// (0x0005f507) battery_pane_g2

0x0001,

0xf781,	// (0x00065d2f) battery_pane_g_ParamLimits

0xf781,	// (0x00065d2f) battery_pane_g

0xa1c9,	// (0x00060777) uni_indicator_pane_g1

0xa1dc,	// (0x0006078a) uni_indicator_pane_g2

0xa1ee,	// (0x0006079c) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00065ea5) uni_indicator_pane_g

0x1541,	// (0x00057aef) navi_icon_pane_ParamLimits

0x1541,	// (0x00057aef) navi_icon_pane

0x148a,	// (0x00057a38) navi_midp_pane

0x155d,	// (0x00057b0b) navi_navi_pane

0x1567,	// (0x00057b15) navi_text_pane_ParamLimits

0x1567,	// (0x00057b15) navi_text_pane

0xe0ad,	// (0x0006465b) status_small_wait_pane_g1

0xe344,	// (0x000648f2) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00065ea0) status_small_wait_pane_g

0x9ef0,	// (0x0006049e) navi_navi_icon_text_pane

0x9ef8,	// (0x000604a6) navi_navi_pane_g1_ParamLimits

0x9ef8,	// (0x000604a6) navi_navi_pane_g1

0x9f0a,	// (0x000604b8) navi_navi_pane_g2_ParamLimits

0x9f0a,	// (0x000604b8) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00065e6e) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00065e6e) navi_navi_pane_g

0x9f1c,	// (0x000604ca) navi_navi_tabs_pane

0x9f25,	// (0x000604d3) navi_navi_text_pane

0x9ef0,	// (0x0006049e) navi_navi_volume_pane

0x9ecc,	// (0x0006047a) navi_text_pane_t1

0x9ec0,	// (0x0006046e) navi_icon_pane_g1

0x9e13,	// (0x000603c1) navi_navi_text_pane_t1

0x790c,	// (0x0005deba) navi_navi_volume_pane_g1

0x7914,	// (0x0005dec2) volume_small_pane

0x9d79,	// (0x00060327) navi_navi_icon_text_pane_g1

0x9d81,	// (0x0006032f) navi_navi_icon_text_pane_t1

0x155d,	// (0x00057b0b) navi_tabs_2_long_pane

0x155d,	// (0x00057b0b) navi_tabs_2_pane

0x155d,	// (0x00057b0b) navi_tabs_3_long_pane

0x155d,	// (0x00057b0b) navi_tabs_3_pane

0x155d,	// (0x00057b0b) navi_tabs_4_pane

0x78ec,	// (0x0005de9a) tabs_2_active_pane_ParamLimits

0x78ec,	// (0x0005de9a) tabs_2_active_pane

0x78fc,	// (0x0005deaa) tabs_2_passive_pane_ParamLimits

0x78fc,	// (0x0005deaa) tabs_2_passive_pane

0x78ba,	// (0x0005de68) tabs_3_active_pane_ParamLimits

0x78ba,	// (0x0005de68) tabs_3_active_pane

0x78ca,	// (0x0005de78) tabs_3_passive_pane_ParamLimits

0x78ca,	// (0x0005de78) tabs_3_passive_pane

0x78db,	// (0x0005de89) tabs_3_passive_pane_cp_ParamLimits

0x78db,	// (0x0005de89) tabs_3_passive_pane_cp

0x7876,	// (0x0005de24) tabs_4_active_pane_ParamLimits

0x7876,	// (0x0005de24) tabs_4_active_pane

0x7887,	// (0x0005de35) tabs_4_passive_pane_ParamLimits

0x7887,	// (0x0005de35) tabs_4_passive_pane

0x7898,	// (0x0005de46) tabs_4_passive_pane_cp_ParamLimits

0x7898,	// (0x0005de46) tabs_4_passive_pane_cp

0x78a9,	// (0x0005de57) tabs_4_passive_pane_cp2_ParamLimits

0x78a9,	// (0x0005de57) tabs_4_passive_pane_cp2

0x7852,	// (0x0005de00) tabs_2_long_active_pane_ParamLimits

0x7852,	// (0x0005de00) tabs_2_long_active_pane

0x7864,	// (0x0005de12) tabs_2_long_passive_pane_ParamLimits

0x7864,	// (0x0005de12) tabs_2_long_passive_pane

0x780d,	// (0x0005ddbb) tabs_3_long_active_pane_ParamLimits

0x780d,	// (0x0005ddbb) tabs_3_long_active_pane

0x7826,	// (0x0005ddd4) tabs_3_long_passive_pane_ParamLimits

0x7826,	// (0x0005ddd4) tabs_3_long_passive_pane

0x7839,	// (0x0005dde7) tabs_3_long_passive_pane_cp_ParamLimits

0x7839,	// (0x0005dde7) tabs_3_long_passive_pane_cp

0x77b3,	// (0x0005dd61) volume_small_pane_g1

0x77bc,	// (0x0005dd6a) volume_small_pane_g2

0x77c5,	// (0x0005dd73) volume_small_pane_g3

0x77ce,	// (0x0005dd7c) volume_small_pane_g4

0x77d7,	// (0x0005dd85) volume_small_pane_g5

0x77e0,	// (0x0005dd8e) volume_small_pane_g6

0x77e9,	// (0x0005dd97) volume_small_pane_g7

0x77f2,	// (0x0005dda0) volume_small_pane_g8

0x77fb,	// (0x0005dda9) volume_small_pane_g9

0x7804,	// (0x0005ddb2) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00065e3a) volume_small_pane_g

0xe105,	// (0x000646b3) bg_active_tab_pane_cp2_ParamLimits

0xe105,	// (0x000646b3) bg_active_tab_pane_cp2

0x562a,	// (0x0005bbd8) tabs_3_active_pane_g1

0x5632,	// (0x0005bbe0) tabs_3_active_pane_t1

0xe105,	// (0x000646b3) bg_passive_tab_pane_cp2_ParamLimits

0xe105,	// (0x000646b3) bg_passive_tab_pane_cp2

0x562a,	// (0x0005bbd8) tabs_3_passive_pane_g1

0x5632,	// (0x0005bbe0) tabs_3_passive_pane_t1

0xe105,	// (0x000646b3) bg_active_tab_pane_cp3_ParamLimits

0xe105,	// (0x000646b3) bg_active_tab_pane_cp3

0x5644,	// (0x0005bbf2) tabs_4_active_pane_g1

0x564c,	// (0x0005bbfa) tabs_4_active_pane_t1

0xe105,	// (0x000646b3) bg_passive_tab_pane_cp3_ParamLimits

0xe105,	// (0x000646b3) bg_passive_tab_pane_cp3

0x5644,	// (0x0005bbf2) tabs_4_1_passive_pane_g1

0x564c,	// (0x0005bbfa) tabs_4_1_passive_pane_t1

0xf51d,	// (0x00065acb) list_highlight_pane_cp2

0xa431,	// (0x000609df) list_set_pane_ParamLimits

0xa431,	// (0x000609df) list_set_pane

0xa4d3,	// (0x00060a81) main_pane_set_t1_ParamLimits

0xa4d3,	// (0x00060a81) main_pane_set_t1

0xa4f3,	// (0x00060aa1) main_pane_set_t2_ParamLimits

0xa4f3,	// (0x00060aa1) main_pane_set_t2

0xa507,	// (0x00060ab5) main_pane_set_t3_ParamLimits

0xa507,	// (0x00060ab5) main_pane_set_t3

0xa519,	// (0x00060ac7) main_pane_set_t4_ParamLimits

0xa519,	// (0x00060ac7) main_pane_set_t4

0x0003,

0xf95c,	// (0x00065f0a) main_pane_set_t_ParamLimits

0xf95c,	// (0x00065f0a) main_pane_set_t

0xa52b,	// (0x00060ad9) setting_code_pane

0xa537,	// (0x00060ae5) setting_slider_graphic_pane

0xa537,	// (0x00060ae5) setting_slider_pane

0xa537,	// (0x00060ae5) setting_text_pane

0xa537,	// (0x00060ae5) setting_volume_pane

0x565e,	// (0x0005bc0c) volume_set_pane

0xe105,	// (0x000646b3) bg_set_opt_pane_cp

0x5666,	// (0x0005bc14) setting_slider_pane_t1

0x567f,	// (0x0005bc2d) setting_slider_pane_t2

0x5699,	// (0x0005bc47) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00065ae7) setting_slider_pane_t

0x56b1,	// (0x0005bc5f) slider_set_pane

0xe0b7,	// (0x00064665) bg_set_opt_pane_cp2

0xe113,	// (0x000646c1) setting_slider_graphic_pane_g1

0x56c7,	// (0x0005bc75) setting_slider_graphic_pane_t1

0x56d7,	// (0x0005bc85) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00065aee) setting_slider_graphic_pane_t

0x56e7,	// (0x0005bc95) slider_set_pane_cp

0xe0b7,	// (0x00064665) input_focus_pane_cp1

0xa3f0,	// (0x0006099e) list_set_text_pane

0xe0ad,	// (0x0006465b) setting_text_pane_g1

0xe0b7,	// (0x00064665) input_focus_pane_cp2

0xe0ad,	// (0x0006465b) setting_code_pane_g1

0xe11c,	// (0x000646ca) setting_code_pane_t1

0x3a14,	// (0x00059fc2) set_text_pane_t1_ParamLimits

0x3a14,	// (0x00059fc2) set_text_pane_t1

0xf18d,	// (0x0006573b) set_opt_bg_pane_g1

0xf195,	// (0x00065743) set_opt_bg_pane_g2

0xa3ca,	// (0x00060978) set_opt_bg_pane_g3

0xf1a5,	// (0x00065753) set_opt_bg_pane_g4

0xf1ad,	// (0x0006575b) set_opt_bg_pane_g5

0xf1b5,	// (0x00065763) set_opt_bg_pane_g6

0xa3d4,	// (0x00060982) set_opt_bg_pane_g7

0xa3dc,	// (0x0006098a) set_opt_bg_pane_g8

0xa3e6,	// (0x00060994) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00065ef7) set_opt_bg_pane_g

0xa3bd,	// (0x0006096b) slider_set_pane_g1

0x7993,	// (0x0005df41) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00065ee8) slider_set_pane_g

0x791d,	// (0x0005decb) volume_set_pane_g1

0x7925,	// (0x0005ded3) volume_set_pane_g2

0x792d,	// (0x0005dedb) volume_set_pane_g3

0x7935,	// (0x0005dee3) volume_set_pane_g4

0x793d,	// (0x0005deeb) volume_set_pane_g5

0x7945,	// (0x0005def3) volume_set_pane_g6

0x794d,	// (0x0005defb) volume_set_pane_g7

0x7955,	// (0x0005df03) volume_set_pane_g8

0x795d,	// (0x0005df0b) volume_set_pane_g9

0x7965,	// (0x0005df13) volume_set_pane_g10

0x0009,

0xf912,	// (0x00065ec0) volume_set_pane_g

0x56ef,	// (0x0005bc9d) indicator_pane_ParamLimits

0x56ef,	// (0x0005bc9d) indicator_pane

0x56fb,	// (0x0005bca9) main_idle_pane_g2_ParamLimits

0x56fb,	// (0x0005bca9) main_idle_pane_g2

0x5723,	// (0x0005bcd1) main_pane_idle_g1_ParamLimits

0x5723,	// (0x0005bcd1) main_pane_idle_g1

0xe12a,	// (0x000646d8) popup_clock_digital_analogue_window_ParamLimits

0xe12a,	// (0x000646d8) popup_clock_digital_analogue_window

0x5730,	// (0x0005bcde) soft_indicator_pane_ParamLimits

0x5730,	// (0x0005bcde) soft_indicator_pane

0x573c,	// (0x0005bcea) wallpaper_pane_ParamLimits

0x573c,	// (0x0005bcea) wallpaper_pane

0xe0ad,	// (0x0006465b) wallpaper_pane_g1

0x5748,	// (0x0005bcf6) indicator_pane_g1_ParamLimits

0x5748,	// (0x0005bcf6) indicator_pane_g1

0xa850,	// (0x00060dfe) navi_navi_icon_text_pane_srt_g1

0xe158,	// (0x00064706) soft_indicator_pane_t1

0xe172,	// (0x00064720) aid_ps_area_pane

0x5754,	// (0x0005bd02) aid_ps_clock_pane

0xe183,	// (0x00064731) aid_ps_indicator_pane

0xe18f,	// (0x0006473d) indicator_ps_pane_ParamLimits

0xe18f,	// (0x0006473d) indicator_ps_pane

0xe19e,	// (0x0006474c) power_save_pane_g1_ParamLimits

0xe19e,	// (0x0006474c) power_save_pane_g1

0xe1aa,	// (0x00064758) power_save_pane_g2_ParamLimits

0xe1aa,	// (0x00064758) power_save_pane_g2

0x51ad,	// (0x0005b75b) aid_navinavi_width_pane

0xe172,	// (0x00064720) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00065af3) power_save_pane_g_ParamLimits

0xf545,	// (0x00065af3) power_save_pane_g

0xe1b8,	// (0x00064766) power_save_pane_t1_ParamLimits

0xe1b8,	// (0x00064766) power_save_pane_t1

0x5754,	// (0x0005bd02) aid_ps_clock_pane_ParamLimits

0xe183,	// (0x00064731) aid_ps_indicator_pane_ParamLimits

0xe1ca,	// (0x00064778) power_save_pane_t4_ParamLimits

0xe1ca,	// (0x00064778) power_save_pane_t4

0x0001,

0xf54a,	// (0x00065af8) power_save_pane_t_ParamLimits

0xf54a,	// (0x00065af8) power_save_pane_t

0xe1f4,	// (0x000647a2) power_save_t3_ParamLimits

0xe1f4,	// (0x000647a2) power_save_t3

0xe1df,	// (0x0006478d) power_save_t2_ParamLimits

0xe1df,	// (0x0006478d) power_save_t2

0xe209,	// (0x000647b7) indicator_ps_pane_g1

0x5762,	// (0x0005bd10) ai_gene_pane_ParamLimits

0x5762,	// (0x0005bd10) ai_gene_pane

0x576e,	// (0x0005bd1c) ai_links_pane_ParamLimits

0x576e,	// (0x0005bd1c) ai_links_pane

0x577a,	// (0x0005bd28) indicator_pane_cp1_ParamLimits

0x577a,	// (0x0005bd28) indicator_pane_cp1

0x5786,	// (0x0005bd34) main_pane_idle_g1_cp_ParamLimits

0x5786,	// (0x0005bd34) main_pane_idle_g1_cp

0x5792,	// (0x0005bd40) popup_ai_links_title_window

0x579b,	// (0x0005bd49) soft_indicator_pane_cp1_ParamLimits

0x579b,	// (0x0005bd49) soft_indicator_pane_cp1

0xa1b7,	// (0x00060765) ai_links_pane_g1

0xa1c0,	// (0x0006076e) grid_ai_links_pane

0xa19a,	// (0x00060748) ai_gene_pane_1

0xa1a5,	// (0x00060753) ai_gene_pane_2

0xa1ae,	// (0x0006075c) list_highlight_pane_cp4

0xa17e,	// (0x0006072c) cell_ai_link_pane_ParamLimits

0xa17e,	// (0x0006072c) cell_ai_link_pane

0xa176,	// (0x00060724) cell_ai_link_pane_g1

0xe344,	// (0x000648f2) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00065e9b) cell_ai_link_pane_g

0xe0b7,	// (0x00064665) grid_highlight_cp2

0xe0b7,	// (0x00064665) bg_popup_sub_pane_cp1

0xe220,	// (0x000647ce) popup_ai_links_title_window_t1

0xa0c6,	// (0x00060674) ai_gene_pane_1_g1_ParamLimits

0xa0c6,	// (0x00060674) ai_gene_pane_1_g1

0xa0d2,	// (0x00060680) ai_gene_pane_1_g2_ParamLimits

0xa0d2,	// (0x00060680) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x00065e91) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x00065e91) ai_gene_pane_1_g

0xa0df,	// (0x0006068d) ai_gene_pane_1_t1_ParamLimits

0xa0df,	// (0x0006068d) ai_gene_pane_1_t1

0xa113,	// (0x000606c1) grid_ai_soft_ind_pane

0xa0b1,	// (0x0006065f) ai_gene_pane_2_t1_ParamLimits

0xa0b1,	// (0x0006065f) ai_gene_pane_2_t1

0x57a7,	// (0x0005bd55) main_pane_empty_t1_ParamLimits

0x57a7,	// (0x0005bd55) main_pane_empty_t1

0x57bf,	// (0x0005bd6d) main_pane_empty_t2_ParamLimits

0x57bf,	// (0x0005bd6d) main_pane_empty_t2

0x57d4,	// (0x0005bd82) main_pane_empty_t3_ParamLimits

0x57d4,	// (0x0005bd82) main_pane_empty_t3

0x57e6,	// (0x0005bd94) main_pane_empty_t4_ParamLimits

0x57e6,	// (0x0005bd94) main_pane_empty_t4

0x57f8,	// (0x0005bda6) main_pane_empty_t5_ParamLimits

0x57f8,	// (0x0005bda6) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00065afd) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00065afd) main_pane_empty_t

0xf212,	// (0x000657c0) bg_popup_window_pane_ParamLimits

0xf212,	// (0x000657c0) bg_popup_window_pane

0x9e21,	// (0x000603cf) find_popup_pane_cp2_ParamLimits

0x9e21,	// (0x000603cf) find_popup_pane_cp2

0x9e2d,	// (0x000603db) heading_pane_ParamLimits

0x9e2d,	// (0x000603db) heading_pane

0xe0b7,	// (0x00064665) bg_popup_sub_pane

0x9d9b,	// (0x00060349) bg_popup_window_pane_g1_ParamLimits

0x9d9b,	// (0x00060349) bg_popup_window_pane_g1

0x9da7,	// (0x00060355) bg_popup_window_pane_g2_ParamLimits

0x9da7,	// (0x00060355) bg_popup_window_pane_g2

0x9db3,	// (0x00060361) bg_popup_window_pane_g3_ParamLimits

0x9db3,	// (0x00060361) bg_popup_window_pane_g3

0x9dbf,	// (0x0006036d) bg_popup_window_pane_g4_ParamLimits

0x9dbf,	// (0x0006036d) bg_popup_window_pane_g4

0x9dcb,	// (0x00060379) bg_popup_window_pane_g5_ParamLimits

0x9dcb,	// (0x00060379) bg_popup_window_pane_g5

0x9dd7,	// (0x00060385) bg_popup_window_pane_g6_ParamLimits

0x9dd7,	// (0x00060385) bg_popup_window_pane_g6

0x9de3,	// (0x00060391) bg_popup_window_pane_g7_ParamLimits

0x9de3,	// (0x00060391) bg_popup_window_pane_g7

0x9def,	// (0x0006039d) bg_popup_window_pane_g8_ParamLimits

0x9def,	// (0x0006039d) bg_popup_window_pane_g8

0x9dfb,	// (0x000603a9) bg_popup_window_pane_g9_ParamLimits

0x9dfb,	// (0x000603a9) bg_popup_window_pane_g9

0x9e07,	// (0x000603b5) bg_popup_window_pane_g10_ParamLimits

0x9e07,	// (0x000603b5) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00065e59) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00065e59) bg_popup_window_pane_g

0x9d30,	// (0x000602de) bg_popup_heading_pane_ParamLimits

0x9d30,	// (0x000602de) bg_popup_heading_pane

0x7ad7,	// (0x0005e085) tabs_4_passive_pane_cp_srt_ParamLimits

0x7ad7,	// (0x0005e085) tabs_4_passive_pane_cp_srt

0x7ae9,	// (0x0005e097) tabs_4_passive_pane_srt_ParamLimits

0x9d44,	// (0x000602f2) heading_pane_g2

0x7ae9,	// (0x0005e097) tabs_4_passive_pane_srt

0xf51d,	// (0x00065acb) bg_passive_tab_pane_cp3_srt_ParamLimits

0xf51d,	// (0x00065acb) bg_passive_tab_pane_cp3_srt

0x9d4c,	// (0x000602fa) heading_pane_t1_ParamLimits

0x9d4c,	// (0x000602fa) heading_pane_t1

0x9d63,	// (0x00060311) heading_pane_t2_ParamLimits

0x9d63,	// (0x00060311) heading_pane_t2

0x0001,

0xf8a6,	// (0x00065e54) heading_pane_t_ParamLimits

0xf8a6,	// (0x00065e54) heading_pane_t

0x986d,	// (0x0005fe1b) bg_popup_heading_pane_g1

0x991c,	// (0x0005feca) bg_popup_heading_pane_g2

0x9926,	// (0x0005fed4) bg_popup_heading_pane_g3

0x9930,	// (0x0005fede) bg_popup_heading_pane_g4

0x993a,	// (0x0005fee8) bg_popup_heading_pane_g5

0x9944,	// (0x0005fef2) bg_popup_heading_pane_g6

0x994c,	// (0x0005fefa) bg_popup_heading_pane_g7

0x9954,	// (0x0005ff02) bg_popup_heading_pane_g8

0x995e,	// (0x0005ff0c) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00065e10) bg_popup_heading_pane_g

0x902e,	// (0x0005f5dc) bg_popup_sub_pane_g1

0x903e,	// (0x0005f5ec) bg_popup_sub_pane_g2

0x9036,	// (0x0005f5e4) bg_popup_sub_pane_g3

0x904e,	// (0x0005f5fc) bg_popup_sub_pane_g4

0x9046,	// (0x0005f5f4) bg_popup_sub_pane_g5

0x9056,	// (0x0005f604) bg_popup_sub_pane_g6

0x905e,	// (0x0005f60c) bg_popup_sub_pane_g7

0x906e,	// (0x0005f61c) bg_popup_sub_pane_g8

0x9066,	// (0x0005f614) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00065dea) bg_popup_sub_pane_g

0xe22f,	// (0x000647dd) bg_popup_window_pane_cp5_ParamLimits

0xe22f,	// (0x000647dd) bg_popup_window_pane_cp5

0xe24b,	// (0x000647f9) popup_note_window_g1_ParamLimits

0xe24b,	// (0x000647f9) popup_note_window_g1

0xe257,	// (0x00064805) popup_note_window_t1_ParamLimits

0xe257,	// (0x00064805) popup_note_window_t1

0xe26d,	// (0x0006481b) popup_note_window_t2_ParamLimits

0xe26d,	// (0x0006481b) popup_note_window_t2

0xe283,	// (0x00064831) popup_note_window_t3_ParamLimits

0xe283,	// (0x00064831) popup_note_window_t3

0xe299,	// (0x00064847) popup_note_window_t4_ParamLimits

0xe299,	// (0x00064847) popup_note_window_t4

0xe2c1,	// (0x0006486f) popup_note_window_t5_ParamLimits

0xe2c1,	// (0x0006486f) popup_note_window_t5

0x0004,

0xf55a,	// (0x00065b08) popup_note_window_t_ParamLimits

0xf55a,	// (0x00065b08) popup_note_window_t

0xe2e5,	// (0x00064893) bg_popup_window_pane_cp6_ParamLimits

0xe2e5,	// (0x00064893) bg_popup_window_pane_cp6

0x97e9,	// (0x0005fd97) popup_note_image_window_g1_ParamLimits

0x97e9,	// (0x0005fd97) popup_note_image_window_g1

0x97f5,	// (0x0005fda3) popup_note_image_window_g2_ParamLimits

0x97f5,	// (0x0005fda3) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00065dde) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00065dde) popup_note_image_window_g

0x980e,	// (0x0005fdbc) popup_note_image_window_t1_ParamLimits

0x980e,	// (0x0005fdbc) popup_note_image_window_t1

0x9827,	// (0x0005fdd5) popup_note_image_window_t2_ParamLimits

0x9827,	// (0x0005fdd5) popup_note_image_window_t2

0x9840,	// (0x0005fdee) popup_note_image_window_t3_ParamLimits

0x9840,	// (0x0005fdee) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00065de3) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00065de3) popup_note_image_window_t

0x96b2,	// (0x0005fc60) bg_popup_window_pane_cp7_ParamLimits

0x96b2,	// (0x0005fc60) bg_popup_window_pane_cp7

0x96e2,	// (0x0005fc90) popup_note_wait_window_g1_ParamLimits

0x96e2,	// (0x0005fc90) popup_note_wait_window_g1

0x96ee,	// (0x0005fc9c) popup_note_wait_window_g2_ParamLimits

0x96ee,	// (0x0005fc9c) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00065dcc) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00065dcc) popup_note_wait_window_g

0x9706,	// (0x0005fcb4) popup_note_wait_window_t1_ParamLimits

0x9706,	// (0x0005fcb4) popup_note_wait_window_t1

0x972d,	// (0x0005fcdb) popup_note_wait_window_t2_ParamLimits

0x972d,	// (0x0005fcdb) popup_note_wait_window_t2

0x974a,	// (0x0005fcf8) popup_note_wait_window_t3_ParamLimits

0x974a,	// (0x0005fcf8) popup_note_wait_window_t3

0x975d,	// (0x0005fd0b) popup_note_wait_window_t4_ParamLimits

0x975d,	// (0x0005fd0b) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00065dd3) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00065dd3) popup_note_wait_window_t

0x9782,	// (0x0005fd30) wait_bar_pane_ParamLimits

0x9782,	// (0x0005fd30) wait_bar_pane

0xe0b7,	// (0x00064665) wait_anim_pane

0xe0b7,	// (0x00064665) wait_border_pane

0xe0ad,	// (0x0006465b) wait_anim_pane_g1

0xe0ad,	// (0x0006465b) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00065c87) wait_anim_pane_g

0x965e,	// (0x0005fc0c) wait_border_pane_g1

0x9669,	// (0x0005fc17) wait_border_pane_g2

0x9672,	// (0x0005fc20) wait_border_pane_g3

0x0002,

0xf817,	// (0x00065dc5) wait_border_pane_g

0x94c9,	// (0x0005fa77) bg_popup_window_pane_cp16_ParamLimits

0x94c9,	// (0x0005fa77) bg_popup_window_pane_cp16

0x95c9,	// (0x0005fb77) indicator_popup_pane_cp4_ParamLimits

0x95c9,	// (0x0005fb77) indicator_popup_pane_cp4

0x95dd,	// (0x0005fb8b) popup_query_data_window_t1_ParamLimits

0x95dd,	// (0x0005fb8b) popup_query_data_window_t1

0x95ef,	// (0x0005fb9d) popup_query_data_window_t2_ParamLimits

0x95ef,	// (0x0005fb9d) popup_query_data_window_t2

0x9608,	// (0x0005fbb6) popup_query_data_window_t3_ParamLimits

0x9608,	// (0x0005fbb6) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00065dbe) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00065dbe) popup_query_data_window_t

0x9622,	// (0x0005fbd0) query_popup_data_pane_ParamLimits

0x9622,	// (0x0005fbd0) query_popup_data_pane

0x9636,	// (0x0005fbe4) query_popup_data_pane_cp1_ParamLimits

0x9636,	// (0x0005fbe4) query_popup_data_pane_cp1

0x94c9,	// (0x0005fa77) bg_popup_window_pane_cp10_ParamLimits

0x94c9,	// (0x0005fa77) bg_popup_window_pane_cp10

0x94fb,	// (0x0005faa9) indicator_popup_pane_ParamLimits

0x94fb,	// (0x0005faa9) indicator_popup_pane

0x951d,	// (0x0005facb) popup_query_code_window_t1_ParamLimits

0x951d,	// (0x0005facb) popup_query_code_window_t1

0x9537,	// (0x0005fae5) popup_query_code_window_t2_ParamLimits

0x9537,	// (0x0005fae5) popup_query_code_window_t2

0x9580,	// (0x0005fb2e) popup_query_code_window_t3_ParamLimits

0x9580,	// (0x0005fb2e) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00065db7) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00065db7) popup_query_code_window_t

0x95af,	// (0x0005fb5d) query_popup_pane_ParamLimits

0x95af,	// (0x0005fb5d) query_popup_pane

0xe2e5,	// (0x00064893) bg_popup_window_pane_cp15_ParamLimits

0xe2e5,	// (0x00064893) bg_popup_window_pane_cp15

0x5832,	// (0x0005bde0) indicator_popup_pane_cp1_ParamLimits

0x5832,	// (0x0005bde0) indicator_popup_pane_cp1

0x5845,	// (0x0005bdf3) indicator_popup_pane_cp2_ParamLimits

0x5845,	// (0x0005bdf3) indicator_popup_pane_cp2

0x5858,	// (0x0005be06) popup_query_data_code_window_g1_ParamLimits

0x5858,	// (0x0005be06) popup_query_data_code_window_g1

0xe303,	// (0x000648b1) popup_query_data_code_window_t1_ParamLimits

0xe303,	// (0x000648b1) popup_query_data_code_window_t1

0xe315,	// (0x000648c3) popup_query_data_code_window_t2_ParamLimits

0xe315,	// (0x000648c3) popup_query_data_code_window_t2

0x586b,	// (0x0005be19) popup_query_data_code_window_t3_ParamLimits

0x586b,	// (0x0005be19) popup_query_data_code_window_t3

0x5881,	// (0x0005be2f) popup_query_data_code_window_t4_ParamLimits

0x5881,	// (0x0005be2f) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00065b13) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00065b13) popup_query_data_code_window_t

0x7696,	// (0x0005dc44) list_single_midp_graphic_pane_g3

0x5899,	// (0x0005be47) query_popup_data_pane_cp2_ParamLimits

0x58ac,	// (0x0005be5a) query_popup_pane_cp2_ParamLimits

0x58ac,	// (0x0005be5a) query_popup_pane_cp2

0xe0b7,	// (0x00064665) bg_popup_window_pane_cp11

0x94ad,	// (0x0005fa5b) heading_pane_cp5

0x94b5,	// (0x0005fa63) listscroll_popup_info_pane

0xe0b7,	// (0x00064665) input_focus_pane_cp3

0xe327,	// (0x000648d5) query_popup_pane_t1

0xe335,	// (0x000648e3) list_popup_info_pane_ParamLimits

0xe335,	// (0x000648e3) list_popup_info_pane

0xe344,	// (0x000648f2) listscroll_popup_info_pane_g1

0xe34c,	// (0x000648fa) scroll_pane_cp7

0x58bf,	// (0x0005be6d) popup_info_list_pane_t1_ParamLimits

0x58bf,	// (0x0005be6d) popup_info_list_pane_t1

0x58d9,	// (0x0005be87) popup_info_list_pane_t2_ParamLimits

0x58d9,	// (0x0005be87) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00065b1c) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00065b1c) popup_info_list_pane_t

0xe0b7,	// (0x00064665) bg_popup_window_pane_cp12

0xa86a,	// (0x00060e18) find_popup_pane

0xe105,	// (0x000646b3) bg_popup_window_pane_cp3

0xe356,	// (0x00064904) heading_pane_cp3

0xe365,	// (0x00064913) listscroll_popup_graphic_pane

0xe0b7,	// (0x00064665) bg_popup_window_pane_cp4

0x5943,	// (0x0005bef1) heading_pane_cp4

0xefe1,	// (0x0006558f) listscroll_popup_colour_pane

0x594d,	// (0x0005befb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x594d,	// (0x0005befb) cell_large_graphic_colour_none_popup_pane

0x5961,	// (0x0005bf0f) grid_large_graphic_colour_popup_pane_ParamLimits

0x5961,	// (0x0005bf0f) grid_large_graphic_colour_popup_pane

0x5985,	// (0x0005bf33) listscroll_popup_colour_pane_g1_ParamLimits

0x5985,	// (0x0005bf33) listscroll_popup_colour_pane_g1

0x599c,	// (0x0005bf4a) listscroll_popup_colour_pane_g2_ParamLimits

0x599c,	// (0x0005bf4a) listscroll_popup_colour_pane_g2

0x59b3,	// (0x0005bf61) listscroll_popup_colour_pane_g3_ParamLimits

0x59b3,	// (0x0005bf61) listscroll_popup_colour_pane_g3

0x59c3,	// (0x0005bf71) listscroll_popup_colour_pane_g4_ParamLimits

0x59c3,	// (0x0005bf71) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00065b21) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00065b21) listscroll_popup_colour_pane_g

0xefe9,	// (0x00065597) scroll_pane_cp6_ParamLimits

0xefe9,	// (0x00065597) scroll_pane_cp6

0x59d3,	// (0x0005bf81) cell_large_graphic_colour_popup_pane_ParamLimits

0x59d3,	// (0x0005bf81) cell_large_graphic_colour_popup_pane

0x59f2,	// (0x0005bfa0) cell_large_graphic_colour_none_popup_pane_t1

0xe0b7,	// (0x00064665) grid_highlight_pane_cp5

0xeffb,	// (0x000655a9) cell_large_graphic_colour_popup_pane_g1

0xf003,	// (0x000655b1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00065b2a) cell_large_graphic_colour_popup_pane_g

0xf00b,	// (0x000655b9) cell_large_graphic_colour_popup_pane_g2_copy1

0xf014,	// (0x000655c2) grid_highlight_pane_cp4

0xf01c,	// (0x000655ca) bg_popup_window_pane_cp8_ParamLimits

0xf01c,	// (0x000655ca) bg_popup_window_pane_cp8

0x5a01,	// (0x0005bfaf) popup_snote_single_text_window_g1_ParamLimits

0x5a01,	// (0x0005bfaf) popup_snote_single_text_window_g1

0x5a13,	// (0x0005bfc1) popup_snote_single_text_window_t1_ParamLimits

0x5a13,	// (0x0005bfc1) popup_snote_single_text_window_t1

0x5a26,	// (0x0005bfd4) popup_snote_single_text_window_t2_ParamLimits

0x5a26,	// (0x0005bfd4) popup_snote_single_text_window_t2

0x5a39,	// (0x0005bfe7) popup_snote_single_text_window_t3_ParamLimits

0x5a39,	// (0x0005bfe7) popup_snote_single_text_window_t3

0x5a72,	// (0x0005c020) popup_snote_single_text_window_t4_ParamLimits

0x5a72,	// (0x0005c020) popup_snote_single_text_window_t4

0x5aa6,	// (0x0005c054) popup_snote_single_text_window_t5_ParamLimits

0x5aa6,	// (0x0005c054) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00065b2f) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00065b2f) popup_snote_single_text_window_t

0xf037,	// (0x000655e5) bg_popup_window_pane_cp9_ParamLimits

0xf037,	// (0x000655e5) bg_popup_window_pane_cp9

0x5a01,	// (0x0005bfaf) popup_snote_single_graphic_window_g1_ParamLimits

0x5a01,	// (0x0005bfaf) popup_snote_single_graphic_window_g1

0xf045,	// (0x000655f3) popup_snote_single_graphic_window_g2_ParamLimits

0xf045,	// (0x000655f3) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00065b3a) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00065b3a) popup_snote_single_graphic_window_g

0xf051,	// (0x000655ff) popup_snote_single_graphic_window_t1_ParamLimits

0xf051,	// (0x000655ff) popup_snote_single_graphic_window_t1

0xf064,	// (0x00065612) popup_snote_single_graphic_window_t2_ParamLimits

0xf064,	// (0x00065612) popup_snote_single_graphic_window_t2

0x5ad5,	// (0x0005c083) popup_snote_single_graphic_window_t3_ParamLimits

0x5ad5,	// (0x0005c083) popup_snote_single_graphic_window_t3

0x5b0e,	// (0x0005c0bc) popup_snote_single_graphic_window_t4_ParamLimits

0x5b0e,	// (0x0005c0bc) popup_snote_single_graphic_window_t4

0x5b42,	// (0x0005c0f0) popup_snote_single_graphic_window_t5_ParamLimits

0x5b42,	// (0x0005c0f0) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00065b3f) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00065b3f) popup_snote_single_graphic_window_t

0xa7ac,	// (0x00060d5a) grid_graphic_popup_pane_ParamLimits

0xa7ac,	// (0x00060d5a) grid_graphic_popup_pane

0xa7d6,	// (0x00060d84) listscroll_popup_graphic_pane_g1_ParamLimits

0xa7d6,	// (0x00060d84) listscroll_popup_graphic_pane_g1

0xa7ea,	// (0x00060d98) listscroll_popup_graphic_pane_g2_ParamLimits

0xa7ea,	// (0x00060d98) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00065f34) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00065f34) listscroll_popup_graphic_pane_g

0xa7fe,	// (0x00060dac) scroll_pane_cp5

0xa742,	// (0x00060cf0) cell_graphic_popup_pane_ParamLimits

0xa742,	// (0x00060cf0) cell_graphic_popup_pane

0xa723,	// (0x00060cd1) cell_graphic_popup_pane_g1

0xa72b,	// (0x00060cd9) cell_graphic_popup_pane_g2

0xf00b,	// (0x000655b9) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00065f2d) cell_graphic_popup_pane_g

0xa734,	// (0x00060ce2) cell_graphic_popup_pane_t2

0xf014,	// (0x000655c2) grid_highlight_pane_cp3

0xf089,	// (0x00065637) list_gen_pane_ParamLimits

0xf089,	// (0x00065637) list_gen_pane

0xf0b1,	// (0x0006565f) scroll_pane

0xa67b,	// (0x00060c29) bg_list_pane_g1_ParamLimits

0xa67b,	// (0x00060c29) bg_list_pane_g1

0xa698,	// (0x00060c46) bg_list_pane_g2_ParamLimits

0xa698,	// (0x00060c46) bg_list_pane_g2

0xa6ad,	// (0x00060c5b) bg_list_pane_g3_ParamLimits

0xa6ad,	// (0x00060c5b) bg_list_pane_g3

0xa6c1,	// (0x00060c6f) bg_list_pane_g4_ParamLimits

0xa6c1,	// (0x00060c6f) bg_list_pane_g4

0xa6d5,	// (0x00060c83) bg_list_pane_g5_ParamLimits

0xa6d5,	// (0x00060c83) bg_list_pane_g5

0x0004,

0xf974,	// (0x00065f22) bg_list_pane_g_ParamLimits

0xf974,	// (0x00065f22) bg_list_pane_g

0xa5bd,	// (0x00060b6b) list_double2_graphic_large_graphic_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_double2_graphic_large_graphic_pane

0xa5bd,	// (0x00060b6b) list_double2_graphic_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_double2_graphic_pane

0xa5bd,	// (0x00060b6b) list_double2_large_graphic_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_double2_large_graphic_pane

0x7a3d,	// (0x0005dfeb) list_double2_pane_ParamLimits

0x7a3d,	// (0x0005dfeb) list_double2_pane

0xa5bd,	// (0x00060b6b) list_double_graphic_heading_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_double_graphic_heading_pane

0xa5bd,	// (0x00060b6b) list_double_graphic_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_double_graphic_pane

0xa5bd,	// (0x00060b6b) list_double_heading_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_double_heading_pane

0xa5bd,	// (0x00060b6b) list_double_large_graphic_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_double_large_graphic_pane

0xa5bd,	// (0x00060b6b) list_double_number_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_double_number_pane

0xa5bd,	// (0x00060b6b) list_double_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_double_pane

0xa5bd,	// (0x00060b6b) list_double_time_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_double_time_pane

0xa5bd,	// (0x00060b6b) list_setting_number_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_setting_number_pane

0xa5bd,	// (0x00060b6b) list_setting_pane_ParamLimits

0xa5bd,	// (0x00060b6b) list_setting_pane

0xa63b,	// (0x00060be9) list_single_2graphic_pane_ParamLimits

0xa63b,	// (0x00060be9) list_single_2graphic_pane

0xa63b,	// (0x00060be9) list_single_graphic_heading_pane_ParamLimits

0xa63b,	// (0x00060be9) list_single_graphic_heading_pane

0xa63b,	// (0x00060be9) list_single_graphic_pane_ParamLimits

0xa63b,	// (0x00060be9) list_single_graphic_pane

0xa63b,	// (0x00060be9) list_single_heading_pane_ParamLimits

0xa63b,	// (0x00060be9) list_single_heading_pane

0x7a91,	// (0x0005e03f) list_single_large_graphic_pane_ParamLimits

0x7a91,	// (0x0005e03f) list_single_large_graphic_pane

0xa63b,	// (0x00060be9) list_single_number_heading_pane_ParamLimits

0xa63b,	// (0x00060be9) list_single_number_heading_pane

0xa63b,	// (0x00060be9) list_single_number_pane_ParamLimits

0xa63b,	// (0x00060be9) list_single_number_pane

0xa63b,	// (0x00060be9) list_single_pane_ParamLimits

0xa63b,	// (0x00060be9) list_single_pane

0xe0b7,	// (0x00064665) list_highlight_pane_cp1

0x5b87,	// (0x0005c135) list_single_pane_g1_ParamLimits

0x5b87,	// (0x0005c135) list_single_pane_g1

0x5b93,	// (0x0005c141) list_single_pane_g2_ParamLimits

0x5b93,	// (0x0005c141) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00065b5b) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00065b5b) list_single_pane_g

0x7a27,	// (0x0005dfd5) list_single_pane_t1_ParamLimits

0x7a27,	// (0x0005dfd5) list_single_pane_t1

0x5b87,	// (0x0005c135) list_single_number_pane_g1_ParamLimits

0x5b87,	// (0x0005c135) list_single_number_pane_g1

0x5b93,	// (0x0005c141) list_single_number_pane_g2_ParamLimits

0x5b93,	// (0x0005c141) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00065b5b) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00065b5b) list_single_number_pane_g

0x5b9f,	// (0x0005c14d) list_single_number_pane_t1_ParamLimits

0x5b9f,	// (0x0005c14d) list_single_number_pane_t1

0x796d,	// (0x0005df1b) list_single_number_pane_t2_ParamLimits

0x796d,	// (0x0005df1b) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00065ee3) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00065ee3) list_single_number_pane_t

0x5b7b,	// (0x0005c129) list_single_graphic_pane_g1_ParamLimits

0x5b7b,	// (0x0005c129) list_single_graphic_pane_g1

0x5b87,	// (0x0005c135) list_single_graphic_pane_g2_ParamLimits

0x5b87,	// (0x0005c135) list_single_graphic_pane_g2

0x5b93,	// (0x0005c141) list_single_graphic_pane_g3_ParamLimits

0x5b93,	// (0x0005c141) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00065b4a) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00065b4a) list_single_graphic_pane_g

0x5b9f,	// (0x0005c14d) list_single_graphic_pane_t1_ParamLimits

0x5b9f,	// (0x0005c14d) list_single_graphic_pane_t1

0x5bb5,	// (0x0005c163) list_single_heading_pane_g1_ParamLimits

0x5bb5,	// (0x0005c163) list_single_heading_pane_g1

0x5b93,	// (0x0005c141) list_single_heading_pane_g2_ParamLimits

0x5b93,	// (0x0005c141) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00065b51) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00065b51) list_single_heading_pane_g

0x5bc8,	// (0x0005c176) list_single_heading_pane_t1_ParamLimits

0x5bc8,	// (0x0005c176) list_single_heading_pane_t1

0x5bde,	// (0x0005c18c) list_single_heading_pane_t2_ParamLimits

0x5bde,	// (0x0005c18c) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00065b56) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00065b56) list_single_heading_pane_t

0x5b87,	// (0x0005c135) list_single_number_heading_pane_g1_ParamLimits

0x5b87,	// (0x0005c135) list_single_number_heading_pane_g1

0x5b93,	// (0x0005c141) list_single_number_heading_pane_g2_ParamLimits

0x5b93,	// (0x0005c141) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00065b5b) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00065b5b) list_single_number_heading_pane_g

0x5bf0,	// (0x0005c19e) list_single_number_heading_pane_t1_ParamLimits

0x5bf0,	// (0x0005c19e) list_single_number_heading_pane_t1

0x5c06,	// (0x0005c1b4) list_single_number_heading_pane_t2_ParamLimits

0x5c06,	// (0x0005c1b4) list_single_number_heading_pane_t2

0x5c18,	// (0x0005c1c6) list_single_number_heading_pane_t3_ParamLimits

0x5c18,	// (0x0005c1c6) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00065b60) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00065b60) list_single_number_heading_pane_t

0x5c2a,	// (0x0005c1d8) list_single_graphic_heading_pane_g1_ParamLimits

0x5c2a,	// (0x0005c1d8) list_single_graphic_heading_pane_g1

0x5c36,	// (0x0005c1e4) list_single_graphic_heading_pane_g4_ParamLimits

0x5c36,	// (0x0005c1e4) list_single_graphic_heading_pane_g4

0x5b93,	// (0x0005c141) list_single_graphic_heading_pane_g5_ParamLimits

0x5b93,	// (0x0005c141) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00065b67) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00065b67) list_single_graphic_heading_pane_g

0x5bf0,	// (0x0005c19e) list_single_graphic_heading_pane_t1_ParamLimits

0x5bf0,	// (0x0005c19e) list_single_graphic_heading_pane_t1

0x5c47,	// (0x0005c1f5) list_single_graphic_heading_pane_t2_ParamLimits

0x5c47,	// (0x0005c1f5) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00065b6e) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00065b6e) list_single_graphic_heading_pane_t

0x5c59,	// (0x0005c207) list_single_large_graphic_pane_g1_ParamLimits

0x5c59,	// (0x0005c207) list_single_large_graphic_pane_g1

0x42d8,	// (0x0005a886) list_single_large_graphic_pane_g2_ParamLimits

0x42d8,	// (0x0005a886) list_single_large_graphic_pane_g2

0x42e4,	// (0x0005a892) list_single_large_graphic_pane_g3_ParamLimits

0x42e4,	// (0x0005a892) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00065b73) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00065b73) list_single_large_graphic_pane_g

0x9669,	// (0x0005fc17) wait_border_pane_g2_copy1

0x5c65,	// (0x0005c213) list_single_large_graphic_pane_g4_cp2

0x5c6d,	// (0x0005c21b) list_single_large_graphic_pane_t1_ParamLimits

0x5c6d,	// (0x0005c21b) list_single_large_graphic_pane_t1

0x2487,	// (0x00058a35) list_double_pane_g1_ParamLimits

0x2487,	// (0x00058a35) list_double_pane_g1

0x4305,	// (0x0005a8b3) list_double_pane_g2_ParamLimits

0x4305,	// (0x0005a8b3) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00065b7a) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00065b7a) list_double_pane_g

0x5c83,	// (0x0005c231) list_double_pane_t1_ParamLimits

0x5c83,	// (0x0005c231) list_double_pane_t1

0x5c99,	// (0x0005c247) list_double_pane_t2_ParamLimits

0x5c99,	// (0x0005c247) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00065b7f) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00065b7f) list_double_pane_t

0x5cab,	// (0x0005c259) list_double2_pane_g1_ParamLimits

0x5cab,	// (0x0005c259) list_double2_pane_g1

0x3a7b,	// (0x0005a029) list_double2_pane_g2_ParamLimits

0x3a7b,	// (0x0005a029) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00065b84) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00065b84) list_double2_pane_g

0x5cbc,	// (0x0005c26a) list_double2_pane_t1_ParamLimits

0x5cbc,	// (0x0005c26a) list_double2_pane_t1

0x5cd2,	// (0x0005c280) list_double2_pane_t2_ParamLimits

0x5cd2,	// (0x0005c280) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00065b89) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00065b89) list_double2_pane_t

0x2487,	// (0x00058a35) list_double_number_pane_g1_ParamLimits

0x2487,	// (0x00058a35) list_double_number_pane_g1

0x4305,	// (0x0005a8b3) list_double_number_pane_g2_ParamLimits

0x4305,	// (0x0005a8b3) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00065b7a) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00065b7a) list_double_number_pane_g

0x5ce4,	// (0x0005c292) list_double_number_pane_t1_ParamLimits

0x5ce4,	// (0x0005c292) list_double_number_pane_t1

0x5cf6,	// (0x0005c2a4) list_double_number_pane_t2_ParamLimits

0x5cf6,	// (0x0005c2a4) list_double_number_pane_t2

0x5d0c,	// (0x0005c2ba) list_double_number_pane_t3_ParamLimits

0x5d0c,	// (0x0005c2ba) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00065b8e) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00065b8e) list_double_number_pane_t

0x5d1e,	// (0x0005c2cc) list_double_graphic_pane_g1_ParamLimits

0x5d1e,	// (0x0005c2cc) list_double_graphic_pane_g1

0x5d2a,	// (0x0005c2d8) list_double_graphic_pane_g2_ParamLimits

0x5d2a,	// (0x0005c2d8) list_double_graphic_pane_g2

0x5d39,	// (0x0005c2e7) list_double_graphic_pane_g3_ParamLimits

0x5d39,	// (0x0005c2e7) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00065b95) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00065b95) list_double_graphic_pane_g

0x5cf6,	// (0x0005c2a4) list_double_graphic_pane_t1_ParamLimits

0x5cf6,	// (0x0005c2a4) list_double_graphic_pane_t1

0x5d0c,	// (0x0005c2ba) list_double_graphic_pane_t2_ParamLimits

0x5d0c,	// (0x0005c2ba) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00065b9e) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00065b9e) list_double_graphic_pane_t

0x5d1e,	// (0x0005c2cc) list_double2_graphic_pane_g1_ParamLimits

0x5d1e,	// (0x0005c2cc) list_double2_graphic_pane_g1

0x2487,	// (0x00058a35) list_double2_graphic_pane_g2_ParamLimits

0x2487,	// (0x00058a35) list_double2_graphic_pane_g2

0x4305,	// (0x0005a8b3) list_double2_graphic_pane_g3_ParamLimits

0x4305,	// (0x0005a8b3) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00065ba3) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00065ba3) list_double2_graphic_pane_g

0x5cf6,	// (0x0005c2a4) list_double2_graphic_pane_t1_ParamLimits

0x5cf6,	// (0x0005c2a4) list_double2_graphic_pane_t1

0x5d51,	// (0x0005c2ff) list_double2_graphic_pane_t2_ParamLimits

0x5d51,	// (0x0005c2ff) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00065baa) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00065baa) list_double2_graphic_pane_t

0x5d63,	// (0x0005c311) list_double_large_graphic_pane_g1_ParamLimits

0x5d63,	// (0x0005c311) list_double_large_graphic_pane_g1

0x5d82,	// (0x0005c330) list_double_large_graphic_pane_g2_ParamLimits

0x5d82,	// (0x0005c330) list_double_large_graphic_pane_g2

0x4305,	// (0x0005a8b3) list_double_large_graphic_pane_g3_ParamLimits

0x4305,	// (0x0005a8b3) list_double_large_graphic_pane_g3

0x5d98,	// (0x0005c346) list_double_large_graphic_pane_g4_ParamLimits

0x5d98,	// (0x0005c346) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00065baf) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00065baf) list_double_large_graphic_pane_g

0x5daa,	// (0x0005c358) list_double_large_graphic_pane_t1_ParamLimits

0x5daa,	// (0x0005c358) list_double_large_graphic_pane_t1

0x5dc3,	// (0x0005c371) list_double_large_graphic_pane_t2_ParamLimits

0x5dc3,	// (0x0005c371) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00065bba) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00065bba) list_double_large_graphic_pane_t

0x5dd5,	// (0x0005c383) list_double2_large_graphic_pane_g1_ParamLimits

0x5dd5,	// (0x0005c383) list_double2_large_graphic_pane_g1

0x5de1,	// (0x0005c38f) list_double2_large_graphic_pane_g2_ParamLimits

0x5de1,	// (0x0005c38f) list_double2_large_graphic_pane_g2

0x4305,	// (0x0005a8b3) list_double2_large_graphic_pane_g3_ParamLimits

0x4305,	// (0x0005a8b3) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00065bbf) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00065bbf) list_double2_large_graphic_pane_g

0x5cf6,	// (0x0005c2a4) list_double2_large_graphic_pane_t1_ParamLimits

0x5cf6,	// (0x0005c2a4) list_double2_large_graphic_pane_t1

0x5d51,	// (0x0005c2ff) list_double2_large_graphic_pane_t2_ParamLimits

0x5d51,	// (0x0005c2ff) list_double2_large_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00065baa) list_double2_large_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00065baa) list_double2_large_graphic_pane_t

0x5df2,	// (0x0005c3a0) list_double_heading_pane_g1_ParamLimits

0x5df2,	// (0x0005c3a0) list_double_heading_pane_g1

0x5e03,	// (0x0005c3b1) list_double_heading_pane_g2_ParamLimits

0x5e03,	// (0x0005c3b1) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00065bc6) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00065bc6) list_double_heading_pane_g

0x5e0f,	// (0x0005c3bd) list_double_heading_pane_t1_ParamLimits

0x5e0f,	// (0x0005c3bd) list_double_heading_pane_t1

0x5e25,	// (0x0005c3d3) list_double_heading_pane_t2_ParamLimits

0x5e25,	// (0x0005c3d3) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00065bcb) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00065bcb) list_double_heading_pane_t

0x5e37,	// (0x0005c3e5) list_double_graphic_heading_pane_g1_ParamLimits

0x5e37,	// (0x0005c3e5) list_double_graphic_heading_pane_g1

0x5df2,	// (0x0005c3a0) list_double_graphic_heading_pane_g2_ParamLimits

0x5df2,	// (0x0005c3a0) list_double_graphic_heading_pane_g2

0x5e03,	// (0x0005c3b1) list_double_graphic_heading_pane_g3_ParamLimits

0x5e03,	// (0x0005c3b1) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00065bd0) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00065bd0) list_double_graphic_heading_pane_g

0x5e0f,	// (0x0005c3bd) list_double_graphic_heading_pane_t1_ParamLimits

0x5e0f,	// (0x0005c3bd) list_double_graphic_heading_pane_t1

0x5e25,	// (0x0005c3d3) list_double_graphic_heading_pane_t2_ParamLimits

0x5e25,	// (0x0005c3d3) list_double_graphic_heading_pane_t2

0x0001,

0xf61d,	// (0x00065bcb) list_double_graphic_heading_pane_t_ParamLimits

0xf61d,	// (0x00065bcb) list_double_graphic_heading_pane_t

0x5e43,	// (0x0005c3f1) list_double_time_pane_g1_ParamLimits

0x5e43,	// (0x0005c3f1) list_double_time_pane_g1

0x5e54,	// (0x0005c402) list_double_time_pane_g2_ParamLimits

0x5e54,	// (0x0005c402) list_double_time_pane_g2

0x0001,

0xf629,	// (0x00065bd7) list_double_time_pane_g_ParamLimits

0xf629,	// (0x00065bd7) list_double_time_pane_g

0x5e60,	// (0x0005c40e) list_double_time_pane_t1_ParamLimits

0x5e60,	// (0x0005c40e) list_double_time_pane_t1

0x5e76,	// (0x0005c424) list_double_time_pane_t2_ParamLimits

0x5e76,	// (0x0005c424) list_double_time_pane_t2

0x5e88,	// (0x0005c436) list_double_time_pane_t3_ParamLimits

0x5e88,	// (0x0005c436) list_double_time_pane_t3

0x5e9a,	// (0x0005c448) list_double_time_pane_t4_ParamLimits

0x5e9a,	// (0x0005c448) list_double_time_pane_t4

0x0003,

0xf62e,	// (0x00065bdc) list_double_time_pane_t_ParamLimits

0xf62e,	// (0x00065bdc) list_double_time_pane_t

0x5eac,	// (0x0005c45a) list_setting_pane_g1_ParamLimits

0x5eac,	// (0x0005c45a) list_setting_pane_g1

0x5eb8,	// (0x0005c466) list_setting_pane_g2_ParamLimits

0x5eb8,	// (0x0005c466) list_setting_pane_g2

0x0001,

0xf637,	// (0x00065be5) list_setting_pane_g_ParamLimits

0xf637,	// (0x00065be5) list_setting_pane_g

0x5ec4,	// (0x0005c472) list_setting_pane_t1_ParamLimits

0x5ec4,	// (0x0005c472) list_setting_pane_t1

0x5ede,	// (0x0005c48c) list_setting_pane_t2_ParamLimits

0x5ede,	// (0x0005c48c) list_setting_pane_t2

0x0002,

0xf63c,	// (0x00065bea) list_setting_pane_t_ParamLimits

0xf63c,	// (0x00065bea) list_setting_pane_t

0x5f1b,	// (0x0005c4c9) set_value_pane_cp_ParamLimits

0x5f1b,	// (0x0005c4c9) set_value_pane_cp

0x5f27,	// (0x0005c4d5) list_setting_number_pane_g1_ParamLimits

0x5f27,	// (0x0005c4d5) list_setting_number_pane_g1

0x5f33,	// (0x0005c4e1) list_setting_number_pane_g2_ParamLimits

0x5f33,	// (0x0005c4e1) list_setting_number_pane_g2

0x0001,

0xf643,	// (0x00065bf1) list_setting_number_pane_g_ParamLimits

0xf643,	// (0x00065bf1) list_setting_number_pane_g

0x5f3f,	// (0x0005c4ed) list_setting_number_pane_t1_ParamLimits

0x5f3f,	// (0x0005c4ed) list_setting_number_pane_t1

0x5f58,	// (0x0005c506) list_setting_number_pane_t2_ParamLimits

0x5f58,	// (0x0005c506) list_setting_number_pane_t2

0x5f72,	// (0x0005c520) list_setting_number_pane_t3_ParamLimits

0x5f72,	// (0x0005c520) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x00065bf6) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x00065bf6) list_setting_number_pane_t

0x5f1b,	// (0x0005c4c9) set_value_pane_ParamLimits

0x5f1b,	// (0x0005c4c9) set_value_pane

0xf0e5,	// (0x00065693) bg_set_opt_pane_ParamLimits

0xf0e5,	// (0x00065693) bg_set_opt_pane

0x3a87,	// (0x0005a035) set_value_pane_t1

0xf106,	// (0x000656b4) slider_set_pane_cp3

0x5fb5,	// (0x0005c563) volume_small_pane_cp

0xf10f,	// (0x000656bd) list_form_gen_pane

0xf118,	// (0x000656c6) scroll_pane_cp8

0x5fbe,	// (0x0005c56c) form_field_data_pane_ParamLimits

0x5fbe,	// (0x0005c56c) form_field_data_pane

0x5fd8,	// (0x0005c586) form_field_data_wide_pane_ParamLimits

0x5fd8,	// (0x0005c586) form_field_data_wide_pane

0x5ffb,	// (0x0005c5a9) form_field_popup_pane_ParamLimits

0x5ffb,	// (0x0005c5a9) form_field_popup_pane

0x601b,	// (0x0005c5c9) form_field_popup_wide_pane_ParamLimits

0x601b,	// (0x0005c5c9) form_field_popup_wide_pane

0x3aa5,	// (0x0005a053) form_field_slider_pane_ParamLimits

0x3aa5,	// (0x0005a053) form_field_slider_pane

0x6038,	// (0x0005c5e6) form_field_slider_wide_pane_ParamLimits

0x6038,	// (0x0005c5e6) form_field_slider_wide_pane

0xf129,	// (0x000656d7) data_form_pane

0x6055,	// (0x0005c603) form_field_data_pane_t1

0xf135,	// (0x000656e3) input_focus_pane

0x3ab8,	// (0x0005a066) data_form_wide_pane

0x3ad5,	// (0x0005a083) form_field_data_wide_pane_t1

0xf029,	// (0x000655d7) input_focus_pane_cp6

0x606d,	// (0x0005c61b) form_field_popup_pane_t1

0xf135,	// (0x000656e3) input_focus_pane_cp7

0xf163,	// (0x00065711) list_form_pane

0x3aff,	// (0x0005a0ad) form_field_popup_wide_pane_t1

0xf135,	// (0x000656e3) input_focus_pane_cp8

0xf16f,	// (0x0006571d) list_form_wide_pane

0x608d,	// (0x0005c63b) form_field_slider_pane_t1_ParamLimits

0x608d,	// (0x0005c63b) form_field_slider_pane_t1

0x60a3,	// (0x0005c651) form_field_slider_pane_t2_ParamLimits

0x60a3,	// (0x0005c651) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x00065c06) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x00065c06) form_field_slider_pane_t

0xe22f,	// (0x000647dd) input_focus_pane_cp9_ParamLimits

0xe22f,	// (0x000647dd) input_focus_pane_cp9

0x60b8,	// (0x0005c666) slider_cont_pane_ParamLimits

0x60b8,	// (0x0005c666) slider_cont_pane

0xf17b,	// (0x00065729) form_field_slider_wide_pane_t1_ParamLimits

0xf17b,	// (0x00065729) form_field_slider_wide_pane_t1

0x3b14,	// (0x0005a0c2) form_field_slider_wide_pane_t2_ParamLimits

0x3b14,	// (0x0005a0c2) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00065c0b) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00065c0b) form_field_slider_wide_pane_t

0xe22f,	// (0x000647dd) input_focus_pane_cp10_ParamLimits

0xe22f,	// (0x000647dd) input_focus_pane_cp10

0x60cc,	// (0x0005c67a) slider_cont_pane_cp1_ParamLimits

0x60cc,	// (0x0005c67a) slider_cont_pane_cp1

0x60e0,	// (0x0005c68e) slider_form_pane_cp

0xf18d,	// (0x0006573b) input_focus_pane_g1

0xf195,	// (0x00065743) input_focus_pane_g2

0xf19d,	// (0x0006574b) input_focus_pane_g3

0xf1a5,	// (0x00065753) input_focus_pane_g4

0xf1ad,	// (0x0006575b) input_focus_pane_g5

0xf1b5,	// (0x00065763) input_focus_pane_g6

0xf1bd,	// (0x0006576b) input_focus_pane_g7

0xf1c5,	// (0x00065773) input_focus_pane_g8

0xf1cd,	// (0x0006577b) input_focus_pane_g9

0xe0ad,	// (0x0006465b) input_focus_pane_g10

0x0009,

0xf662,	// (0x00065c10) input_focus_pane_g

0x9672,	// (0x0005fc20) wait_border_pane_g3_copy1

0x60e8,	// (0x0005c696) data_form_pane_t1

0xe0ad,	// (0x0006465b) wait_anim_pane_g1_copy1

0x79f7,	// (0x0005dfa5) data_form_wide_pane_t1

0x6103,	// (0x0005c6b1) list_form_graphic_pane_cp_ParamLimits

0x6103,	// (0x0005c6b1) list_form_graphic_pane_cp

0xa561,	// (0x00060b0f) slider_form_pane_g1

0xa56a,	// (0x00060b18) slider_form_pane_g2

0x0006,

0xf965,	// (0x00065f13) slider_form_pane_g

0x6103,	// (0x0005c6b1) list_form_graphic_pane_ParamLimits

0x6103,	// (0x0005c6b1) list_form_graphic_pane

0x611c,	// (0x0005c6ca) list_form_graphic_pane_g1

0x6124,	// (0x0005c6d2) list_form_graphic_pane_t1_ParamLimits

0x6124,	// (0x0005c6d2) list_form_graphic_pane_t1

0xe105,	// (0x000646b3) list_highlight_pane_cp5_ParamLimits

0xe105,	// (0x000646b3) list_highlight_pane_cp5

0x6139,	// (0x0005c6e7) find_pane_g1

0xf1d5,	// (0x00065783) input_find_pane

0x6142,	// (0x0005c6f0) input_find_pane_g1_ParamLimits

0x6142,	// (0x0005c6f0) input_find_pane_g1

0x614e,	// (0x0005c6fc) input_find_pane_t1_ParamLimits

0x614e,	// (0x0005c6fc) input_find_pane_t1

0x6163,	// (0x0005c711) input_find_pane_t2_ParamLimits

0x6163,	// (0x0005c711) input_find_pane_t2

0x0001,

0xf677,	// (0x00065c25) input_find_pane_t_ParamLimits

0xf677,	// (0x00065c25) input_find_pane_t

0xf1de,	// (0x0006578c) input_focus_pane_cp5_ParamLimits

0xf1de,	// (0x0006578c) input_focus_pane_cp5

0xf1f1,	// (0x0006579f) bg_popup_window_pane_cp2_ParamLimits

0xf1f1,	// (0x0006579f) bg_popup_window_pane_cp2

0xf1fe,	// (0x000657ac) listscroll_menu_pane_ParamLimits

0xf1fe,	// (0x000657ac) listscroll_menu_pane

0x6184,	// (0x0005c732) popup_submenu_window_ParamLimits

0x6184,	// (0x0005c732) popup_submenu_window

0xf20a,	// (0x000657b8) find_popup_pane_g1

0x61ac,	// (0x0005c75a) input_popup_find_pane_cp

0xf212,	// (0x000657c0) input_focus_pane_cp4_ParamLimits

0xf212,	// (0x000657c0) input_focus_pane_cp4

0xf220,	// (0x000657ce) input_popup_find_pane_t1_ParamLimits

0xf220,	// (0x000657ce) input_popup_find_pane_t1

0xe0b7,	// (0x00064665) bg_popup_sub_pane_cp

0xf24e,	// (0x000657fc) listscroll_popup_sub_pane

0xf256,	// (0x00065804) list_submenu_pane_ParamLimits

0xf256,	// (0x00065804) list_submenu_pane

0xf267,	// (0x00065815) scroll_pane_cp4

0x61c4,	// (0x0005c772) list_single_popup_submenu_pane_ParamLimits

0x61c4,	// (0x0005c772) list_single_popup_submenu_pane

0x22b9,	// (0x00058867) list_single_popup_submenu_pane_g1

0x61d8,	// (0x0005c786) list_single_popup_submenu_pane_t1_ParamLimits

0x61d8,	// (0x0005c786) list_single_popup_submenu_pane_t1

0xe105,	// (0x000646b3) bg_active_tab_pane_cp1_ParamLimits

0xe105,	// (0x000646b3) bg_active_tab_pane_cp1

0xf26f,	// (0x0006581d) tabs_2_active_pane_g1

0x61ed,	// (0x0005c79b) tabs_2_active_pane_t1

0xe105,	// (0x000646b3) bg_passive_tab_pane_cp1_ParamLimits

0xe105,	// (0x000646b3) bg_passive_tab_pane_cp1

0xf26f,	// (0x0006581d) tabs_2_passive_pane_g1

0x61ed,	// (0x0005c79b) tabs_2_passive_pane_t1

0x61ff,	// (0x0005c7ad) bg_active_tab_pane_cp4

0x620d,	// (0x0005c7bb) tabs_2_long_active_pane_t1

0x6220,	// (0x0005c7ce) bg_passive_tab_pane_cp4

0x769e,	// (0x0005dc4c) list_single_midp_graphic_pane_g4_ParamLimits

0x61ff,	// (0x0005c7ad) bg_active_tab_pane_cp5

0x622c,	// (0x0005c7da) tabs_3_long_active_pane_t1

0x6220,	// (0x0005c7ce) bg_passive_tab_pane_cp5

0x769e,	// (0x0005dc4c) list_single_midp_graphic_pane_g4

0xe105,	// (0x000646b3) bg_popup_window_pane_cp13_ParamLimits

0xe105,	// (0x000646b3) bg_popup_window_pane_cp13

0xf277,	// (0x00065825) listscroll_popup_fast_pane_ParamLimits

0xf277,	// (0x00065825) listscroll_popup_fast_pane

0xf283,	// (0x00065831) grid_popup_fast_pane_ParamLimits

0xf283,	// (0x00065831) grid_popup_fast_pane

0xf295,	// (0x00065843) scroll_pane_cp9_ParamLimits

0xf295,	// (0x00065843) scroll_pane_cp9

0xc071,	// (0x0006261f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc071,	// (0x0006261f) list_single_graphic_hl_pane_t1_cp2

0xf2a8,	// (0x00065856) input_focus_pane_cp20_ParamLimits

0xf2a8,	// (0x00065856) input_focus_pane_cp20

0xf2b6,	// (0x00065864) query_popup_data_pane_t1_ParamLimits

0xf2b6,	// (0x00065864) query_popup_data_pane_t1

0xf2c9,	// (0x00065877) query_popup_data_pane_t2_ParamLimits

0xf2c9,	// (0x00065877) query_popup_data_pane_t2

0xf30f,	// (0x000658bd) query_popup_data_pane_t3_ParamLimits

0xf30f,	// (0x000658bd) query_popup_data_pane_t3

0xf350,	// (0x000658fe) query_popup_data_pane_t4_ParamLimits

0xf350,	// (0x000658fe) query_popup_data_pane_t4

0xf38c,	// (0x0006593a) query_popup_data_pane_t5_ParamLimits

0xf38c,	// (0x0006593a) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00065c2a) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00065c2a) query_popup_data_pane_t

0xf18d,	// (0x0006573b) bg_set_opt_pane_g1

0xf195,	// (0x00065743) bg_set_opt_pane_g2

0xf19d,	// (0x0006574b) bg_set_opt_pane_g3

0xf1a5,	// (0x00065753) bg_set_opt_pane_g4

0xf1ad,	// (0x0006575b) bg_set_opt_pane_g5

0xf1b5,	// (0x00065763) bg_set_opt_pane_g6

0xf1bd,	// (0x0006576b) bg_set_opt_pane_g7

0xf1c5,	// (0x00065773) bg_set_opt_pane_g8

0xf1cd,	// (0x0006577b) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00065c35) bg_set_opt_pane_g

0x67b7,	// (0x0005cd65) control_top_pane_stacon_ParamLimits

0x67b7,	// (0x0005cd65) control_top_pane_stacon

0x680a,	// (0x0005cdb8) signal_pane_stacon_ParamLimits

0x680a,	// (0x0005cdb8) signal_pane_stacon

0x13dd,	// (0x0005798b) stacon_top_pane_g1_ParamLimits

0x13dd,	// (0x0005798b) stacon_top_pane_g1

0x682f,	// (0x0005cddd) title_pane_stacon_ParamLimits

0x682f,	// (0x0005cddd) title_pane_stacon

0x6859,	// (0x0005ce07) uni_indicator_pane_stacon_ParamLimits

0x6859,	// (0x0005ce07) uni_indicator_pane_stacon

0x686e,	// (0x0005ce1c) battery_pane_stacon_ParamLimits

0x686e,	// (0x0005ce1c) battery_pane_stacon

0x68b2,	// (0x0005ce60) control_bottom_pane_stacon_ParamLimits

0x68b2,	// (0x0005ce60) control_bottom_pane_stacon

0x68d5,	// (0x0005ce83) navi_pane_stacon_ParamLimits

0x68d5,	// (0x0005ce83) navi_pane_stacon

0x13ff,	// (0x000579ad) stacon_bottom_pane_g1_ParamLimits

0x13ff,	// (0x000579ad) stacon_bottom_pane_g1

0x6258,	// (0x0005c806) aid_levels_signal_lsc_ParamLimits

0x6258,	// (0x0005c806) aid_levels_signal_lsc

0x626e,	// (0x0005c81c) signal_pane_stacon_g1_ParamLimits

0x626e,	// (0x0005c81c) signal_pane_stacon_g1

0x6282,	// (0x0005c830) signal_pane_stacon_g2_ParamLimits

0x6282,	// (0x0005c830) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00065c48) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00065c48) signal_pane_stacon_g

0x62b7,	// (0x0005c865) title_pane_stacon_t1_ParamLimits

0x62b7,	// (0x0005c865) title_pane_stacon_t1

0xf3d0,	// (0x0006597e) uni_indicator_pane_stacon_g1

0xf3da,	// (0x00065988) uni_indicator_pane_stacon_g2

0xf3e4,	// (0x00065992) uni_indicator_pane_stacon_g3

0xf3ee,	// (0x0006599c) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00065c54) uni_indicator_pane_stacon_g

0x62dc,	// (0x0005c88a) control_top_pane_stacon_g1

0x62e4,	// (0x0005c892) control_top_pane_stacon_t1_ParamLimits

0x62e4,	// (0x0005c892) control_top_pane_stacon_t1

0x631b,	// (0x0005c8c9) aid_levels_battery_lsc_ParamLimits

0x631b,	// (0x0005c8c9) aid_levels_battery_lsc

0x6332,	// (0x0005c8e0) battery_pane_stacon_g1_ParamLimits

0x6332,	// (0x0005c8e0) battery_pane_stacon_g1

0x6345,	// (0x0005c8f3) battery_pane_stacon_g2_ParamLimits

0x6345,	// (0x0005c8f3) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00065c5d) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00065c5d) battery_pane_stacon_g

0x6383,	// (0x0005c931) navi_icon_pane_stacon

0x6397,	// (0x0005c945) navi_navi_pane_stacon

0x6383,	// (0x0005c931) navi_text_pane_stacon

0x62dc,	// (0x0005c88a) control_bottom_pane_stacon_g1

0x63ab,	// (0x0005c959) control_bottom_pane_stacon_t1_ParamLimits

0x63ab,	// (0x0005c959) control_bottom_pane_stacon_t1

0x63e2,	// (0x0005c990) grid_app_pane_ParamLimits

0x63e2,	// (0x0005c990) grid_app_pane

0x6404,	// (0x0005c9b2) scroll_pane_cp15_ParamLimits

0x6404,	// (0x0005c9b2) scroll_pane_cp15

0x6417,	// (0x0005c9c5) cell_app_pane_ParamLimits

0x6417,	// (0x0005c9c5) cell_app_pane

0x643f,	// (0x0005c9ed) cell_app_pane_g1_ParamLimits

0x643f,	// (0x0005c9ed) cell_app_pane_g1

0xf412,	// (0x000659c0) cell_app_pane_g2_ParamLimits

0xf412,	// (0x000659c0) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00065c62) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00065c62) cell_app_pane_g

0x6463,	// (0x0005ca11) cell_app_pane_t1_ParamLimits

0x6463,	// (0x0005ca11) cell_app_pane_t1

0xf41e,	// (0x000659cc) grid_highlight_pane_ParamLimits

0xf41e,	// (0x000659cc) grid_highlight_pane

0xf18d,	// (0x0006573b) cell_highlight_pane_g1

0xf195,	// (0x00065743) cell_highlight_pane_g2

0xf19d,	// (0x0006574b) cell_highlight_pane_g3

0xf1a5,	// (0x00065753) cell_highlight_pane_g4

0xf1ad,	// (0x0006575b) cell_highlight_pane_g5

0xf1b5,	// (0x00065763) cell_highlight_pane_g6

0xf1bd,	// (0x0006576b) cell_highlight_pane_g7

0xf1c5,	// (0x00065773) cell_highlight_pane_g8

0xf1cd,	// (0x0006577b) cell_highlight_pane_g9

0xe0ad,	// (0x0006465b) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00065c10) cell_highlight_pane_g

0xf42f,	// (0x000659dd) bg_scroll_pane

0x648d,	// (0x0005ca3b) scroll_handle_pane

0xf476,	// (0x00065a24) scroll_bg_pane_g1

0xf48b,	// (0x00065a39) scroll_bg_pane_g2

0xf4a3,	// (0x00065a51) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00065c67) scroll_bg_pane_g

0x64b6,	// (0x0005ca64) scroll_handle_focus_pane_ParamLimits

0x64b6,	// (0x0005ca64) scroll_handle_focus_pane

0xf476,	// (0x00065a24) scroll_handle_pane_g1

0xf4b8,	// (0x00065a66) scroll_handle_pane_g2

0xf4a3,	// (0x00065a51) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x00065c6e) scroll_handle_pane_g

0xf212,	// (0x000657c0) bg_popup_sub_pane_cp21_ParamLimits

0xf212,	// (0x000657c0) bg_popup_sub_pane_cp21

0x64c3,	// (0x0005ca71) popup_fep_japan_predictive_window_t1_ParamLimits

0x64c3,	// (0x0005ca71) popup_fep_japan_predictive_window_t1

0x64dd,	// (0x0005ca8b) popup_fep_japan_predictive_window_t2_ParamLimits

0x64dd,	// (0x0005ca8b) popup_fep_japan_predictive_window_t2

0x6510,	// (0x0005cabe) popup_fep_japan_predictive_window_t3_ParamLimits

0x6510,	// (0x0005cabe) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x00065c75) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x00065c75) popup_fep_japan_predictive_window_t

0xe0b7,	// (0x00064665) bg_popup_sub_pane_cp23

0x2bea,	// (0x00059198) listscroll_japin_cand_pane

0xf4cc,	// (0x00065a7a) popup_fep_japan_candidate_window_t1

0xf4da,	// (0x00065a88) candidate_pane_ParamLimits

0xf4da,	// (0x00065a88) candidate_pane

0x6547,	// (0x0005caf5) scroll_pane_cp30

0xf4ec,	// (0x00065a9a) list_single_popup_jap_candidate_pane_ParamLimits

0xf4ec,	// (0x00065a9a) list_single_popup_jap_candidate_pane

0xe0b7,	// (0x00064665) list_highlight_pane_cp30

0xf501,	// (0x00065aaf) list_single_popup_jap_candidate_pane_t1

0xf510,	// (0x00065abe) level_1_signal

0x11e2,	// (0x00057790) level_2_signal

0x11ef,	// (0x0005779d) level_3_signal

0x11fc,	// (0x000577aa) level_4_signal

0x1209,	// (0x000577b7) level_5_signal

0x1216,	// (0x000577c4) level_6_signal

0x1223,	// (0x000577d1) level_7_signal

0xf510,	// (0x00065abe) level_1_battery

0x11e2,	// (0x00057790) level_2_battery

0x11ef,	// (0x0005779d) level_3_battery

0x11fc,	// (0x000577aa) level_4_battery

0x1209,	// (0x000577b7) level_5_battery

0x1216,	// (0x000577c4) level_6_battery

0x1223,	// (0x000577d1) level_7_battery

0x1248,	// (0x000577f6) list_menu_pane_ParamLimits

0x1248,	// (0x000577f6) list_menu_pane

0x125e,	// (0x0005780c) scroll_pane_cp25_ParamLimits

0x125e,	// (0x0005780c) scroll_pane_cp25

0x1277,	// (0x00057825) list_double2_graphic_pane_cp2_ParamLimits

0x1277,	// (0x00057825) list_double2_graphic_pane_cp2

0x1277,	// (0x00057825) list_double2_large_graphic_pane_cp2_ParamLimits

0x1277,	// (0x00057825) list_double2_large_graphic_pane_cp2

0x1277,	// (0x00057825) list_double2_pane_cp2_ParamLimits

0x1277,	// (0x00057825) list_double2_pane_cp2

0x1277,	// (0x00057825) list_double_graphic_pane_cp2_ParamLimits

0x1277,	// (0x00057825) list_double_graphic_pane_cp2

0x1277,	// (0x00057825) list_double_large_graphic_pane_cp2_ParamLimits

0x1277,	// (0x00057825) list_double_large_graphic_pane_cp2

0x1277,	// (0x00057825) list_double_number_pane_cp2_ParamLimits

0x1277,	// (0x00057825) list_double_number_pane_cp2

0x1277,	// (0x00057825) list_double_pane_cp2_ParamLimits

0x1277,	// (0x00057825) list_double_pane_cp2

0x6582,	// (0x0005cb30) list_single_2graphic_pane_cp2_ParamLimits

0x6582,	// (0x0005cb30) list_single_2graphic_pane_cp2

0x6582,	// (0x0005cb30) list_single_graphic_heading_pane_cp2_ParamLimits

0x6582,	// (0x0005cb30) list_single_graphic_heading_pane_cp2

0x6582,	// (0x0005cb30) list_single_graphic_pane_cp2_ParamLimits

0x6582,	// (0x0005cb30) list_single_graphic_pane_cp2

0x6582,	// (0x0005cb30) list_single_heading_pane_cp2_ParamLimits

0x6582,	// (0x0005cb30) list_single_heading_pane_cp2

0x1287,	// (0x00057835) list_single_large_graphic_pane_cp2_ParamLimits

0x1287,	// (0x00057835) list_single_large_graphic_pane_cp2

0x6582,	// (0x0005cb30) list_single_number_heading_pane_cp2_ParamLimits

0x6582,	// (0x0005cb30) list_single_number_heading_pane_cp2

0x6582,	// (0x0005cb30) list_single_number_pane_cp2_ParamLimits

0x6582,	// (0x0005cb30) list_single_number_pane_cp2

0x6598,	// (0x0005cb46) list_single_pane_cp2_ParamLimits

0x6598,	// (0x0005cb46) list_single_pane_cp2

0x12a1,	// (0x0005784f) bg_popup_sub_pane_cp22

0x6670,	// (0x0005cc1e) popup_side_volume_key_window_g1

0x6694,	// (0x0005cc42) popup_side_volume_key_window_t1

0x66b0,	// (0x0005cc5e) volume_small_pane_cp1

0xe22f,	// (0x000647dd) bg_popup_sub_pane_cp24_ParamLimits

0xe22f,	// (0x000647dd) bg_popup_sub_pane_cp24

0x12b7,	// (0x00057865) fep_china_uni_candidate_pane_ParamLimits

0x12b7,	// (0x00057865) fep_china_uni_candidate_pane

0x12cb,	// (0x00057879) fep_china_uni_entry_pane

0x12db,	// (0x00057889) popup_fep_china_uni_window_g1

0x66b8,	// (0x0005cc66) fep_china_uni_entry_pane_g1

0x66c0,	// (0x0005cc6e) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00065ca6) fep_china_uni_entry_pane_g

0x12f7,	// (0x000578a5) fep_entry_item_pane

0x1301,	// (0x000578af) fep_candidate_item_pane

0x66c8,	// (0x0005cc76) fep_china_uni_candidate_pane_g1

0x1309,	// (0x000578b7) fep_china_uni_candidate_pane_g2

0x1311,	// (0x000578bf) fep_china_uni_candidate_pane_g3

0x66d0,	// (0x0005cc7e) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00065cab) fep_china_uni_candidate_pane_g

0xe0ad,	// (0x0006465b) fep_entry_item_pane_g1

0x1319,	// (0x000578c7) fep_entry_item_pane_t1_ParamLimits

0x1319,	// (0x000578c7) fep_entry_item_pane_t1

0x132f,	// (0x000578dd) fep_candidate_item_pane_t1_ParamLimits

0x132f,	// (0x000578dd) fep_candidate_item_pane_t1

0x1344,	// (0x000578f2) fep_candidate_item_pane_t2_ParamLimits

0x1344,	// (0x000578f2) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x00065cb4) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x00065cb4) fep_candidate_item_pane_t

0xe105,	// (0x000646b3) list_highlight_pane_cp31_ParamLimits

0xe105,	// (0x000646b3) list_highlight_pane_cp31

0x1356,	// (0x00057904) level_1_signal_lsc

0x135f,	// (0x0005790d) level_2_signal_lsc

0x1368,	// (0x00057916) level_3_signal_lsc

0x1371,	// (0x0005791f) level_4_signal_lsc

0x137a,	// (0x00057928) level_5_signal_lsc

0x1383,	// (0x00057931) level_6_signal_lsc

0x138c,	// (0x0005793a) level_7_signal_lsc

0x138c,	// (0x0005793a) level_1_battery_lsc

0x1395,	// (0x00057943) level_2_battery_lsc

0x139e,	// (0x0005794c) level_3_battery_lsc

0x13a7,	// (0x00057955) level_4_battery_lsc

0x13b0,	// (0x0005795e) level_5_battery_lsc

0x13b9,	// (0x00057967) level_6_battery_lsc

0x1356,	// (0x00057904) level_7_battery_lsc

0x13c2,	// (0x00057970) scroll_handle_focus_pane_g1

0x13cb,	// (0x00057979) scroll_handle_focus_pane_g2

0x13d4,	// (0x00057982) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00065cb9) scroll_handle_focus_pane_g

0x66d8,	// (0x0005cc86) list_single_2graphic_pane_g1_ParamLimits

0x66d8,	// (0x0005cc86) list_single_2graphic_pane_g1

0x5c36,	// (0x0005c1e4) list_single_2graphic_pane_g2_ParamLimits

0x5c36,	// (0x0005c1e4) list_single_2graphic_pane_g2

0x5b93,	// (0x0005c141) list_single_2graphic_pane_g3_ParamLimits

0x5b93,	// (0x0005c141) list_single_2graphic_pane_g3

0x66e4,	// (0x0005cc92) list_single_2graphic_pane_g4_ParamLimits

0x66e4,	// (0x0005cc92) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00065cc0) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00065cc0) list_single_2graphic_pane_g

0x66f0,	// (0x0005cc9e) list_single_2graphic_pane_t1_ParamLimits

0x66f0,	// (0x0005cc9e) list_single_2graphic_pane_t1

0x671e,	// (0x0005cccc) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x671e,	// (0x0005cccc) list_double2_graphic_large_graphic_pane_g1

0x5de1,	// (0x0005c38f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5de1,	// (0x0005c38f) list_double2_graphic_large_graphic_pane_g2

0x4305,	// (0x0005a8b3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4305,	// (0x0005a8b3) list_double2_graphic_large_graphic_pane_g3

0x672e,	// (0x0005ccdc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x672e,	// (0x0005ccdc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00065cc9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00065cc9) list_double2_graphic_large_graphic_pane_g

0x673a,	// (0x0005cce8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x673a,	// (0x0005cce8) list_double2_graphic_large_graphic_pane_t1

0x6750,	// (0x0005ccfe) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6750,	// (0x0005ccfe) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00065cd2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00065cd2) list_double2_graphic_large_graphic_pane_t

0x6934,	// (0x0005cee2) popup_fast_swap_window_ParamLimits

0x6934,	// (0x0005cee2) popup_fast_swap_window

0x6950,	// (0x0005cefe) popup_side_volume_key_window

0x148a,	// (0x00057a38) stacon_top_pane

0x1494,	// (0x00057a42) status_pane_ParamLimits

0x1494,	// (0x00057a42) status_pane

0xe0a3,	// (0x00064651) status_small_pane

0xe0b7,	// (0x00064665) control_pane

0xe0b7,	// (0x00064665) stacon_bottom_pane

0xf118,	// (0x000656c6) scroll_pane_cp121

0xf10f,	// (0x000656bd) set_content_pane

0x6762,	// (0x0005cd10) bg_active_tab_pane_g1_cp1

0x676b,	// (0x0005cd19) bg_active_tab_pane_g2_cp1

0x6774,	// (0x0005cd22) bg_active_tab_pane_g3_cp1

0x6762,	// (0x0005cd10) bg_passive_tab_pane_g1_cp1

0x676b,	// (0x0005cd19) bg_passive_tab_pane_g2_cp1

0x6774,	// (0x0005cd22) bg_passive_tab_pane_g3_cp1

0x677d,	// (0x0005cd2b) bg_active_tab_pane_g1_cp2

0x676b,	// (0x0005cd19) bg_active_tab_pane_g2_cp2

0x6786,	// (0x0005cd34) bg_active_tab_pane_g3_cp2

0x677d,	// (0x0005cd2b) bg_passive_tab_pane_g1_cp2

0x676b,	// (0x0005cd19) bg_passive_tab_pane_g2_cp2

0x6786,	// (0x0005cd34) bg_passive_tab_pane_g3_cp2

0x678f,	// (0x0005cd3d) bg_active_tab_pane_g1_cp3

0x676b,	// (0x0005cd19) bg_active_tab_pane_g2_cp3

0x6798,	// (0x0005cd46) bg_active_tab_pane_g3_cp3

0x678f,	// (0x0005cd3d) bg_passive_tab_pane_g1_cp3

0x676b,	// (0x0005cd19) bg_passive_tab_pane_g2_cp3

0x6798,	// (0x0005cd46) bg_passive_tab_pane_g3_cp3

0x67a1,	// (0x0005cd4f) bg_active_tab_pane_g1_cp4

0x676b,	// (0x0005cd19) bg_active_tab_pane_g2_cp4

0x67ac,	// (0x0005cd5a) bg_active_tab_pane_g3_cp4

0x67a1,	// (0x0005cd4f) bg_passive_tab_pane_g1_cp4

0x676b,	// (0x0005cd19) bg_passive_tab_pane_g2_cp4

0x67ac,	// (0x0005cd5a) bg_passive_tab_pane_g3_cp4

0x68f8,	// (0x0005cea6) bg_active_tab_pane_g1_cp5

0x676b,	// (0x0005cd19) bg_active_tab_pane_g2_cp5

0x6901,	// (0x0005ceaf) bg_active_tab_pane_g3_cp5

0x68f8,	// (0x0005cea6) bg_passive_tab_pane_g1_cp5

0x676b,	// (0x0005cd19) bg_passive_tab_pane_g2_cp5

0x6901,	// (0x0005ceaf) bg_passive_tab_pane_g3_cp5

0x690a,	// (0x0005ceb8) list_set_graphic_pane_ParamLimits

0x690a,	// (0x0005ceb8) list_set_graphic_pane

0xe0b7,	// (0x00064665) bg_set_opt_pane_cp4

0x141b,	// (0x000579c9) list_set_graphic_pane_g1_ParamLimits

0x141b,	// (0x000579c9) list_set_graphic_pane_g1

0x1427,	// (0x000579d5) list_set_graphic_pane_g2_ParamLimits

0x1427,	// (0x000579d5) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00065cd7) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00065cd7) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0006606f) volume_small_pane_cp_g

0x6928,	// (0x0005ced6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6928,	// (0x0005ced6) list_double2_large_graphic_pane_g1_cp2

0x1449,	// (0x000579f7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1449,	// (0x000579f7) list_double2_large_graphic_pane_g2_cp2

0x145a,	// (0x00057a08) list_double2_large_graphic_pane_g3_cp2

0x1462,	// (0x00057a10) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1462,	// (0x00057a10) list_double2_large_graphic_pane_t1_cp2

0x1478,	// (0x00057a26) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1478,	// (0x00057a26) list_double2_large_graphic_pane_t2_cp2

0xa123,	// (0x000606d1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa123,	// (0x000606d1) list_double_large_graphic_pane_g1_cp2

0xa134,	// (0x000606e2) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa134,	// (0x000606e2) list_double_large_graphic_pane_g2_cp2

0x15b0,	// (0x00057b5e) list_double_large_graphic_pane_g3_cp2

0xa145,	// (0x000606f3) list_double_large_graphic_pane_g4_cp

0xa14d,	// (0x000606fb) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa14d,	// (0x000606fb) list_double_large_graphic_pane_t1_cp2

0xa164,	// (0x00060712) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa164,	// (0x00060712) list_double_large_graphic_pane_t2_cp2

0x14a2,	// (0x00057a50) list_double2_graphic_pane_g1_cp2_ParamLimits

0x14a2,	// (0x00057a50) list_double2_graphic_pane_g1_cp2

0x14b0,	// (0x00057a5e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x14b0,	// (0x00057a5e) list_double2_graphic_pane_g2_cp2

0x14c1,	// (0x00057a6f) list_double2_graphic_pane_g3_cp2

0x14cb,	// (0x00057a79) list_double2_graphic_pane_t1_cp2_ParamLimits

0x14cb,	// (0x00057a79) list_double2_graphic_pane_t1_cp2

0x14e1,	// (0x00057a8f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x14e1,	// (0x00057a8f) list_double2_graphic_pane_t2_cp2

0x14f3,	// (0x00057aa1) list_single_number_heading_pane_g1_cp2_ParamLimits

0x14f3,	// (0x00057aa1) list_single_number_heading_pane_g1_cp2

0x14ff,	// (0x00057aad) list_single_number_heading_pane_g2_cp2

0x1507,	// (0x00057ab5) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1507,	// (0x00057ab5) list_single_number_heading_pane_t1_cp2

0x151d,	// (0x00057acb) list_single_number_heading_pane_t2_cp2_ParamLimits

0x151d,	// (0x00057acb) list_single_number_heading_pane_t2_cp2

0x152f,	// (0x00057add) list_single_number_heading_pane_t3_cp2_ParamLimits

0x152f,	// (0x00057add) list_single_number_heading_pane_t3_cp2

0x14f3,	// (0x00057aa1) list_single_heading_pane_g1_cp2_ParamLimits

0x14f3,	// (0x00057aa1) list_single_heading_pane_g1_cp2

0x14ff,	// (0x00057aad) list_single_heading_pane_g2_cp2

0x1507,	// (0x00057ab5) list_single_heading_pane_t1_cp2_ParamLimits

0x1507,	// (0x00057ab5) list_single_heading_pane_t1_cp2

0x9f2d,	// (0x000604db) list_single_heading_pane_t2_cp2_ParamLimits

0x9f2d,	// (0x000604db) list_single_heading_pane_t2_cp2

0x9e75,	// (0x00060423) list_double_graphic_pane_g1_cp2_ParamLimits

0x9e75,	// (0x00060423) list_double_graphic_pane_g1_cp2

0x9e81,	// (0x0006042f) list_double_graphic_pane_g2_cp2_ParamLimits

0x9e81,	// (0x0006042f) list_double_graphic_pane_g2_cp2

0x9e90,	// (0x0006043e) list_double_graphic_pane_g3_cp2

0x9e98,	// (0x00060446) list_double_graphic_pane_t1_cp2_ParamLimits

0x9e98,	// (0x00060446) list_double_graphic_pane_t1_cp2

0x9eae,	// (0x0006045c) list_double_graphic_pane_t2_cp2_ParamLimits

0x9eae,	// (0x0006045c) list_double_graphic_pane_t2_cp2

0x15a4,	// (0x00057b52) list_double_number_pane_g1_cp2_ParamLimits

0x15a4,	// (0x00057b52) list_double_number_pane_g1_cp2

0x15b0,	// (0x00057b5e) list_double_number_pane_g2_cp2

0x9e39,	// (0x000603e7) list_double_number_pane_t1_cp2_ParamLimits

0x9e39,	// (0x000603e7) list_double_number_pane_t1_cp2

0x9e4d,	// (0x000603fb) list_double_number_pane_t2_cp2_ParamLimits

0x9e4d,	// (0x000603fb) list_double_number_pane_t2_cp2

0x9e63,	// (0x00060411) list_double_number_pane_t3_cp2_ParamLimits

0x9e63,	// (0x00060411) list_double_number_pane_t3_cp2

0x9d22,	// (0x000602d0) list_single_graphic_pane_g1_cp2_ParamLimits

0x9d22,	// (0x000602d0) list_single_graphic_pane_g1_cp2

0x11d6,	// (0x00057784) list_single_graphic_pane_g2_cp2_ParamLimits

0x11d6,	// (0x00057784) list_single_graphic_pane_g2_cp2

0x1609,	// (0x00057bb7) list_single_graphic_pane_g3_cp2

0x9cf8,	// (0x000602a6) list_single_graphic_pane_t1_cp2_ParamLimits

0x9cf8,	// (0x000602a6) list_single_graphic_pane_t1_cp2

0x11d6,	// (0x00057784) list_single_number_pane_g1_cp2_ParamLimits

0x11d6,	// (0x00057784) list_single_number_pane_g1_cp2

0x1609,	// (0x00057bb7) list_single_number_pane_g2_cp2

0x9cf8,	// (0x000602a6) list_single_number_pane_t1_cp2_ParamLimits

0x9cf8,	// (0x000602a6) list_single_number_pane_t1_cp2

0x9d0e,	// (0x000602bc) list_single_number_pane_t2_cp2_ParamLimits

0x9d0e,	// (0x000602bc) list_single_number_pane_t2_cp2

0x1449,	// (0x000579f7) list_double2_pane_g1_cp2_ParamLimits

0x1449,	// (0x000579f7) list_double2_pane_g1_cp2

0x145a,	// (0x00057a08) list_double2_pane_g2_cp2

0x157c,	// (0x00057b2a) list_double2_pane_t1_cp2_ParamLimits

0x157c,	// (0x00057b2a) list_double2_pane_t1_cp2

0x1592,	// (0x00057b40) list_double2_pane_t2_cp2_ParamLimits

0x1592,	// (0x00057b40) list_double2_pane_t2_cp2

0x15a4,	// (0x00057b52) list_double_pane_g1_cp2_ParamLimits

0x15a4,	// (0x00057b52) list_double_pane_g1_cp2

0x15b0,	// (0x00057b5e) list_double_pane_g2_cp2

0x15b8,	// (0x00057b66) list_double_pane_t1_cp2_ParamLimits

0x15b8,	// (0x00057b66) list_double_pane_t1_cp2

0x15ce,	// (0x00057b7c) list_double_pane_t2_cp2_ParamLimits

0x15ce,	// (0x00057b7c) list_double_pane_t2_cp2

0x696a,	// (0x0005cf18) list_single_pane_cp2_g3

0x11d6,	// (0x00057784) list_single_pane_g1_cp2_ParamLimits

0x11d6,	// (0x00057784) list_single_pane_g1_cp2

0x1609,	// (0x00057bb7) list_single_pane_g2_cp2

0x1611,	// (0x00057bbf) list_single_pane_t1_cp2_ParamLimits

0x1611,	// (0x00057bbf) list_single_pane_t1_cp2

0x6972,	// (0x0005cf20) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6972,	// (0x0005cf20) list_single_large_graphic_pane_g1_cp2

0x1629,	// (0x00057bd7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1629,	// (0x00057bd7) list_single_large_graphic_pane_g2_cp2

0x1635,	// (0x00057be3) list_single_large_graphic_pane_g3_cp2

0x697e,	// (0x0005cf2c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x697e,	// (0x0005cf2c) list_single_large_graphic_pane_g4_cp1

0x163d,	// (0x00057beb) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x163d,	// (0x00057beb) list_single_large_graphic_pane_t1_cp2

0x9cc4,	// (0x00060272) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9cc4,	// (0x00060272) list_single_graphic_heading_pane_g1_cp2

0x9c91,	// (0x0006023f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9c91,	// (0x0006023f) list_single_graphic_heading_pane_g4_cp2

0x1609,	// (0x00057bb7) list_single_graphic_heading_pane_g5_cp2

0x9cd0,	// (0x0006027e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9cd0,	// (0x0006027e) list_single_graphic_heading_pane_t1_cp2

0x9ce6,	// (0x00060294) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9ce6,	// (0x00060294) list_single_graphic_heading_pane_t2_cp2

0x9c85,	// (0x00060233) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9c85,	// (0x00060233) list_single_2graphic_pane_g1_cp2

0x9c91,	// (0x0006023f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9c91,	// (0x0006023f) list_single_2graphic_pane_g2_cp2

0x1609,	// (0x00057bb7) list_single_2graphic_pane_g3_cp2

0x9ca2,	// (0x00060250) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9ca2,	// (0x00060250) list_single_2graphic_pane_g4_cp2

0x9cae,	// (0x0006025c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9cae,	// (0x0006025c) list_single_2graphic_pane_t1_cp2

0xe0ad,	// (0x0006465b) list_highlight_pane_g10_cp1

0x986d,	// (0x0005fe1b) list_highlight_pane_g1_cp1

0x9875,	// (0x0005fe23) list_highlight_pane_g2_cp1

0x987d,	// (0x0005fe2b) list_highlight_pane_g3_cp1

0x9885,	// (0x0005fe33) list_highlight_pane_g4_cp1

0x988d,	// (0x0005fe3b) list_highlight_pane_g5_cp1

0x9895,	// (0x0005fe43) list_highlight_pane_g6_cp1

0x989d,	// (0x0005fe4b) list_highlight_pane_g7_cp1

0x98a5,	// (0x0005fe53) list_highlight_pane_g8_cp1

0x98ad,	// (0x0005fe5b) list_highlight_pane_g9_cp1

0x9795,	// (0x0005fd43) form_field_slider_pane_t3

0x97a3,	// (0x0005fd51) form_field_slider_pane_t4

0x97b1,	// (0x0005fd5f) slider_form_pane_ParamLimits

0x97b1,	// (0x0005fd5f) slider_form_pane

0xe0b7,	// (0x00064665) control_abbreviations

0xe0b7,	// (0x00064665) control_conventions

0xe0b7,	// (0x00064665) control_definitions

0xe0b7,	// (0x00064665) format_table_attribute

0x9f77,	// (0x00060525) bg_popup_preview_window_pane_g9

0xe0b7,	// (0x00064665) format_table_data2

0xe0b7,	// (0x00064665) format_table_data3

0xe0b7,	// (0x00064665) format_table_data_example

0x0008,

0xe0b7,	// (0x00064665) intro_purpose

0xf8c5,	// (0x00065e73) bg_popup_preview_window_pane_g

0xe0b7,	// (0x00064665) texts_category

0xe0b7,	// (0x00064665) texts_graphics

0x1653,	// (0x00057c01) text_digital

0x1662,	// (0x00057c10) text_primary

0x1671,	// (0x00057c1f) text_primary_small

0x1680,	// (0x00057c2e) text_secondary

0x168f,	// (0x00057c3d) text_title

0xa6f7,	// (0x00060ca5) bg_passive_tab_pane_g1_cp3_srt

0x676b,	// (0x0005cd19) bg_passive_tab_pane_g2_cp3_srt

0xa700,	// (0x00060cae) bg_passive_tab_pane_g3_cp3_srt

0xe105,	// (0x000646b3) bg_active_tab_pane_cp3_srt_ParamLimits

0xe105,	// (0x000646b3) bg_active_tab_pane_cp3_srt

0xa709,	// (0x00060cb7) tabs_4_active_pane_srt_g1

0xa711,	// (0x00060cbf) tabs_4_active_pane_srt_t1_ParamLimits

0xa711,	// (0x00060cbf) tabs_4_active_pane_srt_t1

0xa6f7,	// (0x00060ca5) bg_active_tab_pane_g1_cp3_copy1

0x676b,	// (0x0005cd19) bg_active_tab_pane_g2_cp3_copy1

0xa700,	// (0x00060cae) bg_active_tab_pane_g3_cp3_copy1

0xe105,	// (0x000646b3) tabs_2_long_active_pane_srt_ParamLimits

0xe105,	// (0x000646b3) tabs_2_long_active_pane_srt

0xe105,	// (0x000646b3) tabs_2_long_passive_pane_srt_ParamLimits

0xe105,	// (0x000646b3) tabs_2_long_passive_pane_srt

0x6220,	// (0x0005c7ce) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6220,	// (0x0005c7ce) bg_passive_tab_pane_cp4_srt

0xa398,	// (0x00060946) bg_passive_tab_pane_g1_cp4_srt

0x676b,	// (0x0005cd19) bg_passive_tab_pane_g2_cp4_srt

0xa3a1,	// (0x0006094f) bg_passive_tab_pane_g3_cp4_srt

0x61ff,	// (0x0005c7ad) bg_active_tab_pane_cp4_srt_ParamLimits

0x61ff,	// (0x0005c7ad) bg_active_tab_pane_cp4_srt

0xa3aa,	// (0x00060958) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa3aa,	// (0x00060958) tabs_2_long_active_pane_srt_t1

0xa398,	// (0x00060946) bg_active_tab_pane_g1_cp4_srt

0x676b,	// (0x0005cd19) bg_active_tab_pane_g2_cp4_srt

0xa3a1,	// (0x0006094f) bg_active_tab_pane_g3_cp4_srt

0xe22f,	// (0x000647dd) tabs_3_long_active_pane_srt_ParamLimits

0xe22f,	// (0x000647dd) tabs_3_long_active_pane_srt

0xe22f,	// (0x000647dd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe22f,	// (0x000647dd) tabs_3_long_passive_pane_cp_srt

0xe22f,	// (0x000647dd) tabs_3_long_passive_pane_srt_ParamLimits

0xe22f,	// (0x000647dd) tabs_3_long_passive_pane_srt

0x6220,	// (0x0005c7ce) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6220,	// (0x0005c7ce) bg_passive_tab_pane_cp5_srt

0x68f8,	// (0x0005cea6) bg_passive_tab_pane_g1_cp5_srt

0x676b,	// (0x0005cd19) bg_passive_tab_pane_g2_cp5_srt

0x6901,	// (0x0005ceaf) bg_passive_tab_pane_g3_cp5_srt

0x61ff,	// (0x0005c7ad) bg_active_tab_pane_cp5_srt_ParamLimits

0x61ff,	// (0x0005c7ad) bg_active_tab_pane_cp5_srt

0xa386,	// (0x00060934) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa386,	// (0x00060934) tabs_3_long_active_pane_srt_t1

0x68f8,	// (0x0005cea6) bg_active_tab_pane_g1_cp5_srt

0x676b,	// (0x0005cd19) bg_active_tab_pane_g2_cp5_srt

0x6901,	// (0x0005ceaf) bg_active_tab_pane_g3_cp5_srt

0xa378,	// (0x00060926) navi_text_pane_srt_t1

0xa370,	// (0x0006091e) navi_icon_pane_srt_g1

0x177a,	// (0x00057d28) midp_editing_number_pane_srt

0x169e,	// (0x00057c4c) midp_ticker_pane_srt

0x1782,	// (0x00057d30) midp_ticker_pane_srt_g1

0x178a,	// (0x00057d38) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x00065cf6) midp_ticker_pane_srt_g

0x1792,	// (0x00057d40) midp_ticker_pane_srt_t1

0xa361,	// (0x0006090f) midp_editing_number_pane_t1_copy1

0x6998,	// (0x0005cf46) listscroll_midp_pane

0x6998,	// (0x0005cf46) midp_form_pane

0x6a0a,	// (0x0005cfb8) midp_info_popup_window_ParamLimits

0x6a0a,	// (0x0005cfb8) midp_info_popup_window

0xf212,	// (0x000657c0) bg_popup_sub_pane_cp50_ParamLimits

0xf212,	// (0x000657c0) bg_popup_sub_pane_cp50

0x94a1,	// (0x0005fa4f) listscroll_midp_info_pane_ParamLimits

0x94a1,	// (0x0005fa4f) listscroll_midp_info_pane

0x9481,	// (0x0005fa2f) listscroll_form_midp_pane_ParamLimits

0x9481,	// (0x0005fa2f) listscroll_form_midp_pane

0x948d,	// (0x0005fa3b) scroll_bar_cp050

0x9461,	// (0x0005fa0f) list_midp_pane

0xb1e2,	// (0x00061790) signal_pane_g2_cp

0x939b,	// (0x0005f949) listscroll_midp_info_pane_t1_ParamLimits

0x939b,	// (0x0005f949) listscroll_midp_info_pane_t1

0x93b3,	// (0x0005f961) listscroll_midp_info_pane_t2_ParamLimits

0x93b3,	// (0x0005f961) listscroll_midp_info_pane_t2

0x93f1,	// (0x0005f99f) listscroll_midp_info_pane_t3_ParamLimits

0x93f1,	// (0x0005f99f) listscroll_midp_info_pane_t3

0x942b,	// (0x0005f9d9) listscroll_midp_info_pane_t4_ParamLimits

0x942b,	// (0x0005f9d9) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00065dae) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00065dae) listscroll_midp_info_pane_t

0xf267,	// (0x00065815) scroll_pane_cp21

0x933b,	// (0x0005f8e9) form_midp_field_choice_group_pane

0x9344,	// (0x0005f8f2) form_midp_field_text_pane

0x9381,	// (0x0005f92f) form_midp_field_time_pane

0x9389,	// (0x0005f937) form_midp_gauge_slider_pane

0x9392,	// (0x0005f940) form_midp_gauge_wait_pane

0xe0b7,	// (0x00064665) form_midp_image_pane

0x7785,	// (0x0005dd33) list_single_midp_pane_ParamLimits

0x7785,	// (0x0005dd33) list_single_midp_pane

0x92f0,	// (0x0005f89e) form_midp_field_text_pane_t1

0x90ba,	// (0x0005f668) input_focus_pane_cp050

0x932a,	// (0x0005f8d8) list_midp_form_text_pane

0x92bf,	// (0x0005f86d) form_midp_field_choice_group_pane_t1

0x92cd,	// (0x0005f87b) input_focus_pane_cp051

0x92e1,	// (0x0005f88f) list_midp_choice_pane

0xe0b7,	// (0x00064665) status_idle_pane

0x92a3,	// (0x0005f851) form_midp_field_time_pane_t1

0xe0ad,	// (0x0006465b) wait_anim_pane_g2_copy1

0x92b1,	// (0x0005f85f) form_midp_field_time_pane_t2

0x0001,

0x16fe,	// (0x00057cac) aid_navinavi_width_2_pane

0xf7fb,	// (0x00065da9) form_midp_field_time_pane_t

0xe0b7,	// (0x00064665) input_focus_pane_cp052

0xe0b7,	// (0x00064665) bg_input_focus_pane_cp040

0x9263,	// (0x0005f811) form_midp_gauge_slider_pane_t1

0x9271,	// (0x0005f81f) form_midp_gauge_slider_pane_t2

0x927f,	// (0x0005f82d) form_midp_gauge_slider_pane_t3

0x928d,	// (0x0005f83b) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00065da0) form_midp_gauge_slider_pane_t

0x929b,	// (0x0005f849) form_midp_slider_pane

0xe105,	// (0x000646b3) bg_input_focus_pane_cp041_ParamLimits

0xe105,	// (0x000646b3) bg_input_focus_pane_cp041

0x9230,	// (0x0005f7de) form_midp_gauge_wait_pane_t1_ParamLimits

0x9230,	// (0x0005f7de) form_midp_gauge_wait_pane_t1

0x9242,	// (0x0005f7f0) form_midp_gauge_wait_pane_t2_ParamLimits

0x9242,	// (0x0005f7f0) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00065d9b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00065d9b) form_midp_gauge_wait_pane_t

0x9254,	// (0x0005f802) form_midp_wait_pane_ParamLimits

0x9254,	// (0x0005f802) form_midp_wait_pane

0x91fa,	// (0x0005f7a8) form_midp_image_pane_g1

0x9203,	// (0x0005f7b1) form_midp_image_pane_t1

0x9212,	// (0x0005f7c0) form_midp_image_pane_t2

0x9221,	// (0x0005f7cf) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00065d94) form_midp_image_pane_t

0x91f1,	// (0x0005f79f) list_single_midp_pane_g1

0x3c32,	// (0x0005a1e0) list_single_midp_pane_t1

0x91c8,	// (0x0005f776) list_midp_form_item_pane_ParamLimits

0x91c8,	// (0x0005f776) list_midp_form_item_pane

0x16a6,	// (0x00057c54) list_midp_form_item_pane_t1

0x16b5,	// (0x00057c63) midp_ticker_pane_g1

0x16c1,	// (0x00057c6f) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00065cdc) midp_ticker_pane_g

0x16cd,	// (0x00057c7b) midp_ticker_pane_t1

0xa5ae,	// (0x00060b5c) midp_editing_number_pane_t1

0xa58c,	// (0x00060b3a) midp_editing_number_pane

0xa59b,	// (0x00060b49) midp_ticker_pane

0xa351,	// (0x000608ff) ai_message_heading_pane

0xe0b7,	// (0x00064665) bg_popup_window_pane_cp14

0xa359,	// (0x00060907) listscroll_ai_message_pane

0xa2db,	// (0x00060889) ai_message_heading_pane_g1_ParamLimits

0xa2db,	// (0x00060889) ai_message_heading_pane_g1

0xa2e7,	// (0x00060895) ai_message_heading_pane_g2_ParamLimits

0xa2e7,	// (0x00060895) ai_message_heading_pane_g2

0xa2f3,	// (0x000608a1) ai_message_heading_pane_g3_ParamLimits

0xa2f3,	// (0x000608a1) ai_message_heading_pane_g3

0xa2ff,	// (0x000608ad) ai_message_heading_pane_g4_ParamLimits

0xa2ff,	// (0x000608ad) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x00065ed5) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x00065ed5) ai_message_heading_pane_g

0xa30b,	// (0x000608b9) ai_message_heading_pane_t1_ParamLimits

0xa30b,	// (0x000608b9) ai_message_heading_pane_t1

0xa325,	// (0x000608d3) ai_message_heading_pane_t2_ParamLimits

0xa325,	// (0x000608d3) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00065ede) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00065ede) ai_message_heading_pane_t

0xa337,	// (0x000608e5) bg_popup_heading_pane_cp1_ParamLimits

0xa337,	// (0x000608e5) bg_popup_heading_pane_cp1

0xa2c9,	// (0x00060877) list_ai_message_pane_ParamLimits

0xa2c9,	// (0x00060877) list_ai_message_pane

0xf267,	// (0x00065815) scroll_pane_cp10

0xa265,	// (0x00060813) list_ai_message_pane_g1

0xa26d,	// (0x0006081b) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x00065eb2) list_ai_message_pane_g

0xa275,	// (0x00060823) list_ai_message_pane_t1_ParamLimits

0xa275,	// (0x00060823) list_ai_message_pane_t1

0xa28a,	// (0x00060838) list_ai_message_pane_t2_ParamLimits

0xa28a,	// (0x00060838) list_ai_message_pane_t2

0xa29f,	// (0x0006084d) list_ai_message_pane_t3_ParamLimits

0xa29f,	// (0x0006084d) list_ai_message_pane_t3

0xa2b4,	// (0x00060862) list_ai_message_pane_t4_ParamLimits

0xa2b4,	// (0x00060862) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00065eb7) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00065eb7) list_ai_message_pane_t

0xa250,	// (0x000607fe) cell_ai_soft_ind_pane_ParamLimits

0xa250,	// (0x000607fe) cell_ai_soft_ind_pane

0x16df,	// (0x00057c8d) cell_ai_soft_ind_pane_g1_ParamLimits

0x16df,	// (0x00057c8d) cell_ai_soft_ind_pane_g1

0xe0b7,	// (0x00064665) grid_highlight_cp1

0x16ec,	// (0x00057c9a) text_secondary_cp56_ParamLimits

0x16ec,	// (0x00057c9a) text_secondary_cp56

0xa225,	// (0x000607d3) example_general_pane_ParamLimits

0xa225,	// (0x000607d3) example_general_pane

0xa231,	// (0x000607df) example_parent_pane_g1_ParamLimits

0xa231,	// (0x000607df) example_parent_pane_g1

0xa23d,	// (0x000607eb) example_parent_pane_t1_ParamLimits

0xa23d,	// (0x000607eb) example_parent_pane_t1

0x70ec,	// (0x0005d69a) popup_preview_text_window_ParamLimits

0x70ec,	// (0x0005d69a) popup_preview_text_window

0x1601,	// (0x00057baf) list_single_pane_cp2_g4

0xe2e5,	// (0x00064893) bg_popup_preview_window_pane_ParamLimits

0xe2e5,	// (0x00064893) bg_popup_preview_window_pane

0x9f7f,	// (0x0006052d) popup_preview_text_window_t1_ParamLimits

0x9f7f,	// (0x0006052d) popup_preview_text_window_t1

0x9f9d,	// (0x0006054b) popup_preview_text_window_t2_ParamLimits

0x9f9d,	// (0x0006054b) popup_preview_text_window_t2

0x9fe6,	// (0x00060594) popup_preview_text_window_t3_ParamLimits

0x9fe6,	// (0x00060594) popup_preview_text_window_t3

0xa02b,	// (0x000605d9) popup_preview_text_window_t4_ParamLimits

0xa02b,	// (0x000605d9) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00065e86) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00065e86) popup_preview_text_window_t

0xa0a9,	// (0x00060657) scroll_pane_cp11

0x902e,	// (0x0005f5dc) bg_popup_preview_window_pane_g1

0x9f3f,	// (0x000604ed) bg_popup_preview_window_pane_g2

0x9f47,	// (0x000604f5) bg_popup_preview_window_pane_g3

0x9f4f,	// (0x000604fd) bg_popup_preview_window_pane_g4

0x9f57,	// (0x00060505) bg_popup_preview_window_pane_g5

0x9f5f,	// (0x0006050d) bg_popup_preview_window_pane_g6

0x9f67,	// (0x00060515) bg_popup_preview_window_pane_g7

0x9f6f,	// (0x0006051d) bg_popup_preview_window_pane_g8

0x51b9,	// (0x0005b767) aid_popup_width_pane

0x70ca,	// (0x0005d678) popup_midp_note_alarm_window_ParamLimits

0x70ca,	// (0x0005d678) popup_midp_note_alarm_window

0xf129,	// (0x000656d7) data_form_pane_ParamLimits

0x604b,	// (0x0005c5f9) form_field_data_pane_g1

0x6055,	// (0x0005c603) form_field_data_pane_t1_ParamLimits

0xf135,	// (0x000656e3) input_focus_pane_ParamLimits

0x3ab8,	// (0x0005a066) data_form_wide_pane_ParamLimits

0x3ac9,	// (0x0005a077) form_field_data_wide_pane_g1

0x3ad5,	// (0x0005a083) form_field_data_wide_pane_t1_ParamLimits

0xf029,	// (0x000655d7) input_focus_pane_cp6_ParamLimits

0x61b6,	// (0x0005c764) input_popup_find_pane_g1_ParamLimits

0x61b6,	// (0x0005c764) input_popup_find_pane_g1

0x6356,	// (0x0005c904) aid_navi_side_left_pane

0x636b,	// (0x0005c919) aid_navi_side_right_pane

0x9968,	// (0x0005ff16) bg_popup_window_pane_cp30_ParamLimits

0x9968,	// (0x0005ff16) bg_popup_window_pane_cp30

0x99e2,	// (0x0005ff90) popup_midp_note_alarm_window_g1_ParamLimits

0x99e2,	// (0x0005ff90) popup_midp_note_alarm_window_g1

0x9a12,	// (0x0005ffc0) popup_midp_note_alarm_window_t1_ParamLimits

0x9a12,	// (0x0005ffc0) popup_midp_note_alarm_window_t1

0x9ab3,	// (0x00060061) popup_midp_note_alarm_window_t2_ParamLimits

0x9ab3,	// (0x00060061) popup_midp_note_alarm_window_t2

0x9b61,	// (0x0006010f) popup_midp_note_alarm_window_t3_ParamLimits

0x9b61,	// (0x0006010f) popup_midp_note_alarm_window_t3

0x9b89,	// (0x00060137) popup_midp_note_alarm_window_t4_ParamLimits

0x9b89,	// (0x00060137) popup_midp_note_alarm_window_t4

0x9ba9,	// (0x00060157) popup_midp_note_alarm_window_t5_ParamLimits

0x9ba9,	// (0x00060157) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00065e23) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00065e23) popup_midp_note_alarm_window_t

0x9c55,	// (0x00060203) wait_bar_pane_cp1_ParamLimits

0x9c55,	// (0x00060203) wait_bar_pane_cp1

0xe0b7,	// (0x00064665) wait_anim_pane_copy1

0xe0b7,	// (0x00064665) wait_border_pane_copy1

0x965e,	// (0x0005fc0c) wait_border_pane_g1_copy1

0x3aef,	// (0x0005a09d) form_field_popup_pane_g1

0x606d,	// (0x0005c61b) form_field_popup_pane_t1_ParamLimits

0xf135,	// (0x000656e3) input_focus_pane_cp7_ParamLimits

0xf163,	// (0x00065711) list_form_pane_ParamLimits

0x3af7,	// (0x0005a0a5) form_field_popup_wide_pane_g1

0x3aff,	// (0x0005a0ad) form_field_popup_wide_pane_t1_ParamLimits

0xf135,	// (0x000656e3) input_focus_pane_cp8_ParamLimits

0xf16f,	// (0x0006571d) list_form_wide_pane_ParamLimits

0xa794,	// (0x00060d42) aid_size_cell_graphic_pane

0x60e8,	// (0x0005c696) data_form_pane_t1_ParamLimits

0x79f7,	// (0x0005dfa5) data_form_wide_pane_t1_ParamLimits

0x73d1,	// (0x0005d97f) bg_status_flat_pane

0x55c2,	// (0x0005bb70) title_pane_t1_ParamLimits

0xe0cd,	// (0x0006467b) title_pane_t2_ParamLimits

0xe0f3,	// (0x000646a1) title_pane_t3_ParamLimits

0xf532,	// (0x00065ae0) title_pane_t_ParamLimits

0xf510,	// (0x00065abe) level_1_signal_ParamLimits

0x11e2,	// (0x00057790) level_2_signal_ParamLimits

0x11ef,	// (0x0005779d) level_3_signal_ParamLimits

0x11fc,	// (0x000577aa) level_4_signal_ParamLimits

0x1209,	// (0x000577b7) level_5_signal_ParamLimits

0x1216,	// (0x000577c4) level_6_signal_ParamLimits

0x1223,	// (0x000577d1) level_7_signal_ParamLimits

0xf510,	// (0x00065abe) level_1_battery_ParamLimits

0x11e2,	// (0x00057790) level_2_battery_ParamLimits

0x11ef,	// (0x0005779d) level_3_battery_ParamLimits

0x11fc,	// (0x000577aa) level_4_battery_ParamLimits

0x1209,	// (0x000577b7) level_5_battery_ParamLimits

0x1216,	// (0x000577c4) level_6_battery_ParamLimits

0x1223,	// (0x000577d1) level_7_battery_ParamLimits

0x986d,	// (0x0005fe1b) bg_status_flat_pane_g1

0x9875,	// (0x0005fe23) bg_status_flat_pane_g2

0x987d,	// (0x0005fe2b) bg_status_flat_pane_g3

0x9885,	// (0x0005fe33) bg_status_flat_pane_g4

0x988d,	// (0x0005fe3b) bg_status_flat_pane_g5

0x9895,	// (0x0005fe43) bg_status_flat_pane_g6

0x989d,	// (0x0005fe4b) bg_status_flat_pane_g7

0x5632,	// (0x0005bbe0) tabs_3_active_pane_t1_ParamLimits

0x5632,	// (0x0005bbe0) tabs_3_passive_pane_t1_ParamLimits

0x564c,	// (0x0005bbfa) tabs_4_active_pane_t1_ParamLimits

0x564c,	// (0x0005bbfa) tabs_4_1_passive_pane_t1_ParamLimits

0x61ed,	// (0x0005c79b) tabs_2_active_pane_t1_ParamLimits

0x61ed,	// (0x0005c79b) tabs_2_passive_pane_t1_ParamLimits

0x61ff,	// (0x0005c7ad) bg_active_tab_pane_cp4_ParamLimits

0x620d,	// (0x0005c7bb) tabs_2_long_active_pane_t1_ParamLimits

0x6220,	// (0x0005c7ce) bg_passive_tab_pane_cp4_ParamLimits

0x76d2,	// (0x0005dc80) list_single_midp_graphic_pane_t1_ParamLimits

0x61ff,	// (0x0005c7ad) bg_active_tab_pane_cp5_ParamLimits

0x622c,	// (0x0005c7da) tabs_3_long_active_pane_t1_ParamLimits

0x6220,	// (0x0005c7ce) bg_passive_tab_pane_cp5_ParamLimits

0x76d2,	// (0x0005dc80) list_single_midp_graphic_pane_t1

0x73d1,	// (0x0005d97f) bg_status_flat_pane_ParamLimits

0x749a,	// (0x0005da48) indicator_pane_cp2_ParamLimits

0x749a,	// (0x0005da48) indicator_pane_cp2

0x75c5,	// (0x0005db73) navi_pane_srt_ParamLimits

0x75c5,	// (0x0005db73) navi_pane_srt

0x75e9,	// (0x0005db97) popup_clock_digital_analogue_window_cp1

0xe149,	// (0x000646f7) indicator_pane_t1

0x169e,	// (0x00057c4c) copy_highlight_pane

0x169e,	// (0x00057c4c) cursor_graphics_pane

0x169e,	// (0x00057c4c) graphic_within_text_pane

0x169e,	// (0x00057c4c) link_highlight_pane

0xa06c,	// (0x0006061a) popup_preview_text_window_t5_ParamLimits

0xa06c,	// (0x0006061a) popup_preview_text_window_t5

0x1706,	// (0x00057cb4) cursor_digital_pane

0x1706,	// (0x00057cb4) cursor_primary_pane

0x1717,	// (0x00057cc5) cursor_primary_small_pane

0x171f,	// (0x00057ccd) cursor_secondary_pane

0x1727,	// (0x00057cd5) cursor_title_pane

0x1706,	// (0x00057cb4) link_highlight_digital_pane

0x170e,	// (0x00057cbc) link_highlight_primary_pane

0x1717,	// (0x00057cc5) link_highlight_primary_small_pane

0x171f,	// (0x00057ccd) link_highlight_secondary_pane

0x1727,	// (0x00057cd5) link_highlight_title_pane

0x1706,	// (0x00057cb4) copy_highlight_digital_pane

0x1706,	// (0x00057cb4) copy_highlight_primary_pane

0x1717,	// (0x00057cc5) copy_highlight_primary_small_pane

0x171f,	// (0x00057ccd) copy_highlight_secondary_pane

0x1727,	// (0x00057cd5) copy_highlight_title_pane

0x171f,	// (0x00057ccd) graphic_text_digital_pane

0x990b,	// (0x0005feb9) graphic_text_primary_pane

0x9914,	// (0x0005fec2) graphic_text_primary_small_pane

0x1717,	// (0x00057cc5) graphic_text_secondary_pane

0x1706,	// (0x00057cb4) graphic_text_title_pane

0x6a62,	// (0x0005d010) cursor_primary_pane_g1

0x98fd,	// (0x0005feab) cursor_text_primary_t1

0x98e5,	// (0x0005fe93) cursor_primary_small_pane_g1

0x98ef,	// (0x0005fe9d) cursor_text_primary_small_t1

0x98cd,	// (0x0005fe7b) cursor_primary_small_pane_g1_copy1

0x98d7,	// (0x0005fe85) cursor_text_primary_small_t1_copy1

0x98b5,	// (0x0005fe63) cursor_text_title_t1

0x98c3,	// (0x0005fe71) cursor_title_pane_g1

0x6a62,	// (0x0005d010) cursor_digital_pane_g1

0x172f,	// (0x00057cdd) cursor_text_digital_t1

0x173d,	// (0x00057ceb) link_highlight_primary_pane_g1

0x985e,	// (0x0005fe0c) link_highlight_primary_pane_t1

0x173d,	// (0x00057ceb) link_highlight_primary_small_pane_g1

0x1745,	// (0x00057cf3) link_highlight_primary_small_pane_t1

0x173d,	// (0x00057ceb) link_highlight_secondary_pane_g1

0x1754,	// (0x00057d02) link_highlight_secondary_pane_t1

0x97c3,	// (0x0005fd71) link_highlight_title_pane_g1

0x97da,	// (0x0005fd88) link_highlight_title_pane_t1

0x97c3,	// (0x0005fd71) link_highlight_digital_pane_g1

0x97cb,	// (0x0005fd79) link_highlight_digital_pane_t1

0x967d,	// (0x0005fc2b) copy_highlight_primary_pane_g1

0x96a3,	// (0x0005fc51) copy_highlight_primary_pane_t1

0x967d,	// (0x0005fc2b) copy_highlight_primary_small_pane_g1

0x9694,	// (0x0005fc42) copy_highlight_primary_small_pane_t1

0x1763,	// (0x00057d11) copy_highlight_secondary_pane_g1

0x176b,	// (0x00057d19) copy_highlight_secondary_pane_t1

0x967d,	// (0x0005fc2b) copy_highlight_title_pane_g1

0x9685,	// (0x0005fc33) copy_highlight_title_pane_t1

0x967d,	// (0x0005fc2b) copy_highlight_digital_pane_g1

0xa962,	// (0x00060f10) copy_highlight_digital_pane_t1

0xa8b6,	// (0x00060e64) graphic_text_primary_pane_g1

0xa946,	// (0x00060ef4) graphic_text_primary_pane_t1

0xa954,	// (0x00060f02) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00065f52) graphic_text_primary_pane_t

0xa922,	// (0x00060ed0) graphic_text_primary_small_pane_g1

0xa92a,	// (0x00060ed8) graphic_text_primary_small_pane_t1

0xa938,	// (0x00060ee6) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00065f4d) graphic_text_primary_small_pane_t

0xa8fe,	// (0x00060eac) graphic_text_secondary_pane_g1

0xa906,	// (0x00060eb4) graphic_text_secondary_pane_t1

0xa914,	// (0x00060ec2) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00065f48) graphic_text_secondary_pane_t

0xa8da,	// (0x00060e88) graphic_text_title_pane_g1

0xa8e2,	// (0x00060e90) graphic_text_title_pane_t1

0xa8f0,	// (0x00060e9e) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00065f43) graphic_text_title_pane_t

0xa8b6,	// (0x00060e64) graphic_text_digital_pane_g1

0xa8be,	// (0x00060e6c) graphic_text_digital_pane_t1

0xa8cc,	// (0x00060e7a) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00065f3e) graphic_text_digital_pane_t

0xe105,	// (0x000646b3) navi_icon_pane_srt_ParamLimits

0xe105,	// (0x000646b3) navi_icon_pane_srt

0xe0b7,	// (0x00064665) navi_midp_pane_srt

0xe0b7,	// (0x00064665) navi_navi_pane_srt

0xe105,	// (0x000646b3) navi_text_pane_srt_ParamLimits

0xe105,	// (0x000646b3) navi_text_pane_srt

0xa881,	// (0x00060e2f) navi_navi_icon_text_pane_srt

0xa889,	// (0x00060e37) navi_navi_pane_srt_g1_ParamLimits

0xa889,	// (0x00060e37) navi_navi_pane_srt_g1

0xa89b,	// (0x00060e49) navi_navi_pane_srt_g2_ParamLimits

0xa89b,	// (0x00060e49) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00065f39) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00065f39) navi_navi_pane_srt_g

0xa8ad,	// (0x00060e5b) navi_navi_tabs_pane_srt

0xa881,	// (0x00060e2f) navi_navi_text_pane_srt

0xa881,	// (0x00060e2f) navi_navi_volume_pane_srt

0xa872,	// (0x00060e20) navi_navi_text_pane_srt_t1

0x7b4e,	// (0x0005e0fc) navi_navi_volume_pane_srt_g1

0x7b56,	// (0x0005e104) volume_small_pane_srt_ParamLimits

0x7b56,	// (0x0005e104) volume_small_pane_srt

0x6a6c,	// (0x0005d01a) volume_small_pane_srt_g1_ParamLimits

0x6a6c,	// (0x0005d01a) volume_small_pane_srt_g1

0x6a7c,	// (0x0005d02a) volume_small_pane_srt_g2_ParamLimits

0x6a7c,	// (0x0005d02a) volume_small_pane_srt_g2

0x6a8d,	// (0x0005d03b) volume_small_pane_srt_g3_ParamLimits

0x6a8d,	// (0x0005d03b) volume_small_pane_srt_g3

0x6a9e,	// (0x0005d04c) volume_small_pane_srt_g4_ParamLimits

0x6a9e,	// (0x0005d04c) volume_small_pane_srt_g4

0x6aaf,	// (0x0005d05d) volume_small_pane_srt_g5_ParamLimits

0x6aaf,	// (0x0005d05d) volume_small_pane_srt_g5

0x6ac0,	// (0x0005d06e) volume_small_pane_srt_g6_ParamLimits

0x6ac0,	// (0x0005d06e) volume_small_pane_srt_g6

0x6ad1,	// (0x0005d07f) volume_small_pane_srt_g7_ParamLimits

0x6ad1,	// (0x0005d07f) volume_small_pane_srt_g7

0x6ae2,	// (0x0005d090) volume_small_pane_srt_g8_ParamLimits

0x6ae2,	// (0x0005d090) volume_small_pane_srt_g8

0x6af3,	// (0x0005d0a1) volume_small_pane_srt_g9_ParamLimits

0x6af3,	// (0x0005d0a1) volume_small_pane_srt_g9

0x6b04,	// (0x0005d0b2) volume_small_pane_srt_g10_ParamLimits

0x6b04,	// (0x0005d0b2) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00065ce1) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00065ce1) volume_small_pane_srt_g

0x5899,	// (0x0005be47) query_popup_data_pane_cp2

0xa858,	// (0x00060e06) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa858,	// (0x00060e06) navi_navi_icon_text_pane_srt_t1

0x990b,	// (0x0005feb9) navi_tabs_2_long_pane_srt

0x990b,	// (0x0005feb9) navi_tabs_2_pane_srt

0x990b,	// (0x0005feb9) navi_tabs_3_long_pane_srt

0x990b,	// (0x0005feb9) navi_tabs_3_pane_srt

0x990b,	// (0x0005feb9) navi_tabs_4_pane_srt

0x7b2e,	// (0x0005e0dc) tabs_2_active_pane_srt_ParamLimits

0x7b2e,	// (0x0005e0dc) tabs_2_active_pane_srt

0x7b3e,	// (0x0005e0ec) tabs_2_passive_pane_srt_ParamLimits

0x7b3e,	// (0x0005e0ec) tabs_2_passive_pane_srt

0xf51d,	// (0x00065acb) bg_passive_tab_pane_cp1_srt_ParamLimits

0xf51d,	// (0x00065acb) bg_passive_tab_pane_cp1_srt

0xa824,	// (0x00060dd2) bg_passive_tab_pane_g1_cp1_srt

0x676b,	// (0x0005cd19) bg_passive_tab_pane_g2_cp1_srt

0xa82d,	// (0x00060ddb) bg_passive_tab_pane_g3_cp1_srt

0xe105,	// (0x000646b3) bg_active_tab_pane_cp1_srt_ParamLimits

0xe105,	// (0x000646b3) bg_active_tab_pane_cp1_srt

0xa836,	// (0x00060de4) tabs_2_active_pane_srt_g1

0xa83e,	// (0x00060dec) tabs_2_active_pane_srt_t1_ParamLimits

0xa83e,	// (0x00060dec) tabs_2_active_pane_srt_t1

0xa824,	// (0x00060dd2) bg_active_tab_pane_g1_cp1_srt

0x676b,	// (0x0005cd19) bg_active_tab_pane_g2_cp1_srt

0xa82d,	// (0x00060ddb) bg_active_tab_pane_g3_cp1_srt

0x7afb,	// (0x0005e0a9) tabs_3_active_pane_srt_ParamLimits

0x7afb,	// (0x0005e0a9) tabs_3_active_pane_srt

0x7b0c,	// (0x0005e0ba) tabs_3_passive_pane_cp_srt_ParamLimits

0x7b0c,	// (0x0005e0ba) tabs_3_passive_pane_cp_srt

0x7b1d,	// (0x0005e0cb) tabs_3_passive_pane_srt_ParamLimits

0x7b1d,	// (0x0005e0cb) tabs_3_passive_pane_srt

0xf51d,	// (0x00065acb) bg_passive_tab_pane_cp2_srt_ParamLimits

0xf51d,	// (0x00065acb) bg_passive_tab_pane_cp2_srt

0x6b15,	// (0x0005d0c3) bg_passive_tab_pane_g1_cp2_srt

0x676b,	// (0x0005cd19) bg_passive_tab_pane_g2_cp2_srt

0x6b1e,	// (0x0005d0cc) bg_passive_tab_pane_g3_cp2_srt

0xe105,	// (0x000646b3) bg_active_tab_pane_cp2_srt_ParamLimits

0xe105,	// (0x000646b3) bg_active_tab_pane_cp2_srt

0xa80a,	// (0x00060db8) tabs_3_active_pane_srt_g1

0xa812,	// (0x00060dc0) tabs_3_active_pane_srt_t1_ParamLimits

0xa812,	// (0x00060dc0) tabs_3_active_pane_srt_t1

0x6b15,	// (0x0005d0c3) bg_active_tab_pane_g1_cp2_srt

0x676b,	// (0x0005cd19) bg_active_tab_pane_g2_cp2_srt

0x6b1e,	// (0x0005d0cc) bg_active_tab_pane_g3_cp2_srt

0x7ab3,	// (0x0005e061) tabs_4_active_pane_srt_ParamLimits

0x7ab3,	// (0x0005e061) tabs_4_active_pane_srt

0x7ac5,	// (0x0005e073) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7ac5,	// (0x0005e073) tabs_4_passive_pane_cp2_srt

0x6d37,	// (0x0005d2e5) aid_size_cell_toolbar

0x6220,	// (0x0005c7ce) main_idle_act_pane_ParamLimits

0x6efc,	// (0x0005d4aa) popup_large_graphic_colour_window_ParamLimits

0x7267,	// (0x0005d815) popup_toolbar_window_ParamLimits

0x7267,	// (0x0005d815) popup_toolbar_window

0xa5d9,	// (0x00060b87) list_single_graphic_2heading_pane_ParamLimits

0xa5d9,	// (0x00060b87) list_single_graphic_2heading_pane

0xf3f8,	// (0x000659a6) aid_size_cell_apps_grid_lsc_pane

0xf40a,	// (0x000659b8) aid_size_cell_apps_grid_prt_pane

0xf51d,	// (0x00065acb) bg_wml_button_pane_cp1_ParamLimits

0xf51d,	// (0x00065acb) bg_wml_button_pane_cp1

0x92f0,	// (0x0005f89e) form_midp_field_text_pane_t1_ParamLimits

0x90ba,	// (0x0005f668) input_focus_pane_cp050_ParamLimits

0x932a,	// (0x0005f8d8) list_midp_form_text_pane_ParamLimits

0x92cd,	// (0x0005f87b) input_focus_pane_cp051_ParamLimits

0x92e1,	// (0x0005f88f) list_midp_choice_pane_ParamLimits

0x9170,	// (0x0005f71e) list_single_2graphic_pane_cp3_ParamLimits

0x9170,	// (0x0005f71e) list_single_2graphic_pane_cp3

0x9195,	// (0x0005f743) list_single_midp_graphic_pane_ParamLimits

0x9195,	// (0x0005f743) list_single_midp_graphic_pane

0x5127,	// (0x0005b6d5) list_single_graphic_2heading_pane_g1_ParamLimits

0x5127,	// (0x0005b6d5) list_single_graphic_2heading_pane_g1

0x5133,	// (0x0005b6e1) list_single_graphic_2heading_pane_g4_ParamLimits

0x5133,	// (0x0005b6e1) list_single_graphic_2heading_pane_g4

0x513f,	// (0x0005b6ed) list_single_graphic_2heading_pane_g5_ParamLimits

0x513f,	// (0x0005b6ed) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00065d34) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00065d34) list_single_graphic_2heading_pane_g

0x514b,	// (0x0005b6f9) list_single_graphic_2heading_pane_t1_ParamLimits

0x514b,	// (0x0005b6f9) list_single_graphic_2heading_pane_t1

0x515f,	// (0x0005b70d) list_single_graphic_2heading_pane_t2_ParamLimits

0x515f,	// (0x0005b70d) list_single_graphic_2heading_pane_t2

0x5179,	// (0x0005b727) list_single_graphic_2heading_pane_t3_ParamLimits

0x5179,	// (0x0005b727) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x00065d3b) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x00065d3b) list_single_graphic_2heading_pane_t

0x8f6c,	// (0x0005f51a) bg_popup_sub_pane_cp2

0x8f96,	// (0x0005f544) grid_toobar_pane

0x7635,	// (0x0005dbe3) cell_toolbar_pane_ParamLimits

0x7635,	// (0x0005dbe3) cell_toolbar_pane

0x8fd2,	// (0x0005f580) cell_toolbar_pane_g1_ParamLimits

0x8fd2,	// (0x0005f580) cell_toolbar_pane_g1

0x8fe6,	// (0x0005f594) cell_toolbar_pane_g2_ParamLimits

0x8fe6,	// (0x0005f594) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x00065d49) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x00065d49) cell_toolbar_pane_g

0x9008,	// (0x0005f5b6) grid_highlight_pane_cp2_ParamLimits

0x9008,	// (0x0005f5b6) grid_highlight_pane_cp2

0x9022,	// (0x0005f5d0) toolbar_button_pane

0x902e,	// (0x0005f5dc) toolbar_button_pane_g1

0x9036,	// (0x0005f5e4) toolbar_button_pane_g2

0x903e,	// (0x0005f5ec) toolbar_button_pane_g3

0x9046,	// (0x0005f5f4) toolbar_button_pane_g4

0x904e,	// (0x0005f5fc) toolbar_button_pane_g5

0x9056,	// (0x0005f604) toolbar_button_pane_g6

0x905e,	// (0x0005f60c) toolbar_button_pane_g7

0x9066,	// (0x0005f614) toolbar_button_pane_g8

0x906e,	// (0x0005f61c) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x00065d4e) toolbar_button_pane_g

0x7679,	// (0x0005dc27) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7679,	// (0x0005dc27) list_single_2graphic_pane_g1_cp3

0x7685,	// (0x0005dc33) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7685,	// (0x0005dc33) list_single_2graphic_pane_g2_cp3

0x7696,	// (0x0005dc44) list_single_2graphic_pane_g3_cp3

0x769e,	// (0x0005dc4c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x769e,	// (0x0005dc4c) list_single_2graphic_pane_g4_cp3

0x76aa,	// (0x0005dc58) list_single_2graphic_pane_t1_cp3_ParamLimits

0x76aa,	// (0x0005dc58) list_single_2graphic_pane_t1_cp3

0x76c6,	// (0x0005dc74) list_single_midp_graphic_pane_g2_ParamLimits

0x76c6,	// (0x0005dc74) list_single_midp_graphic_pane_g2

0x511f,	// (0x0005b6cd) aid_zoom_text_primary

0x6d3f,	// (0x0005d2ed) aid_zoom_text_secondary

0x17e0,	// (0x00057d8e) status_small_pane_g7_ParamLimits

0x17e0,	// (0x00057d8e) status_small_pane_g7

0x6b78,	// (0x0005d126) status_small_pane_t1_ParamLimits

0x55a5,	// (0x0005bb53) title_pane_g2

0x0003,

0xf529,	// (0x00065ad7) title_pane_g

0x58f3,	// (0x0005bea1) aid_size_cell_colour_1_pane_ParamLimits

0x58f3,	// (0x0005bea1) aid_size_cell_colour_1_pane

0x5907,	// (0x0005beb5) aid_size_cell_colour_2_pane_ParamLimits

0x5907,	// (0x0005beb5) aid_size_cell_colour_2_pane

0x591b,	// (0x0005bec9) aid_size_cell_colour_3_pane_ParamLimits

0x591b,	// (0x0005bec9) aid_size_cell_colour_3_pane

0x592f,	// (0x0005bedd) aid_size_cell_colour_4_pane_ParamLimits

0x592f,	// (0x0005bedd) aid_size_cell_colour_4_pane

0x6293,	// (0x0005c841) title_pane_stacon_g1_ParamLimits

0x6293,	// (0x0005c841) title_pane_stacon_g1

0x96fa,	// (0x0005fca8) popup_note_wait_window_g3_ParamLimits

0x96fa,	// (0x0005fca8) popup_note_wait_window_g3

0x9770,	// (0x0005fd1e) popup_note_wait_window_t5_ParamLimits

0x9770,	// (0x0005fd1e) popup_note_wait_window_t5

0xe0b7,	// (0x00064665) main_feb_china_hwr_fs_writing_pane

0x6de3,	// (0x0005d391) popup_feb_china_hwr_fs_window_ParamLimits

0x6de3,	// (0x0005d391) popup_feb_china_hwr_fs_window

0x76e8,	// (0x0005dc96) aid_size_cell_hwr_fs_ParamLimits

0x76e8,	// (0x0005dc96) aid_size_cell_hwr_fs

0x90ba,	// (0x0005f668) bg_popup_sub_pane_cp3_ParamLimits

0x90ba,	// (0x0005f668) bg_popup_sub_pane_cp3

0x76fd,	// (0x0005dcab) grid_hwr_fs_pane_ParamLimits

0x76fd,	// (0x0005dcab) grid_hwr_fs_pane

0x7715,	// (0x0005dcc3) linegrid_hwr_fs_pane_ParamLimits

0x7715,	// (0x0005dcc3) linegrid_hwr_fs_pane

0x7725,	// (0x0005dcd3) cell_hwr_fs_pane_ParamLimits

0x7725,	// (0x0005dcd3) cell_hwr_fs_pane

0x90c6,	// (0x0005f674) linegrid_hwr_fs_pane_g1_ParamLimits

0x90c6,	// (0x0005f674) linegrid_hwr_fs_pane_g1

0x90d2,	// (0x0005f680) linegrid_hwr_fs_pane_g2_ParamLimits

0x90d2,	// (0x0005f680) linegrid_hwr_fs_pane_g2

0x90e4,	// (0x0005f692) linegrid_hwr_fs_pane_g3_ParamLimits

0x90e4,	// (0x0005f692) linegrid_hwr_fs_pane_g3

0x7747,	// (0x0005dcf5) linegrid_hwr_fs_pane_g4_ParamLimits

0x7747,	// (0x0005dcf5) linegrid_hwr_fs_pane_g4

0x7761,	// (0x0005dd0f) linegrid_hwr_fs_pane_g5_ParamLimits

0x7761,	// (0x0005dd0f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00065d79) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00065d79) linegrid_hwr_fs_pane_g

0x90f0,	// (0x0005f69e) cell_hwr_fs_pane_g1_ParamLimits

0x90f0,	// (0x0005f69e) cell_hwr_fs_pane_g1

0x8ea6,	// (0x0005f454) cell_hwr_fs_pane_g2_ParamLimits

0x8ea6,	// (0x0005f454) cell_hwr_fs_pane_g2

0x9106,	// (0x0005f6b4) cell_hwr_fs_pane_g3_ParamLimits

0x9106,	// (0x0005f6b4) cell_hwr_fs_pane_g3

0x9113,	// (0x0005f6c1) cell_hwr_fs_pane_g4_ParamLimits

0x9113,	// (0x0005f6c1) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00065d84) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00065d84) cell_hwr_fs_pane_g

0x7777,	// (0x0005dd25) cell_hwr_fs_pane_t1

0xe0b7,	// (0x00064665) grid_highlight_pane_cp6

0xe0b7,	// (0x00064665) main_idle_act2_pane

0xf24e,	// (0x000657fc) aid_inside_area_popup_secondary

0x9d8f,	// (0x0006033d) aid_inside_area_window_primary_ParamLimits

0x9d8f,	// (0x0006033d) aid_inside_area_window_primary

0xa971,	// (0x00060f1f) ai2_news_ticker_pane

0xa979,	// (0x00060f27) aid_size_cell_ai1_link_ParamLimits

0xa979,	// (0x00060f27) aid_size_cell_ai1_link

0xa993,	// (0x00060f41) popup_ai2_data_window_ParamLimits

0xa993,	// (0x00060f41) popup_ai2_data_window

0xa9a9,	// (0x00060f57) popup_ai2_link_window_ParamLimits

0xa9a9,	// (0x00060f57) popup_ai2_link_window

0x90ba,	// (0x0005f668) bg_popup_sub_pane_cp4_ParamLimits

0x90ba,	// (0x0005f668) bg_popup_sub_pane_cp4

0xa9bd,	// (0x00060f6b) grid_ai2_link_pane_ParamLimits

0xa9bd,	// (0x00060f6b) grid_ai2_link_pane

0xa9d4,	// (0x00060f82) popup_ai2_link_window_g1_ParamLimits

0xa9d4,	// (0x00060f82) popup_ai2_link_window_g1

0xa9e0,	// (0x00060f8e) popup_ai2_link_window_g2_ParamLimits

0xa9e0,	// (0x00060f8e) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00065f57) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00065f57) popup_ai2_link_window_g

0xa9ef,	// (0x00060f9d) ai2_mp_button_pane

0xa9f7,	// (0x00060fa5) ai2_mp_volume_pane

0x92cd,	// (0x0005f87b) bg_popup_sub_pane_cp5_ParamLimits

0x92cd,	// (0x0005f87b) bg_popup_sub_pane_cp5

0xa9ff,	// (0x00060fad) heading_ai2_gene_pane_ParamLimits

0xa9ff,	// (0x00060fad) heading_ai2_gene_pane

0xaa0b,	// (0x00060fb9) list_ai2_gene_pane_ParamLimits

0xaa0b,	// (0x00060fb9) list_ai2_gene_pane

0xaa53,	// (0x00061001) cell_ai2_link_pane_ParamLimits

0xaa53,	// (0x00061001) cell_ai2_link_pane

0xaa69,	// (0x00061017) cell_ai2_link_pane_g1

0xe0b7,	// (0x00064665) grid_highlight_pane_cp7

0x7b6b,	// (0x0005e119) ai2_mp_volume_pane_g1

0xab39,	// (0x000610e7) ai2_mp_volume_pane_g2

0xaaae,	// (0x0006105c) list_ai2_gene_pane_t1

0xab41,	// (0x000610ef) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00065f70) ai2_mp_volume_pane_g

0x7b73,	// (0x0005e121) volume_small_pane_cp3

0xab49,	// (0x000610f7) aid_size_cell_ai2_button

0xab51,	// (0x000610ff) grid_ai2_button_pane

0xab5a,	// (0x00061108) cell_ai2_button_pane_ParamLimits

0xab5a,	// (0x00061108) cell_ai2_button_pane

0xe0ad,	// (0x0006465b) cell_ai2_button_pane_g1

0xe0b7,	// (0x00064665) grid_highlight_pane_cp8

0xaaf9,	// (0x000610a7) ai2_gene_pane_t1_ParamLimits

0xaaf9,	// (0x000610a7) ai2_gene_pane_t1

0x6d2d,	// (0x0005d2db) aid_height_parent_landscape

0xa3f8,	// (0x000609a6) aid_height_set_list

0xa409,	// (0x000609b7) aid_size_parent

0xa794,	// (0x00060d42) aid_size_cell_graphic_pane_ParamLimits

0xaa1b,	// (0x00060fc9) popup_ai2_data_window_g1_ParamLimits

0xaa1b,	// (0x00060fc9) popup_ai2_data_window_g1

0xaa27,	// (0x00060fd5) ai2_news_ticker_pane_g1

0xaa2f,	// (0x00060fdd) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00065f5c) ai2_news_ticker_pane_g

0xaa37,	// (0x00060fe5) ai2_news_ticker_pane_t1

0xaa45,	// (0x00060ff3) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00065f61) ai2_news_ticker_pane_t

0xaa72,	// (0x00061020) heading_ai2_gene_pane_g1

0xaa7a,	// (0x00061028) heading_ai2_gene_pane_t1_ParamLimits

0xaa7a,	// (0x00061028) heading_ai2_gene_pane_t1

0xaa8f,	// (0x0006103d) list_highlight_pane_cp6

0xaa97,	// (0x00061045) ai2_gene_pane_ParamLimits

0xaa97,	// (0x00061045) ai2_gene_pane

0xaabc,	// (0x0006106a) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00065f66) list_ai2_gene_pane_t

0xaaca,	// (0x00061078) list_highlight_pane_cp8_ParamLimits

0xaaca,	// (0x00061078) list_highlight_pane_cp8

0xaadb,	// (0x00061089) ai2_gene_pane_g1_ParamLimits

0xaadb,	// (0x00061089) ai2_gene_pane_g1

0xaaed,	// (0x0006109b) ai2_gene_pane_g2_ParamLimits

0xaaed,	// (0x0006109b) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00065f6b) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00065f6b) ai2_gene_pane_g

0xf0d4,	// (0x00065682) scroll_pane_cp12

0x6cea,	// (0x0005d298) control_pane_t3_ParamLimits

0x6cea,	// (0x0005d298) control_pane_t3

0x6b69,	// (0x0005d117) status_small_pane_g8_ParamLimits

0x6b69,	// (0x0005d117) status_small_pane_g8

0x6ec5,	// (0x0005d473) popup_find_window_ParamLimits

0x70de,	// (0x0005d68c) popup_note_image_window_ParamLimits

0x3a2d,	// (0x00059fdb) list_double2_graphic_pane_vc_g1_ParamLimits

0x3a2d,	// (0x00059fdb) list_double2_graphic_pane_vc_g1

0x11d6,	// (0x00057784) list_double2_graphic_pane_vc_g2_ParamLimits

0x11d6,	// (0x00057784) list_double2_graphic_pane_vc_g2

0x7665,	// (0x0005dc13) list_double2_graphic_pane_vc_g3_ParamLimits

0x7665,	// (0x0005dc13) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00065d42) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00065d42) list_double2_graphic_pane_vc_g

0x3a39,	// (0x00059fe7) list_double2_graphic_pane_vc_t1_ParamLimits

0x3a39,	// (0x00059fe7) list_double2_graphic_pane_vc_t1

0x11d6,	// (0x00057784) list_single_heading_pane_vc_g1_ParamLimits

0x11d6,	// (0x00057784) list_single_heading_pane_vc_g1

0x7665,	// (0x0005dc13) list_single_heading_pane_vc_g2_ParamLimits

0x7665,	// (0x0005dc13) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d63) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d63) list_single_heading_pane_vc_g

0x3ba0,	// (0x0005a14e) list_single_heading_pane_vc_t1_ParamLimits

0x3ba0,	// (0x0005a14e) list_single_heading_pane_vc_t1

0x3bb6,	// (0x0005a164) list_single_heading_pane_vc_t2_ParamLimits

0x3bb6,	// (0x0005a164) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00065d68) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00065d68) list_single_heading_pane_vc_t

0x9076,	// (0x0005f624) list_setting_number_pane_vc_g1_ParamLimits

0x9076,	// (0x0005f624) list_setting_number_pane_vc_g1

0x9082,	// (0x0005f630) list_setting_number_pane_vc_g2_ParamLimits

0x9082,	// (0x0005f630) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00065d6d) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00065d6d) list_setting_number_pane_vc_g

0x3bc8,	// (0x0005a176) list_setting_number_pane_vc_t1_ParamLimits

0x3bc8,	// (0x0005a176) list_setting_number_pane_vc_t1

0x3bdc,	// (0x0005a18a) list_setting_number_pane_vc_t2_ParamLimits

0x3bdc,	// (0x0005a18a) list_setting_number_pane_vc_t2

0x3bf8,	// (0x0005a1a6) list_setting_number_pane_vc_t3_ParamLimits

0x3bf8,	// (0x0005a1a6) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00065d72) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00065d72) list_setting_number_pane_vc_t

0x3c22,	// (0x0005a1d0) set_value_pane_vc_ParamLimits

0x3c22,	// (0x0005a1d0) set_value_pane_vc

0xa5d9,	// (0x00060b87) list_double2_graphic_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_double2_graphic_pane_vc

0xa5ec,	// (0x00060b9a) list_double2_large_graphic_pane_vc_ParamLimits

0xa5ec,	// (0x00060b9a) list_double2_large_graphic_pane_vc

0xa5d9,	// (0x00060b87) list_double2_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_double2_pane_vc

0xa5d9,	// (0x00060b87) list_double_graphic_heading_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_double_graphic_heading_pane_vc

0xa5d9,	// (0x00060b87) list_double_graphic_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_double_graphic_pane_vc

0xa5d9,	// (0x00060b87) list_double_heading_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_double_heading_pane_vc

0xa5fe,	// (0x00060bac) list_double_large_graphic_pane_vc_ParamLimits

0xa5fe,	// (0x00060bac) list_double_large_graphic_pane_vc

0xa5d9,	// (0x00060b87) list_double_number_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_double_number_pane_vc

0xa5d9,	// (0x00060b87) list_double_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_double_pane_vc

0xa5d9,	// (0x00060b87) list_double_time_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_double_time_pane_vc

0xa5d9,	// (0x00060b87) list_setting_number_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_setting_number_pane_vc

0xa5d9,	// (0x00060b87) list_setting_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_setting_pane_vc

0xa5d9,	// (0x00060b87) list_single_graphic_heading_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_single_graphic_heading_pane_vc

0xa5d9,	// (0x00060b87) list_single_heading_pane_vc_ParamLimits

0xa5d9,	// (0x00060b87) list_single_heading_pane_vc

0xa61c,	// (0x00060bca) list_single_number_heading_pane_vc_ParamLimits

0xa61c,	// (0x00060bca) list_single_number_heading_pane_vc

0x3c41,	// (0x0005a1ef) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3c41,	// (0x0005a1ef) list_double_graphic_heading_pane_vc_g1

0x11d6,	// (0x00057784) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x11d6,	// (0x00057784) list_double_graphic_heading_pane_vc_g2

0x7665,	// (0x0005dc13) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7665,	// (0x0005dc13) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x00065f77) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00065f77) list_double_graphic_heading_pane_vc_g

0x3c4d,	// (0x0005a1fb) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3c4d,	// (0x0005a1fb) list_double_graphic_heading_pane_vc_t1

0x3c61,	// (0x0005a20f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3c61,	// (0x0005a20f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00065f7e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00065f7e) list_double_graphic_heading_pane_vc_t

0x9076,	// (0x0005f624) list_setting_pane_vc_g1_ParamLimits

0x9076,	// (0x0005f624) list_setting_pane_vc_g1

0x9082,	// (0x0005f630) list_setting_pane_vc_g2_ParamLimits

0x9082,	// (0x0005f630) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x00065d6d) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x00065d6d) list_setting_pane_vc_g

0x3c79,	// (0x0005a227) list_setting_pane_vc_t1_ParamLimits

0x3c79,	// (0x0005a227) list_setting_pane_vc_t1

0x3c95,	// (0x0005a243) list_setting_pane_vc_t2_ParamLimits

0x3c95,	// (0x0005a243) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00065fc1) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00065fc1) list_setting_pane_vc_t

0x3c22,	// (0x0005a1d0) set_value_pane_cp_vc_ParamLimits

0x3c22,	// (0x0005a1d0) set_value_pane_cp_vc

0x11d6,	// (0x00057784) list_single_number_heading_pane_vc_g1_ParamLimits

0x11d6,	// (0x00057784) list_single_number_heading_pane_vc_g1

0x7665,	// (0x0005dc13) list_single_number_heading_pane_vc_g2_ParamLimits

0x7665,	// (0x0005dc13) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d63) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d63) list_single_number_heading_pane_vc_g

0x3a4f,	// (0x00059ffd) list_single_number_heading_pane_vc_t1_ParamLimits

0x3a4f,	// (0x00059ffd) list_single_number_heading_pane_vc_t1

0x3caf,	// (0x0005a25d) list_single_number_heading_pane_vc_t2_ParamLimits

0x3caf,	// (0x0005a25d) list_single_number_heading_pane_vc_t2

0x3cc5,	// (0x0005a273) list_single_number_heading_pane_vc_t3_ParamLimits

0x3cc5,	// (0x0005a273) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x00065fc6) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x00065fc6) list_single_number_heading_pane_vc_t

0x3cd7,	// (0x0005a285) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3cd7,	// (0x0005a285) list_single_graphic_heading_pane_vc_g1

0x11d6,	// (0x00057784) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x11d6,	// (0x00057784) list_single_graphic_heading_pane_vc_g4

0x7665,	// (0x0005dc13) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7665,	// (0x0005dc13) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1f,	// (0x00065fcd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1f,	// (0x00065fcd) list_single_graphic_heading_pane_vc_g

0x3a4f,	// (0x00059ffd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3a4f,	// (0x00059ffd) list_single_graphic_heading_pane_vc_t1

0x3ce3,	// (0x0005a291) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3ce3,	// (0x0005a291) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x00065fd4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x00065fd4) list_single_graphic_heading_pane_vc_t

0x11d6,	// (0x00057784) list_double2_pane_vc_g1_ParamLimits

0x11d6,	// (0x00057784) list_double2_pane_vc_g1

0x7665,	// (0x0005dc13) list_double2_pane_vc_g2_ParamLimits

0x7665,	// (0x0005dc13) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d63) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d63) list_double2_pane_vc_g

0x3cf5,	// (0x0005a2a3) list_double2_pane_vc_t1_ParamLimits

0x3cf5,	// (0x0005a2a3) list_double2_pane_vc_t1

0xad93,	// (0x00061341) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xad93,	// (0x00061341) list_double2_large_graphic_pane_vc_g1

0x42d8,	// (0x0005a886) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x42d8,	// (0x0005a886) list_double2_large_graphic_pane_vc_g2

0x42e4,	// (0x0005a892) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x42e4,	// (0x0005a892) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x00065fd9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x00065fd9) list_double2_large_graphic_pane_vc_g

0x3a65,	// (0x0005a013) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3a65,	// (0x0005a013) list_double2_large_graphic_pane_vc_t1

0xad9f,	// (0x0006134d) list_double_time_pane_vc_g1_ParamLimits

0xad9f,	// (0x0006134d) list_double_time_pane_vc_g1

0xadab,	// (0x00061359) list_double_time_pane_vc_g2_ParamLimits

0xadab,	// (0x00061359) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x00065fe0) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x00065fe0) list_double_time_pane_vc_g

0x3d0d,	// (0x0005a2bb) list_double_time_pane_vc_t1_ParamLimits

0x3d0d,	// (0x0005a2bb) list_double_time_pane_vc_t1

0x3d31,	// (0x0005a2df) list_double_time_pane_vc_t2_ParamLimits

0x3d31,	// (0x0005a2df) list_double_time_pane_vc_t2

0x3d80,	// (0x0005a32e) list_double_time_pane_vc_t3_ParamLimits

0x3d80,	// (0x0005a32e) list_double_time_pane_vc_t3

0x3d92,	// (0x0005a340) list_double_time_pane_vc_t4_ParamLimits

0x3d92,	// (0x0005a340) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x00065fe5) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x00065fe5) list_double_time_pane_vc_t

0x11d6,	// (0x00057784) list_double_pane_vc_g1_ParamLimits

0x11d6,	// (0x00057784) list_double_pane_vc_g1

0x7665,	// (0x0005dc13) list_double_pane_vc_g2_ParamLimits

0x7665,	// (0x0005dc13) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d63) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d63) list_double_pane_vc_g

0x3da6,	// (0x0005a354) list_double_pane_vc_t1_ParamLimits

0x3da6,	// (0x0005a354) list_double_pane_vc_t1

0x3dba,	// (0x0005a368) list_double_pane_vc_t2_ParamLimits

0x3dba,	// (0x0005a368) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x00065fee) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x00065fee) list_double_pane_vc_t

0x11d6,	// (0x00057784) list_double_number_pane_vc_g1_ParamLimits

0x11d6,	// (0x00057784) list_double_number_pane_vc_g1

0x7665,	// (0x0005dc13) list_double_number_pane_vc_g2_ParamLimits

0x7665,	// (0x0005dc13) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d63) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d63) list_double_number_pane_vc_g

0x3dd2,	// (0x0005a380) list_double_number_pane_vc_t1_ParamLimits

0x3dd2,	// (0x0005a380) list_double_number_pane_vc_t1

0x3da6,	// (0x0005a354) list_double_number_pane_vc_t2_ParamLimits

0x3da6,	// (0x0005a354) list_double_number_pane_vc_t2

0x3de4,	// (0x0005a392) list_double_number_pane_vc_t3_ParamLimits

0x3de4,	// (0x0005a392) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x00065ff3) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x00065ff3) list_double_number_pane_vc_t

0xadb7,	// (0x00061365) list_double_large_graphic_pane_vc_g1_ParamLimits

0xadb7,	// (0x00061365) list_double_large_graphic_pane_vc_g1

0xadd3,	// (0x00061381) list_double_large_graphic_pane_vc_g2_ParamLimits

0xadd3,	// (0x00061381) list_double_large_graphic_pane_vc_g2

0xade7,	// (0x00061395) list_double_large_graphic_pane_vc_g3_ParamLimits

0xade7,	// (0x00061395) list_double_large_graphic_pane_vc_g3

0x3dfc,	// (0x0005a3aa) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3dfc,	// (0x0005a3aa) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x00065ffa) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x00065ffa) list_double_large_graphic_pane_vc_g

0x3e0b,	// (0x0005a3b9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3e0b,	// (0x0005a3b9) list_double_large_graphic_pane_vc_t1

0x3e27,	// (0x0005a3d5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3e27,	// (0x0005a3d5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x00066003) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x00066003) list_double_large_graphic_pane_vc_t

0x11d6,	// (0x00057784) list_double_heading_pane_vc_g1_ParamLimits

0x11d6,	// (0x00057784) list_double_heading_pane_vc_g1

0x7665,	// (0x0005dc13) list_double_heading_pane_vc_g2_ParamLimits

0x7665,	// (0x0005dc13) list_double_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d63) list_double_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d63) list_double_heading_pane_vc_g

0x3e49,	// (0x0005a3f7) list_double_heading_pane_vc_t1_ParamLimits

0x3e49,	// (0x0005a3f7) list_double_heading_pane_vc_t1

0x3e5d,	// (0x0005a40b) list_double_heading_pane_vc_t2_ParamLimits

0x3e5d,	// (0x0005a40b) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x00066008) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x00066008) list_double_heading_pane_vc_t

0x3e75,	// (0x0005a423) list_double_graphic_pane_vc_g1_ParamLimits

0x3e75,	// (0x0005a423) list_double_graphic_pane_vc_g1

0xadf6,	// (0x000613a4) list_double_graphic_pane_vc_g2_ParamLimits

0xadf6,	// (0x000613a4) list_double_graphic_pane_vc_g2

0x11d6,	// (0x00057784) list_double_graphic_pane_vc_g3_ParamLimits

0x11d6,	// (0x00057784) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0006600d) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0006600d) list_double_graphic_pane_vc_g

0x3e88,	// (0x0005a436) list_double_graphic_pane_vc_t1_ParamLimits

0x3e88,	// (0x0005a436) list_double_graphic_pane_vc_t1

0x3ea7,	// (0x0005a455) list_double_graphic_pane_vc_t2_ParamLimits

0x3ea7,	// (0x0005a455) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00066016) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00066016) list_double_graphic_pane_vc_t

0x51c5,	// (0x0005b773) aid_size_cell_fastswap

0x51cd,	// (0x0005b77b) aid_size_cell_touch_ParamLimits

0x51cd,	// (0x0005b77b) aid_size_cell_touch

0x5432,	// (0x0005b9e0) popup_fast_swap_wide_window_ParamLimits

0x5432,	// (0x0005b9e0) popup_fast_swap_wide_window

0x5538,	// (0x0005bae6) touch_pane_ParamLimits

0x5538,	// (0x0005bae6) touch_pane

0xf121,	// (0x000656cf) button_value_adjust_pane_cp2

0x3a95,	// (0x0005a043) button_value_adjust_pane_cp4

0x3a9d,	// (0x0005a04b) form_field_data_pane_cp2

0x5ff1,	// (0x0005c59f) form_field_data_wide_pane_cp2

0xf42f,	// (0x000659dd) bg_scroll_pane_ParamLimits

0x648d,	// (0x0005ca3b) scroll_handle_pane_ParamLimits

0x64a1,	// (0x0005ca4f) scroll_sc2_down_pane_ParamLimits

0x64a1,	// (0x0005ca4f) scroll_sc2_down_pane

0xf460,	// (0x00065a0e) scroll_sc2_up_pane_ParamLimits

0xf460,	// (0x00065a0e) scroll_sc2_up_pane

0xb2bb,	// (0x00061869) grid_wheel_folder_pane_g1_ParamLimits

0xb2bb,	// (0x00061869) grid_wheel_folder_pane_g1

0x6890,	// (0x0005ce3e) clock_nsta_pane_cp2_ParamLimits

0x6890,	// (0x0005ce3e) clock_nsta_pane_cp2

0x6998,	// (0x0005cf46) listscroll_midp_pane_ParamLimits

0x69a4,	// (0x0005cf52) midp_canvas_pane

0x1802,	// (0x00057db0) nsta_clock_indic_pane

0x182a,	// (0x00057dd8) listscroll_form_pane_vc

0x1832,	// (0x00057de0) listscroll_set_pane_vc_ParamLimits

0x1832,	// (0x00057de0) listscroll_set_pane_vc

0x73ed,	// (0x0005d99b) clock_nsta_pane

0x7468,	// (0x0005da16) indicator_nsta_pane

0x8f6c,	// (0x0005f51a) bg_popup_sub_pane_cp2_ParamLimits

0x8f80,	// (0x0005f52e) find_pane_cp2_ParamLimits

0x8f80,	// (0x0005f52e) find_pane_cp2

0x8f96,	// (0x0005f544) grid_toobar_pane_ParamLimits

0x908e,	// (0x0005f63c) list_form_gen_pane_vc_ParamLimits

0x908e,	// (0x0005f63c) list_form_gen_pane_vc

0x90a4,	// (0x0005f652) scroll_pane_cp8_vc_ParamLimits

0x90a4,	// (0x0005f652) scroll_pane_cp8_vc

0x9120,	// (0x0005f6ce) data_form_wide_pane_vc_ParamLimits

0x9120,	// (0x0005f6ce) data_form_wide_pane_vc

0x912c,	// (0x0005f6da) form_field_data_wide_pane_vc_g1

0x9134,	// (0x0005f6e2) form_field_data_wide_pane_vc_t1_ParamLimits

0x9134,	// (0x0005f6e2) form_field_data_wide_pane_vc_t1

0xf135,	// (0x000656e3) input_focus_pane_cp6_vc_ParamLimits

0xf135,	// (0x000656e3) input_focus_pane_cp6_vc

0x9461,	// (0x0005fa0f) list_midp_pane_ParamLimits

0x946d,	// (0x0005fa1b) scroll_pane_cp16_ParamLimits

0x946d,	// (0x0005fa1b) scroll_pane_cp16

0x94d7,	// (0x0005fa85) button_value_adjust_pane_ParamLimits

0x94d7,	// (0x0005fa85) button_value_adjust_pane

0xa41b,	// (0x000609c9) button_value_adjust_pane_cp6_ParamLimits

0xa41b,	// (0x000609c9) button_value_adjust_pane_cp6

0xa541,	// (0x00060aef) settings_code_pane_cp_ParamLimits

0xa541,	// (0x00060aef) settings_code_pane_cp

0xe0ad,	// (0x0006465b) cell_touch_pane_g1

0xe0ad,	// (0x0006465b) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00065c87) cell_touch_pane_g

0xab6c,	// (0x0006111a) cell_touch_pane_cp_ParamLimits

0xab6c,	// (0x0006111a) cell_touch_pane_cp

0xab7c,	// (0x0006112a) cell_touch_pane_ParamLimits

0xab7c,	// (0x0006112a) cell_touch_pane

0xe0ad,	// (0x0006465b) scroll_sc2_down_pane_g1

0xe0ad,	// (0x0006465b) scroll_sc2_up_pane_g1

0xe0b7,	// (0x00064665) bg_set_opt_pane_cp4_vc

0xab8e,	// (0x0006113c) list_set_graphic_pane_vc_g1_ParamLimits

0xab8e,	// (0x0006113c) list_set_graphic_pane_vc_g1

0xab9a,	// (0x00061148) list_set_graphic_pane_vc_g2_ParamLimits

0xab9a,	// (0x00061148) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00065f83) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00065f83) list_set_graphic_pane_vc_g

0xaba6,	// (0x00061154) text_primary_small_cp13_vc_ParamLimits

0xaba6,	// (0x00061154) text_primary_small_cp13_vc

0xabbe,	// (0x0006116c) list_set_graphic_pane_vc_ParamLimits

0xabbe,	// (0x0006116c) list_set_graphic_pane_vc

0xe0b7,	// (0x00064665) input_focus_pane_cp2_vc

0xe0ad,	// (0x0006465b) setting_code_pane_vc_g1

0xe11c,	// (0x000646ca) setting_code_pane_vc_t1

0xabd1,	// (0x0006117f) set_text_pane_vc_t1_ParamLimits

0xabd1,	// (0x0006117f) set_text_pane_vc_t1

0xe0b7,	// (0x00064665) input_focus_pane_cp1_vc

0xabee,	// (0x0006119c) list_set_text_pane_vc

0xe0ad,	// (0x0006465b) setting_text_pane_vc_g1

0xe0b7,	// (0x00064665) bg_set_opt_pane_cp2_vc

0xe113,	// (0x000646c1) setting_slider_graphic_pane_vc_g1

0xabf8,	// (0x000611a6) setting_slider_graphic_pane_vc_t1

0xac08,	// (0x000611b6) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x00065f88) setting_slider_graphic_pane_vc_t

0xac18,	// (0x000611c6) slider_set_pane_cp_vc

0xac20,	// (0x000611ce) slider_set_pane_vc_g1

0xac29,	// (0x000611d7) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x00065f8d) slider_set_pane_vc_g

0xf18d,	// (0x0006573b) set_opt_bg_pane_g1_copy1

0xf195,	// (0x00065743) set_opt_bg_pane_g2_copy1

0xac55,	// (0x00061203) set_opt_bg_pane_g3_copy1

0xf1a5,	// (0x00065753) set_opt_bg_pane_g4_copy1

0xf1ad,	// (0x0006575b) set_opt_bg_pane_g5_copy1

0xf1b5,	// (0x00065763) set_opt_bg_pane_g6_copy1

0xac5d,	// (0x0006120b) set_opt_bg_pane_g7_copy1

0xac67,	// (0x00061215) set_opt_bg_pane_g8_copy1

0xac6f,	// (0x0006121d) set_opt_bg_pane_g9_copy1

0xe0b7,	// (0x00064665) bg_set_opt_pane_cp_vc

0xac77,	// (0x00061225) setting_slider_pane_vc_t1

0xac86,	// (0x00061234) setting_slider_pane_vc_t2

0xac96,	// (0x00061244) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00065f9c) setting_slider_pane_vc_t

0xaca6,	// (0x00061254) slider_set_pane_vc

0x77b3,	// (0x0005dd61) volume_set_pane_vc_g1

0x7b7c,	// (0x0005e12a) volume_set_pane_vc_g2

0x7b85,	// (0x0005e133) volume_set_pane_vc_g3

0x7b8e,	// (0x0005e13c) volume_set_pane_vc_g4

0x7b97,	// (0x0005e145) volume_set_pane_vc_g5

0x7ba0,	// (0x0005e14e) volume_set_pane_vc_g6

0x7ba9,	// (0x0005e157) volume_set_pane_vc_g7

0x7bb2,	// (0x0005e160) volume_set_pane_vc_g8

0x7bbb,	// (0x0005e169) volume_set_pane_vc_g9

0x7bc4,	// (0x0005e172) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x00065fa3) volume_set_pane_vc_g

0xacae,	// (0x0006125c) volume_set_pane_vc

0xacb8,	// (0x00061266) button_value_adjust_pane_cp1_vc

0xacc2,	// (0x00061270) list_highlight_pane_cp2_vc

0xaccb,	// (0x00061279) list_set_pane_vc_ParamLimits

0xaccb,	// (0x00061279) list_set_pane_vc

0xad29,	// (0x000612d7) main_pane_set_vc_t1_ParamLimits

0xad29,	// (0x000612d7) main_pane_set_vc_t1

0xad3e,	// (0x000612ec) main_pane_set_vc_t2_ParamLimits

0xad3e,	// (0x000612ec) main_pane_set_vc_t2

0xad50,	// (0x000612fe) main_pane_set_vc_t3_ParamLimits

0xad50,	// (0x000612fe) main_pane_set_vc_t3

0xad62,	// (0x00061310) main_pane_set_vc_t4_ParamLimits

0xad62,	// (0x00061310) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x00065fb8) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x00065fb8) main_pane_set_vc_t

0xad74,	// (0x00061322) setting_code_pane_vc_ParamLimits

0xad74,	// (0x00061322) setting_code_pane_vc

0xad83,	// (0x00061331) setting_slider_graphic_pane_vc

0xad83,	// (0x00061331) setting_slider_pane_vc

0xad83,	// (0x00061331) setting_text_pane_vc

0xad83,	// (0x00061331) setting_volume_pane_vc

0xad8b,	// (0x00061339) scroll_pane_cp121_vc

0xf10f,	// (0x000656bd) set_content_pane_vc

0xae13,	// (0x000613c1) button_value_adjust_pane_g1

0xae1c,	// (0x000613ca) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0006601b) button_value_adjust_pane_g

0xae25,	// (0x000613d3) form_field_slider_wide_pane_vc_t1_ParamLimits

0xae25,	// (0x000613d3) form_field_slider_wide_pane_vc_t1

0xae39,	// (0x000613e7) form_field_slider_wide_pane_vc_t2_ParamLimits

0xae39,	// (0x000613e7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x00066020) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x00066020) form_field_slider_wide_pane_vc_t

0xe22f,	// (0x000647dd) input_focus_pane_cp10_vc_ParamLimits

0xe22f,	// (0x000647dd) input_focus_pane_cp10_vc

0xae67,	// (0x00061415) slider_cont_pane_cp1_vc_ParamLimits

0xae67,	// (0x00061415) slider_cont_pane_cp1_vc

0xae79,	// (0x00061427) slider_form_pane_g1_cp2

0xac29,	// (0x000611d7) slider_form_pane_g2_cp2

0xaea6,	// (0x00061454) form_field_slider_pane_vc_t3

0xaeb4,	// (0x00061462) form_field_slider_pane_vc_t4

0xaec2,	// (0x00061470) slider_form_pane_vc_ParamLimits

0xaec2,	// (0x00061470) slider_form_pane_vc

0xaecf,	// (0x0006147d) form_field_slider_pane_vc_t1_ParamLimits

0xaecf,	// (0x0006147d) form_field_slider_pane_vc_t1

0xae39,	// (0x000613e7) form_field_slider_pane_vc_t2_ParamLimits

0xae39,	// (0x000613e7) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x00066032) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x00066032) form_field_slider_pane_vc_t

0xe22f,	// (0x000647dd) input_focus_pane_cp9_vc_ParamLimits

0xe22f,	// (0x000647dd) input_focus_pane_cp9_vc

0xaeeb,	// (0x00061499) slider_cont_pane_vc_ParamLimits

0xaeeb,	// (0x00061499) slider_cont_pane_vc

0xaeff,	// (0x000614ad) list_form_graphic_pane_cp_vc_ParamLimits

0xaeff,	// (0x000614ad) list_form_graphic_pane_cp_vc

0x912c,	// (0x0005f6da) form_field_popup_wide_pane_vc_g1

0xaf14,	// (0x000614c2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaf14,	// (0x000614c2) form_field_popup_wide_pane_vc_t1

0xf135,	// (0x000656e3) input_focus_pane_cp8_vc_ParamLimits

0xf135,	// (0x000656e3) input_focus_pane_cp8_vc

0xaf59,	// (0x00061507) list_form_wide_pane_vc_ParamLimits

0xaf59,	// (0x00061507) list_form_wide_pane_vc

0xaf65,	// (0x00061513) list_form_graphic_pane_vc_g1

0xaf6d,	// (0x0006151b) list_form_graphic_pane_vc_t1_ParamLimits

0xaf6d,	// (0x0006151b) list_form_graphic_pane_vc_t1

0xe105,	// (0x000646b3) list_highlight_pane_cp5_vc_ParamLimits

0xe105,	// (0x000646b3) list_highlight_pane_cp5_vc

0xaf89,	// (0x00061537) list_form_graphic_pane_vc_ParamLimits

0xaf89,	// (0x00061537) list_form_graphic_pane_vc

0x912c,	// (0x0005f6da) form_field_popup_pane_vc_g1

0xaf9f,	// (0x0006154d) form_field_popup_pane_vc_t1_ParamLimits

0xaf9f,	// (0x0006154d) form_field_popup_pane_vc_t1

0xf135,	// (0x000656e3) input_focus_pane_cp7_vc_ParamLimits

0xf135,	// (0x000656e3) input_focus_pane_cp7_vc

0xafb6,	// (0x00061564) list_form_pane_vc_ParamLimits

0xafb6,	// (0x00061564) list_form_pane_vc

0xafc2,	// (0x00061570) data_form_pane_vc_t1_ParamLimits

0xafc2,	// (0x00061570) data_form_pane_vc_t1

0xf18d,	// (0x0006573b) input_focus_pane_vc_g1

0xf195,	// (0x00065743) input_focus_pane_vc_g2

0xf19d,	// (0x0006574b) input_focus_pane_vc_g3

0xf1a5,	// (0x00065753) input_focus_pane_vc_g4

0xf1ad,	// (0x0006575b) input_focus_pane_vc_g5

0xf1b5,	// (0x00065763) input_focus_pane_vc_g6

0xf1bd,	// (0x0006576b) input_focus_pane_vc_g7

0xf1c5,	// (0x00065773) input_focus_pane_vc_g8

0xf1cd,	// (0x0006577b) input_focus_pane_vc_g9

0xe0ad,	// (0x0006465b) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00065c10) input_focus_pane_vc_g

0x9120,	// (0x0005f6ce) data_form_pane_vc_ParamLimits

0x9120,	// (0x0005f6ce) data_form_pane_vc

0x912c,	// (0x0005f6da) form_field_data_pane_vc_g1

0xafdd,	// (0x0006158b) form_field_data_pane_vc_t1_ParamLimits

0xafdd,	// (0x0006158b) form_field_data_pane_vc_t1

0xf135,	// (0x000656e3) input_focus_pane_vc_ParamLimits

0xf135,	// (0x000656e3) input_focus_pane_vc

0xaff7,	// (0x000615a5) button_value_adjust_pane_cp3_vc

0xafff,	// (0x000615ad) button_value_adjust_pane_cp5_vc

0xb007,	// (0x000615b5) form_field_data_pane_vc_ParamLimits

0xb007,	// (0x000615b5) form_field_data_pane_vc

0xb01e,	// (0x000615cc) form_field_data_pane_vc_cp2

0xb026,	// (0x000615d4) form_field_data_wide_pane_vc_ParamLimits

0xb026,	// (0x000615d4) form_field_data_wide_pane_vc

0xb03c,	// (0x000615ea) form_field_data_wide_pane_vc_cp2

0xb044,	// (0x000615f2) form_field_popup_pane_vc_ParamLimits

0xb044,	// (0x000615f2) form_field_popup_pane_vc

0xb05b,	// (0x00061609) form_field_popup_wide_pane_vc_ParamLimits

0xb05b,	// (0x00061609) form_field_popup_wide_pane_vc

0xb071,	// (0x0006161f) form_field_slider_pane_vc_ParamLimits

0xb071,	// (0x0006161f) form_field_slider_pane_vc

0xb084,	// (0x00061632) form_field_slider_wide_pane_vc_ParamLimits

0xb084,	// (0x00061632) form_field_slider_wide_pane_vc

0xb097,	// (0x00061645) grid_touch_1_pane_ParamLimits

0xb097,	// (0x00061645) grid_touch_1_pane

0xb0a3,	// (0x00061651) grid_touch_2_pane_ParamLimits

0xb0a3,	// (0x00061651) grid_touch_2_pane

0x17f4,	// (0x00057da2) touch_pane_g1_ParamLimits

0x17f4,	// (0x00057da2) touch_pane_g1

0xb0bb,	// (0x00061669) cell_app_pane_cp_wide_ParamLimits

0xb0bb,	// (0x00061669) cell_app_pane_cp_wide

0xb0cc,	// (0x0006167a) grid_popup_fast_wide_pane_ParamLimits

0xb0cc,	// (0x0006167a) grid_popup_fast_wide_pane

0xb0e0,	// (0x0006168e) scroll_pane_cp19_ParamLimits

0xb0e0,	// (0x0006168e) scroll_pane_cp19

0xe0b7,	// (0x00064665) bg_popup_window_pane_cp20

0xb0f4,	// (0x000616a2) listscroll_popup_fast_wide_pane

0xb0fc,	// (0x000616aa) grid_indicator_nsta_pane

0xb10e,	// (0x000616bc) clock_nsta_pane_g1

0xb117,	// (0x000616c5) clock_nsta_pane_t1

0xb133,	// (0x000616e1) cell_indicator_nsta_pane_ParamLimits

0xb133,	// (0x000616e1) cell_indicator_nsta_pane

0xb168,	// (0x00061716) cell_indicator_nsta_pane_g1

0xb176,	// (0x00061724) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x00066043) cell_indicator_nsta_pane_g

0xb188,	// (0x00061736) clock_nsta_pane_cp

0xb191,	// (0x0006173f) indicator_nsta_pane_cp

0xb19b,	// (0x00061749) nsta_clock_indic_pane_g1

0xe141,	// (0x000646ef) grid_indicator_pane

0x653f,	// (0x0005caed) scroll_pane_cp29

0x67df,	// (0x0005cd8d) indicator_nsta_pane_cp2_ParamLimits

0x67df,	// (0x0005cd8d) indicator_nsta_pane_cp2

0xe105,	// (0x000646b3) main_apps_wheel_pane

0x9344,	// (0x0005f8f2) form_midp_field_text_pane_ParamLimits

0x948d,	// (0x0005fa3b) scroll_bar_cp050_ParamLimits

0xb1f4,	// (0x000617a2) cell_indicator_pane_ParamLimits

0xb1f4,	// (0x000617a2) cell_indicator_pane

0xb20d,	// (0x000617bb) cell_indicator_pane_g1

0xb217,	// (0x000617c5) grid_wheel_folder_pane_ParamLimits

0xb217,	// (0x000617c5) grid_wheel_folder_pane

0xb22d,	// (0x000617db) list_wheel_apps_pane_ParamLimits

0xb22d,	// (0x000617db) list_wheel_apps_pane

0xb23e,	// (0x000617ec) main_apps_wheel_pane_g1_ParamLimits

0xb23e,	// (0x000617ec) main_apps_wheel_pane_g1

0xb252,	// (0x00061800) main_apps_wheel_pane_g2_ParamLimits

0xb252,	// (0x00061800) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0006605f) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0006605f) main_apps_wheel_pane_g

0xb26a,	// (0x00061818) main_apps_wheel_pane_t1_ParamLimits

0xb26a,	// (0x00061818) main_apps_wheel_pane_t1

0xb28d,	// (0x0006183b) list_wheel_apps_pane_g1

0xb295,	// (0x00061843) list_wheel_apps_pane_g2

0xb29d,	// (0x0006184b) list_wheel_apps_pane_g3

0xb2a7,	// (0x00061855) list_wheel_apps_pane_g4

0xb2b1,	// (0x0006185f) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x00066064) list_wheel_apps_pane_g

0x154f,	// (0x00057afd) navi_icon_text_pane

0x731c,	// (0x0005d8ca) aid_fill_nsta

0xb2d4,	// (0x00061882) navi_icon_text_pane_g1

0xb2e0,	// (0x0006188e) navi_icon_text_pane_t1

0x1433,	// (0x000579e1) list_set_graphic_pane_t1_ParamLimits

0x1433,	// (0x000579e1) list_set_graphic_pane_t1

0x9bd8,	// (0x00060186) popup_midp_note_alarm_window_t6_ParamLimits

0x9bd8,	// (0x00060186) popup_midp_note_alarm_window_t6

0x9bea,	// (0x00060198) popup_midp_note_alarm_window_t7_ParamLimits

0x9bea,	// (0x00060198) popup_midp_note_alarm_window_t7

0x9bfc,	// (0x000601aa) popup_midp_note_alarm_window_t8_ParamLimits

0x9bfc,	// (0x000601aa) popup_midp_note_alarm_window_t8

0x9c0e,	// (0x000601bc) popup_midp_note_alarm_window_t9_ParamLimits

0x9c0e,	// (0x000601bc) popup_midp_note_alarm_window_t9

0x9c20,	// (0x000601ce) popup_midp_note_alarm_window_t10_ParamLimits

0x9c20,	// (0x000601ce) popup_midp_note_alarm_window_t10

0x9c32,	// (0x000601e0) popup_midp_note_alarm_window_t11_ParamLimits

0x9c32,	// (0x000601e0) popup_midp_note_alarm_window_t11

0x9c44,	// (0x000601f2) scroll_pane_cp17_ParamLimits

0x9c44,	// (0x000601f2) scroll_pane_cp17

0x77b3,	// (0x0005dd61) volume_small_pane_cp_g1

0x7bcd,	// (0x0005e17b) volume_small_pane_cp_g2

0x7bd6,	// (0x0005e184) volume_small_pane_cp_g3

0x7bdf,	// (0x0005e18d) volume_small_pane_cp_g4

0x7be8,	// (0x0005e196) volume_small_pane_cp_g5

0x7b97,	// (0x0005e145) volume_small_pane_cp_g6

0x7bf1,	// (0x0005e19f) volume_small_pane_cp_g7

0x7bfa,	// (0x0005e1a8) volume_small_pane_cp_g8

0x7c03,	// (0x0005e1b1) volume_small_pane_cp_g9

0x7c0c,	// (0x0005e1ba) volume_small_pane_cp_g10

0x16b5,	// (0x00057c63) midp_ticker_pane_g1_ParamLimits

0x16c1,	// (0x00057c6f) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00065cdc) midp_ticker_pane_g_ParamLimits

0x16cd,	// (0x00057c7b) midp_ticker_pane_t1_ParamLimits

0x7332,	// (0x0005d8e0) aid_fill_nsta_2

0x9479,	// (0x0005fa27) list_form2_midp_pane

0xa58c,	// (0x00060b3a) midp_editing_number_pane_ParamLimits

0xa59b,	// (0x00060b49) midp_ticker_pane_ParamLimits

0xb2f2,	// (0x000618a0) form2_midp_field_pane

0xb316,	// (0x000618c4) scroll_pane_cp51

0xb336,	// (0x000618e4) form2_midp_button_pane_ParamLimits

0xb336,	// (0x000618e4) form2_midp_button_pane

0xb348,	// (0x000618f6) form2_midp_content_pane_ParamLimits

0xb348,	// (0x000618f6) form2_midp_content_pane

0xb362,	// (0x00061910) form2_midp_field_choice_group_pane

0xb36a,	// (0x00061918) form2_midp_field_pane_g1

0xb372,	// (0x00061920) form2_midp_field_pane_g2

0xb37a,	// (0x00061928) form2_midp_field_pane_g3

0xb382,	// (0x00061930) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x00066089) form2_midp_field_pane_g

0xb38a,	// (0x00061938) form2_midp_gauge_slider_pane

0xb392,	// (0x00061940) form2_midp_gauge_wait_pane

0xb39a,	// (0x00061948) form2_midp_image_pane_ParamLimits

0xb39a,	// (0x00061948) form2_midp_image_pane

0xb3b5,	// (0x00061963) form2_midp_label_pane_ParamLimits

0xb3b5,	// (0x00061963) form2_midp_label_pane

0xb3ce,	// (0x0006197c) form2_midp_label_pane_cp_ParamLimits

0xb3ce,	// (0x0006197c) form2_midp_label_pane_cp

0xb3ef,	// (0x0006199d) form2_midp_string_pane_ParamLimits

0xb3ef,	// (0x0006199d) form2_midp_string_pane

0x7c15,	// (0x0005e1c3) form2_midp_text_pane_ParamLimits

0x7c15,	// (0x0005e1c3) form2_midp_text_pane

0xb401,	// (0x000619af) form2_midp_time_pane

0xb411,	// (0x000619bf) input_focus_pane_cp51_ParamLimits

0xb411,	// (0x000619bf) input_focus_pane_cp51

0xb429,	// (0x000619d7) form2_midp_label_pane_t1_ParamLimits

0xb429,	// (0x000619d7) form2_midp_label_pane_t1

0x7c32,	// (0x0005e1e0) form2_mdip_text_pane_t1_ParamLimits

0x7c32,	// (0x0005e1e0) form2_mdip_text_pane_t1

0x3ed1,	// (0x0005a47f) form2_midp_time_pane_t1

0xb472,	// (0x00061a20) form2_midp_gauge_slider_pane_t1

0xb484,	// (0x00061a32) form2_midp_gauge_slider_pane_t2

0xb496,	// (0x00061a44) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x00066092) form2_midp_gauge_slider_pane_t

0xb4a8,	// (0x00061a56) form2_midp_slider_pane

0xb4b4,	// (0x00061a62) form2_midp_gauge_wait_pane_t1

0xb4c2,	// (0x00061a70) form2_midp_wait_pane_ParamLimits

0xb4c2,	// (0x00061a70) form2_midp_wait_pane

0xb4ed,	// (0x00061a9b) list_single_2graphic_pane_cp4_ParamLimits

0xb4ed,	// (0x00061a9b) list_single_2graphic_pane_cp4

0x9195,	// (0x0005f743) list_single_midp_graphic_pane_cp_ParamLimits

0x9195,	// (0x0005f743) list_single_midp_graphic_pane_cp

0xe0b7,	// (0x00064665) list_highlight_pane_cp20

0xb515,	// (0x00061ac3) list_single_2graphic_pane_g1_cp4

0xaa72,	// (0x00061020) list_single_2graphic_pane_g2_cp4

0xb51d,	// (0x00061acb) list_single_2graphic_pane_t1_cp4

0xe105,	// (0x000646b3) list_highlight_pane_cp21

0xb52c,	// (0x00061ada) list_single_midp_graphic_pane_g4_cp

0xb53b,	// (0x00061ae9) list_single_midp_graphic_pane_t1_cp

0xb550,	// (0x00061afe) form2_mdip_string_pane_t1_ParamLimits

0xb550,	// (0x00061afe) form2_mdip_string_pane_t1

0xe0b7,	// (0x00064665) bg_wml_button_pane_cp2

0xe0ad,	// (0x0006465b) form2_midp_image_pane_g1

0x42f0,	// (0x0005a89e) list_double_large_graphic_pane_g5_ParamLimits

0x42f0,	// (0x0005a89e) list_double_large_graphic_pane_g5

0x6998,	// (0x0005cf46) midp_form_pane_ParamLimits

0xe105,	// (0x000646b3) main_apps_wheel_pane_ParamLimits

0x7104,	// (0x0005d6b2) popup_preview_window_ParamLimits

0x7104,	// (0x0005d6b2) popup_preview_window

0x72bf,	// (0x0005d86d) popup_touch_info_window_ParamLimits

0x72bf,	// (0x0005d86d) popup_touch_info_window

0x72dd,	// (0x0005d88b) popup_touch_menu_window_ParamLimits

0x72dd,	// (0x0005d88b) popup_touch_menu_window

0xe0a3,	// (0x00064651) bg_popup_sub_pane_cp6

0xb657,	// (0x00061c05) list_touch_menu_pane

0xb65f,	// (0x00061c0d) list_single_touch_menu_pane_ParamLimits

0xb65f,	// (0x00061c0d) list_single_touch_menu_pane

0xb675,	// (0x00061c23) list_single_touch_menu_pane_t1

0xe105,	// (0x000646b3) bg_popup_sub_pane_cp7_ParamLimits

0xe105,	// (0x000646b3) bg_popup_sub_pane_cp7

0xb683,	// (0x00061c31) heading_sub_pane

0xb68b,	// (0x00061c39) list_touch_info_pane_ParamLimits

0xb68b,	// (0x00061c39) list_touch_info_pane

0xb76f,	// (0x00061d1d) list_single_touch_info_pane_ParamLimits

0xb76f,	// (0x00061d1d) list_single_touch_info_pane

0xb781,	// (0x00061d2f) list_single_touch_info_pane_t1

0xb78f,	// (0x00061d3d) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x000660a0) list_single_touch_info_pane_t

0x169e,	// (0x00057c4c) bg_popup_heading_pane_cp

0xb79d,	// (0x00061d4b) heading_sub_pane_t1

0x90ba,	// (0x0005f668) bg_popup_preview_window_pane_cp_ParamLimits

0x90ba,	// (0x0005f668) bg_popup_preview_window_pane_cp

0xb683,	// (0x00061c31) heading_preview_pane

0xb68b,	// (0x00061c39) list_preview_pane_ParamLimits

0xb68b,	// (0x00061c39) list_preview_pane

0xb7ab,	// (0x00061d59) popup_preview_window_g1

0xb76f,	// (0x00061d1d) list_single_preview_pane_ParamLimits

0xb76f,	// (0x00061d1d) list_single_preview_pane

0xb7b3,	// (0x00061d61) list_single_preview_pane_g1

0xb7bb,	// (0x00061d69) list_single_preview_pane_t1

0xb781,	// (0x00061d2f) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x000660a5) list_single_preview_pane_t

0xb7c9,	// (0x00061d77) bg_popup_heading_pane_cp2_ParamLimits

0xb7c9,	// (0x00061d77) bg_popup_heading_pane_cp2

0xb7df,	// (0x00061d8d) heading_preview_pane_g1

0xb7e7,	// (0x00061d95) heading_preview_pane_t1_ParamLimits

0xb7e7,	// (0x00061d95) heading_preview_pane_t1

0xe158,	// (0x00064706) soft_indicator_pane_t1_ParamLimits

0xf0b1,	// (0x0006565f) scroll_pane_ParamLimits

0xf44e,	// (0x000659fc) scroll_sc2_left_pane

0xf457,	// (0x00065a05) scroll_sc2_right_pane

0xf476,	// (0x00065a24) scroll_bg_pane_g1_ParamLimits

0xf48b,	// (0x00065a39) scroll_bg_pane_g2_ParamLimits

0xf4a3,	// (0x00065a51) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00065c67) scroll_bg_pane_g_ParamLimits

0xf476,	// (0x00065a24) scroll_handle_pane_g1_ParamLimits

0xf4b8,	// (0x00065a66) scroll_handle_pane_g2_ParamLimits

0xf4a3,	// (0x00065a51) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x00065c6e) scroll_handle_pane_g_ParamLimits

0x6d87,	// (0x0005d335) popup_choice_list_window_ParamLimits

0x6d87,	// (0x0005d335) popup_choice_list_window

0x8f78,	// (0x0005f526) choice_list_pane

0x8ffa,	// (0x0005f5a8) cell_toolbar_pane_t1

0x9022,	// (0x0005f5d0) toolbar_button_pane_ParamLimits

0xa0fe,	// (0x000606ac) ai_gene_pane_1_t2_ParamLimits

0xa0fe,	// (0x000606ac) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00065e96) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00065e96) ai_gene_pane_1_t

0xb804,	// (0x00061db2) scroll_sc2_left_pane_g1

0xb804,	// (0x00061db2) scroll_sc2_right_pane_g1

0xf51d,	// (0x00065acb) bg_popup_sub_pane_cp10

0xb80e,	// (0x00061dbc) list_choice_list_pane

0xb827,	// (0x00061dd5) list_single_choice_list_pane_ParamLimits

0xb827,	// (0x00061dd5) list_single_choice_list_pane

0xb83a,	// (0x00061de8) list_single_choice_list_pane_g1

0x61d8,	// (0x0005c786) list_single_choice_list_pane_t1_ParamLimits

0x61d8,	// (0x0005c786) list_single_choice_list_pane_t1

0xb842,	// (0x00061df0) choice_list_pane_g1

0xb84a,	// (0x00061df8) choice_list_pane_t1

0xe0a3,	// (0x00064651) input_focus_pane_cp11

0xf3c3,	// (0x00065971) title_pane_stacon_g2_ParamLimits

0xf3c3,	// (0x00065971) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00065c4d) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00065c4d) title_pane_stacon_g

0x169e,	// (0x00057c4c) cursor_press_pane

0x6e2f,	// (0x0005d3dd) popup_fep_hwr_window_ParamLimits

0x6e2f,	// (0x0005d3dd) popup_fep_hwr_window

0x6ea7,	// (0x0005d455) popup_fep_vkb_window_ParamLimits

0x6ea7,	// (0x0005d455) popup_fep_vkb_window

0xb858,	// (0x00061e06) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x000660ce) fep_vkb_side_pane_g_ParamLimits

0x7c89,	// (0x0005e237) fep_hwr_candidate_pane_ParamLimits

0x7c89,	// (0x0005e237) fep_hwr_candidate_pane

0x7cb3,	// (0x0005e261) fep_hwr_side_pane_ParamLimits

0x7cb3,	// (0x0005e261) fep_hwr_side_pane

0x7cd3,	// (0x0005e281) fep_hwr_top_pane_ParamLimits

0x7cd3,	// (0x0005e281) fep_hwr_top_pane

0x7ceb,	// (0x0005e299) fep_hwr_write_pane_ParamLimits

0x7ceb,	// (0x0005e299) fep_hwr_write_pane

0xfb20,	// (0x000660ce) fep_vkb_side_pane_g

0xb860,	// (0x00061e0e) fep_hwr_top_pane_g1

0xb872,	// (0x00061e20) fep_hwr_top_pane_g2

0x7d25,	// (0x0005e2d3) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x000660aa) fep_hwr_top_pane_g

0x7d3a,	// (0x0005e2e8) fep_hwr_top_text_pane

0x1240,	// (0x000577ee) fep_hwr_top_text_pane_g1

0xb8a8,	// (0x00061e56) fep_hwr_top_text_pane_t1

0x7e30,	// (0x0005e3de) fep_hwr_candidate_pane_g1

0xbaed,	// (0x0006209b) fep_vkb_keypad_pane_g3_ParamLimits

0xbaed,	// (0x0006209b) fep_vkb_keypad_pane_g3

0xbb15,	// (0x000620c3) fep_vkb_keypad_pane_g4_ParamLimits

0xbb15,	// (0x000620c3) fep_vkb_keypad_pane_g4

0xbb84,	// (0x00062132) fep_vkb_bottom_pane_g2_ParamLimits

0xbb84,	// (0x00062132) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x000660d5) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x000660d5) fep_vkb_bottom_pane_g

0xb804,	// (0x00061db2) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x000660df) cell_vkb_side_pane_g

0xbc0f,	// (0x000621bd) cell_vkb_side_pane_t1

0xbc1d,	// (0x000621cb) cell_vkb_side_pane_t1_copy1

0xb804,	// (0x00061db2) bg_fep_vkb_candidate_pane_g2

0xbd49,	// (0x000622f7) cell_vkb_candidate_pane_ParamLimits

0xb8b6,	// (0x00061e64) aid_size_cell_vkb_ParamLimits

0xb8b6,	// (0x00061e64) aid_size_cell_vkb

0xbd49,	// (0x000622f7) cell_vkb_candidate_pane

0x7e57,	// (0x0005e405) bg_popup_fep_shadow_pane_g1

0xb944,	// (0x00061ef2) fep_vkb_bottom_pane_ParamLimits

0xb944,	// (0x00061ef2) fep_vkb_bottom_pane

0xb97a,	// (0x00061f28) fep_vkb_candidate_pane_ParamLimits

0xb97a,	// (0x00061f28) fep_vkb_candidate_pane

0xb996,	// (0x00061f44) fep_vkb_keypad_pane_ParamLimits

0xb996,	// (0x00061f44) fep_vkb_keypad_pane

0xb9d5,	// (0x00061f83) fep_vkb_side_pane_ParamLimits

0xb9d5,	// (0x00061f83) fep_vkb_side_pane

0xba11,	// (0x00061fbf) fep_vkb_top_pane_ParamLimits

0xba11,	// (0x00061fbf) fep_vkb_top_pane

0xba46,	// (0x00061ff4) fep_vkb_top_pane_g1_ParamLimits

0xba46,	// (0x00061ff4) fep_vkb_top_pane_g1

0xba55,	// (0x00062003) fep_vkb_top_pane_g2_ParamLimits

0xba55,	// (0x00062003) fep_vkb_top_pane_g2

0xba64,	// (0x00062012) fep_vkb_top_pane_g3_ParamLimits

0xba64,	// (0x00062012) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x000660c5) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x000660c5) fep_vkb_top_pane_g

0xba82,	// (0x00062030) fep_vkb_top_text_pane_ParamLimits

0xba82,	// (0x00062030) fep_vkb_top_text_pane

0xba93,	// (0x00062041) fep_vkb_side_pane_g1_ParamLimits

0xba93,	// (0x00062041) fep_vkb_side_pane_g1

0xbadc,	// (0x0006208a) grid_vkb_side_pane_ParamLimits

0xbadc,	// (0x0006208a) grid_vkb_side_pane

0x7e5f,	// (0x0005e40d) bg_popup_fep_shadow_pane_g2

0x7e68,	// (0x0005e416) bg_popup_fep_shadow_pane_g3

0x7e70,	// (0x0005e41e) bg_popup_fep_shadow_pane_g4

0x7e79,	// (0x0005e427) bg_popup_fep_shadow_pane_g5

0x7e83,	// (0x0005e431) bg_popup_fep_shadow_pane_g6

0x7e8b,	// (0x0005e439) bg_popup_fep_shadow_pane_g7

0xf1a5,	// (0x00065753) bg_popup_fep_shadow_pane_g8

0xbb33,	// (0x000620e1) grid_vkb_keypad_number_pane_ParamLimits

0xbb33,	// (0x000620e1) grid_vkb_keypad_number_pane

0xbb43,	// (0x000620f1) grid_vkb_keypad_pane_ParamLimits

0xbb43,	// (0x000620f1) grid_vkb_keypad_pane

0xbb69,	// (0x00062117) fep_vkb_bottom_pane_g1_ParamLimits

0xbb69,	// (0x00062117) fep_vkb_bottom_pane_g1

0xbb92,	// (0x00062140) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbb92,	// (0x00062140) grid_vkb_keypad_bottom_left_pane

0xbba7,	// (0x00062155) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbba7,	// (0x00062155) grid_vkb_keypad_bottom_right_pane

0xbbbc,	// (0x0006216a) fep_vkb_top_text_pane_g1

0xbbd7,	// (0x00062185) fep_vkb_top_text_pane_t1

0xbbec,	// (0x0006219a) cell_vkb_side_pane_ParamLimits

0xbbec,	// (0x0006219a) cell_vkb_side_pane

0xb804,	// (0x00061db2) cell_vkb_side_pane_g1

0xbc2b,	// (0x000621d9) cell_vkb_keypad_pane_ParamLimits

0xbc2b,	// (0x000621d9) cell_vkb_keypad_pane

0xbca0,	// (0x0006224e) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x000660f2) bg_popup_fep_shadow_pane_g

0x7e9d,	// (0x0005e44b) cell_hwr_side_pane_g1

0x7e9d,	// (0x0005e44b) cell_hwr_side_pane_g2

0xbcaa,	// (0x00062258) cell_vkb_keypad_pane_t1

0xbcb8,	// (0x00062266) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbcb8,	// (0x00062266) cell_vkb_keypad_bottom_left_pane

0xbcd5,	// (0x00062283) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbcd5,	// (0x00062283) cell_vkb_keypad_bottom_right_pane

0xb804,	// (0x00061db2) cell_vkb_keypad_bottom_left_pane_g1

0xb804,	// (0x00061db2) cell_vkb_keypad_bottom_right_pane_g1

0xbd0e,	// (0x000622bc) cell_vkb_keypad_number_pane_ParamLimits

0xbd0e,	// (0x000622bc) cell_vkb_keypad_number_pane

0xbd2d,	// (0x000622db) cell_vkb_keypad_number_pane_g1

0xbd37,	// (0x000622e5) cell_vkb_keypad_number_pane_g2

0xbd40,	// (0x000622ee) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x000660e4) cell_vkb_keypad_number_pane_g

0xbcaa,	// (0x00062258) cell_vkb_keypad_number_pane_t1

0xbd64,	// (0x00062312) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x00066105) cell_hwr_side_pane_g

0xbd7d,	// (0x0006232b) cell_hwr_side_pane_t1

0x7ea7,	// (0x0005e455) cell_hwr_side_pane_t1_copy1

0x7eb5,	// (0x0005e463) cell_hwr_candidate_pane_g1

0x7ee4,	// (0x0005e492) cell_hwr_candidate_pane_t1

0xb804,	// (0x00061db2) cell_vkb_candidate_pane_g2

0xbde2,	// (0x00062390) cell_vkb_candidate_pane_t1

0x7c50,	// (0x0005e1fe) bg_popup_fep_shadow_pane_ParamLimits

0x7c50,	// (0x0005e1fe) bg_popup_fep_shadow_pane

0x7d05,	// (0x0005e2b3) bg_fep_hwr_top_pane_g4

0xb884,	// (0x00061e32) bg_hwr_side_pane_g1_ParamLimits

0xb884,	// (0x00061e32) bg_hwr_side_pane_g1

0x7d76,	// (0x0005e324) cell_hwr_side_pane_ParamLimits

0x7d76,	// (0x0005e324) cell_hwr_side_pane

0x7db1,	// (0x0005e35f) fep_hwr_write_pane_g1_ParamLimits

0x7db1,	// (0x0005e35f) fep_hwr_write_pane_g1

0x7dbe,	// (0x0005e36c) fep_hwr_write_pane_g2_ParamLimits

0x7dbe,	// (0x0005e36c) fep_hwr_write_pane_g2

0x7dcb,	// (0x0005e379) fep_hwr_write_pane_g3_ParamLimits

0x7dcb,	// (0x0005e379) fep_hwr_write_pane_g3

0x7dd9,	// (0x0005e387) fep_hwr_write_pane_g4_ParamLimits

0x7dd9,	// (0x0005e387) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x000660b1) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x000660b1) fep_hwr_write_pane_g

0x7d05,	// (0x0005e2b3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7d05,	// (0x0005e2b3) bg_fep_hwr_candidate_pane_g2

0x7dee,	// (0x0005e39c) cell_hwr_candidate_pane_ParamLimits

0x7dee,	// (0x0005e39c) cell_hwr_candidate_pane

0x7e30,	// (0x0005e3de) fep_hwr_candidate_pane_g1_ParamLimits

0xb8e4,	// (0x00061e92) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb8e4,	// (0x00061e92) bg_popup_fep_shadow_pane_cp2

0xba74,	// (0x00062022) fep_vkb_top_pane_g4_ParamLimits

0xba74,	// (0x00062022) fep_vkb_top_pane_g4

0xbaba,	// (0x00062068) fep_vkb_side_pane_g2_ParamLimits

0xbaba,	// (0x00062068) fep_vkb_side_pane_g2

0x5ef0,	// (0x0005c49e) list_setting_pane_t4_ParamLimits

0x5ef0,	// (0x0005c49e) list_setting_pane_t4

0x5f8a,	// (0x0005c538) list_setting_number_pane_t5_ParamLimits

0x5f8a,	// (0x0005c538) list_setting_number_pane_t5

0x656e,	// (0x0005cb1c) list_double_heading_pane_cp2_ParamLimits

0x656e,	// (0x0005cb1c) list_double_heading_pane_cp2

0x247b,	// (0x00058a29) list_double_heading_pane_g1_cp2_ParamLimits

0x247b,	// (0x00058a29) list_double_heading_pane_g1_cp2

0xbdf0,	// (0x0006239e) list_double_heading_pane_g2_cp2_ParamLimits

0xbdf0,	// (0x0006239e) list_double_heading_pane_g2_cp2

0xbe04,	// (0x000623b2) list_double_heading_pane_t1_cp2_ParamLimits

0xbe04,	// (0x000623b2) list_double_heading_pane_t1_cp2

0xbe1a,	// (0x000623c8) list_double_heading_pane_t2_cp2_ParamLimits

0xbe1a,	// (0x000623c8) list_double_heading_pane_t2_cp2

0xe09b,	// (0x00064649) aid_value_unit2

0x547e,	// (0x0005ba2c) popup_preview_fixed_window

0xe23d,	// (0x000647eb) bg_popup_preview_window_pane_cp02

0xbe2c,	// (0x000623da) list_preview_fixed_pane

0xbe72,	// (0x00062420) list_empty_pane_fp_ParamLimits

0xbe72,	// (0x00062420) list_empty_pane_fp

0xbe72,	// (0x00062420) list_single_cale_day_pane_fp_ParamLimits

0xbe72,	// (0x00062420) list_single_cale_day_pane_fp

0xbe72,	// (0x00062420) list_single_graphic_heading_pane_fp_ParamLimits

0xbe72,	// (0x00062420) list_single_graphic_heading_pane_fp

0xbe72,	// (0x00062420) list_single_graphic_pane_fp_ParamLimits

0xbe72,	// (0x00062420) list_single_graphic_pane_fp

0xbe72,	// (0x00062420) list_single_heading_pane_fp_ParamLimits

0xbe72,	// (0x00062420) list_single_heading_pane_fp

0xbe72,	// (0x00062420) list_single_pane_fp_ParamLimits

0xbe72,	// (0x00062420) list_single_pane_fp

0xbe88,	// (0x00062436) list_single_pane_fp_g1_ParamLimits

0xbe88,	// (0x00062436) list_single_pane_fp_g1

0x2487,	// (0x00058a35) list_single_pane_fp_g2_ParamLimits

0x2487,	// (0x00058a35) list_single_pane_fp_g2

0xbe94,	// (0x00062442) list_single_pane_fp_g3_ParamLimits

0xbe94,	// (0x00062442) list_single_pane_fp_g3

0xbea8,	// (0x00062456) list_single_pane_fp_g4_ParamLimits

0xbea8,	// (0x00062456) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x00066118) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x00066118) list_single_pane_fp_g

0x3ee4,	// (0x0005a492) list_single_pane_fp_t1_ParamLimits

0x3ee4,	// (0x0005a492) list_single_pane_fp_t1

0x3efb,	// (0x0005a4a9) list_single_graphic_pane_fp_g1_ParamLimits

0x3efb,	// (0x0005a4a9) list_single_graphic_pane_fp_g1

0xbe88,	// (0x00062436) list_single_graphic_pane_fp_g2_ParamLimits

0xbe88,	// (0x00062436) list_single_graphic_pane_fp_g2

0x2487,	// (0x00058a35) list_single_graphic_pane_fp_g3_ParamLimits

0x2487,	// (0x00058a35) list_single_graphic_pane_fp_g3

0xbe94,	// (0x00062442) list_single_graphic_pane_fp_g4_ParamLimits

0xbe94,	// (0x00062442) list_single_graphic_pane_fp_g4

0xbea8,	// (0x00062456) list_single_graphic_pane_fp_g5_ParamLimits

0xbea8,	// (0x00062456) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x00066121) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x00066121) list_single_graphic_pane_fp_g

0x3f07,	// (0x0005a4b5) list_single_graphic_pane_fp_t1_ParamLimits

0x3f07,	// (0x0005a4b5) list_single_graphic_pane_fp_t1

0x3efb,	// (0x0005a4a9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3efb,	// (0x0005a4a9) list_single_graphic_heading_pane_fp_g1

0xbe88,	// (0x00062436) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbe88,	// (0x00062436) list_single_graphic_heading_pane_fp_g2

0x2487,	// (0x00058a35) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2487,	// (0x00058a35) list_single_graphic_heading_pane_fp_g3

0xbe94,	// (0x00062442) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbe94,	// (0x00062442) list_single_graphic_heading_pane_fp_g4

0xbea8,	// (0x00062456) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbea8,	// (0x00062456) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x00066121) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x00066121) list_single_graphic_heading_pane_fp_g

0x3f1d,	// (0x0005a4cb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3f1d,	// (0x0005a4cb) list_single_graphic_heading_pane_fp_t1

0x3f33,	// (0x0005a4e1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3f33,	// (0x0005a4e1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0006612c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0006612c) list_single_graphic_heading_pane_fp_t

0x3f45,	// (0x0005a4f3) list_single_cale_day_pane_fp_g1_ParamLimits

0x3f45,	// (0x0005a4f3) list_single_cale_day_pane_fp_g1

0xbeb4,	// (0x00062462) list_single_cale_day_pane_fp_g2_ParamLimits

0xbeb4,	// (0x00062462) list_single_cale_day_pane_fp_g2

0xb69a,	// (0x00061c48) list_single_cale_day_pane_fp_g3_ParamLimits

0xb69a,	// (0x00061c48) list_single_cale_day_pane_fp_g3

0xb6c2,	// (0x00061c70) list_single_cale_day_pane_fp_g4_ParamLimits

0xb6c2,	// (0x00061c70) list_single_cale_day_pane_fp_g4

0xb6e6,	// (0x00061c94) list_single_cale_day_pane_fp_g5_ParamLimits

0xb6e6,	// (0x00061c94) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x00066131) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x00066131) list_single_cale_day_pane_fp_g

0x3f7d,	// (0x0005a52b) list_single_cale_day_pane_fp_t1_ParamLimits

0x3f7d,	// (0x0005a52b) list_single_cale_day_pane_fp_t1

0x3fa3,	// (0x0005a551) list_single_cale_day_pane_fp_t2_ParamLimits

0x3fa3,	// (0x0005a551) list_single_cale_day_pane_fp_t2

0x3fbc,	// (0x0005a56a) list_single_cale_day_pane_fp_t3_ParamLimits

0x3fbc,	// (0x0005a56a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x0006613c) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x0006613c) list_single_cale_day_pane_fp_t

0xbe88,	// (0x00062436) list_empty_pane_fp_g1_ParamLimits

0xbe88,	// (0x00062436) list_empty_pane_fp_g1

0x3fd5,	// (0x0005a583) list_empty_pane_fp_t1

0x3fe3,	// (0x0005a591) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x00066143) list_empty_pane_fp_t

0xbe88,	// (0x00062436) list_single_heading_pane_fp_g1_ParamLimits

0xbe88,	// (0x00062436) list_single_heading_pane_fp_g1

0x2487,	// (0x00058a35) list_single_heading_pane_fp_g2_ParamLimits

0x2487,	// (0x00058a35) list_single_heading_pane_fp_g2

0xbe94,	// (0x00062442) list_single_heading_pane_fp_g3_ParamLimits

0xbe94,	// (0x00062442) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x00066148) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x00066148) list_single_heading_pane_fp_g

0x3ff1,	// (0x0005a59f) list_single_heading_pane_fp_t1_ParamLimits

0x3ff1,	// (0x0005a59f) list_single_heading_pane_fp_t1

0x4003,	// (0x0005a5b1) list_single_heading_pane_fp_t2_ParamLimits

0x4003,	// (0x0005a5b1) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0006614f) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0006614f) list_single_heading_pane_fp_t

0x623e,	// (0x0005c7ec) aid_size_cell_fast

0xe212,	// (0x000647c0) soft_indicator_pane_cp1_t1

0x6247,	// (0x0005c7f5) cell_app_pane_cp2_ParamLimits

0x6247,	// (0x0005c7f5) cell_app_pane_cp2

0x7c72,	// (0x0005e220) fep_hwr_candidate_drop_down_list_pane

0x7e4a,	// (0x0005e3f8) fep_hwr_candidate_pane_g3_ParamLimits

0x7e4a,	// (0x0005e3f8) fep_hwr_candidate_pane_g3

0x344a,	// (0x000599f8) fep_hwr_candidate_pane_g4_ParamLimits

0x344a,	// (0x000599f8) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x000660be) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x000660be) fep_hwr_candidate_pane_g

0xb969,	// (0x00061f17) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb969,	// (0x00061f17) fep_vkb_candidate_drop_down_list_pane

0xbd6c,	// (0x0006231a) fep_vkb_candidate_pane_g3

0xbd74,	// (0x00062322) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x000660eb) fep_vkb_candidate_pane_g

0x7eb5,	// (0x0005e463) cell_hwr_candidate_pane_g1_ParamLimits

0x7ec3,	// (0x0005e471) cell_hwr_candidate_pane_g3_ParamLimits

0x7ec3,	// (0x0005e471) cell_hwr_candidate_pane_g3

0xbd8b,	// (0x00062339) cell_hwr_candidate_pane_g4_ParamLimits

0xbd8b,	// (0x00062339) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x0006610a) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x0006610a) cell_hwr_candidate_pane_g

0xbdac,	// (0x0006235a) cell_vkb_candidate_pane_g3_ParamLimits

0xbdac,	// (0x0006235a) cell_vkb_candidate_pane_g3

0xbdc7,	// (0x00062375) cell_vkb_candidate_pane_g4_ParamLimits

0xbdc7,	// (0x00062375) cell_vkb_candidate_pane_g4

0xbec0,	// (0x0006246e) cell_app_pane_cp2_g1_ParamLimits

0xbec0,	// (0x0006246e) cell_app_pane_cp2_g1

0xbede,	// (0x0006248c) cell_app_pane_cp2_g2_ParamLimits

0xbede,	// (0x0006248c) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x00066154) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x00066154) cell_app_pane_cp2_g

0xbeea,	// (0x00062498) cell_app_pane_cp2_t1_ParamLimits

0xbeea,	// (0x00062498) cell_app_pane_cp2_t1

0xf135,	// (0x000656e3) grid_highlight_pane_cp1_ParamLimits

0xf135,	// (0x000656e3) grid_highlight_pane_cp1

0x7f02,	// (0x0005e4b0) cell_hwr_candidate_pane_cp1_ParamLimits

0x7f02,	// (0x0005e4b0) cell_hwr_candidate_pane_cp1

0x7eb5,	// (0x0005e463) fep_hwr_candidate_drop_down_list_pane_g1

0x7f21,	// (0x0005e4cf) fep_hwr_candidate_drop_down_list_pane_g2

0x7f2e,	// (0x0005e4dc) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x00066159) fep_hwr_candidate_drop_down_list_pane_g

0x7f3b,	// (0x0005e4e9) fep_hwr_candidate_drop_down_list_scroll_pane

0x7f44,	// (0x0005e4f2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f44,	// (0x0005e4f2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7f51,	// (0x0005e4ff) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f51,	// (0x0005e4ff) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7f5e,	// (0x0005e50c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f5e,	// (0x0005e50c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7f6b,	// (0x0005e519) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f6b,	// (0x0005e519) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7f86,	// (0x0005e534) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f86,	// (0x0005e534) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7fa1,	// (0x0005e54f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7fa1,	// (0x0005e54f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7fbc,	// (0x0005e56a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7fbc,	// (0x0005e56a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7fd7,	// (0x0005e585) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7fd7,	// (0x0005e585) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x00066160) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x00066160) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbefc,	// (0x000624aa) cell_vkb_candidate_pane_cp1_ParamLimits

0xbefc,	// (0x000624aa) cell_vkb_candidate_pane_cp1

0xba74,	// (0x00062022) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xba74,	// (0x00062022) fep_vkb_candidate_drop_down_list_pane_g1

0xbf1c,	// (0x000624ca) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbf1c,	// (0x000624ca) fep_vkb_candidate_drop_down_list_pane_g2

0xbf29,	// (0x000624d7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbf29,	// (0x000624d7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x00066171) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x00066171) fep_vkb_candidate_drop_down_list_pane_g

0xbf36,	// (0x000624e4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbf36,	// (0x000624e4) fep_vkb_candidate_drop_down_list_scroll_pane

0xbf43,	// (0x000624f1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbf43,	// (0x000624f1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbf50,	// (0x000624fe) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbf50,	// (0x000624fe) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbf5c,	// (0x0006250a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbf5c,	// (0x0006250a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbf68,	// (0x00062516) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbf68,	// (0x00062516) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbf89,	// (0x00062537) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbf89,	// (0x00062537) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbfaa,	// (0x00062558) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbfaa,	// (0x00062558) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbfcb,	// (0x00062579) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbfcb,	// (0x00062579) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbfec,	// (0x0006259a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbfec,	// (0x0006259a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x00066178) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x00066178) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5598,	// (0x0005bb46) title_pane_g1_ParamLimits

0x55a5,	// (0x0005bb53) title_pane_g2_ParamLimits

0xf529,	// (0x00065ad7) title_pane_g_ParamLimits

0x1238,	// (0x000577e6) aid_call2_pane

0x1230,	// (0x000577de) aid_call_pane

0x1240,	// (0x000577ee) popup_clock_analogue_window_g1

0x1240,	// (0x000577ee) popup_clock_analogue_window_g2

0x654f,	// (0x0005cafd) popup_clock_analogue_window_g3

0x6558,	// (0x0005cb06) popup_clock_analogue_window_g4

0xe0ad,	// (0x0006465b) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x00065c7c) popup_clock_analogue_window_g

0x6560,	// (0x0005cb0e) popup_clock_analogue_window_t1

0x65ae,	// (0x0005cb5c) clock_digital_number_pane_ParamLimits

0x65ae,	// (0x0005cb5c) clock_digital_number_pane

0x65ba,	// (0x0005cb68) clock_digital_number_pane_cp02_ParamLimits

0x65ba,	// (0x0005cb68) clock_digital_number_pane_cp02

0x65c6,	// (0x0005cb74) clock_digital_number_pane_cp03_ParamLimits

0x65c6,	// (0x0005cb74) clock_digital_number_pane_cp03

0x65d2,	// (0x0005cb80) clock_digital_number_pane_cp04_ParamLimits

0x65d2,	// (0x0005cb80) clock_digital_number_pane_cp04

0x65de,	// (0x0005cb8c) clock_digital_separator_pane_ParamLimits

0x65de,	// (0x0005cb8c) clock_digital_separator_pane

0x65ea,	// (0x0005cb98) popup_clock_digital_window_t1_ParamLimits

0x65ea,	// (0x0005cb98) popup_clock_digital_window_t1

0xe0ad,	// (0x0006465b) clock_digital_number_pane_g1

0xe0ad,	// (0x0006465b) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00065c87) clock_digital_number_pane_g

0xe0ad,	// (0x0006465b) clock_digital_separator_pane_g1

0xe0ad,	// (0x0006465b) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00065c87) clock_digital_separator_pane_g

0x731c,	// (0x0005d8ca) aid_fill_nsta_ParamLimits

0x7468,	// (0x0005da16) indicator_nsta_pane_ParamLimits

0x75e1,	// (0x0005db8f) popup_clock_analogue_window

0x75e1,	// (0x0005db8f) popup_clock_digital_window

0xb0fc,	// (0x000616aa) grid_indicator_nsta_pane_ParamLimits

0xb125,	// (0x000616d3) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0006603e) clock_nsta_pane_t

0x647a,	// (0x0005ca28) aid_size_max_handle

0x6484,	// (0x0005ca32) aid_size_min_handle

0x169e,	// (0x00057c4c) editor_scroll_pane

0xc007,	// (0x000625b5) ex_editor_pane

0xf267,	// (0x00065815) scroll_pane_cp13

0xf0dd,	// (0x0006568b) scroll_pane_cp14

0x126f,	// (0x0005781d) scroll_pane_cp36

0x6582,	// (0x0005cb30) list_single_graphic_hl_pane_cp2_ParamLimits

0x6582,	// (0x0005cb30) list_single_graphic_hl_pane_cp2

0x7a58,	// (0x0005e006) list_single_graphic_hl_pane_ParamLimits

0x7a58,	// (0x0005e006) list_single_graphic_hl_pane

0x7ff2,	// (0x0005e5a0) aid_size_min_hl_cp1

0xc00f,	// (0x000625bd) list_highlight_pane_cp34_ParamLimits

0xc00f,	// (0x000625bd) list_highlight_pane_cp34

0xc020,	// (0x000625ce) list_single_graphic_hl_pane_g1_ParamLimits

0xc020,	// (0x000625ce) list_single_graphic_hl_pane_g1

0x7ffb,	// (0x0005e5a9) list_single_graphic_hl_pane_g2_ParamLimits

0x7ffb,	// (0x0005e5a9) list_single_graphic_hl_pane_g2

0x7ffb,	// (0x0005e5a9) list_single_graphic_hl_pane_g3_ParamLimits

0x7ffb,	// (0x0005e5a9) list_single_graphic_hl_pane_g3

0x8007,	// (0x0005e5b5) list_single_graphic_hl_pane_g4_ParamLimits

0x8007,	// (0x0005e5b5) list_single_graphic_hl_pane_g4

0x8013,	// (0x0005e5c1) list_single_graphic_hl_pane_g5_ParamLimits

0x8013,	// (0x0005e5c1) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x00066189) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x00066189) list_single_graphic_hl_pane_g

0x8027,	// (0x0005e5d5) list_single_graphic_hl_pane_t1_ParamLimits

0x8027,	// (0x0005e5d5) list_single_graphic_hl_pane_t1

0xc02d,	// (0x000625db) aid_size_min_hl_cp2

0xc036,	// (0x000625e4) list_highlight_pane_cp34_cp2_ParamLimits

0xc036,	// (0x000625e4) list_highlight_pane_cp34_cp2

0xc020,	// (0x000625ce) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc020,	// (0x000625ce) list_single_graphic_hl_pane_g1_cp2

0xc043,	// (0x000625f1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc043,	// (0x000625f1) list_single_graphic_hl_pane_g2_cp2

0xc04f,	// (0x000625fd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc04f,	// (0x000625fd) list_single_graphic_hl_pane_g3_cp2

0x11d6,	// (0x00057784) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x11d6,	// (0x00057784) list_single_graphic_hl_pane_g4_cp2

0xc05d,	// (0x0006260b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc05d,	// (0x0006260b) list_single_graphic_hl_pane_g5_cp2

0x6bfc,	// (0x0005d1aa) control_pane_g4_ParamLimits

0x6bfc,	// (0x0005d1aa) control_pane_g4

0xf51d,	// (0x00065acb) bg_popup_sub_pane_cp10_ParamLimits

0xb80e,	// (0x00061dbc) list_choice_list_pane_ParamLimits

0xb81d,	// (0x00061dcb) scroll_pane_cp23

0xe23d,	// (0x000647eb) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe2c,	// (0x000623da) list_preview_fixed_pane_ParamLimits

0xbe42,	// (0x000623f0) list_preview_fixed_pane_cp_ParamLimits

0xbe42,	// (0x000623f0) list_preview_fixed_pane_cp

0xbe4e,	// (0x000623fc) popup_preview_fixed_window_g1_ParamLimits

0xbe4e,	// (0x000623fc) popup_preview_fixed_window_g1

0xbe5a,	// (0x00062408) popup_preview_fixed_window_g2_ParamLimits

0xbe5a,	// (0x00062408) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x00066111) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x00066111) popup_preview_fixed_window_g

0x6356,	// (0x0005c904) aid_navi_side_left_pane_ParamLimits

0x636b,	// (0x0005c919) aid_navi_side_right_pane_ParamLimits

0x6383,	// (0x0005c931) navi_icon_pane_stacon_ParamLimits

0x6397,	// (0x0005c945) navi_navi_pane_stacon_ParamLimits

0x6383,	// (0x0005c931) navi_text_pane_stacon_ParamLimits

0x534d,	// (0x0005b8fb) main_text_info_pane

0xc087,	// (0x00062635) listscroll_text_info_pane

0xc08f,	// (0x0006263d) list_text_info_pane_ParamLimits

0xc08f,	// (0x0006263d) list_text_info_pane

0xc09e,	// (0x0006264c) scroll_pane_cp24_ParamLimits

0xc09e,	// (0x0006264c) scroll_pane_cp24

0xc0bc,	// (0x0006266a) list_text_info_pane_t1_ParamLimits

0xc0bc,	// (0x0006266a) list_text_info_pane_t1

0x6da3,	// (0x0005d351) popup_fast_swap2_window_ParamLimits

0x6da3,	// (0x0005d351) popup_fast_swap2_window

0xc0f0,	// (0x0006269e) aid_size_cell_fast2

0xe0a3,	// (0x00064651) bg_popup_window_pane_cp17

0xc0fa,	// (0x000626a8) heading_pane_cp2

0xc102,	// (0x000626b0) listscroll_fast2_pane

0xc10a,	// (0x000626b8) grid_fast2_pane

0xc114,	// (0x000626c2) listscroll_fast2_pane_g1

0xc11c,	// (0x000626ca) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x00066194) listscroll_fast2_pane_g

0xf267,	// (0x00065815) scroll_pane_cp26

0xc126,	// (0x000626d4) cell_fast2_pane_ParamLimits

0xc126,	// (0x000626d4) cell_fast2_pane

0xc13b,	// (0x000626e9) cell_fast2_pane_g1

0xc144,	// (0x000626f2) cell_fast2_pane_g2

0xc14d,	// (0x000626fb) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x00066199) cell_fast2_pane_g

0xf014,	// (0x000655c2) grid_highlight_pane_cp9

0x6d6b,	// (0x0005d319) main_eswt_pane_ParamLimits

0x6d6b,	// (0x0005d319) main_eswt_pane

0xc0b3,	// (0x00062661) list_single_text_info_pane

0xc155,	// (0x00062703) eswt_ctrl_button_pane

0xc155,	// (0x00062703) eswt_ctrl_canvas_pane

0xc15d,	// (0x0006270b) eswt_ctrl_combo_pane

0xc155,	// (0x00062703) eswt_ctrl_default_pane

0xc155,	// (0x00062703) eswt_ctrl_label_pane

0xc165,	// (0x00062713) eswt_ctrl_wait_pane

0xc16d,	// (0x0006271b) eswt_shell_pane

0xe0a3,	// (0x00064651) listscroll_eswt_app_pane

0xc18d,	// (0x0006273b) popup_eswt_tasktip_window_ParamLimits

0xc18d,	// (0x0006273b) popup_eswt_tasktip_window

0x90ba,	// (0x0005f668) bg_popup_window_pane_cp18

0xc1a6,	// (0x00062754) eswt_control_pane_g1_ParamLimits

0xc1a6,	// (0x00062754) eswt_control_pane_g1

0xc1b3,	// (0x00062761) eswt_control_pane_g2_ParamLimits

0xc1b3,	// (0x00062761) eswt_control_pane_g2

0xc1c0,	// (0x0006276e) eswt_control_pane_g3_ParamLimits

0xc1c0,	// (0x0006276e) eswt_control_pane_g3

0xc1cd,	// (0x0006277b) eswt_control_pane_g4_ParamLimits

0xc1cd,	// (0x0006277b) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x000661a0) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x000661a0) eswt_control_pane_g

0xf135,	// (0x000656e3) bg_button_pane_ParamLimits

0xf135,	// (0x000656e3) bg_button_pane

0xf029,	// (0x000655d7) common_borders_pane_copy2_ParamLimits

0xf029,	// (0x000655d7) common_borders_pane_copy2

0xc1da,	// (0x00062788) control_button_pane_g1_ParamLimits

0xc1da,	// (0x00062788) control_button_pane_g1

0xc1e6,	// (0x00062794) control_button_pane_g2_ParamLimits

0xc1e6,	// (0x00062794) control_button_pane_g2

0xc1f2,	// (0x000627a0) control_button_pane_g3_ParamLimits

0xc1f2,	// (0x000627a0) control_button_pane_g3

0x0002,

0xfbfb,	// (0x000661a9) control_button_pane_g_ParamLimits

0xfbfb,	// (0x000661a9) control_button_pane_g

0xc206,	// (0x000627b4) control_button_pane_t1

0xc214,	// (0x000627c2) control_button_pane_t2

0x0001,

0xfc02,	// (0x000661b0) control_button_pane_t

0x902e,	// (0x0005f5dc) bg_button_pane_g1

0x903e,	// (0x0005f5ec) bg_button_pane_g2

0x9036,	// (0x0005f5e4) bg_button_pane_g3

0x904e,	// (0x0005f5fc) bg_button_pane_g4

0x9046,	// (0x0005f5f4) bg_button_pane_g5

0x9056,	// (0x0005f604) bg_button_pane_g6

0x905e,	// (0x0005f60c) bg_button_pane_g7

0x906e,	// (0x0005f61c) bg_button_pane_g8

0x9066,	// (0x0005f614) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00065dea) bg_button_pane_g

0xb7c9,	// (0x00061d77) common_borders_pane_ParamLimits

0xb7c9,	// (0x00061d77) common_borders_pane

0xc1a6,	// (0x00062754) eswt_control_pane_g1_copy1_ParamLimits

0xc1a6,	// (0x00062754) eswt_control_pane_g1_copy1

0xc1b3,	// (0x00062761) eswt_control_pane_g2_copy1_ParamLimits

0xc1b3,	// (0x00062761) eswt_control_pane_g2_copy1

0xc1c0,	// (0x0006276e) eswt_control_pane_g3_copy1_ParamLimits

0xc1c0,	// (0x0006276e) eswt_control_pane_g3_copy1

0xc1cd,	// (0x0006277b) eswt_control_pane_g4_copy1_ParamLimits

0xc1cd,	// (0x0006277b) eswt_control_pane_g4_copy1

0xb804,	// (0x00061db2) bg_eswt_ctrl_canvas_pane_g1

0xb7c9,	// (0x00061d77) common_borders_pane_cp2_ParamLimits

0xb7c9,	// (0x00061d77) common_borders_pane_cp2

0xb7c9,	// (0x00061d77) common_borders_pane_cp3_ParamLimits

0xb7c9,	// (0x00061d77) common_borders_pane_cp3

0xc222,	// (0x000627d0) separator_horizontal_pane

0xc22a,	// (0x000627d8) separator_vertical_pane

0xc1a6,	// (0x00062754) eswt_control_pane_g1_copy2_ParamLimits

0xc1a6,	// (0x00062754) eswt_control_pane_g1_copy2

0xc1b3,	// (0x00062761) eswt_control_pane_g2_copy2_ParamLimits

0xc1b3,	// (0x00062761) eswt_control_pane_g2_copy2

0xc1c0,	// (0x0006276e) eswt_control_pane_g3_copy2_ParamLimits

0xc1c0,	// (0x0006276e) eswt_control_pane_g3_copy2

0xc1cd,	// (0x0006277b) eswt_control_pane_g4_copy2_ParamLimits

0xc1cd,	// (0x0006277b) eswt_control_pane_g4_copy2

0xe0a3,	// (0x00064651) common_borders_pane_cp4

0xc233,	// (0x000627e1) separator_horizontal_pane_g1

0xc23c,	// (0x000627ea) separator_horizontal_pane_g2

0xc245,	// (0x000627f3) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x000661b5) separator_horizontal_pane_g

0xc1a6,	// (0x00062754) eswt_control_pane_g1_copy3_ParamLimits

0xc1a6,	// (0x00062754) eswt_control_pane_g1_copy3

0xc1b3,	// (0x00062761) eswt_control_pane_g2_copy3_ParamLimits

0xc1b3,	// (0x00062761) eswt_control_pane_g2_copy3

0xc1c0,	// (0x0006276e) eswt_control_pane_g3_copy3_ParamLimits

0xc1c0,	// (0x0006276e) eswt_control_pane_g3_copy3

0xc1cd,	// (0x0006277b) eswt_control_pane_g4_copy3_ParamLimits

0xc1cd,	// (0x0006277b) eswt_control_pane_g4_copy3

0xe0a3,	// (0x00064651) common_borders_pane_cp5

0xc24e,	// (0x000627fc) separator_vertical_pane_g1

0xc257,	// (0x00062805) separator_vertical_pane_g2

0xc260,	// (0x0006280e) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x000661bc) separator_vertical_pane_g

0xc1a6,	// (0x00062754) eswt_control_pane_g1_copy4_ParamLimits

0xc1a6,	// (0x00062754) eswt_control_pane_g1_copy4

0xc1b3,	// (0x00062761) eswt_control_pane_g2_copy4_ParamLimits

0xc1b3,	// (0x00062761) eswt_control_pane_g2_copy4

0xc1c0,	// (0x0006276e) eswt_control_pane_g3_copy4_ParamLimits

0xc1c0,	// (0x0006276e) eswt_control_pane_g3_copy4

0xc1cd,	// (0x0006277b) eswt_control_pane_g4_copy4_ParamLimits

0xc1cd,	// (0x0006277b) eswt_control_pane_g4_copy4

0xc269,	// (0x00062817) eswt_ctrl_combo_button_pane

0xc271,	// (0x0006281f) eswt_ctrl_input_pane

0xc279,	// (0x00062827) popup_choice_list_window_cp70

0xc281,	// (0x0006282f) eswt_ctrl_input_pane_t1

0xe0a3,	// (0x00064651) input_focus_pane_cp70

0xb7c9,	// (0x00061d77) bg_button_pane_cp70_ParamLimits

0xb7c9,	// (0x00061d77) bg_button_pane_cp70

0xc28f,	// (0x0006283d) eswt_ctrl_combo_button_pane_g1

0xc297,	// (0x00062845) wait_bar_pane_cp70

0x90ba,	// (0x0005f668) bg_popup_window_pane_cp70_ParamLimits

0x90ba,	// (0x0005f668) bg_popup_window_pane_cp70

0xc29f,	// (0x0006284d) popup_eswt_tasktip_window_t1

0xc2b5,	// (0x00062863) wait_bar_pane_cp71_ParamLimits

0xc2b5,	// (0x00062863) wait_bar_pane_cp71

0xc2c1,	// (0x0006286f) grid_eswt_app_pane

0xf44e,	// (0x000659fc) scroll_pane_cp70

0xc2ca,	// (0x00062878) cell_eswt_app_pane_ParamLimits

0xc2ca,	// (0x00062878) cell_eswt_app_pane

0xc2fa,	// (0x000628a8) cell_eswt_app_pane_g1_ParamLimits

0xc2fa,	// (0x000628a8) cell_eswt_app_pane_g1

0xc329,	// (0x000628d7) cell_eswt_app_pane_g2_ParamLimits

0xc329,	// (0x000628d7) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x000661c3) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x000661c3) cell_eswt_app_pane_g

0xc34d,	// (0x000628fb) cell_eswt_app_pane_t1_ParamLimits

0xc34d,	// (0x000628fb) cell_eswt_app_pane_t1

0xc37f,	// (0x0006292d) grid_highlight_pane_cp70_ParamLimits

0xc37f,	// (0x0006292d) grid_highlight_pane_cp70

0x15a4,	// (0x00057b52) set_content_pane_g1

0x6b92,	// (0x0005d140) status_small_volume_pane

0x803d,	// (0x0005e5eb) status_small_volume_pane_g1

0x8045,	// (0x0005e5f3) volume_small2_pane

0x804e,	// (0x0005e5fc) volume_small2_pane_g1

0x8057,	// (0x0005e605) volume_small2_pane_g2

0x8060,	// (0x0005e60e) volume_small2_pane_g3

0x8069,	// (0x0005e617) volume_small2_pane_g4

0x8072,	// (0x0005e620) volume_small2_pane_g5

0x807b,	// (0x0005e629) volume_small2_pane_g6

0x8084,	// (0x0005e632) volume_small2_pane_g7

0x808d,	// (0x0005e63b) volume_small2_pane_g8

0x8096,	// (0x0005e644) volume_small2_pane_g9

0x809f,	// (0x0005e64d) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x000661c8) volume_small2_pane_g

0xbbbc,	// (0x0006216a) fep_vkb_top_text_pane_g1_ParamLimits

0xbbd7,	// (0x00062185) fep_vkb_top_text_pane_t1_ParamLimits

0xbe66,	// (0x00062414) popup_preview_fixed_window_g3_ParamLimits

0xbe66,	// (0x00062414) popup_preview_fixed_window_g3

0x7252,	// (0x0005d800) popup_toolbar_trans_pane

0xa3f8,	// (0x000609a6) aid_height_set_list_ParamLimits

0xa409,	// (0x000609b7) aid_size_parent_ParamLimits

0xf51d,	// (0x00065acb) list_highlight_pane_cp2_ParamLimits

0x15a4,	// (0x00057b52) set_content_pane_g1_ParamLimits

0x7a76,	// (0x0005e024) list_single_image_pane_ParamLimits

0x7a76,	// (0x0005e024) list_single_image_pane

0xc38b,	// (0x00062939) aid_size_cell_image_ParamLimits

0xc38b,	// (0x00062939) aid_size_cell_image

0xc398,	// (0x00062946) grid_single_image_pane_ParamLimits

0xc398,	// (0x00062946) grid_single_image_pane

0x2487,	// (0x00058a35) list_single_image_pane_g1_ParamLimits

0x2487,	// (0x00058a35) list_single_image_pane_g1

0xbe94,	// (0x00062442) list_single_image_pane_g2_ParamLimits

0xbe94,	// (0x00062442) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x000661dd) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x000661dd) list_single_image_pane_g

0xc3a4,	// (0x00062952) list_single_image_pane_t1_ParamLimits

0xc3a4,	// (0x00062952) list_single_image_pane_t1

0xc3ba,	// (0x00062968) cell_image_list_pane_ParamLimits

0xc3ba,	// (0x00062968) cell_image_list_pane

0xc3ce,	// (0x0006297c) cell_image_list_pane_g1

0xc3d7,	// (0x00062985) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x000661e2) cell_image_list_pane_g

0xc3e0,	// (0x0006298e) aid_size_cell_tb_trans_pane

0xf135,	// (0x000656e3) bg_tb_trans_pane

0xc3f2,	// (0x000629a0) grid_tb_trans_pane

0x902e,	// (0x0005f5dc) bg_tb_trans_pane_g1

0x903e,	// (0x0005f5ec) bg_tb_trans_pane_g2

0x9036,	// (0x0005f5e4) bg_tb_trans_pane_g3

0x904e,	// (0x0005f5fc) bg_tb_trans_pane_g4

0x9046,	// (0x0005f5f4) bg_tb_trans_pane_g5

0x906e,	// (0x0005f61c) bg_tb_trans_pane_g6

0x9066,	// (0x0005f614) bg_tb_trans_pane_g7

0x9056,	// (0x0005f604) bg_tb_trans_pane_g8

0x905e,	// (0x0005f60c) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x000661e7) bg_tb_trans_pane_g

0xc406,	// (0x000629b4) cell_toolbar_trans_pane_ParamLimits

0xc406,	// (0x000629b4) cell_toolbar_trans_pane

0xb804,	// (0x00061db2) cell_toolbar_trans_pane_g1

0xb2fa,	// (0x000618a8) list_form2_midp_pane_t1

0xb308,	// (0x000618b6) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x00066084) list_form2_midp_pane_t

0xb316,	// (0x000618c4) scroll_pane_cp51_ParamLimits

0xb4d2,	// (0x00061a80) form2_midp_wait_pane_g1

0xb4db,	// (0x00061a89) form2_midp_wait_pane_g2

0xb4e4,	// (0x00061a92) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x00066099) form2_midp_wait_pane_g

0xe105,	// (0x000646b3) list_highlight_pane_cp21_ParamLimits

0xb52c,	// (0x00061ada) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb53b,	// (0x00061ae9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa61c,	// (0x00060bca) list_single_2graphic_im_pane_ParamLimits

0xa61c,	// (0x00060bca) list_single_2graphic_im_pane

0xc42c,	// (0x000629da) list_single_2graphic_im_pane_g1_ParamLimits

0xc42c,	// (0x000629da) list_single_2graphic_im_pane_g1

0xc43d,	// (0x000629eb) list_single_2graphic_im_pane_g2_ParamLimits

0xc43d,	// (0x000629eb) list_single_2graphic_im_pane_g2

0xc449,	// (0x000629f7) list_single_2graphic_im_pane_g3_ParamLimits

0xc449,	// (0x000629f7) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x000661fa) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x000661fa) list_single_2graphic_im_pane_g

0xc469,	// (0x00062a17) list_single_2graphic_im_pane_t1_ParamLimits

0xc469,	// (0x00062a17) list_single_2graphic_im_pane_t1

0xbe72,	// (0x00062420) list_single_graphic_2heading_pane_fp_ParamLimits

0xbe72,	// (0x00062420) list_single_graphic_2heading_pane_fp

0x3efb,	// (0x0005a4a9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3efb,	// (0x0005a4a9) list_single_graphic_2heading_pane_fp_g1

0xbe88,	// (0x00062436) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbe88,	// (0x00062436) list_single_graphic_2heading_pane_fp_g2

0x2487,	// (0x00058a35) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2487,	// (0x00058a35) list_single_graphic_2heading_pane_fp_g3

0xbe94,	// (0x00062442) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbe94,	// (0x00062442) list_single_graphic_2heading_pane_fp_g4

0xbea8,	// (0x00062456) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbea8,	// (0x00062456) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x00066121) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x00066121) list_single_graphic_2heading_pane_fp_g

0x4019,	// (0x0005a5c7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4019,	// (0x0005a5c7) list_single_graphic_2heading_pane_fp_t1

0x3f33,	// (0x0005a4e1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3f33,	// (0x0005a4e1) list_single_graphic_2heading_pane_fp_t2

0x402f,	// (0x0005a5dd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x402f,	// (0x0005a5dd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x00066203) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x00066203) list_single_graphic_2heading_pane_fp_t

0xb890,	// (0x00061e3e) fep_hwr_write_pane_g5_ParamLimits

0xb890,	// (0x00061e3e) fep_hwr_write_pane_g5

0xb89c,	// (0x00061e4a) fep_hwr_write_pane_g6_ParamLimits

0xb89c,	// (0x00061e4a) fep_hwr_write_pane_g6

0xc16d,	// (0x0006271b) eswt_shell_pane_ParamLimits

0x90ba,	// (0x0005f668) bg_popup_window_pane_cp18_ParamLimits

0xc19e,	// (0x0006274c) heading_pane_cp70

0xc29f,	// (0x0006284d) popup_eswt_tasktip_window_t1_ParamLimits

0x7371,	// (0x0005d91f) aid_touch_tab_arrow_left

0x7380,	// (0x0005d92e) aid_touch_tab_arrow_right

0x55b6,	// (0x0005bb64) title_pane_g3_ParamLimits

0x55b6,	// (0x0005bb64) title_pane_g3

0xf0fd,	// (0x000656ab) set_value_pane_g1

0x7252,	// (0x0005d800) popup_toolbar_trans_pane_ParamLimits

0xc3e0,	// (0x0006298e) aid_size_cell_tb_trans_pane_ParamLimits

0xf135,	// (0x000656e3) bg_tb_trans_pane_ParamLimits

0xc3f2,	// (0x000629a0) grid_tb_trans_pane_ParamLimits

0xe23d,	// (0x000647eb) cont_note_pane_ParamLimits

0xe23d,	// (0x000647eb) cont_note_pane

0xf029,	// (0x000655d7) cont_snote2_single_text_pane_ParamLimits

0xf029,	// (0x000655d7) cont_snote2_single_text_pane

0xf029,	// (0x000655d7) cont_snote2_single_graphic_pane_ParamLimits

0xf029,	// (0x000655d7) cont_snote2_single_graphic_pane

0x96d4,	// (0x0005fc82) cont_note_wait_pane_ParamLimits

0x96d4,	// (0x0005fc82) cont_note_wait_pane

0x96d4,	// (0x0005fc82) cont_note_image_pane_ParamLimits

0x96d4,	// (0x0005fc82) cont_note_image_pane

0xc49a,	// (0x00062a48) popup_note2_window_g1_ParamLimits

0xc49a,	// (0x00062a48) popup_note2_window_g1

0xc4cb,	// (0x00062a79) popup_note2_window_t1_ParamLimits

0xc4cb,	// (0x00062a79) popup_note2_window_t1

0xc510,	// (0x00062abe) popup_note2_window_t2_ParamLimits

0xc510,	// (0x00062abe) popup_note2_window_t2

0xc555,	// (0x00062b03) popup_note2_window_t3_ParamLimits

0xc555,	// (0x00062b03) popup_note2_window_t3

0xc59a,	// (0x00062b48) popup_note2_window_t4_ParamLimits

0xc59a,	// (0x00062b48) popup_note2_window_t4

0xe2c1,	// (0x0006486f) popup_note2_window_t5_ParamLimits

0xe2c1,	// (0x0006486f) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0006620f) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0006620f) popup_note2_window_t

0xc5c9,	// (0x00062b77) popup_note2_image_window_g1_ParamLimits

0xc5c9,	// (0x00062b77) popup_note2_image_window_g1

0xc5d5,	// (0x00062b83) popup_note2_image_window_g2_ParamLimits

0xc5d5,	// (0x00062b83) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0006621a) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0006621a) popup_note2_image_window_g

0xc5e7,	// (0x00062b95) popup_note2_image_window_t1_ParamLimits

0xc5e7,	// (0x00062b95) popup_note2_image_window_t1

0xc5ff,	// (0x00062bad) popup_note2_image_window_t2_ParamLimits

0xc5ff,	// (0x00062bad) popup_note2_image_window_t2

0xc617,	// (0x00062bc5) popup_note2_image_window_t3_ParamLimits

0xc617,	// (0x00062bc5) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0006621f) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0006621f) popup_note2_image_window_t

0x96e2,	// (0x0005fc90) popup_note2_wait_window_g1_ParamLimits

0x96e2,	// (0x0005fc90) popup_note2_wait_window_g1

0x96ee,	// (0x0005fc9c) popup_note2_wait_window_g2_ParamLimits

0x96ee,	// (0x0005fc9c) popup_note2_wait_window_g2

0x96fa,	// (0x0005fca8) popup_note2_wait_window_g3_ParamLimits

0x96fa,	// (0x0005fca8) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x00065dcc) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x00065dcc) popup_note2_wait_window_g

0xc633,	// (0x00062be1) popup_note2_wait_window_t1_ParamLimits

0xc633,	// (0x00062be1) popup_note2_wait_window_t1

0xc651,	// (0x00062bff) popup_note2_wait_window_t2_ParamLimits

0xc651,	// (0x00062bff) popup_note2_wait_window_t2

0xc66f,	// (0x00062c1d) popup_note2_wait_window_t3_ParamLimits

0xc66f,	// (0x00062c1d) popup_note2_wait_window_t3

0xc681,	// (0x00062c2f) popup_note2_wait_window_t4_ParamLimits

0xc681,	// (0x00062c2f) popup_note2_wait_window_t4

0x0003,

0xfc78,	// (0x00066226) popup_note2_wait_window_t_ParamLimits

0xfc78,	// (0x00066226) popup_note2_wait_window_t

0xc693,	// (0x00062c41) wait_bar2_pane_ParamLimits

0xc693,	// (0x00062c41) wait_bar2_pane

0xc6ab,	// (0x00062c59) popup_snote2_single_text_window_g1_ParamLimits

0xc6ab,	// (0x00062c59) popup_snote2_single_text_window_g1

0xc6d3,	// (0x00062c81) popup_snote2_single_text_window_t1_ParamLimits

0xc6d3,	// (0x00062c81) popup_snote2_single_text_window_t1

0xc71f,	// (0x00062ccd) popup_snote2_single_text_window_t2_ParamLimits

0xc71f,	// (0x00062ccd) popup_snote2_single_text_window_t2

0xc76b,	// (0x00062d19) popup_snote2_single_text_window_t3_ParamLimits

0xc76b,	// (0x00062d19) popup_snote2_single_text_window_t3

0xc7ac,	// (0x00062d5a) popup_snote2_single_text_window_t4_ParamLimits

0xc7ac,	// (0x00062d5a) popup_snote2_single_text_window_t4

0xc7e2,	// (0x00062d90) popup_snote2_single_text_window_t5_ParamLimits

0xc7e2,	// (0x00062d90) popup_snote2_single_text_window_t5

0x0004,

0xfc81,	// (0x0006622f) popup_snote2_single_text_window_t_ParamLimits

0xfc81,	// (0x0006622f) popup_snote2_single_text_window_t

0xc80d,	// (0x00062dbb) popup_snote2_single_graphic_window_g1_ParamLimits

0xc80d,	// (0x00062dbb) popup_snote2_single_graphic_window_g1

0xc835,	// (0x00062de3) popup_snote2_single_graphic_window_g2_ParamLimits

0xc835,	// (0x00062de3) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8c,	// (0x0006623a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8c,	// (0x0006623a) popup_snote2_single_graphic_window_g

0xc85d,	// (0x00062e0b) popup_snote2_single_graphic_window_t1_ParamLimits

0xc85d,	// (0x00062e0b) popup_snote2_single_graphic_window_t1

0xc8a9,	// (0x00062e57) popup_snote2_single_graphic_window_t2_ParamLimits

0xc8a9,	// (0x00062e57) popup_snote2_single_graphic_window_t2

0xc76b,	// (0x00062d19) popup_snote2_single_graphic_window_t3_ParamLimits

0xc76b,	// (0x00062d19) popup_snote2_single_graphic_window_t3

0xc7ac,	// (0x00062d5a) popup_snote2_single_graphic_window_t4_ParamLimits

0xc7ac,	// (0x00062d5a) popup_snote2_single_graphic_window_t4

0xc7e2,	// (0x00062d90) popup_snote2_single_graphic_window_t5_ParamLimits

0xc7e2,	// (0x00062d90) popup_snote2_single_graphic_window_t5

0x0004,

0xfc91,	// (0x0006623f) popup_snote2_single_graphic_window_t_ParamLimits

0xfc91,	// (0x0006623f) popup_snote2_single_graphic_window_t

0xb1d3,	// (0x00061781) clock_nsta_pane_cp2_t1

0xb1d3,	// (0x00061781) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0006605a) clock_nsta_pane_cp2_t

0x3ac9,	// (0x0005a077) form_field_data_wide_pane_g1_ParamLimits

0xf143,	// (0x000656f1) form_field_data_wide_pane_g2_ParamLimits

0xf143,	// (0x000656f1) form_field_data_wide_pane_g2

0xf14f,	// (0x000656fd) form_field_data_wide_pane_g3_ParamLimits

0xf14f,	// (0x000656fd) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00065bff) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00065bff) form_field_data_wide_pane_g

0xb0af,	// (0x0006165d) grid_touch_3_pane_ParamLimits

0xb0af,	// (0x0006165d) grid_touch_3_pane

0xc8f5,	// (0x00062ea3) cell_touch_3_pane_ParamLimits

0xc8f5,	// (0x00062ea3) cell_touch_3_pane

0xb804,	// (0x00061db2) cell_touch_3_pane_g1

0xb804,	// (0x00061db2) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x000660df) cell_touch_3_pane_g

0xe2f3,	// (0x000648a1) cont_query_data_pane

0xe2fb,	// (0x000648a9) cont_query_data_pane_cp1

0xc923,	// (0x00062ed1) button_value_adjust_pane_cp7

0xc92b,	// (0x00062ed9) query_popup_pane_cp3

0x12a1,	// (0x0005784f) bg_popup_sub_pane_cp22_ParamLimits

0x6664,	// (0x0005cc12) navi_navi_volume_pane_cp2

0x667c,	// (0x0005cc2a) popup_side_volume_key_window_g2

0x6688,	// (0x0005cc36) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00065c95) popup_side_volume_key_window_g

0x66a2,	// (0x0005cc50) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00065c9c) popup_side_volume_key_window_t

0x6950,	// (0x0005cefe) popup_side_volume_key_window_ParamLimits

0x5d45,	// (0x0005c2f3) list_double_graphic_pane_g4_ParamLimits

0x5d45,	// (0x0005c2f3) list_double_graphic_pane_g4

0xa65b,	// (0x00060c09) list_single_2heading_msg_pane_ParamLimits

0xa65b,	// (0x00060c09) list_single_2heading_msg_pane

0xb70a,	// (0x00061cb8) list_single_2heading_msg_pane_g1_ParamLimits

0xb70a,	// (0x00061cb8) list_single_2heading_msg_pane_g1

0x5b87,	// (0x0005c135) list_single_2heading_msg_pane_g2_ParamLimits

0x5b87,	// (0x0005c135) list_single_2heading_msg_pane_g2

0xb716,	// (0x00061cc4) list_single_2heading_msg_pane_g3_ParamLimits

0xb716,	// (0x00061cc4) list_single_2heading_msg_pane_g3

0xb722,	// (0x00061cd0) list_single_2heading_msg_pane_g4_ParamLimits

0xb722,	// (0x00061cd0) list_single_2heading_msg_pane_g4

0x0003,

0xfc9c,	// (0x0006624a) list_single_2heading_msg_pane_g_ParamLimits

0xfc9c,	// (0x0006624a) list_single_2heading_msg_pane_g

0x80a8,	// (0x0005e656) list_single_2heading_msg_pane_t1_ParamLimits

0x80a8,	// (0x0005e656) list_single_2heading_msg_pane_t1

0x80d0,	// (0x0005e67e) list_single_2heading_msg_pane_t2_ParamLimits

0x80d0,	// (0x0005e67e) list_single_2heading_msg_pane_t2

0x80ff,	// (0x0005e6ad) list_single_2heading_msg_pane_t3_ParamLimits

0x80ff,	// (0x0005e6ad) list_single_2heading_msg_pane_t3

0x404f,	// (0x0005a5fd) list_single_2heading_msg_pane_t4_ParamLimits

0x404f,	// (0x0005a5fd) list_single_2heading_msg_pane_t4

0x0003,

0xfca5,	// (0x00066253) list_single_2heading_msg_pane_t_ParamLimits

0xfca5,	// (0x00066253) list_single_2heading_msg_pane_t

0xe0c1,	// (0x0006466f) title_pane_g4_ParamLimits

0xe0c1,	// (0x0006466f) title_pane_g4

0x62a7,	// (0x0005c855) title_pane_stacon_g3_ParamLimits

0x62a7,	// (0x0005c855) title_pane_stacon_g3

0xc45d,	// (0x00062a0b) list_single_2graphic_im_pane_g4_ParamLimits

0xc45d,	// (0x00062a0b) list_single_2graphic_im_pane_g4

0xa11b,	// (0x000606c9) popup_side_volume_key_window_cp

0xa985,	// (0x00060f33) main_idle_act2_pane_t1

0x7671,	// (0x0005dc1f) toolbar_button_pane_g10

0x5b71,	// (0x0005c11f) popup_toolbar_window_cp1

0xb1c4,	// (0x00061772) clock_nsta_pane_cp_t1

0xb1c4,	// (0x00061772) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x00066055) clock_nsta_pane_cp_t

0x6664,	// (0x0005cc12) navi_navi_volume_pane_cp2_ParamLimits

0x6670,	// (0x0005cc1e) popup_side_volume_key_window_g1_ParamLimits

0x667c,	// (0x0005cc2a) popup_side_volume_key_window_g2_ParamLimits

0x6688,	// (0x0005cc36) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00065c95) popup_side_volume_key_window_g_ParamLimits

0x7c5e,	// (0x0005e20c) fep_hwr_aid_pane

0x7d05,	// (0x0005e2b3) bg_fep_hwr_top_pane_g4_ParamLimits

0xb860,	// (0x00061e0e) fep_hwr_top_pane_g1_ParamLimits

0xb872,	// (0x00061e20) fep_hwr_top_pane_g2_ParamLimits

0x7d25,	// (0x0005e2d3) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x000660aa) fep_hwr_top_pane_g_ParamLimits

0x7d3a,	// (0x0005e2e8) fep_hwr_top_text_pane_ParamLimits

0x9ede,	// (0x0006048c) aid_touch_tab_arrow_arrow_2

0x9ee7,	// (0x00060495) aid_touch_tab_arrow_left_2

0x7c72,	// (0x0005e220) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7ca9,	// (0x0005e257) fep_hwr_prediction_pane

0xb9cb,	// (0x00061f79) fep_vkb_prediction_pane

0xbac8,	// (0x00062076) fep_vkb_side_pane_g3_ParamLimits

0xbac8,	// (0x00062076) fep_vkb_side_pane_g3

0x7eb5,	// (0x0005e463) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7f21,	// (0x0005e4cf) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7f2e,	// (0x0005e4dc) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x00066159) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8138,	// (0x0005e6e6) fep_hwr_prediction_pane_g1

0x8142,	// (0x0005e6f0) fep_hwr_prediction_pane_g2

0x814a,	// (0x0005e6f8) fep_hwr_prediction_pane_g3

0x8152,	// (0x0005e700) fep_hwr_prediction_pane_g4

0x0003,

0xfcae,	// (0x0006625c) fep_hwr_prediction_pane_g

0xc950,	// (0x00062efe) fep_vkb_prediction_pane_g1

0xc95a,	// (0x00062f08) fep_vkb_prediction_pane_g2

0xc962,	// (0x00062f10) fep_vkb_prediction_pane_g3

0xc96a,	// (0x00062f18) fep_vkb_prediction_pane_g4

0x0003,

0xfcb7,	// (0x00066265) fep_vkb_prediction_pane_g

0x799f,	// (0x0005df4d) slider_set_pane_g3

0x79b3,	// (0x0005df61) slider_set_pane_g4

0x79cb,	// (0x0005df79) slider_set_pane_g5

0x799f,	// (0x0005df4d) slider_set_pane_g6

0x79e1,	// (0x0005df8f) slider_set_pane_g7

0xa56a,	// (0x00060b18) slider_form_pane_g3

0xa573,	// (0x00060b21) slider_form_pane_g4

0xa57b,	// (0x00060b29) slider_form_pane_g5

0xa56a,	// (0x00060b18) slider_form_pane_g6

0xa583,	// (0x00060b31) slider_form_pane_g7

0xac31,	// (0x000611df) slider_set_pane_vc_g3

0xac3a,	// (0x000611e8) slider_set_pane_vc_g4

0xac43,	// (0x000611f1) slider_set_pane_vc_g5

0xac31,	// (0x000611df) slider_set_pane_vc_g6

0xac4c,	// (0x000611fa) slider_set_pane_vc_g7

0xae82,	// (0x00061430) slider_form_pane_vc_g1

0xae8b,	// (0x00061439) slider_form_pane_vc_g2

0xae94,	// (0x00061442) slider_form_pane_vc_g3

0xae82,	// (0x00061430) slider_form_pane_vc_g4

0xae9d,	// (0x0006144b) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x00066027) slider_form_pane_vc_g

0x534d,	// (0x0005b8fb) main_idle_act3_pane

0xc972,	// (0x00062f20) ai3_links_pane

0xc97b,	// (0x00062f29) popup_ai3_data_window_ParamLimits

0xc97b,	// (0x00062f29) popup_ai3_data_window

0xe0a3,	// (0x00064651) grid_ai3_links_pane

0xc993,	// (0x00062f41) cell_ai3_links_pane_ParamLimits

0xc993,	// (0x00062f41) cell_ai3_links_pane

0xc9ab,	// (0x00062f59) bg_popup_sub_pane_cp11

0xc9b8,	// (0x00062f66) cell_ai3_links_pane_g1

0xe0a3,	// (0x00064651) bg_popup_sub_pane_cp12

0xc9dd,	// (0x00062f8b) heading_ai3_data_pane

0xc9e5,	// (0x00062f93) list_ai3_gene_pane

0xc9f1,	// (0x00062f9f) popup_ai3_data_window_g1

0xc9f9,	// (0x00062fa7) heading_ai3_data_pane_g1

0xca01,	// (0x00062faf) heading_ai3_data_pane_t1

0xca0f,	// (0x00062fbd) list_double_ai3_gene_pane_ParamLimits

0xca0f,	// (0x00062fbd) list_double_ai3_gene_pane

0xca1c,	// (0x00062fca) list_single_ai3_gene_pane_ParamLimits

0xca1c,	// (0x00062fca) list_single_ai3_gene_pane

0xb7c9,	// (0x00061d77) list_highlight_pane_cp7_ParamLimits

0xb7c9,	// (0x00061d77) list_highlight_pane_cp7

0xca29,	// (0x00062fd7) list_single_a13_gene_pane_t1_ParamLimits

0xca29,	// (0x00062fd7) list_single_a13_gene_pane_t1

0xca40,	// (0x00062fee) list_single_ai3_gene_pane_g1

0xca49,	// (0x00062ff7) list_single_ai3_gene_pane_g2

0x0001,

0xfcc0,	// (0x0006626e) list_single_ai3_gene_pane_g

0xca51,	// (0x00062fff) list_double_ai3_gene_pane_g1_ParamLimits

0xca51,	// (0x00062fff) list_double_ai3_gene_pane_g1

0xca5d,	// (0x0006300b) list_double_ai3_gene_pane_t1_ParamLimits

0xca5d,	// (0x0006300b) list_double_ai3_gene_pane_t1

0xca79,	// (0x00063027) list_double_ai3_gene_pane_t2_ParamLimits

0xca79,	// (0x00063027) list_double_ai3_gene_pane_t2

0xca8e,	// (0x0006303c) list_double_ai3_gene_pane_t3_ParamLimits

0xca8e,	// (0x0006303c) list_double_ai3_gene_pane_t3

0x0002,

0xfcc5,	// (0x00066273) list_double_ai3_gene_pane_t_ParamLimits

0xfcc5,	// (0x00066273) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4045,	// (0x0005a5f3) aid_size_min_col_2

0xc93c,	// (0x00062eea) aid_size_min_msg_ParamLimits

0xc93c,	// (0x00062eea) aid_size_min_msg

0xbbc8,	// (0x00062176) fep_vkb_top_text_pane_g2_ParamLimits

0xbbc8,	// (0x00062176) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x000660da) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x000660da) fep_vkb_top_text_pane_g

0x534d,	// (0x0005b8fb) main_hc_apps_shell_pane

0xcaab,	// (0x00063059) grid_hc_apps_pane_ParamLimits

0xcaab,	// (0x00063059) grid_hc_apps_pane

0xcabd,	// (0x0006306b) list_hc_apps_pane

0xcac5,	// (0x00063073) scroll_pane_cp37_ParamLimits

0xcac5,	// (0x00063073) scroll_pane_cp37

0xcad1,	// (0x0006307f) cell_hc_apps_pane_ParamLimits

0xcad1,	// (0x0006307f) cell_hc_apps_pane

0xcb7f,	// (0x0006312d) cell_hc_apps_pane_g1_ParamLimits

0xcb7f,	// (0x0006312d) cell_hc_apps_pane_g1

0xcbaf,	// (0x0006315d) cell_hc_apps_pane_g2_ParamLimits

0xcbaf,	// (0x0006315d) cell_hc_apps_pane_g2

0xcbcb,	// (0x00063179) cell_hc_apps_pane_g3_ParamLimits

0xcbcb,	// (0x00063179) cell_hc_apps_pane_g3

0x0002,

0xfccc,	// (0x0006627a) cell_hc_apps_pane_g_ParamLimits

0xfccc,	// (0x0006627a) cell_hc_apps_pane_g

0xcbed,	// (0x0006319b) cell_hc_apps_pane_t1_ParamLimits

0xcbed,	// (0x0006319b) cell_hc_apps_pane_t1

0xe23d,	// (0x000647eb) grid_highlight_pane_cp10_ParamLimits

0xe23d,	// (0x000647eb) grid_highlight_pane_cp10

0xcc2d,	// (0x000631db) list_single_hc_apps_pane_ParamLimits

0xcc2d,	// (0x000631db) list_single_hc_apps_pane

0xcc90,	// (0x0006323e) list_single_hc_apps_pane_g1

0xb73a,	// (0x00061ce8) list_single_hc_apps_pane_g2

0x0001,

0xfcd3,	// (0x00066281) list_single_hc_apps_pane_g

0xb753,	// (0x00061d01) list_single_hc_apps_pane_g2_copy1

0x815a,	// (0x0005e708) list_single_hc_apps_pane_t1

0xe105,	// (0x000646b3) bg_set_opt_pane_cp_ParamLimits

0x5666,	// (0x0005bc14) setting_slider_pane_t1_ParamLimits

0x567f,	// (0x0005bc2d) setting_slider_pane_t2_ParamLimits

0x5699,	// (0x0005bc47) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00065ae7) setting_slider_pane_t_ParamLimits

0x56b1,	// (0x0005bc5f) slider_set_pane_ParamLimits

0x6c10,	// (0x0005d1be) control_pane_g5_ParamLimits

0x6c10,	// (0x0005d1be) control_pane_g5

0xa3bd,	// (0x0006096b) slider_set_pane_g1_ParamLimits

0x7993,	// (0x0005df41) slider_set_pane_g2_ParamLimits

0x799f,	// (0x0005df4d) slider_set_pane_g3_ParamLimits

0x79b3,	// (0x0005df61) slider_set_pane_g4_ParamLimits

0x79cb,	// (0x0005df79) slider_set_pane_g5_ParamLimits

0x799f,	// (0x0005df4d) slider_set_pane_g6_ParamLimits

0x79e1,	// (0x0005df8f) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00065ee8) slider_set_pane_g_ParamLimits

0x154f,	// (0x00057afd) navi_icon_text_pane_ParamLimits

0x7332,	// (0x0005d8e0) aid_fill_nsta_2_ParamLimits

0x7371,	// (0x0005d91f) aid_touch_tab_arrow_left_ParamLimits

0x7380,	// (0x0005d92e) aid_touch_tab_arrow_right_ParamLimits

0x73ed,	// (0x0005d99b) clock_nsta_pane_ParamLimits

0x9ec0,	// (0x0006046e) navi_icon_pane_g1_ParamLimits

0x9ecc,	// (0x0006047a) navi_text_pane_t1_ParamLimits

0xb2d4,	// (0x00061882) navi_icon_text_pane_g1_ParamLimits

0xb2e0,	// (0x0006188e) navi_icon_text_pane_t1_ParamLimits

0xcc90,	// (0x0006323e) list_single_hc_apps_pane_g1_ParamLimits

0xb73a,	// (0x00061ce8) list_single_hc_apps_pane_g2_ParamLimits

0xfcd3,	// (0x00066281) list_single_hc_apps_pane_g_ParamLimits

0xb753,	// (0x00061d01) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x815a,	// (0x0005e708) list_single_hc_apps_pane_t1_ParamLimits

0x54aa,	// (0x0005ba58) popup_toolbar2_fixed_window_ParamLimits

0x54aa,	// (0x0005ba58) popup_toolbar2_fixed_window

0x7248,	// (0x0005d7f6) popup_toolbar2_float_window

0xe0a3,	// (0x00064651) bg_popup_sub_pane_cp27

0xcca9,	// (0x00063257) grid_toolbar2_float_pane

0xe0a3,	// (0x00064651) bg_popup_sub_pane_cp26

0xcca9,	// (0x00063257) grid_toolbar2_fixed_pane

0xccb1,	// (0x0006325f) cell_toolbar2_fixed_pane_ParamLimits

0xccb1,	// (0x0006325f) cell_toolbar2_fixed_pane

0xccc1,	// (0x0006326f) cell_toolbar2_fixed_pane_g1

0x711a,	// (0x0005d6c8) toolbar2_fixed_button_pane

0x902e,	// (0x0005f5dc) toolbar2_fixed_button_pane_g1

0x903e,	// (0x0005f5ec) toolbar2_fixed_button_pane_g2

0x9036,	// (0x0005f5e4) toolbar2_fixed_button_pane_g3

0x904e,	// (0x0005f5fc) toolbar2_fixed_button_pane_g4

0x9046,	// (0x0005f5f4) toolbar2_fixed_button_pane_g5

0x9056,	// (0x0005f604) toolbar2_fixed_button_pane_g6

0x905e,	// (0x0005f60c) toolbar2_fixed_button_pane_g7

0x906e,	// (0x0005f61c) toolbar2_fixed_button_pane_g8

0x9066,	// (0x0005f614) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00065dea) toolbar2_fixed_button_pane_g

0xccca,	// (0x00063278) cell_toolbar2_float_pane_ParamLimits

0xccca,	// (0x00063278) cell_toolbar2_float_pane

0xccdb,	// (0x00063289) cell_toolbar2_float_pane_g1

0x711a,	// (0x0005d6c8) toolbar2_fixed_button_pane_cp

0xb932,	// (0x00061ee0) fep_vkb_accented_list_pane_ParamLimits

0xb932,	// (0x00061ee0) fep_vkb_accented_list_pane

0x7e95,	// (0x0005e443) bg_popup_fep_shadow_pane_g9

0x169e,	// (0x00057c4c) bg_popup_fep_shadow_pane_cp3

0xf24e,	// (0x000657fc) list_accented_list_pane

0xcce4,	// (0x00063292) list_single_accented_list_pane_ParamLimits

0xcce4,	// (0x00063292) list_single_accented_list_pane

0x169e,	// (0x00057c4c) list_highlight_pane_cp10

0xccf5,	// (0x000632a3) list_single_accented_list_pane_t1

0x7198,	// (0x0005d746) popup_slider_window_ParamLimits

0x7198,	// (0x0005d746) popup_slider_window

0xc933,	// (0x00062ee1) aid_indentation_list_msg

0xcdb3,	// (0x00063361) bg_popup_window_pane_cp19

0xce1b,	// (0x000633c9) popup_slider_window_g1

0xce37,	// (0x000633e5) popup_slider_window_g2

0xce53,	// (0x00063401) popup_slider_window_g3

0x0005,

0xfcd8,	// (0x00066286) popup_slider_window_g

0xceb9,	// (0x00063467) popup_slider_window_t1

0xcf2d,	// (0x000634db) small_volume_slider_vertical_pane

0xb804,	// (0x00061db2) small_volume_slider_vertical_pane_g1

0xb804,	// (0x00061db2) small_volume_slider_vertical_pane_g2

0xcf49,	// (0x000634f7) small_volume_slider_vertical_pane_g3

0x0002,

0xfcea,	// (0x00066298) small_volume_slider_vertical_pane_g

0x5270,	// (0x0005b81e) area_side_right_pane_ParamLimits

0x5270,	// (0x0005b81e) area_side_right_pane

0x8188,	// (0x0005e736) aid_size_side_button_ParamLimits

0x8188,	// (0x0005e736) aid_size_side_button

0x819c,	// (0x0005e74a) grid_sctrl_middle_pane_ParamLimits

0x819c,	// (0x0005e74a) grid_sctrl_middle_pane

0x81bb,	// (0x0005e769) sctrl_sk_bottom_pane

0x81cc,	// (0x0005e77a) sctrl_sk_top_pane

0x81de,	// (0x0005e78c) aid_touch_sctrl_top

0x81eb,	// (0x0005e799) bg_sctrl_sk_pane_ParamLimits

0x81eb,	// (0x0005e799) bg_sctrl_sk_pane

0x81f9,	// (0x0005e7a7) sctrl_sk_top_pane_g1

0x8206,	// (0x0005e7b4) sctrl_sk_top_pane_t1

0x81de,	// (0x0005e78c) aid_touch_sctrl_bottom

0x81eb,	// (0x0005e799) bg_sctrl_sk_pane_cp_ParamLimits

0x81eb,	// (0x0005e799) bg_sctrl_sk_pane_cp

0x8221,	// (0x0005e7cf) sctrl_sk_bottom_pane_g1

0x8206,	// (0x0005e7b4) sctrl_sk_bottom_pane_t1

0x822a,	// (0x0005e7d8) cell_sctrl_middle_pane_ParamLimits

0x822a,	// (0x0005e7d8) cell_sctrl_middle_pane

0x8245,	// (0x0005e7f3) aid_touch_sctrl_middle_ParamLimits

0x8245,	// (0x0005e7f3) aid_touch_sctrl_middle

0x8257,	// (0x0005e805) bg_sctrl_middle_pane_ParamLimits

0x8257,	// (0x0005e805) bg_sctrl_middle_pane

0x7eb5,	// (0x0005e463) cell_sctrl_middle_pane_g1_ParamLimits

0x7eb5,	// (0x0005e463) cell_sctrl_middle_pane_g1

0x8265,	// (0x0005e813) cell_sctrl_middle_pane_g2_ParamLimits

0x8265,	// (0x0005e813) cell_sctrl_middle_pane_g2

0x0001,

0xfcf6,	// (0x000662a4) cell_sctrl_middle_pane_g_ParamLimits

0xfcf6,	// (0x000662a4) cell_sctrl_middle_pane_g

0x902e,	// (0x0005f5dc) bg_sctrl_middle_pane_g1

0x9036,	// (0x0005f5e4) bg_sctrl_middle_pane_g2

0x903e,	// (0x0005f5ec) bg_sctrl_middle_pane_g3

0x9046,	// (0x0005f5f4) bg_sctrl_middle_pane_g4

0x904e,	// (0x0005f5fc) bg_sctrl_middle_pane_g5

0x9056,	// (0x0005f604) bg_sctrl_middle_pane_g6

0x905e,	// (0x0005f60c) bg_sctrl_middle_pane_g7

0x9066,	// (0x0005f614) bg_sctrl_middle_pane_g8

0x0007,

0xfcfb,	// (0x000662a9) bg_sctrl_middle_pane_g

0x906e,	// (0x0005f61c) bg_sctrl_middle_pane_g8_copy1

0x902e,	// (0x0005f5dc) bg_sctrl_sk_pane_g1

0x903e,	// (0x0005f5ec) bg_sctrl_sk_pane_g2

0x9036,	// (0x0005f5e4) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00065dea) bg_sctrl_sk_pane_g

0xf077,	// (0x00065625) aid_size_touch_scroll_bar

0x904e,	// (0x0005f5fc) bg_sctrl_sk_pane_g4

0x9046,	// (0x0005f5f4) bg_sctrl_sk_pane_g5

0x9056,	// (0x0005f604) bg_sctrl_sk_pane_g6

0x905e,	// (0x0005f60c) bg_sctrl_sk_pane_g7

0x906e,	// (0x0005f61c) bg_sctrl_sk_pane_g8

0x9066,	// (0x0005f614) bg_sctrl_sk_pane_g9

0x6e01,	// (0x0005d3af) popup_fep_china_hwr2_fs_candidate_window

0x6e0b,	// (0x0005d3b9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6e0b,	// (0x0005d3b9) popup_fep_china_hwr2_fs_control_window

0x7eb5,	// (0x0005e463) sctrl_sk_top_pane_g2

0x0001,

0xfcf1,	// (0x0006629f) sctrl_sk_top_pane_g

0xcf52,	// (0x00063500) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcf52,	// (0x00063500) aid_fep_china_hwr2_fs_cell

0xcf64,	// (0x00063512) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcf64,	// (0x00063512) bg_popup_fep_shadow_pane_cp4

0xcf7b,	// (0x00063529) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcf7b,	// (0x00063529) bg_popup_fep_shadow_pane_cp5

0xcf8d,	// (0x0006353b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf8d,	// (0x0006353b) popup_fep_china_hwr2_fs_control_bar_grid

0xcf9d,	// (0x0006354b) popup_fep_china_hwr2_fs_control_funtion_grid

0xcfa5,	// (0x00063553) aid_fep_china_hwr2_fs_candi_cell

0xe0a3,	// (0x00064651) bg_popup_fep_shadow_pane_cp6

0xcfaf,	// (0x0006355d) popup_fep_china_hwr2_fs_candidate_grid

0xcfb9,	// (0x00063567) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcfb9,	// (0x00063567) cell_fep_china_hwr2_fs_funtion_grid

0xb804,	// (0x00061db2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcfd1,	// (0x0006357f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcfd1,	// (0x0006357f) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcfdf,	// (0x0006358d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcfdf,	// (0x0006358d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0c,	// (0x000662ba) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0c,	// (0x000662ba) cell_fep_china_hwr2_fs_funtion_grid_g

0xcff5,	// (0x000635a3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcff5,	// (0x000635a3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd00a,	// (0x000635b8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd00a,	// (0x000635b8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd11,	// (0x000662bf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd11,	// (0x000662bf) cell_fep_china_hwr2_fs_funtion_grid_t

0xd026,	// (0x000635d4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd02e,	// (0x000635dc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd036,	// (0x000635e4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd16,	// (0x000662c4) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd03e,	// (0x000635ec) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd03e,	// (0x000635ec) cell_fep_china_hwr2_fs_candidate_grid

0xd057,	// (0x00063605) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd05f,	// (0x0006360d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb804,	// (0x00061db2) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb804,	// (0x00061db2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x000660df) cell_fep_china_hwr2_fs_candidate_grid_g

0xd067,	// (0x00063615) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7400,	// (0x0005d9ae) clock_nsta_pane_cp_24_ParamLimits

0x7400,	// (0x0005d9ae) clock_nsta_pane_cp_24

0x747e,	// (0x0005da2c) indicator_nsta_pane_cp_24_ParamLimits

0x747e,	// (0x0005da2c) indicator_nsta_pane_cp_24

0x9d3c,	// (0x000602ea) heading_pane_g1

0x0001,

0xf8a1,	// (0x00065e4f) heading_pane_g

0xa7ce,	// (0x00060d7c) grid_sct_catagory_button_pane

0xa7fe,	// (0x00060dac) scroll_pane_cp5_ParamLimits

0xb322,	// (0x000618d0) button_value_adjust_pane_cp5_ParamLimits

0xb322,	// (0x000618d0) button_value_adjust_pane_cp5

0xb401,	// (0x000619af) form2_midp_time_pane_ParamLimits

0xd075,	// (0x00063623) cell_sct_catagory_button_pane_ParamLimits

0xd075,	// (0x00063623) cell_sct_catagory_button_pane

0xb7c9,	// (0x00061d77) bg_button_pane_cp01_ParamLimits

0xb7c9,	// (0x00061d77) bg_button_pane_cp01

0xb804,	// (0x00061db2) cell_sct_catagory_button_pane_g1

0x71d7,	// (0x0005d785) popup_tb_extension_window

0xd087,	// (0x00063635) aid_size_cell_ext_ParamLimits

0xd087,	// (0x00063635) aid_size_cell_ext

0xe23d,	// (0x000647eb) bg_tb_trans_pane_cp1_ParamLimits

0xe23d,	// (0x000647eb) bg_tb_trans_pane_cp1

0xd0a7,	// (0x00063655) grid_tb_ext_pane_ParamLimits

0xd0a7,	// (0x00063655) grid_tb_ext_pane

0xd0d7,	// (0x00063685) cell_tb_ext_pane_ParamLimits

0xd0d7,	// (0x00063685) cell_tb_ext_pane

0xd0ee,	// (0x0006369c) cell_tb_ext_pane_g1_ParamLimits

0xd0ee,	// (0x0006369c) cell_tb_ext_pane_g1

0xd10b,	// (0x000636b9) cell_tb_ext_pane_t1

0xe23d,	// (0x000647eb) list_highlight_pane_cp11_ParamLimits

0xe23d,	// (0x000647eb) list_highlight_pane_cp11

0x54c9,	// (0x0005ba77) popup_uni_indicator_window_ParamLimits

0x54c9,	// (0x0005ba77) popup_uni_indicator_window

0xf135,	// (0x000656e3) bg_popup_sub_pane_cp14

0xd127,	// (0x000636d5) list_uniindi_pane

0xd133,	// (0x000636e1) uniindi_top_pane

0xe23d,	// (0x000647eb) bg_uniindi_top_pane

0xd152,	// (0x00063700) uniindi_top_pane_g1

0xd168,	// (0x00063716) uniindi_top_pane_g2

0x0003,

0xfd1d,	// (0x000662cb) uniindi_top_pane_g

0xd192,	// (0x00063740) uniindi_top_pane_t1

0xd1bc,	// (0x0006376a) list_single_uniindi_pane_ParamLimits

0xd1bc,	// (0x0006376a) list_single_uniindi_pane

0xb804,	// (0x00061db2) bg_uniindi_top_pane_g1

0xd1cf,	// (0x0006377d) list_single_uniindi_pane_g1

0xd1e2,	// (0x00063790) list_single_uniindi_pane_t1

0x534d,	// (0x0005b8fb) control_bg_pane

0xd207,	// (0x000637b5) bg_sctrl_sk_pane_cp1

0xd210,	// (0x000637be) bg_sctrl_sk_pane_cp2

0xd219,	// (0x000637c7) control_bg_pane_g1

0xd222,	// (0x000637d0) control_bg_pane_g2

0x0001,

0xfd26,	// (0x000662d4) control_bg_pane_g

0xb168,	// (0x00061716) cell_indicator_nsta_pane_g1_ParamLimits

0xb176,	// (0x00061724) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x00066043) cell_indicator_nsta_pane_g_ParamLimits

0x3ed1,	// (0x0005a47f) form2_midp_time_pane_t1_ParamLimits

0x6d6b,	// (0x0005d319) main_idle_act4_pane_ParamLimits

0x6d6b,	// (0x0005d319) main_idle_act4_pane

0x71d7,	// (0x0005d785) popup_tb_extension_window_ParamLimits

0xd0c7,	// (0x00063675) tb_ext_find_pane_ParamLimits

0xd0c7,	// (0x00063675) tb_ext_find_pane

0xd22b,	// (0x000637d9) ai_gene_pane_1_cp1

0x171f,	// (0x00057ccd) ai_gene_pane_2_cp1

0xd233,	// (0x000637e1) list_single_idle_plugin_calendar_pane

0xd23c,	// (0x000637ea) list_single_idle_plugin_notification_pane

0xd245,	// (0x000637f3) list_single_idle_plugin_player_pane

0xd24e,	// (0x000637fc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd24e,	// (0x000637fc) list_single_idle_plugin_shortcut_pane

0xd270,	// (0x0006381e) main_idle_act4_pane_t1

0xd282,	// (0x00063830) main_idle_act4_pane_t2

0x0001,

0xfd2b,	// (0x000662d9) main_idle_act4_pane_t

0xd294,	// (0x00063842) middle_sk_idle_act4_pane_ParamLimits

0xd294,	// (0x00063842) middle_sk_idle_act4_pane

0xd2aa,	// (0x00063858) popup_clock_digital_analogue_window_cp2

0xd2c4,	// (0x00063872) shortcut_wheel_idle_act4_pane_ParamLimits

0xd2c4,	// (0x00063872) shortcut_wheel_idle_act4_pane

0xb804,	// (0x00061db2) shortcut_wheel_idle_act4_pane_g1

0xb804,	// (0x00061db2) shortcut_wheel_idle_act4_pane_g2

0xb804,	// (0x00061db2) shortcut_wheel_idle_act4_pane_g3

0xb804,	// (0x00061db2) shortcut_wheel_idle_act4_pane_g4

0xb804,	// (0x00061db2) shortcut_wheel_idle_act4_pane_g5

0xd2d8,	// (0x00063886) shortcut_wheel_idle_act4_pane_g6

0xd2e0,	// (0x0006388e) shortcut_wheel_idle_act4_pane_g7

0xd2e8,	// (0x00063896) shortcut_wheel_idle_act4_pane_g8

0xd2f0,	// (0x0006389e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd30,	// (0x000662de) shortcut_wheel_idle_act4_pane_g

0xba74,	// (0x00062022) middle_sk_idle_act4_pane_g1_ParamLimits

0xba74,	// (0x00062022) middle_sk_idle_act4_pane_g1

0xd354,	// (0x00063902) middle_sk_idle_act4_pane_g2_ParamLimits

0xd354,	// (0x00063902) middle_sk_idle_act4_pane_g2

0x0001,

0xfd53,	// (0x00066301) middle_sk_idle_act4_pane_g_ParamLimits

0xfd53,	// (0x00066301) middle_sk_idle_act4_pane_g

0xd360,	// (0x0006390e) middle_sk_idle_act4_pane_t1_ParamLimits

0xd360,	// (0x0006390e) middle_sk_idle_act4_pane_t1

0xd37d,	// (0x0006392b) grid_ai_shortcut_pane_ParamLimits

0xd37d,	// (0x0006392b) grid_ai_shortcut_pane

0xd396,	// (0x00063944) list_highlight_pane_cp16_ParamLimits

0xd396,	// (0x00063944) list_highlight_pane_cp16

0xd3a3,	// (0x00063951) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd3a3,	// (0x00063951) list_single_idle_plugin_shortcut_pane_g1

0xd3af,	// (0x0006395d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd3af,	// (0x0006395d) list_single_idle_plugin_shortcut_pane_g2

0xd3c7,	// (0x00063975) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd3c7,	// (0x00063975) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd58,	// (0x00066306) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd58,	// (0x00066306) list_single_idle_plugin_shortcut_pane_g

0xd3da,	// (0x00063988) cell_ai_shortcut_pane_ParamLimits

0xd3da,	// (0x00063988) cell_ai_shortcut_pane

0xd3fe,	// (0x000639ac) cell_ai_shortcut_pane_g1_ParamLimits

0xd3fe,	// (0x000639ac) cell_ai_shortcut_pane_g1

0xd22b,	// (0x000637d9) ai_gene_pane_1_cp2

0xd420,	// (0x000639ce) ai_gene_pane_2_cp2

0xd428,	// (0x000639d6) list_highlight_pane_cp15

0xd431,	// (0x000639df) list_single_idle_plugin_calendar_pane_g1

0xd428,	// (0x000639d6) list_highlight_pane_cp17

0xd439,	// (0x000639e7) list_single_idle_plugin_calendar_pane_g1_copy1

0xd441,	// (0x000639ef) list_single_idle_plugin_player_pane_g1

0xaa27,	// (0x00060fd5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5f,	// (0x0006630d) list_single_idle_plugin_player_pane_g

0xd449,	// (0x000639f7) list_single_idle_plugin_player_pane_t1

0xd457,	// (0x00063a05) list_single_idle_plugin_player_pane_t2

0xd465,	// (0x00063a13) list_single_idle_plugin_player_pane_t3

0xd473,	// (0x00063a21) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd64,	// (0x00066312) list_single_idle_plugin_player_pane_t

0xd481,	// (0x00063a2f) wait_bar_pane_cp15

0xd489,	// (0x00063a37) grid_ai_notification_pane

0xaa27,	// (0x00060fd5) list_single_idle_plugin_notification_pane_g1

0xd492,	// (0x00063a40) cell_ai_notification_pane_ParamLimits

0xd492,	// (0x00063a40) cell_ai_notification_pane

0xd49f,	// (0x00063a4d) cell_ai_notification_pane_g1

0xd4a7,	// (0x00063a55) cell_ai_notification_pane_t1

0xd4b5,	// (0x00063a63) tb_ext_find_button_pane

0xd4bd,	// (0x00063a6b) tb_ext_find_pane_g1

0xd4c5,	// (0x00063a73) tb_ext_find_pane_t1

0x1240,	// (0x000577ee) tb_ext_find_button_pane_g1

0xd4d3,	// (0x00063a81) tb_ext_find_button_pane_g2

0x0001,

0xfd6d,	// (0x0006631b) tb_ext_find_button_pane_g

0xd270,	// (0x0006381e) main_idle_act4_pane_t1_ParamLimits

0xd282,	// (0x00063830) main_idle_act4_pane_t2_ParamLimits

0xfd2b,	// (0x000662d9) main_idle_act4_pane_t_ParamLimits

0xd2aa,	// (0x00063858) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd2b8,	// (0x00063866) sat_plugin_idle_act4_pane_ParamLimits

0xd2b8,	// (0x00063866) sat_plugin_idle_act4_pane

0xd4dc,	// (0x00063a8a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd4dc,	// (0x00063a8a) sat_plugin_idle_act4_pane_t1

0xd4ef,	// (0x00063a9d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd4ef,	// (0x00063a9d) sat_plugin_idle_act4_pane_t2

0xd502,	// (0x00063ab0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd502,	// (0x00063ab0) sat_plugin_idle_act4_pane_t3

0xd515,	// (0x00063ac3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd515,	// (0x00063ac3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd72,	// (0x00066320) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd72,	// (0x00066320) sat_plugin_idle_act4_pane_t

0x5412,	// (0x0005b9c0) popup_battery_window_ParamLimits

0x5412,	// (0x0005b9c0) popup_battery_window

0xe23d,	// (0x000647eb) bg_popup_sub_pane_cp25_ParamLimits

0xe23d,	// (0x000647eb) bg_popup_sub_pane_cp25

0xd528,	// (0x00063ad6) popup_battery_window_g1_ParamLimits

0xd528,	// (0x00063ad6) popup_battery_window_g1

0xd534,	// (0x00063ae2) popup_battery_window_t1_ParamLimits

0xd534,	// (0x00063ae2) popup_battery_window_t1

0xd546,	// (0x00063af4) popup_battery_window_t2_ParamLimits

0xd546,	// (0x00063af4) popup_battery_window_t2

0x0001,

0xfd7b,	// (0x00066329) popup_battery_window_t_ParamLimits

0xfd7b,	// (0x00066329) popup_battery_window_t

0x69a4,	// (0x0005cf52) midp_canvas_pane_ParamLimits

0x6a1d,	// (0x0005cfcb) midp_keypad_pane_ParamLimits

0x6a1d,	// (0x0005cfcb) midp_keypad_pane

0xf51d,	// (0x00065acb) main_midp_pane_ParamLimits

0xb1e2,	// (0x00061790) signal_pane_g2_cp_ParamLimits

0xd563,	// (0x00063b11) aid_size_cell_midp_keypad_ParamLimits

0xd563,	// (0x00063b11) aid_size_cell_midp_keypad

0xd57d,	// (0x00063b2b) midp_keyp_game_grid_pane_ParamLimits

0xd57d,	// (0x00063b2b) midp_keyp_game_grid_pane

0xd59d,	// (0x00063b4b) midp_keyp_rocker_pane_ParamLimits

0xd59d,	// (0x00063b4b) midp_keyp_rocker_pane

0xd5d6,	// (0x00063b84) midp_keyp_sk_left_pane_ParamLimits

0xd5d6,	// (0x00063b84) midp_keyp_sk_left_pane

0xd630,	// (0x00063bde) midp_keyp_sk_right_pane_ParamLimits

0xd630,	// (0x00063bde) midp_keyp_sk_right_pane

0xe0a3,	// (0x00064651) bg_button_pane_cp03

0xd68a,	// (0x00063c38) midp_keyp_sk_left_pane_g1

0xe0a3,	// (0x00064651) bg_button_pane_cp04

0xd68a,	// (0x00063c38) midp_keyp_sk_right_pane_g1

0xb804,	// (0x00061db2) midp_keyp_rocker_pane_g1

0xd693,	// (0x00063c41) keyp_game_cell_pane_ParamLimits

0xd693,	// (0x00063c41) keyp_game_cell_pane

0xe0a3,	// (0x00064651) bg_button_pane_cp02

0xd6a6,	// (0x00063c54) keyp_game_cell_pane_g1

0x5448,	// (0x0005b9f6) popup_fep_vkb2_window_ParamLimits

0x5448,	// (0x0005b9f6) popup_fep_vkb2_window

0x8283,	// (0x0005e831) aid_size_cell_vkb2_ParamLimits

0x8283,	// (0x0005e831) aid_size_cell_vkb2

0x82cf,	// (0x0005e87d) popup_fep_vkb2_window_g1_ParamLimits

0x82cf,	// (0x0005e87d) popup_fep_vkb2_window_g1

0x8317,	// (0x0005e8c5) vkb2_area_bottom_pane_ParamLimits

0x8317,	// (0x0005e8c5) vkb2_area_bottom_pane

0x8363,	// (0x0005e911) vkb2_area_keypad_pane_ParamLimits

0x8363,	// (0x0005e911) vkb2_area_keypad_pane

0x83a5,	// (0x0005e953) vkb2_area_top_pane_ParamLimits

0x83a5,	// (0x0005e953) vkb2_area_top_pane

0x8424,	// (0x0005e9d2) vkb2_top_entry_pane_ParamLimits

0x8424,	// (0x0005e9d2) vkb2_top_entry_pane

0x844e,	// (0x0005e9fc) vkb2_top_grid_left_pane_ParamLimits

0x844e,	// (0x0005e9fc) vkb2_top_grid_left_pane

0x846d,	// (0x0005ea1b) vkb2_top_grid_right_pane_ParamLimits

0x846d,	// (0x0005ea1b) vkb2_top_grid_right_pane

0x848c,	// (0x0005ea3a) vkb2_cell_keypad_pane_ParamLimits

0x848c,	// (0x0005ea3a) vkb2_cell_keypad_pane

0x855d,	// (0x0005eb0b) vkb2_area_bottom_grid_pane_ParamLimits

0x855d,	// (0x0005eb0b) vkb2_area_bottom_grid_pane

0x8583,	// (0x0005eb31) vkb2_area_bottom_pane_g1_ParamLimits

0x8583,	// (0x0005eb31) vkb2_area_bottom_pane_g1

0x85a7,	// (0x0005eb55) vkb2_area_bottom_pane_g2_ParamLimits

0x85a7,	// (0x0005eb55) vkb2_area_bottom_pane_g2

0x85d5,	// (0x0005eb83) vkb2_area_bottom_pane_g3_ParamLimits

0x85d5,	// (0x0005eb83) vkb2_area_bottom_pane_g3

0x0002,

0xfd80,	// (0x0006632e) vkb2_area_bottom_pane_g_ParamLimits

0xfd80,	// (0x0006632e) vkb2_area_bottom_pane_g

0x8636,	// (0x0005ebe4) vkb2_top_cell_left_pane_ParamLimits

0x8636,	// (0x0005ebe4) vkb2_top_cell_left_pane

0xd6b7,	// (0x00063c65) vkb2_top_entry_pane_g1_ParamLimits

0xd6b7,	// (0x00063c65) vkb2_top_entry_pane_g1

0xd6c5,	// (0x00063c73) vkb2_top_entry_pane_t1_ParamLimits

0xd6c5,	// (0x00063c73) vkb2_top_entry_pane_t1

0xd6f7,	// (0x00063ca5) vkb2_top_entry_pane_t2_ParamLimits

0xd6f7,	// (0x00063ca5) vkb2_top_entry_pane_t2

0xd729,	// (0x00063cd7) vkb2_top_entry_pane_t3_ParamLimits

0xd729,	// (0x00063cd7) vkb2_top_entry_pane_t3

0x0002,

0xfd87,	// (0x00066335) vkb2_top_entry_pane_t_ParamLimits

0xfd87,	// (0x00066335) vkb2_top_entry_pane_t

0x8683,	// (0x0005ec31) vkb2_top_grid_right_pane_g1_ParamLimits

0x8683,	// (0x0005ec31) vkb2_top_grid_right_pane_g1

0x8699,	// (0x0005ec47) vkb2_top_grid_right_pane_g2_ParamLimits

0x8699,	// (0x0005ec47) vkb2_top_grid_right_pane_g2

0x86b1,	// (0x0005ec5f) vkb2_top_grid_right_pane_g3_ParamLimits

0x86b1,	// (0x0005ec5f) vkb2_top_grid_right_pane_g3

0x86c9,	// (0x0005ec77) vkb2_top_grid_right_pane_g4_ParamLimits

0x86c9,	// (0x0005ec77) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8e,	// (0x0006633c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8e,	// (0x0006633c) vkb2_top_grid_right_pane_g

0x86df,	// (0x0005ec8d) vkb2_top_cell_left_pane_g1

0x8701,	// (0x0005ecaf) vkb2_cell_keypad_pane_g1_ParamLimits

0x8701,	// (0x0005ecaf) vkb2_cell_keypad_pane_g1

0xd74d,	// (0x00063cfb) vkb2_cell_keypad_pane_t1_ParamLimits

0xd74d,	// (0x00063cfb) vkb2_cell_keypad_pane_t1

0x870f,	// (0x0005ecbd) vkb2_cell_bottom_grid_pane_ParamLimits

0x870f,	// (0x0005ecbd) vkb2_cell_bottom_grid_pane

0x8748,	// (0x0005ecf6) vkb2_cell_bottom_grid_pane_g1

0xd2f8,	// (0x000638a6) aid_call2_pane_cp02

0xd300,	// (0x000638ae) aid_call_pane_cp02

0xd308,	// (0x000638b6) clock_digital_number_pane_cp10

0xd310,	// (0x000638be) clock_digital_number_pane_cp11

0xd318,	// (0x000638c6) clock_digital_number_pane_cp12

0xd320,	// (0x000638ce) clock_digital_number_pane_cp13

0xd328,	// (0x000638d6) clock_digital_separator_pane_cp10

0x1240,	// (0x000577ee) popup_clock_digital_analogue_window_cp2_g1

0x1240,	// (0x000577ee) popup_clock_digital_analogue_window_cp2_g2

0xd330,	// (0x000638de) popup_clock_digital_analogue_window_cp2_g3

0x1240,	// (0x000577ee) popup_clock_digital_analogue_window_cp2_g4

0xd330,	// (0x000638de) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd43,	// (0x000662f1) popup_clock_digital_analogue_window_cp2_g

0xd338,	// (0x000638e6) popup_clock_digital_analogue_window_cp2_t1

0xd346,	// (0x000638f4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4e,	// (0x000662fc) popup_clock_digital_analogue_window_cp2_t

0xb804,	// (0x00061db2) clock_digital_number_pane_cp10_g1

0xb804,	// (0x00061db2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x000660df) clock_digital_number_pane_cp10_g

0xb804,	// (0x00061db2) clock_digital_separator_pane_cp10_g1

0xb804,	// (0x00061db2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x000660df) clock_digital_separator_pane_cp10_g

0xd174,	// (0x00063722) uniindi_top_pane_g3

0xd185,	// (0x00063733) uniindi_top_pane_g4

0x8517,	// (0x0005eac5) vkb2_row_keypad_pane_ParamLimits

0x8517,	// (0x0005eac5) vkb2_row_keypad_pane

0x8768,	// (0x0005ed16) vkb2_cell_t_keypad_pane_ParamLimits

0x8768,	// (0x0005ed16) vkb2_cell_t_keypad_pane

0x8778,	// (0x0005ed26) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8778,	// (0x0005ed26) vkb2_cell_t_keypad_pane_cp08

0x878b,	// (0x0005ed39) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x878b,	// (0x0005ed39) vkb2_cell_t_keypad_pane_cp09

0x879f,	// (0x0005ed4d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x879f,	// (0x0005ed4d) vkb2_cell_t_keypad_pane_cp01

0x87b0,	// (0x0005ed5e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x87b0,	// (0x0005ed5e) vkb2_cell_t_keypad_pane_cp02

0x87c1,	// (0x0005ed6f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x87c1,	// (0x0005ed6f) vkb2_cell_t_keypad_pane_cp03

0x87d2,	// (0x0005ed80) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x87d2,	// (0x0005ed80) vkb2_cell_t_keypad_pane_cp04

0x87e3,	// (0x0005ed91) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x87e3,	// (0x0005ed91) vkb2_cell_t_keypad_pane_cp05

0x87f4,	// (0x0005eda2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x87f4,	// (0x0005eda2) vkb2_cell_t_keypad_pane_cp06

0x8805,	// (0x0005edb3) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8805,	// (0x0005edb3) vkb2_cell_t_keypad_pane_cp07

0x8816,	// (0x0005edc4) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8816,	// (0x0005edc4) vkb2_cell_t_keypad_pane_cp10

0x7eb5,	// (0x0005e463) vkb2_cell_t_keypad_pane_g1

0xd764,	// (0x00063d12) vkb2_cell_t_keypad_pane_t1

0x534d,	// (0x0005b8fb) popup_grid_graphic2_window

0xd776,	// (0x00063d24) aid_size_cell_graphic2_ParamLimits

0xd776,	// (0x00063d24) aid_size_cell_graphic2

0xd7ae,	// (0x00063d5c) bg_popup_window_pane_cp21_ParamLimits

0xd7ae,	// (0x00063d5c) bg_popup_window_pane_cp21

0xd7bc,	// (0x00063d6a) graphic2_pages_pane_ParamLimits

0xd7bc,	// (0x00063d6a) graphic2_pages_pane

0xd802,	// (0x00063db0) grid_graphic2_control_pane_ParamLimits

0xd802,	// (0x00063db0) grid_graphic2_control_pane

0xd840,	// (0x00063dee) grid_graphic2_pane_ParamLimits

0xd840,	// (0x00063dee) grid_graphic2_pane

0xd8b4,	// (0x00063e62) cell_graphic2_pane

0x534d,	// (0x0005b8fb) main_comp_mode_pane

0xc9e5,	// (0x00062f93) list_ai3_gene_pane_ParamLimits

0xcdb3,	// (0x00063361) bg_popup_window_pane_cp19_ParamLimits

0xcdbf,	// (0x0006336d) bg_touch_area_indi_pane_ParamLimits

0xcdbf,	// (0x0006336d) bg_touch_area_indi_pane

0xcdd5,	// (0x00063383) bg_touch_area_indi_pane_cp01_ParamLimits

0xcdd5,	// (0x00063383) bg_touch_area_indi_pane_cp01

0xcdeb,	// (0x00063399) bg_touch_area_indi_pane_cp02_ParamLimits

0xcdeb,	// (0x00063399) bg_touch_area_indi_pane_cp02

0xce01,	// (0x000633af) bg_touch_area_indi_pane_cp03_ParamLimits

0xce01,	// (0x000633af) bg_touch_area_indi_pane_cp03

0xce1b,	// (0x000633c9) popup_slider_window_g1_ParamLimits

0xce37,	// (0x000633e5) popup_slider_window_g2_ParamLimits

0xce53,	// (0x00063401) popup_slider_window_g3_ParamLimits

0xfcd8,	// (0x00066286) popup_slider_window_g_ParamLimits

0xceb9,	// (0x00063467) popup_slider_window_t1_ParamLimits

0xcf2d,	// (0x000634db) small_volume_slider_vertical_pane_ParamLimits

0xd8b4,	// (0x00063e62) cell_graphic2_pane_ParamLimits

0xd903,	// (0x00063eb1) bg_button_pane_cp10_ParamLimits

0xd903,	// (0x00063eb1) bg_button_pane_cp10

0xd916,	// (0x00063ec4) bg_button_pane_cp11_ParamLimits

0xd916,	// (0x00063ec4) bg_button_pane_cp11

0xd929,	// (0x00063ed7) graphic2_pages_pane_g1_ParamLimits

0xd929,	// (0x00063ed7) graphic2_pages_pane_g1

0xd944,	// (0x00063ef2) graphic2_pages_pane_g2_ParamLimits

0xd944,	// (0x00063ef2) graphic2_pages_pane_g2

0x0001,

0xfd9c,	// (0x0006634a) graphic2_pages_pane_g_ParamLimits

0xfd9c,	// (0x0006634a) graphic2_pages_pane_g

0xd95c,	// (0x00063f0a) graphic2_pages_pane_t1_ParamLimits

0xd95c,	// (0x00063f0a) graphic2_pages_pane_t1

0xd974,	// (0x00063f22) cell_graphic2_control_pane_ParamLimits

0xd974,	// (0x00063f22) cell_graphic2_control_pane

0xd992,	// (0x00063f40) cell_graphic2_pane_g1_ParamLimits

0xd992,	// (0x00063f40) cell_graphic2_pane_g1

0xd99f,	// (0x00063f4d) cell_graphic2_pane_g2_ParamLimits

0xd99f,	// (0x00063f4d) cell_graphic2_pane_g2

0xd9ac,	// (0x00063f5a) cell_graphic2_pane_g3_ParamLimits

0xd9ac,	// (0x00063f5a) cell_graphic2_pane_g3

0xd9b9,	// (0x00063f67) cell_graphic2_pane_g4_ParamLimits

0xd9b9,	// (0x00063f67) cell_graphic2_pane_g4

0xd9c6,	// (0x00063f74) cell_graphic2_pane_g5_ParamLimits

0xd9c6,	// (0x00063f74) cell_graphic2_pane_g5

0x0004,

0xfda1,	// (0x0006634f) cell_graphic2_pane_g_ParamLimits

0xfda1,	// (0x0006634f) cell_graphic2_pane_g

0xd9df,	// (0x00063f8d) cell_graphic2_pane_t1_ParamLimits

0xd9df,	// (0x00063f8d) cell_graphic2_pane_t1

0x90ba,	// (0x0005f668) grid_highlight_pane_cp11_ParamLimits

0x90ba,	// (0x0005f668) grid_highlight_pane_cp11

0xe23d,	// (0x000647eb) bg_button_pane_cp05

0xda15,	// (0x00063fc3) cell_graphic2_control_pane_g1

0xb804,	// (0x00061db2) bg_touch_area_indi_pane_g1

0xda3d,	// (0x00063feb) aid_cmod_rocker_key_size

0xda47,	// (0x00063ff5) aid_cmode_itu_key_size

0xda51,	// (0x00063fff) main_cmode_video_pane

0xda5b,	// (0x00064009) main_comp_mode_itu_pane

0xda67,	// (0x00064015) main_comp_mode_rocker_pane

0xda73,	// (0x00064021) cell_cmode_rocker_pane_ParamLimits

0xda73,	// (0x00064021) cell_cmode_rocker_pane

0xda85,	// (0x00064033) cell_cmode_itu_pane_ParamLimits

0xda85,	// (0x00064033) cell_cmode_itu_pane

0xf135,	// (0x000656e3) bg_button_pane_cp06_ParamLimits

0xf135,	// (0x000656e3) bg_button_pane_cp06

0xba74,	// (0x00062022) cell_cmode_rocker_pane_g1_ParamLimits

0xba74,	// (0x00062022) cell_cmode_rocker_pane_g1

0xcfd1,	// (0x0006357f) cell_cmode_rocker_pane_g2_ParamLimits

0xcfd1,	// (0x0006357f) cell_cmode_rocker_pane_g2

0x0001,

0xfdb1,	// (0x0006635f) cell_cmode_rocker_pane_g_ParamLimits

0xfdb1,	// (0x0006635f) cell_cmode_rocker_pane_g

0xe0a3,	// (0x00064651) bg_button_pane_cp07

0xda9a,	// (0x00064048) cell_cmode_itu_pane_g1

0xdaa3,	// (0x00064051) cell_cmode_itu_pane_t1

0xdab1,	// (0x0006405f) cell_cmode_itu_pane_t2

0x0001,

0xfdb6,	// (0x00066364) cell_cmode_itu_pane_t

0xd1f7,	// (0x000637a5) aid_touch_ctrl_left

0xd1ff,	// (0x000637ad) aid_touch_ctrl_right

0xe0a3,	// (0x00064651) compa_mode_pane

0xdabf,	// (0x0006406d) aid_cmod_rocker_key_size_cp

0xdac9,	// (0x00064077) aid_cmode_itu_key_size_cp

0xdad3,	// (0x00064081) compa_mode_pane_g1

0xdadb,	// (0x00064089) compa_mode_pane_g2

0xdae3,	// (0x00064091) compa_mode_pane_g3

0x0002,

0xfdbb,	// (0x00066369) compa_mode_pane_g

0xdaeb,	// (0x00064099) main_comp_mode_itu_pane_cp

0xdaf3,	// (0x000640a1) main_comp_mode_rocker_pane_cp

0xdafb,	// (0x000640a9) cell_cmode_itu_pane_cp_ParamLimits

0xdafb,	// (0x000640a9) cell_cmode_itu_pane_cp

0xdb10,	// (0x000640be) cell_cmode_rocker_pane_cp_ParamLimits

0xdb10,	// (0x000640be) cell_cmode_rocker_pane_cp

0xf135,	// (0x000656e3) bg_button_pane_cp06_cp_ParamLimits

0xf135,	// (0x000656e3) bg_button_pane_cp06_cp

0xba74,	// (0x00062022) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xba74,	// (0x00062022) cell_cmode_rocker_pane_g1_cp

0xb804,	// (0x00061db2) cell_cmode_rocker_pane_g2_cp

0xe0a3,	// (0x00064651) bg_button_pane_cp07_cp

0xdb22,	// (0x000640d0) cell_cmode_itu_pane_g1_cp

0xdb2b,	// (0x000640d9) cell_cmode_itu_pane_t1_cp

0xdb2b,	// (0x000640d9) cell_cmode_itu_pane_t2_cp

0xa557,	// (0x00060b05) settings_code_pane_cp2

0xe105,	// (0x000646b3) bg_popup_window_pane_cp3_ParamLimits

0xe356,	// (0x00064904) heading_pane_cp3_ParamLimits

0xe365,	// (0x00064913) listscroll_popup_graphic_pane_ParamLimits

0x7c5e,	// (0x0005e20c) fep_hwr_aid_pane_ParamLimits

0x81de,	// (0x0005e78c) aid_touch_sctrl_top_ParamLimits

0x81f9,	// (0x0005e7a7) sctrl_sk_top_pane_g1_ParamLimits

0x7eb5,	// (0x0005e463) sctrl_sk_top_pane_g2_ParamLimits

0xfcf1,	// (0x0006629f) sctrl_sk_top_pane_g_ParamLimits

0x8206,	// (0x0005e7b4) sctrl_sk_top_pane_t1_ParamLimits

0x81de,	// (0x0005e78c) aid_touch_sctrl_bottom_ParamLimits

0x8206,	// (0x0005e7b4) sctrl_sk_bottom_pane_t1_ParamLimits

0xd140,	// (0x000636ee) aid_area_touch_clock

0x83eb,	// (0x0005e999) aid_vkb2_area_top_pane_cell_ParamLimits

0x83eb,	// (0x0005e999) aid_vkb2_area_top_pane_cell

0x8539,	// (0x0005eae7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8539,	// (0x0005eae7) aid_vkb2_area_bottom_pane_cell

0xd6af,	// (0x00063c5d) popup_char_count_window

0xdb39,	// (0x000640e7) popup_char_count_window_g1

0xdb42,	// (0x000640f0) popup_char_count_window_g2

0xdb4b,	// (0x000640f9) popup_char_count_window_g3

0x0002,

0xfdc2,	// (0x00066370) popup_char_count_window_g

0xdb54,	// (0x00064102) popup_char_count_window_t1

0x82ad,	// (0x0005e85b) popup_fep_char_preview_window_ParamLimits

0x82ad,	// (0x0005e85b) popup_fep_char_preview_window

0x8409,	// (0x0005e9b7) vkb2_top_candi_pane_ParamLimits

0x8409,	// (0x0005e9b7) vkb2_top_candi_pane

0xdb62,	// (0x00064110) cell_vkb2_top_candi_pane_ParamLimits

0xdb62,	// (0x00064110) cell_vkb2_top_candi_pane

0x882b,	// (0x0005edd9) bg_popup_fep_char_preview_window_ParamLimits

0x882b,	// (0x0005edd9) bg_popup_fep_char_preview_window

0x8839,	// (0x0005ede7) popup_fep_char_preview_window_t1_ParamLimits

0x8839,	// (0x0005ede7) popup_fep_char_preview_window_t1

0xdbac,	// (0x0006415a) bg_popup_fep_char_preview_window_g1

0xdbb4,	// (0x00064162) bg_popup_fep_char_preview_window_g2

0xdbbc,	// (0x0006416a) bg_popup_fep_char_preview_window_g3

0xdbc4,	// (0x00064172) bg_popup_fep_char_preview_window_g4

0xdbcc,	// (0x0006417a) bg_popup_fep_char_preview_window_g5

0xdbd4,	// (0x00064182) bg_popup_fep_char_preview_window_g6

0xdbdc,	// (0x0006418a) bg_popup_fep_char_preview_window_g7

0xdbe4,	// (0x00064192) bg_popup_fep_char_preview_window_g8

0xdbec,	// (0x0006419a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc9,	// (0x00066377) bg_popup_fep_char_preview_window_g

0x7eb5,	// (0x0005e463) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7eb5,	// (0x0005e463) cell_vkb2_top_candi_pane_g1

0x7ec3,	// (0x0005e471) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7ec3,	// (0x0005e471) cell_vkb2_top_candi_pane_g2

0xbd8b,	// (0x00062339) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbd8b,	// (0x00062339) cell_vkb2_top_candi_pane_g3

0x887b,	// (0x0005ee29) cell_vkb2_top_candi_pane_g4_ParamLimits

0x887b,	// (0x0005ee29) cell_vkb2_top_candi_pane_g4

0xbf89,	// (0x00062537) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbf89,	// (0x00062537) cell_vkb2_top_candi_pane_g5

0x889c,	// (0x0005ee4a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x889c,	// (0x0005ee4a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x0006638c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x0006638c) cell_vkb2_top_candi_pane_g

0x88aa,	// (0x0005ee58) cell_vkb2_top_candi_pane_t1

0x797f,	// (0x0005df2d) aid_size_touch_slider_mark_ParamLimits

0x797f,	// (0x0005df2d) aid_size_touch_slider_mark

0xd7f2,	// (0x00063da0) grid_graphic2_catg_pane_ParamLimits

0xd7f2,	// (0x00063da0) grid_graphic2_catg_pane

0xd890,	// (0x00063e3e) popup_grid_graphic2_window_t1_ParamLimits

0xd890,	// (0x00063e3e) popup_grid_graphic2_window_t1

0xd8a2,	// (0x00063e50) popup_grid_graphic2_window_t2_ParamLimits

0xd8a2,	// (0x00063e50) popup_grid_graphic2_window_t2

0x0001,

0xfd97,	// (0x00066345) popup_grid_graphic2_window_t_ParamLimits

0xfd97,	// (0x00066345) popup_grid_graphic2_window_t

0xe23d,	// (0x000647eb) bg_button_pane_cp05_ParamLimits

0xda15,	// (0x00063fc3) cell_graphic2_control_pane_g1_ParamLimits

0xdbf4,	// (0x000641a2) cell_graphic2_catg_pane_ParamLimits

0xdbf4,	// (0x000641a2) cell_graphic2_catg_pane

0xe0a3,	// (0x00064651) bg_button_pane_cp12

0xdc06,	// (0x000641b4) cell_graphic2_catg_pane_g1

0xd10b,	// (0x000636b9) cell_tb_ext_pane_t1_ParamLimits

0x8656,	// (0x0005ec04) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8656,	// (0x0005ec04) vkb2_top_cell_right_narrow_pane

0x866e,	// (0x0005ec1c) vkb2_top_cell_right_wide_pane_ParamLimits

0x866e,	// (0x0005ec1c) vkb2_top_cell_right_wide_pane

0x7c50,	// (0x0005e1fe) bg_vkb2_func_pane_ParamLimits

0x7c50,	// (0x0005e1fe) bg_vkb2_func_pane

0x86df,	// (0x0005ec8d) vkb2_top_cell_left_pane_g1_ParamLimits

0x7c50,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7c50,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp03

0x8748,	// (0x0005ecf6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9036,	// (0x0005f5e4) bg_vkb2_func_pane_g1

0x903e,	// (0x0005f5ec) bg_vkb2_func_pane_g2

0x904e,	// (0x0005f5fc) bg_vkb2_func_pane_g3

0x9046,	// (0x0005f5f4) bg_vkb2_func_pane_g4

0x9056,	// (0x0005f604) bg_vkb2_func_pane_g5

0x905e,	// (0x0005f60c) bg_vkb2_func_pane_g6

0x9066,	// (0x0005f614) bg_vkb2_func_pane_g7

0x906e,	// (0x0005f61c) bg_vkb2_func_pane_g8

0x902e,	// (0x0005f5dc) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x00066399) bg_vkb2_func_pane_g

0x7c50,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7c50,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp01

0x86df,	// (0x0005ec8d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x86df,	// (0x0005ec8d) vkb2_top_cell_right_wide_pane_g1

0x7c50,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7c50,	// (0x0005e1fe) bg_vkb2_fuc_pane_cp02

0x88c9,	// (0x0005ee77) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x88c9,	// (0x0005ee77) vkb2_top_cell_right_narrow_pane_g1

0xcd2d,	// (0x000632db) aid_touch_area_decrease_ParamLimits

0xcd2d,	// (0x000632db) aid_touch_area_decrease

0xcd51,	// (0x000632ff) aid_touch_area_increase_ParamLimits

0xcd51,	// (0x000632ff) aid_touch_area_increase

0xcd69,	// (0x00063317) aid_touch_area_mute_ParamLimits

0xcd69,	// (0x00063317) aid_touch_area_mute

0xcd85,	// (0x00063333) aid_touch_area_slider_ParamLimits

0xcd85,	// (0x00063333) aid_touch_area_slider

0xce6f,	// (0x0006341d) popup_slider_window_g4_ParamLimits

0xce6f,	// (0x0006341d) popup_slider_window_g4

0xce87,	// (0x00063435) popup_slider_window_g5_ParamLimits

0xce87,	// (0x00063435) popup_slider_window_g5

0xcea9,	// (0x00063457) popup_slider_window_g6_ParamLimits

0xcea9,	// (0x00063457) popup_slider_window_g6

0xcee7,	// (0x00063495) popup_slider_window_t2_ParamLimits

0xcee7,	// (0x00063495) popup_slider_window_t2

0x0001,

0xfce5,	// (0x00066293) popup_slider_window_t_ParamLimits

0xfce5,	// (0x00066293) popup_slider_window_t

0xceff,	// (0x000634ad) slider_pane_ParamLimits

0xceff,	// (0x000634ad) slider_pane

0xdc0f,	// (0x000641bd) slider_pane_g1_ParamLimits

0xdc0f,	// (0x000641bd) slider_pane_g1

0xdc23,	// (0x000641d1) slider_pane_g2_ParamLimits

0xdc23,	// (0x000641d1) slider_pane_g2

0xdc39,	// (0x000641e7) slider_pane_g3_ParamLimits

0xdc39,	// (0x000641e7) slider_pane_g3

0x0003,

0xfdfe,	// (0x000663ac) slider_pane_g_ParamLimits

0xfdfe,	// (0x000663ac) slider_pane_g

0x7233,	// (0x0005d7e1) popup_tb_float_extension_window_ParamLimits

0x7233,	// (0x0005d7e1) popup_tb_float_extension_window

0xdc65,	// (0x00064213) aid_size_cell_tb_float_ext

0xe0a3,	// (0x00064651) bg_popup_sub_window_cp28

0xdc71,	// (0x0006421f) grid_tb_float_ext_pane

0xdc7b,	// (0x00064229) cell_tb_float_ext_pane_ParamLimits

0xdc7b,	// (0x00064229) cell_tb_float_ext_pane

0xdc95,	// (0x00064243) cell_tb_float_ext_pane_g1

0xdc9e,	// (0x0006424c) grid_highlight_pane_cp12

0x7d9f,	// (0x0005e34d) cell_last_hwr_side_pane_ParamLimits

0x7d9f,	// (0x0005e34d) cell_last_hwr_side_pane

0xb804,	// (0x00061db2) cell_last_hwr_side_pane_g1

0xdca7,	// (0x00064255) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x000663b5) cell_last_hwr_side_pane_g

0x8605,	// (0x0005ebb3) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8605,	// (0x0005ebb3) vkb2_area_bottom_space_btn_pane

0x7eb5,	// (0x0005e463) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd764,	// (0x00063d12) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x88aa,	// (0x0005ee58) cell_vkb2_top_candi_pane_t1_ParamLimits

0x88e9,	// (0x0005ee97) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x88e9,	// (0x0005ee97) vkb2_area_bottom_space_btn_pane_g1

0x8923,	// (0x0005eed1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8923,	// (0x0005eed1) vkb2_area_bottom_space_btn_pane_g2

0x8959,	// (0x0005ef07) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8959,	// (0x0005ef07) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x000663ba) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x000663ba) vkb2_area_bottom_space_btn_pane_g

0x7d13,	// (0x0005e2c1) cel_fep_hwr_func_pane_ParamLimits

0x7d13,	// (0x0005e2c1) cel_fep_hwr_func_pane

0x7d4f,	// (0x0005e2fd) cell_hwr_side_button_pane_ParamLimits

0x7d4f,	// (0x0005e2fd) cell_hwr_side_button_pane

0xd140,	// (0x000636ee) aid_area_touch_clock_ParamLimits

0xe23d,	// (0x000647eb) bg_uniindi_top_pane_ParamLimits

0xd152,	// (0x00063700) uniindi_top_pane_g1_ParamLimits

0xd168,	// (0x00063716) uniindi_top_pane_g2_ParamLimits

0xd174,	// (0x00063722) uniindi_top_pane_g3_ParamLimits

0xd185,	// (0x00063733) uniindi_top_pane_g4_ParamLimits

0xfd1d,	// (0x000662cb) uniindi_top_pane_g_ParamLimits

0xd192,	// (0x00063740) uniindi_top_pane_t1_ParamLimits

0xe23d,	// (0x000647eb) bg_vkb2_func_pane_cp01_ParamLimits

0xe23d,	// (0x000647eb) bg_vkb2_func_pane_cp01

0xdcb0,	// (0x0006425e) cel_fep_hwr_func_pane_g1_ParamLimits

0xdcb0,	// (0x0006425e) cel_fep_hwr_func_pane_g1

0xe23d,	// (0x000647eb) bg_vkb2_func_pane_cp02_ParamLimits

0xe23d,	// (0x000647eb) bg_vkb2_func_pane_cp02

0xdcb0,	// (0x0006425e) cell_hwr_side_button_pane_g1_ParamLimits

0xdcb0,	// (0x0006425e) cell_hwr_side_button_pane_g1

0x8eb2,	// (0x0005f460) status_pane_g4_ParamLimits

0x8eb2,	// (0x0005f460) status_pane_g4

0x8ecc,	// (0x0005f47a) status_pane_t1

0xb46a,	// (0x00061a18) form2_midp_gauge_slider_cont_pane

0xb472,	// (0x00061a20) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb484,	// (0x00061a32) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb496,	// (0x00061a44) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x00066092) form2_midp_gauge_slider_pane_t_ParamLimits

0xb4a8,	// (0x00061a56) form2_midp_slider_pane_ParamLimits

0x8275,	// (0x0005e823) aid_size_cell_func_vkb2_ParamLimits

0x8275,	// (0x0005e823) aid_size_cell_func_vkb2

0xdc51,	// (0x000641ff) slider_pane_g4_ParamLimits

0xdc51,	// (0x000641ff) slider_pane_g4

0x89a3,	// (0x0005ef51) form2_midp_gauge_slider_pane_t2_cp01

0x89b1,	// (0x0005ef5f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x89b1,	// (0x0005ef5f) form2_midp_gauge_slider_pane_t3_cp01

0x89ce,	// (0x0005ef7c) form2_midp_slider_pane_cp01

0xe0a3,	// (0x00064651) navi_smil_pane

0xdce9,	// (0x00064297) navi_smil_pane_g1

0xdcf1,	// (0x0006429f) navi_smil_pane_t1

0xdcbe,	// (0x0006426c) form2_midp_slider_pane_g1

0xdcc7,	// (0x00064275) form2_midp_slider_pane_g2

0xdccf,	// (0x0006427d) form2_midp_slider_pane_g3

0xdcbe,	// (0x0006426c) form2_midp_slider_pane_g4

0xdcd7,	// (0x00064285) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x000663c3) form2_midp_slider_pane_g

0x8993,	// (0x0005ef41) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8993,	// (0x0005ef41) vkb2_area_bottom_space_btn_pane_g4

0x74ba,	// (0x0005da68) lc0_navi_pane_ParamLimits

0x74ba,	// (0x0005da68) lc0_navi_pane

0x7530,	// (0x0005dade) lc0_stat_indi_pane_ParamLimits

0x7530,	// (0x0005dade) lc0_stat_indi_pane

0x7547,	// (0x0005daf5) ls0_title_pane_ParamLimits

0x7547,	// (0x0005daf5) ls0_title_pane

0xf135,	// (0x000656e3) bg_popup_sub_pane_cp14_ParamLimits

0xd127,	// (0x000636d5) list_uniindi_pane_ParamLimits

0xd133,	// (0x000636e1) uniindi_top_pane_ParamLimits

0xd1cf,	// (0x0006377d) list_single_uniindi_pane_g1_ParamLimits

0xd1e2,	// (0x00063790) list_single_uniindi_pane_t1_ParamLimits

0x89d7,	// (0x0005ef85) lc0_stat_clock_pane_ParamLimits

0x89d7,	// (0x0005ef85) lc0_stat_clock_pane

0xdcff,	// (0x000642ad) lc0_stat_indi_pane_g1_ParamLimits

0xdcff,	// (0x000642ad) lc0_stat_indi_pane_g1

0xdd0c,	// (0x000642ba) lc0_stat_indi_pane_g2_ParamLimits

0xdd0c,	// (0x000642ba) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x000663ce) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x000663ce) lc0_stat_indi_pane_g

0x89e4,	// (0x0005ef92) lc0_uni_indicator_pane_ParamLimits

0x89e4,	// (0x0005ef92) lc0_uni_indicator_pane

0xdd19,	// (0x000642c7) ls0_title_pane_g1_ParamLimits

0xdd19,	// (0x000642c7) ls0_title_pane_g1

0xdd2d,	// (0x000642db) ls0_title_pane_t1_ParamLimits

0xdd2d,	// (0x000642db) ls0_title_pane_t1

0x89f1,	// (0x0005ef9f) lc0_uni_indicator_pane_g1_ParamLimits

0x89f1,	// (0x0005ef9f) lc0_uni_indicator_pane_g1

0xdd63,	// (0x00064311) lc0_stat_clock_pane_t1

0x534d,	// (0x0005b8fb) main_ai5_pane

0xdd71,	// (0x0006431f) ai5_sk_pane_ParamLimits

0xdd71,	// (0x0006431f) ai5_sk_pane

0xdd7e,	// (0x0006432c) cell_ai5_widget_pane_ParamLimits

0xdd7e,	// (0x0006432c) cell_ai5_widget_pane

0xde47,	// (0x000643f5) aid_size_cell_widget_grid

0xde55,	// (0x00064403) bg_ai5_widget_pane_ParamLimits

0xde55,	// (0x00064403) bg_ai5_widget_pane

0xded1,	// (0x0006447f) cell_ai5_widget_pane_g2

0xdee5,	// (0x00064493) cell_ai5_widget_pane_g3

0xdeff,	// (0x000644ad) cell_ai5_widget_pane_g4

0xdf0f,	// (0x000644bd) cell_ai5_widget_pane_g5

0xdf1f,	// (0x000644cd) cell_ai5_widget_pane_g6

0xdf2b,	// (0x000644d9) cell_ai5_widget_pane_g7

0xdf97,	// (0x00064545) cell_ai5_widget_pane_t1_ParamLimits

0xdf97,	// (0x00064545) cell_ai5_widget_pane_t1

0xdfb4,	// (0x00064562) cell_ai5_widget_pane_t2_ParamLimits

0xdfb4,	// (0x00064562) cell_ai5_widget_pane_t2

0xdfcc,	// (0x0006457a) cell_ai5_widget_pane_t3_ParamLimits

0xdfcc,	// (0x0006457a) cell_ai5_widget_pane_t3

0xdfe4,	// (0x00064592) cell_ai5_widget_pane_t4_ParamLimits

0xdfe4,	// (0x00064592) cell_ai5_widget_pane_t4

0xe00a,	// (0x000645b8) cell_ai5_widget_pane_t5_ParamLimits

0xe00a,	// (0x000645b8) cell_ai5_widget_pane_t5

0xe029,	// (0x000645d7) cell_ai5_widget_pane_t6_ParamLimits

0xe029,	// (0x000645d7) cell_ai5_widget_pane_t6

0xe03b,	// (0x000645e9) cell_ai5_widget_pane_t7_ParamLimits

0xe03b,	// (0x000645e9) cell_ai5_widget_pane_t7

0xe05a,	// (0x00064608) cell_ai5_widget_pane_t8_ParamLimits

0xe05a,	// (0x00064608) cell_ai5_widget_pane_t8

0x000b,

0xfe40,	// (0x000663ee) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x000663ee) cell_ai5_widget_pane_t

0xe3b8,	// (0x00064966) grid_ai5_widget_pane

0xf135,	// (0x000656e3) highlight_cell_ai5_widget_pane_ParamLimits

0xf135,	// (0x000656e3) highlight_cell_ai5_widget_pane

0xe3c6,	// (0x00064974) ai5_sk_left_pane

0xe3d0,	// (0x0006497e) ai5_sk_middle_pane

0xe3da,	// (0x00064988) ai5_sk_right_pane

0xe3e4,	// (0x00064992) bg_ai5_widget_pane_g1_ParamLimits

0xe3e4,	// (0x00064992) bg_ai5_widget_pane_g1

0xe3f0,	// (0x0006499e) bg_ai5_widget_pane_g2_ParamLimits

0xe3f0,	// (0x0006499e) bg_ai5_widget_pane_g2

0xe3fc,	// (0x000649aa) bg_ai5_widget_pane_g3_ParamLimits

0xe3fc,	// (0x000649aa) bg_ai5_widget_pane_g3

0xe408,	// (0x000649b6) bg_ai5_widget_pane_g4_ParamLimits

0xe408,	// (0x000649b6) bg_ai5_widget_pane_g4

0xe414,	// (0x000649c2) bg_ai5_widget_pane_g5_ParamLimits

0xe414,	// (0x000649c2) bg_ai5_widget_pane_g5

0xe420,	// (0x000649ce) bg_ai5_widget_pane_g6_ParamLimits

0xe420,	// (0x000649ce) bg_ai5_widget_pane_g6

0xe42c,	// (0x000649da) bg_ai5_widget_pane_g7_ParamLimits

0xe42c,	// (0x000649da) bg_ai5_widget_pane_g7

0xe438,	// (0x000649e6) bg_ai5_widget_pane_g8_ParamLimits

0xe438,	// (0x000649e6) bg_ai5_widget_pane_g8

0xe444,	// (0x000649f2) bg_ai5_widget_pane_g9_ParamLimits

0xe444,	// (0x000649f2) bg_ai5_widget_pane_g9

0x0008,

0xfe59,	// (0x00066407) bg_ai5_widget_pane_g_ParamLimits

0xfe59,	// (0x00066407) bg_ai5_widget_pane_g

0xe476,	// (0x00064a24) cell_shortcut_ai5_widget_pane_ParamLimits

0xe476,	// (0x00064a24) cell_shortcut_ai5_widget_pane

0x169e,	// (0x00057c4c) bg_cell_shortcut_ai5_widget_pane

0xe487,	// (0x00064a35) cell_grid_ai5_widget_pane_g1

0x169e,	// (0x00057c4c) highlight_cell_shortcut_ai5_widget_pane

0x9036,	// (0x0005f5e4) ai5_sk_left_pane_g1

0xe490,	// (0x00064a3e) ai5_sk_left_pane_g2

0xe498,	// (0x00064a46) ai5_sk_left_pane_g3

0xe4a0,	// (0x00064a4e) ai5_sk_left_pane_g4

0x0003,

0xfe6c,	// (0x0006641a) ai5_sk_left_pane_g

0xe4a8,	// (0x00064a56) ai5_sk_left_pane_t1

0x903e,	// (0x0005f5ec) ai5_sk_right_pane_g1

0xe4b6,	// (0x00064a64) ai5_sk_right_pane_g2

0xe4be,	// (0x00064a6c) ai5_sk_right_pane_g3

0xe4c6,	// (0x00064a74) ai5_sk_right_pane_g4

0x0003,

0xfe75,	// (0x00066423) ai5_sk_right_pane_g

0xe4ce,	// (0x00064a7c) ai5_sk_right_pane_t1

0x903e,	// (0x0005f5ec) ai5_sk_middle_pane_g1

0x9036,	// (0x0005f5e4) ai5_sk_middle_pane_g2

0x9056,	// (0x0005f604) ai5_sk_middle_pane_g3

0xe4be,	// (0x00064a6c) ai5_sk_middle_pane_g4

0xe498,	// (0x00064a46) ai5_sk_middle_pane_g5

0xe4dc,	// (0x00064a8a) ai5_sk_middle_pane_g6

0xe4e4,	// (0x00064a92) ai5_sk_middle_pane_g7

0x0006,

0xfe7e,	// (0x0006642c) ai5_sk_middle_pane_g

0x7340,	// (0x0005d8ee) aid_touch_area_size_lc0_ParamLimits

0x7340,	// (0x0005d8ee) aid_touch_area_size_lc0

0x7ee4,	// (0x0005e492) cell_hwr_candidate_pane_t1_ParamLimits

0x735c,	// (0x0005d90a) aid_touch_navi_pane

0x8e5c,	// (0x0005f40a) status_dt_navi_pane_ParamLimits

0x8e5c,	// (0x0005f40a) status_dt_navi_pane

0x8e69,	// (0x0005f417) status_dt_sta_pane_ParamLimits

0x8e69,	// (0x0005f417) status_dt_sta_pane

0xe4ec,	// (0x00064a9a) dt_sta_controll_pane

0xe4f9,	// (0x00064aa7) dt_sta_indi_pane

0xe50a,	// (0x00064ab8) dt_sta_title_pane

0xe23d,	// (0x000647eb) bg_dt_sta_indi_pane_ParamLimits

0xe23d,	// (0x000647eb) bg_dt_sta_indi_pane

0xe51d,	// (0x00064acb) dt_sta_battery_pane

0xe525,	// (0x00064ad3) dt_sta_indi_pane_g1

0xe52e,	// (0x00064adc) dt_sta_indi_pane_g2

0xe537,	// (0x00064ae5) dt_sta_indi_pane_g3

0x0002,

0xfe8d,	// (0x0006643b) dt_sta_indi_pane_g

0xe540,	// (0x00064aee) dt_sta_signal_pane

0xf135,	// (0x000656e3) bg_dt_sta_title_pane_ParamLimits

0xf135,	// (0x000656e3) bg_dt_sta_title_pane

0x9e90,	// (0x0006043e) dt_sta_title_pane_g1

0xe549,	// (0x00064af7) dt_sta_title_pane_t1_ParamLimits

0xe549,	// (0x00064af7) dt_sta_title_pane_t1

0xe0a3,	// (0x00064651) bg_dt_sta_control_pane

0xe55e,	// (0x00064b0c) dt_sta_controll_pane_g1

0xe567,	// (0x00064b15) bg_dt_sta_title_pane_g1

0xe570,	// (0x00064b1e) bg_dt_sta_title_pane_g2

0xe579,	// (0x00064b27) bg_dt_sta_title_pane_g3

0x0002,

0xfe94,	// (0x00066442) bg_dt_sta_title_pane_g

0xb804,	// (0x00061db2) bg_dt_sta_indi_pane_g1

0xe582,	// (0x00064b30) dt_sta_signal_pane_g1

0xe58a,	// (0x00064b38) dt_sta_signal_pane_g2

0x0001,

0xfe9b,	// (0x00066449) dt_sta_signal_pane_g

0xe592,	// (0x00064b40) dt_sta_battery_pane_g1

0xe59b,	// (0x00064b49) dt_sta_battery_pane_t1

0xb804,	// (0x00061db2) bg_dt_sta_control_pane_g1

0x12c3,	// (0x00057871) fep_china_uni_eep_pane

0x12cb,	// (0x00057879) fep_china_uni_entry_pane_ParamLimits

0x12db,	// (0x00057889) popup_fep_china_uni_window_g1_ParamLimits

0x12eb,	// (0x00057899) popup_fep_china_uni_window_g2_ParamLimits

0x12eb,	// (0x00057899) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00065ca1) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00065ca1) popup_fep_china_uni_window_g

0xe5aa,	// (0x00064b58) fep_china_uni_eep_pane_g1

0xe5b2,	// (0x00064b60) fep_china_uni_eep_pane_t1

0xdce0,	// (0x0006428e) aid_touch_area_size_smil_player

0x74b2,	// (0x0005da60) lc0_clock_pane

0x8ec0,	// (0x0005f46e) status_pane_g5_ParamLimits

0x8ec0,	// (0x0005f46e) status_pane_g5

0x6ef4,	// (0x0005d4a2) popup_keymap_window

0x8e7e,	// (0x0005f42c) status_icon_pane

0xdee5,	// (0x00064493) cell_ai5_widget_pane_g3_ParamLimits

0xdeff,	// (0x000644ad) cell_ai5_widget_pane_g4_ParamLimits

0xdf0f,	// (0x000644bd) cell_ai5_widget_pane_g5_ParamLimits

0xdf37,	// (0x000644e5) cell_ai5_widget_pane_g8_ParamLimits

0xdf37,	// (0x000644e5) cell_ai5_widget_pane_g8

0xdf4b,	// (0x000644f9) cell_ai5_widget_pane_g9_ParamLimits

0xdf4b,	// (0x000644f9) cell_ai5_widget_pane_g9

0xdf5f,	// (0x0006450d) cell_ai5_widget_pane_g10_ParamLimits

0xdf5f,	// (0x0006450d) cell_ai5_widget_pane_g10

0xe5c1,	// (0x00064b6f) status_icon_pane_g1

0xe0a3,	// (0x00064651) bg_popup_sub_pane_cp13

0xe5c9,	// (0x00064b77) popup_keymap_window_t1

0x6c1f,	// (0x0005d1cd) control_pane_g6_ParamLimits

0x6c1f,	// (0x0005d1cd) control_pane_g6

0x6c2c,	// (0x0005d1da) control_pane_g7_ParamLimits

0x6c2c,	// (0x0005d1da) control_pane_g7

0x6c39,	// (0x0005d1e7) control_pane_g8_ParamLimits

0x6c39,	// (0x0005d1e7) control_pane_g8

0xe4ec,	// (0x00064a9a) dt_sta_controll_pane_ParamLimits

0xe4f9,	// (0x00064aa7) dt_sta_indi_pane_ParamLimits

0xe50a,	// (0x00064ab8) dt_sta_title_pane_ParamLimits

0xf080,	// (0x0006562e) aid_size_touch_scroll_bar_cale

0x5426,	// (0x0005b9d4) popup_discreet_window_ParamLimits

0x5426,	// (0x0005b9d4) popup_discreet_window

0x54a0,	// (0x0005ba4e) popup_sk_window

0x96d4,	// (0x0005fc82) bg_popup_sub_pane_cp28_ParamLimits

0x96d4,	// (0x0005fc82) bg_popup_sub_pane_cp28

0xe5d7,	// (0x00064b85) popup_discreet_window_g1_ParamLimits

0xe5d7,	// (0x00064b85) popup_discreet_window_g1

0xe5f7,	// (0x00064ba5) popup_discreet_window_t1_ParamLimits

0xe5f7,	// (0x00064ba5) popup_discreet_window_t1

0xe615,	// (0x00064bc3) popup_discreet_window_t2_ParamLimits

0xe615,	// (0x00064bc3) popup_discreet_window_t2

0x0002,

0xfea0,	// (0x0006644e) popup_discreet_window_t_ParamLimits

0xfea0,	// (0x0006644e) popup_discreet_window_t

0x8a05,	// (0x0005efb3) popup_sk_window_g1

0x8a0f,	// (0x0005efbd) popup_sk_window_g2

0x0001,

0xfea7,	// (0x00066455) popup_sk_window_g

0x8a17,	// (0x0005efc5) popup_sk_window_t1

0x8a25,	// (0x0005efd3) popup_sk_window_t1_copy1

0xded1,	// (0x0006447f) cell_ai5_widget_pane_g2_ParamLimits

0xe06c,	// (0x0006461a) cell_ai5_widget_pane_t9_ParamLimits

0xe06c,	// (0x0006461a) cell_ai5_widget_pane_t9

0xe0a3,	// (0x00064651) main_fep_fshwr2_pane

0x8a33,	// (0x0005efe1) aid_fshwr2_btn_pane

0x8a47,	// (0x0005eff5) aid_fshwr2_syb_pane

0x8a5b,	// (0x0005f009) aid_fshwr2_txt_pane

0x8a6b,	// (0x0005f019) fshwr2_func_candi_pane

0x8a8f,	// (0x0005f03d) fshwr2_hwr_syb_pane

0x8aa9,	// (0x0005f057) fshwr2_icf_pane

0x534d,	// (0x0005b8fb) fshwr2_icf_bg_pane

0x8ad7,	// (0x0005f085) fshwr2_icf_pane_t1_ParamLimits

0x8ad7,	// (0x0005f085) fshwr2_icf_pane_t1

0x1240,	// (0x000577ee) fshwr2_func_candi_pane_g1

0xe667,	// (0x00064c15) fshwr2_func_candi_row_pane_ParamLimits

0xe667,	// (0x00064c15) fshwr2_func_candi_row_pane

0x8af0,	// (0x0005f09e) cell_fshwr2_syb_pane_ParamLimits

0x8af0,	// (0x0005f09e) cell_fshwr2_syb_pane

0x8b13,	// (0x0005f0c1) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8b13,	// (0x0005f0c1) fshwr2_hwr_syb_pane_g1

0x534d,	// (0x0005b8fb) bg_popup_call_pane_cp01

0x8b21,	// (0x0005f0cf) fshwr2_func_candi_cell_pane_ParamLimits

0x8b21,	// (0x0005f0cf) fshwr2_func_candi_cell_pane

0x9d30,	// (0x000602de) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9d30,	// (0x000602de) fshwr2_func_candi_cell_bg_pane

0x8b6c,	// (0x0005f11a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8b6c,	// (0x0005f11a) fshwr2_func_candi_cell_pane_g1

0x8b8c,	// (0x0005f13a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8b8c,	// (0x0005f13a) fshwr2_func_candi_cell_pane_t1

0x534d,	// (0x0005b8fb) bg_button_pane_cp08

0xf51d,	// (0x00065acb) cell_fshwr2_syb_bg_pane

0x8b9f,	// (0x0005f14d) cell_fshwr2_syb_bg_pane_g1

0x8bb3,	// (0x0005f161) cell_fshwr2_syb_bg_pane_t1

0xf135,	// (0x000656e3) main_tmo_pane

0xa1c9,	// (0x00060777) uni_indicator_pane_g1_ParamLimits

0xa1dc,	// (0x0006078a) uni_indicator_pane_g2_ParamLimits

0xa1ee,	// (0x0006079c) uni_indicator_pane_g3_ParamLimits

0xa1fd,	// (0x000607ab) uni_indicator_pane_g4_ParamLimits

0xa1fd,	// (0x000607ab) uni_indicator_pane_g4

0xa211,	// (0x000607bf) uni_indicator_pane_g5_ParamLimits

0xa211,	// (0x000607bf) uni_indicator_pane_g5

0xa211,	// (0x000607bf) uni_indicator_pane_g6_ParamLimits

0xa211,	// (0x000607bf) uni_indicator_pane_g6

0xf8f7,	// (0x00065ea5) uni_indicator_pane_g_ParamLimits

0xcd0f,	// (0x000632bd) popup_tmo_note_window_ParamLimits

0xcd0f,	// (0x000632bd) popup_tmo_note_window

0x8257,	// (0x0005e805) fshwr2_bg_pane

0x8b7d,	// (0x0005f12b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8b7d,	// (0x0005f12b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeac,	// (0x0006645a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeac,	// (0x0006645a) fshwr2_func_candi_cell_pane_g

0x7e9d,	// (0x0005e44b) bg_popup_window_pane_cp01

0x8bc9,	// (0x0005f177) bg_popup_window_pane_g1_cp01

0xe68e,	// (0x00064c3c) bg_popup_window_pane_cp22_ParamLimits

0xe68e,	// (0x00064c3c) bg_popup_window_pane_cp22

0xe69c,	// (0x00064c4a) listscroll_tmo_link_pane_ParamLimits

0xe69c,	// (0x00064c4a) listscroll_tmo_link_pane

0xe6dc,	// (0x00064c8a) popup_tmo_note_window_g1_ParamLimits

0xe6dc,	// (0x00064c8a) popup_tmo_note_window_g1

0xe6e9,	// (0x00064c97) tmo_note_info_pane_ParamLimits

0xe6e9,	// (0x00064c97) tmo_note_info_pane

0xe703,	// (0x00064cb1) list_tmo_note_info_pane_g1_ParamLimits

0xe703,	// (0x00064cb1) list_tmo_note_info_pane_g1

0xe71a,	// (0x00064cc8) list_tmo_note_info_pane_g2_ParamLimits

0xe71a,	// (0x00064cc8) list_tmo_note_info_pane_g2

0x0001,

0xfeb1,	// (0x0006645f) list_tmo_note_info_pane_g_ParamLimits

0xfeb1,	// (0x0006645f) list_tmo_note_info_pane_g

0xe736,	// (0x00064ce4) list_tmo_note_info_text_pane_ParamLimits

0xe736,	// (0x00064ce4) list_tmo_note_info_text_pane

0xe7b7,	// (0x00064d65) list_tmo_link_pane

0xe7c4,	// (0x00064d72) scroll_pane_cp20

0xe7d1,	// (0x00064d7f) list_single_tmo_link_pane_ParamLimits

0xe7d1,	// (0x00064d7f) list_single_tmo_link_pane

0xe7e1,	// (0x00064d8f) list_single_tmo_link_pane_t1

0xe7ef,	// (0x00064d9d) list_tmo_note_info_text_pane_t1_ParamLimits

0xe7ef,	// (0x00064d9d) list_tmo_note_info_text_pane_t1

0x6178,	// (0x0005c726) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6178,	// (0x0005c726) aid_size_touch_scroll_bar_cp01

0x6085,	// (0x0005c633) aid_size_touch_slider_marker

0x5488,	// (0x0005ba36) popup_settings_window_ParamLimits

0x5488,	// (0x0005ba36) popup_settings_window

0x3b2e,	// (0x0005a0dc) popup_candi_list_indi_window

0x735c,	// (0x0005d90a) aid_touch_navi_pane_ParamLimits

0x81b2,	// (0x0005e760) rs_clock_indi_pane

0x81bb,	// (0x0005e769) sctrl_sk_bottom_pane_ParamLimits

0x81cc,	// (0x0005e77a) sctrl_sk_top_pane_ParamLimits

0x82c7,	// (0x0005e875) popup_fep_tooltip_window

0xde47,	// (0x000643f5) aid_size_cell_widget_grid_ParamLimits

0xdebc,	// (0x0006446a) cell_ai5_widget_pane_g1_ParamLimits

0xdebc,	// (0x0006446a) cell_ai5_widget_pane_g1

0xdf1f,	// (0x000644cd) cell_ai5_widget_pane_g6_ParamLimits

0xdf2b,	// (0x000644d9) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe25,	// (0x000663d3) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x000663d3) cell_ai5_widget_pane_g

0xe375,	// (0x00064923) cell_ai5_widget_pane_t10_ParamLimits

0xe375,	// (0x00064923) cell_ai5_widget_pane_t10

0xe3b8,	// (0x00064966) grid_ai5_widget_pane_ParamLimits

0xe450,	// (0x000649fe) cell_contacts_ai5_widget_pane_ParamLimits

0xe450,	// (0x000649fe) cell_contacts_ai5_widget_pane

0xe62a,	// (0x00064bd8) popup_discreet_window_t3_ParamLimits

0xe62a,	// (0x00064bd8) popup_discreet_window_t3

0x8ac1,	// (0x0005f06f) popup_fshwr2_char_preview_window_ParamLimits

0x8ac1,	// (0x0005f06f) popup_fshwr2_char_preview_window

0xe754,	// (0x00064d02) tmo_note_info_pane_t1

0xe769,	// (0x00064d17) tmo_note_info_pane_t2

0xe77e,	// (0x00064d2c) tmo_note_info_pane_t3

0xe793,	// (0x00064d41) tmo_note_info_pane_t4

0xe7a5,	// (0x00064d53) tmo_note_info_pane_t5

0x0004,

0xfeb6,	// (0x00066464) tmo_note_info_pane_t

0xe7b7,	// (0x00064d65) list_tmo_link_pane_ParamLimits

0xe7c4,	// (0x00064d72) scroll_pane_cp20_ParamLimits

0x534d,	// (0x0005b8fb) bg_popup_fep_char_preview_window_cp01

0xe808,	// (0x00064db6) popup_fshwr2_char_preview_window_t1

0xe816,	// (0x00064dc4) popup_candi_list_indi_window_g1

0xe81f,	// (0x00064dcd) bg_cell_contacts_ai5_widget_pane

0xe82b,	// (0x00064dd9) cell_contacts_ai5_widget_pane_g1

0xbede,	// (0x0006248c) cell_contacts_ai5_widget_pane_g2

0xe840,	// (0x00064dee) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec1,	// (0x0006646f) cell_contacts_ai5_widget_pane_g

0xe84c,	// (0x00064dfa) cell_contacts_ai5_widget_pane_t1

0xf135,	// (0x000656e3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe8c3,	// (0x00064e71) settings_container_pane

0x169e,	// (0x00057c4c) listscroll_set_pane_copy1

0xad8b,	// (0x00061339) scroll_pane_cp121_copy1

0x9479,	// (0x0005fa27) set_content_pane_copy1

0xe8cf,	// (0x00064e7d) aid_height_set_list_copy1_ParamLimits

0xe8cf,	// (0x00064e7d) aid_height_set_list_copy1

0xa409,	// (0x000609b7) aid_size_parent_copy1_ParamLimits

0xa409,	// (0x000609b7) aid_size_parent_copy1

0xe8db,	// (0x00064e89) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe8db,	// (0x00064e89) button_value_adjust_pane_cp6_copy1

0xf51d,	// (0x00065acb) list_highlight_pane_cp2_copy1_ParamLimits

0xf51d,	// (0x00065acb) list_highlight_pane_cp2_copy1

0xe8ef,	// (0x00064e9d) list_set_pane_copy1_ParamLimits

0xe8ef,	// (0x00064e9d) list_set_pane_copy1

0xe85e,	// (0x00064e0c) main_pane_set_t1_copy1_ParamLimits

0xe85e,	// (0x00064e0c) main_pane_set_t1_copy1

0xe898,	// (0x00064e46) main_pane_set_t2_copy1_ParamLimits

0xe898,	// (0x00064e46) main_pane_set_t2_copy1

0xe99c,	// (0x00064f4a) main_pane_set_t3_copy1

0xe9aa,	// (0x00064f58) main_pane_set_t4_copy1

0xe8b7,	// (0x00064e65) set_content_pane_g1_copy1_ParamLimits

0xe8b7,	// (0x00064e65) set_content_pane_g1_copy1

0xe9b8,	// (0x00064f66) setting_code_pane_copy1

0xe9c0,	// (0x00064f6e) setting_slider_graphic_pane_copy1

0xe9c0,	// (0x00064f6e) setting_slider_pane_copy1

0xe9c8,	// (0x00064f76) setting_text_pane_copy1

0xe9c8,	// (0x00064f76) setting_volume_pane_copy1

0xe9b8,	// (0x00064f66) settings_code_pane_cp2_copy1

0xe9d0,	// (0x00064f7e) settings_code_pane_cp_copy1_ParamLimits

0xe9d0,	// (0x00064f7e) settings_code_pane_cp_copy1

0x8bd2,	// (0x0005f180) volume_set_pane_copy1

0xe9e4,	// (0x00064f92) volume_set_pane_g10_copy1

0xe9ec,	// (0x00064f9a) volume_set_pane_g1_copy1

0xe9f4,	// (0x00064fa2) volume_set_pane_g2_copy1

0xe9fc,	// (0x00064faa) volume_set_pane_g3_copy1

0xea04,	// (0x00064fb2) volume_set_pane_g4_copy1

0xea0c,	// (0x00064fba) volume_set_pane_g5_copy1

0xea14,	// (0x00064fc2) volume_set_pane_g6_copy1

0xea1c,	// (0x00064fca) volume_set_pane_g7_copy1

0xea24,	// (0x00064fd2) volume_set_pane_g8_copy1

0xea2c,	// (0x00064fda) volume_set_pane_g9_copy1

0xe105,	// (0x000646b3) bg_set_opt_pane_cp_copy1_ParamLimits

0xe105,	// (0x000646b3) bg_set_opt_pane_cp_copy1

0x8bda,	// (0x0005f188) setting_slider_pane_t1_copy1_ParamLimits

0x8bda,	// (0x0005f188) setting_slider_pane_t1_copy1

0x8bf9,	// (0x0005f1a7) setting_slider_pane_t2_copy1_ParamLimits

0x8bf9,	// (0x0005f1a7) setting_slider_pane_t2_copy1

0x8c13,	// (0x0005f1c1) setting_slider_pane_t3_copy1_ParamLimits

0x8c13,	// (0x0005f1c1) setting_slider_pane_t3_copy1

0x8c2b,	// (0x0005f1d9) slider_set_pane_copy1_ParamLimits

0x8c2b,	// (0x0005f1d9) slider_set_pane_copy1

0xf18d,	// (0x0006573b) set_opt_bg_pane_g1_copy2

0xf195,	// (0x00065743) set_opt_bg_pane_g2_copy2

0xea34,	// (0x00064fe2) set_opt_bg_pane_g3_copy2

0xf1a5,	// (0x00065753) set_opt_bg_pane_g4_copy2

0xf1ad,	// (0x0006575b) set_opt_bg_pane_g5_copy2

0xf1b5,	// (0x00065763) set_opt_bg_pane_g6_copy2

0xea3e,	// (0x00064fec) set_opt_bg_pane_g7_copy2

0xea46,	// (0x00064ff4) set_opt_bg_pane_g8_copy2

0xea50,	// (0x00064ffe) set_opt_bg_pane_g9_copy2

0x8c41,	// (0x0005f1ef) aid_size_touch_slider_mark_copy1_ParamLimits

0x8c41,	// (0x0005f1ef) aid_size_touch_slider_mark_copy1

0xea5a,	// (0x00065008) slider_set_pane_g1_copy1

0x8c55,	// (0x0005f203) slider_set_pane_g2_copy1

0x799f,	// (0x0005df4d) slider_set_pane_g3_copy1_ParamLimits

0x799f,	// (0x0005df4d) slider_set_pane_g3_copy1

0x79b3,	// (0x0005df61) slider_set_pane_g4_copy1_ParamLimits

0x79b3,	// (0x0005df61) slider_set_pane_g4_copy1

0x79cb,	// (0x0005df79) slider_set_pane_g5_copy1_ParamLimits

0x79cb,	// (0x0005df79) slider_set_pane_g5_copy1

0x799f,	// (0x0005df4d) slider_set_pane_g6_copy1_ParamLimits

0x799f,	// (0x0005df4d) slider_set_pane_g6_copy1

0x8c5d,	// (0x0005f20b) slider_set_pane_g7_copy1_ParamLimits

0x8c5d,	// (0x0005f20b) slider_set_pane_g7_copy1

0xe0b7,	// (0x00064665) bg_set_opt_pane_cp2_copy1

0xea63,	// (0x00065011) setting_slider_graphic_pane_g1_copy1

0xea6c,	// (0x0006501a) setting_slider_graphic_pane_t1_copy1

0xea7c,	// (0x0006502a) setting_slider_graphic_pane_t2_copy1

0xea8c,	// (0x0006503a) slider_set_pane_cp_copy1

0xea9c,	// (0x0006504a) input_focus_pane_cp1_copy1

0xeaa5,	// (0x00065053) list_set_text_pane_copy1

0xeaad,	// (0x0006505b) setting_text_pane_g1_copy1

0x40c6,	// (0x0005a674) set_text_pane_t1_copy1

0xea9c,	// (0x0006504a) input_focus_pane_cp2_copy1

0xeaad,	// (0x0006505b) setting_code_pane_g1_copy1

0xeab6,	// (0x00065064) setting_code_pane_t1_copy1

0xeac4,	// (0x00065072) list_set_graphic_pane_copy1

0xe0b7,	// (0x00064665) bg_set_opt_pane_cp4_copy1

0x141b,	// (0x000579c9) list_set_graphic_pane_g1_copy1_ParamLimits

0x141b,	// (0x000579c9) list_set_graphic_pane_g1_copy1

0xead8,	// (0x00065086) list_set_graphic_pane_g2_copy1

0x1433,	// (0x000579e1) list_set_graphic_pane_t1_copy1_ParamLimits

0x1433,	// (0x000579e1) list_set_graphic_pane_t1_copy1

0xb804,	// (0x00061db2) rs_clock_indi_pane_g1

0xeae0,	// (0x0006508e) rs_clock_indi_pane_t1

0xeaee,	// (0x0006509c) rs_indi_pane

0xeaf6,	// (0x000650a4) rs_indi_pane_g1

0xeaff,	// (0x000650ad) rs_indi_pane_g2

0xe816,	// (0x00064dc4) rs_indi_pane_g3

0x0002,

0xfec8,	// (0x00066476) rs_indi_pane_g

0x169e,	// (0x00057c4c) bg_popup_preview_window_pane_cp03

0xeb08,	// (0x000650b6) popup_fep_tooltip_window_t1

0xc4be,	// (0x00062a6c) popup_note2_window_g2_ParamLimits

0xc4be,	// (0x00062a6c) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0006620a) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0006620a) popup_note2_window_g

0xc9ab,	// (0x00062f59) bg_popup_sub_pane_cp11_ParamLimits

0xc9b8,	// (0x00062f66) cell_ai3_links_pane_g1_ParamLimits

0xc9cf,	// (0x00062f7d) cell_ai3_links_pane_t1

0x40c6,	// (0x0005a674) set_text_pane_t1_copy1_ParamLimits

0x15e0,	// (0x00057b8e) cell_graphic_popup_pane_cp2_ParamLimits

0x15e0,	// (0x00057b8e) cell_graphic_popup_pane_cp2

0xeb16,	// (0x000650c4) cell_graphic_popup_pane_g1_cp2

0xf003,	// (0x000655b1) cell_graphic_popup_pane_g2_cp2

0xeb1e,	// (0x000650cc) cell_graphic_popup_pane_g3_cp2

0xeb26,	// (0x000650d4) cell_graphic_popup_pane_t2_cp2

0xf014,	// (0x000655c2) grid_highlight_pane_cp3_cp2

0xf3f8,	// (0x000659a6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf135,	// (0x000656e3) main_tmo_pane_ParamLimits

0xcd03,	// (0x000632b1) popup_tmo_big_image_note_window

0xdeab,	// (0x00064459) cell_ai5_widget_list_pane

0xdeb3,	// (0x00064461) cell_ai5_widget_lrg_icon_pane

0xe754,	// (0x00064d02) tmo_note_info_pane_t1_ParamLimits

0xe769,	// (0x00064d17) tmo_note_info_pane_t2_ParamLimits

0xe77e,	// (0x00064d2c) tmo_note_info_pane_t3_ParamLimits

0xe793,	// (0x00064d41) tmo_note_info_pane_t4_ParamLimits

0xe7a5,	// (0x00064d53) tmo_note_info_pane_t5_ParamLimits

0xfeb6,	// (0x00066464) tmo_note_info_pane_t_ParamLimits

0xe8c3,	// (0x00064e71) settings_container_pane_ParamLimits

0xea94,	// (0x00065042) indicator_popup_pane_cp5

0xea94,	// (0x00065042) indicator_popup_pane_cp6

0xeac4,	// (0x00065072) list_set_graphic_pane_copy1_ParamLimits

0xe0a3,	// (0x00064651) bg_popup_window_pane_cp23

0xeb34,	// (0x000650e2) popup_tmo_big_image_note_window_g1

0xeb3d,	// (0x000650eb) popup_tmo_big_image_note_window_t1

0xeb4d,	// (0x000650fb) popup_tmo_big_image_note_window_t2

0xeb5d,	// (0x0006510b) popup_tmo_big_image_note_window_t3

0x0002,

0xfecf,	// (0x0006647d) popup_tmo_big_image_note_window_t

0xb804,	// (0x00061db2) cell_ai5_widget_lrg_icon_pane_g1

0xeb6d,	// (0x0006511b) cell_ai5_widget_lrg_icon_pane_t1

0xeb7b,	// (0x00065129) cell_ai5_widget_list_row_pane_ParamLimits

0xeb7b,	// (0x00065129) cell_ai5_widget_list_row_pane

0xeb92,	// (0x00065140) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeb92,	// (0x00065140) cell_ai5_widget_list_row_pane_g1

0xeb9f,	// (0x0006514d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeb9f,	// (0x0006514d) cell_ai5_widget_list_row_pane_t1

0xebca,	// (0x00065178) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xebca,	// (0x00065178) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed6,	// (0x00066484) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed6,	// (0x00066484) cell_ai5_widget_list_row_pane_t

0x534d,	// (0x0005b8fb) main_fep_vtchi_ss_pane

0xec1a,	// (0x000651c8) popup_fep_char_pre_window

0xec22,	// (0x000651d0) popup_fep_ituss_window

0xec4e,	// (0x000651fc) popup_fep_vkbss_window

0xf51d,	// (0x00065acb) grid_vkbss_keypad_pane_ParamLimits

0xf51d,	// (0x00065acb) grid_vkbss_keypad_pane

0xec8e,	// (0x0006523c) ituss_keypad_pane

0x8c7d,	// (0x0005f22b) aid_vkbss_key_offset_ParamLimits

0x8c7d,	// (0x0005f22b) aid_vkbss_key_offset

0x8c89,	// (0x0005f237) cell_vkbss_key_pane_ParamLimits

0x8c89,	// (0x0005f237) cell_vkbss_key_pane

0xec9e,	// (0x0006524c) bg_cell_vkbss_key_g1_ParamLimits

0xec9e,	// (0x0006524c) bg_cell_vkbss_key_g1

0xecaa,	// (0x00065258) cell_vkbss_key_3p_pane_ParamLimits

0xecaa,	// (0x00065258) cell_vkbss_key_3p_pane

0xece0,	// (0x0006528e) cell_vkbss_key_g1_ParamLimits

0xece0,	// (0x0006528e) cell_vkbss_key_g1

0xed16,	// (0x000652c4) cell_vkbss_key_t1_ParamLimits

0xed16,	// (0x000652c4) cell_vkbss_key_t1

0x8cd4,	// (0x0005f282) cell_ituss_key_pane_ParamLimits

0x8cd4,	// (0x0005f282) cell_ituss_key_pane

0xed72,	// (0x00065320) bg_cell_ituss_key_g1_ParamLimits

0xed72,	// (0x00065320) bg_cell_ituss_key_g1

0xed7e,	// (0x0006532c) cell_ituss_key_pane_g1_ParamLimits

0xed7e,	// (0x0006532c) cell_ituss_key_pane_g1

0x8ce5,	// (0x0005f293) cell_ituss_key_pane_g2_ParamLimits

0x8ce5,	// (0x0005f293) cell_ituss_key_pane_g2

0x0005,

0xfedd,	// (0x0006648b) cell_ituss_key_pane_g_ParamLimits

0xfedd,	// (0x0006648b) cell_ituss_key_pane_g

0x8d69,	// (0x0005f317) cell_ituss_key_t1_ParamLimits

0x8d69,	// (0x0005f317) cell_ituss_key_t1

0x8da3,	// (0x0005f351) cell_ituss_key_t2_ParamLimits

0x8da3,	// (0x0005f351) cell_ituss_key_t2

0x8dd5,	// (0x0005f383) cell_ituss_key_t3_ParamLimits

0x8dd5,	// (0x0005f383) cell_ituss_key_t3

0x8e06,	// (0x0005f3b4) cell_ituss_key_t4_ParamLimits

0x8e06,	// (0x0005f3b4) cell_ituss_key_t4

0x0004,

0xfeea,	// (0x00066498) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x00066498) cell_ituss_key_t

0xeda4,	// (0x00065352) cell_vkbss_key_3p_pane_g1

0xedac,	// (0x0006535a) cell_vkbss_key_3p_pane_g2

0xedb4,	// (0x00065362) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x000664a3) cell_vkbss_key_3p_pane_g

0x169e,	// (0x00057c4c) bg_popup_fep_char_preview_window_cp02

0xedbc,	// (0x0006536a) popup_fep_char_pre_window_t1

0xde34,	// (0x000643e2) main_ai5_sk_pane

0xe81f,	// (0x00064dcd) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe82b,	// (0x00064dd9) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xbede,	// (0x0006248c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe840,	// (0x00064dee) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec1,	// (0x0006646f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe84c,	// (0x00064dfa) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf135,	// (0x000656e3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xedca,	// (0x00065378) main_ai5_sk_pane_g1

0x9515,	// (0x0005fac3) popup_query_code_window_g1

0xec38,	// (0x000651e6) popup_fep_vkb_icf_pane

0xec65,	// (0x00065213) popup_fep_vtchi_icf_pane

0xedd3,	// (0x00065381) bg_icf_pane

0xedd3,	// (0x00065381) list_vkb_icf_pane

0xeddf,	// (0x0006538d) bg_icf_pane_cp01

0xedf2,	// (0x000653a0) vtchi_icf_list_pane

0xee52,	// (0x00065400) list_vkb_icf_pane_t1_ParamLimits

0xee52,	// (0x00065400) list_vkb_icf_pane_t1

0xee77,	// (0x00065425) vtchi_icf_list_pane_t1_ParamLimits

0xee77,	// (0x00065425) vtchi_icf_list_pane_t1

0xec22,	// (0x000651d0) popup_fep_ituss_window_ParamLimits

0xec65,	// (0x00065213) popup_fep_vtchi_icf_pane_ParamLimits

0xec8e,	// (0x0006523c) ituss_keypad_pane_ParamLimits

0x8c73,	// (0x0005f221) ituss_sks_pane

0xedd3,	// (0x00065381) bg_icf_pane_ParamLimits

0xebf2,	// (0x000651a0) icf_edit_indi_pane_ParamLimits

0xebf2,	// (0x000651a0) icf_edit_indi_pane

0xedd3,	// (0x00065381) list_vkb_icf_pane_ParamLimits

0xeddf,	// (0x0006538d) bg_icf_pane_cp01_ParamLimits

0xec0d,	// (0x000651bb) icf_edit_indi_pane_cp01_ParamLimits

0xec0d,	// (0x000651bb) icf_edit_indi_pane_cp01

0xedf2,	// (0x000653a0) vtchi_query_pane

0xdcb0,	// (0x0006425e) icf_edit_indi_pane_g1_ParamLimits

0xdcb0,	// (0x0006425e) icf_edit_indi_pane_g1

0xeef2,	// (0x000654a0) icf_edit_indi_pane_g2_ParamLimits

0xeef2,	// (0x000654a0) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x000664ce) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x000664ce) icf_edit_indi_pane_g

0xef06,	// (0x000654b4) icf_edit_indi_pane_t1

0xee9b,	// (0x00065449) bg_input_focus_pane_cp042

0xf077,	// (0x00065625) vtchi_button_pane

0xeea4,	// (0x00065452) vtchi_query_pane_t1

0xeeb2,	// (0x00065460) vtchi_query_pane_t2

0xeec0,	// (0x0006546e) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x000664bd) vtchi_query_pane_t

0x534d,	// (0x0005b8fb) bg_button_pane_cp13

0xeece,	// (0x0006547c) vtchi_button_pane_g1

0x8e49,	// (0x0005f3f7) ituss_sks_pane_g1

0x8e54,	// (0x0005f402) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x000664c4) ituss_sks_pane_g

0xeed6,	// (0x00065484) ituss_sks_pane_t1

0xeee4,	// (0x00065492) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x000664c9) ituss_sks_pane_t

0xb1a3,	// (0x00061751) indicator_nsta_pane_cp_g1

0xb1ac,	// (0x0006175a) indicator_nsta_pane_cp_g2

0xb1b4,	// (0x00061762) indicator_nsta_pane_cp_g3

0xb1bc,	// (0x0006176a) indicator_nsta_pane_cp_g4

0xb1ac,	// (0x0006175a) indicator_nsta_pane_cp_g5

0xb1b4,	// (0x00061762) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x00066048) indicator_nsta_pane_cp_g

0xda03,	// (0x00063fb1) cell_graphic2_pane_t2_ParamLimits

0xda03,	// (0x00063fb1) cell_graphic2_pane_t2

0x0001,

0xfdac,	// (0x0006635a) cell_graphic2_pane_t_ParamLimits

0xfdac,	// (0x0006635a) cell_graphic2_pane_t

0xda2f,	// (0x00063fdd) cell_graphic2_control_pane_t1

0x6642,	// (0x0005cbf0) signal_pane_g3_ParamLimits

0x6642,	// (0x0005cbf0) signal_pane_g3

0x6654,	// (0x0005cc02) signal_pane_g4_ParamLimits

0x6654,	// (0x0005cc02) signal_pane_g4

0xebdc,	// (0x0006518a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xebdc,	// (0x0006518a) cell_ai5_widget_list_row_pane_t3

0xed92,	// (0x00065340) cell_ituss_key_pane_t1_ParamLimits

0xed92,	// (0x00065340) cell_ituss_key_pane_t1

0x9148,	// (0x0005f6f6) form_field_data_wide_pane_vc_t2_ParamLimits

0x9148,	// (0x0005f6f6) form_field_data_wide_pane_vc_t2

0x915c,	// (0x0005f70a) form_field_data_wide_pane_vc_t3_ParamLimits

0x915c,	// (0x0005f70a) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x00065d8d) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x00065d8d) form_field_data_wide_pane_vc_t

0xae4d,	// (0x000613fb) form_field_slider_wide_pane_vc_t3_ParamLimits

0xae4d,	// (0x000613fb) form_field_slider_wide_pane_vc_t3

0xaf2b,	// (0x000614d9) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaf2b,	// (0x000614d9) form_field_popup_wide_pane_vc_t2

0xaf42,	// (0x000614f0) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaf42,	// (0x000614f0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x00066037) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00066037) form_field_popup_wide_pane_vc_t

0x8a33,	// (0x0005efe1) aid_fshwr2_btn_pane_ParamLimits

0x8a47,	// (0x0005eff5) aid_fshwr2_syb_pane_ParamLimits

0x8a5b,	// (0x0005f009) aid_fshwr2_txt_pane_ParamLimits

0x8257,	// (0x0005e805) fshwr2_bg_pane_ParamLimits

0x8a6b,	// (0x0005f019) fshwr2_func_candi_pane_ParamLimits

0x8a8f,	// (0x0005f03d) fshwr2_hwr_syb_pane_ParamLimits

0x8aa9,	// (0x0005f057) fshwr2_icf_pane_ParamLimits

0xae07,	// (0x000613b5) list_double_graphic_pane_vc_g4_ParamLimits

0xae07,	// (0x000613b5) list_double_graphic_pane_vc_g4

0x8d05,	// (0x0005f2b3) cell_ituss_key_pane_g3_ParamLimits

0x8d05,	// (0x0005f2b3) cell_ituss_key_pane_g3

0x8e37,	// (0x0005f3e5) cell_ituss_key_t5_ParamLimits

0x8e37,	// (0x0005f3e5) cell_ituss_key_t5

0xec4e,	// (0x000651fc) popup_fep_vkbss_window_ParamLimits

0xde3e,	// (0x000643ec) aid_cell_ai5_quarter

0xef06,	// (0x000654b4) icf_edit_indi_pane_t1_ParamLimits

0x580c,	// (0x0005bdba) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x580c,	// (0x0005bdba) aid_tch_indicator_popup_pane_cp2

0x581f,	// (0x0005bdcd) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x581f,	// (0x0005bdcd) aid_tch_query_popup_data_pane_cp2

0x94bd,	// (0x0005fa6b) aid_tch_query_popup_pane_ParamLimits

0x94bd,	// (0x0005fa6b) aid_tch_query_popup_pane

0x94bd,	// (0x0005fa6b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x94bd,	// (0x0005fa6b) aid_tch_query_popup_data_pane_cp1

0xf51d,	// (0x00065acb) cell_fshwr2_syb_bg_pane_ParamLimits

0x8b9f,	// (0x0005f14d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8bb3,	// (0x0005f161) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xec38,	// (0x000651e6) popup_fep_vkb_icf_pane_ParamLimits

0x8873,	// (0x0005ee21) bg_popup_fep_char_preview_window_g10

0xdf73,	// (0x00064521) cell_ai5_widget_pane_g11_ParamLimits

0xdf73,	// (0x00064521) cell_ai5_widget_pane_g11

0xdf7f,	// (0x0006452d) cell_ai5_widget_pane_g12_ParamLimits

0xdf7f,	// (0x0006452d) cell_ai5_widget_pane_g12

0xdf8b,	// (0x00064539) cell_ai5_widget_pane_g13_ParamLimits

0xdf8b,	// (0x00064539) cell_ai5_widget_pane_g13

0xe394,	// (0x00064942) cell_ai5_widget_pane_t11_ParamLimits

0xe394,	// (0x00064942) cell_ai5_widget_pane_t11

0xe3a6,	// (0x00064954) cell_ai5_widget_pane_t12_ParamLimits

0xe3a6,	// (0x00064954) cell_ai5_widget_pane_t12

0x8d11,	// (0x0005f2bf) cell_ituss_key_pane_g4_ParamLimits

0x8d11,	// (0x0005f2bf) cell_ituss_key_pane_g4

0x8d2d,	// (0x0005f2db) cell_ituss_key_pane_g5_ParamLimits

0x8d2d,	// (0x0005f2db) cell_ituss_key_pane_g5

0x8d49,	// (0x0005f2f7) cell_ituss_key_pane_g6_ParamLimits

0x8d49,	// (0x0005f2f7) cell_ituss_key_pane_g6

0x902e,	// (0x0005f5dc) bg_icf_pane_g1

0xedfa,	// (0x000653a8) bg_icf_pane_g2

0xee06,	// (0x000653b4) bg_icf_pane_g3

0xee10,	// (0x000653be) bg_icf_pane_g4

0xee1c,	// (0x000653ca) bg_icf_pane_g5

0xee26,	// (0x000653d4) bg_icf_pane_g6

0xee32,	// (0x000653e0) bg_icf_pane_g7

0xee3c,	// (0x000653ea) bg_icf_pane_g8

0xee48,	// (0x000653f6) bg_icf_pane_g9

0x0008,

0xfefc,	// (0x000664aa) bg_icf_pane_g

0xec7b,	// (0x00065229) popup_hyb_candi_window_ParamLimits

0xec7b,	// (0x00065229) popup_hyb_candi_window

0x90ba,	// (0x0005f668) bg_popup_sub_pane_cp01_ParamLimits

0x90ba,	// (0x0005f668) bg_popup_sub_pane_cp01

0xef1f,	// (0x000654cd) entry_hyb_candi_pane_ParamLimits

0xef1f,	// (0x000654cd) entry_hyb_candi_pane

0xef2e,	// (0x000654dc) grid_hyb_candi_pane_ParamLimits

0xef2e,	// (0x000654dc) grid_hyb_candi_pane

0xef43,	// (0x000654f1) grid_hyb_phrase_pane_ParamLimits

0xef43,	// (0x000654f1) grid_hyb_phrase_pane

0xef52,	// (0x00065500) cell_hyb_candi_pane_ParamLimits

0xef52,	// (0x00065500) cell_hyb_candi_pane

0xef75,	// (0x00065523) cell_hyb_candi_scroll_pane

0x1240,	// (0x000577ee) cell_hyb_candi_pane_g1

0xef7e,	// (0x0006552c) cell_hyb_candi_pane_t1

0xef8c,	// (0x0006553a) cell_hyb_phrase_pane

0x1240,	// (0x000577ee) cell_hyb_phrase_pane_g1

0xef95,	// (0x00065543) cell_hyb_phrase_pane_t1

0xefa3,	// (0x00065551) entry_hyb_candi_pane_t1

0x169e,	// (0x00057c4c) input_focus_pane_cp06

0xefb1,	// (0x0006555f) cell_hyb_candi_scroll_pane_g1

0xefb9,	// (0x00065567) cell_hyb_candi_scroll_pane_g1_aid

0xefc1,	// (0x0006556f) cell_hyb_candi_scroll_pane_g2

0xefc9,	// (0x00065577) cell_hyb_candi_scroll_pane_g2_aid

0xefd1,	// (0x0006557f) cell_hyb_candi_scroll_pane_g3

0xefd9,	// (0x00065587) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large

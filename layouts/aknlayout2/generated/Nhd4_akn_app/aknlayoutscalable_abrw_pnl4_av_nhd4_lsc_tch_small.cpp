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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000373fe };

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
0x8b8f,	// (0x0003ff8d) Screen

0x8b9b,	// (0x0003ff99) application_window_ParamLimits

0x8b9b,	// (0x0003ff99) application_window

0xb3dd,	// (0x000427db) screen_g1

0x8bd3,	// (0x0003ffd1) area_bottom_pane_ParamLimits

0x8bd3,	// (0x0003ffd1) area_bottom_pane

0xee3e,	// (0x0004623c) area_top_pane_ParamLimits

0xee3e,	// (0x0004623c) area_top_pane

0xeedc,	// (0x000462da) main_pane_ParamLimits

0xeedc,	// (0x000462da) main_pane

0xb3e7,	// (0x000427e5) misc_graphics

0xbd70,	// (0x0004316e) battery_pane_ParamLimits

0xbd70,	// (0x0004316e) battery_pane

0x31d6,	// (0x0003a5d4) bg_status_flat_pane_g8

0x31de,	// (0x0003a5dc) bg_status_flat_pane_g9

0x25dc,	// (0x000399da) context_pane_ParamLimits

0x25dc,	// (0x000399da) context_pane

0xbedb,	// (0x000432d9) navi_pane_ParamLimits

0xbedb,	// (0x000432d9) navi_pane

0xbf59,	// (0x00043357) signal_pane_ParamLimits

0xbf59,	// (0x00043357) signal_pane

0x0008,

0xf85e,	// (0x00046c5c) bg_status_flat_pane_g

0xbfe9,	// (0x000433e7) status_pane_g1_ParamLimits

0xbfe9,	// (0x000433e7) status_pane_g1

0xbfff,	// (0x000433fd) status_pane_g2_ParamLimits

0xbfff,	// (0x000433fd) status_pane_g2

0x2803,	// (0x00039c01) status_pane_g3_ParamLimits

0x2803,	// (0x00039c01) status_pane_g3

0x0004,

0xf791,	// (0x00046b8f) status_pane_g_ParamLimits

0xf791,	// (0x00046b8f) status_pane_g

0xc00b,	// (0x00043409) title_pane_ParamLimits

0xc00b,	// (0x00043409) title_pane

0xc06e,	// (0x0004346c) uni_indicator_pane_ParamLimits

0xc06e,	// (0x0004346c) uni_indicator_pane

0x2438,	// (0x00039836) bg_list_pane_ParamLimits

0x2438,	// (0x00039836) bg_list_pane

0xd32c,	// (0x0004472a) find_pane

0xa103,	// (0x00041501) listscroll_app_pane_ParamLimits

0xa103,	// (0x00041501) listscroll_app_pane

0x2464,	// (0x00039862) listscroll_form_pane

0xf149,	// (0x00046547) listscroll_gen_pane_ParamLimits

0xf149,	// (0x00046547) listscroll_gen_pane

0x0397,	// (0x00037795) listscroll_set_pane

0x3d3a,	// (0x0003b138) main_idle_act_pane

0x2138,	// (0x00039536) main_idle_trad_pane

0x2138,	// (0x00039536) main_list_empty_pane

0x247e,	// (0x0003987c) main_midp_pane

0x248a,	// (0x00039888) main_pane_g1_ParamLimits

0x248a,	// (0x00039888) main_pane_g1

0xa113,	// (0x00041511) popup_ai_message_window_ParamLimits

0xa113,	// (0x00041511) popup_ai_message_window

0xa1c4,	// (0x000415c2) popup_fep_china_uni_window_ParamLimits

0xa1c4,	// (0x000415c2) popup_fep_china_uni_window

0xa21e,	// (0x0004161c) popup_fep_japan_candidate_window_ParamLimits

0xa21e,	// (0x0004161c) popup_fep_japan_candidate_window

0xa23c,	// (0x0004163a) popup_fep_japan_predictive_window_ParamLimits

0xa23c,	// (0x0004163a) popup_fep_japan_predictive_window

0xa24e,	// (0x0004164c) popup_find_window

0xa26b,	// (0x00041669) popup_grid_graphic_window_ParamLimits

0xa26b,	// (0x00041669) popup_grid_graphic_window

0xa309,	// (0x00041707) popup_large_graphic_colour_window

0xa32f,	// (0x0004172d) popup_menu_window_ParamLimits

0xa32f,	// (0x0004172d) popup_menu_window

0xa501,	// (0x000418ff) popup_note_image_window

0xa4c7,	// (0x000418c5) popup_note_wait_window_ParamLimits

0xa4c7,	// (0x000418c5) popup_note_wait_window

0xa519,	// (0x00041917) popup_note_window_ParamLimits

0xa519,	// (0x00041917) popup_note_window

0xa5c8,	// (0x000419c6) popup_query_code_window_ParamLimits

0xa5c8,	// (0x000419c6) popup_query_code_window

0xa602,	// (0x00041a00) popup_query_data_code_window_ParamLimits

0xa602,	// (0x00041a00) popup_query_data_code_window

0xa61f,	// (0x00041a1d) popup_query_data_window_ParamLimits

0xa61f,	// (0x00041a1d) popup_query_data_window

0xa6a1,	// (0x00041a9f) popup_query_sat_info_window_ParamLimits

0xa6a1,	// (0x00041a9f) popup_query_sat_info_window

0xa738,	// (0x00041b36) popup_snote_single_graphic_window_ParamLimits

0xa738,	// (0x00041b36) popup_snote_single_graphic_window

0xa738,	// (0x00041b36) popup_snote_single_text_window_ParamLimits

0xa738,	// (0x00041b36) popup_snote_single_text_window

0x0803,	// (0x00037c01) popup_sub_window_general

0xa895,	// (0x00041c93) popup_window_general_ParamLimits

0xa895,	// (0x00041c93) popup_window_general

0x2498,	// (0x00039896) power_save_pane

0x9f61,	// (0x0004135f) control_pane_g1_ParamLimits

0x9f61,	// (0x0004135f) control_pane_g1

0x9f8a,	// (0x00041388) control_pane_g2_ParamLimits

0x9f8a,	// (0x00041388) control_pane_g2

0x23fb,	// (0x000397f9) control_pane_g3_ParamLimits

0x23fb,	// (0x000397f9) control_pane_g3

0x0007,

0xf779,	// (0x00046b77) control_pane_g_ParamLimits

0xf779,	// (0x00046b77) control_pane_g

0x9ff2,	// (0x000413f0) control_pane_t1_ParamLimits

0x9ff2,	// (0x000413f0) control_pane_t1

0xa058,	// (0x00041456) control_pane_t2_ParamLimits

0xa058,	// (0x00041456) control_pane_t2

0x0002,

0xf78a,	// (0x00046b88) control_pane_t_ParamLimits

0xf78a,	// (0x00046b88) control_pane_t

0x9eba,	// (0x000412b8) navi_navi_volume_pane_cp1

0x9ec2,	// (0x000412c0) status_small_icon_pane

0x2330,	// (0x0003972e) status_small_pane_g1_ParamLimits

0x2330,	// (0x0003972e) status_small_pane_g1

0x9eca,	// (0x000412c8) status_small_pane_g2_ParamLimits

0x9eca,	// (0x000412c8) status_small_pane_g2

0x9ed6,	// (0x000412d4) status_small_pane_g3_ParamLimits

0x9ed6,	// (0x000412d4) status_small_pane_g3

0x9ee2,	// (0x000412e0) status_small_pane_g4_ParamLimits

0x9ee2,	// (0x000412e0) status_small_pane_g4

0x9eee,	// (0x000412ec) status_small_pane_g5_ParamLimits

0x9eee,	// (0x000412ec) status_small_pane_g5

0x9efc,	// (0x000412fa) status_small_pane_g6_ParamLimits

0x9efc,	// (0x000412fa) status_small_pane_g6

0x0007,

0xf768,	// (0x00046b66) status_small_pane_g_ParamLimits

0xf768,	// (0x00046b66) status_small_pane_g

0x9f2b,	// (0x00041329) status_small_pane_t1

0x9f4d,	// (0x0004134b) status_small_wait_pane_ParamLimits

0x9f4d,	// (0x0004134b) status_small_wait_pane

0x9bac,	// (0x00040faa) aid_levels_signal_ParamLimits

0x9bac,	// (0x00040faa) aid_levels_signal

0x9bc4,	// (0x00040fc2) signal_pane_g1_ParamLimits

0x9bc4,	// (0x00040fc2) signal_pane_g1

0x9bdf,	// (0x00040fdd) signal_pane_g2_ParamLimits

0x9bdf,	// (0x00040fdd) signal_pane_g2

0x0003,

0xf6f9,	// (0x00046af7) signal_pane_g_ParamLimits

0xf6f9,	// (0x00046af7) signal_pane_g

0xbc80,	// (0x0004307e) context_pane_g1

0x8dd1,	// (0x000401cf) title_pane_g1

0x8e08,	// (0x00040206) title_pane_t1

0xb3fd,	// (0x000427fb) title_pane_t2

0xb423,	// (0x00042821) title_pane_t3

0x0002,

0xf557,	// (0x00046955) title_pane_t

0xc096,	// (0x00043494) aid_levels_battery_ParamLimits

0xc096,	// (0x00043494) aid_levels_battery

0xc0b2,	// (0x000434b0) battery_pane_g1_ParamLimits

0xc0b2,	// (0x000434b0) battery_pane_g1

0xc0cf,	// (0x000434cd) battery_pane_g2_ParamLimits

0xc0cf,	// (0x000434cd) battery_pane_g2

0x0001,

0xf79c,	// (0x00046b9a) battery_pane_g_ParamLimits

0xf79c,	// (0x00046b9a) battery_pane_g

0xc695,	// (0x00043a93) uni_indicator_pane_g1

0xc6ab,	// (0x00043aa9) uni_indicator_pane_g2

0xc6c1,	// (0x00043abf) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x00046d04) uni_indicator_pane_g

0x00b9,	// (0x000374b7) navi_icon_pane_ParamLimits

0x00b9,	// (0x000374b7) navi_icon_pane

0x0003,	// (0x00037401) navi_midp_pane

0x00d5,	// (0x000374d3) navi_navi_pane

0x00df,	// (0x000374dd) navi_text_pane_ParamLimits

0x00df,	// (0x000374dd) navi_text_pane

0xb3dd,	// (0x000427db) status_small_wait_pane_g1

0xb674,	// (0x00042a72) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x00046cff) status_small_wait_pane_g

0xc5ee,	// (0x000439ec) navi_navi_icon_text_pane

0x3829,	// (0x0003ac27) navi_navi_pane_g1_ParamLimits

0x3829,	// (0x0003ac27) navi_navi_pane_g1

0x383b,	// (0x0003ac39) navi_navi_pane_g2_ParamLimits

0x383b,	// (0x0003ac39) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x00046ccd) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x00046ccd) navi_navi_pane_g

0x384d,	// (0x0003ac4b) navi_navi_tabs_pane

0x3856,	// (0x0003ac54) navi_navi_text_pane

0xc5ee,	// (0x000439ec) navi_navi_volume_pane

0x37fd,	// (0x0003abfb) navi_text_pane_t1

0x37f1,	// (0x0003abef) navi_icon_pane_g1

0x3744,	// (0x0003ab42) navi_navi_text_pane_t1

0xa969,	// (0x00041d67) navi_navi_volume_pane_g1

0x0c20,	// (0x0003801e) volume_small_pane

0x36aa,	// (0x0003aaa8) navi_navi_icon_text_pane_g1

0xc546,	// (0x00043944) navi_navi_icon_text_pane_t1

0x00d5,	// (0x000374d3) navi_tabs_2_long_pane

0x00d5,	// (0x000374d3) navi_tabs_2_pane

0x00d5,	// (0x000374d3) navi_tabs_3_long_pane

0x00d5,	// (0x000374d3) navi_tabs_3_pane

0x00d5,	// (0x000374d3) navi_tabs_4_pane

0x0bf8,	// (0x00037ff6) tabs_2_active_pane_ParamLimits

0x0bf8,	// (0x00037ff6) tabs_2_active_pane

0x0c08,	// (0x00038006) tabs_2_passive_pane_ParamLimits

0x0c08,	// (0x00038006) tabs_2_passive_pane

0x0bc6,	// (0x00037fc4) tabs_3_active_pane_ParamLimits

0x0bc6,	// (0x00037fc4) tabs_3_active_pane

0x0bd6,	// (0x00037fd4) tabs_3_passive_pane_ParamLimits

0x0bd6,	// (0x00037fd4) tabs_3_passive_pane

0x0be7,	// (0x00037fe5) tabs_3_passive_pane_cp_ParamLimits

0x0be7,	// (0x00037fe5) tabs_3_passive_pane_cp

0x0b82,	// (0x00037f80) tabs_4_active_pane_ParamLimits

0x0b82,	// (0x00037f80) tabs_4_active_pane

0x0b93,	// (0x00037f91) tabs_4_passive_pane_ParamLimits

0x0b93,	// (0x00037f91) tabs_4_passive_pane

0x0ba4,	// (0x00037fa2) tabs_4_passive_pane_cp_ParamLimits

0x0ba4,	// (0x00037fa2) tabs_4_passive_pane_cp

0x0bb5,	// (0x00037fb3) tabs_4_passive_pane_cp2_ParamLimits

0x0bb5,	// (0x00037fb3) tabs_4_passive_pane_cp2

0x0b5e,	// (0x00037f5c) tabs_2_long_active_pane_ParamLimits

0x0b5e,	// (0x00037f5c) tabs_2_long_active_pane

0x0b70,	// (0x00037f6e) tabs_2_long_passive_pane_ParamLimits

0x0b70,	// (0x00037f6e) tabs_2_long_passive_pane

0x0b19,	// (0x00037f17) tabs_3_long_active_pane_ParamLimits

0x0b19,	// (0x00037f17) tabs_3_long_active_pane

0x0b32,	// (0x00037f30) tabs_3_long_passive_pane_ParamLimits

0x0b32,	// (0x00037f30) tabs_3_long_passive_pane

0x0b45,	// (0x00037f43) tabs_3_long_passive_pane_cp_ParamLimits

0x0b45,	// (0x00037f43) tabs_3_long_passive_pane_cp

0x0abf,	// (0x00037ebd) volume_small_pane_g1

0x0ac8,	// (0x00037ec6) volume_small_pane_g2

0x0ad1,	// (0x00037ecf) volume_small_pane_g3

0x0ada,	// (0x00037ed8) volume_small_pane_g4

0x0ae3,	// (0x00037ee1) volume_small_pane_g5

0x0aec,	// (0x00037eea) volume_small_pane_g6

0x0af5,	// (0x00037ef3) volume_small_pane_g7

0x0afe,	// (0x00037efc) volume_small_pane_g8

0x0b07,	// (0x00037f05) volume_small_pane_g9

0x0b10,	// (0x00037f0e) volume_small_pane_g10

0x0009,

0xf89b,	// (0x00046c99) volume_small_pane_g

0xb435,	// (0x00042833) bg_active_tab_pane_cp2_ParamLimits

0xb435,	// (0x00042833) bg_active_tab_pane_cp2

0x8e94,	// (0x00040292) tabs_3_active_pane_g1

0x8e9c,	// (0x0004029a) tabs_3_active_pane_t1

0xb435,	// (0x00042833) bg_passive_tab_pane_cp2_ParamLimits

0xb435,	// (0x00042833) bg_passive_tab_pane_cp2

0x8e94,	// (0x00040292) tabs_3_passive_pane_g1

0x8e9c,	// (0x0004029a) tabs_3_passive_pane_t1

0xb435,	// (0x00042833) bg_active_tab_pane_cp3_ParamLimits

0xb435,	// (0x00042833) bg_active_tab_pane_cp3

0x8eae,	// (0x000402ac) tabs_4_active_pane_g1

0x8eb6,	// (0x000402b4) tabs_4_active_pane_t1

0xb435,	// (0x00042833) bg_passive_tab_pane_cp3_ParamLimits

0xb435,	// (0x00042833) bg_passive_tab_pane_cp3

0x8eae,	// (0x000402ac) tabs_4_1_passive_pane_g1

0x8eb6,	// (0x000402b4) tabs_4_1_passive_pane_t1

0x247e,	// (0x0003987c) list_highlight_pane_cp2

0xc7c7,	// (0x00043bc5) list_set_pane_ParamLimits

0xc7c7,	// (0x00043bc5) list_set_pane

0xc861,	// (0x00043c5f) main_pane_set_t1_ParamLimits

0xc861,	// (0x00043c5f) main_pane_set_t1

0xc881,	// (0x00043c7f) main_pane_set_t2_ParamLimits

0xc881,	// (0x00043c7f) main_pane_set_t2

0xc895,	// (0x00043c93) main_pane_set_t3_ParamLimits

0xc895,	// (0x00043c93) main_pane_set_t3

0xc8a7,	// (0x00043ca5) main_pane_set_t4_ParamLimits

0xc8a7,	// (0x00043ca5) main_pane_set_t4

0x0003,

0xf96b,	// (0x00046d69) main_pane_set_t_ParamLimits

0xf96b,	// (0x00046d69) main_pane_set_t

0xc8b9,	// (0x00043cb7) setting_code_pane

0xc8c3,	// (0x00043cc1) setting_slider_graphic_pane

0xc8c3,	// (0x00043cc1) setting_slider_pane

0xc8c3,	// (0x00043cc1) setting_text_pane

0xc8c3,	// (0x00043cc1) setting_volume_pane

0x8ec8,	// (0x000402c6) volume_set_pane

0xb443,	// (0x00042841) bg_set_opt_pane_cp

0x8ed0,	// (0x000402ce) setting_slider_pane_t1

0x8ee9,	// (0x000402e7) setting_slider_pane_t2

0x8f03,	// (0x00040301) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004695c) setting_slider_pane_t

0x8f1b,	// (0x00040319) slider_set_pane

0xb3e7,	// (0x000427e5) bg_set_opt_pane_cp2

0xb451,	// (0x0004284f) setting_slider_graphic_pane_g1

0x8f31,	// (0x0004032f) setting_slider_graphic_pane_t1

0x8f41,	// (0x0004033f) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00046963) setting_slider_graphic_pane_t

0x8f51,	// (0x0004034f) slider_set_pane_cp

0xb3e7,	// (0x000427e5) input_focus_pane_cp1

0x3d21,	// (0x0003b11f) list_set_text_pane

0xb3dd,	// (0x000427db) setting_text_pane_g1

0xb3e7,	// (0x000427e5) input_focus_pane_cp2

0xb3dd,	// (0x000427db) setting_code_pane_g1

0xb45a,	// (0x00042858) setting_code_pane_t1

0xd1f8,	// (0x000445f6) set_text_pane_t1_ParamLimits

0xd1f8,	// (0x000445f6) set_text_pane_t1

0xb84d,	// (0x00042c4b) set_opt_bg_pane_g1

0xb855,	// (0x00042c53) set_opt_bg_pane_g2

0xc77c,	// (0x00043b7a) set_opt_bg_pane_g3

0xb865,	// (0x00042c63) set_opt_bg_pane_g4

0xb86d,	// (0x00042c6b) set_opt_bg_pane_g5

0xb875,	// (0x00042c73) set_opt_bg_pane_g6

0xc786,	// (0x00043b84) set_opt_bg_pane_g7

0xc78e,	// (0x00043b8c) set_opt_bg_pane_g8

0xc798,	// (0x00043b96) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x00046d56) set_opt_bg_pane_g

0xc76f,	// (0x00043b6d) slider_set_pane_g1

0x0c9f,	// (0x0003809d) slider_set_pane_g2

0x0006,

0xf949,	// (0x00046d47) slider_set_pane_g

0xa971,	// (0x00041d6f) volume_set_pane_g1

0xa979,	// (0x00041d77) volume_set_pane_g2

0xa981,	// (0x00041d7f) volume_set_pane_g3

0xa989,	// (0x00041d87) volume_set_pane_g4

0xa991,	// (0x00041d8f) volume_set_pane_g5

0xa999,	// (0x00041d97) volume_set_pane_g6

0xa9a1,	// (0x00041d9f) volume_set_pane_g7

0xa9a9,	// (0x00041da7) volume_set_pane_g8

0xa9b1,	// (0x00041daf) volume_set_pane_g9

0xa9b9,	// (0x00041db7) volume_set_pane_g10

0x0009,

0xf921,	// (0x00046d1f) volume_set_pane_g

0x8f59,	// (0x00040357) indicator_pane_ParamLimits

0x8f59,	// (0x00040357) indicator_pane

0x8f81,	// (0x0004037f) main_idle_pane_g2_ParamLimits

0x8f81,	// (0x0004037f) main_idle_pane_g2

0x8fb9,	// (0x000403b7) main_pane_idle_g1_ParamLimits

0x8fb9,	// (0x000403b7) main_pane_idle_g1

0xb468,	// (0x00042866) popup_clock_digital_analogue_window_ParamLimits

0xb468,	// (0x00042866) popup_clock_digital_analogue_window

0x8fe0,	// (0x000403de) soft_indicator_pane_ParamLimits

0x8fe0,	// (0x000403de) soft_indicator_pane

0x9004,	// (0x00040402) wallpaper_pane_ParamLimits

0x9004,	// (0x00040402) wallpaper_pane

0xb3dd,	// (0x000427db) wallpaper_pane_g1

0x9016,	// (0x00040414) indicator_pane_g1_ParamLimits

0x9016,	// (0x00040414) indicator_pane_g1

0x4125,	// (0x0003b523) navi_navi_icon_text_pane_srt_g1

0xb496,	// (0x00042894) soft_indicator_pane_t1

0xb4b0,	// (0x000428ae) aid_ps_area_pane

0x902c,	// (0x0004042a) aid_ps_clock_pane

0xb4c1,	// (0x000428bf) aid_ps_indicator_pane

0xb4cd,	// (0x000428cb) indicator_ps_pane_ParamLimits

0xb4cd,	// (0x000428cb) indicator_ps_pane

0xb4dc,	// (0x000428da) power_save_pane_g1_ParamLimits

0xb4dc,	// (0x000428da) power_save_pane_g1

0xb4e8,	// (0x000428e6) power_save_pane_g2_ParamLimits

0xb4e8,	// (0x000428e6) power_save_pane_g2

0xee1e,	// (0x0004621c) aid_navinavi_width_pane

0xb4b0,	// (0x000428ae) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00046968) power_save_pane_g_ParamLimits

0xf56a,	// (0x00046968) power_save_pane_g

0xb4f6,	// (0x000428f4) power_save_pane_t1_ParamLimits

0xb4f6,	// (0x000428f4) power_save_pane_t1

0x902c,	// (0x0004042a) aid_ps_clock_pane_ParamLimits

0xb4c1,	// (0x000428bf) aid_ps_indicator_pane_ParamLimits

0xb508,	// (0x00042906) power_save_pane_t4_ParamLimits

0xb508,	// (0x00042906) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004696d) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004696d) power_save_pane_t

0xb532,	// (0x00042930) power_save_t3_ParamLimits

0xb532,	// (0x00042930) power_save_t3

0xb51d,	// (0x0004291b) power_save_t2_ParamLimits

0xb51d,	// (0x0004291b) power_save_t2

0xb547,	// (0x00042945) indicator_ps_pane_g1

0x903a,	// (0x00040438) ai_gene_pane_ParamLimits

0x903a,	// (0x00040438) ai_gene_pane

0x9051,	// (0x0004044f) ai_links_pane_ParamLimits

0x9051,	// (0x0004044f) ai_links_pane

0x9069,	// (0x00040467) indicator_pane_cp1_ParamLimits

0x9069,	// (0x00040467) indicator_pane_cp1

0x9078,	// (0x00040476) main_pane_idle_g1_cp_ParamLimits

0x9078,	// (0x00040476) main_pane_idle_g1_cp

0x9090,	// (0x0004048e) popup_ai_links_title_window

0x9099,	// (0x00040497) soft_indicator_pane_cp1_ParamLimits

0x9099,	// (0x00040497) soft_indicator_pane_cp1

0x3ae8,	// (0x0003aee6) ai_links_pane_g1

0x3af1,	// (0x0003aeef) grid_ai_links_pane

0xc68c,	// (0x00043a8a) ai_gene_pane_1

0x3ad6,	// (0x0003aed4) ai_gene_pane_2

0x3adf,	// (0x0003aedd) list_highlight_pane_cp4

0xc668,	// (0x00043a66) cell_ai_link_pane_ParamLimits

0xc668,	// (0x00043a66) cell_ai_link_pane

0x3aa7,	// (0x0003aea5) cell_ai_link_pane_g1

0xb674,	// (0x00042a72) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x00046cfa) cell_ai_link_pane_g

0xb3e7,	// (0x000427e5) grid_highlight_cp2

0xb3e7,	// (0x000427e5) bg_popup_sub_pane_cp1

0xb55e,	// (0x0004295c) popup_ai_links_title_window_t1

0x39f7,	// (0x0003adf5) ai_gene_pane_1_g1_ParamLimits

0x39f7,	// (0x0003adf5) ai_gene_pane_1_g1

0x3a03,	// (0x0003ae01) ai_gene_pane_1_g2_ParamLimits

0x3a03,	// (0x0003ae01) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x00046cf0) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x00046cf0) ai_gene_pane_1_g

0x3a10,	// (0x0003ae0e) ai_gene_pane_1_t1_ParamLimits

0x3a10,	// (0x0003ae0e) ai_gene_pane_1_t1

0x3a44,	// (0x0003ae42) grid_ai_soft_ind_pane

0x39e2,	// (0x0003ade0) ai_gene_pane_2_t1_ParamLimits

0x39e2,	// (0x0003ade0) ai_gene_pane_2_t1

0x90ad,	// (0x000404ab) main_pane_empty_t1_ParamLimits

0x90ad,	// (0x000404ab) main_pane_empty_t1

0x90c5,	// (0x000404c3) main_pane_empty_t2_ParamLimits

0x90c5,	// (0x000404c3) main_pane_empty_t2

0x90da,	// (0x000404d8) main_pane_empty_t3_ParamLimits

0x90da,	// (0x000404d8) main_pane_empty_t3

0x90ec,	// (0x000404ea) main_pane_empty_t4_ParamLimits

0x90ec,	// (0x000404ea) main_pane_empty_t4

0x90fe,	// (0x000404fc) main_pane_empty_t5_ParamLimits

0x90fe,	// (0x000404fc) main_pane_empty_t5

0x0004,

0xf574,	// (0x00046972) main_pane_empty_t_ParamLimits

0xf574,	// (0x00046972) main_pane_empty_t

0xb89e,	// (0x00042c9c) bg_popup_window_pane_ParamLimits

0xb89e,	// (0x00042c9c) bg_popup_window_pane

0xc5e2,	// (0x000439e0) find_popup_pane_cp2_ParamLimits

0xc5e2,	// (0x000439e0) find_popup_pane_cp2

0x375e,	// (0x0003ab5c) heading_pane_ParamLimits

0x375e,	// (0x0003ab5c) heading_pane

0xb3e7,	// (0x000427e5) bg_popup_sub_pane

0xc563,	// (0x00043961) bg_popup_window_pane_g1_ParamLimits

0xc563,	// (0x00043961) bg_popup_window_pane_g1

0xc572,	// (0x00043970) bg_popup_window_pane_g2_ParamLimits

0xc572,	// (0x00043970) bg_popup_window_pane_g2

0xc57e,	// (0x0004397c) bg_popup_window_pane_g3_ParamLimits

0xc57e,	// (0x0004397c) bg_popup_window_pane_g3

0xc58a,	// (0x00043988) bg_popup_window_pane_g4_ParamLimits

0xc58a,	// (0x00043988) bg_popup_window_pane_g4

0xc599,	// (0x00043997) bg_popup_window_pane_g5_ParamLimits

0xc599,	// (0x00043997) bg_popup_window_pane_g5

0xc5a9,	// (0x000439a7) bg_popup_window_pane_g6_ParamLimits

0xc5a9,	// (0x000439a7) bg_popup_window_pane_g6

0xc5b5,	// (0x000439b3) bg_popup_window_pane_g7_ParamLimits

0xc5b5,	// (0x000439b3) bg_popup_window_pane_g7

0xc5c4,	// (0x000439c2) bg_popup_window_pane_g8_ParamLimits

0xc5c4,	// (0x000439c2) bg_popup_window_pane_g8

0xc5d3,	// (0x000439d1) bg_popup_window_pane_g9_ParamLimits

0xc5d3,	// (0x000439d1) bg_popup_window_pane_g9

0x3738,	// (0x0003ab36) bg_popup_window_pane_g10_ParamLimits

0x3738,	// (0x0003ab36) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x00046cb8) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x00046cb8) bg_popup_window_pane_g

0x3661,	// (0x0003aa5f) bg_popup_heading_pane_ParamLimits

0x3661,	// (0x0003aa5f) bg_popup_heading_pane

0x0e2f,	// (0x0003822d) tabs_4_passive_pane_cp_srt_ParamLimits

0x0e2f,	// (0x0003822d) tabs_4_passive_pane_cp_srt

0x0e41,	// (0x0003823f) tabs_4_passive_pane_srt_ParamLimits

0x3675,	// (0x0003aa73) heading_pane_g2

0x0e41,	// (0x0003823f) tabs_4_passive_pane_srt

0x29ff,	// (0x00039dfd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x29ff,	// (0x00039dfd) bg_passive_tab_pane_cp3_srt

0x367d,	// (0x0003aa7b) heading_pane_t1_ParamLimits

0x367d,	// (0x0003aa7b) heading_pane_t1

0x3694,	// (0x0003aa92) heading_pane_t2_ParamLimits

0x3694,	// (0x0003aa92) heading_pane_t2

0x0001,

0xf8b5,	// (0x00046cb3) heading_pane_t_ParamLimits

0xf8b5,	// (0x00046cb3) heading_pane_t

0x319e,	// (0x0003a59c) bg_popup_heading_pane_g1

0x324d,	// (0x0003a64b) bg_popup_heading_pane_g2

0x3257,	// (0x0003a655) bg_popup_heading_pane_g3

0x3261,	// (0x0003a65f) bg_popup_heading_pane_g4

0x326b,	// (0x0003a669) bg_popup_heading_pane_g5

0x3275,	// (0x0003a673) bg_popup_heading_pane_g6

0x327d,	// (0x0003a67b) bg_popup_heading_pane_g7

0x3285,	// (0x0003a683) bg_popup_heading_pane_g8

0x328f,	// (0x0003a68d) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x00046c6f) bg_popup_heading_pane_g

0x298b,	// (0x00039d89) bg_popup_sub_pane_g1

0x299b,	// (0x00039d99) bg_popup_sub_pane_g2

0x2993,	// (0x00039d91) bg_popup_sub_pane_g3

0x29ab,	// (0x00039da9) bg_popup_sub_pane_g4

0x29a3,	// (0x00039da1) bg_popup_sub_pane_g5

0x29b3,	// (0x00039db1) bg_popup_sub_pane_g6

0x29bb,	// (0x00039db9) bg_popup_sub_pane_g7

0x29cb,	// (0x00039dc9) bg_popup_sub_pane_g8

0x29c3,	// (0x00039dc1) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x00046c49) bg_popup_sub_pane_g

0xb435,	// (0x00042833) bg_popup_window_pane_cp5_ParamLimits

0xb435,	// (0x00042833) bg_popup_window_pane_cp5

0xb57b,	// (0x00042979) popup_note_window_g1_ParamLimits

0xb57b,	// (0x00042979) popup_note_window_g1

0xb587,	// (0x00042985) popup_note_window_t1_ParamLimits

0xb587,	// (0x00042985) popup_note_window_t1

0xb59d,	// (0x0004299b) popup_note_window_t2_ParamLimits

0xb59d,	// (0x0004299b) popup_note_window_t2

0xb5b3,	// (0x000429b1) popup_note_window_t3_ParamLimits

0xb5b3,	// (0x000429b1) popup_note_window_t3

0xb5c9,	// (0x000429c7) popup_note_window_t4_ParamLimits

0xb5c9,	// (0x000429c7) popup_note_window_t4

0xb5f1,	// (0x000429ef) popup_note_window_t5_ParamLimits

0xb5f1,	// (0x000429ef) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004697d) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004697d) popup_note_window_t

0xb615,	// (0x00042a13) bg_popup_window_pane_cp6_ParamLimits

0xb615,	// (0x00042a13) bg_popup_window_pane_cp6

0x311a,	// (0x0003a518) popup_note_image_window_g1_ParamLimits

0x311a,	// (0x0003a518) popup_note_image_window_g1

0xc408,	// (0x00043806) popup_note_image_window_g2_ParamLimits

0xc408,	// (0x00043806) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x00046c3d) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x00046c3d) popup_note_image_window_g

0x313f,	// (0x0003a53d) popup_note_image_window_t1_ParamLimits

0x313f,	// (0x0003a53d) popup_note_image_window_t1

0x3158,	// (0x0003a556) popup_note_image_window_t2_ParamLimits

0x3158,	// (0x0003a556) popup_note_image_window_t2

0x3171,	// (0x0003a56f) popup_note_image_window_t3_ParamLimits

0x3171,	// (0x0003a56f) popup_note_image_window_t3

0x0002,

0xf844,	// (0x00046c42) popup_note_image_window_t_ParamLimits

0xf844,	// (0x00046c42) popup_note_image_window_t

0x2fe3,	// (0x0003a3e1) bg_popup_window_pane_cp7_ParamLimits

0x2fe3,	// (0x0003a3e1) bg_popup_window_pane_cp7

0x3013,	// (0x0003a411) popup_note_wait_window_g1_ParamLimits

0x3013,	// (0x0003a411) popup_note_wait_window_g1

0x301f,	// (0x0003a41d) popup_note_wait_window_g2_ParamLimits

0x301f,	// (0x0003a41d) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x00046c2b) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x00046c2b) popup_note_wait_window_g

0x3037,	// (0x0003a435) popup_note_wait_window_t1_ParamLimits

0x3037,	// (0x0003a435) popup_note_wait_window_t1

0xc3a9,	// (0x000437a7) popup_note_wait_window_t2_ParamLimits

0xc3a9,	// (0x000437a7) popup_note_wait_window_t2

0xc3c6,	// (0x000437c4) popup_note_wait_window_t3_ParamLimits

0xc3c6,	// (0x000437c4) popup_note_wait_window_t3

0xc3d9,	// (0x000437d7) popup_note_wait_window_t4_ParamLimits

0xc3d9,	// (0x000437d7) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x00046c32) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x00046c32) popup_note_wait_window_t

0x30b3,	// (0x0003a4b1) wait_bar_pane_ParamLimits

0x30b3,	// (0x0003a4b1) wait_bar_pane

0xb3e7,	// (0x000427e5) wait_anim_pane

0xb3e7,	// (0x000427e5) wait_border_pane

0xb3dd,	// (0x000427db) wait_anim_pane_g1

0xb3dd,	// (0x000427db) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x00046af2) wait_anim_pane_g

0x2f8f,	// (0x0003a38d) wait_border_pane_g1

0x2f9a,	// (0x0003a398) wait_border_pane_g2

0x2fa3,	// (0x0003a3a1) wait_border_pane_g3

0x0002,

0xf826,	// (0x00046c24) wait_border_pane_g

0x2dfa,	// (0x0003a1f8) bg_popup_window_pane_cp16_ParamLimits

0x2dfa,	// (0x0003a1f8) bg_popup_window_pane_cp16

0xc359,	// (0x00043757) indicator_popup_pane_cp4_ParamLimits

0xc359,	// (0x00043757) indicator_popup_pane_cp4

0x2f0e,	// (0x0003a30c) popup_query_data_window_t1_ParamLimits

0x2f0e,	// (0x0003a30c) popup_query_data_window_t1

0x2f20,	// (0x0003a31e) popup_query_data_window_t2_ParamLimits

0x2f20,	// (0x0003a31e) popup_query_data_window_t2

0x2f39,	// (0x0003a337) popup_query_data_window_t3_ParamLimits

0x2f39,	// (0x0003a337) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x00046c1d) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x00046c1d) popup_query_data_window_t

0xc36d,	// (0x0004376b) query_popup_data_pane_ParamLimits

0xc36d,	// (0x0004376b) query_popup_data_pane

0xc381,	// (0x0004377f) query_popup_data_pane_cp1_ParamLimits

0xc381,	// (0x0004377f) query_popup_data_pane_cp1

0x2dfa,	// (0x0003a1f8) bg_popup_window_pane_cp10_ParamLimits

0x2dfa,	// (0x0003a1f8) bg_popup_window_pane_cp10

0xc2d4,	// (0x000436d2) indicator_popup_pane_ParamLimits

0xc2d4,	// (0x000436d2) indicator_popup_pane

0xc2f6,	// (0x000436f4) popup_query_code_window_t1_ParamLimits

0xc2f6,	// (0x000436f4) popup_query_code_window_t1

0xc310,	// (0x0004370e) popup_query_code_window_t2_ParamLimits

0xc310,	// (0x0004370e) popup_query_code_window_t2

0x2eb1,	// (0x0003a2af) popup_query_code_window_t3_ParamLimits

0x2eb1,	// (0x0003a2af) popup_query_code_window_t3

0x0002,

0xf818,	// (0x00046c16) popup_query_code_window_t_ParamLimits

0xf818,	// (0x00046c16) popup_query_code_window_t

0x2ee0,	// (0x0003a2de) query_popup_pane_ParamLimits

0x2ee0,	// (0x0003a2de) query_popup_pane

0xb615,	// (0x00042a13) bg_popup_window_pane_cp15_ParamLimits

0xb615,	// (0x00042a13) bg_popup_window_pane_cp15

0x9110,	// (0x0004050e) indicator_popup_pane_cp1_ParamLimits

0x9110,	// (0x0004050e) indicator_popup_pane_cp1

0x9123,	// (0x00040521) indicator_popup_pane_cp2_ParamLimits

0x9123,	// (0x00040521) indicator_popup_pane_cp2

0x9136,	// (0x00040534) popup_query_data_code_window_g1_ParamLimits

0x9136,	// (0x00040534) popup_query_data_code_window_g1

0xb633,	// (0x00042a31) popup_query_data_code_window_t1_ParamLimits

0xb633,	// (0x00042a31) popup_query_data_code_window_t1

0xb645,	// (0x00042a43) popup_query_data_code_window_t2_ParamLimits

0xb645,	// (0x00042a43) popup_query_data_code_window_t2

0x9149,	// (0x00040547) popup_query_data_code_window_t3_ParamLimits

0x9149,	// (0x00040547) popup_query_data_code_window_t3

0x915f,	// (0x0004055d) popup_query_data_code_window_t4_ParamLimits

0x915f,	// (0x0004055d) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00046988) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00046988) popup_query_data_code_window_t

0x099d,	// (0x00037d9b) list_single_midp_graphic_pane_g3

0x9177,	// (0x00040575) query_popup_data_pane_cp2_ParamLimits

0x918a,	// (0x00040588) query_popup_pane_cp2_ParamLimits

0x918a,	// (0x00040588) query_popup_pane_cp2

0xb3e7,	// (0x000427e5) bg_popup_window_pane_cp11

0x2df2,	// (0x0003a1f0) heading_pane_cp5

0xb6a1,	// (0x00042a9f) listscroll_popup_info_pane

0xb3e7,	// (0x000427e5) input_focus_pane_cp3

0xb657,	// (0x00042a55) query_popup_pane_t1

0xb665,	// (0x00042a63) list_popup_info_pane_ParamLimits

0xb665,	// (0x00042a63) list_popup_info_pane

0xb674,	// (0x00042a72) listscroll_popup_info_pane_g1

0xb67c,	// (0x00042a7a) scroll_pane_cp7

0x919d,	// (0x0004059b) popup_info_list_pane_t1_ParamLimits

0x919d,	// (0x0004059b) popup_info_list_pane_t1

0x91b7,	// (0x000405b5) popup_info_list_pane_t2_ParamLimits

0x91b7,	// (0x000405b5) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00046991) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00046991) popup_info_list_pane_t

0xb3e7,	// (0x000427e5) bg_popup_window_pane_cp12

0xca80,	// (0x00043e7e) find_popup_pane

0xb443,	// (0x00042841) bg_popup_window_pane_cp3

0xb686,	// (0x00042a84) heading_pane_cp3

0xb692,	// (0x00042a90) listscroll_popup_graphic_pane

0xb3e7,	// (0x000427e5) bg_popup_window_pane_cp4

0x9221,	// (0x0004061f) heading_pane_cp4

0xb6a1,	// (0x00042a9f) listscroll_popup_colour_pane

0x9229,	// (0x00040627) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9229,	// (0x00040627) cell_large_graphic_colour_none_popup_pane

0x923d,	// (0x0004063b) grid_large_graphic_colour_popup_pane_ParamLimits

0x923d,	// (0x0004063b) grid_large_graphic_colour_popup_pane

0x9261,	// (0x0004065f) listscroll_popup_colour_pane_g1_ParamLimits

0x9261,	// (0x0004065f) listscroll_popup_colour_pane_g1

0x9278,	// (0x00040676) listscroll_popup_colour_pane_g2_ParamLimits

0x9278,	// (0x00040676) listscroll_popup_colour_pane_g2

0x928f,	// (0x0004068d) listscroll_popup_colour_pane_g3_ParamLimits

0x928f,	// (0x0004068d) listscroll_popup_colour_pane_g3

0x929f,	// (0x0004069d) listscroll_popup_colour_pane_g4_ParamLimits

0x929f,	// (0x0004069d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00046996) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00046996) listscroll_popup_colour_pane_g

0xb6a9,	// (0x00042aa7) scroll_pane_cp6_ParamLimits

0xb6a9,	// (0x00042aa7) scroll_pane_cp6

0x92af,	// (0x000406ad) cell_large_graphic_colour_popup_pane_ParamLimits

0x92af,	// (0x000406ad) cell_large_graphic_colour_popup_pane

0x92ce,	// (0x000406cc) cell_large_graphic_colour_none_popup_pane_t1

0xb3e7,	// (0x000427e5) grid_highlight_pane_cp5

0xb6bb,	// (0x00042ab9) cell_large_graphic_colour_popup_pane_g1

0xb6c3,	// (0x00042ac1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004699f) cell_large_graphic_colour_popup_pane_g

0xb6cb,	// (0x00042ac9) cell_large_graphic_colour_popup_pane_g2_copy1

0xb6d4,	// (0x00042ad2) grid_highlight_pane_cp4

0xb6dc,	// (0x00042ada) bg_popup_window_pane_cp8_ParamLimits

0xb6dc,	// (0x00042ada) bg_popup_window_pane_cp8

0x92dd,	// (0x000406db) popup_snote_single_text_window_g1_ParamLimits

0x92dd,	// (0x000406db) popup_snote_single_text_window_g1

0x92ef,	// (0x000406ed) popup_snote_single_text_window_t1_ParamLimits

0x92ef,	// (0x000406ed) popup_snote_single_text_window_t1

0x9302,	// (0x00040700) popup_snote_single_text_window_t2_ParamLimits

0x9302,	// (0x00040700) popup_snote_single_text_window_t2

0x9315,	// (0x00040713) popup_snote_single_text_window_t3_ParamLimits

0x9315,	// (0x00040713) popup_snote_single_text_window_t3

0x934e,	// (0x0004074c) popup_snote_single_text_window_t4_ParamLimits

0x934e,	// (0x0004074c) popup_snote_single_text_window_t4

0x9382,	// (0x00040780) popup_snote_single_text_window_t5_ParamLimits

0x9382,	// (0x00040780) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000469a4) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000469a4) popup_snote_single_text_window_t

0xb6f7,	// (0x00042af5) bg_popup_window_pane_cp9_ParamLimits

0xb6f7,	// (0x00042af5) bg_popup_window_pane_cp9

0x92dd,	// (0x000406db) popup_snote_single_graphic_window_g1_ParamLimits

0x92dd,	// (0x000406db) popup_snote_single_graphic_window_g1

0xb705,	// (0x00042b03) popup_snote_single_graphic_window_g2_ParamLimits

0xb705,	// (0x00042b03) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000469af) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000469af) popup_snote_single_graphic_window_g

0xb711,	// (0x00042b0f) popup_snote_single_graphic_window_t1_ParamLimits

0xb711,	// (0x00042b0f) popup_snote_single_graphic_window_t1

0xb724,	// (0x00042b22) popup_snote_single_graphic_window_t2_ParamLimits

0xb724,	// (0x00042b22) popup_snote_single_graphic_window_t2

0x9315,	// (0x00040713) popup_snote_single_graphic_window_t3_ParamLimits

0x9315,	// (0x00040713) popup_snote_single_graphic_window_t3

0x934e,	// (0x0004074c) popup_snote_single_graphic_window_t4_ParamLimits

0x934e,	// (0x0004074c) popup_snote_single_graphic_window_t4

0x93b1,	// (0x000407af) popup_snote_single_graphic_window_t5_ParamLimits

0x93b1,	// (0x000407af) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000469b4) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000469b4) popup_snote_single_graphic_window_t

0x4081,	// (0x0003b47f) grid_graphic_popup_pane_ParamLimits

0x4081,	// (0x0003b47f) grid_graphic_popup_pane

0x40ab,	// (0x0003b4a9) listscroll_popup_graphic_pane_g1_ParamLimits

0x40ab,	// (0x0003b4a9) listscroll_popup_graphic_pane_g1

0xca1e,	// (0x00043e1c) listscroll_popup_graphic_pane_g2_ParamLimits

0xca1e,	// (0x00043e1c) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x00046d93) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x00046d93) listscroll_popup_graphic_pane_g

0x40d3,	// (0x0003b4d1) scroll_pane_cp5

0xc9c3,	// (0x00043dc1) cell_graphic_popup_pane_ParamLimits

0xc9c3,	// (0x00043dc1) cell_graphic_popup_pane

0x4001,	// (0x0003b3ff) cell_graphic_popup_pane_g1

0x4009,	// (0x0003b407) cell_graphic_popup_pane_g2

0xb6cb,	// (0x00042ac9) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x00046d8c) cell_graphic_popup_pane_g

0x4012,	// (0x0003b410) cell_graphic_popup_pane_t2

0xb6d4,	// (0x00042ad2) grid_highlight_pane_cp3

0xb749,	// (0x00042b47) list_gen_pane_ParamLimits

0xb749,	// (0x00042b47) list_gen_pane

0xb771,	// (0x00042b6f) scroll_pane

0xc92d,	// (0x00043d2b) bg_list_pane_g1_ParamLimits

0xc92d,	// (0x00043d2b) bg_list_pane_g1

0xc948,	// (0x00043d46) bg_list_pane_g2_ParamLimits

0xc948,	// (0x00043d46) bg_list_pane_g2

0xc95b,	// (0x00043d59) bg_list_pane_g3_ParamLimits

0xc95b,	// (0x00043d59) bg_list_pane_g3

0xc96d,	// (0x00043d6b) bg_list_pane_g4_ParamLimits

0xc96d,	// (0x00043d6b) bg_list_pane_g4

0xc97f,	// (0x00043d7d) bg_list_pane_g5_ParamLimits

0xc97f,	// (0x00043d7d) bg_list_pane_g5

0x0004,

0xf983,	// (0x00046d81) bg_list_pane_g_ParamLimits

0xf983,	// (0x00046d81) bg_list_pane_g

0xc8f6,	// (0x00043cf4) list_double2_graphic_large_graphic_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_double2_graphic_large_graphic_pane

0xc8f6,	// (0x00043cf4) list_double2_graphic_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_double2_graphic_pane

0xc8f6,	// (0x00043cf4) list_double2_large_graphic_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_double2_large_graphic_pane

0xc8f6,	// (0x00043cf4) list_double2_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_double2_pane

0xc8f6,	// (0x00043cf4) list_double_graphic_heading_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_double_graphic_heading_pane

0xc8f6,	// (0x00043cf4) list_double_graphic_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_double_graphic_pane

0xc8f6,	// (0x00043cf4) list_double_heading_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_double_heading_pane

0xc8f6,	// (0x00043cf4) list_double_large_graphic_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_double_large_graphic_pane

0xc8f6,	// (0x00043cf4) list_double_number_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_double_number_pane

0xc8f6,	// (0x00043cf4) list_double_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_double_pane

0xc8f6,	// (0x00043cf4) list_double_time_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_double_time_pane

0xc8f6,	// (0x00043cf4) list_setting_number_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_setting_number_pane

0xc8f6,	// (0x00043cf4) list_setting_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_setting_pane

0xaa81,	// (0x00041e7f) list_single_2graphic_pane_ParamLimits

0xaa81,	// (0x00041e7f) list_single_2graphic_pane

0xaa81,	// (0x00041e7f) list_single_graphic_heading_pane_ParamLimits

0xaa81,	// (0x00041e7f) list_single_graphic_heading_pane

0xaa81,	// (0x00041e7f) list_single_graphic_pane_ParamLimits

0xaa81,	// (0x00041e7f) list_single_graphic_pane

0xaa81,	// (0x00041e7f) list_single_heading_pane_ParamLimits

0xaa81,	// (0x00041e7f) list_single_heading_pane

0xc8f6,	// (0x00043cf4) list_single_large_graphic_pane_ParamLimits

0xc8f6,	// (0x00043cf4) list_single_large_graphic_pane

0xaa81,	// (0x00041e7f) list_single_number_heading_pane_ParamLimits

0xaa81,	// (0x00041e7f) list_single_number_heading_pane

0xaa81,	// (0x00041e7f) list_single_number_pane_ParamLimits

0xaa81,	// (0x00041e7f) list_single_number_pane

0xaa81,	// (0x00041e7f) list_single_pane_ParamLimits

0xaa81,	// (0x00041e7f) list_single_pane

0xb3e7,	// (0x000427e5) list_highlight_pane_cp1

0xd21f,	// (0x0004461d) list_single_pane_g1_ParamLimits

0xd21f,	// (0x0004461d) list_single_pane_g1

0xd22b,	// (0x00044629) list_single_pane_g2_ParamLimits

0xd22b,	// (0x00044629) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000469c6) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000469c6) list_single_pane_g

0xaa6b,	// (0x00041e69) list_single_pane_t1_ParamLimits

0xaa6b,	// (0x00041e69) list_single_pane_t1

0xd21f,	// (0x0004461d) list_single_number_pane_g1_ParamLimits

0xd21f,	// (0x0004461d) list_single_number_pane_g1

0xd22b,	// (0x00044629) list_single_number_pane_g2_ParamLimits

0xd22b,	// (0x00044629) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000469c6) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000469c6) list_single_number_pane_g

0xd237,	// (0x00044635) list_single_number_pane_t1_ParamLimits

0xd237,	// (0x00044635) list_single_number_pane_t1

0xa9c1,	// (0x00041dbf) list_single_number_pane_t2_ParamLimits

0xa9c1,	// (0x00041dbf) list_single_number_pane_t2

0x0001,

0xf944,	// (0x00046d42) list_single_number_pane_t_ParamLimits

0xf944,	// (0x00046d42) list_single_number_pane_t

0xd213,	// (0x00044611) list_single_graphic_pane_g1_ParamLimits

0xd213,	// (0x00044611) list_single_graphic_pane_g1

0xd21f,	// (0x0004461d) list_single_graphic_pane_g2_ParamLimits

0xd21f,	// (0x0004461d) list_single_graphic_pane_g2

0xd22b,	// (0x00044629) list_single_graphic_pane_g3_ParamLimits

0xd22b,	// (0x00044629) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000469bf) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000469bf) list_single_graphic_pane_g

0xd237,	// (0x00044635) list_single_graphic_pane_t1_ParamLimits

0xd237,	// (0x00044635) list_single_graphic_pane_t1

0xd21f,	// (0x0004461d) list_single_heading_pane_g1_ParamLimits

0xd21f,	// (0x0004461d) list_single_heading_pane_g1

0xd22b,	// (0x00044629) list_single_heading_pane_g2_ParamLimits

0xd22b,	// (0x00044629) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000469c6) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000469c6) list_single_heading_pane_g

0xd24d,	// (0x0004464b) list_single_heading_pane_t1_ParamLimits

0xd24d,	// (0x0004464b) list_single_heading_pane_t1

0xd263,	// (0x00044661) list_single_heading_pane_t2_ParamLimits

0xd263,	// (0x00044661) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000469cb) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000469cb) list_single_heading_pane_t

0xd21f,	// (0x0004461d) list_single_number_heading_pane_g1_ParamLimits

0xd21f,	// (0x0004461d) list_single_number_heading_pane_g1

0xd22b,	// (0x00044629) list_single_number_heading_pane_g2_ParamLimits

0xd22b,	// (0x00044629) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000469c6) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000469c6) list_single_number_heading_pane_g

0xd24d,	// (0x0004464b) list_single_number_heading_pane_t1_ParamLimits

0xd24d,	// (0x0004464b) list_single_number_heading_pane_t1

0xd275,	// (0x00044673) list_single_number_heading_pane_t2_ParamLimits

0xd275,	// (0x00044673) list_single_number_heading_pane_t2

0xd287,	// (0x00044685) list_single_number_heading_pane_t3_ParamLimits

0xd287,	// (0x00044685) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000469d0) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000469d0) list_single_number_heading_pane_t

0xd299,	// (0x00044697) list_single_graphic_heading_pane_g1_ParamLimits

0xd299,	// (0x00044697) list_single_graphic_heading_pane_g1

0x93ea,	// (0x000407e8) list_single_graphic_heading_pane_g4_ParamLimits

0x93ea,	// (0x000407e8) list_single_graphic_heading_pane_g4

0xd22b,	// (0x00044629) list_single_graphic_heading_pane_g5_ParamLimits

0xd22b,	// (0x00044629) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000469d7) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000469d7) list_single_graphic_heading_pane_g

0xd24d,	// (0x0004464b) list_single_graphic_heading_pane_t1_ParamLimits

0xd24d,	// (0x0004464b) list_single_graphic_heading_pane_t1

0x93fb,	// (0x000407f9) list_single_graphic_heading_pane_t2_ParamLimits

0x93fb,	// (0x000407f9) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x000469de) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x000469de) list_single_graphic_heading_pane_t

0xd2a5,	// (0x000446a3) list_single_large_graphic_pane_g1_ParamLimits

0xd2a5,	// (0x000446a3) list_single_large_graphic_pane_g1

0xd2b1,	// (0x000446af) list_single_large_graphic_pane_g2_ParamLimits

0xd2b1,	// (0x000446af) list_single_large_graphic_pane_g2

0xd2bd,	// (0x000446bb) list_single_large_graphic_pane_g3_ParamLimits

0xd2bd,	// (0x000446bb) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x000469e3) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000469e3) list_single_large_graphic_pane_g

0x2f9a,	// (0x0003a398) wait_border_pane_g2_copy1

0x940d,	// (0x0004080b) list_single_large_graphic_pane_g4_cp2

0xd2c9,	// (0x000446c7) list_single_large_graphic_pane_t1_ParamLimits

0xd2c9,	// (0x000446c7) list_single_large_graphic_pane_t1

0x9415,	// (0x00040813) list_double_pane_g1_ParamLimits

0x9415,	// (0x00040813) list_double_pane_g1

0xd2df,	// (0x000446dd) list_double_pane_g2_ParamLimits

0xd2df,	// (0x000446dd) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000469ea) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000469ea) list_double_pane_g

0x9421,	// (0x0004081f) list_double_pane_t1_ParamLimits

0x9421,	// (0x0004081f) list_double_pane_t1

0x9437,	// (0x00040835) list_double_pane_t2_ParamLimits

0x9437,	// (0x00040835) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000469ef) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000469ef) list_double_pane_t

0x9449,	// (0x00040847) list_double2_pane_g1_ParamLimits

0x9449,	// (0x00040847) list_double2_pane_g1

0xd2df,	// (0x000446dd) list_double2_pane_g2_ParamLimits

0xd2df,	// (0x000446dd) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000469f4) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000469f4) list_double2_pane_g

0x9421,	// (0x0004081f) list_double2_pane_t1_ParamLimits

0x9421,	// (0x0004081f) list_double2_pane_t1

0x945a,	// (0x00040858) list_double2_pane_t2_ParamLimits

0x945a,	// (0x00040858) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000469f9) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000469f9) list_double2_pane_t

0x9415,	// (0x00040813) list_double_number_pane_g1_ParamLimits

0x9415,	// (0x00040813) list_double_number_pane_g1

0xd2df,	// (0x000446dd) list_double_number_pane_g2_ParamLimits

0xd2df,	// (0x000446dd) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000469ea) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000469ea) list_double_number_pane_g

0x946c,	// (0x0004086a) list_double_number_pane_t1_ParamLimits

0x946c,	// (0x0004086a) list_double_number_pane_t1

0x947e,	// (0x0004087c) list_double_number_pane_t2_ParamLimits

0x947e,	// (0x0004087c) list_double_number_pane_t2

0x9494,	// (0x00040892) list_double_number_pane_t3_ParamLimits

0x9494,	// (0x00040892) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000469fe) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000469fe) list_double_number_pane_t

0x94a6,	// (0x000408a4) list_double_graphic_pane_g1_ParamLimits

0x94a6,	// (0x000408a4) list_double_graphic_pane_g1

0x94b2,	// (0x000408b0) list_double_graphic_pane_g2_ParamLimits

0x94b2,	// (0x000408b0) list_double_graphic_pane_g2

0x94c1,	// (0x000408bf) list_double_graphic_pane_g3_ParamLimits

0x94c1,	// (0x000408bf) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00046a05) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00046a05) list_double_graphic_pane_g

0x947e,	// (0x0004087c) list_double_graphic_pane_t1_ParamLimits

0x947e,	// (0x0004087c) list_double_graphic_pane_t1

0x9494,	// (0x00040892) list_double_graphic_pane_t2_ParamLimits

0x9494,	// (0x00040892) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00046a0e) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00046a0e) list_double_graphic_pane_t

0x94a6,	// (0x000408a4) list_double2_graphic_pane_g1_ParamLimits

0x94a6,	// (0x000408a4) list_double2_graphic_pane_g1

0x94d9,	// (0x000408d7) list_double2_graphic_pane_g2_ParamLimits

0x94d9,	// (0x000408d7) list_double2_graphic_pane_g2

0x94e5,	// (0x000408e3) list_double2_graphic_pane_g3_ParamLimits

0x94e5,	// (0x000408e3) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00046a13) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00046a13) list_double2_graphic_pane_g

0x947e,	// (0x0004087c) list_double2_graphic_pane_t1_ParamLimits

0x947e,	// (0x0004087c) list_double2_graphic_pane_t1

0x94f1,	// (0x000408ef) list_double2_graphic_pane_t2_ParamLimits

0x94f1,	// (0x000408ef) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00046a1a) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00046a1a) list_double2_graphic_pane_t

0x9503,	// (0x00040901) list_double_large_graphic_pane_g1_ParamLimits

0x9503,	// (0x00040901) list_double_large_graphic_pane_g1

0x9449,	// (0x00040847) list_double_large_graphic_pane_g2_ParamLimits

0x9449,	// (0x00040847) list_double_large_graphic_pane_g2

0xd2df,	// (0x000446dd) list_double_large_graphic_pane_g3_ParamLimits

0xd2df,	// (0x000446dd) list_double_large_graphic_pane_g3

0x9522,	// (0x00040920) list_double_large_graphic_pane_g4_ParamLimits

0x9522,	// (0x00040920) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00046a1f) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00046a1f) list_double_large_graphic_pane_g

0x9535,	// (0x00040933) list_double_large_graphic_pane_t1_ParamLimits

0x9535,	// (0x00040933) list_double_large_graphic_pane_t1

0x954e,	// (0x0004094c) list_double_large_graphic_pane_t2_ParamLimits

0x954e,	// (0x0004094c) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00046a2a) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00046a2a) list_double_large_graphic_pane_t

0x9560,	// (0x0004095e) list_double2_large_graphic_pane_g1_ParamLimits

0x9560,	// (0x0004095e) list_double2_large_graphic_pane_g1

0x9449,	// (0x00040847) list_double2_large_graphic_pane_g2_ParamLimits

0x9449,	// (0x00040847) list_double2_large_graphic_pane_g2

0xd2df,	// (0x000446dd) list_double2_large_graphic_pane_g3_ParamLimits

0xd2df,	// (0x000446dd) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00046a2f) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00046a2f) list_double2_large_graphic_pane_g

0x947e,	// (0x0004087c) list_double2_large_graphic_pane_t1_ParamLimits

0x947e,	// (0x0004087c) list_double2_large_graphic_pane_t1

0x94f1,	// (0x000408ef) list_double2_large_graphic_pane_t2_ParamLimits

0x94f1,	// (0x000408ef) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x00046a1a) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x00046a1a) list_double2_large_graphic_pane_t

0x956c,	// (0x0004096a) list_double_heading_pane_g1_ParamLimits

0x956c,	// (0x0004096a) list_double_heading_pane_g1

0x957d,	// (0x0004097b) list_double_heading_pane_g2_ParamLimits

0x957d,	// (0x0004097b) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x00046a36) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x00046a36) list_double_heading_pane_g

0x9589,	// (0x00040987) list_double_heading_pane_t1_ParamLimits

0x9589,	// (0x00040987) list_double_heading_pane_t1

0x94f1,	// (0x000408ef) list_double_heading_pane_t2_ParamLimits

0x94f1,	// (0x000408ef) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x00046a3b) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x00046a3b) list_double_heading_pane_t

0x959f,	// (0x0004099d) list_double_graphic_heading_pane_g1_ParamLimits

0x959f,	// (0x0004099d) list_double_graphic_heading_pane_g1

0x956c,	// (0x0004096a) list_double_graphic_heading_pane_g2_ParamLimits

0x956c,	// (0x0004096a) list_double_graphic_heading_pane_g2

0x957d,	// (0x0004097b) list_double_graphic_heading_pane_g3_ParamLimits

0x957d,	// (0x0004097b) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x00046a40) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x00046a40) list_double_graphic_heading_pane_g

0x9589,	// (0x00040987) list_double_graphic_heading_pane_t1_ParamLimits

0x9589,	// (0x00040987) list_double_graphic_heading_pane_t1

0x94f1,	// (0x000408ef) list_double_graphic_heading_pane_t2_ParamLimits

0x94f1,	// (0x000408ef) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x00046a3b) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x00046a3b) list_double_graphic_heading_pane_t

0x9449,	// (0x00040847) list_double_time_pane_g1_ParamLimits

0x9449,	// (0x00040847) list_double_time_pane_g1

0xd2df,	// (0x000446dd) list_double_time_pane_g2_ParamLimits

0xd2df,	// (0x000446dd) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x000469f4) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x000469f4) list_double_time_pane_g

0x95ab,	// (0x000409a9) list_double_time_pane_t1_ParamLimits

0x95ab,	// (0x000409a9) list_double_time_pane_t1

0x95c1,	// (0x000409bf) list_double_time_pane_t2_ParamLimits

0x95c1,	// (0x000409bf) list_double_time_pane_t2

0x95d3,	// (0x000409d1) list_double_time_pane_t3_ParamLimits

0x95d3,	// (0x000409d1) list_double_time_pane_t3

0x95e5,	// (0x000409e3) list_double_time_pane_t4_ParamLimits

0x95e5,	// (0x000409e3) list_double_time_pane_t4

0x0003,

0xf649,	// (0x00046a47) list_double_time_pane_t_ParamLimits

0xf649,	// (0x00046a47) list_double_time_pane_t

0x95f7,	// (0x000409f5) list_setting_pane_g1_ParamLimits

0x95f7,	// (0x000409f5) list_setting_pane_g1

0x9603,	// (0x00040a01) list_setting_pane_g2_ParamLimits

0x9603,	// (0x00040a01) list_setting_pane_g2

0x0001,

0xf652,	// (0x00046a50) list_setting_pane_g_ParamLimits

0xf652,	// (0x00046a50) list_setting_pane_g

0x960f,	// (0x00040a0d) list_setting_pane_t1_ParamLimits

0x960f,	// (0x00040a0d) list_setting_pane_t1

0x9629,	// (0x00040a27) list_setting_pane_t2_ParamLimits

0x9629,	// (0x00040a27) list_setting_pane_t2

0x0002,

0xf657,	// (0x00046a55) list_setting_pane_t_ParamLimits

0xf657,	// (0x00046a55) list_setting_pane_t

0x9668,	// (0x00040a66) set_value_pane_cp_ParamLimits

0x9668,	// (0x00040a66) set_value_pane_cp

0x9674,	// (0x00040a72) list_setting_number_pane_g1_ParamLimits

0x9674,	// (0x00040a72) list_setting_number_pane_g1

0x9680,	// (0x00040a7e) list_setting_number_pane_g2_ParamLimits

0x9680,	// (0x00040a7e) list_setting_number_pane_g2

0x0001,

0xf65e,	// (0x00046a5c) list_setting_number_pane_g_ParamLimits

0xf65e,	// (0x00046a5c) list_setting_number_pane_g

0x968c,	// (0x00040a8a) list_setting_number_pane_t1_ParamLimits

0x968c,	// (0x00040a8a) list_setting_number_pane_t1

0x96a5,	// (0x00040aa3) list_setting_number_pane_t2_ParamLimits

0x96a5,	// (0x00040aa3) list_setting_number_pane_t2

0x96bf,	// (0x00040abd) list_setting_number_pane_t3_ParamLimits

0x96bf,	// (0x00040abd) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x00046a61) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x00046a61) list_setting_number_pane_t

0x9668,	// (0x00040a66) set_value_pane_ParamLimits

0x9668,	// (0x00040a66) set_value_pane

0xb7a5,	// (0x00042ba3) bg_set_opt_pane_ParamLimits

0xb7a5,	// (0x00042ba3) bg_set_opt_pane

0x9702,	// (0x00040b00) set_value_pane_t1

0xb7c6,	// (0x00042bc4) slider_set_pane_cp3

0x9710,	// (0x00040b0e) volume_small_pane_cp

0xb7cf,	// (0x00042bcd) list_form_gen_pane

0xb7d8,	// (0x00042bd6) scroll_pane_cp8

0x9719,	// (0x00040b17) form_field_data_pane_ParamLimits

0x9719,	// (0x00040b17) form_field_data_pane

0x9730,	// (0x00040b2e) form_field_data_wide_pane_ParamLimits

0x9730,	// (0x00040b2e) form_field_data_wide_pane

0x9750,	// (0x00040b4e) form_field_popup_pane_ParamLimits

0x9750,	// (0x00040b4e) form_field_popup_pane

0x9768,	// (0x00040b66) form_field_popup_wide_pane_ParamLimits

0x9768,	// (0x00040b66) form_field_popup_wide_pane

0xd310,	// (0x0004470e) form_field_slider_pane_ParamLimits

0xd310,	// (0x0004470e) form_field_slider_pane

0x977f,	// (0x00040b7d) form_field_slider_wide_pane_ParamLimits

0x977f,	// (0x00040b7d) form_field_slider_wide_pane

0xb7e9,	// (0x00042be7) data_form_pane

0x979c,	// (0x00040b9a) form_field_data_pane_t1

0xb7f5,	// (0x00042bf3) input_focus_pane

0x97b6,	// (0x00040bb4) data_form_wide_pane

0x97d3,	// (0x00040bd1) form_field_data_wide_pane_t1

0xb6e9,	// (0x00042ae7) input_focus_pane_cp6

0x97f5,	// (0x00040bf3) form_field_popup_pane_t1

0xb7f5,	// (0x00042bf3) input_focus_pane_cp7

0xb823,	// (0x00042c21) list_form_pane

0x9817,	// (0x00040c15) form_field_popup_wide_pane_t1

0xb7f5,	// (0x00042bf3) input_focus_pane_cp8

0xb82f,	// (0x00042c2d) list_form_wide_pane

0x9834,	// (0x00040c32) form_field_slider_pane_t1_ParamLimits

0x9834,	// (0x00040c32) form_field_slider_pane_t1

0x984c,	// (0x00040c4a) form_field_slider_pane_t2_ParamLimits

0x984c,	// (0x00040c4a) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x00046a71) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x00046a71) form_field_slider_pane_t

0xb435,	// (0x00042833) input_focus_pane_cp9_ParamLimits

0xb435,	// (0x00042833) input_focus_pane_cp9

0x9861,	// (0x00040c5f) slider_cont_pane_ParamLimits

0x9861,	// (0x00040c5f) slider_cont_pane

0xb83b,	// (0x00042c39) form_field_slider_wide_pane_t1_ParamLimits

0xb83b,	// (0x00042c39) form_field_slider_wide_pane_t1

0x9875,	// (0x00040c73) form_field_slider_wide_pane_t2_ParamLimits

0x9875,	// (0x00040c73) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x00046a76) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x00046a76) form_field_slider_wide_pane_t

0xb435,	// (0x00042833) input_focus_pane_cp10_ParamLimits

0xb435,	// (0x00042833) input_focus_pane_cp10

0x9887,	// (0x00040c85) slider_cont_pane_cp1_ParamLimits

0x9887,	// (0x00040c85) slider_cont_pane_cp1

0x989b,	// (0x00040c99) slider_form_pane_cp

0xb84d,	// (0x00042c4b) input_focus_pane_g1

0xb855,	// (0x00042c53) input_focus_pane_g2

0xb85d,	// (0x00042c5b) input_focus_pane_g3

0xb865,	// (0x00042c63) input_focus_pane_g4

0xb86d,	// (0x00042c6b) input_focus_pane_g5

0xb875,	// (0x00042c73) input_focus_pane_g6

0xb87d,	// (0x00042c7b) input_focus_pane_g7

0xb885,	// (0x00042c83) input_focus_pane_g8

0xb88d,	// (0x00042c8b) input_focus_pane_g9

0xb3dd,	// (0x000427db) input_focus_pane_g10

0x0009,

0xf67d,	// (0x00046a7b) input_focus_pane_g

0x2fa3,	// (0x0003a3a1) wait_border_pane_g3_copy1

0x98a3,	// (0x00040ca1) data_form_pane_t1

0xb3dd,	// (0x000427db) wait_anim_pane_g1_copy1

0xaa3f,	// (0x00041e3d) data_form_wide_pane_t1

0x98bd,	// (0x00040cbb) list_form_graphic_pane_cp_ParamLimits

0x98bd,	// (0x00040cbb) list_form_graphic_pane_cp

0x3e92,	// (0x0003b290) slider_form_pane_g1

0x3e9b,	// (0x0003b299) slider_form_pane_g2

0x0006,

0xf974,	// (0x00046d72) slider_form_pane_g

0x98cf,	// (0x00040ccd) list_form_graphic_pane_ParamLimits

0x98cf,	// (0x00040ccd) list_form_graphic_pane

0x98e2,	// (0x00040ce0) list_form_graphic_pane_g1

0x98ea,	// (0x00040ce8) list_form_graphic_pane_t1_ParamLimits

0x98ea,	// (0x00040ce8) list_form_graphic_pane_t1

0xb443,	// (0x00042841) list_highlight_pane_cp5_ParamLimits

0xb443,	// (0x00042841) list_highlight_pane_cp5

0xd323,	// (0x00044721) find_pane_g1

0xb895,	// (0x00042c93) input_find_pane

0x98ff,	// (0x00040cfd) input_find_pane_g1_ParamLimits

0x98ff,	// (0x00040cfd) input_find_pane_g1

0x990b,	// (0x00040d09) input_find_pane_t1_ParamLimits

0x990b,	// (0x00040d09) input_find_pane_t1

0x9920,	// (0x00040d1e) input_find_pane_t2_ParamLimits

0x9920,	// (0x00040d1e) input_find_pane_t2

0x0001,

0xf692,	// (0x00046a90) input_find_pane_t_ParamLimits

0xf692,	// (0x00046a90) input_find_pane_t

0xb89e,	// (0x00042c9c) input_focus_pane_cp5_ParamLimits

0xb89e,	// (0x00042c9c) input_focus_pane_cp5

0xb8ac,	// (0x00042caa) bg_popup_window_pane_cp2_ParamLimits

0xb8ac,	// (0x00042caa) bg_popup_window_pane_cp2

0xb8b9,	// (0x00042cb7) listscroll_menu_pane_ParamLimits

0xb8b9,	// (0x00042cb7) listscroll_menu_pane

0x9941,	// (0x00040d3f) popup_submenu_window_ParamLimits

0x9941,	// (0x00040d3f) popup_submenu_window

0xb8c5,	// (0x00042cc3) find_popup_pane_g1

0x9969,	// (0x00040d67) input_popup_find_pane_cp

0xb89e,	// (0x00042c9c) input_focus_pane_cp4_ParamLimits

0xb89e,	// (0x00042c9c) input_focus_pane_cp4

0xb8cd,	// (0x00042ccb) input_popup_find_pane_t1_ParamLimits

0xb8cd,	// (0x00042ccb) input_popup_find_pane_t1

0xb3e7,	// (0x000427e5) bg_popup_sub_pane_cp

0xb8fb,	// (0x00042cf9) listscroll_popup_sub_pane

0xb903,	// (0x00042d01) list_submenu_pane_ParamLimits

0xb903,	// (0x00042d01) list_submenu_pane

0xb914,	// (0x00042d12) scroll_pane_cp4

0x9981,	// (0x00040d7f) list_single_popup_submenu_pane_ParamLimits

0x9981,	// (0x00040d7f) list_single_popup_submenu_pane

0x9995,	// (0x00040d93) list_single_popup_submenu_pane_g1

0x999d,	// (0x00040d9b) list_single_popup_submenu_pane_t1_ParamLimits

0x999d,	// (0x00040d9b) list_single_popup_submenu_pane_t1

0xb435,	// (0x00042833) bg_active_tab_pane_cp1_ParamLimits

0xb435,	// (0x00042833) bg_active_tab_pane_cp1

0xb91c,	// (0x00042d1a) tabs_2_active_pane_g1

0x99b2,	// (0x00040db0) tabs_2_active_pane_t1

0xb435,	// (0x00042833) bg_passive_tab_pane_cp1_ParamLimits

0xb435,	// (0x00042833) bg_passive_tab_pane_cp1

0xb91c,	// (0x00042d1a) tabs_2_passive_pane_g1

0x99b2,	// (0x00040db0) tabs_2_passive_pane_t1

0xb443,	// (0x00042841) bg_active_tab_pane_cp4

0x99c4,	// (0x00040dc2) tabs_2_long_active_pane_t1

0x247e,	// (0x0003987c) bg_passive_tab_pane_cp4

0x09a5,	// (0x00037da3) list_single_midp_graphic_pane_g4_ParamLimits

0xb443,	// (0x00042841) bg_active_tab_pane_cp5

0x99d7,	// (0x00040dd5) tabs_3_long_active_pane_t1

0x247e,	// (0x0003987c) bg_passive_tab_pane_cp5

0x09a5,	// (0x00037da3) list_single_midp_graphic_pane_g4

0xb443,	// (0x00042841) bg_popup_window_pane_cp13_ParamLimits

0xb443,	// (0x00042841) bg_popup_window_pane_cp13

0xb924,	// (0x00042d22) listscroll_popup_fast_pane_ParamLimits

0xb924,	// (0x00042d22) listscroll_popup_fast_pane

0xb930,	// (0x00042d2e) grid_popup_fast_pane_ParamLimits

0xb930,	// (0x00042d2e) grid_popup_fast_pane

0xb942,	// (0x00042d40) scroll_pane_cp9_ParamLimits

0xb942,	// (0x00042d40) scroll_pane_cp9

0x5796,	// (0x0003cb94) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5796,	// (0x0003cb94) list_single_graphic_hl_pane_t1_cp2

0xb955,	// (0x00042d53) input_focus_pane_cp20_ParamLimits

0xb955,	// (0x00042d53) input_focus_pane_cp20

0xb963,	// (0x00042d61) query_popup_data_pane_t1_ParamLimits

0xb963,	// (0x00042d61) query_popup_data_pane_t1

0xb976,	// (0x00042d74) query_popup_data_pane_t2_ParamLimits

0xb976,	// (0x00042d74) query_popup_data_pane_t2

0xb9bc,	// (0x00042dba) query_popup_data_pane_t3_ParamLimits

0xb9bc,	// (0x00042dba) query_popup_data_pane_t3

0xb9fd,	// (0x00042dfb) query_popup_data_pane_t4_ParamLimits

0xb9fd,	// (0x00042dfb) query_popup_data_pane_t4

0xba39,	// (0x00042e37) query_popup_data_pane_t5_ParamLimits

0xba39,	// (0x00042e37) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x00046a95) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x00046a95) query_popup_data_pane_t

0xb84d,	// (0x00042c4b) bg_set_opt_pane_g1

0xb855,	// (0x00042c53) bg_set_opt_pane_g2

0xb85d,	// (0x00042c5b) bg_set_opt_pane_g3

0xb865,	// (0x00042c63) bg_set_opt_pane_g4

0xb86d,	// (0x00042c6b) bg_set_opt_pane_g5

0xb875,	// (0x00042c73) bg_set_opt_pane_g6

0xb87d,	// (0x00042c7b) bg_set_opt_pane_g7

0xb885,	// (0x00042c83) bg_set_opt_pane_g8

0xb88d,	// (0x00042c8b) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x00046aa0) bg_set_opt_pane_g

0xf360,	// (0x0004675e) control_top_pane_stacon_ParamLimits

0xf360,	// (0x0004675e) control_top_pane_stacon

0xf3b3,	// (0x000467b1) signal_pane_stacon_ParamLimits

0xf3b3,	// (0x000467b1) signal_pane_stacon

0xf3d8,	// (0x000467d6) stacon_top_pane_g1_ParamLimits

0xf3d8,	// (0x000467d6) stacon_top_pane_g1

0xf3fa,	// (0x000467f8) title_pane_stacon_ParamLimits

0xf3fa,	// (0x000467f8) title_pane_stacon

0xf424,	// (0x00046822) uni_indicator_pane_stacon_ParamLimits

0xf424,	// (0x00046822) uni_indicator_pane_stacon

0xf439,	// (0x00046837) battery_pane_stacon_ParamLimits

0xf439,	// (0x00046837) battery_pane_stacon

0xf47d,	// (0x0004687b) control_bottom_pane_stacon_ParamLimits

0xf47d,	// (0x0004687b) control_bottom_pane_stacon

0xf4a0,	// (0x0004689e) navi_pane_stacon_ParamLimits

0xf4a0,	// (0x0004689e) navi_pane_stacon

0xf4c3,	// (0x000468c1) stacon_bottom_pane_g1_ParamLimits

0xf4c3,	// (0x000468c1) stacon_bottom_pane_g1

0xefb7,	// (0x000463b5) aid_levels_signal_lsc_ParamLimits

0xefb7,	// (0x000463b5) aid_levels_signal_lsc

0xefcd,	// (0x000463cb) signal_pane_stacon_g1_ParamLimits

0xefcd,	// (0x000463cb) signal_pane_stacon_g1

0xefe1,	// (0x000463df) signal_pane_stacon_g2_ParamLimits

0xefe1,	// (0x000463df) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x00046ab3) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x00046ab3) signal_pane_stacon_g

0xf016,	// (0x00046414) title_pane_stacon_t1_ParamLimits

0xf016,	// (0x00046414) title_pane_stacon_t1

0xba7d,	// (0x00042e7b) uni_indicator_pane_stacon_g1

0xba87,	// (0x00042e85) uni_indicator_pane_stacon_g2

0xba91,	// (0x00042e8f) uni_indicator_pane_stacon_g3

0xba9b,	// (0x00042e99) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x00046abf) uni_indicator_pane_stacon_g

0xf03b,	// (0x00046439) control_top_pane_stacon_g1

0xf043,	// (0x00046441) control_top_pane_stacon_t1_ParamLimits

0xf043,	// (0x00046441) control_top_pane_stacon_t1

0xf07a,	// (0x00046478) aid_levels_battery_lsc_ParamLimits

0xf07a,	// (0x00046478) aid_levels_battery_lsc

0xf091,	// (0x0004648f) battery_pane_stacon_g1_ParamLimits

0xf091,	// (0x0004648f) battery_pane_stacon_g1

0xf0a4,	// (0x000464a2) battery_pane_stacon_g2_ParamLimits

0xf0a4,	// (0x000464a2) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00046ac8) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00046ac8) battery_pane_stacon_g

0xf0e2,	// (0x000464e0) navi_icon_pane_stacon

0xf0f6,	// (0x000464f4) navi_navi_pane_stacon

0xf0e2,	// (0x000464e0) navi_text_pane_stacon

0xf03b,	// (0x00046439) control_bottom_pane_stacon_g1

0xf10a,	// (0x00046508) control_bottom_pane_stacon_t1_ParamLimits

0xf10a,	// (0x00046508) control_bottom_pane_stacon_t1

0x9a03,	// (0x00040e01) grid_app_pane_ParamLimits

0x9a03,	// (0x00040e01) grid_app_pane

0x9a3b,	// (0x00040e39) scroll_pane_cp15_ParamLimits

0x9a3b,	// (0x00040e39) scroll_pane_cp15

0x9a50,	// (0x00040e4e) cell_app_pane_ParamLimits

0x9a50,	// (0x00040e4e) cell_app_pane

0x9a95,	// (0x00040e93) cell_app_pane_g1_ParamLimits

0x9a95,	// (0x00040e93) cell_app_pane_g1

0xbabf,	// (0x00042ebd) cell_app_pane_g2_ParamLimits

0xbabf,	// (0x00042ebd) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x00046acd) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x00046acd) cell_app_pane_g

0x9ab9,	// (0x00040eb7) cell_app_pane_t1_ParamLimits

0x9ab9,	// (0x00040eb7) cell_app_pane_t1

0xbacb,	// (0x00042ec9) grid_highlight_pane_ParamLimits

0xbacb,	// (0x00042ec9) grid_highlight_pane

0xb84d,	// (0x00042c4b) cell_highlight_pane_g1

0xb855,	// (0x00042c53) cell_highlight_pane_g2

0xb85d,	// (0x00042c5b) cell_highlight_pane_g3

0xb865,	// (0x00042c63) cell_highlight_pane_g4

0xb86d,	// (0x00042c6b) cell_highlight_pane_g5

0xb875,	// (0x00042c73) cell_highlight_pane_g6

0xb87d,	// (0x00042c7b) cell_highlight_pane_g7

0xb885,	// (0x00042c83) cell_highlight_pane_g8

0xb88d,	// (0x00042c8b) cell_highlight_pane_g9

0xb3dd,	// (0x000427db) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x00046a7b) cell_highlight_pane_g

0xbadc,	// (0x00042eda) bg_scroll_pane

0x9ad9,	// (0x00040ed7) scroll_handle_pane

0xbb23,	// (0x00042f21) scroll_bg_pane_g1

0xbb38,	// (0x00042f36) scroll_bg_pane_g2

0xbb50,	// (0x00042f4e) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x00046ad2) scroll_bg_pane_g

0x9aed,	// (0x00040eeb) scroll_handle_focus_pane_ParamLimits

0x9aed,	// (0x00040eeb) scroll_handle_focus_pane

0xbb23,	// (0x00042f21) scroll_handle_pane_g1

0xbb65,	// (0x00042f63) scroll_handle_pane_g2

0xbb50,	// (0x00042f4e) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x00046ad9) scroll_handle_pane_g

0xb89e,	// (0x00042c9c) bg_popup_sub_pane_cp21_ParamLimits

0xb89e,	// (0x00042c9c) bg_popup_sub_pane_cp21

0x9afa,	// (0x00040ef8) popup_fep_japan_predictive_window_t1_ParamLimits

0x9afa,	// (0x00040ef8) popup_fep_japan_predictive_window_t1

0x9b11,	// (0x00040f0f) popup_fep_japan_predictive_window_t2_ParamLimits

0x9b11,	// (0x00040f0f) popup_fep_japan_predictive_window_t2

0x9b44,	// (0x00040f42) popup_fep_japan_predictive_window_t3_ParamLimits

0x9b44,	// (0x00040f42) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x00046ae0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x00046ae0) popup_fep_japan_predictive_window_t

0xb3e7,	// (0x000427e5) bg_popup_sub_pane_cp23

0x9b7b,	// (0x00040f79) listscroll_japin_cand_pane

0xbb79,	// (0x00042f77) popup_fep_japan_candidate_window_t1

0xbb87,	// (0x00042f85) candidate_pane_ParamLimits

0xbb87,	// (0x00042f85) candidate_pane

0x9b83,	// (0x00040f81) scroll_pane_cp30

0xbb99,	// (0x00042f97) list_single_popup_jap_candidate_pane_ParamLimits

0xbb99,	// (0x00042f97) list_single_popup_jap_candidate_pane

0xb3e7,	// (0x000427e5) list_highlight_pane_cp30

0xbbae,	// (0x00042fac) list_single_popup_jap_candidate_pane_t1

0xbbbd,	// (0x00042fbb) level_1_signal

0xbbca,	// (0x00042fc8) level_2_signal

0xbbd7,	// (0x00042fd5) level_3_signal

0xbbe4,	// (0x00042fe2) level_4_signal

0xbbf1,	// (0x00042fef) level_5_signal

0xbbfe,	// (0x00042ffc) level_6_signal

0xbc0b,	// (0x00043009) level_7_signal

0xbbbd,	// (0x00042fbb) level_1_battery

0xbbca,	// (0x00042fc8) level_2_battery

0xbbd7,	// (0x00042fd5) level_3_battery

0xbbe4,	// (0x00042fe2) level_4_battery

0xbbf1,	// (0x00042fef) level_5_battery

0xbbfe,	// (0x00042ffc) level_6_battery

0xbc0b,	// (0x00043009) level_7_battery

0xbc30,	// (0x0004302e) list_menu_pane_ParamLimits

0xbc30,	// (0x0004302e) list_menu_pane

0xbc46,	// (0x00043044) scroll_pane_cp25_ParamLimits

0xbc46,	// (0x00043044) scroll_pane_cp25

0x9b8b,	// (0x00040f89) list_double2_graphic_pane_cp2_ParamLimits

0x9b8b,	// (0x00040f89) list_double2_graphic_pane_cp2

0x9b8b,	// (0x00040f89) list_double2_large_graphic_pane_cp2_ParamLimits

0x9b8b,	// (0x00040f89) list_double2_large_graphic_pane_cp2

0x9b8b,	// (0x00040f89) list_double2_pane_cp2_ParamLimits

0x9b8b,	// (0x00040f89) list_double2_pane_cp2

0x9b8b,	// (0x00040f89) list_double_graphic_pane_cp2_ParamLimits

0x9b8b,	// (0x00040f89) list_double_graphic_pane_cp2

0x9b8b,	// (0x00040f89) list_double_large_graphic_pane_cp2_ParamLimits

0x9b8b,	// (0x00040f89) list_double_large_graphic_pane_cp2

0x9b8b,	// (0x00040f89) list_double_number_pane_cp2_ParamLimits

0x9b8b,	// (0x00040f89) list_double_number_pane_cp2

0x9b8b,	// (0x00040f89) list_double_pane_cp2_ParamLimits

0x9b8b,	// (0x00040f89) list_double_pane_cp2

0x9b9a,	// (0x00040f98) list_single_2graphic_pane_cp2_ParamLimits

0x9b9a,	// (0x00040f98) list_single_2graphic_pane_cp2

0x9b9a,	// (0x00040f98) list_single_graphic_heading_pane_cp2_ParamLimits

0x9b9a,	// (0x00040f98) list_single_graphic_heading_pane_cp2

0x9b9a,	// (0x00040f98) list_single_graphic_pane_cp2_ParamLimits

0x9b9a,	// (0x00040f98) list_single_graphic_pane_cp2

0x9b9a,	// (0x00040f98) list_single_heading_pane_cp2_ParamLimits

0x9b9a,	// (0x00040f98) list_single_heading_pane_cp2

0xbc6f,	// (0x0004306d) list_single_large_graphic_pane_cp2_ParamLimits

0xbc6f,	// (0x0004306d) list_single_large_graphic_pane_cp2

0x9b9a,	// (0x00040f98) list_single_number_heading_pane_cp2_ParamLimits

0x9b9a,	// (0x00040f98) list_single_number_heading_pane_cp2

0x9b9a,	// (0x00040f98) list_single_number_pane_cp2_ParamLimits

0x9b9a,	// (0x00040f98) list_single_number_pane_cp2

0x9b9a,	// (0x00040f98) list_single_pane_cp2_ParamLimits

0x9b9a,	// (0x00040f98) list_single_pane_cp2

0xbc89,	// (0x00043087) bg_popup_sub_pane_cp22

0xf260,	// (0x0004665e) popup_side_volume_key_window_g1

0xf26c,	// (0x0004666a) popup_side_volume_key_window_t1

0x9c62,	// (0x00041060) volume_small_pane_cp1

0xb435,	// (0x00042833) bg_popup_sub_pane_cp24_ParamLimits

0xb435,	// (0x00042833) bg_popup_sub_pane_cp24

0xbc9f,	// (0x0004309d) fep_china_uni_candidate_pane_ParamLimits

0xbc9f,	// (0x0004309d) fep_china_uni_candidate_pane

0xbcb3,	// (0x000430b1) fep_china_uni_entry_pane

0xbcc3,	// (0x000430c1) popup_fep_china_uni_window_g1

0x9c6a,	// (0x00041068) fep_china_uni_entry_pane_g1

0x9c72,	// (0x00041070) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x00046b11) fep_china_uni_entry_pane_g

0xf27a,	// (0x00046678) fep_entry_item_pane

0xf284,	// (0x00046682) fep_candidate_item_pane

0x9c7a,	// (0x00041078) fep_china_uni_candidate_pane_g1

0xf28c,	// (0x0004668a) fep_china_uni_candidate_pane_g2

0xf294,	// (0x00046692) fep_china_uni_candidate_pane_g3

0x9c82,	// (0x00041080) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x00046b16) fep_china_uni_candidate_pane_g

0xb3dd,	// (0x000427db) fep_entry_item_pane_g1

0xf29c,	// (0x0004669a) fep_entry_item_pane_t1_ParamLimits

0xf29c,	// (0x0004669a) fep_entry_item_pane_t1

0xf2b2,	// (0x000466b0) fep_candidate_item_pane_t1_ParamLimits

0xf2b2,	// (0x000466b0) fep_candidate_item_pane_t1

0xf2c7,	// (0x000466c5) fep_candidate_item_pane_t2_ParamLimits

0xf2c7,	// (0x000466c5) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x00046b1f) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x00046b1f) fep_candidate_item_pane_t

0xb443,	// (0x00042841) list_highlight_pane_cp31_ParamLimits

0xb443,	// (0x00042841) list_highlight_pane_cp31

0xf2d9,	// (0x000466d7) level_1_signal_lsc

0xf2e2,	// (0x000466e0) level_2_signal_lsc

0xf2eb,	// (0x000466e9) level_3_signal_lsc

0xf2f4,	// (0x000466f2) level_4_signal_lsc

0xf2fd,	// (0x000466fb) level_5_signal_lsc

0xf306,	// (0x00046704) level_6_signal_lsc

0xf30f,	// (0x0004670d) level_7_signal_lsc

0xf30f,	// (0x0004670d) level_1_battery_lsc

0xf318,	// (0x00046716) level_2_battery_lsc

0xf321,	// (0x0004671f) level_3_battery_lsc

0xf32a,	// (0x00046728) level_4_battery_lsc

0xf333,	// (0x00046731) level_5_battery_lsc

0xf33c,	// (0x0004673a) level_6_battery_lsc

0xf2d9,	// (0x000466d7) level_7_battery_lsc

0xf345,	// (0x00046743) scroll_handle_focus_pane_g1

0xf34e,	// (0x0004674c) scroll_handle_focus_pane_g2

0xf357,	// (0x00046755) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x00046b24) scroll_handle_focus_pane_g

0x9c8a,	// (0x00041088) list_single_2graphic_pane_g1_ParamLimits

0x9c8a,	// (0x00041088) list_single_2graphic_pane_g1

0x93ea,	// (0x000407e8) list_single_2graphic_pane_g2_ParamLimits

0x93ea,	// (0x000407e8) list_single_2graphic_pane_g2

0xd22b,	// (0x00044629) list_single_2graphic_pane_g3_ParamLimits

0xd22b,	// (0x00044629) list_single_2graphic_pane_g3

0x9c96,	// (0x00041094) list_single_2graphic_pane_g4_ParamLimits

0x9c96,	// (0x00041094) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x00046b2b) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x00046b2b) list_single_2graphic_pane_g

0x9ca2,	// (0x000410a0) list_single_2graphic_pane_t1_ParamLimits

0x9ca2,	// (0x000410a0) list_single_2graphic_pane_t1

0x9cd0,	// (0x000410ce) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9cd0,	// (0x000410ce) list_double2_graphic_large_graphic_pane_g1

0x9449,	// (0x00040847) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9449,	// (0x00040847) list_double2_graphic_large_graphic_pane_g2

0xd2df,	// (0x000446dd) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd2df,	// (0x000446dd) list_double2_graphic_large_graphic_pane_g3

0x9ce2,	// (0x000410e0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9ce2,	// (0x000410e0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x00046b34) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x00046b34) list_double2_graphic_large_graphic_pane_g

0x95ab,	// (0x000409a9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x95ab,	// (0x000409a9) list_double2_graphic_large_graphic_pane_t1

0x9cee,	// (0x000410ec) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9cee,	// (0x000410ec) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x00046b3d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x00046b3d) list_double2_graphic_large_graphic_pane_t

0x9d73,	// (0x00041171) popup_fast_swap_window_ParamLimits

0x9d73,	// (0x00041171) popup_fast_swap_window

0x9d8f,	// (0x0004118d) popup_side_volume_key_window

0x0003,	// (0x00037401) stacon_top_pane

0x000d,	// (0x0003740b) status_pane_ParamLimits

0x000d,	// (0x0003740b) status_pane

0x9da9,	// (0x000411a7) status_small_pane

0xb3e7,	// (0x000427e5) control_pane

0xb3e7,	// (0x000427e5) stacon_bottom_pane

0xb7d8,	// (0x00042bd6) scroll_pane_cp121

0xb7cf,	// (0x00042bcd) set_content_pane

0x9d00,	// (0x000410fe) bg_active_tab_pane_g1_cp1

0x9d09,	// (0x00041107) bg_active_tab_pane_g2_cp1

0x9d12,	// (0x00041110) bg_active_tab_pane_g3_cp1

0x9d00,	// (0x000410fe) bg_passive_tab_pane_g1_cp1

0x9d09,	// (0x00041107) bg_passive_tab_pane_g2_cp1

0x9d12,	// (0x00041110) bg_passive_tab_pane_g3_cp1

0x9d1b,	// (0x00041119) bg_active_tab_pane_g1_cp2

0x9d09,	// (0x00041107) bg_active_tab_pane_g2_cp2

0x9d24,	// (0x00041122) bg_active_tab_pane_g3_cp2

0x9d1b,	// (0x00041119) bg_passive_tab_pane_g1_cp2

0x9d09,	// (0x00041107) bg_passive_tab_pane_g2_cp2

0x9d24,	// (0x00041122) bg_passive_tab_pane_g3_cp2

0x9d2d,	// (0x0004112b) bg_active_tab_pane_g1_cp3

0x9d09,	// (0x00041107) bg_active_tab_pane_g2_cp3

0x9d36,	// (0x00041134) bg_active_tab_pane_g3_cp3

0x9d2d,	// (0x0004112b) bg_passive_tab_pane_g1_cp3

0x9d09,	// (0x00041107) bg_passive_tab_pane_g2_cp3

0x9d36,	// (0x00041134) bg_passive_tab_pane_g3_cp3

0x9d3f,	// (0x0004113d) bg_active_tab_pane_g1_cp4

0x9d09,	// (0x00041107) bg_active_tab_pane_g2_cp4

0x9d4a,	// (0x00041148) bg_active_tab_pane_g3_cp4

0x9d3f,	// (0x0004113d) bg_passive_tab_pane_g1_cp4

0x9d09,	// (0x00041107) bg_passive_tab_pane_g2_cp4

0x9d4a,	// (0x00041148) bg_passive_tab_pane_g3_cp4

0x9d55,	// (0x00041153) bg_active_tab_pane_g1_cp5

0x9d09,	// (0x00041107) bg_active_tab_pane_g2_cp5

0x9d5e,	// (0x0004115c) bg_active_tab_pane_g3_cp5

0x9d55,	// (0x00041153) bg_passive_tab_pane_g1_cp5

0x9d09,	// (0x00041107) bg_passive_tab_pane_g2_cp5

0x9d5e,	// (0x0004115c) bg_passive_tab_pane_g3_cp5

0x4493,	// (0x0003b891) list_set_graphic_pane_ParamLimits

0x4493,	// (0x0003b891) list_set_graphic_pane

0xb3e7,	// (0x000427e5) bg_set_opt_pane_cp4

0xf4df,	// (0x000468dd) list_set_graphic_pane_g1_ParamLimits

0xf4df,	// (0x000468dd) list_set_graphic_pane_g1

0xf4eb,	// (0x000468e9) list_set_graphic_pane_g2_ParamLimits

0xf4eb,	// (0x000468e9) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x00046b42) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x00046b42) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x00046ec7) volume_small_pane_cp_g

0x9d67,	// (0x00041165) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9d67,	// (0x00041165) list_double2_large_graphic_pane_g1_cp2

0xf50d,	// (0x0004690b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf50d,	// (0x0004690b) list_double2_large_graphic_pane_g2_cp2

0xf51e,	// (0x0004691c) list_double2_large_graphic_pane_g3_cp2

0xf526,	// (0x00046924) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf526,	// (0x00046924) list_double2_large_graphic_pane_t1_cp2

0xf53c,	// (0x0004693a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf53c,	// (0x0004693a) list_double2_large_graphic_pane_t2_cp2

0xc657,	// (0x00043a55) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc657,	// (0x00043a55) list_double_large_graphic_pane_g1_cp2

0x3a65,	// (0x0003ae63) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3a65,	// (0x0003ae63) list_double_large_graphic_pane_g2_cp2

0x0128,	// (0x00037526) list_double_large_graphic_pane_g3_cp2

0x3a76,	// (0x0003ae74) list_double_large_graphic_pane_g4_cp

0x3a7e,	// (0x0003ae7c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3a7e,	// (0x0003ae7c) list_double_large_graphic_pane_t1_cp2

0x3a95,	// (0x0003ae93) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3a95,	// (0x0003ae93) list_double_large_graphic_pane_t2_cp2

0x0026,	// (0x00037424) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0026,	// (0x00037424) list_double2_graphic_pane_g1_cp2

0x0034,	// (0x00037432) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0034,	// (0x00037432) list_double2_graphic_pane_g2_cp2

0x0045,	// (0x00037443) list_double2_graphic_pane_g3_cp2

0x004f,	// (0x0003744d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x004f,	// (0x0003744d) list_double2_graphic_pane_t1_cp2

0x0065,	// (0x00037463) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0065,	// (0x00037463) list_double2_graphic_pane_t2_cp2

0xbcdf,	// (0x000430dd) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbcdf,	// (0x000430dd) list_single_number_heading_pane_g1_cp2

0x0077,	// (0x00037475) list_single_number_heading_pane_g2_cp2

0x007f,	// (0x0003747d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x007f,	// (0x0003747d) list_single_number_heading_pane_t1_cp2

0x0095,	// (0x00037493) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0095,	// (0x00037493) list_single_number_heading_pane_t2_cp2

0x00a7,	// (0x000374a5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x00a7,	// (0x000374a5) list_single_number_heading_pane_t3_cp2

0xbcdf,	// (0x000430dd) list_single_heading_pane_g1_cp2_ParamLimits

0xbcdf,	// (0x000430dd) list_single_heading_pane_g1_cp2

0x0077,	// (0x00037475) list_single_heading_pane_g2_cp2

0x007f,	// (0x0003747d) list_single_heading_pane_t1_cp2_ParamLimits

0x007f,	// (0x0003747d) list_single_heading_pane_t1_cp2

0x385e,	// (0x0003ac5c) list_single_heading_pane_t2_cp2_ParamLimits

0x385e,	// (0x0003ac5c) list_single_heading_pane_t2_cp2

0x37a6,	// (0x0003aba4) list_double_graphic_pane_g1_cp2_ParamLimits

0x37a6,	// (0x0003aba4) list_double_graphic_pane_g1_cp2

0x37b2,	// (0x0003abb0) list_double_graphic_pane_g2_cp2_ParamLimits

0x37b2,	// (0x0003abb0) list_double_graphic_pane_g2_cp2

0x37c1,	// (0x0003abbf) list_double_graphic_pane_g3_cp2

0x37c9,	// (0x0003abc7) list_double_graphic_pane_t1_cp2_ParamLimits

0x37c9,	// (0x0003abc7) list_double_graphic_pane_t1_cp2

0x37df,	// (0x0003abdd) list_double_graphic_pane_t2_cp2_ParamLimits

0x37df,	// (0x0003abdd) list_double_graphic_pane_t2_cp2

0x011c,	// (0x0003751a) list_double_number_pane_g1_cp2_ParamLimits

0x011c,	// (0x0003751a) list_double_number_pane_g1_cp2

0x0128,	// (0x00037526) list_double_number_pane_g2_cp2

0x376a,	// (0x0003ab68) list_double_number_pane_t1_cp2_ParamLimits

0x376a,	// (0x0003ab68) list_double_number_pane_t1_cp2

0x377e,	// (0x0003ab7c) list_double_number_pane_t2_cp2_ParamLimits

0x377e,	// (0x0003ab7c) list_double_number_pane_t2_cp2

0x3794,	// (0x0003ab92) list_double_number_pane_t3_cp2_ParamLimits

0x3794,	// (0x0003ab92) list_double_number_pane_t3_cp2

0x3653,	// (0x0003aa51) list_single_graphic_pane_g1_cp2_ParamLimits

0x3653,	// (0x0003aa51) list_single_graphic_pane_g1_cp2

0x2071,	// (0x0003946f) list_single_graphic_pane_g2_cp2_ParamLimits

0x2071,	// (0x0003946f) list_single_graphic_pane_g2_cp2

0x207d,	// (0x0003947b) list_single_graphic_pane_g3_cp2

0x3629,	// (0x0003aa27) list_single_graphic_pane_t1_cp2_ParamLimits

0x3629,	// (0x0003aa27) list_single_graphic_pane_t1_cp2

0x2071,	// (0x0003946f) list_single_number_pane_g1_cp2_ParamLimits

0x2071,	// (0x0003946f) list_single_number_pane_g1_cp2

0x207d,	// (0x0003947b) list_single_number_pane_g2_cp2

0x3629,	// (0x0003aa27) list_single_number_pane_t1_cp2_ParamLimits

0x3629,	// (0x0003aa27) list_single_number_pane_t1_cp2

0x363f,	// (0x0003aa3d) list_single_number_pane_t2_cp2_ParamLimits

0x363f,	// (0x0003aa3d) list_single_number_pane_t2_cp2

0xf50d,	// (0x0004690b) list_double2_pane_g1_cp2_ParamLimits

0xf50d,	// (0x0004690b) list_double2_pane_g1_cp2

0xf51e,	// (0x0004691c) list_double2_pane_g2_cp2

0x00f4,	// (0x000374f2) list_double2_pane_t1_cp2_ParamLimits

0x00f4,	// (0x000374f2) list_double2_pane_t1_cp2

0x010a,	// (0x00037508) list_double2_pane_t2_cp2_ParamLimits

0x010a,	// (0x00037508) list_double2_pane_t2_cp2

0x011c,	// (0x0003751a) list_double_pane_g1_cp2_ParamLimits

0x011c,	// (0x0003751a) list_double_pane_g1_cp2

0x0128,	// (0x00037526) list_double_pane_g2_cp2

0x0130,	// (0x0003752e) list_double_pane_t1_cp2_ParamLimits

0x0130,	// (0x0003752e) list_double_pane_t1_cp2

0x0146,	// (0x00037544) list_double_pane_t2_cp2_ParamLimits

0x0146,	// (0x00037544) list_double_pane_t2_cp2

0x9db4,	// (0x000411b2) list_single_pane_cp2_g3

0x2071,	// (0x0003946f) list_single_pane_g1_cp2_ParamLimits

0x2071,	// (0x0003946f) list_single_pane_g1_cp2

0x207d,	// (0x0003947b) list_single_pane_g2_cp2

0x2085,	// (0x00039483) list_single_pane_t1_cp2_ParamLimits

0x2085,	// (0x00039483) list_single_pane_t1_cp2

0x9dbc,	// (0x000411ba) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9dbc,	// (0x000411ba) list_single_large_graphic_pane_g1_cp2

0x20a9,	// (0x000394a7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x20a9,	// (0x000394a7) list_single_large_graphic_pane_g2_cp2

0x20b5,	// (0x000394b3) list_single_large_graphic_pane_g3_cp2

0x9dc8,	// (0x000411c6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9dc8,	// (0x000411c6) list_single_large_graphic_pane_g4_cp1

0x20d7,	// (0x000394d5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x20d7,	// (0x000394d5) list_single_large_graphic_pane_t1_cp2

0x35f5,	// (0x0003a9f3) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x35f5,	// (0x0003a9f3) list_single_graphic_heading_pane_g1_cp2

0x35c2,	// (0x0003a9c0) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x35c2,	// (0x0003a9c0) list_single_graphic_heading_pane_g4_cp2

0x207d,	// (0x0003947b) list_single_graphic_heading_pane_g5_cp2

0x3601,	// (0x0003a9ff) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3601,	// (0x0003a9ff) list_single_graphic_heading_pane_t1_cp2

0x3617,	// (0x0003aa15) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3617,	// (0x0003aa15) list_single_graphic_heading_pane_t2_cp2

0x35b6,	// (0x0003a9b4) list_single_2graphic_pane_g1_cp2_ParamLimits

0x35b6,	// (0x0003a9b4) list_single_2graphic_pane_g1_cp2

0x35c2,	// (0x0003a9c0) list_single_2graphic_pane_g2_cp2_ParamLimits

0x35c2,	// (0x0003a9c0) list_single_2graphic_pane_g2_cp2

0x207d,	// (0x0003947b) list_single_2graphic_pane_g3_cp2

0x35d3,	// (0x0003a9d1) list_single_2graphic_pane_g4_cp2_ParamLimits

0x35d3,	// (0x0003a9d1) list_single_2graphic_pane_g4_cp2

0x35df,	// (0x0003a9dd) list_single_2graphic_pane_t1_cp2_ParamLimits

0x35df,	// (0x0003a9dd) list_single_2graphic_pane_t1_cp2

0xb3dd,	// (0x000427db) list_highlight_pane_g10_cp1

0x319e,	// (0x0003a59c) list_highlight_pane_g1_cp1

0x31a6,	// (0x0003a5a4) list_highlight_pane_g2_cp1

0x31ae,	// (0x0003a5ac) list_highlight_pane_g3_cp1

0x31b6,	// (0x0003a5b4) list_highlight_pane_g4_cp1

0x31be,	// (0x0003a5bc) list_highlight_pane_g5_cp1

0x31c6,	// (0x0003a5c4) list_highlight_pane_g6_cp1

0x31ce,	// (0x0003a5cc) list_highlight_pane_g7_cp1

0x31d6,	// (0x0003a5d4) list_highlight_pane_g8_cp1

0x31de,	// (0x0003a5dc) list_highlight_pane_g9_cp1

0xc3ec,	// (0x000437ea) form_field_slider_pane_t3

0xc3fa,	// (0x000437f8) form_field_slider_pane_t4

0x30e2,	// (0x0003a4e0) slider_form_pane_ParamLimits

0x30e2,	// (0x0003a4e0) slider_form_pane

0xb3e7,	// (0x000427e5) control_abbreviations

0xb3e7,	// (0x000427e5) control_conventions

0xb3e7,	// (0x000427e5) control_definitions

0xb3e7,	// (0x000427e5) format_table_attribute

0xc62e,	// (0x00043a2c) bg_popup_preview_window_pane_g9

0xb3e7,	// (0x000427e5) format_table_data2

0xb3e7,	// (0x000427e5) format_table_data3

0xb3e7,	// (0x000427e5) format_table_data_example

0x0008,

0xb3e7,	// (0x000427e5) intro_purpose

0xf8d4,	// (0x00046cd2) bg_popup_preview_window_pane_g

0xb3e7,	// (0x000427e5) texts_category

0xb3e7,	// (0x000427e5) texts_graphics

0x20ed,	// (0x000394eb) text_digital

0x20fc,	// (0x000394fa) text_primary

0x210b,	// (0x00039509) text_primary_small

0x211a,	// (0x00039518) text_secondary

0x2129,	// (0x00039527) text_title

0xc993,	// (0x00043d91) bg_passive_tab_pane_g1_cp3_srt

0x9d09,	// (0x00041107) bg_passive_tab_pane_g2_cp3_srt

0xc99c,	// (0x00043d9a) bg_passive_tab_pane_g3_cp3_srt

0xb435,	// (0x00042833) bg_active_tab_pane_cp3_srt_ParamLimits

0xb435,	// (0x00042833) bg_active_tab_pane_cp3_srt

0xc9a5,	// (0x00043da3) tabs_4_active_pane_srt_g1

0xc9ad,	// (0x00043dab) tabs_4_active_pane_srt_t1_ParamLimits

0xc9ad,	// (0x00043dab) tabs_4_active_pane_srt_t1

0xc993,	// (0x00043d91) bg_active_tab_pane_g1_cp3_copy1

0x9d09,	// (0x00041107) bg_active_tab_pane_g2_cp3_copy1

0xc99c,	// (0x00043d9a) bg_active_tab_pane_g3_cp3_copy1

0xb443,	// (0x00042841) tabs_2_long_active_pane_srt_ParamLimits

0xb443,	// (0x00042841) tabs_2_long_active_pane_srt

0xb443,	// (0x00042841) tabs_2_long_passive_pane_srt_ParamLimits

0xb443,	// (0x00042841) tabs_2_long_passive_pane_srt

0x247e,	// (0x0003987c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x247e,	// (0x0003987c) bg_passive_tab_pane_cp4_srt

0xc746,	// (0x00043b44) bg_passive_tab_pane_g1_cp4_srt

0x9d09,	// (0x00041107) bg_passive_tab_pane_g2_cp4_srt

0xc74f,	// (0x00043b4d) bg_passive_tab_pane_g3_cp4_srt

0xb443,	// (0x00042841) bg_active_tab_pane_cp4_srt_ParamLimits

0xb443,	// (0x00042841) bg_active_tab_pane_cp4_srt

0xc758,	// (0x00043b56) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc758,	// (0x00043b56) tabs_2_long_active_pane_srt_t1

0xc746,	// (0x00043b44) bg_active_tab_pane_g1_cp4_srt

0x9d09,	// (0x00041107) bg_active_tab_pane_g2_cp4_srt

0xc74f,	// (0x00043b4d) bg_active_tab_pane_g3_cp4_srt

0xb435,	// (0x00042833) tabs_3_long_active_pane_srt_ParamLimits

0xb435,	// (0x00042833) tabs_3_long_active_pane_srt

0xb435,	// (0x00042833) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb435,	// (0x00042833) tabs_3_long_passive_pane_cp_srt

0xb435,	// (0x00042833) tabs_3_long_passive_pane_srt_ParamLimits

0xb435,	// (0x00042833) tabs_3_long_passive_pane_srt

0x247e,	// (0x0003987c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x247e,	// (0x0003987c) bg_passive_tab_pane_cp5_srt

0x9d55,	// (0x00041153) bg_passive_tab_pane_g1_cp5_srt

0x9d09,	// (0x00041107) bg_passive_tab_pane_g2_cp5_srt

0x9d5e,	// (0x0004115c) bg_passive_tab_pane_g3_cp5_srt

0xb443,	// (0x00042841) bg_active_tab_pane_cp5_srt_ParamLimits

0xb443,	// (0x00042841) bg_active_tab_pane_cp5_srt

0xc730,	// (0x00043b2e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc730,	// (0x00043b2e) tabs_3_long_active_pane_srt_t1

0x9d55,	// (0x00041153) bg_active_tab_pane_g1_cp5_srt

0x9d09,	// (0x00041107) bg_active_tab_pane_g2_cp5_srt

0x9d5e,	// (0x0004115c) bg_active_tab_pane_g3_cp5_srt

0x3ca9,	// (0x0003b0a7) navi_text_pane_srt_t1

0x3ca1,	// (0x0003b09f) navi_icon_pane_srt_g1

0x22fa,	// (0x000396f8) midp_editing_number_pane_srt

0x2138,	// (0x00039536) midp_ticker_pane_srt

0x2302,	// (0x00039700) midp_ticker_pane_srt_g1

0x230a,	// (0x00039708) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x00046b61) midp_ticker_pane_srt_g

0x2312,	// (0x00039710) midp_ticker_pane_srt_t1

0x3c92,	// (0x0003b090) midp_editing_number_pane_t1_copy1

0x9de2,	// (0x000411e0) listscroll_midp_pane

0x9de2,	// (0x000411e0) midp_form_pane

0x9e4d,	// (0x0004124b) midp_info_popup_window_ParamLimits

0x9e4d,	// (0x0004124b) midp_info_popup_window

0xb89e,	// (0x00042c9c) bg_popup_sub_pane_cp50_ParamLimits

0xb89e,	// (0x00042c9c) bg_popup_sub_pane_cp50

0x2de6,	// (0x0003a1e4) listscroll_midp_info_pane_ParamLimits

0x2de6,	// (0x0003a1e4) listscroll_midp_info_pane

0x2dc6,	// (0x0003a1c4) listscroll_form_midp_pane_ParamLimits

0x2dc6,	// (0x0003a1c4) listscroll_form_midp_pane

0x2dd2,	// (0x0003a1d0) scroll_bar_cp050

0x2dc6,	// (0x0003a1c4) list_midp_pane

0xcb4f,	// (0x00043f4d) signal_pane_g2_cp

0x2ce0,	// (0x0003a0de) listscroll_midp_info_pane_t1_ParamLimits

0x2ce0,	// (0x0003a0de) listscroll_midp_info_pane_t1

0xc226,	// (0x00043624) listscroll_midp_info_pane_t2_ParamLimits

0xc226,	// (0x00043624) listscroll_midp_info_pane_t2

0xc264,	// (0x00043662) listscroll_midp_info_pane_t3_ParamLimits

0xc264,	// (0x00043662) listscroll_midp_info_pane_t3

0xc29e,	// (0x0004369c) listscroll_midp_info_pane_t4_ParamLimits

0xc29e,	// (0x0004369c) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x00046c0d) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x00046c0d) listscroll_midp_info_pane_t

0xb914,	// (0x00042d12) scroll_pane_cp21

0x2c80,	// (0x0003a07e) form_midp_field_choice_group_pane

0xc1e9,	// (0x000435e7) form_midp_field_text_pane

0x2cc6,	// (0x0003a0c4) form_midp_field_time_pane

0x2cce,	// (0x0003a0cc) form_midp_gauge_slider_pane

0x2cd7,	// (0x0003a0d5) form_midp_gauge_wait_pane

0xb3e7,	// (0x000427e5) form_midp_image_pane

0xa952,	// (0x00041d50) list_single_midp_pane_ParamLimits

0xa952,	// (0x00041d50) list_single_midp_pane

0xc1c7,	// (0x000435c5) form_midp_field_text_pane_t1

0x29ff,	// (0x00039dfd) input_focus_pane_cp050

0x2c6f,	// (0x0003a06d) list_midp_form_text_pane

0x2c04,	// (0x0003a002) form_midp_field_choice_group_pane_t1

0x2c12,	// (0x0003a010) input_focus_pane_cp051

0x2c26,	// (0x0003a024) list_midp_choice_pane

0xb3e7,	// (0x000427e5) status_idle_pane

0x2be8,	// (0x00039fe6) form_midp_field_time_pane_t1

0xb3dd,	// (0x000427db) wait_anim_pane_g2_copy1

0x2bf6,	// (0x00039ff4) form_midp_field_time_pane_t2

0x0001,

0x2262,	// (0x00039660) aid_navinavi_width_2_pane

0xf80a,	// (0x00046c08) form_midp_field_time_pane_t

0xb3e7,	// (0x000427e5) input_focus_pane_cp052

0xb3e7,	// (0x000427e5) bg_input_focus_pane_cp040

0x2ba8,	// (0x00039fa6) form_midp_gauge_slider_pane_t1

0x2bb6,	// (0x00039fb4) form_midp_gauge_slider_pane_t2

0xc1ab,	// (0x000435a9) form_midp_gauge_slider_pane_t3

0xc1b9,	// (0x000435b7) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x00046bff) form_midp_gauge_slider_pane_t

0x2be0,	// (0x00039fde) form_midp_slider_pane

0xb443,	// (0x00042841) bg_input_focus_pane_cp041_ParamLimits

0xb443,	// (0x00042841) bg_input_focus_pane_cp041

0x2b75,	// (0x00039f73) form_midp_gauge_wait_pane_t1_ParamLimits

0x2b75,	// (0x00039f73) form_midp_gauge_wait_pane_t1

0x2b87,	// (0x00039f85) form_midp_gauge_wait_pane_t2_ParamLimits

0x2b87,	// (0x00039f85) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x00046bfa) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x00046bfa) form_midp_gauge_wait_pane_t

0x2b99,	// (0x00039f97) form_midp_wait_pane_ParamLimits

0x2b99,	// (0x00039f97) form_midp_wait_pane

0xc175,	// (0x00043573) form_midp_image_pane_g1

0xc17e,	// (0x0004357c) form_midp_image_pane_t1

0xc18d,	// (0x0004358b) form_midp_image_pane_t2

0xc19c,	// (0x0004359a) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x00046bf3) form_midp_image_pane_t

0x2b36,	// (0x00039f34) list_single_midp_pane_g1

0xd3e8,	// (0x000447e6) list_single_midp_pane_t1

0xc160,	// (0x0004355e) list_midp_form_item_pane_ParamLimits

0xc160,	// (0x0004355e) list_midp_form_item_pane

0x220a,	// (0x00039608) list_midp_form_item_pane_t1

0x2219,	// (0x00039617) midp_ticker_pane_g1

0x2225,	// (0x00039623) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x00046b47) midp_ticker_pane_g

0x2231,	// (0x0003962f) midp_ticker_pane_t1

0x3edf,	// (0x0003b2dd) midp_editing_number_pane_t1

0x3ebd,	// (0x0003b2bb) midp_editing_number_pane

0x3ecc,	// (0x0003b2ca) midp_ticker_pane

0x3c82,	// (0x0003b080) ai_message_heading_pane

0xb3e7,	// (0x000427e5) bg_popup_window_pane_cp14

0x3c8a,	// (0x0003b088) listscroll_ai_message_pane

0x3c0c,	// (0x0003b00a) ai_message_heading_pane_g1_ParamLimits

0x3c0c,	// (0x0003b00a) ai_message_heading_pane_g1

0xc6f8,	// (0x00043af6) ai_message_heading_pane_g2_ParamLimits

0xc6f8,	// (0x00043af6) ai_message_heading_pane_g2

0x3c24,	// (0x0003b022) ai_message_heading_pane_g3_ParamLimits

0x3c24,	// (0x0003b022) ai_message_heading_pane_g3

0x3c30,	// (0x0003b02e) ai_message_heading_pane_g4_ParamLimits

0x3c30,	// (0x0003b02e) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x00046d34) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x00046d34) ai_message_heading_pane_g

0xc704,	// (0x00043b02) ai_message_heading_pane_t1_ParamLimits

0xc704,	// (0x00043b02) ai_message_heading_pane_t1

0xc71e,	// (0x00043b1c) ai_message_heading_pane_t2_ParamLimits

0xc71e,	// (0x00043b1c) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x00046d3d) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x00046d3d) ai_message_heading_pane_t

0x3c68,	// (0x0003b066) bg_popup_heading_pane_cp1_ParamLimits

0x3c68,	// (0x0003b066) bg_popup_heading_pane_cp1

0x3bfa,	// (0x0003aff8) list_ai_message_pane_ParamLimits

0x3bfa,	// (0x0003aff8) list_ai_message_pane

0xb914,	// (0x00042d12) scroll_pane_cp10

0x3b96,	// (0x0003af94) list_ai_message_pane_g1

0x3b9e,	// (0x0003af9c) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x00046d11) list_ai_message_pane_g

0x3ba6,	// (0x0003afa4) list_ai_message_pane_t1_ParamLimits

0x3ba6,	// (0x0003afa4) list_ai_message_pane_t1

0x3bbb,	// (0x0003afb9) list_ai_message_pane_t2_ParamLimits

0x3bbb,	// (0x0003afb9) list_ai_message_pane_t2

0x3bd0,	// (0x0003afce) list_ai_message_pane_t3_ParamLimits

0x3bd0,	// (0x0003afce) list_ai_message_pane_t3

0x3be5,	// (0x0003afe3) list_ai_message_pane_t4_ParamLimits

0x3be5,	// (0x0003afe3) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x00046d16) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x00046d16) list_ai_message_pane_t

0xc6d4,	// (0x00043ad2) cell_ai_soft_ind_pane_ParamLimits

0xc6d4,	// (0x00043ad2) cell_ai_soft_ind_pane

0x2243,	// (0x00039641) cell_ai_soft_ind_pane_g1_ParamLimits

0x2243,	// (0x00039641) cell_ai_soft_ind_pane_g1

0xb3e7,	// (0x000427e5) grid_highlight_cp1

0x2250,	// (0x0003964e) text_secondary_cp56_ParamLimits

0x2250,	// (0x0003964e) text_secondary_cp56

0x3b56,	// (0x0003af54) example_general_pane_ParamLimits

0x3b56,	// (0x0003af54) example_general_pane

0x3b62,	// (0x0003af60) example_parent_pane_g1_ParamLimits

0x3b62,	// (0x0003af60) example_parent_pane_g1

0x3b6e,	// (0x0003af6c) example_parent_pane_t1_ParamLimits

0x3b6e,	// (0x0003af6c) example_parent_pane_t1

0xa54b,	// (0x00041949) popup_preview_text_window_ParamLimits

0xa54b,	// (0x00041949) popup_preview_text_window

0x0178,	// (0x00037576) list_single_pane_cp2_g4

0xb615,	// (0x00042a13) bg_popup_preview_window_pane_ParamLimits

0xb615,	// (0x00042a13) bg_popup_preview_window_pane

0xc636,	// (0x00043a34) popup_preview_text_window_t1_ParamLimits

0xc636,	// (0x00043a34) popup_preview_text_window_t1

0x38ce,	// (0x0003accc) popup_preview_text_window_t2_ParamLimits

0x38ce,	// (0x0003accc) popup_preview_text_window_t2

0x3917,	// (0x0003ad15) popup_preview_text_window_t3_ParamLimits

0x3917,	// (0x0003ad15) popup_preview_text_window_t3

0x395c,	// (0x0003ad5a) popup_preview_text_window_t4_ParamLimits

0x395c,	// (0x0003ad5a) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x00046ce5) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x00046ce5) popup_preview_text_window_t

0x39da,	// (0x0003add8) scroll_pane_cp11

0x298b,	// (0x00039d89) bg_popup_preview_window_pane_g1

0xc5f6,	// (0x000439f4) bg_popup_preview_window_pane_g2

0xc5fe,	// (0x000439fc) bg_popup_preview_window_pane_g3

0xc606,	// (0x00043a04) bg_popup_preview_window_pane_g4

0xc60e,	// (0x00043a0c) bg_popup_preview_window_pane_g5

0xc616,	// (0x00043a14) bg_popup_preview_window_pane_g6

0xc61e,	// (0x00043a1c) bg_popup_preview_window_pane_g7

0xc626,	// (0x00043a24) bg_popup_preview_window_pane_g8

0xee2a,	// (0x00046228) aid_popup_width_pane

0xa4c7,	// (0x000418c5) popup_midp_note_alarm_window_ParamLimits

0xa4c7,	// (0x000418c5) popup_midp_note_alarm_window

0xb7e9,	// (0x00042be7) data_form_pane_ParamLimits

0x9792,	// (0x00040b90) form_field_data_pane_g1

0x979c,	// (0x00040b9a) form_field_data_pane_t1_ParamLimits

0xb7f5,	// (0x00042bf3) input_focus_pane_ParamLimits

0x97b6,	// (0x00040bb4) data_form_wide_pane_ParamLimits

0x97c7,	// (0x00040bc5) form_field_data_wide_pane_g1

0x97d3,	// (0x00040bd1) form_field_data_wide_pane_t1_ParamLimits

0xb6e9,	// (0x00042ae7) input_focus_pane_cp6_ParamLimits

0x9973,	// (0x00040d71) input_popup_find_pane_g1_ParamLimits

0x9973,	// (0x00040d71) input_popup_find_pane_g1

0xf0b5,	// (0x000464b3) aid_navi_side_left_pane

0xf0ca,	// (0x000464c8) aid_navi_side_right_pane

0x3299,	// (0x0003a697) bg_popup_window_pane_cp30_ParamLimits

0x3299,	// (0x0003a697) bg_popup_window_pane_cp30

0x3313,	// (0x0003a711) popup_midp_note_alarm_window_g1_ParamLimits

0x3313,	// (0x0003a711) popup_midp_note_alarm_window_g1

0x3343,	// (0x0003a741) popup_midp_note_alarm_window_t1_ParamLimits

0x3343,	// (0x0003a741) popup_midp_note_alarm_window_t1

0xc43f,	// (0x0004383d) popup_midp_note_alarm_window_t2_ParamLimits

0xc43f,	// (0x0004383d) popup_midp_note_alarm_window_t2

0xc4ed,	// (0x000438eb) popup_midp_note_alarm_window_t3_ParamLimits

0xc4ed,	// (0x000438eb) popup_midp_note_alarm_window_t3

0xc515,	// (0x00043913) popup_midp_note_alarm_window_t4_ParamLimits

0xc515,	// (0x00043913) popup_midp_note_alarm_window_t4

0x34da,	// (0x0003a8d8) popup_midp_note_alarm_window_t5_ParamLimits

0x34da,	// (0x0003a8d8) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x00046c82) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x00046c82) popup_midp_note_alarm_window_t

0x3586,	// (0x0003a984) wait_bar_pane_cp1_ParamLimits

0x3586,	// (0x0003a984) wait_bar_pane_cp1

0xb3e7,	// (0x000427e5) wait_anim_pane_copy1

0xb3e7,	// (0x000427e5) wait_border_pane_copy1

0x2f8f,	// (0x0003a38d) wait_border_pane_g1_copy1

0x97ed,	// (0x00040beb) form_field_popup_pane_g1

0x97f5,	// (0x00040bf3) form_field_popup_pane_t1_ParamLimits

0xb7f5,	// (0x00042bf3) input_focus_pane_cp7_ParamLimits

0xb823,	// (0x00042c21) list_form_pane_ParamLimits

0x980f,	// (0x00040c0d) form_field_popup_wide_pane_g1

0x9817,	// (0x00040c15) form_field_popup_wide_pane_t1_ParamLimits

0xb7f5,	// (0x00042bf3) input_focus_pane_cp8_ParamLimits

0xb82f,	// (0x00042c2d) list_form_wide_pane_ParamLimits

0xca06,	// (0x00043e04) aid_size_cell_graphic_pane

0x98a3,	// (0x00040ca1) data_form_pane_t1_ParamLimits

0xaa3f,	// (0x00041e3d) data_form_wide_pane_t1_ParamLimits

0xbdcf,	// (0x000431cd) bg_status_flat_pane

0x8e08,	// (0x00040206) title_pane_t1_ParamLimits

0xb3fd,	// (0x000427fb) title_pane_t2_ParamLimits

0xb423,	// (0x00042821) title_pane_t3_ParamLimits

0xf557,	// (0x00046955) title_pane_t_ParamLimits

0xbbbd,	// (0x00042fbb) level_1_signal_ParamLimits

0xbbca,	// (0x00042fc8) level_2_signal_ParamLimits

0xbbd7,	// (0x00042fd5) level_3_signal_ParamLimits

0xbbe4,	// (0x00042fe2) level_4_signal_ParamLimits

0xbbf1,	// (0x00042fef) level_5_signal_ParamLimits

0xbbfe,	// (0x00042ffc) level_6_signal_ParamLimits

0xbc0b,	// (0x00043009) level_7_signal_ParamLimits

0xbbbd,	// (0x00042fbb) level_1_battery_ParamLimits

0xbbca,	// (0x00042fc8) level_2_battery_ParamLimits

0xbbd7,	// (0x00042fd5) level_3_battery_ParamLimits

0xbbe4,	// (0x00042fe2) level_4_battery_ParamLimits

0xbbf1,	// (0x00042fef) level_5_battery_ParamLimits

0xbbfe,	// (0x00042ffc) level_6_battery_ParamLimits

0xbc0b,	// (0x00043009) level_7_battery_ParamLimits

0x319e,	// (0x0003a59c) bg_status_flat_pane_g1

0x31a6,	// (0x0003a5a4) bg_status_flat_pane_g2

0x31ae,	// (0x0003a5ac) bg_status_flat_pane_g3

0x31b6,	// (0x0003a5b4) bg_status_flat_pane_g4

0x31be,	// (0x0003a5bc) bg_status_flat_pane_g5

0x31c6,	// (0x0003a5c4) bg_status_flat_pane_g6

0x31ce,	// (0x0003a5cc) bg_status_flat_pane_g7

0x8e9c,	// (0x0004029a) tabs_3_active_pane_t1_ParamLimits

0x8e9c,	// (0x0004029a) tabs_3_passive_pane_t1_ParamLimits

0x8eb6,	// (0x000402b4) tabs_4_active_pane_t1_ParamLimits

0x8eb6,	// (0x000402b4) tabs_4_1_passive_pane_t1_ParamLimits

0x99b2,	// (0x00040db0) tabs_2_active_pane_t1_ParamLimits

0x99b2,	// (0x00040db0) tabs_2_passive_pane_t1_ParamLimits

0xb443,	// (0x00042841) bg_active_tab_pane_cp4_ParamLimits

0x99c4,	// (0x00040dc2) tabs_2_long_active_pane_t1_ParamLimits

0x247e,	// (0x0003987c) bg_passive_tab_pane_cp4_ParamLimits

0x09d9,	// (0x00037dd7) list_single_midp_graphic_pane_t1_ParamLimits

0xb443,	// (0x00042841) bg_active_tab_pane_cp5_ParamLimits

0x99d7,	// (0x00040dd5) tabs_3_long_active_pane_t1_ParamLimits

0x247e,	// (0x0003987c) bg_passive_tab_pane_cp5_ParamLimits

0x09d9,	// (0x00037dd7) list_single_midp_graphic_pane_t1

0xbdcf,	// (0x000431cd) bg_status_flat_pane_ParamLimits

0x261e,	// (0x00039a1c) indicator_pane_cp2_ParamLimits

0x261e,	// (0x00039a1c) indicator_pane_cp2

0xbf4d,	// (0x0004334b) navi_pane_srt_ParamLimits

0xbf4d,	// (0x0004334b) navi_pane_srt

0x276d,	// (0x00039b6b) popup_clock_digital_analogue_window_cp1

0xb487,	// (0x00042885) indicator_pane_t1

0x2138,	// (0x00039536) copy_highlight_pane

0x2138,	// (0x00039536) cursor_graphics_pane

0x2138,	// (0x00039536) graphic_within_text_pane

0x2138,	// (0x00039536) link_highlight_pane

0x399d,	// (0x0003ad9b) popup_preview_text_window_t5_ParamLimits

0x399d,	// (0x0003ad9b) popup_preview_text_window_t5

0x226a,	// (0x00039668) cursor_digital_pane

0x226a,	// (0x00039668) cursor_primary_pane

0x227b,	// (0x00039679) cursor_primary_small_pane

0x2283,	// (0x00039681) cursor_secondary_pane

0x228b,	// (0x00039689) cursor_title_pane

0x226a,	// (0x00039668) link_highlight_digital_pane

0x2272,	// (0x00039670) link_highlight_primary_pane

0x227b,	// (0x00039679) link_highlight_primary_small_pane

0x2283,	// (0x00039681) link_highlight_secondary_pane

0x228b,	// (0x00039689) link_highlight_title_pane

0x226a,	// (0x00039668) copy_highlight_digital_pane

0x226a,	// (0x00039668) copy_highlight_primary_pane

0x227b,	// (0x00039679) copy_highlight_primary_small_pane

0x2283,	// (0x00039681) copy_highlight_secondary_pane

0x228b,	// (0x00039689) copy_highlight_title_pane

0x2283,	// (0x00039681) graphic_text_digital_pane

0x323c,	// (0x0003a63a) graphic_text_primary_pane

0x3245,	// (0x0003a643) graphic_text_primary_small_pane

0x227b,	// (0x00039679) graphic_text_secondary_pane

0x226a,	// (0x00039668) graphic_text_title_pane

0x9e9e,	// (0x0004129c) cursor_primary_pane_g1

0x322e,	// (0x0003a62c) cursor_text_primary_t1

0xc435,	// (0x00043833) cursor_primary_small_pane_g1

0x3220,	// (0x0003a61e) cursor_text_primary_small_t1

0xc42b,	// (0x00043829) cursor_primary_small_pane_g1_copy1

0x3208,	// (0x0003a606) cursor_text_primary_small_t1_copy1

0x31e6,	// (0x0003a5e4) cursor_text_title_t1

0xc421,	// (0x0004381f) cursor_title_pane_g1

0x9e9e,	// (0x0004129c) cursor_digital_pane_g1

0x229d,	// (0x0003969b) cursor_text_digital_t1

0x22ab,	// (0x000396a9) link_highlight_primary_pane_g1

0x318f,	// (0x0003a58d) link_highlight_primary_pane_t1

0x22ab,	// (0x000396a9) link_highlight_primary_small_pane_g1

0x22b3,	// (0x000396b1) link_highlight_primary_small_pane_t1

0x22ab,	// (0x000396a9) link_highlight_secondary_pane_g1

0x22c2,	// (0x000396c0) link_highlight_secondary_pane_t1

0x30f4,	// (0x0003a4f2) link_highlight_title_pane_g1

0x310b,	// (0x0003a509) link_highlight_title_pane_t1

0x30f4,	// (0x0003a4f2) link_highlight_digital_pane_g1

0x30fc,	// (0x0003a4fa) link_highlight_digital_pane_t1

0x2fae,	// (0x0003a3ac) copy_highlight_primary_pane_g1

0x2fd4,	// (0x0003a3d2) copy_highlight_primary_pane_t1

0x2fae,	// (0x0003a3ac) copy_highlight_primary_small_pane_g1

0x2fc5,	// (0x0003a3c3) copy_highlight_primary_small_pane_t1

0x22d1,	// (0x000396cf) copy_highlight_secondary_pane_g1

0x22d9,	// (0x000396d7) copy_highlight_secondary_pane_t1

0x2fae,	// (0x0003a3ac) copy_highlight_title_pane_g1

0x2fb6,	// (0x0003a3b4) copy_highlight_title_pane_t1

0x2fae,	// (0x0003a3ac) copy_highlight_digital_pane_g1

0x4237,	// (0x0003b635) copy_highlight_digital_pane_t1

0x418b,	// (0x0003b589) graphic_text_primary_pane_g1

0x421b,	// (0x0003b619) graphic_text_primary_pane_t1

0x4229,	// (0x0003b627) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00046db1) graphic_text_primary_pane_t

0x41f7,	// (0x0003b5f5) graphic_text_primary_small_pane_g1

0x41ff,	// (0x0003b5fd) graphic_text_primary_small_pane_t1

0x420d,	// (0x0003b60b) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00046dac) graphic_text_primary_small_pane_t

0x41d3,	// (0x0003b5d1) graphic_text_secondary_pane_g1

0x41db,	// (0x0003b5d9) graphic_text_secondary_pane_t1

0x41e9,	// (0x0003b5e7) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x00046da7) graphic_text_secondary_pane_t

0x41af,	// (0x0003b5ad) graphic_text_title_pane_g1

0x41b7,	// (0x0003b5b5) graphic_text_title_pane_t1

0x41c5,	// (0x0003b5c3) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00046da2) graphic_text_title_pane_t

0x418b,	// (0x0003b589) graphic_text_digital_pane_g1

0x4193,	// (0x0003b591) graphic_text_digital_pane_t1

0x41a1,	// (0x0003b59f) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00046d9d) graphic_text_digital_pane_t

0xb443,	// (0x00042841) navi_icon_pane_srt_ParamLimits

0xb443,	// (0x00042841) navi_icon_pane_srt

0xb3e7,	// (0x000427e5) navi_midp_pane_srt

0xb3e7,	// (0x000427e5) navi_navi_pane_srt

0xb443,	// (0x00042841) navi_text_pane_srt_ParamLimits

0xb443,	// (0x00042841) navi_text_pane_srt

0x4156,	// (0x0003b554) navi_navi_icon_text_pane_srt

0x415e,	// (0x0003b55c) navi_navi_pane_srt_g1_ParamLimits

0x415e,	// (0x0003b55c) navi_navi_pane_srt_g1

0x4170,	// (0x0003b56e) navi_navi_pane_srt_g2_ParamLimits

0x4170,	// (0x0003b56e) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x00046d98) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x00046d98) navi_navi_pane_srt_g

0x4182,	// (0x0003b580) navi_navi_tabs_pane_srt

0x4156,	// (0x0003b554) navi_navi_text_pane_srt

0x4156,	// (0x0003b554) navi_navi_volume_pane_srt

0x4147,	// (0x0003b545) navi_navi_text_pane_srt_t1

0x0ea6,	// (0x000382a4) navi_navi_volume_pane_srt_g1

0x0eae,	// (0x000382ac) volume_small_pane_srt_ParamLimits

0x0eae,	// (0x000382ac) volume_small_pane_srt

0x0180,	// (0x0003757e) volume_small_pane_srt_g1_ParamLimits

0x0180,	// (0x0003757e) volume_small_pane_srt_g1

0x0190,	// (0x0003758e) volume_small_pane_srt_g2_ParamLimits

0x0190,	// (0x0003758e) volume_small_pane_srt_g2

0x01a1,	// (0x0003759f) volume_small_pane_srt_g3_ParamLimits

0x01a1,	// (0x0003759f) volume_small_pane_srt_g3

0x01b2,	// (0x000375b0) volume_small_pane_srt_g4_ParamLimits

0x01b2,	// (0x000375b0) volume_small_pane_srt_g4

0x01c3,	// (0x000375c1) volume_small_pane_srt_g5_ParamLimits

0x01c3,	// (0x000375c1) volume_small_pane_srt_g5

0x01d4,	// (0x000375d2) volume_small_pane_srt_g6_ParamLimits

0x01d4,	// (0x000375d2) volume_small_pane_srt_g6

0x01e5,	// (0x000375e3) volume_small_pane_srt_g7_ParamLimits

0x01e5,	// (0x000375e3) volume_small_pane_srt_g7

0x01f6,	// (0x000375f4) volume_small_pane_srt_g8_ParamLimits

0x01f6,	// (0x000375f4) volume_small_pane_srt_g8

0x0207,	// (0x00037605) volume_small_pane_srt_g9_ParamLimits

0x0207,	// (0x00037605) volume_small_pane_srt_g9

0x0218,	// (0x00037616) volume_small_pane_srt_g10_ParamLimits

0x0218,	// (0x00037616) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x00046b4c) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x00046b4c) volume_small_pane_srt_g

0x9177,	// (0x00040575) query_popup_data_pane_cp2

0x412d,	// (0x0003b52b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x412d,	// (0x0003b52b) navi_navi_icon_text_pane_srt_t1

0x323c,	// (0x0003a63a) navi_tabs_2_long_pane_srt

0x323c,	// (0x0003a63a) navi_tabs_2_pane_srt

0x323c,	// (0x0003a63a) navi_tabs_3_long_pane_srt

0x323c,	// (0x0003a63a) navi_tabs_3_pane_srt

0x323c,	// (0x0003a63a) navi_tabs_4_pane_srt

0xaadc,	// (0x00041eda) tabs_2_active_pane_srt_ParamLimits

0xaadc,	// (0x00041eda) tabs_2_active_pane_srt

0xaaec,	// (0x00041eea) tabs_2_passive_pane_srt_ParamLimits

0xaaec,	// (0x00041eea) tabs_2_passive_pane_srt

0x29ff,	// (0x00039dfd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x29ff,	// (0x00039dfd) bg_passive_tab_pane_cp1_srt

0xca50,	// (0x00043e4e) bg_passive_tab_pane_g1_cp1_srt

0x9d09,	// (0x00041107) bg_passive_tab_pane_g2_cp1_srt

0xca59,	// (0x00043e57) bg_passive_tab_pane_g3_cp1_srt

0xb435,	// (0x00042833) bg_active_tab_pane_cp1_srt_ParamLimits

0xb435,	// (0x00042833) bg_active_tab_pane_cp1_srt

0xca62,	// (0x00043e60) tabs_2_active_pane_srt_g1

0xca6a,	// (0x00043e68) tabs_2_active_pane_srt_t1_ParamLimits

0xca6a,	// (0x00043e68) tabs_2_active_pane_srt_t1

0xca50,	// (0x00043e4e) bg_active_tab_pane_g1_cp1_srt

0x9d09,	// (0x00041107) bg_active_tab_pane_g2_cp1_srt

0xca59,	// (0x00043e57) bg_active_tab_pane_g3_cp1_srt

0xaaa9,	// (0x00041ea7) tabs_3_active_pane_srt_ParamLimits

0xaaa9,	// (0x00041ea7) tabs_3_active_pane_srt

0xaaba,	// (0x00041eb8) tabs_3_passive_pane_cp_srt_ParamLimits

0xaaba,	// (0x00041eb8) tabs_3_passive_pane_cp_srt

0xaacb,	// (0x00041ec9) tabs_3_passive_pane_srt_ParamLimits

0xaacb,	// (0x00041ec9) tabs_3_passive_pane_srt

0x29ff,	// (0x00039dfd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x29ff,	// (0x00039dfd) bg_passive_tab_pane_cp2_srt

0x9ea8,	// (0x000412a6) bg_passive_tab_pane_g1_cp2_srt

0x9d09,	// (0x00041107) bg_passive_tab_pane_g2_cp2_srt

0x9eb1,	// (0x000412af) bg_passive_tab_pane_g3_cp2_srt

0xb435,	// (0x00042833) bg_active_tab_pane_cp2_srt_ParamLimits

0xb435,	// (0x00042833) bg_active_tab_pane_cp2_srt

0xca32,	// (0x00043e30) tabs_3_active_pane_srt_g1

0xca3a,	// (0x00043e38) tabs_3_active_pane_srt_t1_ParamLimits

0xca3a,	// (0x00043e38) tabs_3_active_pane_srt_t1

0x9ea8,	// (0x000412a6) bg_active_tab_pane_g1_cp2_srt

0x9d09,	// (0x00041107) bg_active_tab_pane_g2_cp2_srt

0x9eb1,	// (0x000412af) bg_active_tab_pane_g3_cp2_srt

0x0e0b,	// (0x00038209) tabs_4_active_pane_srt_ParamLimits

0x0e0b,	// (0x00038209) tabs_4_active_pane_srt

0x0e1d,	// (0x0003821b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0e1d,	// (0x0003821b) tabs_4_passive_pane_cp2_srt

0x0387,	// (0x00037785) aid_size_cell_toolbar

0x3d3a,	// (0x0003b138) main_idle_act_pane_ParamLimits

0xa309,	// (0x00041707) popup_large_graphic_colour_window_ParamLimits

0xa7fd,	// (0x00041bfb) popup_toolbar_window_ParamLimits

0xa7fd,	// (0x00041bfb) popup_toolbar_window

0xd3f7,	// (0x000447f5) list_single_graphic_2heading_pane_ParamLimits

0xd3f7,	// (0x000447f5) list_single_graphic_2heading_pane

0xbaa5,	// (0x00042ea3) aid_size_cell_apps_grid_lsc_pane

0xbab7,	// (0x00042eb5) aid_size_cell_apps_grid_prt_pane

0x247e,	// (0x0003987c) bg_wml_button_pane_cp1_ParamLimits

0x247e,	// (0x0003987c) bg_wml_button_pane_cp1

0xc1c7,	// (0x000435c5) form_midp_field_text_pane_t1_ParamLimits

0x29ff,	// (0x00039dfd) input_focus_pane_cp050_ParamLimits

0x2c6f,	// (0x0003a06d) list_midp_form_text_pane_ParamLimits

0x2c12,	// (0x0003a010) input_focus_pane_cp051_ParamLimits

0x2c26,	// (0x0003a024) list_midp_choice_pane_ParamLimits

0xc12c,	// (0x0004352a) list_single_2graphic_pane_cp3_ParamLimits

0xc12c,	// (0x0004352a) list_single_2graphic_pane_cp3

0xc140,	// (0x0004353e) list_single_midp_graphic_pane_ParamLimits

0xc140,	// (0x0004353e) list_single_midp_graphic_pane

0xf15d,	// (0x0004655b) list_single_graphic_2heading_pane_g1_ParamLimits

0xf15d,	// (0x0004655b) list_single_graphic_2heading_pane_g1

0xf169,	// (0x00046567) list_single_graphic_2heading_pane_g4_ParamLimits

0xf169,	// (0x00046567) list_single_graphic_2heading_pane_g4

0xf175,	// (0x00046573) list_single_graphic_2heading_pane_g5_ParamLimits

0xf175,	// (0x00046573) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x00046b9f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x00046b9f) list_single_graphic_2heading_pane_g

0xf181,	// (0x0004657f) list_single_graphic_2heading_pane_t1_ParamLimits

0xf181,	// (0x0004657f) list_single_graphic_2heading_pane_t1

0xf195,	// (0x00046593) list_single_graphic_2heading_pane_t2_ParamLimits

0xf195,	// (0x00046593) list_single_graphic_2heading_pane_t2

0xf1af,	// (0x000465ad) list_single_graphic_2heading_pane_t3_ParamLimits

0xf1af,	// (0x000465ad) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x00046ba6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x00046ba6) list_single_graphic_2heading_pane_t

0x28c9,	// (0x00039cc7) bg_popup_sub_pane_cp2

0x28f3,	// (0x00039cf1) grid_toobar_pane

0x0948,	// (0x00037d46) cell_toolbar_pane_ParamLimits

0x0948,	// (0x00037d46) cell_toolbar_pane

0x292f,	// (0x00039d2d) cell_toolbar_pane_g1_ParamLimits

0x292f,	// (0x00039d2d) cell_toolbar_pane_g1

0xc0ec,	// (0x000434ea) cell_toolbar_pane_g2_ParamLimits

0xc0ec,	// (0x000434ea) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x00046bad) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x00046bad) cell_toolbar_pane_g

0x2965,	// (0x00039d63) grid_highlight_pane_cp2_ParamLimits

0x2965,	// (0x00039d63) grid_highlight_pane_cp2

0x297f,	// (0x00039d7d) toolbar_button_pane

0x298b,	// (0x00039d89) toolbar_button_pane_g1

0x2993,	// (0x00039d91) toolbar_button_pane_g2

0x299b,	// (0x00039d99) toolbar_button_pane_g3

0x29a3,	// (0x00039da1) toolbar_button_pane_g4

0x29ab,	// (0x00039da9) toolbar_button_pane_g5

0x29b3,	// (0x00039db1) toolbar_button_pane_g6

0x29bb,	// (0x00039db9) toolbar_button_pane_g7

0x29c3,	// (0x00039dc1) toolbar_button_pane_g8

0x29cb,	// (0x00039dc9) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x00046bb2) toolbar_button_pane_g

0x0980,	// (0x00037d7e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0980,	// (0x00037d7e) list_single_2graphic_pane_g1_cp3

0xa8aa,	// (0x00041ca8) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa8aa,	// (0x00041ca8) list_single_2graphic_pane_g2_cp3

0x099d,	// (0x00037d9b) list_single_2graphic_pane_g3_cp3

0x09a5,	// (0x00037da3) list_single_2graphic_pane_g4_cp3_ParamLimits

0x09a5,	// (0x00037da3) list_single_2graphic_pane_g4_cp3

0xa8bb,	// (0x00041cb9) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa8bb,	// (0x00041cb9) list_single_2graphic_pane_t1_cp3

0x09cd,	// (0x00037dcb) list_single_midp_graphic_pane_g2_ParamLimits

0x09cd,	// (0x00037dcb) list_single_midp_graphic_pane_g2

0x038f,	// (0x0003778d) aid_zoom_text_primary

0xf141,	// (0x0004653f) aid_zoom_text_secondary

0x9f08,	// (0x00041306) status_small_pane_g7_ParamLimits

0x9f08,	// (0x00041306) status_small_pane_g7

0x9f2b,	// (0x00041329) status_small_pane_t1_ParamLimits

0x8de4,	// (0x000401e2) title_pane_g2

0x0003,

0xf54e,	// (0x0004694c) title_pane_g

0x91d1,	// (0x000405cf) aid_size_cell_colour_1_pane_ParamLimits

0x91d1,	// (0x000405cf) aid_size_cell_colour_1_pane

0x91e5,	// (0x000405e3) aid_size_cell_colour_2_pane_ParamLimits

0x91e5,	// (0x000405e3) aid_size_cell_colour_2_pane

0x91f9,	// (0x000405f7) aid_size_cell_colour_3_pane_ParamLimits

0x91f9,	// (0x000405f7) aid_size_cell_colour_3_pane

0x920d,	// (0x0004060b) aid_size_cell_colour_4_pane_ParamLimits

0x920d,	// (0x0004060b) aid_size_cell_colour_4_pane

0xeff2,	// (0x000463f0) title_pane_stacon_g1_ParamLimits

0xeff2,	// (0x000463f0) title_pane_stacon_g1

0x302b,	// (0x0003a429) popup_note_wait_window_g3_ParamLimits

0x302b,	// (0x0003a429) popup_note_wait_window_g3

0x30a1,	// (0x0003a49f) popup_note_wait_window_t5_ParamLimits

0x30a1,	// (0x0003a49f) popup_note_wait_window_t5

0xb3e7,	// (0x000427e5) main_feb_china_hwr_fs_writing_pane

0xa18b,	// (0x00041589) popup_feb_china_hwr_fs_window_ParamLimits

0xa18b,	// (0x00041589) popup_feb_china_hwr_fs_window

0xa8d7,	// (0x00041cd5) aid_size_cell_hwr_fs_ParamLimits

0xa8d7,	// (0x00041cd5) aid_size_cell_hwr_fs

0x29ff,	// (0x00039dfd) bg_popup_sub_pane_cp3_ParamLimits

0x29ff,	// (0x00039dfd) bg_popup_sub_pane_cp3

0xa8ec,	// (0x00041cea) grid_hwr_fs_pane_ParamLimits

0xa8ec,	// (0x00041cea) grid_hwr_fs_pane

0x0a1c,	// (0x00037e1a) linegrid_hwr_fs_pane_ParamLimits

0x0a1c,	// (0x00037e1a) linegrid_hwr_fs_pane

0xa904,	// (0x00041d02) cell_hwr_fs_pane_ParamLimits

0xa904,	// (0x00041d02) cell_hwr_fs_pane

0x2a0b,	// (0x00039e09) linegrid_hwr_fs_pane_g1_ParamLimits

0x2a0b,	// (0x00039e09) linegrid_hwr_fs_pane_g1

0xc100,	// (0x000434fe) linegrid_hwr_fs_pane_g2_ParamLimits

0xc100,	// (0x000434fe) linegrid_hwr_fs_pane_g2

0x2a29,	// (0x00039e27) linegrid_hwr_fs_pane_g3_ParamLimits

0x2a29,	// (0x00039e27) linegrid_hwr_fs_pane_g3

0xa92a,	// (0x00041d28) linegrid_hwr_fs_pane_g4_ParamLimits

0xa92a,	// (0x00041d28) linegrid_hwr_fs_pane_g4

0x0a68,	// (0x00037e66) linegrid_hwr_fs_pane_g5_ParamLimits

0x0a68,	// (0x00037e66) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x00046bd8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x00046bd8) linegrid_hwr_fs_pane_g

0x2a35,	// (0x00039e33) cell_hwr_fs_pane_g1_ParamLimits

0x2a35,	// (0x00039e33) cell_hwr_fs_pane_g1

0x2803,	// (0x00039c01) cell_hwr_fs_pane_g2_ParamLimits

0x2803,	// (0x00039c01) cell_hwr_fs_pane_g2

0xc112,	// (0x00043510) cell_hwr_fs_pane_g3_ParamLimits

0xc112,	// (0x00043510) cell_hwr_fs_pane_g3

0xc11f,	// (0x0004351d) cell_hwr_fs_pane_g4_ParamLimits

0xc11f,	// (0x0004351d) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x00046be3) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x00046be3) cell_hwr_fs_pane_g

0xa944,	// (0x00041d42) cell_hwr_fs_pane_t1

0xb3e7,	// (0x000427e5) grid_highlight_pane_cp6

0xb3e7,	// (0x000427e5) main_idle_act2_pane

0xb8fb,	// (0x00042cf9) aid_inside_area_popup_secondary

0xc554,	// (0x00043952) aid_inside_area_window_primary_ParamLimits

0xc554,	// (0x00043952) aid_inside_area_window_primary

0xca88,	// (0x00043e86) ai2_news_ticker_pane

0x424e,	// (0x0003b64c) aid_size_cell_ai1_link_ParamLimits

0x424e,	// (0x0003b64c) aid_size_cell_ai1_link

0xca90,	// (0x00043e8e) popup_ai2_data_window_ParamLimits

0xca90,	// (0x00043e8e) popup_ai2_data_window

0x427e,	// (0x0003b67c) popup_ai2_link_window_ParamLimits

0x427e,	// (0x0003b67c) popup_ai2_link_window

0x29ff,	// (0x00039dfd) bg_popup_sub_pane_cp4_ParamLimits

0x29ff,	// (0x00039dfd) bg_popup_sub_pane_cp4

0x4292,	// (0x0003b690) grid_ai2_link_pane_ParamLimits

0x4292,	// (0x0003b690) grid_ai2_link_pane

0x42a9,	// (0x0003b6a7) popup_ai2_link_window_g1_ParamLimits

0x42a9,	// (0x0003b6a7) popup_ai2_link_window_g1

0x42b5,	// (0x0003b6b3) popup_ai2_link_window_g2_ParamLimits

0x42b5,	// (0x0003b6b3) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x00046db6) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x00046db6) popup_ai2_link_window_g

0x42c4,	// (0x0003b6c2) ai2_mp_button_pane

0x42cc,	// (0x0003b6ca) ai2_mp_volume_pane

0x2c12,	// (0x0003a010) bg_popup_sub_pane_cp5_ParamLimits

0x2c12,	// (0x0003a010) bg_popup_sub_pane_cp5

0x42d4,	// (0x0003b6d2) heading_ai2_gene_pane_ParamLimits

0x42d4,	// (0x0003b6d2) heading_ai2_gene_pane

0x42e0,	// (0x0003b6de) list_ai2_gene_pane_ParamLimits

0x42e0,	// (0x0003b6de) list_ai2_gene_pane

0x4328,	// (0x0003b726) cell_ai2_link_pane_ParamLimits

0x4328,	// (0x0003b726) cell_ai2_link_pane

0x433e,	// (0x0003b73c) cell_ai2_link_pane_g1

0xb3e7,	// (0x000427e5) grid_highlight_pane_cp7

0x0ec3,	// (0x000382c1) ai2_mp_volume_pane_g1

0x440e,	// (0x0003b80c) ai2_mp_volume_pane_g2

0x4383,	// (0x0003b781) list_ai2_gene_pane_t1

0x4416,	// (0x0003b814) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x00046dcf) ai2_mp_volume_pane_g

0xaafc,	// (0x00041efa) volume_small_pane_cp3

0x441e,	// (0x0003b81c) aid_size_cell_ai2_button

0x4426,	// (0x0003b824) grid_ai2_button_pane

0x442f,	// (0x0003b82d) cell_ai2_button_pane_ParamLimits

0x442f,	// (0x0003b82d) cell_ai2_button_pane

0xb3dd,	// (0x000427db) cell_ai2_button_pane_g1

0xb3e7,	// (0x000427e5) grid_highlight_pane_cp8

0x43ce,	// (0x0003b7cc) ai2_gene_pane_t1_ParamLimits

0x43ce,	// (0x0003b7cc) ai2_gene_pane_t1

0xa0f9,	// (0x000414f7) aid_height_parent_landscape

0xc7a2,	// (0x00043ba0) aid_height_set_list

0x3d3a,	// (0x0003b138) aid_size_parent

0xca06,	// (0x00043e04) aid_size_cell_graphic_pane_ParamLimits

0x42f0,	// (0x0003b6ee) popup_ai2_data_window_g1_ParamLimits

0x42f0,	// (0x0003b6ee) popup_ai2_data_window_g1

0x42fc,	// (0x0003b6fa) ai2_news_ticker_pane_g1

0x4304,	// (0x0003b702) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00046dbb) ai2_news_ticker_pane_g

0x430c,	// (0x0003b70a) ai2_news_ticker_pane_t1

0x431a,	// (0x0003b718) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00046dc0) ai2_news_ticker_pane_t

0x4347,	// (0x0003b745) heading_ai2_gene_pane_g1

0x434f,	// (0x0003b74d) heading_ai2_gene_pane_t1_ParamLimits

0x434f,	// (0x0003b74d) heading_ai2_gene_pane_t1

0x4364,	// (0x0003b762) list_highlight_pane_cp6

0x436c,	// (0x0003b76a) ai2_gene_pane_ParamLimits

0x436c,	// (0x0003b76a) ai2_gene_pane

0x4391,	// (0x0003b78f) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x00046dc5) list_ai2_gene_pane_t

0x439f,	// (0x0003b79d) list_highlight_pane_cp8_ParamLimits

0x439f,	// (0x0003b79d) list_highlight_pane_cp8

0x43b0,	// (0x0003b7ae) ai2_gene_pane_g1_ParamLimits

0x43b0,	// (0x0003b7ae) ai2_gene_pane_g1

0x43c2,	// (0x0003b7c0) ai2_gene_pane_g2_ParamLimits

0x43c2,	// (0x0003b7c0) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x00046dca) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x00046dca) ai2_gene_pane_g

0xb794,	// (0x00042b92) scroll_pane_cp12

0xa0b6,	// (0x000414b4) control_pane_t3_ParamLimits

0xa0b6,	// (0x000414b4) control_pane_t3

0x9f1c,	// (0x0004131a) status_small_pane_g8_ParamLimits

0x9f1c,	// (0x0004131a) status_small_pane_g8

0xa24e,	// (0x0004164c) popup_find_window_ParamLimits

0xa501,	// (0x000418ff) popup_note_image_window_ParamLimits

0xd213,	// (0x00044611) list_double2_graphic_pane_vc_g1_ParamLimits

0xd213,	// (0x00044611) list_double2_graphic_pane_vc_g1

0xd21f,	// (0x0004461d) list_double2_graphic_pane_vc_g2_ParamLimits

0xd21f,	// (0x0004461d) list_double2_graphic_pane_vc_g2

0xd22b,	// (0x00044629) list_double2_graphic_pane_vc_g3_ParamLimits

0xd22b,	// (0x00044629) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x000469bf) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x000469bf) list_double2_graphic_pane_vc_g

0xd237,	// (0x00044635) list_double2_graphic_pane_vc_t1_ParamLimits

0xd237,	// (0x00044635) list_double2_graphic_pane_vc_t1

0xd21f,	// (0x0004461d) list_single_heading_pane_vc_g1_ParamLimits

0xd21f,	// (0x0004461d) list_single_heading_pane_vc_g1

0xd22b,	// (0x00044629) list_single_heading_pane_vc_g2_ParamLimits

0xd22b,	// (0x00044629) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000469c6) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000469c6) list_single_heading_pane_vc_g

0xd33c,	// (0x0004473a) list_single_heading_pane_vc_t1_ParamLimits

0xd33c,	// (0x0004473a) list_single_heading_pane_vc_t1

0xd352,	// (0x00044750) list_single_heading_pane_vc_t2_ParamLimits

0xd352,	// (0x00044750) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x00046bc7) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x00046bc7) list_single_heading_pane_vc_t

0xd364,	// (0x00044762) list_setting_number_pane_vc_g1_ParamLimits

0xd364,	// (0x00044762) list_setting_number_pane_vc_g1

0xd370,	// (0x0004476e) list_setting_number_pane_vc_g2_ParamLimits

0xd370,	// (0x0004476e) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x00046bcc) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x00046bcc) list_setting_number_pane_vc_g

0xd37c,	// (0x0004477a) list_setting_number_pane_vc_t1_ParamLimits

0xd37c,	// (0x0004477a) list_setting_number_pane_vc_t1

0xd390,	// (0x0004478e) list_setting_number_pane_vc_t2_ParamLimits

0xd390,	// (0x0004478e) list_setting_number_pane_vc_t2

0xd3ac,	// (0x000447aa) list_setting_number_pane_vc_t3_ParamLimits

0xd3ac,	// (0x000447aa) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x00046bd1) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x00046bd1) list_setting_number_pane_vc_t

0xd3d8,	// (0x000447d6) set_value_pane_vc_ParamLimits

0xd3d8,	// (0x000447d6) set_value_pane_vc

0xd3f7,	// (0x000447f5) list_double2_graphic_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_double2_graphic_pane_vc

0x3f0a,	// (0x0003b308) list_double2_large_graphic_pane_vc_ParamLimits

0x3f0a,	// (0x0003b308) list_double2_large_graphic_pane_vc

0xd3f7,	// (0x000447f5) list_double2_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_double2_pane_vc

0xd3f7,	// (0x000447f5) list_double_graphic_heading_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_double_graphic_heading_pane_vc

0xd3f7,	// (0x000447f5) list_double_graphic_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_double_graphic_pane_vc

0xd3f7,	// (0x000447f5) list_double_heading_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_double_heading_pane_vc

0x3f1c,	// (0x0003b31a) list_double_large_graphic_pane_vc_ParamLimits

0x3f1c,	// (0x0003b31a) list_double_large_graphic_pane_vc

0xd3f7,	// (0x000447f5) list_double_number_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_double_number_pane_vc

0xd3f7,	// (0x000447f5) list_double_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_double_pane_vc

0xd3f7,	// (0x000447f5) list_double_time_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_double_time_pane_vc

0xd3f7,	// (0x000447f5) list_setting_number_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_setting_number_pane_vc

0xd3f7,	// (0x000447f5) list_setting_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_setting_pane_vc

0xd3f7,	// (0x000447f5) list_single_graphic_heading_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_single_graphic_heading_pane_vc

0xd3f7,	// (0x000447f5) list_single_heading_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_single_heading_pane_vc

0xd3f7,	// (0x000447f5) list_single_number_heading_pane_vc_ParamLimits

0xd3f7,	// (0x000447f5) list_single_number_heading_pane_vc

0xd299,	// (0x00044697) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd299,	// (0x00044697) list_double_graphic_heading_pane_vc_g1

0xd21f,	// (0x0004461d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd21f,	// (0x0004461d) list_double_graphic_heading_pane_vc_g2

0xd22b,	// (0x00044629) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd22b,	// (0x00044629) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x00046dd6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x00046dd6) list_double_graphic_heading_pane_vc_g

0xd40a,	// (0x00044808) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd40a,	// (0x00044808) list_double_graphic_heading_pane_vc_t1

0xd41e,	// (0x0004481c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd41e,	// (0x0004481c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x00046ddd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x00046ddd) list_double_graphic_heading_pane_vc_t

0xd364,	// (0x00044762) list_setting_pane_vc_g1_ParamLimits

0xd364,	// (0x00044762) list_setting_pane_vc_g1

0xd370,	// (0x0004476e) list_setting_pane_vc_g2_ParamLimits

0xd370,	// (0x0004476e) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x00046bcc) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x00046bcc) list_setting_pane_vc_g

0xd436,	// (0x00044834) list_setting_pane_vc_t1_ParamLimits

0xd436,	// (0x00044834) list_setting_pane_vc_t1

0xd452,	// (0x00044850) list_setting_pane_vc_t2_ParamLimits

0xd452,	// (0x00044850) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x00046e20) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x00046e20) list_setting_pane_vc_t

0xd3d8,	// (0x000447d6) set_value_pane_cp_vc_ParamLimits

0xd3d8,	// (0x000447d6) set_value_pane_cp_vc

0xd21f,	// (0x0004461d) list_single_number_heading_pane_vc_g1_ParamLimits

0xd21f,	// (0x0004461d) list_single_number_heading_pane_vc_g1

0xd22b,	// (0x00044629) list_single_number_heading_pane_vc_g2_ParamLimits

0xd22b,	// (0x00044629) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000469c6) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000469c6) list_single_number_heading_pane_vc_g

0xd46c,	// (0x0004486a) list_single_number_heading_pane_vc_t1_ParamLimits

0xd46c,	// (0x0004486a) list_single_number_heading_pane_vc_t1

0xd482,	// (0x00044880) list_single_number_heading_pane_vc_t2_ParamLimits

0xd482,	// (0x00044880) list_single_number_heading_pane_vc_t2

0xd494,	// (0x00044892) list_single_number_heading_pane_vc_t3_ParamLimits

0xd494,	// (0x00044892) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x00046e25) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x00046e25) list_single_number_heading_pane_vc_t

0xd4a6,	// (0x000448a4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd4a6,	// (0x000448a4) list_single_graphic_heading_pane_vc_g1

0xd21f,	// (0x0004461d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd21f,	// (0x0004461d) list_single_graphic_heading_pane_vc_g4

0xd22b,	// (0x00044629) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd22b,	// (0x00044629) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x00046e2c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x00046e2c) list_single_graphic_heading_pane_vc_g

0xd4b2,	// (0x000448b0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd4b2,	// (0x000448b0) list_single_graphic_heading_pane_vc_t1

0xd4c8,	// (0x000448c6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd4c8,	// (0x000448c6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x00046e33) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x00046e33) list_single_graphic_heading_pane_vc_t

0xd21f,	// (0x0004461d) list_double2_pane_vc_g1_ParamLimits

0xd21f,	// (0x0004461d) list_double2_pane_vc_g1

0xd22b,	// (0x00044629) list_double2_pane_vc_g2_ParamLimits

0xd22b,	// (0x00044629) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000469c6) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000469c6) list_double2_pane_vc_g

0xd4da,	// (0x000448d8) list_double2_pane_vc_t1_ParamLimits

0xd4da,	// (0x000448d8) list_double2_pane_vc_t1

0xd2a5,	// (0x000446a3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd2a5,	// (0x000446a3) list_double2_large_graphic_pane_vc_g1

0xd2b1,	// (0x000446af) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd2b1,	// (0x000446af) list_double2_large_graphic_pane_vc_g2

0xd2bd,	// (0x000446bb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd2bd,	// (0x000446bb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x000469e3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x000469e3) list_double2_large_graphic_pane_vc_g

0xd2c9,	// (0x000446c7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd2c9,	// (0x000446c7) list_double2_large_graphic_pane_vc_t1

0xd4f2,	// (0x000448f0) list_double_time_pane_vc_g1_ParamLimits

0xd4f2,	// (0x000448f0) list_double_time_pane_vc_g1

0xd4fe,	// (0x000448fc) list_double_time_pane_vc_g2_ParamLimits

0xd4fe,	// (0x000448fc) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x00046e38) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x00046e38) list_double_time_pane_vc_g

0xd50a,	// (0x00044908) list_double_time_pane_vc_t1_ParamLimits

0xd50a,	// (0x00044908) list_double_time_pane_vc_t1

0xd52e,	// (0x0004492c) list_double_time_pane_vc_t2_ParamLimits

0xd52e,	// (0x0004492c) list_double_time_pane_vc_t2

0xd57d,	// (0x0004497b) list_double_time_pane_vc_t3_ParamLimits

0xd57d,	// (0x0004497b) list_double_time_pane_vc_t3

0xd58f,	// (0x0004498d) list_double_time_pane_vc_t4_ParamLimits

0xd58f,	// (0x0004498d) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x00046e3d) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x00046e3d) list_double_time_pane_vc_t

0xd21f,	// (0x0004461d) list_double_pane_vc_g1_ParamLimits

0xd21f,	// (0x0004461d) list_double_pane_vc_g1

0xd22b,	// (0x00044629) list_double_pane_vc_g2_ParamLimits

0xd22b,	// (0x00044629) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000469c6) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000469c6) list_double_pane_vc_g

0xd5a3,	// (0x000449a1) list_double_pane_vc_t1_ParamLimits

0xd5a3,	// (0x000449a1) list_double_pane_vc_t1

0xd5b7,	// (0x000449b5) list_double_pane_vc_t2_ParamLimits

0xd5b7,	// (0x000449b5) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x00046e46) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x00046e46) list_double_pane_vc_t

0xd21f,	// (0x0004461d) list_double_number_pane_vc_g1_ParamLimits

0xd21f,	// (0x0004461d) list_double_number_pane_vc_g1

0xd22b,	// (0x00044629) list_double_number_pane_vc_g2_ParamLimits

0xd22b,	// (0x00044629) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000469c6) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000469c6) list_double_number_pane_vc_g

0xd5cf,	// (0x000449cd) list_double_number_pane_vc_t1_ParamLimits

0xd5cf,	// (0x000449cd) list_double_number_pane_vc_t1

0xd5a3,	// (0x000449a1) list_double_number_pane_vc_t2_ParamLimits

0xd5a3,	// (0x000449a1) list_double_number_pane_vc_t2

0xd5e1,	// (0x000449df) list_double_number_pane_vc_t3_ParamLimits

0xd5e1,	// (0x000449df) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x00046e4b) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x00046e4b) list_double_number_pane_vc_t

0xd5f9,	// (0x000449f7) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd5f9,	// (0x000449f7) list_double_large_graphic_pane_vc_g1

0xd61b,	// (0x00044a19) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd61b,	// (0x00044a19) list_double_large_graphic_pane_vc_g2

0xd62f,	// (0x00044a2d) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd62f,	// (0x00044a2d) list_double_large_graphic_pane_vc_g3

0xd63e,	// (0x00044a3c) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd63e,	// (0x00044a3c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x00046e52) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x00046e52) list_double_large_graphic_pane_vc_g

0xd64a,	// (0x00044a48) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd64a,	// (0x00044a48) list_double_large_graphic_pane_vc_t1

0xd666,	// (0x00044a64) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd666,	// (0x00044a64) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x00046e5b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x00046e5b) list_double_large_graphic_pane_vc_t

0xd21f,	// (0x0004461d) list_double_heading_pane_vc_g1_ParamLimits

0xd21f,	// (0x0004461d) list_double_heading_pane_vc_g1

0xd22b,	// (0x00044629) list_double_heading_pane_vc_g2_ParamLimits

0xd22b,	// (0x00044629) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000469c6) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000469c6) list_double_heading_pane_vc_g

0xd688,	// (0x00044a86) list_double_heading_pane_vc_t1_ParamLimits

0xd688,	// (0x00044a86) list_double_heading_pane_vc_t1

0xd69c,	// (0x00044a9a) list_double_heading_pane_vc_t2_ParamLimits

0xd69c,	// (0x00044a9a) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x00046e60) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x00046e60) list_double_heading_pane_vc_t

0xd6b4,	// (0x00044ab2) list_double_graphic_pane_vc_g1_ParamLimits

0xd6b4,	// (0x00044ab2) list_double_graphic_pane_vc_g1

0xd6cc,	// (0x00044aca) list_double_graphic_pane_vc_g2_ParamLimits

0xd6cc,	// (0x00044aca) list_double_graphic_pane_vc_g2

0xd21f,	// (0x0004461d) list_double_graphic_pane_vc_g3_ParamLimits

0xd21f,	// (0x0004461d) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x00046e65) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00046e65) list_double_graphic_pane_vc_g

0xd6e9,	// (0x00044ae7) list_double_graphic_pane_vc_t1_ParamLimits

0xd6e9,	// (0x00044ae7) list_double_graphic_pane_vc_t1

0xd708,	// (0x00044b06) list_double_graphic_pane_vc_t2_ParamLimits

0xd708,	// (0x00044b06) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x00046e6e) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x00046e6e) list_double_graphic_pane_vc_t

0xee36,	// (0x00046234) aid_size_cell_fastswap

0x8bab,	// (0x0003ffa9) aid_size_cell_touch_ParamLimits

0x8bab,	// (0x0003ffa9) aid_size_cell_touch

0xef97,	// (0x00046395) popup_fast_swap_wide_window_ParamLimits

0xef97,	// (0x00046395) popup_fast_swap_wide_window

0x8d7b,	// (0x00040179) touch_pane_ParamLimits

0x8d7b,	// (0x00040179) touch_pane

0xb7e1,	// (0x00042bdf) button_value_adjust_pane_cp2

0xd300,	// (0x000446fe) button_value_adjust_pane_cp4

0xd308,	// (0x00044706) form_field_data_pane_cp2

0x9746,	// (0x00040b44) form_field_data_wide_pane_cp2

0xbadc,	// (0x00042eda) bg_scroll_pane_ParamLimits

0x9ad9,	// (0x00040ed7) scroll_handle_pane_ParamLimits

0xf1d1,	// (0x000465cf) scroll_sc2_down_pane_ParamLimits

0xf1d1,	// (0x000465cf) scroll_sc2_down_pane

0xbb0d,	// (0x00042f0b) scroll_sc2_up_pane_ParamLimits

0xbb0d,	// (0x00042f0b) scroll_sc2_up_pane

0xcbd7,	// (0x00043fd5) grid_wheel_folder_pane_g1_ParamLimits

0xcbd7,	// (0x00043fd5) grid_wheel_folder_pane_g1

0xf45b,	// (0x00046859) clock_nsta_pane_cp2_ParamLimits

0xf45b,	// (0x00046859) clock_nsta_pane_cp2

0x9de2,	// (0x000411e0) listscroll_midp_pane_ParamLimits

0x9dee,	// (0x000411ec) midp_canvas_pane

0x2430,	// (0x0003982e) nsta_clock_indic_pane

0x2464,	// (0x00039862) listscroll_form_pane_vc

0x246c,	// (0x0003986a) listscroll_set_pane_vc_ParamLimits

0x246c,	// (0x0003986a) listscroll_set_pane_vc

0xbdf7,	// (0x000431f5) clock_nsta_pane

0xbe21,	// (0x0004321f) indicator_nsta_pane

0x28c9,	// (0x00039cc7) bg_popup_sub_pane_cp2_ParamLimits

0x28dd,	// (0x00039cdb) find_pane_cp2_ParamLimits

0x28dd,	// (0x00039cdb) find_pane_cp2

0x28f3,	// (0x00039cf1) grid_toobar_pane_ParamLimits

0x29d3,	// (0x00039dd1) list_form_gen_pane_vc_ParamLimits

0x29d3,	// (0x00039dd1) list_form_gen_pane_vc

0x29e9,	// (0x00039de7) scroll_pane_cp8_vc_ParamLimits

0x29e9,	// (0x00039de7) scroll_pane_cp8_vc

0x2a65,	// (0x00039e63) data_form_wide_pane_vc_ParamLimits

0x2a65,	// (0x00039e63) data_form_wide_pane_vc

0x2a71,	// (0x00039e6f) form_field_data_wide_pane_vc_g1

0x2a79,	// (0x00039e77) form_field_data_wide_pane_vc_t1_ParamLimits

0x2a79,	// (0x00039e77) form_field_data_wide_pane_vc_t1

0xb7f5,	// (0x00042bf3) input_focus_pane_cp6_vc_ParamLimits

0xb7f5,	// (0x00042bf3) input_focus_pane_cp6_vc

0x2dc6,	// (0x0003a1c4) list_midp_pane_ParamLimits

0x40d3,	// (0x0003b4d1) scroll_pane_cp16_ParamLimits

0x40d3,	// (0x0003b4d1) scroll_pane_cp16

0x2e08,	// (0x0003a206) button_value_adjust_pane_ParamLimits

0x2e08,	// (0x0003a206) button_value_adjust_pane

0xc7b3,	// (0x00043bb1) button_value_adjust_pane_cp6_ParamLimits

0xc7b3,	// (0x00043bb1) button_value_adjust_pane_cp6

0xc8cd,	// (0x00043ccb) settings_code_pane_cp_ParamLimits

0xc8cd,	// (0x00043ccb) settings_code_pane_cp

0xb3dd,	// (0x000427db) cell_touch_pane_g1

0xb3dd,	// (0x000427db) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x00046af2) cell_touch_pane_g

0xcaa6,	// (0x00043ea4) cell_touch_pane_cp_ParamLimits

0xcaa6,	// (0x00043ea4) cell_touch_pane_cp

0xcac2,	// (0x00043ec0) cell_touch_pane_ParamLimits

0xcac2,	// (0x00043ec0) cell_touch_pane

0xb3dd,	// (0x000427db) scroll_sc2_down_pane_g1

0xb3dd,	// (0x000427db) scroll_sc2_up_pane_g1

0xb3e7,	// (0x000427e5) bg_set_opt_pane_cp4_vc

0x4463,	// (0x0003b861) list_set_graphic_pane_vc_g1_ParamLimits

0x4463,	// (0x0003b861) list_set_graphic_pane_vc_g1

0x446f,	// (0x0003b86d) list_set_graphic_pane_vc_g2_ParamLimits

0x446f,	// (0x0003b86d) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x00046de2) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x00046de2) list_set_graphic_pane_vc_g

0x447b,	// (0x0003b879) text_primary_small_cp13_vc_ParamLimits

0x447b,	// (0x0003b879) text_primary_small_cp13_vc

0x4493,	// (0x0003b891) list_set_graphic_pane_vc_ParamLimits

0x4493,	// (0x0003b891) list_set_graphic_pane_vc

0xb3e7,	// (0x000427e5) input_focus_pane_cp2_vc

0xb3dd,	// (0x000427db) setting_code_pane_vc_g1

0xb45a,	// (0x00042858) setting_code_pane_vc_t1

0x44a6,	// (0x0003b8a4) set_text_pane_vc_t1_ParamLimits

0x44a6,	// (0x0003b8a4) set_text_pane_vc_t1

0xb3e7,	// (0x000427e5) input_focus_pane_cp1_vc

0x44c2,	// (0x0003b8c0) list_set_text_pane_vc

0xb3dd,	// (0x000427db) setting_text_pane_vc_g1

0xb3e7,	// (0x000427e5) bg_set_opt_pane_cp2_vc

0xb451,	// (0x0004284f) setting_slider_graphic_pane_vc_g1

0x44cc,	// (0x0003b8ca) setting_slider_graphic_pane_vc_t1

0x44dc,	// (0x0003b8da) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x00046de7) setting_slider_graphic_pane_vc_t

0x44ec,	// (0x0003b8ea) slider_set_pane_cp_vc

0x44f4,	// (0x0003b8f2) slider_set_pane_vc_g1

0x44fd,	// (0x0003b8fb) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x00046dec) slider_set_pane_vc_g

0xb84d,	// (0x00042c4b) set_opt_bg_pane_g1_copy1

0xb855,	// (0x00042c53) set_opt_bg_pane_g2_copy1

0x4529,	// (0x0003b927) set_opt_bg_pane_g3_copy1

0xb865,	// (0x00042c63) set_opt_bg_pane_g4_copy1

0xb86d,	// (0x00042c6b) set_opt_bg_pane_g5_copy1

0xb875,	// (0x00042c73) set_opt_bg_pane_g6_copy1

0x4531,	// (0x0003b92f) set_opt_bg_pane_g7_copy1

0x4539,	// (0x0003b937) set_opt_bg_pane_g8_copy1

0x4541,	// (0x0003b93f) set_opt_bg_pane_g9_copy1

0xb3e7,	// (0x000427e5) bg_set_opt_pane_cp_vc

0x4549,	// (0x0003b947) setting_slider_pane_vc_t1

0x4558,	// (0x0003b956) setting_slider_pane_vc_t2

0x4568,	// (0x0003b966) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x00046dfb) setting_slider_pane_vc_t

0x4578,	// (0x0003b976) slider_set_pane_vc

0x0abf,	// (0x00037ebd) volume_set_pane_vc_g1

0x0ed4,	// (0x000382d2) volume_set_pane_vc_g2

0x0edd,	// (0x000382db) volume_set_pane_vc_g3

0x0ee6,	// (0x000382e4) volume_set_pane_vc_g4

0x0eef,	// (0x000382ed) volume_set_pane_vc_g5

0x0ef8,	// (0x000382f6) volume_set_pane_vc_g6

0x0f01,	// (0x000382ff) volume_set_pane_vc_g7

0x0f0a,	// (0x00038308) volume_set_pane_vc_g8

0x0f13,	// (0x00038311) volume_set_pane_vc_g9

0x0f1c,	// (0x0003831a) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x00046e02) volume_set_pane_vc_g

0x4580,	// (0x0003b97e) volume_set_pane_vc

0x4588,	// (0x0003b986) button_value_adjust_pane_cp1_vc

0x4592,	// (0x0003b990) list_highlight_pane_cp2_vc

0x459b,	// (0x0003b999) list_set_pane_vc_ParamLimits

0x459b,	// (0x0003b999) list_set_pane_vc

0x45f9,	// (0x0003b9f7) main_pane_set_vc_t1_ParamLimits

0x45f9,	// (0x0003b9f7) main_pane_set_vc_t1

0x460e,	// (0x0003ba0c) main_pane_set_vc_t2_ParamLimits

0x460e,	// (0x0003ba0c) main_pane_set_vc_t2

0x4620,	// (0x0003ba1e) main_pane_set_vc_t3_ParamLimits

0x4620,	// (0x0003ba1e) main_pane_set_vc_t3

0x4632,	// (0x0003ba30) main_pane_set_vc_t4_ParamLimits

0x4632,	// (0x0003ba30) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x00046e17) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x00046e17) main_pane_set_vc_t

0x4644,	// (0x0003ba42) setting_code_pane_vc_ParamLimits

0x4644,	// (0x0003ba42) setting_code_pane_vc

0x4653,	// (0x0003ba51) setting_slider_graphic_pane_vc

0x4653,	// (0x0003ba51) setting_slider_pane_vc

0x4653,	// (0x0003ba51) setting_text_pane_vc

0x4653,	// (0x0003ba51) setting_volume_pane_vc

0x465b,	// (0x0003ba59) scroll_pane_cp121_vc

0xb7cf,	// (0x00042bcd) set_content_pane_vc

0x4663,	// (0x0003ba61) button_value_adjust_pane_g1

0x466c,	// (0x0003ba6a) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x00046e73) button_value_adjust_pane_g

0x4675,	// (0x0003ba73) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4675,	// (0x0003ba73) form_field_slider_wide_pane_vc_t1

0x4689,	// (0x0003ba87) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4689,	// (0x0003ba87) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x00046e78) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x00046e78) form_field_slider_wide_pane_vc_t

0xb435,	// (0x00042833) input_focus_pane_cp10_vc_ParamLimits

0xb435,	// (0x00042833) input_focus_pane_cp10_vc

0x46b7,	// (0x0003bab5) slider_cont_pane_cp1_vc_ParamLimits

0x46b7,	// (0x0003bab5) slider_cont_pane_cp1_vc

0x46c9,	// (0x0003bac7) slider_form_pane_g1_cp2

0x44fd,	// (0x0003b8fb) slider_form_pane_g2_cp2

0x46f6,	// (0x0003baf4) form_field_slider_pane_vc_t3

0x4704,	// (0x0003bb02) form_field_slider_pane_vc_t4

0x4712,	// (0x0003bb10) slider_form_pane_vc_ParamLimits

0x4712,	// (0x0003bb10) slider_form_pane_vc

0x471f,	// (0x0003bb1d) form_field_slider_pane_vc_t1_ParamLimits

0x471f,	// (0x0003bb1d) form_field_slider_pane_vc_t1

0x4689,	// (0x0003ba87) form_field_slider_pane_vc_t2_ParamLimits

0x4689,	// (0x0003ba87) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x00046e8a) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x00046e8a) form_field_slider_pane_vc_t

0xb435,	// (0x00042833) input_focus_pane_cp9_vc_ParamLimits

0xb435,	// (0x00042833) input_focus_pane_cp9_vc

0x473b,	// (0x0003bb39) slider_cont_pane_vc_ParamLimits

0x473b,	// (0x0003bb39) slider_cont_pane_vc

0x474f,	// (0x0003bb4d) list_form_graphic_pane_cp_vc_ParamLimits

0x474f,	// (0x0003bb4d) list_form_graphic_pane_cp_vc

0x2a71,	// (0x00039e6f) form_field_popup_wide_pane_vc_g1

0x4764,	// (0x0003bb62) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4764,	// (0x0003bb62) form_field_popup_wide_pane_vc_t1

0xb7f5,	// (0x00042bf3) input_focus_pane_cp8_vc_ParamLimits

0xb7f5,	// (0x00042bf3) input_focus_pane_cp8_vc

0x47a9,	// (0x0003bba7) list_form_wide_pane_vc_ParamLimits

0x47a9,	// (0x0003bba7) list_form_wide_pane_vc

0x47b5,	// (0x0003bbb3) list_form_graphic_pane_vc_g1

0x47bd,	// (0x0003bbbb) list_form_graphic_pane_vc_t1_ParamLimits

0x47bd,	// (0x0003bbbb) list_form_graphic_pane_vc_t1

0xb443,	// (0x00042841) list_highlight_pane_cp5_vc_ParamLimits

0xb443,	// (0x00042841) list_highlight_pane_cp5_vc

0x47d9,	// (0x0003bbd7) list_form_graphic_pane_vc_ParamLimits

0x47d9,	// (0x0003bbd7) list_form_graphic_pane_vc

0x2a71,	// (0x00039e6f) form_field_popup_pane_vc_g1

0x47ef,	// (0x0003bbed) form_field_popup_pane_vc_t1_ParamLimits

0x47ef,	// (0x0003bbed) form_field_popup_pane_vc_t1

0xb7f5,	// (0x00042bf3) input_focus_pane_cp7_vc_ParamLimits

0xb7f5,	// (0x00042bf3) input_focus_pane_cp7_vc

0x4806,	// (0x0003bc04) list_form_pane_vc_ParamLimits

0x4806,	// (0x0003bc04) list_form_pane_vc

0x4812,	// (0x0003bc10) data_form_pane_vc_t1_ParamLimits

0x4812,	// (0x0003bc10) data_form_pane_vc_t1

0xb84d,	// (0x00042c4b) input_focus_pane_vc_g1

0xb855,	// (0x00042c53) input_focus_pane_vc_g2

0xb85d,	// (0x00042c5b) input_focus_pane_vc_g3

0xb865,	// (0x00042c63) input_focus_pane_vc_g4

0xb86d,	// (0x00042c6b) input_focus_pane_vc_g5

0xb875,	// (0x00042c73) input_focus_pane_vc_g6

0xb87d,	// (0x00042c7b) input_focus_pane_vc_g7

0xb885,	// (0x00042c83) input_focus_pane_vc_g8

0xb88d,	// (0x00042c8b) input_focus_pane_vc_g9

0xb3dd,	// (0x000427db) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x00046a7b) input_focus_pane_vc_g

0x2a65,	// (0x00039e63) data_form_pane_vc_ParamLimits

0x2a65,	// (0x00039e63) data_form_pane_vc

0x2a71,	// (0x00039e6f) form_field_data_pane_vc_g1

0x482d,	// (0x0003bc2b) form_field_data_pane_vc_t1_ParamLimits

0x482d,	// (0x0003bc2b) form_field_data_pane_vc_t1

0xb7f5,	// (0x00042bf3) input_focus_pane_vc_ParamLimits

0xb7f5,	// (0x00042bf3) input_focus_pane_vc

0x4847,	// (0x0003bc45) button_value_adjust_pane_cp3_vc

0x484f,	// (0x0003bc4d) button_value_adjust_pane_cp5_vc

0x4857,	// (0x0003bc55) form_field_data_pane_vc_ParamLimits

0x4857,	// (0x0003bc55) form_field_data_pane_vc

0x486e,	// (0x0003bc6c) form_field_data_pane_vc_cp2

0x4876,	// (0x0003bc74) form_field_data_wide_pane_vc_ParamLimits

0x4876,	// (0x0003bc74) form_field_data_wide_pane_vc

0x488c,	// (0x0003bc8a) form_field_data_wide_pane_vc_cp2

0x4894,	// (0x0003bc92) form_field_popup_pane_vc_ParamLimits

0x4894,	// (0x0003bc92) form_field_popup_pane_vc

0x48ab,	// (0x0003bca9) form_field_popup_wide_pane_vc_ParamLimits

0x48ab,	// (0x0003bca9) form_field_popup_wide_pane_vc

0x48c1,	// (0x0003bcbf) form_field_slider_pane_vc_ParamLimits

0x48c1,	// (0x0003bcbf) form_field_slider_pane_vc

0x48d4,	// (0x0003bcd2) form_field_slider_wide_pane_vc_ParamLimits

0x48d4,	// (0x0003bcd2) form_field_slider_wide_pane_vc

0xcadf,	// (0x00043edd) grid_touch_1_pane_ParamLimits

0xcadf,	// (0x00043edd) grid_touch_1_pane

0xcaf3,	// (0x00043ef1) grid_touch_2_pane_ParamLimits

0xcaf3,	// (0x00043ef1) grid_touch_2_pane

0x49a2,	// (0x0003bda0) touch_pane_g1_ParamLimits

0x49a2,	// (0x0003bda0) touch_pane_g1

0x490b,	// (0x0003bd09) cell_app_pane_cp_wide_ParamLimits

0x490b,	// (0x0003bd09) cell_app_pane_cp_wide

0x491c,	// (0x0003bd1a) grid_popup_fast_wide_pane_ParamLimits

0x491c,	// (0x0003bd1a) grid_popup_fast_wide_pane

0x4930,	// (0x0003bd2e) scroll_pane_cp19_ParamLimits

0x4930,	// (0x0003bd2e) scroll_pane_cp19

0xb3e7,	// (0x000427e5) bg_popup_window_pane_cp20

0x4944,	// (0x0003bd42) listscroll_popup_fast_wide_pane

0xcb1d,	// (0x00043f1b) grid_indicator_nsta_pane

0x494c,	// (0x0003bd4a) clock_nsta_pane_g1

0x4955,	// (0x0003bd53) clock_nsta_pane_t1

0xcb2b,	// (0x00043f29) cell_indicator_nsta_pane_ParamLimits

0xcb2b,	// (0x00043f29) cell_indicator_nsta_pane

0x49a2,	// (0x0003bda0) cell_indicator_nsta_pane_g1

0xcb42,	// (0x00043f40) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x00046e9b) cell_indicator_nsta_pane_g

0x49bd,	// (0x0003bdbb) clock_nsta_pane_cp

0x49c5,	// (0x0003bdc3) indicator_nsta_pane_cp

0x49cd,	// (0x0003bdcb) nsta_clock_indic_pane_g1

0xb47f,	// (0x0004287d) grid_indicator_pane

0x9b73,	// (0x00040f71) scroll_pane_cp29

0xf388,	// (0x00046786) indicator_nsta_pane_cp2_ParamLimits

0xf388,	// (0x00046786) indicator_nsta_pane_cp2

0xb443,	// (0x00042841) main_apps_wheel_pane

0xc1e9,	// (0x000435e7) form_midp_field_text_pane_ParamLimits

0x2dd2,	// (0x0003a1d0) scroll_bar_cp050_ParamLimits

0x4a1d,	// (0x0003be1b) cell_indicator_pane_ParamLimits

0x4a1d,	// (0x0003be1b) cell_indicator_pane

0x4a36,	// (0x0003be34) cell_indicator_pane_g1

0xcb61,	// (0x00043f5f) grid_wheel_folder_pane_ParamLimits

0xcb61,	// (0x00043f5f) grid_wheel_folder_pane

0xcb6f,	// (0x00043f6d) list_wheel_apps_pane_ParamLimits

0xcb6f,	// (0x00043f6d) list_wheel_apps_pane

0xcb7d,	// (0x00043f7b) main_apps_wheel_pane_g1_ParamLimits

0xcb7d,	// (0x00043f7b) main_apps_wheel_pane_g1

0xcb89,	// (0x00043f87) main_apps_wheel_pane_g2_ParamLimits

0xcb89,	// (0x00043f87) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x00046eb7) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x00046eb7) main_apps_wheel_pane_g

0xcb97,	// (0x00043f95) main_apps_wheel_pane_t1_ParamLimits

0xcb97,	// (0x00043f95) main_apps_wheel_pane_t1

0xcbab,	// (0x00043fa9) list_wheel_apps_pane_g1

0xcbb3,	// (0x00043fb1) list_wheel_apps_pane_g2

0xcbbb,	// (0x00043fb9) list_wheel_apps_pane_g3

0xcbc3,	// (0x00043fc1) list_wheel_apps_pane_g4

0xcbcd,	// (0x00043fcb) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x00046ebc) list_wheel_apps_pane_g

0x00c7,	// (0x000374c5) navi_icon_text_pane

0xbceb,	// (0x000430e9) aid_fill_nsta

0x4afd,	// (0x0003befb) navi_icon_text_pane_g1

0x4b09,	// (0x0003bf07) navi_icon_text_pane_t1

0xf4f7,	// (0x000468f5) list_set_graphic_pane_t1_ParamLimits

0xf4f7,	// (0x000468f5) list_set_graphic_pane_t1

0x3509,	// (0x0003a907) popup_midp_note_alarm_window_t6_ParamLimits

0x3509,	// (0x0003a907) popup_midp_note_alarm_window_t6

0x351b,	// (0x0003a919) popup_midp_note_alarm_window_t7_ParamLimits

0x351b,	// (0x0003a919) popup_midp_note_alarm_window_t7

0x352d,	// (0x0003a92b) popup_midp_note_alarm_window_t8_ParamLimits

0x352d,	// (0x0003a92b) popup_midp_note_alarm_window_t8

0x353f,	// (0x0003a93d) popup_midp_note_alarm_window_t9_ParamLimits

0x353f,	// (0x0003a93d) popup_midp_note_alarm_window_t9

0x3551,	// (0x0003a94f) popup_midp_note_alarm_window_t10_ParamLimits

0x3551,	// (0x0003a94f) popup_midp_note_alarm_window_t10

0x3563,	// (0x0003a961) popup_midp_note_alarm_window_t11_ParamLimits

0x3563,	// (0x0003a961) popup_midp_note_alarm_window_t11

0xc535,	// (0x00043933) scroll_pane_cp17_ParamLimits

0xc535,	// (0x00043933) scroll_pane_cp17

0x0abf,	// (0x00037ebd) volume_small_pane_cp_g1

0x0f25,	// (0x00038323) volume_small_pane_cp_g2

0x0f2e,	// (0x0003832c) volume_small_pane_cp_g3

0x0f37,	// (0x00038335) volume_small_pane_cp_g4

0x0f40,	// (0x0003833e) volume_small_pane_cp_g5

0x0eef,	// (0x000382ed) volume_small_pane_cp_g6

0x0f49,	// (0x00038347) volume_small_pane_cp_g7

0x0f52,	// (0x00038350) volume_small_pane_cp_g8

0x0f5b,	// (0x00038359) volume_small_pane_cp_g9

0x0f64,	// (0x00038362) volume_small_pane_cp_g10

0x2219,	// (0x00039617) midp_ticker_pane_g1_ParamLimits

0x2225,	// (0x00039623) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x00046b47) midp_ticker_pane_g_ParamLimits

0x2231,	// (0x0003962f) midp_ticker_pane_t1_ParamLimits

0xbd0f,	// (0x0004310d) aid_fill_nsta_2

0x2dbe,	// (0x0003a1bc) list_form2_midp_pane

0x3ebd,	// (0x0003b2bb) midp_editing_number_pane_ParamLimits

0x3ecc,	// (0x0003b2ca) midp_ticker_pane_ParamLimits

0x4b1b,	// (0x0003bf19) form2_midp_field_pane

0x4b3f,	// (0x0003bf3d) scroll_pane_cp51

0x4b5f,	// (0x0003bf5d) form2_midp_button_pane_ParamLimits

0x4b5f,	// (0x0003bf5d) form2_midp_button_pane

0x4b71,	// (0x0003bf6f) form2_midp_content_pane_ParamLimits

0x4b71,	// (0x0003bf6f) form2_midp_content_pane

0x4b8b,	// (0x0003bf89) form2_midp_field_choice_group_pane

0x4b93,	// (0x0003bf91) form2_midp_field_pane_g1

0x4b9b,	// (0x0003bf99) form2_midp_field_pane_g2

0x4ba3,	// (0x0003bfa1) form2_midp_field_pane_g3

0x4bab,	// (0x0003bfa9) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x00046ee1) form2_midp_field_pane_g

0x4bb3,	// (0x0003bfb1) form2_midp_gauge_slider_pane

0x4bbb,	// (0x0003bfb9) form2_midp_gauge_wait_pane

0x4bc3,	// (0x0003bfc1) form2_midp_image_pane_ParamLimits

0x4bc3,	// (0x0003bfc1) form2_midp_image_pane

0xcc00,	// (0x00043ffe) form2_midp_label_pane_ParamLimits

0xcc00,	// (0x00043ffe) form2_midp_label_pane

0xcc19,	// (0x00044017) form2_midp_label_pane_cp_ParamLimits

0xcc19,	// (0x00044017) form2_midp_label_pane_cp

0x4c18,	// (0x0003c016) form2_midp_string_pane_ParamLimits

0x4c18,	// (0x0003c016) form2_midp_string_pane

0xd732,	// (0x00044b30) form2_midp_text_pane_ParamLimits

0xd732,	// (0x00044b30) form2_midp_text_pane

0x4c2a,	// (0x0003c028) form2_midp_time_pane

0x4c3a,	// (0x0003c038) input_focus_pane_cp51_ParamLimits

0x4c3a,	// (0x0003c038) input_focus_pane_cp51

0xcc38,	// (0x00044036) form2_midp_label_pane_t1_ParamLimits

0xcc38,	// (0x00044036) form2_midp_label_pane_t1

0xd74b,	// (0x00044b49) form2_mdip_text_pane_t1_ParamLimits

0xd74b,	// (0x00044b49) form2_mdip_text_pane_t1

0xd769,	// (0x00044b67) form2_midp_time_pane_t1

0x4c9b,	// (0x0003c099) form2_midp_gauge_slider_pane_t1

0xcc78,	// (0x00044076) form2_midp_gauge_slider_pane_t2

0xcc8a,	// (0x00044088) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x00046eea) form2_midp_gauge_slider_pane_t

0x4cd1,	// (0x0003c0cf) form2_midp_slider_pane

0x4cdd,	// (0x0003c0db) form2_midp_gauge_wait_pane_t1

0x4ceb,	// (0x0003c0e9) form2_midp_wait_pane_ParamLimits

0x4ceb,	// (0x0003c0e9) form2_midp_wait_pane

0xc12c,	// (0x0004352a) list_single_2graphic_pane_cp4_ParamLimits

0xc12c,	// (0x0004352a) list_single_2graphic_pane_cp4

0xcc9c,	// (0x0004409a) list_single_midp_graphic_pane_cp_ParamLimits

0xcc9c,	// (0x0004409a) list_single_midp_graphic_pane_cp

0xb3e7,	// (0x000427e5) list_highlight_pane_cp20

0x4d3e,	// (0x0003c13c) list_single_2graphic_pane_g1_cp4

0x4347,	// (0x0003b745) list_single_2graphic_pane_g2_cp4

0x4d46,	// (0x0003c144) list_single_2graphic_pane_t1_cp4

0xb443,	// (0x00042841) list_highlight_pane_cp21

0x4d55,	// (0x0003c153) list_single_midp_graphic_pane_g4_cp

0x4d64,	// (0x0003c162) list_single_midp_graphic_pane_t1_cp

0xccbb,	// (0x000440b9) form2_mdip_string_pane_t1_ParamLimits

0xccbb,	// (0x000440b9) form2_mdip_string_pane_t1

0xb3e7,	// (0x000427e5) bg_wml_button_pane_cp2

0xb3dd,	// (0x000427db) form2_midp_image_pane_g1

0xd2eb,	// (0x000446e9) list_double_large_graphic_pane_g5_ParamLimits

0xd2eb,	// (0x000446e9) list_double_large_graphic_pane_g5

0x9de2,	// (0x000411e0) midp_form_pane_ParamLimits

0xb443,	// (0x00042841) main_apps_wheel_pane_ParamLimits

0xa588,	// (0x00041986) popup_preview_window_ParamLimits

0xa588,	// (0x00041986) popup_preview_window

0xa855,	// (0x00041c53) popup_touch_info_window_ParamLimits

0xa855,	// (0x00041c53) popup_touch_info_window

0xa873,	// (0x00041c71) popup_touch_menu_window_ParamLimits

0xa873,	// (0x00041c71) popup_touch_menu_window

0xb3d3,	// (0x000427d1) bg_popup_sub_pane_cp6

0x4e7a,	// (0x0003c278) list_touch_menu_pane

0xcd2f,	// (0x0004412d) list_single_touch_menu_pane_ParamLimits

0xcd2f,	// (0x0004412d) list_single_touch_menu_pane

0xcd43,	// (0x00044141) list_single_touch_menu_pane_t1

0xb443,	// (0x00042841) bg_popup_sub_pane_cp7_ParamLimits

0xb443,	// (0x00042841) bg_popup_sub_pane_cp7

0x4ea6,	// (0x0003c2a4) heading_sub_pane

0x4eae,	// (0x0003c2ac) list_touch_info_pane_ParamLimits

0x4eae,	// (0x0003c2ac) list_touch_info_pane

0x4ebd,	// (0x0003c2bb) list_single_touch_info_pane_ParamLimits

0x4ebd,	// (0x0003c2bb) list_single_touch_info_pane

0x4ecf,	// (0x0003c2cd) list_single_touch_info_pane_t1

0x4edd,	// (0x0003c2db) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x00046ef8) list_single_touch_info_pane_t

0x2138,	// (0x00039536) bg_popup_heading_pane_cp

0x4eeb,	// (0x0003c2e9) heading_sub_pane_t1

0x29ff,	// (0x00039dfd) bg_popup_preview_window_pane_cp_ParamLimits

0x29ff,	// (0x00039dfd) bg_popup_preview_window_pane_cp

0x4ea6,	// (0x0003c2a4) heading_preview_pane

0x4eae,	// (0x0003c2ac) list_preview_pane_ParamLimits

0x4eae,	// (0x0003c2ac) list_preview_pane

0x4ef9,	// (0x0003c2f7) popup_preview_window_g1

0x4ebd,	// (0x0003c2bb) list_single_preview_pane_ParamLimits

0x4ebd,	// (0x0003c2bb) list_single_preview_pane

0x4f01,	// (0x0003c2ff) list_single_preview_pane_g1

0x4f09,	// (0x0003c307) list_single_preview_pane_t1

0x4ecf,	// (0x0003c2cd) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x00046efd) list_single_preview_pane_t

0x4f17,	// (0x0003c315) bg_popup_heading_pane_cp2_ParamLimits

0x4f17,	// (0x0003c315) bg_popup_heading_pane_cp2

0x4f2d,	// (0x0003c32b) heading_preview_pane_g1

0x4f35,	// (0x0003c333) heading_preview_pane_t1_ParamLimits

0x4f35,	// (0x0003c333) heading_preview_pane_t1

0xb496,	// (0x00042894) soft_indicator_pane_t1_ParamLimits

0xb771,	// (0x00042b6f) scroll_pane_ParamLimits

0xbafb,	// (0x00042ef9) scroll_sc2_left_pane

0xbb04,	// (0x00042f02) scroll_sc2_right_pane

0xbb23,	// (0x00042f21) scroll_bg_pane_g1_ParamLimits

0xbb38,	// (0x00042f36) scroll_bg_pane_g2_ParamLimits

0xbb50,	// (0x00042f4e) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x00046ad2) scroll_bg_pane_g_ParamLimits

0xbb23,	// (0x00042f21) scroll_handle_pane_g1_ParamLimits

0xbb65,	// (0x00042f63) scroll_handle_pane_g2_ParamLimits

0xbb50,	// (0x00042f4e) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x00046ad9) scroll_handle_pane_g_ParamLimits

0xa12f,	// (0x0004152d) popup_choice_list_window_ParamLimits

0xa12f,	// (0x0004152d) popup_choice_list_window

0x28d5,	// (0x00039cd3) choice_list_pane

0x2957,	// (0x00039d55) cell_toolbar_pane_t1

0x297f,	// (0x00039d7d) toolbar_button_pane_ParamLimits

0x3a2f,	// (0x0003ae2d) ai_gene_pane_1_t2_ParamLimits

0x3a2f,	// (0x0003ae2d) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x00046cf5) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x00046cf5) ai_gene_pane_1_t

0x4f52,	// (0x0003c350) scroll_sc2_left_pane_g1

0x4f52,	// (0x0003c350) scroll_sc2_right_pane_g1

0x247e,	// (0x0003987c) bg_popup_sub_pane_cp10

0x4f5c,	// (0x0003c35a) list_choice_list_pane

0xcd51,	// (0x0004414f) list_single_choice_list_pane_ParamLimits

0xcd51,	// (0x0004414f) list_single_choice_list_pane

0xcd65,	// (0x00044163) list_single_choice_list_pane_g1

0x999d,	// (0x00040d9b) list_single_choice_list_pane_t1_ParamLimits

0x999d,	// (0x00040d9b) list_single_choice_list_pane_t1

0x4f90,	// (0x0003c38e) choice_list_pane_g1

0xcd6d,	// (0x0004416b) choice_list_pane_t1

0xb3d3,	// (0x000427d1) input_focus_pane_cp11

0xba70,	// (0x00042e6e) title_pane_stacon_g2_ParamLimits

0xba70,	// (0x00042e6e) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x00046ab8) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x00046ab8) title_pane_stacon_g

0x2138,	// (0x00039536) cursor_press_pane

0xa1d6,	// (0x000415d4) popup_fep_hwr_window_ParamLimits

0xa1d6,	// (0x000415d4) popup_fep_hwr_window

0x04db,	// (0x000378d9) popup_fep_vkb_window_ParamLimits

0x04db,	// (0x000378d9) popup_fep_vkb_window

0xcd7b,	// (0x00044179) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x00046f26) fep_vkb_side_pane_g_ParamLimits

0x0fa6,	// (0x000383a4) fep_hwr_candidate_pane_ParamLimits

0x0fa6,	// (0x000383a4) fep_hwr_candidate_pane

0x0fd0,	// (0x000383ce) fep_hwr_side_pane_ParamLimits

0x0fd0,	// (0x000383ce) fep_hwr_side_pane

0x0ff0,	// (0x000383ee) fep_hwr_top_pane_ParamLimits

0x0ff0,	// (0x000383ee) fep_hwr_top_pane

0x1008,	// (0x00038406) fep_hwr_write_pane_ParamLimits

0x1008,	// (0x00038406) fep_hwr_write_pane

0xfb28,	// (0x00046f26) fep_vkb_side_pane_g

0x4fae,	// (0x0003c3ac) fep_hwr_top_pane_g1

0x4fc0,	// (0x0003c3be) fep_hwr_top_pane_g2

0x1042,	// (0x00038440) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x00046f02) fep_hwr_top_pane_g

0x1057,	// (0x00038455) fep_hwr_top_text_pane

0xbc28,	// (0x00043026) fep_hwr_top_text_pane_g1

0x4ff6,	// (0x0003c3f4) fep_hwr_top_text_pane_t1

0x114d,	// (0x0003854b) fep_hwr_candidate_pane_g1

0x523b,	// (0x0003c639) fep_vkb_keypad_pane_g3_ParamLimits

0x523b,	// (0x0003c639) fep_vkb_keypad_pane_g3

0x5263,	// (0x0003c661) fep_vkb_keypad_pane_g4_ParamLimits

0x5263,	// (0x0003c661) fep_vkb_keypad_pane_g4

0x52d2,	// (0x0003c6d0) fep_vkb_bottom_pane_g2_ParamLimits

0x52d2,	// (0x0003c6d0) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x00046f2d) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x00046f2d) fep_vkb_bottom_pane_g

0x4f52,	// (0x0003c350) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x00046f37) cell_vkb_side_pane_g

0x535d,	// (0x0003c75b) cell_vkb_side_pane_t1

0x536b,	// (0x0003c769) cell_vkb_side_pane_t1_copy1

0x4f52,	// (0x0003c350) bg_fep_vkb_candidate_pane_g2

0x5497,	// (0x0003c895) cell_vkb_candidate_pane_ParamLimits

0x5004,	// (0x0003c402) aid_size_cell_vkb_ParamLimits

0x5004,	// (0x0003c402) aid_size_cell_vkb

0x5497,	// (0x0003c895) cell_vkb_candidate_pane

0x1174,	// (0x00038572) bg_popup_fep_shadow_pane_g1

0xcd95,	// (0x00044193) fep_vkb_bottom_pane_ParamLimits

0xcd95,	// (0x00044193) fep_vkb_bottom_pane

0x50c8,	// (0x0003c4c6) fep_vkb_candidate_pane_ParamLimits

0x50c8,	// (0x0003c4c6) fep_vkb_candidate_pane

0xcdba,	// (0x000441b8) fep_vkb_keypad_pane_ParamLimits

0xcdba,	// (0x000441b8) fep_vkb_keypad_pane

0xcdef,	// (0x000441ed) fep_vkb_side_pane_ParamLimits

0xcdef,	// (0x000441ed) fep_vkb_side_pane

0xce2b,	// (0x00044229) fep_vkb_top_pane_ParamLimits

0xce2b,	// (0x00044229) fep_vkb_top_pane

0x5194,	// (0x0003c592) fep_vkb_top_pane_g1_ParamLimits

0x5194,	// (0x0003c592) fep_vkb_top_pane_g1

0x51a3,	// (0x0003c5a1) fep_vkb_top_pane_g2_ParamLimits

0x51a3,	// (0x0003c5a1) fep_vkb_top_pane_g2

0x51b2,	// (0x0003c5b0) fep_vkb_top_pane_g3_ParamLimits

0x51b2,	// (0x0003c5b0) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x00046f1d) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x00046f1d) fep_vkb_top_pane_g

0x51d0,	// (0x0003c5ce) fep_vkb_top_text_pane_ParamLimits

0x51d0,	// (0x0003c5ce) fep_vkb_top_text_pane

0xce60,	// (0x0004425e) fep_vkb_side_pane_g1_ParamLimits

0xce60,	// (0x0004425e) fep_vkb_side_pane_g1

0x522a,	// (0x0003c628) grid_vkb_side_pane_ParamLimits

0x522a,	// (0x0003c628) grid_vkb_side_pane

0x117c,	// (0x0003857a) bg_popup_fep_shadow_pane_g2

0x1185,	// (0x00038583) bg_popup_fep_shadow_pane_g3

0x118d,	// (0x0003858b) bg_popup_fep_shadow_pane_g4

0x1196,	// (0x00038594) bg_popup_fep_shadow_pane_g5

0x11a0,	// (0x0003859e) bg_popup_fep_shadow_pane_g6

0x11a8,	// (0x000385a6) bg_popup_fep_shadow_pane_g7

0xb865,	// (0x00042c63) bg_popup_fep_shadow_pane_g8

0x5281,	// (0x0003c67f) grid_vkb_keypad_number_pane_ParamLimits

0x5281,	// (0x0003c67f) grid_vkb_keypad_number_pane

0x5291,	// (0x0003c68f) grid_vkb_keypad_pane_ParamLimits

0x5291,	// (0x0003c68f) grid_vkb_keypad_pane

0x52b7,	// (0x0003c6b5) fep_vkb_bottom_pane_g1_ParamLimits

0x52b7,	// (0x0003c6b5) fep_vkb_bottom_pane_g1

0x52e0,	// (0x0003c6de) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x52e0,	// (0x0003c6de) grid_vkb_keypad_bottom_left_pane

0x52f5,	// (0x0003c6f3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x52f5,	// (0x0003c6f3) grid_vkb_keypad_bottom_right_pane

0x530a,	// (0x0003c708) fep_vkb_top_text_pane_g1

0xcea7,	// (0x000442a5) fep_vkb_top_text_pane_t1

0xceb9,	// (0x000442b7) cell_vkb_side_pane_ParamLimits

0xceb9,	// (0x000442b7) cell_vkb_side_pane

0x4f52,	// (0x0003c350) cell_vkb_side_pane_g1

0x5379,	// (0x0003c777) cell_vkb_keypad_pane_ParamLimits

0x5379,	// (0x0003c777) cell_vkb_keypad_pane

0x53ee,	// (0x0003c7ec) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x00046f4a) bg_popup_fep_shadow_pane_g

0x11ba,	// (0x000385b8) cell_hwr_side_pane_g1

0x11ba,	// (0x000385b8) cell_hwr_side_pane_g2

0x53f8,	// (0x0003c7f6) cell_vkb_keypad_pane_t1

0xcecf,	// (0x000442cd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcecf,	// (0x000442cd) cell_vkb_keypad_bottom_left_pane

0xcee4,	// (0x000442e2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcee4,	// (0x000442e2) cell_vkb_keypad_bottom_right_pane

0x4f52,	// (0x0003c350) cell_vkb_keypad_bottom_left_pane_g1

0x4f52,	// (0x0003c350) cell_vkb_keypad_bottom_right_pane_g1

0x545c,	// (0x0003c85a) cell_vkb_keypad_number_pane_ParamLimits

0x545c,	// (0x0003c85a) cell_vkb_keypad_number_pane

0x547b,	// (0x0003c879) cell_vkb_keypad_number_pane_g1

0x5485,	// (0x0003c883) cell_vkb_keypad_number_pane_g2

0x548e,	// (0x0003c88c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x00046f3c) cell_vkb_keypad_number_pane_g

0x53f8,	// (0x0003c7f6) cell_vkb_keypad_number_pane_t1

0x54b2,	// (0x0003c8b0) fep_vkb_candidate_pane_g1

0x0001,

0xfb5f,	// (0x00046f5d) cell_hwr_side_pane_g

0x54cb,	// (0x0003c8c9) cell_hwr_side_pane_t1

0x11c4,	// (0x000385c2) cell_hwr_side_pane_t1_copy1

0x11d2,	// (0x000385d0) cell_hwr_candidate_pane_g1

0x1201,	// (0x000385ff) cell_hwr_candidate_pane_t1

0x4f52,	// (0x0003c350) cell_vkb_candidate_pane_g2

0x550f,	// (0x0003c90d) cell_vkb_candidate_pane_t1

0x0f6d,	// (0x0003836b) bg_popup_fep_shadow_pane_ParamLimits

0x0f6d,	// (0x0003836b) bg_popup_fep_shadow_pane

0x1022,	// (0x00038420) bg_fep_hwr_top_pane_g4

0x4fd2,	// (0x0003c3d0) bg_hwr_side_pane_g1_ParamLimits

0x4fd2,	// (0x0003c3d0) bg_hwr_side_pane_g1

0xab1d,	// (0x00041f1b) cell_hwr_side_pane_ParamLimits

0xab1d,	// (0x00041f1b) cell_hwr_side_pane

0x10ce,	// (0x000384cc) fep_hwr_write_pane_g1_ParamLimits

0x10ce,	// (0x000384cc) fep_hwr_write_pane_g1

0x10db,	// (0x000384d9) fep_hwr_write_pane_g2_ParamLimits

0x10db,	// (0x000384d9) fep_hwr_write_pane_g2

0x10e8,	// (0x000384e6) fep_hwr_write_pane_g3_ParamLimits

0x10e8,	// (0x000384e6) fep_hwr_write_pane_g3

0xab3d,	// (0x00041f3b) fep_hwr_write_pane_g4_ParamLimits

0xab3d,	// (0x00041f3b) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x00046f09) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x00046f09) fep_hwr_write_pane_g

0x1022,	// (0x00038420) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1022,	// (0x00038420) bg_fep_hwr_candidate_pane_g2

0x110b,	// (0x00038509) cell_hwr_candidate_pane_ParamLimits

0x110b,	// (0x00038509) cell_hwr_candidate_pane

0x114d,	// (0x0003854b) fep_hwr_candidate_pane_g1_ParamLimits

0x5032,	// (0x0003c430) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5032,	// (0x0003c430) bg_popup_fep_shadow_pane_cp2

0x51c2,	// (0x0003c5c0) fep_vkb_top_pane_g4_ParamLimits

0x51c2,	// (0x0003c5c0) fep_vkb_top_pane_g4

0x5208,	// (0x0003c606) fep_vkb_side_pane_g2_ParamLimits

0x5208,	// (0x0003c606) fep_vkb_side_pane_g2

0x963d,	// (0x00040a3b) list_setting_pane_t4_ParamLimits

0x963d,	// (0x00040a3b) list_setting_pane_t4

0x96d7,	// (0x00040ad5) list_setting_number_pane_t5_ParamLimits

0x96d7,	// (0x00040ad5) list_setting_number_pane_t5

0xbc5f,	// (0x0004305d) list_double_heading_pane_cp2_ParamLimits

0xbc5f,	// (0x0004305d) list_double_heading_pane_cp2

0x551d,	// (0x0003c91b) list_double_heading_pane_g1_cp2_ParamLimits

0x551d,	// (0x0003c91b) list_double_heading_pane_g1_cp2

0x5529,	// (0x0003c927) list_double_heading_pane_g2_cp2_ParamLimits

0x5529,	// (0x0003c927) list_double_heading_pane_g2_cp2

0x553d,	// (0x0003c93b) list_double_heading_pane_t1_cp2_ParamLimits

0x553d,	// (0x0003c93b) list_double_heading_pane_t1_cp2

0x5553,	// (0x0003c951) list_double_heading_pane_t2_cp2_ParamLimits

0x5553,	// (0x0003c951) list_double_heading_pane_t2_cp2

0xb3cb,	// (0x000427c9) aid_value_unit2

0xefad,	// (0x000463ab) popup_preview_fixed_window

0xb56d,	// (0x0004296b) bg_popup_preview_window_pane_cp02

0x5565,	// (0x0003c963) list_preview_fixed_pane

0x55ab,	// (0x0003c9a9) list_empty_pane_fp_ParamLimits

0x55ab,	// (0x0003c9a9) list_empty_pane_fp

0x55ab,	// (0x0003c9a9) list_single_cale_day_pane_fp_ParamLimits

0x55ab,	// (0x0003c9a9) list_single_cale_day_pane_fp

0x55ab,	// (0x0003c9a9) list_single_graphic_heading_pane_fp_ParamLimits

0x55ab,	// (0x0003c9a9) list_single_graphic_heading_pane_fp

0x55ab,	// (0x0003c9a9) list_single_graphic_pane_fp_ParamLimits

0x55ab,	// (0x0003c9a9) list_single_graphic_pane_fp

0x55ab,	// (0x0003c9a9) list_single_heading_pane_fp_ParamLimits

0x55ab,	// (0x0003c9a9) list_single_heading_pane_fp

0x55ab,	// (0x0003c9a9) list_single_pane_fp_ParamLimits

0x55ab,	// (0x0003c9a9) list_single_pane_fp

0x55c1,	// (0x0003c9bf) list_single_pane_fp_g1_ParamLimits

0x55c1,	// (0x0003c9bf) list_single_pane_fp_g1

0xd789,	// (0x00044b87) list_single_pane_fp_g2_ParamLimits

0xd789,	// (0x00044b87) list_single_pane_fp_g2

0xd795,	// (0x00044b93) list_single_pane_fp_g3_ParamLimits

0xd795,	// (0x00044b93) list_single_pane_fp_g3

0x55cd,	// (0x0003c9cb) list_single_pane_fp_g4_ParamLimits

0x55cd,	// (0x0003c9cb) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x00046f70) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x00046f70) list_single_pane_fp_g

0xd7a9,	// (0x00044ba7) list_single_pane_fp_t1_ParamLimits

0xd7a9,	// (0x00044ba7) list_single_pane_fp_t1

0xd7c0,	// (0x00044bbe) list_single_graphic_pane_fp_g1_ParamLimits

0xd7c0,	// (0x00044bbe) list_single_graphic_pane_fp_g1

0x55c1,	// (0x0003c9bf) list_single_graphic_pane_fp_g2_ParamLimits

0x55c1,	// (0x0003c9bf) list_single_graphic_pane_fp_g2

0xd789,	// (0x00044b87) list_single_graphic_pane_fp_g3_ParamLimits

0xd789,	// (0x00044b87) list_single_graphic_pane_fp_g3

0xd795,	// (0x00044b93) list_single_graphic_pane_fp_g4_ParamLimits

0xd795,	// (0x00044b93) list_single_graphic_pane_fp_g4

0x55cd,	// (0x0003c9cb) list_single_graphic_pane_fp_g5_ParamLimits

0x55cd,	// (0x0003c9cb) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x00046f79) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x00046f79) list_single_graphic_pane_fp_g

0xd7cc,	// (0x00044bca) list_single_graphic_pane_fp_t1_ParamLimits

0xd7cc,	// (0x00044bca) list_single_graphic_pane_fp_t1

0xd7c0,	// (0x00044bbe) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd7c0,	// (0x00044bbe) list_single_graphic_heading_pane_fp_g1

0x55c1,	// (0x0003c9bf) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x55c1,	// (0x0003c9bf) list_single_graphic_heading_pane_fp_g2

0xd789,	// (0x00044b87) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd789,	// (0x00044b87) list_single_graphic_heading_pane_fp_g3

0xd795,	// (0x00044b93) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd795,	// (0x00044b93) list_single_graphic_heading_pane_fp_g4

0x55cd,	// (0x0003c9cb) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x55cd,	// (0x0003c9cb) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00046f79) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00046f79) list_single_graphic_heading_pane_fp_g

0xd7e2,	// (0x00044be0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd7e2,	// (0x00044be0) list_single_graphic_heading_pane_fp_t1

0xd7f8,	// (0x00044bf6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd7f8,	// (0x00044bf6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x00046f84) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x00046f84) list_single_graphic_heading_pane_fp_t

0xd80a,	// (0x00044c08) list_single_cale_day_pane_fp_g1_ParamLimits

0xd80a,	// (0x00044c08) list_single_cale_day_pane_fp_g1

0x55d9,	// (0x0003c9d7) list_single_cale_day_pane_fp_g2_ParamLimits

0x55d9,	// (0x0003c9d7) list_single_cale_day_pane_fp_g2

0xd842,	// (0x00044c40) list_single_cale_day_pane_fp_g3_ParamLimits

0xd842,	// (0x00044c40) list_single_cale_day_pane_fp_g3

0xd86a,	// (0x00044c68) list_single_cale_day_pane_fp_g4_ParamLimits

0xd86a,	// (0x00044c68) list_single_cale_day_pane_fp_g4

0xd88e,	// (0x00044c8c) list_single_cale_day_pane_fp_g5_ParamLimits

0xd88e,	// (0x00044c8c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x00046f89) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x00046f89) list_single_cale_day_pane_fp_g

0xd8b2,	// (0x00044cb0) list_single_cale_day_pane_fp_t1_ParamLimits

0xd8b2,	// (0x00044cb0) list_single_cale_day_pane_fp_t1

0xd8d8,	// (0x00044cd6) list_single_cale_day_pane_fp_t2_ParamLimits

0xd8d8,	// (0x00044cd6) list_single_cale_day_pane_fp_t2

0xd8f1,	// (0x00044cef) list_single_cale_day_pane_fp_t3_ParamLimits

0xd8f1,	// (0x00044cef) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x00046f94) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x00046f94) list_single_cale_day_pane_fp_t

0x55c1,	// (0x0003c9bf) list_empty_pane_fp_g1_ParamLimits

0x55c1,	// (0x0003c9bf) list_empty_pane_fp_g1

0xd90a,	// (0x00044d08) list_empty_pane_fp_t1

0xd918,	// (0x00044d16) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x00046f9b) list_empty_pane_fp_t

0x55c1,	// (0x0003c9bf) list_single_heading_pane_fp_g1_ParamLimits

0x55c1,	// (0x0003c9bf) list_single_heading_pane_fp_g1

0xd789,	// (0x00044b87) list_single_heading_pane_fp_g2_ParamLimits

0xd789,	// (0x00044b87) list_single_heading_pane_fp_g2

0xd795,	// (0x00044b93) list_single_heading_pane_fp_g3_ParamLimits

0xd795,	// (0x00044b93) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x00046fa0) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x00046fa0) list_single_heading_pane_fp_g

0xd926,	// (0x00044d24) list_single_heading_pane_fp_t1_ParamLimits

0xd926,	// (0x00044d24) list_single_heading_pane_fp_t1

0xd938,	// (0x00044d36) list_single_heading_pane_fp_t2_ParamLimits

0xd938,	// (0x00044d36) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x00046fa7) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x00046fa7) list_single_heading_pane_fp_t

0x99e9,	// (0x00040de7) aid_size_cell_fast

0xb550,	// (0x0004294e) soft_indicator_pane_cp1_t1

0x99f2,	// (0x00040df0) cell_app_pane_cp2_ParamLimits

0x99f2,	// (0x00040df0) cell_app_pane_cp2

0x0f8f,	// (0x0003838d) fep_hwr_candidate_drop_down_list_pane

0x1167,	// (0x00038565) fep_hwr_candidate_pane_g3_ParamLimits

0x1167,	// (0x00038565) fep_hwr_candidate_pane_g3

0xd77c,	// (0x00044b7a) fep_hwr_candidate_pane_g4_ParamLimits

0xd77c,	// (0x00044b7a) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x00046f16) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x00046f16) fep_hwr_candidate_pane_g

0x50b7,	// (0x0003c4b5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x50b7,	// (0x0003c4b5) fep_vkb_candidate_drop_down_list_pane

0x54ba,	// (0x0003c8b8) fep_vkb_candidate_pane_g3

0x54c2,	// (0x0003c8c0) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x00046f43) fep_vkb_candidate_pane_g

0x11d2,	// (0x000385d0) cell_hwr_candidate_pane_g1_ParamLimits

0x11e0,	// (0x000385de) cell_hwr_candidate_pane_g3_ParamLimits

0x11e0,	// (0x000385de) cell_hwr_candidate_pane_g3

0x5cc9,	// (0x0003d0c7) cell_hwr_candidate_pane_g4_ParamLimits

0x5cc9,	// (0x0003d0c7) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x00046f62) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x00046f62) cell_hwr_candidate_pane_g

0x54d9,	// (0x0003c8d7) cell_vkb_candidate_pane_g3_ParamLimits

0x54d9,	// (0x0003c8d7) cell_vkb_candidate_pane_g3

0x54f4,	// (0x0003c8f2) cell_vkb_candidate_pane_g4_ParamLimits

0x54f4,	// (0x0003c8f2) cell_vkb_candidate_pane_g4

0xceff,	// (0x000442fd) cell_app_pane_cp2_g1_ParamLimits

0xceff,	// (0x000442fd) cell_app_pane_cp2_g1

0x5603,	// (0x0003ca01) cell_app_pane_cp2_g2_ParamLimits

0x5603,	// (0x0003ca01) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x00046fac) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x00046fac) cell_app_pane_cp2_g

0x560f,	// (0x0003ca0d) cell_app_pane_cp2_t1_ParamLimits

0x560f,	// (0x0003ca0d) cell_app_pane_cp2_t1

0xb7f5,	// (0x00042bf3) grid_highlight_pane_cp1_ParamLimits

0xb7f5,	// (0x00042bf3) grid_highlight_pane_cp1

0x121f,	// (0x0003861d) cell_hwr_candidate_pane_cp1_ParamLimits

0x121f,	// (0x0003861d) cell_hwr_candidate_pane_cp1

0x11d2,	// (0x000385d0) fep_hwr_candidate_drop_down_list_pane_g1

0x123e,	// (0x0003863c) fep_hwr_candidate_drop_down_list_pane_g2

0x124b,	// (0x00038649) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x00046fb1) fep_hwr_candidate_drop_down_list_pane_g

0x1258,	// (0x00038656) fep_hwr_candidate_drop_down_list_scroll_pane

0x1261,	// (0x0003865f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1261,	// (0x0003865f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x126e,	// (0x0003866c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x126e,	// (0x0003866c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x127b,	// (0x00038679) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x127b,	// (0x00038679) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1288,	// (0x00038686) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1288,	// (0x00038686) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x12a3,	// (0x000386a1) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x12a3,	// (0x000386a1) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x12be,	// (0x000386bc) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x12be,	// (0x000386bc) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x12d9,	// (0x000386d7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x12d9,	// (0x000386d7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x12f4,	// (0x000386f2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x12f4,	// (0x000386f2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x00046fb8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x00046fb8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5621,	// (0x0003ca1f) cell_vkb_candidate_pane_cp1_ParamLimits

0x5621,	// (0x0003ca1f) cell_vkb_candidate_pane_cp1

0x51c2,	// (0x0003c5c0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x51c2,	// (0x0003c5c0) fep_vkb_candidate_drop_down_list_pane_g1

0x5641,	// (0x0003ca3f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5641,	// (0x0003ca3f) fep_vkb_candidate_drop_down_list_pane_g2

0x564e,	// (0x0003ca4c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x564e,	// (0x0003ca4c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x00046fc9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x00046fc9) fep_vkb_candidate_drop_down_list_pane_g

0x565b,	// (0x0003ca59) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x565b,	// (0x0003ca59) fep_vkb_candidate_drop_down_list_scroll_pane

0x5668,	// (0x0003ca66) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5668,	// (0x0003ca66) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5675,	// (0x0003ca73) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5675,	// (0x0003ca73) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5681,	// (0x0003ca7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5681,	// (0x0003ca7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x568d,	// (0x0003ca8b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x568d,	// (0x0003ca8b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x56ae,	// (0x0003caac) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x56ae,	// (0x0003caac) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x56cf,	// (0x0003cacd) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x56cf,	// (0x0003cacd) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x56f0,	// (0x0003caee) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x56f0,	// (0x0003caee) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5711,	// (0x0003cb0f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5711,	// (0x0003cb0f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00046fd0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00046fd0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8dd1,	// (0x000401cf) title_pane_g1_ParamLimits

0x8de4,	// (0x000401e2) title_pane_g2_ParamLimits

0xf54e,	// (0x0004694c) title_pane_g_ParamLimits

0xbc18,	// (0x00043016) aid_call2_pane

0xbc20,	// (0x0004301e) aid_call_pane

0xbc28,	// (0x00043026) popup_clock_analogue_window_g1

0xbc28,	// (0x00043026) popup_clock_analogue_window_g2

0xf1e6,	// (0x000465e4) popup_clock_analogue_window_g3

0xf1ef,	// (0x000465ed) popup_clock_analogue_window_g4

0xb3dd,	// (0x000427db) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x00046ae7) popup_clock_analogue_window_g

0xf1f7,	// (0x000465f5) popup_clock_analogue_window_t1

0xf205,	// (0x00046603) clock_digital_number_pane_ParamLimits

0xf205,	// (0x00046603) clock_digital_number_pane

0xf211,	// (0x0004660f) clock_digital_number_pane_cp02_ParamLimits

0xf211,	// (0x0004660f) clock_digital_number_pane_cp02

0xf21d,	// (0x0004661b) clock_digital_number_pane_cp03_ParamLimits

0xf21d,	// (0x0004661b) clock_digital_number_pane_cp03

0xf229,	// (0x00046627) clock_digital_number_pane_cp04_ParamLimits

0xf229,	// (0x00046627) clock_digital_number_pane_cp04

0xf235,	// (0x00046633) clock_digital_separator_pane_ParamLimits

0xf235,	// (0x00046633) clock_digital_separator_pane

0xf241,	// (0x0004663f) popup_clock_digital_window_t1_ParamLimits

0xf241,	// (0x0004663f) popup_clock_digital_window_t1

0xb3dd,	// (0x000427db) clock_digital_number_pane_g1

0xb3dd,	// (0x000427db) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x00046af2) clock_digital_number_pane_g

0xb3dd,	// (0x000427db) clock_digital_separator_pane_g1

0xb3dd,	// (0x000427db) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x00046af2) clock_digital_separator_pane_g

0xbceb,	// (0x000430e9) aid_fill_nsta_ParamLimits

0xbe21,	// (0x0004321f) indicator_nsta_pane_ParamLimits

0x2765,	// (0x00039b63) popup_clock_analogue_window

0x2765,	// (0x00039b63) popup_clock_digital_window

0xcb1d,	// (0x00043f1b) grid_indicator_nsta_pane_ParamLimits

0x4963,	// (0x0003bd61) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x00046e96) clock_nsta_pane_t

0xf1c7,	// (0x000465c5) aid_size_max_handle

0x9ad0,	// (0x00040ece) aid_size_min_handle

0x2138,	// (0x00039536) editor_scroll_pane

0x572c,	// (0x0003cb2a) ex_editor_pane

0xb914,	// (0x00042d12) scroll_pane_cp13

0xb79d,	// (0x00042b9b) scroll_pane_cp14

0xbc57,	// (0x00043055) scroll_pane_cp36

0x9b9a,	// (0x00040f98) list_single_graphic_hl_pane_cp2_ParamLimits

0x9b9a,	// (0x00040f98) list_single_graphic_hl_pane_cp2

0xc909,	// (0x00043d07) list_single_graphic_hl_pane_ParamLimits

0xc909,	// (0x00043d07) list_single_graphic_hl_pane

0xab52,	// (0x00041f50) aid_size_min_hl_cp1

0x5734,	// (0x0003cb32) list_highlight_pane_cp34_ParamLimits

0x5734,	// (0x0003cb32) list_highlight_pane_cp34

0x5745,	// (0x0003cb43) list_single_graphic_hl_pane_g1_ParamLimits

0x5745,	// (0x0003cb43) list_single_graphic_hl_pane_g1

0xab5b,	// (0x00041f59) list_single_graphic_hl_pane_g2_ParamLimits

0xab5b,	// (0x00041f59) list_single_graphic_hl_pane_g2

0xab5b,	// (0x00041f59) list_single_graphic_hl_pane_g3_ParamLimits

0xab5b,	// (0x00041f59) list_single_graphic_hl_pane_g3

0xd94e,	// (0x00044d4c) list_single_graphic_hl_pane_g4_ParamLimits

0xd94e,	// (0x00044d4c) list_single_graphic_hl_pane_g4

0xab67,	// (0x00041f65) list_single_graphic_hl_pane_g5_ParamLimits

0xab67,	// (0x00041f65) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x00046fe1) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x00046fe1) list_single_graphic_hl_pane_g

0xab7b,	// (0x00041f79) list_single_graphic_hl_pane_t1_ParamLimits

0xab7b,	// (0x00041f79) list_single_graphic_hl_pane_t1

0x5752,	// (0x0003cb50) aid_size_min_hl_cp2

0x575b,	// (0x0003cb59) list_highlight_pane_cp34_cp2_ParamLimits

0x575b,	// (0x0003cb59) list_highlight_pane_cp34_cp2

0x5745,	// (0x0003cb43) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5745,	// (0x0003cb43) list_single_graphic_hl_pane_g1_cp2

0x5768,	// (0x0003cb66) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5768,	// (0x0003cb66) list_single_graphic_hl_pane_g2_cp2

0xcf1d,	// (0x0004431b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcf1d,	// (0x0004431b) list_single_graphic_hl_pane_g3_cp2

0x2071,	// (0x0003946f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2071,	// (0x0003946f) list_single_graphic_hl_pane_g4_cp2

0x5782,	// (0x0003cb80) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5782,	// (0x0003cb80) list_single_graphic_hl_pane_g5_cp2

0x9fb3,	// (0x000413b1) control_pane_g4_ParamLimits

0x9fb3,	// (0x000413b1) control_pane_g4

0x247e,	// (0x0003987c) bg_popup_sub_pane_cp10_ParamLimits

0x4f5c,	// (0x0003c35a) list_choice_list_pane_ParamLimits

0x4f6b,	// (0x0003c369) scroll_pane_cp23

0xb56d,	// (0x0004296b) bg_popup_preview_window_pane_cp02_ParamLimits

0x5565,	// (0x0003c963) list_preview_fixed_pane_ParamLimits

0x557b,	// (0x0003c979) list_preview_fixed_pane_cp_ParamLimits

0x557b,	// (0x0003c979) list_preview_fixed_pane_cp

0x5587,	// (0x0003c985) popup_preview_fixed_window_g1_ParamLimits

0x5587,	// (0x0003c985) popup_preview_fixed_window_g1

0x5593,	// (0x0003c991) popup_preview_fixed_window_g2_ParamLimits

0x5593,	// (0x0003c991) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x00046f69) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x00046f69) popup_preview_fixed_window_g

0xf0b5,	// (0x000464b3) aid_navi_side_left_pane_ParamLimits

0xf0ca,	// (0x000464c8) aid_navi_side_right_pane_ParamLimits

0xf0e2,	// (0x000464e0) navi_icon_pane_stacon_ParamLimits

0xf0f6,	// (0x000464f4) navi_navi_pane_stacon_ParamLimits

0xf0e2,	// (0x000464e0) navi_text_pane_stacon_ParamLimits

0xeed2,	// (0x000462d0) main_text_info_pane

0x57ac,	// (0x0003cbaa) listscroll_text_info_pane

0x57b4,	// (0x0003cbb2) list_text_info_pane_ParamLimits

0x57b4,	// (0x0003cbb2) list_text_info_pane

0x57c3,	// (0x0003cbc1) scroll_pane_cp24_ParamLimits

0x57c3,	// (0x0003cbc1) scroll_pane_cp24

0xcf2b,	// (0x00044329) list_text_info_pane_t1_ParamLimits

0xcf2b,	// (0x00044329) list_text_info_pane_t1

0xa14b,	// (0x00041549) popup_fast_swap2_window_ParamLimits

0xa14b,	// (0x00041549) popup_fast_swap2_window

0x5815,	// (0x0003cc13) aid_size_cell_fast2

0xb3d3,	// (0x000427d1) bg_popup_window_pane_cp17

0x2df2,	// (0x0003a1f0) heading_pane_cp2

0xb6a1,	// (0x00042a9f) listscroll_fast2_pane

0x581f,	// (0x0003cc1d) grid_fast2_pane

0x5829,	// (0x0003cc27) listscroll_fast2_pane_g1

0x5831,	// (0x0003cc2f) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x00046fec) listscroll_fast2_pane_g

0xb914,	// (0x00042d12) scroll_pane_cp26

0x583b,	// (0x0003cc39) cell_fast2_pane_ParamLimits

0x583b,	// (0x0003cc39) cell_fast2_pane

0x5850,	// (0x0003cc4e) cell_fast2_pane_g1

0x5859,	// (0x0003cc57) cell_fast2_pane_g2

0x5862,	// (0x0003cc60) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x00046ff1) cell_fast2_pane_g

0xb6d4,	// (0x00042ad2) grid_highlight_pane_cp9

0x039f,	// (0x0003779d) main_eswt_pane_ParamLimits

0x039f,	// (0x0003779d) main_eswt_pane

0x57d8,	// (0x0003cbd6) list_single_text_info_pane

0x586a,	// (0x0003cc68) eswt_ctrl_button_pane

0x586a,	// (0x0003cc68) eswt_ctrl_canvas_pane

0xcf47,	// (0x00044345) eswt_ctrl_combo_pane

0x586a,	// (0x0003cc68) eswt_ctrl_default_pane

0x586a,	// (0x0003cc68) eswt_ctrl_label_pane

0x587a,	// (0x0003cc78) eswt_ctrl_wait_pane

0xcf4f,	// (0x0004434d) eswt_shell_pane

0xb3d3,	// (0x000427d1) listscroll_eswt_app_pane

0x58a2,	// (0x0003cca0) popup_eswt_tasktip_window_ParamLimits

0x58a2,	// (0x0003cca0) popup_eswt_tasktip_window

0x29ff,	// (0x00039dfd) bg_popup_window_pane_cp18

0x58b3,	// (0x0003ccb1) eswt_control_pane_g1_ParamLimits

0x58b3,	// (0x0003ccb1) eswt_control_pane_g1

0x58c0,	// (0x0003ccbe) eswt_control_pane_g2_ParamLimits

0x58c0,	// (0x0003ccbe) eswt_control_pane_g2

0x58cd,	// (0x0003cccb) eswt_control_pane_g3_ParamLimits

0x58cd,	// (0x0003cccb) eswt_control_pane_g3

0x58da,	// (0x0003ccd8) eswt_control_pane_g4_ParamLimits

0x58da,	// (0x0003ccd8) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x00046ff8) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x00046ff8) eswt_control_pane_g

0xb7f5,	// (0x00042bf3) bg_button_pane_ParamLimits

0xb7f5,	// (0x00042bf3) bg_button_pane

0xb6e9,	// (0x00042ae7) common_borders_pane_copy2_ParamLimits

0xb6e9,	// (0x00042ae7) common_borders_pane_copy2

0x58e7,	// (0x0003cce5) control_button_pane_g1_ParamLimits

0x58e7,	// (0x0003cce5) control_button_pane_g1

0x58f3,	// (0x0003ccf1) control_button_pane_g2_ParamLimits

0x58f3,	// (0x0003ccf1) control_button_pane_g2

0x58ff,	// (0x0003ccfd) control_button_pane_g3_ParamLimits

0x58ff,	// (0x0003ccfd) control_button_pane_g3

0x0002,

0xfc03,	// (0x00047001) control_button_pane_g_ParamLimits

0xfc03,	// (0x00047001) control_button_pane_g

0x5913,	// (0x0003cd11) control_button_pane_t1

0x5921,	// (0x0003cd1f) control_button_pane_t2

0x0001,

0xfc0a,	// (0x00047008) control_button_pane_t

0x298b,	// (0x00039d89) bg_button_pane_g1

0x299b,	// (0x00039d99) bg_button_pane_g2

0x2993,	// (0x00039d91) bg_button_pane_g3

0x29ab,	// (0x00039da9) bg_button_pane_g4

0x29a3,	// (0x00039da1) bg_button_pane_g5

0x29b3,	// (0x00039db1) bg_button_pane_g6

0x29bb,	// (0x00039db9) bg_button_pane_g7

0x29cb,	// (0x00039dc9) bg_button_pane_g8

0x29c3,	// (0x00039dc1) bg_button_pane_g9

0x0008,

0xf84b,	// (0x00046c49) bg_button_pane_g

0x4f17,	// (0x0003c315) common_borders_pane_ParamLimits

0x4f17,	// (0x0003c315) common_borders_pane

0x58b3,	// (0x0003ccb1) eswt_control_pane_g1_copy1_ParamLimits

0x58b3,	// (0x0003ccb1) eswt_control_pane_g1_copy1

0x58c0,	// (0x0003ccbe) eswt_control_pane_g2_copy1_ParamLimits

0x58c0,	// (0x0003ccbe) eswt_control_pane_g2_copy1

0x58cd,	// (0x0003cccb) eswt_control_pane_g3_copy1_ParamLimits

0x58cd,	// (0x0003cccb) eswt_control_pane_g3_copy1

0x58da,	// (0x0003ccd8) eswt_control_pane_g4_copy1_ParamLimits

0x58da,	// (0x0003ccd8) eswt_control_pane_g4_copy1

0x4f52,	// (0x0003c350) bg_eswt_ctrl_canvas_pane_g1

0x4f17,	// (0x0003c315) common_borders_pane_cp2_ParamLimits

0x4f17,	// (0x0003c315) common_borders_pane_cp2

0x4f17,	// (0x0003c315) common_borders_pane_cp3_ParamLimits

0x4f17,	// (0x0003c315) common_borders_pane_cp3

0x592f,	// (0x0003cd2d) separator_horizontal_pane

0x5937,	// (0x0003cd35) separator_vertical_pane

0x58b3,	// (0x0003ccb1) eswt_control_pane_g1_copy2_ParamLimits

0x58b3,	// (0x0003ccb1) eswt_control_pane_g1_copy2

0x58c0,	// (0x0003ccbe) eswt_control_pane_g2_copy2_ParamLimits

0x58c0,	// (0x0003ccbe) eswt_control_pane_g2_copy2

0x58cd,	// (0x0003cccb) eswt_control_pane_g3_copy2_ParamLimits

0x58cd,	// (0x0003cccb) eswt_control_pane_g3_copy2

0x58da,	// (0x0003ccd8) eswt_control_pane_g4_copy2_ParamLimits

0x58da,	// (0x0003ccd8) eswt_control_pane_g4_copy2

0xb3d3,	// (0x000427d1) common_borders_pane_cp4

0x5940,	// (0x0003cd3e) separator_horizontal_pane_g1

0x5949,	// (0x0003cd47) separator_horizontal_pane_g2

0x5952,	// (0x0003cd50) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x0004700d) separator_horizontal_pane_g

0x58b3,	// (0x0003ccb1) eswt_control_pane_g1_copy3_ParamLimits

0x58b3,	// (0x0003ccb1) eswt_control_pane_g1_copy3

0x58c0,	// (0x0003ccbe) eswt_control_pane_g2_copy3_ParamLimits

0x58c0,	// (0x0003ccbe) eswt_control_pane_g2_copy3

0x58cd,	// (0x0003cccb) eswt_control_pane_g3_copy3_ParamLimits

0x58cd,	// (0x0003cccb) eswt_control_pane_g3_copy3

0x58da,	// (0x0003ccd8) eswt_control_pane_g4_copy3_ParamLimits

0x58da,	// (0x0003ccd8) eswt_control_pane_g4_copy3

0xb3d3,	// (0x000427d1) common_borders_pane_cp5

0x595b,	// (0x0003cd59) separator_vertical_pane_g1

0x5964,	// (0x0003cd62) separator_vertical_pane_g2

0x596d,	// (0x0003cd6b) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x00047014) separator_vertical_pane_g

0x58b3,	// (0x0003ccb1) eswt_control_pane_g1_copy4_ParamLimits

0x58b3,	// (0x0003ccb1) eswt_control_pane_g1_copy4

0x58c0,	// (0x0003ccbe) eswt_control_pane_g2_copy4_ParamLimits

0x58c0,	// (0x0003ccbe) eswt_control_pane_g2_copy4

0x58cd,	// (0x0003cccb) eswt_control_pane_g3_copy4_ParamLimits

0x58cd,	// (0x0003cccb) eswt_control_pane_g3_copy4

0x58da,	// (0x0003ccd8) eswt_control_pane_g4_copy4_ParamLimits

0x58da,	// (0x0003ccd8) eswt_control_pane_g4_copy4

0xcf6f,	// (0x0004436d) eswt_ctrl_combo_button_pane

0xcf77,	// (0x00044375) eswt_ctrl_input_pane

0xcf7f,	// (0x0004437d) popup_choice_list_window_cp70

0xcf87,	// (0x00044385) eswt_ctrl_input_pane_t1

0xb3d3,	// (0x000427d1) input_focus_pane_cp70

0x4f17,	// (0x0003c315) bg_button_pane_cp70_ParamLimits

0x4f17,	// (0x0003c315) bg_button_pane_cp70

0xcf95,	// (0x00044393) eswt_ctrl_combo_button_pane_g1

0x59a4,	// (0x0003cda2) wait_bar_pane_cp70

0x29ff,	// (0x00039dfd) bg_popup_window_pane_cp70_ParamLimits

0x29ff,	// (0x00039dfd) bg_popup_window_pane_cp70

0x59ac,	// (0x0003cdaa) popup_eswt_tasktip_window_t1

0x59c2,	// (0x0003cdc0) wait_bar_pane_cp71_ParamLimits

0x59c2,	// (0x0003cdc0) wait_bar_pane_cp71

0x59ce,	// (0x0003cdcc) grid_eswt_app_pane

0xbafb,	// (0x00042ef9) scroll_pane_cp70

0xcf9d,	// (0x0004439b) cell_eswt_app_pane_ParamLimits

0xcf9d,	// (0x0004439b) cell_eswt_app_pane

0xcfc7,	// (0x000443c5) cell_eswt_app_pane_g1_ParamLimits

0xcfc7,	// (0x000443c5) cell_eswt_app_pane_g1

0xcff6,	// (0x000443f4) cell_eswt_app_pane_g2_ParamLimits

0xcff6,	// (0x000443f4) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x0004701b) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x0004701b) cell_eswt_app_pane_g

0xd01a,	// (0x00044418) cell_eswt_app_pane_t1_ParamLimits

0xd01a,	// (0x00044418) cell_eswt_app_pane_t1

0x5a8c,	// (0x0003ce8a) grid_highlight_pane_cp70_ParamLimits

0x5a8c,	// (0x0003ce8a) grid_highlight_pane_cp70

0x011c,	// (0x0003751a) set_content_pane_g1

0x9f45,	// (0x00041343) status_small_volume_pane

0xab91,	// (0x00041f8f) status_small_volume_pane_g1

0xab99,	// (0x00041f97) volume_small2_pane

0xaba2,	// (0x00041fa0) volume_small2_pane_g1

0xabab,	// (0x00041fa9) volume_small2_pane_g2

0xabb4,	// (0x00041fb2) volume_small2_pane_g3

0xabbd,	// (0x00041fbb) volume_small2_pane_g4

0xabc6,	// (0x00041fc4) volume_small2_pane_g5

0xabcf,	// (0x00041fcd) volume_small2_pane_g6

0xabd8,	// (0x00041fd6) volume_small2_pane_g7

0xabe1,	// (0x00041fdf) volume_small2_pane_g8

0xabea,	// (0x00041fe8) volume_small2_pane_g9

0xabf3,	// (0x00041ff1) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x00047020) volume_small2_pane_g

0x530a,	// (0x0003c708) fep_vkb_top_text_pane_g1_ParamLimits

0xcea7,	// (0x000442a5) fep_vkb_top_text_pane_t1_ParamLimits

0x559f,	// (0x0003c99d) popup_preview_fixed_window_g3_ParamLimits

0x559f,	// (0x0003c99d) popup_preview_fixed_window_g3

0xa7e8,	// (0x00041be6) popup_toolbar_trans_pane

0xc7a2,	// (0x00043ba0) aid_height_set_list_ParamLimits

0x3d3a,	// (0x0003b138) aid_size_parent_ParamLimits

0x247e,	// (0x0003987c) list_highlight_pane_cp2_ParamLimits

0x011c,	// (0x0003751a) set_content_pane_g1_ParamLimits

0xc91b,	// (0x00043d19) list_single_image_pane_ParamLimits

0xc91b,	// (0x00043d19) list_single_image_pane

0xd04c,	// (0x0004444a) aid_size_cell_image_ParamLimits

0xd04c,	// (0x0004444a) aid_size_cell_image

0xd059,	// (0x00044457) grid_single_image_pane_ParamLimits

0xd059,	// (0x00044457) grid_single_image_pane

0x5ab3,	// (0x0003ceb1) list_single_image_pane_g1_ParamLimits

0x5ab3,	// (0x0003ceb1) list_single_image_pane_g1

0x5abf,	// (0x0003cebd) list_single_image_pane_g2_ParamLimits

0x5abf,	// (0x0003cebd) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x00047035) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x00047035) list_single_image_pane_g

0x5ad3,	// (0x0003ced1) list_single_image_pane_t1_ParamLimits

0x5ad3,	// (0x0003ced1) list_single_image_pane_t1

0xd065,	// (0x00044463) cell_image_list_pane_ParamLimits

0xd065,	// (0x00044463) cell_image_list_pane

0xd079,	// (0x00044477) cell_image_list_pane_g1

0xd082,	// (0x00044480) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x0004703a) cell_image_list_pane_g

0xd08b,	// (0x00044489) aid_size_cell_tb_trans_pane

0xb7f5,	// (0x00042bf3) bg_tb_trans_pane

0xd09d,	// (0x0004449b) grid_tb_trans_pane

0x298b,	// (0x00039d89) bg_tb_trans_pane_g1

0x299b,	// (0x00039d99) bg_tb_trans_pane_g2

0x2993,	// (0x00039d91) bg_tb_trans_pane_g3

0x29ab,	// (0x00039da9) bg_tb_trans_pane_g4

0x29a3,	// (0x00039da1) bg_tb_trans_pane_g5

0x29cb,	// (0x00039dc9) bg_tb_trans_pane_g6

0x29c3,	// (0x00039dc1) bg_tb_trans_pane_g7

0x29b3,	// (0x00039db1) bg_tb_trans_pane_g8

0x29bb,	// (0x00039db9) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x0004703f) bg_tb_trans_pane_g

0xd0b1,	// (0x000444af) cell_toolbar_trans_pane_ParamLimits

0xd0b1,	// (0x000444af) cell_toolbar_trans_pane

0x4f52,	// (0x0003c350) cell_toolbar_trans_pane_g1

0xcbe4,	// (0x00043fe2) list_form2_midp_pane_t1

0xcbf2,	// (0x00043ff0) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x00046edc) list_form2_midp_pane_t

0x4b3f,	// (0x0003bf3d) scroll_pane_cp51_ParamLimits

0x4cfb,	// (0x0003c0f9) form2_midp_wait_pane_g1

0x4d04,	// (0x0003c102) form2_midp_wait_pane_g2

0x4d0d,	// (0x0003c10b) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x00046ef1) form2_midp_wait_pane_g

0xb443,	// (0x00042841) list_highlight_pane_cp21_ParamLimits

0x4d55,	// (0x0003c153) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4d64,	// (0x0003c162) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd3f7,	// (0x000447f5) list_single_2graphic_im_pane_ParamLimits

0xd3f7,	// (0x000447f5) list_single_2graphic_im_pane

0xd0d7,	// (0x000444d5) list_single_2graphic_im_pane_g1_ParamLimits

0xd0d7,	// (0x000444d5) list_single_2graphic_im_pane_g1

0xd0e8,	// (0x000444e6) list_single_2graphic_im_pane_g2_ParamLimits

0xd0e8,	// (0x000444e6) list_single_2graphic_im_pane_g2

0xd0f4,	// (0x000444f2) list_single_2graphic_im_pane_g3_ParamLimits

0xd0f4,	// (0x000444f2) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x00047052) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x00047052) list_single_2graphic_im_pane_g

0xd108,	// (0x00044506) list_single_2graphic_im_pane_t1_ParamLimits

0xd108,	// (0x00044506) list_single_2graphic_im_pane_t1

0x55ab,	// (0x0003c9a9) list_single_graphic_2heading_pane_fp_ParamLimits

0x55ab,	// (0x0003c9a9) list_single_graphic_2heading_pane_fp

0xd7c0,	// (0x00044bbe) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd7c0,	// (0x00044bbe) list_single_graphic_2heading_pane_fp_g1

0x55c1,	// (0x0003c9bf) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x55c1,	// (0x0003c9bf) list_single_graphic_2heading_pane_fp_g2

0xd789,	// (0x00044b87) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd789,	// (0x00044b87) list_single_graphic_2heading_pane_fp_g3

0xd795,	// (0x00044b93) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd795,	// (0x00044b93) list_single_graphic_2heading_pane_fp_g4

0x55cd,	// (0x0003c9cb) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x55cd,	// (0x0003c9cb) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00046f79) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00046f79) list_single_graphic_2heading_pane_fp_g

0xd95a,	// (0x00044d58) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd95a,	// (0x00044d58) list_single_graphic_2heading_pane_fp_t1

0xd7f8,	// (0x00044bf6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd7f8,	// (0x00044bf6) list_single_graphic_2heading_pane_fp_t2

0xd970,	// (0x00044d6e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd970,	// (0x00044d6e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x0004705b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x0004705b) list_single_graphic_2heading_pane_fp_t

0x4fde,	// (0x0003c3dc) fep_hwr_write_pane_g5_ParamLimits

0x4fde,	// (0x0003c3dc) fep_hwr_write_pane_g5

0x4fea,	// (0x0003c3e8) fep_hwr_write_pane_g6_ParamLimits

0x4fea,	// (0x0003c3e8) fep_hwr_write_pane_g6

0xcf4f,	// (0x0004434d) eswt_shell_pane_ParamLimits

0x29ff,	// (0x00039dfd) bg_popup_window_pane_cp18_ParamLimits

0x3c82,	// (0x0003b080) heading_pane_cp70

0x59ac,	// (0x0003cdaa) popup_eswt_tasktip_window_t1_ParamLimits

0xbd46,	// (0x00043144) aid_touch_tab_arrow_left

0xbd5c,	// (0x0004315a) aid_touch_tab_arrow_right

0x8dfc,	// (0x000401fa) title_pane_g3_ParamLimits

0x8dfc,	// (0x000401fa) title_pane_g3

0xb7bd,	// (0x00042bbb) set_value_pane_g1

0xa7e8,	// (0x00041be6) popup_toolbar_trans_pane_ParamLimits

0xd08b,	// (0x00044489) aid_size_cell_tb_trans_pane_ParamLimits

0xb7f5,	// (0x00042bf3) bg_tb_trans_pane_ParamLimits

0xd09d,	// (0x0004449b) grid_tb_trans_pane_ParamLimits

0xb56d,	// (0x0004296b) cont_note_pane_ParamLimits

0xb56d,	// (0x0004296b) cont_note_pane

0xb6e9,	// (0x00042ae7) cont_snote2_single_text_pane_ParamLimits

0xb6e9,	// (0x00042ae7) cont_snote2_single_text_pane

0xb6e9,	// (0x00042ae7) cont_snote2_single_graphic_pane_ParamLimits

0xb6e9,	// (0x00042ae7) cont_snote2_single_graphic_pane

0x3005,	// (0x0003a403) cont_note_wait_pane_ParamLimits

0x3005,	// (0x0003a403) cont_note_wait_pane

0x3005,	// (0x0003a403) cont_note_image_pane_ParamLimits

0x3005,	// (0x0003a403) cont_note_image_pane

0x5bc9,	// (0x0003cfc7) popup_note2_window_g1_ParamLimits

0x5bc9,	// (0x0003cfc7) popup_note2_window_g1

0xd146,	// (0x00044544) popup_note2_window_t1_ParamLimits

0xd146,	// (0x00044544) popup_note2_window_t1

0xd18b,	// (0x00044589) popup_note2_window_t2_ParamLimits

0xd18b,	// (0x00044589) popup_note2_window_t2

0xd986,	// (0x00044d84) popup_note2_window_t3_ParamLimits

0xd986,	// (0x00044d84) popup_note2_window_t3

0x5cea,	// (0x0003d0e8) popup_note2_window_t4_ParamLimits

0x5cea,	// (0x0003d0e8) popup_note2_window_t4

0xb5f1,	// (0x000429ef) popup_note2_window_t5_ParamLimits

0xb5f1,	// (0x000429ef) popup_note2_window_t5

0x0004,

0xfc69,	// (0x00047067) popup_note2_window_t_ParamLimits

0xfc69,	// (0x00047067) popup_note2_window_t

0x5d19,	// (0x0003d117) popup_note2_image_window_g1_ParamLimits

0x5d19,	// (0x0003d117) popup_note2_image_window_g1

0xd9cb,	// (0x00044dc9) popup_note2_image_window_g2_ParamLimits

0xd9cb,	// (0x00044dc9) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x00047072) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x00047072) popup_note2_image_window_g

0x5d37,	// (0x0003d135) popup_note2_image_window_t1_ParamLimits

0x5d37,	// (0x0003d135) popup_note2_image_window_t1

0x5d4f,	// (0x0003d14d) popup_note2_image_window_t2_ParamLimits

0x5d4f,	// (0x0003d14d) popup_note2_image_window_t2

0x5d67,	// (0x0003d165) popup_note2_image_window_t3_ParamLimits

0x5d67,	// (0x0003d165) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x00047077) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x00047077) popup_note2_image_window_t

0x3013,	// (0x0003a411) popup_note2_wait_window_g1_ParamLimits

0x3013,	// (0x0003a411) popup_note2_wait_window_g1

0x301f,	// (0x0003a41d) popup_note2_wait_window_g2_ParamLimits

0x301f,	// (0x0003a41d) popup_note2_wait_window_g2

0x302b,	// (0x0003a429) popup_note2_wait_window_g3_ParamLimits

0x302b,	// (0x0003a429) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x00046c2b) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x00046c2b) popup_note2_wait_window_g

0x5d83,	// (0x0003d181) popup_note2_wait_window_t1_ParamLimits

0x5d83,	// (0x0003d181) popup_note2_wait_window_t1

0x5da1,	// (0x0003d19f) popup_note2_wait_window_t2_ParamLimits

0x5da1,	// (0x0003d19f) popup_note2_wait_window_t2

0x5dbf,	// (0x0003d1bd) popup_note2_wait_window_t3_ParamLimits

0x5dbf,	// (0x0003d1bd) popup_note2_wait_window_t3

0x5dd1,	// (0x0003d1cf) popup_note2_wait_window_t4_ParamLimits

0x5dd1,	// (0x0003d1cf) popup_note2_wait_window_t4

0x0003,

0xfc80,	// (0x0004707e) popup_note2_wait_window_t_ParamLimits

0xfc80,	// (0x0004707e) popup_note2_wait_window_t

0x5de3,	// (0x0003d1e1) wait_bar2_pane_ParamLimits

0x5de3,	// (0x0003d1e1) wait_bar2_pane

0x5dfb,	// (0x0003d1f9) popup_snote2_single_text_window_g1_ParamLimits

0x5dfb,	// (0x0003d1f9) popup_snote2_single_text_window_g1

0x5e23,	// (0x0003d221) popup_snote2_single_text_window_t1_ParamLimits

0x5e23,	// (0x0003d221) popup_snote2_single_text_window_t1

0x5e6f,	// (0x0003d26d) popup_snote2_single_text_window_t2_ParamLimits

0x5e6f,	// (0x0003d26d) popup_snote2_single_text_window_t2

0x5ebb,	// (0x0003d2b9) popup_snote2_single_text_window_t3_ParamLimits

0x5ebb,	// (0x0003d2b9) popup_snote2_single_text_window_t3

0x5efc,	// (0x0003d2fa) popup_snote2_single_text_window_t4_ParamLimits

0x5efc,	// (0x0003d2fa) popup_snote2_single_text_window_t4

0x5f32,	// (0x0003d330) popup_snote2_single_text_window_t5_ParamLimits

0x5f32,	// (0x0003d330) popup_snote2_single_text_window_t5

0x0004,

0xfc89,	// (0x00047087) popup_snote2_single_text_window_t_ParamLimits

0xfc89,	// (0x00047087) popup_snote2_single_text_window_t

0xd9dd,	// (0x00044ddb) popup_snote2_single_graphic_window_g1_ParamLimits

0xd9dd,	// (0x00044ddb) popup_snote2_single_graphic_window_g1

0x5f85,	// (0x0003d383) popup_snote2_single_graphic_window_g2_ParamLimits

0x5f85,	// (0x0003d383) popup_snote2_single_graphic_window_g2

0x0001,

0xfc94,	// (0x00047092) popup_snote2_single_graphic_window_g_ParamLimits

0xfc94,	// (0x00047092) popup_snote2_single_graphic_window_g

0x5fad,	// (0x0003d3ab) popup_snote2_single_graphic_window_t1_ParamLimits

0x5fad,	// (0x0003d3ab) popup_snote2_single_graphic_window_t1

0x5ff9,	// (0x0003d3f7) popup_snote2_single_graphic_window_t2_ParamLimits

0x5ff9,	// (0x0003d3f7) popup_snote2_single_graphic_window_t2

0x5ebb,	// (0x0003d2b9) popup_snote2_single_graphic_window_t3_ParamLimits

0x5ebb,	// (0x0003d2b9) popup_snote2_single_graphic_window_t3

0x5efc,	// (0x0003d2fa) popup_snote2_single_graphic_window_t4_ParamLimits

0x5efc,	// (0x0003d2fa) popup_snote2_single_graphic_window_t4

0x5f32,	// (0x0003d330) popup_snote2_single_graphic_window_t5_ParamLimits

0x5f32,	// (0x0003d330) popup_snote2_single_graphic_window_t5

0x0004,

0xfc99,	// (0x00047097) popup_snote2_single_graphic_window_t_ParamLimits

0xfc99,	// (0x00047097) popup_snote2_single_graphic_window_t

0x49fc,	// (0x0003bdfa) clock_nsta_pane_cp2_t1

0x49fc,	// (0x0003bdfa) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x00046eb2) clock_nsta_pane_cp2_t

0x97c7,	// (0x00040bc5) form_field_data_wide_pane_g1_ParamLimits

0xb803,	// (0x00042c01) form_field_data_wide_pane_g2_ParamLimits

0xb803,	// (0x00042c01) form_field_data_wide_pane_g2

0xb80f,	// (0x00042c0d) form_field_data_wide_pane_g3_ParamLimits

0xb80f,	// (0x00042c0d) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x00046a6a) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x00046a6a) form_field_data_wide_pane_g

0xcb07,	// (0x00043f05) grid_touch_3_pane_ParamLimits

0xcb07,	// (0x00043f05) grid_touch_3_pane

0xda05,	// (0x00044e03) cell_touch_3_pane_ParamLimits

0xda05,	// (0x00044e03) cell_touch_3_pane

0x4f52,	// (0x0003c350) cell_touch_3_pane_g1

0x4f52,	// (0x0003c350) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x00046f37) cell_touch_3_pane_g

0xb623,	// (0x00042a21) cont_query_data_pane

0xb62b,	// (0x00042a29) cont_query_data_pane_cp1

0x6073,	// (0x0003d471) button_value_adjust_pane_cp7

0x607b,	// (0x0003d479) query_popup_pane_cp3

0xbc89,	// (0x00043087) bg_popup_sub_pane_cp22_ParamLimits

0x9c27,	// (0x00041025) navi_navi_volume_pane_cp2

0x9c36,	// (0x00041034) popup_side_volume_key_window_g2

0x9c45,	// (0x00041043) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x00046b00) popup_side_volume_key_window_g

0x9c54,	// (0x00041052) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x00046b07) popup_side_volume_key_window_t

0x9d8f,	// (0x0004118d) popup_side_volume_key_window_ParamLimits

0x94cd,	// (0x000408cb) list_double_graphic_pane_g4_ParamLimits

0x94cd,	// (0x000408cb) list_double_graphic_pane_g4

0xaa95,	// (0x00041e93) list_single_2heading_msg_pane_ParamLimits

0xaa95,	// (0x00041e93) list_single_2heading_msg_pane

0xabfc,	// (0x00041ffa) list_single_2heading_msg_pane_g1_ParamLimits

0xabfc,	// (0x00041ffa) list_single_2heading_msg_pane_g1

0xac08,	// (0x00042006) list_single_2heading_msg_pane_g2_ParamLimits

0xac08,	// (0x00042006) list_single_2heading_msg_pane_g2

0xac1b,	// (0x00042019) list_single_2heading_msg_pane_g3_ParamLimits

0xac1b,	// (0x00042019) list_single_2heading_msg_pane_g3

0xda58,	// (0x00044e56) list_single_2heading_msg_pane_g4_ParamLimits

0xda58,	// (0x00044e56) list_single_2heading_msg_pane_g4

0x0003,

0xfca4,	// (0x000470a2) list_single_2heading_msg_pane_g_ParamLimits

0xfca4,	// (0x000470a2) list_single_2heading_msg_pane_g

0xda70,	// (0x00044e6e) list_single_2heading_msg_pane_t1_ParamLimits

0xda70,	// (0x00044e6e) list_single_2heading_msg_pane_t1

0xac27,	// (0x00042025) list_single_2heading_msg_pane_t2_ParamLimits

0xac27,	// (0x00042025) list_single_2heading_msg_pane_t2

0xac92,	// (0x00042090) list_single_2heading_msg_pane_t3_ParamLimits

0xac92,	// (0x00042090) list_single_2heading_msg_pane_t3

0xda98,	// (0x00044e96) list_single_2heading_msg_pane_t4_ParamLimits

0xda98,	// (0x00044e96) list_single_2heading_msg_pane_t4

0x0003,

0xfcad,	// (0x000470ab) list_single_2heading_msg_pane_t_ParamLimits

0xfcad,	// (0x000470ab) list_single_2heading_msg_pane_t

0xb3f1,	// (0x000427ef) title_pane_g4_ParamLimits

0xb3f1,	// (0x000427ef) title_pane_g4

0xf006,	// (0x00046404) title_pane_stacon_g3_ParamLimits

0xf006,	// (0x00046404) title_pane_stacon_g3

0x5b8c,	// (0x0003cf8a) list_single_2graphic_im_pane_g4_ParamLimits

0x5b8c,	// (0x0003cf8a) list_single_2graphic_im_pane_g4

0xc64f,	// (0x00043a4d) popup_side_volume_key_window_cp

0x425a,	// (0x0003b658) main_idle_act2_pane_t1

0x0978,	// (0x00037d76) toolbar_button_pane_g10

0x93e0,	// (0x000407de) popup_toolbar_window_cp1

0x49ed,	// (0x0003bdeb) clock_nsta_pane_cp_t1

0x49ed,	// (0x0003bdeb) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x00046ead) clock_nsta_pane_cp_t

0x9c27,	// (0x00041025) navi_navi_volume_pane_cp2_ParamLimits

0xf260,	// (0x0004665e) popup_side_volume_key_window_g1_ParamLimits

0x9c36,	// (0x00041034) popup_side_volume_key_window_g2_ParamLimits

0x9c45,	// (0x00041043) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x00046b00) popup_side_volume_key_window_g_ParamLimits

0x0f7b,	// (0x00038379) fep_hwr_aid_pane

0x1022,	// (0x00038420) bg_fep_hwr_top_pane_g4_ParamLimits

0x4fae,	// (0x0003c3ac) fep_hwr_top_pane_g1_ParamLimits

0x4fc0,	// (0x0003c3be) fep_hwr_top_pane_g2_ParamLimits

0x1042,	// (0x00038440) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x00046f02) fep_hwr_top_pane_g_ParamLimits

0x1057,	// (0x00038455) fep_hwr_top_text_pane_ParamLimits

0x380f,	// (0x0003ac0d) aid_touch_tab_arrow_arrow_2

0x3818,	// (0x0003ac16) aid_touch_tab_arrow_left_2

0x0f8f,	// (0x0003838d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0fc6,	// (0x000383c4) fep_hwr_prediction_pane

0x5119,	// (0x0003c517) fep_vkb_prediction_pane

0xce87,	// (0x00044285) fep_vkb_side_pane_g3_ParamLimits

0xce87,	// (0x00044285) fep_vkb_side_pane_g3

0x11d2,	// (0x000385d0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x123e,	// (0x0003863c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x124b,	// (0x00038649) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x00046fb1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x143e,	// (0x0003883c) fep_hwr_prediction_pane_g1

0x1448,	// (0x00038846) fep_hwr_prediction_pane_g2

0x1450,	// (0x0003884e) fep_hwr_prediction_pane_g3

0x1458,	// (0x00038856) fep_hwr_prediction_pane_g4

0x0003,

0xfcb6,	// (0x000470b4) fep_hwr_prediction_pane_g

0x60a0,	// (0x0003d49e) fep_vkb_prediction_pane_g1

0x60aa,	// (0x0003d4a8) fep_vkb_prediction_pane_g2

0x60b2,	// (0x0003d4b0) fep_vkb_prediction_pane_g3

0x60ba,	// (0x0003d4b8) fep_vkb_prediction_pane_g4

0x0003,

0xfcbf,	// (0x000470bd) fep_vkb_prediction_pane_g

0xa9e7,	// (0x00041de5) slider_set_pane_g3

0xa9fb,	// (0x00041df9) slider_set_pane_g4

0xaa13,	// (0x00041e11) slider_set_pane_g5

0xa9e7,	// (0x00041de5) slider_set_pane_g6

0xaa29,	// (0x00041e27) slider_set_pane_g7

0x3e9b,	// (0x0003b299) slider_form_pane_g3

0x3ea4,	// (0x0003b2a2) slider_form_pane_g4

0x3eac,	// (0x0003b2aa) slider_form_pane_g5

0x3e9b,	// (0x0003b299) slider_form_pane_g6

0xc8ed,	// (0x00043ceb) slider_form_pane_g7

0x4505,	// (0x0003b903) slider_set_pane_vc_g3

0x450e,	// (0x0003b90c) slider_set_pane_vc_g4

0x4517,	// (0x0003b915) slider_set_pane_vc_g5

0x4505,	// (0x0003b903) slider_set_pane_vc_g6

0x4520,	// (0x0003b91e) slider_set_pane_vc_g7

0x46d2,	// (0x0003bad0) slider_form_pane_vc_g1

0x46db,	// (0x0003bad9) slider_form_pane_vc_g2

0x46e4,	// (0x0003bae2) slider_form_pane_vc_g3

0x46d2,	// (0x0003bad0) slider_form_pane_vc_g4

0x46ed,	// (0x0003baeb) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x00046e7f) slider_form_pane_vc_g

0xeed2,	// (0x000462d0) main_idle_act3_pane

0x60c2,	// (0x0003d4c0) ai3_links_pane

0xdabd,	// (0x00044ebb) popup_ai3_data_window_ParamLimits

0xdabd,	// (0x00044ebb) popup_ai3_data_window

0xb3d3,	// (0x000427d1) grid_ai3_links_pane

0xdad5,	// (0x00044ed3) cell_ai3_links_pane_ParamLimits

0xdad5,	// (0x00044ed3) cell_ai3_links_pane

0x60fb,	// (0x0003d4f9) bg_popup_sub_pane_cp11

0x6108,	// (0x0003d506) cell_ai3_links_pane_g1

0xb3d3,	// (0x000427d1) bg_popup_sub_pane_cp12

0x612d,	// (0x0003d52b) heading_ai3_data_pane

0x6135,	// (0x0003d533) list_ai3_gene_pane

0x6141,	// (0x0003d53f) popup_ai3_data_window_g1

0x6149,	// (0x0003d547) heading_ai3_data_pane_g1

0x6151,	// (0x0003d54f) heading_ai3_data_pane_t1

0xdaef,	// (0x00044eed) list_double_ai3_gene_pane_ParamLimits

0xdaef,	// (0x00044eed) list_double_ai3_gene_pane

0x616c,	// (0x0003d56a) list_single_ai3_gene_pane_ParamLimits

0x616c,	// (0x0003d56a) list_single_ai3_gene_pane

0x4f17,	// (0x0003c315) list_highlight_pane_cp7_ParamLimits

0x4f17,	// (0x0003c315) list_highlight_pane_cp7

0x6179,	// (0x0003d577) list_single_a13_gene_pane_t1_ParamLimits

0x6179,	// (0x0003d577) list_single_a13_gene_pane_t1

0x6190,	// (0x0003d58e) list_single_ai3_gene_pane_g1

0x6199,	// (0x0003d597) list_single_ai3_gene_pane_g2

0x0001,

0xfcc8,	// (0x000470c6) list_single_ai3_gene_pane_g

0x61a1,	// (0x0003d59f) list_double_ai3_gene_pane_g1_ParamLimits

0x61a1,	// (0x0003d59f) list_double_ai3_gene_pane_g1

0xdafc,	// (0x00044efa) list_double_ai3_gene_pane_t1_ParamLimits

0xdafc,	// (0x00044efa) list_double_ai3_gene_pane_t1

0x61c9,	// (0x0003d5c7) list_double_ai3_gene_pane_t2_ParamLimits

0x61c9,	// (0x0003d5c7) list_double_ai3_gene_pane_t2

0x61de,	// (0x0003d5dc) list_double_ai3_gene_pane_t3_ParamLimits

0x61de,	// (0x0003d5dc) list_double_ai3_gene_pane_t3

0x0002,

0xfccd,	// (0x000470cb) list_double_ai3_gene_pane_t_ParamLimits

0xfccd,	// (0x000470cb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xda38,	// (0x00044e36) aid_size_min_col_2

0xda42,	// (0x00044e40) aid_size_min_msg_ParamLimits

0xda42,	// (0x00044e40) aid_size_min_msg

0xce9b,	// (0x00044299) fep_vkb_top_text_pane_g2_ParamLimits

0xce9b,	// (0x00044299) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x00046f32) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x00046f32) fep_vkb_top_text_pane_g

0xeed2,	// (0x000462d0) main_hc_apps_shell_pane

0x61fb,	// (0x0003d5f9) grid_hc_apps_pane_ParamLimits

0x61fb,	// (0x0003d5f9) grid_hc_apps_pane

0x620a,	// (0x0003d608) list_hc_apps_pane

0x6212,	// (0x0003d610) scroll_pane_cp37_ParamLimits

0x6212,	// (0x0003d610) scroll_pane_cp37

0xdb18,	// (0x00044f16) cell_hc_apps_pane_ParamLimits

0xdb18,	// (0x00044f16) cell_hc_apps_pane

0xdbd6,	// (0x00044fd4) cell_hc_apps_pane_g1_ParamLimits

0xdbd6,	// (0x00044fd4) cell_hc_apps_pane_g1

0x62fd,	// (0x0003d6fb) cell_hc_apps_pane_g2_ParamLimits

0x62fd,	// (0x0003d6fb) cell_hc_apps_pane_g2

0x6319,	// (0x0003d717) cell_hc_apps_pane_g3_ParamLimits

0x6319,	// (0x0003d717) cell_hc_apps_pane_g3

0x0002,

0xfcd4,	// (0x000470d2) cell_hc_apps_pane_g_ParamLimits

0xfcd4,	// (0x000470d2) cell_hc_apps_pane_g

0xdc03,	// (0x00045001) cell_hc_apps_pane_t1_ParamLimits

0xdc03,	// (0x00045001) cell_hc_apps_pane_t1

0xb56d,	// (0x0004296b) grid_highlight_pane_cp10_ParamLimits

0xb56d,	// (0x0004296b) grid_highlight_pane_cp10

0xdc41,	// (0x0004503f) list_single_hc_apps_pane_ParamLimits

0xdc41,	// (0x0004503f) list_single_hc_apps_pane

0xdc71,	// (0x0004506f) list_single_hc_apps_pane_g1

0xad00,	// (0x000420fe) list_single_hc_apps_pane_g2

0x0001,

0xfcdb,	// (0x000470d9) list_single_hc_apps_pane_g

0xad19,	// (0x00042117) list_single_hc_apps_pane_g2_copy1

0xad35,	// (0x00042133) list_single_hc_apps_pane_t1

0xb443,	// (0x00042841) bg_set_opt_pane_cp_ParamLimits

0x8ed0,	// (0x000402ce) setting_slider_pane_t1_ParamLimits

0x8ee9,	// (0x000402e7) setting_slider_pane_t2_ParamLimits

0x8f03,	// (0x00040301) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004695c) setting_slider_pane_t_ParamLimits

0x8f1b,	// (0x00040319) slider_set_pane_ParamLimits

0x028b,	// (0x00037689) control_pane_g5_ParamLimits

0x028b,	// (0x00037689) control_pane_g5

0xc76f,	// (0x00043b6d) slider_set_pane_g1_ParamLimits

0x0c9f,	// (0x0003809d) slider_set_pane_g2_ParamLimits

0xa9e7,	// (0x00041de5) slider_set_pane_g3_ParamLimits

0xa9fb,	// (0x00041df9) slider_set_pane_g4_ParamLimits

0xaa13,	// (0x00041e11) slider_set_pane_g5_ParamLimits

0xa9e7,	// (0x00041de5) slider_set_pane_g6_ParamLimits

0xaa29,	// (0x00041e27) slider_set_pane_g7_ParamLimits

0xf949,	// (0x00046d47) slider_set_pane_g_ParamLimits

0x00c7,	// (0x000374c5) navi_icon_text_pane_ParamLimits

0xbd0f,	// (0x0004310d) aid_fill_nsta_2_ParamLimits

0xbd46,	// (0x00043144) aid_touch_tab_arrow_left_ParamLimits

0xbd5c,	// (0x0004315a) aid_touch_tab_arrow_right_ParamLimits

0xbdf7,	// (0x000431f5) clock_nsta_pane_ParamLimits

0x37f1,	// (0x0003abef) navi_icon_pane_g1_ParamLimits

0x37fd,	// (0x0003abfb) navi_text_pane_t1_ParamLimits

0x4afd,	// (0x0003befb) navi_icon_text_pane_g1_ParamLimits

0x4b09,	// (0x0003bf07) navi_icon_text_pane_t1_ParamLimits

0xdc71,	// (0x0004506f) list_single_hc_apps_pane_g1_ParamLimits

0xad00,	// (0x000420fe) list_single_hc_apps_pane_g2_ParamLimits

0xfcdb,	// (0x000470d9) list_single_hc_apps_pane_g_ParamLimits

0xad19,	// (0x00042117) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xad35,	// (0x00042133) list_single_hc_apps_pane_t1_ParamLimits

0x8d01,	// (0x000400ff) popup_toolbar2_fixed_window_ParamLimits

0x8d01,	// (0x000400ff) popup_toolbar2_fixed_window

0xa7de,	// (0x00041bdc) popup_toolbar2_float_window

0xb3d3,	// (0x000427d1) bg_popup_sub_pane_cp27

0x63f7,	// (0x0003d7f5) grid_toolbar2_float_pane

0xb3d3,	// (0x000427d1) bg_popup_sub_pane_cp26

0x63f7,	// (0x0003d7f5) grid_toolbar2_fixed_pane

0xdc8a,	// (0x00045088) cell_toolbar2_fixed_pane_ParamLimits

0xdc8a,	// (0x00045088) cell_toolbar2_fixed_pane

0xdca4,	// (0x000450a2) cell_toolbar2_fixed_pane_g1

0x074e,	// (0x00037b4c) toolbar2_fixed_button_pane

0x298b,	// (0x00039d89) toolbar2_fixed_button_pane_g1

0x299b,	// (0x00039d99) toolbar2_fixed_button_pane_g2

0x2993,	// (0x00039d91) toolbar2_fixed_button_pane_g3

0x29ab,	// (0x00039da9) toolbar2_fixed_button_pane_g4

0x29a3,	// (0x00039da1) toolbar2_fixed_button_pane_g5

0x29b3,	// (0x00039db1) toolbar2_fixed_button_pane_g6

0x29bb,	// (0x00039db9) toolbar2_fixed_button_pane_g7

0x29cb,	// (0x00039dc9) toolbar2_fixed_button_pane_g8

0x29c3,	// (0x00039dc1) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x00046c49) toolbar2_fixed_button_pane_g

0x6418,	// (0x0003d816) cell_toolbar2_float_pane_ParamLimits

0x6418,	// (0x0003d816) cell_toolbar2_float_pane

0x6429,	// (0x0003d827) cell_toolbar2_float_pane_g1

0x074e,	// (0x00037b4c) toolbar2_fixed_button_pane_cp

0xcd83,	// (0x00044181) fep_vkb_accented_list_pane_ParamLimits

0xcd83,	// (0x00044181) fep_vkb_accented_list_pane

0x11b2,	// (0x000385b0) bg_popup_fep_shadow_pane_g9

0x2138,	// (0x00039536) bg_popup_fep_shadow_pane_cp3

0xb8fb,	// (0x00042cf9) list_accented_list_pane

0x6432,	// (0x0003d830) list_single_accented_list_pane_ParamLimits

0x6432,	// (0x0003d830) list_single_accented_list_pane

0x2138,	// (0x00039536) list_highlight_pane_cp10

0x6443,	// (0x0003d841) list_single_accented_list_pane_t1

0xa708,	// (0x00041b06) popup_slider_window_ParamLimits

0xa708,	// (0x00041b06) popup_slider_window

0x6083,	// (0x0003d481) aid_indentation_list_msg

0xdd99,	// (0x00045197) bg_popup_window_pane_cp19

0x6563,	// (0x0003d961) popup_slider_window_g1

0x657f,	// (0x0003d97d) popup_slider_window_g2

0x659b,	// (0x0003d999) popup_slider_window_g3

0x0005,

0xfce0,	// (0x000470de) popup_slider_window_g

0x65f7,	// (0x0003d9f5) popup_slider_window_t1

0x666b,	// (0x0003da69) small_volume_slider_vertical_pane

0x4f52,	// (0x0003c350) small_volume_slider_vertical_pane_g1

0x4f52,	// (0x0003c350) small_volume_slider_vertical_pane_g2

0x6687,	// (0x0003da85) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf2,	// (0x000470f0) small_volume_slider_vertical_pane_g

0x8c4f,	// (0x0004004d) area_side_right_pane_ParamLimits

0x8c4f,	// (0x0004004d) area_side_right_pane

0xad63,	// (0x00042161) aid_size_side_button_ParamLimits

0xad63,	// (0x00042161) aid_size_side_button

0xad7c,	// (0x0004217a) grid_sctrl_middle_pane_ParamLimits

0xad7c,	// (0x0004217a) grid_sctrl_middle_pane

0x14f6,	// (0x000388f4) sctrl_sk_bottom_pane

0x1507,	// (0x00038905) sctrl_sk_top_pane

0x1519,	// (0x00038917) aid_touch_sctrl_top

0x1526,	// (0x00038924) bg_sctrl_sk_pane_ParamLimits

0x1526,	// (0x00038924) bg_sctrl_sk_pane

0x1534,	// (0x00038932) sctrl_sk_top_pane_g1

0x1541,	// (0x0003893f) sctrl_sk_top_pane_t1

0x1519,	// (0x00038917) aid_touch_sctrl_bottom

0x1526,	// (0x00038924) bg_sctrl_sk_pane_cp_ParamLimits

0x1526,	// (0x00038924) bg_sctrl_sk_pane_cp

0x155c,	// (0x0003895a) sctrl_sk_bottom_pane_g1

0x1541,	// (0x0003893f) sctrl_sk_bottom_pane_t1

0xad96,	// (0x00042194) cell_sctrl_middle_pane_ParamLimits

0xad96,	// (0x00042194) cell_sctrl_middle_pane

0xada7,	// (0x000421a5) aid_touch_sctrl_middle_ParamLimits

0xada7,	// (0x000421a5) aid_touch_sctrl_middle

0xadb4,	// (0x000421b2) bg_sctrl_middle_pane_ParamLimits

0xadb4,	// (0x000421b2) bg_sctrl_middle_pane

0x1bc9,	// (0x00038fc7) cell_sctrl_middle_pane_g1_ParamLimits

0x1bc9,	// (0x00038fc7) cell_sctrl_middle_pane_g1

0xadc2,	// (0x000421c0) cell_sctrl_middle_pane_g2_ParamLimits

0xadc2,	// (0x000421c0) cell_sctrl_middle_pane_g2

0x0001,

0xfcfe,	// (0x000470fc) cell_sctrl_middle_pane_g_ParamLimits

0xfcfe,	// (0x000470fc) cell_sctrl_middle_pane_g

0x298b,	// (0x00039d89) bg_sctrl_middle_pane_g1

0x2993,	// (0x00039d91) bg_sctrl_middle_pane_g2

0x299b,	// (0x00039d99) bg_sctrl_middle_pane_g3

0x29a3,	// (0x00039da1) bg_sctrl_middle_pane_g4

0x29ab,	// (0x00039da9) bg_sctrl_middle_pane_g5

0x29b3,	// (0x00039db1) bg_sctrl_middle_pane_g6

0x29bb,	// (0x00039db9) bg_sctrl_middle_pane_g7

0x29c3,	// (0x00039dc1) bg_sctrl_middle_pane_g8

0x0007,

0xfd03,	// (0x00047101) bg_sctrl_middle_pane_g

0x29cb,	// (0x00039dc9) bg_sctrl_middle_pane_g8_copy1

0x298b,	// (0x00039d89) bg_sctrl_sk_pane_g1

0x299b,	// (0x00039d99) bg_sctrl_sk_pane_g2

0x2993,	// (0x00039d91) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x00046c49) bg_sctrl_sk_pane_g

0xb737,	// (0x00042b35) aid_size_touch_scroll_bar

0x29ab,	// (0x00039da9) bg_sctrl_sk_pane_g4

0x29a3,	// (0x00039da1) bg_sctrl_sk_pane_g5

0x29b3,	// (0x00039db1) bg_sctrl_sk_pane_g6

0x29bb,	// (0x00039db9) bg_sctrl_sk_pane_g7

0x29cb,	// (0x00039dc9) bg_sctrl_sk_pane_g8

0x29c3,	// (0x00039dc1) bg_sctrl_sk_pane_g9

0x0435,	// (0x00037833) popup_fep_china_hwr2_fs_candidate_window

0xa1a8,	// (0x000415a6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa1a8,	// (0x000415a6) popup_fep_china_hwr2_fs_control_window

0x11d2,	// (0x000385d0) sctrl_sk_top_pane_g2

0x0001,

0xfcf9,	// (0x000470f7) sctrl_sk_top_pane_g

0xde51,	// (0x0004524f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xde51,	// (0x0004524f) aid_fep_china_hwr2_fs_cell

0xde65,	// (0x00045263) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xde65,	// (0x00045263) bg_popup_fep_shadow_pane_cp4

0xde7c,	// (0x0004527a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xde7c,	// (0x0004527a) bg_popup_fep_shadow_pane_cp5

0xde8e,	// (0x0004528c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xde8e,	// (0x0004528c) popup_fep_china_hwr2_fs_control_bar_grid

0xdea2,	// (0x000452a0) popup_fep_china_hwr2_fs_control_funtion_grid

0x66e3,	// (0x0003dae1) aid_fep_china_hwr2_fs_candi_cell

0xb3d3,	// (0x000427d1) bg_popup_fep_shadow_pane_cp6

0x66ed,	// (0x0003daeb) popup_fep_china_hwr2_fs_candidate_grid

0xdeaa,	// (0x000452a8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdeaa,	// (0x000452a8) cell_fep_china_hwr2_fs_funtion_grid

0x4f52,	// (0x0003c350) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x670f,	// (0x0003db0d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x670f,	// (0x0003db0d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x671d,	// (0x0003db1b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x671d,	// (0x0003db1b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd14,	// (0x00047112) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd14,	// (0x00047112) cell_fep_china_hwr2_fs_funtion_grid_g

0xdec2,	// (0x000452c0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdec2,	// (0x000452c0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xded7,	// (0x000452d5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xded7,	// (0x000452d5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd19,	// (0x00047117) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd19,	// (0x00047117) cell_fep_china_hwr2_fs_funtion_grid_t

0x6764,	// (0x0003db62) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x676c,	// (0x0003db6a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6774,	// (0x0003db72) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1e,	// (0x0004711c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x677c,	// (0x0003db7a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x677c,	// (0x0003db7a) cell_fep_china_hwr2_fs_candidate_grid

0x6795,	// (0x0003db93) popup_fep_china_hwr2_fs_candidate_grid_g20

0x679d,	// (0x0003db9b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4f52,	// (0x0003c350) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4f52,	// (0x0003c350) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x00046f37) cell_fep_china_hwr2_fs_candidate_grid_g

0x67a5,	// (0x0003dba3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2584,	// (0x00039982) clock_nsta_pane_cp_24_ParamLimits

0x2584,	// (0x00039982) clock_nsta_pane_cp_24

0x2602,	// (0x00039a00) indicator_nsta_pane_cp_24_ParamLimits

0x2602,	// (0x00039a00) indicator_nsta_pane_cp_24

0x366d,	// (0x0003aa6b) heading_pane_g1

0x0001,

0xf8b0,	// (0x00046cae) heading_pane_g

0x40a3,	// (0x0003b4a1) grid_sct_catagory_button_pane

0x40d3,	// (0x0003b4d1) scroll_pane_cp5_ParamLimits

0x4b4b,	// (0x0003bf49) button_value_adjust_pane_cp5_ParamLimits

0x4b4b,	// (0x0003bf49) button_value_adjust_pane_cp5

0x4c2a,	// (0x0003c028) form2_midp_time_pane_ParamLimits

0x67b3,	// (0x0003dbb1) cell_sct_catagory_button_pane_ParamLimits

0x67b3,	// (0x0003dbb1) cell_sct_catagory_button_pane

0x4f17,	// (0x0003c315) bg_button_pane_cp01_ParamLimits

0x4f17,	// (0x0003c315) bg_button_pane_cp01

0x4f52,	// (0x0003c350) cell_sct_catagory_button_pane_g1

0xa781,	// (0x00041b7f) popup_tb_extension_window

0xdef3,	// (0x000452f1) aid_size_cell_ext_ParamLimits

0xdef3,	// (0x000452f1) aid_size_cell_ext

0xb6e9,	// (0x00042ae7) bg_tb_trans_pane_cp1_ParamLimits

0xb6e9,	// (0x00042ae7) bg_tb_trans_pane_cp1

0xdf19,	// (0x00045317) grid_tb_ext_pane_ParamLimits

0xdf19,	// (0x00045317) grid_tb_ext_pane

0xdf58,	// (0x00045356) cell_tb_ext_pane_ParamLimits

0xdf58,	// (0x00045356) cell_tb_ext_pane

0xdf80,	// (0x0004537e) cell_tb_ext_pane_g1_ParamLimits

0xdf80,	// (0x0004537e) cell_tb_ext_pane_g1

0x6849,	// (0x0003dc47) cell_tb_ext_pane_t1

0xb56d,	// (0x0004296b) list_highlight_pane_cp11_ParamLimits

0xb56d,	// (0x0004296b) list_highlight_pane_cp11

0x8d16,	// (0x00040114) popup_uni_indicator_window_ParamLimits

0x8d16,	// (0x00040114) popup_uni_indicator_window

0xb7f5,	// (0x00042bf3) bg_popup_sub_pane_cp14

0xdf9d,	// (0x0004539b) list_uniindi_pane

0xdfa9,	// (0x000453a7) uniindi_top_pane

0xb56d,	// (0x0004296b) bg_uniindi_top_pane

0xdfc8,	// (0x000453c6) uniindi_top_pane_g1

0xdfde,	// (0x000453dc) uniindi_top_pane_g2

0x0003,

0xfd25,	// (0x00047123) uniindi_top_pane_g

0xdffb,	// (0x000453f9) uniindi_top_pane_t1

0x68fa,	// (0x0003dcf8) list_single_uniindi_pane_ParamLimits

0x68fa,	// (0x0003dcf8) list_single_uniindi_pane

0x4f52,	// (0x0003c350) bg_uniindi_top_pane_g1

0x690c,	// (0x0003dd0a) list_single_uniindi_pane_g1

0x691f,	// (0x0003dd1d) list_single_uniindi_pane_t1

0xeed2,	// (0x000462d0) control_bg_pane

0x6944,	// (0x0003dd42) bg_sctrl_sk_pane_cp1

0x694d,	// (0x0003dd4b) bg_sctrl_sk_pane_cp2

0x6956,	// (0x0003dd54) control_bg_pane_g1

0x695f,	// (0x0003dd5d) control_bg_pane_g2

0x0001,

0xfd2e,	// (0x0004712c) control_bg_pane_g

0x49a2,	// (0x0003bda0) cell_indicator_nsta_pane_g1_ParamLimits

0xcb42,	// (0x00043f40) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x00046e9b) cell_indicator_nsta_pane_g_ParamLimits

0xd769,	// (0x00044b67) form2_midp_time_pane_t1_ParamLimits

0x0f6d,	// (0x0003836b) main_idle_act4_pane_ParamLimits

0x0f6d,	// (0x0003836b) main_idle_act4_pane

0xa781,	// (0x00041b7f) popup_tb_extension_window_ParamLimits

0xdf3e,	// (0x0004533c) tb_ext_find_pane_ParamLimits

0xdf3e,	// (0x0004533c) tb_ext_find_pane

0x6968,	// (0x0003dd66) ai_gene_pane_1_cp1

0x2283,	// (0x00039681) ai_gene_pane_2_cp1

0xe025,	// (0x00045423) list_single_idle_plugin_calendar_pane

0x6979,	// (0x0003dd77) list_single_idle_plugin_notification_pane

0x6982,	// (0x0003dd80) list_single_idle_plugin_player_pane

0xe02e,	// (0x0004542c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe02e,	// (0x0004542c) list_single_idle_plugin_shortcut_pane

0xe056,	// (0x00045454) main_idle_act4_pane_t1

0xe06d,	// (0x0004546b) main_idle_act4_pane_t2

0x0001,

0xfd33,	// (0x00047131) main_idle_act4_pane_t

0xe084,	// (0x00045482) middle_sk_idle_act4_pane_ParamLimits

0xe084,	// (0x00045482) middle_sk_idle_act4_pane

0xe0a0,	// (0x0004549e) popup_clock_digital_analogue_window_cp2

0xe0cc,	// (0x000454ca) shortcut_wheel_idle_act4_pane_ParamLimits

0xe0cc,	// (0x000454ca) shortcut_wheel_idle_act4_pane

0x4f52,	// (0x0003c350) shortcut_wheel_idle_act4_pane_g1

0x4f52,	// (0x0003c350) shortcut_wheel_idle_act4_pane_g2

0x4f52,	// (0x0003c350) shortcut_wheel_idle_act4_pane_g3

0x4f52,	// (0x0003c350) shortcut_wheel_idle_act4_pane_g4

0x4f52,	// (0x0003c350) shortcut_wheel_idle_act4_pane_g5

0x6a15,	// (0x0003de13) shortcut_wheel_idle_act4_pane_g6

0x6a1d,	// (0x0003de1b) shortcut_wheel_idle_act4_pane_g7

0x6a25,	// (0x0003de23) shortcut_wheel_idle_act4_pane_g8

0x6a2d,	// (0x0003de2b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd38,	// (0x00047136) shortcut_wheel_idle_act4_pane_g

0xd1d0,	// (0x000445ce) middle_sk_idle_act4_pane_g1_ParamLimits

0xd1d0,	// (0x000445ce) middle_sk_idle_act4_pane_g1

0xe149,	// (0x00045547) middle_sk_idle_act4_pane_g2_ParamLimits

0xe149,	// (0x00045547) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5b,	// (0x00047159) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5b,	// (0x00047159) middle_sk_idle_act4_pane_g

0xe161,	// (0x0004555f) middle_sk_idle_act4_pane_t1_ParamLimits

0xe161,	// (0x0004555f) middle_sk_idle_act4_pane_t1

0xe190,	// (0x0004558e) grid_ai_shortcut_pane_ParamLimits

0xe190,	// (0x0004558e) grid_ai_shortcut_pane

0xe1ad,	// (0x000455ab) list_highlight_pane_cp16_ParamLimits

0xe1ad,	// (0x000455ab) list_highlight_pane_cp16

0xe1ba,	// (0x000455b8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe1ba,	// (0x000455b8) list_single_idle_plugin_shortcut_pane_g1

0xe1c6,	// (0x000455c4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe1c6,	// (0x000455c4) list_single_idle_plugin_shortcut_pane_g2

0xe1e2,	// (0x000455e0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe1e2,	// (0x000455e0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd60,	// (0x0004715e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd60,	// (0x0004715e) list_single_idle_plugin_shortcut_pane_g

0xe1f7,	// (0x000455f5) cell_ai_shortcut_pane_ParamLimits

0xe1f7,	// (0x000455f5) cell_ai_shortcut_pane

0xe20d,	// (0x0004560b) cell_ai_shortcut_pane_g1_ParamLimits

0xe20d,	// (0x0004560b) cell_ai_shortcut_pane_g1

0x6968,	// (0x0003dd66) ai_gene_pane_1_cp2

0x6b5d,	// (0x0003df5b) ai_gene_pane_2_cp2

0x6b65,	// (0x0003df63) list_highlight_pane_cp15

0xe22f,	// (0x0004562d) list_single_idle_plugin_calendar_pane_g1

0x6b65,	// (0x0003df63) list_highlight_pane_cp17

0x6b76,	// (0x0003df74) list_single_idle_plugin_calendar_pane_g1_copy1

0x6b7e,	// (0x0003df7c) list_single_idle_plugin_player_pane_g1

0x42fc,	// (0x0003b6fa) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd67,	// (0x00047165) list_single_idle_plugin_player_pane_g

0x6b86,	// (0x0003df84) list_single_idle_plugin_player_pane_t1

0x6b94,	// (0x0003df92) list_single_idle_plugin_player_pane_t2

0x6ba2,	// (0x0003dfa0) list_single_idle_plugin_player_pane_t3

0x6bb0,	// (0x0003dfae) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6c,	// (0x0004716a) list_single_idle_plugin_player_pane_t

0x6bbe,	// (0x0003dfbc) wait_bar_pane_cp15

0x6bc6,	// (0x0003dfc4) grid_ai_notification_pane

0x42fc,	// (0x0003b6fa) list_single_idle_plugin_notification_pane_g1

0xe237,	// (0x00045635) cell_ai_notification_pane_ParamLimits

0xe237,	// (0x00045635) cell_ai_notification_pane

0x6bdc,	// (0x0003dfda) cell_ai_notification_pane_g1

0x6be4,	// (0x0003dfe2) cell_ai_notification_pane_t1

0xe244,	// (0x00045642) tb_ext_find_button_pane

0xe24c,	// (0x0004564a) tb_ext_find_pane_g1

0xe254,	// (0x00045652) tb_ext_find_pane_t1

0xbc28,	// (0x00043026) tb_ext_find_button_pane_g1

0xe262,	// (0x00045660) tb_ext_find_button_pane_g2

0x0001,

0xfd75,	// (0x00047173) tb_ext_find_button_pane_g

0xe056,	// (0x00045454) main_idle_act4_pane_t1_ParamLimits

0xe06d,	// (0x0004546b) main_idle_act4_pane_t2_ParamLimits

0xfd33,	// (0x00047131) main_idle_act4_pane_t_ParamLimits

0xe0a0,	// (0x0004549e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe0b8,	// (0x000454b6) sat_plugin_idle_act4_pane_ParamLimits

0xe0b8,	// (0x000454b6) sat_plugin_idle_act4_pane

0xe26b,	// (0x00045669) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe26b,	// (0x00045669) sat_plugin_idle_act4_pane_t1

0xe283,	// (0x00045681) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe283,	// (0x00045681) sat_plugin_idle_act4_pane_t2

0xe29b,	// (0x00045699) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe29b,	// (0x00045699) sat_plugin_idle_act4_pane_t3

0xe2b3,	// (0x000456b1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe2b3,	// (0x000456b1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7a,	// (0x00047178) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7a,	// (0x00047178) sat_plugin_idle_act4_pane_t

0x8c91,	// (0x0004008f) popup_battery_window_ParamLimits

0x8c91,	// (0x0004008f) popup_battery_window

0xb56d,	// (0x0004296b) bg_popup_sub_pane_cp25_ParamLimits

0xb56d,	// (0x0004296b) bg_popup_sub_pane_cp25

0x6c65,	// (0x0003e063) popup_battery_window_g1_ParamLimits

0x6c65,	// (0x0003e063) popup_battery_window_g1

0x6c71,	// (0x0003e06f) popup_battery_window_t1_ParamLimits

0x6c71,	// (0x0003e06f) popup_battery_window_t1

0x6c83,	// (0x0003e081) popup_battery_window_t2_ParamLimits

0x6c83,	// (0x0003e081) popup_battery_window_t2

0x0001,

0xfd83,	// (0x00047181) popup_battery_window_t_ParamLimits

0xfd83,	// (0x00047181) popup_battery_window_t

0x9dee,	// (0x000411ec) midp_canvas_pane_ParamLimits

0x9e60,	// (0x0004125e) midp_keypad_pane_ParamLimits

0x9e60,	// (0x0004125e) midp_keypad_pane

0x247e,	// (0x0003987c) main_midp_pane_ParamLimits

0xcb4f,	// (0x00043f4d) signal_pane_g2_cp_ParamLimits

0xe2cb,	// (0x000456c9) aid_size_cell_midp_keypad_ParamLimits

0xe2cb,	// (0x000456c9) aid_size_cell_midp_keypad

0xe2e9,	// (0x000456e7) midp_keyp_game_grid_pane_ParamLimits

0xe2e9,	// (0x000456e7) midp_keyp_game_grid_pane

0xe310,	// (0x0004570e) midp_keyp_rocker_pane_ParamLimits

0xe310,	// (0x0004570e) midp_keyp_rocker_pane

0xe361,	// (0x0004575f) midp_keyp_sk_left_pane_ParamLimits

0xe361,	// (0x0004575f) midp_keyp_sk_left_pane

0xe3b5,	// (0x000457b3) midp_keyp_sk_right_pane_ParamLimits

0xe3b5,	// (0x000457b3) midp_keyp_sk_right_pane

0xb3d3,	// (0x000427d1) bg_button_pane_cp03

0xe409,	// (0x00045807) midp_keyp_sk_left_pane_g1

0xb3d3,	// (0x000427d1) bg_button_pane_cp04

0xe409,	// (0x00045807) midp_keyp_sk_right_pane_g1

0x4f52,	// (0x0003c350) midp_keyp_rocker_pane_g1

0xe412,	// (0x00045810) keyp_game_cell_pane_ParamLimits

0xe412,	// (0x00045810) keyp_game_cell_pane

0xb3d3,	// (0x000427d1) bg_button_pane_cp02

0xe436,	// (0x00045834) keyp_game_cell_pane_g1

0x8cb1,	// (0x000400af) popup_fep_vkb2_window_ParamLimits

0x8cb1,	// (0x000400af) popup_fep_vkb2_window

0xadce,	// (0x000421cc) aid_size_cell_vkb2_ParamLimits

0xadce,	// (0x000421cc) aid_size_cell_vkb2

0xae0c,	// (0x0004220a) popup_fep_vkb2_window_g1_ParamLimits

0xae0c,	// (0x0004220a) popup_fep_vkb2_window_g1

0xae5c,	// (0x0004225a) vkb2_area_bottom_pane_ParamLimits

0xae5c,	// (0x0004225a) vkb2_area_bottom_pane

0xaeb0,	// (0x000422ae) vkb2_area_keypad_pane_ParamLimits

0xaeb0,	// (0x000422ae) vkb2_area_keypad_pane

0xaef8,	// (0x000422f6) vkb2_area_top_pane_ParamLimits

0xaef8,	// (0x000422f6) vkb2_area_top_pane

0xaf7e,	// (0x0004237c) vkb2_top_entry_pane_ParamLimits

0xaf7e,	// (0x0004237c) vkb2_top_entry_pane

0xafab,	// (0x000423a9) vkb2_top_grid_left_pane_ParamLimits

0xafab,	// (0x000423a9) vkb2_top_grid_left_pane

0xafcb,	// (0x000423c9) vkb2_top_grid_right_pane_ParamLimits

0xafcb,	// (0x000423c9) vkb2_top_grid_right_pane

0x17c8,	// (0x00038bc6) vkb2_cell_keypad_pane_ParamLimits

0x17c8,	// (0x00038bc6) vkb2_cell_keypad_pane

0xb011,	// (0x0004240f) vkb2_area_bottom_grid_pane_ParamLimits

0xb011,	// (0x0004240f) vkb2_area_bottom_grid_pane

0xb03b,	// (0x00042439) vkb2_area_bottom_pane_g1_ParamLimits

0xb03b,	// (0x00042439) vkb2_area_bottom_pane_g1

0xb061,	// (0x0004245f) vkb2_area_bottom_pane_g2_ParamLimits

0xb061,	// (0x0004245f) vkb2_area_bottom_pane_g2

0xb092,	// (0x00042490) vkb2_area_bottom_pane_g3_ParamLimits

0xb092,	// (0x00042490) vkb2_area_bottom_pane_g3

0x0002,

0xfd88,	// (0x00047186) vkb2_area_bottom_pane_g_ParamLimits

0xfd88,	// (0x00047186) vkb2_area_bottom_pane_g

0x1972,	// (0x00038d70) vkb2_top_cell_left_pane_ParamLimits

0x1972,	// (0x00038d70) vkb2_top_cell_left_pane

0xe43f,	// (0x0004583d) vkb2_top_entry_pane_g1_ParamLimits

0xe43f,	// (0x0004583d) vkb2_top_entry_pane_g1

0xe44d,	// (0x0004584b) vkb2_top_entry_pane_t1_ParamLimits

0xe44d,	// (0x0004584b) vkb2_top_entry_pane_t1

0x6e34,	// (0x0003e232) vkb2_top_entry_pane_t2_ParamLimits

0x6e34,	// (0x0003e232) vkb2_top_entry_pane_t2

0x6e66,	// (0x0003e264) vkb2_top_entry_pane_t3_ParamLimits

0x6e66,	// (0x0003e264) vkb2_top_entry_pane_t3

0x0002,

0xfd8f,	// (0x0004718d) vkb2_top_entry_pane_t_ParamLimits

0xfd8f,	// (0x0004718d) vkb2_top_entry_pane_t

0xb0fc,	// (0x000424fa) vkb2_top_grid_right_pane_g1_ParamLimits

0xb0fc,	// (0x000424fa) vkb2_top_grid_right_pane_g1

0x19d5,	// (0x00038dd3) vkb2_top_grid_right_pane_g2_ParamLimits

0x19d5,	// (0x00038dd3) vkb2_top_grid_right_pane_g2

0x19ed,	// (0x00038deb) vkb2_top_grid_right_pane_g3_ParamLimits

0x19ed,	// (0x00038deb) vkb2_top_grid_right_pane_g3

0xb112,	// (0x00042510) vkb2_top_grid_right_pane_g4_ParamLimits

0xb112,	// (0x00042510) vkb2_top_grid_right_pane_g4

0x0003,

0xfd96,	// (0x00047194) vkb2_top_grid_right_pane_g_ParamLimits

0xfd96,	// (0x00047194) vkb2_top_grid_right_pane_g

0x1a1b,	// (0x00038e19) vkb2_top_cell_left_pane_g1

0x1a32,	// (0x00038e30) vkb2_cell_keypad_pane_g1_ParamLimits

0x1a32,	// (0x00038e30) vkb2_cell_keypad_pane_g1

0x6e8a,	// (0x0003e288) vkb2_cell_keypad_pane_t1_ParamLimits

0x6e8a,	// (0x0003e288) vkb2_cell_keypad_pane_t1

0x1a40,	// (0x00038e3e) vkb2_cell_bottom_grid_pane_ParamLimits

0x1a40,	// (0x00038e3e) vkb2_cell_bottom_grid_pane

0x1a79,	// (0x00038e77) vkb2_cell_bottom_grid_pane_g1

0xe0ed,	// (0x000454eb) aid_call2_pane_cp02

0xe0f5,	// (0x000454f3) aid_call_pane_cp02

0xe0fd,	// (0x000454fb) clock_digital_number_pane_cp10

0xe105,	// (0x00045503) clock_digital_number_pane_cp11

0xe10d,	// (0x0004550b) clock_digital_number_pane_cp12

0xe115,	// (0x00045513) clock_digital_number_pane_cp13

0xe11d,	// (0x0004551b) clock_digital_separator_pane_cp10

0xbc28,	// (0x00043026) popup_clock_digital_analogue_window_cp2_g1

0xbc28,	// (0x00043026) popup_clock_digital_analogue_window_cp2_g2

0xe125,	// (0x00045523) popup_clock_digital_analogue_window_cp2_g3

0xbc28,	// (0x00043026) popup_clock_digital_analogue_window_cp2_g4

0xe125,	// (0x00045523) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4b,	// (0x00047149) popup_clock_digital_analogue_window_cp2_g

0xe12d,	// (0x0004552b) popup_clock_digital_analogue_window_cp2_t1

0xe13b,	// (0x00045539) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd56,	// (0x00047154) popup_clock_digital_analogue_window_cp2_t

0x4f52,	// (0x0003c350) clock_digital_number_pane_cp10_g1

0x4f52,	// (0x0003c350) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x00046f37) clock_digital_number_pane_cp10_g

0x4f52,	// (0x0003c350) clock_digital_separator_pane_cp10_g1

0x4f52,	// (0x0003c350) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x00046f37) clock_digital_separator_pane_cp10_g

0xdfea,	// (0x000453e8) uniindi_top_pane_g3

0x68c3,	// (0x0003dcc1) uniindi_top_pane_g4

0x1853,	// (0x00038c51) vkb2_row_keypad_pane_ParamLimits

0x1853,	// (0x00038c51) vkb2_row_keypad_pane

0x1a95,	// (0x00038e93) vkb2_cell_t_keypad_pane_ParamLimits

0x1a95,	// (0x00038e93) vkb2_cell_t_keypad_pane

0x1aa5,	// (0x00038ea3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1aa5,	// (0x00038ea3) vkb2_cell_t_keypad_pane_cp08

0x1ab8,	// (0x00038eb6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1ab8,	// (0x00038eb6) vkb2_cell_t_keypad_pane_cp09

0x1acc,	// (0x00038eca) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1acc,	// (0x00038eca) vkb2_cell_t_keypad_pane_cp01

0x1add,	// (0x00038edb) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1add,	// (0x00038edb) vkb2_cell_t_keypad_pane_cp02

0x1aee,	// (0x00038eec) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1aee,	// (0x00038eec) vkb2_cell_t_keypad_pane_cp03

0x1aff,	// (0x00038efd) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1aff,	// (0x00038efd) vkb2_cell_t_keypad_pane_cp04

0x1b10,	// (0x00038f0e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1b10,	// (0x00038f0e) vkb2_cell_t_keypad_pane_cp05

0x1b21,	// (0x00038f1f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1b21,	// (0x00038f1f) vkb2_cell_t_keypad_pane_cp06

0x1b32,	// (0x00038f30) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1b32,	// (0x00038f30) vkb2_cell_t_keypad_pane_cp07

0x1b43,	// (0x00038f41) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1b43,	// (0x00038f41) vkb2_cell_t_keypad_pane_cp10

0x11d2,	// (0x000385d0) vkb2_cell_t_keypad_pane_g1

0x6ea1,	// (0x0003e29f) vkb2_cell_t_keypad_pane_t1

0xeed2,	// (0x000462d0) popup_grid_graphic2_window

0xe486,	// (0x00045884) aid_size_cell_graphic2_ParamLimits

0xe486,	// (0x00045884) aid_size_cell_graphic2

0xe4c4,	// (0x000458c2) bg_popup_window_pane_cp21_ParamLimits

0xe4c4,	// (0x000458c2) bg_popup_window_pane_cp21

0xe4d2,	// (0x000458d0) graphic2_pages_pane_ParamLimits

0xe4d2,	// (0x000458d0) graphic2_pages_pane

0xe528,	// (0x00045926) grid_graphic2_control_pane_ParamLimits

0xe528,	// (0x00045926) grid_graphic2_control_pane

0xe570,	// (0x0004596e) grid_graphic2_pane_ParamLimits

0xe570,	// (0x0004596e) grid_graphic2_pane

0xe5f7,	// (0x000459f5) cell_graphic2_pane

0xeed2,	// (0x000462d0) main_comp_mode_pane

0x6135,	// (0x0003d533) list_ai3_gene_pane_ParamLimits

0xdd99,	// (0x00045197) bg_popup_window_pane_cp19_ParamLimits

0x6505,	// (0x0003d903) bg_touch_area_indi_pane_ParamLimits

0x6505,	// (0x0003d903) bg_touch_area_indi_pane

0x651b,	// (0x0003d919) bg_touch_area_indi_pane_cp01_ParamLimits

0x651b,	// (0x0003d919) bg_touch_area_indi_pane_cp01

0x6531,	// (0x0003d92f) bg_touch_area_indi_pane_cp02_ParamLimits

0x6531,	// (0x0003d92f) bg_touch_area_indi_pane_cp02

0x6549,	// (0x0003d947) bg_touch_area_indi_pane_cp03_ParamLimits

0x6549,	// (0x0003d947) bg_touch_area_indi_pane_cp03

0x6563,	// (0x0003d961) popup_slider_window_g1_ParamLimits

0x657f,	// (0x0003d97d) popup_slider_window_g2_ParamLimits

0x659b,	// (0x0003d999) popup_slider_window_g3_ParamLimits

0xfce0,	// (0x000470de) popup_slider_window_g_ParamLimits

0x65f7,	// (0x0003d9f5) popup_slider_window_t1_ParamLimits

0x666b,	// (0x0003da69) small_volume_slider_vertical_pane_ParamLimits

0xe5f7,	// (0x000459f5) cell_graphic2_pane_ParamLimits

0xe652,	// (0x00045a50) bg_button_pane_cp10_ParamLimits

0xe652,	// (0x00045a50) bg_button_pane_cp10

0xe665,	// (0x00045a63) bg_button_pane_cp11_ParamLimits

0xe665,	// (0x00045a63) bg_button_pane_cp11

0xe678,	// (0x00045a76) graphic2_pages_pane_g1_ParamLimits

0xe678,	// (0x00045a76) graphic2_pages_pane_g1

0xe693,	// (0x00045a91) graphic2_pages_pane_g2_ParamLimits

0xe693,	// (0x00045a91) graphic2_pages_pane_g2

0x0001,

0xfda4,	// (0x000471a2) graphic2_pages_pane_g_ParamLimits

0xfda4,	// (0x000471a2) graphic2_pages_pane_g

0xe6ab,	// (0x00045aa9) graphic2_pages_pane_t1_ParamLimits

0xe6ab,	// (0x00045aa9) graphic2_pages_pane_t1

0xe6c3,	// (0x00045ac1) cell_graphic2_control_pane_ParamLimits

0xe6c3,	// (0x00045ac1) cell_graphic2_control_pane

0xe6f5,	// (0x00045af3) cell_graphic2_pane_g1_ParamLimits

0xe6f5,	// (0x00045af3) cell_graphic2_pane_g1

0xd1de,	// (0x000445dc) cell_graphic2_pane_g2_ParamLimits

0xd1de,	// (0x000445dc) cell_graphic2_pane_g2

0xd77c,	// (0x00044b7a) cell_graphic2_pane_g3_ParamLimits

0xd77c,	// (0x00044b7a) cell_graphic2_pane_g3

0xd1eb,	// (0x000445e9) cell_graphic2_pane_g4_ParamLimits

0xd1eb,	// (0x000445e9) cell_graphic2_pane_g4

0xe702,	// (0x00045b00) cell_graphic2_pane_g5_ParamLimits

0xe702,	// (0x00045b00) cell_graphic2_pane_g5

0x0004,

0xfda9,	// (0x000471a7) cell_graphic2_pane_g_ParamLimits

0xfda9,	// (0x000471a7) cell_graphic2_pane_g

0xe722,	// (0x00045b20) cell_graphic2_pane_t1_ParamLimits

0xe722,	// (0x00045b20) cell_graphic2_pane_t1

0x3661,	// (0x0003aa5f) grid_highlight_pane_cp11_ParamLimits

0x3661,	// (0x0003aa5f) grid_highlight_pane_cp11

0xb56d,	// (0x0004296b) bg_button_pane_cp05

0xe76e,	// (0x00045b6c) cell_graphic2_control_pane_g1

0x4f52,	// (0x0003c350) bg_touch_area_indi_pane_g1

0x717d,	// (0x0003e57b) aid_cmod_rocker_key_size

0x7187,	// (0x0003e585) aid_cmode_itu_key_size

0x7191,	// (0x0003e58f) main_cmode_video_pane

0x719b,	// (0x0003e599) main_comp_mode_itu_pane

0x71a7,	// (0x0003e5a5) main_comp_mode_rocker_pane

0x71b3,	// (0x0003e5b1) cell_cmode_rocker_pane_ParamLimits

0x71b3,	// (0x0003e5b1) cell_cmode_rocker_pane

0x71c5,	// (0x0003e5c3) cell_cmode_itu_pane_ParamLimits

0x71c5,	// (0x0003e5c3) cell_cmode_itu_pane

0xb7f5,	// (0x00042bf3) bg_button_pane_cp06_ParamLimits

0xb7f5,	// (0x00042bf3) bg_button_pane_cp06

0x51c2,	// (0x0003c5c0) cell_cmode_rocker_pane_g1_ParamLimits

0x51c2,	// (0x0003c5c0) cell_cmode_rocker_pane_g1

0x670f,	// (0x0003db0d) cell_cmode_rocker_pane_g2_ParamLimits

0x670f,	// (0x0003db0d) cell_cmode_rocker_pane_g2

0x0001,

0xfdb9,	// (0x000471b7) cell_cmode_rocker_pane_g_ParamLimits

0xfdb9,	// (0x000471b7) cell_cmode_rocker_pane_g

0xb3d3,	// (0x000427d1) bg_button_pane_cp07

0x71da,	// (0x0003e5d8) cell_cmode_itu_pane_g1

0x71e3,	// (0x0003e5e1) cell_cmode_itu_pane_t1

0x71f1,	// (0x0003e5ef) cell_cmode_itu_pane_t2

0x0001,

0xfdbe,	// (0x000471bc) cell_cmode_itu_pane_t

0x6934,	// (0x0003dd32) aid_touch_ctrl_left

0x693c,	// (0x0003dd3a) aid_touch_ctrl_right

0xb3d3,	// (0x000427d1) compa_mode_pane

0xe794,	// (0x00045b92) aid_cmod_rocker_key_size_cp

0xe79e,	// (0x00045b9c) aid_cmode_itu_key_size_cp

0x7213,	// (0x0003e611) compa_mode_pane_g1

0x721b,	// (0x0003e619) compa_mode_pane_g2

0x7223,	// (0x0003e621) compa_mode_pane_g3

0x0002,

0xfdc3,	// (0x000471c1) compa_mode_pane_g

0xe7a8,	// (0x00045ba6) main_comp_mode_itu_pane_cp

0xe7b0,	// (0x00045bae) main_comp_mode_rocker_pane_cp

0xe7b8,	// (0x00045bb6) cell_cmode_itu_pane_cp_ParamLimits

0xe7b8,	// (0x00045bb6) cell_cmode_itu_pane_cp

0xe7cd,	// (0x00045bcb) cell_cmode_rocker_pane_cp_ParamLimits

0xe7cd,	// (0x00045bcb) cell_cmode_rocker_pane_cp

0xb7f5,	// (0x00042bf3) bg_button_pane_cp06_cp_ParamLimits

0xb7f5,	// (0x00042bf3) bg_button_pane_cp06_cp

0x51c2,	// (0x0003c5c0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x51c2,	// (0x0003c5c0) cell_cmode_rocker_pane_g1_cp

0x4f52,	// (0x0003c350) cell_cmode_rocker_pane_g2_cp

0xb3d3,	// (0x000427d1) bg_button_pane_cp07_cp

0xe7df,	// (0x00045bdd) cell_cmode_itu_pane_g1_cp

0xe7e8,	// (0x00045be6) cell_cmode_itu_pane_t1_cp

0xe7e8,	// (0x00045be6) cell_cmode_itu_pane_t2_cp

0xc8e3,	// (0x00043ce1) settings_code_pane_cp2

0xb443,	// (0x00042841) bg_popup_window_pane_cp3_ParamLimits

0xb686,	// (0x00042a84) heading_pane_cp3_ParamLimits

0xb692,	// (0x00042a90) listscroll_popup_graphic_pane_ParamLimits

0x0f7b,	// (0x00038379) fep_hwr_aid_pane_ParamLimits

0x1519,	// (0x00038917) aid_touch_sctrl_top_ParamLimits

0x1534,	// (0x00038932) sctrl_sk_top_pane_g1_ParamLimits

0x11d2,	// (0x000385d0) sctrl_sk_top_pane_g2_ParamLimits

0xfcf9,	// (0x000470f7) sctrl_sk_top_pane_g_ParamLimits

0x1541,	// (0x0003893f) sctrl_sk_top_pane_t1_ParamLimits

0x1519,	// (0x00038917) aid_touch_sctrl_bottom_ParamLimits

0x1541,	// (0x0003893f) sctrl_sk_bottom_pane_t1_ParamLimits

0xdfb6,	// (0x000453b4) aid_area_touch_clock

0xaf40,	// (0x0004233e) aid_vkb2_area_top_pane_cell_ParamLimits

0xaf40,	// (0x0004233e) aid_vkb2_area_top_pane_cell

0xafeb,	// (0x000423e9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xafeb,	// (0x000423e9) aid_vkb2_area_bottom_pane_cell

0x6dec,	// (0x0003e1ea) popup_char_count_window

0x7279,	// (0x0003e677) popup_char_count_window_g1

0x7282,	// (0x0003e680) popup_char_count_window_g2

0x728b,	// (0x0003e689) popup_char_count_window_g3

0x0002,

0xfdca,	// (0x000471c8) popup_char_count_window_g

0x7294,	// (0x0003e692) popup_char_count_window_t1

0x15f0,	// (0x000389ee) popup_fep_char_preview_window_ParamLimits

0x15f0,	// (0x000389ee) popup_fep_char_preview_window

0xaf60,	// (0x0004235e) vkb2_top_candi_pane_ParamLimits

0xaf60,	// (0x0004235e) vkb2_top_candi_pane

0xe7f6,	// (0x00045bf4) cell_vkb2_top_candi_pane_ParamLimits

0xe7f6,	// (0x00045bf4) cell_vkb2_top_candi_pane

0x1b58,	// (0x00038f56) bg_popup_fep_char_preview_window_ParamLimits

0x1b58,	// (0x00038f56) bg_popup_fep_char_preview_window

0x1b66,	// (0x00038f64) popup_fep_char_preview_window_t1_ParamLimits

0x1b66,	// (0x00038f64) popup_fep_char_preview_window_t1

0x72ef,	// (0x0003e6ed) bg_popup_fep_char_preview_window_g1

0x72f7,	// (0x0003e6f5) bg_popup_fep_char_preview_window_g2

0x72ff,	// (0x0003e6fd) bg_popup_fep_char_preview_window_g3

0x7307,	// (0x0003e705) bg_popup_fep_char_preview_window_g4

0x730f,	// (0x0003e70d) bg_popup_fep_char_preview_window_g5

0x1ba0,	// (0x00038f9e) bg_popup_fep_char_preview_window_g6

0x7317,	// (0x0003e715) bg_popup_fep_char_preview_window_g7

0x731f,	// (0x0003e71d) bg_popup_fep_char_preview_window_g8

0x7327,	// (0x0003e725) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd1,	// (0x000471cf) bg_popup_fep_char_preview_window_g

0x11d2,	// (0x000385d0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x11d2,	// (0x000385d0) cell_vkb2_top_candi_pane_g1

0x11e0,	// (0x000385de) cell_vkb2_top_candi_pane_g2_ParamLimits

0x11e0,	// (0x000385de) cell_vkb2_top_candi_pane_g2

0x5cc9,	// (0x0003d0c7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5cc9,	// (0x0003d0c7) cell_vkb2_top_candi_pane_g3

0x1ba8,	// (0x00038fa6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1ba8,	// (0x00038fa6) cell_vkb2_top_candi_pane_g4

0x56ae,	// (0x0003caac) cell_vkb2_top_candi_pane_g5_ParamLimits

0x56ae,	// (0x0003caac) cell_vkb2_top_candi_pane_g5

0x1bc9,	// (0x00038fc7) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1bc9,	// (0x00038fc7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde4,	// (0x000471e2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde4,	// (0x000471e2) cell_vkb2_top_candi_pane_g

0x1bd7,	// (0x00038fd5) cell_vkb2_top_candi_pane_t1

0xa9d3,	// (0x00041dd1) aid_size_touch_slider_mark_ParamLimits

0xa9d3,	// (0x00041dd1) aid_size_touch_slider_mark

0xe50e,	// (0x0004590c) grid_graphic2_catg_pane_ParamLimits

0xe50e,	// (0x0004590c) grid_graphic2_catg_pane

0xe5ca,	// (0x000459c8) popup_grid_graphic2_window_t1_ParamLimits

0xe5ca,	// (0x000459c8) popup_grid_graphic2_window_t1

0xe5e0,	// (0x000459de) popup_grid_graphic2_window_t2_ParamLimits

0xe5e0,	// (0x000459de) popup_grid_graphic2_window_t2

0x0001,

0xfd9f,	// (0x0004719d) popup_grid_graphic2_window_t_ParamLimits

0xfd9f,	// (0x0004719d) popup_grid_graphic2_window_t

0xb56d,	// (0x0004296b) bg_button_pane_cp05_ParamLimits

0xe76e,	// (0x00045b6c) cell_graphic2_control_pane_g1_ParamLimits

0xe85c,	// (0x00045c5a) cell_graphic2_catg_pane_ParamLimits

0xe85c,	// (0x00045c5a) cell_graphic2_catg_pane

0xb3d3,	// (0x000427d1) bg_button_pane_cp12

0xe86e,	// (0x00045c6c) cell_graphic2_catg_pane_g1

0x6849,	// (0x0003dc47) cell_tb_ext_pane_t1_ParamLimits

0x1992,	// (0x00038d90) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1992,	// (0x00038d90) vkb2_top_cell_right_narrow_pane

0x19aa,	// (0x00038da8) vkb2_top_cell_right_wide_pane_ParamLimits

0x19aa,	// (0x00038da8) vkb2_top_cell_right_wide_pane

0x0f6d,	// (0x0003836b) bg_vkb2_func_pane_ParamLimits

0x0f6d,	// (0x0003836b) bg_vkb2_func_pane

0x1a1b,	// (0x00038e19) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f6d,	// (0x0003836b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f6d,	// (0x0003836b) bg_vkb2_fuc_pane_cp03

0x1a79,	// (0x00038e77) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2993,	// (0x00039d91) bg_vkb2_func_pane_g1

0x299b,	// (0x00039d99) bg_vkb2_func_pane_g2

0x29ab,	// (0x00039da9) bg_vkb2_func_pane_g3

0x29a3,	// (0x00039da1) bg_vkb2_func_pane_g4

0x29b3,	// (0x00039db1) bg_vkb2_func_pane_g5

0x29bb,	// (0x00039db9) bg_vkb2_func_pane_g6

0x29c3,	// (0x00039dc1) bg_vkb2_func_pane_g7

0x29cb,	// (0x00039dc9) bg_vkb2_func_pane_g8

0x298b,	// (0x00039d89) bg_vkb2_func_pane_g9

0x0008,

0xfdf1,	// (0x000471ef) bg_vkb2_func_pane_g

0x0f6d,	// (0x0003836b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f6d,	// (0x0003836b) bg_vkb2_fuc_pane_cp01

0x1a1b,	// (0x00038e19) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1a1b,	// (0x00038e19) vkb2_top_cell_right_wide_pane_g1

0x0f6d,	// (0x0003836b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f6d,	// (0x0003836b) bg_vkb2_fuc_pane_cp02

0x1a79,	// (0x00038e77) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1a79,	// (0x00038e77) vkb2_top_cell_right_narrow_pane_g1

0xdcd7,	// (0x000450d5) aid_touch_area_decrease_ParamLimits

0xdcd7,	// (0x000450d5) aid_touch_area_decrease

0xdd0d,	// (0x0004510b) aid_touch_area_increase_ParamLimits

0xdd0d,	// (0x0004510b) aid_touch_area_increase

0xdd35,	// (0x00045133) aid_touch_area_mute_ParamLimits

0xdd35,	// (0x00045133) aid_touch_area_mute

0xdd65,	// (0x00045163) aid_touch_area_slider_ParamLimits

0xdd65,	// (0x00045163) aid_touch_area_slider

0xdda5,	// (0x000451a3) popup_slider_window_g4_ParamLimits

0xdda5,	// (0x000451a3) popup_slider_window_g4

0xddcd,	// (0x000451cb) popup_slider_window_g5_ParamLimits

0xddcd,	// (0x000451cb) popup_slider_window_g5

0xde01,	// (0x000451ff) popup_slider_window_g6_ParamLimits

0xde01,	// (0x000451ff) popup_slider_window_g6

0x6625,	// (0x0003da23) popup_slider_window_t2_ParamLimits

0x6625,	// (0x0003da23) popup_slider_window_t2

0x0001,

0xfced,	// (0x000470eb) popup_slider_window_t_ParamLimits

0xfced,	// (0x000470eb) popup_slider_window_t

0xde1d,	// (0x0004521b) slider_pane_ParamLimits

0xde1d,	// (0x0004521b) slider_pane

0x734a,	// (0x0003e748) slider_pane_g1_ParamLimits

0x734a,	// (0x0003e748) slider_pane_g1

0x735e,	// (0x0003e75c) slider_pane_g2_ParamLimits

0x735e,	// (0x0003e75c) slider_pane_g2

0x7374,	// (0x0003e772) slider_pane_g3_ParamLimits

0x7374,	// (0x0003e772) slider_pane_g3

0x0003,

0xfe04,	// (0x00047202) slider_pane_g_ParamLimits

0xfe04,	// (0x00047202) slider_pane_g

0xa7c9,	// (0x00041bc7) popup_tb_float_extension_window_ParamLimits

0xa7c9,	// (0x00041bc7) popup_tb_float_extension_window

0x73a0,	// (0x0003e79e) aid_size_cell_tb_float_ext

0xb3d3,	// (0x000427d1) bg_popup_sub_window_cp28

0xe877,	// (0x00045c75) grid_tb_float_ext_pane

0xe881,	// (0x00045c7f) cell_tb_float_ext_pane_ParamLimits

0xe881,	// (0x00045c7f) cell_tb_float_ext_pane

0xe89b,	// (0x00045c99) cell_tb_float_ext_pane_g1

0xe8a4,	// (0x00045ca2) grid_highlight_pane_cp12

0xab30,	// (0x00041f2e) cell_last_hwr_side_pane_ParamLimits

0xab30,	// (0x00041f2e) cell_last_hwr_side_pane

0x4f52,	// (0x0003c350) cell_last_hwr_side_pane_g1

0x73e2,	// (0x0003e7e0) cell_last_hwr_side_pane_g2

0x0001,

0xfe0d,	// (0x0004720b) cell_last_hwr_side_pane_g

0xb0c7,	// (0x000424c5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb0c7,	// (0x000424c5) vkb2_area_bottom_space_btn_pane

0x11d2,	// (0x000385d0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6ea1,	// (0x0003e29f) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1bd7,	// (0x00038fd5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1bf6,	// (0x00038ff4) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1bf6,	// (0x00038ff4) vkb2_area_bottom_space_btn_pane_g1

0x1c30,	// (0x0003902e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1c30,	// (0x0003902e) vkb2_area_bottom_space_btn_pane_g2

0x1c66,	// (0x00039064) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1c66,	// (0x00039064) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe12,	// (0x00047210) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe12,	// (0x00047210) vkb2_area_bottom_space_btn_pane_g

0x1030,	// (0x0003842e) cel_fep_hwr_func_pane_ParamLimits

0x1030,	// (0x0003842e) cel_fep_hwr_func_pane

0xab05,	// (0x00041f03) cell_hwr_side_button_pane_ParamLimits

0xab05,	// (0x00041f03) cell_hwr_side_button_pane

0xdfb6,	// (0x000453b4) aid_area_touch_clock_ParamLimits

0xb56d,	// (0x0004296b) bg_uniindi_top_pane_ParamLimits

0xdfc8,	// (0x000453c6) uniindi_top_pane_g1_ParamLimits

0xdfde,	// (0x000453dc) uniindi_top_pane_g2_ParamLimits

0xdfea,	// (0x000453e8) uniindi_top_pane_g3_ParamLimits

0x68c3,	// (0x0003dcc1) uniindi_top_pane_g4_ParamLimits

0xfd25,	// (0x00047123) uniindi_top_pane_g_ParamLimits

0xdffb,	// (0x000453f9) uniindi_top_pane_t1_ParamLimits

0xb56d,	// (0x0004296b) bg_vkb2_func_pane_cp01_ParamLimits

0xb56d,	// (0x0004296b) bg_vkb2_func_pane_cp01

0x73eb,	// (0x0003e7e9) cel_fep_hwr_func_pane_g1_ParamLimits

0x73eb,	// (0x0003e7e9) cel_fep_hwr_func_pane_g1

0xb56d,	// (0x0004296b) bg_vkb2_func_pane_cp02_ParamLimits

0xb56d,	// (0x0004296b) bg_vkb2_func_pane_cp02

0x73eb,	// (0x0003e7e9) cell_hwr_side_button_pane_g1_ParamLimits

0x73eb,	// (0x0003e7e9) cell_hwr_side_button_pane_g1

0x280f,	// (0x00039c0d) status_pane_g4_ParamLimits

0x280f,	// (0x00039c0d) status_pane_g4

0x2829,	// (0x00039c27) status_pane_t1

0x4c93,	// (0x0003c091) form2_midp_gauge_slider_cont_pane

0x4c9b,	// (0x0003c099) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcc78,	// (0x00044076) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcc8a,	// (0x00044088) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x00046eea) form2_midp_gauge_slider_pane_t_ParamLimits

0x4cd1,	// (0x0003c0cf) form2_midp_slider_pane_ParamLimits

0x15b0,	// (0x000389ae) aid_size_cell_func_vkb2_ParamLimits

0x15b0,	// (0x000389ae) aid_size_cell_func_vkb2

0x738c,	// (0x0003e78a) slider_pane_g4_ParamLimits

0x738c,	// (0x0003e78a) slider_pane_g4

0xb128,	// (0x00042526) form2_midp_gauge_slider_pane_t2_cp01

0xb136,	// (0x00042534) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb136,	// (0x00042534) form2_midp_gauge_slider_pane_t3_cp01

0x1cdb,	// (0x000390d9) form2_midp_slider_pane_cp01

0xb3d3,	// (0x000427d1) navi_smil_pane

0x7424,	// (0x0003e822) navi_smil_pane_g1

0x742c,	// (0x0003e82a) navi_smil_pane_t1

0x73f9,	// (0x0003e7f7) form2_midp_slider_pane_g1

0x7402,	// (0x0003e800) form2_midp_slider_pane_g2

0x740a,	// (0x0003e808) form2_midp_slider_pane_g3

0x73f9,	// (0x0003e7f7) form2_midp_slider_pane_g4

0xe8ad,	// (0x00045cab) form2_midp_slider_pane_g5

0x0004,

0xfe1b,	// (0x00047219) form2_midp_slider_pane_g

0x1ca0,	// (0x0003909e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1ca0,	// (0x0003909e) vkb2_area_bottom_space_btn_pane_g4

0xbe42,	// (0x00043240) lc0_navi_pane_ParamLimits

0xbe42,	// (0x00043240) lc0_navi_pane

0xbeac,	// (0x000432aa) lc0_stat_indi_pane_ParamLimits

0xbeac,	// (0x000432aa) lc0_stat_indi_pane

0xbec1,	// (0x000432bf) ls0_title_pane_ParamLimits

0xbec1,	// (0x000432bf) ls0_title_pane

0xb7f5,	// (0x00042bf3) bg_popup_sub_pane_cp14_ParamLimits

0xdf9d,	// (0x0004539b) list_uniindi_pane_ParamLimits

0xdfa9,	// (0x000453a7) uniindi_top_pane_ParamLimits

0x690c,	// (0x0003dd0a) list_single_uniindi_pane_g1_ParamLimits

0x691f,	// (0x0003dd1d) list_single_uniindi_pane_t1_ParamLimits

0xb153,	// (0x00042551) lc0_stat_clock_pane_ParamLimits

0xb153,	// (0x00042551) lc0_stat_clock_pane

0xe8b8,	// (0x00045cb6) lc0_stat_indi_pane_g1_ParamLimits

0xe8b8,	// (0x00045cb6) lc0_stat_indi_pane_g1

0xe8c5,	// (0x00045cc3) lc0_stat_indi_pane_g2_ParamLimits

0xe8c5,	// (0x00045cc3) lc0_stat_indi_pane_g2

0x0001,

0xfe26,	// (0x00047224) lc0_stat_indi_pane_g_ParamLimits

0xfe26,	// (0x00047224) lc0_stat_indi_pane_g

0xb163,	// (0x00042561) lc0_uni_indicator_pane_ParamLimits

0xb163,	// (0x00042561) lc0_uni_indicator_pane

0xe8d2,	// (0x00045cd0) ls0_title_pane_g1_ParamLimits

0xe8d2,	// (0x00045cd0) ls0_title_pane_g1

0xe8e6,	// (0x00045ce4) ls0_title_pane_t1_ParamLimits

0xe8e6,	// (0x00045ce4) ls0_title_pane_t1

0xb173,	// (0x00042571) lc0_uni_indicator_pane_g1_ParamLimits

0xb173,	// (0x00042571) lc0_uni_indicator_pane_g1

0x749e,	// (0x0003e89c) lc0_stat_clock_pane_t1

0xeed2,	// (0x000462d0) main_ai5_pane

0x74ac,	// (0x0003e8aa) ai5_sk_pane_ParamLimits

0x74ac,	// (0x0003e8aa) ai5_sk_pane

0xe914,	// (0x00045d12) cell_ai5_widget_pane_ParamLimits

0xe914,	// (0x00045d12) cell_ai5_widget_pane

0x756b,	// (0x0003e969) aid_size_cell_widget_grid

0x7579,	// (0x0003e977) bg_ai5_widget_pane_ParamLimits

0x7579,	// (0x0003e977) bg_ai5_widget_pane

0x75ed,	// (0x0003e9eb) cell_ai5_widget_pane_g2

0x75fd,	// (0x0003e9fb) cell_ai5_widget_pane_g3

0x7614,	// (0x0003ea12) cell_ai5_widget_pane_g4

0x7620,	// (0x0003ea1e) cell_ai5_widget_pane_g5

0x762c,	// (0x0003ea2a) cell_ai5_widget_pane_g6

0x7638,	// (0x0003ea36) cell_ai5_widget_pane_g7

0x7680,	// (0x0003ea7e) cell_ai5_widget_pane_t1_ParamLimits

0x7680,	// (0x0003ea7e) cell_ai5_widget_pane_t1

0x769d,	// (0x0003ea9b) cell_ai5_widget_pane_t2_ParamLimits

0x769d,	// (0x0003ea9b) cell_ai5_widget_pane_t2

0x76b5,	// (0x0003eab3) cell_ai5_widget_pane_t3_ParamLimits

0x76b5,	// (0x0003eab3) cell_ai5_widget_pane_t3

0x76cd,	// (0x0003eacb) cell_ai5_widget_pane_t4_ParamLimits

0x76cd,	// (0x0003eacb) cell_ai5_widget_pane_t4

0x76ea,	// (0x0003eae8) cell_ai5_widget_pane_t5_ParamLimits

0x76ea,	// (0x0003eae8) cell_ai5_widget_pane_t5

0x7709,	// (0x0003eb07) cell_ai5_widget_pane_t6_ParamLimits

0x7709,	// (0x0003eb07) cell_ai5_widget_pane_t6

0x771b,	// (0x0003eb19) cell_ai5_widget_pane_t7_ParamLimits

0x771b,	// (0x0003eb19) cell_ai5_widget_pane_t7

0x7734,	// (0x0003eb32) cell_ai5_widget_pane_t8_ParamLimits

0x7734,	// (0x0003eb32) cell_ai5_widget_pane_t8

0x0009,

0xfe40,	// (0x0004723e) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x0004723e) cell_ai5_widget_pane_t

0x7788,	// (0x0003eb86) grid_ai5_widget_pane

0xb7f5,	// (0x00042bf3) highlight_cell_ai5_widget_pane_ParamLimits

0xb7f5,	// (0x00042bf3) highlight_cell_ai5_widget_pane

0xe97a,	// (0x00045d78) ai5_sk_left_pane

0xe984,	// (0x00045d82) ai5_sk_middle_pane

0xe98e,	// (0x00045d8c) ai5_sk_right_pane

0x77b4,	// (0x0003ebb2) bg_ai5_widget_pane_g1_ParamLimits

0x77b4,	// (0x0003ebb2) bg_ai5_widget_pane_g1

0x77c0,	// (0x0003ebbe) bg_ai5_widget_pane_g2_ParamLimits

0x77c0,	// (0x0003ebbe) bg_ai5_widget_pane_g2

0x77cc,	// (0x0003ebca) bg_ai5_widget_pane_g3_ParamLimits

0x77cc,	// (0x0003ebca) bg_ai5_widget_pane_g3

0x77d8,	// (0x0003ebd6) bg_ai5_widget_pane_g4_ParamLimits

0x77d8,	// (0x0003ebd6) bg_ai5_widget_pane_g4

0x77e4,	// (0x0003ebe2) bg_ai5_widget_pane_g5_ParamLimits

0x77e4,	// (0x0003ebe2) bg_ai5_widget_pane_g5

0x77f0,	// (0x0003ebee) bg_ai5_widget_pane_g6_ParamLimits

0x77f0,	// (0x0003ebee) bg_ai5_widget_pane_g6

0x77fc,	// (0x0003ebfa) bg_ai5_widget_pane_g7_ParamLimits

0x77fc,	// (0x0003ebfa) bg_ai5_widget_pane_g7

0x7808,	// (0x0003ec06) bg_ai5_widget_pane_g8_ParamLimits

0x7808,	// (0x0003ec06) bg_ai5_widget_pane_g8

0x7814,	// (0x0003ec12) bg_ai5_widget_pane_g9_ParamLimits

0x7814,	// (0x0003ec12) bg_ai5_widget_pane_g9

0x0008,

0xfe55,	// (0x00047253) bg_ai5_widget_pane_g_ParamLimits

0xfe55,	// (0x00047253) bg_ai5_widget_pane_g

0x7846,	// (0x0003ec44) cell_shortcut_ai5_widget_pane_ParamLimits

0x7846,	// (0x0003ec44) cell_shortcut_ai5_widget_pane

0x2138,	// (0x00039536) bg_cell_shortcut_ai5_widget_pane

0x7857,	// (0x0003ec55) cell_grid_ai5_widget_pane_g1

0x2138,	// (0x00039536) highlight_cell_shortcut_ai5_widget_pane

0x2993,	// (0x00039d91) ai5_sk_left_pane_g1

0x7860,	// (0x0003ec5e) ai5_sk_left_pane_g2

0x7868,	// (0x0003ec66) ai5_sk_left_pane_g3

0x7870,	// (0x0003ec6e) ai5_sk_left_pane_g4

0x0003,

0xfe68,	// (0x00047266) ai5_sk_left_pane_g

0x7878,	// (0x0003ec76) ai5_sk_left_pane_t1

0x299b,	// (0x00039d99) ai5_sk_right_pane_g1

0x7886,	// (0x0003ec84) ai5_sk_right_pane_g2

0x788e,	// (0x0003ec8c) ai5_sk_right_pane_g3

0x7896,	// (0x0003ec94) ai5_sk_right_pane_g4

0x0003,

0xfe71,	// (0x0004726f) ai5_sk_right_pane_g

0x789e,	// (0x0003ec9c) ai5_sk_right_pane_t1

0x299b,	// (0x00039d99) ai5_sk_middle_pane_g1

0x2993,	// (0x00039d91) ai5_sk_middle_pane_g2

0x29b3,	// (0x00039db1) ai5_sk_middle_pane_g3

0x788e,	// (0x0003ec8c) ai5_sk_middle_pane_g4

0x7868,	// (0x0003ec66) ai5_sk_middle_pane_g5

0x78ac,	// (0x0003ecaa) ai5_sk_middle_pane_g6

0xe998,	// (0x00045d96) ai5_sk_middle_pane_g7

0x0006,

0xfe7a,	// (0x00047278) ai5_sk_middle_pane_g

0xbd2e,	// (0x0004312c) aid_touch_area_size_lc0_ParamLimits

0xbd2e,	// (0x0004312c) aid_touch_area_size_lc0

0x1201,	// (0x000385ff) cell_hwr_candidate_pane_t1_ParamLimits

0x24e0,	// (0x000398de) aid_touch_navi_pane

0xbfba,	// (0x000433b8) status_dt_navi_pane_ParamLimits

0xbfba,	// (0x000433b8) status_dt_navi_pane

0xbfd2,	// (0x000433d0) status_dt_sta_pane_ParamLimits

0xbfd2,	// (0x000433d0) status_dt_sta_pane

0xe9a0,	// (0x00045d9e) dt_sta_controll_pane

0xe9ad,	// (0x00045dab) dt_sta_indi_pane

0xe9ba,	// (0x00045db8) dt_sta_title_pane

0xb56d,	// (0x0004296b) bg_dt_sta_indi_pane_ParamLimits

0xb56d,	// (0x0004296b) bg_dt_sta_indi_pane

0xe9cc,	// (0x00045dca) dt_sta_battery_pane

0xe9d4,	// (0x00045dd2) dt_sta_indi_pane_g1

0x78fe,	// (0x0003ecfc) dt_sta_indi_pane_g2

0x7907,	// (0x0003ed05) dt_sta_indi_pane_g3

0x0002,

0xfe89,	// (0x00047287) dt_sta_indi_pane_g

0x7910,	// (0x0003ed0e) dt_sta_signal_pane

0xb7f5,	// (0x00042bf3) bg_dt_sta_title_pane_ParamLimits

0xb7f5,	// (0x00042bf3) bg_dt_sta_title_pane

0x37c1,	// (0x0003abbf) dt_sta_title_pane_g1

0xe9dd,	// (0x00045ddb) dt_sta_title_pane_t1_ParamLimits

0xe9dd,	// (0x00045ddb) dt_sta_title_pane_t1

0xb3d3,	// (0x000427d1) bg_dt_sta_control_pane

0xe9f2,	// (0x00045df0) dt_sta_controll_pane_g1

0xe9fb,	// (0x00045df9) bg_dt_sta_title_pane_g1

0xea04,	// (0x00045e02) bg_dt_sta_title_pane_g2

0xea0d,	// (0x00045e0b) bg_dt_sta_title_pane_g3

0x0002,

0xfe90,	// (0x0004728e) bg_dt_sta_title_pane_g

0x4f52,	// (0x0003c350) bg_dt_sta_indi_pane_g1

0x7952,	// (0x0003ed50) dt_sta_signal_pane_g1

0x795a,	// (0x0003ed58) dt_sta_signal_pane_g2

0x0001,

0xfe97,	// (0x00047295) dt_sta_signal_pane_g

0x7962,	// (0x0003ed60) dt_sta_battery_pane_g1

0x796b,	// (0x0003ed69) dt_sta_battery_pane_t1

0x4f52,	// (0x0003c350) bg_dt_sta_control_pane_g1

0xbcab,	// (0x000430a9) fep_china_uni_eep_pane

0xbcb3,	// (0x000430b1) fep_china_uni_entry_pane_ParamLimits

0xbcc3,	// (0x000430c1) popup_fep_china_uni_window_g1_ParamLimits

0xbcd3,	// (0x000430d1) popup_fep_china_uni_window_g2_ParamLimits

0xbcd3,	// (0x000430d1) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x00046b0c) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x00046b0c) popup_fep_china_uni_window_g

0x797a,	// (0x0003ed78) fep_china_uni_eep_pane_g1

0x7982,	// (0x0003ed80) fep_china_uni_eep_pane_t1

0x741b,	// (0x0003e819) aid_touch_area_size_smil_player

0x2636,	// (0x00039a34) lc0_clock_pane

0x281d,	// (0x00039c1b) status_pane_g5_ParamLimits

0x281d,	// (0x00039c1b) status_pane_g5

0xa2ff,	// (0x000416fd) popup_keymap_window

0x27db,	// (0x00039bd9) status_icon_pane

0x75fd,	// (0x0003e9fb) cell_ai5_widget_pane_g3_ParamLimits

0x7614,	// (0x0003ea12) cell_ai5_widget_pane_g4_ParamLimits

0x7620,	// (0x0003ea1e) cell_ai5_widget_pane_g5_ParamLimits

0x7644,	// (0x0003ea42) cell_ai5_widget_pane_g8_ParamLimits

0x7644,	// (0x0003ea42) cell_ai5_widget_pane_g8

0x7658,	// (0x0003ea56) cell_ai5_widget_pane_g9_ParamLimits

0x7658,	// (0x0003ea56) cell_ai5_widget_pane_g9

0x766c,	// (0x0003ea6a) cell_ai5_widget_pane_g10_ParamLimits

0x766c,	// (0x0003ea6a) cell_ai5_widget_pane_g10

0x7991,	// (0x0003ed8f) status_icon_pane_g1

0xb3d3,	// (0x000427d1) bg_popup_sub_pane_cp13

0x7999,	// (0x0003ed97) popup_keymap_window_t1

0x9fcb,	// (0x000413c9) control_pane_g6_ParamLimits

0x9fcb,	// (0x000413c9) control_pane_g6

0x9fd8,	// (0x000413d6) control_pane_g7_ParamLimits

0x9fd8,	// (0x000413d6) control_pane_g7

0x9fe5,	// (0x000413e3) control_pane_g8_ParamLimits

0x9fe5,	// (0x000413e3) control_pane_g8

0xe9a0,	// (0x00045d9e) dt_sta_controll_pane_ParamLimits

0xe9ad,	// (0x00045dab) dt_sta_indi_pane_ParamLimits

0xe9ba,	// (0x00045db8) dt_sta_title_pane_ParamLimits

0xb740,	// (0x00042b3e) aid_size_touch_scroll_bar_cale

0x8ca5,	// (0x000400a3) popup_discreet_window_ParamLimits

0x8ca5,	// (0x000400a3) popup_discreet_window

0x8cf7,	// (0x000400f5) popup_sk_window

0x3005,	// (0x0003a403) bg_popup_sub_pane_cp28_ParamLimits

0x3005,	// (0x0003a403) bg_popup_sub_pane_cp28

0x79a7,	// (0x0003eda5) popup_discreet_window_g1_ParamLimits

0x79a7,	// (0x0003eda5) popup_discreet_window_g1

0xea16,	// (0x00045e14) popup_discreet_window_t1_ParamLimits

0xea16,	// (0x00045e14) popup_discreet_window_t1

0x79e5,	// (0x0003ede3) popup_discreet_window_t2_ParamLimits

0x79e5,	// (0x0003ede3) popup_discreet_window_t2

0x0002,

0xfe9c,	// (0x0004729a) popup_discreet_window_t_ParamLimits

0xfe9c,	// (0x0004729a) popup_discreet_window_t

0x1d12,	// (0x00039110) popup_sk_window_g1

0x1d1c,	// (0x0003911a) popup_sk_window_g2

0x0001,

0xfea3,	// (0x000472a1) popup_sk_window_g

0xb19e,	// (0x0004259c) popup_sk_window_t1

0xb1ac,	// (0x000425aa) popup_sk_window_t1_copy1

0x75ed,	// (0x0003e9eb) cell_ai5_widget_pane_g2_ParamLimits

0x7746,	// (0x0003eb44) cell_ai5_widget_pane_t9_ParamLimits

0x7746,	// (0x0003eb44) cell_ai5_widget_pane_t9

0xb3d3,	// (0x000427d1) main_fep_fshwr2_pane

0xb1ba,	// (0x000425b8) aid_fshwr2_btn_pane

0xb1cc,	// (0x000425ca) aid_fshwr2_syb_pane

0xb1de,	// (0x000425dc) aid_fshwr2_txt_pane

0xb1ed,	// (0x000425eb) fshwr2_func_candi_pane

0xb20c,	// (0x0004260a) fshwr2_hwr_syb_pane

0xb227,	// (0x00042625) fshwr2_icf_pane

0xeed2,	// (0x000462d0) fshwr2_icf_bg_pane

0x1dc1,	// (0x000391bf) fshwr2_icf_pane_t1_ParamLimits

0x1dc1,	// (0x000391bf) fshwr2_icf_pane_t1

0xbc28,	// (0x00043026) fshwr2_func_candi_pane_g1

0xea34,	// (0x00045e32) fshwr2_func_candi_row_pane_ParamLimits

0xea34,	// (0x00045e32) fshwr2_func_candi_row_pane

0xb253,	// (0x00042651) cell_fshwr2_syb_pane_ParamLimits

0xb253,	// (0x00042651) cell_fshwr2_syb_pane

0x11d2,	// (0x000385d0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x11d2,	// (0x000385d0) fshwr2_hwr_syb_pane_g1

0xeed2,	// (0x000462d0) bg_popup_call_pane_cp01

0xb269,	// (0x00042667) fshwr2_func_candi_cell_pane_ParamLimits

0xb269,	// (0x00042667) fshwr2_func_candi_cell_pane

0xea57,	// (0x00045e55) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xea57,	// (0x00045e55) fshwr2_func_candi_cell_bg_pane

0xb2b4,	// (0x000426b2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb2b4,	// (0x000426b2) fshwr2_func_candi_cell_pane_g1

0xb2eb,	// (0x000426e9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb2eb,	// (0x000426e9) fshwr2_func_candi_cell_pane_t1

0xeed2,	// (0x000462d0) bg_button_pane_cp08

0x7a47,	// (0x0003ee45) cell_fshwr2_syb_bg_pane

0xb306,	// (0x00042704) cell_fshwr2_syb_bg_pane_g1

0xb30e,	// (0x0004270c) cell_fshwr2_syb_bg_pane_t1

0xb7f5,	// (0x00042bf3) main_tmo_pane

0xc695,	// (0x00043a93) uni_indicator_pane_g1_ParamLimits

0xc6ab,	// (0x00043aa9) uni_indicator_pane_g2_ParamLimits

0xc6c1,	// (0x00043abf) uni_indicator_pane_g3_ParamLimits

0x3b2e,	// (0x0003af2c) uni_indicator_pane_g4_ParamLimits

0x3b2e,	// (0x0003af2c) uni_indicator_pane_g4

0x3b42,	// (0x0003af40) uni_indicator_pane_g5_ParamLimits

0x3b42,	// (0x0003af40) uni_indicator_pane_g5

0x3b42,	// (0x0003af40) uni_indicator_pane_g6_ParamLimits

0x3b42,	// (0x0003af40) uni_indicator_pane_g6

0xf906,	// (0x00046d04) uni_indicator_pane_g_ParamLimits

0xdcb9,	// (0x000450b7) popup_tmo_note_window_ParamLimits

0xdcb9,	// (0x000450b7) popup_tmo_note_window

0x1592,	// (0x00038990) fshwr2_bg_pane

0xb2dc,	// (0x000426da) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb2dc,	// (0x000426da) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea8,	// (0x000472a6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea8,	// (0x000472a6) fshwr2_func_candi_cell_pane_g

0x11ba,	// (0x000385b8) bg_popup_window_pane_cp01

0x1e8d,	// (0x0003928b) bg_popup_window_pane_g1_cp01

0x7a4f,	// (0x0003ee4d) bg_popup_window_pane_cp22_ParamLimits

0x7a4f,	// (0x0003ee4d) bg_popup_window_pane_cp22

0xea63,	// (0x00045e61) listscroll_tmo_link_pane_ParamLimits

0xea63,	// (0x00045e61) listscroll_tmo_link_pane

0x7a9d,	// (0x0003ee9b) popup_tmo_note_window_g1_ParamLimits

0x7a9d,	// (0x0003ee9b) popup_tmo_note_window_g1

0xeaa3,	// (0x00045ea1) tmo_note_info_pane_ParamLimits

0xeaa3,	// (0x00045ea1) tmo_note_info_pane

0xeabd,	// (0x00045ebb) list_tmo_note_info_pane_g1_ParamLimits

0xeabd,	// (0x00045ebb) list_tmo_note_info_pane_g1

0x7adb,	// (0x0003eed9) list_tmo_note_info_pane_g2_ParamLimits

0x7adb,	// (0x0003eed9) list_tmo_note_info_pane_g2

0x0001,

0xfead,	// (0x000472ab) list_tmo_note_info_pane_g_ParamLimits

0xfead,	// (0x000472ab) list_tmo_note_info_pane_g

0x7af7,	// (0x0003eef5) list_tmo_note_info_text_pane_ParamLimits

0x7af7,	// (0x0003eef5) list_tmo_note_info_text_pane

0x7b78,	// (0x0003ef76) list_tmo_link_pane

0x7b85,	// (0x0003ef83) scroll_pane_cp20

0x7b92,	// (0x0003ef90) list_single_tmo_link_pane_ParamLimits

0x7b92,	// (0x0003ef90) list_single_tmo_link_pane

0x7ba2,	// (0x0003efa0) list_single_tmo_link_pane_t1

0x7bb0,	// (0x0003efae) list_tmo_note_info_text_pane_t1_ParamLimits

0x7bb0,	// (0x0003efae) list_tmo_note_info_text_pane_t1

0x9935,	// (0x00040d33) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9935,	// (0x00040d33) aid_size_touch_scroll_bar_cp01

0x982c,	// (0x00040c2a) aid_size_touch_slider_marker

0x8ce7,	// (0x000400e5) popup_settings_window_ParamLimits

0x8ce7,	// (0x000400e5) popup_settings_window

0xd334,	// (0x00044732) popup_candi_list_indi_window

0x24e0,	// (0x000398de) aid_touch_navi_pane_ParamLimits

0x14ed,	// (0x000388eb) rs_clock_indi_pane

0x14f6,	// (0x000388f4) sctrl_sk_bottom_pane_ParamLimits

0x1507,	// (0x00038905) sctrl_sk_top_pane_ParamLimits

0xae04,	// (0x00042202) popup_fep_tooltip_window

0x756b,	// (0x0003e969) aid_size_cell_widget_grid_ParamLimits

0x75d8,	// (0x0003e9d6) cell_ai5_widget_pane_g1_ParamLimits

0x75d8,	// (0x0003e9d6) cell_ai5_widget_pane_g1

0x762c,	// (0x0003ea2a) cell_ai5_widget_pane_g6_ParamLimits

0x7638,	// (0x0003ea36) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2b,	// (0x00047229) cell_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x00047229) cell_ai5_widget_pane_g

0x776a,	// (0x0003eb68) cell_ai5_widget_pane_t10_ParamLimits

0x776a,	// (0x0003eb68) cell_ai5_widget_pane_t10

0x7788,	// (0x0003eb86) grid_ai5_widget_pane_ParamLimits

0x7820,	// (0x0003ec1e) cell_contacts_ai5_widget_pane_ParamLimits

0x7820,	// (0x0003ec1e) cell_contacts_ai5_widget_pane

0x79fa,	// (0x0003edf8) popup_discreet_window_t3_ParamLimits

0x79fa,	// (0x0003edf8) popup_discreet_window_t3

0xb23f,	// (0x0004263d) popup_fshwr2_char_preview_window_ParamLimits

0xb23f,	// (0x0004263d) popup_fshwr2_char_preview_window

0xead4,	// (0x00045ed2) tmo_note_info_pane_t1

0xeae9,	// (0x00045ee7) tmo_note_info_pane_t2

0xeb00,	// (0x00045efe) tmo_note_info_pane_t3

0x7b54,	// (0x0003ef52) tmo_note_info_pane_t4

0x7b66,	// (0x0003ef64) tmo_note_info_pane_t5

0x0004,

0xfeb2,	// (0x000472b0) tmo_note_info_pane_t

0x7b78,	// (0x0003ef76) list_tmo_link_pane_ParamLimits

0x7b85,	// (0x0003ef83) scroll_pane_cp20_ParamLimits

0xeed2,	// (0x000462d0) bg_popup_fep_char_preview_window_cp01

0xeb15,	// (0x00045f13) popup_fshwr2_char_preview_window_t1

0x7bd7,	// (0x0003efd5) popup_candi_list_indi_window_g1

0x7be0,	// (0x0003efde) bg_cell_contacts_ai5_widget_pane

0x7bec,	// (0x0003efea) cell_contacts_ai5_widget_pane_g1

0x5603,	// (0x0003ca01) cell_contacts_ai5_widget_pane_g2

0x7c01,	// (0x0003efff) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebd,	// (0x000472bb) cell_contacts_ai5_widget_pane_g

0x7c0d,	// (0x0003f00b) cell_contacts_ai5_widget_pane_t1

0xb7f5,	// (0x00042bf3) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7c84,	// (0x0003f082) settings_container_pane

0x2138,	// (0x00039536) listscroll_set_pane_copy1

0x465b,	// (0x0003ba59) scroll_pane_cp121_copy1

0x2dbe,	// (0x0003a1bc) set_content_pane_copy1

0xeb88,	// (0x00045f86) aid_height_set_list_copy1_ParamLimits

0xeb88,	// (0x00045f86) aid_height_set_list_copy1

0x3d3a,	// (0x0003b138) aid_size_parent_copy1_ParamLimits

0x3d3a,	// (0x0003b138) aid_size_parent_copy1

0xeb94,	// (0x00045f92) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeb94,	// (0x00045f92) button_value_adjust_pane_cp6_copy1

0x247e,	// (0x0003987c) list_highlight_pane_cp2_copy1_ParamLimits

0x247e,	// (0x0003987c) list_highlight_pane_cp2_copy1

0xeba8,	// (0x00045fa6) list_set_pane_copy1_ParamLimits

0xeba8,	// (0x00045fa6) list_set_pane_copy1

0xeb23,	// (0x00045f21) main_pane_set_t1_copy1_ParamLimits

0xeb23,	// (0x00045f21) main_pane_set_t1_copy1

0xeb5d,	// (0x00045f5b) main_pane_set_t2_copy1_ParamLimits

0xeb5d,	// (0x00045f5b) main_pane_set_t2_copy1

0xec55,	// (0x00046053) main_pane_set_t3_copy1

0xec63,	// (0x00046061) main_pane_set_t4_copy1

0xeb7c,	// (0x00045f7a) set_content_pane_g1_copy1_ParamLimits

0xeb7c,	// (0x00045f7a) set_content_pane_g1_copy1

0xec71,	// (0x0004606f) setting_code_pane_copy1

0x7d81,	// (0x0003f17f) setting_slider_graphic_pane_copy1

0x7d81,	// (0x0003f17f) setting_slider_pane_copy1

0x7d81,	// (0x0003f17f) setting_text_pane_copy1

0x7d81,	// (0x0003f17f) setting_volume_pane_copy1

0xec71,	// (0x0004606f) settings_code_pane_cp2_copy1

0xec79,	// (0x00046077) settings_code_pane_cp_copy1_ParamLimits

0xec79,	// (0x00046077) settings_code_pane_cp_copy1

0xb31d,	// (0x0004271b) volume_set_pane_copy1

0xec8d,	// (0x0004608b) volume_set_pane_g10_copy1

0xec95,	// (0x00046093) volume_set_pane_g1_copy1

0xec9d,	// (0x0004609b) volume_set_pane_g2_copy1

0xeca5,	// (0x000460a3) volume_set_pane_g3_copy1

0xecad,	// (0x000460ab) volume_set_pane_g4_copy1

0xecb5,	// (0x000460b3) volume_set_pane_g5_copy1

0xecbd,	// (0x000460bb) volume_set_pane_g6_copy1

0xecc5,	// (0x000460c3) volume_set_pane_g7_copy1

0xeccd,	// (0x000460cb) volume_set_pane_g8_copy1

0xecd5,	// (0x000460d3) volume_set_pane_g9_copy1

0xb443,	// (0x00042841) bg_set_opt_pane_cp_copy1_ParamLimits

0xb443,	// (0x00042841) bg_set_opt_pane_cp_copy1

0xb325,	// (0x00042723) setting_slider_pane_t1_copy1_ParamLimits

0xb325,	// (0x00042723) setting_slider_pane_t1_copy1

0xb343,	// (0x00042741) setting_slider_pane_t2_copy1_ParamLimits

0xb343,	// (0x00042741) setting_slider_pane_t2_copy1

0xb35d,	// (0x0004275b) setting_slider_pane_t3_copy1_ParamLimits

0xb35d,	// (0x0004275b) setting_slider_pane_t3_copy1

0xb375,	// (0x00042773) slider_set_pane_copy1_ParamLimits

0xb375,	// (0x00042773) slider_set_pane_copy1

0xb84d,	// (0x00042c4b) set_opt_bg_pane_g1_copy2

0xb855,	// (0x00042c53) set_opt_bg_pane_g2_copy2

0x7ded,	// (0x0003f1eb) set_opt_bg_pane_g3_copy2

0xb865,	// (0x00042c63) set_opt_bg_pane_g4_copy2

0xb86d,	// (0x00042c6b) set_opt_bg_pane_g5_copy2

0xb875,	// (0x00042c73) set_opt_bg_pane_g6_copy2

0xecdd,	// (0x000460db) set_opt_bg_pane_g7_copy2

0x7dff,	// (0x0003f1fd) set_opt_bg_pane_g8_copy2

0x7e09,	// (0x0003f207) set_opt_bg_pane_g9_copy2

0xb38b,	// (0x00042789) aid_size_touch_slider_mark_copy1_ParamLimits

0xb38b,	// (0x00042789) aid_size_touch_slider_mark_copy1

0xece5,	// (0x000460e3) slider_set_pane_g1_copy1

0x1f18,	// (0x00039316) slider_set_pane_g2_copy1

0xa9e7,	// (0x00041de5) slider_set_pane_g3_copy1_ParamLimits

0xa9e7,	// (0x00041de5) slider_set_pane_g3_copy1

0xa9fb,	// (0x00041df9) slider_set_pane_g4_copy1_ParamLimits

0xa9fb,	// (0x00041df9) slider_set_pane_g4_copy1

0xaa13,	// (0x00041e11) slider_set_pane_g5_copy1_ParamLimits

0xaa13,	// (0x00041e11) slider_set_pane_g5_copy1

0xa9e7,	// (0x00041de5) slider_set_pane_g6_copy1_ParamLimits

0xa9e7,	// (0x00041de5) slider_set_pane_g6_copy1

0xb39f,	// (0x0004279d) slider_set_pane_g7_copy1_ParamLimits

0xb39f,	// (0x0004279d) slider_set_pane_g7_copy1

0xb3e7,	// (0x000427e5) bg_set_opt_pane_cp2_copy1

0xecee,	// (0x000460ec) setting_slider_graphic_pane_g1_copy1

0xecf7,	// (0x000460f5) setting_slider_graphic_pane_t1_copy1

0xed07,	// (0x00046105) setting_slider_graphic_pane_t2_copy1

0xed17,	// (0x00046115) slider_set_pane_cp_copy1

0x7e55,	// (0x0003f253) input_focus_pane_cp1_copy1

0x7e5e,	// (0x0003f25c) list_set_text_pane_copy1

0x7e66,	// (0x0003f264) setting_text_pane_g1_copy1

0xed27,	// (0x00046125) set_text_pane_t1_copy1

0x7e55,	// (0x0003f253) input_focus_pane_cp2_copy1

0x7e66,	// (0x0003f264) setting_code_pane_g1_copy1

0x7e6f,	// (0x0003f26d) setting_code_pane_t1_copy1

0x7e7d,	// (0x0003f27b) list_set_graphic_pane_copy1

0xb3e7,	// (0x000427e5) bg_set_opt_pane_cp4_copy1

0xf4df,	// (0x000468dd) list_set_graphic_pane_g1_copy1_ParamLimits

0xf4df,	// (0x000468dd) list_set_graphic_pane_g1_copy1

0x7e91,	// (0x0003f28f) list_set_graphic_pane_g2_copy1

0xf4f7,	// (0x000468f5) list_set_graphic_pane_t1_copy1_ParamLimits

0xf4f7,	// (0x000468f5) list_set_graphic_pane_t1_copy1

0x4f52,	// (0x0003c350) rs_clock_indi_pane_g1

0x7e99,	// (0x0003f297) rs_clock_indi_pane_t1

0x7ea7,	// (0x0003f2a5) rs_indi_pane

0x7eaf,	// (0x0003f2ad) rs_indi_pane_g1

0x7eb8,	// (0x0003f2b6) rs_indi_pane_g2

0x7bd7,	// (0x0003efd5) rs_indi_pane_g3

0x0002,

0xfec4,	// (0x000472c2) rs_indi_pane_g

0x2138,	// (0x00039536) bg_popup_preview_window_pane_cp03

0x7ec1,	// (0x0003f2bf) popup_fep_tooltip_window_t1

0xd139,	// (0x00044537) popup_note2_window_g2_ParamLimits

0xd139,	// (0x00044537) popup_note2_window_g2

0x0001,

0xfc64,	// (0x00047062) popup_note2_window_g_ParamLimits

0xfc64,	// (0x00047062) popup_note2_window_g

0x60fb,	// (0x0003d4f9) bg_popup_sub_pane_cp11_ParamLimits

0x6108,	// (0x0003d506) cell_ai3_links_pane_g1_ParamLimits

0x611f,	// (0x0003d51d) cell_ai3_links_pane_t1

0xed27,	// (0x00046125) set_text_pane_t1_copy1_ParamLimits

0x0158,	// (0x00037556) cell_graphic_popup_pane_cp2_ParamLimits

0x0158,	// (0x00037556) cell_graphic_popup_pane_cp2

0xed43,	// (0x00046141) cell_graphic_popup_pane_g1_cp2

0xb6c3,	// (0x00042ac1) cell_graphic_popup_pane_g2_cp2

0x7ed7,	// (0x0003f2d5) cell_graphic_popup_pane_g3_cp2

0xed4b,	// (0x00046149) cell_graphic_popup_pane_t2_cp2

0xb6d4,	// (0x00042ad2) grid_highlight_pane_cp3_cp2

0xbaa5,	// (0x00042ea3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb7f5,	// (0x00042bf3) main_tmo_pane_ParamLimits

0xdcad,	// (0x000450ab) popup_tmo_big_image_note_window

0x75c7,	// (0x0003e9c5) cell_ai5_widget_list_pane

0x75cf,	// (0x0003e9cd) cell_ai5_widget_lrg_icon_pane

0xead4,	// (0x00045ed2) tmo_note_info_pane_t1_ParamLimits

0xeae9,	// (0x00045ee7) tmo_note_info_pane_t2_ParamLimits

0xeb00,	// (0x00045efe) tmo_note_info_pane_t3_ParamLimits

0x7b54,	// (0x0003ef52) tmo_note_info_pane_t4_ParamLimits

0x7b66,	// (0x0003ef64) tmo_note_info_pane_t5_ParamLimits

0xfeb2,	// (0x000472b0) tmo_note_info_pane_t_ParamLimits

0x7c84,	// (0x0003f082) settings_container_pane_ParamLimits

0xed1f,	// (0x0004611d) indicator_popup_pane_cp5

0xed1f,	// (0x0004611d) indicator_popup_pane_cp6

0x7e7d,	// (0x0003f27b) list_set_graphic_pane_copy1_ParamLimits

0xb3d3,	// (0x000427d1) bg_popup_window_pane_cp23

0x7eed,	// (0x0003f2eb) popup_tmo_big_image_note_window_g1

0x7ef6,	// (0x0003f2f4) popup_tmo_big_image_note_window_t1

0x7f06,	// (0x0003f304) popup_tmo_big_image_note_window_t2

0x7f16,	// (0x0003f314) popup_tmo_big_image_note_window_t3

0x0002,

0xfecb,	// (0x000472c9) popup_tmo_big_image_note_window_t

0x4f52,	// (0x0003c350) cell_ai5_widget_lrg_icon_pane_g1

0x7f26,	// (0x0003f324) cell_ai5_widget_lrg_icon_pane_t1

0x7f34,	// (0x0003f332) cell_ai5_widget_list_row_pane_ParamLimits

0x7f34,	// (0x0003f332) cell_ai5_widget_list_row_pane

0x7f4b,	// (0x0003f349) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7f4b,	// (0x0003f349) cell_ai5_widget_list_row_pane_g1

0xed59,	// (0x00046157) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed59,	// (0x00046157) cell_ai5_widget_list_row_pane_t1

0x7f83,	// (0x0003f381) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7f83,	// (0x0003f381) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed2,	// (0x000472d0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed2,	// (0x000472d0) cell_ai5_widget_list_row_pane_t

0xeed2,	// (0x000462d0) main_fep_vtchi_ss_pane

0x7fc7,	// (0x0003f3c5) popup_fep_char_pre_window

0x7fcf,	// (0x0003f3cd) popup_fep_ituss_window

0xed99,	// (0x00046197) popup_fep_vkbss_window

0xeda6,	// (0x000461a4) grid_vkbss_keypad_pane_ParamLimits

0xeda6,	// (0x000461a4) grid_vkbss_keypad_pane

0x8026,	// (0x0003f424) ituss_keypad_pane

0x1f42,	// (0x00039340) aid_vkbss_key_offset_ParamLimits

0x1f42,	// (0x00039340) aid_vkbss_key_offset

0xb3b5,	// (0x000427b3) cell_vkbss_key_pane_ParamLimits

0xb3b5,	// (0x000427b3) cell_vkbss_key_pane

0x27f7,	// (0x00039bf5) bg_cell_vkbss_key_g1_ParamLimits

0x27f7,	// (0x00039bf5) bg_cell_vkbss_key_g1

0xedb6,	// (0x000461b4) cell_vkbss_key_3p_pane_ParamLimits

0xedb6,	// (0x000461b4) cell_vkbss_key_3p_pane

0xedd0,	// (0x000461ce) cell_vkbss_key_g1_ParamLimits

0xedd0,	// (0x000461ce) cell_vkbss_key_g1

0xedea,	// (0x000461e8) cell_vkbss_key_t1_ParamLimits

0xedea,	// (0x000461e8) cell_vkbss_key_t1

0x1f64,	// (0x00039362) cell_ituss_key_pane_ParamLimits

0x1f64,	// (0x00039362) cell_ituss_key_pane

0x8088,	// (0x0003f486) bg_cell_ituss_key_g1_ParamLimits

0x8088,	// (0x0003f486) bg_cell_ituss_key_g1

0x8094,	// (0x0003f492) cell_ituss_key_pane_g1_ParamLimits

0x8094,	// (0x0003f492) cell_ituss_key_pane_g1

0x1f75,	// (0x00039373) cell_ituss_key_pane_g2_ParamLimits

0x1f75,	// (0x00039373) cell_ituss_key_pane_g2

0x0002,

0xfed9,	// (0x000472d7) cell_ituss_key_pane_g_ParamLimits

0xfed9,	// (0x000472d7) cell_ituss_key_pane_g

0x1fa1,	// (0x0003939f) cell_ituss_key_t1_ParamLimits

0x1fa1,	// (0x0003939f) cell_ituss_key_t1

0x1fdb,	// (0x000393d9) cell_ituss_key_t2_ParamLimits

0x1fdb,	// (0x000393d9) cell_ituss_key_t2

0x200c,	// (0x0003940a) cell_ituss_key_t3_ParamLimits

0x200c,	// (0x0003940a) cell_ituss_key_t3

0x1fdb,	// (0x000393d9) cell_ituss_key_t4_ParamLimits

0x1fdb,	// (0x000393d9) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x000472de) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x000472de) cell_ituss_key_t

0x80ba,	// (0x0003f4b8) cell_vkbss_key_3p_pane_g1

0x80c2,	// (0x0003f4c0) cell_vkbss_key_3p_pane_g2

0x80ca,	// (0x0003f4c8) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x000472e9) cell_vkbss_key_3p_pane_g

0xeed2,	// (0x000462d0) bg_popup_fep_char_preview_window_cp02

0x204f,	// (0x0003944d) popup_fep_char_pre_window_t1

0xe970,	// (0x00045d6e) main_ai5_sk_pane

0x7be0,	// (0x0003efde) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7bec,	// (0x0003efea) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5603,	// (0x0003ca01) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7c01,	// (0x0003efff) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebd,	// (0x000472bb) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7c0d,	// (0x0003f00b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb7f5,	// (0x00042bf3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xee15,	// (0x00046213) main_ai5_sk_pane_g1

0xc2ee,	// (0x000436ec) popup_query_code_window_g1

0x7fe5,	// (0x0003f3e3) popup_fep_vkb_icf_pane

0x8004,	// (0x0003f402) popup_fep_vtchi_icf_pane

0x80db,	// (0x0003f4d9) bg_icf_pane

0x80e7,	// (0x0003f4e5) list_vkb_icf_pane

0x80f6,	// (0x0003f4f4) bg_icf_pane_cp01

0x8109,	// (0x0003f507) vtchi_icf_list_pane

0x8119,	// (0x0003f517) list_vkb_icf_pane_t1_ParamLimits

0x8119,	// (0x0003f517) list_vkb_icf_pane_t1

0x8130,	// (0x0003f52e) vtchi_icf_list_pane_t1_ParamLimits

0x8130,	// (0x0003f52e) vtchi_icf_list_pane_t1

0x7fcf,	// (0x0003f3cd) popup_fep_ituss_window_ParamLimits

0x8004,	// (0x0003f402) popup_fep_vtchi_icf_pane_ParamLimits

0x8026,	// (0x0003f424) ituss_keypad_pane_ParamLimits

0x1f36,	// (0x00039334) ituss_sks_pane

0x80db,	// (0x0003f4d9) bg_icf_pane_ParamLimits

0xed8a,	// (0x00046188) icf_edit_indi_pane_ParamLimits

0xed8a,	// (0x00046188) icf_edit_indi_pane

0x80e7,	// (0x0003f4e5) list_vkb_icf_pane_ParamLimits

0x80f6,	// (0x0003f4f4) bg_icf_pane_cp01_ParamLimits

0x7fba,	// (0x0003f3b8) icf_edit_indi_pane_cp01_ParamLimits

0x7fba,	// (0x0003f3b8) icf_edit_indi_pane_cp01

0x8111,	// (0x0003f50f) vtchi_query_pane

0x51c2,	// (0x0003c5c0) icf_edit_indi_pane_g1_ParamLimits

0x51c2,	// (0x0003c5c0) icf_edit_indi_pane_g1

0x81a5,	// (0x0003f5a3) icf_edit_indi_pane_g2_ParamLimits

0x81a5,	// (0x0003f5a3) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x00047301) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x00047301) icf_edit_indi_pane_g

0x81b4,	// (0x0003f5b2) icf_edit_indi_pane_t1

0x814e,	// (0x0003f54c) bg_input_focus_pane_cp042

0xb737,	// (0x00042b35) vtchi_button_pane

0x8157,	// (0x0003f555) vtchi_query_pane_t1

0x8165,	// (0x0003f563) vtchi_query_pane_t2

0x8173,	// (0x0003f571) vtchi_query_pane_t3

0x0002,

0xfef2,	// (0x000472f0) vtchi_query_pane_t

0xeed2,	// (0x000462d0) bg_button_pane_cp13

0x8181,	// (0x0003f57f) vtchi_button_pane_g1

0x205e,	// (0x0003945c) ituss_sks_pane_g1

0x2069,	// (0x00039467) ituss_sks_pane_g2

0x0001,

0xfef9,	// (0x000472f7) ituss_sks_pane_g

0x8189,	// (0x0003f587) ituss_sks_pane_t1

0x8197,	// (0x0003f595) ituss_sks_pane_t2

0x0001,

0xfefe,	// (0x000472fc) ituss_sks_pane_t

0x49d5,	// (0x0003bdd3) indicator_nsta_pane_cp_g1

0x49dd,	// (0x0003bddb) indicator_nsta_pane_cp_g2

0x49e5,	// (0x0003bde3) indicator_nsta_pane_cp_g3

0x49d5,	// (0x0003bdd3) indicator_nsta_pane_cp_g4

0x49dd,	// (0x0003bddb) indicator_nsta_pane_cp_g5

0x49e5,	// (0x0003bde3) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x00046ea0) indicator_nsta_pane_cp_g

0xe74d,	// (0x00045b4b) cell_graphic2_pane_t2_ParamLimits

0xe74d,	// (0x00045b4b) cell_graphic2_pane_t2

0x0001,

0xfdb4,	// (0x000471b2) cell_graphic2_pane_t_ParamLimits

0xfdb4,	// (0x000471b2) cell_graphic2_pane_t

0xe786,	// (0x00045b84) cell_graphic2_control_pane_t1

0x9bfb,	// (0x00040ff9) signal_pane_g3_ParamLimits

0x9bfb,	// (0x00040ff9) signal_pane_g3

0x9c0f,	// (0x0004100d) signal_pane_g4_ParamLimits

0x9c0f,	// (0x0004100d) signal_pane_g4

0x7f95,	// (0x0003f393) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7f95,	// (0x0003f393) cell_ai5_widget_list_row_pane_t3

0x80a8,	// (0x0003f4a6) cell_ituss_key_pane_t1_ParamLimits

0x80a8,	// (0x0003f4a6) cell_ituss_key_pane_t1

0x2a8d,	// (0x00039e8b) form_field_data_wide_pane_vc_t2_ParamLimits

0x2a8d,	// (0x00039e8b) form_field_data_wide_pane_vc_t2

0x2aa1,	// (0x00039e9f) form_field_data_wide_pane_vc_t3_ParamLimits

0x2aa1,	// (0x00039e9f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x00046bec) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x00046bec) form_field_data_wide_pane_vc_t

0x469d,	// (0x0003ba9b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x469d,	// (0x0003ba9b) form_field_slider_wide_pane_vc_t3

0x477b,	// (0x0003bb79) form_field_popup_wide_pane_vc_t2_ParamLimits

0x477b,	// (0x0003bb79) form_field_popup_wide_pane_vc_t2

0x4792,	// (0x0003bb90) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4792,	// (0x0003bb90) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x00046e8f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x00046e8f) form_field_popup_wide_pane_vc_t

0xb1ba,	// (0x000425b8) aid_fshwr2_btn_pane_ParamLimits

0xb1cc,	// (0x000425ca) aid_fshwr2_syb_pane_ParamLimits

0xb1de,	// (0x000425dc) aid_fshwr2_txt_pane_ParamLimits

0x1592,	// (0x00038990) fshwr2_bg_pane_ParamLimits

0xb1ed,	// (0x000425eb) fshwr2_func_candi_pane_ParamLimits

0xb20c,	// (0x0004260a) fshwr2_hwr_syb_pane_ParamLimits

0xb227,	// (0x00042625) fshwr2_icf_pane_ParamLimits

0xd6dd,	// (0x00044adb) list_double_graphic_pane_vc_g4_ParamLimits

0xd6dd,	// (0x00044adb) list_double_graphic_pane_vc_g4

0x1f95,	// (0x00039393) cell_ituss_key_pane_g3_ParamLimits

0x1f95,	// (0x00039393) cell_ituss_key_pane_g3

0x203d,	// (0x0003943b) cell_ituss_key_t5_ParamLimits

0x203d,	// (0x0003943b) cell_ituss_key_t5

0xed99,	// (0x00046197) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small

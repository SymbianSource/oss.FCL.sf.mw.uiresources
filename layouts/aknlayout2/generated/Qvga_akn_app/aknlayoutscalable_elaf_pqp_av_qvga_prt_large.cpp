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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002ab6e };

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
0xd74f,	// (0x000382bd) Screen

0xd759,	// (0x000382c7) application_window_ParamLimits

0xd759,	// (0x000382c7) application_window

0x7a5e,	// (0x000325cc) screen_g1

0xd767,	// (0x000382d5) area_bottom_pane_ParamLimits

0xd767,	// (0x000382d5) area_bottom_pane

0x7aec,	// (0x0003265a) area_top_pane_ParamLimits

0x7aec,	// (0x0003265a) area_top_pane

0x7b64,	// (0x000326d2) main_pane_ParamLimits

0x7b64,	// (0x000326d2) main_pane

0x7c1d,	// (0x0003278b) misc_graphics

0xde67,	// (0x000389d5) battery_pane_ParamLimits

0xde67,	// (0x000389d5) battery_pane

0xba02,	// (0x00036570) bg_status_flat_pane_g8

0xba0a,	// (0x00036578) bg_status_flat_pane_g9

0xb139,	// (0x00035ca7) context_pane_ParamLimits

0xb139,	// (0x00035ca7) context_pane

0xdf99,	// (0x00038b07) navi_pane_ParamLimits

0xdf99,	// (0x00038b07) navi_pane

0xe005,	// (0x00038b73) signal_pane_ParamLimits

0xe005,	// (0x00038b73) signal_pane

0x0008,

0xf879,	// (0x0003a3e7) bg_status_flat_pane_g

0xe066,	// (0x00038bd4) status_pane_g1_ParamLimits

0xe066,	// (0x00038bd4) status_pane_g1

0xb19f,	// (0x00035d0d) status_pane_g2_ParamLimits

0xb19f,	// (0x00035d0d) status_pane_g2

0xb1ab,	// (0x00035d19) status_pane_g3_ParamLimits

0xb1ab,	// (0x00035d19) status_pane_g3

0x0004,

0xf7a5,	// (0x0003a313) status_pane_g_ParamLimits

0xf7a5,	// (0x0003a313) status_pane_g

0xe072,	// (0x00038be0) title_pane_ParamLimits

0xe072,	// (0x00038be0) title_pane

0xe0af,	// (0x00038c1d) uni_indicator_pane_ParamLimits

0xe0af,	// (0x00038c1d) uni_indicator_pane

0xb090,	// (0x00035bfe) bg_list_pane_ParamLimits

0xb090,	// (0x00035bfe) bg_list_pane

0x7369,	// (0x00031ed7) find_pane

0xde0a,	// (0x00038978) listscroll_app_pane_ParamLimits

0xde0a,	// (0x00038978) listscroll_app_pane

0xb0b0,	// (0x00035c1e) listscroll_form_pane

0x7371,	// (0x00031edf) listscroll_gen_pane_ParamLimits

0x7371,	// (0x00031edf) listscroll_gen_pane

0x8d92,	// (0x00033900) listscroll_set_pane

0xdaaf,	// (0x0003861d) main_idle_act_pane

0xaefb,	// (0x00035a69) main_idle_trad_pane

0xaefb,	// (0x00035a69) main_list_empty_pane

0x8d9a,	// (0x00033908) main_midp_pane

0xb0ca,	// (0x00035c38) main_pane_g1_ParamLimits

0xb0ca,	// (0x00035c38) main_pane_g1

0x8da6,	// (0x00033914) popup_ai_message_window_ParamLimits

0x8da6,	// (0x00033914) popup_ai_message_window

0x8e3c,	// (0x000339aa) popup_fep_china_uni_window_ParamLimits

0x8e3c,	// (0x000339aa) popup_fep_china_uni_window

0x8e7a,	// (0x000339e8) popup_fep_japan_candidate_window_ParamLimits

0x8e7a,	// (0x000339e8) popup_fep_japan_candidate_window

0x8e98,	// (0x00033a06) popup_fep_japan_predictive_window_ParamLimits

0x8e98,	// (0x00033a06) popup_fep_japan_predictive_window

0x8ec4,	// (0x00033a32) popup_find_window

0x8ed1,	// (0x00033a3f) popup_grid_graphic_window_ParamLimits

0x8ed1,	// (0x00033a3f) popup_grid_graphic_window

0x8eef,	// (0x00033a5d) popup_large_graphic_colour_window

0x8f0e,	// (0x00033a7c) popup_menu_window_ParamLimits

0x8f0e,	// (0x00033a7c) popup_menu_window

0x9046,	// (0x00033bb4) popup_note_image_window

0x9034,	// (0x00033ba2) popup_note_wait_window_ParamLimits

0x9034,	// (0x00033ba2) popup_note_wait_window

0x9034,	// (0x00033ba2) popup_note_window_ParamLimits

0x9034,	// (0x00033ba2) popup_note_window

0x909a,	// (0x00033c08) popup_query_code_window_ParamLimits

0x909a,	// (0x00033c08) popup_query_code_window

0x90ac,	// (0x00033c1a) popup_query_data_code_window_ParamLimits

0x90ac,	// (0x00033c1a) popup_query_data_code_window

0x90c1,	// (0x00033c2f) popup_query_data_window_ParamLimits

0x90c1,	// (0x00033c2f) popup_query_data_window

0x90d7,	// (0x00033c45) popup_query_sat_info_window_ParamLimits

0x90d7,	// (0x00033c45) popup_query_sat_info_window

0x9108,	// (0x00033c76) popup_snote_single_graphic_window_ParamLimits

0x9108,	// (0x00033c76) popup_snote_single_graphic_window

0x9108,	// (0x00033c76) popup_snote_single_text_window_ParamLimits

0x9108,	// (0x00033c76) popup_snote_single_text_window

0x911b,	// (0x00033c89) popup_sub_window_general

0x921f,	// (0x00033d8d) popup_window_general_ParamLimits

0x921f,	// (0x00033d8d) popup_window_general

0xb0d8,	// (0x00035c46) power_save_pane

0x8c2e,	// (0x0003379c) control_pane_g1_ParamLimits

0x8c2e,	// (0x0003379c) control_pane_g1

0x8c4f,	// (0x000337bd) control_pane_g2_ParamLimits

0x8c4f,	// (0x000337bd) control_pane_g2

0xb082,	// (0x00035bf0) control_pane_g3_ParamLimits

0xb082,	// (0x00035bf0) control_pane_g3

0x0007,

0xf78d,	// (0x0003a2fb) control_pane_g_ParamLimits

0xf78d,	// (0x0003a2fb) control_pane_g

0x8c91,	// (0x000337ff) control_pane_t1_ParamLimits

0x8c91,	// (0x000337ff) control_pane_t1

0x8ce3,	// (0x00033851) control_pane_t2_ParamLimits

0x8ce3,	// (0x00033851) control_pane_t2

0x0002,

0xf79e,	// (0x0003a30c) control_pane_t_ParamLimits

0xf79e,	// (0x0003a30c) control_pane_t

0xb02a,	// (0x00035b98) navi_navi_volume_pane_cp1

0xb032,	// (0x00035ba0) status_small_icon_pane

0xb03a,	// (0x00035ba8) status_small_pane_g1_ParamLimits

0xb03a,	// (0x00035ba8) status_small_pane_g1

0xdd62,	// (0x000388d0) status_small_pane_g2_ParamLimits

0xdd62,	// (0x000388d0) status_small_pane_g2

0xdd6e,	// (0x000388dc) status_small_pane_g3_ParamLimits

0xdd6e,	// (0x000388dc) status_small_pane_g3

0xdd7a,	// (0x000388e8) status_small_pane_g4_ParamLimits

0xdd7a,	// (0x000388e8) status_small_pane_g4

0xdd86,	// (0x000388f4) status_small_pane_g5_ParamLimits

0xdd86,	// (0x000388f4) status_small_pane_g5

0xb06e,	// (0x00035bdc) status_small_pane_g6_ParamLimits

0xb06e,	// (0x00035bdc) status_small_pane_g6

0x0007,

0xf77c,	// (0x0003a2ea) status_small_pane_g_ParamLimits

0xf77c,	// (0x0003a2ea) status_small_pane_g

0xddb5,	// (0x00038923) status_small_pane_t1

0xddcf,	// (0x0003893d) status_small_wait_pane_ParamLimits

0xddcf,	// (0x0003893d) status_small_wait_pane

0xdbea,	// (0x00038758) aid_levels_signal_ParamLimits

0xdbea,	// (0x00038758) aid_levels_signal

0xdbfb,	// (0x00038769) signal_pane_g1_ParamLimits

0xdbfb,	// (0x00038769) signal_pane_g1

0xdc11,	// (0x0003877f) signal_pane_g2_ParamLimits

0xdc11,	// (0x0003877f) signal_pane_g2

0x0003,

0xf70d,	// (0x0003a27b) signal_pane_g_ParamLimits

0xf70d,	// (0x0003a27b) signal_pane_g

0xaaa0,	// (0x0003560e) context_pane_g1

0xd7cc,	// (0x0003833a) title_pane_g1

0xd7f6,	// (0x00038364) title_pane_t1

0x7d79,	// (0x000328e7) title_pane_t2

0x7d9f,	// (0x0003290d) title_pane_t3

0x0002,

0xf557,	// (0x0003a0c5) title_pane_t

0xe0c5,	// (0x00038c33) aid_levels_battery_ParamLimits

0xe0c5,	// (0x00038c33) aid_levels_battery

0xe0d8,	// (0x00038c46) battery_pane_g1_ParamLimits

0xe0d8,	// (0x00038c46) battery_pane_g1

0xe0ed,	// (0x00038c5b) battery_pane_g2_ParamLimits

0xe0ed,	// (0x00038c5b) battery_pane_g2

0x0001,

0xf7b0,	// (0x0003a31e) battery_pane_g_ParamLimits

0xf7b0,	// (0x0003a31e) battery_pane_g

0xe249,	// (0x00038db7) uni_indicator_pane_g1

0xe25f,	// (0x00038dcd) uni_indicator_pane_g2

0xe275,	// (0x00038de3) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0003a48f) uni_indicator_pane_g

0x854a,	// (0x000330b8) navi_icon_pane_ParamLimits

0x854a,	// (0x000330b8) navi_icon_pane

0x7c1d,	// (0x0003278b) navi_midp_pane

0x7c1d,	// (0x0003278b) navi_navi_pane

0x854a,	// (0x000330b8) navi_text_pane_ParamLimits

0x854a,	// (0x000330b8) navi_text_pane

0x7a5e,	// (0x000325cc) status_small_wait_pane_g1

0x813e,	// (0x00032cac) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0003a48a) status_small_wait_pane_g

0xbf6c,	// (0x00036ada) navi_navi_icon_text_pane

0xbf74,	// (0x00036ae2) navi_navi_pane_g1_ParamLimits

0xbf74,	// (0x00036ae2) navi_navi_pane_g1

0xbf86,	// (0x00036af4) navi_navi_pane_g2_ParamLimits

0xbf86,	// (0x00036af4) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0003a458) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0003a458) navi_navi_pane_g

0xbf98,	// (0x00036b06) navi_navi_tabs_pane

0xbf6c,	// (0x00036ada) navi_navi_text_pane

0xbf6c,	// (0x00036ada) navi_navi_volume_pane

0xbf48,	// (0x00036ab6) navi_text_pane_t1

0xbf3c,	// (0x00036aaa) navi_icon_pane_g1

0xbe90,	// (0x000369fe) navi_navi_text_pane_t1

0x949e,	// (0x0003400c) navi_navi_volume_pane_g1

0x94a6,	// (0x00034014) volume_small_pane

0xe196,	// (0x00038d04) navi_navi_icon_text_pane_g1

0xe19e,	// (0x00038d0c) navi_navi_icon_text_pane_t1

0xba4a,	// (0x000365b8) navi_tabs_2_long_pane

0xba4a,	// (0x000365b8) navi_tabs_2_pane

0xba4a,	// (0x000365b8) navi_tabs_3_long_pane

0xba4a,	// (0x000365b8) navi_tabs_3_pane

0xba4a,	// (0x000365b8) navi_tabs_4_pane

0x947e,	// (0x00033fec) tabs_2_active_pane_ParamLimits

0x947e,	// (0x00033fec) tabs_2_active_pane

0x948e,	// (0x00033ffc) tabs_2_passive_pane_ParamLimits

0x948e,	// (0x00033ffc) tabs_2_passive_pane

0x944c,	// (0x00033fba) tabs_3_active_pane_ParamLimits

0x944c,	// (0x00033fba) tabs_3_active_pane

0x945c,	// (0x00033fca) tabs_3_passive_pane_ParamLimits

0x945c,	// (0x00033fca) tabs_3_passive_pane

0x946d,	// (0x00033fdb) tabs_3_passive_pane_cp_ParamLimits

0x946d,	// (0x00033fdb) tabs_3_passive_pane_cp

0x9408,	// (0x00033f76) tabs_4_active_pane_ParamLimits

0x9408,	// (0x00033f76) tabs_4_active_pane

0x9419,	// (0x00033f87) tabs_4_passive_pane_ParamLimits

0x9419,	// (0x00033f87) tabs_4_passive_pane

0x942a,	// (0x00033f98) tabs_4_passive_pane_cp_ParamLimits

0x942a,	// (0x00033f98) tabs_4_passive_pane_cp

0x943b,	// (0x00033fa9) tabs_4_passive_pane_cp2_ParamLimits

0x943b,	// (0x00033fa9) tabs_4_passive_pane_cp2

0x93e8,	// (0x00033f56) tabs_2_long_active_pane_ParamLimits

0x93e8,	// (0x00033f56) tabs_2_long_active_pane

0x93f8,	// (0x00033f66) tabs_2_long_passive_pane_ParamLimits

0x93f8,	// (0x00033f66) tabs_2_long_passive_pane

0x93b3,	// (0x00033f21) tabs_3_long_active_pane_ParamLimits

0x93b3,	// (0x00033f21) tabs_3_long_active_pane

0x93c4,	// (0x00033f32) tabs_3_long_passive_pane_ParamLimits

0x93c4,	// (0x00033f32) tabs_3_long_passive_pane

0x93d7,	// (0x00033f45) tabs_3_long_passive_pane_cp_ParamLimits

0x93d7,	// (0x00033f45) tabs_3_long_passive_pane_cp

0x9359,	// (0x00033ec7) volume_small_pane_g1

0x9362,	// (0x00033ed0) volume_small_pane_g2

0x936b,	// (0x00033ed9) volume_small_pane_g3

0x9374,	// (0x00033ee2) volume_small_pane_g4

0x937d,	// (0x00033eeb) volume_small_pane_g5

0x9386,	// (0x00033ef4) volume_small_pane_g6

0x938f,	// (0x00033efd) volume_small_pane_g7

0x9398,	// (0x00033f06) volume_small_pane_g8

0x93a1,	// (0x00033f0f) volume_small_pane_g9

0x93aa,	// (0x00033f18) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0003a424) volume_small_pane_g

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp2_ParamLimits

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp2

0x7dbf,	// (0x0003292d) tabs_3_active_pane_g1

0xd85e,	// (0x000383cc) tabs_3_active_pane_t1

0x7db1,	// (0x0003291f) bg_passive_tab_pane_cp2_ParamLimits

0x7db1,	// (0x0003291f) bg_passive_tab_pane_cp2

0x7dbf,	// (0x0003292d) tabs_3_passive_pane_g1

0xd85e,	// (0x000383cc) tabs_3_passive_pane_t1

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp3_ParamLimits

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp3

0xd870,	// (0x000383de) tabs_4_active_pane_g1

0xd878,	// (0x000383e6) tabs_4_active_pane_t1

0x7db1,	// (0x0003291f) bg_passive_tab_pane_cp3_ParamLimits

0x7db1,	// (0x0003291f) bg_passive_tab_pane_cp3

0xd870,	// (0x000383de) tabs_4_1_passive_pane_g1

0xd878,	// (0x000383e6) tabs_4_1_passive_pane_t1

0x8d9a,	// (0x00033908) list_highlight_pane_cp2

0xec06,	// (0x00039774) list_set_pane_ParamLimits

0xec06,	// (0x00039774) list_set_pane

0xec94,	// (0x00039802) main_pane_set_t1_ParamLimits

0xec94,	// (0x00039802) main_pane_set_t1

0xecb4,	// (0x00039822) main_pane_set_t2_ParamLimits

0xecb4,	// (0x00039822) main_pane_set_t2

0xecc6,	// (0x00039834) main_pane_set_t3_ParamLimits

0xecc6,	// (0x00039834) main_pane_set_t3

0xecd8,	// (0x00039846) main_pane_set_t4_ParamLimits

0xecd8,	// (0x00039846) main_pane_set_t4

0x0003,

0xf986,	// (0x0003a4f4) main_pane_set_t_ParamLimits

0xf986,	// (0x0003a4f4) main_pane_set_t

0xecea,	// (0x00039858) setting_code_pane

0xecf2,	// (0x00039860) setting_slider_graphic_pane

0xecf2,	// (0x00039860) setting_slider_pane

0xecf2,	// (0x00039860) setting_text_pane

0xecf2,	// (0x00039860) setting_volume_pane

0x7dc7,	// (0x00032935) volume_set_pane

0x7db1,	// (0x0003291f) bg_set_opt_pane_cp

0x7dcf,	// (0x0003293d) setting_slider_pane_t1

0x7de5,	// (0x00032953) setting_slider_pane_t2

0x7dfe,	// (0x0003296c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003a0cc) setting_slider_pane_t

0x7e15,	// (0x00032983) slider_set_pane

0x7c1d,	// (0x0003278b) bg_set_opt_pane_cp2

0x7e2b,	// (0x00032999) setting_slider_graphic_pane_g1

0x7e34,	// (0x000329a2) setting_slider_graphic_pane_t1

0x7e43,	// (0x000329b1) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003a0d3) setting_slider_graphic_pane_t

0x7e52,	// (0x000329c0) slider_set_pane_cp

0x7c1d,	// (0x0003278b) input_focus_pane_cp1

0xc3b9,	// (0x00036f27) list_set_text_pane

0x7a5e,	// (0x000325cc) setting_text_pane_g1

0x7c1d,	// (0x0003278b) input_focus_pane_cp2

0x7a5e,	// (0x000325cc) setting_code_pane_g1

0x7e5a,	// (0x000329c8) setting_code_pane_t1

0x6c37,	// (0x000317a5) set_text_pane_t1_ParamLimits

0x6c37,	// (0x000317a5) set_text_pane_t1

0x84f9,	// (0x00033067) set_opt_bg_pane_g1

0x8501,	// (0x0003306f) set_opt_bg_pane_g2

0xebc6,	// (0x00039734) set_opt_bg_pane_g3

0x8511,	// (0x0003307f) set_opt_bg_pane_g4

0x8519,	// (0x00033087) set_opt_bg_pane_g5

0x8521,	// (0x0003308f) set_opt_bg_pane_g6

0xebce,	// (0x0003973c) set_opt_bg_pane_g7

0xebd6,	// (0x00039744) set_opt_bg_pane_g8

0xebde,	// (0x0003974c) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003a4e1) set_opt_bg_pane_g

0xc3ac,	// (0x00036f1a) slider_set_pane_g1

0x9513,	// (0x00034081) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003a4d2) slider_set_pane_g

0x94af,	// (0x0003401d) volume_set_pane_g1

0x94b7,	// (0x00034025) volume_set_pane_g2

0x94bf,	// (0x0003402d) volume_set_pane_g3

0x94c7,	// (0x00034035) volume_set_pane_g4

0x94cf,	// (0x0003403d) volume_set_pane_g5

0x94d7,	// (0x00034045) volume_set_pane_g6

0x94df,	// (0x0003404d) volume_set_pane_g7

0x94e7,	// (0x00034055) volume_set_pane_g8

0x94ef,	// (0x0003405d) volume_set_pane_g9

0x94f7,	// (0x00034065) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0003a4aa) volume_set_pane_g

0xd88a,	// (0x000383f8) indicator_pane_ParamLimits

0xd88a,	// (0x000383f8) indicator_pane

0xd896,	// (0x00038404) main_idle_pane_g2_ParamLimits

0xd896,	// (0x00038404) main_idle_pane_g2

0xd8ba,	// (0x00038428) main_pane_idle_g1_ParamLimits

0xd8ba,	// (0x00038428) main_pane_idle_g1

0x7e68,	// (0x000329d6) popup_clock_digital_analogue_window_ParamLimits

0x7e68,	// (0x000329d6) popup_clock_digital_analogue_window

0xd8c7,	// (0x00038435) soft_indicator_pane_ParamLimits

0xd8c7,	// (0x00038435) soft_indicator_pane

0xd8d3,	// (0x00038441) wallpaper_pane_ParamLimits

0xd8d3,	// (0x00038441) wallpaper_pane

0x7a5e,	// (0x000325cc) wallpaper_pane_g1

0xd8df,	// (0x0003844d) indicator_pane_g1_ParamLimits

0xd8df,	// (0x0003844d) indicator_pane_g1

0xc4e1,	// (0x0003704f) navi_navi_icon_text_pane_srt_g1

0x7e96,	// (0x00032a04) soft_indicator_pane_t1

0x7eb0,	// (0x00032a1e) aid_ps_area_pane

0xd8eb,	// (0x00038459) aid_ps_clock_pane

0x7ec1,	// (0x00032a2f) aid_ps_indicator_pane

0x7ecd,	// (0x00032a3b) indicator_ps_pane_ParamLimits

0x7ecd,	// (0x00032a3b) indicator_ps_pane

0x7edc,	// (0x00032a4a) power_save_pane_g1_ParamLimits

0x7edc,	// (0x00032a4a) power_save_pane_g1

0x7ee8,	// (0x00032a56) power_save_pane_g2_ParamLimits

0x7ee8,	// (0x00032a56) power_save_pane_g2

0x7a68,	// (0x000325d6) aid_navinavi_width_pane

0x7eb0,	// (0x00032a1e) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003a0d8) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003a0d8) power_save_pane_g

0x7ef6,	// (0x00032a64) power_save_pane_t1_ParamLimits

0x7ef6,	// (0x00032a64) power_save_pane_t1

0xd8eb,	// (0x00038459) aid_ps_clock_pane_ParamLimits

0x7ec1,	// (0x00032a2f) aid_ps_indicator_pane_ParamLimits

0x7f08,	// (0x00032a76) power_save_pane_t4_ParamLimits

0x7f08,	// (0x00032a76) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003a0dd) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003a0dd) power_save_pane_t

0x7f32,	// (0x00032aa0) power_save_t3_ParamLimits

0x7f32,	// (0x00032aa0) power_save_t3

0x7f1d,	// (0x00032a8b) power_save_t2_ParamLimits

0x7f1d,	// (0x00032a8b) power_save_t2

0x7f47,	// (0x00032ab5) indicator_ps_pane_g1

0xd8f7,	// (0x00038465) ai_gene_pane_ParamLimits

0xd8f7,	// (0x00038465) ai_gene_pane

0xd903,	// (0x00038471) ai_links_pane_ParamLimits

0xd903,	// (0x00038471) ai_links_pane

0xd90f,	// (0x0003847d) indicator_pane_cp1_ParamLimits

0xd90f,	// (0x0003847d) indicator_pane_cp1

0xd91b,	// (0x00038489) main_pane_idle_g1_cp_ParamLimits

0xd91b,	// (0x00038489) main_pane_idle_g1_cp

0x7f50,	// (0x00032abe) popup_ai_links_title_window

0xd927,	// (0x00038495) soft_indicator_pane_cp1_ParamLimits

0xd927,	// (0x00038495) soft_indicator_pane_cp1

0xc202,	// (0x00036d70) ai_links_pane_g1

0xc20b,	// (0x00036d79) grid_ai_links_pane

0xe240,	// (0x00038dae) ai_gene_pane_1

0xc1f0,	// (0x00036d5e) ai_gene_pane_2

0xc1f9,	// (0x00036d67) list_highlight_pane_cp4

0xe224,	// (0x00038d92) cell_ai_link_pane_ParamLimits

0xe224,	// (0x00038d92) cell_ai_link_pane

0xc1e8,	// (0x00036d56) cell_ai_link_pane_g1

0x813e,	// (0x00032cac) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0003a485) cell_ai_link_pane_g

0x7c1d,	// (0x0003278b) grid_highlight_cp2

0x7c1d,	// (0x0003278b) bg_popup_sub_pane_cp1

0x7f67,	// (0x00032ad5) popup_ai_links_title_window_t1

0xc13a,	// (0x00036ca8) ai_gene_pane_1_g1_ParamLimits

0xc13a,	// (0x00036ca8) ai_gene_pane_1_g1

0xc146,	// (0x00036cb4) ai_gene_pane_1_g2_ParamLimits

0xc146,	// (0x00036cb4) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0003a47b) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0003a47b) ai_gene_pane_1_g

0xc153,	// (0x00036cc1) ai_gene_pane_1_t1_ParamLimits

0xc153,	// (0x00036cc1) ai_gene_pane_1_t1

0xc187,	// (0x00036cf5) grid_ai_soft_ind_pane

0xc125,	// (0x00036c93) ai_gene_pane_2_t1_ParamLimits

0xc125,	// (0x00036c93) ai_gene_pane_2_t1

0xd933,	// (0x000384a1) main_pane_empty_t1_ParamLimits

0xd933,	// (0x000384a1) main_pane_empty_t1

0xd950,	// (0x000384be) main_pane_empty_t2_ParamLimits

0xd950,	// (0x000384be) main_pane_empty_t2

0xd968,	// (0x000384d6) main_pane_empty_t3_ParamLimits

0xd968,	// (0x000384d6) main_pane_empty_t3

0xd97b,	// (0x000384e9) main_pane_empty_t4_ParamLimits

0xd97b,	// (0x000384e9) main_pane_empty_t4

0xd98e,	// (0x000384fc) main_pane_empty_t5_ParamLimits

0xd98e,	// (0x000384fc) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003a0e2) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003a0e2) main_pane_empty_t

0x854a,	// (0x000330b8) bg_popup_window_pane_ParamLimits

0x854a,	// (0x000330b8) bg_popup_window_pane

0xbe9f,	// (0x00036a0d) find_popup_pane_cp2_ParamLimits

0xbe9f,	// (0x00036a0d) find_popup_pane_cp2

0xbeab,	// (0x00036a19) heading_pane_ParamLimits

0xbeab,	// (0x00036a19) heading_pane

0x7c1d,	// (0x0003278b) bg_popup_sub_pane

0xe1b8,	// (0x00038d26) bg_popup_window_pane_g1_ParamLimits

0xe1b8,	// (0x00038d26) bg_popup_window_pane_g1

0xe1c4,	// (0x00038d32) bg_popup_window_pane_g2_ParamLimits

0xe1c4,	// (0x00038d32) bg_popup_window_pane_g2

0xe1d0,	// (0x00038d3e) bg_popup_window_pane_g3_ParamLimits

0xe1d0,	// (0x00038d3e) bg_popup_window_pane_g3

0xe1dc,	// (0x00038d4a) bg_popup_window_pane_g4_ParamLimits

0xe1dc,	// (0x00038d4a) bg_popup_window_pane_g4

0xe1e8,	// (0x00038d56) bg_popup_window_pane_g5_ParamLimits

0xe1e8,	// (0x00038d56) bg_popup_window_pane_g5

0xe1f4,	// (0x00038d62) bg_popup_window_pane_g6_ParamLimits

0xe1f4,	// (0x00038d62) bg_popup_window_pane_g6

0xe200,	// (0x00038d6e) bg_popup_window_pane_g7_ParamLimits

0xe200,	// (0x00038d6e) bg_popup_window_pane_g7

0xe20c,	// (0x00038d7a) bg_popup_window_pane_g8_ParamLimits

0xe20c,	// (0x00038d7a) bg_popup_window_pane_g8

0xe218,	// (0x00038d86) bg_popup_window_pane_g9_ParamLimits

0xe218,	// (0x00038d86) bg_popup_window_pane_g9

0xbe84,	// (0x000369f2) bg_popup_window_pane_g10_ParamLimits

0xbe84,	// (0x000369f2) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0003a443) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0003a443) bg_popup_window_pane_g

0xbe3b,	// (0x000369a9) bg_popup_heading_pane_ParamLimits

0xbe3b,	// (0x000369a9) bg_popup_heading_pane

0x95e0,	// (0x0003414e) tabs_4_passive_pane_cp_srt_ParamLimits

0x95e0,	// (0x0003414e) tabs_4_passive_pane_cp_srt

0x95f2,	// (0x00034160) tabs_4_passive_pane_srt_ParamLimits

0xbe4f,	// (0x000369bd) heading_pane_g2

0x95f2,	// (0x00034160) tabs_4_passive_pane_srt

0x8d9a,	// (0x00033908) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8d9a,	// (0x00033908) bg_passive_tab_pane_cp3_srt

0xbe57,	// (0x000369c5) heading_pane_t1_ParamLimits

0xbe57,	// (0x000369c5) heading_pane_t1

0xbe6e,	// (0x000369dc) heading_pane_t2_ParamLimits

0xbe6e,	// (0x000369dc) heading_pane_t2

0x0001,

0xf8d0,	// (0x0003a43e) heading_pane_t_ParamLimits

0xf8d0,	// (0x0003a43e) heading_pane_t

0xb9ca,	// (0x00036538) bg_popup_heading_pane_g1

0xba5b,	// (0x000365c9) bg_popup_heading_pane_g2

0xba63,	// (0x000365d1) bg_popup_heading_pane_g3

0xba6b,	// (0x000365d9) bg_popup_heading_pane_g4

0xba73,	// (0x000365e1) bg_popup_heading_pane_g5

0xba7b,	// (0x000365e9) bg_popup_heading_pane_g6

0xba83,	// (0x000365f1) bg_popup_heading_pane_g7

0xba8b,	// (0x000365f9) bg_popup_heading_pane_g8

0xba93,	// (0x00036601) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0003a3fa) bg_popup_heading_pane_g

0xb293,	// (0x00035e01) bg_popup_sub_pane_g1

0xb29b,	// (0x00035e09) bg_popup_sub_pane_g2

0xb2a3,	// (0x00035e11) bg_popup_sub_pane_g3

0xb2ab,	// (0x00035e19) bg_popup_sub_pane_g4

0xb2b3,	// (0x00035e21) bg_popup_sub_pane_g5

0xb2bb,	// (0x00035e29) bg_popup_sub_pane_g6

0xb2c3,	// (0x00035e31) bg_popup_sub_pane_g7

0xb2cb,	// (0x00035e39) bg_popup_sub_pane_g8

0xb2d3,	// (0x00035e41) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0003a3d4) bg_popup_sub_pane_g

0x7f76,	// (0x00032ae4) bg_popup_window_pane_cp5_ParamLimits

0x7f76,	// (0x00032ae4) bg_popup_window_pane_cp5

0x7f92,	// (0x00032b00) popup_note_window_g1_ParamLimits

0x7f92,	// (0x00032b00) popup_note_window_g1

0x7f9e,	// (0x00032b0c) popup_note_window_t1_ParamLimits

0x7f9e,	// (0x00032b0c) popup_note_window_t1

0x7fb4,	// (0x00032b22) popup_note_window_t2_ParamLimits

0x7fb4,	// (0x00032b22) popup_note_window_t2

0x7fca,	// (0x00032b38) popup_note_window_t3_ParamLimits

0x7fca,	// (0x00032b38) popup_note_window_t3

0x7fe0,	// (0x00032b4e) popup_note_window_t4_ParamLimits

0x7fe0,	// (0x00032b4e) popup_note_window_t4

0x8008,	// (0x00032b76) popup_note_window_t5_ParamLimits

0x8008,	// (0x00032b76) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003a0ed) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003a0ed) popup_note_window_t

0x8052,	// (0x00032bc0) bg_popup_window_pane_cp6_ParamLimits

0x8052,	// (0x00032bc0) bg_popup_window_pane_cp6

0xb946,	// (0x000364b4) popup_note_image_window_g1_ParamLimits

0xb946,	// (0x000364b4) popup_note_image_window_g1

0xb952,	// (0x000364c0) popup_note_image_window_g2_ParamLimits

0xb952,	// (0x000364c0) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0003a3c8) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0003a3c8) popup_note_image_window_g

0xb96b,	// (0x000364d9) popup_note_image_window_t1_ParamLimits

0xb96b,	// (0x000364d9) popup_note_image_window_t1

0xb984,	// (0x000364f2) popup_note_image_window_t2_ParamLimits

0xb984,	// (0x000364f2) popup_note_image_window_t2

0xb99d,	// (0x0003650b) popup_note_image_window_t3_ParamLimits

0xb99d,	// (0x0003650b) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0003a3cd) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0003a3cd) popup_note_image_window_t

0xb831,	// (0x0003639f) bg_popup_window_pane_cp7_ParamLimits

0xb831,	// (0x0003639f) bg_popup_window_pane_cp7

0xb861,	// (0x000363cf) popup_note_wait_window_g1_ParamLimits

0xb861,	// (0x000363cf) popup_note_wait_window_g1

0xb86d,	// (0x000363db) popup_note_wait_window_g2_ParamLimits

0xb86d,	// (0x000363db) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0003a3b6) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0003a3b6) popup_note_wait_window_g

0xb885,	// (0x000363f3) popup_note_wait_window_t1_ParamLimits

0xb885,	// (0x000363f3) popup_note_wait_window_t1

0xb8ac,	// (0x0003641a) popup_note_wait_window_t2_ParamLimits

0xb8ac,	// (0x0003641a) popup_note_wait_window_t2

0xb8c9,	// (0x00036437) popup_note_wait_window_t3_ParamLimits

0xb8c9,	// (0x00036437) popup_note_wait_window_t3

0xb8dc,	// (0x0003644a) popup_note_wait_window_t4_ParamLimits

0xb8dc,	// (0x0003644a) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0003a3bd) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0003a3bd) popup_note_wait_window_t

0xb901,	// (0x0003646f) wait_bar_pane_ParamLimits

0xb901,	// (0x0003646f) wait_bar_pane

0x7c1d,	// (0x0003278b) wait_anim_pane

0x7c1d,	// (0x0003278b) wait_border_pane

0x7a5e,	// (0x000325cc) wait_anim_pane_g1

0x7a5e,	// (0x000325cc) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0003a276) wait_anim_pane_g

0xb7e1,	// (0x0003634f) wait_border_pane_g1

0xb7ea,	// (0x00036358) wait_border_pane_g2

0xb7f3,	// (0x00036361) wait_border_pane_g3

0x0002,

0xf841,	// (0x0003a3af) wait_border_pane_g

0xb651,	// (0x000361bf) bg_popup_window_pane_cp16_ParamLimits

0xb651,	// (0x000361bf) bg_popup_window_pane_cp16

0xb751,	// (0x000362bf) indicator_popup_pane_cp4_ParamLimits

0xb751,	// (0x000362bf) indicator_popup_pane_cp4

0xb765,	// (0x000362d3) popup_query_data_window_t1_ParamLimits

0xb765,	// (0x000362d3) popup_query_data_window_t1

0xb777,	// (0x000362e5) popup_query_data_window_t2_ParamLimits

0xb777,	// (0x000362e5) popup_query_data_window_t2

0xb790,	// (0x000362fe) popup_query_data_window_t3_ParamLimits

0xb790,	// (0x000362fe) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0003a3a8) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0003a3a8) popup_query_data_window_t

0xb7aa,	// (0x00036318) query_popup_data_pane_ParamLimits

0xb7aa,	// (0x00036318) query_popup_data_pane

0xb7be,	// (0x0003632c) query_popup_data_pane_cp1_ParamLimits

0xb7be,	// (0x0003632c) query_popup_data_pane_cp1

0xb651,	// (0x000361bf) bg_popup_window_pane_cp10_ParamLimits

0xb651,	// (0x000361bf) bg_popup_window_pane_cp10

0xb683,	// (0x000361f1) indicator_popup_pane_ParamLimits

0xb683,	// (0x000361f1) indicator_popup_pane

0xb6a5,	// (0x00036213) popup_query_code_window_t1_ParamLimits

0xb6a5,	// (0x00036213) popup_query_code_window_t1

0xb6bf,	// (0x0003622d) popup_query_code_window_t2_ParamLimits

0xb6bf,	// (0x0003622d) popup_query_code_window_t2

0xb708,	// (0x00036276) popup_query_code_window_t3_ParamLimits

0xb708,	// (0x00036276) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0003a3a1) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0003a3a1) popup_query_code_window_t

0xb737,	// (0x000362a5) query_popup_pane_ParamLimits

0xb737,	// (0x000362a5) query_popup_pane

0x8052,	// (0x00032bc0) bg_popup_window_pane_cp15_ParamLimits

0x8052,	// (0x00032bc0) bg_popup_window_pane_cp15

0x8070,	// (0x00032bde) indicator_popup_pane_cp1_ParamLimits

0x8070,	// (0x00032bde) indicator_popup_pane_cp1

0x8083,	// (0x00032bf1) indicator_popup_pane_cp2_ParamLimits

0x8083,	// (0x00032bf1) indicator_popup_pane_cp2

0x8096,	// (0x00032c04) popup_query_data_code_window_g1_ParamLimits

0x8096,	// (0x00032c04) popup_query_data_code_window_g1

0x80a9,	// (0x00032c17) popup_query_data_code_window_t1_ParamLimits

0x80a9,	// (0x00032c17) popup_query_data_code_window_t1

0x80bb,	// (0x00032c29) popup_query_data_code_window_t2_ParamLimits

0x80bb,	// (0x00032c29) popup_query_data_code_window_t2

0x80cd,	// (0x00032c3b) popup_query_data_code_window_t3_ParamLimits

0x80cd,	// (0x00032c3b) popup_query_data_code_window_t3

0x80e3,	// (0x00032c51) popup_query_data_code_window_t4_ParamLimits

0x80e3,	// (0x00032c51) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003a0f8) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003a0f8) popup_query_data_code_window_t

0xad7c,	// (0x000358ea) list_single_midp_graphic_pane_g3

0x80fb,	// (0x00032c69) query_popup_data_pane_cp2_ParamLimits

0x810e,	// (0x00032c7c) query_popup_pane_cp2_ParamLimits

0x810e,	// (0x00032c7c) query_popup_pane_cp2

0x7c1d,	// (0x0003278b) bg_popup_window_pane_cp11

0xb63d,	// (0x000361ab) heading_pane_cp5

0x819a,	// (0x00032d08) listscroll_popup_info_pane

0x7c1d,	// (0x0003278b) input_focus_pane_cp3

0x8121,	// (0x00032c8f) query_popup_pane_t1

0x812f,	// (0x00032c9d) list_popup_info_pane_ParamLimits

0x812f,	// (0x00032c9d) list_popup_info_pane

0x813e,	// (0x00032cac) listscroll_popup_info_pane_g1

0x8146,	// (0x00032cb4) scroll_pane_cp7

0x814e,	// (0x00032cbc) popup_info_list_pane_t1_ParamLimits

0x814e,	// (0x00032cbc) popup_info_list_pane_t1

0x8168,	// (0x00032cd6) popup_info_list_pane_t2_ParamLimits

0x8168,	// (0x00032cd6) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003a101) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003a101) popup_info_list_pane_t

0x7c1d,	// (0x0003278b) bg_popup_window_pane_cp12

0xc4fb,	// (0x00037069) find_popup_pane

0x7db1,	// (0x0003291f) bg_popup_window_pane_cp3

0x8182,	// (0x00032cf0) heading_pane_cp3

0x818e,	// (0x00032cfc) listscroll_popup_graphic_pane

0x7c1d,	// (0x0003278b) bg_popup_window_pane_cp4

0xd9f1,	// (0x0003855f) heading_pane_cp4

0x819a,	// (0x00032d08) listscroll_popup_colour_pane

0x81a2,	// (0x00032d10) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x81a2,	// (0x00032d10) cell_large_graphic_colour_none_popup_pane

0xd9f9,	// (0x00038567) grid_large_graphic_colour_popup_pane_ParamLimits

0xd9f9,	// (0x00038567) grid_large_graphic_colour_popup_pane

0xda15,	// (0x00038583) listscroll_popup_colour_pane_g1_ParamLimits

0xda15,	// (0x00038583) listscroll_popup_colour_pane_g1

0xda2c,	// (0x0003859a) listscroll_popup_colour_pane_g2_ParamLimits

0xda2c,	// (0x0003859a) listscroll_popup_colour_pane_g2

0x81b2,	// (0x00032d20) listscroll_popup_colour_pane_g3_ParamLimits

0x81b2,	// (0x00032d20) listscroll_popup_colour_pane_g3

0xda40,	// (0x000385ae) listscroll_popup_colour_pane_g4_ParamLimits

0xda40,	// (0x000385ae) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003a106) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003a106) listscroll_popup_colour_pane_g

0x81c2,	// (0x00032d30) scroll_pane_cp6_ParamLimits

0x81c2,	// (0x00032d30) scroll_pane_cp6

0xda4f,	// (0x000385bd) cell_large_graphic_colour_popup_pane_ParamLimits

0xda4f,	// (0x000385bd) cell_large_graphic_colour_popup_pane

0x81d4,	// (0x00032d42) cell_large_graphic_colour_none_popup_pane_t1

0x7c1d,	// (0x0003278b) grid_highlight_pane_cp5

0x81e3,	// (0x00032d51) cell_large_graphic_colour_popup_pane_g1

0x81eb,	// (0x00032d59) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003a10f) cell_large_graphic_colour_popup_pane_g

0x81f3,	// (0x00032d61) cell_large_graphic_colour_popup_pane_g2_copy1

0x81fc,	// (0x00032d6a) grid_highlight_pane_cp4

0x8204,	// (0x00032d72) bg_popup_window_pane_cp8_ParamLimits

0x8204,	// (0x00032d72) bg_popup_window_pane_cp8

0x821f,	// (0x00032d8d) popup_snote_single_text_window_g1_ParamLimits

0x821f,	// (0x00032d8d) popup_snote_single_text_window_g1

0x8231,	// (0x00032d9f) popup_snote_single_text_window_t1_ParamLimits

0x8231,	// (0x00032d9f) popup_snote_single_text_window_t1

0x8244,	// (0x00032db2) popup_snote_single_text_window_t2_ParamLimits

0x8244,	// (0x00032db2) popup_snote_single_text_window_t2

0x8257,	// (0x00032dc5) popup_snote_single_text_window_t3_ParamLimits

0x8257,	// (0x00032dc5) popup_snote_single_text_window_t3

0x8290,	// (0x00032dfe) popup_snote_single_text_window_t4_ParamLimits

0x8290,	// (0x00032dfe) popup_snote_single_text_window_t4

0x82c4,	// (0x00032e32) popup_snote_single_text_window_t5_ParamLimits

0x82c4,	// (0x00032e32) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003a114) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003a114) popup_snote_single_text_window_t

0x82f3,	// (0x00032e61) bg_popup_window_pane_cp9_ParamLimits

0x82f3,	// (0x00032e61) bg_popup_window_pane_cp9

0x821f,	// (0x00032d8d) popup_snote_single_graphic_window_g1_ParamLimits

0x821f,	// (0x00032d8d) popup_snote_single_graphic_window_g1

0x8301,	// (0x00032e6f) popup_snote_single_graphic_window_g2_ParamLimits

0x8301,	// (0x00032e6f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003a11f) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003a11f) popup_snote_single_graphic_window_g

0x830d,	// (0x00032e7b) popup_snote_single_graphic_window_t1_ParamLimits

0x830d,	// (0x00032e7b) popup_snote_single_graphic_window_t1

0x8320,	// (0x00032e8e) popup_snote_single_graphic_window_t2_ParamLimits

0x8320,	// (0x00032e8e) popup_snote_single_graphic_window_t2

0x8257,	// (0x00032dc5) popup_snote_single_graphic_window_t3_ParamLimits

0x8257,	// (0x00032dc5) popup_snote_single_graphic_window_t3

0x8290,	// (0x00032dfe) popup_snote_single_graphic_window_t4_ParamLimits

0x8290,	// (0x00032dfe) popup_snote_single_graphic_window_t4

0x82c4,	// (0x00032e32) popup_snote_single_graphic_window_t5_ParamLimits

0x82c4,	// (0x00032e32) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003a124) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003a124) popup_snote_single_graphic_window_t

0xedb9,	// (0x00039927) grid_graphic_popup_pane_ParamLimits

0xedb9,	// (0x00039927) grid_graphic_popup_pane

0xeddc,	// (0x0003994a) listscroll_popup_graphic_pane_g1_ParamLimits

0xeddc,	// (0x0003994a) listscroll_popup_graphic_pane_g1

0xedf0,	// (0x0003995e) listscroll_popup_graphic_pane_g2_ParamLimits

0xedf0,	// (0x0003995e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003a51e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003a51e) listscroll_popup_graphic_pane_g

0xc4b3,	// (0x00037021) scroll_pane_cp5

0xed72,	// (0x000398e0) cell_graphic_popup_pane_ParamLimits

0xed72,	// (0x000398e0) cell_graphic_popup_pane

0xc47e,	// (0x00036fec) cell_graphic_popup_pane_g1

0xc486,	// (0x00036ff4) cell_graphic_popup_pane_g2

0x81f3,	// (0x00032d61) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0003a517) cell_graphic_popup_pane_g

0xc48f,	// (0x00036ffd) cell_graphic_popup_pane_t2

0x81fc,	// (0x00032d6a) grid_highlight_pane_cp3

0x8345,	// (0x00032eb3) list_gen_pane_ParamLimits

0x8345,	// (0x00032eb3) list_gen_pane

0x836e,	// (0x00032edc) scroll_pane

0xed43,	// (0x000398b1) bg_list_pane_g1_ParamLimits

0xed43,	// (0x000398b1) bg_list_pane_g1

0xc42d,	// (0x00036f9b) bg_list_pane_g2_ParamLimits

0xc42d,	// (0x00036f9b) bg_list_pane_g2

0xc440,	// (0x00036fae) bg_list_pane_g3_ParamLimits

0xc440,	// (0x00036fae) bg_list_pane_g3

0xc452,	// (0x00036fc0) bg_list_pane_g4_ParamLimits

0xc452,	// (0x00036fc0) bg_list_pane_g4

0xed5a,	// (0x000398c8) bg_list_pane_g5_ParamLimits

0xed5a,	// (0x000398c8) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0003a50c) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0003a50c) bg_list_pane_g

0xed1f,	// (0x0003988d) list_double2_graphic_large_graphic_pane_ParamLimits

0xed1f,	// (0x0003988d) list_double2_graphic_large_graphic_pane

0xed1f,	// (0x0003988d) list_double2_graphic_pane_ParamLimits

0xed1f,	// (0x0003988d) list_double2_graphic_pane

0xed1f,	// (0x0003988d) list_double2_large_graphic_pane_ParamLimits

0xed1f,	// (0x0003988d) list_double2_large_graphic_pane

0xed1f,	// (0x0003988d) list_double2_pane_ParamLimits

0xed1f,	// (0x0003988d) list_double2_pane

0xed1f,	// (0x0003988d) list_double_graphic_heading_pane_ParamLimits

0xed1f,	// (0x0003988d) list_double_graphic_heading_pane

0xed1f,	// (0x0003988d) list_double_graphic_pane_ParamLimits

0xed1f,	// (0x0003988d) list_double_graphic_pane

0xed1f,	// (0x0003988d) list_double_heading_pane_ParamLimits

0xed1f,	// (0x0003988d) list_double_heading_pane

0xed1f,	// (0x0003988d) list_double_large_graphic_pane_ParamLimits

0xed1f,	// (0x0003988d) list_double_large_graphic_pane

0xed1f,	// (0x0003988d) list_double_number_pane_ParamLimits

0xed1f,	// (0x0003988d) list_double_number_pane

0xed1f,	// (0x0003988d) list_double_pane_ParamLimits

0xed1f,	// (0x0003988d) list_double_pane

0xed1f,	// (0x0003988d) list_double_time_pane_ParamLimits

0xed1f,	// (0x0003988d) list_double_time_pane

0xed1f,	// (0x0003988d) list_setting_number_pane_ParamLimits

0xed1f,	// (0x0003988d) list_setting_number_pane

0xed1f,	// (0x0003988d) list_setting_pane_ParamLimits

0xed1f,	// (0x0003988d) list_setting_pane

0x7505,	// (0x00032073) list_single_2graphic_pane_ParamLimits

0x7505,	// (0x00032073) list_single_2graphic_pane

0x7505,	// (0x00032073) list_single_graphic_heading_pane_ParamLimits

0x7505,	// (0x00032073) list_single_graphic_heading_pane

0x7505,	// (0x00032073) list_single_graphic_pane_ParamLimits

0x7505,	// (0x00032073) list_single_graphic_pane

0x7505,	// (0x00032073) list_single_heading_pane_ParamLimits

0x7505,	// (0x00032073) list_single_heading_pane

0x95a6,	// (0x00034114) list_single_large_graphic_pane_ParamLimits

0x95a6,	// (0x00034114) list_single_large_graphic_pane

0x7505,	// (0x00032073) list_single_number_heading_pane_ParamLimits

0x7505,	// (0x00032073) list_single_number_heading_pane

0x7505,	// (0x00032073) list_single_number_pane_ParamLimits

0x7505,	// (0x00032073) list_single_number_pane

0x7505,	// (0x00032073) list_single_pane_ParamLimits

0x7505,	// (0x00032073) list_single_pane

0x7c1d,	// (0x0003278b) list_highlight_pane_cp1

0x83a3,	// (0x00032f11) list_single_pane_g1_ParamLimits

0x83a3,	// (0x00032f11) list_single_pane_g1

0x83af,	// (0x00032f1d) list_single_pane_g2_ParamLimits

0x83af,	// (0x00032f1d) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0003a140) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0003a140) list_single_pane_g

0x74db,	// (0x00032049) list_single_pane_t1_ParamLimits

0x74db,	// (0x00032049) list_single_pane_t1

0x83a3,	// (0x00032f11) list_single_number_pane_g1_ParamLimits

0x83a3,	// (0x00032f11) list_single_number_pane_g1

0x83af,	// (0x00032f1d) list_single_number_pane_g2_ParamLimits

0x83af,	// (0x00032f1d) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0003a140) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0003a140) list_single_number_pane_g

0x6c5e,	// (0x000317cc) list_single_number_pane_t1_ParamLimits

0x6c5e,	// (0x000317cc) list_single_number_pane_t1

0x749a,	// (0x00032008) list_single_number_pane_t2_ParamLimits

0x749a,	// (0x00032008) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003a4cd) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003a4cd) list_single_number_pane_t

0x6c52,	// (0x000317c0) list_single_graphic_pane_g1_ParamLimits

0x6c52,	// (0x000317c0) list_single_graphic_pane_g1

0x83a3,	// (0x00032f11) list_single_graphic_pane_g2_ParamLimits

0x83a3,	// (0x00032f11) list_single_graphic_pane_g2

0x83af,	// (0x00032f1d) list_single_graphic_pane_g3_ParamLimits

0x83af,	// (0x00032f1d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003a12f) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003a12f) list_single_graphic_pane_g

0x6c5e,	// (0x000317cc) list_single_graphic_pane_t1_ParamLimits

0x6c5e,	// (0x000317cc) list_single_graphic_pane_t1

0x6c74,	// (0x000317e2) list_single_heading_pane_g1_ParamLimits

0x6c74,	// (0x000317e2) list_single_heading_pane_g1

0x83af,	// (0x00032f1d) list_single_heading_pane_g2_ParamLimits

0x83af,	// (0x00032f1d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003a136) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003a136) list_single_heading_pane_g

0x6c87,	// (0x000317f5) list_single_heading_pane_t1_ParamLimits

0x6c87,	// (0x000317f5) list_single_heading_pane_t1

0x6c9d,	// (0x0003180b) list_single_heading_pane_t2_ParamLimits

0x6c9d,	// (0x0003180b) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003a13b) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003a13b) list_single_heading_pane_t

0x83a3,	// (0x00032f11) list_single_number_heading_pane_g1_ParamLimits

0x83a3,	// (0x00032f11) list_single_number_heading_pane_g1

0x83af,	// (0x00032f1d) list_single_number_heading_pane_g2_ParamLimits

0x83af,	// (0x00032f1d) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0003a140) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0003a140) list_single_number_heading_pane_g

0x6caf,	// (0x0003181d) list_single_number_heading_pane_t1_ParamLimits

0x6caf,	// (0x0003181d) list_single_number_heading_pane_t1

0x6cc5,	// (0x00031833) list_single_number_heading_pane_t2_ParamLimits

0x6cc5,	// (0x00031833) list_single_number_heading_pane_t2

0x6cd7,	// (0x00031845) list_single_number_heading_pane_t3_ParamLimits

0x6cd7,	// (0x00031845) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0003a145) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0003a145) list_single_number_heading_pane_t

0x6ce9,	// (0x00031857) list_single_graphic_heading_pane_g1_ParamLimits

0x6ce9,	// (0x00031857) list_single_graphic_heading_pane_g1

0x83bb,	// (0x00032f29) list_single_graphic_heading_pane_g4_ParamLimits

0x83bb,	// (0x00032f29) list_single_graphic_heading_pane_g4

0x83af,	// (0x00032f1d) list_single_graphic_heading_pane_g5_ParamLimits

0x83af,	// (0x00032f1d) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0003a14c) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0003a14c) list_single_graphic_heading_pane_g

0x6caf,	// (0x0003181d) list_single_graphic_heading_pane_t1_ParamLimits

0x6caf,	// (0x0003181d) list_single_graphic_heading_pane_t1

0x6cfd,	// (0x0003186b) list_single_graphic_heading_pane_t2_ParamLimits

0x6cfd,	// (0x0003186b) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0003a153) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0003a153) list_single_graphic_heading_pane_t

0x83ca,	// (0x00032f38) list_single_large_graphic_pane_g1_ParamLimits

0x83ca,	// (0x00032f38) list_single_large_graphic_pane_g1

0x83d6,	// (0x00032f44) list_single_large_graphic_pane_g2_ParamLimits

0x83d6,	// (0x00032f44) list_single_large_graphic_pane_g2

0x83e2,	// (0x00032f50) list_single_large_graphic_pane_g3_ParamLimits

0x83e2,	// (0x00032f50) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0003a158) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0003a158) list_single_large_graphic_pane_g

0xb7ea,	// (0x00036358) wait_border_pane_g2_copy1

0x83ee,	// (0x00032f5c) list_single_large_graphic_pane_g4_cp2

0x6d15,	// (0x00031883) list_single_large_graphic_pane_t1_ParamLimits

0x6d15,	// (0x00031883) list_single_large_graphic_pane_t1

0x83f6,	// (0x00032f64) list_double_pane_g1_ParamLimits

0x83f6,	// (0x00032f64) list_double_pane_g1

0x8402,	// (0x00032f70) list_double_pane_g2_ParamLimits

0x8402,	// (0x00032f70) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0003a15f) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0003a15f) list_double_pane_g

0x6d2b,	// (0x00031899) list_double_pane_t1_ParamLimits

0x6d2b,	// (0x00031899) list_double_pane_t1

0x6d41,	// (0x000318af) list_double_pane_t2_ParamLimits

0x6d41,	// (0x000318af) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0003a164) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0003a164) list_double_pane_t

0x6d53,	// (0x000318c1) list_double2_pane_g1_ParamLimits

0x6d53,	// (0x000318c1) list_double2_pane_g1

0x6d62,	// (0x000318d0) list_double2_pane_g2_ParamLimits

0x6d62,	// (0x000318d0) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0003a169) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0003a169) list_double2_pane_g

0x6d6e,	// (0x000318dc) list_double2_pane_t1_ParamLimits

0x6d6e,	// (0x000318dc) list_double2_pane_t1

0x6d84,	// (0x000318f2) list_double2_pane_t2_ParamLimits

0x6d84,	// (0x000318f2) list_double2_pane_t2

0x0001,

0xf600,	// (0x0003a16e) list_double2_pane_t_ParamLimits

0xf600,	// (0x0003a16e) list_double2_pane_t

0x83f6,	// (0x00032f64) list_double_number_pane_g1_ParamLimits

0x83f6,	// (0x00032f64) list_double_number_pane_g1

0x8402,	// (0x00032f70) list_double_number_pane_g2_ParamLimits

0x8402,	// (0x00032f70) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0003a15f) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0003a15f) list_double_number_pane_g

0x6d96,	// (0x00031904) list_double_number_pane_t1_ParamLimits

0x6d96,	// (0x00031904) list_double_number_pane_t1

0x6da8,	// (0x00031916) list_double_number_pane_t2_ParamLimits

0x6da8,	// (0x00031916) list_double_number_pane_t2

0x6dbe,	// (0x0003192c) list_double_number_pane_t3_ParamLimits

0x6dbe,	// (0x0003192c) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0003a173) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0003a173) list_double_number_pane_t

0x6dd0,	// (0x0003193e) list_double_graphic_pane_g1_ParamLimits

0x6dd0,	// (0x0003193e) list_double_graphic_pane_g1

0x6ddc,	// (0x0003194a) list_double_graphic_pane_g2_ParamLimits

0x6ddc,	// (0x0003194a) list_double_graphic_pane_g2

0x6deb,	// (0x00031959) list_double_graphic_pane_g3_ParamLimits

0x6deb,	// (0x00031959) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0003a17a) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003a17a) list_double_graphic_pane_g

0x6df7,	// (0x00031965) list_double_graphic_pane_t1_ParamLimits

0x6df7,	// (0x00031965) list_double_graphic_pane_t1

0x6e0d,	// (0x0003197b) list_double_graphic_pane_t2_ParamLimits

0x6e0d,	// (0x0003197b) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0003a183) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0003a183) list_double_graphic_pane_t

0x6e1f,	// (0x0003198d) list_double2_graphic_pane_g1_ParamLimits

0x6e1f,	// (0x0003198d) list_double2_graphic_pane_g1

0x841a,	// (0x00032f88) list_double2_graphic_pane_g2_ParamLimits

0x841a,	// (0x00032f88) list_double2_graphic_pane_g2

0x8426,	// (0x00032f94) list_double2_graphic_pane_g3_ParamLimits

0x8426,	// (0x00032f94) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0003a188) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0003a188) list_double2_graphic_pane_g

0x6e2b,	// (0x00031999) list_double2_graphic_pane_t1_ParamLimits

0x6e2b,	// (0x00031999) list_double2_graphic_pane_t1

0x6e41,	// (0x000319af) list_double2_graphic_pane_t2_ParamLimits

0x6e41,	// (0x000319af) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0003a18f) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0003a18f) list_double2_graphic_pane_t

0x6e53,	// (0x000319c1) list_double_large_graphic_pane_g1_ParamLimits

0x6e53,	// (0x000319c1) list_double_large_graphic_pane_g1

0x6e70,	// (0x000319de) list_double_large_graphic_pane_g2_ParamLimits

0x6e70,	// (0x000319de) list_double_large_graphic_pane_g2

0x8402,	// (0x00032f70) list_double_large_graphic_pane_g3_ParamLimits

0x8402,	// (0x00032f70) list_double_large_graphic_pane_g3

0x6e84,	// (0x000319f2) list_double_large_graphic_pane_g4_ParamLimits

0x6e84,	// (0x000319f2) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0003a194) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0003a194) list_double_large_graphic_pane_g

0x6e95,	// (0x00031a03) list_double_large_graphic_pane_t1_ParamLimits

0x6e95,	// (0x00031a03) list_double_large_graphic_pane_t1

0x6eae,	// (0x00031a1c) list_double_large_graphic_pane_t2_ParamLimits

0x6eae,	// (0x00031a1c) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0003a19f) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0003a19f) list_double_large_graphic_pane_t

0x8447,	// (0x00032fb5) list_double2_large_graphic_pane_g1_ParamLimits

0x8447,	// (0x00032fb5) list_double2_large_graphic_pane_g1

0x8453,	// (0x00032fc1) list_double2_large_graphic_pane_g2_ParamLimits

0x8453,	// (0x00032fc1) list_double2_large_graphic_pane_g2

0x8426,	// (0x00032f94) list_double2_large_graphic_pane_g3_ParamLimits

0x8426,	// (0x00032f94) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0003a1a4) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0003a1a4) list_double2_large_graphic_pane_g

0x6ec0,	// (0x00031a2e) list_double2_large_graphic_pane_t1_ParamLimits

0x6ec0,	// (0x00031a2e) list_double2_large_graphic_pane_t1

0x6ed6,	// (0x00031a44) list_double2_large_graphic_pane_t2_ParamLimits

0x6ed6,	// (0x00031a44) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0003a1ab) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0003a1ab) list_double2_large_graphic_pane_t

0x6ee8,	// (0x00031a56) list_double_heading_pane_g1_ParamLimits

0x6ee8,	// (0x00031a56) list_double_heading_pane_g1

0x6ef7,	// (0x00031a65) list_double_heading_pane_g2_ParamLimits

0x6ef7,	// (0x00031a65) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0003a1b0) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0003a1b0) list_double_heading_pane_g

0x6f03,	// (0x00031a71) list_double_heading_pane_t1_ParamLimits

0x6f03,	// (0x00031a71) list_double_heading_pane_t1

0x6d84,	// (0x000318f2) list_double_heading_pane_t2_ParamLimits

0x6d84,	// (0x000318f2) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0003a1b5) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0003a1b5) list_double_heading_pane_t

0x6f19,	// (0x00031a87) list_double_graphic_heading_pane_g1_ParamLimits

0x6f19,	// (0x00031a87) list_double_graphic_heading_pane_g1

0x6ee8,	// (0x00031a56) list_double_graphic_heading_pane_g2_ParamLimits

0x6ee8,	// (0x00031a56) list_double_graphic_heading_pane_g2

0x6ef7,	// (0x00031a65) list_double_graphic_heading_pane_g3_ParamLimits

0x6ef7,	// (0x00031a65) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0003a1ba) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0003a1ba) list_double_graphic_heading_pane_g

0x6f25,	// (0x00031a93) list_double_graphic_heading_pane_t1_ParamLimits

0x6f25,	// (0x00031a93) list_double_graphic_heading_pane_t1

0x6e41,	// (0x000319af) list_double_graphic_heading_pane_t2_ParamLimits

0x6e41,	// (0x000319af) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0003a1c1) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0003a1c1) list_double_graphic_heading_pane_t

0x6f3b,	// (0x00031aa9) list_double_time_pane_g1_ParamLimits

0x6f3b,	// (0x00031aa9) list_double_time_pane_g1

0x6f4a,	// (0x00031ab8) list_double_time_pane_g2_ParamLimits

0x6f4a,	// (0x00031ab8) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0003a1c6) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0003a1c6) list_double_time_pane_g

0x6f56,	// (0x00031ac4) list_double_time_pane_t1_ParamLimits

0x6f56,	// (0x00031ac4) list_double_time_pane_t1

0x6f6c,	// (0x00031ada) list_double_time_pane_t2_ParamLimits

0x6f6c,	// (0x00031ada) list_double_time_pane_t2

0x6f7e,	// (0x00031aec) list_double_time_pane_t3_ParamLimits

0x6f7e,	// (0x00031aec) list_double_time_pane_t3

0x6f90,	// (0x00031afe) list_double_time_pane_t4_ParamLimits

0x6f90,	// (0x00031afe) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0003a1cb) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0003a1cb) list_double_time_pane_t

0x6fa2,	// (0x00031b10) list_setting_pane_g1_ParamLimits

0x6fa2,	// (0x00031b10) list_setting_pane_g1

0x6d62,	// (0x000318d0) list_setting_pane_g2_ParamLimits

0x6d62,	// (0x000318d0) list_setting_pane_g2

0x0001,

0xf666,	// (0x0003a1d4) list_setting_pane_g_ParamLimits

0xf666,	// (0x0003a1d4) list_setting_pane_g

0x6fae,	// (0x00031b1c) list_setting_pane_t1_ParamLimits

0x6fae,	// (0x00031b1c) list_setting_pane_t1

0x6fc8,	// (0x00031b36) list_setting_pane_t2_ParamLimits

0x6fc8,	// (0x00031b36) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0003a1d9) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0003a1d9) list_setting_pane_t

0x7005,	// (0x00031b73) set_value_pane_cp_ParamLimits

0x7005,	// (0x00031b73) set_value_pane_cp

0x7011,	// (0x00031b7f) list_setting_number_pane_g1_ParamLimits

0x7011,	// (0x00031b7f) list_setting_number_pane_g1

0x701d,	// (0x00031b8b) list_setting_number_pane_g2_ParamLimits

0x701d,	// (0x00031b8b) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0003a1e0) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0003a1e0) list_setting_number_pane_g

0x7029,	// (0x00031b97) list_setting_number_pane_t1_ParamLimits

0x7029,	// (0x00031b97) list_setting_number_pane_t1

0x7040,	// (0x00031bae) list_setting_number_pane_t2_ParamLimits

0x7040,	// (0x00031bae) list_setting_number_pane_t2

0x705a,	// (0x00031bc8) list_setting_number_pane_t3_ParamLimits

0x705a,	// (0x00031bc8) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0003a1e5) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0003a1e5) list_setting_number_pane_t

0x7005,	// (0x00031b73) set_value_pane_ParamLimits

0x7005,	// (0x00031b73) set_value_pane

0x8462,	// (0x00032fd0) bg_set_opt_pane_ParamLimits

0x8462,	// (0x00032fd0) bg_set_opt_pane

0x709b,	// (0x00031c09) set_value_pane_t1

0x8483,	// (0x00032ff1) slider_set_pane_cp3

0x848c,	// (0x00032ffa) volume_small_pane_cp

0x8495,	// (0x00033003) list_form_gen_pane

0x8392,	// (0x00032f00) scroll_pane_cp8

0x70b9,	// (0x00031c27) form_field_data_pane_ParamLimits

0x70b9,	// (0x00031c27) form_field_data_pane

0x70d9,	// (0x00031c47) form_field_data_wide_pane_ParamLimits

0x70d9,	// (0x00031c47) form_field_data_wide_pane

0x70f8,	// (0x00031c66) form_field_popup_pane_ParamLimits

0x70f8,	// (0x00031c66) form_field_popup_pane

0x7110,	// (0x00031c7e) form_field_popup_wide_pane_ParamLimits

0x7110,	// (0x00031c7e) form_field_popup_wide_pane

0x7127,	// (0x00031c95) form_field_slider_pane_ParamLimits

0x7127,	// (0x00031c95) form_field_slider_pane

0x713a,	// (0x00031ca8) form_field_slider_wide_pane_ParamLimits

0x713a,	// (0x00031ca8) form_field_slider_wide_pane

0x849e,	// (0x0003300c) data_form_pane

0x7155,	// (0x00031cc3) form_field_data_pane_t1

0x84aa,	// (0x00033018) input_focus_pane

0x84b8,	// (0x00033026) data_form_wide_pane

0x7179,	// (0x00031ce7) form_field_data_wide_pane_t1

0x8211,	// (0x00032d7f) input_focus_pane_cp6

0x719b,	// (0x00031d09) form_field_popup_pane_t1

0x84aa,	// (0x00033018) input_focus_pane_cp7

0x849e,	// (0x0003300c) list_form_pane

0x71bb,	// (0x00031d29) form_field_popup_wide_pane_t1

0x84aa,	// (0x00033018) input_focus_pane_cp8

0x84d8,	// (0x00033046) list_form_wide_pane

0x71d8,	// (0x00031d46) form_field_slider_pane_t1_ParamLimits

0x71d8,	// (0x00031d46) form_field_slider_pane_t1

0x71ee,	// (0x00031d5c) form_field_slider_pane_t2_ParamLimits

0x71ee,	// (0x00031d5c) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0003a1f5) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0003a1f5) form_field_slider_pane_t

0x7f76,	// (0x00032ae4) input_focus_pane_cp9_ParamLimits

0x7f76,	// (0x00032ae4) input_focus_pane_cp9

0x7203,	// (0x00031d71) slider_cont_pane_ParamLimits

0x7203,	// (0x00031d71) slider_cont_pane

0x84e7,	// (0x00033055) form_field_slider_wide_pane_t1_ParamLimits

0x84e7,	// (0x00033055) form_field_slider_wide_pane_t1

0x7217,	// (0x00031d85) form_field_slider_wide_pane_t2_ParamLimits

0x7217,	// (0x00031d85) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0003a1fa) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0003a1fa) form_field_slider_wide_pane_t

0x7f76,	// (0x00032ae4) input_focus_pane_cp10_ParamLimits

0x7f76,	// (0x00032ae4) input_focus_pane_cp10

0x7229,	// (0x00031d97) slider_cont_pane_cp1_ParamLimits

0x7229,	// (0x00031d97) slider_cont_pane_cp1

0x723f,	// (0x00031dad) slider_form_pane_cp

0x84f9,	// (0x00033067) input_focus_pane_g1

0x8501,	// (0x0003306f) input_focus_pane_g2

0x8509,	// (0x00033077) input_focus_pane_g3

0x8511,	// (0x0003307f) input_focus_pane_g4

0x8519,	// (0x00033087) input_focus_pane_g5

0x8521,	// (0x0003308f) input_focus_pane_g6

0x8529,	// (0x00033097) input_focus_pane_g7

0x8531,	// (0x0003309f) input_focus_pane_g8

0x8539,	// (0x000330a7) input_focus_pane_g9

0x7a5e,	// (0x000325cc) input_focus_pane_g10

0x0009,

0xf691,	// (0x0003a1ff) input_focus_pane_g

0xb7f3,	// (0x00036361) wait_border_pane_g3_copy1

0x7247,	// (0x00031db5) data_form_pane_t1

0x7a5e,	// (0x000325cc) wait_anim_pane_g1_copy1

0x74ac,	// (0x0003201a) data_form_wide_pane_t1

0x7261,	// (0x00031dcf) list_form_graphic_pane_cp_ParamLimits

0x7261,	// (0x00031dcf) list_form_graphic_pane_cp

0xc3d3,	// (0x00036f41) slider_form_pane_g1

0xc3dc,	// (0x00036f4a) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003a4fd) slider_form_pane_g

0x7275,	// (0x00031de3) list_form_graphic_pane_ParamLimits

0x7275,	// (0x00031de3) list_form_graphic_pane

0x728b,	// (0x00031df9) list_form_graphic_pane_g1

0x7293,	// (0x00031e01) list_form_graphic_pane_t1_ParamLimits

0x7293,	// (0x00031e01) list_form_graphic_pane_t1

0x7db1,	// (0x0003291f) list_highlight_pane_cp5_ParamLimits

0x7db1,	// (0x0003291f) list_highlight_pane_cp5

0x72a8,	// (0x00031e16) find_pane_g1

0x8541,	// (0x000330af) input_find_pane

0x72b1,	// (0x00031e1f) input_find_pane_g1_ParamLimits

0x72b1,	// (0x00031e1f) input_find_pane_g1

0x72bd,	// (0x00031e2b) input_find_pane_t1_ParamLimits

0x72bd,	// (0x00031e2b) input_find_pane_t1

0x72d2,	// (0x00031e40) input_find_pane_t2_ParamLimits

0x72d2,	// (0x00031e40) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0003a214) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0003a214) input_find_pane_t

0x854a,	// (0x000330b8) input_focus_pane_cp5_ParamLimits

0x854a,	// (0x000330b8) input_focus_pane_cp5

0x7f76,	// (0x00032ae4) bg_popup_window_pane_cp2_ParamLimits

0x7f76,	// (0x00032ae4) bg_popup_window_pane_cp2

0x8564,	// (0x000330d2) listscroll_menu_pane_ParamLimits

0x8564,	// (0x000330d2) listscroll_menu_pane

0x8570,	// (0x000330de) popup_submenu_window_ParamLimits

0x8570,	// (0x000330de) popup_submenu_window

0x8594,	// (0x00033102) find_popup_pane_g1

0x859c,	// (0x0003310a) input_popup_find_pane_cp

0x854a,	// (0x000330b8) input_focus_pane_cp4_ParamLimits

0x854a,	// (0x000330b8) input_focus_pane_cp4

0x85a6,	// (0x00033114) input_popup_find_pane_t1_ParamLimits

0x85a6,	// (0x00033114) input_popup_find_pane_t1

0x7c1d,	// (0x0003278b) bg_popup_sub_pane_cp

0x85d4,	// (0x00033142) listscroll_popup_sub_pane

0x85dc,	// (0x0003314a) list_submenu_pane_ParamLimits

0x85dc,	// (0x0003314a) list_submenu_pane

0x85ed,	// (0x0003315b) scroll_pane_cp4

0x85f5,	// (0x00033163) list_single_popup_submenu_pane_ParamLimits

0x85f5,	// (0x00033163) list_single_popup_submenu_pane

0x8607,	// (0x00033175) list_single_popup_submenu_pane_g1

0x860f,	// (0x0003317d) list_single_popup_submenu_pane_t1_ParamLimits

0x860f,	// (0x0003317d) list_single_popup_submenu_pane_t1

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp1_ParamLimits

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp1

0xda82,	// (0x000385f0) tabs_2_active_pane_g1

0xda8a,	// (0x000385f8) tabs_2_active_pane_t1

0x7db1,	// (0x0003291f) bg_passive_tab_pane_cp1_ParamLimits

0x7db1,	// (0x0003291f) bg_passive_tab_pane_cp1

0xda82,	// (0x000385f0) tabs_2_passive_pane_g1

0xda8a,	// (0x000385f8) tabs_2_passive_pane_t1

0xa8cb,	// (0x00035439) bg_active_tab_pane_cp4

0xda9c,	// (0x0003860a) tabs_2_long_active_pane_t1

0xdaaf,	// (0x0003861d) bg_passive_tab_pane_cp4

0xb2db,	// (0x00035e49) list_single_midp_graphic_pane_g4_ParamLimits

0xa8cb,	// (0x00035439) bg_active_tab_pane_cp5

0xdabb,	// (0x00038629) tabs_3_long_active_pane_t1

0xdaaf,	// (0x0003861d) bg_passive_tab_pane_cp5

0xb2db,	// (0x00035e49) list_single_midp_graphic_pane_g4

0x7db1,	// (0x0003291f) bg_popup_window_pane_cp13_ParamLimits

0x7db1,	// (0x0003291f) bg_popup_window_pane_cp13

0x862d,	// (0x0003319b) listscroll_popup_fast_pane_ParamLimits

0x862d,	// (0x0003319b) listscroll_popup_fast_pane

0x863c,	// (0x000331aa) grid_popup_fast_pane_ParamLimits

0x863c,	// (0x000331aa) grid_popup_fast_pane

0x864e,	// (0x000331bc) scroll_pane_cp9_ParamLimits

0x864e,	// (0x000331bc) scroll_pane_cp9

0xd6e4,	// (0x00038252) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd6e4,	// (0x00038252) list_single_graphic_hl_pane_t1_cp2

0x8672,	// (0x000331e0) input_focus_pane_cp20_ParamLimits

0x8672,	// (0x000331e0) input_focus_pane_cp20

0x8680,	// (0x000331ee) query_popup_data_pane_t1_ParamLimits

0x8680,	// (0x000331ee) query_popup_data_pane_t1

0x8693,	// (0x00033201) query_popup_data_pane_t2_ParamLimits

0x8693,	// (0x00033201) query_popup_data_pane_t2

0x86d9,	// (0x00033247) query_popup_data_pane_t3_ParamLimits

0x86d9,	// (0x00033247) query_popup_data_pane_t3

0x871a,	// (0x00033288) query_popup_data_pane_t4_ParamLimits

0x871a,	// (0x00033288) query_popup_data_pane_t4

0x8756,	// (0x000332c4) query_popup_data_pane_t5_ParamLimits

0x8756,	// (0x000332c4) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0003a219) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0003a219) query_popup_data_pane_t

0x84f9,	// (0x00033067) bg_set_opt_pane_g1

0x8501,	// (0x0003306f) bg_set_opt_pane_g2

0x8509,	// (0x00033077) bg_set_opt_pane_g3

0x8511,	// (0x0003307f) bg_set_opt_pane_g4

0x8519,	// (0x00033087) bg_set_opt_pane_g5

0x8521,	// (0x0003308f) bg_set_opt_pane_g6

0x8529,	// (0x00033097) bg_set_opt_pane_g7

0x8531,	// (0x0003309f) bg_set_opt_pane_g8

0x8539,	// (0x000330a7) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0003a224) bg_set_opt_pane_g

0x8a58,	// (0x000335c6) control_top_pane_stacon_ParamLimits

0x8a58,	// (0x000335c6) control_top_pane_stacon

0x8aab,	// (0x00033619) signal_pane_stacon_ParamLimits

0x8aab,	// (0x00033619) signal_pane_stacon

0xac0e,	// (0x0003577c) stacon_top_pane_g1_ParamLimits

0xac0e,	// (0x0003577c) stacon_top_pane_g1

0x8ad0,	// (0x0003363e) title_pane_stacon_ParamLimits

0x8ad0,	// (0x0003363e) title_pane_stacon

0x8af2,	// (0x00033660) uni_indicator_pane_stacon_ParamLimits

0x8af2,	// (0x00033660) uni_indicator_pane_stacon

0x8b07,	// (0x00033675) battery_pane_stacon_ParamLimits

0x8b07,	// (0x00033675) battery_pane_stacon

0x8b47,	// (0x000336b5) control_bottom_pane_stacon_ParamLimits

0x8b47,	// (0x000336b5) control_bottom_pane_stacon

0x8b66,	// (0x000336d4) navi_pane_stacon_ParamLimits

0x8b66,	// (0x000336d4) navi_pane_stacon

0xac30,	// (0x0003579e) stacon_bottom_pane_g1_ParamLimits

0xac30,	// (0x0003579e) stacon_bottom_pane_g1

0x878d,	// (0x000332fb) aid_levels_signal_lsc_ParamLimits

0x878d,	// (0x000332fb) aid_levels_signal_lsc

0x879a,	// (0x00033308) signal_pane_stacon_g1_ParamLimits

0x879a,	// (0x00033308) signal_pane_stacon_g1

0x87a6,	// (0x00033314) signal_pane_stacon_g2_ParamLimits

0x87a6,	// (0x00033314) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0003a237) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003a237) signal_pane_stacon_g

0x87e7,	// (0x00033355) title_pane_stacon_t1_ParamLimits

0x87e7,	// (0x00033355) title_pane_stacon_t1

0x880c,	// (0x0003337a) uni_indicator_pane_stacon_g1

0x8816,	// (0x00033384) uni_indicator_pane_stacon_g2

0x8820,	// (0x0003338e) uni_indicator_pane_stacon_g3

0x882a,	// (0x00033398) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0003a243) uni_indicator_pane_stacon_g

0x8834,	// (0x000333a2) control_top_pane_stacon_g1

0x883c,	// (0x000333aa) control_top_pane_stacon_t1_ParamLimits

0x883c,	// (0x000333aa) control_top_pane_stacon_t1

0x886d,	// (0x000333db) aid_levels_battery_lsc_ParamLimits

0x886d,	// (0x000333db) aid_levels_battery_lsc

0x887b,	// (0x000333e9) battery_pane_stacon_g1_ParamLimits

0x887b,	// (0x000333e9) battery_pane_stacon_g1

0x8887,	// (0x000333f5) battery_pane_stacon_g2_ParamLimits

0x8887,	// (0x000333f5) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0003a24c) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0003a24c) battery_pane_stacon_g

0x88b6,	// (0x00033424) navi_icon_pane_stacon

0x88c6,	// (0x00033434) navi_navi_pane_stacon

0x88b6,	// (0x00033424) navi_text_pane_stacon

0x8834,	// (0x000333a2) control_bottom_pane_stacon_g1

0x88d6,	// (0x00033444) control_bottom_pane_stacon_t1_ParamLimits

0x88d6,	// (0x00033444) control_bottom_pane_stacon_t1

0xdacd,	// (0x0003863b) grid_app_pane_ParamLimits

0xdacd,	// (0x0003863b) grid_app_pane

0xdae9,	// (0x00038657) scroll_pane_cp15_ParamLimits

0xdae9,	// (0x00038657) scroll_pane_cp15

0xdafa,	// (0x00038668) cell_app_pane_ParamLimits

0xdafa,	// (0x00038668) cell_app_pane

0xdb1e,	// (0x0003868c) cell_app_pane_g1_ParamLimits

0xdb1e,	// (0x0003868c) cell_app_pane_g1

0x8921,	// (0x0003348f) cell_app_pane_g2_ParamLimits

0x8921,	// (0x0003348f) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0003a251) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0003a251) cell_app_pane_g

0xdb42,	// (0x000386b0) cell_app_pane_t1_ParamLimits

0xdb42,	// (0x000386b0) cell_app_pane_t1

0x892d,	// (0x0003349b) grid_highlight_pane_ParamLimits

0x892d,	// (0x0003349b) grid_highlight_pane

0x84f9,	// (0x00033067) cell_highlight_pane_g1

0x8501,	// (0x0003306f) cell_highlight_pane_g2

0x8509,	// (0x00033077) cell_highlight_pane_g3

0x8511,	// (0x0003307f) cell_highlight_pane_g4

0x8519,	// (0x00033087) cell_highlight_pane_g5

0x8521,	// (0x0003308f) cell_highlight_pane_g6

0x8529,	// (0x00033097) cell_highlight_pane_g7

0x8531,	// (0x0003309f) cell_highlight_pane_g8

0x8539,	// (0x000330a7) cell_highlight_pane_g9

0x7a5e,	// (0x000325cc) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0003a1ff) cell_highlight_pane_g

0xa8d9,	// (0x00035447) bg_scroll_pane

0x8951,	// (0x000334bf) scroll_handle_pane

0xa920,	// (0x0003548e) scroll_bg_pane_g1

0xa935,	// (0x000354a3) scroll_bg_pane_g2

0xa94d,	// (0x000354bb) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0003a256) scroll_bg_pane_g

0xa962,	// (0x000354d0) scroll_handle_focus_pane_ParamLimits

0xa962,	// (0x000354d0) scroll_handle_focus_pane

0xa920,	// (0x0003548e) scroll_handle_pane_g1

0xa96f,	// (0x000354dd) scroll_handle_pane_g2

0xa94d,	// (0x000354bb) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0003a25d) scroll_handle_pane_g

0x854a,	// (0x000330b8) bg_popup_sub_pane_cp21_ParamLimits

0x854a,	// (0x000330b8) bg_popup_sub_pane_cp21

0xa983,	// (0x000354f1) popup_fep_japan_predictive_window_t1_ParamLimits

0xa983,	// (0x000354f1) popup_fep_japan_predictive_window_t1

0xa99a,	// (0x00035508) popup_fep_japan_predictive_window_t2_ParamLimits

0xa99a,	// (0x00035508) popup_fep_japan_predictive_window_t2

0xa9cd,	// (0x0003553b) popup_fep_japan_predictive_window_t3_ParamLimits

0xa9cd,	// (0x0003553b) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0003a264) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0003a264) popup_fep_japan_predictive_window_t

0x7c1d,	// (0x0003278b) bg_popup_sub_pane_cp23

0xaa04,	// (0x00035572) listscroll_japin_cand_pane

0xaa0c,	// (0x0003557a) popup_fep_japan_candidate_window_t1

0xaa1a,	// (0x00035588) candidate_pane_ParamLimits

0xaa1a,	// (0x00035588) candidate_pane

0xaa2d,	// (0x0003559b) scroll_pane_cp30

0xaa35,	// (0x000355a3) list_single_popup_jap_candidate_pane_ParamLimits

0xaa35,	// (0x000355a3) list_single_popup_jap_candidate_pane

0x7c1d,	// (0x0003278b) list_highlight_pane_cp30

0xaa4a,	// (0x000355b8) list_single_popup_jap_candidate_pane_t1

0xdb59,	// (0x000386c7) level_1_signal

0xdb66,	// (0x000386d4) level_2_signal

0xdb73,	// (0x000386e1) level_3_signal

0xdb80,	// (0x000386ee) level_4_signal

0xdb8d,	// (0x000386fb) level_5_signal

0xdb9a,	// (0x00038708) level_6_signal

0xdba7,	// (0x00038715) level_7_signal

0xdb59,	// (0x000386c7) level_1_battery

0xdb66,	// (0x000386d4) level_2_battery

0xdb73,	// (0x000386e1) level_3_battery

0xdb80,	// (0x000386ee) level_4_battery

0xdb8d,	// (0x000386fb) level_5_battery

0xdb9a,	// (0x00038708) level_6_battery

0xdba7,	// (0x00038715) level_7_battery

0xaa71,	// (0x000355df) list_menu_pane_ParamLimits

0xaa71,	// (0x000355df) list_menu_pane

0xaa87,	// (0x000355f5) scroll_pane_cp25_ParamLimits

0xaa87,	// (0x000355f5) scroll_pane_cp25

0xdbb4,	// (0x00038722) list_double2_graphic_pane_cp2_ParamLimits

0xdbb4,	// (0x00038722) list_double2_graphic_pane_cp2

0xdbb4,	// (0x00038722) list_double2_large_graphic_pane_cp2_ParamLimits

0xdbb4,	// (0x00038722) list_double2_large_graphic_pane_cp2

0xdbb4,	// (0x00038722) list_double2_pane_cp2_ParamLimits

0xdbb4,	// (0x00038722) list_double2_pane_cp2

0xdbb4,	// (0x00038722) list_double_graphic_pane_cp2_ParamLimits

0xdbb4,	// (0x00038722) list_double_graphic_pane_cp2

0xdbb4,	// (0x00038722) list_double_large_graphic_pane_cp2_ParamLimits

0xdbb4,	// (0x00038722) list_double_large_graphic_pane_cp2

0xdbb4,	// (0x00038722) list_double_number_pane_cp2_ParamLimits

0xdbb4,	// (0x00038722) list_double_number_pane_cp2

0xdbb4,	// (0x00038722) list_double_pane_cp2_ParamLimits

0xdbb4,	// (0x00038722) list_double_pane_cp2

0xdbc4,	// (0x00038732) list_single_2graphic_pane_cp2_ParamLimits

0xdbc4,	// (0x00038732) list_single_2graphic_pane_cp2

0xdbc4,	// (0x00038732) list_single_graphic_heading_pane_cp2_ParamLimits

0xdbc4,	// (0x00038732) list_single_graphic_heading_pane_cp2

0xdbc4,	// (0x00038732) list_single_graphic_pane_cp2_ParamLimits

0xdbc4,	// (0x00038732) list_single_graphic_pane_cp2

0xdbc4,	// (0x00038732) list_single_heading_pane_cp2_ParamLimits

0xdbc4,	// (0x00038732) list_single_heading_pane_cp2

0xdbd9,	// (0x00038747) list_single_large_graphic_pane_cp2_ParamLimits

0xdbd9,	// (0x00038747) list_single_large_graphic_pane_cp2

0xdbc4,	// (0x00038732) list_single_number_heading_pane_cp2_ParamLimits

0xdbc4,	// (0x00038732) list_single_number_heading_pane_cp2

0xdbc4,	// (0x00038732) list_single_number_pane_cp2_ParamLimits

0xdbc4,	// (0x00038732) list_single_number_pane_cp2

0xdbc4,	// (0x00038732) list_single_pane_cp2_ParamLimits

0xdbc4,	// (0x00038732) list_single_pane_cp2

0xaaa9,	// (0x00035617) bg_popup_sub_pane_cp22

0x8a00,	// (0x0003356e) popup_side_volume_key_window_g1

0x8a24,	// (0x00033592) popup_side_volume_key_window_t1

0x8a40,	// (0x000335ae) volume_small_pane_cp1

0x7f76,	// (0x00032ae4) bg_popup_sub_pane_cp24_ParamLimits

0x7f76,	// (0x00032ae4) bg_popup_sub_pane_cp24

0xaabf,	// (0x0003562d) fep_china_uni_candidate_pane_ParamLimits

0xaabf,	// (0x0003562d) fep_china_uni_candidate_pane

0xaad3,	// (0x00035641) fep_china_uni_entry_pane

0xaae3,	// (0x00035651) popup_fep_china_uni_window_g1

0xaaff,	// (0x0003566d) fep_china_uni_entry_pane_g1

0xab07,	// (0x00035675) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0003a295) fep_china_uni_entry_pane_g

0xab0f,	// (0x0003567d) fep_entry_item_pane

0xab19,	// (0x00035687) fep_candidate_item_pane

0xab21,	// (0x0003568f) fep_china_uni_candidate_pane_g1

0xab29,	// (0x00035697) fep_china_uni_candidate_pane_g2

0xab31,	// (0x0003569f) fep_china_uni_candidate_pane_g3

0xab39,	// (0x000356a7) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0003a29a) fep_china_uni_candidate_pane_g

0x7a5e,	// (0x000325cc) fep_entry_item_pane_g1

0xab41,	// (0x000356af) fep_entry_item_pane_t1_ParamLimits

0xab41,	// (0x000356af) fep_entry_item_pane_t1

0xab57,	// (0x000356c5) fep_candidate_item_pane_t1_ParamLimits

0xab57,	// (0x000356c5) fep_candidate_item_pane_t1

0xab6c,	// (0x000356da) fep_candidate_item_pane_t2_ParamLimits

0xab6c,	// (0x000356da) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0003a2a3) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0003a2a3) fep_candidate_item_pane_t

0x7db1,	// (0x0003291f) list_highlight_pane_cp31_ParamLimits

0x7db1,	// (0x0003291f) list_highlight_pane_cp31

0xab7e,	// (0x000356ec) level_1_signal_lsc

0xab87,	// (0x000356f5) level_2_signal_lsc

0xab90,	// (0x000356fe) level_3_signal_lsc

0xab99,	// (0x00035707) level_4_signal_lsc

0xaba2,	// (0x00035710) level_5_signal_lsc

0xabab,	// (0x00035719) level_6_signal_lsc

0xabb4,	// (0x00035722) level_7_signal_lsc

0xabb4,	// (0x00035722) level_1_battery_lsc

0xabbd,	// (0x0003572b) level_2_battery_lsc

0xabc6,	// (0x00035734) level_3_battery_lsc

0xabcf,	// (0x0003573d) level_4_battery_lsc

0xabd8,	// (0x00035746) level_5_battery_lsc

0xabe1,	// (0x0003574f) level_6_battery_lsc

0xab7e,	// (0x000356ec) level_7_battery_lsc

0xabea,	// (0x00035758) scroll_handle_focus_pane_g1

0xabf3,	// (0x00035761) scroll_handle_focus_pane_g2

0xabfc,	// (0x0003576a) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0003a2a8) scroll_handle_focus_pane_g

0x72e7,	// (0x00031e55) list_single_2graphic_pane_g1_ParamLimits

0x72e7,	// (0x00031e55) list_single_2graphic_pane_g1

0x83bb,	// (0x00032f29) list_single_2graphic_pane_g2_ParamLimits

0x83bb,	// (0x00032f29) list_single_2graphic_pane_g2

0x83af,	// (0x00032f1d) list_single_2graphic_pane_g3_ParamLimits

0x83af,	// (0x00032f1d) list_single_2graphic_pane_g3

0x72f3,	// (0x00031e61) list_single_2graphic_pane_g4_ParamLimits

0x72f3,	// (0x00031e61) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0003a2af) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0003a2af) list_single_2graphic_pane_g

0x72ff,	// (0x00031e6d) list_single_2graphic_pane_t1_ParamLimits

0x72ff,	// (0x00031e6d) list_single_2graphic_pane_t1

0x8a48,	// (0x000335b6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8a48,	// (0x000335b6) list_double2_graphic_large_graphic_pane_g1

0x8453,	// (0x00032fc1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8453,	// (0x00032fc1) list_double2_graphic_large_graphic_pane_g2

0x8426,	// (0x00032f94) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8426,	// (0x00032f94) list_double2_graphic_large_graphic_pane_g3

0x732d,	// (0x00031e9b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x732d,	// (0x00031e9b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0003a2b8) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0003a2b8) list_double2_graphic_large_graphic_pane_g

0x7339,	// (0x00031ea7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7339,	// (0x00031ea7) list_double2_graphic_large_graphic_pane_t1

0x734f,	// (0x00031ebd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x734f,	// (0x00031ebd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0003a2c1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0003a2c1) list_double2_graphic_large_graphic_pane_t

0xacd7,	// (0x00035845) popup_fast_swap_window_ParamLimits

0xacd7,	// (0x00035845) popup_fast_swap_window

0xacf3,	// (0x00035861) popup_side_volume_key_window

0xad0d,	// (0x0003587b) stacon_top_pane

0xad17,	// (0x00035885) status_pane_ParamLimits

0xad17,	// (0x00035885) status_pane

0xdcaa,	// (0x00038818) status_small_pane

0x7c1d,	// (0x0003278b) control_pane

0x7c1d,	// (0x0003278b) stacon_bottom_pane

0x8392,	// (0x00032f00) scroll_pane_cp121

0x8495,	// (0x00033003) set_content_pane

0xdc4c,	// (0x000387ba) bg_active_tab_pane_g1_cp1

0xac05,	// (0x00035773) bg_active_tab_pane_g2_cp1

0xdc55,	// (0x000387c3) bg_active_tab_pane_g3_cp1

0xdc4c,	// (0x000387ba) bg_passive_tab_pane_g1_cp1

0xac05,	// (0x00035773) bg_passive_tab_pane_g2_cp1

0xdc55,	// (0x000387c3) bg_passive_tab_pane_g3_cp1

0xdc5e,	// (0x000387cc) bg_active_tab_pane_g1_cp2

0xac05,	// (0x00035773) bg_active_tab_pane_g2_cp2

0xdc67,	// (0x000387d5) bg_active_tab_pane_g3_cp2

0xdc5e,	// (0x000387cc) bg_passive_tab_pane_g1_cp2

0xac05,	// (0x00035773) bg_passive_tab_pane_g2_cp2

0xdc67,	// (0x000387d5) bg_passive_tab_pane_g3_cp2

0xdc70,	// (0x000387de) bg_active_tab_pane_g1_cp3

0xac05,	// (0x00035773) bg_active_tab_pane_g2_cp3

0xdc79,	// (0x000387e7) bg_active_tab_pane_g3_cp3

0xdc70,	// (0x000387de) bg_passive_tab_pane_g1_cp3

0xac05,	// (0x00035773) bg_passive_tab_pane_g2_cp3

0xdc79,	// (0x000387e7) bg_passive_tab_pane_g3_cp3

0xdc82,	// (0x000387f0) bg_active_tab_pane_g1_cp4

0xac05,	// (0x00035773) bg_active_tab_pane_g2_cp4

0xdc8b,	// (0x000387f9) bg_active_tab_pane_g3_cp4

0xdc82,	// (0x000387f0) bg_passive_tab_pane_g1_cp4

0xac05,	// (0x00035773) bg_passive_tab_pane_g2_cp4

0xdc8b,	// (0x000387f9) bg_passive_tab_pane_g3_cp4

0xac4c,	// (0x000357ba) bg_active_tab_pane_g1_cp5

0xac05,	// (0x00035773) bg_active_tab_pane_g2_cp5

0xac55,	// (0x000357c3) bg_active_tab_pane_g3_cp5

0xac4c,	// (0x000357ba) bg_passive_tab_pane_g1_cp5

0xac05,	// (0x00035773) bg_passive_tab_pane_g2_cp5

0xac55,	// (0x000357c3) bg_passive_tab_pane_g3_cp5

0xdc94,	// (0x00038802) list_set_graphic_pane_ParamLimits

0xdc94,	// (0x00038802) list_set_graphic_pane

0x7c1d,	// (0x0003278b) bg_set_opt_pane_cp4

0xac5e,	// (0x000357cc) list_set_graphic_pane_g1_ParamLimits

0xac5e,	// (0x000357cc) list_set_graphic_pane_g1

0xac6a,	// (0x000357d8) list_set_graphic_pane_g2_ParamLimits

0xac6a,	// (0x000357d8) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0003a2c6) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0003a2c6) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0003a63f) volume_small_pane_cp_g

0xac8c,	// (0x000357fa) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xac8c,	// (0x000357fa) list_double2_large_graphic_pane_g1_cp2

0xac98,	// (0x00035806) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xac98,	// (0x00035806) list_double2_large_graphic_pane_g2_cp2

0xaca7,	// (0x00035815) list_double2_large_graphic_pane_g3_cp2

0xacaf,	// (0x0003581d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xacaf,	// (0x0003581d) list_double2_large_graphic_pane_t1_cp2

0xacc5,	// (0x00035833) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xacc5,	// (0x00035833) list_double2_large_graphic_pane_t2_cp2

0xc197,	// (0x00036d05) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc197,	// (0x00036d05) list_double_large_graphic_pane_g1_cp2

0xc1a8,	// (0x00036d16) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc1a8,	// (0x00036d16) list_double_large_graphic_pane_g2_cp2

0xadf2,	// (0x00035960) list_double_large_graphic_pane_g3_cp2

0xc1b7,	// (0x00036d25) list_double_large_graphic_pane_g4_cp

0xc1bf,	// (0x00036d2d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xc1bf,	// (0x00036d2d) list_double_large_graphic_pane_t1_cp2

0xc1d6,	// (0x00036d44) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xc1d6,	// (0x00036d44) list_double_large_graphic_pane_t2_cp2

0xad25,	// (0x00035893) list_double2_graphic_pane_g1_cp2_ParamLimits

0xad25,	// (0x00035893) list_double2_graphic_pane_g1_cp2

0xad31,	// (0x0003589f) list_double2_graphic_pane_g2_cp2_ParamLimits

0xad31,	// (0x0003589f) list_double2_graphic_pane_g2_cp2

0xad40,	// (0x000358ae) list_double2_graphic_pane_g3_cp2

0xad48,	// (0x000358b6) list_double2_graphic_pane_t1_cp2_ParamLimits

0xad48,	// (0x000358b6) list_double2_graphic_pane_t1_cp2

0xad5e,	// (0x000358cc) list_double2_graphic_pane_t2_cp2_ParamLimits

0xad5e,	// (0x000358cc) list_double2_graphic_pane_t2_cp2

0xad70,	// (0x000358de) list_single_number_heading_pane_g1_cp2_ParamLimits

0xad70,	// (0x000358de) list_single_number_heading_pane_g1_cp2

0xad7c,	// (0x000358ea) list_single_number_heading_pane_g2_cp2

0xad84,	// (0x000358f2) list_single_number_heading_pane_t1_cp2_ParamLimits

0xad84,	// (0x000358f2) list_single_number_heading_pane_t1_cp2

0xad9a,	// (0x00035908) list_single_number_heading_pane_t2_cp2_ParamLimits

0xad9a,	// (0x00035908) list_single_number_heading_pane_t2_cp2

0xadac,	// (0x0003591a) list_single_number_heading_pane_t3_cp2_ParamLimits

0xadac,	// (0x0003591a) list_single_number_heading_pane_t3_cp2

0xad70,	// (0x000358de) list_single_heading_pane_g1_cp2_ParamLimits

0xad70,	// (0x000358de) list_single_heading_pane_g1_cp2

0xad7c,	// (0x000358ea) list_single_heading_pane_g2_cp2

0xad84,	// (0x000358f2) list_single_heading_pane_t1_cp2_ParamLimits

0xad84,	// (0x000358f2) list_single_heading_pane_t1_cp2

0xbfa1,	// (0x00036b0f) list_single_heading_pane_t2_cp2_ParamLimits

0xbfa1,	// (0x00036b0f) list_single_heading_pane_t2_cp2

0xbef1,	// (0x00036a5f) list_double_graphic_pane_g1_cp2_ParamLimits

0xbef1,	// (0x00036a5f) list_double_graphic_pane_g1_cp2

0xbefd,	// (0x00036a6b) list_double_graphic_pane_g2_cp2_ParamLimits

0xbefd,	// (0x00036a6b) list_double_graphic_pane_g2_cp2

0xbf0c,	// (0x00036a7a) list_double_graphic_pane_g3_cp2

0xbf14,	// (0x00036a82) list_double_graphic_pane_t1_cp2_ParamLimits

0xbf14,	// (0x00036a82) list_double_graphic_pane_t1_cp2

0xbf2a,	// (0x00036a98) list_double_graphic_pane_t2_cp2_ParamLimits

0xbf2a,	// (0x00036a98) list_double_graphic_pane_t2_cp2

0xade6,	// (0x00035954) list_double_number_pane_g1_cp2_ParamLimits

0xade6,	// (0x00035954) list_double_number_pane_g1_cp2

0xadf2,	// (0x00035960) list_double_number_pane_g2_cp2

0xbeb7,	// (0x00036a25) list_double_number_pane_t1_cp2_ParamLimits

0xbeb7,	// (0x00036a25) list_double_number_pane_t1_cp2

0xbec9,	// (0x00036a37) list_double_number_pane_t2_cp2_ParamLimits

0xbec9,	// (0x00036a37) list_double_number_pane_t2_cp2

0xbedf,	// (0x00036a4d) list_double_number_pane_t3_cp2_ParamLimits

0xbedf,	// (0x00036a4d) list_double_number_pane_t3_cp2

0xbe2f,	// (0x0003699d) list_single_graphic_pane_g1_cp2_ParamLimits

0xbe2f,	// (0x0003699d) list_single_graphic_pane_g1_cp2

0xad70,	// (0x000358de) list_single_graphic_pane_g2_cp2_ParamLimits

0xad70,	// (0x000358de) list_single_graphic_pane_g2_cp2

0xad7c,	// (0x000358ea) list_single_graphic_pane_g3_cp2

0xbe07,	// (0x00036975) list_single_graphic_pane_t1_cp2_ParamLimits

0xbe07,	// (0x00036975) list_single_graphic_pane_t1_cp2

0xad70,	// (0x000358de) list_single_number_pane_g1_cp2_ParamLimits

0xad70,	// (0x000358de) list_single_number_pane_g1_cp2

0xad7c,	// (0x000358ea) list_single_number_pane_g2_cp2

0xbe07,	// (0x00036975) list_single_number_pane_t1_cp2_ParamLimits

0xbe07,	// (0x00036975) list_single_number_pane_t1_cp2

0xbe1d,	// (0x0003698b) list_single_number_pane_t2_cp2_ParamLimits

0xbe1d,	// (0x0003698b) list_single_number_pane_t2_cp2

0xac98,	// (0x00035806) list_double2_pane_g1_cp2_ParamLimits

0xac98,	// (0x00035806) list_double2_pane_g1_cp2

0xaca7,	// (0x00035815) list_double2_pane_g2_cp2

0xadbe,	// (0x0003592c) list_double2_pane_t1_cp2_ParamLimits

0xadbe,	// (0x0003592c) list_double2_pane_t1_cp2

0xadd4,	// (0x00035942) list_double2_pane_t2_cp2_ParamLimits

0xadd4,	// (0x00035942) list_double2_pane_t2_cp2

0xade6,	// (0x00035954) list_double_pane_g1_cp2_ParamLimits

0xade6,	// (0x00035954) list_double_pane_g1_cp2

0xadf2,	// (0x00035960) list_double_pane_g2_cp2

0xadfa,	// (0x00035968) list_double_pane_t1_cp2_ParamLimits

0xadfa,	// (0x00035968) list_double_pane_t1_cp2

0xae10,	// (0x0003597e) list_double_pane_t2_cp2_ParamLimits

0xae10,	// (0x0003597e) list_double_pane_t2_cp2

0xae38,	// (0x000359a6) list_single_pane_cp2_g3

0xad70,	// (0x000358de) list_single_pane_g1_cp2_ParamLimits

0xad70,	// (0x000358de) list_single_pane_g1_cp2

0xad7c,	// (0x000358ea) list_single_pane_g2_cp2

0xae48,	// (0x000359b6) list_single_pane_t1_cp2_ParamLimits

0xae48,	// (0x000359b6) list_single_pane_t1_cp2

0xae60,	// (0x000359ce) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xae60,	// (0x000359ce) list_single_large_graphic_pane_g1_cp2

0xae6c,	// (0x000359da) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xae6c,	// (0x000359da) list_single_large_graphic_pane_g2_cp2

0xae78,	// (0x000359e6) list_single_large_graphic_pane_g3_cp2

0xae80,	// (0x000359ee) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xae80,	// (0x000359ee) list_single_large_graphic_pane_g4_cp1

0xae9a,	// (0x00035a08) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xae9a,	// (0x00035a08) list_single_large_graphic_pane_t1_cp2

0xbde9,	// (0x00036957) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xbde9,	// (0x00036957) list_single_graphic_heading_pane_g1_cp2

0xbdc4,	// (0x00036932) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xbdc4,	// (0x00036932) list_single_graphic_heading_pane_g4_cp2

0xad7c,	// (0x000358ea) list_single_graphic_heading_pane_g5_cp2

0xad84,	// (0x000358f2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xad84,	// (0x000358f2) list_single_graphic_heading_pane_t1_cp2

0xbdf5,	// (0x00036963) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xbdf5,	// (0x00036963) list_single_graphic_heading_pane_t2_cp2

0xbdb8,	// (0x00036926) list_single_2graphic_pane_g1_cp2_ParamLimits

0xbdb8,	// (0x00036926) list_single_2graphic_pane_g1_cp2

0xbdc4,	// (0x00036932) list_single_2graphic_pane_g2_cp2_ParamLimits

0xbdc4,	// (0x00036932) list_single_2graphic_pane_g2_cp2

0xad7c,	// (0x000358ea) list_single_2graphic_pane_g3_cp2

0xb2db,	// (0x00035e49) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb2db,	// (0x00035e49) list_single_2graphic_pane_g4_cp2

0xbdd3,	// (0x00036941) list_single_2graphic_pane_t1_cp2_ParamLimits

0xbdd3,	// (0x00036941) list_single_2graphic_pane_t1_cp2

0x7a5e,	// (0x000325cc) list_highlight_pane_g10_cp1

0xb9ca,	// (0x00036538) list_highlight_pane_g1_cp1

0xb9d2,	// (0x00036540) list_highlight_pane_g2_cp1

0xb9da,	// (0x00036548) list_highlight_pane_g3_cp1

0xb9e2,	// (0x00036550) list_highlight_pane_g4_cp1

0xb9ea,	// (0x00036558) list_highlight_pane_g5_cp1

0xb9f2,	// (0x00036560) list_highlight_pane_g6_cp1

0xb9fa,	// (0x00036568) list_highlight_pane_g7_cp1

0xba02,	// (0x00036570) list_highlight_pane_g8_cp1

0xba0a,	// (0x00036578) list_highlight_pane_g9_cp1

0xe162,	// (0x00038cd0) form_field_slider_pane_t3

0xe170,	// (0x00038cde) form_field_slider_pane_t4

0xb914,	// (0x00036482) slider_form_pane_ParamLimits

0xb914,	// (0x00036482) slider_form_pane

0x7c1d,	// (0x0003278b) control_abbreviations

0x7c1d,	// (0x0003278b) control_conventions

0x7c1d,	// (0x0003278b) control_definitions

0x7c1d,	// (0x0003278b) format_table_attribute

0xbfeb,	// (0x00036b59) bg_popup_preview_window_pane_g9

0x7c1d,	// (0x0003278b) format_table_data2

0x7c1d,	// (0x0003278b) format_table_data3

0x7c1d,	// (0x0003278b) format_table_data_example

0x0008,

0x7c1d,	// (0x0003278b) intro_purpose

0xf8ef,	// (0x0003a45d) bg_popup_preview_window_pane_g

0x7c1d,	// (0x0003278b) texts_category

0x7c1d,	// (0x0003278b) texts_graphics

0xaeb0,	// (0x00035a1e) text_digital

0xaebf,	// (0x00035a2d) text_primary

0xaece,	// (0x00035a3c) text_primary_small

0xaedd,	// (0x00035a4b) text_secondary

0xaeec,	// (0x00035a5a) text_title

0xc464,	// (0x00036fd2) bg_passive_tab_pane_g1_cp3_srt

0xac05,	// (0x00035773) bg_passive_tab_pane_g2_cp3_srt

0xc46d,	// (0x00036fdb) bg_passive_tab_pane_g3_cp3_srt

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp3_srt_ParamLimits

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp3_srt

0xc476,	// (0x00036fe4) tabs_4_active_pane_srt_g1

0xd878,	// (0x000383e6) tabs_4_active_pane_srt_t1_ParamLimits

0xd878,	// (0x000383e6) tabs_4_active_pane_srt_t1

0xc464,	// (0x00036fd2) bg_active_tab_pane_g1_cp3_copy1

0xac05,	// (0x00035773) bg_active_tab_pane_g2_cp3_copy1

0xc46d,	// (0x00036fdb) bg_active_tab_pane_g3_cp3_copy1

0x7db1,	// (0x0003291f) tabs_2_long_active_pane_srt_ParamLimits

0x7db1,	// (0x0003291f) tabs_2_long_active_pane_srt

0x7db1,	// (0x0003291f) tabs_2_long_passive_pane_srt_ParamLimits

0x7db1,	// (0x0003291f) tabs_2_long_passive_pane_srt

0xdaaf,	// (0x0003861d) bg_passive_tab_pane_cp4_srt_ParamLimits

0xdaaf,	// (0x0003861d) bg_passive_tab_pane_cp4_srt

0xc39a,	// (0x00036f08) bg_passive_tab_pane_g1_cp4_srt

0xac05,	// (0x00035773) bg_passive_tab_pane_g2_cp4_srt

0xc3a3,	// (0x00036f11) bg_passive_tab_pane_g3_cp4_srt

0xa8cb,	// (0x00035439) bg_active_tab_pane_cp4_srt_ParamLimits

0xa8cb,	// (0x00035439) bg_active_tab_pane_cp4_srt

0xda9c,	// (0x0003860a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xda9c,	// (0x0003860a) tabs_2_long_active_pane_srt_t1

0xc39a,	// (0x00036f08) bg_active_tab_pane_g1_cp4_srt

0xac05,	// (0x00035773) bg_active_tab_pane_g2_cp4_srt

0xc3a3,	// (0x00036f11) bg_active_tab_pane_g3_cp4_srt

0x7f76,	// (0x00032ae4) tabs_3_long_active_pane_srt_ParamLimits

0x7f76,	// (0x00032ae4) tabs_3_long_active_pane_srt

0x7f76,	// (0x00032ae4) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7f76,	// (0x00032ae4) tabs_3_long_passive_pane_cp_srt

0x7f76,	// (0x00032ae4) tabs_3_long_passive_pane_srt_ParamLimits

0x7f76,	// (0x00032ae4) tabs_3_long_passive_pane_srt

0xdaaf,	// (0x0003861d) bg_passive_tab_pane_cp5_srt_ParamLimits

0xdaaf,	// (0x0003861d) bg_passive_tab_pane_cp5_srt

0xac4c,	// (0x000357ba) bg_passive_tab_pane_g1_cp5_srt

0xac05,	// (0x00035773) bg_passive_tab_pane_g2_cp5_srt

0xac55,	// (0x000357c3) bg_passive_tab_pane_g3_cp5_srt

0xa8cb,	// (0x00035439) bg_active_tab_pane_cp5_srt_ParamLimits

0xa8cb,	// (0x00035439) bg_active_tab_pane_cp5_srt

0xdabb,	// (0x00038629) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdabb,	// (0x00038629) tabs_3_long_active_pane_srt_t1

0xac4c,	// (0x000357ba) bg_active_tab_pane_g1_cp5_srt

0xac05,	// (0x00035773) bg_active_tab_pane_g2_cp5_srt

0xac55,	// (0x000357c3) bg_active_tab_pane_g3_cp5_srt

0xc38c,	// (0x00036efa) navi_text_pane_srt_t1

0xc384,	// (0x00036ef2) navi_icon_pane_srt_g1

0xb004,	// (0x00035b72) midp_editing_number_pane_srt

0xaefb,	// (0x00035a69) midp_ticker_pane_srt

0xb00c,	// (0x00035b7a) midp_ticker_pane_srt_g1

0xb014,	// (0x00035b82) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0003a2e5) midp_ticker_pane_srt_g

0xb01c,	// (0x00035b8a) midp_ticker_pane_srt_t1

0xc375,	// (0x00036ee3) midp_editing_number_pane_t1_copy1

0xdcb3,	// (0x00038821) listscroll_midp_pane

0xdcb3,	// (0x00038821) midp_form_pane

0xaf03,	// (0x00035a71) midp_info_popup_window_ParamLimits

0xaf03,	// (0x00035a71) midp_info_popup_window

0x854a,	// (0x000330b8) bg_popup_sub_pane_cp50_ParamLimits

0x854a,	// (0x000330b8) bg_popup_sub_pane_cp50

0xb631,	// (0x0003619f) listscroll_midp_info_pane_ParamLimits

0xb631,	// (0x0003619f) listscroll_midp_info_pane

0xb619,	// (0x00036187) listscroll_form_midp_pane_ParamLimits

0xb619,	// (0x00036187) listscroll_form_midp_pane

0xb625,	// (0x00036193) scroll_bar_cp050

0xe14a,	// (0x00038cb8) list_midp_pane

0xcc8c,	// (0x000377fa) signal_pane_g2_cp

0xb54b,	// (0x000360b9) listscroll_midp_info_pane_t1_ParamLimits

0xb54b,	// (0x000360b9) listscroll_midp_info_pane_t1

0xb563,	// (0x000360d1) listscroll_midp_info_pane_t2_ParamLimits

0xb563,	// (0x000360d1) listscroll_midp_info_pane_t2

0xb5a1,	// (0x0003610f) listscroll_midp_info_pane_t3_ParamLimits

0xb5a1,	// (0x0003610f) listscroll_midp_info_pane_t3

0xb5db,	// (0x00036149) listscroll_midp_info_pane_t4_ParamLimits

0xb5db,	// (0x00036149) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0003a398) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0003a398) listscroll_midp_info_pane_t

0x85ed,	// (0x0003315b) scroll_pane_cp21

0xb4ef,	// (0x0003605d) form_midp_field_choice_group_pane

0xb4f8,	// (0x00036066) form_midp_field_text_pane

0xb531,	// (0x0003609f) form_midp_field_time_pane

0xb539,	// (0x000360a7) form_midp_gauge_slider_pane

0xb542,	// (0x000360b0) form_midp_gauge_wait_pane

0x7c1d,	// (0x0003278b) form_midp_image_pane

0x7485,	// (0x00031ff3) list_single_midp_pane_ParamLimits

0x7485,	// (0x00031ff3) list_single_midp_pane

0xb4bd,	// (0x0003602b) form_midp_field_text_pane_t1

0xb313,	// (0x00035e81) input_focus_pane_cp050

0xb4de,	// (0x0003604c) list_midp_form_text_pane

0xb48c,	// (0x00035ffa) form_midp_field_choice_group_pane_t1

0xb49a,	// (0x00036008) input_focus_pane_cp051

0xb4ae,	// (0x0003601c) list_midp_choice_pane

0x7c1d,	// (0x0003278b) status_idle_pane

0xb470,	// (0x00035fde) form_midp_field_time_pane_t1

0x7a5e,	// (0x000325cc) wait_anim_pane_g2_copy1

0xb47e,	// (0x00035fec) form_midp_field_time_pane_t2

0x0001,

0xaf6e,	// (0x00035adc) aid_navinavi_width_2_pane

0xf825,	// (0x0003a393) form_midp_field_time_pane_t

0x7c1d,	// (0x0003278b) input_focus_pane_cp052

0x7c1d,	// (0x0003278b) bg_input_focus_pane_cp040

0xb44c,	// (0x00035fba) form_midp_gauge_slider_pane_t1

0xb45a,	// (0x00035fc8) form_midp_gauge_slider_pane_t2

0xe12e,	// (0x00038c9c) form_midp_gauge_slider_pane_t3

0xe13c,	// (0x00038caa) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0003a38a) form_midp_gauge_slider_pane_t

0xb468,	// (0x00035fd6) form_midp_slider_pane

0x7db1,	// (0x0003291f) bg_input_focus_pane_cp041_ParamLimits

0x7db1,	// (0x0003291f) bg_input_focus_pane_cp041

0xb41c,	// (0x00035f8a) form_midp_gauge_wait_pane_t1_ParamLimits

0xb41c,	// (0x00035f8a) form_midp_gauge_wait_pane_t1

0xb42e,	// (0x00035f9c) form_midp_gauge_wait_pane_t2_ParamLimits

0xb42e,	// (0x00035f9c) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0003a385) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0003a385) form_midp_gauge_wait_pane_t

0xb440,	// (0x00035fae) form_midp_wait_pane_ParamLimits

0xb440,	// (0x00035fae) form_midp_wait_pane

0xb3e6,	// (0x00035f54) form_midp_image_pane_g1

0xb3ef,	// (0x00035f5d) form_midp_image_pane_t1

0xb3fe,	// (0x00035f6c) form_midp_image_pane_t2

0xb40d,	// (0x00035f7b) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0003a37e) form_midp_image_pane_t

0xb3dd,	// (0x00035f4b) list_single_midp_pane_g1

0x7476,	// (0x00031fe4) list_single_midp_pane_t1

0xb3c9,	// (0x00035f37) list_midp_form_item_pane_ParamLimits

0xb3c9,	// (0x00035f37) list_midp_form_item_pane

0xaf16,	// (0x00035a84) list_midp_form_item_pane_t1

0xaf25,	// (0x00035a93) midp_ticker_pane_g1

0xaf31,	// (0x00035a9f) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0003a2cb) midp_ticker_pane_g

0xaf3d,	// (0x00035aab) midp_ticker_pane_t1

0xc375,	// (0x00036ee3) midp_editing_number_pane_t1

0xc3fd,	// (0x00036f6b) midp_editing_number_pane

0xc409,	// (0x00036f77) midp_ticker_pane

0xc365,	// (0x00036ed3) ai_message_heading_pane

0x7c1d,	// (0x0003278b) bg_popup_window_pane_cp14

0xc36d,	// (0x00036edb) listscroll_ai_message_pane

0xc2ef,	// (0x00036e5d) ai_message_heading_pane_g1_ParamLimits

0xc2ef,	// (0x00036e5d) ai_message_heading_pane_g1

0xc2fb,	// (0x00036e69) ai_message_heading_pane_g2_ParamLimits

0xc2fb,	// (0x00036e69) ai_message_heading_pane_g2

0xc307,	// (0x00036e75) ai_message_heading_pane_g3_ParamLimits

0xc307,	// (0x00036e75) ai_message_heading_pane_g3

0xc313,	// (0x00036e81) ai_message_heading_pane_g4_ParamLimits

0xc313,	// (0x00036e81) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0003a4bf) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0003a4bf) ai_message_heading_pane_g

0xc31f,	// (0x00036e8d) ai_message_heading_pane_t1_ParamLimits

0xc31f,	// (0x00036e8d) ai_message_heading_pane_t1

0xc339,	// (0x00036ea7) ai_message_heading_pane_t2_ParamLimits

0xc339,	// (0x00036ea7) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0003a4c8) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0003a4c8) ai_message_heading_pane_t

0xc34b,	// (0x00036eb9) bg_popup_heading_pane_cp1_ParamLimits

0xc34b,	// (0x00036eb9) bg_popup_heading_pane_cp1

0xc2dd,	// (0x00036e4b) list_ai_message_pane_ParamLimits

0xc2dd,	// (0x00036e4b) list_ai_message_pane

0x85ed,	// (0x0003315b) scroll_pane_cp10

0xc279,	// (0x00036de7) list_ai_message_pane_g1

0xc281,	// (0x00036def) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0003a49c) list_ai_message_pane_g

0xc289,	// (0x00036df7) list_ai_message_pane_t1_ParamLimits

0xc289,	// (0x00036df7) list_ai_message_pane_t1

0xc29e,	// (0x00036e0c) list_ai_message_pane_t2_ParamLimits

0xc29e,	// (0x00036e0c) list_ai_message_pane_t2

0xc2b3,	// (0x00036e21) list_ai_message_pane_t3_ParamLimits

0xc2b3,	// (0x00036e21) list_ai_message_pane_t3

0xc2c8,	// (0x00036e36) list_ai_message_pane_t4_ParamLimits

0xc2c8,	// (0x00036e36) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0003a4a1) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0003a4a1) list_ai_message_pane_t

0xc267,	// (0x00036dd5) cell_ai_soft_ind_pane_ParamLimits

0xc267,	// (0x00036dd5) cell_ai_soft_ind_pane

0xaf4f,	// (0x00035abd) cell_ai_soft_ind_pane_g1_ParamLimits

0xaf4f,	// (0x00035abd) cell_ai_soft_ind_pane_g1

0x7c1d,	// (0x0003278b) grid_highlight_cp1

0xaf5c,	// (0x00035aca) text_secondary_cp56_ParamLimits

0xaf5c,	// (0x00035aca) text_secondary_cp56

0xc23c,	// (0x00036daa) example_general_pane_ParamLimits

0xc23c,	// (0x00036daa) example_general_pane

0xc248,	// (0x00036db6) example_parent_pane_g1_ParamLimits

0xc248,	// (0x00036db6) example_parent_pane_g1

0xc254,	// (0x00036dc2) example_parent_pane_t1_ParamLimits

0xc254,	// (0x00036dc2) example_parent_pane_t1

0x9052,	// (0x00033bc0) popup_preview_text_window_ParamLimits

0x9052,	// (0x00033bc0) popup_preview_text_window

0xae40,	// (0x000359ae) list_single_pane_cp2_g4

0x8052,	// (0x00032bc0) bg_popup_preview_window_pane_ParamLimits

0x8052,	// (0x00032bc0) bg_popup_preview_window_pane

0xbff3,	// (0x00036b61) popup_preview_text_window_t1_ParamLimits

0xbff3,	// (0x00036b61) popup_preview_text_window_t1

0xc011,	// (0x00036b7f) popup_preview_text_window_t2_ParamLimits

0xc011,	// (0x00036b7f) popup_preview_text_window_t2

0xc05a,	// (0x00036bc8) popup_preview_text_window_t3_ParamLimits

0xc05a,	// (0x00036bc8) popup_preview_text_window_t3

0xc09f,	// (0x00036c0d) popup_preview_text_window_t4_ParamLimits

0xc09f,	// (0x00036c0d) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0003a470) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0003a470) popup_preview_text_window_t

0xc11d,	// (0x00036c8b) scroll_pane_cp11

0xb293,	// (0x00035e01) bg_popup_preview_window_pane_g1

0xbfb3,	// (0x00036b21) bg_popup_preview_window_pane_g2

0xbfbb,	// (0x00036b29) bg_popup_preview_window_pane_g3

0xbfc3,	// (0x00036b31) bg_popup_preview_window_pane_g4

0xbfcb,	// (0x00036b39) bg_popup_preview_window_pane_g5

0xbfd3,	// (0x00036b41) bg_popup_preview_window_pane_g6

0xbfdb,	// (0x00036b49) bg_popup_preview_window_pane_g7

0xbfe3,	// (0x00036b51) bg_popup_preview_window_pane_g8

0x7a70,	// (0x000325de) aid_popup_width_pane

0x9034,	// (0x00033ba2) popup_midp_note_alarm_window_ParamLimits

0x9034,	// (0x00033ba2) popup_midp_note_alarm_window

0x849e,	// (0x0003300c) data_form_pane_ParamLimits

0x714d,	// (0x00031cbb) form_field_data_pane_g1

0x7155,	// (0x00031cc3) form_field_data_pane_t1_ParamLimits

0x84aa,	// (0x00033018) input_focus_pane_ParamLimits

0x84b8,	// (0x00033026) data_form_wide_pane_ParamLimits

0x716d,	// (0x00031cdb) form_field_data_wide_pane_g1

0x7179,	// (0x00031ce7) form_field_data_wide_pane_t1_ParamLimits

0x8211,	// (0x00032d7f) input_focus_pane_cp6_ParamLimits

0xda76,	// (0x000385e4) input_popup_find_pane_g1_ParamLimits

0xda76,	// (0x000385e4) input_popup_find_pane_g1

0x8897,	// (0x00033405) aid_navi_side_left_pane

0x88a7,	// (0x00033415) aid_navi_side_right_pane

0xba9b,	// (0x00036609) bg_popup_window_pane_cp30_ParamLimits

0xba9b,	// (0x00036609) bg_popup_window_pane_cp30

0xbb15,	// (0x00036683) popup_midp_note_alarm_window_g1_ParamLimits

0xbb15,	// (0x00036683) popup_midp_note_alarm_window_g1

0xbb45,	// (0x000366b3) popup_midp_note_alarm_window_t1_ParamLimits

0xbb45,	// (0x000366b3) popup_midp_note_alarm_window_t1

0xbbe6,	// (0x00036754) popup_midp_note_alarm_window_t2_ParamLimits

0xbbe6,	// (0x00036754) popup_midp_note_alarm_window_t2

0xbc94,	// (0x00036802) popup_midp_note_alarm_window_t3_ParamLimits

0xbc94,	// (0x00036802) popup_midp_note_alarm_window_t3

0xbcbc,	// (0x0003682a) popup_midp_note_alarm_window_t4_ParamLimits

0xbcbc,	// (0x0003682a) popup_midp_note_alarm_window_t4

0xbcdc,	// (0x0003684a) popup_midp_note_alarm_window_t5_ParamLimits

0xbcdc,	// (0x0003684a) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0003a40d) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0003a40d) popup_midp_note_alarm_window_t

0xbd88,	// (0x000368f6) wait_bar_pane_cp1_ParamLimits

0xbd88,	// (0x000368f6) wait_bar_pane_cp1

0x7c1d,	// (0x0003278b) wait_anim_pane_copy1

0x7c1d,	// (0x0003278b) wait_border_pane_copy1

0xb7e1,	// (0x0003634f) wait_border_pane_g1_copy1

0x7193,	// (0x00031d01) form_field_popup_pane_g1

0x719b,	// (0x00031d09) form_field_popup_pane_t1_ParamLimits

0x84aa,	// (0x00033018) input_focus_pane_cp7_ParamLimits

0x849e,	// (0x0003300c) list_form_pane_ParamLimits

0x71b3,	// (0x00031d21) form_field_popup_wide_pane_g1

0x71bb,	// (0x00031d29) form_field_popup_wide_pane_t1_ParamLimits

0x84aa,	// (0x00033018) input_focus_pane_cp8_ParamLimits

0x84d8,	// (0x00033046) list_form_wide_pane_ParamLimits

0xc49d,	// (0x0003700b) aid_size_cell_graphic_pane

0x7247,	// (0x00031db5) data_form_pane_t1_ParamLimits

0x74ac,	// (0x0003201a) data_form_wide_pane_t1_ParamLimits

0xdea6,	// (0x00038a14) bg_status_flat_pane

0xd7f6,	// (0x00038364) title_pane_t1_ParamLimits

0x7d79,	// (0x000328e7) title_pane_t2_ParamLimits

0x7d9f,	// (0x0003290d) title_pane_t3_ParamLimits

0xf557,	// (0x0003a0c5) title_pane_t_ParamLimits

0xdb59,	// (0x000386c7) level_1_signal_ParamLimits

0xdb66,	// (0x000386d4) level_2_signal_ParamLimits

0xdb73,	// (0x000386e1) level_3_signal_ParamLimits

0xdb80,	// (0x000386ee) level_4_signal_ParamLimits

0xdb8d,	// (0x000386fb) level_5_signal_ParamLimits

0xdb9a,	// (0x00038708) level_6_signal_ParamLimits

0xdba7,	// (0x00038715) level_7_signal_ParamLimits

0xdb59,	// (0x000386c7) level_1_battery_ParamLimits

0xdb66,	// (0x000386d4) level_2_battery_ParamLimits

0xdb73,	// (0x000386e1) level_3_battery_ParamLimits

0xdb80,	// (0x000386ee) level_4_battery_ParamLimits

0xdb8d,	// (0x000386fb) level_5_battery_ParamLimits

0xdb9a,	// (0x00038708) level_6_battery_ParamLimits

0xdba7,	// (0x00038715) level_7_battery_ParamLimits

0xb9ca,	// (0x00036538) bg_status_flat_pane_g1

0xb9d2,	// (0x00036540) bg_status_flat_pane_g2

0xb9da,	// (0x00036548) bg_status_flat_pane_g3

0xb9e2,	// (0x00036550) bg_status_flat_pane_g4

0xb9ea,	// (0x00036558) bg_status_flat_pane_g5

0xb9f2,	// (0x00036560) bg_status_flat_pane_g6

0xb9fa,	// (0x00036568) bg_status_flat_pane_g7

0xd85e,	// (0x000383cc) tabs_3_active_pane_t1_ParamLimits

0xd85e,	// (0x000383cc) tabs_3_passive_pane_t1_ParamLimits

0xd878,	// (0x000383e6) tabs_4_active_pane_t1_ParamLimits

0xd878,	// (0x000383e6) tabs_4_1_passive_pane_t1_ParamLimits

0xda8a,	// (0x000385f8) tabs_2_active_pane_t1_ParamLimits

0xda8a,	// (0x000385f8) tabs_2_passive_pane_t1_ParamLimits

0xa8cb,	// (0x00035439) bg_active_tab_pane_cp4_ParamLimits

0xda9c,	// (0x0003860a) tabs_2_long_active_pane_t1_ParamLimits

0xdaaf,	// (0x0003861d) bg_passive_tab_pane_cp4_ParamLimits

0x9296,	// (0x00033e04) list_single_midp_graphic_pane_t1_ParamLimits

0xa8cb,	// (0x00035439) bg_active_tab_pane_cp5_ParamLimits

0xdabb,	// (0x00038629) tabs_3_long_active_pane_t1_ParamLimits

0xdaaf,	// (0x0003861d) bg_passive_tab_pane_cp5_ParamLimits

0x9296,	// (0x00033e04) list_single_midp_graphic_pane_t1

0xdea6,	// (0x00038a14) bg_status_flat_pane_ParamLimits

0xb166,	// (0x00035cd4) indicator_pane_cp2_ParamLimits

0xb166,	// (0x00035cd4) indicator_pane_cp2

0xdfe9,	// (0x00038b57) navi_pane_srt_ParamLimits

0xdfe9,	// (0x00038b57) navi_pane_srt

0xb18e,	// (0x00035cfc) popup_clock_digital_analogue_window_cp1

0x7e87,	// (0x000329f5) indicator_pane_t1

0xaefb,	// (0x00035a69) copy_highlight_pane

0xaefb,	// (0x00035a69) cursor_graphics_pane

0xaefb,	// (0x00035a69) graphic_within_text_pane

0xaefb,	// (0x00035a69) link_highlight_pane

0xc0e0,	// (0x00036c4e) popup_preview_text_window_t5_ParamLimits

0xc0e0,	// (0x00036c4e) popup_preview_text_window_t5

0xaf76,	// (0x00035ae4) cursor_digital_pane

0xaf76,	// (0x00035ae4) cursor_primary_pane

0xaf87,	// (0x00035af5) cursor_primary_small_pane

0xaf8f,	// (0x00035afd) cursor_secondary_pane

0xaf97,	// (0x00035b05) cursor_title_pane

0xaf76,	// (0x00035ae4) link_highlight_digital_pane

0xaf7e,	// (0x00035aec) link_highlight_primary_pane

0xaf87,	// (0x00035af5) link_highlight_primary_small_pane

0xaf8f,	// (0x00035afd) link_highlight_secondary_pane

0xaf97,	// (0x00035b05) link_highlight_title_pane

0xaf76,	// (0x00035ae4) copy_highlight_digital_pane

0xaf76,	// (0x00035ae4) copy_highlight_primary_pane

0xaf87,	// (0x00035af5) copy_highlight_primary_small_pane

0xaf8f,	// (0x00035afd) copy_highlight_secondary_pane

0xaf97,	// (0x00035b05) copy_highlight_title_pane

0xaf8f,	// (0x00035afd) graphic_text_digital_pane

0xba4a,	// (0x000365b8) graphic_text_primary_pane

0xba53,	// (0x000365c1) graphic_text_primary_small_pane

0xaf87,	// (0x00035af5) graphic_text_secondary_pane

0xaf76,	// (0x00035ae4) graphic_text_title_pane

0xdd5a,	// (0x000388c8) cursor_primary_pane_g1

0xba3c,	// (0x000365aa) cursor_text_primary_t1

0xe18e,	// (0x00038cfc) cursor_primary_small_pane_g1

0xba2e,	// (0x0003659c) cursor_text_primary_small_t1

0xe186,	// (0x00038cf4) cursor_primary_small_pane_g1_copy1

0xba20,	// (0x0003658e) cursor_text_primary_small_t1_copy1

0xba12,	// (0x00036580) cursor_text_title_t1

0xe17e,	// (0x00038cec) cursor_title_pane_g1

0xdd5a,	// (0x000388c8) cursor_digital_pane_g1

0xaf9f,	// (0x00035b0d) cursor_text_digital_t1

0xafad,	// (0x00035b1b) link_highlight_primary_pane_g1

0xb9bb,	// (0x00036529) link_highlight_primary_pane_t1

0xafad,	// (0x00035b1b) link_highlight_primary_small_pane_g1

0xafb5,	// (0x00035b23) link_highlight_primary_small_pane_t1

0xafc4,	// (0x00035b32) link_highlight_secondary_pane_g1

0xafcc,	// (0x00035b3a) link_highlight_secondary_pane_t1

0xb920,	// (0x0003648e) link_highlight_title_pane_g1

0xb937,	// (0x000364a5) link_highlight_title_pane_t1

0xb920,	// (0x0003648e) link_highlight_digital_pane_g1

0xb928,	// (0x00036496) link_highlight_digital_pane_t1

0xb7fc,	// (0x0003636a) copy_highlight_primary_pane_g1

0xb822,	// (0x00036390) copy_highlight_primary_pane_t1

0xb7fc,	// (0x0003636a) copy_highlight_primary_small_pane_g1

0xb813,	// (0x00036381) copy_highlight_primary_small_pane_t1

0xafdb,	// (0x00035b49) copy_highlight_secondary_pane_g1

0xafe3,	// (0x00035b51) copy_highlight_secondary_pane_t1

0xb7fc,	// (0x0003636a) copy_highlight_title_pane_g1

0xb804,	// (0x00036372) copy_highlight_title_pane_t1

0xb7fc,	// (0x0003636a) copy_highlight_digital_pane_g1

0xc5be,	// (0x0003712c) copy_highlight_digital_pane_t1

0xc512,	// (0x00037080) graphic_text_primary_pane_g1

0xc5a2,	// (0x00037110) graphic_text_primary_pane_t1

0xc5b0,	// (0x0003711e) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003a537) graphic_text_primary_pane_t

0xc57e,	// (0x000370ec) graphic_text_primary_small_pane_g1

0xc586,	// (0x000370f4) graphic_text_primary_small_pane_t1

0xc594,	// (0x00037102) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003a532) graphic_text_primary_small_pane_t

0xc55a,	// (0x000370c8) graphic_text_secondary_pane_g1

0xc562,	// (0x000370d0) graphic_text_secondary_pane_t1

0xc570,	// (0x000370de) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003a52d) graphic_text_secondary_pane_t

0xc536,	// (0x000370a4) graphic_text_title_pane_g1

0xc53e,	// (0x000370ac) graphic_text_title_pane_t1

0xc54c,	// (0x000370ba) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003a528) graphic_text_title_pane_t

0xc512,	// (0x00037080) graphic_text_digital_pane_g1

0xc51a,	// (0x00037088) graphic_text_digital_pane_t1

0xc528,	// (0x00037096) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003a523) graphic_text_digital_pane_t

0x7db1,	// (0x0003291f) navi_icon_pane_srt_ParamLimits

0x7db1,	// (0x0003291f) navi_icon_pane_srt

0x7c1d,	// (0x0003278b) navi_midp_pane_srt

0x7c1d,	// (0x0003278b) navi_navi_pane_srt

0x7db1,	// (0x0003291f) navi_text_pane_srt_ParamLimits

0x7db1,	// (0x0003291f) navi_text_pane_srt

0xbf6c,	// (0x00036ada) navi_navi_icon_text_pane_srt

0xbf74,	// (0x00036ae2) navi_navi_pane_srt_g1_ParamLimits

0xbf74,	// (0x00036ae2) navi_navi_pane_srt_g1

0xbf86,	// (0x00036af4) navi_navi_pane_srt_g2_ParamLimits

0xbf86,	// (0x00036af4) navi_navi_pane_srt_g2

0x0001,

0xf8ea,	// (0x0003a458) navi_navi_pane_srt_g_ParamLimits

0xf8ea,	// (0x0003a458) navi_navi_pane_srt_g

0xbf98,	// (0x00036b06) navi_navi_tabs_pane_srt

0xbf6c,	// (0x00036ada) navi_navi_text_pane_srt

0xbf6c,	// (0x00036ada) navi_navi_volume_pane_srt

0xc503,	// (0x00037071) navi_navi_text_pane_srt_t1

0x9657,	// (0x000341c5) navi_navi_volume_pane_srt_g1

0x965f,	// (0x000341cd) volume_small_pane_srt_ParamLimits

0x965f,	// (0x000341cd) volume_small_pane_srt

0x8b85,	// (0x000336f3) volume_small_pane_srt_g1_ParamLimits

0x8b85,	// (0x000336f3) volume_small_pane_srt_g1

0x8b95,	// (0x00033703) volume_small_pane_srt_g2_ParamLimits

0x8b95,	// (0x00033703) volume_small_pane_srt_g2

0x8ba6,	// (0x00033714) volume_small_pane_srt_g3_ParamLimits

0x8ba6,	// (0x00033714) volume_small_pane_srt_g3

0x8bb7,	// (0x00033725) volume_small_pane_srt_g4_ParamLimits

0x8bb7,	// (0x00033725) volume_small_pane_srt_g4

0x8bc8,	// (0x00033736) volume_small_pane_srt_g5_ParamLimits

0x8bc8,	// (0x00033736) volume_small_pane_srt_g5

0x8bd9,	// (0x00033747) volume_small_pane_srt_g6_ParamLimits

0x8bd9,	// (0x00033747) volume_small_pane_srt_g6

0x8bea,	// (0x00033758) volume_small_pane_srt_g7_ParamLimits

0x8bea,	// (0x00033758) volume_small_pane_srt_g7

0x8bfb,	// (0x00033769) volume_small_pane_srt_g8_ParamLimits

0x8bfb,	// (0x00033769) volume_small_pane_srt_g8

0x8c0c,	// (0x0003377a) volume_small_pane_srt_g9_ParamLimits

0x8c0c,	// (0x0003377a) volume_small_pane_srt_g9

0x8c1d,	// (0x0003378b) volume_small_pane_srt_g10_ParamLimits

0x8c1d,	// (0x0003378b) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0003a2d0) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0003a2d0) volume_small_pane_srt_g

0x80fb,	// (0x00032c69) query_popup_data_pane_cp2

0xc4e9,	// (0x00037057) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc4e9,	// (0x00037057) navi_navi_icon_text_pane_srt_t1

0xba4a,	// (0x000365b8) navi_tabs_2_long_pane_srt

0xba4a,	// (0x000365b8) navi_tabs_2_pane_srt

0xba4a,	// (0x000365b8) navi_tabs_3_long_pane_srt

0xba4a,	// (0x000365b8) navi_tabs_3_pane_srt

0xba4a,	// (0x000365b8) navi_tabs_4_pane_srt

0x9637,	// (0x000341a5) tabs_2_active_pane_srt_ParamLimits

0x9637,	// (0x000341a5) tabs_2_active_pane_srt

0x9647,	// (0x000341b5) tabs_2_passive_pane_srt_ParamLimits

0x9647,	// (0x000341b5) tabs_2_passive_pane_srt

0x8d9a,	// (0x00033908) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8d9a,	// (0x00033908) bg_passive_tab_pane_cp1_srt

0xc4c7,	// (0x00037035) bg_passive_tab_pane_g1_cp1_srt

0xac05,	// (0x00035773) bg_passive_tab_pane_g2_cp1_srt

0xc4d0,	// (0x0003703e) bg_passive_tab_pane_g3_cp1_srt

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp1_srt_ParamLimits

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp1_srt

0xc4d9,	// (0x00037047) tabs_2_active_pane_srt_g1

0xda8a,	// (0x000385f8) tabs_2_active_pane_srt_t1_ParamLimits

0xda8a,	// (0x000385f8) tabs_2_active_pane_srt_t1

0xc4c7,	// (0x00037035) bg_active_tab_pane_g1_cp1_srt

0xac05,	// (0x00035773) bg_active_tab_pane_g2_cp1_srt

0xc4d0,	// (0x0003703e) bg_active_tab_pane_g3_cp1_srt

0x9604,	// (0x00034172) tabs_3_active_pane_srt_ParamLimits

0x9604,	// (0x00034172) tabs_3_active_pane_srt

0x9615,	// (0x00034183) tabs_3_passive_pane_cp_srt_ParamLimits

0x9615,	// (0x00034183) tabs_3_passive_pane_cp_srt

0x9626,	// (0x00034194) tabs_3_passive_pane_srt_ParamLimits

0x9626,	// (0x00034194) tabs_3_passive_pane_srt

0x8d9a,	// (0x00033908) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8d9a,	// (0x00033908) bg_passive_tab_pane_cp2_srt

0xaff2,	// (0x00035b60) bg_passive_tab_pane_g1_cp2_srt

0xac05,	// (0x00035773) bg_passive_tab_pane_g2_cp2_srt

0xaffb,	// (0x00035b69) bg_passive_tab_pane_g3_cp2_srt

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp2_srt_ParamLimits

0x7db1,	// (0x0003291f) bg_active_tab_pane_cp2_srt

0xc4bf,	// (0x0003702d) tabs_3_active_pane_srt_g1

0xd85e,	// (0x000383cc) tabs_3_active_pane_srt_t1_ParamLimits

0xd85e,	// (0x000383cc) tabs_3_active_pane_srt_t1

0xaff2,	// (0x00035b60) bg_active_tab_pane_g1_cp2_srt

0xac05,	// (0x00035773) bg_active_tab_pane_g2_cp2_srt

0xaffb,	// (0x00035b69) bg_active_tab_pane_g3_cp2_srt

0x95bc,	// (0x0003412a) tabs_4_active_pane_srt_ParamLimits

0x95bc,	// (0x0003412a) tabs_4_active_pane_srt

0x95ce,	// (0x0003413c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x95ce,	// (0x0003413c) tabs_4_passive_pane_cp2_srt

0x8d82,	// (0x000338f0) aid_size_cell_toolbar

0xdaaf,	// (0x0003861d) main_idle_act_pane_ParamLimits

0x8eef,	// (0x00033a5d) popup_large_graphic_colour_window_ParamLimits

0x91a3,	// (0x00033d11) popup_toolbar_window_ParamLimits

0x91a3,	// (0x00033d11) popup_toolbar_window

0x9577,	// (0x000340e5) list_single_graphic_2heading_pane_ParamLimits

0x9577,	// (0x000340e5) list_single_graphic_2heading_pane

0x8907,	// (0x00033475) aid_size_cell_apps_grid_lsc_pane

0x8919,	// (0x00033487) aid_size_cell_apps_grid_prt_pane

0x8d9a,	// (0x00033908) bg_wml_button_pane_cp1_ParamLimits

0x8d9a,	// (0x00033908) bg_wml_button_pane_cp1

0xb4bd,	// (0x0003602b) form_midp_field_text_pane_t1_ParamLimits

0xb313,	// (0x00035e81) input_focus_pane_cp050_ParamLimits

0xb4de,	// (0x0003604c) list_midp_form_text_pane_ParamLimits

0xb49a,	// (0x00036008) input_focus_pane_cp051_ParamLimits

0xb4ae,	// (0x0003601c) list_midp_choice_pane_ParamLimits

0xb397,	// (0x00035f05) list_single_2graphic_pane_cp3_ParamLimits

0xb397,	// (0x00035f05) list_single_2graphic_pane_cp3

0xb3aa,	// (0x00035f18) list_single_midp_graphic_pane_ParamLimits

0xb3aa,	// (0x00035f18) list_single_midp_graphic_pane

0x738e,	// (0x00031efc) list_single_graphic_2heading_pane_g1_ParamLimits

0x738e,	// (0x00031efc) list_single_graphic_2heading_pane_g1

0x739a,	// (0x00031f08) list_single_graphic_2heading_pane_g4_ParamLimits

0x739a,	// (0x00031f08) list_single_graphic_2heading_pane_g4

0x6f4a,	// (0x00031ab8) list_single_graphic_2heading_pane_g5_ParamLimits

0x6f4a,	// (0x00031ab8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0003a323) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0003a323) list_single_graphic_2heading_pane_g

0x73a6,	// (0x00031f14) list_single_graphic_2heading_pane_t1_ParamLimits

0x73a6,	// (0x00031f14) list_single_graphic_2heading_pane_t1

0x73ba,	// (0x00031f28) list_single_graphic_2heading_pane_t2_ParamLimits

0x73ba,	// (0x00031f28) list_single_graphic_2heading_pane_t2

0x73d4,	// (0x00031f42) list_single_graphic_2heading_pane_t3_ParamLimits

0x73d4,	// (0x00031f42) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0003a32a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0003a32a) list_single_graphic_2heading_pane_t

0xb1dd,	// (0x00035d4b) bg_popup_sub_pane_cp2

0xb203,	// (0x00035d71) grid_toobar_pane

0x9232,	// (0x00033da0) cell_toolbar_pane_ParamLimits

0x9232,	// (0x00033da0) cell_toolbar_pane

0xb239,	// (0x00035da7) cell_toolbar_pane_g1_ParamLimits

0xb239,	// (0x00035da7) cell_toolbar_pane_g1

0xb24b,	// (0x00035db9) cell_toolbar_pane_g2_ParamLimits

0xb24b,	// (0x00035db9) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0003a338) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0003a338) cell_toolbar_pane_g

0xb26d,	// (0x00035ddb) grid_highlight_pane_cp2_ParamLimits

0xb26d,	// (0x00035ddb) grid_highlight_pane_cp2

0xb287,	// (0x00035df5) toolbar_button_pane

0xb293,	// (0x00035e01) toolbar_button_pane_g1

0xb29b,	// (0x00035e09) toolbar_button_pane_g2

0xb2a3,	// (0x00035e11) toolbar_button_pane_g3

0xb2ab,	// (0x00035e19) toolbar_button_pane_g4

0xb2b3,	// (0x00035e21) toolbar_button_pane_g5

0xb2bb,	// (0x00035e29) toolbar_button_pane_g6

0xb2c3,	// (0x00035e31) toolbar_button_pane_g7

0xb2cb,	// (0x00035e39) toolbar_button_pane_g8

0xb2d3,	// (0x00035e41) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0003a33d) toolbar_button_pane_g

0x9261,	// (0x00033dcf) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9261,	// (0x00033dcf) list_single_2graphic_pane_g1_cp3

0x926d,	// (0x00033ddb) list_single_2graphic_pane_g2_cp3_ParamLimits

0x926d,	// (0x00033ddb) list_single_2graphic_pane_g2_cp3

0xad7c,	// (0x000358ea) list_single_2graphic_pane_g3_cp3

0xb2db,	// (0x00035e49) list_single_2graphic_pane_g4_cp3_ParamLimits

0xb2db,	// (0x00035e49) list_single_2graphic_pane_g4_cp3

0x927c,	// (0x00033dea) list_single_2graphic_pane_t1_cp3_ParamLimits

0x927c,	// (0x00033dea) list_single_2graphic_pane_t1_cp3

0xad70,	// (0x000358de) list_single_midp_graphic_pane_g2_ParamLimits

0xad70,	// (0x000358de) list_single_midp_graphic_pane_g2

0x7361,	// (0x00031ecf) aid_zoom_text_primary

0x8d8a,	// (0x000338f8) aid_zoom_text_secondary

0xdd92,	// (0x00038900) status_small_pane_g7_ParamLimits

0xdd92,	// (0x00038900) status_small_pane_g7

0xddb5,	// (0x00038923) status_small_pane_t1_ParamLimits

0xd7d9,	// (0x00038347) title_pane_g2

0x0003,

0xf54e,	// (0x0003a0bc) title_pane_g

0xd9a1,	// (0x0003850f) aid_size_cell_colour_1_pane_ParamLimits

0xd9a1,	// (0x0003850f) aid_size_cell_colour_1_pane

0xd9b5,	// (0x00038523) aid_size_cell_colour_2_pane_ParamLimits

0xd9b5,	// (0x00038523) aid_size_cell_colour_2_pane

0xd9c9,	// (0x00038537) aid_size_cell_colour_3_pane_ParamLimits

0xd9c9,	// (0x00038537) aid_size_cell_colour_3_pane

0xd9dd,	// (0x0003854b) aid_size_cell_colour_4_pane_ParamLimits

0xd9dd,	// (0x0003854b) aid_size_cell_colour_4_pane

0x87b6,	// (0x00033324) title_pane_stacon_g1_ParamLimits

0x87b6,	// (0x00033324) title_pane_stacon_g1

0xb879,	// (0x000363e7) popup_note_wait_window_g3_ParamLimits

0xb879,	// (0x000363e7) popup_note_wait_window_g3

0xb8ef,	// (0x0003645d) popup_note_wait_window_t5_ParamLimits

0xb8ef,	// (0x0003645d) popup_note_wait_window_t5

0x7c1d,	// (0x0003278b) main_feb_china_hwr_fs_writing_pane

0x8e04,	// (0x00033972) popup_feb_china_hwr_fs_window_ParamLimits

0x8e04,	// (0x00033972) popup_feb_china_hwr_fs_window

0x92c4,	// (0x00033e32) aid_size_cell_hwr_fs_ParamLimits

0x92c4,	// (0x00033e32) aid_size_cell_hwr_fs

0xb313,	// (0x00035e81) bg_popup_sub_pane_cp3_ParamLimits

0xb313,	// (0x00035e81) bg_popup_sub_pane_cp3

0x92d9,	// (0x00033e47) grid_hwr_fs_pane_ParamLimits

0x92d9,	// (0x00033e47) grid_hwr_fs_pane

0x92ed,	// (0x00033e5b) linegrid_hwr_fs_pane_ParamLimits

0x92ed,	// (0x00033e5b) linegrid_hwr_fs_pane

0x92fd,	// (0x00033e6b) cell_hwr_fs_pane_ParamLimits

0x92fd,	// (0x00033e6b) cell_hwr_fs_pane

0xb31f,	// (0x00035e8d) linegrid_hwr_fs_pane_g1_ParamLimits

0xb31f,	// (0x00035e8d) linegrid_hwr_fs_pane_g1

0xe102,	// (0x00038c70) linegrid_hwr_fs_pane_g2_ParamLimits

0xe102,	// (0x00038c70) linegrid_hwr_fs_pane_g2

0xb32b,	// (0x00035e99) linegrid_hwr_fs_pane_g3_ParamLimits

0xb32b,	// (0x00035e99) linegrid_hwr_fs_pane_g3

0x931b,	// (0x00033e89) linegrid_hwr_fs_pane_g4_ParamLimits

0x931b,	// (0x00033e89) linegrid_hwr_fs_pane_g4

0x9335,	// (0x00033ea3) linegrid_hwr_fs_pane_g5_ParamLimits

0x9335,	// (0x00033ea3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0003a363) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0003a363) linegrid_hwr_fs_pane_g

0xb337,	// (0x00035ea5) cell_hwr_fs_pane_g1_ParamLimits

0xb337,	// (0x00035ea5) cell_hwr_fs_pane_g1

0xb1ab,	// (0x00035d19) cell_hwr_fs_pane_g2_ParamLimits

0xb1ab,	// (0x00035d19) cell_hwr_fs_pane_g2

0xe114,	// (0x00038c82) cell_hwr_fs_pane_g3_ParamLimits

0xe114,	// (0x00038c82) cell_hwr_fs_pane_g3

0xe121,	// (0x00038c8f) cell_hwr_fs_pane_g4_ParamLimits

0xe121,	// (0x00038c8f) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0003a36e) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0003a36e) cell_hwr_fs_pane_g

0x934b,	// (0x00033eb9) cell_hwr_fs_pane_t1

0x7c1d,	// (0x0003278b) grid_highlight_pane_cp6

0x7c1d,	// (0x0003278b) main_idle_act2_pane

0x85d4,	// (0x00033142) aid_inside_area_popup_secondary

0xe1ac,	// (0x00038d1a) aid_inside_area_window_primary_ParamLimits

0xe1ac,	// (0x00038d1a) aid_inside_area_window_primary

0xc5cd,	// (0x0003713b) ai2_news_ticker_pane

0xc5d5,	// (0x00037143) aid_size_cell_ai1_link_ParamLimits

0xc5d5,	// (0x00037143) aid_size_cell_ai1_link

0xee04,	// (0x00039972) popup_ai2_data_window_ParamLimits

0xee04,	// (0x00039972) popup_ai2_data_window

0xc5ef,	// (0x0003715d) popup_ai2_link_window_ParamLimits

0xc5ef,	// (0x0003715d) popup_ai2_link_window

0xb313,	// (0x00035e81) bg_popup_sub_pane_cp4_ParamLimits

0xb313,	// (0x00035e81) bg_popup_sub_pane_cp4

0xc603,	// (0x00037171) grid_ai2_link_pane_ParamLimits

0xc603,	// (0x00037171) grid_ai2_link_pane

0xc61a,	// (0x00037188) popup_ai2_link_window_g1_ParamLimits

0xc61a,	// (0x00037188) popup_ai2_link_window_g1

0xc626,	// (0x00037194) popup_ai2_link_window_g2_ParamLimits

0xc626,	// (0x00037194) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003a53c) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003a53c) popup_ai2_link_window_g

0xc635,	// (0x000371a3) ai2_mp_button_pane

0xc63d,	// (0x000371ab) ai2_mp_volume_pane

0xb49a,	// (0x00036008) bg_popup_sub_pane_cp5_ParamLimits

0xb49a,	// (0x00036008) bg_popup_sub_pane_cp5

0xc645,	// (0x000371b3) heading_ai2_gene_pane_ParamLimits

0xc645,	// (0x000371b3) heading_ai2_gene_pane

0xc651,	// (0x000371bf) list_ai2_gene_pane_ParamLimits

0xc651,	// (0x000371bf) list_ai2_gene_pane

0xc699,	// (0x00037207) cell_ai2_link_pane_ParamLimits

0xc699,	// (0x00037207) cell_ai2_link_pane

0xc6af,	// (0x0003721d) cell_ai2_link_pane_g1

0x7c1d,	// (0x0003278b) grid_highlight_pane_cp7

0x9674,	// (0x000341e2) ai2_mp_volume_pane_g1

0xc744,	// (0x000372b2) ai2_mp_volume_pane_g2

0xee2f,	// (0x0003999d) list_ai2_gene_pane_t1

0xc74c,	// (0x000372ba) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003a555) ai2_mp_volume_pane_g

0x967c,	// (0x000341ea) volume_small_pane_cp3

0xc754,	// (0x000372c2) aid_size_cell_ai2_button

0xc75c,	// (0x000372ca) grid_ai2_button_pane

0xc765,	// (0x000372d3) cell_ai2_button_pane_ParamLimits

0xc765,	// (0x000372d3) cell_ai2_button_pane

0x7a5e,	// (0x000325cc) cell_ai2_button_pane_g1

0x7c1d,	// (0x0003278b) grid_highlight_pane_cp8

0xc704,	// (0x00037272) ai2_gene_pane_t1_ParamLimits

0xc704,	// (0x00037272) ai2_gene_pane_t1

0x8d78,	// (0x000338e6) aid_height_parent_landscape

0xebe6,	// (0x00039754) aid_height_set_list

0xc3c1,	// (0x00036f2f) aid_size_parent

0xc49d,	// (0x0003700b) aid_size_cell_graphic_pane_ParamLimits

0xc661,	// (0x000371cf) popup_ai2_data_window_g1_ParamLimits

0xc661,	// (0x000371cf) popup_ai2_data_window_g1

0xc66d,	// (0x000371db) ai2_news_ticker_pane_g1

0xc675,	// (0x000371e3) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003a541) ai2_news_ticker_pane_g

0xc67d,	// (0x000371eb) ai2_news_ticker_pane_t1

0xc68b,	// (0x000371f9) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003a546) ai2_news_ticker_pane_t

0xc47e,	// (0x00036fec) heading_ai2_gene_pane_g1

0xc6b8,	// (0x00037226) heading_ai2_gene_pane_t1_ParamLimits

0xc6b8,	// (0x00037226) heading_ai2_gene_pane_t1

0xc6cd,	// (0x0003723b) list_highlight_pane_cp6

0xee18,	// (0x00039986) ai2_gene_pane_ParamLimits

0xee18,	// (0x00039986) ai2_gene_pane

0xee3d,	// (0x000399ab) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003a54b) list_ai2_gene_pane_t

0xc6d5,	// (0x00037243) list_highlight_pane_cp8_ParamLimits

0xc6d5,	// (0x00037243) list_highlight_pane_cp8

0xc6e6,	// (0x00037254) ai2_gene_pane_g1_ParamLimits

0xc6e6,	// (0x00037254) ai2_gene_pane_g1

0xc6f8,	// (0x00037266) ai2_gene_pane_g2_ParamLimits

0xc6f8,	// (0x00037266) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003a550) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003a550) ai2_gene_pane_g

0x8392,	// (0x00032f00) scroll_pane_cp12

0x8d2f,	// (0x0003389d) control_pane_t3_ParamLimits

0x8d2f,	// (0x0003389d) control_pane_t3

0xdda6,	// (0x00038914) status_small_pane_g8_ParamLimits

0xdda6,	// (0x00038914) status_small_pane_g8

0x8ec4,	// (0x00033a32) popup_find_window_ParamLimits

0x9046,	// (0x00033bb4) popup_note_image_window_ParamLimits

0x6dd0,	// (0x0003193e) list_double2_graphic_pane_vc_g1_ParamLimits

0x6dd0,	// (0x0003193e) list_double2_graphic_pane_vc_g1

0x83f6,	// (0x00032f64) list_double2_graphic_pane_vc_g2_ParamLimits

0x83f6,	// (0x00032f64) list_double2_graphic_pane_vc_g2

0x8402,	// (0x00032f70) list_double2_graphic_pane_vc_g3_ParamLimits

0x8402,	// (0x00032f70) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0003a331) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0003a331) list_double2_graphic_pane_vc_g

0x6da8,	// (0x00031916) list_double2_graphic_pane_vc_t1_ParamLimits

0x6da8,	// (0x00031916) list_double2_graphic_pane_vc_t1

0x83f6,	// (0x00032f64) list_single_heading_pane_vc_g1_ParamLimits

0x83f6,	// (0x00032f64) list_single_heading_pane_vc_g1

0x8402,	// (0x00032f70) list_single_heading_pane_vc_g2_ParamLimits

0x8402,	// (0x00032f70) list_single_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003a15f) list_single_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003a15f) list_single_heading_pane_vc_g

0x73ec,	// (0x00031f5a) list_single_heading_pane_vc_t1_ParamLimits

0x73ec,	// (0x00031f5a) list_single_heading_pane_vc_t1

0x7402,	// (0x00031f70) list_single_heading_pane_vc_t2_ParamLimits

0x7402,	// (0x00031f70) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0003a352) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003a352) list_single_heading_pane_vc_t

0x92ac,	// (0x00033e1a) list_setting_number_pane_vc_g1_ParamLimits

0x92ac,	// (0x00033e1a) list_setting_number_pane_vc_g1

0x92b8,	// (0x00033e26) list_setting_number_pane_vc_g2_ParamLimits

0x92b8,	// (0x00033e26) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a357) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a357) list_setting_number_pane_vc_g

0x7414,	// (0x00031f82) list_setting_number_pane_vc_t1_ParamLimits

0x7414,	// (0x00031f82) list_setting_number_pane_vc_t1

0x7428,	// (0x00031f96) list_setting_number_pane_vc_t2_ParamLimits

0x7428,	// (0x00031f96) list_setting_number_pane_vc_t2

0x7444,	// (0x00031fb2) list_setting_number_pane_vc_t3_ParamLimits

0x7444,	// (0x00031fb2) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0003a35c) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0003a35c) list_setting_number_pane_vc_t

0x746a,	// (0x00031fd8) set_value_pane_vc_ParamLimits

0x746a,	// (0x00031fd8) set_value_pane_vc

0x9577,	// (0x000340e5) list_double2_graphic_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_double2_graphic_pane_vc

0xc41c,	// (0x00036f8a) list_double2_large_graphic_pane_vc_ParamLimits

0xc41c,	// (0x00036f8a) list_double2_large_graphic_pane_vc

0x9577,	// (0x000340e5) list_double2_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_double2_pane_vc

0x9577,	// (0x000340e5) list_double_graphic_heading_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_double_graphic_heading_pane_vc

0x9577,	// (0x000340e5) list_double_graphic_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_double_graphic_pane_vc

0x9577,	// (0x000340e5) list_double_heading_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_double_heading_pane_vc

0x958a,	// (0x000340f8) list_double_large_graphic_pane_vc_ParamLimits

0x958a,	// (0x000340f8) list_double_large_graphic_pane_vc

0x9577,	// (0x000340e5) list_double_number_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_double_number_pane_vc

0x9577,	// (0x000340e5) list_double_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_double_pane_vc

0x9577,	// (0x000340e5) list_double_time_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_double_time_pane_vc

0x9577,	// (0x000340e5) list_setting_number_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_setting_number_pane_vc

0x9577,	// (0x000340e5) list_setting_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_setting_pane_vc

0x9577,	// (0x000340e5) list_single_graphic_heading_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_single_graphic_heading_pane_vc

0x9577,	// (0x000340e5) list_single_heading_pane_vc_ParamLimits

0x9577,	// (0x000340e5) list_single_heading_pane_vc

0x74f1,	// (0x0003205f) list_single_number_heading_pane_vc_ParamLimits

0x74f1,	// (0x0003205f) list_single_number_heading_pane_vc

0x6dd0,	// (0x0003193e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6dd0,	// (0x0003193e) list_double_graphic_heading_pane_vc_g1

0x83f6,	// (0x00032f64) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x83f6,	// (0x00032f64) list_double_graphic_heading_pane_vc_g2

0x8402,	// (0x00032f70) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x8402,	// (0x00032f70) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0003a331) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0003a331) list_double_graphic_heading_pane_vc_g

0x7544,	// (0x000320b2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7544,	// (0x000320b2) list_double_graphic_heading_pane_vc_t1

0x755a,	// (0x000320c8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x755a,	// (0x000320c8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0003a55c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0003a55c) list_double_graphic_heading_pane_vc_t

0x92ac,	// (0x00033e1a) list_setting_pane_vc_g1_ParamLimits

0x92ac,	// (0x00033e1a) list_setting_pane_vc_g1

0x92b8,	// (0x00033e26) list_setting_pane_vc_g2_ParamLimits

0x92b8,	// (0x00033e26) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a357) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a357) list_setting_pane_vc_g

0x7572,	// (0x000320e0) list_setting_pane_vc_t1_ParamLimits

0x7572,	// (0x000320e0) list_setting_pane_vc_t1

0x7586,	// (0x000320f4) list_setting_pane_vc_t2_ParamLimits

0x7586,	// (0x000320f4) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x0003a59f) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x0003a59f) list_setting_pane_vc_t

0x746a,	// (0x00031fd8) set_value_pane_cp_vc_ParamLimits

0x746a,	// (0x00031fd8) set_value_pane_cp_vc

0x83f6,	// (0x00032f64) list_single_number_heading_pane_vc_g1_ParamLimits

0x83f6,	// (0x00032f64) list_single_number_heading_pane_vc_g1

0x8402,	// (0x00032f70) list_single_number_heading_pane_vc_g2_ParamLimits

0x8402,	// (0x00032f70) list_single_number_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003a15f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003a15f) list_single_number_heading_pane_vc_g

0x73ec,	// (0x00031f5a) list_single_number_heading_pane_vc_t1_ParamLimits

0x73ec,	// (0x00031f5a) list_single_number_heading_pane_vc_t1

0x759a,	// (0x00032108) list_single_number_heading_pane_vc_t2_ParamLimits

0x759a,	// (0x00032108) list_single_number_heading_pane_vc_t2

0x75ac,	// (0x0003211a) list_single_number_heading_pane_vc_t3_ParamLimits

0x75ac,	// (0x0003211a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0003a5a4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0003a5a4) list_single_number_heading_pane_vc_t

0x6dd0,	// (0x0003193e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6dd0,	// (0x0003193e) list_single_graphic_heading_pane_vc_g1

0x83f6,	// (0x00032f64) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x83f6,	// (0x00032f64) list_single_graphic_heading_pane_vc_g4

0x8402,	// (0x00032f70) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8402,	// (0x00032f70) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0003a331) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0003a331) list_single_graphic_heading_pane_vc_g

0x73ec,	// (0x00031f5a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x73ec,	// (0x00031f5a) list_single_graphic_heading_pane_vc_t1

0x75be,	// (0x0003212c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x75be,	// (0x0003212c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x0003a5ab) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0003a5ab) list_single_graphic_heading_pane_vc_t

0x83f6,	// (0x00032f64) list_double2_pane_vc_g1_ParamLimits

0x83f6,	// (0x00032f64) list_double2_pane_vc_g1

0x8402,	// (0x00032f70) list_double2_pane_vc_g2_ParamLimits

0x8402,	// (0x00032f70) list_double2_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003a15f) list_double2_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003a15f) list_double2_pane_vc_g

0x6d2b,	// (0x00031899) list_double2_pane_vc_t1_ParamLimits

0x6d2b,	// (0x00031899) list_double2_pane_vc_t1

0x83ca,	// (0x00032f38) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x83ca,	// (0x00032f38) list_double2_large_graphic_pane_vc_g1

0x83d6,	// (0x00032f44) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x83d6,	// (0x00032f44) list_double2_large_graphic_pane_vc_g2

0x83e2,	// (0x00032f50) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x83e2,	// (0x00032f50) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0003a158) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0003a158) list_double2_large_graphic_pane_vc_g

0x6d15,	// (0x00031883) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6d15,	// (0x00031883) list_double2_large_graphic_pane_vc_t1

0x96d6,	// (0x00034244) list_double_time_pane_vc_g1_ParamLimits

0x96d6,	// (0x00034244) list_double_time_pane_vc_g1

0x96e2,	// (0x00034250) list_double_time_pane_vc_g2_ParamLimits

0x96e2,	// (0x00034250) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x0003a5b0) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x0003a5b0) list_double_time_pane_vc_g

0x75d0,	// (0x0003213e) list_double_time_pane_vc_t1_ParamLimits

0x75d0,	// (0x0003213e) list_double_time_pane_vc_t1

0x75ee,	// (0x0003215c) list_double_time_pane_vc_t2_ParamLimits

0x75ee,	// (0x0003215c) list_double_time_pane_vc_t2

0x7632,	// (0x000321a0) list_double_time_pane_vc_t3_ParamLimits

0x7632,	// (0x000321a0) list_double_time_pane_vc_t3

0x7644,	// (0x000321b2) list_double_time_pane_vc_t4_ParamLimits

0x7644,	// (0x000321b2) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x0003a5b5) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x0003a5b5) list_double_time_pane_vc_t

0x83f6,	// (0x00032f64) list_double_pane_vc_g1_ParamLimits

0x83f6,	// (0x00032f64) list_double_pane_vc_g1

0x8402,	// (0x00032f70) list_double_pane_vc_g2_ParamLimits

0x8402,	// (0x00032f70) list_double_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003a15f) list_double_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003a15f) list_double_pane_vc_g

0x7656,	// (0x000321c4) list_double_pane_vc_t1_ParamLimits

0x7656,	// (0x000321c4) list_double_pane_vc_t1

0x7668,	// (0x000321d6) list_double_pane_vc_t2_ParamLimits

0x7668,	// (0x000321d6) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x0003a5be) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x0003a5be) list_double_pane_vc_t

0x83f6,	// (0x00032f64) list_double_number_pane_vc_g1_ParamLimits

0x83f6,	// (0x00032f64) list_double_number_pane_vc_g1

0x8402,	// (0x00032f70) list_double_number_pane_vc_g2_ParamLimits

0x8402,	// (0x00032f70) list_double_number_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003a15f) list_double_number_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003a15f) list_double_number_pane_vc_g

0x767e,	// (0x000321ec) list_double_number_pane_vc_t1_ParamLimits

0x767e,	// (0x000321ec) list_double_number_pane_vc_t1

0x7692,	// (0x00032200) list_double_number_pane_vc_t2_ParamLimits

0x7692,	// (0x00032200) list_double_number_pane_vc_t2

0x76a4,	// (0x00032212) list_double_number_pane_vc_t3_ParamLimits

0x76a4,	// (0x00032212) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x0003a5c3) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x0003a5c3) list_double_number_pane_vc_t

0x96ee,	// (0x0003425c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x96ee,	// (0x0003425c) list_double_large_graphic_pane_vc_g1

0x9716,	// (0x00034284) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9716,	// (0x00034284) list_double_large_graphic_pane_vc_g2

0x972a,	// (0x00034298) list_double_large_graphic_pane_vc_g3_ParamLimits

0x972a,	// (0x00034298) list_double_large_graphic_pane_vc_g3

0x76ba,	// (0x00032228) list_double_large_graphic_pane_vc_g4_ParamLimits

0x76ba,	// (0x00032228) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x0003a5ca) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x0003a5ca) list_double_large_graphic_pane_vc_g

0x76ca,	// (0x00032238) list_double_large_graphic_pane_vc_t1_ParamLimits

0x76ca,	// (0x00032238) list_double_large_graphic_pane_vc_t1

0x76e4,	// (0x00032252) list_double_large_graphic_pane_vc_t2_ParamLimits

0x76e4,	// (0x00032252) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x0003a5d3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x0003a5d3) list_double_large_graphic_pane_vc_t

0x83f6,	// (0x00032f64) list_double_heading_pane_vc_g1_ParamLimits

0x83f6,	// (0x00032f64) list_double_heading_pane_vc_g1

0x8402,	// (0x00032f70) list_double_heading_pane_vc_g2_ParamLimits

0x8402,	// (0x00032f70) list_double_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003a15f) list_double_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003a15f) list_double_heading_pane_vc_g

0x7704,	// (0x00032272) list_double_heading_pane_vc_t1_ParamLimits

0x7704,	// (0x00032272) list_double_heading_pane_vc_t1

0x73ec,	// (0x00031f5a) list_double_heading_pane_vc_t2_ParamLimits

0x73ec,	// (0x00031f5a) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0003a5d8) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0003a5d8) list_double_heading_pane_vc_t

0x7716,	// (0x00032284) list_double_graphic_pane_vc_g1_ParamLimits

0x7716,	// (0x00032284) list_double_graphic_pane_vc_g1

0x9739,	// (0x000342a7) list_double_graphic_pane_vc_g2_ParamLimits

0x9739,	// (0x000342a7) list_double_graphic_pane_vc_g2

0x83f6,	// (0x00032f64) list_double_graphic_pane_vc_g3_ParamLimits

0x83f6,	// (0x00032f64) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x0003a5dd) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0003a5dd) list_double_graphic_pane_vc_g

0x7722,	// (0x00032290) list_double_graphic_pane_vc_t1_ParamLimits

0x7722,	// (0x00032290) list_double_graphic_pane_vc_t1

0x7740,	// (0x000322ae) list_double_graphic_pane_vc_t2_ParamLimits

0x7740,	// (0x000322ae) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0003a5e6) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0003a5e6) list_double_graphic_pane_vc_t

0x7a78,	// (0x000325e6) aid_size_cell_fastswap

0x7a80,	// (0x000325ee) aid_size_cell_touch_ParamLimits

0x7a80,	// (0x000325ee) aid_size_cell_touch

0x7c47,	// (0x000327b5) popup_fast_swap_wide_window_ParamLimits

0x7c47,	// (0x000327b5) popup_fast_swap_wide_window

0x7d0d,	// (0x0003287b) touch_pane_ParamLimits

0x7d0d,	// (0x0003287b) touch_pane

0x70a9,	// (0x00031c17) button_value_adjust_pane_cp2

0x70b1,	// (0x00031c1f) button_value_adjust_pane_cp4

0x70d1,	// (0x00031c3f) form_field_data_pane_cp2

0x70f0,	// (0x00031c5e) form_field_data_wide_pane_cp2

0xa8d9,	// (0x00035447) bg_scroll_pane_ParamLimits

0x8951,	// (0x000334bf) scroll_handle_pane_ParamLimits

0x8965,	// (0x000334d3) scroll_sc2_down_pane_ParamLimits

0x8965,	// (0x000334d3) scroll_sc2_down_pane

0xa90a,	// (0x00035478) scroll_sc2_up_pane_ParamLimits

0xa90a,	// (0x00035478) scroll_sc2_up_pane

0xef5f,	// (0x00039acd) grid_wheel_folder_pane_g1_ParamLimits

0xef5f,	// (0x00039acd) grid_wheel_folder_pane_g1

0x8b29,	// (0x00033697) clock_nsta_pane_cp2_ParamLimits

0x8b29,	// (0x00033697) clock_nsta_pane_cp2

0xdcb3,	// (0x00038821) listscroll_midp_pane_ParamLimits

0xdcbf,	// (0x0003882d) midp_canvas_pane

0x8d70,	// (0x000338de) nsta_clock_indic_pane

0xb0b0,	// (0x00035c1e) listscroll_form_pane_vc

0xb0b8,	// (0x00035c26) listscroll_set_pane_vc_ParamLimits

0xb0b8,	// (0x00035c26) listscroll_set_pane_vc

0xdec2,	// (0x00038a30) clock_nsta_pane

0xdecf,	// (0x00038a3d) indicator_nsta_pane

0xb1dd,	// (0x00035d4b) bg_popup_sub_pane_cp2_ParamLimits

0xb1f1,	// (0x00035d5f) find_pane_cp2_ParamLimits

0xb1f1,	// (0x00035d5f) find_pane_cp2

0xb203,	// (0x00035d71) grid_toobar_pane_ParamLimits

0xb2e7,	// (0x00035e55) list_form_gen_pane_vc_ParamLimits

0xb2e7,	// (0x00035e55) list_form_gen_pane_vc

0xb2fd,	// (0x00035e6b) scroll_pane_cp8_vc_ParamLimits

0xb2fd,	// (0x00035e6b) scroll_pane_cp8_vc

0xb34d,	// (0x00035ebb) data_form_wide_pane_vc_ParamLimits

0xb34d,	// (0x00035ebb) data_form_wide_pane_vc

0xb359,	// (0x00035ec7) form_field_data_wide_pane_vc_g1

0xb361,	// (0x00035ecf) form_field_data_wide_pane_vc_t1_ParamLimits

0xb361,	// (0x00035ecf) form_field_data_wide_pane_vc_t1

0x84aa,	// (0x00033018) input_focus_pane_cp6_vc_ParamLimits

0x84aa,	// (0x00033018) input_focus_pane_cp6_vc

0xe14a,	// (0x00038cb8) list_midp_pane_ParamLimits

0xe156,	// (0x00038cc4) scroll_pane_cp16_ParamLimits

0xe156,	// (0x00038cc4) scroll_pane_cp16

0xb65f,	// (0x000361cd) button_value_adjust_pane_ParamLimits

0xb65f,	// (0x000361cd) button_value_adjust_pane

0xebf2,	// (0x00039760) button_value_adjust_pane_cp6_ParamLimits

0xebf2,	// (0x00039760) button_value_adjust_pane_cp6

0xecfa,	// (0x00039868) settings_code_pane_cp_ParamLimits

0xecfa,	// (0x00039868) settings_code_pane_cp

0x7a5e,	// (0x000325cc) cell_touch_pane_g1

0x7a5e,	// (0x000325cc) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0003a276) cell_touch_pane_g

0xee4b,	// (0x000399b9) cell_touch_pane_cp_ParamLimits

0xee4b,	// (0x000399b9) cell_touch_pane_cp

0xee5b,	// (0x000399c9) cell_touch_pane_ParamLimits

0xee5b,	// (0x000399c9) cell_touch_pane

0x7a5e,	// (0x000325cc) scroll_sc2_down_pane_g1

0x7a5e,	// (0x000325cc) scroll_sc2_up_pane_g1

0x7c1d,	// (0x0003278b) bg_set_opt_pane_cp4_vc

0xc777,	// (0x000372e5) list_set_graphic_pane_vc_g1_ParamLimits

0xc777,	// (0x000372e5) list_set_graphic_pane_vc_g1

0xc783,	// (0x000372f1) list_set_graphic_pane_vc_g2_ParamLimits

0xc783,	// (0x000372f1) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0003a561) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003a561) list_set_graphic_pane_vc_g

0xc78f,	// (0x000372fd) text_primary_small_cp13_vc_ParamLimits

0xc78f,	// (0x000372fd) text_primary_small_cp13_vc

0xc7a7,	// (0x00037315) list_set_graphic_pane_vc_ParamLimits

0xc7a7,	// (0x00037315) list_set_graphic_pane_vc

0x7c1d,	// (0x0003278b) input_focus_pane_cp2_vc

0x7a5e,	// (0x000325cc) setting_code_pane_vc_g1

0xc7ba,	// (0x00037328) setting_code_pane_vc_t1

0xc7c8,	// (0x00037336) set_text_pane_vc_t1_ParamLimits

0xc7c8,	// (0x00037336) set_text_pane_vc_t1

0x7c1d,	// (0x0003278b) input_focus_pane_cp1_vc

0xc7e3,	// (0x00037351) list_set_text_pane_vc

0x7a5e,	// (0x000325cc) setting_text_pane_vc_g1

0x7c1d,	// (0x0003278b) bg_set_opt_pane_cp2_vc

0xc7ed,	// (0x0003735b) setting_slider_graphic_pane_vc_g1

0xc7f5,	// (0x00037363) setting_slider_graphic_pane_vc_t1

0xc803,	// (0x00037371) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0003a566) setting_slider_graphic_pane_vc_t

0xc811,	// (0x0003737f) slider_set_pane_cp_vc

0xc819,	// (0x00037387) slider_set_pane_vc_g1

0xc822,	// (0x00037390) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0003a56b) slider_set_pane_vc_g

0x84f9,	// (0x00033067) set_opt_bg_pane_g1_copy1

0x8501,	// (0x0003306f) set_opt_bg_pane_g2_copy1

0xc84e,	// (0x000373bc) set_opt_bg_pane_g3_copy1

0x8511,	// (0x0003307f) set_opt_bg_pane_g4_copy1

0x8519,	// (0x00033087) set_opt_bg_pane_g5_copy1

0x8521,	// (0x0003308f) set_opt_bg_pane_g6_copy1

0xc856,	// (0x000373c4) set_opt_bg_pane_g7_copy1

0xc85e,	// (0x000373cc) set_opt_bg_pane_g8_copy1

0xc866,	// (0x000373d4) set_opt_bg_pane_g9_copy1

0x7c1d,	// (0x0003278b) bg_set_opt_pane_cp_vc

0xc86e,	// (0x000373dc) setting_slider_pane_vc_t1

0xc7f5,	// (0x00037363) setting_slider_pane_vc_t2

0xc803,	// (0x00037371) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0003a57a) setting_slider_pane_vc_t

0xc811,	// (0x0003737f) slider_set_pane_vc

0x9359,	// (0x00033ec7) volume_set_pane_vc_g1

0x9685,	// (0x000341f3) volume_set_pane_vc_g2

0x968e,	// (0x000341fc) volume_set_pane_vc_g3

0x9697,	// (0x00034205) volume_set_pane_vc_g4

0x96a0,	// (0x0003420e) volume_set_pane_vc_g5

0x96a9,	// (0x00034217) volume_set_pane_vc_g6

0x96b2,	// (0x00034220) volume_set_pane_vc_g7

0x96bb,	// (0x00034229) volume_set_pane_vc_g8

0x96c4,	// (0x00034232) volume_set_pane_vc_g9

0x96cd,	// (0x0003423b) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0003a581) volume_set_pane_vc_g

0xc87d,	// (0x000373eb) volume_set_pane_vc

0xc885,	// (0x000373f3) button_value_adjust_pane_cp1_vc

0xc88f,	// (0x000373fd) list_highlight_pane_cp2_vc

0xc898,	// (0x00037406) list_set_pane_vc_ParamLimits

0xc898,	// (0x00037406) list_set_pane_vc

0xc8ea,	// (0x00037458) main_pane_set_vc_t1_ParamLimits

0xc8ea,	// (0x00037458) main_pane_set_vc_t1

0xc8ff,	// (0x0003746d) main_pane_set_vc_t2_ParamLimits

0xc8ff,	// (0x0003746d) main_pane_set_vc_t2

0xc911,	// (0x0003747f) main_pane_set_vc_t3_ParamLimits

0xc911,	// (0x0003747f) main_pane_set_vc_t3

0xc923,	// (0x00037491) main_pane_set_vc_t4_ParamLimits

0xc923,	// (0x00037491) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0003a596) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0003a596) main_pane_set_vc_t

0xc935,	// (0x000374a3) setting_code_pane_vc_ParamLimits

0xc935,	// (0x000374a3) setting_code_pane_vc

0xc944,	// (0x000374b2) setting_slider_graphic_pane_vc

0xc944,	// (0x000374b2) setting_slider_pane_vc

0xc944,	// (0x000374b2) setting_text_pane_vc

0xc944,	// (0x000374b2) setting_volume_pane_vc

0xc94c,	// (0x000374ba) scroll_pane_cp121_vc

0x8495,	// (0x00033003) set_content_pane_vc

0xc954,	// (0x000374c2) button_value_adjust_pane_g1

0xc95d,	// (0x000374cb) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0003a5eb) button_value_adjust_pane_g

0xc966,	// (0x000374d4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xc966,	// (0x000374d4) form_field_slider_wide_pane_vc_t1

0xc97c,	// (0x000374ea) form_field_slider_wide_pane_vc_t2_ParamLimits

0xc97c,	// (0x000374ea) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0003a5f0) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0003a5f0) form_field_slider_wide_pane_vc_t

0x7f76,	// (0x00032ae4) input_focus_pane_cp10_vc_ParamLimits

0x7f76,	// (0x00032ae4) input_focus_pane_cp10_vc

0xc9a7,	// (0x00037515) slider_cont_pane_cp1_vc_ParamLimits

0xc9a7,	// (0x00037515) slider_cont_pane_cp1_vc

0xc819,	// (0x00037387) slider_form_pane_g1_cp2

0xc822,	// (0x00037390) slider_form_pane_g2_cp2

0xc9c2,	// (0x00037530) form_field_slider_pane_vc_t3

0xc9d0,	// (0x0003753e) form_field_slider_pane_vc_t4

0xc9de,	// (0x0003754c) slider_form_pane_vc_ParamLimits

0xc9de,	// (0x0003754c) slider_form_pane_vc

0xc9eb,	// (0x00037559) form_field_slider_pane_vc_t1_ParamLimits

0xc9eb,	// (0x00037559) form_field_slider_pane_vc_t1

0xca01,	// (0x0003756f) form_field_slider_pane_vc_t2_ParamLimits

0xca01,	// (0x0003756f) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0003a602) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0003a602) form_field_slider_pane_vc_t

0x7f76,	// (0x00032ae4) input_focus_pane_cp9_vc_ParamLimits

0x7f76,	// (0x00032ae4) input_focus_pane_cp9_vc

0xca13,	// (0x00037581) slider_cont_pane_vc_ParamLimits

0xca13,	// (0x00037581) slider_cont_pane_vc

0xca25,	// (0x00037593) list_form_graphic_pane_cp_vc_ParamLimits

0xca25,	// (0x00037593) list_form_graphic_pane_cp_vc

0xb359,	// (0x00035ec7) form_field_popup_wide_pane_vc_g1

0xca3a,	// (0x000375a8) form_field_popup_wide_pane_vc_t1_ParamLimits

0xca3a,	// (0x000375a8) form_field_popup_wide_pane_vc_t1

0x84aa,	// (0x00033018) input_focus_pane_cp8_vc_ParamLimits

0x84aa,	// (0x00033018) input_focus_pane_cp8_vc

0xca79,	// (0x000375e7) list_form_wide_pane_vc_ParamLimits

0xca79,	// (0x000375e7) list_form_wide_pane_vc

0xca85,	// (0x000375f3) list_form_graphic_pane_vc_g1

0xca8d,	// (0x000375fb) list_form_graphic_pane_vc_t1_ParamLimits

0xca8d,	// (0x000375fb) list_form_graphic_pane_vc_t1

0x7db1,	// (0x0003291f) list_highlight_pane_cp5_vc_ParamLimits

0x7db1,	// (0x0003291f) list_highlight_pane_cp5_vc

0xcaa9,	// (0x00037617) list_form_graphic_pane_vc_ParamLimits

0xcaa9,	// (0x00037617) list_form_graphic_pane_vc

0xb359,	// (0x00035ec7) form_field_popup_pane_vc_g1

0xcabf,	// (0x0003762d) form_field_popup_pane_vc_t1_ParamLimits

0xcabf,	// (0x0003762d) form_field_popup_pane_vc_t1

0x84aa,	// (0x00033018) input_focus_pane_cp7_vc_ParamLimits

0x84aa,	// (0x00033018) input_focus_pane_cp7_vc

0xcad4,	// (0x00037642) list_form_pane_vc_ParamLimits

0xcad4,	// (0x00037642) list_form_pane_vc

0xcae0,	// (0x0003764e) data_form_pane_vc_t1_ParamLimits

0xcae0,	// (0x0003764e) data_form_pane_vc_t1

0x84f9,	// (0x00033067) input_focus_pane_vc_g1

0x8501,	// (0x0003306f) input_focus_pane_vc_g2

0x8509,	// (0x00033077) input_focus_pane_vc_g3

0x8511,	// (0x0003307f) input_focus_pane_vc_g4

0x8519,	// (0x00033087) input_focus_pane_vc_g5

0x8521,	// (0x0003308f) input_focus_pane_vc_g6

0x8529,	// (0x00033097) input_focus_pane_vc_g7

0x8531,	// (0x0003309f) input_focus_pane_vc_g8

0x8539,	// (0x000330a7) input_focus_pane_vc_g9

0x7a5e,	// (0x000325cc) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0003a1ff) input_focus_pane_vc_g

0xb34d,	// (0x00035ebb) data_form_pane_vc_ParamLimits

0xb34d,	// (0x00035ebb) data_form_pane_vc

0xb359,	// (0x00035ec7) form_field_data_pane_vc_g1

0xcafb,	// (0x00037669) form_field_data_pane_vc_t1_ParamLimits

0xcafb,	// (0x00037669) form_field_data_pane_vc_t1

0x84aa,	// (0x00033018) input_focus_pane_vc_ParamLimits

0x84aa,	// (0x00033018) input_focus_pane_vc

0xcb11,	// (0x0003767f) button_value_adjust_pane_cp3_vc

0xcb19,	// (0x00037687) button_value_adjust_pane_cp5_vc

0xcb21,	// (0x0003768f) form_field_data_pane_vc_ParamLimits

0xcb21,	// (0x0003768f) form_field_data_pane_vc

0xcb38,	// (0x000376a6) form_field_data_pane_vc_cp2

0xcb40,	// (0x000376ae) form_field_data_wide_pane_vc_ParamLimits

0xcb40,	// (0x000376ae) form_field_data_wide_pane_vc

0xcb56,	// (0x000376c4) form_field_data_wide_pane_vc_cp2

0xcb5e,	// (0x000376cc) form_field_popup_pane_vc_ParamLimits

0xcb5e,	// (0x000376cc) form_field_popup_pane_vc

0xcb75,	// (0x000376e3) form_field_popup_wide_pane_vc_ParamLimits

0xcb75,	// (0x000376e3) form_field_popup_wide_pane_vc

0xcb8b,	// (0x000376f9) form_field_slider_pane_vc_ParamLimits

0xcb8b,	// (0x000376f9) form_field_slider_pane_vc

0xcb9e,	// (0x0003770c) form_field_slider_wide_pane_vc_ParamLimits

0xcb9e,	// (0x0003770c) form_field_slider_wide_pane_vc

0xee6d,	// (0x000399db) grid_touch_1_pane_ParamLimits

0xee6d,	// (0x000399db) grid_touch_1_pane

0xee79,	// (0x000399e7) grid_touch_2_pane_ParamLimits

0xee79,	// (0x000399e7) grid_touch_2_pane

0xb082,	// (0x00035bf0) touch_pane_g1_ParamLimits

0xb082,	// (0x00035bf0) touch_pane_g1

0xcbb1,	// (0x0003771f) cell_app_pane_cp_wide_ParamLimits

0xcbb1,	// (0x0003771f) cell_app_pane_cp_wide

0xcbc1,	// (0x0003772f) grid_popup_fast_wide_pane_ParamLimits

0xcbc1,	// (0x0003772f) grid_popup_fast_wide_pane

0xcbd5,	// (0x00037743) scroll_pane_cp19_ParamLimits

0xcbd5,	// (0x00037743) scroll_pane_cp19

0x7c1d,	// (0x0003278b) bg_popup_window_pane_cp20

0xcbe9,	// (0x00037757) listscroll_popup_fast_wide_pane

0x7db1,	// (0x0003291f) grid_indicator_nsta_pane

0xcbf1,	// (0x0003775f) clock_nsta_pane_g1

0xcbfa,	// (0x00037768) clock_nsta_pane_t1

0xee91,	// (0x000399ff) cell_indicator_nsta_pane_ParamLimits

0xee91,	// (0x000399ff) cell_indicator_nsta_pane

0xcc16,	// (0x00037784) cell_indicator_nsta_pane_g1

0xeec2,	// (0x00039a30) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0003a613) cell_indicator_nsta_pane_g

0xcc24,	// (0x00037792) clock_nsta_pane_cp

0xcc2c,	// (0x0003779a) indicator_nsta_pane_cp

0xcc35,	// (0x000377a3) nsta_clock_indic_pane_g1

0x7e7f,	// (0x000329ed) grid_indicator_pane

0xa9fc,	// (0x0003556a) scroll_pane_cp29

0x8a80,	// (0x000335ee) indicator_nsta_pane_cp2_ParamLimits

0x8a80,	// (0x000335ee) indicator_nsta_pane_cp2

0x7db1,	// (0x0003291f) main_apps_wheel_pane

0xb4f8,	// (0x00036066) form_midp_field_text_pane_ParamLimits

0xb625,	// (0x00036193) scroll_bar_cp050_ParamLimits

0xcc9e,	// (0x0003780c) cell_indicator_pane_ParamLimits

0xcc9e,	// (0x0003780c) cell_indicator_pane

0xccb4,	// (0x00037822) cell_indicator_pane_g1

0xeecf,	// (0x00039a3d) grid_wheel_folder_pane_ParamLimits

0xeecf,	// (0x00039a3d) grid_wheel_folder_pane

0xeee1,	// (0x00039a4f) list_wheel_apps_pane_ParamLimits

0xeee1,	// (0x00039a4f) list_wheel_apps_pane

0xeef0,	// (0x00039a5e) main_apps_wheel_pane_g1_ParamLimits

0xeef0,	// (0x00039a5e) main_apps_wheel_pane_g1

0xef04,	// (0x00039a72) main_apps_wheel_pane_g2_ParamLimits

0xef04,	// (0x00039a72) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0003a62f) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0003a62f) main_apps_wheel_pane_g

0xef18,	// (0x00039a86) main_apps_wheel_pane_t1_ParamLimits

0xef18,	// (0x00039a86) main_apps_wheel_pane_t1

0xef37,	// (0x00039aa5) list_wheel_apps_pane_g1

0xef3f,	// (0x00039aad) list_wheel_apps_pane_g2

0xef47,	// (0x00039ab5) list_wheel_apps_pane_g3

0xef4f,	// (0x00039abd) list_wheel_apps_pane_g4

0xef57,	// (0x00039ac5) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0003a634) list_wheel_apps_pane_g

0x7db1,	// (0x0003291f) navi_icon_text_pane

0xde16,	// (0x00038984) aid_fill_nsta

0xccbe,	// (0x0003782c) navi_icon_text_pane_g1

0xccca,	// (0x00037838) navi_icon_text_pane_t1

0xac76,	// (0x000357e4) list_set_graphic_pane_t1_ParamLimits

0xac76,	// (0x000357e4) list_set_graphic_pane_t1

0xbd0b,	// (0x00036879) popup_midp_note_alarm_window_t6_ParamLimits

0xbd0b,	// (0x00036879) popup_midp_note_alarm_window_t6

0xbd1d,	// (0x0003688b) popup_midp_note_alarm_window_t7_ParamLimits

0xbd1d,	// (0x0003688b) popup_midp_note_alarm_window_t7

0xbd2f,	// (0x0003689d) popup_midp_note_alarm_window_t8_ParamLimits

0xbd2f,	// (0x0003689d) popup_midp_note_alarm_window_t8

0xbd41,	// (0x000368af) popup_midp_note_alarm_window_t9_ParamLimits

0xbd41,	// (0x000368af) popup_midp_note_alarm_window_t9

0xbd53,	// (0x000368c1) popup_midp_note_alarm_window_t10_ParamLimits

0xbd53,	// (0x000368c1) popup_midp_note_alarm_window_t10

0xbd65,	// (0x000368d3) popup_midp_note_alarm_window_t11_ParamLimits

0xbd65,	// (0x000368d3) popup_midp_note_alarm_window_t11

0xbd77,	// (0x000368e5) scroll_pane_cp17_ParamLimits

0xbd77,	// (0x000368e5) scroll_pane_cp17

0x9359,	// (0x00033ec7) volume_small_pane_cp_g1

0x9756,	// (0x000342c4) volume_small_pane_cp_g2

0x975f,	// (0x000342cd) volume_small_pane_cp_g3

0x9768,	// (0x000342d6) volume_small_pane_cp_g4

0x9386,	// (0x00033ef4) volume_small_pane_cp_g5

0x9771,	// (0x000342df) volume_small_pane_cp_g6

0x977a,	// (0x000342e8) volume_small_pane_cp_g7

0x9783,	// (0x000342f1) volume_small_pane_cp_g8

0x978c,	// (0x000342fa) volume_small_pane_cp_g9

0x9795,	// (0x00034303) volume_small_pane_cp_g10

0xaf25,	// (0x00035a93) midp_ticker_pane_g1_ParamLimits

0xaf31,	// (0x00035a9f) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0003a2cb) midp_ticker_pane_g_ParamLimits

0xaf3d,	// (0x00035aab) midp_ticker_pane_t1_ParamLimits

0xde26,	// (0x00038994) aid_fill_nsta_2

0xb611,	// (0x0003617f) list_form2_midp_pane

0xc3fd,	// (0x00036f6b) midp_editing_number_pane_ParamLimits

0xc409,	// (0x00036f77) midp_ticker_pane_ParamLimits

0xccdc,	// (0x0003784a) form2_midp_field_pane

0xcce4,	// (0x00037852) scroll_pane_cp51

0xcd04,	// (0x00037872) form2_midp_button_pane_ParamLimits

0xcd04,	// (0x00037872) form2_midp_button_pane

0xcd16,	// (0x00037884) form2_midp_content_pane_ParamLimits

0xcd16,	// (0x00037884) form2_midp_content_pane

0xcd30,	// (0x0003789e) form2_midp_field_choice_group_pane

0xcd38,	// (0x000378a6) form2_midp_field_pane_g1

0xcd40,	// (0x000378ae) form2_midp_field_pane_g2

0xcd48,	// (0x000378b6) form2_midp_field_pane_g3

0xcd50,	// (0x000378be) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0003a659) form2_midp_field_pane_g

0xcd58,	// (0x000378c6) form2_midp_gauge_slider_pane

0xcd60,	// (0x000378ce) form2_midp_gauge_wait_pane

0xcd68,	// (0x000378d6) form2_midp_image_pane_ParamLimits

0xcd68,	// (0x000378d6) form2_midp_image_pane

0xcd83,	// (0x000378f1) form2_midp_label_pane_ParamLimits

0xcd83,	// (0x000378f1) form2_midp_label_pane

0xef92,	// (0x00039b00) form2_midp_label_pane_cp_ParamLimits

0xef92,	// (0x00039b00) form2_midp_label_pane_cp

0xcd9c,	// (0x0003790a) form2_midp_string_pane_ParamLimits

0xcd9c,	// (0x0003790a) form2_midp_string_pane

0x775e,	// (0x000322cc) form2_midp_text_pane_ParamLimits

0x775e,	// (0x000322cc) form2_midp_text_pane

0xcdae,	// (0x0003791c) form2_midp_time_pane

0xcdbe,	// (0x0003792c) input_focus_pane_cp51_ParamLimits

0xcdbe,	// (0x0003792c) input_focus_pane_cp51

0xcdd6,	// (0x00037944) form2_midp_label_pane_t1_ParamLimits

0xcdd6,	// (0x00037944) form2_midp_label_pane_t1

0x7777,	// (0x000322e5) form2_mdip_text_pane_t1_ParamLimits

0x7777,	// (0x000322e5) form2_mdip_text_pane_t1

0x7790,	// (0x000322fe) form2_midp_time_pane_t1

0xce1e,	// (0x0003798c) form2_midp_gauge_slider_pane_t1

0xefb1,	// (0x00039b1f) form2_midp_gauge_slider_pane_t2

0xefc3,	// (0x00039b31) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0003a662) form2_midp_gauge_slider_pane_t

0xce30,	// (0x0003799e) form2_midp_slider_pane

0xce3c,	// (0x000379aa) form2_midp_gauge_wait_pane_t1

0xce4a,	// (0x000379b8) form2_midp_wait_pane_ParamLimits

0xce4a,	// (0x000379b8) form2_midp_wait_pane

0xb397,	// (0x00035f05) list_single_2graphic_pane_cp4_ParamLimits

0xb397,	// (0x00035f05) list_single_2graphic_pane_cp4

0xce75,	// (0x000379e3) list_single_midp_graphic_pane_cp_ParamLimits

0xce75,	// (0x000379e3) list_single_midp_graphic_pane_cp

0x7c1d,	// (0x0003278b) list_highlight_pane_cp20

0xce93,	// (0x00037a01) list_single_2graphic_pane_g1_cp4

0xc47e,	// (0x00036fec) list_single_2graphic_pane_g2_cp4

0xce9b,	// (0x00037a09) list_single_2graphic_pane_t1_cp4

0x7db1,	// (0x0003291f) list_highlight_pane_cp21

0xceaa,	// (0x00037a18) list_single_midp_graphic_pane_g4_cp

0xceb9,	// (0x00037a27) list_single_midp_graphic_pane_t1_cp

0xcece,	// (0x00037a3c) form2_mdip_string_pane_t1_ParamLimits

0xcece,	// (0x00037a3c) form2_mdip_string_pane_t1

0x7c1d,	// (0x0003278b) bg_wml_button_pane_cp2

0x7a5e,	// (0x000325cc) form2_midp_image_pane_g1

0x8432,	// (0x00032fa0) list_double_large_graphic_pane_g5_ParamLimits

0x8432,	// (0x00032fa0) list_double_large_graphic_pane_g5

0xdcb3,	// (0x00038821) midp_form_pane_ParamLimits

0x7db1,	// (0x0003291f) main_apps_wheel_pane_ParamLimits

0x906a,	// (0x00033bd8) popup_preview_window_ParamLimits

0x906a,	// (0x00033bd8) popup_preview_window

0x91e5,	// (0x00033d53) popup_touch_info_window_ParamLimits

0x91e5,	// (0x00033d53) popup_touch_info_window

0x9203,	// (0x00033d71) popup_touch_menu_window_ParamLimits

0x9203,	// (0x00033d71) popup_touch_menu_window

0x7a54,	// (0x000325c2) bg_popup_sub_pane_cp6

0xcf38,	// (0x00037aa6) list_touch_menu_pane

0xcf40,	// (0x00037aae) list_single_touch_menu_pane_ParamLimits

0xcf40,	// (0x00037aae) list_single_touch_menu_pane

0xcf57,	// (0x00037ac5) list_single_touch_menu_pane_t1

0x7db1,	// (0x0003291f) bg_popup_sub_pane_cp7_ParamLimits

0x7db1,	// (0x0003291f) bg_popup_sub_pane_cp7

0xcf65,	// (0x00037ad3) heading_sub_pane

0xcf6d,	// (0x00037adb) list_touch_info_pane_ParamLimits

0xcf6d,	// (0x00037adb) list_touch_info_pane

0xcf7c,	// (0x00037aea) list_single_touch_info_pane_ParamLimits

0xcf7c,	// (0x00037aea) list_single_touch_info_pane

0xcf8d,	// (0x00037afb) list_single_touch_info_pane_t1

0xcf9b,	// (0x00037b09) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0003a670) list_single_touch_info_pane_t

0xaefb,	// (0x00035a69) bg_popup_heading_pane_cp

0xcfa9,	// (0x00037b17) heading_sub_pane_t1

0xb313,	// (0x00035e81) bg_popup_preview_window_pane_cp_ParamLimits

0xb313,	// (0x00035e81) bg_popup_preview_window_pane_cp

0xcf65,	// (0x00037ad3) heading_preview_pane

0xcf6d,	// (0x00037adb) list_preview_pane_ParamLimits

0xcf6d,	// (0x00037adb) list_preview_pane

0xcfb7,	// (0x00037b25) popup_preview_window_g1

0xcf7c,	// (0x00037aea) list_single_preview_pane_ParamLimits

0xcf7c,	// (0x00037aea) list_single_preview_pane

0xcfbf,	// (0x00037b2d) list_single_preview_pane_g1

0xcfc7,	// (0x00037b35) list_single_preview_pane_t1

0xcf8d,	// (0x00037afb) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0003a675) list_single_preview_pane_t

0xcfd5,	// (0x00037b43) bg_popup_heading_pane_cp2_ParamLimits

0xcfd5,	// (0x00037b43) bg_popup_heading_pane_cp2

0xcfeb,	// (0x00037b59) heading_preview_pane_g1

0xcff3,	// (0x00037b61) heading_preview_pane_t1_ParamLimits

0xcff3,	// (0x00037b61) heading_preview_pane_t1

0x7e96,	// (0x00032a04) soft_indicator_pane_t1_ParamLimits

0x836e,	// (0x00032edc) scroll_pane_ParamLimits

0xa8f8,	// (0x00035466) scroll_sc2_left_pane

0xa901,	// (0x0003546f) scroll_sc2_right_pane

0xa920,	// (0x0003548e) scroll_bg_pane_g1_ParamLimits

0xa935,	// (0x000354a3) scroll_bg_pane_g2_ParamLimits

0xa94d,	// (0x000354bb) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0003a256) scroll_bg_pane_g_ParamLimits

0xa920,	// (0x0003548e) scroll_handle_pane_g1_ParamLimits

0xa96f,	// (0x000354dd) scroll_handle_pane_g2_ParamLimits

0xa94d,	// (0x000354bb) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0003a25d) scroll_handle_pane_g_ParamLimits

0x8db2,	// (0x00033920) popup_choice_list_window_ParamLimits

0x8db2,	// (0x00033920) popup_choice_list_window

0xb1e9,	// (0x00035d57) choice_list_pane

0xb25f,	// (0x00035dcd) cell_toolbar_pane_t1

0xb287,	// (0x00035df5) toolbar_button_pane_ParamLimits

0xc172,	// (0x00036ce0) ai_gene_pane_1_t2_ParamLimits

0xc172,	// (0x00036ce0) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0003a480) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0003a480) ai_gene_pane_1_t

0xd010,	// (0x00037b7e) scroll_sc2_left_pane_g1

0xd010,	// (0x00037b7e) scroll_sc2_right_pane_g1

0x8d9a,	// (0x00033908) bg_popup_sub_pane_cp10

0xd01a,	// (0x00037b88) list_choice_list_pane

0xd031,	// (0x00037b9f) list_single_choice_list_pane_ParamLimits

0xd031,	// (0x00037b9f) list_single_choice_list_pane

0xd043,	// (0x00037bb1) list_single_choice_list_pane_g1

0x860f,	// (0x0003317d) list_single_choice_list_pane_t1_ParamLimits

0x860f,	// (0x0003317d) list_single_choice_list_pane_t1

0xd04b,	// (0x00037bb9) choice_list_pane_g1

0xd053,	// (0x00037bc1) choice_list_pane_t1

0x7a54,	// (0x000325c2) input_focus_pane_cp11

0x87ca,	// (0x00033338) title_pane_stacon_g2_ParamLimits

0x87ca,	// (0x00033338) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0003a23c) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0003a23c) title_pane_stacon_g

0xaefb,	// (0x00035a69) cursor_press_pane

0x8e4e,	// (0x000339bc) popup_fep_hwr_window_ParamLimits

0x8e4e,	// (0x000339bc) popup_fep_hwr_window

0x8eaa,	// (0x00033a18) popup_fep_vkb_window_ParamLimits

0x8eaa,	// (0x00033a18) popup_fep_vkb_window

0xd061,	// (0x00037bcf) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0003a69e) fep_vkb_side_pane_g_ParamLimits

0x97d3,	// (0x00034341) fep_hwr_candidate_pane_ParamLimits

0x97d3,	// (0x00034341) fep_hwr_candidate_pane

0x97fb,	// (0x00034369) fep_hwr_side_pane_ParamLimits

0x97fb,	// (0x00034369) fep_hwr_side_pane

0x981b,	// (0x00034389) fep_hwr_top_pane_ParamLimits

0x981b,	// (0x00034389) fep_hwr_top_pane

0x9833,	// (0x000343a1) fep_hwr_write_pane_ParamLimits

0x9833,	// (0x000343a1) fep_hwr_write_pane

0xfb30,	// (0x0003a69e) fep_vkb_side_pane_g

0xd069,	// (0x00037bd7) fep_hwr_top_pane_g1

0xd07b,	// (0x00037be9) fep_hwr_top_pane_g2

0x985f,	// (0x000343cd) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0003a67a) fep_hwr_top_pane_g

0x9874,	// (0x000343e2) fep_hwr_top_text_pane

0xaa69,	// (0x000355d7) fep_hwr_top_text_pane_g1

0xd0b1,	// (0x00037c1f) fep_hwr_top_text_pane_t1

0x9962,	// (0x000344d0) fep_hwr_candidate_pane_g1

0xd27a,	// (0x00037de8) fep_vkb_keypad_pane_g3_ParamLimits

0xd27a,	// (0x00037de8) fep_vkb_keypad_pane_g3

0xd29c,	// (0x00037e0a) fep_vkb_keypad_pane_g4_ParamLimits

0xd29c,	// (0x00037e0a) fep_vkb_keypad_pane_g4

0xd30b,	// (0x00037e79) fep_vkb_bottom_pane_g2_ParamLimits

0xd30b,	// (0x00037e79) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0003a6a5) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0003a6a5) fep_vkb_bottom_pane_g

0xd010,	// (0x00037b7e) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0003a6af) cell_vkb_side_pane_g

0xd34f,	// (0x00037ebd) cell_vkb_side_pane_t1

0xd35d,	// (0x00037ecb) cell_vkb_side_pane_t1_copy1

0xd010,	// (0x00037b7e) bg_fep_vkb_candidate_pane_g2

0xd42b,	// (0x00037f99) cell_vkb_candidate_pane_ParamLimits

0xd0bf,	// (0x00037c2d) aid_size_cell_vkb_ParamLimits

0xd0bf,	// (0x00037c2d) aid_size_cell_vkb

0xd42b,	// (0x00037f99) cell_vkb_candidate_pane

0x997c,	// (0x000344ea) bg_popup_fep_shadow_pane_g1

0xd129,	// (0x00037c97) fep_vkb_bottom_pane_ParamLimits

0xd129,	// (0x00037c97) fep_vkb_bottom_pane

0xd166,	// (0x00037cd4) fep_vkb_candidate_pane_ParamLimits

0xd166,	// (0x00037cd4) fep_vkb_candidate_pane

0xd182,	// (0x00037cf0) fep_vkb_keypad_pane_ParamLimits

0xd182,	// (0x00037cf0) fep_vkb_keypad_pane

0xd1b6,	// (0x00037d24) fep_vkb_side_pane_ParamLimits

0xd1b6,	// (0x00037d24) fep_vkb_side_pane

0xd1e2,	// (0x00037d50) fep_vkb_top_pane_ParamLimits

0xd1e2,	// (0x00037d50) fep_vkb_top_pane

0xd20e,	// (0x00037d7c) fep_vkb_top_pane_g1_ParamLimits

0xd20e,	// (0x00037d7c) fep_vkb_top_pane_g1

0xd21d,	// (0x00037d8b) fep_vkb_top_pane_g2_ParamLimits

0xd21d,	// (0x00037d8b) fep_vkb_top_pane_g2

0xd22c,	// (0x00037d9a) fep_vkb_top_pane_g3_ParamLimits

0xd22c,	// (0x00037d9a) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0003a695) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0003a695) fep_vkb_top_pane_g

0xd24a,	// (0x00037db8) fep_vkb_top_text_pane_ParamLimits

0xd24a,	// (0x00037db8) fep_vkb_top_text_pane

0xefe1,	// (0x00039b4f) fep_vkb_side_pane_g1_ParamLimits

0xefe1,	// (0x00039b4f) fep_vkb_side_pane_g1

0xd269,	// (0x00037dd7) grid_vkb_side_pane_ParamLimits

0xd269,	// (0x00037dd7) grid_vkb_side_pane

0x9984,	// (0x000344f2) bg_popup_fep_shadow_pane_g2

0x998d,	// (0x000344fb) bg_popup_fep_shadow_pane_g3

0x9995,	// (0x00034503) bg_popup_fep_shadow_pane_g4

0x999e,	// (0x0003450c) bg_popup_fep_shadow_pane_g5

0x99a6,	// (0x00034514) bg_popup_fep_shadow_pane_g6

0x99ae,	// (0x0003451c) bg_popup_fep_shadow_pane_g7

0x8519,	// (0x00033087) bg_popup_fep_shadow_pane_g8

0xd2ba,	// (0x00037e28) grid_vkb_keypad_number_pane_ParamLimits

0xd2ba,	// (0x00037e28) grid_vkb_keypad_number_pane

0xd2ca,	// (0x00037e38) grid_vkb_keypad_pane_ParamLimits

0xd2ca,	// (0x00037e38) grid_vkb_keypad_pane

0xd2f0,	// (0x00037e5e) fep_vkb_bottom_pane_g1_ParamLimits

0xd2f0,	// (0x00037e5e) fep_vkb_bottom_pane_g1

0xd319,	// (0x00037e87) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd319,	// (0x00037e87) grid_vkb_keypad_bottom_left_pane

0xd32e,	// (0x00037e9c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd32e,	// (0x00037e9c) grid_vkb_keypad_bottom_right_pane

0xd343,	// (0x00037eb1) fep_vkb_top_text_pane_g1

0xf02b,	// (0x00039b99) fep_vkb_top_text_pane_t1

0xf040,	// (0x00039bae) cell_vkb_side_pane_ParamLimits

0xf040,	// (0x00039bae) cell_vkb_side_pane

0xd010,	// (0x00037b7e) cell_vkb_side_pane_g1

0xd36b,	// (0x00037ed9) cell_vkb_keypad_pane_ParamLimits

0xd36b,	// (0x00037ed9) cell_vkb_keypad_pane

0xd3d8,	// (0x00037f46) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0003a6c2) bg_popup_fep_shadow_pane_g

0xd010,	// (0x00037b7e) cell_hwr_side_pane_g1

0xd010,	// (0x00037b7e) cell_hwr_side_pane_g2

0xd3e2,	// (0x00037f50) cell_vkb_keypad_pane_t1

0xf063,	// (0x00039bd1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xf063,	// (0x00039bd1) cell_vkb_keypad_bottom_left_pane

0xf080,	// (0x00039bee) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xf080,	// (0x00039bee) cell_vkb_keypad_bottom_right_pane

0xd010,	// (0x00037b7e) cell_vkb_keypad_bottom_left_pane_g1

0xd010,	// (0x00037b7e) cell_vkb_keypad_bottom_right_pane_g1

0xd3f0,	// (0x00037f5e) cell_vkb_keypad_number_pane_ParamLimits

0xd3f0,	// (0x00037f5e) cell_vkb_keypad_number_pane

0xd40f,	// (0x00037f7d) cell_vkb_keypad_number_pane_g1

0xd419,	// (0x00037f87) cell_vkb_keypad_number_pane_g2

0xd422,	// (0x00037f90) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0003a6b4) cell_vkb_keypad_number_pane_g

0xd3e2,	// (0x00037f50) cell_vkb_keypad_number_pane_t1

0xd444,	// (0x00037fb2) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x0003a6af) cell_hwr_side_pane_g

0xd45d,	// (0x00037fcb) cell_hwr_side_pane_t1

0x99be,	// (0x0003452c) cell_hwr_side_pane_t1_copy1

0xd23c,	// (0x00037daa) cell_hwr_candidate_pane_g1

0x99cc,	// (0x0003453a) cell_hwr_candidate_pane_t1

0xd010,	// (0x00037b7e) cell_vkb_candidate_pane_g2

0xd4e3,	// (0x00038051) cell_vkb_candidate_pane_t1

0x979e,	// (0x0003430c) bg_popup_fep_shadow_pane_ParamLimits

0x979e,	// (0x0003430c) bg_popup_fep_shadow_pane

0x38cd,	// (0x0002e43b) bg_fep_hwr_top_pane_g4

0xd08d,	// (0x00037bfb) bg_hwr_side_pane_g1_ParamLimits

0xd08d,	// (0x00037bfb) bg_hwr_side_pane_g1

0x98b0,	// (0x0003441e) cell_hwr_side_pane_ParamLimits

0x98b0,	// (0x0003441e) cell_hwr_side_pane

0x98eb,	// (0x00034459) fep_hwr_write_pane_g1_ParamLimits

0x98eb,	// (0x00034459) fep_hwr_write_pane_g1

0x98f8,	// (0x00034466) fep_hwr_write_pane_g2_ParamLimits

0x98f8,	// (0x00034466) fep_hwr_write_pane_g2

0x9905,	// (0x00034473) fep_hwr_write_pane_g3_ParamLimits

0x9905,	// (0x00034473) fep_hwr_write_pane_g3

0x9913,	// (0x00034481) fep_hwr_write_pane_g4_ParamLimits

0x9913,	// (0x00034481) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0003a681) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0003a681) fep_hwr_write_pane_g

0x38cd,	// (0x0002e43b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x38cd,	// (0x0002e43b) bg_fep_hwr_candidate_pane_g2

0x9928,	// (0x00034496) cell_hwr_candidate_pane_ParamLimits

0x9928,	// (0x00034496) cell_hwr_candidate_pane

0x9962,	// (0x000344d0) fep_hwr_candidate_pane_g1_ParamLimits

0xd0ed,	// (0x00037c5b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd0ed,	// (0x00037c5b) bg_popup_fep_shadow_pane_cp2

0xd23c,	// (0x00037daa) fep_vkb_top_pane_g4_ParamLimits

0xd23c,	// (0x00037daa) fep_vkb_top_pane_g4

0xd25b,	// (0x00037dc9) fep_vkb_side_pane_g2_ParamLimits

0xd25b,	// (0x00037dc9) fep_vkb_side_pane_g2

0x6fda,	// (0x00031b48) list_setting_pane_t4_ParamLimits

0x6fda,	// (0x00031b48) list_setting_pane_t4

0x7070,	// (0x00031bde) list_setting_number_pane_t5_ParamLimits

0x7070,	// (0x00031bde) list_setting_number_pane_t5

0xdbb4,	// (0x00038722) list_double_heading_pane_cp2_ParamLimits

0xdbb4,	// (0x00038722) list_double_heading_pane_cp2

0xad70,	// (0x000358de) list_double_heading_pane_g1_cp2_ParamLimits

0xad70,	// (0x000358de) list_double_heading_pane_g1_cp2

0xd4f1,	// (0x0003805f) list_double_heading_pane_g2_cp2_ParamLimits

0xd4f1,	// (0x0003805f) list_double_heading_pane_g2_cp2

0xd505,	// (0x00038073) list_double_heading_pane_t1_cp2_ParamLimits

0xd505,	// (0x00038073) list_double_heading_pane_t1_cp2

0xd51b,	// (0x00038089) list_double_heading_pane_t2_cp2_ParamLimits

0xd51b,	// (0x00038089) list_double_heading_pane_t2_cp2

0x7a4c,	// (0x000325ba) aid_value_unit2

0x7c83,	// (0x000327f1) popup_preview_fixed_window

0x7f84,	// (0x00032af2) bg_popup_preview_window_pane_cp02

0xd52d,	// (0x0003809b) list_preview_fixed_pane

0xd573,	// (0x000380e1) list_empty_pane_fp_ParamLimits

0xd573,	// (0x000380e1) list_empty_pane_fp

0xd573,	// (0x000380e1) list_single_cale_day_pane_fp_ParamLimits

0xd573,	// (0x000380e1) list_single_cale_day_pane_fp

0xd573,	// (0x000380e1) list_single_graphic_heading_pane_fp_ParamLimits

0xd573,	// (0x000380e1) list_single_graphic_heading_pane_fp

0xd573,	// (0x000380e1) list_single_graphic_pane_fp_ParamLimits

0xd573,	// (0x000380e1) list_single_graphic_pane_fp

0xd573,	// (0x000380e1) list_single_heading_pane_fp_ParamLimits

0xd573,	// (0x000380e1) list_single_heading_pane_fp

0xd573,	// (0x000380e1) list_single_pane_fp_ParamLimits

0xd573,	// (0x000380e1) list_single_pane_fp

0xd587,	// (0x000380f5) list_single_pane_fp_g1_ParamLimits

0xd587,	// (0x000380f5) list_single_pane_fp_g1

0x83f6,	// (0x00032f64) list_single_pane_fp_g2_ParamLimits

0x83f6,	// (0x00032f64) list_single_pane_fp_g2

0x99e9,	// (0x00034557) list_single_pane_fp_g3_ParamLimits

0x99e9,	// (0x00034557) list_single_pane_fp_g3

0xd593,	// (0x00038101) list_single_pane_fp_g4_ParamLimits

0xd593,	// (0x00038101) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0003a6e3) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0003a6e3) list_single_pane_fp_g

0x77a3,	// (0x00032311) list_single_pane_fp_t1_ParamLimits

0x77a3,	// (0x00032311) list_single_pane_fp_t1

0x77ba,	// (0x00032328) list_single_graphic_pane_fp_g1_ParamLimits

0x77ba,	// (0x00032328) list_single_graphic_pane_fp_g1

0xd587,	// (0x000380f5) list_single_graphic_pane_fp_g2_ParamLimits

0xd587,	// (0x000380f5) list_single_graphic_pane_fp_g2

0x83f6,	// (0x00032f64) list_single_graphic_pane_fp_g3_ParamLimits

0x83f6,	// (0x00032f64) list_single_graphic_pane_fp_g3

0x99e9,	// (0x00034557) list_single_graphic_pane_fp_g4_ParamLimits

0x99e9,	// (0x00034557) list_single_graphic_pane_fp_g4

0xd593,	// (0x00038101) list_single_graphic_pane_fp_g5_ParamLimits

0xd593,	// (0x00038101) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003a6ec) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003a6ec) list_single_graphic_pane_fp_g

0x77c6,	// (0x00032334) list_single_graphic_pane_fp_t1_ParamLimits

0x77c6,	// (0x00032334) list_single_graphic_pane_fp_t1

0x77ba,	// (0x00032328) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x77ba,	// (0x00032328) list_single_graphic_heading_pane_fp_g1

0xd587,	// (0x000380f5) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd587,	// (0x000380f5) list_single_graphic_heading_pane_fp_g2

0x83f6,	// (0x00032f64) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x83f6,	// (0x00032f64) list_single_graphic_heading_pane_fp_g3

0x99e9,	// (0x00034557) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x99e9,	// (0x00034557) list_single_graphic_heading_pane_fp_g4

0xd593,	// (0x00038101) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd593,	// (0x00038101) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003a6ec) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003a6ec) list_single_graphic_heading_pane_fp_g

0x77dc,	// (0x0003234a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x77dc,	// (0x0003234a) list_single_graphic_heading_pane_fp_t1

0x77f2,	// (0x00032360) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x77f2,	// (0x00032360) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0003a6f7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0003a6f7) list_single_graphic_heading_pane_fp_t

0x7804,	// (0x00032372) list_single_cale_day_pane_fp_g1_ParamLimits

0x7804,	// (0x00032372) list_single_cale_day_pane_fp_g1

0xd59f,	// (0x0003810d) list_single_cale_day_pane_fp_g2_ParamLimits

0xd59f,	// (0x0003810d) list_single_cale_day_pane_fp_g2

0x99fd,	// (0x0003456b) list_single_cale_day_pane_fp_g3_ParamLimits

0x99fd,	// (0x0003456b) list_single_cale_day_pane_fp_g3

0x9a25,	// (0x00034593) list_single_cale_day_pane_fp_g4_ParamLimits

0x9a25,	// (0x00034593) list_single_cale_day_pane_fp_g4

0x9a49,	// (0x000345b7) list_single_cale_day_pane_fp_g5_ParamLimits

0x9a49,	// (0x000345b7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003a6fc) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003a6fc) list_single_cale_day_pane_fp_g

0x783c,	// (0x000323aa) list_single_cale_day_pane_fp_t1_ParamLimits

0x783c,	// (0x000323aa) list_single_cale_day_pane_fp_t1

0x7862,	// (0x000323d0) list_single_cale_day_pane_fp_t2_ParamLimits

0x7862,	// (0x000323d0) list_single_cale_day_pane_fp_t2

0x787b,	// (0x000323e9) list_single_cale_day_pane_fp_t3_ParamLimits

0x787b,	// (0x000323e9) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x0003a707) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x0003a707) list_single_cale_day_pane_fp_t

0xd587,	// (0x000380f5) list_empty_pane_fp_g1_ParamLimits

0xd587,	// (0x000380f5) list_empty_pane_fp_g1

0x7894,	// (0x00032402) list_empty_pane_fp_t1

0x78a2,	// (0x00032410) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0003a70e) list_empty_pane_fp_t

0xd587,	// (0x000380f5) list_single_heading_pane_fp_g1_ParamLimits

0xd587,	// (0x000380f5) list_single_heading_pane_fp_g1

0x83f6,	// (0x00032f64) list_single_heading_pane_fp_g2_ParamLimits

0x83f6,	// (0x00032f64) list_single_heading_pane_fp_g2

0x99e9,	// (0x00034557) list_single_heading_pane_fp_g3_ParamLimits

0x99e9,	// (0x00034557) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0003a713) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0003a713) list_single_heading_pane_fp_g

0x78b0,	// (0x0003241e) list_single_heading_pane_fp_t1_ParamLimits

0x78b0,	// (0x0003241e) list_single_heading_pane_fp_t1

0x78c2,	// (0x00032430) list_single_heading_pane_fp_t2_ParamLimits

0x78c2,	// (0x00032430) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0003a71a) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0003a71a) list_single_heading_pane_fp_t

0x8624,	// (0x00033192) aid_size_cell_fast

0x7f59,	// (0x00032ac7) soft_indicator_pane_cp1_t1

0x8661,	// (0x000331cf) cell_app_pane_cp2_ParamLimits

0x8661,	// (0x000331cf) cell_app_pane_cp2

0x97c0,	// (0x0003432e) fep_hwr_candidate_drop_down_list_pane

0x3beb,	// (0x0002e759) fep_hwr_candidate_pane_g3_ParamLimits

0x3beb,	// (0x0002e759) fep_hwr_candidate_pane_g3

0x3bf8,	// (0x0002e766) fep_hwr_candidate_pane_g4_ParamLimits

0x3bf8,	// (0x0002e766) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0003a68e) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0003a68e) fep_hwr_candidate_pane_g

0xd155,	// (0x00037cc3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd155,	// (0x00037cc3) fep_vkb_candidate_drop_down_list_pane

0xd44c,	// (0x00037fba) fep_vkb_candidate_pane_g3

0xd454,	// (0x00037fc2) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0003a6bb) fep_vkb_candidate_pane_g

0xd23c,	// (0x00037daa) cell_hwr_candidate_pane_g1_ParamLimits

0xd46b,	// (0x00037fd9) cell_hwr_candidate_pane_g3_ParamLimits

0xd46b,	// (0x00037fd9) cell_hwr_candidate_pane_g3

0xd48c,	// (0x00037ffa) cell_hwr_candidate_pane_g4_ParamLimits

0xd48c,	// (0x00037ffa) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x0003a6d5) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x0003a6d5) cell_hwr_candidate_pane_g

0xd4ad,	// (0x0003801b) cell_vkb_candidate_pane_g3_ParamLimits

0xd4ad,	// (0x0003801b) cell_vkb_candidate_pane_g3

0xd4c8,	// (0x00038036) cell_vkb_candidate_pane_g4_ParamLimits

0xd4c8,	// (0x00038036) cell_vkb_candidate_pane_g4

0xd5ab,	// (0x00038119) cell_app_pane_cp2_g1_ParamLimits

0xd5ab,	// (0x00038119) cell_app_pane_cp2_g1

0xd5c9,	// (0x00038137) cell_app_pane_cp2_g2_ParamLimits

0xd5c9,	// (0x00038137) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0003a71f) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0003a71f) cell_app_pane_cp2_g

0xd5d5,	// (0x00038143) cell_app_pane_cp2_t1_ParamLimits

0xd5d5,	// (0x00038143) cell_app_pane_cp2_t1

0x84aa,	// (0x00033018) grid_highlight_pane_cp1_ParamLimits

0x84aa,	// (0x00033018) grid_highlight_pane_cp1

0x9a6d,	// (0x000345db) cell_hwr_candidate_pane_cp1_ParamLimits

0x9a6d,	// (0x000345db) cell_hwr_candidate_pane_cp1

0xd23c,	// (0x00037daa) fep_hwr_candidate_drop_down_list_pane_g1

0xd5e7,	// (0x00038155) fep_hwr_candidate_drop_down_list_pane_g2

0xd5f4,	// (0x00038162) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0003a724) fep_hwr_candidate_drop_down_list_pane_g

0x9a8b,	// (0x000345f9) fep_hwr_candidate_drop_down_list_scroll_pane

0x9a94,	// (0x00034602) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9a94,	// (0x00034602) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9aa1,	// (0x0003460f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9aa1,	// (0x0003460f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9aae,	// (0x0003461c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9aae,	// (0x0003461c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xd4ad,	// (0x0003801b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd4ad,	// (0x0003801b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xd4c8,	// (0x00038036) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd4c8,	// (0x00038036) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9abb,	// (0x00034629) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9abb,	// (0x00034629) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9ad6,	// (0x00034644) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9ad6,	// (0x00034644) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x9af1,	// (0x0003465f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9af1,	// (0x0003465f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0003a72b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0003a72b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf0b9,	// (0x00039c27) cell_vkb_candidate_pane_cp1_ParamLimits

0xf0b9,	// (0x00039c27) cell_vkb_candidate_pane_cp1

0xd23c,	// (0x00037daa) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd23c,	// (0x00037daa) fep_vkb_candidate_drop_down_list_pane_g1

0xd5e7,	// (0x00038155) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd5e7,	// (0x00038155) fep_vkb_candidate_drop_down_list_pane_g2

0xd5f4,	// (0x00038162) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd5f4,	// (0x00038162) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0003a724) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x0003a724) fep_vkb_candidate_drop_down_list_pane_g

0xd601,	// (0x0003816f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd601,	// (0x0003816f) fep_vkb_candidate_drop_down_list_scroll_pane

0xd60e,	// (0x0003817c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd60e,	// (0x0003817c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd61b,	// (0x00038189) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd61b,	// (0x00038189) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd627,	// (0x00038195) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd627,	// (0x00038195) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd46b,	// (0x00037fd9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd46b,	// (0x00037fd9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd48c,	// (0x00037ffa) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd48c,	// (0x00037ffa) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd633,	// (0x000381a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd633,	// (0x000381a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd654,	// (0x000381c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd654,	// (0x000381c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd675,	// (0x000381e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd675,	// (0x000381e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0003a73c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0003a73c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd7cc,	// (0x0003833a) title_pane_g1_ParamLimits

0xd7d9,	// (0x00038347) title_pane_g2_ParamLimits

0xf54e,	// (0x0003a0bc) title_pane_g_ParamLimits

0xaa59,	// (0x000355c7) aid_call2_pane

0xaa61,	// (0x000355cf) aid_call_pane

0xaa69,	// (0x000355d7) popup_clock_analogue_window_g1

0xaa69,	// (0x000355d7) popup_clock_analogue_window_g2

0x897a,	// (0x000334e8) popup_clock_analogue_window_g3

0x8983,	// (0x000334f1) popup_clock_analogue_window_g4

0x7a5e,	// (0x000325cc) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0003a26b) popup_clock_analogue_window_g

0x898b,	// (0x000334f9) popup_clock_analogue_window_t1

0x8999,	// (0x00033507) clock_digital_number_pane_ParamLimits

0x8999,	// (0x00033507) clock_digital_number_pane

0x89a5,	// (0x00033513) clock_digital_number_pane_cp02_ParamLimits

0x89a5,	// (0x00033513) clock_digital_number_pane_cp02

0x89b1,	// (0x0003351f) clock_digital_number_pane_cp03_ParamLimits

0x89b1,	// (0x0003351f) clock_digital_number_pane_cp03

0x89bd,	// (0x0003352b) clock_digital_number_pane_cp04_ParamLimits

0x89bd,	// (0x0003352b) clock_digital_number_pane_cp04

0x89c9,	// (0x00033537) clock_digital_separator_pane_ParamLimits

0x89c9,	// (0x00033537) clock_digital_separator_pane

0x89d5,	// (0x00033543) popup_clock_digital_window_t1_ParamLimits

0x89d5,	// (0x00033543) popup_clock_digital_window_t1

0x7a5e,	// (0x000325cc) clock_digital_number_pane_g1

0x7a5e,	// (0x000325cc) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0003a276) clock_digital_number_pane_g

0x7a5e,	// (0x000325cc) clock_digital_separator_pane_g1

0x7a5e,	// (0x000325cc) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0003a276) clock_digital_separator_pane_g

0xde16,	// (0x00038984) aid_fill_nsta_ParamLimits

0xdecf,	// (0x00038a3d) indicator_nsta_pane_ParamLimits

0xb186,	// (0x00035cf4) popup_clock_analogue_window

0xb186,	// (0x00035cf4) popup_clock_digital_window

0x7db1,	// (0x0003291f) grid_indicator_nsta_pane_ParamLimits

0xcc08,	// (0x00037776) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0003a60e) clock_nsta_pane_t

0x893e,	// (0x000334ac) aid_size_max_handle

0x8948,	// (0x000334b6) aid_size_min_handle

0xaefb,	// (0x00035a69) editor_scroll_pane

0xd690,	// (0x000381fe) ex_editor_pane

0x85ed,	// (0x0003315b) scroll_pane_cp13

0x839b,	// (0x00032f09) scroll_pane_cp14

0xaa98,	// (0x00035606) scroll_pane_cp36

0xdbc4,	// (0x00038732) list_single_graphic_hl_pane_cp2_ParamLimits

0xdbc4,	// (0x00038732) list_single_graphic_hl_pane_cp2

0x7530,	// (0x0003209e) list_single_graphic_hl_pane_ParamLimits

0x7530,	// (0x0003209e) list_single_graphic_hl_pane

0x78d8,	// (0x00032446) aid_size_min_hl_cp1

0xd698,	// (0x00038206) list_highlight_pane_cp34_ParamLimits

0xd698,	// (0x00038206) list_highlight_pane_cp34

0xd6a9,	// (0x00038217) list_single_graphic_hl_pane_g1_ParamLimits

0xd6a9,	// (0x00038217) list_single_graphic_hl_pane_g1

0x78e1,	// (0x0003244f) list_single_graphic_hl_pane_g2_ParamLimits

0x78e1,	// (0x0003244f) list_single_graphic_hl_pane_g2

0x78e1,	// (0x0003244f) list_single_graphic_hl_pane_g3_ParamLimits

0x78e1,	// (0x0003244f) list_single_graphic_hl_pane_g3

0x83f6,	// (0x00032f64) list_single_graphic_hl_pane_g4_ParamLimits

0x83f6,	// (0x00032f64) list_single_graphic_hl_pane_g4

0x99e9,	// (0x00034557) list_single_graphic_hl_pane_g5_ParamLimits

0x99e9,	// (0x00034557) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0003a74d) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0003a74d) list_single_graphic_hl_pane_g

0x6df7,	// (0x00031965) list_single_graphic_hl_pane_t1_ParamLimits

0x6df7,	// (0x00031965) list_single_graphic_hl_pane_t1

0xd6b6,	// (0x00038224) aid_size_min_hl_cp2

0xd6bf,	// (0x0003822d) list_highlight_pane_cp34_cp2_ParamLimits

0xd6bf,	// (0x0003822d) list_highlight_pane_cp34_cp2

0xd6a9,	// (0x00038217) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd6a9,	// (0x00038217) list_single_graphic_hl_pane_g1_cp2

0xd6cc,	// (0x0003823a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd6cc,	// (0x0003823a) list_single_graphic_hl_pane_g2_cp2

0xd6d8,	// (0x00038246) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd6d8,	// (0x00038246) list_single_graphic_hl_pane_g3_cp2

0xad70,	// (0x000358de) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xad70,	// (0x000358de) list_single_graphic_hl_pane_g4_cp2

0xd4f1,	// (0x0003805f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd4f1,	// (0x0003805f) list_single_graphic_hl_pane_g5_cp2

0x8c70,	// (0x000337de) control_pane_g4_ParamLimits

0x8c70,	// (0x000337de) control_pane_g4

0x8d9a,	// (0x00033908) bg_popup_sub_pane_cp10_ParamLimits

0xd01a,	// (0x00037b88) list_choice_list_pane_ParamLimits

0xd029,	// (0x00037b97) scroll_pane_cp23

0x7f84,	// (0x00032af2) bg_popup_preview_window_pane_cp02_ParamLimits

0xd52d,	// (0x0003809b) list_preview_fixed_pane_ParamLimits

0xd543,	// (0x000380b1) list_preview_fixed_pane_cp_ParamLimits

0xd543,	// (0x000380b1) list_preview_fixed_pane_cp

0xd54f,	// (0x000380bd) popup_preview_fixed_window_g1_ParamLimits

0xd54f,	// (0x000380bd) popup_preview_fixed_window_g1

0xd55b,	// (0x000380c9) popup_preview_fixed_window_g2_ParamLimits

0xd55b,	// (0x000380c9) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0003a6dc) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0003a6dc) popup_preview_fixed_window_g

0x8897,	// (0x00033405) aid_navi_side_left_pane_ParamLimits

0x88a7,	// (0x00033415) aid_navi_side_right_pane_ParamLimits

0x88b6,	// (0x00033424) navi_icon_pane_stacon_ParamLimits

0x88c6,	// (0x00033434) navi_navi_pane_stacon_ParamLimits

0x88b6,	// (0x00033424) navi_text_pane_stacon_ParamLimits

0x7a54,	// (0x000325c2) main_text_info_pane

0xd6fa,	// (0x00038268) listscroll_text_info_pane

0xd702,	// (0x00038270) list_text_info_pane_ParamLimits

0xd702,	// (0x00038270) list_text_info_pane

0xd711,	// (0x0003827f) scroll_pane_cp24_ParamLimits

0xd711,	// (0x0003827f) scroll_pane_cp24

0xf0dc,	// (0x00039c4a) list_text_info_pane_t1_ParamLimits

0xf0dc,	// (0x00039c4a) list_text_info_pane_t1

0x8dcc,	// (0x0003393a) popup_fast_swap2_window_ParamLimits

0x8dcc,	// (0x0003393a) popup_fast_swap2_window

0xd72f,	// (0x0003829d) aid_size_cell_fast2

0x7a54,	// (0x000325c2) bg_popup_window_pane_cp17

0xb63d,	// (0x000361ab) heading_pane_cp2

0x819a,	// (0x00032d08) listscroll_fast2_pane

0xe28a,	// (0x00038df8) grid_fast2_pane

0xe292,	// (0x00038e00) listscroll_fast2_pane_g1

0xe29a,	// (0x00038e08) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x0003a758) listscroll_fast2_pane_g

0x85ed,	// (0x0003315b) scroll_pane_cp26

0xe2a2,	// (0x00038e10) cell_fast2_pane_ParamLimits

0xe2a2,	// (0x00038e10) cell_fast2_pane

0xe2b8,	// (0x00038e26) cell_fast2_pane_g1

0xe2c1,	// (0x00038e2f) cell_fast2_pane_g2

0xe2ca,	// (0x00038e38) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0003a75d) cell_fast2_pane_g

0x81fc,	// (0x00032d6a) grid_highlight_pane_cp9

0x8211,	// (0x00032d7f) main_eswt_pane_ParamLimits

0x8211,	// (0x00032d7f) main_eswt_pane

0xd726,	// (0x00038294) list_single_text_info_pane

0xe2d2,	// (0x00038e40) eswt_ctrl_button_pane

0xe2d2,	// (0x00038e40) eswt_ctrl_canvas_pane

0xe2da,	// (0x00038e48) eswt_ctrl_combo_pane

0xe2d2,	// (0x00038e40) eswt_ctrl_default_pane

0xe2d2,	// (0x00038e40) eswt_ctrl_label_pane

0xe2e2,	// (0x00038e50) eswt_ctrl_wait_pane

0xe2ea,	// (0x00038e58) eswt_shell_pane

0x7a54,	// (0x000325c2) listscroll_eswt_app_pane

0xe306,	// (0x00038e74) popup_eswt_tasktip_window_ParamLimits

0xe306,	// (0x00038e74) popup_eswt_tasktip_window

0xb313,	// (0x00035e81) bg_popup_window_pane_cp18

0xe317,	// (0x00038e85) eswt_control_pane_g1_ParamLimits

0xe317,	// (0x00038e85) eswt_control_pane_g1

0xe324,	// (0x00038e92) eswt_control_pane_g2_ParamLimits

0xe324,	// (0x00038e92) eswt_control_pane_g2

0xe331,	// (0x00038e9f) eswt_control_pane_g3_ParamLimits

0xe331,	// (0x00038e9f) eswt_control_pane_g3

0xe33e,	// (0x00038eac) eswt_control_pane_g4_ParamLimits

0xe33e,	// (0x00038eac) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x0003a764) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x0003a764) eswt_control_pane_g

0x84aa,	// (0x00033018) bg_button_pane_ParamLimits

0x84aa,	// (0x00033018) bg_button_pane

0x8211,	// (0x00032d7f) common_borders_pane_copy2_ParamLimits

0x8211,	// (0x00032d7f) common_borders_pane_copy2

0xe34b,	// (0x00038eb9) control_button_pane_g1_ParamLimits

0xe34b,	// (0x00038eb9) control_button_pane_g1

0xe357,	// (0x00038ec5) control_button_pane_g2_ParamLimits

0xe357,	// (0x00038ec5) control_button_pane_g2

0xe363,	// (0x00038ed1) control_button_pane_g3_ParamLimits

0xe363,	// (0x00038ed1) control_button_pane_g3

0x0002,

0xfbff,	// (0x0003a76d) control_button_pane_g_ParamLimits

0xfbff,	// (0x0003a76d) control_button_pane_g

0xe377,	// (0x00038ee5) control_button_pane_t1

0xe385,	// (0x00038ef3) control_button_pane_t2

0x0001,

0xfc06,	// (0x0003a774) control_button_pane_t

0xb293,	// (0x00035e01) bg_button_pane_g1

0xb29b,	// (0x00035e09) bg_button_pane_g2

0xb2a3,	// (0x00035e11) bg_button_pane_g3

0xb2ab,	// (0x00035e19) bg_button_pane_g4

0xb2b3,	// (0x00035e21) bg_button_pane_g5

0xb2bb,	// (0x00035e29) bg_button_pane_g6

0xb2c3,	// (0x00035e31) bg_button_pane_g7

0xb2cb,	// (0x00035e39) bg_button_pane_g8

0xb2d3,	// (0x00035e41) bg_button_pane_g9

0x0008,

0xf866,	// (0x0003a3d4) bg_button_pane_g

0xcfd5,	// (0x00037b43) common_borders_pane_ParamLimits

0xcfd5,	// (0x00037b43) common_borders_pane

0xe317,	// (0x00038e85) eswt_control_pane_g1_copy1_ParamLimits

0xe317,	// (0x00038e85) eswt_control_pane_g1_copy1

0xe324,	// (0x00038e92) eswt_control_pane_g2_copy1_ParamLimits

0xe324,	// (0x00038e92) eswt_control_pane_g2_copy1

0xe331,	// (0x00038e9f) eswt_control_pane_g3_copy1_ParamLimits

0xe331,	// (0x00038e9f) eswt_control_pane_g3_copy1

0xe33e,	// (0x00038eac) eswt_control_pane_g4_copy1_ParamLimits

0xe33e,	// (0x00038eac) eswt_control_pane_g4_copy1

0xd010,	// (0x00037b7e) bg_eswt_ctrl_canvas_pane_g1

0xcfd5,	// (0x00037b43) common_borders_pane_cp2_ParamLimits

0xcfd5,	// (0x00037b43) common_borders_pane_cp2

0xcfd5,	// (0x00037b43) common_borders_pane_cp3_ParamLimits

0xcfd5,	// (0x00037b43) common_borders_pane_cp3

0xe393,	// (0x00038f01) separator_horizontal_pane

0xa8f8,	// (0x00035466) separator_vertical_pane

0xe317,	// (0x00038e85) eswt_control_pane_g1_copy2_ParamLimits

0xe317,	// (0x00038e85) eswt_control_pane_g1_copy2

0xe324,	// (0x00038e92) eswt_control_pane_g2_copy2_ParamLimits

0xe324,	// (0x00038e92) eswt_control_pane_g2_copy2

0xe331,	// (0x00038e9f) eswt_control_pane_g3_copy2_ParamLimits

0xe331,	// (0x00038e9f) eswt_control_pane_g3_copy2

0xe33e,	// (0x00038eac) eswt_control_pane_g4_copy2_ParamLimits

0xe33e,	// (0x00038eac) eswt_control_pane_g4_copy2

0x7a54,	// (0x000325c2) common_borders_pane_cp4

0xe39b,	// (0x00038f09) separator_horizontal_pane_g1

0xe3a4,	// (0x00038f12) separator_horizontal_pane_g2

0xe3ad,	// (0x00038f1b) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x0003a779) separator_horizontal_pane_g

0xe317,	// (0x00038e85) eswt_control_pane_g1_copy3_ParamLimits

0xe317,	// (0x00038e85) eswt_control_pane_g1_copy3

0xe324,	// (0x00038e92) eswt_control_pane_g2_copy3_ParamLimits

0xe324,	// (0x00038e92) eswt_control_pane_g2_copy3

0xe331,	// (0x00038e9f) eswt_control_pane_g3_copy3_ParamLimits

0xe331,	// (0x00038e9f) eswt_control_pane_g3_copy3

0xe33e,	// (0x00038eac) eswt_control_pane_g4_copy3_ParamLimits

0xe33e,	// (0x00038eac) eswt_control_pane_g4_copy3

0x7a54,	// (0x000325c2) common_borders_pane_cp5

0xe3b6,	// (0x00038f24) separator_vertical_pane_g1

0xe3bf,	// (0x00038f2d) separator_vertical_pane_g2

0xe3c8,	// (0x00038f36) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x0003a780) separator_vertical_pane_g

0xe317,	// (0x00038e85) eswt_control_pane_g1_copy4_ParamLimits

0xe317,	// (0x00038e85) eswt_control_pane_g1_copy4

0xe324,	// (0x00038e92) eswt_control_pane_g2_copy4_ParamLimits

0xe324,	// (0x00038e92) eswt_control_pane_g2_copy4

0xe331,	// (0x00038e9f) eswt_control_pane_g3_copy4_ParamLimits

0xe331,	// (0x00038e9f) eswt_control_pane_g3_copy4

0xe33e,	// (0x00038eac) eswt_control_pane_g4_copy4_ParamLimits

0xe33e,	// (0x00038eac) eswt_control_pane_g4_copy4

0xf0f9,	// (0x00039c67) eswt_ctrl_combo_button_pane

0xf101,	// (0x00039c6f) eswt_ctrl_input_pane

0xf109,	// (0x00039c77) popup_choice_list_window_cp70

0xf111,	// (0x00039c7f) eswt_ctrl_input_pane_t1

0x7a54,	// (0x000325c2) input_focus_pane_cp70

0xcfd5,	// (0x00037b43) bg_button_pane_cp70_ParamLimits

0xcfd5,	// (0x00037b43) bg_button_pane_cp70

0xf11f,	// (0x00039c8d) eswt_ctrl_combo_button_pane_g1

0xe3d1,	// (0x00038f3f) wait_bar_pane_cp70

0xb313,	// (0x00035e81) bg_popup_window_pane_cp70_ParamLimits

0xb313,	// (0x00035e81) bg_popup_window_pane_cp70

0xe3d9,	// (0x00038f47) popup_eswt_tasktip_window_t1

0xe3ef,	// (0x00038f5d) wait_bar_pane_cp71_ParamLimits

0xe3ef,	// (0x00038f5d) wait_bar_pane_cp71

0xe3fb,	// (0x00038f69) grid_eswt_app_pane

0xa901,	// (0x0003546f) scroll_pane_cp70

0xf127,	// (0x00039c95) cell_eswt_app_pane_ParamLimits

0xf127,	// (0x00039c95) cell_eswt_app_pane

0xf14f,	// (0x00039cbd) cell_eswt_app_pane_g1_ParamLimits

0xf14f,	// (0x00039cbd) cell_eswt_app_pane_g1

0xf17e,	// (0x00039cec) cell_eswt_app_pane_g2_ParamLimits

0xf17e,	// (0x00039cec) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x0003a787) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x0003a787) cell_eswt_app_pane_g

0xf1a7,	// (0x00039d15) cell_eswt_app_pane_t1_ParamLimits

0xf1a7,	// (0x00039d15) cell_eswt_app_pane_t1

0xe404,	// (0x00038f72) grid_highlight_pane_cp70_ParamLimits

0xe404,	// (0x00038f72) grid_highlight_pane_cp70

0x841a,	// (0x00032f88) set_content_pane_g1

0xb07a,	// (0x00035be8) status_small_volume_pane

0x9b0c,	// (0x0003467a) status_small_volume_pane_g1

0x9b14,	// (0x00034682) volume_small2_pane

0x9b1d,	// (0x0003468b) volume_small2_pane_g1

0x9b26,	// (0x00034694) volume_small2_pane_g2

0x9b2f,	// (0x0003469d) volume_small2_pane_g3

0x9b38,	// (0x000346a6) volume_small2_pane_g4

0x9b41,	// (0x000346af) volume_small2_pane_g5

0x9b4a,	// (0x000346b8) volume_small2_pane_g6

0x9b53,	// (0x000346c1) volume_small2_pane_g7

0x9b5c,	// (0x000346ca) volume_small2_pane_g8

0x9b65,	// (0x000346d3) volume_small2_pane_g9

0x9b6e,	// (0x000346dc) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0003a78c) volume_small2_pane_g

0xd343,	// (0x00037eb1) fep_vkb_top_text_pane_g1_ParamLimits

0xf02b,	// (0x00039b99) fep_vkb_top_text_pane_t1_ParamLimits

0xd567,	// (0x000380d5) popup_preview_fixed_window_g3_ParamLimits

0xd567,	// (0x000380d5) popup_preview_fixed_window_g3

0x918e,	// (0x00033cfc) popup_toolbar_trans_pane

0xebe6,	// (0x00039754) aid_height_set_list_ParamLimits

0xc3c1,	// (0x00036f2f) aid_size_parent_ParamLimits

0x8d9a,	// (0x00033908) list_highlight_pane_cp2_ParamLimits

0x841a,	// (0x00032f88) set_content_pane_g1_ParamLimits

0xed31,	// (0x0003989f) list_single_image_pane_ParamLimits

0xed31,	// (0x0003989f) list_single_image_pane

0xf1d9,	// (0x00039d47) aid_size_cell_image_ParamLimits

0xf1d9,	// (0x00039d47) aid_size_cell_image

0xf1e6,	// (0x00039d54) grid_single_image_pane_ParamLimits

0xf1e6,	// (0x00039d54) grid_single_image_pane

0x841a,	// (0x00032f88) list_single_image_pane_g1_ParamLimits

0x841a,	// (0x00032f88) list_single_image_pane_g1

0x84c4,	// (0x00033032) list_single_image_pane_g2_ParamLimits

0x84c4,	// (0x00033032) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x0003a7a1) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x0003a7a1) list_single_image_pane_g

0xd739,	// (0x000382a7) list_single_image_pane_t1_ParamLimits

0xd739,	// (0x000382a7) list_single_image_pane_t1

0xf1f2,	// (0x00039d60) cell_image_list_pane_ParamLimits

0xf1f2,	// (0x00039d60) cell_image_list_pane

0xf205,	// (0x00039d73) cell_image_list_pane_g1

0xf20e,	// (0x00039d7c) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x0003a7a6) cell_image_list_pane_g

0xe410,	// (0x00038f7e) aid_size_cell_tb_trans_pane

0x84aa,	// (0x00033018) bg_tb_trans_pane

0xe422,	// (0x00038f90) grid_tb_trans_pane

0xb293,	// (0x00035e01) bg_tb_trans_pane_g1

0xb29b,	// (0x00035e09) bg_tb_trans_pane_g2

0xb2a3,	// (0x00035e11) bg_tb_trans_pane_g3

0xb2ab,	// (0x00035e19) bg_tb_trans_pane_g4

0xb2b3,	// (0x00035e21) bg_tb_trans_pane_g5

0xb2cb,	// (0x00035e39) bg_tb_trans_pane_g6

0xb2d3,	// (0x00035e41) bg_tb_trans_pane_g7

0xb2bb,	// (0x00035e29) bg_tb_trans_pane_g8

0xb2c3,	// (0x00035e31) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x0003a7ab) bg_tb_trans_pane_g

0xe436,	// (0x00038fa4) cell_toolbar_trans_pane_ParamLimits

0xe436,	// (0x00038fa4) cell_toolbar_trans_pane

0xd010,	// (0x00037b7e) cell_toolbar_trans_pane_g1

0xef76,	// (0x00039ae4) list_form2_midp_pane_t1

0xef84,	// (0x00039af2) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0003a654) list_form2_midp_pane_t

0xcce4,	// (0x00037852) scroll_pane_cp51_ParamLimits

0xce5a,	// (0x000379c8) form2_midp_wait_pane_g1

0xce63,	// (0x000379d1) form2_midp_wait_pane_g2

0xce6c,	// (0x000379da) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0003a669) form2_midp_wait_pane_g

0x7db1,	// (0x0003291f) list_highlight_pane_cp21_ParamLimits

0xceaa,	// (0x00037a18) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xceb9,	// (0x00037a27) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x74f1,	// (0x0003205f) list_single_2graphic_im_pane_ParamLimits

0x74f1,	// (0x0003205f) list_single_2graphic_im_pane

0xf217,	// (0x00039d85) list_single_2graphic_im_pane_g1_ParamLimits

0xf217,	// (0x00039d85) list_single_2graphic_im_pane_g1

0xf228,	// (0x00039d96) list_single_2graphic_im_pane_g2_ParamLimits

0xf228,	// (0x00039d96) list_single_2graphic_im_pane_g2

0xf234,	// (0x00039da2) list_single_2graphic_im_pane_g3_ParamLimits

0xf234,	// (0x00039da2) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x0003a7be) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x0003a7be) list_single_2graphic_im_pane_g

0xf248,	// (0x00039db6) list_single_2graphic_im_pane_t1_ParamLimits

0xf248,	// (0x00039db6) list_single_2graphic_im_pane_t1

0xd573,	// (0x000380e1) list_single_graphic_2heading_pane_fp_ParamLimits

0xd573,	// (0x000380e1) list_single_graphic_2heading_pane_fp

0x77ba,	// (0x00032328) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x77ba,	// (0x00032328) list_single_graphic_2heading_pane_fp_g1

0xd587,	// (0x000380f5) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd587,	// (0x000380f5) list_single_graphic_2heading_pane_fp_g2

0x83f6,	// (0x00032f64) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x83f6,	// (0x00032f64) list_single_graphic_2heading_pane_fp_g3

0x99e9,	// (0x00034557) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x99e9,	// (0x00034557) list_single_graphic_2heading_pane_fp_g4

0xd593,	// (0x00038101) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd593,	// (0x00038101) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003a6ec) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003a6ec) list_single_graphic_2heading_pane_fp_g

0x78ed,	// (0x0003245b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x78ed,	// (0x0003245b) list_single_graphic_2heading_pane_fp_t1

0x77f2,	// (0x00032360) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x77f2,	// (0x00032360) list_single_graphic_2heading_pane_fp_t2

0x7903,	// (0x00032471) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7903,	// (0x00032471) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x0003a7c7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x0003a7c7) list_single_graphic_2heading_pane_fp_t

0xd099,	// (0x00037c07) fep_hwr_write_pane_g5_ParamLimits

0xd099,	// (0x00037c07) fep_hwr_write_pane_g5

0xd0a5,	// (0x00037c13) fep_hwr_write_pane_g6_ParamLimits

0xd0a5,	// (0x00037c13) fep_hwr_write_pane_g6

0xe2ea,	// (0x00038e58) eswt_shell_pane_ParamLimits

0xb313,	// (0x00035e81) bg_popup_window_pane_cp18_ParamLimits

0xc365,	// (0x00036ed3) heading_pane_cp70

0xe3d9,	// (0x00038f47) popup_eswt_tasktip_window_t1_ParamLimits

0xde4c,	// (0x000389ba) aid_touch_tab_arrow_left

0xde58,	// (0x000389c6) aid_touch_tab_arrow_right

0xd7ea,	// (0x00038358) title_pane_g3_ParamLimits

0xd7ea,	// (0x00038358) title_pane_g3

0x847a,	// (0x00032fe8) set_value_pane_g1

0x918e,	// (0x00033cfc) popup_toolbar_trans_pane_ParamLimits

0xe410,	// (0x00038f7e) aid_size_cell_tb_trans_pane_ParamLimits

0x84aa,	// (0x00033018) bg_tb_trans_pane_ParamLimits

0xe422,	// (0x00038f90) grid_tb_trans_pane_ParamLimits

0x7f84,	// (0x00032af2) cont_note_pane_ParamLimits

0x7f84,	// (0x00032af2) cont_note_pane

0x8211,	// (0x00032d7f) cont_snote2_single_text_pane_ParamLimits

0x8211,	// (0x00032d7f) cont_snote2_single_text_pane

0x8211,	// (0x00032d7f) cont_snote2_single_graphic_pane_ParamLimits

0x8211,	// (0x00032d7f) cont_snote2_single_graphic_pane

0xb853,	// (0x000363c1) cont_note_wait_pane_ParamLimits

0xb853,	// (0x000363c1) cont_note_wait_pane

0xb853,	// (0x000363c1) cont_note_image_pane_ParamLimits

0xb853,	// (0x000363c1) cont_note_image_pane

0xe468,	// (0x00038fd6) popup_note2_window_g1_ParamLimits

0xe468,	// (0x00038fd6) popup_note2_window_g1

0xe499,	// (0x00039007) popup_note2_window_t1_ParamLimits

0xe499,	// (0x00039007) popup_note2_window_t1

0xe4de,	// (0x0003904c) popup_note2_window_t2_ParamLimits

0xe4de,	// (0x0003904c) popup_note2_window_t2

0xe523,	// (0x00039091) popup_note2_window_t3_ParamLimits

0xe523,	// (0x00039091) popup_note2_window_t3

0xe568,	// (0x000390d6) popup_note2_window_t4_ParamLimits

0xe568,	// (0x000390d6) popup_note2_window_t4

0x8008,	// (0x00032b76) popup_note2_window_t5_ParamLimits

0x8008,	// (0x00032b76) popup_note2_window_t5

0x0004,

0xfc65,	// (0x0003a7d3) popup_note2_window_t_ParamLimits

0xfc65,	// (0x0003a7d3) popup_note2_window_t

0xe597,	// (0x00039105) popup_note2_image_window_g1_ParamLimits

0xe597,	// (0x00039105) popup_note2_image_window_g1

0xe5a3,	// (0x00039111) popup_note2_image_window_g2_ParamLimits

0xe5a3,	// (0x00039111) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x0003a7de) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x0003a7de) popup_note2_image_window_g

0xe5b5,	// (0x00039123) popup_note2_image_window_t1_ParamLimits

0xe5b5,	// (0x00039123) popup_note2_image_window_t1

0xe5cd,	// (0x0003913b) popup_note2_image_window_t2_ParamLimits

0xe5cd,	// (0x0003913b) popup_note2_image_window_t2

0xe5e5,	// (0x00039153) popup_note2_image_window_t3_ParamLimits

0xe5e5,	// (0x00039153) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x0003a7e3) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x0003a7e3) popup_note2_image_window_t

0xb861,	// (0x000363cf) popup_note2_wait_window_g1_ParamLimits

0xb861,	// (0x000363cf) popup_note2_wait_window_g1

0xb86d,	// (0x000363db) popup_note2_wait_window_g2_ParamLimits

0xb86d,	// (0x000363db) popup_note2_wait_window_g2

0xb879,	// (0x000363e7) popup_note2_wait_window_g3_ParamLimits

0xb879,	// (0x000363e7) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x0003a3b6) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x0003a3b6) popup_note2_wait_window_g

0xe601,	// (0x0003916f) popup_note2_wait_window_t1_ParamLimits

0xe601,	// (0x0003916f) popup_note2_wait_window_t1

0xe61f,	// (0x0003918d) popup_note2_wait_window_t2_ParamLimits

0xe61f,	// (0x0003918d) popup_note2_wait_window_t2

0xe63d,	// (0x000391ab) popup_note2_wait_window_t3_ParamLimits

0xe63d,	// (0x000391ab) popup_note2_wait_window_t3

0xe64f,	// (0x000391bd) popup_note2_wait_window_t4_ParamLimits

0xe64f,	// (0x000391bd) popup_note2_wait_window_t4

0x0003,

0xfc7c,	// (0x0003a7ea) popup_note2_wait_window_t_ParamLimits

0xfc7c,	// (0x0003a7ea) popup_note2_wait_window_t

0xe661,	// (0x000391cf) wait_bar2_pane_ParamLimits

0xe661,	// (0x000391cf) wait_bar2_pane

0xe679,	// (0x000391e7) popup_snote2_single_text_window_g1_ParamLimits

0xe679,	// (0x000391e7) popup_snote2_single_text_window_g1

0xe6a1,	// (0x0003920f) popup_snote2_single_text_window_t1_ParamLimits

0xe6a1,	// (0x0003920f) popup_snote2_single_text_window_t1

0xe6ed,	// (0x0003925b) popup_snote2_single_text_window_t2_ParamLimits

0xe6ed,	// (0x0003925b) popup_snote2_single_text_window_t2

0xe739,	// (0x000392a7) popup_snote2_single_text_window_t3_ParamLimits

0xe739,	// (0x000392a7) popup_snote2_single_text_window_t3

0xe77a,	// (0x000392e8) popup_snote2_single_text_window_t4_ParamLimits

0xe77a,	// (0x000392e8) popup_snote2_single_text_window_t4

0xe7b0,	// (0x0003931e) popup_snote2_single_text_window_t5_ParamLimits

0xe7b0,	// (0x0003931e) popup_snote2_single_text_window_t5

0x0004,

0xfc85,	// (0x0003a7f3) popup_snote2_single_text_window_t_ParamLimits

0xfc85,	// (0x0003a7f3) popup_snote2_single_text_window_t

0xe7db,	// (0x00039349) popup_snote2_single_graphic_window_g1_ParamLimits

0xe7db,	// (0x00039349) popup_snote2_single_graphic_window_g1

0xe803,	// (0x00039371) popup_snote2_single_graphic_window_g2_ParamLimits

0xe803,	// (0x00039371) popup_snote2_single_graphic_window_g2

0x0001,

0xfc90,	// (0x0003a7fe) popup_snote2_single_graphic_window_g_ParamLimits

0xfc90,	// (0x0003a7fe) popup_snote2_single_graphic_window_g

0xe82b,	// (0x00039399) popup_snote2_single_graphic_window_t1_ParamLimits

0xe82b,	// (0x00039399) popup_snote2_single_graphic_window_t1

0xe877,	// (0x000393e5) popup_snote2_single_graphic_window_t2_ParamLimits

0xe877,	// (0x000393e5) popup_snote2_single_graphic_window_t2

0xe739,	// (0x000392a7) popup_snote2_single_graphic_window_t3_ParamLimits

0xe739,	// (0x000392a7) popup_snote2_single_graphic_window_t3

0xe77a,	// (0x000392e8) popup_snote2_single_graphic_window_t4_ParamLimits

0xe77a,	// (0x000392e8) popup_snote2_single_graphic_window_t4

0xe7b0,	// (0x0003931e) popup_snote2_single_graphic_window_t5_ParamLimits

0xe7b0,	// (0x0003931e) popup_snote2_single_graphic_window_t5

0x0004,

0xfc95,	// (0x0003a803) popup_snote2_single_graphic_window_t_ParamLimits

0xfc95,	// (0x0003a803) popup_snote2_single_graphic_window_t

0xcc7d,	// (0x000377eb) clock_nsta_pane_cp2_t1

0xcc7d,	// (0x000377eb) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0003a62a) clock_nsta_pane_cp2_t

0x716d,	// (0x00031cdb) form_field_data_wide_pane_g1_ParamLimits

0x841a,	// (0x00032f88) form_field_data_wide_pane_g2_ParamLimits

0x841a,	// (0x00032f88) form_field_data_wide_pane_g2

0x84c4,	// (0x00033032) form_field_data_wide_pane_g3_ParamLimits

0x84c4,	// (0x00033032) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0003a1ee) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0003a1ee) form_field_data_wide_pane_g

0xee85,	// (0x000399f3) grid_touch_3_pane_ParamLimits

0xee85,	// (0x000399f3) grid_touch_3_pane

0xf279,	// (0x00039de7) cell_touch_3_pane_ParamLimits

0xf279,	// (0x00039de7) cell_touch_3_pane

0xd010,	// (0x00037b7e) cell_touch_3_pane_g1

0xd010,	// (0x00037b7e) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0003a6af) cell_touch_3_pane_g

0x8060,	// (0x00032bce) cont_query_data_pane

0x8068,	// (0x00032bd6) cont_query_data_pane_cp1

0xe8c3,	// (0x00039431) button_value_adjust_pane_cp7

0xe8cb,	// (0x00039439) query_popup_pane_cp3

0xaaa9,	// (0x00035617) bg_popup_sub_pane_cp22_ParamLimits

0x89f4,	// (0x00033562) navi_navi_volume_pane_cp2

0x8a0c,	// (0x0003357a) popup_side_volume_key_window_g2

0x8a18,	// (0x00033586) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0003a284) popup_side_volume_key_window_g

0x8a32,	// (0x000335a0) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0003a28b) popup_side_volume_key_window_t

0xacf3,	// (0x00035861) popup_side_volume_key_window_ParamLimits

0x840e,	// (0x00032f7c) list_double_graphic_pane_g4_ParamLimits

0x840e,	// (0x00032f7c) list_double_graphic_pane_g4

0x751a,	// (0x00032088) list_single_2heading_msg_pane_ParamLimits

0x751a,	// (0x00032088) list_single_2heading_msg_pane

0x7921,	// (0x0003248f) list_single_2heading_msg_pane_g1_ParamLimits

0x7921,	// (0x0003248f) list_single_2heading_msg_pane_g1

0xad70,	// (0x000358de) list_single_2heading_msg_pane_g2_ParamLimits

0xad70,	// (0x000358de) list_single_2heading_msg_pane_g2

0x792d,	// (0x0003249b) list_single_2heading_msg_pane_g3_ParamLimits

0x792d,	// (0x0003249b) list_single_2heading_msg_pane_g3

0x7939,	// (0x000324a7) list_single_2heading_msg_pane_g4_ParamLimits

0x7939,	// (0x000324a7) list_single_2heading_msg_pane_g4

0x0003,

0xfca0,	// (0x0003a80e) list_single_2heading_msg_pane_g_ParamLimits

0xfca0,	// (0x0003a80e) list_single_2heading_msg_pane_g

0x7951,	// (0x000324bf) list_single_2heading_msg_pane_t1_ParamLimits

0x7951,	// (0x000324bf) list_single_2heading_msg_pane_t1

0x7979,	// (0x000324e7) list_single_2heading_msg_pane_t2_ParamLimits

0x7979,	// (0x000324e7) list_single_2heading_msg_pane_t2

0x79a8,	// (0x00032516) list_single_2heading_msg_pane_t3_ParamLimits

0x79a8,	// (0x00032516) list_single_2heading_msg_pane_t3

0x79e1,	// (0x0003254f) list_single_2heading_msg_pane_t4_ParamLimits

0x79e1,	// (0x0003254f) list_single_2heading_msg_pane_t4

0x0003,

0xfca9,	// (0x0003a817) list_single_2heading_msg_pane_t_ParamLimits

0xfca9,	// (0x0003a817) list_single_2heading_msg_pane_t

0x7d6d,	// (0x000328db) title_pane_g4_ParamLimits

0x7d6d,	// (0x000328db) title_pane_g4

0x87d7,	// (0x00033345) title_pane_stacon_g3_ParamLimits

0x87d7,	// (0x00033345) title_pane_stacon_g3

0xe45c,	// (0x00038fca) list_single_2graphic_im_pane_g4_ParamLimits

0xe45c,	// (0x00038fca) list_single_2graphic_im_pane_g4

0xc18f,	// (0x00036cfd) popup_side_volume_key_window_cp

0xc5e1,	// (0x0003714f) main_idle_act2_pane_t1

0x9259,	// (0x00033dc7) toolbar_button_pane_g10

0xda6e,	// (0x000385dc) popup_toolbar_window_cp1

0xcc6e,	// (0x000377dc) clock_nsta_pane_cp_t1

0xcc6e,	// (0x000377dc) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0003a625) clock_nsta_pane_cp_t

0x89f4,	// (0x00033562) navi_navi_volume_pane_cp2_ParamLimits

0x8a00,	// (0x0003356e) popup_side_volume_key_window_g1_ParamLimits

0x8a0c,	// (0x0003357a) popup_side_volume_key_window_g2_ParamLimits

0x8a18,	// (0x00033586) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0003a284) popup_side_volume_key_window_g_ParamLimits

0x97ac,	// (0x0003431a) fep_hwr_aid_pane

0x38cd,	// (0x0002e43b) bg_fep_hwr_top_pane_g4_ParamLimits

0xd069,	// (0x00037bd7) fep_hwr_top_pane_g1_ParamLimits

0xd07b,	// (0x00037be9) fep_hwr_top_pane_g2_ParamLimits

0x985f,	// (0x000343cd) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0003a67a) fep_hwr_top_pane_g_ParamLimits

0x9874,	// (0x000343e2) fep_hwr_top_text_pane_ParamLimits

0xbf5a,	// (0x00036ac8) aid_touch_tab_arrow_arrow_2

0xbf63,	// (0x00036ad1) aid_touch_tab_arrow_left_2

0x97c0,	// (0x0003432e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x97f3,	// (0x00034361) fep_hwr_prediction_pane

0xd1ae,	// (0x00037d1c) fep_vkb_prediction_pane

0xf008,	// (0x00039b76) fep_vkb_side_pane_g3_ParamLimits

0xf008,	// (0x00039b76) fep_vkb_side_pane_g3

0xd23c,	// (0x00037daa) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xd5e7,	// (0x00038155) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xd5f4,	// (0x00038162) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0003a724) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xe8dc,	// (0x0003944a) fep_hwr_prediction_pane_g1

0x9b77,	// (0x000346e5) fep_hwr_prediction_pane_g2

0x9b7f,	// (0x000346ed) fep_hwr_prediction_pane_g3

0x9b87,	// (0x000346f5) fep_hwr_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0003a820) fep_hwr_prediction_pane_g

0xe8dc,	// (0x0003944a) fep_vkb_prediction_pane_g1

0xe8e6,	// (0x00039454) fep_vkb_prediction_pane_g2

0xe8ee,	// (0x0003945c) fep_vkb_prediction_pane_g3

0xe8f6,	// (0x00039464) fep_vkb_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0003a829) fep_vkb_prediction_pane_g

0x951f,	// (0x0003408d) slider_set_pane_g3

0x9533,	// (0x000340a1) slider_set_pane_g4

0x954b,	// (0x000340b9) slider_set_pane_g5

0x951f,	// (0x0003408d) slider_set_pane_g6

0x9561,	// (0x000340cf) slider_set_pane_g7

0xc3e4,	// (0x00036f52) slider_form_pane_g3

0xc3ed,	// (0x00036f5b) slider_form_pane_g4

0xc3f5,	// (0x00036f63) slider_form_pane_g5

0xc3e4,	// (0x00036f52) slider_form_pane_g6

0xed16,	// (0x00039884) slider_form_pane_g7

0xc82a,	// (0x00037398) slider_set_pane_vc_g3

0xc833,	// (0x000373a1) slider_set_pane_vc_g4

0xc83c,	// (0x000373aa) slider_set_pane_vc_g5

0xc82a,	// (0x00037398) slider_set_pane_vc_g6

0xc845,	// (0x000373b3) slider_set_pane_vc_g7

0xc82a,	// (0x00037398) slider_form_pane_vc_g1

0xc833,	// (0x000373a1) slider_form_pane_vc_g2

0xc83c,	// (0x000373aa) slider_form_pane_vc_g3

0xc82a,	// (0x00037398) slider_form_pane_vc_g4

0xc9b9,	// (0x00037527) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0003a5f7) slider_form_pane_vc_g

0x7a54,	// (0x000325c2) main_idle_act3_pane

0xe8fe,	// (0x0003946c) ai3_links_pane

0xf2ba,	// (0x00039e28) popup_ai3_data_window_ParamLimits

0xf2ba,	// (0x00039e28) popup_ai3_data_window

0x7a54,	// (0x000325c2) grid_ai3_links_pane

0xf2d2,	// (0x00039e40) cell_ai3_links_pane_ParamLimits

0xf2d2,	// (0x00039e40) cell_ai3_links_pane

0xe907,	// (0x00039475) bg_popup_sub_pane_cp11

0xe914,	// (0x00039482) cell_ai3_links_pane_g1

0x7a54,	// (0x000325c2) bg_popup_sub_pane_cp12

0xe939,	// (0x000394a7) heading_ai3_data_pane

0xe941,	// (0x000394af) list_ai3_gene_pane

0xe94d,	// (0x000394bb) popup_ai3_data_window_g1

0xe955,	// (0x000394c3) heading_ai3_data_pane_g1

0xe95d,	// (0x000394cb) heading_ai3_data_pane_t1

0xe96b,	// (0x000394d9) list_double_ai3_gene_pane_ParamLimits

0xe96b,	// (0x000394d9) list_double_ai3_gene_pane

0xe978,	// (0x000394e6) list_single_ai3_gene_pane_ParamLimits

0xe978,	// (0x000394e6) list_single_ai3_gene_pane

0xcfd5,	// (0x00037b43) list_highlight_pane_cp7_ParamLimits

0xcfd5,	// (0x00037b43) list_highlight_pane_cp7

0xe985,	// (0x000394f3) list_single_a13_gene_pane_t1_ParamLimits

0xe985,	// (0x000394f3) list_single_a13_gene_pane_t1

0xe99c,	// (0x0003950a) list_single_ai3_gene_pane_g1

0xe9a5,	// (0x00039513) list_single_ai3_gene_pane_g2

0x0001,

0xfcc4,	// (0x0003a832) list_single_ai3_gene_pane_g

0xe9ad,	// (0x0003951b) list_double_ai3_gene_pane_g1_ParamLimits

0xe9ad,	// (0x0003951b) list_double_ai3_gene_pane_g1

0xe9b9,	// (0x00039527) list_double_ai3_gene_pane_t1_ParamLimits

0xe9b9,	// (0x00039527) list_double_ai3_gene_pane_t1

0xe9d5,	// (0x00039543) list_double_ai3_gene_pane_t2_ParamLimits

0xe9d5,	// (0x00039543) list_double_ai3_gene_pane_t2

0xe9ea,	// (0x00039558) list_double_ai3_gene_pane_t3_ParamLimits

0xe9ea,	// (0x00039558) list_double_ai3_gene_pane_t3

0x0002,

0xfcc9,	// (0x0003a837) list_double_ai3_gene_pane_t_ParamLimits

0xfcc9,	// (0x0003a837) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7919,	// (0x00032487) aid_size_min_col_2

0xf2a6,	// (0x00039e14) aid_size_min_msg_ParamLimits

0xf2a6,	// (0x00039e14) aid_size_min_msg

0xf01c,	// (0x00039b8a) fep_vkb_top_text_pane_g2_ParamLimits

0xf01c,	// (0x00039b8a) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0003a6aa) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0003a6aa) fep_vkb_top_text_pane_g

0x7a54,	// (0x000325c2) main_hc_apps_shell_pane

0xea07,	// (0x00039575) grid_hc_apps_pane_ParamLimits

0xea07,	// (0x00039575) grid_hc_apps_pane

0xea16,	// (0x00039584) list_hc_apps_pane

0xea1e,	// (0x0003958c) scroll_pane_cp37_ParamLimits

0xea1e,	// (0x0003958c) scroll_pane_cp37

0xf2e6,	// (0x00039e54) cell_hc_apps_pane_ParamLimits

0xf2e6,	// (0x00039e54) cell_hc_apps_pane

0xf374,	// (0x00039ee2) cell_hc_apps_pane_g1_ParamLimits

0xf374,	// (0x00039ee2) cell_hc_apps_pane_g1

0xea2a,	// (0x00039598) cell_hc_apps_pane_g2_ParamLimits

0xea2a,	// (0x00039598) cell_hc_apps_pane_g2

0xea46,	// (0x000395b4) cell_hc_apps_pane_g3_ParamLimits

0xea46,	// (0x000395b4) cell_hc_apps_pane_g3

0x0002,

0xfcd0,	// (0x0003a83e) cell_hc_apps_pane_g_ParamLimits

0xfcd0,	// (0x0003a83e) cell_hc_apps_pane_g

0xf3a1,	// (0x00039f0f) cell_hc_apps_pane_t1_ParamLimits

0xf3a1,	// (0x00039f0f) cell_hc_apps_pane_t1

0x7f84,	// (0x00032af2) grid_highlight_pane_cp10_ParamLimits

0x7f84,	// (0x00032af2) grid_highlight_pane_cp10

0xf3df,	// (0x00039f4d) list_single_hc_apps_pane_ParamLimits

0xf3df,	// (0x00039f4d) list_single_hc_apps_pane

0xf40f,	// (0x00039f7d) list_single_hc_apps_pane_g1

0x9b8f,	// (0x000346fd) list_single_hc_apps_pane_g2

0x0001,

0xfcd7,	// (0x0003a845) list_single_hc_apps_pane_g

0x9ba8,	// (0x00034716) list_single_hc_apps_pane_g2_copy1

0x7a06,	// (0x00032574) list_single_hc_apps_pane_t1

0x7db1,	// (0x0003291f) bg_set_opt_pane_cp_ParamLimits

0x7dcf,	// (0x0003293d) setting_slider_pane_t1_ParamLimits

0x7de5,	// (0x00032953) setting_slider_pane_t2_ParamLimits

0x7dfe,	// (0x0003296c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003a0cc) setting_slider_pane_t_ParamLimits

0x7e15,	// (0x00032983) slider_set_pane_ParamLimits

0x8c84,	// (0x000337f2) control_pane_g5_ParamLimits

0x8c84,	// (0x000337f2) control_pane_g5

0xc3ac,	// (0x00036f1a) slider_set_pane_g1_ParamLimits

0x9513,	// (0x00034081) slider_set_pane_g2_ParamLimits

0x951f,	// (0x0003408d) slider_set_pane_g3_ParamLimits

0x9533,	// (0x000340a1) slider_set_pane_g4_ParamLimits

0x954b,	// (0x000340b9) slider_set_pane_g5_ParamLimits

0x951f,	// (0x0003408d) slider_set_pane_g6_ParamLimits

0x9561,	// (0x000340cf) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003a4d2) slider_set_pane_g_ParamLimits

0x7db1,	// (0x0003291f) navi_icon_text_pane_ParamLimits

0xde26,	// (0x00038994) aid_fill_nsta_2_ParamLimits

0xde4c,	// (0x000389ba) aid_touch_tab_arrow_left_ParamLimits

0xde58,	// (0x000389c6) aid_touch_tab_arrow_right_ParamLimits

0xdec2,	// (0x00038a30) clock_nsta_pane_ParamLimits

0xbf3c,	// (0x00036aaa) navi_icon_pane_g1_ParamLimits

0xbf48,	// (0x00036ab6) navi_text_pane_t1_ParamLimits

0xccbe,	// (0x0003782c) navi_icon_text_pane_g1_ParamLimits

0xccca,	// (0x00037838) navi_icon_text_pane_t1_ParamLimits

0xf40f,	// (0x00039f7d) list_single_hc_apps_pane_g1_ParamLimits

0x9b8f,	// (0x000346fd) list_single_hc_apps_pane_g2_ParamLimits

0xfcd7,	// (0x0003a845) list_single_hc_apps_pane_g_ParamLimits

0x9ba8,	// (0x00034716) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7a06,	// (0x00032574) list_single_hc_apps_pane_t1_ParamLimits

0x7ca7,	// (0x00032815) popup_toolbar2_fixed_window_ParamLimits

0x7ca7,	// (0x00032815) popup_toolbar2_fixed_window

0x9186,	// (0x00033cf4) popup_toolbar2_float_window

0x7a54,	// (0x000325c2) bg_popup_sub_pane_cp27

0xea68,	// (0x000395d6) grid_toolbar2_float_pane

0x7a54,	// (0x000325c2) bg_popup_sub_pane_cp26

0xea68,	// (0x000395d6) grid_toolbar2_fixed_pane

0xf428,	// (0x00039f96) cell_toolbar2_fixed_pane_ParamLimits

0xf428,	// (0x00039f96) cell_toolbar2_fixed_pane

0xf439,	// (0x00039fa7) cell_toolbar2_fixed_pane_g1

0xea70,	// (0x000395de) toolbar2_fixed_button_pane

0xb293,	// (0x00035e01) toolbar2_fixed_button_pane_g1

0xb29b,	// (0x00035e09) toolbar2_fixed_button_pane_g2

0xb2a3,	// (0x00035e11) toolbar2_fixed_button_pane_g3

0xb2ab,	// (0x00035e19) toolbar2_fixed_button_pane_g4

0xb2b3,	// (0x00035e21) toolbar2_fixed_button_pane_g5

0xb2bb,	// (0x00035e29) toolbar2_fixed_button_pane_g6

0xb2c3,	// (0x00035e31) toolbar2_fixed_button_pane_g7

0xb2cb,	// (0x00035e39) toolbar2_fixed_button_pane_g8

0xb2d3,	// (0x00035e41) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0003a3d4) toolbar2_fixed_button_pane_g

0xea78,	// (0x000395e6) cell_toolbar2_float_pane_ParamLimits

0xea78,	// (0x000395e6) cell_toolbar2_float_pane

0xea89,	// (0x000395f7) cell_toolbar2_float_pane_g1

0xea70,	// (0x000395de) toolbar2_fixed_button_pane_cp

0xefd5,	// (0x00039b43) fep_vkb_accented_list_pane_ParamLimits

0xefd5,	// (0x00039b43) fep_vkb_accented_list_pane

0x99b6,	// (0x00034524) bg_popup_fep_shadow_pane_g9

0xaefb,	// (0x00035a69) bg_popup_fep_shadow_pane_cp3

0x85d4,	// (0x00033142) list_accented_list_pane

0xea92,	// (0x00039600) list_single_accented_list_pane_ParamLimits

0xea92,	// (0x00039600) list_single_accented_list_pane

0xaefb,	// (0x00035a69) list_highlight_pane_cp10

0xeaa3,	// (0x00039611) list_single_accented_list_pane_t1

0x90ec,	// (0x00033c5a) popup_slider_window_ParamLimits

0x90ec,	// (0x00033c5a) popup_slider_window

0xe8d3,	// (0x00039441) aid_indentation_list_msg

0xf4d4,	// (0x0003a042) bg_popup_window_pane_cp19

0xeb09,	// (0x00039677) popup_slider_window_g1

0xeb25,	// (0x00039693) popup_slider_window_g2

0xeb41,	// (0x000396af) popup_slider_window_g3

0x0005,

0xfcdc,	// (0x0003a84a) popup_slider_window_g

0xeb5d,	// (0x000396cb) popup_slider_window_t1

0xeba1,	// (0x0003970f) small_volume_slider_vertical_pane

0xd010,	// (0x00037b7e) small_volume_slider_vertical_pane_g1

0xd010,	// (0x00037b7e) small_volume_slider_vertical_pane_g2

0xebbd,	// (0x0003972b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcee,	// (0x0003a85c) small_volume_slider_vertical_pane_g

0x7aa3,	// (0x00032611) area_side_right_pane_ParamLimits

0x7aa3,	// (0x00032611) area_side_right_pane

0x9bc4,	// (0x00034732) aid_size_side_button_ParamLimits

0x9bc4,	// (0x00034732) aid_size_side_button

0x9bd8,	// (0x00034746) grid_sctrl_middle_pane_ParamLimits

0x9bd8,	// (0x00034746) grid_sctrl_middle_pane

0x9bf4,	// (0x00034762) sctrl_sk_bottom_pane

0x9c05,	// (0x00034773) sctrl_sk_top_pane

0x9c17,	// (0x00034785) aid_touch_sctrl_top

0x7f84,	// (0x00032af2) bg_sctrl_sk_pane_ParamLimits

0x7f84,	// (0x00032af2) bg_sctrl_sk_pane

0x9c24,	// (0x00034792) sctrl_sk_top_pane_g1

0x9c31,	// (0x0003479f) sctrl_sk_top_pane_t1

0x9c17,	// (0x00034785) aid_touch_sctrl_bottom

0x7f84,	// (0x00032af2) bg_sctrl_sk_pane_cp_ParamLimits

0x7f84,	// (0x00032af2) bg_sctrl_sk_pane_cp

0x9c4c,	// (0x000347ba) sctrl_sk_bottom_pane_g1

0x9c31,	// (0x0003479f) sctrl_sk_bottom_pane_t1

0x9c55,	// (0x000347c3) cell_sctrl_middle_pane_ParamLimits

0x9c55,	// (0x000347c3) cell_sctrl_middle_pane

0x9c70,	// (0x000347de) aid_touch_sctrl_middle_ParamLimits

0x9c70,	// (0x000347de) aid_touch_sctrl_middle

0x84aa,	// (0x00033018) bg_sctrl_middle_pane_ParamLimits

0x84aa,	// (0x00033018) bg_sctrl_middle_pane

0xd23c,	// (0x00037daa) cell_sctrl_middle_pane_g1_ParamLimits

0xd23c,	// (0x00037daa) cell_sctrl_middle_pane_g1

0x9c81,	// (0x000347ef) cell_sctrl_middle_pane_g2_ParamLimits

0x9c81,	// (0x000347ef) cell_sctrl_middle_pane_g2

0x0001,

0xfcfa,	// (0x0003a868) cell_sctrl_middle_pane_g_ParamLimits

0xfcfa,	// (0x0003a868) cell_sctrl_middle_pane_g

0xb293,	// (0x00035e01) bg_sctrl_middle_pane_g1

0xb29b,	// (0x00035e09) bg_sctrl_middle_pane_g2

0xb2a3,	// (0x00035e11) bg_sctrl_middle_pane_g3

0xb2ab,	// (0x00035e19) bg_sctrl_middle_pane_g4

0xb2b3,	// (0x00035e21) bg_sctrl_middle_pane_g5

0xb2bb,	// (0x00035e29) bg_sctrl_middle_pane_g6

0xb2c3,	// (0x00035e31) bg_sctrl_middle_pane_g7

0xb2cb,	// (0x00035e39) bg_sctrl_middle_pane_g8

0x0007,

0xfcff,	// (0x0003a86d) bg_sctrl_middle_pane_g

0xb2d3,	// (0x00035e41) bg_sctrl_middle_pane_g8_copy1

0xb293,	// (0x00035e01) bg_sctrl_sk_pane_g1

0xb29b,	// (0x00035e09) bg_sctrl_sk_pane_g2

0xb2a3,	// (0x00035e11) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0003a3d4) bg_sctrl_sk_pane_g

0x8333,	// (0x00032ea1) aid_size_touch_scroll_bar

0xb2ab,	// (0x00035e19) bg_sctrl_sk_pane_g4

0xb2b3,	// (0x00035e21) bg_sctrl_sk_pane_g5

0xb2bb,	// (0x00035e29) bg_sctrl_sk_pane_g6

0xb2c3,	// (0x00035e31) bg_sctrl_sk_pane_g7

0xb2cb,	// (0x00035e39) bg_sctrl_sk_pane_g8

0xb2d3,	// (0x00035e41) bg_sctrl_sk_pane_g9

0x8e22,	// (0x00033990) popup_fep_china_hwr2_fs_candidate_window

0x8e2a,	// (0x00033998) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8e2a,	// (0x00033998) popup_fep_china_hwr2_fs_control_window

0xd23c,	// (0x00037daa) sctrl_sk_top_pane_g2

0x0001,

0xfcf5,	// (0x0003a863) sctrl_sk_top_pane_g

0x18aa,	// (0x0002c418) aid_fep_china_hwr2_fs_cell_ParamLimits

0x18aa,	// (0x0002c418) aid_fep_china_hwr2_fs_cell

0x18bb,	// (0x0002c429) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x18bb,	// (0x0002c429) bg_popup_fep_shadow_pane_cp4

0x18d2,	// (0x0002c440) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x18d2,	// (0x0002c440) bg_popup_fep_shadow_pane_cp5

0x18e4,	// (0x0002c452) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x18e4,	// (0x0002c452) popup_fep_china_hwr2_fs_control_bar_grid

0x18f4,	// (0x0002c462) popup_fep_china_hwr2_fs_control_funtion_grid

0x0c27,	// (0x0002b795) aid_fep_china_hwr2_fs_candi_cell

0x7a54,	// (0x000325c2) bg_popup_fep_shadow_pane_cp6

0x0c31,	// (0x0002b79f) popup_fep_china_hwr2_fs_candidate_grid

0x18fc,	// (0x0002c46a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x18fc,	// (0x0002c46a) cell_fep_china_hwr2_fs_funtion_grid

0xd010,	// (0x00037b7e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x0c39,	// (0x0002b7a7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x0c39,	// (0x0002b7a7) cell_fep_china_hwr2_fs_funtion_grid_g1

0x0c47,	// (0x0002b7b5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x0c47,	// (0x0002b7b5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd10,	// (0x0003a87e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd10,	// (0x0003a87e) cell_fep_china_hwr2_fs_funtion_grid_g

0x1914,	// (0x0002c482) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x1914,	// (0x0002c482) cell_fep_china_hwr2_fs_funtion_grid_t1

0x1929,	// (0x0002c497) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x1929,	// (0x0002c497) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd15,	// (0x0003a883) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd15,	// (0x0003a883) cell_fep_china_hwr2_fs_funtion_grid_t

0x0c5d,	// (0x0002b7cb) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x0c65,	// (0x0002b7d3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x0c6d,	// (0x0002b7db) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1a,	// (0x0003a888) popup_fep_china_hwr2_fs_control_bar_grid_g

0x0c75,	// (0x0002b7e3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x0c75,	// (0x0002b7e3) cell_fep_china_hwr2_fs_candidate_grid

0x0c8e,	// (0x0002b7fc) popup_fep_china_hwr2_fs_candidate_grid_g20

0x0c96,	// (0x0002b804) popup_fep_china_hwr2_fs_candidate_grid_g21

0xd010,	// (0x00037b7e) cell_fep_china_hwr2_fs_candidate_grid_g1

0xd010,	// (0x00037b7e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0003a6af) cell_fep_china_hwr2_fs_candidate_grid_g

0x0c9e,	// (0x0002b80c) cell_fep_china_hwr2_fs_candidate_grid_t1

0xb0ec,	// (0x00035c5a) clock_nsta_pane_cp_24_ParamLimits

0xb0ec,	// (0x00035c5a) clock_nsta_pane_cp_24

0xb149,	// (0x00035cb7) indicator_nsta_pane_cp_24_ParamLimits

0xb149,	// (0x00035cb7) indicator_nsta_pane_cp_24

0xbe47,	// (0x000369b5) heading_pane_g1

0x0001,

0xf8cb,	// (0x0003a439) heading_pane_g

0xedd4,	// (0x00039942) grid_sct_catagory_button_pane

0xc4b3,	// (0x00037021) scroll_pane_cp5_ParamLimits

0xccf0,	// (0x0003785e) button_value_adjust_pane_cp5_ParamLimits

0xccf0,	// (0x0003785e) button_value_adjust_pane_cp5

0xcdae,	// (0x0003791c) form2_midp_time_pane_ParamLimits

0x0cac,	// (0x0002b81a) cell_sct_catagory_button_pane_ParamLimits

0x0cac,	// (0x0002b81a) cell_sct_catagory_button_pane

0xcfd5,	// (0x00037b43) bg_button_pane_cp01_ParamLimits

0xcfd5,	// (0x00037b43) bg_button_pane_cp01

0xd010,	// (0x00037b7e) cell_sct_catagory_button_pane_g1

0x9123,	// (0x00033c91) popup_tb_extension_window

0x1945,	// (0x0002c4b3) aid_size_cell_ext_ParamLimits

0x1945,	// (0x0002c4b3) aid_size_cell_ext

0x7f84,	// (0x00032af2) bg_tb_trans_pane_cp1_ParamLimits

0x7f84,	// (0x00032af2) bg_tb_trans_pane_cp1

0x1965,	// (0x0002c4d3) grid_tb_ext_pane_ParamLimits

0x1965,	// (0x0002c4d3) grid_tb_ext_pane

0x198b,	// (0x0002c4f9) cell_tb_ext_pane_ParamLimits

0x198b,	// (0x0002c4f9) cell_tb_ext_pane

0x19a0,	// (0x0002c50e) cell_tb_ext_pane_g1_ParamLimits

0x19a0,	// (0x0002c50e) cell_tb_ext_pane_g1

0x0cbe,	// (0x0002b82c) cell_tb_ext_pane_t1

0x7f84,	// (0x00032af2) list_highlight_pane_cp11_ParamLimits

0x7f84,	// (0x00032af2) list_highlight_pane_cp11

0x7cc6,	// (0x00032834) popup_uni_indicator_window_ParamLimits

0x7cc6,	// (0x00032834) popup_uni_indicator_window

0x84aa,	// (0x00033018) bg_popup_sub_pane_cp14

0x0cd9,	// (0x0002b847) list_uniindi_pane

0x0ce5,	// (0x0002b853) uniindi_top_pane

0x7f84,	// (0x00032af2) bg_uniindi_top_pane

0x0d04,	// (0x0002b872) uniindi_top_pane_g1

0x0d1a,	// (0x0002b888) uniindi_top_pane_g2

0x0003,

0xfd21,	// (0x0003a88f) uniindi_top_pane_g

0x0d44,	// (0x0002b8b2) uniindi_top_pane_t1

0x0d6e,	// (0x0002b8dc) list_single_uniindi_pane_ParamLimits

0x0d6e,	// (0x0002b8dc) list_single_uniindi_pane

0xd010,	// (0x00037b7e) bg_uniindi_top_pane_g1

0x0d80,	// (0x0002b8ee) list_single_uniindi_pane_g1

0x0d93,	// (0x0002b901) list_single_uniindi_pane_t1

0x7a54,	// (0x000325c2) control_bg_pane

0x0db8,	// (0x0002b926) bg_sctrl_sk_pane_cp1

0x0dc1,	// (0x0002b92f) bg_sctrl_sk_pane_cp2

0x0dca,	// (0x0002b938) control_bg_pane_g1

0x0dd3,	// (0x0002b941) control_bg_pane_g2

0x0001,

0xfd2a,	// (0x0003a898) control_bg_pane_g

0xcc16,	// (0x00037784) cell_indicator_nsta_pane_g1_ParamLimits

0xeec2,	// (0x00039a30) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0003a613) cell_indicator_nsta_pane_g_ParamLimits

0x7790,	// (0x000322fe) form2_midp_time_pane_t1_ParamLimits

0x8211,	// (0x00032d7f) main_idle_act4_pane_ParamLimits

0x8211,	// (0x00032d7f) main_idle_act4_pane

0x9123,	// (0x00033c91) popup_tb_extension_window_ParamLimits

0x197f,	// (0x0002c4ed) tb_ext_find_pane_ParamLimits

0x197f,	// (0x0002c4ed) tb_ext_find_pane

0x0ddc,	// (0x0002b94a) ai_gene_pane_1_cp1

0xaf8f,	// (0x00035afd) ai_gene_pane_2_cp1

0x0de4,	// (0x0002b952) list_single_idle_plugin_calendar_pane

0x0ded,	// (0x0002b95b) list_single_idle_plugin_notification_pane

0x0df6,	// (0x0002b964) list_single_idle_plugin_player_pane

0x19bd,	// (0x0002c52b) list_single_idle_plugin_shortcut_pane_ParamLimits

0x19bd,	// (0x0002c52b) list_single_idle_plugin_shortcut_pane

0x19df,	// (0x0002c54d) main_idle_act4_pane_t1

0x19f1,	// (0x0002c55f) main_idle_act4_pane_t2

0x0001,

0xfd2f,	// (0x0003a89d) main_idle_act4_pane_t

0x1a03,	// (0x0002c571) middle_sk_idle_act4_pane_ParamLimits

0x1a03,	// (0x0002c571) middle_sk_idle_act4_pane

0x1a19,	// (0x0002c587) popup_clock_digital_analogue_window_cp2

0x1a33,	// (0x0002c5a1) shortcut_wheel_idle_act4_pane_ParamLimits

0x1a33,	// (0x0002c5a1) shortcut_wheel_idle_act4_pane

0xd010,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g1

0xd010,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g2

0xd010,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g3

0xd010,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g4

0xd010,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g5

0x0dff,	// (0x0002b96d) shortcut_wheel_idle_act4_pane_g6

0x0e07,	// (0x0002b975) shortcut_wheel_idle_act4_pane_g7

0x0e0f,	// (0x0002b97d) shortcut_wheel_idle_act4_pane_g8

0x0e17,	// (0x0002b985) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd34,	// (0x0003a8a2) shortcut_wheel_idle_act4_pane_g

0xd23c,	// (0x00037daa) middle_sk_idle_act4_pane_g1_ParamLimits

0xd23c,	// (0x00037daa) middle_sk_idle_act4_pane_g1

0x1aa3,	// (0x0002c611) middle_sk_idle_act4_pane_g2_ParamLimits

0x1aa3,	// (0x0002c611) middle_sk_idle_act4_pane_g2

0x0001,

0xfd57,	// (0x0003a8c5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd57,	// (0x0003a8c5) middle_sk_idle_act4_pane_g

0x1aaf,	// (0x0002c61d) middle_sk_idle_act4_pane_t1_ParamLimits

0x1aaf,	// (0x0002c61d) middle_sk_idle_act4_pane_t1

0x1acc,	// (0x0002c63a) grid_ai_shortcut_pane_ParamLimits

0x1acc,	// (0x0002c63a) grid_ai_shortcut_pane

0x1ae5,	// (0x0002c653) list_highlight_pane_cp16_ParamLimits

0x1ae5,	// (0x0002c653) list_highlight_pane_cp16

0x1af2,	// (0x0002c660) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x1af2,	// (0x0002c660) list_single_idle_plugin_shortcut_pane_g1

0x1afe,	// (0x0002c66c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x1afe,	// (0x0002c66c) list_single_idle_plugin_shortcut_pane_g2

0x1b16,	// (0x0002c684) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x1b16,	// (0x0002c684) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5c,	// (0x0003a8ca) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5c,	// (0x0003a8ca) list_single_idle_plugin_shortcut_pane_g

0x1b29,	// (0x0002c697) cell_ai_shortcut_pane_ParamLimits

0x1b29,	// (0x0002c697) cell_ai_shortcut_pane

0x1b4a,	// (0x0002c6b8) cell_ai_shortcut_pane_g1_ParamLimits

0x1b4a,	// (0x0002c6b8) cell_ai_shortcut_pane_g1

0x0ddc,	// (0x0002b94a) ai_gene_pane_1_cp2

0x0e1f,	// (0x0002b98d) ai_gene_pane_2_cp2

0x0e27,	// (0x0002b995) list_highlight_pane_cp15

0x0e30,	// (0x0002b99e) list_single_idle_plugin_calendar_pane_g1

0x0e27,	// (0x0002b995) list_highlight_pane_cp17

0x0e38,	// (0x0002b9a6) list_single_idle_plugin_calendar_pane_g1_copy1

0x0e40,	// (0x0002b9ae) list_single_idle_plugin_player_pane_g1

0xc66d,	// (0x000371db) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd63,	// (0x0003a8d1) list_single_idle_plugin_player_pane_g

0x0e48,	// (0x0002b9b6) list_single_idle_plugin_player_pane_t1

0x0e56,	// (0x0002b9c4) list_single_idle_plugin_player_pane_t2

0x0e64,	// (0x0002b9d2) list_single_idle_plugin_player_pane_t3

0x0e72,	// (0x0002b9e0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd68,	// (0x0003a8d6) list_single_idle_plugin_player_pane_t

0x0e80,	// (0x0002b9ee) wait_bar_pane_cp15

0x0e88,	// (0x0002b9f6) grid_ai_notification_pane

0xc66d,	// (0x000371db) list_single_idle_plugin_notification_pane_g1

0x1b6c,	// (0x0002c6da) cell_ai_notification_pane_ParamLimits

0x1b6c,	// (0x0002c6da) cell_ai_notification_pane

0x0e91,	// (0x0002b9ff) cell_ai_notification_pane_g1

0x0e99,	// (0x0002ba07) cell_ai_notification_pane_t1

0x1b79,	// (0x0002c6e7) tb_ext_find_button_pane

0x1b81,	// (0x0002c6ef) tb_ext_find_pane_g1

0x1b89,	// (0x0002c6f7) tb_ext_find_pane_t1

0xaa69,	// (0x000355d7) tb_ext_find_button_pane_g1

0x0ea7,	// (0x0002ba15) tb_ext_find_button_pane_g2

0x0001,

0xfd71,	// (0x0003a8df) tb_ext_find_button_pane_g

0x19df,	// (0x0002c54d) main_idle_act4_pane_t1_ParamLimits

0x19f1,	// (0x0002c55f) main_idle_act4_pane_t2_ParamLimits

0xfd2f,	// (0x0003a89d) main_idle_act4_pane_t_ParamLimits

0x1a19,	// (0x0002c587) popup_clock_digital_analogue_window_cp2_ParamLimits

0x1a27,	// (0x0002c595) sat_plugin_idle_act4_pane_ParamLimits

0x1a27,	// (0x0002c595) sat_plugin_idle_act4_pane

0x1b97,	// (0x0002c705) sat_plugin_idle_act4_pane_t1_ParamLimits

0x1b97,	// (0x0002c705) sat_plugin_idle_act4_pane_t1

0x1baa,	// (0x0002c718) sat_plugin_idle_act4_pane_t2_ParamLimits

0x1baa,	// (0x0002c718) sat_plugin_idle_act4_pane_t2

0x1bbd,	// (0x0002c72b) sat_plugin_idle_act4_pane_t3_ParamLimits

0x1bbd,	// (0x0002c72b) sat_plugin_idle_act4_pane_t3

0x1bd0,	// (0x0002c73e) sat_plugin_idle_act4_pane_t4_ParamLimits

0x1bd0,	// (0x0002c73e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd76,	// (0x0003a8e4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd76,	// (0x0003a8e4) sat_plugin_idle_act4_pane_t

0x7c27,	// (0x00032795) popup_battery_window_ParamLimits

0x7c27,	// (0x00032795) popup_battery_window

0x7f84,	// (0x00032af2) bg_popup_sub_pane_cp25_ParamLimits

0x7f84,	// (0x00032af2) bg_popup_sub_pane_cp25

0x0eb0,	// (0x0002ba1e) popup_battery_window_g1_ParamLimits

0x0eb0,	// (0x0002ba1e) popup_battery_window_g1

0x0ebc,	// (0x0002ba2a) popup_battery_window_t1_ParamLimits

0x0ebc,	// (0x0002ba2a) popup_battery_window_t1

0x0ece,	// (0x0002ba3c) popup_battery_window_t2_ParamLimits

0x0ece,	// (0x0002ba3c) popup_battery_window_t2

0x0001,

0xfd7f,	// (0x0003a8ed) popup_battery_window_t_ParamLimits

0xfd7f,	// (0x0003a8ed) popup_battery_window_t

0xdcbf,	// (0x0003882d) midp_canvas_pane_ParamLimits

0xdd1b,	// (0x00038889) midp_keypad_pane_ParamLimits

0xdd1b,	// (0x00038889) midp_keypad_pane

0x8d9a,	// (0x00033908) main_midp_pane_ParamLimits

0xcc8c,	// (0x000377fa) signal_pane_g2_cp_ParamLimits

0x1be3,	// (0x0002c751) aid_size_cell_midp_keypad_ParamLimits

0x1be3,	// (0x0002c751) aid_size_cell_midp_keypad

0x1bfd,	// (0x0002c76b) midp_keyp_game_grid_pane_ParamLimits

0x1bfd,	// (0x0002c76b) midp_keyp_game_grid_pane

0x1c17,	// (0x0002c785) midp_keyp_rocker_pane_ParamLimits

0x1c17,	// (0x0002c785) midp_keyp_rocker_pane

0x1c44,	// (0x0002c7b2) midp_keyp_sk_left_pane_ParamLimits

0x1c44,	// (0x0002c7b2) midp_keyp_sk_left_pane

0x1c9c,	// (0x0002c80a) midp_keyp_sk_right_pane_ParamLimits

0x1c9c,	// (0x0002c80a) midp_keyp_sk_right_pane

0x7a54,	// (0x000325c2) bg_button_pane_cp03

0x1cee,	// (0x0002c85c) midp_keyp_sk_left_pane_g1

0x7a54,	// (0x000325c2) bg_button_pane_cp04

0x1cee,	// (0x0002c85c) midp_keyp_sk_right_pane_g1

0xd010,	// (0x00037b7e) midp_keyp_rocker_pane_g1

0x1cf7,	// (0x0002c865) keyp_game_cell_pane_ParamLimits

0x1cf7,	// (0x0002c865) keyp_game_cell_pane

0x7a54,	// (0x000325c2) bg_button_pane_cp02

0x1d08,	// (0x0002c876) keyp_game_cell_pane_g1

0x7c5d,	// (0x000327cb) popup_fep_vkb2_window_ParamLimits

0x7c5d,	// (0x000327cb) popup_fep_vkb2_window

0x9ca5,	// (0x00034813) aid_size_cell_vkb2_ParamLimits

0x9ca5,	// (0x00034813) aid_size_cell_vkb2

0x9cf9,	// (0x00034867) popup_fep_vkb2_window_g1_ParamLimits

0x9cf9,	// (0x00034867) popup_fep_vkb2_window_g1

0x9d41,	// (0x000348af) vkb2_area_bottom_pane_ParamLimits

0x9d41,	// (0x000348af) vkb2_area_bottom_pane

0x9d79,	// (0x000348e7) vkb2_area_keypad_pane_ParamLimits

0x9d79,	// (0x000348e7) vkb2_area_keypad_pane

0x9db1,	// (0x0003491f) vkb2_area_top_pane_ParamLimits

0x9db1,	// (0x0003491f) vkb2_area_top_pane

0x9e21,	// (0x0003498f) vkb2_top_entry_pane_ParamLimits

0x9e21,	// (0x0003498f) vkb2_top_entry_pane

0x9e4b,	// (0x000349b9) vkb2_top_grid_left_pane_ParamLimits

0x9e4b,	// (0x000349b9) vkb2_top_grid_left_pane

0x9e69,	// (0x000349d7) vkb2_top_grid_right_pane_ParamLimits

0x9e69,	// (0x000349d7) vkb2_top_grid_right_pane

0x9e87,	// (0x000349f5) vkb2_cell_keypad_pane_ParamLimits

0x9e87,	// (0x000349f5) vkb2_cell_keypad_pane

0x9f38,	// (0x00034aa6) vkb2_area_bottom_grid_pane_ParamLimits

0x9f38,	// (0x00034aa6) vkb2_area_bottom_grid_pane

0x9f5c,	// (0x00034aca) vkb2_area_bottom_pane_g1_ParamLimits

0x9f5c,	// (0x00034aca) vkb2_area_bottom_pane_g1

0x9f80,	// (0x00034aee) vkb2_area_bottom_pane_g2_ParamLimits

0x9f80,	// (0x00034aee) vkb2_area_bottom_pane_g2

0x9fae,	// (0x00034b1c) vkb2_area_bottom_pane_g3_ParamLimits

0x9fae,	// (0x00034b1c) vkb2_area_bottom_pane_g3

0x0002,

0xfd84,	// (0x0003a8f2) vkb2_area_bottom_pane_g_ParamLimits

0xfd84,	// (0x0003a8f2) vkb2_area_bottom_pane_g

0x9fff,	// (0x00034b6d) vkb2_top_cell_left_pane_ParamLimits

0x9fff,	// (0x00034b6d) vkb2_top_cell_left_pane

0x1d11,	// (0x0002c87f) vkb2_top_entry_pane_g1_ParamLimits

0x1d11,	// (0x0002c87f) vkb2_top_entry_pane_g1

0x1d1f,	// (0x0002c88d) vkb2_top_entry_pane_t1_ParamLimits

0x1d1f,	// (0x0002c88d) vkb2_top_entry_pane_t1

0x0ef3,	// (0x0002ba61) vkb2_top_entry_pane_t2_ParamLimits

0x0ef3,	// (0x0002ba61) vkb2_top_entry_pane_t2

0x0f25,	// (0x0002ba93) vkb2_top_entry_pane_t3_ParamLimits

0x0f25,	// (0x0002ba93) vkb2_top_entry_pane_t3

0x0002,

0xfd8b,	// (0x0003a8f9) vkb2_top_entry_pane_t_ParamLimits

0xfd8b,	// (0x0003a8f9) vkb2_top_entry_pane_t

0xa04c,	// (0x00034bba) vkb2_top_grid_right_pane_g1_ParamLimits

0xa04c,	// (0x00034bba) vkb2_top_grid_right_pane_g1

0xa062,	// (0x00034bd0) vkb2_top_grid_right_pane_g2_ParamLimits

0xa062,	// (0x00034bd0) vkb2_top_grid_right_pane_g2

0xa07a,	// (0x00034be8) vkb2_top_grid_right_pane_g3_ParamLimits

0xa07a,	// (0x00034be8) vkb2_top_grid_right_pane_g3

0xa092,	// (0x00034c00) vkb2_top_grid_right_pane_g4_ParamLimits

0xa092,	// (0x00034c00) vkb2_top_grid_right_pane_g4

0x0003,

0xfd92,	// (0x0003a900) vkb2_top_grid_right_pane_g_ParamLimits

0xfd92,	// (0x0003a900) vkb2_top_grid_right_pane_g

0xa0a8,	// (0x00034c16) vkb2_top_cell_left_pane_g1

0xa0bf,	// (0x00034c2d) vkb2_cell_keypad_pane_g1_ParamLimits

0xa0bf,	// (0x00034c2d) vkb2_cell_keypad_pane_g1

0x0f3b,	// (0x0002baa9) vkb2_cell_keypad_pane_t1_ParamLimits

0x0f3b,	// (0x0002baa9) vkb2_cell_keypad_pane_t1

0xa0cd,	// (0x00034c3b) vkb2_cell_bottom_grid_pane_ParamLimits

0xa0cd,	// (0x00034c3b) vkb2_cell_bottom_grid_pane

0xa106,	// (0x00034c74) vkb2_cell_bottom_grid_pane_g1

0x1a47,	// (0x0002c5b5) aid_call2_pane_cp02

0x1a4f,	// (0x0002c5bd) aid_call_pane_cp02

0x1a57,	// (0x0002c5c5) clock_digital_number_pane_cp10

0x1a5f,	// (0x0002c5cd) clock_digital_number_pane_cp11

0x1a67,	// (0x0002c5d5) clock_digital_number_pane_cp12

0x1a6f,	// (0x0002c5dd) clock_digital_number_pane_cp13

0x1a77,	// (0x0002c5e5) clock_digital_separator_pane_cp10

0xaa69,	// (0x000355d7) popup_clock_digital_analogue_window_cp2_g1

0xaa69,	// (0x000355d7) popup_clock_digital_analogue_window_cp2_g2

0x1a7f,	// (0x0002c5ed) popup_clock_digital_analogue_window_cp2_g3

0xaa69,	// (0x000355d7) popup_clock_digital_analogue_window_cp2_g4

0x1a7f,	// (0x0002c5ed) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd47,	// (0x0003a8b5) popup_clock_digital_analogue_window_cp2_g

0x1a87,	// (0x0002c5f5) popup_clock_digital_analogue_window_cp2_t1

0x1a95,	// (0x0002c603) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd52,	// (0x0003a8c0) popup_clock_digital_analogue_window_cp2_t

0xd010,	// (0x00037b7e) clock_digital_number_pane_cp10_g1

0xd010,	// (0x00037b7e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0003a6af) clock_digital_number_pane_cp10_g

0xd010,	// (0x00037b7e) clock_digital_separator_pane_cp10_g1

0xd010,	// (0x00037b7e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0003a6af) clock_digital_separator_pane_cp10_g

0x0d26,	// (0x0002b894) uniindi_top_pane_g3

0x0d37,	// (0x0002b8a5) uniindi_top_pane_g4

0x9ef2,	// (0x00034a60) vkb2_row_keypad_pane_ParamLimits

0x9ef2,	// (0x00034a60) vkb2_row_keypad_pane

0xa122,	// (0x00034c90) vkb2_cell_t_keypad_pane_ParamLimits

0xa122,	// (0x00034c90) vkb2_cell_t_keypad_pane

0xa12f,	// (0x00034c9d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xa12f,	// (0x00034c9d) vkb2_cell_t_keypad_pane_cp08

0xa13f,	// (0x00034cad) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xa13f,	// (0x00034cad) vkb2_cell_t_keypad_pane_cp09

0xa150,	// (0x00034cbe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xa150,	// (0x00034cbe) vkb2_cell_t_keypad_pane_cp01

0xa160,	// (0x00034cce) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xa160,	// (0x00034cce) vkb2_cell_t_keypad_pane_cp02

0xa170,	// (0x00034cde) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xa170,	// (0x00034cde) vkb2_cell_t_keypad_pane_cp03

0xa180,	// (0x00034cee) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xa180,	// (0x00034cee) vkb2_cell_t_keypad_pane_cp04

0xa190,	// (0x00034cfe) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xa190,	// (0x00034cfe) vkb2_cell_t_keypad_pane_cp05

0xa1a0,	// (0x00034d0e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xa1a0,	// (0x00034d0e) vkb2_cell_t_keypad_pane_cp06

0xa1b0,	// (0x00034d1e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xa1b0,	// (0x00034d1e) vkb2_cell_t_keypad_pane_cp07

0xa1c0,	// (0x00034d2e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xa1c0,	// (0x00034d2e) vkb2_cell_t_keypad_pane_cp10

0xd23c,	// (0x00037daa) vkb2_cell_t_keypad_pane_g1

0x0f52,	// (0x0002bac0) vkb2_cell_t_keypad_pane_t1

0x7a54,	// (0x000325c2) popup_grid_graphic2_window

0x1d51,	// (0x0002c8bf) aid_size_cell_graphic2_ParamLimits

0x1d51,	// (0x0002c8bf) aid_size_cell_graphic2

0x1d89,	// (0x0002c8f7) bg_popup_window_pane_cp21_ParamLimits

0x1d89,	// (0x0002c8f7) bg_popup_window_pane_cp21

0x1d97,	// (0x0002c905) graphic2_pages_pane_ParamLimits

0x1d97,	// (0x0002c905) graphic2_pages_pane

0x1dd1,	// (0x0002c93f) grid_graphic2_control_pane_ParamLimits

0x1dd1,	// (0x0002c93f) grid_graphic2_control_pane

0x1e07,	// (0x0002c975) grid_graphic2_pane_ParamLimits

0x1e07,	// (0x0002c975) grid_graphic2_pane

0x1e67,	// (0x0002c9d5) cell_graphic2_pane

0x7a54,	// (0x000325c2) main_comp_mode_pane

0xe941,	// (0x000394af) list_ai3_gene_pane_ParamLimits

0xf4d4,	// (0x0003a042) bg_popup_window_pane_cp19_ParamLimits

0xeab1,	// (0x0003961f) bg_touch_area_indi_pane_ParamLimits

0xeab1,	// (0x0003961f) bg_touch_area_indi_pane

0xeac7,	// (0x00039635) bg_touch_area_indi_pane_cp01_ParamLimits

0xeac7,	// (0x00039635) bg_touch_area_indi_pane_cp01

0xeadd,	// (0x0003964b) bg_touch_area_indi_pane_cp02_ParamLimits

0xeadd,	// (0x0003964b) bg_touch_area_indi_pane_cp02

0xeaf3,	// (0x00039661) bg_touch_area_indi_pane_cp03_ParamLimits

0xeaf3,	// (0x00039661) bg_touch_area_indi_pane_cp03

0xeb09,	// (0x00039677) popup_slider_window_g1_ParamLimits

0xeb25,	// (0x00039693) popup_slider_window_g2_ParamLimits

0xeb41,	// (0x000396af) popup_slider_window_g3_ParamLimits

0xfcdc,	// (0x0003a84a) popup_slider_window_g_ParamLimits

0xeb5d,	// (0x000396cb) popup_slider_window_t1_ParamLimits

0xeba1,	// (0x0003970f) small_volume_slider_vertical_pane_ParamLimits

0x1e67,	// (0x0002c9d5) cell_graphic2_pane_ParamLimits

0x1ea3,	// (0x0002ca11) bg_button_pane_cp10_ParamLimits

0x1ea3,	// (0x0002ca11) bg_button_pane_cp10

0x1eb4,	// (0x0002ca22) bg_button_pane_cp11_ParamLimits

0x1eb4,	// (0x0002ca22) bg_button_pane_cp11

0x1ec5,	// (0x0002ca33) graphic2_pages_pane_g1_ParamLimits

0x1ec5,	// (0x0002ca33) graphic2_pages_pane_g1

0x1ed8,	// (0x0002ca46) graphic2_pages_pane_g2_ParamLimits

0x1ed8,	// (0x0002ca46) graphic2_pages_pane_g2

0x0001,

0xfda0,	// (0x0003a90e) graphic2_pages_pane_g_ParamLimits

0xfda0,	// (0x0003a90e) graphic2_pages_pane_g

0x1eee,	// (0x0002ca5c) graphic2_pages_pane_t1_ParamLimits

0x1eee,	// (0x0002ca5c) graphic2_pages_pane_t1

0x1f04,	// (0x0002ca72) cell_graphic2_control_pane_ParamLimits

0x1f04,	// (0x0002ca72) cell_graphic2_control_pane

0x1f23,	// (0x0002ca91) cell_graphic2_pane_g1_ParamLimits

0x1f23,	// (0x0002ca91) cell_graphic2_pane_g1

0x1f30,	// (0x0002ca9e) cell_graphic2_pane_g2_ParamLimits

0x1f30,	// (0x0002ca9e) cell_graphic2_pane_g2

0x1f3d,	// (0x0002caab) cell_graphic2_pane_g3_ParamLimits

0x1f3d,	// (0x0002caab) cell_graphic2_pane_g3

0x1f4a,	// (0x0002cab8) cell_graphic2_pane_g4_ParamLimits

0x1f4a,	// (0x0002cab8) cell_graphic2_pane_g4

0x1f57,	// (0x0002cac5) cell_graphic2_pane_g5_ParamLimits

0x1f57,	// (0x0002cac5) cell_graphic2_pane_g5

0x0004,

0xfda5,	// (0x0003a913) cell_graphic2_pane_g_ParamLimits

0xfda5,	// (0x0003a913) cell_graphic2_pane_g

0x1f72,	// (0x0002cae0) cell_graphic2_pane_t1_ParamLimits

0x1f72,	// (0x0002cae0) cell_graphic2_pane_t1

0xb313,	// (0x00035e81) grid_highlight_pane_cp11_ParamLimits

0xb313,	// (0x00035e81) grid_highlight_pane_cp11

0x7f84,	// (0x00032af2) bg_button_pane_cp05

0x1f9b,	// (0x0002cb09) cell_graphic2_control_pane_g1

0xd010,	// (0x00037b7e) bg_touch_area_indi_pane_g1

0x0f64,	// (0x0002bad2) aid_cmod_rocker_key_size

0x0f6e,	// (0x0002badc) aid_cmode_itu_key_size

0x0f78,	// (0x0002bae6) main_cmode_video_pane

0x0f80,	// (0x0002baee) main_comp_mode_itu_pane

0x0f8a,	// (0x0002baf8) main_comp_mode_rocker_pane

0x0f92,	// (0x0002bb00) cell_cmode_rocker_pane_ParamLimits

0x0f92,	// (0x0002bb00) cell_cmode_rocker_pane

0x0fa4,	// (0x0002bb12) cell_cmode_itu_pane_ParamLimits

0x0fa4,	// (0x0002bb12) cell_cmode_itu_pane

0x84aa,	// (0x00033018) bg_button_pane_cp06_ParamLimits

0x84aa,	// (0x00033018) bg_button_pane_cp06

0xd23c,	// (0x00037daa) cell_cmode_rocker_pane_g1_ParamLimits

0xd23c,	// (0x00037daa) cell_cmode_rocker_pane_g1

0x0c39,	// (0x0002b7a7) cell_cmode_rocker_pane_g2_ParamLimits

0x0c39,	// (0x0002b7a7) cell_cmode_rocker_pane_g2

0x0001,

0xfdb5,	// (0x0003a923) cell_cmode_rocker_pane_g_ParamLimits

0xfdb5,	// (0x0003a923) cell_cmode_rocker_pane_g

0x7a54,	// (0x000325c2) bg_button_pane_cp07

0x0fb9,	// (0x0002bb27) cell_cmode_itu_pane_g1

0x0fc2,	// (0x0002bb30) cell_cmode_itu_pane_t1

0x0fd0,	// (0x0002bb3e) cell_cmode_itu_pane_t2

0x0001,

0xfdba,	// (0x0003a928) cell_cmode_itu_pane_t

0x0da8,	// (0x0002b916) aid_touch_ctrl_left

0x0db0,	// (0x0002b91e) aid_touch_ctrl_right

0x7a54,	// (0x000325c2) compa_mode_pane

0x1fc3,	// (0x0002cb31) aid_cmod_rocker_key_size_cp

0x1fcd,	// (0x0002cb3b) aid_cmode_itu_key_size_cp

0x0fde,	// (0x0002bb4c) compa_mode_pane_g1

0x0fe6,	// (0x0002bb54) compa_mode_pane_g2

0x0fee,	// (0x0002bb5c) compa_mode_pane_g3

0x0002,

0xfdbf,	// (0x0003a92d) compa_mode_pane_g

0x1fd7,	// (0x0002cb45) main_comp_mode_itu_pane_cp

0x1fdf,	// (0x0002cb4d) main_comp_mode_rocker_pane_cp

0x1fe7,	// (0x0002cb55) cell_cmode_itu_pane_cp_ParamLimits

0x1fe7,	// (0x0002cb55) cell_cmode_itu_pane_cp

0x1ffc,	// (0x0002cb6a) cell_cmode_rocker_pane_cp_ParamLimits

0x1ffc,	// (0x0002cb6a) cell_cmode_rocker_pane_cp

0x84aa,	// (0x00033018) bg_button_pane_cp06_cp_ParamLimits

0x84aa,	// (0x00033018) bg_button_pane_cp06_cp

0xd23c,	// (0x00037daa) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd23c,	// (0x00037daa) cell_cmode_rocker_pane_g1_cp

0xd010,	// (0x00037b7e) cell_cmode_rocker_pane_g2_cp

0x7a54,	// (0x000325c2) bg_button_pane_cp07_cp

0x200e,	// (0x0002cb7c) cell_cmode_itu_pane_g1_cp

0x2017,	// (0x0002cb85) cell_cmode_itu_pane_t1_cp

0x2025,	// (0x0002cb93) cell_cmode_itu_pane_t2_cp

0xed0e,	// (0x0003987c) settings_code_pane_cp2

0x7db1,	// (0x0003291f) bg_popup_window_pane_cp3_ParamLimits

0x8182,	// (0x00032cf0) heading_pane_cp3_ParamLimits

0x818e,	// (0x00032cfc) listscroll_popup_graphic_pane_ParamLimits

0x97ac,	// (0x0003431a) fep_hwr_aid_pane_ParamLimits

0x9c17,	// (0x00034785) aid_touch_sctrl_top_ParamLimits

0x9c24,	// (0x00034792) sctrl_sk_top_pane_g1_ParamLimits

0xd23c,	// (0x00037daa) sctrl_sk_top_pane_g2_ParamLimits

0xfcf5,	// (0x0003a863) sctrl_sk_top_pane_g_ParamLimits

0x9c31,	// (0x0003479f) sctrl_sk_top_pane_t1_ParamLimits

0x9c17,	// (0x00034785) aid_touch_sctrl_bottom_ParamLimits

0x9c31,	// (0x0003479f) sctrl_sk_bottom_pane_t1_ParamLimits

0x0cf2,	// (0x0002b860) aid_area_touch_clock

0x9de9,	// (0x00034957) aid_vkb2_area_top_pane_cell_ParamLimits

0x9de9,	// (0x00034957) aid_vkb2_area_top_pane_cell

0x9f14,	// (0x00034a82) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9f14,	// (0x00034a82) aid_vkb2_area_bottom_pane_cell

0x0eeb,	// (0x0002ba59) popup_char_count_window

0x0ff6,	// (0x0002bb64) popup_char_count_window_g1

0x0fff,	// (0x0002bb6d) popup_char_count_window_g2

0x1008,	// (0x0002bb76) popup_char_count_window_g3

0x0002,

0xfdc6,	// (0x0003a934) popup_char_count_window_g

0x1011,	// (0x0002bb7f) popup_char_count_window_t1

0x9cd7,	// (0x00034845) popup_fep_char_preview_window_ParamLimits

0x9cd7,	// (0x00034845) popup_fep_char_preview_window

0x9e07,	// (0x00034975) vkb2_top_candi_pane_ParamLimits

0x9e07,	// (0x00034975) vkb2_top_candi_pane

0x2033,	// (0x0002cba1) cell_vkb2_top_candi_pane_ParamLimits

0x2033,	// (0x0002cba1) cell_vkb2_top_candi_pane

0xb853,	// (0x000363c1) bg_popup_fep_char_preview_window_ParamLimits

0xb853,	// (0x000363c1) bg_popup_fep_char_preview_window

0xa1d5,	// (0x00034d43) popup_fep_char_preview_window_t1_ParamLimits

0xa1d5,	// (0x00034d43) popup_fep_char_preview_window_t1

0x102f,	// (0x0002bb9d) bg_popup_fep_char_preview_window_g1

0x1027,	// (0x0002bb95) bg_popup_fep_char_preview_window_g2

0x101f,	// (0x0002bb8d) bg_popup_fep_char_preview_window_g3

0x104f,	// (0x0002bbbd) bg_popup_fep_char_preview_window_g4

0x1047,	// (0x0002bbb5) bg_popup_fep_char_preview_window_g5

0xa20f,	// (0x00034d7d) bg_popup_fep_char_preview_window_g6

0x103f,	// (0x0002bbad) bg_popup_fep_char_preview_window_g7

0x1037,	// (0x0002bba5) bg_popup_fep_char_preview_window_g8

0x1057,	// (0x0002bbc5) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcd,	// (0x0003a93b) bg_popup_fep_char_preview_window_g

0xd23c,	// (0x00037daa) cell_vkb2_top_candi_pane_g1_ParamLimits

0xd23c,	// (0x00037daa) cell_vkb2_top_candi_pane_g1

0xd46b,	// (0x00037fd9) cell_vkb2_top_candi_pane_g2_ParamLimits

0xd46b,	// (0x00037fd9) cell_vkb2_top_candi_pane_g2

0xd48c,	// (0x00037ffa) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd48c,	// (0x00037ffa) cell_vkb2_top_candi_pane_g3

0xa217,	// (0x00034d85) cell_vkb2_top_candi_pane_g4_ParamLimits

0xa217,	// (0x00034d85) cell_vkb2_top_candi_pane_g4

0x088d,	// (0x0002b3fb) cell_vkb2_top_candi_pane_g5_ParamLimits

0x088d,	// (0x0002b3fb) cell_vkb2_top_candi_pane_g5

0x0c39,	// (0x0002b7a7) cell_vkb2_top_candi_pane_g6_ParamLimits

0x0c39,	// (0x0002b7a7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde0,	// (0x0003a94e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde0,	// (0x0003a94e) cell_vkb2_top_candi_pane_g

0xa238,	// (0x00034da6) cell_vkb2_top_candi_pane_t1

0x94ff,	// (0x0003406d) aid_size_touch_slider_mark_ParamLimits

0x94ff,	// (0x0003406d) aid_size_touch_slider_mark

0x1dc5,	// (0x0002c933) grid_graphic2_catg_pane_ParamLimits

0x1dc5,	// (0x0002c933) grid_graphic2_catg_pane

0x1e43,	// (0x0002c9b1) popup_grid_graphic2_window_t1_ParamLimits

0x1e43,	// (0x0002c9b1) popup_grid_graphic2_window_t1

0x1e55,	// (0x0002c9c3) popup_grid_graphic2_window_t2_ParamLimits

0x1e55,	// (0x0002c9c3) popup_grid_graphic2_window_t2

0x0001,

0xfd9b,	// (0x0003a909) popup_grid_graphic2_window_t_ParamLimits

0xfd9b,	// (0x0003a909) popup_grid_graphic2_window_t

0x7f84,	// (0x00032af2) bg_button_pane_cp05_ParamLimits

0x1f9b,	// (0x0002cb09) cell_graphic2_control_pane_g1_ParamLimits

0x206c,	// (0x0002cbda) cell_graphic2_catg_pane_ParamLimits

0x206c,	// (0x0002cbda) cell_graphic2_catg_pane

0x7a54,	// (0x000325c2) bg_button_pane_cp12

0x207e,	// (0x0002cbec) cell_graphic2_catg_pane_g1

0x0cbe,	// (0x0002b82c) cell_tb_ext_pane_t1_ParamLimits

0xa01f,	// (0x00034b8d) vkb2_top_cell_right_narrow_pane_ParamLimits

0xa01f,	// (0x00034b8d) vkb2_top_cell_right_narrow_pane

0xa037,	// (0x00034ba5) vkb2_top_cell_right_wide_pane_ParamLimits

0xa037,	// (0x00034ba5) vkb2_top_cell_right_wide_pane

0x979e,	// (0x0003430c) bg_vkb2_func_pane_ParamLimits

0x979e,	// (0x0003430c) bg_vkb2_func_pane

0xa0a8,	// (0x00034c16) vkb2_top_cell_left_pane_g1_ParamLimits

0x979e,	// (0x0003430c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x979e,	// (0x0003430c) bg_vkb2_fuc_pane_cp03

0xa106,	// (0x00034c74) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xb29b,	// (0x00035e09) bg_vkb2_func_pane_g1

0xb2a3,	// (0x00035e11) bg_vkb2_func_pane_g2

0xb2b3,	// (0x00035e21) bg_vkb2_func_pane_g3

0xb2ab,	// (0x00035e19) bg_vkb2_func_pane_g4

0xb2bb,	// (0x00035e29) bg_vkb2_func_pane_g5

0xb2c3,	// (0x00035e31) bg_vkb2_func_pane_g6

0xb2cb,	// (0x00035e39) bg_vkb2_func_pane_g7

0xb2d3,	// (0x00035e41) bg_vkb2_func_pane_g8

0xb293,	// (0x00035e01) bg_vkb2_func_pane_g9

0x0008,

0xfded,	// (0x0003a95b) bg_vkb2_func_pane_g

0x979e,	// (0x0003430c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x979e,	// (0x0003430c) bg_vkb2_fuc_pane_cp01

0xa0a8,	// (0x00034c16) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xa0a8,	// (0x00034c16) vkb2_top_cell_right_wide_pane_g1

0x979e,	// (0x0003430c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x979e,	// (0x0003430c) bg_vkb2_fuc_pane_cp02

0xa106,	// (0x00034c74) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xa106,	// (0x00034c74) vkb2_top_cell_right_narrow_pane_g1

0xf466,	// (0x00039fd4) aid_touch_area_decrease_ParamLimits

0xf466,	// (0x00039fd4) aid_touch_area_decrease

0xf47e,	// (0x00039fec) aid_touch_area_increase_ParamLimits

0xf47e,	// (0x00039fec) aid_touch_area_increase

0xf48a,	// (0x00039ff8) aid_touch_area_mute_ParamLimits

0xf48a,	// (0x00039ff8) aid_touch_area_mute

0xf4a6,	// (0x0003a014) aid_touch_area_slider_ParamLimits

0xf4a6,	// (0x0003a014) aid_touch_area_slider

0xf4e0,	// (0x0003a04e) popup_slider_window_g4_ParamLimits

0xf4e0,	// (0x0003a04e) popup_slider_window_g4

0xf4ec,	// (0x0003a05a) popup_slider_window_g5_ParamLimits

0xf4ec,	// (0x0003a05a) popup_slider_window_g5

0xf50e,	// (0x0003a07c) popup_slider_window_g6_ParamLimits

0xf50e,	// (0x0003a07c) popup_slider_window_g6

0xeb89,	// (0x000396f7) popup_slider_window_t2_ParamLimits

0xeb89,	// (0x000396f7) popup_slider_window_t2

0x0001,

0xfce9,	// (0x0003a857) popup_slider_window_t_ParamLimits

0xfce9,	// (0x0003a857) popup_slider_window_t

0xf520,	// (0x0003a08e) slider_pane_ParamLimits

0xf520,	// (0x0003a08e) slider_pane

0x105f,	// (0x0002bbcd) slider_pane_g1_ParamLimits

0x105f,	// (0x0002bbcd) slider_pane_g1

0x1073,	// (0x0002bbe1) slider_pane_g2_ParamLimits

0x1073,	// (0x0002bbe1) slider_pane_g2

0x1089,	// (0x0002bbf7) slider_pane_g3_ParamLimits

0x1089,	// (0x0002bbf7) slider_pane_g3

0x0003,

0xfe00,	// (0x0003a96e) slider_pane_g_ParamLimits

0xfe00,	// (0x0003a96e) slider_pane_g

0x9173,	// (0x00033ce1) popup_tb_float_extension_window_ParamLimits

0x9173,	// (0x00033ce1) popup_tb_float_extension_window

0x10b5,	// (0x0002bc23) aid_size_cell_tb_float_ext

0x7a54,	// (0x000325c2) bg_popup_sub_window_cp28

0x10c0,	// (0x0002bc2e) grid_tb_float_ext_pane

0x10c8,	// (0x0002bc36) cell_tb_float_ext_pane_ParamLimits

0x10c8,	// (0x0002bc36) cell_tb_float_ext_pane

0x10e0,	// (0x0002bc4e) cell_tb_float_ext_pane_g1

0x10e9,	// (0x0002bc57) grid_highlight_pane_cp12

0x98d9,	// (0x00034447) cell_last_hwr_side_pane_ParamLimits

0x98d9,	// (0x00034447) cell_last_hwr_side_pane

0xd010,	// (0x00037b7e) cell_last_hwr_side_pane_g1

0x10f2,	// (0x0002bc60) cell_last_hwr_side_pane_g2

0x0001,

0xfe09,	// (0x0003a977) cell_last_hwr_side_pane_g

0x9fdc,	// (0x00034b4a) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9fdc,	// (0x00034b4a) vkb2_area_bottom_space_btn_pane

0xd23c,	// (0x00037daa) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x0f52,	// (0x0002bac0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xa238,	// (0x00034da6) cell_vkb2_top_candi_pane_t1_ParamLimits

0xa24e,	// (0x00034dbc) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xa24e,	// (0x00034dbc) vkb2_area_bottom_space_btn_pane_g1

0xa284,	// (0x00034df2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xa284,	// (0x00034df2) vkb2_area_bottom_space_btn_pane_g2

0xa2ba,	// (0x00034e28) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xa2ba,	// (0x00034e28) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0e,	// (0x0003a97c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0e,	// (0x0003a97c) vkb2_area_bottom_space_btn_pane_g

0x984d,	// (0x000343bb) cel_fep_hwr_func_pane_ParamLimits

0x984d,	// (0x000343bb) cel_fep_hwr_func_pane

0x9889,	// (0x000343f7) cell_hwr_side_button_pane_ParamLimits

0x9889,	// (0x000343f7) cell_hwr_side_button_pane

0x0cf2,	// (0x0002b860) aid_area_touch_clock_ParamLimits

0x7f84,	// (0x00032af2) bg_uniindi_top_pane_ParamLimits

0x0d04,	// (0x0002b872) uniindi_top_pane_g1_ParamLimits

0x0d1a,	// (0x0002b888) uniindi_top_pane_g2_ParamLimits

0x0d26,	// (0x0002b894) uniindi_top_pane_g3_ParamLimits

0x0d37,	// (0x0002b8a5) uniindi_top_pane_g4_ParamLimits

0xfd21,	// (0x0003a88f) uniindi_top_pane_g_ParamLimits

0x0d44,	// (0x0002b8b2) uniindi_top_pane_t1_ParamLimits

0x7f84,	// (0x00032af2) bg_vkb2_func_pane_cp01_ParamLimits

0x7f84,	// (0x00032af2) bg_vkb2_func_pane_cp01

0x10fb,	// (0x0002bc69) cel_fep_hwr_func_pane_g1_ParamLimits

0x10fb,	// (0x0002bc69) cel_fep_hwr_func_pane_g1

0x7f84,	// (0x00032af2) bg_vkb2_func_pane_cp02_ParamLimits

0x7f84,	// (0x00032af2) bg_vkb2_func_pane_cp02

0x10fb,	// (0x0002bc69) cell_hwr_side_button_pane_g1_ParamLimits

0x10fb,	// (0x0002bc69) cell_hwr_side_button_pane_g1

0xb1b7,	// (0x00035d25) status_pane_g4_ParamLimits

0xb1b7,	// (0x00035d25) status_pane_g4

0xb1cf,	// (0x00035d3d) status_pane_t1

0xce16,	// (0x00037984) form2_midp_gauge_slider_cont_pane

0xce1e,	// (0x0003798c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xefb1,	// (0x00039b1f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xefc3,	// (0x00039b31) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0003a662) form2_midp_gauge_slider_pane_t_ParamLimits

0xce30,	// (0x0003799e) form2_midp_slider_pane_ParamLimits

0x9c97,	// (0x00034805) aid_size_cell_func_vkb2_ParamLimits

0x9c97,	// (0x00034805) aid_size_cell_func_vkb2

0x10a1,	// (0x0002bc0f) slider_pane_g4_ParamLimits

0x10a1,	// (0x0002bc0f) slider_pane_g4

0xa300,	// (0x00034e6e) form2_midp_gauge_slider_pane_t2_cp01

0xa30e,	// (0x00034e7c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa30e,	// (0x00034e7c) form2_midp_gauge_slider_pane_t3_cp01

0xa32b,	// (0x00034e99) form2_midp_slider_pane_cp01

0x7a54,	// (0x000325c2) navi_smil_pane

0x112b,	// (0x0002bc99) navi_smil_pane_g1

0x1133,	// (0x0002bca1) navi_smil_pane_t1

0x1109,	// (0x0002bc77) form2_midp_slider_pane_g1

0x1112,	// (0x0002bc80) form2_midp_slider_pane_g2

0x111a,	// (0x0002bc88) form2_midp_slider_pane_g3

0x1109,	// (0x0002bc77) form2_midp_slider_pane_g4

0x2087,	// (0x0002cbf5) form2_midp_slider_pane_g5

0x0004,

0xfe17,	// (0x0003a985) form2_midp_slider_pane_g

0xa2f0,	// (0x00034e5e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xa2f0,	// (0x00034e5e) vkb2_area_bottom_space_btn_pane_g4

0xdee5,	// (0x00038a53) lc0_navi_pane_ParamLimits

0xdee5,	// (0x00038a53) lc0_navi_pane

0xdf5b,	// (0x00038ac9) lc0_stat_indi_pane_ParamLimits

0xdf5b,	// (0x00038ac9) lc0_stat_indi_pane

0xdf72,	// (0x00038ae0) ls0_title_pane_ParamLimits

0xdf72,	// (0x00038ae0) ls0_title_pane

0x84aa,	// (0x00033018) bg_popup_sub_pane_cp14_ParamLimits

0x0cd9,	// (0x0002b847) list_uniindi_pane_ParamLimits

0x0ce5,	// (0x0002b853) uniindi_top_pane_ParamLimits

0x0d80,	// (0x0002b8ee) list_single_uniindi_pane_g1_ParamLimits

0x0d93,	// (0x0002b901) list_single_uniindi_pane_t1_ParamLimits

0xa334,	// (0x00034ea2) lc0_stat_clock_pane_ParamLimits

0xa334,	// (0x00034ea2) lc0_stat_clock_pane

0x209d,	// (0x0002cc0b) lc0_stat_indi_pane_g1_ParamLimits

0x209d,	// (0x0002cc0b) lc0_stat_indi_pane_g1

0x2090,	// (0x0002cbfe) lc0_stat_indi_pane_g2_ParamLimits

0x2090,	// (0x0002cbfe) lc0_stat_indi_pane_g2

0x0001,

0xfe22,	// (0x0003a990) lc0_stat_indi_pane_g_ParamLimits

0xfe22,	// (0x0003a990) lc0_stat_indi_pane_g

0xa341,	// (0x00034eaf) lc0_uni_indicator_pane_ParamLimits

0xa341,	// (0x00034eaf) lc0_uni_indicator_pane

0x1141,	// (0x0002bcaf) ls0_title_pane_g1_ParamLimits

0x1141,	// (0x0002bcaf) ls0_title_pane_g1

0x20aa,	// (0x0002cc18) ls0_title_pane_t1_ParamLimits

0x20aa,	// (0x0002cc18) ls0_title_pane_t1

0xa34e,	// (0x00034ebc) lc0_uni_indicator_pane_g1_ParamLimits

0xa34e,	// (0x00034ebc) lc0_uni_indicator_pane_g1

0x1155,	// (0x0002bcc3) lc0_stat_clock_pane_t1

0x7a54,	// (0x000325c2) main_ai5_pane

0x1163,	// (0x0002bcd1) ai5_sk_pane_ParamLimits

0x1163,	// (0x0002bcd1) ai5_sk_pane

0x20e0,	// (0x0002cc4e) cell_ai5_widget_pane_ParamLimits

0x20e0,	// (0x0002cc4e) cell_ai5_widget_pane

0x1170,	// (0x0002bcde) aid_size_cell_widget_grid

0x117d,	// (0x0002bceb) bg_ai5_widget_pane_ParamLimits

0x117d,	// (0x0002bceb) bg_ai5_widget_pane

0x2173,	// (0x0002cce1) cell_ai5_widget_pane_g2

0x2187,	// (0x0002ccf5) cell_ai5_widget_pane_g3

0x21a1,	// (0x0002cd0f) cell_ai5_widget_pane_g4

0x21b1,	// (0x0002cd1f) cell_ai5_widget_pane_g5

0x21c1,	// (0x0002cd2f) cell_ai5_widget_pane_g6

0x21cd,	// (0x0002cd3b) cell_ai5_widget_pane_g7

0x2215,	// (0x0002cd83) cell_ai5_widget_pane_t1_ParamLimits

0x2215,	// (0x0002cd83) cell_ai5_widget_pane_t1

0x2232,	// (0x0002cda0) cell_ai5_widget_pane_t2_ParamLimits

0x2232,	// (0x0002cda0) cell_ai5_widget_pane_t2

0x224a,	// (0x0002cdb8) cell_ai5_widget_pane_t3_ParamLimits

0x224a,	// (0x0002cdb8) cell_ai5_widget_pane_t3

0x2262,	// (0x0002cdd0) cell_ai5_widget_pane_t4_ParamLimits

0x2262,	// (0x0002cdd0) cell_ai5_widget_pane_t4

0x2288,	// (0x0002cdf6) cell_ai5_widget_pane_t5_ParamLimits

0x2288,	// (0x0002cdf6) cell_ai5_widget_pane_t5

0x11b5,	// (0x0002bd23) cell_ai5_widget_pane_t6_ParamLimits

0x11b5,	// (0x0002bd23) cell_ai5_widget_pane_t6

0x11c7,	// (0x0002bd35) cell_ai5_widget_pane_t7_ParamLimits

0x11c7,	// (0x0002bd35) cell_ai5_widget_pane_t7

0x22a7,	// (0x0002ce15) cell_ai5_widget_pane_t8_ParamLimits

0x22a7,	// (0x0002ce15) cell_ai5_widget_pane_t8

0x0009,

0xfe3c,	// (0x0003a9aa) cell_ai5_widget_pane_t_ParamLimits

0xfe3c,	// (0x0003a9aa) cell_ai5_widget_pane_t

0x2306,	// (0x0002ce74) grid_ai5_widget_pane

0x84aa,	// (0x00033018) highlight_cell_ai5_widget_pane_ParamLimits

0x84aa,	// (0x00033018) highlight_cell_ai5_widget_pane

0x2312,	// (0x0002ce80) ai5_sk_left_pane

0x231c,	// (0x0002ce8a) ai5_sk_middle_pane

0x2326,	// (0x0002ce94) ai5_sk_right_pane

0x11e0,	// (0x0002bd4e) bg_ai5_widget_pane_g1_ParamLimits

0x11e0,	// (0x0002bd4e) bg_ai5_widget_pane_g1

0x11ec,	// (0x0002bd5a) bg_ai5_widget_pane_g2_ParamLimits

0x11ec,	// (0x0002bd5a) bg_ai5_widget_pane_g2

0x11f8,	// (0x0002bd66) bg_ai5_widget_pane_g3_ParamLimits

0x11f8,	// (0x0002bd66) bg_ai5_widget_pane_g3

0x1204,	// (0x0002bd72) bg_ai5_widget_pane_g4_ParamLimits

0x1204,	// (0x0002bd72) bg_ai5_widget_pane_g4

0x1210,	// (0x0002bd7e) bg_ai5_widget_pane_g5_ParamLimits

0x1210,	// (0x0002bd7e) bg_ai5_widget_pane_g5

0x121c,	// (0x0002bd8a) bg_ai5_widget_pane_g6_ParamLimits

0x121c,	// (0x0002bd8a) bg_ai5_widget_pane_g6

0x1228,	// (0x0002bd96) bg_ai5_widget_pane_g7_ParamLimits

0x1228,	// (0x0002bd96) bg_ai5_widget_pane_g7

0x1234,	// (0x0002bda2) bg_ai5_widget_pane_g8_ParamLimits

0x1234,	// (0x0002bda2) bg_ai5_widget_pane_g8

0x1240,	// (0x0002bdae) bg_ai5_widget_pane_g9_ParamLimits

0x1240,	// (0x0002bdae) bg_ai5_widget_pane_g9

0x0008,

0xfe51,	// (0x0003a9bf) bg_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0003a9bf) bg_ai5_widget_pane_g

0x1270,	// (0x0002bdde) cell_shortcut_ai5_widget_pane_ParamLimits

0x1270,	// (0x0002bdde) cell_shortcut_ai5_widget_pane

0x1281,	// (0x0002bdef) bg_cell_shortcut_ai5_widget_pane

0x813e,	// (0x00032cac) cell_grid_ai5_widget_pane_g1

0xaefb,	// (0x00035a69) highlight_cell_shortcut_ai5_widget_pane

0xb2a3,	// (0x00035e11) ai5_sk_left_pane_g1

0x1289,	// (0x0002bdf7) ai5_sk_left_pane_g2

0x1291,	// (0x0002bdff) ai5_sk_left_pane_g3

0x1299,	// (0x0002be07) ai5_sk_left_pane_g4

0x0003,

0xfe64,	// (0x0003a9d2) ai5_sk_left_pane_g

0x12a1,	// (0x0002be0f) ai5_sk_left_pane_t1

0xb29b,	// (0x00035e09) ai5_sk_right_pane_g1

0x12af,	// (0x0002be1d) ai5_sk_right_pane_g2

0x12b7,	// (0x0002be25) ai5_sk_right_pane_g3

0x12bf,	// (0x0002be2d) ai5_sk_right_pane_g4

0x0003,

0xfe6d,	// (0x0003a9db) ai5_sk_right_pane_g

0x12c7,	// (0x0002be35) ai5_sk_right_pane_t1

0xb29b,	// (0x00035e09) ai5_sk_middle_pane_g1

0xb2a3,	// (0x00035e11) ai5_sk_middle_pane_g2

0xb2bb,	// (0x00035e29) ai5_sk_middle_pane_g3

0x12b7,	// (0x0002be25) ai5_sk_middle_pane_g4

0x1291,	// (0x0002bdff) ai5_sk_middle_pane_g5

0x12d5,	// (0x0002be43) ai5_sk_middle_pane_g6

0x2330,	// (0x0002ce9e) ai5_sk_middle_pane_g7

0x0006,

0xfe76,	// (0x0003a9e4) ai5_sk_middle_pane_g

0xde32,	// (0x000389a0) aid_touch_area_size_lc0_ParamLimits

0xde32,	// (0x000389a0) aid_touch_area_size_lc0

0x99cc,	// (0x0003453a) cell_hwr_candidate_pane_t1_ParamLimits

0xb0e0,	// (0x00035c4e) aid_touch_navi_pane

0xe044,	// (0x00038bb2) status_dt_navi_pane_ParamLimits

0xe044,	// (0x00038bb2) status_dt_navi_pane

0xe051,	// (0x00038bbf) status_dt_sta_pane_ParamLimits

0xe051,	// (0x00038bbf) status_dt_sta_pane

0x2338,	// (0x0002cea6) dt_sta_controll_pane

0x2345,	// (0x0002ceb3) dt_sta_indi_pane

0x2356,	// (0x0002cec4) dt_sta_title_pane

0x7f84,	// (0x00032af2) bg_dt_sta_indi_pane_ParamLimits

0x7f84,	// (0x00032af2) bg_dt_sta_indi_pane

0x2369,	// (0x0002ced7) dt_sta_battery_pane

0x2371,	// (0x0002cedf) dt_sta_indi_pane_g1

0x237a,	// (0x0002cee8) dt_sta_indi_pane_g2

0x2383,	// (0x0002cef1) dt_sta_indi_pane_g3

0x0002,

0xfe85,	// (0x0003a9f3) dt_sta_indi_pane_g

0x238c,	// (0x0002cefa) dt_sta_signal_pane

0x84aa,	// (0x00033018) bg_dt_sta_title_pane_ParamLimits

0x84aa,	// (0x00033018) bg_dt_sta_title_pane

0x2395,	// (0x0002cf03) dt_sta_title_pane_g1

0x239d,	// (0x0002cf0b) dt_sta_title_pane_t1_ParamLimits

0x239d,	// (0x0002cf0b) dt_sta_title_pane_t1

0x7a54,	// (0x000325c2) bg_dt_sta_control_pane

0x23b2,	// (0x0002cf20) dt_sta_controll_pane_g1

0x23bb,	// (0x0002cf29) bg_dt_sta_title_pane_g1

0x23c4,	// (0x0002cf32) bg_dt_sta_title_pane_g2

0x23cd,	// (0x0002cf3b) bg_dt_sta_title_pane_g3

0x0002,

0xfe8c,	// (0x0003a9fa) bg_dt_sta_title_pane_g

0xd010,	// (0x00037b7e) bg_dt_sta_indi_pane_g1

0x23d6,	// (0x0002cf44) dt_sta_signal_pane_g1

0x23de,	// (0x0002cf4c) dt_sta_signal_pane_g2

0x0001,

0xfe93,	// (0x0003aa01) dt_sta_signal_pane_g

0x12dd,	// (0x0002be4b) dt_sta_battery_pane_g1

0x12e6,	// (0x0002be54) dt_sta_battery_pane_t1

0xd010,	// (0x00037b7e) bg_dt_sta_control_pane_g1

0xaacb,	// (0x00035639) fep_china_uni_eep_pane

0xaad3,	// (0x00035641) fep_china_uni_entry_pane_ParamLimits

0xaae3,	// (0x00035651) popup_fep_china_uni_window_g1_ParamLimits

0xaaf3,	// (0x00035661) popup_fep_china_uni_window_g2_ParamLimits

0xaaf3,	// (0x00035661) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0003a290) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0003a290) popup_fep_china_uni_window_g

0x12f5,	// (0x0002be63) fep_china_uni_eep_pane_g1

0x12fd,	// (0x0002be6b) fep_china_uni_eep_pane_t1

0x1122,	// (0x0002bc90) aid_touch_area_size_smil_player

0xb17e,	// (0x00035cec) lc0_clock_pane

0xb1c3,	// (0x00035d31) status_pane_g5_ParamLimits

0xb1c3,	// (0x00035d31) status_pane_g5

0x8ee7,	// (0x00033a55) popup_keymap_window

0xb197,	// (0x00035d05) status_icon_pane

0x2187,	// (0x0002ccf5) cell_ai5_widget_pane_g3_ParamLimits

0x21a1,	// (0x0002cd0f) cell_ai5_widget_pane_g4_ParamLimits

0x21b1,	// (0x0002cd1f) cell_ai5_widget_pane_g5_ParamLimits

0x21d9,	// (0x0002cd47) cell_ai5_widget_pane_g8_ParamLimits

0x21d9,	// (0x0002cd47) cell_ai5_widget_pane_g8

0x21ed,	// (0x0002cd5b) cell_ai5_widget_pane_g9_ParamLimits

0x21ed,	// (0x0002cd5b) cell_ai5_widget_pane_g9

0x2201,	// (0x0002cd6f) cell_ai5_widget_pane_g10_ParamLimits

0x2201,	// (0x0002cd6f) cell_ai5_widget_pane_g10

0x130c,	// (0x0002be7a) status_icon_pane_g1

0x7a54,	// (0x000325c2) bg_popup_sub_pane_cp13

0x1314,	// (0x0002be82) popup_keymap_window_t1

0xdde3,	// (0x00038951) control_pane_g6_ParamLimits

0xdde3,	// (0x00038951) control_pane_g6

0xddf0,	// (0x0003895e) control_pane_g7_ParamLimits

0xddf0,	// (0x0003895e) control_pane_g7

0xddfd,	// (0x0003896b) control_pane_g8_ParamLimits

0xddfd,	// (0x0003896b) control_pane_g8

0x2338,	// (0x0002cea6) dt_sta_controll_pane_ParamLimits

0x2345,	// (0x0002ceb3) dt_sta_indi_pane_ParamLimits

0x2356,	// (0x0002cec4) dt_sta_title_pane_ParamLimits

0x833c,	// (0x00032eaa) aid_size_touch_scroll_bar_cale

0x7c3b,	// (0x000327a9) popup_discreet_window_ParamLimits

0x7c3b,	// (0x000327a9) popup_discreet_window

0x7c9f,	// (0x0003280d) popup_sk_window

0xb853,	// (0x000363c1) bg_popup_sub_pane_cp28_ParamLimits

0xb853,	// (0x000363c1) bg_popup_sub_pane_cp28

0x1322,	// (0x0002be90) popup_discreet_window_g1_ParamLimits

0x1322,	// (0x0002be90) popup_discreet_window_g1

0x1342,	// (0x0002beb0) popup_discreet_window_t1_ParamLimits

0x1342,	// (0x0002beb0) popup_discreet_window_t1

0x1360,	// (0x0002bece) popup_discreet_window_t2_ParamLimits

0x1360,	// (0x0002bece) popup_discreet_window_t2

0x0002,

0xfe98,	// (0x0003aa06) popup_discreet_window_t_ParamLimits

0xfe98,	// (0x0003aa06) popup_discreet_window_t

0xa360,	// (0x00034ece) popup_sk_window_g1

0xa369,	// (0x00034ed7) popup_sk_window_g2

0x0001,

0xfe9f,	// (0x0003aa0d) popup_sk_window_g

0xa372,	// (0x00034ee0) popup_sk_window_t1

0xa380,	// (0x00034eee) popup_sk_window_t1_copy1

0x2173,	// (0x0002cce1) cell_ai5_widget_pane_g2_ParamLimits

0x22b9,	// (0x0002ce27) cell_ai5_widget_pane_t9_ParamLimits

0x22b9,	// (0x0002ce27) cell_ai5_widget_pane_t9

0x7a54,	// (0x000325c2) main_fep_fshwr2_pane

0xa38e,	// (0x00034efc) aid_fshwr2_btn_pane

0xa39a,	// (0x00034f08) aid_fshwr2_syb_pane

0xa3a6,	// (0x00034f14) aid_fshwr2_txt_pane

0xa3b2,	// (0x00034f20) fshwr2_func_candi_pane

0xa3c3,	// (0x00034f31) fshwr2_hwr_syb_pane

0xa3cf,	// (0x00034f3d) fshwr2_icf_pane

0x7a54,	// (0x000325c2) fshwr2_icf_bg_pane

0xa3f4,	// (0x00034f62) fshwr2_icf_pane_t1_ParamLimits

0xa3f4,	// (0x00034f62) fshwr2_icf_pane_t1

0xaa69,	// (0x000355d7) fshwr2_func_candi_pane_g1

0x23e6,	// (0x0002cf54) fshwr2_func_candi_row_pane_ParamLimits

0x23e6,	// (0x0002cf54) fshwr2_func_candi_row_pane

0xa40c,	// (0x00034f7a) cell_fshwr2_syb_pane_ParamLimits

0xa40c,	// (0x00034f7a) cell_fshwr2_syb_pane

0xd23c,	// (0x00037daa) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd23c,	// (0x00037daa) fshwr2_hwr_syb_pane_g1

0x7a54,	// (0x000325c2) bg_popup_call_pane_cp01

0xa420,	// (0x00034f8e) fshwr2_func_candi_cell_pane_ParamLimits

0xa420,	// (0x00034f8e) fshwr2_func_candi_cell_pane

0xbe3b,	// (0x000369a9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xbe3b,	// (0x000369a9) fshwr2_func_candi_cell_bg_pane

0xa45f,	// (0x00034fcd) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa45f,	// (0x00034fcd) fshwr2_func_candi_cell_pane_g1

0xa47f,	// (0x00034fed) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa47f,	// (0x00034fed) fshwr2_func_candi_cell_pane_t1

0x7a54,	// (0x000325c2) bg_button_pane_cp08

0xaefb,	// (0x00035a69) cell_fshwr2_syb_bg_pane

0xa492,	// (0x00035000) cell_fshwr2_syb_bg_pane_g1

0xa49a,	// (0x00035008) cell_fshwr2_syb_bg_pane_t1

0x84aa,	// (0x00033018) main_tmo_pane

0xe249,	// (0x00038db7) uni_indicator_pane_g1_ParamLimits

0xe25f,	// (0x00038dcd) uni_indicator_pane_g2_ParamLimits

0xe275,	// (0x00038de3) uni_indicator_pane_g3_ParamLimits

0xc214,	// (0x00036d82) uni_indicator_pane_g4_ParamLimits

0xc214,	// (0x00036d82) uni_indicator_pane_g4

0xc228,	// (0x00036d96) uni_indicator_pane_g5_ParamLimits

0xc228,	// (0x00036d96) uni_indicator_pane_g5

0xc228,	// (0x00036d96) uni_indicator_pane_g6_ParamLimits

0xc228,	// (0x00036d96) uni_indicator_pane_g6

0xf921,	// (0x0003a48f) uni_indicator_pane_g_ParamLimits

0xf44a,	// (0x00039fb8) popup_tmo_note_window_ParamLimits

0xf44a,	// (0x00039fb8) popup_tmo_note_window

0x84aa,	// (0x00033018) fshwr2_bg_pane

0xa470,	// (0x00034fde) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa470,	// (0x00034fde) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea4,	// (0x0003aa12) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea4,	// (0x0003aa12) fshwr2_func_candi_cell_pane_g

0xd010,	// (0x00037b7e) bg_popup_window_pane_cp01

0xa4a9,	// (0x00035017) bg_popup_window_pane_g1_cp01

0x13b2,	// (0x0002bf20) bg_popup_window_pane_cp22_ParamLimits

0x13b2,	// (0x0002bf20) bg_popup_window_pane_cp22

0x13c0,	// (0x0002bf2e) listscroll_tmo_link_pane_ParamLimits

0x13c0,	// (0x0002bf2e) listscroll_tmo_link_pane

0x1400,	// (0x0002bf6e) popup_tmo_note_window_g1_ParamLimits

0x1400,	// (0x0002bf6e) popup_tmo_note_window_g1

0x140d,	// (0x0002bf7b) tmo_note_info_pane_ParamLimits

0x140d,	// (0x0002bf7b) tmo_note_info_pane

0xa4b2,	// (0x00035020) list_tmo_note_info_pane_g1_ParamLimits

0xa4b2,	// (0x00035020) list_tmo_note_info_pane_g1

0x1427,	// (0x0002bf95) list_tmo_note_info_pane_g2_ParamLimits

0x1427,	// (0x0002bf95) list_tmo_note_info_pane_g2

0x0001,

0xfea9,	// (0x0003aa17) list_tmo_note_info_pane_g_ParamLimits

0xfea9,	// (0x0003aa17) list_tmo_note_info_pane_g

0x1443,	// (0x0002bfb1) list_tmo_note_info_text_pane_ParamLimits

0x1443,	// (0x0002bfb1) list_tmo_note_info_text_pane

0x1485,	// (0x0002bff3) list_tmo_link_pane

0x1492,	// (0x0002c000) scroll_pane_cp20

0x149f,	// (0x0002c00d) list_single_tmo_link_pane_ParamLimits

0x149f,	// (0x0002c00d) list_single_tmo_link_pane

0x14af,	// (0x0002c01d) list_single_tmo_link_pane_t1

0x14bd,	// (0x0002c02b) list_tmo_note_info_text_pane_t1_ParamLimits

0x14bd,	// (0x0002c02b) list_tmo_note_info_text_pane_t1

0x8558,	// (0x000330c6) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8558,	// (0x000330c6) aid_size_touch_scroll_bar_cp01

0x71d0,	// (0x00031d3e) aid_size_touch_slider_marker

0x7c8b,	// (0x000327f9) popup_settings_window_ParamLimits

0x7c8b,	// (0x000327f9) popup_settings_window

0x7386,	// (0x00031ef4) popup_candi_list_indi_window

0xb0e0,	// (0x00035c4e) aid_touch_navi_pane_ParamLimits

0x9beb,	// (0x00034759) rs_clock_indi_pane

0x9bf4,	// (0x00034762) sctrl_sk_bottom_pane_ParamLimits

0x9c05,	// (0x00034773) sctrl_sk_top_pane_ParamLimits

0x9cf1,	// (0x0003485f) popup_fep_tooltip_window

0x1170,	// (0x0002bcde) aid_size_cell_widget_grid_ParamLimits

0x215f,	// (0x0002cccd) cell_ai5_widget_pane_g1_ParamLimits

0x215f,	// (0x0002cccd) cell_ai5_widget_pane_g1

0x21c1,	// (0x0002cd2f) cell_ai5_widget_pane_g6_ParamLimits

0x21cd,	// (0x0002cd3b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe27,	// (0x0003a995) cell_ai5_widget_pane_g_ParamLimits

0xfe27,	// (0x0003a995) cell_ai5_widget_pane_g

0x22e8,	// (0x0002ce56) cell_ai5_widget_pane_t10_ParamLimits

0x22e8,	// (0x0002ce56) cell_ai5_widget_pane_t10

0x2306,	// (0x0002ce74) grid_ai5_widget_pane_ParamLimits

0x124c,	// (0x0002bdba) cell_contacts_ai5_widget_pane_ParamLimits

0x124c,	// (0x0002bdba) cell_contacts_ai5_widget_pane

0x1375,	// (0x0002bee3) popup_discreet_window_t3_ParamLimits

0x1375,	// (0x0002bee3) popup_discreet_window_t3

0xa3e2,	// (0x00034f50) popup_fshwr2_char_preview_window_ParamLimits

0xa3e2,	// (0x00034f50) popup_fshwr2_char_preview_window

0xa4c9,	// (0x00035037) tmo_note_info_pane_t1

0xa4de,	// (0x0003504c) tmo_note_info_pane_t2

0xa4f3,	// (0x00035061) tmo_note_info_pane_t3

0x1461,	// (0x0002bfcf) tmo_note_info_pane_t4

0x1473,	// (0x0002bfe1) tmo_note_info_pane_t5

0x0004,

0xfeae,	// (0x0003aa1c) tmo_note_info_pane_t

0x1485,	// (0x0002bff3) list_tmo_link_pane_ParamLimits

0x1492,	// (0x0002c000) scroll_pane_cp20_ParamLimits

0x7a54,	// (0x000325c2) bg_popup_fep_char_preview_window_cp01

0x14d6,	// (0x0002c044) popup_fshwr2_char_preview_window_t1

0x14e4,	// (0x0002c052) popup_candi_list_indi_window_g1

0x14ed,	// (0x0002c05b) bg_cell_contacts_ai5_widget_pane

0x14f9,	// (0x0002c067) cell_contacts_ai5_widget_pane_g1

0x150e,	// (0x0002c07c) cell_contacts_ai5_widget_pane_g2

0x151a,	// (0x0002c088) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb9,	// (0x0003aa27) cell_contacts_ai5_widget_pane_g

0x1526,	// (0x0002c094) cell_contacts_ai5_widget_pane_t1

0x84aa,	// (0x00033018) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa56b,	// (0x000350d9) settings_container_pane

0xaefb,	// (0x00035a69) listscroll_set_pane_copy1

0xc94c,	// (0x000374ba) scroll_pane_cp121_copy1

0x1538,	// (0x0002c0a6) set_content_pane_copy1

0x1540,	// (0x0002c0ae) aid_height_set_list_copy1_ParamLimits

0x1540,	// (0x0002c0ae) aid_height_set_list_copy1

0xc3c1,	// (0x00036f2f) aid_size_parent_copy1_ParamLimits

0xc3c1,	// (0x00036f2f) aid_size_parent_copy1

0x154c,	// (0x0002c0ba) button_value_adjust_pane_cp6_copy1_ParamLimits

0x154c,	// (0x0002c0ba) button_value_adjust_pane_cp6_copy1

0x8d9a,	// (0x00033908) list_highlight_pane_cp2_copy1_ParamLimits

0x8d9a,	// (0x00033908) list_highlight_pane_cp2_copy1

0xa577,	// (0x000350e5) list_set_pane_copy1_ParamLimits

0xa577,	// (0x000350e5) list_set_pane_copy1

0xa508,	// (0x00035076) main_pane_set_t1_copy1_ParamLimits

0xa508,	// (0x00035076) main_pane_set_t1_copy1

0xa542,	// (0x000350b0) main_pane_set_t2_copy1_ParamLimits

0xa542,	// (0x000350b0) main_pane_set_t2_copy1

0x1560,	// (0x0002c0ce) main_pane_set_t3_copy1

0x156e,	// (0x0002c0dc) main_pane_set_t4_copy1

0xa55f,	// (0x000350cd) set_content_pane_g1_copy1_ParamLimits

0xa55f,	// (0x000350cd) set_content_pane_g1_copy1

0x157c,	// (0x0002c0ea) setting_code_pane_copy1

0x1584,	// (0x0002c0f2) setting_slider_graphic_pane_copy1

0x1584,	// (0x0002c0f2) setting_slider_pane_copy1

0x1584,	// (0x0002c0f2) setting_text_pane_copy1

0x1584,	// (0x0002c0f2) setting_volume_pane_copy1

0x158c,	// (0x0002c0fa) settings_code_pane_cp2_copy1

0x1594,	// (0x0002c102) settings_code_pane_cp_copy1_ParamLimits

0x1594,	// (0x0002c102) settings_code_pane_cp_copy1

0xa605,	// (0x00035173) volume_set_pane_copy1

0xa60d,	// (0x0003517b) volume_set_pane_g10_copy1

0xa615,	// (0x00035183) volume_set_pane_g1_copy1

0xa61d,	// (0x0003518b) volume_set_pane_g2_copy1

0xa625,	// (0x00035193) volume_set_pane_g3_copy1

0xa62d,	// (0x0003519b) volume_set_pane_g4_copy1

0xa635,	// (0x000351a3) volume_set_pane_g5_copy1

0xa63d,	// (0x000351ab) volume_set_pane_g6_copy1

0xa645,	// (0x000351b3) volume_set_pane_g7_copy1

0xa64d,	// (0x000351bb) volume_set_pane_g8_copy1

0xa655,	// (0x000351c3) volume_set_pane_g9_copy1

0x7db1,	// (0x0003291f) bg_set_opt_pane_cp_copy1_ParamLimits

0x7db1,	// (0x0003291f) bg_set_opt_pane_cp_copy1

0x7dcf,	// (0x0003293d) setting_slider_pane_t1_copy1_ParamLimits

0x7dcf,	// (0x0003293d) setting_slider_pane_t1_copy1

0xa65d,	// (0x000351cb) setting_slider_pane_t2_copy1_ParamLimits

0xa65d,	// (0x000351cb) setting_slider_pane_t2_copy1

0xa676,	// (0x000351e4) setting_slider_pane_t3_copy1_ParamLimits

0xa676,	// (0x000351e4) setting_slider_pane_t3_copy1

0x7e15,	// (0x00032983) slider_set_pane_copy1_ParamLimits

0x7e15,	// (0x00032983) slider_set_pane_copy1

0x84f9,	// (0x00033067) set_opt_bg_pane_g1_copy2

0x8501,	// (0x0003306f) set_opt_bg_pane_g2_copy2

0x15a8,	// (0x0002c116) set_opt_bg_pane_g3_copy2

0x8511,	// (0x0003307f) set_opt_bg_pane_g4_copy2

0x8519,	// (0x00033087) set_opt_bg_pane_g5_copy2

0x8521,	// (0x0003308f) set_opt_bg_pane_g6_copy2

0xa68d,	// (0x000351fb) set_opt_bg_pane_g7_copy2

0x15b0,	// (0x0002c11e) set_opt_bg_pane_g8_copy2

0x15b8,	// (0x0002c126) set_opt_bg_pane_g9_copy2

0x94ff,	// (0x0003406d) aid_size_touch_slider_mark_copy1_ParamLimits

0x94ff,	// (0x0003406d) aid_size_touch_slider_mark_copy1

0xc3d3,	// (0x00036f41) slider_set_pane_g1_copy1

0xc3dc,	// (0x00036f4a) slider_set_pane_g2_copy1

0x951f,	// (0x0003408d) slider_set_pane_g3_copy1_ParamLimits

0x951f,	// (0x0003408d) slider_set_pane_g3_copy1

0x9533,	// (0x000340a1) slider_set_pane_g4_copy1_ParamLimits

0x9533,	// (0x000340a1) slider_set_pane_g4_copy1

0x954b,	// (0x000340b9) slider_set_pane_g5_copy1_ParamLimits

0x954b,	// (0x000340b9) slider_set_pane_g5_copy1

0x951f,	// (0x0003408d) slider_set_pane_g6_copy1_ParamLimits

0x951f,	// (0x0003408d) slider_set_pane_g6_copy1

0xa695,	// (0x00035203) slider_set_pane_g7_copy1_ParamLimits

0xa695,	// (0x00035203) slider_set_pane_g7_copy1

0x7c1d,	// (0x0003278b) bg_set_opt_pane_cp2_copy1

0x7e2b,	// (0x00032999) setting_slider_graphic_pane_g1_copy1

0xa6ab,	// (0x00035219) setting_slider_graphic_pane_t1_copy1

0xa6ba,	// (0x00035228) setting_slider_graphic_pane_t2_copy1

0xa6c9,	// (0x00035237) slider_set_pane_cp_copy1

0x15c8,	// (0x0002c136) input_focus_pane_cp1_copy1

0x15d1,	// (0x0002c13f) list_set_text_pane_copy1

0x15d9,	// (0x0002c147) setting_text_pane_g1_copy1

0x7a34,	// (0x000325a2) set_text_pane_t1_copy1

0x15c8,	// (0x0002c136) input_focus_pane_cp2_copy1

0x15d9,	// (0x0002c147) setting_code_pane_g1_copy1

0x15fb,	// (0x0002c169) setting_code_pane_t1_copy1

0xa6d1,	// (0x0003523f) list_set_graphic_pane_copy1

0x7c1d,	// (0x0003278b) bg_set_opt_pane_cp4_copy1

0x1609,	// (0x0002c177) list_set_graphic_pane_g1_copy1_ParamLimits

0x1609,	// (0x0002c177) list_set_graphic_pane_g1_copy1

0x1615,	// (0x0002c183) list_set_graphic_pane_g2_copy1

0xac76,	// (0x000357e4) list_set_graphic_pane_t1_copy1_ParamLimits

0xac76,	// (0x000357e4) list_set_graphic_pane_t1_copy1

0xd010,	// (0x00037b7e) rs_clock_indi_pane_g1

0x161d,	// (0x0002c18b) rs_clock_indi_pane_t1

0x162b,	// (0x0002c199) rs_indi_pane

0x1633,	// (0x0002c1a1) rs_indi_pane_g1

0x163c,	// (0x0002c1aa) rs_indi_pane_g2

0x14e4,	// (0x0002c052) rs_indi_pane_g3

0x0002,

0xfec0,	// (0x0003aa2e) rs_indi_pane_g

0xaefb,	// (0x00035a69) bg_popup_preview_window_pane_cp03

0x1645,	// (0x0002c1b3) popup_fep_tooltip_window_t1

0xe48c,	// (0x00038ffa) popup_note2_window_g2_ParamLimits

0xe48c,	// (0x00038ffa) popup_note2_window_g2

0x0001,

0xfc60,	// (0x0003a7ce) popup_note2_window_g_ParamLimits

0xfc60,	// (0x0003a7ce) popup_note2_window_g

0xe907,	// (0x00039475) bg_popup_sub_pane_cp11_ParamLimits

0xe914,	// (0x00039482) cell_ai3_links_pane_g1_ParamLimits

0xe92b,	// (0x00039499) cell_ai3_links_pane_t1

0x7a34,	// (0x000325a2) set_text_pane_t1_copy1_ParamLimits

0xae22,	// (0x00035990) cell_graphic_popup_pane_cp2_ParamLimits

0xae22,	// (0x00035990) cell_graphic_popup_pane_cp2

0x1653,	// (0x0002c1c1) cell_graphic_popup_pane_g1_cp2

0x81eb,	// (0x00032d59) cell_graphic_popup_pane_g2_cp2

0x165b,	// (0x0002c1c9) cell_graphic_popup_pane_g3_cp2

0x1663,	// (0x0002c1d1) cell_graphic_popup_pane_t2_cp2

0x81fc,	// (0x00032d6a) grid_highlight_pane_cp3_cp2

0x8907,	// (0x00033475) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84aa,	// (0x00033018) main_tmo_pane_ParamLimits

0xf442,	// (0x00039fb0) popup_tmo_big_image_note_window

0x11ad,	// (0x0002bd1b) cell_ai5_widget_list_pane

0x2156,	// (0x0002ccc4) cell_ai5_widget_lrg_icon_pane

0xa4c9,	// (0x00035037) tmo_note_info_pane_t1_ParamLimits

0xa4de,	// (0x0003504c) tmo_note_info_pane_t2_ParamLimits

0xa4f3,	// (0x00035061) tmo_note_info_pane_t3_ParamLimits

0x1461,	// (0x0002bfcf) tmo_note_info_pane_t4_ParamLimits

0x1473,	// (0x0002bfe1) tmo_note_info_pane_t5_ParamLimits

0xfeae,	// (0x0003aa1c) tmo_note_info_pane_t_ParamLimits

0xa56b,	// (0x000350d9) settings_container_pane_ParamLimits

0x15c0,	// (0x0002c12e) indicator_popup_pane_cp5

0x15c0,	// (0x0002c12e) indicator_popup_pane_cp6

0xa6d1,	// (0x0003523f) list_set_graphic_pane_copy1_ParamLimits

0x7a54,	// (0x000325c2) bg_popup_window_pane_cp23

0x1671,	// (0x0002c1df) popup_tmo_big_image_note_window_g1

0x167a,	// (0x0002c1e8) popup_tmo_big_image_note_window_t1

0x1688,	// (0x0002c1f6) popup_tmo_big_image_note_window_t2

0x1696,	// (0x0002c204) popup_tmo_big_image_note_window_t3

0x0002,

0xfec7,	// (0x0003aa35) popup_tmo_big_image_note_window_t

0xd010,	// (0x00037b7e) cell_ai5_widget_lrg_icon_pane_g1

0x16a4,	// (0x0002c212) cell_ai5_widget_lrg_icon_pane_t1

0xa6e5,	// (0x00035253) cell_ai5_widget_list_row_pane_ParamLimits

0xa6e5,	// (0x00035253) cell_ai5_widget_list_row_pane

0xa6fc,	// (0x0003526a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa6fc,	// (0x0003526a) cell_ai5_widget_list_row_pane_g1

0xa709,	// (0x00035277) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa709,	// (0x00035277) cell_ai5_widget_list_row_pane_t1

0xa737,	// (0x000352a5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa737,	// (0x000352a5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfece,	// (0x0003aa3c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfece,	// (0x0003aa3c) cell_ai5_widget_list_row_pane_t

0x7a54,	// (0x000325c2) main_fep_vtchi_ss_pane

0x16d2,	// (0x0002c240) popup_fep_char_pre_window

0x16da,	// (0x0002c248) popup_fep_ituss_window

0xa75f,	// (0x000352cd) popup_fep_vkbss_window

0x170d,	// (0x0002c27b) grid_vkbss_keypad_pane_ParamLimits

0x170d,	// (0x0002c27b) grid_vkbss_keypad_pane

0x171d,	// (0x0002c28b) ituss_keypad_pane

0xa77b,	// (0x000352e9) aid_vkbss_key_offset_ParamLimits

0xa77b,	// (0x000352e9) aid_vkbss_key_offset

0xa787,	// (0x000352f5) cell_vkbss_key_pane_ParamLimits

0xa787,	// (0x000352f5) cell_vkbss_key_pane

0xb19f,	// (0x00035d0d) bg_cell_vkbss_key_g1_ParamLimits

0xb19f,	// (0x00035d0d) bg_cell_vkbss_key_g1

0x172c,	// (0x0002c29a) cell_vkbss_key_3p_pane_ParamLimits

0x172c,	// (0x0002c29a) cell_vkbss_key_3p_pane

0x1746,	// (0x0002c2b4) cell_vkbss_key_g1_ParamLimits

0x1746,	// (0x0002c2b4) cell_vkbss_key_g1

0x1760,	// (0x0002c2ce) cell_vkbss_key_t1_ParamLimits

0x1760,	// (0x0002c2ce) cell_vkbss_key_t1

0xa79d,	// (0x0003530b) cell_ituss_key_pane_ParamLimits

0xa79d,	// (0x0003530b) cell_ituss_key_pane

0x178b,	// (0x0002c2f9) bg_cell_ituss_key_g1_ParamLimits

0x178b,	// (0x0002c2f9) bg_cell_ituss_key_g1

0x1797,	// (0x0002c305) cell_ituss_key_pane_g1_ParamLimits

0x1797,	// (0x0002c305) cell_ituss_key_pane_g1

0xa7ae,	// (0x0003531c) cell_ituss_key_pane_g2_ParamLimits

0xa7ae,	// (0x0003531c) cell_ituss_key_pane_g2

0x0002,

0xfed5,	// (0x0003aa43) cell_ituss_key_pane_g_ParamLimits

0xfed5,	// (0x0003aa43) cell_ituss_key_pane_g

0xa7d6,	// (0x00035344) cell_ituss_key_t1_ParamLimits

0xa7d6,	// (0x00035344) cell_ituss_key_t1

0xa810,	// (0x0003537e) cell_ituss_key_t2_ParamLimits

0xa810,	// (0x0003537e) cell_ituss_key_t2

0xa841,	// (0x000353af) cell_ituss_key_t3_ParamLimits

0xa841,	// (0x000353af) cell_ituss_key_t3

0xa810,	// (0x0003537e) cell_ituss_key_t4_ParamLimits

0xa810,	// (0x0003537e) cell_ituss_key_t4

0x0004,

0xfedc,	// (0x0003aa4a) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x0003aa4a) cell_ituss_key_t

0x17cd,	// (0x0002c33b) cell_vkbss_key_3p_pane_g1

0x17c5,	// (0x0002c333) cell_vkbss_key_3p_pane_g2

0x17bd,	// (0x0002c32b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0003aa55) cell_vkbss_key_3p_pane_g

0xaefb,	// (0x00035a69) bg_popup_fep_char_preview_window_cp02

0x17d5,	// (0x0002c343) popup_fep_char_pre_window_t1

0x2143,	// (0x0002ccb1) main_ai5_sk_pane

0x14ed,	// (0x0002c05b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x14f9,	// (0x0002c067) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x150e,	// (0x0002c07c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x151a,	// (0x0002c088) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb9,	// (0x0003aa27) cell_contacts_ai5_widget_pane_g_ParamLimits

0x1526,	// (0x0002c094) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84aa,	// (0x00033018) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xa884,	// (0x000353f2) main_ai5_sk_pane_g1

0xb69d,	// (0x0003620b) popup_query_code_window_g1

0x16ec,	// (0x0002c25a) popup_fep_vkb_icf_pane

0x16f7,	// (0x0002c265) popup_fep_vtchi_icf_pane

0x17e3,	// (0x0002c351) bg_icf_pane

0x17ef,	// (0x0002c35d) list_vkb_icf_pane

0x17fb,	// (0x0002c369) bg_icf_pane_cp01

0x180e,	// (0x0002c37c) vtchi_icf_list_pane

0x181e,	// (0x0002c38c) list_vkb_icf_pane_t1_ParamLimits

0x181e,	// (0x0002c38c) list_vkb_icf_pane_t1

0x1833,	// (0x0002c3a1) vtchi_icf_list_pane_t1_ParamLimits

0x1833,	// (0x0002c3a1) vtchi_icf_list_pane_t1

0x16da,	// (0x0002c248) popup_fep_ituss_window_ParamLimits

0x16f7,	// (0x0002c265) popup_fep_vtchi_icf_pane_ParamLimits

0x171d,	// (0x0002c28b) ituss_keypad_pane_ParamLimits

0xa771,	// (0x000352df) ituss_sks_pane

0x17e3,	// (0x0002c351) bg_icf_pane_ParamLimits

0x16b2,	// (0x0002c220) icf_edit_indi_pane_ParamLimits

0x16b2,	// (0x0002c220) icf_edit_indi_pane

0x17ef,	// (0x0002c35d) list_vkb_icf_pane_ParamLimits

0x17fb,	// (0x0002c369) bg_icf_pane_cp01_ParamLimits

0x16c5,	// (0x0002c233) icf_edit_indi_pane_cp01_ParamLimits

0x16c5,	// (0x0002c233) icf_edit_indi_pane_cp01

0x1816,	// (0x0002c384) vtchi_query_pane

0x10fb,	// (0x0002bc69) icf_edit_indi_pane_g1_ParamLimits

0x10fb,	// (0x0002bc69) icf_edit_indi_pane_g1

0xa89f,	// (0x0003540d) icf_edit_indi_pane_g2_ParamLimits

0xa89f,	// (0x0003540d) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0003aa6d) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0003aa6d) icf_edit_indi_pane_g

0xa8af,	// (0x0003541d) icf_edit_indi_pane_t1

0x184a,	// (0x0002c3b8) bg_input_focus_pane_cp042

0x1853,	// (0x0002c3c1) vtchi_button_pane

0x185c,	// (0x0002c3ca) vtchi_query_pane_t1

0x186a,	// (0x0002c3d8) vtchi_query_pane_t2

0x1878,	// (0x0002c3e6) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0003aa5c) vtchi_query_pane_t

0x7a54,	// (0x000325c2) bg_button_pane_cp13

0x1886,	// (0x0002c3f4) vtchi_button_pane_g1

0xa88d,	// (0x000353fb) ituss_sks_pane_g1

0xa896,	// (0x00035404) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0003aa63) ituss_sks_pane_g

0x189c,	// (0x0002c40a) ituss_sks_pane_t1

0x188e,	// (0x0002c3fc) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0003aa68) ituss_sks_pane_t

0xcc3d,	// (0x000377ab) indicator_nsta_pane_cp_g1

0xcc46,	// (0x000377b4) indicator_nsta_pane_cp_g2

0xcc4e,	// (0x000377bc) indicator_nsta_pane_cp_g3

0xcc56,	// (0x000377c4) indicator_nsta_pane_cp_g4

0xcc5e,	// (0x000377cc) indicator_nsta_pane_cp_g5

0xcc66,	// (0x000377d4) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0003a618) indicator_nsta_pane_cp_g

0x1f88,	// (0x0002caf6) cell_graphic2_pane_t2_ParamLimits

0x1f88,	// (0x0002caf6) cell_graphic2_pane_t2

0x0001,

0xfdb0,	// (0x0003a91e) cell_graphic2_pane_t_ParamLimits

0xfdb0,	// (0x0003a91e) cell_graphic2_pane_t

0x1fb5,	// (0x0002cb23) cell_graphic2_control_pane_t1

0xdc27,	// (0x00038795) signal_pane_g3_ParamLimits

0xdc27,	// (0x00038795) signal_pane_g3

0xdc38,	// (0x000387a6) signal_pane_g4_ParamLimits

0xdc38,	// (0x000387a6) signal_pane_g4

0xa749,	// (0x000352b7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa749,	// (0x000352b7) cell_ai5_widget_list_row_pane_t3

0x17ab,	// (0x0002c319) cell_ituss_key_pane_t1_ParamLimits

0x17ab,	// (0x0002c319) cell_ituss_key_pane_t1

0xb373,	// (0x00035ee1) form_field_data_wide_pane_vc_t2_ParamLimits

0xb373,	// (0x00035ee1) form_field_data_wide_pane_vc_t2

0xb385,	// (0x00035ef3) form_field_data_wide_pane_vc_t3_ParamLimits

0xb385,	// (0x00035ef3) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0003a377) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0003a377) form_field_data_wide_pane_vc_t

0xc991,	// (0x000374ff) form_field_slider_wide_pane_vc_t3_ParamLimits

0xc991,	// (0x000374ff) form_field_slider_wide_pane_vc_t3

0xca4f,	// (0x000375bd) form_field_popup_wide_pane_vc_t2_ParamLimits

0xca4f,	// (0x000375bd) form_field_popup_wide_pane_vc_t2

0xca64,	// (0x000375d2) form_field_popup_wide_pane_vc_t3_ParamLimits

0xca64,	// (0x000375d2) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0003a607) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0003a607) form_field_popup_wide_pane_vc_t

0xa38e,	// (0x00034efc) aid_fshwr2_btn_pane_ParamLimits

0xa39a,	// (0x00034f08) aid_fshwr2_syb_pane_ParamLimits

0xa3a6,	// (0x00034f14) aid_fshwr2_txt_pane_ParamLimits

0x84aa,	// (0x00033018) fshwr2_bg_pane_ParamLimits

0xa3b2,	// (0x00034f20) fshwr2_func_candi_pane_ParamLimits

0xa3c3,	// (0x00034f31) fshwr2_hwr_syb_pane_ParamLimits

0xa3cf,	// (0x00034f3d) fshwr2_icf_pane_ParamLimits

0x974a,	// (0x000342b8) list_double_graphic_pane_vc_g4_ParamLimits

0x974a,	// (0x000342b8) list_double_graphic_pane_vc_g4

0xa7ca,	// (0x00035338) cell_ituss_key_pane_g3_ParamLimits

0xa7ca,	// (0x00035338) cell_ituss_key_pane_g3

0xa872,	// (0x000353e0) cell_ituss_key_t5_ParamLimits

0xa872,	// (0x000353e0) cell_ituss_key_t5

0xa75f,	// (0x000352cd) popup_fep_vkbss_window_ParamLimits

0x214d,	// (0x0002ccbb) aid_cell_ai5_quarter

0xa8af,	// (0x0003541d) icf_edit_indi_pane_t1_ParamLimits

0x802c,	// (0x00032b9a) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x802c,	// (0x00032b9a) aid_tch_indicator_popup_pane_cp2

0x803f,	// (0x00032bad) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x803f,	// (0x00032bad) aid_tch_query_popup_data_pane_cp2

0xb645,	// (0x000361b3) aid_tch_query_popup_pane_ParamLimits

0xb645,	// (0x000361b3) aid_tch_query_popup_pane

0xb645,	// (0x000361b3) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xb645,	// (0x000361b3) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large

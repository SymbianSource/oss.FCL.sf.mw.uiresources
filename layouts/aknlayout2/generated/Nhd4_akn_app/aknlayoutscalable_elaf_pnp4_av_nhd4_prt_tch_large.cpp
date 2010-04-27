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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003a53a };

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
0x7eb4,	// (0x000423ee) Screen

0x7ec8,	// (0x00042402) application_window_ParamLimits

0x7ec8,	// (0x00042402) application_window

0x7ee2,	// (0x0004241c) screen_g1

0x5896,	// (0x0003fdd0) area_bottom_pane_ParamLimits

0x5896,	// (0x0003fdd0) area_bottom_pane

0x5956,	// (0x0003fe90) area_top_pane_ParamLimits

0x5956,	// (0x0003fe90) area_top_pane

0x59ea,	// (0x0003ff24) main_pane_ParamLimits

0x59ea,	// (0x0003ff24) main_pane

0x7eec,	// (0x00042426) misc_graphics

0x986a,	// (0x00043da4) battery_pane_ParamLimits

0x986a,	// (0x00043da4) battery_pane

0xa549,	// (0x00044a83) bg_status_flat_pane_g8

0xa551,	// (0x00044a8b) bg_status_flat_pane_g9

0x992c,	// (0x00043e66) context_pane_ParamLimits

0x992c,	// (0x00043e66) context_pane

0x9a4e,	// (0x00043f88) navi_pane_ParamLimits

0x9a4e,	// (0x00043f88) navi_pane

0x9ad2,	// (0x0004400c) signal_pane_ParamLimits

0x9ad2,	// (0x0004400c) signal_pane

0x0008,

0xf879,	// (0x00049db3) bg_status_flat_pane_g

0x9b3f,	// (0x00044079) status_pane_g1_ParamLimits

0x9b3f,	// (0x00044079) status_pane_g1

0x9b4b,	// (0x00044085) status_pane_g2_ParamLimits

0x9b4b,	// (0x00044085) status_pane_g2

0x9b57,	// (0x00044091) status_pane_g3_ParamLimits

0x9b57,	// (0x00044091) status_pane_g3

0x0004,

0xf7a5,	// (0x00049cdf) status_pane_g_ParamLimits

0xf7a5,	// (0x00049cdf) status_pane_g

0x9b8b,	// (0x000440c5) title_pane_ParamLimits

0x9b8b,	// (0x000440c5) title_pane

0x9bc8,	// (0x00044102) uni_indicator_pane_ParamLimits

0x9bc8,	// (0x00044102) uni_indicator_pane

0x9792,	// (0x00043ccc) bg_list_pane_ParamLimits

0x9792,	// (0x00043ccc) bg_list_pane

0x21bf,	// (0x0003c6f9) find_pane

0x97b2,	// (0x00043cec) listscroll_app_pane_ParamLimits

0x97b2,	// (0x00043cec) listscroll_app_pane

0x97be,	// (0x00043cf8) listscroll_form_pane

0x635e,	// (0x00040898) listscroll_gen_pane_ParamLimits

0x635e,	// (0x00040898) listscroll_gen_pane

0x6372,	// (0x000408ac) listscroll_set_pane

0x8a20,	// (0x00042f5a) main_idle_act_pane

0x949e,	// (0x000439d8) main_idle_trad_pane

0x949e,	// (0x000439d8) main_list_empty_pane

0x97d8,	// (0x00043d12) main_midp_pane

0x97e4,	// (0x00043d1e) main_pane_g1_ParamLimits

0x97e4,	// (0x00043d1e) main_pane_g1

0x637a,	// (0x000408b4) popup_ai_message_window_ParamLimits

0x637a,	// (0x000408b4) popup_ai_message_window

0x641e,	// (0x00040958) popup_fep_china_uni_window_ParamLimits

0x641e,	// (0x00040958) popup_fep_china_uni_window

0x6478,	// (0x000409b2) popup_fep_japan_candidate_window_ParamLimits

0x6478,	// (0x000409b2) popup_fep_japan_candidate_window

0x6496,	// (0x000409d0) popup_fep_japan_predictive_window_ParamLimits

0x6496,	// (0x000409d0) popup_fep_japan_predictive_window

0x64c6,	// (0x00040a00) popup_find_window

0x64d3,	// (0x00040a0d) popup_grid_graphic_window_ParamLimits

0x64d3,	// (0x00040a0d) popup_grid_graphic_window

0x64fb,	// (0x00040a35) popup_large_graphic_colour_window

0x6521,	// (0x00040a5b) popup_menu_window_ParamLimits

0x6521,	// (0x00040a5b) popup_menu_window

0x66db,	// (0x00040c15) popup_note_image_window

0x66c7,	// (0x00040c01) popup_note_wait_window_ParamLimits

0x66c7,	// (0x00040c01) popup_note_wait_window

0x66c7,	// (0x00040c01) popup_note_window_ParamLimits

0x66c7,	// (0x00040c01) popup_note_window

0x6731,	// (0x00040c6b) popup_query_code_window_ParamLimits

0x6731,	// (0x00040c6b) popup_query_code_window

0x6745,	// (0x00040c7f) popup_query_data_code_window_ParamLimits

0x6745,	// (0x00040c7f) popup_query_data_code_window

0x6760,	// (0x00040c9a) popup_query_data_window_ParamLimits

0x6760,	// (0x00040c9a) popup_query_data_window

0x677a,	// (0x00040cb4) popup_query_sat_info_window_ParamLimits

0x677a,	// (0x00040cb4) popup_query_sat_info_window

0x67b3,	// (0x00040ced) popup_snote_single_graphic_window_ParamLimits

0x67b3,	// (0x00040ced) popup_snote_single_graphic_window

0x67b3,	// (0x00040ced) popup_snote_single_text_window_ParamLimits

0x67b3,	// (0x00040ced) popup_snote_single_text_window

0x67c8,	// (0x00040d02) popup_sub_window_general

0x68f6,	// (0x00040e30) popup_window_general_ParamLimits

0x68f6,	// (0x00040e30) popup_window_general

0x97f2,	// (0x00043d2c) power_save_pane

0x6204,	// (0x0004073e) control_pane_g1_ParamLimits

0x6204,	// (0x0004073e) control_pane_g1

0x622b,	// (0x00040765) control_pane_g2_ParamLimits

0x622b,	// (0x00040765) control_pane_g2

0x9755,	// (0x00043c8f) control_pane_g3_ParamLimits

0x9755,	// (0x00043c8f) control_pane_g3

0x0007,

0xf78d,	// (0x00049cc7) control_pane_g_ParamLimits

0xf78d,	// (0x00049cc7) control_pane_g

0x6273,	// (0x000407ad) control_pane_t1_ParamLimits

0x6273,	// (0x000407ad) control_pane_t1

0x62bf,	// (0x000407f9) control_pane_t2_ParamLimits

0x62bf,	// (0x000407f9) control_pane_t2

0x0002,

0xf79e,	// (0x00049cd8) control_pane_t_ParamLimits

0xf79e,	// (0x00049cd8) control_pane_t

0x967a,	// (0x00043bb4) navi_navi_volume_pane_cp1

0x9682,	// (0x00043bbc) status_small_icon_pane

0x968a,	// (0x00043bc4) status_small_pane_g1_ParamLimits

0x968a,	// (0x00043bc4) status_small_pane_g1

0x96be,	// (0x00043bf8) status_small_pane_g2_ParamLimits

0x96be,	// (0x00043bf8) status_small_pane_g2

0x96ca,	// (0x00043c04) status_small_pane_g3_ParamLimits

0x96ca,	// (0x00043c04) status_small_pane_g3

0x96d6,	// (0x00043c10) status_small_pane_g4_ParamLimits

0x96d6,	// (0x00043c10) status_small_pane_g4

0x96e2,	// (0x00043c1c) status_small_pane_g5_ParamLimits

0x96e2,	// (0x00043c1c) status_small_pane_g5

0x96f0,	// (0x00043c2a) status_small_pane_g6_ParamLimits

0x96f0,	// (0x00043c2a) status_small_pane_g6

0x0007,

0xf77c,	// (0x00049cb6) status_small_pane_g_ParamLimits

0xf77c,	// (0x00049cb6) status_small_pane_g

0x971f,	// (0x00043c59) status_small_pane_t1

0x9741,	// (0x00043c7b) status_small_wait_pane_ParamLimits

0x9741,	// (0x00043c7b) status_small_wait_pane

0x8f14,	// (0x0004344e) aid_levels_signal_ParamLimits

0x8f14,	// (0x0004344e) aid_levels_signal

0x8f26,	// (0x00043460) signal_pane_g1_ParamLimits

0x8f26,	// (0x00043460) signal_pane_g1

0x8f3b,	// (0x00043475) signal_pane_g2_ParamLimits

0x8f3b,	// (0x00043475) signal_pane_g2

0x0003,

0xf70d,	// (0x00049c47) signal_pane_g_ParamLimits

0xf70d,	// (0x00049c47) signal_pane_g

0x8f75,	// (0x000434af) context_pane_g1

0x7ef6,	// (0x00042430) title_pane_g1

0x7f2c,	// (0x00042466) title_pane_t1

0x7f94,	// (0x000424ce) title_pane_t2

0x7fba,	// (0x000424f4) title_pane_t3

0x0002,

0xf557,	// (0x00049a91) title_pane_t

0x9be0,	// (0x0004411a) aid_levels_battery_ParamLimits

0x9be0,	// (0x0004411a) aid_levels_battery

0x9bf4,	// (0x0004412e) battery_pane_g1_ParamLimits

0x9bf4,	// (0x0004412e) battery_pane_g1

0x9c0a,	// (0x00044144) battery_pane_g2_ParamLimits

0x9c0a,	// (0x00044144) battery_pane_g2

0x0001,

0xf7b0,	// (0x00049cea) battery_pane_g_ParamLimits

0xf7b0,	// (0x00049cea) battery_pane_g

0xae7d,	// (0x000453b7) uni_indicator_pane_g1

0xae93,	// (0x000453cd) uni_indicator_pane_g2

0xaea9,	// (0x000453e3) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00049e5b) uni_indicator_pane_g

0x9310,	// (0x0004384a) navi_icon_pane_ParamLimits

0x9310,	// (0x0004384a) navi_icon_pane

0x924e,	// (0x00043788) navi_midp_pane

0x932c,	// (0x00043866) navi_navi_pane

0x9336,	// (0x00043870) navi_text_pane_ParamLimits

0x9336,	// (0x00043870) navi_text_pane

0x7ee2,	// (0x0004241c) status_small_wait_pane_g1

0x83dd,	// (0x00042917) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00049e56) status_small_wait_pane_g

0xaba4,	// (0x000450de) navi_navi_icon_text_pane

0xabac,	// (0x000450e6) navi_navi_pane_g1_ParamLimits

0xabac,	// (0x000450e6) navi_navi_pane_g1

0xabbe,	// (0x000450f8) navi_navi_pane_g2_ParamLimits

0xabbe,	// (0x000450f8) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00049e24) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00049e24) navi_navi_pane_g

0xabd0,	// (0x0004510a) navi_navi_tabs_pane

0xabd9,	// (0x00045113) navi_navi_text_pane

0xaba4,	// (0x000450de) navi_navi_volume_pane

0xab80,	// (0x000450ba) navi_text_pane_t1

0xab74,	// (0x000450ae) navi_icon_pane_g1

0xaac7,	// (0x00045001) navi_navi_text_pane_t1

0x6b86,	// (0x000410c0) navi_navi_volume_pane_g1

0x6b8e,	// (0x000410c8) volume_small_pane

0xaa2d,	// (0x00044f67) navi_navi_icon_text_pane_g1

0xaa35,	// (0x00044f6f) navi_navi_icon_text_pane_t1

0x932c,	// (0x00043866) navi_tabs_2_long_pane

0x932c,	// (0x00043866) navi_tabs_2_pane

0x932c,	// (0x00043866) navi_tabs_3_long_pane

0x932c,	// (0x00043866) navi_tabs_3_pane

0x932c,	// (0x00043866) navi_tabs_4_pane

0x6b66,	// (0x000410a0) tabs_2_active_pane_ParamLimits

0x6b66,	// (0x000410a0) tabs_2_active_pane

0x6b76,	// (0x000410b0) tabs_2_passive_pane_ParamLimits

0x6b76,	// (0x000410b0) tabs_2_passive_pane

0x6b34,	// (0x0004106e) tabs_3_active_pane_ParamLimits

0x6b34,	// (0x0004106e) tabs_3_active_pane

0x6b44,	// (0x0004107e) tabs_3_passive_pane_ParamLimits

0x6b44,	// (0x0004107e) tabs_3_passive_pane

0x6b55,	// (0x0004108f) tabs_3_passive_pane_cp_ParamLimits

0x6b55,	// (0x0004108f) tabs_3_passive_pane_cp

0x6af0,	// (0x0004102a) tabs_4_active_pane_ParamLimits

0x6af0,	// (0x0004102a) tabs_4_active_pane

0x6b01,	// (0x0004103b) tabs_4_passive_pane_ParamLimits

0x6b01,	// (0x0004103b) tabs_4_passive_pane

0x6b12,	// (0x0004104c) tabs_4_passive_pane_cp_ParamLimits

0x6b12,	// (0x0004104c) tabs_4_passive_pane_cp

0x6b23,	// (0x0004105d) tabs_4_passive_pane_cp2_ParamLimits

0x6b23,	// (0x0004105d) tabs_4_passive_pane_cp2

0x6acc,	// (0x00041006) tabs_2_long_active_pane_ParamLimits

0x6acc,	// (0x00041006) tabs_2_long_active_pane

0x6ade,	// (0x00041018) tabs_2_long_passive_pane_ParamLimits

0x6ade,	// (0x00041018) tabs_2_long_passive_pane

0x6a93,	// (0x00040fcd) tabs_3_long_active_pane_ParamLimits

0x6a93,	// (0x00040fcd) tabs_3_long_active_pane

0x6aa6,	// (0x00040fe0) tabs_3_long_passive_pane_ParamLimits

0x6aa6,	// (0x00040fe0) tabs_3_long_passive_pane

0x6ab9,	// (0x00040ff3) tabs_3_long_passive_pane_cp_ParamLimits

0x6ab9,	// (0x00040ff3) tabs_3_long_passive_pane_cp

0x6a39,	// (0x00040f73) volume_small_pane_g1

0x6a42,	// (0x00040f7c) volume_small_pane_g2

0x6a4b,	// (0x00040f85) volume_small_pane_g3

0x6a54,	// (0x00040f8e) volume_small_pane_g4

0x6a5d,	// (0x00040f97) volume_small_pane_g5

0x6a66,	// (0x00040fa0) volume_small_pane_g6

0x6a6f,	// (0x00040fa9) volume_small_pane_g7

0x6a78,	// (0x00040fb2) volume_small_pane_g8

0x6a81,	// (0x00040fbb) volume_small_pane_g9

0x6a8a,	// (0x00040fc4) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00049df0) volume_small_pane_g

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp2_ParamLimits

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp2

0x7fda,	// (0x00042514) tabs_3_active_pane_g1

0x7fe2,	// (0x0004251c) tabs_3_active_pane_t1

0x7fcc,	// (0x00042506) bg_passive_tab_pane_cp2_ParamLimits

0x7fcc,	// (0x00042506) bg_passive_tab_pane_cp2

0x7fda,	// (0x00042514) tabs_3_passive_pane_g1

0x7fe2,	// (0x0004251c) tabs_3_passive_pane_t1

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp3_ParamLimits

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp3

0x7ff4,	// (0x0004252e) tabs_4_active_pane_g1

0x7ffc,	// (0x00042536) tabs_4_active_pane_t1

0x7fcc,	// (0x00042506) bg_passive_tab_pane_cp3_ParamLimits

0x7fcc,	// (0x00042506) bg_passive_tab_pane_cp3

0x7ff4,	// (0x0004252e) tabs_4_1_passive_pane_g1

0x7ffc,	// (0x00042536) tabs_4_1_passive_pane_t1

0x97d8,	// (0x00043d12) list_highlight_pane_cp2

0xb0ed,	// (0x00045627) list_set_pane_ParamLimits

0xb0ed,	// (0x00045627) list_set_pane

0xb18f,	// (0x000456c9) main_pane_set_t1_ParamLimits

0xb18f,	// (0x000456c9) main_pane_set_t1

0xb1af,	// (0x000456e9) main_pane_set_t2_ParamLimits

0xb1af,	// (0x000456e9) main_pane_set_t2

0xb1c3,	// (0x000456fd) main_pane_set_t3_ParamLimits

0xb1c3,	// (0x000456fd) main_pane_set_t3

0xb1d5,	// (0x0004570f) main_pane_set_t4_ParamLimits

0xb1d5,	// (0x0004570f) main_pane_set_t4

0x0003,

0xf986,	// (0x00049ec0) main_pane_set_t_ParamLimits

0xf986,	// (0x00049ec0) main_pane_set_t

0xb1e7,	// (0x00045721) setting_code_pane

0xb1f1,	// (0x0004572b) setting_slider_graphic_pane

0xb1f1,	// (0x0004572b) setting_slider_pane

0xb1f1,	// (0x0004572b) setting_text_pane

0xb1f1,	// (0x0004572b) setting_volume_pane

0x5c2b,	// (0x00040165) volume_set_pane

0x7fcc,	// (0x00042506) bg_set_opt_pane_cp

0x5c33,	// (0x0004016d) setting_slider_pane_t1

0x5c4c,	// (0x00040186) setting_slider_pane_t2

0x5c66,	// (0x000401a0) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00049a98) setting_slider_pane_t

0x5c7e,	// (0x000401b8) slider_set_pane

0x7eec,	// (0x00042426) bg_set_opt_pane_cp2

0x800e,	// (0x00042548) setting_slider_graphic_pane_g1

0x5c94,	// (0x000401ce) setting_slider_graphic_pane_t1

0x5ca4,	// (0x000401de) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00049a9f) setting_slider_graphic_pane_t

0x5cb4,	// (0x000401ee) slider_set_pane_cp

0x7eec,	// (0x00042426) input_focus_pane_cp1

0xb0ac,	// (0x000455e6) list_set_text_pane

0x7ee2,	// (0x0004241c) setting_text_pane_g1

0x7eec,	// (0x00042426) input_focus_pane_cp2

0x7ee2,	// (0x0004241c) setting_code_pane_g1

0x8017,	// (0x00042551) setting_code_pane_t1

0x49ae,	// (0x0003eee8) set_text_pane_t1_ParamLimits

0x49ae,	// (0x0003eee8) set_text_pane_t1

0x8899,	// (0x00042dd3) set_opt_bg_pane_g1

0x88a1,	// (0x00042ddb) set_opt_bg_pane_g2

0xb08c,	// (0x000455c6) set_opt_bg_pane_g3

0x88b1,	// (0x00042deb) set_opt_bg_pane_g4

0x88b9,	// (0x00042df3) set_opt_bg_pane_g5

0x88c1,	// (0x00042dfb) set_opt_bg_pane_g6

0xb094,	// (0x000455ce) set_opt_bg_pane_g7

0xb09c,	// (0x000455d6) set_opt_bg_pane_g8

0xb0a4,	// (0x000455de) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00049ead) set_opt_bg_pane_g

0xb07f,	// (0x000455b9) slider_set_pane_g1

0x6bfb,	// (0x00041135) slider_set_pane_g2

0x0006,

0xf964,	// (0x00049e9e) slider_set_pane_g

0x6b97,	// (0x000410d1) volume_set_pane_g1

0x6b9f,	// (0x000410d9) volume_set_pane_g2

0x6ba7,	// (0x000410e1) volume_set_pane_g3

0x6baf,	// (0x000410e9) volume_set_pane_g4

0x6bb7,	// (0x000410f1) volume_set_pane_g5

0x6bbf,	// (0x000410f9) volume_set_pane_g6

0x6bc7,	// (0x00041101) volume_set_pane_g7

0x6bcf,	// (0x00041109) volume_set_pane_g8

0x6bd7,	// (0x00041111) volume_set_pane_g9

0x6bdf,	// (0x00041119) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00049e76) volume_set_pane_g

0x8025,	// (0x0004255f) indicator_pane_ParamLimits

0x8025,	// (0x0004255f) indicator_pane

0x8031,	// (0x0004256b) main_idle_pane_g2_ParamLimits

0x8031,	// (0x0004256b) main_idle_pane_g2

0x8059,	// (0x00042593) main_pane_idle_g1_ParamLimits

0x8059,	// (0x00042593) main_pane_idle_g1

0x8066,	// (0x000425a0) popup_clock_digital_analogue_window_ParamLimits

0x8066,	// (0x000425a0) popup_clock_digital_analogue_window

0x807d,	// (0x000425b7) soft_indicator_pane_ParamLimits

0x807d,	// (0x000425b7) soft_indicator_pane

0x8089,	// (0x000425c3) wallpaper_pane_ParamLimits

0x8089,	// (0x000425c3) wallpaper_pane

0x7ee2,	// (0x0004241c) wallpaper_pane_g1

0x809d,	// (0x000425d7) indicator_pane_g1_ParamLimits

0x809d,	// (0x000425d7) indicator_pane_g1

0xb447,	// (0x00045981) navi_navi_icon_text_pane_srt_g1

0x80b8,	// (0x000425f2) soft_indicator_pane_t1

0x80d2,	// (0x0004260c) aid_ps_area_pane

0x80e3,	// (0x0004261d) aid_ps_clock_pane

0x80f1,	// (0x0004262b) aid_ps_indicator_pane

0x80fd,	// (0x00042637) indicator_ps_pane_ParamLimits

0x80fd,	// (0x00042637) indicator_ps_pane

0x810c,	// (0x00042646) power_save_pane_g1_ParamLimits

0x810c,	// (0x00042646) power_save_pane_g1

0x8118,	// (0x00042652) power_save_pane_g2_ParamLimits

0x8118,	// (0x00042652) power_save_pane_g2

0x584a,	// (0x0003fd84) aid_navinavi_width_pane

0x80d2,	// (0x0004260c) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00049aa4) power_save_pane_g_ParamLimits

0xf56a,	// (0x00049aa4) power_save_pane_g

0x8126,	// (0x00042660) power_save_pane_t1_ParamLimits

0x8126,	// (0x00042660) power_save_pane_t1

0x80e3,	// (0x0004261d) aid_ps_clock_pane_ParamLimits

0x80f1,	// (0x0004262b) aid_ps_indicator_pane_ParamLimits

0x8138,	// (0x00042672) power_save_pane_t4_ParamLimits

0x8138,	// (0x00042672) power_save_pane_t4

0x0001,

0xf56f,	// (0x00049aa9) power_save_pane_t_ParamLimits

0xf56f,	// (0x00049aa9) power_save_pane_t

0x8162,	// (0x0004269c) power_save_t3_ParamLimits

0x8162,	// (0x0004269c) power_save_t3

0x814d,	// (0x00042687) power_save_t2_ParamLimits

0x814d,	// (0x00042687) power_save_t2

0x8177,	// (0x000426b1) indicator_ps_pane_g1

0x8180,	// (0x000426ba) ai_gene_pane_ParamLimits

0x8180,	// (0x000426ba) ai_gene_pane

0x818c,	// (0x000426c6) ai_links_pane_ParamLimits

0x818c,	// (0x000426c6) ai_links_pane

0x8198,	// (0x000426d2) indicator_pane_cp1_ParamLimits

0x8198,	// (0x000426d2) indicator_pane_cp1

0x81a4,	// (0x000426de) main_pane_idle_g1_cp_ParamLimits

0x81a4,	// (0x000426de) main_pane_idle_g1_cp

0x81b0,	// (0x000426ea) popup_ai_links_title_window

0x81b9,	// (0x000426f3) soft_indicator_pane_cp1_ParamLimits

0x81b9,	// (0x000426f3) soft_indicator_pane_cp1

0xae6b,	// (0x000453a5) ai_links_pane_g1

0xae74,	// (0x000453ae) grid_ai_links_pane

0xae4e,	// (0x00045388) ai_gene_pane_1

0xae59,	// (0x00045393) ai_gene_pane_2

0xae62,	// (0x0004539c) list_highlight_pane_cp4

0xae32,	// (0x0004536c) cell_ai_link_pane_ParamLimits

0xae32,	// (0x0004536c) cell_ai_link_pane

0xae2a,	// (0x00045364) cell_ai_link_pane_g1

0x83dd,	// (0x00042917) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00049e51) cell_ai_link_pane_g

0x7eec,	// (0x00042426) grid_highlight_cp2

0x7eec,	// (0x00042426) bg_popup_sub_pane_cp1

0x81d3,	// (0x0004270d) popup_ai_links_title_window_t1

0xad7a,	// (0x000452b4) ai_gene_pane_1_g1_ParamLimits

0xad7a,	// (0x000452b4) ai_gene_pane_1_g1

0xad86,	// (0x000452c0) ai_gene_pane_1_g2_ParamLimits

0xad86,	// (0x000452c0) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00049e47) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00049e47) ai_gene_pane_1_g

0xad93,	// (0x000452cd) ai_gene_pane_1_t1_ParamLimits

0xad93,	// (0x000452cd) ai_gene_pane_1_t1

0xadc7,	// (0x00045301) grid_ai_soft_ind_pane

0xad65,	// (0x0004529f) ai_gene_pane_2_t1_ParamLimits

0xad65,	// (0x0004529f) ai_gene_pane_2_t1

0x81e2,	// (0x0004271c) main_pane_empty_t1_ParamLimits

0x81e2,	// (0x0004271c) main_pane_empty_t1

0x81fa,	// (0x00042734) main_pane_empty_t2_ParamLimits

0x81fa,	// (0x00042734) main_pane_empty_t2

0x820f,	// (0x00042749) main_pane_empty_t3_ParamLimits

0x820f,	// (0x00042749) main_pane_empty_t3

0x8221,	// (0x0004275b) main_pane_empty_t4_ParamLimits

0x8221,	// (0x0004275b) main_pane_empty_t4

0x8233,	// (0x0004276d) main_pane_empty_t5_ParamLimits

0x8233,	// (0x0004276d) main_pane_empty_t5

0x0004,

0xf574,	// (0x00049aae) main_pane_empty_t_ParamLimits

0xf574,	// (0x00049aae) main_pane_empty_t

0x88ea,	// (0x00042e24) bg_popup_window_pane_ParamLimits

0x88ea,	// (0x00042e24) bg_popup_window_pane

0xaad5,	// (0x0004500f) find_popup_pane_cp2_ParamLimits

0xaad5,	// (0x0004500f) find_popup_pane_cp2

0xaae1,	// (0x0004501b) heading_pane_ParamLimits

0xaae1,	// (0x0004501b) heading_pane

0x7eec,	// (0x00042426) bg_popup_sub_pane

0xaa4f,	// (0x00044f89) bg_popup_window_pane_g1_ParamLimits

0xaa4f,	// (0x00044f89) bg_popup_window_pane_g1

0xaa5b,	// (0x00044f95) bg_popup_window_pane_g2_ParamLimits

0xaa5b,	// (0x00044f95) bg_popup_window_pane_g2

0xaa67,	// (0x00044fa1) bg_popup_window_pane_g3_ParamLimits

0xaa67,	// (0x00044fa1) bg_popup_window_pane_g3

0xaa73,	// (0x00044fad) bg_popup_window_pane_g4_ParamLimits

0xaa73,	// (0x00044fad) bg_popup_window_pane_g4

0xaa7f,	// (0x00044fb9) bg_popup_window_pane_g5_ParamLimits

0xaa7f,	// (0x00044fb9) bg_popup_window_pane_g5

0xaa8b,	// (0x00044fc5) bg_popup_window_pane_g6_ParamLimits

0xaa8b,	// (0x00044fc5) bg_popup_window_pane_g6

0xaa97,	// (0x00044fd1) bg_popup_window_pane_g7_ParamLimits

0xaa97,	// (0x00044fd1) bg_popup_window_pane_g7

0xaaa3,	// (0x00044fdd) bg_popup_window_pane_g8_ParamLimits

0xaaa3,	// (0x00044fdd) bg_popup_window_pane_g8

0xaaaf,	// (0x00044fe9) bg_popup_window_pane_g9_ParamLimits

0xaaaf,	// (0x00044fe9) bg_popup_window_pane_g9

0xaabb,	// (0x00044ff5) bg_popup_window_pane_g10_ParamLimits

0xaabb,	// (0x00044ff5) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00049e0f) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00049e0f) bg_popup_window_pane_g

0xa9e4,	// (0x00044f1e) bg_popup_heading_pane_ParamLimits

0xa9e4,	// (0x00044f1e) bg_popup_heading_pane

0x6d95,	// (0x000412cf) tabs_4_passive_pane_cp_srt_ParamLimits

0x6d95,	// (0x000412cf) tabs_4_passive_pane_cp_srt

0x6da7,	// (0x000412e1) tabs_4_passive_pane_srt_ParamLimits

0xa9f8,	// (0x00044f32) heading_pane_g2

0x6da7,	// (0x000412e1) tabs_4_passive_pane_srt

0x97d8,	// (0x00043d12) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97d8,	// (0x00043d12) bg_passive_tab_pane_cp3_srt

0xaa00,	// (0x00044f3a) heading_pane_t1_ParamLimits

0xaa00,	// (0x00044f3a) heading_pane_t1

0xaa17,	// (0x00044f51) heading_pane_t2_ParamLimits

0xaa17,	// (0x00044f51) heading_pane_t2

0x0001,

0xf8d0,	// (0x00049e0a) heading_pane_t_ParamLimits

0xf8d0,	// (0x00049e0a) heading_pane_t

0xa511,	// (0x00044a4b) bg_popup_heading_pane_g1

0xa5c0,	// (0x00044afa) bg_popup_heading_pane_g2

0xa5ca,	// (0x00044b04) bg_popup_heading_pane_g3

0xa5d4,	// (0x00044b0e) bg_popup_heading_pane_g4

0xa5de,	// (0x00044b18) bg_popup_heading_pane_g5

0xa5e8,	// (0x00044b22) bg_popup_heading_pane_g6

0xa5f0,	// (0x00044b2a) bg_popup_heading_pane_g7

0xa5f8,	// (0x00044b32) bg_popup_heading_pane_g8

0xa602,	// (0x00044b3c) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00049dc6) bg_popup_heading_pane_g

0x9ce2,	// (0x0004421c) bg_popup_sub_pane_g1

0x9cea,	// (0x00044224) bg_popup_sub_pane_g2

0x9cf2,	// (0x0004422c) bg_popup_sub_pane_g3

0x9cfa,	// (0x00044234) bg_popup_sub_pane_g4

0x9d02,	// (0x0004423c) bg_popup_sub_pane_g5

0x9d0a,	// (0x00044244) bg_popup_sub_pane_g6

0x9d12,	// (0x0004424c) bg_popup_sub_pane_g7

0x9d1a,	// (0x00044254) bg_popup_sub_pane_g8

0x9d22,	// (0x0004425c) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00049da0) bg_popup_sub_pane_g

0x8247,	// (0x00042781) bg_popup_window_pane_cp5_ParamLimits

0x8247,	// (0x00042781) bg_popup_window_pane_cp5

0x8263,	// (0x0004279d) popup_note_window_g1_ParamLimits

0x8263,	// (0x0004279d) popup_note_window_g1

0x826f,	// (0x000427a9) popup_note_window_t1_ParamLimits

0x826f,	// (0x000427a9) popup_note_window_t1

0x8281,	// (0x000427bb) popup_note_window_t2_ParamLimits

0x8281,	// (0x000427bb) popup_note_window_t2

0x8293,	// (0x000427cd) popup_note_window_t3_ParamLimits

0x8293,	// (0x000427cd) popup_note_window_t3

0x82a5,	// (0x000427df) popup_note_window_t4_ParamLimits

0x82a5,	// (0x000427df) popup_note_window_t4

0x82cd,	// (0x00042807) popup_note_window_t5_ParamLimits

0x82cd,	// (0x00042807) popup_note_window_t5

0x0004,

0xf57f,	// (0x00049ab9) popup_note_window_t_ParamLimits

0xf57f,	// (0x00049ab9) popup_note_window_t

0x82f1,	// (0x0004282b) bg_popup_window_pane_cp6_ParamLimits

0x82f1,	// (0x0004282b) bg_popup_window_pane_cp6

0xa485,	// (0x000449bf) popup_note_image_window_g1_ParamLimits

0xa485,	// (0x000449bf) popup_note_image_window_g1

0xa491,	// (0x000449cb) popup_note_image_window_g2_ParamLimits

0xa491,	// (0x000449cb) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00049d94) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00049d94) popup_note_image_window_g

0xa4aa,	// (0x000449e4) popup_note_image_window_t1_ParamLimits

0xa4aa,	// (0x000449e4) popup_note_image_window_t1

0xa4c3,	// (0x000449fd) popup_note_image_window_t2_ParamLimits

0xa4c3,	// (0x000449fd) popup_note_image_window_t2

0xa4dc,	// (0x00044a16) popup_note_image_window_t3_ParamLimits

0xa4dc,	// (0x00044a16) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00049d99) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00049d99) popup_note_image_window_t

0xa346,	// (0x00044880) bg_popup_window_pane_cp7_ParamLimits

0xa346,	// (0x00044880) bg_popup_window_pane_cp7

0xa376,	// (0x000448b0) popup_note_wait_window_g1_ParamLimits

0xa376,	// (0x000448b0) popup_note_wait_window_g1

0xa382,	// (0x000448bc) popup_note_wait_window_g2_ParamLimits

0xa382,	// (0x000448bc) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00049d82) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00049d82) popup_note_wait_window_g

0xa39a,	// (0x000448d4) popup_note_wait_window_t1_ParamLimits

0xa39a,	// (0x000448d4) popup_note_wait_window_t1

0xa3c1,	// (0x000448fb) popup_note_wait_window_t2_ParamLimits

0xa3c1,	// (0x000448fb) popup_note_wait_window_t2

0xa3de,	// (0x00044918) popup_note_wait_window_t3_ParamLimits

0xa3de,	// (0x00044918) popup_note_wait_window_t3

0xa3f1,	// (0x0004492b) popup_note_wait_window_t4_ParamLimits

0xa3f1,	// (0x0004492b) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00049d89) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00049d89) popup_note_wait_window_t

0xa416,	// (0x00044950) wait_bar_pane_ParamLimits

0xa416,	// (0x00044950) wait_bar_pane

0x7eec,	// (0x00042426) wait_anim_pane

0x7eec,	// (0x00042426) wait_border_pane

0x7ee2,	// (0x0004241c) wait_anim_pane_g1

0x7ee2,	// (0x0004241c) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00049c42) wait_anim_pane_g

0xa2ea,	// (0x00044824) wait_border_pane_g1

0xa2f5,	// (0x0004482f) wait_border_pane_g2

0xa2fe,	// (0x00044838) wait_border_pane_g3

0x0002,

0xf841,	// (0x00049d7b) wait_border_pane_g

0xa15a,	// (0x00044694) bg_popup_window_pane_cp16_ParamLimits

0xa15a,	// (0x00044694) bg_popup_window_pane_cp16

0xa25a,	// (0x00044794) indicator_popup_pane_cp4_ParamLimits

0xa25a,	// (0x00044794) indicator_popup_pane_cp4

0xa26e,	// (0x000447a8) popup_query_data_window_t1_ParamLimits

0xa26e,	// (0x000447a8) popup_query_data_window_t1

0xa280,	// (0x000447ba) popup_query_data_window_t2_ParamLimits

0xa280,	// (0x000447ba) popup_query_data_window_t2

0xa299,	// (0x000447d3) popup_query_data_window_t3_ParamLimits

0xa299,	// (0x000447d3) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00049d74) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00049d74) popup_query_data_window_t

0xa2b3,	// (0x000447ed) query_popup_data_pane_ParamLimits

0xa2b3,	// (0x000447ed) query_popup_data_pane

0xa2c7,	// (0x00044801) query_popup_data_pane_cp1_ParamLimits

0xa2c7,	// (0x00044801) query_popup_data_pane_cp1

0xa15a,	// (0x00044694) bg_popup_window_pane_cp10_ParamLimits

0xa15a,	// (0x00044694) bg_popup_window_pane_cp10

0xa18c,	// (0x000446c6) indicator_popup_pane_ParamLimits

0xa18c,	// (0x000446c6) indicator_popup_pane

0xa1ae,	// (0x000446e8) popup_query_code_window_t1_ParamLimits

0xa1ae,	// (0x000446e8) popup_query_code_window_t1

0xa1c8,	// (0x00044702) popup_query_code_window_t2_ParamLimits

0xa1c8,	// (0x00044702) popup_query_code_window_t2

0xa211,	// (0x0004474b) popup_query_code_window_t3_ParamLimits

0xa211,	// (0x0004474b) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00049d6d) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00049d6d) popup_query_code_window_t

0xa240,	// (0x0004477a) query_popup_pane_ParamLimits

0xa240,	// (0x0004477a) query_popup_pane

0x82f1,	// (0x0004282b) bg_popup_window_pane_cp15_ParamLimits

0x82f1,	// (0x0004282b) bg_popup_window_pane_cp15

0x830f,	// (0x00042849) indicator_popup_pane_cp1_ParamLimits

0x830f,	// (0x00042849) indicator_popup_pane_cp1

0x8322,	// (0x0004285c) indicator_popup_pane_cp2_ParamLimits

0x8322,	// (0x0004285c) indicator_popup_pane_cp2

0x8335,	// (0x0004286f) popup_query_data_code_window_g1_ParamLimits

0x8335,	// (0x0004286f) popup_query_data_code_window_g1

0x8348,	// (0x00042882) popup_query_data_code_window_t1_ParamLimits

0x8348,	// (0x00042882) popup_query_data_code_window_t1

0x835a,	// (0x00042894) popup_query_data_code_window_t2_ParamLimits

0x835a,	// (0x00042894) popup_query_data_code_window_t2

0x836c,	// (0x000428a6) popup_query_data_code_window_t3_ParamLimits

0x836c,	// (0x000428a6) popup_query_data_code_window_t3

0x8382,	// (0x000428bc) popup_query_data_code_window_t4_ParamLimits

0x8382,	// (0x000428bc) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00049ac4) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00049ac4) popup_query_data_code_window_t

0x92ce,	// (0x00043808) list_single_midp_graphic_pane_g3

0x839a,	// (0x000428d4) query_popup_data_pane_cp2_ParamLimits

0x83ad,	// (0x000428e7) query_popup_pane_cp2_ParamLimits

0x83ad,	// (0x000428e7) query_popup_pane_cp2

0x7eec,	// (0x00042426) bg_popup_window_pane_cp11

0xa152,	// (0x0004468c) heading_pane_cp5

0x8498,	// (0x000429d2) listscroll_popup_info_pane

0x7eec,	// (0x00042426) input_focus_pane_cp3

0x83c0,	// (0x000428fa) query_popup_pane_t1

0x83ce,	// (0x00042908) list_popup_info_pane_ParamLimits

0x83ce,	// (0x00042908) list_popup_info_pane

0x83dd,	// (0x00042917) listscroll_popup_info_pane_g1

0x83e5,	// (0x0004291f) scroll_pane_cp7

0x83ef,	// (0x00042929) popup_info_list_pane_t1_ParamLimits

0x83ef,	// (0x00042929) popup_info_list_pane_t1

0x8409,	// (0x00042943) popup_info_list_pane_t2_ParamLimits

0x8409,	// (0x00042943) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00049acd) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00049acd) popup_info_list_pane_t

0x7eec,	// (0x00042426) bg_popup_window_pane_cp12

0xb461,	// (0x0004599b) find_popup_pane

0x7fcc,	// (0x00042506) bg_popup_window_pane_cp3

0x8423,	// (0x0004295d) heading_pane_cp3

0x842f,	// (0x00042969) listscroll_popup_graphic_pane

0x7eec,	// (0x00042426) bg_popup_window_pane_cp4

0x848e,	// (0x000429c8) heading_pane_cp4

0x8498,	// (0x000429d2) listscroll_popup_colour_pane

0x84a0,	// (0x000429da) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x84a0,	// (0x000429da) cell_large_graphic_colour_none_popup_pane

0x84b4,	// (0x000429ee) grid_large_graphic_colour_popup_pane_ParamLimits

0x84b4,	// (0x000429ee) grid_large_graphic_colour_popup_pane

0x84dc,	// (0x00042a16) listscroll_popup_colour_pane_g1_ParamLimits

0x84dc,	// (0x00042a16) listscroll_popup_colour_pane_g1

0x84f3,	// (0x00042a2d) listscroll_popup_colour_pane_g2_ParamLimits

0x84f3,	// (0x00042a2d) listscroll_popup_colour_pane_g2

0x850a,	// (0x00042a44) listscroll_popup_colour_pane_g3_ParamLimits

0x850a,	// (0x00042a44) listscroll_popup_colour_pane_g3

0x851a,	// (0x00042a54) listscroll_popup_colour_pane_g4_ParamLimits

0x851a,	// (0x00042a54) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00049ad2) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00049ad2) listscroll_popup_colour_pane_g

0x8529,	// (0x00042a63) scroll_pane_cp6_ParamLimits

0x8529,	// (0x00042a63) scroll_pane_cp6

0x853b,	// (0x00042a75) cell_large_graphic_colour_popup_pane_ParamLimits

0x853b,	// (0x00042a75) cell_large_graphic_colour_popup_pane

0x855a,	// (0x00042a94) cell_large_graphic_colour_none_popup_pane_t1

0x7eec,	// (0x00042426) grid_highlight_pane_cp5

0x8569,	// (0x00042aa3) cell_large_graphic_colour_popup_pane_g1

0x8571,	// (0x00042aab) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00049adb) cell_large_graphic_colour_popup_pane_g

0x8579,	// (0x00042ab3) cell_large_graphic_colour_popup_pane_g2_copy1

0x8582,	// (0x00042abc) grid_highlight_pane_cp4

0x858a,	// (0x00042ac4) bg_popup_window_pane_cp8_ParamLimits

0x858a,	// (0x00042ac4) bg_popup_window_pane_cp8

0x85a5,	// (0x00042adf) popup_snote_single_text_window_g1_ParamLimits

0x85a5,	// (0x00042adf) popup_snote_single_text_window_g1

0x85b7,	// (0x00042af1) popup_snote_single_text_window_t1_ParamLimits

0x85b7,	// (0x00042af1) popup_snote_single_text_window_t1

0x85ca,	// (0x00042b04) popup_snote_single_text_window_t2_ParamLimits

0x85ca,	// (0x00042b04) popup_snote_single_text_window_t2

0x85dd,	// (0x00042b17) popup_snote_single_text_window_t3_ParamLimits

0x85dd,	// (0x00042b17) popup_snote_single_text_window_t3

0x8616,	// (0x00042b50) popup_snote_single_text_window_t4_ParamLimits

0x8616,	// (0x00042b50) popup_snote_single_text_window_t4

0x864a,	// (0x00042b84) popup_snote_single_text_window_t5_ParamLimits

0x864a,	// (0x00042b84) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00049ae0) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00049ae0) popup_snote_single_text_window_t

0x8679,	// (0x00042bb3) bg_popup_window_pane_cp9_ParamLimits

0x8679,	// (0x00042bb3) bg_popup_window_pane_cp9

0x85a5,	// (0x00042adf) popup_snote_single_graphic_window_g1_ParamLimits

0x85a5,	// (0x00042adf) popup_snote_single_graphic_window_g1

0x8687,	// (0x00042bc1) popup_snote_single_graphic_window_g2_ParamLimits

0x8687,	// (0x00042bc1) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00049aeb) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00049aeb) popup_snote_single_graphic_window_g

0x8693,	// (0x00042bcd) popup_snote_single_graphic_window_t1_ParamLimits

0x8693,	// (0x00042bcd) popup_snote_single_graphic_window_t1

0x86a6,	// (0x00042be0) popup_snote_single_graphic_window_t2_ParamLimits

0x86a6,	// (0x00042be0) popup_snote_single_graphic_window_t2

0x86b9,	// (0x00042bf3) popup_snote_single_graphic_window_t3_ParamLimits

0x86b9,	// (0x00042bf3) popup_snote_single_graphic_window_t3

0x86f2,	// (0x00042c2c) popup_snote_single_graphic_window_t4_ParamLimits

0x86f2,	// (0x00042c2c) popup_snote_single_graphic_window_t4

0x8726,	// (0x00042c60) popup_snote_single_graphic_window_t5_ParamLimits

0x8726,	// (0x00042c60) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00049af0) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00049af0) popup_snote_single_graphic_window_t

0xb3a5,	// (0x000458df) grid_graphic_popup_pane_ParamLimits

0xb3a5,	// (0x000458df) grid_graphic_popup_pane

0xb3cd,	// (0x00045907) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3cd,	// (0x00045907) listscroll_popup_graphic_pane_g1

0xb3e1,	// (0x0004591b) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3e1,	// (0x0004591b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00049eea) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00049eea) listscroll_popup_graphic_pane_g

0xb3f5,	// (0x0004592f) scroll_pane_cp5

0xb345,	// (0x0004587f) cell_graphic_popup_pane_ParamLimits

0xb345,	// (0x0004587f) cell_graphic_popup_pane

0xb326,	// (0x00045860) cell_graphic_popup_pane_g1

0xb32e,	// (0x00045868) cell_graphic_popup_pane_g2

0x8579,	// (0x00042ab3) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x00049ee3) cell_graphic_popup_pane_g

0xb337,	// (0x00045871) cell_graphic_popup_pane_t2

0x8582,	// (0x00042abc) grid_highlight_pane_cp3

0x8767,	// (0x00042ca1) list_gen_pane_ParamLimits

0x8767,	// (0x00042ca1) list_gen_pane

0x87b1,	// (0x00042ceb) scroll_pane

0xb288,	// (0x000457c2) bg_list_pane_g1_ParamLimits

0xb288,	// (0x000457c2) bg_list_pane_g1

0xb2a3,	// (0x000457dd) bg_list_pane_g2_ParamLimits

0xb2a3,	// (0x000457dd) bg_list_pane_g2

0xb2b6,	// (0x000457f0) bg_list_pane_g3_ParamLimits

0xb2b6,	// (0x000457f0) bg_list_pane_g3

0xb2c8,	// (0x00045802) bg_list_pane_g4_ParamLimits

0xb2c8,	// (0x00045802) bg_list_pane_g4

0xb2da,	// (0x00045814) bg_list_pane_g5_ParamLimits

0xb2da,	// (0x00045814) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00049ed8) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00049ed8) bg_list_pane_g

0x6c5f,	// (0x00041199) list_double2_graphic_large_graphic_pane_ParamLimits

0x6c5f,	// (0x00041199) list_double2_graphic_large_graphic_pane

0x6c5f,	// (0x00041199) list_double2_graphic_pane_ParamLimits

0x6c5f,	// (0x00041199) list_double2_graphic_pane

0x6c5f,	// (0x00041199) list_double2_large_graphic_pane_ParamLimits

0x6c5f,	// (0x00041199) list_double2_large_graphic_pane

0x6c5f,	// (0x00041199) list_double2_pane_ParamLimits

0x6c5f,	// (0x00041199) list_double2_pane

0x6c5f,	// (0x00041199) list_double_graphic_heading_pane_ParamLimits

0x6c5f,	// (0x00041199) list_double_graphic_heading_pane

0x6c5f,	// (0x00041199) list_double_graphic_pane_ParamLimits

0x6c5f,	// (0x00041199) list_double_graphic_pane

0x6c5f,	// (0x00041199) list_double_heading_pane_ParamLimits

0x6c5f,	// (0x00041199) list_double_heading_pane

0x6c5f,	// (0x00041199) list_double_large_graphic_pane_ParamLimits

0x6c5f,	// (0x00041199) list_double_large_graphic_pane

0x6c5f,	// (0x00041199) list_double_number_pane_ParamLimits

0x6c5f,	// (0x00041199) list_double_number_pane

0x6c5f,	// (0x00041199) list_double_pane_ParamLimits

0x6c5f,	// (0x00041199) list_double_pane

0x6c5f,	// (0x00041199) list_double_time_pane_ParamLimits

0x6c5f,	// (0x00041199) list_double_time_pane

0x6c5f,	// (0x00041199) list_setting_number_pane_ParamLimits

0x6c5f,	// (0x00041199) list_setting_number_pane

0x6c5f,	// (0x00041199) list_setting_pane_ParamLimits

0x6c5f,	// (0x00041199) list_setting_pane

0x6ccd,	// (0x00041207) list_single_2graphic_pane_ParamLimits

0x6ccd,	// (0x00041207) list_single_2graphic_pane

0x6ccd,	// (0x00041207) list_single_graphic_heading_pane_ParamLimits

0x6ccd,	// (0x00041207) list_single_graphic_heading_pane

0x6ccd,	// (0x00041207) list_single_graphic_pane_ParamLimits

0x6ccd,	// (0x00041207) list_single_graphic_pane

0x6ccd,	// (0x00041207) list_single_heading_pane_ParamLimits

0x6ccd,	// (0x00041207) list_single_heading_pane

0x6d4e,	// (0x00041288) list_single_large_graphic_pane_ParamLimits

0x6d4e,	// (0x00041288) list_single_large_graphic_pane

0x6ccd,	// (0x00041207) list_single_number_heading_pane_ParamLimits

0x6ccd,	// (0x00041207) list_single_number_heading_pane

0x6ccd,	// (0x00041207) list_single_number_pane_ParamLimits

0x6ccd,	// (0x00041207) list_single_number_pane

0x6ccd,	// (0x00041207) list_single_pane_ParamLimits

0x6ccd,	// (0x00041207) list_single_pane

0x7eec,	// (0x00042426) list_highlight_pane_cp1

0x5cbc,	// (0x000401f6) list_single_pane_g1_ParamLimits

0x5cbc,	// (0x000401f6) list_single_pane_g1

0x5cc8,	// (0x00040202) list_single_pane_g2_ParamLimits

0x5cc8,	// (0x00040202) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00049b0c) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00049b0c) list_single_pane_g

0x52ba,	// (0x0003f7f4) list_single_pane_t1_ParamLimits

0x52ba,	// (0x0003f7f4) list_single_pane_t1

0x5cbc,	// (0x000401f6) list_single_number_pane_g1_ParamLimits

0x5cbc,	// (0x000401f6) list_single_number_pane_g1

0x5cc8,	// (0x00040202) list_single_number_pane_g2_ParamLimits

0x5cc8,	// (0x00040202) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00049b0c) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00049b0c) list_single_number_pane_g

0x5189,	// (0x0003f6c3) list_single_number_pane_t1_ParamLimits

0x5189,	// (0x0003f6c3) list_single_number_pane_t1

0x5278,	// (0x0003f7b2) list_single_number_pane_t2_ParamLimits

0x5278,	// (0x0003f7b2) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00049e99) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00049e99) list_single_number_pane_t

0x49c7,	// (0x0003ef01) list_single_graphic_pane_g1_ParamLimits

0x49c7,	// (0x0003ef01) list_single_graphic_pane_g1

0x5cbc,	// (0x000401f6) list_single_graphic_pane_g2_ParamLimits

0x5cbc,	// (0x000401f6) list_single_graphic_pane_g2

0x5cc8,	// (0x00040202) list_single_graphic_pane_g3_ParamLimits

0x5cc8,	// (0x00040202) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00049afb) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00049afb) list_single_graphic_pane_g

0x49d3,	// (0x0003ef0d) list_single_graphic_pane_t1_ParamLimits

0x49d3,	// (0x0003ef0d) list_single_graphic_pane_t1

0x49e9,	// (0x0003ef23) list_single_heading_pane_g1_ParamLimits

0x49e9,	// (0x0003ef23) list_single_heading_pane_g1

0x5cc8,	// (0x00040202) list_single_heading_pane_g2_ParamLimits

0x5cc8,	// (0x00040202) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00049b02) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00049b02) list_single_heading_pane_g

0x49fc,	// (0x0003ef36) list_single_heading_pane_t1_ParamLimits

0x49fc,	// (0x0003ef36) list_single_heading_pane_t1

0x5cd4,	// (0x0004020e) list_single_heading_pane_t2_ParamLimits

0x5cd4,	// (0x0004020e) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00049b07) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00049b07) list_single_heading_pane_t

0x5cbc,	// (0x000401f6) list_single_number_heading_pane_g1_ParamLimits

0x5cbc,	// (0x000401f6) list_single_number_heading_pane_g1

0x5cc8,	// (0x00040202) list_single_number_heading_pane_g2_ParamLimits

0x5cc8,	// (0x00040202) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00049b0c) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00049b0c) list_single_number_heading_pane_g

0x4a12,	// (0x0003ef4c) list_single_number_heading_pane_t1_ParamLimits

0x4a12,	// (0x0003ef4c) list_single_number_heading_pane_t1

0x4a28,	// (0x0003ef62) list_single_number_heading_pane_t2_ParamLimits

0x4a28,	// (0x0003ef62) list_single_number_heading_pane_t2

0x4a3a,	// (0x0003ef74) list_single_number_heading_pane_t3_ParamLimits

0x4a3a,	// (0x0003ef74) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00049b11) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00049b11) list_single_number_heading_pane_t

0x4a4c,	// (0x0003ef86) list_single_graphic_heading_pane_g1_ParamLimits

0x4a4c,	// (0x0003ef86) list_single_graphic_heading_pane_g1

0x4a62,	// (0x0003ef9c) list_single_graphic_heading_pane_g4_ParamLimits

0x4a62,	// (0x0003ef9c) list_single_graphic_heading_pane_g4

0x5cc8,	// (0x00040202) list_single_graphic_heading_pane_g5_ParamLimits

0x5cc8,	// (0x00040202) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00049b18) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00049b18) list_single_graphic_heading_pane_g

0x4a12,	// (0x0003ef4c) list_single_graphic_heading_pane_t1_ParamLimits

0x4a12,	// (0x0003ef4c) list_single_graphic_heading_pane_t1

0x4a73,	// (0x0003efad) list_single_graphic_heading_pane_t2_ParamLimits

0x4a73,	// (0x0003efad) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00049b1f) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00049b1f) list_single_graphic_heading_pane_t

0x5ce6,	// (0x00040220) list_single_large_graphic_pane_g1_ParamLimits

0x5ce6,	// (0x00040220) list_single_large_graphic_pane_g1

0x5cf2,	// (0x0004022c) list_single_large_graphic_pane_g2_ParamLimits

0x5cf2,	// (0x0004022c) list_single_large_graphic_pane_g2

0x5cfe,	// (0x00040238) list_single_large_graphic_pane_g3_ParamLimits

0x5cfe,	// (0x00040238) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00049b24) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00049b24) list_single_large_graphic_pane_g

0xa2f5,	// (0x0004482f) wait_border_pane_g2_copy1

0x5d0a,	// (0x00040244) list_single_large_graphic_pane_g4_cp2

0x4a8b,	// (0x0003efc5) list_single_large_graphic_pane_t1_ParamLimits

0x4a8b,	// (0x0003efc5) list_single_large_graphic_pane_t1

0x4aa1,	// (0x0003efdb) list_double_pane_g1_ParamLimits

0x4aa1,	// (0x0003efdb) list_double_pane_g1

0x4aad,	// (0x0003efe7) list_double_pane_g2_ParamLimits

0x4aad,	// (0x0003efe7) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00049b2b) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00049b2b) list_double_pane_g

0x4ab9,	// (0x0003eff3) list_double_pane_t1_ParamLimits

0x4ab9,	// (0x0003eff3) list_double_pane_t1

0x4acf,	// (0x0003f009) list_double_pane_t2_ParamLimits

0x4acf,	// (0x0003f009) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00049b30) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00049b30) list_double_pane_t

0x4ae1,	// (0x0003f01b) list_double2_pane_g1_ParamLimits

0x4ae1,	// (0x0003f01b) list_double2_pane_g1

0x4af2,	// (0x0003f02c) list_double2_pane_g2_ParamLimits

0x4af2,	// (0x0003f02c) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00049b35) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00049b35) list_double2_pane_g

0x4afe,	// (0x0003f038) list_double2_pane_t1_ParamLimits

0x4afe,	// (0x0003f038) list_double2_pane_t1

0x4b14,	// (0x0003f04e) list_double2_pane_t2_ParamLimits

0x4b14,	// (0x0003f04e) list_double2_pane_t2

0x0001,

0xf600,	// (0x00049b3a) list_double2_pane_t_ParamLimits

0xf600,	// (0x00049b3a) list_double2_pane_t

0x4aa1,	// (0x0003efdb) list_double_number_pane_g1_ParamLimits

0x4aa1,	// (0x0003efdb) list_double_number_pane_g1

0x4aad,	// (0x0003efe7) list_double_number_pane_g2_ParamLimits

0x4aad,	// (0x0003efe7) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00049b2b) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00049b2b) list_double_number_pane_g

0x4b26,	// (0x0003f060) list_double_number_pane_t1_ParamLimits

0x4b26,	// (0x0003f060) list_double_number_pane_t1

0x4b38,	// (0x0003f072) list_double_number_pane_t2_ParamLimits

0x4b38,	// (0x0003f072) list_double_number_pane_t2

0x4b4e,	// (0x0003f088) list_double_number_pane_t3_ParamLimits

0x4b4e,	// (0x0003f088) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00049b3f) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00049b3f) list_double_number_pane_t

0x4b60,	// (0x0003f09a) list_double_graphic_pane_g1_ParamLimits

0x4b60,	// (0x0003f09a) list_double_graphic_pane_g1

0x4b6c,	// (0x0003f0a6) list_double_graphic_pane_g2_ParamLimits

0x4b6c,	// (0x0003f0a6) list_double_graphic_pane_g2

0x4b7b,	// (0x0003f0b5) list_double_graphic_pane_g3_ParamLimits

0x4b7b,	// (0x0003f0b5) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00049b46) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00049b46) list_double_graphic_pane_g

0x4b87,	// (0x0003f0c1) list_double_graphic_pane_t1_ParamLimits

0x4b87,	// (0x0003f0c1) list_double_graphic_pane_t1

0x4b9d,	// (0x0003f0d7) list_double_graphic_pane_t2_ParamLimits

0x4b9d,	// (0x0003f0d7) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00049b4f) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00049b4f) list_double_graphic_pane_t

0x4baf,	// (0x0003f0e9) list_double2_graphic_pane_g1_ParamLimits

0x4baf,	// (0x0003f0e9) list_double2_graphic_pane_g1

0x87e5,	// (0x00042d1f) list_double2_graphic_pane_g2_ParamLimits

0x87e5,	// (0x00042d1f) list_double2_graphic_pane_g2

0x5d1e,	// (0x00040258) list_double2_graphic_pane_g3_ParamLimits

0x5d1e,	// (0x00040258) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00049b54) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00049b54) list_double2_graphic_pane_g

0x4bbb,	// (0x0003f0f5) list_double2_graphic_pane_t1_ParamLimits

0x4bbb,	// (0x0003f0f5) list_double2_graphic_pane_t1

0x4bd1,	// (0x0003f10b) list_double2_graphic_pane_t2_ParamLimits

0x4bd1,	// (0x0003f10b) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00049b5b) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00049b5b) list_double2_graphic_pane_t

0x4be3,	// (0x0003f11d) list_double_large_graphic_pane_g1_ParamLimits

0x4be3,	// (0x0003f11d) list_double_large_graphic_pane_g1

0x4c02,	// (0x0003f13c) list_double_large_graphic_pane_g2_ParamLimits

0x4c02,	// (0x0003f13c) list_double_large_graphic_pane_g2

0x4aad,	// (0x0003efe7) list_double_large_graphic_pane_g3_ParamLimits

0x4aad,	// (0x0003efe7) list_double_large_graphic_pane_g3

0x4c18,	// (0x0003f152) list_double_large_graphic_pane_g4_ParamLimits

0x4c18,	// (0x0003f152) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00049b60) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00049b60) list_double_large_graphic_pane_g

0x4c2b,	// (0x0003f165) list_double_large_graphic_pane_t1_ParamLimits

0x4c2b,	// (0x0003f165) list_double_large_graphic_pane_t1

0x4c44,	// (0x0003f17e) list_double_large_graphic_pane_t2_ParamLimits

0x4c44,	// (0x0003f17e) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00049b6b) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00049b6b) list_double_large_graphic_pane_t

0x5d3f,	// (0x00040279) list_double2_large_graphic_pane_g1_ParamLimits

0x5d3f,	// (0x00040279) list_double2_large_graphic_pane_g1

0x5d4b,	// (0x00040285) list_double2_large_graphic_pane_g2_ParamLimits

0x5d4b,	// (0x00040285) list_double2_large_graphic_pane_g2

0x5d1e,	// (0x00040258) list_double2_large_graphic_pane_g3_ParamLimits

0x5d1e,	// (0x00040258) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00049b70) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00049b70) list_double2_large_graphic_pane_g

0x4c56,	// (0x0003f190) list_double2_large_graphic_pane_t1_ParamLimits

0x4c56,	// (0x0003f190) list_double2_large_graphic_pane_t1

0x4c6c,	// (0x0003f1a6) list_double2_large_graphic_pane_t2_ParamLimits

0x4c6c,	// (0x0003f1a6) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00049b77) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00049b77) list_double2_large_graphic_pane_t

0x4c7e,	// (0x0003f1b8) list_double_heading_pane_g1_ParamLimits

0x4c7e,	// (0x0003f1b8) list_double_heading_pane_g1

0x5d5c,	// (0x00040296) list_double_heading_pane_g2_ParamLimits

0x5d5c,	// (0x00040296) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00049b7c) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00049b7c) list_double_heading_pane_g

0x4c8f,	// (0x0003f1c9) list_double_heading_pane_t1_ParamLimits

0x4c8f,	// (0x0003f1c9) list_double_heading_pane_t1

0x4b14,	// (0x0003f04e) list_double_heading_pane_t2_ParamLimits

0x4b14,	// (0x0003f04e) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00049b81) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00049b81) list_double_heading_pane_t

0x4ca5,	// (0x0003f1df) list_double_graphic_heading_pane_g1_ParamLimits

0x4ca5,	// (0x0003f1df) list_double_graphic_heading_pane_g1

0x4c7e,	// (0x0003f1b8) list_double_graphic_heading_pane_g2_ParamLimits

0x4c7e,	// (0x0003f1b8) list_double_graphic_heading_pane_g2

0x5d5c,	// (0x00040296) list_double_graphic_heading_pane_g3_ParamLimits

0x5d5c,	// (0x00040296) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00049b86) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00049b86) list_double_graphic_heading_pane_g

0x4cb1,	// (0x0003f1eb) list_double_graphic_heading_pane_t1_ParamLimits

0x4cb1,	// (0x0003f1eb) list_double_graphic_heading_pane_t1

0x4bd1,	// (0x0003f10b) list_double_graphic_heading_pane_t2_ParamLimits

0x4bd1,	// (0x0003f10b) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00049b8d) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00049b8d) list_double_graphic_heading_pane_t

0x4cc7,	// (0x0003f201) list_double_time_pane_g1_ParamLimits

0x4cc7,	// (0x0003f201) list_double_time_pane_g1

0x4cd8,	// (0x0003f212) list_double_time_pane_g2_ParamLimits

0x4cd8,	// (0x0003f212) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00049b92) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00049b92) list_double_time_pane_g

0x4ce4,	// (0x0003f21e) list_double_time_pane_t1_ParamLimits

0x4ce4,	// (0x0003f21e) list_double_time_pane_t1

0x4cfa,	// (0x0003f234) list_double_time_pane_t2_ParamLimits

0x4cfa,	// (0x0003f234) list_double_time_pane_t2

0x4d0c,	// (0x0003f246) list_double_time_pane_t3_ParamLimits

0x4d0c,	// (0x0003f246) list_double_time_pane_t3

0x4d1e,	// (0x0003f258) list_double_time_pane_t4_ParamLimits

0x4d1e,	// (0x0003f258) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00049b97) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00049b97) list_double_time_pane_t

0x4d30,	// (0x0003f26a) list_setting_pane_g1_ParamLimits

0x4d30,	// (0x0003f26a) list_setting_pane_g1

0x4af2,	// (0x0003f02c) list_setting_pane_g2_ParamLimits

0x4af2,	// (0x0003f02c) list_setting_pane_g2

0x0001,

0xf666,	// (0x00049ba0) list_setting_pane_g_ParamLimits

0xf666,	// (0x00049ba0) list_setting_pane_g

0x4d3c,	// (0x0003f276) list_setting_pane_t1_ParamLimits

0x4d3c,	// (0x0003f276) list_setting_pane_t1

0x4d56,	// (0x0003f290) list_setting_pane_t2_ParamLimits

0x4d56,	// (0x0003f290) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00049ba5) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00049ba5) list_setting_pane_t

0x4d93,	// (0x0003f2cd) set_value_pane_cp_ParamLimits

0x4d93,	// (0x0003f2cd) set_value_pane_cp

0x4d9f,	// (0x0003f2d9) list_setting_number_pane_g1_ParamLimits

0x4d9f,	// (0x0003f2d9) list_setting_number_pane_g1

0x4dab,	// (0x0003f2e5) list_setting_number_pane_g2_ParamLimits

0x4dab,	// (0x0003f2e5) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00049bac) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00049bac) list_setting_number_pane_g

0x4db7,	// (0x0003f2f1) list_setting_number_pane_t1_ParamLimits

0x4db7,	// (0x0003f2f1) list_setting_number_pane_t1

0x4dd0,	// (0x0003f30a) list_setting_number_pane_t2_ParamLimits

0x4dd0,	// (0x0003f30a) list_setting_number_pane_t2

0x4dea,	// (0x0003f324) list_setting_number_pane_t3_ParamLimits

0x4dea,	// (0x0003f324) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00049bb1) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00049bb1) list_setting_number_pane_t

0x4d93,	// (0x0003f2cd) set_value_pane_ParamLimits

0x4d93,	// (0x0003f2cd) set_value_pane

0x87f1,	// (0x00042d2b) bg_set_opt_pane_ParamLimits

0x87f1,	// (0x00042d2b) bg_set_opt_pane

0x4e2d,	// (0x0003f367) set_value_pane_t1

0x8812,	// (0x00042d4c) slider_set_pane_cp3

0x881b,	// (0x00042d55) volume_small_pane_cp

0x8824,	// (0x00042d5e) list_form_gen_pane

0x882d,	// (0x00042d67) scroll_pane_cp8

0x4e43,	// (0x0003f37d) form_field_data_pane_ParamLimits

0x4e43,	// (0x0003f37d) form_field_data_pane

0x4e65,	// (0x0003f39f) form_field_data_wide_pane_ParamLimits

0x4e65,	// (0x0003f39f) form_field_data_wide_pane

0x4e86,	// (0x0003f3c0) form_field_popup_pane_ParamLimits

0x4e86,	// (0x0003f3c0) form_field_popup_pane

0x4ea6,	// (0x0003f3e0) form_field_popup_wide_pane_ParamLimits

0x4ea6,	// (0x0003f3e0) form_field_popup_wide_pane

0x4ec3,	// (0x0003f3fd) form_field_slider_pane_ParamLimits

0x4ec3,	// (0x0003f3fd) form_field_slider_pane

0x4ed6,	// (0x0003f410) form_field_slider_wide_pane_ParamLimits

0x4ed6,	// (0x0003f410) form_field_slider_wide_pane

0x883e,	// (0x00042d78) data_form_pane

0x4ef3,	// (0x0003f42d) form_field_data_pane_t1

0x884a,	// (0x00042d84) input_focus_pane

0x4f0d,	// (0x0003f447) data_form_wide_pane

0x4f2a,	// (0x0003f464) form_field_data_wide_pane_t1

0x8597,	// (0x00042ad1) input_focus_pane_cp6

0x4f4c,	// (0x0003f486) form_field_popup_pane_t1

0x884a,	// (0x00042d84) input_focus_pane_cp7

0x886c,	// (0x00042da6) list_form_pane

0x4f6e,	// (0x0003f4a8) form_field_popup_wide_pane_t1

0x884a,	// (0x00042d84) input_focus_pane_cp8

0x8878,	// (0x00042db2) list_form_wide_pane

0x4f8b,	// (0x0003f4c5) form_field_slider_pane_t1_ParamLimits

0x4f8b,	// (0x0003f4c5) form_field_slider_pane_t1

0x4fa3,	// (0x0003f4dd) form_field_slider_pane_t2_ParamLimits

0x4fa3,	// (0x0003f4dd) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00049bc1) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00049bc1) form_field_slider_pane_t

0x8247,	// (0x00042781) input_focus_pane_cp9_ParamLimits

0x8247,	// (0x00042781) input_focus_pane_cp9

0x4fb8,	// (0x0003f4f2) slider_cont_pane_ParamLimits

0x4fb8,	// (0x0003f4f2) slider_cont_pane

0x8887,	// (0x00042dc1) form_field_slider_wide_pane_t1_ParamLimits

0x8887,	// (0x00042dc1) form_field_slider_wide_pane_t1

0x4fcc,	// (0x0003f506) form_field_slider_wide_pane_t2_ParamLimits

0x4fcc,	// (0x0003f506) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00049bc6) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00049bc6) form_field_slider_wide_pane_t

0x8247,	// (0x00042781) input_focus_pane_cp10_ParamLimits

0x8247,	// (0x00042781) input_focus_pane_cp10

0x4fde,	// (0x0003f518) slider_cont_pane_cp1_ParamLimits

0x4fde,	// (0x0003f518) slider_cont_pane_cp1

0x4ff2,	// (0x0003f52c) slider_form_pane_cp

0x8899,	// (0x00042dd3) input_focus_pane_g1

0x88a1,	// (0x00042ddb) input_focus_pane_g2

0x88a9,	// (0x00042de3) input_focus_pane_g3

0x88b1,	// (0x00042deb) input_focus_pane_g4

0x88b9,	// (0x00042df3) input_focus_pane_g5

0x88c1,	// (0x00042dfb) input_focus_pane_g6

0x88c9,	// (0x00042e03) input_focus_pane_g7

0x88d1,	// (0x00042e0b) input_focus_pane_g8

0x88d9,	// (0x00042e13) input_focus_pane_g9

0x7ee2,	// (0x0004241c) input_focus_pane_g10

0x0009,

0xf691,	// (0x00049bcb) input_focus_pane_g

0xa2fe,	// (0x00044838) wait_border_pane_g3_copy1

0x4ffa,	// (0x0003f534) data_form_pane_t1

0x7ee2,	// (0x0004241c) wait_anim_pane_g1_copy1

0x528a,	// (0x0003f7c4) data_form_wide_pane_t1

0x5015,	// (0x0003f54f) list_form_graphic_pane_cp_ParamLimits

0x5015,	// (0x0003f54f) list_form_graphic_pane_cp

0xb219,	// (0x00045753) slider_form_pane_g1

0xb222,	// (0x0004575c) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00049ec9) slider_form_pane_g

0x5015,	// (0x0003f54f) list_form_graphic_pane_ParamLimits

0x5015,	// (0x0003f54f) list_form_graphic_pane

0x502c,	// (0x0003f566) list_form_graphic_pane_g1

0x5034,	// (0x0003f56e) list_form_graphic_pane_t1_ParamLimits

0x5034,	// (0x0003f56e) list_form_graphic_pane_t1

0x7fcc,	// (0x00042506) list_highlight_pane_cp5_ParamLimits

0x7fcc,	// (0x00042506) list_highlight_pane_cp5

0x5049,	// (0x0003f583) find_pane_g1

0x88e1,	// (0x00042e1b) input_find_pane

0x5052,	// (0x0003f58c) input_find_pane_g1_ParamLimits

0x5052,	// (0x0003f58c) input_find_pane_g1

0x505e,	// (0x0003f598) input_find_pane_t1_ParamLimits

0x505e,	// (0x0003f598) input_find_pane_t1

0x5073,	// (0x0003f5ad) input_find_pane_t2_ParamLimits

0x5073,	// (0x0003f5ad) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00049be0) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00049be0) input_find_pane_t

0x88ea,	// (0x00042e24) input_focus_pane_cp5_ParamLimits

0x88ea,	// (0x00042e24) input_focus_pane_cp5

0x8904,	// (0x00042e3e) bg_popup_window_pane_cp2_ParamLimits

0x8904,	// (0x00042e3e) bg_popup_window_pane_cp2

0x8911,	// (0x00042e4b) listscroll_menu_pane_ParamLimits

0x8911,	// (0x00042e4b) listscroll_menu_pane

0x891d,	// (0x00042e57) popup_submenu_window_ParamLimits

0x891d,	// (0x00042e57) popup_submenu_window

0x8945,	// (0x00042e7f) find_popup_pane_g1

0x894d,	// (0x00042e87) input_popup_find_pane_cp

0x88ea,	// (0x00042e24) input_focus_pane_cp4_ParamLimits

0x88ea,	// (0x00042e24) input_focus_pane_cp4

0x8965,	// (0x00042e9f) input_popup_find_pane_t1_ParamLimits

0x8965,	// (0x00042e9f) input_popup_find_pane_t1

0x7eec,	// (0x00042426) bg_popup_sub_pane_cp

0x8993,	// (0x00042ecd) listscroll_popup_sub_pane

0x899b,	// (0x00042ed5) list_submenu_pane_ParamLimits

0x899b,	// (0x00042ed5) list_submenu_pane

0x89ac,	// (0x00042ee6) scroll_pane_cp4

0x89b4,	// (0x00042eee) list_single_popup_submenu_pane_ParamLimits

0x89b4,	// (0x00042eee) list_single_popup_submenu_pane

0x89c8,	// (0x00042f02) list_single_popup_submenu_pane_g1

0x89d0,	// (0x00042f0a) list_single_popup_submenu_pane_t1_ParamLimits

0x89d0,	// (0x00042f0a) list_single_popup_submenu_pane_t1

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp1_ParamLimits

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp1

0x89e5,	// (0x00042f1f) tabs_2_active_pane_g1

0x89ed,	// (0x00042f27) tabs_2_active_pane_t1

0x7fcc,	// (0x00042506) bg_passive_tab_pane_cp1_ParamLimits

0x7fcc,	// (0x00042506) bg_passive_tab_pane_cp1

0x89e5,	// (0x00042f1f) tabs_2_passive_pane_g1

0x89ed,	// (0x00042f27) tabs_2_passive_pane_t1

0x89ff,	// (0x00042f39) bg_active_tab_pane_cp4

0x8a0d,	// (0x00042f47) tabs_2_long_active_pane_t1

0x8a20,	// (0x00042f5a) bg_passive_tab_pane_cp4

0x6960,	// (0x00040e9a) list_single_midp_graphic_pane_g4_ParamLimits

0x89ff,	// (0x00042f39) bg_active_tab_pane_cp5

0x8a2c,	// (0x00042f66) tabs_3_long_active_pane_t1

0x8a20,	// (0x00042f5a) bg_passive_tab_pane_cp5

0x6960,	// (0x00040e9a) list_single_midp_graphic_pane_g4

0x7fcc,	// (0x00042506) bg_popup_window_pane_cp13_ParamLimits

0x7fcc,	// (0x00042506) bg_popup_window_pane_cp13

0x8a47,	// (0x00042f81) listscroll_popup_fast_pane_ParamLimits

0x8a47,	// (0x00042f81) listscroll_popup_fast_pane

0x8a53,	// (0x00042f8d) grid_popup_fast_pane_ParamLimits

0x8a53,	// (0x00042f8d) grid_popup_fast_pane

0x8a65,	// (0x00042f9f) scroll_pane_cp9_ParamLimits

0x8a65,	// (0x00042f9f) scroll_pane_cp9

0xcabf,	// (0x00046ff9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcabf,	// (0x00046ff9) list_single_graphic_hl_pane_t1_cp2

0x8a89,	// (0x00042fc3) input_focus_pane_cp20_ParamLimits

0x8a89,	// (0x00042fc3) input_focus_pane_cp20

0x8a97,	// (0x00042fd1) query_popup_data_pane_t1_ParamLimits

0x8a97,	// (0x00042fd1) query_popup_data_pane_t1

0x8aaa,	// (0x00042fe4) query_popup_data_pane_t2_ParamLimits

0x8aaa,	// (0x00042fe4) query_popup_data_pane_t2

0x8af0,	// (0x0004302a) query_popup_data_pane_t3_ParamLimits

0x8af0,	// (0x0004302a) query_popup_data_pane_t3

0x8b31,	// (0x0004306b) query_popup_data_pane_t4_ParamLimits

0x8b31,	// (0x0004306b) query_popup_data_pane_t4

0x8b6d,	// (0x000430a7) query_popup_data_pane_t5_ParamLimits

0x8b6d,	// (0x000430a7) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00049be5) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00049be5) query_popup_data_pane_t

0x8899,	// (0x00042dd3) bg_set_opt_pane_g1

0x88a1,	// (0x00042ddb) bg_set_opt_pane_g2

0x88a9,	// (0x00042de3) bg_set_opt_pane_g3

0x88b1,	// (0x00042deb) bg_set_opt_pane_g4

0x88b9,	// (0x00042df3) bg_set_opt_pane_g5

0x88c1,	// (0x00042dfb) bg_set_opt_pane_g6

0x88c9,	// (0x00042e03) bg_set_opt_pane_g7

0x88d1,	// (0x00042e0b) bg_set_opt_pane_g8

0x88d9,	// (0x00042e13) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00049bf0) bg_set_opt_pane_g

0x601a,	// (0x00040554) control_top_pane_stacon_ParamLimits

0x601a,	// (0x00040554) control_top_pane_stacon

0x606d,	// (0x000405a7) signal_pane_stacon_ParamLimits

0x606d,	// (0x000405a7) signal_pane_stacon

0x912f,	// (0x00043669) stacon_top_pane_g1_ParamLimits

0x912f,	// (0x00043669) stacon_top_pane_g1

0x6092,	// (0x000405cc) title_pane_stacon_ParamLimits

0x6092,	// (0x000405cc) title_pane_stacon

0x60bc,	// (0x000405f6) uni_indicator_pane_stacon_ParamLimits

0x60bc,	// (0x000405f6) uni_indicator_pane_stacon

0x60d1,	// (0x0004060b) battery_pane_stacon_ParamLimits

0x60d1,	// (0x0004060b) battery_pane_stacon

0x6115,	// (0x0004064f) control_bottom_pane_stacon_ParamLimits

0x6115,	// (0x0004064f) control_bottom_pane_stacon

0x6138,	// (0x00040672) navi_pane_stacon_ParamLimits

0x6138,	// (0x00040672) navi_pane_stacon

0x9151,	// (0x0004368b) stacon_bottom_pane_g1_ParamLimits

0x9151,	// (0x0004368b) stacon_bottom_pane_g1

0x5d68,	// (0x000402a2) aid_levels_signal_lsc_ParamLimits

0x5d68,	// (0x000402a2) aid_levels_signal_lsc

0x5d7f,	// (0x000402b9) signal_pane_stacon_g1_ParamLimits

0x5d7f,	// (0x000402b9) signal_pane_stacon_g1

0x5d93,	// (0x000402cd) signal_pane_stacon_g2_ParamLimits

0x5d93,	// (0x000402cd) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00049c03) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00049c03) signal_pane_stacon_g

0x5dc8,	// (0x00040302) title_pane_stacon_t1_ParamLimits

0x5dc8,	// (0x00040302) title_pane_stacon_t1

0x8bb1,	// (0x000430eb) uni_indicator_pane_stacon_g1

0x8bbb,	// (0x000430f5) uni_indicator_pane_stacon_g2

0x8bc5,	// (0x000430ff) uni_indicator_pane_stacon_g3

0x8bcf,	// (0x00043109) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00049c0f) uni_indicator_pane_stacon_g

0x5ded,	// (0x00040327) control_top_pane_stacon_g1

0x5df5,	// (0x0004032f) control_top_pane_stacon_t1_ParamLimits

0x5df5,	// (0x0004032f) control_top_pane_stacon_t1

0x5e2c,	// (0x00040366) aid_levels_battery_lsc_ParamLimits

0x5e2c,	// (0x00040366) aid_levels_battery_lsc

0x5e44,	// (0x0004037e) battery_pane_stacon_g1_ParamLimits

0x5e44,	// (0x0004037e) battery_pane_stacon_g1

0x5e57,	// (0x00040391) battery_pane_stacon_g2_ParamLimits

0x5e57,	// (0x00040391) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00049c18) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00049c18) battery_pane_stacon_g

0x5e95,	// (0x000403cf) navi_icon_pane_stacon

0x5ea9,	// (0x000403e3) navi_navi_pane_stacon

0x5e95,	// (0x000403cf) navi_text_pane_stacon

0x5ded,	// (0x00040327) control_bottom_pane_stacon_g1

0x5ebd,	// (0x000403f7) control_bottom_pane_stacon_t1_ParamLimits

0x5ebd,	// (0x000403f7) control_bottom_pane_stacon_t1

0x8bf3,	// (0x0004312d) grid_app_pane_ParamLimits

0x8bf3,	// (0x0004312d) grid_app_pane

0x8c15,	// (0x0004314f) scroll_pane_cp15_ParamLimits

0x8c15,	// (0x0004314f) scroll_pane_cp15

0x8c28,	// (0x00043162) cell_app_pane_ParamLimits

0x8c28,	// (0x00043162) cell_app_pane

0x8c4e,	// (0x00043188) cell_app_pane_g1_ParamLimits

0x8c4e,	// (0x00043188) cell_app_pane_g1

0x8c72,	// (0x000431ac) cell_app_pane_g2_ParamLimits

0x8c72,	// (0x000431ac) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00049c1d) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00049c1d) cell_app_pane_g

0x8c7e,	// (0x000431b8) cell_app_pane_t1_ParamLimits

0x8c7e,	// (0x000431b8) cell_app_pane_t1

0x8c95,	// (0x000431cf) grid_highlight_pane_ParamLimits

0x8c95,	// (0x000431cf) grid_highlight_pane

0x8899,	// (0x00042dd3) cell_highlight_pane_g1

0x88a1,	// (0x00042ddb) cell_highlight_pane_g2

0x88a9,	// (0x00042de3) cell_highlight_pane_g3

0x88b1,	// (0x00042deb) cell_highlight_pane_g4

0x88b9,	// (0x00042df3) cell_highlight_pane_g5

0x88c1,	// (0x00042dfb) cell_highlight_pane_g6

0x88c9,	// (0x00042e03) cell_highlight_pane_g7

0x88d1,	// (0x00042e0b) cell_highlight_pane_g8

0x88d9,	// (0x00042e13) cell_highlight_pane_g9

0x7ee2,	// (0x0004241c) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00049bcb) cell_highlight_pane_g

0x8ca6,	// (0x000431e0) bg_scroll_pane

0x5f07,	// (0x00040441) scroll_handle_pane

0x8ced,	// (0x00043227) scroll_bg_pane_g1

0x8d02,	// (0x0004323c) scroll_bg_pane_g2

0x8d1a,	// (0x00043254) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00049c22) scroll_bg_pane_g

0x8d2f,	// (0x00043269) scroll_handle_focus_pane_ParamLimits

0x8d2f,	// (0x00043269) scroll_handle_focus_pane

0x8ced,	// (0x00043227) scroll_handle_pane_g1

0x8d3c,	// (0x00043276) scroll_handle_pane_g2

0x8d1a,	// (0x00043254) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00049c29) scroll_handle_pane_g

0x88ea,	// (0x00042e24) bg_popup_sub_pane_cp21_ParamLimits

0x88ea,	// (0x00042e24) bg_popup_sub_pane_cp21

0x8d50,	// (0x0004328a) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d50,	// (0x0004328a) popup_fep_japan_predictive_window_t1

0x8d6a,	// (0x000432a4) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d6a,	// (0x000432a4) popup_fep_japan_predictive_window_t2

0x8d9d,	// (0x000432d7) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d9d,	// (0x000432d7) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00049c30) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00049c30) popup_fep_japan_predictive_window_t

0x7eec,	// (0x00042426) bg_popup_sub_pane_cp23

0x8dd4,	// (0x0004330e) listscroll_japin_cand_pane

0x8ddc,	// (0x00043316) popup_fep_japan_candidate_window_t1

0x8dea,	// (0x00043324) candidate_pane_ParamLimits

0x8dea,	// (0x00043324) candidate_pane

0x8dfc,	// (0x00043336) scroll_pane_cp30

0x8e04,	// (0x0004333e) list_single_popup_jap_candidate_pane_ParamLimits

0x8e04,	// (0x0004333e) list_single_popup_jap_candidate_pane

0x7eec,	// (0x00042426) list_highlight_pane_cp30

0x8e18,	// (0x00043352) list_single_popup_jap_candidate_pane_t1

0x8e27,	// (0x00043361) level_1_signal

0x8e34,	// (0x0004336e) level_2_signal

0x8e41,	// (0x0004337b) level_3_signal

0x8e4e,	// (0x00043388) level_4_signal

0x8e5b,	// (0x00043395) level_5_signal

0x8e68,	// (0x000433a2) level_6_signal

0x8e75,	// (0x000433af) level_7_signal

0x8e27,	// (0x00043361) level_1_battery

0x8e34,	// (0x0004336e) level_2_battery

0x8e41,	// (0x0004337b) level_3_battery

0x8e4e,	// (0x00043388) level_4_battery

0x8e5b,	// (0x00043395) level_5_battery

0x8e68,	// (0x000433a2) level_6_battery

0x8e75,	// (0x000433af) level_7_battery

0x8e9a,	// (0x000433d4) list_menu_pane_ParamLimits

0x8e9a,	// (0x000433d4) list_menu_pane

0x8eb0,	// (0x000433ea) scroll_pane_cp25_ParamLimits

0x8eb0,	// (0x000433ea) scroll_pane_cp25

0x8ec9,	// (0x00043403) list_double2_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x00043403) list_double2_graphic_pane_cp2

0x8ec9,	// (0x00043403) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x00043403) list_double2_large_graphic_pane_cp2

0x8ec9,	// (0x00043403) list_double2_pane_cp2_ParamLimits

0x8ec9,	// (0x00043403) list_double2_pane_cp2

0x8ec9,	// (0x00043403) list_double_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x00043403) list_double_graphic_pane_cp2

0x8ec9,	// (0x00043403) list_double_large_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x00043403) list_double_large_graphic_pane_cp2

0x8ec9,	// (0x00043403) list_double_number_pane_cp2_ParamLimits

0x8ec9,	// (0x00043403) list_double_number_pane_cp2

0x8ec9,	// (0x00043403) list_double_pane_cp2_ParamLimits

0x8ec9,	// (0x00043403) list_double_pane_cp2

0x8eed,	// (0x00043427) list_single_2graphic_pane_cp2_ParamLimits

0x8eed,	// (0x00043427) list_single_2graphic_pane_cp2

0x8eed,	// (0x00043427) list_single_graphic_heading_pane_cp2_ParamLimits

0x8eed,	// (0x00043427) list_single_graphic_heading_pane_cp2

0x8eed,	// (0x00043427) list_single_graphic_pane_cp2_ParamLimits

0x8eed,	// (0x00043427) list_single_graphic_pane_cp2

0x8eed,	// (0x00043427) list_single_heading_pane_cp2_ParamLimits

0x8eed,	// (0x00043427) list_single_heading_pane_cp2

0x8f03,	// (0x0004343d) list_single_large_graphic_pane_cp2_ParamLimits

0x8f03,	// (0x0004343d) list_single_large_graphic_pane_cp2

0x8eed,	// (0x00043427) list_single_number_heading_pane_cp2_ParamLimits

0x8eed,	// (0x00043427) list_single_number_heading_pane_cp2

0x8eed,	// (0x00043427) list_single_number_pane_cp2_ParamLimits

0x8eed,	// (0x00043427) list_single_number_pane_cp2

0x8eed,	// (0x00043427) list_single_pane_cp2_ParamLimits

0x8eed,	// (0x00043427) list_single_pane_cp2

0x8f7e,	// (0x000434b8) bg_popup_sub_pane_cp22

0x5fb6,	// (0x000404f0) popup_side_volume_key_window_g1

0x5fda,	// (0x00040514) popup_side_volume_key_window_t1

0x5ff6,	// (0x00040530) volume_small_pane_cp1

0x8247,	// (0x00042781) bg_popup_sub_pane_cp24_ParamLimits

0x8247,	// (0x00042781) bg_popup_sub_pane_cp24

0x8f94,	// (0x000434ce) fep_china_uni_candidate_pane_ParamLimits

0x8f94,	// (0x000434ce) fep_china_uni_candidate_pane

0x8fa8,	// (0x000434e2) fep_china_uni_entry_pane

0x8fb8,	// (0x000434f2) popup_fep_china_uni_window_g1

0x8fd4,	// (0x0004350e) fep_china_uni_entry_pane_g1

0x8fdc,	// (0x00043516) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00049c61) fep_china_uni_entry_pane_g

0x8fe4,	// (0x0004351e) fep_entry_item_pane

0x8fee,	// (0x00043528) fep_candidate_item_pane

0x8ff6,	// (0x00043530) fep_china_uni_candidate_pane_g1

0x8ffe,	// (0x00043538) fep_china_uni_candidate_pane_g2

0x9006,	// (0x00043540) fep_china_uni_candidate_pane_g3

0x900e,	// (0x00043548) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00049c66) fep_china_uni_candidate_pane_g

0x7ee2,	// (0x0004241c) fep_entry_item_pane_g1

0x9016,	// (0x00043550) fep_entry_item_pane_t1_ParamLimits

0x9016,	// (0x00043550) fep_entry_item_pane_t1

0x902c,	// (0x00043566) fep_candidate_item_pane_t1_ParamLimits

0x902c,	// (0x00043566) fep_candidate_item_pane_t1

0x9041,	// (0x0004357b) fep_candidate_item_pane_t2_ParamLimits

0x9041,	// (0x0004357b) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00049c6f) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00049c6f) fep_candidate_item_pane_t

0x7fcc,	// (0x00042506) list_highlight_pane_cp31_ParamLimits

0x7fcc,	// (0x00042506) list_highlight_pane_cp31

0x9053,	// (0x0004358d) level_1_signal_lsc

0x905c,	// (0x00043596) level_2_signal_lsc

0x9065,	// (0x0004359f) level_3_signal_lsc

0x906e,	// (0x000435a8) level_4_signal_lsc

0x9077,	// (0x000435b1) level_5_signal_lsc

0x9080,	// (0x000435ba) level_6_signal_lsc

0x9089,	// (0x000435c3) level_7_signal_lsc

0x9089,	// (0x000435c3) level_1_battery_lsc

0x9092,	// (0x000435cc) level_2_battery_lsc

0x909b,	// (0x000435d5) level_3_battery_lsc

0x90a4,	// (0x000435de) level_4_battery_lsc

0x90ad,	// (0x000435e7) level_5_battery_lsc

0x90b6,	// (0x000435f0) level_6_battery_lsc

0x9053,	// (0x0004358d) level_7_battery_lsc

0x90bf,	// (0x000435f9) scroll_handle_focus_pane_g1

0x90c8,	// (0x00043602) scroll_handle_focus_pane_g2

0x90d1,	// (0x0004360b) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00049c74) scroll_handle_focus_pane_g

0x5088,	// (0x0003f5c2) list_single_2graphic_pane_g1_ParamLimits

0x5088,	// (0x0003f5c2) list_single_2graphic_pane_g1

0x4a62,	// (0x0003ef9c) list_single_2graphic_pane_g2_ParamLimits

0x4a62,	// (0x0003ef9c) list_single_2graphic_pane_g2

0x5cc8,	// (0x00040202) list_single_2graphic_pane_g3_ParamLimits

0x5cc8,	// (0x00040202) list_single_2graphic_pane_g3

0x5094,	// (0x0003f5ce) list_single_2graphic_pane_g4_ParamLimits

0x5094,	// (0x0003f5ce) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00049c7b) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00049c7b) list_single_2graphic_pane_g

0x50a5,	// (0x0003f5df) list_single_2graphic_pane_t1_ParamLimits

0x50a5,	// (0x0003f5df) list_single_2graphic_pane_t1

0x5ffe,	// (0x00040538) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5ffe,	// (0x00040538) list_double2_graphic_large_graphic_pane_g1

0x5d4b,	// (0x00040285) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5d4b,	// (0x00040285) list_double2_graphic_large_graphic_pane_g2

0x5d1e,	// (0x00040258) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5d1e,	// (0x00040258) list_double2_graphic_large_graphic_pane_g3

0x600e,	// (0x00040548) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x600e,	// (0x00040548) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00049c84) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00049c84) list_double2_graphic_large_graphic_pane_g

0x50d3,	// (0x0003f60d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x50d3,	// (0x0003f60d) list_double2_graphic_large_graphic_pane_t1

0x50e9,	// (0x0003f623) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x50e9,	// (0x0003f623) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00049c8d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00049c8d) list_double2_graphic_large_graphic_pane_t

0x9218,	// (0x00043752) popup_fast_swap_window_ParamLimits

0x9218,	// (0x00043752) popup_fast_swap_window

0x9234,	// (0x0004376e) popup_side_volume_key_window

0x924e,	// (0x00043788) stacon_top_pane

0x9258,	// (0x00043792) status_pane_ParamLimits

0x9258,	// (0x00043792) status_pane

0x9266,	// (0x000437a0) status_small_pane

0x7eec,	// (0x00042426) control_pane

0x7eec,	// (0x00042426) stacon_bottom_pane

0x882d,	// (0x00042d67) scroll_pane_cp121

0x8824,	// (0x00042d5e) set_content_pane

0x90da,	// (0x00043614) bg_active_tab_pane_g1_cp1

0x90e3,	// (0x0004361d) bg_active_tab_pane_g2_cp1

0x90ec,	// (0x00043626) bg_active_tab_pane_g3_cp1

0x90da,	// (0x00043614) bg_passive_tab_pane_g1_cp1

0x90e3,	// (0x0004361d) bg_passive_tab_pane_g2_cp1

0x90ec,	// (0x00043626) bg_passive_tab_pane_g3_cp1

0x90f5,	// (0x0004362f) bg_active_tab_pane_g1_cp2

0x90e3,	// (0x0004361d) bg_active_tab_pane_g2_cp2

0x90fe,	// (0x00043638) bg_active_tab_pane_g3_cp2

0x90f5,	// (0x0004362f) bg_passive_tab_pane_g1_cp2

0x90e3,	// (0x0004361d) bg_passive_tab_pane_g2_cp2

0x90fe,	// (0x00043638) bg_passive_tab_pane_g3_cp2

0x9107,	// (0x00043641) bg_active_tab_pane_g1_cp3

0x90e3,	// (0x0004361d) bg_active_tab_pane_g2_cp3

0x9110,	// (0x0004364a) bg_active_tab_pane_g3_cp3

0x9107,	// (0x00043641) bg_passive_tab_pane_g1_cp3

0x90e3,	// (0x0004361d) bg_passive_tab_pane_g2_cp3

0x9110,	// (0x0004364a) bg_passive_tab_pane_g3_cp3

0x9119,	// (0x00043653) bg_active_tab_pane_g1_cp4

0x90e3,	// (0x0004361d) bg_active_tab_pane_g2_cp4

0x9124,	// (0x0004365e) bg_active_tab_pane_g3_cp4

0x9119,	// (0x00043653) bg_passive_tab_pane_g1_cp4

0x90e3,	// (0x0004361d) bg_passive_tab_pane_g2_cp4

0x9124,	// (0x0004365e) bg_passive_tab_pane_g3_cp4

0x916d,	// (0x000436a7) bg_active_tab_pane_g1_cp5

0x90e3,	// (0x0004361d) bg_active_tab_pane_g2_cp5

0x9176,	// (0x000436b0) bg_active_tab_pane_g3_cp5

0x916d,	// (0x000436a7) bg_passive_tab_pane_g1_cp5

0x90e3,	// (0x0004361d) bg_passive_tab_pane_g2_cp5

0x9176,	// (0x000436b0) bg_passive_tab_pane_g3_cp5

0x917f,	// (0x000436b9) list_set_graphic_pane_ParamLimits

0x917f,	// (0x000436b9) list_set_graphic_pane

0x7eec,	// (0x00042426) bg_set_opt_pane_cp4

0x919d,	// (0x000436d7) list_set_graphic_pane_g1_ParamLimits

0x919d,	// (0x000436d7) list_set_graphic_pane_g1

0x91a9,	// (0x000436e3) list_set_graphic_pane_g2_ParamLimits

0x91a9,	// (0x000436e3) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00049c92) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00049c92) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x0004a017) volume_small_pane_cp_g

0x91cb,	// (0x00043705) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91cb,	// (0x00043705) list_double2_large_graphic_pane_g1_cp2

0x91d7,	// (0x00043711) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91d7,	// (0x00043711) list_double2_large_graphic_pane_g2_cp2

0x91e8,	// (0x00043722) list_double2_large_graphic_pane_g3_cp2

0x91f0,	// (0x0004372a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x91f0,	// (0x0004372a) list_double2_large_graphic_pane_t1_cp2

0x9206,	// (0x00043740) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9206,	// (0x00043740) list_double2_large_graphic_pane_t2_cp2

0xadd7,	// (0x00045311) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadd7,	// (0x00045311) list_double_large_graphic_pane_g1_cp2

0xade8,	// (0x00045322) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xade8,	// (0x00045322) list_double_large_graphic_pane_g2_cp2

0x937f,	// (0x000438b9) list_double_large_graphic_pane_g3_cp2

0xadf9,	// (0x00045333) list_double_large_graphic_pane_g4_cp

0xae01,	// (0x0004533b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae01,	// (0x0004533b) list_double_large_graphic_pane_t1_cp2

0xae18,	// (0x00045352) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae18,	// (0x00045352) list_double_large_graphic_pane_t2_cp2

0x9271,	// (0x000437ab) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9271,	// (0x000437ab) list_double2_graphic_pane_g1_cp2

0x927f,	// (0x000437b9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x927f,	// (0x000437b9) list_double2_graphic_pane_g2_cp2

0x9290,	// (0x000437ca) list_double2_graphic_pane_g3_cp2

0x929a,	// (0x000437d4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x929a,	// (0x000437d4) list_double2_graphic_pane_t1_cp2

0x92b0,	// (0x000437ea) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92b0,	// (0x000437ea) list_double2_graphic_pane_t2_cp2

0x92c2,	// (0x000437fc) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92c2,	// (0x000437fc) list_single_number_heading_pane_g1_cp2

0x92ce,	// (0x00043808) list_single_number_heading_pane_g2_cp2

0x92d6,	// (0x00043810) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92d6,	// (0x00043810) list_single_number_heading_pane_t1_cp2

0x92ec,	// (0x00043826) list_single_number_heading_pane_t2_cp2_ParamLimits

0x92ec,	// (0x00043826) list_single_number_heading_pane_t2_cp2

0x92fe,	// (0x00043838) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92fe,	// (0x00043838) list_single_number_heading_pane_t3_cp2

0x92c2,	// (0x000437fc) list_single_heading_pane_g1_cp2_ParamLimits

0x92c2,	// (0x000437fc) list_single_heading_pane_g1_cp2

0x92ce,	// (0x00043808) list_single_heading_pane_g2_cp2

0x92d6,	// (0x00043810) list_single_heading_pane_t1_cp2_ParamLimits

0x92d6,	// (0x00043810) list_single_heading_pane_t1_cp2

0xabe1,	// (0x0004511b) list_single_heading_pane_t2_cp2_ParamLimits

0xabe1,	// (0x0004511b) list_single_heading_pane_t2_cp2

0xab29,	// (0x00045063) list_double_graphic_pane_g1_cp2_ParamLimits

0xab29,	// (0x00045063) list_double_graphic_pane_g1_cp2

0xab35,	// (0x0004506f) list_double_graphic_pane_g2_cp2_ParamLimits

0xab35,	// (0x0004506f) list_double_graphic_pane_g2_cp2

0xab44,	// (0x0004507e) list_double_graphic_pane_g3_cp2

0xab4c,	// (0x00045086) list_double_graphic_pane_t1_cp2_ParamLimits

0xab4c,	// (0x00045086) list_double_graphic_pane_t1_cp2

0xab62,	// (0x0004509c) list_double_graphic_pane_t2_cp2_ParamLimits

0xab62,	// (0x0004509c) list_double_graphic_pane_t2_cp2

0x9373,	// (0x000438ad) list_double_number_pane_g1_cp2_ParamLimits

0x9373,	// (0x000438ad) list_double_number_pane_g1_cp2

0x937f,	// (0x000438b9) list_double_number_pane_g2_cp2

0xaaed,	// (0x00045027) list_double_number_pane_t1_cp2_ParamLimits

0xaaed,	// (0x00045027) list_double_number_pane_t1_cp2

0xab01,	// (0x0004503b) list_double_number_pane_t2_cp2_ParamLimits

0xab01,	// (0x0004503b) list_double_number_pane_t2_cp2

0xab17,	// (0x00045051) list_double_number_pane_t3_cp2_ParamLimits

0xab17,	// (0x00045051) list_double_number_pane_t3_cp2

0xa9d6,	// (0x00044f10) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9d6,	// (0x00044f10) list_single_graphic_pane_g1_cp2

0x93d7,	// (0x00043911) list_single_graphic_pane_g2_cp2_ParamLimits

0x93d7,	// (0x00043911) list_single_graphic_pane_g2_cp2

0x93e3,	// (0x0004391d) list_single_graphic_pane_g3_cp2

0xa9ac,	// (0x00044ee6) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9ac,	// (0x00044ee6) list_single_graphic_pane_t1_cp2

0x93d7,	// (0x00043911) list_single_number_pane_g1_cp2_ParamLimits

0x93d7,	// (0x00043911) list_single_number_pane_g1_cp2

0x93e3,	// (0x0004391d) list_single_number_pane_g2_cp2

0xa9ac,	// (0x00044ee6) list_single_number_pane_t1_cp2_ParamLimits

0xa9ac,	// (0x00044ee6) list_single_number_pane_t1_cp2

0xa9c2,	// (0x00044efc) list_single_number_pane_t2_cp2_ParamLimits

0xa9c2,	// (0x00044efc) list_single_number_pane_t2_cp2

0x91d7,	// (0x00043711) list_double2_pane_g1_cp2_ParamLimits

0x91d7,	// (0x00043711) list_double2_pane_g1_cp2

0x91e8,	// (0x00043722) list_double2_pane_g2_cp2

0x934b,	// (0x00043885) list_double2_pane_t1_cp2_ParamLimits

0x934b,	// (0x00043885) list_double2_pane_t1_cp2

0x9361,	// (0x0004389b) list_double2_pane_t2_cp2_ParamLimits

0x9361,	// (0x0004389b) list_double2_pane_t2_cp2

0x9373,	// (0x000438ad) list_double_pane_g1_cp2_ParamLimits

0x9373,	// (0x000438ad) list_double_pane_g1_cp2

0x937f,	// (0x000438b9) list_double_pane_g2_cp2

0x9387,	// (0x000438c1) list_double_pane_t1_cp2_ParamLimits

0x9387,	// (0x000438c1) list_double_pane_t1_cp2

0x939d,	// (0x000438d7) list_double_pane_t2_cp2_ParamLimits

0x939d,	// (0x000438d7) list_double_pane_t2_cp2

0x93c7,	// (0x00043901) list_single_pane_cp2_g3

0x93d7,	// (0x00043911) list_single_pane_g1_cp2_ParamLimits

0x93d7,	// (0x00043911) list_single_pane_g1_cp2

0x93e3,	// (0x0004391d) list_single_pane_g2_cp2

0x93eb,	// (0x00043925) list_single_pane_t1_cp2_ParamLimits

0x93eb,	// (0x00043925) list_single_pane_t1_cp2

0x9403,	// (0x0004393d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9403,	// (0x0004393d) list_single_large_graphic_pane_g1_cp2

0x940f,	// (0x00043949) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x940f,	// (0x00043949) list_single_large_graphic_pane_g2_cp2

0x941b,	// (0x00043955) list_single_large_graphic_pane_g3_cp2

0x9423,	// (0x0004395d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9423,	// (0x0004395d) list_single_large_graphic_pane_g4_cp1

0x943d,	// (0x00043977) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x943d,	// (0x00043977) list_single_large_graphic_pane_t1_cp2

0xa978,	// (0x00044eb2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa978,	// (0x00044eb2) list_single_graphic_heading_pane_g1_cp2

0xa945,	// (0x00044e7f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa945,	// (0x00044e7f) list_single_graphic_heading_pane_g4_cp2

0x93e3,	// (0x0004391d) list_single_graphic_heading_pane_g5_cp2

0xa984,	// (0x00044ebe) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa984,	// (0x00044ebe) list_single_graphic_heading_pane_t1_cp2

0xa99a,	// (0x00044ed4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa99a,	// (0x00044ed4) list_single_graphic_heading_pane_t2_cp2

0xa939,	// (0x00044e73) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa939,	// (0x00044e73) list_single_2graphic_pane_g1_cp2

0xa945,	// (0x00044e7f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa945,	// (0x00044e7f) list_single_2graphic_pane_g2_cp2

0x93e3,	// (0x0004391d) list_single_2graphic_pane_g3_cp2

0xa956,	// (0x00044e90) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa956,	// (0x00044e90) list_single_2graphic_pane_g4_cp2

0xa962,	// (0x00044e9c) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa962,	// (0x00044e9c) list_single_2graphic_pane_t1_cp2

0x7ee2,	// (0x0004241c) list_highlight_pane_g10_cp1

0xa511,	// (0x00044a4b) list_highlight_pane_g1_cp1

0xa519,	// (0x00044a53) list_highlight_pane_g2_cp1

0xa521,	// (0x00044a5b) list_highlight_pane_g3_cp1

0xa529,	// (0x00044a63) list_highlight_pane_g4_cp1

0xa531,	// (0x00044a6b) list_highlight_pane_g5_cp1

0xa539,	// (0x00044a73) list_highlight_pane_g6_cp1

0xa541,	// (0x00044a7b) list_highlight_pane_g7_cp1

0xa549,	// (0x00044a83) list_highlight_pane_g8_cp1

0xa551,	// (0x00044a8b) list_highlight_pane_g9_cp1

0xa429,	// (0x00044963) form_field_slider_pane_t3

0xa437,	// (0x00044971) form_field_slider_pane_t4

0xa445,	// (0x0004497f) slider_form_pane_ParamLimits

0xa445,	// (0x0004497f) slider_form_pane

0x7eec,	// (0x00042426) control_abbreviations

0x7eec,	// (0x00042426) control_conventions

0x7eec,	// (0x00042426) control_definitions

0x7eec,	// (0x00042426) format_table_attribute

0xac2b,	// (0x00045165) bg_popup_preview_window_pane_g9

0x7eec,	// (0x00042426) format_table_data2

0x7eec,	// (0x00042426) format_table_data3

0x7eec,	// (0x00042426) format_table_data_example

0x0008,

0x7eec,	// (0x00042426) intro_purpose

0xf8ef,	// (0x00049e29) bg_popup_preview_window_pane_g

0x7eec,	// (0x00042426) texts_category

0x7eec,	// (0x00042426) texts_graphics

0x9453,	// (0x0004398d) text_digital

0x9462,	// (0x0004399c) text_primary

0x9471,	// (0x000439ab) text_primary_small

0x9480,	// (0x000439ba) text_secondary

0x948f,	// (0x000439c9) text_title

0xb2fa,	// (0x00045834) bg_passive_tab_pane_g1_cp3_srt

0x90e3,	// (0x0004361d) bg_passive_tab_pane_g2_cp3_srt

0xb303,	// (0x0004583d) bg_passive_tab_pane_g3_cp3_srt

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp3_srt_ParamLimits

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp3_srt

0xb30c,	// (0x00045846) tabs_4_active_pane_srt_g1

0xb314,	// (0x0004584e) tabs_4_active_pane_srt_t1_ParamLimits

0xb314,	// (0x0004584e) tabs_4_active_pane_srt_t1

0xb2fa,	// (0x00045834) bg_active_tab_pane_g1_cp3_copy1

0x90e3,	// (0x0004361d) bg_active_tab_pane_g2_cp3_copy1

0xb303,	// (0x0004583d) bg_active_tab_pane_g3_cp3_copy1

0x7fcc,	// (0x00042506) tabs_2_long_active_pane_srt_ParamLimits

0x7fcc,	// (0x00042506) tabs_2_long_active_pane_srt

0x7fcc,	// (0x00042506) tabs_2_long_passive_pane_srt_ParamLimits

0x7fcc,	// (0x00042506) tabs_2_long_passive_pane_srt

0x8a20,	// (0x00042f5a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a20,	// (0x00042f5a) bg_passive_tab_pane_cp4_srt

0xb05a,	// (0x00045594) bg_passive_tab_pane_g1_cp4_srt

0x90e3,	// (0x0004361d) bg_passive_tab_pane_g2_cp4_srt

0xb063,	// (0x0004559d) bg_passive_tab_pane_g3_cp4_srt

0x89ff,	// (0x00042f39) bg_active_tab_pane_cp4_srt_ParamLimits

0x89ff,	// (0x00042f39) bg_active_tab_pane_cp4_srt

0xb06c,	// (0x000455a6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb06c,	// (0x000455a6) tabs_2_long_active_pane_srt_t1

0xb05a,	// (0x00045594) bg_active_tab_pane_g1_cp4_srt

0x90e3,	// (0x0004361d) bg_active_tab_pane_g2_cp4_srt

0xb063,	// (0x0004559d) bg_active_tab_pane_g3_cp4_srt

0x8247,	// (0x00042781) tabs_3_long_active_pane_srt_ParamLimits

0x8247,	// (0x00042781) tabs_3_long_active_pane_srt

0x8247,	// (0x00042781) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8247,	// (0x00042781) tabs_3_long_passive_pane_cp_srt

0x8247,	// (0x00042781) tabs_3_long_passive_pane_srt_ParamLimits

0x8247,	// (0x00042781) tabs_3_long_passive_pane_srt

0x8a20,	// (0x00042f5a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a20,	// (0x00042f5a) bg_passive_tab_pane_cp5_srt

0x916d,	// (0x000436a7) bg_passive_tab_pane_g1_cp5_srt

0x90e3,	// (0x0004361d) bg_passive_tab_pane_g2_cp5_srt

0x9176,	// (0x000436b0) bg_passive_tab_pane_g3_cp5_srt

0x89ff,	// (0x00042f39) bg_active_tab_pane_cp5_srt_ParamLimits

0x89ff,	// (0x00042f39) bg_active_tab_pane_cp5_srt

0xb048,	// (0x00045582) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb048,	// (0x00045582) tabs_3_long_active_pane_srt_t1

0x916d,	// (0x000436a7) bg_active_tab_pane_g1_cp5_srt

0x90e3,	// (0x0004361d) bg_active_tab_pane_g2_cp5_srt

0x9176,	// (0x000436b0) bg_active_tab_pane_g3_cp5_srt

0xb03a,	// (0x00045574) navi_text_pane_srt_t1

0xb032,	// (0x0004556c) navi_icon_pane_srt_g1

0x9654,	// (0x00043b8e) midp_editing_number_pane_srt

0x949e,	// (0x000439d8) midp_ticker_pane_srt

0x965c,	// (0x00043b96) midp_ticker_pane_srt_g1

0x9664,	// (0x00043b9e) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00049cb1) midp_ticker_pane_srt_g

0x966c,	// (0x00043ba6) midp_ticker_pane_srt_t1

0xb023,	// (0x0004555d) midp_editing_number_pane_t1_copy1

0x8a20,	// (0x00042f5a) listscroll_midp_pane

0x8a20,	// (0x00042f5a) midp_form_pane

0x950c,	// (0x00043a46) midp_info_popup_window_ParamLimits

0x950c,	// (0x00043a46) midp_info_popup_window

0x88ea,	// (0x00042e24) bg_popup_sub_pane_cp50_ParamLimits

0x88ea,	// (0x00042e24) bg_popup_sub_pane_cp50

0xa146,	// (0x00044680) listscroll_midp_info_pane_ParamLimits

0xa146,	// (0x00044680) listscroll_midp_info_pane

0xa12e,	// (0x00044668) listscroll_form_midp_pane_ParamLimits

0xa12e,	// (0x00044668) listscroll_form_midp_pane

0xa13a,	// (0x00044674) scroll_bar_cp050

0xa10e,	// (0x00044648) list_midp_pane

0xbd2e,	// (0x00046268) signal_pane_g2_cp

0xa048,	// (0x00044582) listscroll_midp_info_pane_t1_ParamLimits

0xa048,	// (0x00044582) listscroll_midp_info_pane_t1

0xa060,	// (0x0004459a) listscroll_midp_info_pane_t2_ParamLimits

0xa060,	// (0x0004459a) listscroll_midp_info_pane_t2

0xa09e,	// (0x000445d8) listscroll_midp_info_pane_t3_ParamLimits

0xa09e,	// (0x000445d8) listscroll_midp_info_pane_t3

0xa0d8,	// (0x00044612) listscroll_midp_info_pane_t4_ParamLimits

0xa0d8,	// (0x00044612) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00049d64) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00049d64) listscroll_midp_info_pane_t

0x89ac,	// (0x00042ee6) scroll_pane_cp21

0x9fea,	// (0x00044524) form_midp_field_choice_group_pane

0x9ff3,	// (0x0004452d) form_midp_field_text_pane

0xa02e,	// (0x00044568) form_midp_field_time_pane

0xa036,	// (0x00044570) form_midp_gauge_slider_pane

0xa03f,	// (0x00044579) form_midp_gauge_wait_pane

0x7eec,	// (0x00042426) form_midp_image_pane

0x5246,	// (0x0003f780) list_single_midp_pane_ParamLimits

0x5246,	// (0x0003f780) list_single_midp_pane

0x9f9e,	// (0x000444d8) form_midp_field_text_pane_t1

0x9d56,	// (0x00044290) input_focus_pane_cp050

0x9fd9,	// (0x00044513) list_midp_form_text_pane

0x9f6d,	// (0x000444a7) form_midp_field_choice_group_pane_t1

0x9f7b,	// (0x000444b5) input_focus_pane_cp051

0x9f8f,	// (0x000444c9) list_midp_choice_pane

0x7eec,	// (0x00042426) status_idle_pane

0x9f51,	// (0x0004448b) form_midp_field_time_pane_t1

0x7ee2,	// (0x0004241c) wait_anim_pane_g2_copy1

0x9f5f,	// (0x00044499) form_midp_field_time_pane_t2

0x0001,

0x95bc,	// (0x00043af6) aid_navinavi_width_2_pane

0xf825,	// (0x00049d5f) form_midp_field_time_pane_t

0x7eec,	// (0x00042426) input_focus_pane_cp052

0x7eec,	// (0x00042426) bg_input_focus_pane_cp040

0x9f11,	// (0x0004444b) form_midp_gauge_slider_pane_t1

0x9f1f,	// (0x00044459) form_midp_gauge_slider_pane_t2

0x9f2d,	// (0x00044467) form_midp_gauge_slider_pane_t3

0x9f3b,	// (0x00044475) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00049d56) form_midp_gauge_slider_pane_t

0x9f49,	// (0x00044483) form_midp_slider_pane

0x7fcc,	// (0x00042506) bg_input_focus_pane_cp041_ParamLimits

0x7fcc,	// (0x00042506) bg_input_focus_pane_cp041

0x9ede,	// (0x00044418) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ede,	// (0x00044418) form_midp_gauge_wait_pane_t1

0x9ef0,	// (0x0004442a) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ef0,	// (0x0004442a) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00049d51) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00049d51) form_midp_gauge_wait_pane_t

0x9f02,	// (0x0004443c) form_midp_wait_pane_ParamLimits

0x9f02,	// (0x0004443c) form_midp_wait_pane

0x9ea8,	// (0x000443e2) form_midp_image_pane_g1

0x9eb1,	// (0x000443eb) form_midp_image_pane_t1

0x9ec0,	// (0x000443fa) form_midp_image_pane_t2

0x9ecf,	// (0x00044409) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00049d4a) form_midp_image_pane_t

0x9e9f,	// (0x000443d9) list_single_midp_pane_g1

0x5237,	// (0x0003f771) list_single_midp_pane_t1

0x9e70,	// (0x000443aa) list_midp_form_item_pane_ParamLimits

0x9e70,	// (0x000443aa) list_midp_form_item_pane

0x9564,	// (0x00043a9e) list_midp_form_item_pane_t1

0x9573,	// (0x00043aad) midp_ticker_pane_g1

0x957f,	// (0x00043ab9) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00049c97) midp_ticker_pane_g

0x958b,	// (0x00043ac5) midp_ticker_pane_t1

0xb266,	// (0x000457a0) midp_editing_number_pane_t1

0xb244,	// (0x0004577e) midp_editing_number_pane

0xb253,	// (0x0004578d) midp_ticker_pane

0xb013,	// (0x0004554d) ai_message_heading_pane

0x7eec,	// (0x00042426) bg_popup_window_pane_cp14

0xb01b,	// (0x00045555) listscroll_ai_message_pane

0xaf9d,	// (0x000454d7) ai_message_heading_pane_g1_ParamLimits

0xaf9d,	// (0x000454d7) ai_message_heading_pane_g1

0xafa9,	// (0x000454e3) ai_message_heading_pane_g2_ParamLimits

0xafa9,	// (0x000454e3) ai_message_heading_pane_g2

0xafb5,	// (0x000454ef) ai_message_heading_pane_g3_ParamLimits

0xafb5,	// (0x000454ef) ai_message_heading_pane_g3

0xafc1,	// (0x000454fb) ai_message_heading_pane_g4_ParamLimits

0xafc1,	// (0x000454fb) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00049e8b) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00049e8b) ai_message_heading_pane_g

0xafcd,	// (0x00045507) ai_message_heading_pane_t1_ParamLimits

0xafcd,	// (0x00045507) ai_message_heading_pane_t1

0xafe7,	// (0x00045521) ai_message_heading_pane_t2_ParamLimits

0xafe7,	// (0x00045521) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00049e94) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00049e94) ai_message_heading_pane_t

0xaff9,	// (0x00045533) bg_popup_heading_pane_cp1_ParamLimits

0xaff9,	// (0x00045533) bg_popup_heading_pane_cp1

0xaf8b,	// (0x000454c5) list_ai_message_pane_ParamLimits

0xaf8b,	// (0x000454c5) list_ai_message_pane

0x89ac,	// (0x00042ee6) scroll_pane_cp10

0xaf27,	// (0x00045461) list_ai_message_pane_g1

0xaf2f,	// (0x00045469) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00049e68) list_ai_message_pane_g

0xaf37,	// (0x00045471) list_ai_message_pane_t1_ParamLimits

0xaf37,	// (0x00045471) list_ai_message_pane_t1

0xaf4c,	// (0x00045486) list_ai_message_pane_t2_ParamLimits

0xaf4c,	// (0x00045486) list_ai_message_pane_t2

0xaf61,	// (0x0004549b) list_ai_message_pane_t3_ParamLimits

0xaf61,	// (0x0004549b) list_ai_message_pane_t3

0xaf76,	// (0x000454b0) list_ai_message_pane_t4_ParamLimits

0xaf76,	// (0x000454b0) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00049e6d) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00049e6d) list_ai_message_pane_t

0xaf11,	// (0x0004544b) cell_ai_soft_ind_pane_ParamLimits

0xaf11,	// (0x0004544b) cell_ai_soft_ind_pane

0x959d,	// (0x00043ad7) cell_ai_soft_ind_pane_g1_ParamLimits

0x959d,	// (0x00043ad7) cell_ai_soft_ind_pane_g1

0x7eec,	// (0x00042426) grid_highlight_cp1

0x95aa,	// (0x00043ae4) text_secondary_cp56_ParamLimits

0x95aa,	// (0x00043ae4) text_secondary_cp56

0xaee6,	// (0x00045420) example_general_pane_ParamLimits

0xaee6,	// (0x00045420) example_general_pane

0xaef2,	// (0x0004542c) example_parent_pane_g1_ParamLimits

0xaef2,	// (0x0004542c) example_parent_pane_g1

0xaefe,	// (0x00045438) example_parent_pane_t1_ParamLimits

0xaefe,	// (0x00045438) example_parent_pane_t1

0x66e9,	// (0x00040c23) popup_preview_text_window_ParamLimits

0x66e9,	// (0x00040c23) popup_preview_text_window

0x93cf,	// (0x00043909) list_single_pane_cp2_g4

0x82f1,	// (0x0004282b) bg_popup_preview_window_pane_ParamLimits

0x82f1,	// (0x0004282b) bg_popup_preview_window_pane

0xac33,	// (0x0004516d) popup_preview_text_window_t1_ParamLimits

0xac33,	// (0x0004516d) popup_preview_text_window_t1

0xac51,	// (0x0004518b) popup_preview_text_window_t2_ParamLimits

0xac51,	// (0x0004518b) popup_preview_text_window_t2

0xac9a,	// (0x000451d4) popup_preview_text_window_t3_ParamLimits

0xac9a,	// (0x000451d4) popup_preview_text_window_t3

0xacdf,	// (0x00045219) popup_preview_text_window_t4_ParamLimits

0xacdf,	// (0x00045219) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00049e3c) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00049e3c) popup_preview_text_window_t

0xad5d,	// (0x00045297) scroll_pane_cp11

0x9ce2,	// (0x0004421c) bg_popup_preview_window_pane_g1

0xabf3,	// (0x0004512d) bg_popup_preview_window_pane_g2

0xabfb,	// (0x00045135) bg_popup_preview_window_pane_g3

0xac03,	// (0x0004513d) bg_popup_preview_window_pane_g4

0xac0b,	// (0x00045145) bg_popup_preview_window_pane_g5

0xac13,	// (0x0004514d) bg_popup_preview_window_pane_g6

0xac1b,	// (0x00045155) bg_popup_preview_window_pane_g7

0xac23,	// (0x0004515d) bg_popup_preview_window_pane_g8

0x5856,	// (0x0003fd90) aid_popup_width_pane

0x66c7,	// (0x00040c01) popup_midp_note_alarm_window_ParamLimits

0x66c7,	// (0x00040c01) popup_midp_note_alarm_window

0x883e,	// (0x00042d78) data_form_pane_ParamLimits

0x4ee9,	// (0x0003f423) form_field_data_pane_g1

0x4ef3,	// (0x0003f42d) form_field_data_pane_t1_ParamLimits

0x884a,	// (0x00042d84) input_focus_pane_ParamLimits

0x4f0d,	// (0x0003f447) data_form_wide_pane_ParamLimits

0x4f1e,	// (0x0003f458) form_field_data_wide_pane_g1

0x4f2a,	// (0x0003f464) form_field_data_wide_pane_t1_ParamLimits

0x8597,	// (0x00042ad1) input_focus_pane_cp6_ParamLimits

0x8957,	// (0x00042e91) input_popup_find_pane_g1_ParamLimits

0x8957,	// (0x00042e91) input_popup_find_pane_g1

0x5e68,	// (0x000403a2) aid_navi_side_left_pane

0x5e7d,	// (0x000403b7) aid_navi_side_right_pane

0xa60c,	// (0x00044b46) bg_popup_window_pane_cp30_ParamLimits

0xa60c,	// (0x00044b46) bg_popup_window_pane_cp30

0xa686,	// (0x00044bc0) popup_midp_note_alarm_window_g1_ParamLimits

0xa686,	// (0x00044bc0) popup_midp_note_alarm_window_g1

0xa6b6,	// (0x00044bf0) popup_midp_note_alarm_window_t1_ParamLimits

0xa6b6,	// (0x00044bf0) popup_midp_note_alarm_window_t1

0xa757,	// (0x00044c91) popup_midp_note_alarm_window_t2_ParamLimits

0xa757,	// (0x00044c91) popup_midp_note_alarm_window_t2

0xa805,	// (0x00044d3f) popup_midp_note_alarm_window_t3_ParamLimits

0xa805,	// (0x00044d3f) popup_midp_note_alarm_window_t3

0xa837,	// (0x00044d71) popup_midp_note_alarm_window_t4_ParamLimits

0xa837,	// (0x00044d71) popup_midp_note_alarm_window_t4

0xa85d,	// (0x00044d97) popup_midp_note_alarm_window_t5_ParamLimits

0xa85d,	// (0x00044d97) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00049dd9) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00049dd9) popup_midp_note_alarm_window_t

0xa909,	// (0x00044e43) wait_bar_pane_cp1_ParamLimits

0xa909,	// (0x00044e43) wait_bar_pane_cp1

0x7eec,	// (0x00042426) wait_anim_pane_copy1

0x7eec,	// (0x00042426) wait_border_pane_copy1

0xa2ea,	// (0x00044824) wait_border_pane_g1_copy1

0x4f44,	// (0x0003f47e) form_field_popup_pane_g1

0x4f4c,	// (0x0003f486) form_field_popup_pane_t1_ParamLimits

0x884a,	// (0x00042d84) input_focus_pane_cp7_ParamLimits

0x886c,	// (0x00042da6) list_form_pane_ParamLimits

0x4f66,	// (0x0003f4a0) form_field_popup_wide_pane_g1

0x4f6e,	// (0x0003f4a8) form_field_popup_wide_pane_t1_ParamLimits

0x884a,	// (0x00042d84) input_focus_pane_cp8_ParamLimits

0x8878,	// (0x00042db2) list_form_wide_pane_ParamLimits

0xb38f,	// (0x000458c9) aid_size_cell_graphic_pane

0x4ffa,	// (0x0003f534) data_form_pane_t1_ParamLimits

0x528a,	// (0x0003f7c4) data_form_wide_pane_t1_ParamLimits

0x98ab,	// (0x00043de5) bg_status_flat_pane

0x7f2c,	// (0x00042466) title_pane_t1_ParamLimits

0x7f94,	// (0x000424ce) title_pane_t2_ParamLimits

0x7fba,	// (0x000424f4) title_pane_t3_ParamLimits

0xf557,	// (0x00049a91) title_pane_t_ParamLimits

0x8e27,	// (0x00043361) level_1_signal_ParamLimits

0x8e34,	// (0x0004336e) level_2_signal_ParamLimits

0x8e41,	// (0x0004337b) level_3_signal_ParamLimits

0x8e4e,	// (0x00043388) level_4_signal_ParamLimits

0x8e5b,	// (0x00043395) level_5_signal_ParamLimits

0x8e68,	// (0x000433a2) level_6_signal_ParamLimits

0x8e75,	// (0x000433af) level_7_signal_ParamLimits

0x8e27,	// (0x00043361) level_1_battery_ParamLimits

0x8e34,	// (0x0004336e) level_2_battery_ParamLimits

0x8e41,	// (0x0004337b) level_3_battery_ParamLimits

0x8e4e,	// (0x00043388) level_4_battery_ParamLimits

0x8e5b,	// (0x00043395) level_5_battery_ParamLimits

0x8e68,	// (0x000433a2) level_6_battery_ParamLimits

0x8e75,	// (0x000433af) level_7_battery_ParamLimits

0xa511,	// (0x00044a4b) bg_status_flat_pane_g1

0xa519,	// (0x00044a53) bg_status_flat_pane_g2

0xa521,	// (0x00044a5b) bg_status_flat_pane_g3

0xa529,	// (0x00044a63) bg_status_flat_pane_g4

0xa531,	// (0x00044a6b) bg_status_flat_pane_g5

0xa539,	// (0x00044a73) bg_status_flat_pane_g6

0xa541,	// (0x00044a7b) bg_status_flat_pane_g7

0x7fe2,	// (0x0004251c) tabs_3_active_pane_t1_ParamLimits

0x7fe2,	// (0x0004251c) tabs_3_passive_pane_t1_ParamLimits

0x7ffc,	// (0x00042536) tabs_4_active_pane_t1_ParamLimits

0x7ffc,	// (0x00042536) tabs_4_1_passive_pane_t1_ParamLimits

0x89ed,	// (0x00042f27) tabs_2_active_pane_t1_ParamLimits

0x89ed,	// (0x00042f27) tabs_2_passive_pane_t1_ParamLimits

0x89ff,	// (0x00042f39) bg_active_tab_pane_cp4_ParamLimits

0x8a0d,	// (0x00042f47) tabs_2_long_active_pane_t1_ParamLimits

0x8a20,	// (0x00042f5a) bg_passive_tab_pane_cp4_ParamLimits

0x6986,	// (0x00040ec0) list_single_midp_graphic_pane_t1_ParamLimits

0x89ff,	// (0x00042f39) bg_active_tab_pane_cp5_ParamLimits

0x8a2c,	// (0x00042f66) tabs_3_long_active_pane_t1_ParamLimits

0x8a20,	// (0x00042f5a) bg_passive_tab_pane_cp5_ParamLimits

0x6986,	// (0x00040ec0) list_single_midp_graphic_pane_t1

0x98ab,	// (0x00043de5) bg_status_flat_pane_ParamLimits

0x996e,	// (0x00043ea8) indicator_pane_cp2_ParamLimits

0x996e,	// (0x00043ea8) indicator_pane_cp2

0x9aa5,	// (0x00043fdf) navi_pane_srt_ParamLimits

0x9aa5,	// (0x00043fdf) navi_pane_srt

0x9ac9,	// (0x00044003) popup_clock_digital_analogue_window_cp1

0x80a9,	// (0x000425e3) indicator_pane_t1

0x949e,	// (0x000439d8) copy_highlight_pane

0x949e,	// (0x000439d8) cursor_graphics_pane

0x949e,	// (0x000439d8) graphic_within_text_pane

0x949e,	// (0x000439d8) link_highlight_pane

0xad20,	// (0x0004525a) popup_preview_text_window_t5_ParamLimits

0xad20,	// (0x0004525a) popup_preview_text_window_t5

0x95c4,	// (0x00043afe) cursor_digital_pane

0x95c4,	// (0x00043afe) cursor_primary_pane

0x95d5,	// (0x00043b0f) cursor_primary_small_pane

0x95dd,	// (0x00043b17) cursor_secondary_pane

0x95e5,	// (0x00043b1f) cursor_title_pane

0x95c4,	// (0x00043afe) link_highlight_digital_pane

0x95cc,	// (0x00043b06) link_highlight_primary_pane

0x95d5,	// (0x00043b0f) link_highlight_primary_small_pane

0x95dd,	// (0x00043b17) link_highlight_secondary_pane

0x95e5,	// (0x00043b1f) link_highlight_title_pane

0x95c4,	// (0x00043afe) copy_highlight_digital_pane

0x95c4,	// (0x00043afe) copy_highlight_primary_pane

0x95d5,	// (0x00043b0f) copy_highlight_primary_small_pane

0x95dd,	// (0x00043b17) copy_highlight_secondary_pane

0x95e5,	// (0x00043b1f) copy_highlight_title_pane

0x95dd,	// (0x00043b17) graphic_text_digital_pane

0xa5af,	// (0x00044ae9) graphic_text_primary_pane

0xa5b8,	// (0x00044af2) graphic_text_primary_small_pane

0x95d5,	// (0x00043b0f) graphic_text_secondary_pane

0x95c4,	// (0x00043afe) graphic_text_title_pane

0x95ed,	// (0x00043b27) cursor_primary_pane_g1

0xa5a1,	// (0x00044adb) cursor_text_primary_t1

0xa589,	// (0x00044ac3) cursor_primary_small_pane_g1

0xa593,	// (0x00044acd) cursor_text_primary_small_t1

0xa571,	// (0x00044aab) cursor_primary_small_pane_g1_copy1

0xa57b,	// (0x00044ab5) cursor_text_primary_small_t1_copy1

0xa559,	// (0x00044a93) cursor_text_title_t1

0xa567,	// (0x00044aa1) cursor_title_pane_g1

0x95ed,	// (0x00043b27) cursor_digital_pane_g1

0x95f7,	// (0x00043b31) cursor_text_digital_t1

0xa4fa,	// (0x00044a34) link_highlight_primary_pane_g1

0xa502,	// (0x00044a3c) link_highlight_primary_pane_t1

0x9605,	// (0x00043b3f) link_highlight_primary_small_pane_g1

0x960d,	// (0x00043b47) link_highlight_primary_small_pane_t1

0x9605,	// (0x00043b3f) link_highlight_secondary_pane_g1

0x961c,	// (0x00043b56) link_highlight_secondary_pane_t1

0xa46e,	// (0x000449a8) link_highlight_title_pane_g1

0xa476,	// (0x000449b0) link_highlight_title_pane_t1

0xa457,	// (0x00044991) link_highlight_digital_pane_g1

0xa45f,	// (0x00044999) link_highlight_digital_pane_t1

0xa32f,	// (0x00044869) copy_highlight_primary_pane_g1

0xa337,	// (0x00044871) copy_highlight_primary_pane_t1

0xa309,	// (0x00044843) copy_highlight_primary_small_pane_g1

0xa320,	// (0x0004485a) copy_highlight_primary_small_pane_t1

0x962b,	// (0x00043b65) copy_highlight_secondary_pane_g1

0x9633,	// (0x00043b6d) copy_highlight_secondary_pane_t1

0xa309,	// (0x00044843) copy_highlight_title_pane_g1

0xa311,	// (0x0004484b) copy_highlight_title_pane_t1

0xa32f,	// (0x00044869) copy_highlight_digital_pane_g1

0xb559,	// (0x00045a93) copy_highlight_digital_pane_t1

0xb4ad,	// (0x000459e7) graphic_text_primary_pane_g1

0xb53d,	// (0x00045a77) graphic_text_primary_pane_t1

0xb54b,	// (0x00045a85) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x00049f08) graphic_text_primary_pane_t

0xb519,	// (0x00045a53) graphic_text_primary_small_pane_g1

0xb521,	// (0x00045a5b) graphic_text_primary_small_pane_t1

0xb52f,	// (0x00045a69) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x00049f03) graphic_text_primary_small_pane_t

0xb4f5,	// (0x00045a2f) graphic_text_secondary_pane_g1

0xb4fd,	// (0x00045a37) graphic_text_secondary_pane_t1

0xb50b,	// (0x00045a45) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x00049efe) graphic_text_secondary_pane_t

0xb4d1,	// (0x00045a0b) graphic_text_title_pane_g1

0xb4d9,	// (0x00045a13) graphic_text_title_pane_t1

0xb4e7,	// (0x00045a21) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x00049ef9) graphic_text_title_pane_t

0xb4ad,	// (0x000459e7) graphic_text_digital_pane_g1

0xb4b5,	// (0x000459ef) graphic_text_digital_pane_t1

0xb4c3,	// (0x000459fd) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x00049ef4) graphic_text_digital_pane_t

0x7fcc,	// (0x00042506) navi_icon_pane_srt_ParamLimits

0x7fcc,	// (0x00042506) navi_icon_pane_srt

0x7eec,	// (0x00042426) navi_midp_pane_srt

0x7eec,	// (0x00042426) navi_navi_pane_srt

0x7fcc,	// (0x00042506) navi_text_pane_srt_ParamLimits

0x7fcc,	// (0x00042506) navi_text_pane_srt

0xb478,	// (0x000459b2) navi_navi_icon_text_pane_srt

0xb480,	// (0x000459ba) navi_navi_pane_srt_g1_ParamLimits

0xb480,	// (0x000459ba) navi_navi_pane_srt_g1

0xb492,	// (0x000459cc) navi_navi_pane_srt_g2_ParamLimits

0xb492,	// (0x000459cc) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x00049eef) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x00049eef) navi_navi_pane_srt_g

0xb4a4,	// (0x000459de) navi_navi_tabs_pane_srt

0xb478,	// (0x000459b2) navi_navi_text_pane_srt

0xb478,	// (0x000459b2) navi_navi_volume_pane_srt

0xb469,	// (0x000459a3) navi_navi_text_pane_srt_t1

0x6e0c,	// (0x00041346) navi_navi_volume_pane_srt_g1

0x6e14,	// (0x0004134e) volume_small_pane_srt_ParamLimits

0x6e14,	// (0x0004134e) volume_small_pane_srt

0x615b,	// (0x00040695) volume_small_pane_srt_g1_ParamLimits

0x615b,	// (0x00040695) volume_small_pane_srt_g1

0x616b,	// (0x000406a5) volume_small_pane_srt_g2_ParamLimits

0x616b,	// (0x000406a5) volume_small_pane_srt_g2

0x617c,	// (0x000406b6) volume_small_pane_srt_g3_ParamLimits

0x617c,	// (0x000406b6) volume_small_pane_srt_g3

0x618d,	// (0x000406c7) volume_small_pane_srt_g4_ParamLimits

0x618d,	// (0x000406c7) volume_small_pane_srt_g4

0x619e,	// (0x000406d8) volume_small_pane_srt_g5_ParamLimits

0x619e,	// (0x000406d8) volume_small_pane_srt_g5

0x61af,	// (0x000406e9) volume_small_pane_srt_g6_ParamLimits

0x61af,	// (0x000406e9) volume_small_pane_srt_g6

0x61c0,	// (0x000406fa) volume_small_pane_srt_g7_ParamLimits

0x61c0,	// (0x000406fa) volume_small_pane_srt_g7

0x61d1,	// (0x0004070b) volume_small_pane_srt_g8_ParamLimits

0x61d1,	// (0x0004070b) volume_small_pane_srt_g8

0x61e2,	// (0x0004071c) volume_small_pane_srt_g9_ParamLimits

0x61e2,	// (0x0004071c) volume_small_pane_srt_g9

0x61f3,	// (0x0004072d) volume_small_pane_srt_g10_ParamLimits

0x61f3,	// (0x0004072d) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00049c9c) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00049c9c) volume_small_pane_srt_g

0x839a,	// (0x000428d4) query_popup_data_pane_cp2

0xb44f,	// (0x00045989) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb44f,	// (0x00045989) navi_navi_icon_text_pane_srt_t1

0xa5af,	// (0x00044ae9) navi_tabs_2_long_pane_srt

0xa5af,	// (0x00044ae9) navi_tabs_2_pane_srt

0xa5af,	// (0x00044ae9) navi_tabs_3_long_pane_srt

0xa5af,	// (0x00044ae9) navi_tabs_3_pane_srt

0xa5af,	// (0x00044ae9) navi_tabs_4_pane_srt

0x6dec,	// (0x00041326) tabs_2_active_pane_srt_ParamLimits

0x6dec,	// (0x00041326) tabs_2_active_pane_srt

0x6dfc,	// (0x00041336) tabs_2_passive_pane_srt_ParamLimits

0x6dfc,	// (0x00041336) tabs_2_passive_pane_srt

0x97d8,	// (0x00043d12) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97d8,	// (0x00043d12) bg_passive_tab_pane_cp1_srt

0xb41b,	// (0x00045955) bg_passive_tab_pane_g1_cp1_srt

0x90e3,	// (0x0004361d) bg_passive_tab_pane_g2_cp1_srt

0xb424,	// (0x0004595e) bg_passive_tab_pane_g3_cp1_srt

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp1_srt_ParamLimits

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp1_srt

0xb42d,	// (0x00045967) tabs_2_active_pane_srt_g1

0xb435,	// (0x0004596f) tabs_2_active_pane_srt_t1_ParamLimits

0xb435,	// (0x0004596f) tabs_2_active_pane_srt_t1

0xb41b,	// (0x00045955) bg_active_tab_pane_g1_cp1_srt

0x90e3,	// (0x0004361d) bg_active_tab_pane_g2_cp1_srt

0xb424,	// (0x0004595e) bg_active_tab_pane_g3_cp1_srt

0x6db9,	// (0x000412f3) tabs_3_active_pane_srt_ParamLimits

0x6db9,	// (0x000412f3) tabs_3_active_pane_srt

0x6dca,	// (0x00041304) tabs_3_passive_pane_cp_srt_ParamLimits

0x6dca,	// (0x00041304) tabs_3_passive_pane_cp_srt

0x6ddb,	// (0x00041315) tabs_3_passive_pane_srt_ParamLimits

0x6ddb,	// (0x00041315) tabs_3_passive_pane_srt

0x97d8,	// (0x00043d12) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97d8,	// (0x00043d12) bg_passive_tab_pane_cp2_srt

0x9642,	// (0x00043b7c) bg_passive_tab_pane_g1_cp2_srt

0x90e3,	// (0x0004361d) bg_passive_tab_pane_g2_cp2_srt

0x964b,	// (0x00043b85) bg_passive_tab_pane_g3_cp2_srt

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp2_srt_ParamLimits

0x7fcc,	// (0x00042506) bg_active_tab_pane_cp2_srt

0xb401,	// (0x0004593b) tabs_3_active_pane_srt_g1

0xb409,	// (0x00045943) tabs_3_active_pane_srt_t1_ParamLimits

0xb409,	// (0x00045943) tabs_3_active_pane_srt_t1

0x9642,	// (0x00043b7c) bg_active_tab_pane_g1_cp2_srt

0x90e3,	// (0x0004361d) bg_active_tab_pane_g2_cp2_srt

0x964b,	// (0x00043b85) bg_active_tab_pane_g3_cp2_srt

0x6d71,	// (0x000412ab) tabs_4_active_pane_srt_ParamLimits

0x6d71,	// (0x000412ab) tabs_4_active_pane_srt

0x6d83,	// (0x000412bd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d83,	// (0x000412bd) tabs_4_passive_pane_cp2_srt

0x6356,	// (0x00040890) aid_size_cell_toolbar

0x8a20,	// (0x00042f5a) main_idle_act_pane_ParamLimits

0x64fb,	// (0x00040a35) popup_large_graphic_colour_window_ParamLimits

0x6860,	// (0x00040d9a) popup_toolbar_window_ParamLimits

0x6860,	// (0x00040d9a) popup_toolbar_window

0xb275,	// (0x000457af) list_single_graphic_2heading_pane_ParamLimits

0xb275,	// (0x000457af) list_single_graphic_2heading_pane

0x8bd9,	// (0x00043113) aid_size_cell_apps_grid_lsc_pane

0x8beb,	// (0x00043125) aid_size_cell_apps_grid_prt_pane

0x97d8,	// (0x00043d12) bg_wml_button_pane_cp1_ParamLimits

0x97d8,	// (0x00043d12) bg_wml_button_pane_cp1

0x9f9e,	// (0x000444d8) form_midp_field_text_pane_t1_ParamLimits

0x9d56,	// (0x00044290) input_focus_pane_cp050_ParamLimits

0x9fd9,	// (0x00044513) list_midp_form_text_pane_ParamLimits

0x9f7b,	// (0x000444b5) input_focus_pane_cp051_ParamLimits

0x9f8f,	// (0x000444c9) list_midp_choice_pane_ParamLimits

0x9e0c,	// (0x00044346) list_single_2graphic_pane_cp3_ParamLimits

0x9e0c,	// (0x00044346) list_single_2graphic_pane_cp3

0x9e37,	// (0x00044371) list_single_midp_graphic_pane_ParamLimits

0x9e37,	// (0x00044371) list_single_midp_graphic_pane

0x5113,	// (0x0003f64d) list_single_graphic_2heading_pane_g1_ParamLimits

0x5113,	// (0x0003f64d) list_single_graphic_2heading_pane_g1

0x511f,	// (0x0003f659) list_single_graphic_2heading_pane_g4_ParamLimits

0x511f,	// (0x0003f659) list_single_graphic_2heading_pane_g4

0x512b,	// (0x0003f665) list_single_graphic_2heading_pane_g5_ParamLimits

0x512b,	// (0x0003f665) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00049cef) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00049cef) list_single_graphic_2heading_pane_g

0x5137,	// (0x0003f671) list_single_graphic_2heading_pane_t1_ParamLimits

0x5137,	// (0x0003f671) list_single_graphic_2heading_pane_t1

0x514b,	// (0x0003f685) list_single_graphic_2heading_pane_t2_ParamLimits

0x514b,	// (0x0003f685) list_single_graphic_2heading_pane_t2

0x5165,	// (0x0003f69f) list_single_graphic_2heading_pane_t3_ParamLimits

0x5165,	// (0x0003f69f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00049cf6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00049cf6) list_single_graphic_2heading_pane_t

0x9c20,	// (0x0004415a) bg_popup_sub_pane_cp2

0x9c4a,	// (0x00044184) grid_toobar_pane

0x690b,	// (0x00040e45) cell_toolbar_pane_ParamLimits

0x690b,	// (0x00040e45) cell_toolbar_pane

0x9c86,	// (0x000441c0) cell_toolbar_pane_g1_ParamLimits

0x9c86,	// (0x000441c0) cell_toolbar_pane_g1

0x9c9a,	// (0x000441d4) cell_toolbar_pane_g2_ParamLimits

0x9c9a,	// (0x000441d4) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00049d04) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00049d04) cell_toolbar_pane_g

0x9cbc,	// (0x000441f6) grid_highlight_pane_cp2_ParamLimits

0x9cbc,	// (0x000441f6) grid_highlight_pane_cp2

0x9cd6,	// (0x00044210) toolbar_button_pane

0x9ce2,	// (0x0004421c) toolbar_button_pane_g1

0x9cea,	// (0x00044224) toolbar_button_pane_g2

0x9cf2,	// (0x0004422c) toolbar_button_pane_g3

0x9cfa,	// (0x00044234) toolbar_button_pane_g4

0x9d02,	// (0x0004423c) toolbar_button_pane_g5

0x9d0a,	// (0x00044244) toolbar_button_pane_g6

0x9d12,	// (0x0004424c) toolbar_button_pane_g7

0x9d1a,	// (0x00044254) toolbar_button_pane_g8

0x9d22,	// (0x0004425c) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00049d09) toolbar_button_pane_g

0x6943,	// (0x00040e7d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6943,	// (0x00040e7d) list_single_2graphic_pane_g1_cp3

0x694f,	// (0x00040e89) list_single_2graphic_pane_g2_cp3_ParamLimits

0x694f,	// (0x00040e89) list_single_2graphic_pane_g2_cp3

0x92ce,	// (0x00043808) list_single_2graphic_pane_g3_cp3

0x6960,	// (0x00040e9a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6960,	// (0x00040e9a) list_single_2graphic_pane_g4_cp3

0x696c,	// (0x00040ea6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x696c,	// (0x00040ea6) list_single_2graphic_pane_t1_cp3

0x92c2,	// (0x000437fc) list_single_midp_graphic_pane_g2_ParamLimits

0x92c2,	// (0x000437fc) list_single_midp_graphic_pane_g2

0x50fb,	// (0x0003f635) aid_zoom_text_primary

0x5103,	// (0x0003f63d) aid_zoom_text_secondary

0x96fc,	// (0x00043c36) status_small_pane_g7_ParamLimits

0x96fc,	// (0x00043c36) status_small_pane_g7

0x971f,	// (0x00043c59) status_small_pane_t1_ParamLimits

0x7f03,	// (0x0004243d) title_pane_g2

0x0003,

0xf54e,	// (0x00049a88) title_pane_g

0x843e,	// (0x00042978) aid_size_cell_colour_1_pane_ParamLimits

0x843e,	// (0x00042978) aid_size_cell_colour_1_pane

0x8452,	// (0x0004298c) aid_size_cell_colour_2_pane_ParamLimits

0x8452,	// (0x0004298c) aid_size_cell_colour_2_pane

0x8466,	// (0x000429a0) aid_size_cell_colour_3_pane_ParamLimits

0x8466,	// (0x000429a0) aid_size_cell_colour_3_pane

0x847a,	// (0x000429b4) aid_size_cell_colour_4_pane_ParamLimits

0x847a,	// (0x000429b4) aid_size_cell_colour_4_pane

0x5da4,	// (0x000402de) title_pane_stacon_g1_ParamLimits

0x5da4,	// (0x000402de) title_pane_stacon_g1

0xa38e,	// (0x000448c8) popup_note_wait_window_g3_ParamLimits

0xa38e,	// (0x000448c8) popup_note_wait_window_g3

0xa404,	// (0x0004493e) popup_note_wait_window_t5_ParamLimits

0xa404,	// (0x0004493e) popup_note_wait_window_t5

0x7eec,	// (0x00042426) main_feb_china_hwr_fs_writing_pane

0x63e4,	// (0x0004091e) popup_feb_china_hwr_fs_window_ParamLimits

0x63e4,	// (0x0004091e) popup_feb_china_hwr_fs_window

0x699c,	// (0x00040ed6) aid_size_cell_hwr_fs_ParamLimits

0x699c,	// (0x00040ed6) aid_size_cell_hwr_fs

0x9d56,	// (0x00044290) bg_popup_sub_pane_cp3_ParamLimits

0x9d56,	// (0x00044290) bg_popup_sub_pane_cp3

0x69b1,	// (0x00040eeb) grid_hwr_fs_pane_ParamLimits

0x69b1,	// (0x00040eeb) grid_hwr_fs_pane

0x69c9,	// (0x00040f03) linegrid_hwr_fs_pane_ParamLimits

0x69c9,	// (0x00040f03) linegrid_hwr_fs_pane

0x69d9,	// (0x00040f13) cell_hwr_fs_pane_ParamLimits

0x69d9,	// (0x00040f13) cell_hwr_fs_pane

0x9d62,	// (0x0004429c) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d62,	// (0x0004429c) linegrid_hwr_fs_pane_g1

0x9d6e,	// (0x000442a8) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d6e,	// (0x000442a8) linegrid_hwr_fs_pane_g2

0x9d80,	// (0x000442ba) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d80,	// (0x000442ba) linegrid_hwr_fs_pane_g3

0x69fb,	// (0x00040f35) linegrid_hwr_fs_pane_g4_ParamLimits

0x69fb,	// (0x00040f35) linegrid_hwr_fs_pane_g4

0x6a15,	// (0x00040f4f) linegrid_hwr_fs_pane_g5_ParamLimits

0x6a15,	// (0x00040f4f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00049d2f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00049d2f) linegrid_hwr_fs_pane_g

0x9d8c,	// (0x000442c6) cell_hwr_fs_pane_g1_ParamLimits

0x9d8c,	// (0x000442c6) cell_hwr_fs_pane_g1

0x9b57,	// (0x00044091) cell_hwr_fs_pane_g2_ParamLimits

0x9b57,	// (0x00044091) cell_hwr_fs_pane_g2

0x9da2,	// (0x000442dc) cell_hwr_fs_pane_g3_ParamLimits

0x9da2,	// (0x000442dc) cell_hwr_fs_pane_g3

0x9daf,	// (0x000442e9) cell_hwr_fs_pane_g4_ParamLimits

0x9daf,	// (0x000442e9) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00049d3a) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00049d3a) cell_hwr_fs_pane_g

0x6a2b,	// (0x00040f65) cell_hwr_fs_pane_t1

0x7eec,	// (0x00042426) grid_highlight_pane_cp6

0x7eec,	// (0x00042426) main_idle_act2_pane

0x8993,	// (0x00042ecd) aid_inside_area_popup_secondary

0xaa43,	// (0x00044f7d) aid_inside_area_window_primary_ParamLimits

0xaa43,	// (0x00044f7d) aid_inside_area_window_primary

0xb568,	// (0x00045aa2) ai2_news_ticker_pane

0xb570,	// (0x00045aaa) aid_size_cell_ai1_link_ParamLimits

0xb570,	// (0x00045aaa) aid_size_cell_ai1_link

0xb58a,	// (0x00045ac4) popup_ai2_data_window_ParamLimits

0xb58a,	// (0x00045ac4) popup_ai2_data_window

0xb59e,	// (0x00045ad8) popup_ai2_link_window_ParamLimits

0xb59e,	// (0x00045ad8) popup_ai2_link_window

0x9d56,	// (0x00044290) bg_popup_sub_pane_cp4_ParamLimits

0x9d56,	// (0x00044290) bg_popup_sub_pane_cp4

0xb5b2,	// (0x00045aec) grid_ai2_link_pane_ParamLimits

0xb5b2,	// (0x00045aec) grid_ai2_link_pane

0xb5c9,	// (0x00045b03) popup_ai2_link_window_g1_ParamLimits

0xb5c9,	// (0x00045b03) popup_ai2_link_window_g1

0xb5d5,	// (0x00045b0f) popup_ai2_link_window_g2_ParamLimits

0xb5d5,	// (0x00045b0f) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x00049f0d) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x00049f0d) popup_ai2_link_window_g

0xb5e4,	// (0x00045b1e) ai2_mp_button_pane

0xb5ec,	// (0x00045b26) ai2_mp_volume_pane

0x9f7b,	// (0x000444b5) bg_popup_sub_pane_cp5_ParamLimits

0x9f7b,	// (0x000444b5) bg_popup_sub_pane_cp5

0xb5f4,	// (0x00045b2e) heading_ai2_gene_pane_ParamLimits

0xb5f4,	// (0x00045b2e) heading_ai2_gene_pane

0xb600,	// (0x00045b3a) list_ai2_gene_pane_ParamLimits

0xb600,	// (0x00045b3a) list_ai2_gene_pane

0xb648,	// (0x00045b82) cell_ai2_link_pane_ParamLimits

0xb648,	// (0x00045b82) cell_ai2_link_pane

0xb65e,	// (0x00045b98) cell_ai2_link_pane_g1

0x7eec,	// (0x00042426) grid_highlight_pane_cp7

0x6e29,	// (0x00041363) ai2_mp_volume_pane_g1

0xb72f,	// (0x00045c69) ai2_mp_volume_pane_g2

0xb6a4,	// (0x00045bde) list_ai2_gene_pane_t1

0xb737,	// (0x00045c71) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00049f26) ai2_mp_volume_pane_g

0x6e31,	// (0x0004136b) volume_small_pane_cp3

0xb73f,	// (0x00045c79) aid_size_cell_ai2_button

0xb747,	// (0x00045c81) grid_ai2_button_pane

0xb750,	// (0x00045c8a) cell_ai2_button_pane_ParamLimits

0xb750,	// (0x00045c8a) cell_ai2_button_pane

0x7ee2,	// (0x0004241c) cell_ai2_button_pane_g1

0x7eec,	// (0x00042426) grid_highlight_pane_cp8

0xb6ef,	// (0x00045c29) ai2_gene_pane_t1_ParamLimits

0xb6ef,	// (0x00045c29) ai2_gene_pane_t1

0x634c,	// (0x00040886) aid_height_parent_landscape

0xb0b4,	// (0x000455ee) aid_height_set_list

0xb0c5,	// (0x000455ff) aid_size_parent

0xb38f,	// (0x000458c9) aid_size_cell_graphic_pane_ParamLimits

0xb610,	// (0x00045b4a) popup_ai2_data_window_g1_ParamLimits

0xb610,	// (0x00045b4a) popup_ai2_data_window_g1

0xb61c,	// (0x00045b56) ai2_news_ticker_pane_g1

0xb624,	// (0x00045b5e) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x00049f12) ai2_news_ticker_pane_g

0xb62c,	// (0x00045b66) ai2_news_ticker_pane_t1

0xb63a,	// (0x00045b74) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x00049f17) ai2_news_ticker_pane_t

0xb667,	// (0x00045ba1) heading_ai2_gene_pane_g1

0xb66f,	// (0x00045ba9) heading_ai2_gene_pane_t1_ParamLimits

0xb66f,	// (0x00045ba9) heading_ai2_gene_pane_t1

0xb684,	// (0x00045bbe) list_highlight_pane_cp6

0xb68c,	// (0x00045bc6) ai2_gene_pane_ParamLimits

0xb68c,	// (0x00045bc6) ai2_gene_pane

0xb6b2,	// (0x00045bec) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x00049f1c) list_ai2_gene_pane_t

0xb6c0,	// (0x00045bfa) list_highlight_pane_cp8_ParamLimits

0xb6c0,	// (0x00045bfa) list_highlight_pane_cp8

0xb6d1,	// (0x00045c0b) ai2_gene_pane_g1_ParamLimits

0xb6d1,	// (0x00045c0b) ai2_gene_pane_g1

0xb6e3,	// (0x00045c1d) ai2_gene_pane_g2_ParamLimits

0xb6e3,	// (0x00045c1d) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x00049f21) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x00049f21) ai2_gene_pane_g

0x87d4,	// (0x00042d0e) scroll_pane_cp12

0x630b,	// (0x00040845) control_pane_t3_ParamLimits

0x630b,	// (0x00040845) control_pane_t3

0x9710,	// (0x00043c4a) status_small_pane_g8_ParamLimits

0x9710,	// (0x00043c4a) status_small_pane_g8

0x64c6,	// (0x00040a00) popup_find_window_ParamLimits

0x66db,	// (0x00040c15) popup_note_image_window_ParamLimits

0x517d,	// (0x0003f6b7) list_double2_graphic_pane_vc_g1_ParamLimits

0x517d,	// (0x0003f6b7) list_double2_graphic_pane_vc_g1

0x5cbc,	// (0x000401f6) list_double2_graphic_pane_vc_g2_ParamLimits

0x5cbc,	// (0x000401f6) list_double2_graphic_pane_vc_g2

0x5cc8,	// (0x00040202) list_double2_graphic_pane_vc_g3_ParamLimits

0x5cc8,	// (0x00040202) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00049cfd) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049cfd) list_double2_graphic_pane_vc_g

0x5189,	// (0x0003f6c3) list_double2_graphic_pane_vc_t1_ParamLimits

0x5189,	// (0x0003f6c3) list_double2_graphic_pane_vc_t1

0x5cbc,	// (0x000401f6) list_single_heading_pane_vc_g1_ParamLimits

0x5cbc,	// (0x000401f6) list_single_heading_pane_vc_g1

0x5cc8,	// (0x00040202) list_single_heading_pane_vc_g2_ParamLimits

0x5cc8,	// (0x00040202) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b0c) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b0c) list_single_heading_pane_vc_g

0x519f,	// (0x0003f6d9) list_single_heading_pane_vc_t1_ParamLimits

0x519f,	// (0x0003f6d9) list_single_heading_pane_vc_t1

0x51b5,	// (0x0003f6ef) list_single_heading_pane_vc_t2_ParamLimits

0x51b5,	// (0x0003f6ef) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00049d1e) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00049d1e) list_single_heading_pane_vc_t

0x8799,	// (0x00042cd3) list_setting_number_pane_vc_g1_ParamLimits

0x8799,	// (0x00042cd3) list_setting_number_pane_vc_g1

0x87a5,	// (0x00042cdf) list_setting_number_pane_vc_g2_ParamLimits

0x87a5,	// (0x00042cdf) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00049d23) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00049d23) list_setting_number_pane_vc_g

0x51d1,	// (0x0003f70b) list_setting_number_pane_vc_t1_ParamLimits

0x51d1,	// (0x0003f70b) list_setting_number_pane_vc_t1

0x51e5,	// (0x0003f71f) list_setting_number_pane_vc_t2_ParamLimits

0x51e5,	// (0x0003f71f) list_setting_number_pane_vc_t2

0x51ff,	// (0x0003f739) list_setting_number_pane_vc_t3_ParamLimits

0x51ff,	// (0x0003f739) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00049d28) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00049d28) list_setting_number_pane_vc_t

0x5227,	// (0x0003f761) set_value_pane_vc_ParamLimits

0x5227,	// (0x0003f761) set_value_pane_vc

0xb275,	// (0x000457af) list_double2_graphic_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_double2_graphic_pane_vc

0x6c7b,	// (0x000411b5) list_double2_large_graphic_pane_vc_ParamLimits

0x6c7b,	// (0x000411b5) list_double2_large_graphic_pane_vc

0xb275,	// (0x000457af) list_double2_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_double2_pane_vc

0xb275,	// (0x000457af) list_double_graphic_heading_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_double_graphic_heading_pane_vc

0xb275,	// (0x000457af) list_double_graphic_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_double_graphic_pane_vc

0xb275,	// (0x000457af) list_double_heading_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_double_heading_pane_vc

0x6c8d,	// (0x000411c7) list_double_large_graphic_pane_vc_ParamLimits

0x6c8d,	// (0x000411c7) list_double_large_graphic_pane_vc

0xb275,	// (0x000457af) list_double_number_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_double_number_pane_vc

0xb275,	// (0x000457af) list_double_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_double_pane_vc

0xb275,	// (0x000457af) list_double_time_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_double_time_pane_vc

0xb275,	// (0x000457af) list_setting_number_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_setting_number_pane_vc

0xb275,	// (0x000457af) list_setting_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_setting_pane_vc

0xb275,	// (0x000457af) list_single_graphic_heading_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_single_graphic_heading_pane_vc

0xb275,	// (0x000457af) list_single_heading_pane_vc_ParamLimits

0xb275,	// (0x000457af) list_single_heading_pane_vc

0x6cab,	// (0x000411e5) list_single_number_heading_pane_vc_ParamLimits

0x6cab,	// (0x000411e5) list_single_number_heading_pane_vc

0x517d,	// (0x0003f6b7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x517d,	// (0x0003f6b7) list_double_graphic_heading_pane_vc_g1

0x5cbc,	// (0x000401f6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5cbc,	// (0x000401f6) list_double_graphic_heading_pane_vc_g2

0x5cc8,	// (0x00040202) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5cc8,	// (0x00040202) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00049cfd) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049cfd) list_double_graphic_heading_pane_vc_g

0x52d0,	// (0x0003f80a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x52d0,	// (0x0003f80a) list_double_graphic_heading_pane_vc_t1

0x52ec,	// (0x0003f826) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x52ec,	// (0x0003f826) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x00049f2d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x00049f2d) list_double_graphic_heading_pane_vc_t

0x8799,	// (0x00042cd3) list_setting_pane_vc_g1_ParamLimits

0x8799,	// (0x00042cd3) list_setting_pane_vc_g1

0x87a5,	// (0x00042cdf) list_setting_pane_vc_g2_ParamLimits

0x87a5,	// (0x00042cdf) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00049d23) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00049d23) list_setting_pane_vc_g

0x5304,	// (0x0003f83e) list_setting_pane_vc_t1_ParamLimits

0x5304,	// (0x0003f83e) list_setting_pane_vc_t1

0x531e,	// (0x0003f858) list_setting_pane_vc_t2_ParamLimits

0x531e,	// (0x0003f858) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x00049f70) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x00049f70) list_setting_pane_vc_t

0x5227,	// (0x0003f761) set_value_pane_cp_vc_ParamLimits

0x5227,	// (0x0003f761) set_value_pane_cp_vc

0x5cbc,	// (0x000401f6) list_single_number_heading_pane_vc_g1_ParamLimits

0x5cbc,	// (0x000401f6) list_single_number_heading_pane_vc_g1

0x5cc8,	// (0x00040202) list_single_number_heading_pane_vc_g2_ParamLimits

0x5cc8,	// (0x00040202) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b0c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b0c) list_single_number_heading_pane_vc_g

0x519f,	// (0x0003f6d9) list_single_number_heading_pane_vc_t1_ParamLimits

0x519f,	// (0x0003f6d9) list_single_number_heading_pane_vc_t1

0x5336,	// (0x0003f870) list_single_number_heading_pane_vc_t2_ParamLimits

0x5336,	// (0x0003f870) list_single_number_heading_pane_vc_t2

0x4a3a,	// (0x0003ef74) list_single_number_heading_pane_vc_t3_ParamLimits

0x4a3a,	// (0x0003ef74) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x00049f75) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x00049f75) list_single_number_heading_pane_vc_t

0x517d,	// (0x0003f6b7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x517d,	// (0x0003f6b7) list_single_graphic_heading_pane_vc_g1

0x5cbc,	// (0x000401f6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5cbc,	// (0x000401f6) list_single_graphic_heading_pane_vc_g4

0x5cc8,	// (0x00040202) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5cc8,	// (0x00040202) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00049cfd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049cfd) list_single_graphic_heading_pane_vc_g

0x519f,	// (0x0003f6d9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x519f,	// (0x0003f6d9) list_single_graphic_heading_pane_vc_t1

0x534a,	// (0x0003f884) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x534a,	// (0x0003f884) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x00049f7c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x00049f7c) list_single_graphic_heading_pane_vc_t

0x5cbc,	// (0x000401f6) list_double2_pane_vc_g1_ParamLimits

0x5cbc,	// (0x000401f6) list_double2_pane_vc_g1

0x5cc8,	// (0x00040202) list_double2_pane_vc_g2_ParamLimits

0x5cc8,	// (0x00040202) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b0c) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b0c) list_double2_pane_vc_g

0x52ba,	// (0x0003f7f4) list_double2_pane_vc_t1_ParamLimits

0x52ba,	// (0x0003f7f4) list_double2_pane_vc_t1

0x6e82,	// (0x000413bc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6e82,	// (0x000413bc) list_double2_large_graphic_pane_vc_g1

0x6e8e,	// (0x000413c8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6e8e,	// (0x000413c8) list_double2_large_graphic_pane_vc_g2

0x6e9a,	// (0x000413d4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6e9a,	// (0x000413d4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x00049f81) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x00049f81) list_double2_large_graphic_pane_vc_g

0x535e,	// (0x0003f898) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x535e,	// (0x0003f898) list_double2_large_graphic_pane_vc_t1

0x5374,	// (0x0003f8ae) list_double_time_pane_vc_g1_ParamLimits

0x5374,	// (0x0003f8ae) list_double_time_pane_vc_g1

0x5380,	// (0x0003f8ba) list_double_time_pane_vc_g2_ParamLimits

0x5380,	// (0x0003f8ba) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x00049f88) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x00049f88) list_double_time_pane_vc_g

0x538c,	// (0x0003f8c6) list_double_time_pane_vc_t1_ParamLimits

0x538c,	// (0x0003f8c6) list_double_time_pane_vc_t1

0x53aa,	// (0x0003f8e4) list_double_time_pane_vc_t2_ParamLimits

0x53aa,	// (0x0003f8e4) list_double_time_pane_vc_t2

0x53f4,	// (0x0003f92e) list_double_time_pane_vc_t3_ParamLimits

0x53f4,	// (0x0003f92e) list_double_time_pane_vc_t3

0x5406,	// (0x0003f940) list_double_time_pane_vc_t4_ParamLimits

0x5406,	// (0x0003f940) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x00049f8d) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x00049f8d) list_double_time_pane_vc_t

0x5cbc,	// (0x000401f6) list_double_pane_vc_g1_ParamLimits

0x5cbc,	// (0x000401f6) list_double_pane_vc_g1

0x5cc8,	// (0x00040202) list_double_pane_vc_g2_ParamLimits

0x5cc8,	// (0x00040202) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b0c) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b0c) list_double_pane_vc_g

0x541a,	// (0x0003f954) list_double_pane_vc_t1_ParamLimits

0x541a,	// (0x0003f954) list_double_pane_vc_t1

0x542c,	// (0x0003f966) list_double_pane_vc_t2_ParamLimits

0x542c,	// (0x0003f966) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x00049f96) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x00049f96) list_double_pane_vc_t

0x5cbc,	// (0x000401f6) list_double_number_pane_vc_g1_ParamLimits

0x5cbc,	// (0x000401f6) list_double_number_pane_vc_g1

0x5cc8,	// (0x00040202) list_double_number_pane_vc_g2_ParamLimits

0x5cc8,	// (0x00040202) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b0c) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b0c) list_double_number_pane_vc_g

0x5444,	// (0x0003f97e) list_double_number_pane_vc_t1_ParamLimits

0x5444,	// (0x0003f97e) list_double_number_pane_vc_t1

0x5456,	// (0x0003f990) list_double_number_pane_vc_t2_ParamLimits

0x5456,	// (0x0003f990) list_double_number_pane_vc_t2

0x5468,	// (0x0003f9a2) list_double_number_pane_vc_t3_ParamLimits

0x5468,	// (0x0003f9a2) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x00049f9b) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x00049f9b) list_double_number_pane_vc_t

0x6ea6,	// (0x000413e0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6ea6,	// (0x000413e0) list_double_large_graphic_pane_vc_g1

0x5480,	// (0x0003f9ba) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5480,	// (0x0003f9ba) list_double_large_graphic_pane_vc_g2

0x5494,	// (0x0003f9ce) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5494,	// (0x0003f9ce) list_double_large_graphic_pane_vc_g3

0x54a3,	// (0x0003f9dd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x54a3,	// (0x0003f9dd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x00049fa2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00049fa2) list_double_large_graphic_pane_vc_g

0x54b2,	// (0x0003f9ec) list_double_large_graphic_pane_vc_t1_ParamLimits

0x54b2,	// (0x0003f9ec) list_double_large_graphic_pane_vc_t1

0x54cc,	// (0x0003fa06) list_double_large_graphic_pane_vc_t2_ParamLimits

0x54cc,	// (0x0003fa06) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00049fab) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00049fab) list_double_large_graphic_pane_vc_t

0x5cbc,	// (0x000401f6) list_double_heading_pane_vc_g1_ParamLimits

0x5cbc,	// (0x000401f6) list_double_heading_pane_vc_g1

0x5cc8,	// (0x00040202) list_double_heading_pane_vc_g2_ParamLimits

0x5cc8,	// (0x00040202) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00049b0c) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00049b0c) list_double_heading_pane_vc_g

0x54ee,	// (0x0003fa28) list_double_heading_pane_vc_t1_ParamLimits

0x54ee,	// (0x0003fa28) list_double_heading_pane_vc_t1

0x519f,	// (0x0003f6d9) list_double_heading_pane_vc_t2_ParamLimits

0x519f,	// (0x0003f6d9) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x00049fb0) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x00049fb0) list_double_heading_pane_vc_t

0x5502,	// (0x0003fa3c) list_double_graphic_pane_vc_g1_ParamLimits

0x5502,	// (0x0003fa3c) list_double_graphic_pane_vc_g1

0x550e,	// (0x0003fa48) list_double_graphic_pane_vc_g2_ParamLimits

0x550e,	// (0x0003fa48) list_double_graphic_pane_vc_g2

0x5cbc,	// (0x000401f6) list_double_graphic_pane_vc_g3_ParamLimits

0x5cbc,	// (0x000401f6) list_double_graphic_pane_vc_g3

0x0003,

0xfa7b,	// (0x00049fb5) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x00049fb5) list_double_graphic_pane_vc_g

0x551f,	// (0x0003fa59) list_double_graphic_pane_vc_t1_ParamLimits

0x551f,	// (0x0003fa59) list_double_graphic_pane_vc_t1

0x553d,	// (0x0003fa77) list_double_graphic_pane_vc_t2_ParamLimits

0x553d,	// (0x0003fa77) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x00049fbe) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x00049fbe) list_double_graphic_pane_vc_t

0x5862,	// (0x0003fd9c) aid_size_cell_fastswap

0x586a,	// (0x0003fda4) aid_size_cell_touch_ParamLimits

0x586a,	// (0x0003fda4) aid_size_cell_touch

0x5ac5,	// (0x0003ffff) popup_fast_swap_wide_window_ParamLimits

0x5ac5,	// (0x0003ffff) popup_fast_swap_wide_window

0x5bcb,	// (0x00040105) touch_pane_ParamLimits

0x5bcb,	// (0x00040105) touch_pane

0x8836,	// (0x00042d70) button_value_adjust_pane_cp2

0x4e3b,	// (0x0003f375) button_value_adjust_pane_cp4

0x4e5d,	// (0x0003f397) form_field_data_pane_cp2

0x4e7c,	// (0x0003f3b6) form_field_data_wide_pane_cp2

0x8ca6,	// (0x000431e0) bg_scroll_pane_ParamLimits

0x5f07,	// (0x00040441) scroll_handle_pane_ParamLimits

0x5f1b,	// (0x00040455) scroll_sc2_down_pane_ParamLimits

0x5f1b,	// (0x00040455) scroll_sc2_down_pane

0x8cd7,	// (0x00043211) scroll_sc2_up_pane_ParamLimits

0x8cd7,	// (0x00043211) scroll_sc2_up_pane

0xbe09,	// (0x00046343) grid_wheel_folder_pane_g1_ParamLimits

0xbe09,	// (0x00046343) grid_wheel_folder_pane_g1

0x60f3,	// (0x0004062d) clock_nsta_pane_cp2_ParamLimits

0x60f3,	// (0x0004062d) clock_nsta_pane_cp2

0x8a20,	// (0x00042f5a) listscroll_midp_pane_ParamLimits

0x94a6,	// (0x000439e0) midp_canvas_pane

0x978a,	// (0x00043cc4) nsta_clock_indic_pane

0x97be,	// (0x00043cf8) listscroll_form_pane_vc

0x97c6,	// (0x00043d00) listscroll_set_pane_vc_ParamLimits

0x97c6,	// (0x00043d00) listscroll_set_pane_vc

0x98c7,	// (0x00043e01) clock_nsta_pane

0x993c,	// (0x00043e76) indicator_nsta_pane

0x9c20,	// (0x0004415a) bg_popup_sub_pane_cp2_ParamLimits

0x9c34,	// (0x0004416e) find_pane_cp2_ParamLimits

0x9c34,	// (0x0004416e) find_pane_cp2

0x9c4a,	// (0x00044184) grid_toobar_pane_ParamLimits

0x9d2a,	// (0x00044264) list_form_gen_pane_vc_ParamLimits

0x9d2a,	// (0x00044264) list_form_gen_pane_vc

0x9d40,	// (0x0004427a) scroll_pane_cp8_vc_ParamLimits

0x9d40,	// (0x0004427a) scroll_pane_cp8_vc

0x9dbc,	// (0x000442f6) data_form_wide_pane_vc_ParamLimits

0x9dbc,	// (0x000442f6) data_form_wide_pane_vc

0x9dc8,	// (0x00044302) form_field_data_wide_pane_vc_g1

0x9dd0,	// (0x0004430a) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dd0,	// (0x0004430a) form_field_data_wide_pane_vc_t1

0x884a,	// (0x00042d84) input_focus_pane_cp6_vc_ParamLimits

0x884a,	// (0x00042d84) input_focus_pane_cp6_vc

0xa10e,	// (0x00044648) list_midp_pane_ParamLimits

0xa11a,	// (0x00044654) scroll_pane_cp16_ParamLimits

0xa11a,	// (0x00044654) scroll_pane_cp16

0xa168,	// (0x000446a2) button_value_adjust_pane_ParamLimits

0xa168,	// (0x000446a2) button_value_adjust_pane

0xb0d7,	// (0x00045611) button_value_adjust_pane_cp6_ParamLimits

0xb0d7,	// (0x00045611) button_value_adjust_pane_cp6

0xb1f9,	// (0x00045733) settings_code_pane_cp_ParamLimits

0xb1f9,	// (0x00045733) settings_code_pane_cp

0x7ee2,	// (0x0004241c) cell_touch_pane_g1

0x7ee2,	// (0x0004241c) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00049c42) cell_touch_pane_g

0xb762,	// (0x00045c9c) cell_touch_pane_cp_ParamLimits

0xb762,	// (0x00045c9c) cell_touch_pane_cp

0xb772,	// (0x00045cac) cell_touch_pane_ParamLimits

0xb772,	// (0x00045cac) cell_touch_pane

0x7ee2,	// (0x0004241c) scroll_sc2_down_pane_g1

0x7ee2,	// (0x0004241c) scroll_sc2_up_pane_g1

0x7eec,	// (0x00042426) bg_set_opt_pane_cp4_vc

0xb783,	// (0x00045cbd) list_set_graphic_pane_vc_g1_ParamLimits

0xb783,	// (0x00045cbd) list_set_graphic_pane_vc_g1

0x9a04,	// (0x00043f3e) list_set_graphic_pane_vc_g2_ParamLimits

0x9a04,	// (0x00043f3e) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x00049f32) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x00049f32) list_set_graphic_pane_vc_g

0xb78f,	// (0x00045cc9) text_primary_small_cp13_vc_ParamLimits

0xb78f,	// (0x00045cc9) text_primary_small_cp13_vc

0xb7a7,	// (0x00045ce1) list_set_graphic_pane_vc_ParamLimits

0xb7a7,	// (0x00045ce1) list_set_graphic_pane_vc

0x7eec,	// (0x00042426) input_focus_pane_cp2_vc

0x7ee2,	// (0x0004241c) setting_code_pane_vc_g1

0x8017,	// (0x00042551) setting_code_pane_vc_t1

0xb7bb,	// (0x00045cf5) set_text_pane_vc_t1_ParamLimits

0xb7bb,	// (0x00045cf5) set_text_pane_vc_t1

0x7eec,	// (0x00042426) input_focus_pane_cp1_vc

0xb7d8,	// (0x00045d12) list_set_text_pane_vc

0x7ee2,	// (0x0004241c) setting_text_pane_vc_g1

0x7eec,	// (0x00042426) bg_set_opt_pane_cp2_vc

0x800e,	// (0x00042548) setting_slider_graphic_pane_vc_g1

0xb7e2,	// (0x00045d1c) setting_slider_graphic_pane_vc_t1

0xb7f2,	// (0x00045d2c) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x00049f37) setting_slider_graphic_pane_vc_t

0xb802,	// (0x00045d3c) slider_set_pane_cp_vc

0xb80a,	// (0x00045d44) slider_set_pane_vc_g1

0xb813,	// (0x00045d4d) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x00049f3c) slider_set_pane_vc_g

0x8899,	// (0x00042dd3) set_opt_bg_pane_g1_copy1

0x88a1,	// (0x00042ddb) set_opt_bg_pane_g2_copy1

0xb83f,	// (0x00045d79) set_opt_bg_pane_g3_copy1

0x88b1,	// (0x00042deb) set_opt_bg_pane_g4_copy1

0x88b9,	// (0x00042df3) set_opt_bg_pane_g5_copy1

0x88c1,	// (0x00042dfb) set_opt_bg_pane_g6_copy1

0xb847,	// (0x00045d81) set_opt_bg_pane_g7_copy1

0xb851,	// (0x00045d8b) set_opt_bg_pane_g8_copy1

0xb859,	// (0x00045d93) set_opt_bg_pane_g9_copy1

0x7eec,	// (0x00042426) bg_set_opt_pane_cp_vc

0xb861,	// (0x00045d9b) setting_slider_pane_vc_t1

0xb870,	// (0x00045daa) setting_slider_pane_vc_t2

0xb880,	// (0x00045dba) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x00049f4b) setting_slider_pane_vc_t

0xb890,	// (0x00045dca) slider_set_pane_vc

0x6a39,	// (0x00040f73) volume_set_pane_vc_g1

0x6e3a,	// (0x00041374) volume_set_pane_vc_g2

0x6e43,	// (0x0004137d) volume_set_pane_vc_g3

0x6e4c,	// (0x00041386) volume_set_pane_vc_g4

0x6e55,	// (0x0004138f) volume_set_pane_vc_g5

0x6e5e,	// (0x00041398) volume_set_pane_vc_g6

0x6a66,	// (0x00040fa0) volume_set_pane_vc_g7

0x6e67,	// (0x000413a1) volume_set_pane_vc_g8

0x6e70,	// (0x000413aa) volume_set_pane_vc_g9

0x6e79,	// (0x000413b3) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x00049f52) volume_set_pane_vc_g

0xb898,	// (0x00045dd2) volume_set_pane_vc

0xb8a0,	// (0x00045dda) button_value_adjust_pane_cp1_vc

0xb8aa,	// (0x00045de4) list_highlight_pane_cp2_vc

0xb8b3,	// (0x00045ded) list_set_pane_vc_ParamLimits

0xb8b3,	// (0x00045ded) list_set_pane_vc

0xb911,	// (0x00045e4b) main_pane_set_vc_t1_ParamLimits

0xb911,	// (0x00045e4b) main_pane_set_vc_t1

0xb926,	// (0x00045e60) main_pane_set_vc_t2_ParamLimits

0xb926,	// (0x00045e60) main_pane_set_vc_t2

0xb938,	// (0x00045e72) main_pane_set_vc_t3_ParamLimits

0xb938,	// (0x00045e72) main_pane_set_vc_t3

0xb94a,	// (0x00045e84) main_pane_set_vc_t4_ParamLimits

0xb94a,	// (0x00045e84) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x00049f67) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x00049f67) main_pane_set_vc_t

0xb95c,	// (0x00045e96) setting_code_pane_vc_ParamLimits

0xb95c,	// (0x00045e96) setting_code_pane_vc

0xb96b,	// (0x00045ea5) setting_slider_graphic_pane_vc

0xb96b,	// (0x00045ea5) setting_slider_pane_vc

0xb96b,	// (0x00045ea5) setting_text_pane_vc

0xb96b,	// (0x00045ea5) setting_volume_pane_vc

0xb973,	// (0x00045ead) scroll_pane_cp121_vc

0x8824,	// (0x00042d5e) set_content_pane_vc

0xb97b,	// (0x00045eb5) button_value_adjust_pane_g1

0xb984,	// (0x00045ebe) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x00049fc3) button_value_adjust_pane_g

0xb98d,	// (0x00045ec7) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb98d,	// (0x00045ec7) form_field_slider_wide_pane_vc_t1

0xb9a1,	// (0x00045edb) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9a1,	// (0x00045edb) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x00049fc8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x00049fc8) form_field_slider_wide_pane_vc_t

0x8247,	// (0x00042781) input_focus_pane_cp10_vc_ParamLimits

0x8247,	// (0x00042781) input_focus_pane_cp10_vc

0xb9cd,	// (0x00045f07) slider_cont_pane_cp1_vc_ParamLimits

0xb9cd,	// (0x00045f07) slider_cont_pane_cp1_vc

0xb9dd,	// (0x00045f17) slider_form_pane_g1_cp2

0xb813,	// (0x00045d4d) slider_form_pane_g2_cp2

0xba0a,	// (0x00045f44) form_field_slider_pane_vc_t3

0xba18,	// (0x00045f52) form_field_slider_pane_vc_t4

0xba26,	// (0x00045f60) slider_form_pane_vc_ParamLimits

0xba26,	// (0x00045f60) slider_form_pane_vc

0xba33,	// (0x00045f6d) form_field_slider_pane_vc_t1_ParamLimits

0xba33,	// (0x00045f6d) form_field_slider_pane_vc_t1

0xb9a1,	// (0x00045edb) form_field_slider_pane_vc_t2_ParamLimits

0xb9a1,	// (0x00045edb) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x00049fda) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x00049fda) form_field_slider_pane_vc_t

0x8247,	// (0x00042781) input_focus_pane_cp9_vc_ParamLimits

0x8247,	// (0x00042781) input_focus_pane_cp9_vc

0xba4f,	// (0x00045f89) slider_cont_pane_vc_ParamLimits

0xba4f,	// (0x00045f89) slider_cont_pane_vc

0xba61,	// (0x00045f9b) list_form_graphic_pane_cp_vc_ParamLimits

0xba61,	// (0x00045f9b) list_form_graphic_pane_cp_vc

0x9dc8,	// (0x00044302) form_field_popup_wide_pane_vc_g1

0xba76,	// (0x00045fb0) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba76,	// (0x00045fb0) form_field_popup_wide_pane_vc_t1

0x884a,	// (0x00042d84) input_focus_pane_cp8_vc_ParamLimits

0x884a,	// (0x00042d84) input_focus_pane_cp8_vc

0xbabb,	// (0x00045ff5) list_form_wide_pane_vc_ParamLimits

0xbabb,	// (0x00045ff5) list_form_wide_pane_vc

0xbac7,	// (0x00046001) list_form_graphic_pane_vc_g1

0xbacf,	// (0x00046009) list_form_graphic_pane_vc_t1_ParamLimits

0xbacf,	// (0x00046009) list_form_graphic_pane_vc_t1

0x7fcc,	// (0x00042506) list_highlight_pane_cp5_vc_ParamLimits

0x7fcc,	// (0x00042506) list_highlight_pane_cp5_vc

0xbaeb,	// (0x00046025) list_form_graphic_pane_vc_ParamLimits

0xbaeb,	// (0x00046025) list_form_graphic_pane_vc

0x9dc8,	// (0x00044302) form_field_popup_pane_vc_g1

0xbb01,	// (0x0004603b) form_field_popup_pane_vc_t1_ParamLimits

0xbb01,	// (0x0004603b) form_field_popup_pane_vc_t1

0x884a,	// (0x00042d84) input_focus_pane_cp7_vc_ParamLimits

0x884a,	// (0x00042d84) input_focus_pane_cp7_vc

0xbb18,	// (0x00046052) list_form_pane_vc_ParamLimits

0xbb18,	// (0x00046052) list_form_pane_vc

0xbb24,	// (0x0004605e) data_form_pane_vc_t1_ParamLimits

0xbb24,	// (0x0004605e) data_form_pane_vc_t1

0x8899,	// (0x00042dd3) input_focus_pane_vc_g1

0x88a1,	// (0x00042ddb) input_focus_pane_vc_g2

0x88a9,	// (0x00042de3) input_focus_pane_vc_g3

0x88b1,	// (0x00042deb) input_focus_pane_vc_g4

0x88b9,	// (0x00042df3) input_focus_pane_vc_g5

0x88c1,	// (0x00042dfb) input_focus_pane_vc_g6

0x88c9,	// (0x00042e03) input_focus_pane_vc_g7

0x88d1,	// (0x00042e0b) input_focus_pane_vc_g8

0x88d9,	// (0x00042e13) input_focus_pane_vc_g9

0x7ee2,	// (0x0004241c) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00049bcb) input_focus_pane_vc_g

0x9dbc,	// (0x000442f6) data_form_pane_vc_ParamLimits

0x9dbc,	// (0x000442f6) data_form_pane_vc

0x9dc8,	// (0x00044302) form_field_data_pane_vc_g1

0xbb3f,	// (0x00046079) form_field_data_pane_vc_t1_ParamLimits

0xbb3f,	// (0x00046079) form_field_data_pane_vc_t1

0x884a,	// (0x00042d84) input_focus_pane_vc_ParamLimits

0x884a,	// (0x00042d84) input_focus_pane_vc

0xbb59,	// (0x00046093) button_value_adjust_pane_cp3_vc

0xbb61,	// (0x0004609b) button_value_adjust_pane_cp5_vc

0xbb69,	// (0x000460a3) form_field_data_pane_vc_ParamLimits

0xbb69,	// (0x000460a3) form_field_data_pane_vc

0xbb80,	// (0x000460ba) form_field_data_pane_vc_cp2

0xbb88,	// (0x000460c2) form_field_data_wide_pane_vc_ParamLimits

0xbb88,	// (0x000460c2) form_field_data_wide_pane_vc

0xbb9e,	// (0x000460d8) form_field_data_wide_pane_vc_cp2

0xbba6,	// (0x000460e0) form_field_popup_pane_vc_ParamLimits

0xbba6,	// (0x000460e0) form_field_popup_pane_vc

0xbbbd,	// (0x000460f7) form_field_popup_wide_pane_vc_ParamLimits

0xbbbd,	// (0x000460f7) form_field_popup_wide_pane_vc

0xbbd3,	// (0x0004610d) form_field_slider_pane_vc_ParamLimits

0xbbd3,	// (0x0004610d) form_field_slider_pane_vc

0xbbe6,	// (0x00046120) form_field_slider_wide_pane_vc_ParamLimits

0xbbe6,	// (0x00046120) form_field_slider_wide_pane_vc

0xbbf9,	// (0x00046133) grid_touch_1_pane_ParamLimits

0xbbf9,	// (0x00046133) grid_touch_1_pane

0xbc05,	// (0x0004613f) grid_touch_2_pane_ParamLimits

0xbc05,	// (0x0004613f) grid_touch_2_pane

0x9755,	// (0x00043c8f) touch_pane_g1_ParamLimits

0x9755,	// (0x00043c8f) touch_pane_g1

0xbc1d,	// (0x00046157) cell_app_pane_cp_wide_ParamLimits

0xbc1d,	// (0x00046157) cell_app_pane_cp_wide

0xbc2e,	// (0x00046168) grid_popup_fast_wide_pane_ParamLimits

0xbc2e,	// (0x00046168) grid_popup_fast_wide_pane

0xbc42,	// (0x0004617c) scroll_pane_cp19_ParamLimits

0xbc42,	// (0x0004617c) scroll_pane_cp19

0x7eec,	// (0x00042426) bg_popup_window_pane_cp20

0xbc56,	// (0x00046190) listscroll_popup_fast_wide_pane

0x7fcc,	// (0x00042506) grid_indicator_nsta_pane

0xbc5e,	// (0x00046198) clock_nsta_pane_g1

0xbc67,	// (0x000461a1) clock_nsta_pane_t1

0xbc83,	// (0x000461bd) cell_indicator_nsta_pane_ParamLimits

0xbc83,	// (0x000461bd) cell_indicator_nsta_pane

0xbcb4,	// (0x000461ee) cell_indicator_nsta_pane_g1

0xbcc2,	// (0x000461fc) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x00049feb) cell_indicator_nsta_pane_g

0xbccf,	// (0x00046209) clock_nsta_pane_cp

0xbcd7,	// (0x00046211) indicator_nsta_pane_cp

0xbcdf,	// (0x00046219) nsta_clock_indic_pane_g1

0x8095,	// (0x000425cf) grid_indicator_pane

0x8dcc,	// (0x00043306) scroll_pane_cp29

0x6042,	// (0x0004057c) indicator_nsta_pane_cp2_ParamLimits

0x6042,	// (0x0004057c) indicator_nsta_pane_cp2

0x7fcc,	// (0x00042506) main_apps_wheel_pane

0x9ff3,	// (0x0004452d) form_midp_field_text_pane_ParamLimits

0xa13a,	// (0x00044674) scroll_bar_cp050_ParamLimits

0xbd40,	// (0x0004627a) cell_indicator_pane_ParamLimits

0xbd40,	// (0x0004627a) cell_indicator_pane

0xbd5b,	// (0x00046295) cell_indicator_pane_g1

0xbd65,	// (0x0004629f) grid_wheel_folder_pane_ParamLimits

0xbd65,	// (0x0004629f) grid_wheel_folder_pane

0xbd7b,	// (0x000462b5) list_wheel_apps_pane_ParamLimits

0xbd7b,	// (0x000462b5) list_wheel_apps_pane

0xbd8c,	// (0x000462c6) main_apps_wheel_pane_g1_ParamLimits

0xbd8c,	// (0x000462c6) main_apps_wheel_pane_g1

0xbda0,	// (0x000462da) main_apps_wheel_pane_g2_ParamLimits

0xbda0,	// (0x000462da) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x0004a007) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x0004a007) main_apps_wheel_pane_g

0xbdb8,	// (0x000462f2) main_apps_wheel_pane_t1_ParamLimits

0xbdb8,	// (0x000462f2) main_apps_wheel_pane_t1

0xbddb,	// (0x00046315) list_wheel_apps_pane_g1

0xbde3,	// (0x0004631d) list_wheel_apps_pane_g2

0xbdeb,	// (0x00046325) list_wheel_apps_pane_g3

0xbdf5,	// (0x0004632f) list_wheel_apps_pane_g4

0xbdff,	// (0x00046339) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x0004a00c) list_wheel_apps_pane_g

0x931e,	// (0x00043858) navi_icon_text_pane

0x97fa,	// (0x00043d34) aid_fill_nsta

0xbe22,	// (0x0004635c) navi_icon_text_pane_g1

0xbe2e,	// (0x00046368) navi_icon_text_pane_t1

0x91b5,	// (0x000436ef) list_set_graphic_pane_t1_ParamLimits

0x91b5,	// (0x000436ef) list_set_graphic_pane_t1

0xa88c,	// (0x00044dc6) popup_midp_note_alarm_window_t6_ParamLimits

0xa88c,	// (0x00044dc6) popup_midp_note_alarm_window_t6

0xa89e,	// (0x00044dd8) popup_midp_note_alarm_window_t7_ParamLimits

0xa89e,	// (0x00044dd8) popup_midp_note_alarm_window_t7

0xa8b0,	// (0x00044dea) popup_midp_note_alarm_window_t8_ParamLimits

0xa8b0,	// (0x00044dea) popup_midp_note_alarm_window_t8

0xa8c2,	// (0x00044dfc) popup_midp_note_alarm_window_t9_ParamLimits

0xa8c2,	// (0x00044dfc) popup_midp_note_alarm_window_t9

0xa8d4,	// (0x00044e0e) popup_midp_note_alarm_window_t10_ParamLimits

0xa8d4,	// (0x00044e0e) popup_midp_note_alarm_window_t10

0xa8e6,	// (0x00044e20) popup_midp_note_alarm_window_t11_ParamLimits

0xa8e6,	// (0x00044e20) popup_midp_note_alarm_window_t11

0xa8f8,	// (0x00044e32) scroll_pane_cp17_ParamLimits

0xa8f8,	// (0x00044e32) scroll_pane_cp17

0x6a39,	// (0x00040f73) volume_small_pane_cp_g1

0x6ece,	// (0x00041408) volume_small_pane_cp_g2

0x6ed7,	// (0x00041411) volume_small_pane_cp_g3

0x6a4b,	// (0x00040f85) volume_small_pane_cp_g4

0x6ee0,	// (0x0004141a) volume_small_pane_cp_g5

0x6e55,	// (0x0004138f) volume_small_pane_cp_g6

0x6a5d,	// (0x00040f97) volume_small_pane_cp_g7

0x6ee9,	// (0x00041423) volume_small_pane_cp_g8

0x6ef2,	// (0x0004142c) volume_small_pane_cp_g9

0x6a6f,	// (0x00040fa9) volume_small_pane_cp_g10

0x9573,	// (0x00043aad) midp_ticker_pane_g1_ParamLimits

0x957f,	// (0x00043ab9) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00049c97) midp_ticker_pane_g_ParamLimits

0x958b,	// (0x00043ac5) midp_ticker_pane_t1_ParamLimits

0x9810,	// (0x00043d4a) aid_fill_nsta_2

0xa126,	// (0x00044660) list_form2_midp_pane

0xb244,	// (0x0004577e) midp_editing_number_pane_ParamLimits

0xb253,	// (0x0004578d) midp_ticker_pane_ParamLimits

0xbe40,	// (0x0004637a) form2_midp_field_pane

0xbe64,	// (0x0004639e) scroll_pane_cp51

0xbe84,	// (0x000463be) form2_midp_button_pane_ParamLimits

0xbe84,	// (0x000463be) form2_midp_button_pane

0xbe96,	// (0x000463d0) form2_midp_content_pane_ParamLimits

0xbe96,	// (0x000463d0) form2_midp_content_pane

0xbeb0,	// (0x000463ea) form2_midp_field_choice_group_pane

0xbeb8,	// (0x000463f2) form2_midp_field_pane_g1

0xbec0,	// (0x000463fa) form2_midp_field_pane_g2

0xbec8,	// (0x00046402) form2_midp_field_pane_g3

0xbed0,	// (0x0004640a) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x0004a031) form2_midp_field_pane_g

0xbed8,	// (0x00046412) form2_midp_gauge_slider_pane

0xbee0,	// (0x0004641a) form2_midp_gauge_wait_pane

0xbee8,	// (0x00046422) form2_midp_image_pane_ParamLimits

0xbee8,	// (0x00046422) form2_midp_image_pane

0xbf03,	// (0x0004643d) form2_midp_label_pane_ParamLimits

0xbf03,	// (0x0004643d) form2_midp_label_pane

0xbf1c,	// (0x00046456) form2_midp_label_pane_cp_ParamLimits

0xbf1c,	// (0x00046456) form2_midp_label_pane_cp

0xbf3d,	// (0x00046477) form2_midp_string_pane_ParamLimits

0xbf3d,	// (0x00046477) form2_midp_string_pane

0x5567,	// (0x0003faa1) form2_midp_text_pane_ParamLimits

0x5567,	// (0x0003faa1) form2_midp_text_pane

0xbf4f,	// (0x00046489) form2_midp_time_pane

0xbf5f,	// (0x00046499) input_focus_pane_cp51_ParamLimits

0xbf5f,	// (0x00046499) input_focus_pane_cp51

0xbf77,	// (0x000464b1) form2_midp_label_pane_t1_ParamLimits

0xbf77,	// (0x000464b1) form2_midp_label_pane_t1

0x5582,	// (0x0003fabc) form2_mdip_text_pane_t1_ParamLimits

0x5582,	// (0x0003fabc) form2_mdip_text_pane_t1

0x559e,	// (0x0003fad8) form2_midp_time_pane_t1

0xbfbf,	// (0x000464f9) form2_midp_gauge_slider_pane_t1

0xbfd1,	// (0x0004650b) form2_midp_gauge_slider_pane_t2

0xbfe3,	// (0x0004651d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x0004a03a) form2_midp_gauge_slider_pane_t

0xbff5,	// (0x0004652f) form2_midp_slider_pane

0xc001,	// (0x0004653b) form2_midp_gauge_wait_pane_t1

0xc00f,	// (0x00046549) form2_midp_wait_pane_ParamLimits

0xc00f,	// (0x00046549) form2_midp_wait_pane

0xc03b,	// (0x00046575) list_single_2graphic_pane_cp4_ParamLimits

0xc03b,	// (0x00046575) list_single_2graphic_pane_cp4

0x9e37,	// (0x00044371) list_single_midp_graphic_pane_cp_ParamLimits

0x9e37,	// (0x00044371) list_single_midp_graphic_pane_cp

0x7eec,	// (0x00042426) list_highlight_pane_cp20

0xc069,	// (0x000465a3) list_single_2graphic_pane_g1_cp4

0xb667,	// (0x00045ba1) list_single_2graphic_pane_g2_cp4

0xc071,	// (0x000465ab) list_single_2graphic_pane_t1_cp4

0x7fcc,	// (0x00042506) list_highlight_pane_cp21

0xc080,	// (0x000465ba) list_single_midp_graphic_pane_g4_cp

0xc08f,	// (0x000465c9) list_single_midp_graphic_pane_t1_cp

0xc0a4,	// (0x000465de) form2_mdip_string_pane_t1_ParamLimits

0xc0a4,	// (0x000465de) form2_mdip_string_pane_t1

0x7eec,	// (0x00042426) bg_wml_button_pane_cp2

0x7ee2,	// (0x0004241c) form2_midp_image_pane_g1

0x5d2a,	// (0x00040264) list_double_large_graphic_pane_g5_ParamLimits

0x5d2a,	// (0x00040264) list_double_large_graphic_pane_g5

0x8a20,	// (0x00042f5a) midp_form_pane_ParamLimits

0x7fcc,	// (0x00042506) main_apps_wheel_pane_ParamLimits

0x6701,	// (0x00040c3b) popup_preview_window_ParamLimits

0x6701,	// (0x00040c3b) popup_preview_window

0x68b8,	// (0x00040df2) popup_touch_info_window_ParamLimits

0x68b8,	// (0x00040df2) popup_touch_info_window

0x68d6,	// (0x00040e10) popup_touch_menu_window_ParamLimits

0x68d6,	// (0x00040e10) popup_touch_menu_window

0x7ed8,	// (0x00042412) bg_popup_sub_pane_cp6

0xc1c7,	// (0x00046701) list_touch_menu_pane

0xc1cf,	// (0x00046709) list_single_touch_menu_pane_ParamLimits

0xc1cf,	// (0x00046709) list_single_touch_menu_pane

0xc1e3,	// (0x0004671d) list_single_touch_menu_pane_t1

0x7fcc,	// (0x00042506) bg_popup_sub_pane_cp7_ParamLimits

0x7fcc,	// (0x00042506) bg_popup_sub_pane_cp7

0xc1f1,	// (0x0004672b) heading_sub_pane

0xc1f9,	// (0x00046733) list_touch_info_pane_ParamLimits

0xc1f9,	// (0x00046733) list_touch_info_pane

0xc208,	// (0x00046742) list_single_touch_info_pane_ParamLimits

0xc208,	// (0x00046742) list_single_touch_info_pane

0xc21a,	// (0x00046754) list_single_touch_info_pane_t1

0xc228,	// (0x00046762) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x0004a048) list_single_touch_info_pane_t

0x949e,	// (0x000439d8) bg_popup_heading_pane_cp

0xc236,	// (0x00046770) heading_sub_pane_t1

0x9d56,	// (0x00044290) bg_popup_preview_window_pane_cp_ParamLimits

0x9d56,	// (0x00044290) bg_popup_preview_window_pane_cp

0xc1f1,	// (0x0004672b) heading_preview_pane

0xc1f9,	// (0x00046733) list_preview_pane_ParamLimits

0xc1f9,	// (0x00046733) list_preview_pane

0xc244,	// (0x0004677e) popup_preview_window_g1

0xc208,	// (0x00046742) list_single_preview_pane_ParamLimits

0xc208,	// (0x00046742) list_single_preview_pane

0xc24c,	// (0x00046786) list_single_preview_pane_g1

0xc254,	// (0x0004678e) list_single_preview_pane_t1

0xc21a,	// (0x00046754) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x0004a04d) list_single_preview_pane_t

0xc262,	// (0x0004679c) bg_popup_heading_pane_cp2_ParamLimits

0xc262,	// (0x0004679c) bg_popup_heading_pane_cp2

0xc278,	// (0x000467b2) heading_preview_pane_g1

0xc280,	// (0x000467ba) heading_preview_pane_t1_ParamLimits

0xc280,	// (0x000467ba) heading_preview_pane_t1

0x80b8,	// (0x000425f2) soft_indicator_pane_t1_ParamLimits

0x87b1,	// (0x00042ceb) scroll_pane_ParamLimits

0x8cc5,	// (0x000431ff) scroll_sc2_left_pane

0x8cce,	// (0x00043208) scroll_sc2_right_pane

0x8ced,	// (0x00043227) scroll_bg_pane_g1_ParamLimits

0x8d02,	// (0x0004323c) scroll_bg_pane_g2_ParamLimits

0x8d1a,	// (0x00043254) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00049c22) scroll_bg_pane_g_ParamLimits

0x8ced,	// (0x00043227) scroll_handle_pane_g1_ParamLimits

0x8d3c,	// (0x00043276) scroll_handle_pane_g2_ParamLimits

0x8d1a,	// (0x00043254) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00049c29) scroll_handle_pane_g_ParamLimits

0x6388,	// (0x000408c2) popup_choice_list_window_ParamLimits

0x6388,	// (0x000408c2) popup_choice_list_window

0x9c2c,	// (0x00044166) choice_list_pane

0x9cae,	// (0x000441e8) cell_toolbar_pane_t1

0x9cd6,	// (0x00044210) toolbar_button_pane_ParamLimits

0xadb2,	// (0x000452ec) ai_gene_pane_1_t2_ParamLimits

0xadb2,	// (0x000452ec) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x00049e4c) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x00049e4c) ai_gene_pane_1_t

0xc29d,	// (0x000467d7) scroll_sc2_left_pane_g1

0xc29d,	// (0x000467d7) scroll_sc2_right_pane_g1

0x97d8,	// (0x00043d12) bg_popup_sub_pane_cp10

0xc2a7,	// (0x000467e1) list_choice_list_pane

0xc2c0,	// (0x000467fa) list_single_choice_list_pane_ParamLimits

0xc2c0,	// (0x000467fa) list_single_choice_list_pane

0xc2d3,	// (0x0004680d) list_single_choice_list_pane_g1

0x89d0,	// (0x00042f0a) list_single_choice_list_pane_t1_ParamLimits

0x89d0,	// (0x00042f0a) list_single_choice_list_pane_t1

0xc2db,	// (0x00046815) choice_list_pane_g1

0xc2e3,	// (0x0004681d) choice_list_pane_t1

0x7ed8,	// (0x00042412) input_focus_pane_cp11

0x8ba4,	// (0x000430de) title_pane_stacon_g2_ParamLimits

0x8ba4,	// (0x000430de) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00049c08) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00049c08) title_pane_stacon_g

0x949e,	// (0x000439d8) cursor_press_pane

0x6430,	// (0x0004096a) popup_fep_hwr_window_ParamLimits

0x6430,	// (0x0004096a) popup_fep_hwr_window

0x64a8,	// (0x000409e2) popup_fep_vkb_window_ParamLimits

0x64a8,	// (0x000409e2) popup_fep_vkb_window

0xc2f1,	// (0x0004682b) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x0004a076) fep_vkb_side_pane_g_ParamLimits

0x6f34,	// (0x0004146e) fep_hwr_candidate_pane_ParamLimits

0x6f34,	// (0x0004146e) fep_hwr_candidate_pane

0x6f5e,	// (0x00041498) fep_hwr_side_pane_ParamLimits

0x6f5e,	// (0x00041498) fep_hwr_side_pane

0x6f7e,	// (0x000414b8) fep_hwr_top_pane_ParamLimits

0x6f7e,	// (0x000414b8) fep_hwr_top_pane

0x6f96,	// (0x000414d0) fep_hwr_write_pane_ParamLimits

0x6f96,	// (0x000414d0) fep_hwr_write_pane

0xfb3c,	// (0x0004a076) fep_vkb_side_pane_g

0xc2f9,	// (0x00046833) fep_hwr_top_pane_g1

0xc30b,	// (0x00046845) fep_hwr_top_pane_g2

0x6fc2,	// (0x000414fc) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x0004a052) fep_hwr_top_pane_g

0x6fd7,	// (0x00041511) fep_hwr_top_text_pane

0x8e92,	// (0x000433cc) fep_hwr_top_text_pane_g1

0xc341,	// (0x0004687b) fep_hwr_top_text_pane_t1

0x70cd,	// (0x00041607) fep_hwr_candidate_pane_g1

0xc584,	// (0x00046abe) fep_vkb_keypad_pane_g3_ParamLimits

0xc584,	// (0x00046abe) fep_vkb_keypad_pane_g3

0xc5ac,	// (0x00046ae6) fep_vkb_keypad_pane_g4_ParamLimits

0xc5ac,	// (0x00046ae6) fep_vkb_keypad_pane_g4

0xc61b,	// (0x00046b55) fep_vkb_bottom_pane_g2_ParamLimits

0xc61b,	// (0x00046b55) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x0004a07d) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x0004a07d) fep_vkb_bottom_pane_g

0xc29d,	// (0x000467d7) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x0004a087) cell_vkb_side_pane_g

0xc6a6,	// (0x00046be0) cell_vkb_side_pane_t1

0xc6b4,	// (0x00046bee) cell_vkb_side_pane_t1_copy1

0xc29d,	// (0x000467d7) bg_fep_vkb_candidate_pane_g2

0xc7e0,	// (0x00046d1a) cell_vkb_candidate_pane_ParamLimits

0xc34f,	// (0x00046889) aid_size_cell_vkb_ParamLimits

0xc34f,	// (0x00046889) aid_size_cell_vkb

0xc7e0,	// (0x00046d1a) cell_vkb_candidate_pane

0x70e7,	// (0x00041621) bg_popup_fep_shadow_pane_g1

0xc3db,	// (0x00046915) fep_vkb_bottom_pane_ParamLimits

0xc3db,	// (0x00046915) fep_vkb_bottom_pane

0xc411,	// (0x0004694b) fep_vkb_candidate_pane_ParamLimits

0xc411,	// (0x0004694b) fep_vkb_candidate_pane

0xc42d,	// (0x00046967) fep_vkb_keypad_pane_ParamLimits

0xc42d,	// (0x00046967) fep_vkb_keypad_pane

0xc46c,	// (0x000469a6) fep_vkb_side_pane_ParamLimits

0xc46c,	// (0x000469a6) fep_vkb_side_pane

0xc4a8,	// (0x000469e2) fep_vkb_top_pane_ParamLimits

0xc4a8,	// (0x000469e2) fep_vkb_top_pane

0xc4dd,	// (0x00046a17) fep_vkb_top_pane_g1_ParamLimits

0xc4dd,	// (0x00046a17) fep_vkb_top_pane_g1

0xc4ec,	// (0x00046a26) fep_vkb_top_pane_g2_ParamLimits

0xc4ec,	// (0x00046a26) fep_vkb_top_pane_g2

0xc4fb,	// (0x00046a35) fep_vkb_top_pane_g3_ParamLimits

0xc4fb,	// (0x00046a35) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x0004a06d) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x0004a06d) fep_vkb_top_pane_g

0xc519,	// (0x00046a53) fep_vkb_top_text_pane_ParamLimits

0xc519,	// (0x00046a53) fep_vkb_top_text_pane

0xc52a,	// (0x00046a64) fep_vkb_side_pane_g1_ParamLimits

0xc52a,	// (0x00046a64) fep_vkb_side_pane_g1

0xc573,	// (0x00046aad) grid_vkb_side_pane_ParamLimits

0xc573,	// (0x00046aad) grid_vkb_side_pane

0x70ef,	// (0x00041629) bg_popup_fep_shadow_pane_g2

0x70f8,	// (0x00041632) bg_popup_fep_shadow_pane_g3

0x7100,	// (0x0004163a) bg_popup_fep_shadow_pane_g4

0x7109,	// (0x00041643) bg_popup_fep_shadow_pane_g5

0x7113,	// (0x0004164d) bg_popup_fep_shadow_pane_g6

0x711b,	// (0x00041655) bg_popup_fep_shadow_pane_g7

0x88b9,	// (0x00042df3) bg_popup_fep_shadow_pane_g8

0xc5ca,	// (0x00046b04) grid_vkb_keypad_number_pane_ParamLimits

0xc5ca,	// (0x00046b04) grid_vkb_keypad_number_pane

0xc5da,	// (0x00046b14) grid_vkb_keypad_pane_ParamLimits

0xc5da,	// (0x00046b14) grid_vkb_keypad_pane

0xc600,	// (0x00046b3a) fep_vkb_bottom_pane_g1_ParamLimits

0xc600,	// (0x00046b3a) fep_vkb_bottom_pane_g1

0xc629,	// (0x00046b63) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc629,	// (0x00046b63) grid_vkb_keypad_bottom_left_pane

0xc63e,	// (0x00046b78) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc63e,	// (0x00046b78) grid_vkb_keypad_bottom_right_pane

0xc653,	// (0x00046b8d) fep_vkb_top_text_pane_g1

0xc66e,	// (0x00046ba8) fep_vkb_top_text_pane_t1

0xc683,	// (0x00046bbd) cell_vkb_side_pane_ParamLimits

0xc683,	// (0x00046bbd) cell_vkb_side_pane

0xc29d,	// (0x000467d7) cell_vkb_side_pane_g1

0xc6c2,	// (0x00046bfc) cell_vkb_keypad_pane_ParamLimits

0xc6c2,	// (0x00046bfc) cell_vkb_keypad_pane

0xc737,	// (0x00046c71) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x0004a09a) bg_popup_fep_shadow_pane_g

0xc29d,	// (0x000467d7) cell_hwr_side_pane_g1

0xc29d,	// (0x000467d7) cell_hwr_side_pane_g2

0xc741,	// (0x00046c7b) cell_vkb_keypad_pane_t1

0xc74f,	// (0x00046c89) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc74f,	// (0x00046c89) cell_vkb_keypad_bottom_left_pane

0xc76c,	// (0x00046ca6) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc76c,	// (0x00046ca6) cell_vkb_keypad_bottom_right_pane

0xc29d,	// (0x000467d7) cell_vkb_keypad_bottom_left_pane_g1

0xc29d,	// (0x000467d7) cell_vkb_keypad_bottom_right_pane_g1

0xc7a5,	// (0x00046cdf) cell_vkb_keypad_number_pane_ParamLimits

0xc7a5,	// (0x00046cdf) cell_vkb_keypad_number_pane

0xc7c4,	// (0x00046cfe) cell_vkb_keypad_number_pane_g1

0xc7ce,	// (0x00046d08) cell_vkb_keypad_number_pane_g2

0xc7d7,	// (0x00046d11) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x0004a08c) cell_vkb_keypad_number_pane_g

0xc741,	// (0x00046c7b) cell_vkb_keypad_number_pane_t1

0xc7fb,	// (0x00046d35) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x0004a087) cell_hwr_side_pane_g

0xc814,	// (0x00046d4e) cell_hwr_side_pane_t1

0x712d,	// (0x00041667) cell_hwr_side_pane_t1_copy1

0xc50b,	// (0x00046a45) cell_hwr_candidate_pane_g1

0x713b,	// (0x00041675) cell_hwr_candidate_pane_t1

0xc29d,	// (0x000467d7) cell_vkb_candidate_pane_g2

0xc89a,	// (0x00046dd4) cell_vkb_candidate_pane_t1

0x6efb,	// (0x00041435) bg_popup_fep_shadow_pane_ParamLimits

0x6efb,	// (0x00041435) bg_popup_fep_shadow_pane

0x2e28,	// (0x0003d362) bg_fep_hwr_top_pane_g4

0xc31d,	// (0x00046857) bg_hwr_side_pane_g1_ParamLimits

0xc31d,	// (0x00046857) bg_hwr_side_pane_g1

0x7013,	// (0x0004154d) cell_hwr_side_pane_ParamLimits

0x7013,	// (0x0004154d) cell_hwr_side_pane

0x704e,	// (0x00041588) fep_hwr_write_pane_g1_ParamLimits

0x704e,	// (0x00041588) fep_hwr_write_pane_g1

0x705b,	// (0x00041595) fep_hwr_write_pane_g2_ParamLimits

0x705b,	// (0x00041595) fep_hwr_write_pane_g2

0x7068,	// (0x000415a2) fep_hwr_write_pane_g3_ParamLimits

0x7068,	// (0x000415a2) fep_hwr_write_pane_g3

0x7076,	// (0x000415b0) fep_hwr_write_pane_g4_ParamLimits

0x7076,	// (0x000415b0) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x0004a059) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x0004a059) fep_hwr_write_pane_g

0x2e28,	// (0x0003d362) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2e28,	// (0x0003d362) bg_fep_hwr_candidate_pane_g2

0x708b,	// (0x000415c5) cell_hwr_candidate_pane_ParamLimits

0x708b,	// (0x000415c5) cell_hwr_candidate_pane

0x70cd,	// (0x00041607) fep_hwr_candidate_pane_g1_ParamLimits

0xc37d,	// (0x000468b7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc37d,	// (0x000468b7) bg_popup_fep_shadow_pane_cp2

0xc50b,	// (0x00046a45) fep_vkb_top_pane_g4_ParamLimits

0xc50b,	// (0x00046a45) fep_vkb_top_pane_g4

0xc551,	// (0x00046a8b) fep_vkb_side_pane_g2_ParamLimits

0xc551,	// (0x00046a8b) fep_vkb_side_pane_g2

0x4d68,	// (0x0003f2a2) list_setting_pane_t4_ParamLimits

0x4d68,	// (0x0003f2a2) list_setting_pane_t4

0x4e02,	// (0x0003f33c) list_setting_number_pane_t5_ParamLimits

0x4e02,	// (0x0003f33c) list_setting_number_pane_t5

0x8ed9,	// (0x00043413) list_double_heading_pane_cp2_ParamLimits

0x8ed9,	// (0x00043413) list_double_heading_pane_cp2

0x87e5,	// (0x00042d1f) list_double_heading_pane_g1_cp2_ParamLimits

0x87e5,	// (0x00042d1f) list_double_heading_pane_g1_cp2

0x8858,	// (0x00042d92) list_double_heading_pane_g2_cp2_ParamLimits

0x8858,	// (0x00042d92) list_double_heading_pane_g2_cp2

0xc8a8,	// (0x00046de2) list_double_heading_pane_t1_cp2_ParamLimits

0xc8a8,	// (0x00046de2) list_double_heading_pane_t1_cp2

0xc8be,	// (0x00046df8) list_double_heading_pane_t2_cp2_ParamLimits

0xc8be,	// (0x00046df8) list_double_heading_pane_t2_cp2

0x7ec0,	// (0x000423fa) aid_value_unit2

0x5b11,	// (0x0004004b) popup_preview_fixed_window

0x8255,	// (0x0004278f) bg_popup_preview_window_pane_cp02

0xc8d0,	// (0x00046e0a) list_preview_fixed_pane

0xc916,	// (0x00046e50) list_empty_pane_fp_ParamLimits

0xc916,	// (0x00046e50) list_empty_pane_fp

0xc916,	// (0x00046e50) list_single_cale_day_pane_fp_ParamLimits

0xc916,	// (0x00046e50) list_single_cale_day_pane_fp

0xc916,	// (0x00046e50) list_single_graphic_heading_pane_fp_ParamLimits

0xc916,	// (0x00046e50) list_single_graphic_heading_pane_fp

0xc916,	// (0x00046e50) list_single_graphic_pane_fp_ParamLimits

0xc916,	// (0x00046e50) list_single_graphic_pane_fp

0xc916,	// (0x00046e50) list_single_heading_pane_fp_ParamLimits

0xc916,	// (0x00046e50) list_single_heading_pane_fp

0xc916,	// (0x00046e50) list_single_pane_fp_ParamLimits

0xc916,	// (0x00046e50) list_single_pane_fp

0xc92c,	// (0x00046e66) list_single_pane_fp_g1_ParamLimits

0xc92c,	// (0x00046e66) list_single_pane_fp_g1

0x87e5,	// (0x00042d1f) list_single_pane_fp_g2_ParamLimits

0x87e5,	// (0x00042d1f) list_single_pane_fp_g2

0x8858,	// (0x00042d92) list_single_pane_fp_g3_ParamLimits

0x8858,	// (0x00042d92) list_single_pane_fp_g3

0xc938,	// (0x00046e72) list_single_pane_fp_g4_ParamLimits

0xc938,	// (0x00046e72) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0004a0bb) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0004a0bb) list_single_pane_fp_g

0x55b1,	// (0x0003faeb) list_single_pane_fp_t1_ParamLimits

0x55b1,	// (0x0003faeb) list_single_pane_fp_t1

0x55c8,	// (0x0003fb02) list_single_graphic_pane_fp_g1_ParamLimits

0x55c8,	// (0x0003fb02) list_single_graphic_pane_fp_g1

0xc92c,	// (0x00046e66) list_single_graphic_pane_fp_g2_ParamLimits

0xc92c,	// (0x00046e66) list_single_graphic_pane_fp_g2

0x87e5,	// (0x00042d1f) list_single_graphic_pane_fp_g3_ParamLimits

0x87e5,	// (0x00042d1f) list_single_graphic_pane_fp_g3

0x8858,	// (0x00042d92) list_single_graphic_pane_fp_g4_ParamLimits

0x8858,	// (0x00042d92) list_single_graphic_pane_fp_g4

0xc938,	// (0x00046e72) list_single_graphic_pane_fp_g5_ParamLimits

0xc938,	// (0x00046e72) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004a0c4) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004a0c4) list_single_graphic_pane_fp_g

0x55d4,	// (0x0003fb0e) list_single_graphic_pane_fp_t1_ParamLimits

0x55d4,	// (0x0003fb0e) list_single_graphic_pane_fp_t1

0x55c8,	// (0x0003fb02) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x55c8,	// (0x0003fb02) list_single_graphic_heading_pane_fp_g1

0xc92c,	// (0x00046e66) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x00046e66) list_single_graphic_heading_pane_fp_g2

0x87e5,	// (0x00042d1f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x87e5,	// (0x00042d1f) list_single_graphic_heading_pane_fp_g3

0x8858,	// (0x00042d92) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8858,	// (0x00042d92) list_single_graphic_heading_pane_fp_g4

0xc938,	// (0x00046e72) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc938,	// (0x00046e72) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004a0c4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004a0c4) list_single_graphic_heading_pane_fp_g

0x55ea,	// (0x0003fb24) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x55ea,	// (0x0003fb24) list_single_graphic_heading_pane_fp_t1

0x5600,	// (0x0003fb3a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5600,	// (0x0003fb3a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0004a0cf) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0004a0cf) list_single_graphic_heading_pane_fp_t

0x5612,	// (0x0003fb4c) list_single_cale_day_pane_fp_g1_ParamLimits

0x5612,	// (0x0003fb4c) list_single_cale_day_pane_fp_g1

0xc944,	// (0x00046e7e) list_single_cale_day_pane_fp_g2_ParamLimits

0xc944,	// (0x00046e7e) list_single_cale_day_pane_fp_g2

0x7159,	// (0x00041693) list_single_cale_day_pane_fp_g3_ParamLimits

0x7159,	// (0x00041693) list_single_cale_day_pane_fp_g3

0x7181,	// (0x000416bb) list_single_cale_day_pane_fp_g4_ParamLimits

0x7181,	// (0x000416bb) list_single_cale_day_pane_fp_g4

0x71a5,	// (0x000416df) list_single_cale_day_pane_fp_g5_ParamLimits

0x71a5,	// (0x000416df) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0004a0d4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0004a0d4) list_single_cale_day_pane_fp_g

0x564a,	// (0x0003fb84) list_single_cale_day_pane_fp_t1_ParamLimits

0x564a,	// (0x0003fb84) list_single_cale_day_pane_fp_t1

0x5670,	// (0x0003fbaa) list_single_cale_day_pane_fp_t2_ParamLimits

0x5670,	// (0x0003fbaa) list_single_cale_day_pane_fp_t2

0x5689,	// (0x0003fbc3) list_single_cale_day_pane_fp_t3_ParamLimits

0x5689,	// (0x0003fbc3) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0004a0df) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0004a0df) list_single_cale_day_pane_fp_t

0xc92c,	// (0x00046e66) list_empty_pane_fp_g1_ParamLimits

0xc92c,	// (0x00046e66) list_empty_pane_fp_g1

0x56a2,	// (0x0003fbdc) list_empty_pane_fp_t1

0x56b0,	// (0x0003fbea) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0004a0e6) list_empty_pane_fp_t

0xc92c,	// (0x00046e66) list_single_heading_pane_fp_g1_ParamLimits

0xc92c,	// (0x00046e66) list_single_heading_pane_fp_g1

0x87e5,	// (0x00042d1f) list_single_heading_pane_fp_g2_ParamLimits

0x87e5,	// (0x00042d1f) list_single_heading_pane_fp_g2

0x8858,	// (0x00042d92) list_single_heading_pane_fp_g3_ParamLimits

0x8858,	// (0x00042d92) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0004a0eb) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0004a0eb) list_single_heading_pane_fp_g

0x56be,	// (0x0003fbf8) list_single_heading_pane_fp_t1_ParamLimits

0x56be,	// (0x0003fbf8) list_single_heading_pane_fp_t1

0x56d0,	// (0x0003fc0a) list_single_heading_pane_fp_t2_ParamLimits

0x56d0,	// (0x0003fc0a) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0004a0f2) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0004a0f2) list_single_heading_pane_fp_t

0x8a3e,	// (0x00042f78) aid_size_cell_fast

0x81c5,	// (0x000426ff) soft_indicator_pane_cp1_t1

0x8a78,	// (0x00042fb2) cell_app_pane_cp2_ParamLimits

0x8a78,	// (0x00042fb2) cell_app_pane_cp2

0x6f1d,	// (0x00041457) fep_hwr_candidate_drop_down_list_pane

0x2e36,	// (0x0003d370) fep_hwr_candidate_pane_g3_ParamLimits

0x2e36,	// (0x0003d370) fep_hwr_candidate_pane_g3

0x2e43,	// (0x0003d37d) fep_hwr_candidate_pane_g4_ParamLimits

0x2e43,	// (0x0003d37d) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x0004a066) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x0004a066) fep_hwr_candidate_pane_g

0xc400,	// (0x0004693a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc400,	// (0x0004693a) fep_vkb_candidate_drop_down_list_pane

0xc803,	// (0x00046d3d) fep_vkb_candidate_pane_g3

0xc80b,	// (0x00046d45) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x0004a093) fep_vkb_candidate_pane_g

0xc50b,	// (0x00046a45) cell_hwr_candidate_pane_g1_ParamLimits

0xc822,	// (0x00046d5c) cell_hwr_candidate_pane_g3_ParamLimits

0xc822,	// (0x00046d5c) cell_hwr_candidate_pane_g3

0xc843,	// (0x00046d7d) cell_hwr_candidate_pane_g4_ParamLimits

0xc843,	// (0x00046d7d) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0004a0ad) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0004a0ad) cell_hwr_candidate_pane_g

0xc864,	// (0x00046d9e) cell_vkb_candidate_pane_g3_ParamLimits

0xc864,	// (0x00046d9e) cell_vkb_candidate_pane_g3

0xc87f,	// (0x00046db9) cell_vkb_candidate_pane_g4_ParamLimits

0xc87f,	// (0x00046db9) cell_vkb_candidate_pane_g4

0xc950,	// (0x00046e8a) cell_app_pane_cp2_g1_ParamLimits

0xc950,	// (0x00046e8a) cell_app_pane_cp2_g1

0xc96e,	// (0x00046ea8) cell_app_pane_cp2_g2_ParamLimits

0xc96e,	// (0x00046ea8) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0004a0f7) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0004a0f7) cell_app_pane_cp2_g

0xc97a,	// (0x00046eb4) cell_app_pane_cp2_t1_ParamLimits

0xc97a,	// (0x00046eb4) cell_app_pane_cp2_t1

0x884a,	// (0x00042d84) grid_highlight_pane_cp1_ParamLimits

0x884a,	// (0x00042d84) grid_highlight_pane_cp1

0x71c9,	// (0x00041703) cell_hwr_candidate_pane_cp1_ParamLimits

0x71c9,	// (0x00041703) cell_hwr_candidate_pane_cp1

0xc50b,	// (0x00046a45) fep_hwr_candidate_drop_down_list_pane_g1

0xc98c,	// (0x00046ec6) fep_hwr_candidate_drop_down_list_pane_g2

0xc999,	// (0x00046ed3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0004a0fc) fep_hwr_candidate_drop_down_list_pane_g

0x71e8,	// (0x00041722) fep_hwr_candidate_drop_down_list_scroll_pane

0x71f1,	// (0x0004172b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71f1,	// (0x0004172b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71fe,	// (0x00041738) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71fe,	// (0x00041738) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x720b,	// (0x00041745) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x720b,	// (0x00041745) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc864,	// (0x00046d9e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc864,	// (0x00046d9e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc87f,	// (0x00046db9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc87f,	// (0x00046db9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7218,	// (0x00041752) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7218,	// (0x00041752) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7233,	// (0x0004176d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7233,	// (0x0004176d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x724e,	// (0x00041788) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x724e,	// (0x00041788) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0004a103) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0004a103) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9a6,	// (0x00046ee0) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9a6,	// (0x00046ee0) cell_vkb_candidate_pane_cp1

0xc50b,	// (0x00046a45) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc50b,	// (0x00046a45) fep_vkb_candidate_drop_down_list_pane_g1

0xc98c,	// (0x00046ec6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98c,	// (0x00046ec6) fep_vkb_candidate_drop_down_list_pane_g2

0xc999,	// (0x00046ed3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc999,	// (0x00046ed3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0004a0fc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x0004a0fc) fep_vkb_candidate_drop_down_list_pane_g

0xc9c6,	// (0x00046f00) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9c6,	// (0x00046f00) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9d3,	// (0x00046f0d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9d3,	// (0x00046f0d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9e0,	// (0x00046f1a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9e0,	// (0x00046f1a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9ec,	// (0x00046f26) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9ec,	// (0x00046f26) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc822,	// (0x00046d5c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc822,	// (0x00046d5c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc843,	// (0x00046d7d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc843,	// (0x00046d7d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9f8,	// (0x00046f32) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9f8,	// (0x00046f32) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca19,	// (0x00046f53) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca19,	// (0x00046f53) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca3a,	// (0x00046f74) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca3a,	// (0x00046f74) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0004a114) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0004a114) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7ef6,	// (0x00042430) title_pane_g1_ParamLimits

0x7f03,	// (0x0004243d) title_pane_g2_ParamLimits

0xf54e,	// (0x00049a88) title_pane_g_ParamLimits

0x8e82,	// (0x000433bc) aid_call2_pane

0x8e8a,	// (0x000433c4) aid_call_pane

0x8e92,	// (0x000433cc) popup_clock_analogue_window_g1

0x8e92,	// (0x000433cc) popup_clock_analogue_window_g2

0x5f30,	// (0x0004046a) popup_clock_analogue_window_g3

0x5f39,	// (0x00040473) popup_clock_analogue_window_g4

0x7ee2,	// (0x0004241c) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00049c37) popup_clock_analogue_window_g

0x5f41,	// (0x0004047b) popup_clock_analogue_window_t1

0x5f4f,	// (0x00040489) clock_digital_number_pane_ParamLimits

0x5f4f,	// (0x00040489) clock_digital_number_pane

0x5f5b,	// (0x00040495) clock_digital_number_pane_cp02_ParamLimits

0x5f5b,	// (0x00040495) clock_digital_number_pane_cp02

0x5f67,	// (0x000404a1) clock_digital_number_pane_cp03_ParamLimits

0x5f67,	// (0x000404a1) clock_digital_number_pane_cp03

0x5f73,	// (0x000404ad) clock_digital_number_pane_cp04_ParamLimits

0x5f73,	// (0x000404ad) clock_digital_number_pane_cp04

0x5f7f,	// (0x000404b9) clock_digital_separator_pane_ParamLimits

0x5f7f,	// (0x000404b9) clock_digital_separator_pane

0x5f8b,	// (0x000404c5) popup_clock_digital_window_t1_ParamLimits

0x5f8b,	// (0x000404c5) popup_clock_digital_window_t1

0x7ee2,	// (0x0004241c) clock_digital_number_pane_g1

0x7ee2,	// (0x0004241c) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00049c42) clock_digital_number_pane_g

0x7ee2,	// (0x0004241c) clock_digital_separator_pane_g1

0x7ee2,	// (0x0004241c) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00049c42) clock_digital_separator_pane_g

0x97fa,	// (0x00043d34) aid_fill_nsta_ParamLimits

0x993c,	// (0x00043e76) indicator_nsta_pane_ParamLimits

0x9ac1,	// (0x00043ffb) popup_clock_analogue_window

0x9ac1,	// (0x00043ffb) popup_clock_digital_window

0x7fcc,	// (0x00042506) grid_indicator_nsta_pane_ParamLimits

0xbc75,	// (0x000461af) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x00049fe6) clock_nsta_pane_t

0x5ef4,	// (0x0004042e) aid_size_max_handle

0x5efe,	// (0x00040438) aid_size_min_handle

0x949e,	// (0x000439d8) editor_scroll_pane

0xca55,	// (0x00046f8f) ex_editor_pane

0x89ac,	// (0x00042ee6) scroll_pane_cp13

0x87dd,	// (0x00042d17) scroll_pane_cp14

0x8ec1,	// (0x000433fb) scroll_pane_cp36

0x8eed,	// (0x00043427) list_single_graphic_hl_pane_cp2_ParamLimits

0x8eed,	// (0x00043427) list_single_graphic_hl_pane_cp2

0x6d13,	// (0x0004124d) list_single_graphic_hl_pane_ParamLimits

0x6d13,	// (0x0004124d) list_single_graphic_hl_pane

0x56e6,	// (0x0003fc20) aid_size_min_hl_cp1

0xca5d,	// (0x00046f97) list_highlight_pane_cp34_ParamLimits

0xca5d,	// (0x00046f97) list_highlight_pane_cp34

0xca6e,	// (0x00046fa8) list_single_graphic_hl_pane_g1_ParamLimits

0xca6e,	// (0x00046fa8) list_single_graphic_hl_pane_g1

0x56ef,	// (0x0003fc29) list_single_graphic_hl_pane_g2_ParamLimits

0x56ef,	// (0x0003fc29) list_single_graphic_hl_pane_g2

0x56ef,	// (0x0003fc29) list_single_graphic_hl_pane_g3_ParamLimits

0x56ef,	// (0x0003fc29) list_single_graphic_hl_pane_g3

0x5cbc,	// (0x000401f6) list_single_graphic_hl_pane_g4_ParamLimits

0x5cbc,	// (0x000401f6) list_single_graphic_hl_pane_g4

0x7269,	// (0x000417a3) list_single_graphic_hl_pane_g5_ParamLimits

0x7269,	// (0x000417a3) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x0004a125) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x0004a125) list_single_graphic_hl_pane_g

0x56fb,	// (0x0003fc35) list_single_graphic_hl_pane_t1_ParamLimits

0x56fb,	// (0x0003fc35) list_single_graphic_hl_pane_t1

0xca7b,	// (0x00046fb5) aid_size_min_hl_cp2

0xca84,	// (0x00046fbe) list_highlight_pane_cp34_cp2_ParamLimits

0xca84,	// (0x00046fbe) list_highlight_pane_cp34_cp2

0xca6e,	// (0x00046fa8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca6e,	// (0x00046fa8) list_single_graphic_hl_pane_g1_cp2

0xca91,	// (0x00046fcb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca91,	// (0x00046fcb) list_single_graphic_hl_pane_g2_cp2

0xca9d,	// (0x00046fd7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca9d,	// (0x00046fd7) list_single_graphic_hl_pane_g3_cp2

0x93d7,	// (0x00043911) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x93d7,	// (0x00043911) list_single_graphic_hl_pane_g4_cp2

0xcaab,	// (0x00046fe5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcaab,	// (0x00046fe5) list_single_graphic_hl_pane_g5_cp2

0x6252,	// (0x0004078c) control_pane_g4_ParamLimits

0x6252,	// (0x0004078c) control_pane_g4

0x97d8,	// (0x00043d12) bg_popup_sub_pane_cp10_ParamLimits

0xc2a7,	// (0x000467e1) list_choice_list_pane_ParamLimits

0xc2b6,	// (0x000467f0) scroll_pane_cp23

0x8255,	// (0x0004278f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8d0,	// (0x00046e0a) list_preview_fixed_pane_ParamLimits

0xc8e6,	// (0x00046e20) list_preview_fixed_pane_cp_ParamLimits

0xc8e6,	// (0x00046e20) list_preview_fixed_pane_cp

0xc8f2,	// (0x00046e2c) popup_preview_fixed_window_g1_ParamLimits

0xc8f2,	// (0x00046e2c) popup_preview_fixed_window_g1

0xc8fe,	// (0x00046e38) popup_preview_fixed_window_g2_ParamLimits

0xc8fe,	// (0x00046e38) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0004a0b4) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0004a0b4) popup_preview_fixed_window_g

0x5e68,	// (0x000403a2) aid_navi_side_left_pane_ParamLimits

0x5e7d,	// (0x000403b7) aid_navi_side_right_pane_ParamLimits

0x5e95,	// (0x000403cf) navi_icon_pane_stacon_ParamLimits

0x5ea9,	// (0x000403e3) navi_navi_pane_stacon_ParamLimits

0x5e95,	// (0x000403cf) navi_text_pane_stacon_ParamLimits

0x7ed8,	// (0x00042412) main_text_info_pane

0xcad5,	// (0x0004700f) listscroll_text_info_pane

0xcadd,	// (0x00047017) list_text_info_pane_ParamLimits

0xcadd,	// (0x00047017) list_text_info_pane

0xcaec,	// (0x00047026) scroll_pane_cp24_ParamLimits

0xcaec,	// (0x00047026) scroll_pane_cp24

0xcb0a,	// (0x00047044) list_text_info_pane_t1_ParamLimits

0xcb0a,	// (0x00047044) list_text_info_pane_t1

0x63a4,	// (0x000408de) popup_fast_swap2_window_ParamLimits

0x63a4,	// (0x000408de) popup_fast_swap2_window

0xcb3f,	// (0x00047079) aid_size_cell_fast2

0x7ed8,	// (0x00042412) bg_popup_window_pane_cp17

0xa152,	// (0x0004468c) heading_pane_cp2

0x8498,	// (0x000429d2) listscroll_fast2_pane

0xcb49,	// (0x00047083) grid_fast2_pane

0xcb53,	// (0x0004708d) listscroll_fast2_pane_g1

0xcb5b,	// (0x00047095) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0004a130) listscroll_fast2_pane_g

0x89ac,	// (0x00042ee6) scroll_pane_cp26

0xcb65,	// (0x0004709f) cell_fast2_pane_ParamLimits

0xcb65,	// (0x0004709f) cell_fast2_pane

0xcb7a,	// (0x000470b4) cell_fast2_pane_g1

0xcb83,	// (0x000470bd) cell_fast2_pane_g2

0xcb8c,	// (0x000470c6) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x0004a135) cell_fast2_pane_g

0x8582,	// (0x00042abc) grid_highlight_pane_cp9

0x8597,	// (0x00042ad1) main_eswt_pane_ParamLimits

0x8597,	// (0x00042ad1) main_eswt_pane

0xcb01,	// (0x0004703b) list_single_text_info_pane

0xcb94,	// (0x000470ce) eswt_ctrl_button_pane

0xcb94,	// (0x000470ce) eswt_ctrl_canvas_pane

0xcb9c,	// (0x000470d6) eswt_ctrl_combo_pane

0xcb94,	// (0x000470ce) eswt_ctrl_default_pane

0xcb94,	// (0x000470ce) eswt_ctrl_label_pane

0xcba4,	// (0x000470de) eswt_ctrl_wait_pane

0xcbac,	// (0x000470e6) eswt_shell_pane

0x7ed8,	// (0x00042412) listscroll_eswt_app_pane

0xcbcc,	// (0x00047106) popup_eswt_tasktip_window_ParamLimits

0xcbcc,	// (0x00047106) popup_eswt_tasktip_window

0x9d56,	// (0x00044290) bg_popup_window_pane_cp18

0xcbdd,	// (0x00047117) eswt_control_pane_g1_ParamLimits

0xcbdd,	// (0x00047117) eswt_control_pane_g1

0xcbea,	// (0x00047124) eswt_control_pane_g2_ParamLimits

0xcbea,	// (0x00047124) eswt_control_pane_g2

0xcbf7,	// (0x00047131) eswt_control_pane_g3_ParamLimits

0xcbf7,	// (0x00047131) eswt_control_pane_g3

0xcc04,	// (0x0004713e) eswt_control_pane_g4_ParamLimits

0xcc04,	// (0x0004713e) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x0004a13c) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x0004a13c) eswt_control_pane_g

0x884a,	// (0x00042d84) bg_button_pane_ParamLimits

0x884a,	// (0x00042d84) bg_button_pane

0x8597,	// (0x00042ad1) common_borders_pane_copy2_ParamLimits

0x8597,	// (0x00042ad1) common_borders_pane_copy2

0xcc11,	// (0x0004714b) control_button_pane_g1_ParamLimits

0xcc11,	// (0x0004714b) control_button_pane_g1

0xcc1d,	// (0x00047157) control_button_pane_g2_ParamLimits

0xcc1d,	// (0x00047157) control_button_pane_g2

0xcc29,	// (0x00047163) control_button_pane_g3_ParamLimits

0xcc29,	// (0x00047163) control_button_pane_g3

0x0002,

0xfc0b,	// (0x0004a145) control_button_pane_g_ParamLimits

0xfc0b,	// (0x0004a145) control_button_pane_g

0xcc3d,	// (0x00047177) control_button_pane_t1

0xcc4b,	// (0x00047185) control_button_pane_t2

0x0001,

0xfc12,	// (0x0004a14c) control_button_pane_t

0x9ce2,	// (0x0004421c) bg_button_pane_g1

0x9cea,	// (0x00044224) bg_button_pane_g2

0x9cf2,	// (0x0004422c) bg_button_pane_g3

0x9cfa,	// (0x00044234) bg_button_pane_g4

0x9d02,	// (0x0004423c) bg_button_pane_g5

0x9d0a,	// (0x00044244) bg_button_pane_g6

0x9d12,	// (0x0004424c) bg_button_pane_g7

0x9d1a,	// (0x00044254) bg_button_pane_g8

0x9d22,	// (0x0004425c) bg_button_pane_g9

0x0008,

0xf866,	// (0x00049da0) bg_button_pane_g

0xc262,	// (0x0004679c) common_borders_pane_ParamLimits

0xc262,	// (0x0004679c) common_borders_pane

0xcbdd,	// (0x00047117) eswt_control_pane_g1_copy1_ParamLimits

0xcbdd,	// (0x00047117) eswt_control_pane_g1_copy1

0xcbea,	// (0x00047124) eswt_control_pane_g2_copy1_ParamLimits

0xcbea,	// (0x00047124) eswt_control_pane_g2_copy1

0xcbf7,	// (0x00047131) eswt_control_pane_g3_copy1_ParamLimits

0xcbf7,	// (0x00047131) eswt_control_pane_g3_copy1

0xcc04,	// (0x0004713e) eswt_control_pane_g4_copy1_ParamLimits

0xcc04,	// (0x0004713e) eswt_control_pane_g4_copy1

0xc29d,	// (0x000467d7) bg_eswt_ctrl_canvas_pane_g1

0xc262,	// (0x0004679c) common_borders_pane_cp2_ParamLimits

0xc262,	// (0x0004679c) common_borders_pane_cp2

0xc262,	// (0x0004679c) common_borders_pane_cp3_ParamLimits

0xc262,	// (0x0004679c) common_borders_pane_cp3

0xcc59,	// (0x00047193) separator_horizontal_pane

0xcc61,	// (0x0004719b) separator_vertical_pane

0xcbdd,	// (0x00047117) eswt_control_pane_g1_copy2_ParamLimits

0xcbdd,	// (0x00047117) eswt_control_pane_g1_copy2

0xcbea,	// (0x00047124) eswt_control_pane_g2_copy2_ParamLimits

0xcbea,	// (0x00047124) eswt_control_pane_g2_copy2

0xcbf7,	// (0x00047131) eswt_control_pane_g3_copy2_ParamLimits

0xcbf7,	// (0x00047131) eswt_control_pane_g3_copy2

0xcc04,	// (0x0004713e) eswt_control_pane_g4_copy2_ParamLimits

0xcc04,	// (0x0004713e) eswt_control_pane_g4_copy2

0x7ed8,	// (0x00042412) common_borders_pane_cp4

0xcc6a,	// (0x000471a4) separator_horizontal_pane_g1

0xcc73,	// (0x000471ad) separator_horizontal_pane_g2

0xcc7c,	// (0x000471b6) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x0004a151) separator_horizontal_pane_g

0xcbdd,	// (0x00047117) eswt_control_pane_g1_copy3_ParamLimits

0xcbdd,	// (0x00047117) eswt_control_pane_g1_copy3

0xcbea,	// (0x00047124) eswt_control_pane_g2_copy3_ParamLimits

0xcbea,	// (0x00047124) eswt_control_pane_g2_copy3

0xcbf7,	// (0x00047131) eswt_control_pane_g3_copy3_ParamLimits

0xcbf7,	// (0x00047131) eswt_control_pane_g3_copy3

0xcc04,	// (0x0004713e) eswt_control_pane_g4_copy3_ParamLimits

0xcc04,	// (0x0004713e) eswt_control_pane_g4_copy3

0x7ed8,	// (0x00042412) common_borders_pane_cp5

0xcc85,	// (0x000471bf) separator_vertical_pane_g1

0xcc8e,	// (0x000471c8) separator_vertical_pane_g2

0xcc97,	// (0x000471d1) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x0004a158) separator_vertical_pane_g

0xcbdd,	// (0x00047117) eswt_control_pane_g1_copy4_ParamLimits

0xcbdd,	// (0x00047117) eswt_control_pane_g1_copy4

0xcbea,	// (0x00047124) eswt_control_pane_g2_copy4_ParamLimits

0xcbea,	// (0x00047124) eswt_control_pane_g2_copy4

0xcbf7,	// (0x00047131) eswt_control_pane_g3_copy4_ParamLimits

0xcbf7,	// (0x00047131) eswt_control_pane_g3_copy4

0xcc04,	// (0x0004713e) eswt_control_pane_g4_copy4_ParamLimits

0xcc04,	// (0x0004713e) eswt_control_pane_g4_copy4

0xcca0,	// (0x000471da) eswt_ctrl_combo_button_pane

0xcca8,	// (0x000471e2) eswt_ctrl_input_pane

0xccb0,	// (0x000471ea) popup_choice_list_window_cp70

0xccb8,	// (0x000471f2) eswt_ctrl_input_pane_t1

0x7ed8,	// (0x00042412) input_focus_pane_cp70

0xc262,	// (0x0004679c) bg_button_pane_cp70_ParamLimits

0xc262,	// (0x0004679c) bg_button_pane_cp70

0xccc6,	// (0x00047200) eswt_ctrl_combo_button_pane_g1

0xccce,	// (0x00047208) wait_bar_pane_cp70

0x9d56,	// (0x00044290) bg_popup_window_pane_cp70_ParamLimits

0x9d56,	// (0x00044290) bg_popup_window_pane_cp70

0xccd6,	// (0x00047210) popup_eswt_tasktip_window_t1

0xccec,	// (0x00047226) wait_bar_pane_cp71_ParamLimits

0xccec,	// (0x00047226) wait_bar_pane_cp71

0xccf8,	// (0x00047232) grid_eswt_app_pane

0x8cce,	// (0x00043208) scroll_pane_cp70

0xcd01,	// (0x0004723b) cell_eswt_app_pane_ParamLimits

0xcd01,	// (0x0004723b) cell_eswt_app_pane

0xcd35,	// (0x0004726f) cell_eswt_app_pane_g1_ParamLimits

0xcd35,	// (0x0004726f) cell_eswt_app_pane_g1

0xcd64,	// (0x0004729e) cell_eswt_app_pane_g2_ParamLimits

0xcd64,	// (0x0004729e) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x0004a15f) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x0004a15f) cell_eswt_app_pane_g

0xcd88,	// (0x000472c2) cell_eswt_app_pane_t1_ParamLimits

0xcd88,	// (0x000472c2) cell_eswt_app_pane_t1

0xcdba,	// (0x000472f4) grid_highlight_pane_cp70_ParamLimits

0xcdba,	// (0x000472f4) grid_highlight_pane_cp70

0x9373,	// (0x000438ad) set_content_pane_g1

0x9739,	// (0x00043c73) status_small_volume_pane

0x727d,	// (0x000417b7) status_small_volume_pane_g1

0x7285,	// (0x000417bf) volume_small2_pane

0x728e,	// (0x000417c8) volume_small2_pane_g1

0x7297,	// (0x000417d1) volume_small2_pane_g2

0x72a0,	// (0x000417da) volume_small2_pane_g3

0x72a9,	// (0x000417e3) volume_small2_pane_g4

0x72b2,	// (0x000417ec) volume_small2_pane_g5

0x72bb,	// (0x000417f5) volume_small2_pane_g6

0x72c4,	// (0x000417fe) volume_small2_pane_g7

0x72cd,	// (0x00041807) volume_small2_pane_g8

0x72d6,	// (0x00041810) volume_small2_pane_g9

0x72df,	// (0x00041819) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x0004a164) volume_small2_pane_g

0xc653,	// (0x00046b8d) fep_vkb_top_text_pane_g1_ParamLimits

0xc66e,	// (0x00046ba8) fep_vkb_top_text_pane_t1_ParamLimits

0xc90a,	// (0x00046e44) popup_preview_fixed_window_g3_ParamLimits

0xc90a,	// (0x00046e44) popup_preview_fixed_window_g3

0x684b,	// (0x00040d85) popup_toolbar_trans_pane

0xb0b4,	// (0x000455ee) aid_height_set_list_ParamLimits

0xb0c5,	// (0x000455ff) aid_size_parent_ParamLimits

0x97d8,	// (0x00043d12) list_highlight_pane_cp2_ParamLimits

0x9373,	// (0x000438ad) set_content_pane_g1_ParamLimits

0x6d32,	// (0x0004126c) list_single_image_pane_ParamLimits

0x6d32,	// (0x0004126c) list_single_image_pane

0xcdc6,	// (0x00047300) aid_size_cell_image_ParamLimits

0xcdc6,	// (0x00047300) aid_size_cell_image

0xcdd3,	// (0x0004730d) grid_single_image_pane_ParamLimits

0xcdd3,	// (0x0004730d) grid_single_image_pane

0xcddf,	// (0x00047319) list_single_image_pane_g1_ParamLimits

0xcddf,	// (0x00047319) list_single_image_pane_g1

0xcdeb,	// (0x00047325) list_single_image_pane_g2_ParamLimits

0xcdeb,	// (0x00047325) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x0004a179) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x0004a179) list_single_image_pane_g

0xcdff,	// (0x00047339) list_single_image_pane_t1_ParamLimits

0xcdff,	// (0x00047339) list_single_image_pane_t1

0xce15,	// (0x0004734f) cell_image_list_pane_ParamLimits

0xce15,	// (0x0004734f) cell_image_list_pane

0xce29,	// (0x00047363) cell_image_list_pane_g1

0xce32,	// (0x0004736c) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0004a17e) cell_image_list_pane_g

0xce3b,	// (0x00047375) aid_size_cell_tb_trans_pane

0x884a,	// (0x00042d84) bg_tb_trans_pane

0xce4d,	// (0x00047387) grid_tb_trans_pane

0x9ce2,	// (0x0004421c) bg_tb_trans_pane_g1

0x9cea,	// (0x00044224) bg_tb_trans_pane_g2

0x9cf2,	// (0x0004422c) bg_tb_trans_pane_g3

0x9cfa,	// (0x00044234) bg_tb_trans_pane_g4

0x9d02,	// (0x0004423c) bg_tb_trans_pane_g5

0x9d1a,	// (0x00044254) bg_tb_trans_pane_g6

0x9d22,	// (0x0004425c) bg_tb_trans_pane_g7

0x9d0a,	// (0x00044244) bg_tb_trans_pane_g8

0x9d12,	// (0x0004424c) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x0004a183) bg_tb_trans_pane_g

0xce61,	// (0x0004739b) cell_toolbar_trans_pane_ParamLimits

0xce61,	// (0x0004739b) cell_toolbar_trans_pane

0xc29d,	// (0x000467d7) cell_toolbar_trans_pane_g1

0xbe48,	// (0x00046382) list_form2_midp_pane_t1

0xbe56,	// (0x00046390) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x0004a02c) list_form2_midp_pane_t

0xbe64,	// (0x0004639e) scroll_pane_cp51_ParamLimits

0xc020,	// (0x0004655a) form2_midp_wait_pane_g1

0xc029,	// (0x00046563) form2_midp_wait_pane_g2

0xc032,	// (0x0004656c) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x0004a041) form2_midp_wait_pane_g

0x7fcc,	// (0x00042506) list_highlight_pane_cp21_ParamLimits

0xc080,	// (0x000465ba) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc08f,	// (0x000465c9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6cab,	// (0x000411e5) list_single_2graphic_im_pane_ParamLimits

0x6cab,	// (0x000411e5) list_single_2graphic_im_pane

0xce87,	// (0x000473c1) list_single_2graphic_im_pane_g1_ParamLimits

0xce87,	// (0x000473c1) list_single_2graphic_im_pane_g1

0xce98,	// (0x000473d2) list_single_2graphic_im_pane_g2_ParamLimits

0xce98,	// (0x000473d2) list_single_2graphic_im_pane_g2

0xcea4,	// (0x000473de) list_single_2graphic_im_pane_g3_ParamLimits

0xcea4,	// (0x000473de) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x0004a196) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x0004a196) list_single_2graphic_im_pane_g

0xcec4,	// (0x000473fe) list_single_2graphic_im_pane_t1_ParamLimits

0xcec4,	// (0x000473fe) list_single_2graphic_im_pane_t1

0xc916,	// (0x00046e50) list_single_graphic_2heading_pane_fp_ParamLimits

0xc916,	// (0x00046e50) list_single_graphic_2heading_pane_fp

0x55c8,	// (0x0003fb02) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x55c8,	// (0x0003fb02) list_single_graphic_2heading_pane_fp_g1

0xc92c,	// (0x00046e66) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x00046e66) list_single_graphic_2heading_pane_fp_g2

0x87e5,	// (0x00042d1f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x87e5,	// (0x00042d1f) list_single_graphic_2heading_pane_fp_g3

0x8858,	// (0x00042d92) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8858,	// (0x00042d92) list_single_graphic_2heading_pane_fp_g4

0xc938,	// (0x00046e72) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc938,	// (0x00046e72) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004a0c4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004a0c4) list_single_graphic_2heading_pane_fp_g

0x5711,	// (0x0003fc4b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5711,	// (0x0003fc4b) list_single_graphic_2heading_pane_fp_t1

0x5600,	// (0x0003fb3a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5600,	// (0x0003fb3a) list_single_graphic_2heading_pane_fp_t2

0x5727,	// (0x0003fc61) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5727,	// (0x0003fc61) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x0004a19f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x0004a19f) list_single_graphic_2heading_pane_fp_t

0xc329,	// (0x00046863) fep_hwr_write_pane_g5_ParamLimits

0xc329,	// (0x00046863) fep_hwr_write_pane_g5

0xc335,	// (0x0004686f) fep_hwr_write_pane_g6_ParamLimits

0xc335,	// (0x0004686f) fep_hwr_write_pane_g6

0xcbac,	// (0x000470e6) eswt_shell_pane_ParamLimits

0x9d56,	// (0x00044290) bg_popup_window_pane_cp18_ParamLimits

0xb013,	// (0x0004554d) heading_pane_cp70

0xccd6,	// (0x00047210) popup_eswt_tasktip_window_t1_ParamLimits

0x984f,	// (0x00043d89) aid_touch_tab_arrow_left

0x985b,	// (0x00043d95) aid_touch_tab_arrow_right

0x7f14,	// (0x0004244e) title_pane_g3_ParamLimits

0x7f14,	// (0x0004244e) title_pane_g3

0x8809,	// (0x00042d43) set_value_pane_g1

0x684b,	// (0x00040d85) popup_toolbar_trans_pane_ParamLimits

0xce3b,	// (0x00047375) aid_size_cell_tb_trans_pane_ParamLimits

0x884a,	// (0x00042d84) bg_tb_trans_pane_ParamLimits

0xce4d,	// (0x00047387) grid_tb_trans_pane_ParamLimits

0x8255,	// (0x0004278f) cont_note_pane_ParamLimits

0x8255,	// (0x0004278f) cont_note_pane

0x8597,	// (0x00042ad1) cont_snote2_single_text_pane_ParamLimits

0x8597,	// (0x00042ad1) cont_snote2_single_text_pane

0x8597,	// (0x00042ad1) cont_snote2_single_graphic_pane_ParamLimits

0x8597,	// (0x00042ad1) cont_snote2_single_graphic_pane

0xa368,	// (0x000448a2) cont_note_wait_pane_ParamLimits

0xa368,	// (0x000448a2) cont_note_wait_pane

0xa368,	// (0x000448a2) cont_note_image_pane_ParamLimits

0xa368,	// (0x000448a2) cont_note_image_pane

0xcef5,	// (0x0004742f) popup_note2_window_g1_ParamLimits

0xcef5,	// (0x0004742f) popup_note2_window_g1

0xcf26,	// (0x00047460) popup_note2_window_t1_ParamLimits

0xcf26,	// (0x00047460) popup_note2_window_t1

0xcf6b,	// (0x000474a5) popup_note2_window_t2_ParamLimits

0xcf6b,	// (0x000474a5) popup_note2_window_t2

0xcfb0,	// (0x000474ea) popup_note2_window_t3_ParamLimits

0xcfb0,	// (0x000474ea) popup_note2_window_t3

0xcff5,	// (0x0004752f) popup_note2_window_t4_ParamLimits

0xcff5,	// (0x0004752f) popup_note2_window_t4

0x82cd,	// (0x00042807) popup_note2_window_t5_ParamLimits

0x82cd,	// (0x00042807) popup_note2_window_t5

0x0004,

0xfc71,	// (0x0004a1ab) popup_note2_window_t_ParamLimits

0xfc71,	// (0x0004a1ab) popup_note2_window_t

0xd024,	// (0x0004755e) popup_note2_image_window_g1_ParamLimits

0xd024,	// (0x0004755e) popup_note2_image_window_g1

0xd030,	// (0x0004756a) popup_note2_image_window_g2_ParamLimits

0xd030,	// (0x0004756a) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x0004a1b6) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x0004a1b6) popup_note2_image_window_g

0xd042,	// (0x0004757c) popup_note2_image_window_t1_ParamLimits

0xd042,	// (0x0004757c) popup_note2_image_window_t1

0xd05a,	// (0x00047594) popup_note2_image_window_t2_ParamLimits

0xd05a,	// (0x00047594) popup_note2_image_window_t2

0xd072,	// (0x000475ac) popup_note2_image_window_t3_ParamLimits

0xd072,	// (0x000475ac) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x0004a1bb) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x0004a1bb) popup_note2_image_window_t

0xa376,	// (0x000448b0) popup_note2_wait_window_g1_ParamLimits

0xa376,	// (0x000448b0) popup_note2_wait_window_g1

0xd08e,	// (0x000475c8) popup_note2_wait_window_g2_ParamLimits

0xd08e,	// (0x000475c8) popup_note2_wait_window_g2

0xa38e,	// (0x000448c8) popup_note2_wait_window_g3_ParamLimits

0xa38e,	// (0x000448c8) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x0004a1c2) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x0004a1c2) popup_note2_wait_window_g

0xd09a,	// (0x000475d4) popup_note2_wait_window_t1_ParamLimits

0xd09a,	// (0x000475d4) popup_note2_wait_window_t1

0xd0b8,	// (0x000475f2) popup_note2_wait_window_t2_ParamLimits

0xd0b8,	// (0x000475f2) popup_note2_wait_window_t2

0xd0d6,	// (0x00047610) popup_note2_wait_window_t3_ParamLimits

0xd0d6,	// (0x00047610) popup_note2_wait_window_t3

0xd0e8,	// (0x00047622) popup_note2_wait_window_t4_ParamLimits

0xd0e8,	// (0x00047622) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x0004a1c9) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x0004a1c9) popup_note2_wait_window_t

0xd0fa,	// (0x00047634) wait_bar2_pane_ParamLimits

0xd0fa,	// (0x00047634) wait_bar2_pane

0xd112,	// (0x0004764c) popup_snote2_single_text_window_g1_ParamLimits

0xd112,	// (0x0004764c) popup_snote2_single_text_window_g1

0xd13a,	// (0x00047674) popup_snote2_single_text_window_t1_ParamLimits

0xd13a,	// (0x00047674) popup_snote2_single_text_window_t1

0xd186,	// (0x000476c0) popup_snote2_single_text_window_t2_ParamLimits

0xd186,	// (0x000476c0) popup_snote2_single_text_window_t2

0xd1d2,	// (0x0004770c) popup_snote2_single_text_window_t3_ParamLimits

0xd1d2,	// (0x0004770c) popup_snote2_single_text_window_t3

0xd213,	// (0x0004774d) popup_snote2_single_text_window_t4_ParamLimits

0xd213,	// (0x0004774d) popup_snote2_single_text_window_t4

0xd249,	// (0x00047783) popup_snote2_single_text_window_t5_ParamLimits

0xd249,	// (0x00047783) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x0004a1d2) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x0004a1d2) popup_snote2_single_text_window_t

0xd274,	// (0x000477ae) popup_snote2_single_graphic_window_g1_ParamLimits

0xd274,	// (0x000477ae) popup_snote2_single_graphic_window_g1

0xd29c,	// (0x000477d6) popup_snote2_single_graphic_window_g2_ParamLimits

0xd29c,	// (0x000477d6) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x0004a1dd) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x0004a1dd) popup_snote2_single_graphic_window_g

0xd2c4,	// (0x000477fe) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2c4,	// (0x000477fe) popup_snote2_single_graphic_window_t1

0xd310,	// (0x0004784a) popup_snote2_single_graphic_window_t2_ParamLimits

0xd310,	// (0x0004784a) popup_snote2_single_graphic_window_t2

0xd1d2,	// (0x0004770c) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1d2,	// (0x0004770c) popup_snote2_single_graphic_window_t3

0xd213,	// (0x0004774d) popup_snote2_single_graphic_window_t4_ParamLimits

0xd213,	// (0x0004774d) popup_snote2_single_graphic_window_t4

0xd249,	// (0x00047783) popup_snote2_single_graphic_window_t5_ParamLimits

0xd249,	// (0x00047783) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x0004a1e2) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x0004a1e2) popup_snote2_single_graphic_window_t

0xbd1f,	// (0x00046259) clock_nsta_pane_cp2_t1

0xbd1f,	// (0x00046259) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x0004a002) clock_nsta_pane_cp2_t

0x4f1e,	// (0x0003f458) form_field_data_wide_pane_g1_ParamLimits

0x87e5,	// (0x00042d1f) form_field_data_wide_pane_g2_ParamLimits

0x87e5,	// (0x00042d1f) form_field_data_wide_pane_g2

0x8858,	// (0x00042d92) form_field_data_wide_pane_g3_ParamLimits

0x8858,	// (0x00042d92) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00049bba) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00049bba) form_field_data_wide_pane_g

0xbc11,	// (0x0004614b) grid_touch_3_pane_ParamLimits

0xbc11,	// (0x0004614b) grid_touch_3_pane

0xd35c,	// (0x00047896) cell_touch_3_pane_ParamLimits

0xd35c,	// (0x00047896) cell_touch_3_pane

0xc29d,	// (0x000467d7) cell_touch_3_pane_g1

0xc29d,	// (0x000467d7) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x0004a087) cell_touch_3_pane_g

0x82ff,	// (0x00042839) cont_query_data_pane

0x8307,	// (0x00042841) cont_query_data_pane_cp1

0xd38d,	// (0x000478c7) button_value_adjust_pane_cp7

0xd395,	// (0x000478cf) query_popup_pane_cp3

0x8f7e,	// (0x000434b8) bg_popup_sub_pane_cp22_ParamLimits

0x5faa,	// (0x000404e4) navi_navi_volume_pane_cp2

0x5fc2,	// (0x000404fc) popup_side_volume_key_window_g2

0x5fce,	// (0x00040508) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00049c50) popup_side_volume_key_window_g

0x5fe8,	// (0x00040522) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00049c57) popup_side_volume_key_window_t

0x9234,	// (0x0004376e) popup_side_volume_key_window_ParamLimits

0x5d12,	// (0x0004024c) list_double_graphic_pane_g4_ParamLimits

0x5d12,	// (0x0004024c) list_double_graphic_pane_g4

0x6cf0,	// (0x0004122a) list_single_2heading_msg_pane_ParamLimits

0x6cf0,	// (0x0004122a) list_single_2heading_msg_pane

0x72e8,	// (0x00041822) list_single_2heading_msg_pane_g1_ParamLimits

0x72e8,	// (0x00041822) list_single_2heading_msg_pane_g1

0x93d7,	// (0x00043911) list_single_2heading_msg_pane_g2_ParamLimits

0x93d7,	// (0x00043911) list_single_2heading_msg_pane_g2

0x72f4,	// (0x0004182e) list_single_2heading_msg_pane_g3_ParamLimits

0x72f4,	// (0x0004182e) list_single_2heading_msg_pane_g3

0x7300,	// (0x0004183a) list_single_2heading_msg_pane_g4_ParamLimits

0x7300,	// (0x0004183a) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x0004a1ed) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x0004a1ed) list_single_2heading_msg_pane_g

0x5747,	// (0x0003fc81) list_single_2heading_msg_pane_t1_ParamLimits

0x5747,	// (0x0003fc81) list_single_2heading_msg_pane_t1

0x576f,	// (0x0003fca9) list_single_2heading_msg_pane_t2_ParamLimits

0x576f,	// (0x0003fca9) list_single_2heading_msg_pane_t2

0x57a3,	// (0x0003fcdd) list_single_2heading_msg_pane_t3_ParamLimits

0x57a3,	// (0x0003fcdd) list_single_2heading_msg_pane_t3

0x57dc,	// (0x0003fd16) list_single_2heading_msg_pane_t4_ParamLimits

0x57dc,	// (0x0003fd16) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x0004a1f6) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x0004a1f6) list_single_2heading_msg_pane_t

0x7f20,	// (0x0004245a) title_pane_g4_ParamLimits

0x7f20,	// (0x0004245a) title_pane_g4

0x5db8,	// (0x000402f2) title_pane_stacon_g3_ParamLimits

0x5db8,	// (0x000402f2) title_pane_stacon_g3

0xceb8,	// (0x000473f2) list_single_2graphic_im_pane_g4_ParamLimits

0xceb8,	// (0x000473f2) list_single_2graphic_im_pane_g4

0xadcf,	// (0x00045309) popup_side_volume_key_window_cp

0xb57c,	// (0x00045ab6) main_idle_act2_pane_t1

0x693b,	// (0x00040e75) toolbar_button_pane_g10

0x878f,	// (0x00042cc9) popup_toolbar_window_cp1

0xbd10,	// (0x0004624a) clock_nsta_pane_cp_t1

0xbd10,	// (0x0004624a) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x00049ffd) clock_nsta_pane_cp_t

0x5faa,	// (0x000404e4) navi_navi_volume_pane_cp2_ParamLimits

0x5fb6,	// (0x000404f0) popup_side_volume_key_window_g1_ParamLimits

0x5fc2,	// (0x000404fc) popup_side_volume_key_window_g2_ParamLimits

0x5fce,	// (0x00040508) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00049c50) popup_side_volume_key_window_g_ParamLimits

0x6f09,	// (0x00041443) fep_hwr_aid_pane

0x2e28,	// (0x0003d362) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2f9,	// (0x00046833) fep_hwr_top_pane_g1_ParamLimits

0xc30b,	// (0x00046845) fep_hwr_top_pane_g2_ParamLimits

0x6fc2,	// (0x000414fc) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x0004a052) fep_hwr_top_pane_g_ParamLimits

0x6fd7,	// (0x00041511) fep_hwr_top_text_pane_ParamLimits

0xab92,	// (0x000450cc) aid_touch_tab_arrow_arrow_2

0xab9b,	// (0x000450d5) aid_touch_tab_arrow_left_2

0x6f1d,	// (0x00041457) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f54,	// (0x0004148e) fep_hwr_prediction_pane

0xc462,	// (0x0004699c) fep_vkb_prediction_pane

0xc55f,	// (0x00046a99) fep_vkb_side_pane_g3_ParamLimits

0xc55f,	// (0x00046a99) fep_vkb_side_pane_g3

0xc50b,	// (0x00046a45) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc98c,	// (0x00046ec6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc999,	// (0x00046ed3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0004a0fc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3ba,	// (0x000478f4) fep_hwr_prediction_pane_g1

0x7318,	// (0x00041852) fep_hwr_prediction_pane_g2

0x7320,	// (0x0004185a) fep_hwr_prediction_pane_g3

0x7328,	// (0x00041862) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0004a1ff) fep_hwr_prediction_pane_g

0xd3ba,	// (0x000478f4) fep_vkb_prediction_pane_g1

0xd3c4,	// (0x000478fe) fep_vkb_prediction_pane_g2

0xd3cc,	// (0x00047906) fep_vkb_prediction_pane_g3

0xd3d4,	// (0x0004790e) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x0004a208) fep_vkb_prediction_pane_g

0x6c07,	// (0x00041141) slider_set_pane_g3

0x6c1b,	// (0x00041155) slider_set_pane_g4

0x6c33,	// (0x0004116d) slider_set_pane_g5

0x6c07,	// (0x00041141) slider_set_pane_g6

0x6c49,	// (0x00041183) slider_set_pane_g7

0xb222,	// (0x0004575c) slider_form_pane_g3

0xb22b,	// (0x00045765) slider_form_pane_g4

0xb233,	// (0x0004576d) slider_form_pane_g5

0xb222,	// (0x0004575c) slider_form_pane_g6

0xb23b,	// (0x00045775) slider_form_pane_g7

0xb81b,	// (0x00045d55) slider_set_pane_vc_g3

0xb824,	// (0x00045d5e) slider_set_pane_vc_g4

0xb82d,	// (0x00045d67) slider_set_pane_vc_g5

0xb81b,	// (0x00045d55) slider_set_pane_vc_g6

0xb836,	// (0x00045d70) slider_set_pane_vc_g7

0xb9e6,	// (0x00045f20) slider_form_pane_vc_g1

0xb9ef,	// (0x00045f29) slider_form_pane_vc_g2

0xb9f8,	// (0x00045f32) slider_form_pane_vc_g3

0xb9e6,	// (0x00045f20) slider_form_pane_vc_g4

0xba01,	// (0x00045f3b) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x00049fcf) slider_form_pane_vc_g

0x7ed8,	// (0x00042412) main_idle_act3_pane

0xd3dc,	// (0x00047916) ai3_links_pane

0xd3e5,	// (0x0004791f) popup_ai3_data_window_ParamLimits

0xd3e5,	// (0x0004791f) popup_ai3_data_window

0x7ed8,	// (0x00042412) grid_ai3_links_pane

0xd3fd,	// (0x00047937) cell_ai3_links_pane_ParamLimits

0xd3fd,	// (0x00047937) cell_ai3_links_pane

0xd415,	// (0x0004794f) bg_popup_sub_pane_cp11

0xd422,	// (0x0004795c) cell_ai3_links_pane_g1

0x7ed8,	// (0x00042412) bg_popup_sub_pane_cp12

0xd447,	// (0x00047981) heading_ai3_data_pane

0xd44f,	// (0x00047989) list_ai3_gene_pane

0xd45b,	// (0x00047995) popup_ai3_data_window_g1

0xd463,	// (0x0004799d) heading_ai3_data_pane_g1

0xd46b,	// (0x000479a5) heading_ai3_data_pane_t1

0xd479,	// (0x000479b3) list_double_ai3_gene_pane_ParamLimits

0xd479,	// (0x000479b3) list_double_ai3_gene_pane

0xd486,	// (0x000479c0) list_single_ai3_gene_pane_ParamLimits

0xd486,	// (0x000479c0) list_single_ai3_gene_pane

0xc262,	// (0x0004679c) list_highlight_pane_cp7_ParamLimits

0xc262,	// (0x0004679c) list_highlight_pane_cp7

0xd493,	// (0x000479cd) list_single_a13_gene_pane_t1_ParamLimits

0xd493,	// (0x000479cd) list_single_a13_gene_pane_t1

0xd4aa,	// (0x000479e4) list_single_ai3_gene_pane_g1

0xd4b3,	// (0x000479ed) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x0004a211) list_single_ai3_gene_pane_g

0xd4bb,	// (0x000479f5) list_double_ai3_gene_pane_g1_ParamLimits

0xd4bb,	// (0x000479f5) list_double_ai3_gene_pane_g1

0xd4c7,	// (0x00047a01) list_double_ai3_gene_pane_t1_ParamLimits

0xd4c7,	// (0x00047a01) list_double_ai3_gene_pane_t1

0xd4e3,	// (0x00047a1d) list_double_ai3_gene_pane_t2_ParamLimits

0xd4e3,	// (0x00047a1d) list_double_ai3_gene_pane_t2

0xd4f8,	// (0x00047a32) list_double_ai3_gene_pane_t3_ParamLimits

0xd4f8,	// (0x00047a32) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x0004a216) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x0004a216) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x573d,	// (0x0003fc77) aid_size_min_col_2

0xd3a6,	// (0x000478e0) aid_size_min_msg_ParamLimits

0xd3a6,	// (0x000478e0) aid_size_min_msg

0xc65f,	// (0x00046b99) fep_vkb_top_text_pane_g2_ParamLimits

0xc65f,	// (0x00046b99) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x0004a082) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x0004a082) fep_vkb_top_text_pane_g

0x7ed8,	// (0x00042412) main_hc_apps_shell_pane

0xd515,	// (0x00047a4f) grid_hc_apps_pane_ParamLimits

0xd515,	// (0x00047a4f) grid_hc_apps_pane

0xd524,	// (0x00047a5e) list_hc_apps_pane

0xd52c,	// (0x00047a66) scroll_pane_cp37_ParamLimits

0xd52c,	// (0x00047a66) scroll_pane_cp37

0xd538,	// (0x00047a72) cell_hc_apps_pane_ParamLimits

0xd538,	// (0x00047a72) cell_hc_apps_pane

0xd5e6,	// (0x00047b20) cell_hc_apps_pane_g1_ParamLimits

0xd5e6,	// (0x00047b20) cell_hc_apps_pane_g1

0xd617,	// (0x00047b51) cell_hc_apps_pane_g2_ParamLimits

0xd617,	// (0x00047b51) cell_hc_apps_pane_g2

0xd633,	// (0x00047b6d) cell_hc_apps_pane_g3_ParamLimits

0xd633,	// (0x00047b6d) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x0004a21d) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x0004a21d) cell_hc_apps_pane_g

0xd655,	// (0x00047b8f) cell_hc_apps_pane_t1_ParamLimits

0xd655,	// (0x00047b8f) cell_hc_apps_pane_t1

0x8255,	// (0x0004278f) grid_highlight_pane_cp10_ParamLimits

0x8255,	// (0x0004278f) grid_highlight_pane_cp10

0xd695,	// (0x00047bcf) list_single_hc_apps_pane_ParamLimits

0xd695,	// (0x00047bcf) list_single_hc_apps_pane

0xd6fd,	// (0x00047c37) list_single_hc_apps_pane_g1

0x7330,	// (0x0004186a) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x0004a224) list_single_hc_apps_pane_g

0x7349,	// (0x00041883) list_single_hc_apps_pane_g2_copy1

0x5801,	// (0x0003fd3b) list_single_hc_apps_pane_t1

0x7fcc,	// (0x00042506) bg_set_opt_pane_cp_ParamLimits

0x5c33,	// (0x0004016d) setting_slider_pane_t1_ParamLimits

0x5c4c,	// (0x00040186) setting_slider_pane_t2_ParamLimits

0x5c66,	// (0x000401a0) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00049a98) setting_slider_pane_t_ParamLimits

0x5c7e,	// (0x000401b8) slider_set_pane_ParamLimits

0x6266,	// (0x000407a0) control_pane_g5_ParamLimits

0x6266,	// (0x000407a0) control_pane_g5

0xb07f,	// (0x000455b9) slider_set_pane_g1_ParamLimits

0x6bfb,	// (0x00041135) slider_set_pane_g2_ParamLimits

0x6c07,	// (0x00041141) slider_set_pane_g3_ParamLimits

0x6c1b,	// (0x00041155) slider_set_pane_g4_ParamLimits

0x6c33,	// (0x0004116d) slider_set_pane_g5_ParamLimits

0x6c07,	// (0x00041141) slider_set_pane_g6_ParamLimits

0x6c49,	// (0x00041183) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00049e9e) slider_set_pane_g_ParamLimits

0x931e,	// (0x00043858) navi_icon_text_pane_ParamLimits

0x9810,	// (0x00043d4a) aid_fill_nsta_2_ParamLimits

0x984f,	// (0x00043d89) aid_touch_tab_arrow_left_ParamLimits

0x985b,	// (0x00043d95) aid_touch_tab_arrow_right_ParamLimits

0x98c7,	// (0x00043e01) clock_nsta_pane_ParamLimits

0xab74,	// (0x000450ae) navi_icon_pane_g1_ParamLimits

0xab80,	// (0x000450ba) navi_text_pane_t1_ParamLimits

0xbe22,	// (0x0004635c) navi_icon_text_pane_g1_ParamLimits

0xbe2e,	// (0x00046368) navi_icon_text_pane_t1_ParamLimits

0xd6fd,	// (0x00047c37) list_single_hc_apps_pane_g1_ParamLimits

0x7330,	// (0x0004186a) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x0004a224) list_single_hc_apps_pane_g_ParamLimits

0x7349,	// (0x00041883) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5801,	// (0x0003fd3b) list_single_hc_apps_pane_t1_ParamLimits

0x5b3d,	// (0x00040077) popup_toolbar2_fixed_window_ParamLimits

0x5b3d,	// (0x00040077) popup_toolbar2_fixed_window

0x6841,	// (0x00040d7b) popup_toolbar2_float_window

0x7ed8,	// (0x00042412) bg_popup_sub_pane_cp27

0xd716,	// (0x00047c50) grid_toolbar2_float_pane

0x7ed8,	// (0x00042412) bg_popup_sub_pane_cp26

0xd716,	// (0x00047c50) grid_toolbar2_fixed_pane

0xd71e,	// (0x00047c58) cell_toolbar2_fixed_pane_ParamLimits

0xd71e,	// (0x00047c58) cell_toolbar2_fixed_pane

0xd72f,	// (0x00047c69) cell_toolbar2_fixed_pane_g1

0x0e1e,	// (0x0003b358) toolbar2_fixed_button_pane

0x9ce2,	// (0x0004421c) toolbar2_fixed_button_pane_g1

0x9cea,	// (0x00044224) toolbar2_fixed_button_pane_g2

0x9cf2,	// (0x0004422c) toolbar2_fixed_button_pane_g3

0x9cfa,	// (0x00044234) toolbar2_fixed_button_pane_g4

0x9d02,	// (0x0004423c) toolbar2_fixed_button_pane_g5

0x9d0a,	// (0x00044244) toolbar2_fixed_button_pane_g6

0x9d12,	// (0x0004424c) toolbar2_fixed_button_pane_g7

0x9d1a,	// (0x00044254) toolbar2_fixed_button_pane_g8

0x9d22,	// (0x0004425c) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00049da0) toolbar2_fixed_button_pane_g

0xd738,	// (0x00047c72) cell_toolbar2_float_pane_ParamLimits

0xd738,	// (0x00047c72) cell_toolbar2_float_pane

0xd74c,	// (0x00047c86) cell_toolbar2_float_pane_g1

0x0e1e,	// (0x0003b358) toolbar2_fixed_button_pane_cp

0xc3c9,	// (0x00046903) fep_vkb_accented_list_pane_ParamLimits

0xc3c9,	// (0x00046903) fep_vkb_accented_list_pane

0x7125,	// (0x0004165f) bg_popup_fep_shadow_pane_g9

0x949e,	// (0x000439d8) bg_popup_fep_shadow_pane_cp3

0x8993,	// (0x00042ecd) list_accented_list_pane

0xd755,	// (0x00047c8f) list_single_accented_list_pane_ParamLimits

0xd755,	// (0x00047c8f) list_single_accented_list_pane

0x949e,	// (0x000439d8) list_highlight_pane_cp10

0xd766,	// (0x00047ca0) list_single_accented_list_pane_t1

0x6791,	// (0x00040ccb) popup_slider_window_ParamLimits

0x6791,	// (0x00040ccb) popup_slider_window

0xd39d,	// (0x000478d7) aid_indentation_list_msg

0xd820,	// (0x00047d5a) bg_popup_window_pane_cp19

0xd88a,	// (0x00047dc4) popup_slider_window_g1

0xd8a6,	// (0x00047de0) popup_slider_window_g2

0xd8c2,	// (0x00047dfc) popup_slider_window_g3

0x0005,

0xfcef,	// (0x0004a229) popup_slider_window_g

0xd91e,	// (0x00047e58) popup_slider_window_t1

0xd992,	// (0x00047ecc) small_volume_slider_vertical_pane

0xc29d,	// (0x000467d7) small_volume_slider_vertical_pane_g1

0xc29d,	// (0x000467d7) small_volume_slider_vertical_pane_g2

0xd9ae,	// (0x00047ee8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x0004a23b) small_volume_slider_vertical_pane_g

0x590d,	// (0x0003fe47) area_side_right_pane_ParamLimits

0x590d,	// (0x0003fe47) area_side_right_pane

0x7365,	// (0x0004189f) aid_size_side_button_ParamLimits

0x7365,	// (0x0004189f) aid_size_side_button

0x7379,	// (0x000418b3) grid_sctrl_middle_pane_ParamLimits

0x7379,	// (0x000418b3) grid_sctrl_middle_pane

0x7398,	// (0x000418d2) sctrl_sk_bottom_pane

0x73a9,	// (0x000418e3) sctrl_sk_top_pane

0x73bb,	// (0x000418f5) aid_touch_sctrl_top

0x8255,	// (0x0004278f) bg_sctrl_sk_pane_ParamLimits

0x8255,	// (0x0004278f) bg_sctrl_sk_pane

0x73c8,	// (0x00041902) sctrl_sk_top_pane_g1

0x73d5,	// (0x0004190f) sctrl_sk_top_pane_t1

0x73bb,	// (0x000418f5) aid_touch_sctrl_bottom

0x8255,	// (0x0004278f) bg_sctrl_sk_pane_cp_ParamLimits

0x8255,	// (0x0004278f) bg_sctrl_sk_pane_cp

0x73f0,	// (0x0004192a) sctrl_sk_bottom_pane_g1

0x73d5,	// (0x0004190f) sctrl_sk_bottom_pane_t1

0x73f9,	// (0x00041933) cell_sctrl_middle_pane_ParamLimits

0x73f9,	// (0x00041933) cell_sctrl_middle_pane

0x7414,	// (0x0004194e) aid_touch_sctrl_middle_ParamLimits

0x7414,	// (0x0004194e) aid_touch_sctrl_middle

0x884a,	// (0x00042d84) bg_sctrl_middle_pane_ParamLimits

0x884a,	// (0x00042d84) bg_sctrl_middle_pane

0xc50b,	// (0x00046a45) cell_sctrl_middle_pane_g1_ParamLimits

0xc50b,	// (0x00046a45) cell_sctrl_middle_pane_g1

0x7426,	// (0x00041960) cell_sctrl_middle_pane_g2_ParamLimits

0x7426,	// (0x00041960) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x0004a247) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x0004a247) cell_sctrl_middle_pane_g

0x9ce2,	// (0x0004421c) bg_sctrl_middle_pane_g1

0x9cea,	// (0x00044224) bg_sctrl_middle_pane_g2

0x9cf2,	// (0x0004422c) bg_sctrl_middle_pane_g3

0x9cfa,	// (0x00044234) bg_sctrl_middle_pane_g4

0x9d02,	// (0x0004423c) bg_sctrl_middle_pane_g5

0x9d0a,	// (0x00044244) bg_sctrl_middle_pane_g6

0x9d12,	// (0x0004424c) bg_sctrl_middle_pane_g7

0x9d1a,	// (0x00044254) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x0004a24c) bg_sctrl_middle_pane_g

0x9d22,	// (0x0004425c) bg_sctrl_middle_pane_g8_copy1

0x9ce2,	// (0x0004421c) bg_sctrl_sk_pane_g1

0x9cea,	// (0x00044224) bg_sctrl_sk_pane_g2

0x9cf2,	// (0x0004422c) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00049da0) bg_sctrl_sk_pane_g

0x8755,	// (0x00042c8f) aid_size_touch_scroll_bar

0x9cfa,	// (0x00044234) bg_sctrl_sk_pane_g4

0x9d02,	// (0x0004423c) bg_sctrl_sk_pane_g5

0x9d0a,	// (0x00044244) bg_sctrl_sk_pane_g6

0x9d12,	// (0x0004424c) bg_sctrl_sk_pane_g7

0x9d1a,	// (0x00044254) bg_sctrl_sk_pane_g8

0x9d22,	// (0x0004425c) bg_sctrl_sk_pane_g9

0x6402,	// (0x0004093c) popup_fep_china_hwr2_fs_candidate_window

0x640c,	// (0x00040946) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x640c,	// (0x00040946) popup_fep_china_hwr2_fs_control_window

0xc50b,	// (0x00046a45) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x0004a242) sctrl_sk_top_pane_g

0xd9b7,	// (0x00047ef1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9b7,	// (0x00047ef1) aid_fep_china_hwr2_fs_cell

0xd9c9,	// (0x00047f03) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9c9,	// (0x00047f03) bg_popup_fep_shadow_pane_cp4

0xd9e0,	// (0x00047f1a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9e0,	// (0x00047f1a) bg_popup_fep_shadow_pane_cp5

0xd9f2,	// (0x00047f2c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9f2,	// (0x00047f2c) popup_fep_china_hwr2_fs_control_bar_grid

0xda02,	// (0x00047f3c) popup_fep_china_hwr2_fs_control_funtion_grid

0xda0a,	// (0x00047f44) aid_fep_china_hwr2_fs_candi_cell

0x7ed8,	// (0x00042412) bg_popup_fep_shadow_pane_cp6

0xda14,	// (0x00047f4e) popup_fep_china_hwr2_fs_candidate_grid

0xda1e,	// (0x00047f58) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda1e,	// (0x00047f58) cell_fep_china_hwr2_fs_funtion_grid

0xc29d,	// (0x000467d7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda36,	// (0x00047f70) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda36,	// (0x00047f70) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda44,	// (0x00047f7e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda44,	// (0x00047f7e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x0004a25d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x0004a25d) cell_fep_china_hwr2_fs_funtion_grid_g

0xda5a,	// (0x00047f94) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda5a,	// (0x00047f94) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda6f,	// (0x00047fa9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda6f,	// (0x00047fa9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x0004a262) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x0004a262) cell_fep_china_hwr2_fs_funtion_grid_t

0xda8b,	// (0x00047fc5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda93,	// (0x00047fcd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda9b,	// (0x00047fd5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x0004a267) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaa3,	// (0x00047fdd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaa3,	// (0x00047fdd) cell_fep_china_hwr2_fs_candidate_grid

0xdabc,	// (0x00047ff6) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdac4,	// (0x00047ffe) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc29d,	// (0x000467d7) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc29d,	// (0x000467d7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x0004a087) cell_fep_china_hwr2_fs_candidate_grid_g

0xdacc,	// (0x00048006) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98d4,	// (0x00043e0e) clock_nsta_pane_cp_24_ParamLimits

0x98d4,	// (0x00043e0e) clock_nsta_pane_cp_24

0x9952,	// (0x00043e8c) indicator_nsta_pane_cp_24_ParamLimits

0x9952,	// (0x00043e8c) indicator_nsta_pane_cp_24

0xa9f0,	// (0x00044f2a) heading_pane_g1

0x0001,

0xf8cb,	// (0x00049e05) heading_pane_g

0xb3c5,	// (0x000458ff) grid_sct_catagory_button_pane

0xb3f5,	// (0x0004592f) scroll_pane_cp5_ParamLimits

0xbe70,	// (0x000463aa) button_value_adjust_pane_cp5_ParamLimits

0xbe70,	// (0x000463aa) button_value_adjust_pane_cp5

0xbf4f,	// (0x00046489) form2_midp_time_pane_ParamLimits

0xdada,	// (0x00048014) cell_sct_catagory_button_pane_ParamLimits

0xdada,	// (0x00048014) cell_sct_catagory_button_pane

0xc262,	// (0x0004679c) bg_button_pane_cp01_ParamLimits

0xc262,	// (0x0004679c) bg_button_pane_cp01

0xc29d,	// (0x000467d7) cell_sct_catagory_button_pane_g1

0x67d0,	// (0x00040d0a) popup_tb_extension_window

0xdaec,	// (0x00048026) aid_size_cell_ext_ParamLimits

0xdaec,	// (0x00048026) aid_size_cell_ext

0x8255,	// (0x0004278f) bg_tb_trans_pane_cp1_ParamLimits

0x8255,	// (0x0004278f) bg_tb_trans_pane_cp1

0xdb0c,	// (0x00048046) grid_tb_ext_pane_ParamLimits

0xdb0c,	// (0x00048046) grid_tb_ext_pane

0xdb3e,	// (0x00048078) cell_tb_ext_pane_ParamLimits

0xdb3e,	// (0x00048078) cell_tb_ext_pane

0xdb55,	// (0x0004808f) cell_tb_ext_pane_g1_ParamLimits

0xdb55,	// (0x0004808f) cell_tb_ext_pane_g1

0xdb72,	// (0x000480ac) cell_tb_ext_pane_t1

0x8255,	// (0x0004278f) list_highlight_pane_cp11_ParamLimits

0x8255,	// (0x0004278f) list_highlight_pane_cp11

0x5b5c,	// (0x00040096) popup_uni_indicator_window_ParamLimits

0x5b5c,	// (0x00040096) popup_uni_indicator_window

0x884a,	// (0x00042d84) bg_popup_sub_pane_cp14

0xdb8d,	// (0x000480c7) list_uniindi_pane

0xdb99,	// (0x000480d3) uniindi_top_pane

0x8255,	// (0x0004278f) bg_uniindi_top_pane

0xdbb8,	// (0x000480f2) uniindi_top_pane_g1

0xdbce,	// (0x00048108) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x0004a26e) uniindi_top_pane_g

0xdbf8,	// (0x00048132) uniindi_top_pane_t1

0xdc22,	// (0x0004815c) list_single_uniindi_pane_ParamLimits

0xdc22,	// (0x0004815c) list_single_uniindi_pane

0xc29d,	// (0x000467d7) bg_uniindi_top_pane_g1

0xdc35,	// (0x0004816f) list_single_uniindi_pane_g1

0xdc48,	// (0x00048182) list_single_uniindi_pane_t1

0x7ed8,	// (0x00042412) control_bg_pane

0xdc6d,	// (0x000481a7) bg_sctrl_sk_pane_cp1

0xdc76,	// (0x000481b0) bg_sctrl_sk_pane_cp2

0xdc7f,	// (0x000481b9) control_bg_pane_g1

0xdc88,	// (0x000481c2) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x0004a277) control_bg_pane_g

0xbcb4,	// (0x000461ee) cell_indicator_nsta_pane_g1_ParamLimits

0xbcc2,	// (0x000461fc) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x00049feb) cell_indicator_nsta_pane_g_ParamLimits

0x559e,	// (0x0003fad8) form2_midp_time_pane_t1_ParamLimits

0x8597,	// (0x00042ad1) main_idle_act4_pane_ParamLimits

0x8597,	// (0x00042ad1) main_idle_act4_pane

0x67d0,	// (0x00040d0a) popup_tb_extension_window_ParamLimits

0xdb2e,	// (0x00048068) tb_ext_find_pane_ParamLimits

0xdb2e,	// (0x00048068) tb_ext_find_pane

0xdc91,	// (0x000481cb) ai_gene_pane_1_cp1

0x95dd,	// (0x00043b17) ai_gene_pane_2_cp1

0xdc99,	// (0x000481d3) list_single_idle_plugin_calendar_pane

0xdca2,	// (0x000481dc) list_single_idle_plugin_notification_pane

0xdcab,	// (0x000481e5) list_single_idle_plugin_player_pane

0xdcb4,	// (0x000481ee) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcb4,	// (0x000481ee) list_single_idle_plugin_shortcut_pane

0xdcd6,	// (0x00048210) main_idle_act4_pane_t1

0xdce8,	// (0x00048222) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x0004a27c) main_idle_act4_pane_t

0xdcfa,	// (0x00048234) middle_sk_idle_act4_pane_ParamLimits

0xdcfa,	// (0x00048234) middle_sk_idle_act4_pane

0xdd10,	// (0x0004824a) popup_clock_digital_analogue_window_cp2

0xdd2a,	// (0x00048264) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd2a,	// (0x00048264) shortcut_wheel_idle_act4_pane

0xc29d,	// (0x000467d7) shortcut_wheel_idle_act4_pane_g1

0xc29d,	// (0x000467d7) shortcut_wheel_idle_act4_pane_g2

0xc29d,	// (0x000467d7) shortcut_wheel_idle_act4_pane_g3

0xc29d,	// (0x000467d7) shortcut_wheel_idle_act4_pane_g4

0xc29d,	// (0x000467d7) shortcut_wheel_idle_act4_pane_g5

0xdd3e,	// (0x00048278) shortcut_wheel_idle_act4_pane_g6

0xdd46,	// (0x00048280) shortcut_wheel_idle_act4_pane_g7

0xdd4e,	// (0x00048288) shortcut_wheel_idle_act4_pane_g8

0xdd56,	// (0x00048290) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x0004a281) shortcut_wheel_idle_act4_pane_g

0xc50b,	// (0x00046a45) middle_sk_idle_act4_pane_g1_ParamLimits

0xc50b,	// (0x00046a45) middle_sk_idle_act4_pane_g1

0xddba,	// (0x000482f4) middle_sk_idle_act4_pane_g2_ParamLimits

0xddba,	// (0x000482f4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x0004a2a4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x0004a2a4) middle_sk_idle_act4_pane_g

0xddc6,	// (0x00048300) middle_sk_idle_act4_pane_t1_ParamLimits

0xddc6,	// (0x00048300) middle_sk_idle_act4_pane_t1

0xdde3,	// (0x0004831d) grid_ai_shortcut_pane_ParamLimits

0xdde3,	// (0x0004831d) grid_ai_shortcut_pane

0xddfc,	// (0x00048336) list_highlight_pane_cp16_ParamLimits

0xddfc,	// (0x00048336) list_highlight_pane_cp16

0xde09,	// (0x00048343) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde09,	// (0x00048343) list_single_idle_plugin_shortcut_pane_g1

0xde15,	// (0x0004834f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde15,	// (0x0004834f) list_single_idle_plugin_shortcut_pane_g2

0xde2d,	// (0x00048367) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde2d,	// (0x00048367) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0004a2a9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0004a2a9) list_single_idle_plugin_shortcut_pane_g

0xde40,	// (0x0004837a) cell_ai_shortcut_pane_ParamLimits

0xde40,	// (0x0004837a) cell_ai_shortcut_pane

0xde61,	// (0x0004839b) cell_ai_shortcut_pane_g1_ParamLimits

0xde61,	// (0x0004839b) cell_ai_shortcut_pane_g1

0xdc91,	// (0x000481cb) ai_gene_pane_1_cp2

0xde83,	// (0x000483bd) ai_gene_pane_2_cp2

0xde8b,	// (0x000483c5) list_highlight_pane_cp15

0xde94,	// (0x000483ce) list_single_idle_plugin_calendar_pane_g1

0xde8b,	// (0x000483c5) list_highlight_pane_cp17

0xde9c,	// (0x000483d6) list_single_idle_plugin_calendar_pane_g1_copy1

0xdea4,	// (0x000483de) list_single_idle_plugin_player_pane_g1

0xb61c,	// (0x00045b56) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x0004a2b0) list_single_idle_plugin_player_pane_g

0xdeac,	// (0x000483e6) list_single_idle_plugin_player_pane_t1

0xdeba,	// (0x000483f4) list_single_idle_plugin_player_pane_t2

0xdec8,	// (0x00048402) list_single_idle_plugin_player_pane_t3

0xded6,	// (0x00048410) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x0004a2b5) list_single_idle_plugin_player_pane_t

0xdee4,	// (0x0004841e) wait_bar_pane_cp15

0xdeec,	// (0x00048426) grid_ai_notification_pane

0xb61c,	// (0x00045b56) list_single_idle_plugin_notification_pane_g1

0xdef5,	// (0x0004842f) cell_ai_notification_pane_ParamLimits

0xdef5,	// (0x0004842f) cell_ai_notification_pane

0xdf02,	// (0x0004843c) cell_ai_notification_pane_g1

0xdf0a,	// (0x00048444) cell_ai_notification_pane_t1

0xdf18,	// (0x00048452) tb_ext_find_button_pane

0xdf20,	// (0x0004845a) tb_ext_find_pane_g1

0xdf28,	// (0x00048462) tb_ext_find_pane_t1

0x8e92,	// (0x000433cc) tb_ext_find_button_pane_g1

0xdf36,	// (0x00048470) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x0004a2be) tb_ext_find_button_pane_g

0xdcd6,	// (0x00048210) main_idle_act4_pane_t1_ParamLimits

0xdce8,	// (0x00048222) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x0004a27c) main_idle_act4_pane_t_ParamLimits

0xdd10,	// (0x0004824a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd1e,	// (0x00048258) sat_plugin_idle_act4_pane_ParamLimits

0xdd1e,	// (0x00048258) sat_plugin_idle_act4_pane

0xdf3f,	// (0x00048479) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf3f,	// (0x00048479) sat_plugin_idle_act4_pane_t1

0xdf52,	// (0x0004848c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf52,	// (0x0004848c) sat_plugin_idle_act4_pane_t2

0xdf65,	// (0x0004849f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf65,	// (0x0004849f) sat_plugin_idle_act4_pane_t3

0xdf78,	// (0x000484b2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf78,	// (0x000484b2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x0004a2c3) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x0004a2c3) sat_plugin_idle_act4_pane_t

0x5aa5,	// (0x0003ffdf) popup_battery_window_ParamLimits

0x5aa5,	// (0x0003ffdf) popup_battery_window

0x8255,	// (0x0004278f) bg_popup_sub_pane_cp25_ParamLimits

0x8255,	// (0x0004278f) bg_popup_sub_pane_cp25

0xdf8b,	// (0x000484c5) popup_battery_window_g1_ParamLimits

0xdf8b,	// (0x000484c5) popup_battery_window_g1

0xdf97,	// (0x000484d1) popup_battery_window_t1_ParamLimits

0xdf97,	// (0x000484d1) popup_battery_window_t1

0xdfa9,	// (0x000484e3) popup_battery_window_t2_ParamLimits

0xdfa9,	// (0x000484e3) popup_battery_window_t2

0x0001,

0xfd92,	// (0x0004a2cc) popup_battery_window_t_ParamLimits

0xfd92,	// (0x0004a2cc) popup_battery_window_t

0x94a6,	// (0x000439e0) midp_canvas_pane_ParamLimits

0x951f,	// (0x00043a59) midp_keypad_pane_ParamLimits

0x951f,	// (0x00043a59) midp_keypad_pane

0x97d8,	// (0x00043d12) main_midp_pane_ParamLimits

0xbd2e,	// (0x00046268) signal_pane_g2_cp_ParamLimits

0xdfc6,	// (0x00048500) aid_size_cell_midp_keypad_ParamLimits

0xdfc6,	// (0x00048500) aid_size_cell_midp_keypad

0xdfe0,	// (0x0004851a) midp_keyp_game_grid_pane_ParamLimits

0xdfe0,	// (0x0004851a) midp_keyp_game_grid_pane

0xe000,	// (0x0004853a) midp_keyp_rocker_pane_ParamLimits

0xe000,	// (0x0004853a) midp_keyp_rocker_pane

0xe039,	// (0x00048573) midp_keyp_sk_left_pane_ParamLimits

0xe039,	// (0x00048573) midp_keyp_sk_left_pane

0xe093,	// (0x000485cd) midp_keyp_sk_right_pane_ParamLimits

0xe093,	// (0x000485cd) midp_keyp_sk_right_pane

0x7ed8,	// (0x00042412) bg_button_pane_cp03

0xe0ed,	// (0x00048627) midp_keyp_sk_left_pane_g1

0x7ed8,	// (0x00042412) bg_button_pane_cp04

0xe0ed,	// (0x00048627) midp_keyp_sk_right_pane_g1

0xc29d,	// (0x000467d7) midp_keyp_rocker_pane_g1

0xe0f6,	// (0x00048630) keyp_game_cell_pane_ParamLimits

0xe0f6,	// (0x00048630) keyp_game_cell_pane

0x7ed8,	// (0x00042412) bg_button_pane_cp02

0xe109,	// (0x00048643) keyp_game_cell_pane_g1

0x5adb,	// (0x00040015) popup_fep_vkb2_window_ParamLimits

0x5adb,	// (0x00040015) popup_fep_vkb2_window

0x7444,	// (0x0004197e) aid_size_cell_vkb2_ParamLimits

0x7444,	// (0x0004197e) aid_size_cell_vkb2

0x7498,	// (0x000419d2) popup_fep_vkb2_window_g1_ParamLimits

0x7498,	// (0x000419d2) popup_fep_vkb2_window_g1

0x74e0,	// (0x00041a1a) vkb2_area_bottom_pane_ParamLimits

0x74e0,	// (0x00041a1a) vkb2_area_bottom_pane

0x752c,	// (0x00041a66) vkb2_area_keypad_pane_ParamLimits

0x752c,	// (0x00041a66) vkb2_area_keypad_pane

0x756e,	// (0x00041aa8) vkb2_area_top_pane_ParamLimits

0x756e,	// (0x00041aa8) vkb2_area_top_pane

0x75e8,	// (0x00041b22) vkb2_top_entry_pane_ParamLimits

0x75e8,	// (0x00041b22) vkb2_top_entry_pane

0x7612,	// (0x00041b4c) vkb2_top_grid_left_pane_ParamLimits

0x7612,	// (0x00041b4c) vkb2_top_grid_left_pane

0x7630,	// (0x00041b6a) vkb2_top_grid_right_pane_ParamLimits

0x7630,	// (0x00041b6a) vkb2_top_grid_right_pane

0x764e,	// (0x00041b88) vkb2_cell_keypad_pane_ParamLimits

0x764e,	// (0x00041b88) vkb2_cell_keypad_pane

0x771f,	// (0x00041c59) vkb2_area_bottom_grid_pane_ParamLimits

0x771f,	// (0x00041c59) vkb2_area_bottom_grid_pane

0x7745,	// (0x00041c7f) vkb2_area_bottom_pane_g1_ParamLimits

0x7745,	// (0x00041c7f) vkb2_area_bottom_pane_g1

0x7769,	// (0x00041ca3) vkb2_area_bottom_pane_g2_ParamLimits

0x7769,	// (0x00041ca3) vkb2_area_bottom_pane_g2

0x7797,	// (0x00041cd1) vkb2_area_bottom_pane_g3_ParamLimits

0x7797,	// (0x00041cd1) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x0004a2d1) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x0004a2d1) vkb2_area_bottom_pane_g

0x77f8,	// (0x00041d32) vkb2_top_cell_left_pane_ParamLimits

0x77f8,	// (0x00041d32) vkb2_top_cell_left_pane

0xe11a,	// (0x00048654) vkb2_top_entry_pane_g1_ParamLimits

0xe11a,	// (0x00048654) vkb2_top_entry_pane_g1

0xe128,	// (0x00048662) vkb2_top_entry_pane_t1_ParamLimits

0xe128,	// (0x00048662) vkb2_top_entry_pane_t1

0xe15a,	// (0x00048694) vkb2_top_entry_pane_t2_ParamLimits

0xe15a,	// (0x00048694) vkb2_top_entry_pane_t2

0xe18c,	// (0x000486c6) vkb2_top_entry_pane_t3_ParamLimits

0xe18c,	// (0x000486c6) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x0004a2d8) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x0004a2d8) vkb2_top_entry_pane_t

0x7845,	// (0x00041d7f) vkb2_top_grid_right_pane_g1_ParamLimits

0x7845,	// (0x00041d7f) vkb2_top_grid_right_pane_g1

0x785b,	// (0x00041d95) vkb2_top_grid_right_pane_g2_ParamLimits

0x785b,	// (0x00041d95) vkb2_top_grid_right_pane_g2

0x7873,	// (0x00041dad) vkb2_top_grid_right_pane_g3_ParamLimits

0x7873,	// (0x00041dad) vkb2_top_grid_right_pane_g3

0x788b,	// (0x00041dc5) vkb2_top_grid_right_pane_g4_ParamLimits

0x788b,	// (0x00041dc5) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x0004a2df) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x0004a2df) vkb2_top_grid_right_pane_g

0x78a1,	// (0x00041ddb) vkb2_top_cell_left_pane_g1

0x78b8,	// (0x00041df2) vkb2_cell_keypad_pane_g1_ParamLimits

0x78b8,	// (0x00041df2) vkb2_cell_keypad_pane_g1

0xe1b0,	// (0x000486ea) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1b0,	// (0x000486ea) vkb2_cell_keypad_pane_t1

0x78c6,	// (0x00041e00) vkb2_cell_bottom_grid_pane_ParamLimits

0x78c6,	// (0x00041e00) vkb2_cell_bottom_grid_pane

0x78ff,	// (0x00041e39) vkb2_cell_bottom_grid_pane_g1

0xdd5e,	// (0x00048298) aid_call2_pane_cp02

0xdd66,	// (0x000482a0) aid_call_pane_cp02

0xdd6e,	// (0x000482a8) clock_digital_number_pane_cp10

0xdd76,	// (0x000482b0) clock_digital_number_pane_cp11

0xdd7e,	// (0x000482b8) clock_digital_number_pane_cp12

0xdd86,	// (0x000482c0) clock_digital_number_pane_cp13

0xdd8e,	// (0x000482c8) clock_digital_separator_pane_cp10

0x8e92,	// (0x000433cc) popup_clock_digital_analogue_window_cp2_g1

0x8e92,	// (0x000433cc) popup_clock_digital_analogue_window_cp2_g2

0xdd96,	// (0x000482d0) popup_clock_digital_analogue_window_cp2_g3

0x8e92,	// (0x000433cc) popup_clock_digital_analogue_window_cp2_g4

0xdd96,	// (0x000482d0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x0004a294) popup_clock_digital_analogue_window_cp2_g

0xdd9e,	// (0x000482d8) popup_clock_digital_analogue_window_cp2_t1

0xddac,	// (0x000482e6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x0004a29f) popup_clock_digital_analogue_window_cp2_t

0xc29d,	// (0x000467d7) clock_digital_number_pane_cp10_g1

0xc29d,	// (0x000467d7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0004a087) clock_digital_number_pane_cp10_g

0xc29d,	// (0x000467d7) clock_digital_separator_pane_cp10_g1

0xc29d,	// (0x000467d7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0004a087) clock_digital_separator_pane_cp10_g

0xdbda,	// (0x00048114) uniindi_top_pane_g3

0xdbeb,	// (0x00048125) uniindi_top_pane_g4

0x76d9,	// (0x00041c13) vkb2_row_keypad_pane_ParamLimits

0x76d9,	// (0x00041c13) vkb2_row_keypad_pane

0x791f,	// (0x00041e59) vkb2_cell_t_keypad_pane_ParamLimits

0x791f,	// (0x00041e59) vkb2_cell_t_keypad_pane

0x792f,	// (0x00041e69) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x792f,	// (0x00041e69) vkb2_cell_t_keypad_pane_cp08

0x7942,	// (0x00041e7c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7942,	// (0x00041e7c) vkb2_cell_t_keypad_pane_cp09

0x7956,	// (0x00041e90) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7956,	// (0x00041e90) vkb2_cell_t_keypad_pane_cp01

0x7967,	// (0x00041ea1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7967,	// (0x00041ea1) vkb2_cell_t_keypad_pane_cp02

0x7978,	// (0x00041eb2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7978,	// (0x00041eb2) vkb2_cell_t_keypad_pane_cp03

0x7989,	// (0x00041ec3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7989,	// (0x00041ec3) vkb2_cell_t_keypad_pane_cp04

0x799a,	// (0x00041ed4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x799a,	// (0x00041ed4) vkb2_cell_t_keypad_pane_cp05

0x79ab,	// (0x00041ee5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x79ab,	// (0x00041ee5) vkb2_cell_t_keypad_pane_cp06

0x79bc,	// (0x00041ef6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x79bc,	// (0x00041ef6) vkb2_cell_t_keypad_pane_cp07

0x79cd,	// (0x00041f07) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x79cd,	// (0x00041f07) vkb2_cell_t_keypad_pane_cp10

0xc50b,	// (0x00046a45) vkb2_cell_t_keypad_pane_g1

0xe1c7,	// (0x00048701) vkb2_cell_t_keypad_pane_t1

0x7ed8,	// (0x00042412) popup_grid_graphic2_window

0xe1d9,	// (0x00048713) aid_size_cell_graphic2_ParamLimits

0xe1d9,	// (0x00048713) aid_size_cell_graphic2

0xe211,	// (0x0004874b) bg_popup_window_pane_cp21_ParamLimits

0xe211,	// (0x0004874b) bg_popup_window_pane_cp21

0xe21f,	// (0x00048759) graphic2_pages_pane_ParamLimits

0xe21f,	// (0x00048759) graphic2_pages_pane

0xe286,	// (0x000487c0) grid_graphic2_control_pane_ParamLimits

0xe286,	// (0x000487c0) grid_graphic2_control_pane

0xe2c4,	// (0x000487fe) grid_graphic2_pane_ParamLimits

0xe2c4,	// (0x000487fe) grid_graphic2_pane

0xe338,	// (0x00048872) cell_graphic2_pane

0x7ed8,	// (0x00042412) main_comp_mode_pane

0xd44f,	// (0x00047989) list_ai3_gene_pane_ParamLimits

0xd820,	// (0x00047d5a) bg_popup_window_pane_cp19_ParamLimits

0xd82c,	// (0x00047d66) bg_touch_area_indi_pane_ParamLimits

0xd82c,	// (0x00047d66) bg_touch_area_indi_pane

0xd842,	// (0x00047d7c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd842,	// (0x00047d7c) bg_touch_area_indi_pane_cp01

0xd858,	// (0x00047d92) bg_touch_area_indi_pane_cp02_ParamLimits

0xd858,	// (0x00047d92) bg_touch_area_indi_pane_cp02

0xd870,	// (0x00047daa) bg_touch_area_indi_pane_cp03_ParamLimits

0xd870,	// (0x00047daa) bg_touch_area_indi_pane_cp03

0xd88a,	// (0x00047dc4) popup_slider_window_g1_ParamLimits

0xd8a6,	// (0x00047de0) popup_slider_window_g2_ParamLimits

0xd8c2,	// (0x00047dfc) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x0004a229) popup_slider_window_g_ParamLimits

0xd91e,	// (0x00047e58) popup_slider_window_t1_ParamLimits

0xd992,	// (0x00047ecc) small_volume_slider_vertical_pane_ParamLimits

0xe338,	// (0x00048872) cell_graphic2_pane_ParamLimits

0xe386,	// (0x000488c0) bg_button_pane_cp10_ParamLimits

0xe386,	// (0x000488c0) bg_button_pane_cp10

0xe399,	// (0x000488d3) bg_button_pane_cp11_ParamLimits

0xe399,	// (0x000488d3) bg_button_pane_cp11

0xe3ac,	// (0x000488e6) graphic2_pages_pane_g1_ParamLimits

0xe3ac,	// (0x000488e6) graphic2_pages_pane_g1

0xe3c7,	// (0x00048901) graphic2_pages_pane_g2_ParamLimits

0xe3c7,	// (0x00048901) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x0004a2ed) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x0004a2ed) graphic2_pages_pane_g

0xe3df,	// (0x00048919) graphic2_pages_pane_t1_ParamLimits

0xe3df,	// (0x00048919) graphic2_pages_pane_t1

0xe3f5,	// (0x0004892f) cell_graphic2_control_pane_ParamLimits

0xe3f5,	// (0x0004892f) cell_graphic2_control_pane

0xe416,	// (0x00048950) cell_graphic2_pane_g1_ParamLimits

0xe416,	// (0x00048950) cell_graphic2_pane_g1

0xe423,	// (0x0004895d) cell_graphic2_pane_g2_ParamLimits

0xe423,	// (0x0004895d) cell_graphic2_pane_g2

0xe430,	// (0x0004896a) cell_graphic2_pane_g3_ParamLimits

0xe430,	// (0x0004896a) cell_graphic2_pane_g3

0xe43d,	// (0x00048977) cell_graphic2_pane_g4_ParamLimits

0xe43d,	// (0x00048977) cell_graphic2_pane_g4

0xe44a,	// (0x00048984) cell_graphic2_pane_g5_ParamLimits

0xe44a,	// (0x00048984) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x0004a2f2) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x0004a2f2) cell_graphic2_pane_g

0xe465,	// (0x0004899f) cell_graphic2_pane_t1_ParamLimits

0xe465,	// (0x0004899f) cell_graphic2_pane_t1

0x9d56,	// (0x00044290) grid_highlight_pane_cp11_ParamLimits

0x9d56,	// (0x00044290) grid_highlight_pane_cp11

0x8255,	// (0x0004278f) bg_button_pane_cp05

0xe48e,	// (0x000489c8) cell_graphic2_control_pane_g1

0xc29d,	// (0x000467d7) bg_touch_area_indi_pane_g1

0xe4b6,	// (0x000489f0) aid_cmod_rocker_key_size

0xe4c0,	// (0x000489fa) aid_cmode_itu_key_size

0xe4ca,	// (0x00048a04) main_cmode_video_pane

0xe4d4,	// (0x00048a0e) main_comp_mode_itu_pane

0xe4e0,	// (0x00048a1a) main_comp_mode_rocker_pane

0xe4ec,	// (0x00048a26) cell_cmode_rocker_pane_ParamLimits

0xe4ec,	// (0x00048a26) cell_cmode_rocker_pane

0xe4fe,	// (0x00048a38) cell_cmode_itu_pane_ParamLimits

0xe4fe,	// (0x00048a38) cell_cmode_itu_pane

0x884a,	// (0x00042d84) bg_button_pane_cp06_ParamLimits

0x884a,	// (0x00042d84) bg_button_pane_cp06

0xc50b,	// (0x00046a45) cell_cmode_rocker_pane_g1_ParamLimits

0xc50b,	// (0x00046a45) cell_cmode_rocker_pane_g1

0xda36,	// (0x00047f70) cell_cmode_rocker_pane_g2_ParamLimits

0xda36,	// (0x00047f70) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x0004a302) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x0004a302) cell_cmode_rocker_pane_g

0x7ed8,	// (0x00042412) bg_button_pane_cp07

0xe513,	// (0x00048a4d) cell_cmode_itu_pane_g1

0xe51c,	// (0x00048a56) cell_cmode_itu_pane_t1

0xe52a,	// (0x00048a64) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x0004a307) cell_cmode_itu_pane_t

0xdc5d,	// (0x00048197) aid_touch_ctrl_left

0xdc65,	// (0x0004819f) aid_touch_ctrl_right

0x7ed8,	// (0x00042412) compa_mode_pane

0xe538,	// (0x00048a72) aid_cmod_rocker_key_size_cp

0xe542,	// (0x00048a7c) aid_cmode_itu_key_size_cp

0xe54c,	// (0x00048a86) compa_mode_pane_g1

0xe554,	// (0x00048a8e) compa_mode_pane_g2

0xe55c,	// (0x00048a96) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x0004a30c) compa_mode_pane_g

0xe564,	// (0x00048a9e) main_comp_mode_itu_pane_cp

0xe56c,	// (0x00048aa6) main_comp_mode_rocker_pane_cp

0xe574,	// (0x00048aae) cell_cmode_itu_pane_cp_ParamLimits

0xe574,	// (0x00048aae) cell_cmode_itu_pane_cp

0xe589,	// (0x00048ac3) cell_cmode_rocker_pane_cp_ParamLimits

0xe589,	// (0x00048ac3) cell_cmode_rocker_pane_cp

0x884a,	// (0x00042d84) bg_button_pane_cp06_cp_ParamLimits

0x884a,	// (0x00042d84) bg_button_pane_cp06_cp

0xc50b,	// (0x00046a45) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc50b,	// (0x00046a45) cell_cmode_rocker_pane_g1_cp

0xc29d,	// (0x000467d7) cell_cmode_rocker_pane_g2_cp

0x7ed8,	// (0x00042412) bg_button_pane_cp07_cp

0xe59b,	// (0x00048ad5) cell_cmode_itu_pane_g1_cp

0xe5a4,	// (0x00048ade) cell_cmode_itu_pane_t1_cp

0xe5a4,	// (0x00048ade) cell_cmode_itu_pane_t2_cp

0xb20f,	// (0x00045749) settings_code_pane_cp2

0x7fcc,	// (0x00042506) bg_popup_window_pane_cp3_ParamLimits

0x8423,	// (0x0004295d) heading_pane_cp3_ParamLimits

0x842f,	// (0x00042969) listscroll_popup_graphic_pane_ParamLimits

0x6f09,	// (0x00041443) fep_hwr_aid_pane_ParamLimits

0x73bb,	// (0x000418f5) aid_touch_sctrl_top_ParamLimits

0x73c8,	// (0x00041902) sctrl_sk_top_pane_g1_ParamLimits

0xc50b,	// (0x00046a45) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x0004a242) sctrl_sk_top_pane_g_ParamLimits

0x73d5,	// (0x0004190f) sctrl_sk_top_pane_t1_ParamLimits

0x73bb,	// (0x000418f5) aid_touch_sctrl_bottom_ParamLimits

0x73d5,	// (0x0004190f) sctrl_sk_bottom_pane_t1_ParamLimits

0xdba6,	// (0x000480e0) aid_area_touch_clock

0x75b0,	// (0x00041aea) aid_vkb2_area_top_pane_cell_ParamLimits

0x75b0,	// (0x00041aea) aid_vkb2_area_top_pane_cell

0x76fb,	// (0x00041c35) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x76fb,	// (0x00041c35) aid_vkb2_area_bottom_pane_cell

0xe112,	// (0x0004864c) popup_char_count_window

0xe5b2,	// (0x00048aec) popup_char_count_window_g1

0xe5bb,	// (0x00048af5) popup_char_count_window_g2

0xe5c4,	// (0x00048afe) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x0004a313) popup_char_count_window_g

0xe5cd,	// (0x00048b07) popup_char_count_window_t1

0x7476,	// (0x000419b0) popup_fep_char_preview_window_ParamLimits

0x7476,	// (0x000419b0) popup_fep_char_preview_window

0x75ce,	// (0x00041b08) vkb2_top_candi_pane_ParamLimits

0x75ce,	// (0x00041b08) vkb2_top_candi_pane

0xe5db,	// (0x00048b15) cell_vkb2_top_candi_pane_ParamLimits

0xe5db,	// (0x00048b15) cell_vkb2_top_candi_pane

0xa368,	// (0x000448a2) bg_popup_fep_char_preview_window_ParamLimits

0xa368,	// (0x000448a2) bg_popup_fep_char_preview_window

0x79e2,	// (0x00041f1c) popup_fep_char_preview_window_t1_ParamLimits

0x79e2,	// (0x00041f1c) popup_fep_char_preview_window_t1

0xe628,	// (0x00048b62) bg_popup_fep_char_preview_window_g1

0xe630,	// (0x00048b6a) bg_popup_fep_char_preview_window_g2

0xe638,	// (0x00048b72) bg_popup_fep_char_preview_window_g3

0xe640,	// (0x00048b7a) bg_popup_fep_char_preview_window_g4

0xe648,	// (0x00048b82) bg_popup_fep_char_preview_window_g5

0x7a1c,	// (0x00041f56) bg_popup_fep_char_preview_window_g6

0xe650,	// (0x00048b8a) bg_popup_fep_char_preview_window_g7

0xe658,	// (0x00048b92) bg_popup_fep_char_preview_window_g8

0xe660,	// (0x00048b9a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x0004a31a) bg_popup_fep_char_preview_window_g

0xc50b,	// (0x00046a45) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc50b,	// (0x00046a45) cell_vkb2_top_candi_pane_g1

0xc822,	// (0x00046d5c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc822,	// (0x00046d5c) cell_vkb2_top_candi_pane_g2

0xc843,	// (0x00046d7d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc843,	// (0x00046d7d) cell_vkb2_top_candi_pane_g3

0x7a24,	// (0x00041f5e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7a24,	// (0x00041f5e) cell_vkb2_top_candi_pane_g4

0xe255,	// (0x0004878f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe255,	// (0x0004878f) cell_vkb2_top_candi_pane_g5

0xda36,	// (0x00047f70) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda36,	// (0x00047f70) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x0004a32d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x0004a32d) cell_vkb2_top_candi_pane_g

0x7a45,	// (0x00041f7f) cell_vkb2_top_candi_pane_t1

0x6be7,	// (0x00041121) aid_size_touch_slider_mark_ParamLimits

0x6be7,	// (0x00041121) aid_size_touch_slider_mark

0xe276,	// (0x000487b0) grid_graphic2_catg_pane_ParamLimits

0xe276,	// (0x000487b0) grid_graphic2_catg_pane

0xe314,	// (0x0004884e) popup_grid_graphic2_window_t1_ParamLimits

0xe314,	// (0x0004884e) popup_grid_graphic2_window_t1

0xe326,	// (0x00048860) popup_grid_graphic2_window_t2_ParamLimits

0xe326,	// (0x00048860) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x0004a2e8) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x0004a2e8) popup_grid_graphic2_window_t

0x8255,	// (0x0004278f) bg_button_pane_cp05_ParamLimits

0xe48e,	// (0x000489c8) cell_graphic2_control_pane_g1_ParamLimits

0xe668,	// (0x00048ba2) cell_graphic2_catg_pane_ParamLimits

0xe668,	// (0x00048ba2) cell_graphic2_catg_pane

0x7ed8,	// (0x00042412) bg_button_pane_cp12

0xe67a,	// (0x00048bb4) cell_graphic2_catg_pane_g1

0xdb72,	// (0x000480ac) cell_tb_ext_pane_t1_ParamLimits

0x7818,	// (0x00041d52) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7818,	// (0x00041d52) vkb2_top_cell_right_narrow_pane

0x7830,	// (0x00041d6a) vkb2_top_cell_right_wide_pane_ParamLimits

0x7830,	// (0x00041d6a) vkb2_top_cell_right_wide_pane

0x6efb,	// (0x00041435) bg_vkb2_func_pane_ParamLimits

0x6efb,	// (0x00041435) bg_vkb2_func_pane

0x78a1,	// (0x00041ddb) vkb2_top_cell_left_pane_g1_ParamLimits

0x6efb,	// (0x00041435) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6efb,	// (0x00041435) bg_vkb2_fuc_pane_cp03

0x78ff,	// (0x00041e39) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cea,	// (0x00044224) bg_vkb2_func_pane_g1

0x9cf2,	// (0x0004422c) bg_vkb2_func_pane_g2

0x9d02,	// (0x0004423c) bg_vkb2_func_pane_g3

0x9cfa,	// (0x00044234) bg_vkb2_func_pane_g4

0x9d0a,	// (0x00044244) bg_vkb2_func_pane_g5

0x9d12,	// (0x0004424c) bg_vkb2_func_pane_g6

0x9d1a,	// (0x00044254) bg_vkb2_func_pane_g7

0x9d22,	// (0x0004425c) bg_vkb2_func_pane_g8

0x9ce2,	// (0x0004421c) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x0004a33a) bg_vkb2_func_pane_g

0x6efb,	// (0x00041435) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6efb,	// (0x00041435) bg_vkb2_fuc_pane_cp01

0x78a1,	// (0x00041ddb) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x78a1,	// (0x00041ddb) vkb2_top_cell_right_wide_pane_g1

0x6efb,	// (0x00041435) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6efb,	// (0x00041435) bg_vkb2_fuc_pane_cp02

0x78ff,	// (0x00041e39) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x78ff,	// (0x00041e39) vkb2_top_cell_right_narrow_pane_g1

0xd79e,	// (0x00047cd8) aid_touch_area_decrease_ParamLimits

0xd79e,	// (0x00047cd8) aid_touch_area_decrease

0xd7c2,	// (0x00047cfc) aid_touch_area_increase_ParamLimits

0xd7c2,	// (0x00047cfc) aid_touch_area_increase

0xd7ce,	// (0x00047d08) aid_touch_area_mute_ParamLimits

0xd7ce,	// (0x00047d08) aid_touch_area_mute

0xd7f2,	// (0x00047d2c) aid_touch_area_slider_ParamLimits

0xd7f2,	// (0x00047d2c) aid_touch_area_slider

0xd8de,	// (0x00047e18) popup_slider_window_g4_ParamLimits

0xd8de,	// (0x00047e18) popup_slider_window_g4

0xd8ea,	// (0x00047e24) popup_slider_window_g5_ParamLimits

0xd8ea,	// (0x00047e24) popup_slider_window_g5

0xd90c,	// (0x00047e46) popup_slider_window_g6_ParamLimits

0xd90c,	// (0x00047e46) popup_slider_window_g6

0xd94c,	// (0x00047e86) popup_slider_window_t2_ParamLimits

0xd94c,	// (0x00047e86) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x0004a236) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x0004a236) popup_slider_window_t

0xd964,	// (0x00047e9e) slider_pane_ParamLimits

0xd964,	// (0x00047e9e) slider_pane

0xe683,	// (0x00048bbd) slider_pane_g1_ParamLimits

0xe683,	// (0x00048bbd) slider_pane_g1

0xe697,	// (0x00048bd1) slider_pane_g2_ParamLimits

0xe697,	// (0x00048bd1) slider_pane_g2

0xe6ad,	// (0x00048be7) slider_pane_g3_ParamLimits

0xe6ad,	// (0x00048be7) slider_pane_g3

0x0003,

0xfe13,	// (0x0004a34d) slider_pane_g_ParamLimits

0xfe13,	// (0x0004a34d) slider_pane_g

0x682c,	// (0x00040d66) popup_tb_float_extension_window_ParamLimits

0x682c,	// (0x00040d66) popup_tb_float_extension_window

0xe6d9,	// (0x00048c13) aid_size_cell_tb_float_ext

0x7ed8,	// (0x00042412) bg_popup_sub_window_cp28

0xe6e5,	// (0x00048c1f) grid_tb_float_ext_pane

0xe6ef,	// (0x00048c29) cell_tb_float_ext_pane_ParamLimits

0xe6ef,	// (0x00048c29) cell_tb_float_ext_pane

0xe709,	// (0x00048c43) cell_tb_float_ext_pane_g1

0xe712,	// (0x00048c4c) grid_highlight_pane_cp12

0x703c,	// (0x00041576) cell_last_hwr_side_pane_ParamLimits

0x703c,	// (0x00041576) cell_last_hwr_side_pane

0xc29d,	// (0x000467d7) cell_last_hwr_side_pane_g1

0xe71b,	// (0x00048c55) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x0004a356) cell_last_hwr_side_pane_g

0x77c7,	// (0x00041d01) vkb2_area_bottom_space_btn_pane_ParamLimits

0x77c7,	// (0x00041d01) vkb2_area_bottom_space_btn_pane

0xc50b,	// (0x00046a45) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1c7,	// (0x00048701) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7a45,	// (0x00041f7f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a64,	// (0x00041f9e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a64,	// (0x00041f9e) vkb2_area_bottom_space_btn_pane_g1

0x7a9e,	// (0x00041fd8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a9e,	// (0x00041fd8) vkb2_area_bottom_space_btn_pane_g2

0x7ad4,	// (0x0004200e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7ad4,	// (0x0004200e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x0004a35b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x0004a35b) vkb2_area_bottom_space_btn_pane_g

0x6fb0,	// (0x000414ea) cel_fep_hwr_func_pane_ParamLimits

0x6fb0,	// (0x000414ea) cel_fep_hwr_func_pane

0x6fec,	// (0x00041526) cell_hwr_side_button_pane_ParamLimits

0x6fec,	// (0x00041526) cell_hwr_side_button_pane

0xdba6,	// (0x000480e0) aid_area_touch_clock_ParamLimits

0x8255,	// (0x0004278f) bg_uniindi_top_pane_ParamLimits

0xdbb8,	// (0x000480f2) uniindi_top_pane_g1_ParamLimits

0xdbce,	// (0x00048108) uniindi_top_pane_g2_ParamLimits

0xdbda,	// (0x00048114) uniindi_top_pane_g3_ParamLimits

0xdbeb,	// (0x00048125) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x0004a26e) uniindi_top_pane_g_ParamLimits

0xdbf8,	// (0x00048132) uniindi_top_pane_t1_ParamLimits

0x8255,	// (0x0004278f) bg_vkb2_func_pane_cp01_ParamLimits

0x8255,	// (0x0004278f) bg_vkb2_func_pane_cp01

0xe724,	// (0x00048c5e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe724,	// (0x00048c5e) cel_fep_hwr_func_pane_g1

0x8255,	// (0x0004278f) bg_vkb2_func_pane_cp02_ParamLimits

0x8255,	// (0x0004278f) bg_vkb2_func_pane_cp02

0xe724,	// (0x00048c5e) cell_hwr_side_button_pane_g1_ParamLimits

0xe724,	// (0x00048c5e) cell_hwr_side_button_pane_g1

0x9b63,	// (0x0004409d) status_pane_g4_ParamLimits

0x9b63,	// (0x0004409d) status_pane_g4

0x9b7d,	// (0x000440b7) status_pane_t1

0xbfb7,	// (0x000464f1) form2_midp_gauge_slider_cont_pane

0xbfbf,	// (0x000464f9) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfd1,	// (0x0004650b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfe3,	// (0x0004651d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x0004a03a) form2_midp_gauge_slider_pane_t_ParamLimits

0xbff5,	// (0x0004652f) form2_midp_slider_pane_ParamLimits

0x7436,	// (0x00041970) aid_size_cell_func_vkb2_ParamLimits

0x7436,	// (0x00041970) aid_size_cell_func_vkb2

0xe6c5,	// (0x00048bff) slider_pane_g4_ParamLimits

0xe6c5,	// (0x00048bff) slider_pane_g4

0x7b1e,	// (0x00042058) form2_midp_gauge_slider_pane_t2_cp01

0x7b2c,	// (0x00042066) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7b2c,	// (0x00042066) form2_midp_gauge_slider_pane_t3_cp01

0x7b49,	// (0x00042083) form2_midp_slider_pane_cp01

0x7ed8,	// (0x00042412) navi_smil_pane

0xe75d,	// (0x00048c97) navi_smil_pane_g1

0xe765,	// (0x00048c9f) navi_smil_pane_t1

0xe732,	// (0x00048c6c) form2_midp_slider_pane_g1

0xe73b,	// (0x00048c75) form2_midp_slider_pane_g2

0xe743,	// (0x00048c7d) form2_midp_slider_pane_g3

0xe732,	// (0x00048c6c) form2_midp_slider_pane_g4

0xe74b,	// (0x00048c85) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x0004a364) form2_midp_slider_pane_g

0x7b0e,	// (0x00042048) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7b0e,	// (0x00042048) vkb2_area_bottom_space_btn_pane_g4

0x998e,	// (0x00043ec8) lc0_navi_pane_ParamLimits

0x998e,	// (0x00043ec8) lc0_navi_pane

0x9a10,	// (0x00043f4a) lc0_stat_indi_pane_ParamLimits

0x9a10,	// (0x00043f4a) lc0_stat_indi_pane

0x9a27,	// (0x00043f61) ls0_title_pane_ParamLimits

0x9a27,	// (0x00043f61) ls0_title_pane

0x884a,	// (0x00042d84) bg_popup_sub_pane_cp14_ParamLimits

0xdb8d,	// (0x000480c7) list_uniindi_pane_ParamLimits

0xdb99,	// (0x000480d3) uniindi_top_pane_ParamLimits

0xdc35,	// (0x0004816f) list_single_uniindi_pane_g1_ParamLimits

0xdc48,	// (0x00048182) list_single_uniindi_pane_t1_ParamLimits

0x7b52,	// (0x0004208c) lc0_stat_clock_pane_ParamLimits

0x7b52,	// (0x0004208c) lc0_stat_clock_pane

0xe773,	// (0x00048cad) lc0_stat_indi_pane_g1_ParamLimits

0xe773,	// (0x00048cad) lc0_stat_indi_pane_g1

0xe780,	// (0x00048cba) lc0_stat_indi_pane_g2_ParamLimits

0xe780,	// (0x00048cba) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x0004a36f) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x0004a36f) lc0_stat_indi_pane_g

0x7b5f,	// (0x00042099) lc0_uni_indicator_pane_ParamLimits

0x7b5f,	// (0x00042099) lc0_uni_indicator_pane

0xe78d,	// (0x00048cc7) ls0_title_pane_g1_ParamLimits

0xe78d,	// (0x00048cc7) ls0_title_pane_g1

0xe7a1,	// (0x00048cdb) ls0_title_pane_t1_ParamLimits

0xe7a1,	// (0x00048cdb) ls0_title_pane_t1

0x7b6c,	// (0x000420a6) lc0_uni_indicator_pane_g1_ParamLimits

0x7b6c,	// (0x000420a6) lc0_uni_indicator_pane_g1

0xe7d7,	// (0x00048d11) lc0_stat_clock_pane_t1

0x7ed8,	// (0x00042412) main_ai5_pane

0xe7e5,	// (0x00048d1f) ai5_sk_pane_ParamLimits

0xe7e5,	// (0x00048d1f) ai5_sk_pane

0xe7f2,	// (0x00048d2c) cell_ai5_widget_pane_ParamLimits

0xe7f2,	// (0x00048d2c) cell_ai5_widget_pane

0xe8bc,	// (0x00048df6) aid_size_cell_widget_grid

0xe8d2,	// (0x00048e0c) bg_ai5_widget_pane_ParamLimits

0xe8d2,	// (0x00048e0c) bg_ai5_widget_pane

0xe946,	// (0x00048e80) cell_ai5_widget_pane_g2

0xe956,	// (0x00048e90) cell_ai5_widget_pane_g3

0xe96d,	// (0x00048ea7) cell_ai5_widget_pane_g4

0xe979,	// (0x00048eb3) cell_ai5_widget_pane_g5

0xe985,	// (0x00048ebf) cell_ai5_widget_pane_g6

0xe991,	// (0x00048ecb) cell_ai5_widget_pane_g7

0xe9d9,	// (0x00048f13) cell_ai5_widget_pane_t1_ParamLimits

0xe9d9,	// (0x00048f13) cell_ai5_widget_pane_t1

0xe9f6,	// (0x00048f30) cell_ai5_widget_pane_t2_ParamLimits

0xe9f6,	// (0x00048f30) cell_ai5_widget_pane_t2

0xea0e,	// (0x00048f48) cell_ai5_widget_pane_t3_ParamLimits

0xea0e,	// (0x00048f48) cell_ai5_widget_pane_t3

0xea26,	// (0x00048f60) cell_ai5_widget_pane_t4_ParamLimits

0xea26,	// (0x00048f60) cell_ai5_widget_pane_t4

0xea43,	// (0x00048f7d) cell_ai5_widget_pane_t5_ParamLimits

0xea43,	// (0x00048f7d) cell_ai5_widget_pane_t5

0xea62,	// (0x00048f9c) cell_ai5_widget_pane_t6_ParamLimits

0xea62,	// (0x00048f9c) cell_ai5_widget_pane_t6

0xea74,	// (0x00048fae) cell_ai5_widget_pane_t7_ParamLimits

0xea74,	// (0x00048fae) cell_ai5_widget_pane_t7

0xea8d,	// (0x00048fc7) cell_ai5_widget_pane_t8_ParamLimits

0xea8d,	// (0x00048fc7) cell_ai5_widget_pane_t8

0x0009,

0x0019,	// (0x0003a553) cell_ai5_widget_pane_t_ParamLimits

0x0019,	// (0x0003a553) cell_ai5_widget_pane_t

0xeae1,	// (0x0004901b) grid_ai5_widget_pane

0x884a,	// (0x00042d84) highlight_cell_ai5_widget_pane_ParamLimits

0x884a,	// (0x00042d84) highlight_cell_ai5_widget_pane

0xeaf9,	// (0x00049033) ai5_sk_left_pane

0xeb03,	// (0x0004903d) ai5_sk_middle_pane

0xeb0d,	// (0x00049047) ai5_sk_right_pane

0xeb17,	// (0x00049051) bg_ai5_widget_pane_g1_ParamLimits

0xeb17,	// (0x00049051) bg_ai5_widget_pane_g1

0xeb23,	// (0x0004905d) bg_ai5_widget_pane_g2_ParamLimits

0xeb23,	// (0x0004905d) bg_ai5_widget_pane_g2

0xeb2f,	// (0x00049069) bg_ai5_widget_pane_g3_ParamLimits

0xeb2f,	// (0x00049069) bg_ai5_widget_pane_g3

0xeb3b,	// (0x00049075) bg_ai5_widget_pane_g4_ParamLimits

0xeb3b,	// (0x00049075) bg_ai5_widget_pane_g4

0xeb47,	// (0x00049081) bg_ai5_widget_pane_g5_ParamLimits

0xeb47,	// (0x00049081) bg_ai5_widget_pane_g5

0xeb53,	// (0x0004908d) bg_ai5_widget_pane_g6_ParamLimits

0xeb53,	// (0x0004908d) bg_ai5_widget_pane_g6

0xeb5f,	// (0x00049099) bg_ai5_widget_pane_g7_ParamLimits

0xeb5f,	// (0x00049099) bg_ai5_widget_pane_g7

0xeb6b,	// (0x000490a5) bg_ai5_widget_pane_g8_ParamLimits

0xeb6b,	// (0x000490a5) bg_ai5_widget_pane_g8

0xeb77,	// (0x000490b1) bg_ai5_widget_pane_g9_ParamLimits

0xeb77,	// (0x000490b1) bg_ai5_widget_pane_g9

0x0008,

0x002e,	// (0x0003a568) bg_ai5_widget_pane_g_ParamLimits

0x002e,	// (0x0003a568) bg_ai5_widget_pane_g

0xeba9,	// (0x000490e3) cell_shortcut_ai5_widget_pane_ParamLimits

0xeba9,	// (0x000490e3) cell_shortcut_ai5_widget_pane

0x949e,	// (0x000439d8) bg_cell_shortcut_ai5_widget_pane

0xebba,	// (0x000490f4) cell_grid_ai5_widget_pane_g1

0x949e,	// (0x000439d8) highlight_cell_shortcut_ai5_widget_pane

0x9cf2,	// (0x0004422c) ai5_sk_left_pane_g1

0xebc3,	// (0x000490fd) ai5_sk_left_pane_g2

0xebcb,	// (0x00049105) ai5_sk_left_pane_g3

0xebd3,	// (0x0004910d) ai5_sk_left_pane_g4

0x0003,

0xfe3a,	// (0x0004a374) ai5_sk_left_pane_g

0xebdb,	// (0x00049115) ai5_sk_left_pane_t1

0x9cea,	// (0x00044224) ai5_sk_right_pane_g1

0xebe9,	// (0x00049123) ai5_sk_right_pane_g2

0xebf1,	// (0x0004912b) ai5_sk_right_pane_g3

0xebf9,	// (0x00049133) ai5_sk_right_pane_g4

0x0003,

0xfe43,	// (0x0004a37d) ai5_sk_right_pane_g

0xec01,	// (0x0004913b) ai5_sk_right_pane_t1

0x9cea,	// (0x00044224) ai5_sk_middle_pane_g1

0x9cf2,	// (0x0004422c) ai5_sk_middle_pane_g2

0x9d0a,	// (0x00044244) ai5_sk_middle_pane_g3

0xebf1,	// (0x0004912b) ai5_sk_middle_pane_g4

0xebcb,	// (0x00049105) ai5_sk_middle_pane_g5

0xec0f,	// (0x00049149) ai5_sk_middle_pane_g6

0xec17,	// (0x00049151) ai5_sk_middle_pane_g7

0x0006,

0xfe4c,	// (0x0004a386) ai5_sk_middle_pane_g

0x981e,	// (0x00043d58) aid_touch_area_size_lc0_ParamLimits

0x981e,	// (0x00043d58) aid_touch_area_size_lc0

0x713b,	// (0x00041675) cell_hwr_candidate_pane_t1_ParamLimits

0x983a,	// (0x00043d74) aid_touch_navi_pane

0x9b15,	// (0x0004404f) status_dt_navi_pane_ParamLimits

0x9b15,	// (0x0004404f) status_dt_navi_pane

0x9b22,	// (0x0004405c) status_dt_sta_pane_ParamLimits

0x9b22,	// (0x0004405c) status_dt_sta_pane

0xec1f,	// (0x00049159) dt_sta_controll_pane

0xec2c,	// (0x00049166) dt_sta_indi_pane

0xec3d,	// (0x00049177) dt_sta_title_pane

0x8255,	// (0x0004278f) bg_dt_sta_indi_pane_ParamLimits

0x8255,	// (0x0004278f) bg_dt_sta_indi_pane

0xec50,	// (0x0004918a) dt_sta_battery_pane

0xec58,	// (0x00049192) dt_sta_indi_pane_g1

0xec61,	// (0x0004919b) dt_sta_indi_pane_g2

0xec6a,	// (0x000491a4) dt_sta_indi_pane_g3

0x0002,

0x0062,	// (0x0003a59c) dt_sta_indi_pane_g

0xec73,	// (0x000491ad) dt_sta_signal_pane

0x884a,	// (0x00042d84) bg_dt_sta_title_pane_ParamLimits

0x884a,	// (0x00042d84) bg_dt_sta_title_pane

0xec7c,	// (0x000491b6) dt_sta_title_pane_g1

0xec84,	// (0x000491be) dt_sta_title_pane_t1_ParamLimits

0xec84,	// (0x000491be) dt_sta_title_pane_t1

0x7ed8,	// (0x00042412) bg_dt_sta_control_pane

0xec99,	// (0x000491d3) dt_sta_controll_pane_g1

0xeca2,	// (0x000491dc) bg_dt_sta_title_pane_g1

0xecab,	// (0x000491e5) bg_dt_sta_title_pane_g2

0xecb4,	// (0x000491ee) bg_dt_sta_title_pane_g3

0x0002,

0x0069,	// (0x0003a5a3) bg_dt_sta_title_pane_g

0xc29d,	// (0x000467d7) bg_dt_sta_indi_pane_g1

0xecbd,	// (0x000491f7) dt_sta_signal_pane_g1

0xecc5,	// (0x000491ff) dt_sta_signal_pane_g2

0x0001,

0x0070,	// (0x0003a5aa) dt_sta_signal_pane_g

0xeccd,	// (0x00049207) dt_sta_battery_pane_g1

0xecd6,	// (0x00049210) dt_sta_battery_pane_t1

0xc29d,	// (0x000467d7) bg_dt_sta_control_pane_g1

0x8fa0,	// (0x000434da) fep_china_uni_eep_pane

0x8fa8,	// (0x000434e2) fep_china_uni_entry_pane_ParamLimits

0x8fb8,	// (0x000434f2) popup_fep_china_uni_window_g1_ParamLimits

0x8fc8,	// (0x00043502) popup_fep_china_uni_window_g2_ParamLimits

0x8fc8,	// (0x00043502) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00049c5c) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00049c5c) popup_fep_china_uni_window_g

0xece5,	// (0x0004921f) fep_china_uni_eep_pane_g1

0xeced,	// (0x00049227) fep_china_uni_eep_pane_t1

0xe754,	// (0x00048c8e) aid_touch_area_size_smil_player

0x9986,	// (0x00043ec0) lc0_clock_pane

0x9b71,	// (0x000440ab) status_pane_g5_ParamLimits

0x9b71,	// (0x000440ab) status_pane_g5

0x64f3,	// (0x00040a2d) popup_keymap_window

0x9b37,	// (0x00044071) status_icon_pane

0xe956,	// (0x00048e90) cell_ai5_widget_pane_g3_ParamLimits

0xe96d,	// (0x00048ea7) cell_ai5_widget_pane_g4_ParamLimits

0xe979,	// (0x00048eb3) cell_ai5_widget_pane_g5_ParamLimits

0xe99d,	// (0x00048ed7) cell_ai5_widget_pane_g8_ParamLimits

0xe99d,	// (0x00048ed7) cell_ai5_widget_pane_g8

0xe9b1,	// (0x00048eeb) cell_ai5_widget_pane_g9_ParamLimits

0xe9b1,	// (0x00048eeb) cell_ai5_widget_pane_g9

0xe9c5,	// (0x00048eff) cell_ai5_widget_pane_g10_ParamLimits

0xe9c5,	// (0x00048eff) cell_ai5_widget_pane_g10

0xecfc,	// (0x00049236) status_icon_pane_g1

0x7ed8,	// (0x00042412) bg_popup_sub_pane_cp13

0xed04,	// (0x0004923e) popup_keymap_window_t1

0x9763,	// (0x00043c9d) control_pane_g6_ParamLimits

0x9763,	// (0x00043c9d) control_pane_g6

0x9770,	// (0x00043caa) control_pane_g7_ParamLimits

0x9770,	// (0x00043caa) control_pane_g7

0x977d,	// (0x00043cb7) control_pane_g8_ParamLimits

0x977d,	// (0x00043cb7) control_pane_g8

0xec1f,	// (0x00049159) dt_sta_controll_pane_ParamLimits

0xec2c,	// (0x00049166) dt_sta_indi_pane_ParamLimits

0xec3d,	// (0x00049177) dt_sta_title_pane_ParamLimits

0x875e,	// (0x00042c98) aid_size_touch_scroll_bar_cale

0x5ab9,	// (0x0003fff3) popup_discreet_window_ParamLimits

0x5ab9,	// (0x0003fff3) popup_discreet_window

0x5b33,	// (0x0004006d) popup_sk_window

0xa368,	// (0x000448a2) bg_popup_sub_pane_cp28_ParamLimits

0xa368,	// (0x000448a2) bg_popup_sub_pane_cp28

0xed12,	// (0x0004924c) popup_discreet_window_g1_ParamLimits

0xed12,	// (0x0004924c) popup_discreet_window_g1

0xed32,	// (0x0004926c) popup_discreet_window_t1_ParamLimits

0xed32,	// (0x0004926c) popup_discreet_window_t1

0xed50,	// (0x0004928a) popup_discreet_window_t2_ParamLimits

0xed50,	// (0x0004928a) popup_discreet_window_t2

0x0002,

0x0075,	// (0x0003a5af) popup_discreet_window_t_ParamLimits

0x0075,	// (0x0003a5af) popup_discreet_window_t

0x7b81,	// (0x000420bb) popup_sk_window_g1

0x7b8b,	// (0x000420c5) popup_sk_window_g2

0x0001,

0xfe5b,	// (0x0004a395) popup_sk_window_g

0x7b95,	// (0x000420cf) popup_sk_window_t1

0x7ba3,	// (0x000420dd) popup_sk_window_t1_copy1

0xe946,	// (0x00048e80) cell_ai5_widget_pane_g2_ParamLimits

0xea9f,	// (0x00048fd9) cell_ai5_widget_pane_t9_ParamLimits

0xea9f,	// (0x00048fd9) cell_ai5_widget_pane_t9

0x7ed8,	// (0x00042412) main_fep_fshwr2_pane

0x7bb1,	// (0x000420eb) aid_fshwr2_btn_pane

0x7bbd,	// (0x000420f7) aid_fshwr2_syb_pane

0x7bc9,	// (0x00042103) aid_fshwr2_txt_pane

0x7bd5,	// (0x0004210f) fshwr2_func_candi_pane

0x7bea,	// (0x00042124) fshwr2_hwr_syb_pane

0x7bfa,	// (0x00042134) fshwr2_icf_pane

0x7ed8,	// (0x00042412) fshwr2_icf_bg_pane

0x7c23,	// (0x0004215d) fshwr2_icf_pane_t1_ParamLimits

0x7c23,	// (0x0004215d) fshwr2_icf_pane_t1

0x8e92,	// (0x000433cc) fshwr2_func_candi_pane_g1

0xeda2,	// (0x000492dc) fshwr2_func_candi_row_pane_ParamLimits

0xeda2,	// (0x000492dc) fshwr2_func_candi_row_pane

0x7c3b,	// (0x00042175) cell_fshwr2_syb_pane_ParamLimits

0x7c3b,	// (0x00042175) cell_fshwr2_syb_pane

0xc50b,	// (0x00046a45) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc50b,	// (0x00046a45) fshwr2_hwr_syb_pane_g1

0x7ed8,	// (0x00042412) bg_popup_call_pane_cp01

0x7c51,	// (0x0004218b) fshwr2_func_candi_cell_pane_ParamLimits

0x7c51,	// (0x0004218b) fshwr2_func_candi_cell_pane

0xa9e4,	// (0x00044f1e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa9e4,	// (0x00044f1e) fshwr2_func_candi_cell_bg_pane

0x7c86,	// (0x000421c0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7c86,	// (0x000421c0) fshwr2_func_candi_cell_pane_g1

0x7ca6,	// (0x000421e0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7ca6,	// (0x000421e0) fshwr2_func_candi_cell_pane_t1

0x7ed8,	// (0x00042412) bg_button_pane_cp08

0xb684,	// (0x00045bbe) cell_fshwr2_syb_bg_pane

0x7cb9,	// (0x000421f3) cell_fshwr2_syb_bg_pane_g1

0x7cc1,	// (0x000421fb) cell_fshwr2_syb_bg_pane_t1

0x884a,	// (0x00042d84) main_tmo_pane

0xae7d,	// (0x000453b7) uni_indicator_pane_g1_ParamLimits

0xae93,	// (0x000453cd) uni_indicator_pane_g2_ParamLimits

0xaea9,	// (0x000453e3) uni_indicator_pane_g3_ParamLimits

0xaebe,	// (0x000453f8) uni_indicator_pane_g4_ParamLimits

0xaebe,	// (0x000453f8) uni_indicator_pane_g4

0xaed2,	// (0x0004540c) uni_indicator_pane_g5_ParamLimits

0xaed2,	// (0x0004540c) uni_indicator_pane_g5

0xaed2,	// (0x0004540c) uni_indicator_pane_g6_ParamLimits

0xaed2,	// (0x0004540c) uni_indicator_pane_g6

0xf921,	// (0x00049e5b) uni_indicator_pane_g_ParamLimits

0xd780,	// (0x00047cba) popup_tmo_note_window_ParamLimits

0xd780,	// (0x00047cba) popup_tmo_note_window

0x884a,	// (0x00042d84) fshwr2_bg_pane

0x7c97,	// (0x000421d1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c97,	// (0x000421d1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe60,	// (0x0004a39a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe60,	// (0x0004a39a) fshwr2_func_candi_cell_pane_g

0xc29d,	// (0x000467d7) bg_popup_window_pane_cp01

0x7cd0,	// (0x0004220a) bg_popup_window_pane_g1_cp01

0xedb2,	// (0x000492ec) bg_popup_window_pane_cp22_ParamLimits

0xedb2,	// (0x000492ec) bg_popup_window_pane_cp22

0xedc0,	// (0x000492fa) listscroll_tmo_link_pane_ParamLimits

0xedc0,	// (0x000492fa) listscroll_tmo_link_pane

0xee00,	// (0x0004933a) popup_tmo_note_window_g1_ParamLimits

0xee00,	// (0x0004933a) popup_tmo_note_window_g1

0xee0d,	// (0x00049347) tmo_note_info_pane_ParamLimits

0xee0d,	// (0x00049347) tmo_note_info_pane

0xee27,	// (0x00049361) list_tmo_note_info_pane_g1_ParamLimits

0xee27,	// (0x00049361) list_tmo_note_info_pane_g1

0xee3e,	// (0x00049378) list_tmo_note_info_pane_g2_ParamLimits

0xee3e,	// (0x00049378) list_tmo_note_info_pane_g2

0x0001,

0x0086,	// (0x0003a5c0) list_tmo_note_info_pane_g_ParamLimits

0x0086,	// (0x0003a5c0) list_tmo_note_info_pane_g

0xee5a,	// (0x00049394) list_tmo_note_info_text_pane_ParamLimits

0xee5a,	// (0x00049394) list_tmo_note_info_text_pane

0xeedd,	// (0x00049417) list_tmo_link_pane

0xeeea,	// (0x00049424) scroll_pane_cp20

0xeef7,	// (0x00049431) list_single_tmo_link_pane_ParamLimits

0xeef7,	// (0x00049431) list_single_tmo_link_pane

0xef07,	// (0x00049441) list_single_tmo_link_pane_t1

0xef15,	// (0x0004944f) list_tmo_note_info_text_pane_t1_ParamLimits

0xef15,	// (0x0004944f) list_tmo_note_info_text_pane_t1

0x88f8,	// (0x00042e32) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88f8,	// (0x00042e32) aid_size_touch_scroll_bar_cp01

0x4f83,	// (0x0003f4bd) aid_size_touch_slider_marker

0x5b1b,	// (0x00040055) popup_settings_window_ParamLimits

0x5b1b,	// (0x00040055) popup_settings_window

0x510b,	// (0x0003f645) popup_candi_list_indi_window

0x983a,	// (0x00043d74) aid_touch_navi_pane_ParamLimits

0x738f,	// (0x000418c9) rs_clock_indi_pane

0x7398,	// (0x000418d2) sctrl_sk_bottom_pane_ParamLimits

0x73a9,	// (0x000418e3) sctrl_sk_top_pane_ParamLimits

0x7490,	// (0x000419ca) popup_fep_tooltip_window

0xe8bc,	// (0x00048df6) aid_size_cell_widget_grid_ParamLimits

0xe931,	// (0x00048e6b) cell_ai5_widget_pane_g1_ParamLimits

0xe931,	// (0x00048e6b) cell_ai5_widget_pane_g1

0xe985,	// (0x00048ebf) cell_ai5_widget_pane_g6_ParamLimits

0xe991,	// (0x00048ecb) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0004,	// (0x0003a53e) cell_ai5_widget_pane_g_ParamLimits

0x0004,	// (0x0003a53e) cell_ai5_widget_pane_g

0xeac3,	// (0x00048ffd) cell_ai5_widget_pane_t10_ParamLimits

0xeac3,	// (0x00048ffd) cell_ai5_widget_pane_t10

0xeae1,	// (0x0004901b) grid_ai5_widget_pane_ParamLimits

0xeb83,	// (0x000490bd) cell_contacts_ai5_widget_pane_ParamLimits

0xeb83,	// (0x000490bd) cell_contacts_ai5_widget_pane

0xed65,	// (0x0004929f) popup_discreet_window_t3_ParamLimits

0xed65,	// (0x0004929f) popup_discreet_window_t3

0x7c0f,	// (0x00042149) popup_fshwr2_char_preview_window_ParamLimits

0x7c0f,	// (0x00042149) popup_fshwr2_char_preview_window

0xee78,	// (0x000493b2) tmo_note_info_pane_t1

0xee8d,	// (0x000493c7) tmo_note_info_pane_t2

0xeea4,	// (0x000493de) tmo_note_info_pane_t3

0xeeb9,	// (0x000493f3) tmo_note_info_pane_t4

0xeecb,	// (0x00049405) tmo_note_info_pane_t5

0x0004,

0x008b,	// (0x0003a5c5) tmo_note_info_pane_t

0xeedd,	// (0x00049417) list_tmo_link_pane_ParamLimits

0xeeea,	// (0x00049424) scroll_pane_cp20_ParamLimits

0x7ed8,	// (0x00042412) bg_popup_fep_char_preview_window_cp01

0xef2e,	// (0x00049468) popup_fshwr2_char_preview_window_t1

0xef3c,	// (0x00049476) popup_candi_list_indi_window_g1

0xef45,	// (0x0004947f) bg_cell_contacts_ai5_widget_pane

0xef51,	// (0x0004948b) cell_contacts_ai5_widget_pane_g1

0xef66,	// (0x000494a0) cell_contacts_ai5_widget_pane_g2

0xef72,	// (0x000494ac) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe65,	// (0x0004a39f) cell_contacts_ai5_widget_pane_g

0xef7e,	// (0x000494b8) cell_contacts_ai5_widget_pane_t1

0x884a,	// (0x00042d84) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff5,	// (0x0004952f) settings_container_pane

0x949e,	// (0x000439d8) listscroll_set_pane_copy1

0xb973,	// (0x00045ead) scroll_pane_cp121_copy1

0xf001,	// (0x0004953b) set_content_pane_copy1

0xf009,	// (0x00049543) aid_height_set_list_copy1_ParamLimits

0xf009,	// (0x00049543) aid_height_set_list_copy1

0xb0c5,	// (0x000455ff) aid_size_parent_copy1_ParamLimits

0xb0c5,	// (0x000455ff) aid_size_parent_copy1

0xf015,	// (0x0004954f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf015,	// (0x0004954f) button_value_adjust_pane_cp6_copy1

0x97d8,	// (0x00043d12) list_highlight_pane_cp2_copy1_ParamLimits

0x97d8,	// (0x00043d12) list_highlight_pane_cp2_copy1

0xf029,	// (0x00049563) list_set_pane_copy1_ParamLimits

0xf029,	// (0x00049563) list_set_pane_copy1

0xef90,	// (0x000494ca) main_pane_set_t1_copy1_ParamLimits

0xef90,	// (0x000494ca) main_pane_set_t1_copy1

0xefca,	// (0x00049504) main_pane_set_t2_copy1_ParamLimits

0xefca,	// (0x00049504) main_pane_set_t2_copy1

0xf0d6,	// (0x00049610) main_pane_set_t3_copy1

0xf0e4,	// (0x0004961e) main_pane_set_t4_copy1

0xefe9,	// (0x00049523) set_content_pane_g1_copy1_ParamLimits

0xefe9,	// (0x00049523) set_content_pane_g1_copy1

0xf0f2,	// (0x0004962c) setting_code_pane_copy1

0xf0fa,	// (0x00049634) setting_slider_graphic_pane_copy1

0xf0fa,	// (0x00049634) setting_slider_pane_copy1

0xf0fa,	// (0x00049634) setting_text_pane_copy1

0xf0fa,	// (0x00049634) setting_volume_pane_copy1

0xf0f2,	// (0x0004962c) settings_code_pane_cp2_copy1

0xf102,	// (0x0004963c) settings_code_pane_cp_copy1_ParamLimits

0xf102,	// (0x0004963c) settings_code_pane_cp_copy1

0x7cd9,	// (0x00042213) volume_set_pane_copy1

0xf116,	// (0x00049650) volume_set_pane_g10_copy1

0xf11e,	// (0x00049658) volume_set_pane_g1_copy1

0xf126,	// (0x00049660) volume_set_pane_g2_copy1

0xf12e,	// (0x00049668) volume_set_pane_g3_copy1

0xf136,	// (0x00049670) volume_set_pane_g4_copy1

0xf13e,	// (0x00049678) volume_set_pane_g5_copy1

0xf146,	// (0x00049680) volume_set_pane_g6_copy1

0xf14e,	// (0x00049688) volume_set_pane_g7_copy1

0xf156,	// (0x00049690) volume_set_pane_g8_copy1

0xf15e,	// (0x00049698) volume_set_pane_g9_copy1

0x7fcc,	// (0x00042506) bg_set_opt_pane_cp_copy1_ParamLimits

0x7fcc,	// (0x00042506) bg_set_opt_pane_cp_copy1

0x7ce1,	// (0x0004221b) setting_slider_pane_t1_copy1_ParamLimits

0x7ce1,	// (0x0004221b) setting_slider_pane_t1_copy1

0x7cff,	// (0x00042239) setting_slider_pane_t2_copy1_ParamLimits

0x7cff,	// (0x00042239) setting_slider_pane_t2_copy1

0x7d19,	// (0x00042253) setting_slider_pane_t3_copy1_ParamLimits

0x7d19,	// (0x00042253) setting_slider_pane_t3_copy1

0x7d31,	// (0x0004226b) slider_set_pane_copy1_ParamLimits

0x7d31,	// (0x0004226b) slider_set_pane_copy1

0x8899,	// (0x00042dd3) set_opt_bg_pane_g1_copy2

0x88a1,	// (0x00042ddb) set_opt_bg_pane_g2_copy2

0xf166,	// (0x000496a0) set_opt_bg_pane_g3_copy2

0x88b1,	// (0x00042deb) set_opt_bg_pane_g4_copy2

0x88b9,	// (0x00042df3) set_opt_bg_pane_g5_copy2

0x88c1,	// (0x00042dfb) set_opt_bg_pane_g6_copy2

0xf170,	// (0x000496aa) set_opt_bg_pane_g7_copy2

0xf178,	// (0x000496b2) set_opt_bg_pane_g8_copy2

0xf182,	// (0x000496bc) set_opt_bg_pane_g9_copy2

0x7d47,	// (0x00042281) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d47,	// (0x00042281) aid_size_touch_slider_mark_copy1

0xf18c,	// (0x000496c6) slider_set_pane_g1_copy1

0x7d5b,	// (0x00042295) slider_set_pane_g2_copy1

0x6c07,	// (0x00041141) slider_set_pane_g3_copy1_ParamLimits

0x6c07,	// (0x00041141) slider_set_pane_g3_copy1

0x6c1b,	// (0x00041155) slider_set_pane_g4_copy1_ParamLimits

0x6c1b,	// (0x00041155) slider_set_pane_g4_copy1

0x6c33,	// (0x0004116d) slider_set_pane_g5_copy1_ParamLimits

0x6c33,	// (0x0004116d) slider_set_pane_g5_copy1

0x6c07,	// (0x00041141) slider_set_pane_g6_copy1_ParamLimits

0x6c07,	// (0x00041141) slider_set_pane_g6_copy1

0x7d63,	// (0x0004229d) slider_set_pane_g7_copy1_ParamLimits

0x7d63,	// (0x0004229d) slider_set_pane_g7_copy1

0x7eec,	// (0x00042426) bg_set_opt_pane_cp2_copy1

0xf195,	// (0x000496cf) setting_slider_graphic_pane_g1_copy1

0xf19e,	// (0x000496d8) setting_slider_graphic_pane_t1_copy1

0xf1ae,	// (0x000496e8) setting_slider_graphic_pane_t2_copy1

0xf1be,	// (0x000496f8) slider_set_pane_cp_copy1

0xf1ce,	// (0x00049708) input_focus_pane_cp1_copy1

0xf1d7,	// (0x00049711) list_set_text_pane_copy1

0xf1df,	// (0x00049719) setting_text_pane_g1_copy1

0x582f,	// (0x0003fd69) set_text_pane_t1_copy1

0xf1ce,	// (0x00049708) input_focus_pane_cp2_copy1

0xf1df,	// (0x00049719) setting_code_pane_g1_copy1

0xf1e8,	// (0x00049722) setting_code_pane_t1_copy1

0xf1f6,	// (0x00049730) list_set_graphic_pane_copy1

0x7eec,	// (0x00042426) bg_set_opt_pane_cp4_copy1

0x919d,	// (0x000436d7) list_set_graphic_pane_g1_copy1_ParamLimits

0x919d,	// (0x000436d7) list_set_graphic_pane_g1_copy1

0xf20a,	// (0x00049744) list_set_graphic_pane_g2_copy1

0x91b5,	// (0x000436ef) list_set_graphic_pane_t1_copy1_ParamLimits

0x91b5,	// (0x000436ef) list_set_graphic_pane_t1_copy1

0xc29d,	// (0x000467d7) rs_clock_indi_pane_g1

0xf212,	// (0x0004974c) rs_clock_indi_pane_t1

0xf220,	// (0x0004975a) rs_indi_pane

0xf228,	// (0x00049762) rs_indi_pane_g1

0xf231,	// (0x0004976b) rs_indi_pane_g2

0xf23a,	// (0x00049774) rs_indi_pane_g3

0x0002,

0x0096,	// (0x0003a5d0) rs_indi_pane_g

0x949e,	// (0x000439d8) bg_popup_preview_window_pane_cp03

0xf243,	// (0x0004977d) popup_fep_tooltip_window_t1

0xcf19,	// (0x00047453) popup_note2_window_g2_ParamLimits

0xcf19,	// (0x00047453) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x0004a1a6) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x0004a1a6) popup_note2_window_g

0xd415,	// (0x0004794f) bg_popup_sub_pane_cp11_ParamLimits

0xd422,	// (0x0004795c) cell_ai3_links_pane_g1_ParamLimits

0xd439,	// (0x00047973) cell_ai3_links_pane_t1

0x582f,	// (0x0003fd69) set_text_pane_t1_copy1_ParamLimits

0x93af,	// (0x000438e9) cell_graphic_popup_pane_cp2_ParamLimits

0x93af,	// (0x000438e9) cell_graphic_popup_pane_cp2

0xf251,	// (0x0004978b) cell_graphic_popup_pane_g1_cp2

0x8571,	// (0x00042aab) cell_graphic_popup_pane_g2_cp2

0xf259,	// (0x00049793) cell_graphic_popup_pane_g3_cp2

0xf261,	// (0x0004979b) cell_graphic_popup_pane_t2_cp2

0x8582,	// (0x00042abc) grid_highlight_pane_cp3_cp2

0x8bd9,	// (0x00043113) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x884a,	// (0x00042d84) main_tmo_pane_ParamLimits

0xd774,	// (0x00047cae) popup_tmo_big_image_note_window

0xe920,	// (0x00048e5a) cell_ai5_widget_list_pane

0xe928,	// (0x00048e62) cell_ai5_widget_lrg_icon_pane

0xee78,	// (0x000493b2) tmo_note_info_pane_t1_ParamLimits

0xee8d,	// (0x000493c7) tmo_note_info_pane_t2_ParamLimits

0xeea4,	// (0x000493de) tmo_note_info_pane_t3_ParamLimits

0xeeb9,	// (0x000493f3) tmo_note_info_pane_t4_ParamLimits

0xeecb,	// (0x00049405) tmo_note_info_pane_t5_ParamLimits

0x008b,	// (0x0003a5c5) tmo_note_info_pane_t_ParamLimits

0xeff5,	// (0x0004952f) settings_container_pane_ParamLimits

0xf1c6,	// (0x00049700) indicator_popup_pane_cp5

0xf1c6,	// (0x00049700) indicator_popup_pane_cp6

0xf1f6,	// (0x00049730) list_set_graphic_pane_copy1_ParamLimits

0x7ed8,	// (0x00042412) bg_popup_window_pane_cp23

0xf26f,	// (0x000497a9) popup_tmo_big_image_note_window_g1

0xf278,	// (0x000497b2) popup_tmo_big_image_note_window_t1

0xf288,	// (0x000497c2) popup_tmo_big_image_note_window_t2

0xf298,	// (0x000497d2) popup_tmo_big_image_note_window_t3

0x0002,

0x009d,	// (0x0003a5d7) popup_tmo_big_image_note_window_t

0xc29d,	// (0x000467d7) cell_ai5_widget_lrg_icon_pane_g1

0xf2a8,	// (0x000497e2) cell_ai5_widget_lrg_icon_pane_t1

0xf2b6,	// (0x000497f0) cell_ai5_widget_list_row_pane_ParamLimits

0xf2b6,	// (0x000497f0) cell_ai5_widget_list_row_pane

0xf2cd,	// (0x00049807) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2cd,	// (0x00049807) cell_ai5_widget_list_row_pane_g1

0xf2da,	// (0x00049814) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2da,	// (0x00049814) cell_ai5_widget_list_row_pane_t1

0xf308,	// (0x00049842) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf308,	// (0x00049842) cell_ai5_widget_list_row_pane_t2

0x0002,

0x00a4,	// (0x0003a5de) cell_ai5_widget_list_row_pane_t_ParamLimits

0x00a4,	// (0x0003a5de) cell_ai5_widget_list_row_pane_t

0x7ed8,	// (0x00042412) main_fep_vtchi_ss_pane

0xf34c,	// (0x00049886) popup_fep_char_pre_window

0xf354,	// (0x0004988e) popup_fep_ituss_window

0xf375,	// (0x000498af) popup_fep_vkbss_window

0xf394,	// (0x000498ce) grid_vkbss_keypad_pane_ParamLimits

0xf394,	// (0x000498ce) grid_vkbss_keypad_pane

0xf3a4,	// (0x000498de) ituss_keypad_pane

0x7d85,	// (0x000422bf) aid_vkbss_key_offset_ParamLimits

0x7d85,	// (0x000422bf) aid_vkbss_key_offset

0x7d91,	// (0x000422cb) cell_vkbss_key_pane_ParamLimits

0x7d91,	// (0x000422cb) cell_vkbss_key_pane

0x9b4b,	// (0x00044085) bg_cell_vkbss_key_g1_ParamLimits

0x9b4b,	// (0x00044085) bg_cell_vkbss_key_g1

0xf3b3,	// (0x000498ed) cell_vkbss_key_3p_pane_ParamLimits

0xf3b3,	// (0x000498ed) cell_vkbss_key_3p_pane

0xf3cd,	// (0x00049907) cell_vkbss_key_g1_ParamLimits

0xf3cd,	// (0x00049907) cell_vkbss_key_g1

0xf3e7,	// (0x00049921) cell_vkbss_key_t1_ParamLimits

0xf3e7,	// (0x00049921) cell_vkbss_key_t1

0x7da7,	// (0x000422e1) cell_ituss_key_pane_ParamLimits

0x7da7,	// (0x000422e1) cell_ituss_key_pane

0xf412,	// (0x0004994c) bg_cell_ituss_key_g1_ParamLimits

0xf412,	// (0x0004994c) bg_cell_ituss_key_g1

0xf41e,	// (0x00049958) cell_ituss_key_pane_g1_ParamLimits

0xf41e,	// (0x00049958) cell_ituss_key_pane_g1

0x7db8,	// (0x000422f2) cell_ituss_key_pane_g2_ParamLimits

0x7db8,	// (0x000422f2) cell_ituss_key_pane_g2

0x0002,

0xfe6c,	// (0x0004a3a6) cell_ituss_key_pane_g_ParamLimits

0xfe6c,	// (0x0004a3a6) cell_ituss_key_pane_g

0x7de4,	// (0x0004231e) cell_ituss_key_t1_ParamLimits

0x7de4,	// (0x0004231e) cell_ituss_key_t1

0x7e1e,	// (0x00042358) cell_ituss_key_t2_ParamLimits

0x7e1e,	// (0x00042358) cell_ituss_key_t2

0x7e4f,	// (0x00042389) cell_ituss_key_t3_ParamLimits

0x7e4f,	// (0x00042389) cell_ituss_key_t3

0x7e1e,	// (0x00042358) cell_ituss_key_t4_ParamLimits

0x7e1e,	// (0x00042358) cell_ituss_key_t4

0x0004,

0xfe73,	// (0x0004a3ad) cell_ituss_key_t_ParamLimits

0xfe73,	// (0x0004a3ad) cell_ituss_key_t

0xf444,	// (0x0004997e) cell_vkbss_key_3p_pane_g1

0xf44c,	// (0x00049986) cell_vkbss_key_3p_pane_g2

0xf454,	// (0x0004998e) cell_vkbss_key_3p_pane_g3

0x0002,

0x00bd,	// (0x0003a5f7) cell_vkbss_key_3p_pane_g

0x7ed8,	// (0x00042412) bg_popup_fep_char_preview_window_cp02

0x7e92,	// (0x000423cc) popup_fep_char_pre_window_t1

0xe8b2,	// (0x00048dec) main_ai5_sk_pane

0xef45,	// (0x0004947f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef51,	// (0x0004948b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef66,	// (0x000494a0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef72,	// (0x000494ac) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe65,	// (0x0004a39f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef7e,	// (0x000494b8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x884a,	// (0x00042d84) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45c,	// (0x00049996) main_ai5_sk_pane_g1

0xa1a6,	// (0x000446e0) popup_query_code_window_g1

0xf36a,	// (0x000498a4) popup_fep_vkb_icf_pane

0xf37e,	// (0x000498b8) popup_fep_vtchi_icf_pane

0xf465,	// (0x0004999f) bg_icf_pane

0xf471,	// (0x000499ab) list_vkb_icf_pane

0xf47d,	// (0x000499b7) bg_icf_pane_cp01

0xf490,	// (0x000499ca) vtchi_icf_list_pane

0xf4a0,	// (0x000499da) list_vkb_icf_pane_t1_ParamLimits

0xf4a0,	// (0x000499da) list_vkb_icf_pane_t1

0xf4b8,	// (0x000499f2) vtchi_icf_list_pane_t1_ParamLimits

0xf4b8,	// (0x000499f2) vtchi_icf_list_pane_t1

0xf354,	// (0x0004988e) popup_fep_ituss_window_ParamLimits

0xf37e,	// (0x000498b8) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a4,	// (0x000498de) ituss_keypad_pane_ParamLimits

0x7d79,	// (0x000422b3) ituss_sks_pane

0xf465,	// (0x0004999f) bg_icf_pane_ParamLimits

0xf330,	// (0x0004986a) icf_edit_indi_pane_ParamLimits

0xf330,	// (0x0004986a) icf_edit_indi_pane

0xf471,	// (0x000499ab) list_vkb_icf_pane_ParamLimits

0xf47d,	// (0x000499b7) bg_icf_pane_cp01_ParamLimits

0xf33f,	// (0x00049879) icf_edit_indi_pane_cp01_ParamLimits

0xf33f,	// (0x00049879) icf_edit_indi_pane_cp01

0xf498,	// (0x000499d2) vtchi_query_pane

0xc50b,	// (0x00046a45) icf_edit_indi_pane_g1_ParamLimits

0xc50b,	// (0x00046a45) icf_edit_indi_pane_g1

0xf531,	// (0x00049a6b) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00049a6b) icf_edit_indi_pane_g2

0x0001,

0xfe83,	// (0x0004a3bd) icf_edit_indi_pane_g_ParamLimits

0xfe83,	// (0x0004a3bd) icf_edit_indi_pane_g

0xf540,	// (0x00049a7a) icf_edit_indi_pane_t1

0xf4da,	// (0x00049a14) bg_input_focus_pane_cp042

0x8755,	// (0x00042c8f) vtchi_button_pane

0xf4e3,	// (0x00049a1d) vtchi_query_pane_t1

0xf4f1,	// (0x00049a2b) vtchi_query_pane_t2

0xf4ff,	// (0x00049a39) vtchi_query_pane_t3

0x0002,

0x00c4,	// (0x0003a5fe) vtchi_query_pane_t

0x7ed8,	// (0x00042412) bg_button_pane_cp13

0xf50d,	// (0x00049a47) vtchi_button_pane_g1

0x7ea1,	// (0x000423db) ituss_sks_pane_g1

0x7eac,	// (0x000423e6) ituss_sks_pane_g2

0x0001,

0xfe7e,	// (0x0004a3b8) ituss_sks_pane_g

0xf515,	// (0x00049a4f) ituss_sks_pane_t1

0xf523,	// (0x00049a5d) ituss_sks_pane_t2

0x0001,

0x00d0,	// (0x0003a60a) ituss_sks_pane_t

0xbce7,	// (0x00046221) indicator_nsta_pane_cp_g1

0xbcf0,	// (0x0004622a) indicator_nsta_pane_cp_g2

0xbcf8,	// (0x00046232) indicator_nsta_pane_cp_g3

0xbd00,	// (0x0004623a) indicator_nsta_pane_cp_g4

0xbd08,	// (0x00046242) indicator_nsta_pane_cp_g5

0xbd08,	// (0x00046242) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x00049ff0) indicator_nsta_pane_cp_g

0xe47b,	// (0x000489b5) cell_graphic2_pane_t2_ParamLimits

0xe47b,	// (0x000489b5) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x0004a2fd) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x0004a2fd) cell_graphic2_pane_t

0xe4a8,	// (0x000489e2) cell_graphic2_control_pane_t1

0x8f50,	// (0x0004348a) signal_pane_g3_ParamLimits

0x8f50,	// (0x0004348a) signal_pane_g3

0x8f62,	// (0x0004349c) signal_pane_g4_ParamLimits

0x8f62,	// (0x0004349c) signal_pane_g4

0xf31a,	// (0x00049854) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31a,	// (0x00049854) cell_ai5_widget_list_row_pane_t3

0xf432,	// (0x0004996c) cell_ituss_key_pane_t1_ParamLimits

0xf432,	// (0x0004996c) cell_ituss_key_pane_t1

0x9de4,	// (0x0004431e) form_field_data_wide_pane_vc_t2_ParamLimits

0x9de4,	// (0x0004431e) form_field_data_wide_pane_vc_t2

0x9df8,	// (0x00044332) form_field_data_wide_pane_vc_t3_ParamLimits

0x9df8,	// (0x00044332) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00049d43) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00049d43) form_field_data_wide_pane_vc_t

0xb9b3,	// (0x00045eed) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9b3,	// (0x00045eed) form_field_slider_wide_pane_vc_t3

0xba8d,	// (0x00045fc7) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba8d,	// (0x00045fc7) form_field_popup_wide_pane_vc_t2

0xbaa4,	// (0x00045fde) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbaa4,	// (0x00045fde) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x00049fdf) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x00049fdf) form_field_popup_wide_pane_vc_t

0x7bb1,	// (0x000420eb) aid_fshwr2_btn_pane_ParamLimits

0x7bbd,	// (0x000420f7) aid_fshwr2_syb_pane_ParamLimits

0x7bc9,	// (0x00042103) aid_fshwr2_txt_pane_ParamLimits

0x884a,	// (0x00042d84) fshwr2_bg_pane_ParamLimits

0x7bd5,	// (0x0004210f) fshwr2_func_candi_pane_ParamLimits

0x7bea,	// (0x00042124) fshwr2_hwr_syb_pane_ParamLimits

0x7bfa,	// (0x00042134) fshwr2_icf_pane_ParamLimits

0x6ec2,	// (0x000413fc) list_double_graphic_pane_vc_g4_ParamLimits

0x6ec2,	// (0x000413fc) list_double_graphic_pane_vc_g4

0x7dd8,	// (0x00042312) cell_ituss_key_pane_g3_ParamLimits

0x7dd8,	// (0x00042312) cell_ituss_key_pane_g3

0x7e80,	// (0x000423ba) cell_ituss_key_t5_ParamLimits

0x7e80,	// (0x000423ba) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large

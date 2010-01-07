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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00036a3e };

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
0x7f98,	// (0x0003e9d6) Screen

0x7fa4,	// (0x0003e9e2) application_window_ParamLimits

0x7fa4,	// (0x0003e9e2) application_window

0xb7d9,	// (0x00042217) screen_g1

0x7fdc,	// (0x0003ea1a) area_bottom_pane_ParamLimits

0x7fdc,	// (0x0003ea1a) area_bottom_pane

0x132d,	// (0x00037d6b) area_top_pane_ParamLimits

0x132d,	// (0x00037d6b) area_top_pane

0x13c1,	// (0x00037dff) main_pane_ParamLimits

0x13c1,	// (0x00037dff) main_pane

0xb7e3,	// (0x00042221) misc_graphics

0x97d3,	// (0x00040211) battery_pane_ParamLimits

0x97d3,	// (0x00040211) battery_pane

0xd638,	// (0x00044076) bg_status_flat_pane_g8

0xd640,	// (0x0004407e) bg_status_flat_pane_g9

0xcd8d,	// (0x000437cb) context_pane_ParamLimits

0xcd8d,	// (0x000437cb) context_pane

0x993e,	// (0x0004037c) navi_pane_ParamLimits

0x993e,	// (0x0004037c) navi_pane

0x99b5,	// (0x000403f3) signal_pane_ParamLimits

0x99b5,	// (0x000403f3) signal_pane

0x0008,

0xf8a1,	// (0x000462df) bg_status_flat_pane_g

0x9a45,	// (0x00040483) status_pane_g1_ParamLimits

0x9a45,	// (0x00040483) status_pane_g1

0x9a5b,	// (0x00040499) status_pane_g2_ParamLimits

0x9a5b,	// (0x00040499) status_pane_g2

0xcdf2,	// (0x00043830) status_pane_g3_ParamLimits

0xcdf2,	// (0x00043830) status_pane_g3

0x0004,

0xf7db,	// (0x00046219) status_pane_g_ParamLimits

0xf7db,	// (0x00046219) status_pane_g

0x9a67,	// (0x000404a5) title_pane_ParamLimits

0x9a67,	// (0x000404a5) title_pane

0x9ac8,	// (0x00040506) uni_indicator_pane_ParamLimits

0x9ac8,	// (0x00040506) uni_indicator_pane

0xcbbc,	// (0x000435fa) bg_list_pane_ParamLimits

0xcbbc,	// (0x000435fa) bg_list_pane

0x9095,	// (0x0003fad3) find_pane

0x909d,	// (0x0003fadb) listscroll_app_pane_ParamLimits

0x909d,	// (0x0003fadb) listscroll_app_pane

0xcbdc,	// (0x0004361a) listscroll_form_pane

0x90a9,	// (0x0003fae7) listscroll_gen_pane_ParamLimits

0x90a9,	// (0x0003fae7) listscroll_gen_pane

0xcbdc,	// (0x0004361a) listscroll_set_pane

0xd8fa,	// (0x00044338) main_idle_act_pane

0xc9a2,	// (0x000433e0) main_idle_trad_pane

0xc9a2,	// (0x000433e0) main_list_empty_pane

0xc0cc,	// (0x00042b0a) main_midp_pane

0xcbf6,	// (0x00043634) main_pane_g1_ParamLimits

0xcbf6,	// (0x00043634) main_pane_g1

0x90bd,	// (0x0003fafb) popup_ai_message_window_ParamLimits

0x90bd,	// (0x0003fafb) popup_ai_message_window

0x9168,	// (0x0003fba6) popup_fep_china_uni_window_ParamLimits

0x9168,	// (0x0003fba6) popup_fep_china_uni_window

0xcc28,	// (0x00043666) popup_fep_japan_candidate_window_ParamLimits

0xcc28,	// (0x00043666) popup_fep_japan_candidate_window

0xcc48,	// (0x00043686) popup_fep_japan_predictive_window_ParamLimits

0xcc48,	// (0x00043686) popup_fep_japan_predictive_window

0x91c4,	// (0x0003fc02) popup_find_window

0x91e1,	// (0x0003fc1f) popup_grid_graphic_window_ParamLimits

0x91e1,	// (0x0003fc1f) popup_grid_graphic_window

0xcc78,	// (0x000436b6) popup_large_graphic_colour_window

0x9279,	// (0x0003fcb7) popup_menu_window_ParamLimits

0x9279,	// (0x0003fcb7) popup_menu_window

0x9433,	// (0x0003fe71) popup_note_image_window

0x93f9,	// (0x0003fe37) popup_note_wait_window_ParamLimits

0x93f9,	// (0x0003fe37) popup_note_wait_window

0x944b,	// (0x0003fe89) popup_note_window_ParamLimits

0x944b,	// (0x0003fe89) popup_note_window

0x94f1,	// (0x0003ff2f) popup_query_code_window_ParamLimits

0x94f1,	// (0x0003ff2f) popup_query_code_window

0xcc9e,	// (0x000436dc) popup_query_data_code_window_ParamLimits

0xcc9e,	// (0x000436dc) popup_query_data_code_window

0x952b,	// (0x0003ff69) popup_query_data_window_ParamLimits

0x952b,	// (0x0003ff69) popup_query_data_window

0x95a1,	// (0x0003ffdf) popup_query_sat_info_window_ParamLimits

0x95a1,	// (0x0003ffdf) popup_query_sat_info_window

0x9638,	// (0x00040076) popup_snote_single_graphic_window_ParamLimits

0x9638,	// (0x00040076) popup_snote_single_graphic_window

0x9638,	// (0x00040076) popup_snote_single_text_window_ParamLimits

0x9638,	// (0x00040076) popup_snote_single_text_window

0xccbb,	// (0x000436f9) popup_sub_window_general

0xcd03,	// (0x00043741) popup_window_general_ParamLimits

0xcd03,	// (0x00043741) popup_window_general

0xcd18,	// (0x00043756) power_save_pane

0x81a1,	// (0x0003ebdf) control_pane_g1_ParamLimits

0x81a1,	// (0x0003ebdf) control_pane_g1

0x2198,	// (0x00038bd6) control_pane_g2_ParamLimits

0x2198,	// (0x00038bd6) control_pane_g2

0xcb9e,	// (0x000435dc) control_pane_g3_ParamLimits

0xcb9e,	// (0x000435dc) control_pane_g3

0x0007,

0xf7c3,	// (0x00046201) control_pane_g_ParamLimits

0xf7c3,	// (0x00046201) control_pane_g

0x81e0,	// (0x0003ec1e) control_pane_t1_ParamLimits

0x81e0,	// (0x0003ec1e) control_pane_t1

0x823e,	// (0x0003ec7c) control_pane_t2_ParamLimits

0x823e,	// (0x0003ec7c) control_pane_t2

0x0002,

0xf7d4,	// (0x00046212) control_pane_t_ParamLimits

0xf7d4,	// (0x00046212) control_pane_t

0xcabf,	// (0x000434fd) navi_navi_volume_pane_cp1

0xcac8,	// (0x00043506) status_small_icon_pane

0xcad0,	// (0x0004350e) status_small_pane_g1_ParamLimits

0xcad0,	// (0x0004350e) status_small_pane_g1

0xcb04,	// (0x00043542) status_small_pane_g2_ParamLimits

0xcb04,	// (0x00043542) status_small_pane_g2

0xcb10,	// (0x0004354e) status_small_pane_g3_ParamLimits

0xcb10,	// (0x0004354e) status_small_pane_g3

0xcb1c,	// (0x0004355a) status_small_pane_g4_ParamLimits

0xcb1c,	// (0x0004355a) status_small_pane_g4

0xcb28,	// (0x00043566) status_small_pane_g5_ParamLimits

0xcb28,	// (0x00043566) status_small_pane_g5

0xcb37,	// (0x00043575) status_small_pane_g6_ParamLimits

0xcb37,	// (0x00043575) status_small_pane_g6

0x0007,

0xf7b2,	// (0x000461f0) status_small_pane_g_ParamLimits

0xf7b2,	// (0x000461f0) status_small_pane_g

0xcb67,	// (0x000435a5) status_small_pane_t1

0xcb8a,	// (0x000435c8) status_small_wait_pane_ParamLimits

0xcb8a,	// (0x000435c8) status_small_wait_pane

0x8ed9,	// (0x0003f917) aid_levels_signal_ParamLimits

0x8ed9,	// (0x0003f917) aid_levels_signal

0x8ef1,	// (0x0003f92f) signal_pane_g1_ParamLimits

0x8ef1,	// (0x0003f92f) signal_pane_g1

0x8f0c,	// (0x0003f94a) signal_pane_g2_ParamLimits

0x8f0c,	// (0x0003f94a) signal_pane_g2

0x0001,

0xf747,	// (0x00046185) signal_pane_g_ParamLimits

0xf747,	// (0x00046185) signal_pane_g

0xc508,	// (0x00042f46) context_pane_g1

0x89bf,	// (0x0003f3fd) title_pane_g1

0x89f4,	// (0x0003f432) title_pane_t1

0xb7f9,	// (0x00042237) title_pane_t2

0xb81f,	// (0x0004225d) title_pane_t3

0x0002,

0xf59b,	// (0x00045fd9) title_pane_t

0x9af0,	// (0x0004052e) aid_levels_battery_ParamLimits

0x9af0,	// (0x0004052e) aid_levels_battery

0x9b0c,	// (0x0004054a) battery_pane_g1_ParamLimits

0x9b0c,	// (0x0004054a) battery_pane_g1

0x9b29,	// (0x00040567) battery_pane_g2_ParamLimits

0x9b29,	// (0x00040567) battery_pane_g2

0x0001,

0xf7e6,	// (0x00046224) battery_pane_g_ParamLimits

0xf7e6,	// (0x00046224) battery_pane_g

0x9d2e,	// (0x0004076c) uni_indicator_pane_g1

0x9d43,	// (0x00040781) uni_indicator_pane_g2

0x9d58,	// (0x00040796) uni_indicator_pane_g3

0x0005,

0xf949,	// (0x00046387) uni_indicator_pane_g

0xc814,	// (0x00043252) navi_icon_pane_ParamLimits

0xc814,	// (0x00043252) navi_icon_pane

0xc75d,	// (0x0004319b) navi_midp_pane

0xc830,	// (0x0004326e) navi_navi_pane

0xc83a,	// (0x00043278) navi_text_pane_ParamLimits

0xc83a,	// (0x00043278) navi_text_pane

0xb7d9,	// (0x00042217) status_small_wait_pane_g1

0xbb06,	// (0x00042544) status_small_wait_pane_g2

0x0001,

0xf944,	// (0x00046382) status_small_wait_pane_g

0xdc0b,	// (0x00044649) navi_navi_icon_text_pane

0xdc13,	// (0x00044651) navi_navi_pane_g1_ParamLimits

0xdc13,	// (0x00044651) navi_navi_pane_g1

0xdc25,	// (0x00044663) navi_navi_pane_g2_ParamLimits

0xdc25,	// (0x00044663) navi_navi_pane_g2

0x0001,

0xf912,	// (0x00046350) navi_navi_pane_g_ParamLimits

0xf912,	// (0x00046350) navi_navi_pane_g

0xdc37,	// (0x00044675) navi_navi_tabs_pane

0xdc40,	// (0x0004467e) navi_navi_text_pane

0xdc0b,	// (0x00044649) navi_navi_volume_pane

0x9cef,	// (0x0004072d) navi_text_pane_t1

0x9ce3,	// (0x00040721) navi_icon_pane_g1

0xdb4c,	// (0x0004458a) navi_navi_text_pane_t1

0x848b,	// (0x0003eec9) navi_navi_volume_pane_g1

0x8493,	// (0x0003eed1) volume_small_pane

0x9c3f,	// (0x0004067d) navi_navi_icon_text_pane_g1

0x9c47,	// (0x00040685) navi_navi_icon_text_pane_t1

0xc830,	// (0x0004326e) navi_tabs_2_long_pane

0xc830,	// (0x0004326e) navi_tabs_2_pane

0xc830,	// (0x0004326e) navi_tabs_3_long_pane

0xc830,	// (0x0004326e) navi_tabs_3_pane

0xc830,	// (0x0004326e) navi_tabs_4_pane

0x846b,	// (0x0003eea9) tabs_2_active_pane_ParamLimits

0x846b,	// (0x0003eea9) tabs_2_active_pane

0x847b,	// (0x0003eeb9) tabs_2_passive_pane_ParamLimits

0x847b,	// (0x0003eeb9) tabs_2_passive_pane

0x8439,	// (0x0003ee77) tabs_3_active_pane_ParamLimits

0x8439,	// (0x0003ee77) tabs_3_active_pane

0x8449,	// (0x0003ee87) tabs_3_passive_pane_ParamLimits

0x8449,	// (0x0003ee87) tabs_3_passive_pane

0x845a,	// (0x0003ee98) tabs_3_passive_pane_cp_ParamLimits

0x845a,	// (0x0003ee98) tabs_3_passive_pane_cp

0x83f5,	// (0x0003ee33) tabs_4_active_pane_ParamLimits

0x83f5,	// (0x0003ee33) tabs_4_active_pane

0x8406,	// (0x0003ee44) tabs_4_passive_pane_ParamLimits

0x8406,	// (0x0003ee44) tabs_4_passive_pane

0x8417,	// (0x0003ee55) tabs_4_passive_pane_cp_ParamLimits

0x8417,	// (0x0003ee55) tabs_4_passive_pane_cp

0x8428,	// (0x0003ee66) tabs_4_passive_pane_cp2_ParamLimits

0x8428,	// (0x0003ee66) tabs_4_passive_pane_cp2

0x83d5,	// (0x0003ee13) tabs_2_long_active_pane_ParamLimits

0x83d5,	// (0x0003ee13) tabs_2_long_active_pane

0x83e5,	// (0x0003ee23) tabs_2_long_passive_pane_ParamLimits

0x83e5,	// (0x0003ee23) tabs_2_long_passive_pane

0x83a2,	// (0x0003ede0) tabs_3_long_active_pane_ParamLimits

0x83a2,	// (0x0003ede0) tabs_3_long_active_pane

0x83b3,	// (0x0003edf1) tabs_3_long_passive_pane_ParamLimits

0x83b3,	// (0x0003edf1) tabs_3_long_passive_pane

0x83c4,	// (0x0003ee02) tabs_3_long_passive_pane_cp_ParamLimits

0x83c4,	// (0x0003ee02) tabs_3_long_passive_pane_cp

0x2860,	// (0x0003929e) volume_small_pane_g1

0x8351,	// (0x0003ed8f) volume_small_pane_g2

0x835a,	// (0x0003ed98) volume_small_pane_g3

0x8363,	// (0x0003eda1) volume_small_pane_g4

0x836c,	// (0x0003edaa) volume_small_pane_g5

0x8375,	// (0x0003edb3) volume_small_pane_g6

0x837e,	// (0x0003edbc) volume_small_pane_g7

0x8387,	// (0x0003edc5) volume_small_pane_g8

0x8390,	// (0x0003edce) volume_small_pane_g9

0x8399,	// (0x0003edd7) volume_small_pane_g10

0x0009,

0xf8de,	// (0x0004631c) volume_small_pane_g

0xb831,	// (0x0004226f) bg_active_tab_pane_cp2_ParamLimits

0xb831,	// (0x0004226f) bg_active_tab_pane_cp2

0x8a80,	// (0x0003f4be) tabs_3_active_pane_g1

0x8a88,	// (0x0003f4c6) tabs_3_active_pane_t1

0xb831,	// (0x0004226f) bg_passive_tab_pane_cp2_ParamLimits

0xb831,	// (0x0004226f) bg_passive_tab_pane_cp2

0x8a80,	// (0x0003f4be) tabs_3_passive_pane_g1

0x8a88,	// (0x0003f4c6) tabs_3_passive_pane_t1

0xb831,	// (0x0004226f) bg_active_tab_pane_cp3_ParamLimits

0xb831,	// (0x0004226f) bg_active_tab_pane_cp3

0x8a9a,	// (0x0003f4d8) tabs_4_active_pane_g1

0x8aa2,	// (0x0003f4e0) tabs_4_active_pane_t1

0xb831,	// (0x0004226f) bg_passive_tab_pane_cp3_ParamLimits

0xb831,	// (0x0004226f) bg_passive_tab_pane_cp3

0x8a9a,	// (0x0003f4d8) tabs_4_1_passive_pane_g1

0x8aa2,	// (0x0003f4e0) tabs_4_1_passive_pane_t1

0xc0cc,	// (0x00042b0a) list_highlight_pane_cp2

0x9de1,	// (0x0004081f) list_set_pane_ParamLimits

0x9de1,	// (0x0004081f) list_set_pane

0x9e7b,	// (0x000408b9) main_pane_set_t1_ParamLimits

0x9e7b,	// (0x000408b9) main_pane_set_t1

0x9e9b,	// (0x000408d9) main_pane_set_t2_ParamLimits

0x9e9b,	// (0x000408d9) main_pane_set_t2

0x9eaf,	// (0x000408ed) main_pane_set_t3_ParamLimits

0x9eaf,	// (0x000408ed) main_pane_set_t3

0x9ec1,	// (0x000408ff) main_pane_set_t4_ParamLimits

0x9ec1,	// (0x000408ff) main_pane_set_t4

0x0003,

0xf9ae,	// (0x000463ec) main_pane_set_t_ParamLimits

0xf9ae,	// (0x000463ec) main_pane_set_t

0x9ed3,	// (0x00040911) setting_code_pane

0x9edd,	// (0x0004091b) setting_slider_graphic_pane

0x9edd,	// (0x0004091b) setting_slider_pane

0x9edd,	// (0x0004091b) setting_text_pane

0x9edd,	// (0x0004091b) setting_volume_pane

0x16cc,	// (0x0003810a) volume_set_pane

0xb83f,	// (0x0004227d) bg_set_opt_pane_cp

0x16d4,	// (0x00038112) setting_slider_pane_t1

0x16ed,	// (0x0003812b) setting_slider_pane_t2

0x1707,	// (0x00038145) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00045fe0) setting_slider_pane_t

0x171f,	// (0x0003815d) slider_set_pane

0xb7e3,	// (0x00042221) bg_set_opt_pane_cp2

0xb84d,	// (0x0004228b) setting_slider_graphic_pane_g1

0x1735,	// (0x00038173) setting_slider_graphic_pane_t1

0x1745,	// (0x00038183) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00045fe7) setting_slider_graphic_pane_t

0x1755,	// (0x00038193) slider_set_pane_cp

0xb7e3,	// (0x00042221) input_focus_pane_cp1

0xe098,	// (0x00044ad6) list_set_text_pane

0xb7d9,	// (0x00042217) setting_text_pane_g1

0xb7e3,	// (0x00042221) input_focus_pane_cp2

0xb7d9,	// (0x00042217) setting_code_pane_g1

0xb856,	// (0x00042294) setting_code_pane_t1

0x0420,	// (0x00036e5e) set_text_pane_t1_ParamLimits

0x0420,	// (0x00036e5e) set_text_pane_t1

0xbfdb,	// (0x00042a19) set_opt_bg_pane_g1

0xbfe3,	// (0x00042a21) set_opt_bg_pane_g2

0xe072,	// (0x00044ab0) set_opt_bg_pane_g3

0xbff3,	// (0x00042a31) set_opt_bg_pane_g4

0xbffb,	// (0x00042a39) set_opt_bg_pane_g5

0xc003,	// (0x00042a41) set_opt_bg_pane_g6

0xe07c,	// (0x00044aba) set_opt_bg_pane_g7

0xe084,	// (0x00044ac2) set_opt_bg_pane_g8

0xe08e,	// (0x00044acc) set_opt_bg_pane_g9

0x0008,

0xf99b,	// (0x000463d9) set_opt_bg_pane_g

0xe065,	// (0x00044aa3) slider_set_pane_g1

0x2a28,	// (0x00039466) slider_set_pane_g2

0x0006,

0xf98c,	// (0x000463ca) slider_set_pane_g

0x29c4,	// (0x00039402) volume_set_pane_g1

0x29cc,	// (0x0003940a) volume_set_pane_g2

0x29d4,	// (0x00039412) volume_set_pane_g3

0x29dc,	// (0x0003941a) volume_set_pane_g4

0x29e4,	// (0x00039422) volume_set_pane_g5

0x29ec,	// (0x0003942a) volume_set_pane_g6

0x29f4,	// (0x00039432) volume_set_pane_g7

0x29fc,	// (0x0003943a) volume_set_pane_g8

0x2a04,	// (0x00039442) volume_set_pane_g9

0x2a0c,	// (0x0003944a) volume_set_pane_g10

0x0009,

0xf964,	// (0x000463a2) volume_set_pane_g

0x8ab4,	// (0x0003f4f2) indicator_pane_ParamLimits

0x8ab4,	// (0x0003f4f2) indicator_pane

0x8adc,	// (0x0003f51a) main_idle_pane_g2_ParamLimits

0x8adc,	// (0x0003f51a) main_idle_pane_g2

0x8b14,	// (0x0003f552) main_pane_idle_g1_ParamLimits

0x8b14,	// (0x0003f552) main_pane_idle_g1

0xb864,	// (0x000422a2) popup_clock_digital_analogue_window_ParamLimits

0xb864,	// (0x000422a2) popup_clock_digital_analogue_window

0x8b3b,	// (0x0003f579) soft_indicator_pane_ParamLimits

0x8b3b,	// (0x0003f579) soft_indicator_pane

0x8b55,	// (0x0003f593) wallpaper_pane_ParamLimits

0x8b55,	// (0x0003f593) wallpaper_pane

0xb7d9,	// (0x00042217) wallpaper_pane_g1

0x8b67,	// (0x0003f5a5) indicator_pane_g1_ParamLimits

0x8b67,	// (0x0003f5a5) indicator_pane_g1

0xe1da,	// (0x00044c18) navi_navi_icon_text_pane_srt_g1

0xb892,	// (0x000422d0) soft_indicator_pane_t1

0xb8ac,	// (0x000422ea) aid_ps_area_pane

0x8b7d,	// (0x0003f5bb) aid_ps_clock_pane

0xb8bd,	// (0x000422fb) aid_ps_indicator_pane

0xb8c9,	// (0x00042307) indicator_ps_pane_ParamLimits

0xb8c9,	// (0x00042307) indicator_ps_pane

0xb8d8,	// (0x00042316) power_save_pane_g1_ParamLimits

0xb8d8,	// (0x00042316) power_save_pane_g1

0xb8e4,	// (0x00042322) power_save_pane_g2_ParamLimits

0xb8e4,	// (0x00042322) power_save_pane_g2

0x1221,	// (0x00037c5f) aid_navinavi_width_pane

0xb8ac,	// (0x000422ea) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00045fec) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00045fec) power_save_pane_g

0xb8f2,	// (0x00042330) power_save_pane_t1_ParamLimits

0xb8f2,	// (0x00042330) power_save_pane_t1

0x8b7d,	// (0x0003f5bb) aid_ps_clock_pane_ParamLimits

0xb8bd,	// (0x000422fb) aid_ps_indicator_pane_ParamLimits

0xb904,	// (0x00042342) power_save_pane_t4_ParamLimits

0xb904,	// (0x00042342) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00045ff1) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00045ff1) power_save_pane_t

0xb92e,	// (0x0004236c) power_save_t3_ParamLimits

0xb92e,	// (0x0004236c) power_save_t3

0xb919,	// (0x00042357) power_save_t2_ParamLimits

0xb919,	// (0x00042357) power_save_t2

0xb943,	// (0x00042381) indicator_ps_pane_g1

0x8b8b,	// (0x0003f5c9) ai_gene_pane_ParamLimits

0x8b8b,	// (0x0003f5c9) ai_gene_pane

0x8ba2,	// (0x0003f5e0) ai_links_pane_ParamLimits

0x8ba2,	// (0x0003f5e0) ai_links_pane

0x8bba,	// (0x0003f5f8) indicator_pane_cp1_ParamLimits

0x8bba,	// (0x0003f5f8) indicator_pane_cp1

0x8bc9,	// (0x0003f607) main_pane_idle_g1_cp_ParamLimits

0x8bc9,	// (0x0003f607) main_pane_idle_g1_cp

0xb94c,	// (0x0004238a) popup_ai_links_title_window

0x8be1,	// (0x0003f61f) soft_indicator_pane_cp1_ParamLimits

0x8be1,	// (0x0003f61f) soft_indicator_pane_cp1

0xdeb9,	// (0x000448f7) ai_links_pane_g1

0xdec2,	// (0x00044900) grid_ai_links_pane

0x9d25,	// (0x00040763) ai_gene_pane_1

0xdea7,	// (0x000448e5) ai_gene_pane_2

0xdeb0,	// (0x000448ee) list_highlight_pane_cp4

0x9d01,	// (0x0004073f) cell_ai_link_pane_ParamLimits

0x9d01,	// (0x0004073f) cell_ai_link_pane

0xde9f,	// (0x000448dd) cell_ai_link_pane_g1

0xbb06,	// (0x00042544) cell_ai_link_pane_g2

0x0001,

0xf93f,	// (0x0004637d) cell_ai_link_pane_g

0xb7e3,	// (0x00042221) grid_highlight_cp2

0xb7e3,	// (0x00042221) bg_popup_sub_pane_cp1

0xb963,	// (0x000423a1) popup_ai_links_title_window_t1

0xdde1,	// (0x0004481f) ai_gene_pane_1_g1_ParamLimits

0xdde1,	// (0x0004481f) ai_gene_pane_1_g1

0xdded,	// (0x0004482b) ai_gene_pane_1_g2_ParamLimits

0xdded,	// (0x0004482b) ai_gene_pane_1_g2

0x0001,

0xf935,	// (0x00046373) ai_gene_pane_1_g_ParamLimits

0xf935,	// (0x00046373) ai_gene_pane_1_g

0xddfa,	// (0x00044838) ai_gene_pane_1_t1_ParamLimits

0xddfa,	// (0x00044838) ai_gene_pane_1_t1

0xde2e,	// (0x0004486c) grid_ai_soft_ind_pane

0xddcc,	// (0x0004480a) ai_gene_pane_2_t1_ParamLimits

0xddcc,	// (0x0004480a) ai_gene_pane_2_t1

0x8bf5,	// (0x0003f633) main_pane_empty_t1_ParamLimits

0x8bf5,	// (0x0003f633) main_pane_empty_t1

0x8c0d,	// (0x0003f64b) main_pane_empty_t2_ParamLimits

0x8c0d,	// (0x0003f64b) main_pane_empty_t2

0x8c22,	// (0x0003f660) main_pane_empty_t3_ParamLimits

0x8c22,	// (0x0003f660) main_pane_empty_t3

0x8c34,	// (0x0003f672) main_pane_empty_t4_ParamLimits

0x8c34,	// (0x0003f672) main_pane_empty_t4

0x8c46,	// (0x0003f684) main_pane_empty_t5_ParamLimits

0x8c46,	// (0x0003f684) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00045ff6) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00045ff6) main_pane_empty_t

0xc02c,	// (0x00042a6a) bg_popup_window_pane_ParamLimits

0xc02c,	// (0x00042a6a) bg_popup_window_pane

0xdb5a,	// (0x00044598) find_popup_pane_cp2_ParamLimits

0xdb5a,	// (0x00044598) find_popup_pane_cp2

0xdb66,	// (0x000445a4) heading_pane_ParamLimits

0xdb66,	// (0x000445a4) heading_pane

0xb7e3,	// (0x00042221) bg_popup_sub_pane

0x9c64,	// (0x000406a2) bg_popup_window_pane_g1_ParamLimits

0x9c64,	// (0x000406a2) bg_popup_window_pane_g1

0x9c73,	// (0x000406b1) bg_popup_window_pane_g2_ParamLimits

0x9c73,	// (0x000406b1) bg_popup_window_pane_g2

0x9c7f,	// (0x000406bd) bg_popup_window_pane_g3_ParamLimits

0x9c7f,	// (0x000406bd) bg_popup_window_pane_g3

0x9c8b,	// (0x000406c9) bg_popup_window_pane_g4_ParamLimits

0x9c8b,	// (0x000406c9) bg_popup_window_pane_g4

0x9c9a,	// (0x000406d8) bg_popup_window_pane_g5_ParamLimits

0x9c9a,	// (0x000406d8) bg_popup_window_pane_g5

0x9caa,	// (0x000406e8) bg_popup_window_pane_g6_ParamLimits

0x9caa,	// (0x000406e8) bg_popup_window_pane_g6

0x9cb6,	// (0x000406f4) bg_popup_window_pane_g7_ParamLimits

0x9cb6,	// (0x000406f4) bg_popup_window_pane_g7

0x9cc5,	// (0x00040703) bg_popup_window_pane_g8_ParamLimits

0x9cc5,	// (0x00040703) bg_popup_window_pane_g8

0x9cd4,	// (0x00040712) bg_popup_window_pane_g9_ParamLimits

0x9cd4,	// (0x00040712) bg_popup_window_pane_g9

0xdb40,	// (0x0004457e) bg_popup_window_pane_g10_ParamLimits

0xdb40,	// (0x0004457e) bg_popup_window_pane_g10

0x0009,

0xf8fd,	// (0x0004633b) bg_popup_window_pane_g_ParamLimits

0xf8fd,	// (0x0004633b) bg_popup_window_pane_g

0xdaf7,	// (0x00044535) bg_popup_heading_pane_ParamLimits

0xdaf7,	// (0x00044535) bg_popup_heading_pane

0x2b54,	// (0x00039592) tabs_4_passive_pane_cp_srt_ParamLimits

0x2b54,	// (0x00039592) tabs_4_passive_pane_cp_srt

0x2b66,	// (0x000395a4) tabs_4_passive_pane_srt_ParamLimits

0xdb0b,	// (0x00044549) heading_pane_g2

0x2b66,	// (0x000395a4) tabs_4_passive_pane_srt

0xcfd8,	// (0x00043a16) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcfd8,	// (0x00043a16) bg_passive_tab_pane_cp3_srt

0xdb13,	// (0x00044551) heading_pane_t1_ParamLimits

0xdb13,	// (0x00044551) heading_pane_t1

0xdb2a,	// (0x00044568) heading_pane_t2_ParamLimits

0xdb2a,	// (0x00044568) heading_pane_t2

0x0001,

0xf8f8,	// (0x00046336) heading_pane_t_ParamLimits

0xf8f8,	// (0x00046336) heading_pane_t

0xd600,	// (0x0004403e) bg_popup_heading_pane_g1

0xd691,	// (0x000440cf) bg_popup_heading_pane_g2

0xd69b,	// (0x000440d9) bg_popup_heading_pane_g3

0xd6a5,	// (0x000440e3) bg_popup_heading_pane_g4

0xd6af,	// (0x000440ed) bg_popup_heading_pane_g5

0xd6b9,	// (0x000440f7) bg_popup_heading_pane_g6

0xd6c1,	// (0x000440ff) bg_popup_heading_pane_g7

0xd6c9,	// (0x00044107) bg_popup_heading_pane_g8

0xd6d3,	// (0x00044111) bg_popup_heading_pane_g9

0x0008,

0xf8b4,	// (0x000462f2) bg_popup_heading_pane_g

0xcee8,	// (0x00043926) bg_popup_sub_pane_g1

0xcef0,	// (0x0004392e) bg_popup_sub_pane_g2

0xcef8,	// (0x00043936) bg_popup_sub_pane_g3

0xcf00,	// (0x0004393e) bg_popup_sub_pane_g4

0xcf08,	// (0x00043946) bg_popup_sub_pane_g5

0xcf10,	// (0x0004394e) bg_popup_sub_pane_g6

0xcf18,	// (0x00043956) bg_popup_sub_pane_g7

0xcf20,	// (0x0004395e) bg_popup_sub_pane_g8

0xcf28,	// (0x00043966) bg_popup_sub_pane_g9

0x0008,

0xf88e,	// (0x000462cc) bg_popup_sub_pane_g

0xb831,	// (0x0004226f) bg_popup_window_pane_cp5_ParamLimits

0xb831,	// (0x0004226f) bg_popup_window_pane_cp5

0xb980,	// (0x000423be) popup_note_window_g1_ParamLimits

0xb980,	// (0x000423be) popup_note_window_g1

0xb98c,	// (0x000423ca) popup_note_window_t1_ParamLimits

0xb98c,	// (0x000423ca) popup_note_window_t1

0xb9a2,	// (0x000423e0) popup_note_window_t2_ParamLimits

0xb9a2,	// (0x000423e0) popup_note_window_t2

0xb9b8,	// (0x000423f6) popup_note_window_t3_ParamLimits

0xb9b8,	// (0x000423f6) popup_note_window_t3

0xb9ce,	// (0x0004240c) popup_note_window_t4_ParamLimits

0xb9ce,	// (0x0004240c) popup_note_window_t4

0xb9f6,	// (0x00042434) popup_note_window_t5_ParamLimits

0xb9f6,	// (0x00042434) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00046001) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00046001) popup_note_window_t

0xba1a,	// (0x00042458) bg_popup_window_pane_cp6_ParamLimits

0xba1a,	// (0x00042458) bg_popup_window_pane_cp6

0xd57c,	// (0x00043fba) popup_note_image_window_g1_ParamLimits

0xd57c,	// (0x00043fba) popup_note_image_window_g1

0xd588,	// (0x00043fc6) popup_note_image_window_g2_ParamLimits

0xd588,	// (0x00043fc6) popup_note_image_window_g2

0x0001,

0xf882,	// (0x000462c0) popup_note_image_window_g_ParamLimits

0xf882,	// (0x000462c0) popup_note_image_window_g

0xd5a1,	// (0x00043fdf) popup_note_image_window_t1_ParamLimits

0xd5a1,	// (0x00043fdf) popup_note_image_window_t1

0xd5ba,	// (0x00043ff8) popup_note_image_window_t2_ParamLimits

0xd5ba,	// (0x00043ff8) popup_note_image_window_t2

0xd5d3,	// (0x00044011) popup_note_image_window_t3_ParamLimits

0xd5d3,	// (0x00044011) popup_note_image_window_t3

0x0002,

0xf887,	// (0x000462c5) popup_note_image_window_t_ParamLimits

0xf887,	// (0x000462c5) popup_note_image_window_t

0xd459,	// (0x00043e97) bg_popup_window_pane_cp7_ParamLimits

0xd459,	// (0x00043e97) bg_popup_window_pane_cp7

0xd489,	// (0x00043ec7) popup_note_wait_window_g1_ParamLimits

0xd489,	// (0x00043ec7) popup_note_wait_window_g1

0xd495,	// (0x00043ed3) popup_note_wait_window_g2_ParamLimits

0xd495,	// (0x00043ed3) popup_note_wait_window_g2

0x0002,

0xf870,	// (0x000462ae) popup_note_wait_window_g_ParamLimits

0xf870,	// (0x000462ae) popup_note_wait_window_g

0xd4ad,	// (0x00043eeb) popup_note_wait_window_t1_ParamLimits

0xd4ad,	// (0x00043eeb) popup_note_wait_window_t1

0xd4d4,	// (0x00043f12) popup_note_wait_window_t2_ParamLimits

0xd4d4,	// (0x00043f12) popup_note_wait_window_t2

0xd4f1,	// (0x00043f2f) popup_note_wait_window_t3_ParamLimits

0xd4f1,	// (0x00043f2f) popup_note_wait_window_t3

0xd504,	// (0x00043f42) popup_note_wait_window_t4_ParamLimits

0xd504,	// (0x00043f42) popup_note_wait_window_t4

0x0004,

0xf877,	// (0x000462b5) popup_note_wait_window_t_ParamLimits

0xf877,	// (0x000462b5) popup_note_wait_window_t

0xd529,	// (0x00043f67) wait_bar_pane_ParamLimits

0xd529,	// (0x00043f67) wait_bar_pane

0xb7e3,	// (0x00042221) wait_anim_pane

0xb7e3,	// (0x00042221) wait_border_pane

0xb7d9,	// (0x00042217) wait_anim_pane_g1

0xb7d9,	// (0x00042217) wait_anim_pane_g2

0x0001,

0xf742,	// (0x00046180) wait_anim_pane_g

0xd3fd,	// (0x00043e3b) wait_border_pane_g1

0xd408,	// (0x00043e46) wait_border_pane_g2

0xd411,	// (0x00043e4f) wait_border_pane_g3

0x0002,

0xf869,	// (0x000462a7) wait_border_pane_g

0xd35a,	// (0x00043d98) bg_popup_window_pane_cp16_ParamLimits

0xd35a,	// (0x00043d98) bg_popup_window_pane_cp16

0xd368,	// (0x00043da6) indicator_popup_pane_cp4_ParamLimits

0xd368,	// (0x00043da6) indicator_popup_pane_cp4

0xd37c,	// (0x00043dba) popup_query_data_window_t1_ParamLimits

0xd37c,	// (0x00043dba) popup_query_data_window_t1

0xd38e,	// (0x00043dcc) popup_query_data_window_t2_ParamLimits

0xd38e,	// (0x00043dcc) popup_query_data_window_t2

0xd3a7,	// (0x00043de5) popup_query_data_window_t3_ParamLimits

0xd3a7,	// (0x00043de5) popup_query_data_window_t3

0x0002,

0xf862,	// (0x000462a0) popup_query_data_window_t_ParamLimits

0xf862,	// (0x000462a0) popup_query_data_window_t

0xd3c1,	// (0x00043dff) query_popup_data_pane_ParamLimits

0xd3c1,	// (0x00043dff) query_popup_data_pane

0xd3d5,	// (0x00043e13) query_popup_data_pane_cp1_ParamLimits

0xd3d5,	// (0x00043e13) query_popup_data_pane_cp1

0xba1a,	// (0x00042458) bg_popup_window_pane_cp10_ParamLimits

0xba1a,	// (0x00042458) bg_popup_window_pane_cp10

0xd2b1,	// (0x00043cef) indicator_popup_pane_ParamLimits

0xd2b1,	// (0x00043cef) indicator_popup_pane

0xba71,	// (0x000424af) popup_query_code_window_t1_ParamLimits

0xba71,	// (0x000424af) popup_query_code_window_t1

0xd2c9,	// (0x00043d07) popup_query_code_window_t2_ParamLimits

0xd2c9,	// (0x00043d07) popup_query_code_window_t2

0xd307,	// (0x00043d45) popup_query_code_window_t3_ParamLimits

0xd307,	// (0x00043d45) popup_query_code_window_t3

0x0002,

0xf85b,	// (0x00046299) popup_query_code_window_t_ParamLimits

0xf85b,	// (0x00046299) popup_query_code_window_t

0xd336,	// (0x00043d74) query_popup_pane_ParamLimits

0xd336,	// (0x00043d74) query_popup_pane

0xba1a,	// (0x00042458) bg_popup_window_pane_cp15_ParamLimits

0xba1a,	// (0x00042458) bg_popup_window_pane_cp15

0xba38,	// (0x00042476) indicator_popup_pane_cp1_ParamLimits

0xba38,	// (0x00042476) indicator_popup_pane_cp1

0xba4b,	// (0x00042489) indicator_popup_pane_cp2_ParamLimits

0xba4b,	// (0x00042489) indicator_popup_pane_cp2

0xba5e,	// (0x0004249c) popup_query_data_code_window_g1_ParamLimits

0xba5e,	// (0x0004249c) popup_query_data_code_window_g1

0xba71,	// (0x000424af) popup_query_data_code_window_t1_ParamLimits

0xba71,	// (0x000424af) popup_query_data_code_window_t1

0xba83,	// (0x000424c1) popup_query_data_code_window_t2_ParamLimits

0xba83,	// (0x000424c1) popup_query_data_code_window_t2

0xba95,	// (0x000424d3) popup_query_data_code_window_t3_ParamLimits

0xba95,	// (0x000424d3) popup_query_data_code_window_t3

0xbaab,	// (0x000424e9) popup_query_data_code_window_t4_ParamLimits

0xbaab,	// (0x000424e9) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0004600c) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0004600c) popup_query_data_code_window_t

0x277d,	// (0x000391bb) list_single_midp_graphic_pane_g3

0xbac3,	// (0x00042501) query_popup_data_pane_cp2_ParamLimits

0xbad6,	// (0x00042514) query_popup_pane_cp2_ParamLimits

0xbad6,	// (0x00042514) query_popup_pane_cp2

0xb7e3,	// (0x00042221) bg_popup_window_pane_cp11

0xd285,	// (0x00043cc3) heading_pane_cp5

0xbb64,	// (0x000425a2) listscroll_popup_info_pane

0xb7e3,	// (0x00042221) input_focus_pane_cp3

0xbae9,	// (0x00042527) query_popup_pane_t1

0xbaf7,	// (0x00042535) list_popup_info_pane_ParamLimits

0xbaf7,	// (0x00042535) list_popup_info_pane

0xbb06,	// (0x00042544) listscroll_popup_info_pane_g1

0xbb0e,	// (0x0004254c) scroll_pane_cp7

0xbb18,	// (0x00042556) popup_info_list_pane_t1_ParamLimits

0xbb18,	// (0x00042556) popup_info_list_pane_t1

0xbb32,	// (0x00042570) popup_info_list_pane_t2_ParamLimits

0xbb32,	// (0x00042570) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00046015) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00046015) popup_info_list_pane_t

0xb7e3,	// (0x00042221) bg_popup_window_pane_cp12

0xe1f4,	// (0x00044c32) find_popup_pane

0xb83f,	// (0x0004227d) bg_popup_window_pane_cp3

0xbb4c,	// (0x0004258a) heading_pane_cp3

0xbb58,	// (0x00042596) listscroll_popup_graphic_pane

0xb7e3,	// (0x00042221) bg_popup_window_pane_cp4

0x8ca8,	// (0x0003f6e6) heading_pane_cp4

0xbb64,	// (0x000425a2) listscroll_popup_colour_pane

0x8cb0,	// (0x0003f6ee) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8cb0,	// (0x0003f6ee) cell_large_graphic_colour_none_popup_pane

0x8cc4,	// (0x0003f702) grid_large_graphic_colour_popup_pane_ParamLimits

0x8cc4,	// (0x0003f702) grid_large_graphic_colour_popup_pane

0x8ce8,	// (0x0003f726) listscroll_popup_colour_pane_g1_ParamLimits

0x8ce8,	// (0x0003f726) listscroll_popup_colour_pane_g1

0x8cff,	// (0x0003f73d) listscroll_popup_colour_pane_g2_ParamLimits

0x8cff,	// (0x0003f73d) listscroll_popup_colour_pane_g2

0x8d16,	// (0x0003f754) listscroll_popup_colour_pane_g3_ParamLimits

0x8d16,	// (0x0003f754) listscroll_popup_colour_pane_g3

0x8d26,	// (0x0003f764) listscroll_popup_colour_pane_g4_ParamLimits

0x8d26,	// (0x0003f764) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0004601a) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0004601a) listscroll_popup_colour_pane_g

0xbb6c,	// (0x000425aa) scroll_pane_cp6_ParamLimits

0xbb6c,	// (0x000425aa) scroll_pane_cp6

0x8d36,	// (0x0003f774) cell_large_graphic_colour_popup_pane_ParamLimits

0x8d36,	// (0x0003f774) cell_large_graphic_colour_popup_pane

0xbb7e,	// (0x000425bc) cell_large_graphic_colour_none_popup_pane_t1

0xb7e3,	// (0x00042221) grid_highlight_pane_cp5

0xbb8d,	// (0x000425cb) cell_large_graphic_colour_popup_pane_g1

0xbb95,	// (0x000425d3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00046023) cell_large_graphic_colour_popup_pane_g

0xbb9d,	// (0x000425db) cell_large_graphic_colour_popup_pane_g2_copy1

0xbba6,	// (0x000425e4) grid_highlight_pane_cp4

0xbbae,	// (0x000425ec) bg_popup_window_pane_cp8_ParamLimits

0xbbae,	// (0x000425ec) bg_popup_window_pane_cp8

0xbbc9,	// (0x00042607) popup_snote_single_text_window_g1_ParamLimits

0xbbc9,	// (0x00042607) popup_snote_single_text_window_g1

0xbbdb,	// (0x00042619) popup_snote_single_text_window_t1_ParamLimits

0xbbdb,	// (0x00042619) popup_snote_single_text_window_t1

0xbbee,	// (0x0004262c) popup_snote_single_text_window_t2_ParamLimits

0xbbee,	// (0x0004262c) popup_snote_single_text_window_t2

0xbc01,	// (0x0004263f) popup_snote_single_text_window_t3_ParamLimits

0xbc01,	// (0x0004263f) popup_snote_single_text_window_t3

0xbd6e,	// (0x000427ac) popup_snote_single_text_window_t4_ParamLimits

0xbd6e,	// (0x000427ac) popup_snote_single_text_window_t4

0xbda2,	// (0x000427e0) popup_snote_single_text_window_t5_ParamLimits

0xbda2,	// (0x000427e0) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00046028) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00046028) popup_snote_single_text_window_t

0xbdd1,	// (0x0004280f) bg_popup_window_pane_cp9_ParamLimits

0xbdd1,	// (0x0004280f) bg_popup_window_pane_cp9

0xbbc9,	// (0x00042607) popup_snote_single_graphic_window_g1_ParamLimits

0xbbc9,	// (0x00042607) popup_snote_single_graphic_window_g1

0xbddf,	// (0x0004281d) popup_snote_single_graphic_window_g2_ParamLimits

0xbddf,	// (0x0004281d) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00046033) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00046033) popup_snote_single_graphic_window_g

0xbdeb,	// (0x00042829) popup_snote_single_graphic_window_t1_ParamLimits

0xbdeb,	// (0x00042829) popup_snote_single_graphic_window_t1

0xbdfe,	// (0x0004283c) popup_snote_single_graphic_window_t2_ParamLimits

0xbdfe,	// (0x0004283c) popup_snote_single_graphic_window_t2

0xbe11,	// (0x0004284f) popup_snote_single_graphic_window_t3_ParamLimits

0xbe11,	// (0x0004284f) popup_snote_single_graphic_window_t3

0xbe4a,	// (0x00042888) popup_snote_single_graphic_window_t4_ParamLimits

0xbe4a,	// (0x00042888) popup_snote_single_graphic_window_t4

0xbe7e,	// (0x000428bc) popup_snote_single_graphic_window_t5_ParamLimits

0xbe7e,	// (0x000428bc) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00046038) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00046038) popup_snote_single_graphic_window_t

0xe17c,	// (0x00044bba) grid_graphic_popup_pane_ParamLimits

0xe17c,	// (0x00044bba) grid_graphic_popup_pane

0xe1a4,	// (0x00044be2) listscroll_popup_graphic_pane_g1_ParamLimits

0xe1a4,	// (0x00044be2) listscroll_popup_graphic_pane_g1

0x9fe9,	// (0x00040a27) listscroll_popup_graphic_pane_g2_ParamLimits

0x9fe9,	// (0x00040a27) listscroll_popup_graphic_pane_g2

0x0001,

0xf9d8,	// (0x00046416) listscroll_popup_graphic_pane_g_ParamLimits

0xf9d8,	// (0x00046416) listscroll_popup_graphic_pane_g

0xd90c,	// (0x0004434a) scroll_pane_cp5

0x9fad,	// (0x000409eb) cell_graphic_popup_pane_ParamLimits

0x9fad,	// (0x000409eb) cell_graphic_popup_pane

0xe147,	// (0x00044b85) cell_graphic_popup_pane_g1

0xe14f,	// (0x00044b8d) cell_graphic_popup_pane_g2

0xbb9d,	// (0x000425db) cell_graphic_popup_pane_g3

0x0002,

0xf9d1,	// (0x0004640f) cell_graphic_popup_pane_g

0xe158,	// (0x00044b96) cell_graphic_popup_pane_t2

0xbba6,	// (0x000425e4) grid_highlight_pane_cp3

0xbebf,	// (0x000428fd) list_gen_pane_ParamLimits

0xbebf,	// (0x000428fd) list_gen_pane

0xbee7,	// (0x00042925) scroll_pane

0x9f68,	// (0x000409a6) bg_list_pane_g1_ParamLimits

0x9f68,	// (0x000409a6) bg_list_pane_g1

0xe0f6,	// (0x00044b34) bg_list_pane_g2_ParamLimits

0xe0f6,	// (0x00044b34) bg_list_pane_g2

0xe109,	// (0x00044b47) bg_list_pane_g3_ParamLimits

0xe109,	// (0x00044b47) bg_list_pane_g3

0xe11b,	// (0x00044b59) bg_list_pane_g4_ParamLimits

0xe11b,	// (0x00044b59) bg_list_pane_g4

0x9f83,	// (0x000409c1) bg_list_pane_g5_ParamLimits

0x9f83,	// (0x000409c1) bg_list_pane_g5

0x0004,

0xf9c6,	// (0x00046404) bg_list_pane_g_ParamLimits

0xf9c6,	// (0x00046404) bg_list_pane_g

0x7e4d,	// (0x0003e88b) list_double2_graphic_large_graphic_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_double2_graphic_large_graphic_pane

0x7e4d,	// (0x0003e88b) list_double2_graphic_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_double2_graphic_pane

0x7e4d,	// (0x0003e88b) list_double2_large_graphic_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_double2_large_graphic_pane

0x7e4d,	// (0x0003e88b) list_double2_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_double2_pane

0x7e4d,	// (0x0003e88b) list_double_graphic_heading_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_double_graphic_heading_pane

0x7e4d,	// (0x0003e88b) list_double_graphic_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_double_graphic_pane

0x7e4d,	// (0x0003e88b) list_double_heading_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_double_heading_pane

0x7e4d,	// (0x0003e88b) list_double_large_graphic_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_double_large_graphic_pane

0x7e4d,	// (0x0003e88b) list_double_number_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_double_number_pane

0x7e4d,	// (0x0003e88b) list_double_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_double_pane

0x7e4d,	// (0x0003e88b) list_double_time_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_double_time_pane

0x7e4d,	// (0x0003e88b) list_setting_number_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_setting_number_pane

0x7e4d,	// (0x0003e88b) list_setting_pane_ParamLimits

0x7e4d,	// (0x0003e88b) list_setting_pane

0x9f1f,	// (0x0004095d) list_single_2graphic_pane_ParamLimits

0x9f1f,	// (0x0004095d) list_single_2graphic_pane

0x9f1f,	// (0x0004095d) list_single_graphic_heading_pane_ParamLimits

0x9f1f,	// (0x0004095d) list_single_graphic_heading_pane

0x9f1f,	// (0x0004095d) list_single_graphic_pane_ParamLimits

0x9f1f,	// (0x0004095d) list_single_graphic_pane

0x9f1f,	// (0x0004095d) list_single_heading_pane_ParamLimits

0x9f1f,	// (0x0004095d) list_single_heading_pane

0x9f56,	// (0x00040994) list_single_large_graphic_pane_ParamLimits

0x9f56,	// (0x00040994) list_single_large_graphic_pane

0x9f1f,	// (0x0004095d) list_single_number_heading_pane_ParamLimits

0x9f1f,	// (0x0004095d) list_single_number_heading_pane

0x9f1f,	// (0x0004095d) list_single_number_pane_ParamLimits

0x9f1f,	// (0x0004095d) list_single_number_pane

0x9f1f,	// (0x0004095d) list_single_pane_ParamLimits

0x9f1f,	// (0x0004095d) list_single_pane

0xb7e3,	// (0x00042221) list_highlight_pane_cp1

0xde6a,	// (0x000448a8) list_single_pane_g1_ParamLimits

0xde6a,	// (0x000448a8) list_single_pane_g1

0x274c,	// (0x0003918a) list_single_pane_g2_ParamLimits

0x274c,	// (0x0003918a) list_single_pane_g2

0x0001,

0xf616,	// (0x00046054) list_single_pane_g_ParamLimits

0xf616,	// (0x00046054) list_single_pane_g

0x0dbf,	// (0x000377fd) list_single_pane_t1_ParamLimits

0x0dbf,	// (0x000377fd) list_single_pane_t1

0xde6a,	// (0x000448a8) list_single_number_pane_g1_ParamLimits

0xde6a,	// (0x000448a8) list_single_number_pane_g1

0x274c,	// (0x0003918a) list_single_number_pane_g2_ParamLimits

0x274c,	// (0x0003918a) list_single_number_pane_g2

0x0001,

0xf616,	// (0x00046054) list_single_number_pane_g_ParamLimits

0xf616,	// (0x00046054) list_single_number_pane_g

0x0c56,	// (0x00037694) list_single_number_pane_t1_ParamLimits

0x0c56,	// (0x00037694) list_single_number_pane_t1

0x7e0f,	// (0x0003e84d) list_single_number_pane_t2_ParamLimits

0x7e0f,	// (0x0003e84d) list_single_number_pane_t2

0x0001,

0xf987,	// (0x000463c5) list_single_number_pane_t_ParamLimits

0xf987,	// (0x000463c5) list_single_number_pane_t

0x7871,	// (0x0003e2af) list_single_graphic_pane_g1_ParamLimits

0x7871,	// (0x0003e2af) list_single_graphic_pane_g1

0xde6a,	// (0x000448a8) list_single_graphic_pane_g2_ParamLimits

0xde6a,	// (0x000448a8) list_single_graphic_pane_g2

0x274c,	// (0x0003918a) list_single_graphic_pane_g3_ParamLimits

0x274c,	// (0x0003918a) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00046043) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00046043) list_single_graphic_pane_g

0x787d,	// (0x0003e2bb) list_single_graphic_pane_t1_ParamLimits

0x787d,	// (0x0003e2bb) list_single_graphic_pane_t1

0x7893,	// (0x0003e2d1) list_single_heading_pane_g1_ParamLimits

0x7893,	// (0x0003e2d1) list_single_heading_pane_g1

0x274c,	// (0x0003918a) list_single_heading_pane_g2_ParamLimits

0x274c,	// (0x0003918a) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0004604a) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0004604a) list_single_heading_pane_g

0x78a6,	// (0x0003e2e4) list_single_heading_pane_t1_ParamLimits

0x78a6,	// (0x0003e2e4) list_single_heading_pane_t1

0x8155,	// (0x0003eb93) list_single_heading_pane_t2_ParamLimits

0x8155,	// (0x0003eb93) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0004604f) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0004604f) list_single_heading_pane_t

0xde6a,	// (0x000448a8) list_single_number_heading_pane_g1_ParamLimits

0xde6a,	// (0x000448a8) list_single_number_heading_pane_g1

0x274c,	// (0x0003918a) list_single_number_heading_pane_g2_ParamLimits

0x274c,	// (0x0003918a) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x00046054) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x00046054) list_single_number_heading_pane_g

0x78bc,	// (0x0003e2fa) list_single_number_heading_pane_t1_ParamLimits

0x78bc,	// (0x0003e2fa) list_single_number_heading_pane_t1

0x78d2,	// (0x0003e310) list_single_number_heading_pane_t2_ParamLimits

0x78d2,	// (0x0003e310) list_single_number_heading_pane_t2

0x0d99,	// (0x000377d7) list_single_number_heading_pane_t3_ParamLimits

0x0d99,	// (0x000377d7) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x00046059) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x00046059) list_single_number_heading_pane_t

0x78e4,	// (0x0003e322) list_single_graphic_heading_pane_g1_ParamLimits

0x78e4,	// (0x0003e322) list_single_graphic_heading_pane_g1

0x8167,	// (0x0003eba5) list_single_graphic_heading_pane_g4_ParamLimits

0x8167,	// (0x0003eba5) list_single_graphic_heading_pane_g4

0x274c,	// (0x0003918a) list_single_graphic_heading_pane_g5_ParamLimits

0x274c,	// (0x0003918a) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x00046060) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00046060) list_single_graphic_heading_pane_g

0x78bc,	// (0x0003e2fa) list_single_graphic_heading_pane_t1_ParamLimits

0x78bc,	// (0x0003e2fa) list_single_graphic_heading_pane_t1

0x78fa,	// (0x0003e338) list_single_graphic_heading_pane_t2_ParamLimits

0x78fa,	// (0x0003e338) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00046067) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00046067) list_single_graphic_heading_pane_t

0x2bf9,	// (0x00039637) list_single_large_graphic_pane_g1_ParamLimits

0x2bf9,	// (0x00039637) list_single_large_graphic_pane_g1

0x2c05,	// (0x00039643) list_single_large_graphic_pane_g2_ParamLimits

0x2c05,	// (0x00039643) list_single_large_graphic_pane_g2

0x2c11,	// (0x0003964f) list_single_large_graphic_pane_g3_ParamLimits

0x2c11,	// (0x0003964f) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0004606c) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0004606c) list_single_large_graphic_pane_g

0xd408,	// (0x00043e46) wait_border_pane_g2_copy1

0x8178,	// (0x0003ebb6) list_single_large_graphic_pane_g4_cp2

0x0dd5,	// (0x00037813) list_single_large_graphic_pane_t1_ParamLimits

0x0dd5,	// (0x00037813) list_single_large_graphic_pane_t1

0xde6a,	// (0x000448a8) list_double_pane_g1_ParamLimits

0xde6a,	// (0x000448a8) list_double_pane_g1

0x274c,	// (0x0003918a) list_double_pane_g2_ParamLimits

0x274c,	// (0x0003918a) list_double_pane_g2

0x0001,

0xf616,	// (0x00046054) list_double_pane_g_ParamLimits

0xf616,	// (0x00046054) list_double_pane_g

0x0dbf,	// (0x000377fd) list_double_pane_t1_ParamLimits

0x0dbf,	// (0x000377fd) list_double_pane_t1

0x7910,	// (0x0003e34e) list_double_pane_t2_ParamLimits

0x7910,	// (0x0003e34e) list_double_pane_t2

0x0001,

0xf635,	// (0x00046073) list_double_pane_t_ParamLimits

0xf635,	// (0x00046073) list_double_pane_t

0x7922,	// (0x0003e360) list_double2_pane_g1_ParamLimits

0x7922,	// (0x0003e360) list_double2_pane_g1

0x0bf6,	// (0x00037634) list_double2_pane_g2_ParamLimits

0x0bf6,	// (0x00037634) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00046078) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00046078) list_double2_pane_g

0x7933,	// (0x0003e371) list_double2_pane_t1_ParamLimits

0x7933,	// (0x0003e371) list_double2_pane_t1

0x7949,	// (0x0003e387) list_double2_pane_t2_ParamLimits

0x7949,	// (0x0003e387) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0004607d) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0004607d) list_double2_pane_t

0xde6a,	// (0x000448a8) list_double_number_pane_g1_ParamLimits

0xde6a,	// (0x000448a8) list_double_number_pane_g1

0x274c,	// (0x0003918a) list_double_number_pane_g2_ParamLimits

0x274c,	// (0x0003918a) list_double_number_pane_g2

0x0001,

0xf616,	// (0x00046054) list_double_number_pane_g_ParamLimits

0xf616,	// (0x00046054) list_double_number_pane_g

0x795b,	// (0x0003e399) list_double_number_pane_t1_ParamLimits

0x795b,	// (0x0003e399) list_double_number_pane_t1

0x0c56,	// (0x00037694) list_double_number_pane_t2_ParamLimits

0x0c56,	// (0x00037694) list_double_number_pane_t2

0x796d,	// (0x0003e3ab) list_double_number_pane_t3_ParamLimits

0x796d,	// (0x0003e3ab) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00046082) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00046082) list_double_number_pane_t

0x0c4a,	// (0x00037688) list_double_graphic_pane_g1_ParamLimits

0x0c4a,	// (0x00037688) list_double_graphic_pane_g1

0x2c50,	// (0x0003968e) list_double_graphic_pane_g2_ParamLimits

0x2c50,	// (0x0003968e) list_double_graphic_pane_g2

0x2c5f,	// (0x0003969d) list_double_graphic_pane_g3_ParamLimits

0x2c5f,	// (0x0003969d) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00046089) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00046089) list_double_graphic_pane_g

0x787d,	// (0x0003e2bb) list_double_graphic_pane_t1_ParamLimits

0x787d,	// (0x0003e2bb) list_double_graphic_pane_t1

0x798b,	// (0x0003e3c9) list_double_graphic_pane_t2_ParamLimits

0x798b,	// (0x0003e3c9) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00046092) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00046092) list_double_graphic_pane_t

0x0c4a,	// (0x00037688) list_double2_graphic_pane_g1_ParamLimits

0x0c4a,	// (0x00037688) list_double2_graphic_pane_g1

0xde6a,	// (0x000448a8) list_double2_graphic_pane_g2_ParamLimits

0xde6a,	// (0x000448a8) list_double2_graphic_pane_g2

0x274c,	// (0x0003918a) list_double2_graphic_pane_g3_ParamLimits

0x274c,	// (0x0003918a) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00046097) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00046097) list_double2_graphic_pane_g

0x0c56,	// (0x00037694) list_double2_graphic_pane_t1_ParamLimits

0x0c56,	// (0x00037694) list_double2_graphic_pane_t1

0x799d,	// (0x0003e3db) list_double2_graphic_pane_t2_ParamLimits

0x799d,	// (0x0003e3db) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0004609e) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0004609e) list_double2_graphic_pane_t

0x79af,	// (0x0003e3ed) list_double_large_graphic_pane_g1_ParamLimits

0x79af,	// (0x0003e3ed) list_double_large_graphic_pane_g1

0x79d5,	// (0x0003e413) list_double_large_graphic_pane_g2_ParamLimits

0x79d5,	// (0x0003e413) list_double_large_graphic_pane_g2

0x274c,	// (0x0003918a) list_double_large_graphic_pane_g3_ParamLimits

0x274c,	// (0x0003918a) list_double_large_graphic_pane_g3

0x79eb,	// (0x0003e429) list_double_large_graphic_pane_g4_ParamLimits

0x79eb,	// (0x0003e429) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x000460a3) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x000460a3) list_double_large_graphic_pane_g

0x79fe,	// (0x0003e43c) list_double_large_graphic_pane_t1_ParamLimits

0x79fe,	// (0x0003e43c) list_double_large_graphic_pane_t1

0x7a17,	// (0x0003e455) list_double_large_graphic_pane_t2_ParamLimits

0x7a17,	// (0x0003e455) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x000460ae) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x000460ae) list_double_large_graphic_pane_t

0x7a29,	// (0x0003e467) list_double2_large_graphic_pane_g1_ParamLimits

0x7a29,	// (0x0003e467) list_double2_large_graphic_pane_g1

0x8167,	// (0x0003eba5) list_double2_large_graphic_pane_g2_ParamLimits

0x8167,	// (0x0003eba5) list_double2_large_graphic_pane_g2

0x274c,	// (0x0003918a) list_double2_large_graphic_pane_g3_ParamLimits

0x274c,	// (0x0003918a) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x000460b3) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x000460b3) list_double2_large_graphic_pane_g

0x78bc,	// (0x0003e2fa) list_double2_large_graphic_pane_t1_ParamLimits

0x78bc,	// (0x0003e2fa) list_double2_large_graphic_pane_t1

0x7a35,	// (0x0003e473) list_double2_large_graphic_pane_t2_ParamLimits

0x7a35,	// (0x0003e473) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x000460ba) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x000460ba) list_double2_large_graphic_pane_t

0x7a47,	// (0x0003e485) list_double_heading_pane_g1_ParamLimits

0x7a47,	// (0x0003e485) list_double_heading_pane_g1

0x8180,	// (0x0003ebbe) list_double_heading_pane_g2_ParamLimits

0x8180,	// (0x0003ebbe) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x000460bf) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x000460bf) list_double_heading_pane_g

0x7a58,	// (0x0003e496) list_double_heading_pane_t1_ParamLimits

0x7a58,	// (0x0003e496) list_double_heading_pane_t1

0x7a6e,	// (0x0003e4ac) list_double_heading_pane_t2_ParamLimits

0x7a6e,	// (0x0003e4ac) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x000460c4) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x000460c4) list_double_heading_pane_t

0x0601,	// (0x0003703f) list_double_graphic_heading_pane_g1_ParamLimits

0x0601,	// (0x0003703f) list_double_graphic_heading_pane_g1

0x7a47,	// (0x0003e485) list_double_graphic_heading_pane_g2_ParamLimits

0x7a47,	// (0x0003e485) list_double_graphic_heading_pane_g2

0x8180,	// (0x0003ebbe) list_double_graphic_heading_pane_g3_ParamLimits

0x8180,	// (0x0003ebbe) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x000460c9) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x000460c9) list_double_graphic_heading_pane_g

0x7a80,	// (0x0003e4be) list_double_graphic_heading_pane_t1_ParamLimits

0x7a80,	// (0x0003e4be) list_double_graphic_heading_pane_t1

0x7a96,	// (0x0003e4d4) list_double_graphic_heading_pane_t2_ParamLimits

0x7a96,	// (0x0003e4d4) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x000460d0) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x000460d0) list_double_graphic_heading_pane_t

0x7922,	// (0x0003e360) list_double_time_pane_g1_ParamLimits

0x7922,	// (0x0003e360) list_double_time_pane_g1

0x0bf6,	// (0x00037634) list_double_time_pane_g2_ParamLimits

0x0bf6,	// (0x00037634) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x00046078) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x00046078) list_double_time_pane_g

0x7aa8,	// (0x0003e4e6) list_double_time_pane_t1_ParamLimits

0x7aa8,	// (0x0003e4e6) list_double_time_pane_t1

0x7abe,	// (0x0003e4fc) list_double_time_pane_t2_ParamLimits

0x7abe,	// (0x0003e4fc) list_double_time_pane_t2

0x7ad0,	// (0x0003e50e) list_double_time_pane_t3_ParamLimits

0x7ad0,	// (0x0003e50e) list_double_time_pane_t3

0x7ae2,	// (0x0003e520) list_double_time_pane_t4_ParamLimits

0x7ae2,	// (0x0003e520) list_double_time_pane_t4

0x0003,

0xf697,	// (0x000460d5) list_double_time_pane_t_ParamLimits

0xf697,	// (0x000460d5) list_double_time_pane_t

0x7af4,	// (0x0003e532) list_setting_pane_g1_ParamLimits

0x7af4,	// (0x0003e532) list_setting_pane_g1

0x0779,	// (0x000371b7) list_setting_pane_g2_ParamLimits

0x0779,	// (0x000371b7) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x000460de) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x000460de) list_setting_pane_g

0x7b00,	// (0x0003e53e) list_setting_pane_t1_ParamLimits

0x7b00,	// (0x0003e53e) list_setting_pane_t1

0x7b1a,	// (0x0003e558) list_setting_pane_t2_ParamLimits

0x7b1a,	// (0x0003e558) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x000460e3) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x000460e3) list_setting_pane_t

0x7b59,	// (0x0003e597) set_value_pane_cp_ParamLimits

0x7b59,	// (0x0003e597) set_value_pane_cp

0x7b65,	// (0x0003e5a3) list_setting_number_pane_g1_ParamLimits

0x7b65,	// (0x0003e5a3) list_setting_number_pane_g1

0x7b71,	// (0x0003e5af) list_setting_number_pane_g2_ParamLimits

0x7b71,	// (0x0003e5af) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x000460ea) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x000460ea) list_setting_number_pane_g

0x7b7d,	// (0x0003e5bb) list_setting_number_pane_t1_ParamLimits

0x7b7d,	// (0x0003e5bb) list_setting_number_pane_t1

0x7b96,	// (0x0003e5d4) list_setting_number_pane_t2_ParamLimits

0x7b96,	// (0x0003e5d4) list_setting_number_pane_t2

0x7bb0,	// (0x0003e5ee) list_setting_number_pane_t3_ParamLimits

0x7bb0,	// (0x0003e5ee) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x000460ef) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x000460ef) list_setting_number_pane_t

0x7b59,	// (0x0003e597) set_value_pane_ParamLimits

0x7b59,	// (0x0003e597) set_value_pane

0xbf1b,	// (0x00042959) bg_set_opt_pane_ParamLimits

0xbf1b,	// (0x00042959) bg_set_opt_pane

0x08dc,	// (0x0003731a) set_value_pane_t1

0xbf3c,	// (0x0004297a) slider_set_pane_cp3

0xbf45,	// (0x00042983) volume_small_pane_cp

0xbf4e,	// (0x0004298c) list_form_gen_pane

0xbf57,	// (0x00042995) scroll_pane_cp8

0x7bf3,	// (0x0003e631) form_field_data_pane_ParamLimits

0x7bf3,	// (0x0003e631) form_field_data_pane

0x7c0a,	// (0x0003e648) form_field_data_wide_pane_ParamLimits

0x7c0a,	// (0x0003e648) form_field_data_wide_pane

0x7c2a,	// (0x0003e668) form_field_popup_pane_ParamLimits

0x7c2a,	// (0x0003e668) form_field_popup_pane

0x7c42,	// (0x0003e680) form_field_popup_wide_pane_ParamLimits

0x7c42,	// (0x0003e680) form_field_popup_wide_pane

0x0978,	// (0x000373b6) form_field_slider_pane_ParamLimits

0x0978,	// (0x000373b6) form_field_slider_pane

0x098b,	// (0x000373c9) form_field_slider_wide_pane_ParamLimits

0x098b,	// (0x000373c9) form_field_slider_wide_pane

0xbf68,	// (0x000429a6) data_form_pane

0x7c63,	// (0x0003e6a1) form_field_data_pane_t1

0xbf74,	// (0x000429b2) input_focus_pane

0xbf82,	// (0x000429c0) data_form_wide_pane

0x09cc,	// (0x0003740a) form_field_data_wide_pane_t1

0xbbbb,	// (0x000425f9) input_focus_pane_cp6

0x7c7d,	// (0x0003e6bb) form_field_popup_pane_t1

0xbf74,	// (0x000429b2) input_focus_pane_cp7

0xbfae,	// (0x000429ec) list_form_pane

0x0a0e,	// (0x0003744c) form_field_popup_wide_pane_t1

0xbf74,	// (0x000429b2) input_focus_pane_cp8

0xbfba,	// (0x000429f8) list_form_wide_pane

0x7c9f,	// (0x0003e6dd) form_field_slider_pane_t1_ParamLimits

0x7c9f,	// (0x0003e6dd) form_field_slider_pane_t1

0x7cb7,	// (0x0003e6f5) form_field_slider_pane_t2_ParamLimits

0x7cb7,	// (0x0003e6f5) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x000460ff) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x000460ff) form_field_slider_pane_t

0xb831,	// (0x0004226f) input_focus_pane_cp9_ParamLimits

0xb831,	// (0x0004226f) input_focus_pane_cp9

0x7ccc,	// (0x0003e70a) slider_cont_pane_ParamLimits

0x7ccc,	// (0x0003e70a) slider_cont_pane

0xbfc9,	// (0x00042a07) form_field_slider_wide_pane_t1_ParamLimits

0xbfc9,	// (0x00042a07) form_field_slider_wide_pane_t1

0x0a6a,	// (0x000374a8) form_field_slider_wide_pane_t2_ParamLimits

0x0a6a,	// (0x000374a8) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x00046104) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x00046104) form_field_slider_wide_pane_t

0xb831,	// (0x0004226f) input_focus_pane_cp10_ParamLimits

0xb831,	// (0x0004226f) input_focus_pane_cp10

0x7ce0,	// (0x0003e71e) slider_cont_pane_cp1_ParamLimits

0x7ce0,	// (0x0003e71e) slider_cont_pane_cp1

0x7cf4,	// (0x0003e732) slider_form_pane_cp

0xbfdb,	// (0x00042a19) input_focus_pane_g1

0xbfe3,	// (0x00042a21) input_focus_pane_g2

0xbfeb,	// (0x00042a29) input_focus_pane_g3

0xbff3,	// (0x00042a31) input_focus_pane_g4

0xbffb,	// (0x00042a39) input_focus_pane_g5

0xc003,	// (0x00042a41) input_focus_pane_g6

0xc00b,	// (0x00042a49) input_focus_pane_g7

0xc013,	// (0x00042a51) input_focus_pane_g8

0xc01b,	// (0x00042a59) input_focus_pane_g9

0xb7d9,	// (0x00042217) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x00046109) input_focus_pane_g

0xd411,	// (0x00043e4f) wait_border_pane_g3_copy1

0x7cfc,	// (0x0003e73a) data_form_pane_t1

0xb7d9,	// (0x00042217) wait_anim_pane_g1_copy1

0x7e21,	// (0x0003e85f) data_form_wide_pane_t1

0x7d15,	// (0x0003e753) list_form_graphic_pane_cp_ParamLimits

0x7d15,	// (0x0003e753) list_form_graphic_pane_cp

0xe0a0,	// (0x00044ade) slider_form_pane_g1

0xe0a9,	// (0x00044ae7) slider_form_pane_g2

0x0006,

0xf9b7,	// (0x000463f5) slider_form_pane_g

0x7d26,	// (0x0003e764) list_form_graphic_pane_ParamLimits

0x7d26,	// (0x0003e764) list_form_graphic_pane

0x0ae8,	// (0x00037526) list_form_graphic_pane_g1

0x0af0,	// (0x0003752e) list_form_graphic_pane_t1_ParamLimits

0x0af0,	// (0x0003752e) list_form_graphic_pane_t1

0xb83f,	// (0x0004227d) list_highlight_pane_cp5_ParamLimits

0xb83f,	// (0x0004227d) list_highlight_pane_cp5

0x7d38,	// (0x0003e776) find_pane_g1

0xc023,	// (0x00042a61) input_find_pane

0x7d41,	// (0x0003e77f) input_find_pane_g1_ParamLimits

0x7d41,	// (0x0003e77f) input_find_pane_g1

0x7d4d,	// (0x0003e78b) input_find_pane_t1_ParamLimits

0x7d4d,	// (0x0003e78b) input_find_pane_t1

0x7d62,	// (0x0003e7a0) input_find_pane_t2_ParamLimits

0x7d62,	// (0x0003e7a0) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0004611e) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0004611e) input_find_pane_t

0xc02c,	// (0x00042a6a) input_focus_pane_cp5_ParamLimits

0xc02c,	// (0x00042a6a) input_focus_pane_cp5

0x8d6b,	// (0x0003f7a9) bg_popup_window_pane_cp2_ParamLimits

0x8d6b,	// (0x0003f7a9) bg_popup_window_pane_cp2

0x8d78,	// (0x0003f7b6) listscroll_menu_pane_ParamLimits

0x8d78,	// (0x0003f7b6) listscroll_menu_pane

0x8d84,	// (0x0003f7c2) popup_submenu_window_ParamLimits

0x8d84,	// (0x0003f7c2) popup_submenu_window

0xc03a,	// (0x00042a78) find_popup_pane_g1

0xc042,	// (0x00042a80) input_popup_find_pane_cp

0xc02c,	// (0x00042a6a) input_focus_pane_cp4_ParamLimits

0xc02c,	// (0x00042a6a) input_focus_pane_cp4

0xc04c,	// (0x00042a8a) input_popup_find_pane_t1_ParamLimits

0xc04c,	// (0x00042a8a) input_popup_find_pane_t1

0xb7e3,	// (0x00042221) bg_popup_sub_pane_cp

0xc07a,	// (0x00042ab8) listscroll_popup_sub_pane

0xc082,	// (0x00042ac0) list_submenu_pane_ParamLimits

0xc082,	// (0x00042ac0) list_submenu_pane

0xc093,	// (0x00042ad1) scroll_pane_cp4

0xc09b,	// (0x00042ad9) list_single_popup_submenu_pane_ParamLimits

0xc09b,	// (0x00042ad9) list_single_popup_submenu_pane

0xc0af,	// (0x00042aed) list_single_popup_submenu_pane_g1

0xc0b7,	// (0x00042af5) list_single_popup_submenu_pane_t1_ParamLimits

0xc0b7,	// (0x00042af5) list_single_popup_submenu_pane_t1

0xb831,	// (0x0004226f) bg_active_tab_pane_cp1_ParamLimits

0xb831,	// (0x0004226f) bg_active_tab_pane_cp1

0x8dbc,	// (0x0003f7fa) tabs_2_active_pane_g1

0x8dc4,	// (0x0003f802) tabs_2_active_pane_t1

0xb831,	// (0x0004226f) bg_passive_tab_pane_cp1_ParamLimits

0xb831,	// (0x0004226f) bg_passive_tab_pane_cp1

0x8dbc,	// (0x0003f7fa) tabs_2_passive_pane_g1

0x8dc4,	// (0x0003f802) tabs_2_passive_pane_t1

0xb83f,	// (0x0004227d) bg_active_tab_pane_cp4

0x8dd6,	// (0x0003f814) tabs_2_long_active_pane_t1

0xc0cc,	// (0x00042b0a) bg_passive_tab_pane_cp4

0x2785,	// (0x000391c3) list_single_midp_graphic_pane_g4_ParamLimits

0xb83f,	// (0x0004227d) bg_active_tab_pane_cp5

0x8de9,	// (0x0003f827) tabs_3_long_active_pane_t1

0xc0cc,	// (0x00042b0a) bg_passive_tab_pane_cp5

0x2785,	// (0x000391c3) list_single_midp_graphic_pane_g4

0xb83f,	// (0x0004227d) bg_popup_window_pane_cp13_ParamLimits

0xb83f,	// (0x0004227d) bg_popup_window_pane_cp13

0xc0e1,	// (0x00042b1f) listscroll_popup_fast_pane_ParamLimits

0xc0e1,	// (0x00042b1f) listscroll_popup_fast_pane

0xc0f0,	// (0x00042b2e) grid_popup_fast_pane_ParamLimits

0xc0f0,	// (0x00042b2e) grid_popup_fast_pane

0xc102,	// (0x00042b40) scroll_pane_cp9_ParamLimits

0xc102,	// (0x00042b40) scroll_pane_cp9

0xf31c,	// (0x00045d5a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf31c,	// (0x00045d5a) list_single_graphic_hl_pane_t1_cp2

0xc126,	// (0x00042b64) input_focus_pane_cp20_ParamLimits

0xc126,	// (0x00042b64) input_focus_pane_cp20

0xc134,	// (0x00042b72) query_popup_data_pane_t1_ParamLimits

0xc134,	// (0x00042b72) query_popup_data_pane_t1

0xc147,	// (0x00042b85) query_popup_data_pane_t2_ParamLimits

0xc147,	// (0x00042b85) query_popup_data_pane_t2

0xc18d,	// (0x00042bcb) query_popup_data_pane_t3_ParamLimits

0xc18d,	// (0x00042bcb) query_popup_data_pane_t3

0xc1ce,	// (0x00042c0c) query_popup_data_pane_t4_ParamLimits

0xc1ce,	// (0x00042c0c) query_popup_data_pane_t4

0xc20a,	// (0x00042c48) query_popup_data_pane_t5_ParamLimits

0xc20a,	// (0x00042c48) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x00046123) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x00046123) query_popup_data_pane_t

0xbfdb,	// (0x00042a19) bg_set_opt_pane_g1

0xbfe3,	// (0x00042a21) bg_set_opt_pane_g2

0xbfeb,	// (0x00042a29) bg_set_opt_pane_g3

0xbff3,	// (0x00042a31) bg_set_opt_pane_g4

0xbffb,	// (0x00042a39) bg_set_opt_pane_g5

0xc003,	// (0x00042a41) bg_set_opt_pane_g6

0xc00b,	// (0x00042a49) bg_set_opt_pane_g7

0xc013,	// (0x00042a51) bg_set_opt_pane_g8

0xc01b,	// (0x00042a59) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0004612e) bg_set_opt_pane_g

0x1e6b,	// (0x000388a9) control_top_pane_stacon_ParamLimits

0x1e6b,	// (0x000388a9) control_top_pane_stacon

0x1ebe,	// (0x000388fc) signal_pane_stacon_ParamLimits

0x1ebe,	// (0x000388fc) signal_pane_stacon

0xc688,	// (0x000430c6) stacon_top_pane_g1_ParamLimits

0xc688,	// (0x000430c6) stacon_top_pane_g1

0x1ee3,	// (0x00038921) title_pane_stacon_ParamLimits

0x1ee3,	// (0x00038921) title_pane_stacon

0x1f0d,	// (0x0003894b) uni_indicator_pane_stacon_ParamLimits

0x1f0d,	// (0x0003894b) uni_indicator_pane_stacon

0x1f22,	// (0x00038960) battery_pane_stacon_ParamLimits

0x1f22,	// (0x00038960) battery_pane_stacon

0x1f66,	// (0x000389a4) control_bottom_pane_stacon_ParamLimits

0x1f66,	// (0x000389a4) control_bottom_pane_stacon

0x1f89,	// (0x000389c7) navi_pane_stacon_ParamLimits

0x1f89,	// (0x000389c7) navi_pane_stacon

0xc6aa,	// (0x000430e8) stacon_bottom_pane_g1_ParamLimits

0xc6aa,	// (0x000430e8) stacon_bottom_pane_g1

0x1aa8,	// (0x000384e6) aid_levels_signal_lsc_ParamLimits

0x1aa8,	// (0x000384e6) aid_levels_signal_lsc

0x1abf,	// (0x000384fd) signal_pane_stacon_g1_ParamLimits

0x1abf,	// (0x000384fd) signal_pane_stacon_g1

0x1ad3,	// (0x00038511) signal_pane_stacon_g2_ParamLimits

0x1ad3,	// (0x00038511) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x00046141) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x00046141) signal_pane_stacon_g

0x1b08,	// (0x00038546) title_pane_stacon_t1_ParamLimits

0x1b08,	// (0x00038546) title_pane_stacon_t1

0xc24e,	// (0x00042c8c) uni_indicator_pane_stacon_g1

0xc258,	// (0x00042c96) uni_indicator_pane_stacon_g2

0xc262,	// (0x00042ca0) uni_indicator_pane_stacon_g3

0xc26c,	// (0x00042caa) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0004614d) uni_indicator_pane_stacon_g

0x1b2d,	// (0x0003856b) control_top_pane_stacon_g1

0x1b35,	// (0x00038573) control_top_pane_stacon_t1_ParamLimits

0x1b35,	// (0x00038573) control_top_pane_stacon_t1

0x1b6c,	// (0x000385aa) aid_levels_battery_lsc_ParamLimits

0x1b6c,	// (0x000385aa) aid_levels_battery_lsc

0x1b84,	// (0x000385c2) battery_pane_stacon_g1_ParamLimits

0x1b84,	// (0x000385c2) battery_pane_stacon_g1

0x1b97,	// (0x000385d5) battery_pane_stacon_g2_ParamLimits

0x1b97,	// (0x000385d5) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x00046156) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x00046156) battery_pane_stacon_g

0x1bd5,	// (0x00038613) navi_icon_pane_stacon

0x1be9,	// (0x00038627) navi_navi_pane_stacon

0x1bd5,	// (0x00038613) navi_text_pane_stacon

0x1b2d,	// (0x0003856b) control_bottom_pane_stacon_g1

0x1bfd,	// (0x0003863b) control_bottom_pane_stacon_t1_ParamLimits

0x1bfd,	// (0x0003863b) control_bottom_pane_stacon_t1

0x8dfb,	// (0x0003f839) grid_app_pane_ParamLimits

0x8dfb,	// (0x0003f839) grid_app_pane

0x8e33,	// (0x0003f871) scroll_pane_cp15_ParamLimits

0x8e33,	// (0x0003f871) scroll_pane_cp15

0x8e50,	// (0x0003f88e) cell_app_pane_ParamLimits

0x8e50,	// (0x0003f88e) cell_app_pane

0x8e95,	// (0x0003f8d3) cell_app_pane_g1_ParamLimits

0x8e95,	// (0x0003f8d3) cell_app_pane_g1

0xc290,	// (0x00042cce) cell_app_pane_g2_ParamLimits

0xc290,	// (0x00042cce) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0004615b) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0004615b) cell_app_pane_g

0xc29c,	// (0x00042cda) cell_app_pane_t1_ParamLimits

0xc29c,	// (0x00042cda) cell_app_pane_t1

0xc2ae,	// (0x00042cec) grid_highlight_pane_ParamLimits

0xc2ae,	// (0x00042cec) grid_highlight_pane

0xbfdb,	// (0x00042a19) cell_highlight_pane_g1

0xbfe3,	// (0x00042a21) cell_highlight_pane_g2

0xbfeb,	// (0x00042a29) cell_highlight_pane_g3

0xbff3,	// (0x00042a31) cell_highlight_pane_g4

0xbffb,	// (0x00042a39) cell_highlight_pane_g5

0xc003,	// (0x00042a41) cell_highlight_pane_g6

0xc00b,	// (0x00042a49) cell_highlight_pane_g7

0xc013,	// (0x00042a51) cell_highlight_pane_g8

0xc01b,	// (0x00042a59) cell_highlight_pane_g9

0xb7d9,	// (0x00042217) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x00046109) cell_highlight_pane_g

0xc2bf,	// (0x00042cfd) bg_scroll_pane

0x1cc8,	// (0x00038706) scroll_handle_pane

0xc30f,	// (0x00042d4d) scroll_bg_pane_g1

0xc324,	// (0x00042d62) scroll_bg_pane_g2

0xc33c,	// (0x00042d7a) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x00046160) scroll_bg_pane_g

0xc351,	// (0x00042d8f) scroll_handle_focus_pane_ParamLimits

0xc351,	// (0x00042d8f) scroll_handle_focus_pane

0xc30f,	// (0x00042d4d) scroll_handle_pane_g1

0xc35e,	// (0x00042d9c) scroll_handle_pane_g2

0xc33c,	// (0x00042d7a) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x00046167) scroll_handle_pane_g

0xc02c,	// (0x00042a6a) bg_popup_sub_pane_cp21_ParamLimits

0xc02c,	// (0x00042a6a) bg_popup_sub_pane_cp21

0xc372,	// (0x00042db0) popup_fep_japan_predictive_window_t1_ParamLimits

0xc372,	// (0x00042db0) popup_fep_japan_predictive_window_t1

0xc38c,	// (0x00042dca) popup_fep_japan_predictive_window_t2_ParamLimits

0xc38c,	// (0x00042dca) popup_fep_japan_predictive_window_t2

0xc3bf,	// (0x00042dfd) popup_fep_japan_predictive_window_t3_ParamLimits

0xc3bf,	// (0x00042dfd) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0004616e) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0004616e) popup_fep_japan_predictive_window_t

0xb7e3,	// (0x00042221) bg_popup_sub_pane_cp23

0xc3f6,	// (0x00042e34) listscroll_japin_cand_pane

0xc3fe,	// (0x00042e3c) popup_fep_japan_candidate_window_t1

0xc40c,	// (0x00042e4a) candidate_pane_ParamLimits

0xc40c,	// (0x00042e4a) candidate_pane

0xc41e,	// (0x00042e5c) scroll_pane_cp30

0xc426,	// (0x00042e64) list_single_popup_jap_candidate_pane_ParamLimits

0xc426,	// (0x00042e64) list_single_popup_jap_candidate_pane

0xb7e3,	// (0x00042221) list_highlight_pane_cp30

0xc43b,	// (0x00042e79) list_single_popup_jap_candidate_pane_t1

0xc44a,	// (0x00042e88) level_1_signal

0xc457,	// (0x00042e95) level_2_signal

0xc464,	// (0x00042ea2) level_3_signal

0xc471,	// (0x00042eaf) level_4_signal

0xc47e,	// (0x00042ebc) level_5_signal

0xc48b,	// (0x00042ec9) level_6_signal

0xc498,	// (0x00042ed6) level_7_signal

0xc44a,	// (0x00042e88) level_1_battery

0xc457,	// (0x00042e95) level_2_battery

0xc464,	// (0x00042ea2) level_3_battery

0xc471,	// (0x00042eaf) level_4_battery

0xc47e,	// (0x00042ebc) level_5_battery

0xc48b,	// (0x00042ec9) level_6_battery

0xc498,	// (0x00042ed6) level_7_battery

0xc4bd,	// (0x00042efb) list_menu_pane_ParamLimits

0xc4bd,	// (0x00042efb) list_menu_pane

0xc4ce,	// (0x00042f0c) scroll_pane_cp25_ParamLimits

0xc4ce,	// (0x00042f0c) scroll_pane_cp25

0xc4e7,	// (0x00042f25) list_double2_graphic_pane_cp2_ParamLimits

0xc4e7,	// (0x00042f25) list_double2_graphic_pane_cp2

0xc4e7,	// (0x00042f25) list_double2_large_graphic_pane_cp2_ParamLimits

0xc4e7,	// (0x00042f25) list_double2_large_graphic_pane_cp2

0xc4e7,	// (0x00042f25) list_double2_pane_cp2_ParamLimits

0xc4e7,	// (0x00042f25) list_double2_pane_cp2

0xc4e7,	// (0x00042f25) list_double_graphic_pane_cp2_ParamLimits

0xc4e7,	// (0x00042f25) list_double_graphic_pane_cp2

0xc4e7,	// (0x00042f25) list_double_large_graphic_pane_cp2_ParamLimits

0xc4e7,	// (0x00042f25) list_double_large_graphic_pane_cp2

0xc4e7,	// (0x00042f25) list_double_number_pane_cp2_ParamLimits

0xc4e7,	// (0x00042f25) list_double_number_pane_cp2

0xc4e7,	// (0x00042f25) list_double_pane_cp2_ParamLimits

0xc4e7,	// (0x00042f25) list_double_pane_cp2

0x8ec8,	// (0x0003f906) list_single_2graphic_pane_cp2_ParamLimits

0x8ec8,	// (0x0003f906) list_single_2graphic_pane_cp2

0x8ec8,	// (0x0003f906) list_single_graphic_heading_pane_cp2_ParamLimits

0x8ec8,	// (0x0003f906) list_single_graphic_heading_pane_cp2

0x8ec8,	// (0x0003f906) list_single_graphic_pane_cp2_ParamLimits

0x8ec8,	// (0x0003f906) list_single_graphic_pane_cp2

0x8ec8,	// (0x0003f906) list_single_heading_pane_cp2_ParamLimits

0x8ec8,	// (0x0003f906) list_single_heading_pane_cp2

0xc4f7,	// (0x00042f35) list_single_large_graphic_pane_cp2_ParamLimits

0xc4f7,	// (0x00042f35) list_single_large_graphic_pane_cp2

0x8ec8,	// (0x0003f906) list_single_number_heading_pane_cp2_ParamLimits

0x8ec8,	// (0x0003f906) list_single_number_heading_pane_cp2

0x8ec8,	// (0x0003f906) list_single_number_pane_cp2_ParamLimits

0x8ec8,	// (0x0003f906) list_single_number_pane_cp2

0x8ec8,	// (0x0003f906) list_single_pane_cp2_ParamLimits

0x8ec8,	// (0x0003f906) list_single_pane_cp2

0xc511,	// (0x00042f4f) bg_popup_sub_pane_cp22

0x1de3,	// (0x00038821) popup_side_volume_key_window_g1

0x1e0d,	// (0x0003884b) popup_side_volume_key_window_t1

0x1e29,	// (0x00038867) volume_small_pane_cp1

0xb831,	// (0x0004226f) bg_popup_sub_pane_cp24_ParamLimits

0xb831,	// (0x0004226f) bg_popup_sub_pane_cp24

0xc527,	// (0x00042f65) fep_china_uni_candidate_pane_ParamLimits

0xc527,	// (0x00042f65) fep_china_uni_candidate_pane

0xc53b,	// (0x00042f79) fep_china_uni_entry_pane

0xc54b,	// (0x00042f89) popup_fep_china_uni_window_g1

0xc567,	// (0x00042fa5) fep_china_uni_entry_pane_g1

0xc56f,	// (0x00042fad) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0004619b) fep_china_uni_entry_pane_g

0xc577,	// (0x00042fb5) fep_entry_item_pane

0xc581,	// (0x00042fbf) fep_candidate_item_pane

0xc589,	// (0x00042fc7) fep_china_uni_candidate_pane_g1

0xc591,	// (0x00042fcf) fep_china_uni_candidate_pane_g2

0xc599,	// (0x00042fd7) fep_china_uni_candidate_pane_g3

0xc5a1,	// (0x00042fdf) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x000461a0) fep_china_uni_candidate_pane_g

0xb7d9,	// (0x00042217) fep_entry_item_pane_g1

0xc5a9,	// (0x00042fe7) fep_entry_item_pane_t1_ParamLimits

0xc5a9,	// (0x00042fe7) fep_entry_item_pane_t1

0xc5bf,	// (0x00042ffd) fep_candidate_item_pane_t1_ParamLimits

0xc5bf,	// (0x00042ffd) fep_candidate_item_pane_t1

0xc5d4,	// (0x00043012) fep_candidate_item_pane_t2_ParamLimits

0xc5d4,	// (0x00043012) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x000461a9) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x000461a9) fep_candidate_item_pane_t

0xb83f,	// (0x0004227d) list_highlight_pane_cp31_ParamLimits

0xb83f,	// (0x0004227d) list_highlight_pane_cp31

0xc5e6,	// (0x00043024) level_1_signal_lsc

0xc5ef,	// (0x0004302d) level_2_signal_lsc

0xc5f8,	// (0x00043036) level_3_signal_lsc

0xc601,	// (0x0004303f) level_4_signal_lsc

0xc60a,	// (0x00043048) level_5_signal_lsc

0xc613,	// (0x00043051) level_6_signal_lsc

0xc61c,	// (0x0004305a) level_7_signal_lsc

0xc61c,	// (0x0004305a) level_1_battery_lsc

0xc625,	// (0x00043063) level_2_battery_lsc

0xc62e,	// (0x0004306c) level_3_battery_lsc

0xc637,	// (0x00043075) level_4_battery_lsc

0xc640,	// (0x0004307e) level_5_battery_lsc

0xc649,	// (0x00043087) level_6_battery_lsc

0xc5e6,	// (0x00043024) level_7_battery_lsc

0xc652,	// (0x00043090) scroll_handle_focus_pane_g1

0xc65b,	// (0x00043099) scroll_handle_focus_pane_g2

0xc664,	// (0x000430a2) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x000461ae) scroll_handle_focus_pane_g

0x7d77,	// (0x0003e7b5) list_single_2graphic_pane_g1_ParamLimits

0x7d77,	// (0x0003e7b5) list_single_2graphic_pane_g1

0x8167,	// (0x0003eba5) list_single_2graphic_pane_g2_ParamLimits

0x8167,	// (0x0003eba5) list_single_2graphic_pane_g2

0x274c,	// (0x0003918a) list_single_2graphic_pane_g3_ParamLimits

0x274c,	// (0x0003918a) list_single_2graphic_pane_g3

0x8195,	// (0x0003ebd3) list_single_2graphic_pane_g4_ParamLimits

0x8195,	// (0x0003ebd3) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x000461b5) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x000461b5) list_single_2graphic_pane_g

0x7d83,	// (0x0003e7c1) list_single_2graphic_pane_t1_ParamLimits

0x7d83,	// (0x0003e7c1) list_single_2graphic_pane_t1

0x7db1,	// (0x0003e7ef) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7db1,	// (0x0003e7ef) list_double2_graphic_large_graphic_pane_g1

0x8167,	// (0x0003eba5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8167,	// (0x0003eba5) list_double2_graphic_large_graphic_pane_g2

0x274c,	// (0x0003918a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x274c,	// (0x0003918a) list_double2_graphic_large_graphic_pane_g3

0x7dc3,	// (0x0003e801) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7dc3,	// (0x0003e801) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x000461be) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x000461be) list_double2_graphic_large_graphic_pane_g

0x7dcf,	// (0x0003e80d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7dcf,	// (0x0003e80d) list_double2_graphic_large_graphic_pane_t1

0x7de5,	// (0x0003e823) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7de5,	// (0x0003e823) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x000461c7) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x000461c7) list_double2_graphic_large_graphic_pane_t

0xc725,	// (0x00043163) popup_fast_swap_window_ParamLimits

0xc725,	// (0x00043163) popup_fast_swap_window

0xc741,	// (0x0004317f) popup_side_volume_key_window

0xc75d,	// (0x0004319b) stacon_top_pane

0xc767,	// (0x000431a5) status_pane_ParamLimits

0xc767,	// (0x000431a5) status_pane

0xc75d,	// (0x0004319b) status_small_pane

0xb7e3,	// (0x00042221) control_pane

0xb7e3,	// (0x00042221) stacon_bottom_pane

0xbf57,	// (0x00042995) scroll_pane_cp121

0xbf4e,	// (0x0004298c) set_content_pane

0xc66d,	// (0x000430ab) bg_active_tab_pane_g1_cp1

0xc676,	// (0x000430b4) bg_active_tab_pane_g2_cp1

0xc67f,	// (0x000430bd) bg_active_tab_pane_g3_cp1

0xc66d,	// (0x000430ab) bg_passive_tab_pane_g1_cp1

0xc676,	// (0x000430b4) bg_passive_tab_pane_g2_cp1

0xc67f,	// (0x000430bd) bg_passive_tab_pane_g3_cp1

0x8f28,	// (0x0003f966) bg_active_tab_pane_g1_cp2

0xc676,	// (0x000430b4) bg_active_tab_pane_g2_cp2

0x8f31,	// (0x0003f96f) bg_active_tab_pane_g3_cp2

0x8f28,	// (0x0003f966) bg_passive_tab_pane_g1_cp2

0xc676,	// (0x000430b4) bg_passive_tab_pane_g2_cp2

0x8f31,	// (0x0003f96f) bg_passive_tab_pane_g3_cp2

0x8f3a,	// (0x0003f978) bg_active_tab_pane_g1_cp3

0xc676,	// (0x000430b4) bg_active_tab_pane_g2_cp3

0x8f43,	// (0x0003f981) bg_active_tab_pane_g3_cp3

0x8f3a,	// (0x0003f978) bg_passive_tab_pane_g1_cp3

0xc676,	// (0x000430b4) bg_passive_tab_pane_g2_cp3

0x8f43,	// (0x0003f981) bg_passive_tab_pane_g3_cp3

0x8f4c,	// (0x0003f98a) bg_active_tab_pane_g1_cp4

0xc676,	// (0x000430b4) bg_active_tab_pane_g2_cp4

0x8f55,	// (0x0003f993) bg_active_tab_pane_g3_cp4

0x8f4c,	// (0x0003f98a) bg_passive_tab_pane_g1_cp4

0xc676,	// (0x000430b4) bg_passive_tab_pane_g2_cp4

0x8f55,	// (0x0003f993) bg_passive_tab_pane_g3_cp4

0xc6c6,	// (0x00043104) bg_active_tab_pane_g1_cp5

0xc676,	// (0x000430b4) bg_active_tab_pane_g2_cp5

0xc6cf,	// (0x0004310d) bg_active_tab_pane_g3_cp5

0xc6c6,	// (0x00043104) bg_passive_tab_pane_g1_cp5

0xc676,	// (0x000430b4) bg_passive_tab_pane_g2_cp5

0xc6cf,	// (0x0004310d) bg_passive_tab_pane_g3_cp5

0x8f5e,	// (0x0003f99c) list_set_graphic_pane_ParamLimits

0x8f5e,	// (0x0003f99c) list_set_graphic_pane

0xb7e3,	// (0x00042221) bg_set_opt_pane_cp4

0x8f70,	// (0x0003f9ae) list_set_graphic_pane_g1_ParamLimits

0x8f70,	// (0x0003f9ae) list_set_graphic_pane_g1

0x8f7c,	// (0x0003f9ba) list_set_graphic_pane_g2_ParamLimits

0x8f7c,	// (0x0003f9ba) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x000461cc) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x000461cc) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00046524) volume_small_pane_cp_g

0xc6d8,	// (0x00043116) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc6d8,	// (0x00043116) list_double2_large_graphic_pane_g1_cp2

0xc6e4,	// (0x00043122) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc6e4,	// (0x00043122) list_double2_large_graphic_pane_g2_cp2

0xc6f5,	// (0x00043133) list_double2_large_graphic_pane_g3_cp2

0xc6fd,	// (0x0004313b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc6fd,	// (0x0004313b) list_double2_large_graphic_pane_t1_cp2

0xc713,	// (0x00043151) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc713,	// (0x00043151) list_double2_large_graphic_pane_t2_cp2

0xde40,	// (0x0004487e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xde40,	// (0x0004487e) list_double_large_graphic_pane_g1_cp2

0xde51,	// (0x0004488f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xde51,	// (0x0004488f) list_double_large_graphic_pane_g2_cp2

0xc883,	// (0x000432c1) list_double_large_graphic_pane_g3_cp2

0xde62,	// (0x000448a0) list_double_large_graphic_pane_g4_cp

0xde76,	// (0x000448b4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xde76,	// (0x000448b4) list_double_large_graphic_pane_t1_cp2

0xde8d,	// (0x000448cb) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xde8d,	// (0x000448cb) list_double_large_graphic_pane_t2_cp2

0xc775,	// (0x000431b3) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc775,	// (0x000431b3) list_double2_graphic_pane_g1_cp2

0xc783,	// (0x000431c1) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc783,	// (0x000431c1) list_double2_graphic_pane_g2_cp2

0xc794,	// (0x000431d2) list_double2_graphic_pane_g3_cp2

0xc79e,	// (0x000431dc) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc79e,	// (0x000431dc) list_double2_graphic_pane_t1_cp2

0xc7b4,	// (0x000431f2) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc7b4,	// (0x000431f2) list_double2_graphic_pane_t2_cp2

0xc7c6,	// (0x00043204) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc7c6,	// (0x00043204) list_single_number_heading_pane_g1_cp2

0xc7d2,	// (0x00043210) list_single_number_heading_pane_g2_cp2

0xc7da,	// (0x00043218) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc7da,	// (0x00043218) list_single_number_heading_pane_t1_cp2

0xc7f0,	// (0x0004322e) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc7f0,	// (0x0004322e) list_single_number_heading_pane_t2_cp2

0xc802,	// (0x00043240) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc802,	// (0x00043240) list_single_number_heading_pane_t3_cp2

0xc7c6,	// (0x00043204) list_single_heading_pane_g1_cp2_ParamLimits

0xc7c6,	// (0x00043204) list_single_heading_pane_g1_cp2

0xc7d2,	// (0x00043210) list_single_heading_pane_g2_cp2

0xc7da,	// (0x00043218) list_single_heading_pane_t1_cp2_ParamLimits

0xc7da,	// (0x00043218) list_single_heading_pane_t1_cp2

0xdc48,	// (0x00044686) list_single_heading_pane_t2_cp2_ParamLimits

0xdc48,	// (0x00044686) list_single_heading_pane_t2_cp2

0xdbae,	// (0x000445ec) list_double_graphic_pane_g1_cp2_ParamLimits

0xdbae,	// (0x000445ec) list_double_graphic_pane_g1_cp2

0xdbba,	// (0x000445f8) list_double_graphic_pane_g2_cp2_ParamLimits

0xdbba,	// (0x000445f8) list_double_graphic_pane_g2_cp2

0xdbc9,	// (0x00044607) list_double_graphic_pane_g3_cp2

0xdbd1,	// (0x0004460f) list_double_graphic_pane_t1_cp2_ParamLimits

0xdbd1,	// (0x0004460f) list_double_graphic_pane_t1_cp2

0xdbe7,	// (0x00044625) list_double_graphic_pane_t2_cp2_ParamLimits

0xdbe7,	// (0x00044625) list_double_graphic_pane_t2_cp2

0xc877,	// (0x000432b5) list_double_number_pane_g1_cp2_ParamLimits

0xc877,	// (0x000432b5) list_double_number_pane_g1_cp2

0xc883,	// (0x000432c1) list_double_number_pane_g2_cp2

0xdb72,	// (0x000445b0) list_double_number_pane_t1_cp2_ParamLimits

0xdb72,	// (0x000445b0) list_double_number_pane_t1_cp2

0xdb86,	// (0x000445c4) list_double_number_pane_t2_cp2_ParamLimits

0xdb86,	// (0x000445c4) list_double_number_pane_t2_cp2

0xdb9c,	// (0x000445da) list_double_number_pane_t3_cp2_ParamLimits

0xdb9c,	// (0x000445da) list_double_number_pane_t3_cp2

0xdae9,	// (0x00044527) list_single_graphic_pane_g1_cp2_ParamLimits

0xdae9,	// (0x00044527) list_single_graphic_pane_g1_cp2

0xc8db,	// (0x00043319) list_single_graphic_pane_g2_cp2_ParamLimits

0xc8db,	// (0x00043319) list_single_graphic_pane_g2_cp2

0xc8e7,	// (0x00043325) list_single_graphic_pane_g3_cp2

0xdabf,	// (0x000444fd) list_single_graphic_pane_t1_cp2_ParamLimits

0xdabf,	// (0x000444fd) list_single_graphic_pane_t1_cp2

0xc8db,	// (0x00043319) list_single_number_pane_g1_cp2_ParamLimits

0xc8db,	// (0x00043319) list_single_number_pane_g1_cp2

0xc8e7,	// (0x00043325) list_single_number_pane_g2_cp2

0xdabf,	// (0x000444fd) list_single_number_pane_t1_cp2_ParamLimits

0xdabf,	// (0x000444fd) list_single_number_pane_t1_cp2

0xdad5,	// (0x00044513) list_single_number_pane_t2_cp2_ParamLimits

0xdad5,	// (0x00044513) list_single_number_pane_t2_cp2

0xc6e4,	// (0x00043122) list_double2_pane_g1_cp2_ParamLimits

0xc6e4,	// (0x00043122) list_double2_pane_g1_cp2

0xc6f5,	// (0x00043133) list_double2_pane_g2_cp2

0xc84f,	// (0x0004328d) list_double2_pane_t1_cp2_ParamLimits

0xc84f,	// (0x0004328d) list_double2_pane_t1_cp2

0xc865,	// (0x000432a3) list_double2_pane_t2_cp2_ParamLimits

0xc865,	// (0x000432a3) list_double2_pane_t2_cp2

0xc877,	// (0x000432b5) list_double_pane_g1_cp2_ParamLimits

0xc877,	// (0x000432b5) list_double_pane_g1_cp2

0xc883,	// (0x000432c1) list_double_pane_g2_cp2

0xc88b,	// (0x000432c9) list_double_pane_t1_cp2_ParamLimits

0xc88b,	// (0x000432c9) list_double_pane_t1_cp2

0xc8a1,	// (0x000432df) list_double_pane_t2_cp2_ParamLimits

0xc8a1,	// (0x000432df) list_double_pane_t2_cp2

0xc8cb,	// (0x00043309) list_single_pane_cp2_g3

0xc8db,	// (0x00043319) list_single_pane_g1_cp2_ParamLimits

0xc8db,	// (0x00043319) list_single_pane_g1_cp2

0xc8e7,	// (0x00043325) list_single_pane_g2_cp2

0xc8ef,	// (0x0004332d) list_single_pane_t1_cp2_ParamLimits

0xc8ef,	// (0x0004332d) list_single_pane_t1_cp2

0xc907,	// (0x00043345) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc907,	// (0x00043345) list_single_large_graphic_pane_g1_cp2

0xc913,	// (0x00043351) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc913,	// (0x00043351) list_single_large_graphic_pane_g2_cp2

0xc91f,	// (0x0004335d) list_single_large_graphic_pane_g3_cp2

0xc927,	// (0x00043365) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc927,	// (0x00043365) list_single_large_graphic_pane_g4_cp1

0xc941,	// (0x0004337f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc941,	// (0x0004337f) list_single_large_graphic_pane_t1_cp2

0xda8b,	// (0x000444c9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xda8b,	// (0x000444c9) list_single_graphic_heading_pane_g1_cp2

0xda58,	// (0x00044496) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xda58,	// (0x00044496) list_single_graphic_heading_pane_g4_cp2

0xc8e7,	// (0x00043325) list_single_graphic_heading_pane_g5_cp2

0xda97,	// (0x000444d5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xda97,	// (0x000444d5) list_single_graphic_heading_pane_t1_cp2

0xdaad,	// (0x000444eb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xdaad,	// (0x000444eb) list_single_graphic_heading_pane_t2_cp2

0xda4c,	// (0x0004448a) list_single_2graphic_pane_g1_cp2_ParamLimits

0xda4c,	// (0x0004448a) list_single_2graphic_pane_g1_cp2

0xda58,	// (0x00044496) list_single_2graphic_pane_g2_cp2_ParamLimits

0xda58,	// (0x00044496) list_single_2graphic_pane_g2_cp2

0xc8e7,	// (0x00043325) list_single_2graphic_pane_g3_cp2

0xda69,	// (0x000444a7) list_single_2graphic_pane_g4_cp2_ParamLimits

0xda69,	// (0x000444a7) list_single_2graphic_pane_g4_cp2

0xda75,	// (0x000444b3) list_single_2graphic_pane_t1_cp2_ParamLimits

0xda75,	// (0x000444b3) list_single_2graphic_pane_t1_cp2

0xb7d9,	// (0x00042217) list_highlight_pane_g10_cp1

0xd600,	// (0x0004403e) list_highlight_pane_g1_cp1

0xd608,	// (0x00044046) list_highlight_pane_g2_cp1

0xd610,	// (0x0004404e) list_highlight_pane_g3_cp1

0xd618,	// (0x00044056) list_highlight_pane_g4_cp1

0xd620,	// (0x0004405e) list_highlight_pane_g5_cp1

0xd628,	// (0x00044066) list_highlight_pane_g6_cp1

0xd630,	// (0x0004406e) list_highlight_pane_g7_cp1

0xd638,	// (0x00044076) list_highlight_pane_g8_cp1

0xd640,	// (0x0004407e) list_highlight_pane_g9_cp1

0x9c05,	// (0x00040643) form_field_slider_pane_t3

0x9c13,	// (0x00040651) form_field_slider_pane_t4

0xd53c,	// (0x00043f7a) slider_form_pane_ParamLimits

0xd53c,	// (0x00043f7a) slider_form_pane

0xb7e3,	// (0x00042221) control_abbreviations

0xb7e3,	// (0x00042221) control_conventions

0xb7e3,	// (0x00042221) control_definitions

0xb7e3,	// (0x00042221) format_table_attribute

0xdc92,	// (0x000446d0) bg_popup_preview_window_pane_g9

0xb7e3,	// (0x00042221) format_table_data2

0xb7e3,	// (0x00042221) format_table_data3

0xb7e3,	// (0x00042221) format_table_data_example

0x0008,

0xb7e3,	// (0x00042221) intro_purpose

0xf917,	// (0x00046355) bg_popup_preview_window_pane_g

0xb7e3,	// (0x00042221) texts_category

0xb7e3,	// (0x00042221) texts_graphics

0xc957,	// (0x00043395) text_digital

0xc966,	// (0x000433a4) text_primary

0xc975,	// (0x000433b3) text_primary_small

0xc984,	// (0x000433c2) text_secondary

0xc993,	// (0x000433d1) text_title

0xe12d,	// (0x00044b6b) bg_passive_tab_pane_g1_cp3_srt

0xc676,	// (0x000430b4) bg_passive_tab_pane_g2_cp3_srt

0xe136,	// (0x00044b74) bg_passive_tab_pane_g3_cp3_srt

0xb831,	// (0x0004226f) bg_active_tab_pane_cp3_srt_ParamLimits

0xb831,	// (0x0004226f) bg_active_tab_pane_cp3_srt

0xe13f,	// (0x00044b7d) tabs_4_active_pane_srt_g1

0x9f97,	// (0x000409d5) tabs_4_active_pane_srt_t1_ParamLimits

0x9f97,	// (0x000409d5) tabs_4_active_pane_srt_t1

0xe12d,	// (0x00044b6b) bg_active_tab_pane_g1_cp3_copy1

0xc676,	// (0x000430b4) bg_active_tab_pane_g2_cp3_copy1

0xe136,	// (0x00044b74) bg_active_tab_pane_g3_cp3_copy1

0xb83f,	// (0x0004227d) tabs_2_long_active_pane_srt_ParamLimits

0xb83f,	// (0x0004227d) tabs_2_long_active_pane_srt

0xb83f,	// (0x0004227d) tabs_2_long_passive_pane_srt_ParamLimits

0xb83f,	// (0x0004227d) tabs_2_long_passive_pane_srt

0xc0cc,	// (0x00042b0a) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc0cc,	// (0x00042b0a) bg_passive_tab_pane_cp4_srt

0xe053,	// (0x00044a91) bg_passive_tab_pane_g1_cp4_srt

0xc676,	// (0x000430b4) bg_passive_tab_pane_g2_cp4_srt

0xe05c,	// (0x00044a9a) bg_passive_tab_pane_g3_cp4_srt

0xb83f,	// (0x0004227d) bg_active_tab_pane_cp4_srt_ParamLimits

0xb83f,	// (0x0004227d) bg_active_tab_pane_cp4_srt

0x9da5,	// (0x000407e3) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9da5,	// (0x000407e3) tabs_2_long_active_pane_srt_t1

0xe053,	// (0x00044a91) bg_active_tab_pane_g1_cp4_srt

0xc676,	// (0x000430b4) bg_active_tab_pane_g2_cp4_srt

0xe05c,	// (0x00044a9a) bg_active_tab_pane_g3_cp4_srt

0xb831,	// (0x0004226f) tabs_3_long_active_pane_srt_ParamLimits

0xb831,	// (0x0004226f) tabs_3_long_active_pane_srt

0xb831,	// (0x0004226f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb831,	// (0x0004226f) tabs_3_long_passive_pane_cp_srt

0xb831,	// (0x0004226f) tabs_3_long_passive_pane_srt_ParamLimits

0xb831,	// (0x0004226f) tabs_3_long_passive_pane_srt

0xc0cc,	// (0x00042b0a) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc0cc,	// (0x00042b0a) bg_passive_tab_pane_cp5_srt

0xc6c6,	// (0x00043104) bg_passive_tab_pane_g1_cp5_srt

0xc676,	// (0x000430b4) bg_passive_tab_pane_g2_cp5_srt

0xc6cf,	// (0x0004310d) bg_passive_tab_pane_g3_cp5_srt

0xb83f,	// (0x0004227d) bg_active_tab_pane_cp5_srt_ParamLimits

0xb83f,	// (0x0004227d) bg_active_tab_pane_cp5_srt

0x9d8f,	// (0x000407cd) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9d8f,	// (0x000407cd) tabs_3_long_active_pane_srt_t1

0xc6c6,	// (0x00043104) bg_active_tab_pane_g1_cp5_srt

0xc676,	// (0x000430b4) bg_active_tab_pane_g2_cp5_srt

0xc6cf,	// (0x0004310d) bg_active_tab_pane_g3_cp5_srt

0xe045,	// (0x00044a83) navi_text_pane_srt_t1

0xe03d,	// (0x00044a7b) navi_icon_pane_srt_g1

0xca99,	// (0x000434d7) midp_editing_number_pane_srt

0xc9a2,	// (0x000433e0) midp_ticker_pane_srt

0xcaa1,	// (0x000434df) midp_ticker_pane_srt_g1

0xcaa9,	// (0x000434e7) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x000461eb) midp_ticker_pane_srt_g

0xcab1,	// (0x000434ef) midp_ticker_pane_srt_t1

0xe02e,	// (0x00044a6c) midp_editing_number_pane_t1_copy1

0x8fa0,	// (0x0003f9de) listscroll_midp_pane

0x8fa0,	// (0x0003f9de) midp_form_pane

0xc9aa,	// (0x000433e8) midp_info_popup_window_ParamLimits

0xc9aa,	// (0x000433e8) midp_info_popup_window

0xc02c,	// (0x00042a6a) bg_popup_sub_pane_cp50_ParamLimits

0xc02c,	// (0x00042a6a) bg_popup_sub_pane_cp50

0xd279,	// (0x00043cb7) listscroll_midp_info_pane_ParamLimits

0xd279,	// (0x00043cb7) listscroll_midp_info_pane

0xd261,	// (0x00043c9f) listscroll_form_midp_pane_ParamLimits

0xd261,	// (0x00043c9f) listscroll_form_midp_pane

0xd26d,	// (0x00043cab) scroll_bar_cp050

0x9bf9,	// (0x00040637) list_midp_pane

0xe9b1,	// (0x000453ef) signal_pane_g2_cp

0xd193,	// (0x00043bd1) listscroll_midp_info_pane_t1_ParamLimits

0xd193,	// (0x00043bd1) listscroll_midp_info_pane_t1

0xd1ab,	// (0x00043be9) listscroll_midp_info_pane_t2_ParamLimits

0xd1ab,	// (0x00043be9) listscroll_midp_info_pane_t2

0xd1e9,	// (0x00043c27) listscroll_midp_info_pane_t3_ParamLimits

0xd1e9,	// (0x00043c27) listscroll_midp_info_pane_t3

0xd223,	// (0x00043c61) listscroll_midp_info_pane_t4_ParamLimits

0xd223,	// (0x00043c61) listscroll_midp_info_pane_t4

0x0003,

0xf852,	// (0x00046290) listscroll_midp_info_pane_t_ParamLimits

0xf852,	// (0x00046290) listscroll_midp_info_pane_t

0xc093,	// (0x00042ad1) scroll_pane_cp21

0xd131,	// (0x00043b6f) form_midp_field_choice_group_pane

0xd13a,	// (0x00043b78) form_midp_field_text_pane

0xd179,	// (0x00043bb7) form_midp_field_time_pane

0xd181,	// (0x00043bbf) form_midp_gauge_slider_pane

0xd18a,	// (0x00043bc8) form_midp_gauge_wait_pane

0xb7e3,	// (0x00042221) form_midp_image_pane

0x7df7,	// (0x0003e835) list_single_midp_pane_ParamLimits

0x7df7,	// (0x0003e835) list_single_midp_pane

0x9bd7,	// (0x00040615) form_midp_field_text_pane_t1

0xcfd8,	// (0x00043a16) input_focus_pane_cp050

0xd120,	// (0x00043b5e) list_midp_form_text_pane

0xd0ef,	// (0x00043b2d) form_midp_field_choice_group_pane_t1

0xd0fd,	// (0x00043b3b) input_focus_pane_cp051

0xd111,	// (0x00043b4f) list_midp_choice_pane

0xb7e3,	// (0x00042221) status_idle_pane

0xd0d3,	// (0x00043b11) form_midp_field_time_pane_t1

0xb7d9,	// (0x00042217) wait_anim_pane_g2_copy1

0xd0e1,	// (0x00043b1f) form_midp_field_time_pane_t2

0x0001,

0xca03,	// (0x00043441) aid_navinavi_width_2_pane

0xf84d,	// (0x0004628b) form_midp_field_time_pane_t

0xb7e3,	// (0x00042221) input_focus_pane_cp052

0xb7e3,	// (0x00042221) bg_input_focus_pane_cp040

0xd0af,	// (0x00043aed) form_midp_gauge_slider_pane_t1

0xd0bd,	// (0x00043afb) form_midp_gauge_slider_pane_t2

0x9bbb,	// (0x000405f9) form_midp_gauge_slider_pane_t3

0x9bc9,	// (0x00040607) form_midp_gauge_slider_pane_t4

0x0003,

0xf844,	// (0x00046282) form_midp_gauge_slider_pane_t

0xd0cb,	// (0x00043b09) form_midp_slider_pane

0xb83f,	// (0x0004227d) bg_input_focus_pane_cp041_ParamLimits

0xb83f,	// (0x0004227d) bg_input_focus_pane_cp041

0xd07c,	// (0x00043aba) form_midp_gauge_wait_pane_t1_ParamLimits

0xd07c,	// (0x00043aba) form_midp_gauge_wait_pane_t1

0xd08e,	// (0x00043acc) form_midp_gauge_wait_pane_t2_ParamLimits

0xd08e,	// (0x00043acc) form_midp_gauge_wait_pane_t2

0x0001,

0xf83f,	// (0x0004627d) form_midp_gauge_wait_pane_t_ParamLimits

0xf83f,	// (0x0004627d) form_midp_gauge_wait_pane_t

0xd0a0,	// (0x00043ade) form_midp_wait_pane_ParamLimits

0xd0a0,	// (0x00043ade) form_midp_wait_pane

0xd046,	// (0x00043a84) form_midp_image_pane_g1

0xd04f,	// (0x00043a8d) form_midp_image_pane_t1

0xd05e,	// (0x00043a9c) form_midp_image_pane_t2

0xd06d,	// (0x00043aab) form_midp_image_pane_t3

0x0002,

0xf838,	// (0x00046276) form_midp_image_pane_t

0xd03d,	// (0x00043a7b) list_single_midp_pane_g1

0x0c96,	// (0x000376d4) list_single_midp_pane_t1

0x9ba6,	// (0x000405e4) list_midp_form_item_pane_ParamLimits

0x9ba6,	// (0x000405e4) list_midp_form_item_pane

0xc9bd,	// (0x000433fb) list_midp_form_item_pane_t1

0xc9cc,	// (0x0004340a) midp_ticker_pane_g1

0xc9d8,	// (0x00043416) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x000461d1) midp_ticker_pane_g

0x9048,	// (0x0003fa86) midp_ticker_pane_t1

0x9f10,	// (0x0004094e) midp_editing_number_pane_t1

0xe0c2,	// (0x00044b00) midp_editing_number_pane

0xe0d1,	// (0x00044b0f) midp_ticker_pane

0xe01e,	// (0x00044a5c) ai_message_heading_pane

0xb7e3,	// (0x00042221) bg_popup_window_pane_cp14

0xe026,	// (0x00044a64) listscroll_ai_message_pane

0xdfa8,	// (0x000449e6) ai_message_heading_pane_g1_ParamLimits

0xdfa8,	// (0x000449e6) ai_message_heading_pane_g1

0xdfb4,	// (0x000449f2) ai_message_heading_pane_g2_ParamLimits

0xdfb4,	// (0x000449f2) ai_message_heading_pane_g2

0xdfc0,	// (0x000449fe) ai_message_heading_pane_g3_ParamLimits

0xdfc0,	// (0x000449fe) ai_message_heading_pane_g3

0xdfcc,	// (0x00044a0a) ai_message_heading_pane_g4_ParamLimits

0xdfcc,	// (0x00044a0a) ai_message_heading_pane_g4

0x0003,

0xf979,	// (0x000463b7) ai_message_heading_pane_g_ParamLimits

0xf979,	// (0x000463b7) ai_message_heading_pane_g

0xdfd8,	// (0x00044a16) ai_message_heading_pane_t1_ParamLimits

0xdfd8,	// (0x00044a16) ai_message_heading_pane_t1

0xdff2,	// (0x00044a30) ai_message_heading_pane_t2_ParamLimits

0xdff2,	// (0x00044a30) ai_message_heading_pane_t2

0x0001,

0xf982,	// (0x000463c0) ai_message_heading_pane_t_ParamLimits

0xf982,	// (0x000463c0) ai_message_heading_pane_t

0xe004,	// (0x00044a42) bg_popup_heading_pane_cp1_ParamLimits

0xe004,	// (0x00044a42) bg_popup_heading_pane_cp1

0xdf96,	// (0x000449d4) list_ai_message_pane_ParamLimits

0xdf96,	// (0x000449d4) list_ai_message_pane

0xc093,	// (0x00042ad1) scroll_pane_cp10

0xdf32,	// (0x00044970) list_ai_message_pane_g1

0xdf3a,	// (0x00044978) list_ai_message_pane_g2

0x0001,

0xf956,	// (0x00046394) list_ai_message_pane_g

0xdf42,	// (0x00044980) list_ai_message_pane_t1_ParamLimits

0xdf42,	// (0x00044980) list_ai_message_pane_t1

0xdf57,	// (0x00044995) list_ai_message_pane_t2_ParamLimits

0xdf57,	// (0x00044995) list_ai_message_pane_t2

0xdf6c,	// (0x000449aa) list_ai_message_pane_t3_ParamLimits

0xdf6c,	// (0x000449aa) list_ai_message_pane_t3

0xdf81,	// (0x000449bf) list_ai_message_pane_t4_ParamLimits

0xdf81,	// (0x000449bf) list_ai_message_pane_t4

0x0003,

0xf95b,	// (0x00046399) list_ai_message_pane_t_ParamLimits

0xf95b,	// (0x00046399) list_ai_message_pane_t

0x9d6e,	// (0x000407ac) cell_ai_soft_ind_pane_ParamLimits

0x9d6e,	// (0x000407ac) cell_ai_soft_ind_pane

0xc9e4,	// (0x00043422) cell_ai_soft_ind_pane_g1_ParamLimits

0xc9e4,	// (0x00043422) cell_ai_soft_ind_pane_g1

0xb7e3,	// (0x00042221) grid_highlight_cp1

0xc9f1,	// (0x0004342f) text_secondary_cp56_ParamLimits

0xc9f1,	// (0x0004342f) text_secondary_cp56

0xdf07,	// (0x00044945) example_general_pane_ParamLimits

0xdf07,	// (0x00044945) example_general_pane

0xdf13,	// (0x00044951) example_parent_pane_g1_ParamLimits

0xdf13,	// (0x00044951) example_parent_pane_g1

0xdf1f,	// (0x0004495d) example_parent_pane_t1_ParamLimits

0xdf1f,	// (0x0004495d) example_parent_pane_t1

0x947d,	// (0x0003febb) popup_preview_text_window_ParamLimits

0x947d,	// (0x0003febb) popup_preview_text_window

0xc8d3,	// (0x00043311) list_single_pane_cp2_g4

0xba1a,	// (0x00042458) bg_popup_preview_window_pane_ParamLimits

0xba1a,	// (0x00042458) bg_popup_preview_window_pane

0xdc9a,	// (0x000446d8) popup_preview_text_window_t1_ParamLimits

0xdc9a,	// (0x000446d8) popup_preview_text_window_t1

0xdcb8,	// (0x000446f6) popup_preview_text_window_t2_ParamLimits

0xdcb8,	// (0x000446f6) popup_preview_text_window_t2

0xdd01,	// (0x0004473f) popup_preview_text_window_t3_ParamLimits

0xdd01,	// (0x0004473f) popup_preview_text_window_t3

0xdd46,	// (0x00044784) popup_preview_text_window_t4_ParamLimits

0xdd46,	// (0x00044784) popup_preview_text_window_t4

0x0004,

0xf92a,	// (0x00046368) popup_preview_text_window_t_ParamLimits

0xf92a,	// (0x00046368) popup_preview_text_window_t

0xddc4,	// (0x00044802) scroll_pane_cp11

0xcee8,	// (0x00043926) bg_popup_preview_window_pane_g1

0xdc5a,	// (0x00044698) bg_popup_preview_window_pane_g2

0xdc62,	// (0x000446a0) bg_popup_preview_window_pane_g3

0xdc6a,	// (0x000446a8) bg_popup_preview_window_pane_g4

0xdc72,	// (0x000446b0) bg_popup_preview_window_pane_g5

0xdc7a,	// (0x000446b8) bg_popup_preview_window_pane_g6

0xdc82,	// (0x000446c0) bg_popup_preview_window_pane_g7

0xdc8a,	// (0x000446c8) bg_popup_preview_window_pane_g8

0x122d,	// (0x00037c6b) aid_popup_width_pane

0x93f9,	// (0x0003fe37) popup_midp_note_alarm_window_ParamLimits

0x93f9,	// (0x0003fe37) popup_midp_note_alarm_window

0xbf68,	// (0x000429a6) data_form_pane_ParamLimits

0x7c59,	// (0x0003e697) form_field_data_pane_g1

0x7c63,	// (0x0003e6a1) form_field_data_pane_t1_ParamLimits

0xbf74,	// (0x000429b2) input_focus_pane_ParamLimits

0xbf82,	// (0x000429c0) data_form_wide_pane_ParamLimits

0x09c0,	// (0x000373fe) form_field_data_wide_pane_g1

0x09cc,	// (0x0003740a) form_field_data_wide_pane_t1_ParamLimits

0xbbbb,	// (0x000425f9) input_focus_pane_cp6_ParamLimits

0x8dae,	// (0x0003f7ec) input_popup_find_pane_g1_ParamLimits

0x8dae,	// (0x0003f7ec) input_popup_find_pane_g1

0x1ba8,	// (0x000385e6) aid_navi_side_left_pane

0x1bbd,	// (0x000385fb) aid_navi_side_right_pane

0xd6dd,	// (0x0004411b) bg_popup_window_pane_cp30_ParamLimits

0xd6dd,	// (0x0004411b) bg_popup_window_pane_cp30

0xd757,	// (0x00044195) popup_midp_note_alarm_window_g1_ParamLimits

0xd757,	// (0x00044195) popup_midp_note_alarm_window_g1

0xd787,	// (0x000441c5) popup_midp_note_alarm_window_t1_ParamLimits

0xd787,	// (0x000441c5) popup_midp_note_alarm_window_t1

0xd828,	// (0x00044266) popup_midp_note_alarm_window_t2_ParamLimits

0xd828,	// (0x00044266) popup_midp_note_alarm_window_t2

0xd918,	// (0x00044356) popup_midp_note_alarm_window_t3_ParamLimits

0xd918,	// (0x00044356) popup_midp_note_alarm_window_t3

0xd94a,	// (0x00044388) popup_midp_note_alarm_window_t4_ParamLimits

0xd94a,	// (0x00044388) popup_midp_note_alarm_window_t4

0xd970,	// (0x000443ae) popup_midp_note_alarm_window_t5_ParamLimits

0xd970,	// (0x000443ae) popup_midp_note_alarm_window_t5

0x000a,

0xf8c7,	// (0x00046305) popup_midp_note_alarm_window_t_ParamLimits

0xf8c7,	// (0x00046305) popup_midp_note_alarm_window_t

0xda1c,	// (0x0004445a) wait_bar_pane_cp1_ParamLimits

0xda1c,	// (0x0004445a) wait_bar_pane_cp1

0xb7e3,	// (0x00042221) wait_anim_pane_copy1

0xb7e3,	// (0x00042221) wait_border_pane_copy1

0xd3fd,	// (0x00043e3b) wait_border_pane_g1_copy1

0x09e6,	// (0x00037424) form_field_popup_pane_g1

0x7c7d,	// (0x0003e6bb) form_field_popup_pane_t1_ParamLimits

0xbf74,	// (0x000429b2) input_focus_pane_cp7_ParamLimits

0xbfae,	// (0x000429ec) list_form_pane_ParamLimits

0x0a06,	// (0x00037444) form_field_popup_wide_pane_g1

0x0a0e,	// (0x0003744c) form_field_popup_wide_pane_t1_ParamLimits

0xbf74,	// (0x000429b2) input_focus_pane_cp8_ParamLimits

0xbfba,	// (0x000429f8) list_form_wide_pane_ParamLimits

0xe166,	// (0x00044ba4) aid_size_cell_graphic_pane

0x7cfc,	// (0x0003e73a) data_form_pane_t1_ParamLimits

0x7e21,	// (0x0003e85f) data_form_wide_pane_t1_ParamLimits

0x9832,	// (0x00040270) bg_status_flat_pane

0x89f4,	// (0x0003f432) title_pane_t1_ParamLimits

0xb7f9,	// (0x00042237) title_pane_t2_ParamLimits

0xb81f,	// (0x0004225d) title_pane_t3_ParamLimits

0xf59b,	// (0x00045fd9) title_pane_t_ParamLimits

0xc44a,	// (0x00042e88) level_1_signal_ParamLimits

0xc457,	// (0x00042e95) level_2_signal_ParamLimits

0xc464,	// (0x00042ea2) level_3_signal_ParamLimits

0xc471,	// (0x00042eaf) level_4_signal_ParamLimits

0xc47e,	// (0x00042ebc) level_5_signal_ParamLimits

0xc48b,	// (0x00042ec9) level_6_signal_ParamLimits

0xc498,	// (0x00042ed6) level_7_signal_ParamLimits

0xc44a,	// (0x00042e88) level_1_battery_ParamLimits

0xc457,	// (0x00042e95) level_2_battery_ParamLimits

0xc464,	// (0x00042ea2) level_3_battery_ParamLimits

0xc471,	// (0x00042eaf) level_4_battery_ParamLimits

0xc47e,	// (0x00042ebc) level_5_battery_ParamLimits

0xc48b,	// (0x00042ec9) level_6_battery_ParamLimits

0xc498,	// (0x00042ed6) level_7_battery_ParamLimits

0xd600,	// (0x0004403e) bg_status_flat_pane_g1

0xd608,	// (0x00044046) bg_status_flat_pane_g2

0xd610,	// (0x0004404e) bg_status_flat_pane_g3

0xd618,	// (0x00044056) bg_status_flat_pane_g4

0xd620,	// (0x0004405e) bg_status_flat_pane_g5

0xd628,	// (0x00044066) bg_status_flat_pane_g6

0xd630,	// (0x0004406e) bg_status_flat_pane_g7

0x8a88,	// (0x0003f4c6) tabs_3_active_pane_t1_ParamLimits

0x8a88,	// (0x0003f4c6) tabs_3_passive_pane_t1_ParamLimits

0x8aa2,	// (0x0003f4e0) tabs_4_active_pane_t1_ParamLimits

0x8aa2,	// (0x0003f4e0) tabs_4_1_passive_pane_t1_ParamLimits

0x8dc4,	// (0x0003f802) tabs_2_active_pane_t1_ParamLimits

0x8dc4,	// (0x0003f802) tabs_2_passive_pane_t1_ParamLimits

0xb83f,	// (0x0004227d) bg_active_tab_pane_cp4_ParamLimits

0x8dd6,	// (0x0003f814) tabs_2_long_active_pane_t1_ParamLimits

0xc0cc,	// (0x00042b0a) bg_passive_tab_pane_cp4_ParamLimits

0x27ad,	// (0x000391eb) list_single_midp_graphic_pane_t1_ParamLimits

0xb83f,	// (0x0004227d) bg_active_tab_pane_cp5_ParamLimits

0x8de9,	// (0x0003f827) tabs_3_long_active_pane_t1_ParamLimits

0xc0cc,	// (0x00042b0a) bg_passive_tab_pane_cp5_ParamLimits

0x27ad,	// (0x000391eb) list_single_midp_graphic_pane_t1

0x9832,	// (0x00040270) bg_status_flat_pane_ParamLimits

0xcdb9,	// (0x000437f7) indicator_pane_cp2_ParamLimits

0xcdb9,	// (0x000437f7) indicator_pane_cp2

0x99a9,	// (0x000403e7) navi_pane_srt_ParamLimits

0x99a9,	// (0x000403e7) navi_pane_srt

0xcde1,	// (0x0004381f) popup_clock_digital_analogue_window_cp1

0xb883,	// (0x000422c1) indicator_pane_t1

0xc9a2,	// (0x000433e0) copy_highlight_pane

0xc9a2,	// (0x000433e0) cursor_graphics_pane

0xc9a2,	// (0x000433e0) graphic_within_text_pane

0xc9a2,	// (0x000433e0) link_highlight_pane

0xdd87,	// (0x000447c5) popup_preview_text_window_t5_ParamLimits

0xdd87,	// (0x000447c5) popup_preview_text_window_t5

0xca0b,	// (0x00043449) cursor_digital_pane

0xca0b,	// (0x00043449) cursor_primary_pane

0xca1c,	// (0x0004345a) cursor_primary_small_pane

0xca24,	// (0x00043462) cursor_secondary_pane

0xca2c,	// (0x0004346a) cursor_title_pane

0xca0b,	// (0x00043449) link_highlight_digital_pane

0xca13,	// (0x00043451) link_highlight_primary_pane

0xca1c,	// (0x0004345a) link_highlight_primary_small_pane

0xca24,	// (0x00043462) link_highlight_secondary_pane

0xca2c,	// (0x0004346a) link_highlight_title_pane

0xca0b,	// (0x00043449) copy_highlight_digital_pane

0xca0b,	// (0x00043449) copy_highlight_primary_pane

0xca1c,	// (0x0004345a) copy_highlight_primary_small_pane

0xca24,	// (0x00043462) copy_highlight_secondary_pane

0xca2c,	// (0x0004346a) copy_highlight_title_pane

0xca24,	// (0x00043462) graphic_text_digital_pane

0xd680,	// (0x000440be) graphic_text_primary_pane

0xd689,	// (0x000440c7) graphic_text_primary_small_pane

0xca1c,	// (0x0004345a) graphic_text_secondary_pane

0xca0b,	// (0x00043449) graphic_text_title_pane

0x905a,	// (0x0003fa98) cursor_primary_pane_g1

0xd672,	// (0x000440b0) cursor_text_primary_t1

0x9c35,	// (0x00040673) cursor_primary_small_pane_g1

0xd664,	// (0x000440a2) cursor_text_primary_small_t1

0x9c2b,	// (0x00040669) cursor_primary_small_pane_g1_copy1

0xd656,	// (0x00044094) cursor_text_primary_small_t1_copy1

0xd648,	// (0x00044086) cursor_text_title_t1

0x9c21,	// (0x0004065f) cursor_title_pane_g1

0x905a,	// (0x0003fa98) cursor_digital_pane_g1

0xca34,	// (0x00043472) cursor_text_digital_t1

0xca59,	// (0x00043497) link_highlight_primary_pane_g1

0xd5f1,	// (0x0004402f) link_highlight_primary_pane_t1

0xca42,	// (0x00043480) link_highlight_primary_small_pane_g1

0xca4a,	// (0x00043488) link_highlight_primary_small_pane_t1

0xca59,	// (0x00043497) link_highlight_secondary_pane_g1

0xca61,	// (0x0004349f) link_highlight_secondary_pane_t1

0xd565,	// (0x00043fa3) link_highlight_title_pane_g1

0xd56d,	// (0x00043fab) link_highlight_title_pane_t1

0xd54e,	// (0x00043f8c) link_highlight_digital_pane_g1

0xd556,	// (0x00043f94) link_highlight_digital_pane_t1

0xd442,	// (0x00043e80) copy_highlight_primary_pane_g1

0xd44a,	// (0x00043e88) copy_highlight_primary_pane_t1

0xd41c,	// (0x00043e5a) copy_highlight_primary_small_pane_g1

0xd433,	// (0x00043e71) copy_highlight_primary_small_pane_t1

0xca70,	// (0x000434ae) copy_highlight_secondary_pane_g1

0xca78,	// (0x000434b6) copy_highlight_secondary_pane_t1

0xd41c,	// (0x00043e5a) copy_highlight_title_pane_g1

0xd424,	// (0x00043e62) copy_highlight_title_pane_t1

0xd442,	// (0x00043e80) copy_highlight_digital_pane_g1

0xe2ec,	// (0x00044d2a) copy_highlight_digital_pane_t1

0xe240,	// (0x00044c7e) graphic_text_primary_pane_g1

0xe2d0,	// (0x00044d0e) graphic_text_primary_pane_t1

0xe2de,	// (0x00044d1c) graphic_text_primary_pane_t2

0x0001,

0xf9f6,	// (0x00046434) graphic_text_primary_pane_t

0xe2ac,	// (0x00044cea) graphic_text_primary_small_pane_g1

0xe2b4,	// (0x00044cf2) graphic_text_primary_small_pane_t1

0xe2c2,	// (0x00044d00) graphic_text_primary_small_pane_t2

0x0001,

0xf9f1,	// (0x0004642f) graphic_text_primary_small_pane_t

0xe288,	// (0x00044cc6) graphic_text_secondary_pane_g1

0xe290,	// (0x00044cce) graphic_text_secondary_pane_t1

0xe29e,	// (0x00044cdc) graphic_text_secondary_pane_t2

0x0001,

0xf9ec,	// (0x0004642a) graphic_text_secondary_pane_t

0xe264,	// (0x00044ca2) graphic_text_title_pane_g1

0xe26c,	// (0x00044caa) graphic_text_title_pane_t1

0xe27a,	// (0x00044cb8) graphic_text_title_pane_t2

0x0001,

0xf9e7,	// (0x00046425) graphic_text_title_pane_t

0xe240,	// (0x00044c7e) graphic_text_digital_pane_g1

0xe248,	// (0x00044c86) graphic_text_digital_pane_t1

0xe256,	// (0x00044c94) graphic_text_digital_pane_t2

0x0001,

0xf9e2,	// (0x00046420) graphic_text_digital_pane_t

0xb83f,	// (0x0004227d) navi_icon_pane_srt_ParamLimits

0xb83f,	// (0x0004227d) navi_icon_pane_srt

0xb7e3,	// (0x00042221) navi_midp_pane_srt

0xb7e3,	// (0x00042221) navi_navi_pane_srt

0xb83f,	// (0x0004227d) navi_text_pane_srt_ParamLimits

0xb83f,	// (0x0004227d) navi_text_pane_srt

0xe20b,	// (0x00044c49) navi_navi_icon_text_pane_srt

0xe213,	// (0x00044c51) navi_navi_pane_srt_g1_ParamLimits

0xe213,	// (0x00044c51) navi_navi_pane_srt_g1

0xe225,	// (0x00044c63) navi_navi_pane_srt_g2_ParamLimits

0xe225,	// (0x00044c63) navi_navi_pane_srt_g2

0x0001,

0xf9dd,	// (0x0004641b) navi_navi_pane_srt_g_ParamLimits

0xf9dd,	// (0x0004641b) navi_navi_pane_srt_g

0xe237,	// (0x00044c75) navi_navi_tabs_pane_srt

0xe20b,	// (0x00044c49) navi_navi_text_pane_srt

0xe20b,	// (0x00044c49) navi_navi_volume_pane_srt

0xe1fc,	// (0x00044c3a) navi_navi_text_pane_srt_t1

0x2bcb,	// (0x00039609) navi_navi_volume_pane_srt_g1

0x2bd3,	// (0x00039611) volume_small_pane_srt_ParamLimits

0x2bd3,	// (0x00039611) volume_small_pane_srt

0x20c6,	// (0x00038b04) volume_small_pane_srt_g1_ParamLimits

0x20c6,	// (0x00038b04) volume_small_pane_srt_g1

0x20d6,	// (0x00038b14) volume_small_pane_srt_g2_ParamLimits

0x20d6,	// (0x00038b14) volume_small_pane_srt_g2

0x20e7,	// (0x00038b25) volume_small_pane_srt_g3_ParamLimits

0x20e7,	// (0x00038b25) volume_small_pane_srt_g3

0x20f8,	// (0x00038b36) volume_small_pane_srt_g4_ParamLimits

0x20f8,	// (0x00038b36) volume_small_pane_srt_g4

0x2109,	// (0x00038b47) volume_small_pane_srt_g5_ParamLimits

0x2109,	// (0x00038b47) volume_small_pane_srt_g5

0x211a,	// (0x00038b58) volume_small_pane_srt_g6_ParamLimits

0x211a,	// (0x00038b58) volume_small_pane_srt_g6

0x212b,	// (0x00038b69) volume_small_pane_srt_g7_ParamLimits

0x212b,	// (0x00038b69) volume_small_pane_srt_g7

0x213c,	// (0x00038b7a) volume_small_pane_srt_g8_ParamLimits

0x213c,	// (0x00038b7a) volume_small_pane_srt_g8

0x214d,	// (0x00038b8b) volume_small_pane_srt_g9_ParamLimits

0x214d,	// (0x00038b8b) volume_small_pane_srt_g9

0x215e,	// (0x00038b9c) volume_small_pane_srt_g10_ParamLimits

0x215e,	// (0x00038b9c) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x000461d6) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x000461d6) volume_small_pane_srt_g

0xbac3,	// (0x00042501) query_popup_data_pane_cp2

0xe1e2,	// (0x00044c20) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe1e2,	// (0x00044c20) navi_navi_icon_text_pane_srt_t1

0xd680,	// (0x000440be) navi_tabs_2_long_pane_srt

0xd680,	// (0x000440be) navi_tabs_2_pane_srt

0xd680,	// (0x000440be) navi_tabs_3_long_pane_srt

0xd680,	// (0x000440be) navi_tabs_3_pane_srt

0xd680,	// (0x000440be) navi_tabs_4_pane_srt

0x2bab,	// (0x000395e9) tabs_2_active_pane_srt_ParamLimits

0x2bab,	// (0x000395e9) tabs_2_active_pane_srt

0x2bbb,	// (0x000395f9) tabs_2_passive_pane_srt_ParamLimits

0x2bbb,	// (0x000395f9) tabs_2_passive_pane_srt

0xcfd8,	// (0x00043a16) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcfd8,	// (0x00043a16) bg_passive_tab_pane_cp1_srt

0xe1c0,	// (0x00044bfe) bg_passive_tab_pane_g1_cp1_srt

0xc676,	// (0x000430b4) bg_passive_tab_pane_g2_cp1_srt

0xe1c9,	// (0x00044c07) bg_passive_tab_pane_g3_cp1_srt

0xb831,	// (0x0004226f) bg_active_tab_pane_cp1_srt_ParamLimits

0xb831,	// (0x0004226f) bg_active_tab_pane_cp1_srt

0xe1d2,	// (0x00044c10) tabs_2_active_pane_srt_g1

0xa013,	// (0x00040a51) tabs_2_active_pane_srt_t1_ParamLimits

0xa013,	// (0x00040a51) tabs_2_active_pane_srt_t1

0xe1c0,	// (0x00044bfe) bg_active_tab_pane_g1_cp1_srt

0xc676,	// (0x000430b4) bg_active_tab_pane_g2_cp1_srt

0xe1c9,	// (0x00044c07) bg_active_tab_pane_g3_cp1_srt

0x2b78,	// (0x000395b6) tabs_3_active_pane_srt_ParamLimits

0x2b78,	// (0x000395b6) tabs_3_active_pane_srt

0x2b89,	// (0x000395c7) tabs_3_passive_pane_cp_srt_ParamLimits

0x2b89,	// (0x000395c7) tabs_3_passive_pane_cp_srt

0x2b9a,	// (0x000395d8) tabs_3_passive_pane_srt_ParamLimits

0x2b9a,	// (0x000395d8) tabs_3_passive_pane_srt

0xcfd8,	// (0x00043a16) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcfd8,	// (0x00043a16) bg_passive_tab_pane_cp2_srt

0xca87,	// (0x000434c5) bg_passive_tab_pane_g1_cp2_srt

0xc676,	// (0x000430b4) bg_passive_tab_pane_g2_cp2_srt

0xca90,	// (0x000434ce) bg_passive_tab_pane_g3_cp2_srt

0xb831,	// (0x0004226f) bg_active_tab_pane_cp2_srt_ParamLimits

0xb831,	// (0x0004226f) bg_active_tab_pane_cp2_srt

0xe1b8,	// (0x00044bf6) tabs_3_active_pane_srt_g1

0x9ffd,	// (0x00040a3b) tabs_3_active_pane_srt_t1_ParamLimits

0x9ffd,	// (0x00040a3b) tabs_3_active_pane_srt_t1

0xca87,	// (0x000434c5) bg_active_tab_pane_g1_cp2_srt

0xc676,	// (0x000430b4) bg_active_tab_pane_g2_cp2_srt

0xca90,	// (0x000434ce) bg_active_tab_pane_g3_cp2_srt

0x2b30,	// (0x0003956e) tabs_4_active_pane_srt_ParamLimits

0x2b30,	// (0x0003956e) tabs_4_active_pane_srt

0x2b42,	// (0x00039580) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2b42,	// (0x00039580) tabs_4_passive_pane_cp2_srt

0xcbb4,	// (0x000435f2) aid_size_cell_toolbar

0xd8fa,	// (0x00044338) main_idle_act_pane_ParamLimits

0xcc78,	// (0x000436b6) popup_large_graphic_colour_window_ParamLimits

0x96fd,	// (0x0004013b) popup_toolbar_window_ParamLimits

0x96fd,	// (0x0004013b) popup_toolbar_window

0xe0e4,	// (0x00044b22) list_single_graphic_2heading_pane_ParamLimits

0xe0e4,	// (0x00044b22) list_single_graphic_2heading_pane

0xc276,	// (0x00042cb4) aid_size_cell_apps_grid_lsc_pane

0xc288,	// (0x00042cc6) aid_size_cell_apps_grid_prt_pane

0xc0cc,	// (0x00042b0a) bg_wml_button_pane_cp1_ParamLimits

0xc0cc,	// (0x00042b0a) bg_wml_button_pane_cp1

0x9bd7,	// (0x00040615) form_midp_field_text_pane_t1_ParamLimits

0xcfd8,	// (0x00043a16) input_focus_pane_cp050_ParamLimits

0xd120,	// (0x00043b5e) list_midp_form_text_pane_ParamLimits

0xd0fd,	// (0x00043b3b) input_focus_pane_cp051_ParamLimits

0xd111,	// (0x00043b4f) list_midp_choice_pane_ParamLimits

0x9b72,	// (0x000405b0) list_single_2graphic_pane_cp3_ParamLimits

0x9b72,	// (0x000405b0) list_single_2graphic_pane_cp3

0x9b86,	// (0x000405c4) list_single_midp_graphic_pane_ParamLimits

0x9b86,	// (0x000405c4) list_single_midp_graphic_pane

0x0bde,	// (0x0003761c) list_single_graphic_2heading_pane_g1_ParamLimits

0x0bde,	// (0x0003761c) list_single_graphic_2heading_pane_g1

0x0bea,	// (0x00037628) list_single_graphic_2heading_pane_g4_ParamLimits

0x0bea,	// (0x00037628) list_single_graphic_2heading_pane_g4

0x0bf6,	// (0x00037634) list_single_graphic_2heading_pane_g5_ParamLimits

0x0bf6,	// (0x00037634) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x00046229) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x00046229) list_single_graphic_2heading_pane_g

0x0c02,	// (0x00037640) list_single_graphic_2heading_pane_t1_ParamLimits

0x0c02,	// (0x00037640) list_single_graphic_2heading_pane_t1

0x0c16,	// (0x00037654) list_single_graphic_2heading_pane_t2_ParamLimits

0x0c16,	// (0x00037654) list_single_graphic_2heading_pane_t2

0x0c32,	// (0x00037670) list_single_graphic_2heading_pane_t3_ParamLimits

0x0c32,	// (0x00037670) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x00046230) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x00046230) list_single_graphic_2heading_pane_t

0xce26,	// (0x00043864) bg_popup_sub_pane_cp2

0xce50,	// (0x0004388e) grid_toobar_pane

0x271c,	// (0x0003915a) cell_toolbar_pane_ParamLimits

0x271c,	// (0x0003915a) cell_toolbar_pane

0xce8c,	// (0x000438ca) cell_toolbar_pane_g1_ParamLimits

0xce8c,	// (0x000438ca) cell_toolbar_pane_g1

0xcea0,	// (0x000438de) cell_toolbar_pane_g2_ParamLimits

0xcea0,	// (0x000438de) cell_toolbar_pane_g2

0x0001,

0xf7f9,	// (0x00046237) cell_toolbar_pane_g_ParamLimits

0xf7f9,	// (0x00046237) cell_toolbar_pane_g

0xcec2,	// (0x00043900) grid_highlight_pane_cp2_ParamLimits

0xcec2,	// (0x00043900) grid_highlight_pane_cp2

0xcedc,	// (0x0004391a) toolbar_button_pane

0xcee8,	// (0x00043926) toolbar_button_pane_g1

0xcef0,	// (0x0004392e) toolbar_button_pane_g2

0xcef8,	// (0x00043936) toolbar_button_pane_g3

0xcf00,	// (0x0004393e) toolbar_button_pane_g4

0xcf08,	// (0x00043946) toolbar_button_pane_g5

0xcf10,	// (0x0004394e) toolbar_button_pane_g6

0xcf18,	// (0x00043956) toolbar_button_pane_g7

0xcf20,	// (0x0004395e) toolbar_button_pane_g8

0xcf28,	// (0x00043966) toolbar_button_pane_g9

0x0009,

0xf7fe,	// (0x0004623c) toolbar_button_pane_g

0x2760,	// (0x0003919e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2760,	// (0x0003919e) list_single_2graphic_pane_g1_cp3

0x82df,	// (0x0003ed1d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x82df,	// (0x0003ed1d) list_single_2graphic_pane_g2_cp3

0x277d,	// (0x000391bb) list_single_2graphic_pane_g3_cp3

0x2785,	// (0x000391c3) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2785,	// (0x000391c3) list_single_2graphic_pane_g4_cp3

0x2791,	// (0x000391cf) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2791,	// (0x000391cf) list_single_2graphic_pane_t1_cp3

0xd34e,	// (0x00043d8c) list_single_midp_graphic_pane_g2_ParamLimits

0xd34e,	// (0x00043d8c) list_single_midp_graphic_pane_g2

0x0bce,	// (0x0003760c) aid_zoom_text_primary

0x22f5,	// (0x00038d33) aid_zoom_text_secondary

0xcb44,	// (0x00043582) status_small_pane_g7_ParamLimits

0xcb44,	// (0x00043582) status_small_pane_g7

0xcb67,	// (0x000435a5) status_small_pane_t1_ParamLimits

0x89d0,	// (0x0003f40e) title_pane_g2

0x0003,

0xf592,	// (0x00045fd0) title_pane_g

0x8c58,	// (0x0003f696) aid_size_cell_colour_1_pane_ParamLimits

0x8c58,	// (0x0003f696) aid_size_cell_colour_1_pane

0x8c6c,	// (0x0003f6aa) aid_size_cell_colour_2_pane_ParamLimits

0x8c6c,	// (0x0003f6aa) aid_size_cell_colour_2_pane

0x8c80,	// (0x0003f6be) aid_size_cell_colour_3_pane_ParamLimits

0x8c80,	// (0x0003f6be) aid_size_cell_colour_3_pane

0x8c94,	// (0x0003f6d2) aid_size_cell_colour_4_pane_ParamLimits

0x8c94,	// (0x0003f6d2) aid_size_cell_colour_4_pane

0x1ae4,	// (0x00038522) title_pane_stacon_g1_ParamLimits

0x1ae4,	// (0x00038522) title_pane_stacon_g1

0xd4a1,	// (0x00043edf) popup_note_wait_window_g3_ParamLimits

0xd4a1,	// (0x00043edf) popup_note_wait_window_g3

0xd517,	// (0x00043f55) popup_note_wait_window_t5_ParamLimits

0xd517,	// (0x00043f55) popup_note_wait_window_t5

0xb7e3,	// (0x00042221) main_feb_china_hwr_fs_writing_pane

0x912f,	// (0x0003fb6d) popup_feb_china_hwr_fs_window_ParamLimits

0x912f,	// (0x0003fb6d) popup_feb_china_hwr_fs_window

0x82f0,	// (0x0003ed2e) aid_size_cell_hwr_fs_ParamLimits

0x82f0,	// (0x0003ed2e) aid_size_cell_hwr_fs

0xcfd8,	// (0x00043a16) bg_popup_sub_pane_cp3_ParamLimits

0xcfd8,	// (0x00043a16) bg_popup_sub_pane_cp3

0x8305,	// (0x0003ed43) grid_hwr_fs_pane_ParamLimits

0x8305,	// (0x0003ed43) grid_hwr_fs_pane

0x27f0,	// (0x0003922e) linegrid_hwr_fs_pane_ParamLimits

0x27f0,	// (0x0003922e) linegrid_hwr_fs_pane

0x831d,	// (0x0003ed5b) cell_hwr_fs_pane_ParamLimits

0x831d,	// (0x0003ed5b) cell_hwr_fs_pane

0xcfe4,	// (0x00043a22) linegrid_hwr_fs_pane_g1_ParamLimits

0xcfe4,	// (0x00043a22) linegrid_hwr_fs_pane_g1

0x9b46,	// (0x00040584) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b46,	// (0x00040584) linegrid_hwr_fs_pane_g2

0xcff0,	// (0x00043a2e) linegrid_hwr_fs_pane_g3_ParamLimits

0xcff0,	// (0x00043a2e) linegrid_hwr_fs_pane_g3

0x2822,	// (0x00039260) linegrid_hwr_fs_pane_g4_ParamLimits

0x2822,	// (0x00039260) linegrid_hwr_fs_pane_g4

0x283c,	// (0x0003927a) linegrid_hwr_fs_pane_g5_ParamLimits

0x283c,	// (0x0003927a) linegrid_hwr_fs_pane_g5

0x0004,

0xf824,	// (0x00046262) linegrid_hwr_fs_pane_g_ParamLimits

0xf824,	// (0x00046262) linegrid_hwr_fs_pane_g

0xcffc,	// (0x00043a3a) cell_hwr_fs_pane_g1_ParamLimits

0xcffc,	// (0x00043a3a) cell_hwr_fs_pane_g1

0xcdf2,	// (0x00043830) cell_hwr_fs_pane_g2_ParamLimits

0xcdf2,	// (0x00043830) cell_hwr_fs_pane_g2

0x9b58,	// (0x00040596) cell_hwr_fs_pane_g3_ParamLimits

0x9b58,	// (0x00040596) cell_hwr_fs_pane_g3

0x9b65,	// (0x000405a3) cell_hwr_fs_pane_g4_ParamLimits

0x9b65,	// (0x000405a3) cell_hwr_fs_pane_g4

0x0003,

0xf82f,	// (0x0004626d) cell_hwr_fs_pane_g_ParamLimits

0xf82f,	// (0x0004626d) cell_hwr_fs_pane_g

0x8343,	// (0x0003ed81) cell_hwr_fs_pane_t1

0xb7e3,	// (0x00042221) grid_highlight_pane_cp6

0xb7e3,	// (0x00042221) main_idle_act2_pane

0xc07a,	// (0x00042ab8) aid_inside_area_popup_secondary

0x9c55,	// (0x00040693) aid_inside_area_window_primary_ParamLimits

0x9c55,	// (0x00040693) aid_inside_area_window_primary

0xe2fb,	// (0x00044d39) ai2_news_ticker_pane

0xe303,	// (0x00044d41) aid_size_cell_ai1_link_ParamLimits

0xe303,	// (0x00044d41) aid_size_cell_ai1_link

0xa029,	// (0x00040a67) popup_ai2_data_window_ParamLimits

0xa029,	// (0x00040a67) popup_ai2_data_window

0xe31d,	// (0x00044d5b) popup_ai2_link_window_ParamLimits

0xe31d,	// (0x00044d5b) popup_ai2_link_window

0xcfd8,	// (0x00043a16) bg_popup_sub_pane_cp4_ParamLimits

0xcfd8,	// (0x00043a16) bg_popup_sub_pane_cp4

0xe331,	// (0x00044d6f) grid_ai2_link_pane_ParamLimits

0xe331,	// (0x00044d6f) grid_ai2_link_pane

0xe348,	// (0x00044d86) popup_ai2_link_window_g1_ParamLimits

0xe348,	// (0x00044d86) popup_ai2_link_window_g1

0xe354,	// (0x00044d92) popup_ai2_link_window_g2_ParamLimits

0xe354,	// (0x00044d92) popup_ai2_link_window_g2

0x0001,

0xf9fb,	// (0x00046439) popup_ai2_link_window_g_ParamLimits

0xf9fb,	// (0x00046439) popup_ai2_link_window_g

0xe363,	// (0x00044da1) ai2_mp_button_pane

0xe36b,	// (0x00044da9) ai2_mp_volume_pane

0xd0fd,	// (0x00043b3b) bg_popup_sub_pane_cp5_ParamLimits

0xd0fd,	// (0x00043b3b) bg_popup_sub_pane_cp5

0xe373,	// (0x00044db1) heading_ai2_gene_pane_ParamLimits

0xe373,	// (0x00044db1) heading_ai2_gene_pane

0xe37f,	// (0x00044dbd) list_ai2_gene_pane_ParamLimits

0xe37f,	// (0x00044dbd) list_ai2_gene_pane

0xe3c7,	// (0x00044e05) cell_ai2_link_pane_ParamLimits

0xe3c7,	// (0x00044e05) cell_ai2_link_pane

0xe3dd,	// (0x00044e1b) cell_ai2_link_pane_g1

0xb7e3,	// (0x00042221) grid_highlight_pane_cp7

0x2be8,	// (0x00039626) ai2_mp_volume_pane_g1

0xe47a,	// (0x00044eb8) ai2_mp_volume_pane_g2

0xa053,	// (0x00040a91) list_ai2_gene_pane_t1

0xe482,	// (0x00044ec0) ai2_mp_volume_pane_g3

0x0002,

0xfa14,	// (0x00046452) ai2_mp_volume_pane_g

0x2bf0,	// (0x0003962e) volume_small_pane_cp3

0xe48a,	// (0x00044ec8) aid_size_cell_ai2_button

0xe492,	// (0x00044ed0) grid_ai2_button_pane

0xe49b,	// (0x00044ed9) cell_ai2_button_pane_ParamLimits

0xe49b,	// (0x00044ed9) cell_ai2_button_pane

0xb7d9,	// (0x00042217) cell_ai2_button_pane_g1

0xb7e3,	// (0x00042221) grid_highlight_pane_cp8

0xe43a,	// (0x00044e78) ai2_gene_pane_t1_ParamLimits

0xe43a,	// (0x00044e78) ai2_gene_pane_t1

0x908b,	// (0x0003fac9) aid_height_parent_landscape

0x9dbc,	// (0x000407fa) aid_height_set_list

0xd8fa,	// (0x00044338) aid_size_parent

0xe166,	// (0x00044ba4) aid_size_cell_graphic_pane_ParamLimits

0xe38f,	// (0x00044dcd) popup_ai2_data_window_g1_ParamLimits

0xe38f,	// (0x00044dcd) popup_ai2_data_window_g1

0xe39b,	// (0x00044dd9) ai2_news_ticker_pane_g1

0xe3a3,	// (0x00044de1) ai2_news_ticker_pane_g2

0x0001,

0xfa00,	// (0x0004643e) ai2_news_ticker_pane_g

0xe3ab,	// (0x00044de9) ai2_news_ticker_pane_t1

0xe3b9,	// (0x00044df7) ai2_news_ticker_pane_t2

0x0001,

0xfa05,	// (0x00046443) ai2_news_ticker_pane_t

0xe3e6,	// (0x00044e24) heading_ai2_gene_pane_g1

0xe3ee,	// (0x00044e2c) heading_ai2_gene_pane_t1_ParamLimits

0xe3ee,	// (0x00044e2c) heading_ai2_gene_pane_t1

0xe403,	// (0x00044e41) list_highlight_pane_cp6

0xa03d,	// (0x00040a7b) ai2_gene_pane_ParamLimits

0xa03d,	// (0x00040a7b) ai2_gene_pane

0xa061,	// (0x00040a9f) list_ai2_gene_pane_t2

0x0001,

0xfa0a,	// (0x00046448) list_ai2_gene_pane_t

0xe40b,	// (0x00044e49) list_highlight_pane_cp8_ParamLimits

0xe40b,	// (0x00044e49) list_highlight_pane_cp8

0xe41c,	// (0x00044e5a) ai2_gene_pane_g1_ParamLimits

0xe41c,	// (0x00044e5a) ai2_gene_pane_g1

0xe42e,	// (0x00044e6c) ai2_gene_pane_g2_ParamLimits

0xe42e,	// (0x00044e6c) ai2_gene_pane_g2

0x0001,

0xfa0f,	// (0x0004644d) ai2_gene_pane_g_ParamLimits

0xfa0f,	// (0x0004644d) ai2_gene_pane_g

0xbf0a,	// (0x00042948) scroll_pane_cp12

0x829c,	// (0x0003ecda) control_pane_t3_ParamLimits

0x829c,	// (0x0003ecda) control_pane_t3

0xcb58,	// (0x00043596) status_small_pane_g8_ParamLimits

0xcb58,	// (0x00043596) status_small_pane_g8

0x91c4,	// (0x0003fc02) popup_find_window_ParamLimits

0x9433,	// (0x0003fe71) popup_note_image_window_ParamLimits

0x0c4a,	// (0x00037688) list_double2_graphic_pane_vc_g1_ParamLimits

0x0c4a,	// (0x00037688) list_double2_graphic_pane_vc_g1

0xde6a,	// (0x000448a8) list_double2_graphic_pane_vc_g2_ParamLimits

0xde6a,	// (0x000448a8) list_double2_graphic_pane_vc_g2

0x274c,	// (0x0003918a) list_double2_graphic_pane_vc_g3_ParamLimits

0x274c,	// (0x0003918a) list_double2_graphic_pane_vc_g3

0x0002,

0xf659,	// (0x00046097) list_double2_graphic_pane_vc_g_ParamLimits

0xf659,	// (0x00046097) list_double2_graphic_pane_vc_g

0x0c56,	// (0x00037694) list_double2_graphic_pane_vc_t1_ParamLimits

0x0c56,	// (0x00037694) list_double2_graphic_pane_vc_t1

0xde6a,	// (0x000448a8) list_single_heading_pane_vc_g1_ParamLimits

0xde6a,	// (0x000448a8) list_single_heading_pane_vc_g1

0x274c,	// (0x0003918a) list_single_heading_pane_vc_g2_ParamLimits

0x274c,	// (0x0003918a) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00046054) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00046054) list_single_heading_pane_vc_g

0x0c6c,	// (0x000376aa) list_single_heading_pane_vc_t1_ParamLimits

0x0c6c,	// (0x000376aa) list_single_heading_pane_vc_t1

0x0c82,	// (0x000376c0) list_single_heading_pane_vc_t2_ParamLimits

0x0c82,	// (0x000376c0) list_single_heading_pane_vc_t2

0x0001,

0xf813,	// (0x00046251) list_single_heading_pane_vc_t_ParamLimits

0xf813,	// (0x00046251) list_single_heading_pane_vc_t

0xcf30,	// (0x0004396e) list_setting_number_pane_vc_g1_ParamLimits

0xcf30,	// (0x0004396e) list_setting_number_pane_vc_g1

0xcf3c,	// (0x0004397a) list_setting_number_pane_vc_g2_ParamLimits

0xcf3c,	// (0x0004397a) list_setting_number_pane_vc_g2

0x0001,

0xf818,	// (0x00046256) list_setting_number_pane_vc_g_ParamLimits

0xf818,	// (0x00046256) list_setting_number_pane_vc_g

0xcf48,	// (0x00043986) list_setting_number_pane_vc_t1_ParamLimits

0xcf48,	// (0x00043986) list_setting_number_pane_vc_t1

0xcf5c,	// (0x0004399a) list_setting_number_pane_vc_t2_ParamLimits

0xcf5c,	// (0x0004399a) list_setting_number_pane_vc_t2

0xcf78,	// (0x000439b6) list_setting_number_pane_vc_t3_ParamLimits

0xcf78,	// (0x000439b6) list_setting_number_pane_vc_t3

0x0002,

0xf81d,	// (0x0004625b) list_setting_number_pane_vc_t_ParamLimits

0xf81d,	// (0x0004625b) list_setting_number_pane_vc_t

0xcf9e,	// (0x000439dc) set_value_pane_vc_ParamLimits

0xcf9e,	// (0x000439dc) set_value_pane_vc

0xe0e4,	// (0x00044b22) list_double2_graphic_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_double2_graphic_pane_vc

0x2a8c,	// (0x000394ca) list_double2_large_graphic_pane_vc_ParamLimits

0x2a8c,	// (0x000394ca) list_double2_large_graphic_pane_vc

0xe0e4,	// (0x00044b22) list_double2_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_double2_pane_vc

0xe0e4,	// (0x00044b22) list_double_graphic_heading_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_double_graphic_heading_pane_vc

0xe0e4,	// (0x00044b22) list_double_graphic_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_double_graphic_pane_vc

0xe0e4,	// (0x00044b22) list_double_heading_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_double_heading_pane_vc

0x2a8c,	// (0x000394ca) list_double_large_graphic_pane_vc_ParamLimits

0x2a8c,	// (0x000394ca) list_double_large_graphic_pane_vc

0xe0e4,	// (0x00044b22) list_double_number_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_double_number_pane_vc

0xe0e4,	// (0x00044b22) list_double_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_double_pane_vc

0xe0e4,	// (0x00044b22) list_double_time_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_double_time_pane_vc

0xe0e4,	// (0x00044b22) list_setting_number_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_setting_number_pane_vc

0xe0e4,	// (0x00044b22) list_setting_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_setting_pane_vc

0xe0e4,	// (0x00044b22) list_single_graphic_heading_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_single_graphic_heading_pane_vc

0xe0e4,	// (0x00044b22) list_single_heading_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_single_heading_pane_vc

0xe0e4,	// (0x00044b22) list_single_number_heading_pane_vc_ParamLimits

0xe0e4,	// (0x00044b22) list_single_number_heading_pane_vc

0x0c4a,	// (0x00037688) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0c4a,	// (0x00037688) list_double_graphic_heading_pane_vc_g1

0xde6a,	// (0x000448a8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xde6a,	// (0x000448a8) list_double_graphic_heading_pane_vc_g2

0x274c,	// (0x0003918a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x274c,	// (0x0003918a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf659,	// (0x00046097) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x00046097) list_double_graphic_heading_pane_vc_g

0x0d71,	// (0x000377af) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0d71,	// (0x000377af) list_double_graphic_heading_pane_vc_t1

0x0c6c,	// (0x000376aa) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0c6c,	// (0x000376aa) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa1b,	// (0x00046459) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa1b,	// (0x00046459) list_double_graphic_heading_pane_vc_t

0xcf30,	// (0x0004396e) list_setting_pane_vc_g1_ParamLimits

0xcf30,	// (0x0004396e) list_setting_pane_vc_g1

0xcf3c,	// (0x0004397a) list_setting_pane_vc_g2_ParamLimits

0xcf3c,	// (0x0004397a) list_setting_pane_vc_g2

0x0001,

0xf818,	// (0x00046256) list_setting_pane_vc_g_ParamLimits

0xf818,	// (0x00046256) list_setting_pane_vc_g

0xe6b1,	// (0x000450ef) list_setting_pane_vc_t1_ParamLimits

0xe6b1,	// (0x000450ef) list_setting_pane_vc_t1

0xe6c5,	// (0x00045103) list_setting_pane_vc_t2_ParamLimits

0xe6c5,	// (0x00045103) list_setting_pane_vc_t2

0x0001,

0xfa5e,	// (0x0004649c) list_setting_pane_vc_t_ParamLimits

0xfa5e,	// (0x0004649c) list_setting_pane_vc_t

0xcf9e,	// (0x000439dc) set_value_pane_cp_vc_ParamLimits

0xcf9e,	// (0x000439dc) set_value_pane_cp_vc

0xde6a,	// (0x000448a8) list_single_number_heading_pane_vc_g1_ParamLimits

0xde6a,	// (0x000448a8) list_single_number_heading_pane_vc_g1

0x274c,	// (0x0003918a) list_single_number_heading_pane_vc_g2_ParamLimits

0x274c,	// (0x0003918a) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00046054) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00046054) list_single_number_heading_pane_vc_g

0x0c6c,	// (0x000376aa) list_single_number_heading_pane_vc_t1_ParamLimits

0x0c6c,	// (0x000376aa) list_single_number_heading_pane_vc_t1

0x0d85,	// (0x000377c3) list_single_number_heading_pane_vc_t2_ParamLimits

0x0d85,	// (0x000377c3) list_single_number_heading_pane_vc_t2

0x0d99,	// (0x000377d7) list_single_number_heading_pane_vc_t3_ParamLimits

0x0d99,	// (0x000377d7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa63,	// (0x000464a1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x000464a1) list_single_number_heading_pane_vc_t

0x0c4a,	// (0x00037688) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0c4a,	// (0x00037688) list_single_graphic_heading_pane_vc_g1

0xde6a,	// (0x000448a8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xde6a,	// (0x000448a8) list_single_graphic_heading_pane_vc_g4

0x274c,	// (0x0003918a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x274c,	// (0x0003918a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf659,	// (0x00046097) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x00046097) list_single_graphic_heading_pane_vc_g

0x0c6c,	// (0x000376aa) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0c6c,	// (0x000376aa) list_single_graphic_heading_pane_vc_t1

0x0dab,	// (0x000377e9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0dab,	// (0x000377e9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x000464a8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x000464a8) list_single_graphic_heading_pane_vc_t

0xde6a,	// (0x000448a8) list_double2_pane_vc_g1_ParamLimits

0xde6a,	// (0x000448a8) list_double2_pane_vc_g1

0x274c,	// (0x0003918a) list_double2_pane_vc_g2_ParamLimits

0x274c,	// (0x0003918a) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x00046054) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x00046054) list_double2_pane_vc_g

0x0dbf,	// (0x000377fd) list_double2_pane_vc_t1_ParamLimits

0x0dbf,	// (0x000377fd) list_double2_pane_vc_t1

0x2bf9,	// (0x00039637) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2bf9,	// (0x00039637) list_double2_large_graphic_pane_vc_g1

0x2c05,	// (0x00039643) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2c05,	// (0x00039643) list_double2_large_graphic_pane_vc_g2

0x2c11,	// (0x0003964f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2c11,	// (0x0003964f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0004606c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0004606c) list_double2_large_graphic_pane_vc_g

0x0dd5,	// (0x00037813) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0dd5,	// (0x00037813) list_double2_large_graphic_pane_vc_t1

0x2c1d,	// (0x0003965b) list_double_time_pane_vc_g1_ParamLimits

0x2c1d,	// (0x0003965b) list_double_time_pane_vc_g1

0x2c29,	// (0x00039667) list_double_time_pane_vc_g2_ParamLimits

0x2c29,	// (0x00039667) list_double_time_pane_vc_g2

0x0001,

0xfa6f,	// (0x000464ad) list_double_time_pane_vc_g_ParamLimits

0xfa6f,	// (0x000464ad) list_double_time_pane_vc_g

0x0deb,	// (0x00037829) list_double_time_pane_vc_t1_ParamLimits

0x0deb,	// (0x00037829) list_double_time_pane_vc_t1

0x0e04,	// (0x00037842) list_double_time_pane_vc_t2_ParamLimits

0x0e04,	// (0x00037842) list_double_time_pane_vc_t2

0x0e44,	// (0x00037882) list_double_time_pane_vc_t3_ParamLimits

0x0e44,	// (0x00037882) list_double_time_pane_vc_t3

0x0e5c,	// (0x0003789a) list_double_time_pane_vc_t4_ParamLimits

0x0e5c,	// (0x0003789a) list_double_time_pane_vc_t4

0x0003,

0xfa74,	// (0x000464b2) list_double_time_pane_vc_t_ParamLimits

0xfa74,	// (0x000464b2) list_double_time_pane_vc_t

0xde6a,	// (0x000448a8) list_double_pane_vc_g1_ParamLimits

0xde6a,	// (0x000448a8) list_double_pane_vc_g1

0x274c,	// (0x0003918a) list_double_pane_vc_g2_ParamLimits

0x274c,	// (0x0003918a) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x00046054) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x00046054) list_double_pane_vc_g

0x0e70,	// (0x000378ae) list_double_pane_vc_t1_ParamLimits

0x0e70,	// (0x000378ae) list_double_pane_vc_t1

0x0e82,	// (0x000378c0) list_double_pane_vc_t2_ParamLimits

0x0e82,	// (0x000378c0) list_double_pane_vc_t2

0x0001,

0xfa7d,	// (0x000464bb) list_double_pane_vc_t_ParamLimits

0xfa7d,	// (0x000464bb) list_double_pane_vc_t

0xde6a,	// (0x000448a8) list_double_number_pane_vc_g1_ParamLimits

0xde6a,	// (0x000448a8) list_double_number_pane_vc_g1

0x274c,	// (0x0003918a) list_double_number_pane_vc_g2_ParamLimits

0x274c,	// (0x0003918a) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x00046054) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x00046054) list_double_number_pane_vc_g

0x0e9a,	// (0x000378d8) list_double_number_pane_vc_t1_ParamLimits

0x0e9a,	// (0x000378d8) list_double_number_pane_vc_t1

0x0eae,	// (0x000378ec) list_double_number_pane_vc_t2_ParamLimits

0x0eae,	// (0x000378ec) list_double_number_pane_vc_t2

0x0e82,	// (0x000378c0) list_double_number_pane_vc_t3_ParamLimits

0x0e82,	// (0x000378c0) list_double_number_pane_vc_t3

0x0002,

0xfa82,	// (0x000464c0) list_double_number_pane_vc_t_ParamLimits

0xfa82,	// (0x000464c0) list_double_number_pane_vc_t

0x2c35,	// (0x00039673) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2c35,	// (0x00039673) list_double_large_graphic_pane_vc_g1

0x2c41,	// (0x0003967f) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2c41,	// (0x0003967f) list_double_large_graphic_pane_vc_g2

0x2c11,	// (0x0003964f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2c11,	// (0x0003964f) list_double_large_graphic_pane_vc_g3

0x0ec0,	// (0x000378fe) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0ec0,	// (0x000378fe) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa89,	// (0x000464c7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa89,	// (0x000464c7) list_double_large_graphic_pane_vc_g

0x0ecc,	// (0x0003790a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0ecc,	// (0x0003790a) list_double_large_graphic_pane_vc_t1

0x0ede,	// (0x0003791c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0ede,	// (0x0003791c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa92,	// (0x000464d0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa92,	// (0x000464d0) list_double_large_graphic_pane_vc_t

0xde6a,	// (0x000448a8) list_double_heading_pane_vc_g1_ParamLimits

0xde6a,	// (0x000448a8) list_double_heading_pane_vc_g1

0x274c,	// (0x0003918a) list_double_heading_pane_vc_g2_ParamLimits

0x274c,	// (0x0003918a) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00046054) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00046054) list_double_heading_pane_vc_g

0x0ef7,	// (0x00037935) list_double_heading_pane_vc_t1_ParamLimits

0x0ef7,	// (0x00037935) list_double_heading_pane_vc_t1

0x0c6c,	// (0x000376aa) list_double_heading_pane_vc_t2_ParamLimits

0x0c6c,	// (0x000376aa) list_double_heading_pane_vc_t2

0x0001,

0xfa97,	// (0x000464d5) list_double_heading_pane_vc_t_ParamLimits

0xfa97,	// (0x000464d5) list_double_heading_pane_vc_t

0x0c4a,	// (0x00037688) list_double_graphic_pane_vc_g1_ParamLimits

0x0c4a,	// (0x00037688) list_double_graphic_pane_vc_g1

0x2c50,	// (0x0003968e) list_double_graphic_pane_vc_g2_ParamLimits

0x2c50,	// (0x0003968e) list_double_graphic_pane_vc_g2

0x2c5f,	// (0x0003969d) list_double_graphic_pane_vc_g3_ParamLimits

0x2c5f,	// (0x0003969d) list_double_graphic_pane_vc_g3

0x0002,

0xfa9c,	// (0x000464da) list_double_graphic_pane_vc_g_ParamLimits

0xfa9c,	// (0x000464da) list_double_graphic_pane_vc_g

0x0f0b,	// (0x00037949) list_double_graphic_pane_vc_t1_ParamLimits

0x0f0b,	// (0x00037949) list_double_graphic_pane_vc_t1

0x0e82,	// (0x000378c0) list_double_graphic_pane_vc_t2_ParamLimits

0x0e82,	// (0x000378c0) list_double_graphic_pane_vc_t2

0x0001,

0xfaa3,	// (0x000464e1) list_double_graphic_pane_vc_t_ParamLimits

0xfaa3,	// (0x000464e1) list_double_graphic_pane_vc_t

0x1239,	// (0x00037c77) aid_size_cell_fastswap

0x7fb4,	// (0x0003e9f2) aid_size_cell_touch_ParamLimits

0x7fb4,	// (0x0003e9f2) aid_size_cell_touch

0x149c,	// (0x00037eda) popup_fast_swap_wide_window_ParamLimits

0x149c,	// (0x00037eda) popup_fast_swap_wide_window

0x80ff,	// (0x0003eb3d) touch_pane_ParamLimits

0x80ff,	// (0x0003eb3d) touch_pane

0xbf60,	// (0x0004299e) button_value_adjust_pane_cp2

0x08ea,	// (0x00037328) button_value_adjust_pane_cp4

0x090e,	// (0x0003734c) form_field_data_pane_cp2

0x7c20,	// (0x0003e65e) form_field_data_wide_pane_cp2

0xc2bf,	// (0x00042cfd) bg_scroll_pane_ParamLimits

0x1cc8,	// (0x00038706) scroll_handle_pane_ParamLimits

0x1cdc,	// (0x0003871a) scroll_sc2_down_pane_ParamLimits

0x1cdc,	// (0x0003871a) scroll_sc2_down_pane

0xc2f9,	// (0x00042d37) scroll_sc2_up_pane_ParamLimits

0xc2f9,	// (0x00042d37) scroll_sc2_up_pane

0xa18c,	// (0x00040bca) grid_wheel_folder_pane_g1_ParamLimits

0xa18c,	// (0x00040bca) grid_wheel_folder_pane_g1

0x1f44,	// (0x00038982) clock_nsta_pane_cp2_ParamLimits

0x1f44,	// (0x00038982) clock_nsta_pane_cp2

0x8fa0,	// (0x0003f9de) listscroll_midp_pane_ParamLimits

0x8fb1,	// (0x0003f9ef) midp_canvas_pane

0xcbac,	// (0x000435ea) nsta_clock_indic_pane

0xcbdc,	// (0x0004361a) listscroll_form_pane_vc

0xcbe4,	// (0x00043622) listscroll_set_pane_vc_ParamLimits

0xcbe4,	// (0x00043622) listscroll_set_pane_vc

0x985a,	// (0x00040298) clock_nsta_pane

0x9884,	// (0x000402c2) indicator_nsta_pane

0xce26,	// (0x00043864) bg_popup_sub_pane_cp2_ParamLimits

0xce3a,	// (0x00043878) find_pane_cp2_ParamLimits

0xce3a,	// (0x00043878) find_pane_cp2

0xce50,	// (0x0004388e) grid_toobar_pane_ParamLimits

0xcfac,	// (0x000439ea) list_form_gen_pane_vc_ParamLimits

0xcfac,	// (0x000439ea) list_form_gen_pane_vc

0xcfc2,	// (0x00043a00) scroll_pane_cp8_vc_ParamLimits

0xcfc2,	// (0x00043a00) scroll_pane_cp8_vc

0xd012,	// (0x00043a50) data_form_wide_pane_vc_ParamLimits

0xd012,	// (0x00043a50) data_form_wide_pane_vc

0xd01e,	// (0x00043a5c) form_field_data_wide_pane_vc_g1

0xd026,	// (0x00043a64) form_field_data_wide_pane_vc_t1_ParamLimits

0xd026,	// (0x00043a64) form_field_data_wide_pane_vc_t1

0xbf74,	// (0x000429b2) input_focus_pane_cp6_vc_ParamLimits

0xbf74,	// (0x000429b2) input_focus_pane_cp6_vc

0x9bf9,	// (0x00040637) list_midp_pane_ParamLimits

0xd90c,	// (0x0004434a) scroll_pane_cp16_ParamLimits

0xd90c,	// (0x0004434a) scroll_pane_cp16

0xd28d,	// (0x00043ccb) button_value_adjust_pane_ParamLimits

0xd28d,	// (0x00043ccb) button_value_adjust_pane

0x9dcd,	// (0x0004080b) button_value_adjust_pane_cp6_ParamLimits

0x9dcd,	// (0x0004080b) button_value_adjust_pane_cp6

0x9ee7,	// (0x00040925) settings_code_pane_cp_ParamLimits

0x9ee7,	// (0x00040925) settings_code_pane_cp

0xb7d9,	// (0x00042217) cell_touch_pane_g1

0xb7d9,	// (0x00042217) cell_touch_pane_g2

0x0001,

0xf742,	// (0x00046180) cell_touch_pane_g

0xa06f,	// (0x00040aad) cell_touch_pane_cp_ParamLimits

0xa06f,	// (0x00040aad) cell_touch_pane_cp

0xa08b,	// (0x00040ac9) cell_touch_pane_ParamLimits

0xa08b,	// (0x00040ac9) cell_touch_pane

0xb7d9,	// (0x00042217) scroll_sc2_down_pane_g1

0xb7d9,	// (0x00042217) scroll_sc2_up_pane_g1

0xb7e3,	// (0x00042221) bg_set_opt_pane_cp4_vc

0xe4ad,	// (0x00044eeb) list_set_graphic_pane_vc_g1_ParamLimits

0xe4ad,	// (0x00044eeb) list_set_graphic_pane_vc_g1

0xe4b9,	// (0x00044ef7) list_set_graphic_pane_vc_g2_ParamLimits

0xe4b9,	// (0x00044ef7) list_set_graphic_pane_vc_g2

0x0001,

0xfa20,	// (0x0004645e) list_set_graphic_pane_vc_g_ParamLimits

0xfa20,	// (0x0004645e) list_set_graphic_pane_vc_g

0xe4c5,	// (0x00044f03) text_primary_small_cp13_vc_ParamLimits

0xe4c5,	// (0x00044f03) text_primary_small_cp13_vc

0xe4dd,	// (0x00044f1b) list_set_graphic_pane_vc_ParamLimits

0xe4dd,	// (0x00044f1b) list_set_graphic_pane_vc

0xb7e3,	// (0x00042221) input_focus_pane_cp2_vc

0xb7d9,	// (0x00042217) setting_code_pane_vc_g1

0xe4f1,	// (0x00044f2f) setting_code_pane_vc_t1

0xe4ff,	// (0x00044f3d) set_text_pane_vc_t1_ParamLimits

0xe4ff,	// (0x00044f3d) set_text_pane_vc_t1

0xb7e3,	// (0x00042221) input_focus_pane_cp1_vc

0xe51a,	// (0x00044f58) list_set_text_pane_vc

0xb7d9,	// (0x00042217) setting_text_pane_vc_g1

0xb7e3,	// (0x00042221) bg_set_opt_pane_cp2_vc

0xe524,	// (0x00044f62) setting_slider_graphic_pane_vc_g1

0xe52c,	// (0x00044f6a) setting_slider_graphic_pane_vc_t1

0xe53a,	// (0x00044f78) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa25,	// (0x00046463) setting_slider_graphic_pane_vc_t

0xe548,	// (0x00044f86) slider_set_pane_cp_vc

0xe550,	// (0x00044f8e) slider_set_pane_vc_g1

0xe559,	// (0x00044f97) slider_set_pane_vc_g2

0x0006,

0xfa2a,	// (0x00046468) slider_set_pane_vc_g

0xbfdb,	// (0x00042a19) set_opt_bg_pane_g1_copy1

0xbfe3,	// (0x00042a21) set_opt_bg_pane_g2_copy1

0xe585,	// (0x00044fc3) set_opt_bg_pane_g3_copy1

0xbff3,	// (0x00042a31) set_opt_bg_pane_g4_copy1

0xbffb,	// (0x00042a39) set_opt_bg_pane_g5_copy1

0xc003,	// (0x00042a41) set_opt_bg_pane_g6_copy1

0xe58f,	// (0x00044fcd) set_opt_bg_pane_g7_copy1

0xe597,	// (0x00044fd5) set_opt_bg_pane_g8_copy1

0xe5a1,	// (0x00044fdf) set_opt_bg_pane_g9_copy1

0xb7e3,	// (0x00042221) bg_set_opt_pane_cp_vc

0xe5ab,	// (0x00044fe9) setting_slider_pane_vc_t1

0xe52c,	// (0x00044f6a) setting_slider_pane_vc_t2

0xe53a,	// (0x00044f78) setting_slider_pane_vc_t3

0x0002,

0xfa39,	// (0x00046477) setting_slider_pane_vc_t

0xe548,	// (0x00044f86) slider_set_pane_vc

0x2860,	// (0x0003929e) volume_set_pane_vc_g1

0x2869,	// (0x000392a7) volume_set_pane_vc_g2

0x2872,	// (0x000392b0) volume_set_pane_vc_g3

0x287b,	// (0x000392b9) volume_set_pane_vc_g4

0x2884,	// (0x000392c2) volume_set_pane_vc_g5

0x288d,	// (0x000392cb) volume_set_pane_vc_g6

0x2896,	// (0x000392d4) volume_set_pane_vc_g7

0x289f,	// (0x000392dd) volume_set_pane_vc_g8

0x28a8,	// (0x000392e6) volume_set_pane_vc_g9

0x28b1,	// (0x000392ef) volume_set_pane_vc_g10

0x0009,

0xfa40,	// (0x0004647e) volume_set_pane_vc_g

0xe5ba,	// (0x00044ff8) volume_set_pane_vc

0xe5c2,	// (0x00045000) button_value_adjust_pane_cp1_vc

0xe5cc,	// (0x0004500a) list_highlight_pane_cp2_vc

0xe5d5,	// (0x00045013) list_set_pane_vc_ParamLimits

0xe5d5,	// (0x00045013) list_set_pane_vc

0xe63f,	// (0x0004507d) main_pane_set_vc_t1_ParamLimits

0xe63f,	// (0x0004507d) main_pane_set_vc_t1

0xe654,	// (0x00045092) main_pane_set_vc_t2_ParamLimits

0xe654,	// (0x00045092) main_pane_set_vc_t2

0xe666,	// (0x000450a4) main_pane_set_vc_t3_ParamLimits

0xe666,	// (0x000450a4) main_pane_set_vc_t3

0xe67a,	// (0x000450b8) main_pane_set_vc_t4_ParamLimits

0xe67a,	// (0x000450b8) main_pane_set_vc_t4

0x0003,

0xfa55,	// (0x00046493) main_pane_set_vc_t_ParamLimits

0xfa55,	// (0x00046493) main_pane_set_vc_t

0xe68e,	// (0x000450cc) setting_code_pane_vc_ParamLimits

0xe68e,	// (0x000450cc) setting_code_pane_vc

0xe69f,	// (0x000450dd) setting_slider_graphic_pane_vc

0xe69f,	// (0x000450dd) setting_slider_pane_vc

0xe69f,	// (0x000450dd) setting_text_pane_vc

0xe69f,	// (0x000450dd) setting_volume_pane_vc

0xe6a9,	// (0x000450e7) scroll_pane_cp121_vc

0xbf4e,	// (0x0004298c) set_content_pane_vc

0xe6e7,	// (0x00045125) button_value_adjust_pane_g1

0xe6f0,	// (0x0004512e) button_value_adjust_pane_g2

0x0001,

0xfaa8,	// (0x000464e6) button_value_adjust_pane_g

0xe6f9,	// (0x00045137) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe6f9,	// (0x00045137) form_field_slider_wide_pane_vc_t1

0xe70d,	// (0x0004514b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe70d,	// (0x0004514b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaad,	// (0x000464eb) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaad,	// (0x000464eb) form_field_slider_wide_pane_vc_t

0xb831,	// (0x0004226f) input_focus_pane_cp10_vc_ParamLimits

0xb831,	// (0x0004226f) input_focus_pane_cp10_vc

0xe71f,	// (0x0004515d) slider_cont_pane_cp1_vc_ParamLimits

0xe71f,	// (0x0004515d) slider_cont_pane_cp1_vc

0xe550,	// (0x00044f8e) slider_form_pane_g1_cp2

0xe559,	// (0x00044f97) slider_form_pane_g2_cp2

0xe738,	// (0x00045176) form_field_slider_pane_vc_t3

0xe746,	// (0x00045184) form_field_slider_pane_vc_t4

0xe754,	// (0x00045192) slider_form_pane_vc_ParamLimits

0xe754,	// (0x00045192) slider_form_pane_vc

0xe761,	// (0x0004519f) form_field_slider_pane_vc_t1_ParamLimits

0xe761,	// (0x0004519f) form_field_slider_pane_vc_t1

0xe70d,	// (0x0004514b) form_field_slider_pane_vc_t2_ParamLimits

0xe70d,	// (0x0004514b) form_field_slider_pane_vc_t2

0x0001,

0xfabd,	// (0x000464fb) form_field_slider_pane_vc_t_ParamLimits

0xfabd,	// (0x000464fb) form_field_slider_pane_vc_t

0xb831,	// (0x0004226f) input_focus_pane_cp9_vc_ParamLimits

0xb831,	// (0x0004226f) input_focus_pane_cp9_vc

0xe77d,	// (0x000451bb) slider_cont_pane_vc_ParamLimits

0xe77d,	// (0x000451bb) slider_cont_pane_vc

0xe78f,	// (0x000451cd) list_form_graphic_pane_cp_vc_ParamLimits

0xe78f,	// (0x000451cd) list_form_graphic_pane_cp_vc

0xd01e,	// (0x00043a5c) form_field_popup_wide_pane_vc_g1

0xe7a4,	// (0x000451e2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe7a4,	// (0x000451e2) form_field_popup_wide_pane_vc_t1

0xbf74,	// (0x000429b2) input_focus_pane_cp8_vc_ParamLimits

0xbf74,	// (0x000429b2) input_focus_pane_cp8_vc

0xe7bb,	// (0x000451f9) list_form_wide_pane_vc_ParamLimits

0xe7bb,	// (0x000451f9) list_form_wide_pane_vc

0xe7c7,	// (0x00045205) list_form_graphic_pane_vc_g1

0xe7cf,	// (0x0004520d) list_form_graphic_pane_vc_t1_ParamLimits

0xe7cf,	// (0x0004520d) list_form_graphic_pane_vc_t1

0xb83f,	// (0x0004227d) list_highlight_pane_cp5_vc_ParamLimits

0xb83f,	// (0x0004227d) list_highlight_pane_cp5_vc

0xe7eb,	// (0x00045229) list_form_graphic_pane_vc_ParamLimits

0xe7eb,	// (0x00045229) list_form_graphic_pane_vc

0xd01e,	// (0x00043a5c) form_field_popup_pane_vc_g1

0xe801,	// (0x0004523f) form_field_popup_pane_vc_t1_ParamLimits

0xe801,	// (0x0004523f) form_field_popup_pane_vc_t1

0xbf74,	// (0x000429b2) input_focus_pane_cp7_vc_ParamLimits

0xbf74,	// (0x000429b2) input_focus_pane_cp7_vc

0xe818,	// (0x00045256) list_form_pane_vc_ParamLimits

0xe818,	// (0x00045256) list_form_pane_vc

0xe824,	// (0x00045262) data_form_pane_vc_t1_ParamLimits

0xe824,	// (0x00045262) data_form_pane_vc_t1

0xbfdb,	// (0x00042a19) input_focus_pane_vc_g1

0xbfe3,	// (0x00042a21) input_focus_pane_vc_g2

0xbfeb,	// (0x00042a29) input_focus_pane_vc_g3

0xbff3,	// (0x00042a31) input_focus_pane_vc_g4

0xbffb,	// (0x00042a39) input_focus_pane_vc_g5

0xc003,	// (0x00042a41) input_focus_pane_vc_g6

0xc00b,	// (0x00042a49) input_focus_pane_vc_g7

0xc013,	// (0x00042a51) input_focus_pane_vc_g8

0xc01b,	// (0x00042a59) input_focus_pane_vc_g9

0xb7d9,	// (0x00042217) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x00046109) input_focus_pane_vc_g

0xd012,	// (0x00043a50) data_form_pane_vc_ParamLimits

0xd012,	// (0x00043a50) data_form_pane_vc

0xd01e,	// (0x00043a5c) form_field_data_pane_vc_g1

0xe83f,	// (0x0004527d) form_field_data_pane_vc_t1_ParamLimits

0xe83f,	// (0x0004527d) form_field_data_pane_vc_t1

0xbf74,	// (0x000429b2) input_focus_pane_vc_ParamLimits

0xbf74,	// (0x000429b2) input_focus_pane_vc

0xe859,	// (0x00045297) button_value_adjust_pane_cp3_vc

0xe861,	// (0x0004529f) button_value_adjust_pane_cp5_vc

0xe869,	// (0x000452a7) form_field_data_pane_vc_ParamLimits

0xe869,	// (0x000452a7) form_field_data_pane_vc

0xe880,	// (0x000452be) form_field_data_pane_vc_cp2

0xe888,	// (0x000452c6) form_field_data_wide_pane_vc_ParamLimits

0xe888,	// (0x000452c6) form_field_data_wide_pane_vc

0xe89e,	// (0x000452dc) form_field_data_wide_pane_vc_cp2

0xe8a6,	// (0x000452e4) form_field_popup_pane_vc_ParamLimits

0xe8a6,	// (0x000452e4) form_field_popup_pane_vc

0xe8bd,	// (0x000452fb) form_field_popup_wide_pane_vc_ParamLimits

0xe8bd,	// (0x000452fb) form_field_popup_wide_pane_vc

0xe8d3,	// (0x00045311) form_field_slider_pane_vc_ParamLimits

0xe8d3,	// (0x00045311) form_field_slider_pane_vc

0xe8e6,	// (0x00045324) form_field_slider_wide_pane_vc_ParamLimits

0xe8e6,	// (0x00045324) form_field_slider_wide_pane_vc

0xa0a9,	// (0x00040ae7) grid_touch_1_pane_ParamLimits

0xa0a9,	// (0x00040ae7) grid_touch_1_pane

0xa0bd,	// (0x00040afb) grid_touch_2_pane_ParamLimits

0xa0bd,	// (0x00040afb) grid_touch_2_pane

0xe8f9,	// (0x00045337) touch_pane_g1_ParamLimits

0xe8f9,	// (0x00045337) touch_pane_g1

0xe907,	// (0x00045345) cell_app_pane_cp_wide_ParamLimits

0xe907,	// (0x00045345) cell_app_pane_cp_wide

0xe918,	// (0x00045356) grid_popup_fast_wide_pane_ParamLimits

0xe918,	// (0x00045356) grid_popup_fast_wide_pane

0xe92c,	// (0x0004536a) scroll_pane_cp19_ParamLimits

0xe92c,	// (0x0004536a) scroll_pane_cp19

0xb7e3,	// (0x00042221) bg_popup_window_pane_cp20

0xe940,	// (0x0004537e) listscroll_popup_fast_wide_pane

0xd8d6,	// (0x00044314) grid_indicator_nsta_pane

0xe948,	// (0x00045386) clock_nsta_pane_g1

0xe95f,	// (0x0004539d) clock_nsta_pane_t1

0xa0e7,	// (0x00040b25) cell_indicator_nsta_pane_ParamLimits

0xa0e7,	// (0x00040b25) cell_indicator_nsta_pane

0xe8f9,	// (0x00045337) cell_indicator_nsta_pane_g1

0xa100,	// (0x00040b3e) cell_indicator_nsta_pane_g2

0x0001,

0xfac7,	// (0x00046505) cell_indicator_nsta_pane_g

0xe97b,	// (0x000453b9) clock_nsta_pane_cp

0xe983,	// (0x000453c1) indicator_nsta_pane_cp

0xe98b,	// (0x000453c9) nsta_clock_indic_pane_g1

0xb87b,	// (0x000422b9) grid_indicator_pane

0xc3ee,	// (0x00042e2c) scroll_pane_cp29

0x1e93,	// (0x000388d1) indicator_nsta_pane_cp2_ParamLimits

0x1e93,	// (0x000388d1) indicator_nsta_pane_cp2

0xb83f,	// (0x0004227d) main_apps_wheel_pane

0xd13a,	// (0x00043b78) form_midp_field_text_pane_ParamLimits

0xd26d,	// (0x00043cab) scroll_bar_cp050_ParamLimits

0xe9c3,	// (0x00045401) cell_indicator_pane_ParamLimits

0xe9c3,	// (0x00045401) cell_indicator_pane

0xe9da,	// (0x00045418) cell_indicator_pane_g1

0xa116,	// (0x00040b54) grid_wheel_folder_pane_ParamLimits

0xa116,	// (0x00040b54) grid_wheel_folder_pane

0xa124,	// (0x00040b62) list_wheel_apps_pane_ParamLimits

0xa124,	// (0x00040b62) list_wheel_apps_pane

0xa132,	// (0x00040b70) main_apps_wheel_pane_g1_ParamLimits

0xa132,	// (0x00040b70) main_apps_wheel_pane_g1

0xa13e,	// (0x00040b7c) main_apps_wheel_pane_g2_ParamLimits

0xa13e,	// (0x00040b7c) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00046514) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00046514) main_apps_wheel_pane_g

0xa14c,	// (0x00040b8a) main_apps_wheel_pane_t1_ParamLimits

0xa14c,	// (0x00040b8a) main_apps_wheel_pane_t1

0xa160,	// (0x00040b9e) list_wheel_apps_pane_g1

0xa168,	// (0x00040ba6) list_wheel_apps_pane_g2

0xa170,	// (0x00040bae) list_wheel_apps_pane_g3

0xa178,	// (0x00040bb6) list_wheel_apps_pane_g4

0xa182,	// (0x00040bc0) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x00046519) list_wheel_apps_pane_g

0xc822,	// (0x00043260) navi_icon_text_pane

0x9755,	// (0x00040193) aid_fill_nsta

0xa199,	// (0x00040bd7) navi_icon_text_pane_g1

0xa1a5,	// (0x00040be3) navi_icon_text_pane_t1

0x8f88,	// (0x0003f9c6) list_set_graphic_pane_t1_ParamLimits

0x8f88,	// (0x0003f9c6) list_set_graphic_pane_t1

0xd99f,	// (0x000443dd) popup_midp_note_alarm_window_t6_ParamLimits

0xd99f,	// (0x000443dd) popup_midp_note_alarm_window_t6

0xd9b1,	// (0x000443ef) popup_midp_note_alarm_window_t7_ParamLimits

0xd9b1,	// (0x000443ef) popup_midp_note_alarm_window_t7

0xd9c3,	// (0x00044401) popup_midp_note_alarm_window_t8_ParamLimits

0xd9c3,	// (0x00044401) popup_midp_note_alarm_window_t8

0xd9d5,	// (0x00044413) popup_midp_note_alarm_window_t9_ParamLimits

0xd9d5,	// (0x00044413) popup_midp_note_alarm_window_t9

0xd9e7,	// (0x00044425) popup_midp_note_alarm_window_t10_ParamLimits

0xd9e7,	// (0x00044425) popup_midp_note_alarm_window_t10

0xd9f9,	// (0x00044437) popup_midp_note_alarm_window_t11_ParamLimits

0xd9f9,	// (0x00044437) popup_midp_note_alarm_window_t11

0xda0b,	// (0x00044449) scroll_pane_cp17_ParamLimits

0xda0b,	// (0x00044449) scroll_pane_cp17

0x2860,	// (0x0003929e) volume_small_pane_cp_g1

0x2c6b,	// (0x000396a9) volume_small_pane_cp_g2

0x2c74,	// (0x000396b2) volume_small_pane_cp_g3

0x2c7d,	// (0x000396bb) volume_small_pane_cp_g4

0x2c86,	// (0x000396c4) volume_small_pane_cp_g5

0x2c8f,	// (0x000396cd) volume_small_pane_cp_g6

0x2c98,	// (0x000396d6) volume_small_pane_cp_g7

0x2ca1,	// (0x000396df) volume_small_pane_cp_g8

0x2caa,	// (0x000396e8) volume_small_pane_cp_g9

0x2cb3,	// (0x000396f1) volume_small_pane_cp_g10

0xc9cc,	// (0x0004340a) midp_ticker_pane_g1_ParamLimits

0xc9d8,	// (0x00043416) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x000461d1) midp_ticker_pane_g_ParamLimits

0x9048,	// (0x0003fa86) midp_ticker_pane_t1_ParamLimits

0x9775,	// (0x000401b3) aid_fill_nsta_2

0xd259,	// (0x00043c97) list_form2_midp_pane

0xe0c2,	// (0x00044b00) midp_editing_number_pane_ParamLimits

0xe0d1,	// (0x00044b0f) midp_ticker_pane_ParamLimits

0xe9e4,	// (0x00045422) form2_midp_field_pane

0xe9ec,	// (0x0004542a) scroll_pane_cp51

0xea0c,	// (0x0004544a) form2_midp_button_pane_ParamLimits

0xea0c,	// (0x0004544a) form2_midp_button_pane

0xea1e,	// (0x0004545c) form2_midp_content_pane_ParamLimits

0xea1e,	// (0x0004545c) form2_midp_content_pane

0xea38,	// (0x00045476) form2_midp_field_choice_group_pane

0xea40,	// (0x0004547e) form2_midp_field_pane_g1

0xea48,	// (0x00045486) form2_midp_field_pane_g2

0xea50,	// (0x0004548e) form2_midp_field_pane_g3

0xea58,	// (0x00045496) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x0004653e) form2_midp_field_pane_g

0xea60,	// (0x0004549e) form2_midp_gauge_slider_pane

0xea68,	// (0x000454a6) form2_midp_gauge_wait_pane

0xea70,	// (0x000454ae) form2_midp_image_pane_ParamLimits

0xea70,	// (0x000454ae) form2_midp_image_pane

0xea8b,	// (0x000454c9) form2_midp_label_pane_ParamLimits

0xea8b,	// (0x000454c9) form2_midp_label_pane

0xa1d3,	// (0x00040c11) form2_midp_label_pane_cp_ParamLimits

0xa1d3,	// (0x00040c11) form2_midp_label_pane_cp

0xeaa4,	// (0x000454e2) form2_midp_string_pane_ParamLimits

0xeaa4,	// (0x000454e2) form2_midp_string_pane

0x7e5e,	// (0x0003e89c) form2_midp_text_pane_ParamLimits

0x7e5e,	// (0x0003e89c) form2_midp_text_pane

0xeab6,	// (0x000454f4) form2_midp_time_pane

0xeac6,	// (0x00045504) input_focus_pane_cp51_ParamLimits

0xeac6,	// (0x00045504) input_focus_pane_cp51

0xeade,	// (0x0004551c) form2_midp_label_pane_t1_ParamLimits

0xeade,	// (0x0004551c) form2_midp_label_pane_t1

0x7e7d,	// (0x0003e8bb) form2_mdip_text_pane_t1_ParamLimits

0x7e7d,	// (0x0003e8bb) form2_mdip_text_pane_t1

0x0f5a,	// (0x00037998) form2_midp_time_pane_t1

0xeb27,	// (0x00045565) form2_midp_gauge_slider_pane_t1

0xa1f4,	// (0x00040c32) form2_midp_gauge_slider_pane_t2

0xa206,	// (0x00040c44) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00046547) form2_midp_gauge_slider_pane_t

0xeb39,	// (0x00045577) form2_midp_slider_pane

0xeb45,	// (0x00045583) form2_midp_gauge_wait_pane_t1

0xeb53,	// (0x00045591) form2_midp_wait_pane_ParamLimits

0xeb53,	// (0x00045591) form2_midp_wait_pane

0xa218,	// (0x00040c56) list_single_2graphic_pane_cp4_ParamLimits

0xa218,	// (0x00040c56) list_single_2graphic_pane_cp4

0x9b86,	// (0x000405c4) list_single_midp_graphic_pane_cp_ParamLimits

0x9b86,	// (0x000405c4) list_single_midp_graphic_pane_cp

0xb7e3,	// (0x00042221) list_highlight_pane_cp20

0xeb7e,	// (0x000455bc) list_single_2graphic_pane_g1_cp4

0xeb86,	// (0x000455c4) list_single_2graphic_pane_g2_cp4

0xeb8e,	// (0x000455cc) list_single_2graphic_pane_t1_cp4

0xb83f,	// (0x0004227d) list_highlight_pane_cp21

0xeb9d,	// (0x000455db) list_single_midp_graphic_pane_g4_cp

0xebac,	// (0x000455ea) list_single_midp_graphic_pane_t1_cp

0xa22d,	// (0x00040c6b) form2_mdip_string_pane_t1_ParamLimits

0xa22d,	// (0x00040c6b) form2_mdip_string_pane_t1

0xb7e3,	// (0x00042221) bg_wml_button_pane_cp2

0xb7d9,	// (0x00042217) form2_midp_image_pane_g1

0x19ed,	// (0x0003842b) list_double_large_graphic_pane_g5_ParamLimits

0x19ed,	// (0x0003842b) list_double_large_graphic_pane_g5

0x8fa0,	// (0x0003f9de) midp_form_pane_ParamLimits

0xb83f,	// (0x0004227d) main_apps_wheel_pane_ParamLimits

0x94b1,	// (0x0003feef) popup_preview_window_ParamLimits

0x94b1,	// (0x0003feef) popup_preview_window

0xccc3,	// (0x00043701) popup_touch_info_window_ParamLimits

0xccc3,	// (0x00043701) popup_touch_info_window

0xcce1,	// (0x0004371f) popup_touch_menu_window_ParamLimits

0xcce1,	// (0x0004371f) popup_touch_menu_window

0xb7cf,	// (0x0004220d) bg_popup_sub_pane_cp6

0xebc1,	// (0x000455ff) list_touch_menu_pane

0xebc9,	// (0x00045607) list_single_touch_menu_pane_ParamLimits

0xebc9,	// (0x00045607) list_single_touch_menu_pane

0xebe0,	// (0x0004561e) list_single_touch_menu_pane_t1

0xb83f,	// (0x0004227d) bg_popup_sub_pane_cp7_ParamLimits

0xb83f,	// (0x0004227d) bg_popup_sub_pane_cp7

0xebee,	// (0x0004562c) heading_sub_pane

0xebf6,	// (0x00045634) list_touch_info_pane_ParamLimits

0xebf6,	// (0x00045634) list_touch_info_pane

0xec05,	// (0x00045643) list_single_touch_info_pane_ParamLimits

0xec05,	// (0x00045643) list_single_touch_info_pane

0xec17,	// (0x00045655) list_single_touch_info_pane_t1

0xec25,	// (0x00045663) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00046555) list_single_touch_info_pane_t

0xc9a2,	// (0x000433e0) bg_popup_heading_pane_cp

0xec33,	// (0x00045671) heading_sub_pane_t1

0xcfd8,	// (0x00043a16) bg_popup_preview_window_pane_cp_ParamLimits

0xcfd8,	// (0x00043a16) bg_popup_preview_window_pane_cp

0xebee,	// (0x0004562c) heading_preview_pane

0xebf6,	// (0x00045634) list_preview_pane_ParamLimits

0xebf6,	// (0x00045634) list_preview_pane

0xec41,	// (0x0004567f) popup_preview_window_g1

0xec05,	// (0x00045643) list_single_preview_pane_ParamLimits

0xec05,	// (0x00045643) list_single_preview_pane

0xec49,	// (0x00045687) list_single_preview_pane_g1

0xec51,	// (0x0004568f) list_single_preview_pane_t1

0xec17,	// (0x00045655) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x0004655a) list_single_preview_pane_t

0xec5f,	// (0x0004569d) bg_popup_heading_pane_cp2_ParamLimits

0xec5f,	// (0x0004569d) bg_popup_heading_pane_cp2

0xec75,	// (0x000456b3) heading_preview_pane_g1

0xec7d,	// (0x000456bb) heading_preview_pane_t1_ParamLimits

0xec7d,	// (0x000456bb) heading_preview_pane_t1

0xb892,	// (0x000422d0) soft_indicator_pane_t1_ParamLimits

0xbee7,	// (0x00042925) scroll_pane_ParamLimits

0xc2e7,	// (0x00042d25) scroll_sc2_left_pane

0xc2f0,	// (0x00042d2e) scroll_sc2_right_pane

0xc30f,	// (0x00042d4d) scroll_bg_pane_g1_ParamLimits

0xc324,	// (0x00042d62) scroll_bg_pane_g2_ParamLimits

0xc33c,	// (0x00042d7a) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x00046160) scroll_bg_pane_g_ParamLimits

0xc30f,	// (0x00042d4d) scroll_handle_pane_g1_ParamLimits

0xc35e,	// (0x00042d9c) scroll_handle_pane_g2_ParamLimits

0xc33c,	// (0x00042d7a) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x00046167) scroll_handle_pane_g_ParamLimits

0xcc04,	// (0x00043642) popup_choice_list_window_ParamLimits

0xcc04,	// (0x00043642) popup_choice_list_window

0xce32,	// (0x00043870) choice_list_pane

0xceb4,	// (0x000438f2) cell_toolbar_pane_t1

0xcedc,	// (0x0004391a) toolbar_button_pane_ParamLimits

0xde19,	// (0x00044857) ai_gene_pane_1_t2_ParamLimits

0xde19,	// (0x00044857) ai_gene_pane_1_t2

0x0001,

0xf93a,	// (0x00046378) ai_gene_pane_1_t_ParamLimits

0xf93a,	// (0x00046378) ai_gene_pane_1_t

0xec9a,	// (0x000456d8) scroll_sc2_left_pane_g1

0xec9a,	// (0x000456d8) scroll_sc2_right_pane_g1

0xc0cc,	// (0x00042b0a) bg_popup_sub_pane_cp10

0xeca4,	// (0x000456e2) list_choice_list_pane

0xecbb,	// (0x000456f9) list_single_choice_list_pane_ParamLimits

0xecbb,	// (0x000456f9) list_single_choice_list_pane

0xeccf,	// (0x0004570d) list_single_choice_list_pane_g1

0xecd7,	// (0x00045715) list_single_choice_list_pane_t1_ParamLimits

0xecd7,	// (0x00045715) list_single_choice_list_pane_t1

0xecec,	// (0x0004572a) choice_list_pane_g1

0xecf4,	// (0x00045732) choice_list_pane_t1

0xb7cf,	// (0x0004220d) input_focus_pane_cp11

0xc241,	// (0x00042c7f) title_pane_stacon_g2_ParamLimits

0xc241,	// (0x00042c7f) title_pane_stacon_g2

0x0002,

0xf708,	// (0x00046146) title_pane_stacon_g_ParamLimits

0xf708,	// (0x00046146) title_pane_stacon_g

0xc9a2,	// (0x000433e0) cursor_press_pane

0x917c,	// (0x0003fbba) popup_fep_hwr_window_ParamLimits

0x917c,	// (0x0003fbba) popup_fep_hwr_window

0xcc5a,	// (0x00043698) popup_fep_vkb_window_ParamLimits

0xcc5a,	// (0x00043698) popup_fep_vkb_window

0xed02,	// (0x00045740) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x00046583) fep_vkb_side_pane_g_ParamLimits

0x2ce7,	// (0x00039725) fep_hwr_candidate_pane_ParamLimits

0x2ce7,	// (0x00039725) fep_hwr_candidate_pane

0x2d11,	// (0x0003974f) fep_hwr_side_pane_ParamLimits

0x2d11,	// (0x0003974f) fep_hwr_side_pane

0x2d31,	// (0x0003976f) fep_hwr_top_pane_ParamLimits

0x2d31,	// (0x0003976f) fep_hwr_top_pane

0x2d49,	// (0x00039787) fep_hwr_write_pane_ParamLimits

0x2d49,	// (0x00039787) fep_hwr_write_pane

0xfb45,	// (0x00046583) fep_vkb_side_pane_g

0xed0a,	// (0x00045748) fep_hwr_top_pane_g1

0xed1c,	// (0x0004575a) fep_hwr_top_pane_g2

0x2d75,	// (0x000397b3) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x0004655f) fep_hwr_top_pane_g

0x2d8a,	// (0x000397c8) fep_hwr_top_text_pane

0xc4b5,	// (0x00042ef3) fep_hwr_top_text_pane_g1

0xed52,	// (0x00045790) fep_hwr_top_text_pane_t1

0x2e80,	// (0x000398be) fep_hwr_candidate_pane_g1

0xee7f,	// (0x000458bd) fep_vkb_keypad_pane_g3_ParamLimits

0xee7f,	// (0x000458bd) fep_vkb_keypad_pane_g3

0xeea7,	// (0x000458e5) fep_vkb_keypad_pane_g4_ParamLimits

0xeea7,	// (0x000458e5) fep_vkb_keypad_pane_g4

0xef16,	// (0x00045954) fep_vkb_bottom_pane_g2_ParamLimits

0xef16,	// (0x00045954) fep_vkb_bottom_pane_g2

0x0001,

0x0066,	// (0x00036aa4) fep_vkb_bottom_pane_g_ParamLimits

0x0066,	// (0x00036aa4) fep_vkb_bottom_pane_g

0xec9a,	// (0x000456d8) cell_vkb_side_pane_g2

0x0001,

0xfb51,	// (0x0004658f) cell_vkb_side_pane_g

0xef5a,	// (0x00045998) cell_vkb_side_pane_t1

0xef68,	// (0x000459a6) cell_vkb_side_pane_t1_copy1

0xec9a,	// (0x000456d8) bg_fep_vkb_candidate_pane_g2

0xf03e,	// (0x00045a7c) cell_vkb_candidate_pane_ParamLimits

0xed60,	// (0x0004579e) aid_size_cell_vkb_ParamLimits

0xed60,	// (0x0004579e) aid_size_cell_vkb

0xf03e,	// (0x00045a7c) cell_vkb_candidate_pane

0x2e9a,	// (0x000398d8) bg_popup_fep_shadow_pane_g1

0xa2bb,	// (0x00040cf9) fep_vkb_bottom_pane_ParamLimits

0xa2bb,	// (0x00040cf9) fep_vkb_bottom_pane

0xeded,	// (0x0004582b) fep_vkb_candidate_pane_ParamLimits

0xeded,	// (0x0004582b) fep_vkb_candidate_pane

0xa2e0,	// (0x00040d1e) fep_vkb_keypad_pane_ParamLimits

0xa2e0,	// (0x00040d1e) fep_vkb_keypad_pane

0xa31c,	// (0x00040d5a) fep_vkb_side_pane_ParamLimits

0xa31c,	// (0x00040d5a) fep_vkb_side_pane

0xa358,	// (0x00040d96) fep_vkb_top_pane_ParamLimits

0xa358,	// (0x00040d96) fep_vkb_top_pane

0xee13,	// (0x00045851) fep_vkb_top_pane_g1_ParamLimits

0xee13,	// (0x00045851) fep_vkb_top_pane_g1

0xee22,	// (0x00045860) fep_vkb_top_pane_g2_ParamLimits

0xee22,	// (0x00045860) fep_vkb_top_pane_g2

0xee31,	// (0x0004586f) fep_vkb_top_pane_g3_ParamLimits

0xee31,	// (0x0004586f) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x0004657a) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x0004657a) fep_vkb_top_pane_g

0xee4f,	// (0x0004588d) fep_vkb_top_text_pane_ParamLimits

0xee4f,	// (0x0004588d) fep_vkb_top_text_pane

0xa394,	// (0x00040dd2) fep_vkb_side_pane_g1_ParamLimits

0xa394,	// (0x00040dd2) fep_vkb_side_pane_g1

0xee6e,	// (0x000458ac) grid_vkb_side_pane_ParamLimits

0xee6e,	// (0x000458ac) grid_vkb_side_pane

0x2ea2,	// (0x000398e0) bg_popup_fep_shadow_pane_g2

0x2eab,	// (0x000398e9) bg_popup_fep_shadow_pane_g3

0x2eb3,	// (0x000398f1) bg_popup_fep_shadow_pane_g4

0x2ebc,	// (0x000398fa) bg_popup_fep_shadow_pane_g5

0x2ec6,	// (0x00039904) bg_popup_fep_shadow_pane_g6

0x2ece,	// (0x0003990c) bg_popup_fep_shadow_pane_g7

0xbffb,	// (0x00042a39) bg_popup_fep_shadow_pane_g8

0xeec5,	// (0x00045903) grid_vkb_keypad_number_pane_ParamLimits

0xeec5,	// (0x00045903) grid_vkb_keypad_number_pane

0xeed5,	// (0x00045913) grid_vkb_keypad_pane_ParamLimits

0xeed5,	// (0x00045913) grid_vkb_keypad_pane

0xeefb,	// (0x00045939) fep_vkb_bottom_pane_g1_ParamLimits

0xeefb,	// (0x00045939) fep_vkb_bottom_pane_g1

0xef24,	// (0x00045962) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xef24,	// (0x00045962) grid_vkb_keypad_bottom_left_pane

0xef39,	// (0x00045977) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xef39,	// (0x00045977) grid_vkb_keypad_bottom_right_pane

0xef4e,	// (0x0004598c) fep_vkb_top_text_pane_g1

0xa3db,	// (0x00040e19) fep_vkb_top_text_pane_t1

0xa3ed,	// (0x00040e2b) cell_vkb_side_pane_ParamLimits

0xa3ed,	// (0x00040e2b) cell_vkb_side_pane

0xec9a,	// (0x000456d8) cell_vkb_side_pane_g1

0xef76,	// (0x000459b4) cell_vkb_keypad_pane_ParamLimits

0xef76,	// (0x000459b4) cell_vkb_keypad_pane

0xefeb,	// (0x00045a29) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x00046594) bg_popup_fep_shadow_pane_g

0xec9a,	// (0x000456d8) cell_hwr_side_pane_g1

0xec9a,	// (0x000456d8) cell_hwr_side_pane_g2

0xeff5,	// (0x00045a33) cell_vkb_keypad_pane_t1

0xa403,	// (0x00040e41) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa403,	// (0x00040e41) cell_vkb_keypad_bottom_left_pane

0xa418,	// (0x00040e56) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa418,	// (0x00040e56) cell_vkb_keypad_bottom_right_pane

0xec9a,	// (0x000456d8) cell_vkb_keypad_bottom_left_pane_g1

0xec9a,	// (0x000456d8) cell_vkb_keypad_bottom_right_pane_g1

0xf003,	// (0x00045a41) cell_vkb_keypad_number_pane_ParamLimits

0xf003,	// (0x00045a41) cell_vkb_keypad_number_pane

0xf022,	// (0x00045a60) cell_vkb_keypad_number_pane_g1

0xf02c,	// (0x00045a6a) cell_vkb_keypad_number_pane_g2

0xf035,	// (0x00045a73) cell_vkb_keypad_number_pane_g3

0x0002,

0x0075,	// (0x00036ab3) cell_vkb_keypad_number_pane_g

0xeff5,	// (0x00045a33) cell_vkb_keypad_number_pane_t1

0xf059,	// (0x00045a97) fep_vkb_candidate_pane_g1

0x0001,

0xfb51,	// (0x0004658f) cell_hwr_side_pane_g

0xf072,	// (0x00045ab0) cell_hwr_side_pane_t1

0x2ee0,	// (0x0003991e) cell_hwr_side_pane_t1_copy1

0xee41,	// (0x0004587f) cell_hwr_candidate_pane_g1

0x2eee,	// (0x0003992c) cell_hwr_candidate_pane_t1

0xec9a,	// (0x000456d8) cell_vkb_candidate_pane_g2

0xf0f8,	// (0x00045b36) cell_vkb_candidate_pane_t1

0xe951,	// (0x0004538f) bg_popup_fep_shadow_pane_ParamLimits

0xe951,	// (0x0004538f) bg_popup_fep_shadow_pane

0x84ad,	// (0x0003eeeb) bg_fep_hwr_top_pane_g4

0xed2e,	// (0x0004576c) bg_hwr_side_pane_g1_ParamLimits

0xed2e,	// (0x0004576c) bg_hwr_side_pane_g1

0x84d3,	// (0x0003ef11) cell_hwr_side_pane_ParamLimits

0x84d3,	// (0x0003ef11) cell_hwr_side_pane

0x2e01,	// (0x0003983f) fep_hwr_write_pane_g1_ParamLimits

0x2e01,	// (0x0003983f) fep_hwr_write_pane_g1

0x2e0e,	// (0x0003984c) fep_hwr_write_pane_g2_ParamLimits

0x2e0e,	// (0x0003984c) fep_hwr_write_pane_g2

0x2e1b,	// (0x00039859) fep_hwr_write_pane_g3_ParamLimits

0x2e1b,	// (0x00039859) fep_hwr_write_pane_g3

0x84f3,	// (0x0003ef31) fep_hwr_write_pane_g4_ParamLimits

0x84f3,	// (0x0003ef31) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x00046566) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x00046566) fep_hwr_write_pane_g

0x84ad,	// (0x0003eeeb) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x84ad,	// (0x0003eeeb) bg_fep_hwr_candidate_pane_g2

0x2e3e,	// (0x0003987c) cell_hwr_candidate_pane_ParamLimits

0x2e3e,	// (0x0003987c) cell_hwr_candidate_pane

0x2e80,	// (0x000398be) fep_hwr_candidate_pane_g1_ParamLimits

0xed8e,	// (0x000457cc) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xed8e,	// (0x000457cc) bg_popup_fep_shadow_pane_cp2

0xee41,	// (0x0004587f) fep_vkb_top_pane_g4_ParamLimits

0xee41,	// (0x0004587f) fep_vkb_top_pane_g4

0xee60,	// (0x0004589e) fep_vkb_side_pane_g2_ParamLimits

0xee60,	// (0x0004589e) fep_vkb_side_pane_g2

0x7b2e,	// (0x0003e56c) list_setting_pane_t4_ParamLimits

0x7b2e,	// (0x0003e56c) list_setting_pane_t4

0x7bc8,	// (0x0003e606) list_setting_number_pane_t5_ParamLimits

0x7bc8,	// (0x0003e606) list_setting_number_pane_t5

0x8eb9,	// (0x0003f8f7) list_double_heading_pane_cp2_ParamLimits

0x8eb9,	// (0x0003f8f7) list_double_heading_pane_cp2

0xbf8e,	// (0x000429cc) list_double_heading_pane_g1_cp2_ParamLimits

0xbf8e,	// (0x000429cc) list_double_heading_pane_g1_cp2

0xbf9a,	// (0x000429d8) list_double_heading_pane_g2_cp2_ParamLimits

0xbf9a,	// (0x000429d8) list_double_heading_pane_g2_cp2

0xf106,	// (0x00045b44) list_double_heading_pane_t1_cp2_ParamLimits

0xf106,	// (0x00045b44) list_double_heading_pane_t1_cp2

0xf11c,	// (0x00045b5a) list_double_heading_pane_t2_cp2_ParamLimits

0xf11c,	// (0x00045b5a) list_double_heading_pane_t2_cp2

0xb7c7,	// (0x00042205) aid_value_unit2

0x14f6,	// (0x00037f34) popup_preview_fixed_window

0xb972,	// (0x000423b0) bg_popup_preview_window_pane_cp02

0xf12e,	// (0x00045b6c) list_preview_fixed_pane

0xf174,	// (0x00045bb2) list_empty_pane_fp_ParamLimits

0xf174,	// (0x00045bb2) list_empty_pane_fp

0xf174,	// (0x00045bb2) list_single_cale_day_pane_fp_ParamLimits

0xf174,	// (0x00045bb2) list_single_cale_day_pane_fp

0xf174,	// (0x00045bb2) list_single_graphic_heading_pane_fp_ParamLimits

0xf174,	// (0x00045bb2) list_single_graphic_heading_pane_fp

0xf174,	// (0x00045bb2) list_single_graphic_pane_fp_ParamLimits

0xf174,	// (0x00045bb2) list_single_graphic_pane_fp

0xf174,	// (0x00045bb2) list_single_heading_pane_fp_ParamLimits

0xf174,	// (0x00045bb2) list_single_heading_pane_fp

0xf174,	// (0x00045bb2) list_single_pane_fp_ParamLimits

0xf174,	// (0x00045bb2) list_single_pane_fp

0xf189,	// (0x00045bc7) list_single_pane_fp_g1_ParamLimits

0xf189,	// (0x00045bc7) list_single_pane_fp_g1

0xd34e,	// (0x00043d8c) list_single_pane_fp_g2_ParamLimits

0xd34e,	// (0x00043d8c) list_single_pane_fp_g2

0xf439,	// (0x00045e77) list_single_pane_fp_g3_ParamLimits

0xf439,	// (0x00045e77) list_single_pane_fp_g3

0xf195,	// (0x00045bd3) list_single_pane_fp_g4_ParamLimits

0xf195,	// (0x00045bd3) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x000465b5) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x000465b5) list_single_pane_fp_g

0x0f6d,	// (0x000379ab) list_single_pane_fp_t1_ParamLimits

0x0f6d,	// (0x000379ab) list_single_pane_fp_t1

0x0f84,	// (0x000379c2) list_single_graphic_pane_fp_g1_ParamLimits

0x0f84,	// (0x000379c2) list_single_graphic_pane_fp_g1

0xf189,	// (0x00045bc7) list_single_graphic_pane_fp_g2_ParamLimits

0xf189,	// (0x00045bc7) list_single_graphic_pane_fp_g2

0xd34e,	// (0x00043d8c) list_single_graphic_pane_fp_g3_ParamLimits

0xd34e,	// (0x00043d8c) list_single_graphic_pane_fp_g3

0xf439,	// (0x00045e77) list_single_graphic_pane_fp_g4_ParamLimits

0xf439,	// (0x00045e77) list_single_graphic_pane_fp_g4

0xf195,	// (0x00045bd3) list_single_graphic_pane_fp_g5_ParamLimits

0xf195,	// (0x00045bd3) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x000465be) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x000465be) list_single_graphic_pane_fp_g

0x0f90,	// (0x000379ce) list_single_graphic_pane_fp_t1_ParamLimits

0x0f90,	// (0x000379ce) list_single_graphic_pane_fp_t1

0x0f84,	// (0x000379c2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0f84,	// (0x000379c2) list_single_graphic_heading_pane_fp_g1

0xf189,	// (0x00045bc7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf189,	// (0x00045bc7) list_single_graphic_heading_pane_fp_g2

0xd34e,	// (0x00043d8c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd34e,	// (0x00043d8c) list_single_graphic_heading_pane_fp_g3

0xf439,	// (0x00045e77) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf439,	// (0x00045e77) list_single_graphic_heading_pane_fp_g4

0xf195,	// (0x00045bd3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf195,	// (0x00045bd3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x000465be) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x000465be) list_single_graphic_heading_pane_fp_g

0x0fa6,	// (0x000379e4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0fa6,	// (0x000379e4) list_single_graphic_heading_pane_fp_t1

0x0fbc,	// (0x000379fa) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0fbc,	// (0x000379fa) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x000465c9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x000465c9) list_single_graphic_heading_pane_fp_t

0x0fce,	// (0x00037a0c) list_single_cale_day_pane_fp_g1_ParamLimits

0x0fce,	// (0x00037a0c) list_single_cale_day_pane_fp_g1

0xf1a1,	// (0x00045bdf) list_single_cale_day_pane_fp_g2_ParamLimits

0xf1a1,	// (0x00045bdf) list_single_cale_day_pane_fp_g2

0x2f0c,	// (0x0003994a) list_single_cale_day_pane_fp_g3_ParamLimits

0x2f0c,	// (0x0003994a) list_single_cale_day_pane_fp_g3

0x2f34,	// (0x00039972) list_single_cale_day_pane_fp_g4_ParamLimits

0x2f34,	// (0x00039972) list_single_cale_day_pane_fp_g4

0x2f58,	// (0x00039996) list_single_cale_day_pane_fp_g5_ParamLimits

0x2f58,	// (0x00039996) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x000465ce) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x000465ce) list_single_cale_day_pane_fp_g

0x1006,	// (0x00037a44) list_single_cale_day_pane_fp_t1_ParamLimits

0x1006,	// (0x00037a44) list_single_cale_day_pane_fp_t1

0x102c,	// (0x00037a6a) list_single_cale_day_pane_fp_t2_ParamLimits

0x102c,	// (0x00037a6a) list_single_cale_day_pane_fp_t2

0x1045,	// (0x00037a83) list_single_cale_day_pane_fp_t3_ParamLimits

0x1045,	// (0x00037a83) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x000465d9) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x000465d9) list_single_cale_day_pane_fp_t

0xf189,	// (0x00045bc7) list_empty_pane_fp_g1_ParamLimits

0xf189,	// (0x00045bc7) list_empty_pane_fp_g1

0x105e,	// (0x00037a9c) list_empty_pane_fp_t1

0x106c,	// (0x00037aaa) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x000465e0) list_empty_pane_fp_t

0xf189,	// (0x00045bc7) list_single_heading_pane_fp_g1_ParamLimits

0xf189,	// (0x00045bc7) list_single_heading_pane_fp_g1

0xd34e,	// (0x00043d8c) list_single_heading_pane_fp_g2_ParamLimits

0xd34e,	// (0x00043d8c) list_single_heading_pane_fp_g2

0xf439,	// (0x00045e77) list_single_heading_pane_fp_g3_ParamLimits

0xf439,	// (0x00045e77) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x000465e5) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x000465e5) list_single_heading_pane_fp_g

0x107a,	// (0x00037ab8) list_single_heading_pane_fp_t1_ParamLimits

0x107a,	// (0x00037ab8) list_single_heading_pane_fp_t1

0x108c,	// (0x00037aca) list_single_heading_pane_fp_t2_ParamLimits

0x108c,	// (0x00037aca) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x000465ec) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x000465ec) list_single_heading_pane_fp_t

0xc0d8,	// (0x00042b16) aid_size_cell_fast

0xb955,	// (0x00042393) soft_indicator_pane_cp1_t1

0xc115,	// (0x00042b53) cell_app_pane_cp2_ParamLimits

0xc115,	// (0x00042b53) cell_app_pane_cp2

0x2cd0,	// (0x0003970e) fep_hwr_candidate_drop_down_list_pane

0x9115,	// (0x0003fb53) fep_hwr_candidate_pane_g3_ParamLimits

0x9115,	// (0x0003fb53) fep_hwr_candidate_pane_g3

0x9122,	// (0x0003fb60) fep_hwr_candidate_pane_g4_ParamLimits

0x9122,	// (0x0003fb60) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x00046573) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x00046573) fep_hwr_candidate_pane_g

0xeddc,	// (0x0004581a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xeddc,	// (0x0004581a) fep_vkb_candidate_drop_down_list_pane

0xf061,	// (0x00045a9f) fep_vkb_candidate_pane_g3

0xf069,	// (0x00045aa7) fep_vkb_candidate_pane_g4

0x0002,

0x007c,	// (0x00036aba) fep_vkb_candidate_pane_g

0xee41,	// (0x0004587f) cell_hwr_candidate_pane_g1_ParamLimits

0xf080,	// (0x00045abe) cell_hwr_candidate_pane_g3_ParamLimits

0xf080,	// (0x00045abe) cell_hwr_candidate_pane_g3

0xf0a1,	// (0x00045adf) cell_hwr_candidate_pane_g4_ParamLimits

0xf0a1,	// (0x00045adf) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x000465a7) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x000465a7) cell_hwr_candidate_pane_g

0xf0c2,	// (0x00045b00) cell_vkb_candidate_pane_g3_ParamLimits

0xf0c2,	// (0x00045b00) cell_vkb_candidate_pane_g3

0xf0dd,	// (0x00045b1b) cell_vkb_candidate_pane_g4_ParamLimits

0xf0dd,	// (0x00045b1b) cell_vkb_candidate_pane_g4

0xf1ad,	// (0x00045beb) cell_app_pane_cp2_g1_ParamLimits

0xf1ad,	// (0x00045beb) cell_app_pane_cp2_g1

0xf1cb,	// (0x00045c09) cell_app_pane_cp2_g2_ParamLimits

0xf1cb,	// (0x00045c09) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x000465f1) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x000465f1) cell_app_pane_cp2_g

0xf1d7,	// (0x00045c15) cell_app_pane_cp2_t1_ParamLimits

0xf1d7,	// (0x00045c15) cell_app_pane_cp2_t1

0xbf74,	// (0x000429b2) grid_highlight_pane_cp1_ParamLimits

0xbf74,	// (0x000429b2) grid_highlight_pane_cp1

0x2f7c,	// (0x000399ba) cell_hwr_candidate_pane_cp1_ParamLimits

0x2f7c,	// (0x000399ba) cell_hwr_candidate_pane_cp1

0xee41,	// (0x0004587f) fep_hwr_candidate_drop_down_list_pane_g1

0xf1e9,	// (0x00045c27) fep_hwr_candidate_drop_down_list_pane_g2

0xf1f6,	// (0x00045c34) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x000465f6) fep_hwr_candidate_drop_down_list_pane_g

0x2f9b,	// (0x000399d9) fep_hwr_candidate_drop_down_list_scroll_pane

0x2fa4,	// (0x000399e2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2fa4,	// (0x000399e2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2fb1,	// (0x000399ef) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2fb1,	// (0x000399ef) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2fbe,	// (0x000399fc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2fbe,	// (0x000399fc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf0c2,	// (0x00045b00) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf0c2,	// (0x00045b00) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf0dd,	// (0x00045b1b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf0dd,	// (0x00045b1b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2fcb,	// (0x00039a09) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2fcb,	// (0x00039a09) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2fe6,	// (0x00039a24) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2fe6,	// (0x00039a24) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x3001,	// (0x00039a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3001,	// (0x00039a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x000465fd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x000465fd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf203,	// (0x00045c41) cell_vkb_candidate_pane_cp1_ParamLimits

0xf203,	// (0x00045c41) cell_vkb_candidate_pane_cp1

0xee41,	// (0x0004587f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xee41,	// (0x0004587f) fep_vkb_candidate_drop_down_list_pane_g1

0xf1e9,	// (0x00045c27) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf1e9,	// (0x00045c27) fep_vkb_candidate_drop_down_list_pane_g2

0xf1f6,	// (0x00045c34) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf1f6,	// (0x00045c34) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x000465f6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x000465f6) fep_vkb_candidate_drop_down_list_pane_g

0xf223,	// (0x00045c61) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf223,	// (0x00045c61) fep_vkb_candidate_drop_down_list_scroll_pane

0xf230,	// (0x00045c6e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf230,	// (0x00045c6e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf23d,	// (0x00045c7b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf23d,	// (0x00045c7b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf249,	// (0x00045c87) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf249,	// (0x00045c87) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf080,	// (0x00045abe) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf080,	// (0x00045abe) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf0a1,	// (0x00045adf) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf0a1,	// (0x00045adf) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf255,	// (0x00045c93) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf255,	// (0x00045c93) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf276,	// (0x00045cb4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf276,	// (0x00045cb4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf297,	// (0x00045cd5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf297,	// (0x00045cd5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0004660e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0004660e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x89bf,	// (0x0003f3fd) title_pane_g1_ParamLimits

0x89d0,	// (0x0003f40e) title_pane_g2_ParamLimits

0xf592,	// (0x00045fd0) title_pane_g_ParamLimits

0xc4a5,	// (0x00042ee3) aid_call2_pane

0xc4ad,	// (0x00042eeb) aid_call_pane

0xc4b5,	// (0x00042ef3) popup_clock_analogue_window_g1

0xc4b5,	// (0x00042ef3) popup_clock_analogue_window_g2

0x1cf1,	// (0x0003872f) popup_clock_analogue_window_g3

0x1cfa,	// (0x00038738) popup_clock_analogue_window_g4

0xb7d9,	// (0x00042217) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x00046175) popup_clock_analogue_window_g

0x1d02,	// (0x00038740) popup_clock_analogue_window_t1

0x1d3d,	// (0x0003877b) clock_digital_number_pane_ParamLimits

0x1d3d,	// (0x0003877b) clock_digital_number_pane

0x1d49,	// (0x00038787) clock_digital_number_pane_cp02_ParamLimits

0x1d49,	// (0x00038787) clock_digital_number_pane_cp02

0x1d55,	// (0x00038793) clock_digital_number_pane_cp03_ParamLimits

0x1d55,	// (0x00038793) clock_digital_number_pane_cp03

0x1d61,	// (0x0003879f) clock_digital_number_pane_cp04_ParamLimits

0x1d61,	// (0x0003879f) clock_digital_number_pane_cp04

0x1d6d,	// (0x000387ab) clock_digital_separator_pane_ParamLimits

0x1d6d,	// (0x000387ab) clock_digital_separator_pane

0x1d79,	// (0x000387b7) popup_clock_digital_window_t1_ParamLimits

0x1d79,	// (0x000387b7) popup_clock_digital_window_t1

0xb7d9,	// (0x00042217) clock_digital_number_pane_g1

0xb7d9,	// (0x00042217) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x00046180) clock_digital_number_pane_g

0xb7d9,	// (0x00042217) clock_digital_separator_pane_g1

0xb7d9,	// (0x00042217) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x00046180) clock_digital_separator_pane_g

0x9755,	// (0x00040193) aid_fill_nsta_ParamLimits

0x9884,	// (0x000402c2) indicator_nsta_pane_ParamLimits

0xcdd9,	// (0x00043817) popup_clock_analogue_window

0xcdd9,	// (0x00043817) popup_clock_digital_window

0xd8d6,	// (0x00044314) grid_indicator_nsta_pane_ParamLimits

0xe96d,	// (0x000453ab) clock_nsta_pane_t2

0x0001,

0xfac2,	// (0x00046500) clock_nsta_pane_t

0x1cb5,	// (0x000386f3) aid_size_max_handle

0x818c,	// (0x0003ebca) aid_size_min_handle

0xc9a2,	// (0x000433e0) editor_scroll_pane

0xf2b2,	// (0x00045cf0) ex_editor_pane

0xc093,	// (0x00042ad1) scroll_pane_cp13

0xbf13,	// (0x00042951) scroll_pane_cp14

0xc4df,	// (0x00042f1d) scroll_pane_cp36

0x8ec8,	// (0x0003f906) list_single_graphic_hl_pane_cp2_ParamLimits

0x8ec8,	// (0x0003f906) list_single_graphic_hl_pane_cp2

0x849c,	// (0x0003eeda) list_single_graphic_hl_pane_ParamLimits

0x849c,	// (0x0003eeda) list_single_graphic_hl_pane

0x10a2,	// (0x00037ae0) aid_size_min_hl_cp1

0xf2ba,	// (0x00045cf8) list_highlight_pane_cp34_ParamLimits

0xf2ba,	// (0x00045cf8) list_highlight_pane_cp34

0xf2cb,	// (0x00045d09) list_single_graphic_hl_pane_g1_ParamLimits

0xf2cb,	// (0x00045d09) list_single_graphic_hl_pane_g1

0x10ab,	// (0x00037ae9) list_single_graphic_hl_pane_g2_ParamLimits

0x10ab,	// (0x00037ae9) list_single_graphic_hl_pane_g2

0x10ab,	// (0x00037ae9) list_single_graphic_hl_pane_g3_ParamLimits

0x10ab,	// (0x00037ae9) list_single_graphic_hl_pane_g3

0xc913,	// (0x00043351) list_single_graphic_hl_pane_g4_ParamLimits

0xc913,	// (0x00043351) list_single_graphic_hl_pane_g4

0x301c,	// (0x00039a5a) list_single_graphic_hl_pane_g5_ParamLimits

0x301c,	// (0x00039a5a) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x0004661f) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x0004661f) list_single_graphic_hl_pane_g

0x10b7,	// (0x00037af5) list_single_graphic_hl_pane_t1_ParamLimits

0x10b7,	// (0x00037af5) list_single_graphic_hl_pane_t1

0xf2d8,	// (0x00045d16) aid_size_min_hl_cp2

0xf2e1,	// (0x00045d1f) list_highlight_pane_cp34_cp2_ParamLimits

0xf2e1,	// (0x00045d1f) list_highlight_pane_cp34_cp2

0xf2cb,	// (0x00045d09) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf2cb,	// (0x00045d09) list_single_graphic_hl_pane_g1_cp2

0xf2ee,	// (0x00045d2c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf2ee,	// (0x00045d2c) list_single_graphic_hl_pane_g2_cp2

0xf2fa,	// (0x00045d38) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf2fa,	// (0x00045d38) list_single_graphic_hl_pane_g3_cp2

0xde6a,	// (0x000448a8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xde6a,	// (0x000448a8) list_single_graphic_hl_pane_g4_cp2

0xf308,	// (0x00045d46) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf308,	// (0x00045d46) list_single_graphic_hl_pane_g5_cp2

0x81ca,	// (0x0003ec08) control_pane_g4_ParamLimits

0x81ca,	// (0x0003ec08) control_pane_g4

0xc0cc,	// (0x00042b0a) bg_popup_sub_pane_cp10_ParamLimits

0xeca4,	// (0x000456e2) list_choice_list_pane_ParamLimits

0xecb3,	// (0x000456f1) scroll_pane_cp23

0xb972,	// (0x000423b0) bg_popup_preview_window_pane_cp02_ParamLimits

0xf12e,	// (0x00045b6c) list_preview_fixed_pane_ParamLimits

0xf144,	// (0x00045b82) list_preview_fixed_pane_cp_ParamLimits

0xf144,	// (0x00045b82) list_preview_fixed_pane_cp

0xf150,	// (0x00045b8e) popup_preview_fixed_window_g1_ParamLimits

0xf150,	// (0x00045b8e) popup_preview_fixed_window_g1

0xf15c,	// (0x00045b9a) popup_preview_fixed_window_g2_ParamLimits

0xf15c,	// (0x00045b9a) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x000465ae) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x000465ae) popup_preview_fixed_window_g

0x1ba8,	// (0x000385e6) aid_navi_side_left_pane_ParamLimits

0x1bbd,	// (0x000385fb) aid_navi_side_right_pane_ParamLimits

0x1bd5,	// (0x00038613) navi_icon_pane_stacon_ParamLimits

0x1be9,	// (0x00038627) navi_navi_pane_stacon_ParamLimits

0x1bd5,	// (0x00038613) navi_text_pane_stacon_ParamLimits

0xb7cf,	// (0x0004220d) main_text_info_pane

0xf332,	// (0x00045d70) listscroll_text_info_pane

0xf33a,	// (0x00045d78) list_text_info_pane_ParamLimits

0xf33a,	// (0x00045d78) list_text_info_pane

0xf349,	// (0x00045d87) scroll_pane_cp24_ParamLimits

0xf349,	// (0x00045d87) scroll_pane_cp24

0xa433,	// (0x00040e71) list_text_info_pane_t1_ParamLimits

0xa433,	// (0x00040e71) list_text_info_pane_t1

0x90d5,	// (0x0003fb13) popup_fast_swap2_window_ParamLimits

0x90d5,	// (0x0003fb13) popup_fast_swap2_window

0xf367,	// (0x00045da5) aid_size_cell_fast2

0xb7cf,	// (0x0004220d) bg_popup_window_pane_cp17

0xd285,	// (0x00043cc3) heading_pane_cp2

0xbb64,	// (0x000425a2) listscroll_fast2_pane

0xf371,	// (0x00045daf) grid_fast2_pane

0xf37b,	// (0x00045db9) listscroll_fast2_pane_g1

0xf383,	// (0x00045dc1) listscroll_fast2_pane_g2

0x0001,

0x0125,	// (0x00036b63) listscroll_fast2_pane_g

0xc093,	// (0x00042ad1) scroll_pane_cp26

0xf38d,	// (0x00045dcb) cell_fast2_pane_ParamLimits

0xf38d,	// (0x00045dcb) cell_fast2_pane

0xf3a2,	// (0x00045de0) cell_fast2_pane_g1

0xf3ab,	// (0x00045de9) cell_fast2_pane_g2

0xf3b4,	// (0x00045df2) cell_fast2_pane_g3

0x0002,

0x012a,	// (0x00036b68) cell_fast2_pane_g

0xbba6,	// (0x000425e4) grid_highlight_pane_cp9

0xbbbb,	// (0x000425f9) main_eswt_pane_ParamLimits

0xbbbb,	// (0x000425f9) main_eswt_pane

0xf35e,	// (0x00045d9c) list_single_text_info_pane

0xf3bc,	// (0x00045dfa) eswt_ctrl_button_pane

0xf3bc,	// (0x00045dfa) eswt_ctrl_canvas_pane

0xf3c4,	// (0x00045e02) eswt_ctrl_combo_pane

0xf3bc,	// (0x00045dfa) eswt_ctrl_default_pane

0xf3bc,	// (0x00045dfa) eswt_ctrl_label_pane

0xf3cc,	// (0x00045e0a) eswt_ctrl_wait_pane

0xf3d4,	// (0x00045e12) eswt_shell_pane

0xb7cf,	// (0x0004220d) listscroll_eswt_app_pane

0xf3f4,	// (0x00045e32) popup_eswt_tasktip_window_ParamLimits

0xf3f4,	// (0x00045e32) popup_eswt_tasktip_window

0xcfd8,	// (0x00043a16) bg_popup_window_pane_cp18

0xf405,	// (0x00045e43) eswt_control_pane_g1_ParamLimits

0xf405,	// (0x00045e43) eswt_control_pane_g1

0xf412,	// (0x00045e50) eswt_control_pane_g2_ParamLimits

0xf412,	// (0x00045e50) eswt_control_pane_g2

0xf41f,	// (0x00045e5d) eswt_control_pane_g3_ParamLimits

0xf41f,	// (0x00045e5d) eswt_control_pane_g3

0xf42c,	// (0x00045e6a) eswt_control_pane_g4_ParamLimits

0xf42c,	// (0x00045e6a) eswt_control_pane_g4

0x0003,

0x0131,	// (0x00036b6f) eswt_control_pane_g_ParamLimits

0x0131,	// (0x00036b6f) eswt_control_pane_g

0xbf74,	// (0x000429b2) bg_button_pane_ParamLimits

0xbf74,	// (0x000429b2) bg_button_pane

0xbbbb,	// (0x000425f9) common_borders_pane_copy2_ParamLimits

0xbbbb,	// (0x000425f9) common_borders_pane_copy2

0xf44d,	// (0x00045e8b) control_button_pane_g1_ParamLimits

0xf44d,	// (0x00045e8b) control_button_pane_g1

0xf459,	// (0x00045e97) control_button_pane_g2_ParamLimits

0xf459,	// (0x00045e97) control_button_pane_g2

0xf465,	// (0x00045ea3) control_button_pane_g3_ParamLimits

0xf465,	// (0x00045ea3) control_button_pane_g3

0x0002,

0xfbec,	// (0x0004662a) control_button_pane_g_ParamLimits

0xfbec,	// (0x0004662a) control_button_pane_g

0xf479,	// (0x00045eb7) control_button_pane_t1

0xf487,	// (0x00045ec5) control_button_pane_t2

0x0001,

0xfbf3,	// (0x00046631) control_button_pane_t

0xcee8,	// (0x00043926) bg_button_pane_g1

0xcef0,	// (0x0004392e) bg_button_pane_g2

0xcef8,	// (0x00043936) bg_button_pane_g3

0xcf00,	// (0x0004393e) bg_button_pane_g4

0xcf08,	// (0x00043946) bg_button_pane_g5

0xcf10,	// (0x0004394e) bg_button_pane_g6

0xcf18,	// (0x00043956) bg_button_pane_g7

0xcf20,	// (0x0004395e) bg_button_pane_g8

0xcf28,	// (0x00043966) bg_button_pane_g9

0x0008,

0xf88e,	// (0x000462cc) bg_button_pane_g

0xec5f,	// (0x0004569d) common_borders_pane_ParamLimits

0xec5f,	// (0x0004569d) common_borders_pane

0xf405,	// (0x00045e43) eswt_control_pane_g1_copy1_ParamLimits

0xf405,	// (0x00045e43) eswt_control_pane_g1_copy1

0xf412,	// (0x00045e50) eswt_control_pane_g2_copy1_ParamLimits

0xf412,	// (0x00045e50) eswt_control_pane_g2_copy1

0xf41f,	// (0x00045e5d) eswt_control_pane_g3_copy1_ParamLimits

0xf41f,	// (0x00045e5d) eswt_control_pane_g3_copy1

0xf42c,	// (0x00045e6a) eswt_control_pane_g4_copy1_ParamLimits

0xf42c,	// (0x00045e6a) eswt_control_pane_g4_copy1

0xec9a,	// (0x000456d8) bg_eswt_ctrl_canvas_pane_g1

0xec5f,	// (0x0004569d) common_borders_pane_cp2_ParamLimits

0xec5f,	// (0x0004569d) common_borders_pane_cp2

0xec5f,	// (0x0004569d) common_borders_pane_cp3_ParamLimits

0xec5f,	// (0x0004569d) common_borders_pane_cp3

0xf495,	// (0x00045ed3) separator_horizontal_pane

0xf49d,	// (0x00045edb) separator_vertical_pane

0xf405,	// (0x00045e43) eswt_control_pane_g1_copy2_ParamLimits

0xf405,	// (0x00045e43) eswt_control_pane_g1_copy2

0xf412,	// (0x00045e50) eswt_control_pane_g2_copy2_ParamLimits

0xf412,	// (0x00045e50) eswt_control_pane_g2_copy2

0xf41f,	// (0x00045e5d) eswt_control_pane_g3_copy2_ParamLimits

0xf41f,	// (0x00045e5d) eswt_control_pane_g3_copy2

0xf42c,	// (0x00045e6a) eswt_control_pane_g4_copy2_ParamLimits

0xf42c,	// (0x00045e6a) eswt_control_pane_g4_copy2

0xb7cf,	// (0x0004220d) common_borders_pane_cp4

0xf4a6,	// (0x00045ee4) separator_horizontal_pane_g1

0xf4af,	// (0x00045eed) separator_horizontal_pane_g2

0xf4b8,	// (0x00045ef6) separator_horizontal_pane_g3

0x0002,

0xfbf8,	// (0x00046636) separator_horizontal_pane_g

0xf405,	// (0x00045e43) eswt_control_pane_g1_copy3_ParamLimits

0xf405,	// (0x00045e43) eswt_control_pane_g1_copy3

0xf412,	// (0x00045e50) eswt_control_pane_g2_copy3_ParamLimits

0xf412,	// (0x00045e50) eswt_control_pane_g2_copy3

0xf41f,	// (0x00045e5d) eswt_control_pane_g3_copy3_ParamLimits

0xf41f,	// (0x00045e5d) eswt_control_pane_g3_copy3

0xf42c,	// (0x00045e6a) eswt_control_pane_g4_copy3_ParamLimits

0xf42c,	// (0x00045e6a) eswt_control_pane_g4_copy3

0xb7cf,	// (0x0004220d) common_borders_pane_cp5

0xf4c1,	// (0x00045eff) separator_vertical_pane_g1

0xf4ca,	// (0x00045f08) separator_vertical_pane_g2

0xf4d3,	// (0x00045f11) separator_vertical_pane_g3

0x0002,

0xfbff,	// (0x0004663d) separator_vertical_pane_g

0xf405,	// (0x00045e43) eswt_control_pane_g1_copy4_ParamLimits

0xf405,	// (0x00045e43) eswt_control_pane_g1_copy4

0xf412,	// (0x00045e50) eswt_control_pane_g2_copy4_ParamLimits

0xf412,	// (0x00045e50) eswt_control_pane_g2_copy4

0xf41f,	// (0x00045e5d) eswt_control_pane_g3_copy4_ParamLimits

0xf41f,	// (0x00045e5d) eswt_control_pane_g3_copy4

0xf42c,	// (0x00045e6a) eswt_control_pane_g4_copy4_ParamLimits

0xf42c,	// (0x00045e6a) eswt_control_pane_g4_copy4

0xa44e,	// (0x00040e8c) eswt_ctrl_combo_button_pane

0xa456,	// (0x00040e94) eswt_ctrl_input_pane

0xa45e,	// (0x00040e9c) popup_choice_list_window_cp70

0xa466,	// (0x00040ea4) eswt_ctrl_input_pane_t1

0xb7cf,	// (0x0004220d) input_focus_pane_cp70

0xec5f,	// (0x0004569d) bg_button_pane_cp70_ParamLimits

0xec5f,	// (0x0004569d) bg_button_pane_cp70

0xa474,	// (0x00040eb2) eswt_ctrl_combo_button_pane_g1

0xf4dc,	// (0x00045f1a) wait_bar_pane_cp70

0xcfd8,	// (0x00043a16) bg_popup_window_pane_cp70_ParamLimits

0xcfd8,	// (0x00043a16) bg_popup_window_pane_cp70

0xf4e4,	// (0x00045f22) popup_eswt_tasktip_window_t1

0xf4fa,	// (0x00045f38) wait_bar_pane_cp71_ParamLimits

0xf4fa,	// (0x00045f38) wait_bar_pane_cp71

0xf506,	// (0x00045f44) grid_eswt_app_pane

0xc2f0,	// (0x00042d2e) scroll_pane_cp70

0xa47c,	// (0x00040eba) cell_eswt_app_pane_ParamLimits

0xa47c,	// (0x00040eba) cell_eswt_app_pane

0xa4a6,	// (0x00040ee4) cell_eswt_app_pane_g1_ParamLimits

0xa4a6,	// (0x00040ee4) cell_eswt_app_pane_g1

0xa4d5,	// (0x00040f13) cell_eswt_app_pane_g2_ParamLimits

0xa4d5,	// (0x00040f13) cell_eswt_app_pane_g2

0x0001,

0xfc06,	// (0x00046644) cell_eswt_app_pane_g_ParamLimits

0xfc06,	// (0x00046644) cell_eswt_app_pane_g

0xa4fe,	// (0x00040f3c) cell_eswt_app_pane_t1_ParamLimits

0xa4fe,	// (0x00040f3c) cell_eswt_app_pane_t1

0xf50f,	// (0x00045f4d) grid_highlight_pane_cp70_ParamLimits

0xf50f,	// (0x00045f4d) grid_highlight_pane_cp70

0xc877,	// (0x000432b5) set_content_pane_g1

0xcb81,	// (0x000435bf) status_small_volume_pane

0x3030,	// (0x00039a6e) status_small_volume_pane_g1

0x3038,	// (0x00039a76) volume_small2_pane

0x3041,	// (0x00039a7f) volume_small2_pane_g1

0x304a,	// (0x00039a88) volume_small2_pane_g2

0x3053,	// (0x00039a91) volume_small2_pane_g3

0x305c,	// (0x00039a9a) volume_small2_pane_g4

0x3065,	// (0x00039aa3) volume_small2_pane_g5

0x306e,	// (0x00039aac) volume_small2_pane_g6

0x3077,	// (0x00039ab5) volume_small2_pane_g7

0x3080,	// (0x00039abe) volume_small2_pane_g8

0x3089,	// (0x00039ac7) volume_small2_pane_g9

0x3092,	// (0x00039ad0) volume_small2_pane_g10

0x0009,

0xfc0b,	// (0x00046649) volume_small2_pane_g

0xef4e,	// (0x0004598c) fep_vkb_top_text_pane_g1_ParamLimits

0xa3db,	// (0x00040e19) fep_vkb_top_text_pane_t1_ParamLimits

0xf168,	// (0x00045ba6) popup_preview_fixed_window_g3_ParamLimits

0xf168,	// (0x00045ba6) popup_preview_fixed_window_g3

0x96e8,	// (0x00040126) popup_toolbar_trans_pane

0x9dbc,	// (0x000407fa) aid_height_set_list_ParamLimits

0xd8fa,	// (0x00044338) aid_size_parent_ParamLimits

0xc0cc,	// (0x00042b0a) list_highlight_pane_cp2_ParamLimits

0xc877,	// (0x000432b5) set_content_pane_g1_ParamLimits

0x9f45,	// (0x00040983) list_single_image_pane_ParamLimits

0x9f45,	// (0x00040983) list_single_image_pane

0xf51b,	// (0x00045f59) aid_size_cell_image_ParamLimits

0xf51b,	// (0x00045f59) aid_size_cell_image

0xa530,	// (0x00040f6e) grid_single_image_pane_ParamLimits

0xa530,	// (0x00040f6e) grid_single_image_pane

0xd34e,	// (0x00043d8c) list_single_image_pane_g1_ParamLimits

0xd34e,	// (0x00043d8c) list_single_image_pane_g1

0xf439,	// (0x00045e77) list_single_image_pane_g2_ParamLimits

0xf439,	// (0x00045e77) list_single_image_pane_g2

0x0001,

0xfc20,	// (0x0004665e) list_single_image_pane_g_ParamLimits

0xfc20,	// (0x0004665e) list_single_image_pane_g

0xd8e4,	// (0x00044322) list_single_image_pane_t1_ParamLimits

0xd8e4,	// (0x00044322) list_single_image_pane_t1

0xa53e,	// (0x00040f7c) cell_image_list_pane_ParamLimits

0xa53e,	// (0x00040f7c) cell_image_list_pane

0xf528,	// (0x00045f66) cell_image_list_pane_g1

0xf531,	// (0x00045f6f) cell_image_list_pane_g2

0x0001,

0xfc25,	// (0x00046663) cell_image_list_pane_g

0xf53a,	// (0x00045f78) aid_size_cell_tb_trans_pane

0xbf74,	// (0x000429b2) bg_tb_trans_pane

0xf54c,	// (0x00045f8a) grid_tb_trans_pane

0xcee8,	// (0x00043926) bg_tb_trans_pane_g1

0xcef0,	// (0x0004392e) bg_tb_trans_pane_g2

0xcef8,	// (0x00043936) bg_tb_trans_pane_g3

0xcf00,	// (0x0004393e) bg_tb_trans_pane_g4

0xcf08,	// (0x00043946) bg_tb_trans_pane_g5

0xcf20,	// (0x0004395e) bg_tb_trans_pane_g6

0xcf28,	// (0x00043966) bg_tb_trans_pane_g7

0xcf10,	// (0x0004394e) bg_tb_trans_pane_g8

0xcf18,	// (0x00043956) bg_tb_trans_pane_g9

0x0008,

0xfc2a,	// (0x00046668) bg_tb_trans_pane_g

0xf560,	// (0x00045f9e) cell_toolbar_trans_pane_ParamLimits

0xf560,	// (0x00045f9e) cell_toolbar_trans_pane

0xec9a,	// (0x000456d8) cell_toolbar_trans_pane_g1

0xa1b7,	// (0x00040bf5) list_form2_midp_pane_t1

0xa1c5,	// (0x00040c03) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x00046539) list_form2_midp_pane_t

0xe9ec,	// (0x0004542a) scroll_pane_cp51_ParamLimits

0xeb63,	// (0x000455a1) form2_midp_wait_pane_g1

0xeb6c,	// (0x000455aa) form2_midp_wait_pane_g2

0xeb75,	// (0x000455b3) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x0004654e) form2_midp_wait_pane_g

0xb83f,	// (0x0004227d) list_highlight_pane_cp21_ParamLimits

0xeb9d,	// (0x000455db) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xebac,	// (0x000455ea) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe0e4,	// (0x00044b22) list_single_2graphic_im_pane_ParamLimits

0xe0e4,	// (0x00044b22) list_single_2graphic_im_pane

0xa554,	// (0x00040f92) list_single_2graphic_im_pane_g1_ParamLimits

0xa554,	// (0x00040f92) list_single_2graphic_im_pane_g1

0xa565,	// (0x00040fa3) list_single_2graphic_im_pane_g2_ParamLimits

0xa565,	// (0x00040fa3) list_single_2graphic_im_pane_g2

0xa571,	// (0x00040faf) list_single_2graphic_im_pane_g3_ParamLimits

0xa571,	// (0x00040faf) list_single_2graphic_im_pane_g3

0x0003,

0xfc3d,	// (0x0004667b) list_single_2graphic_im_pane_g_ParamLimits

0xfc3d,	// (0x0004667b) list_single_2graphic_im_pane_g

0xa585,	// (0x00040fc3) list_single_2graphic_im_pane_t1_ParamLimits

0xa585,	// (0x00040fc3) list_single_2graphic_im_pane_t1

0xf174,	// (0x00045bb2) list_single_graphic_2heading_pane_fp_ParamLimits

0xf174,	// (0x00045bb2) list_single_graphic_2heading_pane_fp

0x0f84,	// (0x000379c2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0f84,	// (0x000379c2) list_single_graphic_2heading_pane_fp_g1

0xf189,	// (0x00045bc7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf189,	// (0x00045bc7) list_single_graphic_2heading_pane_fp_g2

0xd34e,	// (0x00043d8c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd34e,	// (0x00043d8c) list_single_graphic_2heading_pane_fp_g3

0xf439,	// (0x00045e77) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf439,	// (0x00045e77) list_single_graphic_2heading_pane_fp_g4

0xf195,	// (0x00045bd3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf195,	// (0x00045bd3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x000465be) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x000465be) list_single_graphic_2heading_pane_fp_g

0x10cd,	// (0x00037b0b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x10cd,	// (0x00037b0b) list_single_graphic_2heading_pane_fp_t1

0x0fbc,	// (0x000379fa) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0fbc,	// (0x000379fa) list_single_graphic_2heading_pane_fp_t2

0x10e3,	// (0x00037b21) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x10e3,	// (0x00037b21) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc46,	// (0x00046684) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc46,	// (0x00046684) list_single_graphic_2heading_pane_fp_t

0xed3a,	// (0x00045778) fep_hwr_write_pane_g5_ParamLimits

0xed3a,	// (0x00045778) fep_hwr_write_pane_g5

0xed46,	// (0x00045784) fep_hwr_write_pane_g6_ParamLimits

0xed46,	// (0x00045784) fep_hwr_write_pane_g6

0xf3d4,	// (0x00045e12) eswt_shell_pane_ParamLimits

0xcfd8,	// (0x00043a16) bg_popup_window_pane_cp18_ParamLimits

0xe01e,	// (0x00044a5c) heading_pane_cp70

0xf4e4,	// (0x00045f22) popup_eswt_tasktip_window_t1_ParamLimits

0x97a9,	// (0x000401e7) aid_touch_tab_arrow_left

0x97bf,	// (0x000401fd) aid_touch_tab_arrow_right

0x89e8,	// (0x0003f426) title_pane_g3_ParamLimits

0x89e8,	// (0x0003f426) title_pane_g3

0xbf33,	// (0x00042971) set_value_pane_g1

0x96e8,	// (0x00040126) popup_toolbar_trans_pane_ParamLimits

0xf53a,	// (0x00045f78) aid_size_cell_tb_trans_pane_ParamLimits

0xbf74,	// (0x000429b2) bg_tb_trans_pane_ParamLimits

0xf54c,	// (0x00045f8a) grid_tb_trans_pane_ParamLimits

0xb972,	// (0x000423b0) cont_note_pane_ParamLimits

0xb972,	// (0x000423b0) cont_note_pane

0xbbbb,	// (0x000425f9) cont_snote2_single_text_pane_ParamLimits

0xbbbb,	// (0x000425f9) cont_snote2_single_text_pane

0xbbbb,	// (0x000425f9) cont_snote2_single_graphic_pane_ParamLimits

0xbbbb,	// (0x000425f9) cont_snote2_single_graphic_pane

0xd47b,	// (0x00043eb9) cont_note_wait_pane_ParamLimits

0xd47b,	// (0x00043eb9) cont_note_wait_pane

0xd47b,	// (0x00043eb9) cont_note_image_pane_ParamLimits

0xd47b,	// (0x00043eb9) cont_note_image_pane

0x48b3,	// (0x0003b2f1) popup_note2_window_g1_ParamLimits

0x48b3,	// (0x0003b2f1) popup_note2_window_g1

0x48e4,	// (0x0003b322) popup_note2_window_t1_ParamLimits

0x48e4,	// (0x0003b322) popup_note2_window_t1

0x4929,	// (0x0003b367) popup_note2_window_t2_ParamLimits

0x4929,	// (0x0003b367) popup_note2_window_t2

0x496e,	// (0x0003b3ac) popup_note2_window_t3_ParamLimits

0x496e,	// (0x0003b3ac) popup_note2_window_t3

0x49b3,	// (0x0003b3f1) popup_note2_window_t4_ParamLimits

0x49b3,	// (0x0003b3f1) popup_note2_window_t4

0xb9f6,	// (0x00042434) popup_note2_window_t5_ParamLimits

0xb9f6,	// (0x00042434) popup_note2_window_t5

0x0004,

0xfc52,	// (0x00046690) popup_note2_window_t_ParamLimits

0xfc52,	// (0x00046690) popup_note2_window_t

0x49e2,	// (0x0003b420) popup_note2_image_window_g1_ParamLimits

0x49e2,	// (0x0003b420) popup_note2_image_window_g1

0x49ee,	// (0x0003b42c) popup_note2_image_window_g2_ParamLimits

0x49ee,	// (0x0003b42c) popup_note2_image_window_g2

0x0001,

0xfc5d,	// (0x0004669b) popup_note2_image_window_g_ParamLimits

0xfc5d,	// (0x0004669b) popup_note2_image_window_g

0x4a00,	// (0x0003b43e) popup_note2_image_window_t1_ParamLimits

0x4a00,	// (0x0003b43e) popup_note2_image_window_t1

0x4a18,	// (0x0003b456) popup_note2_image_window_t2_ParamLimits

0x4a18,	// (0x0003b456) popup_note2_image_window_t2

0x4a30,	// (0x0003b46e) popup_note2_image_window_t3_ParamLimits

0x4a30,	// (0x0003b46e) popup_note2_image_window_t3

0x0002,

0xfc62,	// (0x000466a0) popup_note2_image_window_t_ParamLimits

0xfc62,	// (0x000466a0) popup_note2_image_window_t

0xd489,	// (0x00043ec7) popup_note2_wait_window_g1_ParamLimits

0xd489,	// (0x00043ec7) popup_note2_wait_window_g1

0x4a4c,	// (0x0003b48a) popup_note2_wait_window_g2_ParamLimits

0x4a4c,	// (0x0003b48a) popup_note2_wait_window_g2

0xd4a1,	// (0x00043edf) popup_note2_wait_window_g3_ParamLimits

0xd4a1,	// (0x00043edf) popup_note2_wait_window_g3

0x0002,

0xfc69,	// (0x000466a7) popup_note2_wait_window_g_ParamLimits

0xfc69,	// (0x000466a7) popup_note2_wait_window_g

0x4a58,	// (0x0003b496) popup_note2_wait_window_t1_ParamLimits

0x4a58,	// (0x0003b496) popup_note2_wait_window_t1

0x4a76,	// (0x0003b4b4) popup_note2_wait_window_t2_ParamLimits

0x4a76,	// (0x0003b4b4) popup_note2_wait_window_t2

0x4a94,	// (0x0003b4d2) popup_note2_wait_window_t3_ParamLimits

0x4a94,	// (0x0003b4d2) popup_note2_wait_window_t3

0x4aa6,	// (0x0003b4e4) popup_note2_wait_window_t4_ParamLimits

0x4aa6,	// (0x0003b4e4) popup_note2_wait_window_t4

0x0003,

0xfc70,	// (0x000466ae) popup_note2_wait_window_t_ParamLimits

0xfc70,	// (0x000466ae) popup_note2_wait_window_t

0x4ab8,	// (0x0003b4f6) wait_bar2_pane_ParamLimits

0x4ab8,	// (0x0003b4f6) wait_bar2_pane

0x4ad0,	// (0x0003b50e) popup_snote2_single_text_window_g1_ParamLimits

0x4ad0,	// (0x0003b50e) popup_snote2_single_text_window_g1

0x4af8,	// (0x0003b536) popup_snote2_single_text_window_t1_ParamLimits

0x4af8,	// (0x0003b536) popup_snote2_single_text_window_t1

0x4b44,	// (0x0003b582) popup_snote2_single_text_window_t2_ParamLimits

0x4b44,	// (0x0003b582) popup_snote2_single_text_window_t2

0x4b90,	// (0x0003b5ce) popup_snote2_single_text_window_t3_ParamLimits

0x4b90,	// (0x0003b5ce) popup_snote2_single_text_window_t3

0x4bd1,	// (0x0003b60f) popup_snote2_single_text_window_t4_ParamLimits

0x4bd1,	// (0x0003b60f) popup_snote2_single_text_window_t4

0x4c07,	// (0x0003b645) popup_snote2_single_text_window_t5_ParamLimits

0x4c07,	// (0x0003b645) popup_snote2_single_text_window_t5

0x0004,

0xfc79,	// (0x000466b7) popup_snote2_single_text_window_t_ParamLimits

0xfc79,	// (0x000466b7) popup_snote2_single_text_window_t

0x4c32,	// (0x0003b670) popup_snote2_single_graphic_window_g1_ParamLimits

0x4c32,	// (0x0003b670) popup_snote2_single_graphic_window_g1

0x4c5a,	// (0x0003b698) popup_snote2_single_graphic_window_g2_ParamLimits

0x4c5a,	// (0x0003b698) popup_snote2_single_graphic_window_g2

0x0001,

0xfc84,	// (0x000466c2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc84,	// (0x000466c2) popup_snote2_single_graphic_window_g

0x4c82,	// (0x0003b6c0) popup_snote2_single_graphic_window_t1_ParamLimits

0x4c82,	// (0x0003b6c0) popup_snote2_single_graphic_window_t1

0x4cce,	// (0x0003b70c) popup_snote2_single_graphic_window_t2_ParamLimits

0x4cce,	// (0x0003b70c) popup_snote2_single_graphic_window_t2

0x4b90,	// (0x0003b5ce) popup_snote2_single_graphic_window_t3_ParamLimits

0x4b90,	// (0x0003b5ce) popup_snote2_single_graphic_window_t3

0x4bd1,	// (0x0003b60f) popup_snote2_single_graphic_window_t4_ParamLimits

0x4bd1,	// (0x0003b60f) popup_snote2_single_graphic_window_t4

0x4c07,	// (0x0003b645) popup_snote2_single_graphic_window_t5_ParamLimits

0x4c07,	// (0x0003b645) popup_snote2_single_graphic_window_t5

0x0004,

0xfc89,	// (0x000466c7) popup_snote2_single_graphic_window_t_ParamLimits

0xfc89,	// (0x000466c7) popup_snote2_single_graphic_window_t

0xe9a2,	// (0x000453e0) clock_nsta_pane_cp2_t1

0xe9a2,	// (0x000453e0) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x0004650f) clock_nsta_pane_cp2_t

0x09c0,	// (0x000373fe) form_field_data_wide_pane_g1_ParamLimits

0xbf8e,	// (0x000429cc) form_field_data_wide_pane_g2_ParamLimits

0xbf8e,	// (0x000429cc) form_field_data_wide_pane_g2

0xbf9a,	// (0x000429d8) form_field_data_wide_pane_g3_ParamLimits

0xbf9a,	// (0x000429d8) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x000460f8) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x000460f8) form_field_data_wide_pane_g

0xa0d1,	// (0x00040b0f) grid_touch_3_pane_ParamLimits

0xa0d1,	// (0x00040b0f) grid_touch_3_pane

0xa5b6,	// (0x00040ff4) cell_touch_3_pane_ParamLimits

0xa5b6,	// (0x00040ff4) cell_touch_3_pane

0xec9a,	// (0x000456d8) cell_touch_3_pane_g1

0xec9a,	// (0x000456d8) cell_touch_3_pane_g2

0x0001,

0xfb51,	// (0x0004658f) cell_touch_3_pane_g

0xba28,	// (0x00042466) cont_query_data_pane

0xba30,	// (0x0004246e) cont_query_data_pane_cp1

0x4d48,	// (0x0003b786) button_value_adjust_pane_cp7

0x4d50,	// (0x0003b78e) query_popup_pane_cp3

0xc511,	// (0x00042f4f) bg_popup_sub_pane_cp22_ParamLimits

0x1dd4,	// (0x00038812) navi_navi_volume_pane_cp2

0x1def,	// (0x0003882d) popup_side_volume_key_window_g2

0x1dfe,	// (0x0003883c) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0004618a) popup_side_volume_key_window_g

0x1e1b,	// (0x00038859) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x00046191) popup_side_volume_key_window_t

0xc741,	// (0x0004317f) popup_side_volume_key_window_ParamLimits

0x797f,	// (0x0003e3bd) list_double_graphic_pane_g4_ParamLimits

0x797f,	// (0x0003e3bd) list_double_graphic_pane_g4

0x9f32,	// (0x00040970) list_single_2heading_msg_pane_ParamLimits

0x9f32,	// (0x00040970) list_single_2heading_msg_pane

0x8508,	// (0x0003ef46) list_single_2heading_msg_pane_g1_ParamLimits

0x8508,	// (0x0003ef46) list_single_2heading_msg_pane_g1

0x8514,	// (0x0003ef52) list_single_2heading_msg_pane_g2_ParamLimits

0x8514,	// (0x0003ef52) list_single_2heading_msg_pane_g2

0x8527,	// (0x0003ef65) list_single_2heading_msg_pane_g3_ParamLimits

0x8527,	// (0x0003ef65) list_single_2heading_msg_pane_g3

0x8533,	// (0x0003ef71) list_single_2heading_msg_pane_g4_ParamLimits

0x8533,	// (0x0003ef71) list_single_2heading_msg_pane_g4

0x0003,

0xfc94,	// (0x000466d2) list_single_2heading_msg_pane_g_ParamLimits

0xfc94,	// (0x000466d2) list_single_2heading_msg_pane_g

0x7e97,	// (0x0003e8d5) list_single_2heading_msg_pane_t1_ParamLimits

0x7e97,	// (0x0003e8d5) list_single_2heading_msg_pane_t1

0x7ebf,	// (0x0003e8fd) list_single_2heading_msg_pane_t2_ParamLimits

0x7ebf,	// (0x0003e8fd) list_single_2heading_msg_pane_t2

0x7f2a,	// (0x0003e968) list_single_2heading_msg_pane_t3_ParamLimits

0x7f2a,	// (0x0003e968) list_single_2heading_msg_pane_t3

0x1198,	// (0x00037bd6) list_single_2heading_msg_pane_t4_ParamLimits

0x1198,	// (0x00037bd6) list_single_2heading_msg_pane_t4

0x0003,

0xfc9d,	// (0x000466db) list_single_2heading_msg_pane_t_ParamLimits

0xfc9d,	// (0x000466db) list_single_2heading_msg_pane_t

0xb7ed,	// (0x0004222b) title_pane_g4_ParamLimits

0xb7ed,	// (0x0004222b) title_pane_g4

0x1af8,	// (0x00038536) title_pane_stacon_g3_ParamLimits

0x1af8,	// (0x00038536) title_pane_stacon_g3

0xf586,	// (0x00045fc4) list_single_2graphic_im_pane_g4_ParamLimits

0xf586,	// (0x00045fc4) list_single_2graphic_im_pane_g4

0xde36,	// (0x00044874) popup_side_volume_key_window_cp

0xe30f,	// (0x00044d4d) main_idle_act2_pane_t1

0x2758,	// (0x00039196) toolbar_button_pane_g10

0x8d55,	// (0x0003f793) popup_toolbar_window_cp1

0xe993,	// (0x000453d1) clock_nsta_pane_cp_t1

0xe993,	// (0x000453d1) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x0004650a) clock_nsta_pane_cp_t

0x1dd4,	// (0x00038812) navi_navi_volume_pane_cp2_ParamLimits

0x1de3,	// (0x00038821) popup_side_volume_key_window_g1_ParamLimits

0x1def,	// (0x0003882d) popup_side_volume_key_window_g2_ParamLimits

0x1dfe,	// (0x0003883c) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0004618a) popup_side_volume_key_window_g_ParamLimits

0x2cbc,	// (0x000396fa) fep_hwr_aid_pane

0x84ad,	// (0x0003eeeb) bg_fep_hwr_top_pane_g4_ParamLimits

0xed0a,	// (0x00045748) fep_hwr_top_pane_g1_ParamLimits

0xed1c,	// (0x0004575a) fep_hwr_top_pane_g2_ParamLimits

0x2d75,	// (0x000397b3) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x0004655f) fep_hwr_top_pane_g_ParamLimits

0x2d8a,	// (0x000397c8) fep_hwr_top_text_pane_ParamLimits

0xdbf9,	// (0x00044637) aid_touch_tab_arrow_arrow_2

0xdc02,	// (0x00044640) aid_touch_tab_arrow_left_2

0x2cd0,	// (0x0003970e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2d07,	// (0x00039745) fep_hwr_prediction_pane

0xee09,	// (0x00045847) fep_vkb_prediction_pane

0xa3bb,	// (0x00040df9) fep_vkb_side_pane_g3_ParamLimits

0xa3bb,	// (0x00040df9) fep_vkb_side_pane_g3

0xee41,	// (0x0004587f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xf1e9,	// (0x00045c27) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xf1f6,	// (0x00045c34) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x000465f6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x4d75,	// (0x0003b7b3) fep_hwr_prediction_pane_g1

0x30cb,	// (0x00039b09) fep_hwr_prediction_pane_g2

0x30d3,	// (0x00039b11) fep_hwr_prediction_pane_g3

0x30db,	// (0x00039b19) fep_hwr_prediction_pane_g4

0x0003,

0xfca6,	// (0x000466e4) fep_hwr_prediction_pane_g

0x4d75,	// (0x0003b7b3) fep_vkb_prediction_pane_g1

0x4d7f,	// (0x0003b7bd) fep_vkb_prediction_pane_g2

0x4d87,	// (0x0003b7c5) fep_vkb_prediction_pane_g3

0x4d8f,	// (0x0003b7cd) fep_vkb_prediction_pane_g4

0x0003,

0xfcaf,	// (0x000466ed) fep_vkb_prediction_pane_g

0x2a34,	// (0x00039472) slider_set_pane_g3

0x2a48,	// (0x00039486) slider_set_pane_g4

0x2a60,	// (0x0003949e) slider_set_pane_g5

0x2a34,	// (0x00039472) slider_set_pane_g6

0x2a76,	// (0x000394b4) slider_set_pane_g7

0xe0a9,	// (0x00044ae7) slider_form_pane_g3

0xe0b2,	// (0x00044af0) slider_form_pane_g4

0xe0ba,	// (0x00044af8) slider_form_pane_g5

0xe0a9,	// (0x00044ae7) slider_form_pane_g6

0x9f07,	// (0x00040945) slider_form_pane_g7

0xe561,	// (0x00044f9f) slider_set_pane_vc_g3

0xe56a,	// (0x00044fa8) slider_set_pane_vc_g4

0xe573,	// (0x00044fb1) slider_set_pane_vc_g5

0xe561,	// (0x00044f9f) slider_set_pane_vc_g6

0xe57c,	// (0x00044fba) slider_set_pane_vc_g7

0xe561,	// (0x00044f9f) slider_form_pane_vc_g1

0xe56a,	// (0x00044fa8) slider_form_pane_vc_g2

0xe573,	// (0x00044fb1) slider_form_pane_vc_g3

0xe561,	// (0x00044f9f) slider_form_pane_vc_g4

0xe72f,	// (0x0004516d) slider_form_pane_vc_g5

0x0004,

0xfab2,	// (0x000464f0) slider_form_pane_vc_g

0xb7cf,	// (0x0004220d) main_idle_act3_pane

0x4d97,	// (0x0003b7d5) ai3_links_pane

0xa5ff,	// (0x0004103d) popup_ai3_data_window_ParamLimits

0xa5ff,	// (0x0004103d) popup_ai3_data_window

0xb7cf,	// (0x0004220d) grid_ai3_links_pane

0xa619,	// (0x00041057) cell_ai3_links_pane_ParamLimits

0xa619,	// (0x00041057) cell_ai3_links_pane

0x4dd2,	// (0x0003b810) bg_popup_sub_pane_cp11

0x4ddf,	// (0x0003b81d) cell_ai3_links_pane_g1

0xb7cf,	// (0x0004220d) bg_popup_sub_pane_cp12

0x4e04,	// (0x0003b842) heading_ai3_data_pane

0x4e0c,	// (0x0003b84a) list_ai3_gene_pane

0x4e18,	// (0x0003b856) popup_ai3_data_window_g1

0x4e20,	// (0x0003b85e) heading_ai3_data_pane_g1

0x4e28,	// (0x0003b866) heading_ai3_data_pane_t1

0x4e36,	// (0x0003b874) list_double_ai3_gene_pane_ParamLimits

0x4e36,	// (0x0003b874) list_double_ai3_gene_pane

0x4e43,	// (0x0003b881) list_single_ai3_gene_pane_ParamLimits

0x4e43,	// (0x0003b881) list_single_ai3_gene_pane

0xec5f,	// (0x0004569d) list_highlight_pane_cp7_ParamLimits

0xec5f,	// (0x0004569d) list_highlight_pane_cp7

0x4e50,	// (0x0003b88e) list_single_a13_gene_pane_t1_ParamLimits

0x4e50,	// (0x0003b88e) list_single_a13_gene_pane_t1

0x4e67,	// (0x0003b8a5) list_single_ai3_gene_pane_g1

0x4e70,	// (0x0003b8ae) list_single_ai3_gene_pane_g2

0x0001,

0xfcb8,	// (0x000466f6) list_single_ai3_gene_pane_g

0x4e78,	// (0x0003b8b6) list_double_ai3_gene_pane_g1_ParamLimits

0x4e78,	// (0x0003b8b6) list_double_ai3_gene_pane_g1

0x4e84,	// (0x0003b8c2) list_double_ai3_gene_pane_t1_ParamLimits

0x4e84,	// (0x0003b8c2) list_double_ai3_gene_pane_t1

0x4ea0,	// (0x0003b8de) list_double_ai3_gene_pane_t2_ParamLimits

0x4ea0,	// (0x0003b8de) list_double_ai3_gene_pane_t2

0x4eb6,	// (0x0003b8f4) list_double_ai3_gene_pane_t3_ParamLimits

0x4eb6,	// (0x0003b8f4) list_double_ai3_gene_pane_t3

0x0002,

0xfcbd,	// (0x000466fb) list_double_ai3_gene_pane_t_ParamLimits

0xfcbd,	// (0x000466fb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x10f9,	// (0x00037b37) aid_size_min_col_2

0xa5e9,	// (0x00041027) aid_size_min_msg_ParamLimits

0xa5e9,	// (0x00041027) aid_size_min_msg

0xa3cf,	// (0x00040e0d) fep_vkb_top_text_pane_g2_ParamLimits

0xa3cf,	// (0x00040e0d) fep_vkb_top_text_pane_g2

0x0001,

0xfb4c,	// (0x0004658a) fep_vkb_top_text_pane_g_ParamLimits

0xfb4c,	// (0x0004658a) fep_vkb_top_text_pane_g

0xb7cf,	// (0x0004220d) main_hc_apps_shell_pane

0x4ed3,	// (0x0003b911) grid_hc_apps_pane_ParamLimits

0x4ed3,	// (0x0003b911) grid_hc_apps_pane

0x4ee2,	// (0x0003b920) list_hc_apps_pane

0x4eea,	// (0x0003b928) scroll_pane_cp37_ParamLimits

0x4eea,	// (0x0003b928) scroll_pane_cp37

0xa633,	// (0x00041071) cell_hc_apps_pane_ParamLimits

0xa633,	// (0x00041071) cell_hc_apps_pane

0xa6f1,	// (0x0004112f) cell_hc_apps_pane_g1_ParamLimits

0xa6f1,	// (0x0004112f) cell_hc_apps_pane_g1

0x4fd5,	// (0x0003ba13) cell_hc_apps_pane_g2_ParamLimits

0x4fd5,	// (0x0003ba13) cell_hc_apps_pane_g2

0x4ff1,	// (0x0003ba2f) cell_hc_apps_pane_g3_ParamLimits

0x4ff1,	// (0x0003ba2f) cell_hc_apps_pane_g3

0x0002,

0xfcc4,	// (0x00046702) cell_hc_apps_pane_g_ParamLimits

0xfcc4,	// (0x00046702) cell_hc_apps_pane_g

0xa71e,	// (0x0004115c) cell_hc_apps_pane_t1_ParamLimits

0xa71e,	// (0x0004115c) cell_hc_apps_pane_t1

0xb972,	// (0x000423b0) grid_highlight_pane_cp10_ParamLimits

0xb972,	// (0x000423b0) grid_highlight_pane_cp10

0xa75c,	// (0x0004119a) list_single_hc_apps_pane_ParamLimits

0xa75c,	// (0x0004119a) list_single_hc_apps_pane

0xa789,	// (0x000411c7) list_single_hc_apps_pane_g1

0x854b,	// (0x0003ef89) list_single_hc_apps_pane_g2

0x0001,

0xfccb,	// (0x00046709) list_single_hc_apps_pane_g

0x8564,	// (0x0003efa2) list_single_hc_apps_pane_g2_copy1

0x11bd,	// (0x00037bfb) list_single_hc_apps_pane_t1

0xb83f,	// (0x0004227d) bg_set_opt_pane_cp_ParamLimits

0x16d4,	// (0x00038112) setting_slider_pane_t1_ParamLimits

0x16ed,	// (0x0003812b) setting_slider_pane_t2_ParamLimits

0x1707,	// (0x00038145) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00045fe0) setting_slider_pane_t_ParamLimits

0x171f,	// (0x0003815d) slider_set_pane_ParamLimits

0x21d0,	// (0x00038c0e) control_pane_g5_ParamLimits

0x21d0,	// (0x00038c0e) control_pane_g5

0xe065,	// (0x00044aa3) slider_set_pane_g1_ParamLimits

0x2a28,	// (0x00039466) slider_set_pane_g2_ParamLimits

0x2a34,	// (0x00039472) slider_set_pane_g3_ParamLimits

0x2a48,	// (0x00039486) slider_set_pane_g4_ParamLimits

0x2a60,	// (0x0003949e) slider_set_pane_g5_ParamLimits

0x2a34,	// (0x00039472) slider_set_pane_g6_ParamLimits

0x2a76,	// (0x000394b4) slider_set_pane_g7_ParamLimits

0xf98c,	// (0x000463ca) slider_set_pane_g_ParamLimits

0xc822,	// (0x00043260) navi_icon_text_pane_ParamLimits

0x9775,	// (0x000401b3) aid_fill_nsta_2_ParamLimits

0x97a9,	// (0x000401e7) aid_touch_tab_arrow_left_ParamLimits

0x97bf,	// (0x000401fd) aid_touch_tab_arrow_right_ParamLimits

0x985a,	// (0x00040298) clock_nsta_pane_ParamLimits

0x9ce3,	// (0x00040721) navi_icon_pane_g1_ParamLimits

0x9cef,	// (0x0004072d) navi_text_pane_t1_ParamLimits

0xa199,	// (0x00040bd7) navi_icon_text_pane_g1_ParamLimits

0xa1a5,	// (0x00040be3) navi_icon_text_pane_t1_ParamLimits

0xa789,	// (0x000411c7) list_single_hc_apps_pane_g1_ParamLimits

0x854b,	// (0x0003ef89) list_single_hc_apps_pane_g2_ParamLimits

0xfccb,	// (0x00046709) list_single_hc_apps_pane_g_ParamLimits

0x8564,	// (0x0003efa2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x11bd,	// (0x00037bfb) list_single_hc_apps_pane_t1_ParamLimits

0x80ea,	// (0x0003eb28) popup_toolbar2_fixed_window_ParamLimits

0x80ea,	// (0x0003eb28) popup_toolbar2_fixed_window

0x96de,	// (0x0004011c) popup_toolbar2_float_window

0xb7cf,	// (0x0004220d) bg_popup_sub_pane_cp27

0x50c8,	// (0x0003bb06) grid_toolbar2_float_pane

0xb7cf,	// (0x0004220d) bg_popup_sub_pane_cp26

0x50c8,	// (0x0003bb06) grid_toolbar2_fixed_pane

0xa7a2,	// (0x000411e0) cell_toolbar2_fixed_pane_ParamLimits

0xa7a2,	// (0x000411e0) cell_toolbar2_fixed_pane

0xa7bd,	// (0x000411fb) cell_toolbar2_fixed_pane_g1

0x50e9,	// (0x0003bb27) toolbar2_fixed_button_pane

0xcee8,	// (0x00043926) toolbar2_fixed_button_pane_g1

0xcef0,	// (0x0004392e) toolbar2_fixed_button_pane_g2

0xcef8,	// (0x00043936) toolbar2_fixed_button_pane_g3

0xcf00,	// (0x0004393e) toolbar2_fixed_button_pane_g4

0xcf08,	// (0x00043946) toolbar2_fixed_button_pane_g5

0xcf10,	// (0x0004394e) toolbar2_fixed_button_pane_g6

0xcf18,	// (0x00043956) toolbar2_fixed_button_pane_g7

0xcf20,	// (0x0004395e) toolbar2_fixed_button_pane_g8

0xcf28,	// (0x00043966) toolbar2_fixed_button_pane_g9

0x0008,

0xf88e,	// (0x000462cc) toolbar2_fixed_button_pane_g

0x50f1,	// (0x0003bb2f) cell_toolbar2_float_pane_ParamLimits

0x50f1,	// (0x0003bb2f) cell_toolbar2_float_pane

0x5102,	// (0x0003bb40) cell_toolbar2_float_pane_g1

0x50e9,	// (0x0003bb27) toolbar2_fixed_button_pane_cp

0xa2a9,	// (0x00040ce7) fep_vkb_accented_list_pane_ParamLimits

0xa2a9,	// (0x00040ce7) fep_vkb_accented_list_pane

0x2ed8,	// (0x00039916) bg_popup_fep_shadow_pane_g9

0xc9a2,	// (0x000433e0) bg_popup_fep_shadow_pane_cp3

0xc07a,	// (0x00042ab8) list_accented_list_pane

0x510b,	// (0x0003bb49) list_single_accented_list_pane_ParamLimits

0x510b,	// (0x0003bb49) list_single_accented_list_pane

0xc9a2,	// (0x000433e0) list_highlight_pane_cp10

0x511c,	// (0x0003bb5a) list_single_accented_list_pane_t1

0x9608,	// (0x00040046) popup_slider_window_ParamLimits

0x9608,	// (0x00040046) popup_slider_window

0x4d58,	// (0x0003b796) aid_indentation_list_msg

0xa8b6,	// (0x000412f4) bg_popup_window_pane_cp19

0x5240,	// (0x0003bc7e) popup_slider_window_g1

0x525c,	// (0x0003bc9a) popup_slider_window_g2

0x5278,	// (0x0003bcb6) popup_slider_window_g3

0x0005,

0xfcd0,	// (0x0004670e) popup_slider_window_g

0x52d4,	// (0x0003bd12) popup_slider_window_t1

0x5348,	// (0x0003bd86) small_volume_slider_vertical_pane

0xec9a,	// (0x000456d8) small_volume_slider_vertical_pane_g1

0xec9a,	// (0x000456d8) small_volume_slider_vertical_pane_g2

0x5364,	// (0x0003bda2) small_volume_slider_vertical_pane_g3

0x0002,

0xfce2,	// (0x00046720) small_volume_slider_vertical_pane_g

0x8058,	// (0x0003ea96) area_side_right_pane_ParamLimits

0x8058,	// (0x0003ea96) area_side_right_pane

0x8580,	// (0x0003efbe) aid_size_side_button_ParamLimits

0x8580,	// (0x0003efbe) aid_size_side_button

0x8599,	// (0x0003efd7) grid_sctrl_middle_pane_ParamLimits

0x8599,	// (0x0003efd7) grid_sctrl_middle_pane

0x314c,	// (0x00039b8a) sctrl_sk_bottom_pane

0x315d,	// (0x00039b9b) sctrl_sk_top_pane

0x316f,	// (0x00039bad) aid_touch_sctrl_top

0xb972,	// (0x000423b0) bg_sctrl_sk_pane_ParamLimits

0xb972,	// (0x000423b0) bg_sctrl_sk_pane

0x317c,	// (0x00039bba) sctrl_sk_top_pane_g1

0x3189,	// (0x00039bc7) sctrl_sk_top_pane_t1

0x316f,	// (0x00039bad) aid_touch_sctrl_bottom

0xb972,	// (0x000423b0) bg_sctrl_sk_pane_cp_ParamLimits

0xb972,	// (0x000423b0) bg_sctrl_sk_pane_cp

0x31a4,	// (0x00039be2) sctrl_sk_bottom_pane_g1

0x3189,	// (0x00039bc7) sctrl_sk_bottom_pane_t1

0x85b3,	// (0x0003eff1) cell_sctrl_middle_pane_ParamLimits

0x85b3,	// (0x0003eff1) cell_sctrl_middle_pane

0x85c4,	// (0x0003f002) aid_touch_sctrl_middle_ParamLimits

0x85c4,	// (0x0003f002) aid_touch_sctrl_middle

0x85d1,	// (0x0003f00f) bg_sctrl_middle_pane_ParamLimits

0x85d1,	// (0x0003f00f) bg_sctrl_middle_pane

0x53ec,	// (0x0003be2a) cell_sctrl_middle_pane_g1_ParamLimits

0x53ec,	// (0x0003be2a) cell_sctrl_middle_pane_g1

0x85df,	// (0x0003f01d) cell_sctrl_middle_pane_g2_ParamLimits

0x85df,	// (0x0003f01d) cell_sctrl_middle_pane_g2

0x0001,

0xfcee,	// (0x0004672c) cell_sctrl_middle_pane_g_ParamLimits

0xfcee,	// (0x0004672c) cell_sctrl_middle_pane_g

0xcee8,	// (0x00043926) bg_sctrl_middle_pane_g1

0xcef0,	// (0x0004392e) bg_sctrl_middle_pane_g2

0xcef8,	// (0x00043936) bg_sctrl_middle_pane_g3

0xcf00,	// (0x0004393e) bg_sctrl_middle_pane_g4

0xcf08,	// (0x00043946) bg_sctrl_middle_pane_g5

0xcf10,	// (0x0004394e) bg_sctrl_middle_pane_g6

0xcf18,	// (0x00043956) bg_sctrl_middle_pane_g7

0xcf20,	// (0x0004395e) bg_sctrl_middle_pane_g8

0x0007,

0x023c,	// (0x00036c7a) bg_sctrl_middle_pane_g

0xcf28,	// (0x00043966) bg_sctrl_middle_pane_g8_copy1

0xcee8,	// (0x00043926) bg_sctrl_sk_pane_g1

0xcef0,	// (0x0004392e) bg_sctrl_sk_pane_g2

0xcef8,	// (0x00043936) bg_sctrl_sk_pane_g3

0x0008,

0xf88e,	// (0x000462cc) bg_sctrl_sk_pane_g

0xbead,	// (0x000428eb) aid_size_touch_scroll_bar

0xcf00,	// (0x0004393e) bg_sctrl_sk_pane_g4

0xcf08,	// (0x00043946) bg_sctrl_sk_pane_g5

0xcf10,	// (0x0004394e) bg_sctrl_sk_pane_g6

0xcf18,	// (0x00043956) bg_sctrl_sk_pane_g7

0xcf20,	// (0x0004395e) bg_sctrl_sk_pane_g8

0xcf28,	// (0x00043966) bg_sctrl_sk_pane_g9

0xcc1e,	// (0x0004365c) popup_fep_china_hwr2_fs_candidate_window

0x914c,	// (0x0003fb8a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x914c,	// (0x0003fb8a) popup_fep_china_hwr2_fs_control_window

0xee41,	// (0x0004587f) sctrl_sk_top_pane_g2

0x0001,

0xfce9,	// (0x00046727) sctrl_sk_top_pane_g

0xa96e,	// (0x000413ac) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa96e,	// (0x000413ac) aid_fep_china_hwr2_fs_cell

0xa982,	// (0x000413c0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa982,	// (0x000413c0) bg_popup_fep_shadow_pane_cp4

0xa999,	// (0x000413d7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa999,	// (0x000413d7) bg_popup_fep_shadow_pane_cp5

0xa9ab,	// (0x000413e9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa9ab,	// (0x000413e9) popup_fep_china_hwr2_fs_control_bar_grid

0xa9bf,	// (0x000413fd) popup_fep_china_hwr2_fs_control_funtion_grid

0x53c0,	// (0x0003bdfe) aid_fep_china_hwr2_fs_candi_cell

0xb7cf,	// (0x0004220d) bg_popup_fep_shadow_pane_cp6

0x53ca,	// (0x0003be08) popup_fep_china_hwr2_fs_candidate_grid

0xa9c7,	// (0x00041405) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa9c7,	// (0x00041405) cell_fep_china_hwr2_fs_funtion_grid

0xec9a,	// (0x000456d8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x53ec,	// (0x0003be2a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x53ec,	// (0x0003be2a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x53fa,	// (0x0003be38) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x53fa,	// (0x0003be38) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf3,	// (0x00046731) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf3,	// (0x00046731) cell_fep_china_hwr2_fs_funtion_grid_g

0xa9df,	// (0x0004141d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa9df,	// (0x0004141d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa9f4,	// (0x00041432) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa9f4,	// (0x00041432) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf8,	// (0x00046736) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf8,	// (0x00046736) cell_fep_china_hwr2_fs_funtion_grid_t

0x5441,	// (0x0003be7f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5449,	// (0x0003be87) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5451,	// (0x0003be8f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfd,	// (0x0004673b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5459,	// (0x0003be97) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5459,	// (0x0003be97) cell_fep_china_hwr2_fs_candidate_grid

0x5472,	// (0x0003beb0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x547a,	// (0x0003beb8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xec9a,	// (0x000456d8) cell_fep_china_hwr2_fs_candidate_grid_g1

0xec9a,	// (0x000456d8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb51,	// (0x0004658f) cell_fep_china_hwr2_fs_candidate_grid_g

0x5482,	// (0x0003bec0) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcd35,	// (0x00043773) clock_nsta_pane_cp_24_ParamLimits

0xcd35,	// (0x00043773) clock_nsta_pane_cp_24

0xcd9d,	// (0x000437db) indicator_nsta_pane_cp_24_ParamLimits

0xcd9d,	// (0x000437db) indicator_nsta_pane_cp_24

0xdb03,	// (0x00044541) heading_pane_g1

0x0001,

0xf8f3,	// (0x00046331) heading_pane_g

0xe19c,	// (0x00044bda) grid_sct_catagory_button_pane

0xd90c,	// (0x0004434a) scroll_pane_cp5_ParamLimits

0xe9f8,	// (0x00045436) button_value_adjust_pane_cp5_ParamLimits

0xe9f8,	// (0x00045436) button_value_adjust_pane_cp5

0xeab6,	// (0x000454f4) form2_midp_time_pane_ParamLimits

0x5490,	// (0x0003bece) cell_sct_catagory_button_pane_ParamLimits

0x5490,	// (0x0003bece) cell_sct_catagory_button_pane

0xec5f,	// (0x0004569d) bg_button_pane_cp01_ParamLimits

0xec5f,	// (0x0004569d) bg_button_pane_cp01

0xec9a,	// (0x000456d8) cell_sct_catagory_button_pane_g1

0x9681,	// (0x000400bf) popup_tb_extension_window

0xaa10,	// (0x0004144e) aid_size_cell_ext_ParamLimits

0xaa10,	// (0x0004144e) aid_size_cell_ext

0xbbbb,	// (0x000425f9) bg_tb_trans_pane_cp1_ParamLimits

0xbbbb,	// (0x000425f9) bg_tb_trans_pane_cp1

0xaa36,	// (0x00041474) grid_tb_ext_pane_ParamLimits

0xaa36,	// (0x00041474) grid_tb_ext_pane

0xaa71,	// (0x000414af) cell_tb_ext_pane_ParamLimits

0xaa71,	// (0x000414af) cell_tb_ext_pane

0xaa99,	// (0x000414d7) cell_tb_ext_pane_g1_ParamLimits

0xaa99,	// (0x000414d7) cell_tb_ext_pane_g1

0x5524,	// (0x0003bf62) cell_tb_ext_pane_t1

0xb972,	// (0x000423b0) list_highlight_pane_cp11_ParamLimits

0xb972,	// (0x000423b0) list_highlight_pane_cp11

0x1541,	// (0x00037f7f) popup_uni_indicator_window_ParamLimits

0x1541,	// (0x00037f7f) popup_uni_indicator_window

0xbf74,	// (0x000429b2) bg_popup_sub_pane_cp14

0x553f,	// (0x0003bf7d) list_uniindi_pane

0x554b,	// (0x0003bf89) uniindi_top_pane

0xb972,	// (0x000423b0) bg_uniindi_top_pane

0x556a,	// (0x0003bfa8) uniindi_top_pane_g1

0x5580,	// (0x0003bfbe) uniindi_top_pane_g2

0x0003,

0xfd04,	// (0x00046742) uniindi_top_pane_g

0x55aa,	// (0x0003bfe8) uniindi_top_pane_t1

0x55d4,	// (0x0003c012) list_single_uniindi_pane_ParamLimits

0x55d4,	// (0x0003c012) list_single_uniindi_pane

0xec9a,	// (0x000456d8) bg_uniindi_top_pane_g1

0x55e7,	// (0x0003c025) list_single_uniindi_pane_g1

0x55fa,	// (0x0003c038) list_single_uniindi_pane_t1

0xb7cf,	// (0x0004220d) control_bg_pane

0x561f,	// (0x0003c05d) bg_sctrl_sk_pane_cp1

0x5628,	// (0x0003c066) bg_sctrl_sk_pane_cp2

0x5631,	// (0x0003c06f) control_bg_pane_g1

0x563a,	// (0x0003c078) control_bg_pane_g2

0x0001,

0xfd0d,	// (0x0004674b) control_bg_pane_g

0xe8f9,	// (0x00045337) cell_indicator_nsta_pane_g1_ParamLimits

0xa100,	// (0x00040b3e) cell_indicator_nsta_pane_g2_ParamLimits

0xfac7,	// (0x00046505) cell_indicator_nsta_pane_g_ParamLimits

0x0f5a,	// (0x00037998) form2_midp_time_pane_t1_ParamLimits

0xe951,	// (0x0004538f) main_idle_act4_pane_ParamLimits

0xe951,	// (0x0004538f) main_idle_act4_pane

0x9681,	// (0x000400bf) popup_tb_extension_window_ParamLimits

0xaa58,	// (0x00041496) tb_ext_find_pane_ParamLimits

0xaa58,	// (0x00041496) tb_ext_find_pane

0x5643,	// (0x0003c081) ai_gene_pane_1_cp1

0xca24,	// (0x00043462) ai_gene_pane_2_cp1

0x564b,	// (0x0003c089) list_single_idle_plugin_calendar_pane

0x5654,	// (0x0003c092) list_single_idle_plugin_notification_pane

0x565d,	// (0x0003c09b) list_single_idle_plugin_player_pane

0xaab6,	// (0x000414f4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xaab6,	// (0x000414f4) list_single_idle_plugin_shortcut_pane

0xaade,	// (0x0004151c) main_idle_act4_pane_t1

0xaaf4,	// (0x00041532) main_idle_act4_pane_t2

0x0001,

0xfd12,	// (0x00046750) main_idle_act4_pane_t

0xab0a,	// (0x00041548) middle_sk_idle_act4_pane_ParamLimits

0xab0a,	// (0x00041548) middle_sk_idle_act4_pane

0xab26,	// (0x00041564) popup_clock_digital_analogue_window_cp2

0xab4e,	// (0x0004158c) shortcut_wheel_idle_act4_pane_ParamLimits

0xab4e,	// (0x0004158c) shortcut_wheel_idle_act4_pane

0xec9a,	// (0x000456d8) shortcut_wheel_idle_act4_pane_g1

0xec9a,	// (0x000456d8) shortcut_wheel_idle_act4_pane_g2

0xec9a,	// (0x000456d8) shortcut_wheel_idle_act4_pane_g3

0xec9a,	// (0x000456d8) shortcut_wheel_idle_act4_pane_g4

0xec9a,	// (0x000456d8) shortcut_wheel_idle_act4_pane_g5

0x56f0,	// (0x0003c12e) shortcut_wheel_idle_act4_pane_g6

0x56f8,	// (0x0003c136) shortcut_wheel_idle_act4_pane_g7

0x5700,	// (0x0003c13e) shortcut_wheel_idle_act4_pane_g8

0x5708,	// (0x0003c146) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd17,	// (0x00046755) shortcut_wheel_idle_act4_pane_g

0x84ad,	// (0x0003eeeb) middle_sk_idle_act4_pane_g1_ParamLimits

0x84ad,	// (0x0003eeeb) middle_sk_idle_act4_pane_g1

0xabcb,	// (0x00041609) middle_sk_idle_act4_pane_g2_ParamLimits

0xabcb,	// (0x00041609) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3a,	// (0x00046778) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3a,	// (0x00046778) middle_sk_idle_act4_pane_g

0xabe3,	// (0x00041621) middle_sk_idle_act4_pane_t1_ParamLimits

0xabe3,	// (0x00041621) middle_sk_idle_act4_pane_t1

0xac12,	// (0x00041650) grid_ai_shortcut_pane_ParamLimits

0xac12,	// (0x00041650) grid_ai_shortcut_pane

0xac2f,	// (0x0004166d) list_highlight_pane_cp16_ParamLimits

0xac2f,	// (0x0004166d) list_highlight_pane_cp16

0xac3c,	// (0x0004167a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xac3c,	// (0x0004167a) list_single_idle_plugin_shortcut_pane_g1

0xac48,	// (0x00041686) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xac48,	// (0x00041686) list_single_idle_plugin_shortcut_pane_g2

0xac64,	// (0x000416a2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xac64,	// (0x000416a2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3f,	// (0x0004677d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3f,	// (0x0004677d) list_single_idle_plugin_shortcut_pane_g

0xac79,	// (0x000416b7) cell_ai_shortcut_pane_ParamLimits

0xac79,	// (0x000416b7) cell_ai_shortcut_pane

0xac8f,	// (0x000416cd) cell_ai_shortcut_pane_g1_ParamLimits

0xac8f,	// (0x000416cd) cell_ai_shortcut_pane_g1

0x5643,	// (0x0003c081) ai_gene_pane_1_cp2

0x5838,	// (0x0003c276) ai_gene_pane_2_cp2

0x5840,	// (0x0003c27e) list_highlight_pane_cp15

0x5849,	// (0x0003c287) list_single_idle_plugin_calendar_pane_g1

0x5840,	// (0x0003c27e) list_highlight_pane_cp17

0x5851,	// (0x0003c28f) list_single_idle_plugin_calendar_pane_g1_copy1

0x5859,	// (0x0003c297) list_single_idle_plugin_player_pane_g1

0xe39b,	// (0x00044dd9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd46,	// (0x00046784) list_single_idle_plugin_player_pane_g

0x5861,	// (0x0003c29f) list_single_idle_plugin_player_pane_t1

0x586f,	// (0x0003c2ad) list_single_idle_plugin_player_pane_t2

0x587d,	// (0x0003c2bb) list_single_idle_plugin_player_pane_t3

0x588b,	// (0x0003c2c9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4b,	// (0x00046789) list_single_idle_plugin_player_pane_t

0x5899,	// (0x0003c2d7) wait_bar_pane_cp15

0x58a1,	// (0x0003c2df) grid_ai_notification_pane

0xe39b,	// (0x00044dd9) list_single_idle_plugin_notification_pane_g1

0xacb1,	// (0x000416ef) cell_ai_notification_pane_ParamLimits

0xacb1,	// (0x000416ef) cell_ai_notification_pane

0x58b7,	// (0x0003c2f5) cell_ai_notification_pane_g1

0x58bf,	// (0x0003c2fd) cell_ai_notification_pane_t1

0xacbe,	// (0x000416fc) tb_ext_find_button_pane

0xacd3,	// (0x00041711) tb_ext_find_pane_g1

0xacdb,	// (0x00041719) tb_ext_find_pane_t1

0xc4b5,	// (0x00042ef3) tb_ext_find_button_pane_g1

0x58eb,	// (0x0003c329) tb_ext_find_button_pane_g2

0x0001,

0xfd54,	// (0x00046792) tb_ext_find_button_pane_g

0xaade,	// (0x0004151c) main_idle_act4_pane_t1_ParamLimits

0xaaf4,	// (0x00041532) main_idle_act4_pane_t2_ParamLimits

0xfd12,	// (0x00046750) main_idle_act4_pane_t_ParamLimits

0xab26,	// (0x00041564) popup_clock_digital_analogue_window_cp2_ParamLimits

0xab3e,	// (0x0004157c) sat_plugin_idle_act4_pane_ParamLimits

0xab3e,	// (0x0004157c) sat_plugin_idle_act4_pane

0xace9,	// (0x00041727) sat_plugin_idle_act4_pane_t1_ParamLimits

0xace9,	// (0x00041727) sat_plugin_idle_act4_pane_t1

0xad01,	// (0x0004173f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xad01,	// (0x0004173f) sat_plugin_idle_act4_pane_t2

0xad19,	// (0x00041757) sat_plugin_idle_act4_pane_t3_ParamLimits

0xad19,	// (0x00041757) sat_plugin_idle_act4_pane_t3

0xad31,	// (0x0004176f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xad31,	// (0x0004176f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd59,	// (0x00046797) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd59,	// (0x00046797) sat_plugin_idle_act4_pane_t

0x147c,	// (0x00037eba) popup_battery_window_ParamLimits

0x147c,	// (0x00037eba) popup_battery_window

0xb972,	// (0x000423b0) bg_popup_sub_pane_cp25_ParamLimits

0xb972,	// (0x000423b0) bg_popup_sub_pane_cp25

0x5940,	// (0x0003c37e) popup_battery_window_g1_ParamLimits

0x5940,	// (0x0003c37e) popup_battery_window_g1

0x594c,	// (0x0003c38a) popup_battery_window_t1_ParamLimits

0x594c,	// (0x0003c38a) popup_battery_window_t1

0x595e,	// (0x0003c39c) popup_battery_window_t2_ParamLimits

0x595e,	// (0x0003c39c) popup_battery_window_t2

0x0001,

0xfd62,	// (0x000467a0) popup_battery_window_t_ParamLimits

0xfd62,	// (0x000467a0) popup_battery_window_t

0x8fb1,	// (0x0003f9ef) midp_canvas_pane_ParamLimits

0x900c,	// (0x0003fa4a) midp_keypad_pane_ParamLimits

0x900c,	// (0x0003fa4a) midp_keypad_pane

0xc0cc,	// (0x00042b0a) main_midp_pane_ParamLimits

0xe9b1,	// (0x000453ef) signal_pane_g2_cp_ParamLimits

0xad49,	// (0x00041787) aid_size_cell_midp_keypad_ParamLimits

0xad49,	// (0x00041787) aid_size_cell_midp_keypad

0xad67,	// (0x000417a5) midp_keyp_game_grid_pane_ParamLimits

0xad67,	// (0x000417a5) midp_keyp_game_grid_pane

0xad8e,	// (0x000417cc) midp_keyp_rocker_pane_ParamLimits

0xad8e,	// (0x000417cc) midp_keyp_rocker_pane

0xade7,	// (0x00041825) midp_keyp_sk_left_pane_ParamLimits

0xade7,	// (0x00041825) midp_keyp_sk_left_pane

0xae3b,	// (0x00041879) midp_keyp_sk_right_pane_ParamLimits

0xae3b,	// (0x00041879) midp_keyp_sk_right_pane

0xb7cf,	// (0x0004220d) bg_button_pane_cp03

0xae8f,	// (0x000418cd) midp_keyp_sk_left_pane_g1

0xb7cf,	// (0x0004220d) bg_button_pane_cp04

0xae8f,	// (0x000418cd) midp_keyp_sk_right_pane_g1

0xec9a,	// (0x000456d8) midp_keyp_rocker_pane_g1

0xae98,	// (0x000418d6) keyp_game_cell_pane_ParamLimits

0xae98,	// (0x000418d6) keyp_game_cell_pane

0xb7cf,	// (0x0004220d) bg_button_pane_cp02

0xaebc,	// (0x000418fa) keyp_game_cell_pane_g1

0x809a,	// (0x0003ead8) popup_fep_vkb2_window_ParamLimits

0x809a,	// (0x0003ead8) popup_fep_vkb2_window

0x85eb,	// (0x0003f029) aid_size_cell_vkb2_ParamLimits

0x85eb,	// (0x0003f029) aid_size_cell_vkb2

0x8621,	// (0x0003f05f) popup_fep_vkb2_window_g1_ParamLimits

0x8621,	// (0x0003f05f) popup_fep_vkb2_window_g1

0x8671,	// (0x0003f0af) vkb2_area_bottom_pane_ParamLimits

0x8671,	// (0x0003f0af) vkb2_area_bottom_pane

0x86c5,	// (0x0003f103) vkb2_area_keypad_pane_ParamLimits

0x86c5,	// (0x0003f103) vkb2_area_keypad_pane

0x870d,	// (0x0003f14b) vkb2_area_top_pane_ParamLimits

0x870d,	// (0x0003f14b) vkb2_area_top_pane

0x8793,	// (0x0003f1d1) vkb2_top_entry_pane_ParamLimits

0x8793,	// (0x0003f1d1) vkb2_top_entry_pane

0x87c0,	// (0x0003f1fe) vkb2_top_grid_left_pane_ParamLimits

0x87c0,	// (0x0003f1fe) vkb2_top_grid_left_pane

0x87e0,	// (0x0003f21e) vkb2_top_grid_right_pane_ParamLimits

0x87e0,	// (0x0003f21e) vkb2_top_grid_right_pane

0x3405,	// (0x00039e43) vkb2_cell_keypad_pane_ParamLimits

0x3405,	// (0x00039e43) vkb2_cell_keypad_pane

0x8826,	// (0x0003f264) vkb2_area_bottom_grid_pane_ParamLimits

0x8826,	// (0x0003f264) vkb2_area_bottom_grid_pane

0x8850,	// (0x0003f28e) vkb2_area_bottom_pane_g1_ParamLimits

0x8850,	// (0x0003f28e) vkb2_area_bottom_pane_g1

0x8876,	// (0x0003f2b4) vkb2_area_bottom_pane_g2_ParamLimits

0x8876,	// (0x0003f2b4) vkb2_area_bottom_pane_g2

0x88a7,	// (0x0003f2e5) vkb2_area_bottom_pane_g3_ParamLimits

0x88a7,	// (0x0003f2e5) vkb2_area_bottom_pane_g3

0x0002,

0xfd67,	// (0x000467a5) vkb2_area_bottom_pane_g_ParamLimits

0xfd67,	// (0x000467a5) vkb2_area_bottom_pane_g

0x35af,	// (0x00039fed) vkb2_top_cell_left_pane_ParamLimits

0x35af,	// (0x00039fed) vkb2_top_cell_left_pane

0xaec5,	// (0x00041903) vkb2_top_entry_pane_g1_ParamLimits

0xaec5,	// (0x00041903) vkb2_top_entry_pane_g1

0xaed3,	// (0x00041911) vkb2_top_entry_pane_t1_ParamLimits

0xaed3,	// (0x00041911) vkb2_top_entry_pane_t1

0x5b0f,	// (0x0003c54d) vkb2_top_entry_pane_t2_ParamLimits

0x5b0f,	// (0x0003c54d) vkb2_top_entry_pane_t2

0x5b41,	// (0x0003c57f) vkb2_top_entry_pane_t3_ParamLimits

0x5b41,	// (0x0003c57f) vkb2_top_entry_pane_t3

0x0002,

0xfd6e,	// (0x000467ac) vkb2_top_entry_pane_t_ParamLimits

0xfd6e,	// (0x000467ac) vkb2_top_entry_pane_t

0x8911,	// (0x0003f34f) vkb2_top_grid_right_pane_g1_ParamLimits

0x8911,	// (0x0003f34f) vkb2_top_grid_right_pane_g1

0x3612,	// (0x0003a050) vkb2_top_grid_right_pane_g2_ParamLimits

0x3612,	// (0x0003a050) vkb2_top_grid_right_pane_g2

0x362a,	// (0x0003a068) vkb2_top_grid_right_pane_g3_ParamLimits

0x362a,	// (0x0003a068) vkb2_top_grid_right_pane_g3

0x8927,	// (0x0003f365) vkb2_top_grid_right_pane_g4_ParamLimits

0x8927,	// (0x0003f365) vkb2_top_grid_right_pane_g4

0x0003,

0xfd75,	// (0x000467b3) vkb2_top_grid_right_pane_g_ParamLimits

0xfd75,	// (0x000467b3) vkb2_top_grid_right_pane_g

0x3658,	// (0x0003a096) vkb2_top_cell_left_pane_g1

0x366f,	// (0x0003a0ad) vkb2_cell_keypad_pane_g1_ParamLimits

0x366f,	// (0x0003a0ad) vkb2_cell_keypad_pane_g1

0x5b65,	// (0x0003c5a3) vkb2_cell_keypad_pane_t1_ParamLimits

0x5b65,	// (0x0003c5a3) vkb2_cell_keypad_pane_t1

0x367d,	// (0x0003a0bb) vkb2_cell_bottom_grid_pane_ParamLimits

0x367d,	// (0x0003a0bb) vkb2_cell_bottom_grid_pane

0x36b6,	// (0x0003a0f4) vkb2_cell_bottom_grid_pane_g1

0xab6f,	// (0x000415ad) aid_call2_pane_cp02

0xab77,	// (0x000415b5) aid_call_pane_cp02

0xab7f,	// (0x000415bd) clock_digital_number_pane_cp10

0xab87,	// (0x000415c5) clock_digital_number_pane_cp11

0xab8f,	// (0x000415cd) clock_digital_number_pane_cp12

0xab97,	// (0x000415d5) clock_digital_number_pane_cp13

0xab9f,	// (0x000415dd) clock_digital_separator_pane_cp10

0xc4b5,	// (0x00042ef3) popup_clock_digital_analogue_window_cp2_g1

0xc4b5,	// (0x00042ef3) popup_clock_digital_analogue_window_cp2_g2

0xaba7,	// (0x000415e5) popup_clock_digital_analogue_window_cp2_g3

0xc4b5,	// (0x00042ef3) popup_clock_digital_analogue_window_cp2_g4

0xaba7,	// (0x000415e5) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2a,	// (0x00046768) popup_clock_digital_analogue_window_cp2_g

0xabaf,	// (0x000415ed) popup_clock_digital_analogue_window_cp2_t1

0xabbd,	// (0x000415fb) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd35,	// (0x00046773) popup_clock_digital_analogue_window_cp2_t

0xec9a,	// (0x000456d8) clock_digital_number_pane_cp10_g1

0xec9a,	// (0x000456d8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb51,	// (0x0004658f) clock_digital_number_pane_cp10_g

0xec9a,	// (0x000456d8) clock_digital_separator_pane_cp10_g1

0xec9a,	// (0x000456d8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb51,	// (0x0004658f) clock_digital_separator_pane_cp10_g

0x558c,	// (0x0003bfca) uniindi_top_pane_g3

0x559d,	// (0x0003bfdb) uniindi_top_pane_g4

0x3490,	// (0x00039ece) vkb2_row_keypad_pane_ParamLimits

0x3490,	// (0x00039ece) vkb2_row_keypad_pane

0x36d2,	// (0x0003a110) vkb2_cell_t_keypad_pane_ParamLimits

0x36d2,	// (0x0003a110) vkb2_cell_t_keypad_pane

0x36e2,	// (0x0003a120) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x36e2,	// (0x0003a120) vkb2_cell_t_keypad_pane_cp08

0x36f5,	// (0x0003a133) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x36f5,	// (0x0003a133) vkb2_cell_t_keypad_pane_cp09

0x3709,	// (0x0003a147) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x3709,	// (0x0003a147) vkb2_cell_t_keypad_pane_cp01

0x371a,	// (0x0003a158) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x371a,	// (0x0003a158) vkb2_cell_t_keypad_pane_cp02

0x372b,	// (0x0003a169) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x372b,	// (0x0003a169) vkb2_cell_t_keypad_pane_cp03

0x373c,	// (0x0003a17a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x373c,	// (0x0003a17a) vkb2_cell_t_keypad_pane_cp04

0x374d,	// (0x0003a18b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x374d,	// (0x0003a18b) vkb2_cell_t_keypad_pane_cp05

0x375e,	// (0x0003a19c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x375e,	// (0x0003a19c) vkb2_cell_t_keypad_pane_cp06

0x376f,	// (0x0003a1ad) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x376f,	// (0x0003a1ad) vkb2_cell_t_keypad_pane_cp07

0x3780,	// (0x0003a1be) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3780,	// (0x0003a1be) vkb2_cell_t_keypad_pane_cp10

0xee41,	// (0x0004587f) vkb2_cell_t_keypad_pane_g1

0x5b7c,	// (0x0003c5ba) vkb2_cell_t_keypad_pane_t1

0xb7cf,	// (0x0004220d) popup_grid_graphic2_window

0xaf0c,	// (0x0004194a) aid_size_cell_graphic2_ParamLimits

0xaf0c,	// (0x0004194a) aid_size_cell_graphic2

0xd47b,	// (0x00043eb9) bg_popup_window_pane_cp21_ParamLimits

0xd47b,	// (0x00043eb9) bg_popup_window_pane_cp21

0xaf3e,	// (0x0004197c) graphic2_pages_pane_ParamLimits

0xaf3e,	// (0x0004197c) graphic2_pages_pane

0xaf94,	// (0x000419d2) grid_graphic2_control_pane_ParamLimits

0xaf94,	// (0x000419d2) grid_graphic2_control_pane

0xafc8,	// (0x00041a06) grid_graphic2_pane_ParamLimits

0xafc8,	// (0x00041a06) grid_graphic2_pane

0xb03b,	// (0x00041a79) cell_graphic2_pane

0xb7cf,	// (0x0004220d) main_comp_mode_pane

0x4e0c,	// (0x0003b84a) list_ai3_gene_pane_ParamLimits

0xa8b6,	// (0x000412f4) bg_popup_window_pane_cp19_ParamLimits

0x51e2,	// (0x0003bc20) bg_touch_area_indi_pane_ParamLimits

0x51e2,	// (0x0003bc20) bg_touch_area_indi_pane

0x51f8,	// (0x0003bc36) bg_touch_area_indi_pane_cp01_ParamLimits

0x51f8,	// (0x0003bc36) bg_touch_area_indi_pane_cp01

0x520e,	// (0x0003bc4c) bg_touch_area_indi_pane_cp02_ParamLimits

0x520e,	// (0x0003bc4c) bg_touch_area_indi_pane_cp02

0x5226,	// (0x0003bc64) bg_touch_area_indi_pane_cp03_ParamLimits

0x5226,	// (0x0003bc64) bg_touch_area_indi_pane_cp03

0x5240,	// (0x0003bc7e) popup_slider_window_g1_ParamLimits

0x525c,	// (0x0003bc9a) popup_slider_window_g2_ParamLimits

0x5278,	// (0x0003bcb6) popup_slider_window_g3_ParamLimits

0xfcd0,	// (0x0004670e) popup_slider_window_g_ParamLimits

0x52d4,	// (0x0003bd12) popup_slider_window_t1_ParamLimits

0x5348,	// (0x0003bd86) small_volume_slider_vertical_pane_ParamLimits

0xb03b,	// (0x00041a79) cell_graphic2_pane_ParamLimits

0xb096,	// (0x00041ad4) bg_button_pane_cp10_ParamLimits

0xb096,	// (0x00041ad4) bg_button_pane_cp10

0xb0a9,	// (0x00041ae7) bg_button_pane_cp11_ParamLimits

0xb0a9,	// (0x00041ae7) bg_button_pane_cp11

0xb0bc,	// (0x00041afa) graphic2_pages_pane_g1_ParamLimits

0xb0bc,	// (0x00041afa) graphic2_pages_pane_g1

0xb0d7,	// (0x00041b15) graphic2_pages_pane_g2_ParamLimits

0xb0d7,	// (0x00041b15) graphic2_pages_pane_g2

0x0001,

0xfd83,	// (0x000467c1) graphic2_pages_pane_g_ParamLimits

0xfd83,	// (0x000467c1) graphic2_pages_pane_g

0xb0ef,	// (0x00041b2d) graphic2_pages_pane_t1_ParamLimits

0xb0ef,	// (0x00041b2d) graphic2_pages_pane_t1

0xb107,	// (0x00041b45) cell_graphic2_control_pane_ParamLimits

0xb107,	// (0x00041b45) cell_graphic2_control_pane

0xb121,	// (0x00041b5f) cell_graphic2_pane_g1_ParamLimits

0xb121,	// (0x00041b5f) cell_graphic2_pane_g1

0x9115,	// (0x0003fb53) cell_graphic2_pane_g2_ParamLimits

0x9115,	// (0x0003fb53) cell_graphic2_pane_g2

0xacc6,	// (0x00041704) cell_graphic2_pane_g3_ParamLimits

0xacc6,	// (0x00041704) cell_graphic2_pane_g3

0x9122,	// (0x0003fb60) cell_graphic2_pane_g4_ParamLimits

0x9122,	// (0x0003fb60) cell_graphic2_pane_g4

0xb12e,	// (0x00041b6c) cell_graphic2_pane_g5_ParamLimits

0xb12e,	// (0x00041b6c) cell_graphic2_pane_g5

0x0004,

0xfd88,	// (0x000467c6) cell_graphic2_pane_g_ParamLimits

0xfd88,	// (0x000467c6) cell_graphic2_pane_g

0xb14e,	// (0x00041b8c) cell_graphic2_pane_t1_ParamLimits

0xb14e,	// (0x00041b8c) cell_graphic2_pane_t1

0xdaf7,	// (0x00044535) grid_highlight_pane_cp11_ParamLimits

0xdaf7,	// (0x00044535) grid_highlight_pane_cp11

0xbf74,	// (0x000429b2) bg_button_pane_cp05

0xb165,	// (0x00041ba3) cell_graphic2_control_pane_g1

0xec9a,	// (0x000456d8) bg_touch_area_indi_pane_g1

0x5dfb,	// (0x0003c839) aid_cmod_rocker_key_size

0x5e05,	// (0x0003c843) aid_cmode_itu_key_size

0x5e0f,	// (0x0003c84d) main_cmode_video_pane

0x5e19,	// (0x0003c857) main_comp_mode_itu_pane

0x5e25,	// (0x0003c863) main_comp_mode_rocker_pane

0x5e31,	// (0x0003c86f) cell_cmode_rocker_pane_ParamLimits

0x5e31,	// (0x0003c86f) cell_cmode_rocker_pane

0x5e43,	// (0x0003c881) cell_cmode_itu_pane_ParamLimits

0x5e43,	// (0x0003c881) cell_cmode_itu_pane

0xbf74,	// (0x000429b2) bg_button_pane_cp06_ParamLimits

0xbf74,	// (0x000429b2) bg_button_pane_cp06

0xee41,	// (0x0004587f) cell_cmode_rocker_pane_g1_ParamLimits

0xee41,	// (0x0004587f) cell_cmode_rocker_pane_g1

0x53ec,	// (0x0003be2a) cell_cmode_rocker_pane_g2_ParamLimits

0x53ec,	// (0x0003be2a) cell_cmode_rocker_pane_g2

0x0001,

0xfd93,	// (0x000467d1) cell_cmode_rocker_pane_g_ParamLimits

0xfd93,	// (0x000467d1) cell_cmode_rocker_pane_g

0xb7cf,	// (0x0004220d) bg_button_pane_cp07

0x5e58,	// (0x0003c896) cell_cmode_itu_pane_g1

0x5e61,	// (0x0003c89f) cell_cmode_itu_pane_t1

0x5e6f,	// (0x0003c8ad) cell_cmode_itu_pane_t2

0x0001,

0xfd98,	// (0x000467d6) cell_cmode_itu_pane_t

0x560f,	// (0x0003c04d) aid_touch_ctrl_left

0x5617,	// (0x0003c055) aid_touch_ctrl_right

0xb7cf,	// (0x0004220d) compa_mode_pane

0xb172,	// (0x00041bb0) aid_cmod_rocker_key_size_cp

0xb17c,	// (0x00041bba) aid_cmode_itu_key_size_cp

0x5e91,	// (0x0003c8cf) compa_mode_pane_g1

0x5e99,	// (0x0003c8d7) compa_mode_pane_g2

0x5ea1,	// (0x0003c8df) compa_mode_pane_g3

0x0002,

0xfd9d,	// (0x000467db) compa_mode_pane_g

0xb186,	// (0x00041bc4) main_comp_mode_itu_pane_cp

0xb18e,	// (0x00041bcc) main_comp_mode_rocker_pane_cp

0xb196,	// (0x00041bd4) cell_cmode_itu_pane_cp_ParamLimits

0xb196,	// (0x00041bd4) cell_cmode_itu_pane_cp

0xb1ab,	// (0x00041be9) cell_cmode_rocker_pane_cp_ParamLimits

0xb1ab,	// (0x00041be9) cell_cmode_rocker_pane_cp

0xbf74,	// (0x000429b2) bg_button_pane_cp06_cp_ParamLimits

0xbf74,	// (0x000429b2) bg_button_pane_cp06_cp

0xee41,	// (0x0004587f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xee41,	// (0x0004587f) cell_cmode_rocker_pane_g1_cp

0xec9a,	// (0x000456d8) cell_cmode_rocker_pane_g2_cp

0xb7cf,	// (0x0004220d) bg_button_pane_cp07_cp

0xb1bd,	// (0x00041bfb) cell_cmode_itu_pane_g1_cp

0xb1c6,	// (0x00041c04) cell_cmode_itu_pane_t1_cp

0xb1c6,	// (0x00041c04) cell_cmode_itu_pane_t2_cp

0x9efd,	// (0x0004093b) settings_code_pane_cp2

0xb83f,	// (0x0004227d) bg_popup_window_pane_cp3_ParamLimits

0xbb4c,	// (0x0004258a) heading_pane_cp3_ParamLimits

0xbb58,	// (0x00042596) listscroll_popup_graphic_pane_ParamLimits

0x2cbc,	// (0x000396fa) fep_hwr_aid_pane_ParamLimits

0x316f,	// (0x00039bad) aid_touch_sctrl_top_ParamLimits

0x317c,	// (0x00039bba) sctrl_sk_top_pane_g1_ParamLimits

0xee41,	// (0x0004587f) sctrl_sk_top_pane_g2_ParamLimits

0xfce9,	// (0x00046727) sctrl_sk_top_pane_g_ParamLimits

0x3189,	// (0x00039bc7) sctrl_sk_top_pane_t1_ParamLimits

0x316f,	// (0x00039bad) aid_touch_sctrl_bottom_ParamLimits

0x3189,	// (0x00039bc7) sctrl_sk_bottom_pane_t1_ParamLimits

0x5558,	// (0x0003bf96) aid_area_touch_clock

0x8755,	// (0x0003f193) aid_vkb2_area_top_pane_cell_ParamLimits

0x8755,	// (0x0003f193) aid_vkb2_area_top_pane_cell

0x8800,	// (0x0003f23e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8800,	// (0x0003f23e) aid_vkb2_area_bottom_pane_cell

0x5ac7,	// (0x0003c505) popup_char_count_window

0x5eee,	// (0x0003c92c) popup_char_count_window_g1

0x5ef7,	// (0x0003c935) popup_char_count_window_g2

0x5f00,	// (0x0003c93e) popup_char_count_window_g3

0x0002,

0xfda4,	// (0x000467e2) popup_char_count_window_g

0x5f09,	// (0x0003c947) popup_char_count_window_t1

0x322d,	// (0x00039c6b) popup_fep_char_preview_window_ParamLimits

0x322d,	// (0x00039c6b) popup_fep_char_preview_window

0x8775,	// (0x0003f1b3) vkb2_top_candi_pane_ParamLimits

0x8775,	// (0x0003f1b3) vkb2_top_candi_pane

0xb1d4,	// (0x00041c12) cell_vkb2_top_candi_pane_ParamLimits

0xb1d4,	// (0x00041c12) cell_vkb2_top_candi_pane

0xd47b,	// (0x00043eb9) bg_popup_fep_char_preview_window_ParamLimits

0xd47b,	// (0x00043eb9) bg_popup_fep_char_preview_window

0x3795,	// (0x0003a1d3) popup_fep_char_preview_window_t1_ParamLimits

0x3795,	// (0x0003a1d3) popup_fep_char_preview_window_t1

0x5f64,	// (0x0003c9a2) bg_popup_fep_char_preview_window_g1

0x5f6c,	// (0x0003c9aa) bg_popup_fep_char_preview_window_g2

0x5f74,	// (0x0003c9b2) bg_popup_fep_char_preview_window_g3

0x5f7c,	// (0x0003c9ba) bg_popup_fep_char_preview_window_g4

0x5f84,	// (0x0003c9c2) bg_popup_fep_char_preview_window_g5

0x37cf,	// (0x0003a20d) bg_popup_fep_char_preview_window_g6

0x5f8c,	// (0x0003c9ca) bg_popup_fep_char_preview_window_g7

0x5f94,	// (0x0003c9d2) bg_popup_fep_char_preview_window_g8

0x5f9c,	// (0x0003c9da) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdab,	// (0x000467e9) bg_popup_fep_char_preview_window_g

0xee41,	// (0x0004587f) cell_vkb2_top_candi_pane_g1_ParamLimits

0xee41,	// (0x0004587f) cell_vkb2_top_candi_pane_g1

0xf080,	// (0x00045abe) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf080,	// (0x00045abe) cell_vkb2_top_candi_pane_g2

0xf0a1,	// (0x00045adf) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf0a1,	// (0x00045adf) cell_vkb2_top_candi_pane_g3

0x37d7,	// (0x0003a215) cell_vkb2_top_candi_pane_g4_ParamLimits

0x37d7,	// (0x0003a215) cell_vkb2_top_candi_pane_g4

0x5cdd,	// (0x0003c71b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5cdd,	// (0x0003c71b) cell_vkb2_top_candi_pane_g5

0x53ec,	// (0x0003be2a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x53ec,	// (0x0003be2a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbe,	// (0x000467fc) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbe,	// (0x000467fc) cell_vkb2_top_candi_pane_g

0x37f8,	// (0x0003a236) cell_vkb2_top_candi_pane_t1

0x2a14,	// (0x00039452) aid_size_touch_slider_mark_ParamLimits

0x2a14,	// (0x00039452) aid_size_touch_slider_mark

0xaf7a,	// (0x000419b8) grid_graphic2_catg_pane_ParamLimits

0xaf7a,	// (0x000419b8) grid_graphic2_catg_pane

0xb00e,	// (0x00041a4c) popup_grid_graphic2_window_t1_ParamLimits

0xb00e,	// (0x00041a4c) popup_grid_graphic2_window_t1

0xb024,	// (0x00041a62) popup_grid_graphic2_window_t2_ParamLimits

0xb024,	// (0x00041a62) popup_grid_graphic2_window_t2

0x0001,

0xfd7e,	// (0x000467bc) popup_grid_graphic2_window_t_ParamLimits

0xfd7e,	// (0x000467bc) popup_grid_graphic2_window_t

0xbf74,	// (0x000429b2) bg_button_pane_cp05_ParamLimits

0xb165,	// (0x00041ba3) cell_graphic2_control_pane_g1_ParamLimits

0xb23a,	// (0x00041c78) cell_graphic2_catg_pane_ParamLimits

0xb23a,	// (0x00041c78) cell_graphic2_catg_pane

0xb7cf,	// (0x0004220d) bg_button_pane_cp12

0xb24c,	// (0x00041c8a) cell_graphic2_catg_pane_g1

0x5524,	// (0x0003bf62) cell_tb_ext_pane_t1_ParamLimits

0x35cf,	// (0x0003a00d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x35cf,	// (0x0003a00d) vkb2_top_cell_right_narrow_pane

0x35e7,	// (0x0003a025) vkb2_top_cell_right_wide_pane_ParamLimits

0x35e7,	// (0x0003a025) vkb2_top_cell_right_wide_pane

0xe951,	// (0x0004538f) bg_vkb2_func_pane_ParamLimits

0xe951,	// (0x0004538f) bg_vkb2_func_pane

0x3658,	// (0x0003a096) vkb2_top_cell_left_pane_g1_ParamLimits

0xe951,	// (0x0004538f) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe951,	// (0x0004538f) bg_vkb2_fuc_pane_cp03

0x36b6,	// (0x0003a0f4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xcef0,	// (0x0004392e) bg_vkb2_func_pane_g1

0xcef8,	// (0x00043936) bg_vkb2_func_pane_g2

0xcf08,	// (0x00043946) bg_vkb2_func_pane_g3

0xcf00,	// (0x0004393e) bg_vkb2_func_pane_g4

0xcf10,	// (0x0004394e) bg_vkb2_func_pane_g5

0xcf18,	// (0x00043956) bg_vkb2_func_pane_g6

0xcf20,	// (0x0004395e) bg_vkb2_func_pane_g7

0xcf28,	// (0x00043966) bg_vkb2_func_pane_g8

0xcee8,	// (0x00043926) bg_vkb2_func_pane_g9

0x0008,

0x0325,	// (0x00036d63) bg_vkb2_func_pane_g

0xe951,	// (0x0004538f) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe951,	// (0x0004538f) bg_vkb2_fuc_pane_cp01

0x3658,	// (0x0003a096) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3658,	// (0x0003a096) vkb2_top_cell_right_wide_pane_g1

0xe951,	// (0x0004538f) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe951,	// (0x0004538f) bg_vkb2_fuc_pane_cp02

0x36b6,	// (0x0003a0f4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x36b6,	// (0x0003a0f4) vkb2_top_cell_right_narrow_pane_g1

0xa7f6,	// (0x00041234) aid_touch_area_decrease_ParamLimits

0xa7f6,	// (0x00041234) aid_touch_area_decrease

0xa82a,	// (0x00041268) aid_touch_area_increase_ParamLimits

0xa82a,	// (0x00041268) aid_touch_area_increase

0xa852,	// (0x00041290) aid_touch_area_mute_ParamLimits

0xa852,	// (0x00041290) aid_touch_area_mute

0xa882,	// (0x000412c0) aid_touch_area_slider_ParamLimits

0xa882,	// (0x000412c0) aid_touch_area_slider

0xa8c2,	// (0x00041300) popup_slider_window_g4_ParamLimits

0xa8c2,	// (0x00041300) popup_slider_window_g4

0xa8ea,	// (0x00041328) popup_slider_window_g5_ParamLimits

0xa8ea,	// (0x00041328) popup_slider_window_g5

0xa91e,	// (0x0004135c) popup_slider_window_g6_ParamLimits

0xa91e,	// (0x0004135c) popup_slider_window_g6

0x5302,	// (0x0003bd40) popup_slider_window_t2_ParamLimits

0x5302,	// (0x0003bd40) popup_slider_window_t2

0x0001,

0xfcdd,	// (0x0004671b) popup_slider_window_t_ParamLimits

0xfcdd,	// (0x0004671b) popup_slider_window_t

0xa93a,	// (0x00041378) slider_pane_ParamLimits

0xa93a,	// (0x00041378) slider_pane

0x5fbf,	// (0x0003c9fd) slider_pane_g1_ParamLimits

0x5fbf,	// (0x0003c9fd) slider_pane_g1

0x5fd3,	// (0x0003ca11) slider_pane_g2_ParamLimits

0x5fd3,	// (0x0003ca11) slider_pane_g2

0x5fe9,	// (0x0003ca27) slider_pane_g3_ParamLimits

0x5fe9,	// (0x0003ca27) slider_pane_g3

0x0003,

0xfdcb,	// (0x00046809) slider_pane_g_ParamLimits

0xfdcb,	// (0x00046809) slider_pane_g

0x96c9,	// (0x00040107) popup_tb_float_extension_window_ParamLimits

0x96c9,	// (0x00040107) popup_tb_float_extension_window

0x6015,	// (0x0003ca53) aid_size_cell_tb_float_ext

0xb7cf,	// (0x0004220d) bg_popup_sub_window_cp28

0x6021,	// (0x0003ca5f) grid_tb_float_ext_pane

0x602b,	// (0x0003ca69) cell_tb_float_ext_pane_ParamLimits

0x602b,	// (0x0003ca69) cell_tb_float_ext_pane

0x6045,	// (0x0003ca83) cell_tb_float_ext_pane_g1

0x604e,	// (0x0003ca8c) grid_highlight_pane_cp12

0x84e6,	// (0x0003ef24) cell_last_hwr_side_pane_ParamLimits

0x84e6,	// (0x0003ef24) cell_last_hwr_side_pane

0xec9a,	// (0x000456d8) cell_last_hwr_side_pane_g1

0x6057,	// (0x0003ca95) cell_last_hwr_side_pane_g2

0x0001,

0xfdd4,	// (0x00046812) cell_last_hwr_side_pane_g

0x88dc,	// (0x0003f31a) vkb2_area_bottom_space_btn_pane_ParamLimits

0x88dc,	// (0x0003f31a) vkb2_area_bottom_space_btn_pane

0xee41,	// (0x0004587f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5b7c,	// (0x0003c5ba) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x37f8,	// (0x0003a236) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3817,	// (0x0003a255) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3817,	// (0x0003a255) vkb2_area_bottom_space_btn_pane_g1

0x3851,	// (0x0003a28f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3851,	// (0x0003a28f) vkb2_area_bottom_space_btn_pane_g2

0x3887,	// (0x0003a2c5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3887,	// (0x0003a2c5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdd9,	// (0x00046817) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdd9,	// (0x00046817) vkb2_area_bottom_space_btn_pane_g

0x2d63,	// (0x000397a1) cel_fep_hwr_func_pane_ParamLimits

0x2d63,	// (0x000397a1) cel_fep_hwr_func_pane

0x84bb,	// (0x0003eef9) cell_hwr_side_button_pane_ParamLimits

0x84bb,	// (0x0003eef9) cell_hwr_side_button_pane

0x5558,	// (0x0003bf96) aid_area_touch_clock_ParamLimits

0xb972,	// (0x000423b0) bg_uniindi_top_pane_ParamLimits

0x556a,	// (0x0003bfa8) uniindi_top_pane_g1_ParamLimits

0x5580,	// (0x0003bfbe) uniindi_top_pane_g2_ParamLimits

0x558c,	// (0x0003bfca) uniindi_top_pane_g3_ParamLimits

0x559d,	// (0x0003bfdb) uniindi_top_pane_g4_ParamLimits

0xfd04,	// (0x00046742) uniindi_top_pane_g_ParamLimits

0x55aa,	// (0x0003bfe8) uniindi_top_pane_t1_ParamLimits

0xb972,	// (0x000423b0) bg_vkb2_func_pane_cp01_ParamLimits

0xb972,	// (0x000423b0) bg_vkb2_func_pane_cp01

0x6060,	// (0x0003ca9e) cel_fep_hwr_func_pane_g1_ParamLimits

0x6060,	// (0x0003ca9e) cel_fep_hwr_func_pane_g1

0xb972,	// (0x000423b0) bg_vkb2_func_pane_cp02_ParamLimits

0xb972,	// (0x000423b0) bg_vkb2_func_pane_cp02

0x6060,	// (0x0003ca9e) cell_hwr_side_button_pane_g1_ParamLimits

0x6060,	// (0x0003ca9e) cell_hwr_side_button_pane_g1

0xcdfe,	// (0x0004383c) status_pane_g4_ParamLimits

0xcdfe,	// (0x0004383c) status_pane_g4

0xce18,	// (0x00043856) status_pane_t1

0xeb1f,	// (0x0004555d) form2_midp_gauge_slider_cont_pane

0xeb27,	// (0x00045565) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa1f4,	// (0x00040c32) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa206,	// (0x00040c44) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00046547) form2_midp_gauge_slider_pane_t_ParamLimits

0xeb39,	// (0x00045577) form2_midp_slider_pane_ParamLimits

0x31ed,	// (0x00039c2b) aid_size_cell_func_vkb2_ParamLimits

0x31ed,	// (0x00039c2b) aid_size_cell_func_vkb2

0x6001,	// (0x0003ca3f) slider_pane_g4_ParamLimits

0x6001,	// (0x0003ca3f) slider_pane_g4

0x893d,	// (0x0003f37b) form2_midp_gauge_slider_pane_t2_cp01

0x894b,	// (0x0003f389) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x894b,	// (0x0003f389) form2_midp_gauge_slider_pane_t3_cp01

0x38fc,	// (0x0003a33a) form2_midp_slider_pane_cp01

0xb7cf,	// (0x0004220d) navi_smil_pane

0x6090,	// (0x0003cace) navi_smil_pane_g1

0x6098,	// (0x0003cad6) navi_smil_pane_t1

0x606e,	// (0x0003caac) form2_midp_slider_pane_g1

0x6077,	// (0x0003cab5) form2_midp_slider_pane_g2

0x607f,	// (0x0003cabd) form2_midp_slider_pane_g3

0x606e,	// (0x0003caac) form2_midp_slider_pane_g4

0xb255,	// (0x00041c93) form2_midp_slider_pane_g5

0x0004,

0xfde2,	// (0x00046820) form2_midp_slider_pane_g

0x38c1,	// (0x0003a2ff) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x38c1,	// (0x0003a2ff) vkb2_area_bottom_space_btn_pane_g4

0x98a5,	// (0x000402e3) lc0_navi_pane_ParamLimits

0x98a5,	// (0x000402e3) lc0_navi_pane

0x990f,	// (0x0004034d) lc0_stat_indi_pane_ParamLimits

0x990f,	// (0x0004034d) lc0_stat_indi_pane

0x9924,	// (0x00040362) ls0_title_pane_ParamLimits

0x9924,	// (0x00040362) ls0_title_pane

0xbf74,	// (0x000429b2) bg_popup_sub_pane_cp14_ParamLimits

0x553f,	// (0x0003bf7d) list_uniindi_pane_ParamLimits

0x554b,	// (0x0003bf89) uniindi_top_pane_ParamLimits

0x55e7,	// (0x0003c025) list_single_uniindi_pane_g1_ParamLimits

0x55fa,	// (0x0003c038) list_single_uniindi_pane_t1_ParamLimits

0x8968,	// (0x0003f3a6) lc0_stat_clock_pane_ParamLimits

0x8968,	// (0x0003f3a6) lc0_stat_clock_pane

0xb25e,	// (0x00041c9c) lc0_stat_indi_pane_g1_ParamLimits

0xb25e,	// (0x00041c9c) lc0_stat_indi_pane_g1

0xb26b,	// (0x00041ca9) lc0_stat_indi_pane_g2_ParamLimits

0xb26b,	// (0x00041ca9) lc0_stat_indi_pane_g2

0x0001,

0xfded,	// (0x0004682b) lc0_stat_indi_pane_g_ParamLimits

0xfded,	// (0x0004682b) lc0_stat_indi_pane_g

0x8975,	// (0x0003f3b3) lc0_uni_indicator_pane_ParamLimits

0x8975,	// (0x0003f3b3) lc0_uni_indicator_pane

0x60a6,	// (0x0003cae4) ls0_title_pane_g1_ParamLimits

0x60a6,	// (0x0003cae4) ls0_title_pane_g1

0xb278,	// (0x00041cb6) ls0_title_pane_t1_ParamLimits

0xb278,	// (0x00041cb6) ls0_title_pane_t1

0x8982,	// (0x0003f3c0) lc0_uni_indicator_pane_g1_ParamLimits

0x8982,	// (0x0003f3c0) lc0_uni_indicator_pane_g1

0x60ba,	// (0x0003caf8) lc0_stat_clock_pane_t1

0xb7cf,	// (0x0004220d) main_ai5_pane

0x60c8,	// (0x0003cb06) ai5_sk_pane_ParamLimits

0x60c8,	// (0x0003cb06) ai5_sk_pane

0xb2a6,	// (0x00041ce4) cell_ai5_widget_pane_ParamLimits

0xb2a6,	// (0x00041ce4) cell_ai5_widget_pane

0x60d5,	// (0x0003cb13) aid_size_cell_widget_grid

0x60e9,	// (0x0003cb27) bg_ai5_widget_pane_ParamLimits

0x60e9,	// (0x0003cb27) bg_ai5_widget_pane

0xb32f,	// (0x00041d6d) cell_ai5_widget_pane_g2

0xb33f,	// (0x00041d7d) cell_ai5_widget_pane_g3

0xb353,	// (0x00041d91) cell_ai5_widget_pane_g4

0xb35f,	// (0x00041d9d) cell_ai5_widget_pane_g5

0xb36b,	// (0x00041da9) cell_ai5_widget_pane_g6

0xb377,	// (0x00041db5) cell_ai5_widget_pane_g7

0xb3bf,	// (0x00041dfd) cell_ai5_widget_pane_t1_ParamLimits

0xb3bf,	// (0x00041dfd) cell_ai5_widget_pane_t1

0xb3dc,	// (0x00041e1a) cell_ai5_widget_pane_t2_ParamLimits

0xb3dc,	// (0x00041e1a) cell_ai5_widget_pane_t2

0xb3f4,	// (0x00041e32) cell_ai5_widget_pane_t3_ParamLimits

0xb3f4,	// (0x00041e32) cell_ai5_widget_pane_t3

0xb40c,	// (0x00041e4a) cell_ai5_widget_pane_t4_ParamLimits

0xb40c,	// (0x00041e4a) cell_ai5_widget_pane_t4

0xb426,	// (0x00041e64) cell_ai5_widget_pane_t5_ParamLimits

0xb426,	// (0x00041e64) cell_ai5_widget_pane_t5

0x60f5,	// (0x0003cb33) cell_ai5_widget_pane_t6_ParamLimits

0x60f5,	// (0x0003cb33) cell_ai5_widget_pane_t6

0x6107,	// (0x0003cb45) cell_ai5_widget_pane_t7_ParamLimits

0x6107,	// (0x0003cb45) cell_ai5_widget_pane_t7

0xb445,	// (0x00041e83) cell_ai5_widget_pane_t8_ParamLimits

0xb445,	// (0x00041e83) cell_ai5_widget_pane_t8

0x0009,

0xfe07,	// (0x00046845) cell_ai5_widget_pane_t_ParamLimits

0xfe07,	// (0x00046845) cell_ai5_widget_pane_t

0xb48d,	// (0x00041ecb) grid_ai5_widget_pane

0xbf74,	// (0x000429b2) highlight_cell_ai5_widget_pane_ParamLimits

0xbf74,	// (0x000429b2) highlight_cell_ai5_widget_pane

0xb4a5,	// (0x00041ee3) ai5_sk_left_pane

0xb4af,	// (0x00041eed) ai5_sk_middle_pane

0xb4b9,	// (0x00041ef7) ai5_sk_right_pane

0x6120,	// (0x0003cb5e) bg_ai5_widget_pane_g1_ParamLimits

0x6120,	// (0x0003cb5e) bg_ai5_widget_pane_g1

0x612c,	// (0x0003cb6a) bg_ai5_widget_pane_g2_ParamLimits

0x612c,	// (0x0003cb6a) bg_ai5_widget_pane_g2

0x6138,	// (0x0003cb76) bg_ai5_widget_pane_g3_ParamLimits

0x6138,	// (0x0003cb76) bg_ai5_widget_pane_g3

0x6144,	// (0x0003cb82) bg_ai5_widget_pane_g4_ParamLimits

0x6144,	// (0x0003cb82) bg_ai5_widget_pane_g4

0x6150,	// (0x0003cb8e) bg_ai5_widget_pane_g5_ParamLimits

0x6150,	// (0x0003cb8e) bg_ai5_widget_pane_g5

0x615c,	// (0x0003cb9a) bg_ai5_widget_pane_g6_ParamLimits

0x615c,	// (0x0003cb9a) bg_ai5_widget_pane_g6

0x6168,	// (0x0003cba6) bg_ai5_widget_pane_g7_ParamLimits

0x6168,	// (0x0003cba6) bg_ai5_widget_pane_g7

0x6174,	// (0x0003cbb2) bg_ai5_widget_pane_g8_ParamLimits

0x6174,	// (0x0003cbb2) bg_ai5_widget_pane_g8

0x6180,	// (0x0003cbbe) bg_ai5_widget_pane_g9_ParamLimits

0x6180,	// (0x0003cbbe) bg_ai5_widget_pane_g9

0x0008,

0xfe1c,	// (0x0004685a) bg_ai5_widget_pane_g_ParamLimits

0xfe1c,	// (0x0004685a) bg_ai5_widget_pane_g

0x61b3,	// (0x0003cbf1) cell_shortcut_ai5_widget_pane_ParamLimits

0x61b3,	// (0x0003cbf1) cell_shortcut_ai5_widget_pane

0xb87b,	// (0x000422b9) bg_cell_shortcut_ai5_widget_pane

0x61c4,	// (0x0003cc02) cell_grid_ai5_widget_pane_g1

0x61cd,	// (0x0003cc0b) highlight_cell_shortcut_ai5_widget_pane

0xcef8,	// (0x00043936) ai5_sk_left_pane_g1

0x61d5,	// (0x0003cc13) ai5_sk_left_pane_g2

0x61dd,	// (0x0003cc1b) ai5_sk_left_pane_g3

0x61e5,	// (0x0003cc23) ai5_sk_left_pane_g4

0x0003,

0xfe2f,	// (0x0004686d) ai5_sk_left_pane_g

0x61ed,	// (0x0003cc2b) ai5_sk_left_pane_t1

0xcef0,	// (0x0004392e) ai5_sk_right_pane_g1

0x61fb,	// (0x0003cc39) ai5_sk_right_pane_g2

0x6203,	// (0x0003cc41) ai5_sk_right_pane_g3

0x620b,	// (0x0003cc49) ai5_sk_right_pane_g4

0x0003,

0xfe38,	// (0x00046876) ai5_sk_right_pane_g

0x6213,	// (0x0003cc51) ai5_sk_right_pane_t1

0xcef0,	// (0x0004392e) ai5_sk_middle_pane_g1

0xcef8,	// (0x00043936) ai5_sk_middle_pane_g2

0xcf10,	// (0x0004394e) ai5_sk_middle_pane_g3

0x6203,	// (0x0003cc41) ai5_sk_middle_pane_g4

0x61dd,	// (0x0003cc1b) ai5_sk_middle_pane_g5

0x6221,	// (0x0003cc5f) ai5_sk_middle_pane_g6

0xb4c3,	// (0x00041f01) ai5_sk_middle_pane_g7

0x0006,

0xfe41,	// (0x0004687f) ai5_sk_middle_pane_g

0x9791,	// (0x000401cf) aid_touch_area_size_lc0_ParamLimits

0x9791,	// (0x000401cf) aid_touch_area_size_lc0

0x2eee,	// (0x0003992c) cell_hwr_candidate_pane_t1_ParamLimits

0xcd20,	// (0x0004375e) aid_touch_navi_pane

0x9a16,	// (0x00040454) status_dt_navi_pane_ParamLimits

0x9a16,	// (0x00040454) status_dt_navi_pane

0x9a2e,	// (0x0004046c) status_dt_sta_pane_ParamLimits

0x9a2e,	// (0x0004046c) status_dt_sta_pane

0xb4cb,	// (0x00041f09) dt_sta_controll_pane

0xb4d8,	// (0x00041f16) dt_sta_indi_pane

0xb4e5,	// (0x00041f23) dt_sta_title_pane

0xb972,	// (0x000423b0) bg_dt_sta_indi_pane_ParamLimits

0xb972,	// (0x000423b0) bg_dt_sta_indi_pane

0x6229,	// (0x0003cc67) dt_sta_battery_pane

0xb4f7,	// (0x00041f35) dt_sta_indi_pane_g1

0xb500,	// (0x00041f3e) dt_sta_indi_pane_g2

0xb509,	// (0x00041f47) dt_sta_indi_pane_g3

0x0002,

0xfe50,	// (0x0004688e) dt_sta_indi_pane_g

0xb512,	// (0x00041f50) dt_sta_signal_pane

0xbf74,	// (0x000429b2) bg_dt_sta_title_pane_ParamLimits

0xbf74,	// (0x000429b2) bg_dt_sta_title_pane

0xdbc9,	// (0x00044607) dt_sta_title_pane_g1

0xb51b,	// (0x00041f59) dt_sta_title_pane_t1_ParamLimits

0xb51b,	// (0x00041f59) dt_sta_title_pane_t1

0xb7cf,	// (0x0004220d) bg_dt_sta_control_pane

0xb530,	// (0x00041f6e) dt_sta_controll_pane_g1

0xb539,	// (0x00041f77) bg_dt_sta_title_pane_g1

0xb542,	// (0x00041f80) bg_dt_sta_title_pane_g2

0xb54b,	// (0x00041f89) bg_dt_sta_title_pane_g3

0x0002,

0xfe57,	// (0x00046895) bg_dt_sta_title_pane_g

0xec9a,	// (0x000456d8) bg_dt_sta_indi_pane_g1

0x6231,	// (0x0003cc6f) dt_sta_signal_pane_g1

0x6239,	// (0x0003cc77) dt_sta_signal_pane_g2

0x0001,

0xfe5e,	// (0x0004689c) dt_sta_signal_pane_g

0x6241,	// (0x0003cc7f) dt_sta_battery_pane_g1

0x624a,	// (0x0003cc88) dt_sta_battery_pane_t1

0xec9a,	// (0x000456d8) bg_dt_sta_control_pane_g1

0xc533,	// (0x00042f71) fep_china_uni_eep_pane

0xc53b,	// (0x00042f79) fep_china_uni_entry_pane_ParamLimits

0xc54b,	// (0x00042f89) popup_fep_china_uni_window_g1_ParamLimits

0xc55b,	// (0x00042f99) popup_fep_china_uni_window_g2_ParamLimits

0xc55b,	// (0x00042f99) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x00046196) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x00046196) popup_fep_china_uni_window_g

0x6259,	// (0x0003cc97) fep_china_uni_eep_pane_g1

0x6261,	// (0x0003cc9f) fep_china_uni_eep_pane_t1

0x6087,	// (0x0003cac5) aid_touch_area_size_smil_player

0xcdd1,	// (0x0004380f) lc0_clock_pane

0xce0c,	// (0x0004384a) status_pane_g5_ParamLimits

0xce0c,	// (0x0004384a) status_pane_g5

0x926f,	// (0x0003fcad) popup_keymap_window

0xcdea,	// (0x00043828) status_icon_pane

0xb33f,	// (0x00041d7d) cell_ai5_widget_pane_g3_ParamLimits

0xb353,	// (0x00041d91) cell_ai5_widget_pane_g4_ParamLimits

0xb35f,	// (0x00041d9d) cell_ai5_widget_pane_g5_ParamLimits

0xb383,	// (0x00041dc1) cell_ai5_widget_pane_g8_ParamLimits

0xb383,	// (0x00041dc1) cell_ai5_widget_pane_g8

0xb397,	// (0x00041dd5) cell_ai5_widget_pane_g9_ParamLimits

0xb397,	// (0x00041dd5) cell_ai5_widget_pane_g9

0xb3ab,	// (0x00041de9) cell_ai5_widget_pane_g10_ParamLimits

0xb3ab,	// (0x00041de9) cell_ai5_widget_pane_g10

0x6270,	// (0x0003ccae) status_icon_pane_g1

0xb7cf,	// (0x0004220d) bg_popup_sub_pane_cp13

0x6278,	// (0x0003ccb6) popup_keymap_window_t1

0x9064,	// (0x0003faa2) control_pane_g6_ParamLimits

0x9064,	// (0x0003faa2) control_pane_g6

0x9071,	// (0x0003faaf) control_pane_g7_ParamLimits

0x9071,	// (0x0003faaf) control_pane_g7

0x907e,	// (0x0003fabc) control_pane_g8_ParamLimits

0x907e,	// (0x0003fabc) control_pane_g8

0xb4cb,	// (0x00041f09) dt_sta_controll_pane_ParamLimits

0xb4d8,	// (0x00041f16) dt_sta_indi_pane_ParamLimits

0xb4e5,	// (0x00041f23) dt_sta_title_pane_ParamLimits

0xbeb6,	// (0x000428f4) aid_size_touch_scroll_bar_cale

0x1490,	// (0x00037ece) popup_discreet_window_ParamLimits

0x1490,	// (0x00037ece) popup_discreet_window

0x80e0,	// (0x0003eb1e) popup_sk_window

0xd47b,	// (0x00043eb9) bg_popup_sub_pane_cp28_ParamLimits

0xd47b,	// (0x00043eb9) bg_popup_sub_pane_cp28

0x6286,	// (0x0003ccc4) popup_discreet_window_g1_ParamLimits

0x6286,	// (0x0003ccc4) popup_discreet_window_g1

0x62a6,	// (0x0003cce4) popup_discreet_window_t1_ParamLimits

0x62a6,	// (0x0003cce4) popup_discreet_window_t1

0x62c4,	// (0x0003cd02) popup_discreet_window_t2_ParamLimits

0x62c4,	// (0x0003cd02) popup_discreet_window_t2

0x0002,

0xfe63,	// (0x000468a1) popup_discreet_window_t_ParamLimits

0xfe63,	// (0x000468a1) popup_discreet_window_t

0x3933,	// (0x0003a371) popup_sk_window_g1

0x393d,	// (0x0003a37b) popup_sk_window_g2

0x0001,

0xfe6a,	// (0x000468a8) popup_sk_window_g

0x6316,	// (0x0003cd54) popup_sk_window_t1

0x6324,	// (0x0003cd62) popup_sk_window_t1_copy1

0xb32f,	// (0x00041d6d) cell_ai5_widget_pane_g2_ParamLimits

0xb457,	// (0x00041e95) cell_ai5_widget_pane_t9_ParamLimits

0xb457,	// (0x00041e95) cell_ai5_widget_pane_t9

0xb7cf,	// (0x0004220d) main_fep_fshwr2_pane

0xb554,	// (0x00041f92) aid_fshwr2_btn_pane

0xb55c,	// (0x00041f9a) aid_fshwr2_syb_pane

0xb564,	// (0x00041fa2) aid_fshwr2_txt_pane

0xb56c,	// (0x00041faa) fshwr2_func_candi_pane

0xb576,	// (0x00041fb4) fshwr2_hwr_syb_pane

0xb584,	// (0x00041fc2) fshwr2_icf_pane

0xb7cf,	// (0x0004220d) fshwr2_icf_bg_pane

0xb58e,	// (0x00041fcc) fshwr2_icf_pane_t1_ParamLimits

0xb58e,	// (0x00041fcc) fshwr2_icf_pane_t1

0xec9a,	// (0x000456d8) fshwr2_func_candi_pane_g1

0x6346,	// (0x0003cd84) fshwr2_func_candi_row_pane_ParamLimits

0x6346,	// (0x0003cd84) fshwr2_func_candi_row_pane

0xb5a6,	// (0x00041fe4) cell_fshwr2_syb_pane_ParamLimits

0xb5a6,	// (0x00041fe4) cell_fshwr2_syb_pane

0xee41,	// (0x0004587f) fshwr2_hwr_syb_pane_g1_ParamLimits

0xee41,	// (0x0004587f) fshwr2_hwr_syb_pane_g1

0xb7cf,	// (0x0004220d) bg_popup_call_pane_cp01

0x6357,	// (0x0003cd95) fshwr2_func_candi_cell_pane_ParamLimits

0x6357,	// (0x0003cd95) fshwr2_func_candi_cell_pane

0x6388,	// (0x0003cdc6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6388,	// (0x0003cdc6) fshwr2_func_candi_cell_bg_pane

0x63a2,	// (0x0003cde0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x63a2,	// (0x0003cde0) fshwr2_func_candi_cell_pane_g1

0x63ca,	// (0x0003ce08) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x63ca,	// (0x0003ce08) fshwr2_func_candi_cell_pane_t1

0xb7cf,	// (0x0004220d) bg_button_pane_cp08

0xc9a2,	// (0x000433e0) cell_fshwr2_syb_bg_pane

0xb5c0,	// (0x00041ffe) cell_fshwr2_syb_bg_pane_g1

0xb5c8,	// (0x00042006) cell_fshwr2_syb_bg_pane_t1

0xbf74,	// (0x000429b2) main_tmo_pane

0x9d2e,	// (0x0004076c) uni_indicator_pane_g1_ParamLimits

0x9d43,	// (0x00040781) uni_indicator_pane_g2_ParamLimits

0x9d58,	// (0x00040796) uni_indicator_pane_g3_ParamLimits

0xdecb,	// (0x00044909) uni_indicator_pane_g4_ParamLimits

0xdecb,	// (0x00044909) uni_indicator_pane_g4

0xdedf,	// (0x0004491d) uni_indicator_pane_g5_ParamLimits

0xdedf,	// (0x0004491d) uni_indicator_pane_g5

0xdef3,	// (0x00044931) uni_indicator_pane_g6_ParamLimits

0xdef3,	// (0x00044931) uni_indicator_pane_g6

0xf949,	// (0x00046387) uni_indicator_pane_g_ParamLimits

0xa7d2,	// (0x00041210) popup_tmo_note_window_ParamLimits

0xa7d2,	// (0x00041210) popup_tmo_note_window

0xb7cf,	// (0x0004220d) fshwr2_bg_pane

0x63bb,	// (0x0003cdf9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x63bb,	// (0x0003cdf9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe6f,	// (0x000468ad) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe6f,	// (0x000468ad) fshwr2_func_candi_cell_pane_g

0xec9a,	// (0x000456d8) bg_popup_window_pane_cp01

0x63dd,	// (0x0003ce1b) bg_popup_window_pane_g1_cp01

0x63e6,	// (0x0003ce24) bg_popup_window_pane_cp22_ParamLimits

0x63e6,	// (0x0003ce24) bg_popup_window_pane_cp22

0x63f4,	// (0x0003ce32) listscroll_tmo_link_pane_ParamLimits

0x63f4,	// (0x0003ce32) listscroll_tmo_link_pane

0x6434,	// (0x0003ce72) popup_tmo_note_window_g1_ParamLimits

0x6434,	// (0x0003ce72) popup_tmo_note_window_g1

0x6441,	// (0x0003ce7f) tmo_note_info_pane_ParamLimits

0x6441,	// (0x0003ce7f) tmo_note_info_pane

0xb5d7,	// (0x00042015) list_tmo_note_info_pane_g1_ParamLimits

0xb5d7,	// (0x00042015) list_tmo_note_info_pane_g1

0x645b,	// (0x0003ce99) list_tmo_note_info_pane_g2_ParamLimits

0x645b,	// (0x0003ce99) list_tmo_note_info_pane_g2

0x0001,

0xfe74,	// (0x000468b2) list_tmo_note_info_pane_g_ParamLimits

0xfe74,	// (0x000468b2) list_tmo_note_info_pane_g

0x6477,	// (0x0003ceb5) list_tmo_note_info_text_pane_ParamLimits

0x6477,	// (0x0003ceb5) list_tmo_note_info_text_pane

0x64b9,	// (0x0003cef7) list_tmo_link_pane

0x64c6,	// (0x0003cf04) scroll_pane_cp20

0x64d3,	// (0x0003cf11) list_single_tmo_link_pane_ParamLimits

0x64d3,	// (0x0003cf11) list_single_tmo_link_pane

0x64e3,	// (0x0003cf21) list_single_tmo_link_pane_t1

0x64f1,	// (0x0003cf2f) list_tmo_note_info_text_pane_t1_ParamLimits

0x64f1,	// (0x0003cf2f) list_tmo_note_info_text_pane_t1

0x8d5f,	// (0x0003f79d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8d5f,	// (0x0003f79d) aid_size_touch_scroll_bar_cp01

0x7c97,	// (0x0003e6d5) aid_size_touch_slider_marker

0x80d0,	// (0x0003eb0e) popup_settings_window_ParamLimits

0x80d0,	// (0x0003eb0e) popup_settings_window

0x0bd6,	// (0x00037614) popup_candi_list_indi_window

0xcd20,	// (0x0004375e) aid_touch_navi_pane_ParamLimits

0x3143,	// (0x00039b81) rs_clock_indi_pane

0x314c,	// (0x00039b8a) sctrl_sk_bottom_pane_ParamLimits

0x315d,	// (0x00039b9b) sctrl_sk_top_pane_ParamLimits

0x3247,	// (0x00039c85) popup_fep_tooltip_window

0x60d5,	// (0x0003cb13) aid_size_cell_widget_grid_ParamLimits

0xb323,	// (0x00041d61) cell_ai5_widget_pane_g1_ParamLimits

0xb323,	// (0x00041d61) cell_ai5_widget_pane_g1

0xb36b,	// (0x00041da9) cell_ai5_widget_pane_g6_ParamLimits

0xb377,	// (0x00041db5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfdf2,	// (0x00046830) cell_ai5_widget_pane_g_ParamLimits

0xfdf2,	// (0x00046830) cell_ai5_widget_pane_g

0xb47b,	// (0x00041eb9) cell_ai5_widget_pane_t10_ParamLimits

0xb47b,	// (0x00041eb9) cell_ai5_widget_pane_t10

0xb48d,	// (0x00041ecb) grid_ai5_widget_pane_ParamLimits

0x618c,	// (0x0003cbca) cell_contacts_ai5_widget_pane_ParamLimits

0x618c,	// (0x0003cbca) cell_contacts_ai5_widget_pane

0x62d9,	// (0x0003cd17) popup_discreet_window_t3_ParamLimits

0x62d9,	// (0x0003cd17) popup_discreet_window_t3

0x6332,	// (0x0003cd70) popup_fshwr2_char_preview_window_ParamLimits

0x6332,	// (0x0003cd70) popup_fshwr2_char_preview_window

0xb5ee,	// (0x0004202c) tmo_note_info_pane_t1

0xb603,	// (0x00042041) tmo_note_info_pane_t2

0xb61a,	// (0x00042058) tmo_note_info_pane_t3

0x6495,	// (0x0003ced3) tmo_note_info_pane_t4

0x64a7,	// (0x0003cee5) tmo_note_info_pane_t5

0x0004,

0xfe79,	// (0x000468b7) tmo_note_info_pane_t

0x64b9,	// (0x0003cef7) list_tmo_link_pane_ParamLimits

0x64c6,	// (0x0003cf04) scroll_pane_cp20_ParamLimits

0xb7cf,	// (0x0004220d) bg_popup_fep_char_preview_window_cp01

0x650a,	// (0x0003cf48) popup_fshwr2_char_preview_window_t1

0x6518,	// (0x0003cf56) popup_candi_list_indi_window_g1

0x6521,	// (0x0003cf5f) bg_cell_contacts_ai5_widget_pane

0x652d,	// (0x0003cf6b) cell_contacts_ai5_widget_pane_g1

0x6541,	// (0x0003cf7f) cell_contacts_ai5_widget_pane_g2

0x6550,	// (0x0003cf8e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe84,	// (0x000468c2) cell_contacts_ai5_widget_pane_g

0x6563,	// (0x0003cfa1) cell_contacts_ai5_widget_pane_t1

0xbf74,	// (0x000429b2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb694,	// (0x000420d2) settings_container_pane

0xc9a2,	// (0x000433e0) listscroll_set_pane_copy1

0xe6a9,	// (0x000450e7) scroll_pane_cp121_copy1

0x6578,	// (0x0003cfb6) set_content_pane_copy1

0xb6a0,	// (0x000420de) aid_height_set_list_copy1_ParamLimits

0xb6a0,	// (0x000420de) aid_height_set_list_copy1

0xd8fa,	// (0x00044338) aid_size_parent_copy1_ParamLimits

0xd8fa,	// (0x00044338) aid_size_parent_copy1

0xb6ac,	// (0x000420ea) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb6ac,	// (0x000420ea) button_value_adjust_pane_cp6_copy1

0xc0cc,	// (0x00042b0a) list_highlight_pane_cp2_copy1_ParamLimits

0xc0cc,	// (0x00042b0a) list_highlight_pane_cp2_copy1

0xb6c0,	// (0x000420fe) list_set_pane_copy1_ParamLimits

0xb6c0,	// (0x000420fe) list_set_pane_copy1

0xb62f,	// (0x0004206d) main_pane_set_t1_copy1_ParamLimits

0xb62f,	// (0x0004206d) main_pane_set_t1_copy1

0xb669,	// (0x000420a7) main_pane_set_t2_copy1_ParamLimits

0xb669,	// (0x000420a7) main_pane_set_t2_copy1

0xb76d,	// (0x000421ab) main_pane_set_t3_copy1

0xb77b,	// (0x000421b9) main_pane_set_t4_copy1

0xb688,	// (0x000420c6) set_content_pane_g1_copy1_ParamLimits

0xb688,	// (0x000420c6) set_content_pane_g1_copy1

0xb789,	// (0x000421c7) setting_code_pane_copy1

0x6580,	// (0x0003cfbe) setting_slider_graphic_pane_copy1

0x6580,	// (0x0003cfbe) setting_slider_pane_copy1

0x658a,	// (0x0003cfc8) setting_text_pane_copy1

0x6594,	// (0x0003cfd2) setting_volume_pane_copy1

0xb793,	// (0x000421d1) settings_code_pane_cp2_copy1

0xb79b,	// (0x000421d9) settings_code_pane_cp_copy1_ParamLimits

0xb79b,	// (0x000421d9) settings_code_pane_cp_copy1

0xb7af,	// (0x000421ed) volume_set_pane_copy1

0xb7b7,	// (0x000421f5) volume_set_pane_g10_copy1

0xb7bf,	// (0x000421fd) volume_set_pane_g1_copy1

0xbc3a,	// (0x00042678) volume_set_pane_g2_copy1

0xbc42,	// (0x00042680) volume_set_pane_g3_copy1

0xbc4a,	// (0x00042688) volume_set_pane_g4_copy1

0xbc52,	// (0x00042690) volume_set_pane_g5_copy1

0xbc5a,	// (0x00042698) volume_set_pane_g6_copy1

0xbc62,	// (0x000426a0) volume_set_pane_g7_copy1

0xbc6a,	// (0x000426a8) volume_set_pane_g8_copy1

0xbc72,	// (0x000426b0) volume_set_pane_g9_copy1

0xb83f,	// (0x0004227d) bg_set_opt_pane_cp_copy1_ParamLimits

0xb83f,	// (0x0004227d) bg_set_opt_pane_cp_copy1

0x659d,	// (0x0003cfdb) setting_slider_pane_t1_copy1_ParamLimits

0x659d,	// (0x0003cfdb) setting_slider_pane_t1_copy1

0xbc7a,	// (0x000426b8) setting_slider_pane_t2_copy1_ParamLimits

0xbc7a,	// (0x000426b8) setting_slider_pane_t2_copy1

0xbc94,	// (0x000426d2) setting_slider_pane_t3_copy1_ParamLimits

0xbc94,	// (0x000426d2) setting_slider_pane_t3_copy1

0xbcac,	// (0x000426ea) slider_set_pane_copy1_ParamLimits

0xbcac,	// (0x000426ea) slider_set_pane_copy1

0xbfdb,	// (0x00042a19) set_opt_bg_pane_g1_copy2

0xbfe3,	// (0x00042a21) set_opt_bg_pane_g2_copy2

0x65bb,	// (0x0003cff9) set_opt_bg_pane_g3_copy2

0xbff3,	// (0x00042a31) set_opt_bg_pane_g4_copy2

0xbffb,	// (0x00042a39) set_opt_bg_pane_g5_copy2

0xc003,	// (0x00042a41) set_opt_bg_pane_g6_copy2

0xbcc2,	// (0x00042700) set_opt_bg_pane_g7_copy2

0x65c5,	// (0x0003d003) set_opt_bg_pane_g8_copy2

0x65cf,	// (0x0003d00d) set_opt_bg_pane_g9_copy2

0x3947,	// (0x0003a385) aid_size_touch_slider_mark_copy1_ParamLimits

0x3947,	// (0x0003a385) aid_size_touch_slider_mark_copy1

0x65d9,	// (0x0003d017) slider_set_pane_g1_copy1

0x395b,	// (0x0003a399) slider_set_pane_g2_copy1

0x2a34,	// (0x00039472) slider_set_pane_g3_copy1_ParamLimits

0x2a34,	// (0x00039472) slider_set_pane_g3_copy1

0x2a48,	// (0x00039486) slider_set_pane_g4_copy1_ParamLimits

0x2a48,	// (0x00039486) slider_set_pane_g4_copy1

0x2a60,	// (0x0003949e) slider_set_pane_g5_copy1_ParamLimits

0x2a60,	// (0x0003949e) slider_set_pane_g5_copy1

0x2a34,	// (0x00039472) slider_set_pane_g6_copy1_ParamLimits

0x2a34,	// (0x00039472) slider_set_pane_g6_copy1

0x89a9,	// (0x0003f3e7) slider_set_pane_g7_copy1_ParamLimits

0x89a9,	// (0x0003f3e7) slider_set_pane_g7_copy1

0xb7e3,	// (0x00042221) bg_set_opt_pane_cp2_copy1

0x65e2,	// (0x0003d020) setting_slider_graphic_pane_g1_copy1

0xbcca,	// (0x00042708) setting_slider_graphic_pane_t1_copy1

0xbcda,	// (0x00042718) setting_slider_graphic_pane_t2_copy1

0xbcea,	// (0x00042728) slider_set_pane_cp_copy1

0x65f3,	// (0x0003d031) input_focus_pane_cp1_copy1

0x65fc,	// (0x0003d03a) list_set_text_pane_copy1

0x6604,	// (0x0003d042) setting_text_pane_g1_copy1

0x11eb,	// (0x00037c29) set_text_pane_t1_copy1

0x65f3,	// (0x0003d031) input_focus_pane_cp2_copy1

0x6604,	// (0x0003d042) setting_code_pane_g1_copy1

0xbcf2,	// (0x00042730) setting_code_pane_t1_copy1

0x8f5e,	// (0x0003f99c) list_set_graphic_pane_copy1

0xb7e3,	// (0x00042221) bg_set_opt_pane_cp4_copy1

0x8f70,	// (0x0003f9ae) list_set_graphic_pane_g1_copy1_ParamLimits

0x8f70,	// (0x0003f9ae) list_set_graphic_pane_g1_copy1

0xbd00,	// (0x0004273e) list_set_graphic_pane_g2_copy1

0x8f88,	// (0x0003f9c6) list_set_graphic_pane_t1_copy1_ParamLimits

0x8f88,	// (0x0003f9c6) list_set_graphic_pane_t1_copy1

0xec9a,	// (0x000456d8) rs_clock_indi_pane_g1

0x660d,	// (0x0003d04b) rs_clock_indi_pane_t1

0x6229,	// (0x0003cc67) rs_indi_pane

0x661b,	// (0x0003d059) rs_indi_pane_g1

0x6624,	// (0x0003d062) rs_indi_pane_g2

0x662d,	// (0x0003d06b) rs_indi_pane_g3

0x0002,

0xfe8b,	// (0x000468c9) rs_indi_pane_g

0xc9a2,	// (0x000433e0) bg_popup_preview_window_pane_cp03

0x6636,	// (0x0003d074) popup_fep_tooltip_window_t1

0x48d7,	// (0x0003b315) popup_note2_window_g2_ParamLimits

0x48d7,	// (0x0003b315) popup_note2_window_g2

0x0001,

0xfc4d,	// (0x0004668b) popup_note2_window_g_ParamLimits

0xfc4d,	// (0x0004668b) popup_note2_window_g

0x4dd2,	// (0x0003b810) bg_popup_sub_pane_cp11_ParamLimits

0x4ddf,	// (0x0003b81d) cell_ai3_links_pane_g1_ParamLimits

0x4df6,	// (0x0003b834) cell_ai3_links_pane_t1

0x11eb,	// (0x00037c29) set_text_pane_t1_copy1_ParamLimits

0xc8b3,	// (0x000432f1) cell_graphic_popup_pane_cp2_ParamLimits

0xc8b3,	// (0x000432f1) cell_graphic_popup_pane_cp2

0x6644,	// (0x0003d082) cell_graphic_popup_pane_g1_cp2

0xbb95,	// (0x000425d3) cell_graphic_popup_pane_g2_cp2

0x664c,	// (0x0003d08a) cell_graphic_popup_pane_g3_cp2

0x6654,	// (0x0003d092) cell_graphic_popup_pane_t2_cp2

0xbba6,	// (0x000425e4) grid_highlight_pane_cp3_cp2

0xc276,	// (0x00042cb4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbf74,	// (0x000429b2) main_tmo_pane_ParamLimits

0xa7c6,	// (0x00041204) popup_tmo_big_image_note_window

0xb313,	// (0x00041d51) cell_ai5_widget_list_pane

0xb31b,	// (0x00041d59) cell_ai5_widget_lrg_icon_pane

0xb5ee,	// (0x0004202c) tmo_note_info_pane_t1_ParamLimits

0xb603,	// (0x00042041) tmo_note_info_pane_t2_ParamLimits

0xb61a,	// (0x00042058) tmo_note_info_pane_t3_ParamLimits

0x6495,	// (0x0003ced3) tmo_note_info_pane_t4_ParamLimits

0x64a7,	// (0x0003cee5) tmo_note_info_pane_t5_ParamLimits

0xfe79,	// (0x000468b7) tmo_note_info_pane_t_ParamLimits

0xb694,	// (0x000420d2) settings_container_pane_ParamLimits

0x65eb,	// (0x0003d029) indicator_popup_pane_cp5

0x65eb,	// (0x0003d029) indicator_popup_pane_cp6

0x8f5e,	// (0x0003f99c) list_set_graphic_pane_copy1_ParamLimits

0xb7cf,	// (0x0004220d) bg_popup_window_pane_cp23

0x6662,	// (0x0003d0a0) popup_tmo_big_image_note_window_g1

0x666c,	// (0x0003d0aa) popup_tmo_big_image_note_window_t1

0x667c,	// (0x0003d0ba) popup_tmo_big_image_note_window_t2

0x668c,	// (0x0003d0ca) popup_tmo_big_image_note_window_t3

0x0002,

0xfe92,	// (0x000468d0) popup_tmo_big_image_note_window_t

0xbd08,	// (0x00042746) cell_ai5_widget_lrg_icon_pane_g1

0xbd10,	// (0x0004274e) cell_ai5_widget_lrg_icon_pane_t1

0xbd1e,	// (0x0004275c) cell_ai5_widget_list_row_pane_ParamLimits

0xbd1e,	// (0x0004275c) cell_ai5_widget_list_row_pane

0xbd37,	// (0x00042775) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xbd37,	// (0x00042775) cell_ai5_widget_list_row_pane_g1

0xbd44,	// (0x00042782) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xbd44,	// (0x00042782) cell_ai5_widget_list_row_pane_t1

0xbd5c,	// (0x0004279a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xbd5c,	// (0x0004279a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfe99,	// (0x000468d7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe99,	// (0x000468d7) cell_ai5_widget_list_row_pane_t

0xb7cf,	// (0x0004220d) main_fep_vtchi_ss_pane

0x669c,	// (0x0003d0da) popup_fep_char_pre_window

0x66a4,	// (0x0003d0e2) popup_fep_ituss_window

0x66af,	// (0x0003d0ed) popup_fep_vkbss_window

0x66b8,	// (0x0003d0f6) grid_vkbss_keypad_pane_ParamLimits

0x66b8,	// (0x0003d0f6) grid_vkbss_keypad_pane

0x66c8,	// (0x0003d106) ituss_keypad_pane

0x66d0,	// (0x0003d10e) aid_vkbss_key_offset_ParamLimits

0x66d0,	// (0x0003d10e) aid_vkbss_key_offset

0x66df,	// (0x0003d11d) cell_vkbss_key_pane_ParamLimits

0x66df,	// (0x0003d11d) cell_vkbss_key_pane

0x66f5,	// (0x0003d133) bg_cell_vkbss_key_g1_ParamLimits

0x66f5,	// (0x0003d133) bg_cell_vkbss_key_g1

0x6701,	// (0x0003d13f) cell_vkbss_key_3p_pane_ParamLimits

0x6701,	// (0x0003d13f) cell_vkbss_key_3p_pane

0x671b,	// (0x0003d159) cell_vkbss_key_g1_ParamLimits

0x671b,	// (0x0003d159) cell_vkbss_key_g1

0x6735,	// (0x0003d173) cell_vkbss_key_t1_ParamLimits

0x6735,	// (0x0003d173) cell_vkbss_key_t1

0x6760,	// (0x0003d19e) cell_ituss_key_pane_ParamLimits

0x6760,	// (0x0003d19e) cell_ituss_key_pane

0x676f,	// (0x0003d1ad) bg_cell_ituss_key_g1_ParamLimits

0x676f,	// (0x0003d1ad) bg_cell_ituss_key_g1

0x677b,	// (0x0003d1b9) cell_ituss_key_pane_g1_ParamLimits

0x677b,	// (0x0003d1b9) cell_ituss_key_pane_g1

0x6787,	// (0x0003d1c5) cell_ituss_key_pane_g2_ParamLimits

0x6787,	// (0x0003d1c5) cell_ituss_key_pane_g2

0x0001,

0xfe9e,	// (0x000468dc) cell_ituss_key_pane_g_ParamLimits

0xfe9e,	// (0x000468dc) cell_ituss_key_pane_g

0x679a,	// (0x0003d1d8) cell_ituss_key_t1_ParamLimits

0x679a,	// (0x0003d1d8) cell_ituss_key_t1

0x67b8,	// (0x0003d1f6) cell_ituss_key_t2_ParamLimits

0x67b8,	// (0x0003d1f6) cell_ituss_key_t2

0x67d7,	// (0x0003d215) cell_ituss_key_t3_ParamLimits

0x67d7,	// (0x0003d215) cell_ituss_key_t3

0x67f6,	// (0x0003d234) cell_ituss_key_t4_ParamLimits

0x67f6,	// (0x0003d234) cell_ituss_key_t4

0x0003,

0xfea3,	// (0x000468e1) cell_ituss_key_t_ParamLimits

0xfea3,	// (0x000468e1) cell_ituss_key_t

0x6815,	// (0x0003d253) cell_vkbss_key_3p_pane_g1

0x681d,	// (0x0003d25b) cell_vkbss_key_3p_pane_g2

0x6825,	// (0x0003d263) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeac,	// (0x000468ea) cell_vkbss_key_3p_pane_g

0xb7cf,	// (0x0004220d) bg_popup_fep_char_preview_window_cp02

0x682d,	// (0x0003d26b) popup_fep_char_pre_window_t1

0xb309,	// (0x00041d47) main_ai5_sk_pane

0x6521,	// (0x0003cf5f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x652d,	// (0x0003cf6b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6541,	// (0x0003cf7f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6550,	// (0x0003cf8e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe84,	// (0x000468c2) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6563,	// (0x0003cfa1) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbf74,	// (0x000429b2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xc2de,	// (0x00042d1c) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large

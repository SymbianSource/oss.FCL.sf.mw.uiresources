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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000279eb };

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
0xeaf0,	// (0x000364db) Screen

0xeafa,	// (0x000364e5) application_window_ParamLimits

0xeafa,	// (0x000364e5) application_window

0xb8e8,	// (0x000332d3) screen_g1

0x90e6,	// (0x00030ad1) area_bottom_pane_ParamLimits

0x90e6,	// (0x00030ad1) area_bottom_pane

0x91a6,	// (0x00030b91) area_top_pane_ParamLimits

0x91a6,	// (0x00030b91) area_top_pane

0x9230,	// (0x00030c1b) main_pane_ParamLimits

0x9230,	// (0x00030c1b) main_pane

0xb8f2,	// (0x000332dd) misc_graphics

0xf0e9,	// (0x00036ad4) battery_pane_ParamLimits

0xf0e9,	// (0x00036ad4) battery_pane

0xd448,	// (0x00034e33) bg_status_flat_pane_g8

0xd450,	// (0x00034e3b) bg_status_flat_pane_g9

0xcbdb,	// (0x000345c6) context_pane_ParamLimits

0xcbdb,	// (0x000345c6) context_pane

0xf21b,	// (0x00036c06) navi_pane_ParamLimits

0xf21b,	// (0x00036c06) navi_pane

0xf288,	// (0x00036c73) signal_pane_ParamLimits

0xf288,	// (0x00036c73) signal_pane

0x0008,

0xf879,	// (0x00037264) bg_status_flat_pane_g

0xf2e9,	// (0x00036cd4) status_pane_g1_ParamLimits

0xf2e9,	// (0x00036cd4) status_pane_g1

0xd4d8,	// (0x00034ec3) status_pane_g2_ParamLimits

0xd4d8,	// (0x00034ec3) status_pane_g2

0xcc40,	// (0x0003462b) status_pane_g3_ParamLimits

0xcc40,	// (0x0003462b) status_pane_g3

0x0004,

0xf7a0,	// (0x0003718b) status_pane_g_ParamLimits

0xf7a0,	// (0x0003718b) status_pane_g

0xf2fd,	// (0x00036ce8) title_pane_ParamLimits

0xf2fd,	// (0x00036ce8) title_pane

0xf33a,	// (0x00036d25) uni_indicator_pane_ParamLimits

0xf33a,	// (0x00036d25) uni_indicator_pane

0xcb14,	// (0x000344ff) bg_list_pane_ParamLimits

0xcb14,	// (0x000344ff) bg_list_pane

0x88cb,	// (0x000302b6) find_pane

0xf088,	// (0x00036a73) listscroll_app_pane_ParamLimits

0xf088,	// (0x00036a73) listscroll_app_pane

0xcb34,	// (0x0003451f) listscroll_form_pane

0x88d3,	// (0x000302be) listscroll_gen_pane_ParamLimits

0x88d3,	// (0x000302be) listscroll_gen_pane

0x9af5,	// (0x000314e0) listscroll_set_pane

0xedde,	// (0x000367c9) main_idle_act_pane

0xc99b,	// (0x00034386) main_idle_trad_pane

0xc99b,	// (0x00034386) main_list_empty_pane

0xcb4e,	// (0x00034539) main_midp_pane

0xcb5a,	// (0x00034545) main_pane_g1_ParamLimits

0xcb5a,	// (0x00034545) main_pane_g1

0x9afd,	// (0x000314e8) popup_ai_message_window_ParamLimits

0x9afd,	// (0x000314e8) popup_ai_message_window

0x9b93,	// (0x0003157e) popup_fep_china_uni_window_ParamLimits

0x9b93,	// (0x0003157e) popup_fep_china_uni_window

0x9bd1,	// (0x000315bc) popup_fep_japan_candidate_window_ParamLimits

0x9bd1,	// (0x000315bc) popup_fep_japan_candidate_window

0x9bef,	// (0x000315da) popup_fep_japan_predictive_window_ParamLimits

0x9bef,	// (0x000315da) popup_fep_japan_predictive_window

0x9c1b,	// (0x00031606) popup_find_window

0x9c28,	// (0x00031613) popup_grid_graphic_window_ParamLimits

0x9c28,	// (0x00031613) popup_grid_graphic_window

0x9c4e,	// (0x00031639) popup_large_graphic_colour_window

0x9c72,	// (0x0003165d) popup_menu_window_ParamLimits

0x9c72,	// (0x0003165d) popup_menu_window

0x9dba,	// (0x000317a5) popup_note_image_window

0x9da8,	// (0x00031793) popup_note_wait_window_ParamLimits

0x9da8,	// (0x00031793) popup_note_wait_window

0x9da8,	// (0x00031793) popup_note_window_ParamLimits

0x9da8,	// (0x00031793) popup_note_window

0x9e0e,	// (0x000317f9) popup_query_code_window_ParamLimits

0x9e0e,	// (0x000317f9) popup_query_code_window

0x9e20,	// (0x0003180b) popup_query_data_code_window_ParamLimits

0x9e20,	// (0x0003180b) popup_query_data_code_window

0x9e35,	// (0x00031820) popup_query_data_window_ParamLimits

0x9e35,	// (0x00031820) popup_query_data_window

0x9e4b,	// (0x00031836) popup_query_sat_info_window_ParamLimits

0x9e4b,	// (0x00031836) popup_query_sat_info_window

0x9e7c,	// (0x00031867) popup_snote_single_graphic_window_ParamLimits

0x9e7c,	// (0x00031867) popup_snote_single_graphic_window

0x9e7c,	// (0x00031867) popup_snote_single_text_window_ParamLimits

0x9e7c,	// (0x00031867) popup_snote_single_text_window

0x9e8f,	// (0x0003187a) popup_sub_window_general

0x9f9d,	// (0x00031988) popup_window_general_ParamLimits

0x9f9d,	// (0x00031988) popup_window_general

0xcb68,	// (0x00034553) power_save_pane

0x998a,	// (0x00031375) control_pane_g1_ParamLimits

0x998a,	// (0x00031375) control_pane_g1

0x99b1,	// (0x0003139c) control_pane_g2_ParamLimits

0x99b1,	// (0x0003139c) control_pane_g2

0xcafe,	// (0x000344e9) control_pane_g3_ParamLimits

0xcafe,	// (0x000344e9) control_pane_g3

0x0007,

0xf788,	// (0x00037173) control_pane_g_ParamLimits

0xf788,	// (0x00037173) control_pane_g

0x99f9,	// (0x000313e4) control_pane_t1_ParamLimits

0x99f9,	// (0x000313e4) control_pane_t1

0x9a4c,	// (0x00031437) control_pane_t2_ParamLimits

0x9a4c,	// (0x00031437) control_pane_t2

0x0002,

0xf799,	// (0x00037184) control_pane_t_ParamLimits

0xf799,	// (0x00037184) control_pane_t

0xefbc,	// (0x000369a7) navi_navi_volume_pane_cp1

0xefc4,	// (0x000369af) status_small_icon_pane

0xcaca,	// (0x000344b5) status_small_pane_g1_ParamLimits

0xcaca,	// (0x000344b5) status_small_pane_g1

0xefcc,	// (0x000369b7) status_small_pane_g2_ParamLimits

0xefcc,	// (0x000369b7) status_small_pane_g2

0xefd8,	// (0x000369c3) status_small_pane_g3_ParamLimits

0xefd8,	// (0x000369c3) status_small_pane_g3

0xefe4,	// (0x000369cf) status_small_pane_g4_ParamLimits

0xefe4,	// (0x000369cf) status_small_pane_g4

0xeff0,	// (0x000369db) status_small_pane_g5_ParamLimits

0xeff0,	// (0x000369db) status_small_pane_g5

0xeffc,	// (0x000369e7) status_small_pane_g6_ParamLimits

0xeffc,	// (0x000369e7) status_small_pane_g6

0x0007,

0xf777,	// (0x00037162) status_small_pane_g_ParamLimits

0xf777,	// (0x00037162) status_small_pane_g

0xf02b,	// (0x00036a16) status_small_pane_t1

0xf04d,	// (0x00036a38) status_small_wait_pane_ParamLimits

0xf04d,	// (0x00036a38) status_small_wait_pane

0xeeaf,	// (0x0003689a) aid_levels_signal_ParamLimits

0xeeaf,	// (0x0003689a) aid_levels_signal

0xeebe,	// (0x000368a9) signal_pane_g1_ParamLimits

0xeebe,	// (0x000368a9) signal_pane_g1

0xeed3,	// (0x000368be) signal_pane_g2_ParamLimits

0xeed3,	// (0x000368be) signal_pane_g2

0x0003,

0xf708,	// (0x000370f3) signal_pane_g_ParamLimits

0xf708,	// (0x000370f3) signal_pane_g

0xc4a3,	// (0x00033e8e) context_pane_g1

0xeb08,	// (0x000364f3) title_pane_g1

0xeb32,	// (0x0003651d) title_pane_t1

0xb908,	// (0x000332f3) title_pane_t2

0xb92e,	// (0x00033319) title_pane_t3

0x0002,

0xf557,	// (0x00036f42) title_pane_t

0xf350,	// (0x00036d3b) aid_levels_battery_ParamLimits

0xf350,	// (0x00036d3b) aid_levels_battery

0xf361,	// (0x00036d4c) battery_pane_g1_ParamLimits

0xf361,	// (0x00036d4c) battery_pane_g1

0xf377,	// (0x00036d62) battery_pane_g2_ParamLimits

0xf377,	// (0x00036d62) battery_pane_g2

0x0001,

0xf7ab,	// (0x00037196) battery_pane_g_ParamLimits

0xf7ab,	// (0x00037196) battery_pane_g

0xf508,	// (0x00036ef3) uni_indicator_pane_g1

0xf51b,	// (0x00036f06) uni_indicator_pane_g2

0xf52d,	// (0x00036f18) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0003730c) uni_indicator_pane_g

0xc81b,	// (0x00034206) navi_icon_pane_ParamLimits

0xc81b,	// (0x00034206) navi_icon_pane

0xc76a,	// (0x00034155) navi_midp_pane

0xc837,	// (0x00034222) navi_navi_pane

0xc841,	// (0x0003422c) navi_text_pane_ParamLimits

0xc841,	// (0x0003422c) navi_text_pane

0xb8e8,	// (0x000332d3) status_small_wait_pane_g1

0xbc25,	// (0x00033610) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00037307) status_small_wait_pane_g

0xda07,	// (0x000353f2) navi_navi_icon_text_pane

0xda0f,	// (0x000353fa) navi_navi_pane_g1_ParamLimits

0xda0f,	// (0x000353fa) navi_navi_pane_g1

0xda21,	// (0x0003540c) navi_navi_pane_g2_ParamLimits

0xda21,	// (0x0003540c) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x000372d5) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x000372d5) navi_navi_pane_g

0xda33,	// (0x0003541e) navi_navi_tabs_pane

0xda3c,	// (0x00035427) navi_navi_text_pane

0xda07,	// (0x000353f2) navi_navi_volume_pane

0xd9e3,	// (0x000353ce) navi_text_pane_t1

0xd9d7,	// (0x000353c2) navi_icon_pane_g1

0xd93b,	// (0x00035326) navi_navi_text_pane_t1

0xa21d,	// (0x00031c08) navi_navi_volume_pane_g1

0xa225,	// (0x00031c10) volume_small_pane

0xd919,	// (0x00035304) navi_navi_icon_text_pane_g1

0xd921,	// (0x0003530c) navi_navi_icon_text_pane_t1

0xc837,	// (0x00034222) navi_tabs_2_long_pane

0xc837,	// (0x00034222) navi_tabs_2_pane

0xc837,	// (0x00034222) navi_tabs_3_long_pane

0xc837,	// (0x00034222) navi_tabs_3_pane

0xc837,	// (0x00034222) navi_tabs_4_pane

0xa1fd,	// (0x00031be8) tabs_2_active_pane_ParamLimits

0xa1fd,	// (0x00031be8) tabs_2_active_pane

0xa20d,	// (0x00031bf8) tabs_2_passive_pane_ParamLimits

0xa20d,	// (0x00031bf8) tabs_2_passive_pane

0xa1cb,	// (0x00031bb6) tabs_3_active_pane_ParamLimits

0xa1cb,	// (0x00031bb6) tabs_3_active_pane

0xa1db,	// (0x00031bc6) tabs_3_passive_pane_ParamLimits

0xa1db,	// (0x00031bc6) tabs_3_passive_pane

0xa1ec,	// (0x00031bd7) tabs_3_passive_pane_cp_ParamLimits

0xa1ec,	// (0x00031bd7) tabs_3_passive_pane_cp

0xa187,	// (0x00031b72) tabs_4_active_pane_ParamLimits

0xa187,	// (0x00031b72) tabs_4_active_pane

0xa198,	// (0x00031b83) tabs_4_passive_pane_ParamLimits

0xa198,	// (0x00031b83) tabs_4_passive_pane

0xa1a9,	// (0x00031b94) tabs_4_passive_pane_cp_ParamLimits

0xa1a9,	// (0x00031b94) tabs_4_passive_pane_cp

0xa1ba,	// (0x00031ba5) tabs_4_passive_pane_cp2_ParamLimits

0xa1ba,	// (0x00031ba5) tabs_4_passive_pane_cp2

0xa167,	// (0x00031b52) tabs_2_long_active_pane_ParamLimits

0xa167,	// (0x00031b52) tabs_2_long_active_pane

0xa177,	// (0x00031b62) tabs_2_long_passive_pane_ParamLimits

0xa177,	// (0x00031b62) tabs_2_long_passive_pane

0xa134,	// (0x00031b1f) tabs_3_long_active_pane_ParamLimits

0xa134,	// (0x00031b1f) tabs_3_long_active_pane

0xa145,	// (0x00031b30) tabs_3_long_passive_pane_ParamLimits

0xa145,	// (0x00031b30) tabs_3_long_passive_pane

0xa156,	// (0x00031b41) tabs_3_long_passive_pane_cp_ParamLimits

0xa156,	// (0x00031b41) tabs_3_long_passive_pane_cp

0xa0da,	// (0x00031ac5) volume_small_pane_g1

0xa0e3,	// (0x00031ace) volume_small_pane_g2

0xa0ec,	// (0x00031ad7) volume_small_pane_g3

0xa0f5,	// (0x00031ae0) volume_small_pane_g4

0xa0fe,	// (0x00031ae9) volume_small_pane_g5

0xa107,	// (0x00031af2) volume_small_pane_g6

0xa110,	// (0x00031afb) volume_small_pane_g7

0xa119,	// (0x00031b04) volume_small_pane_g8

0xa122,	// (0x00031b0d) volume_small_pane_g9

0xa12b,	// (0x00031b16) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x000372a1) volume_small_pane_g

0xb940,	// (0x0003332b) bg_active_tab_pane_cp2_ParamLimits

0xb940,	// (0x0003332b) bg_active_tab_pane_cp2

0xb94e,	// (0x00033339) tabs_3_active_pane_g1

0xeb9a,	// (0x00036585) tabs_3_active_pane_t1

0xb940,	// (0x0003332b) bg_passive_tab_pane_cp2_ParamLimits

0xb940,	// (0x0003332b) bg_passive_tab_pane_cp2

0xb94e,	// (0x00033339) tabs_3_passive_pane_g1

0xeb9a,	// (0x00036585) tabs_3_passive_pane_t1

0xb940,	// (0x0003332b) bg_active_tab_pane_cp3_ParamLimits

0xb940,	// (0x0003332b) bg_active_tab_pane_cp3

0xb956,	// (0x00033341) tabs_4_active_pane_g1

0xebac,	// (0x00036597) tabs_4_active_pane_t1

0xb940,	// (0x0003332b) bg_passive_tab_pane_cp3_ParamLimits

0xb940,	// (0x0003332b) bg_passive_tab_pane_cp3

0xb956,	// (0x00033341) tabs_4_1_passive_pane_g1

0xebac,	// (0x00036597) tabs_4_1_passive_pane_t1

0xcb4e,	// (0x00034539) list_highlight_pane_cp2

0x00db,	// (0x00027ac6) list_set_pane_ParamLimits

0x00db,	// (0x00027ac6) list_set_pane

0x0169,	// (0x00027b54) main_pane_set_t1_ParamLimits

0x0169,	// (0x00027b54) main_pane_set_t1

0x0189,	// (0x00027b74) main_pane_set_t2_ParamLimits

0x0189,	// (0x00027b74) main_pane_set_t2

0x019b,	// (0x00027b86) main_pane_set_t3_ParamLimits

0x019b,	// (0x00027b86) main_pane_set_t3

0x01ad,	// (0x00027b98) main_pane_set_t4_ParamLimits

0x01ad,	// (0x00027b98) main_pane_set_t4

0x0003,

0xf986,	// (0x00037371) main_pane_set_t_ParamLimits

0xf986,	// (0x00037371) main_pane_set_t

0x01bf,	// (0x00027baa) setting_code_pane

0x01c7,	// (0x00027bb2) setting_slider_graphic_pane

0x01c7,	// (0x00027bb2) setting_slider_pane

0x01c7,	// (0x00027bb2) setting_text_pane

0x01c7,	// (0x00027bb2) setting_volume_pane

0x9431,	// (0x00030e1c) volume_set_pane

0xb940,	// (0x0003332b) bg_set_opt_pane_cp

0x9439,	// (0x00030e24) setting_slider_pane_t1

0x9452,	// (0x00030e3d) setting_slider_pane_t2

0x946b,	// (0x00030e56) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00036f49) setting_slider_pane_t

0x9482,	// (0x00030e6d) slider_set_pane

0xb8f2,	// (0x000332dd) bg_set_opt_pane_cp2

0xb95e,	// (0x00033349) setting_slider_graphic_pane_g1

0x9498,	// (0x00030e83) setting_slider_graphic_pane_t1

0x94a7,	// (0x00030e92) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00036f50) setting_slider_graphic_pane_t

0x94b6,	// (0x00030ea1) slider_set_pane_cp

0xb8f2,	// (0x000332dd) input_focus_pane_cp1

0xde52,	// (0x0003583d) list_set_text_pane

0xb8e8,	// (0x000332d3) setting_text_pane_g1

0xb8f2,	// (0x000332dd) input_focus_pane_cp2

0xb8e8,	// (0x000332d3) setting_code_pane_g1

0xb967,	// (0x00033352) setting_code_pane_t1

0x819b,	// (0x0002fb86) set_text_pane_t1_ParamLimits

0x819b,	// (0x0002fb86) set_text_pane_t1

0xbf6d,	// (0x00033958) set_opt_bg_pane_g1

0xbf75,	// (0x00033960) set_opt_bg_pane_g2

0x009e,	// (0x00027a89) set_opt_bg_pane_g3

0xbf85,	// (0x00033970) set_opt_bg_pane_g4

0xbf8d,	// (0x00033978) set_opt_bg_pane_g5

0xbf95,	// (0x00033980) set_opt_bg_pane_g6

0xde4a,	// (0x00035835) set_opt_bg_pane_g7

0x00a6,	// (0x00027a91) set_opt_bg_pane_g8

0x00ae,	// (0x00027a99) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003735e) set_opt_bg_pane_g

0xde3d,	// (0x00035828) slider_set_pane_g1

0xa292,	// (0x00031c7d) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003734f) slider_set_pane_g

0xa22e,	// (0x00031c19) volume_set_pane_g1

0xa236,	// (0x00031c21) volume_set_pane_g2

0xa23e,	// (0x00031c29) volume_set_pane_g3

0xa246,	// (0x00031c31) volume_set_pane_g4

0xa24e,	// (0x00031c39) volume_set_pane_g5

0xa256,	// (0x00031c41) volume_set_pane_g6

0xa25e,	// (0x00031c49) volume_set_pane_g7

0xa266,	// (0x00031c51) volume_set_pane_g8

0xa26e,	// (0x00031c59) volume_set_pane_g9

0xa276,	// (0x00031c61) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00037327) volume_set_pane_g

0xebbe,	// (0x000365a9) indicator_pane_ParamLimits

0xebbe,	// (0x000365a9) indicator_pane

0xebca,	// (0x000365b5) main_idle_pane_g2_ParamLimits

0xebca,	// (0x000365b5) main_idle_pane_g2

0xebec,	// (0x000365d7) main_pane_idle_g1_ParamLimits

0xebec,	// (0x000365d7) main_pane_idle_g1

0xb975,	// (0x00033360) popup_clock_digital_analogue_window_ParamLimits

0xb975,	// (0x00033360) popup_clock_digital_analogue_window

0xebf9,	// (0x000365e4) soft_indicator_pane_ParamLimits

0xebf9,	// (0x000365e4) soft_indicator_pane

0xec05,	// (0x000365f0) wallpaper_pane_ParamLimits

0xec05,	// (0x000365f0) wallpaper_pane

0xb8e8,	// (0x000332d3) wallpaper_pane_g1

0xec11,	// (0x000365fc) indicator_pane_g1_ParamLimits

0xec11,	// (0x000365fc) indicator_pane_g1

0xdfbc,	// (0x000359a7) navi_navi_icon_text_pane_srt_g1

0xb9a3,	// (0x0003338e) soft_indicator_pane_t1

0xb9bd,	// (0x000333a8) aid_ps_area_pane

0xec1d,	// (0x00036608) aid_ps_clock_pane

0xb9ce,	// (0x000333b9) aid_ps_indicator_pane

0xb9da,	// (0x000333c5) indicator_ps_pane_ParamLimits

0xb9da,	// (0x000333c5) indicator_ps_pane

0xb9e9,	// (0x000333d4) power_save_pane_g1_ParamLimits

0xb9e9,	// (0x000333d4) power_save_pane_g1

0xb9f5,	// (0x000333e0) power_save_pane_g2_ParamLimits

0xb9f5,	// (0x000333e0) power_save_pane_g2

0x90a2,	// (0x00030a8d) aid_navinavi_width_pane

0xb9bd,	// (0x000333a8) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00036f55) power_save_pane_g_ParamLimits

0xf56a,	// (0x00036f55) power_save_pane_g

0xba03,	// (0x000333ee) power_save_pane_t1_ParamLimits

0xba03,	// (0x000333ee) power_save_pane_t1

0xec1d,	// (0x00036608) aid_ps_clock_pane_ParamLimits

0xb9ce,	// (0x000333b9) aid_ps_indicator_pane_ParamLimits

0xba15,	// (0x00033400) power_save_pane_t4_ParamLimits

0xba15,	// (0x00033400) power_save_pane_t4

0x0001,

0xf56f,	// (0x00036f5a) power_save_pane_t_ParamLimits

0xf56f,	// (0x00036f5a) power_save_pane_t

0xba3f,	// (0x0003342a) power_save_t3_ParamLimits

0xba3f,	// (0x0003342a) power_save_t3

0xba2a,	// (0x00033415) power_save_t2_ParamLimits

0xba2a,	// (0x00033415) power_save_t2

0xba54,	// (0x0003343f) indicator_ps_pane_g1

0xec29,	// (0x00036614) ai_gene_pane_ParamLimits

0xec29,	// (0x00036614) ai_gene_pane

0xec35,	// (0x00036620) ai_links_pane_ParamLimits

0xec35,	// (0x00036620) ai_links_pane

0xec41,	// (0x0003662c) indicator_pane_cp1_ParamLimits

0xec41,	// (0x0003662c) indicator_pane_cp1

0xec4d,	// (0x00036638) main_pane_idle_g1_cp_ParamLimits

0xec4d,	// (0x00036638) main_pane_idle_g1_cp

0xba5d,	// (0x00033448) popup_ai_links_title_window

0xec59,	// (0x00036644) soft_indicator_pane_cp1_ParamLimits

0xec59,	// (0x00036644) soft_indicator_pane_cp1

0xdca5,	// (0x00035690) ai_links_pane_g1

0xdcae,	// (0x00035699) grid_ai_links_pane

0xf4ff,	// (0x00036eea) ai_gene_pane_1

0xdc93,	// (0x0003567e) ai_gene_pane_2

0xdc9c,	// (0x00035687) list_highlight_pane_cp4

0xf4e7,	// (0x00036ed2) cell_ai_link_pane_ParamLimits

0xf4e7,	// (0x00036ed2) cell_ai_link_pane

0xdc8b,	// (0x00035676) cell_ai_link_pane_g1

0xbc25,	// (0x00033610) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00037302) cell_ai_link_pane_g

0xb8f2,	// (0x000332dd) grid_highlight_cp2

0xb8f2,	// (0x000332dd) bg_popup_sub_pane_cp1

0xba74,	// (0x0003345f) popup_ai_links_title_window_t1

0xdbdd,	// (0x000355c8) ai_gene_pane_1_g1_ParamLimits

0xdbdd,	// (0x000355c8) ai_gene_pane_1_g1

0xdbe9,	// (0x000355d4) ai_gene_pane_1_g2_ParamLimits

0xdbe9,	// (0x000355d4) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x000372f8) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x000372f8) ai_gene_pane_1_g

0xdbf6,	// (0x000355e1) ai_gene_pane_1_t1_ParamLimits

0xdbf6,	// (0x000355e1) ai_gene_pane_1_t1

0xdc2a,	// (0x00035615) grid_ai_soft_ind_pane

0xdbc8,	// (0x000355b3) ai_gene_pane_2_t1_ParamLimits

0xdbc8,	// (0x000355b3) ai_gene_pane_2_t1

0xec65,	// (0x00036650) main_pane_empty_t1_ParamLimits

0xec65,	// (0x00036650) main_pane_empty_t1

0xec7d,	// (0x00036668) main_pane_empty_t2_ParamLimits

0xec7d,	// (0x00036668) main_pane_empty_t2

0xec92,	// (0x0003667d) main_pane_empty_t3_ParamLimits

0xec92,	// (0x0003667d) main_pane_empty_t3

0xeca4,	// (0x0003668f) main_pane_empty_t4_ParamLimits

0xeca4,	// (0x0003668f) main_pane_empty_t4

0xecb6,	// (0x000366a1) main_pane_empty_t5_ParamLimits

0xecb6,	// (0x000366a1) main_pane_empty_t5

0x0004,

0xf574,	// (0x00036f5f) main_pane_empty_t_ParamLimits

0xf574,	// (0x00036f5f) main_pane_empty_t

0xbfbe,	// (0x000339a9) bg_popup_window_pane_ParamLimits

0xbfbe,	// (0x000339a9) bg_popup_window_pane

0xd949,	// (0x00035334) find_popup_pane_cp2_ParamLimits

0xd949,	// (0x00035334) find_popup_pane_cp2

0xd955,	// (0x00035340) heading_pane_ParamLimits

0xd955,	// (0x00035340) heading_pane

0xb8f2,	// (0x000332dd) bg_popup_sub_pane

0xf47b,	// (0x00036e66) bg_popup_window_pane_g1_ParamLimits

0xf47b,	// (0x00036e66) bg_popup_window_pane_g1

0xf487,	// (0x00036e72) bg_popup_window_pane_g2_ParamLimits

0xf487,	// (0x00036e72) bg_popup_window_pane_g2

0xf493,	// (0x00036e7e) bg_popup_window_pane_g3_ParamLimits

0xf493,	// (0x00036e7e) bg_popup_window_pane_g3

0xf49f,	// (0x00036e8a) bg_popup_window_pane_g4_ParamLimits

0xf49f,	// (0x00036e8a) bg_popup_window_pane_g4

0xf4ab,	// (0x00036e96) bg_popup_window_pane_g5_ParamLimits

0xf4ab,	// (0x00036e96) bg_popup_window_pane_g5

0xf4b7,	// (0x00036ea2) bg_popup_window_pane_g6_ParamLimits

0xf4b7,	// (0x00036ea2) bg_popup_window_pane_g6

0xf4c3,	// (0x00036eae) bg_popup_window_pane_g7_ParamLimits

0xf4c3,	// (0x00036eae) bg_popup_window_pane_g7

0xf4cf,	// (0x00036eba) bg_popup_window_pane_g8_ParamLimits

0xf4cf,	// (0x00036eba) bg_popup_window_pane_g8

0xf4db,	// (0x00036ec6) bg_popup_window_pane_g9_ParamLimits

0xf4db,	// (0x00036ec6) bg_popup_window_pane_g9

0xd92f,	// (0x0003531a) bg_popup_window_pane_g10_ParamLimits

0xd92f,	// (0x0003531a) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x000372c0) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x000372c0) bg_popup_window_pane_g

0xd8d0,	// (0x000352bb) bg_popup_heading_pane_ParamLimits

0xd8d0,	// (0x000352bb) bg_popup_heading_pane

0xa31a,	// (0x00031d05) tabs_4_passive_pane_cp_srt_ParamLimits

0xa31a,	// (0x00031d05) tabs_4_passive_pane_cp_srt

0xa32c,	// (0x00031d17) tabs_4_passive_pane_srt_ParamLimits

0xd8e4,	// (0x000352cf) heading_pane_g2

0xa32c,	// (0x00031d17) tabs_4_passive_pane_srt

0xcb4e,	// (0x00034539) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcb4e,	// (0x00034539) bg_passive_tab_pane_cp3_srt

0xd8ec,	// (0x000352d7) heading_pane_t1_ParamLimits

0xd8ec,	// (0x000352d7) heading_pane_t1

0xd903,	// (0x000352ee) heading_pane_t2_ParamLimits

0xd903,	// (0x000352ee) heading_pane_t2

0x0001,

0xf8d0,	// (0x000372bb) heading_pane_t_ParamLimits

0xf8d0,	// (0x000372bb) heading_pane_t

0xd410,	// (0x00034dfb) bg_popup_heading_pane_g1

0xd4a1,	// (0x00034e8c) bg_popup_heading_pane_g2

0xd4a9,	// (0x00034e94) bg_popup_heading_pane_g3

0xd4b1,	// (0x00034e9c) bg_popup_heading_pane_g4

0xd4b9,	// (0x00034ea4) bg_popup_heading_pane_g5

0xd4c1,	// (0x00034eac) bg_popup_heading_pane_g6

0xd4f6,	// (0x00034ee1) bg_popup_heading_pane_g7

0xd4fe,	// (0x00034ee9) bg_popup_heading_pane_g8

0xd506,	// (0x00034ef1) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00037277) bg_popup_heading_pane_g

0xcd32,	// (0x0003471d) bg_popup_sub_pane_g1

0xcd3a,	// (0x00034725) bg_popup_sub_pane_g2

0xcd42,	// (0x0003472d) bg_popup_sub_pane_g3

0xcd4a,	// (0x00034735) bg_popup_sub_pane_g4

0xcd52,	// (0x0003473d) bg_popup_sub_pane_g5

0xcd5a,	// (0x00034745) bg_popup_sub_pane_g6

0xcd62,	// (0x0003474d) bg_popup_sub_pane_g7

0xcd6a,	// (0x00034755) bg_popup_sub_pane_g8

0xcd72,	// (0x0003475d) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00037251) bg_popup_sub_pane_g

0xba83,	// (0x0003346e) bg_popup_window_pane_cp5_ParamLimits

0xba83,	// (0x0003346e) bg_popup_window_pane_cp5

0xba9f,	// (0x0003348a) popup_note_window_g1_ParamLimits

0xba9f,	// (0x0003348a) popup_note_window_g1

0xbaab,	// (0x00033496) popup_note_window_t1_ParamLimits

0xbaab,	// (0x00033496) popup_note_window_t1

0xbac1,	// (0x000334ac) popup_note_window_t2_ParamLimits

0xbac1,	// (0x000334ac) popup_note_window_t2

0xbad7,	// (0x000334c2) popup_note_window_t3_ParamLimits

0xbad7,	// (0x000334c2) popup_note_window_t3

0xbaed,	// (0x000334d8) popup_note_window_t4_ParamLimits

0xbaed,	// (0x000334d8) popup_note_window_t4

0xbb15,	// (0x00033500) popup_note_window_t5_ParamLimits

0xbb15,	// (0x00033500) popup_note_window_t5

0x0004,

0xf57f,	// (0x00036f6a) popup_note_window_t_ParamLimits

0xf57f,	// (0x00036f6a) popup_note_window_t

0xbb39,	// (0x00033524) bg_popup_window_pane_cp6_ParamLimits

0xbb39,	// (0x00033524) bg_popup_window_pane_cp6

0xd38c,	// (0x00034d77) popup_note_image_window_g1_ParamLimits

0xd38c,	// (0x00034d77) popup_note_image_window_g1

0xd398,	// (0x00034d83) popup_note_image_window_g2_ParamLimits

0xd398,	// (0x00034d83) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00037245) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00037245) popup_note_image_window_g

0xd3b1,	// (0x00034d9c) popup_note_image_window_t1_ParamLimits

0xd3b1,	// (0x00034d9c) popup_note_image_window_t1

0xd3ca,	// (0x00034db5) popup_note_image_window_t2_ParamLimits

0xd3ca,	// (0x00034db5) popup_note_image_window_t2

0xd3e3,	// (0x00034dce) popup_note_image_window_t3_ParamLimits

0xd3e3,	// (0x00034dce) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0003724a) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0003724a) popup_note_image_window_t

0xd271,	// (0x00034c5c) bg_popup_window_pane_cp7_ParamLimits

0xd271,	// (0x00034c5c) bg_popup_window_pane_cp7

0xd2a1,	// (0x00034c8c) popup_note_wait_window_g1_ParamLimits

0xd2a1,	// (0x00034c8c) popup_note_wait_window_g1

0xd2ad,	// (0x00034c98) popup_note_wait_window_g2_ParamLimits

0xd2ad,	// (0x00034c98) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00037233) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00037233) popup_note_wait_window_g

0xd2c5,	// (0x00034cb0) popup_note_wait_window_t1_ParamLimits

0xd2c5,	// (0x00034cb0) popup_note_wait_window_t1

0xd2ec,	// (0x00034cd7) popup_note_wait_window_t2_ParamLimits

0xd2ec,	// (0x00034cd7) popup_note_wait_window_t2

0xd309,	// (0x00034cf4) popup_note_wait_window_t3_ParamLimits

0xd309,	// (0x00034cf4) popup_note_wait_window_t3

0xd31c,	// (0x00034d07) popup_note_wait_window_t4_ParamLimits

0xd31c,	// (0x00034d07) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0003723a) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0003723a) popup_note_wait_window_t

0xd341,	// (0x00034d2c) wait_bar_pane_ParamLimits

0xd341,	// (0x00034d2c) wait_bar_pane

0xb8f2,	// (0x000332dd) wait_anim_pane

0xb8f2,	// (0x000332dd) wait_border_pane

0xb8e8,	// (0x000332d3) wait_anim_pane_g1

0xb8e8,	// (0x000332d3) wait_anim_pane_g2

0x0001,

0xf703,	// (0x000370ee) wait_anim_pane_g

0xd221,	// (0x00034c0c) wait_border_pane_g1

0xd22a,	// (0x00034c15) wait_border_pane_g2

0xd233,	// (0x00034c1e) wait_border_pane_g3

0x0002,

0xf841,	// (0x0003722c) wait_border_pane_g

0xd091,	// (0x00034a7c) bg_popup_window_pane_cp16_ParamLimits

0xd091,	// (0x00034a7c) bg_popup_window_pane_cp16

0xd191,	// (0x00034b7c) indicator_popup_pane_cp4_ParamLimits

0xd191,	// (0x00034b7c) indicator_popup_pane_cp4

0xd1a5,	// (0x00034b90) popup_query_data_window_t1_ParamLimits

0xd1a5,	// (0x00034b90) popup_query_data_window_t1

0xd1b7,	// (0x00034ba2) popup_query_data_window_t2_ParamLimits

0xd1b7,	// (0x00034ba2) popup_query_data_window_t2

0xd1d0,	// (0x00034bbb) popup_query_data_window_t3_ParamLimits

0xd1d0,	// (0x00034bbb) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00037225) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00037225) popup_query_data_window_t

0xd1ea,	// (0x00034bd5) query_popup_data_pane_ParamLimits

0xd1ea,	// (0x00034bd5) query_popup_data_pane

0xd1fe,	// (0x00034be9) query_popup_data_pane_cp1_ParamLimits

0xd1fe,	// (0x00034be9) query_popup_data_pane_cp1

0xd091,	// (0x00034a7c) bg_popup_window_pane_cp10_ParamLimits

0xd091,	// (0x00034a7c) bg_popup_window_pane_cp10

0xd0c3,	// (0x00034aae) indicator_popup_pane_ParamLimits

0xd0c3,	// (0x00034aae) indicator_popup_pane

0xd0e5,	// (0x00034ad0) popup_query_code_window_t1_ParamLimits

0xd0e5,	// (0x00034ad0) popup_query_code_window_t1

0xd0ff,	// (0x00034aea) popup_query_code_window_t2_ParamLimits

0xd0ff,	// (0x00034aea) popup_query_code_window_t2

0xd148,	// (0x00034b33) popup_query_code_window_t3_ParamLimits

0xd148,	// (0x00034b33) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0003721e) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0003721e) popup_query_code_window_t

0xd177,	// (0x00034b62) query_popup_pane_ParamLimits

0xd177,	// (0x00034b62) query_popup_pane

0xbb39,	// (0x00033524) bg_popup_window_pane_cp15_ParamLimits

0xbb39,	// (0x00033524) bg_popup_window_pane_cp15

0xbb57,	// (0x00033542) indicator_popup_pane_cp1_ParamLimits

0xbb57,	// (0x00033542) indicator_popup_pane_cp1

0xbb6a,	// (0x00033555) indicator_popup_pane_cp2_ParamLimits

0xbb6a,	// (0x00033555) indicator_popup_pane_cp2

0xbb7d,	// (0x00033568) popup_query_data_code_window_g1_ParamLimits

0xbb7d,	// (0x00033568) popup_query_data_code_window_g1

0xbb90,	// (0x0003357b) popup_query_data_code_window_t1_ParamLimits

0xbb90,	// (0x0003357b) popup_query_data_code_window_t1

0xbba2,	// (0x0003358d) popup_query_data_code_window_t2_ParamLimits

0xbba2,	// (0x0003358d) popup_query_data_code_window_t2

0xbbb4,	// (0x0003359f) popup_query_data_code_window_t3_ParamLimits

0xbbb4,	// (0x0003359f) popup_query_data_code_window_t3

0xbbca,	// (0x000335b5) popup_query_data_code_window_t4_ParamLimits

0xbbca,	// (0x000335b5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00036f75) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00036f75) popup_query_data_code_window_t

0xc7d9,	// (0x000341c4) list_single_midp_graphic_pane_g3

0xbbe2,	// (0x000335cd) query_popup_data_pane_cp2_ParamLimits

0xbbf5,	// (0x000335e0) query_popup_pane_cp2_ParamLimits

0xbbf5,	// (0x000335e0) query_popup_pane_cp2

0xb8f2,	// (0x000332dd) bg_popup_window_pane_cp11

0xd089,	// (0x00034a74) heading_pane_cp5

0xbc84,	// (0x0003366f) listscroll_popup_info_pane

0xb8f2,	// (0x000332dd) input_focus_pane_cp3

0xbc08,	// (0x000335f3) query_popup_pane_t1

0xbc16,	// (0x00033601) list_popup_info_pane_ParamLimits

0xbc16,	// (0x00033601) list_popup_info_pane

0xbc25,	// (0x00033610) listscroll_popup_info_pane_g1

0xbc2d,	// (0x00033618) scroll_pane_cp7

0xbc35,	// (0x00033620) popup_info_list_pane_t1_ParamLimits

0xbc35,	// (0x00033620) popup_info_list_pane_t1

0xbc4f,	// (0x0003363a) popup_info_list_pane_t2_ParamLimits

0xbc4f,	// (0x0003363a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00036f7e) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00036f7e) popup_info_list_pane_t

0xb8f2,	// (0x000332dd) bg_popup_window_pane_cp12

0xdfd6,	// (0x000359c1) find_popup_pane

0xb940,	// (0x0003332b) bg_popup_window_pane_cp3

0xbc69,	// (0x00033654) heading_pane_cp3

0xbc75,	// (0x00033660) listscroll_popup_graphic_pane

0xb8f2,	// (0x000332dd) bg_popup_window_pane_cp4

0xed18,	// (0x00036703) heading_pane_cp4

0xbc84,	// (0x0003366f) listscroll_popup_colour_pane

0xbc8c,	// (0x00033677) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbc8c,	// (0x00033677) cell_large_graphic_colour_none_popup_pane

0xed20,	// (0x0003670b) grid_large_graphic_colour_popup_pane_ParamLimits

0xed20,	// (0x0003670b) grid_large_graphic_colour_popup_pane

0xbc9c,	// (0x00033687) listscroll_popup_colour_pane_g1_ParamLimits

0xbc9c,	// (0x00033687) listscroll_popup_colour_pane_g1

0xbcb3,	// (0x0003369e) listscroll_popup_colour_pane_g2_ParamLimits

0xbcb3,	// (0x0003369e) listscroll_popup_colour_pane_g2

0xbcca,	// (0x000336b5) listscroll_popup_colour_pane_g3_ParamLimits

0xbcca,	// (0x000336b5) listscroll_popup_colour_pane_g3

0xed3c,	// (0x00036727) listscroll_popup_colour_pane_g4_ParamLimits

0xed3c,	// (0x00036727) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00036f83) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00036f83) listscroll_popup_colour_pane_g

0xbcda,	// (0x000336c5) scroll_pane_cp6_ParamLimits

0xbcda,	// (0x000336c5) scroll_pane_cp6

0xed4b,	// (0x00036736) cell_large_graphic_colour_popup_pane_ParamLimits

0xed4b,	// (0x00036736) cell_large_graphic_colour_popup_pane

0xbcec,	// (0x000336d7) cell_large_graphic_colour_none_popup_pane_t1

0xb8f2,	// (0x000332dd) grid_highlight_pane_cp5

0xbcfb,	// (0x000336e6) cell_large_graphic_colour_popup_pane_g1

0xbd03,	// (0x000336ee) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00036f8c) cell_large_graphic_colour_popup_pane_g

0xbd0b,	// (0x000336f6) cell_large_graphic_colour_popup_pane_g2_copy1

0xbd14,	// (0x000336ff) grid_highlight_pane_cp4

0xbd1c,	// (0x00033707) bg_popup_window_pane_cp8_ParamLimits

0xbd1c,	// (0x00033707) bg_popup_window_pane_cp8

0xbd37,	// (0x00033722) popup_snote_single_text_window_g1_ParamLimits

0xbd37,	// (0x00033722) popup_snote_single_text_window_g1

0xbd49,	// (0x00033734) popup_snote_single_text_window_t1_ParamLimits

0xbd49,	// (0x00033734) popup_snote_single_text_window_t1

0xbd5c,	// (0x00033747) popup_snote_single_text_window_t2_ParamLimits

0xbd5c,	// (0x00033747) popup_snote_single_text_window_t2

0xbd6f,	// (0x0003375a) popup_snote_single_text_window_t3_ParamLimits

0xbd6f,	// (0x0003375a) popup_snote_single_text_window_t3

0xbda8,	// (0x00033793) popup_snote_single_text_window_t4_ParamLimits

0xbda8,	// (0x00033793) popup_snote_single_text_window_t4

0xbddc,	// (0x000337c7) popup_snote_single_text_window_t5_ParamLimits

0xbddc,	// (0x000337c7) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00036f91) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00036f91) popup_snote_single_text_window_t

0xbe0b,	// (0x000337f6) bg_popup_window_pane_cp9_ParamLimits

0xbe0b,	// (0x000337f6) bg_popup_window_pane_cp9

0xbd37,	// (0x00033722) popup_snote_single_graphic_window_g1_ParamLimits

0xbd37,	// (0x00033722) popup_snote_single_graphic_window_g1

0xbe19,	// (0x00033804) popup_snote_single_graphic_window_g2_ParamLimits

0xbe19,	// (0x00033804) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00036f9c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00036f9c) popup_snote_single_graphic_window_g

0xbe25,	// (0x00033810) popup_snote_single_graphic_window_t1_ParamLimits

0xbe25,	// (0x00033810) popup_snote_single_graphic_window_t1

0xbe38,	// (0x00033823) popup_snote_single_graphic_window_t2_ParamLimits

0xbe38,	// (0x00033823) popup_snote_single_graphic_window_t2

0xbd6f,	// (0x0003375a) popup_snote_single_graphic_window_t3_ParamLimits

0xbd6f,	// (0x0003375a) popup_snote_single_graphic_window_t3

0xbda8,	// (0x00033793) popup_snote_single_graphic_window_t4_ParamLimits

0xbda8,	// (0x00033793) popup_snote_single_graphic_window_t4

0xbddc,	// (0x000337c7) popup_snote_single_graphic_window_t5_ParamLimits

0xbddc,	// (0x000337c7) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00036fa1) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00036fa1) popup_snote_single_graphic_window_t

0xdf56,	// (0x00035941) grid_graphic_popup_pane_ParamLimits

0xdf56,	// (0x00035941) grid_graphic_popup_pane

0xdf7a,	// (0x00035965) listscroll_popup_graphic_pane_g1_ParamLimits

0xdf7a,	// (0x00035965) listscroll_popup_graphic_pane_g1

0x02f5,	// (0x00027ce0) listscroll_popup_graphic_pane_g2_ParamLimits

0x02f5,	// (0x00027ce0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003739b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003739b) listscroll_popup_graphic_pane_g

0xdf8e,	// (0x00035979) scroll_pane_cp5

0x02b4,	// (0x00027c9f) cell_graphic_popup_pane_ParamLimits

0x02b4,	// (0x00027c9f) cell_graphic_popup_pane

0xdf21,	// (0x0003590c) cell_graphic_popup_pane_g1

0xdf29,	// (0x00035914) cell_graphic_popup_pane_g2

0xbd0b,	// (0x000336f6) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x00037394) cell_graphic_popup_pane_g

0xdf32,	// (0x0003591d) cell_graphic_popup_pane_t2

0xbd14,	// (0x000336ff) grid_highlight_pane_cp3

0xbe5d,	// (0x00033848) list_gen_pane_ParamLimits

0xbe5d,	// (0x00033848) list_gen_pane

0xbe85,	// (0x00033870) scroll_pane

0x0275,	// (0x00027c60) bg_list_pane_g1_ParamLimits

0x0275,	// (0x00027c60) bg_list_pane_g1

0xded0,	// (0x000358bb) bg_list_pane_g2_ParamLimits

0xded0,	// (0x000358bb) bg_list_pane_g2

0xdee3,	// (0x000358ce) bg_list_pane_g3_ParamLimits

0xdee3,	// (0x000358ce) bg_list_pane_g3

0xdef5,	// (0x000358e0) bg_list_pane_g4_ParamLimits

0xdef5,	// (0x000358e0) bg_list_pane_g4

0x028c,	// (0x00027c77) bg_list_pane_g5_ParamLimits

0x028c,	// (0x00027c77) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00037389) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00037389) bg_list_pane_g

0x8a90,	// (0x0003047b) list_double2_graphic_large_graphic_pane_ParamLimits

0x8a90,	// (0x0003047b) list_double2_graphic_large_graphic_pane

0x8a90,	// (0x0003047b) list_double2_graphic_pane_ParamLimits

0x8a90,	// (0x0003047b) list_double2_graphic_pane

0x8a90,	// (0x0003047b) list_double2_large_graphic_pane_ParamLimits

0x8a90,	// (0x0003047b) list_double2_large_graphic_pane

0x8a90,	// (0x0003047b) list_double2_pane_ParamLimits

0x8a90,	// (0x0003047b) list_double2_pane

0x8a90,	// (0x0003047b) list_double_graphic_heading_pane_ParamLimits

0x8a90,	// (0x0003047b) list_double_graphic_heading_pane

0x8a90,	// (0x0003047b) list_double_graphic_pane_ParamLimits

0x8a90,	// (0x0003047b) list_double_graphic_pane

0x8a90,	// (0x0003047b) list_double_heading_pane_ParamLimits

0x8a90,	// (0x0003047b) list_double_heading_pane

0x8a90,	// (0x0003047b) list_double_large_graphic_pane_ParamLimits

0x8a90,	// (0x0003047b) list_double_large_graphic_pane

0x8a90,	// (0x0003047b) list_double_number_pane_ParamLimits

0x8a90,	// (0x0003047b) list_double_number_pane

0x8a90,	// (0x0003047b) list_double_pane_ParamLimits

0x8a90,	// (0x0003047b) list_double_pane

0x8a90,	// (0x0003047b) list_double_time_pane_ParamLimits

0x8a90,	// (0x0003047b) list_double_time_pane

0x8a90,	// (0x0003047b) list_setting_number_pane_ParamLimits

0x8a90,	// (0x0003047b) list_setting_number_pane

0x8a90,	// (0x0003047b) list_setting_pane_ParamLimits

0x8a90,	// (0x0003047b) list_setting_pane

0x01f4,	// (0x00027bdf) list_single_2graphic_pane_ParamLimits

0x01f4,	// (0x00027bdf) list_single_2graphic_pane

0x01f4,	// (0x00027bdf) list_single_graphic_heading_pane_ParamLimits

0x01f4,	// (0x00027bdf) list_single_graphic_heading_pane

0x01f4,	// (0x00027bdf) list_single_graphic_pane_ParamLimits

0x01f4,	// (0x00027bdf) list_single_graphic_pane

0x01f4,	// (0x00027bdf) list_single_heading_pane_ParamLimits

0x01f4,	// (0x00027bdf) list_single_heading_pane

0x0260,	// (0x00027c4b) list_single_large_graphic_pane_ParamLimits

0x0260,	// (0x00027c4b) list_single_large_graphic_pane

0x01f4,	// (0x00027bdf) list_single_number_heading_pane_ParamLimits

0x01f4,	// (0x00027bdf) list_single_number_heading_pane

0x01f4,	// (0x00027bdf) list_single_number_pane_ParamLimits

0x01f4,	// (0x00027bdf) list_single_number_pane

0x01f4,	// (0x00027bdf) list_single_pane_ParamLimits

0x01f4,	// (0x00027bdf) list_single_pane

0xb8f2,	// (0x000332dd) list_highlight_pane_cp1

0x94be,	// (0x00030ea9) list_single_pane_g1_ParamLimits

0x94be,	// (0x00030ea9) list_single_pane_g1

0x94ca,	// (0x00030eb5) list_single_pane_g2_ParamLimits

0x94ca,	// (0x00030eb5) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00036fbd) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00036fbd) list_single_pane_g

0x8a7a,	// (0x00030465) list_single_pane_t1_ParamLimits

0x8a7a,	// (0x00030465) list_single_pane_t1

0x94be,	// (0x00030ea9) list_single_number_pane_g1_ParamLimits

0x94be,	// (0x00030ea9) list_single_number_pane_g1

0x94ca,	// (0x00030eb5) list_single_number_pane_g2_ParamLimits

0x94ca,	// (0x00030eb5) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00036fbd) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00036fbd) list_single_number_pane_g

0x8a28,	// (0x00030413) list_single_number_pane_t1_ParamLimits

0x8a28,	// (0x00030413) list_single_number_pane_t1

0x8a3e,	// (0x00030429) list_single_number_pane_t2_ParamLimits

0x8a3e,	// (0x00030429) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003734a) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003734a) list_single_number_pane_t

0x81b4,	// (0x0002fb9f) list_single_graphic_pane_g1_ParamLimits

0x81b4,	// (0x0002fb9f) list_single_graphic_pane_g1

0x94be,	// (0x00030ea9) list_single_graphic_pane_g2_ParamLimits

0x94be,	// (0x00030ea9) list_single_graphic_pane_g2

0x94ca,	// (0x00030eb5) list_single_graphic_pane_g3_ParamLimits

0x94ca,	// (0x00030eb5) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00036fac) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00036fac) list_single_graphic_pane_g

0x81c0,	// (0x0002fbab) list_single_graphic_pane_t1_ParamLimits

0x81c0,	// (0x0002fbab) list_single_graphic_pane_t1

0x81d6,	// (0x0002fbc1) list_single_heading_pane_g1_ParamLimits

0x81d6,	// (0x0002fbc1) list_single_heading_pane_g1

0x94ca,	// (0x00030eb5) list_single_heading_pane_g2_ParamLimits

0x94ca,	// (0x00030eb5) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00036fb3) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00036fb3) list_single_heading_pane_g

0x81e9,	// (0x0002fbd4) list_single_heading_pane_t1_ParamLimits

0x81e9,	// (0x0002fbd4) list_single_heading_pane_t1

0x81ff,	// (0x0002fbea) list_single_heading_pane_t2_ParamLimits

0x81ff,	// (0x0002fbea) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00036fb8) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00036fb8) list_single_heading_pane_t

0x94be,	// (0x00030ea9) list_single_number_heading_pane_g1_ParamLimits

0x94be,	// (0x00030ea9) list_single_number_heading_pane_g1

0x94ca,	// (0x00030eb5) list_single_number_heading_pane_g2_ParamLimits

0x94ca,	// (0x00030eb5) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00036fbd) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00036fbd) list_single_number_heading_pane_g

0x8211,	// (0x0002fbfc) list_single_number_heading_pane_t1_ParamLimits

0x8211,	// (0x0002fbfc) list_single_number_heading_pane_t1

0x8227,	// (0x0002fc12) list_single_number_heading_pane_t2_ParamLimits

0x8227,	// (0x0002fc12) list_single_number_heading_pane_t2

0x8239,	// (0x0002fc24) list_single_number_heading_pane_t3_ParamLimits

0x8239,	// (0x0002fc24) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00036fc2) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00036fc2) list_single_number_heading_pane_t

0x824b,	// (0x0002fc36) list_single_graphic_heading_pane_g1_ParamLimits

0x824b,	// (0x0002fc36) list_single_graphic_heading_pane_g1

0x8261,	// (0x0002fc4c) list_single_graphic_heading_pane_g4_ParamLimits

0x8261,	// (0x0002fc4c) list_single_graphic_heading_pane_g4

0x94ca,	// (0x00030eb5) list_single_graphic_heading_pane_g5_ParamLimits

0x94ca,	// (0x00030eb5) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00036fc9) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00036fc9) list_single_graphic_heading_pane_g

0x8211,	// (0x0002fbfc) list_single_graphic_heading_pane_t1_ParamLimits

0x8211,	// (0x0002fbfc) list_single_graphic_heading_pane_t1

0x8270,	// (0x0002fc5b) list_single_graphic_heading_pane_t2_ParamLimits

0x8270,	// (0x0002fc5b) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00036fd0) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00036fd0) list_single_graphic_heading_pane_t

0x94d6,	// (0x00030ec1) list_single_large_graphic_pane_g1_ParamLimits

0x94d6,	// (0x00030ec1) list_single_large_graphic_pane_g1

0x94be,	// (0x00030ea9) list_single_large_graphic_pane_g2_ParamLimits

0x94be,	// (0x00030ea9) list_single_large_graphic_pane_g2

0x94ca,	// (0x00030eb5) list_single_large_graphic_pane_g3_ParamLimits

0x94ca,	// (0x00030eb5) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00036fd5) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00036fd5) list_single_large_graphic_pane_g

0xd22a,	// (0x00034c15) wait_border_pane_g2_copy1

0x94e2,	// (0x00030ecd) list_single_large_graphic_pane_g4_cp2

0x8288,	// (0x0002fc73) list_single_large_graphic_pane_t1_ParamLimits

0x8288,	// (0x0002fc73) list_single_large_graphic_pane_t1

0xbeb9,	// (0x000338a4) list_double_pane_g1_ParamLimits

0xbeb9,	// (0x000338a4) list_double_pane_g1

0x94ea,	// (0x00030ed5) list_double_pane_g2_ParamLimits

0x94ea,	// (0x00030ed5) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00036fdc) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00036fdc) list_double_pane_g

0x829e,	// (0x0002fc89) list_double_pane_t1_ParamLimits

0x829e,	// (0x0002fc89) list_double_pane_t1

0x82b4,	// (0x0002fc9f) list_double_pane_t2_ParamLimits

0x82b4,	// (0x0002fc9f) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00036fe1) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00036fe1) list_double_pane_t

0x82c6,	// (0x0002fcb1) list_double2_pane_g1_ParamLimits

0x82c6,	// (0x0002fcb1) list_double2_pane_g1

0x82d5,	// (0x0002fcc0) list_double2_pane_g2_ParamLimits

0x82d5,	// (0x0002fcc0) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00036fe6) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00036fe6) list_double2_pane_g

0x82e1,	// (0x0002fccc) list_double2_pane_t1_ParamLimits

0x82e1,	// (0x0002fccc) list_double2_pane_t1

0x82f7,	// (0x0002fce2) list_double2_pane_t2_ParamLimits

0x82f7,	// (0x0002fce2) list_double2_pane_t2

0x0001,

0xf600,	// (0x00036feb) list_double2_pane_t_ParamLimits

0xf600,	// (0x00036feb) list_double2_pane_t

0xbeb9,	// (0x000338a4) list_double_number_pane_g1_ParamLimits

0xbeb9,	// (0x000338a4) list_double_number_pane_g1

0x94ea,	// (0x00030ed5) list_double_number_pane_g2_ParamLimits

0x94ea,	// (0x00030ed5) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00036fdc) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00036fdc) list_double_number_pane_g

0x8309,	// (0x0002fcf4) list_double_number_pane_t1_ParamLimits

0x8309,	// (0x0002fcf4) list_double_number_pane_t1

0x831b,	// (0x0002fd06) list_double_number_pane_t2_ParamLimits

0x831b,	// (0x0002fd06) list_double_number_pane_t2

0x8331,	// (0x0002fd1c) list_double_number_pane_t3_ParamLimits

0x8331,	// (0x0002fd1c) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00036ff0) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00036ff0) list_double_number_pane_t

0x8343,	// (0x0002fd2e) list_double_graphic_pane_g1_ParamLimits

0x8343,	// (0x0002fd2e) list_double_graphic_pane_g1

0xd4c9,	// (0x00034eb4) list_double_graphic_pane_g2_ParamLimits

0xd4c9,	// (0x00034eb4) list_double_graphic_pane_g2

0x834f,	// (0x0002fd3a) list_double_graphic_pane_g3_ParamLimits

0x834f,	// (0x0002fd3a) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00036ff7) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00036ff7) list_double_graphic_pane_g

0x8367,	// (0x0002fd52) list_double_graphic_pane_t1_ParamLimits

0x8367,	// (0x0002fd52) list_double_graphic_pane_t1

0x837d,	// (0x0002fd68) list_double_graphic_pane_t2_ParamLimits

0x837d,	// (0x0002fd68) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00037000) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00037000) list_double_graphic_pane_t

0x8343,	// (0x0002fd2e) list_double2_graphic_pane_g1_ParamLimits

0x8343,	// (0x0002fd2e) list_double2_graphic_pane_g1

0xbeb9,	// (0x000338a4) list_double2_graphic_pane_g2_ParamLimits

0xbeb9,	// (0x000338a4) list_double2_graphic_pane_g2

0x94ea,	// (0x00030ed5) list_double2_graphic_pane_g3_ParamLimits

0x94ea,	// (0x00030ed5) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00037005) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00037005) list_double2_graphic_pane_g

0x831b,	// (0x0002fd06) list_double2_graphic_pane_t1_ParamLimits

0x831b,	// (0x0002fd06) list_double2_graphic_pane_t1

0x838f,	// (0x0002fd7a) list_double2_graphic_pane_t2_ParamLimits

0x838f,	// (0x0002fd7a) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0003700c) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0003700c) list_double2_graphic_pane_t

0x83a1,	// (0x0002fd8c) list_double_large_graphic_pane_g1_ParamLimits

0x83a1,	// (0x0002fd8c) list_double_large_graphic_pane_g1

0x83bb,	// (0x0002fda6) list_double_large_graphic_pane_g2_ParamLimits

0x83bb,	// (0x0002fda6) list_double_large_graphic_pane_g2

0x94ea,	// (0x00030ed5) list_double_large_graphic_pane_g3_ParamLimits

0x94ea,	// (0x00030ed5) list_double_large_graphic_pane_g3

0x83cf,	// (0x0002fdba) list_double_large_graphic_pane_g4_ParamLimits

0x83cf,	// (0x0002fdba) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00037011) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00037011) list_double_large_graphic_pane_g

0x83e0,	// (0x0002fdcb) list_double_large_graphic_pane_t1_ParamLimits

0x83e0,	// (0x0002fdcb) list_double_large_graphic_pane_t1

0x83f9,	// (0x0002fde4) list_double_large_graphic_pane_t2_ParamLimits

0x83f9,	// (0x0002fde4) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0003701c) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0003701c) list_double_large_graphic_pane_t

0x840b,	// (0x0002fdf6) list_double2_large_graphic_pane_g1_ParamLimits

0x840b,	// (0x0002fdf6) list_double2_large_graphic_pane_g1

0x950b,	// (0x00030ef6) list_double2_large_graphic_pane_g2_ParamLimits

0x950b,	// (0x00030ef6) list_double2_large_graphic_pane_g2

0x94ea,	// (0x00030ed5) list_double2_large_graphic_pane_g3_ParamLimits

0x94ea,	// (0x00030ed5) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00037021) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00037021) list_double2_large_graphic_pane_g

0x8417,	// (0x0002fe02) list_double2_large_graphic_pane_t1_ParamLimits

0x8417,	// (0x0002fe02) list_double2_large_graphic_pane_t1

0x842d,	// (0x0002fe18) list_double2_large_graphic_pane_t2_ParamLimits

0x842d,	// (0x0002fe18) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00037028) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00037028) list_double2_large_graphic_pane_t

0x843f,	// (0x0002fe2a) list_double_heading_pane_g1_ParamLimits

0x843f,	// (0x0002fe2a) list_double_heading_pane_g1

0x951a,	// (0x00030f05) list_double_heading_pane_g2_ParamLimits

0x951a,	// (0x00030f05) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0003702d) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0003702d) list_double_heading_pane_g

0x844e,	// (0x0002fe39) list_double_heading_pane_t1_ParamLimits

0x844e,	// (0x0002fe39) list_double_heading_pane_t1

0x8464,	// (0x0002fe4f) list_double_heading_pane_t2_ParamLimits

0x8464,	// (0x0002fe4f) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00037032) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00037032) list_double_heading_pane_t

0x8476,	// (0x0002fe61) list_double_graphic_heading_pane_g1_ParamLimits

0x8476,	// (0x0002fe61) list_double_graphic_heading_pane_g1

0x843f,	// (0x0002fe2a) list_double_graphic_heading_pane_g2_ParamLimits

0x843f,	// (0x0002fe2a) list_double_graphic_heading_pane_g2

0x951a,	// (0x00030f05) list_double_graphic_heading_pane_g3_ParamLimits

0x951a,	// (0x00030f05) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00037037) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00037037) list_double_graphic_heading_pane_g

0x8482,	// (0x0002fe6d) list_double_graphic_heading_pane_t1_ParamLimits

0x8482,	// (0x0002fe6d) list_double_graphic_heading_pane_t1

0x8498,	// (0x0002fe83) list_double_graphic_heading_pane_t2_ParamLimits

0x8498,	// (0x0002fe83) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0003703e) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0003703e) list_double_graphic_heading_pane_t

0x82c6,	// (0x0002fcb1) list_double_time_pane_g1_ParamLimits

0x82c6,	// (0x0002fcb1) list_double_time_pane_g1

0x82d5,	// (0x0002fcc0) list_double_time_pane_g2_ParamLimits

0x82d5,	// (0x0002fcc0) list_double_time_pane_g2

0x0001,

0xf5fb,	// (0x00036fe6) list_double_time_pane_g_ParamLimits

0xf5fb,	// (0x00036fe6) list_double_time_pane_g

0x84aa,	// (0x0002fe95) list_double_time_pane_t1_ParamLimits

0x84aa,	// (0x0002fe95) list_double_time_pane_t1

0x84c0,	// (0x0002feab) list_double_time_pane_t2_ParamLimits

0x84c0,	// (0x0002feab) list_double_time_pane_t2

0x84d2,	// (0x0002febd) list_double_time_pane_t3_ParamLimits

0x84d2,	// (0x0002febd) list_double_time_pane_t3

0x84e4,	// (0x0002fecf) list_double_time_pane_t4_ParamLimits

0x84e4,	// (0x0002fecf) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00037043) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00037043) list_double_time_pane_t

0x84f6,	// (0x0002fee1) list_setting_pane_g1_ParamLimits

0x84f6,	// (0x0002fee1) list_setting_pane_g1

0x8502,	// (0x0002feed) list_setting_pane_g2_ParamLimits

0x8502,	// (0x0002feed) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003704c) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003704c) list_setting_pane_g

0x850e,	// (0x0002fef9) list_setting_pane_t1_ParamLimits

0x850e,	// (0x0002fef9) list_setting_pane_t1

0x8528,	// (0x0002ff13) list_setting_pane_t2_ParamLimits

0x8528,	// (0x0002ff13) list_setting_pane_t2

0x0002,

0xf666,	// (0x00037051) list_setting_pane_t_ParamLimits

0xf666,	// (0x00037051) list_setting_pane_t

0x8565,	// (0x0002ff50) set_value_pane_cp_ParamLimits

0x8565,	// (0x0002ff50) set_value_pane_cp

0x8571,	// (0x0002ff5c) list_setting_number_pane_g1_ParamLimits

0x8571,	// (0x0002ff5c) list_setting_number_pane_g1

0x857d,	// (0x0002ff68) list_setting_number_pane_g2_ParamLimits

0x857d,	// (0x0002ff68) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00037058) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00037058) list_setting_number_pane_g

0x8589,	// (0x0002ff74) list_setting_number_pane_t1_ParamLimits

0x8589,	// (0x0002ff74) list_setting_number_pane_t1

0x85a0,	// (0x0002ff8b) list_setting_number_pane_t2_ParamLimits

0x85a0,	// (0x0002ff8b) list_setting_number_pane_t2

0x85ba,	// (0x0002ffa5) list_setting_number_pane_t3_ParamLimits

0x85ba,	// (0x0002ffa5) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003705d) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003705d) list_setting_number_pane_t

0x8565,	// (0x0002ff50) set_value_pane_ParamLimits

0x8565,	// (0x0002ff50) set_value_pane

0xbec5,	// (0x000338b0) bg_set_opt_pane_ParamLimits

0xbec5,	// (0x000338b0) bg_set_opt_pane

0x85fb,	// (0x0002ffe6) set_value_pane_t1

0xbee6,	// (0x000338d1) slider_set_pane_cp3

0xed74,	// (0x0003675f) volume_small_pane_cp

0xbeef,	// (0x000338da) list_form_gen_pane

0xbef8,	// (0x000338e3) scroll_pane_cp8

0x8611,	// (0x0002fffc) form_field_data_pane_ParamLimits

0x8611,	// (0x0002fffc) form_field_data_pane

0x8631,	// (0x0003001c) form_field_data_wide_pane_ParamLimits

0x8631,	// (0x0003001c) form_field_data_wide_pane

0x8650,	// (0x0003003b) form_field_popup_pane_ParamLimits

0x8650,	// (0x0003003b) form_field_popup_pane

0x8668,	// (0x00030053) form_field_popup_wide_pane_ParamLimits

0x8668,	// (0x00030053) form_field_popup_wide_pane

0x867f,	// (0x0003006a) form_field_slider_pane_ParamLimits

0x867f,	// (0x0003006a) form_field_slider_pane

0x8692,	// (0x0003007d) form_field_slider_wide_pane_ParamLimits

0x8692,	// (0x0003007d) form_field_slider_wide_pane

0xbf09,	// (0x000338f4) data_form_pane

0x86ad,	// (0x00030098) form_field_data_pane_t1

0xbf15,	// (0x00033900) input_focus_pane

0x86c5,	// (0x000300b0) data_form_wide_pane

0x86e2,	// (0x000300cd) form_field_data_wide_pane_t1

0xbd29,	// (0x00033714) input_focus_pane_cp6

0x8704,	// (0x000300ef) form_field_popup_pane_t1

0xbf15,	// (0x00033900) input_focus_pane_cp7

0xbf43,	// (0x0003392e) list_form_pane

0x8724,	// (0x0003010f) form_field_popup_wide_pane_t1

0xbf15,	// (0x00033900) input_focus_pane_cp8

0xbf4f,	// (0x0003393a) list_form_wide_pane

0x8741,	// (0x0003012c) form_field_slider_pane_t1_ParamLimits

0x8741,	// (0x0003012c) form_field_slider_pane_t1

0x8757,	// (0x00030142) form_field_slider_pane_t2_ParamLimits

0x8757,	// (0x00030142) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003706d) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003706d) form_field_slider_pane_t

0xba83,	// (0x0003346e) input_focus_pane_cp9_ParamLimits

0xba83,	// (0x0003346e) input_focus_pane_cp9

0x876c,	// (0x00030157) slider_cont_pane_ParamLimits

0x876c,	// (0x00030157) slider_cont_pane

0xbf5b,	// (0x00033946) form_field_slider_wide_pane_t1_ParamLimits

0xbf5b,	// (0x00033946) form_field_slider_wide_pane_t1

0x8780,	// (0x0003016b) form_field_slider_wide_pane_t2_ParamLimits

0x8780,	// (0x0003016b) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00037072) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00037072) form_field_slider_wide_pane_t

0xba83,	// (0x0003346e) input_focus_pane_cp10_ParamLimits

0xba83,	// (0x0003346e) input_focus_pane_cp10

0x8792,	// (0x0003017d) slider_cont_pane_cp1_ParamLimits

0x8792,	// (0x0003017d) slider_cont_pane_cp1

0x87a6,	// (0x00030191) slider_form_pane_cp

0xbf6d,	// (0x00033958) input_focus_pane_g1

0xbf75,	// (0x00033960) input_focus_pane_g2

0xbf7d,	// (0x00033968) input_focus_pane_g3

0xbf85,	// (0x00033970) input_focus_pane_g4

0xbf8d,	// (0x00033978) input_focus_pane_g5

0xbf95,	// (0x00033980) input_focus_pane_g6

0xbf9d,	// (0x00033988) input_focus_pane_g7

0xbfa5,	// (0x00033990) input_focus_pane_g8

0xbfad,	// (0x00033998) input_focus_pane_g9

0xb8e8,	// (0x000332d3) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00037077) input_focus_pane_g

0xd233,	// (0x00034c1e) wait_border_pane_g3_copy1

0x87ae,	// (0x00030199) data_form_pane_t1

0xb8e8,	// (0x000332d3) wait_anim_pane_g1_copy1

0x8a50,	// (0x0003043b) data_form_wide_pane_t1

0x87c7,	// (0x000301b2) list_form_graphic_pane_cp_ParamLimits

0x87c7,	// (0x000301b2) list_form_graphic_pane_cp

0xde6c,	// (0x00035857) slider_form_pane_g1

0xde75,	// (0x00035860) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003737a) slider_form_pane_g

0x87c7,	// (0x000301b2) list_form_graphic_pane_ParamLimits

0x87c7,	// (0x000301b2) list_form_graphic_pane

0x87d8,	// (0x000301c3) list_form_graphic_pane_g1

0x87e0,	// (0x000301cb) list_form_graphic_pane_t1_ParamLimits

0x87e0,	// (0x000301cb) list_form_graphic_pane_t1

0xb940,	// (0x0003332b) list_highlight_pane_cp5_ParamLimits

0xb940,	// (0x0003332b) list_highlight_pane_cp5

0x87f5,	// (0x000301e0) find_pane_g1

0xbfb5,	// (0x000339a0) input_find_pane

0x87fe,	// (0x000301e9) input_find_pane_g1_ParamLimits

0x87fe,	// (0x000301e9) input_find_pane_g1

0x880a,	// (0x000301f5) input_find_pane_t1_ParamLimits

0x880a,	// (0x000301f5) input_find_pane_t1

0x881f,	// (0x0003020a) input_find_pane_t2_ParamLimits

0x881f,	// (0x0003020a) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003708c) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003708c) input_find_pane_t

0xbfbe,	// (0x000339a9) input_focus_pane_cp5_ParamLimits

0xbfbe,	// (0x000339a9) input_focus_pane_cp5

0xbfcc,	// (0x000339b7) bg_popup_window_pane_cp2_ParamLimits

0xbfcc,	// (0x000339b7) bg_popup_window_pane_cp2

0xbfd9,	// (0x000339c4) listscroll_menu_pane_ParamLimits

0xbfd9,	// (0x000339c4) listscroll_menu_pane

0xed89,	// (0x00036774) popup_submenu_window_ParamLimits

0xed89,	// (0x00036774) popup_submenu_window

0xbfe5,	// (0x000339d0) find_popup_pane_g1

0xbfed,	// (0x000339d8) input_popup_find_pane_cp

0xbfbe,	// (0x000339a9) input_focus_pane_cp4_ParamLimits

0xbfbe,	// (0x000339a9) input_focus_pane_cp4

0xbff7,	// (0x000339e2) input_popup_find_pane_t1_ParamLimits

0xbff7,	// (0x000339e2) input_popup_find_pane_t1

0xb8f2,	// (0x000332dd) bg_popup_sub_pane_cp

0xc025,	// (0x00033a10) listscroll_popup_sub_pane

0xc02d,	// (0x00033a18) list_submenu_pane_ParamLimits

0xc02d,	// (0x00033a18) list_submenu_pane

0xc03e,	// (0x00033a29) scroll_pane_cp4

0xc046,	// (0x00033a31) list_single_popup_submenu_pane_ParamLimits

0xc046,	// (0x00033a31) list_single_popup_submenu_pane

0xc059,	// (0x00033a44) list_single_popup_submenu_pane_g1

0xc061,	// (0x00033a4c) list_single_popup_submenu_pane_t1_ParamLimits

0xc061,	// (0x00033a4c) list_single_popup_submenu_pane_t1

0xb940,	// (0x0003332b) bg_active_tab_pane_cp1_ParamLimits

0xb940,	// (0x0003332b) bg_active_tab_pane_cp1

0xc076,	// (0x00033a61) tabs_2_active_pane_g1

0xedb9,	// (0x000367a4) tabs_2_active_pane_t1

0xb940,	// (0x0003332b) bg_passive_tab_pane_cp1_ParamLimits

0xb940,	// (0x0003332b) bg_passive_tab_pane_cp1

0xc076,	// (0x00033a61) tabs_2_passive_pane_g1

0xedb9,	// (0x000367a4) tabs_2_passive_pane_t1

0xc07e,	// (0x00033a69) bg_active_tab_pane_cp4

0xedcb,	// (0x000367b6) tabs_2_long_active_pane_t1

0xedde,	// (0x000367c9) bg_passive_tab_pane_cp4

0xa009,	// (0x000319f4) list_single_midp_graphic_pane_g4_ParamLimits

0xc07e,	// (0x00033a69) bg_active_tab_pane_cp5

0xedea,	// (0x000367d5) tabs_3_long_active_pane_t1

0xedde,	// (0x000367c9) bg_passive_tab_pane_cp5

0xa009,	// (0x000319f4) list_single_midp_graphic_pane_g4

0xb940,	// (0x0003332b) bg_popup_window_pane_cp13_ParamLimits

0xb940,	// (0x0003332b) bg_popup_window_pane_cp13

0xc095,	// (0x00033a80) listscroll_popup_fast_pane_ParamLimits

0xc095,	// (0x00033a80) listscroll_popup_fast_pane

0xc0a4,	// (0x00033a8f) grid_popup_fast_pane_ParamLimits

0xc0a4,	// (0x00033a8f) grid_popup_fast_pane

0xc0b6,	// (0x00033aa1) scroll_pane_cp9_ParamLimits

0xc0b6,	// (0x00033aa1) scroll_pane_cp9

0x1fd2,	// (0x000299bd) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x1fd2,	// (0x000299bd) list_single_graphic_hl_pane_t1_cp2

0xc0da,	// (0x00033ac5) input_focus_pane_cp20_ParamLimits

0xc0da,	// (0x00033ac5) input_focus_pane_cp20

0xc0e8,	// (0x00033ad3) query_popup_data_pane_t1_ParamLimits

0xc0e8,	// (0x00033ad3) query_popup_data_pane_t1

0xc0fb,	// (0x00033ae6) query_popup_data_pane_t2_ParamLimits

0xc0fb,	// (0x00033ae6) query_popup_data_pane_t2

0xc141,	// (0x00033b2c) query_popup_data_pane_t3_ParamLimits

0xc141,	// (0x00033b2c) query_popup_data_pane_t3

0xc182,	// (0x00033b6d) query_popup_data_pane_t4_ParamLimits

0xc182,	// (0x00033b6d) query_popup_data_pane_t4

0xc1be,	// (0x00033ba9) query_popup_data_pane_t5_ParamLimits

0xc1be,	// (0x00033ba9) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00037091) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00037091) query_popup_data_pane_t

0xbf6d,	// (0x00033958) bg_set_opt_pane_g1

0xbf75,	// (0x00033960) bg_set_opt_pane_g2

0xbf7d,	// (0x00033968) bg_set_opt_pane_g3

0xbf85,	// (0x00033970) bg_set_opt_pane_g4

0xbf8d,	// (0x00033978) bg_set_opt_pane_g5

0xbf95,	// (0x00033980) bg_set_opt_pane_g6

0xbf9d,	// (0x00033988) bg_set_opt_pane_g7

0xbfa5,	// (0x00033990) bg_set_opt_pane_g8

0xbfad,	// (0x00033998) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003709c) bg_set_opt_pane_g

0x97b4,	// (0x0003119f) control_top_pane_stacon_ParamLimits

0x97b4,	// (0x0003119f) control_top_pane_stacon

0x9807,	// (0x000311f2) signal_pane_stacon_ParamLimits

0x9807,	// (0x000311f2) signal_pane_stacon

0xc659,	// (0x00034044) stacon_top_pane_g1_ParamLimits

0xc659,	// (0x00034044) stacon_top_pane_g1

0x982c,	// (0x00031217) title_pane_stacon_ParamLimits

0x982c,	// (0x00031217) title_pane_stacon

0x984e,	// (0x00031239) uni_indicator_pane_stacon_ParamLimits

0x984e,	// (0x00031239) uni_indicator_pane_stacon

0x9863,	// (0x0003124e) battery_pane_stacon_ParamLimits

0x9863,	// (0x0003124e) battery_pane_stacon

0x98a3,	// (0x0003128e) control_bottom_pane_stacon_ParamLimits

0x98a3,	// (0x0003128e) control_bottom_pane_stacon

0x98c2,	// (0x000312ad) navi_pane_stacon_ParamLimits

0x98c2,	// (0x000312ad) navi_pane_stacon

0xc67b,	// (0x00034066) stacon_bottom_pane_g1_ParamLimits

0xc67b,	// (0x00034066) stacon_bottom_pane_g1

0x9526,	// (0x00030f11) aid_levels_signal_lsc_ParamLimits

0x9526,	// (0x00030f11) aid_levels_signal_lsc

0x953d,	// (0x00030f28) signal_pane_stacon_g1_ParamLimits

0x953d,	// (0x00030f28) signal_pane_stacon_g1

0x9551,	// (0x00030f3c) signal_pane_stacon_g2_ParamLimits

0x9551,	// (0x00030f3c) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x000370af) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000370af) signal_pane_stacon_g

0x9586,	// (0x00030f71) title_pane_stacon_t1_ParamLimits

0x9586,	// (0x00030f71) title_pane_stacon_t1

0xc202,	// (0x00033bed) uni_indicator_pane_stacon_g1

0xc20c,	// (0x00033bf7) uni_indicator_pane_stacon_g2

0xc216,	// (0x00033c01) uni_indicator_pane_stacon_g3

0xc220,	// (0x00033c0b) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x000370bb) uni_indicator_pane_stacon_g

0x95ab,	// (0x00030f96) control_top_pane_stacon_g1

0x95b3,	// (0x00030f9e) control_top_pane_stacon_t1_ParamLimits

0x95b3,	// (0x00030f9e) control_top_pane_stacon_t1

0x95ea,	// (0x00030fd5) aid_levels_battery_lsc_ParamLimits

0x95ea,	// (0x00030fd5) aid_levels_battery_lsc

0x9602,	// (0x00030fed) battery_pane_stacon_g1_ParamLimits

0x9602,	// (0x00030fed) battery_pane_stacon_g1

0x9615,	// (0x00031000) battery_pane_stacon_g2_ParamLimits

0x9615,	// (0x00031000) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x000370c4) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x000370c4) battery_pane_stacon_g

0x964b,	// (0x00031036) navi_icon_pane_stacon

0x965f,	// (0x0003104a) navi_navi_pane_stacon

0x964b,	// (0x00031036) navi_text_pane_stacon

0x95ab,	// (0x00030f96) control_bottom_pane_stacon_g1

0x9673,	// (0x0003105e) control_bottom_pane_stacon_t1_ParamLimits

0x9673,	// (0x0003105e) control_bottom_pane_stacon_t1

0xedfc,	// (0x000367e7) grid_app_pane_ParamLimits

0xedfc,	// (0x000367e7) grid_app_pane

0xee1a,	// (0x00036805) scroll_pane_cp15_ParamLimits

0xee1a,	// (0x00036805) scroll_pane_cp15

0xee2b,	// (0x00036816) cell_app_pane_ParamLimits

0xee2b,	// (0x00036816) cell_app_pane

0xee4f,	// (0x0003683a) cell_app_pane_g1_ParamLimits

0xee4f,	// (0x0003683a) cell_app_pane_g1

0xc244,	// (0x00033c2f) cell_app_pane_g2_ParamLimits

0xc244,	// (0x00033c2f) cell_app_pane_g2

0x0001,

0xf6de,	// (0x000370c9) cell_app_pane_g_ParamLimits

0xf6de,	// (0x000370c9) cell_app_pane_g

0xee73,	// (0x0003685e) cell_app_pane_t1_ParamLimits

0xee73,	// (0x0003685e) cell_app_pane_t1

0xc250,	// (0x00033c3b) grid_highlight_pane_ParamLimits

0xc250,	// (0x00033c3b) grid_highlight_pane

0xbf6d,	// (0x00033958) cell_highlight_pane_g1

0xbf75,	// (0x00033960) cell_highlight_pane_g2

0xbf7d,	// (0x00033968) cell_highlight_pane_g3

0xbf85,	// (0x00033970) cell_highlight_pane_g4

0xbf8d,	// (0x00033978) cell_highlight_pane_g5

0xbf95,	// (0x00033980) cell_highlight_pane_g6

0xbf9d,	// (0x00033988) cell_highlight_pane_g7

0xbfa5,	// (0x00033990) cell_highlight_pane_g8

0xbfad,	// (0x00033998) cell_highlight_pane_g9

0xb8e8,	// (0x000332d3) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00037077) cell_highlight_pane_g

0xc261,	// (0x00033c4c) bg_scroll_pane

0x96bd,	// (0x000310a8) scroll_handle_pane

0xc2a8,	// (0x00033c93) scroll_bg_pane_g1

0xc2bd,	// (0x00033ca8) scroll_bg_pane_g2

0xc2d5,	// (0x00033cc0) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x000370ce) scroll_bg_pane_g

0xc2ea,	// (0x00033cd5) scroll_handle_focus_pane_ParamLimits

0xc2ea,	// (0x00033cd5) scroll_handle_focus_pane

0xc2a8,	// (0x00033c93) scroll_handle_pane_g1

0xc2f7,	// (0x00033ce2) scroll_handle_pane_g2

0xc2d5,	// (0x00033cc0) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x000370d5) scroll_handle_pane_g

0xbfbe,	// (0x000339a9) bg_popup_sub_pane_cp21_ParamLimits

0xbfbe,	// (0x000339a9) bg_popup_sub_pane_cp21

0xc30b,	// (0x00033cf6) popup_fep_japan_predictive_window_t1_ParamLimits

0xc30b,	// (0x00033cf6) popup_fep_japan_predictive_window_t1

0xc322,	// (0x00033d0d) popup_fep_japan_predictive_window_t2_ParamLimits

0xc322,	// (0x00033d0d) popup_fep_japan_predictive_window_t2

0xc355,	// (0x00033d40) popup_fep_japan_predictive_window_t3_ParamLimits

0xc355,	// (0x00033d40) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x000370dc) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x000370dc) popup_fep_japan_predictive_window_t

0xb8f2,	// (0x000332dd) bg_popup_sub_pane_cp23

0xc38c,	// (0x00033d77) listscroll_japin_cand_pane

0xc394,	// (0x00033d7f) popup_fep_japan_candidate_window_t1

0xc3a2,	// (0x00033d8d) candidate_pane_ParamLimits

0xc3a2,	// (0x00033d8d) candidate_pane

0xc3b4,	// (0x00033d9f) scroll_pane_cp30

0xc3bc,	// (0x00033da7) list_single_popup_jap_candidate_pane_ParamLimits

0xc3bc,	// (0x00033da7) list_single_popup_jap_candidate_pane

0xb8f2,	// (0x000332dd) list_highlight_pane_cp30

0xc3d1,	// (0x00033dbc) list_single_popup_jap_candidate_pane_t1

0xc3e0,	// (0x00033dcb) level_1_signal

0xc3ed,	// (0x00033dd8) level_2_signal

0xc3fa,	// (0x00033de5) level_3_signal

0xc407,	// (0x00033df2) level_4_signal

0xc414,	// (0x00033dff) level_5_signal

0xc421,	// (0x00033e0c) level_6_signal

0xc42e,	// (0x00033e19) level_7_signal

0xc3e0,	// (0x00033dcb) level_1_battery

0xc3ed,	// (0x00033dd8) level_2_battery

0xc3fa,	// (0x00033de5) level_3_battery

0xc407,	// (0x00033df2) level_4_battery

0xc414,	// (0x00033dff) level_5_battery

0xc421,	// (0x00033e0c) level_6_battery

0xc42e,	// (0x00033e19) level_7_battery

0xc453,	// (0x00033e3e) list_menu_pane_ParamLimits

0xc453,	// (0x00033e3e) list_menu_pane

0xc469,	// (0x00033e54) scroll_pane_cp25_ParamLimits

0xc469,	// (0x00033e54) scroll_pane_cp25

0xc482,	// (0x00033e6d) list_double2_graphic_pane_cp2_ParamLimits

0xc482,	// (0x00033e6d) list_double2_graphic_pane_cp2

0xc482,	// (0x00033e6d) list_double2_large_graphic_pane_cp2_ParamLimits

0xc482,	// (0x00033e6d) list_double2_large_graphic_pane_cp2

0xc482,	// (0x00033e6d) list_double2_pane_cp2_ParamLimits

0xc482,	// (0x00033e6d) list_double2_pane_cp2

0xc482,	// (0x00033e6d) list_double_graphic_pane_cp2_ParamLimits

0xc482,	// (0x00033e6d) list_double_graphic_pane_cp2

0xc482,	// (0x00033e6d) list_double_large_graphic_pane_cp2_ParamLimits

0xc482,	// (0x00033e6d) list_double_large_graphic_pane_cp2

0xc482,	// (0x00033e6d) list_double_number_pane_cp2_ParamLimits

0xc482,	// (0x00033e6d) list_double_number_pane_cp2

0xc482,	// (0x00033e6d) list_double_pane_cp2_ParamLimits

0xc482,	// (0x00033e6d) list_double_pane_cp2

0xee9b,	// (0x00036886) list_single_2graphic_pane_cp2_ParamLimits

0xee9b,	// (0x00036886) list_single_2graphic_pane_cp2

0xee9b,	// (0x00036886) list_single_graphic_heading_pane_cp2_ParamLimits

0xee9b,	// (0x00036886) list_single_graphic_heading_pane_cp2

0xee9b,	// (0x00036886) list_single_graphic_pane_cp2_ParamLimits

0xee9b,	// (0x00036886) list_single_graphic_pane_cp2

0xee9b,	// (0x00036886) list_single_heading_pane_cp2_ParamLimits

0xee9b,	// (0x00036886) list_single_heading_pane_cp2

0xc492,	// (0x00033e7d) list_single_large_graphic_pane_cp2_ParamLimits

0xc492,	// (0x00033e7d) list_single_large_graphic_pane_cp2

0xee9b,	// (0x00036886) list_single_number_heading_pane_cp2_ParamLimits

0xee9b,	// (0x00036886) list_single_number_heading_pane_cp2

0xee9b,	// (0x00036886) list_single_number_pane_cp2_ParamLimits

0xee9b,	// (0x00036886) list_single_number_pane_cp2

0xee9b,	// (0x00036886) list_single_pane_cp2_ParamLimits

0xee9b,	// (0x00036886) list_single_pane_cp2

0xc4ac,	// (0x00033e97) bg_popup_sub_pane_cp22

0x976c,	// (0x00031157) popup_side_volume_key_window_g1

0x9790,	// (0x0003117b) popup_side_volume_key_window_t1

0x97ac,	// (0x00031197) volume_small_pane_cp1

0xba83,	// (0x0003346e) bg_popup_sub_pane_cp24_ParamLimits

0xba83,	// (0x0003346e) bg_popup_sub_pane_cp24

0xc4c2,	// (0x00033ead) fep_china_uni_candidate_pane_ParamLimits

0xc4c2,	// (0x00033ead) fep_china_uni_candidate_pane

0xc4d6,	// (0x00033ec1) fep_china_uni_entry_pane

0xc4e6,	// (0x00033ed1) popup_fep_china_uni_window_g1

0xc502,	// (0x00033eed) fep_china_uni_entry_pane_g1

0xc50a,	// (0x00033ef5) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003710d) fep_china_uni_entry_pane_g

0xc512,	// (0x00033efd) fep_entry_item_pane

0xc51c,	// (0x00033f07) fep_candidate_item_pane

0xc524,	// (0x00033f0f) fep_china_uni_candidate_pane_g1

0xc52c,	// (0x00033f17) fep_china_uni_candidate_pane_g2

0xc534,	// (0x00033f1f) fep_china_uni_candidate_pane_g3

0xc53c,	// (0x00033f27) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00037112) fep_china_uni_candidate_pane_g

0xb8e8,	// (0x000332d3) fep_entry_item_pane_g1

0xc544,	// (0x00033f2f) fep_entry_item_pane_t1_ParamLimits

0xc544,	// (0x00033f2f) fep_entry_item_pane_t1

0xc55a,	// (0x00033f45) fep_candidate_item_pane_t1_ParamLimits

0xc55a,	// (0x00033f45) fep_candidate_item_pane_t1

0xc56f,	// (0x00033f5a) fep_candidate_item_pane_t2_ParamLimits

0xc56f,	// (0x00033f5a) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003711b) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003711b) fep_candidate_item_pane_t

0xb940,	// (0x0003332b) list_highlight_pane_cp31_ParamLimits

0xb940,	// (0x0003332b) list_highlight_pane_cp31

0xc581,	// (0x00033f6c) level_1_signal_lsc

0xc58a,	// (0x00033f75) level_2_signal_lsc

0xc593,	// (0x00033f7e) level_3_signal_lsc

0xc59c,	// (0x00033f87) level_4_signal_lsc

0xc5a5,	// (0x00033f90) level_5_signal_lsc

0xc5ae,	// (0x00033f99) level_6_signal_lsc

0xc5b7,	// (0x00033fa2) level_7_signal_lsc

0xc5b7,	// (0x00033fa2) level_1_battery_lsc

0xc5c0,	// (0x00033fab) level_2_battery_lsc

0xc5c9,	// (0x00033fb4) level_3_battery_lsc

0xc5d2,	// (0x00033fbd) level_4_battery_lsc

0xc5db,	// (0x00033fc6) level_5_battery_lsc

0xc5e4,	// (0x00033fcf) level_6_battery_lsc

0xc581,	// (0x00033f6c) level_7_battery_lsc

0xc5ed,	// (0x00033fd8) scroll_handle_focus_pane_g1

0xc5f6,	// (0x00033fe1) scroll_handle_focus_pane_g2

0xc5ff,	// (0x00033fea) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00037120) scroll_handle_focus_pane_g

0x8834,	// (0x0003021f) list_single_2graphic_pane_g1_ParamLimits

0x8834,	// (0x0003021f) list_single_2graphic_pane_g1

0x8261,	// (0x0002fc4c) list_single_2graphic_pane_g2_ParamLimits

0x8261,	// (0x0002fc4c) list_single_2graphic_pane_g2

0x94ca,	// (0x00030eb5) list_single_2graphic_pane_g3_ParamLimits

0x94ca,	// (0x00030eb5) list_single_2graphic_pane_g3

0x8840,	// (0x0003022b) list_single_2graphic_pane_g4_ParamLimits

0x8840,	// (0x0003022b) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00037127) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00037127) list_single_2graphic_pane_g

0x8851,	// (0x0003023c) list_single_2graphic_pane_t1_ParamLimits

0x8851,	// (0x0003023c) list_single_2graphic_pane_t1

0x887f,	// (0x0003026a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x887f,	// (0x0003026a) list_double2_graphic_large_graphic_pane_g1

0x950b,	// (0x00030ef6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x950b,	// (0x00030ef6) list_double2_graphic_large_graphic_pane_g2

0x94ea,	// (0x00030ed5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x94ea,	// (0x00030ed5) list_double2_graphic_large_graphic_pane_g3

0x888f,	// (0x0003027a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x888f,	// (0x0003027a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00037130) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00037130) list_double2_graphic_large_graphic_pane_g

0x889b,	// (0x00030286) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x889b,	// (0x00030286) list_double2_graphic_large_graphic_pane_t1

0x88b1,	// (0x0003029c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x88b1,	// (0x0003029c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00037139) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00037139) list_double2_graphic_large_graphic_pane_t

0xc734,	// (0x0003411f) popup_fast_swap_window_ParamLimits

0xc734,	// (0x0003411f) popup_fast_swap_window

0xc750,	// (0x0003413b) popup_side_volume_key_window

0xc76a,	// (0x00034155) stacon_top_pane

0xc774,	// (0x0003415f) status_pane_ParamLimits

0xc774,	// (0x0003415f) status_pane

0xef04,	// (0x000368ef) status_small_pane

0xb8f2,	// (0x000332dd) control_pane

0xb8f2,	// (0x000332dd) stacon_bottom_pane

0xbef8,	// (0x000338e3) scroll_pane_cp121

0xbeef,	// (0x000338da) set_content_pane

0xc608,	// (0x00033ff3) bg_active_tab_pane_g1_cp1

0xc611,	// (0x00033ffc) bg_active_tab_pane_g2_cp1

0xc61a,	// (0x00034005) bg_active_tab_pane_g3_cp1

0xc608,	// (0x00033ff3) bg_passive_tab_pane_g1_cp1

0xc611,	// (0x00033ffc) bg_passive_tab_pane_g2_cp1

0xc61a,	// (0x00034005) bg_passive_tab_pane_g3_cp1

0xc623,	// (0x0003400e) bg_active_tab_pane_g1_cp2

0xc611,	// (0x00033ffc) bg_active_tab_pane_g2_cp2

0xc62c,	// (0x00034017) bg_active_tab_pane_g3_cp2

0xc623,	// (0x0003400e) bg_passive_tab_pane_g1_cp2

0xc611,	// (0x00033ffc) bg_passive_tab_pane_g2_cp2

0xc62c,	// (0x00034017) bg_passive_tab_pane_g3_cp2

0xc635,	// (0x00034020) bg_active_tab_pane_g1_cp3

0xc611,	// (0x00033ffc) bg_active_tab_pane_g2_cp3

0xc63e,	// (0x00034029) bg_active_tab_pane_g3_cp3

0xc635,	// (0x00034020) bg_passive_tab_pane_g1_cp3

0xc611,	// (0x00033ffc) bg_passive_tab_pane_g2_cp3

0xc63e,	// (0x00034029) bg_passive_tab_pane_g3_cp3

0xc647,	// (0x00034032) bg_active_tab_pane_g1_cp4

0xc611,	// (0x00033ffc) bg_active_tab_pane_g2_cp4

0xc650,	// (0x0003403b) bg_active_tab_pane_g3_cp4

0xc647,	// (0x00034032) bg_passive_tab_pane_g1_cp4

0xc611,	// (0x00033ffc) bg_passive_tab_pane_g2_cp4

0xc650,	// (0x0003403b) bg_passive_tab_pane_g3_cp4

0xc697,	// (0x00034082) bg_active_tab_pane_g1_cp5

0xc611,	// (0x00033ffc) bg_active_tab_pane_g2_cp5

0xc6a0,	// (0x0003408b) bg_active_tab_pane_g3_cp5

0xc697,	// (0x00034082) bg_passive_tab_pane_g1_cp5

0xc611,	// (0x00033ffc) bg_passive_tab_pane_g2_cp5

0xc6a0,	// (0x0003408b) bg_passive_tab_pane_g3_cp5

0xc6a9,	// (0x00034094) list_set_graphic_pane_ParamLimits

0xc6a9,	// (0x00034094) list_set_graphic_pane

0xb8f2,	// (0x000332dd) bg_set_opt_pane_cp4

0xc6bb,	// (0x000340a6) list_set_graphic_pane_g1_ParamLimits

0xc6bb,	// (0x000340a6) list_set_graphic_pane_g1

0xc6c7,	// (0x000340b2) list_set_graphic_pane_g2_ParamLimits

0xc6c7,	// (0x000340b2) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003713e) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003713e) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x000374c8) volume_small_pane_cp_g

0xc6e9,	// (0x000340d4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc6e9,	// (0x000340d4) list_double2_large_graphic_pane_g1_cp2

0xc6f5,	// (0x000340e0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc6f5,	// (0x000340e0) list_double2_large_graphic_pane_g2_cp2

0xc704,	// (0x000340ef) list_double2_large_graphic_pane_g3_cp2

0xc70c,	// (0x000340f7) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc70c,	// (0x000340f7) list_double2_large_graphic_pane_t1_cp2

0xc722,	// (0x0003410d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc722,	// (0x0003410d) list_double2_large_graphic_pane_t2_cp2

0xdc3a,	// (0x00035625) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xdc3a,	// (0x00035625) list_double_large_graphic_pane_g1_cp2

0xdc4b,	// (0x00035636) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xdc4b,	// (0x00035636) list_double_large_graphic_pane_g2_cp2

0xc87e,	// (0x00034269) list_double_large_graphic_pane_g3_cp2

0xdc5a,	// (0x00035645) list_double_large_graphic_pane_g4_cp

0xdc62,	// (0x0003564d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xdc62,	// (0x0003564d) list_double_large_graphic_pane_t1_cp2

0xdc79,	// (0x00035664) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xdc79,	// (0x00035664) list_double_large_graphic_pane_t2_cp2

0xc782,	// (0x0003416d) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc782,	// (0x0003416d) list_double2_graphic_pane_g1_cp2

0xc78e,	// (0x00034179) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc78e,	// (0x00034179) list_double2_graphic_pane_g2_cp2

0xc79d,	// (0x00034188) list_double2_graphic_pane_g3_cp2

0xc7a5,	// (0x00034190) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc7a5,	// (0x00034190) list_double2_graphic_pane_t1_cp2

0xc7bb,	// (0x000341a6) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc7bb,	// (0x000341a6) list_double2_graphic_pane_t2_cp2

0xc7cd,	// (0x000341b8) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc7cd,	// (0x000341b8) list_single_number_heading_pane_g1_cp2

0xc7d9,	// (0x000341c4) list_single_number_heading_pane_g2_cp2

0xc7e1,	// (0x000341cc) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc7e1,	// (0x000341cc) list_single_number_heading_pane_t1_cp2

0xc7f7,	// (0x000341e2) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc7f7,	// (0x000341e2) list_single_number_heading_pane_t2_cp2

0xc809,	// (0x000341f4) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc809,	// (0x000341f4) list_single_number_heading_pane_t3_cp2

0xc7cd,	// (0x000341b8) list_single_heading_pane_g1_cp2_ParamLimits

0xc7cd,	// (0x000341b8) list_single_heading_pane_g1_cp2

0xc7d9,	// (0x000341c4) list_single_heading_pane_g2_cp2

0xc7e1,	// (0x000341cc) list_single_heading_pane_t1_cp2_ParamLimits

0xc7e1,	// (0x000341cc) list_single_heading_pane_t1_cp2

0xda44,	// (0x0003542f) list_single_heading_pane_t2_cp2_ParamLimits

0xda44,	// (0x0003542f) list_single_heading_pane_t2_cp2

0xd99b,	// (0x00035386) list_double_graphic_pane_g1_cp2_ParamLimits

0xd99b,	// (0x00035386) list_double_graphic_pane_g1_cp2

0xd4c9,	// (0x00034eb4) list_double_graphic_pane_g2_cp2_ParamLimits

0xd4c9,	// (0x00034eb4) list_double_graphic_pane_g2_cp2

0xd9a7,	// (0x00035392) list_double_graphic_pane_g3_cp2

0xd9af,	// (0x0003539a) list_double_graphic_pane_t1_cp2_ParamLimits

0xd9af,	// (0x0003539a) list_double_graphic_pane_t1_cp2

0xd9c5,	// (0x000353b0) list_double_graphic_pane_t2_cp2_ParamLimits

0xd9c5,	// (0x000353b0) list_double_graphic_pane_t2_cp2

0xbeb9,	// (0x000338a4) list_double_number_pane_g1_cp2_ParamLimits

0xbeb9,	// (0x000338a4) list_double_number_pane_g1_cp2

0xc87e,	// (0x00034269) list_double_number_pane_g2_cp2

0xd961,	// (0x0003534c) list_double_number_pane_t1_cp2_ParamLimits

0xd961,	// (0x0003534c) list_double_number_pane_t1_cp2

0xd973,	// (0x0003535e) list_double_number_pane_t2_cp2_ParamLimits

0xd973,	// (0x0003535e) list_double_number_pane_t2_cp2

0xd989,	// (0x00035374) list_double_number_pane_t3_cp2_ParamLimits

0xd989,	// (0x00035374) list_double_number_pane_t3_cp2

0xd8c4,	// (0x000352af) list_single_graphic_pane_g1_cp2_ParamLimits

0xd8c4,	// (0x000352af) list_single_graphic_pane_g1_cp2

0xc8d4,	// (0x000342bf) list_single_graphic_pane_g2_cp2_ParamLimits

0xc8d4,	// (0x000342bf) list_single_graphic_pane_g2_cp2

0xc8e0,	// (0x000342cb) list_single_graphic_pane_g3_cp2

0xd89c,	// (0x00035287) list_single_graphic_pane_t1_cp2_ParamLimits

0xd89c,	// (0x00035287) list_single_graphic_pane_t1_cp2

0xc8d4,	// (0x000342bf) list_single_number_pane_g1_cp2_ParamLimits

0xc8d4,	// (0x000342bf) list_single_number_pane_g1_cp2

0xc8e0,	// (0x000342cb) list_single_number_pane_g2_cp2

0xd89c,	// (0x00035287) list_single_number_pane_t1_cp2_ParamLimits

0xd89c,	// (0x00035287) list_single_number_pane_t1_cp2

0xd8b2,	// (0x0003529d) list_single_number_pane_t2_cp2_ParamLimits

0xd8b2,	// (0x0003529d) list_single_number_pane_t2_cp2

0xc6f5,	// (0x000340e0) list_double2_pane_g1_cp2_ParamLimits

0xc6f5,	// (0x000340e0) list_double2_pane_g1_cp2

0xc704,	// (0x000340ef) list_double2_pane_g2_cp2

0xc856,	// (0x00034241) list_double2_pane_t1_cp2_ParamLimits

0xc856,	// (0x00034241) list_double2_pane_t1_cp2

0xc86c,	// (0x00034257) list_double2_pane_t2_cp2_ParamLimits

0xc86c,	// (0x00034257) list_double2_pane_t2_cp2

0xbeb9,	// (0x000338a4) list_double_pane_g1_cp2_ParamLimits

0xbeb9,	// (0x000338a4) list_double_pane_g1_cp2

0xc87e,	// (0x00034269) list_double_pane_g2_cp2

0xc886,	// (0x00034271) list_double_pane_t1_cp2_ParamLimits

0xc886,	// (0x00034271) list_double_pane_t1_cp2

0xc89c,	// (0x00034287) list_double_pane_t2_cp2_ParamLimits

0xc89c,	// (0x00034287) list_double_pane_t2_cp2

0xc8c4,	// (0x000342af) list_single_pane_cp2_g3

0xc8d4,	// (0x000342bf) list_single_pane_g1_cp2_ParamLimits

0xc8d4,	// (0x000342bf) list_single_pane_g1_cp2

0xc8e0,	// (0x000342cb) list_single_pane_g2_cp2

0xc8e8,	// (0x000342d3) list_single_pane_t1_cp2_ParamLimits

0xc8e8,	// (0x000342d3) list_single_pane_t1_cp2

0xc900,	// (0x000342eb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc900,	// (0x000342eb) list_single_large_graphic_pane_g1_cp2

0xc90c,	// (0x000342f7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc90c,	// (0x000342f7) list_single_large_graphic_pane_g2_cp2

0xc918,	// (0x00034303) list_single_large_graphic_pane_g3_cp2

0xc920,	// (0x0003430b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc920,	// (0x0003430b) list_single_large_graphic_pane_g4_cp1

0xc93a,	// (0x00034325) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc93a,	// (0x00034325) list_single_large_graphic_pane_t1_cp2

0xd868,	// (0x00035253) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd868,	// (0x00035253) list_single_graphic_heading_pane_g1_cp2

0xd837,	// (0x00035222) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd837,	// (0x00035222) list_single_graphic_heading_pane_g4_cp2

0xc8e0,	// (0x000342cb) list_single_graphic_heading_pane_g5_cp2

0xd874,	// (0x0003525f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd874,	// (0x0003525f) list_single_graphic_heading_pane_t1_cp2

0xd88a,	// (0x00035275) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd88a,	// (0x00035275) list_single_graphic_heading_pane_t2_cp2

0xd82b,	// (0x00035216) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd82b,	// (0x00035216) list_single_2graphic_pane_g1_cp2

0xd837,	// (0x00035222) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd837,	// (0x00035222) list_single_2graphic_pane_g2_cp2

0xc8e0,	// (0x000342cb) list_single_2graphic_pane_g3_cp2

0xd846,	// (0x00035231) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd846,	// (0x00035231) list_single_2graphic_pane_g4_cp2

0xd852,	// (0x0003523d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd852,	// (0x0003523d) list_single_2graphic_pane_t1_cp2

0xb8e8,	// (0x000332d3) list_highlight_pane_g10_cp1

0xd410,	// (0x00034dfb) list_highlight_pane_g1_cp1

0xd418,	// (0x00034e03) list_highlight_pane_g2_cp1

0xd420,	// (0x00034e0b) list_highlight_pane_g3_cp1

0xd428,	// (0x00034e13) list_highlight_pane_g4_cp1

0xd430,	// (0x00034e1b) list_highlight_pane_g5_cp1

0xd438,	// (0x00034e23) list_highlight_pane_g6_cp1

0xd440,	// (0x00034e2b) list_highlight_pane_g7_cp1

0xd448,	// (0x00034e33) list_highlight_pane_g8_cp1

0xd450,	// (0x00034e3b) list_highlight_pane_g9_cp1

0xf43b,	// (0x00036e26) form_field_slider_pane_t3

0xf449,	// (0x00036e34) form_field_slider_pane_t4

0xd354,	// (0x00034d3f) slider_form_pane_ParamLimits

0xd354,	// (0x00034d3f) slider_form_pane

0xb8f2,	// (0x000332dd) control_abbreviations

0xb8f2,	// (0x000332dd) control_conventions

0xb8f2,	// (0x000332dd) control_definitions

0xb8f2,	// (0x000332dd) format_table_attribute

0xda8e,	// (0x00035479) bg_popup_preview_window_pane_g9

0xb8f2,	// (0x000332dd) format_table_data2

0xb8f2,	// (0x000332dd) format_table_data3

0xb8f2,	// (0x000332dd) format_table_data_example

0x0008,

0xb8f2,	// (0x000332dd) intro_purpose

0xf8ef,	// (0x000372da) bg_popup_preview_window_pane_g

0xb8f2,	// (0x000332dd) texts_category

0xb8f2,	// (0x000332dd) texts_graphics

0xc950,	// (0x0003433b) text_digital

0xc95f,	// (0x0003434a) text_primary

0xc96e,	// (0x00034359) text_primary_small

0xc97d,	// (0x00034368) text_secondary

0xc98c,	// (0x00034377) text_title

0xdf07,	// (0x000358f2) bg_passive_tab_pane_g1_cp3_srt

0xc611,	// (0x00033ffc) bg_passive_tab_pane_g2_cp3_srt

0xdf10,	// (0x000358fb) bg_passive_tab_pane_g3_cp3_srt

0xb940,	// (0x0003332b) bg_active_tab_pane_cp3_srt_ParamLimits

0xb940,	// (0x0003332b) bg_active_tab_pane_cp3_srt

0xdf19,	// (0x00035904) tabs_4_active_pane_srt_g1

0x02a2,	// (0x00027c8d) tabs_4_active_pane_srt_t1_ParamLimits

0x02a2,	// (0x00027c8d) tabs_4_active_pane_srt_t1

0xdf07,	// (0x000358f2) bg_active_tab_pane_g1_cp3_copy1

0xc611,	// (0x00033ffc) bg_active_tab_pane_g2_cp3_copy1

0xdf10,	// (0x000358fb) bg_active_tab_pane_g3_cp3_copy1

0xb940,	// (0x0003332b) tabs_2_long_active_pane_srt_ParamLimits

0xb940,	// (0x0003332b) tabs_2_long_active_pane_srt

0xb940,	// (0x0003332b) tabs_2_long_passive_pane_srt_ParamLimits

0xb940,	// (0x0003332b) tabs_2_long_passive_pane_srt

0xedde,	// (0x000367c9) bg_passive_tab_pane_cp4_srt_ParamLimits

0xedde,	// (0x000367c9) bg_passive_tab_pane_cp4_srt

0xde2b,	// (0x00035816) bg_passive_tab_pane_g1_cp4_srt

0xc611,	// (0x00033ffc) bg_passive_tab_pane_g2_cp4_srt

0xde34,	// (0x0003581f) bg_passive_tab_pane_g3_cp4_srt

0xc07e,	// (0x00033a69) bg_active_tab_pane_cp4_srt_ParamLimits

0xc07e,	// (0x00033a69) bg_active_tab_pane_cp4_srt

0x0013,	// (0x000279fe) tabs_2_long_active_pane_srt_t1_ParamLimits

0x0013,	// (0x000279fe) tabs_2_long_active_pane_srt_t1

0xde2b,	// (0x00035816) bg_active_tab_pane_g1_cp4_srt

0xc611,	// (0x00033ffc) bg_active_tab_pane_g2_cp4_srt

0xde34,	// (0x0003581f) bg_active_tab_pane_g3_cp4_srt

0xba83,	// (0x0003346e) tabs_3_long_active_pane_srt_ParamLimits

0xba83,	// (0x0003346e) tabs_3_long_active_pane_srt

0xba83,	// (0x0003346e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xba83,	// (0x0003346e) tabs_3_long_passive_pane_cp_srt

0xba83,	// (0x0003346e) tabs_3_long_passive_pane_srt_ParamLimits

0xba83,	// (0x0003346e) tabs_3_long_passive_pane_srt

0xedde,	// (0x000367c9) bg_passive_tab_pane_cp5_srt_ParamLimits

0xedde,	// (0x000367c9) bg_passive_tab_pane_cp5_srt

0xc697,	// (0x00034082) bg_passive_tab_pane_g1_cp5_srt

0xc611,	// (0x00033ffc) bg_passive_tab_pane_g2_cp5_srt

0xc6a0,	// (0x0003408b) bg_passive_tab_pane_g3_cp5_srt

0xc07e,	// (0x00033a69) bg_active_tab_pane_cp5_srt_ParamLimits

0xc07e,	// (0x00033a69) bg_active_tab_pane_cp5_srt

0x0001,	// (0x000279ec) tabs_3_long_active_pane_srt_t1_ParamLimits

0x0001,	// (0x000279ec) tabs_3_long_active_pane_srt_t1

0xc697,	// (0x00034082) bg_active_tab_pane_g1_cp5_srt

0xc611,	// (0x00033ffc) bg_active_tab_pane_g2_cp5_srt

0xc6a0,	// (0x0003408b) bg_active_tab_pane_g3_cp5_srt

0xde1d,	// (0x00035808) navi_text_pane_srt_t1

0xde15,	// (0x00035800) navi_icon_pane_srt_g1

0xcaa4,	// (0x0003448f) midp_editing_number_pane_srt

0xc99b,	// (0x00034386) midp_ticker_pane_srt

0xcaac,	// (0x00034497) midp_ticker_pane_srt_g1

0xcab4,	// (0x0003449f) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003715d) midp_ticker_pane_srt_g

0xcabc,	// (0x000344a7) midp_ticker_pane_srt_t1

0xde06,	// (0x000357f1) midp_editing_number_pane_t1_copy1

0xef0d,	// (0x000368f8) listscroll_midp_pane

0xef0d,	// (0x000368f8) midp_form_pane

0xc9a3,	// (0x0003438e) midp_info_popup_window_ParamLimits

0xc9a3,	// (0x0003438e) midp_info_popup_window

0xbfbe,	// (0x000339a9) bg_popup_sub_pane_cp50_ParamLimits

0xbfbe,	// (0x000339a9) bg_popup_sub_pane_cp50

0xd07d,	// (0x00034a68) listscroll_midp_info_pane_ParamLimits

0xd07d,	// (0x00034a68) listscroll_midp_info_pane

0xd05d,	// (0x00034a48) listscroll_form_midp_pane_ParamLimits

0xd05d,	// (0x00034a48) listscroll_form_midp_pane

0xd069,	// (0x00034a54) scroll_bar_cp050

0xf423,	// (0x00036e0e) list_midp_pane

0xe7a1,	// (0x0003618c) signal_pane_g2_cp

0xcf8f,	// (0x0003497a) listscroll_midp_info_pane_t1_ParamLimits

0xcf8f,	// (0x0003497a) listscroll_midp_info_pane_t1

0xcfa7,	// (0x00034992) listscroll_midp_info_pane_t2_ParamLimits

0xcfa7,	// (0x00034992) listscroll_midp_info_pane_t2

0xcfe5,	// (0x000349d0) listscroll_midp_info_pane_t3_ParamLimits

0xcfe5,	// (0x000349d0) listscroll_midp_info_pane_t3

0xd01f,	// (0x00034a0a) listscroll_midp_info_pane_t4_ParamLimits

0xd01f,	// (0x00034a0a) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00037215) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00037215) listscroll_midp_info_pane_t

0xc03e,	// (0x00033a29) scroll_pane_cp21

0xcf33,	// (0x0003491e) form_midp_field_choice_group_pane

0xcf3c,	// (0x00034927) form_midp_field_text_pane

0xcf75,	// (0x00034960) form_midp_field_time_pane

0xcf7d,	// (0x00034968) form_midp_gauge_slider_pane

0xcf86,	// (0x00034971) form_midp_gauge_wait_pane

0xb8f2,	// (0x000332dd) form_midp_image_pane

0x8a14,	// (0x000303ff) list_single_midp_pane_ParamLimits

0x8a14,	// (0x000303ff) list_single_midp_pane

0xf403,	// (0x00036dee) form_midp_field_text_pane_t1

0xcdbe,	// (0x000347a9) input_focus_pane_cp050

0xcf22,	// (0x0003490d) list_midp_form_text_pane

0xcef1,	// (0x000348dc) form_midp_field_choice_group_pane_t1

0xceff,	// (0x000348ea) input_focus_pane_cp051

0xcf13,	// (0x000348fe) list_midp_choice_pane

0xb8f2,	// (0x000332dd) status_idle_pane

0xced5,	// (0x000348c0) form_midp_field_time_pane_t1

0xb8e8,	// (0x000332d3) wait_anim_pane_g2_copy1

0xcee3,	// (0x000348ce) form_midp_field_time_pane_t2

0x0001,

0xca0e,	// (0x000343f9) aid_navinavi_width_2_pane

0xf825,	// (0x00037210) form_midp_field_time_pane_t

0xb8f2,	// (0x000332dd) input_focus_pane_cp052

0xb8f2,	// (0x000332dd) bg_input_focus_pane_cp040

0xceb1,	// (0x0003489c) form_midp_gauge_slider_pane_t1

0xcebf,	// (0x000348aa) form_midp_gauge_slider_pane_t2

0xf3e7,	// (0x00036dd2) form_midp_gauge_slider_pane_t3

0xf3f5,	// (0x00036de0) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00037207) form_midp_gauge_slider_pane_t

0xcecd,	// (0x000348b8) form_midp_slider_pane

0xb940,	// (0x0003332b) bg_input_focus_pane_cp041_ParamLimits

0xb940,	// (0x0003332b) bg_input_focus_pane_cp041

0xce81,	// (0x0003486c) form_midp_gauge_wait_pane_t1_ParamLimits

0xce81,	// (0x0003486c) form_midp_gauge_wait_pane_t1

0xce93,	// (0x0003487e) form_midp_gauge_wait_pane_t2_ParamLimits

0xce93,	// (0x0003487e) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00037202) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00037202) form_midp_gauge_wait_pane_t

0xcea5,	// (0x00034890) form_midp_wait_pane_ParamLimits

0xcea5,	// (0x00034890) form_midp_wait_pane

0xce4b,	// (0x00034836) form_midp_image_pane_g1

0xce54,	// (0x0003483f) form_midp_image_pane_t1

0xce63,	// (0x0003484e) form_midp_image_pane_t2

0xce72,	// (0x0003485d) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x000371fb) form_midp_image_pane_t

0xce42,	// (0x0003482d) list_single_midp_pane_g1

0x8a05,	// (0x000303f0) list_single_midp_pane_t1

0xf3d4,	// (0x00036dbf) list_midp_form_item_pane_ParamLimits

0xf3d4,	// (0x00036dbf) list_midp_form_item_pane

0xc9b6,	// (0x000343a1) list_midp_form_item_pane_t1

0xc9c5,	// (0x000343b0) midp_ticker_pane_g1

0xc9d1,	// (0x000343bc) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00037143) midp_ticker_pane_g

0xc9dd,	// (0x000343c8) midp_ticker_pane_t1

0xdeb0,	// (0x0003589b) midp_editing_number_pane_t1

0xde8e,	// (0x00035879) midp_editing_number_pane

0xde9d,	// (0x00035888) midp_ticker_pane

0xddf6,	// (0x000357e1) ai_message_heading_pane

0xb8f2,	// (0x000332dd) bg_popup_window_pane_cp14

0xddfe,	// (0x000357e9) listscroll_ai_message_pane

0xdd80,	// (0x0003576b) ai_message_heading_pane_g1_ParamLimits

0xdd80,	// (0x0003576b) ai_message_heading_pane_g1

0xdd8c,	// (0x00035777) ai_message_heading_pane_g2_ParamLimits

0xdd8c,	// (0x00035777) ai_message_heading_pane_g2

0xdd98,	// (0x00035783) ai_message_heading_pane_g3_ParamLimits

0xdd98,	// (0x00035783) ai_message_heading_pane_g3

0xdda4,	// (0x0003578f) ai_message_heading_pane_g4_ParamLimits

0xdda4,	// (0x0003578f) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0003733c) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0003733c) ai_message_heading_pane_g

0xddb0,	// (0x0003579b) ai_message_heading_pane_t1_ParamLimits

0xddb0,	// (0x0003579b) ai_message_heading_pane_t1

0xddca,	// (0x000357b5) ai_message_heading_pane_t2_ParamLimits

0xddca,	// (0x000357b5) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00037345) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00037345) ai_message_heading_pane_t

0xdddc,	// (0x000357c7) bg_popup_heading_pane_cp1_ParamLimits

0xdddc,	// (0x000357c7) bg_popup_heading_pane_cp1

0xdd6e,	// (0x00035759) list_ai_message_pane_ParamLimits

0xdd6e,	// (0x00035759) list_ai_message_pane

0xc03e,	// (0x00033a29) scroll_pane_cp10

0xdd0a,	// (0x000356f5) list_ai_message_pane_g1

0xdd12,	// (0x000356fd) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00037319) list_ai_message_pane_g

0xdd1a,	// (0x00035705) list_ai_message_pane_t1_ParamLimits

0xdd1a,	// (0x00035705) list_ai_message_pane_t1

0xdd2f,	// (0x0003571a) list_ai_message_pane_t2_ParamLimits

0xdd2f,	// (0x0003571a) list_ai_message_pane_t2

0xdd44,	// (0x0003572f) list_ai_message_pane_t3_ParamLimits

0xdd44,	// (0x0003572f) list_ai_message_pane_t3

0xdd59,	// (0x00035744) list_ai_message_pane_t4_ParamLimits

0xdd59,	// (0x00035744) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0003731e) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0003731e) list_ai_message_pane_t

0xf53c,	// (0x00036f27) cell_ai_soft_ind_pane_ParamLimits

0xf53c,	// (0x00036f27) cell_ai_soft_ind_pane

0xc9ef,	// (0x000343da) cell_ai_soft_ind_pane_g1_ParamLimits

0xc9ef,	// (0x000343da) cell_ai_soft_ind_pane_g1

0xb8f2,	// (0x000332dd) grid_highlight_cp1

0xc9fc,	// (0x000343e7) text_secondary_cp56_ParamLimits

0xc9fc,	// (0x000343e7) text_secondary_cp56

0xdcdf,	// (0x000356ca) example_general_pane_ParamLimits

0xdcdf,	// (0x000356ca) example_general_pane

0xdceb,	// (0x000356d6) example_parent_pane_g1_ParamLimits

0xdceb,	// (0x000356d6) example_parent_pane_g1

0xdcf7,	// (0x000356e2) example_parent_pane_t1_ParamLimits

0xdcf7,	// (0x000356e2) example_parent_pane_t1

0x9dc6,	// (0x000317b1) popup_preview_text_window_ParamLimits

0x9dc6,	// (0x000317b1) popup_preview_text_window

0xc8cc,	// (0x000342b7) list_single_pane_cp2_g4

0xbb39,	// (0x00033524) bg_popup_preview_window_pane_ParamLimits

0xbb39,	// (0x00033524) bg_popup_preview_window_pane

0xda96,	// (0x00035481) popup_preview_text_window_t1_ParamLimits

0xda96,	// (0x00035481) popup_preview_text_window_t1

0xdab4,	// (0x0003549f) popup_preview_text_window_t2_ParamLimits

0xdab4,	// (0x0003549f) popup_preview_text_window_t2

0xdafd,	// (0x000354e8) popup_preview_text_window_t3_ParamLimits

0xdafd,	// (0x000354e8) popup_preview_text_window_t3

0xdb42,	// (0x0003552d) popup_preview_text_window_t4_ParamLimits

0xdb42,	// (0x0003552d) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x000372ed) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x000372ed) popup_preview_text_window_t

0xdbc0,	// (0x000355ab) scroll_pane_cp11

0xcd32,	// (0x0003471d) bg_popup_preview_window_pane_g1

0xda56,	// (0x00035441) bg_popup_preview_window_pane_g2

0xda5e,	// (0x00035449) bg_popup_preview_window_pane_g3

0xda66,	// (0x00035451) bg_popup_preview_window_pane_g4

0xda6e,	// (0x00035459) bg_popup_preview_window_pane_g5

0xda76,	// (0x00035461) bg_popup_preview_window_pane_g6

0xda7e,	// (0x00035469) bg_popup_preview_window_pane_g7

0xda86,	// (0x00035471) bg_popup_preview_window_pane_g8

0x90aa,	// (0x00030a95) aid_popup_width_pane

0x9da8,	// (0x00031793) popup_midp_note_alarm_window_ParamLimits

0x9da8,	// (0x00031793) popup_midp_note_alarm_window

0xbf09,	// (0x000338f4) data_form_pane_ParamLimits

0x86a5,	// (0x00030090) form_field_data_pane_g1

0x86ad,	// (0x00030098) form_field_data_pane_t1_ParamLimits

0xbf15,	// (0x00033900) input_focus_pane_ParamLimits

0x86c5,	// (0x000300b0) data_form_wide_pane_ParamLimits

0x86d6,	// (0x000300c1) form_field_data_wide_pane_g1

0x86e2,	// (0x000300cd) form_field_data_wide_pane_t1_ParamLimits

0xbd29,	// (0x00033714) input_focus_pane_cp6_ParamLimits

0xedad,	// (0x00036798) input_popup_find_pane_g1_ParamLimits

0xedad,	// (0x00036798) input_popup_find_pane_g1

0x9626,	// (0x00031011) aid_navi_side_left_pane

0x9637,	// (0x00031022) aid_navi_side_right_pane

0xd50e,	// (0x00034ef9) bg_popup_window_pane_cp30_ParamLimits

0xd50e,	// (0x00034ef9) bg_popup_window_pane_cp30

0xd588,	// (0x00034f73) popup_midp_note_alarm_window_g1_ParamLimits

0xd588,	// (0x00034f73) popup_midp_note_alarm_window_g1

0xd5b8,	// (0x00034fa3) popup_midp_note_alarm_window_t1_ParamLimits

0xd5b8,	// (0x00034fa3) popup_midp_note_alarm_window_t1

0xd659,	// (0x00035044) popup_midp_note_alarm_window_t2_ParamLimits

0xd659,	// (0x00035044) popup_midp_note_alarm_window_t2

0xd707,	// (0x000350f2) popup_midp_note_alarm_window_t3_ParamLimits

0xd707,	// (0x000350f2) popup_midp_note_alarm_window_t3

0xd72f,	// (0x0003511a) popup_midp_note_alarm_window_t4_ParamLimits

0xd72f,	// (0x0003511a) popup_midp_note_alarm_window_t4

0xd74f,	// (0x0003513a) popup_midp_note_alarm_window_t5_ParamLimits

0xd74f,	// (0x0003513a) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0003728a) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0003728a) popup_midp_note_alarm_window_t

0xd7fb,	// (0x000351e6) wait_bar_pane_cp1_ParamLimits

0xd7fb,	// (0x000351e6) wait_bar_pane_cp1

0xb8f2,	// (0x000332dd) wait_anim_pane_copy1

0xb8f2,	// (0x000332dd) wait_border_pane_copy1

0xd221,	// (0x00034c0c) wait_border_pane_g1_copy1

0x86fc,	// (0x000300e7) form_field_popup_pane_g1

0x8704,	// (0x000300ef) form_field_popup_pane_t1_ParamLimits

0xbf15,	// (0x00033900) input_focus_pane_cp7_ParamLimits

0xbf43,	// (0x0003392e) list_form_pane_ParamLimits

0x871c,	// (0x00030107) form_field_popup_wide_pane_g1

0x8724,	// (0x0003010f) form_field_popup_wide_pane_t1_ParamLimits

0xbf15,	// (0x00033900) input_focus_pane_cp8_ParamLimits

0xbf4f,	// (0x0003393a) list_form_wide_pane_ParamLimits

0xdf40,	// (0x0003592b) aid_size_cell_graphic_pane

0x87ae,	// (0x00030199) data_form_pane_t1_ParamLimits

0x8a50,	// (0x0003043b) data_form_wide_pane_t1_ParamLimits

0xf128,	// (0x00036b13) bg_status_flat_pane

0xeb32,	// (0x0003651d) title_pane_t1_ParamLimits

0xb908,	// (0x000332f3) title_pane_t2_ParamLimits

0xb92e,	// (0x00033319) title_pane_t3_ParamLimits

0xf557,	// (0x00036f42) title_pane_t_ParamLimits

0xc3e0,	// (0x00033dcb) level_1_signal_ParamLimits

0xc3ed,	// (0x00033dd8) level_2_signal_ParamLimits

0xc3fa,	// (0x00033de5) level_3_signal_ParamLimits

0xc407,	// (0x00033df2) level_4_signal_ParamLimits

0xc414,	// (0x00033dff) level_5_signal_ParamLimits

0xc421,	// (0x00033e0c) level_6_signal_ParamLimits

0xc42e,	// (0x00033e19) level_7_signal_ParamLimits

0xc3e0,	// (0x00033dcb) level_1_battery_ParamLimits

0xc3ed,	// (0x00033dd8) level_2_battery_ParamLimits

0xc3fa,	// (0x00033de5) level_3_battery_ParamLimits

0xc407,	// (0x00033df2) level_4_battery_ParamLimits

0xc414,	// (0x00033dff) level_5_battery_ParamLimits

0xc421,	// (0x00033e0c) level_6_battery_ParamLimits

0xc42e,	// (0x00033e19) level_7_battery_ParamLimits

0xd410,	// (0x00034dfb) bg_status_flat_pane_g1

0xd418,	// (0x00034e03) bg_status_flat_pane_g2

0xd420,	// (0x00034e0b) bg_status_flat_pane_g3

0xd428,	// (0x00034e13) bg_status_flat_pane_g4

0xd430,	// (0x00034e1b) bg_status_flat_pane_g5

0xd438,	// (0x00034e23) bg_status_flat_pane_g6

0xd440,	// (0x00034e2b) bg_status_flat_pane_g7

0xeb9a,	// (0x00036585) tabs_3_active_pane_t1_ParamLimits

0xeb9a,	// (0x00036585) tabs_3_passive_pane_t1_ParamLimits

0xebac,	// (0x00036597) tabs_4_active_pane_t1_ParamLimits

0xebac,	// (0x00036597) tabs_4_1_passive_pane_t1_ParamLimits

0xedb9,	// (0x000367a4) tabs_2_active_pane_t1_ParamLimits

0xedb9,	// (0x000367a4) tabs_2_passive_pane_t1_ParamLimits

0xc07e,	// (0x00033a69) bg_active_tab_pane_cp4_ParamLimits

0xedcb,	// (0x000367b6) tabs_2_long_active_pane_t1_ParamLimits

0xedde,	// (0x000367c9) bg_passive_tab_pane_cp4_ParamLimits

0xa02f,	// (0x00031a1a) list_single_midp_graphic_pane_t1_ParamLimits

0xc07e,	// (0x00033a69) bg_active_tab_pane_cp5_ParamLimits

0xedea,	// (0x000367d5) tabs_3_long_active_pane_t1_ParamLimits

0xedde,	// (0x000367c9) bg_passive_tab_pane_cp5_ParamLimits

0xa02f,	// (0x00031a1a) list_single_midp_graphic_pane_t1

0xf128,	// (0x00036b13) bg_status_flat_pane_ParamLimits

0xcc07,	// (0x000345f2) indicator_pane_cp2_ParamLimits

0xcc07,	// (0x000345f2) indicator_pane_cp2

0xf26c,	// (0x00036c57) navi_pane_srt_ParamLimits

0xf26c,	// (0x00036c57) navi_pane_srt

0xcc2f,	// (0x0003461a) popup_clock_digital_analogue_window_cp1

0xb994,	// (0x0003337f) indicator_pane_t1

0xc99b,	// (0x00034386) copy_highlight_pane

0xc99b,	// (0x00034386) cursor_graphics_pane

0xc99b,	// (0x00034386) graphic_within_text_pane

0xc99b,	// (0x00034386) link_highlight_pane

0xdb83,	// (0x0003556e) popup_preview_text_window_t5_ParamLimits

0xdb83,	// (0x0003556e) popup_preview_text_window_t5

0xca16,	// (0x00034401) cursor_digital_pane

0xca16,	// (0x00034401) cursor_primary_pane

0xca27,	// (0x00034412) cursor_primary_small_pane

0xca2f,	// (0x0003441a) cursor_secondary_pane

0xca37,	// (0x00034422) cursor_title_pane

0xca16,	// (0x00034401) link_highlight_digital_pane

0xca1e,	// (0x00034409) link_highlight_primary_pane

0xca27,	// (0x00034412) link_highlight_primary_small_pane

0xca2f,	// (0x0003441a) link_highlight_secondary_pane

0xca37,	// (0x00034422) link_highlight_title_pane

0xca16,	// (0x00034401) copy_highlight_digital_pane

0xca16,	// (0x00034401) copy_highlight_primary_pane

0xca27,	// (0x00034412) copy_highlight_primary_small_pane

0xca2f,	// (0x0003441a) copy_highlight_secondary_pane

0xca37,	// (0x00034422) copy_highlight_title_pane

0xca2f,	// (0x0003441a) graphic_text_digital_pane

0xd490,	// (0x00034e7b) graphic_text_primary_pane

0xd499,	// (0x00034e84) graphic_text_primary_small_pane

0xca27,	// (0x00034412) graphic_text_secondary_pane

0xca16,	// (0x00034401) graphic_text_title_pane

0xefb4,	// (0x0003699f) cursor_primary_pane_g1

0xd482,	// (0x00034e6d) cursor_text_primary_t1

0xf467,	// (0x00036e52) cursor_primary_small_pane_g1

0xd474,	// (0x00034e5f) cursor_text_primary_small_t1

0xf45f,	// (0x00036e4a) cursor_primary_small_pane_g1_copy1

0xd466,	// (0x00034e51) cursor_text_primary_small_t1_copy1

0xd458,	// (0x00034e43) cursor_text_title_t1

0xf457,	// (0x00036e42) cursor_title_pane_g1

0xefb4,	// (0x0003699f) cursor_digital_pane_g1

0xca3f,	// (0x0003442a) cursor_text_digital_t1

0xca4d,	// (0x00034438) link_highlight_primary_pane_g1

0xd401,	// (0x00034dec) link_highlight_primary_pane_t1

0xca4d,	// (0x00034438) link_highlight_primary_small_pane_g1

0xca55,	// (0x00034440) link_highlight_primary_small_pane_t1

0xca64,	// (0x0003444f) link_highlight_secondary_pane_g1

0xca6c,	// (0x00034457) link_highlight_secondary_pane_t1

0xd366,	// (0x00034d51) link_highlight_title_pane_g1

0xd37d,	// (0x00034d68) link_highlight_title_pane_t1

0xd366,	// (0x00034d51) link_highlight_digital_pane_g1

0xd36e,	// (0x00034d59) link_highlight_digital_pane_t1

0xd23c,	// (0x00034c27) copy_highlight_primary_pane_g1

0xd262,	// (0x00034c4d) copy_highlight_primary_pane_t1

0xd23c,	// (0x00034c27) copy_highlight_primary_small_pane_g1

0xd253,	// (0x00034c3e) copy_highlight_primary_small_pane_t1

0xca7b,	// (0x00034466) copy_highlight_secondary_pane_g1

0xca83,	// (0x0003446e) copy_highlight_secondary_pane_t1

0xd23c,	// (0x00034c27) copy_highlight_title_pane_g1

0xd244,	// (0x00034c2f) copy_highlight_title_pane_t1

0xd23c,	// (0x00034c27) copy_highlight_digital_pane_g1

0xe0ce,	// (0x00035ab9) copy_highlight_digital_pane_t1

0xe022,	// (0x00035a0d) graphic_text_primary_pane_g1

0xe0b2,	// (0x00035a9d) graphic_text_primary_pane_t1

0xe0c0,	// (0x00035aab) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x000373b9) graphic_text_primary_pane_t

0xe08e,	// (0x00035a79) graphic_text_primary_small_pane_g1

0xe096,	// (0x00035a81) graphic_text_primary_small_pane_t1

0xe0a4,	// (0x00035a8f) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x000373b4) graphic_text_primary_small_pane_t

0xe06a,	// (0x00035a55) graphic_text_secondary_pane_g1

0xe072,	// (0x00035a5d) graphic_text_secondary_pane_t1

0xe080,	// (0x00035a6b) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x000373af) graphic_text_secondary_pane_t

0xe046,	// (0x00035a31) graphic_text_title_pane_g1

0xe04e,	// (0x00035a39) graphic_text_title_pane_t1

0xe05c,	// (0x00035a47) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x000373aa) graphic_text_title_pane_t

0xe022,	// (0x00035a0d) graphic_text_digital_pane_g1

0xe02a,	// (0x00035a15) graphic_text_digital_pane_t1

0xe038,	// (0x00035a23) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x000373a5) graphic_text_digital_pane_t

0xb940,	// (0x0003332b) navi_icon_pane_srt_ParamLimits

0xb940,	// (0x0003332b) navi_icon_pane_srt

0xb8f2,	// (0x000332dd) navi_midp_pane_srt

0xb8f2,	// (0x000332dd) navi_navi_pane_srt

0xb940,	// (0x0003332b) navi_text_pane_srt_ParamLimits

0xb940,	// (0x0003332b) navi_text_pane_srt

0xdfed,	// (0x000359d8) navi_navi_icon_text_pane_srt

0xdff5,	// (0x000359e0) navi_navi_pane_srt_g1_ParamLimits

0xdff5,	// (0x000359e0) navi_navi_pane_srt_g1

0xe007,	// (0x000359f2) navi_navi_pane_srt_g2_ParamLimits

0xe007,	// (0x000359f2) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x000373a0) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x000373a0) navi_navi_pane_srt_g

0xe019,	// (0x00035a04) navi_navi_tabs_pane_srt

0xdfed,	// (0x000359d8) navi_navi_text_pane_srt

0xdfed,	// (0x000359d8) navi_navi_volume_pane_srt

0xdfde,	// (0x000359c9) navi_navi_text_pane_srt_t1

0xa391,	// (0x00031d7c) navi_navi_volume_pane_srt_g1

0xa399,	// (0x00031d84) volume_small_pane_srt_ParamLimits

0xa399,	// (0x00031d84) volume_small_pane_srt

0x98e1,	// (0x000312cc) volume_small_pane_srt_g1_ParamLimits

0x98e1,	// (0x000312cc) volume_small_pane_srt_g1

0x98f1,	// (0x000312dc) volume_small_pane_srt_g2_ParamLimits

0x98f1,	// (0x000312dc) volume_small_pane_srt_g2

0x9902,	// (0x000312ed) volume_small_pane_srt_g3_ParamLimits

0x9902,	// (0x000312ed) volume_small_pane_srt_g3

0x9913,	// (0x000312fe) volume_small_pane_srt_g4_ParamLimits

0x9913,	// (0x000312fe) volume_small_pane_srt_g4

0x9924,	// (0x0003130f) volume_small_pane_srt_g5_ParamLimits

0x9924,	// (0x0003130f) volume_small_pane_srt_g5

0x9935,	// (0x00031320) volume_small_pane_srt_g6_ParamLimits

0x9935,	// (0x00031320) volume_small_pane_srt_g6

0x9946,	// (0x00031331) volume_small_pane_srt_g7_ParamLimits

0x9946,	// (0x00031331) volume_small_pane_srt_g7

0x9957,	// (0x00031342) volume_small_pane_srt_g8_ParamLimits

0x9957,	// (0x00031342) volume_small_pane_srt_g8

0x9968,	// (0x00031353) volume_small_pane_srt_g9_ParamLimits

0x9968,	// (0x00031353) volume_small_pane_srt_g9

0x9979,	// (0x00031364) volume_small_pane_srt_g10_ParamLimits

0x9979,	// (0x00031364) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00037148) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00037148) volume_small_pane_srt_g

0xbbe2,	// (0x000335cd) query_popup_data_pane_cp2

0xdfc4,	// (0x000359af) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xdfc4,	// (0x000359af) navi_navi_icon_text_pane_srt_t1

0xd490,	// (0x00034e7b) navi_tabs_2_long_pane_srt

0xd490,	// (0x00034e7b) navi_tabs_2_pane_srt

0xd490,	// (0x00034e7b) navi_tabs_3_long_pane_srt

0xd490,	// (0x00034e7b) navi_tabs_3_pane_srt

0xd490,	// (0x00034e7b) navi_tabs_4_pane_srt

0xa371,	// (0x00031d5c) tabs_2_active_pane_srt_ParamLimits

0xa371,	// (0x00031d5c) tabs_2_active_pane_srt

0xa381,	// (0x00031d6c) tabs_2_passive_pane_srt_ParamLimits

0xa381,	// (0x00031d6c) tabs_2_passive_pane_srt

0xcb4e,	// (0x00034539) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcb4e,	// (0x00034539) bg_passive_tab_pane_cp1_srt

0xdfa2,	// (0x0003598d) bg_passive_tab_pane_g1_cp1_srt

0xc611,	// (0x00033ffc) bg_passive_tab_pane_g2_cp1_srt

0xdfab,	// (0x00035996) bg_passive_tab_pane_g3_cp1_srt

0xb940,	// (0x0003332b) bg_active_tab_pane_cp1_srt_ParamLimits

0xb940,	// (0x0003332b) bg_active_tab_pane_cp1_srt

0xdfb4,	// (0x0003599f) tabs_2_active_pane_srt_g1

0x0396,	// (0x00027d81) tabs_2_active_pane_srt_t1_ParamLimits

0x0396,	// (0x00027d81) tabs_2_active_pane_srt_t1

0xdfa2,	// (0x0003598d) bg_active_tab_pane_g1_cp1_srt

0xc611,	// (0x00033ffc) bg_active_tab_pane_g2_cp1_srt

0xdfab,	// (0x00035996) bg_active_tab_pane_g3_cp1_srt

0xa33e,	// (0x00031d29) tabs_3_active_pane_srt_ParamLimits

0xa33e,	// (0x00031d29) tabs_3_active_pane_srt

0xa34f,	// (0x00031d3a) tabs_3_passive_pane_cp_srt_ParamLimits

0xa34f,	// (0x00031d3a) tabs_3_passive_pane_cp_srt

0xa360,	// (0x00031d4b) tabs_3_passive_pane_srt_ParamLimits

0xa360,	// (0x00031d4b) tabs_3_passive_pane_srt

0xcb4e,	// (0x00034539) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcb4e,	// (0x00034539) bg_passive_tab_pane_cp2_srt

0xca92,	// (0x0003447d) bg_passive_tab_pane_g1_cp2_srt

0xc611,	// (0x00033ffc) bg_passive_tab_pane_g2_cp2_srt

0xca9b,	// (0x00034486) bg_passive_tab_pane_g3_cp2_srt

0xb940,	// (0x0003332b) bg_active_tab_pane_cp2_srt_ParamLimits

0xb940,	// (0x0003332b) bg_active_tab_pane_cp2_srt

0xdf9a,	// (0x00035985) tabs_3_active_pane_srt_g1

0x0351,	// (0x00027d3c) tabs_3_active_pane_srt_t1_ParamLimits

0x0351,	// (0x00027d3c) tabs_3_active_pane_srt_t1

0xca92,	// (0x0003447d) bg_active_tab_pane_g1_cp2_srt

0xc611,	// (0x00033ffc) bg_active_tab_pane_g2_cp2_srt

0xca9b,	// (0x00034486) bg_active_tab_pane_g3_cp2_srt

0xa2f6,	// (0x00031ce1) tabs_4_active_pane_srt_ParamLimits

0xa2f6,	// (0x00031ce1) tabs_4_active_pane_srt

0xa308,	// (0x00031cf3) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa308,	// (0x00031cf3) tabs_4_passive_pane_cp2_srt

0x9ae5,	// (0x000314d0) aid_size_cell_toolbar

0xedde,	// (0x000367c9) main_idle_act_pane_ParamLimits

0x9c4e,	// (0x00031639) popup_large_graphic_colour_window_ParamLimits

0x9f13,	// (0x000318fe) popup_toolbar_window_ParamLimits

0x9f13,	// (0x000318fe) popup_toolbar_window

0xdebf,	// (0x000358aa) list_single_graphic_2heading_pane_ParamLimits

0xdebf,	// (0x000358aa) list_single_graphic_2heading_pane

0xc22a,	// (0x00033c15) aid_size_cell_apps_grid_lsc_pane

0xc23c,	// (0x00033c27) aid_size_cell_apps_grid_prt_pane

0xcb4e,	// (0x00034539) bg_wml_button_pane_cp1_ParamLimits

0xcb4e,	// (0x00034539) bg_wml_button_pane_cp1

0xf403,	// (0x00036dee) form_midp_field_text_pane_t1_ParamLimits

0xcdbe,	// (0x000347a9) input_focus_pane_cp050_ParamLimits

0xcf22,	// (0x0003490d) list_midp_form_text_pane_ParamLimits

0xceff,	// (0x000348ea) input_focus_pane_cp051_ParamLimits

0xcf13,	// (0x000348fe) list_midp_choice_pane_ParamLimits

0xd4e4,	// (0x00034ecf) list_single_2graphic_pane_cp3_ParamLimits

0xd4e4,	// (0x00034ecf) list_single_2graphic_pane_cp3

0xf3b6,	// (0x00036da1) list_single_midp_graphic_pane_ParamLimits

0xf3b6,	// (0x00036da1) list_single_midp_graphic_pane

0x88ef,	// (0x000302da) list_single_graphic_2heading_pane_g1_ParamLimits

0x88ef,	// (0x000302da) list_single_graphic_2heading_pane_g1

0x88fb,	// (0x000302e6) list_single_graphic_2heading_pane_g4_ParamLimits

0x88fb,	// (0x000302e6) list_single_graphic_2heading_pane_g4

0x8907,	// (0x000302f2) list_single_graphic_2heading_pane_g5_ParamLimits

0x8907,	// (0x000302f2) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003719b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003719b) list_single_graphic_2heading_pane_g

0x8913,	// (0x000302fe) list_single_graphic_2heading_pane_t1_ParamLimits

0x8913,	// (0x000302fe) list_single_graphic_2heading_pane_t1

0x8927,	// (0x00030312) list_single_graphic_2heading_pane_t2_ParamLimits

0x8927,	// (0x00030312) list_single_graphic_2heading_pane_t2

0x8941,	// (0x0003032c) list_single_graphic_2heading_pane_t3_ParamLimits

0x8941,	// (0x0003032c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x000371a2) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x000371a2) list_single_graphic_2heading_pane_t

0xcc72,	// (0x0003465d) bg_popup_sub_pane_cp2

0xcc9c,	// (0x00034687) grid_toobar_pane

0x9fb0,	// (0x0003199b) cell_toolbar_pane_ParamLimits

0x9fb0,	// (0x0003199b) cell_toolbar_pane

0xccd6,	// (0x000346c1) cell_toolbar_pane_g1_ParamLimits

0xccd6,	// (0x000346c1) cell_toolbar_pane_g1

0xccea,	// (0x000346d5) cell_toolbar_pane_g2_ParamLimits

0xccea,	// (0x000346d5) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x000371b0) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x000371b0) cell_toolbar_pane_g

0xcd0c,	// (0x000346f7) grid_highlight_pane_cp2_ParamLimits

0xcd0c,	// (0x000346f7) grid_highlight_pane_cp2

0xcd26,	// (0x00034711) toolbar_button_pane

0xcd32,	// (0x0003471d) toolbar_button_pane_g1

0xcd3a,	// (0x00034725) toolbar_button_pane_g2

0xcd42,	// (0x0003472d) toolbar_button_pane_g3

0xcd4a,	// (0x00034735) toolbar_button_pane_g4

0xcd52,	// (0x0003473d) toolbar_button_pane_g5

0xcd5a,	// (0x00034745) toolbar_button_pane_g6

0xcd62,	// (0x0003474d) toolbar_button_pane_g7

0xcd6a,	// (0x00034755) toolbar_button_pane_g8

0xcd72,	// (0x0003475d) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x000371b5) toolbar_button_pane_g

0x9fee,	// (0x000319d9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9fee,	// (0x000319d9) list_single_2graphic_pane_g1_cp3

0x9ffa,	// (0x000319e5) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9ffa,	// (0x000319e5) list_single_2graphic_pane_g2_cp3

0xc7d9,	// (0x000341c4) list_single_2graphic_pane_g3_cp3

0xa009,	// (0x000319f4) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa009,	// (0x000319f4) list_single_2graphic_pane_g4_cp3

0xa015,	// (0x00031a00) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa015,	// (0x00031a00) list_single_2graphic_pane_t1_cp3

0xc7cd,	// (0x000341b8) list_single_midp_graphic_pane_g2_ParamLimits

0xc7cd,	// (0x000341b8) list_single_midp_graphic_pane_g2

0x88c3,	// (0x000302ae) aid_zoom_text_primary

0x9aed,	// (0x000314d8) aid_zoom_text_secondary

0xf008,	// (0x000369f3) status_small_pane_g7_ParamLimits

0xf008,	// (0x000369f3) status_small_pane_g7

0xf02b,	// (0x00036a16) status_small_pane_t1_ParamLimits

0xeb15,	// (0x00036500) title_pane_g2

0x0003,

0xf54e,	// (0x00036f39) title_pane_g

0xecc8,	// (0x000366b3) aid_size_cell_colour_1_pane_ParamLimits

0xecc8,	// (0x000366b3) aid_size_cell_colour_1_pane

0xecdc,	// (0x000366c7) aid_size_cell_colour_2_pane_ParamLimits

0xecdc,	// (0x000366c7) aid_size_cell_colour_2_pane

0xecf0,	// (0x000366db) aid_size_cell_colour_3_pane_ParamLimits

0xecf0,	// (0x000366db) aid_size_cell_colour_3_pane

0xed04,	// (0x000366ef) aid_size_cell_colour_4_pane_ParamLimits

0xed04,	// (0x000366ef) aid_size_cell_colour_4_pane

0x9562,	// (0x00030f4d) title_pane_stacon_g1_ParamLimits

0x9562,	// (0x00030f4d) title_pane_stacon_g1

0xd2b9,	// (0x00034ca4) popup_note_wait_window_g3_ParamLimits

0xd2b9,	// (0x00034ca4) popup_note_wait_window_g3

0xd32f,	// (0x00034d1a) popup_note_wait_window_t5_ParamLimits

0xd32f,	// (0x00034d1a) popup_note_wait_window_t5

0xb8f2,	// (0x000332dd) main_feb_china_hwr_fs_writing_pane

0x9b5b,	// (0x00031546) popup_feb_china_hwr_fs_window_ParamLimits

0x9b5b,	// (0x00031546) popup_feb_china_hwr_fs_window

0xa045,	// (0x00031a30) aid_size_cell_hwr_fs_ParamLimits

0xa045,	// (0x00031a30) aid_size_cell_hwr_fs

0xcdbe,	// (0x000347a9) bg_popup_sub_pane_cp3_ParamLimits

0xcdbe,	// (0x000347a9) bg_popup_sub_pane_cp3

0xa05a,	// (0x00031a45) grid_hwr_fs_pane_ParamLimits

0xa05a,	// (0x00031a45) grid_hwr_fs_pane

0xa06e,	// (0x00031a59) linegrid_hwr_fs_pane_ParamLimits

0xa06e,	// (0x00031a59) linegrid_hwr_fs_pane

0xa07e,	// (0x00031a69) cell_hwr_fs_pane_ParamLimits

0xa07e,	// (0x00031a69) cell_hwr_fs_pane

0xcdca,	// (0x000347b5) linegrid_hwr_fs_pane_g1_ParamLimits

0xcdca,	// (0x000347b5) linegrid_hwr_fs_pane_g1

0xf38a,	// (0x00036d75) linegrid_hwr_fs_pane_g2_ParamLimits

0xf38a,	// (0x00036d75) linegrid_hwr_fs_pane_g2

0xcdd6,	// (0x000347c1) linegrid_hwr_fs_pane_g3_ParamLimits

0xcdd6,	// (0x000347c1) linegrid_hwr_fs_pane_g3

0xa09c,	// (0x00031a87) linegrid_hwr_fs_pane_g4_ParamLimits

0xa09c,	// (0x00031a87) linegrid_hwr_fs_pane_g4

0xa0b6,	// (0x00031aa1) linegrid_hwr_fs_pane_g5_ParamLimits

0xa0b6,	// (0x00031aa1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x000371e0) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x000371e0) linegrid_hwr_fs_pane_g

0xcde2,	// (0x000347cd) cell_hwr_fs_pane_g1_ParamLimits

0xcde2,	// (0x000347cd) cell_hwr_fs_pane_g1

0xcc40,	// (0x0003462b) cell_hwr_fs_pane_g2_ParamLimits

0xcc40,	// (0x0003462b) cell_hwr_fs_pane_g2

0xf39c,	// (0x00036d87) cell_hwr_fs_pane_g3_ParamLimits

0xf39c,	// (0x00036d87) cell_hwr_fs_pane_g3

0xf3a9,	// (0x00036d94) cell_hwr_fs_pane_g4_ParamLimits

0xf3a9,	// (0x00036d94) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x000371eb) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x000371eb) cell_hwr_fs_pane_g

0xa0cc,	// (0x00031ab7) cell_hwr_fs_pane_t1

0xb8f2,	// (0x000332dd) grid_highlight_pane_cp6

0xb8f2,	// (0x000332dd) main_idle_act2_pane

0xc025,	// (0x00033a10) aid_inside_area_popup_secondary

0xf46f,	// (0x00036e5a) aid_inside_area_window_primary_ParamLimits

0xf46f,	// (0x00036e5a) aid_inside_area_window_primary

0xe0dd,	// (0x00035ac8) ai2_news_ticker_pane

0xe0e5,	// (0x00035ad0) aid_size_cell_ai1_link_ParamLimits

0xe0e5,	// (0x00035ad0) aid_size_cell_ai1_link

0x03e5,	// (0x00027dd0) popup_ai2_data_window_ParamLimits

0x03e5,	// (0x00027dd0) popup_ai2_data_window

0xe0ff,	// (0x00035aea) popup_ai2_link_window_ParamLimits

0xe0ff,	// (0x00035aea) popup_ai2_link_window

0xcdbe,	// (0x000347a9) bg_popup_sub_pane_cp4_ParamLimits

0xcdbe,	// (0x000347a9) bg_popup_sub_pane_cp4

0xe113,	// (0x00035afe) grid_ai2_link_pane_ParamLimits

0xe113,	// (0x00035afe) grid_ai2_link_pane

0xe12a,	// (0x00035b15) popup_ai2_link_window_g1_ParamLimits

0xe12a,	// (0x00035b15) popup_ai2_link_window_g1

0xe136,	// (0x00035b21) popup_ai2_link_window_g2_ParamLimits

0xe136,	// (0x00035b21) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x000373be) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x000373be) popup_ai2_link_window_g

0xe145,	// (0x00035b30) ai2_mp_button_pane

0xe14d,	// (0x00035b38) ai2_mp_volume_pane

0xceff,	// (0x000348ea) bg_popup_sub_pane_cp5_ParamLimits

0xceff,	// (0x000348ea) bg_popup_sub_pane_cp5

0xe155,	// (0x00035b40) heading_ai2_gene_pane_ParamLimits

0xe155,	// (0x00035b40) heading_ai2_gene_pane

0xe161,	// (0x00035b4c) list_ai2_gene_pane_ParamLimits

0xe161,	// (0x00035b4c) list_ai2_gene_pane

0xe1a9,	// (0x00035b94) cell_ai2_link_pane_ParamLimits

0xe1a9,	// (0x00035b94) cell_ai2_link_pane

0xe1bf,	// (0x00035baa) cell_ai2_link_pane_g1

0xb8f2,	// (0x000332dd) grid_highlight_pane_cp7

0xa3ae,	// (0x00031d99) ai2_mp_volume_pane_g1

0xe25c,	// (0x00035c47) ai2_mp_volume_pane_g2

0x040f,	// (0x00027dfa) list_ai2_gene_pane_t1

0xe264,	// (0x00035c4f) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x000373d7) ai2_mp_volume_pane_g

0xa3b6,	// (0x00031da1) volume_small_pane_cp3

0xe26c,	// (0x00035c57) aid_size_cell_ai2_button

0xe274,	// (0x00035c5f) grid_ai2_button_pane

0xe27d,	// (0x00035c68) cell_ai2_button_pane_ParamLimits

0xe27d,	// (0x00035c68) cell_ai2_button_pane

0xb8e8,	// (0x000332d3) cell_ai2_button_pane_g1

0xb8f2,	// (0x000332dd) grid_highlight_pane_cp8

0xe21c,	// (0x00035c07) ai2_gene_pane_t1_ParamLimits

0xe21c,	// (0x00035c07) ai2_gene_pane_t1

0x9adb,	// (0x000314c6) aid_height_parent_landscape

0x00b6,	// (0x00027aa1) aid_height_set_list

0xde5a,	// (0x00035845) aid_size_parent

0xdf40,	// (0x0003592b) aid_size_cell_graphic_pane_ParamLimits

0xe171,	// (0x00035b5c) popup_ai2_data_window_g1_ParamLimits

0xe171,	// (0x00035b5c) popup_ai2_data_window_g1

0xe17d,	// (0x00035b68) ai2_news_ticker_pane_g1

0xe185,	// (0x00035b70) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x000373c3) ai2_news_ticker_pane_g

0xe18d,	// (0x00035b78) ai2_news_ticker_pane_t1

0xe19b,	// (0x00035b86) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x000373c8) ai2_news_ticker_pane_t

0xe1c8,	// (0x00035bb3) heading_ai2_gene_pane_g1

0xe1d0,	// (0x00035bbb) heading_ai2_gene_pane_t1_ParamLimits

0xe1d0,	// (0x00035bbb) heading_ai2_gene_pane_t1

0xe1e5,	// (0x00035bd0) list_highlight_pane_cp6

0x03f9,	// (0x00027de4) ai2_gene_pane_ParamLimits

0x03f9,	// (0x00027de4) ai2_gene_pane

0x041d,	// (0x00027e08) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x000373cd) list_ai2_gene_pane_t

0xe1ed,	// (0x00035bd8) list_highlight_pane_cp8_ParamLimits

0xe1ed,	// (0x00035bd8) list_highlight_pane_cp8

0xe1fe,	// (0x00035be9) ai2_gene_pane_g1_ParamLimits

0xe1fe,	// (0x00035be9) ai2_gene_pane_g1

0xe210,	// (0x00035bfb) ai2_gene_pane_g2_ParamLimits

0xe210,	// (0x00035bfb) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x000373d2) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x000373d2) ai2_gene_pane_g

0xbea8,	// (0x00033893) scroll_pane_cp12

0x9a98,	// (0x00031483) control_pane_t3_ParamLimits

0x9a98,	// (0x00031483) control_pane_t3

0xf01c,	// (0x00036a07) status_small_pane_g8_ParamLimits

0xf01c,	// (0x00036a07) status_small_pane_g8

0x9c1b,	// (0x00031606) popup_find_window_ParamLimits

0x9dba,	// (0x000317a5) popup_note_image_window_ParamLimits

0x8959,	// (0x00030344) list_double2_graphic_pane_vc_g1_ParamLimits

0x8959,	// (0x00030344) list_double2_graphic_pane_vc_g1

0xc8d4,	// (0x000342bf) list_double2_graphic_pane_vc_g2_ParamLimits

0xc8d4,	// (0x000342bf) list_double2_graphic_pane_vc_g2

0x9fda,	// (0x000319c5) list_double2_graphic_pane_vc_g3_ParamLimits

0x9fda,	// (0x000319c5) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x000371a9) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x000371a9) list_double2_graphic_pane_vc_g

0x8965,	// (0x00030350) list_double2_graphic_pane_vc_t1_ParamLimits

0x8965,	// (0x00030350) list_double2_graphic_pane_vc_t1

0xc8d4,	// (0x000342bf) list_single_heading_pane_vc_g1_ParamLimits

0xc8d4,	// (0x000342bf) list_single_heading_pane_vc_g1

0x9fda,	// (0x000319c5) list_single_heading_pane_vc_g2_ParamLimits

0x9fda,	// (0x000319c5) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x000371ca) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x000371ca) list_single_heading_pane_vc_g

0x897b,	// (0x00030366) list_single_heading_pane_vc_t1_ParamLimits

0x897b,	// (0x00030366) list_single_heading_pane_vc_t1

0x8991,	// (0x0003037c) list_single_heading_pane_vc_t2_ParamLimits

0x8991,	// (0x0003037c) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x000371cf) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x000371cf) list_single_heading_pane_vc_t

0xcd7a,	// (0x00034765) list_setting_number_pane_vc_g1_ParamLimits

0xcd7a,	// (0x00034765) list_setting_number_pane_vc_g1

0xcd86,	// (0x00034771) list_setting_number_pane_vc_g2_ParamLimits

0xcd86,	// (0x00034771) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x000371d4) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x000371d4) list_setting_number_pane_vc_g

0x89a3,	// (0x0003038e) list_setting_number_pane_vc_t1_ParamLimits

0x89a3,	// (0x0003038e) list_setting_number_pane_vc_t1

0x89b7,	// (0x000303a2) list_setting_number_pane_vc_t2_ParamLimits

0x89b7,	// (0x000303a2) list_setting_number_pane_vc_t2

0x89cf,	// (0x000303ba) list_setting_number_pane_vc_t3_ParamLimits

0x89cf,	// (0x000303ba) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x000371d9) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x000371d9) list_setting_number_pane_vc_t

0x89f5,	// (0x000303e0) set_value_pane_vc_ParamLimits

0x89f5,	// (0x000303e0) set_value_pane_vc

0xdebf,	// (0x000358aa) list_double2_graphic_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_double2_graphic_pane_vc

0x8aa1,	// (0x0003048c) list_double2_large_graphic_pane_vc_ParamLimits

0x8aa1,	// (0x0003048c) list_double2_large_graphic_pane_vc

0xdebf,	// (0x000358aa) list_double2_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_double2_pane_vc

0xdebf,	// (0x000358aa) list_double_graphic_heading_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_double_graphic_heading_pane_vc

0xdebf,	// (0x000358aa) list_double_graphic_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_double_graphic_pane_vc

0xdebf,	// (0x000358aa) list_double_heading_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_double_heading_pane_vc

0x8ab1,	// (0x0003049c) list_double_large_graphic_pane_vc_ParamLimits

0x8ab1,	// (0x0003049c) list_double_large_graphic_pane_vc

0xdebf,	// (0x000358aa) list_double_number_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_double_number_pane_vc

0xdebf,	// (0x000358aa) list_double_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_double_pane_vc

0xdebf,	// (0x000358aa) list_double_time_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_double_time_pane_vc

0xdebf,	// (0x000358aa) list_setting_number_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_setting_number_pane_vc

0xdebf,	// (0x000358aa) list_setting_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_setting_pane_vc

0xdebf,	// (0x000358aa) list_single_graphic_heading_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_single_graphic_heading_pane_vc

0xdebf,	// (0x000358aa) list_single_heading_pane_vc_ParamLimits

0xdebf,	// (0x000358aa) list_single_heading_pane_vc

0x8ac1,	// (0x000304ac) list_single_number_heading_pane_vc_ParamLimits

0x8ac1,	// (0x000304ac) list_single_number_heading_pane_vc

0x8959,	// (0x00030344) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8959,	// (0x00030344) list_double_graphic_heading_pane_vc_g1

0xc8d4,	// (0x000342bf) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc8d4,	// (0x000342bf) list_double_graphic_heading_pane_vc_g2

0x9fda,	// (0x000319c5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9fda,	// (0x000319c5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x000371a9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x000371a9) list_double_graphic_heading_pane_vc_g

0x8ae4,	// (0x000304cf) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x8ae4,	// (0x000304cf) list_double_graphic_heading_pane_vc_t1

0x8afa,	// (0x000304e5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x8afa,	// (0x000304e5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x000373de) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x000373de) list_double_graphic_heading_pane_vc_t

0xcd7a,	// (0x00034765) list_setting_pane_vc_g1_ParamLimits

0xcd7a,	// (0x00034765) list_setting_pane_vc_g1

0xcd86,	// (0x00034771) list_setting_pane_vc_g2_ParamLimits

0xcd86,	// (0x00034771) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x000371d4) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x000371d4) list_setting_pane_vc_g

0x8b12,	// (0x000304fd) list_setting_pane_vc_t1_ParamLimits

0x8b12,	// (0x000304fd) list_setting_pane_vc_t1

0x8b2a,	// (0x00030515) list_setting_pane_vc_t2_ParamLimits

0x8b2a,	// (0x00030515) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x00037421) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x00037421) list_setting_pane_vc_t

0x89f5,	// (0x000303e0) set_value_pane_cp_vc_ParamLimits

0x89f5,	// (0x000303e0) set_value_pane_cp_vc

0xc8d4,	// (0x000342bf) list_single_number_heading_pane_vc_g1_ParamLimits

0xc8d4,	// (0x000342bf) list_single_number_heading_pane_vc_g1

0x9fda,	// (0x000319c5) list_single_number_heading_pane_vc_g2_ParamLimits

0x9fda,	// (0x000319c5) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x000371ca) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x000371ca) list_single_number_heading_pane_vc_g

0x8b40,	// (0x0003052b) list_single_number_heading_pane_vc_t1_ParamLimits

0x8b40,	// (0x0003052b) list_single_number_heading_pane_vc_t1

0x8b56,	// (0x00030541) list_single_number_heading_pane_vc_t2_ParamLimits

0x8b56,	// (0x00030541) list_single_number_heading_pane_vc_t2

0x8b68,	// (0x00030553) list_single_number_heading_pane_vc_t3_ParamLimits

0x8b68,	// (0x00030553) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x00037426) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x00037426) list_single_number_heading_pane_vc_t

0x8959,	// (0x00030344) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8959,	// (0x00030344) list_single_graphic_heading_pane_vc_g1

0xc8d4,	// (0x000342bf) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc8d4,	// (0x000342bf) list_single_graphic_heading_pane_vc_g4

0x9fda,	// (0x000319c5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9fda,	// (0x000319c5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x000371a9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x000371a9) list_single_graphic_heading_pane_vc_g

0x897b,	// (0x00030366) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x897b,	// (0x00030366) list_single_graphic_heading_pane_vc_t1

0x8b7a,	// (0x00030565) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x8b7a,	// (0x00030565) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0003742d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0003742d) list_single_graphic_heading_pane_vc_t

0xc8d4,	// (0x000342bf) list_double2_pane_vc_g1_ParamLimits

0xc8d4,	// (0x000342bf) list_double2_pane_vc_g1

0x9fda,	// (0x000319c5) list_double2_pane_vc_g2_ParamLimits

0x9fda,	// (0x000319c5) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x000371ca) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x000371ca) list_double2_pane_vc_g

0x8b8c,	// (0x00030577) list_double2_pane_vc_t1_ParamLimits

0x8b8c,	// (0x00030577) list_double2_pane_vc_t1

0x8ba2,	// (0x0003058d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x8ba2,	// (0x0003058d) list_double2_large_graphic_pane_vc_g1

0x8bae,	// (0x00030599) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8bae,	// (0x00030599) list_double2_large_graphic_pane_vc_g2

0x8bba,	// (0x000305a5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8bba,	// (0x000305a5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x00037432) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x00037432) list_double2_large_graphic_pane_vc_g

0x8bc6,	// (0x000305b1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x8bc6,	// (0x000305b1) list_double2_large_graphic_pane_vc_t1

0xa410,	// (0x00031dfb) list_double_time_pane_vc_g1_ParamLimits

0xa410,	// (0x00031dfb) list_double_time_pane_vc_g1

0xa41c,	// (0x00031e07) list_double_time_pane_vc_g2_ParamLimits

0xa41c,	// (0x00031e07) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x00037439) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x00037439) list_double_time_pane_vc_g

0x8bdc,	// (0x000305c7) list_double_time_pane_vc_t1_ParamLimits

0x8bdc,	// (0x000305c7) list_double_time_pane_vc_t1

0x8bfa,	// (0x000305e5) list_double_time_pane_vc_t2_ParamLimits

0x8bfa,	// (0x000305e5) list_double_time_pane_vc_t2

0x8c38,	// (0x00030623) list_double_time_pane_vc_t3_ParamLimits

0x8c38,	// (0x00030623) list_double_time_pane_vc_t3

0x8c4a,	// (0x00030635) list_double_time_pane_vc_t4_ParamLimits

0x8c4a,	// (0x00030635) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0003743e) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0003743e) list_double_time_pane_vc_t

0xc8d4,	// (0x000342bf) list_double_pane_vc_g1_ParamLimits

0xc8d4,	// (0x000342bf) list_double_pane_vc_g1

0x9fda,	// (0x000319c5) list_double_pane_vc_g2_ParamLimits

0x9fda,	// (0x000319c5) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x000371ca) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x000371ca) list_double_pane_vc_g

0x8c5c,	// (0x00030647) list_double_pane_vc_t1_ParamLimits

0x8c5c,	// (0x00030647) list_double_pane_vc_t1

0x8c6e,	// (0x00030659) list_double_pane_vc_t2_ParamLimits

0x8c6e,	// (0x00030659) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x00037447) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x00037447) list_double_pane_vc_t

0xc8d4,	// (0x000342bf) list_double_number_pane_vc_g1_ParamLimits

0xc8d4,	// (0x000342bf) list_double_number_pane_vc_g1

0x9fda,	// (0x000319c5) list_double_number_pane_vc_g2_ParamLimits

0x9fda,	// (0x000319c5) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x000371ca) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x000371ca) list_double_number_pane_vc_g

0x8c84,	// (0x0003066f) list_double_number_pane_vc_t1_ParamLimits

0x8c84,	// (0x0003066f) list_double_number_pane_vc_t1

0x8c96,	// (0x00030681) list_double_number_pane_vc_t2_ParamLimits

0x8c96,	// (0x00030681) list_double_number_pane_vc_t2

0x8c6e,	// (0x00030659) list_double_number_pane_vc_t3_ParamLimits

0x8c6e,	// (0x00030659) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0003744c) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0003744c) list_double_number_pane_vc_t

0x8ca8,	// (0x00030693) list_double_large_graphic_pane_vc_g1_ParamLimits

0x8ca8,	// (0x00030693) list_double_large_graphic_pane_vc_g1

0x8cca,	// (0x000306b5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x8cca,	// (0x000306b5) list_double_large_graphic_pane_vc_g2

0x8cdb,	// (0x000306c6) list_double_large_graphic_pane_vc_g3_ParamLimits

0x8cdb,	// (0x000306c6) list_double_large_graphic_pane_vc_g3

0x8ce7,	// (0x000306d2) list_double_large_graphic_pane_vc_g4_ParamLimits

0x8ce7,	// (0x000306d2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x00037453) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00037453) list_double_large_graphic_pane_vc_g

0x8cf6,	// (0x000306e1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x8cf6,	// (0x000306e1) list_double_large_graphic_pane_vc_t1

0x8d08,	// (0x000306f3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x8d08,	// (0x000306f3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0003745c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0003745c) list_double_large_graphic_pane_vc_t

0xc8d4,	// (0x000342bf) list_double_heading_pane_vc_g1_ParamLimits

0xc8d4,	// (0x000342bf) list_double_heading_pane_vc_g1

0x9fda,	// (0x000319c5) list_double_heading_pane_vc_g2_ParamLimits

0x9fda,	// (0x000319c5) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x000371ca) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x000371ca) list_double_heading_pane_vc_g

0x8d22,	// (0x0003070d) list_double_heading_pane_vc_t1_ParamLimits

0x8d22,	// (0x0003070d) list_double_heading_pane_vc_t1

0x8d34,	// (0x0003071f) list_double_heading_pane_vc_t2_ParamLimits

0x8d34,	// (0x0003071f) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x00037461) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x00037461) list_double_heading_pane_vc_t

0x8d4a,	// (0x00030735) list_double_graphic_pane_vc_g1_ParamLimits

0x8d4a,	// (0x00030735) list_double_graphic_pane_vc_g1

0xa428,	// (0x00031e13) list_double_graphic_pane_vc_g2_ParamLimits

0xa428,	// (0x00031e13) list_double_graphic_pane_vc_g2

0xc8d4,	// (0x000342bf) list_double_graphic_pane_vc_g3_ParamLimits

0xc8d4,	// (0x000342bf) list_double_graphic_pane_vc_g3

0x0003,

0xfa7b,	// (0x00037466) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x00037466) list_double_graphic_pane_vc_g

0x8d56,	// (0x00030741) list_double_graphic_pane_vc_t1_ParamLimits

0x8d56,	// (0x00030741) list_double_graphic_pane_vc_t1

0x8d74,	// (0x0003075f) list_double_graphic_pane_vc_t2_ParamLimits

0x8d74,	// (0x0003075f) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x0003746f) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x0003746f) list_double_graphic_pane_vc_t

0x90b2,	// (0x00030a9d) aid_size_cell_fastswap

0x90ba,	// (0x00030aa5) aid_size_cell_touch_ParamLimits

0x90ba,	// (0x00030aa5) aid_size_cell_touch

0x930b,	// (0x00030cf6) popup_fast_swap_wide_window_ParamLimits

0x930b,	// (0x00030cf6) popup_fast_swap_wide_window

0x93d1,	// (0x00030dbc) touch_pane_ParamLimits

0x93d1,	// (0x00030dbc) touch_pane

0xbf01,	// (0x000338ec) button_value_adjust_pane_cp2

0x8609,	// (0x0002fff4) button_value_adjust_pane_cp4

0x8629,	// (0x00030014) form_field_data_pane_cp2

0x8648,	// (0x00030033) form_field_data_wide_pane_cp2

0xc261,	// (0x00033c4c) bg_scroll_pane_ParamLimits

0x96bd,	// (0x000310a8) scroll_handle_pane_ParamLimits

0x96d1,	// (0x000310bc) scroll_sc2_down_pane_ParamLimits

0x96d1,	// (0x000310bc) scroll_sc2_down_pane

0xc292,	// (0x00033c7d) scroll_sc2_up_pane_ParamLimits

0xc292,	// (0x00033c7d) scroll_sc2_up_pane

0x05a1,	// (0x00027f8c) grid_wheel_folder_pane_g1_ParamLimits

0x05a1,	// (0x00027f8c) grid_wheel_folder_pane_g1

0x9885,	// (0x00031270) clock_nsta_pane_cp2_ParamLimits

0x9885,	// (0x00031270) clock_nsta_pane_cp2

0xef0d,	// (0x000368f8) listscroll_midp_pane_ParamLimits

0xef19,	// (0x00036904) midp_canvas_pane

0xcb0c,	// (0x000344f7) nsta_clock_indic_pane

0xcb34,	// (0x0003451f) listscroll_form_pane_vc

0xcb3c,	// (0x00034527) listscroll_set_pane_vc_ParamLimits

0xcb3c,	// (0x00034527) listscroll_set_pane_vc

0xf144,	// (0x00036b2f) clock_nsta_pane

0xf151,	// (0x00036b3c) indicator_nsta_pane

0xcc72,	// (0x0003465d) bg_popup_sub_pane_cp2_ParamLimits

0xcc86,	// (0x00034671) find_pane_cp2_ParamLimits

0xcc86,	// (0x00034671) find_pane_cp2

0xcc9c,	// (0x00034687) grid_toobar_pane_ParamLimits

0xcd92,	// (0x0003477d) list_form_gen_pane_vc_ParamLimits

0xcd92,	// (0x0003477d) list_form_gen_pane_vc

0xcda8,	// (0x00034793) scroll_pane_cp8_vc_ParamLimits

0xcda8,	// (0x00034793) scroll_pane_cp8_vc

0xcdf8,	// (0x000347e3) data_form_wide_pane_vc_ParamLimits

0xcdf8,	// (0x000347e3) data_form_wide_pane_vc

0xce04,	// (0x000347ef) form_field_data_wide_pane_vc_g1

0xce0c,	// (0x000347f7) form_field_data_wide_pane_vc_t1_ParamLimits

0xce0c,	// (0x000347f7) form_field_data_wide_pane_vc_t1

0xbf15,	// (0x00033900) input_focus_pane_cp6_vc_ParamLimits

0xbf15,	// (0x00033900) input_focus_pane_cp6_vc

0xf423,	// (0x00036e0e) list_midp_pane_ParamLimits

0xf42f,	// (0x00036e1a) scroll_pane_cp16_ParamLimits

0xf42f,	// (0x00036e1a) scroll_pane_cp16

0xd09f,	// (0x00034a8a) button_value_adjust_pane_ParamLimits

0xd09f,	// (0x00034a8a) button_value_adjust_pane

0x00c7,	// (0x00027ab2) button_value_adjust_pane_cp6_ParamLimits

0x00c7,	// (0x00027ab2) button_value_adjust_pane_cp6

0x01cf,	// (0x00027bba) settings_code_pane_cp_ParamLimits

0x01cf,	// (0x00027bba) settings_code_pane_cp

0xb8e8,	// (0x000332d3) cell_touch_pane_g1

0xb8e8,	// (0x000332d3) cell_touch_pane_g2

0x0001,

0xf703,	// (0x000370ee) cell_touch_pane_g

0x043c,	// (0x00027e27) cell_touch_pane_cp_ParamLimits

0x043c,	// (0x00027e27) cell_touch_pane_cp

0x044c,	// (0x00027e37) cell_touch_pane_ParamLimits

0x044c,	// (0x00027e37) cell_touch_pane

0xb8e8,	// (0x000332d3) scroll_sc2_down_pane_g1

0xb8e8,	// (0x000332d3) scroll_sc2_up_pane_g1

0xb8f2,	// (0x000332dd) bg_set_opt_pane_cp4_vc

0xe28f,	// (0x00035c7a) list_set_graphic_pane_vc_g1_ParamLimits

0xe28f,	// (0x00035c7a) list_set_graphic_pane_vc_g1

0xe29b,	// (0x00035c86) list_set_graphic_pane_vc_g2_ParamLimits

0xe29b,	// (0x00035c86) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x000373e3) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x000373e3) list_set_graphic_pane_vc_g

0xe2a7,	// (0x00035c92) text_primary_small_cp13_vc_ParamLimits

0xe2a7,	// (0x00035c92) text_primary_small_cp13_vc

0xe2bf,	// (0x00035caa) list_set_graphic_pane_vc_ParamLimits

0xe2bf,	// (0x00035caa) list_set_graphic_pane_vc

0xb8f2,	// (0x000332dd) input_focus_pane_cp2_vc

0xb8e8,	// (0x000332d3) setting_code_pane_vc_g1

0xb967,	// (0x00033352) setting_code_pane_vc_t1

0xe2d0,	// (0x00035cbb) set_text_pane_vc_t1_ParamLimits

0xe2d0,	// (0x00035cbb) set_text_pane_vc_t1

0xb8f2,	// (0x000332dd) input_focus_pane_cp1_vc

0xe2ea,	// (0x00035cd5) list_set_text_pane_vc

0xb8e8,	// (0x000332d3) setting_text_pane_vc_g1

0xb8f2,	// (0x000332dd) bg_set_opt_pane_cp2_vc

0xb95e,	// (0x00033349) setting_slider_graphic_pane_vc_g1

0xe2f4,	// (0x00035cdf) setting_slider_graphic_pane_vc_t1

0xe303,	// (0x00035cee) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x000373e8) setting_slider_graphic_pane_vc_t

0xe312,	// (0x00035cfd) slider_set_pane_cp_vc

0xe31a,	// (0x00035d05) slider_set_pane_vc_g1

0xe323,	// (0x00035d0e) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x000373ed) slider_set_pane_vc_g

0xbf6d,	// (0x00033958) set_opt_bg_pane_g1_copy1

0xbf75,	// (0x00033960) set_opt_bg_pane_g2_copy1

0xe34f,	// (0x00035d3a) set_opt_bg_pane_g3_copy1

0xbf85,	// (0x00033970) set_opt_bg_pane_g4_copy1

0xbf8d,	// (0x00033978) set_opt_bg_pane_g5_copy1

0xbf95,	// (0x00033980) set_opt_bg_pane_g6_copy1

0xe357,	// (0x00035d42) set_opt_bg_pane_g7_copy1

0xe35f,	// (0x00035d4a) set_opt_bg_pane_g8_copy1

0xe367,	// (0x00035d52) set_opt_bg_pane_g9_copy1

0xb8f2,	// (0x000332dd) bg_set_opt_pane_cp_vc

0xe36f,	// (0x00035d5a) setting_slider_pane_vc_t1

0xe37e,	// (0x00035d69) setting_slider_pane_vc_t2

0xe38d,	// (0x00035d78) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x000373fc) setting_slider_pane_vc_t

0xe39c,	// (0x00035d87) slider_set_pane_vc

0xa0da,	// (0x00031ac5) volume_set_pane_vc_g1

0xa3bf,	// (0x00031daa) volume_set_pane_vc_g2

0xa3c8,	// (0x00031db3) volume_set_pane_vc_g3

0xa3d1,	// (0x00031dbc) volume_set_pane_vc_g4

0xa3da,	// (0x00031dc5) volume_set_pane_vc_g5

0xa3e3,	// (0x00031dce) volume_set_pane_vc_g6

0xa3ec,	// (0x00031dd7) volume_set_pane_vc_g7

0xa3f5,	// (0x00031de0) volume_set_pane_vc_g8

0xa3fe,	// (0x00031de9) volume_set_pane_vc_g9

0xa407,	// (0x00031df2) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x00037403) volume_set_pane_vc_g

0xe3a4,	// (0x00035d8f) volume_set_pane_vc

0xe3ac,	// (0x00035d97) button_value_adjust_pane_cp1_vc

0xe3b4,	// (0x00035d9f) list_highlight_pane_cp2_vc

0xe3bd,	// (0x00035da8) list_set_pane_vc_ParamLimits

0xe3bd,	// (0x00035da8) list_set_pane_vc

0xe40f,	// (0x00035dfa) main_pane_set_vc_t1_ParamLimits

0xe40f,	// (0x00035dfa) main_pane_set_vc_t1

0xe424,	// (0x00035e0f) main_pane_set_vc_t2_ParamLimits

0xe424,	// (0x00035e0f) main_pane_set_vc_t2

0xe436,	// (0x00035e21) main_pane_set_vc_t3_ParamLimits

0xe436,	// (0x00035e21) main_pane_set_vc_t3

0xe448,	// (0x00035e33) main_pane_set_vc_t4_ParamLimits

0xe448,	// (0x00035e33) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x00037418) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x00037418) main_pane_set_vc_t

0xe45a,	// (0x00035e45) setting_code_pane_vc_ParamLimits

0xe45a,	// (0x00035e45) setting_code_pane_vc

0xe469,	// (0x00035e54) setting_slider_graphic_pane_vc

0xe469,	// (0x00035e54) setting_slider_pane_vc

0xe469,	// (0x00035e54) setting_text_pane_vc

0xe469,	// (0x00035e54) setting_volume_pane_vc

0xe471,	// (0x00035e5c) scroll_pane_cp121_vc

0xbeef,	// (0x000338da) set_content_pane_vc

0xe479,	// (0x00035e64) button_value_adjust_pane_g1

0xe482,	// (0x00035e6d) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x00037474) button_value_adjust_pane_g

0xe48b,	// (0x00035e76) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe48b,	// (0x00035e76) form_field_slider_wide_pane_vc_t1

0xe49d,	// (0x00035e88) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe49d,	// (0x00035e88) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x00037479) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x00037479) form_field_slider_wide_pane_vc_t

0xba83,	// (0x0003346e) input_focus_pane_cp10_vc_ParamLimits

0xba83,	// (0x0003346e) input_focus_pane_cp10_vc

0xe4c5,	// (0x00035eb0) slider_cont_pane_cp1_vc_ParamLimits

0xe4c5,	// (0x00035eb0) slider_cont_pane_cp1_vc

0xe4d5,	// (0x00035ec0) slider_form_pane_g1_cp2

0xe323,	// (0x00035d0e) slider_form_pane_g2_cp2

0xe502,	// (0x00035eed) form_field_slider_pane_vc_t3

0xe510,	// (0x00035efb) form_field_slider_pane_vc_t4

0xe51e,	// (0x00035f09) slider_form_pane_vc_ParamLimits

0xe51e,	// (0x00035f09) slider_form_pane_vc

0xe52b,	// (0x00035f16) form_field_slider_pane_vc_t1_ParamLimits

0xe52b,	// (0x00035f16) form_field_slider_pane_vc_t1

0xe49d,	// (0x00035e88) form_field_slider_pane_vc_t2_ParamLimits

0xe49d,	// (0x00035e88) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x0003748b) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x0003748b) form_field_slider_pane_vc_t

0xba83,	// (0x0003346e) input_focus_pane_cp9_vc_ParamLimits

0xba83,	// (0x0003346e) input_focus_pane_cp9_vc

0xe541,	// (0x00035f2c) slider_cont_pane_vc_ParamLimits

0xe541,	// (0x00035f2c) slider_cont_pane_vc

0xe553,	// (0x00035f3e) list_form_graphic_pane_cp_vc_ParamLimits

0xe553,	// (0x00035f3e) list_form_graphic_pane_cp_vc

0xce04,	// (0x000347ef) form_field_popup_wide_pane_vc_g1

0xe568,	// (0x00035f53) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe568,	// (0x00035f53) form_field_popup_wide_pane_vc_t1

0xbf15,	// (0x00033900) input_focus_pane_cp8_vc_ParamLimits

0xbf15,	// (0x00033900) input_focus_pane_cp8_vc

0xe5a7,	// (0x00035f92) list_form_wide_pane_vc_ParamLimits

0xe5a7,	// (0x00035f92) list_form_wide_pane_vc

0xe5b3,	// (0x00035f9e) list_form_graphic_pane_vc_g1

0xe5bb,	// (0x00035fa6) list_form_graphic_pane_vc_t1_ParamLimits

0xe5bb,	// (0x00035fa6) list_form_graphic_pane_vc_t1

0xb940,	// (0x0003332b) list_highlight_pane_cp5_vc_ParamLimits

0xb940,	// (0x0003332b) list_highlight_pane_cp5_vc

0xe5d7,	// (0x00035fc2) list_form_graphic_pane_vc_ParamLimits

0xe5d7,	// (0x00035fc2) list_form_graphic_pane_vc

0xce04,	// (0x000347ef) form_field_popup_pane_vc_g1

0xe5ed,	// (0x00035fd8) form_field_popup_pane_vc_t1_ParamLimits

0xe5ed,	// (0x00035fd8) form_field_popup_pane_vc_t1

0xbf15,	// (0x00033900) input_focus_pane_cp7_vc_ParamLimits

0xbf15,	// (0x00033900) input_focus_pane_cp7_vc

0xe602,	// (0x00035fed) list_form_pane_vc_ParamLimits

0xe602,	// (0x00035fed) list_form_pane_vc

0xe60e,	// (0x00035ff9) data_form_pane_vc_t1_ParamLimits

0xe60e,	// (0x00035ff9) data_form_pane_vc_t1

0xbf6d,	// (0x00033958) input_focus_pane_vc_g1

0xbf75,	// (0x00033960) input_focus_pane_vc_g2

0xbf7d,	// (0x00033968) input_focus_pane_vc_g3

0xbf85,	// (0x00033970) input_focus_pane_vc_g4

0xbf8d,	// (0x00033978) input_focus_pane_vc_g5

0xbf95,	// (0x00033980) input_focus_pane_vc_g6

0xbf9d,	// (0x00033988) input_focus_pane_vc_g7

0xbfa5,	// (0x00033990) input_focus_pane_vc_g8

0xbfad,	// (0x00033998) input_focus_pane_vc_g9

0xb8e8,	// (0x000332d3) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00037077) input_focus_pane_vc_g

0xcdf8,	// (0x000347e3) data_form_pane_vc_ParamLimits

0xcdf8,	// (0x000347e3) data_form_pane_vc

0xce04,	// (0x000347ef) form_field_data_pane_vc_g1

0xe629,	// (0x00036014) form_field_data_pane_vc_t1_ParamLimits

0xe629,	// (0x00036014) form_field_data_pane_vc_t1

0xbf15,	// (0x00033900) input_focus_pane_vc_ParamLimits

0xbf15,	// (0x00033900) input_focus_pane_vc

0xe63f,	// (0x0003602a) button_value_adjust_pane_cp3_vc

0xe647,	// (0x00036032) button_value_adjust_pane_cp5_vc

0xe64f,	// (0x0003603a) form_field_data_pane_vc_ParamLimits

0xe64f,	// (0x0003603a) form_field_data_pane_vc

0xe666,	// (0x00036051) form_field_data_pane_vc_cp2

0xe66e,	// (0x00036059) form_field_data_wide_pane_vc_ParamLimits

0xe66e,	// (0x00036059) form_field_data_wide_pane_vc

0xe684,	// (0x0003606f) form_field_data_wide_pane_vc_cp2

0xe68c,	// (0x00036077) form_field_popup_pane_vc_ParamLimits

0xe68c,	// (0x00036077) form_field_popup_pane_vc

0xe6a3,	// (0x0003608e) form_field_popup_wide_pane_vc_ParamLimits

0xe6a3,	// (0x0003608e) form_field_popup_wide_pane_vc

0xe6b9,	// (0x000360a4) form_field_slider_pane_vc_ParamLimits

0xe6b9,	// (0x000360a4) form_field_slider_pane_vc

0xe6cc,	// (0x000360b7) form_field_slider_wide_pane_vc_ParamLimits

0xe6cc,	// (0x000360b7) form_field_slider_wide_pane_vc

0x04af,	// (0x00027e9a) grid_touch_1_pane_ParamLimits

0x04af,	// (0x00027e9a) grid_touch_1_pane

0x04bb,	// (0x00027ea6) grid_touch_2_pane_ParamLimits

0x04bb,	// (0x00027ea6) grid_touch_2_pane

0xcafe,	// (0x000344e9) touch_pane_g1_ParamLimits

0xcafe,	// (0x000344e9) touch_pane_g1

0xe6df,	// (0x000360ca) cell_app_pane_cp_wide_ParamLimits

0xe6df,	// (0x000360ca) cell_app_pane_cp_wide

0xe6f0,	// (0x000360db) grid_popup_fast_wide_pane_ParamLimits

0xe6f0,	// (0x000360db) grid_popup_fast_wide_pane

0xe704,	// (0x000360ef) scroll_pane_cp19_ParamLimits

0xe704,	// (0x000360ef) scroll_pane_cp19

0xb8f2,	// (0x000332dd) bg_popup_window_pane_cp20

0xe718,	// (0x00036103) listscroll_popup_fast_wide_pane

0xb940,	// (0x0003332b) grid_indicator_nsta_pane

0xe720,	// (0x0003610b) clock_nsta_pane_g1

0xe729,	// (0x00036114) clock_nsta_pane_t1

0x04d3,	// (0x00027ebe) cell_indicator_nsta_pane_ParamLimits

0x04d3,	// (0x00027ebe) cell_indicator_nsta_pane

0xe745,	// (0x00036130) cell_indicator_nsta_pane_g1

0x0504,	// (0x00027eef) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x0003749c) cell_indicator_nsta_pane_g

0xe753,	// (0x0003613e) clock_nsta_pane_cp

0xe75b,	// (0x00036146) indicator_nsta_pane_cp

0xe763,	// (0x0003614e) nsta_clock_indic_pane_g1

0xb98c,	// (0x00033377) grid_indicator_pane

0xc384,	// (0x00033d6f) scroll_pane_cp29

0x97dc,	// (0x000311c7) indicator_nsta_pane_cp2_ParamLimits

0x97dc,	// (0x000311c7) indicator_nsta_pane_cp2

0xb940,	// (0x0003332b) main_apps_wheel_pane

0xcf3c,	// (0x00034927) form_midp_field_text_pane_ParamLimits

0xd069,	// (0x00034a54) scroll_bar_cp050_ParamLimits

0xe7b3,	// (0x0003619e) cell_indicator_pane_ParamLimits

0xe7b3,	// (0x0003619e) cell_indicator_pane

0xe7c7,	// (0x000361b2) cell_indicator_pane_g1

0x0511,	// (0x00027efc) grid_wheel_folder_pane_ParamLimits

0x0511,	// (0x00027efc) grid_wheel_folder_pane

0x0523,	// (0x00027f0e) list_wheel_apps_pane_ParamLimits

0x0523,	// (0x00027f0e) list_wheel_apps_pane

0x0532,	// (0x00027f1d) main_apps_wheel_pane_g1_ParamLimits

0x0532,	// (0x00027f1d) main_apps_wheel_pane_g1

0x0546,	// (0x00027f31) main_apps_wheel_pane_g2_ParamLimits

0x0546,	// (0x00027f31) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x000374b8) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x000374b8) main_apps_wheel_pane_g

0x055a,	// (0x00027f45) main_apps_wheel_pane_t1_ParamLimits

0x055a,	// (0x00027f45) main_apps_wheel_pane_t1

0x0579,	// (0x00027f64) list_wheel_apps_pane_g1

0x0581,	// (0x00027f6c) list_wheel_apps_pane_g2

0x0589,	// (0x00027f74) list_wheel_apps_pane_g3

0x0591,	// (0x00027f7c) list_wheel_apps_pane_g4

0x0599,	// (0x00027f84) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x000374bd) list_wheel_apps_pane_g

0xc829,	// (0x00034214) navi_icon_text_pane

0xf094,	// (0x00036a7f) aid_fill_nsta

0xe7d1,	// (0x000361bc) navi_icon_text_pane_g1

0xe7dd,	// (0x000361c8) navi_icon_text_pane_t1

0xc6d3,	// (0x000340be) list_set_graphic_pane_t1_ParamLimits

0xc6d3,	// (0x000340be) list_set_graphic_pane_t1

0xd77e,	// (0x00035169) popup_midp_note_alarm_window_t6_ParamLimits

0xd77e,	// (0x00035169) popup_midp_note_alarm_window_t6

0xd790,	// (0x0003517b) popup_midp_note_alarm_window_t7_ParamLimits

0xd790,	// (0x0003517b) popup_midp_note_alarm_window_t7

0xd7a2,	// (0x0003518d) popup_midp_note_alarm_window_t8_ParamLimits

0xd7a2,	// (0x0003518d) popup_midp_note_alarm_window_t8

0xd7b4,	// (0x0003519f) popup_midp_note_alarm_window_t9_ParamLimits

0xd7b4,	// (0x0003519f) popup_midp_note_alarm_window_t9

0xd7c6,	// (0x000351b1) popup_midp_note_alarm_window_t10_ParamLimits

0xd7c6,	// (0x000351b1) popup_midp_note_alarm_window_t10

0xd7d8,	// (0x000351c3) popup_midp_note_alarm_window_t11_ParamLimits

0xd7d8,	// (0x000351c3) popup_midp_note_alarm_window_t11

0xd7ea,	// (0x000351d5) scroll_pane_cp17_ParamLimits

0xd7ea,	// (0x000351d5) scroll_pane_cp17

0xa0da,	// (0x00031ac5) volume_small_pane_cp_g1

0xa445,	// (0x00031e30) volume_small_pane_cp_g2

0xa44e,	// (0x00031e39) volume_small_pane_cp_g3

0xa457,	// (0x00031e42) volume_small_pane_cp_g4

0xa460,	// (0x00031e4b) volume_small_pane_cp_g5

0xa469,	// (0x00031e54) volume_small_pane_cp_g6

0xa472,	// (0x00031e5d) volume_small_pane_cp_g7

0xa47b,	// (0x00031e66) volume_small_pane_cp_g8

0xa484,	// (0x00031e6f) volume_small_pane_cp_g9

0xa48d,	// (0x00031e78) volume_small_pane_cp_g10

0xc9c5,	// (0x000343b0) midp_ticker_pane_g1_ParamLimits

0xc9d1,	// (0x000343bc) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00037143) midp_ticker_pane_g_ParamLimits

0xc9dd,	// (0x000343c8) midp_ticker_pane_t1_ParamLimits

0xf0a4,	// (0x00036a8f) aid_fill_nsta_2

0xd055,	// (0x00034a40) list_form2_midp_pane

0xde8e,	// (0x00035879) midp_editing_number_pane_ParamLimits

0xde9d,	// (0x00035888) midp_ticker_pane_ParamLimits

0xe7ef,	// (0x000361da) form2_midp_field_pane

0xe7f7,	// (0x000361e2) scroll_pane_cp51

0xe817,	// (0x00036202) form2_midp_button_pane_ParamLimits

0xe817,	// (0x00036202) form2_midp_button_pane

0xe829,	// (0x00036214) form2_midp_content_pane_ParamLimits

0xe829,	// (0x00036214) form2_midp_content_pane

0xe843,	// (0x0003622e) form2_midp_field_choice_group_pane

0xe84b,	// (0x00036236) form2_midp_field_pane_g1

0xe853,	// (0x0003623e) form2_midp_field_pane_g2

0xe85b,	// (0x00036246) form2_midp_field_pane_g3

0xe863,	// (0x0003624e) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x000374e2) form2_midp_field_pane_g

0xe86b,	// (0x00036256) form2_midp_gauge_slider_pane

0xe873,	// (0x0003625e) form2_midp_gauge_wait_pane

0xe87b,	// (0x00036266) form2_midp_image_pane_ParamLimits

0xe87b,	// (0x00036266) form2_midp_image_pane

0x0623,	// (0x0002800e) form2_midp_label_pane_ParamLimits

0x0623,	// (0x0002800e) form2_midp_label_pane

0x063c,	// (0x00028027) form2_midp_label_pane_cp_ParamLimits

0x063c,	// (0x00028027) form2_midp_label_pane_cp

0xe896,	// (0x00036281) form2_midp_string_pane_ParamLimits

0xe896,	// (0x00036281) form2_midp_string_pane

0x8d92,	// (0x0003077d) form2_midp_text_pane_ParamLimits

0x8d92,	// (0x0003077d) form2_midp_text_pane

0xe8a8,	// (0x00036293) form2_midp_time_pane

0xe8b8,	// (0x000362a3) input_focus_pane_cp51_ParamLimits

0xe8b8,	// (0x000362a3) input_focus_pane_cp51

0x065b,	// (0x00028046) form2_midp_label_pane_t1_ParamLimits

0x065b,	// (0x00028046) form2_midp_label_pane_t1

0x8dab,	// (0x00030796) form2_mdip_text_pane_t1_ParamLimits

0x8dab,	// (0x00030796) form2_mdip_text_pane_t1

0x8dc4,	// (0x000307af) form2_midp_time_pane_t1

0xe8d8,	// (0x000362c3) form2_midp_gauge_slider_pane_t1

0x0698,	// (0x00028083) form2_midp_gauge_slider_pane_t2

0x06aa,	// (0x00028095) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x000374eb) form2_midp_gauge_slider_pane_t

0xe8ea,	// (0x000362d5) form2_midp_slider_pane

0xe8f6,	// (0x000362e1) form2_midp_gauge_wait_pane_t1

0xe904,	// (0x000362ef) form2_midp_wait_pane_ParamLimits

0xe904,	// (0x000362ef) form2_midp_wait_pane

0x06bc,	// (0x000280a7) list_single_2graphic_pane_cp4_ParamLimits

0x06bc,	// (0x000280a7) list_single_2graphic_pane_cp4

0xf3b6,	// (0x00036da1) list_single_midp_graphic_pane_cp_ParamLimits

0xf3b6,	// (0x00036da1) list_single_midp_graphic_pane_cp

0xb8f2,	// (0x000332dd) list_highlight_pane_cp20

0xe92f,	// (0x0003631a) list_single_2graphic_pane_g1_cp4

0xe1c8,	// (0x00035bb3) list_single_2graphic_pane_g2_cp4

0xe937,	// (0x00036322) list_single_2graphic_pane_t1_cp4

0xb940,	// (0x0003332b) list_highlight_pane_cp21

0xe946,	// (0x00036331) list_single_midp_graphic_pane_g4_cp

0xe955,	// (0x00036340) list_single_midp_graphic_pane_t1_cp

0x06cf,	// (0x000280ba) form2_mdip_string_pane_t1_ParamLimits

0x06cf,	// (0x000280ba) form2_mdip_string_pane_t1

0xb8f2,	// (0x000332dd) bg_wml_button_pane_cp2

0xb8e8,	// (0x000332d3) form2_midp_image_pane_g1

0x94f6,	// (0x00030ee1) list_double_large_graphic_pane_g5_ParamLimits

0x94f6,	// (0x00030ee1) list_double_large_graphic_pane_g5

0xef0d,	// (0x000368f8) midp_form_pane_ParamLimits

0xb940,	// (0x0003332b) main_apps_wheel_pane_ParamLimits

0x9dde,	// (0x000317c9) popup_preview_window_ParamLimits

0x9dde,	// (0x000317c9) popup_preview_window

0x9f5f,	// (0x0003194a) popup_touch_info_window_ParamLimits

0x9f5f,	// (0x0003194a) popup_touch_info_window

0x9f7d,	// (0x00031968) popup_touch_menu_window_ParamLimits

0x9f7d,	// (0x00031968) popup_touch_menu_window

0xb8de,	// (0x000332c9) bg_popup_sub_pane_cp6

0xe96a,	// (0x00036355) list_touch_menu_pane

0xe972,	// (0x0003635d) list_single_touch_menu_pane_ParamLimits

0xe972,	// (0x0003635d) list_single_touch_menu_pane

0xe986,	// (0x00036371) list_single_touch_menu_pane_t1

0xb940,	// (0x0003332b) bg_popup_sub_pane_cp7_ParamLimits

0xb940,	// (0x0003332b) bg_popup_sub_pane_cp7

0xe994,	// (0x0003637f) heading_sub_pane

0xe99c,	// (0x00036387) list_touch_info_pane_ParamLimits

0xe99c,	// (0x00036387) list_touch_info_pane

0xe9ab,	// (0x00036396) list_single_touch_info_pane_ParamLimits

0xe9ab,	// (0x00036396) list_single_touch_info_pane

0xe9bc,	// (0x000363a7) list_single_touch_info_pane_t1

0xe9ca,	// (0x000363b5) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x000374f9) list_single_touch_info_pane_t

0xc99b,	// (0x00034386) bg_popup_heading_pane_cp

0xe9d8,	// (0x000363c3) heading_sub_pane_t1

0xcdbe,	// (0x000347a9) bg_popup_preview_window_pane_cp_ParamLimits

0xcdbe,	// (0x000347a9) bg_popup_preview_window_pane_cp

0xe994,	// (0x0003637f) heading_preview_pane

0xe99c,	// (0x00036387) list_preview_pane_ParamLimits

0xe99c,	// (0x00036387) list_preview_pane

0xe9e6,	// (0x000363d1) popup_preview_window_g1

0xe9ab,	// (0x00036396) list_single_preview_pane_ParamLimits

0xe9ab,	// (0x00036396) list_single_preview_pane

0xe9ee,	// (0x000363d9) list_single_preview_pane_g1

0xe9f6,	// (0x000363e1) list_single_preview_pane_t1

0xe9bc,	// (0x000363a7) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x000374fe) list_single_preview_pane_t

0xea04,	// (0x000363ef) bg_popup_heading_pane_cp2_ParamLimits

0xea04,	// (0x000363ef) bg_popup_heading_pane_cp2

0xea1a,	// (0x00036405) heading_preview_pane_g1

0xea22,	// (0x0003640d) heading_preview_pane_t1_ParamLimits

0xea22,	// (0x0003640d) heading_preview_pane_t1

0xb9a3,	// (0x0003338e) soft_indicator_pane_t1_ParamLimits

0xbe85,	// (0x00033870) scroll_pane_ParamLimits

0xc280,	// (0x00033c6b) scroll_sc2_left_pane

0xc289,	// (0x00033c74) scroll_sc2_right_pane

0xc2a8,	// (0x00033c93) scroll_bg_pane_g1_ParamLimits

0xc2bd,	// (0x00033ca8) scroll_bg_pane_g2_ParamLimits

0xc2d5,	// (0x00033cc0) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x000370ce) scroll_bg_pane_g_ParamLimits

0xc2a8,	// (0x00033c93) scroll_handle_pane_g1_ParamLimits

0xc2f7,	// (0x00033ce2) scroll_handle_pane_g2_ParamLimits

0xc2d5,	// (0x00033cc0) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x000370d5) scroll_handle_pane_g_ParamLimits

0x9b09,	// (0x000314f4) popup_choice_list_window_ParamLimits

0x9b09,	// (0x000314f4) popup_choice_list_window

0xcc7e,	// (0x00034669) choice_list_pane

0xccfe,	// (0x000346e9) cell_toolbar_pane_t1

0xcd26,	// (0x00034711) toolbar_button_pane_ParamLimits

0xdc15,	// (0x00035600) ai_gene_pane_1_t2_ParamLimits

0xdc15,	// (0x00035600) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x000372fd) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x000372fd) ai_gene_pane_1_t

0xea3f,	// (0x0003642a) scroll_sc2_left_pane_g1

0xea3f,	// (0x0003642a) scroll_sc2_right_pane_g1

0xcb4e,	// (0x00034539) bg_popup_sub_pane_cp10

0xea49,	// (0x00036434) list_choice_list_pane

0xea60,	// (0x0003644b) list_single_choice_list_pane_ParamLimits

0xea60,	// (0x0003644b) list_single_choice_list_pane

0xea74,	// (0x0003645f) list_single_choice_list_pane_g1

0xc061,	// (0x00033a4c) list_single_choice_list_pane_t1_ParamLimits

0xc061,	// (0x00033a4c) list_single_choice_list_pane_t1

0xea7c,	// (0x00036467) choice_list_pane_g1

0xea84,	// (0x0003646f) choice_list_pane_t1

0xb8de,	// (0x000332c9) input_focus_pane_cp11

0xc1f5,	// (0x00033be0) title_pane_stacon_g2_ParamLimits

0xc1f5,	// (0x00033be0) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x000370b4) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000370b4) title_pane_stacon_g

0xc99b,	// (0x00034386) cursor_press_pane

0x9ba5,	// (0x00031590) popup_fep_hwr_window_ParamLimits

0x9ba5,	// (0x00031590) popup_fep_hwr_window

0x9c01,	// (0x000315ec) popup_fep_vkb_window_ParamLimits

0x9c01,	// (0x000315ec) popup_fep_vkb_window

0xea92,	// (0x0003647d) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x00037527) fep_vkb_side_pane_g_ParamLimits

0xa4cb,	// (0x00031eb6) fep_hwr_candidate_pane_ParamLimits

0xa4cb,	// (0x00031eb6) fep_hwr_candidate_pane

0xa4f3,	// (0x00031ede) fep_hwr_side_pane_ParamLimits

0xa4f3,	// (0x00031ede) fep_hwr_side_pane

0xa513,	// (0x00031efe) fep_hwr_top_pane_ParamLimits

0xa513,	// (0x00031efe) fep_hwr_top_pane

0xa52b,	// (0x00031f16) fep_hwr_write_pane_ParamLimits

0xa52b,	// (0x00031f16) fep_hwr_write_pane

0xfb3c,	// (0x00037527) fep_vkb_side_pane_g

0xea9a,	// (0x00036485) fep_hwr_top_pane_g1

0xeaac,	// (0x00036497) fep_hwr_top_pane_g2

0xa557,	// (0x00031f42) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x00037503) fep_hwr_top_pane_g

0xa56c,	// (0x00031f57) fep_hwr_top_text_pane

0xc44b,	// (0x00033e36) fep_hwr_top_text_pane_g1

0xeae2,	// (0x000364cd) fep_hwr_top_text_pane_t1

0xa65a,	// (0x00032045) fep_hwr_candidate_pane_g1

0x1b48,	// (0x00029533) fep_vkb_keypad_pane_g3_ParamLimits

0x1b48,	// (0x00029533) fep_vkb_keypad_pane_g3

0x1b6a,	// (0x00029555) fep_vkb_keypad_pane_g4_ParamLimits

0x1b6a,	// (0x00029555) fep_vkb_keypad_pane_g4

0x1bd9,	// (0x000295c4) fep_vkb_bottom_pane_g2_ParamLimits

0x1bd9,	// (0x000295c4) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x0003752e) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x0003752e) fep_vkb_bottom_pane_g

0xea3f,	// (0x0003642a) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x00037538) cell_vkb_side_pane_g

0x1c1d,	// (0x00029608) cell_vkb_side_pane_t1

0x1c2b,	// (0x00029616) cell_vkb_side_pane_t1_copy1

0xea3f,	// (0x0003642a) bg_fep_vkb_candidate_pane_g2

0x1cf9,	// (0x000296e4) cell_vkb_candidate_pane_ParamLimits

0x198d,	// (0x00029378) aid_size_cell_vkb_ParamLimits

0x198d,	// (0x00029378) aid_size_cell_vkb

0x1cf9,	// (0x000296e4) cell_vkb_candidate_pane

0xa674,	// (0x0003205f) bg_popup_fep_shadow_pane_g1

0x19f7,	// (0x000293e2) fep_vkb_bottom_pane_ParamLimits

0x19f7,	// (0x000293e2) fep_vkb_bottom_pane

0x1a34,	// (0x0002941f) fep_vkb_candidate_pane_ParamLimits

0x1a34,	// (0x0002941f) fep_vkb_candidate_pane

0x1a50,	// (0x0002943b) fep_vkb_keypad_pane_ParamLimits

0x1a50,	// (0x0002943b) fep_vkb_keypad_pane

0x1a84,	// (0x0002946f) fep_vkb_side_pane_ParamLimits

0x1a84,	// (0x0002946f) fep_vkb_side_pane

0x1ab0,	// (0x0002949b) fep_vkb_top_pane_ParamLimits

0x1ab0,	// (0x0002949b) fep_vkb_top_pane

0x1adc,	// (0x000294c7) fep_vkb_top_pane_g1_ParamLimits

0x1adc,	// (0x000294c7) fep_vkb_top_pane_g1

0x1aeb,	// (0x000294d6) fep_vkb_top_pane_g2_ParamLimits

0x1aeb,	// (0x000294d6) fep_vkb_top_pane_g2

0x1afa,	// (0x000294e5) fep_vkb_top_pane_g3_ParamLimits

0x1afa,	// (0x000294e5) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x0003751e) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x0003751e) fep_vkb_top_pane_g

0x1b18,	// (0x00029503) fep_vkb_top_text_pane_ParamLimits

0x1b18,	// (0x00029503) fep_vkb_top_text_pane

0x3fa4,	// (0x0002b98f) fep_vkb_side_pane_g1_ParamLimits

0x3fa4,	// (0x0002b98f) fep_vkb_side_pane_g1

0x1b37,	// (0x00029522) grid_vkb_side_pane_ParamLimits

0x1b37,	// (0x00029522) grid_vkb_side_pane

0xa67c,	// (0x00032067) bg_popup_fep_shadow_pane_g2

0xa685,	// (0x00032070) bg_popup_fep_shadow_pane_g3

0xa68d,	// (0x00032078) bg_popup_fep_shadow_pane_g4

0xa696,	// (0x00032081) bg_popup_fep_shadow_pane_g5

0xa69e,	// (0x00032089) bg_popup_fep_shadow_pane_g6

0xa6a6,	// (0x00032091) bg_popup_fep_shadow_pane_g7

0xbf8d,	// (0x00033978) bg_popup_fep_shadow_pane_g8

0x1b88,	// (0x00029573) grid_vkb_keypad_number_pane_ParamLimits

0x1b88,	// (0x00029573) grid_vkb_keypad_number_pane

0x1b98,	// (0x00029583) grid_vkb_keypad_pane_ParamLimits

0x1b98,	// (0x00029583) grid_vkb_keypad_pane

0x1bbe,	// (0x000295a9) fep_vkb_bottom_pane_g1_ParamLimits

0x1bbe,	// (0x000295a9) fep_vkb_bottom_pane_g1

0x1be7,	// (0x000295d2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x1be7,	// (0x000295d2) grid_vkb_keypad_bottom_left_pane

0x1bfc,	// (0x000295e7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x1bfc,	// (0x000295e7) grid_vkb_keypad_bottom_right_pane

0x1c11,	// (0x000295fc) fep_vkb_top_text_pane_g1

0x3fee,	// (0x0002b9d9) fep_vkb_top_text_pane_t1

0x4003,	// (0x0002b9ee) cell_vkb_side_pane_ParamLimits

0x4003,	// (0x0002b9ee) cell_vkb_side_pane

0xea3f,	// (0x0003642a) cell_vkb_side_pane_g1

0x1c39,	// (0x00029624) cell_vkb_keypad_pane_ParamLimits

0x1c39,	// (0x00029624) cell_vkb_keypad_pane

0x1ca6,	// (0x00029691) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x0003754b) bg_popup_fep_shadow_pane_g

0xea3f,	// (0x0003642a) cell_hwr_side_pane_g1

0xea3f,	// (0x0003642a) cell_hwr_side_pane_g2

0x1cb0,	// (0x0002969b) cell_vkb_keypad_pane_t1

0x4026,	// (0x0002ba11) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x4026,	// (0x0002ba11) cell_vkb_keypad_bottom_left_pane

0x4043,	// (0x0002ba2e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x4043,	// (0x0002ba2e) cell_vkb_keypad_bottom_right_pane

0xea3f,	// (0x0003642a) cell_vkb_keypad_bottom_left_pane_g1

0xea3f,	// (0x0003642a) cell_vkb_keypad_bottom_right_pane_g1

0x1cbe,	// (0x000296a9) cell_vkb_keypad_number_pane_ParamLimits

0x1cbe,	// (0x000296a9) cell_vkb_keypad_number_pane

0x1cdd,	// (0x000296c8) cell_vkb_keypad_number_pane_g1

0x1ce7,	// (0x000296d2) cell_vkb_keypad_number_pane_g2

0x1cf0,	// (0x000296db) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x0003753d) cell_vkb_keypad_number_pane_g

0x1cb0,	// (0x0002969b) cell_vkb_keypad_number_pane_t1

0x1d12,	// (0x000296fd) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x00037538) cell_hwr_side_pane_g

0x1d2b,	// (0x00029716) cell_hwr_side_pane_t1

0xa6b6,	// (0x000320a1) cell_hwr_side_pane_t1_copy1

0x1b0a,	// (0x000294f5) cell_hwr_candidate_pane_g1

0xa6c4,	// (0x000320af) cell_hwr_candidate_pane_t1

0xea3f,	// (0x0003642a) cell_vkb_candidate_pane_g2

0x1d90,	// (0x0002977b) cell_vkb_candidate_pane_t1

0xa496,	// (0x00031e81) bg_popup_fep_shadow_pane_ParamLimits

0xa496,	// (0x00031e81) bg_popup_fep_shadow_pane

0x5e2f,	// (0x0002d81a) bg_fep_hwr_top_pane_g4

0xeabe,	// (0x000364a9) bg_hwr_side_pane_g1_ParamLimits

0xeabe,	// (0x000364a9) bg_hwr_side_pane_g1

0xa5a8,	// (0x00031f93) cell_hwr_side_pane_ParamLimits

0xa5a8,	// (0x00031f93) cell_hwr_side_pane

0xa5e3,	// (0x00031fce) fep_hwr_write_pane_g1_ParamLimits

0xa5e3,	// (0x00031fce) fep_hwr_write_pane_g1

0xa5f0,	// (0x00031fdb) fep_hwr_write_pane_g2_ParamLimits

0xa5f0,	// (0x00031fdb) fep_hwr_write_pane_g2

0xa5fd,	// (0x00031fe8) fep_hwr_write_pane_g3_ParamLimits

0xa5fd,	// (0x00031fe8) fep_hwr_write_pane_g3

0xa60b,	// (0x00031ff6) fep_hwr_write_pane_g4_ParamLimits

0xa60b,	// (0x00031ff6) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x0003750a) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x0003750a) fep_hwr_write_pane_g

0x5e2f,	// (0x0002d81a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5e2f,	// (0x0002d81a) bg_fep_hwr_candidate_pane_g2

0xa620,	// (0x0003200b) cell_hwr_candidate_pane_ParamLimits

0xa620,	// (0x0003200b) cell_hwr_candidate_pane

0xa65a,	// (0x00032045) fep_hwr_candidate_pane_g1_ParamLimits

0x19bb,	// (0x000293a6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x19bb,	// (0x000293a6) bg_popup_fep_shadow_pane_cp2

0x1b0a,	// (0x000294f5) fep_vkb_top_pane_g4_ParamLimits

0x1b0a,	// (0x000294f5) fep_vkb_top_pane_g4

0x1b29,	// (0x00029514) fep_vkb_side_pane_g2_ParamLimits

0x1b29,	// (0x00029514) fep_vkb_side_pane_g2

0x853a,	// (0x0002ff25) list_setting_pane_t4_ParamLimits

0x853a,	// (0x0002ff25) list_setting_pane_t4

0x85d0,	// (0x0002ffbb) list_setting_number_pane_t5_ParamLimits

0x85d0,	// (0x0002ffbb) list_setting_number_pane_t5

0xee8a,	// (0x00036875) list_double_heading_pane_cp2_ParamLimits

0xee8a,	// (0x00036875) list_double_heading_pane_cp2

0xbf23,	// (0x0003390e) list_double_heading_pane_g1_cp2_ParamLimits

0xbf23,	// (0x0003390e) list_double_heading_pane_g1_cp2

0xbf2f,	// (0x0003391a) list_double_heading_pane_g2_cp2_ParamLimits

0xbf2f,	// (0x0003391a) list_double_heading_pane_g2_cp2

0x1d9e,	// (0x00029789) list_double_heading_pane_t1_cp2_ParamLimits

0x1d9e,	// (0x00029789) list_double_heading_pane_t1_cp2

0x1db4,	// (0x0002979f) list_double_heading_pane_t2_cp2_ParamLimits

0x1db4,	// (0x0002979f) list_double_heading_pane_t2_cp2

0xb8d6,	// (0x000332c1) aid_value_unit2

0x9347,	// (0x00030d32) popup_preview_fixed_window

0xba91,	// (0x0003347c) bg_popup_preview_window_pane_cp02

0x1dc6,	// (0x000297b1) list_preview_fixed_pane

0x1e0c,	// (0x000297f7) list_empty_pane_fp_ParamLimits

0x1e0c,	// (0x000297f7) list_empty_pane_fp

0x1e0c,	// (0x000297f7) list_single_cale_day_pane_fp_ParamLimits

0x1e0c,	// (0x000297f7) list_single_cale_day_pane_fp

0x1e0c,	// (0x000297f7) list_single_graphic_heading_pane_fp_ParamLimits

0x1e0c,	// (0x000297f7) list_single_graphic_heading_pane_fp

0x1e0c,	// (0x000297f7) list_single_graphic_pane_fp_ParamLimits

0x1e0c,	// (0x000297f7) list_single_graphic_pane_fp

0x1e0c,	// (0x000297f7) list_single_heading_pane_fp_ParamLimits

0x1e0c,	// (0x000297f7) list_single_heading_pane_fp

0x1e0c,	// (0x000297f7) list_single_pane_fp_ParamLimits

0x1e0c,	// (0x000297f7) list_single_pane_fp

0x1e1f,	// (0x0002980a) list_single_pane_fp_g1_ParamLimits

0x1e1f,	// (0x0002980a) list_single_pane_fp_g1

0xa6e1,	// (0x000320cc) list_single_pane_fp_g2_ParamLimits

0xa6e1,	// (0x000320cc) list_single_pane_fp_g2

0xa6ed,	// (0x000320d8) list_single_pane_fp_g3_ParamLimits

0xa6ed,	// (0x000320d8) list_single_pane_fp_g3

0x1e2b,	// (0x00029816) list_single_pane_fp_g4_ParamLimits

0x1e2b,	// (0x00029816) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0003756c) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0003756c) list_single_pane_fp_g

0x8dd7,	// (0x000307c2) list_single_pane_fp_t1_ParamLimits

0x8dd7,	// (0x000307c2) list_single_pane_fp_t1

0x8dee,	// (0x000307d9) list_single_graphic_pane_fp_g1_ParamLimits

0x8dee,	// (0x000307d9) list_single_graphic_pane_fp_g1

0x1e1f,	// (0x0002980a) list_single_graphic_pane_fp_g2_ParamLimits

0x1e1f,	// (0x0002980a) list_single_graphic_pane_fp_g2

0xa6e1,	// (0x000320cc) list_single_graphic_pane_fp_g3_ParamLimits

0xa6e1,	// (0x000320cc) list_single_graphic_pane_fp_g3

0xa6ed,	// (0x000320d8) list_single_graphic_pane_fp_g4_ParamLimits

0xa6ed,	// (0x000320d8) list_single_graphic_pane_fp_g4

0x1e2b,	// (0x00029816) list_single_graphic_pane_fp_g5_ParamLimits

0x1e2b,	// (0x00029816) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x00037575) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x00037575) list_single_graphic_pane_fp_g

0x8dfa,	// (0x000307e5) list_single_graphic_pane_fp_t1_ParamLimits

0x8dfa,	// (0x000307e5) list_single_graphic_pane_fp_t1

0x8dee,	// (0x000307d9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x8dee,	// (0x000307d9) list_single_graphic_heading_pane_fp_g1

0x1e1f,	// (0x0002980a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x1e1f,	// (0x0002980a) list_single_graphic_heading_pane_fp_g2

0xa6e1,	// (0x000320cc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xa6e1,	// (0x000320cc) list_single_graphic_heading_pane_fp_g3

0xa6ed,	// (0x000320d8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xa6ed,	// (0x000320d8) list_single_graphic_heading_pane_fp_g4

0x1e2b,	// (0x00029816) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x1e2b,	// (0x00029816) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00037575) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00037575) list_single_graphic_heading_pane_fp_g

0x8e10,	// (0x000307fb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x8e10,	// (0x000307fb) list_single_graphic_heading_pane_fp_t1

0x8e26,	// (0x00030811) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x8e26,	// (0x00030811) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x00037580) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x00037580) list_single_graphic_heading_pane_fp_t

0x8e38,	// (0x00030823) list_single_cale_day_pane_fp_g1_ParamLimits

0x8e38,	// (0x00030823) list_single_cale_day_pane_fp_g1

0x1e37,	// (0x00029822) list_single_cale_day_pane_fp_g2_ParamLimits

0x1e37,	// (0x00029822) list_single_cale_day_pane_fp_g2

0xa701,	// (0x000320ec) list_single_cale_day_pane_fp_g3_ParamLimits

0xa701,	// (0x000320ec) list_single_cale_day_pane_fp_g3

0xa729,	// (0x00032114) list_single_cale_day_pane_fp_g4_ParamLimits

0xa729,	// (0x00032114) list_single_cale_day_pane_fp_g4

0xa74d,	// (0x00032138) list_single_cale_day_pane_fp_g5_ParamLimits

0xa74d,	// (0x00032138) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x00037585) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x00037585) list_single_cale_day_pane_fp_g

0x8e70,	// (0x0003085b) list_single_cale_day_pane_fp_t1_ParamLimits

0x8e70,	// (0x0003085b) list_single_cale_day_pane_fp_t1

0x8e96,	// (0x00030881) list_single_cale_day_pane_fp_t2_ParamLimits

0x8e96,	// (0x00030881) list_single_cale_day_pane_fp_t2

0x8eaf,	// (0x0003089a) list_single_cale_day_pane_fp_t3_ParamLimits

0x8eaf,	// (0x0003089a) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x00037590) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x00037590) list_single_cale_day_pane_fp_t

0x1e1f,	// (0x0002980a) list_empty_pane_fp_g1_ParamLimits

0x1e1f,	// (0x0002980a) list_empty_pane_fp_g1

0x8ec8,	// (0x000308b3) list_empty_pane_fp_t1

0x8ed6,	// (0x000308c1) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00037597) list_empty_pane_fp_t

0x1e1f,	// (0x0002980a) list_single_heading_pane_fp_g1_ParamLimits

0x1e1f,	// (0x0002980a) list_single_heading_pane_fp_g1

0xa6e1,	// (0x000320cc) list_single_heading_pane_fp_g2_ParamLimits

0xa6e1,	// (0x000320cc) list_single_heading_pane_fp_g2

0xa6ed,	// (0x000320d8) list_single_heading_pane_fp_g3_ParamLimits

0xa6ed,	// (0x000320d8) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0003759c) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0003759c) list_single_heading_pane_fp_g

0x8ee4,	// (0x000308cf) list_single_heading_pane_fp_t1_ParamLimits

0x8ee4,	// (0x000308cf) list_single_heading_pane_fp_t1

0x8ef6,	// (0x000308e1) list_single_heading_pane_fp_t2_ParamLimits

0x8ef6,	// (0x000308e1) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x000375a3) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x000375a3) list_single_heading_pane_fp_t

0xc08c,	// (0x00033a77) aid_size_cell_fast

0xba66,	// (0x00033451) soft_indicator_pane_cp1_t1

0xc0c9,	// (0x00033ab4) cell_app_pane_cp2_ParamLimits

0xc0c9,	// (0x00033ab4) cell_app_pane_cp2

0xa4b8,	// (0x00031ea3) fep_hwr_candidate_drop_down_list_pane

0x614d,	// (0x0002db38) fep_hwr_candidate_pane_g3_ParamLimits

0x614d,	// (0x0002db38) fep_hwr_candidate_pane_g3

0x615a,	// (0x0002db45) fep_hwr_candidate_pane_g4_ParamLimits

0x615a,	// (0x0002db45) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00037517) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x00037517) fep_hwr_candidate_pane_g

0x1a23,	// (0x0002940e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x1a23,	// (0x0002940e) fep_vkb_candidate_drop_down_list_pane

0x1d1a,	// (0x00029705) fep_vkb_candidate_pane_g3

0x1d22,	// (0x0002970d) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x00037544) fep_vkb_candidate_pane_g

0x1b0a,	// (0x000294f5) cell_hwr_candidate_pane_g1_ParamLimits

0x1ecb,	// (0x000298b6) cell_hwr_candidate_pane_g3_ParamLimits

0x1ecb,	// (0x000298b6) cell_hwr_candidate_pane_g3

0x1eec,	// (0x000298d7) cell_hwr_candidate_pane_g4_ParamLimits

0x1eec,	// (0x000298d7) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0003755e) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0003755e) cell_hwr_candidate_pane_g

0x1d5a,	// (0x00029745) cell_vkb_candidate_pane_g3_ParamLimits

0x1d5a,	// (0x00029745) cell_vkb_candidate_pane_g3

0x1d75,	// (0x00029760) cell_vkb_candidate_pane_g4_ParamLimits

0x1d75,	// (0x00029760) cell_vkb_candidate_pane_g4

0x1e43,	// (0x0002982e) cell_app_pane_cp2_g1_ParamLimits

0x1e43,	// (0x0002982e) cell_app_pane_cp2_g1

0x1e61,	// (0x0002984c) cell_app_pane_cp2_g2_ParamLimits

0x1e61,	// (0x0002984c) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x000375a8) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x000375a8) cell_app_pane_cp2_g

0x1e6d,	// (0x00029858) cell_app_pane_cp2_t1_ParamLimits

0x1e6d,	// (0x00029858) cell_app_pane_cp2_t1

0xbf15,	// (0x00033900) grid_highlight_pane_cp1_ParamLimits

0xbf15,	// (0x00033900) grid_highlight_pane_cp1

0xa771,	// (0x0003215c) cell_hwr_candidate_pane_cp1_ParamLimits

0xa771,	// (0x0003215c) cell_hwr_candidate_pane_cp1

0x1b0a,	// (0x000294f5) fep_hwr_candidate_drop_down_list_pane_g1

0x1e7f,	// (0x0002986a) fep_hwr_candidate_drop_down_list_pane_g2

0x1e8c,	// (0x00029877) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x000375ad) fep_hwr_candidate_drop_down_list_pane_g

0xa78f,	// (0x0003217a) fep_hwr_candidate_drop_down_list_scroll_pane

0xa798,	// (0x00032183) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xa798,	// (0x00032183) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xa7a5,	// (0x00032190) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xa7a5,	// (0x00032190) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xa7b2,	// (0x0003219d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xa7b2,	// (0x0003219d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1d5a,	// (0x00029745) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1d5a,	// (0x00029745) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1d75,	// (0x00029760) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1d75,	// (0x00029760) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xa7bf,	// (0x000321aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xa7bf,	// (0x000321aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xa7da,	// (0x000321c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xa7da,	// (0x000321c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xa7f5,	// (0x000321e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xa7f5,	// (0x000321e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x000375b4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x000375b4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x407c,	// (0x0002ba67) cell_vkb_candidate_pane_cp1_ParamLimits

0x407c,	// (0x0002ba67) cell_vkb_candidate_pane_cp1

0x1b0a,	// (0x000294f5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x1b0a,	// (0x000294f5) fep_vkb_candidate_drop_down_list_pane_g1

0x1e7f,	// (0x0002986a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x1e7f,	// (0x0002986a) fep_vkb_candidate_drop_down_list_pane_g2

0x1e8c,	// (0x00029877) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x1e8c,	// (0x00029877) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x000375ad) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x000375ad) fep_vkb_candidate_drop_down_list_pane_g

0x1e99,	// (0x00029884) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x1e99,	// (0x00029884) fep_vkb_candidate_drop_down_list_scroll_pane

0x1ea6,	// (0x00029891) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1ea6,	// (0x00029891) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x1eb3,	// (0x0002989e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1eb3,	// (0x0002989e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x1ebf,	// (0x000298aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1ebf,	// (0x000298aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x1ecb,	// (0x000298b6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1ecb,	// (0x000298b6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x1eec,	// (0x000298d7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1eec,	// (0x000298d7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x1f0d,	// (0x000298f8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1f0d,	// (0x000298f8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x1f2e,	// (0x00029919) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1f2e,	// (0x00029919) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x1f4f,	// (0x0002993a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1f4f,	// (0x0002993a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x000375c5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x000375c5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xeb08,	// (0x000364f3) title_pane_g1_ParamLimits

0xeb15,	// (0x00036500) title_pane_g2_ParamLimits

0xf54e,	// (0x00036f39) title_pane_g_ParamLimits

0xc43b,	// (0x00033e26) aid_call2_pane

0xc443,	// (0x00033e2e) aid_call_pane

0xc44b,	// (0x00033e36) popup_clock_analogue_window_g1

0xc44b,	// (0x00033e36) popup_clock_analogue_window_g2

0x96e6,	// (0x000310d1) popup_clock_analogue_window_g3

0x96ef,	// (0x000310da) popup_clock_analogue_window_g4

0xb8e8,	// (0x000332d3) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x000370e3) popup_clock_analogue_window_g

0x96f7,	// (0x000310e2) popup_clock_analogue_window_t1

0x9705,	// (0x000310f0) clock_digital_number_pane_ParamLimits

0x9705,	// (0x000310f0) clock_digital_number_pane

0x9711,	// (0x000310fc) clock_digital_number_pane_cp02_ParamLimits

0x9711,	// (0x000310fc) clock_digital_number_pane_cp02

0x971d,	// (0x00031108) clock_digital_number_pane_cp03_ParamLimits

0x971d,	// (0x00031108) clock_digital_number_pane_cp03

0x9729,	// (0x00031114) clock_digital_number_pane_cp04_ParamLimits

0x9729,	// (0x00031114) clock_digital_number_pane_cp04

0x9735,	// (0x00031120) clock_digital_separator_pane_ParamLimits

0x9735,	// (0x00031120) clock_digital_separator_pane

0x9741,	// (0x0003112c) popup_clock_digital_window_t1_ParamLimits

0x9741,	// (0x0003112c) popup_clock_digital_window_t1

0xb8e8,	// (0x000332d3) clock_digital_number_pane_g1

0xb8e8,	// (0x000332d3) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x000370ee) clock_digital_number_pane_g

0xb8e8,	// (0x000332d3) clock_digital_separator_pane_g1

0xb8e8,	// (0x000332d3) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x000370ee) clock_digital_separator_pane_g

0xf094,	// (0x00036a7f) aid_fill_nsta_ParamLimits

0xf151,	// (0x00036b3c) indicator_nsta_pane_ParamLimits

0xcc27,	// (0x00034612) popup_clock_analogue_window

0xcc27,	// (0x00034612) popup_clock_digital_window

0xb940,	// (0x0003332b) grid_indicator_nsta_pane_ParamLimits

0xe737,	// (0x00036122) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x00037497) clock_nsta_pane_t

0x96aa,	// (0x00031095) aid_size_max_handle

0x96b4,	// (0x0003109f) aid_size_min_handle

0xc99b,	// (0x00034386) editor_scroll_pane

0x1f6a,	// (0x00029955) ex_editor_pane

0xc03e,	// (0x00033a29) scroll_pane_cp13

0xbeb1,	// (0x0003389c) scroll_pane_cp14

0xc47a,	// (0x00033e65) scroll_pane_cp36

0xee9b,	// (0x00036886) list_single_graphic_hl_pane_cp2_ParamLimits

0xee9b,	// (0x00036886) list_single_graphic_hl_pane_cp2

0x023e,	// (0x00027c29) list_single_graphic_hl_pane_ParamLimits

0x023e,	// (0x00027c29) list_single_graphic_hl_pane

0x8f0c,	// (0x000308f7) aid_size_min_hl_cp1

0x1f72,	// (0x0002995d) list_highlight_pane_cp34_ParamLimits

0x1f72,	// (0x0002995d) list_highlight_pane_cp34

0x1f83,	// (0x0002996e) list_single_graphic_hl_pane_g1_ParamLimits

0x1f83,	// (0x0002996e) list_single_graphic_hl_pane_g1

0x8f15,	// (0x00030900) list_single_graphic_hl_pane_g2_ParamLimits

0x8f15,	// (0x00030900) list_single_graphic_hl_pane_g2

0x8f15,	// (0x00030900) list_single_graphic_hl_pane_g3_ParamLimits

0x8f15,	// (0x00030900) list_single_graphic_hl_pane_g3

0xa810,	// (0x000321fb) list_single_graphic_hl_pane_g4_ParamLimits

0xa810,	// (0x000321fb) list_single_graphic_hl_pane_g4

0xa81c,	// (0x00032207) list_single_graphic_hl_pane_g5_ParamLimits

0xa81c,	// (0x00032207) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x000375d6) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x000375d6) list_single_graphic_hl_pane_g

0x8f21,	// (0x0003090c) list_single_graphic_hl_pane_t1_ParamLimits

0x8f21,	// (0x0003090c) list_single_graphic_hl_pane_t1

0x1f90,	// (0x0002997b) aid_size_min_hl_cp2

0x1f99,	// (0x00029984) list_highlight_pane_cp34_cp2_ParamLimits

0x1f99,	// (0x00029984) list_highlight_pane_cp34_cp2

0x1f83,	// (0x0002996e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x1f83,	// (0x0002996e) list_single_graphic_hl_pane_g1_cp2

0x1fa6,	// (0x00029991) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x1fa6,	// (0x00029991) list_single_graphic_hl_pane_g2_cp2

0x1fb2,	// (0x0002999d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x1fb2,	// (0x0002999d) list_single_graphic_hl_pane_g3_cp2

0xc8d4,	// (0x000342bf) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc8d4,	// (0x000342bf) list_single_graphic_hl_pane_g4_cp2

0x1fbe,	// (0x000299a9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x1fbe,	// (0x000299a9) list_single_graphic_hl_pane_g5_cp2

0x99d8,	// (0x000313c3) control_pane_g4_ParamLimits

0x99d8,	// (0x000313c3) control_pane_g4

0xcb4e,	// (0x00034539) bg_popup_sub_pane_cp10_ParamLimits

0xea49,	// (0x00036434) list_choice_list_pane_ParamLimits

0xea58,	// (0x00036443) scroll_pane_cp23

0xba91,	// (0x0003347c) bg_popup_preview_window_pane_cp02_ParamLimits

0x1dc6,	// (0x000297b1) list_preview_fixed_pane_ParamLimits

0x1ddc,	// (0x000297c7) list_preview_fixed_pane_cp_ParamLimits

0x1ddc,	// (0x000297c7) list_preview_fixed_pane_cp

0x1de8,	// (0x000297d3) popup_preview_fixed_window_g1_ParamLimits

0x1de8,	// (0x000297d3) popup_preview_fixed_window_g1

0x1df4,	// (0x000297df) popup_preview_fixed_window_g2_ParamLimits

0x1df4,	// (0x000297df) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x00037565) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x00037565) popup_preview_fixed_window_g

0x9626,	// (0x00031011) aid_navi_side_left_pane_ParamLimits

0x9637,	// (0x00031022) aid_navi_side_right_pane_ParamLimits

0x964b,	// (0x00031036) navi_icon_pane_stacon_ParamLimits

0x965f,	// (0x0003104a) navi_navi_pane_stacon_ParamLimits

0x964b,	// (0x00031036) navi_text_pane_stacon_ParamLimits

0xb8de,	// (0x000332c9) main_text_info_pane

0x1fe8,	// (0x000299d3) listscroll_text_info_pane

0x1ff0,	// (0x000299db) list_text_info_pane_ParamLimits

0x1ff0,	// (0x000299db) list_text_info_pane

0x1fff,	// (0x000299ea) scroll_pane_cp24_ParamLimits

0x1fff,	// (0x000299ea) scroll_pane_cp24

0x409f,	// (0x0002ba8a) list_text_info_pane_t1_ParamLimits

0x409f,	// (0x0002ba8a) list_text_info_pane_t1

0x9b23,	// (0x0003150e) popup_fast_swap2_window_ParamLimits

0x9b23,	// (0x0003150e) popup_fast_swap2_window

0x201d,	// (0x00029a08) aid_size_cell_fast2

0xb8de,	// (0x000332c9) bg_popup_window_pane_cp17

0xd089,	// (0x00034a74) heading_pane_cp2

0xbc84,	// (0x0003366f) listscroll_fast2_pane

0x2027,	// (0x00029a12) grid_fast2_pane

0x202f,	// (0x00029a1a) listscroll_fast2_pane_g1

0x2037,	// (0x00029a22) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x000375e1) listscroll_fast2_pane_g

0xc03e,	// (0x00033a29) scroll_pane_cp26

0x203f,	// (0x00029a2a) cell_fast2_pane_ParamLimits

0x203f,	// (0x00029a2a) cell_fast2_pane

0x2054,	// (0x00029a3f) cell_fast2_pane_g1

0x205d,	// (0x00029a48) cell_fast2_pane_g2

0x2066,	// (0x00029a51) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x000375e6) cell_fast2_pane_g

0xbd14,	// (0x000336ff) grid_highlight_pane_cp9

0xbd29,	// (0x00033714) main_eswt_pane_ParamLimits

0xbd29,	// (0x00033714) main_eswt_pane

0x2014,	// (0x000299ff) list_single_text_info_pane

0x206e,	// (0x00029a59) eswt_ctrl_button_pane

0x206e,	// (0x00029a59) eswt_ctrl_canvas_pane

0x2076,	// (0x00029a61) eswt_ctrl_combo_pane

0x206e,	// (0x00029a59) eswt_ctrl_default_pane

0x206e,	// (0x00029a59) eswt_ctrl_label_pane

0x207e,	// (0x00029a69) eswt_ctrl_wait_pane

0x2086,	// (0x00029a71) eswt_shell_pane

0xb8de,	// (0x000332c9) listscroll_eswt_app_pane

0x20a2,	// (0x00029a8d) popup_eswt_tasktip_window_ParamLimits

0x20a2,	// (0x00029a8d) popup_eswt_tasktip_window

0xcdbe,	// (0x000347a9) bg_popup_window_pane_cp18

0x20b3,	// (0x00029a9e) eswt_control_pane_g1_ParamLimits

0x20b3,	// (0x00029a9e) eswt_control_pane_g1

0x20c0,	// (0x00029aab) eswt_control_pane_g2_ParamLimits

0x20c0,	// (0x00029aab) eswt_control_pane_g2

0x20cd,	// (0x00029ab8) eswt_control_pane_g3_ParamLimits

0x20cd,	// (0x00029ab8) eswt_control_pane_g3

0x20da,	// (0x00029ac5) eswt_control_pane_g4_ParamLimits

0x20da,	// (0x00029ac5) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x000375ed) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x000375ed) eswt_control_pane_g

0xbf15,	// (0x00033900) bg_button_pane_ParamLimits

0xbf15,	// (0x00033900) bg_button_pane

0xbd29,	// (0x00033714) common_borders_pane_copy2_ParamLimits

0xbd29,	// (0x00033714) common_borders_pane_copy2

0x20e7,	// (0x00029ad2) control_button_pane_g1_ParamLimits

0x20e7,	// (0x00029ad2) control_button_pane_g1

0x20f3,	// (0x00029ade) control_button_pane_g2_ParamLimits

0x20f3,	// (0x00029ade) control_button_pane_g2

0x20ff,	// (0x00029aea) control_button_pane_g3_ParamLimits

0x20ff,	// (0x00029aea) control_button_pane_g3

0x0002,

0xfc0b,	// (0x000375f6) control_button_pane_g_ParamLimits

0xfc0b,	// (0x000375f6) control_button_pane_g

0x2113,	// (0x00029afe) control_button_pane_t1

0x2121,	// (0x00029b0c) control_button_pane_t2

0x0001,

0xfc12,	// (0x000375fd) control_button_pane_t

0xcd32,	// (0x0003471d) bg_button_pane_g1

0xcd3a,	// (0x00034725) bg_button_pane_g2

0xcd42,	// (0x0003472d) bg_button_pane_g3

0xcd4a,	// (0x00034735) bg_button_pane_g4

0xcd52,	// (0x0003473d) bg_button_pane_g5

0xcd5a,	// (0x00034745) bg_button_pane_g6

0xcd62,	// (0x0003474d) bg_button_pane_g7

0xcd6a,	// (0x00034755) bg_button_pane_g8

0xcd72,	// (0x0003475d) bg_button_pane_g9

0x0008,

0xf866,	// (0x00037251) bg_button_pane_g

0xea04,	// (0x000363ef) common_borders_pane_ParamLimits

0xea04,	// (0x000363ef) common_borders_pane

0x20b3,	// (0x00029a9e) eswt_control_pane_g1_copy1_ParamLimits

0x20b3,	// (0x00029a9e) eswt_control_pane_g1_copy1

0x20c0,	// (0x00029aab) eswt_control_pane_g2_copy1_ParamLimits

0x20c0,	// (0x00029aab) eswt_control_pane_g2_copy1

0x20cd,	// (0x00029ab8) eswt_control_pane_g3_copy1_ParamLimits

0x20cd,	// (0x00029ab8) eswt_control_pane_g3_copy1

0x20da,	// (0x00029ac5) eswt_control_pane_g4_copy1_ParamLimits

0x20da,	// (0x00029ac5) eswt_control_pane_g4_copy1

0xea3f,	// (0x0003642a) bg_eswt_ctrl_canvas_pane_g1

0xea04,	// (0x000363ef) common_borders_pane_cp2_ParamLimits

0xea04,	// (0x000363ef) common_borders_pane_cp2

0xea04,	// (0x000363ef) common_borders_pane_cp3_ParamLimits

0xea04,	// (0x000363ef) common_borders_pane_cp3

0x212f,	// (0x00029b1a) separator_horizontal_pane

0x2137,	// (0x00029b22) separator_vertical_pane

0x20b3,	// (0x00029a9e) eswt_control_pane_g1_copy2_ParamLimits

0x20b3,	// (0x00029a9e) eswt_control_pane_g1_copy2

0x20c0,	// (0x00029aab) eswt_control_pane_g2_copy2_ParamLimits

0x20c0,	// (0x00029aab) eswt_control_pane_g2_copy2

0x20cd,	// (0x00029ab8) eswt_control_pane_g3_copy2_ParamLimits

0x20cd,	// (0x00029ab8) eswt_control_pane_g3_copy2

0x20da,	// (0x00029ac5) eswt_control_pane_g4_copy2_ParamLimits

0x20da,	// (0x00029ac5) eswt_control_pane_g4_copy2

0xb8de,	// (0x000332c9) common_borders_pane_cp4

0x2140,	// (0x00029b2b) separator_horizontal_pane_g1

0x2149,	// (0x00029b34) separator_horizontal_pane_g2

0x2152,	// (0x00029b3d) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x00037602) separator_horizontal_pane_g

0x20b3,	// (0x00029a9e) eswt_control_pane_g1_copy3_ParamLimits

0x20b3,	// (0x00029a9e) eswt_control_pane_g1_copy3

0x20c0,	// (0x00029aab) eswt_control_pane_g2_copy3_ParamLimits

0x20c0,	// (0x00029aab) eswt_control_pane_g2_copy3

0x20cd,	// (0x00029ab8) eswt_control_pane_g3_copy3_ParamLimits

0x20cd,	// (0x00029ab8) eswt_control_pane_g3_copy3

0x20da,	// (0x00029ac5) eswt_control_pane_g4_copy3_ParamLimits

0x20da,	// (0x00029ac5) eswt_control_pane_g4_copy3

0xb8de,	// (0x000332c9) common_borders_pane_cp5

0x215b,	// (0x00029b46) separator_vertical_pane_g1

0x2164,	// (0x00029b4f) separator_vertical_pane_g2

0x216d,	// (0x00029b58) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x00037609) separator_vertical_pane_g

0x20b3,	// (0x00029a9e) eswt_control_pane_g1_copy4_ParamLimits

0x20b3,	// (0x00029a9e) eswt_control_pane_g1_copy4

0x20c0,	// (0x00029aab) eswt_control_pane_g2_copy4_ParamLimits

0x20c0,	// (0x00029aab) eswt_control_pane_g2_copy4

0x20cd,	// (0x00029ab8) eswt_control_pane_g3_copy4_ParamLimits

0x20cd,	// (0x00029ab8) eswt_control_pane_g3_copy4

0x20da,	// (0x00029ac5) eswt_control_pane_g4_copy4_ParamLimits

0x20da,	// (0x00029ac5) eswt_control_pane_g4_copy4

0x40ba,	// (0x0002baa5) eswt_ctrl_combo_button_pane

0x40c2,	// (0x0002baad) eswt_ctrl_input_pane

0x40ca,	// (0x0002bab5) popup_choice_list_window_cp70

0x40d2,	// (0x0002babd) eswt_ctrl_input_pane_t1

0xb8de,	// (0x000332c9) input_focus_pane_cp70

0xea04,	// (0x000363ef) bg_button_pane_cp70_ParamLimits

0xea04,	// (0x000363ef) bg_button_pane_cp70

0x40e0,	// (0x0002bacb) eswt_ctrl_combo_button_pane_g1

0x2176,	// (0x00029b61) wait_bar_pane_cp70

0xcdbe,	// (0x000347a9) bg_popup_window_pane_cp70_ParamLimits

0xcdbe,	// (0x000347a9) bg_popup_window_pane_cp70

0x217e,	// (0x00029b69) popup_eswt_tasktip_window_t1

0x2194,	// (0x00029b7f) wait_bar_pane_cp71_ParamLimits

0x2194,	// (0x00029b7f) wait_bar_pane_cp71

0x21a0,	// (0x00029b8b) grid_eswt_app_pane

0xc289,	// (0x00033c74) scroll_pane_cp70

0x40e8,	// (0x0002bad3) cell_eswt_app_pane_ParamLimits

0x40e8,	// (0x0002bad3) cell_eswt_app_pane

0x4110,	// (0x0002bafb) cell_eswt_app_pane_g1_ParamLimits

0x4110,	// (0x0002bafb) cell_eswt_app_pane_g1

0x413f,	// (0x0002bb2a) cell_eswt_app_pane_g2_ParamLimits

0x413f,	// (0x0002bb2a) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x00037610) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x00037610) cell_eswt_app_pane_g

0x4168,	// (0x0002bb53) cell_eswt_app_pane_t1_ParamLimits

0x4168,	// (0x0002bb53) cell_eswt_app_pane_t1

0x21a9,	// (0x00029b94) grid_highlight_pane_cp70_ParamLimits

0x21a9,	// (0x00029b94) grid_highlight_pane_cp70

0xbeb9,	// (0x000338a4) set_content_pane_g1

0xf045,	// (0x00036a30) status_small_volume_pane

0xa830,	// (0x0003221b) status_small_volume_pane_g1

0xa838,	// (0x00032223) volume_small2_pane

0xa841,	// (0x0003222c) volume_small2_pane_g1

0xa84a,	// (0x00032235) volume_small2_pane_g2

0xa853,	// (0x0003223e) volume_small2_pane_g3

0xa85c,	// (0x00032247) volume_small2_pane_g4

0xa865,	// (0x00032250) volume_small2_pane_g5

0xa86e,	// (0x00032259) volume_small2_pane_g6

0xa877,	// (0x00032262) volume_small2_pane_g7

0xa880,	// (0x0003226b) volume_small2_pane_g8

0xa889,	// (0x00032274) volume_small2_pane_g9

0xa892,	// (0x0003227d) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x00037615) volume_small2_pane_g

0x1c11,	// (0x000295fc) fep_vkb_top_text_pane_g1_ParamLimits

0x3fee,	// (0x0002b9d9) fep_vkb_top_text_pane_t1_ParamLimits

0x1e00,	// (0x000297eb) popup_preview_fixed_window_g3_ParamLimits

0x1e00,	// (0x000297eb) popup_preview_fixed_window_g3

0x9efe,	// (0x000318e9) popup_toolbar_trans_pane

0x00b6,	// (0x00027aa1) aid_height_set_list_ParamLimits

0xde5a,	// (0x00035845) aid_size_parent_ParamLimits

0xcb4e,	// (0x00034539) list_highlight_pane_cp2_ParamLimits

0xbeb9,	// (0x000338a4) set_content_pane_g1_ParamLimits

0x024f,	// (0x00027c3a) list_single_image_pane_ParamLimits

0x024f,	// (0x00027c3a) list_single_image_pane

0x419a,	// (0x0002bb85) aid_size_cell_image_ParamLimits

0x419a,	// (0x0002bb85) aid_size_cell_image

0x41a7,	// (0x0002bb92) grid_single_image_pane_ParamLimits

0x41a7,	// (0x0002bb92) grid_single_image_pane

0xbf23,	// (0x0003390e) list_single_image_pane_g1_ParamLimits

0xbf23,	// (0x0003390e) list_single_image_pane_g1

0xbf2f,	// (0x0003391a) list_single_image_pane_g2_ParamLimits

0xbf2f,	// (0x0003391a) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x0003762a) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x0003762a) list_single_image_pane_g

0x21b5,	// (0x00029ba0) list_single_image_pane_t1_ParamLimits

0x21b5,	// (0x00029ba0) list_single_image_pane_t1

0x41b3,	// (0x0002bb9e) cell_image_list_pane_ParamLimits

0x41b3,	// (0x0002bb9e) cell_image_list_pane

0x41c6,	// (0x0002bbb1) cell_image_list_pane_g1

0x41cf,	// (0x0002bbba) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0003762f) cell_image_list_pane_g

0x21cb,	// (0x00029bb6) aid_size_cell_tb_trans_pane

0xbf15,	// (0x00033900) bg_tb_trans_pane

0x21dd,	// (0x00029bc8) grid_tb_trans_pane

0xcd32,	// (0x0003471d) bg_tb_trans_pane_g1

0xcd3a,	// (0x00034725) bg_tb_trans_pane_g2

0xcd42,	// (0x0003472d) bg_tb_trans_pane_g3

0xcd4a,	// (0x00034735) bg_tb_trans_pane_g4

0xcd52,	// (0x0003473d) bg_tb_trans_pane_g5

0xcd6a,	// (0x00034755) bg_tb_trans_pane_g6

0xcd72,	// (0x0003475d) bg_tb_trans_pane_g7

0xcd5a,	// (0x00034745) bg_tb_trans_pane_g8

0xcd62,	// (0x0003474d) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x00037634) bg_tb_trans_pane_g

0x21f1,	// (0x00029bdc) cell_toolbar_trans_pane_ParamLimits

0x21f1,	// (0x00029bdc) cell_toolbar_trans_pane

0xea3f,	// (0x0003642a) cell_toolbar_trans_pane_g1

0x0607,	// (0x00027ff2) list_form2_midp_pane_t1

0x0615,	// (0x00028000) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x000374dd) list_form2_midp_pane_t

0xe7f7,	// (0x000361e2) scroll_pane_cp51_ParamLimits

0xe914,	// (0x000362ff) form2_midp_wait_pane_g1

0xe91d,	// (0x00036308) form2_midp_wait_pane_g2

0xe926,	// (0x00036311) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x000374f2) form2_midp_wait_pane_g

0xb940,	// (0x0003332b) list_highlight_pane_cp21_ParamLimits

0xe946,	// (0x00036331) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe955,	// (0x00036340) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x8ac1,	// (0x000304ac) list_single_2graphic_im_pane_ParamLimits

0x8ac1,	// (0x000304ac) list_single_2graphic_im_pane

0x41d8,	// (0x0002bbc3) list_single_2graphic_im_pane_g1_ParamLimits

0x41d8,	// (0x0002bbc3) list_single_2graphic_im_pane_g1

0x2217,	// (0x00029c02) list_single_2graphic_im_pane_g2_ParamLimits

0x2217,	// (0x00029c02) list_single_2graphic_im_pane_g2

0x2223,	// (0x00029c0e) list_single_2graphic_im_pane_g3_ParamLimits

0x2223,	// (0x00029c0e) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x00037647) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x00037647) list_single_2graphic_im_pane_g

0x41e9,	// (0x0002bbd4) list_single_2graphic_im_pane_t1_ParamLimits

0x41e9,	// (0x0002bbd4) list_single_2graphic_im_pane_t1

0x1e0c,	// (0x000297f7) list_single_graphic_2heading_pane_fp_ParamLimits

0x1e0c,	// (0x000297f7) list_single_graphic_2heading_pane_fp

0x8dee,	// (0x000307d9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x8dee,	// (0x000307d9) list_single_graphic_2heading_pane_fp_g1

0x1e1f,	// (0x0002980a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x1e1f,	// (0x0002980a) list_single_graphic_2heading_pane_fp_g2

0xa6e1,	// (0x000320cc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xa6e1,	// (0x000320cc) list_single_graphic_2heading_pane_fp_g3

0xa6ed,	// (0x000320d8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xa6ed,	// (0x000320d8) list_single_graphic_2heading_pane_fp_g4

0x1e2b,	// (0x00029816) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x1e2b,	// (0x00029816) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00037575) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00037575) list_single_graphic_2heading_pane_fp_g

0x8f37,	// (0x00030922) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8f37,	// (0x00030922) list_single_graphic_2heading_pane_fp_t1

0x8e26,	// (0x00030811) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x8e26,	// (0x00030811) list_single_graphic_2heading_pane_fp_t2

0x8f4d,	// (0x00030938) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8f4d,	// (0x00030938) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x00037650) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x00037650) list_single_graphic_2heading_pane_fp_t

0xeaca,	// (0x000364b5) fep_hwr_write_pane_g5_ParamLimits

0xeaca,	// (0x000364b5) fep_hwr_write_pane_g5

0xead6,	// (0x000364c1) fep_hwr_write_pane_g6_ParamLimits

0xead6,	// (0x000364c1) fep_hwr_write_pane_g6

0x2086,	// (0x00029a71) eswt_shell_pane_ParamLimits

0xcdbe,	// (0x000347a9) bg_popup_window_pane_cp18_ParamLimits

0xddf6,	// (0x000357e1) heading_pane_cp70

0x217e,	// (0x00029b69) popup_eswt_tasktip_window_t1_ParamLimits

0xf0ca,	// (0x00036ab5) aid_touch_tab_arrow_left

0xf0d9,	// (0x00036ac4) aid_touch_tab_arrow_right

0xeb26,	// (0x00036511) title_pane_g3_ParamLimits

0xeb26,	// (0x00036511) title_pane_g3

0xbedd,	// (0x000338c8) set_value_pane_g1

0x9efe,	// (0x000318e9) popup_toolbar_trans_pane_ParamLimits

0x21cb,	// (0x00029bb6) aid_size_cell_tb_trans_pane_ParamLimits

0xbf15,	// (0x00033900) bg_tb_trans_pane_ParamLimits

0x21dd,	// (0x00029bc8) grid_tb_trans_pane_ParamLimits

0xba91,	// (0x0003347c) cont_note_pane_ParamLimits

0xba91,	// (0x0003347c) cont_note_pane

0xbd29,	// (0x00033714) cont_snote2_single_text_pane_ParamLimits

0xbd29,	// (0x00033714) cont_snote2_single_text_pane

0xbd29,	// (0x00033714) cont_snote2_single_graphic_pane_ParamLimits

0xbd29,	// (0x00033714) cont_snote2_single_graphic_pane

0xd293,	// (0x00034c7e) cont_note_wait_pane_ParamLimits

0xd293,	// (0x00034c7e) cont_note_wait_pane

0xd293,	// (0x00034c7e) cont_note_image_pane_ParamLimits

0xd293,	// (0x00034c7e) cont_note_image_pane

0x2243,	// (0x00029c2e) popup_note2_window_g1_ParamLimits

0x2243,	// (0x00029c2e) popup_note2_window_g1

0x2274,	// (0x00029c5f) popup_note2_window_t1_ParamLimits

0x2274,	// (0x00029c5f) popup_note2_window_t1

0x22b9,	// (0x00029ca4) popup_note2_window_t2_ParamLimits

0x22b9,	// (0x00029ca4) popup_note2_window_t2

0x22fe,	// (0x00029ce9) popup_note2_window_t3_ParamLimits

0x22fe,	// (0x00029ce9) popup_note2_window_t3

0x2343,	// (0x00029d2e) popup_note2_window_t4_ParamLimits

0x2343,	// (0x00029d2e) popup_note2_window_t4

0xbb15,	// (0x00033500) popup_note2_window_t5_ParamLimits

0xbb15,	// (0x00033500) popup_note2_window_t5

0x0004,

0xfc71,	// (0x0003765c) popup_note2_window_t_ParamLimits

0xfc71,	// (0x0003765c) popup_note2_window_t

0x2372,	// (0x00029d5d) popup_note2_image_window_g1_ParamLimits

0x2372,	// (0x00029d5d) popup_note2_image_window_g1

0x237e,	// (0x00029d69) popup_note2_image_window_g2_ParamLimits

0x237e,	// (0x00029d69) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x00037667) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x00037667) popup_note2_image_window_g

0x2390,	// (0x00029d7b) popup_note2_image_window_t1_ParamLimits

0x2390,	// (0x00029d7b) popup_note2_image_window_t1

0x23a8,	// (0x00029d93) popup_note2_image_window_t2_ParamLimits

0x23a8,	// (0x00029d93) popup_note2_image_window_t2

0x23c0,	// (0x00029dab) popup_note2_image_window_t3_ParamLimits

0x23c0,	// (0x00029dab) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x0003766c) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x0003766c) popup_note2_image_window_t

0xd2a1,	// (0x00034c8c) popup_note2_wait_window_g1_ParamLimits

0xd2a1,	// (0x00034c8c) popup_note2_wait_window_g1

0xd2ad,	// (0x00034c98) popup_note2_wait_window_g2_ParamLimits

0xd2ad,	// (0x00034c98) popup_note2_wait_window_g2

0xd2b9,	// (0x00034ca4) popup_note2_wait_window_g3_ParamLimits

0xd2b9,	// (0x00034ca4) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x00037233) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x00037233) popup_note2_wait_window_g

0x23dc,	// (0x00029dc7) popup_note2_wait_window_t1_ParamLimits

0x23dc,	// (0x00029dc7) popup_note2_wait_window_t1

0x23fa,	// (0x00029de5) popup_note2_wait_window_t2_ParamLimits

0x23fa,	// (0x00029de5) popup_note2_wait_window_t2

0x2418,	// (0x00029e03) popup_note2_wait_window_t3_ParamLimits

0x2418,	// (0x00029e03) popup_note2_wait_window_t3

0x242a,	// (0x00029e15) popup_note2_wait_window_t4_ParamLimits

0x242a,	// (0x00029e15) popup_note2_wait_window_t4

0x0003,

0xfc88,	// (0x00037673) popup_note2_wait_window_t_ParamLimits

0xfc88,	// (0x00037673) popup_note2_wait_window_t

0x243c,	// (0x00029e27) wait_bar2_pane_ParamLimits

0x243c,	// (0x00029e27) wait_bar2_pane

0x2454,	// (0x00029e3f) popup_snote2_single_text_window_g1_ParamLimits

0x2454,	// (0x00029e3f) popup_snote2_single_text_window_g1

0x247c,	// (0x00029e67) popup_snote2_single_text_window_t1_ParamLimits

0x247c,	// (0x00029e67) popup_snote2_single_text_window_t1

0x24c8,	// (0x00029eb3) popup_snote2_single_text_window_t2_ParamLimits

0x24c8,	// (0x00029eb3) popup_snote2_single_text_window_t2

0x2514,	// (0x00029eff) popup_snote2_single_text_window_t3_ParamLimits

0x2514,	// (0x00029eff) popup_snote2_single_text_window_t3

0x2555,	// (0x00029f40) popup_snote2_single_text_window_t4_ParamLimits

0x2555,	// (0x00029f40) popup_snote2_single_text_window_t4

0x258b,	// (0x00029f76) popup_snote2_single_text_window_t5_ParamLimits

0x258b,	// (0x00029f76) popup_snote2_single_text_window_t5

0x0004,

0xfc91,	// (0x0003767c) popup_snote2_single_text_window_t_ParamLimits

0xfc91,	// (0x0003767c) popup_snote2_single_text_window_t

0x25b6,	// (0x00029fa1) popup_snote2_single_graphic_window_g1_ParamLimits

0x25b6,	// (0x00029fa1) popup_snote2_single_graphic_window_g1

0x25de,	// (0x00029fc9) popup_snote2_single_graphic_window_g2_ParamLimits

0x25de,	// (0x00029fc9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9c,	// (0x00037687) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9c,	// (0x00037687) popup_snote2_single_graphic_window_g

0x2606,	// (0x00029ff1) popup_snote2_single_graphic_window_t1_ParamLimits

0x2606,	// (0x00029ff1) popup_snote2_single_graphic_window_t1

0x2652,	// (0x0002a03d) popup_snote2_single_graphic_window_t2_ParamLimits

0x2652,	// (0x0002a03d) popup_snote2_single_graphic_window_t2

0x2514,	// (0x00029eff) popup_snote2_single_graphic_window_t3_ParamLimits

0x2514,	// (0x00029eff) popup_snote2_single_graphic_window_t3

0x2555,	// (0x00029f40) popup_snote2_single_graphic_window_t4_ParamLimits

0x2555,	// (0x00029f40) popup_snote2_single_graphic_window_t4

0x258b,	// (0x00029f76) popup_snote2_single_graphic_window_t5_ParamLimits

0x258b,	// (0x00029f76) popup_snote2_single_graphic_window_t5

0x0004,

0xfca1,	// (0x0003768c) popup_snote2_single_graphic_window_t_ParamLimits

0xfca1,	// (0x0003768c) popup_snote2_single_graphic_window_t

0xe792,	// (0x0003617d) clock_nsta_pane_cp2_t1

0xe792,	// (0x0003617d) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x000374b3) clock_nsta_pane_cp2_t

0x86d6,	// (0x000300c1) form_field_data_wide_pane_g1_ParamLimits

0xbf23,	// (0x0003390e) form_field_data_wide_pane_g2_ParamLimits

0xbf23,	// (0x0003390e) form_field_data_wide_pane_g2

0xbf2f,	// (0x0003391a) form_field_data_wide_pane_g3_ParamLimits

0xbf2f,	// (0x0003391a) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00037066) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00037066) form_field_data_wide_pane_g

0x04c7,	// (0x00027eb2) grid_touch_3_pane_ParamLimits

0x04c7,	// (0x00027eb2) grid_touch_3_pane

0x421a,	// (0x0002bc05) cell_touch_3_pane_ParamLimits

0x421a,	// (0x0002bc05) cell_touch_3_pane

0xea3f,	// (0x0003642a) cell_touch_3_pane_g1

0xea3f,	// (0x0003642a) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x00037538) cell_touch_3_pane_g

0xbb47,	// (0x00033532) cont_query_data_pane

0xbb4f,	// (0x0003353a) cont_query_data_pane_cp1

0x269e,	// (0x0002a089) button_value_adjust_pane_cp7

0x26a6,	// (0x0002a091) query_popup_pane_cp3

0xc4ac,	// (0x00033e97) bg_popup_sub_pane_cp22_ParamLimits

0x9760,	// (0x0003114b) navi_navi_volume_pane_cp2

0x9778,	// (0x00031163) popup_side_volume_key_window_g2

0x9784,	// (0x0003116f) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x000370fc) popup_side_volume_key_window_g

0x979e,	// (0x00031189) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00037103) popup_side_volume_key_window_t

0xc750,	// (0x0003413b) popup_side_volume_key_window_ParamLimits

0x835b,	// (0x0002fd46) list_double_graphic_pane_g4_ParamLimits

0x835b,	// (0x0002fd46) list_double_graphic_pane_g4

0x8ad2,	// (0x000304bd) list_single_2heading_msg_pane_ParamLimits

0x8ad2,	// (0x000304bd) list_single_2heading_msg_pane

0x8f6b,	// (0x00030956) list_single_2heading_msg_pane_g1_ParamLimits

0x8f6b,	// (0x00030956) list_single_2heading_msg_pane_g1

0x8f77,	// (0x00030962) list_single_2heading_msg_pane_g2_ParamLimits

0x8f77,	// (0x00030962) list_single_2heading_msg_pane_g2

0x8f83,	// (0x0003096e) list_single_2heading_msg_pane_g3_ParamLimits

0x8f83,	// (0x0003096e) list_single_2heading_msg_pane_g3

0x8f8f,	// (0x0003097a) list_single_2heading_msg_pane_g4_ParamLimits

0x8f8f,	// (0x0003097a) list_single_2heading_msg_pane_g4

0x0003,

0xfcac,	// (0x00037697) list_single_2heading_msg_pane_g_ParamLimits

0xfcac,	// (0x00037697) list_single_2heading_msg_pane_g

0x8fa7,	// (0x00030992) list_single_2heading_msg_pane_t1_ParamLimits

0x8fa7,	// (0x00030992) list_single_2heading_msg_pane_t1

0x8fcf,	// (0x000309ba) list_single_2heading_msg_pane_t2_ParamLimits

0x8fcf,	// (0x000309ba) list_single_2heading_msg_pane_t2

0x8ffe,	// (0x000309e9) list_single_2heading_msg_pane_t3_ParamLimits

0x8ffe,	// (0x000309e9) list_single_2heading_msg_pane_t3

0x9037,	// (0x00030a22) list_single_2heading_msg_pane_t4_ParamLimits

0x9037,	// (0x00030a22) list_single_2heading_msg_pane_t4

0x0003,

0xfcb5,	// (0x000376a0) list_single_2heading_msg_pane_t_ParamLimits

0xfcb5,	// (0x000376a0) list_single_2heading_msg_pane_t

0xb8fc,	// (0x000332e7) title_pane_g4_ParamLimits

0xb8fc,	// (0x000332e7) title_pane_g4

0x9576,	// (0x00030f61) title_pane_stacon_g3_ParamLimits

0x9576,	// (0x00030f61) title_pane_stacon_g3

0x2237,	// (0x00029c22) list_single_2graphic_im_pane_g4_ParamLimits

0x2237,	// (0x00029c22) list_single_2graphic_im_pane_g4

0xdc32,	// (0x0003561d) popup_side_volume_key_window_cp

0xe0f1,	// (0x00035adc) main_idle_act2_pane_t1

0x9fe6,	// (0x000319d1) toolbar_button_pane_g10

0xed6a,	// (0x00036755) popup_toolbar_window_cp1

0xe783,	// (0x0003616e) clock_nsta_pane_cp_t1

0xe783,	// (0x0003616e) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x000374ae) clock_nsta_pane_cp_t

0x9760,	// (0x0003114b) navi_navi_volume_pane_cp2_ParamLimits

0x976c,	// (0x00031157) popup_side_volume_key_window_g1_ParamLimits

0x9778,	// (0x00031163) popup_side_volume_key_window_g2_ParamLimits

0x9784,	// (0x0003116f) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x000370fc) popup_side_volume_key_window_g_ParamLimits

0xa4a4,	// (0x00031e8f) fep_hwr_aid_pane

0x5e2f,	// (0x0002d81a) bg_fep_hwr_top_pane_g4_ParamLimits

0xea9a,	// (0x00036485) fep_hwr_top_pane_g1_ParamLimits

0xeaac,	// (0x00036497) fep_hwr_top_pane_g2_ParamLimits

0xa557,	// (0x00031f42) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x00037503) fep_hwr_top_pane_g_ParamLimits

0xa56c,	// (0x00031f57) fep_hwr_top_text_pane_ParamLimits

0xd9f5,	// (0x000353e0) aid_touch_tab_arrow_arrow_2

0xd9fe,	// (0x000353e9) aid_touch_tab_arrow_left_2

0xa4b8,	// (0x00031ea3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xa4eb,	// (0x00031ed6) fep_hwr_prediction_pane

0x1a7c,	// (0x00029467) fep_vkb_prediction_pane

0x3fcb,	// (0x0002b9b6) fep_vkb_side_pane_g3_ParamLimits

0x3fcb,	// (0x0002b9b6) fep_vkb_side_pane_g3

0x1b0a,	// (0x000294f5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1e7f,	// (0x0002986a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1e8c,	// (0x00029877) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x000375ad) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x26b7,	// (0x0002a0a2) fep_hwr_prediction_pane_g1

0xa89b,	// (0x00032286) fep_hwr_prediction_pane_g2

0xde86,	// (0x00035871) fep_hwr_prediction_pane_g3

0xa8a3,	// (0x0003228e) fep_hwr_prediction_pane_g4

0x0003,

0xfcbe,	// (0x000376a9) fep_hwr_prediction_pane_g

0x26b7,	// (0x0002a0a2) fep_vkb_prediction_pane_g1

0x26c1,	// (0x0002a0ac) fep_vkb_prediction_pane_g2

0x26c9,	// (0x0002a0b4) fep_vkb_prediction_pane_g3

0x26d1,	// (0x0002a0bc) fep_vkb_prediction_pane_g4

0x0003,

0xfcc7,	// (0x000376b2) fep_vkb_prediction_pane_g

0xa29e,	// (0x00031c89) slider_set_pane_g3

0xa2b2,	// (0x00031c9d) slider_set_pane_g4

0xa2ca,	// (0x00031cb5) slider_set_pane_g5

0xa29e,	// (0x00031c89) slider_set_pane_g6

0xa2e0,	// (0x00031ccb) slider_set_pane_g7

0xde75,	// (0x00035860) slider_form_pane_g3

0xde7e,	// (0x00035869) slider_form_pane_g4

0xde86,	// (0x00035871) slider_form_pane_g5

0xde75,	// (0x00035860) slider_form_pane_g6

0x01eb,	// (0x00027bd6) slider_form_pane_g7

0xe32b,	// (0x00035d16) slider_set_pane_vc_g3

0xe334,	// (0x00035d1f) slider_set_pane_vc_g4

0xe33d,	// (0x00035d28) slider_set_pane_vc_g5

0xe32b,	// (0x00035d16) slider_set_pane_vc_g6

0xe346,	// (0x00035d31) slider_set_pane_vc_g7

0xe4de,	// (0x00035ec9) slider_form_pane_vc_g1

0xe4e7,	// (0x00035ed2) slider_form_pane_vc_g2

0xe4f0,	// (0x00035edb) slider_form_pane_vc_g3

0xe4de,	// (0x00035ec9) slider_form_pane_vc_g4

0xe4f9,	// (0x00035ee4) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x00037480) slider_form_pane_vc_g

0xb8de,	// (0x000332c9) main_idle_act3_pane

0x26d9,	// (0x0002a0c4) ai3_links_pane

0x425b,	// (0x0002bc46) popup_ai3_data_window_ParamLimits

0x425b,	// (0x0002bc46) popup_ai3_data_window

0xb8de,	// (0x000332c9) grid_ai3_links_pane

0x4273,	// (0x0002bc5e) cell_ai3_links_pane_ParamLimits

0x4273,	// (0x0002bc5e) cell_ai3_links_pane

0x26e2,	// (0x0002a0cd) bg_popup_sub_pane_cp11

0x26ef,	// (0x0002a0da) cell_ai3_links_pane_g1

0xb8de,	// (0x000332c9) bg_popup_sub_pane_cp12

0x2714,	// (0x0002a0ff) heading_ai3_data_pane

0x271c,	// (0x0002a107) list_ai3_gene_pane

0x2728,	// (0x0002a113) popup_ai3_data_window_g1

0x2730,	// (0x0002a11b) heading_ai3_data_pane_g1

0x2738,	// (0x0002a123) heading_ai3_data_pane_t1

0x2746,	// (0x0002a131) list_double_ai3_gene_pane_ParamLimits

0x2746,	// (0x0002a131) list_double_ai3_gene_pane

0x2753,	// (0x0002a13e) list_single_ai3_gene_pane_ParamLimits

0x2753,	// (0x0002a13e) list_single_ai3_gene_pane

0xea04,	// (0x000363ef) list_highlight_pane_cp7_ParamLimits

0xea04,	// (0x000363ef) list_highlight_pane_cp7

0x2760,	// (0x0002a14b) list_single_a13_gene_pane_t1_ParamLimits

0x2760,	// (0x0002a14b) list_single_a13_gene_pane_t1

0x2777,	// (0x0002a162) list_single_ai3_gene_pane_g1

0x2780,	// (0x0002a16b) list_single_ai3_gene_pane_g2

0x0001,

0xfcd0,	// (0x000376bb) list_single_ai3_gene_pane_g

0x2788,	// (0x0002a173) list_double_ai3_gene_pane_g1_ParamLimits

0x2788,	// (0x0002a173) list_double_ai3_gene_pane_g1

0x2794,	// (0x0002a17f) list_double_ai3_gene_pane_t1_ParamLimits

0x2794,	// (0x0002a17f) list_double_ai3_gene_pane_t1

0x27b0,	// (0x0002a19b) list_double_ai3_gene_pane_t2_ParamLimits

0x27b0,	// (0x0002a19b) list_double_ai3_gene_pane_t2

0x27c6,	// (0x0002a1b1) list_double_ai3_gene_pane_t3_ParamLimits

0x27c6,	// (0x0002a1b1) list_double_ai3_gene_pane_t3

0x0002,

0xfcd5,	// (0x000376c0) list_double_ai3_gene_pane_t_ParamLimits

0xfcd5,	// (0x000376c0) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8f63,	// (0x0003094e) aid_size_min_col_2

0x4247,	// (0x0002bc32) aid_size_min_msg_ParamLimits

0x4247,	// (0x0002bc32) aid_size_min_msg

0x3fdf,	// (0x0002b9ca) fep_vkb_top_text_pane_g2_ParamLimits

0x3fdf,	// (0x0002b9ca) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x00037533) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x00037533) fep_vkb_top_text_pane_g

0xb8de,	// (0x000332c9) main_hc_apps_shell_pane

0x27e3,	// (0x0002a1ce) grid_hc_apps_pane_ParamLimits

0x27e3,	// (0x0002a1ce) grid_hc_apps_pane

0x27f2,	// (0x0002a1dd) list_hc_apps_pane

0x27fa,	// (0x0002a1e5) scroll_pane_cp37_ParamLimits

0x27fa,	// (0x0002a1e5) scroll_pane_cp37

0x4287,	// (0x0002bc72) cell_hc_apps_pane_ParamLimits

0x4287,	// (0x0002bc72) cell_hc_apps_pane

0x4315,	// (0x0002bd00) cell_hc_apps_pane_g1_ParamLimits

0x4315,	// (0x0002bd00) cell_hc_apps_pane_g1

0x2806,	// (0x0002a1f1) cell_hc_apps_pane_g2_ParamLimits

0x2806,	// (0x0002a1f1) cell_hc_apps_pane_g2

0x2822,	// (0x0002a20d) cell_hc_apps_pane_g3_ParamLimits

0x2822,	// (0x0002a20d) cell_hc_apps_pane_g3

0x0002,

0xfcdc,	// (0x000376c7) cell_hc_apps_pane_g_ParamLimits

0xfcdc,	// (0x000376c7) cell_hc_apps_pane_g

0x4342,	// (0x0002bd2d) cell_hc_apps_pane_t1_ParamLimits

0x4342,	// (0x0002bd2d) cell_hc_apps_pane_t1

0xba91,	// (0x0003347c) grid_highlight_pane_cp10_ParamLimits

0xba91,	// (0x0003347c) grid_highlight_pane_cp10

0x4380,	// (0x0002bd6b) list_single_hc_apps_pane_ParamLimits

0x4380,	// (0x0002bd6b) list_single_hc_apps_pane

0x43ac,	// (0x0002bd97) list_single_hc_apps_pane_g1

0xa8ab,	// (0x00032296) list_single_hc_apps_pane_g2

0x0001,

0xfce3,	// (0x000376ce) list_single_hc_apps_pane_g

0xa8c4,	// (0x000322af) list_single_hc_apps_pane_g2_copy1

0x905c,	// (0x00030a47) list_single_hc_apps_pane_t1

0xb940,	// (0x0003332b) bg_set_opt_pane_cp_ParamLimits

0x9439,	// (0x00030e24) setting_slider_pane_t1_ParamLimits

0x9452,	// (0x00030e3d) setting_slider_pane_t2_ParamLimits

0x946b,	// (0x00030e56) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00036f49) setting_slider_pane_t_ParamLimits

0x9482,	// (0x00030e6d) slider_set_pane_ParamLimits

0x99ec,	// (0x000313d7) control_pane_g5_ParamLimits

0x99ec,	// (0x000313d7) control_pane_g5

0xde3d,	// (0x00035828) slider_set_pane_g1_ParamLimits

0xa292,	// (0x00031c7d) slider_set_pane_g2_ParamLimits

0xa29e,	// (0x00031c89) slider_set_pane_g3_ParamLimits

0xa2b2,	// (0x00031c9d) slider_set_pane_g4_ParamLimits

0xa2ca,	// (0x00031cb5) slider_set_pane_g5_ParamLimits

0xa29e,	// (0x00031c89) slider_set_pane_g6_ParamLimits

0xa2e0,	// (0x00031ccb) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003734f) slider_set_pane_g_ParamLimits

0xc829,	// (0x00034214) navi_icon_text_pane_ParamLimits

0xf0a4,	// (0x00036a8f) aid_fill_nsta_2_ParamLimits

0xf0ca,	// (0x00036ab5) aid_touch_tab_arrow_left_ParamLimits

0xf0d9,	// (0x00036ac4) aid_touch_tab_arrow_right_ParamLimits

0xf144,	// (0x00036b2f) clock_nsta_pane_ParamLimits

0xd9d7,	// (0x000353c2) navi_icon_pane_g1_ParamLimits

0xd9e3,	// (0x000353ce) navi_text_pane_t1_ParamLimits

0xe7d1,	// (0x000361bc) navi_icon_text_pane_g1_ParamLimits

0xe7dd,	// (0x000361c8) navi_icon_text_pane_t1_ParamLimits

0x43ac,	// (0x0002bd97) list_single_hc_apps_pane_g1_ParamLimits

0xa8ab,	// (0x00032296) list_single_hc_apps_pane_g2_ParamLimits

0xfce3,	// (0x000376ce) list_single_hc_apps_pane_g_ParamLimits

0xa8c4,	// (0x000322af) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x905c,	// (0x00030a47) list_single_hc_apps_pane_t1_ParamLimits

0x936b,	// (0x00030d56) popup_toolbar2_fixed_window_ParamLimits

0x936b,	// (0x00030d56) popup_toolbar2_fixed_window

0x9ef6,	// (0x000318e1) popup_toolbar2_float_window

0xb8de,	// (0x000332c9) bg_popup_sub_pane_cp27

0x2844,	// (0x0002a22f) grid_toolbar2_float_pane

0xb8de,	// (0x000332c9) bg_popup_sub_pane_cp26

0x2844,	// (0x0002a22f) grid_toolbar2_fixed_pane

0x43c5,	// (0x0002bdb0) cell_toolbar2_fixed_pane_ParamLimits

0x43c5,	// (0x0002bdb0) cell_toolbar2_fixed_pane

0x43d6,	// (0x0002bdc1) cell_toolbar2_fixed_pane_g1

0x284c,	// (0x0002a237) toolbar2_fixed_button_pane

0xcd32,	// (0x0003471d) toolbar2_fixed_button_pane_g1

0xcd3a,	// (0x00034725) toolbar2_fixed_button_pane_g2

0xcd42,	// (0x0003472d) toolbar2_fixed_button_pane_g3

0xcd4a,	// (0x00034735) toolbar2_fixed_button_pane_g4

0xcd52,	// (0x0003473d) toolbar2_fixed_button_pane_g5

0xcd5a,	// (0x00034745) toolbar2_fixed_button_pane_g6

0xcd62,	// (0x0003474d) toolbar2_fixed_button_pane_g7

0xcd6a,	// (0x00034755) toolbar2_fixed_button_pane_g8

0xcd72,	// (0x0003475d) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00037251) toolbar2_fixed_button_pane_g

0x2854,	// (0x0002a23f) cell_toolbar2_float_pane_ParamLimits

0x2854,	// (0x0002a23f) cell_toolbar2_float_pane

0x2865,	// (0x0002a250) cell_toolbar2_float_pane_g1

0x284c,	// (0x0002a237) toolbar2_fixed_button_pane_cp

0x3f98,	// (0x0002b983) fep_vkb_accented_list_pane_ParamLimits

0x3f98,	// (0x0002b983) fep_vkb_accented_list_pane

0xa6ae,	// (0x00032099) bg_popup_fep_shadow_pane_g9

0xc99b,	// (0x00034386) bg_popup_fep_shadow_pane_cp3

0xc025,	// (0x00033a10) list_accented_list_pane

0x286e,	// (0x0002a259) list_single_accented_list_pane_ParamLimits

0x286e,	// (0x0002a259) list_single_accented_list_pane

0xc99b,	// (0x00034386) list_highlight_pane_cp10

0x287f,	// (0x0002a26a) list_single_accented_list_pane_t1

0x9e60,	// (0x0003184b) popup_slider_window_ParamLimits

0x9e60,	// (0x0003184b) popup_slider_window

0x26ae,	// (0x0002a099) aid_indentation_list_msg

0x4471,	// (0x0002be5c) bg_popup_window_pane_cp19

0x28e5,	// (0x0002a2d0) popup_slider_window_g1

0x2901,	// (0x0002a2ec) popup_slider_window_g2

0x291d,	// (0x0002a308) popup_slider_window_g3

0x0005,

0xfce8,	// (0x000376d3) popup_slider_window_g

0x2939,	// (0x0002a324) popup_slider_window_t1

0x297d,	// (0x0002a368) small_volume_slider_vertical_pane

0xea3f,	// (0x0003642a) small_volume_slider_vertical_pane_g1

0xea3f,	// (0x0003642a) small_volume_slider_vertical_pane_g2

0x2999,	// (0x0002a384) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfa,	// (0x000376e5) small_volume_slider_vertical_pane_g

0x915d,	// (0x00030b48) area_side_right_pane_ParamLimits

0x915d,	// (0x00030b48) area_side_right_pane

0xa8e0,	// (0x000322cb) aid_size_side_button_ParamLimits

0xa8e0,	// (0x000322cb) aid_size_side_button

0xa8f4,	// (0x000322df) grid_sctrl_middle_pane_ParamLimits

0xa8f4,	// (0x000322df) grid_sctrl_middle_pane

0xa90f,	// (0x000322fa) sctrl_sk_bottom_pane

0xa920,	// (0x0003230b) sctrl_sk_top_pane

0xa932,	// (0x0003231d) aid_touch_sctrl_top

0xba91,	// (0x0003347c) bg_sctrl_sk_pane_ParamLimits

0xba91,	// (0x0003347c) bg_sctrl_sk_pane

0xa93f,	// (0x0003232a) sctrl_sk_top_pane_g1

0xa94c,	// (0x00032337) sctrl_sk_top_pane_t1

0xa932,	// (0x0003231d) aid_touch_sctrl_bottom

0xba91,	// (0x0003347c) bg_sctrl_sk_pane_cp_ParamLimits

0xba91,	// (0x0003347c) bg_sctrl_sk_pane_cp

0xa967,	// (0x00032352) sctrl_sk_bottom_pane_g1

0xa94c,	// (0x00032337) sctrl_sk_bottom_pane_t1

0xa970,	// (0x0003235b) cell_sctrl_middle_pane_ParamLimits

0xa970,	// (0x0003235b) cell_sctrl_middle_pane

0xa98b,	// (0x00032376) aid_touch_sctrl_middle_ParamLimits

0xa98b,	// (0x00032376) aid_touch_sctrl_middle

0xbf15,	// (0x00033900) bg_sctrl_middle_pane_ParamLimits

0xbf15,	// (0x00033900) bg_sctrl_middle_pane

0x1b0a,	// (0x000294f5) cell_sctrl_middle_pane_g1_ParamLimits

0x1b0a,	// (0x000294f5) cell_sctrl_middle_pane_g1

0xa99d,	// (0x00032388) cell_sctrl_middle_pane_g2_ParamLimits

0xa99d,	// (0x00032388) cell_sctrl_middle_pane_g2

0x0001,

0xfd06,	// (0x000376f1) cell_sctrl_middle_pane_g_ParamLimits

0xfd06,	// (0x000376f1) cell_sctrl_middle_pane_g

0xcd32,	// (0x0003471d) bg_sctrl_middle_pane_g1

0xcd3a,	// (0x00034725) bg_sctrl_middle_pane_g2

0xcd42,	// (0x0003472d) bg_sctrl_middle_pane_g3

0xcd4a,	// (0x00034735) bg_sctrl_middle_pane_g4

0xcd52,	// (0x0003473d) bg_sctrl_middle_pane_g5

0xcd5a,	// (0x00034745) bg_sctrl_middle_pane_g6

0xcd62,	// (0x0003474d) bg_sctrl_middle_pane_g7

0xcd6a,	// (0x00034755) bg_sctrl_middle_pane_g8

0x0007,

0xfd0b,	// (0x000376f6) bg_sctrl_middle_pane_g

0xcd72,	// (0x0003475d) bg_sctrl_middle_pane_g8_copy1

0xcd32,	// (0x0003471d) bg_sctrl_sk_pane_g1

0xcd3a,	// (0x00034725) bg_sctrl_sk_pane_g2

0xcd42,	// (0x0003472d) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00037251) bg_sctrl_sk_pane_g

0xbe4b,	// (0x00033836) aid_size_touch_scroll_bar

0xcd4a,	// (0x00034735) bg_sctrl_sk_pane_g4

0xcd52,	// (0x0003473d) bg_sctrl_sk_pane_g5

0xcd5a,	// (0x00034745) bg_sctrl_sk_pane_g6

0xcd62,	// (0x0003474d) bg_sctrl_sk_pane_g7

0xcd6a,	// (0x00034755) bg_sctrl_sk_pane_g8

0xcd72,	// (0x0003475d) bg_sctrl_sk_pane_g9

0x9b79,	// (0x00031564) popup_fep_china_hwr2_fs_candidate_window

0x9b81,	// (0x0003156c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9b81,	// (0x0003156c) popup_fep_china_hwr2_fs_control_window

0x1b0a,	// (0x000294f5) sctrl_sk_top_pane_g2

0x0001,

0xfd01,	// (0x000376ec) sctrl_sk_top_pane_g

0x44eb,	// (0x0002bed6) aid_fep_china_hwr2_fs_cell_ParamLimits

0x44eb,	// (0x0002bed6) aid_fep_china_hwr2_fs_cell

0x44fc,	// (0x0002bee7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x44fc,	// (0x0002bee7) bg_popup_fep_shadow_pane_cp4

0x4513,	// (0x0002befe) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x4513,	// (0x0002befe) bg_popup_fep_shadow_pane_cp5

0x4525,	// (0x0002bf10) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x4525,	// (0x0002bf10) popup_fep_china_hwr2_fs_control_bar_grid

0x4535,	// (0x0002bf20) popup_fep_china_hwr2_fs_control_funtion_grid

0x29a2,	// (0x0002a38d) aid_fep_china_hwr2_fs_candi_cell

0xb8de,	// (0x000332c9) bg_popup_fep_shadow_pane_cp6

0x29ac,	// (0x0002a397) popup_fep_china_hwr2_fs_candidate_grid

0x453d,	// (0x0002bf28) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x453d,	// (0x0002bf28) cell_fep_china_hwr2_fs_funtion_grid

0xea3f,	// (0x0003642a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x29b4,	// (0x0002a39f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x29b4,	// (0x0002a39f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x29c2,	// (0x0002a3ad) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x29c2,	// (0x0002a3ad) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1c,	// (0x00037707) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1c,	// (0x00037707) cell_fep_china_hwr2_fs_funtion_grid_g

0x4555,	// (0x0002bf40) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x4555,	// (0x0002bf40) cell_fep_china_hwr2_fs_funtion_grid_t1

0x456a,	// (0x0002bf55) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x456a,	// (0x0002bf55) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd21,	// (0x0003770c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd21,	// (0x0003770c) cell_fep_china_hwr2_fs_funtion_grid_t

0x29d8,	// (0x0002a3c3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x29e0,	// (0x0002a3cb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x29e8,	// (0x0002a3d3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd26,	// (0x00037711) popup_fep_china_hwr2_fs_control_bar_grid_g

0x29f0,	// (0x0002a3db) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x29f0,	// (0x0002a3db) cell_fep_china_hwr2_fs_candidate_grid

0x2a09,	// (0x0002a3f4) popup_fep_china_hwr2_fs_candidate_grid_g20

0x2a11,	// (0x0002a3fc) popup_fep_china_hwr2_fs_candidate_grid_g21

0xea3f,	// (0x0003642a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xea3f,	// (0x0003642a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x00037538) cell_fep_china_hwr2_fs_candidate_grid_g

0x2a19,	// (0x0002a404) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcb83,	// (0x0003456e) clock_nsta_pane_cp_24_ParamLimits

0xcb83,	// (0x0003456e) clock_nsta_pane_cp_24

0xcbeb,	// (0x000345d6) indicator_nsta_pane_cp_24_ParamLimits

0xcbeb,	// (0x000345d6) indicator_nsta_pane_cp_24

0xd8dc,	// (0x000352c7) heading_pane_g1

0x0001,

0xf8cb,	// (0x000372b6) heading_pane_g

0xdf72,	// (0x0003595d) grid_sct_catagory_button_pane

0xdf8e,	// (0x00035979) scroll_pane_cp5_ParamLimits

0xe803,	// (0x000361ee) button_value_adjust_pane_cp5_ParamLimits

0xe803,	// (0x000361ee) button_value_adjust_pane_cp5

0xe8a8,	// (0x00036293) form2_midp_time_pane_ParamLimits

0x2a27,	// (0x0002a412) cell_sct_catagory_button_pane_ParamLimits

0x2a27,	// (0x0002a412) cell_sct_catagory_button_pane

0xea04,	// (0x000363ef) bg_button_pane_cp01_ParamLimits

0xea04,	// (0x000363ef) bg_button_pane_cp01

0xea3f,	// (0x0003642a) cell_sct_catagory_button_pane_g1

0x9e97,	// (0x00031882) popup_tb_extension_window

0x4586,	// (0x0002bf71) aid_size_cell_ext_ParamLimits

0x4586,	// (0x0002bf71) aid_size_cell_ext

0xba91,	// (0x0003347c) bg_tb_trans_pane_cp1_ParamLimits

0xba91,	// (0x0003347c) bg_tb_trans_pane_cp1

0x45a3,	// (0x0002bf8e) grid_tb_ext_pane_ParamLimits

0x45a3,	// (0x0002bf8e) grid_tb_ext_pane

0x45c7,	// (0x0002bfb2) cell_tb_ext_pane_ParamLimits

0x45c7,	// (0x0002bfb2) cell_tb_ext_pane

0x45dc,	// (0x0002bfc7) cell_tb_ext_pane_g1_ParamLimits

0x45dc,	// (0x0002bfc7) cell_tb_ext_pane_g1

0x2a39,	// (0x0002a424) cell_tb_ext_pane_t1

0xba91,	// (0x0003347c) list_highlight_pane_cp11_ParamLimits

0xba91,	// (0x0003347c) list_highlight_pane_cp11

0x938a,	// (0x00030d75) popup_uni_indicator_window_ParamLimits

0x938a,	// (0x00030d75) popup_uni_indicator_window

0xbf15,	// (0x00033900) bg_popup_sub_pane_cp14

0x2a54,	// (0x0002a43f) list_uniindi_pane

0x2a60,	// (0x0002a44b) uniindi_top_pane

0xba91,	// (0x0003347c) bg_uniindi_top_pane

0x2a7f,	// (0x0002a46a) uniindi_top_pane_g1

0x2a95,	// (0x0002a480) uniindi_top_pane_g2

0x0003,

0xfd2d,	// (0x00037718) uniindi_top_pane_g

0x2abf,	// (0x0002a4aa) uniindi_top_pane_t1

0x2ae9,	// (0x0002a4d4) list_single_uniindi_pane_ParamLimits

0x2ae9,	// (0x0002a4d4) list_single_uniindi_pane

0xea3f,	// (0x0003642a) bg_uniindi_top_pane_g1

0x2afb,	// (0x0002a4e6) list_single_uniindi_pane_g1

0x2b0e,	// (0x0002a4f9) list_single_uniindi_pane_t1

0xb8de,	// (0x000332c9) control_bg_pane

0x2b33,	// (0x0002a51e) bg_sctrl_sk_pane_cp1

0x2b3c,	// (0x0002a527) bg_sctrl_sk_pane_cp2

0x2b45,	// (0x0002a530) control_bg_pane_g1

0x2b4e,	// (0x0002a539) control_bg_pane_g2

0x0001,

0xfd36,	// (0x00037721) control_bg_pane_g

0xe745,	// (0x00036130) cell_indicator_nsta_pane_g1_ParamLimits

0x0504,	// (0x00027eef) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x0003749c) cell_indicator_nsta_pane_g_ParamLimits

0x8dc4,	// (0x000307af) form2_midp_time_pane_t1_ParamLimits

0xbd29,	// (0x00033714) main_idle_act4_pane_ParamLimits

0xbd29,	// (0x00033714) main_idle_act4_pane

0x9e97,	// (0x00031882) popup_tb_extension_window_ParamLimits

0x45bb,	// (0x0002bfa6) tb_ext_find_pane_ParamLimits

0x45bb,	// (0x0002bfa6) tb_ext_find_pane

0x2b57,	// (0x0002a542) ai_gene_pane_1_cp1

0xca2f,	// (0x0003441a) ai_gene_pane_2_cp1

0x2b5f,	// (0x0002a54a) list_single_idle_plugin_calendar_pane

0x2b68,	// (0x0002a553) list_single_idle_plugin_notification_pane

0x2b71,	// (0x0002a55c) list_single_idle_plugin_player_pane

0x45f9,	// (0x0002bfe4) list_single_idle_plugin_shortcut_pane_ParamLimits

0x45f9,	// (0x0002bfe4) list_single_idle_plugin_shortcut_pane

0x4615,	// (0x0002c000) main_idle_act4_pane_t1

0x4627,	// (0x0002c012) main_idle_act4_pane_t2

0x0001,

0xfd3b,	// (0x00037726) main_idle_act4_pane_t

0x4639,	// (0x0002c024) middle_sk_idle_act4_pane_ParamLimits

0x4639,	// (0x0002c024) middle_sk_idle_act4_pane

0x464f,	// (0x0002c03a) popup_clock_digital_analogue_window_cp2

0x4669,	// (0x0002c054) shortcut_wheel_idle_act4_pane_ParamLimits

0x4669,	// (0x0002c054) shortcut_wheel_idle_act4_pane

0xea3f,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g1

0xea3f,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g2

0xea3f,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g3

0xea3f,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g4

0xea3f,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g5

0x2b7a,	// (0x0002a565) shortcut_wheel_idle_act4_pane_g6

0x2b82,	// (0x0002a56d) shortcut_wheel_idle_act4_pane_g7

0x2b8a,	// (0x0002a575) shortcut_wheel_idle_act4_pane_g8

0x2b92,	// (0x0002a57d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd40,	// (0x0003772b) shortcut_wheel_idle_act4_pane_g

0x1b0a,	// (0x000294f5) middle_sk_idle_act4_pane_g1_ParamLimits

0x1b0a,	// (0x000294f5) middle_sk_idle_act4_pane_g1

0x46d9,	// (0x0002c0c4) middle_sk_idle_act4_pane_g2_ParamLimits

0x46d9,	// (0x0002c0c4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd63,	// (0x0003774e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd63,	// (0x0003774e) middle_sk_idle_act4_pane_g

0x46e5,	// (0x0002c0d0) middle_sk_idle_act4_pane_t1_ParamLimits

0x46e5,	// (0x0002c0d0) middle_sk_idle_act4_pane_t1

0x4702,	// (0x0002c0ed) grid_ai_shortcut_pane_ParamLimits

0x4702,	// (0x0002c0ed) grid_ai_shortcut_pane

0x471b,	// (0x0002c106) list_highlight_pane_cp16_ParamLimits

0x471b,	// (0x0002c106) list_highlight_pane_cp16

0x4728,	// (0x0002c113) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x4728,	// (0x0002c113) list_single_idle_plugin_shortcut_pane_g1

0x4734,	// (0x0002c11f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x4734,	// (0x0002c11f) list_single_idle_plugin_shortcut_pane_g2

0x474c,	// (0x0002c137) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x474c,	// (0x0002c137) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd68,	// (0x00037753) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd68,	// (0x00037753) list_single_idle_plugin_shortcut_pane_g

0x475f,	// (0x0002c14a) cell_ai_shortcut_pane_ParamLimits

0x475f,	// (0x0002c14a) cell_ai_shortcut_pane

0x4780,	// (0x0002c16b) cell_ai_shortcut_pane_g1_ParamLimits

0x4780,	// (0x0002c16b) cell_ai_shortcut_pane_g1

0x2b57,	// (0x0002a542) ai_gene_pane_1_cp2

0x2b9a,	// (0x0002a585) ai_gene_pane_2_cp2

0x2ba2,	// (0x0002a58d) list_highlight_pane_cp15

0x2bab,	// (0x0002a596) list_single_idle_plugin_calendar_pane_g1

0x2ba2,	// (0x0002a58d) list_highlight_pane_cp17

0x2bb3,	// (0x0002a59e) list_single_idle_plugin_calendar_pane_g1_copy1

0x2bbb,	// (0x0002a5a6) list_single_idle_plugin_player_pane_g1

0xe17d,	// (0x00035b68) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6f,	// (0x0003775a) list_single_idle_plugin_player_pane_g

0x2bc3,	// (0x0002a5ae) list_single_idle_plugin_player_pane_t1

0x2bd1,	// (0x0002a5bc) list_single_idle_plugin_player_pane_t2

0x2bdf,	// (0x0002a5ca) list_single_idle_plugin_player_pane_t3

0x2bed,	// (0x0002a5d8) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd74,	// (0x0003775f) list_single_idle_plugin_player_pane_t

0x2bfb,	// (0x0002a5e6) wait_bar_pane_cp15

0x2c03,	// (0x0002a5ee) grid_ai_notification_pane

0xe17d,	// (0x00035b68) list_single_idle_plugin_notification_pane_g1

0x47a2,	// (0x0002c18d) cell_ai_notification_pane_ParamLimits

0x47a2,	// (0x0002c18d) cell_ai_notification_pane

0x2c0c,	// (0x0002a5f7) cell_ai_notification_pane_g1

0x2c14,	// (0x0002a5ff) cell_ai_notification_pane_t1

0x47af,	// (0x0002c19a) tb_ext_find_button_pane

0x47b7,	// (0x0002c1a2) tb_ext_find_pane_g1

0x47bf,	// (0x0002c1aa) tb_ext_find_pane_t1

0xc44b,	// (0x00033e36) tb_ext_find_button_pane_g1

0x2c22,	// (0x0002a60d) tb_ext_find_button_pane_g2

0x0001,

0xfd7d,	// (0x00037768) tb_ext_find_button_pane_g

0x4615,	// (0x0002c000) main_idle_act4_pane_t1_ParamLimits

0x4627,	// (0x0002c012) main_idle_act4_pane_t2_ParamLimits

0xfd3b,	// (0x00037726) main_idle_act4_pane_t_ParamLimits

0x464f,	// (0x0002c03a) popup_clock_digital_analogue_window_cp2_ParamLimits

0x465d,	// (0x0002c048) sat_plugin_idle_act4_pane_ParamLimits

0x465d,	// (0x0002c048) sat_plugin_idle_act4_pane

0x47cd,	// (0x0002c1b8) sat_plugin_idle_act4_pane_t1_ParamLimits

0x47cd,	// (0x0002c1b8) sat_plugin_idle_act4_pane_t1

0x47e0,	// (0x0002c1cb) sat_plugin_idle_act4_pane_t2_ParamLimits

0x47e0,	// (0x0002c1cb) sat_plugin_idle_act4_pane_t2

0x47f3,	// (0x0002c1de) sat_plugin_idle_act4_pane_t3_ParamLimits

0x47f3,	// (0x0002c1de) sat_plugin_idle_act4_pane_t3

0x4806,	// (0x0002c1f1) sat_plugin_idle_act4_pane_t4_ParamLimits

0x4806,	// (0x0002c1f1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd82,	// (0x0003776d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd82,	// (0x0003776d) sat_plugin_idle_act4_pane_t

0x92eb,	// (0x00030cd6) popup_battery_window_ParamLimits

0x92eb,	// (0x00030cd6) popup_battery_window

0xba91,	// (0x0003347c) bg_popup_sub_pane_cp25_ParamLimits

0xba91,	// (0x0003347c) bg_popup_sub_pane_cp25

0x2c2b,	// (0x0002a616) popup_battery_window_g1_ParamLimits

0x2c2b,	// (0x0002a616) popup_battery_window_g1

0x2c37,	// (0x0002a622) popup_battery_window_t1_ParamLimits

0x2c37,	// (0x0002a622) popup_battery_window_t1

0x2c49,	// (0x0002a634) popup_battery_window_t2_ParamLimits

0x2c49,	// (0x0002a634) popup_battery_window_t2

0x0001,

0xfd8b,	// (0x00037776) popup_battery_window_t_ParamLimits

0xfd8b,	// (0x00037776) popup_battery_window_t

0xef19,	// (0x00036904) midp_canvas_pane_ParamLimits

0xef75,	// (0x00036960) midp_keypad_pane_ParamLimits

0xef75,	// (0x00036960) midp_keypad_pane

0xcb4e,	// (0x00034539) main_midp_pane_ParamLimits

0xe7a1,	// (0x0003618c) signal_pane_g2_cp_ParamLimits

0x4819,	// (0x0002c204) aid_size_cell_midp_keypad_ParamLimits

0x4819,	// (0x0002c204) aid_size_cell_midp_keypad

0x4833,	// (0x0002c21e) midp_keyp_game_grid_pane_ParamLimits

0x4833,	// (0x0002c21e) midp_keyp_game_grid_pane

0x484d,	// (0x0002c238) midp_keyp_rocker_pane_ParamLimits

0x484d,	// (0x0002c238) midp_keyp_rocker_pane

0x487a,	// (0x0002c265) midp_keyp_sk_left_pane_ParamLimits

0x487a,	// (0x0002c265) midp_keyp_sk_left_pane

0x48d2,	// (0x0002c2bd) midp_keyp_sk_right_pane_ParamLimits

0x48d2,	// (0x0002c2bd) midp_keyp_sk_right_pane

0xb8de,	// (0x000332c9) bg_button_pane_cp03

0x4924,	// (0x0002c30f) midp_keyp_sk_left_pane_g1

0xb8de,	// (0x000332c9) bg_button_pane_cp04

0x4924,	// (0x0002c30f) midp_keyp_sk_right_pane_g1

0xea3f,	// (0x0003642a) midp_keyp_rocker_pane_g1

0x492d,	// (0x0002c318) keyp_game_cell_pane_ParamLimits

0x492d,	// (0x0002c318) keyp_game_cell_pane

0xb8de,	// (0x000332c9) bg_button_pane_cp02

0x493e,	// (0x0002c329) keyp_game_cell_pane_g1

0x9321,	// (0x00030d0c) popup_fep_vkb2_window_ParamLimits

0x9321,	// (0x00030d0c) popup_fep_vkb2_window

0xa9bb,	// (0x000323a6) aid_size_cell_vkb2_ParamLimits

0xa9bb,	// (0x000323a6) aid_size_cell_vkb2

0xaa0f,	// (0x000323fa) popup_fep_vkb2_window_g1_ParamLimits

0xaa0f,	// (0x000323fa) popup_fep_vkb2_window_g1

0xaa57,	// (0x00032442) vkb2_area_bottom_pane_ParamLimits

0xaa57,	// (0x00032442) vkb2_area_bottom_pane

0xaa8f,	// (0x0003247a) vkb2_area_keypad_pane_ParamLimits

0xaa8f,	// (0x0003247a) vkb2_area_keypad_pane

0xaac7,	// (0x000324b2) vkb2_area_top_pane_ParamLimits

0xaac7,	// (0x000324b2) vkb2_area_top_pane

0xab37,	// (0x00032522) vkb2_top_entry_pane_ParamLimits

0xab37,	// (0x00032522) vkb2_top_entry_pane

0xab61,	// (0x0003254c) vkb2_top_grid_left_pane_ParamLimits

0xab61,	// (0x0003254c) vkb2_top_grid_left_pane

0xab7f,	// (0x0003256a) vkb2_top_grid_right_pane_ParamLimits

0xab7f,	// (0x0003256a) vkb2_top_grid_right_pane

0xab9d,	// (0x00032588) vkb2_cell_keypad_pane_ParamLimits

0xab9d,	// (0x00032588) vkb2_cell_keypad_pane

0xac4e,	// (0x00032639) vkb2_area_bottom_grid_pane_ParamLimits

0xac4e,	// (0x00032639) vkb2_area_bottom_grid_pane

0xac72,	// (0x0003265d) vkb2_area_bottom_pane_g1_ParamLimits

0xac72,	// (0x0003265d) vkb2_area_bottom_pane_g1

0xac96,	// (0x00032681) vkb2_area_bottom_pane_g2_ParamLimits

0xac96,	// (0x00032681) vkb2_area_bottom_pane_g2

0xacc4,	// (0x000326af) vkb2_area_bottom_pane_g3_ParamLimits

0xacc4,	// (0x000326af) vkb2_area_bottom_pane_g3

0x0002,

0xfd90,	// (0x0003777b) vkb2_area_bottom_pane_g_ParamLimits

0xfd90,	// (0x0003777b) vkb2_area_bottom_pane_g

0xad15,	// (0x00032700) vkb2_top_cell_left_pane_ParamLimits

0xad15,	// (0x00032700) vkb2_top_cell_left_pane

0x4947,	// (0x0002c332) vkb2_top_entry_pane_g1_ParamLimits

0x4947,	// (0x0002c332) vkb2_top_entry_pane_g1

0x4955,	// (0x0002c340) vkb2_top_entry_pane_t1_ParamLimits

0x4955,	// (0x0002c340) vkb2_top_entry_pane_t1

0x2c6e,	// (0x0002a659) vkb2_top_entry_pane_t2_ParamLimits

0x2c6e,	// (0x0002a659) vkb2_top_entry_pane_t2

0x2ca0,	// (0x0002a68b) vkb2_top_entry_pane_t3_ParamLimits

0x2ca0,	// (0x0002a68b) vkb2_top_entry_pane_t3

0x0002,

0xfd97,	// (0x00037782) vkb2_top_entry_pane_t_ParamLimits

0xfd97,	// (0x00037782) vkb2_top_entry_pane_t

0xad62,	// (0x0003274d) vkb2_top_grid_right_pane_g1_ParamLimits

0xad62,	// (0x0003274d) vkb2_top_grid_right_pane_g1

0xad78,	// (0x00032763) vkb2_top_grid_right_pane_g2_ParamLimits

0xad78,	// (0x00032763) vkb2_top_grid_right_pane_g2

0xad90,	// (0x0003277b) vkb2_top_grid_right_pane_g3_ParamLimits

0xad90,	// (0x0003277b) vkb2_top_grid_right_pane_g3

0xada8,	// (0x00032793) vkb2_top_grid_right_pane_g4_ParamLimits

0xada8,	// (0x00032793) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9e,	// (0x00037789) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9e,	// (0x00037789) vkb2_top_grid_right_pane_g

0xadbe,	// (0x000327a9) vkb2_top_cell_left_pane_g1

0xadd5,	// (0x000327c0) vkb2_cell_keypad_pane_g1_ParamLimits

0xadd5,	// (0x000327c0) vkb2_cell_keypad_pane_g1

0x2cc4,	// (0x0002a6af) vkb2_cell_keypad_pane_t1_ParamLimits

0x2cc4,	// (0x0002a6af) vkb2_cell_keypad_pane_t1

0xade3,	// (0x000327ce) vkb2_cell_bottom_grid_pane_ParamLimits

0xade3,	// (0x000327ce) vkb2_cell_bottom_grid_pane

0xae1c,	// (0x00032807) vkb2_cell_bottom_grid_pane_g1

0x467d,	// (0x0002c068) aid_call2_pane_cp02

0x4685,	// (0x0002c070) aid_call_pane_cp02

0x468d,	// (0x0002c078) clock_digital_number_pane_cp10

0x4695,	// (0x0002c080) clock_digital_number_pane_cp11

0x469d,	// (0x0002c088) clock_digital_number_pane_cp12

0x46a5,	// (0x0002c090) clock_digital_number_pane_cp13

0x46ad,	// (0x0002c098) clock_digital_separator_pane_cp10

0xc44b,	// (0x00033e36) popup_clock_digital_analogue_window_cp2_g1

0xc44b,	// (0x00033e36) popup_clock_digital_analogue_window_cp2_g2

0x46b5,	// (0x0002c0a0) popup_clock_digital_analogue_window_cp2_g3

0xc44b,	// (0x00033e36) popup_clock_digital_analogue_window_cp2_g4

0x46b5,	// (0x0002c0a0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd53,	// (0x0003773e) popup_clock_digital_analogue_window_cp2_g

0x46bd,	// (0x0002c0a8) popup_clock_digital_analogue_window_cp2_t1

0x46cb,	// (0x0002c0b6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5e,	// (0x00037749) popup_clock_digital_analogue_window_cp2_t

0xea3f,	// (0x0003642a) clock_digital_number_pane_cp10_g1

0xea3f,	// (0x0003642a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00037538) clock_digital_number_pane_cp10_g

0xea3f,	// (0x0003642a) clock_digital_separator_pane_cp10_g1

0xea3f,	// (0x0003642a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00037538) clock_digital_separator_pane_cp10_g

0x2aa1,	// (0x0002a48c) uniindi_top_pane_g3

0x2ab2,	// (0x0002a49d) uniindi_top_pane_g4

0xac08,	// (0x000325f3) vkb2_row_keypad_pane_ParamLimits

0xac08,	// (0x000325f3) vkb2_row_keypad_pane

0xae38,	// (0x00032823) vkb2_cell_t_keypad_pane_ParamLimits

0xae38,	// (0x00032823) vkb2_cell_t_keypad_pane

0xae45,	// (0x00032830) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xae45,	// (0x00032830) vkb2_cell_t_keypad_pane_cp08

0xae55,	// (0x00032840) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xae55,	// (0x00032840) vkb2_cell_t_keypad_pane_cp09

0xae66,	// (0x00032851) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xae66,	// (0x00032851) vkb2_cell_t_keypad_pane_cp01

0xae76,	// (0x00032861) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xae76,	// (0x00032861) vkb2_cell_t_keypad_pane_cp02

0xae86,	// (0x00032871) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xae86,	// (0x00032871) vkb2_cell_t_keypad_pane_cp03

0xae96,	// (0x00032881) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xae96,	// (0x00032881) vkb2_cell_t_keypad_pane_cp04

0xaea6,	// (0x00032891) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xaea6,	// (0x00032891) vkb2_cell_t_keypad_pane_cp05

0xaeb6,	// (0x000328a1) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xaeb6,	// (0x000328a1) vkb2_cell_t_keypad_pane_cp06

0xaec6,	// (0x000328b1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xaec6,	// (0x000328b1) vkb2_cell_t_keypad_pane_cp07

0xaed6,	// (0x000328c1) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xaed6,	// (0x000328c1) vkb2_cell_t_keypad_pane_cp10

0x1b0a,	// (0x000294f5) vkb2_cell_t_keypad_pane_g1

0x2cdb,	// (0x0002a6c6) vkb2_cell_t_keypad_pane_t1

0xb8de,	// (0x000332c9) popup_grid_graphic2_window

0xaeeb,	// (0x000328d6) aid_size_cell_graphic2_ParamLimits

0xaeeb,	// (0x000328d6) aid_size_cell_graphic2

0xaf23,	// (0x0003290e) bg_popup_window_pane_cp21_ParamLimits

0xaf23,	// (0x0003290e) bg_popup_window_pane_cp21

0xaf31,	// (0x0003291c) graphic2_pages_pane_ParamLimits

0xaf31,	// (0x0003291c) graphic2_pages_pane

0xaf6b,	// (0x00032956) grid_graphic2_control_pane_ParamLimits

0xaf6b,	// (0x00032956) grid_graphic2_control_pane

0xafa1,	// (0x0003298c) grid_graphic2_pane_ParamLimits

0xafa1,	// (0x0003298c) grid_graphic2_pane

0xb001,	// (0x000329ec) cell_graphic2_pane

0xb8de,	// (0x000332c9) main_comp_mode_pane

0x271c,	// (0x0002a107) list_ai3_gene_pane_ParamLimits

0x4471,	// (0x0002be5c) bg_popup_window_pane_cp19_ParamLimits

0x288d,	// (0x0002a278) bg_touch_area_indi_pane_ParamLimits

0x288d,	// (0x0002a278) bg_touch_area_indi_pane

0x28a3,	// (0x0002a28e) bg_touch_area_indi_pane_cp01_ParamLimits

0x28a3,	// (0x0002a28e) bg_touch_area_indi_pane_cp01

0x28b9,	// (0x0002a2a4) bg_touch_area_indi_pane_cp02_ParamLimits

0x28b9,	// (0x0002a2a4) bg_touch_area_indi_pane_cp02

0x28cf,	// (0x0002a2ba) bg_touch_area_indi_pane_cp03_ParamLimits

0x28cf,	// (0x0002a2ba) bg_touch_area_indi_pane_cp03

0x28e5,	// (0x0002a2d0) popup_slider_window_g1_ParamLimits

0x2901,	// (0x0002a2ec) popup_slider_window_g2_ParamLimits

0x291d,	// (0x0002a308) popup_slider_window_g3_ParamLimits

0xfce8,	// (0x000376d3) popup_slider_window_g_ParamLimits

0x2939,	// (0x0002a324) popup_slider_window_t1_ParamLimits

0x297d,	// (0x0002a368) small_volume_slider_vertical_pane_ParamLimits

0xb001,	// (0x000329ec) cell_graphic2_pane_ParamLimits

0xb03e,	// (0x00032a29) bg_button_pane_cp10_ParamLimits

0xb03e,	// (0x00032a29) bg_button_pane_cp10

0xb051,	// (0x00032a3c) bg_button_pane_cp11_ParamLimits

0xb051,	// (0x00032a3c) bg_button_pane_cp11

0xb064,	// (0x00032a4f) graphic2_pages_pane_g1_ParamLimits

0xb064,	// (0x00032a4f) graphic2_pages_pane_g1

0xb07f,	// (0x00032a6a) graphic2_pages_pane_g2_ParamLimits

0xb07f,	// (0x00032a6a) graphic2_pages_pane_g2

0x0001,

0xfdac,	// (0x00037797) graphic2_pages_pane_g_ParamLimits

0xfdac,	// (0x00037797) graphic2_pages_pane_g

0xb097,	// (0x00032a82) graphic2_pages_pane_t1_ParamLimits

0xb097,	// (0x00032a82) graphic2_pages_pane_t1

0xb0ad,	// (0x00032a98) cell_graphic2_control_pane_ParamLimits

0xb0ad,	// (0x00032a98) cell_graphic2_control_pane

0xb0c9,	// (0x00032ab4) cell_graphic2_pane_g1_ParamLimits

0xb0c9,	// (0x00032ab4) cell_graphic2_pane_g1

0xb0d6,	// (0x00032ac1) cell_graphic2_pane_g2_ParamLimits

0xb0d6,	// (0x00032ac1) cell_graphic2_pane_g2

0xb0e3,	// (0x00032ace) cell_graphic2_pane_g3_ParamLimits

0xb0e3,	// (0x00032ace) cell_graphic2_pane_g3

0xb0f0,	// (0x00032adb) cell_graphic2_pane_g4_ParamLimits

0xb0f0,	// (0x00032adb) cell_graphic2_pane_g4

0xb0fd,	// (0x00032ae8) cell_graphic2_pane_g5_ParamLimits

0xb0fd,	// (0x00032ae8) cell_graphic2_pane_g5

0x0004,

0xfdb1,	// (0x0003779c) cell_graphic2_pane_g_ParamLimits

0xfdb1,	// (0x0003779c) cell_graphic2_pane_g

0xb118,	// (0x00032b03) cell_graphic2_pane_t1_ParamLimits

0xb118,	// (0x00032b03) cell_graphic2_pane_t1

0xcdbe,	// (0x000347a9) grid_highlight_pane_cp11_ParamLimits

0xcdbe,	// (0x000347a9) grid_highlight_pane_cp11

0xba91,	// (0x0003347c) bg_button_pane_cp05

0xb14f,	// (0x00032b3a) cell_graphic2_control_pane_g1

0xea3f,	// (0x0003642a) bg_touch_area_indi_pane_g1

0x2ced,	// (0x0002a6d8) aid_cmod_rocker_key_size

0x2cf7,	// (0x0002a6e2) aid_cmode_itu_key_size

0x2d01,	// (0x0002a6ec) main_cmode_video_pane

0x2d09,	// (0x0002a6f4) main_comp_mode_itu_pane

0x2d13,	// (0x0002a6fe) main_comp_mode_rocker_pane

0x2d1b,	// (0x0002a706) cell_cmode_rocker_pane_ParamLimits

0x2d1b,	// (0x0002a706) cell_cmode_rocker_pane

0x2d2d,	// (0x0002a718) cell_cmode_itu_pane_ParamLimits

0x2d2d,	// (0x0002a718) cell_cmode_itu_pane

0xbf15,	// (0x00033900) bg_button_pane_cp06_ParamLimits

0xbf15,	// (0x00033900) bg_button_pane_cp06

0x1b0a,	// (0x000294f5) cell_cmode_rocker_pane_g1_ParamLimits

0x1b0a,	// (0x000294f5) cell_cmode_rocker_pane_g1

0x29b4,	// (0x0002a39f) cell_cmode_rocker_pane_g2_ParamLimits

0x29b4,	// (0x0002a39f) cell_cmode_rocker_pane_g2

0x0001,

0xfdc1,	// (0x000377ac) cell_cmode_rocker_pane_g_ParamLimits

0xfdc1,	// (0x000377ac) cell_cmode_rocker_pane_g

0xb8de,	// (0x000332c9) bg_button_pane_cp07

0x2d42,	// (0x0002a72d) cell_cmode_itu_pane_g1

0x2d4b,	// (0x0002a736) cell_cmode_itu_pane_t1

0x2d59,	// (0x0002a744) cell_cmode_itu_pane_t2

0x0001,

0xfdc6,	// (0x000377b1) cell_cmode_itu_pane_t

0x2b23,	// (0x0002a50e) aid_touch_ctrl_left

0x2b2b,	// (0x0002a516) aid_touch_ctrl_right

0xb8de,	// (0x000332c9) compa_mode_pane

0xb177,	// (0x00032b62) aid_cmod_rocker_key_size_cp

0xb181,	// (0x00032b6c) aid_cmode_itu_key_size_cp

0x2d67,	// (0x0002a752) compa_mode_pane_g1

0x2d6f,	// (0x0002a75a) compa_mode_pane_g2

0x2d77,	// (0x0002a762) compa_mode_pane_g3

0x0002,

0xfdcb,	// (0x000377b6) compa_mode_pane_g

0xb18b,	// (0x00032b76) main_comp_mode_itu_pane_cp

0xb193,	// (0x00032b7e) main_comp_mode_rocker_pane_cp

0xb19b,	// (0x00032b86) cell_cmode_itu_pane_cp_ParamLimits

0xb19b,	// (0x00032b86) cell_cmode_itu_pane_cp

0xb1b0,	// (0x00032b9b) cell_cmode_rocker_pane_cp_ParamLimits

0xb1b0,	// (0x00032b9b) cell_cmode_rocker_pane_cp

0xbf15,	// (0x00033900) bg_button_pane_cp06_cp_ParamLimits

0xbf15,	// (0x00033900) bg_button_pane_cp06_cp

0x1b0a,	// (0x000294f5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x1b0a,	// (0x000294f5) cell_cmode_rocker_pane_g1_cp

0xea3f,	// (0x0003642a) cell_cmode_rocker_pane_g2_cp

0xb8de,	// (0x000332c9) bg_button_pane_cp07_cp

0xb1c2,	// (0x00032bad) cell_cmode_itu_pane_g1_cp

0xb1cb,	// (0x00032bb6) cell_cmode_itu_pane_t1_cp

0xb1cb,	// (0x00032bb6) cell_cmode_itu_pane_t2_cp

0x01e3,	// (0x00027bce) settings_code_pane_cp2

0xb940,	// (0x0003332b) bg_popup_window_pane_cp3_ParamLimits

0xbc69,	// (0x00033654) heading_pane_cp3_ParamLimits

0xbc75,	// (0x00033660) listscroll_popup_graphic_pane_ParamLimits

0xa4a4,	// (0x00031e8f) fep_hwr_aid_pane_ParamLimits

0xa932,	// (0x0003231d) aid_touch_sctrl_top_ParamLimits

0xa93f,	// (0x0003232a) sctrl_sk_top_pane_g1_ParamLimits

0x1b0a,	// (0x000294f5) sctrl_sk_top_pane_g2_ParamLimits

0xfd01,	// (0x000376ec) sctrl_sk_top_pane_g_ParamLimits

0xa94c,	// (0x00032337) sctrl_sk_top_pane_t1_ParamLimits

0xa932,	// (0x0003231d) aid_touch_sctrl_bottom_ParamLimits

0xa94c,	// (0x00032337) sctrl_sk_bottom_pane_t1_ParamLimits

0x2a6d,	// (0x0002a458) aid_area_touch_clock

0xaaff,	// (0x000324ea) aid_vkb2_area_top_pane_cell_ParamLimits

0xaaff,	// (0x000324ea) aid_vkb2_area_top_pane_cell

0xac2a,	// (0x00032615) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xac2a,	// (0x00032615) aid_vkb2_area_bottom_pane_cell

0x2c66,	// (0x0002a651) popup_char_count_window

0x2d7f,	// (0x0002a76a) popup_char_count_window_g1

0x2d88,	// (0x0002a773) popup_char_count_window_g2

0x2d91,	// (0x0002a77c) popup_char_count_window_g3

0x0002,

0xfdd2,	// (0x000377bd) popup_char_count_window_g

0x2d9a,	// (0x0002a785) popup_char_count_window_t1

0xa9ed,	// (0x000323d8) popup_fep_char_preview_window_ParamLimits

0xa9ed,	// (0x000323d8) popup_fep_char_preview_window

0xab1d,	// (0x00032508) vkb2_top_candi_pane_ParamLimits

0xab1d,	// (0x00032508) vkb2_top_candi_pane

0xb1d9,	// (0x00032bc4) cell_vkb2_top_candi_pane_ParamLimits

0xb1d9,	// (0x00032bc4) cell_vkb2_top_candi_pane

0xd293,	// (0x00034c7e) bg_popup_fep_char_preview_window_ParamLimits

0xd293,	// (0x00034c7e) bg_popup_fep_char_preview_window

0xb212,	// (0x00032bfd) popup_fep_char_preview_window_t1_ParamLimits

0xb212,	// (0x00032bfd) popup_fep_char_preview_window_t1

0x2db8,	// (0x0002a7a3) bg_popup_fep_char_preview_window_g1

0x2db0,	// (0x0002a79b) bg_popup_fep_char_preview_window_g2

0x2da8,	// (0x0002a793) bg_popup_fep_char_preview_window_g3

0x2dd8,	// (0x0002a7c3) bg_popup_fep_char_preview_window_g4

0x2dd0,	// (0x0002a7bb) bg_popup_fep_char_preview_window_g5

0xb24c,	// (0x00032c37) bg_popup_fep_char_preview_window_g6

0x2dc8,	// (0x0002a7b3) bg_popup_fep_char_preview_window_g7

0x2dc0,	// (0x0002a7ab) bg_popup_fep_char_preview_window_g8

0x2de0,	// (0x0002a7cb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd9,	// (0x000377c4) bg_popup_fep_char_preview_window_g

0x1b0a,	// (0x000294f5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1b0a,	// (0x000294f5) cell_vkb2_top_candi_pane_g1

0x1ecb,	// (0x000298b6) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1ecb,	// (0x000298b6) cell_vkb2_top_candi_pane_g2

0x1eec,	// (0x000298d7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x1eec,	// (0x000298d7) cell_vkb2_top_candi_pane_g3

0xb254,	// (0x00032c3f) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb254,	// (0x00032c3f) cell_vkb2_top_candi_pane_g4

0x1d39,	// (0x00029724) cell_vkb2_top_candi_pane_g5_ParamLimits

0x1d39,	// (0x00029724) cell_vkb2_top_candi_pane_g5

0x29b4,	// (0x0002a39f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x29b4,	// (0x0002a39f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdec,	// (0x000377d7) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdec,	// (0x000377d7) cell_vkb2_top_candi_pane_g

0xb275,	// (0x00032c60) cell_vkb2_top_candi_pane_t1

0xa27e,	// (0x00031c69) aid_size_touch_slider_mark_ParamLimits

0xa27e,	// (0x00031c69) aid_size_touch_slider_mark

0xaf5f,	// (0x0003294a) grid_graphic2_catg_pane_ParamLimits

0xaf5f,	// (0x0003294a) grid_graphic2_catg_pane

0xafdd,	// (0x000329c8) popup_grid_graphic2_window_t1_ParamLimits

0xafdd,	// (0x000329c8) popup_grid_graphic2_window_t1

0xafef,	// (0x000329da) popup_grid_graphic2_window_t2_ParamLimits

0xafef,	// (0x000329da) popup_grid_graphic2_window_t2

0x0001,

0xfda7,	// (0x00037792) popup_grid_graphic2_window_t_ParamLimits

0xfda7,	// (0x00037792) popup_grid_graphic2_window_t

0xba91,	// (0x0003347c) bg_button_pane_cp05_ParamLimits

0xb14f,	// (0x00032b3a) cell_graphic2_control_pane_g1_ParamLimits

0xb293,	// (0x00032c7e) cell_graphic2_catg_pane_ParamLimits

0xb293,	// (0x00032c7e) cell_graphic2_catg_pane

0xb8de,	// (0x000332c9) bg_button_pane_cp12

0xb2a5,	// (0x00032c90) cell_graphic2_catg_pane_g1

0x2a39,	// (0x0002a424) cell_tb_ext_pane_t1_ParamLimits

0xad35,	// (0x00032720) vkb2_top_cell_right_narrow_pane_ParamLimits

0xad35,	// (0x00032720) vkb2_top_cell_right_narrow_pane

0xad4d,	// (0x00032738) vkb2_top_cell_right_wide_pane_ParamLimits

0xad4d,	// (0x00032738) vkb2_top_cell_right_wide_pane

0xa496,	// (0x00031e81) bg_vkb2_func_pane_ParamLimits

0xa496,	// (0x00031e81) bg_vkb2_func_pane

0xadbe,	// (0x000327a9) vkb2_top_cell_left_pane_g1_ParamLimits

0xa496,	// (0x00031e81) bg_vkb2_fuc_pane_cp03_ParamLimits

0xa496,	// (0x00031e81) bg_vkb2_fuc_pane_cp03

0xae1c,	// (0x00032807) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xcd3a,	// (0x00034725) bg_vkb2_func_pane_g1

0xcd42,	// (0x0003472d) bg_vkb2_func_pane_g2

0xcd52,	// (0x0003473d) bg_vkb2_func_pane_g3

0xcd4a,	// (0x00034735) bg_vkb2_func_pane_g4

0xcd5a,	// (0x00034745) bg_vkb2_func_pane_g5

0xcd62,	// (0x0003474d) bg_vkb2_func_pane_g6

0xcd6a,	// (0x00034755) bg_vkb2_func_pane_g7

0xcd72,	// (0x0003475d) bg_vkb2_func_pane_g8

0xcd32,	// (0x0003471d) bg_vkb2_func_pane_g9

0x0008,

0xfdf9,	// (0x000377e4) bg_vkb2_func_pane_g

0xa496,	// (0x00031e81) bg_vkb2_fuc_pane_cp01_ParamLimits

0xa496,	// (0x00031e81) bg_vkb2_fuc_pane_cp01

0xadbe,	// (0x000327a9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xadbe,	// (0x000327a9) vkb2_top_cell_right_wide_pane_g1

0xa496,	// (0x00031e81) bg_vkb2_fuc_pane_cp02_ParamLimits

0xa496,	// (0x00031e81) bg_vkb2_fuc_pane_cp02

0xae1c,	// (0x00032807) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xae1c,	// (0x00032807) vkb2_top_cell_right_narrow_pane_g1

0x4403,	// (0x0002bdee) aid_touch_area_decrease_ParamLimits

0x4403,	// (0x0002bdee) aid_touch_area_decrease

0x441b,	// (0x0002be06) aid_touch_area_increase_ParamLimits

0x441b,	// (0x0002be06) aid_touch_area_increase

0x4427,	// (0x0002be12) aid_touch_area_mute_ParamLimits

0x4427,	// (0x0002be12) aid_touch_area_mute

0x4443,	// (0x0002be2e) aid_touch_area_slider_ParamLimits

0x4443,	// (0x0002be2e) aid_touch_area_slider

0x447d,	// (0x0002be68) popup_slider_window_g4_ParamLimits

0x447d,	// (0x0002be68) popup_slider_window_g4

0x4489,	// (0x0002be74) popup_slider_window_g5_ParamLimits

0x4489,	// (0x0002be74) popup_slider_window_g5

0x44ab,	// (0x0002be96) popup_slider_window_g6_ParamLimits

0x44ab,	// (0x0002be96) popup_slider_window_g6

0x2965,	// (0x0002a350) popup_slider_window_t2_ParamLimits

0x2965,	// (0x0002a350) popup_slider_window_t2

0x0001,

0xfcf5,	// (0x000376e0) popup_slider_window_t_ParamLimits

0xfcf5,	// (0x000376e0) popup_slider_window_t

0x44bd,	// (0x0002bea8) slider_pane_ParamLimits

0x44bd,	// (0x0002bea8) slider_pane

0x2de8,	// (0x0002a7d3) slider_pane_g1_ParamLimits

0x2de8,	// (0x0002a7d3) slider_pane_g1

0x2dfc,	// (0x0002a7e7) slider_pane_g2_ParamLimits

0x2dfc,	// (0x0002a7e7) slider_pane_g2

0x2e12,	// (0x0002a7fd) slider_pane_g3_ParamLimits

0x2e12,	// (0x0002a7fd) slider_pane_g3

0x0003,

0xfe0c,	// (0x000377f7) slider_pane_g_ParamLimits

0xfe0c,	// (0x000377f7) slider_pane_g

0x9ee3,	// (0x000318ce) popup_tb_float_extension_window_ParamLimits

0x9ee3,	// (0x000318ce) popup_tb_float_extension_window

0x2e3e,	// (0x0002a829) aid_size_cell_tb_float_ext

0xb8de,	// (0x000332c9) bg_popup_sub_window_cp28

0x2e49,	// (0x0002a834) grid_tb_float_ext_pane

0x2e51,	// (0x0002a83c) cell_tb_float_ext_pane_ParamLimits

0x2e51,	// (0x0002a83c) cell_tb_float_ext_pane

0x2e69,	// (0x0002a854) cell_tb_float_ext_pane_g1

0x2e72,	// (0x0002a85d) grid_highlight_pane_cp12

0xa5d1,	// (0x00031fbc) cell_last_hwr_side_pane_ParamLimits

0xa5d1,	// (0x00031fbc) cell_last_hwr_side_pane

0xea3f,	// (0x0003642a) cell_last_hwr_side_pane_g1

0x2e7b,	// (0x0002a866) cell_last_hwr_side_pane_g2

0x0001,

0xfe15,	// (0x00037800) cell_last_hwr_side_pane_g

0xacf2,	// (0x000326dd) vkb2_area_bottom_space_btn_pane_ParamLimits

0xacf2,	// (0x000326dd) vkb2_area_bottom_space_btn_pane

0x1b0a,	// (0x000294f5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2cdb,	// (0x0002a6c6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb275,	// (0x00032c60) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb2ae,	// (0x00032c99) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb2ae,	// (0x00032c99) vkb2_area_bottom_space_btn_pane_g1

0xb2e4,	// (0x00032ccf) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb2e4,	// (0x00032ccf) vkb2_area_bottom_space_btn_pane_g2

0xb31a,	// (0x00032d05) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb31a,	// (0x00032d05) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1a,	// (0x00037805) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1a,	// (0x00037805) vkb2_area_bottom_space_btn_pane_g

0xa545,	// (0x00031f30) cel_fep_hwr_func_pane_ParamLimits

0xa545,	// (0x00031f30) cel_fep_hwr_func_pane

0xa581,	// (0x00031f6c) cell_hwr_side_button_pane_ParamLimits

0xa581,	// (0x00031f6c) cell_hwr_side_button_pane

0x2a6d,	// (0x0002a458) aid_area_touch_clock_ParamLimits

0xba91,	// (0x0003347c) bg_uniindi_top_pane_ParamLimits

0x2a7f,	// (0x0002a46a) uniindi_top_pane_g1_ParamLimits

0x2a95,	// (0x0002a480) uniindi_top_pane_g2_ParamLimits

0x2aa1,	// (0x0002a48c) uniindi_top_pane_g3_ParamLimits

0x2ab2,	// (0x0002a49d) uniindi_top_pane_g4_ParamLimits

0xfd2d,	// (0x00037718) uniindi_top_pane_g_ParamLimits

0x2abf,	// (0x0002a4aa) uniindi_top_pane_t1_ParamLimits

0xba91,	// (0x0003347c) bg_vkb2_func_pane_cp01_ParamLimits

0xba91,	// (0x0003347c) bg_vkb2_func_pane_cp01

0x2e84,	// (0x0002a86f) cel_fep_hwr_func_pane_g1_ParamLimits

0x2e84,	// (0x0002a86f) cel_fep_hwr_func_pane_g1

0xba91,	// (0x0003347c) bg_vkb2_func_pane_cp02_ParamLimits

0xba91,	// (0x0003347c) bg_vkb2_func_pane_cp02

0x2e84,	// (0x0002a86f) cell_hwr_side_button_pane_g1_ParamLimits

0x2e84,	// (0x0002a86f) cell_hwr_side_button_pane_g1

0xcc4c,	// (0x00034637) status_pane_g4_ParamLimits

0xcc4c,	// (0x00034637) status_pane_g4

0xcc64,	// (0x0003464f) status_pane_t1

0xe8d0,	// (0x000362bb) form2_midp_gauge_slider_cont_pane

0xe8d8,	// (0x000362c3) form2_midp_gauge_slider_pane_t1_ParamLimits

0x0698,	// (0x00028083) form2_midp_gauge_slider_pane_t2_ParamLimits

0x06aa,	// (0x00028095) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x000374eb) form2_midp_gauge_slider_pane_t_ParamLimits

0xe8ea,	// (0x000362d5) form2_midp_slider_pane_ParamLimits

0xa9ad,	// (0x00032398) aid_size_cell_func_vkb2_ParamLimits

0xa9ad,	// (0x00032398) aid_size_cell_func_vkb2

0x2e2a,	// (0x0002a815) slider_pane_g4_ParamLimits

0x2e2a,	// (0x0002a815) slider_pane_g4

0xb360,	// (0x00032d4b) form2_midp_gauge_slider_pane_t2_cp01

0xb36e,	// (0x00032d59) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb36e,	// (0x00032d59) form2_midp_gauge_slider_pane_t3_cp01

0xb38b,	// (0x00032d76) form2_midp_slider_pane_cp01

0xb8de,	// (0x000332c9) navi_smil_pane

0x2eb4,	// (0x0002a89f) navi_smil_pane_g1

0x2ebc,	// (0x0002a8a7) navi_smil_pane_t1

0x2e92,	// (0x0002a87d) form2_midp_slider_pane_g1

0x2e9b,	// (0x0002a886) form2_midp_slider_pane_g2

0x2ea3,	// (0x0002a88e) form2_midp_slider_pane_g3

0x2e92,	// (0x0002a87d) form2_midp_slider_pane_g4

0xb394,	// (0x00032d7f) form2_midp_slider_pane_g5

0x0004,

0xfe23,	// (0x0003780e) form2_midp_slider_pane_g

0xb350,	// (0x00032d3b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb350,	// (0x00032d3b) vkb2_area_bottom_space_btn_pane_g4

0xf167,	// (0x00036b52) lc0_navi_pane_ParamLimits

0xf167,	// (0x00036b52) lc0_navi_pane

0xf1dd,	// (0x00036bc8) lc0_stat_indi_pane_ParamLimits

0xf1dd,	// (0x00036bc8) lc0_stat_indi_pane

0xf1f4,	// (0x00036bdf) ls0_title_pane_ParamLimits

0xf1f4,	// (0x00036bdf) ls0_title_pane

0xbf15,	// (0x00033900) bg_popup_sub_pane_cp14_ParamLimits

0x2a54,	// (0x0002a43f) list_uniindi_pane_ParamLimits

0x2a60,	// (0x0002a44b) uniindi_top_pane_ParamLimits

0x2afb,	// (0x0002a4e6) list_single_uniindi_pane_g1_ParamLimits

0x2b0e,	// (0x0002a4f9) list_single_uniindi_pane_t1_ParamLimits

0xb39d,	// (0x00032d88) lc0_stat_clock_pane_ParamLimits

0xb39d,	// (0x00032d88) lc0_stat_clock_pane

0xb3aa,	// (0x00032d95) lc0_stat_indi_pane_g1_ParamLimits

0xb3aa,	// (0x00032d95) lc0_stat_indi_pane_g1

0xb3b7,	// (0x00032da2) lc0_stat_indi_pane_g2_ParamLimits

0xb3b7,	// (0x00032da2) lc0_stat_indi_pane_g2

0x0001,

0xfe2e,	// (0x00037819) lc0_stat_indi_pane_g_ParamLimits

0xfe2e,	// (0x00037819) lc0_stat_indi_pane_g

0xb3c4,	// (0x00032daf) lc0_uni_indicator_pane_ParamLimits

0xb3c4,	// (0x00032daf) lc0_uni_indicator_pane

0x2eca,	// (0x0002a8b5) ls0_title_pane_g1_ParamLimits

0x2eca,	// (0x0002a8b5) ls0_title_pane_g1

0xb3d1,	// (0x00032dbc) ls0_title_pane_t1_ParamLimits

0xb3d1,	// (0x00032dbc) ls0_title_pane_t1

0xb407,	// (0x00032df2) lc0_uni_indicator_pane_g1_ParamLimits

0xb407,	// (0x00032df2) lc0_uni_indicator_pane_g1

0x2ede,	// (0x0002a8c9) lc0_stat_clock_pane_t1

0xb8de,	// (0x000332c9) main_ai5_pane

0x2eec,	// (0x0002a8d7) ai5_sk_pane_ParamLimits

0x2eec,	// (0x0002a8d7) ai5_sk_pane

0xb419,	// (0x00032e04) cell_ai5_widget_pane_ParamLimits

0xb419,	// (0x00032e04) cell_ai5_widget_pane

0x2ef9,	// (0x0002a8e4) aid_size_cell_widget_grid

0x2f07,	// (0x0002a8f2) bg_ai5_widget_pane_ParamLimits

0x2f07,	// (0x0002a8f2) bg_ai5_widget_pane

0x2f5b,	// (0x0002a946) cell_ai5_widget_pane_g2

0x2f6b,	// (0x0002a956) cell_ai5_widget_pane_g3

0x2f82,	// (0x0002a96d) cell_ai5_widget_pane_g4

0x2f8e,	// (0x0002a979) cell_ai5_widget_pane_g5

0x2f9a,	// (0x0002a985) cell_ai5_widget_pane_g6

0x2fa6,	// (0x0002a991) cell_ai5_widget_pane_g7

0x2fee,	// (0x0002a9d9) cell_ai5_widget_pane_t1_ParamLimits

0x2fee,	// (0x0002a9d9) cell_ai5_widget_pane_t1

0x300b,	// (0x0002a9f6) cell_ai5_widget_pane_t2_ParamLimits

0x300b,	// (0x0002a9f6) cell_ai5_widget_pane_t2

0x3023,	// (0x0002aa0e) cell_ai5_widget_pane_t3_ParamLimits

0x3023,	// (0x0002aa0e) cell_ai5_widget_pane_t3

0x303b,	// (0x0002aa26) cell_ai5_widget_pane_t4_ParamLimits

0x303b,	// (0x0002aa26) cell_ai5_widget_pane_t4

0x3058,	// (0x0002aa43) cell_ai5_widget_pane_t5_ParamLimits

0x3058,	// (0x0002aa43) cell_ai5_widget_pane_t5

0x3077,	// (0x0002aa62) cell_ai5_widget_pane_t6_ParamLimits

0x3077,	// (0x0002aa62) cell_ai5_widget_pane_t6

0x3089,	// (0x0002aa74) cell_ai5_widget_pane_t7_ParamLimits

0x3089,	// (0x0002aa74) cell_ai5_widget_pane_t7

0x30a2,	// (0x0002aa8d) cell_ai5_widget_pane_t8_ParamLimits

0x30a2,	// (0x0002aa8d) cell_ai5_widget_pane_t8

0x0009,

0xfe48,	// (0x00037833) cell_ai5_widget_pane_t_ParamLimits

0xfe48,	// (0x00037833) cell_ai5_widget_pane_t

0x30f6,	// (0x0002aae1) grid_ai5_widget_pane

0xbf15,	// (0x00033900) highlight_cell_ai5_widget_pane_ParamLimits

0xbf15,	// (0x00033900) highlight_cell_ai5_widget_pane

0xb481,	// (0x00032e6c) ai5_sk_left_pane

0xb48b,	// (0x00032e76) ai5_sk_middle_pane

0xb495,	// (0x00032e80) ai5_sk_right_pane

0x3102,	// (0x0002aaed) bg_ai5_widget_pane_g1_ParamLimits

0x3102,	// (0x0002aaed) bg_ai5_widget_pane_g1

0x310e,	// (0x0002aaf9) bg_ai5_widget_pane_g2_ParamLimits

0x310e,	// (0x0002aaf9) bg_ai5_widget_pane_g2

0x311a,	// (0x0002ab05) bg_ai5_widget_pane_g3_ParamLimits

0x311a,	// (0x0002ab05) bg_ai5_widget_pane_g3

0x3126,	// (0x0002ab11) bg_ai5_widget_pane_g4_ParamLimits

0x3126,	// (0x0002ab11) bg_ai5_widget_pane_g4

0x3132,	// (0x0002ab1d) bg_ai5_widget_pane_g5_ParamLimits

0x3132,	// (0x0002ab1d) bg_ai5_widget_pane_g5

0x313e,	// (0x0002ab29) bg_ai5_widget_pane_g6_ParamLimits

0x313e,	// (0x0002ab29) bg_ai5_widget_pane_g6

0x314a,	// (0x0002ab35) bg_ai5_widget_pane_g7_ParamLimits

0x314a,	// (0x0002ab35) bg_ai5_widget_pane_g7

0x3156,	// (0x0002ab41) bg_ai5_widget_pane_g8_ParamLimits

0x3156,	// (0x0002ab41) bg_ai5_widget_pane_g8

0x3162,	// (0x0002ab4d) bg_ai5_widget_pane_g9_ParamLimits

0x3162,	// (0x0002ab4d) bg_ai5_widget_pane_g9

0x0008,

0xfe5d,	// (0x00037848) bg_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x00037848) bg_ai5_widget_pane_g

0x3194,	// (0x0002ab7f) cell_shortcut_ai5_widget_pane_ParamLimits

0x3194,	// (0x0002ab7f) cell_shortcut_ai5_widget_pane

0xc99b,	// (0x00034386) bg_cell_shortcut_ai5_widget_pane

0x31a5,	// (0x0002ab90) cell_grid_ai5_widget_pane_g1

0xc99b,	// (0x00034386) highlight_cell_shortcut_ai5_widget_pane

0xcd42,	// (0x0003472d) ai5_sk_left_pane_g1

0x31ae,	// (0x0002ab99) ai5_sk_left_pane_g2

0x31b6,	// (0x0002aba1) ai5_sk_left_pane_g3

0x31be,	// (0x0002aba9) ai5_sk_left_pane_g4

0x0003,

0xfe70,	// (0x0003785b) ai5_sk_left_pane_g

0x31c6,	// (0x0002abb1) ai5_sk_left_pane_t1

0xcd3a,	// (0x00034725) ai5_sk_right_pane_g1

0x31d4,	// (0x0002abbf) ai5_sk_right_pane_g2

0x31dc,	// (0x0002abc7) ai5_sk_right_pane_g3

0x31e4,	// (0x0002abcf) ai5_sk_right_pane_g4

0x0003,

0xfe79,	// (0x00037864) ai5_sk_right_pane_g

0x31ec,	// (0x0002abd7) ai5_sk_right_pane_t1

0xcd3a,	// (0x00034725) ai5_sk_middle_pane_g1

0xcd42,	// (0x0003472d) ai5_sk_middle_pane_g2

0xcd5a,	// (0x00034745) ai5_sk_middle_pane_g3

0x31dc,	// (0x0002abc7) ai5_sk_middle_pane_g4

0x31b6,	// (0x0002aba1) ai5_sk_middle_pane_g5

0x31fa,	// (0x0002abe5) ai5_sk_middle_pane_g6

0xb49f,	// (0x00032e8a) ai5_sk_middle_pane_g7

0x0006,

0xfe82,	// (0x0003786d) ai5_sk_middle_pane_g

0xf0b0,	// (0x00036a9b) aid_touch_area_size_lc0_ParamLimits

0xf0b0,	// (0x00036a9b) aid_touch_area_size_lc0

0xa6c4,	// (0x000320af) cell_hwr_candidate_pane_t1_ParamLimits

0xcb70,	// (0x0003455b) aid_touch_navi_pane

0xf2c7,	// (0x00036cb2) status_dt_navi_pane_ParamLimits

0xf2c7,	// (0x00036cb2) status_dt_navi_pane

0xf2d4,	// (0x00036cbf) status_dt_sta_pane_ParamLimits

0xf2d4,	// (0x00036cbf) status_dt_sta_pane

0xb4a7,	// (0x00032e92) dt_sta_controll_pane

0xb4b4,	// (0x00032e9f) dt_sta_indi_pane

0xb4c1,	// (0x00032eac) dt_sta_title_pane

0xba91,	// (0x0003347c) bg_dt_sta_indi_pane_ParamLimits

0xba91,	// (0x0003347c) bg_dt_sta_indi_pane

0x3202,	// (0x0002abed) dt_sta_battery_pane

0x320a,	// (0x0002abf5) dt_sta_indi_pane_g1

0x3213,	// (0x0002abfe) dt_sta_indi_pane_g2

0x321c,	// (0x0002ac07) dt_sta_indi_pane_g3

0x0002,

0xfe91,	// (0x0003787c) dt_sta_indi_pane_g

0x3225,	// (0x0002ac10) dt_sta_signal_pane

0xbf15,	// (0x00033900) bg_dt_sta_title_pane_ParamLimits

0xbf15,	// (0x00033900) bg_dt_sta_title_pane

0x322e,	// (0x0002ac19) dt_sta_title_pane_g1

0x3236,	// (0x0002ac21) dt_sta_title_pane_t1_ParamLimits

0x3236,	// (0x0002ac21) dt_sta_title_pane_t1

0xb8de,	// (0x000332c9) bg_dt_sta_control_pane

0x324b,	// (0x0002ac36) dt_sta_controll_pane_g1

0x3254,	// (0x0002ac3f) bg_dt_sta_title_pane_g1

0x325d,	// (0x0002ac48) bg_dt_sta_title_pane_g2

0x3266,	// (0x0002ac51) bg_dt_sta_title_pane_g3

0x0002,

0xfe98,	// (0x00037883) bg_dt_sta_title_pane_g

0xea3f,	// (0x0003642a) bg_dt_sta_indi_pane_g1

0x326f,	// (0x0002ac5a) dt_sta_signal_pane_g1

0x3277,	// (0x0002ac62) dt_sta_signal_pane_g2

0x0001,

0xfe9f,	// (0x0003788a) dt_sta_signal_pane_g

0x327f,	// (0x0002ac6a) dt_sta_battery_pane_g1

0x3288,	// (0x0002ac73) dt_sta_battery_pane_t1

0xea3f,	// (0x0003642a) bg_dt_sta_control_pane_g1

0xc4ce,	// (0x00033eb9) fep_china_uni_eep_pane

0xc4d6,	// (0x00033ec1) fep_china_uni_entry_pane_ParamLimits

0xc4e6,	// (0x00033ed1) popup_fep_china_uni_window_g1_ParamLimits

0xc4f6,	// (0x00033ee1) popup_fep_china_uni_window_g2_ParamLimits

0xc4f6,	// (0x00033ee1) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00037108) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00037108) popup_fep_china_uni_window_g

0x3297,	// (0x0002ac82) fep_china_uni_eep_pane_g1

0x329f,	// (0x0002ac8a) fep_china_uni_eep_pane_t1

0x2eab,	// (0x0002a896) aid_touch_area_size_smil_player

0xcc1f,	// (0x0003460a) lc0_clock_pane

0xcc58,	// (0x00034643) status_pane_g5_ParamLimits

0xcc58,	// (0x00034643) status_pane_g5

0x9c46,	// (0x00031631) popup_keymap_window

0xcc38,	// (0x00034623) status_icon_pane

0x2f6b,	// (0x0002a956) cell_ai5_widget_pane_g3_ParamLimits

0x2f82,	// (0x0002a96d) cell_ai5_widget_pane_g4_ParamLimits

0x2f8e,	// (0x0002a979) cell_ai5_widget_pane_g5_ParamLimits

0x2fb2,	// (0x0002a99d) cell_ai5_widget_pane_g8_ParamLimits

0x2fb2,	// (0x0002a99d) cell_ai5_widget_pane_g8

0x2fc6,	// (0x0002a9b1) cell_ai5_widget_pane_g9_ParamLimits

0x2fc6,	// (0x0002a9b1) cell_ai5_widget_pane_g9

0x2fda,	// (0x0002a9c5) cell_ai5_widget_pane_g10_ParamLimits

0x2fda,	// (0x0002a9c5) cell_ai5_widget_pane_g10

0x32ae,	// (0x0002ac99) status_icon_pane_g1

0xb8de,	// (0x000332c9) bg_popup_sub_pane_cp13

0x32b6,	// (0x0002aca1) popup_keymap_window_t1

0xf061,	// (0x00036a4c) control_pane_g6_ParamLimits

0xf061,	// (0x00036a4c) control_pane_g6

0xf06e,	// (0x00036a59) control_pane_g7_ParamLimits

0xf06e,	// (0x00036a59) control_pane_g7

0xf07b,	// (0x00036a66) control_pane_g8_ParamLimits

0xf07b,	// (0x00036a66) control_pane_g8

0xb4a7,	// (0x00032e92) dt_sta_controll_pane_ParamLimits

0xb4b4,	// (0x00032e9f) dt_sta_indi_pane_ParamLimits

0xb4c1,	// (0x00032eac) dt_sta_title_pane_ParamLimits

0xbe54,	// (0x0003383f) aid_size_touch_scroll_bar_cale

0x92ff,	// (0x00030cea) popup_discreet_window_ParamLimits

0x92ff,	// (0x00030cea) popup_discreet_window

0x9363,	// (0x00030d4e) popup_sk_window

0xd293,	// (0x00034c7e) bg_popup_sub_pane_cp28_ParamLimits

0xd293,	// (0x00034c7e) bg_popup_sub_pane_cp28

0x32c4,	// (0x0002acaf) popup_discreet_window_g1_ParamLimits

0x32c4,	// (0x0002acaf) popup_discreet_window_g1

0x32e4,	// (0x0002accf) popup_discreet_window_t1_ParamLimits

0x32e4,	// (0x0002accf) popup_discreet_window_t1

0x3302,	// (0x0002aced) popup_discreet_window_t2_ParamLimits

0x3302,	// (0x0002aced) popup_discreet_window_t2

0x0002,

0xfea4,	// (0x0003788f) popup_discreet_window_t_ParamLimits

0xfea4,	// (0x0003788f) popup_discreet_window_t

0xb4d2,	// (0x00032ebd) popup_sk_window_g1

0xb4dc,	// (0x00032ec7) popup_sk_window_g2

0x0001,

0xfeab,	// (0x00037896) popup_sk_window_g

0xb4e4,	// (0x00032ecf) popup_sk_window_t1

0xb4f2,	// (0x00032edd) popup_sk_window_t1_copy1

0x2f5b,	// (0x0002a946) cell_ai5_widget_pane_g2_ParamLimits

0x30b4,	// (0x0002aa9f) cell_ai5_widget_pane_t9_ParamLimits

0x30b4,	// (0x0002aa9f) cell_ai5_widget_pane_t9

0xb8de,	// (0x000332c9) main_fep_fshwr2_pane

0xb500,	// (0x00032eeb) aid_fshwr2_btn_pane

0xb50c,	// (0x00032ef7) aid_fshwr2_syb_pane

0xb518,	// (0x00032f03) aid_fshwr2_txt_pane

0xb524,	// (0x00032f0f) fshwr2_func_candi_pane

0xb535,	// (0x00032f20) fshwr2_hwr_syb_pane

0xb541,	// (0x00032f2c) fshwr2_icf_pane

0xb8de,	// (0x000332c9) fshwr2_icf_bg_pane

0xb566,	// (0x00032f51) fshwr2_icf_pane_t1_ParamLimits

0xb566,	// (0x00032f51) fshwr2_icf_pane_t1

0xc44b,	// (0x00033e36) fshwr2_func_candi_pane_g1

0xb57e,	// (0x00032f69) fshwr2_func_candi_row_pane_ParamLimits

0xb57e,	// (0x00032f69) fshwr2_func_candi_row_pane

0xb58e,	// (0x00032f79) cell_fshwr2_syb_pane_ParamLimits

0xb58e,	// (0x00032f79) cell_fshwr2_syb_pane

0x1b0a,	// (0x000294f5) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1b0a,	// (0x000294f5) fshwr2_hwr_syb_pane_g1

0xb8de,	// (0x000332c9) bg_popup_call_pane_cp01

0xb5a2,	// (0x00032f8d) fshwr2_func_candi_cell_pane_ParamLimits

0xb5a2,	// (0x00032f8d) fshwr2_func_candi_cell_pane

0xd8d0,	// (0x000352bb) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd8d0,	// (0x000352bb) fshwr2_func_candi_cell_bg_pane

0xb5e1,	// (0x00032fcc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb5e1,	// (0x00032fcc) fshwr2_func_candi_cell_pane_g1

0xb601,	// (0x00032fec) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb601,	// (0x00032fec) fshwr2_func_candi_cell_pane_t1

0xb8de,	// (0x000332c9) bg_button_pane_cp08

0xc99b,	// (0x00034386) cell_fshwr2_syb_bg_pane

0xb614,	// (0x00032fff) cell_fshwr2_syb_bg_pane_g1

0xb61c,	// (0x00033007) cell_fshwr2_syb_bg_pane_t1

0xbf15,	// (0x00033900) main_tmo_pane

0xf508,	// (0x00036ef3) uni_indicator_pane_g1_ParamLimits

0xf51b,	// (0x00036f06) uni_indicator_pane_g2_ParamLimits

0xf52d,	// (0x00036f18) uni_indicator_pane_g3_ParamLimits

0xdcb7,	// (0x000356a2) uni_indicator_pane_g4_ParamLimits

0xdcb7,	// (0x000356a2) uni_indicator_pane_g4

0xdccb,	// (0x000356b6) uni_indicator_pane_g5_ParamLimits

0xdccb,	// (0x000356b6) uni_indicator_pane_g5

0xdccb,	// (0x000356b6) uni_indicator_pane_g6_ParamLimits

0xdccb,	// (0x000356b6) uni_indicator_pane_g6

0xf921,	// (0x0003730c) uni_indicator_pane_g_ParamLimits

0x43e7,	// (0x0002bdd2) popup_tmo_note_window_ParamLimits

0x43e7,	// (0x0002bdd2) popup_tmo_note_window

0xbf15,	// (0x00033900) fshwr2_bg_pane

0xb5f2,	// (0x00032fdd) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb5f2,	// (0x00032fdd) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb0,	// (0x0003789b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb0,	// (0x0003789b) fshwr2_func_candi_cell_pane_g

0xea3f,	// (0x0003642a) bg_popup_window_pane_cp01

0xb62b,	// (0x00033016) bg_popup_window_pane_g1_cp01

0x6317,	// (0x0002dd02) bg_popup_window_pane_cp22_ParamLimits

0x6317,	// (0x0002dd02) bg_popup_window_pane_cp22

0x6325,	// (0x0002dd10) listscroll_tmo_link_pane_ParamLimits

0x6325,	// (0x0002dd10) listscroll_tmo_link_pane

0x6365,	// (0x0002dd50) popup_tmo_note_window_g1_ParamLimits

0x6365,	// (0x0002dd50) popup_tmo_note_window_g1

0x6372,	// (0x0002dd5d) tmo_note_info_pane_ParamLimits

0x6372,	// (0x0002dd5d) tmo_note_info_pane

0xb634,	// (0x0003301f) list_tmo_note_info_pane_g1_ParamLimits

0xb634,	// (0x0003301f) list_tmo_note_info_pane_g1

0x638c,	// (0x0002dd77) list_tmo_note_info_pane_g2_ParamLimits

0x638c,	// (0x0002dd77) list_tmo_note_info_pane_g2

0x0001,

0xfeb5,	// (0x000378a0) list_tmo_note_info_pane_g_ParamLimits

0xfeb5,	// (0x000378a0) list_tmo_note_info_pane_g

0x63a8,	// (0x0002dd93) list_tmo_note_info_text_pane_ParamLimits

0x63a8,	// (0x0002dd93) list_tmo_note_info_text_pane

0x63ea,	// (0x0002ddd5) list_tmo_link_pane

0x63f7,	// (0x0002dde2) scroll_pane_cp20

0x6404,	// (0x0002ddef) list_single_tmo_link_pane_ParamLimits

0x6404,	// (0x0002ddef) list_single_tmo_link_pane

0x6414,	// (0x0002ddff) list_single_tmo_link_pane_t1

0x6422,	// (0x0002de0d) list_tmo_note_info_text_pane_t1_ParamLimits

0x6422,	// (0x0002de0d) list_tmo_note_info_text_pane_t1

0xed7d,	// (0x00036768) aid_size_touch_scroll_bar_cp01_ParamLimits

0xed7d,	// (0x00036768) aid_size_touch_scroll_bar_cp01

0x8739,	// (0x00030124) aid_size_touch_slider_marker

0x934f,	// (0x00030d3a) popup_settings_window_ParamLimits

0x934f,	// (0x00030d3a) popup_settings_window

0x88e7,	// (0x000302d2) popup_candi_list_indi_window

0xcb70,	// (0x0003455b) aid_touch_navi_pane_ParamLimits

0xa906,	// (0x000322f1) rs_clock_indi_pane

0xa90f,	// (0x000322fa) sctrl_sk_bottom_pane_ParamLimits

0xa920,	// (0x0003230b) sctrl_sk_top_pane_ParamLimits

0xaa07,	// (0x000323f2) popup_fep_tooltip_window

0x2ef9,	// (0x0002a8e4) aid_size_cell_widget_grid_ParamLimits

0x2f46,	// (0x0002a931) cell_ai5_widget_pane_g1_ParamLimits

0x2f46,	// (0x0002a931) cell_ai5_widget_pane_g1

0x2f9a,	// (0x0002a985) cell_ai5_widget_pane_g6_ParamLimits

0x2fa6,	// (0x0002a991) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe33,	// (0x0003781e) cell_ai5_widget_pane_g_ParamLimits

0xfe33,	// (0x0003781e) cell_ai5_widget_pane_g

0x30d8,	// (0x0002aac3) cell_ai5_widget_pane_t10_ParamLimits

0x30d8,	// (0x0002aac3) cell_ai5_widget_pane_t10

0x30f6,	// (0x0002aae1) grid_ai5_widget_pane_ParamLimits

0x316e,	// (0x0002ab59) cell_contacts_ai5_widget_pane_ParamLimits

0x316e,	// (0x0002ab59) cell_contacts_ai5_widget_pane

0x3317,	// (0x0002ad02) popup_discreet_window_t3_ParamLimits

0x3317,	// (0x0002ad02) popup_discreet_window_t3

0xb554,	// (0x00032f3f) popup_fshwr2_char_preview_window_ParamLimits

0xb554,	// (0x00032f3f) popup_fshwr2_char_preview_window

0xb64b,	// (0x00033036) tmo_note_info_pane_t1

0xb660,	// (0x0003304b) tmo_note_info_pane_t2

0xb675,	// (0x00033060) tmo_note_info_pane_t3

0x63c6,	// (0x0002ddb1) tmo_note_info_pane_t4

0x63d8,	// (0x0002ddc3) tmo_note_info_pane_t5

0x0004,

0xfeba,	// (0x000378a5) tmo_note_info_pane_t

0x63ea,	// (0x0002ddd5) list_tmo_link_pane_ParamLimits

0x63f7,	// (0x0002dde2) scroll_pane_cp20_ParamLimits

0xb8de,	// (0x000332c9) bg_popup_fep_char_preview_window_cp01

0x643b,	// (0x0002de26) popup_fshwr2_char_preview_window_t1

0x6449,	// (0x0002de34) popup_candi_list_indi_window_g1

0x6452,	// (0x0002de3d) bg_cell_contacts_ai5_widget_pane

0x645e,	// (0x0002de49) cell_contacts_ai5_widget_pane_g1

0x6473,	// (0x0002de5e) cell_contacts_ai5_widget_pane_g2

0x647f,	// (0x0002de6a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec5,	// (0x000378b0) cell_contacts_ai5_widget_pane_g

0x648b,	// (0x0002de76) cell_contacts_ai5_widget_pane_t1

0xbf15,	// (0x00033900) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6500,	// (0x0002deeb) settings_container_pane

0xc99b,	// (0x00034386) listscroll_set_pane_copy1

0xe471,	// (0x00035e5c) scroll_pane_cp121_copy1

0xd055,	// (0x00034a40) set_content_pane_copy1

0x650c,	// (0x0002def7) aid_height_set_list_copy1_ParamLimits

0x650c,	// (0x0002def7) aid_height_set_list_copy1

0xde5a,	// (0x00035845) aid_size_parent_copy1_ParamLimits

0xde5a,	// (0x00035845) aid_size_parent_copy1

0x6518,	// (0x0002df03) button_value_adjust_pane_cp6_copy1_ParamLimits

0x6518,	// (0x0002df03) button_value_adjust_pane_cp6_copy1

0xcb4e,	// (0x00034539) list_highlight_pane_cp2_copy1_ParamLimits

0xcb4e,	// (0x00034539) list_highlight_pane_cp2_copy1

0x652c,	// (0x0002df17) list_set_pane_copy1_ParamLimits

0x652c,	// (0x0002df17) list_set_pane_copy1

0x649d,	// (0x0002de88) main_pane_set_t1_copy1_ParamLimits

0x649d,	// (0x0002de88) main_pane_set_t1_copy1

0x64d7,	// (0x0002dec2) main_pane_set_t2_copy1_ParamLimits

0x64d7,	// (0x0002dec2) main_pane_set_t2_copy1

0x67fe,	// (0x0002e1e9) main_pane_set_t3_copy1

0x680c,	// (0x0002e1f7) main_pane_set_t4_copy1

0x64f4,	// (0x0002dedf) set_content_pane_g1_copy1_ParamLimits

0x64f4,	// (0x0002dedf) set_content_pane_g1_copy1

0x681a,	// (0x0002e205) setting_code_pane_copy1

0x6822,	// (0x0002e20d) setting_slider_graphic_pane_copy1

0x6822,	// (0x0002e20d) setting_slider_pane_copy1

0x6822,	// (0x0002e20d) setting_text_pane_copy1

0x6822,	// (0x0002e20d) setting_volume_pane_copy1

0x681a,	// (0x0002e205) settings_code_pane_cp2_copy1

0x682a,	// (0x0002e215) settings_code_pane_cp_copy1_ParamLimits

0x682a,	// (0x0002e215) settings_code_pane_cp_copy1

0xb68a,	// (0x00033075) volume_set_pane_copy1

0x683e,	// (0x0002e229) volume_set_pane_g10_copy1

0x6846,	// (0x0002e231) volume_set_pane_g1_copy1

0x684e,	// (0x0002e239) volume_set_pane_g2_copy1

0x6856,	// (0x0002e241) volume_set_pane_g3_copy1

0x685e,	// (0x0002e249) volume_set_pane_g4_copy1

0x6866,	// (0x0002e251) volume_set_pane_g5_copy1

0x686e,	// (0x0002e259) volume_set_pane_g6_copy1

0x6876,	// (0x0002e261) volume_set_pane_g7_copy1

0x687e,	// (0x0002e269) volume_set_pane_g8_copy1

0x6886,	// (0x0002e271) volume_set_pane_g9_copy1

0xb940,	// (0x0003332b) bg_set_opt_pane_cp_copy1_ParamLimits

0xb940,	// (0x0003332b) bg_set_opt_pane_cp_copy1

0xb692,	// (0x0003307d) setting_slider_pane_t1_copy1_ParamLimits

0xb692,	// (0x0003307d) setting_slider_pane_t1_copy1

0xb6b0,	// (0x0003309b) setting_slider_pane_t2_copy1_ParamLimits

0xb6b0,	// (0x0003309b) setting_slider_pane_t2_copy1

0xb6c9,	// (0x000330b4) setting_slider_pane_t3_copy1_ParamLimits

0xb6c9,	// (0x000330b4) setting_slider_pane_t3_copy1

0xb6e0,	// (0x000330cb) slider_set_pane_copy1_ParamLimits

0xb6e0,	// (0x000330cb) slider_set_pane_copy1

0xbf6d,	// (0x00033958) set_opt_bg_pane_g1_copy2

0xbf75,	// (0x00033960) set_opt_bg_pane_g2_copy2

0x688e,	// (0x0002e279) set_opt_bg_pane_g3_copy2

0xbf85,	// (0x00033970) set_opt_bg_pane_g4_copy2

0xbf8d,	// (0x00033978) set_opt_bg_pane_g5_copy2

0xbf95,	// (0x00033980) set_opt_bg_pane_g6_copy2

0x6896,	// (0x0002e281) set_opt_bg_pane_g7_copy2

0x689e,	// (0x0002e289) set_opt_bg_pane_g8_copy2

0x68a6,	// (0x0002e291) set_opt_bg_pane_g9_copy2

0xb6f6,	// (0x000330e1) aid_size_touch_slider_mark_copy1_ParamLimits

0xb6f6,	// (0x000330e1) aid_size_touch_slider_mark_copy1

0x68ae,	// (0x0002e299) slider_set_pane_g1_copy1

0xb70a,	// (0x000330f5) slider_set_pane_g2_copy1

0xa29e,	// (0x00031c89) slider_set_pane_g3_copy1_ParamLimits

0xa29e,	// (0x00031c89) slider_set_pane_g3_copy1

0xa2b2,	// (0x00031c9d) slider_set_pane_g4_copy1_ParamLimits

0xa2b2,	// (0x00031c9d) slider_set_pane_g4_copy1

0xa2ca,	// (0x00031cb5) slider_set_pane_g5_copy1_ParamLimits

0xa2ca,	// (0x00031cb5) slider_set_pane_g5_copy1

0xa29e,	// (0x00031c89) slider_set_pane_g6_copy1_ParamLimits

0xa29e,	// (0x00031c89) slider_set_pane_g6_copy1

0xb712,	// (0x000330fd) slider_set_pane_g7_copy1_ParamLimits

0xb712,	// (0x000330fd) slider_set_pane_g7_copy1

0xb8f2,	// (0x000332dd) bg_set_opt_pane_cp2_copy1

0x68b7,	// (0x0002e2a2) setting_slider_graphic_pane_g1_copy1

0x68cf,	// (0x0002e2ba) setting_slider_graphic_pane_t1_copy1

0x68c0,	// (0x0002e2ab) setting_slider_graphic_pane_t2_copy1

0x68de,	// (0x0002e2c9) slider_set_pane_cp_copy1

0x68ee,	// (0x0002e2d9) input_focus_pane_cp1_copy1

0x68f7,	// (0x0002e2e2) list_set_text_pane_copy1

0x68ff,	// (0x0002e2ea) setting_text_pane_g1_copy1

0x908a,	// (0x00030a75) set_text_pane_t1_copy1

0x68ee,	// (0x0002e2d9) input_focus_pane_cp2_copy1

0x68ff,	// (0x0002e2ea) setting_code_pane_g1_copy1

0x6908,	// (0x0002e2f3) setting_code_pane_t1_copy1

0xc6a9,	// (0x00034094) list_set_graphic_pane_copy1

0xb8f2,	// (0x000332dd) bg_set_opt_pane_cp4_copy1

0xc6bb,	// (0x000340a6) list_set_graphic_pane_g1_copy1_ParamLimits

0xc6bb,	// (0x000340a6) list_set_graphic_pane_g1_copy1

0x6916,	// (0x0002e301) list_set_graphic_pane_g2_copy1

0xc6d3,	// (0x000340be) list_set_graphic_pane_t1_copy1_ParamLimits

0xc6d3,	// (0x000340be) list_set_graphic_pane_t1_copy1

0xea3f,	// (0x0003642a) rs_clock_indi_pane_g1

0x691e,	// (0x0002e309) rs_clock_indi_pane_t1

0x692c,	// (0x0002e317) rs_indi_pane

0x6934,	// (0x0002e31f) rs_indi_pane_g1

0x693d,	// (0x0002e328) rs_indi_pane_g2

0x6946,	// (0x0002e331) rs_indi_pane_g3

0x0002,

0xfecc,	// (0x000378b7) rs_indi_pane_g

0xc99b,	// (0x00034386) bg_popup_preview_window_pane_cp03

0x694f,	// (0x0002e33a) popup_fep_tooltip_window_t1

0x2267,	// (0x00029c52) popup_note2_window_g2_ParamLimits

0x2267,	// (0x00029c52) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x00037657) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x00037657) popup_note2_window_g

0x26e2,	// (0x0002a0cd) bg_popup_sub_pane_cp11_ParamLimits

0x26ef,	// (0x0002a0da) cell_ai3_links_pane_g1_ParamLimits

0x2706,	// (0x0002a0f1) cell_ai3_links_pane_t1

0x908a,	// (0x00030a75) set_text_pane_t1_copy1_ParamLimits

0xc8ae,	// (0x00034299) cell_graphic_popup_pane_cp2_ParamLimits

0xc8ae,	// (0x00034299) cell_graphic_popup_pane_cp2

0x695d,	// (0x0002e348) cell_graphic_popup_pane_g1_cp2

0xbd03,	// (0x000336ee) cell_graphic_popup_pane_g2_cp2

0x6965,	// (0x0002e350) cell_graphic_popup_pane_g3_cp2

0x696d,	// (0x0002e358) cell_graphic_popup_pane_t2_cp2

0xbd14,	// (0x000336ff) grid_highlight_pane_cp3_cp2

0xc22a,	// (0x00033c15) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbf15,	// (0x00033900) main_tmo_pane_ParamLimits

0x43df,	// (0x0002bdca) popup_tmo_big_image_note_window

0x2f35,	// (0x0002a920) cell_ai5_widget_list_pane

0x2f3d,	// (0x0002a928) cell_ai5_widget_lrg_icon_pane

0xb64b,	// (0x00033036) tmo_note_info_pane_t1_ParamLimits

0xb660,	// (0x0003304b) tmo_note_info_pane_t2_ParamLimits

0xb675,	// (0x00033060) tmo_note_info_pane_t3_ParamLimits

0x63c6,	// (0x0002ddb1) tmo_note_info_pane_t4_ParamLimits

0x63d8,	// (0x0002ddc3) tmo_note_info_pane_t5_ParamLimits

0xfeba,	// (0x000378a5) tmo_note_info_pane_t_ParamLimits

0x6500,	// (0x0002deeb) settings_container_pane_ParamLimits

0x68e6,	// (0x0002e2d1) indicator_popup_pane_cp5

0x68e6,	// (0x0002e2d1) indicator_popup_pane_cp6

0xc6a9,	// (0x00034094) list_set_graphic_pane_copy1_ParamLimits

0xb8de,	// (0x000332c9) bg_popup_window_pane_cp23

0x697b,	// (0x0002e366) popup_tmo_big_image_note_window_g1

0x6984,	// (0x0002e36f) popup_tmo_big_image_note_window_t1

0x6992,	// (0x0002e37d) popup_tmo_big_image_note_window_t2

0x69a0,	// (0x0002e38b) popup_tmo_big_image_note_window_t3

0x0002,

0xfed3,	// (0x000378be) popup_tmo_big_image_note_window_t

0xea3f,	// (0x0003642a) cell_ai5_widget_lrg_icon_pane_g1

0x69ae,	// (0x0002e399) cell_ai5_widget_lrg_icon_pane_t1

0x69bc,	// (0x0002e3a7) cell_ai5_widget_list_row_pane_ParamLimits

0x69bc,	// (0x0002e3a7) cell_ai5_widget_list_row_pane

0x69d3,	// (0x0002e3be) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x69d3,	// (0x0002e3be) cell_ai5_widget_list_row_pane_g1

0x69e0,	// (0x0002e3cb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x69e0,	// (0x0002e3cb) cell_ai5_widget_list_row_pane_t1

0x6a0e,	// (0x0002e3f9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6a0e,	// (0x0002e3f9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeda,	// (0x000378c5) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeda,	// (0x000378c5) cell_ai5_widget_list_row_pane_t

0xb8de,	// (0x000332c9) main_fep_vtchi_ss_pane

0x6a52,	// (0x0002e43d) popup_fep_char_pre_window

0x6a5a,	// (0x0002e445) popup_fep_ituss_window

0xb728,	// (0x00033113) popup_fep_vkbss_window

0xb73a,	// (0x00033125) grid_vkbss_keypad_pane_ParamLimits

0xb73a,	// (0x00033125) grid_vkbss_keypad_pane

0x6a8d,	// (0x0002e478) ituss_keypad_pane

0xb750,	// (0x0003313b) aid_vkbss_key_offset_ParamLimits

0xb750,	// (0x0003313b) aid_vkbss_key_offset

0xb75c,	// (0x00033147) cell_vkbss_key_pane_ParamLimits

0xb75c,	// (0x00033147) cell_vkbss_key_pane

0xd4d8,	// (0x00034ec3) bg_cell_vkbss_key_g1_ParamLimits

0xd4d8,	// (0x00034ec3) bg_cell_vkbss_key_g1

0xb772,	// (0x0003315d) cell_vkbss_key_3p_pane_ParamLimits

0xb772,	// (0x0003315d) cell_vkbss_key_3p_pane

0xb786,	// (0x00033171) cell_vkbss_key_g1_ParamLimits

0xb786,	// (0x00033171) cell_vkbss_key_g1

0xb79a,	// (0x00033185) cell_vkbss_key_t1_ParamLimits

0xb79a,	// (0x00033185) cell_vkbss_key_t1

0xb7c5,	// (0x000331b0) cell_ituss_key_pane_ParamLimits

0xb7c5,	// (0x000331b0) cell_ituss_key_pane

0x6a9c,	// (0x0002e487) bg_cell_ituss_key_g1_ParamLimits

0x6a9c,	// (0x0002e487) bg_cell_ituss_key_g1

0x6aa8,	// (0x0002e493) cell_ituss_key_pane_g1_ParamLimits

0x6aa8,	// (0x0002e493) cell_ituss_key_pane_g1

0xb7d6,	// (0x000331c1) cell_ituss_key_pane_g2_ParamLimits

0xb7d6,	// (0x000331c1) cell_ituss_key_pane_g2

0x0002,

0xfee1,	// (0x000378cc) cell_ituss_key_pane_g_ParamLimits

0xfee1,	// (0x000378cc) cell_ituss_key_pane_g

0xb7fe,	// (0x000331e9) cell_ituss_key_t1_ParamLimits

0xb7fe,	// (0x000331e9) cell_ituss_key_t1

0xb838,	// (0x00033223) cell_ituss_key_t2_ParamLimits

0xb838,	// (0x00033223) cell_ituss_key_t2

0xb869,	// (0x00033254) cell_ituss_key_t3_ParamLimits

0xb869,	// (0x00033254) cell_ituss_key_t3

0xb838,	// (0x00033223) cell_ituss_key_t4_ParamLimits

0xb838,	// (0x00033223) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x000378d3) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x000378d3) cell_ituss_key_t

0x6ade,	// (0x0002e4c9) cell_vkbss_key_3p_pane_g1

0x6ad6,	// (0x0002e4c1) cell_vkbss_key_3p_pane_g2

0x6ace,	// (0x0002e4b9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x000378de) cell_vkbss_key_3p_pane_g

0xb8de,	// (0x000332c9) bg_popup_fep_char_preview_window_cp02

0xb8ac,	// (0x00033297) popup_fep_char_pre_window_t1

0xb477,	// (0x00032e62) main_ai5_sk_pane

0x6452,	// (0x0002de3d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x645e,	// (0x0002de49) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6473,	// (0x0002de5e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x647f,	// (0x0002de6a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec5,	// (0x000378b0) cell_contacts_ai5_widget_pane_g_ParamLimits

0x648b,	// (0x0002de76) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbf15,	// (0x00033900) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb8bb,	// (0x000332a6) main_ai5_sk_pane_g1

0xd0dd,	// (0x00034ac8) popup_query_code_window_g1

0x6a6c,	// (0x0002e457) popup_fep_vkb_icf_pane

0x6a77,	// (0x0002e462) popup_fep_vtchi_icf_pane

0x6ae6,	// (0x0002e4d1) bg_icf_pane

0x6af2,	// (0x0002e4dd) list_vkb_icf_pane

0x6b01,	// (0x0002e4ec) bg_icf_pane_cp01

0x6b14,	// (0x0002e4ff) vtchi_icf_list_pane

0x6b24,	// (0x0002e50f) list_vkb_icf_pane_t1_ParamLimits

0x6b24,	// (0x0002e50f) list_vkb_icf_pane_t1

0x6b39,	// (0x0002e524) vtchi_icf_list_pane_t1_ParamLimits

0x6b39,	// (0x0002e524) vtchi_icf_list_pane_t1

0x6a5a,	// (0x0002e445) popup_fep_ituss_window_ParamLimits

0x6a77,	// (0x0002e462) popup_fep_vtchi_icf_pane_ParamLimits

0x6a8d,	// (0x0002e478) ituss_keypad_pane_ParamLimits

0xb746,	// (0x00033131) ituss_sks_pane

0x6ae6,	// (0x0002e4d1) bg_icf_pane_ParamLimits

0x6a36,	// (0x0002e421) icf_edit_indi_pane_ParamLimits

0x6a36,	// (0x0002e421) icf_edit_indi_pane

0x6af2,	// (0x0002e4dd) list_vkb_icf_pane_ParamLimits

0x6b01,	// (0x0002e4ec) bg_icf_pane_cp01_ParamLimits

0x6a45,	// (0x0002e430) icf_edit_indi_pane_cp01_ParamLimits

0x6a45,	// (0x0002e430) icf_edit_indi_pane_cp01

0x6b1c,	// (0x0002e507) vtchi_query_pane

0x1b0a,	// (0x000294f5) icf_edit_indi_pane_g1_ParamLimits

0x1b0a,	// (0x000294f5) icf_edit_indi_pane_g1

0x6ba7,	// (0x0002e592) icf_edit_indi_pane_g2_ParamLimits

0x6ba7,	// (0x0002e592) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x000378f6) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x000378f6) icf_edit_indi_pane_g

0x6bb6,	// (0x0002e5a1) icf_edit_indi_pane_t1

0x6b50,	// (0x0002e53b) bg_input_focus_pane_cp042

0xbe4b,	// (0x00033836) vtchi_button_pane

0x6b59,	// (0x0002e544) vtchi_query_pane_t1

0x6b67,	// (0x0002e552) vtchi_query_pane_t2

0x6b75,	// (0x0002e560) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x000378e5) vtchi_query_pane_t

0xb8de,	// (0x000332c9) bg_button_pane_cp13

0x6b83,	// (0x0002e56e) vtchi_button_pane_g1

0xb8c4,	// (0x000332af) ituss_sks_pane_g1

0xb8ce,	// (0x000332b9) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x000378ec) ituss_sks_pane_g

0x6b99,	// (0x0002e584) ituss_sks_pane_t1

0x6b8b,	// (0x0002e576) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x000378f1) ituss_sks_pane_t

0xe76b,	// (0x00036156) indicator_nsta_pane_cp_g1

0xe773,	// (0x0003615e) indicator_nsta_pane_cp_g2

0xe77b,	// (0x00036166) indicator_nsta_pane_cp_g3

0xe76b,	// (0x00036156) indicator_nsta_pane_cp_g4

0xe773,	// (0x0003615e) indicator_nsta_pane_cp_g5

0xe77b,	// (0x00036166) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x000374a1) indicator_nsta_pane_cp_g

0xb13c,	// (0x00032b27) cell_graphic2_pane_t2_ParamLimits

0xb13c,	// (0x00032b27) cell_graphic2_pane_t2

0x0001,

0xfdbc,	// (0x000377a7) cell_graphic2_pane_t_ParamLimits

0xfdbc,	// (0x000377a7) cell_graphic2_pane_t

0xb169,	// (0x00032b54) cell_graphic2_control_pane_t1

0xeee5,	// (0x000368d0) signal_pane_g3_ParamLimits

0xeee5,	// (0x000368d0) signal_pane_g3

0xeef4,	// (0x000368df) signal_pane_g4_ParamLimits

0xeef4,	// (0x000368df) signal_pane_g4

0x6a20,	// (0x0002e40b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x6a20,	// (0x0002e40b) cell_ai5_widget_list_row_pane_t3

0x6abc,	// (0x0002e4a7) cell_ituss_key_pane_t1_ParamLimits

0x6abc,	// (0x0002e4a7) cell_ituss_key_pane_t1

0xce1e,	// (0x00034809) form_field_data_wide_pane_vc_t2_ParamLimits

0xce1e,	// (0x00034809) form_field_data_wide_pane_vc_t2

0xce30,	// (0x0003481b) form_field_data_wide_pane_vc_t3_ParamLimits

0xce30,	// (0x0003481b) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x000371f4) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x000371f4) form_field_data_wide_pane_vc_t

0xe4af,	// (0x00035e9a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xe4af,	// (0x00035e9a) form_field_slider_wide_pane_vc_t3

0xe57d,	// (0x00035f68) form_field_popup_wide_pane_vc_t2_ParamLimits

0xe57d,	// (0x00035f68) form_field_popup_wide_pane_vc_t2

0xe592,	// (0x00035f7d) form_field_popup_wide_pane_vc_t3_ParamLimits

0xe592,	// (0x00035f7d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x00037490) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x00037490) form_field_popup_wide_pane_vc_t

0xb500,	// (0x00032eeb) aid_fshwr2_btn_pane_ParamLimits

0xb50c,	// (0x00032ef7) aid_fshwr2_syb_pane_ParamLimits

0xb518,	// (0x00032f03) aid_fshwr2_txt_pane_ParamLimits

0xbf15,	// (0x00033900) fshwr2_bg_pane_ParamLimits

0xb524,	// (0x00032f0f) fshwr2_func_candi_pane_ParamLimits

0xb535,	// (0x00032f20) fshwr2_hwr_syb_pane_ParamLimits

0xb541,	// (0x00032f2c) fshwr2_icf_pane_ParamLimits

0xa439,	// (0x00031e24) list_double_graphic_pane_vc_g4_ParamLimits

0xa439,	// (0x00031e24) list_double_graphic_pane_vc_g4

0xb7f2,	// (0x000331dd) cell_ituss_key_pane_g3_ParamLimits

0xb7f2,	// (0x000331dd) cell_ituss_key_pane_g3

0xb89a,	// (0x00033285) cell_ituss_key_t5_ParamLimits

0xb89a,	// (0x00033285) cell_ituss_key_t5

0xb728,	// (0x00033113) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large

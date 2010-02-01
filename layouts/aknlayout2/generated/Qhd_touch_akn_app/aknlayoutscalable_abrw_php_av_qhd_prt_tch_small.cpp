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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002a810 };

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
0x6f68,	// (0x00031778) Screen

0x6f7c,	// (0x0003178c) application_window_ParamLimits

0x6f7c,	// (0x0003178c) application_window

0x6f96,	// (0x000317a6) screen_g1

0x4b94,	// (0x0002f3a4) area_bottom_pane_ParamLimits

0x4b94,	// (0x0002f3a4) area_bottom_pane

0x4c54,	// (0x0002f464) area_top_pane_ParamLimits

0x4c54,	// (0x0002f464) area_top_pane

0x4cf2,	// (0x0002f502) main_pane_ParamLimits

0x4cf2,	// (0x0002f502) main_pane

0x6fa0,	// (0x000317b0) misc_graphics

0x9626,	// (0x00033e36) battery_pane_ParamLimits

0x9626,	// (0x00033e36) battery_pane

0xa339,	// (0x00034b49) bg_status_flat_pane_g8

0xa341,	// (0x00034b51) bg_status_flat_pane_g9

0x96e8,	// (0x00033ef8) context_pane_ParamLimits

0x96e8,	// (0x00033ef8) context_pane

0x97fe,	// (0x0003400e) navi_pane_ParamLimits

0x97fe,	// (0x0003400e) navi_pane

0x987b,	// (0x0003408b) signal_pane_ParamLimits

0x987b,	// (0x0003408b) signal_pane

0x0008,

0xf88a,	// (0x0003a09a) bg_status_flat_pane_g

0x98e8,	// (0x000340f8) status_pane_g1_ParamLimits

0x98e8,	// (0x000340f8) status_pane_g1

0x98fc,	// (0x0003410c) status_pane_g2_ParamLimits

0x98fc,	// (0x0003410c) status_pane_g2

0x9908,	// (0x00034118) status_pane_g3_ParamLimits

0x9908,	// (0x00034118) status_pane_g3

0x0004,

0xf7b8,	// (0x00039fc8) status_pane_g_ParamLimits

0xf7b8,	// (0x00039fc8) status_pane_g

0x993c,	// (0x0003414c) title_pane_ParamLimits

0x993c,	// (0x0003414c) title_pane

0x9979,	// (0x00034189) uni_indicator_pane_ParamLimits

0x9979,	// (0x00034189) uni_indicator_pane

0x8fb7,	// (0x000337c7) bg_list_pane_ParamLimits

0x8fb7,	// (0x000337c7) bg_list_pane

0x5d6a,	// (0x0003057a) find_pane

0x8fd7,	// (0x000337e7) listscroll_app_pane_ParamLimits

0x8fd7,	// (0x000337e7) listscroll_app_pane

0x8fe3,	// (0x000337f3) listscroll_form_pane

0x5d72,	// (0x00030582) listscroll_gen_pane_ParamLimits

0x5d72,	// (0x00030582) listscroll_gen_pane

0x8fe3,	// (0x000337f3) listscroll_set_pane

0x8220,	// (0x00032a30) main_idle_act_pane

0x8c97,	// (0x000334a7) main_idle_trad_pane

0x8c97,	// (0x000334a7) main_list_empty_pane

0x8ffd,	// (0x0003380d) main_midp_pane

0x9009,	// (0x00033819) main_pane_g1_ParamLimits

0x9009,	// (0x00033819) main_pane_g1

0x9017,	// (0x00033827) popup_ai_message_window_ParamLimits

0x9017,	// (0x00033827) popup_ai_message_window

0x90b9,	// (0x000338c9) popup_fep_china_uni_window_ParamLimits

0x90b9,	// (0x000338c9) popup_fep_china_uni_window

0x9115,	// (0x00033925) popup_fep_japan_candidate_window_ParamLimits

0x9115,	// (0x00033925) popup_fep_japan_candidate_window

0x9135,	// (0x00033945) popup_fep_japan_predictive_window_ParamLimits

0x9135,	// (0x00033945) popup_fep_japan_predictive_window

0x9165,	// (0x00033975) popup_find_window

0x9172,	// (0x00033982) popup_grid_graphic_window_ParamLimits

0x9172,	// (0x00033982) popup_grid_graphic_window

0x919a,	// (0x000339aa) popup_large_graphic_colour_window

0x91c0,	// (0x000339d0) popup_menu_window_ParamLimits

0x91c0,	// (0x000339d0) popup_menu_window

0x9378,	// (0x00033b88) popup_note_image_window

0x9364,	// (0x00033b74) popup_note_wait_window_ParamLimits

0x9364,	// (0x00033b74) popup_note_wait_window

0x9364,	// (0x00033b74) popup_note_window_ParamLimits

0x9364,	// (0x00033b74) popup_note_window

0x93ce,	// (0x00033bde) popup_query_code_window_ParamLimits

0x93ce,	// (0x00033bde) popup_query_code_window

0x93e2,	// (0x00033bf2) popup_query_data_code_window_ParamLimits

0x93e2,	// (0x00033bf2) popup_query_data_code_window

0x93ff,	// (0x00033c0f) popup_query_data_window_ParamLimits

0x93ff,	// (0x00033c0f) popup_query_data_window

0x941b,	// (0x00033c2b) popup_query_sat_info_window_ParamLimits

0x941b,	// (0x00033c2b) popup_query_sat_info_window

0x9454,	// (0x00033c64) popup_snote_single_graphic_window_ParamLimits

0x9454,	// (0x00033c64) popup_snote_single_graphic_window

0x9454,	// (0x00033c64) popup_snote_single_text_window_ParamLimits

0x9454,	// (0x00033c64) popup_snote_single_text_window

0x9469,	// (0x00033c79) popup_sub_window_general

0x9599,	// (0x00033da9) popup_window_general_ParamLimits

0x9599,	// (0x00033da9) popup_window_general

0x95ae,	// (0x00033dbe) power_save_pane

0x5c1c,	// (0x0003042c) control_pane_g1_ParamLimits

0x5c1c,	// (0x0003042c) control_pane_g1

0x5c43,	// (0x00030453) control_pane_g2_ParamLimits

0x5c43,	// (0x00030453) control_pane_g2

0x8f60,	// (0x00033770) control_pane_g3_ParamLimits

0x8f60,	// (0x00033770) control_pane_g3

0x0007,

0xf7a0,	// (0x00039fb0) control_pane_g_ParamLimits

0xf7a0,	// (0x00039fb0) control_pane_g

0x5c89,	// (0x00030499) control_pane_t1_ParamLimits

0x5c89,	// (0x00030499) control_pane_t1

0x5cd5,	// (0x000304e5) control_pane_t2_ParamLimits

0x5cd5,	// (0x000304e5) control_pane_t2

0x0002,

0xf7b1,	// (0x00039fc1) control_pane_t_ParamLimits

0xf7b1,	// (0x00039fc1) control_pane_t

0x8e81,	// (0x00033691) navi_navi_volume_pane_cp1

0x8e8a,	// (0x0003369a) status_small_icon_pane

0x8e92,	// (0x000336a2) status_small_pane_g1_ParamLimits

0x8e92,	// (0x000336a2) status_small_pane_g1

0x8ec6,	// (0x000336d6) status_small_pane_g2_ParamLimits

0x8ec6,	// (0x000336d6) status_small_pane_g2

0x8ed2,	// (0x000336e2) status_small_pane_g3_ParamLimits

0x8ed2,	// (0x000336e2) status_small_pane_g3

0x8ede,	// (0x000336ee) status_small_pane_g4_ParamLimits

0x8ede,	// (0x000336ee) status_small_pane_g4

0x8eea,	// (0x000336fa) status_small_pane_g5_ParamLimits

0x8eea,	// (0x000336fa) status_small_pane_g5

0x8ef9,	// (0x00033709) status_small_pane_g6_ParamLimits

0x8ef9,	// (0x00033709) status_small_pane_g6

0x0007,

0xf78f,	// (0x00039f9f) status_small_pane_g_ParamLimits

0xf78f,	// (0x00039f9f) status_small_pane_g

0x8f29,	// (0x00033739) status_small_pane_t1

0x8f4c,	// (0x0003375c) status_small_wait_pane_ParamLimits

0x8f4c,	// (0x0003375c) status_small_wait_pane

0x8718,	// (0x00032f28) aid_levels_signal_ParamLimits

0x8718,	// (0x00032f28) aid_levels_signal

0x872a,	// (0x00032f3a) signal_pane_g1_ParamLimits

0x872a,	// (0x00032f3a) signal_pane_g1

0x873f,	// (0x00032f4f) signal_pane_g2_ParamLimits

0x873f,	// (0x00032f4f) signal_pane_g2

0x0001,

0xf724,	// (0x00039f34) signal_pane_g_ParamLimits

0xf724,	// (0x00039f34) signal_pane_g

0x8754,	// (0x00032f64) context_pane_g1

0x6faa,	// (0x000317ba) title_pane_g1

0x6fe0,	// (0x000317f0) title_pane_t1

0x7048,	// (0x00031858) title_pane_t2

0x706e,	// (0x0003187e) title_pane_t3

0x0002,

0xf573,	// (0x00039d83) title_pane_t

0x9991,	// (0x000341a1) aid_levels_battery_ParamLimits

0x9991,	// (0x000341a1) aid_levels_battery

0x99a5,	// (0x000341b5) battery_pane_g1_ParamLimits

0x99a5,	// (0x000341b5) battery_pane_g1

0x99bb,	// (0x000341cb) battery_pane_g2_ParamLimits

0x99bb,	// (0x000341cb) battery_pane_g2

0x0001,

0xf7c3,	// (0x00039fd3) battery_pane_g_ParamLimits

0xf7c3,	// (0x00039fd3) battery_pane_g

0xac81,	// (0x00035491) uni_indicator_pane_g1

0xac96,	// (0x000354a6) uni_indicator_pane_g2

0xacac,	// (0x000354bc) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0003a142) uni_indicator_pane_g

0x8ae7,	// (0x000332f7) navi_icon_pane_ParamLimits

0x8ae7,	// (0x000332f7) navi_icon_pane

0x8a30,	// (0x00033240) navi_midp_pane

0x8b03,	// (0x00033313) navi_navi_pane

0x8b0d,	// (0x0003331d) navi_text_pane_ParamLimits

0x8b0d,	// (0x0003331d) navi_text_pane

0x6f96,	// (0x000317a6) status_small_wait_pane_g1

0x7be3,	// (0x000323f3) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0003a13d) status_small_wait_pane_g

0xa9a6,	// (0x000351b6) navi_navi_icon_text_pane

0xa9ae,	// (0x000351be) navi_navi_pane_g1_ParamLimits

0xa9ae,	// (0x000351be) navi_navi_pane_g1

0xa9c0,	// (0x000351d0) navi_navi_pane_g2_ParamLimits

0xa9c0,	// (0x000351d0) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x0003a10b) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x0003a10b) navi_navi_pane_g

0xa9d2,	// (0x000351e2) navi_navi_tabs_pane

0xa9db,	// (0x000351eb) navi_navi_text_pane

0xa9a6,	// (0x000351b6) navi_navi_volume_pane

0xa97f,	// (0x0003518f) navi_text_pane_t1

0xa970,	// (0x00035180) navi_icon_pane_g1

0xa8b7,	// (0x000350c7) navi_navi_text_pane_t1

0x60b0,	// (0x000308c0) navi_navi_volume_pane_g1

0x60b8,	// (0x000308c8) volume_small_pane

0xa81d,	// (0x0003502d) navi_navi_icon_text_pane_g1

0xa825,	// (0x00035035) navi_navi_icon_text_pane_t1

0x8b03,	// (0x00033313) navi_tabs_2_long_pane

0x8b03,	// (0x00033313) navi_tabs_2_pane

0x8b03,	// (0x00033313) navi_tabs_3_long_pane

0x8b03,	// (0x00033313) navi_tabs_3_pane

0x8b03,	// (0x00033313) navi_tabs_4_pane

0x6090,	// (0x000308a0) tabs_2_active_pane_ParamLimits

0x6090,	// (0x000308a0) tabs_2_active_pane

0x60a0,	// (0x000308b0) tabs_2_passive_pane_ParamLimits

0x60a0,	// (0x000308b0) tabs_2_passive_pane

0x605e,	// (0x0003086e) tabs_3_active_pane_ParamLimits

0x605e,	// (0x0003086e) tabs_3_active_pane

0x606e,	// (0x0003087e) tabs_3_passive_pane_ParamLimits

0x606e,	// (0x0003087e) tabs_3_passive_pane

0x607f,	// (0x0003088f) tabs_3_passive_pane_cp_ParamLimits

0x607f,	// (0x0003088f) tabs_3_passive_pane_cp

0x601a,	// (0x0003082a) tabs_4_active_pane_ParamLimits

0x601a,	// (0x0003082a) tabs_4_active_pane

0x602b,	// (0x0003083b) tabs_4_passive_pane_ParamLimits

0x602b,	// (0x0003083b) tabs_4_passive_pane

0x603c,	// (0x0003084c) tabs_4_passive_pane_cp_ParamLimits

0x603c,	// (0x0003084c) tabs_4_passive_pane_cp

0x604d,	// (0x0003085d) tabs_4_passive_pane_cp2_ParamLimits

0x604d,	// (0x0003085d) tabs_4_passive_pane_cp2

0x5ff6,	// (0x00030806) tabs_2_long_active_pane_ParamLimits

0x5ff6,	// (0x00030806) tabs_2_long_active_pane

0x6008,	// (0x00030818) tabs_2_long_passive_pane_ParamLimits

0x6008,	// (0x00030818) tabs_2_long_passive_pane

0x5fb7,	// (0x000307c7) tabs_3_long_active_pane_ParamLimits

0x5fb7,	// (0x000307c7) tabs_3_long_active_pane

0x5fca,	// (0x000307da) tabs_3_long_passive_pane_ParamLimits

0x5fca,	// (0x000307da) tabs_3_long_passive_pane

0x5fe3,	// (0x000307f3) tabs_3_long_passive_pane_cp_ParamLimits

0x5fe3,	// (0x000307f3) tabs_3_long_passive_pane_cp

0x5f5d,	// (0x0003076d) volume_small_pane_g1

0x5f66,	// (0x00030776) volume_small_pane_g2

0x5f6f,	// (0x0003077f) volume_small_pane_g3

0x5f78,	// (0x00030788) volume_small_pane_g4

0x5f81,	// (0x00030791) volume_small_pane_g5

0x5f8a,	// (0x0003079a) volume_small_pane_g6

0x5f93,	// (0x000307a3) volume_small_pane_g7

0x5f9c,	// (0x000307ac) volume_small_pane_g8

0x5fa5,	// (0x000307b5) volume_small_pane_g9

0x5fae,	// (0x000307be) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x0003a0d7) volume_small_pane_g

0x7080,	// (0x00031890) bg_active_tab_pane_cp2_ParamLimits

0x7080,	// (0x00031890) bg_active_tab_pane_cp2

0x708e,	// (0x0003189e) tabs_3_active_pane_g1

0x7096,	// (0x000318a6) tabs_3_active_pane_t1

0x7080,	// (0x00031890) bg_passive_tab_pane_cp2_ParamLimits

0x7080,	// (0x00031890) bg_passive_tab_pane_cp2

0x708e,	// (0x0003189e) tabs_3_passive_pane_g1

0x7096,	// (0x000318a6) tabs_3_passive_pane_t1

0x7080,	// (0x00031890) bg_active_tab_pane_cp3_ParamLimits

0x7080,	// (0x00031890) bg_active_tab_pane_cp3

0x70a8,	// (0x000318b8) tabs_4_active_pane_g1

0x70b0,	// (0x000318c0) tabs_4_active_pane_t1

0x7080,	// (0x00031890) bg_passive_tab_pane_cp3_ParamLimits

0x7080,	// (0x00031890) bg_passive_tab_pane_cp3

0x70a8,	// (0x000318b8) tabs_4_1_passive_pane_g1

0x70b0,	// (0x000318c0) tabs_4_1_passive_pane_t1

0x8ffd,	// (0x0003380d) list_highlight_pane_cp2

0xaf0a,	// (0x0003571a) list_set_pane_ParamLimits

0xaf0a,	// (0x0003571a) list_set_pane

0xafb0,	// (0x000357c0) main_pane_set_t1_ParamLimits

0xafb0,	// (0x000357c0) main_pane_set_t1

0xafd0,	// (0x000357e0) main_pane_set_t2_ParamLimits

0xafd0,	// (0x000357e0) main_pane_set_t2

0xafe4,	// (0x000357f4) main_pane_set_t3_ParamLimits

0xafe4,	// (0x000357f4) main_pane_set_t3

0xaff6,	// (0x00035806) main_pane_set_t4_ParamLimits

0xaff6,	// (0x00035806) main_pane_set_t4

0x0003,

0xf997,	// (0x0003a1a7) main_pane_set_t_ParamLimits

0xf997,	// (0x0003a1a7) main_pane_set_t

0xb008,	// (0x00035818) setting_code_pane

0xb014,	// (0x00035824) setting_slider_graphic_pane

0xb014,	// (0x00035824) setting_slider_pane

0xb014,	// (0x00035824) setting_text_pane

0xb014,	// (0x00035824) setting_volume_pane

0x4f37,	// (0x0002f747) volume_set_pane

0x7080,	// (0x00031890) bg_set_opt_pane_cp

0x4f3f,	// (0x0002f74f) setting_slider_pane_t1

0x4f58,	// (0x0002f768) setting_slider_pane_t2

0x4f72,	// (0x0002f782) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00039d8a) setting_slider_pane_t

0x4f8a,	// (0x0002f79a) slider_set_pane

0x6fa0,	// (0x000317b0) bg_set_opt_pane_cp2

0x70c2,	// (0x000318d2) setting_slider_graphic_pane_g1

0x4fa0,	// (0x0002f7b0) setting_slider_graphic_pane_t1

0x4fb0,	// (0x0002f7c0) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00039d91) setting_slider_graphic_pane_t

0x4fc0,	// (0x0002f7d0) slider_set_pane_cp

0x6fa0,	// (0x000317b0) input_focus_pane_cp1

0xaec9,	// (0x000356d9) list_set_text_pane

0x6f96,	// (0x000317a6) setting_text_pane_g1

0x6fa0,	// (0x000317b0) input_focus_pane_cp2

0x6f96,	// (0x000317a6) setting_code_pane_g1

0x70cb,	// (0x000318db) setting_code_pane_t1

0x4fc8,	// (0x0002f7d8) set_text_pane_t1_ParamLimits

0x4fc8,	// (0x0002f7d8) set_text_pane_t1

0x8099,	// (0x000328a9) set_opt_bg_pane_g1

0x80a1,	// (0x000328b1) set_opt_bg_pane_g2

0xaea3,	// (0x000356b3) set_opt_bg_pane_g3

0x80b1,	// (0x000328c1) set_opt_bg_pane_g4

0x80b9,	// (0x000328c9) set_opt_bg_pane_g5

0x80c1,	// (0x000328d1) set_opt_bg_pane_g6

0xaead,	// (0x000356bd) set_opt_bg_pane_g7

0xaeb5,	// (0x000356c5) set_opt_bg_pane_g8

0xaebf,	// (0x000356cf) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0003a194) set_opt_bg_pane_g

0xae96,	// (0x000356a6) slider_set_pane_g1

0x6125,	// (0x00030935) slider_set_pane_g2

0x0006,

0xf975,	// (0x0003a185) slider_set_pane_g

0x60c1,	// (0x000308d1) volume_set_pane_g1

0x60c9,	// (0x000308d9) volume_set_pane_g2

0x60d1,	// (0x000308e1) volume_set_pane_g3

0x60d9,	// (0x000308e9) volume_set_pane_g4

0x60e1,	// (0x000308f1) volume_set_pane_g5

0x60e9,	// (0x000308f9) volume_set_pane_g6

0x60f1,	// (0x00030901) volume_set_pane_g7

0x60f9,	// (0x00030909) volume_set_pane_g8

0x6101,	// (0x00030911) volume_set_pane_g9

0x6109,	// (0x00030919) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0003a15d) volume_set_pane_g

0x70d9,	// (0x000318e9) indicator_pane_ParamLimits

0x70d9,	// (0x000318e9) indicator_pane

0x70e5,	// (0x000318f5) main_idle_pane_g2_ParamLimits

0x70e5,	// (0x000318f5) main_idle_pane_g2

0x710d,	// (0x0003191d) main_pane_idle_g1_ParamLimits

0x710d,	// (0x0003191d) main_pane_idle_g1

0x711a,	// (0x0003192a) popup_clock_digital_analogue_window_ParamLimits

0x711a,	// (0x0003192a) popup_clock_digital_analogue_window

0x7131,	// (0x00031941) soft_indicator_pane_ParamLimits

0x7131,	// (0x00031941) soft_indicator_pane

0x713d,	// (0x0003194d) wallpaper_pane_ParamLimits

0x713d,	// (0x0003194d) wallpaper_pane

0x6f96,	// (0x000317a6) wallpaper_pane_g1

0x7151,	// (0x00031961) indicator_pane_g1_ParamLimits

0x7151,	// (0x00031961) indicator_pane_g1

0xb299,	// (0x00035aa9) navi_navi_icon_text_pane_srt_g1

0x716c,	// (0x0003197c) soft_indicator_pane_t1

0x7186,	// (0x00031996) aid_ps_area_pane

0x7197,	// (0x000319a7) aid_ps_clock_pane

0x71a5,	// (0x000319b5) aid_ps_indicator_pane

0x71b1,	// (0x000319c1) indicator_ps_pane_ParamLimits

0x71b1,	// (0x000319c1) indicator_ps_pane

0x7906,	// (0x00032116) power_save_pane_g1_ParamLimits

0x7906,	// (0x00032116) power_save_pane_g1

0x7912,	// (0x00032122) power_save_pane_g2_ParamLimits

0x7912,	// (0x00032122) power_save_pane_g2

0x4b48,	// (0x0002f358) aid_navinavi_width_pane

0x7186,	// (0x00031996) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00039d96) power_save_pane_g_ParamLimits

0xf586,	// (0x00039d96) power_save_pane_g

0x7920,	// (0x00032130) power_save_pane_t1_ParamLimits

0x7920,	// (0x00032130) power_save_pane_t1

0x7197,	// (0x000319a7) aid_ps_clock_pane_ParamLimits

0x71a5,	// (0x000319b5) aid_ps_indicator_pane_ParamLimits

0x7932,	// (0x00032142) power_save_pane_t4_ParamLimits

0x7932,	// (0x00032142) power_save_pane_t4

0x0001,

0xf58b,	// (0x00039d9b) power_save_pane_t_ParamLimits

0xf58b,	// (0x00039d9b) power_save_pane_t

0x795c,	// (0x0003216c) power_save_t3_ParamLimits

0x795c,	// (0x0003216c) power_save_t3

0x7947,	// (0x00032157) power_save_t2_ParamLimits

0x7947,	// (0x00032157) power_save_t2

0x7971,	// (0x00032181) indicator_ps_pane_g1

0x797a,	// (0x0003218a) ai_gene_pane_ParamLimits

0x797a,	// (0x0003218a) ai_gene_pane

0x7986,	// (0x00032196) ai_links_pane_ParamLimits

0x7986,	// (0x00032196) ai_links_pane

0x7992,	// (0x000321a2) indicator_pane_cp1_ParamLimits

0x7992,	// (0x000321a2) indicator_pane_cp1

0x799e,	// (0x000321ae) main_pane_idle_g1_cp_ParamLimits

0x799e,	// (0x000321ae) main_pane_idle_g1_cp

0x79aa,	// (0x000321ba) popup_ai_links_title_window

0x79b3,	// (0x000321c3) soft_indicator_pane_cp1_ParamLimits

0x79b3,	// (0x000321c3) soft_indicator_pane_cp1

0xac6f,	// (0x0003547f) ai_links_pane_g1

0xac78,	// (0x00035488) grid_ai_links_pane

0xac52,	// (0x00035462) ai_gene_pane_1

0xac5d,	// (0x0003546d) ai_gene_pane_2

0xac66,	// (0x00035476) list_highlight_pane_cp4

0xac36,	// (0x00035446) cell_ai_link_pane_ParamLimits

0xac36,	// (0x00035446) cell_ai_link_pane

0xac2e,	// (0x0003543e) cell_ai_link_pane_g1

0x7be3,	// (0x000323f3) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0003a138) cell_ai_link_pane_g

0x6fa0,	// (0x000317b0) grid_highlight_cp2

0x6fa0,	// (0x000317b0) bg_popup_sub_pane_cp1

0x79cd,	// (0x000321dd) popup_ai_links_title_window_t1

0xab7c,	// (0x0003538c) ai_gene_pane_1_g1_ParamLimits

0xab7c,	// (0x0003538c) ai_gene_pane_1_g1

0xab88,	// (0x00035398) ai_gene_pane_1_g2_ParamLimits

0xab88,	// (0x00035398) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0003a12e) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0003a12e) ai_gene_pane_1_g

0xab95,	// (0x000353a5) ai_gene_pane_1_t1_ParamLimits

0xab95,	// (0x000353a5) ai_gene_pane_1_t1

0xabc9,	// (0x000353d9) grid_ai_soft_ind_pane

0xab67,	// (0x00035377) ai_gene_pane_2_t1_ParamLimits

0xab67,	// (0x00035377) ai_gene_pane_2_t1

0x79dc,	// (0x000321ec) main_pane_empty_t1_ParamLimits

0x79dc,	// (0x000321ec) main_pane_empty_t1

0x79f4,	// (0x00032204) main_pane_empty_t2_ParamLimits

0x79f4,	// (0x00032204) main_pane_empty_t2

0x7a09,	// (0x00032219) main_pane_empty_t3_ParamLimits

0x7a09,	// (0x00032219) main_pane_empty_t3

0x7a1b,	// (0x0003222b) main_pane_empty_t4_ParamLimits

0x7a1b,	// (0x0003222b) main_pane_empty_t4

0x7a2d,	// (0x0003223d) main_pane_empty_t5_ParamLimits

0x7a2d,	// (0x0003223d) main_pane_empty_t5

0x0004,

0xf590,	// (0x00039da0) main_pane_empty_t_ParamLimits

0xf590,	// (0x00039da0) main_pane_empty_t

0x80ea,	// (0x000328fa) bg_popup_window_pane_ParamLimits

0x80ea,	// (0x000328fa) bg_popup_window_pane

0xa8c5,	// (0x000350d5) find_popup_pane_cp2_ParamLimits

0xa8c5,	// (0x000350d5) find_popup_pane_cp2

0xa8d1,	// (0x000350e1) heading_pane_ParamLimits

0xa8d1,	// (0x000350e1) heading_pane

0x6fa0,	// (0x000317b0) bg_popup_sub_pane

0xa83f,	// (0x0003504f) bg_popup_window_pane_g1_ParamLimits

0xa83f,	// (0x0003504f) bg_popup_window_pane_g1

0xa84b,	// (0x0003505b) bg_popup_window_pane_g2_ParamLimits

0xa84b,	// (0x0003505b) bg_popup_window_pane_g2

0xa857,	// (0x00035067) bg_popup_window_pane_g3_ParamLimits

0xa857,	// (0x00035067) bg_popup_window_pane_g3

0xa863,	// (0x00035073) bg_popup_window_pane_g4_ParamLimits

0xa863,	// (0x00035073) bg_popup_window_pane_g4

0xa86f,	// (0x0003507f) bg_popup_window_pane_g5_ParamLimits

0xa86f,	// (0x0003507f) bg_popup_window_pane_g5

0xa87b,	// (0x0003508b) bg_popup_window_pane_g6_ParamLimits

0xa87b,	// (0x0003508b) bg_popup_window_pane_g6

0xa887,	// (0x00035097) bg_popup_window_pane_g7_ParamLimits

0xa887,	// (0x00035097) bg_popup_window_pane_g7

0xa893,	// (0x000350a3) bg_popup_window_pane_g8_ParamLimits

0xa893,	// (0x000350a3) bg_popup_window_pane_g8

0xa89f,	// (0x000350af) bg_popup_window_pane_g9_ParamLimits

0xa89f,	// (0x000350af) bg_popup_window_pane_g9

0xa8ab,	// (0x000350bb) bg_popup_window_pane_g10_ParamLimits

0xa8ab,	// (0x000350bb) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0003a0f6) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0003a0f6) bg_popup_window_pane_g

0xa7d4,	// (0x00034fe4) bg_popup_heading_pane_ParamLimits

0xa7d4,	// (0x00034fe4) bg_popup_heading_pane

0x61ad,	// (0x000309bd) tabs_4_passive_pane_cp_srt_ParamLimits

0x61ad,	// (0x000309bd) tabs_4_passive_pane_cp_srt

0x61bf,	// (0x000309cf) tabs_4_passive_pane_srt_ParamLimits

0xa7e8,	// (0x00034ff8) heading_pane_g2

0x61bf,	// (0x000309cf) tabs_4_passive_pane_srt

0x8ffd,	// (0x0003380d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ffd,	// (0x0003380d) bg_passive_tab_pane_cp3_srt

0xa7f0,	// (0x00035000) heading_pane_t1_ParamLimits

0xa7f0,	// (0x00035000) heading_pane_t1

0xa807,	// (0x00035017) heading_pane_t2_ParamLimits

0xa807,	// (0x00035017) heading_pane_t2

0x0001,

0xf8e1,	// (0x0003a0f1) heading_pane_t_ParamLimits

0xf8e1,	// (0x0003a0f1) heading_pane_t

0xa301,	// (0x00034b11) bg_popup_heading_pane_g1

0xa3b0,	// (0x00034bc0) bg_popup_heading_pane_g2

0xa3ba,	// (0x00034bca) bg_popup_heading_pane_g3

0xa3c4,	// (0x00034bd4) bg_popup_heading_pane_g4

0xa3ce,	// (0x00034bde) bg_popup_heading_pane_g5

0xa3d8,	// (0x00034be8) bg_popup_heading_pane_g6

0xa3e0,	// (0x00034bf0) bg_popup_heading_pane_g7

0xa3e8,	// (0x00034bf8) bg_popup_heading_pane_g8

0xa3f2,	// (0x00034c02) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0003a0ad) bg_popup_heading_pane_g

0x9a93,	// (0x000342a3) bg_popup_sub_pane_g1

0x9aa3,	// (0x000342b3) bg_popup_sub_pane_g2

0x9a9b,	// (0x000342ab) bg_popup_sub_pane_g3

0x9ab3,	// (0x000342c3) bg_popup_sub_pane_g4

0x9aab,	// (0x000342bb) bg_popup_sub_pane_g5

0x9abb,	// (0x000342cb) bg_popup_sub_pane_g6

0x9ac3,	// (0x000342d3) bg_popup_sub_pane_g7

0x9ad3,	// (0x000342e3) bg_popup_sub_pane_g8

0x9acb,	// (0x000342db) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0003a087) bg_popup_sub_pane_g

0x7a41,	// (0x00032251) bg_popup_window_pane_cp5_ParamLimits

0x7a41,	// (0x00032251) bg_popup_window_pane_cp5

0x7a5d,	// (0x0003226d) popup_note_window_g1_ParamLimits

0x7a5d,	// (0x0003226d) popup_note_window_g1

0x7a69,	// (0x00032279) popup_note_window_t1_ParamLimits

0x7a69,	// (0x00032279) popup_note_window_t1

0x7a7f,	// (0x0003228f) popup_note_window_t2_ParamLimits

0x7a7f,	// (0x0003228f) popup_note_window_t2

0x7a95,	// (0x000322a5) popup_note_window_t3_ParamLimits

0x7a95,	// (0x000322a5) popup_note_window_t3

0x7aab,	// (0x000322bb) popup_note_window_t4_ParamLimits

0x7aab,	// (0x000322bb) popup_note_window_t4

0x7ad3,	// (0x000322e3) popup_note_window_t5_ParamLimits

0x7ad3,	// (0x000322e3) popup_note_window_t5

0x0004,

0xf59b,	// (0x00039dab) popup_note_window_t_ParamLimits

0xf59b,	// (0x00039dab) popup_note_window_t

0x7af7,	// (0x00032307) bg_popup_window_pane_cp6_ParamLimits

0x7af7,	// (0x00032307) bg_popup_window_pane_cp6

0xa27d,	// (0x00034a8d) popup_note_image_window_g1_ParamLimits

0xa27d,	// (0x00034a8d) popup_note_image_window_g1

0xa289,	// (0x00034a99) popup_note_image_window_g2_ParamLimits

0xa289,	// (0x00034a99) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x0003a07b) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x0003a07b) popup_note_image_window_g

0xa2a2,	// (0x00034ab2) popup_note_image_window_t1_ParamLimits

0xa2a2,	// (0x00034ab2) popup_note_image_window_t1

0xa2bb,	// (0x00034acb) popup_note_image_window_t2_ParamLimits

0xa2bb,	// (0x00034acb) popup_note_image_window_t2

0xa2d4,	// (0x00034ae4) popup_note_image_window_t3_ParamLimits

0xa2d4,	// (0x00034ae4) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0003a080) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0003a080) popup_note_image_window_t

0xa13e,	// (0x0003494e) bg_popup_window_pane_cp7_ParamLimits

0xa13e,	// (0x0003494e) bg_popup_window_pane_cp7

0xa16e,	// (0x0003497e) popup_note_wait_window_g1_ParamLimits

0xa16e,	// (0x0003497e) popup_note_wait_window_g1

0xa17a,	// (0x0003498a) popup_note_wait_window_g2_ParamLimits

0xa17a,	// (0x0003498a) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0003a069) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0003a069) popup_note_wait_window_g

0xa192,	// (0x000349a2) popup_note_wait_window_t1_ParamLimits

0xa192,	// (0x000349a2) popup_note_wait_window_t1

0xa1b9,	// (0x000349c9) popup_note_wait_window_t2_ParamLimits

0xa1b9,	// (0x000349c9) popup_note_wait_window_t2

0xa1d6,	// (0x000349e6) popup_note_wait_window_t3_ParamLimits

0xa1d6,	// (0x000349e6) popup_note_wait_window_t3

0xa1e9,	// (0x000349f9) popup_note_wait_window_t4_ParamLimits

0xa1e9,	// (0x000349f9) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0003a070) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0003a070) popup_note_wait_window_t

0xa20e,	// (0x00034a1e) wait_bar_pane_ParamLimits

0xa20e,	// (0x00034a1e) wait_bar_pane

0x6fa0,	// (0x000317b0) wait_anim_pane

0x6fa0,	// (0x000317b0) wait_border_pane

0x6f96,	// (0x000317a6) wait_anim_pane_g1

0x6f96,	// (0x000317a6) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x00039f2f) wait_anim_pane_g

0xa0e2,	// (0x000348f2) wait_border_pane_g1

0xa0ed,	// (0x000348fd) wait_border_pane_g2

0xa0f6,	// (0x00034906) wait_border_pane_g3

0x0002,

0xf852,	// (0x0003a062) wait_border_pane_g

0x9f4d,	// (0x0003475d) bg_popup_window_pane_cp16_ParamLimits

0x9f4d,	// (0x0003475d) bg_popup_window_pane_cp16

0xa04d,	// (0x0003485d) indicator_popup_pane_cp4_ParamLimits

0xa04d,	// (0x0003485d) indicator_popup_pane_cp4

0xa061,	// (0x00034871) popup_query_data_window_t1_ParamLimits

0xa061,	// (0x00034871) popup_query_data_window_t1

0xa073,	// (0x00034883) popup_query_data_window_t2_ParamLimits

0xa073,	// (0x00034883) popup_query_data_window_t2

0xa08c,	// (0x0003489c) popup_query_data_window_t3_ParamLimits

0xa08c,	// (0x0003489c) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x0003a05b) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x0003a05b) popup_query_data_window_t

0xa0a6,	// (0x000348b6) query_popup_data_pane_ParamLimits

0xa0a6,	// (0x000348b6) query_popup_data_pane

0xa0ba,	// (0x000348ca) query_popup_data_pane_cp1_ParamLimits

0xa0ba,	// (0x000348ca) query_popup_data_pane_cp1

0x9f4d,	// (0x0003475d) bg_popup_window_pane_cp10_ParamLimits

0x9f4d,	// (0x0003475d) bg_popup_window_pane_cp10

0x9f7f,	// (0x0003478f) indicator_popup_pane_ParamLimits

0x9f7f,	// (0x0003478f) indicator_popup_pane

0x9fa1,	// (0x000347b1) popup_query_code_window_t1_ParamLimits

0x9fa1,	// (0x000347b1) popup_query_code_window_t1

0x9fbb,	// (0x000347cb) popup_query_code_window_t2_ParamLimits

0x9fbb,	// (0x000347cb) popup_query_code_window_t2

0xa004,	// (0x00034814) popup_query_code_window_t3_ParamLimits

0xa004,	// (0x00034814) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0003a054) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0003a054) popup_query_code_window_t

0xa033,	// (0x00034843) query_popup_pane_ParamLimits

0xa033,	// (0x00034843) query_popup_pane

0x7af7,	// (0x00032307) bg_popup_window_pane_cp15_ParamLimits

0x7af7,	// (0x00032307) bg_popup_window_pane_cp15

0x7b15,	// (0x00032325) indicator_popup_pane_cp1_ParamLimits

0x7b15,	// (0x00032325) indicator_popup_pane_cp1

0x7b28,	// (0x00032338) indicator_popup_pane_cp2_ParamLimits

0x7b28,	// (0x00032338) indicator_popup_pane_cp2

0x7b3b,	// (0x0003234b) popup_query_data_code_window_g1_ParamLimits

0x7b3b,	// (0x0003234b) popup_query_data_code_window_g1

0x7b4e,	// (0x0003235e) popup_query_data_code_window_t1_ParamLimits

0x7b4e,	// (0x0003235e) popup_query_data_code_window_t1

0x7b60,	// (0x00032370) popup_query_data_code_window_t2_ParamLimits

0x7b60,	// (0x00032370) popup_query_data_code_window_t2

0x7b72,	// (0x00032382) popup_query_data_code_window_t3_ParamLimits

0x7b72,	// (0x00032382) popup_query_data_code_window_t3

0x7b88,	// (0x00032398) popup_query_data_code_window_t4_ParamLimits

0x7b88,	// (0x00032398) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00039db6) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00039db6) popup_query_data_code_window_t

0x5e1d,	// (0x0003062d) list_single_midp_graphic_pane_g3

0x7ba0,	// (0x000323b0) query_popup_data_pane_cp2_ParamLimits

0x7bb3,	// (0x000323c3) query_popup_pane_cp2_ParamLimits

0x7bb3,	// (0x000323c3) query_popup_pane_cp2

0x6fa0,	// (0x000317b0) bg_popup_window_pane_cp11

0x9f45,	// (0x00034755) heading_pane_cp5

0x7c9b,	// (0x000324ab) listscroll_popup_info_pane

0x6fa0,	// (0x000317b0) input_focus_pane_cp3

0x7bc6,	// (0x000323d6) query_popup_pane_t1

0x7bd4,	// (0x000323e4) list_popup_info_pane_ParamLimits

0x7bd4,	// (0x000323e4) list_popup_info_pane

0x7be3,	// (0x000323f3) listscroll_popup_info_pane_g1

0x7beb,	// (0x000323fb) scroll_pane_cp7

0x7bf5,	// (0x00032405) popup_info_list_pane_t1_ParamLimits

0x7bf5,	// (0x00032405) popup_info_list_pane_t1

0x7c0f,	// (0x0003241f) popup_info_list_pane_t2_ParamLimits

0x7c0f,	// (0x0003241f) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00039dbf) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00039dbf) popup_info_list_pane_t

0x6fa0,	// (0x000317b0) bg_popup_window_pane_cp12

0xb2b3,	// (0x00035ac3) find_popup_pane

0x7080,	// (0x00031890) bg_popup_window_pane_cp3

0x7c29,	// (0x00032439) heading_pane_cp3

0x7c35,	// (0x00032445) listscroll_popup_graphic_pane

0x6fa0,	// (0x000317b0) bg_popup_window_pane_cp4

0x7c91,	// (0x000324a1) heading_pane_cp4

0x7c9b,	// (0x000324ab) listscroll_popup_colour_pane

0x7ca3,	// (0x000324b3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7ca3,	// (0x000324b3) cell_large_graphic_colour_none_popup_pane

0x7cb7,	// (0x000324c7) grid_large_graphic_colour_popup_pane_ParamLimits

0x7cb7,	// (0x000324c7) grid_large_graphic_colour_popup_pane

0x7ce3,	// (0x000324f3) listscroll_popup_colour_pane_g1_ParamLimits

0x7ce3,	// (0x000324f3) listscroll_popup_colour_pane_g1

0x7cfa,	// (0x0003250a) listscroll_popup_colour_pane_g2_ParamLimits

0x7cfa,	// (0x0003250a) listscroll_popup_colour_pane_g2

0x7d11,	// (0x00032521) listscroll_popup_colour_pane_g3_ParamLimits

0x7d11,	// (0x00032521) listscroll_popup_colour_pane_g3

0x7d21,	// (0x00032531) listscroll_popup_colour_pane_g4_ParamLimits

0x7d21,	// (0x00032531) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00039dc4) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00039dc4) listscroll_popup_colour_pane_g

0x7d35,	// (0x00032545) scroll_pane_cp6_ParamLimits

0x7d35,	// (0x00032545) scroll_pane_cp6

0x7d47,	// (0x00032557) cell_large_graphic_colour_popup_pane_ParamLimits

0x7d47,	// (0x00032557) cell_large_graphic_colour_popup_pane

0x7d66,	// (0x00032576) cell_large_graphic_colour_none_popup_pane_t1

0x6fa0,	// (0x000317b0) grid_highlight_pane_cp5

0x7d75,	// (0x00032585) cell_large_graphic_colour_popup_pane_g1

0x7d7d,	// (0x0003258d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00039dcd) cell_large_graphic_colour_popup_pane_g

0x7d85,	// (0x00032595) cell_large_graphic_colour_popup_pane_g2_copy1

0x7d8e,	// (0x0003259e) grid_highlight_pane_cp4

0x7d96,	// (0x000325a6) bg_popup_window_pane_cp8_ParamLimits

0x7d96,	// (0x000325a6) bg_popup_window_pane_cp8

0x7db1,	// (0x000325c1) popup_snote_single_text_window_g1_ParamLimits

0x7db1,	// (0x000325c1) popup_snote_single_text_window_g1

0x7dc3,	// (0x000325d3) popup_snote_single_text_window_t1_ParamLimits

0x7dc3,	// (0x000325d3) popup_snote_single_text_window_t1

0x7dd6,	// (0x000325e6) popup_snote_single_text_window_t2_ParamLimits

0x7dd6,	// (0x000325e6) popup_snote_single_text_window_t2

0x7de9,	// (0x000325f9) popup_snote_single_text_window_t3_ParamLimits

0x7de9,	// (0x000325f9) popup_snote_single_text_window_t3

0x7e22,	// (0x00032632) popup_snote_single_text_window_t4_ParamLimits

0x7e22,	// (0x00032632) popup_snote_single_text_window_t4

0x7e56,	// (0x00032666) popup_snote_single_text_window_t5_ParamLimits

0x7e56,	// (0x00032666) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00039dd2) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00039dd2) popup_snote_single_text_window_t

0x7e85,	// (0x00032695) bg_popup_window_pane_cp9_ParamLimits

0x7e85,	// (0x00032695) bg_popup_window_pane_cp9

0x7db1,	// (0x000325c1) popup_snote_single_graphic_window_g1_ParamLimits

0x7db1,	// (0x000325c1) popup_snote_single_graphic_window_g1

0x7e93,	// (0x000326a3) popup_snote_single_graphic_window_g2_ParamLimits

0x7e93,	// (0x000326a3) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00039ddd) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00039ddd) popup_snote_single_graphic_window_g

0x7e9f,	// (0x000326af) popup_snote_single_graphic_window_t1_ParamLimits

0x7e9f,	// (0x000326af) popup_snote_single_graphic_window_t1

0x7eb2,	// (0x000326c2) popup_snote_single_graphic_window_t2_ParamLimits

0x7eb2,	// (0x000326c2) popup_snote_single_graphic_window_t2

0x7ec5,	// (0x000326d5) popup_snote_single_graphic_window_t3_ParamLimits

0x7ec5,	// (0x000326d5) popup_snote_single_graphic_window_t3

0x7efe,	// (0x0003270e) popup_snote_single_graphic_window_t4_ParamLimits

0x7efe,	// (0x0003270e) popup_snote_single_graphic_window_t4

0x7f32,	// (0x00032742) popup_snote_single_graphic_window_t5_ParamLimits

0x7f32,	// (0x00032742) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00039de2) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00039de2) popup_snote_single_graphic_window_t

0xb1f7,	// (0x00035a07) grid_graphic_popup_pane_ParamLimits

0xb1f7,	// (0x00035a07) grid_graphic_popup_pane

0xb21f,	// (0x00035a2f) listscroll_popup_graphic_pane_g1_ParamLimits

0xb21f,	// (0x00035a2f) listscroll_popup_graphic_pane_g1

0xb233,	// (0x00035a43) listscroll_popup_graphic_pane_g2_ParamLimits

0xb233,	// (0x00035a43) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0003a1d1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0003a1d1) listscroll_popup_graphic_pane_g

0xb247,	// (0x00035a57) scroll_pane_cp5

0xb1a0,	// (0x000359b0) cell_graphic_popup_pane_ParamLimits

0xb1a0,	// (0x000359b0) cell_graphic_popup_pane

0xb181,	// (0x00035991) cell_graphic_popup_pane_g1

0xb189,	// (0x00035999) cell_graphic_popup_pane_g2

0x7d85,	// (0x00032595) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0003a1ca) cell_graphic_popup_pane_g

0xb192,	// (0x000359a2) cell_graphic_popup_pane_t2

0x7d8e,	// (0x0003259e) grid_highlight_pane_cp3

0x7f73,	// (0x00032783) list_gen_pane_ParamLimits

0x7f73,	// (0x00032783) list_gen_pane

0x7fa5,	// (0x000327b5) scroll_pane

0xb0e3,	// (0x000358f3) bg_list_pane_g1_ParamLimits

0xb0e3,	// (0x000358f3) bg_list_pane_g1

0xb0fe,	// (0x0003590e) bg_list_pane_g2_ParamLimits

0xb0fe,	// (0x0003590e) bg_list_pane_g2

0xb111,	// (0x00035921) bg_list_pane_g3_ParamLimits

0xb111,	// (0x00035921) bg_list_pane_g3

0xb123,	// (0x00035933) bg_list_pane_g4_ParamLimits

0xb123,	// (0x00035933) bg_list_pane_g4

0xb135,	// (0x00035945) bg_list_pane_g5_ParamLimits

0xb135,	// (0x00035945) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0003a1bf) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0003a1bf) bg_list_pane_g

0xb09a,	// (0x000358aa) list_double2_graphic_large_graphic_pane_ParamLimits

0xb09a,	// (0x000358aa) list_double2_graphic_large_graphic_pane

0xb09a,	// (0x000358aa) list_double2_graphic_pane_ParamLimits

0xb09a,	// (0x000358aa) list_double2_graphic_pane

0xb09a,	// (0x000358aa) list_double2_large_graphic_pane_ParamLimits

0xb09a,	// (0x000358aa) list_double2_large_graphic_pane

0x725e,	// (0x00031a6e) list_double2_pane_ParamLimits

0x725e,	// (0x00031a6e) list_double2_pane

0xb09a,	// (0x000358aa) list_double_graphic_heading_pane_ParamLimits

0xb09a,	// (0x000358aa) list_double_graphic_heading_pane

0xb09a,	// (0x000358aa) list_double_graphic_pane_ParamLimits

0xb09a,	// (0x000358aa) list_double_graphic_pane

0xb09a,	// (0x000358aa) list_double_heading_pane_ParamLimits

0xb09a,	// (0x000358aa) list_double_heading_pane

0xb09a,	// (0x000358aa) list_double_large_graphic_pane_ParamLimits

0xb09a,	// (0x000358aa) list_double_large_graphic_pane

0xb09a,	// (0x000358aa) list_double_number_pane_ParamLimits

0xb09a,	// (0x000358aa) list_double_number_pane

0xb09a,	// (0x000358aa) list_double_pane_ParamLimits

0xb09a,	// (0x000358aa) list_double_pane

0xb09a,	// (0x000358aa) list_double_time_pane_ParamLimits

0xb09a,	// (0x000358aa) list_double_time_pane

0xb09a,	// (0x000358aa) list_setting_number_pane_ParamLimits

0xb09a,	// (0x000358aa) list_setting_number_pane

0xb09a,	// (0x000358aa) list_setting_pane_ParamLimits

0xb09a,	// (0x000358aa) list_setting_pane

0x7299,	// (0x00031aa9) list_single_2graphic_pane_ParamLimits

0x7299,	// (0x00031aa9) list_single_2graphic_pane

0x7299,	// (0x00031aa9) list_single_graphic_heading_pane_ParamLimits

0x7299,	// (0x00031aa9) list_single_graphic_heading_pane

0x7299,	// (0x00031aa9) list_single_graphic_pane_ParamLimits

0x7299,	// (0x00031aa9) list_single_graphic_pane

0x7299,	// (0x00031aa9) list_single_heading_pane_ParamLimits

0x7299,	// (0x00031aa9) list_single_heading_pane

0x72f4,	// (0x00031b04) list_single_large_graphic_pane_ParamLimits

0x72f4,	// (0x00031b04) list_single_large_graphic_pane

0x7299,	// (0x00031aa9) list_single_number_heading_pane_ParamLimits

0x7299,	// (0x00031aa9) list_single_number_heading_pane

0x7299,	// (0x00031aa9) list_single_number_pane_ParamLimits

0x7299,	// (0x00031aa9) list_single_number_pane

0x7299,	// (0x00031aa9) list_single_pane_ParamLimits

0x7299,	// (0x00031aa9) list_single_pane

0x6fa0,	// (0x000317b0) list_highlight_pane_cp1

0x4fef,	// (0x0002f7ff) list_single_pane_g1_ParamLimits

0x4fef,	// (0x0002f7ff) list_single_pane_g1

0x4ffb,	// (0x0002f80b) list_single_pane_g2_ParamLimits

0x4ffb,	// (0x0002f80b) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00039df4) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00039df4) list_single_pane_g

0x7248,	// (0x00031a58) list_single_pane_t1_ParamLimits

0x7248,	// (0x00031a58) list_single_pane_t1

0x4fef,	// (0x0002f7ff) list_single_number_pane_g1_ParamLimits

0x4fef,	// (0x0002f7ff) list_single_number_pane_g1

0x4ffb,	// (0x0002f80b) list_single_number_pane_g2_ParamLimits

0x4ffb,	// (0x0002f80b) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00039df4) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00039df4) list_single_number_pane_g

0x71f2,	// (0x00031a02) list_single_number_pane_t1_ParamLimits

0x71f2,	// (0x00031a02) list_single_number_pane_t1

0x7208,	// (0x00031a18) list_single_number_pane_t2_ParamLimits

0x7208,	// (0x00031a18) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0003a180) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0003a180) list_single_number_pane_t

0x4fe3,	// (0x0002f7f3) list_single_graphic_pane_g1_ParamLimits

0x4fe3,	// (0x0002f7f3) list_single_graphic_pane_g1

0x4fef,	// (0x0002f7ff) list_single_graphic_pane_g2_ParamLimits

0x4fef,	// (0x0002f7ff) list_single_graphic_pane_g2

0x4ffb,	// (0x0002f80b) list_single_graphic_pane_g3_ParamLimits

0x4ffb,	// (0x0002f80b) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00039ded) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00039ded) list_single_graphic_pane_g

0x5007,	// (0x0002f817) list_single_graphic_pane_t1_ParamLimits

0x5007,	// (0x0002f817) list_single_graphic_pane_t1

0x4fef,	// (0x0002f7ff) list_single_heading_pane_g1_ParamLimits

0x4fef,	// (0x0002f7ff) list_single_heading_pane_g1

0x4ffb,	// (0x0002f80b) list_single_heading_pane_g2_ParamLimits

0x4ffb,	// (0x0002f80b) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00039df4) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00039df4) list_single_heading_pane_g

0x501d,	// (0x0002f82d) list_single_heading_pane_t1_ParamLimits

0x501d,	// (0x0002f82d) list_single_heading_pane_t1

0x5033,	// (0x0002f843) list_single_heading_pane_t2_ParamLimits

0x5033,	// (0x0002f843) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00039df9) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00039df9) list_single_heading_pane_t

0x4fef,	// (0x0002f7ff) list_single_number_heading_pane_g1_ParamLimits

0x4fef,	// (0x0002f7ff) list_single_number_heading_pane_g1

0x4ffb,	// (0x0002f80b) list_single_number_heading_pane_g2_ParamLimits

0x4ffb,	// (0x0002f80b) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00039df4) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00039df4) list_single_number_heading_pane_g

0x501d,	// (0x0002f82d) list_single_number_heading_pane_t1_ParamLimits

0x501d,	// (0x0002f82d) list_single_number_heading_pane_t1

0x5045,	// (0x0002f855) list_single_number_heading_pane_t2_ParamLimits

0x5045,	// (0x0002f855) list_single_number_heading_pane_t2

0x5057,	// (0x0002f867) list_single_number_heading_pane_t3_ParamLimits

0x5057,	// (0x0002f867) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00039dfe) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00039dfe) list_single_number_heading_pane_t

0x5069,	// (0x0002f879) list_single_graphic_heading_pane_g1_ParamLimits

0x5069,	// (0x0002f879) list_single_graphic_heading_pane_g1

0x5075,	// (0x0002f885) list_single_graphic_heading_pane_g4_ParamLimits

0x5075,	// (0x0002f885) list_single_graphic_heading_pane_g4

0x4ffb,	// (0x0002f80b) list_single_graphic_heading_pane_g5_ParamLimits

0x4ffb,	// (0x0002f80b) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00039e05) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00039e05) list_single_graphic_heading_pane_g

0x501d,	// (0x0002f82d) list_single_graphic_heading_pane_t1_ParamLimits

0x501d,	// (0x0002f82d) list_single_graphic_heading_pane_t1

0x5086,	// (0x0002f896) list_single_graphic_heading_pane_t2_ParamLimits

0x5086,	// (0x0002f896) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00039e0c) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00039e0c) list_single_graphic_heading_pane_t

0x5098,	// (0x0002f8a8) list_single_large_graphic_pane_g1_ParamLimits

0x5098,	// (0x0002f8a8) list_single_large_graphic_pane_g1

0x50a4,	// (0x0002f8b4) list_single_large_graphic_pane_g2_ParamLimits

0x50a4,	// (0x0002f8b4) list_single_large_graphic_pane_g2

0x50b0,	// (0x0002f8c0) list_single_large_graphic_pane_g3_ParamLimits

0x50b0,	// (0x0002f8c0) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00039e11) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00039e11) list_single_large_graphic_pane_g

0xa0ed,	// (0x000348fd) wait_border_pane_g2_copy1

0x50bc,	// (0x0002f8cc) list_single_large_graphic_pane_g4_cp2

0x50c4,	// (0x0002f8d4) list_single_large_graphic_pane_t1_ParamLimits

0x50c4,	// (0x0002f8d4) list_single_large_graphic_pane_t1

0x50da,	// (0x0002f8ea) list_double_pane_g1_ParamLimits

0x50da,	// (0x0002f8ea) list_double_pane_g1

0x50e6,	// (0x0002f8f6) list_double_pane_g2_ParamLimits

0x50e6,	// (0x0002f8f6) list_double_pane_g2

0x0001,

0xf608,	// (0x00039e18) list_double_pane_g_ParamLimits

0xf608,	// (0x00039e18) list_double_pane_g

0x50f2,	// (0x0002f902) list_double_pane_t1_ParamLimits

0x50f2,	// (0x0002f902) list_double_pane_t1

0x5108,	// (0x0002f918) list_double_pane_t2_ParamLimits

0x5108,	// (0x0002f918) list_double_pane_t2

0x0001,

0xf60d,	// (0x00039e1d) list_double_pane_t_ParamLimits

0xf60d,	// (0x00039e1d) list_double_pane_t

0x511a,	// (0x0002f92a) list_double2_pane_g1_ParamLimits

0x511a,	// (0x0002f92a) list_double2_pane_g1

0x512b,	// (0x0002f93b) list_double2_pane_g2_ParamLimits

0x512b,	// (0x0002f93b) list_double2_pane_g2

0x0001,

0xf612,	// (0x00039e22) list_double2_pane_g_ParamLimits

0xf612,	// (0x00039e22) list_double2_pane_g

0x5137,	// (0x0002f947) list_double2_pane_t1_ParamLimits

0x5137,	// (0x0002f947) list_double2_pane_t1

0x514d,	// (0x0002f95d) list_double2_pane_t2_ParamLimits

0x514d,	// (0x0002f95d) list_double2_pane_t2

0x0001,

0xf617,	// (0x00039e27) list_double2_pane_t_ParamLimits

0xf617,	// (0x00039e27) list_double2_pane_t

0x50da,	// (0x0002f8ea) list_double_number_pane_g1_ParamLimits

0x50da,	// (0x0002f8ea) list_double_number_pane_g1

0x50e6,	// (0x0002f8f6) list_double_number_pane_g2_ParamLimits

0x50e6,	// (0x0002f8f6) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00039e18) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00039e18) list_double_number_pane_g

0x515f,	// (0x0002f96f) list_double_number_pane_t1_ParamLimits

0x515f,	// (0x0002f96f) list_double_number_pane_t1

0x5171,	// (0x0002f981) list_double_number_pane_t2_ParamLimits

0x5171,	// (0x0002f981) list_double_number_pane_t2

0x5187,	// (0x0002f997) list_double_number_pane_t3_ParamLimits

0x5187,	// (0x0002f997) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00039e2c) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00039e2c) list_double_number_pane_t

0x5199,	// (0x0002f9a9) list_double_graphic_pane_g1_ParamLimits

0x5199,	// (0x0002f9a9) list_double_graphic_pane_g1

0x51a5,	// (0x0002f9b5) list_double_graphic_pane_g2_ParamLimits

0x51a5,	// (0x0002f9b5) list_double_graphic_pane_g2

0x51b4,	// (0x0002f9c4) list_double_graphic_pane_g3_ParamLimits

0x51b4,	// (0x0002f9c4) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00039e33) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00039e33) list_double_graphic_pane_g

0x51cc,	// (0x0002f9dc) list_double_graphic_pane_t1_ParamLimits

0x51cc,	// (0x0002f9dc) list_double_graphic_pane_t1

0x51e2,	// (0x0002f9f2) list_double_graphic_pane_t2_ParamLimits

0x51e2,	// (0x0002f9f2) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00039e3c) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00039e3c) list_double_graphic_pane_t

0x51f4,	// (0x0002fa04) list_double2_graphic_pane_g1_ParamLimits

0x51f4,	// (0x0002fa04) list_double2_graphic_pane_g1

0x5200,	// (0x0002fa10) list_double2_graphic_pane_g2_ParamLimits

0x5200,	// (0x0002fa10) list_double2_graphic_pane_g2

0x520c,	// (0x0002fa1c) list_double2_graphic_pane_g3_ParamLimits

0x520c,	// (0x0002fa1c) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00039e41) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00039e41) list_double2_graphic_pane_g

0x5218,	// (0x0002fa28) list_double2_graphic_pane_t1_ParamLimits

0x5218,	// (0x0002fa28) list_double2_graphic_pane_t1

0x522e,	// (0x0002fa3e) list_double2_graphic_pane_t2_ParamLimits

0x522e,	// (0x0002fa3e) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00039e48) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00039e48) list_double2_graphic_pane_t

0x5240,	// (0x0002fa50) list_double_large_graphic_pane_g1_ParamLimits

0x5240,	// (0x0002fa50) list_double_large_graphic_pane_g1

0x5269,	// (0x0002fa79) list_double_large_graphic_pane_g2_ParamLimits

0x5269,	// (0x0002fa79) list_double_large_graphic_pane_g2

0x50e6,	// (0x0002f8f6) list_double_large_graphic_pane_g3_ParamLimits

0x50e6,	// (0x0002f8f6) list_double_large_graphic_pane_g3

0x527a,	// (0x0002fa8a) list_double_large_graphic_pane_g4_ParamLimits

0x527a,	// (0x0002fa8a) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00039e4d) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00039e4d) list_double_large_graphic_pane_g

0x529f,	// (0x0002faaf) list_double_large_graphic_pane_t1_ParamLimits

0x529f,	// (0x0002faaf) list_double_large_graphic_pane_t1

0x52b8,	// (0x0002fac8) list_double_large_graphic_pane_t2_ParamLimits

0x52b8,	// (0x0002fac8) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00039e58) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00039e58) list_double_large_graphic_pane_t

0x52ca,	// (0x0002fada) list_double2_large_graphic_pane_g1_ParamLimits

0x52ca,	// (0x0002fada) list_double2_large_graphic_pane_g1

0x52d6,	// (0x0002fae6) list_double2_large_graphic_pane_g2_ParamLimits

0x52d6,	// (0x0002fae6) list_double2_large_graphic_pane_g2

0x520c,	// (0x0002fa1c) list_double2_large_graphic_pane_g3_ParamLimits

0x520c,	// (0x0002fa1c) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00039e5d) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00039e5d) list_double2_large_graphic_pane_g

0x52e7,	// (0x0002faf7) list_double2_large_graphic_pane_t1_ParamLimits

0x52e7,	// (0x0002faf7) list_double2_large_graphic_pane_t1

0x52fd,	// (0x0002fb0d) list_double2_large_graphic_pane_t2_ParamLimits

0x52fd,	// (0x0002fb0d) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00039e64) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00039e64) list_double2_large_graphic_pane_t

0x530f,	// (0x0002fb1f) list_double_heading_pane_g1_ParamLimits

0x530f,	// (0x0002fb1f) list_double_heading_pane_g1

0x5320,	// (0x0002fb30) list_double_heading_pane_g2_ParamLimits

0x5320,	// (0x0002fb30) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00039e69) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00039e69) list_double_heading_pane_g

0x532c,	// (0x0002fb3c) list_double_heading_pane_t1_ParamLimits

0x532c,	// (0x0002fb3c) list_double_heading_pane_t1

0x5342,	// (0x0002fb52) list_double_heading_pane_t2_ParamLimits

0x5342,	// (0x0002fb52) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00039e6e) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00039e6e) list_double_heading_pane_t

0x51f4,	// (0x0002fa04) list_double_graphic_heading_pane_g1_ParamLimits

0x51f4,	// (0x0002fa04) list_double_graphic_heading_pane_g1

0x530f,	// (0x0002fb1f) list_double_graphic_heading_pane_g2_ParamLimits

0x530f,	// (0x0002fb1f) list_double_graphic_heading_pane_g2

0x5320,	// (0x0002fb30) list_double_graphic_heading_pane_g3_ParamLimits

0x5320,	// (0x0002fb30) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00039e73) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00039e73) list_double_graphic_heading_pane_g

0x5354,	// (0x0002fb64) list_double_graphic_heading_pane_t1_ParamLimits

0x5354,	// (0x0002fb64) list_double_graphic_heading_pane_t1

0x522e,	// (0x0002fa3e) list_double_graphic_heading_pane_t2_ParamLimits

0x522e,	// (0x0002fa3e) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00039e7a) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00039e7a) list_double_graphic_heading_pane_t

0x5269,	// (0x0002fa79) list_double_time_pane_g1_ParamLimits

0x5269,	// (0x0002fa79) list_double_time_pane_g1

0x50e6,	// (0x0002f8f6) list_double_time_pane_g2_ParamLimits

0x50e6,	// (0x0002f8f6) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x00039e7f) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x00039e7f) list_double_time_pane_g

0x536a,	// (0x0002fb7a) list_double_time_pane_t1_ParamLimits

0x536a,	// (0x0002fb7a) list_double_time_pane_t1

0x5380,	// (0x0002fb90) list_double_time_pane_t2_ParamLimits

0x5380,	// (0x0002fb90) list_double_time_pane_t2

0x5392,	// (0x0002fba2) list_double_time_pane_t3_ParamLimits

0x5392,	// (0x0002fba2) list_double_time_pane_t3

0x53a4,	// (0x0002fbb4) list_double_time_pane_t4_ParamLimits

0x53a4,	// (0x0002fbb4) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00039e84) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00039e84) list_double_time_pane_t

0x5200,	// (0x0002fa10) list_setting_pane_g1_ParamLimits

0x5200,	// (0x0002fa10) list_setting_pane_g1

0x520c,	// (0x0002fa1c) list_setting_pane_g2_ParamLimits

0x520c,	// (0x0002fa1c) list_setting_pane_g2

0x0001,

0xf67d,	// (0x00039e8d) list_setting_pane_g_ParamLimits

0xf67d,	// (0x00039e8d) list_setting_pane_g

0x53b6,	// (0x0002fbc6) list_setting_pane_t1_ParamLimits

0x53b6,	// (0x0002fbc6) list_setting_pane_t1

0x53d0,	// (0x0002fbe0) list_setting_pane_t2_ParamLimits

0x53d0,	// (0x0002fbe0) list_setting_pane_t2

0x0002,

0xf682,	// (0x00039e92) list_setting_pane_t_ParamLimits

0xf682,	// (0x00039e92) list_setting_pane_t

0x540f,	// (0x0002fc1f) set_value_pane_cp_ParamLimits

0x540f,	// (0x0002fc1f) set_value_pane_cp

0x541b,	// (0x0002fc2b) list_setting_number_pane_g1_ParamLimits

0x541b,	// (0x0002fc2b) list_setting_number_pane_g1

0x5427,	// (0x0002fc37) list_setting_number_pane_g2_ParamLimits

0x5427,	// (0x0002fc37) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x00039e99) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x00039e99) list_setting_number_pane_g

0x5433,	// (0x0002fc43) list_setting_number_pane_t1_ParamLimits

0x5433,	// (0x0002fc43) list_setting_number_pane_t1

0x544c,	// (0x0002fc5c) list_setting_number_pane_t2_ParamLimits

0x544c,	// (0x0002fc5c) list_setting_number_pane_t2

0x5466,	// (0x0002fc76) list_setting_number_pane_t3_ParamLimits

0x5466,	// (0x0002fc76) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x00039e9e) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x00039e9e) list_setting_number_pane_t

0x540f,	// (0x0002fc1f) set_value_pane_ParamLimits

0x540f,	// (0x0002fc1f) set_value_pane

0x7fd9,	// (0x000327e9) bg_set_opt_pane_ParamLimits

0x7fd9,	// (0x000327e9) bg_set_opt_pane

0x54a9,	// (0x0002fcb9) set_value_pane_t1

0x7ffa,	// (0x0003280a) slider_set_pane_cp3

0x8003,	// (0x00032813) volume_small_pane_cp

0x800c,	// (0x0003281c) list_form_gen_pane

0x8015,	// (0x00032825) scroll_pane_cp8

0x54bf,	// (0x0002fccf) form_field_data_pane_ParamLimits

0x54bf,	// (0x0002fccf) form_field_data_pane

0x54df,	// (0x0002fcef) form_field_data_wide_pane_ParamLimits

0x54df,	// (0x0002fcef) form_field_data_wide_pane

0x5500,	// (0x0002fd10) form_field_popup_pane_ParamLimits

0x5500,	// (0x0002fd10) form_field_popup_pane

0x5520,	// (0x0002fd30) form_field_popup_wide_pane_ParamLimits

0x5520,	// (0x0002fd30) form_field_popup_wide_pane

0x553d,	// (0x0002fd4d) form_field_slider_pane_ParamLimits

0x553d,	// (0x0002fd4d) form_field_slider_pane

0x5550,	// (0x0002fd60) form_field_slider_wide_pane_ParamLimits

0x5550,	// (0x0002fd60) form_field_slider_wide_pane

0x8026,	// (0x00032836) data_form_pane

0x556d,	// (0x0002fd7d) form_field_data_pane_t1

0x8032,	// (0x00032842) input_focus_pane

0x8040,	// (0x00032850) data_form_wide_pane

0x5591,	// (0x0002fda1) form_field_data_wide_pane_t1

0x7da3,	// (0x000325b3) input_focus_pane_cp6

0x55b3,	// (0x0002fdc3) form_field_popup_pane_t1

0x8032,	// (0x00032842) input_focus_pane_cp7

0x806c,	// (0x0003287c) list_form_pane

0x55d3,	// (0x0002fde3) form_field_popup_wide_pane_t1

0x8032,	// (0x00032842) input_focus_pane_cp8

0x8078,	// (0x00032888) list_form_wide_pane

0x55f0,	// (0x0002fe00) form_field_slider_pane_t1_ParamLimits

0x55f0,	// (0x0002fe00) form_field_slider_pane_t1

0x5606,	// (0x0002fe16) form_field_slider_pane_t2_ParamLimits

0x5606,	// (0x0002fe16) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x00039eae) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x00039eae) form_field_slider_pane_t

0x7a41,	// (0x00032251) input_focus_pane_cp9_ParamLimits

0x7a41,	// (0x00032251) input_focus_pane_cp9

0x561b,	// (0x0002fe2b) slider_cont_pane_ParamLimits

0x561b,	// (0x0002fe2b) slider_cont_pane

0x8087,	// (0x00032897) form_field_slider_wide_pane_t1_ParamLimits

0x8087,	// (0x00032897) form_field_slider_wide_pane_t1

0x562f,	// (0x0002fe3f) form_field_slider_wide_pane_t2_ParamLimits

0x562f,	// (0x0002fe3f) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x00039eb3) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x00039eb3) form_field_slider_wide_pane_t

0x7a41,	// (0x00032251) input_focus_pane_cp10_ParamLimits

0x7a41,	// (0x00032251) input_focus_pane_cp10

0x5641,	// (0x0002fe51) slider_cont_pane_cp1_ParamLimits

0x5641,	// (0x0002fe51) slider_cont_pane_cp1

0x5655,	// (0x0002fe65) slider_form_pane_cp

0x8099,	// (0x000328a9) input_focus_pane_g1

0x80a1,	// (0x000328b1) input_focus_pane_g2

0x80a9,	// (0x000328b9) input_focus_pane_g3

0x80b1,	// (0x000328c1) input_focus_pane_g4

0x80b9,	// (0x000328c9) input_focus_pane_g5

0x80c1,	// (0x000328d1) input_focus_pane_g6

0x80c9,	// (0x000328d9) input_focus_pane_g7

0x80d1,	// (0x000328e1) input_focus_pane_g8

0x80d9,	// (0x000328e9) input_focus_pane_g9

0x6f96,	// (0x000317a6) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x00039eb8) input_focus_pane_g

0xa0f6,	// (0x00034906) wait_border_pane_g3_copy1

0x565d,	// (0x0002fe6d) data_form_pane_t1

0x6f96,	// (0x000317a6) wait_anim_pane_g1_copy1

0x721a,	// (0x00031a2a) data_form_wide_pane_t1

0x5678,	// (0x0002fe88) list_form_graphic_pane_cp_ParamLimits

0x5678,	// (0x0002fe88) list_form_graphic_pane_cp

0xb03e,	// (0x0003584e) slider_form_pane_g1

0xb047,	// (0x00035857) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0003a1b0) slider_form_pane_g

0x5691,	// (0x0002fea1) list_form_graphic_pane_ParamLimits

0x5691,	// (0x0002fea1) list_form_graphic_pane

0x56ad,	// (0x0002febd) list_form_graphic_pane_g1

0x56b5,	// (0x0002fec5) list_form_graphic_pane_t1_ParamLimits

0x56b5,	// (0x0002fec5) list_form_graphic_pane_t1

0x7080,	// (0x00031890) list_highlight_pane_cp5_ParamLimits

0x7080,	// (0x00031890) list_highlight_pane_cp5

0x56ca,	// (0x0002feda) find_pane_g1

0x80e1,	// (0x000328f1) input_find_pane

0x56d3,	// (0x0002fee3) input_find_pane_g1_ParamLimits

0x56d3,	// (0x0002fee3) input_find_pane_g1

0x56df,	// (0x0002feef) input_find_pane_t1_ParamLimits

0x56df,	// (0x0002feef) input_find_pane_t1

0x56f4,	// (0x0002ff04) input_find_pane_t2_ParamLimits

0x56f4,	// (0x0002ff04) input_find_pane_t2

0x0001,

0xf6bd,	// (0x00039ecd) input_find_pane_t_ParamLimits

0xf6bd,	// (0x00039ecd) input_find_pane_t

0x80ea,	// (0x000328fa) input_focus_pane_cp5_ParamLimits

0x80ea,	// (0x000328fa) input_focus_pane_cp5

0x8104,	// (0x00032914) bg_popup_window_pane_cp2_ParamLimits

0x8104,	// (0x00032914) bg_popup_window_pane_cp2

0x8111,	// (0x00032921) listscroll_menu_pane_ParamLimits

0x8111,	// (0x00032921) listscroll_menu_pane

0x811d,	// (0x0003292d) popup_submenu_window_ParamLimits

0x811d,	// (0x0003292d) popup_submenu_window

0x8147,	// (0x00032957) find_popup_pane_g1

0x814f,	// (0x0003295f) input_popup_find_pane_cp

0x80ea,	// (0x000328fa) input_focus_pane_cp4_ParamLimits

0x80ea,	// (0x000328fa) input_focus_pane_cp4

0x8165,	// (0x00032975) input_popup_find_pane_t1_ParamLimits

0x8165,	// (0x00032975) input_popup_find_pane_t1

0x6fa0,	// (0x000317b0) bg_popup_sub_pane_cp

0x8193,	// (0x000329a3) listscroll_popup_sub_pane

0x819b,	// (0x000329ab) list_submenu_pane_ParamLimits

0x819b,	// (0x000329ab) list_submenu_pane

0x81ac,	// (0x000329bc) scroll_pane_cp4

0x81b4,	// (0x000329c4) list_single_popup_submenu_pane_ParamLimits

0x81b4,	// (0x000329c4) list_single_popup_submenu_pane

0x81c8,	// (0x000329d8) list_single_popup_submenu_pane_g1

0x81d0,	// (0x000329e0) list_single_popup_submenu_pane_t1_ParamLimits

0x81d0,	// (0x000329e0) list_single_popup_submenu_pane_t1

0x7080,	// (0x00031890) bg_active_tab_pane_cp1_ParamLimits

0x7080,	// (0x00031890) bg_active_tab_pane_cp1

0x81e5,	// (0x000329f5) tabs_2_active_pane_g1

0x81ed,	// (0x000329fd) tabs_2_active_pane_t1

0x7080,	// (0x00031890) bg_passive_tab_pane_cp1_ParamLimits

0x7080,	// (0x00031890) bg_passive_tab_pane_cp1

0x81e5,	// (0x000329f5) tabs_2_passive_pane_g1

0x81ed,	// (0x000329fd) tabs_2_passive_pane_t1

0x81ff,	// (0x00032a0f) bg_active_tab_pane_cp4

0x820d,	// (0x00032a1d) tabs_2_long_active_pane_t1

0x8220,	// (0x00032a30) bg_passive_tab_pane_cp4

0x5e25,	// (0x00030635) list_single_midp_graphic_pane_g4_ParamLimits

0x81ff,	// (0x00032a0f) bg_active_tab_pane_cp5

0x822c,	// (0x00032a3c) tabs_3_long_active_pane_t1

0x8220,	// (0x00032a30) bg_passive_tab_pane_cp5

0x5e25,	// (0x00030635) list_single_midp_graphic_pane_g4

0x7080,	// (0x00031890) bg_popup_window_pane_cp13_ParamLimits

0x7080,	// (0x00031890) bg_popup_window_pane_cp13

0x8247,	// (0x00032a57) listscroll_popup_fast_pane_ParamLimits

0x8247,	// (0x00032a57) listscroll_popup_fast_pane

0x8256,	// (0x00032a66) grid_popup_fast_pane_ParamLimits

0x8256,	// (0x00032a66) grid_popup_fast_pane

0x8268,	// (0x00032a78) scroll_pane_cp9_ParamLimits

0x8268,	// (0x00032a78) scroll_pane_cp9

0xc905,	// (0x00037115) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc905,	// (0x00037115) list_single_graphic_hl_pane_t1_cp2

0x828c,	// (0x00032a9c) input_focus_pane_cp20_ParamLimits

0x828c,	// (0x00032a9c) input_focus_pane_cp20

0x829a,	// (0x00032aaa) query_popup_data_pane_t1_ParamLimits

0x829a,	// (0x00032aaa) query_popup_data_pane_t1

0x82ad,	// (0x00032abd) query_popup_data_pane_t2_ParamLimits

0x82ad,	// (0x00032abd) query_popup_data_pane_t2

0x82f3,	// (0x00032b03) query_popup_data_pane_t3_ParamLimits

0x82f3,	// (0x00032b03) query_popup_data_pane_t3

0x8334,	// (0x00032b44) query_popup_data_pane_t4_ParamLimits

0x8334,	// (0x00032b44) query_popup_data_pane_t4

0x8370,	// (0x00032b80) query_popup_data_pane_t5_ParamLimits

0x8370,	// (0x00032b80) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x00039ed2) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x00039ed2) query_popup_data_pane_t

0x8099,	// (0x000328a9) bg_set_opt_pane_g1

0x80a1,	// (0x000328b1) bg_set_opt_pane_g2

0x80a9,	// (0x000328b9) bg_set_opt_pane_g3

0x80b1,	// (0x000328c1) bg_set_opt_pane_g4

0x80b9,	// (0x000328c9) bg_set_opt_pane_g5

0x80c1,	// (0x000328d1) bg_set_opt_pane_g6

0x80c9,	// (0x000328d9) bg_set_opt_pane_g7

0x80d1,	// (0x000328e1) bg_set_opt_pane_g8

0x80d9,	// (0x000328e9) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x00039edd) bg_set_opt_pane_g

0x5a32,	// (0x00030242) control_top_pane_stacon_ParamLimits

0x5a32,	// (0x00030242) control_top_pane_stacon

0x5a85,	// (0x00030295) signal_pane_stacon_ParamLimits

0x5a85,	// (0x00030295) signal_pane_stacon

0x890e,	// (0x0003311e) stacon_top_pane_g1_ParamLimits

0x890e,	// (0x0003311e) stacon_top_pane_g1

0x5aaa,	// (0x000302ba) title_pane_stacon_ParamLimits

0x5aaa,	// (0x000302ba) title_pane_stacon

0x5ad4,	// (0x000302e4) uni_indicator_pane_stacon_ParamLimits

0x5ad4,	// (0x000302e4) uni_indicator_pane_stacon

0x5ae9,	// (0x000302f9) battery_pane_stacon_ParamLimits

0x5ae9,	// (0x000302f9) battery_pane_stacon

0x5b2d,	// (0x0003033d) control_bottom_pane_stacon_ParamLimits

0x5b2d,	// (0x0003033d) control_bottom_pane_stacon

0x5b50,	// (0x00030360) navi_pane_stacon_ParamLimits

0x5b50,	// (0x00030360) navi_pane_stacon

0x8930,	// (0x00033140) stacon_bottom_pane_g1_ParamLimits

0x8930,	// (0x00033140) stacon_bottom_pane_g1

0x5709,	// (0x0002ff19) aid_levels_signal_lsc_ParamLimits

0x5709,	// (0x0002ff19) aid_levels_signal_lsc

0x5720,	// (0x0002ff30) signal_pane_stacon_g1_ParamLimits

0x5720,	// (0x0002ff30) signal_pane_stacon_g1

0x5734,	// (0x0002ff44) signal_pane_stacon_g2_ParamLimits

0x5734,	// (0x0002ff44) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x00039ef0) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x00039ef0) signal_pane_stacon_g

0x5769,	// (0x0002ff79) title_pane_stacon_t1_ParamLimits

0x5769,	// (0x0002ff79) title_pane_stacon_t1

0x83b4,	// (0x00032bc4) uni_indicator_pane_stacon_g1

0x83be,	// (0x00032bce) uni_indicator_pane_stacon_g2

0x83c8,	// (0x00032bd8) uni_indicator_pane_stacon_g3

0x83d2,	// (0x00032be2) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x00039efc) uni_indicator_pane_stacon_g

0x578e,	// (0x0002ff9e) control_top_pane_stacon_g1

0x5796,	// (0x0002ffa6) control_top_pane_stacon_t1_ParamLimits

0x5796,	// (0x0002ffa6) control_top_pane_stacon_t1

0x57cd,	// (0x0002ffdd) aid_levels_battery_lsc_ParamLimits

0x57cd,	// (0x0002ffdd) aid_levels_battery_lsc

0x57e5,	// (0x0002fff5) battery_pane_stacon_g1_ParamLimits

0x57e5,	// (0x0002fff5) battery_pane_stacon_g1

0x57f8,	// (0x00030008) battery_pane_stacon_g2_ParamLimits

0x57f8,	// (0x00030008) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x00039f05) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x00039f05) battery_pane_stacon_g

0x5836,	// (0x00030046) navi_icon_pane_stacon

0x584a,	// (0x0003005a) navi_navi_pane_stacon

0x5836,	// (0x00030046) navi_text_pane_stacon

0x578e,	// (0x0002ff9e) control_bottom_pane_stacon_g1

0x585e,	// (0x0003006e) control_bottom_pane_stacon_t1_ParamLimits

0x585e,	// (0x0003006e) control_bottom_pane_stacon_t1

0x83f6,	// (0x00032c06) grid_app_pane_ParamLimits

0x83f6,	// (0x00032c06) grid_app_pane

0x841a,	// (0x00032c2a) scroll_pane_cp15_ParamLimits

0x841a,	// (0x00032c2a) scroll_pane_cp15

0x842f,	// (0x00032c3f) cell_app_pane_ParamLimits

0x842f,	// (0x00032c3f) cell_app_pane

0x8453,	// (0x00032c63) cell_app_pane_g1_ParamLimits

0x8453,	// (0x00032c63) cell_app_pane_g1

0x8477,	// (0x00032c87) cell_app_pane_g2_ParamLimits

0x8477,	// (0x00032c87) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x00039f0a) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x00039f0a) cell_app_pane_g

0x8483,	// (0x00032c93) cell_app_pane_t1_ParamLimits

0x8483,	// (0x00032c93) cell_app_pane_t1

0x849a,	// (0x00032caa) grid_highlight_pane_ParamLimits

0x849a,	// (0x00032caa) grid_highlight_pane

0x8099,	// (0x000328a9) cell_highlight_pane_g1

0x80a1,	// (0x000328b1) cell_highlight_pane_g2

0x80a9,	// (0x000328b9) cell_highlight_pane_g3

0x80b1,	// (0x000328c1) cell_highlight_pane_g4

0x80b9,	// (0x000328c9) cell_highlight_pane_g5

0x80c1,	// (0x000328d1) cell_highlight_pane_g6

0x80c9,	// (0x000328d9) cell_highlight_pane_g7

0x80d1,	// (0x000328e1) cell_highlight_pane_g8

0x80d9,	// (0x000328e9) cell_highlight_pane_g9

0x6f96,	// (0x000317a6) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x00039eb8) cell_highlight_pane_g

0x84ab,	// (0x00032cbb) bg_scroll_pane

0x58a8,	// (0x000300b8) scroll_handle_pane

0x84f2,	// (0x00032d02) scroll_bg_pane_g1

0x8507,	// (0x00032d17) scroll_bg_pane_g2

0x851f,	// (0x00032d2f) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x00039f0f) scroll_bg_pane_g

0x8534,	// (0x00032d44) scroll_handle_focus_pane_ParamLimits

0x8534,	// (0x00032d44) scroll_handle_focus_pane

0x84f2,	// (0x00032d02) scroll_handle_pane_g1

0x8541,	// (0x00032d51) scroll_handle_pane_g2

0x851f,	// (0x00032d2f) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x00039f16) scroll_handle_pane_g

0x80ea,	// (0x000328fa) bg_popup_sub_pane_cp21_ParamLimits

0x80ea,	// (0x000328fa) bg_popup_sub_pane_cp21

0x8555,	// (0x00032d65) popup_fep_japan_predictive_window_t1_ParamLimits

0x8555,	// (0x00032d65) popup_fep_japan_predictive_window_t1

0x856f,	// (0x00032d7f) popup_fep_japan_predictive_window_t2_ParamLimits

0x856f,	// (0x00032d7f) popup_fep_japan_predictive_window_t2

0x85a2,	// (0x00032db2) popup_fep_japan_predictive_window_t3_ParamLimits

0x85a2,	// (0x00032db2) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x00039f1d) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x00039f1d) popup_fep_japan_predictive_window_t

0x6fa0,	// (0x000317b0) bg_popup_sub_pane_cp23

0x85d9,	// (0x00032de9) listscroll_japin_cand_pane

0x85e1,	// (0x00032df1) popup_fep_japan_candidate_window_t1

0x85ef,	// (0x00032dff) candidate_pane_ParamLimits

0x85ef,	// (0x00032dff) candidate_pane

0x8601,	// (0x00032e11) scroll_pane_cp30

0x8609,	// (0x00032e19) list_single_popup_jap_candidate_pane_ParamLimits

0x8609,	// (0x00032e19) list_single_popup_jap_candidate_pane

0x6fa0,	// (0x000317b0) list_highlight_pane_cp30

0x861e,	// (0x00032e2e) list_single_popup_jap_candidate_pane_t1

0x862d,	// (0x00032e3d) level_1_signal

0x863a,	// (0x00032e4a) level_2_signal

0x8647,	// (0x00032e57) level_3_signal

0x8654,	// (0x00032e64) level_4_signal

0x8661,	// (0x00032e71) level_5_signal

0x866e,	// (0x00032e7e) level_6_signal

0x867b,	// (0x00032e8b) level_7_signal

0x862d,	// (0x00032e3d) level_1_battery

0x863a,	// (0x00032e4a) level_2_battery

0x8647,	// (0x00032e57) level_3_battery

0x8654,	// (0x00032e64) level_4_battery

0x8661,	// (0x00032e71) level_5_battery

0x866e,	// (0x00032e7e) level_6_battery

0x867b,	// (0x00032e8b) level_7_battery

0x86a0,	// (0x00032eb0) list_menu_pane_ParamLimits

0x86a0,	// (0x00032eb0) list_menu_pane

0x86b1,	// (0x00032ec1) scroll_pane_cp25_ParamLimits

0x86b1,	// (0x00032ec1) scroll_pane_cp25

0x86ca,	// (0x00032eda) list_double2_graphic_pane_cp2_ParamLimits

0x86ca,	// (0x00032eda) list_double2_graphic_pane_cp2

0x86ca,	// (0x00032eda) list_double2_large_graphic_pane_cp2_ParamLimits

0x86ca,	// (0x00032eda) list_double2_large_graphic_pane_cp2

0x86ca,	// (0x00032eda) list_double2_pane_cp2_ParamLimits

0x86ca,	// (0x00032eda) list_double2_pane_cp2

0x86ca,	// (0x00032eda) list_double_graphic_pane_cp2_ParamLimits

0x86ca,	// (0x00032eda) list_double_graphic_pane_cp2

0x86ca,	// (0x00032eda) list_double_large_graphic_pane_cp2_ParamLimits

0x86ca,	// (0x00032eda) list_double_large_graphic_pane_cp2

0x86ca,	// (0x00032eda) list_double_number_pane_cp2_ParamLimits

0x86ca,	// (0x00032eda) list_double_number_pane_cp2

0x86ca,	// (0x00032eda) list_double_pane_cp2_ParamLimits

0x86ca,	// (0x00032eda) list_double_pane_cp2

0x86ee,	// (0x00032efe) list_single_2graphic_pane_cp2_ParamLimits

0x86ee,	// (0x00032efe) list_single_2graphic_pane_cp2

0x86ee,	// (0x00032efe) list_single_graphic_heading_pane_cp2_ParamLimits

0x86ee,	// (0x00032efe) list_single_graphic_heading_pane_cp2

0x86ee,	// (0x00032efe) list_single_graphic_pane_cp2_ParamLimits

0x86ee,	// (0x00032efe) list_single_graphic_pane_cp2

0x86ee,	// (0x00032efe) list_single_heading_pane_cp2_ParamLimits

0x86ee,	// (0x00032efe) list_single_heading_pane_cp2

0x8707,	// (0x00032f17) list_single_large_graphic_pane_cp2_ParamLimits

0x8707,	// (0x00032f17) list_single_large_graphic_pane_cp2

0x86ee,	// (0x00032efe) list_single_number_heading_pane_cp2_ParamLimits

0x86ee,	// (0x00032efe) list_single_number_heading_pane_cp2

0x86ee,	// (0x00032efe) list_single_number_pane_cp2_ParamLimits

0x86ee,	// (0x00032efe) list_single_number_pane_cp2

0x86ee,	// (0x00032efe) list_single_pane_cp2_ParamLimits

0x86ee,	// (0x00032efe) list_single_pane_cp2

0x875d,	// (0x00032f6d) bg_popup_sub_pane_cp22

0x595a,	// (0x0003016a) popup_side_volume_key_window_g1

0x5984,	// (0x00030194) popup_side_volume_key_window_t1

0x59a0,	// (0x000301b0) volume_small_pane_cp1

0x7a41,	// (0x00032251) bg_popup_sub_pane_cp24_ParamLimits

0x7a41,	// (0x00032251) bg_popup_sub_pane_cp24

0x8773,	// (0x00032f83) fep_china_uni_candidate_pane_ParamLimits

0x8773,	// (0x00032f83) fep_china_uni_candidate_pane

0x8787,	// (0x00032f97) fep_china_uni_entry_pane

0x8797,	// (0x00032fa7) popup_fep_china_uni_window_g1

0x87b3,	// (0x00032fc3) fep_china_uni_entry_pane_g1

0x87bb,	// (0x00032fcb) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x00039f4a) fep_china_uni_entry_pane_g

0x87c3,	// (0x00032fd3) fep_entry_item_pane

0x87cd,	// (0x00032fdd) fep_candidate_item_pane

0x87d5,	// (0x00032fe5) fep_china_uni_candidate_pane_g1

0x87dd,	// (0x00032fed) fep_china_uni_candidate_pane_g2

0x87e5,	// (0x00032ff5) fep_china_uni_candidate_pane_g3

0x87ed,	// (0x00032ffd) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x00039f4f) fep_china_uni_candidate_pane_g

0x6f96,	// (0x000317a6) fep_entry_item_pane_g1

0x87f5,	// (0x00033005) fep_entry_item_pane_t1_ParamLimits

0x87f5,	// (0x00033005) fep_entry_item_pane_t1

0x880b,	// (0x0003301b) fep_candidate_item_pane_t1_ParamLimits

0x880b,	// (0x0003301b) fep_candidate_item_pane_t1

0x8820,	// (0x00033030) fep_candidate_item_pane_t2_ParamLimits

0x8820,	// (0x00033030) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x00039f58) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x00039f58) fep_candidate_item_pane_t

0x7080,	// (0x00031890) list_highlight_pane_cp31_ParamLimits

0x7080,	// (0x00031890) list_highlight_pane_cp31

0x8832,	// (0x00033042) level_1_signal_lsc

0x883b,	// (0x0003304b) level_2_signal_lsc

0x8844,	// (0x00033054) level_3_signal_lsc

0x884d,	// (0x0003305d) level_4_signal_lsc

0x8856,	// (0x00033066) level_5_signal_lsc

0x885f,	// (0x0003306f) level_6_signal_lsc

0x8868,	// (0x00033078) level_7_signal_lsc

0x8868,	// (0x00033078) level_1_battery_lsc

0x8871,	// (0x00033081) level_2_battery_lsc

0x887a,	// (0x0003308a) level_3_battery_lsc

0x8883,	// (0x00033093) level_4_battery_lsc

0x888c,	// (0x0003309c) level_5_battery_lsc

0x8895,	// (0x000330a5) level_6_battery_lsc

0x8832,	// (0x00033042) level_7_battery_lsc

0x889e,	// (0x000330ae) scroll_handle_focus_pane_g1

0x88a7,	// (0x000330b7) scroll_handle_focus_pane_g2

0x88b0,	// (0x000330c0) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x00039f5d) scroll_handle_focus_pane_g

0x59a8,	// (0x000301b8) list_single_2graphic_pane_g1_ParamLimits

0x59a8,	// (0x000301b8) list_single_2graphic_pane_g1

0x5075,	// (0x0002f885) list_single_2graphic_pane_g2_ParamLimits

0x5075,	// (0x0002f885) list_single_2graphic_pane_g2

0x4ffb,	// (0x0002f80b) list_single_2graphic_pane_g3_ParamLimits

0x4ffb,	// (0x0002f80b) list_single_2graphic_pane_g3

0x59b4,	// (0x000301c4) list_single_2graphic_pane_g4_ParamLimits

0x59b4,	// (0x000301c4) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x00039f64) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x00039f64) list_single_2graphic_pane_g

0x59c0,	// (0x000301d0) list_single_2graphic_pane_t1_ParamLimits

0x59c0,	// (0x000301d0) list_single_2graphic_pane_t1

0x59ee,	// (0x000301fe) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x59ee,	// (0x000301fe) list_double2_graphic_large_graphic_pane_g1

0x52d6,	// (0x0002fae6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x52d6,	// (0x0002fae6) list_double2_graphic_large_graphic_pane_g2

0x520c,	// (0x0002fa1c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x520c,	// (0x0002fa1c) list_double2_graphic_large_graphic_pane_g3

0x59fe,	// (0x0003020e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x59fe,	// (0x0003020e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x00039f6d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x00039f6d) list_double2_graphic_large_graphic_pane_g

0x5a0a,	// (0x0003021a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5a0a,	// (0x0003021a) list_double2_graphic_large_graphic_pane_t1

0x5a20,	// (0x00030230) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5a20,	// (0x00030230) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x00039f76) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x00039f76) list_double2_graphic_large_graphic_pane_t

0x89f8,	// (0x00033208) popup_fast_swap_window_ParamLimits

0x89f8,	// (0x00033208) popup_fast_swap_window

0x8a14,	// (0x00033224) popup_side_volume_key_window

0x8a30,	// (0x00033240) stacon_top_pane

0x8a3a,	// (0x0003324a) status_pane_ParamLimits

0x8a3a,	// (0x0003324a) status_pane

0x8a30,	// (0x00033240) status_small_pane

0x6fa0,	// (0x000317b0) control_pane

0x6fa0,	// (0x000317b0) stacon_bottom_pane

0x8015,	// (0x00032825) scroll_pane_cp121

0x800c,	// (0x0003281c) set_content_pane

0x88b9,	// (0x000330c9) bg_active_tab_pane_g1_cp1

0x88c2,	// (0x000330d2) bg_active_tab_pane_g2_cp1

0x88cb,	// (0x000330db) bg_active_tab_pane_g3_cp1

0x88b9,	// (0x000330c9) bg_passive_tab_pane_g1_cp1

0x88c2,	// (0x000330d2) bg_passive_tab_pane_g2_cp1

0x88cb,	// (0x000330db) bg_passive_tab_pane_g3_cp1

0x88d4,	// (0x000330e4) bg_active_tab_pane_g1_cp2

0x88c2,	// (0x000330d2) bg_active_tab_pane_g2_cp2

0x88dd,	// (0x000330ed) bg_active_tab_pane_g3_cp2

0x88d4,	// (0x000330e4) bg_passive_tab_pane_g1_cp2

0x88c2,	// (0x000330d2) bg_passive_tab_pane_g2_cp2

0x88dd,	// (0x000330ed) bg_passive_tab_pane_g3_cp2

0x88e6,	// (0x000330f6) bg_active_tab_pane_g1_cp3

0x88c2,	// (0x000330d2) bg_active_tab_pane_g2_cp3

0x88ef,	// (0x000330ff) bg_active_tab_pane_g3_cp3

0x88e6,	// (0x000330f6) bg_passive_tab_pane_g1_cp3

0x88c2,	// (0x000330d2) bg_passive_tab_pane_g2_cp3

0x88ef,	// (0x000330ff) bg_passive_tab_pane_g3_cp3

0x88f8,	// (0x00033108) bg_active_tab_pane_g1_cp4

0x88c2,	// (0x000330d2) bg_active_tab_pane_g2_cp4

0x8903,	// (0x00033113) bg_active_tab_pane_g3_cp4

0x88f8,	// (0x00033108) bg_passive_tab_pane_g1_cp4

0x88c2,	// (0x000330d2) bg_passive_tab_pane_g2_cp4

0x8903,	// (0x00033113) bg_passive_tab_pane_g3_cp4

0x894c,	// (0x0003315c) bg_active_tab_pane_g1_cp5

0x88c2,	// (0x000330d2) bg_active_tab_pane_g2_cp5

0x8955,	// (0x00033165) bg_active_tab_pane_g3_cp5

0x894c,	// (0x0003315c) bg_passive_tab_pane_g1_cp5

0x88c2,	// (0x000330d2) bg_passive_tab_pane_g2_cp5

0x8955,	// (0x00033165) bg_passive_tab_pane_g3_cp5

0x895e,	// (0x0003316e) list_set_graphic_pane_ParamLimits

0x895e,	// (0x0003316e) list_set_graphic_pane

0x6fa0,	// (0x000317b0) bg_set_opt_pane_cp4

0x897b,	// (0x0003318b) list_set_graphic_pane_g1_ParamLimits

0x897b,	// (0x0003318b) list_set_graphic_pane_g1

0x8987,	// (0x00033197) list_set_graphic_pane_g2_ParamLimits

0x8987,	// (0x00033197) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x00039f7b) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x00039f7b) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0003a2ec) volume_small_pane_cp_g

0x89ab,	// (0x000331bb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x89ab,	// (0x000331bb) list_double2_large_graphic_pane_g1_cp2

0x89b7,	// (0x000331c7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x89b7,	// (0x000331c7) list_double2_large_graphic_pane_g2_cp2

0x89c8,	// (0x000331d8) list_double2_large_graphic_pane_g3_cp2

0x89d0,	// (0x000331e0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x89d0,	// (0x000331e0) list_double2_large_graphic_pane_t1_cp2

0x89e6,	// (0x000331f6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x89e6,	// (0x000331f6) list_double2_large_graphic_pane_t2_cp2

0xabdb,	// (0x000353eb) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabdb,	// (0x000353eb) list_double_large_graphic_pane_g1_cp2

0xabec,	// (0x000353fc) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xabec,	// (0x000353fc) list_double_large_graphic_pane_g2_cp2

0x8b56,	// (0x00033366) list_double_large_graphic_pane_g3_cp2

0xabfd,	// (0x0003540d) list_double_large_graphic_pane_g4_cp

0xac05,	// (0x00035415) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac05,	// (0x00035415) list_double_large_graphic_pane_t1_cp2

0xac1c,	// (0x0003542c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac1c,	// (0x0003542c) list_double_large_graphic_pane_t2_cp2

0x8a48,	// (0x00033258) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8a48,	// (0x00033258) list_double2_graphic_pane_g1_cp2

0x8a56,	// (0x00033266) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8a56,	// (0x00033266) list_double2_graphic_pane_g2_cp2

0x8a67,	// (0x00033277) list_double2_graphic_pane_g3_cp2

0x8a71,	// (0x00033281) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8a71,	// (0x00033281) list_double2_graphic_pane_t1_cp2

0x8a87,	// (0x00033297) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8a87,	// (0x00033297) list_double2_graphic_pane_t2_cp2

0x8a99,	// (0x000332a9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8a99,	// (0x000332a9) list_single_number_heading_pane_g1_cp2

0x8aa5,	// (0x000332b5) list_single_number_heading_pane_g2_cp2

0x8aad,	// (0x000332bd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8aad,	// (0x000332bd) list_single_number_heading_pane_t1_cp2

0x8ac3,	// (0x000332d3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8ac3,	// (0x000332d3) list_single_number_heading_pane_t2_cp2

0x8ad5,	// (0x000332e5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8ad5,	// (0x000332e5) list_single_number_heading_pane_t3_cp2

0x8a99,	// (0x000332a9) list_single_heading_pane_g1_cp2_ParamLimits

0x8a99,	// (0x000332a9) list_single_heading_pane_g1_cp2

0x8aa5,	// (0x000332b5) list_single_heading_pane_g2_cp2

0x8aad,	// (0x000332bd) list_single_heading_pane_t1_cp2_ParamLimits

0x8aad,	// (0x000332bd) list_single_heading_pane_t1_cp2

0xa9e3,	// (0x000351f3) list_single_heading_pane_t2_cp2_ParamLimits

0xa9e3,	// (0x000351f3) list_single_heading_pane_t2_cp2

0xa925,	// (0x00035135) list_double_graphic_pane_g1_cp2_ParamLimits

0xa925,	// (0x00035135) list_double_graphic_pane_g1_cp2

0xa931,	// (0x00035141) list_double_graphic_pane_g2_cp2_ParamLimits

0xa931,	// (0x00035141) list_double_graphic_pane_g2_cp2

0xa940,	// (0x00035150) list_double_graphic_pane_g3_cp2

0xa948,	// (0x00035158) list_double_graphic_pane_t1_cp2_ParamLimits

0xa948,	// (0x00035158) list_double_graphic_pane_t1_cp2

0xa95e,	// (0x0003516e) list_double_graphic_pane_t2_cp2_ParamLimits

0xa95e,	// (0x0003516e) list_double_graphic_pane_t2_cp2

0x8b4a,	// (0x0003335a) list_double_number_pane_g1_cp2_ParamLimits

0x8b4a,	// (0x0003335a) list_double_number_pane_g1_cp2

0x8b56,	// (0x00033366) list_double_number_pane_g2_cp2

0xa8e9,	// (0x000350f9) list_double_number_pane_t1_cp2_ParamLimits

0xa8e9,	// (0x000350f9) list_double_number_pane_t1_cp2

0xa8fd,	// (0x0003510d) list_double_number_pane_t2_cp2_ParamLimits

0xa8fd,	// (0x0003510d) list_double_number_pane_t2_cp2

0xa913,	// (0x00035123) list_double_number_pane_t3_cp2_ParamLimits

0xa913,	// (0x00035123) list_double_number_pane_t3_cp2

0xa7c6,	// (0x00034fd6) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7c6,	// (0x00034fd6) list_single_graphic_pane_g1_cp2

0x8bae,	// (0x000333be) list_single_graphic_pane_g2_cp2_ParamLimits

0x8bae,	// (0x000333be) list_single_graphic_pane_g2_cp2

0x8bba,	// (0x000333ca) list_single_graphic_pane_g3_cp2

0xa79c,	// (0x00034fac) list_single_graphic_pane_t1_cp2_ParamLimits

0xa79c,	// (0x00034fac) list_single_graphic_pane_t1_cp2

0x8bae,	// (0x000333be) list_single_number_pane_g1_cp2_ParamLimits

0x8bae,	// (0x000333be) list_single_number_pane_g1_cp2

0x8bba,	// (0x000333ca) list_single_number_pane_g2_cp2

0xa79c,	// (0x00034fac) list_single_number_pane_t1_cp2_ParamLimits

0xa79c,	// (0x00034fac) list_single_number_pane_t1_cp2

0xa7b2,	// (0x00034fc2) list_single_number_pane_t2_cp2_ParamLimits

0xa7b2,	// (0x00034fc2) list_single_number_pane_t2_cp2

0x89b7,	// (0x000331c7) list_double2_pane_g1_cp2_ParamLimits

0x89b7,	// (0x000331c7) list_double2_pane_g1_cp2

0x89c8,	// (0x000331d8) list_double2_pane_g2_cp2

0x8b22,	// (0x00033332) list_double2_pane_t1_cp2_ParamLimits

0x8b22,	// (0x00033332) list_double2_pane_t1_cp2

0x8b38,	// (0x00033348) list_double2_pane_t2_cp2_ParamLimits

0x8b38,	// (0x00033348) list_double2_pane_t2_cp2

0x8b4a,	// (0x0003335a) list_double_pane_g1_cp2_ParamLimits

0x8b4a,	// (0x0003335a) list_double_pane_g1_cp2

0x8b56,	// (0x00033366) list_double_pane_g2_cp2

0x8b5e,	// (0x0003336e) list_double_pane_t1_cp2_ParamLimits

0x8b5e,	// (0x0003336e) list_double_pane_t1_cp2

0x8b74,	// (0x00033384) list_double_pane_t2_cp2_ParamLimits

0x8b74,	// (0x00033384) list_double_pane_t2_cp2

0x8b9e,	// (0x000333ae) list_single_pane_cp2_g3

0x8bae,	// (0x000333be) list_single_pane_g1_cp2_ParamLimits

0x8bae,	// (0x000333be) list_single_pane_g1_cp2

0x8bba,	// (0x000333ca) list_single_pane_g2_cp2

0x8bc2,	// (0x000333d2) list_single_pane_t1_cp2_ParamLimits

0x8bc2,	// (0x000333d2) list_single_pane_t1_cp2

0x8bda,	// (0x000333ea) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8bda,	// (0x000333ea) list_single_large_graphic_pane_g1_cp2

0x8be6,	// (0x000333f6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8be6,	// (0x000333f6) list_single_large_graphic_pane_g2_cp2

0x8bf2,	// (0x00033402) list_single_large_graphic_pane_g3_cp2

0x8bfa,	// (0x0003340a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8bfa,	// (0x0003340a) list_single_large_graphic_pane_g4_cp1

0x8c36,	// (0x00033446) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8c36,	// (0x00033446) list_single_large_graphic_pane_t1_cp2

0xa768,	// (0x00034f78) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa768,	// (0x00034f78) list_single_graphic_heading_pane_g1_cp2

0xa735,	// (0x00034f45) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa735,	// (0x00034f45) list_single_graphic_heading_pane_g4_cp2

0x8bba,	// (0x000333ca) list_single_graphic_heading_pane_g5_cp2

0xa774,	// (0x00034f84) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa774,	// (0x00034f84) list_single_graphic_heading_pane_t1_cp2

0xa78a,	// (0x00034f9a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa78a,	// (0x00034f9a) list_single_graphic_heading_pane_t2_cp2

0xa729,	// (0x00034f39) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa729,	// (0x00034f39) list_single_2graphic_pane_g1_cp2

0xa735,	// (0x00034f45) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa735,	// (0x00034f45) list_single_2graphic_pane_g2_cp2

0x8bba,	// (0x000333ca) list_single_2graphic_pane_g3_cp2

0xa746,	// (0x00034f56) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa746,	// (0x00034f56) list_single_2graphic_pane_g4_cp2

0xa752,	// (0x00034f62) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa752,	// (0x00034f62) list_single_2graphic_pane_t1_cp2

0x6f96,	// (0x000317a6) list_highlight_pane_g10_cp1

0xa301,	// (0x00034b11) list_highlight_pane_g1_cp1

0xa309,	// (0x00034b19) list_highlight_pane_g2_cp1

0xa311,	// (0x00034b21) list_highlight_pane_g3_cp1

0xa319,	// (0x00034b29) list_highlight_pane_g4_cp1

0xa321,	// (0x00034b31) list_highlight_pane_g5_cp1

0xa329,	// (0x00034b39) list_highlight_pane_g6_cp1

0xa331,	// (0x00034b41) list_highlight_pane_g7_cp1

0xa339,	// (0x00034b49) list_highlight_pane_g8_cp1

0xa341,	// (0x00034b51) list_highlight_pane_g9_cp1

0xa221,	// (0x00034a31) form_field_slider_pane_t3

0xa22f,	// (0x00034a3f) form_field_slider_pane_t4

0xa23d,	// (0x00034a4d) slider_form_pane_ParamLimits

0xa23d,	// (0x00034a4d) slider_form_pane

0x6fa0,	// (0x000317b0) control_abbreviations

0x6fa0,	// (0x000317b0) control_conventions

0x6fa0,	// (0x000317b0) control_definitions

0x6fa0,	// (0x000317b0) format_table_attribute

0xaa2d,	// (0x0003523d) bg_popup_preview_window_pane_g9

0x6fa0,	// (0x000317b0) format_table_data2

0x6fa0,	// (0x000317b0) format_table_data3

0x6fa0,	// (0x000317b0) format_table_data_example

0x0008,

0x6fa0,	// (0x000317b0) intro_purpose

0xf900,	// (0x0003a110) bg_popup_preview_window_pane_g

0x6fa0,	// (0x000317b0) texts_category

0x6fa0,	// (0x000317b0) texts_graphics

0x8c4c,	// (0x0003345c) text_digital

0x8c5b,	// (0x0003346b) text_primary

0x8c6a,	// (0x0003347a) text_primary_small

0x8c79,	// (0x00033489) text_secondary

0x8c88,	// (0x00033498) text_title

0xb155,	// (0x00035965) bg_passive_tab_pane_g1_cp3_srt

0x88c2,	// (0x000330d2) bg_passive_tab_pane_g2_cp3_srt

0xb15e,	// (0x0003596e) bg_passive_tab_pane_g3_cp3_srt

0x7080,	// (0x00031890) bg_active_tab_pane_cp3_srt_ParamLimits

0x7080,	// (0x00031890) bg_active_tab_pane_cp3_srt

0xb167,	// (0x00035977) tabs_4_active_pane_srt_g1

0xb16f,	// (0x0003597f) tabs_4_active_pane_srt_t1_ParamLimits

0xb16f,	// (0x0003597f) tabs_4_active_pane_srt_t1

0xb155,	// (0x00035965) bg_active_tab_pane_g1_cp3_copy1

0x88c2,	// (0x000330d2) bg_active_tab_pane_g2_cp3_copy1

0xb15e,	// (0x0003596e) bg_active_tab_pane_g3_cp3_copy1

0x7080,	// (0x00031890) tabs_2_long_active_pane_srt_ParamLimits

0x7080,	// (0x00031890) tabs_2_long_active_pane_srt

0x7080,	// (0x00031890) tabs_2_long_passive_pane_srt_ParamLimits

0x7080,	// (0x00031890) tabs_2_long_passive_pane_srt

0x8220,	// (0x00032a30) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8220,	// (0x00032a30) bg_passive_tab_pane_cp4_srt

0xae71,	// (0x00035681) bg_passive_tab_pane_g1_cp4_srt

0x88c2,	// (0x000330d2) bg_passive_tab_pane_g2_cp4_srt

0xae7a,	// (0x0003568a) bg_passive_tab_pane_g3_cp4_srt

0x81ff,	// (0x00032a0f) bg_active_tab_pane_cp4_srt_ParamLimits

0x81ff,	// (0x00032a0f) bg_active_tab_pane_cp4_srt

0xae83,	// (0x00035693) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae83,	// (0x00035693) tabs_2_long_active_pane_srt_t1

0xae71,	// (0x00035681) bg_active_tab_pane_g1_cp4_srt

0x88c2,	// (0x000330d2) bg_active_tab_pane_g2_cp4_srt

0xae7a,	// (0x0003568a) bg_active_tab_pane_g3_cp4_srt

0x7a41,	// (0x00032251) tabs_3_long_active_pane_srt_ParamLimits

0x7a41,	// (0x00032251) tabs_3_long_active_pane_srt

0x7a41,	// (0x00032251) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7a41,	// (0x00032251) tabs_3_long_passive_pane_cp_srt

0x7a41,	// (0x00032251) tabs_3_long_passive_pane_srt_ParamLimits

0x7a41,	// (0x00032251) tabs_3_long_passive_pane_srt

0x8220,	// (0x00032a30) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8220,	// (0x00032a30) bg_passive_tab_pane_cp5_srt

0x894c,	// (0x0003315c) bg_passive_tab_pane_g1_cp5_srt

0x88c2,	// (0x000330d2) bg_passive_tab_pane_g2_cp5_srt

0x8955,	// (0x00033165) bg_passive_tab_pane_g3_cp5_srt

0x81ff,	// (0x00032a0f) bg_active_tab_pane_cp5_srt_ParamLimits

0x81ff,	// (0x00032a0f) bg_active_tab_pane_cp5_srt

0xae5f,	// (0x0003566f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae5f,	// (0x0003566f) tabs_3_long_active_pane_srt_t1

0x894c,	// (0x0003315c) bg_active_tab_pane_g1_cp5_srt

0x88c2,	// (0x000330d2) bg_active_tab_pane_g2_cp5_srt

0x8955,	// (0x00033165) bg_active_tab_pane_g3_cp5_srt

0xae51,	// (0x00035661) navi_text_pane_srt_t1

0xae49,	// (0x00035659) navi_icon_pane_srt_g1

0x8e5b,	// (0x0003366b) midp_editing_number_pane_srt

0x8c97,	// (0x000334a7) midp_ticker_pane_srt

0x8e63,	// (0x00033673) midp_ticker_pane_srt_g1

0x8e6b,	// (0x0003367b) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x00039f9a) midp_ticker_pane_srt_g

0x8e73,	// (0x00033683) midp_ticker_pane_srt_t1

0xae3a,	// (0x0003564a) midp_editing_number_pane_t1_copy1

0x8c9f,	// (0x000334af) listscroll_midp_pane

0x8c9f,	// (0x000334af) midp_form_pane

0x8d0d,	// (0x0003351d) midp_info_popup_window_ParamLimits

0x8d0d,	// (0x0003351d) midp_info_popup_window

0x80ea,	// (0x000328fa) bg_popup_sub_pane_cp50_ParamLimits

0x80ea,	// (0x000328fa) bg_popup_sub_pane_cp50

0x9f39,	// (0x00034749) listscroll_midp_info_pane_ParamLimits

0x9f39,	// (0x00034749) listscroll_midp_info_pane

0x9f21,	// (0x00034731) listscroll_form_midp_pane_ParamLimits

0x9f21,	// (0x00034731) listscroll_form_midp_pane

0x9f2d,	// (0x0003473d) scroll_bar_cp050

0x9f01,	// (0x00034711) list_midp_pane

0xbb71,	// (0x00036381) signal_pane_g2_cp

0x9e3b,	// (0x0003464b) listscroll_midp_info_pane_t1_ParamLimits

0x9e3b,	// (0x0003464b) listscroll_midp_info_pane_t1

0x9e53,	// (0x00034663) listscroll_midp_info_pane_t2_ParamLimits

0x9e53,	// (0x00034663) listscroll_midp_info_pane_t2

0x9e91,	// (0x000346a1) listscroll_midp_info_pane_t3_ParamLimits

0x9e91,	// (0x000346a1) listscroll_midp_info_pane_t3

0x9ecb,	// (0x000346db) listscroll_midp_info_pane_t4_ParamLimits

0x9ecb,	// (0x000346db) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x0003a04b) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x0003a04b) listscroll_midp_info_pane_t

0x81ac,	// (0x000329bc) scroll_pane_cp21

0x9dd9,	// (0x000345e9) form_midp_field_choice_group_pane

0x9de2,	// (0x000345f2) form_midp_field_text_pane

0x9e21,	// (0x00034631) form_midp_field_time_pane

0x9e29,	// (0x00034639) form_midp_gauge_slider_pane

0x9e32,	// (0x00034642) form_midp_gauge_wait_pane

0x6fa0,	// (0x000317b0) form_midp_image_pane

0x71c0,	// (0x000319d0) list_single_midp_pane_ParamLimits

0x71c0,	// (0x000319d0) list_single_midp_pane

0x9d91,	// (0x000345a1) form_midp_field_text_pane_t1

0x9b83,	// (0x00034393) input_focus_pane_cp050

0x9dc8,	// (0x000345d8) list_midp_form_text_pane

0x9d60,	// (0x00034570) form_midp_field_choice_group_pane_t1

0x9d6e,	// (0x0003457e) input_focus_pane_cp051

0x9d82,	// (0x00034592) list_midp_choice_pane

0x6fa0,	// (0x000317b0) status_idle_pane

0x9d44,	// (0x00034554) form_midp_field_time_pane_t1

0x6f96,	// (0x000317a6) wait_anim_pane_g2_copy1

0x9d52,	// (0x00034562) form_midp_field_time_pane_t2

0x0001,

0x8dbb,	// (0x000335cb) aid_navinavi_width_2_pane

0xf836,	// (0x0003a046) form_midp_field_time_pane_t

0x6fa0,	// (0x000317b0) input_focus_pane_cp052

0x6fa0,	// (0x000317b0) bg_input_focus_pane_cp040

0x9d04,	// (0x00034514) form_midp_gauge_slider_pane_t1

0x9d12,	// (0x00034522) form_midp_gauge_slider_pane_t2

0x9d20,	// (0x00034530) form_midp_gauge_slider_pane_t3

0x9d2e,	// (0x0003453e) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x0003a03d) form_midp_gauge_slider_pane_t

0x9d3c,	// (0x0003454c) form_midp_slider_pane

0x7080,	// (0x00031890) bg_input_focus_pane_cp041_ParamLimits

0x7080,	// (0x00031890) bg_input_focus_pane_cp041

0x9cd1,	// (0x000344e1) form_midp_gauge_wait_pane_t1_ParamLimits

0x9cd1,	// (0x000344e1) form_midp_gauge_wait_pane_t1

0x9ce3,	// (0x000344f3) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ce3,	// (0x000344f3) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0003a038) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0003a038) form_midp_gauge_wait_pane_t

0x9cf5,	// (0x00034505) form_midp_wait_pane_ParamLimits

0x9cf5,	// (0x00034505) form_midp_wait_pane

0x9c9b,	// (0x000344ab) form_midp_image_pane_g1

0x9ca4,	// (0x000344b4) form_midp_image_pane_t1

0x9cb3,	// (0x000344c3) form_midp_image_pane_t2

0x9cc2,	// (0x000344d2) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0003a031) form_midp_image_pane_t

0x9c92,	// (0x000344a2) list_single_midp_pane_g1

0x5f4e,	// (0x0003075e) list_single_midp_pane_t1

0x9c6a,	// (0x0003447a) list_midp_form_item_pane_ParamLimits

0x9c6a,	// (0x0003447a) list_midp_form_item_pane

0x8d63,	// (0x00033573) list_midp_form_item_pane_t1

0x8d72,	// (0x00033582) midp_ticker_pane_g1

0x8d7e,	// (0x0003358e) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x00039f80) midp_ticker_pane_g

0x8d8a,	// (0x0003359a) midp_ticker_pane_t1

0xb08b,	// (0x0003589b) midp_editing_number_pane_t1

0xb069,	// (0x00035879) midp_editing_number_pane

0xb078,	// (0x00035888) midp_ticker_pane

0xae2a,	// (0x0003563a) ai_message_heading_pane

0x6fa0,	// (0x000317b0) bg_popup_window_pane_cp14

0xae32,	// (0x00035642) listscroll_ai_message_pane

0xadb4,	// (0x000355c4) ai_message_heading_pane_g1_ParamLimits

0xadb4,	// (0x000355c4) ai_message_heading_pane_g1

0xadc0,	// (0x000355d0) ai_message_heading_pane_g2_ParamLimits

0xadc0,	// (0x000355d0) ai_message_heading_pane_g2

0xadcc,	// (0x000355dc) ai_message_heading_pane_g3_ParamLimits

0xadcc,	// (0x000355dc) ai_message_heading_pane_g3

0xadd8,	// (0x000355e8) ai_message_heading_pane_g4_ParamLimits

0xadd8,	// (0x000355e8) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0003a172) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0003a172) ai_message_heading_pane_g

0xade4,	// (0x000355f4) ai_message_heading_pane_t1_ParamLimits

0xade4,	// (0x000355f4) ai_message_heading_pane_t1

0xadfe,	// (0x0003560e) ai_message_heading_pane_t2_ParamLimits

0xadfe,	// (0x0003560e) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0003a17b) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0003a17b) ai_message_heading_pane_t

0xae10,	// (0x00035620) bg_popup_heading_pane_cp1_ParamLimits

0xae10,	// (0x00035620) bg_popup_heading_pane_cp1

0xada2,	// (0x000355b2) list_ai_message_pane_ParamLimits

0xada2,	// (0x000355b2) list_ai_message_pane

0x81ac,	// (0x000329bc) scroll_pane_cp10

0xad3e,	// (0x0003554e) list_ai_message_pane_g1

0xad46,	// (0x00035556) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0003a14f) list_ai_message_pane_g

0xad4e,	// (0x0003555e) list_ai_message_pane_t1_ParamLimits

0xad4e,	// (0x0003555e) list_ai_message_pane_t1

0xad63,	// (0x00035573) list_ai_message_pane_t2_ParamLimits

0xad63,	// (0x00035573) list_ai_message_pane_t2

0xad78,	// (0x00035588) list_ai_message_pane_t3_ParamLimits

0xad78,	// (0x00035588) list_ai_message_pane_t3

0xad8d,	// (0x0003559d) list_ai_message_pane_t4_ParamLimits

0xad8d,	// (0x0003559d) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0003a154) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0003a154) list_ai_message_pane_t

0xad29,	// (0x00035539) cell_ai_soft_ind_pane_ParamLimits

0xad29,	// (0x00035539) cell_ai_soft_ind_pane

0x8d9c,	// (0x000335ac) cell_ai_soft_ind_pane_g1_ParamLimits

0x8d9c,	// (0x000335ac) cell_ai_soft_ind_pane_g1

0x6fa0,	// (0x000317b0) grid_highlight_cp1

0x8da9,	// (0x000335b9) text_secondary_cp56_ParamLimits

0x8da9,	// (0x000335b9) text_secondary_cp56

0xacfe,	// (0x0003550e) example_general_pane_ParamLimits

0xacfe,	// (0x0003550e) example_general_pane

0xad0a,	// (0x0003551a) example_parent_pane_g1_ParamLimits

0xad0a,	// (0x0003551a) example_parent_pane_g1

0xad16,	// (0x00035526) example_parent_pane_t1_ParamLimits

0xad16,	// (0x00035526) example_parent_pane_t1

0x9386,	// (0x00033b96) popup_preview_text_window_ParamLimits

0x9386,	// (0x00033b96) popup_preview_text_window

0x8ba6,	// (0x000333b6) list_single_pane_cp2_g4

0x7af7,	// (0x00032307) bg_popup_preview_window_pane_ParamLimits

0x7af7,	// (0x00032307) bg_popup_preview_window_pane

0xaa35,	// (0x00035245) popup_preview_text_window_t1_ParamLimits

0xaa35,	// (0x00035245) popup_preview_text_window_t1

0xaa53,	// (0x00035263) popup_preview_text_window_t2_ParamLimits

0xaa53,	// (0x00035263) popup_preview_text_window_t2

0xaa9c,	// (0x000352ac) popup_preview_text_window_t3_ParamLimits

0xaa9c,	// (0x000352ac) popup_preview_text_window_t3

0xaae1,	// (0x000352f1) popup_preview_text_window_t4_ParamLimits

0xaae1,	// (0x000352f1) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0003a123) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0003a123) popup_preview_text_window_t

0xab5f,	// (0x0003536f) scroll_pane_cp11

0x9a93,	// (0x000342a3) bg_popup_preview_window_pane_g1

0xa9f5,	// (0x00035205) bg_popup_preview_window_pane_g2

0xa9fd,	// (0x0003520d) bg_popup_preview_window_pane_g3

0xaa05,	// (0x00035215) bg_popup_preview_window_pane_g4

0xaa0d,	// (0x0003521d) bg_popup_preview_window_pane_g5

0xaa15,	// (0x00035225) bg_popup_preview_window_pane_g6

0xaa1d,	// (0x0003522d) bg_popup_preview_window_pane_g7

0xaa25,	// (0x00035235) bg_popup_preview_window_pane_g8

0x4b54,	// (0x0002f364) aid_popup_width_pane

0x9364,	// (0x00033b74) popup_midp_note_alarm_window_ParamLimits

0x9364,	// (0x00033b74) popup_midp_note_alarm_window

0x8026,	// (0x00032836) data_form_pane_ParamLimits

0x5563,	// (0x0002fd73) form_field_data_pane_g1

0x556d,	// (0x0002fd7d) form_field_data_pane_t1_ParamLimits

0x8032,	// (0x00032842) input_focus_pane_ParamLimits

0x8040,	// (0x00032850) data_form_wide_pane_ParamLimits

0x5585,	// (0x0002fd95) form_field_data_wide_pane_g1

0x5591,	// (0x0002fda1) form_field_data_wide_pane_t1_ParamLimits

0x7da3,	// (0x000325b3) input_focus_pane_cp6_ParamLimits

0x8159,	// (0x00032969) input_popup_find_pane_g1_ParamLimits

0x8159,	// (0x00032969) input_popup_find_pane_g1

0x5809,	// (0x00030019) aid_navi_side_left_pane

0x581e,	// (0x0003002e) aid_navi_side_right_pane

0xa3fc,	// (0x00034c0c) bg_popup_window_pane_cp30_ParamLimits

0xa3fc,	// (0x00034c0c) bg_popup_window_pane_cp30

0xa476,	// (0x00034c86) popup_midp_note_alarm_window_g1_ParamLimits

0xa476,	// (0x00034c86) popup_midp_note_alarm_window_g1

0xa4a6,	// (0x00034cb6) popup_midp_note_alarm_window_t1_ParamLimits

0xa4a6,	// (0x00034cb6) popup_midp_note_alarm_window_t1

0xa547,	// (0x00034d57) popup_midp_note_alarm_window_t2_ParamLimits

0xa547,	// (0x00034d57) popup_midp_note_alarm_window_t2

0xa5f5,	// (0x00034e05) popup_midp_note_alarm_window_t3_ParamLimits

0xa5f5,	// (0x00034e05) popup_midp_note_alarm_window_t3

0xa627,	// (0x00034e37) popup_midp_note_alarm_window_t4_ParamLimits

0xa627,	// (0x00034e37) popup_midp_note_alarm_window_t4

0xa64d,	// (0x00034e5d) popup_midp_note_alarm_window_t5_ParamLimits

0xa64d,	// (0x00034e5d) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0003a0c0) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0003a0c0) popup_midp_note_alarm_window_t

0xa6f9,	// (0x00034f09) wait_bar_pane_cp1_ParamLimits

0xa6f9,	// (0x00034f09) wait_bar_pane_cp1

0x6fa0,	// (0x000317b0) wait_anim_pane_copy1

0x6fa0,	// (0x000317b0) wait_border_pane_copy1

0xa0e2,	// (0x000348f2) wait_border_pane_g1_copy1

0x55ab,	// (0x0002fdbb) form_field_popup_pane_g1

0x55b3,	// (0x0002fdc3) form_field_popup_pane_t1_ParamLimits

0x8032,	// (0x00032842) input_focus_pane_cp7_ParamLimits

0x806c,	// (0x0003287c) list_form_pane_ParamLimits

0x55cb,	// (0x0002fddb) form_field_popup_wide_pane_g1

0x55d3,	// (0x0002fde3) form_field_popup_wide_pane_t1_ParamLimits

0x8032,	// (0x00032842) input_focus_pane_cp8_ParamLimits

0x8078,	// (0x00032888) list_form_wide_pane_ParamLimits

0xb1e1,	// (0x000359f1) aid_size_cell_graphic_pane

0x565d,	// (0x0002fe6d) data_form_pane_t1_ParamLimits

0x721a,	// (0x00031a2a) data_form_wide_pane_t1_ParamLimits

0x9667,	// (0x00033e77) bg_status_flat_pane

0x6fe0,	// (0x000317f0) title_pane_t1_ParamLimits

0x7048,	// (0x00031858) title_pane_t2_ParamLimits

0x706e,	// (0x0003187e) title_pane_t3_ParamLimits

0xf573,	// (0x00039d83) title_pane_t_ParamLimits

0x862d,	// (0x00032e3d) level_1_signal_ParamLimits

0x863a,	// (0x00032e4a) level_2_signal_ParamLimits

0x8647,	// (0x00032e57) level_3_signal_ParamLimits

0x8654,	// (0x00032e64) level_4_signal_ParamLimits

0x8661,	// (0x00032e71) level_5_signal_ParamLimits

0x866e,	// (0x00032e7e) level_6_signal_ParamLimits

0x867b,	// (0x00032e8b) level_7_signal_ParamLimits

0x862d,	// (0x00032e3d) level_1_battery_ParamLimits

0x863a,	// (0x00032e4a) level_2_battery_ParamLimits

0x8647,	// (0x00032e57) level_3_battery_ParamLimits

0x8654,	// (0x00032e64) level_4_battery_ParamLimits

0x8661,	// (0x00032e71) level_5_battery_ParamLimits

0x866e,	// (0x00032e7e) level_6_battery_ParamLimits

0x867b,	// (0x00032e8b) level_7_battery_ParamLimits

0xa301,	// (0x00034b11) bg_status_flat_pane_g1

0xa309,	// (0x00034b19) bg_status_flat_pane_g2

0xa311,	// (0x00034b21) bg_status_flat_pane_g3

0xa319,	// (0x00034b29) bg_status_flat_pane_g4

0xa321,	// (0x00034b31) bg_status_flat_pane_g5

0xa329,	// (0x00034b39) bg_status_flat_pane_g6

0xa331,	// (0x00034b41) bg_status_flat_pane_g7

0x7096,	// (0x000318a6) tabs_3_active_pane_t1_ParamLimits

0x7096,	// (0x000318a6) tabs_3_passive_pane_t1_ParamLimits

0x70b0,	// (0x000318c0) tabs_4_active_pane_t1_ParamLimits

0x70b0,	// (0x000318c0) tabs_4_1_passive_pane_t1_ParamLimits

0x81ed,	// (0x000329fd) tabs_2_active_pane_t1_ParamLimits

0x81ed,	// (0x000329fd) tabs_2_passive_pane_t1_ParamLimits

0x81ff,	// (0x00032a0f) bg_active_tab_pane_cp4_ParamLimits

0x820d,	// (0x00032a1d) tabs_2_long_active_pane_t1_ParamLimits

0x8220,	// (0x00032a30) bg_passive_tab_pane_cp4_ParamLimits

0x5e9b,	// (0x000306ab) list_single_midp_graphic_pane_t1_ParamLimits

0x81ff,	// (0x00032a0f) bg_active_tab_pane_cp5_ParamLimits

0x822c,	// (0x00032a3c) tabs_3_long_active_pane_t1_ParamLimits

0x8220,	// (0x00032a30) bg_passive_tab_pane_cp5_ParamLimits

0x5e9b,	// (0x000306ab) list_single_midp_graphic_pane_t1

0x9667,	// (0x00033e77) bg_status_flat_pane_ParamLimits

0x972a,	// (0x00033f3a) indicator_pane_cp2_ParamLimits

0x972a,	// (0x00033f3a) indicator_pane_cp2

0x984e,	// (0x0003405e) navi_pane_srt_ParamLimits

0x984e,	// (0x0003405e) navi_pane_srt

0x9872,	// (0x00034082) popup_clock_digital_analogue_window_cp1

0x715d,	// (0x0003196d) indicator_pane_t1

0x8c97,	// (0x000334a7) copy_highlight_pane

0x8c97,	// (0x000334a7) cursor_graphics_pane

0x8c97,	// (0x000334a7) graphic_within_text_pane

0x8c97,	// (0x000334a7) link_highlight_pane

0xab22,	// (0x00035332) popup_preview_text_window_t5_ParamLimits

0xab22,	// (0x00035332) popup_preview_text_window_t5

0x8dc3,	// (0x000335d3) cursor_digital_pane

0x8dc3,	// (0x000335d3) cursor_primary_pane

0x8dd4,	// (0x000335e4) cursor_primary_small_pane

0x8ddc,	// (0x000335ec) cursor_secondary_pane

0x8de4,	// (0x000335f4) cursor_title_pane

0x8dc3,	// (0x000335d3) link_highlight_digital_pane

0x8dcb,	// (0x000335db) link_highlight_primary_pane

0x8dd4,	// (0x000335e4) link_highlight_primary_small_pane

0x8ddc,	// (0x000335ec) link_highlight_secondary_pane

0x8de4,	// (0x000335f4) link_highlight_title_pane

0x8dc3,	// (0x000335d3) copy_highlight_digital_pane

0x8dc3,	// (0x000335d3) copy_highlight_primary_pane

0x8dd4,	// (0x000335e4) copy_highlight_primary_small_pane

0x8ddc,	// (0x000335ec) copy_highlight_secondary_pane

0x8de4,	// (0x000335f4) copy_highlight_title_pane

0x8ddc,	// (0x000335ec) graphic_text_digital_pane

0xa39f,	// (0x00034baf) graphic_text_primary_pane

0xa3a8,	// (0x00034bb8) graphic_text_primary_small_pane

0x8dd4,	// (0x000335e4) graphic_text_secondary_pane

0x8dc3,	// (0x000335d3) graphic_text_title_pane

0x8dec,	// (0x000335fc) cursor_primary_pane_g1

0xa391,	// (0x00034ba1) cursor_text_primary_t1

0xa379,	// (0x00034b89) cursor_primary_small_pane_g1

0xa383,	// (0x00034b93) cursor_text_primary_small_t1

0xa361,	// (0x00034b71) cursor_primary_small_pane_g1_copy1

0xa36b,	// (0x00034b7b) cursor_text_primary_small_t1_copy1

0xa349,	// (0x00034b59) cursor_text_title_t1

0xa357,	// (0x00034b67) cursor_title_pane_g1

0x8dec,	// (0x000335fc) cursor_digital_pane_g1

0x8df6,	// (0x00033606) cursor_text_digital_t1

0x8e1b,	// (0x0003362b) link_highlight_primary_pane_g1

0xa2f2,	// (0x00034b02) link_highlight_primary_pane_t1

0x8e04,	// (0x00033614) link_highlight_primary_small_pane_g1

0x8e0c,	// (0x0003361c) link_highlight_primary_small_pane_t1

0x8e1b,	// (0x0003362b) link_highlight_secondary_pane_g1

0x8e23,	// (0x00033633) link_highlight_secondary_pane_t1

0xa266,	// (0x00034a76) link_highlight_title_pane_g1

0xa26e,	// (0x00034a7e) link_highlight_title_pane_t1

0xa24f,	// (0x00034a5f) link_highlight_digital_pane_g1

0xa257,	// (0x00034a67) link_highlight_digital_pane_t1

0xa127,	// (0x00034937) copy_highlight_primary_pane_g1

0xa12f,	// (0x0003493f) copy_highlight_primary_pane_t1

0xa101,	// (0x00034911) copy_highlight_primary_small_pane_g1

0xa118,	// (0x00034928) copy_highlight_primary_small_pane_t1

0x8e32,	// (0x00033642) copy_highlight_secondary_pane_g1

0x8e3a,	// (0x0003364a) copy_highlight_secondary_pane_t1

0xa101,	// (0x00034911) copy_highlight_title_pane_g1

0xa109,	// (0x00034919) copy_highlight_title_pane_t1

0xa127,	// (0x00034937) copy_highlight_digital_pane_g1

0xb3ab,	// (0x00035bbb) copy_highlight_digital_pane_t1

0xb2ff,	// (0x00035b0f) graphic_text_primary_pane_g1

0xb38f,	// (0x00035b9f) graphic_text_primary_pane_t1

0xb39d,	// (0x00035bad) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0003a1ef) graphic_text_primary_pane_t

0xb36b,	// (0x00035b7b) graphic_text_primary_small_pane_g1

0xb373,	// (0x00035b83) graphic_text_primary_small_pane_t1

0xb381,	// (0x00035b91) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x0003a1ea) graphic_text_primary_small_pane_t

0xb347,	// (0x00035b57) graphic_text_secondary_pane_g1

0xb34f,	// (0x00035b5f) graphic_text_secondary_pane_t1

0xb35d,	// (0x00035b6d) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x0003a1e5) graphic_text_secondary_pane_t

0xb323,	// (0x00035b33) graphic_text_title_pane_g1

0xb32b,	// (0x00035b3b) graphic_text_title_pane_t1

0xb339,	// (0x00035b49) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0003a1e0) graphic_text_title_pane_t

0xb2ff,	// (0x00035b0f) graphic_text_digital_pane_g1

0xb307,	// (0x00035b17) graphic_text_digital_pane_t1

0xb315,	// (0x00035b25) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x0003a1db) graphic_text_digital_pane_t

0x7080,	// (0x00031890) navi_icon_pane_srt_ParamLimits

0x7080,	// (0x00031890) navi_icon_pane_srt

0x6fa0,	// (0x000317b0) navi_midp_pane_srt

0x6fa0,	// (0x000317b0) navi_navi_pane_srt

0x7080,	// (0x00031890) navi_text_pane_srt_ParamLimits

0x7080,	// (0x00031890) navi_text_pane_srt

0xb2ca,	// (0x00035ada) navi_navi_icon_text_pane_srt

0xb2d2,	// (0x00035ae2) navi_navi_pane_srt_g1_ParamLimits

0xb2d2,	// (0x00035ae2) navi_navi_pane_srt_g1

0xb2e4,	// (0x00035af4) navi_navi_pane_srt_g2_ParamLimits

0xb2e4,	// (0x00035af4) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x0003a1d6) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x0003a1d6) navi_navi_pane_srt_g

0xb2f6,	// (0x00035b06) navi_navi_tabs_pane_srt

0xb2ca,	// (0x00035ada) navi_navi_text_pane_srt

0xb2ca,	// (0x00035ada) navi_navi_volume_pane_srt

0xb2bb,	// (0x00035acb) navi_navi_text_pane_srt_t1

0x6224,	// (0x00030a34) navi_navi_volume_pane_srt_g1

0x622c,	// (0x00030a3c) volume_small_pane_srt_ParamLimits

0x622c,	// (0x00030a3c) volume_small_pane_srt

0x5b73,	// (0x00030383) volume_small_pane_srt_g1_ParamLimits

0x5b73,	// (0x00030383) volume_small_pane_srt_g1

0x5b83,	// (0x00030393) volume_small_pane_srt_g2_ParamLimits

0x5b83,	// (0x00030393) volume_small_pane_srt_g2

0x5b94,	// (0x000303a4) volume_small_pane_srt_g3_ParamLimits

0x5b94,	// (0x000303a4) volume_small_pane_srt_g3

0x5ba5,	// (0x000303b5) volume_small_pane_srt_g4_ParamLimits

0x5ba5,	// (0x000303b5) volume_small_pane_srt_g4

0x5bb6,	// (0x000303c6) volume_small_pane_srt_g5_ParamLimits

0x5bb6,	// (0x000303c6) volume_small_pane_srt_g5

0x5bc7,	// (0x000303d7) volume_small_pane_srt_g6_ParamLimits

0x5bc7,	// (0x000303d7) volume_small_pane_srt_g6

0x5bd8,	// (0x000303e8) volume_small_pane_srt_g7_ParamLimits

0x5bd8,	// (0x000303e8) volume_small_pane_srt_g7

0x5be9,	// (0x000303f9) volume_small_pane_srt_g8_ParamLimits

0x5be9,	// (0x000303f9) volume_small_pane_srt_g8

0x5bfa,	// (0x0003040a) volume_small_pane_srt_g9_ParamLimits

0x5bfa,	// (0x0003040a) volume_small_pane_srt_g9

0x5c0b,	// (0x0003041b) volume_small_pane_srt_g10_ParamLimits

0x5c0b,	// (0x0003041b) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x00039f85) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x00039f85) volume_small_pane_srt_g

0x7ba0,	// (0x000323b0) query_popup_data_pane_cp2

0xb2a1,	// (0x00035ab1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2a1,	// (0x00035ab1) navi_navi_icon_text_pane_srt_t1

0xa39f,	// (0x00034baf) navi_tabs_2_long_pane_srt

0xa39f,	// (0x00034baf) navi_tabs_2_pane_srt

0xa39f,	// (0x00034baf) navi_tabs_3_long_pane_srt

0xa39f,	// (0x00034baf) navi_tabs_3_pane_srt

0xa39f,	// (0x00034baf) navi_tabs_4_pane_srt

0x6204,	// (0x00030a14) tabs_2_active_pane_srt_ParamLimits

0x6204,	// (0x00030a14) tabs_2_active_pane_srt

0x6214,	// (0x00030a24) tabs_2_passive_pane_srt_ParamLimits

0x6214,	// (0x00030a24) tabs_2_passive_pane_srt

0x8ffd,	// (0x0003380d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ffd,	// (0x0003380d) bg_passive_tab_pane_cp1_srt

0xb276,	// (0x00035a86) bg_passive_tab_pane_g1_cp1_srt

0x88c2,	// (0x000330d2) bg_passive_tab_pane_g2_cp1_srt

0xb26d,	// (0x00035a7d) bg_passive_tab_pane_g3_cp1_srt

0x7080,	// (0x00031890) bg_active_tab_pane_cp1_srt_ParamLimits

0x7080,	// (0x00031890) bg_active_tab_pane_cp1_srt

0xb27f,	// (0x00035a8f) tabs_2_active_pane_srt_g1

0xb287,	// (0x00035a97) tabs_2_active_pane_srt_t1_ParamLimits

0xb287,	// (0x00035a97) tabs_2_active_pane_srt_t1

0xb276,	// (0x00035a86) bg_active_tab_pane_g1_cp1_srt

0x88c2,	// (0x000330d2) bg_active_tab_pane_g2_cp1_srt

0xb26d,	// (0x00035a7d) bg_active_tab_pane_g3_cp1_srt

0x61d1,	// (0x000309e1) tabs_3_active_pane_srt_ParamLimits

0x61d1,	// (0x000309e1) tabs_3_active_pane_srt

0x61e2,	// (0x000309f2) tabs_3_passive_pane_cp_srt_ParamLimits

0x61e2,	// (0x000309f2) tabs_3_passive_pane_cp_srt

0x61f3,	// (0x00030a03) tabs_3_passive_pane_srt_ParamLimits

0x61f3,	// (0x00030a03) tabs_3_passive_pane_srt

0x8ffd,	// (0x0003380d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ffd,	// (0x0003380d) bg_passive_tab_pane_cp2_srt

0x8e49,	// (0x00033659) bg_passive_tab_pane_g1_cp2_srt

0x88c2,	// (0x000330d2) bg_passive_tab_pane_g2_cp2_srt

0x8e52,	// (0x00033662) bg_passive_tab_pane_g3_cp2_srt

0x7080,	// (0x00031890) bg_active_tab_pane_cp2_srt_ParamLimits

0x7080,	// (0x00031890) bg_active_tab_pane_cp2_srt

0xb253,	// (0x00035a63) tabs_3_active_pane_srt_g1

0xb25b,	// (0x00035a6b) tabs_3_active_pane_srt_t1_ParamLimits

0xb25b,	// (0x00035a6b) tabs_3_active_pane_srt_t1

0x8e49,	// (0x00033659) bg_active_tab_pane_g1_cp2_srt

0x88c2,	// (0x000330d2) bg_active_tab_pane_g2_cp2_srt

0x8e52,	// (0x00033662) bg_active_tab_pane_g3_cp2_srt

0x6189,	// (0x00030999) tabs_4_active_pane_srt_ParamLimits

0x6189,	// (0x00030999) tabs_4_active_pane_srt

0x619b,	// (0x000309ab) tabs_4_passive_pane_cp2_srt_ParamLimits

0x619b,	// (0x000309ab) tabs_4_passive_pane_cp2_srt

0x8fa7,	// (0x000337b7) aid_size_cell_toolbar

0x8220,	// (0x00032a30) main_idle_act_pane_ParamLimits

0x919a,	// (0x000339aa) popup_large_graphic_colour_window_ParamLimits

0x9501,	// (0x00033d11) popup_toolbar_window_ParamLimits

0x9501,	// (0x00033d11) popup_toolbar_window

0xb0b5,	// (0x000358c5) list_single_graphic_2heading_pane_ParamLimits

0xb0b5,	// (0x000358c5) list_single_graphic_2heading_pane

0x83dc,	// (0x00032bec) aid_size_cell_apps_grid_lsc_pane

0x83ee,	// (0x00032bfe) aid_size_cell_apps_grid_prt_pane

0x8ffd,	// (0x0003380d) bg_wml_button_pane_cp1_ParamLimits

0x8ffd,	// (0x0003380d) bg_wml_button_pane_cp1

0x9d91,	// (0x000345a1) form_midp_field_text_pane_t1_ParamLimits

0x9b83,	// (0x00034393) input_focus_pane_cp050_ParamLimits

0x9dc8,	// (0x000345d8) list_midp_form_text_pane_ParamLimits

0x9d6e,	// (0x0003457e) input_focus_pane_cp051_ParamLimits

0x9d82,	// (0x00034592) list_midp_choice_pane_ParamLimits

0x9c14,	// (0x00034424) list_single_2graphic_pane_cp3_ParamLimits

0x9c14,	// (0x00034424) list_single_2graphic_pane_cp3

0x9c38,	// (0x00034448) list_single_midp_graphic_pane_ParamLimits

0x9c38,	// (0x00034448) list_single_midp_graphic_pane

0x4adc,	// (0x0002f2ec) list_single_graphic_2heading_pane_g1_ParamLimits

0x4adc,	// (0x0002f2ec) list_single_graphic_2heading_pane_g1

0x4ae8,	// (0x0002f2f8) list_single_graphic_2heading_pane_g4_ParamLimits

0x4ae8,	// (0x0002f2f8) list_single_graphic_2heading_pane_g4

0x4af4,	// (0x0002f304) list_single_graphic_2heading_pane_g5_ParamLimits

0x4af4,	// (0x0002f304) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x00039fd8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x00039fd8) list_single_graphic_2heading_pane_g

0x4b00,	// (0x0002f310) list_single_graphic_2heading_pane_t1_ParamLimits

0x4b00,	// (0x0002f310) list_single_graphic_2heading_pane_t1

0x4b14,	// (0x0002f324) list_single_graphic_2heading_pane_t2_ParamLimits

0x4b14,	// (0x0002f324) list_single_graphic_2heading_pane_t2

0x4b30,	// (0x0002f340) list_single_graphic_2heading_pane_t3_ParamLimits

0x4b30,	// (0x0002f340) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x00039fdf) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x00039fdf) list_single_graphic_2heading_pane_t

0x99d1,	// (0x000341e1) bg_popup_sub_pane_cp2

0x99fb,	// (0x0003420b) grid_toobar_pane

0x5d8e,	// (0x0003059e) cell_toolbar_pane_ParamLimits

0x5d8e,	// (0x0003059e) cell_toolbar_pane

0x9a37,	// (0x00034247) cell_toolbar_pane_g1_ParamLimits

0x9a37,	// (0x00034247) cell_toolbar_pane_g1

0x9a4b,	// (0x0003425b) cell_toolbar_pane_g2_ParamLimits

0x9a4b,	// (0x0003425b) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x00039fed) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x00039fed) cell_toolbar_pane_g

0x9a6d,	// (0x0003427d) grid_highlight_pane_cp2_ParamLimits

0x9a6d,	// (0x0003427d) grid_highlight_pane_cp2

0x9a87,	// (0x00034297) toolbar_button_pane

0x9a93,	// (0x000342a3) toolbar_button_pane_g1

0x9a9b,	// (0x000342ab) toolbar_button_pane_g2

0x9aa3,	// (0x000342b3) toolbar_button_pane_g3

0x9aab,	// (0x000342bb) toolbar_button_pane_g4

0x9ab3,	// (0x000342c3) toolbar_button_pane_g5

0x9abb,	// (0x000342cb) toolbar_button_pane_g6

0x9ac3,	// (0x000342d3) toolbar_button_pane_g7

0x9acb,	// (0x000342db) toolbar_button_pane_g8

0x9ad3,	// (0x000342e3) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x00039ff2) toolbar_button_pane_g

0x5e00,	// (0x00030610) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5e00,	// (0x00030610) list_single_2graphic_pane_g1_cp3

0x5e0c,	// (0x0003061c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5e0c,	// (0x0003061c) list_single_2graphic_pane_g2_cp3

0x5e1d,	// (0x0003062d) list_single_2graphic_pane_g3_cp3

0x5e25,	// (0x00030635) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5e25,	// (0x00030635) list_single_2graphic_pane_g4_cp3

0x5e31,	// (0x00030641) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5e31,	// (0x00030641) list_single_2graphic_pane_t1_cp3

0x5e8f,	// (0x0003069f) list_single_midp_graphic_pane_g2_ParamLimits

0x5e8f,	// (0x0003069f) list_single_midp_graphic_pane_g2

0x8faf,	// (0x000337bf) aid_zoom_text_primary

0x5d62,	// (0x00030572) aid_zoom_text_secondary

0x8f06,	// (0x00033716) status_small_pane_g7_ParamLimits

0x8f06,	// (0x00033716) status_small_pane_g7

0x8f29,	// (0x00033739) status_small_pane_t1_ParamLimits

0x6fb7,	// (0x000317c7) title_pane_g2

0x0003,

0xf56a,	// (0x00039d7a) title_pane_g

0x7c41,	// (0x00032451) aid_size_cell_colour_1_pane_ParamLimits

0x7c41,	// (0x00032451) aid_size_cell_colour_1_pane

0x7c55,	// (0x00032465) aid_size_cell_colour_2_pane_ParamLimits

0x7c55,	// (0x00032465) aid_size_cell_colour_2_pane

0x7c69,	// (0x00032479) aid_size_cell_colour_3_pane_ParamLimits

0x7c69,	// (0x00032479) aid_size_cell_colour_3_pane

0x7c7d,	// (0x0003248d) aid_size_cell_colour_4_pane_ParamLimits

0x7c7d,	// (0x0003248d) aid_size_cell_colour_4_pane

0x5745,	// (0x0002ff55) title_pane_stacon_g1_ParamLimits

0x5745,	// (0x0002ff55) title_pane_stacon_g1

0xa186,	// (0x00034996) popup_note_wait_window_g3_ParamLimits

0xa186,	// (0x00034996) popup_note_wait_window_g3

0xa1fc,	// (0x00034a0c) popup_note_wait_window_t5_ParamLimits

0xa1fc,	// (0x00034a0c) popup_note_wait_window_t5

0x6fa0,	// (0x000317b0) main_feb_china_hwr_fs_writing_pane

0x907f,	// (0x0003388f) popup_feb_china_hwr_fs_window_ParamLimits

0x907f,	// (0x0003388f) popup_feb_china_hwr_fs_window

0x5eb1,	// (0x000306c1) aid_size_cell_hwr_fs_ParamLimits

0x5eb1,	// (0x000306c1) aid_size_cell_hwr_fs

0x9b83,	// (0x00034393) bg_popup_sub_pane_cp3_ParamLimits

0x9b83,	// (0x00034393) bg_popup_sub_pane_cp3

0x5ec6,	// (0x000306d6) grid_hwr_fs_pane_ParamLimits

0x5ec6,	// (0x000306d6) grid_hwr_fs_pane

0x5ede,	// (0x000306ee) linegrid_hwr_fs_pane_ParamLimits

0x5ede,	// (0x000306ee) linegrid_hwr_fs_pane

0x5eee,	// (0x000306fe) cell_hwr_fs_pane_ParamLimits

0x5eee,	// (0x000306fe) cell_hwr_fs_pane

0x9b8f,	// (0x0003439f) linegrid_hwr_fs_pane_g1_ParamLimits

0x9b8f,	// (0x0003439f) linegrid_hwr_fs_pane_g1

0x9b9b,	// (0x000343ab) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b9b,	// (0x000343ab) linegrid_hwr_fs_pane_g2

0x9bad,	// (0x000343bd) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bad,	// (0x000343bd) linegrid_hwr_fs_pane_g3

0x5f10,	// (0x00030720) linegrid_hwr_fs_pane_g4_ParamLimits

0x5f10,	// (0x00030720) linegrid_hwr_fs_pane_g4

0x5f2a,	// (0x0003073a) linegrid_hwr_fs_pane_g5_ParamLimits

0x5f2a,	// (0x0003073a) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0003a01d) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0003a01d) linegrid_hwr_fs_pane_g

0x9bb9,	// (0x000343c9) cell_hwr_fs_pane_g1_ParamLimits

0x9bb9,	// (0x000343c9) cell_hwr_fs_pane_g1

0x9908,	// (0x00034118) cell_hwr_fs_pane_g2_ParamLimits

0x9908,	// (0x00034118) cell_hwr_fs_pane_g2

0x9bcf,	// (0x000343df) cell_hwr_fs_pane_g3_ParamLimits

0x9bcf,	// (0x000343df) cell_hwr_fs_pane_g3

0x9bdc,	// (0x000343ec) cell_hwr_fs_pane_g4_ParamLimits

0x9bdc,	// (0x000343ec) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0003a028) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0003a028) cell_hwr_fs_pane_g

0x5f40,	// (0x00030750) cell_hwr_fs_pane_t1

0x6fa0,	// (0x000317b0) grid_highlight_pane_cp6

0x6fa0,	// (0x000317b0) main_idle_act2_pane

0x8193,	// (0x000329a3) aid_inside_area_popup_secondary

0xa833,	// (0x00035043) aid_inside_area_window_primary_ParamLimits

0xa833,	// (0x00035043) aid_inside_area_window_primary

0xb3ba,	// (0x00035bca) ai2_news_ticker_pane

0xb3c2,	// (0x00035bd2) aid_size_cell_ai1_link_ParamLimits

0xb3c2,	// (0x00035bd2) aid_size_cell_ai1_link

0xb3dc,	// (0x00035bec) popup_ai2_data_window_ParamLimits

0xb3dc,	// (0x00035bec) popup_ai2_data_window

0xb3f2,	// (0x00035c02) popup_ai2_link_window_ParamLimits

0xb3f2,	// (0x00035c02) popup_ai2_link_window

0x9b83,	// (0x00034393) bg_popup_sub_pane_cp4_ParamLimits

0x9b83,	// (0x00034393) bg_popup_sub_pane_cp4

0xb406,	// (0x00035c16) grid_ai2_link_pane_ParamLimits

0xb406,	// (0x00035c16) grid_ai2_link_pane

0xb41d,	// (0x00035c2d) popup_ai2_link_window_g1_ParamLimits

0xb41d,	// (0x00035c2d) popup_ai2_link_window_g1

0xb429,	// (0x00035c39) popup_ai2_link_window_g2_ParamLimits

0xb429,	// (0x00035c39) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0003a1f4) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0003a1f4) popup_ai2_link_window_g

0xb438,	// (0x00035c48) ai2_mp_button_pane

0xb440,	// (0x00035c50) ai2_mp_volume_pane

0x9d6e,	// (0x0003457e) bg_popup_sub_pane_cp5_ParamLimits

0x9d6e,	// (0x0003457e) bg_popup_sub_pane_cp5

0xb448,	// (0x00035c58) heading_ai2_gene_pane_ParamLimits

0xb448,	// (0x00035c58) heading_ai2_gene_pane

0xb454,	// (0x00035c64) list_ai2_gene_pane_ParamLimits

0xb454,	// (0x00035c64) list_ai2_gene_pane

0xb49c,	// (0x00035cac) cell_ai2_link_pane_ParamLimits

0xb49c,	// (0x00035cac) cell_ai2_link_pane

0xb4b2,	// (0x00035cc2) cell_ai2_link_pane_g1

0x6fa0,	// (0x000317b0) grid_highlight_pane_cp7

0x6241,	// (0x00030a51) ai2_mp_volume_pane_g1

0xb582,	// (0x00035d92) ai2_mp_volume_pane_g2

0xb4f7,	// (0x00035d07) list_ai2_gene_pane_t1

0xb58a,	// (0x00035d9a) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0003a20d) ai2_mp_volume_pane_g

0x6249,	// (0x00030a59) volume_small_pane_cp3

0xb592,	// (0x00035da2) aid_size_cell_ai2_button

0xb59a,	// (0x00035daa) grid_ai2_button_pane

0xb5a3,	// (0x00035db3) cell_ai2_button_pane_ParamLimits

0xb5a3,	// (0x00035db3) cell_ai2_button_pane

0x6f96,	// (0x000317a6) cell_ai2_button_pane_g1

0x6fa0,	// (0x000317b0) grid_highlight_pane_cp8

0xb542,	// (0x00035d52) ai2_gene_pane_t1_ParamLimits

0xb542,	// (0x00035d52) ai2_gene_pane_t1

0x8f9d,	// (0x000337ad) aid_height_parent_landscape

0xaed1,	// (0x000356e1) aid_height_set_list

0xaee2,	// (0x000356f2) aid_size_parent

0xb1e1,	// (0x000359f1) aid_size_cell_graphic_pane_ParamLimits

0xb464,	// (0x00035c74) popup_ai2_data_window_g1_ParamLimits

0xb464,	// (0x00035c74) popup_ai2_data_window_g1

0xb470,	// (0x00035c80) ai2_news_ticker_pane_g1

0xb478,	// (0x00035c88) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x0003a1f9) ai2_news_ticker_pane_g

0xb480,	// (0x00035c90) ai2_news_ticker_pane_t1

0xb48e,	// (0x00035c9e) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0003a1fe) ai2_news_ticker_pane_t

0xb4bb,	// (0x00035ccb) heading_ai2_gene_pane_g1

0xb4c3,	// (0x00035cd3) heading_ai2_gene_pane_t1_ParamLimits

0xb4c3,	// (0x00035cd3) heading_ai2_gene_pane_t1

0xb4d8,	// (0x00035ce8) list_highlight_pane_cp6

0xb4e0,	// (0x00035cf0) ai2_gene_pane_ParamLimits

0xb4e0,	// (0x00035cf0) ai2_gene_pane

0xb505,	// (0x00035d15) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0003a203) list_ai2_gene_pane_t

0xb513,	// (0x00035d23) list_highlight_pane_cp8_ParamLimits

0xb513,	// (0x00035d23) list_highlight_pane_cp8

0xb524,	// (0x00035d34) ai2_gene_pane_g1_ParamLimits

0xb524,	// (0x00035d34) ai2_gene_pane_g1

0xb536,	// (0x00035d46) ai2_gene_pane_g2_ParamLimits

0xb536,	// (0x00035d46) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x0003a208) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x0003a208) ai2_gene_pane_g

0x7fc8,	// (0x000327d8) scroll_pane_cp12

0x5d21,	// (0x00030531) control_pane_t3_ParamLimits

0x5d21,	// (0x00030531) control_pane_t3

0x8f1a,	// (0x0003372a) status_small_pane_g8_ParamLimits

0x8f1a,	// (0x0003372a) status_small_pane_g8

0x9165,	// (0x00033975) popup_find_window_ParamLimits

0x9378,	// (0x00033b88) popup_note_image_window_ParamLimits

0x5dbe,	// (0x000305ce) list_double2_graphic_pane_vc_g1_ParamLimits

0x5dbe,	// (0x000305ce) list_double2_graphic_pane_vc_g1

0x5dca,	// (0x000305da) list_double2_graphic_pane_vc_g2_ParamLimits

0x5dca,	// (0x000305da) list_double2_graphic_pane_vc_g2

0x5dd6,	// (0x000305e6) list_double2_graphic_pane_vc_g3_ParamLimits

0x5dd6,	// (0x000305e6) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x00039fe6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x00039fe6) list_double2_graphic_pane_vc_g

0x5de2,	// (0x000305f2) list_double2_graphic_pane_vc_t1_ParamLimits

0x5de2,	// (0x000305f2) list_double2_graphic_pane_vc_t1

0x5e4d,	// (0x0003065d) list_single_heading_pane_vc_g1_ParamLimits

0x5e4d,	// (0x0003065d) list_single_heading_pane_vc_g1

0x5e59,	// (0x00030669) list_single_heading_pane_vc_g2_ParamLimits

0x5e59,	// (0x00030669) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003a007) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003a007) list_single_heading_pane_vc_g

0x5e65,	// (0x00030675) list_single_heading_pane_vc_t1_ParamLimits

0x5e65,	// (0x00030675) list_single_heading_pane_vc_t1

0x5e7b,	// (0x0003068b) list_single_heading_pane_vc_t2_ParamLimits

0x5e7b,	// (0x0003068b) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0003a00c) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0003a00c) list_single_heading_pane_vc_t

0x9adb,	// (0x000342eb) list_setting_number_pane_vc_g1_ParamLimits

0x9adb,	// (0x000342eb) list_setting_number_pane_vc_g1

0x9ae7,	// (0x000342f7) list_setting_number_pane_vc_g2_ParamLimits

0x9ae7,	// (0x000342f7) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0003a011) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0003a011) list_setting_number_pane_vc_g

0x9af3,	// (0x00034303) list_setting_number_pane_vc_t1_ParamLimits

0x9af3,	// (0x00034303) list_setting_number_pane_vc_t1

0x9b07,	// (0x00034317) list_setting_number_pane_vc_t2_ParamLimits

0x9b07,	// (0x00034317) list_setting_number_pane_vc_t2

0x9b23,	// (0x00034333) list_setting_number_pane_vc_t3_ParamLimits

0x9b23,	// (0x00034333) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0003a016) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0003a016) list_setting_number_pane_vc_t

0x9b49,	// (0x00034359) set_value_pane_vc_ParamLimits

0x9b49,	// (0x00034359) set_value_pane_vc

0xb0b5,	// (0x000358c5) list_double2_graphic_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_double2_graphic_pane_vc

0xb0b5,	// (0x000358c5) list_double2_large_graphic_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_double2_large_graphic_pane_vc

0xb0b5,	// (0x000358c5) list_double2_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_double2_pane_vc

0xb0b5,	// (0x000358c5) list_double_graphic_heading_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_double_graphic_heading_pane_vc

0xb0b5,	// (0x000358c5) list_double_graphic_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_double_graphic_pane_vc

0xb0b5,	// (0x000358c5) list_double_heading_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_double_heading_pane_vc

0xb0b5,	// (0x000358c5) list_double_large_graphic_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_double_large_graphic_pane_vc

0xb0b5,	// (0x000358c5) list_double_number_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_double_number_pane_vc

0xb0b5,	// (0x000358c5) list_double_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_double_pane_vc

0xb0b5,	// (0x000358c5) list_double_time_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_double_time_pane_vc

0xb0b5,	// (0x000358c5) list_setting_number_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_setting_number_pane_vc

0xb0b5,	// (0x000358c5) list_setting_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_setting_pane_vc

0xb0b5,	// (0x000358c5) list_single_graphic_heading_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_single_graphic_heading_pane_vc

0xb0b5,	// (0x000358c5) list_single_heading_pane_vc_ParamLimits

0xb0b5,	// (0x000358c5) list_single_heading_pane_vc

0x727a,	// (0x00031a8a) list_single_number_heading_pane_vc_ParamLimits

0x727a,	// (0x00031a8a) list_single_number_heading_pane_vc

0x7316,	// (0x00031b26) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7316,	// (0x00031b26) list_double_graphic_heading_pane_vc_g1

0x5e4d,	// (0x0003065d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5e4d,	// (0x0003065d) list_double_graphic_heading_pane_vc_g2

0x5e59,	// (0x00030669) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5e59,	// (0x00030669) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x0003a214) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0003a214) list_double_graphic_heading_pane_vc_g

0x7322,	// (0x00031b32) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7322,	// (0x00031b32) list_double_graphic_heading_pane_vc_t1

0x5e65,	// (0x00030675) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5e65,	// (0x00030675) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x0003a21b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x0003a21b) list_double_graphic_heading_pane_vc_t

0x9adb,	// (0x000342eb) list_setting_pane_vc_g1_ParamLimits

0x9adb,	// (0x000342eb) list_setting_pane_vc_g1

0x9ae7,	// (0x000342f7) list_setting_pane_vc_g2_ParamLimits

0x9ae7,	// (0x000342f7) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0003a011) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0003a011) list_setting_pane_vc_g

0xb7db,	// (0x00035feb) list_setting_pane_vc_t1_ParamLimits

0xb7db,	// (0x00035feb) list_setting_pane_vc_t1

0xb7ef,	// (0x00035fff) list_setting_pane_vc_t2_ParamLimits

0xb7ef,	// (0x00035fff) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0003a249) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0003a249) list_setting_pane_vc_t

0x9b49,	// (0x00034359) set_value_pane_cp_vc_ParamLimits

0x9b49,	// (0x00034359) set_value_pane_cp_vc

0x5e4d,	// (0x0003065d) list_single_number_heading_pane_vc_g1_ParamLimits

0x5e4d,	// (0x0003065d) list_single_number_heading_pane_vc_g1

0x5e59,	// (0x00030669) list_single_number_heading_pane_vc_g2_ParamLimits

0x5e59,	// (0x00030669) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003a007) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003a007) list_single_number_heading_pane_vc_g

0x5e65,	// (0x00030675) list_single_number_heading_pane_vc_t1_ParamLimits

0x5e65,	// (0x00030675) list_single_number_heading_pane_vc_t1

0x7336,	// (0x00031b46) list_single_number_heading_pane_vc_t2_ParamLimits

0x7336,	// (0x00031b46) list_single_number_heading_pane_vc_t2

0x734a,	// (0x00031b5a) list_single_number_heading_pane_vc_t3_ParamLimits

0x734a,	// (0x00031b5a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0003a24e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003a24e) list_single_number_heading_pane_vc_t

0x5dbe,	// (0x000305ce) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5dbe,	// (0x000305ce) list_single_graphic_heading_pane_vc_g1

0x5e4d,	// (0x0003065d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5e4d,	// (0x0003065d) list_single_graphic_heading_pane_vc_g4

0x5e59,	// (0x00030669) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5e59,	// (0x00030669) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa45,	// (0x0003a255) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa45,	// (0x0003a255) list_single_graphic_heading_pane_vc_g

0x5e65,	// (0x00030675) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5e65,	// (0x00030675) list_single_graphic_heading_pane_vc_t1

0x735c,	// (0x00031b6c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x735c,	// (0x00031b6c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x0003a25c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003a25c) list_single_graphic_heading_pane_vc_t

0x5e4d,	// (0x0003065d) list_double2_pane_vc_g1_ParamLimits

0x5e4d,	// (0x0003065d) list_double2_pane_vc_g1

0x5e59,	// (0x00030669) list_double2_pane_vc_g2_ParamLimits

0x5e59,	// (0x00030669) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003a007) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003a007) list_double2_pane_vc_g

0x7370,	// (0x00031b80) list_double2_pane_vc_t1_ParamLimits

0x7370,	// (0x00031b80) list_double2_pane_vc_t1

0x7386,	// (0x00031b96) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7386,	// (0x00031b96) list_double2_large_graphic_pane_vc_g1

0x5e4d,	// (0x0003065d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5e4d,	// (0x0003065d) list_double2_large_graphic_pane_vc_g2

0x5e59,	// (0x00030669) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5e59,	// (0x00030669) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa51,	// (0x0003a261) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x0003a261) list_double2_large_graphic_pane_vc_g

0x7392,	// (0x00031ba2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7392,	// (0x00031ba2) list_double2_large_graphic_pane_vc_t1

0x73a8,	// (0x00031bb8) list_double_time_pane_vc_g1_ParamLimits

0x73a8,	// (0x00031bb8) list_double_time_pane_vc_g1

0x73b4,	// (0x00031bc4) list_double_time_pane_vc_g2_ParamLimits

0x73b4,	// (0x00031bc4) list_double_time_pane_vc_g2

0x0001,

0xfa58,	// (0x0003a268) list_double_time_pane_vc_g_ParamLimits

0xfa58,	// (0x0003a268) list_double_time_pane_vc_g

0x73c0,	// (0x00031bd0) list_double_time_pane_vc_t1_ParamLimits

0x73c0,	// (0x00031bd0) list_double_time_pane_vc_t1

0x73d9,	// (0x00031be9) list_double_time_pane_vc_t2_ParamLimits

0x73d9,	// (0x00031be9) list_double_time_pane_vc_t2

0x7414,	// (0x00031c24) list_double_time_pane_vc_t3_ParamLimits

0x7414,	// (0x00031c24) list_double_time_pane_vc_t3

0x742c,	// (0x00031c3c) list_double_time_pane_vc_t4_ParamLimits

0x742c,	// (0x00031c3c) list_double_time_pane_vc_t4

0x0003,

0xfa5d,	// (0x0003a26d) list_double_time_pane_vc_t_ParamLimits

0xfa5d,	// (0x0003a26d) list_double_time_pane_vc_t

0x5e4d,	// (0x0003065d) list_double_pane_vc_g1_ParamLimits

0x5e4d,	// (0x0003065d) list_double_pane_vc_g1

0x5e59,	// (0x00030669) list_double_pane_vc_g2_ParamLimits

0x5e59,	// (0x00030669) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003a007) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003a007) list_double_pane_vc_g

0x7440,	// (0x00031c50) list_double_pane_vc_t1_ParamLimits

0x7440,	// (0x00031c50) list_double_pane_vc_t1

0x7452,	// (0x00031c62) list_double_pane_vc_t2_ParamLimits

0x7452,	// (0x00031c62) list_double_pane_vc_t2

0x0001,

0xfa66,	// (0x0003a276) list_double_pane_vc_t_ParamLimits

0xfa66,	// (0x0003a276) list_double_pane_vc_t

0x5e4d,	// (0x0003065d) list_double_number_pane_vc_g1_ParamLimits

0x5e4d,	// (0x0003065d) list_double_number_pane_vc_g1

0x5e59,	// (0x00030669) list_double_number_pane_vc_g2_ParamLimits

0x5e59,	// (0x00030669) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003a007) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003a007) list_double_number_pane_vc_g

0x746a,	// (0x00031c7a) list_double_number_pane_vc_t1_ParamLimits

0x746a,	// (0x00031c7a) list_double_number_pane_vc_t1

0x747e,	// (0x00031c8e) list_double_number_pane_vc_t2_ParamLimits

0x747e,	// (0x00031c8e) list_double_number_pane_vc_t2

0x7452,	// (0x00031c62) list_double_number_pane_vc_t3_ParamLimits

0x7452,	// (0x00031c62) list_double_number_pane_vc_t3

0x0002,

0xfa6b,	// (0x0003a27b) list_double_number_pane_vc_t_ParamLimits

0xfa6b,	// (0x0003a27b) list_double_number_pane_vc_t

0x7490,	// (0x00031ca0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7490,	// (0x00031ca0) list_double_large_graphic_pane_vc_g1

0x749c,	// (0x00031cac) list_double_large_graphic_pane_vc_g2_ParamLimits

0x749c,	// (0x00031cac) list_double_large_graphic_pane_vc_g2

0x5e59,	// (0x00030669) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5e59,	// (0x00030669) list_double_large_graphic_pane_vc_g3

0x74ab,	// (0x00031cbb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x74ab,	// (0x00031cbb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa72,	// (0x0003a282) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa72,	// (0x0003a282) list_double_large_graphic_pane_vc_g

0x74b7,	// (0x00031cc7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x74b7,	// (0x00031cc7) list_double_large_graphic_pane_vc_t1

0x74c9,	// (0x00031cd9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x74c9,	// (0x00031cd9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7b,	// (0x0003a28b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7b,	// (0x0003a28b) list_double_large_graphic_pane_vc_t

0x5e4d,	// (0x0003065d) list_double_heading_pane_vc_g1_ParamLimits

0x5e4d,	// (0x0003065d) list_double_heading_pane_vc_g1

0x5e59,	// (0x00030669) list_double_heading_pane_vc_g2_ParamLimits

0x5e59,	// (0x00030669) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003a007) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003a007) list_double_heading_pane_vc_g

0x74e2,	// (0x00031cf2) list_double_heading_pane_vc_t1_ParamLimits

0x74e2,	// (0x00031cf2) list_double_heading_pane_vc_t1

0x5e65,	// (0x00030675) list_double_heading_pane_vc_t2_ParamLimits

0x5e65,	// (0x00030675) list_double_heading_pane_vc_t2

0x0001,

0xfa80,	// (0x0003a290) list_double_heading_pane_vc_t_ParamLimits

0xfa80,	// (0x0003a290) list_double_heading_pane_vc_t

0x74f6,	// (0x00031d06) list_double_graphic_pane_vc_g1_ParamLimits

0x74f6,	// (0x00031d06) list_double_graphic_pane_vc_g1

0x7506,	// (0x00031d16) list_double_graphic_pane_vc_g2_ParamLimits

0x7506,	// (0x00031d16) list_double_graphic_pane_vc_g2

0x7515,	// (0x00031d25) list_double_graphic_pane_vc_g3_ParamLimits

0x7515,	// (0x00031d25) list_double_graphic_pane_vc_g3

0x0002,

0xfa85,	// (0x0003a295) list_double_graphic_pane_vc_g_ParamLimits

0xfa85,	// (0x0003a295) list_double_graphic_pane_vc_g

0x7521,	// (0x00031d31) list_double_graphic_pane_vc_t1_ParamLimits

0x7521,	// (0x00031d31) list_double_graphic_pane_vc_t1

0x7452,	// (0x00031c62) list_double_graphic_pane_vc_t2_ParamLimits

0x7452,	// (0x00031c62) list_double_graphic_pane_vc_t2

0x0001,

0xfa8c,	// (0x0003a29c) list_double_graphic_pane_vc_t_ParamLimits

0xfa8c,	// (0x0003a29c) list_double_graphic_pane_vc_t

0x4b60,	// (0x0002f370) aid_size_cell_fastswap

0x4b68,	// (0x0002f378) aid_size_cell_touch_ParamLimits

0x4b68,	// (0x0002f378) aid_size_cell_touch

0x4dcd,	// (0x0002f5dd) popup_fast_swap_wide_window_ParamLimits

0x4dcd,	// (0x0002f5dd) popup_fast_swap_wide_window

0x4ed7,	// (0x0002f6e7) touch_pane_ParamLimits

0x4ed7,	// (0x0002f6e7) touch_pane

0x801e,	// (0x0003282e) button_value_adjust_pane_cp2

0x54b7,	// (0x0002fcc7) button_value_adjust_pane_cp4

0x54d7,	// (0x0002fce7) form_field_data_pane_cp2

0x54f6,	// (0x0002fd06) form_field_data_wide_pane_cp2

0x84ab,	// (0x00032cbb) bg_scroll_pane_ParamLimits

0x58a8,	// (0x000300b8) scroll_handle_pane_ParamLimits

0x58bc,	// (0x000300cc) scroll_sc2_down_pane_ParamLimits

0x58bc,	// (0x000300cc) scroll_sc2_down_pane

0x84dc,	// (0x00032cec) scroll_sc2_up_pane_ParamLimits

0x84dc,	// (0x00032cec) scroll_sc2_up_pane

0xbc44,	// (0x00036454) grid_wheel_folder_pane_g1_ParamLimits

0xbc44,	// (0x00036454) grid_wheel_folder_pane_g1

0x5b0b,	// (0x0003031b) clock_nsta_pane_cp2_ParamLimits

0x5b0b,	// (0x0003031b) clock_nsta_pane_cp2

0x8c9f,	// (0x000334af) listscroll_midp_pane_ParamLimits

0x8cab,	// (0x000334bb) midp_canvas_pane

0x8f95,	// (0x000337a5) nsta_clock_indic_pane

0x8fe3,	// (0x000337f3) listscroll_form_pane_vc

0x8feb,	// (0x000337fb) listscroll_set_pane_vc_ParamLimits

0x8feb,	// (0x000337fb) listscroll_set_pane_vc

0x9683,	// (0x00033e93) clock_nsta_pane

0x96f8,	// (0x00033f08) indicator_nsta_pane

0x99d1,	// (0x000341e1) bg_popup_sub_pane_cp2_ParamLimits

0x99e5,	// (0x000341f5) find_pane_cp2_ParamLimits

0x99e5,	// (0x000341f5) find_pane_cp2

0x99fb,	// (0x0003420b) grid_toobar_pane_ParamLimits

0x9b57,	// (0x00034367) list_form_gen_pane_vc_ParamLimits

0x9b57,	// (0x00034367) list_form_gen_pane_vc

0x9b6d,	// (0x0003437d) scroll_pane_cp8_vc_ParamLimits

0x9b6d,	// (0x0003437d) scroll_pane_cp8_vc

0x9be9,	// (0x000343f9) data_form_wide_pane_vc_ParamLimits

0x9be9,	// (0x000343f9) data_form_wide_pane_vc

0x9bf5,	// (0x00034405) form_field_data_wide_pane_vc_g1

0x9bfd,	// (0x0003440d) form_field_data_wide_pane_vc_t1_ParamLimits

0x9bfd,	// (0x0003440d) form_field_data_wide_pane_vc_t1

0x8032,	// (0x00032842) input_focus_pane_cp6_vc_ParamLimits

0x8032,	// (0x00032842) input_focus_pane_cp6_vc

0x9f01,	// (0x00034711) list_midp_pane_ParamLimits

0x9f0d,	// (0x0003471d) scroll_pane_cp16_ParamLimits

0x9f0d,	// (0x0003471d) scroll_pane_cp16

0x9f5b,	// (0x0003476b) button_value_adjust_pane_ParamLimits

0x9f5b,	// (0x0003476b) button_value_adjust_pane

0xaef4,	// (0x00035704) button_value_adjust_pane_cp6_ParamLimits

0xaef4,	// (0x00035704) button_value_adjust_pane_cp6

0xb01e,	// (0x0003582e) settings_code_pane_cp_ParamLimits

0xb01e,	// (0x0003582e) settings_code_pane_cp

0x6f96,	// (0x000317a6) cell_touch_pane_g1

0x6f96,	// (0x000317a6) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x00039f2f) cell_touch_pane_g

0xb5b5,	// (0x00035dc5) cell_touch_pane_cp_ParamLimits

0xb5b5,	// (0x00035dc5) cell_touch_pane_cp

0xb5c5,	// (0x00035dd5) cell_touch_pane_ParamLimits

0xb5c5,	// (0x00035dd5) cell_touch_pane

0x6f96,	// (0x000317a6) scroll_sc2_down_pane_g1

0x6f96,	// (0x000317a6) scroll_sc2_up_pane_g1

0x6fa0,	// (0x000317b0) bg_set_opt_pane_cp4_vc

0xb5d7,	// (0x00035de7) list_set_graphic_pane_vc_g1_ParamLimits

0xb5d7,	// (0x00035de7) list_set_graphic_pane_vc_g1

0xb5e3,	// (0x00035df3) list_set_graphic_pane_vc_g2_ParamLimits

0xb5e3,	// (0x00035df3) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x0003a220) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x0003a220) list_set_graphic_pane_vc_g

0xb5ef,	// (0x00035dff) text_primary_small_cp13_vc_ParamLimits

0xb5ef,	// (0x00035dff) text_primary_small_cp13_vc

0xb607,	// (0x00035e17) list_set_graphic_pane_vc_ParamLimits

0xb607,	// (0x00035e17) list_set_graphic_pane_vc

0x6fa0,	// (0x000317b0) input_focus_pane_cp2_vc

0x6f96,	// (0x000317a6) setting_code_pane_vc_g1

0xb61b,	// (0x00035e2b) setting_code_pane_vc_t1

0xb629,	// (0x00035e39) set_text_pane_vc_t1_ParamLimits

0xb629,	// (0x00035e39) set_text_pane_vc_t1

0x6fa0,	// (0x000317b0) input_focus_pane_cp1_vc

0xb644,	// (0x00035e54) list_set_text_pane_vc

0x6f96,	// (0x000317a6) setting_text_pane_vc_g1

0x6fa0,	// (0x000317b0) bg_set_opt_pane_cp2_vc

0xb64e,	// (0x00035e5e) setting_slider_graphic_pane_vc_g1

0xb656,	// (0x00035e66) setting_slider_graphic_pane_vc_t1

0xb664,	// (0x00035e74) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0003a225) setting_slider_graphic_pane_vc_t

0xb672,	// (0x00035e82) slider_set_pane_cp_vc

0xb67a,	// (0x00035e8a) slider_set_pane_vc_g1

0xb683,	// (0x00035e93) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x0003a22a) slider_set_pane_vc_g

0x8099,	// (0x000328a9) set_opt_bg_pane_g1_copy1

0x80a1,	// (0x000328b1) set_opt_bg_pane_g2_copy1

0xb6af,	// (0x00035ebf) set_opt_bg_pane_g3_copy1

0x80b1,	// (0x000328c1) set_opt_bg_pane_g4_copy1

0x80b9,	// (0x000328c9) set_opt_bg_pane_g5_copy1

0x80c1,	// (0x000328d1) set_opt_bg_pane_g6_copy1

0xb6b9,	// (0x00035ec9) set_opt_bg_pane_g7_copy1

0xb6c1,	// (0x00035ed1) set_opt_bg_pane_g8_copy1

0xb6cb,	// (0x00035edb) set_opt_bg_pane_g9_copy1

0x6fa0,	// (0x000317b0) bg_set_opt_pane_cp_vc

0xb6d5,	// (0x00035ee5) setting_slider_pane_vc_t1

0xb656,	// (0x00035e66) setting_slider_pane_vc_t2

0xb664,	// (0x00035e74) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x0003a239) setting_slider_pane_vc_t

0xb672,	// (0x00035e82) slider_set_pane_vc

0x5f5d,	// (0x0003076d) volume_set_pane_vc_g1

0x5f66,	// (0x00030776) volume_set_pane_vc_g2

0x5f6f,	// (0x0003077f) volume_set_pane_vc_g3

0x5f78,	// (0x00030788) volume_set_pane_vc_g4

0x5f81,	// (0x00030791) volume_set_pane_vc_g5

0x5f8a,	// (0x0003079a) volume_set_pane_vc_g6

0x5f93,	// (0x000307a3) volume_set_pane_vc_g7

0x5f9c,	// (0x000307ac) volume_set_pane_vc_g8

0x5fa5,	// (0x000307b5) volume_set_pane_vc_g9

0x5fae,	// (0x000307be) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x0003a0d7) volume_set_pane_vc_g

0xb6e4,	// (0x00035ef4) volume_set_pane_vc

0xb6ec,	// (0x00035efc) button_value_adjust_pane_cp1_vc

0xb6f6,	// (0x00035f06) list_highlight_pane_cp2_vc

0xb6ff,	// (0x00035f0f) list_set_pane_vc_ParamLimits

0xb6ff,	// (0x00035f0f) list_set_pane_vc

0xb769,	// (0x00035f79) main_pane_set_vc_t1_ParamLimits

0xb769,	// (0x00035f79) main_pane_set_vc_t1

0xb77e,	// (0x00035f8e) main_pane_set_vc_t2_ParamLimits

0xb77e,	// (0x00035f8e) main_pane_set_vc_t2

0xb790,	// (0x00035fa0) main_pane_set_vc_t3_ParamLimits

0xb790,	// (0x00035fa0) main_pane_set_vc_t3

0xb7a4,	// (0x00035fb4) main_pane_set_vc_t4_ParamLimits

0xb7a4,	// (0x00035fb4) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0003a240) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0003a240) main_pane_set_vc_t

0xb7b8,	// (0x00035fc8) setting_code_pane_vc_ParamLimits

0xb7b8,	// (0x00035fc8) setting_code_pane_vc

0xb7c9,	// (0x00035fd9) setting_slider_graphic_pane_vc

0xb7c9,	// (0x00035fd9) setting_slider_pane_vc

0xb7c9,	// (0x00035fd9) setting_text_pane_vc

0xb7c9,	// (0x00035fd9) setting_volume_pane_vc

0xb7d3,	// (0x00035fe3) scroll_pane_cp121_vc

0x800c,	// (0x0003281c) set_content_pane_vc

0xb811,	// (0x00036021) button_value_adjust_pane_g1

0xb81a,	// (0x0003602a) button_value_adjust_pane_g2

0x0001,

0xfa91,	// (0x0003a2a1) button_value_adjust_pane_g

0xb823,	// (0x00036033) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb823,	// (0x00036033) form_field_slider_wide_pane_vc_t1

0xb837,	// (0x00036047) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb837,	// (0x00036047) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa96,	// (0x0003a2a6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x0003a2a6) form_field_slider_wide_pane_vc_t

0x7a41,	// (0x00032251) input_focus_pane_cp10_vc_ParamLimits

0x7a41,	// (0x00032251) input_focus_pane_cp10_vc

0xb849,	// (0x00036059) slider_cont_pane_cp1_vc_ParamLimits

0xb849,	// (0x00036059) slider_cont_pane_cp1_vc

0xb67a,	// (0x00035e8a) slider_form_pane_g1_cp2

0xb683,	// (0x00035e93) slider_form_pane_g2_cp2

0xb862,	// (0x00036072) form_field_slider_pane_vc_t3

0xb870,	// (0x00036080) form_field_slider_pane_vc_t4

0xb87e,	// (0x0003608e) slider_form_pane_vc_ParamLimits

0xb87e,	// (0x0003608e) slider_form_pane_vc

0xb88b,	// (0x0003609b) form_field_slider_pane_vc_t1_ParamLimits

0xb88b,	// (0x0003609b) form_field_slider_pane_vc_t1

0xb837,	// (0x00036047) form_field_slider_pane_vc_t2_ParamLimits

0xb837,	// (0x00036047) form_field_slider_pane_vc_t2

0x0001,

0xfaa6,	// (0x0003a2b6) form_field_slider_pane_vc_t_ParamLimits

0xfaa6,	// (0x0003a2b6) form_field_slider_pane_vc_t

0x7a41,	// (0x00032251) input_focus_pane_cp9_vc_ParamLimits

0x7a41,	// (0x00032251) input_focus_pane_cp9_vc

0xb8a7,	// (0x000360b7) slider_cont_pane_vc_ParamLimits

0xb8a7,	// (0x000360b7) slider_cont_pane_vc

0xb8b9,	// (0x000360c9) list_form_graphic_pane_cp_vc_ParamLimits

0xb8b9,	// (0x000360c9) list_form_graphic_pane_cp_vc

0x9bf5,	// (0x00034405) form_field_popup_wide_pane_vc_g1

0xb8ce,	// (0x000360de) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb8ce,	// (0x000360de) form_field_popup_wide_pane_vc_t1

0x8032,	// (0x00032842) input_focus_pane_cp8_vc_ParamLimits

0x8032,	// (0x00032842) input_focus_pane_cp8_vc

0xb8e5,	// (0x000360f5) list_form_wide_pane_vc_ParamLimits

0xb8e5,	// (0x000360f5) list_form_wide_pane_vc

0xb8f1,	// (0x00036101) list_form_graphic_pane_vc_g1

0xb8f9,	// (0x00036109) list_form_graphic_pane_vc_t1_ParamLimits

0xb8f9,	// (0x00036109) list_form_graphic_pane_vc_t1

0x7080,	// (0x00031890) list_highlight_pane_cp5_vc_ParamLimits

0x7080,	// (0x00031890) list_highlight_pane_cp5_vc

0xb915,	// (0x00036125) list_form_graphic_pane_vc_ParamLimits

0xb915,	// (0x00036125) list_form_graphic_pane_vc

0x9bf5,	// (0x00034405) form_field_popup_pane_vc_g1

0xb92b,	// (0x0003613b) form_field_popup_pane_vc_t1_ParamLimits

0xb92b,	// (0x0003613b) form_field_popup_pane_vc_t1

0x8032,	// (0x00032842) input_focus_pane_cp7_vc_ParamLimits

0x8032,	// (0x00032842) input_focus_pane_cp7_vc

0xb942,	// (0x00036152) list_form_pane_vc_ParamLimits

0xb942,	// (0x00036152) list_form_pane_vc

0xb94e,	// (0x0003615e) data_form_pane_vc_t1_ParamLimits

0xb94e,	// (0x0003615e) data_form_pane_vc_t1

0x8099,	// (0x000328a9) input_focus_pane_vc_g1

0x80a1,	// (0x000328b1) input_focus_pane_vc_g2

0x80a9,	// (0x000328b9) input_focus_pane_vc_g3

0x80b1,	// (0x000328c1) input_focus_pane_vc_g4

0x80b9,	// (0x000328c9) input_focus_pane_vc_g5

0x80c1,	// (0x000328d1) input_focus_pane_vc_g6

0x80c9,	// (0x000328d9) input_focus_pane_vc_g7

0x80d1,	// (0x000328e1) input_focus_pane_vc_g8

0x80d9,	// (0x000328e9) input_focus_pane_vc_g9

0x6f96,	// (0x000317a6) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x00039eb8) input_focus_pane_vc_g

0x9be9,	// (0x000343f9) data_form_pane_vc_ParamLimits

0x9be9,	// (0x000343f9) data_form_pane_vc

0x9bf5,	// (0x00034405) form_field_data_pane_vc_g1

0xb969,	// (0x00036179) form_field_data_pane_vc_t1_ParamLimits

0xb969,	// (0x00036179) form_field_data_pane_vc_t1

0x8032,	// (0x00032842) input_focus_pane_vc_ParamLimits

0x8032,	// (0x00032842) input_focus_pane_vc

0xb983,	// (0x00036193) button_value_adjust_pane_cp3_vc

0xb98b,	// (0x0003619b) button_value_adjust_pane_cp5_vc

0xb993,	// (0x000361a3) form_field_data_pane_vc_ParamLimits

0xb993,	// (0x000361a3) form_field_data_pane_vc

0xb9aa,	// (0x000361ba) form_field_data_pane_vc_cp2

0xb9b2,	// (0x000361c2) form_field_data_wide_pane_vc_ParamLimits

0xb9b2,	// (0x000361c2) form_field_data_wide_pane_vc

0xb9c8,	// (0x000361d8) form_field_data_wide_pane_vc_cp2

0xb9d0,	// (0x000361e0) form_field_popup_pane_vc_ParamLimits

0xb9d0,	// (0x000361e0) form_field_popup_pane_vc

0xb9e7,	// (0x000361f7) form_field_popup_wide_pane_vc_ParamLimits

0xb9e7,	// (0x000361f7) form_field_popup_wide_pane_vc

0xb9fd,	// (0x0003620d) form_field_slider_pane_vc_ParamLimits

0xb9fd,	// (0x0003620d) form_field_slider_pane_vc

0xba10,	// (0x00036220) form_field_slider_wide_pane_vc_ParamLimits

0xba10,	// (0x00036220) form_field_slider_wide_pane_vc

0xba23,	// (0x00036233) grid_touch_1_pane_ParamLimits

0xba23,	// (0x00036233) grid_touch_1_pane

0xba2f,	// (0x0003623f) grid_touch_2_pane_ParamLimits

0xba2f,	// (0x0003623f) grid_touch_2_pane

0x8f60,	// (0x00033770) touch_pane_g1_ParamLimits

0x8f60,	// (0x00033770) touch_pane_g1

0xba47,	// (0x00036257) cell_app_pane_cp_wide_ParamLimits

0xba47,	// (0x00036257) cell_app_pane_cp_wide

0xba58,	// (0x00036268) grid_popup_fast_wide_pane_ParamLimits

0xba58,	// (0x00036268) grid_popup_fast_wide_pane

0xba6c,	// (0x0003627c) scroll_pane_cp19_ParamLimits

0xba6c,	// (0x0003627c) scroll_pane_cp19

0x6fa0,	// (0x000317b0) bg_popup_window_pane_cp20

0xba80,	// (0x00036290) listscroll_popup_fast_wide_pane

0x7080,	// (0x00031890) grid_indicator_nsta_pane

0xba88,	// (0x00036298) clock_nsta_pane_g1

0xba91,	// (0x000362a1) clock_nsta_pane_t1

0xbaad,	// (0x000362bd) cell_indicator_nsta_pane_ParamLimits

0xbaad,	// (0x000362bd) cell_indicator_nsta_pane

0xbae5,	// (0x000362f5) cell_indicator_nsta_pane_g1

0xbaf3,	// (0x00036303) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0003a2c0) cell_indicator_nsta_pane_g

0xbb09,	// (0x00036319) clock_nsta_pane_cp

0xbb11,	// (0x00036321) indicator_nsta_pane_cp

0xbb1a,	// (0x0003632a) nsta_clock_indic_pane_g1

0x7149,	// (0x00031959) grid_indicator_pane

0x85d1,	// (0x00032de1) scroll_pane_cp29

0x5a5a,	// (0x0003026a) indicator_nsta_pane_cp2_ParamLimits

0x5a5a,	// (0x0003026a) indicator_nsta_pane_cp2

0x7080,	// (0x00031890) main_apps_wheel_pane

0x9de2,	// (0x000345f2) form_midp_field_text_pane_ParamLimits

0x9f2d,	// (0x0003473d) scroll_bar_cp050_ParamLimits

0xbb83,	// (0x00036393) cell_indicator_pane_ParamLimits

0xbb83,	// (0x00036393) cell_indicator_pane

0xbb9a,	// (0x000363aa) cell_indicator_pane_g1

0xbba4,	// (0x000363b4) grid_wheel_folder_pane_ParamLimits

0xbba4,	// (0x000363b4) grid_wheel_folder_pane

0xbbb8,	// (0x000363c8) list_wheel_apps_pane_ParamLimits

0xbbb8,	// (0x000363c8) list_wheel_apps_pane

0xbbc9,	// (0x000363d9) main_apps_wheel_pane_g1_ParamLimits

0xbbc9,	// (0x000363d9) main_apps_wheel_pane_g1

0xbbdd,	// (0x000363ed) main_apps_wheel_pane_g2_ParamLimits

0xbbdd,	// (0x000363ed) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0003a2dc) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0003a2dc) main_apps_wheel_pane_g

0xbbf5,	// (0x00036405) main_apps_wheel_pane_t1_ParamLimits

0xbbf5,	// (0x00036405) main_apps_wheel_pane_t1

0xbc18,	// (0x00036428) list_wheel_apps_pane_g1

0xbc20,	// (0x00036430) list_wheel_apps_pane_g2

0xbc28,	// (0x00036438) list_wheel_apps_pane_g3

0xbc30,	// (0x00036440) list_wheel_apps_pane_g4

0xbc3a,	// (0x0003644a) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0003a2e1) list_wheel_apps_pane_g

0x8af5,	// (0x00033305) navi_icon_text_pane

0x95b6,	// (0x00033dc6) aid_fill_nsta

0xbc5d,	// (0x0003646d) navi_icon_text_pane_g1

0xbc6c,	// (0x0003647c) navi_icon_text_pane_t1

0x8993,	// (0x000331a3) list_set_graphic_pane_t1_ParamLimits

0x8993,	// (0x000331a3) list_set_graphic_pane_t1

0xa67c,	// (0x00034e8c) popup_midp_note_alarm_window_t6_ParamLimits

0xa67c,	// (0x00034e8c) popup_midp_note_alarm_window_t6

0xa68e,	// (0x00034e9e) popup_midp_note_alarm_window_t7_ParamLimits

0xa68e,	// (0x00034e9e) popup_midp_note_alarm_window_t7

0xa6a0,	// (0x00034eb0) popup_midp_note_alarm_window_t8_ParamLimits

0xa6a0,	// (0x00034eb0) popup_midp_note_alarm_window_t8

0xa6b2,	// (0x00034ec2) popup_midp_note_alarm_window_t9_ParamLimits

0xa6b2,	// (0x00034ec2) popup_midp_note_alarm_window_t9

0xa6c4,	// (0x00034ed4) popup_midp_note_alarm_window_t10_ParamLimits

0xa6c4,	// (0x00034ed4) popup_midp_note_alarm_window_t10

0xa6d6,	// (0x00034ee6) popup_midp_note_alarm_window_t11_ParamLimits

0xa6d6,	// (0x00034ee6) popup_midp_note_alarm_window_t11

0xa6e8,	// (0x00034ef8) scroll_pane_cp17_ParamLimits

0xa6e8,	// (0x00034ef8) scroll_pane_cp17

0x5f5d,	// (0x0003076d) volume_small_pane_cp_g1

0x6252,	// (0x00030a62) volume_small_pane_cp_g2

0x625b,	// (0x00030a6b) volume_small_pane_cp_g3

0x6264,	// (0x00030a74) volume_small_pane_cp_g4

0x626d,	// (0x00030a7d) volume_small_pane_cp_g5

0x6276,	// (0x00030a86) volume_small_pane_cp_g6

0x627f,	// (0x00030a8f) volume_small_pane_cp_g7

0x6288,	// (0x00030a98) volume_small_pane_cp_g8

0x6291,	// (0x00030aa1) volume_small_pane_cp_g9

0x629a,	// (0x00030aaa) volume_small_pane_cp_g10

0x8d72,	// (0x00033582) midp_ticker_pane_g1_ParamLimits

0x8d7e,	// (0x0003358e) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x00039f80) midp_ticker_pane_g_ParamLimits

0x8d8a,	// (0x0003359a) midp_ticker_pane_t1_ParamLimits

0x95cc,	// (0x00033ddc) aid_fill_nsta_2

0x9f19,	// (0x00034729) list_form2_midp_pane

0xb069,	// (0x00035879) midp_editing_number_pane_ParamLimits

0xb078,	// (0x00035888) midp_ticker_pane_ParamLimits

0xbc81,	// (0x00036491) form2_midp_field_pane

0xbca5,	// (0x000364b5) scroll_pane_cp51

0xbcc5,	// (0x000364d5) form2_midp_button_pane_ParamLimits

0xbcc5,	// (0x000364d5) form2_midp_button_pane

0xbcd7,	// (0x000364e7) form2_midp_content_pane_ParamLimits

0xbcd7,	// (0x000364e7) form2_midp_content_pane

0xbcf1,	// (0x00036501) form2_midp_field_choice_group_pane

0xbcf9,	// (0x00036509) form2_midp_field_pane_g1

0xbd01,	// (0x00036511) form2_midp_field_pane_g2

0xbd09,	// (0x00036519) form2_midp_field_pane_g3

0xbd11,	// (0x00036521) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0003a306) form2_midp_field_pane_g

0xbd19,	// (0x00036529) form2_midp_gauge_slider_pane

0xbd21,	// (0x00036531) form2_midp_gauge_wait_pane

0xbd29,	// (0x00036539) form2_midp_image_pane_ParamLimits

0xbd29,	// (0x00036539) form2_midp_image_pane

0xbd44,	// (0x00036554) form2_midp_label_pane_ParamLimits

0xbd44,	// (0x00036554) form2_midp_label_pane

0xbd5d,	// (0x0003656d) form2_midp_label_pane_cp_ParamLimits

0xbd5d,	// (0x0003656d) form2_midp_label_pane_cp

0xbd7e,	// (0x0003658e) form2_midp_string_pane_ParamLimits

0xbd7e,	// (0x0003658e) form2_midp_string_pane

0x7533,	// (0x00031d43) form2_midp_text_pane_ParamLimits

0x7533,	// (0x00031d43) form2_midp_text_pane

0xbd90,	// (0x000365a0) form2_midp_time_pane

0xbda0,	// (0x000365b0) input_focus_pane_cp51_ParamLimits

0xbda0,	// (0x000365b0) input_focus_pane_cp51

0xbdb8,	// (0x000365c8) form2_midp_label_pane_t1_ParamLimits

0xbdb8,	// (0x000365c8) form2_midp_label_pane_t1

0x754e,	// (0x00031d5e) form2_mdip_text_pane_t1_ParamLimits

0x754e,	// (0x00031d5e) form2_mdip_text_pane_t1

0x756c,	// (0x00031d7c) form2_midp_time_pane_t1

0xbe01,	// (0x00036611) form2_midp_gauge_slider_pane_t1

0xbe13,	// (0x00036623) form2_midp_gauge_slider_pane_t2

0xbe25,	// (0x00036635) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0003a30f) form2_midp_gauge_slider_pane_t

0xbe37,	// (0x00036647) form2_midp_slider_pane

0xbe43,	// (0x00036653) form2_midp_gauge_wait_pane_t1

0xbe51,	// (0x00036661) form2_midp_wait_pane_ParamLimits

0xbe51,	// (0x00036661) form2_midp_wait_pane

0x9c14,	// (0x00034424) list_single_2graphic_pane_cp4_ParamLimits

0x9c14,	// (0x00034424) list_single_2graphic_pane_cp4

0xbe7c,	// (0x0003668c) list_single_midp_graphic_pane_cp_ParamLimits

0xbe7c,	// (0x0003668c) list_single_midp_graphic_pane_cp

0x6fa0,	// (0x000317b0) list_highlight_pane_cp20

0xbeab,	// (0x000366bb) list_single_2graphic_pane_g1_cp4

0xbeb3,	// (0x000366c3) list_single_2graphic_pane_g2_cp4

0xbebb,	// (0x000366cb) list_single_2graphic_pane_t1_cp4

0x7080,	// (0x00031890) list_highlight_pane_cp21

0xbeca,	// (0x000366da) list_single_midp_graphic_pane_g4_cp

0xbed9,	// (0x000366e9) list_single_midp_graphic_pane_t1_cp

0xbeee,	// (0x000366fe) form2_mdip_string_pane_t1_ParamLimits

0xbeee,	// (0x000366fe) form2_mdip_string_pane_t1

0x6fa0,	// (0x000317b0) bg_wml_button_pane_cp2

0x6f96,	// (0x000317a6) form2_midp_image_pane_g1

0x528a,	// (0x0002fa9a) list_double_large_graphic_pane_g5_ParamLimits

0x528a,	// (0x0002fa9a) list_double_large_graphic_pane_g5

0x8c9f,	// (0x000334af) midp_form_pane_ParamLimits

0x7080,	// (0x00031890) main_apps_wheel_pane_ParamLimits

0x939e,	// (0x00033bae) popup_preview_window_ParamLimits

0x939e,	// (0x00033bae) popup_preview_window

0x9559,	// (0x00033d69) popup_touch_info_window_ParamLimits

0x9559,	// (0x00033d69) popup_touch_info_window

0x9577,	// (0x00033d87) popup_touch_menu_window_ParamLimits

0x9577,	// (0x00033d87) popup_touch_menu_window

0x6f8c,	// (0x0003179c) bg_popup_sub_pane_cp6

0xbfe7,	// (0x000367f7) list_touch_menu_pane

0xbfef,	// (0x000367ff) list_single_touch_menu_pane_ParamLimits

0xbfef,	// (0x000367ff) list_single_touch_menu_pane

0xc006,	// (0x00036816) list_single_touch_menu_pane_t1

0x7080,	// (0x00031890) bg_popup_sub_pane_cp7_ParamLimits

0x7080,	// (0x00031890) bg_popup_sub_pane_cp7

0xc014,	// (0x00036824) heading_sub_pane

0xc01c,	// (0x0003682c) list_touch_info_pane_ParamLimits

0xc01c,	// (0x0003682c) list_touch_info_pane

0xc02b,	// (0x0003683b) list_single_touch_info_pane_ParamLimits

0xc02b,	// (0x0003683b) list_single_touch_info_pane

0xc03d,	// (0x0003684d) list_single_touch_info_pane_t1

0xc04b,	// (0x0003685b) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0003a31d) list_single_touch_info_pane_t

0x8c97,	// (0x000334a7) bg_popup_heading_pane_cp

0xc059,	// (0x00036869) heading_sub_pane_t1

0x9b83,	// (0x00034393) bg_popup_preview_window_pane_cp_ParamLimits

0x9b83,	// (0x00034393) bg_popup_preview_window_pane_cp

0xc014,	// (0x00036824) heading_preview_pane

0xc01c,	// (0x0003682c) list_preview_pane_ParamLimits

0xc01c,	// (0x0003682c) list_preview_pane

0xc067,	// (0x00036877) popup_preview_window_g1

0xc02b,	// (0x0003683b) list_single_preview_pane_ParamLimits

0xc02b,	// (0x0003683b) list_single_preview_pane

0xc06f,	// (0x0003687f) list_single_preview_pane_g1

0xc077,	// (0x00036887) list_single_preview_pane_t1

0xc03d,	// (0x0003684d) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0003a322) list_single_preview_pane_t

0xc085,	// (0x00036895) bg_popup_heading_pane_cp2_ParamLimits

0xc085,	// (0x00036895) bg_popup_heading_pane_cp2

0xc09b,	// (0x000368ab) heading_preview_pane_g1

0xc0a3,	// (0x000368b3) heading_preview_pane_t1_ParamLimits

0xc0a3,	// (0x000368b3) heading_preview_pane_t1

0x716c,	// (0x0003197c) soft_indicator_pane_t1_ParamLimits

0x7fa5,	// (0x000327b5) scroll_pane_ParamLimits

0x84ca,	// (0x00032cda) scroll_sc2_left_pane

0x84d3,	// (0x00032ce3) scroll_sc2_right_pane

0x84f2,	// (0x00032d02) scroll_bg_pane_g1_ParamLimits

0x8507,	// (0x00032d17) scroll_bg_pane_g2_ParamLimits

0x851f,	// (0x00032d2f) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x00039f0f) scroll_bg_pane_g_ParamLimits

0x84f2,	// (0x00032d02) scroll_handle_pane_g1_ParamLimits

0x8541,	// (0x00032d51) scroll_handle_pane_g2_ParamLimits

0x851f,	// (0x00032d2f) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x00039f16) scroll_handle_pane_g_ParamLimits

0x9025,	// (0x00033835) popup_choice_list_window_ParamLimits

0x9025,	// (0x00033835) popup_choice_list_window

0x99dd,	// (0x000341ed) choice_list_pane

0x9a5f,	// (0x0003426f) cell_toolbar_pane_t1

0x9a87,	// (0x00034297) toolbar_button_pane_ParamLimits

0xabb4,	// (0x000353c4) ai_gene_pane_1_t2_ParamLimits

0xabb4,	// (0x000353c4) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0003a133) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0003a133) ai_gene_pane_1_t

0xc0c0,	// (0x000368d0) scroll_sc2_left_pane_g1

0xc0c0,	// (0x000368d0) scroll_sc2_right_pane_g1

0x8ffd,	// (0x0003380d) bg_popup_sub_pane_cp10

0xc0ca,	// (0x000368da) list_choice_list_pane

0xc0e1,	// (0x000368f1) list_single_choice_list_pane_ParamLimits

0xc0e1,	// (0x000368f1) list_single_choice_list_pane

0xc0f5,	// (0x00036905) list_single_choice_list_pane_g1

0xc0fd,	// (0x0003690d) list_single_choice_list_pane_t1_ParamLimits

0xc0fd,	// (0x0003690d) list_single_choice_list_pane_t1

0xc112,	// (0x00036922) choice_list_pane_g1

0xc11a,	// (0x0003692a) choice_list_pane_t1

0x6f8c,	// (0x0003179c) input_focus_pane_cp11

0x83a7,	// (0x00032bb7) title_pane_stacon_g2_ParamLimits

0x83a7,	// (0x00032bb7) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x00039ef5) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00039ef5) title_pane_stacon_g

0x8c97,	// (0x000334a7) cursor_press_pane

0x90cd,	// (0x000338dd) popup_fep_hwr_window_ParamLimits

0x90cd,	// (0x000338dd) popup_fep_hwr_window

0x9147,	// (0x00033957) popup_fep_vkb_window_ParamLimits

0x9147,	// (0x00033957) popup_fep_vkb_window

0xc128,	// (0x00036938) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0003a34b) fep_vkb_side_pane_g_ParamLimits

0x62dc,	// (0x00030aec) fep_hwr_candidate_pane_ParamLimits

0x62dc,	// (0x00030aec) fep_hwr_candidate_pane

0x6306,	// (0x00030b16) fep_hwr_side_pane_ParamLimits

0x6306,	// (0x00030b16) fep_hwr_side_pane

0x6326,	// (0x00030b36) fep_hwr_top_pane_ParamLimits

0x6326,	// (0x00030b36) fep_hwr_top_pane

0x633e,	// (0x00030b4e) fep_hwr_write_pane_ParamLimits

0x633e,	// (0x00030b4e) fep_hwr_write_pane

0xfb3b,	// (0x0003a34b) fep_vkb_side_pane_g

0xc130,	// (0x00036940) fep_hwr_top_pane_g1

0xc142,	// (0x00036952) fep_hwr_top_pane_g2

0x6378,	// (0x00030b88) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0003a327) fep_hwr_top_pane_g

0x638d,	// (0x00030b9d) fep_hwr_top_text_pane

0x8698,	// (0x00032ea8) fep_hwr_top_text_pane_g1

0xc178,	// (0x00036988) fep_hwr_top_text_pane_t1

0x6483,	// (0x00030c93) fep_hwr_candidate_pane_g1

0xc3cb,	// (0x00036bdb) fep_vkb_keypad_pane_g3_ParamLimits

0xc3cb,	// (0x00036bdb) fep_vkb_keypad_pane_g3

0xc3f3,	// (0x00036c03) fep_vkb_keypad_pane_g4_ParamLimits

0xc3f3,	// (0x00036c03) fep_vkb_keypad_pane_g4

0xc462,	// (0x00036c72) fep_vkb_bottom_pane_g2_ParamLimits

0xc462,	// (0x00036c72) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0003a352) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0003a352) fep_vkb_bottom_pane_g

0xc0c0,	// (0x000368d0) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0003a35c) cell_vkb_side_pane_g

0xc4ed,	// (0x00036cfd) cell_vkb_side_pane_t1

0xc4fb,	// (0x00036d0b) cell_vkb_side_pane_t1_copy1

0xc0c0,	// (0x000368d0) bg_fep_vkb_candidate_pane_g2

0xc627,	// (0x00036e37) cell_vkb_candidate_pane_ParamLimits

0xc186,	// (0x00036996) aid_size_cell_vkb_ParamLimits

0xc186,	// (0x00036996) aid_size_cell_vkb

0xc627,	// (0x00036e37) cell_vkb_candidate_pane

0x64aa,	// (0x00030cba) bg_popup_fep_shadow_pane_g1

0xc214,	// (0x00036a24) fep_vkb_bottom_pane_ParamLimits

0xc214,	// (0x00036a24) fep_vkb_bottom_pane

0xc24a,	// (0x00036a5a) fep_vkb_candidate_pane_ParamLimits

0xc24a,	// (0x00036a5a) fep_vkb_candidate_pane

0xc266,	// (0x00036a76) fep_vkb_keypad_pane_ParamLimits

0xc266,	// (0x00036a76) fep_vkb_keypad_pane

0xc2ac,	// (0x00036abc) fep_vkb_side_pane_ParamLimits

0xc2ac,	// (0x00036abc) fep_vkb_side_pane

0xc2e8,	// (0x00036af8) fep_vkb_top_pane_ParamLimits

0xc2e8,	// (0x00036af8) fep_vkb_top_pane

0xc324,	// (0x00036b34) fep_vkb_top_pane_g1_ParamLimits

0xc324,	// (0x00036b34) fep_vkb_top_pane_g1

0xc333,	// (0x00036b43) fep_vkb_top_pane_g2_ParamLimits

0xc333,	// (0x00036b43) fep_vkb_top_pane_g2

0xc342,	// (0x00036b52) fep_vkb_top_pane_g3_ParamLimits

0xc342,	// (0x00036b52) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0003a342) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0003a342) fep_vkb_top_pane_g

0xc360,	// (0x00036b70) fep_vkb_top_text_pane_ParamLimits

0xc360,	// (0x00036b70) fep_vkb_top_text_pane

0xc371,	// (0x00036b81) fep_vkb_side_pane_g1_ParamLimits

0xc371,	// (0x00036b81) fep_vkb_side_pane_g1

0xc3ba,	// (0x00036bca) grid_vkb_side_pane_ParamLimits

0xc3ba,	// (0x00036bca) grid_vkb_side_pane

0x64b2,	// (0x00030cc2) bg_popup_fep_shadow_pane_g2

0x64bb,	// (0x00030ccb) bg_popup_fep_shadow_pane_g3

0x64c3,	// (0x00030cd3) bg_popup_fep_shadow_pane_g4

0x64cc,	// (0x00030cdc) bg_popup_fep_shadow_pane_g5

0x64d6,	// (0x00030ce6) bg_popup_fep_shadow_pane_g6

0x64de,	// (0x00030cee) bg_popup_fep_shadow_pane_g7

0x80b1,	// (0x000328c1) bg_popup_fep_shadow_pane_g8

0xc411,	// (0x00036c21) grid_vkb_keypad_number_pane_ParamLimits

0xc411,	// (0x00036c21) grid_vkb_keypad_number_pane

0xc421,	// (0x00036c31) grid_vkb_keypad_pane_ParamLimits

0xc421,	// (0x00036c31) grid_vkb_keypad_pane

0xc447,	// (0x00036c57) fep_vkb_bottom_pane_g1_ParamLimits

0xc447,	// (0x00036c57) fep_vkb_bottom_pane_g1

0xc470,	// (0x00036c80) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc470,	// (0x00036c80) grid_vkb_keypad_bottom_left_pane

0xc485,	// (0x00036c95) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc485,	// (0x00036c95) grid_vkb_keypad_bottom_right_pane

0xc49a,	// (0x00036caa) fep_vkb_top_text_pane_g1

0xc4b5,	// (0x00036cc5) fep_vkb_top_text_pane_t1

0xc4ca,	// (0x00036cda) cell_vkb_side_pane_ParamLimits

0xc4ca,	// (0x00036cda) cell_vkb_side_pane

0xc0c0,	// (0x000368d0) cell_vkb_side_pane_g1

0xc509,	// (0x00036d19) cell_vkb_keypad_pane_ParamLimits

0xc509,	// (0x00036d19) cell_vkb_keypad_pane

0xc57e,	// (0x00036d8e) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0003a36f) bg_popup_fep_shadow_pane_g

0x64f0,	// (0x00030d00) cell_hwr_side_pane_g1

0x64f0,	// (0x00030d00) cell_hwr_side_pane_g2

0xc588,	// (0x00036d98) cell_vkb_keypad_pane_t1

0xc596,	// (0x00036da6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc596,	// (0x00036da6) cell_vkb_keypad_bottom_left_pane

0xc5b3,	// (0x00036dc3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc5b3,	// (0x00036dc3) cell_vkb_keypad_bottom_right_pane

0xc0c0,	// (0x000368d0) cell_vkb_keypad_bottom_left_pane_g1

0xc0c0,	// (0x000368d0) cell_vkb_keypad_bottom_right_pane_g1

0xc5ec,	// (0x00036dfc) cell_vkb_keypad_number_pane_ParamLimits

0xc5ec,	// (0x00036dfc) cell_vkb_keypad_number_pane

0xc60b,	// (0x00036e1b) cell_vkb_keypad_number_pane_g1

0xc615,	// (0x00036e25) cell_vkb_keypad_number_pane_g2

0xc61e,	// (0x00036e2e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0003a361) cell_vkb_keypad_number_pane_g

0xc588,	// (0x00036d98) cell_vkb_keypad_number_pane_t1

0xc642,	// (0x00036e52) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0003a382) cell_hwr_side_pane_g

0xc65b,	// (0x00036e6b) cell_hwr_side_pane_t1

0x64fa,	// (0x00030d0a) cell_hwr_side_pane_t1_copy1

0x6508,	// (0x00030d18) cell_hwr_candidate_pane_g1

0x6537,	// (0x00030d47) cell_hwr_candidate_pane_t1

0xc0c0,	// (0x000368d0) cell_vkb_candidate_pane_g2

0xc69f,	// (0x00036eaf) cell_vkb_candidate_pane_t1

0x62a3,	// (0x00030ab3) bg_popup_fep_shadow_pane_ParamLimits

0x62a3,	// (0x00030ab3) bg_popup_fep_shadow_pane

0x6358,	// (0x00030b68) bg_fep_hwr_top_pane_g4

0xc154,	// (0x00036964) bg_hwr_side_pane_g1_ParamLimits

0xc154,	// (0x00036964) bg_hwr_side_pane_g1

0x63c9,	// (0x00030bd9) cell_hwr_side_pane_ParamLimits

0x63c9,	// (0x00030bd9) cell_hwr_side_pane

0x6404,	// (0x00030c14) fep_hwr_write_pane_g1_ParamLimits

0x6404,	// (0x00030c14) fep_hwr_write_pane_g1

0x6411,	// (0x00030c21) fep_hwr_write_pane_g2_ParamLimits

0x6411,	// (0x00030c21) fep_hwr_write_pane_g2

0x641e,	// (0x00030c2e) fep_hwr_write_pane_g3_ParamLimits

0x641e,	// (0x00030c2e) fep_hwr_write_pane_g3

0x642c,	// (0x00030c3c) fep_hwr_write_pane_g4_ParamLimits

0x642c,	// (0x00030c3c) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0003a32e) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0003a32e) fep_hwr_write_pane_g

0x6358,	// (0x00030b68) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6358,	// (0x00030b68) bg_fep_hwr_candidate_pane_g2

0x6441,	// (0x00030c51) cell_hwr_candidate_pane_ParamLimits

0x6441,	// (0x00030c51) cell_hwr_candidate_pane

0x6483,	// (0x00030c93) fep_hwr_candidate_pane_g1_ParamLimits

0xc1b4,	// (0x000369c4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc1b4,	// (0x000369c4) bg_popup_fep_shadow_pane_cp2

0xc352,	// (0x00036b62) fep_vkb_top_pane_g4_ParamLimits

0xc352,	// (0x00036b62) fep_vkb_top_pane_g4

0xc398,	// (0x00036ba8) fep_vkb_side_pane_g2_ParamLimits

0xc398,	// (0x00036ba8) fep_vkb_side_pane_g2

0x53e4,	// (0x0002fbf4) list_setting_pane_t4_ParamLimits

0x53e4,	// (0x0002fbf4) list_setting_pane_t4

0x547e,	// (0x0002fc8e) list_setting_number_pane_t5_ParamLimits

0x547e,	// (0x0002fc8e) list_setting_number_pane_t5

0x86da,	// (0x00032eea) list_double_heading_pane_cp2_ParamLimits

0x86da,	// (0x00032eea) list_double_heading_pane_cp2

0x804c,	// (0x0003285c) list_double_heading_pane_g1_cp2_ParamLimits

0x804c,	// (0x0003285c) list_double_heading_pane_g1_cp2

0x8058,	// (0x00032868) list_double_heading_pane_g2_cp2_ParamLimits

0x8058,	// (0x00032868) list_double_heading_pane_g2_cp2

0xc6ad,	// (0x00036ebd) list_double_heading_pane_t1_cp2_ParamLimits

0xc6ad,	// (0x00036ebd) list_double_heading_pane_t1_cp2

0xc6c3,	// (0x00036ed3) list_double_heading_pane_t2_cp2_ParamLimits

0xc6c3,	// (0x00036ed3) list_double_heading_pane_t2_cp2

0x6f74,	// (0x00031784) aid_value_unit2

0x4e27,	// (0x0002f637) popup_preview_fixed_window

0x7a4f,	// (0x0003225f) bg_popup_preview_window_pane_cp02

0xc6d5,	// (0x00036ee5) list_preview_fixed_pane

0xc71b,	// (0x00036f2b) list_empty_pane_fp_ParamLimits

0xc71b,	// (0x00036f2b) list_empty_pane_fp

0xc71b,	// (0x00036f2b) list_single_cale_day_pane_fp_ParamLimits

0xc71b,	// (0x00036f2b) list_single_cale_day_pane_fp

0xc71b,	// (0x00036f2b) list_single_graphic_heading_pane_fp_ParamLimits

0xc71b,	// (0x00036f2b) list_single_graphic_heading_pane_fp

0xc71b,	// (0x00036f2b) list_single_graphic_pane_fp_ParamLimits

0xc71b,	// (0x00036f2b) list_single_graphic_pane_fp

0xc71b,	// (0x00036f2b) list_single_heading_pane_fp_ParamLimits

0xc71b,	// (0x00036f2b) list_single_heading_pane_fp

0xc71b,	// (0x00036f2b) list_single_pane_fp_ParamLimits

0xc71b,	// (0x00036f2b) list_single_pane_fp

0xc730,	// (0x00036f40) list_single_pane_fp_g1_ParamLimits

0xc730,	// (0x00036f40) list_single_pane_fp_g1

0x757f,	// (0x00031d8f) list_single_pane_fp_g2_ParamLimits

0x757f,	// (0x00031d8f) list_single_pane_fp_g2

0x758b,	// (0x00031d9b) list_single_pane_fp_g3_ParamLimits

0x758b,	// (0x00031d9b) list_single_pane_fp_g3

0xc73c,	// (0x00036f4c) list_single_pane_fp_g4_ParamLimits

0xc73c,	// (0x00036f4c) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0003a395) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0003a395) list_single_pane_fp_g

0x759f,	// (0x00031daf) list_single_pane_fp_t1_ParamLimits

0x759f,	// (0x00031daf) list_single_pane_fp_t1

0x75b6,	// (0x00031dc6) list_single_graphic_pane_fp_g1_ParamLimits

0x75b6,	// (0x00031dc6) list_single_graphic_pane_fp_g1

0xc730,	// (0x00036f40) list_single_graphic_pane_fp_g2_ParamLimits

0xc730,	// (0x00036f40) list_single_graphic_pane_fp_g2

0x757f,	// (0x00031d8f) list_single_graphic_pane_fp_g3_ParamLimits

0x757f,	// (0x00031d8f) list_single_graphic_pane_fp_g3

0x758b,	// (0x00031d9b) list_single_graphic_pane_fp_g4_ParamLimits

0x758b,	// (0x00031d9b) list_single_graphic_pane_fp_g4

0xc73c,	// (0x00036f4c) list_single_graphic_pane_fp_g5_ParamLimits

0xc73c,	// (0x00036f4c) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003a39e) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003a39e) list_single_graphic_pane_fp_g

0x75c2,	// (0x00031dd2) list_single_graphic_pane_fp_t1_ParamLimits

0x75c2,	// (0x00031dd2) list_single_graphic_pane_fp_t1

0x75b6,	// (0x00031dc6) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x75b6,	// (0x00031dc6) list_single_graphic_heading_pane_fp_g1

0xc730,	// (0x00036f40) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc730,	// (0x00036f40) list_single_graphic_heading_pane_fp_g2

0x757f,	// (0x00031d8f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x757f,	// (0x00031d8f) list_single_graphic_heading_pane_fp_g3

0x758b,	// (0x00031d9b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x758b,	// (0x00031d9b) list_single_graphic_heading_pane_fp_g4

0xc73c,	// (0x00036f4c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc73c,	// (0x00036f4c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003a39e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003a39e) list_single_graphic_heading_pane_fp_g

0x75d8,	// (0x00031de8) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x75d8,	// (0x00031de8) list_single_graphic_heading_pane_fp_t1

0x75ee,	// (0x00031dfe) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x75ee,	// (0x00031dfe) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0003a3a9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0003a3a9) list_single_graphic_heading_pane_fp_t

0x7600,	// (0x00031e10) list_single_cale_day_pane_fp_g1_ParamLimits

0x7600,	// (0x00031e10) list_single_cale_day_pane_fp_g1

0xc748,	// (0x00036f58) list_single_cale_day_pane_fp_g2_ParamLimits

0xc748,	// (0x00036f58) list_single_cale_day_pane_fp_g2

0x7638,	// (0x00031e48) list_single_cale_day_pane_fp_g3_ParamLimits

0x7638,	// (0x00031e48) list_single_cale_day_pane_fp_g3

0x7660,	// (0x00031e70) list_single_cale_day_pane_fp_g4_ParamLimits

0x7660,	// (0x00031e70) list_single_cale_day_pane_fp_g4

0x7684,	// (0x00031e94) list_single_cale_day_pane_fp_g5_ParamLimits

0x7684,	// (0x00031e94) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0003a3ae) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0003a3ae) list_single_cale_day_pane_fp_g

0x76a8,	// (0x00031eb8) list_single_cale_day_pane_fp_t1_ParamLimits

0x76a8,	// (0x00031eb8) list_single_cale_day_pane_fp_t1

0x76ce,	// (0x00031ede) list_single_cale_day_pane_fp_t2_ParamLimits

0x76ce,	// (0x00031ede) list_single_cale_day_pane_fp_t2

0x76e7,	// (0x00031ef7) list_single_cale_day_pane_fp_t3_ParamLimits

0x76e7,	// (0x00031ef7) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0003a3b9) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0003a3b9) list_single_cale_day_pane_fp_t

0xc730,	// (0x00036f40) list_empty_pane_fp_g1_ParamLimits

0xc730,	// (0x00036f40) list_empty_pane_fp_g1

0x7700,	// (0x00031f10) list_empty_pane_fp_t1

0x770e,	// (0x00031f1e) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0003a3c0) list_empty_pane_fp_t

0xc730,	// (0x00036f40) list_single_heading_pane_fp_g1_ParamLimits

0xc730,	// (0x00036f40) list_single_heading_pane_fp_g1

0x757f,	// (0x00031d8f) list_single_heading_pane_fp_g2_ParamLimits

0x757f,	// (0x00031d8f) list_single_heading_pane_fp_g2

0x758b,	// (0x00031d9b) list_single_heading_pane_fp_g3_ParamLimits

0x758b,	// (0x00031d9b) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0003a3c5) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0003a3c5) list_single_heading_pane_fp_g

0x771c,	// (0x00031f2c) list_single_heading_pane_fp_t1_ParamLimits

0x771c,	// (0x00031f2c) list_single_heading_pane_fp_t1

0x772e,	// (0x00031f3e) list_single_heading_pane_fp_t2_ParamLimits

0x772e,	// (0x00031f3e) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0003a3cc) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0003a3cc) list_single_heading_pane_fp_t

0x823e,	// (0x00032a4e) aid_size_cell_fast

0x79bf,	// (0x000321cf) soft_indicator_pane_cp1_t1

0x827b,	// (0x00032a8b) cell_app_pane_cp2_ParamLimits

0x827b,	// (0x00032a8b) cell_app_pane_cp2

0x62c5,	// (0x00030ad5) fep_hwr_candidate_drop_down_list_pane

0x649d,	// (0x00030cad) fep_hwr_candidate_pane_g3_ParamLimits

0x649d,	// (0x00030cad) fep_hwr_candidate_pane_g3

0x3938,	// (0x0002e148) fep_hwr_candidate_pane_g4_ParamLimits

0x3938,	// (0x0002e148) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0003a33b) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0003a33b) fep_hwr_candidate_pane_g

0xc239,	// (0x00036a49) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc239,	// (0x00036a49) fep_vkb_candidate_drop_down_list_pane

0xc64a,	// (0x00036e5a) fep_vkb_candidate_pane_g3

0xc652,	// (0x00036e62) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0003a368) fep_vkb_candidate_pane_g

0x6508,	// (0x00030d18) cell_hwr_candidate_pane_g1_ParamLimits

0x6516,	// (0x00030d26) cell_hwr_candidate_pane_g3_ParamLimits

0x6516,	// (0x00030d26) cell_hwr_candidate_pane_g3

0xe275,	// (0x00038a85) cell_hwr_candidate_pane_g4_ParamLimits

0xe275,	// (0x00038a85) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0003a387) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0003a387) cell_hwr_candidate_pane_g

0xc669,	// (0x00036e79) cell_vkb_candidate_pane_g3_ParamLimits

0xc669,	// (0x00036e79) cell_vkb_candidate_pane_g3

0xc684,	// (0x00036e94) cell_vkb_candidate_pane_g4_ParamLimits

0xc684,	// (0x00036e94) cell_vkb_candidate_pane_g4

0xc754,	// (0x00036f64) cell_app_pane_cp2_g1_ParamLimits

0xc754,	// (0x00036f64) cell_app_pane_cp2_g1

0xc772,	// (0x00036f82) cell_app_pane_cp2_g2_ParamLimits

0xc772,	// (0x00036f82) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0003a3d1) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0003a3d1) cell_app_pane_cp2_g

0xc77e,	// (0x00036f8e) cell_app_pane_cp2_t1_ParamLimits

0xc77e,	// (0x00036f8e) cell_app_pane_cp2_t1

0x8032,	// (0x00032842) grid_highlight_pane_cp1_ParamLimits

0x8032,	// (0x00032842) grid_highlight_pane_cp1

0x6555,	// (0x00030d65) cell_hwr_candidate_pane_cp1_ParamLimits

0x6555,	// (0x00030d65) cell_hwr_candidate_pane_cp1

0x6508,	// (0x00030d18) fep_hwr_candidate_drop_down_list_pane_g1

0x6574,	// (0x00030d84) fep_hwr_candidate_drop_down_list_pane_g2

0x6581,	// (0x00030d91) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0003a3d6) fep_hwr_candidate_drop_down_list_pane_g

0x658e,	// (0x00030d9e) fep_hwr_candidate_drop_down_list_scroll_pane

0x6597,	// (0x00030da7) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6597,	// (0x00030da7) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x65a4,	// (0x00030db4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x65a4,	// (0x00030db4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x65b1,	// (0x00030dc1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x65b1,	// (0x00030dc1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x65be,	// (0x00030dce) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x65be,	// (0x00030dce) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x65d9,	// (0x00030de9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x65d9,	// (0x00030de9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x65f4,	// (0x00030e04) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x65f4,	// (0x00030e04) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x660f,	// (0x00030e1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x660f,	// (0x00030e1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x662a,	// (0x00030e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x662a,	// (0x00030e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0003a3dd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0003a3dd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc790,	// (0x00036fa0) cell_vkb_candidate_pane_cp1_ParamLimits

0xc790,	// (0x00036fa0) cell_vkb_candidate_pane_cp1

0xc352,	// (0x00036b62) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc352,	// (0x00036b62) fep_vkb_candidate_drop_down_list_pane_g1

0xc7b0,	// (0x00036fc0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7b0,	// (0x00036fc0) fep_vkb_candidate_drop_down_list_pane_g2

0xc7bd,	// (0x00036fcd) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7bd,	// (0x00036fcd) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0003a3ee) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0003a3ee) fep_vkb_candidate_drop_down_list_pane_g

0xc7ca,	// (0x00036fda) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7ca,	// (0x00036fda) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7d7,	// (0x00036fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7d7,	// (0x00036fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7e4,	// (0x00036ff4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7e4,	// (0x00036ff4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7f0,	// (0x00037000) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7f0,	// (0x00037000) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7fc,	// (0x0003700c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7fc,	// (0x0003700c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc81d,	// (0x0003702d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc81d,	// (0x0003702d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc83e,	// (0x0003704e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc83e,	// (0x0003704e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc85f,	// (0x0003706f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc85f,	// (0x0003706f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc880,	// (0x00037090) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc880,	// (0x00037090) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0003a3f5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0003a3f5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6faa,	// (0x000317ba) title_pane_g1_ParamLimits

0x6fb7,	// (0x000317c7) title_pane_g2_ParamLimits

0xf56a,	// (0x00039d7a) title_pane_g_ParamLimits

0x8688,	// (0x00032e98) aid_call2_pane

0x8690,	// (0x00032ea0) aid_call_pane

0x8698,	// (0x00032ea8) popup_clock_analogue_window_g1

0x8698,	// (0x00032ea8) popup_clock_analogue_window_g2

0x58d1,	// (0x000300e1) popup_clock_analogue_window_g3

0x58da,	// (0x000300ea) popup_clock_analogue_window_g4

0x6f96,	// (0x000317a6) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x00039f24) popup_clock_analogue_window_g

0x58e2,	// (0x000300f2) popup_clock_analogue_window_t1

0x58f0,	// (0x00030100) clock_digital_number_pane_ParamLimits

0x58f0,	// (0x00030100) clock_digital_number_pane

0x58fc,	// (0x0003010c) clock_digital_number_pane_cp02_ParamLimits

0x58fc,	// (0x0003010c) clock_digital_number_pane_cp02

0x5908,	// (0x00030118) clock_digital_number_pane_cp03_ParamLimits

0x5908,	// (0x00030118) clock_digital_number_pane_cp03

0x5914,	// (0x00030124) clock_digital_number_pane_cp04_ParamLimits

0x5914,	// (0x00030124) clock_digital_number_pane_cp04

0x5920,	// (0x00030130) clock_digital_separator_pane_ParamLimits

0x5920,	// (0x00030130) clock_digital_separator_pane

0x592c,	// (0x0003013c) popup_clock_digital_window_t1_ParamLimits

0x592c,	// (0x0003013c) popup_clock_digital_window_t1

0x6f96,	// (0x000317a6) clock_digital_number_pane_g1

0x6f96,	// (0x000317a6) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x00039f2f) clock_digital_number_pane_g

0x6f96,	// (0x000317a6) clock_digital_separator_pane_g1

0x6f96,	// (0x000317a6) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x00039f2f) clock_digital_separator_pane_g

0x95b6,	// (0x00033dc6) aid_fill_nsta_ParamLimits

0x96f8,	// (0x00033f08) indicator_nsta_pane_ParamLimits

0x986a,	// (0x0003407a) popup_clock_analogue_window

0x986a,	// (0x0003407a) popup_clock_digital_window

0x7080,	// (0x00031890) grid_indicator_nsta_pane_ParamLimits

0xba9f,	// (0x000362af) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0003a2bb) clock_nsta_pane_t

0x5895,	// (0x000300a5) aid_size_max_handle

0x589f,	// (0x000300af) aid_size_min_handle

0x8c97,	// (0x000334a7) editor_scroll_pane

0xc89b,	// (0x000370ab) ex_editor_pane

0x81ac,	// (0x000329bc) scroll_pane_cp13

0x7fd1,	// (0x000327e1) scroll_pane_cp14

0x86c2,	// (0x00032ed2) scroll_pane_cp36

0x86ee,	// (0x00032efe) list_single_graphic_hl_pane_cp2_ParamLimits

0x86ee,	// (0x00032efe) list_single_graphic_hl_pane_cp2

0xb0c7,	// (0x000358d7) list_single_graphic_hl_pane_ParamLimits

0xb0c7,	// (0x000358d7) list_single_graphic_hl_pane

0x7744,	// (0x00031f54) aid_size_min_hl_cp1

0xc8a3,	// (0x000370b3) list_highlight_pane_cp34_ParamLimits

0xc8a3,	// (0x000370b3) list_highlight_pane_cp34

0xc8b4,	// (0x000370c4) list_single_graphic_hl_pane_g1_ParamLimits

0xc8b4,	// (0x000370c4) list_single_graphic_hl_pane_g1

0x774d,	// (0x00031f5d) list_single_graphic_hl_pane_g2_ParamLimits

0x774d,	// (0x00031f5d) list_single_graphic_hl_pane_g2

0x774d,	// (0x00031f5d) list_single_graphic_hl_pane_g3_ParamLimits

0x774d,	// (0x00031f5d) list_single_graphic_hl_pane_g3

0x5dca,	// (0x000305da) list_single_graphic_hl_pane_g4_ParamLimits

0x5dca,	// (0x000305da) list_single_graphic_hl_pane_g4

0x7759,	// (0x00031f69) list_single_graphic_hl_pane_g5_ParamLimits

0x7759,	// (0x00031f69) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0003a406) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0003a406) list_single_graphic_hl_pane_g

0x776d,	// (0x00031f7d) list_single_graphic_hl_pane_t1_ParamLimits

0x776d,	// (0x00031f7d) list_single_graphic_hl_pane_t1

0xc8c1,	// (0x000370d1) aid_size_min_hl_cp2

0xc8ca,	// (0x000370da) list_highlight_pane_cp34_cp2_ParamLimits

0xc8ca,	// (0x000370da) list_highlight_pane_cp34_cp2

0xc8b4,	// (0x000370c4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8b4,	// (0x000370c4) list_single_graphic_hl_pane_g1_cp2

0xc8d7,	// (0x000370e7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8d7,	// (0x000370e7) list_single_graphic_hl_pane_g2_cp2

0xc8e3,	// (0x000370f3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8e3,	// (0x000370f3) list_single_graphic_hl_pane_g3_cp2

0xa8dd,	// (0x000350ed) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa8dd,	// (0x000350ed) list_single_graphic_hl_pane_g4_cp2

0xc8f1,	// (0x00037101) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8f1,	// (0x00037101) list_single_graphic_hl_pane_g5_cp2

0x5c66,	// (0x00030476) control_pane_g4_ParamLimits

0x5c66,	// (0x00030476) control_pane_g4

0x8ffd,	// (0x0003380d) bg_popup_sub_pane_cp10_ParamLimits

0xc0ca,	// (0x000368da) list_choice_list_pane_ParamLimits

0xc0d9,	// (0x000368e9) scroll_pane_cp23

0x7a4f,	// (0x0003225f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6d5,	// (0x00036ee5) list_preview_fixed_pane_ParamLimits

0xc6eb,	// (0x00036efb) list_preview_fixed_pane_cp_ParamLimits

0xc6eb,	// (0x00036efb) list_preview_fixed_pane_cp

0xc6f7,	// (0x00036f07) popup_preview_fixed_window_g1_ParamLimits

0xc6f7,	// (0x00036f07) popup_preview_fixed_window_g1

0xc703,	// (0x00036f13) popup_preview_fixed_window_g2_ParamLimits

0xc703,	// (0x00036f13) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0003a38e) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0003a38e) popup_preview_fixed_window_g

0x5809,	// (0x00030019) aid_navi_side_left_pane_ParamLimits

0x581e,	// (0x0003002e) aid_navi_side_right_pane_ParamLimits

0x5836,	// (0x00030046) navi_icon_pane_stacon_ParamLimits

0x584a,	// (0x0003005a) navi_navi_pane_stacon_ParamLimits

0x5836,	// (0x00030046) navi_text_pane_stacon_ParamLimits

0x6f8c,	// (0x0003179c) main_text_info_pane

0xc91b,	// (0x0003712b) listscroll_text_info_pane

0xc923,	// (0x00037133) list_text_info_pane_ParamLimits

0xc923,	// (0x00037133) list_text_info_pane

0xc932,	// (0x00037142) scroll_pane_cp24_ParamLimits

0xc932,	// (0x00037142) scroll_pane_cp24

0xc950,	// (0x00037160) list_text_info_pane_t1_ParamLimits

0xc950,	// (0x00037160) list_text_info_pane_t1

0x903f,	// (0x0003384f) popup_fast_swap2_window_ParamLimits

0x903f,	// (0x0003384f) popup_fast_swap2_window

0xc981,	// (0x00037191) aid_size_cell_fast2

0x6f8c,	// (0x0003179c) bg_popup_window_pane_cp17

0x9f45,	// (0x00034755) heading_pane_cp2

0x7c9b,	// (0x000324ab) listscroll_fast2_pane

0xc98b,	// (0x0003719b) grid_fast2_pane

0xc995,	// (0x000371a5) listscroll_fast2_pane_g1

0xc99d,	// (0x000371ad) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0003a411) listscroll_fast2_pane_g

0x81ac,	// (0x000329bc) scroll_pane_cp26

0xc9a7,	// (0x000371b7) cell_fast2_pane_ParamLimits

0xc9a7,	// (0x000371b7) cell_fast2_pane

0xc9bc,	// (0x000371cc) cell_fast2_pane_g1

0xc9c5,	// (0x000371d5) cell_fast2_pane_g2

0xc9ce,	// (0x000371de) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0003a416) cell_fast2_pane_g

0x7d8e,	// (0x0003259e) grid_highlight_pane_cp9

0x7da3,	// (0x000325b3) main_eswt_pane_ParamLimits

0x7da3,	// (0x000325b3) main_eswt_pane

0xc947,	// (0x00037157) list_single_text_info_pane

0xc9d6,	// (0x000371e6) eswt_ctrl_button_pane

0xc9d6,	// (0x000371e6) eswt_ctrl_canvas_pane

0xc9de,	// (0x000371ee) eswt_ctrl_combo_pane

0xc9d6,	// (0x000371e6) eswt_ctrl_default_pane

0xc9d6,	// (0x000371e6) eswt_ctrl_label_pane

0xc9e6,	// (0x000371f6) eswt_ctrl_wait_pane

0xc9ee,	// (0x000371fe) eswt_shell_pane

0x6f8c,	// (0x0003179c) listscroll_eswt_app_pane

0xca0e,	// (0x0003721e) popup_eswt_tasktip_window_ParamLimits

0xca0e,	// (0x0003721e) popup_eswt_tasktip_window

0x9b83,	// (0x00034393) bg_popup_window_pane_cp18

0xca1f,	// (0x0003722f) eswt_control_pane_g1_ParamLimits

0xca1f,	// (0x0003722f) eswt_control_pane_g1

0xca2c,	// (0x0003723c) eswt_control_pane_g2_ParamLimits

0xca2c,	// (0x0003723c) eswt_control_pane_g2

0xca39,	// (0x00037249) eswt_control_pane_g3_ParamLimits

0xca39,	// (0x00037249) eswt_control_pane_g3

0xca46,	// (0x00037256) eswt_control_pane_g4_ParamLimits

0xca46,	// (0x00037256) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0003a41d) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0003a41d) eswt_control_pane_g

0x8032,	// (0x00032842) bg_button_pane_ParamLimits

0x8032,	// (0x00032842) bg_button_pane

0x7da3,	// (0x000325b3) common_borders_pane_copy2_ParamLimits

0x7da3,	// (0x000325b3) common_borders_pane_copy2

0xca53,	// (0x00037263) control_button_pane_g1_ParamLimits

0xca53,	// (0x00037263) control_button_pane_g1

0xca5f,	// (0x0003726f) control_button_pane_g2_ParamLimits

0xca5f,	// (0x0003726f) control_button_pane_g2

0xca6b,	// (0x0003727b) control_button_pane_g3_ParamLimits

0xca6b,	// (0x0003727b) control_button_pane_g3

0x0002,

0xfc16,	// (0x0003a426) control_button_pane_g_ParamLimits

0xfc16,	// (0x0003a426) control_button_pane_g

0xca7f,	// (0x0003728f) control_button_pane_t1

0xca8d,	// (0x0003729d) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0003a42d) control_button_pane_t

0x9a93,	// (0x000342a3) bg_button_pane_g1

0x9aa3,	// (0x000342b3) bg_button_pane_g2

0x9a9b,	// (0x000342ab) bg_button_pane_g3

0x9ab3,	// (0x000342c3) bg_button_pane_g4

0x9aab,	// (0x000342bb) bg_button_pane_g5

0x9abb,	// (0x000342cb) bg_button_pane_g6

0x9ac3,	// (0x000342d3) bg_button_pane_g7

0x9ad3,	// (0x000342e3) bg_button_pane_g8

0x9acb,	// (0x000342db) bg_button_pane_g9

0x0008,

0xf877,	// (0x0003a087) bg_button_pane_g

0xc085,	// (0x00036895) common_borders_pane_ParamLimits

0xc085,	// (0x00036895) common_borders_pane

0xca1f,	// (0x0003722f) eswt_control_pane_g1_copy1_ParamLimits

0xca1f,	// (0x0003722f) eswt_control_pane_g1_copy1

0xca2c,	// (0x0003723c) eswt_control_pane_g2_copy1_ParamLimits

0xca2c,	// (0x0003723c) eswt_control_pane_g2_copy1

0xca39,	// (0x00037249) eswt_control_pane_g3_copy1_ParamLimits

0xca39,	// (0x00037249) eswt_control_pane_g3_copy1

0xca46,	// (0x00037256) eswt_control_pane_g4_copy1_ParamLimits

0xca46,	// (0x00037256) eswt_control_pane_g4_copy1

0xc0c0,	// (0x000368d0) bg_eswt_ctrl_canvas_pane_g1

0xc085,	// (0x00036895) common_borders_pane_cp2_ParamLimits

0xc085,	// (0x00036895) common_borders_pane_cp2

0xc085,	// (0x00036895) common_borders_pane_cp3_ParamLimits

0xc085,	// (0x00036895) common_borders_pane_cp3

0xca9b,	// (0x000372ab) separator_horizontal_pane

0xcaa3,	// (0x000372b3) separator_vertical_pane

0xca1f,	// (0x0003722f) eswt_control_pane_g1_copy2_ParamLimits

0xca1f,	// (0x0003722f) eswt_control_pane_g1_copy2

0xca2c,	// (0x0003723c) eswt_control_pane_g2_copy2_ParamLimits

0xca2c,	// (0x0003723c) eswt_control_pane_g2_copy2

0xca39,	// (0x00037249) eswt_control_pane_g3_copy2_ParamLimits

0xca39,	// (0x00037249) eswt_control_pane_g3_copy2

0xca46,	// (0x00037256) eswt_control_pane_g4_copy2_ParamLimits

0xca46,	// (0x00037256) eswt_control_pane_g4_copy2

0x6f8c,	// (0x0003179c) common_borders_pane_cp4

0xcaac,	// (0x000372bc) separator_horizontal_pane_g1

0xcab5,	// (0x000372c5) separator_horizontal_pane_g2

0xcabe,	// (0x000372ce) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0003a432) separator_horizontal_pane_g

0xca1f,	// (0x0003722f) eswt_control_pane_g1_copy3_ParamLimits

0xca1f,	// (0x0003722f) eswt_control_pane_g1_copy3

0xca2c,	// (0x0003723c) eswt_control_pane_g2_copy3_ParamLimits

0xca2c,	// (0x0003723c) eswt_control_pane_g2_copy3

0xca39,	// (0x00037249) eswt_control_pane_g3_copy3_ParamLimits

0xca39,	// (0x00037249) eswt_control_pane_g3_copy3

0xca46,	// (0x00037256) eswt_control_pane_g4_copy3_ParamLimits

0xca46,	// (0x00037256) eswt_control_pane_g4_copy3

0x6f8c,	// (0x0003179c) common_borders_pane_cp5

0xcac7,	// (0x000372d7) separator_vertical_pane_g1

0xcad0,	// (0x000372e0) separator_vertical_pane_g2

0xcad9,	// (0x000372e9) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0003a439) separator_vertical_pane_g

0xca1f,	// (0x0003722f) eswt_control_pane_g1_copy4_ParamLimits

0xca1f,	// (0x0003722f) eswt_control_pane_g1_copy4

0xca2c,	// (0x0003723c) eswt_control_pane_g2_copy4_ParamLimits

0xca2c,	// (0x0003723c) eswt_control_pane_g2_copy4

0xca39,	// (0x00037249) eswt_control_pane_g3_copy4_ParamLimits

0xca39,	// (0x00037249) eswt_control_pane_g3_copy4

0xca46,	// (0x00037256) eswt_control_pane_g4_copy4_ParamLimits

0xca46,	// (0x00037256) eswt_control_pane_g4_copy4

0xcae2,	// (0x000372f2) eswt_ctrl_combo_button_pane

0xcaea,	// (0x000372fa) eswt_ctrl_input_pane

0xcaf2,	// (0x00037302) popup_choice_list_window_cp70

0xcafa,	// (0x0003730a) eswt_ctrl_input_pane_t1

0x6f8c,	// (0x0003179c) input_focus_pane_cp70

0xc085,	// (0x00036895) bg_button_pane_cp70_ParamLimits

0xc085,	// (0x00036895) bg_button_pane_cp70

0xcb08,	// (0x00037318) eswt_ctrl_combo_button_pane_g1

0xcb10,	// (0x00037320) wait_bar_pane_cp70

0x9b83,	// (0x00034393) bg_popup_window_pane_cp70_ParamLimits

0x9b83,	// (0x00034393) bg_popup_window_pane_cp70

0xcb18,	// (0x00037328) popup_eswt_tasktip_window_t1

0xcb2e,	// (0x0003733e) wait_bar_pane_cp71_ParamLimits

0xcb2e,	// (0x0003733e) wait_bar_pane_cp71

0xcb3a,	// (0x0003734a) grid_eswt_app_pane

0x84ca,	// (0x00032cda) scroll_pane_cp70

0xcb43,	// (0x00037353) cell_eswt_app_pane_ParamLimits

0xcb43,	// (0x00037353) cell_eswt_app_pane

0xcb73,	// (0x00037383) cell_eswt_app_pane_g1_ParamLimits

0xcb73,	// (0x00037383) cell_eswt_app_pane_g1

0xcba2,	// (0x000373b2) cell_eswt_app_pane_g2_ParamLimits

0xcba2,	// (0x000373b2) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0003a440) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0003a440) cell_eswt_app_pane_g

0xcbcb,	// (0x000373db) cell_eswt_app_pane_t1_ParamLimits

0xcbcb,	// (0x000373db) cell_eswt_app_pane_t1

0xcbfd,	// (0x0003740d) grid_highlight_pane_cp70_ParamLimits

0xcbfd,	// (0x0003740d) grid_highlight_pane_cp70

0x8b4a,	// (0x0003335a) set_content_pane_g1

0x8f43,	// (0x00033753) status_small_volume_pane

0x6645,	// (0x00030e55) status_small_volume_pane_g1

0x664d,	// (0x00030e5d) volume_small2_pane

0x6656,	// (0x00030e66) volume_small2_pane_g1

0x665f,	// (0x00030e6f) volume_small2_pane_g2

0x6668,	// (0x00030e78) volume_small2_pane_g3

0x6671,	// (0x00030e81) volume_small2_pane_g4

0x667a,	// (0x00030e8a) volume_small2_pane_g5

0x6683,	// (0x00030e93) volume_small2_pane_g6

0x668c,	// (0x00030e9c) volume_small2_pane_g7

0x6695,	// (0x00030ea5) volume_small2_pane_g8

0x669e,	// (0x00030eae) volume_small2_pane_g9

0x66a7,	// (0x00030eb7) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0003a445) volume_small2_pane_g

0xc49a,	// (0x00036caa) fep_vkb_top_text_pane_g1_ParamLimits

0xc4b5,	// (0x00036cc5) fep_vkb_top_text_pane_t1_ParamLimits

0xc70f,	// (0x00036f1f) popup_preview_fixed_window_g3_ParamLimits

0xc70f,	// (0x00036f1f) popup_preview_fixed_window_g3

0x94ec,	// (0x00033cfc) popup_toolbar_trans_pane

0xaed1,	// (0x000356e1) aid_height_set_list_ParamLimits

0xaee2,	// (0x000356f2) aid_size_parent_ParamLimits

0x8ffd,	// (0x0003380d) list_highlight_pane_cp2_ParamLimits

0x8b4a,	// (0x0003335a) set_content_pane_g1_ParamLimits

0x72d9,	// (0x00031ae9) list_single_image_pane_ParamLimits

0x72d9,	// (0x00031ae9) list_single_image_pane

0xcc09,	// (0x00037419) aid_size_cell_image_ParamLimits

0xcc09,	// (0x00037419) aid_size_cell_image

0xcc16,	// (0x00037426) grid_single_image_pane_ParamLimits

0xcc16,	// (0x00037426) grid_single_image_pane

0x8c14,	// (0x00033424) list_single_image_pane_g1_ParamLimits

0x8c14,	// (0x00033424) list_single_image_pane_g1

0xcc24,	// (0x00037434) list_single_image_pane_g2_ParamLimits

0xcc24,	// (0x00037434) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0003a45a) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0003a45a) list_single_image_pane_g

0x8c20,	// (0x00033430) list_single_image_pane_t1_ParamLimits

0x8c20,	// (0x00033430) list_single_image_pane_t1

0xcc38,	// (0x00037448) cell_image_list_pane_ParamLimits

0xcc38,	// (0x00037448) cell_image_list_pane

0xcc4b,	// (0x0003745b) cell_image_list_pane_g1

0xcc54,	// (0x00037464) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0003a45f) cell_image_list_pane_g

0xcc5d,	// (0x0003746d) aid_size_cell_tb_trans_pane

0x8032,	// (0x00032842) bg_tb_trans_pane

0xcc6f,	// (0x0003747f) grid_tb_trans_pane

0x9a93,	// (0x000342a3) bg_tb_trans_pane_g1

0x9aa3,	// (0x000342b3) bg_tb_trans_pane_g2

0x9a9b,	// (0x000342ab) bg_tb_trans_pane_g3

0x9ab3,	// (0x000342c3) bg_tb_trans_pane_g4

0x9aab,	// (0x000342bb) bg_tb_trans_pane_g5

0x9ad3,	// (0x000342e3) bg_tb_trans_pane_g6

0x9acb,	// (0x000342db) bg_tb_trans_pane_g7

0x9abb,	// (0x000342cb) bg_tb_trans_pane_g8

0x9ac3,	// (0x000342d3) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0003a464) bg_tb_trans_pane_g

0xcc83,	// (0x00037493) cell_toolbar_trans_pane_ParamLimits

0xcc83,	// (0x00037493) cell_toolbar_trans_pane

0xc0c0,	// (0x000368d0) cell_toolbar_trans_pane_g1

0xbc89,	// (0x00036499) list_form2_midp_pane_t1

0xbc97,	// (0x000364a7) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0003a301) list_form2_midp_pane_t

0xbca5,	// (0x000364b5) scroll_pane_cp51_ParamLimits

0xbe61,	// (0x00036671) form2_midp_wait_pane_g1

0xbe6a,	// (0x0003667a) form2_midp_wait_pane_g2

0xbe73,	// (0x00036683) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0003a316) form2_midp_wait_pane_g

0x7080,	// (0x00031890) list_highlight_pane_cp21_ParamLimits

0xbeca,	// (0x000366da) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbed9,	// (0x000366e9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x727a,	// (0x00031a8a) list_single_2graphic_im_pane_ParamLimits

0x727a,	// (0x00031a8a) list_single_2graphic_im_pane

0xcca9,	// (0x000374b9) list_single_2graphic_im_pane_g1_ParamLimits

0xcca9,	// (0x000374b9) list_single_2graphic_im_pane_g1

0xccba,	// (0x000374ca) list_single_2graphic_im_pane_g2_ParamLimits

0xccba,	// (0x000374ca) list_single_2graphic_im_pane_g2

0xccc6,	// (0x000374d6) list_single_2graphic_im_pane_g3_ParamLimits

0xccc6,	// (0x000374d6) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0003a477) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0003a477) list_single_2graphic_im_pane_g

0xcce6,	// (0x000374f6) list_single_2graphic_im_pane_t1_ParamLimits

0xcce6,	// (0x000374f6) list_single_2graphic_im_pane_t1

0xc71b,	// (0x00036f2b) list_single_graphic_2heading_pane_fp_ParamLimits

0xc71b,	// (0x00036f2b) list_single_graphic_2heading_pane_fp

0x75b6,	// (0x00031dc6) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x75b6,	// (0x00031dc6) list_single_graphic_2heading_pane_fp_g1

0xc730,	// (0x00036f40) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc730,	// (0x00036f40) list_single_graphic_2heading_pane_fp_g2

0x757f,	// (0x00031d8f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x757f,	// (0x00031d8f) list_single_graphic_2heading_pane_fp_g3

0x758b,	// (0x00031d9b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x758b,	// (0x00031d9b) list_single_graphic_2heading_pane_fp_g4

0xc73c,	// (0x00036f4c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc73c,	// (0x00036f4c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003a39e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003a39e) list_single_graphic_2heading_pane_fp_g

0x7783,	// (0x00031f93) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7783,	// (0x00031f93) list_single_graphic_2heading_pane_fp_t1

0x75ee,	// (0x00031dfe) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x75ee,	// (0x00031dfe) list_single_graphic_2heading_pane_fp_t2

0x7799,	// (0x00031fa9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7799,	// (0x00031fa9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0003a480) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0003a480) list_single_graphic_2heading_pane_fp_t

0xc160,	// (0x00036970) fep_hwr_write_pane_g5_ParamLimits

0xc160,	// (0x00036970) fep_hwr_write_pane_g5

0xc16c,	// (0x0003697c) fep_hwr_write_pane_g6_ParamLimits

0xc16c,	// (0x0003697c) fep_hwr_write_pane_g6

0xc9ee,	// (0x000371fe) eswt_shell_pane_ParamLimits

0x9b83,	// (0x00034393) bg_popup_window_pane_cp18_ParamLimits

0xae2a,	// (0x0003563a) heading_pane_cp70

0xcb18,	// (0x00037328) popup_eswt_tasktip_window_t1_ParamLimits

0x960b,	// (0x00033e1b) aid_touch_tab_arrow_left

0x9617,	// (0x00033e27) aid_touch_tab_arrow_right

0x6fc8,	// (0x000317d8) title_pane_g3_ParamLimits

0x6fc8,	// (0x000317d8) title_pane_g3

0x7ff1,	// (0x00032801) set_value_pane_g1

0x94ec,	// (0x00033cfc) popup_toolbar_trans_pane_ParamLimits

0xcc5d,	// (0x0003746d) aid_size_cell_tb_trans_pane_ParamLimits

0x8032,	// (0x00032842) bg_tb_trans_pane_ParamLimits

0xcc6f,	// (0x0003747f) grid_tb_trans_pane_ParamLimits

0x7a4f,	// (0x0003225f) cont_note_pane_ParamLimits

0x7a4f,	// (0x0003225f) cont_note_pane

0x7da3,	// (0x000325b3) cont_snote2_single_text_pane_ParamLimits

0x7da3,	// (0x000325b3) cont_snote2_single_text_pane

0x7da3,	// (0x000325b3) cont_snote2_single_graphic_pane_ParamLimits

0x7da3,	// (0x000325b3) cont_snote2_single_graphic_pane

0xa160,	// (0x00034970) cont_note_wait_pane_ParamLimits

0xa160,	// (0x00034970) cont_note_wait_pane

0xa160,	// (0x00034970) cont_note_image_pane_ParamLimits

0xa160,	// (0x00034970) cont_note_image_pane

0xcd17,	// (0x00037527) popup_note2_window_g1_ParamLimits

0xcd17,	// (0x00037527) popup_note2_window_g1

0xcd48,	// (0x00037558) popup_note2_window_t1_ParamLimits

0xcd48,	// (0x00037558) popup_note2_window_t1

0xcd8d,	// (0x0003759d) popup_note2_window_t2_ParamLimits

0xcd8d,	// (0x0003759d) popup_note2_window_t2

0xcdd2,	// (0x000375e2) popup_note2_window_t3_ParamLimits

0xcdd2,	// (0x000375e2) popup_note2_window_t3

0xce17,	// (0x00037627) popup_note2_window_t4_ParamLimits

0xce17,	// (0x00037627) popup_note2_window_t4

0x7ad3,	// (0x000322e3) popup_note2_window_t5_ParamLimits

0x7ad3,	// (0x000322e3) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0003a48c) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0003a48c) popup_note2_window_t

0xce46,	// (0x00037656) popup_note2_image_window_g1_ParamLimits

0xce46,	// (0x00037656) popup_note2_image_window_g1

0xce52,	// (0x00037662) popup_note2_image_window_g2_ParamLimits

0xce52,	// (0x00037662) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0003a497) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0003a497) popup_note2_image_window_g

0xce64,	// (0x00037674) popup_note2_image_window_t1_ParamLimits

0xce64,	// (0x00037674) popup_note2_image_window_t1

0xce7c,	// (0x0003768c) popup_note2_image_window_t2_ParamLimits

0xce7c,	// (0x0003768c) popup_note2_image_window_t2

0xce94,	// (0x000376a4) popup_note2_image_window_t3_ParamLimits

0xce94,	// (0x000376a4) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0003a49c) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0003a49c) popup_note2_image_window_t

0xa16e,	// (0x0003497e) popup_note2_wait_window_g1_ParamLimits

0xa16e,	// (0x0003497e) popup_note2_wait_window_g1

0xceb0,	// (0x000376c0) popup_note2_wait_window_g2_ParamLimits

0xceb0,	// (0x000376c0) popup_note2_wait_window_g2

0xa186,	// (0x00034996) popup_note2_wait_window_g3_ParamLimits

0xa186,	// (0x00034996) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x0003a4a3) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x0003a4a3) popup_note2_wait_window_g

0xcebc,	// (0x000376cc) popup_note2_wait_window_t1_ParamLimits

0xcebc,	// (0x000376cc) popup_note2_wait_window_t1

0xceda,	// (0x000376ea) popup_note2_wait_window_t2_ParamLimits

0xceda,	// (0x000376ea) popup_note2_wait_window_t2

0xcef8,	// (0x00037708) popup_note2_wait_window_t3_ParamLimits

0xcef8,	// (0x00037708) popup_note2_wait_window_t3

0xcf0a,	// (0x0003771a) popup_note2_wait_window_t4_ParamLimits

0xcf0a,	// (0x0003771a) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x0003a4aa) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x0003a4aa) popup_note2_wait_window_t

0xcf1c,	// (0x0003772c) wait_bar2_pane_ParamLimits

0xcf1c,	// (0x0003772c) wait_bar2_pane

0xcf34,	// (0x00037744) popup_snote2_single_text_window_g1_ParamLimits

0xcf34,	// (0x00037744) popup_snote2_single_text_window_g1

0xcf5c,	// (0x0003776c) popup_snote2_single_text_window_t1_ParamLimits

0xcf5c,	// (0x0003776c) popup_snote2_single_text_window_t1

0xcfa8,	// (0x000377b8) popup_snote2_single_text_window_t2_ParamLimits

0xcfa8,	// (0x000377b8) popup_snote2_single_text_window_t2

0xcff4,	// (0x00037804) popup_snote2_single_text_window_t3_ParamLimits

0xcff4,	// (0x00037804) popup_snote2_single_text_window_t3

0xd035,	// (0x00037845) popup_snote2_single_text_window_t4_ParamLimits

0xd035,	// (0x00037845) popup_snote2_single_text_window_t4

0xd06b,	// (0x0003787b) popup_snote2_single_text_window_t5_ParamLimits

0xd06b,	// (0x0003787b) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x0003a4b3) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x0003a4b3) popup_snote2_single_text_window_t

0xd096,	// (0x000378a6) popup_snote2_single_graphic_window_g1_ParamLimits

0xd096,	// (0x000378a6) popup_snote2_single_graphic_window_g1

0xd0be,	// (0x000378ce) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0be,	// (0x000378ce) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x0003a4be) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x0003a4be) popup_snote2_single_graphic_window_g

0xd0e6,	// (0x000378f6) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0e6,	// (0x000378f6) popup_snote2_single_graphic_window_t1

0xd132,	// (0x00037942) popup_snote2_single_graphic_window_t2_ParamLimits

0xd132,	// (0x00037942) popup_snote2_single_graphic_window_t2

0xcff4,	// (0x00037804) popup_snote2_single_graphic_window_t3_ParamLimits

0xcff4,	// (0x00037804) popup_snote2_single_graphic_window_t3

0xd035,	// (0x00037845) popup_snote2_single_graphic_window_t4_ParamLimits

0xd035,	// (0x00037845) popup_snote2_single_graphic_window_t4

0xd06b,	// (0x0003787b) popup_snote2_single_graphic_window_t5_ParamLimits

0xd06b,	// (0x0003787b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x0003a4c3) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x0003a4c3) popup_snote2_single_graphic_window_t

0xbb62,	// (0x00036372) clock_nsta_pane_cp2_t1

0xbb62,	// (0x00036372) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0003a2d7) clock_nsta_pane_cp2_t

0x5585,	// (0x0002fd95) form_field_data_wide_pane_g1_ParamLimits

0x804c,	// (0x0003285c) form_field_data_wide_pane_g2_ParamLimits

0x804c,	// (0x0003285c) form_field_data_wide_pane_g2

0x8058,	// (0x00032868) form_field_data_wide_pane_g3_ParamLimits

0x8058,	// (0x00032868) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x00039ea7) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x00039ea7) form_field_data_wide_pane_g

0xba3b,	// (0x0003624b) grid_touch_3_pane_ParamLimits

0xba3b,	// (0x0003624b) grid_touch_3_pane

0xd17e,	// (0x0003798e) cell_touch_3_pane_ParamLimits

0xd17e,	// (0x0003798e) cell_touch_3_pane

0xc0c0,	// (0x000368d0) cell_touch_3_pane_g1

0xc0c0,	// (0x000368d0) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0003a35c) cell_touch_3_pane_g

0x7b05,	// (0x00032315) cont_query_data_pane

0x7b0d,	// (0x0003231d) cont_query_data_pane_cp1

0xd1ac,	// (0x000379bc) button_value_adjust_pane_cp7

0xd1b4,	// (0x000379c4) query_popup_pane_cp3

0x875d,	// (0x00032f6d) bg_popup_sub_pane_cp22_ParamLimits

0x594b,	// (0x0003015b) navi_navi_volume_pane_cp2

0x5966,	// (0x00030176) popup_side_volume_key_window_g2

0x5975,	// (0x00030185) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x00039f39) popup_side_volume_key_window_g

0x5992,	// (0x000301a2) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x00039f40) popup_side_volume_key_window_t

0x8a14,	// (0x00033224) popup_side_volume_key_window_ParamLimits

0x51c0,	// (0x0002f9d0) list_double_graphic_pane_g4_ParamLimits

0x51c0,	// (0x0002f9d0) list_double_graphic_pane_g4

0x72b9,	// (0x00031ac9) list_single_2heading_msg_pane_ParamLimits

0x72b9,	// (0x00031ac9) list_single_2heading_msg_pane

0x77b9,	// (0x00031fc9) list_single_2heading_msg_pane_g1_ParamLimits

0x77b9,	// (0x00031fc9) list_single_2heading_msg_pane_g1

0x4fef,	// (0x0002f7ff) list_single_2heading_msg_pane_g2_ParamLimits

0x4fef,	// (0x0002f7ff) list_single_2heading_msg_pane_g2

0x77c5,	// (0x00031fd5) list_single_2heading_msg_pane_g3_ParamLimits

0x77c5,	// (0x00031fd5) list_single_2heading_msg_pane_g3

0x77d1,	// (0x00031fe1) list_single_2heading_msg_pane_g4_ParamLimits

0x77d1,	// (0x00031fe1) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x0003a4ce) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x0003a4ce) list_single_2heading_msg_pane_g

0x77e9,	// (0x00031ff9) list_single_2heading_msg_pane_t1_ParamLimits

0x77e9,	// (0x00031ff9) list_single_2heading_msg_pane_t1

0x7811,	// (0x00032021) list_single_2heading_msg_pane_t2_ParamLimits

0x7811,	// (0x00032021) list_single_2heading_msg_pane_t2

0x7845,	// (0x00032055) list_single_2heading_msg_pane_t3_ParamLimits

0x7845,	// (0x00032055) list_single_2heading_msg_pane_t3

0x787e,	// (0x0003208e) list_single_2heading_msg_pane_t4_ParamLimits

0x787e,	// (0x0003208e) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x0003a4d7) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x0003a4d7) list_single_2heading_msg_pane_t

0x6fd4,	// (0x000317e4) title_pane_g4_ParamLimits

0x6fd4,	// (0x000317e4) title_pane_g4

0x5759,	// (0x0002ff69) title_pane_stacon_g3_ParamLimits

0x5759,	// (0x0002ff69) title_pane_stacon_g3

0xccda,	// (0x000374ea) list_single_2graphic_im_pane_g4_ParamLimits

0xccda,	// (0x000374ea) list_single_2graphic_im_pane_g4

0xabd1,	// (0x000353e1) popup_side_volume_key_window_cp

0xb3ce,	// (0x00035bde) main_idle_act2_pane_t1

0x5df8,	// (0x00030608) toolbar_button_pane_g10

0x7f9b,	// (0x000327ab) popup_toolbar_window_cp1

0xbb53,	// (0x00036363) clock_nsta_pane_cp_t1

0xbb53,	// (0x00036363) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0003a2d2) clock_nsta_pane_cp_t

0x594b,	// (0x0003015b) navi_navi_volume_pane_cp2_ParamLimits

0x595a,	// (0x0003016a) popup_side_volume_key_window_g1_ParamLimits

0x5966,	// (0x00030176) popup_side_volume_key_window_g2_ParamLimits

0x5975,	// (0x00030185) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x00039f39) popup_side_volume_key_window_g_ParamLimits

0x62b1,	// (0x00030ac1) fep_hwr_aid_pane

0x6358,	// (0x00030b68) bg_fep_hwr_top_pane_g4_ParamLimits

0xc130,	// (0x00036940) fep_hwr_top_pane_g1_ParamLimits

0xc142,	// (0x00036952) fep_hwr_top_pane_g2_ParamLimits

0x6378,	// (0x00030b88) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0003a327) fep_hwr_top_pane_g_ParamLimits

0x638d,	// (0x00030b9d) fep_hwr_top_text_pane_ParamLimits

0xa994,	// (0x000351a4) aid_touch_tab_arrow_arrow_2

0xa99d,	// (0x000351ad) aid_touch_tab_arrow_left_2

0x62c5,	// (0x00030ad5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x62fc,	// (0x00030b0c) fep_hwr_prediction_pane

0xc2a2,	// (0x00036ab2) fep_vkb_prediction_pane

0xc3a6,	// (0x00036bb6) fep_vkb_side_pane_g3_ParamLimits

0xc3a6,	// (0x00036bb6) fep_vkb_side_pane_g3

0x6508,	// (0x00030d18) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6574,	// (0x00030d84) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6581,	// (0x00030d91) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0003a3d6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x66b0,	// (0x00030ec0) fep_hwr_prediction_pane_g1

0x66ba,	// (0x00030eca) fep_hwr_prediction_pane_g2

0x66c2,	// (0x00030ed2) fep_hwr_prediction_pane_g3

0x66ca,	// (0x00030eda) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0003a4e0) fep_hwr_prediction_pane_g

0xd1d9,	// (0x000379e9) fep_vkb_prediction_pane_g1

0xd1e3,	// (0x000379f3) fep_vkb_prediction_pane_g2

0xd1eb,	// (0x000379fb) fep_vkb_prediction_pane_g3

0xd1f3,	// (0x00037a03) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x0003a4e9) fep_vkb_prediction_pane_g

0x6131,	// (0x00030941) slider_set_pane_g3

0x6145,	// (0x00030955) slider_set_pane_g4

0x615d,	// (0x0003096d) slider_set_pane_g5

0x6131,	// (0x00030941) slider_set_pane_g6

0x6173,	// (0x00030983) slider_set_pane_g7

0xb047,	// (0x00035857) slider_form_pane_g3

0xb050,	// (0x00035860) slider_form_pane_g4

0xb058,	// (0x00035868) slider_form_pane_g5

0xb047,	// (0x00035857) slider_form_pane_g6

0xb060,	// (0x00035870) slider_form_pane_g7

0xb68b,	// (0x00035e9b) slider_set_pane_vc_g3

0xb694,	// (0x00035ea4) slider_set_pane_vc_g4

0xb69d,	// (0x00035ead) slider_set_pane_vc_g5

0xb68b,	// (0x00035e9b) slider_set_pane_vc_g6

0xb6a6,	// (0x00035eb6) slider_set_pane_vc_g7

0xb68b,	// (0x00035e9b) slider_form_pane_vc_g1

0xb694,	// (0x00035ea4) slider_form_pane_vc_g2

0xb69d,	// (0x00035ead) slider_form_pane_vc_g3

0xb68b,	// (0x00035e9b) slider_form_pane_vc_g4

0xb859,	// (0x00036069) slider_form_pane_vc_g5

0x0004,

0xfa9b,	// (0x0003a2ab) slider_form_pane_vc_g

0x6f8c,	// (0x0003179c) main_idle_act3_pane

0xd1fb,	// (0x00037a0b) ai3_links_pane

0xd204,	// (0x00037a14) popup_ai3_data_window_ParamLimits

0xd204,	// (0x00037a14) popup_ai3_data_window

0x6f8c,	// (0x0003179c) grid_ai3_links_pane

0xd21e,	// (0x00037a2e) cell_ai3_links_pane_ParamLimits

0xd21e,	// (0x00037a2e) cell_ai3_links_pane

0xd236,	// (0x00037a46) bg_popup_sub_pane_cp11

0xd243,	// (0x00037a53) cell_ai3_links_pane_g1

0x6f8c,	// (0x0003179c) bg_popup_sub_pane_cp12

0xd268,	// (0x00037a78) heading_ai3_data_pane

0xd270,	// (0x00037a80) list_ai3_gene_pane

0xd27c,	// (0x00037a8c) popup_ai3_data_window_g1

0xd284,	// (0x00037a94) heading_ai3_data_pane_g1

0xd28c,	// (0x00037a9c) heading_ai3_data_pane_t1

0xd29a,	// (0x00037aaa) list_double_ai3_gene_pane_ParamLimits

0xd29a,	// (0x00037aaa) list_double_ai3_gene_pane

0xd2a7,	// (0x00037ab7) list_single_ai3_gene_pane_ParamLimits

0xd2a7,	// (0x00037ab7) list_single_ai3_gene_pane

0xc085,	// (0x00036895) list_highlight_pane_cp7_ParamLimits

0xc085,	// (0x00036895) list_highlight_pane_cp7

0xd2b4,	// (0x00037ac4) list_single_a13_gene_pane_t1_ParamLimits

0xd2b4,	// (0x00037ac4) list_single_a13_gene_pane_t1

0xd2cb,	// (0x00037adb) list_single_ai3_gene_pane_g1

0xd2d4,	// (0x00037ae4) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x0003a4f2) list_single_ai3_gene_pane_g

0xd2dc,	// (0x00037aec) list_double_ai3_gene_pane_g1_ParamLimits

0xd2dc,	// (0x00037aec) list_double_ai3_gene_pane_g1

0xd2e8,	// (0x00037af8) list_double_ai3_gene_pane_t1_ParamLimits

0xd2e8,	// (0x00037af8) list_double_ai3_gene_pane_t1

0xd304,	// (0x00037b14) list_double_ai3_gene_pane_t2_ParamLimits

0xd304,	// (0x00037b14) list_double_ai3_gene_pane_t2

0xd31a,	// (0x00037b2a) list_double_ai3_gene_pane_t3_ParamLimits

0xd31a,	// (0x00037b2a) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x0003a4f7) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x0003a4f7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x77af,	// (0x00031fbf) aid_size_min_col_2

0xd1c5,	// (0x000379d5) aid_size_min_msg_ParamLimits

0xd1c5,	// (0x000379d5) aid_size_min_msg

0xc4a6,	// (0x00036cb6) fep_vkb_top_text_pane_g2_ParamLimits

0xc4a6,	// (0x00036cb6) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0003a357) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0003a357) fep_vkb_top_text_pane_g

0x6f8c,	// (0x0003179c) main_hc_apps_shell_pane

0xd337,	// (0x00037b47) grid_hc_apps_pane_ParamLimits

0xd337,	// (0x00037b47) grid_hc_apps_pane

0xd346,	// (0x00037b56) list_hc_apps_pane

0xd34e,	// (0x00037b5e) scroll_pane_cp37_ParamLimits

0xd34e,	// (0x00037b5e) scroll_pane_cp37

0xd35a,	// (0x00037b6a) cell_hc_apps_pane_ParamLimits

0xd35a,	// (0x00037b6a) cell_hc_apps_pane

0xd408,	// (0x00037c18) cell_hc_apps_pane_g1_ParamLimits

0xd408,	// (0x00037c18) cell_hc_apps_pane_g1

0xd439,	// (0x00037c49) cell_hc_apps_pane_g2_ParamLimits

0xd439,	// (0x00037c49) cell_hc_apps_pane_g2

0xd455,	// (0x00037c65) cell_hc_apps_pane_g3_ParamLimits

0xd455,	// (0x00037c65) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x0003a4fe) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x0003a4fe) cell_hc_apps_pane_g

0xd477,	// (0x00037c87) cell_hc_apps_pane_t1_ParamLimits

0xd477,	// (0x00037c87) cell_hc_apps_pane_t1

0x7a4f,	// (0x0003225f) grid_highlight_pane_cp10_ParamLimits

0x7a4f,	// (0x0003225f) grid_highlight_pane_cp10

0xd4b7,	// (0x00037cc7) list_single_hc_apps_pane_ParamLimits

0xd4b7,	// (0x00037cc7) list_single_hc_apps_pane

0xd513,	// (0x00037d23) list_single_hc_apps_pane_g1

0x78a3,	// (0x000320b3) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x0003a505) list_single_hc_apps_pane_g

0x78bc,	// (0x000320cc) list_single_hc_apps_pane_g2_copy1

0x78d8,	// (0x000320e8) list_single_hc_apps_pane_t1

0x7080,	// (0x00031890) bg_set_opt_pane_cp_ParamLimits

0x4f3f,	// (0x0002f74f) setting_slider_pane_t1_ParamLimits

0x4f58,	// (0x0002f768) setting_slider_pane_t2_ParamLimits

0x4f72,	// (0x0002f782) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00039d8a) setting_slider_pane_t_ParamLimits

0x4f8a,	// (0x0002f79a) slider_set_pane_ParamLimits

0x5c7a,	// (0x0003048a) control_pane_g5_ParamLimits

0x5c7a,	// (0x0003048a) control_pane_g5

0xae96,	// (0x000356a6) slider_set_pane_g1_ParamLimits

0x6125,	// (0x00030935) slider_set_pane_g2_ParamLimits

0x6131,	// (0x00030941) slider_set_pane_g3_ParamLimits

0x6145,	// (0x00030955) slider_set_pane_g4_ParamLimits

0x615d,	// (0x0003096d) slider_set_pane_g5_ParamLimits

0x6131,	// (0x00030941) slider_set_pane_g6_ParamLimits

0x6173,	// (0x00030983) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0003a185) slider_set_pane_g_ParamLimits

0x8af5,	// (0x00033305) navi_icon_text_pane_ParamLimits

0x95cc,	// (0x00033ddc) aid_fill_nsta_2_ParamLimits

0x960b,	// (0x00033e1b) aid_touch_tab_arrow_left_ParamLimits

0x9617,	// (0x00033e27) aid_touch_tab_arrow_right_ParamLimits

0x9683,	// (0x00033e93) clock_nsta_pane_ParamLimits

0xa970,	// (0x00035180) navi_icon_pane_g1_ParamLimits

0xa97f,	// (0x0003518f) navi_text_pane_t1_ParamLimits

0xbc5d,	// (0x0003646d) navi_icon_text_pane_g1_ParamLimits

0xbc6c,	// (0x0003647c) navi_icon_text_pane_t1_ParamLimits

0xd513,	// (0x00037d23) list_single_hc_apps_pane_g1_ParamLimits

0x78a3,	// (0x000320b3) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x0003a505) list_single_hc_apps_pane_g_ParamLimits

0x78bc,	// (0x000320cc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x78d8,	// (0x000320e8) list_single_hc_apps_pane_t1_ParamLimits

0x4e53,	// (0x0002f663) popup_toolbar2_fixed_window_ParamLimits

0x4e53,	// (0x0002f663) popup_toolbar2_fixed_window

0x94e2,	// (0x00033cf2) popup_toolbar2_float_window

0x6f8c,	// (0x0003179c) bg_popup_sub_pane_cp27

0xd52c,	// (0x00037d3c) grid_toolbar2_float_pane

0x6f8c,	// (0x0003179c) bg_popup_sub_pane_cp26

0xd52c,	// (0x00037d3c) grid_toolbar2_fixed_pane

0xd534,	// (0x00037d44) cell_toolbar2_fixed_pane_ParamLimits

0xd534,	// (0x00037d44) cell_toolbar2_fixed_pane

0xd544,	// (0x00037d54) cell_toolbar2_fixed_pane_g1

0xd54d,	// (0x00037d5d) toolbar2_fixed_button_pane

0x9a93,	// (0x000342a3) toolbar2_fixed_button_pane_g1

0x9aa3,	// (0x000342b3) toolbar2_fixed_button_pane_g2

0x9a9b,	// (0x000342ab) toolbar2_fixed_button_pane_g3

0x9ab3,	// (0x000342c3) toolbar2_fixed_button_pane_g4

0x9aab,	// (0x000342bb) toolbar2_fixed_button_pane_g5

0x9abb,	// (0x000342cb) toolbar2_fixed_button_pane_g6

0x9ac3,	// (0x000342d3) toolbar2_fixed_button_pane_g7

0x9ad3,	// (0x000342e3) toolbar2_fixed_button_pane_g8

0x9acb,	// (0x000342db) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0003a087) toolbar2_fixed_button_pane_g

0xd555,	// (0x00037d65) cell_toolbar2_float_pane_ParamLimits

0xd555,	// (0x00037d65) cell_toolbar2_float_pane

0xd566,	// (0x00037d76) cell_toolbar2_float_pane_g1

0xd54d,	// (0x00037d5d) toolbar2_fixed_button_pane_cp

0xc202,	// (0x00036a12) fep_vkb_accented_list_pane_ParamLimits

0xc202,	// (0x00036a12) fep_vkb_accented_list_pane

0x64e8,	// (0x00030cf8) bg_popup_fep_shadow_pane_g9

0x8c97,	// (0x000334a7) bg_popup_fep_shadow_pane_cp3

0x8193,	// (0x000329a3) list_accented_list_pane

0xd56f,	// (0x00037d7f) list_single_accented_list_pane_ParamLimits

0xd56f,	// (0x00037d7f) list_single_accented_list_pane

0x8c97,	// (0x000334a7) list_highlight_pane_cp10

0xd580,	// (0x00037d90) list_single_accented_list_pane_t1

0x9432,	// (0x00033c42) popup_slider_window_ParamLimits

0x9432,	// (0x00033c42) popup_slider_window

0xd1bc,	// (0x000379cc) aid_indentation_list_msg

0xd63a,	// (0x00037e4a) bg_popup_window_pane_cp19

0xd6a4,	// (0x00037eb4) popup_slider_window_g1

0xd6c0,	// (0x00037ed0) popup_slider_window_g2

0xd6dc,	// (0x00037eec) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x0003a50a) popup_slider_window_g

0xd738,	// (0x00037f48) popup_slider_window_t1

0xd7ac,	// (0x00037fbc) small_volume_slider_vertical_pane

0xc0c0,	// (0x000368d0) small_volume_slider_vertical_pane_g1

0xc0c0,	// (0x000368d0) small_volume_slider_vertical_pane_g2

0xd7c8,	// (0x00037fd8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x0003a51c) small_volume_slider_vertical_pane_g

0x4c0b,	// (0x0002f41b) area_side_right_pane_ParamLimits

0x4c0b,	// (0x0002f41b) area_side_right_pane

0x66d2,	// (0x00030ee2) aid_size_side_button_ParamLimits

0x66d2,	// (0x00030ee2) aid_size_side_button

0x66e6,	// (0x00030ef6) grid_sctrl_middle_pane_ParamLimits

0x66e6,	// (0x00030ef6) grid_sctrl_middle_pane

0x6706,	// (0x00030f16) sctrl_sk_bottom_pane

0x6717,	// (0x00030f27) sctrl_sk_top_pane

0x6729,	// (0x00030f39) aid_touch_sctrl_top

0x6736,	// (0x00030f46) bg_sctrl_sk_pane_ParamLimits

0x6736,	// (0x00030f46) bg_sctrl_sk_pane

0x6744,	// (0x00030f54) sctrl_sk_top_pane_g1

0x6751,	// (0x00030f61) sctrl_sk_top_pane_t1

0x6729,	// (0x00030f39) aid_touch_sctrl_bottom

0x6736,	// (0x00030f46) bg_sctrl_sk_pane_cp_ParamLimits

0x6736,	// (0x00030f46) bg_sctrl_sk_pane_cp

0x676c,	// (0x00030f7c) sctrl_sk_bottom_pane_g1

0x6751,	// (0x00030f61) sctrl_sk_bottom_pane_t1

0x6775,	// (0x00030f85) cell_sctrl_middle_pane_ParamLimits

0x6775,	// (0x00030f85) cell_sctrl_middle_pane

0x6790,	// (0x00030fa0) aid_touch_sctrl_middle_ParamLimits

0x6790,	// (0x00030fa0) aid_touch_sctrl_middle

0x67a2,	// (0x00030fb2) bg_sctrl_middle_pane_ParamLimits

0x67a2,	// (0x00030fb2) bg_sctrl_middle_pane

0x6508,	// (0x00030d18) cell_sctrl_middle_pane_g1_ParamLimits

0x6508,	// (0x00030d18) cell_sctrl_middle_pane_g1

0x67b0,	// (0x00030fc0) cell_sctrl_middle_pane_g2_ParamLimits

0x67b0,	// (0x00030fc0) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x0003a528) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x0003a528) cell_sctrl_middle_pane_g

0x9a93,	// (0x000342a3) bg_sctrl_middle_pane_g1

0x9a9b,	// (0x000342ab) bg_sctrl_middle_pane_g2

0x9aa3,	// (0x000342b3) bg_sctrl_middle_pane_g3

0x9aab,	// (0x000342bb) bg_sctrl_middle_pane_g4

0x9ab3,	// (0x000342c3) bg_sctrl_middle_pane_g5

0x9abb,	// (0x000342cb) bg_sctrl_middle_pane_g6

0x9ac3,	// (0x000342d3) bg_sctrl_middle_pane_g7

0x9acb,	// (0x000342db) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x0003a52d) bg_sctrl_middle_pane_g

0x9ad3,	// (0x000342e3) bg_sctrl_middle_pane_g8_copy1

0x9a93,	// (0x000342a3) bg_sctrl_sk_pane_g1

0x9aa3,	// (0x000342b3) bg_sctrl_sk_pane_g2

0x9a9b,	// (0x000342ab) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0003a087) bg_sctrl_sk_pane_g

0x7f61,	// (0x00032771) aid_size_touch_scroll_bar

0x9ab3,	// (0x000342c3) bg_sctrl_sk_pane_g4

0x9aab,	// (0x000342bb) bg_sctrl_sk_pane_g5

0x9abb,	// (0x000342cb) bg_sctrl_sk_pane_g6

0x9ac3,	// (0x000342d3) bg_sctrl_sk_pane_g7

0x9ad3,	// (0x000342e3) bg_sctrl_sk_pane_g8

0x9acb,	// (0x000342db) bg_sctrl_sk_pane_g9

0x909d,	// (0x000338ad) popup_fep_china_hwr2_fs_candidate_window

0x90a7,	// (0x000338b7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x90a7,	// (0x000338b7) popup_fep_china_hwr2_fs_control_window

0x6508,	// (0x00030d18) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x0003a523) sctrl_sk_top_pane_g

0xd7d1,	// (0x00037fe1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7d1,	// (0x00037fe1) aid_fep_china_hwr2_fs_cell

0xd7e3,	// (0x00037ff3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7e3,	// (0x00037ff3) bg_popup_fep_shadow_pane_cp4

0xd7fa,	// (0x0003800a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7fa,	// (0x0003800a) bg_popup_fep_shadow_pane_cp5

0xd80c,	// (0x0003801c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd80c,	// (0x0003801c) popup_fep_china_hwr2_fs_control_bar_grid

0xd81c,	// (0x0003802c) popup_fep_china_hwr2_fs_control_funtion_grid

0xd824,	// (0x00038034) aid_fep_china_hwr2_fs_candi_cell

0x6f8c,	// (0x0003179c) bg_popup_fep_shadow_pane_cp6

0xd82e,	// (0x0003803e) popup_fep_china_hwr2_fs_candidate_grid

0xd838,	// (0x00038048) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd838,	// (0x00038048) cell_fep_china_hwr2_fs_funtion_grid

0xc0c0,	// (0x000368d0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd850,	// (0x00038060) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd850,	// (0x00038060) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd85e,	// (0x0003806e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd85e,	// (0x0003806e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x0003a53e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x0003a53e) cell_fep_china_hwr2_fs_funtion_grid_g

0xd874,	// (0x00038084) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd874,	// (0x00038084) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd889,	// (0x00038099) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd889,	// (0x00038099) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x0003a543) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x0003a543) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8a5,	// (0x000380b5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8ad,	// (0x000380bd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8b5,	// (0x000380c5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x0003a548) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8bd,	// (0x000380cd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8bd,	// (0x000380cd) cell_fep_china_hwr2_fs_candidate_grid

0xd8d6,	// (0x000380e6) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8de,	// (0x000380ee) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc0c0,	// (0x000368d0) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc0c0,	// (0x000368d0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0003a35c) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8e6,	// (0x000380f6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9690,	// (0x00033ea0) clock_nsta_pane_cp_24_ParamLimits

0x9690,	// (0x00033ea0) clock_nsta_pane_cp_24

0x970e,	// (0x00033f1e) indicator_nsta_pane_cp_24_ParamLimits

0x970e,	// (0x00033f1e) indicator_nsta_pane_cp_24

0xa7e0,	// (0x00034ff0) heading_pane_g1

0x0001,

0xf8dc,	// (0x0003a0ec) heading_pane_g

0xb217,	// (0x00035a27) grid_sct_catagory_button_pane

0xb247,	// (0x00035a57) scroll_pane_cp5_ParamLimits

0xbcb1,	// (0x000364c1) button_value_adjust_pane_cp5_ParamLimits

0xbcb1,	// (0x000364c1) button_value_adjust_pane_cp5

0xbd90,	// (0x000365a0) form2_midp_time_pane_ParamLimits

0xd8f4,	// (0x00038104) cell_sct_catagory_button_pane_ParamLimits

0xd8f4,	// (0x00038104) cell_sct_catagory_button_pane

0xc085,	// (0x00036895) bg_button_pane_cp01_ParamLimits

0xc085,	// (0x00036895) bg_button_pane_cp01

0xc0c0,	// (0x000368d0) cell_sct_catagory_button_pane_g1

0x9471,	// (0x00033c81) popup_tb_extension_window

0xd906,	// (0x00038116) aid_size_cell_ext_ParamLimits

0xd906,	// (0x00038116) aid_size_cell_ext

0x7a4f,	// (0x0003225f) bg_tb_trans_pane_cp1_ParamLimits

0x7a4f,	// (0x0003225f) bg_tb_trans_pane_cp1

0xd926,	// (0x00038136) grid_tb_ext_pane_ParamLimits

0xd926,	// (0x00038136) grid_tb_ext_pane

0xd954,	// (0x00038164) cell_tb_ext_pane_ParamLimits

0xd954,	// (0x00038164) cell_tb_ext_pane

0xd96b,	// (0x0003817b) cell_tb_ext_pane_g1_ParamLimits

0xd96b,	// (0x0003817b) cell_tb_ext_pane_g1

0xd988,	// (0x00038198) cell_tb_ext_pane_t1

0x7a4f,	// (0x0003225f) list_highlight_pane_cp11_ParamLimits

0x7a4f,	// (0x0003225f) list_highlight_pane_cp11

0x4e72,	// (0x0002f682) popup_uni_indicator_window_ParamLimits

0x4e72,	// (0x0002f682) popup_uni_indicator_window

0x8032,	// (0x00032842) bg_popup_sub_pane_cp14

0xd9a3,	// (0x000381b3) list_uniindi_pane

0xd9af,	// (0x000381bf) uniindi_top_pane

0x7a4f,	// (0x0003225f) bg_uniindi_top_pane

0xd9ce,	// (0x000381de) uniindi_top_pane_g1

0xd9e4,	// (0x000381f4) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x0003a54f) uniindi_top_pane_g

0xda0e,	// (0x0003821e) uniindi_top_pane_t1

0xda38,	// (0x00038248) list_single_uniindi_pane_ParamLimits

0xda38,	// (0x00038248) list_single_uniindi_pane

0xc0c0,	// (0x000368d0) bg_uniindi_top_pane_g1

0xda4b,	// (0x0003825b) list_single_uniindi_pane_g1

0xda5e,	// (0x0003826e) list_single_uniindi_pane_t1

0x4ce8,	// (0x0002f4f8) control_bg_pane

0xda83,	// (0x00038293) bg_sctrl_sk_pane_cp1

0xda8c,	// (0x0003829c) bg_sctrl_sk_pane_cp2

0xda95,	// (0x000382a5) control_bg_pane_g1

0xda9e,	// (0x000382ae) control_bg_pane_g2

0x0001,

0xfd48,	// (0x0003a558) control_bg_pane_g

0xbae5,	// (0x000362f5) cell_indicator_nsta_pane_g1_ParamLimits

0xbaf3,	// (0x00036303) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0003a2c0) cell_indicator_nsta_pane_g_ParamLimits

0x756c,	// (0x00031d7c) form2_midp_time_pane_t1_ParamLimits

0x7da3,	// (0x000325b3) main_idle_act4_pane_ParamLimits

0x7da3,	// (0x000325b3) main_idle_act4_pane

0x9471,	// (0x00033c81) popup_tb_extension_window_ParamLimits

0xd944,	// (0x00038154) tb_ext_find_pane_ParamLimits

0xd944,	// (0x00038154) tb_ext_find_pane

0xdaa7,	// (0x000382b7) ai_gene_pane_1_cp1

0x8ddc,	// (0x000335ec) ai_gene_pane_2_cp1

0xdaaf,	// (0x000382bf) list_single_idle_plugin_calendar_pane

0xdab8,	// (0x000382c8) list_single_idle_plugin_notification_pane

0xdac1,	// (0x000382d1) list_single_idle_plugin_player_pane

0xdaca,	// (0x000382da) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdaca,	// (0x000382da) list_single_idle_plugin_shortcut_pane

0xdaec,	// (0x000382fc) main_idle_act4_pane_t1

0xdafe,	// (0x0003830e) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x0003a55d) main_idle_act4_pane_t

0xdb10,	// (0x00038320) middle_sk_idle_act4_pane_ParamLimits

0xdb10,	// (0x00038320) middle_sk_idle_act4_pane

0xdb26,	// (0x00038336) popup_clock_digital_analogue_window_cp2

0xdb40,	// (0x00038350) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb40,	// (0x00038350) shortcut_wheel_idle_act4_pane

0xc0c0,	// (0x000368d0) shortcut_wheel_idle_act4_pane_g1

0xc0c0,	// (0x000368d0) shortcut_wheel_idle_act4_pane_g2

0xc0c0,	// (0x000368d0) shortcut_wheel_idle_act4_pane_g3

0xc0c0,	// (0x000368d0) shortcut_wheel_idle_act4_pane_g4

0xc0c0,	// (0x000368d0) shortcut_wheel_idle_act4_pane_g5

0xdb54,	// (0x00038364) shortcut_wheel_idle_act4_pane_g6

0xdb5c,	// (0x0003836c) shortcut_wheel_idle_act4_pane_g7

0xdb64,	// (0x00038374) shortcut_wheel_idle_act4_pane_g8

0xdb6c,	// (0x0003837c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x0003a562) shortcut_wheel_idle_act4_pane_g

0xc352,	// (0x00036b62) middle_sk_idle_act4_pane_g1_ParamLimits

0xc352,	// (0x00036b62) middle_sk_idle_act4_pane_g1

0xdbd0,	// (0x000383e0) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbd0,	// (0x000383e0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x0003a585) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x0003a585) middle_sk_idle_act4_pane_g

0xdbdc,	// (0x000383ec) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbdc,	// (0x000383ec) middle_sk_idle_act4_pane_t1

0xdbf9,	// (0x00038409) grid_ai_shortcut_pane_ParamLimits

0xdbf9,	// (0x00038409) grid_ai_shortcut_pane

0xdc12,	// (0x00038422) list_highlight_pane_cp16_ParamLimits

0xdc12,	// (0x00038422) list_highlight_pane_cp16

0xdc1f,	// (0x0003842f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc1f,	// (0x0003842f) list_single_idle_plugin_shortcut_pane_g1

0xdc2b,	// (0x0003843b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc2b,	// (0x0003843b) list_single_idle_plugin_shortcut_pane_g2

0xdc43,	// (0x00038453) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc43,	// (0x00038453) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x0003a58a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x0003a58a) list_single_idle_plugin_shortcut_pane_g

0xdc56,	// (0x00038466) cell_ai_shortcut_pane_ParamLimits

0xdc56,	// (0x00038466) cell_ai_shortcut_pane

0xdc7a,	// (0x0003848a) cell_ai_shortcut_pane_g1_ParamLimits

0xdc7a,	// (0x0003848a) cell_ai_shortcut_pane_g1

0xdaa7,	// (0x000382b7) ai_gene_pane_1_cp2

0xdc9c,	// (0x000384ac) ai_gene_pane_2_cp2

0xdca4,	// (0x000384b4) list_highlight_pane_cp15

0xdcad,	// (0x000384bd) list_single_idle_plugin_calendar_pane_g1

0xdca4,	// (0x000384b4) list_highlight_pane_cp17

0xdcb5,	// (0x000384c5) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcbd,	// (0x000384cd) list_single_idle_plugin_player_pane_g1

0xb470,	// (0x00035c80) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x0003a591) list_single_idle_plugin_player_pane_g

0xdcc5,	// (0x000384d5) list_single_idle_plugin_player_pane_t1

0xdcd3,	// (0x000384e3) list_single_idle_plugin_player_pane_t2

0xdce1,	// (0x000384f1) list_single_idle_plugin_player_pane_t3

0xdcef,	// (0x000384ff) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x0003a596) list_single_idle_plugin_player_pane_t

0xdcfd,	// (0x0003850d) wait_bar_pane_cp15

0xdd05,	// (0x00038515) grid_ai_notification_pane

0xb470,	// (0x00035c80) list_single_idle_plugin_notification_pane_g1

0xdd0e,	// (0x0003851e) cell_ai_notification_pane_ParamLimits

0xdd0e,	// (0x0003851e) cell_ai_notification_pane

0xdd1b,	// (0x0003852b) cell_ai_notification_pane_g1

0xdd23,	// (0x00038533) cell_ai_notification_pane_t1

0xdd31,	// (0x00038541) tb_ext_find_button_pane

0xdd39,	// (0x00038549) tb_ext_find_pane_g1

0xdd41,	// (0x00038551) tb_ext_find_pane_t1

0x8698,	// (0x00032ea8) tb_ext_find_button_pane_g1

0xdd4f,	// (0x0003855f) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x0003a59f) tb_ext_find_button_pane_g

0xdaec,	// (0x000382fc) main_idle_act4_pane_t1_ParamLimits

0xdafe,	// (0x0003830e) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x0003a55d) main_idle_act4_pane_t_ParamLimits

0xdb26,	// (0x00038336) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb34,	// (0x00038344) sat_plugin_idle_act4_pane_ParamLimits

0xdb34,	// (0x00038344) sat_plugin_idle_act4_pane

0xdd58,	// (0x00038568) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd58,	// (0x00038568) sat_plugin_idle_act4_pane_t1

0xdd6b,	// (0x0003857b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd6b,	// (0x0003857b) sat_plugin_idle_act4_pane_t2

0xdd7e,	// (0x0003858e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd7e,	// (0x0003858e) sat_plugin_idle_act4_pane_t3

0xdd91,	// (0x000385a1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd91,	// (0x000385a1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x0003a5a4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x0003a5a4) sat_plugin_idle_act4_pane_t

0x4dad,	// (0x0002f5bd) popup_battery_window_ParamLimits

0x4dad,	// (0x0002f5bd) popup_battery_window

0x7a4f,	// (0x0003225f) bg_popup_sub_pane_cp25_ParamLimits

0x7a4f,	// (0x0003225f) bg_popup_sub_pane_cp25

0xdda4,	// (0x000385b4) popup_battery_window_g1_ParamLimits

0xdda4,	// (0x000385b4) popup_battery_window_g1

0xddb0,	// (0x000385c0) popup_battery_window_t1_ParamLimits

0xddb0,	// (0x000385c0) popup_battery_window_t1

0xddc2,	// (0x000385d2) popup_battery_window_t2_ParamLimits

0xddc2,	// (0x000385d2) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x0003a5ad) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x0003a5ad) popup_battery_window_t

0x8cab,	// (0x000334bb) midp_canvas_pane_ParamLimits

0x8d20,	// (0x00033530) midp_keypad_pane_ParamLimits

0x8d20,	// (0x00033530) midp_keypad_pane

0x8ffd,	// (0x0003380d) main_midp_pane_ParamLimits

0xbb71,	// (0x00036381) signal_pane_g2_cp_ParamLimits

0xdddf,	// (0x000385ef) aid_size_cell_midp_keypad_ParamLimits

0xdddf,	// (0x000385ef) aid_size_cell_midp_keypad

0xddf9,	// (0x00038609) midp_keyp_game_grid_pane_ParamLimits

0xddf9,	// (0x00038609) midp_keyp_game_grid_pane

0xde19,	// (0x00038629) midp_keyp_rocker_pane_ParamLimits

0xde19,	// (0x00038629) midp_keyp_rocker_pane

0xde52,	// (0x00038662) midp_keyp_sk_left_pane_ParamLimits

0xde52,	// (0x00038662) midp_keyp_sk_left_pane

0xdeac,	// (0x000386bc) midp_keyp_sk_right_pane_ParamLimits

0xdeac,	// (0x000386bc) midp_keyp_sk_right_pane

0x6f8c,	// (0x0003179c) bg_button_pane_cp03

0xdf06,	// (0x00038716) midp_keyp_sk_left_pane_g1

0x6f8c,	// (0x0003179c) bg_button_pane_cp04

0xdf06,	// (0x00038716) midp_keyp_sk_right_pane_g1

0xc0c0,	// (0x000368d0) midp_keyp_rocker_pane_g1

0xdf0f,	// (0x0003871f) keyp_game_cell_pane_ParamLimits

0xdf0f,	// (0x0003871f) keyp_game_cell_pane

0x6f8c,	// (0x0003179c) bg_button_pane_cp02

0xdf22,	// (0x00038732) keyp_game_cell_pane_g1

0x4df1,	// (0x0002f601) popup_fep_vkb2_window_ParamLimits

0x4df1,	// (0x0002f601) popup_fep_vkb2_window

0x67ce,	// (0x00030fde) aid_size_cell_vkb2_ParamLimits

0x67ce,	// (0x00030fde) aid_size_cell_vkb2

0x6822,	// (0x00031032) popup_fep_vkb2_window_g1_ParamLimits

0x6822,	// (0x00031032) popup_fep_vkb2_window_g1

0x686a,	// (0x0003107a) vkb2_area_bottom_pane_ParamLimits

0x686a,	// (0x0003107a) vkb2_area_bottom_pane

0x68b6,	// (0x000310c6) vkb2_area_keypad_pane_ParamLimits

0x68b6,	// (0x000310c6) vkb2_area_keypad_pane

0x68f8,	// (0x00031108) vkb2_area_top_pane_ParamLimits

0x68f8,	// (0x00031108) vkb2_area_top_pane

0x6972,	// (0x00031182) vkb2_top_entry_pane_ParamLimits

0x6972,	// (0x00031182) vkb2_top_entry_pane

0x699c,	// (0x000311ac) vkb2_top_grid_left_pane_ParamLimits

0x699c,	// (0x000311ac) vkb2_top_grid_left_pane

0x69ba,	// (0x000311ca) vkb2_top_grid_right_pane_ParamLimits

0x69ba,	// (0x000311ca) vkb2_top_grid_right_pane

0x69d8,	// (0x000311e8) vkb2_cell_keypad_pane_ParamLimits

0x69d8,	// (0x000311e8) vkb2_cell_keypad_pane

0x6aa9,	// (0x000312b9) vkb2_area_bottom_grid_pane_ParamLimits

0x6aa9,	// (0x000312b9) vkb2_area_bottom_grid_pane

0x6acf,	// (0x000312df) vkb2_area_bottom_pane_g1_ParamLimits

0x6acf,	// (0x000312df) vkb2_area_bottom_pane_g1

0x6af3,	// (0x00031303) vkb2_area_bottom_pane_g2_ParamLimits

0x6af3,	// (0x00031303) vkb2_area_bottom_pane_g2

0x6b21,	// (0x00031331) vkb2_area_bottom_pane_g3_ParamLimits

0x6b21,	// (0x00031331) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x0003a5b2) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x0003a5b2) vkb2_area_bottom_pane_g

0x6b82,	// (0x00031392) vkb2_top_cell_left_pane_ParamLimits

0x6b82,	// (0x00031392) vkb2_top_cell_left_pane

0xdf33,	// (0x00038743) vkb2_top_entry_pane_g1_ParamLimits

0xdf33,	// (0x00038743) vkb2_top_entry_pane_g1

0xdf41,	// (0x00038751) vkb2_top_entry_pane_t1_ParamLimits

0xdf41,	// (0x00038751) vkb2_top_entry_pane_t1

0xdf73,	// (0x00038783) vkb2_top_entry_pane_t2_ParamLimits

0xdf73,	// (0x00038783) vkb2_top_entry_pane_t2

0xdfa5,	// (0x000387b5) vkb2_top_entry_pane_t3_ParamLimits

0xdfa5,	// (0x000387b5) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x0003a5b9) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x0003a5b9) vkb2_top_entry_pane_t

0x6bcf,	// (0x000313df) vkb2_top_grid_right_pane_g1_ParamLimits

0x6bcf,	// (0x000313df) vkb2_top_grid_right_pane_g1

0x6be5,	// (0x000313f5) vkb2_top_grid_right_pane_g2_ParamLimits

0x6be5,	// (0x000313f5) vkb2_top_grid_right_pane_g2

0x6bfd,	// (0x0003140d) vkb2_top_grid_right_pane_g3_ParamLimits

0x6bfd,	// (0x0003140d) vkb2_top_grid_right_pane_g3

0x6c15,	// (0x00031425) vkb2_top_grid_right_pane_g4_ParamLimits

0x6c15,	// (0x00031425) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x0003a5c0) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x0003a5c0) vkb2_top_grid_right_pane_g

0x6c2b,	// (0x0003143b) vkb2_top_cell_left_pane_g1

0x6c42,	// (0x00031452) vkb2_cell_keypad_pane_g1_ParamLimits

0x6c42,	// (0x00031452) vkb2_cell_keypad_pane_g1

0xdfc9,	// (0x000387d9) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfc9,	// (0x000387d9) vkb2_cell_keypad_pane_t1

0x6c50,	// (0x00031460) vkb2_cell_bottom_grid_pane_ParamLimits

0x6c50,	// (0x00031460) vkb2_cell_bottom_grid_pane

0x6c89,	// (0x00031499) vkb2_cell_bottom_grid_pane_g1

0xdb74,	// (0x00038384) aid_call2_pane_cp02

0xdb7c,	// (0x0003838c) aid_call_pane_cp02

0xdb84,	// (0x00038394) clock_digital_number_pane_cp10

0xdb8c,	// (0x0003839c) clock_digital_number_pane_cp11

0xdb94,	// (0x000383a4) clock_digital_number_pane_cp12

0xdb9c,	// (0x000383ac) clock_digital_number_pane_cp13

0xdba4,	// (0x000383b4) clock_digital_separator_pane_cp10

0x8698,	// (0x00032ea8) popup_clock_digital_analogue_window_cp2_g1

0x8698,	// (0x00032ea8) popup_clock_digital_analogue_window_cp2_g2

0xdbac,	// (0x000383bc) popup_clock_digital_analogue_window_cp2_g3

0x8698,	// (0x00032ea8) popup_clock_digital_analogue_window_cp2_g4

0xdbac,	// (0x000383bc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x0003a575) popup_clock_digital_analogue_window_cp2_g

0xdbb4,	// (0x000383c4) popup_clock_digital_analogue_window_cp2_t1

0xdbc2,	// (0x000383d2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x0003a580) popup_clock_digital_analogue_window_cp2_t

0xc0c0,	// (0x000368d0) clock_digital_number_pane_cp10_g1

0xc0c0,	// (0x000368d0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0003a35c) clock_digital_number_pane_cp10_g

0xc0c0,	// (0x000368d0) clock_digital_separator_pane_cp10_g1

0xc0c0,	// (0x000368d0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0003a35c) clock_digital_separator_pane_cp10_g

0xd9f0,	// (0x00038200) uniindi_top_pane_g3

0xda01,	// (0x00038211) uniindi_top_pane_g4

0x6a63,	// (0x00031273) vkb2_row_keypad_pane_ParamLimits

0x6a63,	// (0x00031273) vkb2_row_keypad_pane

0x6ca5,	// (0x000314b5) vkb2_cell_t_keypad_pane_ParamLimits

0x6ca5,	// (0x000314b5) vkb2_cell_t_keypad_pane

0x6cb5,	// (0x000314c5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6cb5,	// (0x000314c5) vkb2_cell_t_keypad_pane_cp08

0x6cc8,	// (0x000314d8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6cc8,	// (0x000314d8) vkb2_cell_t_keypad_pane_cp09

0x6cdc,	// (0x000314ec) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6cdc,	// (0x000314ec) vkb2_cell_t_keypad_pane_cp01

0x6ced,	// (0x000314fd) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6ced,	// (0x000314fd) vkb2_cell_t_keypad_pane_cp02

0x6cfe,	// (0x0003150e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6cfe,	// (0x0003150e) vkb2_cell_t_keypad_pane_cp03

0x6d0f,	// (0x0003151f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6d0f,	// (0x0003151f) vkb2_cell_t_keypad_pane_cp04

0x6d20,	// (0x00031530) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6d20,	// (0x00031530) vkb2_cell_t_keypad_pane_cp05

0x6d31,	// (0x00031541) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6d31,	// (0x00031541) vkb2_cell_t_keypad_pane_cp06

0x6d42,	// (0x00031552) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6d42,	// (0x00031552) vkb2_cell_t_keypad_pane_cp07

0x6d53,	// (0x00031563) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6d53,	// (0x00031563) vkb2_cell_t_keypad_pane_cp10

0x6508,	// (0x00030d18) vkb2_cell_t_keypad_pane_g1

0xdfe0,	// (0x000387f0) vkb2_cell_t_keypad_pane_t1

0x4ce8,	// (0x0002f4f8) popup_grid_graphic2_window

0xdff2,	// (0x00038802) aid_size_cell_graphic2_ParamLimits

0xdff2,	// (0x00038802) aid_size_cell_graphic2

0xe02a,	// (0x0003883a) bg_popup_window_pane_cp21_ParamLimits

0xe02a,	// (0x0003883a) bg_popup_window_pane_cp21

0xe038,	// (0x00038848) graphic2_pages_pane_ParamLimits

0xe038,	// (0x00038848) graphic2_pages_pane

0xe07e,	// (0x0003888e) grid_graphic2_control_pane_ParamLimits

0xe07e,	// (0x0003888e) grid_graphic2_control_pane

0xe0bc,	// (0x000388cc) grid_graphic2_pane_ParamLimits

0xe0bc,	// (0x000388cc) grid_graphic2_pane

0xe130,	// (0x00038940) cell_graphic2_pane

0x6f8c,	// (0x0003179c) main_comp_mode_pane

0xd270,	// (0x00037a80) list_ai3_gene_pane_ParamLimits

0xd63a,	// (0x00037e4a) bg_popup_window_pane_cp19_ParamLimits

0xd646,	// (0x00037e56) bg_touch_area_indi_pane_ParamLimits

0xd646,	// (0x00037e56) bg_touch_area_indi_pane

0xd65c,	// (0x00037e6c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd65c,	// (0x00037e6c) bg_touch_area_indi_pane_cp01

0xd672,	// (0x00037e82) bg_touch_area_indi_pane_cp02_ParamLimits

0xd672,	// (0x00037e82) bg_touch_area_indi_pane_cp02

0xd68a,	// (0x00037e9a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd68a,	// (0x00037e9a) bg_touch_area_indi_pane_cp03

0xd6a4,	// (0x00037eb4) popup_slider_window_g1_ParamLimits

0xd6c0,	// (0x00037ed0) popup_slider_window_g2_ParamLimits

0xd6dc,	// (0x00037eec) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x0003a50a) popup_slider_window_g_ParamLimits

0xd738,	// (0x00037f48) popup_slider_window_t1_ParamLimits

0xd7ac,	// (0x00037fbc) small_volume_slider_vertical_pane_ParamLimits

0xe130,	// (0x00038940) cell_graphic2_pane_ParamLimits

0xe17e,	// (0x0003898e) bg_button_pane_cp10_ParamLimits

0xe17e,	// (0x0003898e) bg_button_pane_cp10

0xe191,	// (0x000389a1) bg_button_pane_cp11_ParamLimits

0xe191,	// (0x000389a1) bg_button_pane_cp11

0xe1a4,	// (0x000389b4) graphic2_pages_pane_g1_ParamLimits

0xe1a4,	// (0x000389b4) graphic2_pages_pane_g1

0xe1bf,	// (0x000389cf) graphic2_pages_pane_g2_ParamLimits

0xe1bf,	// (0x000389cf) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x0003a5ce) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x0003a5ce) graphic2_pages_pane_g

0xe1d7,	// (0x000389e7) graphic2_pages_pane_t1_ParamLimits

0xe1d7,	// (0x000389e7) graphic2_pages_pane_t1

0xe1ef,	// (0x000389ff) cell_graphic2_control_pane_ParamLimits

0xe1ef,	// (0x000389ff) cell_graphic2_control_pane

0xe210,	// (0x00038a20) cell_graphic2_pane_g1_ParamLimits

0xe210,	// (0x00038a20) cell_graphic2_pane_g1

0xe21d,	// (0x00038a2d) cell_graphic2_pane_g2_ParamLimits

0xe21d,	// (0x00038a2d) cell_graphic2_pane_g2

0xe22a,	// (0x00038a3a) cell_graphic2_pane_g3_ParamLimits

0xe22a,	// (0x00038a3a) cell_graphic2_pane_g3

0xe237,	// (0x00038a47) cell_graphic2_pane_g4_ParamLimits

0xe237,	// (0x00038a47) cell_graphic2_pane_g4

0xe244,	// (0x00038a54) cell_graphic2_pane_g5_ParamLimits

0xe244,	// (0x00038a54) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x0003a5d3) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x0003a5d3) cell_graphic2_pane_g

0xe25f,	// (0x00038a6f) cell_graphic2_pane_t1_ParamLimits

0xe25f,	// (0x00038a6f) cell_graphic2_pane_t1

0x9b83,	// (0x00034393) grid_highlight_pane_cp11_ParamLimits

0x9b83,	// (0x00034393) grid_highlight_pane_cp11

0x7a4f,	// (0x0003225f) bg_button_pane_cp05

0xe2a9,	// (0x00038ab9) cell_graphic2_control_pane_g1

0xc0c0,	// (0x000368d0) bg_touch_area_indi_pane_g1

0xe2d1,	// (0x00038ae1) aid_cmod_rocker_key_size

0xe2db,	// (0x00038aeb) aid_cmode_itu_key_size

0xe2e5,	// (0x00038af5) main_cmode_video_pane

0xe2ef,	// (0x00038aff) main_comp_mode_itu_pane

0xe2fb,	// (0x00038b0b) main_comp_mode_rocker_pane

0xe307,	// (0x00038b17) cell_cmode_rocker_pane_ParamLimits

0xe307,	// (0x00038b17) cell_cmode_rocker_pane

0xe319,	// (0x00038b29) cell_cmode_itu_pane_ParamLimits

0xe319,	// (0x00038b29) cell_cmode_itu_pane

0x8032,	// (0x00032842) bg_button_pane_cp06_ParamLimits

0x8032,	// (0x00032842) bg_button_pane_cp06

0xc352,	// (0x00036b62) cell_cmode_rocker_pane_g1_ParamLimits

0xc352,	// (0x00036b62) cell_cmode_rocker_pane_g1

0xd850,	// (0x00038060) cell_cmode_rocker_pane_g2_ParamLimits

0xd850,	// (0x00038060) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x0003a5e3) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x0003a5e3) cell_cmode_rocker_pane_g

0x6f8c,	// (0x0003179c) bg_button_pane_cp07

0xe32e,	// (0x00038b3e) cell_cmode_itu_pane_g1

0xe337,	// (0x00038b47) cell_cmode_itu_pane_t1

0xe345,	// (0x00038b55) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x0003a5e8) cell_cmode_itu_pane_t

0xda73,	// (0x00038283) aid_touch_ctrl_left

0xda7b,	// (0x0003828b) aid_touch_ctrl_right

0x6f8c,	// (0x0003179c) compa_mode_pane

0xe353,	// (0x00038b63) aid_cmod_rocker_key_size_cp

0xe35d,	// (0x00038b6d) aid_cmode_itu_key_size_cp

0xe367,	// (0x00038b77) compa_mode_pane_g1

0xe36f,	// (0x00038b7f) compa_mode_pane_g2

0xe377,	// (0x00038b87) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x0003a5ed) compa_mode_pane_g

0xe37f,	// (0x00038b8f) main_comp_mode_itu_pane_cp

0xe387,	// (0x00038b97) main_comp_mode_rocker_pane_cp

0xe38f,	// (0x00038b9f) cell_cmode_itu_pane_cp_ParamLimits

0xe38f,	// (0x00038b9f) cell_cmode_itu_pane_cp

0xe3a4,	// (0x00038bb4) cell_cmode_rocker_pane_cp_ParamLimits

0xe3a4,	// (0x00038bb4) cell_cmode_rocker_pane_cp

0x8032,	// (0x00032842) bg_button_pane_cp06_cp_ParamLimits

0x8032,	// (0x00032842) bg_button_pane_cp06_cp

0xc352,	// (0x00036b62) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc352,	// (0x00036b62) cell_cmode_rocker_pane_g1_cp

0xc0c0,	// (0x000368d0) cell_cmode_rocker_pane_g2_cp

0x6f8c,	// (0x0003179c) bg_button_pane_cp07_cp

0xb047,	// (0x00035857) cell_cmode_itu_pane_g1_cp

0xe3b6,	// (0x00038bc6) cell_cmode_itu_pane_t1_cp

0xe3b6,	// (0x00038bc6) cell_cmode_itu_pane_t2_cp

0xb034,	// (0x00035844) settings_code_pane_cp2

0x7080,	// (0x00031890) bg_popup_window_pane_cp3_ParamLimits

0x7c29,	// (0x00032439) heading_pane_cp3_ParamLimits

0x7c35,	// (0x00032445) listscroll_popup_graphic_pane_ParamLimits

0x62b1,	// (0x00030ac1) fep_hwr_aid_pane_ParamLimits

0x6729,	// (0x00030f39) aid_touch_sctrl_top_ParamLimits

0x6744,	// (0x00030f54) sctrl_sk_top_pane_g1_ParamLimits

0x6508,	// (0x00030d18) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x0003a523) sctrl_sk_top_pane_g_ParamLimits

0x6751,	// (0x00030f61) sctrl_sk_top_pane_t1_ParamLimits

0x6729,	// (0x00030f39) aid_touch_sctrl_bottom_ParamLimits

0x6751,	// (0x00030f61) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9bc,	// (0x000381cc) aid_area_touch_clock

0x693a,	// (0x0003114a) aid_vkb2_area_top_pane_cell_ParamLimits

0x693a,	// (0x0003114a) aid_vkb2_area_top_pane_cell

0x6a85,	// (0x00031295) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6a85,	// (0x00031295) aid_vkb2_area_bottom_pane_cell

0xdf2b,	// (0x0003873b) popup_char_count_window

0xe3c4,	// (0x00038bd4) popup_char_count_window_g1

0xe3cd,	// (0x00038bdd) popup_char_count_window_g2

0xe3d6,	// (0x00038be6) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x0003a5f4) popup_char_count_window_g

0xe3df,	// (0x00038bef) popup_char_count_window_t1

0x6800,	// (0x00031010) popup_fep_char_preview_window_ParamLimits

0x6800,	// (0x00031010) popup_fep_char_preview_window

0x6958,	// (0x00031168) vkb2_top_candi_pane_ParamLimits

0x6958,	// (0x00031168) vkb2_top_candi_pane

0xe3ed,	// (0x00038bfd) cell_vkb2_top_candi_pane_ParamLimits

0xe3ed,	// (0x00038bfd) cell_vkb2_top_candi_pane

0x6d68,	// (0x00031578) bg_popup_fep_char_preview_window_ParamLimits

0x6d68,	// (0x00031578) bg_popup_fep_char_preview_window

0x6d76,	// (0x00031586) popup_fep_char_preview_window_t1_ParamLimits

0x6d76,	// (0x00031586) popup_fep_char_preview_window_t1

0xe43a,	// (0x00038c4a) bg_popup_fep_char_preview_window_g1

0xe442,	// (0x00038c52) bg_popup_fep_char_preview_window_g2

0xe44a,	// (0x00038c5a) bg_popup_fep_char_preview_window_g3

0xe452,	// (0x00038c62) bg_popup_fep_char_preview_window_g4

0xe45a,	// (0x00038c6a) bg_popup_fep_char_preview_window_g5

0x6db0,	// (0x000315c0) bg_popup_fep_char_preview_window_g6

0xe462,	// (0x00038c72) bg_popup_fep_char_preview_window_g7

0xe46a,	// (0x00038c7a) bg_popup_fep_char_preview_window_g8

0xe472,	// (0x00038c82) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x0003a5fb) bg_popup_fep_char_preview_window_g

0x6508,	// (0x00030d18) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6508,	// (0x00030d18) cell_vkb2_top_candi_pane_g1

0x6516,	// (0x00030d26) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6516,	// (0x00030d26) cell_vkb2_top_candi_pane_g2

0xe275,	// (0x00038a85) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe275,	// (0x00038a85) cell_vkb2_top_candi_pane_g3

0x6db8,	// (0x000315c8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6db8,	// (0x000315c8) cell_vkb2_top_candi_pane_g4

0xc81d,	// (0x0003702d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc81d,	// (0x0003702d) cell_vkb2_top_candi_pane_g5

0x6dd9,	// (0x000315e9) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6dd9,	// (0x000315e9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x0003a60e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x0003a60e) cell_vkb2_top_candi_pane_g

0x6de7,	// (0x000315f7) cell_vkb2_top_candi_pane_t1

0x6111,	// (0x00030921) aid_size_touch_slider_mark_ParamLimits

0x6111,	// (0x00030921) aid_size_touch_slider_mark

0xe06e,	// (0x0003887e) grid_graphic2_catg_pane_ParamLimits

0xe06e,	// (0x0003887e) grid_graphic2_catg_pane

0xe10c,	// (0x0003891c) popup_grid_graphic2_window_t1_ParamLimits

0xe10c,	// (0x0003891c) popup_grid_graphic2_window_t1

0xe11e,	// (0x0003892e) popup_grid_graphic2_window_t2_ParamLimits

0xe11e,	// (0x0003892e) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x0003a5c9) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x0003a5c9) popup_grid_graphic2_window_t

0x7a4f,	// (0x0003225f) bg_button_pane_cp05_ParamLimits

0xe2a9,	// (0x00038ab9) cell_graphic2_control_pane_g1_ParamLimits

0xe47a,	// (0x00038c8a) cell_graphic2_catg_pane_ParamLimits

0xe47a,	// (0x00038c8a) cell_graphic2_catg_pane

0x6f8c,	// (0x0003179c) bg_button_pane_cp12

0xe48c,	// (0x00038c9c) cell_graphic2_catg_pane_g1

0xd988,	// (0x00038198) cell_tb_ext_pane_t1_ParamLimits

0x6ba2,	// (0x000313b2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6ba2,	// (0x000313b2) vkb2_top_cell_right_narrow_pane

0x6bba,	// (0x000313ca) vkb2_top_cell_right_wide_pane_ParamLimits

0x6bba,	// (0x000313ca) vkb2_top_cell_right_wide_pane

0x62a3,	// (0x00030ab3) bg_vkb2_func_pane_ParamLimits

0x62a3,	// (0x00030ab3) bg_vkb2_func_pane

0x6c2b,	// (0x0003143b) vkb2_top_cell_left_pane_g1_ParamLimits

0x62a3,	// (0x00030ab3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x62a3,	// (0x00030ab3) bg_vkb2_fuc_pane_cp03

0x6c89,	// (0x00031499) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a9b,	// (0x000342ab) bg_vkb2_func_pane_g1

0x9aa3,	// (0x000342b3) bg_vkb2_func_pane_g2

0x9ab3,	// (0x000342c3) bg_vkb2_func_pane_g3

0x9aab,	// (0x000342bb) bg_vkb2_func_pane_g4

0x9abb,	// (0x000342cb) bg_vkb2_func_pane_g5

0x9ac3,	// (0x000342d3) bg_vkb2_func_pane_g6

0x9acb,	// (0x000342db) bg_vkb2_func_pane_g7

0x9ad3,	// (0x000342e3) bg_vkb2_func_pane_g8

0x9a93,	// (0x000342a3) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x0003a61b) bg_vkb2_func_pane_g

0x62a3,	// (0x00030ab3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x62a3,	// (0x00030ab3) bg_vkb2_fuc_pane_cp01

0x6c2b,	// (0x0003143b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6c2b,	// (0x0003143b) vkb2_top_cell_right_wide_pane_g1

0x62a3,	// (0x00030ab3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x62a3,	// (0x00030ab3) bg_vkb2_fuc_pane_cp02

0x6c89,	// (0x00031499) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6c89,	// (0x00031499) vkb2_top_cell_right_narrow_pane_g1

0xd5be,	// (0x00037dce) aid_touch_area_decrease_ParamLimits

0xd5be,	// (0x00037dce) aid_touch_area_decrease

0xd5dc,	// (0x00037dec) aid_touch_area_increase_ParamLimits

0xd5dc,	// (0x00037dec) aid_touch_area_increase

0xd5e8,	// (0x00037df8) aid_touch_area_mute_ParamLimits

0xd5e8,	// (0x00037df8) aid_touch_area_mute

0xd60c,	// (0x00037e1c) aid_touch_area_slider_ParamLimits

0xd60c,	// (0x00037e1c) aid_touch_area_slider

0xd6f8,	// (0x00037f08) popup_slider_window_g4_ParamLimits

0xd6f8,	// (0x00037f08) popup_slider_window_g4

0xd704,	// (0x00037f14) popup_slider_window_g5_ParamLimits

0xd704,	// (0x00037f14) popup_slider_window_g5

0xd726,	// (0x00037f36) popup_slider_window_g6_ParamLimits

0xd726,	// (0x00037f36) popup_slider_window_g6

0xd766,	// (0x00037f76) popup_slider_window_t2_ParamLimits

0xd766,	// (0x00037f76) popup_slider_window_t2

0x0001,

0xfd07,	// (0x0003a517) popup_slider_window_t_ParamLimits

0xfd07,	// (0x0003a517) popup_slider_window_t

0xd77e,	// (0x00037f8e) slider_pane_ParamLimits

0xd77e,	// (0x00037f8e) slider_pane

0xe495,	// (0x00038ca5) slider_pane_g1_ParamLimits

0xe495,	// (0x00038ca5) slider_pane_g1

0xe4a9,	// (0x00038cb9) slider_pane_g2_ParamLimits

0xe4a9,	// (0x00038cb9) slider_pane_g2

0xe4bf,	// (0x00038ccf) slider_pane_g3_ParamLimits

0xe4bf,	// (0x00038ccf) slider_pane_g3

0x0003,

0xfe1e,	// (0x0003a62e) slider_pane_g_ParamLimits

0xfe1e,	// (0x0003a62e) slider_pane_g

0x94cd,	// (0x00033cdd) popup_tb_float_extension_window_ParamLimits

0x94cd,	// (0x00033cdd) popup_tb_float_extension_window

0xe4eb,	// (0x00038cfb) aid_size_cell_tb_float_ext

0x6f8c,	// (0x0003179c) bg_popup_sub_window_cp28

0xe4f7,	// (0x00038d07) grid_tb_float_ext_pane

0xe501,	// (0x00038d11) cell_tb_float_ext_pane_ParamLimits

0xe501,	// (0x00038d11) cell_tb_float_ext_pane

0xe51b,	// (0x00038d2b) cell_tb_float_ext_pane_g1

0xe524,	// (0x00038d34) grid_highlight_pane_cp12

0x63f2,	// (0x00030c02) cell_last_hwr_side_pane_ParamLimits

0x63f2,	// (0x00030c02) cell_last_hwr_side_pane

0xc0c0,	// (0x000368d0) cell_last_hwr_side_pane_g1

0xe52d,	// (0x00038d3d) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x0003a637) cell_last_hwr_side_pane_g

0x6b51,	// (0x00031361) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6b51,	// (0x00031361) vkb2_area_bottom_space_btn_pane

0x6508,	// (0x00030d18) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfe0,	// (0x000387f0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6de7,	// (0x000315f7) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6e06,	// (0x00031616) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6e06,	// (0x00031616) vkb2_area_bottom_space_btn_pane_g1

0x6e40,	// (0x00031650) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6e40,	// (0x00031650) vkb2_area_bottom_space_btn_pane_g2

0x6e76,	// (0x00031686) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6e76,	// (0x00031686) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x0003a63c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x0003a63c) vkb2_area_bottom_space_btn_pane_g

0x6366,	// (0x00030b76) cel_fep_hwr_func_pane_ParamLimits

0x6366,	// (0x00030b76) cel_fep_hwr_func_pane

0x63a2,	// (0x00030bb2) cell_hwr_side_button_pane_ParamLimits

0x63a2,	// (0x00030bb2) cell_hwr_side_button_pane

0xd9bc,	// (0x000381cc) aid_area_touch_clock_ParamLimits

0x7a4f,	// (0x0003225f) bg_uniindi_top_pane_ParamLimits

0xd9ce,	// (0x000381de) uniindi_top_pane_g1_ParamLimits

0xd9e4,	// (0x000381f4) uniindi_top_pane_g2_ParamLimits

0xd9f0,	// (0x00038200) uniindi_top_pane_g3_ParamLimits

0xda01,	// (0x00038211) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x0003a54f) uniindi_top_pane_g_ParamLimits

0xda0e,	// (0x0003821e) uniindi_top_pane_t1_ParamLimits

0x7a4f,	// (0x0003225f) bg_vkb2_func_pane_cp01_ParamLimits

0x7a4f,	// (0x0003225f) bg_vkb2_func_pane_cp01

0xe536,	// (0x00038d46) cel_fep_hwr_func_pane_g1_ParamLimits

0xe536,	// (0x00038d46) cel_fep_hwr_func_pane_g1

0x7a4f,	// (0x0003225f) bg_vkb2_func_pane_cp02_ParamLimits

0x7a4f,	// (0x0003225f) bg_vkb2_func_pane_cp02

0xe536,	// (0x00038d46) cell_hwr_side_button_pane_g1_ParamLimits

0xe536,	// (0x00038d46) cell_hwr_side_button_pane_g1

0x9914,	// (0x00034124) status_pane_g4_ParamLimits

0x9914,	// (0x00034124) status_pane_g4

0x992e,	// (0x0003413e) status_pane_t1

0xbdf9,	// (0x00036609) form2_midp_gauge_slider_cont_pane

0xbe01,	// (0x00036611) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe13,	// (0x00036623) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe25,	// (0x00036635) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0003a30f) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe37,	// (0x00036647) form2_midp_slider_pane_ParamLimits

0x67c0,	// (0x00030fd0) aid_size_cell_func_vkb2_ParamLimits

0x67c0,	// (0x00030fd0) aid_size_cell_func_vkb2

0xe4d7,	// (0x00038ce7) slider_pane_g4_ParamLimits

0xe4d7,	// (0x00038ce7) slider_pane_g4

0x6ec0,	// (0x000316d0) form2_midp_gauge_slider_pane_t2_cp01

0x6ece,	// (0x000316de) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6ece,	// (0x000316de) form2_midp_gauge_slider_pane_t3_cp01

0x6eeb,	// (0x000316fb) form2_midp_slider_pane_cp01

0x6f8c,	// (0x0003179c) navi_smil_pane

0xe56f,	// (0x00038d7f) navi_smil_pane_g1

0xe577,	// (0x00038d87) navi_smil_pane_t1

0xe544,	// (0x00038d54) form2_midp_slider_pane_g1

0xe54d,	// (0x00038d5d) form2_midp_slider_pane_g2

0xe555,	// (0x00038d65) form2_midp_slider_pane_g3

0xe544,	// (0x00038d54) form2_midp_slider_pane_g4

0xe55d,	// (0x00038d6d) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x0003a645) form2_midp_slider_pane_g

0x6eb0,	// (0x000316c0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6eb0,	// (0x000316c0) vkb2_area_bottom_space_btn_pane_g4

0x974a,	// (0x00033f5a) lc0_navi_pane_ParamLimits

0x974a,	// (0x00033f5a) lc0_navi_pane

0x97c0,	// (0x00033fd0) lc0_stat_indi_pane_ParamLimits

0x97c0,	// (0x00033fd0) lc0_stat_indi_pane

0x97d7,	// (0x00033fe7) ls0_title_pane_ParamLimits

0x97d7,	// (0x00033fe7) ls0_title_pane

0x8032,	// (0x00032842) bg_popup_sub_pane_cp14_ParamLimits

0xd9a3,	// (0x000381b3) list_uniindi_pane_ParamLimits

0xd9af,	// (0x000381bf) uniindi_top_pane_ParamLimits

0xda4b,	// (0x0003825b) list_single_uniindi_pane_g1_ParamLimits

0xda5e,	// (0x0003826e) list_single_uniindi_pane_t1_ParamLimits

0x6ef4,	// (0x00031704) lc0_stat_clock_pane_ParamLimits

0x6ef4,	// (0x00031704) lc0_stat_clock_pane

0xe585,	// (0x00038d95) lc0_stat_indi_pane_g1_ParamLimits

0xe585,	// (0x00038d95) lc0_stat_indi_pane_g1

0xe592,	// (0x00038da2) lc0_stat_indi_pane_g2_ParamLimits

0xe592,	// (0x00038da2) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x0003a650) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x0003a650) lc0_stat_indi_pane_g

0x6f01,	// (0x00031711) lc0_uni_indicator_pane_ParamLimits

0x6f01,	// (0x00031711) lc0_uni_indicator_pane

0xe59f,	// (0x00038daf) ls0_title_pane_g1_ParamLimits

0xe59f,	// (0x00038daf) ls0_title_pane_g1

0xe5b3,	// (0x00038dc3) ls0_title_pane_t1_ParamLimits

0xe5b3,	// (0x00038dc3) ls0_title_pane_t1

0x6f0e,	// (0x0003171e) lc0_uni_indicator_pane_g1_ParamLimits

0x6f0e,	// (0x0003171e) lc0_uni_indicator_pane_g1

0xe5e9,	// (0x00038df9) lc0_stat_clock_pane_t1

0x6f8c,	// (0x0003179c) main_ai5_pane

0xe5f7,	// (0x00038e07) ai5_sk_pane_ParamLimits

0xe5f7,	// (0x00038e07) ai5_sk_pane

0xe604,	// (0x00038e14) cell_ai5_widget_pane_ParamLimits

0xe604,	// (0x00038e14) cell_ai5_widget_pane

0xe686,	// (0x00038e96) aid_size_cell_widget_grid

0xe69a,	// (0x00038eaa) bg_ai5_widget_pane_ParamLimits

0xe69a,	// (0x00038eaa) bg_ai5_widget_pane

0xe6c2,	// (0x00038ed2) cell_ai5_widget_pane_g2

0xe6d2,	// (0x00038ee2) cell_ai5_widget_pane_g3

0xe6f1,	// (0x00038f01) cell_ai5_widget_pane_g4

0xe6fd,	// (0x00038f0d) cell_ai5_widget_pane_g5

0xe709,	// (0x00038f19) cell_ai5_widget_pane_g6

0xe715,	// (0x00038f25) cell_ai5_widget_pane_g7

0xe75d,	// (0x00038f6d) cell_ai5_widget_pane_t1_ParamLimits

0xe75d,	// (0x00038f6d) cell_ai5_widget_pane_t1

0xe77a,	// (0x00038f8a) cell_ai5_widget_pane_t2_ParamLimits

0xe77a,	// (0x00038f8a) cell_ai5_widget_pane_t2

0xe792,	// (0x00038fa2) cell_ai5_widget_pane_t3_ParamLimits

0xe792,	// (0x00038fa2) cell_ai5_widget_pane_t3

0xe7aa,	// (0x00038fba) cell_ai5_widget_pane_t4_ParamLimits

0xe7aa,	// (0x00038fba) cell_ai5_widget_pane_t4

0xe7c4,	// (0x00038fd4) cell_ai5_widget_pane_t5_ParamLimits

0xe7c4,	// (0x00038fd4) cell_ai5_widget_pane_t5

0xe7e3,	// (0x00038ff3) cell_ai5_widget_pane_t6_ParamLimits

0xe7e3,	// (0x00038ff3) cell_ai5_widget_pane_t6

0xe7f5,	// (0x00039005) cell_ai5_widget_pane_t7_ParamLimits

0xe7f5,	// (0x00039005) cell_ai5_widget_pane_t7

0xe80e,	// (0x0003901e) cell_ai5_widget_pane_t8_ParamLimits

0xe80e,	// (0x0003901e) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x0003a66a) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x0003a66a) cell_ai5_widget_pane_t

0xe85a,	// (0x0003906a) grid_ai5_widget_pane

0x8032,	// (0x00032842) highlight_cell_ai5_widget_pane_ParamLimits

0x8032,	// (0x00032842) highlight_cell_ai5_widget_pane

0xe872,	// (0x00039082) ai5_sk_left_pane

0xe87c,	// (0x0003908c) ai5_sk_middle_pane

0xe886,	// (0x00039096) ai5_sk_right_pane

0xe890,	// (0x000390a0) bg_ai5_widget_pane_g1_ParamLimits

0xe890,	// (0x000390a0) bg_ai5_widget_pane_g1

0xe89c,	// (0x000390ac) bg_ai5_widget_pane_g2_ParamLimits

0xe89c,	// (0x000390ac) bg_ai5_widget_pane_g2

0xe8a8,	// (0x000390b8) bg_ai5_widget_pane_g3_ParamLimits

0xe8a8,	// (0x000390b8) bg_ai5_widget_pane_g3

0xe8b4,	// (0x000390c4) bg_ai5_widget_pane_g4_ParamLimits

0xe8b4,	// (0x000390c4) bg_ai5_widget_pane_g4

0xe8c0,	// (0x000390d0) bg_ai5_widget_pane_g5_ParamLimits

0xe8c0,	// (0x000390d0) bg_ai5_widget_pane_g5

0xe8cc,	// (0x000390dc) bg_ai5_widget_pane_g6_ParamLimits

0xe8cc,	// (0x000390dc) bg_ai5_widget_pane_g6

0xe8d8,	// (0x000390e8) bg_ai5_widget_pane_g7_ParamLimits

0xe8d8,	// (0x000390e8) bg_ai5_widget_pane_g7

0xe8e4,	// (0x000390f4) bg_ai5_widget_pane_g8_ParamLimits

0xe8e4,	// (0x000390f4) bg_ai5_widget_pane_g8

0xe8f0,	// (0x00039100) bg_ai5_widget_pane_g9_ParamLimits

0xe8f0,	// (0x00039100) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x0003a67f) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x0003a67f) bg_ai5_widget_pane_g

0xe923,	// (0x00039133) cell_shortcut_ai5_widget_pane_ParamLimits

0xe923,	// (0x00039133) cell_shortcut_ai5_widget_pane

0x7149,	// (0x00031959) bg_cell_shortcut_ai5_widget_pane

0xe934,	// (0x00039144) cell_grid_ai5_widget_pane_g1

0xe93d,	// (0x0003914d) highlight_cell_shortcut_ai5_widget_pane

0x9a9b,	// (0x000342ab) ai5_sk_left_pane_g1

0xe945,	// (0x00039155) ai5_sk_left_pane_g2

0xe94d,	// (0x0003915d) ai5_sk_left_pane_g3

0xe955,	// (0x00039165) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x0003a692) ai5_sk_left_pane_g

0xe95d,	// (0x0003916d) ai5_sk_left_pane_t1

0x9aa3,	// (0x000342b3) ai5_sk_right_pane_g1

0xe96b,	// (0x0003917b) ai5_sk_right_pane_g2

0xe973,	// (0x00039183) ai5_sk_right_pane_g3

0xe97b,	// (0x0003918b) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x0003a69b) ai5_sk_right_pane_g

0xe983,	// (0x00039193) ai5_sk_right_pane_t1

0x9aa3,	// (0x000342b3) ai5_sk_middle_pane_g1

0x9a9b,	// (0x000342ab) ai5_sk_middle_pane_g2

0x9abb,	// (0x000342cb) ai5_sk_middle_pane_g3

0xe973,	// (0x00039183) ai5_sk_middle_pane_g4

0xe94d,	// (0x0003915d) ai5_sk_middle_pane_g5

0xe991,	// (0x000391a1) ai5_sk_middle_pane_g6

0xe999,	// (0x000391a9) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x0003a6a4) ai5_sk_middle_pane_g

0x95da,	// (0x00033dea) aid_touch_area_size_lc0_ParamLimits

0x95da,	// (0x00033dea) aid_touch_area_size_lc0

0x6537,	// (0x00030d47) cell_hwr_candidate_pane_t1_ParamLimits

0x95f6,	// (0x00033e06) aid_touch_navi_pane

0x98be,	// (0x000340ce) status_dt_navi_pane_ParamLimits

0x98be,	// (0x000340ce) status_dt_navi_pane

0x98cb,	// (0x000340db) status_dt_sta_pane_ParamLimits

0x98cb,	// (0x000340db) status_dt_sta_pane

0xe9a1,	// (0x000391b1) dt_sta_controll_pane

0xe9ae,	// (0x000391be) dt_sta_indi_pane

0xe9bf,	// (0x000391cf) dt_sta_title_pane

0x7a4f,	// (0x0003225f) bg_dt_sta_indi_pane_ParamLimits

0x7a4f,	// (0x0003225f) bg_dt_sta_indi_pane

0xe9d2,	// (0x000391e2) dt_sta_battery_pane

0xe9da,	// (0x000391ea) dt_sta_indi_pane_g1

0xe9e3,	// (0x000391f3) dt_sta_indi_pane_g2

0xe9ec,	// (0x000391fc) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x0003a6b3) dt_sta_indi_pane_g

0xe9f5,	// (0x00039205) dt_sta_signal_pane

0x8032,	// (0x00032842) bg_dt_sta_title_pane_ParamLimits

0x8032,	// (0x00032842) bg_dt_sta_title_pane

0xe9fe,	// (0x0003920e) dt_sta_title_pane_g1

0xea06,	// (0x00039216) dt_sta_title_pane_t1_ParamLimits

0xea06,	// (0x00039216) dt_sta_title_pane_t1

0x6f8c,	// (0x0003179c) bg_dt_sta_control_pane

0xea1b,	// (0x0003922b) dt_sta_controll_pane_g1

0xea24,	// (0x00039234) bg_dt_sta_title_pane_g1

0xea2d,	// (0x0003923d) bg_dt_sta_title_pane_g2

0xea36,	// (0x00039246) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x0003a6ba) bg_dt_sta_title_pane_g

0xc0c0,	// (0x000368d0) bg_dt_sta_indi_pane_g1

0xea3f,	// (0x0003924f) dt_sta_signal_pane_g1

0xea47,	// (0x00039257) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x0003a6c1) dt_sta_signal_pane_g

0xea4f,	// (0x0003925f) dt_sta_battery_pane_g1

0xea58,	// (0x00039268) dt_sta_battery_pane_t1

0xc0c0,	// (0x000368d0) bg_dt_sta_control_pane_g1

0x877f,	// (0x00032f8f) fep_china_uni_eep_pane

0x8787,	// (0x00032f97) fep_china_uni_entry_pane_ParamLimits

0x8797,	// (0x00032fa7) popup_fep_china_uni_window_g1_ParamLimits

0x87a7,	// (0x00032fb7) popup_fep_china_uni_window_g2_ParamLimits

0x87a7,	// (0x00032fb7) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x00039f45) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x00039f45) popup_fep_china_uni_window_g

0xea67,	// (0x00039277) fep_china_uni_eep_pane_g1

0xea6f,	// (0x0003927f) fep_china_uni_eep_pane_t1

0xe566,	// (0x00038d76) aid_touch_area_size_smil_player

0x9742,	// (0x00033f52) lc0_clock_pane

0x9922,	// (0x00034132) status_pane_g5_ParamLimits

0x9922,	// (0x00034132) status_pane_g5

0x9192,	// (0x000339a2) popup_keymap_window

0x98e0,	// (0x000340f0) status_icon_pane

0xe6d2,	// (0x00038ee2) cell_ai5_widget_pane_g3_ParamLimits

0xe6f1,	// (0x00038f01) cell_ai5_widget_pane_g4_ParamLimits

0xe6fd,	// (0x00038f0d) cell_ai5_widget_pane_g5_ParamLimits

0xe721,	// (0x00038f31) cell_ai5_widget_pane_g8_ParamLimits

0xe721,	// (0x00038f31) cell_ai5_widget_pane_g8

0xe735,	// (0x00038f45) cell_ai5_widget_pane_g9_ParamLimits

0xe735,	// (0x00038f45) cell_ai5_widget_pane_g9

0xe749,	// (0x00038f59) cell_ai5_widget_pane_g10_ParamLimits

0xe749,	// (0x00038f59) cell_ai5_widget_pane_g10

0xea7e,	// (0x0003928e) status_icon_pane_g1

0x6f8c,	// (0x0003179c) bg_popup_sub_pane_cp13

0xea86,	// (0x00039296) popup_keymap_window_t1

0x8f6e,	// (0x0003377e) control_pane_g6_ParamLimits

0x8f6e,	// (0x0003377e) control_pane_g6

0x8f7b,	// (0x0003378b) control_pane_g7_ParamLimits

0x8f7b,	// (0x0003378b) control_pane_g7

0x8f88,	// (0x00033798) control_pane_g8_ParamLimits

0x8f88,	// (0x00033798) control_pane_g8

0xe9a1,	// (0x000391b1) dt_sta_controll_pane_ParamLimits

0xe9ae,	// (0x000391be) dt_sta_indi_pane_ParamLimits

0xe9bf,	// (0x000391cf) dt_sta_title_pane_ParamLimits

0x7f6a,	// (0x0003277a) aid_size_touch_scroll_bar_cale

0x4dc1,	// (0x0002f5d1) popup_discreet_window_ParamLimits

0x4dc1,	// (0x0002f5d1) popup_discreet_window

0x4e49,	// (0x0002f659) popup_sk_window

0xa160,	// (0x00034970) bg_popup_sub_pane_cp28_ParamLimits

0xa160,	// (0x00034970) bg_popup_sub_pane_cp28

0xea94,	// (0x000392a4) popup_discreet_window_g1_ParamLimits

0xea94,	// (0x000392a4) popup_discreet_window_g1

0xeab4,	// (0x000392c4) popup_discreet_window_t1_ParamLimits

0xeab4,	// (0x000392c4) popup_discreet_window_t1

0xead2,	// (0x000392e2) popup_discreet_window_t2_ParamLimits

0xead2,	// (0x000392e2) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x0003a6c6) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x0003a6c6) popup_discreet_window_t

0x6f22,	// (0x00031732) popup_sk_window_g1

0x6f2c,	// (0x0003173c) popup_sk_window_g2

0x0001,

0xfebd,	// (0x0003a6cd) popup_sk_window_g

0xeb24,	// (0x00039334) popup_sk_window_t1

0xeb32,	// (0x00039342) popup_sk_window_t1_copy1

0xe6c2,	// (0x00038ed2) cell_ai5_widget_pane_g2_ParamLimits

0xe820,	// (0x00039030) cell_ai5_widget_pane_t9_ParamLimits

0xe820,	// (0x00039030) cell_ai5_widget_pane_t9

0x6f8c,	// (0x0003179c) main_fep_fshwr2_pane

0xeb40,	// (0x00039350) aid_fshwr2_btn_pane

0xeb48,	// (0x00039358) aid_fshwr2_syb_pane

0xeb50,	// (0x00039360) aid_fshwr2_txt_pane

0xeb58,	// (0x00039368) fshwr2_func_candi_pane

0xeb64,	// (0x00039374) fshwr2_hwr_syb_pane

0xeb70,	// (0x00039380) fshwr2_icf_pane

0x6f8c,	// (0x0003179c) fshwr2_icf_bg_pane

0xeb8e,	// (0x0003939e) fshwr2_icf_pane_t1_ParamLimits

0xeb8e,	// (0x0003939e) fshwr2_icf_pane_t1

0xc0c0,	// (0x000368d0) fshwr2_func_candi_pane_g1

0xeba5,	// (0x000393b5) fshwr2_func_candi_row_pane_ParamLimits

0xeba5,	// (0x000393b5) fshwr2_func_candi_row_pane

0xebb6,	// (0x000393c6) cell_fshwr2_syb_pane_ParamLimits

0xebb6,	// (0x000393c6) cell_fshwr2_syb_pane

0xc352,	// (0x00036b62) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc352,	// (0x00036b62) fshwr2_hwr_syb_pane_g1

0x6f8c,	// (0x0003179c) bg_popup_call_pane_cp01

0xebd0,	// (0x000393e0) fshwr2_func_candi_cell_pane_ParamLimits

0xebd0,	// (0x000393e0) fshwr2_func_candi_cell_pane

0xec01,	// (0x00039411) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec01,	// (0x00039411) fshwr2_func_candi_cell_bg_pane

0xec1b,	// (0x0003942b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec1b,	// (0x0003942b) fshwr2_func_candi_cell_pane_g1

0xec43,	// (0x00039453) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec43,	// (0x00039453) fshwr2_func_candi_cell_pane_t1

0x6f8c,	// (0x0003179c) bg_button_pane_cp08

0x8c97,	// (0x000334a7) cell_fshwr2_syb_bg_pane

0xec56,	// (0x00039466) cell_fshwr2_syb_bg_pane_g1

0xec5e,	// (0x0003946e) cell_fshwr2_syb_bg_pane_t1

0x8032,	// (0x00032842) main_tmo_pane

0xac81,	// (0x00035491) uni_indicator_pane_g1_ParamLimits

0xac96,	// (0x000354a6) uni_indicator_pane_g2_ParamLimits

0xacac,	// (0x000354bc) uni_indicator_pane_g3_ParamLimits

0xacc2,	// (0x000354d2) uni_indicator_pane_g4_ParamLimits

0xacc2,	// (0x000354d2) uni_indicator_pane_g4

0xacd6,	// (0x000354e6) uni_indicator_pane_g5_ParamLimits

0xacd6,	// (0x000354e6) uni_indicator_pane_g5

0xacea,	// (0x000354fa) uni_indicator_pane_g6_ParamLimits

0xacea,	// (0x000354fa) uni_indicator_pane_g6

0xf932,	// (0x0003a142) uni_indicator_pane_g_ParamLimits

0xd59a,	// (0x00037daa) popup_tmo_note_window_ParamLimits

0xd59a,	// (0x00037daa) popup_tmo_note_window

0x6f8c,	// (0x0003179c) fshwr2_bg_pane

0xec34,	// (0x00039444) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec34,	// (0x00039444) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x0003a6d2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x0003a6d2) fshwr2_func_candi_cell_pane_g

0xc0c0,	// (0x000368d0) bg_popup_window_pane_cp01

0xec6d,	// (0x0003947d) bg_popup_window_pane_g1_cp01

0xec76,	// (0x00039486) bg_popup_window_pane_cp22_ParamLimits

0xec76,	// (0x00039486) bg_popup_window_pane_cp22

0xec84,	// (0x00039494) listscroll_tmo_link_pane_ParamLimits

0xec84,	// (0x00039494) listscroll_tmo_link_pane

0xecc4,	// (0x000394d4) popup_tmo_note_window_g1_ParamLimits

0xecc4,	// (0x000394d4) popup_tmo_note_window_g1

0xecd1,	// (0x000394e1) tmo_note_info_pane_ParamLimits

0xecd1,	// (0x000394e1) tmo_note_info_pane

0xeceb,	// (0x000394fb) list_tmo_note_info_pane_g1_ParamLimits

0xeceb,	// (0x000394fb) list_tmo_note_info_pane_g1

0xed02,	// (0x00039512) list_tmo_note_info_pane_g2_ParamLimits

0xed02,	// (0x00039512) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x0003a6d7) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x0003a6d7) list_tmo_note_info_pane_g

0xed1e,	// (0x0003952e) list_tmo_note_info_text_pane_ParamLimits

0xed1e,	// (0x0003952e) list_tmo_note_info_text_pane

0xed9f,	// (0x000395af) list_tmo_link_pane

0xedac,	// (0x000395bc) scroll_pane_cp20

0xedb9,	// (0x000395c9) list_single_tmo_link_pane_ParamLimits

0xedb9,	// (0x000395c9) list_single_tmo_link_pane

0xedc9,	// (0x000395d9) list_single_tmo_link_pane_t1

0xedd7,	// (0x000395e7) list_tmo_note_info_text_pane_t1_ParamLimits

0xedd7,	// (0x000395e7) list_tmo_note_info_text_pane_t1

0x80f8,	// (0x00032908) aid_size_touch_scroll_bar_cp01_ParamLimits

0x80f8,	// (0x00032908) aid_size_touch_scroll_bar_cp01

0x55e8,	// (0x0002fdf8) aid_size_touch_slider_marker

0x4e31,	// (0x0002f641) popup_settings_window_ParamLimits

0x4e31,	// (0x0002f641) popup_settings_window

0x5d86,	// (0x00030596) popup_candi_list_indi_window

0x95f6,	// (0x00033e06) aid_touch_navi_pane_ParamLimits

0x66fd,	// (0x00030f0d) rs_clock_indi_pane

0x6706,	// (0x00030f16) sctrl_sk_bottom_pane_ParamLimits

0x6717,	// (0x00030f27) sctrl_sk_top_pane_ParamLimits

0x681a,	// (0x0003102a) popup_fep_tooltip_window

0xe686,	// (0x00038e96) aid_size_cell_widget_grid_ParamLimits

0xe6b6,	// (0x00038ec6) cell_ai5_widget_pane_g1_ParamLimits

0xe6b6,	// (0x00038ec6) cell_ai5_widget_pane_g1

0xe709,	// (0x00038f19) cell_ai5_widget_pane_g6_ParamLimits

0xe715,	// (0x00038f25) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x0003a655) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x0003a655) cell_ai5_widget_pane_g

0xe844,	// (0x00039054) cell_ai5_widget_pane_t10_ParamLimits

0xe844,	// (0x00039054) cell_ai5_widget_pane_t10

0xe85a,	// (0x0003906a) grid_ai5_widget_pane_ParamLimits

0xe8fc,	// (0x0003910c) cell_contacts_ai5_widget_pane_ParamLimits

0xe8fc,	// (0x0003910c) cell_contacts_ai5_widget_pane

0xeae7,	// (0x000392f7) popup_discreet_window_t3_ParamLimits

0xeae7,	// (0x000392f7) popup_discreet_window_t3

0xeb7a,	// (0x0003938a) popup_fshwr2_char_preview_window_ParamLimits

0xeb7a,	// (0x0003938a) popup_fshwr2_char_preview_window

0xed3c,	// (0x0003954c) tmo_note_info_pane_t1

0xed51,	// (0x00039561) tmo_note_info_pane_t2

0xed66,	// (0x00039576) tmo_note_info_pane_t3

0xed7b,	// (0x0003958b) tmo_note_info_pane_t4

0xed8d,	// (0x0003959d) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x0003a6dc) tmo_note_info_pane_t

0xed9f,	// (0x000395af) list_tmo_link_pane_ParamLimits

0xedac,	// (0x000395bc) scroll_pane_cp20_ParamLimits

0x6f8c,	// (0x0003179c) bg_popup_fep_char_preview_window_cp01

0xedf0,	// (0x00039600) popup_fshwr2_char_preview_window_t1

0xedfe,	// (0x0003960e) popup_candi_list_indi_window_g1

0xee07,	// (0x00039617) bg_cell_contacts_ai5_widget_pane

0xee13,	// (0x00039623) cell_contacts_ai5_widget_pane_g1

0xee27,	// (0x00039637) cell_contacts_ai5_widget_pane_g2

0xee36,	// (0x00039646) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x0003a6e7) cell_contacts_ai5_widget_pane_g

0xee49,	// (0x00039659) cell_contacts_ai5_widget_pane_t1

0x8032,	// (0x00032842) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeec3,	// (0x000396d3) settings_container_pane

0x8c97,	// (0x000334a7) listscroll_set_pane_copy1

0xb7d3,	// (0x00035fe3) scroll_pane_cp121_copy1

0xeecf,	// (0x000396df) set_content_pane_copy1

0xeed7,	// (0x000396e7) aid_height_set_list_copy1_ParamLimits

0xeed7,	// (0x000396e7) aid_height_set_list_copy1

0xaee2,	// (0x000356f2) aid_size_parent_copy1_ParamLimits

0xaee2,	// (0x000356f2) aid_size_parent_copy1

0xeee3,	// (0x000396f3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeee3,	// (0x000396f3) button_value_adjust_pane_cp6_copy1

0x8ffd,	// (0x0003380d) list_highlight_pane_cp2_copy1_ParamLimits

0x8ffd,	// (0x0003380d) list_highlight_pane_cp2_copy1

0xeef7,	// (0x00039707) list_set_pane_copy1_ParamLimits

0xeef7,	// (0x00039707) list_set_pane_copy1

0xee5e,	// (0x0003966e) main_pane_set_t1_copy1_ParamLimits

0xee5e,	// (0x0003966e) main_pane_set_t1_copy1

0xee98,	// (0x000396a8) main_pane_set_t2_copy1_ParamLimits

0xee98,	// (0x000396a8) main_pane_set_t2_copy1

0xefa4,	// (0x000397b4) main_pane_set_t3_copy1

0xefb2,	// (0x000397c2) main_pane_set_t4_copy1

0xeeb7,	// (0x000396c7) set_content_pane_g1_copy1_ParamLimits

0xeeb7,	// (0x000396c7) set_content_pane_g1_copy1

0xefc0,	// (0x000397d0) setting_code_pane_copy1

0xefca,	// (0x000397da) setting_slider_graphic_pane_copy1

0xefca,	// (0x000397da) setting_slider_pane_copy1

0xefca,	// (0x000397da) setting_text_pane_copy1

0xefd4,	// (0x000397e4) setting_volume_pane_copy1

0xefdd,	// (0x000397ed) settings_code_pane_cp2_copy1

0xefe5,	// (0x000397f5) settings_code_pane_cp_copy1_ParamLimits

0xefe5,	// (0x000397f5) settings_code_pane_cp_copy1

0xeff9,	// (0x00039809) volume_set_pane_copy1

0xf001,	// (0x00039811) volume_set_pane_g10_copy1

0xf009,	// (0x00039819) volume_set_pane_g1_copy1

0xf011,	// (0x00039821) volume_set_pane_g2_copy1

0xf019,	// (0x00039829) volume_set_pane_g3_copy1

0xf021,	// (0x00039831) volume_set_pane_g4_copy1

0xf029,	// (0x00039839) volume_set_pane_g5_copy1

0xf031,	// (0x00039841) volume_set_pane_g6_copy1

0xf039,	// (0x00039849) volume_set_pane_g7_copy1

0xf041,	// (0x00039851) volume_set_pane_g8_copy1

0xf049,	// (0x00039859) volume_set_pane_g9_copy1

0x7080,	// (0x00031890) bg_set_opt_pane_cp_copy1_ParamLimits

0x7080,	// (0x00031890) bg_set_opt_pane_cp_copy1

0xf051,	// (0x00039861) setting_slider_pane_t1_copy1_ParamLimits

0xf051,	// (0x00039861) setting_slider_pane_t1_copy1

0xf06f,	// (0x0003987f) setting_slider_pane_t2_copy1_ParamLimits

0xf06f,	// (0x0003987f) setting_slider_pane_t2_copy1

0xf089,	// (0x00039899) setting_slider_pane_t3_copy1_ParamLimits

0xf089,	// (0x00039899) setting_slider_pane_t3_copy1

0xf0a1,	// (0x000398b1) slider_set_pane_copy1_ParamLimits

0xf0a1,	// (0x000398b1) slider_set_pane_copy1

0x8099,	// (0x000328a9) set_opt_bg_pane_g1_copy2

0x80a1,	// (0x000328b1) set_opt_bg_pane_g2_copy2

0xf0b7,	// (0x000398c7) set_opt_bg_pane_g3_copy2

0x80b1,	// (0x000328c1) set_opt_bg_pane_g4_copy2

0x80b9,	// (0x000328c9) set_opt_bg_pane_g5_copy2

0x80c1,	// (0x000328d1) set_opt_bg_pane_g6_copy2

0xf0c1,	// (0x000398d1) set_opt_bg_pane_g7_copy2

0xf0c9,	// (0x000398d9) set_opt_bg_pane_g8_copy2

0xf0d3,	// (0x000398e3) set_opt_bg_pane_g9_copy2

0x6f36,	// (0x00031746) aid_size_touch_slider_mark_copy1_ParamLimits

0x6f36,	// (0x00031746) aid_size_touch_slider_mark_copy1

0xf0dd,	// (0x000398ed) slider_set_pane_g1_copy1

0x6f4a,	// (0x0003175a) slider_set_pane_g2_copy1

0x6131,	// (0x00030941) slider_set_pane_g3_copy1_ParamLimits

0x6131,	// (0x00030941) slider_set_pane_g3_copy1

0x6145,	// (0x00030955) slider_set_pane_g4_copy1_ParamLimits

0x6145,	// (0x00030955) slider_set_pane_g4_copy1

0x615d,	// (0x0003096d) slider_set_pane_g5_copy1_ParamLimits

0x615d,	// (0x0003096d) slider_set_pane_g5_copy1

0x6131,	// (0x00030941) slider_set_pane_g6_copy1_ParamLimits

0x6131,	// (0x00030941) slider_set_pane_g6_copy1

0x6f52,	// (0x00031762) slider_set_pane_g7_copy1_ParamLimits

0x6f52,	// (0x00031762) slider_set_pane_g7_copy1

0x6fa0,	// (0x000317b0) bg_set_opt_pane_cp2_copy1

0xf0e6,	// (0x000398f6) setting_slider_graphic_pane_g1_copy1

0xf0ef,	// (0x000398ff) setting_slider_graphic_pane_t1_copy1

0xf0ff,	// (0x0003990f) setting_slider_graphic_pane_t2_copy1

0xf10f,	// (0x0003991f) slider_set_pane_cp_copy1

0xf11f,	// (0x0003992f) input_focus_pane_cp1_copy1

0xf128,	// (0x00039938) list_set_text_pane_copy1

0xf130,	// (0x00039940) setting_text_pane_g1_copy1

0x4fc8,	// (0x0002f7d8) set_text_pane_t1_copy1

0xf11f,	// (0x0003992f) input_focus_pane_cp2_copy1

0xf130,	// (0x00039940) setting_code_pane_g1_copy1

0xf139,	// (0x00039949) setting_code_pane_t1_copy1

0xf147,	// (0x00039957) list_set_graphic_pane_copy1

0x6fa0,	// (0x000317b0) bg_set_opt_pane_cp4_copy1

0x897b,	// (0x0003318b) list_set_graphic_pane_g1_copy1_ParamLimits

0x897b,	// (0x0003318b) list_set_graphic_pane_g1_copy1

0xf159,	// (0x00039969) list_set_graphic_pane_g2_copy1

0x8993,	// (0x000331a3) list_set_graphic_pane_t1_copy1_ParamLimits

0x8993,	// (0x000331a3) list_set_graphic_pane_t1_copy1

0xc0c0,	// (0x000368d0) rs_clock_indi_pane_g1

0xf161,	// (0x00039971) rs_clock_indi_pane_t1

0xe9d2,	// (0x000391e2) rs_indi_pane

0xf16f,	// (0x0003997f) rs_indi_pane_g1

0xf178,	// (0x00039988) rs_indi_pane_g2

0xf181,	// (0x00039991) rs_indi_pane_g3

0x0002,

0xfede,	// (0x0003a6ee) rs_indi_pane_g

0x8c97,	// (0x000334a7) bg_popup_preview_window_pane_cp03

0xf18a,	// (0x0003999a) popup_fep_tooltip_window_t1

0xcd3b,	// (0x0003754b) popup_note2_window_g2_ParamLimits

0xcd3b,	// (0x0003754b) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0003a487) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0003a487) popup_note2_window_g

0xd236,	// (0x00037a46) bg_popup_sub_pane_cp11_ParamLimits

0xd243,	// (0x00037a53) cell_ai3_links_pane_g1_ParamLimits

0xd25a,	// (0x00037a6a) cell_ai3_links_pane_t1

0x4fc8,	// (0x0002f7d8) set_text_pane_t1_copy1_ParamLimits

0x8b86,	// (0x00033396) cell_graphic_popup_pane_cp2_ParamLimits

0x8b86,	// (0x00033396) cell_graphic_popup_pane_cp2

0xf198,	// (0x000399a8) cell_graphic_popup_pane_g1_cp2

0x7d7d,	// (0x0003258d) cell_graphic_popup_pane_g2_cp2

0xf1a0,	// (0x000399b0) cell_graphic_popup_pane_g3_cp2

0xf1a8,	// (0x000399b8) cell_graphic_popup_pane_t2_cp2

0x7d8e,	// (0x0003259e) grid_highlight_pane_cp3_cp2

0x83dc,	// (0x00032bec) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8032,	// (0x00032842) main_tmo_pane_ParamLimits

0xd58e,	// (0x00037d9e) popup_tmo_big_image_note_window

0xe6a6,	// (0x00038eb6) cell_ai5_widget_list_pane

0xe6ae,	// (0x00038ebe) cell_ai5_widget_lrg_icon_pane

0xed3c,	// (0x0003954c) tmo_note_info_pane_t1_ParamLimits

0xed51,	// (0x00039561) tmo_note_info_pane_t2_ParamLimits

0xed66,	// (0x00039576) tmo_note_info_pane_t3_ParamLimits

0xed7b,	// (0x0003958b) tmo_note_info_pane_t4_ParamLimits

0xed8d,	// (0x0003959d) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x0003a6dc) tmo_note_info_pane_t_ParamLimits

0xeec3,	// (0x000396d3) settings_container_pane_ParamLimits

0xf117,	// (0x00039927) indicator_popup_pane_cp5

0xf117,	// (0x00039927) indicator_popup_pane_cp6

0xf147,	// (0x00039957) list_set_graphic_pane_copy1_ParamLimits

0x6f8c,	// (0x0003179c) bg_popup_window_pane_cp23

0xf1b6,	// (0x000399c6) popup_tmo_big_image_note_window_g1

0xf1c0,	// (0x000399d0) popup_tmo_big_image_note_window_t1

0xf1d0,	// (0x000399e0) popup_tmo_big_image_note_window_t2

0xf1e0,	// (0x000399f0) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x0003a6f5) popup_tmo_big_image_note_window_t

0xf1f0,	// (0x00039a00) cell_ai5_widget_lrg_icon_pane_g1

0xf1f8,	// (0x00039a08) cell_ai5_widget_lrg_icon_pane_t1

0xf206,	// (0x00039a16) cell_ai5_widget_list_row_pane_ParamLimits

0xf206,	// (0x00039a16) cell_ai5_widget_list_row_pane

0xf21f,	// (0x00039a2f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf21f,	// (0x00039a2f) cell_ai5_widget_list_row_pane_g1

0xf22c,	// (0x00039a3c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22c,	// (0x00039a3c) cell_ai5_widget_list_row_pane_t1

0xf244,	// (0x00039a54) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf244,	// (0x00039a54) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeec,	// (0x0003a6fc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x0003a6fc) cell_ai5_widget_list_row_pane_t

0x4ce8,	// (0x0002f4f8) main_fep_vtchi_ss_pane

0xf256,	// (0x00039a66) popup_fep_char_pre_window

0xf25e,	// (0x00039a6e) popup_fep_ituss_window

0xf27f,	// (0x00039a8f) popup_fep_vkbss_window

0xf29e,	// (0x00039aae) grid_vkbss_keypad_pane_ParamLimits

0xf29e,	// (0x00039aae) grid_vkbss_keypad_pane

0xf2ae,	// (0x00039abe) ituss_keypad_pane

0xf2c7,	// (0x00039ad7) aid_vkbss_key_offset_ParamLimits

0xf2c7,	// (0x00039ad7) aid_vkbss_key_offset

0xf2d3,	// (0x00039ae3) cell_vkbss_key_pane_ParamLimits

0xf2d3,	// (0x00039ae3) cell_vkbss_key_pane

0xf2e9,	// (0x00039af9) bg_cell_vkbss_key_g1_ParamLimits

0xf2e9,	// (0x00039af9) bg_cell_vkbss_key_g1

0xf2f5,	// (0x00039b05) cell_vkbss_key_3p_pane_ParamLimits

0xf2f5,	// (0x00039b05) cell_vkbss_key_3p_pane

0xf30f,	// (0x00039b1f) cell_vkbss_key_g1_ParamLimits

0xf30f,	// (0x00039b1f) cell_vkbss_key_g1

0xf329,	// (0x00039b39) cell_vkbss_key_t1_ParamLimits

0xf329,	// (0x00039b39) cell_vkbss_key_t1

0xf354,	// (0x00039b64) cell_ituss_key_pane_ParamLimits

0xf354,	// (0x00039b64) cell_ituss_key_pane

0xf364,	// (0x00039b74) bg_cell_ituss_key_g1_ParamLimits

0xf364,	// (0x00039b74) bg_cell_ituss_key_g1

0xf370,	// (0x00039b80) cell_ituss_key_pane_g1_ParamLimits

0xf370,	// (0x00039b80) cell_ituss_key_pane_g1

0xf37c,	// (0x00039b8c) cell_ituss_key_pane_g2_ParamLimits

0xf37c,	// (0x00039b8c) cell_ituss_key_pane_g2

0x0001,

0xfef1,	// (0x0003a701) cell_ituss_key_pane_g_ParamLimits

0xfef1,	// (0x0003a701) cell_ituss_key_pane_g

0xf395,	// (0x00039ba5) cell_ituss_key_t1_ParamLimits

0xf395,	// (0x00039ba5) cell_ituss_key_t1

0xf3c3,	// (0x00039bd3) cell_ituss_key_t2_ParamLimits

0xf3c3,	// (0x00039bd3) cell_ituss_key_t2

0xf3f4,	// (0x00039c04) cell_ituss_key_t3_ParamLimits

0xf3f4,	// (0x00039c04) cell_ituss_key_t3

0xf425,	// (0x00039c35) cell_ituss_key_t4_ParamLimits

0xf425,	// (0x00039c35) cell_ituss_key_t4

0x0003,

0xfef6,	// (0x0003a706) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0003a706) cell_ituss_key_t

0xf456,	// (0x00039c66) cell_vkbss_key_3p_pane_g1

0xf45e,	// (0x00039c6e) cell_vkbss_key_3p_pane_g2

0xf466,	// (0x00039c76) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x0003a70f) cell_vkbss_key_3p_pane_g

0x6f8c,	// (0x0003179c) bg_popup_fep_char_preview_window_cp02

0xf46e,	// (0x00039c7e) popup_fep_char_pre_window_t1

0xe67c,	// (0x00038e8c) main_ai5_sk_pane

0xee07,	// (0x00039617) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee13,	// (0x00039623) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee27,	// (0x00039637) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee36,	// (0x00039646) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x0003a6e7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee49,	// (0x00039659) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8032,	// (0x00032842) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf47d,	// (0x00039c8d) main_ai5_sk_pane_g1

0x9f99,	// (0x000347a9) popup_query_code_window_g1

0xf274,	// (0x00039a84) popup_fep_vkb_icf_pane

0xf288,	// (0x00039a98) popup_fep_vtchi_icf_pane

0x8032,	// (0x00032842) bg_icf_pane

0xf495,	// (0x00039ca5) list_vkb_icf_pane

0x8032,	// (0x00032842) bg_icf_pane_cp01

0xf4ad,	// (0x00039cbd) vtchi_icf_list_pane

0xf4bd,	// (0x00039ccd) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x00039ccd) list_vkb_icf_pane_t1

0xf4d4,	// (0x00039ce4) vtchi_icf_list_pane_t1_ParamLimits

0xf4d4,	// (0x00039ce4) vtchi_icf_list_pane_t1

0xf25e,	// (0x00039a6e) popup_fep_ituss_window_ParamLimits

0xf288,	// (0x00039a98) popup_fep_vtchi_icf_pane_ParamLimits

0xf2ae,	// (0x00039abe) ituss_keypad_pane_ParamLimits

0xf2be,	// (0x00039ace) ituss_sks_pane

0x8032,	// (0x00032842) bg_icf_pane_ParamLimits

0xf486,	// (0x00039c96) icf_edit_indi_pane_ParamLimits

0xf486,	// (0x00039c96) icf_edit_indi_pane

0xf495,	// (0x00039ca5) list_vkb_icf_pane_ParamLimits

0x8032,	// (0x00032842) bg_icf_pane_cp01_ParamLimits

0xf4a1,	// (0x00039cb1) icf_edit_indi_pane_cp01_ParamLimits

0xf4a1,	// (0x00039cb1) icf_edit_indi_pane_cp01

0xf4b5,	// (0x00039cc5) vtchi_query_pane

0xc352,	// (0x00036b62) icf_edit_indi_pane_g1_ParamLimits

0xc352,	// (0x00036b62) icf_edit_indi_pane_g1

0xf4f0,	// (0x00039d00) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x00039d00) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x0003a716) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x0003a716) icf_edit_indi_pane_g

0xf4fc,	// (0x00039d0c) icf_edit_indi_pane_t1

0xf50a,	// (0x00039d1a) bg_input_focus_pane_cp042

0x7f61,	// (0x00032771) vtchi_button_pane

0xf513,	// (0x00039d23) vtchi_query_pane_t1

0xf521,	// (0x00039d31) vtchi_query_pane_t2

0xf52f,	// (0x00039d3f) vtchi_query_pane_t3

0x0002,

0xff0b,	// (0x0003a71b) vtchi_query_pane_t

0x6f8c,	// (0x0003179c) bg_button_pane_cp13

0xf53d,	// (0x00039d4d) vtchi_button_pane_g1

0xda95,	// (0x000382a5) ituss_sks_pane_g1

0xf545,	// (0x00039d55) ituss_sks_pane_g2

0x0001,

0xff12,	// (0x0003a722) ituss_sks_pane_g

0xf54e,	// (0x00039d5e) ituss_sks_pane_t1

0xf55c,	// (0x00039d6c) ituss_sks_pane_t2

0x0001,

0xff17,	// (0x0003a727) ituss_sks_pane_t

0xbb22,	// (0x00036332) indicator_nsta_pane_cp_g1

0xbb2b,	// (0x0003633b) indicator_nsta_pane_cp_g2

0xbb33,	// (0x00036343) indicator_nsta_pane_cp_g3

0xbb3b,	// (0x0003634b) indicator_nsta_pane_cp_g4

0xbb43,	// (0x00036353) indicator_nsta_pane_cp_g5

0xbb4b,	// (0x0003635b) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0003a2c5) indicator_nsta_pane_cp_g

0xe296,	// (0x00038aa6) cell_graphic2_pane_t2_ParamLimits

0xe296,	// (0x00038aa6) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x0003a5de) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x0003a5de) cell_graphic2_pane_t

0xe2c3,	// (0x00038ad3) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

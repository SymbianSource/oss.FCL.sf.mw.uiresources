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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00037919 };

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
0x89a9,	// (0x000402c2) Screen

0x89b5,	// (0x000402ce) application_window_ParamLimits

0x89b5,	// (0x000402ce) application_window

0xb1d0,	// (0x00042ae9) screen_g1

0x89ed,	// (0x00040306) area_bottom_pane_ParamLimits

0x89ed,	// (0x00040306) area_bottom_pane

0xed8e,	// (0x000466a7) area_top_pane_ParamLimits

0xed8e,	// (0x000466a7) area_top_pane

0xee2c,	// (0x00046745) main_pane_ParamLimits

0xee2c,	// (0x00046745) main_pane

0xb1da,	// (0x00042af3) misc_graphics

0xbc4c,	// (0x00043565) battery_pane_ParamLimits

0xbc4c,	// (0x00043565) battery_pane

0x2fce,	// (0x0003a8e7) bg_status_flat_pane_g8

0x2fd6,	// (0x0003a8ef) bg_status_flat_pane_g9

0x23dc,	// (0x00039cf5) context_pane_ParamLimits

0x23dc,	// (0x00039cf5) context_pane

0xbdb7,	// (0x000436d0) navi_pane_ParamLimits

0xbdb7,	// (0x000436d0) navi_pane

0xbe35,	// (0x0004374e) signal_pane_ParamLimits

0xbe35,	// (0x0004374e) signal_pane

0x0008,

0xf86f,	// (0x00047188) bg_status_flat_pane_g

0xbec5,	// (0x000437de) status_pane_g1_ParamLimits

0xbec5,	// (0x000437de) status_pane_g1

0xbedb,	// (0x000437f4) status_pane_g2_ParamLimits

0xbedb,	// (0x000437f4) status_pane_g2

0x2603,	// (0x00039f1c) status_pane_g3_ParamLimits

0x2603,	// (0x00039f1c) status_pane_g3

0x0004,

0xf79b,	// (0x000470b4) status_pane_g_ParamLimits

0xf79b,	// (0x000470b4) status_pane_g

0xbee7,	// (0x00043800) title_pane_ParamLimits

0xbee7,	// (0x00043800) title_pane

0xbf4a,	// (0x00043863) uni_indicator_pane_ParamLimits

0xbf4a,	// (0x00043863) uni_indicator_pane

0x2238,	// (0x00039b51) bg_list_pane_ParamLimits

0x2238,	// (0x00039b51) bg_list_pane

0xd197,	// (0x00044ab0) find_pane

0x9f31,	// (0x0004184a) listscroll_app_pane_ParamLimits

0x9f31,	// (0x0004184a) listscroll_app_pane

0x2264,	// (0x00039b7d) listscroll_form_pane

0xf099,	// (0x000469b2) listscroll_gen_pane_ParamLimits

0xf099,	// (0x000469b2) listscroll_gen_pane

0x030e,	// (0x00037c27) listscroll_set_pane

0x3b3f,	// (0x0003b458) main_idle_act_pane

0x0093,	// (0x000379ac) main_idle_trad_pane

0x0093,	// (0x000379ac) main_list_empty_pane

0x227e,	// (0x00039b97) main_midp_pane

0x228a,	// (0x00039ba3) main_pane_g1_ParamLimits

0x228a,	// (0x00039ba3) main_pane_g1

0x9f41,	// (0x0004185a) popup_ai_message_window_ParamLimits

0x9f41,	// (0x0004185a) popup_ai_message_window

0x9ff2,	// (0x0004190b) popup_fep_china_uni_window_ParamLimits

0x9ff2,	// (0x0004190b) popup_fep_china_uni_window

0xa04c,	// (0x00041965) popup_fep_japan_candidate_window_ParamLimits

0xa04c,	// (0x00041965) popup_fep_japan_candidate_window

0xa06a,	// (0x00041983) popup_fep_japan_predictive_window_ParamLimits

0xa06a,	// (0x00041983) popup_fep_japan_predictive_window

0xa07c,	// (0x00041995) popup_find_window

0xa099,	// (0x000419b2) popup_grid_graphic_window_ParamLimits

0xa099,	// (0x000419b2) popup_grid_graphic_window

0xa137,	// (0x00041a50) popup_large_graphic_colour_window

0xa15d,	// (0x00041a76) popup_menu_window_ParamLimits

0xa15d,	// (0x00041a76) popup_menu_window

0xa32f,	// (0x00041c48) popup_note_image_window

0xa2f5,	// (0x00041c0e) popup_note_wait_window_ParamLimits

0xa2f5,	// (0x00041c0e) popup_note_wait_window

0xa347,	// (0x00041c60) popup_note_window_ParamLimits

0xa347,	// (0x00041c60) popup_note_window

0xa3f6,	// (0x00041d0f) popup_query_code_window_ParamLimits

0xa3f6,	// (0x00041d0f) popup_query_code_window

0xa430,	// (0x00041d49) popup_query_data_code_window_ParamLimits

0xa430,	// (0x00041d49) popup_query_data_code_window

0xa44d,	// (0x00041d66) popup_query_data_window_ParamLimits

0xa44d,	// (0x00041d66) popup_query_data_window

0xa4cf,	// (0x00041de8) popup_query_sat_info_window_ParamLimits

0xa4cf,	// (0x00041de8) popup_query_sat_info_window

0xa566,	// (0x00041e7f) popup_snote_single_graphic_window_ParamLimits

0xa566,	// (0x00041e7f) popup_snote_single_graphic_window

0xa566,	// (0x00041e7f) popup_snote_single_text_window_ParamLimits

0xa566,	// (0x00041e7f) popup_snote_single_text_window

0x077a,	// (0x00038093) popup_sub_window_general

0xa6c3,	// (0x00041fdc) popup_window_general_ParamLimits

0xa6c3,	// (0x00041fdc) popup_window_general

0x2298,	// (0x00039bb1) power_save_pane

0x9d99,	// (0x000416b2) control_pane_g1_ParamLimits

0x9d99,	// (0x000416b2) control_pane_g1

0x9dc2,	// (0x000416db) control_pane_g2_ParamLimits

0x9dc2,	// (0x000416db) control_pane_g2

0x21fb,	// (0x00039b14) control_pane_g3_ParamLimits

0x21fb,	// (0x00039b14) control_pane_g3

0x0007,

0xf783,	// (0x0004709c) control_pane_g_ParamLimits

0xf783,	// (0x0004709c) control_pane_g

0x9e2a,	// (0x00041743) control_pane_t1_ParamLimits

0x9e2a,	// (0x00041743) control_pane_t1

0x9e88,	// (0x000417a1) control_pane_t2_ParamLimits

0x9e88,	// (0x000417a1) control_pane_t2

0x0002,

0xf794,	// (0x000470ad) control_pane_t_ParamLimits

0xf794,	// (0x000470ad) control_pane_t

0x9cf2,	// (0x0004160b) navi_navi_volume_pane_cp1

0x9cfa,	// (0x00041613) status_small_icon_pane

0x2130,	// (0x00039a49) status_small_pane_g1_ParamLimits

0x2130,	// (0x00039a49) status_small_pane_g1

0x9d02,	// (0x0004161b) status_small_pane_g2_ParamLimits

0x9d02,	// (0x0004161b) status_small_pane_g2

0x9d0e,	// (0x00041627) status_small_pane_g3_ParamLimits

0x9d0e,	// (0x00041627) status_small_pane_g3

0x9d1a,	// (0x00041633) status_small_pane_g4_ParamLimits

0x9d1a,	// (0x00041633) status_small_pane_g4

0x9d26,	// (0x0004163f) status_small_pane_g5_ParamLimits

0x9d26,	// (0x0004163f) status_small_pane_g5

0x9d34,	// (0x0004164d) status_small_pane_g6_ParamLimits

0x9d34,	// (0x0004164d) status_small_pane_g6

0x0007,

0xf772,	// (0x0004708b) status_small_pane_g_ParamLimits

0xf772,	// (0x0004708b) status_small_pane_g

0x9d63,	// (0x0004167c) status_small_pane_t1

0x9d85,	// (0x0004169e) status_small_wait_pane_ParamLimits

0x9d85,	// (0x0004169e) status_small_wait_pane

0x99fc,	// (0x00041315) aid_levels_signal_ParamLimits

0x99fc,	// (0x00041315) aid_levels_signal

0x9a14,	// (0x0004132d) signal_pane_g1_ParamLimits

0x9a14,	// (0x0004132d) signal_pane_g1

0x9a2f,	// (0x00041348) signal_pane_g2_ParamLimits

0x9a2f,	// (0x00041348) signal_pane_g2

0x0003,

0xf703,	// (0x0004701c) signal_pane_g_ParamLimits

0xf703,	// (0x0004701c) signal_pane_g

0xba76,	// (0x0004338f) context_pane_g1

0x8beb,	// (0x00040504) title_pane_g1

0x8c22,	// (0x0004053b) title_pane_t1

0xb1f0,	// (0x00042b09) title_pane_t2

0xb216,	// (0x00042b2f) title_pane_t3

0x0002,

0xf557,	// (0x00046e70) title_pane_t

0xbf72,	// (0x0004388b) aid_levels_battery_ParamLimits

0xbf72,	// (0x0004388b) aid_levels_battery

0xbf8e,	// (0x000438a7) battery_pane_g1_ParamLimits

0xbf8e,	// (0x000438a7) battery_pane_g1

0xbfab,	// (0x000438c4) battery_pane_g2_ParamLimits

0xbfab,	// (0x000438c4) battery_pane_g2

0x0001,

0xf7a6,	// (0x000470bf) battery_pane_g_ParamLimits

0xf7a6,	// (0x000470bf) battery_pane_g

0xc57e,	// (0x00043e97) uni_indicator_pane_g1

0xc594,	// (0x00043ead) uni_indicator_pane_g2

0xc5aa,	// (0x00043ec3) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x00047230) uni_indicator_pane_g

0xf463,	// (0x00046d7c) navi_icon_pane_ParamLimits

0xf463,	// (0x00046d7c) navi_icon_pane

0xf3b8,	// (0x00046cd1) navi_midp_pane

0xf47f,	// (0x00046d98) navi_navi_pane

0xf489,	// (0x00046da2) navi_text_pane_ParamLimits

0xf489,	// (0x00046da2) navi_text_pane

0xb1d0,	// (0x00042ae9) status_small_wait_pane_g1

0xb467,	// (0x00042d80) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0004722b) status_small_wait_pane_g

0xc4d7,	// (0x00043df0) navi_navi_icon_text_pane

0x3621,	// (0x0003af3a) navi_navi_pane_g1_ParamLimits

0x3621,	// (0x0003af3a) navi_navi_pane_g1

0x3633,	// (0x0003af4c) navi_navi_pane_g2_ParamLimits

0x3633,	// (0x0003af4c) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x000471f9) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x000471f9) navi_navi_pane_g

0x3645,	// (0x0003af5e) navi_navi_tabs_pane

0x364e,	// (0x0003af67) navi_navi_text_pane

0xc4d7,	// (0x00043df0) navi_navi_volume_pane

0x35f5,	// (0x0003af0e) navi_text_pane_t1

0x35e9,	// (0x0003af02) navi_icon_pane_g1

0x353c,	// (0x0003ae55) navi_navi_text_pane_t1

0xa79a,	// (0x000420b3) navi_navi_volume_pane_g1

0x0b99,	// (0x000384b2) volume_small_pane

0x34a2,	// (0x0003adbb) navi_navi_icon_text_pane_g1

0xc42f,	// (0x00043d48) navi_navi_icon_text_pane_t1

0xf47f,	// (0x00046d98) navi_tabs_2_long_pane

0xf47f,	// (0x00046d98) navi_tabs_2_pane

0xf47f,	// (0x00046d98) navi_tabs_3_long_pane

0xf47f,	// (0x00046d98) navi_tabs_3_pane

0xf47f,	// (0x00046d98) navi_tabs_4_pane

0x0b71,	// (0x0003848a) tabs_2_active_pane_ParamLimits

0x0b71,	// (0x0003848a) tabs_2_active_pane

0x0b81,	// (0x0003849a) tabs_2_passive_pane_ParamLimits

0x0b81,	// (0x0003849a) tabs_2_passive_pane

0x0b3f,	// (0x00038458) tabs_3_active_pane_ParamLimits

0x0b3f,	// (0x00038458) tabs_3_active_pane

0x0b4f,	// (0x00038468) tabs_3_passive_pane_ParamLimits

0x0b4f,	// (0x00038468) tabs_3_passive_pane

0x0b60,	// (0x00038479) tabs_3_passive_pane_cp_ParamLimits

0x0b60,	// (0x00038479) tabs_3_passive_pane_cp

0x0afb,	// (0x00038414) tabs_4_active_pane_ParamLimits

0x0afb,	// (0x00038414) tabs_4_active_pane

0x0b0c,	// (0x00038425) tabs_4_passive_pane_ParamLimits

0x0b0c,	// (0x00038425) tabs_4_passive_pane

0x0b1d,	// (0x00038436) tabs_4_passive_pane_cp_ParamLimits

0x0b1d,	// (0x00038436) tabs_4_passive_pane_cp

0x0b2e,	// (0x00038447) tabs_4_passive_pane_cp2_ParamLimits

0x0b2e,	// (0x00038447) tabs_4_passive_pane_cp2

0x0ad7,	// (0x000383f0) tabs_2_long_active_pane_ParamLimits

0x0ad7,	// (0x000383f0) tabs_2_long_active_pane

0x0ae9,	// (0x00038402) tabs_2_long_passive_pane_ParamLimits

0x0ae9,	// (0x00038402) tabs_2_long_passive_pane

0x0a92,	// (0x000383ab) tabs_3_long_active_pane_ParamLimits

0x0a92,	// (0x000383ab) tabs_3_long_active_pane

0x0aab,	// (0x000383c4) tabs_3_long_passive_pane_ParamLimits

0x0aab,	// (0x000383c4) tabs_3_long_passive_pane

0x0abe,	// (0x000383d7) tabs_3_long_passive_pane_cp_ParamLimits

0x0abe,	// (0x000383d7) tabs_3_long_passive_pane_cp

0x0a38,	// (0x00038351) volume_small_pane_g1

0x0a41,	// (0x0003835a) volume_small_pane_g2

0x0a4a,	// (0x00038363) volume_small_pane_g3

0x0a53,	// (0x0003836c) volume_small_pane_g4

0x0a5c,	// (0x00038375) volume_small_pane_g5

0x0a65,	// (0x0003837e) volume_small_pane_g6

0x0a6e,	// (0x00038387) volume_small_pane_g7

0x0a77,	// (0x00038390) volume_small_pane_g8

0x0a80,	// (0x00038399) volume_small_pane_g9

0x0a89,	// (0x000383a2) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x000471c5) volume_small_pane_g

0xb228,	// (0x00042b41) bg_active_tab_pane_cp2_ParamLimits

0xb228,	// (0x00042b41) bg_active_tab_pane_cp2

0x8cae,	// (0x000405c7) tabs_3_active_pane_g1

0x8cb6,	// (0x000405cf) tabs_3_active_pane_t1

0xb228,	// (0x00042b41) bg_passive_tab_pane_cp2_ParamLimits

0xb228,	// (0x00042b41) bg_passive_tab_pane_cp2

0x8cae,	// (0x000405c7) tabs_3_passive_pane_g1

0x8cb6,	// (0x000405cf) tabs_3_passive_pane_t1

0xb228,	// (0x00042b41) bg_active_tab_pane_cp3_ParamLimits

0xb228,	// (0x00042b41) bg_active_tab_pane_cp3

0x8cc8,	// (0x000405e1) tabs_4_active_pane_g1

0x8cd0,	// (0x000405e9) tabs_4_active_pane_t1

0xb228,	// (0x00042b41) bg_passive_tab_pane_cp3_ParamLimits

0xb228,	// (0x00042b41) bg_passive_tab_pane_cp3

0x8cc8,	// (0x000405e1) tabs_4_1_passive_pane_g1

0x8cd0,	// (0x000405e9) tabs_4_1_passive_pane_t1

0x227e,	// (0x00039b97) list_highlight_pane_cp2

0xc6b2,	// (0x00043fcb) list_set_pane_ParamLimits

0xc6b2,	// (0x00043fcb) list_set_pane

0xc74c,	// (0x00044065) main_pane_set_t1_ParamLimits

0xc74c,	// (0x00044065) main_pane_set_t1

0xc76c,	// (0x00044085) main_pane_set_t2_ParamLimits

0xc76c,	// (0x00044085) main_pane_set_t2

0xc780,	// (0x00044099) main_pane_set_t3_ParamLimits

0xc780,	// (0x00044099) main_pane_set_t3

0xc792,	// (0x000440ab) main_pane_set_t4_ParamLimits

0xc792,	// (0x000440ab) main_pane_set_t4

0x0003,

0xf97c,	// (0x00047295) main_pane_set_t_ParamLimits

0xf97c,	// (0x00047295) main_pane_set_t

0xc7a4,	// (0x000440bd) setting_code_pane

0xc7ae,	// (0x000440c7) setting_slider_graphic_pane

0xc7ae,	// (0x000440c7) setting_slider_pane

0xc7ae,	// (0x000440c7) setting_text_pane

0xc7ae,	// (0x000440c7) setting_volume_pane

0x8ce2,	// (0x000405fb) volume_set_pane

0xb236,	// (0x00042b4f) bg_set_opt_pane_cp

0x8cea,	// (0x00040603) setting_slider_pane_t1

0x8d03,	// (0x0004061c) setting_slider_pane_t2

0x8d1d,	// (0x00040636) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00046e77) setting_slider_pane_t

0x8d35,	// (0x0004064e) slider_set_pane

0xb1da,	// (0x00042af3) bg_set_opt_pane_cp2

0xb244,	// (0x00042b5d) setting_slider_graphic_pane_g1

0x8d4b,	// (0x00040664) setting_slider_graphic_pane_t1

0x8d5b,	// (0x00040674) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00046e7e) setting_slider_graphic_pane_t

0x8d6b,	// (0x00040684) slider_set_pane_cp

0xb1da,	// (0x00042af3) input_focus_pane_cp1

0x3b26,	// (0x0003b43f) list_set_text_pane

0xb1d0,	// (0x00042ae9) setting_text_pane_g1

0xb1da,	// (0x00042af3) input_focus_pane_cp2

0xb1d0,	// (0x00042ae9) setting_code_pane_g1

0xb24d,	// (0x00042b66) setting_code_pane_t1

0xd02f,	// (0x00044948) set_text_pane_t1_ParamLimits

0xd02f,	// (0x00044948) set_text_pane_t1

0xb643,	// (0x00042f5c) set_opt_bg_pane_g1

0xb64b,	// (0x00042f64) set_opt_bg_pane_g2

0xc667,	// (0x00043f80) set_opt_bg_pane_g3

0xb65b,	// (0x00042f74) set_opt_bg_pane_g4

0xb663,	// (0x00042f7c) set_opt_bg_pane_g5

0xb66b,	// (0x00042f84) set_opt_bg_pane_g6

0xc671,	// (0x00043f8a) set_opt_bg_pane_g7

0xc679,	// (0x00043f92) set_opt_bg_pane_g8

0xc683,	// (0x00043f9c) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x00047282) set_opt_bg_pane_g

0xc65a,	// (0x00043f73) slider_set_pane_g1

0x0c06,	// (0x0003851f) slider_set_pane_g2

0x0006,

0xf95a,	// (0x00047273) slider_set_pane_g

0xa7a2,	// (0x000420bb) volume_set_pane_g1

0xa7aa,	// (0x000420c3) volume_set_pane_g2

0xa7b2,	// (0x000420cb) volume_set_pane_g3

0xa7ba,	// (0x000420d3) volume_set_pane_g4

0xa7c2,	// (0x000420db) volume_set_pane_g5

0xa7ca,	// (0x000420e3) volume_set_pane_g6

0xa7d2,	// (0x000420eb) volume_set_pane_g7

0xa7da,	// (0x000420f3) volume_set_pane_g8

0xa7e2,	// (0x000420fb) volume_set_pane_g9

0xa7ea,	// (0x00042103) volume_set_pane_g10

0x0009,

0xf932,	// (0x0004724b) volume_set_pane_g

0x8d73,	// (0x0004068c) indicator_pane_ParamLimits

0x8d73,	// (0x0004068c) indicator_pane

0x8d9b,	// (0x000406b4) main_idle_pane_g2_ParamLimits

0x8d9b,	// (0x000406b4) main_idle_pane_g2

0x8dd3,	// (0x000406ec) main_pane_idle_g1_ParamLimits

0x8dd3,	// (0x000406ec) main_pane_idle_g1

0xb25b,	// (0x00042b74) popup_clock_digital_analogue_window_ParamLimits

0xb25b,	// (0x00042b74) popup_clock_digital_analogue_window

0x8dfa,	// (0x00040713) soft_indicator_pane_ParamLimits

0x8dfa,	// (0x00040713) soft_indicator_pane

0x8e1e,	// (0x00040737) wallpaper_pane_ParamLimits

0x8e1e,	// (0x00040737) wallpaper_pane

0xb1d0,	// (0x00042ae9) wallpaper_pane_g1

0x8e30,	// (0x00040749) indicator_pane_g1_ParamLimits

0x8e30,	// (0x00040749) indicator_pane_g1

0x3f2e,	// (0x0003b847) navi_navi_icon_text_pane_srt_g1

0xb289,	// (0x00042ba2) soft_indicator_pane_t1

0xb2a3,	// (0x00042bbc) aid_ps_area_pane

0x8e46,	// (0x0004075f) aid_ps_clock_pane

0xb2b4,	// (0x00042bcd) aid_ps_indicator_pane

0xb2c0,	// (0x00042bd9) indicator_ps_pane_ParamLimits

0xb2c0,	// (0x00042bd9) indicator_ps_pane

0xb2cf,	// (0x00042be8) power_save_pane_g1_ParamLimits

0xb2cf,	// (0x00042be8) power_save_pane_g1

0xb2db,	// (0x00042bf4) power_save_pane_g2_ParamLimits

0xb2db,	// (0x00042bf4) power_save_pane_g2

0xed6e,	// (0x00046687) aid_navinavi_width_pane

0xb2a3,	// (0x00042bbc) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00046e83) power_save_pane_g_ParamLimits

0xf56a,	// (0x00046e83) power_save_pane_g

0xb2e9,	// (0x00042c02) power_save_pane_t1_ParamLimits

0xb2e9,	// (0x00042c02) power_save_pane_t1

0x8e46,	// (0x0004075f) aid_ps_clock_pane_ParamLimits

0xb2b4,	// (0x00042bcd) aid_ps_indicator_pane_ParamLimits

0xb2fb,	// (0x00042c14) power_save_pane_t4_ParamLimits

0xb2fb,	// (0x00042c14) power_save_pane_t4

0x0001,

0xf56f,	// (0x00046e88) power_save_pane_t_ParamLimits

0xf56f,	// (0x00046e88) power_save_pane_t

0xb325,	// (0x00042c3e) power_save_t3_ParamLimits

0xb325,	// (0x00042c3e) power_save_t3

0xb310,	// (0x00042c29) power_save_t2_ParamLimits

0xb310,	// (0x00042c29) power_save_t2

0xb33a,	// (0x00042c53) indicator_ps_pane_g1

0x8e54,	// (0x0004076d) ai_gene_pane_ParamLimits

0x8e54,	// (0x0004076d) ai_gene_pane

0x8e6b,	// (0x00040784) ai_links_pane_ParamLimits

0x8e6b,	// (0x00040784) ai_links_pane

0x8e83,	// (0x0004079c) indicator_pane_cp1_ParamLimits

0x8e83,	// (0x0004079c) indicator_pane_cp1

0x8e92,	// (0x000407ab) main_pane_idle_g1_cp_ParamLimits

0x8e92,	// (0x000407ab) main_pane_idle_g1_cp

0x8eaa,	// (0x000407c3) popup_ai_links_title_window

0x8eb3,	// (0x000407cc) soft_indicator_pane_cp1_ParamLimits

0x8eb3,	// (0x000407cc) soft_indicator_pane_cp1

0x38e0,	// (0x0003b1f9) ai_links_pane_g1

0x38e9,	// (0x0003b202) grid_ai_links_pane

0xc575,	// (0x00043e8e) ai_gene_pane_1

0x38ce,	// (0x0003b1e7) ai_gene_pane_2

0x38d7,	// (0x0003b1f0) list_highlight_pane_cp4

0xc551,	// (0x00043e6a) cell_ai_link_pane_ParamLimits

0xc551,	// (0x00043e6a) cell_ai_link_pane

0x389f,	// (0x0003b1b8) cell_ai_link_pane_g1

0xb467,	// (0x00042d80) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x00047226) cell_ai_link_pane_g

0xb1da,	// (0x00042af3) grid_highlight_cp2

0xb1da,	// (0x00042af3) bg_popup_sub_pane_cp1

0xb351,	// (0x00042c6a) popup_ai_links_title_window_t1

0x37ef,	// (0x0003b108) ai_gene_pane_1_g1_ParamLimits

0x37ef,	// (0x0003b108) ai_gene_pane_1_g1

0x37fb,	// (0x0003b114) ai_gene_pane_1_g2_ParamLimits

0x37fb,	// (0x0003b114) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0004721c) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0004721c) ai_gene_pane_1_g

0x3808,	// (0x0003b121) ai_gene_pane_1_t1_ParamLimits

0x3808,	// (0x0003b121) ai_gene_pane_1_t1

0x383c,	// (0x0003b155) grid_ai_soft_ind_pane

0x37da,	// (0x0003b0f3) ai_gene_pane_2_t1_ParamLimits

0x37da,	// (0x0003b0f3) ai_gene_pane_2_t1

0x8ec7,	// (0x000407e0) main_pane_empty_t1_ParamLimits

0x8ec7,	// (0x000407e0) main_pane_empty_t1

0x8edf,	// (0x000407f8) main_pane_empty_t2_ParamLimits

0x8edf,	// (0x000407f8) main_pane_empty_t2

0x8ef4,	// (0x0004080d) main_pane_empty_t3_ParamLimits

0x8ef4,	// (0x0004080d) main_pane_empty_t3

0x8f06,	// (0x0004081f) main_pane_empty_t4_ParamLimits

0x8f06,	// (0x0004081f) main_pane_empty_t4

0x8f18,	// (0x00040831) main_pane_empty_t5_ParamLimits

0x8f18,	// (0x00040831) main_pane_empty_t5

0x0004,

0xf574,	// (0x00046e8d) main_pane_empty_t_ParamLimits

0xf574,	// (0x00046e8d) main_pane_empty_t

0xb694,	// (0x00042fad) bg_popup_window_pane_ParamLimits

0xb694,	// (0x00042fad) bg_popup_window_pane

0xc4cb,	// (0x00043de4) find_popup_pane_cp2_ParamLimits

0xc4cb,	// (0x00043de4) find_popup_pane_cp2

0x3556,	// (0x0003ae6f) heading_pane_ParamLimits

0x3556,	// (0x0003ae6f) heading_pane

0xb1da,	// (0x00042af3) bg_popup_sub_pane

0xc44c,	// (0x00043d65) bg_popup_window_pane_g1_ParamLimits

0xc44c,	// (0x00043d65) bg_popup_window_pane_g1

0xc45b,	// (0x00043d74) bg_popup_window_pane_g2_ParamLimits

0xc45b,	// (0x00043d74) bg_popup_window_pane_g2

0xc467,	// (0x00043d80) bg_popup_window_pane_g3_ParamLimits

0xc467,	// (0x00043d80) bg_popup_window_pane_g3

0xc473,	// (0x00043d8c) bg_popup_window_pane_g4_ParamLimits

0xc473,	// (0x00043d8c) bg_popup_window_pane_g4

0xc482,	// (0x00043d9b) bg_popup_window_pane_g5_ParamLimits

0xc482,	// (0x00043d9b) bg_popup_window_pane_g5

0xc492,	// (0x00043dab) bg_popup_window_pane_g6_ParamLimits

0xc492,	// (0x00043dab) bg_popup_window_pane_g6

0xc49e,	// (0x00043db7) bg_popup_window_pane_g7_ParamLimits

0xc49e,	// (0x00043db7) bg_popup_window_pane_g7

0xc4ad,	// (0x00043dc6) bg_popup_window_pane_g8_ParamLimits

0xc4ad,	// (0x00043dc6) bg_popup_window_pane_g8

0xc4bc,	// (0x00043dd5) bg_popup_window_pane_g9_ParamLimits

0xc4bc,	// (0x00043dd5) bg_popup_window_pane_g9

0x3530,	// (0x0003ae49) bg_popup_window_pane_g10_ParamLimits

0x3530,	// (0x0003ae49) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x000471e4) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x000471e4) bg_popup_window_pane_g

0x3459,	// (0x0003ad72) bg_popup_heading_pane_ParamLimits

0x3459,	// (0x0003ad72) bg_popup_heading_pane

0x0d80,	// (0x00038699) tabs_4_passive_pane_cp_srt_ParamLimits

0x0d80,	// (0x00038699) tabs_4_passive_pane_cp_srt

0x0d92,	// (0x000386ab) tabs_4_passive_pane_srt_ParamLimits

0x346d,	// (0x0003ad86) heading_pane_g2

0x0d92,	// (0x000386ab) tabs_4_passive_pane_srt

0x27ff,	// (0x0003a118) bg_passive_tab_pane_cp3_srt_ParamLimits

0x27ff,	// (0x0003a118) bg_passive_tab_pane_cp3_srt

0x3475,	// (0x0003ad8e) heading_pane_t1_ParamLimits

0x3475,	// (0x0003ad8e) heading_pane_t1

0x348c,	// (0x0003ada5) heading_pane_t2_ParamLimits

0x348c,	// (0x0003ada5) heading_pane_t2

0x0001,

0xf8c6,	// (0x000471df) heading_pane_t_ParamLimits

0xf8c6,	// (0x000471df) heading_pane_t

0x2f96,	// (0x0003a8af) bg_popup_heading_pane_g1

0x3045,	// (0x0003a95e) bg_popup_heading_pane_g2

0x304f,	// (0x0003a968) bg_popup_heading_pane_g3

0x3059,	// (0x0003a972) bg_popup_heading_pane_g4

0x3063,	// (0x0003a97c) bg_popup_heading_pane_g5

0x306d,	// (0x0003a986) bg_popup_heading_pane_g6

0x3075,	// (0x0003a98e) bg_popup_heading_pane_g7

0x307d,	// (0x0003a996) bg_popup_heading_pane_g8

0x3087,	// (0x0003a9a0) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0004719b) bg_popup_heading_pane_g

0x278b,	// (0x0003a0a4) bg_popup_sub_pane_g1

0x279b,	// (0x0003a0b4) bg_popup_sub_pane_g2

0x2793,	// (0x0003a0ac) bg_popup_sub_pane_g3

0x27ab,	// (0x0003a0c4) bg_popup_sub_pane_g4

0x27a3,	// (0x0003a0bc) bg_popup_sub_pane_g5

0x27b3,	// (0x0003a0cc) bg_popup_sub_pane_g6

0x27bb,	// (0x0003a0d4) bg_popup_sub_pane_g7

0x27cb,	// (0x0003a0e4) bg_popup_sub_pane_g8

0x27c3,	// (0x0003a0dc) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x00047175) bg_popup_sub_pane_g

0xb228,	// (0x00042b41) bg_popup_window_pane_cp5_ParamLimits

0xb228,	// (0x00042b41) bg_popup_window_pane_cp5

0xb36e,	// (0x00042c87) popup_note_window_g1_ParamLimits

0xb36e,	// (0x00042c87) popup_note_window_g1

0xb37a,	// (0x00042c93) popup_note_window_t1_ParamLimits

0xb37a,	// (0x00042c93) popup_note_window_t1

0xb390,	// (0x00042ca9) popup_note_window_t2_ParamLimits

0xb390,	// (0x00042ca9) popup_note_window_t2

0xb3a6,	// (0x00042cbf) popup_note_window_t3_ParamLimits

0xb3a6,	// (0x00042cbf) popup_note_window_t3

0xb3bc,	// (0x00042cd5) popup_note_window_t4_ParamLimits

0xb3bc,	// (0x00042cd5) popup_note_window_t4

0xb3e4,	// (0x00042cfd) popup_note_window_t5_ParamLimits

0xb3e4,	// (0x00042cfd) popup_note_window_t5

0x0004,

0xf57f,	// (0x00046e98) popup_note_window_t_ParamLimits

0xf57f,	// (0x00046e98) popup_note_window_t

0xb408,	// (0x00042d21) bg_popup_window_pane_cp6_ParamLimits

0xb408,	// (0x00042d21) bg_popup_window_pane_cp6

0x2f12,	// (0x0003a82b) popup_note_image_window_g1_ParamLimits

0x2f12,	// (0x0003a82b) popup_note_image_window_g1

0xc2f1,	// (0x00043c0a) popup_note_image_window_g2_ParamLimits

0xc2f1,	// (0x00043c0a) popup_note_image_window_g2

0x0001,

0xf850,	// (0x00047169) popup_note_image_window_g_ParamLimits

0xf850,	// (0x00047169) popup_note_image_window_g

0x2f37,	// (0x0003a850) popup_note_image_window_t1_ParamLimits

0x2f37,	// (0x0003a850) popup_note_image_window_t1

0x2f50,	// (0x0003a869) popup_note_image_window_t2_ParamLimits

0x2f50,	// (0x0003a869) popup_note_image_window_t2

0x2f69,	// (0x0003a882) popup_note_image_window_t3_ParamLimits

0x2f69,	// (0x0003a882) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0004716e) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0004716e) popup_note_image_window_t

0x2ddb,	// (0x0003a6f4) bg_popup_window_pane_cp7_ParamLimits

0x2ddb,	// (0x0003a6f4) bg_popup_window_pane_cp7

0x2e0b,	// (0x0003a724) popup_note_wait_window_g1_ParamLimits

0x2e0b,	// (0x0003a724) popup_note_wait_window_g1

0x2e17,	// (0x0003a730) popup_note_wait_window_g2_ParamLimits

0x2e17,	// (0x0003a730) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x00047157) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x00047157) popup_note_wait_window_g

0x2e2f,	// (0x0003a748) popup_note_wait_window_t1_ParamLimits

0x2e2f,	// (0x0003a748) popup_note_wait_window_t1

0xc292,	// (0x00043bab) popup_note_wait_window_t2_ParamLimits

0xc292,	// (0x00043bab) popup_note_wait_window_t2

0xc2af,	// (0x00043bc8) popup_note_wait_window_t3_ParamLimits

0xc2af,	// (0x00043bc8) popup_note_wait_window_t3

0xc2c2,	// (0x00043bdb) popup_note_wait_window_t4_ParamLimits

0xc2c2,	// (0x00043bdb) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0004715e) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0004715e) popup_note_wait_window_t

0x2eab,	// (0x0003a7c4) wait_bar_pane_ParamLimits

0x2eab,	// (0x0003a7c4) wait_bar_pane

0xb1da,	// (0x00042af3) wait_anim_pane

0xb1da,	// (0x00042af3) wait_border_pane

0xb1d0,	// (0x00042ae9) wait_anim_pane_g1

0xb1d0,	// (0x00042ae9) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00047017) wait_anim_pane_g

0x2d87,	// (0x0003a6a0) wait_border_pane_g1

0x2d92,	// (0x0003a6ab) wait_border_pane_g2

0x2d9b,	// (0x0003a6b4) wait_border_pane_g3

0x0002,

0xf837,	// (0x00047150) wait_border_pane_g

0x2bf2,	// (0x0003a50b) bg_popup_window_pane_cp16_ParamLimits

0x2bf2,	// (0x0003a50b) bg_popup_window_pane_cp16

0xc242,	// (0x00043b5b) indicator_popup_pane_cp4_ParamLimits

0xc242,	// (0x00043b5b) indicator_popup_pane_cp4

0x2d06,	// (0x0003a61f) popup_query_data_window_t1_ParamLimits

0x2d06,	// (0x0003a61f) popup_query_data_window_t1

0x2d18,	// (0x0003a631) popup_query_data_window_t2_ParamLimits

0x2d18,	// (0x0003a631) popup_query_data_window_t2

0x2d31,	// (0x0003a64a) popup_query_data_window_t3_ParamLimits

0x2d31,	// (0x0003a64a) popup_query_data_window_t3

0x0002,

0xf830,	// (0x00047149) popup_query_data_window_t_ParamLimits

0xf830,	// (0x00047149) popup_query_data_window_t

0xc256,	// (0x00043b6f) query_popup_data_pane_ParamLimits

0xc256,	// (0x00043b6f) query_popup_data_pane

0xc26a,	// (0x00043b83) query_popup_data_pane_cp1_ParamLimits

0xc26a,	// (0x00043b83) query_popup_data_pane_cp1

0x2bf2,	// (0x0003a50b) bg_popup_window_pane_cp10_ParamLimits

0x2bf2,	// (0x0003a50b) bg_popup_window_pane_cp10

0xc1bd,	// (0x00043ad6) indicator_popup_pane_ParamLimits

0xc1bd,	// (0x00043ad6) indicator_popup_pane

0xc1df,	// (0x00043af8) popup_query_code_window_t1_ParamLimits

0xc1df,	// (0x00043af8) popup_query_code_window_t1

0xc1f9,	// (0x00043b12) popup_query_code_window_t2_ParamLimits

0xc1f9,	// (0x00043b12) popup_query_code_window_t2

0x2ca9,	// (0x0003a5c2) popup_query_code_window_t3_ParamLimits

0x2ca9,	// (0x0003a5c2) popup_query_code_window_t3

0x0002,

0xf829,	// (0x00047142) popup_query_code_window_t_ParamLimits

0xf829,	// (0x00047142) popup_query_code_window_t

0x2cd8,	// (0x0003a5f1) query_popup_pane_ParamLimits

0x2cd8,	// (0x0003a5f1) query_popup_pane

0xb408,	// (0x00042d21) bg_popup_window_pane_cp15_ParamLimits

0xb408,	// (0x00042d21) bg_popup_window_pane_cp15

0x8f2a,	// (0x00040843) indicator_popup_pane_cp1_ParamLimits

0x8f2a,	// (0x00040843) indicator_popup_pane_cp1

0x8f3d,	// (0x00040856) indicator_popup_pane_cp2_ParamLimits

0x8f3d,	// (0x00040856) indicator_popup_pane_cp2

0x8f50,	// (0x00040869) popup_query_data_code_window_g1_ParamLimits

0x8f50,	// (0x00040869) popup_query_data_code_window_g1

0xb426,	// (0x00042d3f) popup_query_data_code_window_t1_ParamLimits

0xb426,	// (0x00042d3f) popup_query_data_code_window_t1

0xb438,	// (0x00042d51) popup_query_data_code_window_t2_ParamLimits

0xb438,	// (0x00042d51) popup_query_data_code_window_t2

0x8f63,	// (0x0004087c) popup_query_data_code_window_t3_ParamLimits

0x8f63,	// (0x0004087c) popup_query_data_code_window_t3

0x8f79,	// (0x00040892) popup_query_data_code_window_t4_ParamLimits

0x8f79,	// (0x00040892) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00046ea3) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00046ea3) popup_query_data_code_window_t

0x0914,	// (0x0003822d) list_single_midp_graphic_pane_g3

0x8f91,	// (0x000408aa) query_popup_data_pane_cp2_ParamLimits

0x8fa4,	// (0x000408bd) query_popup_pane_cp2_ParamLimits

0x8fa4,	// (0x000408bd) query_popup_pane_cp2

0xb1da,	// (0x00042af3) bg_popup_window_pane_cp11

0x2bea,	// (0x0003a503) heading_pane_cp5

0xb494,	// (0x00042dad) listscroll_popup_info_pane

0xb1da,	// (0x00042af3) input_focus_pane_cp3

0xb44a,	// (0x00042d63) query_popup_pane_t1

0xb458,	// (0x00042d71) list_popup_info_pane_ParamLimits

0xb458,	// (0x00042d71) list_popup_info_pane

0xb467,	// (0x00042d80) listscroll_popup_info_pane_g1

0xb46f,	// (0x00042d88) scroll_pane_cp7

0x8fb7,	// (0x000408d0) popup_info_list_pane_t1_ParamLimits

0x8fb7,	// (0x000408d0) popup_info_list_pane_t1

0x8fd1,	// (0x000408ea) popup_info_list_pane_t2_ParamLimits

0x8fd1,	// (0x000408ea) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00046eac) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00046eac) popup_info_list_pane_t

0xb1da,	// (0x00042af3) bg_popup_window_pane_cp12

0xc955,	// (0x0004426e) find_popup_pane

0xb236,	// (0x00042b4f) bg_popup_window_pane_cp3

0xb479,	// (0x00042d92) heading_pane_cp3

0xb485,	// (0x00042d9e) listscroll_popup_graphic_pane

0xb1da,	// (0x00042af3) bg_popup_window_pane_cp4

0x903b,	// (0x00040954) heading_pane_cp4

0xb494,	// (0x00042dad) listscroll_popup_colour_pane

0x9043,	// (0x0004095c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9043,	// (0x0004095c) cell_large_graphic_colour_none_popup_pane

0x9057,	// (0x00040970) grid_large_graphic_colour_popup_pane_ParamLimits

0x9057,	// (0x00040970) grid_large_graphic_colour_popup_pane

0x907b,	// (0x00040994) listscroll_popup_colour_pane_g1_ParamLimits

0x907b,	// (0x00040994) listscroll_popup_colour_pane_g1

0x9092,	// (0x000409ab) listscroll_popup_colour_pane_g2_ParamLimits

0x9092,	// (0x000409ab) listscroll_popup_colour_pane_g2

0x90a9,	// (0x000409c2) listscroll_popup_colour_pane_g3_ParamLimits

0x90a9,	// (0x000409c2) listscroll_popup_colour_pane_g3

0x90b9,	// (0x000409d2) listscroll_popup_colour_pane_g4_ParamLimits

0x90b9,	// (0x000409d2) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00046eb1) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00046eb1) listscroll_popup_colour_pane_g

0xb49c,	// (0x00042db5) scroll_pane_cp6_ParamLimits

0xb49c,	// (0x00042db5) scroll_pane_cp6

0x90c9,	// (0x000409e2) cell_large_graphic_colour_popup_pane_ParamLimits

0x90c9,	// (0x000409e2) cell_large_graphic_colour_popup_pane

0x90e8,	// (0x00040a01) cell_large_graphic_colour_none_popup_pane_t1

0xb1da,	// (0x00042af3) grid_highlight_pane_cp5

0xb4ae,	// (0x00042dc7) cell_large_graphic_colour_popup_pane_g1

0xb4b6,	// (0x00042dcf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00046eba) cell_large_graphic_colour_popup_pane_g

0xb4be,	// (0x00042dd7) cell_large_graphic_colour_popup_pane_g2_copy1

0xb4c7,	// (0x00042de0) grid_highlight_pane_cp4

0xb4cf,	// (0x00042de8) bg_popup_window_pane_cp8_ParamLimits

0xb4cf,	// (0x00042de8) bg_popup_window_pane_cp8

0x90f7,	// (0x00040a10) popup_snote_single_text_window_g1_ParamLimits

0x90f7,	// (0x00040a10) popup_snote_single_text_window_g1

0x9109,	// (0x00040a22) popup_snote_single_text_window_t1_ParamLimits

0x9109,	// (0x00040a22) popup_snote_single_text_window_t1

0x911c,	// (0x00040a35) popup_snote_single_text_window_t2_ParamLimits

0x911c,	// (0x00040a35) popup_snote_single_text_window_t2

0x912f,	// (0x00040a48) popup_snote_single_text_window_t3_ParamLimits

0x912f,	// (0x00040a48) popup_snote_single_text_window_t3

0x9168,	// (0x00040a81) popup_snote_single_text_window_t4_ParamLimits

0x9168,	// (0x00040a81) popup_snote_single_text_window_t4

0x919c,	// (0x00040ab5) popup_snote_single_text_window_t5_ParamLimits

0x919c,	// (0x00040ab5) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00046ebf) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00046ebf) popup_snote_single_text_window_t

0xb4ea,	// (0x00042e03) bg_popup_window_pane_cp9_ParamLimits

0xb4ea,	// (0x00042e03) bg_popup_window_pane_cp9

0x90f7,	// (0x00040a10) popup_snote_single_graphic_window_g1_ParamLimits

0x90f7,	// (0x00040a10) popup_snote_single_graphic_window_g1

0xb4f8,	// (0x00042e11) popup_snote_single_graphic_window_g2_ParamLimits

0xb4f8,	// (0x00042e11) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00046eca) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00046eca) popup_snote_single_graphic_window_g

0xb504,	// (0x00042e1d) popup_snote_single_graphic_window_t1_ParamLimits

0xb504,	// (0x00042e1d) popup_snote_single_graphic_window_t1

0xb517,	// (0x00042e30) popup_snote_single_graphic_window_t2_ParamLimits

0xb517,	// (0x00042e30) popup_snote_single_graphic_window_t2

0x912f,	// (0x00040a48) popup_snote_single_graphic_window_t3_ParamLimits

0x912f,	// (0x00040a48) popup_snote_single_graphic_window_t3

0x9168,	// (0x00040a81) popup_snote_single_graphic_window_t4_ParamLimits

0x9168,	// (0x00040a81) popup_snote_single_graphic_window_t4

0x91cb,	// (0x00040ae4) popup_snote_single_graphic_window_t5_ParamLimits

0x91cb,	// (0x00040ae4) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00046ecf) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00046ecf) popup_snote_single_graphic_window_t

0x3e8c,	// (0x0003b7a5) grid_graphic_popup_pane_ParamLimits

0x3e8c,	// (0x0003b7a5) grid_graphic_popup_pane

0x3eb4,	// (0x0003b7cd) listscroll_popup_graphic_pane_g1_ParamLimits

0x3eb4,	// (0x0003b7cd) listscroll_popup_graphic_pane_g1

0xc8f3,	// (0x0004420c) listscroll_popup_graphic_pane_g2_ParamLimits

0xc8f3,	// (0x0004420c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x000472bf) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x000472bf) listscroll_popup_graphic_pane_g

0x3edc,	// (0x0003b7f5) scroll_pane_cp5

0xc8ae,	// (0x000441c7) cell_graphic_popup_pane_ParamLimits

0xc8ae,	// (0x000441c7) cell_graphic_popup_pane

0x3e0a,	// (0x0003b723) cell_graphic_popup_pane_g1

0x3e12,	// (0x0003b72b) cell_graphic_popup_pane_g2

0xb4be,	// (0x00042dd7) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x000472b8) cell_graphic_popup_pane_g

0x3e1b,	// (0x0003b734) cell_graphic_popup_pane_t2

0xb4c7,	// (0x00042de0) grid_highlight_pane_cp3

0xb53c,	// (0x00042e55) list_gen_pane_ParamLimits

0xb53c,	// (0x00042e55) list_gen_pane

0xb564,	// (0x00042e7d) scroll_pane

0xc818,	// (0x00044131) bg_list_pane_g1_ParamLimits

0xc818,	// (0x00044131) bg_list_pane_g1

0xc833,	// (0x0004414c) bg_list_pane_g2_ParamLimits

0xc833,	// (0x0004414c) bg_list_pane_g2

0xc846,	// (0x0004415f) bg_list_pane_g3_ParamLimits

0xc846,	// (0x0004415f) bg_list_pane_g3

0xc858,	// (0x00044171) bg_list_pane_g4_ParamLimits

0xc858,	// (0x00044171) bg_list_pane_g4

0xc86a,	// (0x00044183) bg_list_pane_g5_ParamLimits

0xc86a,	// (0x00044183) bg_list_pane_g5

0x0004,

0xf994,	// (0x000472ad) bg_list_pane_g_ParamLimits

0xf994,	// (0x000472ad) bg_list_pane_g

0xc7e1,	// (0x000440fa) list_double2_graphic_large_graphic_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_double2_graphic_large_graphic_pane

0xc7e1,	// (0x000440fa) list_double2_graphic_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_double2_graphic_pane

0xc7e1,	// (0x000440fa) list_double2_large_graphic_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_double2_large_graphic_pane

0xc7e1,	// (0x000440fa) list_double2_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_double2_pane

0xc7e1,	// (0x000440fa) list_double_graphic_heading_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_double_graphic_heading_pane

0xc7e1,	// (0x000440fa) list_double_graphic_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_double_graphic_pane

0xc7e1,	// (0x000440fa) list_double_heading_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_double_heading_pane

0xc7e1,	// (0x000440fa) list_double_large_graphic_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_double_large_graphic_pane

0xc7e1,	// (0x000440fa) list_double_number_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_double_number_pane

0xc7e1,	// (0x000440fa) list_double_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_double_pane

0xc7e1,	// (0x000440fa) list_double_time_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_double_time_pane

0xc7e1,	// (0x000440fa) list_setting_number_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_setting_number_pane

0xc7e1,	// (0x000440fa) list_setting_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_setting_pane

0xa88a,	// (0x000421a3) list_single_2graphic_pane_ParamLimits

0xa88a,	// (0x000421a3) list_single_2graphic_pane

0xa88a,	// (0x000421a3) list_single_graphic_heading_pane_ParamLimits

0xa88a,	// (0x000421a3) list_single_graphic_heading_pane

0xa88a,	// (0x000421a3) list_single_graphic_pane_ParamLimits

0xa88a,	// (0x000421a3) list_single_graphic_pane

0xa88a,	// (0x000421a3) list_single_heading_pane_ParamLimits

0xa88a,	// (0x000421a3) list_single_heading_pane

0xc7e1,	// (0x000440fa) list_single_large_graphic_pane_ParamLimits

0xc7e1,	// (0x000440fa) list_single_large_graphic_pane

0xa88a,	// (0x000421a3) list_single_number_heading_pane_ParamLimits

0xa88a,	// (0x000421a3) list_single_number_heading_pane

0xa88a,	// (0x000421a3) list_single_number_pane_ParamLimits

0xa88a,	// (0x000421a3) list_single_number_pane

0xa88a,	// (0x000421a3) list_single_pane_ParamLimits

0xa88a,	// (0x000421a3) list_single_pane

0xb1da,	// (0x00042af3) list_highlight_pane_cp1

0xd04a,	// (0x00044963) list_single_pane_g1_ParamLimits

0xd04a,	// (0x00044963) list_single_pane_g1

0xd056,	// (0x0004496f) list_single_pane_g2_ParamLimits

0xd056,	// (0x0004496f) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00046ee1) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00046ee1) list_single_pane_g

0xd296,	// (0x00044baf) list_single_pane_t1_ParamLimits

0xd296,	// (0x00044baf) list_single_pane_t1

0xd04a,	// (0x00044963) list_single_number_pane_g1_ParamLimits

0xd04a,	// (0x00044963) list_single_number_pane_g1

0xd056,	// (0x0004496f) list_single_number_pane_g2_ParamLimits

0xd056,	// (0x0004496f) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00046ee1) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00046ee1) list_single_number_pane_g

0xd1a7,	// (0x00044ac0) list_single_number_pane_t1_ParamLimits

0xd1a7,	// (0x00044ac0) list_single_number_pane_t1

0xd284,	// (0x00044b9d) list_single_number_pane_t2_ParamLimits

0xd284,	// (0x00044b9d) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0004726e) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0004726e) list_single_number_pane_t

0x9204,	// (0x00040b1d) list_single_graphic_pane_g1_ParamLimits

0x9204,	// (0x00040b1d) list_single_graphic_pane_g1

0xd04a,	// (0x00044963) list_single_graphic_pane_g2_ParamLimits

0xd04a,	// (0x00044963) list_single_graphic_pane_g2

0xd056,	// (0x0004496f) list_single_graphic_pane_g3_ParamLimits

0xd056,	// (0x0004496f) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00046eda) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00046eda) list_single_graphic_pane_g

0xd062,	// (0x0004497b) list_single_graphic_pane_t1_ParamLimits

0xd062,	// (0x0004497b) list_single_graphic_pane_t1

0xd04a,	// (0x00044963) list_single_heading_pane_g1_ParamLimits

0xd04a,	// (0x00044963) list_single_heading_pane_g1

0xd056,	// (0x0004496f) list_single_heading_pane_g2_ParamLimits

0xd056,	// (0x0004496f) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00046ee1) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00046ee1) list_single_heading_pane_g

0xd078,	// (0x00044991) list_single_heading_pane_t1_ParamLimits

0xd078,	// (0x00044991) list_single_heading_pane_t1

0xd08e,	// (0x000449a7) list_single_heading_pane_t2_ParamLimits

0xd08e,	// (0x000449a7) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00046ee6) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00046ee6) list_single_heading_pane_t

0xd04a,	// (0x00044963) list_single_number_heading_pane_g1_ParamLimits

0xd04a,	// (0x00044963) list_single_number_heading_pane_g1

0xd056,	// (0x0004496f) list_single_number_heading_pane_g2_ParamLimits

0xd056,	// (0x0004496f) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00046ee1) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00046ee1) list_single_number_heading_pane_g

0xd078,	// (0x00044991) list_single_number_heading_pane_t1_ParamLimits

0xd078,	// (0x00044991) list_single_number_heading_pane_t1

0xd0a0,	// (0x000449b9) list_single_number_heading_pane_t2_ParamLimits

0xd0a0,	// (0x000449b9) list_single_number_heading_pane_t2

0xd0b2,	// (0x000449cb) list_single_number_heading_pane_t3_ParamLimits

0xd0b2,	// (0x000449cb) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00046eeb) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00046eeb) list_single_number_heading_pane_t

0xd0c4,	// (0x000449dd) list_single_graphic_heading_pane_g1_ParamLimits

0xd0c4,	// (0x000449dd) list_single_graphic_heading_pane_g1

0x9210,	// (0x00040b29) list_single_graphic_heading_pane_g4_ParamLimits

0x9210,	// (0x00040b29) list_single_graphic_heading_pane_g4

0xd056,	// (0x0004496f) list_single_graphic_heading_pane_g5_ParamLimits

0xd056,	// (0x0004496f) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00046ef2) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00046ef2) list_single_graphic_heading_pane_g

0xd078,	// (0x00044991) list_single_graphic_heading_pane_t1_ParamLimits

0xd078,	// (0x00044991) list_single_graphic_heading_pane_t1

0x9221,	// (0x00040b3a) list_single_graphic_heading_pane_t2_ParamLimits

0x9221,	// (0x00040b3a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00046ef9) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00046ef9) list_single_graphic_heading_pane_t

0xd0d0,	// (0x000449e9) list_single_large_graphic_pane_g1_ParamLimits

0xd0d0,	// (0x000449e9) list_single_large_graphic_pane_g1

0xd0dc,	// (0x000449f5) list_single_large_graphic_pane_g2_ParamLimits

0xd0dc,	// (0x000449f5) list_single_large_graphic_pane_g2

0xd0e8,	// (0x00044a01) list_single_large_graphic_pane_g3_ParamLimits

0xd0e8,	// (0x00044a01) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00046efe) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00046efe) list_single_large_graphic_pane_g

0x2d92,	// (0x0003a6ab) wait_border_pane_g2_copy1

0x9233,	// (0x00040b4c) list_single_large_graphic_pane_g4_cp2

0xd0f4,	// (0x00044a0d) list_single_large_graphic_pane_t1_ParamLimits

0xd0f4,	// (0x00044a0d) list_single_large_graphic_pane_t1

0x923b,	// (0x00040b54) list_double_pane_g1_ParamLimits

0x923b,	// (0x00040b54) list_double_pane_g1

0xd10a,	// (0x00044a23) list_double_pane_g2_ParamLimits

0xd10a,	// (0x00044a23) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00046f05) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00046f05) list_double_pane_g

0xd116,	// (0x00044a2f) list_double_pane_t1_ParamLimits

0xd116,	// (0x00044a2f) list_double_pane_t1

0x9247,	// (0x00040b60) list_double_pane_t2_ParamLimits

0x9247,	// (0x00040b60) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00046f0a) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00046f0a) list_double_pane_t

0x9259,	// (0x00040b72) list_double2_pane_g1_ParamLimits

0x9259,	// (0x00040b72) list_double2_pane_g1

0xd10a,	// (0x00044a23) list_double2_pane_g2_ParamLimits

0xd10a,	// (0x00044a23) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00046f0f) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00046f0f) list_double2_pane_g

0xd116,	// (0x00044a2f) list_double2_pane_t1_ParamLimits

0xd116,	// (0x00044a2f) list_double2_pane_t1

0xd12c,	// (0x00044a45) list_double2_pane_t2_ParamLimits

0xd12c,	// (0x00044a45) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00046f14) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00046f14) list_double2_pane_t

0x923b,	// (0x00040b54) list_double_number_pane_g1_ParamLimits

0x923b,	// (0x00040b54) list_double_number_pane_g1

0xd10a,	// (0x00044a23) list_double_number_pane_g2_ParamLimits

0xd10a,	// (0x00044a23) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00046f05) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00046f05) list_double_number_pane_g

0x926a,	// (0x00040b83) list_double_number_pane_t1_ParamLimits

0x926a,	// (0x00040b83) list_double_number_pane_t1

0x927c,	// (0x00040b95) list_double_number_pane_t2_ParamLimits

0x927c,	// (0x00040b95) list_double_number_pane_t2

0x9292,	// (0x00040bab) list_double_number_pane_t3_ParamLimits

0x9292,	// (0x00040bab) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00046f19) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00046f19) list_double_number_pane_t

0x92a4,	// (0x00040bbd) list_double_graphic_pane_g1_ParamLimits

0x92a4,	// (0x00040bbd) list_double_graphic_pane_g1

0x92b0,	// (0x00040bc9) list_double_graphic_pane_g2_ParamLimits

0x92b0,	// (0x00040bc9) list_double_graphic_pane_g2

0x92bf,	// (0x00040bd8) list_double_graphic_pane_g3_ParamLimits

0x92bf,	// (0x00040bd8) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00046f20) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00046f20) list_double_graphic_pane_g

0x92d7,	// (0x00040bf0) list_double_graphic_pane_t1_ParamLimits

0x92d7,	// (0x00040bf0) list_double_graphic_pane_t1

0x92ed,	// (0x00040c06) list_double_graphic_pane_t2_ParamLimits

0x92ed,	// (0x00040c06) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00046f29) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00046f29) list_double_graphic_pane_t

0x92a4,	// (0x00040bbd) list_double2_graphic_pane_g1_ParamLimits

0x92a4,	// (0x00040bbd) list_double2_graphic_pane_g1

0x92ff,	// (0x00040c18) list_double2_graphic_pane_g2_ParamLimits

0x92ff,	// (0x00040c18) list_double2_graphic_pane_g2

0x930b,	// (0x00040c24) list_double2_graphic_pane_g3_ParamLimits

0x930b,	// (0x00040c24) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00046f2e) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00046f2e) list_double2_graphic_pane_g

0x927c,	// (0x00040b95) list_double2_graphic_pane_t1_ParamLimits

0x927c,	// (0x00040b95) list_double2_graphic_pane_t1

0x9317,	// (0x00040c30) list_double2_graphic_pane_t2_ParamLimits

0x9317,	// (0x00040c30) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00046f35) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00046f35) list_double2_graphic_pane_t

0x9329,	// (0x00040c42) list_double_large_graphic_pane_g1_ParamLimits

0x9329,	// (0x00040c42) list_double_large_graphic_pane_g1

0x9259,	// (0x00040b72) list_double_large_graphic_pane_g2_ParamLimits

0x9259,	// (0x00040b72) list_double_large_graphic_pane_g2

0xd10a,	// (0x00044a23) list_double_large_graphic_pane_g3_ParamLimits

0xd10a,	// (0x00044a23) list_double_large_graphic_pane_g3

0x9348,	// (0x00040c61) list_double_large_graphic_pane_g4_ParamLimits

0x9348,	// (0x00040c61) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00046f3a) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00046f3a) list_double_large_graphic_pane_g

0x935b,	// (0x00040c74) list_double_large_graphic_pane_t1_ParamLimits

0x935b,	// (0x00040c74) list_double_large_graphic_pane_t1

0x9374,	// (0x00040c8d) list_double_large_graphic_pane_t2_ParamLimits

0x9374,	// (0x00040c8d) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00046f45) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00046f45) list_double_large_graphic_pane_t

0x9386,	// (0x00040c9f) list_double2_large_graphic_pane_g1_ParamLimits

0x9386,	// (0x00040c9f) list_double2_large_graphic_pane_g1

0x9259,	// (0x00040b72) list_double2_large_graphic_pane_g2_ParamLimits

0x9259,	// (0x00040b72) list_double2_large_graphic_pane_g2

0xd10a,	// (0x00044a23) list_double2_large_graphic_pane_g3_ParamLimits

0xd10a,	// (0x00044a23) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00046f4a) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00046f4a) list_double2_large_graphic_pane_g

0x9392,	// (0x00040cab) list_double2_large_graphic_pane_t1_ParamLimits

0x9392,	// (0x00040cab) list_double2_large_graphic_pane_t1

0x93a8,	// (0x00040cc1) list_double2_large_graphic_pane_t2_ParamLimits

0x93a8,	// (0x00040cc1) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00046f51) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00046f51) list_double2_large_graphic_pane_t

0x93ba,	// (0x00040cd3) list_double_heading_pane_g1_ParamLimits

0x93ba,	// (0x00040cd3) list_double_heading_pane_g1

0x93cb,	// (0x00040ce4) list_double_heading_pane_g2_ParamLimits

0x93cb,	// (0x00040ce4) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00046f56) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00046f56) list_double_heading_pane_g

0x93d7,	// (0x00040cf0) list_double_heading_pane_t1_ParamLimits

0x93d7,	// (0x00040cf0) list_double_heading_pane_t1

0xd12c,	// (0x00044a45) list_double_heading_pane_t2_ParamLimits

0xd12c,	// (0x00044a45) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00046f5b) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00046f5b) list_double_heading_pane_t

0x93ed,	// (0x00040d06) list_double_graphic_heading_pane_g1_ParamLimits

0x93ed,	// (0x00040d06) list_double_graphic_heading_pane_g1

0x93ba,	// (0x00040cd3) list_double_graphic_heading_pane_g2_ParamLimits

0x93ba,	// (0x00040cd3) list_double_graphic_heading_pane_g2

0x93cb,	// (0x00040ce4) list_double_graphic_heading_pane_g3_ParamLimits

0x93cb,	// (0x00040ce4) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00046f60) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00046f60) list_double_graphic_heading_pane_g

0x93f9,	// (0x00040d12) list_double_graphic_heading_pane_t1_ParamLimits

0x93f9,	// (0x00040d12) list_double_graphic_heading_pane_t1

0x9317,	// (0x00040c30) list_double_graphic_heading_pane_t2_ParamLimits

0x9317,	// (0x00040c30) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00046f67) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00046f67) list_double_graphic_heading_pane_t

0x9259,	// (0x00040b72) list_double_time_pane_g1_ParamLimits

0x9259,	// (0x00040b72) list_double_time_pane_g1

0xd10a,	// (0x00044a23) list_double_time_pane_g2_ParamLimits

0xd10a,	// (0x00044a23) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x00046f0f) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x00046f0f) list_double_time_pane_g

0x940f,	// (0x00040d28) list_double_time_pane_t1_ParamLimits

0x940f,	// (0x00040d28) list_double_time_pane_t1

0x9425,	// (0x00040d3e) list_double_time_pane_t2_ParamLimits

0x9425,	// (0x00040d3e) list_double_time_pane_t2

0x9437,	// (0x00040d50) list_double_time_pane_t3_ParamLimits

0x9437,	// (0x00040d50) list_double_time_pane_t3

0x9449,	// (0x00040d62) list_double_time_pane_t4_ParamLimits

0x9449,	// (0x00040d62) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00046f6c) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00046f6c) list_double_time_pane_t

0x945b,	// (0x00040d74) list_setting_pane_g1_ParamLimits

0x945b,	// (0x00040d74) list_setting_pane_g1

0x9467,	// (0x00040d80) list_setting_pane_g2_ParamLimits

0x9467,	// (0x00040d80) list_setting_pane_g2

0x0001,

0xf65c,	// (0x00046f75) list_setting_pane_g_ParamLimits

0xf65c,	// (0x00046f75) list_setting_pane_g

0x9473,	// (0x00040d8c) list_setting_pane_t1_ParamLimits

0x9473,	// (0x00040d8c) list_setting_pane_t1

0x948d,	// (0x00040da6) list_setting_pane_t2_ParamLimits

0x948d,	// (0x00040da6) list_setting_pane_t2

0x0002,

0xf661,	// (0x00046f7a) list_setting_pane_t_ParamLimits

0xf661,	// (0x00046f7a) list_setting_pane_t

0x94cc,	// (0x00040de5) set_value_pane_cp_ParamLimits

0x94cc,	// (0x00040de5) set_value_pane_cp

0x94d8,	// (0x00040df1) list_setting_number_pane_g1_ParamLimits

0x94d8,	// (0x00040df1) list_setting_number_pane_g1

0x94e4,	// (0x00040dfd) list_setting_number_pane_g2_ParamLimits

0x94e4,	// (0x00040dfd) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x00046f81) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x00046f81) list_setting_number_pane_g

0x94f0,	// (0x00040e09) list_setting_number_pane_t1_ParamLimits

0x94f0,	// (0x00040e09) list_setting_number_pane_t1

0x9509,	// (0x00040e22) list_setting_number_pane_t2_ParamLimits

0x9509,	// (0x00040e22) list_setting_number_pane_t2

0x9523,	// (0x00040e3c) list_setting_number_pane_t3_ParamLimits

0x9523,	// (0x00040e3c) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00046f86) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00046f86) list_setting_number_pane_t

0x94cc,	// (0x00040de5) set_value_pane_ParamLimits

0x94cc,	// (0x00040de5) set_value_pane

0xb598,	// (0x00042eb1) bg_set_opt_pane_ParamLimits

0xb598,	// (0x00042eb1) bg_set_opt_pane

0x9566,	// (0x00040e7f) set_value_pane_t1

0xb5b9,	// (0x00042ed2) slider_set_pane_cp3

0x9574,	// (0x00040e8d) volume_small_pane_cp

0xb5c2,	// (0x00042edb) list_form_gen_pane

0xb5cb,	// (0x00042ee4) scroll_pane_cp8

0x957d,	// (0x00040e96) form_field_data_pane_ParamLimits

0x957d,	// (0x00040e96) form_field_data_pane

0x9594,	// (0x00040ead) form_field_data_wide_pane_ParamLimits

0x9594,	// (0x00040ead) form_field_data_wide_pane

0x95b4,	// (0x00040ecd) form_field_popup_pane_ParamLimits

0x95b4,	// (0x00040ecd) form_field_popup_pane

0x95cc,	// (0x00040ee5) form_field_popup_wide_pane_ParamLimits

0x95cc,	// (0x00040ee5) form_field_popup_wide_pane

0xd163,	// (0x00044a7c) form_field_slider_pane_ParamLimits

0xd163,	// (0x00044a7c) form_field_slider_pane

0x95e3,	// (0x00040efc) form_field_slider_wide_pane_ParamLimits

0x95e3,	// (0x00040efc) form_field_slider_wide_pane

0xb5dc,	// (0x00042ef5) data_form_pane

0x9600,	// (0x00040f19) form_field_data_pane_t1

0xb5e8,	// (0x00042f01) input_focus_pane

0x961a,	// (0x00040f33) data_form_wide_pane

0x9626,	// (0x00040f3f) form_field_data_wide_pane_t1

0xb4dc,	// (0x00042df5) input_focus_pane_cp6

0x9645,	// (0x00040f5e) form_field_popup_pane_t1

0xb5e8,	// (0x00042f01) input_focus_pane_cp7

0xb616,	// (0x00042f2f) list_form_pane

0x9667,	// (0x00040f80) form_field_popup_wide_pane_t1

0xb5e8,	// (0x00042f01) input_focus_pane_cp8

0xb622,	// (0x00042f3b) list_form_wide_pane

0x9684,	// (0x00040f9d) form_field_slider_pane_t1_ParamLimits

0x9684,	// (0x00040f9d) form_field_slider_pane_t1

0x969c,	// (0x00040fb5) form_field_slider_pane_t2_ParamLimits

0x969c,	// (0x00040fb5) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00046f96) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00046f96) form_field_slider_pane_t

0xb228,	// (0x00042b41) input_focus_pane_cp9_ParamLimits

0xb228,	// (0x00042b41) input_focus_pane_cp9

0x96b1,	// (0x00040fca) slider_cont_pane_ParamLimits

0x96b1,	// (0x00040fca) slider_cont_pane

0xb631,	// (0x00042f4a) form_field_slider_wide_pane_t1_ParamLimits

0xb631,	// (0x00042f4a) form_field_slider_wide_pane_t1

0x96c5,	// (0x00040fde) form_field_slider_wide_pane_t2_ParamLimits

0x96c5,	// (0x00040fde) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00046f9b) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00046f9b) form_field_slider_wide_pane_t

0xb228,	// (0x00042b41) input_focus_pane_cp10_ParamLimits

0xb228,	// (0x00042b41) input_focus_pane_cp10

0x96d7,	// (0x00040ff0) slider_cont_pane_cp1_ParamLimits

0x96d7,	// (0x00040ff0) slider_cont_pane_cp1

0x96eb,	// (0x00041004) slider_form_pane_cp

0xb643,	// (0x00042f5c) input_focus_pane_g1

0xb64b,	// (0x00042f64) input_focus_pane_g2

0xb653,	// (0x00042f6c) input_focus_pane_g3

0xb65b,	// (0x00042f74) input_focus_pane_g4

0xb663,	// (0x00042f7c) input_focus_pane_g5

0xb66b,	// (0x00042f84) input_focus_pane_g6

0xb673,	// (0x00042f8c) input_focus_pane_g7

0xb67b,	// (0x00042f94) input_focus_pane_g8

0xb683,	// (0x00042f9c) input_focus_pane_g9

0xb1d0,	// (0x00042ae9) input_focus_pane_g10

0x0009,

0xf687,	// (0x00046fa0) input_focus_pane_g

0x2d9b,	// (0x0003a6b4) wait_border_pane_g3_copy1

0x96f3,	// (0x0004100c) data_form_pane_t1

0xb1d0,	// (0x00042ae9) wait_anim_pane_g1_copy1

0xa85e,	// (0x00042177) data_form_wide_pane_t1

0x970d,	// (0x00041026) list_form_graphic_pane_cp_ParamLimits

0x970d,	// (0x00041026) list_form_graphic_pane_cp

0x3c9b,	// (0x0003b5b4) slider_form_pane_g1

0x3ca4,	// (0x0003b5bd) slider_form_pane_g2

0x0006,

0xf985,	// (0x0004729e) slider_form_pane_g

0x971f,	// (0x00041038) list_form_graphic_pane_ParamLimits

0x971f,	// (0x00041038) list_form_graphic_pane

0x9732,	// (0x0004104b) list_form_graphic_pane_g1

0x973a,	// (0x00041053) list_form_graphic_pane_t1_ParamLimits

0x973a,	// (0x00041053) list_form_graphic_pane_t1

0xb236,	// (0x00042b4f) list_highlight_pane_cp5_ParamLimits

0xb236,	// (0x00042b4f) list_highlight_pane_cp5

0xd182,	// (0x00044a9b) find_pane_g1

0xb68b,	// (0x00042fa4) input_find_pane

0x974f,	// (0x00041068) input_find_pane_g1_ParamLimits

0x974f,	// (0x00041068) input_find_pane_g1

0x975b,	// (0x00041074) input_find_pane_t1_ParamLimits

0x975b,	// (0x00041074) input_find_pane_t1

0x9770,	// (0x00041089) input_find_pane_t2_ParamLimits

0x9770,	// (0x00041089) input_find_pane_t2

0x0001,

0xf69c,	// (0x00046fb5) input_find_pane_t_ParamLimits

0xf69c,	// (0x00046fb5) input_find_pane_t

0xb694,	// (0x00042fad) input_focus_pane_cp5_ParamLimits

0xb694,	// (0x00042fad) input_focus_pane_cp5

0xb6a2,	// (0x00042fbb) bg_popup_window_pane_cp2_ParamLimits

0xb6a2,	// (0x00042fbb) bg_popup_window_pane_cp2

0xb6af,	// (0x00042fc8) listscroll_menu_pane_ParamLimits

0xb6af,	// (0x00042fc8) listscroll_menu_pane

0x9791,	// (0x000410aa) popup_submenu_window_ParamLimits

0x9791,	// (0x000410aa) popup_submenu_window

0xb6bb,	// (0x00042fd4) find_popup_pane_g1

0x97b9,	// (0x000410d2) input_popup_find_pane_cp

0xb694,	// (0x00042fad) input_focus_pane_cp4_ParamLimits

0xb694,	// (0x00042fad) input_focus_pane_cp4

0xb6c3,	// (0x00042fdc) input_popup_find_pane_t1_ParamLimits

0xb6c3,	// (0x00042fdc) input_popup_find_pane_t1

0xb1da,	// (0x00042af3) bg_popup_sub_pane_cp

0xb6f1,	// (0x0004300a) listscroll_popup_sub_pane

0xb6f9,	// (0x00043012) list_submenu_pane_ParamLimits

0xb6f9,	// (0x00043012) list_submenu_pane

0xb70a,	// (0x00043023) scroll_pane_cp4

0x97d1,	// (0x000410ea) list_single_popup_submenu_pane_ParamLimits

0x97d1,	// (0x000410ea) list_single_popup_submenu_pane

0x97e5,	// (0x000410fe) list_single_popup_submenu_pane_g1

0x97ed,	// (0x00041106) list_single_popup_submenu_pane_t1_ParamLimits

0x97ed,	// (0x00041106) list_single_popup_submenu_pane_t1

0xb228,	// (0x00042b41) bg_active_tab_pane_cp1_ParamLimits

0xb228,	// (0x00042b41) bg_active_tab_pane_cp1

0xb712,	// (0x0004302b) tabs_2_active_pane_g1

0x9802,	// (0x0004111b) tabs_2_active_pane_t1

0xb228,	// (0x00042b41) bg_passive_tab_pane_cp1_ParamLimits

0xb228,	// (0x00042b41) bg_passive_tab_pane_cp1

0xb712,	// (0x0004302b) tabs_2_passive_pane_g1

0x9802,	// (0x0004111b) tabs_2_passive_pane_t1

0xb236,	// (0x00042b4f) bg_active_tab_pane_cp4

0x9814,	// (0x0004112d) tabs_2_long_active_pane_t1

0x227e,	// (0x00039b97) bg_passive_tab_pane_cp4

0x091c,	// (0x00038235) list_single_midp_graphic_pane_g4_ParamLimits

0xb236,	// (0x00042b4f) bg_active_tab_pane_cp5

0x9827,	// (0x00041140) tabs_3_long_active_pane_t1

0x227e,	// (0x00039b97) bg_passive_tab_pane_cp5

0x091c,	// (0x00038235) list_single_midp_graphic_pane_g4

0xb236,	// (0x00042b4f) bg_popup_window_pane_cp13_ParamLimits

0xb236,	// (0x00042b4f) bg_popup_window_pane_cp13

0xb71a,	// (0x00043033) listscroll_popup_fast_pane_ParamLimits

0xb71a,	// (0x00043033) listscroll_popup_fast_pane

0xb726,	// (0x0004303f) grid_popup_fast_pane_ParamLimits

0xb726,	// (0x0004303f) grid_popup_fast_pane

0xb738,	// (0x00043051) scroll_pane_cp9_ParamLimits

0xb738,	// (0x00043051) scroll_pane_cp9

0x55bc,	// (0x0003ced5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x55bc,	// (0x0003ced5) list_single_graphic_hl_pane_t1_cp2

0xb74b,	// (0x00043064) input_focus_pane_cp20_ParamLimits

0xb74b,	// (0x00043064) input_focus_pane_cp20

0xb759,	// (0x00043072) query_popup_data_pane_t1_ParamLimits

0xb759,	// (0x00043072) query_popup_data_pane_t1

0xb76c,	// (0x00043085) query_popup_data_pane_t2_ParamLimits

0xb76c,	// (0x00043085) query_popup_data_pane_t2

0xb7b2,	// (0x000430cb) query_popup_data_pane_t3_ParamLimits

0xb7b2,	// (0x000430cb) query_popup_data_pane_t3

0xb7f3,	// (0x0004310c) query_popup_data_pane_t4_ParamLimits

0xb7f3,	// (0x0004310c) query_popup_data_pane_t4

0xb82f,	// (0x00043148) query_popup_data_pane_t5_ParamLimits

0xb82f,	// (0x00043148) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00046fba) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00046fba) query_popup_data_pane_t

0xb643,	// (0x00042f5c) bg_set_opt_pane_g1

0xb64b,	// (0x00042f64) bg_set_opt_pane_g2

0xb653,	// (0x00042f6c) bg_set_opt_pane_g3

0xb65b,	// (0x00042f74) bg_set_opt_pane_g4

0xb663,	// (0x00042f7c) bg_set_opt_pane_g5

0xb66b,	// (0x00042f84) bg_set_opt_pane_g6

0xb673,	// (0x00042f8c) bg_set_opt_pane_g7

0xb67b,	// (0x00042f94) bg_set_opt_pane_g8

0xb683,	// (0x00042f9c) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00046fc5) bg_set_opt_pane_g

0xf1ca,	// (0x00046ae3) control_top_pane_stacon_ParamLimits

0xf1ca,	// (0x00046ae3) control_top_pane_stacon

0xf21d,	// (0x00046b36) signal_pane_stacon_ParamLimits

0xf21d,	// (0x00046b36) signal_pane_stacon

0xf242,	// (0x00046b5b) stacon_top_pane_g1_ParamLimits

0xf242,	// (0x00046b5b) stacon_top_pane_g1

0xf264,	// (0x00046b7d) title_pane_stacon_ParamLimits

0xf264,	// (0x00046b7d) title_pane_stacon

0xf28e,	// (0x00046ba7) uni_indicator_pane_stacon_ParamLimits

0xf28e,	// (0x00046ba7) uni_indicator_pane_stacon

0xf2a3,	// (0x00046bbc) battery_pane_stacon_ParamLimits

0xf2a3,	// (0x00046bbc) battery_pane_stacon

0xf2e7,	// (0x00046c00) control_bottom_pane_stacon_ParamLimits

0xf2e7,	// (0x00046c00) control_bottom_pane_stacon

0xf30a,	// (0x00046c23) navi_pane_stacon_ParamLimits

0xf30a,	// (0x00046c23) navi_pane_stacon

0xf32d,	// (0x00046c46) stacon_bottom_pane_g1_ParamLimits

0xf32d,	// (0x00046c46) stacon_bottom_pane_g1

0xef07,	// (0x00046820) aid_levels_signal_lsc_ParamLimits

0xef07,	// (0x00046820) aid_levels_signal_lsc

0xef1d,	// (0x00046836) signal_pane_stacon_g1_ParamLimits

0xef1d,	// (0x00046836) signal_pane_stacon_g1

0xef31,	// (0x0004684a) signal_pane_stacon_g2_ParamLimits

0xef31,	// (0x0004684a) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00046fd8) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00046fd8) signal_pane_stacon_g

0xef66,	// (0x0004687f) title_pane_stacon_t1_ParamLimits

0xef66,	// (0x0004687f) title_pane_stacon_t1

0xb873,	// (0x0004318c) uni_indicator_pane_stacon_g1

0xb87d,	// (0x00043196) uni_indicator_pane_stacon_g2

0xb887,	// (0x000431a0) uni_indicator_pane_stacon_g3

0xb891,	// (0x000431aa) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00046fe4) uni_indicator_pane_stacon_g

0xef8b,	// (0x000468a4) control_top_pane_stacon_g1

0xef93,	// (0x000468ac) control_top_pane_stacon_t1_ParamLimits

0xef93,	// (0x000468ac) control_top_pane_stacon_t1

0xefca,	// (0x000468e3) aid_levels_battery_lsc_ParamLimits

0xefca,	// (0x000468e3) aid_levels_battery_lsc

0xefe1,	// (0x000468fa) battery_pane_stacon_g1_ParamLimits

0xefe1,	// (0x000468fa) battery_pane_stacon_g1

0xeff4,	// (0x0004690d) battery_pane_stacon_g2_ParamLimits

0xeff4,	// (0x0004690d) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00046fed) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00046fed) battery_pane_stacon_g

0xf032,	// (0x0004694b) navi_icon_pane_stacon

0xf046,	// (0x0004695f) navi_navi_pane_stacon

0xf032,	// (0x0004694b) navi_text_pane_stacon

0xef8b,	// (0x000468a4) control_bottom_pane_stacon_g1

0xf05a,	// (0x00046973) control_bottom_pane_stacon_t1_ParamLimits

0xf05a,	// (0x00046973) control_bottom_pane_stacon_t1

0x9853,	// (0x0004116c) grid_app_pane_ParamLimits

0x9853,	// (0x0004116c) grid_app_pane

0x988b,	// (0x000411a4) scroll_pane_cp15_ParamLimits

0x988b,	// (0x000411a4) scroll_pane_cp15

0x98a0,	// (0x000411b9) cell_app_pane_ParamLimits

0x98a0,	// (0x000411b9) cell_app_pane

0x98e5,	// (0x000411fe) cell_app_pane_g1_ParamLimits

0x98e5,	// (0x000411fe) cell_app_pane_g1

0xb8b5,	// (0x000431ce) cell_app_pane_g2_ParamLimits

0xb8b5,	// (0x000431ce) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00046ff2) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00046ff2) cell_app_pane_g

0x9909,	// (0x00041222) cell_app_pane_t1_ParamLimits

0x9909,	// (0x00041222) cell_app_pane_t1

0xb8c1,	// (0x000431da) grid_highlight_pane_ParamLimits

0xb8c1,	// (0x000431da) grid_highlight_pane

0xb643,	// (0x00042f5c) cell_highlight_pane_g1

0xb64b,	// (0x00042f64) cell_highlight_pane_g2

0xb653,	// (0x00042f6c) cell_highlight_pane_g3

0xb65b,	// (0x00042f74) cell_highlight_pane_g4

0xb663,	// (0x00042f7c) cell_highlight_pane_g5

0xb66b,	// (0x00042f84) cell_highlight_pane_g6

0xb673,	// (0x00042f8c) cell_highlight_pane_g7

0xb67b,	// (0x00042f94) cell_highlight_pane_g8

0xb683,	// (0x00042f9c) cell_highlight_pane_g9

0xb1d0,	// (0x00042ae9) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00046fa0) cell_highlight_pane_g

0xb8d2,	// (0x000431eb) bg_scroll_pane

0x9929,	// (0x00041242) scroll_handle_pane

0xb919,	// (0x00043232) scroll_bg_pane_g1

0xb92e,	// (0x00043247) scroll_bg_pane_g2

0xb946,	// (0x0004325f) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00046ff7) scroll_bg_pane_g

0x993d,	// (0x00041256) scroll_handle_focus_pane_ParamLimits

0x993d,	// (0x00041256) scroll_handle_focus_pane

0xb919,	// (0x00043232) scroll_handle_pane_g1

0xb95b,	// (0x00043274) scroll_handle_pane_g2

0xb946,	// (0x0004325f) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00046ffe) scroll_handle_pane_g

0xb694,	// (0x00042fad) bg_popup_sub_pane_cp21_ParamLimits

0xb694,	// (0x00042fad) bg_popup_sub_pane_cp21

0x994a,	// (0x00041263) popup_fep_japan_predictive_window_t1_ParamLimits

0x994a,	// (0x00041263) popup_fep_japan_predictive_window_t1

0x9961,	// (0x0004127a) popup_fep_japan_predictive_window_t2_ParamLimits

0x9961,	// (0x0004127a) popup_fep_japan_predictive_window_t2

0x9994,	// (0x000412ad) popup_fep_japan_predictive_window_t3_ParamLimits

0x9994,	// (0x000412ad) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00047005) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00047005) popup_fep_japan_predictive_window_t

0xb1da,	// (0x00042af3) bg_popup_sub_pane_cp23

0x99cb,	// (0x000412e4) listscroll_japin_cand_pane

0xb96f,	// (0x00043288) popup_fep_japan_candidate_window_t1

0xb97d,	// (0x00043296) candidate_pane_ParamLimits

0xb97d,	// (0x00043296) candidate_pane

0x99d3,	// (0x000412ec) scroll_pane_cp30

0xb98f,	// (0x000432a8) list_single_popup_jap_candidate_pane_ParamLimits

0xb98f,	// (0x000432a8) list_single_popup_jap_candidate_pane

0xb1da,	// (0x00042af3) list_highlight_pane_cp30

0xb9a4,	// (0x000432bd) list_single_popup_jap_candidate_pane_t1

0xb9b3,	// (0x000432cc) level_1_signal

0xb9c0,	// (0x000432d9) level_2_signal

0xb9cd,	// (0x000432e6) level_3_signal

0xb9da,	// (0x000432f3) level_4_signal

0xb9e7,	// (0x00043300) level_5_signal

0xb9f4,	// (0x0004330d) level_6_signal

0xba01,	// (0x0004331a) level_7_signal

0xb9b3,	// (0x000432cc) level_1_battery

0xb9c0,	// (0x000432d9) level_2_battery

0xb9cd,	// (0x000432e6) level_3_battery

0xb9da,	// (0x000432f3) level_4_battery

0xb9e7,	// (0x00043300) level_5_battery

0xb9f4,	// (0x0004330d) level_6_battery

0xba01,	// (0x0004331a) level_7_battery

0xba26,	// (0x0004333f) list_menu_pane_ParamLimits

0xba26,	// (0x0004333f) list_menu_pane

0xba3c,	// (0x00043355) scroll_pane_cp25_ParamLimits

0xba3c,	// (0x00043355) scroll_pane_cp25

0x99db,	// (0x000412f4) list_double2_graphic_pane_cp2_ParamLimits

0x99db,	// (0x000412f4) list_double2_graphic_pane_cp2

0x99db,	// (0x000412f4) list_double2_large_graphic_pane_cp2_ParamLimits

0x99db,	// (0x000412f4) list_double2_large_graphic_pane_cp2

0x99db,	// (0x000412f4) list_double2_pane_cp2_ParamLimits

0x99db,	// (0x000412f4) list_double2_pane_cp2

0x99db,	// (0x000412f4) list_double_graphic_pane_cp2_ParamLimits

0x99db,	// (0x000412f4) list_double_graphic_pane_cp2

0x99db,	// (0x000412f4) list_double_large_graphic_pane_cp2_ParamLimits

0x99db,	// (0x000412f4) list_double_large_graphic_pane_cp2

0x99db,	// (0x000412f4) list_double_number_pane_cp2_ParamLimits

0x99db,	// (0x000412f4) list_double_number_pane_cp2

0x99db,	// (0x000412f4) list_double_pane_cp2_ParamLimits

0x99db,	// (0x000412f4) list_double_pane_cp2

0x99ea,	// (0x00041303) list_single_2graphic_pane_cp2_ParamLimits

0x99ea,	// (0x00041303) list_single_2graphic_pane_cp2

0x99ea,	// (0x00041303) list_single_graphic_heading_pane_cp2_ParamLimits

0x99ea,	// (0x00041303) list_single_graphic_heading_pane_cp2

0x99ea,	// (0x00041303) list_single_graphic_pane_cp2_ParamLimits

0x99ea,	// (0x00041303) list_single_graphic_pane_cp2

0x99ea,	// (0x00041303) list_single_heading_pane_cp2_ParamLimits

0x99ea,	// (0x00041303) list_single_heading_pane_cp2

0xba65,	// (0x0004337e) list_single_large_graphic_pane_cp2_ParamLimits

0xba65,	// (0x0004337e) list_single_large_graphic_pane_cp2

0x99ea,	// (0x00041303) list_single_number_heading_pane_cp2_ParamLimits

0x99ea,	// (0x00041303) list_single_number_heading_pane_cp2

0x99ea,	// (0x00041303) list_single_number_pane_cp2_ParamLimits

0x99ea,	// (0x00041303) list_single_number_pane_cp2

0x99ea,	// (0x00041303) list_single_pane_cp2_ParamLimits

0x99ea,	// (0x00041303) list_single_pane_cp2

0xba7f,	// (0x00043398) bg_popup_sub_pane_cp22

0xf1b0,	// (0x00046ac9) popup_side_volume_key_window_g1

0xf1bc,	// (0x00046ad5) popup_side_volume_key_window_t1

0x9ab2,	// (0x000413cb) volume_small_pane_cp1

0xb228,	// (0x00042b41) bg_popup_sub_pane_cp24_ParamLimits

0xb228,	// (0x00042b41) bg_popup_sub_pane_cp24

0xba95,	// (0x000433ae) fep_china_uni_candidate_pane_ParamLimits

0xba95,	// (0x000433ae) fep_china_uni_candidate_pane

0xbaa9,	// (0x000433c2) fep_china_uni_entry_pane

0xbab9,	// (0x000433d2) popup_fep_china_uni_window_g1

0x9aba,	// (0x000413d3) fep_china_uni_entry_pane_g1

0x9ac2,	// (0x000413db) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00047036) fep_china_uni_entry_pane_g

0xbad5,	// (0x000433ee) fep_entry_item_pane

0xbadf,	// (0x000433f8) fep_candidate_item_pane

0x9aca,	// (0x000413e3) fep_china_uni_candidate_pane_g1

0xbae7,	// (0x00043400) fep_china_uni_candidate_pane_g2

0xbaef,	// (0x00043408) fep_china_uni_candidate_pane_g3

0x9ad2,	// (0x000413eb) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0004703b) fep_china_uni_candidate_pane_g

0xb1d0,	// (0x00042ae9) fep_entry_item_pane_g1

0xbaf7,	// (0x00043410) fep_entry_item_pane_t1_ParamLimits

0xbaf7,	// (0x00043410) fep_entry_item_pane_t1

0xbb0d,	// (0x00043426) fep_candidate_item_pane_t1_ParamLimits

0xbb0d,	// (0x00043426) fep_candidate_item_pane_t1

0xbb22,	// (0x0004343b) fep_candidate_item_pane_t2_ParamLimits

0xbb22,	// (0x0004343b) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00047044) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00047044) fep_candidate_item_pane_t

0xb236,	// (0x00042b4f) list_highlight_pane_cp31_ParamLimits

0xb236,	// (0x00042b4f) list_highlight_pane_cp31

0xbb34,	// (0x0004344d) level_1_signal_lsc

0xbb3d,	// (0x00043456) level_2_signal_lsc

0xbb46,	// (0x0004345f) level_3_signal_lsc

0xbb4f,	// (0x00043468) level_4_signal_lsc

0xbb58,	// (0x00043471) level_5_signal_lsc

0xbb61,	// (0x0004347a) level_6_signal_lsc

0xbb6a,	// (0x00043483) level_7_signal_lsc

0xbb6a,	// (0x00043483) level_1_battery_lsc

0xbb73,	// (0x0004348c) level_2_battery_lsc

0xbb7c,	// (0x00043495) level_3_battery_lsc

0xbb85,	// (0x0004349e) level_4_battery_lsc

0xbb8e,	// (0x000434a7) level_5_battery_lsc

0xbb97,	// (0x000434b0) level_6_battery_lsc

0xbb34,	// (0x0004344d) level_7_battery_lsc

0xbba0,	// (0x000434b9) scroll_handle_focus_pane_g1

0xbba9,	// (0x000434c2) scroll_handle_focus_pane_g2

0xbbb2,	// (0x000434cb) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00047049) scroll_handle_focus_pane_g

0x9ada,	// (0x000413f3) list_single_2graphic_pane_g1_ParamLimits

0x9ada,	// (0x000413f3) list_single_2graphic_pane_g1

0x9210,	// (0x00040b29) list_single_2graphic_pane_g2_ParamLimits

0x9210,	// (0x00040b29) list_single_2graphic_pane_g2

0xd056,	// (0x0004496f) list_single_2graphic_pane_g3_ParamLimits

0xd056,	// (0x0004496f) list_single_2graphic_pane_g3

0xd18b,	// (0x00044aa4) list_single_2graphic_pane_g4_ParamLimits

0xd18b,	// (0x00044aa4) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00047050) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00047050) list_single_2graphic_pane_g

0x9ae6,	// (0x000413ff) list_single_2graphic_pane_t1_ParamLimits

0x9ae6,	// (0x000413ff) list_single_2graphic_pane_t1

0x9b14,	// (0x0004142d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9b14,	// (0x0004142d) list_double2_graphic_large_graphic_pane_g1

0x9259,	// (0x00040b72) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9259,	// (0x00040b72) list_double2_graphic_large_graphic_pane_g2

0xd10a,	// (0x00044a23) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd10a,	// (0x00044a23) list_double2_graphic_large_graphic_pane_g3

0x9b26,	// (0x0004143f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9b26,	// (0x0004143f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00047059) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00047059) list_double2_graphic_large_graphic_pane_g

0x940f,	// (0x00040d28) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x940f,	// (0x00040d28) list_double2_graphic_large_graphic_pane_t1

0x9b32,	// (0x0004144b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9b32,	// (0x0004144b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00047062) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00047062) list_double2_graphic_large_graphic_pane_t

0x9bb7,	// (0x000414d0) popup_fast_swap_window_ParamLimits

0x9bb7,	// (0x000414d0) popup_fast_swap_window

0x9bd3,	// (0x000414ec) popup_side_volume_key_window

0xf3b8,	// (0x00046cd1) stacon_top_pane

0xf3c2,	// (0x00046cdb) status_pane_ParamLimits

0xf3c2,	// (0x00046cdb) status_pane

0x9bed,	// (0x00041506) status_small_pane

0xb1da,	// (0x00042af3) control_pane

0xb1da,	// (0x00042af3) stacon_bottom_pane

0xb5cb,	// (0x00042ee4) scroll_pane_cp121

0xb5c2,	// (0x00042edb) set_content_pane

0x9b44,	// (0x0004145d) bg_active_tab_pane_g1_cp1

0x9b4d,	// (0x00041466) bg_active_tab_pane_g2_cp1

0x9b56,	// (0x0004146f) bg_active_tab_pane_g3_cp1

0x9b44,	// (0x0004145d) bg_passive_tab_pane_g1_cp1

0x9b4d,	// (0x00041466) bg_passive_tab_pane_g2_cp1

0x9b56,	// (0x0004146f) bg_passive_tab_pane_g3_cp1

0x9b5f,	// (0x00041478) bg_active_tab_pane_g1_cp2

0x9b4d,	// (0x00041466) bg_active_tab_pane_g2_cp2

0x9b68,	// (0x00041481) bg_active_tab_pane_g3_cp2

0x9b5f,	// (0x00041478) bg_passive_tab_pane_g1_cp2

0x9b4d,	// (0x00041466) bg_passive_tab_pane_g2_cp2

0x9b68,	// (0x00041481) bg_passive_tab_pane_g3_cp2

0x9b71,	// (0x0004148a) bg_active_tab_pane_g1_cp3

0x9b4d,	// (0x00041466) bg_active_tab_pane_g2_cp3

0x9b7a,	// (0x00041493) bg_active_tab_pane_g3_cp3

0x9b71,	// (0x0004148a) bg_passive_tab_pane_g1_cp3

0x9b4d,	// (0x00041466) bg_passive_tab_pane_g2_cp3

0x9b7a,	// (0x00041493) bg_passive_tab_pane_g3_cp3

0x9b83,	// (0x0004149c) bg_active_tab_pane_g1_cp4

0x9b4d,	// (0x00041466) bg_active_tab_pane_g2_cp4

0x9b8e,	// (0x000414a7) bg_active_tab_pane_g3_cp4

0x9b83,	// (0x0004149c) bg_passive_tab_pane_g1_cp4

0x9b4d,	// (0x00041466) bg_passive_tab_pane_g2_cp4

0x9b8e,	// (0x000414a7) bg_passive_tab_pane_g3_cp4

0x9b99,	// (0x000414b2) bg_active_tab_pane_g1_cp5

0x9b4d,	// (0x00041466) bg_active_tab_pane_g2_cp5

0x9ba2,	// (0x000414bb) bg_active_tab_pane_g3_cp5

0x9b99,	// (0x000414b2) bg_passive_tab_pane_g1_cp5

0x9b4d,	// (0x00041466) bg_passive_tab_pane_g2_cp5

0x9ba2,	// (0x000414bb) bg_passive_tab_pane_g3_cp5

0x429c,	// (0x0003bbb5) list_set_graphic_pane_ParamLimits

0x429c,	// (0x0003bbb5) list_set_graphic_pane

0xb1da,	// (0x00042af3) bg_set_opt_pane_cp4

0xf349,	// (0x00046c62) list_set_graphic_pane_g1_ParamLimits

0xf349,	// (0x00046c62) list_set_graphic_pane_g1

0xf355,	// (0x00046c6e) list_set_graphic_pane_g2_ParamLimits

0xf355,	// (0x00046c6e) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00047067) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00047067) list_set_graphic_pane_g

0x0009,

0xfacc,	// (0x000473e5) volume_small_pane_cp_g

0x9bab,	// (0x000414c4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9bab,	// (0x000414c4) list_double2_large_graphic_pane_g1_cp2

0xf377,	// (0x00046c90) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf377,	// (0x00046c90) list_double2_large_graphic_pane_g2_cp2

0xf388,	// (0x00046ca1) list_double2_large_graphic_pane_g3_cp2

0xf390,	// (0x00046ca9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf390,	// (0x00046ca9) list_double2_large_graphic_pane_t1_cp2

0xf3a6,	// (0x00046cbf) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf3a6,	// (0x00046cbf) list_double2_large_graphic_pane_t2_cp2

0xc540,	// (0x00043e59) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc540,	// (0x00043e59) list_double_large_graphic_pane_g1_cp2

0x385d,	// (0x0003b176) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x385d,	// (0x0003b176) list_double_large_graphic_pane_g2_cp2

0xf4d2,	// (0x00046deb) list_double_large_graphic_pane_g3_cp2

0x386e,	// (0x0003b187) list_double_large_graphic_pane_g4_cp

0x3876,	// (0x0003b18f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3876,	// (0x0003b18f) list_double_large_graphic_pane_t1_cp2

0x388d,	// (0x0003b1a6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x388d,	// (0x0003b1a6) list_double_large_graphic_pane_t2_cp2

0xf3d0,	// (0x00046ce9) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf3d0,	// (0x00046ce9) list_double2_graphic_pane_g1_cp2

0xf3de,	// (0x00046cf7) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf3de,	// (0x00046cf7) list_double2_graphic_pane_g2_cp2

0xf3ef,	// (0x00046d08) list_double2_graphic_pane_g3_cp2

0xf3f9,	// (0x00046d12) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf3f9,	// (0x00046d12) list_double2_graphic_pane_t1_cp2

0xf40f,	// (0x00046d28) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf40f,	// (0x00046d28) list_double2_graphic_pane_t2_cp2

0xbbbb,	// (0x000434d4) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbbbb,	// (0x000434d4) list_single_number_heading_pane_g1_cp2

0xf421,	// (0x00046d3a) list_single_number_heading_pane_g2_cp2

0xf429,	// (0x00046d42) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf429,	// (0x00046d42) list_single_number_heading_pane_t1_cp2

0xf43f,	// (0x00046d58) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf43f,	// (0x00046d58) list_single_number_heading_pane_t2_cp2

0xf451,	// (0x00046d6a) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf451,	// (0x00046d6a) list_single_number_heading_pane_t3_cp2

0xbbbb,	// (0x000434d4) list_single_heading_pane_g1_cp2_ParamLimits

0xbbbb,	// (0x000434d4) list_single_heading_pane_g1_cp2

0xf421,	// (0x00046d3a) list_single_heading_pane_g2_cp2

0xf429,	// (0x00046d42) list_single_heading_pane_t1_cp2_ParamLimits

0xf429,	// (0x00046d42) list_single_heading_pane_t1_cp2

0x3656,	// (0x0003af6f) list_single_heading_pane_t2_cp2_ParamLimits

0x3656,	// (0x0003af6f) list_single_heading_pane_t2_cp2

0x359e,	// (0x0003aeb7) list_double_graphic_pane_g1_cp2_ParamLimits

0x359e,	// (0x0003aeb7) list_double_graphic_pane_g1_cp2

0x35aa,	// (0x0003aec3) list_double_graphic_pane_g2_cp2_ParamLimits

0x35aa,	// (0x0003aec3) list_double_graphic_pane_g2_cp2

0x35b9,	// (0x0003aed2) list_double_graphic_pane_g3_cp2

0x35c1,	// (0x0003aeda) list_double_graphic_pane_t1_cp2_ParamLimits

0x35c1,	// (0x0003aeda) list_double_graphic_pane_t1_cp2

0x35d7,	// (0x0003aef0) list_double_graphic_pane_t2_cp2_ParamLimits

0x35d7,	// (0x0003aef0) list_double_graphic_pane_t2_cp2

0xf4c6,	// (0x00046ddf) list_double_number_pane_g1_cp2_ParamLimits

0xf4c6,	// (0x00046ddf) list_double_number_pane_g1_cp2

0xf4d2,	// (0x00046deb) list_double_number_pane_g2_cp2

0x3562,	// (0x0003ae7b) list_double_number_pane_t1_cp2_ParamLimits

0x3562,	// (0x0003ae7b) list_double_number_pane_t1_cp2

0x3576,	// (0x0003ae8f) list_double_number_pane_t2_cp2_ParamLimits

0x3576,	// (0x0003ae8f) list_double_number_pane_t2_cp2

0x358c,	// (0x0003aea5) list_double_number_pane_t3_cp2_ParamLimits

0x358c,	// (0x0003aea5) list_double_number_pane_t3_cp2

0x344b,	// (0x0003ad64) list_single_graphic_pane_g1_cp2_ParamLimits

0x344b,	// (0x0003ad64) list_single_graphic_pane_g1_cp2

0xf522,	// (0x00046e3b) list_single_graphic_pane_g2_cp2_ParamLimits

0xf522,	// (0x00046e3b) list_single_graphic_pane_g2_cp2

0xf52e,	// (0x00046e47) list_single_graphic_pane_g3_cp2

0x3421,	// (0x0003ad3a) list_single_graphic_pane_t1_cp2_ParamLimits

0x3421,	// (0x0003ad3a) list_single_graphic_pane_t1_cp2

0xf522,	// (0x00046e3b) list_single_number_pane_g1_cp2_ParamLimits

0xf522,	// (0x00046e3b) list_single_number_pane_g1_cp2

0xf52e,	// (0x00046e47) list_single_number_pane_g2_cp2

0x3421,	// (0x0003ad3a) list_single_number_pane_t1_cp2_ParamLimits

0x3421,	// (0x0003ad3a) list_single_number_pane_t1_cp2

0x3437,	// (0x0003ad50) list_single_number_pane_t2_cp2_ParamLimits

0x3437,	// (0x0003ad50) list_single_number_pane_t2_cp2

0xf377,	// (0x00046c90) list_double2_pane_g1_cp2_ParamLimits

0xf377,	// (0x00046c90) list_double2_pane_g1_cp2

0xf388,	// (0x00046ca1) list_double2_pane_g2_cp2

0xf49e,	// (0x00046db7) list_double2_pane_t1_cp2_ParamLimits

0xf49e,	// (0x00046db7) list_double2_pane_t1_cp2

0xf4b4,	// (0x00046dcd) list_double2_pane_t2_cp2_ParamLimits

0xf4b4,	// (0x00046dcd) list_double2_pane_t2_cp2

0xf4c6,	// (0x00046ddf) list_double_pane_g1_cp2_ParamLimits

0xf4c6,	// (0x00046ddf) list_double_pane_g1_cp2

0xf4d2,	// (0x00046deb) list_double_pane_g2_cp2

0xf4da,	// (0x00046df3) list_double_pane_t1_cp2_ParamLimits

0xf4da,	// (0x00046df3) list_double_pane_t1_cp2

0xf4f0,	// (0x00046e09) list_double_pane_t2_cp2_ParamLimits

0xf4f0,	// (0x00046e09) list_double_pane_t2_cp2

0x9bf8,	// (0x00041511) list_single_pane_cp2_g3

0xf522,	// (0x00046e3b) list_single_pane_g1_cp2_ParamLimits

0xf522,	// (0x00046e3b) list_single_pane_g1_cp2

0xf52e,	// (0x00046e47) list_single_pane_g2_cp2

0xf536,	// (0x00046e4f) list_single_pane_t1_cp2_ParamLimits

0xf536,	// (0x00046e4f) list_single_pane_t1_cp2

0x9c00,	// (0x00041519) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9c00,	// (0x00041519) list_single_large_graphic_pane_g1_cp2

0x0004,	// (0x0003791d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0004,	// (0x0003791d) list_single_large_graphic_pane_g2_cp2

0x0010,	// (0x00037929) list_single_large_graphic_pane_g3_cp2

0x9c0c,	// (0x00041525) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9c0c,	// (0x00041525) list_single_large_graphic_pane_g4_cp1

0x0032,	// (0x0003794b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0032,	// (0x0003794b) list_single_large_graphic_pane_t1_cp2

0x33ed,	// (0x0003ad06) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x33ed,	// (0x0003ad06) list_single_graphic_heading_pane_g1_cp2

0x33ba,	// (0x0003acd3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x33ba,	// (0x0003acd3) list_single_graphic_heading_pane_g4_cp2

0xf52e,	// (0x00046e47) list_single_graphic_heading_pane_g5_cp2

0x33f9,	// (0x0003ad12) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x33f9,	// (0x0003ad12) list_single_graphic_heading_pane_t1_cp2

0x340f,	// (0x0003ad28) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x340f,	// (0x0003ad28) list_single_graphic_heading_pane_t2_cp2

0x33ae,	// (0x0003acc7) list_single_2graphic_pane_g1_cp2_ParamLimits

0x33ae,	// (0x0003acc7) list_single_2graphic_pane_g1_cp2

0x33ba,	// (0x0003acd3) list_single_2graphic_pane_g2_cp2_ParamLimits

0x33ba,	// (0x0003acd3) list_single_2graphic_pane_g2_cp2

0xf52e,	// (0x00046e47) list_single_2graphic_pane_g3_cp2

0x33cb,	// (0x0003ace4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x33cb,	// (0x0003ace4) list_single_2graphic_pane_g4_cp2

0x33d7,	// (0x0003acf0) list_single_2graphic_pane_t1_cp2_ParamLimits

0x33d7,	// (0x0003acf0) list_single_2graphic_pane_t1_cp2

0xb1d0,	// (0x00042ae9) list_highlight_pane_g10_cp1

0x2f96,	// (0x0003a8af) list_highlight_pane_g1_cp1

0x2f9e,	// (0x0003a8b7) list_highlight_pane_g2_cp1

0x2fa6,	// (0x0003a8bf) list_highlight_pane_g3_cp1

0x2fae,	// (0x0003a8c7) list_highlight_pane_g4_cp1

0x2fb6,	// (0x0003a8cf) list_highlight_pane_g5_cp1

0x2fbe,	// (0x0003a8d7) list_highlight_pane_g6_cp1

0x2fc6,	// (0x0003a8df) list_highlight_pane_g7_cp1

0x2fce,	// (0x0003a8e7) list_highlight_pane_g8_cp1

0x2fd6,	// (0x0003a8ef) list_highlight_pane_g9_cp1

0xc2d5,	// (0x00043bee) form_field_slider_pane_t3

0xc2e3,	// (0x00043bfc) form_field_slider_pane_t4

0x2eda,	// (0x0003a7f3) slider_form_pane_ParamLimits

0x2eda,	// (0x0003a7f3) slider_form_pane

0xb1da,	// (0x00042af3) control_abbreviations

0xb1da,	// (0x00042af3) control_conventions

0xb1da,	// (0x00042af3) control_definitions

0xb1da,	// (0x00042af3) format_table_attribute

0xc517,	// (0x00043e30) bg_popup_preview_window_pane_g9

0xb1da,	// (0x00042af3) format_table_data2

0xb1da,	// (0x00042af3) format_table_data3

0xb1da,	// (0x00042af3) format_table_data_example

0x0008,

0xb1da,	// (0x00042af3) intro_purpose

0xf8e5,	// (0x000471fe) bg_popup_preview_window_pane_g

0xb1da,	// (0x00042af3) texts_category

0xb1da,	// (0x00042af3) texts_graphics

0x0048,	// (0x00037961) text_digital

0x0057,	// (0x00037970) text_primary

0x0066,	// (0x0003797f) text_primary_small

0x0075,	// (0x0003798e) text_secondary

0x0084,	// (0x0003799d) text_title

0xc87e,	// (0x00044197) bg_passive_tab_pane_g1_cp3_srt

0x9b4d,	// (0x00041466) bg_passive_tab_pane_g2_cp3_srt

0xc887,	// (0x000441a0) bg_passive_tab_pane_g3_cp3_srt

0xb228,	// (0x00042b41) bg_active_tab_pane_cp3_srt_ParamLimits

0xb228,	// (0x00042b41) bg_active_tab_pane_cp3_srt

0xc890,	// (0x000441a9) tabs_4_active_pane_srt_g1

0xc898,	// (0x000441b1) tabs_4_active_pane_srt_t1_ParamLimits

0xc898,	// (0x000441b1) tabs_4_active_pane_srt_t1

0xc87e,	// (0x00044197) bg_active_tab_pane_g1_cp3_copy1

0x9b4d,	// (0x00041466) bg_active_tab_pane_g2_cp3_copy1

0xc887,	// (0x000441a0) bg_active_tab_pane_g3_cp3_copy1

0xb236,	// (0x00042b4f) tabs_2_long_active_pane_srt_ParamLimits

0xb236,	// (0x00042b4f) tabs_2_long_active_pane_srt

0xb236,	// (0x00042b4f) tabs_2_long_passive_pane_srt_ParamLimits

0xb236,	// (0x00042b4f) tabs_2_long_passive_pane_srt

0x227e,	// (0x00039b97) bg_passive_tab_pane_cp4_srt_ParamLimits

0x227e,	// (0x00039b97) bg_passive_tab_pane_cp4_srt

0xc631,	// (0x00043f4a) bg_passive_tab_pane_g1_cp4_srt

0x9b4d,	// (0x00041466) bg_passive_tab_pane_g2_cp4_srt

0xc63a,	// (0x00043f53) bg_passive_tab_pane_g3_cp4_srt

0xb236,	// (0x00042b4f) bg_active_tab_pane_cp4_srt_ParamLimits

0xb236,	// (0x00042b4f) bg_active_tab_pane_cp4_srt

0xc643,	// (0x00043f5c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc643,	// (0x00043f5c) tabs_2_long_active_pane_srt_t1

0xc631,	// (0x00043f4a) bg_active_tab_pane_g1_cp4_srt

0x9b4d,	// (0x00041466) bg_active_tab_pane_g2_cp4_srt

0xc63a,	// (0x00043f53) bg_active_tab_pane_g3_cp4_srt

0xb228,	// (0x00042b41) tabs_3_long_active_pane_srt_ParamLimits

0xb228,	// (0x00042b41) tabs_3_long_active_pane_srt

0xb228,	// (0x00042b41) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb228,	// (0x00042b41) tabs_3_long_passive_pane_cp_srt

0xb228,	// (0x00042b41) tabs_3_long_passive_pane_srt_ParamLimits

0xb228,	// (0x00042b41) tabs_3_long_passive_pane_srt

0x227e,	// (0x00039b97) bg_passive_tab_pane_cp5_srt_ParamLimits

0x227e,	// (0x00039b97) bg_passive_tab_pane_cp5_srt

0x9b99,	// (0x000414b2) bg_passive_tab_pane_g1_cp5_srt

0x9b4d,	// (0x00041466) bg_passive_tab_pane_g2_cp5_srt

0x9ba2,	// (0x000414bb) bg_passive_tab_pane_g3_cp5_srt

0xb236,	// (0x00042b4f) bg_active_tab_pane_cp5_srt_ParamLimits

0xb236,	// (0x00042b4f) bg_active_tab_pane_cp5_srt

0xc61b,	// (0x00043f34) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc61b,	// (0x00043f34) tabs_3_long_active_pane_srt_t1

0x9b99,	// (0x000414b2) bg_active_tab_pane_g1_cp5_srt

0x9b4d,	// (0x00041466) bg_active_tab_pane_g2_cp5_srt

0x9ba2,	// (0x000414bb) bg_active_tab_pane_g3_cp5_srt

0x3aae,	// (0x0003b3c7) navi_text_pane_srt_t1

0x3aa6,	// (0x0003b3bf) navi_icon_pane_srt_g1

0x20fa,	// (0x00039a13) midp_editing_number_pane_srt

0x0093,	// (0x000379ac) midp_ticker_pane_srt

0x2102,	// (0x00039a1b) midp_ticker_pane_srt_g1

0x210a,	// (0x00039a23) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00047086) midp_ticker_pane_srt_g

0x2112,	// (0x00039a2b) midp_ticker_pane_srt_t1

0x3a97,	// (0x0003b3b0) midp_editing_number_pane_t1_copy1

0x227e,	// (0x00039b97) listscroll_midp_pane

0x227e,	// (0x00039b97) midp_form_pane

0x9c85,	// (0x0004159e) midp_info_popup_window_ParamLimits

0x9c85,	// (0x0004159e) midp_info_popup_window

0xb694,	// (0x00042fad) bg_popup_sub_pane_cp50_ParamLimits

0xb694,	// (0x00042fad) bg_popup_sub_pane_cp50

0x2bde,	// (0x0003a4f7) listscroll_midp_info_pane_ParamLimits

0x2bde,	// (0x0003a4f7) listscroll_midp_info_pane

0x2bc6,	// (0x0003a4df) listscroll_form_midp_pane_ParamLimits

0x2bc6,	// (0x0003a4df) listscroll_form_midp_pane

0x2bd2,	// (0x0003a4eb) scroll_bar_cp050

0xc1b1,	// (0x00043aca) list_midp_pane

0xca24,	// (0x0004433d) signal_pane_g2_cp

0x2ae0,	// (0x0003a3f9) listscroll_midp_info_pane_t1_ParamLimits

0x2ae0,	// (0x0003a3f9) listscroll_midp_info_pane_t1

0xc103,	// (0x00043a1c) listscroll_midp_info_pane_t2_ParamLimits

0xc103,	// (0x00043a1c) listscroll_midp_info_pane_t2

0xc141,	// (0x00043a5a) listscroll_midp_info_pane_t3_ParamLimits

0xc141,	// (0x00043a5a) listscroll_midp_info_pane_t3

0xc17b,	// (0x00043a94) listscroll_midp_info_pane_t4_ParamLimits

0xc17b,	// (0x00043a94) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x00047139) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x00047139) listscroll_midp_info_pane_t

0xb70a,	// (0x00043023) scroll_pane_cp21

0x2a80,	// (0x0003a399) form_midp_field_choice_group_pane

0xc0c6,	// (0x000439df) form_midp_field_text_pane

0x2ac6,	// (0x0003a3df) form_midp_field_time_pane

0x2ace,	// (0x0003a3e7) form_midp_gauge_slider_pane

0x2ad7,	// (0x0003a3f0) form_midp_gauge_wait_pane

0xb1da,	// (0x00042af3) form_midp_image_pane

0xa780,	// (0x00042099) list_single_midp_pane_ParamLimits

0xa780,	// (0x00042099) list_single_midp_pane

0xc0a4,	// (0x000439bd) form_midp_field_text_pane_t1

0x27ff,	// (0x0003a118) input_focus_pane_cp050

0x2a6f,	// (0x0003a388) list_midp_form_text_pane

0x2a04,	// (0x0003a31d) form_midp_field_choice_group_pane_t1

0x2a12,	// (0x0003a32b) input_focus_pane_cp051

0x2a26,	// (0x0003a33f) list_midp_choice_pane

0xb1da,	// (0x00042af3) status_idle_pane

0x29e8,	// (0x0003a301) form_midp_field_time_pane_t1

0xb1d0,	// (0x00042ae9) wait_anim_pane_g2_copy1

0x29f6,	// (0x0003a30f) form_midp_field_time_pane_t2

0x0001,

0x2062,	// (0x0003997b) aid_navinavi_width_2_pane

0xf81b,	// (0x00047134) form_midp_field_time_pane_t

0xb1da,	// (0x00042af3) input_focus_pane_cp052

0xb1da,	// (0x00042af3) bg_input_focus_pane_cp040

0x29a8,	// (0x0003a2c1) form_midp_gauge_slider_pane_t1

0x29b6,	// (0x0003a2cf) form_midp_gauge_slider_pane_t2

0xc088,	// (0x000439a1) form_midp_gauge_slider_pane_t3

0xc096,	// (0x000439af) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0004712b) form_midp_gauge_slider_pane_t

0x29e0,	// (0x0003a2f9) form_midp_slider_pane

0xb236,	// (0x00042b4f) bg_input_focus_pane_cp041_ParamLimits

0xb236,	// (0x00042b4f) bg_input_focus_pane_cp041

0x2975,	// (0x0003a28e) form_midp_gauge_wait_pane_t1_ParamLimits

0x2975,	// (0x0003a28e) form_midp_gauge_wait_pane_t1

0x2987,	// (0x0003a2a0) form_midp_gauge_wait_pane_t2_ParamLimits

0x2987,	// (0x0003a2a0) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x00047126) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x00047126) form_midp_gauge_wait_pane_t

0x2999,	// (0x0003a2b2) form_midp_wait_pane_ParamLimits

0x2999,	// (0x0003a2b2) form_midp_wait_pane

0xc052,	// (0x0004396b) form_midp_image_pane_g1

0xc05b,	// (0x00043974) form_midp_image_pane_t1

0xc06a,	// (0x00043983) form_midp_image_pane_t2

0xc079,	// (0x00043992) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0004711f) form_midp_image_pane_t

0x2936,	// (0x0003a24f) list_single_midp_pane_g1

0xd275,	// (0x00044b8e) list_single_midp_pane_t1

0xc03c,	// (0x00043955) list_midp_form_item_pane_ParamLimits

0xc03c,	// (0x00043955) list_midp_form_item_pane

0x200a,	// (0x00039923) list_midp_form_item_pane_t1

0x2019,	// (0x00039932) midp_ticker_pane_g1

0x2025,	// (0x0003993e) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0004706c) midp_ticker_pane_g

0x2031,	// (0x0003994a) midp_ticker_pane_t1

0x3ce8,	// (0x0003b601) midp_editing_number_pane_t1

0x3cc6,	// (0x0003b5df) midp_editing_number_pane

0x3cd5,	// (0x0003b5ee) midp_ticker_pane

0x3a87,	// (0x0003b3a0) ai_message_heading_pane

0xb1da,	// (0x00042af3) bg_popup_window_pane_cp14

0x3a8f,	// (0x0003b3a8) listscroll_ai_message_pane

0x3a11,	// (0x0003b32a) ai_message_heading_pane_g1_ParamLimits

0x3a11,	// (0x0003b32a) ai_message_heading_pane_g1

0xc5e3,	// (0x00043efc) ai_message_heading_pane_g2_ParamLimits

0xc5e3,	// (0x00043efc) ai_message_heading_pane_g2

0x3a29,	// (0x0003b342) ai_message_heading_pane_g3_ParamLimits

0x3a29,	// (0x0003b342) ai_message_heading_pane_g3

0x3a35,	// (0x0003b34e) ai_message_heading_pane_g4_ParamLimits

0x3a35,	// (0x0003b34e) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x00047260) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x00047260) ai_message_heading_pane_g

0xc5ef,	// (0x00043f08) ai_message_heading_pane_t1_ParamLimits

0xc5ef,	// (0x00043f08) ai_message_heading_pane_t1

0xc609,	// (0x00043f22) ai_message_heading_pane_t2_ParamLimits

0xc609,	// (0x00043f22) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x00047269) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x00047269) ai_message_heading_pane_t

0x3a6d,	// (0x0003b386) bg_popup_heading_pane_cp1_ParamLimits

0x3a6d,	// (0x0003b386) bg_popup_heading_pane_cp1

0x39ff,	// (0x0003b318) list_ai_message_pane_ParamLimits

0x39ff,	// (0x0003b318) list_ai_message_pane

0xb70a,	// (0x00043023) scroll_pane_cp10

0x399b,	// (0x0003b2b4) list_ai_message_pane_g1

0x39a3,	// (0x0003b2bc) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0004723d) list_ai_message_pane_g

0x39ab,	// (0x0003b2c4) list_ai_message_pane_t1_ParamLimits

0x39ab,	// (0x0003b2c4) list_ai_message_pane_t1

0x39c0,	// (0x0003b2d9) list_ai_message_pane_t2_ParamLimits

0x39c0,	// (0x0003b2d9) list_ai_message_pane_t2

0x39d5,	// (0x0003b2ee) list_ai_message_pane_t3_ParamLimits

0x39d5,	// (0x0003b2ee) list_ai_message_pane_t3

0x39ea,	// (0x0003b303) list_ai_message_pane_t4_ParamLimits

0x39ea,	// (0x0003b303) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x00047242) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x00047242) list_ai_message_pane_t

0xc5bf,	// (0x00043ed8) cell_ai_soft_ind_pane_ParamLimits

0xc5bf,	// (0x00043ed8) cell_ai_soft_ind_pane

0x2043,	// (0x0003995c) cell_ai_soft_ind_pane_g1_ParamLimits

0x2043,	// (0x0003995c) cell_ai_soft_ind_pane_g1

0xb1da,	// (0x00042af3) grid_highlight_cp1

0x2050,	// (0x00039969) text_secondary_cp56_ParamLimits

0x2050,	// (0x00039969) text_secondary_cp56

0x395b,	// (0x0003b274) example_general_pane_ParamLimits

0x395b,	// (0x0003b274) example_general_pane

0x3967,	// (0x0003b280) example_parent_pane_g1_ParamLimits

0x3967,	// (0x0003b280) example_parent_pane_g1

0x3973,	// (0x0003b28c) example_parent_pane_t1_ParamLimits

0x3973,	// (0x0003b28c) example_parent_pane_t1

0xa379,	// (0x00041c92) popup_preview_text_window_ParamLimits

0xa379,	// (0x00041c92) popup_preview_text_window

0xf51a,	// (0x00046e33) list_single_pane_cp2_g4

0xb408,	// (0x00042d21) bg_popup_preview_window_pane_ParamLimits

0xb408,	// (0x00042d21) bg_popup_preview_window_pane

0xc51f,	// (0x00043e38) popup_preview_text_window_t1_ParamLimits

0xc51f,	// (0x00043e38) popup_preview_text_window_t1

0x36c6,	// (0x0003afdf) popup_preview_text_window_t2_ParamLimits

0x36c6,	// (0x0003afdf) popup_preview_text_window_t2

0x370f,	// (0x0003b028) popup_preview_text_window_t3_ParamLimits

0x370f,	// (0x0003b028) popup_preview_text_window_t3

0x3754,	// (0x0003b06d) popup_preview_text_window_t4_ParamLimits

0x3754,	// (0x0003b06d) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x00047211) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x00047211) popup_preview_text_window_t

0x37d2,	// (0x0003b0eb) scroll_pane_cp11

0x278b,	// (0x0003a0a4) bg_popup_preview_window_pane_g1

0xc4df,	// (0x00043df8) bg_popup_preview_window_pane_g2

0xc4e7,	// (0x00043e00) bg_popup_preview_window_pane_g3

0xc4ef,	// (0x00043e08) bg_popup_preview_window_pane_g4

0xc4f7,	// (0x00043e10) bg_popup_preview_window_pane_g5

0xc4ff,	// (0x00043e18) bg_popup_preview_window_pane_g6

0xc507,	// (0x00043e20) bg_popup_preview_window_pane_g7

0xc50f,	// (0x00043e28) bg_popup_preview_window_pane_g8

0xed7a,	// (0x00046693) aid_popup_width_pane

0xa2f5,	// (0x00041c0e) popup_midp_note_alarm_window_ParamLimits

0xa2f5,	// (0x00041c0e) popup_midp_note_alarm_window

0xb5dc,	// (0x00042ef5) data_form_pane_ParamLimits

0x95f6,	// (0x00040f0f) form_field_data_pane_g1

0x9600,	// (0x00040f19) form_field_data_pane_t1_ParamLimits

0xb5e8,	// (0x00042f01) input_focus_pane_ParamLimits

0x961a,	// (0x00040f33) data_form_wide_pane_ParamLimits

0xd176,	// (0x00044a8f) form_field_data_wide_pane_g1

0x9626,	// (0x00040f3f) form_field_data_wide_pane_t1_ParamLimits

0xb4dc,	// (0x00042df5) input_focus_pane_cp6_ParamLimits

0x97c3,	// (0x000410dc) input_popup_find_pane_g1_ParamLimits

0x97c3,	// (0x000410dc) input_popup_find_pane_g1

0xf005,	// (0x0004691e) aid_navi_side_left_pane

0xf01a,	// (0x00046933) aid_navi_side_right_pane

0x3091,	// (0x0003a9aa) bg_popup_window_pane_cp30_ParamLimits

0x3091,	// (0x0003a9aa) bg_popup_window_pane_cp30

0x310b,	// (0x0003aa24) popup_midp_note_alarm_window_g1_ParamLimits

0x310b,	// (0x0003aa24) popup_midp_note_alarm_window_g1

0x313b,	// (0x0003aa54) popup_midp_note_alarm_window_t1_ParamLimits

0x313b,	// (0x0003aa54) popup_midp_note_alarm_window_t1

0xc328,	// (0x00043c41) popup_midp_note_alarm_window_t2_ParamLimits

0xc328,	// (0x00043c41) popup_midp_note_alarm_window_t2

0xc3d6,	// (0x00043cef) popup_midp_note_alarm_window_t3_ParamLimits

0xc3d6,	// (0x00043cef) popup_midp_note_alarm_window_t3

0xc3fe,	// (0x00043d17) popup_midp_note_alarm_window_t4_ParamLimits

0xc3fe,	// (0x00043d17) popup_midp_note_alarm_window_t4

0x32d2,	// (0x0003abeb) popup_midp_note_alarm_window_t5_ParamLimits

0x32d2,	// (0x0003abeb) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x000471ae) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x000471ae) popup_midp_note_alarm_window_t

0x337e,	// (0x0003ac97) wait_bar_pane_cp1_ParamLimits

0x337e,	// (0x0003ac97) wait_bar_pane_cp1

0xb1da,	// (0x00042af3) wait_anim_pane_copy1

0xb1da,	// (0x00042af3) wait_border_pane_copy1

0x2d87,	// (0x0003a6a0) wait_border_pane_g1_copy1

0x963d,	// (0x00040f56) form_field_popup_pane_g1

0x9645,	// (0x00040f5e) form_field_popup_pane_t1_ParamLimits

0xb5e8,	// (0x00042f01) input_focus_pane_cp7_ParamLimits

0xb616,	// (0x00042f2f) list_form_pane_ParamLimits

0x965f,	// (0x00040f78) form_field_popup_wide_pane_g1

0x9667,	// (0x00040f80) form_field_popup_wide_pane_t1_ParamLimits

0xb5e8,	// (0x00042f01) input_focus_pane_cp8_ParamLimits

0xb622,	// (0x00042f3b) list_form_wide_pane_ParamLimits

0x3e76,	// (0x0003b78f) aid_size_cell_graphic_pane

0x96f3,	// (0x0004100c) data_form_pane_t1_ParamLimits

0xa85e,	// (0x00042177) data_form_wide_pane_t1_ParamLimits

0xbcab,	// (0x000435c4) bg_status_flat_pane

0x8c22,	// (0x0004053b) title_pane_t1_ParamLimits

0xb1f0,	// (0x00042b09) title_pane_t2_ParamLimits

0xb216,	// (0x00042b2f) title_pane_t3_ParamLimits

0xf557,	// (0x00046e70) title_pane_t_ParamLimits

0xb9b3,	// (0x000432cc) level_1_signal_ParamLimits

0xb9c0,	// (0x000432d9) level_2_signal_ParamLimits

0xb9cd,	// (0x000432e6) level_3_signal_ParamLimits

0xb9da,	// (0x000432f3) level_4_signal_ParamLimits

0xb9e7,	// (0x00043300) level_5_signal_ParamLimits

0xb9f4,	// (0x0004330d) level_6_signal_ParamLimits

0xba01,	// (0x0004331a) level_7_signal_ParamLimits

0xb9b3,	// (0x000432cc) level_1_battery_ParamLimits

0xb9c0,	// (0x000432d9) level_2_battery_ParamLimits

0xb9cd,	// (0x000432e6) level_3_battery_ParamLimits

0xb9da,	// (0x000432f3) level_4_battery_ParamLimits

0xb9e7,	// (0x00043300) level_5_battery_ParamLimits

0xb9f4,	// (0x0004330d) level_6_battery_ParamLimits

0xba01,	// (0x0004331a) level_7_battery_ParamLimits

0x2f96,	// (0x0003a8af) bg_status_flat_pane_g1

0x2f9e,	// (0x0003a8b7) bg_status_flat_pane_g2

0x2fa6,	// (0x0003a8bf) bg_status_flat_pane_g3

0x2fae,	// (0x0003a8c7) bg_status_flat_pane_g4

0x2fb6,	// (0x0003a8cf) bg_status_flat_pane_g5

0x2fbe,	// (0x0003a8d7) bg_status_flat_pane_g6

0x2fc6,	// (0x0003a8df) bg_status_flat_pane_g7

0x8cb6,	// (0x000405cf) tabs_3_active_pane_t1_ParamLimits

0x8cb6,	// (0x000405cf) tabs_3_passive_pane_t1_ParamLimits

0x8cd0,	// (0x000405e9) tabs_4_active_pane_t1_ParamLimits

0x8cd0,	// (0x000405e9) tabs_4_1_passive_pane_t1_ParamLimits

0x9802,	// (0x0004111b) tabs_2_active_pane_t1_ParamLimits

0x9802,	// (0x0004111b) tabs_2_passive_pane_t1_ParamLimits

0xb236,	// (0x00042b4f) bg_active_tab_pane_cp4_ParamLimits

0x9814,	// (0x0004112d) tabs_2_long_active_pane_t1_ParamLimits

0x227e,	// (0x00039b97) bg_passive_tab_pane_cp4_ParamLimits

0x0950,	// (0x00038269) list_single_midp_graphic_pane_t1_ParamLimits

0xb236,	// (0x00042b4f) bg_active_tab_pane_cp5_ParamLimits

0x9827,	// (0x00041140) tabs_3_long_active_pane_t1_ParamLimits

0x227e,	// (0x00039b97) bg_passive_tab_pane_cp5_ParamLimits

0x0950,	// (0x00038269) list_single_midp_graphic_pane_t1

0xbcab,	// (0x000435c4) bg_status_flat_pane_ParamLimits

0x241e,	// (0x00039d37) indicator_pane_cp2_ParamLimits

0x241e,	// (0x00039d37) indicator_pane_cp2

0xbe29,	// (0x00043742) navi_pane_srt_ParamLimits

0xbe29,	// (0x00043742) navi_pane_srt

0x256d,	// (0x00039e86) popup_clock_digital_analogue_window_cp1

0xb27a,	// (0x00042b93) indicator_pane_t1

0x0093,	// (0x000379ac) copy_highlight_pane

0x0093,	// (0x000379ac) cursor_graphics_pane

0x0093,	// (0x000379ac) graphic_within_text_pane

0x0093,	// (0x000379ac) link_highlight_pane

0x3795,	// (0x0003b0ae) popup_preview_text_window_t5_ParamLimits

0x3795,	// (0x0003b0ae) popup_preview_text_window_t5

0x206a,	// (0x00039983) cursor_digital_pane

0x206a,	// (0x00039983) cursor_primary_pane

0x207b,	// (0x00039994) cursor_primary_small_pane

0x2083,	// (0x0003999c) cursor_secondary_pane

0x208b,	// (0x000399a4) cursor_title_pane

0x206a,	// (0x00039983) link_highlight_digital_pane

0x2072,	// (0x0003998b) link_highlight_primary_pane

0x207b,	// (0x00039994) link_highlight_primary_small_pane

0x2083,	// (0x0003999c) link_highlight_secondary_pane

0x208b,	// (0x000399a4) link_highlight_title_pane

0x206a,	// (0x00039983) copy_highlight_digital_pane

0x206a,	// (0x00039983) copy_highlight_primary_pane

0x207b,	// (0x00039994) copy_highlight_primary_small_pane

0x2083,	// (0x0003999c) copy_highlight_secondary_pane

0x208b,	// (0x000399a4) copy_highlight_title_pane

0x2083,	// (0x0003999c) graphic_text_digital_pane

0x3034,	// (0x0003a94d) graphic_text_primary_pane

0x303d,	// (0x0003a956) graphic_text_primary_small_pane

0x207b,	// (0x00039994) graphic_text_secondary_pane

0x206a,	// (0x00039983) graphic_text_title_pane

0x9cd6,	// (0x000415ef) cursor_primary_pane_g1

0x3026,	// (0x0003a93f) cursor_text_primary_t1

0xc31e,	// (0x00043c37) cursor_primary_small_pane_g1

0x3018,	// (0x0003a931) cursor_text_primary_small_t1

0xc314,	// (0x00043c2d) cursor_primary_small_pane_g1_copy1

0x3000,	// (0x0003a919) cursor_text_primary_small_t1_copy1

0x2fde,	// (0x0003a8f7) cursor_text_title_t1

0xc30a,	// (0x00043c23) cursor_title_pane_g1

0x9cd6,	// (0x000415ef) cursor_digital_pane_g1

0x209d,	// (0x000399b6) cursor_text_digital_t1

0x20ab,	// (0x000399c4) link_highlight_primary_pane_g1

0x2f87,	// (0x0003a8a0) link_highlight_primary_pane_t1

0x20ab,	// (0x000399c4) link_highlight_primary_small_pane_g1

0x20b3,	// (0x000399cc) link_highlight_primary_small_pane_t1

0x20ab,	// (0x000399c4) link_highlight_secondary_pane_g1

0x20c2,	// (0x000399db) link_highlight_secondary_pane_t1

0x2eec,	// (0x0003a805) link_highlight_title_pane_g1

0x2f03,	// (0x0003a81c) link_highlight_title_pane_t1

0x2eec,	// (0x0003a805) link_highlight_digital_pane_g1

0x2ef4,	// (0x0003a80d) link_highlight_digital_pane_t1

0x2da6,	// (0x0003a6bf) copy_highlight_primary_pane_g1

0x2dcc,	// (0x0003a6e5) copy_highlight_primary_pane_t1

0x2da6,	// (0x0003a6bf) copy_highlight_primary_small_pane_g1

0x2dbd,	// (0x0003a6d6) copy_highlight_primary_small_pane_t1

0x20d1,	// (0x000399ea) copy_highlight_secondary_pane_g1

0x20d9,	// (0x000399f2) copy_highlight_secondary_pane_t1

0x2da6,	// (0x0003a6bf) copy_highlight_title_pane_g1

0x2dae,	// (0x0003a6c7) copy_highlight_title_pane_t1

0x2da6,	// (0x0003a6bf) copy_highlight_digital_pane_g1

0x4040,	// (0x0003b959) copy_highlight_digital_pane_t1

0x3f94,	// (0x0003b8ad) graphic_text_primary_pane_g1

0x4024,	// (0x0003b93d) graphic_text_primary_pane_t1

0x4032,	// (0x0003b94b) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x000472dd) graphic_text_primary_pane_t

0x4000,	// (0x0003b919) graphic_text_primary_small_pane_g1

0x4008,	// (0x0003b921) graphic_text_primary_small_pane_t1

0x4016,	// (0x0003b92f) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x000472d8) graphic_text_primary_small_pane_t

0x3fdc,	// (0x0003b8f5) graphic_text_secondary_pane_g1

0x3fe4,	// (0x0003b8fd) graphic_text_secondary_pane_t1

0x3ff2,	// (0x0003b90b) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x000472d3) graphic_text_secondary_pane_t

0x3fb8,	// (0x0003b8d1) graphic_text_title_pane_g1

0x3fc0,	// (0x0003b8d9) graphic_text_title_pane_t1

0x3fce,	// (0x0003b8e7) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x000472ce) graphic_text_title_pane_t

0x3f94,	// (0x0003b8ad) graphic_text_digital_pane_g1

0x3f9c,	// (0x0003b8b5) graphic_text_digital_pane_t1

0x3faa,	// (0x0003b8c3) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x000472c9) graphic_text_digital_pane_t

0xb236,	// (0x00042b4f) navi_icon_pane_srt_ParamLimits

0xb236,	// (0x00042b4f) navi_icon_pane_srt

0xb1da,	// (0x00042af3) navi_midp_pane_srt

0xb1da,	// (0x00042af3) navi_navi_pane_srt

0xb236,	// (0x00042b4f) navi_text_pane_srt_ParamLimits

0xb236,	// (0x00042b4f) navi_text_pane_srt

0x3f5f,	// (0x0003b878) navi_navi_icon_text_pane_srt

0x3f67,	// (0x0003b880) navi_navi_pane_srt_g1_ParamLimits

0x3f67,	// (0x0003b880) navi_navi_pane_srt_g1

0x3f79,	// (0x0003b892) navi_navi_pane_srt_g2_ParamLimits

0x3f79,	// (0x0003b892) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x000472c4) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x000472c4) navi_navi_pane_srt_g

0x3f8b,	// (0x0003b8a4) navi_navi_tabs_pane_srt

0x3f5f,	// (0x0003b878) navi_navi_text_pane_srt

0x3f5f,	// (0x0003b878) navi_navi_volume_pane_srt

0x3f50,	// (0x0003b869) navi_navi_text_pane_srt_t1

0x0df7,	// (0x00038710) navi_navi_volume_pane_srt_g1

0x0dff,	// (0x00038718) volume_small_pane_srt_ParamLimits

0x0dff,	// (0x00038718) volume_small_pane_srt

0x0101,	// (0x00037a1a) volume_small_pane_srt_g1_ParamLimits

0x0101,	// (0x00037a1a) volume_small_pane_srt_g1

0x0111,	// (0x00037a2a) volume_small_pane_srt_g2_ParamLimits

0x0111,	// (0x00037a2a) volume_small_pane_srt_g2

0x0122,	// (0x00037a3b) volume_small_pane_srt_g3_ParamLimits

0x0122,	// (0x00037a3b) volume_small_pane_srt_g3

0x0133,	// (0x00037a4c) volume_small_pane_srt_g4_ParamLimits

0x0133,	// (0x00037a4c) volume_small_pane_srt_g4

0x0144,	// (0x00037a5d) volume_small_pane_srt_g5_ParamLimits

0x0144,	// (0x00037a5d) volume_small_pane_srt_g5

0x0155,	// (0x00037a6e) volume_small_pane_srt_g6_ParamLimits

0x0155,	// (0x00037a6e) volume_small_pane_srt_g6

0x0166,	// (0x00037a7f) volume_small_pane_srt_g7_ParamLimits

0x0166,	// (0x00037a7f) volume_small_pane_srt_g7

0x0177,	// (0x00037a90) volume_small_pane_srt_g8_ParamLimits

0x0177,	// (0x00037a90) volume_small_pane_srt_g8

0x0188,	// (0x00037aa1) volume_small_pane_srt_g9_ParamLimits

0x0188,	// (0x00037aa1) volume_small_pane_srt_g9

0x0199,	// (0x00037ab2) volume_small_pane_srt_g10_ParamLimits

0x0199,	// (0x00037ab2) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00047071) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00047071) volume_small_pane_srt_g

0x8f91,	// (0x000408aa) query_popup_data_pane_cp2

0x3f36,	// (0x0003b84f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3f36,	// (0x0003b84f) navi_navi_icon_text_pane_srt_t1

0x3034,	// (0x0003a94d) navi_tabs_2_long_pane_srt

0x3034,	// (0x0003a94d) navi_tabs_2_pane_srt

0x3034,	// (0x0003a94d) navi_tabs_3_long_pane_srt

0x3034,	// (0x0003a94d) navi_tabs_3_pane_srt

0x3034,	// (0x0003a94d) navi_tabs_4_pane_srt

0xa8e5,	// (0x000421fe) tabs_2_active_pane_srt_ParamLimits

0xa8e5,	// (0x000421fe) tabs_2_active_pane_srt

0xa8f5,	// (0x0004220e) tabs_2_passive_pane_srt_ParamLimits

0xa8f5,	// (0x0004220e) tabs_2_passive_pane_srt

0x27ff,	// (0x0003a118) bg_passive_tab_pane_cp1_srt_ParamLimits

0x27ff,	// (0x0003a118) bg_passive_tab_pane_cp1_srt

0xc925,	// (0x0004423e) bg_passive_tab_pane_g1_cp1_srt

0x9b4d,	// (0x00041466) bg_passive_tab_pane_g2_cp1_srt

0xc92e,	// (0x00044247) bg_passive_tab_pane_g3_cp1_srt

0xb228,	// (0x00042b41) bg_active_tab_pane_cp1_srt_ParamLimits

0xb228,	// (0x00042b41) bg_active_tab_pane_cp1_srt

0xc937,	// (0x00044250) tabs_2_active_pane_srt_g1

0xc93f,	// (0x00044258) tabs_2_active_pane_srt_t1_ParamLimits

0xc93f,	// (0x00044258) tabs_2_active_pane_srt_t1

0xc925,	// (0x0004423e) bg_active_tab_pane_g1_cp1_srt

0x9b4d,	// (0x00041466) bg_active_tab_pane_g2_cp1_srt

0xc92e,	// (0x00044247) bg_active_tab_pane_g3_cp1_srt

0xa8b2,	// (0x000421cb) tabs_3_active_pane_srt_ParamLimits

0xa8b2,	// (0x000421cb) tabs_3_active_pane_srt

0xa8c3,	// (0x000421dc) tabs_3_passive_pane_cp_srt_ParamLimits

0xa8c3,	// (0x000421dc) tabs_3_passive_pane_cp_srt

0xa8d4,	// (0x000421ed) tabs_3_passive_pane_srt_ParamLimits

0xa8d4,	// (0x000421ed) tabs_3_passive_pane_srt

0x27ff,	// (0x0003a118) bg_passive_tab_pane_cp2_srt_ParamLimits

0x27ff,	// (0x0003a118) bg_passive_tab_pane_cp2_srt

0x9ce0,	// (0x000415f9) bg_passive_tab_pane_g1_cp2_srt

0x9b4d,	// (0x00041466) bg_passive_tab_pane_g2_cp2_srt

0x9ce9,	// (0x00041602) bg_passive_tab_pane_g3_cp2_srt

0xb228,	// (0x00042b41) bg_active_tab_pane_cp2_srt_ParamLimits

0xb228,	// (0x00042b41) bg_active_tab_pane_cp2_srt

0xc907,	// (0x00044220) tabs_3_active_pane_srt_g1

0xc90f,	// (0x00044228) tabs_3_active_pane_srt_t1_ParamLimits

0xc90f,	// (0x00044228) tabs_3_active_pane_srt_t1

0x9ce0,	// (0x000415f9) bg_active_tab_pane_g1_cp2_srt

0x9b4d,	// (0x00041466) bg_active_tab_pane_g2_cp2_srt

0x9ce9,	// (0x00041602) bg_active_tab_pane_g3_cp2_srt

0x0d5c,	// (0x00038675) tabs_4_active_pane_srt_ParamLimits

0x0d5c,	// (0x00038675) tabs_4_active_pane_srt

0x0d6e,	// (0x00038687) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0d6e,	// (0x00038687) tabs_4_passive_pane_cp2_srt

0x02fe,	// (0x00037c17) aid_size_cell_toolbar

0x3b3f,	// (0x0003b458) main_idle_act_pane_ParamLimits

0xa137,	// (0x00041a50) popup_large_graphic_colour_window_ParamLimits

0xa62b,	// (0x00041f44) popup_toolbar_window_ParamLimits

0xa62b,	// (0x00041f44) popup_toolbar_window

0xd2ac,	// (0x00044bc5) list_single_graphic_2heading_pane_ParamLimits

0xd2ac,	// (0x00044bc5) list_single_graphic_2heading_pane

0xb89b,	// (0x000431b4) aid_size_cell_apps_grid_lsc_pane

0xb8ad,	// (0x000431c6) aid_size_cell_apps_grid_prt_pane

0x227e,	// (0x00039b97) bg_wml_button_pane_cp1_ParamLimits

0x227e,	// (0x00039b97) bg_wml_button_pane_cp1

0xc0a4,	// (0x000439bd) form_midp_field_text_pane_t1_ParamLimits

0x27ff,	// (0x0003a118) input_focus_pane_cp050_ParamLimits

0x2a6f,	// (0x0003a388) list_midp_form_text_pane_ParamLimits

0x2a12,	// (0x0003a32b) input_focus_pane_cp051_ParamLimits

0x2a26,	// (0x0003a33f) list_midp_choice_pane_ParamLimits

0xc008,	// (0x00043921) list_single_2graphic_pane_cp3_ParamLimits

0xc008,	// (0x00043921) list_single_2graphic_pane_cp3

0xc01c,	// (0x00043935) list_single_midp_graphic_pane_ParamLimits

0xc01c,	// (0x00043935) list_single_midp_graphic_pane

0xf0ad,	// (0x000469c6) list_single_graphic_2heading_pane_g1_ParamLimits

0xf0ad,	// (0x000469c6) list_single_graphic_2heading_pane_g1

0xf0b9,	// (0x000469d2) list_single_graphic_2heading_pane_g4_ParamLimits

0xf0b9,	// (0x000469d2) list_single_graphic_2heading_pane_g4

0xf0c5,	// (0x000469de) list_single_graphic_2heading_pane_g5_ParamLimits

0xf0c5,	// (0x000469de) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x000470c4) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x000470c4) list_single_graphic_2heading_pane_g

0xf0d1,	// (0x000469ea) list_single_graphic_2heading_pane_t1_ParamLimits

0xf0d1,	// (0x000469ea) list_single_graphic_2heading_pane_t1

0xf0e5,	// (0x000469fe) list_single_graphic_2heading_pane_t2_ParamLimits

0xf0e5,	// (0x000469fe) list_single_graphic_2heading_pane_t2

0xf0ff,	// (0x00046a18) list_single_graphic_2heading_pane_t3_ParamLimits

0xf0ff,	// (0x00046a18) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x000470cb) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x000470cb) list_single_graphic_2heading_pane_t

0x26c9,	// (0x00039fe2) bg_popup_sub_pane_cp2

0x26f3,	// (0x0003a00c) grid_toobar_pane

0x08bf,	// (0x000381d8) cell_toolbar_pane_ParamLimits

0x08bf,	// (0x000381d8) cell_toolbar_pane

0x272f,	// (0x0003a048) cell_toolbar_pane_g1_ParamLimits

0x272f,	// (0x0003a048) cell_toolbar_pane_g1

0xbfc8,	// (0x000438e1) cell_toolbar_pane_g2_ParamLimits

0xbfc8,	// (0x000438e1) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x000470d9) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x000470d9) cell_toolbar_pane_g

0x2765,	// (0x0003a07e) grid_highlight_pane_cp2_ParamLimits

0x2765,	// (0x0003a07e) grid_highlight_pane_cp2

0x277f,	// (0x0003a098) toolbar_button_pane

0x278b,	// (0x0003a0a4) toolbar_button_pane_g1

0x2793,	// (0x0003a0ac) toolbar_button_pane_g2

0x279b,	// (0x0003a0b4) toolbar_button_pane_g3

0x27a3,	// (0x0003a0bc) toolbar_button_pane_g4

0x27ab,	// (0x0003a0c4) toolbar_button_pane_g5

0x27b3,	// (0x0003a0cc) toolbar_button_pane_g6

0x27bb,	// (0x0003a0d4) toolbar_button_pane_g7

0x27c3,	// (0x0003a0dc) toolbar_button_pane_g8

0x27cb,	// (0x0003a0e4) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x000470de) toolbar_button_pane_g

0x08f7,	// (0x00038210) list_single_2graphic_pane_g1_cp3_ParamLimits

0x08f7,	// (0x00038210) list_single_2graphic_pane_g1_cp3

0xa6d8,	// (0x00041ff1) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa6d8,	// (0x00041ff1) list_single_2graphic_pane_g2_cp3

0x0914,	// (0x0003822d) list_single_2graphic_pane_g3_cp3

0x091c,	// (0x00038235) list_single_2graphic_pane_g4_cp3_ParamLimits

0x091c,	// (0x00038235) list_single_2graphic_pane_g4_cp3

0xa6e9,	// (0x00042002) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa6e9,	// (0x00042002) list_single_2graphic_pane_t1_cp3

0x0944,	// (0x0003825d) list_single_midp_graphic_pane_g2_ParamLimits

0x0944,	// (0x0003825d) list_single_midp_graphic_pane_g2

0x0306,	// (0x00037c1f) aid_zoom_text_primary

0xf091,	// (0x000469aa) aid_zoom_text_secondary

0x9d40,	// (0x00041659) status_small_pane_g7_ParamLimits

0x9d40,	// (0x00041659) status_small_pane_g7

0x9d63,	// (0x0004167c) status_small_pane_t1_ParamLimits

0x8bfe,	// (0x00040517) title_pane_g2

0x0003,

0xf54e,	// (0x00046e67) title_pane_g

0x8feb,	// (0x00040904) aid_size_cell_colour_1_pane_ParamLimits

0x8feb,	// (0x00040904) aid_size_cell_colour_1_pane

0x8fff,	// (0x00040918) aid_size_cell_colour_2_pane_ParamLimits

0x8fff,	// (0x00040918) aid_size_cell_colour_2_pane

0x9013,	// (0x0004092c) aid_size_cell_colour_3_pane_ParamLimits

0x9013,	// (0x0004092c) aid_size_cell_colour_3_pane

0x9027,	// (0x00040940) aid_size_cell_colour_4_pane_ParamLimits

0x9027,	// (0x00040940) aid_size_cell_colour_4_pane

0xef42,	// (0x0004685b) title_pane_stacon_g1_ParamLimits

0xef42,	// (0x0004685b) title_pane_stacon_g1

0x2e23,	// (0x0003a73c) popup_note_wait_window_g3_ParamLimits

0x2e23,	// (0x0003a73c) popup_note_wait_window_g3

0x2e99,	// (0x0003a7b2) popup_note_wait_window_t5_ParamLimits

0x2e99,	// (0x0003a7b2) popup_note_wait_window_t5

0xb1da,	// (0x00042af3) main_feb_china_hwr_fs_writing_pane

0x9fb9,	// (0x000418d2) popup_feb_china_hwr_fs_window_ParamLimits

0x9fb9,	// (0x000418d2) popup_feb_china_hwr_fs_window

0xa705,	// (0x0004201e) aid_size_cell_hwr_fs_ParamLimits

0xa705,	// (0x0004201e) aid_size_cell_hwr_fs

0x27ff,	// (0x0003a118) bg_popup_sub_pane_cp3_ParamLimits

0x27ff,	// (0x0003a118) bg_popup_sub_pane_cp3

0xa71a,	// (0x00042033) grid_hwr_fs_pane_ParamLimits

0xa71a,	// (0x00042033) grid_hwr_fs_pane

0x0993,	// (0x000382ac) linegrid_hwr_fs_pane_ParamLimits

0x0993,	// (0x000382ac) linegrid_hwr_fs_pane

0xa732,	// (0x0004204b) cell_hwr_fs_pane_ParamLimits

0xa732,	// (0x0004204b) cell_hwr_fs_pane

0x280b,	// (0x0003a124) linegrid_hwr_fs_pane_g1_ParamLimits

0x280b,	// (0x0003a124) linegrid_hwr_fs_pane_g1

0xbfdc,	// (0x000438f5) linegrid_hwr_fs_pane_g2_ParamLimits

0xbfdc,	// (0x000438f5) linegrid_hwr_fs_pane_g2

0x2829,	// (0x0003a142) linegrid_hwr_fs_pane_g3_ParamLimits

0x2829,	// (0x0003a142) linegrid_hwr_fs_pane_g3

0xa758,	// (0x00042071) linegrid_hwr_fs_pane_g4_ParamLimits

0xa758,	// (0x00042071) linegrid_hwr_fs_pane_g4

0x09df,	// (0x000382f8) linegrid_hwr_fs_pane_g5_ParamLimits

0x09df,	// (0x000382f8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x00047104) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x00047104) linegrid_hwr_fs_pane_g

0x2835,	// (0x0003a14e) cell_hwr_fs_pane_g1_ParamLimits

0x2835,	// (0x0003a14e) cell_hwr_fs_pane_g1

0x2603,	// (0x00039f1c) cell_hwr_fs_pane_g2_ParamLimits

0x2603,	// (0x00039f1c) cell_hwr_fs_pane_g2

0xbfee,	// (0x00043907) cell_hwr_fs_pane_g3_ParamLimits

0xbfee,	// (0x00043907) cell_hwr_fs_pane_g3

0xbffb,	// (0x00043914) cell_hwr_fs_pane_g4_ParamLimits

0xbffb,	// (0x00043914) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0004710f) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0004710f) cell_hwr_fs_pane_g

0xa772,	// (0x0004208b) cell_hwr_fs_pane_t1

0xb1da,	// (0x00042af3) grid_highlight_pane_cp6

0xb1da,	// (0x00042af3) main_idle_act2_pane

0xb6f1,	// (0x0004300a) aid_inside_area_popup_secondary

0xc43d,	// (0x00043d56) aid_inside_area_window_primary_ParamLimits

0xc43d,	// (0x00043d56) aid_inside_area_window_primary

0xc95d,	// (0x00044276) ai2_news_ticker_pane

0x4057,	// (0x0003b970) aid_size_cell_ai1_link_ParamLimits

0x4057,	// (0x0003b970) aid_size_cell_ai1_link

0xc965,	// (0x0004427e) popup_ai2_data_window_ParamLimits

0xc965,	// (0x0004427e) popup_ai2_data_window

0x4087,	// (0x0003b9a0) popup_ai2_link_window_ParamLimits

0x4087,	// (0x0003b9a0) popup_ai2_link_window

0x27ff,	// (0x0003a118) bg_popup_sub_pane_cp4_ParamLimits

0x27ff,	// (0x0003a118) bg_popup_sub_pane_cp4

0x409b,	// (0x0003b9b4) grid_ai2_link_pane_ParamLimits

0x409b,	// (0x0003b9b4) grid_ai2_link_pane

0x40b2,	// (0x0003b9cb) popup_ai2_link_window_g1_ParamLimits

0x40b2,	// (0x0003b9cb) popup_ai2_link_window_g1

0x40be,	// (0x0003b9d7) popup_ai2_link_window_g2_ParamLimits

0x40be,	// (0x0003b9d7) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x000472e2) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x000472e2) popup_ai2_link_window_g

0x40cd,	// (0x0003b9e6) ai2_mp_button_pane

0x40d5,	// (0x0003b9ee) ai2_mp_volume_pane

0x2a12,	// (0x0003a32b) bg_popup_sub_pane_cp5_ParamLimits

0x2a12,	// (0x0003a32b) bg_popup_sub_pane_cp5

0x40dd,	// (0x0003b9f6) heading_ai2_gene_pane_ParamLimits

0x40dd,	// (0x0003b9f6) heading_ai2_gene_pane

0x40e9,	// (0x0003ba02) list_ai2_gene_pane_ParamLimits

0x40e9,	// (0x0003ba02) list_ai2_gene_pane

0x4131,	// (0x0003ba4a) cell_ai2_link_pane_ParamLimits

0x4131,	// (0x0003ba4a) cell_ai2_link_pane

0x4147,	// (0x0003ba60) cell_ai2_link_pane_g1

0xb1da,	// (0x00042af3) grid_highlight_pane_cp7

0x0e14,	// (0x0003872d) ai2_mp_volume_pane_g1

0x4217,	// (0x0003bb30) ai2_mp_volume_pane_g2

0x418c,	// (0x0003baa5) list_ai2_gene_pane_t1

0x421f,	// (0x0003bb38) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x000472fb) ai2_mp_volume_pane_g

0xa905,	// (0x0004221e) volume_small_pane_cp3

0x4227,	// (0x0003bb40) aid_size_cell_ai2_button

0x422f,	// (0x0003bb48) grid_ai2_button_pane

0x4238,	// (0x0003bb51) cell_ai2_button_pane_ParamLimits

0x4238,	// (0x0003bb51) cell_ai2_button_pane

0xb1d0,	// (0x00042ae9) cell_ai2_button_pane_g1

0xb1da,	// (0x00042af3) grid_highlight_pane_cp8

0x41d7,	// (0x0003baf0) ai2_gene_pane_t1_ParamLimits

0x41d7,	// (0x0003baf0) ai2_gene_pane_t1

0x9f27,	// (0x00041840) aid_height_parent_landscape

0xc68d,	// (0x00043fa6) aid_height_set_list

0x3b3f,	// (0x0003b458) aid_size_parent

0x3e76,	// (0x0003b78f) aid_size_cell_graphic_pane_ParamLimits

0x40f9,	// (0x0003ba12) popup_ai2_data_window_g1_ParamLimits

0x40f9,	// (0x0003ba12) popup_ai2_data_window_g1

0x4105,	// (0x0003ba1e) ai2_news_ticker_pane_g1

0x410d,	// (0x0003ba26) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x000472e7) ai2_news_ticker_pane_g

0x4115,	// (0x0003ba2e) ai2_news_ticker_pane_t1

0x4123,	// (0x0003ba3c) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x000472ec) ai2_news_ticker_pane_t

0x4150,	// (0x0003ba69) heading_ai2_gene_pane_g1

0x4158,	// (0x0003ba71) heading_ai2_gene_pane_t1_ParamLimits

0x4158,	// (0x0003ba71) heading_ai2_gene_pane_t1

0x416d,	// (0x0003ba86) list_highlight_pane_cp6

0x4175,	// (0x0003ba8e) ai2_gene_pane_ParamLimits

0x4175,	// (0x0003ba8e) ai2_gene_pane

0x419a,	// (0x0003bab3) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x000472f1) list_ai2_gene_pane_t

0x41a8,	// (0x0003bac1) list_highlight_pane_cp8_ParamLimits

0x41a8,	// (0x0003bac1) list_highlight_pane_cp8

0x41b9,	// (0x0003bad2) ai2_gene_pane_g1_ParamLimits

0x41b9,	// (0x0003bad2) ai2_gene_pane_g1

0x41cb,	// (0x0003bae4) ai2_gene_pane_g2_ParamLimits

0x41cb,	// (0x0003bae4) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x000472f6) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x000472f6) ai2_gene_pane_g

0xb587,	// (0x00042ea0) scroll_pane_cp12

0x9ee6,	// (0x000417ff) control_pane_t3_ParamLimits

0x9ee6,	// (0x000417ff) control_pane_t3

0x9d54,	// (0x0004166d) status_small_pane_g8_ParamLimits

0x9d54,	// (0x0004166d) status_small_pane_g8

0xa07c,	// (0x00041995) popup_find_window_ParamLimits

0xa32f,	// (0x00041c48) popup_note_image_window_ParamLimits

0xd0c4,	// (0x000449dd) list_double2_graphic_pane_vc_g1_ParamLimits

0xd0c4,	// (0x000449dd) list_double2_graphic_pane_vc_g1

0xd04a,	// (0x00044963) list_double2_graphic_pane_vc_g2_ParamLimits

0xd04a,	// (0x00044963) list_double2_graphic_pane_vc_g2

0xd056,	// (0x0004496f) list_double2_graphic_pane_vc_g3_ParamLimits

0xd056,	// (0x0004496f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x000470d2) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x000470d2) list_double2_graphic_pane_vc_g

0xd1a7,	// (0x00044ac0) list_double2_graphic_pane_vc_t1_ParamLimits

0xd1a7,	// (0x00044ac0) list_double2_graphic_pane_vc_t1

0xd04a,	// (0x00044963) list_single_heading_pane_vc_g1_ParamLimits

0xd04a,	// (0x00044963) list_single_heading_pane_vc_g1

0xd056,	// (0x0004496f) list_single_heading_pane_vc_g2_ParamLimits

0xd056,	// (0x0004496f) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046ee1) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046ee1) list_single_heading_pane_vc_g

0xd1bd,	// (0x00044ad6) list_single_heading_pane_vc_t1_ParamLimits

0xd1bd,	// (0x00044ad6) list_single_heading_pane_vc_t1

0xd1d5,	// (0x00044aee) list_single_heading_pane_vc_t2_ParamLimits

0xd1d5,	// (0x00044aee) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x000470f3) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x000470f3) list_single_heading_pane_vc_t

0xd1f1,	// (0x00044b0a) list_setting_number_pane_vc_g1_ParamLimits

0xd1f1,	// (0x00044b0a) list_setting_number_pane_vc_g1

0xd1fd,	// (0x00044b16) list_setting_number_pane_vc_g2_ParamLimits

0xd1fd,	// (0x00044b16) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x000470f8) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x000470f8) list_setting_number_pane_vc_g

0xd209,	// (0x00044b22) list_setting_number_pane_vc_t1_ParamLimits

0xd209,	// (0x00044b22) list_setting_number_pane_vc_t1

0xd21d,	// (0x00044b36) list_setting_number_pane_vc_t2_ParamLimits

0xd21d,	// (0x00044b36) list_setting_number_pane_vc_t2

0xd239,	// (0x00044b52) list_setting_number_pane_vc_t3_ParamLimits

0xd239,	// (0x00044b52) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x000470fd) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x000470fd) list_setting_number_pane_vc_t

0xd265,	// (0x00044b7e) set_value_pane_vc_ParamLimits

0xd265,	// (0x00044b7e) set_value_pane_vc

0xd2ac,	// (0x00044bc5) list_double2_graphic_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_double2_graphic_pane_vc

0x3d13,	// (0x0003b62c) list_double2_large_graphic_pane_vc_ParamLimits

0x3d13,	// (0x0003b62c) list_double2_large_graphic_pane_vc

0xd2ac,	// (0x00044bc5) list_double2_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_double2_pane_vc

0xd2ac,	// (0x00044bc5) list_double_graphic_heading_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_double_graphic_heading_pane_vc

0xd2ac,	// (0x00044bc5) list_double_graphic_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_double_graphic_pane_vc

0xd2ac,	// (0x00044bc5) list_double_heading_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_double_heading_pane_vc

0x3d25,	// (0x0003b63e) list_double_large_graphic_pane_vc_ParamLimits

0x3d25,	// (0x0003b63e) list_double_large_graphic_pane_vc

0xd2ac,	// (0x00044bc5) list_double_number_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_double_number_pane_vc

0xd2ac,	// (0x00044bc5) list_double_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_double_pane_vc

0xd2ac,	// (0x00044bc5) list_double_time_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_double_time_pane_vc

0xd2ac,	// (0x00044bc5) list_setting_number_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_setting_number_pane_vc

0xd2ac,	// (0x00044bc5) list_setting_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_setting_pane_vc

0xd2ac,	// (0x00044bc5) list_single_graphic_heading_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_single_graphic_heading_pane_vc

0xd2ac,	// (0x00044bc5) list_single_heading_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_single_heading_pane_vc

0xd2ac,	// (0x00044bc5) list_single_number_heading_pane_vc_ParamLimits

0xd2ac,	// (0x00044bc5) list_single_number_heading_pane_vc

0xd0c4,	// (0x000449dd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd0c4,	// (0x000449dd) list_double_graphic_heading_pane_vc_g1

0xd04a,	// (0x00044963) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd04a,	// (0x00044963) list_double_graphic_heading_pane_vc_g2

0xd056,	// (0x0004496f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd056,	// (0x0004496f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b9,	// (0x000470d2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x000470d2) list_double_graphic_heading_pane_vc_g

0xd2bf,	// (0x00044bd8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd2bf,	// (0x00044bd8) list_double_graphic_heading_pane_vc_t1

0xd2db,	// (0x00044bf4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd2db,	// (0x00044bf4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x00047302) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x00047302) list_double_graphic_heading_pane_vc_t

0xd1f1,	// (0x00044b0a) list_setting_pane_vc_g1_ParamLimits

0xd1f1,	// (0x00044b0a) list_setting_pane_vc_g1

0xd1fd,	// (0x00044b16) list_setting_pane_vc_g2_ParamLimits

0xd1fd,	// (0x00044b16) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x000470f8) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x000470f8) list_setting_pane_vc_g

0xd2f9,	// (0x00044c12) list_setting_pane_vc_t1_ParamLimits

0xd2f9,	// (0x00044c12) list_setting_pane_vc_t1

0xd315,	// (0x00044c2e) list_setting_pane_vc_t2_ParamLimits

0xd315,	// (0x00044c2e) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x00047345) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x00047345) list_setting_pane_vc_t

0xd265,	// (0x00044b7e) set_value_pane_cp_vc_ParamLimits

0xd265,	// (0x00044b7e) set_value_pane_cp_vc

0xd04a,	// (0x00044963) list_single_number_heading_pane_vc_g1_ParamLimits

0xd04a,	// (0x00044963) list_single_number_heading_pane_vc_g1

0xd056,	// (0x0004496f) list_single_number_heading_pane_vc_g2_ParamLimits

0xd056,	// (0x0004496f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046ee1) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046ee1) list_single_number_heading_pane_vc_g

0xd1bd,	// (0x00044ad6) list_single_number_heading_pane_vc_t1_ParamLimits

0xd1bd,	// (0x00044ad6) list_single_number_heading_pane_vc_t1

0xd32f,	// (0x00044c48) list_single_number_heading_pane_vc_t2_ParamLimits

0xd32f,	// (0x00044c48) list_single_number_heading_pane_vc_t2

0xd0b2,	// (0x000449cb) list_single_number_heading_pane_vc_t3_ParamLimits

0xd0b2,	// (0x000449cb) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x0004734a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0004734a) list_single_number_heading_pane_vc_t

0xd0c4,	// (0x000449dd) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd0c4,	// (0x000449dd) list_single_graphic_heading_pane_vc_g1

0xd04a,	// (0x00044963) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd04a,	// (0x00044963) list_single_graphic_heading_pane_vc_g4

0xd056,	// (0x0004496f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd056,	// (0x0004496f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x000470d2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x000470d2) list_single_graphic_heading_pane_vc_g

0xd1bd,	// (0x00044ad6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd1bd,	// (0x00044ad6) list_single_graphic_heading_pane_vc_t1

0xd343,	// (0x00044c5c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd343,	// (0x00044c5c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00047351) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00047351) list_single_graphic_heading_pane_vc_t

0xd04a,	// (0x00044963) list_double2_pane_vc_g1_ParamLimits

0xd04a,	// (0x00044963) list_double2_pane_vc_g1

0xd056,	// (0x0004496f) list_double2_pane_vc_g2_ParamLimits

0xd056,	// (0x0004496f) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046ee1) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046ee1) list_double2_pane_vc_g

0xd296,	// (0x00044baf) list_double2_pane_vc_t1_ParamLimits

0xd296,	// (0x00044baf) list_double2_pane_vc_t1

0xd0d0,	// (0x000449e9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd0d0,	// (0x000449e9) list_double2_large_graphic_pane_vc_g1

0xd0dc,	// (0x000449f5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd0dc,	// (0x000449f5) list_double2_large_graphic_pane_vc_g2

0xd0e8,	// (0x00044a01) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd0e8,	// (0x00044a01) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00046efe) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00046efe) list_double2_large_graphic_pane_vc_g

0xd0f4,	// (0x00044a0d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd0f4,	// (0x00044a0d) list_double2_large_graphic_pane_vc_t1

0xd357,	// (0x00044c70) list_double_time_pane_vc_g1_ParamLimits

0xd357,	// (0x00044c70) list_double_time_pane_vc_g1

0xd363,	// (0x00044c7c) list_double_time_pane_vc_g2_ParamLimits

0xd363,	// (0x00044c7c) list_double_time_pane_vc_g2

0x0001,

0xfa3d,	// (0x00047356) list_double_time_pane_vc_g_ParamLimits

0xfa3d,	// (0x00047356) list_double_time_pane_vc_g

0xd36f,	// (0x00044c88) list_double_time_pane_vc_t1_ParamLimits

0xd36f,	// (0x00044c88) list_double_time_pane_vc_t1

0xd393,	// (0x00044cac) list_double_time_pane_vc_t2_ParamLimits

0xd393,	// (0x00044cac) list_double_time_pane_vc_t2

0xd3e2,	// (0x00044cfb) list_double_time_pane_vc_t3_ParamLimits

0xd3e2,	// (0x00044cfb) list_double_time_pane_vc_t3

0xd3f4,	// (0x00044d0d) list_double_time_pane_vc_t4_ParamLimits

0xd3f4,	// (0x00044d0d) list_double_time_pane_vc_t4

0x0003,

0xfa42,	// (0x0004735b) list_double_time_pane_vc_t_ParamLimits

0xfa42,	// (0x0004735b) list_double_time_pane_vc_t

0xd04a,	// (0x00044963) list_double_pane_vc_g1_ParamLimits

0xd04a,	// (0x00044963) list_double_pane_vc_g1

0xd056,	// (0x0004496f) list_double_pane_vc_g2_ParamLimits

0xd056,	// (0x0004496f) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046ee1) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046ee1) list_double_pane_vc_g

0xd408,	// (0x00044d21) list_double_pane_vc_t1_ParamLimits

0xd408,	// (0x00044d21) list_double_pane_vc_t1

0xd41c,	// (0x00044d35) list_double_pane_vc_t2_ParamLimits

0xd41c,	// (0x00044d35) list_double_pane_vc_t2

0x0001,

0xfa4b,	// (0x00047364) list_double_pane_vc_t_ParamLimits

0xfa4b,	// (0x00047364) list_double_pane_vc_t

0xd04a,	// (0x00044963) list_double_number_pane_vc_g1_ParamLimits

0xd04a,	// (0x00044963) list_double_number_pane_vc_g1

0xd056,	// (0x0004496f) list_double_number_pane_vc_g2_ParamLimits

0xd056,	// (0x0004496f) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046ee1) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046ee1) list_double_number_pane_vc_g

0xd434,	// (0x00044d4d) list_double_number_pane_vc_t1_ParamLimits

0xd434,	// (0x00044d4d) list_double_number_pane_vc_t1

0xd446,	// (0x00044d5f) list_double_number_pane_vc_t2_ParamLimits

0xd446,	// (0x00044d5f) list_double_number_pane_vc_t2

0xd45a,	// (0x00044d73) list_double_number_pane_vc_t3_ParamLimits

0xd45a,	// (0x00044d73) list_double_number_pane_vc_t3

0x0002,

0xfa50,	// (0x00047369) list_double_number_pane_vc_t_ParamLimits

0xfa50,	// (0x00047369) list_double_number_pane_vc_t

0xd472,	// (0x00044d8b) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd472,	// (0x00044d8b) list_double_large_graphic_pane_vc_g1

0xd494,	// (0x00044dad) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd494,	// (0x00044dad) list_double_large_graphic_pane_vc_g2

0xd4a8,	// (0x00044dc1) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd4a8,	// (0x00044dc1) list_double_large_graphic_pane_vc_g3

0xd4b7,	// (0x00044dd0) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd4b7,	// (0x00044dd0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa57,	// (0x00047370) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa57,	// (0x00047370) list_double_large_graphic_pane_vc_g

0xd4c3,	// (0x00044ddc) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd4c3,	// (0x00044ddc) list_double_large_graphic_pane_vc_t1

0xd4df,	// (0x00044df8) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd4df,	// (0x00044df8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x00047379) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x00047379) list_double_large_graphic_pane_vc_t

0xd04a,	// (0x00044963) list_double_heading_pane_vc_g1_ParamLimits

0xd04a,	// (0x00044963) list_double_heading_pane_vc_g1

0xd056,	// (0x0004496f) list_double_heading_pane_vc_g2_ParamLimits

0xd056,	// (0x0004496f) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046ee1) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046ee1) list_double_heading_pane_vc_g

0xd501,	// (0x00044e1a) list_double_heading_pane_vc_t1_ParamLimits

0xd501,	// (0x00044e1a) list_double_heading_pane_vc_t1

0xd1bd,	// (0x00044ad6) list_double_heading_pane_vc_t2_ParamLimits

0xd1bd,	// (0x00044ad6) list_double_heading_pane_vc_t2

0x0001,

0xfa65,	// (0x0004737e) list_double_heading_pane_vc_t_ParamLimits

0xfa65,	// (0x0004737e) list_double_heading_pane_vc_t

0xd515,	// (0x00044e2e) list_double_graphic_pane_vc_g1_ParamLimits

0xd515,	// (0x00044e2e) list_double_graphic_pane_vc_g1

0xd528,	// (0x00044e41) list_double_graphic_pane_vc_g2_ParamLimits

0xd528,	// (0x00044e41) list_double_graphic_pane_vc_g2

0xd04a,	// (0x00044963) list_double_graphic_pane_vc_g3_ParamLimits

0xd04a,	// (0x00044963) list_double_graphic_pane_vc_g3

0x0003,

0xfa6a,	// (0x00047383) list_double_graphic_pane_vc_g_ParamLimits

0xfa6a,	// (0x00047383) list_double_graphic_pane_vc_g

0xd545,	// (0x00044e5e) list_double_graphic_pane_vc_t1_ParamLimits

0xd545,	// (0x00044e5e) list_double_graphic_pane_vc_t1

0xd569,	// (0x00044e82) list_double_graphic_pane_vc_t2_ParamLimits

0xd569,	// (0x00044e82) list_double_graphic_pane_vc_t2

0x0001,

0xfa73,	// (0x0004738c) list_double_graphic_pane_vc_t_ParamLimits

0xfa73,	// (0x0004738c) list_double_graphic_pane_vc_t

0xed86,	// (0x0004669f) aid_size_cell_fastswap

0x89c5,	// (0x000402de) aid_size_cell_touch_ParamLimits

0x89c5,	// (0x000402de) aid_size_cell_touch

0xeee7,	// (0x00046800) popup_fast_swap_wide_window_ParamLimits

0xeee7,	// (0x00046800) popup_fast_swap_wide_window

0x8b95,	// (0x000404ae) touch_pane_ParamLimits

0x8b95,	// (0x000404ae) touch_pane

0xb5d4,	// (0x00042eed) button_value_adjust_pane_cp2

0xd153,	// (0x00044a6c) button_value_adjust_pane_cp4

0xd15b,	// (0x00044a74) form_field_data_pane_cp2

0x95aa,	// (0x00040ec3) form_field_data_wide_pane_cp2

0xb8d2,	// (0x000431eb) bg_scroll_pane_ParamLimits

0x9929,	// (0x00041242) scroll_handle_pane_ParamLimits

0xf121,	// (0x00046a3a) scroll_sc2_down_pane_ParamLimits

0xf121,	// (0x00046a3a) scroll_sc2_down_pane

0xb903,	// (0x0004321c) scroll_sc2_up_pane_ParamLimits

0xb903,	// (0x0004321c) scroll_sc2_up_pane

0xcaac,	// (0x000443c5) grid_wheel_folder_pane_g1_ParamLimits

0xcaac,	// (0x000443c5) grid_wheel_folder_pane_g1

0xf2c5,	// (0x00046bde) clock_nsta_pane_cp2_ParamLimits

0xf2c5,	// (0x00046bde) clock_nsta_pane_cp2

0x227e,	// (0x00039b97) listscroll_midp_pane_ParamLimits

0x9c26,	// (0x0004153f) midp_canvas_pane

0x2230,	// (0x00039b49) nsta_clock_indic_pane

0x2264,	// (0x00039b7d) listscroll_form_pane_vc

0x226c,	// (0x00039b85) listscroll_set_pane_vc_ParamLimits

0x226c,	// (0x00039b85) listscroll_set_pane_vc

0xbcd3,	// (0x000435ec) clock_nsta_pane

0xbcfd,	// (0x00043616) indicator_nsta_pane

0x26c9,	// (0x00039fe2) bg_popup_sub_pane_cp2_ParamLimits

0x26dd,	// (0x00039ff6) find_pane_cp2_ParamLimits

0x26dd,	// (0x00039ff6) find_pane_cp2

0x26f3,	// (0x0003a00c) grid_toobar_pane_ParamLimits

0x27d3,	// (0x0003a0ec) list_form_gen_pane_vc_ParamLimits

0x27d3,	// (0x0003a0ec) list_form_gen_pane_vc

0x27e9,	// (0x0003a102) scroll_pane_cp8_vc_ParamLimits

0x27e9,	// (0x0003a102) scroll_pane_cp8_vc

0x2865,	// (0x0003a17e) data_form_wide_pane_vc_ParamLimits

0x2865,	// (0x0003a17e) data_form_wide_pane_vc

0x2871,	// (0x0003a18a) form_field_data_wide_pane_vc_g1

0x2879,	// (0x0003a192) form_field_data_wide_pane_vc_t1_ParamLimits

0x2879,	// (0x0003a192) form_field_data_wide_pane_vc_t1

0xb5e8,	// (0x00042f01) input_focus_pane_cp6_vc_ParamLimits

0xb5e8,	// (0x00042f01) input_focus_pane_cp6_vc

0xc1b1,	// (0x00043aca) list_midp_pane_ParamLimits

0x3edc,	// (0x0003b7f5) scroll_pane_cp16_ParamLimits

0x3edc,	// (0x0003b7f5) scroll_pane_cp16

0x2c00,	// (0x0003a519) button_value_adjust_pane_ParamLimits

0x2c00,	// (0x0003a519) button_value_adjust_pane

0xc69e,	// (0x00043fb7) button_value_adjust_pane_cp6_ParamLimits

0xc69e,	// (0x00043fb7) button_value_adjust_pane_cp6

0xc7b8,	// (0x000440d1) settings_code_pane_cp_ParamLimits

0xc7b8,	// (0x000440d1) settings_code_pane_cp

0xb1d0,	// (0x00042ae9) cell_touch_pane_g1

0xb1d0,	// (0x00042ae9) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00047017) cell_touch_pane_g

0xc97b,	// (0x00044294) cell_touch_pane_cp_ParamLimits

0xc97b,	// (0x00044294) cell_touch_pane_cp

0xc997,	// (0x000442b0) cell_touch_pane_ParamLimits

0xc997,	// (0x000442b0) cell_touch_pane

0xb1d0,	// (0x00042ae9) scroll_sc2_down_pane_g1

0xb1d0,	// (0x00042ae9) scroll_sc2_up_pane_g1

0xb1da,	// (0x00042af3) bg_set_opt_pane_cp4_vc

0x426c,	// (0x0003bb85) list_set_graphic_pane_vc_g1_ParamLimits

0x426c,	// (0x0003bb85) list_set_graphic_pane_vc_g1

0x4278,	// (0x0003bb91) list_set_graphic_pane_vc_g2_ParamLimits

0x4278,	// (0x0003bb91) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x00047307) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x00047307) list_set_graphic_pane_vc_g

0x4284,	// (0x0003bb9d) text_primary_small_cp13_vc_ParamLimits

0x4284,	// (0x0003bb9d) text_primary_small_cp13_vc

0x429c,	// (0x0003bbb5) list_set_graphic_pane_vc_ParamLimits

0x429c,	// (0x0003bbb5) list_set_graphic_pane_vc

0xb1da,	// (0x00042af3) input_focus_pane_cp2_vc

0xb1d0,	// (0x00042ae9) setting_code_pane_vc_g1

0xb24d,	// (0x00042b66) setting_code_pane_vc_t1

0x42af,	// (0x0003bbc8) set_text_pane_vc_t1_ParamLimits

0x42af,	// (0x0003bbc8) set_text_pane_vc_t1

0xb1da,	// (0x00042af3) input_focus_pane_cp1_vc

0x42cb,	// (0x0003bbe4) list_set_text_pane_vc

0xb1d0,	// (0x00042ae9) setting_text_pane_vc_g1

0xb1da,	// (0x00042af3) bg_set_opt_pane_cp2_vc

0xb244,	// (0x00042b5d) setting_slider_graphic_pane_vc_g1

0x42d5,	// (0x0003bbee) setting_slider_graphic_pane_vc_t1

0x42e5,	// (0x0003bbfe) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x0004730c) setting_slider_graphic_pane_vc_t

0x42f5,	// (0x0003bc0e) slider_set_pane_cp_vc

0x42fd,	// (0x0003bc16) slider_set_pane_vc_g1

0x4306,	// (0x0003bc1f) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x00047311) slider_set_pane_vc_g

0xb643,	// (0x00042f5c) set_opt_bg_pane_g1_copy1

0xb64b,	// (0x00042f64) set_opt_bg_pane_g2_copy1

0x4332,	// (0x0003bc4b) set_opt_bg_pane_g3_copy1

0xb65b,	// (0x00042f74) set_opt_bg_pane_g4_copy1

0xb663,	// (0x00042f7c) set_opt_bg_pane_g5_copy1

0xb66b,	// (0x00042f84) set_opt_bg_pane_g6_copy1

0x433a,	// (0x0003bc53) set_opt_bg_pane_g7_copy1

0x4342,	// (0x0003bc5b) set_opt_bg_pane_g8_copy1

0x434a,	// (0x0003bc63) set_opt_bg_pane_g9_copy1

0xb1da,	// (0x00042af3) bg_set_opt_pane_cp_vc

0x4352,	// (0x0003bc6b) setting_slider_pane_vc_t1

0x4361,	// (0x0003bc7a) setting_slider_pane_vc_t2

0x4371,	// (0x0003bc8a) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x00047320) setting_slider_pane_vc_t

0x4381,	// (0x0003bc9a) slider_set_pane_vc

0x0a38,	// (0x00038351) volume_set_pane_vc_g1

0x0e25,	// (0x0003873e) volume_set_pane_vc_g2

0x0e2e,	// (0x00038747) volume_set_pane_vc_g3

0x0e37,	// (0x00038750) volume_set_pane_vc_g4

0x0e40,	// (0x00038759) volume_set_pane_vc_g5

0x0e49,	// (0x00038762) volume_set_pane_vc_g6

0x0e52,	// (0x0003876b) volume_set_pane_vc_g7

0x0e5b,	// (0x00038774) volume_set_pane_vc_g8

0x0e64,	// (0x0003877d) volume_set_pane_vc_g9

0x0e6d,	// (0x00038786) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x00047327) volume_set_pane_vc_g

0x4389,	// (0x0003bca2) volume_set_pane_vc

0x4391,	// (0x0003bcaa) button_value_adjust_pane_cp1_vc

0x439b,	// (0x0003bcb4) list_highlight_pane_cp2_vc

0x43a4,	// (0x0003bcbd) list_set_pane_vc_ParamLimits

0x43a4,	// (0x0003bcbd) list_set_pane_vc

0x4402,	// (0x0003bd1b) main_pane_set_vc_t1_ParamLimits

0x4402,	// (0x0003bd1b) main_pane_set_vc_t1

0x4417,	// (0x0003bd30) main_pane_set_vc_t2_ParamLimits

0x4417,	// (0x0003bd30) main_pane_set_vc_t2

0x4429,	// (0x0003bd42) main_pane_set_vc_t3_ParamLimits

0x4429,	// (0x0003bd42) main_pane_set_vc_t3

0x443b,	// (0x0003bd54) main_pane_set_vc_t4_ParamLimits

0x443b,	// (0x0003bd54) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x0004733c) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x0004733c) main_pane_set_vc_t

0x444d,	// (0x0003bd66) setting_code_pane_vc_ParamLimits

0x444d,	// (0x0003bd66) setting_code_pane_vc

0x445c,	// (0x0003bd75) setting_slider_graphic_pane_vc

0x445c,	// (0x0003bd75) setting_slider_pane_vc

0x445c,	// (0x0003bd75) setting_text_pane_vc

0x445c,	// (0x0003bd75) setting_volume_pane_vc

0x4464,	// (0x0003bd7d) scroll_pane_cp121_vc

0xb5c2,	// (0x00042edb) set_content_pane_vc

0x446c,	// (0x0003bd85) button_value_adjust_pane_g1

0x4475,	// (0x0003bd8e) button_value_adjust_pane_g2

0x0001,

0xfa78,	// (0x00047391) button_value_adjust_pane_g

0x447e,	// (0x0003bd97) form_field_slider_wide_pane_vc_t1_ParamLimits

0x447e,	// (0x0003bd97) form_field_slider_wide_pane_vc_t1

0x4492,	// (0x0003bdab) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4492,	// (0x0003bdab) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7d,	// (0x00047396) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x00047396) form_field_slider_wide_pane_vc_t

0xb228,	// (0x00042b41) input_focus_pane_cp10_vc_ParamLimits

0xb228,	// (0x00042b41) input_focus_pane_cp10_vc

0x44c0,	// (0x0003bdd9) slider_cont_pane_cp1_vc_ParamLimits

0x44c0,	// (0x0003bdd9) slider_cont_pane_cp1_vc

0x44d2,	// (0x0003bdeb) slider_form_pane_g1_cp2

0x4306,	// (0x0003bc1f) slider_form_pane_g2_cp2

0x44ff,	// (0x0003be18) form_field_slider_pane_vc_t3

0x450d,	// (0x0003be26) form_field_slider_pane_vc_t4

0x451b,	// (0x0003be34) slider_form_pane_vc_ParamLimits

0x451b,	// (0x0003be34) slider_form_pane_vc

0x4528,	// (0x0003be41) form_field_slider_pane_vc_t1_ParamLimits

0x4528,	// (0x0003be41) form_field_slider_pane_vc_t1

0x4492,	// (0x0003bdab) form_field_slider_pane_vc_t2_ParamLimits

0x4492,	// (0x0003bdab) form_field_slider_pane_vc_t2

0x0001,

0xfa8f,	// (0x000473a8) form_field_slider_pane_vc_t_ParamLimits

0xfa8f,	// (0x000473a8) form_field_slider_pane_vc_t

0xb228,	// (0x00042b41) input_focus_pane_cp9_vc_ParamLimits

0xb228,	// (0x00042b41) input_focus_pane_cp9_vc

0x4544,	// (0x0003be5d) slider_cont_pane_vc_ParamLimits

0x4544,	// (0x0003be5d) slider_cont_pane_vc

0x4558,	// (0x0003be71) list_form_graphic_pane_cp_vc_ParamLimits

0x4558,	// (0x0003be71) list_form_graphic_pane_cp_vc

0x2871,	// (0x0003a18a) form_field_popup_wide_pane_vc_g1

0x456d,	// (0x0003be86) form_field_popup_wide_pane_vc_t1_ParamLimits

0x456d,	// (0x0003be86) form_field_popup_wide_pane_vc_t1

0xb5e8,	// (0x00042f01) input_focus_pane_cp8_vc_ParamLimits

0xb5e8,	// (0x00042f01) input_focus_pane_cp8_vc

0x45b2,	// (0x0003becb) list_form_wide_pane_vc_ParamLimits

0x45b2,	// (0x0003becb) list_form_wide_pane_vc

0x45be,	// (0x0003bed7) list_form_graphic_pane_vc_g1

0x45c6,	// (0x0003bedf) list_form_graphic_pane_vc_t1_ParamLimits

0x45c6,	// (0x0003bedf) list_form_graphic_pane_vc_t1

0xb236,	// (0x00042b4f) list_highlight_pane_cp5_vc_ParamLimits

0xb236,	// (0x00042b4f) list_highlight_pane_cp5_vc

0x45e2,	// (0x0003befb) list_form_graphic_pane_vc_ParamLimits

0x45e2,	// (0x0003befb) list_form_graphic_pane_vc

0x2871,	// (0x0003a18a) form_field_popup_pane_vc_g1

0x45f8,	// (0x0003bf11) form_field_popup_pane_vc_t1_ParamLimits

0x45f8,	// (0x0003bf11) form_field_popup_pane_vc_t1

0xb5e8,	// (0x00042f01) input_focus_pane_cp7_vc_ParamLimits

0xb5e8,	// (0x00042f01) input_focus_pane_cp7_vc

0x460f,	// (0x0003bf28) list_form_pane_vc_ParamLimits

0x460f,	// (0x0003bf28) list_form_pane_vc

0x461b,	// (0x0003bf34) data_form_pane_vc_t1_ParamLimits

0x461b,	// (0x0003bf34) data_form_pane_vc_t1

0xb643,	// (0x00042f5c) input_focus_pane_vc_g1

0xb64b,	// (0x00042f64) input_focus_pane_vc_g2

0xb653,	// (0x00042f6c) input_focus_pane_vc_g3

0xb65b,	// (0x00042f74) input_focus_pane_vc_g4

0xb663,	// (0x00042f7c) input_focus_pane_vc_g5

0xb66b,	// (0x00042f84) input_focus_pane_vc_g6

0xb673,	// (0x00042f8c) input_focus_pane_vc_g7

0xb67b,	// (0x00042f94) input_focus_pane_vc_g8

0xb683,	// (0x00042f9c) input_focus_pane_vc_g9

0xb1d0,	// (0x00042ae9) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00046fa0) input_focus_pane_vc_g

0x2865,	// (0x0003a17e) data_form_pane_vc_ParamLimits

0x2865,	// (0x0003a17e) data_form_pane_vc

0x2871,	// (0x0003a18a) form_field_data_pane_vc_g1

0x4636,	// (0x0003bf4f) form_field_data_pane_vc_t1_ParamLimits

0x4636,	// (0x0003bf4f) form_field_data_pane_vc_t1

0xb5e8,	// (0x00042f01) input_focus_pane_vc_ParamLimits

0xb5e8,	// (0x00042f01) input_focus_pane_vc

0x4650,	// (0x0003bf69) button_value_adjust_pane_cp3_vc

0x4658,	// (0x0003bf71) button_value_adjust_pane_cp5_vc

0x4660,	// (0x0003bf79) form_field_data_pane_vc_ParamLimits

0x4660,	// (0x0003bf79) form_field_data_pane_vc

0x4677,	// (0x0003bf90) form_field_data_pane_vc_cp2

0x467f,	// (0x0003bf98) form_field_data_wide_pane_vc_ParamLimits

0x467f,	// (0x0003bf98) form_field_data_wide_pane_vc

0x4695,	// (0x0003bfae) form_field_data_wide_pane_vc_cp2

0x469d,	// (0x0003bfb6) form_field_popup_pane_vc_ParamLimits

0x469d,	// (0x0003bfb6) form_field_popup_pane_vc

0x46b4,	// (0x0003bfcd) form_field_popup_wide_pane_vc_ParamLimits

0x46b4,	// (0x0003bfcd) form_field_popup_wide_pane_vc

0x46ca,	// (0x0003bfe3) form_field_slider_pane_vc_ParamLimits

0x46ca,	// (0x0003bfe3) form_field_slider_pane_vc

0x46dd,	// (0x0003bff6) form_field_slider_wide_pane_vc_ParamLimits

0x46dd,	// (0x0003bff6) form_field_slider_wide_pane_vc

0xc9b4,	// (0x000442cd) grid_touch_1_pane_ParamLimits

0xc9b4,	// (0x000442cd) grid_touch_1_pane

0xc9c8,	// (0x000442e1) grid_touch_2_pane_ParamLimits

0xc9c8,	// (0x000442e1) grid_touch_2_pane

0x47ab,	// (0x0003c0c4) touch_pane_g1_ParamLimits

0x47ab,	// (0x0003c0c4) touch_pane_g1

0x4714,	// (0x0003c02d) cell_app_pane_cp_wide_ParamLimits

0x4714,	// (0x0003c02d) cell_app_pane_cp_wide

0x4725,	// (0x0003c03e) grid_popup_fast_wide_pane_ParamLimits

0x4725,	// (0x0003c03e) grid_popup_fast_wide_pane

0x4739,	// (0x0003c052) scroll_pane_cp19_ParamLimits

0x4739,	// (0x0003c052) scroll_pane_cp19

0xb1da,	// (0x00042af3) bg_popup_window_pane_cp20

0x474d,	// (0x0003c066) listscroll_popup_fast_wide_pane

0xc9f2,	// (0x0004430b) grid_indicator_nsta_pane

0x4755,	// (0x0003c06e) clock_nsta_pane_g1

0x475e,	// (0x0003c077) clock_nsta_pane_t1

0xca00,	// (0x00044319) cell_indicator_nsta_pane_ParamLimits

0xca00,	// (0x00044319) cell_indicator_nsta_pane

0x47ab,	// (0x0003c0c4) cell_indicator_nsta_pane_g1

0xca17,	// (0x00044330) cell_indicator_nsta_pane_g2

0x0001,

0xfaa0,	// (0x000473b9) cell_indicator_nsta_pane_g

0x47c6,	// (0x0003c0df) clock_nsta_pane_cp

0x47ce,	// (0x0003c0e7) indicator_nsta_pane_cp

0x47d6,	// (0x0003c0ef) nsta_clock_indic_pane_g1

0xb272,	// (0x00042b8b) grid_indicator_pane

0x99c3,	// (0x000412dc) scroll_pane_cp29

0xf1f2,	// (0x00046b0b) indicator_nsta_pane_cp2_ParamLimits

0xf1f2,	// (0x00046b0b) indicator_nsta_pane_cp2

0xb236,	// (0x00042b4f) main_apps_wheel_pane

0xc0c6,	// (0x000439df) form_midp_field_text_pane_ParamLimits

0x2bd2,	// (0x0003a4eb) scroll_bar_cp050_ParamLimits

0x4837,	// (0x0003c150) cell_indicator_pane_ParamLimits

0x4837,	// (0x0003c150) cell_indicator_pane

0x4850,	// (0x0003c169) cell_indicator_pane_g1

0xca36,	// (0x0004434f) grid_wheel_folder_pane_ParamLimits

0xca36,	// (0x0004434f) grid_wheel_folder_pane

0xca44,	// (0x0004435d) list_wheel_apps_pane_ParamLimits

0xca44,	// (0x0004435d) list_wheel_apps_pane

0xca52,	// (0x0004436b) main_apps_wheel_pane_g1_ParamLimits

0xca52,	// (0x0004436b) main_apps_wheel_pane_g1

0xca5e,	// (0x00044377) main_apps_wheel_pane_g2_ParamLimits

0xca5e,	// (0x00044377) main_apps_wheel_pane_g2

0x0001,

0xfabc,	// (0x000473d5) main_apps_wheel_pane_g_ParamLimits

0xfabc,	// (0x000473d5) main_apps_wheel_pane_g

0xca6c,	// (0x00044385) main_apps_wheel_pane_t1_ParamLimits

0xca6c,	// (0x00044385) main_apps_wheel_pane_t1

0xca80,	// (0x00044399) list_wheel_apps_pane_g1

0xca88,	// (0x000443a1) list_wheel_apps_pane_g2

0xca90,	// (0x000443a9) list_wheel_apps_pane_g3

0xca98,	// (0x000443b1) list_wheel_apps_pane_g4

0xcaa2,	// (0x000443bb) list_wheel_apps_pane_g5

0x0004,

0xfac1,	// (0x000473da) list_wheel_apps_pane_g

0xf471,	// (0x00046d8a) navi_icon_text_pane

0xbbc7,	// (0x000434e0) aid_fill_nsta

0x4917,	// (0x0003c230) navi_icon_text_pane_g1

0x4923,	// (0x0003c23c) navi_icon_text_pane_t1

0xf361,	// (0x00046c7a) list_set_graphic_pane_t1_ParamLimits

0xf361,	// (0x00046c7a) list_set_graphic_pane_t1

0x3301,	// (0x0003ac1a) popup_midp_note_alarm_window_t6_ParamLimits

0x3301,	// (0x0003ac1a) popup_midp_note_alarm_window_t6

0x3313,	// (0x0003ac2c) popup_midp_note_alarm_window_t7_ParamLimits

0x3313,	// (0x0003ac2c) popup_midp_note_alarm_window_t7

0x3325,	// (0x0003ac3e) popup_midp_note_alarm_window_t8_ParamLimits

0x3325,	// (0x0003ac3e) popup_midp_note_alarm_window_t8

0x3337,	// (0x0003ac50) popup_midp_note_alarm_window_t9_ParamLimits

0x3337,	// (0x0003ac50) popup_midp_note_alarm_window_t9

0x3349,	// (0x0003ac62) popup_midp_note_alarm_window_t10_ParamLimits

0x3349,	// (0x0003ac62) popup_midp_note_alarm_window_t10

0x335b,	// (0x0003ac74) popup_midp_note_alarm_window_t11_ParamLimits

0x335b,	// (0x0003ac74) popup_midp_note_alarm_window_t11

0xc41e,	// (0x00043d37) scroll_pane_cp17_ParamLimits

0xc41e,	// (0x00043d37) scroll_pane_cp17

0x0a38,	// (0x00038351) volume_small_pane_cp_g1

0x0e76,	// (0x0003878f) volume_small_pane_cp_g2

0x0e7f,	// (0x00038798) volume_small_pane_cp_g3

0x0e88,	// (0x000387a1) volume_small_pane_cp_g4

0x0e91,	// (0x000387aa) volume_small_pane_cp_g5

0x0e40,	// (0x00038759) volume_small_pane_cp_g6

0x0e9a,	// (0x000387b3) volume_small_pane_cp_g7

0x0ea3,	// (0x000387bc) volume_small_pane_cp_g8

0x0eac,	// (0x000387c5) volume_small_pane_cp_g9

0x0eb5,	// (0x000387ce) volume_small_pane_cp_g10

0x2019,	// (0x00039932) midp_ticker_pane_g1_ParamLimits

0x2025,	// (0x0003993e) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0004706c) midp_ticker_pane_g_ParamLimits

0x2031,	// (0x0003994a) midp_ticker_pane_t1_ParamLimits

0xbbeb,	// (0x00043504) aid_fill_nsta_2

0x2bbe,	// (0x0003a4d7) list_form2_midp_pane

0x3cc6,	// (0x0003b5df) midp_editing_number_pane_ParamLimits

0x3cd5,	// (0x0003b5ee) midp_ticker_pane_ParamLimits

0x4935,	// (0x0003c24e) form2_midp_field_pane

0x4959,	// (0x0003c272) scroll_pane_cp51

0x4979,	// (0x0003c292) form2_midp_button_pane_ParamLimits

0x4979,	// (0x0003c292) form2_midp_button_pane

0x498b,	// (0x0003c2a4) form2_midp_content_pane_ParamLimits

0x498b,	// (0x0003c2a4) form2_midp_content_pane

0x49a5,	// (0x0003c2be) form2_midp_field_choice_group_pane

0x49ad,	// (0x0003c2c6) form2_midp_field_pane_g1

0x49b5,	// (0x0003c2ce) form2_midp_field_pane_g2

0x49bd,	// (0x0003c2d6) form2_midp_field_pane_g3

0x49c5,	// (0x0003c2de) form2_midp_field_pane_g4

0x0003,

0xfae6,	// (0x000473ff) form2_midp_field_pane_g

0x49cd,	// (0x0003c2e6) form2_midp_gauge_slider_pane

0x49d5,	// (0x0003c2ee) form2_midp_gauge_wait_pane

0x49dd,	// (0x0003c2f6) form2_midp_image_pane_ParamLimits

0x49dd,	// (0x0003c2f6) form2_midp_image_pane

0xcad5,	// (0x000443ee) form2_midp_label_pane_ParamLimits

0xcad5,	// (0x000443ee) form2_midp_label_pane

0xcaee,	// (0x00044407) form2_midp_label_pane_cp_ParamLimits

0xcaee,	// (0x00044407) form2_midp_label_pane_cp

0x4a32,	// (0x0003c34b) form2_midp_string_pane_ParamLimits

0x4a32,	// (0x0003c34b) form2_midp_string_pane

0xd593,	// (0x00044eac) form2_midp_text_pane_ParamLimits

0xd593,	// (0x00044eac) form2_midp_text_pane

0x4a44,	// (0x0003c35d) form2_midp_time_pane

0x4a54,	// (0x0003c36d) input_focus_pane_cp51_ParamLimits

0x4a54,	// (0x0003c36d) input_focus_pane_cp51

0xcb0d,	// (0x00044426) form2_midp_label_pane_t1_ParamLimits

0xcb0d,	// (0x00044426) form2_midp_label_pane_t1

0xd5ac,	// (0x00044ec5) form2_mdip_text_pane_t1_ParamLimits

0xd5ac,	// (0x00044ec5) form2_mdip_text_pane_t1

0xd5ca,	// (0x00044ee3) form2_midp_time_pane_t1

0x4ab5,	// (0x0003c3ce) form2_midp_gauge_slider_pane_t1

0xcb4d,	// (0x00044466) form2_midp_gauge_slider_pane_t2

0xcb5f,	// (0x00044478) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaef,	// (0x00047408) form2_midp_gauge_slider_pane_t

0x4aeb,	// (0x0003c404) form2_midp_slider_pane

0x4af7,	// (0x0003c410) form2_midp_gauge_wait_pane_t1

0x4b05,	// (0x0003c41e) form2_midp_wait_pane_ParamLimits

0x4b05,	// (0x0003c41e) form2_midp_wait_pane

0xcb71,	// (0x0004448a) list_single_2graphic_pane_cp4_ParamLimits

0xcb71,	// (0x0004448a) list_single_2graphic_pane_cp4

0xc01c,	// (0x00043935) list_single_midp_graphic_pane_cp_ParamLimits

0xc01c,	// (0x00043935) list_single_midp_graphic_pane_cp

0xb1da,	// (0x00042af3) list_highlight_pane_cp20

0x4b58,	// (0x0003c471) list_single_2graphic_pane_g1_cp4

0x4150,	// (0x0003ba69) list_single_2graphic_pane_g2_cp4

0x4b60,	// (0x0003c479) list_single_2graphic_pane_t1_cp4

0xb236,	// (0x00042b4f) list_highlight_pane_cp21

0x4b6f,	// (0x0003c488) list_single_midp_graphic_pane_g4_cp

0x4b7e,	// (0x0003c497) list_single_midp_graphic_pane_t1_cp

0xcb86,	// (0x0004449f) form2_mdip_string_pane_t1_ParamLimits

0xcb86,	// (0x0004449f) form2_mdip_string_pane_t1

0xb1da,	// (0x00042af3) bg_wml_button_pane_cp2

0xb1d0,	// (0x00042ae9) form2_midp_image_pane_g1

0xd13e,	// (0x00044a57) list_double_large_graphic_pane_g5_ParamLimits

0xd13e,	// (0x00044a57) list_double_large_graphic_pane_g5

0x227e,	// (0x00039b97) midp_form_pane_ParamLimits

0xb236,	// (0x00042b4f) main_apps_wheel_pane_ParamLimits

0xa3b6,	// (0x00041ccf) popup_preview_window_ParamLimits

0xa3b6,	// (0x00041ccf) popup_preview_window

0xa683,	// (0x00041f9c) popup_touch_info_window_ParamLimits

0xa683,	// (0x00041f9c) popup_touch_info_window

0xa6a1,	// (0x00041fba) popup_touch_menu_window_ParamLimits

0xa6a1,	// (0x00041fba) popup_touch_menu_window

0xb1c6,	// (0x00042adf) bg_popup_sub_pane_cp6

0x4ca0,	// (0x0003c5b9) list_touch_menu_pane

0xcbfe,	// (0x00044517) list_single_touch_menu_pane_ParamLimits

0xcbfe,	// (0x00044517) list_single_touch_menu_pane

0xcc12,	// (0x0004452b) list_single_touch_menu_pane_t1

0xb236,	// (0x00042b4f) bg_popup_sub_pane_cp7_ParamLimits

0xb236,	// (0x00042b4f) bg_popup_sub_pane_cp7

0x4ccc,	// (0x0003c5e5) heading_sub_pane

0x4cd4,	// (0x0003c5ed) list_touch_info_pane_ParamLimits

0x4cd4,	// (0x0003c5ed) list_touch_info_pane

0x4ce3,	// (0x0003c5fc) list_single_touch_info_pane_ParamLimits

0x4ce3,	// (0x0003c5fc) list_single_touch_info_pane

0x4cf5,	// (0x0003c60e) list_single_touch_info_pane_t1

0x4d03,	// (0x0003c61c) list_single_touch_info_pane_t2

0x0001,

0xfafd,	// (0x00047416) list_single_touch_info_pane_t

0x0093,	// (0x000379ac) bg_popup_heading_pane_cp

0x4d11,	// (0x0003c62a) heading_sub_pane_t1

0x27ff,	// (0x0003a118) bg_popup_preview_window_pane_cp_ParamLimits

0x27ff,	// (0x0003a118) bg_popup_preview_window_pane_cp

0x4ccc,	// (0x0003c5e5) heading_preview_pane

0x4cd4,	// (0x0003c5ed) list_preview_pane_ParamLimits

0x4cd4,	// (0x0003c5ed) list_preview_pane

0x4d1f,	// (0x0003c638) popup_preview_window_g1

0x4ce3,	// (0x0003c5fc) list_single_preview_pane_ParamLimits

0x4ce3,	// (0x0003c5fc) list_single_preview_pane

0x4d27,	// (0x0003c640) list_single_preview_pane_g1

0x4d2f,	// (0x0003c648) list_single_preview_pane_t1

0x4cf5,	// (0x0003c60e) list_single_preview_pane_t2

0x0001,

0xfb02,	// (0x0004741b) list_single_preview_pane_t

0x4d3d,	// (0x0003c656) bg_popup_heading_pane_cp2_ParamLimits

0x4d3d,	// (0x0003c656) bg_popup_heading_pane_cp2

0x4d53,	// (0x0003c66c) heading_preview_pane_g1

0x4d5b,	// (0x0003c674) heading_preview_pane_t1_ParamLimits

0x4d5b,	// (0x0003c674) heading_preview_pane_t1

0xb289,	// (0x00042ba2) soft_indicator_pane_t1_ParamLimits

0xb564,	// (0x00042e7d) scroll_pane_ParamLimits

0xb8f1,	// (0x0004320a) scroll_sc2_left_pane

0xb8fa,	// (0x00043213) scroll_sc2_right_pane

0xb919,	// (0x00043232) scroll_bg_pane_g1_ParamLimits

0xb92e,	// (0x00043247) scroll_bg_pane_g2_ParamLimits

0xb946,	// (0x0004325f) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00046ff7) scroll_bg_pane_g_ParamLimits

0xb919,	// (0x00043232) scroll_handle_pane_g1_ParamLimits

0xb95b,	// (0x00043274) scroll_handle_pane_g2_ParamLimits

0xb946,	// (0x0004325f) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00046ffe) scroll_handle_pane_g_ParamLimits

0x9f5d,	// (0x00041876) popup_choice_list_window_ParamLimits

0x9f5d,	// (0x00041876) popup_choice_list_window

0x26d5,	// (0x00039fee) choice_list_pane

0x2757,	// (0x0003a070) cell_toolbar_pane_t1

0x277f,	// (0x0003a098) toolbar_button_pane_ParamLimits

0x3827,	// (0x0003b140) ai_gene_pane_1_t2_ParamLimits

0x3827,	// (0x0003b140) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x00047221) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x00047221) ai_gene_pane_1_t

0x4d78,	// (0x0003c691) scroll_sc2_left_pane_g1

0x4d78,	// (0x0003c691) scroll_sc2_right_pane_g1

0x227e,	// (0x00039b97) bg_popup_sub_pane_cp10

0x4d82,	// (0x0003c69b) list_choice_list_pane

0xcc20,	// (0x00044539) list_single_choice_list_pane_ParamLimits

0xcc20,	// (0x00044539) list_single_choice_list_pane

0xcc33,	// (0x0004454c) list_single_choice_list_pane_g1

0x97ed,	// (0x00041106) list_single_choice_list_pane_t1_ParamLimits

0x97ed,	// (0x00041106) list_single_choice_list_pane_t1

0x4db6,	// (0x0003c6cf) choice_list_pane_g1

0xcc3b,	// (0x00044554) choice_list_pane_t1

0xb1c6,	// (0x00042adf) input_focus_pane_cp11

0xb866,	// (0x0004317f) title_pane_stacon_g2_ParamLimits

0xb866,	// (0x0004317f) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00046fdd) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00046fdd) title_pane_stacon_g

0x0093,	// (0x000379ac) cursor_press_pane

0xa004,	// (0x0004191d) popup_fep_hwr_window_ParamLimits

0xa004,	// (0x0004191d) popup_fep_hwr_window

0x0452,	// (0x00037d6b) popup_fep_vkb_window_ParamLimits

0x0452,	// (0x00037d6b) popup_fep_vkb_window

0xcc49,	// (0x00044562) cursor_press_pane_g1

0x0002,

0xfb2b,	// (0x00047444) fep_vkb_side_pane_g_ParamLimits

0x0ef7,	// (0x00038810) fep_hwr_candidate_pane_ParamLimits

0x0ef7,	// (0x00038810) fep_hwr_candidate_pane

0x0f21,	// (0x0003883a) fep_hwr_side_pane_ParamLimits

0x0f21,	// (0x0003883a) fep_hwr_side_pane

0x0f41,	// (0x0003885a) fep_hwr_top_pane_ParamLimits

0x0f41,	// (0x0003885a) fep_hwr_top_pane

0x0f59,	// (0x00038872) fep_hwr_write_pane_ParamLimits

0x0f59,	// (0x00038872) fep_hwr_write_pane

0xfb2b,	// (0x00047444) fep_vkb_side_pane_g

0x4dd4,	// (0x0003c6ed) fep_hwr_top_pane_g1

0x4de6,	// (0x0003c6ff) fep_hwr_top_pane_g2

0x0f93,	// (0x000388ac) fep_hwr_top_pane_g3

0x0002,

0xfb07,	// (0x00047420) fep_hwr_top_pane_g

0x0fa8,	// (0x000388c1) fep_hwr_top_text_pane

0xba1e,	// (0x00043337) fep_hwr_top_text_pane_g1

0x4e1c,	// (0x0003c735) fep_hwr_top_text_pane_t1

0x109e,	// (0x000389b7) fep_hwr_candidate_pane_g1

0x5061,	// (0x0003c97a) fep_vkb_keypad_pane_g3_ParamLimits

0x5061,	// (0x0003c97a) fep_vkb_keypad_pane_g3

0x5089,	// (0x0003c9a2) fep_vkb_keypad_pane_g4_ParamLimits

0x5089,	// (0x0003c9a2) fep_vkb_keypad_pane_g4

0x50f8,	// (0x0003ca11) fep_vkb_bottom_pane_g2_ParamLimits

0x50f8,	// (0x0003ca11) fep_vkb_bottom_pane_g2

0x0001,

0xfb32,	// (0x0004744b) fep_vkb_bottom_pane_g_ParamLimits

0xfb32,	// (0x0004744b) fep_vkb_bottom_pane_g

0x4d78,	// (0x0003c691) cell_vkb_side_pane_g2

0x0001,

0xfb3c,	// (0x00047455) cell_vkb_side_pane_g

0x5183,	// (0x0003ca9c) cell_vkb_side_pane_t1

0x5191,	// (0x0003caaa) cell_vkb_side_pane_t1_copy1

0x4d78,	// (0x0003c691) bg_fep_vkb_candidate_pane_g2

0x52bd,	// (0x0003cbd6) cell_vkb_candidate_pane_ParamLimits

0x4e2a,	// (0x0003c743) aid_size_cell_vkb_ParamLimits

0x4e2a,	// (0x0003c743) aid_size_cell_vkb

0x52bd,	// (0x0003cbd6) cell_vkb_candidate_pane

0x10c5,	// (0x000389de) bg_popup_fep_shadow_pane_g1

0xcc63,	// (0x0004457c) fep_vkb_bottom_pane_ParamLimits

0xcc63,	// (0x0004457c) fep_vkb_bottom_pane

0x4eee,	// (0x0003c807) fep_vkb_candidate_pane_ParamLimits

0x4eee,	// (0x0003c807) fep_vkb_candidate_pane

0xcc88,	// (0x000445a1) fep_vkb_keypad_pane_ParamLimits

0xcc88,	// (0x000445a1) fep_vkb_keypad_pane

0xccbd,	// (0x000445d6) fep_vkb_side_pane_ParamLimits

0xccbd,	// (0x000445d6) fep_vkb_side_pane

0xccf9,	// (0x00044612) fep_vkb_top_pane_ParamLimits

0xccf9,	// (0x00044612) fep_vkb_top_pane

0x4fba,	// (0x0003c8d3) fep_vkb_top_pane_g1_ParamLimits

0x4fba,	// (0x0003c8d3) fep_vkb_top_pane_g1

0x4fc9,	// (0x0003c8e2) fep_vkb_top_pane_g2_ParamLimits

0x4fc9,	// (0x0003c8e2) fep_vkb_top_pane_g2

0x4fd8,	// (0x0003c8f1) fep_vkb_top_pane_g3_ParamLimits

0x4fd8,	// (0x0003c8f1) fep_vkb_top_pane_g3

0x0003,

0xfb22,	// (0x0004743b) fep_vkb_top_pane_g_ParamLimits

0xfb22,	// (0x0004743b) fep_vkb_top_pane_g

0x4ff6,	// (0x0003c90f) fep_vkb_top_text_pane_ParamLimits

0x4ff6,	// (0x0003c90f) fep_vkb_top_text_pane

0xcd2e,	// (0x00044647) fep_vkb_side_pane_g1_ParamLimits

0xcd2e,	// (0x00044647) fep_vkb_side_pane_g1

0x5050,	// (0x0003c969) grid_vkb_side_pane_ParamLimits

0x5050,	// (0x0003c969) grid_vkb_side_pane

0x10cd,	// (0x000389e6) bg_popup_fep_shadow_pane_g2

0x10d6,	// (0x000389ef) bg_popup_fep_shadow_pane_g3

0x10de,	// (0x000389f7) bg_popup_fep_shadow_pane_g4

0x10e7,	// (0x00038a00) bg_popup_fep_shadow_pane_g5

0x10f1,	// (0x00038a0a) bg_popup_fep_shadow_pane_g6

0x10f9,	// (0x00038a12) bg_popup_fep_shadow_pane_g7

0xb65b,	// (0x00042f74) bg_popup_fep_shadow_pane_g8

0x50a7,	// (0x0003c9c0) grid_vkb_keypad_number_pane_ParamLimits

0x50a7,	// (0x0003c9c0) grid_vkb_keypad_number_pane

0x50b7,	// (0x0003c9d0) grid_vkb_keypad_pane_ParamLimits

0x50b7,	// (0x0003c9d0) grid_vkb_keypad_pane

0x50dd,	// (0x0003c9f6) fep_vkb_bottom_pane_g1_ParamLimits

0x50dd,	// (0x0003c9f6) fep_vkb_bottom_pane_g1

0x5106,	// (0x0003ca1f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5106,	// (0x0003ca1f) grid_vkb_keypad_bottom_left_pane

0x511b,	// (0x0003ca34) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x511b,	// (0x0003ca34) grid_vkb_keypad_bottom_right_pane

0x5130,	// (0x0003ca49) fep_vkb_top_text_pane_g1

0xcd75,	// (0x0004468e) fep_vkb_top_text_pane_t1

0xcd87,	// (0x000446a0) cell_vkb_side_pane_ParamLimits

0xcd87,	// (0x000446a0) cell_vkb_side_pane

0x4d78,	// (0x0003c691) cell_vkb_side_pane_g1

0x519f,	// (0x0003cab8) cell_vkb_keypad_pane_ParamLimits

0x519f,	// (0x0003cab8) cell_vkb_keypad_pane

0x5214,	// (0x0003cb2d) cell_vkb_keypad_pane_g1

0x0008,

0xfb4f,	// (0x00047468) bg_popup_fep_shadow_pane_g

0x110b,	// (0x00038a24) cell_hwr_side_pane_g1

0x110b,	// (0x00038a24) cell_hwr_side_pane_g2

0x521e,	// (0x0003cb37) cell_vkb_keypad_pane_t1

0xcd9d,	// (0x000446b6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd9d,	// (0x000446b6) cell_vkb_keypad_bottom_left_pane

0xcdb2,	// (0x000446cb) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcdb2,	// (0x000446cb) cell_vkb_keypad_bottom_right_pane

0x4d78,	// (0x0003c691) cell_vkb_keypad_bottom_left_pane_g1

0x4d78,	// (0x0003c691) cell_vkb_keypad_bottom_right_pane_g1

0x5282,	// (0x0003cb9b) cell_vkb_keypad_number_pane_ParamLimits

0x5282,	// (0x0003cb9b) cell_vkb_keypad_number_pane

0x52a1,	// (0x0003cbba) cell_vkb_keypad_number_pane_g1

0x52ab,	// (0x0003cbc4) cell_vkb_keypad_number_pane_g2

0x52b4,	// (0x0003cbcd) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb41,	// (0x0004745a) cell_vkb_keypad_number_pane_g

0x521e,	// (0x0003cb37) cell_vkb_keypad_number_pane_t1

0x52d8,	// (0x0003cbf1) fep_vkb_candidate_pane_g1

0x0001,

0xfb62,	// (0x0004747b) cell_hwr_side_pane_g

0x52f1,	// (0x0003cc0a) cell_hwr_side_pane_t1

0x1115,	// (0x00038a2e) cell_hwr_side_pane_t1_copy1

0x1123,	// (0x00038a3c) cell_hwr_candidate_pane_g1

0x1152,	// (0x00038a6b) cell_hwr_candidate_pane_t1

0x4d78,	// (0x0003c691) cell_vkb_candidate_pane_g2

0x5335,	// (0x0003cc4e) cell_vkb_candidate_pane_t1

0x0ebe,	// (0x000387d7) bg_popup_fep_shadow_pane_ParamLimits

0x0ebe,	// (0x000387d7) bg_popup_fep_shadow_pane

0x0f73,	// (0x0003888c) bg_fep_hwr_top_pane_g4

0x4df8,	// (0x0003c711) bg_hwr_side_pane_g1_ParamLimits

0x4df8,	// (0x0003c711) bg_hwr_side_pane_g1

0xa926,	// (0x0004223f) cell_hwr_side_pane_ParamLimits

0xa926,	// (0x0004223f) cell_hwr_side_pane

0x101f,	// (0x00038938) fep_hwr_write_pane_g1_ParamLimits

0x101f,	// (0x00038938) fep_hwr_write_pane_g1

0x102c,	// (0x00038945) fep_hwr_write_pane_g2_ParamLimits

0x102c,	// (0x00038945) fep_hwr_write_pane_g2

0x1039,	// (0x00038952) fep_hwr_write_pane_g3_ParamLimits

0x1039,	// (0x00038952) fep_hwr_write_pane_g3

0xa946,	// (0x0004225f) fep_hwr_write_pane_g4_ParamLimits

0xa946,	// (0x0004225f) fep_hwr_write_pane_g4

0x0005,

0xfb0e,	// (0x00047427) fep_hwr_write_pane_g_ParamLimits

0xfb0e,	// (0x00047427) fep_hwr_write_pane_g

0x0f73,	// (0x0003888c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0f73,	// (0x0003888c) bg_fep_hwr_candidate_pane_g2

0x105c,	// (0x00038975) cell_hwr_candidate_pane_ParamLimits

0x105c,	// (0x00038975) cell_hwr_candidate_pane

0x109e,	// (0x000389b7) fep_hwr_candidate_pane_g1_ParamLimits

0x4e58,	// (0x0003c771) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4e58,	// (0x0003c771) bg_popup_fep_shadow_pane_cp2

0x4fe8,	// (0x0003c901) fep_vkb_top_pane_g4_ParamLimits

0x4fe8,	// (0x0003c901) fep_vkb_top_pane_g4

0x502e,	// (0x0003c947) fep_vkb_side_pane_g2_ParamLimits

0x502e,	// (0x0003c947) fep_vkb_side_pane_g2

0x94a1,	// (0x00040dba) list_setting_pane_t4_ParamLimits

0x94a1,	// (0x00040dba) list_setting_pane_t4

0x953b,	// (0x00040e54) list_setting_number_pane_t5_ParamLimits

0x953b,	// (0x00040e54) list_setting_number_pane_t5

0xba55,	// (0x0004336e) list_double_heading_pane_cp2_ParamLimits

0xba55,	// (0x0004336e) list_double_heading_pane_cp2

0x5343,	// (0x0003cc5c) list_double_heading_pane_g1_cp2_ParamLimits

0x5343,	// (0x0003cc5c) list_double_heading_pane_g1_cp2

0x534f,	// (0x0003cc68) list_double_heading_pane_g2_cp2_ParamLimits

0x534f,	// (0x0003cc68) list_double_heading_pane_g2_cp2

0x5363,	// (0x0003cc7c) list_double_heading_pane_t1_cp2_ParamLimits

0x5363,	// (0x0003cc7c) list_double_heading_pane_t1_cp2

0x5379,	// (0x0003cc92) list_double_heading_pane_t2_cp2_ParamLimits

0x5379,	// (0x0003cc92) list_double_heading_pane_t2_cp2

0xb1be,	// (0x00042ad7) aid_value_unit2

0xeefd,	// (0x00046816) popup_preview_fixed_window

0xb360,	// (0x00042c79) bg_popup_preview_window_pane_cp02

0x538b,	// (0x0003cca4) list_preview_fixed_pane

0x53d1,	// (0x0003ccea) list_empty_pane_fp_ParamLimits

0x53d1,	// (0x0003ccea) list_empty_pane_fp

0x53d1,	// (0x0003ccea) list_single_cale_day_pane_fp_ParamLimits

0x53d1,	// (0x0003ccea) list_single_cale_day_pane_fp

0x53d1,	// (0x0003ccea) list_single_graphic_heading_pane_fp_ParamLimits

0x53d1,	// (0x0003ccea) list_single_graphic_heading_pane_fp

0x53d1,	// (0x0003ccea) list_single_graphic_pane_fp_ParamLimits

0x53d1,	// (0x0003ccea) list_single_graphic_pane_fp

0x53d1,	// (0x0003ccea) list_single_heading_pane_fp_ParamLimits

0x53d1,	// (0x0003ccea) list_single_heading_pane_fp

0x53d1,	// (0x0003ccea) list_single_pane_fp_ParamLimits

0x53d1,	// (0x0003ccea) list_single_pane_fp

0x53e7,	// (0x0003cd00) list_single_pane_fp_g1_ParamLimits

0x53e7,	// (0x0003cd00) list_single_pane_fp_g1

0xd5ea,	// (0x00044f03) list_single_pane_fp_g2_ParamLimits

0xd5ea,	// (0x00044f03) list_single_pane_fp_g2

0xd5f6,	// (0x00044f0f) list_single_pane_fp_g3_ParamLimits

0xd5f6,	// (0x00044f0f) list_single_pane_fp_g3

0x53f3,	// (0x0003cd0c) list_single_pane_fp_g4_ParamLimits

0x53f3,	// (0x0003cd0c) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0004748e) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0004748e) list_single_pane_fp_g

0xd60a,	// (0x00044f23) list_single_pane_fp_t1_ParamLimits

0xd60a,	// (0x00044f23) list_single_pane_fp_t1

0xd621,	// (0x00044f3a) list_single_graphic_pane_fp_g1_ParamLimits

0xd621,	// (0x00044f3a) list_single_graphic_pane_fp_g1

0x53e7,	// (0x0003cd00) list_single_graphic_pane_fp_g2_ParamLimits

0x53e7,	// (0x0003cd00) list_single_graphic_pane_fp_g2

0xd5ea,	// (0x00044f03) list_single_graphic_pane_fp_g3_ParamLimits

0xd5ea,	// (0x00044f03) list_single_graphic_pane_fp_g3

0xd5f6,	// (0x00044f0f) list_single_graphic_pane_fp_g4_ParamLimits

0xd5f6,	// (0x00044f0f) list_single_graphic_pane_fp_g4

0x53f3,	// (0x0003cd0c) list_single_graphic_pane_fp_g5_ParamLimits

0x53f3,	// (0x0003cd0c) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x00047497) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x00047497) list_single_graphic_pane_fp_g

0xd62d,	// (0x00044f46) list_single_graphic_pane_fp_t1_ParamLimits

0xd62d,	// (0x00044f46) list_single_graphic_pane_fp_t1

0xd621,	// (0x00044f3a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd621,	// (0x00044f3a) list_single_graphic_heading_pane_fp_g1

0x53e7,	// (0x0003cd00) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x53e7,	// (0x0003cd00) list_single_graphic_heading_pane_fp_g2

0xd5ea,	// (0x00044f03) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd5ea,	// (0x00044f03) list_single_graphic_heading_pane_fp_g3

0xd5f6,	// (0x00044f0f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd5f6,	// (0x00044f0f) list_single_graphic_heading_pane_fp_g4

0x53f3,	// (0x0003cd0c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x53f3,	// (0x0003cd0c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00047497) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00047497) list_single_graphic_heading_pane_fp_g

0xd643,	// (0x00044f5c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd643,	// (0x00044f5c) list_single_graphic_heading_pane_fp_t1

0xd659,	// (0x00044f72) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd659,	// (0x00044f72) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x000474a2) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x000474a2) list_single_graphic_heading_pane_fp_t

0xd66b,	// (0x00044f84) list_single_cale_day_pane_fp_g1_ParamLimits

0xd66b,	// (0x00044f84) list_single_cale_day_pane_fp_g1

0x53ff,	// (0x0003cd18) list_single_cale_day_pane_fp_g2_ParamLimits

0x53ff,	// (0x0003cd18) list_single_cale_day_pane_fp_g2

0xd6a3,	// (0x00044fbc) list_single_cale_day_pane_fp_g3_ParamLimits

0xd6a3,	// (0x00044fbc) list_single_cale_day_pane_fp_g3

0xd6cb,	// (0x00044fe4) list_single_cale_day_pane_fp_g4_ParamLimits

0xd6cb,	// (0x00044fe4) list_single_cale_day_pane_fp_g4

0xd6ef,	// (0x00045008) list_single_cale_day_pane_fp_g5_ParamLimits

0xd6ef,	// (0x00045008) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x000474a7) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x000474a7) list_single_cale_day_pane_fp_g

0xd713,	// (0x0004502c) list_single_cale_day_pane_fp_t1_ParamLimits

0xd713,	// (0x0004502c) list_single_cale_day_pane_fp_t1

0xd739,	// (0x00045052) list_single_cale_day_pane_fp_t2_ParamLimits

0xd739,	// (0x00045052) list_single_cale_day_pane_fp_t2

0xd752,	// (0x0004506b) list_single_cale_day_pane_fp_t3_ParamLimits

0xd752,	// (0x0004506b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x000474b2) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x000474b2) list_single_cale_day_pane_fp_t

0x53e7,	// (0x0003cd00) list_empty_pane_fp_g1_ParamLimits

0x53e7,	// (0x0003cd00) list_empty_pane_fp_g1

0xd76b,	// (0x00045084) list_empty_pane_fp_t1

0xd779,	// (0x00045092) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x000474b9) list_empty_pane_fp_t

0x53e7,	// (0x0003cd00) list_single_heading_pane_fp_g1_ParamLimits

0x53e7,	// (0x0003cd00) list_single_heading_pane_fp_g1

0xd5ea,	// (0x00044f03) list_single_heading_pane_fp_g2_ParamLimits

0xd5ea,	// (0x00044f03) list_single_heading_pane_fp_g2

0xd5f6,	// (0x00044f0f) list_single_heading_pane_fp_g3_ParamLimits

0xd5f6,	// (0x00044f0f) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x000474be) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x000474be) list_single_heading_pane_fp_g

0xd787,	// (0x000450a0) list_single_heading_pane_fp_t1_ParamLimits

0xd787,	// (0x000450a0) list_single_heading_pane_fp_t1

0xd799,	// (0x000450b2) list_single_heading_pane_fp_t2_ParamLimits

0xd799,	// (0x000450b2) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x000474c5) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x000474c5) list_single_heading_pane_fp_t

0x9839,	// (0x00041152) aid_size_cell_fast

0xb343,	// (0x00042c5c) soft_indicator_pane_cp1_t1

0x9842,	// (0x0004115b) cell_app_pane_cp2_ParamLimits

0x9842,	// (0x0004115b) cell_app_pane_cp2

0x0ee0,	// (0x000387f9) fep_hwr_candidate_drop_down_list_pane

0x10b8,	// (0x000389d1) fep_hwr_candidate_pane_g3_ParamLimits

0x10b8,	// (0x000389d1) fep_hwr_candidate_pane_g3

0xd5dd,	// (0x00044ef6) fep_hwr_candidate_pane_g4_ParamLimits

0xd5dd,	// (0x00044ef6) fep_hwr_candidate_pane_g4

0x0002,

0xfb1b,	// (0x00047434) fep_hwr_candidate_pane_g_ParamLimits

0xfb1b,	// (0x00047434) fep_hwr_candidate_pane_g

0x4edd,	// (0x0003c7f6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4edd,	// (0x0003c7f6) fep_vkb_candidate_drop_down_list_pane

0x52e0,	// (0x0003cbf9) fep_vkb_candidate_pane_g3

0x52e8,	// (0x0003cc01) fep_vkb_candidate_pane_g4

0x0002,

0xfb48,	// (0x00047461) fep_vkb_candidate_pane_g

0x1123,	// (0x00038a3c) cell_hwr_candidate_pane_g1_ParamLimits

0x1131,	// (0x00038a4a) cell_hwr_candidate_pane_g3_ParamLimits

0x1131,	// (0x00038a4a) cell_hwr_candidate_pane_g3

0x5c74,	// (0x0003d58d) cell_hwr_candidate_pane_g4_ParamLimits

0x5c74,	// (0x0003d58d) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x00047480) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x00047480) cell_hwr_candidate_pane_g

0x52ff,	// (0x0003cc18) cell_vkb_candidate_pane_g3_ParamLimits

0x52ff,	// (0x0003cc18) cell_vkb_candidate_pane_g3

0x531a,	// (0x0003cc33) cell_vkb_candidate_pane_g4_ParamLimits

0x531a,	// (0x0003cc33) cell_vkb_candidate_pane_g4

0xcdcd,	// (0x000446e6) cell_app_pane_cp2_g1_ParamLimits

0xcdcd,	// (0x000446e6) cell_app_pane_cp2_g1

0x5429,	// (0x0003cd42) cell_app_pane_cp2_g2_ParamLimits

0x5429,	// (0x0003cd42) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x000474ca) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x000474ca) cell_app_pane_cp2_g

0x5435,	// (0x0003cd4e) cell_app_pane_cp2_t1_ParamLimits

0x5435,	// (0x0003cd4e) cell_app_pane_cp2_t1

0xb5e8,	// (0x00042f01) grid_highlight_pane_cp1_ParamLimits

0xb5e8,	// (0x00042f01) grid_highlight_pane_cp1

0x1170,	// (0x00038a89) cell_hwr_candidate_pane_cp1_ParamLimits

0x1170,	// (0x00038a89) cell_hwr_candidate_pane_cp1

0x1123,	// (0x00038a3c) fep_hwr_candidate_drop_down_list_pane_g1

0x118f,	// (0x00038aa8) fep_hwr_candidate_drop_down_list_pane_g2

0x119c,	// (0x00038ab5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x000474cf) fep_hwr_candidate_drop_down_list_pane_g

0x11a9,	// (0x00038ac2) fep_hwr_candidate_drop_down_list_scroll_pane

0x11b2,	// (0x00038acb) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x11b2,	// (0x00038acb) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x11bf,	// (0x00038ad8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x11bf,	// (0x00038ad8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x11cc,	// (0x00038ae5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x11cc,	// (0x00038ae5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x11d9,	// (0x00038af2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x11d9,	// (0x00038af2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x11f4,	// (0x00038b0d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x11f4,	// (0x00038b0d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x120f,	// (0x00038b28) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x120f,	// (0x00038b28) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x122a,	// (0x00038b43) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x122a,	// (0x00038b43) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1245,	// (0x00038b5e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1245,	// (0x00038b5e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x000474d6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x000474d6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5447,	// (0x0003cd60) cell_vkb_candidate_pane_cp1_ParamLimits

0x5447,	// (0x0003cd60) cell_vkb_candidate_pane_cp1

0x4fe8,	// (0x0003c901) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4fe8,	// (0x0003c901) fep_vkb_candidate_drop_down_list_pane_g1

0x5467,	// (0x0003cd80) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5467,	// (0x0003cd80) fep_vkb_candidate_drop_down_list_pane_g2

0x5474,	// (0x0003cd8d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5474,	// (0x0003cd8d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbce,	// (0x000474e7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbce,	// (0x000474e7) fep_vkb_candidate_drop_down_list_pane_g

0x5481,	// (0x0003cd9a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5481,	// (0x0003cd9a) fep_vkb_candidate_drop_down_list_scroll_pane

0x548e,	// (0x0003cda7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x548e,	// (0x0003cda7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x549b,	// (0x0003cdb4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x549b,	// (0x0003cdb4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x54a7,	// (0x0003cdc0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x54a7,	// (0x0003cdc0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x54b3,	// (0x0003cdcc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x54b3,	// (0x0003cdcc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x54d4,	// (0x0003cded) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x54d4,	// (0x0003cded) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x54f5,	// (0x0003ce0e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x54f5,	// (0x0003ce0e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5516,	// (0x0003ce2f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5516,	// (0x0003ce2f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5537,	// (0x0003ce50) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5537,	// (0x0003ce50) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x000474ee) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x000474ee) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8beb,	// (0x00040504) title_pane_g1_ParamLimits

0x8bfe,	// (0x00040517) title_pane_g2_ParamLimits

0xf54e,	// (0x00046e67) title_pane_g_ParamLimits

0xba0e,	// (0x00043327) aid_call2_pane

0xba16,	// (0x0004332f) aid_call_pane

0xba1e,	// (0x00043337) popup_clock_analogue_window_g1

0xba1e,	// (0x00043337) popup_clock_analogue_window_g2

0xf136,	// (0x00046a4f) popup_clock_analogue_window_g3

0xf13f,	// (0x00046a58) popup_clock_analogue_window_g4

0xb1d0,	// (0x00042ae9) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0004700c) popup_clock_analogue_window_g

0xf147,	// (0x00046a60) popup_clock_analogue_window_t1

0xf155,	// (0x00046a6e) clock_digital_number_pane_ParamLimits

0xf155,	// (0x00046a6e) clock_digital_number_pane

0xf161,	// (0x00046a7a) clock_digital_number_pane_cp02_ParamLimits

0xf161,	// (0x00046a7a) clock_digital_number_pane_cp02

0xf16d,	// (0x00046a86) clock_digital_number_pane_cp03_ParamLimits

0xf16d,	// (0x00046a86) clock_digital_number_pane_cp03

0xf179,	// (0x00046a92) clock_digital_number_pane_cp04_ParamLimits

0xf179,	// (0x00046a92) clock_digital_number_pane_cp04

0xf185,	// (0x00046a9e) clock_digital_separator_pane_ParamLimits

0xf185,	// (0x00046a9e) clock_digital_separator_pane

0xf191,	// (0x00046aaa) popup_clock_digital_window_t1_ParamLimits

0xf191,	// (0x00046aaa) popup_clock_digital_window_t1

0xb1d0,	// (0x00042ae9) clock_digital_number_pane_g1

0xb1d0,	// (0x00042ae9) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00047017) clock_digital_number_pane_g

0xb1d0,	// (0x00042ae9) clock_digital_separator_pane_g1

0xb1d0,	// (0x00042ae9) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00047017) clock_digital_separator_pane_g

0xbbc7,	// (0x000434e0) aid_fill_nsta_ParamLimits

0xbcfd,	// (0x00043616) indicator_nsta_pane_ParamLimits

0x2565,	// (0x00039e7e) popup_clock_analogue_window

0x2565,	// (0x00039e7e) popup_clock_digital_window

0xc9f2,	// (0x0004430b) grid_indicator_nsta_pane_ParamLimits

0x476c,	// (0x0003c085) clock_nsta_pane_t2

0x0001,

0xfa9b,	// (0x000473b4) clock_nsta_pane_t

0xf117,	// (0x00046a30) aid_size_max_handle

0x9920,	// (0x00041239) aid_size_min_handle

0x0093,	// (0x000379ac) editor_scroll_pane

0x5552,	// (0x0003ce6b) ex_editor_pane

0xb70a,	// (0x00043023) scroll_pane_cp13

0xb590,	// (0x00042ea9) scroll_pane_cp14

0xba4d,	// (0x00043366) scroll_pane_cp36

0x99ea,	// (0x00041303) list_single_graphic_hl_pane_cp2_ParamLimits

0x99ea,	// (0x00041303) list_single_graphic_hl_pane_cp2

0xc7f4,	// (0x0004410d) list_single_graphic_hl_pane_ParamLimits

0xc7f4,	// (0x0004410d) list_single_graphic_hl_pane

0xa95b,	// (0x00042274) aid_size_min_hl_cp1

0x555a,	// (0x0003ce73) list_highlight_pane_cp34_ParamLimits

0x555a,	// (0x0003ce73) list_highlight_pane_cp34

0x556b,	// (0x0003ce84) list_single_graphic_hl_pane_g1_ParamLimits

0x556b,	// (0x0003ce84) list_single_graphic_hl_pane_g1

0xa964,	// (0x0004227d) list_single_graphic_hl_pane_g2_ParamLimits

0xa964,	// (0x0004227d) list_single_graphic_hl_pane_g2

0xa964,	// (0x0004227d) list_single_graphic_hl_pane_g3_ParamLimits

0xa964,	// (0x0004227d) list_single_graphic_hl_pane_g3

0xd7af,	// (0x000450c8) list_single_graphic_hl_pane_g4_ParamLimits

0xd7af,	// (0x000450c8) list_single_graphic_hl_pane_g4

0xa970,	// (0x00042289) list_single_graphic_hl_pane_g5_ParamLimits

0xa970,	// (0x00042289) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x000474ff) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x000474ff) list_single_graphic_hl_pane_g

0xa984,	// (0x0004229d) list_single_graphic_hl_pane_t1_ParamLimits

0xa984,	// (0x0004229d) list_single_graphic_hl_pane_t1

0x5578,	// (0x0003ce91) aid_size_min_hl_cp2

0x5581,	// (0x0003ce9a) list_highlight_pane_cp34_cp2_ParamLimits

0x5581,	// (0x0003ce9a) list_highlight_pane_cp34_cp2

0x556b,	// (0x0003ce84) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x556b,	// (0x0003ce84) list_single_graphic_hl_pane_g1_cp2

0x558e,	// (0x0003cea7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x558e,	// (0x0003cea7) list_single_graphic_hl_pane_g2_cp2

0xcdeb,	// (0x00044704) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcdeb,	// (0x00044704) list_single_graphic_hl_pane_g3_cp2

0xf522,	// (0x00046e3b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf522,	// (0x00046e3b) list_single_graphic_hl_pane_g4_cp2

0x55a8,	// (0x0003cec1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x55a8,	// (0x0003cec1) list_single_graphic_hl_pane_g5_cp2

0x9deb,	// (0x00041704) control_pane_g4_ParamLimits

0x9deb,	// (0x00041704) control_pane_g4

0x227e,	// (0x00039b97) bg_popup_sub_pane_cp10_ParamLimits

0x4d82,	// (0x0003c69b) list_choice_list_pane_ParamLimits

0x4d91,	// (0x0003c6aa) scroll_pane_cp23

0xb360,	// (0x00042c79) bg_popup_preview_window_pane_cp02_ParamLimits

0x538b,	// (0x0003cca4) list_preview_fixed_pane_ParamLimits

0x53a1,	// (0x0003ccba) list_preview_fixed_pane_cp_ParamLimits

0x53a1,	// (0x0003ccba) list_preview_fixed_pane_cp

0x53ad,	// (0x0003ccc6) popup_preview_fixed_window_g1_ParamLimits

0x53ad,	// (0x0003ccc6) popup_preview_fixed_window_g1

0x53b9,	// (0x0003ccd2) popup_preview_fixed_window_g2_ParamLimits

0x53b9,	// (0x0003ccd2) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x00047487) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x00047487) popup_preview_fixed_window_g

0xf005,	// (0x0004691e) aid_navi_side_left_pane_ParamLimits

0xf01a,	// (0x00046933) aid_navi_side_right_pane_ParamLimits

0xf032,	// (0x0004694b) navi_icon_pane_stacon_ParamLimits

0xf046,	// (0x0004695f) navi_navi_pane_stacon_ParamLimits

0xf032,	// (0x0004694b) navi_text_pane_stacon_ParamLimits

0xee22,	// (0x0004673b) main_text_info_pane

0x55d2,	// (0x0003ceeb) listscroll_text_info_pane

0x55da,	// (0x0003cef3) list_text_info_pane_ParamLimits

0x55da,	// (0x0003cef3) list_text_info_pane

0x55e9,	// (0x0003cf02) scroll_pane_cp24_ParamLimits

0x55e9,	// (0x0003cf02) scroll_pane_cp24

0xcdf9,	// (0x00044712) list_text_info_pane_t1_ParamLimits

0xcdf9,	// (0x00044712) list_text_info_pane_t1

0x9f79,	// (0x00041892) popup_fast_swap2_window_ParamLimits

0x9f79,	// (0x00041892) popup_fast_swap2_window

0x563b,	// (0x0003cf54) aid_size_cell_fast2

0xb1c6,	// (0x00042adf) bg_popup_window_pane_cp17

0x2bea,	// (0x0003a503) heading_pane_cp2

0xb494,	// (0x00042dad) listscroll_fast2_pane

0x5645,	// (0x0003cf5e) grid_fast2_pane

0x564f,	// (0x0003cf68) listscroll_fast2_pane_g1

0x5657,	// (0x0003cf70) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x0004750a) listscroll_fast2_pane_g

0xb70a,	// (0x00043023) scroll_pane_cp26

0x5661,	// (0x0003cf7a) cell_fast2_pane_ParamLimits

0x5661,	// (0x0003cf7a) cell_fast2_pane

0x5676,	// (0x0003cf8f) cell_fast2_pane_g1

0x567f,	// (0x0003cf98) cell_fast2_pane_g2

0x5688,	// (0x0003cfa1) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x0004750f) cell_fast2_pane_g

0xb4c7,	// (0x00042de0) grid_highlight_pane_cp9

0x0316,	// (0x00037c2f) main_eswt_pane_ParamLimits

0x0316,	// (0x00037c2f) main_eswt_pane

0x55fe,	// (0x0003cf17) list_single_text_info_pane

0x5690,	// (0x0003cfa9) eswt_ctrl_button_pane

0x5690,	// (0x0003cfa9) eswt_ctrl_canvas_pane

0xce15,	// (0x0004472e) eswt_ctrl_combo_pane

0x5690,	// (0x0003cfa9) eswt_ctrl_default_pane

0x5690,	// (0x0003cfa9) eswt_ctrl_label_pane

0x56a0,	// (0x0003cfb9) eswt_ctrl_wait_pane

0xce1d,	// (0x00044736) eswt_shell_pane

0xb1c6,	// (0x00042adf) listscroll_eswt_app_pane

0x56c8,	// (0x0003cfe1) popup_eswt_tasktip_window_ParamLimits

0x56c8,	// (0x0003cfe1) popup_eswt_tasktip_window

0x27ff,	// (0x0003a118) bg_popup_window_pane_cp18

0x56d9,	// (0x0003cff2) eswt_control_pane_g1_ParamLimits

0x56d9,	// (0x0003cff2) eswt_control_pane_g1

0x56e6,	// (0x0003cfff) eswt_control_pane_g2_ParamLimits

0x56e6,	// (0x0003cfff) eswt_control_pane_g2

0x56f3,	// (0x0003d00c) eswt_control_pane_g3_ParamLimits

0x56f3,	// (0x0003d00c) eswt_control_pane_g3

0x5700,	// (0x0003d019) eswt_control_pane_g4_ParamLimits

0x5700,	// (0x0003d019) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x00047516) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x00047516) eswt_control_pane_g

0xb5e8,	// (0x00042f01) bg_button_pane_ParamLimits

0xb5e8,	// (0x00042f01) bg_button_pane

0xb4dc,	// (0x00042df5) common_borders_pane_copy2_ParamLimits

0xb4dc,	// (0x00042df5) common_borders_pane_copy2

0x570d,	// (0x0003d026) control_button_pane_g1_ParamLimits

0x570d,	// (0x0003d026) control_button_pane_g1

0x5719,	// (0x0003d032) control_button_pane_g2_ParamLimits

0x5719,	// (0x0003d032) control_button_pane_g2

0x5725,	// (0x0003d03e) control_button_pane_g3_ParamLimits

0x5725,	// (0x0003d03e) control_button_pane_g3

0x0002,

0xfc06,	// (0x0004751f) control_button_pane_g_ParamLimits

0xfc06,	// (0x0004751f) control_button_pane_g

0x5739,	// (0x0003d052) control_button_pane_t1

0x5747,	// (0x0003d060) control_button_pane_t2

0x0001,

0xfc0d,	// (0x00047526) control_button_pane_t

0x278b,	// (0x0003a0a4) bg_button_pane_g1

0x279b,	// (0x0003a0b4) bg_button_pane_g2

0x2793,	// (0x0003a0ac) bg_button_pane_g3

0x27ab,	// (0x0003a0c4) bg_button_pane_g4

0x27a3,	// (0x0003a0bc) bg_button_pane_g5

0x27b3,	// (0x0003a0cc) bg_button_pane_g6

0x27bb,	// (0x0003a0d4) bg_button_pane_g7

0x27cb,	// (0x0003a0e4) bg_button_pane_g8

0x27c3,	// (0x0003a0dc) bg_button_pane_g9

0x0008,

0xf85c,	// (0x00047175) bg_button_pane_g

0x4d3d,	// (0x0003c656) common_borders_pane_ParamLimits

0x4d3d,	// (0x0003c656) common_borders_pane

0x56d9,	// (0x0003cff2) eswt_control_pane_g1_copy1_ParamLimits

0x56d9,	// (0x0003cff2) eswt_control_pane_g1_copy1

0x56e6,	// (0x0003cfff) eswt_control_pane_g2_copy1_ParamLimits

0x56e6,	// (0x0003cfff) eswt_control_pane_g2_copy1

0x56f3,	// (0x0003d00c) eswt_control_pane_g3_copy1_ParamLimits

0x56f3,	// (0x0003d00c) eswt_control_pane_g3_copy1

0x5700,	// (0x0003d019) eswt_control_pane_g4_copy1_ParamLimits

0x5700,	// (0x0003d019) eswt_control_pane_g4_copy1

0x4d78,	// (0x0003c691) bg_eswt_ctrl_canvas_pane_g1

0x4d3d,	// (0x0003c656) common_borders_pane_cp2_ParamLimits

0x4d3d,	// (0x0003c656) common_borders_pane_cp2

0x4d3d,	// (0x0003c656) common_borders_pane_cp3_ParamLimits

0x4d3d,	// (0x0003c656) common_borders_pane_cp3

0x5755,	// (0x0003d06e) separator_horizontal_pane

0x575d,	// (0x0003d076) separator_vertical_pane

0x56d9,	// (0x0003cff2) eswt_control_pane_g1_copy2_ParamLimits

0x56d9,	// (0x0003cff2) eswt_control_pane_g1_copy2

0x56e6,	// (0x0003cfff) eswt_control_pane_g2_copy2_ParamLimits

0x56e6,	// (0x0003cfff) eswt_control_pane_g2_copy2

0x56f3,	// (0x0003d00c) eswt_control_pane_g3_copy2_ParamLimits

0x56f3,	// (0x0003d00c) eswt_control_pane_g3_copy2

0x5700,	// (0x0003d019) eswt_control_pane_g4_copy2_ParamLimits

0x5700,	// (0x0003d019) eswt_control_pane_g4_copy2

0xb1c6,	// (0x00042adf) common_borders_pane_cp4

0x5766,	// (0x0003d07f) separator_horizontal_pane_g1

0x576f,	// (0x0003d088) separator_horizontal_pane_g2

0x5778,	// (0x0003d091) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x0004752b) separator_horizontal_pane_g

0x56d9,	// (0x0003cff2) eswt_control_pane_g1_copy3_ParamLimits

0x56d9,	// (0x0003cff2) eswt_control_pane_g1_copy3

0x56e6,	// (0x0003cfff) eswt_control_pane_g2_copy3_ParamLimits

0x56e6,	// (0x0003cfff) eswt_control_pane_g2_copy3

0x56f3,	// (0x0003d00c) eswt_control_pane_g3_copy3_ParamLimits

0x56f3,	// (0x0003d00c) eswt_control_pane_g3_copy3

0x5700,	// (0x0003d019) eswt_control_pane_g4_copy3_ParamLimits

0x5700,	// (0x0003d019) eswt_control_pane_g4_copy3

0xb1c6,	// (0x00042adf) common_borders_pane_cp5

0x5781,	// (0x0003d09a) separator_vertical_pane_g1

0x578a,	// (0x0003d0a3) separator_vertical_pane_g2

0x5793,	// (0x0003d0ac) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x00047532) separator_vertical_pane_g

0x56d9,	// (0x0003cff2) eswt_control_pane_g1_copy4_ParamLimits

0x56d9,	// (0x0003cff2) eswt_control_pane_g1_copy4

0x56e6,	// (0x0003cfff) eswt_control_pane_g2_copy4_ParamLimits

0x56e6,	// (0x0003cfff) eswt_control_pane_g2_copy4

0x56f3,	// (0x0003d00c) eswt_control_pane_g3_copy4_ParamLimits

0x56f3,	// (0x0003d00c) eswt_control_pane_g3_copy4

0x5700,	// (0x0003d019) eswt_control_pane_g4_copy4_ParamLimits

0x5700,	// (0x0003d019) eswt_control_pane_g4_copy4

0xce3d,	// (0x00044756) eswt_ctrl_combo_button_pane

0xce45,	// (0x0004475e) eswt_ctrl_input_pane

0xce4d,	// (0x00044766) popup_choice_list_window_cp70

0xce55,	// (0x0004476e) eswt_ctrl_input_pane_t1

0xb1c6,	// (0x00042adf) input_focus_pane_cp70

0x4d3d,	// (0x0003c656) bg_button_pane_cp70_ParamLimits

0x4d3d,	// (0x0003c656) bg_button_pane_cp70

0xce63,	// (0x0004477c) eswt_ctrl_combo_button_pane_g1

0x57ca,	// (0x0003d0e3) wait_bar_pane_cp70

0x27ff,	// (0x0003a118) bg_popup_window_pane_cp70_ParamLimits

0x27ff,	// (0x0003a118) bg_popup_window_pane_cp70

0x57d2,	// (0x0003d0eb) popup_eswt_tasktip_window_t1

0x57e8,	// (0x0003d101) wait_bar_pane_cp71_ParamLimits

0x57e8,	// (0x0003d101) wait_bar_pane_cp71

0x57f4,	// (0x0003d10d) grid_eswt_app_pane

0xb8f1,	// (0x0004320a) scroll_pane_cp70

0xce6b,	// (0x00044784) cell_eswt_app_pane_ParamLimits

0xce6b,	// (0x00044784) cell_eswt_app_pane

0xce95,	// (0x000447ae) cell_eswt_app_pane_g1_ParamLimits

0xce95,	// (0x000447ae) cell_eswt_app_pane_g1

0xcec4,	// (0x000447dd) cell_eswt_app_pane_g2_ParamLimits

0xcec4,	// (0x000447dd) cell_eswt_app_pane_g2

0x0001,

0xfc20,	// (0x00047539) cell_eswt_app_pane_g_ParamLimits

0xfc20,	// (0x00047539) cell_eswt_app_pane_g

0xcee8,	// (0x00044801) cell_eswt_app_pane_t1_ParamLimits

0xcee8,	// (0x00044801) cell_eswt_app_pane_t1

0x58b2,	// (0x0003d1cb) grid_highlight_pane_cp70_ParamLimits

0x58b2,	// (0x0003d1cb) grid_highlight_pane_cp70

0xf4c6,	// (0x00046ddf) set_content_pane_g1

0x9d7d,	// (0x00041696) status_small_volume_pane

0xa99a,	// (0x000422b3) status_small_volume_pane_g1

0xa9a2,	// (0x000422bb) volume_small2_pane

0xa9ab,	// (0x000422c4) volume_small2_pane_g1

0xa9b4,	// (0x000422cd) volume_small2_pane_g2

0xa9bd,	// (0x000422d6) volume_small2_pane_g3

0xa9c6,	// (0x000422df) volume_small2_pane_g4

0xa9cf,	// (0x000422e8) volume_small2_pane_g5

0xa9d8,	// (0x000422f1) volume_small2_pane_g6

0xa9e1,	// (0x000422fa) volume_small2_pane_g7

0xa9ea,	// (0x00042303) volume_small2_pane_g8

0xa9f3,	// (0x0004230c) volume_small2_pane_g9

0xa9fc,	// (0x00042315) volume_small2_pane_g10

0x0009,

0xfc25,	// (0x0004753e) volume_small2_pane_g

0x5130,	// (0x0003ca49) fep_vkb_top_text_pane_g1_ParamLimits

0xcd75,	// (0x0004468e) fep_vkb_top_text_pane_t1_ParamLimits

0x53c5,	// (0x0003ccde) popup_preview_fixed_window_g3_ParamLimits

0x53c5,	// (0x0003ccde) popup_preview_fixed_window_g3

0xa616,	// (0x00041f2f) popup_toolbar_trans_pane

0xc68d,	// (0x00043fa6) aid_height_set_list_ParamLimits

0x3b3f,	// (0x0003b458) aid_size_parent_ParamLimits

0x227e,	// (0x00039b97) list_highlight_pane_cp2_ParamLimits

0xf4c6,	// (0x00046ddf) set_content_pane_g1_ParamLimits

0xc806,	// (0x0004411f) list_single_image_pane_ParamLimits

0xc806,	// (0x0004411f) list_single_image_pane

0xcf1a,	// (0x00044833) aid_size_cell_image_ParamLimits

0xcf1a,	// (0x00044833) aid_size_cell_image

0xcf27,	// (0x00044840) grid_single_image_pane_ParamLimits

0xcf27,	// (0x00044840) grid_single_image_pane

0x58d9,	// (0x0003d1f2) list_single_image_pane_g1_ParamLimits

0x58d9,	// (0x0003d1f2) list_single_image_pane_g1

0x58e5,	// (0x0003d1fe) list_single_image_pane_g2_ParamLimits

0x58e5,	// (0x0003d1fe) list_single_image_pane_g2

0x0001,

0xfc3a,	// (0x00047553) list_single_image_pane_g_ParamLimits

0xfc3a,	// (0x00047553) list_single_image_pane_g

0x58f9,	// (0x0003d212) list_single_image_pane_t1_ParamLimits

0x58f9,	// (0x0003d212) list_single_image_pane_t1

0xcf33,	// (0x0004484c) cell_image_list_pane_ParamLimits

0xcf33,	// (0x0004484c) cell_image_list_pane

0xcf47,	// (0x00044860) cell_image_list_pane_g1

0xcf50,	// (0x00044869) cell_image_list_pane_g2

0x0001,

0xfc3f,	// (0x00047558) cell_image_list_pane_g

0xcf59,	// (0x00044872) aid_size_cell_tb_trans_pane

0xb5e8,	// (0x00042f01) bg_tb_trans_pane

0xcf6b,	// (0x00044884) grid_tb_trans_pane

0x278b,	// (0x0003a0a4) bg_tb_trans_pane_g1

0x279b,	// (0x0003a0b4) bg_tb_trans_pane_g2

0x2793,	// (0x0003a0ac) bg_tb_trans_pane_g3

0x27ab,	// (0x0003a0c4) bg_tb_trans_pane_g4

0x27a3,	// (0x0003a0bc) bg_tb_trans_pane_g5

0x27cb,	// (0x0003a0e4) bg_tb_trans_pane_g6

0x27c3,	// (0x0003a0dc) bg_tb_trans_pane_g7

0x27b3,	// (0x0003a0cc) bg_tb_trans_pane_g8

0x27bb,	// (0x0003a0d4) bg_tb_trans_pane_g9

0x0008,

0xfc44,	// (0x0004755d) bg_tb_trans_pane_g

0xcf7f,	// (0x00044898) cell_toolbar_trans_pane_ParamLimits

0xcf7f,	// (0x00044898) cell_toolbar_trans_pane

0x4d78,	// (0x0003c691) cell_toolbar_trans_pane_g1

0xcab9,	// (0x000443d2) list_form2_midp_pane_t1

0xcac7,	// (0x000443e0) list_form2_midp_pane_t2

0x0001,

0xfae1,	// (0x000473fa) list_form2_midp_pane_t

0x4959,	// (0x0003c272) scroll_pane_cp51_ParamLimits

0x4b15,	// (0x0003c42e) form2_midp_wait_pane_g1

0x4b1e,	// (0x0003c437) form2_midp_wait_pane_g2

0x4b27,	// (0x0003c440) form2_midp_wait_pane_g3

0x0002,

0xfaf6,	// (0x0004740f) form2_midp_wait_pane_g

0xb236,	// (0x00042b4f) list_highlight_pane_cp21_ParamLimits

0x4b6f,	// (0x0003c488) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4b7e,	// (0x0003c497) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd2ac,	// (0x00044bc5) list_single_2graphic_im_pane_ParamLimits

0xd2ac,	// (0x00044bc5) list_single_2graphic_im_pane

0xcfa5,	// (0x000448be) list_single_2graphic_im_pane_g1_ParamLimits

0xcfa5,	// (0x000448be) list_single_2graphic_im_pane_g1

0xcfb6,	// (0x000448cf) list_single_2graphic_im_pane_g2_ParamLimits

0xcfb6,	// (0x000448cf) list_single_2graphic_im_pane_g2

0xcfc2,	// (0x000448db) list_single_2graphic_im_pane_g3_ParamLimits

0xcfc2,	// (0x000448db) list_single_2graphic_im_pane_g3

0x0003,

0xfc57,	// (0x00047570) list_single_2graphic_im_pane_g_ParamLimits

0xfc57,	// (0x00047570) list_single_2graphic_im_pane_g

0xcfd6,	// (0x000448ef) list_single_2graphic_im_pane_t1_ParamLimits

0xcfd6,	// (0x000448ef) list_single_2graphic_im_pane_t1

0x53d1,	// (0x0003ccea) list_single_graphic_2heading_pane_fp_ParamLimits

0x53d1,	// (0x0003ccea) list_single_graphic_2heading_pane_fp

0xd621,	// (0x00044f3a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd621,	// (0x00044f3a) list_single_graphic_2heading_pane_fp_g1

0x53e7,	// (0x0003cd00) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x53e7,	// (0x0003cd00) list_single_graphic_2heading_pane_fp_g2

0xd5ea,	// (0x00044f03) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd5ea,	// (0x00044f03) list_single_graphic_2heading_pane_fp_g3

0xd5f6,	// (0x00044f0f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd5f6,	// (0x00044f0f) list_single_graphic_2heading_pane_fp_g4

0x53f3,	// (0x0003cd0c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x53f3,	// (0x0003cd0c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00047497) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00047497) list_single_graphic_2heading_pane_fp_g

0xd7bb,	// (0x000450d4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd7bb,	// (0x000450d4) list_single_graphic_2heading_pane_fp_t1

0xd659,	// (0x00044f72) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd659,	// (0x00044f72) list_single_graphic_2heading_pane_fp_t2

0xd7d1,	// (0x000450ea) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd7d1,	// (0x000450ea) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc60,	// (0x00047579) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc60,	// (0x00047579) list_single_graphic_2heading_pane_fp_t

0x4e04,	// (0x0003c71d) fep_hwr_write_pane_g5_ParamLimits

0x4e04,	// (0x0003c71d) fep_hwr_write_pane_g5

0x4e10,	// (0x0003c729) fep_hwr_write_pane_g6_ParamLimits

0x4e10,	// (0x0003c729) fep_hwr_write_pane_g6

0xce1d,	// (0x00044736) eswt_shell_pane_ParamLimits

0x27ff,	// (0x0003a118) bg_popup_window_pane_cp18_ParamLimits

0x3a87,	// (0x0003b3a0) heading_pane_cp70

0x57d2,	// (0x0003d0eb) popup_eswt_tasktip_window_t1_ParamLimits

0xbc22,	// (0x0004353b) aid_touch_tab_arrow_left

0xbc38,	// (0x00043551) aid_touch_tab_arrow_right

0x8c16,	// (0x0004052f) title_pane_g3_ParamLimits

0x8c16,	// (0x0004052f) title_pane_g3

0xb5b0,	// (0x00042ec9) set_value_pane_g1

0xa616,	// (0x00041f2f) popup_toolbar_trans_pane_ParamLimits

0xcf59,	// (0x00044872) aid_size_cell_tb_trans_pane_ParamLimits

0xb5e8,	// (0x00042f01) bg_tb_trans_pane_ParamLimits

0xcf6b,	// (0x00044884) grid_tb_trans_pane_ParamLimits

0xb360,	// (0x00042c79) cont_note_pane_ParamLimits

0xb360,	// (0x00042c79) cont_note_pane

0xb4dc,	// (0x00042df5) cont_snote2_single_text_pane_ParamLimits

0xb4dc,	// (0x00042df5) cont_snote2_single_text_pane

0xb4dc,	// (0x00042df5) cont_snote2_single_graphic_pane_ParamLimits

0xb4dc,	// (0x00042df5) cont_snote2_single_graphic_pane

0x2dfd,	// (0x0003a716) cont_note_wait_pane_ParamLimits

0x2dfd,	// (0x0003a716) cont_note_wait_pane

0x2dfd,	// (0x0003a716) cont_note_image_pane_ParamLimits

0x2dfd,	// (0x0003a716) cont_note_image_pane

0x59ef,	// (0x0003d308) popup_note2_window_g1_ParamLimits

0x59ef,	// (0x0003d308) popup_note2_window_g1

0xd7f4,	// (0x0004510d) popup_note2_window_t1_ParamLimits

0xd7f4,	// (0x0004510d) popup_note2_window_t1

0xd839,	// (0x00045152) popup_note2_window_t2_ParamLimits

0xd839,	// (0x00045152) popup_note2_window_t2

0xd87e,	// (0x00045197) popup_note2_window_t3_ParamLimits

0xd87e,	// (0x00045197) popup_note2_window_t3

0x5aef,	// (0x0003d408) popup_note2_window_t4_ParamLimits

0x5aef,	// (0x0003d408) popup_note2_window_t4

0xb3e4,	// (0x00042cfd) popup_note2_window_t5_ParamLimits

0xb3e4,	// (0x00042cfd) popup_note2_window_t5

0x0004,

0xfc6c,	// (0x00047585) popup_note2_window_t_ParamLimits

0xfc6c,	// (0x00047585) popup_note2_window_t

0x5b1e,	// (0x0003d437) popup_note2_image_window_g1_ParamLimits

0x5b1e,	// (0x0003d437) popup_note2_image_window_g1

0xd8c3,	// (0x000451dc) popup_note2_image_window_g2_ParamLimits

0xd8c3,	// (0x000451dc) popup_note2_image_window_g2

0x0001,

0xfc77,	// (0x00047590) popup_note2_image_window_g_ParamLimits

0xfc77,	// (0x00047590) popup_note2_image_window_g

0x5b3c,	// (0x0003d455) popup_note2_image_window_t1_ParamLimits

0x5b3c,	// (0x0003d455) popup_note2_image_window_t1

0x5b54,	// (0x0003d46d) popup_note2_image_window_t2_ParamLimits

0x5b54,	// (0x0003d46d) popup_note2_image_window_t2

0x5b6c,	// (0x0003d485) popup_note2_image_window_t3_ParamLimits

0x5b6c,	// (0x0003d485) popup_note2_image_window_t3

0x0002,

0xfc7c,	// (0x00047595) popup_note2_image_window_t_ParamLimits

0xfc7c,	// (0x00047595) popup_note2_image_window_t

0x2e0b,	// (0x0003a724) popup_note2_wait_window_g1_ParamLimits

0x2e0b,	// (0x0003a724) popup_note2_wait_window_g1

0x2e17,	// (0x0003a730) popup_note2_wait_window_g2_ParamLimits

0x2e17,	// (0x0003a730) popup_note2_wait_window_g2

0x2e23,	// (0x0003a73c) popup_note2_wait_window_g3_ParamLimits

0x2e23,	// (0x0003a73c) popup_note2_wait_window_g3

0x0002,

0xf83e,	// (0x00047157) popup_note2_wait_window_g_ParamLimits

0xf83e,	// (0x00047157) popup_note2_wait_window_g

0x5b88,	// (0x0003d4a1) popup_note2_wait_window_t1_ParamLimits

0x5b88,	// (0x0003d4a1) popup_note2_wait_window_t1

0x5ba6,	// (0x0003d4bf) popup_note2_wait_window_t2_ParamLimits

0x5ba6,	// (0x0003d4bf) popup_note2_wait_window_t2

0x5bc4,	// (0x0003d4dd) popup_note2_wait_window_t3_ParamLimits

0x5bc4,	// (0x0003d4dd) popup_note2_wait_window_t3

0x5bd6,	// (0x0003d4ef) popup_note2_wait_window_t4_ParamLimits

0x5bd6,	// (0x0003d4ef) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0004759c) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0004759c) popup_note2_wait_window_t

0x5be8,	// (0x0003d501) wait_bar2_pane_ParamLimits

0x5be8,	// (0x0003d501) wait_bar2_pane

0x5c00,	// (0x0003d519) popup_snote2_single_text_window_g1_ParamLimits

0x5c00,	// (0x0003d519) popup_snote2_single_text_window_g1

0x5c28,	// (0x0003d541) popup_snote2_single_text_window_t1_ParamLimits

0x5c28,	// (0x0003d541) popup_snote2_single_text_window_t1

0x5c95,	// (0x0003d5ae) popup_snote2_single_text_window_t2_ParamLimits

0x5c95,	// (0x0003d5ae) popup_snote2_single_text_window_t2

0x5ce1,	// (0x0003d5fa) popup_snote2_single_text_window_t3_ParamLimits

0x5ce1,	// (0x0003d5fa) popup_snote2_single_text_window_t3

0x5d22,	// (0x0003d63b) popup_snote2_single_text_window_t4_ParamLimits

0x5d22,	// (0x0003d63b) popup_snote2_single_text_window_t4

0x5d58,	// (0x0003d671) popup_snote2_single_text_window_t5_ParamLimits

0x5d58,	// (0x0003d671) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x000475a5) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x000475a5) popup_snote2_single_text_window_t

0xd8d5,	// (0x000451ee) popup_snote2_single_graphic_window_g1_ParamLimits

0xd8d5,	// (0x000451ee) popup_snote2_single_graphic_window_g1

0x5dab,	// (0x0003d6c4) popup_snote2_single_graphic_window_g2_ParamLimits

0x5dab,	// (0x0003d6c4) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x000475b0) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x000475b0) popup_snote2_single_graphic_window_g

0x5dd3,	// (0x0003d6ec) popup_snote2_single_graphic_window_t1_ParamLimits

0x5dd3,	// (0x0003d6ec) popup_snote2_single_graphic_window_t1

0x5e1f,	// (0x0003d738) popup_snote2_single_graphic_window_t2_ParamLimits

0x5e1f,	// (0x0003d738) popup_snote2_single_graphic_window_t2

0x5ce1,	// (0x0003d5fa) popup_snote2_single_graphic_window_t3_ParamLimits

0x5ce1,	// (0x0003d5fa) popup_snote2_single_graphic_window_t3

0x5d22,	// (0x0003d63b) popup_snote2_single_graphic_window_t4_ParamLimits

0x5d22,	// (0x0003d63b) popup_snote2_single_graphic_window_t4

0x5d58,	// (0x0003d671) popup_snote2_single_graphic_window_t5_ParamLimits

0x5d58,	// (0x0003d671) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x000475b5) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x000475b5) popup_snote2_single_graphic_window_t

0x4816,	// (0x0003c12f) clock_nsta_pane_cp2_t1

0x4816,	// (0x0003c12f) clock_nsta_pane_cp2_t2

0x0001,

0xfab7,	// (0x000473d0) clock_nsta_pane_cp2_t

0xd176,	// (0x00044a8f) form_field_data_wide_pane_g1_ParamLimits

0xb5f6,	// (0x00042f0f) form_field_data_wide_pane_g2_ParamLimits

0xb5f6,	// (0x00042f0f) form_field_data_wide_pane_g2

0xb602,	// (0x00042f1b) form_field_data_wide_pane_g3_ParamLimits

0xb602,	// (0x00042f1b) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00046f8f) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00046f8f) form_field_data_wide_pane_g

0xc9dc,	// (0x000442f5) grid_touch_3_pane_ParamLimits

0xc9dc,	// (0x000442f5) grid_touch_3_pane

0xd8fd,	// (0x00045216) cell_touch_3_pane_ParamLimits

0xd8fd,	// (0x00045216) cell_touch_3_pane

0x4d78,	// (0x0003c691) cell_touch_3_pane_g1

0x4d78,	// (0x0003c691) cell_touch_3_pane_g2

0x0001,

0xfb3c,	// (0x00047455) cell_touch_3_pane_g

0xb416,	// (0x00042d2f) cont_query_data_pane

0xb41e,	// (0x00042d37) cont_query_data_pane_cp1

0x5e99,	// (0x0003d7b2) button_value_adjust_pane_cp7

0x5ea1,	// (0x0003d7ba) query_popup_pane_cp3

0xba7f,	// (0x00043398) bg_popup_sub_pane_cp22_ParamLimits

0x9a77,	// (0x00041390) navi_navi_volume_pane_cp2

0x9a86,	// (0x0004139f) popup_side_volume_key_window_g2

0x9a95,	// (0x000413ae) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00047025) popup_side_volume_key_window_g

0x9aa4,	// (0x000413bd) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0004702c) popup_side_volume_key_window_t

0x9bd3,	// (0x000414ec) popup_side_volume_key_window_ParamLimits

0x92cb,	// (0x00040be4) list_double_graphic_pane_g4_ParamLimits

0x92cb,	// (0x00040be4) list_double_graphic_pane_g4

0xa89e,	// (0x000421b7) list_single_2heading_msg_pane_ParamLimits

0xa89e,	// (0x000421b7) list_single_2heading_msg_pane

0xaa05,	// (0x0004231e) list_single_2heading_msg_pane_g1_ParamLimits

0xaa05,	// (0x0004231e) list_single_2heading_msg_pane_g1

0xaa11,	// (0x0004232a) list_single_2heading_msg_pane_g2_ParamLimits

0xaa11,	// (0x0004232a) list_single_2heading_msg_pane_g2

0xaa24,	// (0x0004233d) list_single_2heading_msg_pane_g3_ParamLimits

0xaa24,	// (0x0004233d) list_single_2heading_msg_pane_g3

0xd950,	// (0x00045269) list_single_2heading_msg_pane_g4_ParamLimits

0xd950,	// (0x00045269) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x000475c0) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x000475c0) list_single_2heading_msg_pane_g

0xd968,	// (0x00045281) list_single_2heading_msg_pane_t1_ParamLimits

0xd968,	// (0x00045281) list_single_2heading_msg_pane_t1

0xaa30,	// (0x00042349) list_single_2heading_msg_pane_t2_ParamLimits

0xaa30,	// (0x00042349) list_single_2heading_msg_pane_t2

0xaa9b,	// (0x000423b4) list_single_2heading_msg_pane_t3_ParamLimits

0xaa9b,	// (0x000423b4) list_single_2heading_msg_pane_t3

0xd990,	// (0x000452a9) list_single_2heading_msg_pane_t4_ParamLimits

0xd990,	// (0x000452a9) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x000475c9) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x000475c9) list_single_2heading_msg_pane_t

0xb1e4,	// (0x00042afd) title_pane_g4_ParamLimits

0xb1e4,	// (0x00042afd) title_pane_g4

0xef56,	// (0x0004686f) title_pane_stacon_g3_ParamLimits

0xef56,	// (0x0004686f) title_pane_stacon_g3

0x59b2,	// (0x0003d2cb) list_single_2graphic_im_pane_g4_ParamLimits

0x59b2,	// (0x0003d2cb) list_single_2graphic_im_pane_g4

0xc538,	// (0x00043e51) popup_side_volume_key_window_cp

0x4063,	// (0x0003b97c) main_idle_act2_pane_t1

0x08ef,	// (0x00038208) toolbar_button_pane_g10

0x91fa,	// (0x00040b13) popup_toolbar_window_cp1

0x4807,	// (0x0003c120) clock_nsta_pane_cp_t1

0x4807,	// (0x0003c120) clock_nsta_pane_cp_t2

0x0001,

0xfab2,	// (0x000473cb) clock_nsta_pane_cp_t

0x9a77,	// (0x00041390) navi_navi_volume_pane_cp2_ParamLimits

0xf1b0,	// (0x00046ac9) popup_side_volume_key_window_g1_ParamLimits

0x9a86,	// (0x0004139f) popup_side_volume_key_window_g2_ParamLimits

0x9a95,	// (0x000413ae) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00047025) popup_side_volume_key_window_g_ParamLimits

0x0ecc,	// (0x000387e5) fep_hwr_aid_pane

0x0f73,	// (0x0003888c) bg_fep_hwr_top_pane_g4_ParamLimits

0x4dd4,	// (0x0003c6ed) fep_hwr_top_pane_g1_ParamLimits

0x4de6,	// (0x0003c6ff) fep_hwr_top_pane_g2_ParamLimits

0x0f93,	// (0x000388ac) fep_hwr_top_pane_g3_ParamLimits

0xfb07,	// (0x00047420) fep_hwr_top_pane_g_ParamLimits

0x0fa8,	// (0x000388c1) fep_hwr_top_text_pane_ParamLimits

0x3607,	// (0x0003af20) aid_touch_tab_arrow_arrow_2

0x3610,	// (0x0003af29) aid_touch_tab_arrow_left_2

0x0ee0,	// (0x000387f9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0f17,	// (0x00038830) fep_hwr_prediction_pane

0x4f3f,	// (0x0003c858) fep_vkb_prediction_pane

0xcd55,	// (0x0004466e) fep_vkb_side_pane_g3_ParamLimits

0xcd55,	// (0x0004466e) fep_vkb_side_pane_g3

0x1123,	// (0x00038a3c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x118f,	// (0x00038aa8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x119c,	// (0x00038ab5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x000474cf) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x138f,	// (0x00038ca8) fep_hwr_prediction_pane_g1

0x1399,	// (0x00038cb2) fep_hwr_prediction_pane_g2

0x13a1,	// (0x00038cba) fep_hwr_prediction_pane_g3

0x13a9,	// (0x00038cc2) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x000475d2) fep_hwr_prediction_pane_g

0x5ec6,	// (0x0003d7df) fep_vkb_prediction_pane_g1

0x5ed0,	// (0x0003d7e9) fep_vkb_prediction_pane_g2

0x5ed8,	// (0x0003d7f1) fep_vkb_prediction_pane_g3

0x5ee0,	// (0x0003d7f9) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x000475db) fep_vkb_prediction_pane_g

0xa806,	// (0x0004211f) slider_set_pane_g3

0xa81a,	// (0x00042133) slider_set_pane_g4

0xa832,	// (0x0004214b) slider_set_pane_g5

0xa806,	// (0x0004211f) slider_set_pane_g6

0xa848,	// (0x00042161) slider_set_pane_g7

0x3ca4,	// (0x0003b5bd) slider_form_pane_g3

0x3cad,	// (0x0003b5c6) slider_form_pane_g4

0x3cb5,	// (0x0003b5ce) slider_form_pane_g5

0x3ca4,	// (0x0003b5bd) slider_form_pane_g6

0xc7d8,	// (0x000440f1) slider_form_pane_g7

0x430e,	// (0x0003bc27) slider_set_pane_vc_g3

0x4317,	// (0x0003bc30) slider_set_pane_vc_g4

0x4320,	// (0x0003bc39) slider_set_pane_vc_g5

0x430e,	// (0x0003bc27) slider_set_pane_vc_g6

0x4329,	// (0x0003bc42) slider_set_pane_vc_g7

0x44db,	// (0x0003bdf4) slider_form_pane_vc_g1

0x44e4,	// (0x0003bdfd) slider_form_pane_vc_g2

0x44ed,	// (0x0003be06) slider_form_pane_vc_g3

0x44db,	// (0x0003bdf4) slider_form_pane_vc_g4

0x44f6,	// (0x0003be0f) slider_form_pane_vc_g5

0x0004,

0xfa84,	// (0x0004739d) slider_form_pane_vc_g

0xee22,	// (0x0004673b) main_idle_act3_pane

0x5ee8,	// (0x0003d801) ai3_links_pane

0xd9b5,	// (0x000452ce) popup_ai3_data_window_ParamLimits

0xd9b5,	// (0x000452ce) popup_ai3_data_window

0xb1c6,	// (0x00042adf) grid_ai3_links_pane

0xd9cd,	// (0x000452e6) cell_ai3_links_pane_ParamLimits

0xd9cd,	// (0x000452e6) cell_ai3_links_pane

0x5f21,	// (0x0003d83a) bg_popup_sub_pane_cp11

0x5f2e,	// (0x0003d847) cell_ai3_links_pane_g1

0xb1c6,	// (0x00042adf) bg_popup_sub_pane_cp12

0x5f53,	// (0x0003d86c) heading_ai3_data_pane

0x5f5b,	// (0x0003d874) list_ai3_gene_pane

0x5f67,	// (0x0003d880) popup_ai3_data_window_g1

0x5f6f,	// (0x0003d888) heading_ai3_data_pane_g1

0x5f77,	// (0x0003d890) heading_ai3_data_pane_t1

0xd9e7,	// (0x00045300) list_double_ai3_gene_pane_ParamLimits

0xd9e7,	// (0x00045300) list_double_ai3_gene_pane

0x5f92,	// (0x0003d8ab) list_single_ai3_gene_pane_ParamLimits

0x5f92,	// (0x0003d8ab) list_single_ai3_gene_pane

0x4d3d,	// (0x0003c656) list_highlight_pane_cp7_ParamLimits

0x4d3d,	// (0x0003c656) list_highlight_pane_cp7

0x5f9f,	// (0x0003d8b8) list_single_a13_gene_pane_t1_ParamLimits

0x5f9f,	// (0x0003d8b8) list_single_a13_gene_pane_t1

0x5fb6,	// (0x0003d8cf) list_single_ai3_gene_pane_g1

0x5fbf,	// (0x0003d8d8) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x000475e4) list_single_ai3_gene_pane_g

0x5fc7,	// (0x0003d8e0) list_double_ai3_gene_pane_g1_ParamLimits

0x5fc7,	// (0x0003d8e0) list_double_ai3_gene_pane_g1

0xd9f4,	// (0x0004530d) list_double_ai3_gene_pane_t1_ParamLimits

0xd9f4,	// (0x0004530d) list_double_ai3_gene_pane_t1

0x5fef,	// (0x0003d908) list_double_ai3_gene_pane_t2_ParamLimits

0x5fef,	// (0x0003d908) list_double_ai3_gene_pane_t2

0x6004,	// (0x0003d91d) list_double_ai3_gene_pane_t3_ParamLimits

0x6004,	// (0x0003d91d) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x000475e9) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x000475e9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd930,	// (0x00045249) aid_size_min_col_2

0xd93a,	// (0x00045253) aid_size_min_msg_ParamLimits

0xd93a,	// (0x00045253) aid_size_min_msg

0xcd69,	// (0x00044682) fep_vkb_top_text_pane_g2_ParamLimits

0xcd69,	// (0x00044682) fep_vkb_top_text_pane_g2

0x0001,

0xfb37,	// (0x00047450) fep_vkb_top_text_pane_g_ParamLimits

0xfb37,	// (0x00047450) fep_vkb_top_text_pane_g

0xee22,	// (0x0004673b) main_hc_apps_shell_pane

0x6021,	// (0x0003d93a) grid_hc_apps_pane_ParamLimits

0x6021,	// (0x0003d93a) grid_hc_apps_pane

0x6030,	// (0x0003d949) list_hc_apps_pane

0x6038,	// (0x0003d951) scroll_pane_cp37_ParamLimits

0x6038,	// (0x0003d951) scroll_pane_cp37

0xda10,	// (0x00045329) cell_hc_apps_pane_ParamLimits

0xda10,	// (0x00045329) cell_hc_apps_pane

0xdace,	// (0x000453e7) cell_hc_apps_pane_g1_ParamLimits

0xdace,	// (0x000453e7) cell_hc_apps_pane_g1

0x6123,	// (0x0003da3c) cell_hc_apps_pane_g2_ParamLimits

0x6123,	// (0x0003da3c) cell_hc_apps_pane_g2

0x613f,	// (0x0003da58) cell_hc_apps_pane_g3_ParamLimits

0x613f,	// (0x0003da58) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x000475f0) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x000475f0) cell_hc_apps_pane_g

0xdafb,	// (0x00045414) cell_hc_apps_pane_t1_ParamLimits

0xdafb,	// (0x00045414) cell_hc_apps_pane_t1

0xb360,	// (0x00042c79) grid_highlight_pane_cp10_ParamLimits

0xb360,	// (0x00042c79) grid_highlight_pane_cp10

0xdb39,	// (0x00045452) list_single_hc_apps_pane_ParamLimits

0xdb39,	// (0x00045452) list_single_hc_apps_pane

0xdb69,	// (0x00045482) list_single_hc_apps_pane_g1

0xab09,	// (0x00042422) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x000475f7) list_single_hc_apps_pane_g

0xab22,	// (0x0004243b) list_single_hc_apps_pane_g2_copy1

0xab3e,	// (0x00042457) list_single_hc_apps_pane_t1

0xb236,	// (0x00042b4f) bg_set_opt_pane_cp_ParamLimits

0x8cea,	// (0x00040603) setting_slider_pane_t1_ParamLimits

0x8d03,	// (0x0004061c) setting_slider_pane_t2_ParamLimits

0x8d1d,	// (0x00040636) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00046e77) setting_slider_pane_t_ParamLimits

0x8d35,	// (0x0004064e) slider_set_pane_ParamLimits

0x020c,	// (0x00037b25) control_pane_g5_ParamLimits

0x020c,	// (0x00037b25) control_pane_g5

0xc65a,	// (0x00043f73) slider_set_pane_g1_ParamLimits

0x0c06,	// (0x0003851f) slider_set_pane_g2_ParamLimits

0xa806,	// (0x0004211f) slider_set_pane_g3_ParamLimits

0xa81a,	// (0x00042133) slider_set_pane_g4_ParamLimits

0xa832,	// (0x0004214b) slider_set_pane_g5_ParamLimits

0xa806,	// (0x0004211f) slider_set_pane_g6_ParamLimits

0xa848,	// (0x00042161) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x00047273) slider_set_pane_g_ParamLimits

0xf471,	// (0x00046d8a) navi_icon_text_pane_ParamLimits

0xbbeb,	// (0x00043504) aid_fill_nsta_2_ParamLimits

0xbc22,	// (0x0004353b) aid_touch_tab_arrow_left_ParamLimits

0xbc38,	// (0x00043551) aid_touch_tab_arrow_right_ParamLimits

0xbcd3,	// (0x000435ec) clock_nsta_pane_ParamLimits

0x35e9,	// (0x0003af02) navi_icon_pane_g1_ParamLimits

0x35f5,	// (0x0003af0e) navi_text_pane_t1_ParamLimits

0x4917,	// (0x0003c230) navi_icon_text_pane_g1_ParamLimits

0x4923,	// (0x0003c23c) navi_icon_text_pane_t1_ParamLimits

0xdb69,	// (0x00045482) list_single_hc_apps_pane_g1_ParamLimits

0xab09,	// (0x00042422) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x000475f7) list_single_hc_apps_pane_g_ParamLimits

0xab22,	// (0x0004243b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xab3e,	// (0x00042457) list_single_hc_apps_pane_t1_ParamLimits

0x8b1b,	// (0x00040434) popup_toolbar2_fixed_window_ParamLimits

0x8b1b,	// (0x00040434) popup_toolbar2_fixed_window

0xa60c,	// (0x00041f25) popup_toolbar2_float_window

0xb1c6,	// (0x00042adf) bg_popup_sub_pane_cp27

0x621d,	// (0x0003db36) grid_toolbar2_float_pane

0xb1c6,	// (0x00042adf) bg_popup_sub_pane_cp26

0x621d,	// (0x0003db36) grid_toolbar2_fixed_pane

0xdb82,	// (0x0004549b) cell_toolbar2_fixed_pane_ParamLimits

0xdb82,	// (0x0004549b) cell_toolbar2_fixed_pane

0xdb9c,	// (0x000454b5) cell_toolbar2_fixed_pane_g1

0x06c5,	// (0x00037fde) toolbar2_fixed_button_pane

0x278b,	// (0x0003a0a4) toolbar2_fixed_button_pane_g1

0x279b,	// (0x0003a0b4) toolbar2_fixed_button_pane_g2

0x2793,	// (0x0003a0ac) toolbar2_fixed_button_pane_g3

0x27ab,	// (0x0003a0c4) toolbar2_fixed_button_pane_g4

0x27a3,	// (0x0003a0bc) toolbar2_fixed_button_pane_g5

0x27b3,	// (0x0003a0cc) toolbar2_fixed_button_pane_g6

0x27bb,	// (0x0003a0d4) toolbar2_fixed_button_pane_g7

0x27cb,	// (0x0003a0e4) toolbar2_fixed_button_pane_g8

0x27c3,	// (0x0003a0dc) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x00047175) toolbar2_fixed_button_pane_g

0x623e,	// (0x0003db57) cell_toolbar2_float_pane_ParamLimits

0x623e,	// (0x0003db57) cell_toolbar2_float_pane

0x624f,	// (0x0003db68) cell_toolbar2_float_pane_g1

0x06c5,	// (0x00037fde) toolbar2_fixed_button_pane_cp

0xcc51,	// (0x0004456a) fep_vkb_accented_list_pane_ParamLimits

0xcc51,	// (0x0004456a) fep_vkb_accented_list_pane

0x1103,	// (0x00038a1c) bg_popup_fep_shadow_pane_g9

0x0093,	// (0x000379ac) bg_popup_fep_shadow_pane_cp3

0xb6f1,	// (0x0004300a) list_accented_list_pane

0x6258,	// (0x0003db71) list_single_accented_list_pane_ParamLimits

0x6258,	// (0x0003db71) list_single_accented_list_pane

0x0093,	// (0x000379ac) list_highlight_pane_cp10

0x6269,	// (0x0003db82) list_single_accented_list_pane_t1

0xa536,	// (0x00041e4f) popup_slider_window_ParamLimits

0xa536,	// (0x00041e4f) popup_slider_window

0x5ea9,	// (0x0003d7c2) aid_indentation_list_msg

0xdc91,	// (0x000455aa) bg_popup_window_pane_cp19

0x6389,	// (0x0003dca2) popup_slider_window_g1

0x63a5,	// (0x0003dcbe) popup_slider_window_g2

0x63c1,	// (0x0003dcda) popup_slider_window_g3

0x0005,

0xfce3,	// (0x000475fc) popup_slider_window_g

0x641d,	// (0x0003dd36) popup_slider_window_t1

0x6491,	// (0x0003ddaa) small_volume_slider_vertical_pane

0x4d78,	// (0x0003c691) small_volume_slider_vertical_pane_g1

0x4d78,	// (0x0003c691) small_volume_slider_vertical_pane_g2

0x64ad,	// (0x0003ddc6) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x0004760e) small_volume_slider_vertical_pane_g

0x8a69,	// (0x00040382) area_side_right_pane_ParamLimits

0x8a69,	// (0x00040382) area_side_right_pane

0xab6c,	// (0x00042485) aid_size_side_button_ParamLimits

0xab6c,	// (0x00042485) aid_size_side_button

0xab85,	// (0x0004249e) grid_sctrl_middle_pane_ParamLimits

0xab85,	// (0x0004249e) grid_sctrl_middle_pane

0x1447,	// (0x00038d60) sctrl_sk_bottom_pane

0x1458,	// (0x00038d71) sctrl_sk_top_pane

0x146a,	// (0x00038d83) aid_touch_sctrl_top

0x1477,	// (0x00038d90) bg_sctrl_sk_pane_ParamLimits

0x1477,	// (0x00038d90) bg_sctrl_sk_pane

0x1485,	// (0x00038d9e) sctrl_sk_top_pane_g1

0x1492,	// (0x00038dab) sctrl_sk_top_pane_t1

0x146a,	// (0x00038d83) aid_touch_sctrl_bottom

0x1477,	// (0x00038d90) bg_sctrl_sk_pane_cp_ParamLimits

0x1477,	// (0x00038d90) bg_sctrl_sk_pane_cp

0x14ad,	// (0x00038dc6) sctrl_sk_bottom_pane_g1

0x1492,	// (0x00038dab) sctrl_sk_bottom_pane_t1

0xab9f,	// (0x000424b8) cell_sctrl_middle_pane_ParamLimits

0xab9f,	// (0x000424b8) cell_sctrl_middle_pane

0xabb0,	// (0x000424c9) aid_touch_sctrl_middle_ParamLimits

0xabb0,	// (0x000424c9) aid_touch_sctrl_middle

0xabbd,	// (0x000424d6) bg_sctrl_middle_pane_ParamLimits

0xabbd,	// (0x000424d6) bg_sctrl_middle_pane

0x1b1a,	// (0x00039433) cell_sctrl_middle_pane_g1_ParamLimits

0x1b1a,	// (0x00039433) cell_sctrl_middle_pane_g1

0xabcb,	// (0x000424e4) cell_sctrl_middle_pane_g2_ParamLimits

0xabcb,	// (0x000424e4) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0004761a) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0004761a) cell_sctrl_middle_pane_g

0x278b,	// (0x0003a0a4) bg_sctrl_middle_pane_g1

0x2793,	// (0x0003a0ac) bg_sctrl_middle_pane_g2

0x279b,	// (0x0003a0b4) bg_sctrl_middle_pane_g3

0x27a3,	// (0x0003a0bc) bg_sctrl_middle_pane_g4

0x27ab,	// (0x0003a0c4) bg_sctrl_middle_pane_g5

0x27b3,	// (0x0003a0cc) bg_sctrl_middle_pane_g6

0x27bb,	// (0x0003a0d4) bg_sctrl_middle_pane_g7

0x27c3,	// (0x0003a0dc) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x0004761f) bg_sctrl_middle_pane_g

0x27cb,	// (0x0003a0e4) bg_sctrl_middle_pane_g8_copy1

0x278b,	// (0x0003a0a4) bg_sctrl_sk_pane_g1

0x279b,	// (0x0003a0b4) bg_sctrl_sk_pane_g2

0x2793,	// (0x0003a0ac) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x00047175) bg_sctrl_sk_pane_g

0xb52a,	// (0x00042e43) aid_size_touch_scroll_bar

0x27ab,	// (0x0003a0c4) bg_sctrl_sk_pane_g4

0x27a3,	// (0x0003a0bc) bg_sctrl_sk_pane_g5

0x27b3,	// (0x0003a0cc) bg_sctrl_sk_pane_g6

0x27bb,	// (0x0003a0d4) bg_sctrl_sk_pane_g7

0x27cb,	// (0x0003a0e4) bg_sctrl_sk_pane_g8

0x27c3,	// (0x0003a0dc) bg_sctrl_sk_pane_g9

0x03ac,	// (0x00037cc5) popup_fep_china_hwr2_fs_candidate_window

0x9fd6,	// (0x000418ef) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9fd6,	// (0x000418ef) popup_fep_china_hwr2_fs_control_window

0x1123,	// (0x00038a3c) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x00047615) sctrl_sk_top_pane_g

0xdd49,	// (0x00045662) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdd49,	// (0x00045662) aid_fep_china_hwr2_fs_cell

0xdd5d,	// (0x00045676) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdd5d,	// (0x00045676) bg_popup_fep_shadow_pane_cp4

0xdd74,	// (0x0004568d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdd74,	// (0x0004568d) bg_popup_fep_shadow_pane_cp5

0xdd86,	// (0x0004569f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdd86,	// (0x0004569f) popup_fep_china_hwr2_fs_control_bar_grid

0xdd9a,	// (0x000456b3) popup_fep_china_hwr2_fs_control_funtion_grid

0x6509,	// (0x0003de22) aid_fep_china_hwr2_fs_candi_cell

0xb1c6,	// (0x00042adf) bg_popup_fep_shadow_pane_cp6

0x6513,	// (0x0003de2c) popup_fep_china_hwr2_fs_candidate_grid

0xdda2,	// (0x000456bb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdda2,	// (0x000456bb) cell_fep_china_hwr2_fs_funtion_grid

0x4d78,	// (0x0003c691) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6535,	// (0x0003de4e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6535,	// (0x0003de4e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6543,	// (0x0003de5c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6543,	// (0x0003de5c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x00047630) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x00047630) cell_fep_china_hwr2_fs_funtion_grid_g

0xddba,	// (0x000456d3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xddba,	// (0x000456d3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xddcf,	// (0x000456e8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xddcf,	// (0x000456e8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x00047635) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x00047635) cell_fep_china_hwr2_fs_funtion_grid_t

0x658a,	// (0x0003dea3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6592,	// (0x0003deab) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x659a,	// (0x0003deb3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x0004763a) popup_fep_china_hwr2_fs_control_bar_grid_g

0x65a2,	// (0x0003debb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x65a2,	// (0x0003debb) cell_fep_china_hwr2_fs_candidate_grid

0x65bb,	// (0x0003ded4) popup_fep_china_hwr2_fs_candidate_grid_g20

0x65c3,	// (0x0003dedc) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4d78,	// (0x0003c691) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4d78,	// (0x0003c691) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3c,	// (0x00047455) cell_fep_china_hwr2_fs_candidate_grid_g

0x65cb,	// (0x0003dee4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2384,	// (0x00039c9d) clock_nsta_pane_cp_24_ParamLimits

0x2384,	// (0x00039c9d) clock_nsta_pane_cp_24

0x2402,	// (0x00039d1b) indicator_nsta_pane_cp_24_ParamLimits

0x2402,	// (0x00039d1b) indicator_nsta_pane_cp_24

0x3465,	// (0x0003ad7e) heading_pane_g1

0x0001,

0xf8c1,	// (0x000471da) heading_pane_g

0x3eac,	// (0x0003b7c5) grid_sct_catagory_button_pane

0x3edc,	// (0x0003b7f5) scroll_pane_cp5_ParamLimits

0x4965,	// (0x0003c27e) button_value_adjust_pane_cp5_ParamLimits

0x4965,	// (0x0003c27e) button_value_adjust_pane_cp5

0x4a44,	// (0x0003c35d) form2_midp_time_pane_ParamLimits

0x65d9,	// (0x0003def2) cell_sct_catagory_button_pane_ParamLimits

0x65d9,	// (0x0003def2) cell_sct_catagory_button_pane

0x4d3d,	// (0x0003c656) bg_button_pane_cp01_ParamLimits

0x4d3d,	// (0x0003c656) bg_button_pane_cp01

0x4d78,	// (0x0003c691) cell_sct_catagory_button_pane_g1

0xa5af,	// (0x00041ec8) popup_tb_extension_window

0xddeb,	// (0x00045704) aid_size_cell_ext_ParamLimits

0xddeb,	// (0x00045704) aid_size_cell_ext

0xb4dc,	// (0x00042df5) bg_tb_trans_pane_cp1_ParamLimits

0xb4dc,	// (0x00042df5) bg_tb_trans_pane_cp1

0xde11,	// (0x0004572a) grid_tb_ext_pane_ParamLimits

0xde11,	// (0x0004572a) grid_tb_ext_pane

0xde50,	// (0x00045769) cell_tb_ext_pane_ParamLimits

0xde50,	// (0x00045769) cell_tb_ext_pane

0xde78,	// (0x00045791) cell_tb_ext_pane_g1_ParamLimits

0xde78,	// (0x00045791) cell_tb_ext_pane_g1

0x666f,	// (0x0003df88) cell_tb_ext_pane_t1

0xb360,	// (0x00042c79) list_highlight_pane_cp11_ParamLimits

0xb360,	// (0x00042c79) list_highlight_pane_cp11

0x8b30,	// (0x00040449) popup_uni_indicator_window_ParamLimits

0x8b30,	// (0x00040449) popup_uni_indicator_window

0xb5e8,	// (0x00042f01) bg_popup_sub_pane_cp14

0xde95,	// (0x000457ae) list_uniindi_pane

0xdea1,	// (0x000457ba) uniindi_top_pane

0xb360,	// (0x00042c79) bg_uniindi_top_pane

0xdec0,	// (0x000457d9) uniindi_top_pane_g1

0xded6,	// (0x000457ef) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x00047641) uniindi_top_pane_g

0xdef3,	// (0x0004580c) uniindi_top_pane_t1

0x671f,	// (0x0003e038) list_single_uniindi_pane_ParamLimits

0x671f,	// (0x0003e038) list_single_uniindi_pane

0x4d78,	// (0x0003c691) bg_uniindi_top_pane_g1

0x6731,	// (0x0003e04a) list_single_uniindi_pane_g1

0x6744,	// (0x0003e05d) list_single_uniindi_pane_t1

0xee22,	// (0x0004673b) control_bg_pane

0x6769,	// (0x0003e082) bg_sctrl_sk_pane_cp1

0x6772,	// (0x0003e08b) bg_sctrl_sk_pane_cp2

0x677b,	// (0x0003e094) control_bg_pane_g1

0x6784,	// (0x0003e09d) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0004764a) control_bg_pane_g

0x47ab,	// (0x0003c0c4) cell_indicator_nsta_pane_g1_ParamLimits

0xca17,	// (0x00044330) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa0,	// (0x000473b9) cell_indicator_nsta_pane_g_ParamLimits

0xd5ca,	// (0x00044ee3) form2_midp_time_pane_t1_ParamLimits

0x0ebe,	// (0x000387d7) main_idle_act4_pane_ParamLimits

0x0ebe,	// (0x000387d7) main_idle_act4_pane

0xa5af,	// (0x00041ec8) popup_tb_extension_window_ParamLimits

0xde36,	// (0x0004574f) tb_ext_find_pane_ParamLimits

0xde36,	// (0x0004574f) tb_ext_find_pane

0x678d,	// (0x0003e0a6) ai_gene_pane_1_cp1

0x2083,	// (0x0003999c) ai_gene_pane_2_cp1

0xdf1d,	// (0x00045836) list_single_idle_plugin_calendar_pane

0x679e,	// (0x0003e0b7) list_single_idle_plugin_notification_pane

0x67a7,	// (0x0003e0c0) list_single_idle_plugin_player_pane

0xdf26,	// (0x0004583f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdf26,	// (0x0004583f) list_single_idle_plugin_shortcut_pane

0xdf4e,	// (0x00045867) main_idle_act4_pane_t1

0xdf65,	// (0x0004587e) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x0004764f) main_idle_act4_pane_t

0xdf7c,	// (0x00045895) middle_sk_idle_act4_pane_ParamLimits

0xdf7c,	// (0x00045895) middle_sk_idle_act4_pane

0xdf98,	// (0x000458b1) popup_clock_digital_analogue_window_cp2

0xdfc4,	// (0x000458dd) shortcut_wheel_idle_act4_pane_ParamLimits

0xdfc4,	// (0x000458dd) shortcut_wheel_idle_act4_pane

0x4d78,	// (0x0003c691) shortcut_wheel_idle_act4_pane_g1

0x4d78,	// (0x0003c691) shortcut_wheel_idle_act4_pane_g2

0x4d78,	// (0x0003c691) shortcut_wheel_idle_act4_pane_g3

0x4d78,	// (0x0003c691) shortcut_wheel_idle_act4_pane_g4

0x4d78,	// (0x0003c691) shortcut_wheel_idle_act4_pane_g5

0x683a,	// (0x0003e153) shortcut_wheel_idle_act4_pane_g6

0x6842,	// (0x0003e15b) shortcut_wheel_idle_act4_pane_g7

0x684a,	// (0x0003e163) shortcut_wheel_idle_act4_pane_g8

0x6852,	// (0x0003e16b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x00047654) shortcut_wheel_idle_act4_pane_g

0xd007,	// (0x00044920) middle_sk_idle_act4_pane_g1_ParamLimits

0xd007,	// (0x00044920) middle_sk_idle_act4_pane_g1

0xe041,	// (0x0004595a) middle_sk_idle_act4_pane_g2_ParamLimits

0xe041,	// (0x0004595a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x00047677) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x00047677) middle_sk_idle_act4_pane_g

0xe059,	// (0x00045972) middle_sk_idle_act4_pane_t1_ParamLimits

0xe059,	// (0x00045972) middle_sk_idle_act4_pane_t1

0xe088,	// (0x000459a1) grid_ai_shortcut_pane_ParamLimits

0xe088,	// (0x000459a1) grid_ai_shortcut_pane

0xe0a5,	// (0x000459be) list_highlight_pane_cp16_ParamLimits

0xe0a5,	// (0x000459be) list_highlight_pane_cp16

0xe0b2,	// (0x000459cb) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe0b2,	// (0x000459cb) list_single_idle_plugin_shortcut_pane_g1

0xe0be,	// (0x000459d7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe0be,	// (0x000459d7) list_single_idle_plugin_shortcut_pane_g2

0xe0da,	// (0x000459f3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe0da,	// (0x000459f3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0004767c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0004767c) list_single_idle_plugin_shortcut_pane_g

0xe0ef,	// (0x00045a08) cell_ai_shortcut_pane_ParamLimits

0xe0ef,	// (0x00045a08) cell_ai_shortcut_pane

0xe105,	// (0x00045a1e) cell_ai_shortcut_pane_g1_ParamLimits

0xe105,	// (0x00045a1e) cell_ai_shortcut_pane_g1

0x678d,	// (0x0003e0a6) ai_gene_pane_1_cp2

0x6982,	// (0x0003e29b) ai_gene_pane_2_cp2

0x698a,	// (0x0003e2a3) list_highlight_pane_cp15

0xe127,	// (0x00045a40) list_single_idle_plugin_calendar_pane_g1

0x698a,	// (0x0003e2a3) list_highlight_pane_cp17

0x699b,	// (0x0003e2b4) list_single_idle_plugin_calendar_pane_g1_copy1

0x69a3,	// (0x0003e2bc) list_single_idle_plugin_player_pane_g1

0x4105,	// (0x0003ba1e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x00047683) list_single_idle_plugin_player_pane_g

0x69ab,	// (0x0003e2c4) list_single_idle_plugin_player_pane_t1

0x69b9,	// (0x0003e2d2) list_single_idle_plugin_player_pane_t2

0x69c7,	// (0x0003e2e0) list_single_idle_plugin_player_pane_t3

0x69d5,	// (0x0003e2ee) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x00047688) list_single_idle_plugin_player_pane_t

0x69e3,	// (0x0003e2fc) wait_bar_pane_cp15

0x69eb,	// (0x0003e304) grid_ai_notification_pane

0x4105,	// (0x0003ba1e) list_single_idle_plugin_notification_pane_g1

0xe12f,	// (0x00045a48) cell_ai_notification_pane_ParamLimits

0xe12f,	// (0x00045a48) cell_ai_notification_pane

0x6a01,	// (0x0003e31a) cell_ai_notification_pane_g1

0x6a09,	// (0x0003e322) cell_ai_notification_pane_t1

0xe13c,	// (0x00045a55) tb_ext_find_button_pane

0xe144,	// (0x00045a5d) tb_ext_find_pane_g1

0xe14c,	// (0x00045a65) tb_ext_find_pane_t1

0xba1e,	// (0x00043337) tb_ext_find_button_pane_g1

0xe15a,	// (0x00045a73) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x00047691) tb_ext_find_button_pane_g

0xdf4e,	// (0x00045867) main_idle_act4_pane_t1_ParamLimits

0xdf65,	// (0x0004587e) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x0004764f) main_idle_act4_pane_t_ParamLimits

0xdf98,	// (0x000458b1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdfb0,	// (0x000458c9) sat_plugin_idle_act4_pane_ParamLimits

0xdfb0,	// (0x000458c9) sat_plugin_idle_act4_pane

0xe163,	// (0x00045a7c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe163,	// (0x00045a7c) sat_plugin_idle_act4_pane_t1

0xe17b,	// (0x00045a94) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe17b,	// (0x00045a94) sat_plugin_idle_act4_pane_t2

0xe193,	// (0x00045aac) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe193,	// (0x00045aac) sat_plugin_idle_act4_pane_t3

0xe1ab,	// (0x00045ac4) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe1ab,	// (0x00045ac4) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x00047696) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x00047696) sat_plugin_idle_act4_pane_t

0x8aab,	// (0x000403c4) popup_battery_window_ParamLimits

0x8aab,	// (0x000403c4) popup_battery_window

0xb360,	// (0x00042c79) bg_popup_sub_pane_cp25_ParamLimits

0xb360,	// (0x00042c79) bg_popup_sub_pane_cp25

0x6a8a,	// (0x0003e3a3) popup_battery_window_g1_ParamLimits

0x6a8a,	// (0x0003e3a3) popup_battery_window_g1

0x6a96,	// (0x0003e3af) popup_battery_window_t1_ParamLimits

0x6a96,	// (0x0003e3af) popup_battery_window_t1

0x6aa8,	// (0x0003e3c1) popup_battery_window_t2_ParamLimits

0x6aa8,	// (0x0003e3c1) popup_battery_window_t2

0x0001,

0xfd86,	// (0x0004769f) popup_battery_window_t_ParamLimits

0xfd86,	// (0x0004769f) popup_battery_window_t

0x9c26,	// (0x0004153f) midp_canvas_pane_ParamLimits

0x9c98,	// (0x000415b1) midp_keypad_pane_ParamLimits

0x9c98,	// (0x000415b1) midp_keypad_pane

0x227e,	// (0x00039b97) main_midp_pane_ParamLimits

0xca24,	// (0x0004433d) signal_pane_g2_cp_ParamLimits

0xe1c3,	// (0x00045adc) aid_size_cell_midp_keypad_ParamLimits

0xe1c3,	// (0x00045adc) aid_size_cell_midp_keypad

0xe1e1,	// (0x00045afa) midp_keyp_game_grid_pane_ParamLimits

0xe1e1,	// (0x00045afa) midp_keyp_game_grid_pane

0xe208,	// (0x00045b21) midp_keyp_rocker_pane_ParamLimits

0xe208,	// (0x00045b21) midp_keyp_rocker_pane

0xe259,	// (0x00045b72) midp_keyp_sk_left_pane_ParamLimits

0xe259,	// (0x00045b72) midp_keyp_sk_left_pane

0xe2ad,	// (0x00045bc6) midp_keyp_sk_right_pane_ParamLimits

0xe2ad,	// (0x00045bc6) midp_keyp_sk_right_pane

0xb1c6,	// (0x00042adf) bg_button_pane_cp03

0xe301,	// (0x00045c1a) midp_keyp_sk_left_pane_g1

0xb1c6,	// (0x00042adf) bg_button_pane_cp04

0xe301,	// (0x00045c1a) midp_keyp_sk_right_pane_g1

0x4d78,	// (0x0003c691) midp_keyp_rocker_pane_g1

0xe30a,	// (0x00045c23) keyp_game_cell_pane_ParamLimits

0xe30a,	// (0x00045c23) keyp_game_cell_pane

0xb1c6,	// (0x00042adf) bg_button_pane_cp02

0xe32e,	// (0x00045c47) keyp_game_cell_pane_g1

0x8acb,	// (0x000403e4) popup_fep_vkb2_window_ParamLimits

0x8acb,	// (0x000403e4) popup_fep_vkb2_window

0xabd7,	// (0x000424f0) aid_size_cell_vkb2_ParamLimits

0xabd7,	// (0x000424f0) aid_size_cell_vkb2

0xac15,	// (0x0004252e) popup_fep_vkb2_window_g1_ParamLimits

0xac15,	// (0x0004252e) popup_fep_vkb2_window_g1

0xac65,	// (0x0004257e) vkb2_area_bottom_pane_ParamLimits

0xac65,	// (0x0004257e) vkb2_area_bottom_pane

0xacb9,	// (0x000425d2) vkb2_area_keypad_pane_ParamLimits

0xacb9,	// (0x000425d2) vkb2_area_keypad_pane

0xad01,	// (0x0004261a) vkb2_area_top_pane_ParamLimits

0xad01,	// (0x0004261a) vkb2_area_top_pane

0xad87,	// (0x000426a0) vkb2_top_entry_pane_ParamLimits

0xad87,	// (0x000426a0) vkb2_top_entry_pane

0xadb4,	// (0x000426cd) vkb2_top_grid_left_pane_ParamLimits

0xadb4,	// (0x000426cd) vkb2_top_grid_left_pane

0xadd4,	// (0x000426ed) vkb2_top_grid_right_pane_ParamLimits

0xadd4,	// (0x000426ed) vkb2_top_grid_right_pane

0x1719,	// (0x00039032) vkb2_cell_keypad_pane_ParamLimits

0x1719,	// (0x00039032) vkb2_cell_keypad_pane

0xae1a,	// (0x00042733) vkb2_area_bottom_grid_pane_ParamLimits

0xae1a,	// (0x00042733) vkb2_area_bottom_grid_pane

0xae44,	// (0x0004275d) vkb2_area_bottom_pane_g1_ParamLimits

0xae44,	// (0x0004275d) vkb2_area_bottom_pane_g1

0xae6a,	// (0x00042783) vkb2_area_bottom_pane_g2_ParamLimits

0xae6a,	// (0x00042783) vkb2_area_bottom_pane_g2

0xae9b,	// (0x000427b4) vkb2_area_bottom_pane_g3_ParamLimits

0xae9b,	// (0x000427b4) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x000476a4) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x000476a4) vkb2_area_bottom_pane_g

0x18c3,	// (0x000391dc) vkb2_top_cell_left_pane_ParamLimits

0x18c3,	// (0x000391dc) vkb2_top_cell_left_pane

0xe337,	// (0x00045c50) vkb2_top_entry_pane_g1_ParamLimits

0xe337,	// (0x00045c50) vkb2_top_entry_pane_g1

0xe345,	// (0x00045c5e) vkb2_top_entry_pane_t1_ParamLimits

0xe345,	// (0x00045c5e) vkb2_top_entry_pane_t1

0x6c59,	// (0x0003e572) vkb2_top_entry_pane_t2_ParamLimits

0x6c59,	// (0x0003e572) vkb2_top_entry_pane_t2

0x6c8b,	// (0x0003e5a4) vkb2_top_entry_pane_t3_ParamLimits

0x6c8b,	// (0x0003e5a4) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x000476ab) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x000476ab) vkb2_top_entry_pane_t

0xaf05,	// (0x0004281e) vkb2_top_grid_right_pane_g1_ParamLimits

0xaf05,	// (0x0004281e) vkb2_top_grid_right_pane_g1

0x1926,	// (0x0003923f) vkb2_top_grid_right_pane_g2_ParamLimits

0x1926,	// (0x0003923f) vkb2_top_grid_right_pane_g2

0x193e,	// (0x00039257) vkb2_top_grid_right_pane_g3_ParamLimits

0x193e,	// (0x00039257) vkb2_top_grid_right_pane_g3

0xaf1b,	// (0x00042834) vkb2_top_grid_right_pane_g4_ParamLimits

0xaf1b,	// (0x00042834) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x000476b2) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x000476b2) vkb2_top_grid_right_pane_g

0x196c,	// (0x00039285) vkb2_top_cell_left_pane_g1

0x1983,	// (0x0003929c) vkb2_cell_keypad_pane_g1_ParamLimits

0x1983,	// (0x0003929c) vkb2_cell_keypad_pane_g1

0x6caf,	// (0x0003e5c8) vkb2_cell_keypad_pane_t1_ParamLimits

0x6caf,	// (0x0003e5c8) vkb2_cell_keypad_pane_t1

0x1991,	// (0x000392aa) vkb2_cell_bottom_grid_pane_ParamLimits

0x1991,	// (0x000392aa) vkb2_cell_bottom_grid_pane

0x19ca,	// (0x000392e3) vkb2_cell_bottom_grid_pane_g1

0xdfe5,	// (0x000458fe) aid_call2_pane_cp02

0xdfed,	// (0x00045906) aid_call_pane_cp02

0xdff5,	// (0x0004590e) clock_digital_number_pane_cp10

0xdffd,	// (0x00045916) clock_digital_number_pane_cp11

0xe005,	// (0x0004591e) clock_digital_number_pane_cp12

0xe00d,	// (0x00045926) clock_digital_number_pane_cp13

0xe015,	// (0x0004592e) clock_digital_separator_pane_cp10

0xba1e,	// (0x00043337) popup_clock_digital_analogue_window_cp2_g1

0xba1e,	// (0x00043337) popup_clock_digital_analogue_window_cp2_g2

0xe01d,	// (0x00045936) popup_clock_digital_analogue_window_cp2_g3

0xba1e,	// (0x00043337) popup_clock_digital_analogue_window_cp2_g4

0xe01d,	// (0x00045936) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x00047667) popup_clock_digital_analogue_window_cp2_g

0xe025,	// (0x0004593e) popup_clock_digital_analogue_window_cp2_t1

0xe033,	// (0x0004594c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x00047672) popup_clock_digital_analogue_window_cp2_t

0x4d78,	// (0x0003c691) clock_digital_number_pane_cp10_g1

0x4d78,	// (0x0003c691) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3c,	// (0x00047455) clock_digital_number_pane_cp10_g

0x4d78,	// (0x0003c691) clock_digital_separator_pane_cp10_g1

0x4d78,	// (0x0003c691) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3c,	// (0x00047455) clock_digital_separator_pane_cp10_g

0xdee2,	// (0x000457fb) uniindi_top_pane_g3

0x66e8,	// (0x0003e001) uniindi_top_pane_g4

0x17a4,	// (0x000390bd) vkb2_row_keypad_pane_ParamLimits

0x17a4,	// (0x000390bd) vkb2_row_keypad_pane

0x19e6,	// (0x000392ff) vkb2_cell_t_keypad_pane_ParamLimits

0x19e6,	// (0x000392ff) vkb2_cell_t_keypad_pane

0x19f6,	// (0x0003930f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x19f6,	// (0x0003930f) vkb2_cell_t_keypad_pane_cp08

0x1a09,	// (0x00039322) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1a09,	// (0x00039322) vkb2_cell_t_keypad_pane_cp09

0x1a1d,	// (0x00039336) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1a1d,	// (0x00039336) vkb2_cell_t_keypad_pane_cp01

0x1a2e,	// (0x00039347) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1a2e,	// (0x00039347) vkb2_cell_t_keypad_pane_cp02

0x1a3f,	// (0x00039358) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1a3f,	// (0x00039358) vkb2_cell_t_keypad_pane_cp03

0x1a50,	// (0x00039369) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1a50,	// (0x00039369) vkb2_cell_t_keypad_pane_cp04

0x1a61,	// (0x0003937a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1a61,	// (0x0003937a) vkb2_cell_t_keypad_pane_cp05

0x1a72,	// (0x0003938b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1a72,	// (0x0003938b) vkb2_cell_t_keypad_pane_cp06

0x1a83,	// (0x0003939c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1a83,	// (0x0003939c) vkb2_cell_t_keypad_pane_cp07

0x1a94,	// (0x000393ad) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1a94,	// (0x000393ad) vkb2_cell_t_keypad_pane_cp10

0x1123,	// (0x00038a3c) vkb2_cell_t_keypad_pane_g1

0x6cc6,	// (0x0003e5df) vkb2_cell_t_keypad_pane_t1

0xee22,	// (0x0004673b) popup_grid_graphic2_window

0xe37e,	// (0x00045c97) aid_size_cell_graphic2_ParamLimits

0xe37e,	// (0x00045c97) aid_size_cell_graphic2

0xe3bc,	// (0x00045cd5) bg_popup_window_pane_cp21_ParamLimits

0xe3bc,	// (0x00045cd5) bg_popup_window_pane_cp21

0xe3ca,	// (0x00045ce3) graphic2_pages_pane_ParamLimits

0xe3ca,	// (0x00045ce3) graphic2_pages_pane

0xe420,	// (0x00045d39) grid_graphic2_control_pane_ParamLimits

0xe420,	// (0x00045d39) grid_graphic2_control_pane

0xe468,	// (0x00045d81) grid_graphic2_pane_ParamLimits

0xe468,	// (0x00045d81) grid_graphic2_pane

0xe4ef,	// (0x00045e08) cell_graphic2_pane

0xee22,	// (0x0004673b) main_comp_mode_pane

0x5f5b,	// (0x0003d874) list_ai3_gene_pane_ParamLimits

0xdc91,	// (0x000455aa) bg_popup_window_pane_cp19_ParamLimits

0x632b,	// (0x0003dc44) bg_touch_area_indi_pane_ParamLimits

0x632b,	// (0x0003dc44) bg_touch_area_indi_pane

0x6341,	// (0x0003dc5a) bg_touch_area_indi_pane_cp01_ParamLimits

0x6341,	// (0x0003dc5a) bg_touch_area_indi_pane_cp01

0x6357,	// (0x0003dc70) bg_touch_area_indi_pane_cp02_ParamLimits

0x6357,	// (0x0003dc70) bg_touch_area_indi_pane_cp02

0x636f,	// (0x0003dc88) bg_touch_area_indi_pane_cp03_ParamLimits

0x636f,	// (0x0003dc88) bg_touch_area_indi_pane_cp03

0x6389,	// (0x0003dca2) popup_slider_window_g1_ParamLimits

0x63a5,	// (0x0003dcbe) popup_slider_window_g2_ParamLimits

0x63c1,	// (0x0003dcda) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x000475fc) popup_slider_window_g_ParamLimits

0x641d,	// (0x0003dd36) popup_slider_window_t1_ParamLimits

0x6491,	// (0x0003ddaa) small_volume_slider_vertical_pane_ParamLimits

0xe4ef,	// (0x00045e08) cell_graphic2_pane_ParamLimits

0xe54c,	// (0x00045e65) bg_button_pane_cp10_ParamLimits

0xe54c,	// (0x00045e65) bg_button_pane_cp10

0xe55f,	// (0x00045e78) bg_button_pane_cp11_ParamLimits

0xe55f,	// (0x00045e78) bg_button_pane_cp11

0xe572,	// (0x00045e8b) graphic2_pages_pane_g1_ParamLimits

0xe572,	// (0x00045e8b) graphic2_pages_pane_g1

0xe58d,	// (0x00045ea6) graphic2_pages_pane_g2_ParamLimits

0xe58d,	// (0x00045ea6) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x000476c0) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x000476c0) graphic2_pages_pane_g

0xe5a5,	// (0x00045ebe) graphic2_pages_pane_t1_ParamLimits

0xe5a5,	// (0x00045ebe) graphic2_pages_pane_t1

0xe5bd,	// (0x00045ed6) cell_graphic2_control_pane_ParamLimits

0xe5bd,	// (0x00045ed6) cell_graphic2_control_pane

0xe5ef,	// (0x00045f08) cell_graphic2_pane_g1_ParamLimits

0xe5ef,	// (0x00045f08) cell_graphic2_pane_g1

0xd015,	// (0x0004492e) cell_graphic2_pane_g2_ParamLimits

0xd015,	// (0x0004492e) cell_graphic2_pane_g2

0xd5dd,	// (0x00044ef6) cell_graphic2_pane_g3_ParamLimits

0xd5dd,	// (0x00044ef6) cell_graphic2_pane_g3

0xd022,	// (0x0004493b) cell_graphic2_pane_g4_ParamLimits

0xd022,	// (0x0004493b) cell_graphic2_pane_g4

0xe5fc,	// (0x00045f15) cell_graphic2_pane_g5_ParamLimits

0xe5fc,	// (0x00045f15) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x000476c5) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x000476c5) cell_graphic2_pane_g

0xe61c,	// (0x00045f35) cell_graphic2_pane_t1_ParamLimits

0xe61c,	// (0x00045f35) cell_graphic2_pane_t1

0x3459,	// (0x0003ad72) grid_highlight_pane_cp11_ParamLimits

0x3459,	// (0x0003ad72) grid_highlight_pane_cp11

0xb360,	// (0x00042c79) bg_button_pane_cp05

0xe653,	// (0x00045f6c) cell_graphic2_control_pane_g1

0x4d78,	// (0x0003c691) bg_touch_area_indi_pane_g1

0x6f96,	// (0x0003e8af) aid_cmod_rocker_key_size

0x6fa0,	// (0x0003e8b9) aid_cmode_itu_key_size

0x6faa,	// (0x0003e8c3) main_cmode_video_pane

0x6fb4,	// (0x0003e8cd) main_comp_mode_itu_pane

0x6fc0,	// (0x0003e8d9) main_comp_mode_rocker_pane

0x6fcc,	// (0x0003e8e5) cell_cmode_rocker_pane_ParamLimits

0x6fcc,	// (0x0003e8e5) cell_cmode_rocker_pane

0x6fde,	// (0x0003e8f7) cell_cmode_itu_pane_ParamLimits

0x6fde,	// (0x0003e8f7) cell_cmode_itu_pane

0xb5e8,	// (0x00042f01) bg_button_pane_cp06_ParamLimits

0xb5e8,	// (0x00042f01) bg_button_pane_cp06

0x4fe8,	// (0x0003c901) cell_cmode_rocker_pane_g1_ParamLimits

0x4fe8,	// (0x0003c901) cell_cmode_rocker_pane_g1

0x6535,	// (0x0003de4e) cell_cmode_rocker_pane_g2_ParamLimits

0x6535,	// (0x0003de4e) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x000476d5) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x000476d5) cell_cmode_rocker_pane_g

0xb1c6,	// (0x00042adf) bg_button_pane_cp07

0x6ff3,	// (0x0003e90c) cell_cmode_itu_pane_g1

0x6ffc,	// (0x0003e915) cell_cmode_itu_pane_t1

0x700a,	// (0x0003e923) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x000476da) cell_cmode_itu_pane_t

0x6759,	// (0x0003e072) aid_touch_ctrl_left

0x6761,	// (0x0003e07a) aid_touch_ctrl_right

0xb1c6,	// (0x00042adf) compa_mode_pane

0xe67b,	// (0x00045f94) aid_cmod_rocker_key_size_cp

0xe685,	// (0x00045f9e) aid_cmode_itu_key_size_cp

0x702c,	// (0x0003e945) compa_mode_pane_g1

0x7034,	// (0x0003e94d) compa_mode_pane_g2

0x703c,	// (0x0003e955) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x000476df) compa_mode_pane_g

0xe68f,	// (0x00045fa8) main_comp_mode_itu_pane_cp

0xe697,	// (0x00045fb0) main_comp_mode_rocker_pane_cp

0xe69f,	// (0x00045fb8) cell_cmode_itu_pane_cp_ParamLimits

0xe69f,	// (0x00045fb8) cell_cmode_itu_pane_cp

0xe6b4,	// (0x00045fcd) cell_cmode_rocker_pane_cp_ParamLimits

0xe6b4,	// (0x00045fcd) cell_cmode_rocker_pane_cp

0xb5e8,	// (0x00042f01) bg_button_pane_cp06_cp_ParamLimits

0xb5e8,	// (0x00042f01) bg_button_pane_cp06_cp

0x4fe8,	// (0x0003c901) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4fe8,	// (0x0003c901) cell_cmode_rocker_pane_g1_cp

0x4d78,	// (0x0003c691) cell_cmode_rocker_pane_g2_cp

0xb1c6,	// (0x00042adf) bg_button_pane_cp07_cp

0xe6c6,	// (0x00045fdf) cell_cmode_itu_pane_g1_cp

0xe6cf,	// (0x00045fe8) cell_cmode_itu_pane_t1_cp

0xe6cf,	// (0x00045fe8) cell_cmode_itu_pane_t2_cp

0xc7ce,	// (0x000440e7) settings_code_pane_cp2

0xb236,	// (0x00042b4f) bg_popup_window_pane_cp3_ParamLimits

0xb479,	// (0x00042d92) heading_pane_cp3_ParamLimits

0xb485,	// (0x00042d9e) listscroll_popup_graphic_pane_ParamLimits

0x0ecc,	// (0x000387e5) fep_hwr_aid_pane_ParamLimits

0x146a,	// (0x00038d83) aid_touch_sctrl_top_ParamLimits

0x1485,	// (0x00038d9e) sctrl_sk_top_pane_g1_ParamLimits

0x1123,	// (0x00038a3c) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x00047615) sctrl_sk_top_pane_g_ParamLimits

0x1492,	// (0x00038dab) sctrl_sk_top_pane_t1_ParamLimits

0x146a,	// (0x00038d83) aid_touch_sctrl_bottom_ParamLimits

0x1492,	// (0x00038dab) sctrl_sk_bottom_pane_t1_ParamLimits

0xdeae,	// (0x000457c7) aid_area_touch_clock

0xad49,	// (0x00042662) aid_vkb2_area_top_pane_cell_ParamLimits

0xad49,	// (0x00042662) aid_vkb2_area_top_pane_cell

0xadf4,	// (0x0004270d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xadf4,	// (0x0004270d) aid_vkb2_area_bottom_pane_cell

0x6c11,	// (0x0003e52a) popup_char_count_window

0x7092,	// (0x0003e9ab) popup_char_count_window_g1

0x709b,	// (0x0003e9b4) popup_char_count_window_g2

0x70a4,	// (0x0003e9bd) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x000476e6) popup_char_count_window_g

0x70ad,	// (0x0003e9c6) popup_char_count_window_t1

0x1541,	// (0x00038e5a) popup_fep_char_preview_window_ParamLimits

0x1541,	// (0x00038e5a) popup_fep_char_preview_window

0xad69,	// (0x00042682) vkb2_top_candi_pane_ParamLimits

0xad69,	// (0x00042682) vkb2_top_candi_pane

0xe6dd,	// (0x00045ff6) cell_vkb2_top_candi_pane_ParamLimits

0xe6dd,	// (0x00045ff6) cell_vkb2_top_candi_pane

0x1aa9,	// (0x000393c2) bg_popup_fep_char_preview_window_ParamLimits

0x1aa9,	// (0x000393c2) bg_popup_fep_char_preview_window

0x1ab7,	// (0x000393d0) popup_fep_char_preview_window_t1_ParamLimits

0x1ab7,	// (0x000393d0) popup_fep_char_preview_window_t1

0x7108,	// (0x0003ea21) bg_popup_fep_char_preview_window_g1

0x7110,	// (0x0003ea29) bg_popup_fep_char_preview_window_g2

0x7118,	// (0x0003ea31) bg_popup_fep_char_preview_window_g3

0x7120,	// (0x0003ea39) bg_popup_fep_char_preview_window_g4

0x7128,	// (0x0003ea41) bg_popup_fep_char_preview_window_g5

0x1af1,	// (0x0003940a) bg_popup_fep_char_preview_window_g6

0x7130,	// (0x0003ea49) bg_popup_fep_char_preview_window_g7

0x7138,	// (0x0003ea51) bg_popup_fep_char_preview_window_g8

0x7140,	// (0x0003ea59) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x000476ed) bg_popup_fep_char_preview_window_g

0x1123,	// (0x00038a3c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1123,	// (0x00038a3c) cell_vkb2_top_candi_pane_g1

0x1131,	// (0x00038a4a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1131,	// (0x00038a4a) cell_vkb2_top_candi_pane_g2

0x5c74,	// (0x0003d58d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5c74,	// (0x0003d58d) cell_vkb2_top_candi_pane_g3

0x1af9,	// (0x00039412) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1af9,	// (0x00039412) cell_vkb2_top_candi_pane_g4

0x54d4,	// (0x0003cded) cell_vkb2_top_candi_pane_g5_ParamLimits

0x54d4,	// (0x0003cded) cell_vkb2_top_candi_pane_g5

0x1b1a,	// (0x00039433) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1b1a,	// (0x00039433) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x00047700) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x00047700) cell_vkb2_top_candi_pane_g

0x1b28,	// (0x00039441) cell_vkb2_top_candi_pane_t1

0xa7f2,	// (0x0004210b) aid_size_touch_slider_mark_ParamLimits

0xa7f2,	// (0x0004210b) aid_size_touch_slider_mark

0xe406,	// (0x00045d1f) grid_graphic2_catg_pane_ParamLimits

0xe406,	// (0x00045d1f) grid_graphic2_catg_pane

0xe4c2,	// (0x00045ddb) popup_grid_graphic2_window_t1_ParamLimits

0xe4c2,	// (0x00045ddb) popup_grid_graphic2_window_t1

0xe4d8,	// (0x00045df1) popup_grid_graphic2_window_t2_ParamLimits

0xe4d8,	// (0x00045df1) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x000476bb) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x000476bb) popup_grid_graphic2_window_t

0xb360,	// (0x00042c79) bg_button_pane_cp05_ParamLimits

0xe653,	// (0x00045f6c) cell_graphic2_control_pane_g1_ParamLimits

0xe743,	// (0x0004605c) cell_graphic2_catg_pane_ParamLimits

0xe743,	// (0x0004605c) cell_graphic2_catg_pane

0xb1c6,	// (0x00042adf) bg_button_pane_cp12

0xe755,	// (0x0004606e) cell_graphic2_catg_pane_g1

0x666f,	// (0x0003df88) cell_tb_ext_pane_t1_ParamLimits

0x18e3,	// (0x000391fc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x18e3,	// (0x000391fc) vkb2_top_cell_right_narrow_pane

0x18fb,	// (0x00039214) vkb2_top_cell_right_wide_pane_ParamLimits

0x18fb,	// (0x00039214) vkb2_top_cell_right_wide_pane

0x0ebe,	// (0x000387d7) bg_vkb2_func_pane_ParamLimits

0x0ebe,	// (0x000387d7) bg_vkb2_func_pane

0x196c,	// (0x00039285) vkb2_top_cell_left_pane_g1_ParamLimits

0x0ebe,	// (0x000387d7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0ebe,	// (0x000387d7) bg_vkb2_fuc_pane_cp03

0x19ca,	// (0x000392e3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2793,	// (0x0003a0ac) bg_vkb2_func_pane_g1

0x279b,	// (0x0003a0b4) bg_vkb2_func_pane_g2

0x27ab,	// (0x0003a0c4) bg_vkb2_func_pane_g3

0x27a3,	// (0x0003a0bc) bg_vkb2_func_pane_g4

0x27b3,	// (0x0003a0cc) bg_vkb2_func_pane_g5

0x27bb,	// (0x0003a0d4) bg_vkb2_func_pane_g6

0x27c3,	// (0x0003a0dc) bg_vkb2_func_pane_g7

0x27cb,	// (0x0003a0e4) bg_vkb2_func_pane_g8

0x278b,	// (0x0003a0a4) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x0004770d) bg_vkb2_func_pane_g

0x0ebe,	// (0x000387d7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0ebe,	// (0x000387d7) bg_vkb2_fuc_pane_cp01

0x196c,	// (0x00039285) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x196c,	// (0x00039285) vkb2_top_cell_right_wide_pane_g1

0x0ebe,	// (0x000387d7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0ebe,	// (0x000387d7) bg_vkb2_fuc_pane_cp02

0x19ca,	// (0x000392e3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x19ca,	// (0x000392e3) vkb2_top_cell_right_narrow_pane_g1

0xdbcf,	// (0x000454e8) aid_touch_area_decrease_ParamLimits

0xdbcf,	// (0x000454e8) aid_touch_area_decrease

0xdc05,	// (0x0004551e) aid_touch_area_increase_ParamLimits

0xdc05,	// (0x0004551e) aid_touch_area_increase

0xdc2d,	// (0x00045546) aid_touch_area_mute_ParamLimits

0xdc2d,	// (0x00045546) aid_touch_area_mute

0xdc5d,	// (0x00045576) aid_touch_area_slider_ParamLimits

0xdc5d,	// (0x00045576) aid_touch_area_slider

0xdc9d,	// (0x000455b6) popup_slider_window_g4_ParamLimits

0xdc9d,	// (0x000455b6) popup_slider_window_g4

0xdcc5,	// (0x000455de) popup_slider_window_g5_ParamLimits

0xdcc5,	// (0x000455de) popup_slider_window_g5

0xdcf9,	// (0x00045612) popup_slider_window_g6_ParamLimits

0xdcf9,	// (0x00045612) popup_slider_window_g6

0x644b,	// (0x0003dd64) popup_slider_window_t2_ParamLimits

0x644b,	// (0x0003dd64) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x00047609) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x00047609) popup_slider_window_t

0xdd15,	// (0x0004562e) slider_pane_ParamLimits

0xdd15,	// (0x0004562e) slider_pane

0x7163,	// (0x0003ea7c) slider_pane_g1_ParamLimits

0x7163,	// (0x0003ea7c) slider_pane_g1

0x7177,	// (0x0003ea90) slider_pane_g2_ParamLimits

0x7177,	// (0x0003ea90) slider_pane_g2

0x718d,	// (0x0003eaa6) slider_pane_g3_ParamLimits

0x718d,	// (0x0003eaa6) slider_pane_g3

0x0003,

0xfe07,	// (0x00047720) slider_pane_g_ParamLimits

0xfe07,	// (0x00047720) slider_pane_g

0xa5f7,	// (0x00041f10) popup_tb_float_extension_window_ParamLimits

0xa5f7,	// (0x00041f10) popup_tb_float_extension_window

0x71b9,	// (0x0003ead2) aid_size_cell_tb_float_ext

0xb1c6,	// (0x00042adf) bg_popup_sub_window_cp28

0xe75e,	// (0x00046077) grid_tb_float_ext_pane

0xe768,	// (0x00046081) cell_tb_float_ext_pane_ParamLimits

0xe768,	// (0x00046081) cell_tb_float_ext_pane

0xe782,	// (0x0004609b) cell_tb_float_ext_pane_g1

0xe78b,	// (0x000460a4) grid_highlight_pane_cp12

0xa939,	// (0x00042252) cell_last_hwr_side_pane_ParamLimits

0xa939,	// (0x00042252) cell_last_hwr_side_pane

0x4d78,	// (0x0003c691) cell_last_hwr_side_pane_g1

0x71fb,	// (0x0003eb14) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x00047729) cell_last_hwr_side_pane_g

0xaed0,	// (0x000427e9) vkb2_area_bottom_space_btn_pane_ParamLimits

0xaed0,	// (0x000427e9) vkb2_area_bottom_space_btn_pane

0x1123,	// (0x00038a3c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6cc6,	// (0x0003e5df) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1b28,	// (0x00039441) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1b47,	// (0x00039460) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1b47,	// (0x00039460) vkb2_area_bottom_space_btn_pane_g1

0x1b81,	// (0x0003949a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1b81,	// (0x0003949a) vkb2_area_bottom_space_btn_pane_g2

0x1bb7,	// (0x000394d0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1bb7,	// (0x000394d0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x0004772e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x0004772e) vkb2_area_bottom_space_btn_pane_g

0x0f81,	// (0x0003889a) cel_fep_hwr_func_pane_ParamLimits

0x0f81,	// (0x0003889a) cel_fep_hwr_func_pane

0xa90e,	// (0x00042227) cell_hwr_side_button_pane_ParamLimits

0xa90e,	// (0x00042227) cell_hwr_side_button_pane

0xdeae,	// (0x000457c7) aid_area_touch_clock_ParamLimits

0xb360,	// (0x00042c79) bg_uniindi_top_pane_ParamLimits

0xdec0,	// (0x000457d9) uniindi_top_pane_g1_ParamLimits

0xded6,	// (0x000457ef) uniindi_top_pane_g2_ParamLimits

0xdee2,	// (0x000457fb) uniindi_top_pane_g3_ParamLimits

0x66e8,	// (0x0003e001) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x00047641) uniindi_top_pane_g_ParamLimits

0xdef3,	// (0x0004580c) uniindi_top_pane_t1_ParamLimits

0xb360,	// (0x00042c79) bg_vkb2_func_pane_cp01_ParamLimits

0xb360,	// (0x00042c79) bg_vkb2_func_pane_cp01

0x7204,	// (0x0003eb1d) cel_fep_hwr_func_pane_g1_ParamLimits

0x7204,	// (0x0003eb1d) cel_fep_hwr_func_pane_g1

0xb360,	// (0x00042c79) bg_vkb2_func_pane_cp02_ParamLimits

0xb360,	// (0x00042c79) bg_vkb2_func_pane_cp02

0x7204,	// (0x0003eb1d) cell_hwr_side_button_pane_g1_ParamLimits

0x7204,	// (0x0003eb1d) cell_hwr_side_button_pane_g1

0x260f,	// (0x00039f28) status_pane_g4_ParamLimits

0x260f,	// (0x00039f28) status_pane_g4

0x2629,	// (0x00039f42) status_pane_t1

0x4aad,	// (0x0003c3c6) form2_midp_gauge_slider_cont_pane

0x4ab5,	// (0x0003c3ce) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb4d,	// (0x00044466) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb5f,	// (0x00044478) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaef,	// (0x00047408) form2_midp_gauge_slider_pane_t_ParamLimits

0x4aeb,	// (0x0003c404) form2_midp_slider_pane_ParamLimits

0x1501,	// (0x00038e1a) aid_size_cell_func_vkb2_ParamLimits

0x1501,	// (0x00038e1a) aid_size_cell_func_vkb2

0x71a5,	// (0x0003eabe) slider_pane_g4_ParamLimits

0x71a5,	// (0x0003eabe) slider_pane_g4

0xaf31,	// (0x0004284a) form2_midp_gauge_slider_pane_t2_cp01

0xaf3f,	// (0x00042858) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xaf3f,	// (0x00042858) form2_midp_gauge_slider_pane_t3_cp01

0x1c2c,	// (0x00039545) form2_midp_slider_pane_cp01

0xb1c6,	// (0x00042adf) navi_smil_pane

0x723d,	// (0x0003eb56) navi_smil_pane_g1

0x7245,	// (0x0003eb5e) navi_smil_pane_t1

0x7212,	// (0x0003eb2b) form2_midp_slider_pane_g1

0x721b,	// (0x0003eb34) form2_midp_slider_pane_g2

0x7223,	// (0x0003eb3c) form2_midp_slider_pane_g3

0x7212,	// (0x0003eb2b) form2_midp_slider_pane_g4

0xe794,	// (0x000460ad) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x00047737) form2_midp_slider_pane_g

0x1bf1,	// (0x0003950a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1bf1,	// (0x0003950a) vkb2_area_bottom_space_btn_pane_g4

0xbd1e,	// (0x00043637) lc0_navi_pane_ParamLimits

0xbd1e,	// (0x00043637) lc0_navi_pane

0xbd88,	// (0x000436a1) lc0_stat_indi_pane_ParamLimits

0xbd88,	// (0x000436a1) lc0_stat_indi_pane

0xbd9d,	// (0x000436b6) ls0_title_pane_ParamLimits

0xbd9d,	// (0x000436b6) ls0_title_pane

0xb5e8,	// (0x00042f01) bg_popup_sub_pane_cp14_ParamLimits

0xde95,	// (0x000457ae) list_uniindi_pane_ParamLimits

0xdea1,	// (0x000457ba) uniindi_top_pane_ParamLimits

0x6731,	// (0x0003e04a) list_single_uniindi_pane_g1_ParamLimits

0x6744,	// (0x0003e05d) list_single_uniindi_pane_t1_ParamLimits

0xaf5c,	// (0x00042875) lc0_stat_clock_pane_ParamLimits

0xaf5c,	// (0x00042875) lc0_stat_clock_pane

0xe79f,	// (0x000460b8) lc0_stat_indi_pane_g1_ParamLimits

0xe79f,	// (0x000460b8) lc0_stat_indi_pane_g1

0xe7ac,	// (0x000460c5) lc0_stat_indi_pane_g2_ParamLimits

0xe7ac,	// (0x000460c5) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x00047742) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x00047742) lc0_stat_indi_pane_g

0xaf6c,	// (0x00042885) lc0_uni_indicator_pane_ParamLimits

0xaf6c,	// (0x00042885) lc0_uni_indicator_pane

0xe7b9,	// (0x000460d2) ls0_title_pane_g1_ParamLimits

0xe7b9,	// (0x000460d2) ls0_title_pane_g1

0xe7cd,	// (0x000460e6) ls0_title_pane_t1_ParamLimits

0xe7cd,	// (0x000460e6) ls0_title_pane_t1

0xaf7c,	// (0x00042895) lc0_uni_indicator_pane_g1_ParamLimits

0xaf7c,	// (0x00042895) lc0_uni_indicator_pane_g1

0x72b7,	// (0x0003ebd0) lc0_stat_clock_pane_t1

0xee22,	// (0x0004673b) main_ai5_pane

0x72c5,	// (0x0003ebde) ai5_sk_pane_ParamLimits

0x72c5,	// (0x0003ebde) ai5_sk_pane

0xe7fb,	// (0x00046114) cell_ai5_widget_pane_ParamLimits

0xe7fb,	// (0x00046114) cell_ai5_widget_pane

0xe865,	// (0x0004617e) aid_size_cell_widget_grid

0x739c,	// (0x0003ecb5) bg_ai5_widget_pane_ParamLimits

0x739c,	// (0x0003ecb5) bg_ai5_widget_pane

0xe899,	// (0x000461b2) cell_ai5_widget_pane_g2

0x7420,	// (0x0003ed39) cell_ai5_widget_pane_g3

0x7437,	// (0x0003ed50) cell_ai5_widget_pane_g4

0x7443,	// (0x0003ed5c) cell_ai5_widget_pane_g5

0xe8a9,	// (0x000461c2) cell_ai5_widget_pane_g6

0xe8b5,	// (0x000461ce) cell_ai5_widget_pane_g7

0x74a3,	// (0x0003edbc) cell_ai5_widget_pane_t1_ParamLimits

0x74a3,	// (0x0003edbc) cell_ai5_widget_pane_t1

0x74c0,	// (0x0003edd9) cell_ai5_widget_pane_t2_ParamLimits

0x74c0,	// (0x0003edd9) cell_ai5_widget_pane_t2

0x74d8,	// (0x0003edf1) cell_ai5_widget_pane_t3_ParamLimits

0x74d8,	// (0x0003edf1) cell_ai5_widget_pane_t3

0xe8c1,	// (0x000461da) cell_ai5_widget_pane_t4_ParamLimits

0xe8c1,	// (0x000461da) cell_ai5_widget_pane_t4

0xe8de,	// (0x000461f7) cell_ai5_widget_pane_t5_ParamLimits

0xe8de,	// (0x000461f7) cell_ai5_widget_pane_t5

0x752c,	// (0x0003ee45) cell_ai5_widget_pane_t6_ParamLimits

0x752c,	// (0x0003ee45) cell_ai5_widget_pane_t6

0x753e,	// (0x0003ee57) cell_ai5_widget_pane_t7_ParamLimits

0x753e,	// (0x0003ee57) cell_ai5_widget_pane_t7

0x7557,	// (0x0003ee70) cell_ai5_widget_pane_t8_ParamLimits

0x7557,	// (0x0003ee70) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x0004775c) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x0004775c) cell_ai5_widget_pane_t

0xe8fd,	// (0x00046216) grid_ai5_widget_pane

0xb5e8,	// (0x00042f01) highlight_cell_ai5_widget_pane_ParamLimits

0xb5e8,	// (0x00042f01) highlight_cell_ai5_widget_pane

0xe915,	// (0x0004622e) ai5_sk_left_pane

0xe91f,	// (0x00046238) ai5_sk_middle_pane

0xe929,	// (0x00046242) ai5_sk_right_pane

0x75d7,	// (0x0003eef0) bg_ai5_widget_pane_g1_ParamLimits

0x75d7,	// (0x0003eef0) bg_ai5_widget_pane_g1

0x75e3,	// (0x0003eefc) bg_ai5_widget_pane_g2_ParamLimits

0x75e3,	// (0x0003eefc) bg_ai5_widget_pane_g2

0x75ef,	// (0x0003ef08) bg_ai5_widget_pane_g3_ParamLimits

0x75ef,	// (0x0003ef08) bg_ai5_widget_pane_g3

0x75fb,	// (0x0003ef14) bg_ai5_widget_pane_g4_ParamLimits

0x75fb,	// (0x0003ef14) bg_ai5_widget_pane_g4

0x7607,	// (0x0003ef20) bg_ai5_widget_pane_g5_ParamLimits

0x7607,	// (0x0003ef20) bg_ai5_widget_pane_g5

0x7613,	// (0x0003ef2c) bg_ai5_widget_pane_g6_ParamLimits

0x7613,	// (0x0003ef2c) bg_ai5_widget_pane_g6

0x761f,	// (0x0003ef38) bg_ai5_widget_pane_g7_ParamLimits

0x761f,	// (0x0003ef38) bg_ai5_widget_pane_g7

0x762b,	// (0x0003ef44) bg_ai5_widget_pane_g8_ParamLimits

0x762b,	// (0x0003ef44) bg_ai5_widget_pane_g8

0x7637,	// (0x0003ef50) bg_ai5_widget_pane_g9_ParamLimits

0x7637,	// (0x0003ef50) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x00047771) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x00047771) bg_ai5_widget_pane_g

0xe959,	// (0x00046272) cell_shortcut_ai5_widget_pane_ParamLimits

0xe959,	// (0x00046272) cell_shortcut_ai5_widget_pane

0x0093,	// (0x000379ac) bg_cell_shortcut_ai5_widget_pane

0x767a,	// (0x0003ef93) cell_grid_ai5_widget_pane_g1

0x0093,	// (0x000379ac) highlight_cell_shortcut_ai5_widget_pane

0x2793,	// (0x0003a0ac) ai5_sk_left_pane_g1

0x7683,	// (0x0003ef9c) ai5_sk_left_pane_g2

0x768b,	// (0x0003efa4) ai5_sk_left_pane_g3

0x7693,	// (0x0003efac) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x00047784) ai5_sk_left_pane_g

0x769b,	// (0x0003efb4) ai5_sk_left_pane_t1

0x279b,	// (0x0003a0b4) ai5_sk_right_pane_g1

0x76a9,	// (0x0003efc2) ai5_sk_right_pane_g2

0x76b1,	// (0x0003efca) ai5_sk_right_pane_g3

0x76b9,	// (0x0003efd2) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x0004778d) ai5_sk_right_pane_g

0x76c1,	// (0x0003efda) ai5_sk_right_pane_t1

0x279b,	// (0x0003a0b4) ai5_sk_middle_pane_g1

0x2793,	// (0x0003a0ac) ai5_sk_middle_pane_g2

0x27b3,	// (0x0003a0cc) ai5_sk_middle_pane_g3

0x76b1,	// (0x0003efca) ai5_sk_middle_pane_g4

0x768b,	// (0x0003efa4) ai5_sk_middle_pane_g5

0x76cf,	// (0x0003efe8) ai5_sk_middle_pane_g6

0xe96a,	// (0x00046283) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x00047796) ai5_sk_middle_pane_g

0xbc0a,	// (0x00043523) aid_touch_area_size_lc0_ParamLimits

0xbc0a,	// (0x00043523) aid_touch_area_size_lc0

0x1152,	// (0x00038a6b) cell_hwr_candidate_pane_t1_ParamLimits

0x22e0,	// (0x00039bf9) aid_touch_navi_pane

0xbe96,	// (0x000437af) status_dt_navi_pane_ParamLimits

0xbe96,	// (0x000437af) status_dt_navi_pane

0xbeae,	// (0x000437c7) status_dt_sta_pane_ParamLimits

0xbeae,	// (0x000437c7) status_dt_sta_pane

0xe972,	// (0x0004628b) dt_sta_controll_pane

0xe97f,	// (0x00046298) dt_sta_indi_pane

0xe98c,	// (0x000462a5) dt_sta_title_pane

0xb360,	// (0x00042c79) bg_dt_sta_indi_pane_ParamLimits

0xb360,	// (0x00042c79) bg_dt_sta_indi_pane

0xe99e,	// (0x000462b7) dt_sta_battery_pane

0xe9a6,	// (0x000462bf) dt_sta_indi_pane_g1

0x7721,	// (0x0003f03a) dt_sta_indi_pane_g2

0x772a,	// (0x0003f043) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x000477a5) dt_sta_indi_pane_g

0x7733,	// (0x0003f04c) dt_sta_signal_pane

0xb5e8,	// (0x00042f01) bg_dt_sta_title_pane_ParamLimits

0xb5e8,	// (0x00042f01) bg_dt_sta_title_pane

0x35b9,	// (0x0003aed2) dt_sta_title_pane_g1

0xe9af,	// (0x000462c8) dt_sta_title_pane_t1_ParamLimits

0xe9af,	// (0x000462c8) dt_sta_title_pane_t1

0xb1c6,	// (0x00042adf) bg_dt_sta_control_pane

0xe9c4,	// (0x000462dd) dt_sta_controll_pane_g1

0xe9cd,	// (0x000462e6) bg_dt_sta_title_pane_g1

0xe9d6,	// (0x000462ef) bg_dt_sta_title_pane_g2

0xe9df,	// (0x000462f8) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x000477ac) bg_dt_sta_title_pane_g

0x4d78,	// (0x0003c691) bg_dt_sta_indi_pane_g1

0x7775,	// (0x0003f08e) dt_sta_signal_pane_g1

0x777d,	// (0x0003f096) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x000477b3) dt_sta_signal_pane_g

0x7785,	// (0x0003f09e) dt_sta_battery_pane_g1

0x778e,	// (0x0003f0a7) dt_sta_battery_pane_t1

0x4d78,	// (0x0003c691) bg_dt_sta_control_pane_g1

0xbaa1,	// (0x000433ba) fep_china_uni_eep_pane

0xbaa9,	// (0x000433c2) fep_china_uni_entry_pane_ParamLimits

0xbab9,	// (0x000433d2) popup_fep_china_uni_window_g1_ParamLimits

0xbac9,	// (0x000433e2) popup_fep_china_uni_window_g2_ParamLimits

0xbac9,	// (0x000433e2) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00047031) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00047031) popup_fep_china_uni_window_g

0x779d,	// (0x0003f0b6) fep_china_uni_eep_pane_g1

0x77a5,	// (0x0003f0be) fep_china_uni_eep_pane_t1

0x7234,	// (0x0003eb4d) aid_touch_area_size_smil_player

0x2436,	// (0x00039d4f) lc0_clock_pane

0x261d,	// (0x00039f36) status_pane_g5_ParamLimits

0x261d,	// (0x00039f36) status_pane_g5

0xa12d,	// (0x00041a46) popup_keymap_window

0x25db,	// (0x00039ef4) status_icon_pane

0x7420,	// (0x0003ed39) cell_ai5_widget_pane_g3_ParamLimits

0x7437,	// (0x0003ed50) cell_ai5_widget_pane_g4_ParamLimits

0x7443,	// (0x0003ed5c) cell_ai5_widget_pane_g5_ParamLimits

0x7467,	// (0x0003ed80) cell_ai5_widget_pane_g8_ParamLimits

0x7467,	// (0x0003ed80) cell_ai5_widget_pane_g8

0x747b,	// (0x0003ed94) cell_ai5_widget_pane_g9_ParamLimits

0x747b,	// (0x0003ed94) cell_ai5_widget_pane_g9

0x748f,	// (0x0003eda8) cell_ai5_widget_pane_g10_ParamLimits

0x748f,	// (0x0003eda8) cell_ai5_widget_pane_g10

0x77b4,	// (0x0003f0cd) status_icon_pane_g1

0xb1c6,	// (0x00042adf) bg_popup_sub_pane_cp13

0x77bc,	// (0x0003f0d5) popup_keymap_window_t1

0x9e03,	// (0x0004171c) control_pane_g6_ParamLimits

0x9e03,	// (0x0004171c) control_pane_g6

0x9e10,	// (0x00041729) control_pane_g7_ParamLimits

0x9e10,	// (0x00041729) control_pane_g7

0x9e1d,	// (0x00041736) control_pane_g8_ParamLimits

0x9e1d,	// (0x00041736) control_pane_g8

0xe972,	// (0x0004628b) dt_sta_controll_pane_ParamLimits

0xe97f,	// (0x00046298) dt_sta_indi_pane_ParamLimits

0xe98c,	// (0x000462a5) dt_sta_title_pane_ParamLimits

0xb533,	// (0x00042e4c) aid_size_touch_scroll_bar_cale

0x8abf,	// (0x000403d8) popup_discreet_window_ParamLimits

0x8abf,	// (0x000403d8) popup_discreet_window

0x8b11,	// (0x0004042a) popup_sk_window

0x2dfd,	// (0x0003a716) bg_popup_sub_pane_cp28_ParamLimits

0x2dfd,	// (0x0003a716) bg_popup_sub_pane_cp28

0x77ca,	// (0x0003f0e3) popup_discreet_window_g1_ParamLimits

0x77ca,	// (0x0003f0e3) popup_discreet_window_g1

0xe9e8,	// (0x00046301) popup_discreet_window_t1_ParamLimits

0xe9e8,	// (0x00046301) popup_discreet_window_t1

0x7808,	// (0x0003f121) popup_discreet_window_t2_ParamLimits

0x7808,	// (0x0003f121) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x000477b8) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x000477b8) popup_discreet_window_t

0x1c63,	// (0x0003957c) popup_sk_window_g1

0x1c6d,	// (0x00039586) popup_sk_window_g2

0x0001,

0xfea6,	// (0x000477bf) popup_sk_window_g

0xafa7,	// (0x000428c0) popup_sk_window_t1

0xafb5,	// (0x000428ce) popup_sk_window_t1_copy1

0xe899,	// (0x000461b2) cell_ai5_widget_pane_g2_ParamLimits

0x7569,	// (0x0003ee82) cell_ai5_widget_pane_t9_ParamLimits

0x7569,	// (0x0003ee82) cell_ai5_widget_pane_t9

0xb1c6,	// (0x00042adf) main_fep_fshwr2_pane

0xafc3,	// (0x000428dc) aid_fshwr2_btn_pane

0xafd5,	// (0x000428ee) aid_fshwr2_syb_pane

0xafe7,	// (0x00042900) aid_fshwr2_txt_pane

0xaff6,	// (0x0004290f) fshwr2_func_candi_pane

0xb015,	// (0x0004292e) fshwr2_hwr_syb_pane

0xb030,	// (0x00042949) fshwr2_icf_pane

0xee22,	// (0x0004673b) fshwr2_icf_bg_pane

0x1d05,	// (0x0003961e) fshwr2_icf_pane_t1_ParamLimits

0x1d05,	// (0x0003961e) fshwr2_icf_pane_t1

0xba1e,	// (0x00043337) fshwr2_func_candi_pane_g1

0xea06,	// (0x0004631f) fshwr2_func_candi_row_pane_ParamLimits

0xea06,	// (0x0004631f) fshwr2_func_candi_row_pane

0xb05c,	// (0x00042975) cell_fshwr2_syb_pane_ParamLimits

0xb05c,	// (0x00042975) cell_fshwr2_syb_pane

0x1123,	// (0x00038a3c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1123,	// (0x00038a3c) fshwr2_hwr_syb_pane_g1

0xee22,	// (0x0004673b) bg_popup_call_pane_cp01

0xb072,	// (0x0004298b) fshwr2_func_candi_cell_pane_ParamLimits

0xb072,	// (0x0004298b) fshwr2_func_candi_cell_pane

0xea29,	// (0x00046342) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xea29,	// (0x00046342) fshwr2_func_candi_cell_bg_pane

0xb0bd,	// (0x000429d6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb0bd,	// (0x000429d6) fshwr2_func_candi_cell_pane_g1

0xb0f4,	// (0x00042a0d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb0f4,	// (0x00042a0d) fshwr2_func_candi_cell_pane_t1

0xee22,	// (0x0004673b) bg_button_pane_cp08

0x786a,	// (0x0003f183) cell_fshwr2_syb_bg_pane

0xb10f,	// (0x00042a28) cell_fshwr2_syb_bg_pane_g1

0xb117,	// (0x00042a30) cell_fshwr2_syb_bg_pane_t1

0xb5e8,	// (0x00042f01) main_tmo_pane

0xc57e,	// (0x00043e97) uni_indicator_pane_g1_ParamLimits

0xc594,	// (0x00043ead) uni_indicator_pane_g2_ParamLimits

0xc5aa,	// (0x00043ec3) uni_indicator_pane_g3_ParamLimits

0x3933,	// (0x0003b24c) uni_indicator_pane_g4_ParamLimits

0x3933,	// (0x0003b24c) uni_indicator_pane_g4

0x3947,	// (0x0003b260) uni_indicator_pane_g5_ParamLimits

0x3947,	// (0x0003b260) uni_indicator_pane_g5

0x3947,	// (0x0003b260) uni_indicator_pane_g6_ParamLimits

0x3947,	// (0x0003b260) uni_indicator_pane_g6

0xf917,	// (0x00047230) uni_indicator_pane_g_ParamLimits

0xdbb1,	// (0x000454ca) popup_tmo_note_window_ParamLimits

0xdbb1,	// (0x000454ca) popup_tmo_note_window

0x14e3,	// (0x00038dfc) fshwr2_bg_pane

0xb0e5,	// (0x000429fe) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb0e5,	// (0x000429fe) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x000477c4) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x000477c4) fshwr2_func_candi_cell_pane_g

0x110b,	// (0x00038a24) bg_popup_window_pane_cp01

0x1dce,	// (0x000396e7) bg_popup_window_pane_g1_cp01

0x7872,	// (0x0003f18b) bg_popup_window_pane_cp22_ParamLimits

0x7872,	// (0x0003f18b) bg_popup_window_pane_cp22

0xea35,	// (0x0004634e) listscroll_tmo_link_pane_ParamLimits

0xea35,	// (0x0004634e) listscroll_tmo_link_pane

0x78c0,	// (0x0003f1d9) popup_tmo_note_window_g1_ParamLimits

0x78c0,	// (0x0003f1d9) popup_tmo_note_window_g1

0xea75,	// (0x0004638e) tmo_note_info_pane_ParamLimits

0xea75,	// (0x0004638e) tmo_note_info_pane

0xea8f,	// (0x000463a8) list_tmo_note_info_pane_g1_ParamLimits

0xea8f,	// (0x000463a8) list_tmo_note_info_pane_g1

0x78fe,	// (0x0003f217) list_tmo_note_info_pane_g2_ParamLimits

0x78fe,	// (0x0003f217) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x000477c9) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x000477c9) list_tmo_note_info_pane_g

0x791a,	// (0x0003f233) list_tmo_note_info_text_pane_ParamLimits

0x791a,	// (0x0003f233) list_tmo_note_info_text_pane

0x799b,	// (0x0003f2b4) list_tmo_link_pane

0x79a8,	// (0x0003f2c1) scroll_pane_cp20

0x79b5,	// (0x0003f2ce) list_single_tmo_link_pane_ParamLimits

0x79b5,	// (0x0003f2ce) list_single_tmo_link_pane

0x79c5,	// (0x0003f2de) list_single_tmo_link_pane_t1

0x79d3,	// (0x0003f2ec) list_tmo_note_info_text_pane_t1_ParamLimits

0x79d3,	// (0x0003f2ec) list_tmo_note_info_text_pane_t1

0x9785,	// (0x0004109e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9785,	// (0x0004109e) aid_size_touch_scroll_bar_cp01

0x967c,	// (0x00040f95) aid_size_touch_slider_marker

0x8b01,	// (0x0004041a) popup_settings_window_ParamLimits

0x8b01,	// (0x0004041a) popup_settings_window

0xd19f,	// (0x00044ab8) popup_candi_list_indi_window

0x22e0,	// (0x00039bf9) aid_touch_navi_pane_ParamLimits

0x143e,	// (0x00038d57) rs_clock_indi_pane

0x1447,	// (0x00038d60) sctrl_sk_bottom_pane_ParamLimits

0x1458,	// (0x00038d71) sctrl_sk_top_pane_ParamLimits

0xac0d,	// (0x00042526) popup_fep_tooltip_window

0xe865,	// (0x0004617e) aid_size_cell_widget_grid_ParamLimits

0xe884,	// (0x0004619d) cell_ai5_widget_pane_g1_ParamLimits

0xe884,	// (0x0004619d) cell_ai5_widget_pane_g1

0xe8a9,	// (0x000461c2) cell_ai5_widget_pane_g6_ParamLimits

0xe8b5,	// (0x000461ce) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x00047747) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x00047747) cell_ai5_widget_pane_g

0x758d,	// (0x0003eea6) cell_ai5_widget_pane_t10_ParamLimits

0x758d,	// (0x0003eea6) cell_ai5_widget_pane_t10

0xe8fd,	// (0x00046216) grid_ai5_widget_pane_ParamLimits

0xe933,	// (0x0004624c) cell_contacts_ai5_widget_pane_ParamLimits

0xe933,	// (0x0004624c) cell_contacts_ai5_widget_pane

0x781d,	// (0x0003f136) popup_discreet_window_t3_ParamLimits

0x781d,	// (0x0003f136) popup_discreet_window_t3

0xb048,	// (0x00042961) popup_fshwr2_char_preview_window_ParamLimits

0xb048,	// (0x00042961) popup_fshwr2_char_preview_window

0xeaa6,	// (0x000463bf) tmo_note_info_pane_t1

0xeabb,	// (0x000463d4) tmo_note_info_pane_t2

0xead2,	// (0x000463eb) tmo_note_info_pane_t3

0x7977,	// (0x0003f290) tmo_note_info_pane_t4

0x7989,	// (0x0003f2a2) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x000477ce) tmo_note_info_pane_t

0x799b,	// (0x0003f2b4) list_tmo_link_pane_ParamLimits

0x79a8,	// (0x0003f2c1) scroll_pane_cp20_ParamLimits

0xee22,	// (0x0004673b) bg_popup_fep_char_preview_window_cp01

0x79ec,	// (0x0003f305) popup_fshwr2_char_preview_window_t1

0x79fa,	// (0x0003f313) popup_candi_list_indi_window_g1

0x7a03,	// (0x0003f31c) bg_cell_contacts_ai5_widget_pane

0x7a0f,	// (0x0003f328) cell_contacts_ai5_widget_pane_g1

0x5429,	// (0x0003cd42) cell_contacts_ai5_widget_pane_g2

0x7a24,	// (0x0003f33d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x000477d9) cell_contacts_ai5_widget_pane_g

0x7a30,	// (0x0003f349) cell_contacts_ai5_widget_pane_t1

0xb5e8,	// (0x00042f01) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7aa7,	// (0x0003f3c0) settings_container_pane

0x0093,	// (0x000379ac) listscroll_set_pane_copy1

0x4464,	// (0x0003bd7d) scroll_pane_cp121_copy1

0x7ab3,	// (0x0003f3cc) set_content_pane_copy1

0xeb4c,	// (0x00046465) aid_height_set_list_copy1_ParamLimits

0xeb4c,	// (0x00046465) aid_height_set_list_copy1

0x3b3f,	// (0x0003b458) aid_size_parent_copy1_ParamLimits

0x3b3f,	// (0x0003b458) aid_size_parent_copy1

0xeb58,	// (0x00046471) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeb58,	// (0x00046471) button_value_adjust_pane_cp6_copy1

0x227e,	// (0x00039b97) list_highlight_pane_cp2_copy1_ParamLimits

0x227e,	// (0x00039b97) list_highlight_pane_cp2_copy1

0xeb6c,	// (0x00046485) list_set_pane_copy1_ParamLimits

0xeb6c,	// (0x00046485) list_set_pane_copy1

0xeae7,	// (0x00046400) main_pane_set_t1_copy1_ParamLimits

0xeae7,	// (0x00046400) main_pane_set_t1_copy1

0xeb21,	// (0x0004643a) main_pane_set_t2_copy1_ParamLimits

0xeb21,	// (0x0004643a) main_pane_set_t2_copy1

0xec19,	// (0x00046532) main_pane_set_t3_copy1

0xec27,	// (0x00046540) main_pane_set_t4_copy1

0xeb40,	// (0x00046459) set_content_pane_g1_copy1_ParamLimits

0xeb40,	// (0x00046459) set_content_pane_g1_copy1

0xec35,	// (0x0004654e) setting_code_pane_copy1

0x7bac,	// (0x0003f4c5) setting_slider_graphic_pane_copy1

0x7bac,	// (0x0003f4c5) setting_slider_pane_copy1

0x7bac,	// (0x0003f4c5) setting_text_pane_copy1

0x7bac,	// (0x0003f4c5) setting_volume_pane_copy1

0xec35,	// (0x0004654e) settings_code_pane_cp2_copy1

0xec3d,	// (0x00046556) settings_code_pane_cp_copy1_ParamLimits

0xec3d,	// (0x00046556) settings_code_pane_cp_copy1

0xb126,	// (0x00042a3f) volume_set_pane_copy1

0xec51,	// (0x0004656a) volume_set_pane_g10_copy1

0xec59,	// (0x00046572) volume_set_pane_g1_copy1

0xec61,	// (0x0004657a) volume_set_pane_g2_copy1

0xec69,	// (0x00046582) volume_set_pane_g3_copy1

0xec71,	// (0x0004658a) volume_set_pane_g4_copy1

0xec79,	// (0x00046592) volume_set_pane_g5_copy1

0xec81,	// (0x0004659a) volume_set_pane_g6_copy1

0xec89,	// (0x000465a2) volume_set_pane_g7_copy1

0xec91,	// (0x000465aa) volume_set_pane_g8_copy1

0xec99,	// (0x000465b2) volume_set_pane_g9_copy1

0xb236,	// (0x00042b4f) bg_set_opt_pane_cp_copy1_ParamLimits

0xb236,	// (0x00042b4f) bg_set_opt_pane_cp_copy1

0xb12e,	// (0x00042a47) setting_slider_pane_t1_copy1_ParamLimits

0xb12e,	// (0x00042a47) setting_slider_pane_t1_copy1

0xb14c,	// (0x00042a65) setting_slider_pane_t2_copy1_ParamLimits

0xb14c,	// (0x00042a65) setting_slider_pane_t2_copy1

0xb166,	// (0x00042a7f) setting_slider_pane_t3_copy1_ParamLimits

0xb166,	// (0x00042a7f) setting_slider_pane_t3_copy1

0xb17e,	// (0x00042a97) slider_set_pane_copy1_ParamLimits

0xb17e,	// (0x00042a97) slider_set_pane_copy1

0xb643,	// (0x00042f5c) set_opt_bg_pane_g1_copy2

0xb64b,	// (0x00042f64) set_opt_bg_pane_g2_copy2

0x7c18,	// (0x0003f531) set_opt_bg_pane_g3_copy2

0xb65b,	// (0x00042f74) set_opt_bg_pane_g4_copy2

0xb663,	// (0x00042f7c) set_opt_bg_pane_g5_copy2

0xb66b,	// (0x00042f84) set_opt_bg_pane_g6_copy2

0xeca1,	// (0x000465ba) set_opt_bg_pane_g7_copy2

0x7c2a,	// (0x0003f543) set_opt_bg_pane_g8_copy2

0x7c34,	// (0x0003f54d) set_opt_bg_pane_g9_copy2

0xb194,	// (0x00042aad) aid_size_touch_slider_mark_copy1_ParamLimits

0xb194,	// (0x00042aad) aid_size_touch_slider_mark_copy1

0xeca9,	// (0x000465c2) slider_set_pane_g1_copy1

0x1e59,	// (0x00039772) slider_set_pane_g2_copy1

0xa806,	// (0x0004211f) slider_set_pane_g3_copy1_ParamLimits

0xa806,	// (0x0004211f) slider_set_pane_g3_copy1

0xa81a,	// (0x00042133) slider_set_pane_g4_copy1_ParamLimits

0xa81a,	// (0x00042133) slider_set_pane_g4_copy1

0xa832,	// (0x0004214b) slider_set_pane_g5_copy1_ParamLimits

0xa832,	// (0x0004214b) slider_set_pane_g5_copy1

0xa806,	// (0x0004211f) slider_set_pane_g6_copy1_ParamLimits

0xa806,	// (0x0004211f) slider_set_pane_g6_copy1

0xb1a8,	// (0x00042ac1) slider_set_pane_g7_copy1_ParamLimits

0xb1a8,	// (0x00042ac1) slider_set_pane_g7_copy1

0xb1da,	// (0x00042af3) bg_set_opt_pane_cp2_copy1

0xecb2,	// (0x000465cb) setting_slider_graphic_pane_g1_copy1

0xecbb,	// (0x000465d4) setting_slider_graphic_pane_t1_copy1

0xeccb,	// (0x000465e4) setting_slider_graphic_pane_t2_copy1

0xecdb,	// (0x000465f4) slider_set_pane_cp_copy1

0x7c80,	// (0x0003f599) input_focus_pane_cp1_copy1

0x7c89,	// (0x0003f5a2) list_set_text_pane_copy1

0x7c91,	// (0x0003f5aa) setting_text_pane_g1_copy1

0xeceb,	// (0x00046604) set_text_pane_t1_copy1

0x7c80,	// (0x0003f599) input_focus_pane_cp2_copy1

0x7c91,	// (0x0003f5aa) setting_code_pane_g1_copy1

0x7c9a,	// (0x0003f5b3) setting_code_pane_t1_copy1

0x429c,	// (0x0003bbb5) list_set_graphic_pane_copy1

0xb1da,	// (0x00042af3) bg_set_opt_pane_cp4_copy1

0xf349,	// (0x00046c62) list_set_graphic_pane_g1_copy1_ParamLimits

0xf349,	// (0x00046c62) list_set_graphic_pane_g1_copy1

0x7ca8,	// (0x0003f5c1) list_set_graphic_pane_g2_copy1

0xf361,	// (0x00046c7a) list_set_graphic_pane_t1_copy1_ParamLimits

0xf361,	// (0x00046c7a) list_set_graphic_pane_t1_copy1

0x4d78,	// (0x0003c691) rs_clock_indi_pane_g1

0x7cb0,	// (0x0003f5c9) rs_clock_indi_pane_t1

0x7cbe,	// (0x0003f5d7) rs_indi_pane

0x7cc6,	// (0x0003f5df) rs_indi_pane_g1

0x7ccf,	// (0x0003f5e8) rs_indi_pane_g2

0x79fa,	// (0x0003f313) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x000477e0) rs_indi_pane_g

0x0093,	// (0x000379ac) bg_popup_preview_window_pane_cp03

0x7cd8,	// (0x0003f5f1) popup_fep_tooltip_window_t1

0xd7e7,	// (0x00045100) popup_note2_window_g2_ParamLimits

0xd7e7,	// (0x00045100) popup_note2_window_g2

0x0001,

0xfc67,	// (0x00047580) popup_note2_window_g_ParamLimits

0xfc67,	// (0x00047580) popup_note2_window_g

0x5f21,	// (0x0003d83a) bg_popup_sub_pane_cp11_ParamLimits

0x5f2e,	// (0x0003d847) cell_ai3_links_pane_g1_ParamLimits

0x5f45,	// (0x0003d85e) cell_ai3_links_pane_t1

0xeceb,	// (0x00046604) set_text_pane_t1_copy1_ParamLimits

0xf502,	// (0x00046e1b) cell_graphic_popup_pane_cp2_ParamLimits

0xf502,	// (0x00046e1b) cell_graphic_popup_pane_cp2

0xed07,	// (0x00046620) cell_graphic_popup_pane_g1_cp2

0xb4b6,	// (0x00042dcf) cell_graphic_popup_pane_g2_cp2

0x7cee,	// (0x0003f607) cell_graphic_popup_pane_g3_cp2

0xed0f,	// (0x00046628) cell_graphic_popup_pane_t2_cp2

0xb4c7,	// (0x00042de0) grid_highlight_pane_cp3_cp2

0xb89b,	// (0x000431b4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb5e8,	// (0x00042f01) main_tmo_pane_ParamLimits

0xdba5,	// (0x000454be) popup_tmo_big_image_note_window

0x73ea,	// (0x0003ed03) cell_ai5_widget_list_pane

0xe87b,	// (0x00046194) cell_ai5_widget_lrg_icon_pane

0xeaa6,	// (0x000463bf) tmo_note_info_pane_t1_ParamLimits

0xeabb,	// (0x000463d4) tmo_note_info_pane_t2_ParamLimits

0xead2,	// (0x000463eb) tmo_note_info_pane_t3_ParamLimits

0x7977,	// (0x0003f290) tmo_note_info_pane_t4_ParamLimits

0x7989,	// (0x0003f2a2) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x000477ce) tmo_note_info_pane_t_ParamLimits

0x7aa7,	// (0x0003f3c0) settings_container_pane_ParamLimits

0xece3,	// (0x000465fc) indicator_popup_pane_cp5

0xece3,	// (0x000465fc) indicator_popup_pane_cp6

0x429c,	// (0x0003bbb5) list_set_graphic_pane_copy1_ParamLimits

0xb1c6,	// (0x00042adf) bg_popup_window_pane_cp23

0x7d04,	// (0x0003f61d) popup_tmo_big_image_note_window_g1

0x7d0d,	// (0x0003f626) popup_tmo_big_image_note_window_t1

0x7d1d,	// (0x0003f636) popup_tmo_big_image_note_window_t2

0x7d2d,	// (0x0003f646) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x000477e7) popup_tmo_big_image_note_window_t

0x4d78,	// (0x0003c691) cell_ai5_widget_lrg_icon_pane_g1

0x7d3d,	// (0x0003f656) cell_ai5_widget_lrg_icon_pane_t1

0xed1d,	// (0x00046636) cell_ai5_widget_list_row_pane_ParamLimits

0xed1d,	// (0x00046636) cell_ai5_widget_list_row_pane

0x7d62,	// (0x0003f67b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7d62,	// (0x0003f67b) cell_ai5_widget_list_row_pane_g1

0xed34,	// (0x0004664d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed34,	// (0x0004664d) cell_ai5_widget_list_row_pane_t1

0x7d9a,	// (0x0003f6b3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7d9a,	// (0x0003f6b3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x000477ee) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x000477ee) cell_ai5_widget_list_row_pane_t

0xee22,	// (0x0004673b) main_fep_vtchi_ss_pane

0x7dde,	// (0x0003f6f7) popup_fep_char_pre_window

0x7de6,	// (0x0003f6ff) popup_fep_ituss_window

0x7e07,	// (0x0003f720) popup_fep_vkbss_window

0x7e26,	// (0x0003f73f) grid_vkbss_keypad_pane_ParamLimits

0x7e26,	// (0x0003f73f) grid_vkbss_keypad_pane

0x7e36,	// (0x0003f74f) ituss_keypad_pane

0x1e83,	// (0x0003979c) aid_vkbss_key_offset_ParamLimits

0x1e83,	// (0x0003979c) aid_vkbss_key_offset

0x1e8f,	// (0x000397a8) cell_vkbss_key_pane_ParamLimits

0x1e8f,	// (0x000397a8) cell_vkbss_key_pane

0x25f7,	// (0x00039f10) bg_cell_vkbss_key_g1_ParamLimits

0x25f7,	// (0x00039f10) bg_cell_vkbss_key_g1

0x7e45,	// (0x0003f75e) cell_vkbss_key_3p_pane_ParamLimits

0x7e45,	// (0x0003f75e) cell_vkbss_key_3p_pane

0x7e5f,	// (0x0003f778) cell_vkbss_key_g1_ParamLimits

0x7e5f,	// (0x0003f778) cell_vkbss_key_g1

0x7e79,	// (0x0003f792) cell_vkbss_key_t1_ParamLimits

0x7e79,	// (0x0003f792) cell_vkbss_key_t1

0x1ea5,	// (0x000397be) cell_ituss_key_pane_ParamLimits

0x1ea5,	// (0x000397be) cell_ituss_key_pane

0x7ea4,	// (0x0003f7bd) bg_cell_ituss_key_g1_ParamLimits

0x7ea4,	// (0x0003f7bd) bg_cell_ituss_key_g1

0x7eb0,	// (0x0003f7c9) cell_ituss_key_pane_g1_ParamLimits

0x7eb0,	// (0x0003f7c9) cell_ituss_key_pane_g1

0x1eb6,	// (0x000397cf) cell_ituss_key_pane_g2_ParamLimits

0x1eb6,	// (0x000397cf) cell_ituss_key_pane_g2

0x0002,

0xfedc,	// (0x000477f5) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x000477f5) cell_ituss_key_pane_g

0x1ee2,	// (0x000397fb) cell_ituss_key_t1_ParamLimits

0x1ee2,	// (0x000397fb) cell_ituss_key_t1

0x1f1c,	// (0x00039835) cell_ituss_key_t2_ParamLimits

0x1f1c,	// (0x00039835) cell_ituss_key_t2

0x1f4d,	// (0x00039866) cell_ituss_key_t3_ParamLimits

0x1f4d,	// (0x00039866) cell_ituss_key_t3

0x1f1c,	// (0x00039835) cell_ituss_key_t4_ParamLimits

0x1f1c,	// (0x00039835) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x000477fc) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x000477fc) cell_ituss_key_t

0x7edc,	// (0x0003f7f5) cell_vkbss_key_3p_pane_g1

0x7ee4,	// (0x0003f7fd) cell_vkbss_key_3p_pane_g2

0x7eec,	// (0x0003f805) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00047807) cell_vkbss_key_3p_pane_g

0xee22,	// (0x0004673b) bg_popup_fep_char_preview_window_cp02

0x1f90,	// (0x000398a9) popup_fep_char_pre_window_t1

0xe85b,	// (0x00046174) main_ai5_sk_pane

0x7a03,	// (0x0003f31c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7a0f,	// (0x0003f328) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5429,	// (0x0003cd42) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7a24,	// (0x0003f33d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x000477d9) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7a30,	// (0x0003f349) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb5e8,	// (0x00042f01) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xed65,	// (0x0004667e) main_ai5_sk_pane_g1

0xc1d7,	// (0x00043af0) popup_query_code_window_g1

0x7dfc,	// (0x0003f715) popup_fep_vkb_icf_pane

0x7e10,	// (0x0003f729) popup_fep_vtchi_icf_pane

0x7efd,	// (0x0003f816) bg_icf_pane

0x7f09,	// (0x0003f822) list_vkb_icf_pane

0x7f18,	// (0x0003f831) bg_icf_pane_cp01

0x7f2b,	// (0x0003f844) vtchi_icf_list_pane

0x7f3b,	// (0x0003f854) list_vkb_icf_pane_t1_ParamLimits

0x7f3b,	// (0x0003f854) list_vkb_icf_pane_t1

0x7f51,	// (0x0003f86a) vtchi_icf_list_pane_t1_ParamLimits

0x7f51,	// (0x0003f86a) vtchi_icf_list_pane_t1

0x7de6,	// (0x0003f6ff) popup_fep_ituss_window_ParamLimits

0x7e10,	// (0x0003f729) popup_fep_vtchi_icf_pane_ParamLimits

0x7e36,	// (0x0003f74f) ituss_keypad_pane_ParamLimits

0x1e77,	// (0x00039790) ituss_sks_pane

0x7efd,	// (0x0003f816) bg_icf_pane_ParamLimits

0x7dc2,	// (0x0003f6db) icf_edit_indi_pane_ParamLimits

0x7dc2,	// (0x0003f6db) icf_edit_indi_pane

0x7f09,	// (0x0003f822) list_vkb_icf_pane_ParamLimits

0x7f18,	// (0x0003f831) bg_icf_pane_cp01_ParamLimits

0x7dd1,	// (0x0003f6ea) icf_edit_indi_pane_cp01_ParamLimits

0x7dd1,	// (0x0003f6ea) icf_edit_indi_pane_cp01

0x7f33,	// (0x0003f84c) vtchi_query_pane

0x4fe8,	// (0x0003c901) icf_edit_indi_pane_g1_ParamLimits

0x4fe8,	// (0x0003c901) icf_edit_indi_pane_g1

0x7fc3,	// (0x0003f8dc) icf_edit_indi_pane_g2_ParamLimits

0x7fc3,	// (0x0003f8dc) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x0004781f) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x0004781f) icf_edit_indi_pane_g

0x7fd2,	// (0x0003f8eb) icf_edit_indi_pane_t1

0x7f6c,	// (0x0003f885) bg_input_focus_pane_cp042

0xb52a,	// (0x00042e43) vtchi_button_pane

0x7f75,	// (0x0003f88e) vtchi_query_pane_t1

0x7f83,	// (0x0003f89c) vtchi_query_pane_t2

0x7f91,	// (0x0003f8aa) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x0004780e) vtchi_query_pane_t

0xee22,	// (0x0004673b) bg_button_pane_cp13

0x7f9f,	// (0x0003f8b8) vtchi_button_pane_g1

0x1f9f,	// (0x000398b8) ituss_sks_pane_g1

0x1faa,	// (0x000398c3) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x00047815) ituss_sks_pane_g

0x7fa7,	// (0x0003f8c0) ituss_sks_pane_t1

0x7fb5,	// (0x0003f8ce) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x0004781a) ituss_sks_pane_t

0x47de,	// (0x0003c0f7) indicator_nsta_pane_cp_g1

0x47e7,	// (0x0003c100) indicator_nsta_pane_cp_g2

0x47ef,	// (0x0003c108) indicator_nsta_pane_cp_g3

0x47f7,	// (0x0003c110) indicator_nsta_pane_cp_g4

0x47ff,	// (0x0003c118) indicator_nsta_pane_cp_g5

0x47ff,	// (0x0003c118) indicator_nsta_pane_cp_g6

0x0005,

0xfaa5,	// (0x000473be) indicator_nsta_pane_cp_g

0xe633,	// (0x00045f4c) cell_graphic2_pane_t2_ParamLimits

0xe633,	// (0x00045f4c) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x000476d0) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x000476d0) cell_graphic2_pane_t

0xe66d,	// (0x00045f86) cell_graphic2_control_pane_t1

0x9a4b,	// (0x00041364) signal_pane_g3_ParamLimits

0x9a4b,	// (0x00041364) signal_pane_g3

0x9a5f,	// (0x00041378) signal_pane_g4_ParamLimits

0x9a5f,	// (0x00041378) signal_pane_g4

0x7dac,	// (0x0003f6c5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7dac,	// (0x0003f6c5) cell_ai5_widget_list_row_pane_t3

0x7eca,	// (0x0003f7e3) cell_ituss_key_pane_t1_ParamLimits

0x7eca,	// (0x0003f7e3) cell_ituss_key_pane_t1

0x288d,	// (0x0003a1a6) form_field_data_wide_pane_vc_t2_ParamLimits

0x288d,	// (0x0003a1a6) form_field_data_wide_pane_vc_t2

0x28a1,	// (0x0003a1ba) form_field_data_wide_pane_vc_t3_ParamLimits

0x28a1,	// (0x0003a1ba) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x00047118) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x00047118) form_field_data_wide_pane_vc_t

0x44a6,	// (0x0003bdbf) form_field_slider_wide_pane_vc_t3_ParamLimits

0x44a6,	// (0x0003bdbf) form_field_slider_wide_pane_vc_t3

0x4584,	// (0x0003be9d) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4584,	// (0x0003be9d) form_field_popup_wide_pane_vc_t2

0x459b,	// (0x0003beb4) form_field_popup_wide_pane_vc_t3_ParamLimits

0x459b,	// (0x0003beb4) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa94,	// (0x000473ad) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa94,	// (0x000473ad) form_field_popup_wide_pane_vc_t

0xafc3,	// (0x000428dc) aid_fshwr2_btn_pane_ParamLimits

0xafd5,	// (0x000428ee) aid_fshwr2_syb_pane_ParamLimits

0xafe7,	// (0x00042900) aid_fshwr2_txt_pane_ParamLimits

0x14e3,	// (0x00038dfc) fshwr2_bg_pane_ParamLimits

0xaff6,	// (0x0004290f) fshwr2_func_candi_pane_ParamLimits

0xb015,	// (0x0004292e) fshwr2_hwr_syb_pane_ParamLimits

0xb030,	// (0x00042949) fshwr2_icf_pane_ParamLimits

0xd539,	// (0x00044e52) list_double_graphic_pane_vc_g4_ParamLimits

0xd539,	// (0x00044e52) list_double_graphic_pane_vc_g4

0x1ed6,	// (0x000397ef) cell_ituss_key_pane_g3_ParamLimits

0x1ed6,	// (0x000397ef) cell_ituss_key_pane_g3

0x1f7e,	// (0x00039897) cell_ituss_key_t5_ParamLimits

0x1f7e,	// (0x00039897) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small

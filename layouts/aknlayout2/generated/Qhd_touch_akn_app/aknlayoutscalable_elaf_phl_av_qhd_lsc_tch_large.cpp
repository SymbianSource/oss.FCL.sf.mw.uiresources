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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003ee4b };

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
0xd0aa,	// (0x0004bef5) Screen

0xd0b6,	// (0x0004bf01) application_window_ParamLimits

0xd0b6,	// (0x0004bf01) application_window

0x36e9,	// (0x00042534) screen_g1

0xbf3d,	// (0x0004ad88) area_bottom_pane_ParamLimits

0xbf3d,	// (0x0004ad88) area_bottom_pane

0x11b3,	// (0x0003fffe) area_top_pane_ParamLimits

0x11b3,	// (0x0003fffe) area_top_pane

0x1247,	// (0x00040092) main_pane_ParamLimits

0x1247,	// (0x00040092) main_pane

0x36f3,	// (0x0004253e) misc_graphics

0xd7f2,	// (0x0004c63d) battery_pane_ParamLimits

0xd7f2,	// (0x0004c63d) battery_pane

0x5db1,	// (0x00044bfc) bg_status_flat_pane_g8

0x5db9,	// (0x00044c04) bg_status_flat_pane_g9

0x5193,	// (0x00043fde) context_pane_ParamLimits

0x5193,	// (0x00043fde) context_pane

0xd95d,	// (0x0004c7a8) navi_pane_ParamLimits

0xd95d,	// (0x0004c7a8) navi_pane

0xd9db,	// (0x0004c826) signal_pane_ParamLimits

0xd9db,	// (0x0004c826) signal_pane

0x0008,

0xf879,	// (0x0004e6c4) bg_status_flat_pane_g

0xda6b,	// (0x0004c8b6) status_pane_g1_ParamLimits

0xda6b,	// (0x0004c8b6) status_pane_g1

0xda81,	// (0x0004c8cc) status_pane_g2_ParamLimits

0xda81,	// (0x0004c8cc) status_pane_g2

0x53c6,	// (0x00044211) status_pane_g3_ParamLimits

0x53c6,	// (0x00044211) status_pane_g3

0x0004,

0xf7a5,	// (0x0004e5f0) status_pane_g_ParamLimits

0xf7a5,	// (0x0004e5f0) status_pane_g

0xda8d,	// (0x0004c8d8) title_pane_ParamLimits

0xda8d,	// (0x0004c8d8) title_pane

0xdaf0,	// (0x0004c93b) uni_indicator_pane_ParamLimits

0xdaf0,	// (0x0004c93b) uni_indicator_pane

0x5001,	// (0x00043e4c) bg_list_pane_ParamLimits

0x5001,	// (0x00043e4c) bg_list_pane

0xd765,	// (0x0004c5b0) find_pane

0x55c5,	// (0x00044410) listscroll_app_pane_ParamLimits

0x55c5,	// (0x00044410) listscroll_app_pane

0x502d,	// (0x00043e78) listscroll_form_pane

0xc2f8,	// (0x0004b143) listscroll_gen_pane_ParamLimits

0xc2f8,	// (0x0004b143) listscroll_gen_pane

0x1c00,	// (0x00040a4b) listscroll_set_pane

0x6927,	// (0x00045772) main_idle_act_pane

0x4cfd,	// (0x00043b48) main_idle_trad_pane

0x4cfd,	// (0x00043b48) main_list_empty_pane

0x5021,	// (0x00043e6c) main_midp_pane

0x5047,	// (0x00043e92) main_pane_g1_ParamLimits

0x5047,	// (0x00043e92) main_pane_g1

0xc30c,	// (0x0004b157) popup_ai_message_window_ParamLimits

0xc30c,	// (0x0004b157) popup_ai_message_window

0xc39d,	// (0x0004b1e8) popup_fep_china_uni_window_ParamLimits

0xc39d,	// (0x0004b1e8) popup_fep_china_uni_window

0x1d0a,	// (0x00040b55) popup_fep_japan_candidate_window_ParamLimits

0x1d0a,	// (0x00040b55) popup_fep_japan_candidate_window

0x1d2a,	// (0x00040b75) popup_fep_japan_predictive_window_ParamLimits

0x1d2a,	// (0x00040b75) popup_fep_japan_predictive_window

0xc3f9,	// (0x0004b244) popup_find_window

0xc416,	// (0x0004b261) popup_grid_graphic_window_ParamLimits

0xc416,	// (0x0004b261) popup_grid_graphic_window

0x1d91,	// (0x00040bdc) popup_large_graphic_colour_window

0xc4b4,	// (0x0004b2ff) popup_menu_window_ParamLimits

0xc4b4,	// (0x0004b2ff) popup_menu_window

0xc686,	// (0x0004b4d1) popup_note_image_window

0xc64c,	// (0x0004b497) popup_note_wait_window_ParamLimits

0xc64c,	// (0x0004b497) popup_note_wait_window

0xc69e,	// (0x0004b4e9) popup_note_window_ParamLimits

0xc69e,	// (0x0004b4e9) popup_note_window

0xc744,	// (0x0004b58f) popup_query_code_window_ParamLimits

0xc744,	// (0x0004b58f) popup_query_code_window

0x1fd9,	// (0x00040e24) popup_query_data_code_window_ParamLimits

0x1fd9,	// (0x00040e24) popup_query_data_code_window

0xc77e,	// (0x0004b5c9) popup_query_data_window_ParamLimits

0xc77e,	// (0x0004b5c9) popup_query_data_window

0xc800,	// (0x0004b64b) popup_query_sat_info_window_ParamLimits

0xc800,	// (0x0004b64b) popup_query_sat_info_window

0xc897,	// (0x0004b6e2) popup_snote_single_graphic_window_ParamLimits

0xc897,	// (0x0004b6e2) popup_snote_single_graphic_window

0xc897,	// (0x0004b6e2) popup_snote_single_text_window_ParamLimits

0xc897,	// (0x0004b6e2) popup_snote_single_text_window

0x2060,	// (0x00040eab) popup_sub_window_general

0x2190,	// (0x00040fdb) popup_window_general_ParamLimits

0x2190,	// (0x00040fdb) popup_window_general

0x5055,	// (0x00043ea0) power_save_pane

0xc17d,	// (0x0004afc8) control_pane_g1_ParamLimits

0xc17d,	// (0x0004afc8) control_pane_g1

0xc1a6,	// (0x0004aff1) control_pane_g2_ParamLimits

0xc1a6,	// (0x0004aff1) control_pane_g2

0x4fc4,	// (0x00043e0f) control_pane_g3_ParamLimits

0x4fc4,	// (0x00043e0f) control_pane_g3

0x0007,

0xf78d,	// (0x0004e5d8) control_pane_g_ParamLimits

0xf78d,	// (0x0004e5d8) control_pane_g

0xc1e7,	// (0x0004b032) control_pane_t1_ParamLimits

0xc1e7,	// (0x0004b032) control_pane_t1

0xc24d,	// (0x0004b098) control_pane_t2_ParamLimits

0xc24d,	// (0x0004b098) control_pane_t2

0x0002,

0xf79e,	// (0x0004e5e9) control_pane_t_ParamLimits

0xf79e,	// (0x0004e5e9) control_pane_t

0xd697,	// (0x0004c4e2) navi_navi_volume_pane_cp1

0xd69f,	// (0x0004c4ea) status_small_icon_pane

0x4ef9,	// (0x00043d44) status_small_pane_g1_ParamLimits

0x4ef9,	// (0x00043d44) status_small_pane_g1

0xd6a7,	// (0x0004c4f2) status_small_pane_g2_ParamLimits

0xd6a7,	// (0x0004c4f2) status_small_pane_g2

0xd6b3,	// (0x0004c4fe) status_small_pane_g3_ParamLimits

0xd6b3,	// (0x0004c4fe) status_small_pane_g3

0xd6bf,	// (0x0004c50a) status_small_pane_g4_ParamLimits

0xd6bf,	// (0x0004c50a) status_small_pane_g4

0xd6cb,	// (0x0004c516) status_small_pane_g5_ParamLimits

0xd6cb,	// (0x0004c516) status_small_pane_g5

0xd6d9,	// (0x0004c524) status_small_pane_g6_ParamLimits

0xd6d9,	// (0x0004c524) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004e5c7) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004e5c7) status_small_pane_g

0xd708,	// (0x0004c553) status_small_pane_t1

0xd72a,	// (0x0004c575) status_small_wait_pane_ParamLimits

0xd72a,	// (0x0004c575) status_small_wait_pane

0xd562,	// (0x0004c3ad) aid_levels_signal_ParamLimits

0xd562,	// (0x0004c3ad) aid_levels_signal

0xd57a,	// (0x0004c3c5) signal_pane_g1_ParamLimits

0xd57a,	// (0x0004c3c5) signal_pane_g1

0xd595,	// (0x0004c3e0) signal_pane_g2_ParamLimits

0xd595,	// (0x0004c3e0) signal_pane_g2

0x0003,

0xf70d,	// (0x0004e558) signal_pane_g_ParamLimits

0xf70d,	// (0x0004e558) signal_pane_g

0x47d1,	// (0x0004361c) context_pane_g1

0xd0c6,	// (0x0004bf11) title_pane_g1

0xd0fd,	// (0x0004bf48) title_pane_t1

0x379b,	// (0x000425e6) title_pane_t2

0x37c1,	// (0x0004260c) title_pane_t3

0x0002,

0xf557,	// (0x0004e3a2) title_pane_t

0xdb18,	// (0x0004c963) aid_levels_battery_ParamLimits

0xdb18,	// (0x0004c963) aid_levels_battery

0xdb34,	// (0x0004c97f) battery_pane_g1_ParamLimits

0xdb34,	// (0x0004c97f) battery_pane_g1

0xdb51,	// (0x0004c99c) battery_pane_g2_ParamLimits

0xdb51,	// (0x0004c99c) battery_pane_g2

0x0001,

0xf7b0,	// (0x0004e5fb) battery_pane_g_ParamLimits

0xf7b0,	// (0x0004e5fb) battery_pane_g

0xdd12,	// (0x0004cb5d) uni_indicator_pane_g1

0xdd27,	// (0x0004cb72) uni_indicator_pane_g2

0xdd3d,	// (0x0004cb88) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0004e76c) uni_indicator_pane_g

0x4b6f,	// (0x000439ba) navi_icon_pane_ParamLimits

0x4b6f,	// (0x000439ba) navi_icon_pane

0x4aad,	// (0x000438f8) navi_midp_pane

0x4b8b,	// (0x000439d6) navi_navi_pane

0x4b95,	// (0x000439e0) navi_text_pane_ParamLimits

0x4b95,	// (0x000439e0) navi_text_pane

0x36e9,	// (0x00042534) status_small_wait_pane_g1

0x3c16,	// (0x00042a61) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0004e767) status_small_wait_pane_g

0x640c,	// (0x00045257) navi_navi_icon_text_pane

0x6414,	// (0x0004525f) navi_navi_pane_g1_ParamLimits

0x6414,	// (0x0004525f) navi_navi_pane_g1

0x6426,	// (0x00045271) navi_navi_pane_g2_ParamLimits

0x6426,	// (0x00045271) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0004e735) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0004e735) navi_navi_pane_g

0x6438,	// (0x00045283) navi_navi_tabs_pane

0x6441,	// (0x0004528c) navi_navi_text_pane

0x640c,	// (0x00045257) navi_navi_volume_pane

0x63e8,	// (0x00045233) navi_text_pane_t1

0x63dc,	// (0x00045227) navi_icon_pane_g1

0x632f,	// (0x0004517a) navi_navi_text_pane_t1

0x2448,	// (0x00041293) navi_navi_volume_pane_g1

0x2450,	// (0x0004129b) volume_small_pane

0x6295,	// (0x000450e0) navi_navi_icon_text_pane_g1

0x629d,	// (0x000450e8) navi_navi_icon_text_pane_t1

0x4b8b,	// (0x000439d6) navi_tabs_2_long_pane

0x4b8b,	// (0x000439d6) navi_tabs_2_pane

0x4b8b,	// (0x000439d6) navi_tabs_3_long_pane

0x4b8b,	// (0x000439d6) navi_tabs_3_pane

0x4b8b,	// (0x000439d6) navi_tabs_4_pane

0x2428,	// (0x00041273) tabs_2_active_pane_ParamLimits

0x2428,	// (0x00041273) tabs_2_active_pane

0x2438,	// (0x00041283) tabs_2_passive_pane_ParamLimits

0x2438,	// (0x00041283) tabs_2_passive_pane

0x23f6,	// (0x00041241) tabs_3_active_pane_ParamLimits

0x23f6,	// (0x00041241) tabs_3_active_pane

0x2406,	// (0x00041251) tabs_3_passive_pane_ParamLimits

0x2406,	// (0x00041251) tabs_3_passive_pane

0x2417,	// (0x00041262) tabs_3_passive_pane_cp_ParamLimits

0x2417,	// (0x00041262) tabs_3_passive_pane_cp

0x23b2,	// (0x000411fd) tabs_4_active_pane_ParamLimits

0x23b2,	// (0x000411fd) tabs_4_active_pane

0x23c3,	// (0x0004120e) tabs_4_passive_pane_ParamLimits

0x23c3,	// (0x0004120e) tabs_4_passive_pane

0x23d4,	// (0x0004121f) tabs_4_passive_pane_cp_ParamLimits

0x23d4,	// (0x0004121f) tabs_4_passive_pane_cp

0x23e5,	// (0x00041230) tabs_4_passive_pane_cp2_ParamLimits

0x23e5,	// (0x00041230) tabs_4_passive_pane_cp2

0x238e,	// (0x000411d9) tabs_2_long_active_pane_ParamLimits

0x238e,	// (0x000411d9) tabs_2_long_active_pane

0x23a0,	// (0x000411eb) tabs_2_long_passive_pane_ParamLimits

0x23a0,	// (0x000411eb) tabs_2_long_passive_pane

0x234f,	// (0x0004119a) tabs_3_long_active_pane_ParamLimits

0x234f,	// (0x0004119a) tabs_3_long_active_pane

0x2362,	// (0x000411ad) tabs_3_long_passive_pane_ParamLimits

0x2362,	// (0x000411ad) tabs_3_long_passive_pane

0x237b,	// (0x000411c6) tabs_3_long_passive_pane_cp_ParamLimits

0x237b,	// (0x000411c6) tabs_3_long_passive_pane_cp

0x22f5,	// (0x00041140) volume_small_pane_g1

0x22fe,	// (0x00041149) volume_small_pane_g2

0x2307,	// (0x00041152) volume_small_pane_g3

0x2310,	// (0x0004115b) volume_small_pane_g4

0x2319,	// (0x00041164) volume_small_pane_g5

0x2322,	// (0x0004116d) volume_small_pane_g6

0x232b,	// (0x00041176) volume_small_pane_g7

0x2334,	// (0x0004117f) volume_small_pane_g8

0x233d,	// (0x00041188) volume_small_pane_g9

0x2346,	// (0x00041191) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0004e701) volume_small_pane_g

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp2_ParamLimits

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp2

0x37e1,	// (0x0004262c) tabs_3_active_pane_g1

0xd189,	// (0x0004bfd4) tabs_3_active_pane_t1

0x3a4e,	// (0x00042899) bg_passive_tab_pane_cp2_ParamLimits

0x3a4e,	// (0x00042899) bg_passive_tab_pane_cp2

0x37e1,	// (0x0004262c) tabs_3_passive_pane_g1

0xd189,	// (0x0004bfd4) tabs_3_passive_pane_t1

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp3_ParamLimits

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp3

0x37fb,	// (0x00042646) tabs_4_active_pane_g1

0xd19b,	// (0x0004bfe6) tabs_4_active_pane_t1

0x3a4e,	// (0x00042899) bg_passive_tab_pane_cp3_ParamLimits

0x3a4e,	// (0x00042899) bg_passive_tab_pane_cp3

0x37fb,	// (0x00042646) tabs_4_1_passive_pane_g1

0xd19b,	// (0x0004bfe6) tabs_4_1_passive_pane_t1

0x5021,	// (0x00043e6c) list_highlight_pane_cp2

0xddc3,	// (0x0004cc0e) list_set_pane_ParamLimits

0xddc3,	// (0x0004cc0e) list_set_pane

0xde5d,	// (0x0004cca8) main_pane_set_t1_ParamLimits

0xde5d,	// (0x0004cca8) main_pane_set_t1

0xde7d,	// (0x0004ccc8) main_pane_set_t2_ParamLimits

0xde7d,	// (0x0004ccc8) main_pane_set_t2

0xde91,	// (0x0004ccdc) main_pane_set_t3_ParamLimits

0xde91,	// (0x0004ccdc) main_pane_set_t3

0xdea3,	// (0x0004ccee) main_pane_set_t4_ParamLimits

0xdea3,	// (0x0004ccee) main_pane_set_t4

0x0003,

0xf986,	// (0x0004e7d1) main_pane_set_t_ParamLimits

0xf986,	// (0x0004e7d1) main_pane_set_t

0xdeb5,	// (0x0004cd00) setting_code_pane

0xdebf,	// (0x0004cd0a) setting_slider_graphic_pane

0xdebf,	// (0x0004cd0a) setting_slider_pane

0xdebf,	// (0x0004cd0a) setting_text_pane

0xdebf,	// (0x0004cd0a) setting_volume_pane

0x1496,	// (0x000402e1) volume_set_pane

0x37d3,	// (0x0004261e) bg_set_opt_pane_cp

0x149e,	// (0x000402e9) setting_slider_pane_t1

0x14b7,	// (0x00040302) setting_slider_pane_t2

0x14d1,	// (0x0004031c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004e3a9) setting_slider_pane_t

0x14e9,	// (0x00040334) slider_set_pane

0x36f3,	// (0x0004253e) bg_set_opt_pane_cp2

0x3815,	// (0x00042660) setting_slider_graphic_pane_g1

0x14ff,	// (0x0004034a) setting_slider_graphic_pane_t1

0x150f,	// (0x0004035a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004e3b0) setting_slider_graphic_pane_t

0x151f,	// (0x0004036a) slider_set_pane_cp

0x36f3,	// (0x0004253e) input_focus_pane_cp1

0x690e,	// (0x00045759) list_set_text_pane

0x36e9,	// (0x00042534) setting_text_pane_g1

0x36f3,	// (0x0004253e) input_focus_pane_cp2

0x36e9,	// (0x00042534) setting_code_pane_g1

0x381e,	// (0x00042669) setting_code_pane_t1

0x0100,	// (0x0003ef4b) set_text_pane_t1_ParamLimits

0x0100,	// (0x0003ef4b) set_text_pane_t1

0x40c0,	// (0x00042f0b) set_opt_bg_pane_g1

0x40c8,	// (0x00042f13) set_opt_bg_pane_g2

0x68e8,	// (0x00045733) set_opt_bg_pane_g3

0x40d8,	// (0x00042f23) set_opt_bg_pane_g4

0x40e0,	// (0x00042f2b) set_opt_bg_pane_g5

0x40e8,	// (0x00042f33) set_opt_bg_pane_g6

0x68f2,	// (0x0004573d) set_opt_bg_pane_g7

0x68fa,	// (0x00045745) set_opt_bg_pane_g8

0x6904,	// (0x0004574f) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0004e7be) set_opt_bg_pane_g

0x68db,	// (0x00045726) slider_set_pane_g1

0x24bd,	// (0x00041308) slider_set_pane_g2

0x0006,

0xf964,	// (0x0004e7af) slider_set_pane_g

0x2459,	// (0x000412a4) volume_set_pane_g1

0x2461,	// (0x000412ac) volume_set_pane_g2

0x2469,	// (0x000412b4) volume_set_pane_g3

0x2471,	// (0x000412bc) volume_set_pane_g4

0x2479,	// (0x000412c4) volume_set_pane_g5

0x2481,	// (0x000412cc) volume_set_pane_g6

0x2489,	// (0x000412d4) volume_set_pane_g7

0x2491,	// (0x000412dc) volume_set_pane_g8

0x2499,	// (0x000412e4) volume_set_pane_g9

0x24a1,	// (0x000412ec) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0004e787) volume_set_pane_g

0xd1ad,	// (0x0004bff8) indicator_pane_ParamLimits

0xd1ad,	// (0x0004bff8) indicator_pane

0xd1d5,	// (0x0004c020) main_idle_pane_g2_ParamLimits

0xd1d5,	// (0x0004c020) main_idle_pane_g2

0xd20d,	// (0x0004c058) main_pane_idle_g1_ParamLimits

0xd20d,	// (0x0004c058) main_pane_idle_g1

0x386d,	// (0x000426b8) popup_clock_digital_analogue_window_ParamLimits

0x386d,	// (0x000426b8) popup_clock_digital_analogue_window

0xd234,	// (0x0004c07f) soft_indicator_pane_ParamLimits

0xd234,	// (0x0004c07f) soft_indicator_pane

0xd24e,	// (0x0004c099) wallpaper_pane_ParamLimits

0xd24e,	// (0x0004c099) wallpaper_pane

0x36e9,	// (0x00042534) wallpaper_pane_g1

0xd260,	// (0x0004c0ab) indicator_pane_g1_ParamLimits

0xd260,	// (0x0004c0ab) indicator_pane_g1

0x6cbd,	// (0x00045b08) navi_navi_icon_text_pane_srt_g1

0x38bf,	// (0x0004270a) soft_indicator_pane_t1

0x38d9,	// (0x00042724) aid_ps_area_pane

0xd276,	// (0x0004c0c1) aid_ps_clock_pane

0x38f8,	// (0x00042743) aid_ps_indicator_pane

0x3904,	// (0x0004274f) indicator_ps_pane_ParamLimits

0x3904,	// (0x0004274f) indicator_ps_pane

0x3913,	// (0x0004275e) power_save_pane_g1_ParamLimits

0x3913,	// (0x0004275e) power_save_pane_g1

0x391f,	// (0x0004276a) power_save_pane_g2_ParamLimits

0x391f,	// (0x0004276a) power_save_pane_g2

0x10a7,	// (0x0003fef2) aid_navinavi_width_pane

0x38d9,	// (0x00042724) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004e3b5) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004e3b5) power_save_pane_g

0x392d,	// (0x00042778) power_save_pane_t1_ParamLimits

0x392d,	// (0x00042778) power_save_pane_t1

0xd276,	// (0x0004c0c1) aid_ps_clock_pane_ParamLimits

0x38f8,	// (0x00042743) aid_ps_indicator_pane_ParamLimits

0x393f,	// (0x0004278a) power_save_pane_t4_ParamLimits

0x393f,	// (0x0004278a) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004e3ba) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004e3ba) power_save_pane_t

0x3969,	// (0x000427b4) power_save_t3_ParamLimits

0x3969,	// (0x000427b4) power_save_t3

0x3954,	// (0x0004279f) power_save_t2_ParamLimits

0x3954,	// (0x0004279f) power_save_t2

0x397e,	// (0x000427c9) indicator_ps_pane_g1

0xd284,	// (0x0004c0cf) ai_gene_pane_ParamLimits

0xd284,	// (0x0004c0cf) ai_gene_pane

0xd29b,	// (0x0004c0e6) ai_links_pane_ParamLimits

0xd29b,	// (0x0004c0e6) ai_links_pane

0xd2b3,	// (0x0004c0fe) indicator_pane_cp1_ParamLimits

0xd2b3,	// (0x0004c0fe) indicator_pane_cp1

0xd2c2,	// (0x0004c10d) main_pane_idle_g1_cp_ParamLimits

0xd2c2,	// (0x0004c10d) main_pane_idle_g1_cp

0x39b7,	// (0x00042802) popup_ai_links_title_window

0xd2da,	// (0x0004c125) soft_indicator_pane_cp1_ParamLimits

0xd2da,	// (0x0004c125) soft_indicator_pane_cp1

0x66d5,	// (0x00045520) ai_links_pane_g1

0x66de,	// (0x00045529) grid_ai_links_pane

0xdd09,	// (0x0004cb54) ai_gene_pane_1

0x66c3,	// (0x0004550e) ai_gene_pane_2

0x66cc,	// (0x00045517) list_highlight_pane_cp4

0xdce5,	// (0x0004cb30) cell_ai_link_pane_ParamLimits

0xdce5,	// (0x0004cb30) cell_ai_link_pane

0x6694,	// (0x000454df) cell_ai_link_pane_g1

0x3c16,	// (0x00042a61) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0004e762) cell_ai_link_pane_g

0x36f3,	// (0x0004253e) grid_highlight_cp2

0x36f3,	// (0x0004253e) bg_popup_sub_pane_cp1

0x39da,	// (0x00042825) popup_ai_links_title_window_t1

0x65e2,	// (0x0004542d) ai_gene_pane_1_g1_ParamLimits

0x65e2,	// (0x0004542d) ai_gene_pane_1_g1

0x65ee,	// (0x00045439) ai_gene_pane_1_g2_ParamLimits

0x65ee,	// (0x00045439) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0004e758) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0004e758) ai_gene_pane_1_g

0x65fb,	// (0x00045446) ai_gene_pane_1_t1_ParamLimits

0x65fb,	// (0x00045446) ai_gene_pane_1_t1

0x662f,	// (0x0004547a) grid_ai_soft_ind_pane

0x65cd,	// (0x00045418) ai_gene_pane_2_t1_ParamLimits

0x65cd,	// (0x00045418) ai_gene_pane_2_t1

0xd2ee,	// (0x0004c139) main_pane_empty_t1_ParamLimits

0xd2ee,	// (0x0004c139) main_pane_empty_t1

0xd306,	// (0x0004c151) main_pane_empty_t2_ParamLimits

0xd306,	// (0x0004c151) main_pane_empty_t2

0xd31b,	// (0x0004c166) main_pane_empty_t3_ParamLimits

0xd31b,	// (0x0004c166) main_pane_empty_t3

0xd32d,	// (0x0004c178) main_pane_empty_t4_ParamLimits

0xd32d,	// (0x0004c178) main_pane_empty_t4

0xd33f,	// (0x0004c18a) main_pane_empty_t5_ParamLimits

0xd33f,	// (0x0004c18a) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004e3bf) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004e3bf) main_pane_empty_t

0x4111,	// (0x00042f5c) bg_popup_window_pane_ParamLimits

0x4111,	// (0x00042f5c) bg_popup_window_pane

0x633d,	// (0x00045188) find_popup_pane_cp2_ParamLimits

0x633d,	// (0x00045188) find_popup_pane_cp2

0x6349,	// (0x00045194) heading_pane_ParamLimits

0x6349,	// (0x00045194) heading_pane

0x36f3,	// (0x0004253e) bg_popup_sub_pane

0xdc66,	// (0x0004cab1) bg_popup_window_pane_g1_ParamLimits

0xdc66,	// (0x0004cab1) bg_popup_window_pane_g1

0xdc75,	// (0x0004cac0) bg_popup_window_pane_g2_ParamLimits

0xdc75,	// (0x0004cac0) bg_popup_window_pane_g2

0xdc81,	// (0x0004cacc) bg_popup_window_pane_g3_ParamLimits

0xdc81,	// (0x0004cacc) bg_popup_window_pane_g3

0xdc8d,	// (0x0004cad8) bg_popup_window_pane_g4_ParamLimits

0xdc8d,	// (0x0004cad8) bg_popup_window_pane_g4

0xdc9c,	// (0x0004cae7) bg_popup_window_pane_g5_ParamLimits

0xdc9c,	// (0x0004cae7) bg_popup_window_pane_g5

0xdcac,	// (0x0004caf7) bg_popup_window_pane_g6_ParamLimits

0xdcac,	// (0x0004caf7) bg_popup_window_pane_g6

0xdcb8,	// (0x0004cb03) bg_popup_window_pane_g7_ParamLimits

0xdcb8,	// (0x0004cb03) bg_popup_window_pane_g7

0xdcc7,	// (0x0004cb12) bg_popup_window_pane_g8_ParamLimits

0xdcc7,	// (0x0004cb12) bg_popup_window_pane_g8

0xdcd6,	// (0x0004cb21) bg_popup_window_pane_g9_ParamLimits

0xdcd6,	// (0x0004cb21) bg_popup_window_pane_g9

0x6323,	// (0x0004516e) bg_popup_window_pane_g10_ParamLimits

0x6323,	// (0x0004516e) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0004e720) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0004e720) bg_popup_window_pane_g

0x624c,	// (0x00045097) bg_popup_heading_pane_ParamLimits

0x624c,	// (0x00045097) bg_popup_heading_pane

0x25db,	// (0x00041426) tabs_4_passive_pane_cp_srt_ParamLimits

0x25db,	// (0x00041426) tabs_4_passive_pane_cp_srt

0x25ed,	// (0x00041438) tabs_4_passive_pane_srt_ParamLimits

0x6260,	// (0x000450ab) heading_pane_g2

0x25ed,	// (0x00041438) tabs_4_passive_pane_srt

0x55c5,	// (0x00044410) bg_passive_tab_pane_cp3_srt_ParamLimits

0x55c5,	// (0x00044410) bg_passive_tab_pane_cp3_srt

0x6268,	// (0x000450b3) heading_pane_t1_ParamLimits

0x6268,	// (0x000450b3) heading_pane_t1

0x627f,	// (0x000450ca) heading_pane_t2_ParamLimits

0x627f,	// (0x000450ca) heading_pane_t2

0x0001,

0xf8d0,	// (0x0004e71b) heading_pane_t_ParamLimits

0xf8d0,	// (0x0004e71b) heading_pane_t

0x5d79,	// (0x00044bc4) bg_popup_heading_pane_g1

0x5e28,	// (0x00044c73) bg_popup_heading_pane_g2

0x5e32,	// (0x00044c7d) bg_popup_heading_pane_g3

0x5e3c,	// (0x00044c87) bg_popup_heading_pane_g4

0x5e46,	// (0x00044c91) bg_popup_heading_pane_g5

0x5e50,	// (0x00044c9b) bg_popup_heading_pane_g6

0x5e58,	// (0x00044ca3) bg_popup_heading_pane_g7

0x5e60,	// (0x00044cab) bg_popup_heading_pane_g8

0x5e6a,	// (0x00044cb5) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0004e6d7) bg_popup_heading_pane_g

0x5551,	// (0x0004439c) bg_popup_sub_pane_g1

0x5559,	// (0x000443a4) bg_popup_sub_pane_g2

0x5561,	// (0x000443ac) bg_popup_sub_pane_g3

0x5569,	// (0x000443b4) bg_popup_sub_pane_g4

0x5571,	// (0x000443bc) bg_popup_sub_pane_g5

0x5579,	// (0x000443c4) bg_popup_sub_pane_g6

0x5581,	// (0x000443cc) bg_popup_sub_pane_g7

0x5589,	// (0x000443d4) bg_popup_sub_pane_g8

0x5591,	// (0x000443dc) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0004e6b1) bg_popup_sub_pane_g

0x3a4e,	// (0x00042899) bg_popup_window_pane_cp5_ParamLimits

0x3a4e,	// (0x00042899) bg_popup_window_pane_cp5

0x3a6a,	// (0x000428b5) popup_note_window_g1_ParamLimits

0x3a6a,	// (0x000428b5) popup_note_window_g1

0x3a76,	// (0x000428c1) popup_note_window_t1_ParamLimits

0x3a76,	// (0x000428c1) popup_note_window_t1

0x3a8c,	// (0x000428d7) popup_note_window_t2_ParamLimits

0x3a8c,	// (0x000428d7) popup_note_window_t2

0x3aa2,	// (0x000428ed) popup_note_window_t3_ParamLimits

0x3aa2,	// (0x000428ed) popup_note_window_t3

0x3ab8,	// (0x00042903) popup_note_window_t4_ParamLimits

0x3ab8,	// (0x00042903) popup_note_window_t4

0x3ae0,	// (0x0004292b) popup_note_window_t5_ParamLimits

0x3ae0,	// (0x0004292b) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004e3ca) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004e3ca) popup_note_window_t

0x3b2a,	// (0x00042975) bg_popup_window_pane_cp6_ParamLimits

0x3b2a,	// (0x00042975) bg_popup_window_pane_cp6

0x5cf5,	// (0x00044b40) popup_note_image_window_g1_ParamLimits

0x5cf5,	// (0x00044b40) popup_note_image_window_g1

0x5d01,	// (0x00044b4c) popup_note_image_window_g2_ParamLimits

0x5d01,	// (0x00044b4c) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0004e6a5) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0004e6a5) popup_note_image_window_g

0x5d1a,	// (0x00044b65) popup_note_image_window_t1_ParamLimits

0x5d1a,	// (0x00044b65) popup_note_image_window_t1

0x5d33,	// (0x00044b7e) popup_note_image_window_t2_ParamLimits

0x5d33,	// (0x00044b7e) popup_note_image_window_t2

0x5d4c,	// (0x00044b97) popup_note_image_window_t3_ParamLimits

0x5d4c,	// (0x00044b97) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0004e6aa) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0004e6aa) popup_note_image_window_t

0x5bb6,	// (0x00044a01) bg_popup_window_pane_cp7_ParamLimits

0x5bb6,	// (0x00044a01) bg_popup_window_pane_cp7

0x5be6,	// (0x00044a31) popup_note_wait_window_g1_ParamLimits

0x5be6,	// (0x00044a31) popup_note_wait_window_g1

0x5bf2,	// (0x00044a3d) popup_note_wait_window_g2_ParamLimits

0x5bf2,	// (0x00044a3d) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0004e693) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0004e693) popup_note_wait_window_g

0x5c0a,	// (0x00044a55) popup_note_wait_window_t1_ParamLimits

0x5c0a,	// (0x00044a55) popup_note_wait_window_t1

0x5c31,	// (0x00044a7c) popup_note_wait_window_t2_ParamLimits

0x5c31,	// (0x00044a7c) popup_note_wait_window_t2

0x5c4e,	// (0x00044a99) popup_note_wait_window_t3_ParamLimits

0x5c4e,	// (0x00044a99) popup_note_wait_window_t3

0x5c61,	// (0x00044aac) popup_note_wait_window_t4_ParamLimits

0x5c61,	// (0x00044aac) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0004e69a) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0004e69a) popup_note_wait_window_t

0x5c86,	// (0x00044ad1) wait_bar_pane_ParamLimits

0x5c86,	// (0x00044ad1) wait_bar_pane

0x36f3,	// (0x0004253e) wait_anim_pane

0x36f3,	// (0x0004253e) wait_border_pane

0x36e9,	// (0x00042534) wait_anim_pane_g1

0x36e9,	// (0x00042534) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0004e553) wait_anim_pane_g

0x5b5a,	// (0x000449a5) wait_border_pane_g1

0x5b65,	// (0x000449b0) wait_border_pane_g2

0x5b6e,	// (0x000449b9) wait_border_pane_g3

0x0002,

0xf841,	// (0x0004e68c) wait_border_pane_g

0x59c5,	// (0x00044810) bg_popup_window_pane_cp16_ParamLimits

0x59c5,	// (0x00044810) bg_popup_window_pane_cp16

0x5ac5,	// (0x00044910) indicator_popup_pane_cp4_ParamLimits

0x5ac5,	// (0x00044910) indicator_popup_pane_cp4

0x5ad9,	// (0x00044924) popup_query_data_window_t1_ParamLimits

0x5ad9,	// (0x00044924) popup_query_data_window_t1

0x5aeb,	// (0x00044936) popup_query_data_window_t2_ParamLimits

0x5aeb,	// (0x00044936) popup_query_data_window_t2

0x5b04,	// (0x0004494f) popup_query_data_window_t3_ParamLimits

0x5b04,	// (0x0004494f) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0004e685) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0004e685) popup_query_data_window_t

0x5b1e,	// (0x00044969) query_popup_data_pane_ParamLimits

0x5b1e,	// (0x00044969) query_popup_data_pane

0x5b32,	// (0x0004497d) query_popup_data_pane_cp1_ParamLimits

0x5b32,	// (0x0004497d) query_popup_data_pane_cp1

0x59c5,	// (0x00044810) bg_popup_window_pane_cp10_ParamLimits

0x59c5,	// (0x00044810) bg_popup_window_pane_cp10

0x59f7,	// (0x00044842) indicator_popup_pane_ParamLimits

0x59f7,	// (0x00044842) indicator_popup_pane

0x5a19,	// (0x00044864) popup_query_code_window_t1_ParamLimits

0x5a19,	// (0x00044864) popup_query_code_window_t1

0x5a33,	// (0x0004487e) popup_query_code_window_t2_ParamLimits

0x5a33,	// (0x0004487e) popup_query_code_window_t2

0x5a7c,	// (0x000448c7) popup_query_code_window_t3_ParamLimits

0x5a7c,	// (0x000448c7) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0004e67e) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0004e67e) popup_query_code_window_t

0x5aab,	// (0x000448f6) query_popup_pane_ParamLimits

0x5aab,	// (0x000448f6) query_popup_pane

0x3b2a,	// (0x00042975) bg_popup_window_pane_cp15_ParamLimits

0x3b2a,	// (0x00042975) bg_popup_window_pane_cp15

0x3b48,	// (0x00042993) indicator_popup_pane_cp1_ParamLimits

0x3b48,	// (0x00042993) indicator_popup_pane_cp1

0x3b5b,	// (0x000429a6) indicator_popup_pane_cp2_ParamLimits

0x3b5b,	// (0x000429a6) indicator_popup_pane_cp2

0x3b6e,	// (0x000429b9) popup_query_data_code_window_g1_ParamLimits

0x3b6e,	// (0x000429b9) popup_query_data_code_window_g1

0x3b81,	// (0x000429cc) popup_query_data_code_window_t1_ParamLimits

0x3b81,	// (0x000429cc) popup_query_data_code_window_t1

0x3b93,	// (0x000429de) popup_query_data_code_window_t2_ParamLimits

0x3b93,	// (0x000429de) popup_query_data_code_window_t2

0x3ba5,	// (0x000429f0) popup_query_data_code_window_t3_ParamLimits

0x3ba5,	// (0x000429f0) popup_query_data_code_window_t3

0x3bbb,	// (0x00042a06) popup_query_data_code_window_t4_ParamLimits

0x3bbb,	// (0x00042a06) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004e3d5) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004e3d5) popup_query_data_code_window_t

0x2206,	// (0x00041051) list_single_midp_graphic_pane_g3

0x3bd3,	// (0x00042a1e) query_popup_data_pane_cp2_ParamLimits

0x3be6,	// (0x00042a31) query_popup_pane_cp2_ParamLimits

0x3be6,	// (0x00042a31) query_popup_pane_cp2

0x36f3,	// (0x0004253e) bg_popup_window_pane_cp11

0x59b1,	// (0x000447fc) heading_pane_cp5

0x3cd1,	// (0x00042b1c) listscroll_popup_info_pane

0x36f3,	// (0x0004253e) input_focus_pane_cp3

0x3bf9,	// (0x00042a44) query_popup_pane_t1

0x3c07,	// (0x00042a52) list_popup_info_pane_ParamLimits

0x3c07,	// (0x00042a52) list_popup_info_pane

0x3c16,	// (0x00042a61) listscroll_popup_info_pane_g1

0x3c1e,	// (0x00042a69) scroll_pane_cp7

0x3c28,	// (0x00042a73) popup_info_list_pane_t1_ParamLimits

0x3c28,	// (0x00042a73) popup_info_list_pane_t1

0x3c42,	// (0x00042a8d) popup_info_list_pane_t2_ParamLimits

0x3c42,	// (0x00042a8d) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004e3de) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004e3de) popup_info_list_pane_t

0x36f3,	// (0x0004253e) bg_popup_window_pane_cp12

0x6cd7,	// (0x00045b22) find_popup_pane

0x37d3,	// (0x0004261e) bg_popup_window_pane_cp3

0x3c5c,	// (0x00042aa7) heading_pane_cp3

0x3c68,	// (0x00042ab3) listscroll_popup_graphic_pane

0x36f3,	// (0x0004253e) bg_popup_window_pane_cp4

0xd3a1,	// (0x0004c1ec) heading_pane_cp4

0x3cd1,	// (0x00042b1c) listscroll_popup_colour_pane

0x3cd9,	// (0x00042b24) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3cd9,	// (0x00042b24) cell_large_graphic_colour_none_popup_pane

0xd3a9,	// (0x0004c1f4) grid_large_graphic_colour_popup_pane_ParamLimits

0xd3a9,	// (0x0004c1f4) grid_large_graphic_colour_popup_pane

0x3d19,	// (0x00042b64) listscroll_popup_colour_pane_g1_ParamLimits

0x3d19,	// (0x00042b64) listscroll_popup_colour_pane_g1

0x3d30,	// (0x00042b7b) listscroll_popup_colour_pane_g2_ParamLimits

0x3d30,	// (0x00042b7b) listscroll_popup_colour_pane_g2

0x3d47,	// (0x00042b92) listscroll_popup_colour_pane_g3_ParamLimits

0x3d47,	// (0x00042b92) listscroll_popup_colour_pane_g3

0xd3cd,	// (0x0004c218) listscroll_popup_colour_pane_g4_ParamLimits

0xd3cd,	// (0x0004c218) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004e3e3) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004e3e3) listscroll_popup_colour_pane_g

0x3d6b,	// (0x00042bb6) scroll_pane_cp6_ParamLimits

0x3d6b,	// (0x00042bb6) scroll_pane_cp6

0xd3dd,	// (0x0004c228) cell_large_graphic_colour_popup_pane_ParamLimits

0xd3dd,	// (0x0004c228) cell_large_graphic_colour_popup_pane

0x3d9c,	// (0x00042be7) cell_large_graphic_colour_none_popup_pane_t1

0x36f3,	// (0x0004253e) grid_highlight_pane_cp5

0x3dab,	// (0x00042bf6) cell_large_graphic_colour_popup_pane_g1

0x3db3,	// (0x00042bfe) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004e3ec) cell_large_graphic_colour_popup_pane_g

0x3dbb,	// (0x00042c06) cell_large_graphic_colour_popup_pane_g2_copy1

0x3dc4,	// (0x00042c0f) grid_highlight_pane_cp4

0x3dcc,	// (0x00042c17) bg_popup_window_pane_cp8_ParamLimits

0x3dcc,	// (0x00042c17) bg_popup_window_pane_cp8

0x3de7,	// (0x00042c32) popup_snote_single_text_window_g1_ParamLimits

0x3de7,	// (0x00042c32) popup_snote_single_text_window_g1

0x3df9,	// (0x00042c44) popup_snote_single_text_window_t1_ParamLimits

0x3df9,	// (0x00042c44) popup_snote_single_text_window_t1

0x3e0c,	// (0x00042c57) popup_snote_single_text_window_t2_ParamLimits

0x3e0c,	// (0x00042c57) popup_snote_single_text_window_t2

0x3e1f,	// (0x00042c6a) popup_snote_single_text_window_t3_ParamLimits

0x3e1f,	// (0x00042c6a) popup_snote_single_text_window_t3

0x3e58,	// (0x00042ca3) popup_snote_single_text_window_t4_ParamLimits

0x3e58,	// (0x00042ca3) popup_snote_single_text_window_t4

0x3e8c,	// (0x00042cd7) popup_snote_single_text_window_t5_ParamLimits

0x3e8c,	// (0x00042cd7) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004e3f1) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004e3f1) popup_snote_single_text_window_t

0x3ebb,	// (0x00042d06) bg_popup_window_pane_cp9_ParamLimits

0x3ebb,	// (0x00042d06) bg_popup_window_pane_cp9

0x3de7,	// (0x00042c32) popup_snote_single_graphic_window_g1_ParamLimits

0x3de7,	// (0x00042c32) popup_snote_single_graphic_window_g1

0x3ec9,	// (0x00042d14) popup_snote_single_graphic_window_g2_ParamLimits

0x3ec9,	// (0x00042d14) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004e3fc) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004e3fc) popup_snote_single_graphic_window_g

0x3ed5,	// (0x00042d20) popup_snote_single_graphic_window_t1_ParamLimits

0x3ed5,	// (0x00042d20) popup_snote_single_graphic_window_t1

0x3ee8,	// (0x00042d33) popup_snote_single_graphic_window_t2_ParamLimits

0x3ee8,	// (0x00042d33) popup_snote_single_graphic_window_t2

0x3efb,	// (0x00042d46) popup_snote_single_graphic_window_t3_ParamLimits

0x3efb,	// (0x00042d46) popup_snote_single_graphic_window_t3

0x3f34,	// (0x00042d7f) popup_snote_single_graphic_window_t4_ParamLimits

0x3f34,	// (0x00042d7f) popup_snote_single_graphic_window_t4

0x3f68,	// (0x00042db3) popup_snote_single_graphic_window_t5_ParamLimits

0x3f68,	// (0x00042db3) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004e401) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004e401) popup_snote_single_graphic_window_t

0x6c19,	// (0x00045a64) grid_graphic_popup_pane_ParamLimits

0x6c19,	// (0x00045a64) grid_graphic_popup_pane

0x6c43,	// (0x00045a8e) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c43,	// (0x00045a8e) listscroll_popup_graphic_pane_g1

0xdfce,	// (0x0004ce19) listscroll_popup_graphic_pane_g2_ParamLimits

0xdfce,	// (0x0004ce19) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0004e7fb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0004e7fb) listscroll_popup_graphic_pane_g

0x6c6b,	// (0x00045ab6) scroll_pane_cp5

0xdf73,	// (0x0004cdbe) cell_graphic_popup_pane_ParamLimits

0xdf73,	// (0x0004cdbe) cell_graphic_popup_pane

0x6b99,	// (0x000459e4) cell_graphic_popup_pane_g1

0x6ba1,	// (0x000459ec) cell_graphic_popup_pane_g2

0x3dbb,	// (0x00042c06) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0004e7f4) cell_graphic_popup_pane_g

0x6baa,	// (0x000459f5) cell_graphic_popup_pane_t2

0x3dc4,	// (0x00042c0f) grid_highlight_pane_cp3

0x3fa9,	// (0x00042df4) list_gen_pane_ParamLimits

0x3fa9,	// (0x00042df4) list_gen_pane

0x3fdb,	// (0x00042e26) scroll_pane

0xdf2a,	// (0x0004cd75) bg_list_pane_g1_ParamLimits

0xdf2a,	// (0x0004cd75) bg_list_pane_g1

0x6b0e,	// (0x00045959) bg_list_pane_g2_ParamLimits

0x6b0e,	// (0x00045959) bg_list_pane_g2

0x6b23,	// (0x0004596e) bg_list_pane_g3_ParamLimits

0x6b23,	// (0x0004596e) bg_list_pane_g3

0x6b37,	// (0x00045982) bg_list_pane_g4_ParamLimits

0x6b37,	// (0x00045982) bg_list_pane_g4

0xdf47,	// (0x0004cd92) bg_list_pane_g5_ParamLimits

0xdf47,	// (0x0004cd92) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0004e7e9) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0004e7e9) bg_list_pane_g

0xdef2,	// (0x0004cd3d) list_double2_graphic_large_graphic_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_double2_graphic_large_graphic_pane

0xdef2,	// (0x0004cd3d) list_double2_graphic_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_double2_graphic_pane

0xdef2,	// (0x0004cd3d) list_double2_large_graphic_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_double2_large_graphic_pane

0xdef2,	// (0x0004cd3d) list_double2_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_double2_pane

0xdef2,	// (0x0004cd3d) list_double_graphic_heading_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_double_graphic_heading_pane

0xdef2,	// (0x0004cd3d) list_double_graphic_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_double_graphic_pane

0xdef2,	// (0x0004cd3d) list_double_heading_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_double_heading_pane

0xdef2,	// (0x0004cd3d) list_double_large_graphic_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_double_large_graphic_pane

0xdef2,	// (0x0004cd3d) list_double_number_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_double_number_pane

0xdef2,	// (0x0004cd3d) list_double_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_double_pane

0xdef2,	// (0x0004cd3d) list_double_time_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_double_time_pane

0xdef2,	// (0x0004cd3d) list_setting_number_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_setting_number_pane

0xdef2,	// (0x0004cd3d) list_setting_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_setting_pane

0xdf04,	// (0x0004cd4f) list_single_2graphic_pane_ParamLimits

0xdf04,	// (0x0004cd4f) list_single_2graphic_pane

0xdf04,	// (0x0004cd4f) list_single_graphic_heading_pane_ParamLimits

0xdf04,	// (0x0004cd4f) list_single_graphic_heading_pane

0xdf04,	// (0x0004cd4f) list_single_graphic_pane_ParamLimits

0xdf04,	// (0x0004cd4f) list_single_graphic_pane

0xdf04,	// (0x0004cd4f) list_single_heading_pane_ParamLimits

0xdf04,	// (0x0004cd4f) list_single_heading_pane

0xdef2,	// (0x0004cd3d) list_single_large_graphic_pane_ParamLimits

0xdef2,	// (0x0004cd3d) list_single_large_graphic_pane

0xdf04,	// (0x0004cd4f) list_single_number_heading_pane_ParamLimits

0xdf04,	// (0x0004cd4f) list_single_number_heading_pane

0xdf04,	// (0x0004cd4f) list_single_number_pane_ParamLimits

0xdf04,	// (0x0004cd4f) list_single_number_pane

0xdf04,	// (0x0004cd4f) list_single_pane_ParamLimits

0xdf04,	// (0x0004cd4f) list_single_pane

0x36f3,	// (0x0004253e) list_highlight_pane_cp1

0x4c36,	// (0x00043a81) list_single_pane_g1_ParamLimits

0x4c36,	// (0x00043a81) list_single_pane_g1

0x21d5,	// (0x00041020) list_single_pane_g2_ParamLimits

0x21d5,	// (0x00041020) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004e41d) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004e41d) list_single_pane_g

0x0b51,	// (0x0003f99c) list_single_pane_t1_ParamLimits

0x0b51,	// (0x0003f99c) list_single_pane_t1

0x4c36,	// (0x00043a81) list_single_number_pane_g1_ParamLimits

0x4c36,	// (0x00043a81) list_single_number_pane_g1

0x21d5,	// (0x00041020) list_single_number_pane_g2_ParamLimits

0x21d5,	// (0x00041020) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004e41d) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004e41d) list_single_number_pane_g

0x08e2,	// (0x0003f72d) list_single_number_pane_t1_ParamLimits

0x08e2,	// (0x0003f72d) list_single_number_pane_t1

0xbd82,	// (0x0004abcd) list_single_number_pane_t2_ParamLimits

0xbd82,	// (0x0004abcd) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0004e7aa) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0004e7aa) list_single_number_pane_t

0xb736,	// (0x0004a581) list_single_graphic_pane_g1_ParamLimits

0xb736,	// (0x0004a581) list_single_graphic_pane_g1

0x4c36,	// (0x00043a81) list_single_graphic_pane_g2_ParamLimits

0x4c36,	// (0x00043a81) list_single_graphic_pane_g2

0x21d5,	// (0x00041020) list_single_graphic_pane_g3_ParamLimits

0x21d5,	// (0x00041020) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004e40c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004e40c) list_single_graphic_pane_g

0xb742,	// (0x0004a58d) list_single_graphic_pane_t1_ParamLimits

0xb742,	// (0x0004a58d) list_single_graphic_pane_t1

0xb758,	// (0x0004a5a3) list_single_heading_pane_g1_ParamLimits

0xb758,	// (0x0004a5a3) list_single_heading_pane_g1

0x21d5,	// (0x00041020) list_single_heading_pane_g2_ParamLimits

0x21d5,	// (0x00041020) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004e413) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004e413) list_single_heading_pane_g

0xb76b,	// (0x0004a5b6) list_single_heading_pane_t1_ParamLimits

0xb76b,	// (0x0004a5b6) list_single_heading_pane_t1

0xc11b,	// (0x0004af66) list_single_heading_pane_t2_ParamLimits

0xc11b,	// (0x0004af66) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004e418) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004e418) list_single_heading_pane_t

0x4c36,	// (0x00043a81) list_single_number_heading_pane_g1_ParamLimits

0x4c36,	// (0x00043a81) list_single_number_heading_pane_g1

0x21d5,	// (0x00041020) list_single_number_heading_pane_g2_ParamLimits

0x21d5,	// (0x00041020) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004e41d) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004e41d) list_single_number_heading_pane_g

0xb781,	// (0x0004a5cc) list_single_number_heading_pane_t1_ParamLimits

0xb781,	// (0x0004a5cc) list_single_number_heading_pane_t1

0x0b1b,	// (0x0003f966) list_single_number_heading_pane_t2_ParamLimits

0x0b1b,	// (0x0003f966) list_single_number_heading_pane_t2

0x0b2d,	// (0x0003f978) list_single_number_heading_pane_t3_ParamLimits

0x0b2d,	// (0x0003f978) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004e422) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004e422) list_single_number_heading_pane_t

0xb797,	// (0x0004a5e2) list_single_graphic_heading_pane_g1_ParamLimits

0xb797,	// (0x0004a5e2) list_single_graphic_heading_pane_g1

0xc12d,	// (0x0004af78) list_single_graphic_heading_pane_g4_ParamLimits

0xc12d,	// (0x0004af78) list_single_graphic_heading_pane_g4

0x21d5,	// (0x00041020) list_single_graphic_heading_pane_g5_ParamLimits

0x21d5,	// (0x00041020) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004e429) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004e429) list_single_graphic_heading_pane_g

0xb781,	// (0x0004a5cc) list_single_graphic_heading_pane_t1_ParamLimits

0xb781,	// (0x0004a5cc) list_single_graphic_heading_pane_t1

0xb7af,	// (0x0004a5fa) list_single_graphic_heading_pane_t2_ParamLimits

0xb7af,	// (0x0004a5fa) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004e430) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004e430) list_single_graphic_heading_pane_t

0x0b67,	// (0x0003f9b2) list_single_large_graphic_pane_g1_ParamLimits

0x0b67,	// (0x0003f9b2) list_single_large_graphic_pane_g1

0x0b73,	// (0x0003f9be) list_single_large_graphic_pane_g2_ParamLimits

0x0b73,	// (0x0003f9be) list_single_large_graphic_pane_g2

0x0b7f,	// (0x0003f9ca) list_single_large_graphic_pane_g3_ParamLimits

0x0b7f,	// (0x0003f9ca) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004e435) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004e435) list_single_large_graphic_pane_g

0x5b65,	// (0x000449b0) wait_border_pane_g2_copy1

0x1586,	// (0x000403d1) list_single_large_graphic_pane_g4_cp2

0x0b8b,	// (0x0003f9d6) list_single_large_graphic_pane_t1_ParamLimits

0x0b8b,	// (0x0003f9d6) list_single_large_graphic_pane_t1

0x4b21,	// (0x0004396c) list_double_pane_g1_ParamLimits

0x4b21,	// (0x0004396c) list_double_pane_g1

0xc13e,	// (0x0004af89) list_double_pane_g2_ParamLimits

0xc13e,	// (0x0004af89) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004e43c) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004e43c) list_double_pane_g

0xb7c5,	// (0x0004a610) list_double_pane_t1_ParamLimits

0xb7c5,	// (0x0004a610) list_double_pane_t1

0xb7db,	// (0x0004a626) list_double_pane_t2_ParamLimits

0xb7db,	// (0x0004a626) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004e441) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004e441) list_double_pane_t

0xb7ed,	// (0x0004a638) list_double2_pane_g1_ParamLimits

0xb7ed,	// (0x0004a638) list_double2_pane_g1

0xb7fe,	// (0x0004a649) list_double2_pane_g2_ParamLimits

0xb7fe,	// (0x0004a649) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004e446) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004e446) list_double2_pane_g

0xb80a,	// (0x0004a655) list_double2_pane_t1_ParamLimits

0xb80a,	// (0x0004a655) list_double2_pane_t1

0xb820,	// (0x0004a66b) list_double2_pane_t2_ParamLimits

0xb820,	// (0x0004a66b) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004e44b) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004e44b) list_double2_pane_t

0x4b21,	// (0x0004396c) list_double_number_pane_g1_ParamLimits

0x4b21,	// (0x0004396c) list_double_number_pane_g1

0xc13e,	// (0x0004af89) list_double_number_pane_g2_ParamLimits

0xc13e,	// (0x0004af89) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004e43c) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004e43c) list_double_number_pane_g

0xb832,	// (0x0004a67d) list_double_number_pane_t1_ParamLimits

0xb832,	// (0x0004a67d) list_double_number_pane_t1

0xb844,	// (0x0004a68f) list_double_number_pane_t2_ParamLimits

0xb844,	// (0x0004a68f) list_double_number_pane_t2

0xb85a,	// (0x0004a6a5) list_double_number_pane_t3_ParamLimits

0xb85a,	// (0x0004a6a5) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004e450) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004e450) list_double_number_pane_t

0xb86c,	// (0x0004a6b7) list_double_graphic_pane_g1_ParamLimits

0xb86c,	// (0x0004a6b7) list_double_graphic_pane_g1

0xb878,	// (0x0004a6c3) list_double_graphic_pane_g2_ParamLimits

0xb878,	// (0x0004a6c3) list_double_graphic_pane_g2

0xb887,	// (0x0004a6d2) list_double_graphic_pane_g3_ParamLimits

0xb887,	// (0x0004a6d2) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004e457) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004e457) list_double_graphic_pane_g

0xb893,	// (0x0004a6de) list_double_graphic_pane_t1_ParamLimits

0xb893,	// (0x0004a6de) list_double_graphic_pane_t1

0xb8a9,	// (0x0004a6f4) list_double_graphic_pane_t2_ParamLimits

0xb8a9,	// (0x0004a6f4) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004e460) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004e460) list_double_graphic_pane_t

0xb8bb,	// (0x0004a706) list_double2_graphic_pane_g1_ParamLimits

0xb8bb,	// (0x0004a706) list_double2_graphic_pane_g1

0xb8c7,	// (0x0004a712) list_double2_graphic_pane_g2_ParamLimits

0xb8c7,	// (0x0004a712) list_double2_graphic_pane_g2

0xc156,	// (0x0004afa1) list_double2_graphic_pane_g3_ParamLimits

0xc156,	// (0x0004afa1) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004e465) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004e465) list_double2_graphic_pane_g

0xb8d3,	// (0x0004a71e) list_double2_graphic_pane_t1_ParamLimits

0xb8d3,	// (0x0004a71e) list_double2_graphic_pane_t1

0xb8e9,	// (0x0004a734) list_double2_graphic_pane_t2_ParamLimits

0xb8e9,	// (0x0004a734) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004e46c) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004e46c) list_double2_graphic_pane_t

0xb8fb,	// (0x0004a746) list_double_large_graphic_pane_g1_ParamLimits

0xb8fb,	// (0x0004a746) list_double_large_graphic_pane_g1

0xb91a,	// (0x0004a765) list_double_large_graphic_pane_g2_ParamLimits

0xb91a,	// (0x0004a765) list_double_large_graphic_pane_g2

0xc13e,	// (0x0004af89) list_double_large_graphic_pane_g3_ParamLimits

0xc13e,	// (0x0004af89) list_double_large_graphic_pane_g3

0xb930,	// (0x0004a77b) list_double_large_graphic_pane_g4_ParamLimits

0xb930,	// (0x0004a77b) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004e471) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004e471) list_double_large_graphic_pane_g

0xb942,	// (0x0004a78d) list_double_large_graphic_pane_t1_ParamLimits

0xb942,	// (0x0004a78d) list_double_large_graphic_pane_t1

0xb95b,	// (0x0004a7a6) list_double_large_graphic_pane_t2_ParamLimits

0xb95b,	// (0x0004a7a6) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004e47c) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004e47c) list_double_large_graphic_pane_t

0xb96d,	// (0x0004a7b8) list_double2_large_graphic_pane_g1_ParamLimits

0xb96d,	// (0x0004a7b8) list_double2_large_graphic_pane_g1

0xb979,	// (0x0004a7c4) list_double2_large_graphic_pane_g2_ParamLimits

0xb979,	// (0x0004a7c4) list_double2_large_graphic_pane_g2

0xc156,	// (0x0004afa1) list_double2_large_graphic_pane_g3_ParamLimits

0xc156,	// (0x0004afa1) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004e481) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004e481) list_double2_large_graphic_pane_g

0xb98a,	// (0x0004a7d5) list_double2_large_graphic_pane_t1_ParamLimits

0xb98a,	// (0x0004a7d5) list_double2_large_graphic_pane_t1

0xb9a0,	// (0x0004a7eb) list_double2_large_graphic_pane_t2_ParamLimits

0xb9a0,	// (0x0004a7eb) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004e488) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004e488) list_double2_large_graphic_pane_t

0xb9b2,	// (0x0004a7fd) list_double_heading_pane_g1_ParamLimits

0xb9b2,	// (0x0004a7fd) list_double_heading_pane_g1

0xb9c3,	// (0x0004a80e) list_double_heading_pane_g2_ParamLimits

0xb9c3,	// (0x0004a80e) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004e48d) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004e48d) list_double_heading_pane_g

0xb9cf,	// (0x0004a81a) list_double_heading_pane_t1_ParamLimits

0xb9cf,	// (0x0004a81a) list_double_heading_pane_t1

0xb820,	// (0x0004a66b) list_double_heading_pane_t2_ParamLimits

0xb820,	// (0x0004a66b) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004e492) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004e492) list_double_heading_pane_t

0xb9e5,	// (0x0004a830) list_double_graphic_heading_pane_g1_ParamLimits

0xb9e5,	// (0x0004a830) list_double_graphic_heading_pane_g1

0xb9b2,	// (0x0004a7fd) list_double_graphic_heading_pane_g2_ParamLimits

0xb9b2,	// (0x0004a7fd) list_double_graphic_heading_pane_g2

0xb9c3,	// (0x0004a80e) list_double_graphic_heading_pane_g3_ParamLimits

0xb9c3,	// (0x0004a80e) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004e497) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004e497) list_double_graphic_heading_pane_g

0xb9f1,	// (0x0004a83c) list_double_graphic_heading_pane_t1_ParamLimits

0xb9f1,	// (0x0004a83c) list_double_graphic_heading_pane_t1

0xb8e9,	// (0x0004a734) list_double_graphic_heading_pane_t2_ParamLimits

0xb8e9,	// (0x0004a734) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004e49e) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004e49e) list_double_graphic_heading_pane_t

0xba07,	// (0x0004a852) list_double_time_pane_g1_ParamLimits

0xba07,	// (0x0004a852) list_double_time_pane_g1

0xba18,	// (0x0004a863) list_double_time_pane_g2_ParamLimits

0xba18,	// (0x0004a863) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004e4a3) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004e4a3) list_double_time_pane_g

0xba24,	// (0x0004a86f) list_double_time_pane_t1_ParamLimits

0xba24,	// (0x0004a86f) list_double_time_pane_t1

0xba3a,	// (0x0004a885) list_double_time_pane_t2_ParamLimits

0xba3a,	// (0x0004a885) list_double_time_pane_t2

0xba4c,	// (0x0004a897) list_double_time_pane_t3_ParamLimits

0xba4c,	// (0x0004a897) list_double_time_pane_t3

0xba5e,	// (0x0004a8a9) list_double_time_pane_t4_ParamLimits

0xba5e,	// (0x0004a8a9) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0004e4a8) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0004e4a8) list_double_time_pane_t

0xba70,	// (0x0004a8bb) list_setting_pane_g1_ParamLimits

0xba70,	// (0x0004a8bb) list_setting_pane_g1

0xb7fe,	// (0x0004a649) list_setting_pane_g2_ParamLimits

0xb7fe,	// (0x0004a649) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004e4b1) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004e4b1) list_setting_pane_g

0xba7c,	// (0x0004a8c7) list_setting_pane_t1_ParamLimits

0xba7c,	// (0x0004a8c7) list_setting_pane_t1

0xba96,	// (0x0004a8e1) list_setting_pane_t2_ParamLimits

0xba96,	// (0x0004a8e1) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004e4b6) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004e4b6) list_setting_pane_t

0xbad5,	// (0x0004a920) set_value_pane_cp_ParamLimits

0xbad5,	// (0x0004a920) set_value_pane_cp

0xbae1,	// (0x0004a92c) list_setting_number_pane_g1_ParamLimits

0xbae1,	// (0x0004a92c) list_setting_number_pane_g1

0xbaed,	// (0x0004a938) list_setting_number_pane_g2_ParamLimits

0xbaed,	// (0x0004a938) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004e4bd) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004e4bd) list_setting_number_pane_g

0xbaf9,	// (0x0004a944) list_setting_number_pane_t1_ParamLimits

0xbaf9,	// (0x0004a944) list_setting_number_pane_t1

0xbb12,	// (0x0004a95d) list_setting_number_pane_t2_ParamLimits

0xbb12,	// (0x0004a95d) list_setting_number_pane_t2

0xbb2c,	// (0x0004a977) list_setting_number_pane_t3_ParamLimits

0xbb2c,	// (0x0004a977) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004e4c2) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004e4c2) list_setting_number_pane_t

0xbad5,	// (0x0004a920) set_value_pane_ParamLimits

0xbad5,	// (0x0004a920) set_value_pane

0x401b,	// (0x00042e66) bg_set_opt_pane_ParamLimits

0x401b,	// (0x00042e66) bg_set_opt_pane

0x0573,	// (0x0003f3be) set_value_pane_t1

0x403c,	// (0x00042e87) slider_set_pane_cp3

0x4045,	// (0x00042e90) volume_small_pane_cp

0x404e,	// (0x00042e99) list_form_gen_pane

0x4057,	// (0x00042ea2) scroll_pane_cp8

0xbb6f,	// (0x0004a9ba) form_field_data_pane_ParamLimits

0xbb6f,	// (0x0004a9ba) form_field_data_pane

0xbb86,	// (0x0004a9d1) form_field_data_wide_pane_ParamLimits

0xbb86,	// (0x0004a9d1) form_field_data_wide_pane

0xbba6,	// (0x0004a9f1) form_field_popup_pane_ParamLimits

0xbba6,	// (0x0004a9f1) form_field_popup_pane

0xbbbe,	// (0x0004aa09) form_field_popup_wide_pane_ParamLimits

0xbbbe,	// (0x0004aa09) form_field_popup_wide_pane

0x060f,	// (0x0003f45a) form_field_slider_pane_ParamLimits

0x060f,	// (0x0003f45a) form_field_slider_pane

0x0622,	// (0x0003f46d) form_field_slider_wide_pane_ParamLimits

0x0622,	// (0x0003f46d) form_field_slider_wide_pane

0x4068,	// (0x00042eb3) data_form_pane

0xbbdf,	// (0x0004aa2a) form_field_data_pane_t1

0x4074,	// (0x00042ebf) input_focus_pane

0x0657,	// (0x0003f4a2) data_form_wide_pane

0x0674,	// (0x0003f4bf) form_field_data_wide_pane_t1

0x3dd9,	// (0x00042c24) input_focus_pane_cp6

0xbbf9,	// (0x0004aa44) form_field_popup_pane_t1

0x4074,	// (0x00042ebf) input_focus_pane_cp7

0x4096,	// (0x00042ee1) list_form_pane

0x06b6,	// (0x0003f501) form_field_popup_wide_pane_t1

0x4074,	// (0x00042ebf) input_focus_pane_cp8

0x40a2,	// (0x00042eed) list_form_wide_pane

0xbc1b,	// (0x0004aa66) form_field_slider_pane_t1_ParamLimits

0xbc1b,	// (0x0004aa66) form_field_slider_pane_t1

0xbc33,	// (0x0004aa7e) form_field_slider_pane_t2_ParamLimits

0xbc33,	// (0x0004aa7e) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004e4d2) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004e4d2) form_field_slider_pane_t

0x3a4e,	// (0x00042899) input_focus_pane_cp9_ParamLimits

0x3a4e,	// (0x00042899) input_focus_pane_cp9

0xbc48,	// (0x0004aa93) slider_cont_pane_ParamLimits

0xbc48,	// (0x0004aa93) slider_cont_pane

0x40ae,	// (0x00042ef9) form_field_slider_wide_pane_t1_ParamLimits

0x40ae,	// (0x00042ef9) form_field_slider_wide_pane_t1

0x0712,	// (0x0003f55d) form_field_slider_wide_pane_t2_ParamLimits

0x0712,	// (0x0003f55d) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004e4d7) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004e4d7) form_field_slider_wide_pane_t

0x3a4e,	// (0x00042899) input_focus_pane_cp10_ParamLimits

0x3a4e,	// (0x00042899) input_focus_pane_cp10

0xbc5c,	// (0x0004aaa7) slider_cont_pane_cp1_ParamLimits

0xbc5c,	// (0x0004aaa7) slider_cont_pane_cp1

0xbc70,	// (0x0004aabb) slider_form_pane_cp

0x40c0,	// (0x00042f0b) input_focus_pane_g1

0x40c8,	// (0x00042f13) input_focus_pane_g2

0x40d0,	// (0x00042f1b) input_focus_pane_g3

0x40d8,	// (0x00042f23) input_focus_pane_g4

0x40e0,	// (0x00042f2b) input_focus_pane_g5

0x40e8,	// (0x00042f33) input_focus_pane_g6

0x40f0,	// (0x00042f3b) input_focus_pane_g7

0x40f8,	// (0x00042f43) input_focus_pane_g8

0x4100,	// (0x00042f4b) input_focus_pane_g9

0x36e9,	// (0x00042534) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004e4dc) input_focus_pane_g

0x5b6e,	// (0x000449b9) wait_border_pane_g3_copy1

0xbc78,	// (0x0004aac3) data_form_pane_t1

0x36e9,	// (0x00042534) wait_anim_pane_g1_copy1

0xbd94,	// (0x0004abdf) data_form_wide_pane_t1

0xbc91,	// (0x0004aadc) list_form_graphic_pane_cp_ParamLimits

0xbc91,	// (0x0004aadc) list_form_graphic_pane_cp

0x6a83,	// (0x000458ce) slider_form_pane_g1

0x6a8c,	// (0x000458d7) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0004e7da) slider_form_pane_g

0xbca2,	// (0x0004aaed) list_form_graphic_pane_ParamLimits

0xbca2,	// (0x0004aaed) list_form_graphic_pane

0x0790,	// (0x0003f5db) list_form_graphic_pane_g1

0x0798,	// (0x0003f5e3) list_form_graphic_pane_t1_ParamLimits

0x0798,	// (0x0003f5e3) list_form_graphic_pane_t1

0x37d3,	// (0x0004261e) list_highlight_pane_cp5_ParamLimits

0x37d3,	// (0x0004261e) list_highlight_pane_cp5

0xbcb4,	// (0x0004aaff) find_pane_g1

0x4108,	// (0x00042f53) input_find_pane

0xbcbd,	// (0x0004ab08) input_find_pane_g1_ParamLimits

0xbcbd,	// (0x0004ab08) input_find_pane_g1

0xbcc9,	// (0x0004ab14) input_find_pane_t1_ParamLimits

0xbcc9,	// (0x0004ab14) input_find_pane_t1

0xbcde,	// (0x0004ab29) input_find_pane_t2_ParamLimits

0xbcde,	// (0x0004ab29) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004e4f1) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004e4f1) input_find_pane_t

0x4111,	// (0x00042f5c) input_focus_pane_cp5_ParamLimits

0x4111,	// (0x00042f5c) input_focus_pane_cp5

0x412b,	// (0x00042f76) bg_popup_window_pane_cp2_ParamLimits

0x412b,	// (0x00042f76) bg_popup_window_pane_cp2

0x4138,	// (0x00042f83) listscroll_menu_pane_ParamLimits

0x4138,	// (0x00042f83) listscroll_menu_pane

0xd412,	// (0x0004c25d) popup_submenu_window_ParamLimits

0xd412,	// (0x0004c25d) popup_submenu_window

0x4170,	// (0x00042fbb) find_popup_pane_g1

0x4178,	// (0x00042fc3) input_popup_find_pane_cp

0x4111,	// (0x00042f5c) input_focus_pane_cp4_ParamLimits

0x4111,	// (0x00042f5c) input_focus_pane_cp4

0x418e,	// (0x00042fd9) input_popup_find_pane_t1_ParamLimits

0x418e,	// (0x00042fd9) input_popup_find_pane_t1

0x36f3,	// (0x0004253e) bg_popup_sub_pane_cp

0x41bc,	// (0x00043007) listscroll_popup_sub_pane

0x41c4,	// (0x0004300f) list_submenu_pane_ParamLimits

0x41c4,	// (0x0004300f) list_submenu_pane

0x41d5,	// (0x00043020) scroll_pane_cp4

0x41dd,	// (0x00043028) list_single_popup_submenu_pane_ParamLimits

0x41dd,	// (0x00043028) list_single_popup_submenu_pane

0x41f1,	// (0x0004303c) list_single_popup_submenu_pane_g1

0x41f9,	// (0x00043044) list_single_popup_submenu_pane_t1_ParamLimits

0x41f9,	// (0x00043044) list_single_popup_submenu_pane_t1

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp1_ParamLimits

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp1

0x420e,	// (0x00043059) tabs_2_active_pane_g1

0xd44c,	// (0x0004c297) tabs_2_active_pane_t1

0x3a4e,	// (0x00042899) bg_passive_tab_pane_cp1_ParamLimits

0x3a4e,	// (0x00042899) bg_passive_tab_pane_cp1

0x420e,	// (0x00043059) tabs_2_passive_pane_g1

0xd44c,	// (0x0004c297) tabs_2_passive_pane_t1

0x37d3,	// (0x0004261e) bg_active_tab_pane_cp4

0xd45e,	// (0x0004c2a9) tabs_2_long_active_pane_t1

0x5021,	// (0x00043e6c) bg_passive_tab_pane_cp4

0x1880,	// (0x000406cb) list_single_midp_graphic_pane_g4_ParamLimits

0x37d3,	// (0x0004261e) bg_active_tab_pane_cp5

0xd471,	// (0x0004c2bc) tabs_3_long_active_pane_t1

0x5021,	// (0x00043e6c) bg_passive_tab_pane_cp5

0x1880,	// (0x000406cb) list_single_midp_graphic_pane_g4

0x37d3,	// (0x0004261e) bg_popup_window_pane_cp13_ParamLimits

0x37d3,	// (0x0004261e) bg_popup_window_pane_cp13

0x4270,	// (0x000430bb) listscroll_popup_fast_pane_ParamLimits

0x4270,	// (0x000430bb) listscroll_popup_fast_pane

0x427f,	// (0x000430ca) grid_popup_fast_pane_ParamLimits

0x427f,	// (0x000430ca) grid_popup_fast_pane

0x4291,	// (0x000430dc) scroll_pane_cp9_ParamLimits

0x4291,	// (0x000430dc) scroll_pane_cp9

0x832d,	// (0x00047178) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x832d,	// (0x00047178) list_single_graphic_hl_pane_t1_cp2

0x42b5,	// (0x00043100) input_focus_pane_cp20_ParamLimits

0x42b5,	// (0x00043100) input_focus_pane_cp20

0x42c3,	// (0x0004310e) query_popup_data_pane_t1_ParamLimits

0x42c3,	// (0x0004310e) query_popup_data_pane_t1

0x42d6,	// (0x00043121) query_popup_data_pane_t2_ParamLimits

0x42d6,	// (0x00043121) query_popup_data_pane_t2

0x431c,	// (0x00043167) query_popup_data_pane_t3_ParamLimits

0x431c,	// (0x00043167) query_popup_data_pane_t3

0x435d,	// (0x000431a8) query_popup_data_pane_t4_ParamLimits

0x435d,	// (0x000431a8) query_popup_data_pane_t4

0x4399,	// (0x000431e4) query_popup_data_pane_t5_ParamLimits

0x4399,	// (0x000431e4) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004e4f6) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004e4f6) query_popup_data_pane_t

0x40c0,	// (0x00042f0b) bg_set_opt_pane_g1

0x40c8,	// (0x00042f13) bg_set_opt_pane_g2

0x40d0,	// (0x00042f1b) bg_set_opt_pane_g3

0x40d8,	// (0x00042f23) bg_set_opt_pane_g4

0x40e0,	// (0x00042f2b) bg_set_opt_pane_g5

0x40e8,	// (0x00042f33) bg_set_opt_pane_g6

0x40f0,	// (0x00042f3b) bg_set_opt_pane_g7

0x40f8,	// (0x00042f43) bg_set_opt_pane_g8

0x4100,	// (0x00042f4b) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004e501) bg_set_opt_pane_g

0x188c,	// (0x000406d7) control_top_pane_stacon_ParamLimits

0x188c,	// (0x000406d7) control_top_pane_stacon

0x18df,	// (0x0004072a) signal_pane_stacon_ParamLimits

0x18df,	// (0x0004072a) signal_pane_stacon

0x498b,	// (0x000437d6) stacon_top_pane_g1_ParamLimits

0x498b,	// (0x000437d6) stacon_top_pane_g1

0x1904,	// (0x0004074f) title_pane_stacon_ParamLimits

0x1904,	// (0x0004074f) title_pane_stacon

0x192e,	// (0x00040779) uni_indicator_pane_stacon_ParamLimits

0x192e,	// (0x00040779) uni_indicator_pane_stacon

0x1943,	// (0x0004078e) battery_pane_stacon_ParamLimits

0x1943,	// (0x0004078e) battery_pane_stacon

0x1987,	// (0x000407d2) control_bottom_pane_stacon_ParamLimits

0x1987,	// (0x000407d2) control_bottom_pane_stacon

0x19aa,	// (0x000407f5) navi_pane_stacon_ParamLimits

0x19aa,	// (0x000407f5) navi_pane_stacon

0x49ad,	// (0x000437f8) stacon_bottom_pane_g1_ParamLimits

0x49ad,	// (0x000437f8) stacon_bottom_pane_g1

0x15d3,	// (0x0004041e) aid_levels_signal_lsc_ParamLimits

0x15d3,	// (0x0004041e) aid_levels_signal_lsc

0x15e9,	// (0x00040434) signal_pane_stacon_g1_ParamLimits

0x15e9,	// (0x00040434) signal_pane_stacon_g1

0x15fd,	// (0x00040448) signal_pane_stacon_g2_ParamLimits

0x15fd,	// (0x00040448) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004e514) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004e514) signal_pane_stacon_g

0x1632,	// (0x0004047d) title_pane_stacon_t1_ParamLimits

0x1632,	// (0x0004047d) title_pane_stacon_t1

0x43dd,	// (0x00043228) uni_indicator_pane_stacon_g1

0x43e7,	// (0x00043232) uni_indicator_pane_stacon_g2

0x43f1,	// (0x0004323c) uni_indicator_pane_stacon_g3

0x43fb,	// (0x00043246) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004e520) uni_indicator_pane_stacon_g

0x1657,	// (0x000404a2) control_top_pane_stacon_g1

0x165f,	// (0x000404aa) control_top_pane_stacon_t1_ParamLimits

0x165f,	// (0x000404aa) control_top_pane_stacon_t1

0x1696,	// (0x000404e1) aid_levels_battery_lsc_ParamLimits

0x1696,	// (0x000404e1) aid_levels_battery_lsc

0x16ad,	// (0x000404f8) battery_pane_stacon_g1_ParamLimits

0x16ad,	// (0x000404f8) battery_pane_stacon_g1

0x16c0,	// (0x0004050b) battery_pane_stacon_g2_ParamLimits

0x16c0,	// (0x0004050b) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0004e529) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0004e529) battery_pane_stacon_g

0x16fe,	// (0x00040549) navi_icon_pane_stacon

0x1712,	// (0x0004055d) navi_navi_pane_stacon

0x16fe,	// (0x00040549) navi_text_pane_stacon

0x1657,	// (0x000404a2) control_bottom_pane_stacon_g1

0x1726,	// (0x00040571) control_bottom_pane_stacon_t1_ParamLimits

0x1726,	// (0x00040571) control_bottom_pane_stacon_t1

0xd483,	// (0x0004c2ce) grid_app_pane_ParamLimits

0xd483,	// (0x0004c2ce) grid_app_pane

0xd4bb,	// (0x0004c306) scroll_pane_cp15_ParamLimits

0xd4bb,	// (0x0004c306) scroll_pane_cp15

0xd4d0,	// (0x0004c31b) cell_app_pane_ParamLimits

0xd4d0,	// (0x0004c31b) cell_app_pane

0xd515,	// (0x0004c360) cell_app_pane_g1_ParamLimits

0xd515,	// (0x0004c360) cell_app_pane_g1

0x44a0,	// (0x000432eb) cell_app_pane_g2_ParamLimits

0x44a0,	// (0x000432eb) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004e52e) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004e52e) cell_app_pane_g

0xd539,	// (0x0004c384) cell_app_pane_t1_ParamLimits

0xd539,	// (0x0004c384) cell_app_pane_t1

0x44c3,	// (0x0004330e) grid_highlight_pane_ParamLimits

0x44c3,	// (0x0004330e) grid_highlight_pane

0x40c0,	// (0x00042f0b) cell_highlight_pane_g1

0x40c8,	// (0x00042f13) cell_highlight_pane_g2

0x40d0,	// (0x00042f1b) cell_highlight_pane_g3

0x40d8,	// (0x00042f23) cell_highlight_pane_g4

0x40e0,	// (0x00042f2b) cell_highlight_pane_g5

0x40e8,	// (0x00042f33) cell_highlight_pane_g6

0x40f0,	// (0x00042f3b) cell_highlight_pane_g7

0x40f8,	// (0x00042f43) cell_highlight_pane_g8

0x4100,	// (0x00042f4b) cell_highlight_pane_g9

0x36e9,	// (0x00042534) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004e4dc) cell_highlight_pane_g

0x44d4,	// (0x0004331f) bg_scroll_pane

0x1770,	// (0x000405bb) scroll_handle_pane

0x451b,	// (0x00043366) scroll_bg_pane_g1

0x4530,	// (0x0004337b) scroll_bg_pane_g2

0x4548,	// (0x00043393) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004e533) scroll_bg_pane_g

0x455d,	// (0x000433a8) scroll_handle_focus_pane_ParamLimits

0x455d,	// (0x000433a8) scroll_handle_focus_pane

0x451b,	// (0x00043366) scroll_handle_pane_g1

0x456a,	// (0x000433b5) scroll_handle_pane_g2

0x4548,	// (0x00043393) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0004e53a) scroll_handle_pane_g

0x4111,	// (0x00042f5c) bg_popup_sub_pane_cp21_ParamLimits

0x4111,	// (0x00042f5c) bg_popup_sub_pane_cp21

0x457e,	// (0x000433c9) popup_fep_japan_predictive_window_t1_ParamLimits

0x457e,	// (0x000433c9) popup_fep_japan_predictive_window_t1

0x4598,	// (0x000433e3) popup_fep_japan_predictive_window_t2_ParamLimits

0x4598,	// (0x000433e3) popup_fep_japan_predictive_window_t2

0x45cb,	// (0x00043416) popup_fep_japan_predictive_window_t3_ParamLimits

0x45cb,	// (0x00043416) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004e541) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004e541) popup_fep_japan_predictive_window_t

0x36f3,	// (0x0004253e) bg_popup_sub_pane_cp23

0x4602,	// (0x0004344d) listscroll_japin_cand_pane

0x460a,	// (0x00043455) popup_fep_japan_candidate_window_t1

0x4618,	// (0x00043463) candidate_pane_ParamLimits

0x4618,	// (0x00043463) candidate_pane

0x462a,	// (0x00043475) scroll_pane_cp30

0x4632,	// (0x0004347d) list_single_popup_jap_candidate_pane_ParamLimits

0x4632,	// (0x0004347d) list_single_popup_jap_candidate_pane

0x36f3,	// (0x0004253e) list_highlight_pane_cp30

0x4647,	// (0x00043492) list_single_popup_jap_candidate_pane_t1

0x4656,	// (0x000434a1) level_1_signal

0x4668,	// (0x000434b3) level_2_signal

0x467b,	// (0x000434c6) level_3_signal

0x468e,	// (0x000434d9) level_4_signal

0x46a1,	// (0x000434ec) level_5_signal

0x46b4,	// (0x000434ff) level_6_signal

0x46c7,	// (0x00043512) level_7_signal

0x4656,	// (0x000434a1) level_1_battery

0x4668,	// (0x000434b3) level_2_battery

0x467b,	// (0x000434c6) level_3_battery

0x468e,	// (0x000434d9) level_4_battery

0x46a1,	// (0x000434ec) level_5_battery

0x46b4,	// (0x000434ff) level_6_battery

0x46c7,	// (0x00043512) level_7_battery

0x46f2,	// (0x0004353d) list_menu_pane_ParamLimits

0x46f2,	// (0x0004353d) list_menu_pane

0x4708,	// (0x00043553) scroll_pane_cp25_ParamLimits

0x4708,	// (0x00043553) scroll_pane_cp25

0x4721,	// (0x0004356c) list_double2_graphic_pane_cp2_ParamLimits

0x4721,	// (0x0004356c) list_double2_graphic_pane_cp2

0x4721,	// (0x0004356c) list_double2_large_graphic_pane_cp2_ParamLimits

0x4721,	// (0x0004356c) list_double2_large_graphic_pane_cp2

0x4721,	// (0x0004356c) list_double2_pane_cp2_ParamLimits

0x4721,	// (0x0004356c) list_double2_pane_cp2

0x4721,	// (0x0004356c) list_double_graphic_pane_cp2_ParamLimits

0x4721,	// (0x0004356c) list_double_graphic_pane_cp2

0x4721,	// (0x0004356c) list_double_large_graphic_pane_cp2_ParamLimits

0x4721,	// (0x0004356c) list_double_large_graphic_pane_cp2

0x4721,	// (0x0004356c) list_double_number_pane_cp2_ParamLimits

0x4721,	// (0x0004356c) list_double_number_pane_cp2

0x4721,	// (0x0004356c) list_double_pane_cp2_ParamLimits

0x4721,	// (0x0004356c) list_double_pane_cp2

0xd550,	// (0x0004c39b) list_single_2graphic_pane_cp2_ParamLimits

0xd550,	// (0x0004c39b) list_single_2graphic_pane_cp2

0xd550,	// (0x0004c39b) list_single_graphic_heading_pane_cp2_ParamLimits

0xd550,	// (0x0004c39b) list_single_graphic_heading_pane_cp2

0xd550,	// (0x0004c39b) list_single_graphic_pane_cp2_ParamLimits

0xd550,	// (0x0004c39b) list_single_graphic_pane_cp2

0xd550,	// (0x0004c39b) list_single_heading_pane_cp2_ParamLimits

0xd550,	// (0x0004c39b) list_single_heading_pane_cp2

0x475e,	// (0x000435a9) list_single_large_graphic_pane_cp2_ParamLimits

0x475e,	// (0x000435a9) list_single_large_graphic_pane_cp2

0xd550,	// (0x0004c39b) list_single_number_heading_pane_cp2_ParamLimits

0xd550,	// (0x0004c39b) list_single_number_heading_pane_cp2

0xd550,	// (0x0004c39b) list_single_number_pane_cp2_ParamLimits

0xd550,	// (0x0004c39b) list_single_number_pane_cp2

0xd550,	// (0x0004c39b) list_single_pane_cp2_ParamLimits

0xd550,	// (0x0004c39b) list_single_pane_cp2

0x47da,	// (0x00043625) bg_popup_sub_pane_cp22

0x1822,	// (0x0004066d) popup_side_volume_key_window_g1

0x184c,	// (0x00040697) popup_side_volume_key_window_t1

0x1868,	// (0x000406b3) volume_small_pane_cp1

0x3a4e,	// (0x00042899) bg_popup_sub_pane_cp24_ParamLimits

0x3a4e,	// (0x00042899) bg_popup_sub_pane_cp24

0x47f0,	// (0x0004363b) fep_china_uni_candidate_pane_ParamLimits

0x47f0,	// (0x0004363b) fep_china_uni_candidate_pane

0x4804,	// (0x0004364f) fep_china_uni_entry_pane

0x4814,	// (0x0004365f) popup_fep_china_uni_window_g1

0x4830,	// (0x0004367b) fep_china_uni_entry_pane_g1

0x4838,	// (0x00043683) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0004e572) fep_china_uni_entry_pane_g

0x4840,	// (0x0004368b) fep_entry_item_pane

0x484a,	// (0x00043695) fep_candidate_item_pane

0x4852,	// (0x0004369d) fep_china_uni_candidate_pane_g1

0x485a,	// (0x000436a5) fep_china_uni_candidate_pane_g2

0x4862,	// (0x000436ad) fep_china_uni_candidate_pane_g3

0x486a,	// (0x000436b5) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0004e577) fep_china_uni_candidate_pane_g

0x36e9,	// (0x00042534) fep_entry_item_pane_g1

0x4872,	// (0x000436bd) fep_entry_item_pane_t1_ParamLimits

0x4872,	// (0x000436bd) fep_entry_item_pane_t1

0x4888,	// (0x000436d3) fep_candidate_item_pane_t1_ParamLimits

0x4888,	// (0x000436d3) fep_candidate_item_pane_t1

0x489d,	// (0x000436e8) fep_candidate_item_pane_t2_ParamLimits

0x489d,	// (0x000436e8) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0004e580) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0004e580) fep_candidate_item_pane_t

0x37d3,	// (0x0004261e) list_highlight_pane_cp31_ParamLimits

0x37d3,	// (0x0004261e) list_highlight_pane_cp31

0x48af,	// (0x000436fa) level_1_signal_lsc

0x48b8,	// (0x00043703) level_2_signal_lsc

0x48c1,	// (0x0004370c) level_3_signal_lsc

0x48ca,	// (0x00043715) level_4_signal_lsc

0x48d3,	// (0x0004371e) level_5_signal_lsc

0x48dc,	// (0x00043727) level_6_signal_lsc

0x48e5,	// (0x00043730) level_7_signal_lsc

0x48e5,	// (0x00043730) level_1_battery_lsc

0x48ee,	// (0x00043739) level_2_battery_lsc

0x48f7,	// (0x00043742) level_3_battery_lsc

0x4900,	// (0x0004374b) level_4_battery_lsc

0x4909,	// (0x00043754) level_5_battery_lsc

0x4912,	// (0x0004375d) level_6_battery_lsc

0x48af,	// (0x000436fa) level_7_battery_lsc

0x491b,	// (0x00043766) scroll_handle_focus_pane_g1

0x4924,	// (0x0004376f) scroll_handle_focus_pane_g2

0x492d,	// (0x00043778) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0004e585) scroll_handle_focus_pane_g

0xbcf3,	// (0x0004ab3e) list_single_2graphic_pane_g1_ParamLimits

0xbcf3,	// (0x0004ab3e) list_single_2graphic_pane_g1

0xc12d,	// (0x0004af78) list_single_2graphic_pane_g2_ParamLimits

0xc12d,	// (0x0004af78) list_single_2graphic_pane_g2

0x21d5,	// (0x00041020) list_single_2graphic_pane_g3_ParamLimits

0x21d5,	// (0x00041020) list_single_2graphic_pane_g3

0xbcff,	// (0x0004ab4a) list_single_2graphic_pane_g4_ParamLimits

0xbcff,	// (0x0004ab4a) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0004e58c) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0004e58c) list_single_2graphic_pane_g

0xbd0b,	// (0x0004ab56) list_single_2graphic_pane_t1_ParamLimits

0xbd0b,	// (0x0004ab56) list_single_2graphic_pane_t1

0xc16b,	// (0x0004afb6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc16b,	// (0x0004afb6) list_double2_graphic_large_graphic_pane_g1

0xb979,	// (0x0004a7c4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb979,	// (0x0004a7c4) list_double2_graphic_large_graphic_pane_g2

0xc156,	// (0x0004afa1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc156,	// (0x0004afa1) list_double2_graphic_large_graphic_pane_g3

0xbd39,	// (0x0004ab84) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbd39,	// (0x0004ab84) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0004e595) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0004e595) list_double2_graphic_large_graphic_pane_g

0xbd45,	// (0x0004ab90) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd45,	// (0x0004ab90) list_double2_graphic_large_graphic_pane_t1

0xbd5b,	// (0x0004aba6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd5b,	// (0x0004aba6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0004e59e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0004e59e) list_double2_graphic_large_graphic_pane_t

0x4a75,	// (0x000438c0) popup_fast_swap_window_ParamLimits

0x4a75,	// (0x000438c0) popup_fast_swap_window

0x4a91,	// (0x000438dc) popup_side_volume_key_window

0x4aad,	// (0x000438f8) stacon_top_pane

0x4ab7,	// (0x00043902) status_pane_ParamLimits

0x4ab7,	// (0x00043902) status_pane

0xd5dd,	// (0x0004c428) status_small_pane

0x36f3,	// (0x0004253e) control_pane

0x36f3,	// (0x0004253e) stacon_bottom_pane

0x4057,	// (0x00042ea2) scroll_pane_cp121

0x404e,	// (0x00042e99) set_content_pane

0x4948,	// (0x00043793) bg_active_tab_pane_g1_cp1

0x4936,	// (0x00043781) bg_active_tab_pane_g2_cp1

0x493f,	// (0x0004378a) bg_active_tab_pane_g3_cp1

0x4948,	// (0x00043793) bg_passive_tab_pane_g1_cp1

0x4936,	// (0x00043781) bg_passive_tab_pane_g2_cp1

0x493f,	// (0x0004378a) bg_passive_tab_pane_g3_cp1

0x4951,	// (0x0004379c) bg_active_tab_pane_g1_cp2

0x4936,	// (0x00043781) bg_active_tab_pane_g2_cp2

0x495a,	// (0x000437a5) bg_active_tab_pane_g3_cp2

0x4951,	// (0x0004379c) bg_passive_tab_pane_g1_cp2

0x4936,	// (0x00043781) bg_passive_tab_pane_g2_cp2

0x495a,	// (0x000437a5) bg_passive_tab_pane_g3_cp2

0x4963,	// (0x000437ae) bg_active_tab_pane_g1_cp3

0x4936,	// (0x00043781) bg_active_tab_pane_g2_cp3

0x496c,	// (0x000437b7) bg_active_tab_pane_g3_cp3

0x4963,	// (0x000437ae) bg_passive_tab_pane_g1_cp3

0x4936,	// (0x00043781) bg_passive_tab_pane_g2_cp3

0x496c,	// (0x000437b7) bg_passive_tab_pane_g3_cp3

0x4975,	// (0x000437c0) bg_active_tab_pane_g1_cp4

0x4936,	// (0x00043781) bg_active_tab_pane_g2_cp4

0x4980,	// (0x000437cb) bg_active_tab_pane_g3_cp4

0x4975,	// (0x000437c0) bg_passive_tab_pane_g1_cp4

0x4936,	// (0x00043781) bg_passive_tab_pane_g2_cp4

0x4980,	// (0x000437cb) bg_passive_tab_pane_g3_cp4

0x49c9,	// (0x00043814) bg_active_tab_pane_g1_cp5

0x4936,	// (0x00043781) bg_active_tab_pane_g2_cp5

0x49d2,	// (0x0004381d) bg_active_tab_pane_g3_cp5

0x49c9,	// (0x00043814) bg_passive_tab_pane_g1_cp5

0x4936,	// (0x00043781) bg_passive_tab_pane_g2_cp5

0x49d2,	// (0x0004381d) bg_passive_tab_pane_g3_cp5

0x702b,	// (0x00045e76) list_set_graphic_pane_ParamLimits

0x702b,	// (0x00045e76) list_set_graphic_pane

0x36f3,	// (0x0004253e) bg_set_opt_pane_cp4

0x49f8,	// (0x00043843) list_set_graphic_pane_g1_ParamLimits

0x49f8,	// (0x00043843) list_set_graphic_pane_g1

0x4a04,	// (0x0004384f) list_set_graphic_pane_g2_ParamLimits

0x4a04,	// (0x0004384f) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0004e5a3) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0004e5a3) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0004e90c) volume_small_pane_cp_g

0x4a28,	// (0x00043873) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4a28,	// (0x00043873) list_double2_large_graphic_pane_g1_cp2

0x4a34,	// (0x0004387f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a34,	// (0x0004387f) list_double2_large_graphic_pane_g2_cp2

0x4a45,	// (0x00043890) list_double2_large_graphic_pane_g3_cp2

0x4a4d,	// (0x00043898) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4a4d,	// (0x00043898) list_double2_large_graphic_pane_t1_cp2

0x4a63,	// (0x000438ae) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4a63,	// (0x000438ae) list_double2_large_graphic_pane_t2_cp2

0x6641,	// (0x0004548c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6641,	// (0x0004548c) list_double_large_graphic_pane_g1_cp2

0x6652,	// (0x0004549d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6652,	// (0x0004549d) list_double_large_graphic_pane_g2_cp2

0x4bde,	// (0x00043a29) list_double_large_graphic_pane_g3_cp2

0x6663,	// (0x000454ae) list_double_large_graphic_pane_g4_cp

0x666b,	// (0x000454b6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x666b,	// (0x000454b6) list_double_large_graphic_pane_t1_cp2

0x6682,	// (0x000454cd) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6682,	// (0x000454cd) list_double_large_graphic_pane_t2_cp2

0x4ad0,	// (0x0004391b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4ad0,	// (0x0004391b) list_double2_graphic_pane_g1_cp2

0x4ade,	// (0x00043929) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4ade,	// (0x00043929) list_double2_graphic_pane_g2_cp2

0x4aef,	// (0x0004393a) list_double2_graphic_pane_g3_cp2

0x4af9,	// (0x00043944) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4af9,	// (0x00043944) list_double2_graphic_pane_t1_cp2

0x4b0f,	// (0x0004395a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4b0f,	// (0x0004395a) list_double2_graphic_pane_t2_cp2

0x4b21,	// (0x0004396c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4b21,	// (0x0004396c) list_single_number_heading_pane_g1_cp2

0x4b2d,	// (0x00043978) list_single_number_heading_pane_g2_cp2

0x4b35,	// (0x00043980) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4b35,	// (0x00043980) list_single_number_heading_pane_t1_cp2

0x4b4b,	// (0x00043996) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4b4b,	// (0x00043996) list_single_number_heading_pane_t2_cp2

0x4b5d,	// (0x000439a8) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4b5d,	// (0x000439a8) list_single_number_heading_pane_t3_cp2

0x4b21,	// (0x0004396c) list_single_heading_pane_g1_cp2_ParamLimits

0x4b21,	// (0x0004396c) list_single_heading_pane_g1_cp2

0x4b2d,	// (0x00043978) list_single_heading_pane_g2_cp2

0x4b35,	// (0x00043980) list_single_heading_pane_t1_cp2_ParamLimits

0x4b35,	// (0x00043980) list_single_heading_pane_t1_cp2

0x6449,	// (0x00045294) list_single_heading_pane_t2_cp2_ParamLimits

0x6449,	// (0x00045294) list_single_heading_pane_t2_cp2

0x6391,	// (0x000451dc) list_double_graphic_pane_g1_cp2_ParamLimits

0x6391,	// (0x000451dc) list_double_graphic_pane_g1_cp2

0x639d,	// (0x000451e8) list_double_graphic_pane_g2_cp2_ParamLimits

0x639d,	// (0x000451e8) list_double_graphic_pane_g2_cp2

0x63ac,	// (0x000451f7) list_double_graphic_pane_g3_cp2

0x63b4,	// (0x000451ff) list_double_graphic_pane_t1_cp2_ParamLimits

0x63b4,	// (0x000451ff) list_double_graphic_pane_t1_cp2

0x63ca,	// (0x00045215) list_double_graphic_pane_t2_cp2_ParamLimits

0x63ca,	// (0x00045215) list_double_graphic_pane_t2_cp2

0x4bd2,	// (0x00043a1d) list_double_number_pane_g1_cp2_ParamLimits

0x4bd2,	// (0x00043a1d) list_double_number_pane_g1_cp2

0x4bde,	// (0x00043a29) list_double_number_pane_g2_cp2

0x6355,	// (0x000451a0) list_double_number_pane_t1_cp2_ParamLimits

0x6355,	// (0x000451a0) list_double_number_pane_t1_cp2

0x6369,	// (0x000451b4) list_double_number_pane_t2_cp2_ParamLimits

0x6369,	// (0x000451b4) list_double_number_pane_t2_cp2

0x637f,	// (0x000451ca) list_double_number_pane_t3_cp2_ParamLimits

0x637f,	// (0x000451ca) list_double_number_pane_t3_cp2

0x623e,	// (0x00045089) list_single_graphic_pane_g1_cp2_ParamLimits

0x623e,	// (0x00045089) list_single_graphic_pane_g1_cp2

0x4c36,	// (0x00043a81) list_single_graphic_pane_g2_cp2_ParamLimits

0x4c36,	// (0x00043a81) list_single_graphic_pane_g2_cp2

0x4c42,	// (0x00043a8d) list_single_graphic_pane_g3_cp2

0x6214,	// (0x0004505f) list_single_graphic_pane_t1_cp2_ParamLimits

0x6214,	// (0x0004505f) list_single_graphic_pane_t1_cp2

0x4c36,	// (0x00043a81) list_single_number_pane_g1_cp2_ParamLimits

0x4c36,	// (0x00043a81) list_single_number_pane_g1_cp2

0x4c42,	// (0x00043a8d) list_single_number_pane_g2_cp2

0x6214,	// (0x0004505f) list_single_number_pane_t1_cp2_ParamLimits

0x6214,	// (0x0004505f) list_single_number_pane_t1_cp2

0x622a,	// (0x00045075) list_single_number_pane_t2_cp2_ParamLimits

0x622a,	// (0x00045075) list_single_number_pane_t2_cp2

0x4a34,	// (0x0004387f) list_double2_pane_g1_cp2_ParamLimits

0x4a34,	// (0x0004387f) list_double2_pane_g1_cp2

0x4a45,	// (0x00043890) list_double2_pane_g2_cp2

0x4baa,	// (0x000439f5) list_double2_pane_t1_cp2_ParamLimits

0x4baa,	// (0x000439f5) list_double2_pane_t1_cp2

0x4bc0,	// (0x00043a0b) list_double2_pane_t2_cp2_ParamLimits

0x4bc0,	// (0x00043a0b) list_double2_pane_t2_cp2

0x4bd2,	// (0x00043a1d) list_double_pane_g1_cp2_ParamLimits

0x4bd2,	// (0x00043a1d) list_double_pane_g1_cp2

0x4bde,	// (0x00043a29) list_double_pane_g2_cp2

0x4be6,	// (0x00043a31) list_double_pane_t1_cp2_ParamLimits

0x4be6,	// (0x00043a31) list_double_pane_t1_cp2

0x4bfc,	// (0x00043a47) list_double_pane_t2_cp2_ParamLimits

0x4bfc,	// (0x00043a47) list_double_pane_t2_cp2

0x4c26,	// (0x00043a71) list_single_pane_cp2_g3

0x4c36,	// (0x00043a81) list_single_pane_g1_cp2_ParamLimits

0x4c36,	// (0x00043a81) list_single_pane_g1_cp2

0x4c42,	// (0x00043a8d) list_single_pane_g2_cp2

0x4c4a,	// (0x00043a95) list_single_pane_t1_cp2_ParamLimits

0x4c4a,	// (0x00043a95) list_single_pane_t1_cp2

0x4c62,	// (0x00043aad) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4c62,	// (0x00043aad) list_single_large_graphic_pane_g1_cp2

0x4c6e,	// (0x00043ab9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4c6e,	// (0x00043ab9) list_single_large_graphic_pane_g2_cp2

0x4c7a,	// (0x00043ac5) list_single_large_graphic_pane_g3_cp2

0x4c82,	// (0x00043acd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4c82,	// (0x00043acd) list_single_large_graphic_pane_g4_cp1

0x4c9c,	// (0x00043ae7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4c9c,	// (0x00043ae7) list_single_large_graphic_pane_t1_cp2

0x61e0,	// (0x0004502b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x61e0,	// (0x0004502b) list_single_graphic_heading_pane_g1_cp2

0x61ad,	// (0x00044ff8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x61ad,	// (0x00044ff8) list_single_graphic_heading_pane_g4_cp2

0x4c42,	// (0x00043a8d) list_single_graphic_heading_pane_g5_cp2

0x61ec,	// (0x00045037) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x61ec,	// (0x00045037) list_single_graphic_heading_pane_t1_cp2

0x6202,	// (0x0004504d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6202,	// (0x0004504d) list_single_graphic_heading_pane_t2_cp2

0x61a1,	// (0x00044fec) list_single_2graphic_pane_g1_cp2_ParamLimits

0x61a1,	// (0x00044fec) list_single_2graphic_pane_g1_cp2

0x61ad,	// (0x00044ff8) list_single_2graphic_pane_g2_cp2_ParamLimits

0x61ad,	// (0x00044ff8) list_single_2graphic_pane_g2_cp2

0x4c42,	// (0x00043a8d) list_single_2graphic_pane_g3_cp2

0x61be,	// (0x00045009) list_single_2graphic_pane_g4_cp2_ParamLimits

0x61be,	// (0x00045009) list_single_2graphic_pane_g4_cp2

0x61ca,	// (0x00045015) list_single_2graphic_pane_t1_cp2_ParamLimits

0x61ca,	// (0x00045015) list_single_2graphic_pane_t1_cp2

0x36e9,	// (0x00042534) list_highlight_pane_g10_cp1

0x5d79,	// (0x00044bc4) list_highlight_pane_g1_cp1

0x5d81,	// (0x00044bcc) list_highlight_pane_g2_cp1

0x5d89,	// (0x00044bd4) list_highlight_pane_g3_cp1

0x5d91,	// (0x00044bdc) list_highlight_pane_g4_cp1

0x5d99,	// (0x00044be4) list_highlight_pane_g5_cp1

0x5da1,	// (0x00044bec) list_highlight_pane_g6_cp1

0x5da9,	// (0x00044bf4) list_highlight_pane_g7_cp1

0x5db1,	// (0x00044bfc) list_highlight_pane_g8_cp1

0x5db9,	// (0x00044c04) list_highlight_pane_g9_cp1

0xdc1d,	// (0x0004ca68) form_field_slider_pane_t3

0xdc2b,	// (0x0004ca76) form_field_slider_pane_t4

0x5cb5,	// (0x00044b00) slider_form_pane_ParamLimits

0x5cb5,	// (0x00044b00) slider_form_pane

0x36f3,	// (0x0004253e) control_abbreviations

0x36f3,	// (0x0004253e) control_conventions

0x36f3,	// (0x0004253e) control_definitions

0x36f3,	// (0x0004253e) format_table_attribute

0x6493,	// (0x000452de) bg_popup_preview_window_pane_g9

0x36f3,	// (0x0004253e) format_table_data2

0x36f3,	// (0x0004253e) format_table_data3

0x36f3,	// (0x0004253e) format_table_data_example

0x0008,

0x36f3,	// (0x0004253e) intro_purpose

0xf8ef,	// (0x0004e73a) bg_popup_preview_window_pane_g

0x36f3,	// (0x0004253e) texts_category

0x36f3,	// (0x0004253e) texts_graphics

0x4cb2,	// (0x00043afd) text_digital

0x4cc1,	// (0x00043b0c) text_primary

0x4cd0,	// (0x00043b1b) text_primary_small

0x4cdf,	// (0x00043b2a) text_secondary

0x4cee,	// (0x00043b39) text_title

0x6b6d,	// (0x000459b8) bg_passive_tab_pane_g1_cp3_srt

0x4936,	// (0x00043781) bg_passive_tab_pane_g2_cp3_srt

0x6b76,	// (0x000459c1) bg_passive_tab_pane_g3_cp3_srt

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp3_srt_ParamLimits

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp3_srt

0x6b7f,	// (0x000459ca) tabs_4_active_pane_srt_g1

0xdf5d,	// (0x0004cda8) tabs_4_active_pane_srt_t1_ParamLimits

0xdf5d,	// (0x0004cda8) tabs_4_active_pane_srt_t1

0x6b6d,	// (0x000459b8) bg_active_tab_pane_g1_cp3_copy1

0x4936,	// (0x00043781) bg_active_tab_pane_g2_cp3_copy1

0x6b76,	// (0x000459c1) bg_active_tab_pane_g3_cp3_copy1

0x37d3,	// (0x0004261e) tabs_2_long_active_pane_srt_ParamLimits

0x37d3,	// (0x0004261e) tabs_2_long_active_pane_srt

0x37d3,	// (0x0004261e) tabs_2_long_passive_pane_srt_ParamLimits

0x37d3,	// (0x0004261e) tabs_2_long_passive_pane_srt

0x5021,	// (0x00043e6c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5021,	// (0x00043e6c) bg_passive_tab_pane_cp4_srt

0x68b6,	// (0x00045701) bg_passive_tab_pane_g1_cp4_srt

0x4936,	// (0x00043781) bg_passive_tab_pane_g2_cp4_srt

0x68bf,	// (0x0004570a) bg_passive_tab_pane_g3_cp4_srt

0x37d3,	// (0x0004261e) bg_active_tab_pane_cp4_srt_ParamLimits

0x37d3,	// (0x0004261e) bg_active_tab_pane_cp4_srt

0xdd87,	// (0x0004cbd2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd87,	// (0x0004cbd2) tabs_2_long_active_pane_srt_t1

0x68b6,	// (0x00045701) bg_active_tab_pane_g1_cp4_srt

0x4936,	// (0x00043781) bg_active_tab_pane_g2_cp4_srt

0x68bf,	// (0x0004570a) bg_active_tab_pane_g3_cp4_srt

0x3a4e,	// (0x00042899) tabs_3_long_active_pane_srt_ParamLimits

0x3a4e,	// (0x00042899) tabs_3_long_active_pane_srt

0x3a4e,	// (0x00042899) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3a4e,	// (0x00042899) tabs_3_long_passive_pane_cp_srt

0x3a4e,	// (0x00042899) tabs_3_long_passive_pane_srt_ParamLimits

0x3a4e,	// (0x00042899) tabs_3_long_passive_pane_srt

0x5021,	// (0x00043e6c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5021,	// (0x00043e6c) bg_passive_tab_pane_cp5_srt

0x49c9,	// (0x00043814) bg_passive_tab_pane_g1_cp5_srt

0x4936,	// (0x00043781) bg_passive_tab_pane_g2_cp5_srt

0x49d2,	// (0x0004381d) bg_passive_tab_pane_g3_cp5_srt

0x37d3,	// (0x0004261e) bg_active_tab_pane_cp5_srt_ParamLimits

0x37d3,	// (0x0004261e) bg_active_tab_pane_cp5_srt

0xdd71,	// (0x0004cbbc) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd71,	// (0x0004cbbc) tabs_3_long_active_pane_srt_t1

0x49c9,	// (0x00043814) bg_active_tab_pane_g1_cp5_srt

0x4936,	// (0x00043781) bg_active_tab_pane_g2_cp5_srt

0x49d2,	// (0x0004381d) bg_active_tab_pane_g3_cp5_srt

0x6896,	// (0x000456e1) navi_text_pane_srt_t1

0x688e,	// (0x000456d9) navi_icon_pane_srt_g1

0x4ec3,	// (0x00043d0e) midp_editing_number_pane_srt

0x4cfd,	// (0x00043b48) midp_ticker_pane_srt

0x4ecb,	// (0x00043d16) midp_ticker_pane_srt_g1

0x4ed3,	// (0x00043d1e) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004e5c2) midp_ticker_pane_srt_g

0x4edb,	// (0x00043d26) midp_ticker_pane_srt_t1

0x687f,	// (0x000456ca) midp_editing_number_pane_t1_copy1

0xd5e8,	// (0x0004c433) listscroll_midp_pane

0xd5e8,	// (0x0004c433) midp_form_pane

0x4d75,	// (0x00043bc0) midp_info_popup_window_ParamLimits

0x4d75,	// (0x00043bc0) midp_info_popup_window

0x4111,	// (0x00042f5c) bg_popup_sub_pane_cp50_ParamLimits

0x4111,	// (0x00042f5c) bg_popup_sub_pane_cp50

0x59a5,	// (0x000447f0) listscroll_midp_info_pane_ParamLimits

0x59a5,	// (0x000447f0) listscroll_midp_info_pane

0x5985,	// (0x000447d0) listscroll_form_midp_pane_ParamLimits

0x5985,	// (0x000447d0) listscroll_form_midp_pane

0x5991,	// (0x000447dc) scroll_bar_cp050

0x5985,	// (0x000447d0) list_midp_pane

0x75b1,	// (0x000463fc) signal_pane_g2_cp

0x589f,	// (0x000446ea) listscroll_midp_info_pane_t1_ParamLimits

0x589f,	// (0x000446ea) listscroll_midp_info_pane_t1

0x58b7,	// (0x00044702) listscroll_midp_info_pane_t2_ParamLimits

0x58b7,	// (0x00044702) listscroll_midp_info_pane_t2

0x58f5,	// (0x00044740) listscroll_midp_info_pane_t3_ParamLimits

0x58f5,	// (0x00044740) listscroll_midp_info_pane_t3

0x592f,	// (0x0004477a) listscroll_midp_info_pane_t4_ParamLimits

0x592f,	// (0x0004477a) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0004e675) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0004e675) listscroll_midp_info_pane_t

0x41d5,	// (0x00043020) scroll_pane_cp21

0x583d,	// (0x00044688) form_midp_field_choice_group_pane

0x5846,	// (0x00044691) form_midp_field_text_pane

0x5885,	// (0x000446d0) form_midp_field_time_pane

0x588d,	// (0x000446d8) form_midp_gauge_slider_pane

0x5896,	// (0x000446e1) form_midp_gauge_wait_pane

0x36f3,	// (0x0004253e) form_midp_image_pane

0xbd6d,	// (0x0004abb8) list_single_midp_pane_ParamLimits

0xbd6d,	// (0x0004abb8) list_single_midp_pane

0xdbfc,	// (0x0004ca47) form_midp_field_text_pane_t1

0x55c5,	// (0x00044410) input_focus_pane_cp050

0x582c,	// (0x00044677) list_midp_form_text_pane

0x57c4,	// (0x0004460f) form_midp_field_choice_group_pane_t1

0x57d2,	// (0x0004461d) input_focus_pane_cp051

0x57e6,	// (0x00044631) list_midp_choice_pane

0x36f3,	// (0x0004253e) status_idle_pane

0x57a8,	// (0x000445f3) form_midp_field_time_pane_t1

0x36e9,	// (0x00042534) wait_anim_pane_g2_copy1

0x57b6,	// (0x00044601) form_midp_field_time_pane_t2

0x0001,

0x4e23,	// (0x00043c6e) aid_navinavi_width_2_pane

0xf825,	// (0x0004e670) form_midp_field_time_pane_t

0x36f3,	// (0x0004253e) input_focus_pane_cp052

0x36f3,	// (0x0004253e) bg_input_focus_pane_cp040

0x5768,	// (0x000445b3) form_midp_gauge_slider_pane_t1

0x5776,	// (0x000445c1) form_midp_gauge_slider_pane_t2

0xdbe0,	// (0x0004ca2b) form_midp_gauge_slider_pane_t3

0xdbee,	// (0x0004ca39) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0004e667) form_midp_gauge_slider_pane_t

0x57a0,	// (0x000445eb) form_midp_slider_pane

0x37d3,	// (0x0004261e) bg_input_focus_pane_cp041_ParamLimits

0x37d3,	// (0x0004261e) bg_input_focus_pane_cp041

0x5735,	// (0x00044580) form_midp_gauge_wait_pane_t1_ParamLimits

0x5735,	// (0x00044580) form_midp_gauge_wait_pane_t1

0x5747,	// (0x00044592) form_midp_gauge_wait_pane_t2_ParamLimits

0x5747,	// (0x00044592) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0004e662) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0004e662) form_midp_gauge_wait_pane_t

0x5759,	// (0x000445a4) form_midp_wait_pane_ParamLimits

0x5759,	// (0x000445a4) form_midp_wait_pane

0x56ff,	// (0x0004454a) form_midp_image_pane_g1

0x5708,	// (0x00044553) form_midp_image_pane_t1

0x5717,	// (0x00044562) form_midp_image_pane_t2

0x5726,	// (0x00044571) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0004e65b) form_midp_image_pane_t

0x56f6,	// (0x00044541) list_single_midp_pane_g1

0x098c,	// (0x0003f7d7) list_single_midp_pane_t1

0xdbcc,	// (0x0004ca17) list_midp_form_item_pane_ParamLimits

0xdbcc,	// (0x0004ca17) list_midp_form_item_pane

0x4dcb,	// (0x00043c16) list_midp_form_item_pane_t1

0x4dda,	// (0x00043c25) midp_ticker_pane_g1

0x4de6,	// (0x00043c31) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0004e5a8) midp_ticker_pane_g

0x4df2,	// (0x00043c3d) midp_ticker_pane_t1

0x6ad0,	// (0x0004591b) midp_editing_number_pane_t1

0x6aae,	// (0x000458f9) midp_editing_number_pane

0x6abd,	// (0x00045908) midp_ticker_pane

0x686f,	// (0x000456ba) ai_message_heading_pane

0x36f3,	// (0x0004253e) bg_popup_window_pane_cp14

0x6877,	// (0x000456c2) listscroll_ai_message_pane

0x67f9,	// (0x00045644) ai_message_heading_pane_g1_ParamLimits

0x67f9,	// (0x00045644) ai_message_heading_pane_g1

0x6805,	// (0x00045650) ai_message_heading_pane_g2_ParamLimits

0x6805,	// (0x00045650) ai_message_heading_pane_g2

0x6811,	// (0x0004565c) ai_message_heading_pane_g3_ParamLimits

0x6811,	// (0x0004565c) ai_message_heading_pane_g3

0x681d,	// (0x00045668) ai_message_heading_pane_g4_ParamLimits

0x681d,	// (0x00045668) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0004e79c) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0004e79c) ai_message_heading_pane_g

0x6829,	// (0x00045674) ai_message_heading_pane_t1_ParamLimits

0x6829,	// (0x00045674) ai_message_heading_pane_t1

0x6843,	// (0x0004568e) ai_message_heading_pane_t2_ParamLimits

0x6843,	// (0x0004568e) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0004e7a5) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0004e7a5) ai_message_heading_pane_t

0x6855,	// (0x000456a0) bg_popup_heading_pane_cp1_ParamLimits

0x6855,	// (0x000456a0) bg_popup_heading_pane_cp1

0x67e7,	// (0x00045632) list_ai_message_pane_ParamLimits

0x67e7,	// (0x00045632) list_ai_message_pane

0x41d5,	// (0x00043020) scroll_pane_cp10

0x6783,	// (0x000455ce) list_ai_message_pane_g1

0x678b,	// (0x000455d6) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0004e779) list_ai_message_pane_g

0x6793,	// (0x000455de) list_ai_message_pane_t1_ParamLimits

0x6793,	// (0x000455de) list_ai_message_pane_t1

0x67a8,	// (0x000455f3) list_ai_message_pane_t2_ParamLimits

0x67a8,	// (0x000455f3) list_ai_message_pane_t2

0x67bd,	// (0x00045608) list_ai_message_pane_t3_ParamLimits

0x67bd,	// (0x00045608) list_ai_message_pane_t3

0x67d2,	// (0x0004561d) list_ai_message_pane_t4_ParamLimits

0x67d2,	// (0x0004561d) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0004e77e) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0004e77e) list_ai_message_pane_t

0xdd50,	// (0x0004cb9b) cell_ai_soft_ind_pane_ParamLimits

0xdd50,	// (0x0004cb9b) cell_ai_soft_ind_pane

0x4e04,	// (0x00043c4f) cell_ai_soft_ind_pane_g1_ParamLimits

0x4e04,	// (0x00043c4f) cell_ai_soft_ind_pane_g1

0x36f3,	// (0x0004253e) grid_highlight_cp1

0x4e11,	// (0x00043c5c) text_secondary_cp56_ParamLimits

0x4e11,	// (0x00043c5c) text_secondary_cp56

0x6743,	// (0x0004558e) example_general_pane_ParamLimits

0x6743,	// (0x0004558e) example_general_pane

0x674f,	// (0x0004559a) example_parent_pane_g1_ParamLimits

0x674f,	// (0x0004559a) example_parent_pane_g1

0x675b,	// (0x000455a6) example_parent_pane_t1_ParamLimits

0x675b,	// (0x000455a6) example_parent_pane_t1

0xc6d0,	// (0x0004b51b) popup_preview_text_window_ParamLimits

0xc6d0,	// (0x0004b51b) popup_preview_text_window

0x4c2e,	// (0x00043a79) list_single_pane_cp2_g4

0x3b2a,	// (0x00042975) bg_popup_preview_window_pane_ParamLimits

0x3b2a,	// (0x00042975) bg_popup_preview_window_pane

0x649b,	// (0x000452e6) popup_preview_text_window_t1_ParamLimits

0x649b,	// (0x000452e6) popup_preview_text_window_t1

0x64b9,	// (0x00045304) popup_preview_text_window_t2_ParamLimits

0x64b9,	// (0x00045304) popup_preview_text_window_t2

0x6502,	// (0x0004534d) popup_preview_text_window_t3_ParamLimits

0x6502,	// (0x0004534d) popup_preview_text_window_t3

0x6547,	// (0x00045392) popup_preview_text_window_t4_ParamLimits

0x6547,	// (0x00045392) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0004e74d) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0004e74d) popup_preview_text_window_t

0x65c5,	// (0x00045410) scroll_pane_cp11

0x5551,	// (0x0004439c) bg_popup_preview_window_pane_g1

0x645b,	// (0x000452a6) bg_popup_preview_window_pane_g2

0x6463,	// (0x000452ae) bg_popup_preview_window_pane_g3

0x646b,	// (0x000452b6) bg_popup_preview_window_pane_g4

0x6473,	// (0x000452be) bg_popup_preview_window_pane_g5

0x647b,	// (0x000452c6) bg_popup_preview_window_pane_g6

0x6483,	// (0x000452ce) bg_popup_preview_window_pane_g7

0x648b,	// (0x000452d6) bg_popup_preview_window_pane_g8

0x10b3,	// (0x0003fefe) aid_popup_width_pane

0xc64c,	// (0x0004b497) popup_midp_note_alarm_window_ParamLimits

0xc64c,	// (0x0004b497) popup_midp_note_alarm_window

0x4068,	// (0x00042eb3) data_form_pane_ParamLimits

0xbbd5,	// (0x0004aa20) form_field_data_pane_g1

0xbbdf,	// (0x0004aa2a) form_field_data_pane_t1_ParamLimits

0x4074,	// (0x00042ebf) input_focus_pane_ParamLimits

0x0657,	// (0x0003f4a2) data_form_wide_pane_ParamLimits

0x0668,	// (0x0003f4b3) form_field_data_wide_pane_g1

0x0674,	// (0x0003f4bf) form_field_data_wide_pane_t1_ParamLimits

0x3dd9,	// (0x00042c24) input_focus_pane_cp6_ParamLimits

0xd43e,	// (0x0004c289) input_popup_find_pane_g1_ParamLimits

0xd43e,	// (0x0004c289) input_popup_find_pane_g1

0x16d1,	// (0x0004051c) aid_navi_side_left_pane

0x16e6,	// (0x00040531) aid_navi_side_right_pane

0x5e74,	// (0x00044cbf) bg_popup_window_pane_cp30_ParamLimits

0x5e74,	// (0x00044cbf) bg_popup_window_pane_cp30

0x5eee,	// (0x00044d39) popup_midp_note_alarm_window_g1_ParamLimits

0x5eee,	// (0x00044d39) popup_midp_note_alarm_window_g1

0x5f1e,	// (0x00044d69) popup_midp_note_alarm_window_t1_ParamLimits

0x5f1e,	// (0x00044d69) popup_midp_note_alarm_window_t1

0x5fbf,	// (0x00044e0a) popup_midp_note_alarm_window_t2_ParamLimits

0x5fbf,	// (0x00044e0a) popup_midp_note_alarm_window_t2

0x606d,	// (0x00044eb8) popup_midp_note_alarm_window_t3_ParamLimits

0x606d,	// (0x00044eb8) popup_midp_note_alarm_window_t3

0x609f,	// (0x00044eea) popup_midp_note_alarm_window_t4_ParamLimits

0x609f,	// (0x00044eea) popup_midp_note_alarm_window_t4

0x60c5,	// (0x00044f10) popup_midp_note_alarm_window_t5_ParamLimits

0x60c5,	// (0x00044f10) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0004e6ea) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0004e6ea) popup_midp_note_alarm_window_t

0x6171,	// (0x00044fbc) wait_bar_pane_cp1_ParamLimits

0x6171,	// (0x00044fbc) wait_bar_pane_cp1

0x36f3,	// (0x0004253e) wait_anim_pane_copy1

0x36f3,	// (0x0004253e) wait_border_pane_copy1

0x5b5a,	// (0x000449a5) wait_border_pane_g1_copy1

0x068e,	// (0x0003f4d9) form_field_popup_pane_g1

0xbbf9,	// (0x0004aa44) form_field_popup_pane_t1_ParamLimits

0x4074,	// (0x00042ebf) input_focus_pane_cp7_ParamLimits

0x4096,	// (0x00042ee1) list_form_pane_ParamLimits

0x06ae,	// (0x0003f4f9) form_field_popup_wide_pane_g1

0x06b6,	// (0x0003f501) form_field_popup_wide_pane_t1_ParamLimits

0x4074,	// (0x00042ebf) input_focus_pane_cp8_ParamLimits

0x40a2,	// (0x00042eed) list_form_wide_pane_ParamLimits

0xdfb6,	// (0x0004ce01) aid_size_cell_graphic_pane

0xbc78,	// (0x0004aac3) data_form_pane_t1_ParamLimits

0xbd94,	// (0x0004abdf) data_form_wide_pane_t1_ParamLimits

0xd851,	// (0x0004c69c) bg_status_flat_pane

0xd0fd,	// (0x0004bf48) title_pane_t1_ParamLimits

0x379b,	// (0x000425e6) title_pane_t2_ParamLimits

0x37c1,	// (0x0004260c) title_pane_t3_ParamLimits

0xf557,	// (0x0004e3a2) title_pane_t_ParamLimits

0x4656,	// (0x000434a1) level_1_signal_ParamLimits

0x4668,	// (0x000434b3) level_2_signal_ParamLimits

0x467b,	// (0x000434c6) level_3_signal_ParamLimits

0x468e,	// (0x000434d9) level_4_signal_ParamLimits

0x46a1,	// (0x000434ec) level_5_signal_ParamLimits

0x46b4,	// (0x000434ff) level_6_signal_ParamLimits

0x46c7,	// (0x00043512) level_7_signal_ParamLimits

0x4656,	// (0x000434a1) level_1_battery_ParamLimits

0x4668,	// (0x000434b3) level_2_battery_ParamLimits

0x467b,	// (0x000434c6) level_3_battery_ParamLimits

0x468e,	// (0x000434d9) level_4_battery_ParamLimits

0x46a1,	// (0x000434ec) level_5_battery_ParamLimits

0x46b4,	// (0x000434ff) level_6_battery_ParamLimits

0x46c7,	// (0x00043512) level_7_battery_ParamLimits

0x5d79,	// (0x00044bc4) bg_status_flat_pane_g1

0x5d81,	// (0x00044bcc) bg_status_flat_pane_g2

0x5d89,	// (0x00044bd4) bg_status_flat_pane_g3

0x5d91,	// (0x00044bdc) bg_status_flat_pane_g4

0x5d99,	// (0x00044be4) bg_status_flat_pane_g5

0x5da1,	// (0x00044bec) bg_status_flat_pane_g6

0x5da9,	// (0x00044bf4) bg_status_flat_pane_g7

0xd189,	// (0x0004bfd4) tabs_3_active_pane_t1_ParamLimits

0xd189,	// (0x0004bfd4) tabs_3_passive_pane_t1_ParamLimits

0xd19b,	// (0x0004bfe6) tabs_4_active_pane_t1_ParamLimits

0xd19b,	// (0x0004bfe6) tabs_4_1_passive_pane_t1_ParamLimits

0xd44c,	// (0x0004c297) tabs_2_active_pane_t1_ParamLimits

0xd44c,	// (0x0004c297) tabs_2_passive_pane_t1_ParamLimits

0x37d3,	// (0x0004261e) bg_active_tab_pane_cp4_ParamLimits

0xd45e,	// (0x0004c2a9) tabs_2_long_active_pane_t1_ParamLimits

0x5021,	// (0x00043e6c) bg_passive_tab_pane_cp4_ParamLimits

0x222a,	// (0x00041075) list_single_midp_graphic_pane_t1_ParamLimits

0x37d3,	// (0x0004261e) bg_active_tab_pane_cp5_ParamLimits

0xd471,	// (0x0004c2bc) tabs_3_long_active_pane_t1_ParamLimits

0x5021,	// (0x00043e6c) bg_passive_tab_pane_cp5_ParamLimits

0x222a,	// (0x00041075) list_single_midp_graphic_pane_t1

0xd851,	// (0x0004c69c) bg_status_flat_pane_ParamLimits

0x51d5,	// (0x00044020) indicator_pane_cp2_ParamLimits

0x51d5,	// (0x00044020) indicator_pane_cp2

0xd9cf,	// (0x0004c81a) navi_pane_srt_ParamLimits

0xd9cf,	// (0x0004c81a) navi_pane_srt

0x5330,	// (0x0004417b) popup_clock_digital_analogue_window_cp1

0x38b0,	// (0x000426fb) indicator_pane_t1

0x4cfd,	// (0x00043b48) copy_highlight_pane

0x4cfd,	// (0x00043b48) cursor_graphics_pane

0x4cfd,	// (0x00043b48) graphic_within_text_pane

0x4cfd,	// (0x00043b48) link_highlight_pane

0x6588,	// (0x000453d3) popup_preview_text_window_t5_ParamLimits

0x6588,	// (0x000453d3) popup_preview_text_window_t5

0x4e2b,	// (0x00043c76) cursor_digital_pane

0x4e2b,	// (0x00043c76) cursor_primary_pane

0x4e3c,	// (0x00043c87) cursor_primary_small_pane

0x4e44,	// (0x00043c8f) cursor_secondary_pane

0x4e4c,	// (0x00043c97) cursor_title_pane

0x4e2b,	// (0x00043c76) link_highlight_digital_pane

0x4e33,	// (0x00043c7e) link_highlight_primary_pane

0x4e3c,	// (0x00043c87) link_highlight_primary_small_pane

0x4e44,	// (0x00043c8f) link_highlight_secondary_pane

0x4e4c,	// (0x00043c97) link_highlight_title_pane

0x4e2b,	// (0x00043c76) copy_highlight_digital_pane

0x4e2b,	// (0x00043c76) copy_highlight_primary_pane

0x4e3c,	// (0x00043c87) copy_highlight_primary_small_pane

0x4e44,	// (0x00043c8f) copy_highlight_secondary_pane

0x4e4c,	// (0x00043c97) copy_highlight_title_pane

0x4e44,	// (0x00043c8f) graphic_text_digital_pane

0x5e17,	// (0x00044c62) graphic_text_primary_pane

0x5e20,	// (0x00044c6b) graphic_text_primary_small_pane

0x4e3c,	// (0x00043c87) graphic_text_secondary_pane

0x4e2b,	// (0x00043c76) graphic_text_title_pane

0xd68d,	// (0x0004c4d8) cursor_primary_pane_g1

0x5e09,	// (0x00044c54) cursor_text_primary_t1

0xdc4d,	// (0x0004ca98) cursor_primary_small_pane_g1

0x5dfb,	// (0x00044c46) cursor_text_primary_small_t1

0xdc43,	// (0x0004ca8e) cursor_primary_small_pane_g1_copy1

0x5de3,	// (0x00044c2e) cursor_text_primary_small_t1_copy1

0x5dc1,	// (0x00044c0c) cursor_text_title_t1

0xdc39,	// (0x0004ca84) cursor_title_pane_g1

0xd68d,	// (0x0004c4d8) cursor_digital_pane_g1

0x4e5e,	// (0x00043ca9) cursor_text_digital_t1

0x4e83,	// (0x00043cce) link_highlight_primary_pane_g1

0x5d6a,	// (0x00044bb5) link_highlight_primary_pane_t1

0x4e6c,	// (0x00043cb7) link_highlight_primary_small_pane_g1

0x4e74,	// (0x00043cbf) link_highlight_primary_small_pane_t1

0x4e83,	// (0x00043cce) link_highlight_secondary_pane_g1

0x4e8b,	// (0x00043cd6) link_highlight_secondary_pane_t1

0x5cde,	// (0x00044b29) link_highlight_title_pane_g1

0x5ce6,	// (0x00044b31) link_highlight_title_pane_t1

0x5cc7,	// (0x00044b12) link_highlight_digital_pane_g1

0x5ccf,	// (0x00044b1a) link_highlight_digital_pane_t1

0x5b9f,	// (0x000449ea) copy_highlight_primary_pane_g1

0x5ba7,	// (0x000449f2) copy_highlight_primary_pane_t1

0x5b79,	// (0x000449c4) copy_highlight_primary_small_pane_g1

0x5b90,	// (0x000449db) copy_highlight_primary_small_pane_t1

0x4e9a,	// (0x00043ce5) copy_highlight_secondary_pane_g1

0x4ea2,	// (0x00043ced) copy_highlight_secondary_pane_t1

0x5b79,	// (0x000449c4) copy_highlight_title_pane_g1

0x5b81,	// (0x000449cc) copy_highlight_title_pane_t1

0x5b9f,	// (0x000449ea) copy_highlight_digital_pane_g1

0x6dcf,	// (0x00045c1a) copy_highlight_digital_pane_t1

0x6d23,	// (0x00045b6e) graphic_text_primary_pane_g1

0x6db3,	// (0x00045bfe) graphic_text_primary_pane_t1

0x6dc1,	// (0x00045c0c) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0004e819) graphic_text_primary_pane_t

0x6d8f,	// (0x00045bda) graphic_text_primary_small_pane_g1

0x6d97,	// (0x00045be2) graphic_text_primary_small_pane_t1

0x6da5,	// (0x00045bf0) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0004e814) graphic_text_primary_small_pane_t

0x6d6b,	// (0x00045bb6) graphic_text_secondary_pane_g1

0x6d73,	// (0x00045bbe) graphic_text_secondary_pane_t1

0x6d81,	// (0x00045bcc) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0004e80f) graphic_text_secondary_pane_t

0x6d47,	// (0x00045b92) graphic_text_title_pane_g1

0x6d4f,	// (0x00045b9a) graphic_text_title_pane_t1

0x6d5d,	// (0x00045ba8) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0004e80a) graphic_text_title_pane_t

0x6d23,	// (0x00045b6e) graphic_text_digital_pane_g1

0x6d2b,	// (0x00045b76) graphic_text_digital_pane_t1

0x6d39,	// (0x00045b84) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0004e805) graphic_text_digital_pane_t

0x37d3,	// (0x0004261e) navi_icon_pane_srt_ParamLimits

0x37d3,	// (0x0004261e) navi_icon_pane_srt

0x36f3,	// (0x0004253e) navi_midp_pane_srt

0x36f3,	// (0x0004253e) navi_navi_pane_srt

0x37d3,	// (0x0004261e) navi_text_pane_srt_ParamLimits

0x37d3,	// (0x0004261e) navi_text_pane_srt

0x6cee,	// (0x00045b39) navi_navi_icon_text_pane_srt

0x6cf6,	// (0x00045b41) navi_navi_pane_srt_g1_ParamLimits

0x6cf6,	// (0x00045b41) navi_navi_pane_srt_g1

0x6d08,	// (0x00045b53) navi_navi_pane_srt_g2_ParamLimits

0x6d08,	// (0x00045b53) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0004e800) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0004e800) navi_navi_pane_srt_g

0x6d1a,	// (0x00045b65) navi_navi_tabs_pane_srt

0x6cee,	// (0x00045b39) navi_navi_text_pane_srt

0x6cee,	// (0x00045b39) navi_navi_volume_pane_srt

0x6cdf,	// (0x00045b2a) navi_navi_text_pane_srt_t1

0x2652,	// (0x0004149d) navi_navi_volume_pane_srt_g1

0x265a,	// (0x000414a5) volume_small_pane_srt_ParamLimits

0x265a,	// (0x000414a5) volume_small_pane_srt

0x19cd,	// (0x00040818) volume_small_pane_srt_g1_ParamLimits

0x19cd,	// (0x00040818) volume_small_pane_srt_g1

0x19dd,	// (0x00040828) volume_small_pane_srt_g2_ParamLimits

0x19dd,	// (0x00040828) volume_small_pane_srt_g2

0x19ee,	// (0x00040839) volume_small_pane_srt_g3_ParamLimits

0x19ee,	// (0x00040839) volume_small_pane_srt_g3

0x19ff,	// (0x0004084a) volume_small_pane_srt_g4_ParamLimits

0x19ff,	// (0x0004084a) volume_small_pane_srt_g4

0x1a10,	// (0x0004085b) volume_small_pane_srt_g5_ParamLimits

0x1a10,	// (0x0004085b) volume_small_pane_srt_g5

0x1a21,	// (0x0004086c) volume_small_pane_srt_g6_ParamLimits

0x1a21,	// (0x0004086c) volume_small_pane_srt_g6

0x1a32,	// (0x0004087d) volume_small_pane_srt_g7_ParamLimits

0x1a32,	// (0x0004087d) volume_small_pane_srt_g7

0x1a43,	// (0x0004088e) volume_small_pane_srt_g8_ParamLimits

0x1a43,	// (0x0004088e) volume_small_pane_srt_g8

0x1a54,	// (0x0004089f) volume_small_pane_srt_g9_ParamLimits

0x1a54,	// (0x0004089f) volume_small_pane_srt_g9

0x1a65,	// (0x000408b0) volume_small_pane_srt_g10_ParamLimits

0x1a65,	// (0x000408b0) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004e5ad) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004e5ad) volume_small_pane_srt_g

0x3bd3,	// (0x00042a1e) query_popup_data_pane_cp2

0x6cc5,	// (0x00045b10) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6cc5,	// (0x00045b10) navi_navi_icon_text_pane_srt_t1

0x5e17,	// (0x00044c62) navi_tabs_2_long_pane_srt

0x5e17,	// (0x00044c62) navi_tabs_2_pane_srt

0x5e17,	// (0x00044c62) navi_tabs_3_long_pane_srt

0x5e17,	// (0x00044c62) navi_tabs_3_pane_srt

0x5e17,	// (0x00044c62) navi_tabs_4_pane_srt

0x2632,	// (0x0004147d) tabs_2_active_pane_srt_ParamLimits

0x2632,	// (0x0004147d) tabs_2_active_pane_srt

0x2642,	// (0x0004148d) tabs_2_passive_pane_srt_ParamLimits

0x2642,	// (0x0004148d) tabs_2_passive_pane_srt

0x55c5,	// (0x00044410) bg_passive_tab_pane_cp1_srt_ParamLimits

0x55c5,	// (0x00044410) bg_passive_tab_pane_cp1_srt

0x6c91,	// (0x00045adc) bg_passive_tab_pane_g1_cp1_srt

0x4936,	// (0x00043781) bg_passive_tab_pane_g2_cp1_srt

0x6c9a,	// (0x00045ae5) bg_passive_tab_pane_g3_cp1_srt

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp1_srt_ParamLimits

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp1_srt

0x6ca3,	// (0x00045aee) tabs_2_active_pane_srt_g1

0xdff8,	// (0x0004ce43) tabs_2_active_pane_srt_t1_ParamLimits

0xdff8,	// (0x0004ce43) tabs_2_active_pane_srt_t1

0x6c91,	// (0x00045adc) bg_active_tab_pane_g1_cp1_srt

0x4936,	// (0x00043781) bg_active_tab_pane_g2_cp1_srt

0x6c9a,	// (0x00045ae5) bg_active_tab_pane_g3_cp1_srt

0x25ff,	// (0x0004144a) tabs_3_active_pane_srt_ParamLimits

0x25ff,	// (0x0004144a) tabs_3_active_pane_srt

0x2610,	// (0x0004145b) tabs_3_passive_pane_cp_srt_ParamLimits

0x2610,	// (0x0004145b) tabs_3_passive_pane_cp_srt

0x2621,	// (0x0004146c) tabs_3_passive_pane_srt_ParamLimits

0x2621,	// (0x0004146c) tabs_3_passive_pane_srt

0x55c5,	// (0x00044410) bg_passive_tab_pane_cp2_srt_ParamLimits

0x55c5,	// (0x00044410) bg_passive_tab_pane_cp2_srt

0x4eb1,	// (0x00043cfc) bg_passive_tab_pane_g1_cp2_srt

0x4936,	// (0x00043781) bg_passive_tab_pane_g2_cp2_srt

0x4eba,	// (0x00043d05) bg_passive_tab_pane_g3_cp2_srt

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp2_srt_ParamLimits

0x3a4e,	// (0x00042899) bg_active_tab_pane_cp2_srt

0x6c77,	// (0x00045ac2) tabs_3_active_pane_srt_g1

0xdfe2,	// (0x0004ce2d) tabs_3_active_pane_srt_t1_ParamLimits

0xdfe2,	// (0x0004ce2d) tabs_3_active_pane_srt_t1

0x4eb1,	// (0x00043cfc) bg_active_tab_pane_g1_cp2_srt

0x4936,	// (0x00043781) bg_active_tab_pane_g2_cp2_srt

0x4eba,	// (0x00043d05) bg_active_tab_pane_g3_cp2_srt

0x25b7,	// (0x00041402) tabs_4_active_pane_srt_ParamLimits

0x25b7,	// (0x00041402) tabs_4_active_pane_srt

0x25c9,	// (0x00041414) tabs_4_passive_pane_cp2_srt_ParamLimits

0x25c9,	// (0x00041414) tabs_4_passive_pane_cp2_srt

0x1bd4,	// (0x00040a1f) aid_size_cell_toolbar

0x6927,	// (0x00045772) main_idle_act_pane_ParamLimits

0x1d91,	// (0x00040bdc) popup_large_graphic_colour_window_ParamLimits

0xc95c,	// (0x0004b7a7) popup_toolbar_window_ParamLimits

0xc95c,	// (0x0004b7a7) popup_toolbar_window

0x6adf,	// (0x0004592a) list_single_graphic_2heading_pane_ParamLimits

0x6adf,	// (0x0004592a) list_single_graphic_2heading_pane

0x4405,	// (0x00043250) aid_size_cell_apps_grid_lsc_pane

0x4417,	// (0x00043262) aid_size_cell_apps_grid_prt_pane

0x5021,	// (0x00043e6c) bg_wml_button_pane_cp1_ParamLimits

0x5021,	// (0x00043e6c) bg_wml_button_pane_cp1

0xdbfc,	// (0x0004ca47) form_midp_field_text_pane_t1_ParamLimits

0x55c5,	// (0x00044410) input_focus_pane_cp050_ParamLimits

0x582c,	// (0x00044677) list_midp_form_text_pane_ParamLimits

0x57d2,	// (0x0004461d) input_focus_pane_cp051_ParamLimits

0x57e6,	// (0x00044631) list_midp_choice_pane_ParamLimits

0xdb9a,	// (0x0004c9e5) list_single_2graphic_pane_cp3_ParamLimits

0xdb9a,	// (0x0004c9e5) list_single_2graphic_pane_cp3

0xdbad,	// (0x0004c9f8) list_single_midp_graphic_pane_ParamLimits

0xdbad,	// (0x0004c9f8) list_single_midp_graphic_pane

0x086a,	// (0x0003f6b5) list_single_graphic_2heading_pane_g1_ParamLimits

0x086a,	// (0x0003f6b5) list_single_graphic_2heading_pane_g1

0x0876,	// (0x0003f6c1) list_single_graphic_2heading_pane_g4_ParamLimits

0x0876,	// (0x0003f6c1) list_single_graphic_2heading_pane_g4

0x0882,	// (0x0003f6cd) list_single_graphic_2heading_pane_g5_ParamLimits

0x0882,	// (0x0003f6cd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004e600) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004e600) list_single_graphic_2heading_pane_g

0x088e,	// (0x0003f6d9) list_single_graphic_2heading_pane_t1_ParamLimits

0x088e,	// (0x0003f6d9) list_single_graphic_2heading_pane_t1

0x08a2,	// (0x0003f6ed) list_single_graphic_2heading_pane_t2_ParamLimits

0x08a2,	// (0x0003f6ed) list_single_graphic_2heading_pane_t2

0x08be,	// (0x0003f709) list_single_graphic_2heading_pane_t3_ParamLimits

0x08be,	// (0x0003f709) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004e607) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004e607) list_single_graphic_2heading_pane_t

0x548f,	// (0x000442da) bg_popup_sub_pane_cp2

0x54b9,	// (0x00044304) grid_toobar_pane

0x21a5,	// (0x00040ff0) cell_toolbar_pane_ParamLimits

0x21a5,	// (0x00040ff0) cell_toolbar_pane

0x54f5,	// (0x00044340) cell_toolbar_pane_g1_ParamLimits

0x54f5,	// (0x00044340) cell_toolbar_pane_g1

0x5509,	// (0x00044354) cell_toolbar_pane_g2_ParamLimits

0x5509,	// (0x00044354) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004e615) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004e615) cell_toolbar_pane_g

0x552b,	// (0x00044376) grid_highlight_pane_cp2_ParamLimits

0x552b,	// (0x00044376) grid_highlight_pane_cp2

0x5545,	// (0x00044390) toolbar_button_pane

0x5551,	// (0x0004439c) toolbar_button_pane_g1

0x5559,	// (0x000443a4) toolbar_button_pane_g2

0x5561,	// (0x000443ac) toolbar_button_pane_g3

0x5569,	// (0x000443b4) toolbar_button_pane_g4

0x5571,	// (0x000443bc) toolbar_button_pane_g5

0x5579,	// (0x000443c4) toolbar_button_pane_g6

0x5581,	// (0x000443cc) toolbar_button_pane_g7

0x5589,	// (0x000443d4) toolbar_button_pane_g8

0x5591,	// (0x000443dc) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0004e61a) toolbar_button_pane_g

0x21e9,	// (0x00041034) list_single_2graphic_pane_g1_cp3_ParamLimits

0x21e9,	// (0x00041034) list_single_2graphic_pane_g1_cp3

0xc9b4,	// (0x0004b7ff) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc9b4,	// (0x0004b7ff) list_single_2graphic_pane_g2_cp3

0x2206,	// (0x00041051) list_single_2graphic_pane_g3_cp3

0x1880,	// (0x000406cb) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1880,	// (0x000406cb) list_single_2graphic_pane_g4_cp3

0x220e,	// (0x00041059) list_single_2graphic_pane_t1_cp3_ParamLimits

0x220e,	// (0x00041059) list_single_2graphic_pane_t1_cp3

0x52a9,	// (0x000440f4) list_single_midp_graphic_pane_g2_ParamLimits

0x52a9,	// (0x000440f4) list_single_midp_graphic_pane_g2

0x085a,	// (0x0003f6a5) aid_zoom_text_primary

0x1bdc,	// (0x00040a27) aid_zoom_text_secondary

0xd6e5,	// (0x0004c530) status_small_pane_g7_ParamLimits

0xd6e5,	// (0x0004c530) status_small_pane_g7

0xd708,	// (0x0004c553) status_small_pane_t1_ParamLimits

0xd0d9,	// (0x0004bf24) title_pane_g2

0x0003,

0xf54e,	// (0x0004e399) title_pane_g

0xd351,	// (0x0004c19c) aid_size_cell_colour_1_pane_ParamLimits

0xd351,	// (0x0004c19c) aid_size_cell_colour_1_pane

0xd365,	// (0x0004c1b0) aid_size_cell_colour_2_pane_ParamLimits

0xd365,	// (0x0004c1b0) aid_size_cell_colour_2_pane

0xd379,	// (0x0004c1c4) aid_size_cell_colour_3_pane_ParamLimits

0xd379,	// (0x0004c1c4) aid_size_cell_colour_3_pane

0xd38d,	// (0x0004c1d8) aid_size_cell_colour_4_pane_ParamLimits

0xd38d,	// (0x0004c1d8) aid_size_cell_colour_4_pane

0x160e,	// (0x00040459) title_pane_stacon_g1_ParamLimits

0x160e,	// (0x00040459) title_pane_stacon_g1

0x5bfe,	// (0x00044a49) popup_note_wait_window_g3_ParamLimits

0x5bfe,	// (0x00044a49) popup_note_wait_window_g3

0x5c74,	// (0x00044abf) popup_note_wait_window_t5_ParamLimits

0x5c74,	// (0x00044abf) popup_note_wait_window_t5

0x36f3,	// (0x0004253e) main_feb_china_hwr_fs_writing_pane

0xc364,	// (0x0004b1af) popup_feb_china_hwr_fs_window_ParamLimits

0xc364,	// (0x0004b1af) popup_feb_china_hwr_fs_window

0xc9c5,	// (0x0004b810) aid_size_cell_hwr_fs_ParamLimits

0xc9c5,	// (0x0004b810) aid_size_cell_hwr_fs

0x55c5,	// (0x00044410) bg_popup_sub_pane_cp3_ParamLimits

0x55c5,	// (0x00044410) bg_popup_sub_pane_cp3

0xc9da,	// (0x0004b825) grid_hwr_fs_pane_ParamLimits

0xc9da,	// (0x0004b825) grid_hwr_fs_pane

0x2285,	// (0x000410d0) linegrid_hwr_fs_pane_ParamLimits

0x2285,	// (0x000410d0) linegrid_hwr_fs_pane

0xc9f2,	// (0x0004b83d) cell_hwr_fs_pane_ParamLimits

0xc9f2,	// (0x0004b83d) cell_hwr_fs_pane

0x55d1,	// (0x0004441c) linegrid_hwr_fs_pane_g1_ParamLimits

0x55d1,	// (0x0004441c) linegrid_hwr_fs_pane_g1

0xdb6e,	// (0x0004c9b9) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb6e,	// (0x0004c9b9) linegrid_hwr_fs_pane_g2

0x55ef,	// (0x0004443a) linegrid_hwr_fs_pane_g3_ParamLimits

0x55ef,	// (0x0004443a) linegrid_hwr_fs_pane_g3

0x22b7,	// (0x00041102) linegrid_hwr_fs_pane_g4_ParamLimits

0x22b7,	// (0x00041102) linegrid_hwr_fs_pane_g4

0x22d1,	// (0x0004111c) linegrid_hwr_fs_pane_g5_ParamLimits

0x22d1,	// (0x0004111c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0004e640) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0004e640) linegrid_hwr_fs_pane_g

0x55fb,	// (0x00044446) cell_hwr_fs_pane_g1_ParamLimits

0x55fb,	// (0x00044446) cell_hwr_fs_pane_g1

0x53c6,	// (0x00044211) cell_hwr_fs_pane_g2_ParamLimits

0x53c6,	// (0x00044211) cell_hwr_fs_pane_g2

0xdb80,	// (0x0004c9cb) cell_hwr_fs_pane_g3_ParamLimits

0xdb80,	// (0x0004c9cb) cell_hwr_fs_pane_g3

0xdb8d,	// (0x0004c9d8) cell_hwr_fs_pane_g4_ParamLimits

0xdb8d,	// (0x0004c9d8) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0004e64b) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0004e64b) cell_hwr_fs_pane_g

0xca18,	// (0x0004b863) cell_hwr_fs_pane_t1

0x36f3,	// (0x0004253e) grid_highlight_pane_cp6

0x36f3,	// (0x0004253e) main_idle_act2_pane

0x41bc,	// (0x00043007) aid_inside_area_popup_secondary

0xdc57,	// (0x0004caa2) aid_inside_area_window_primary_ParamLimits

0xdc57,	// (0x0004caa2) aid_inside_area_window_primary

0x6dde,	// (0x00045c29) ai2_news_ticker_pane

0x6de6,	// (0x00045c31) aid_size_cell_ai1_link_ParamLimits

0x6de6,	// (0x00045c31) aid_size_cell_ai1_link

0xe00e,	// (0x0004ce59) popup_ai2_data_window_ParamLimits

0xe00e,	// (0x0004ce59) popup_ai2_data_window

0x6e16,	// (0x00045c61) popup_ai2_link_window_ParamLimits

0x6e16,	// (0x00045c61) popup_ai2_link_window

0x55c5,	// (0x00044410) bg_popup_sub_pane_cp4_ParamLimits

0x55c5,	// (0x00044410) bg_popup_sub_pane_cp4

0x6e2a,	// (0x00045c75) grid_ai2_link_pane_ParamLimits

0x6e2a,	// (0x00045c75) grid_ai2_link_pane

0x6e41,	// (0x00045c8c) popup_ai2_link_window_g1_ParamLimits

0x6e41,	// (0x00045c8c) popup_ai2_link_window_g1

0x6e4d,	// (0x00045c98) popup_ai2_link_window_g2_ParamLimits

0x6e4d,	// (0x00045c98) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0004e81e) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0004e81e) popup_ai2_link_window_g

0x6e5c,	// (0x00045ca7) ai2_mp_button_pane

0x6e64,	// (0x00045caf) ai2_mp_volume_pane

0x57d2,	// (0x0004461d) bg_popup_sub_pane_cp5_ParamLimits

0x57d2,	// (0x0004461d) bg_popup_sub_pane_cp5

0x6e6c,	// (0x00045cb7) heading_ai2_gene_pane_ParamLimits

0x6e6c,	// (0x00045cb7) heading_ai2_gene_pane

0x6e78,	// (0x00045cc3) list_ai2_gene_pane_ParamLimits

0x6e78,	// (0x00045cc3) list_ai2_gene_pane

0x6ec0,	// (0x00045d0b) cell_ai2_link_pane_ParamLimits

0x6ec0,	// (0x00045d0b) cell_ai2_link_pane

0x6ed6,	// (0x00045d21) cell_ai2_link_pane_g1

0x36f3,	// (0x0004253e) grid_highlight_pane_cp7

0x266f,	// (0x000414ba) ai2_mp_volume_pane_g1

0x6fa6,	// (0x00045df1) ai2_mp_volume_pane_g2

0xe038,	// (0x0004ce83) list_ai2_gene_pane_t1

0x6fae,	// (0x00045df9) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0004e837) ai2_mp_volume_pane_g

0x2677,	// (0x000414c2) volume_small_pane_cp3

0x6fb6,	// (0x00045e01) aid_size_cell_ai2_button

0x6fbe,	// (0x00045e09) grid_ai2_button_pane

0x6fc7,	// (0x00045e12) cell_ai2_button_pane_ParamLimits

0x6fc7,	// (0x00045e12) cell_ai2_button_pane

0x36e9,	// (0x00042534) cell_ai2_button_pane_g1

0x36f3,	// (0x0004253e) grid_highlight_pane_cp8

0x6f66,	// (0x00045db1) ai2_gene_pane_t1_ParamLimits

0x6f66,	// (0x00045db1) ai2_gene_pane_t1

0xc2ee,	// (0x0004b139) aid_height_parent_landscape

0xdd9e,	// (0x0004cbe9) aid_height_set_list

0x6927,	// (0x00045772) aid_size_parent

0xdfb6,	// (0x0004ce01) aid_size_cell_graphic_pane_ParamLimits

0x6e88,	// (0x00045cd3) popup_ai2_data_window_g1_ParamLimits

0x6e88,	// (0x00045cd3) popup_ai2_data_window_g1

0x6e94,	// (0x00045cdf) ai2_news_ticker_pane_g1

0x6e9c,	// (0x00045ce7) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0004e823) ai2_news_ticker_pane_g

0x6ea4,	// (0x00045cef) ai2_news_ticker_pane_t1

0x6eb2,	// (0x00045cfd) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0004e828) ai2_news_ticker_pane_t

0x6edf,	// (0x00045d2a) heading_ai2_gene_pane_g1

0x6ee7,	// (0x00045d32) heading_ai2_gene_pane_t1_ParamLimits

0x6ee7,	// (0x00045d32) heading_ai2_gene_pane_t1

0x6efc,	// (0x00045d47) list_highlight_pane_cp6

0xe022,	// (0x0004ce6d) ai2_gene_pane_ParamLimits

0xe022,	// (0x0004ce6d) ai2_gene_pane

0xe046,	// (0x0004ce91) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0004e82d) list_ai2_gene_pane_t

0x6f37,	// (0x00045d82) list_highlight_pane_cp8_ParamLimits

0x6f37,	// (0x00045d82) list_highlight_pane_cp8

0x6f48,	// (0x00045d93) ai2_gene_pane_g1_ParamLimits

0x6f48,	// (0x00045d93) ai2_gene_pane_g1

0x6f5a,	// (0x00045da5) ai2_gene_pane_g2_ParamLimits

0x6f5a,	// (0x00045da5) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0004e832) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0004e832) ai2_gene_pane_g

0x3ffe,	// (0x00042e49) scroll_pane_cp12

0xc2ab,	// (0x0004b0f6) control_pane_t3_ParamLimits

0xc2ab,	// (0x0004b0f6) control_pane_t3

0xd6f9,	// (0x0004c544) status_small_pane_g8_ParamLimits

0xd6f9,	// (0x0004c544) status_small_pane_g8

0xc3f9,	// (0x0004b244) popup_find_window_ParamLimits

0xc686,	// (0x0004b4d1) popup_note_image_window_ParamLimits

0x08d6,	// (0x0003f721) list_double2_graphic_pane_vc_g1_ParamLimits

0x08d6,	// (0x0003f721) list_double2_graphic_pane_vc_g1

0x4c36,	// (0x00043a81) list_double2_graphic_pane_vc_g2_ParamLimits

0x4c36,	// (0x00043a81) list_double2_graphic_pane_vc_g2

0x21d5,	// (0x00041020) list_double2_graphic_pane_vc_g3_ParamLimits

0x21d5,	// (0x00041020) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004e60e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004e60e) list_double2_graphic_pane_vc_g

0x08e2,	// (0x0003f72d) list_double2_graphic_pane_vc_t1_ParamLimits

0x08e2,	// (0x0003f72d) list_double2_graphic_pane_vc_t1

0x4c36,	// (0x00043a81) list_single_heading_pane_vc_g1_ParamLimits

0x4c36,	// (0x00043a81) list_single_heading_pane_vc_g1

0x21d5,	// (0x00041020) list_single_heading_pane_vc_g2_ParamLimits

0x21d5,	// (0x00041020) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e41d) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e41d) list_single_heading_pane_vc_g

0x08f8,	// (0x0003f743) list_single_heading_pane_vc_t1_ParamLimits

0x08f8,	// (0x0003f743) list_single_heading_pane_vc_t1

0x090e,	// (0x0003f759) list_single_heading_pane_vc_t2_ParamLimits

0x090e,	// (0x0003f759) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0004e62f) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0004e62f) list_single_heading_pane_vc_t

0x2240,	// (0x0004108b) list_setting_number_pane_vc_g1_ParamLimits

0x2240,	// (0x0004108b) list_setting_number_pane_vc_g1

0x224c,	// (0x00041097) list_setting_number_pane_vc_g2_ParamLimits

0x224c,	// (0x00041097) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004e634) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004e634) list_setting_number_pane_vc_g

0x0920,	// (0x0003f76b) list_setting_number_pane_vc_t1_ParamLimits

0x0920,	// (0x0003f76b) list_setting_number_pane_vc_t1

0x0934,	// (0x0003f77f) list_setting_number_pane_vc_t2_ParamLimits

0x0934,	// (0x0003f77f) list_setting_number_pane_vc_t2

0x0950,	// (0x0003f79b) list_setting_number_pane_vc_t3_ParamLimits

0x0950,	// (0x0003f79b) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0004e639) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0004e639) list_setting_number_pane_vc_t

0x097c,	// (0x0003f7c7) set_value_pane_vc_ParamLimits

0x097c,	// (0x0003f7c7) set_value_pane_vc

0x6adf,	// (0x0004592a) list_double2_graphic_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_double2_graphic_pane_vc

0x0a33,	// (0x0003f87e) list_double2_large_graphic_pane_vc_ParamLimits

0x0a33,	// (0x0003f87e) list_double2_large_graphic_pane_vc

0x6adf,	// (0x0004592a) list_double2_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_double2_pane_vc

0x6adf,	// (0x0004592a) list_double_graphic_heading_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_double_graphic_heading_pane_vc

0x6adf,	// (0x0004592a) list_double_graphic_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_double_graphic_pane_vc

0x6adf,	// (0x0004592a) list_double_heading_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_double_heading_pane_vc

0x0a44,	// (0x0003f88f) list_double_large_graphic_pane_vc_ParamLimits

0x0a44,	// (0x0003f88f) list_double_large_graphic_pane_vc

0x6adf,	// (0x0004592a) list_double_number_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_double_number_pane_vc

0x6adf,	// (0x0004592a) list_double_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_double_pane_vc

0x6adf,	// (0x0004592a) list_double_time_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_double_time_pane_vc

0x6adf,	// (0x0004592a) list_setting_number_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_setting_number_pane_vc

0x6adf,	// (0x0004592a) list_setting_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_setting_pane_vc

0x6adf,	// (0x0004592a) list_single_graphic_heading_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_single_graphic_heading_pane_vc

0x6adf,	// (0x0004592a) list_single_heading_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_single_heading_pane_vc

0x6adf,	// (0x0004592a) list_single_number_heading_pane_vc_ParamLimits

0x6adf,	// (0x0004592a) list_single_number_heading_pane_vc

0x08d6,	// (0x0003f721) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x08d6,	// (0x0003f721) list_double_graphic_heading_pane_vc_g1

0x4c36,	// (0x00043a81) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4c36,	// (0x00043a81) list_double_graphic_heading_pane_vc_g2

0x21d5,	// (0x00041020) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x21d5,	// (0x00041020) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004e60e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004e60e) list_double_graphic_heading_pane_vc_g

0x0a93,	// (0x0003f8de) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0a93,	// (0x0003f8de) list_double_graphic_heading_pane_vc_t1

0x0aaf,	// (0x0003f8fa) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0aaf,	// (0x0003f8fa) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0004e83e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0004e83e) list_double_graphic_heading_pane_vc_t

0x2240,	// (0x0004108b) list_setting_pane_vc_g1_ParamLimits

0x2240,	// (0x0004108b) list_setting_pane_vc_g1

0x224c,	// (0x00041097) list_setting_pane_vc_g2_ParamLimits

0x224c,	// (0x00041097) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004e634) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004e634) list_setting_pane_vc_g

0x0acd,	// (0x0003f918) list_setting_pane_vc_t1_ParamLimits

0x0acd,	// (0x0003f918) list_setting_pane_vc_t1

0x0ae9,	// (0x0003f934) list_setting_pane_vc_t2_ParamLimits

0x0ae9,	// (0x0003f934) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0004e86c) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0004e86c) list_setting_pane_vc_t

0x097c,	// (0x0003f7c7) set_value_pane_cp_vc_ParamLimits

0x097c,	// (0x0003f7c7) set_value_pane_cp_vc

0x4c36,	// (0x00043a81) list_single_number_heading_pane_vc_g1_ParamLimits

0x4c36,	// (0x00043a81) list_single_number_heading_pane_vc_g1

0x21d5,	// (0x00041020) list_single_number_heading_pane_vc_g2_ParamLimits

0x21d5,	// (0x00041020) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e41d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e41d) list_single_number_heading_pane_vc_g

0x0b05,	// (0x0003f950) list_single_number_heading_pane_vc_t1_ParamLimits

0x0b05,	// (0x0003f950) list_single_number_heading_pane_vc_t1

0x0b1b,	// (0x0003f966) list_single_number_heading_pane_vc_t2_ParamLimits

0x0b1b,	// (0x0003f966) list_single_number_heading_pane_vc_t2

0x0b2d,	// (0x0003f978) list_single_number_heading_pane_vc_t3_ParamLimits

0x0b2d,	// (0x0003f978) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0004e871) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0004e871) list_single_number_heading_pane_vc_t

0x08d6,	// (0x0003f721) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x08d6,	// (0x0003f721) list_single_graphic_heading_pane_vc_g1

0x4c36,	// (0x00043a81) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4c36,	// (0x00043a81) list_single_graphic_heading_pane_vc_g4

0x21d5,	// (0x00041020) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x21d5,	// (0x00041020) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0004e60e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004e60e) list_single_graphic_heading_pane_vc_g

0x0b05,	// (0x0003f950) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0b05,	// (0x0003f950) list_single_graphic_heading_pane_vc_t1

0x0b3f,	// (0x0003f98a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0b3f,	// (0x0003f98a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0004e878) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0004e878) list_single_graphic_heading_pane_vc_t

0x4c36,	// (0x00043a81) list_double2_pane_vc_g1_ParamLimits

0x4c36,	// (0x00043a81) list_double2_pane_vc_g1

0x21d5,	// (0x00041020) list_double2_pane_vc_g2_ParamLimits

0x21d5,	// (0x00041020) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e41d) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e41d) list_double2_pane_vc_g

0x0b51,	// (0x0003f99c) list_double2_pane_vc_t1_ParamLimits

0x0b51,	// (0x0003f99c) list_double2_pane_vc_t1

0x0b67,	// (0x0003f9b2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0b67,	// (0x0003f9b2) list_double2_large_graphic_pane_vc_g1

0x0b73,	// (0x0003f9be) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0b73,	// (0x0003f9be) list_double2_large_graphic_pane_vc_g2

0x0b7f,	// (0x0003f9ca) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0b7f,	// (0x0003f9ca) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0004e435) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0004e435) list_double2_large_graphic_pane_vc_g

0x0b8b,	// (0x0003f9d6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0b8b,	// (0x0003f9d6) list_double2_large_graphic_pane_vc_t1

0x2680,	// (0x000414cb) list_double_time_pane_vc_g1_ParamLimits

0x2680,	// (0x000414cb) list_double_time_pane_vc_g1

0x268c,	// (0x000414d7) list_double_time_pane_vc_g2_ParamLimits

0x268c,	// (0x000414d7) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0004e87d) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0004e87d) list_double_time_pane_vc_g

0x0ba1,	// (0x0003f9ec) list_double_time_pane_vc_t1_ParamLimits

0x0ba1,	// (0x0003f9ec) list_double_time_pane_vc_t1

0x0bc5,	// (0x0003fa10) list_double_time_pane_vc_t2_ParamLimits

0x0bc5,	// (0x0003fa10) list_double_time_pane_vc_t2

0x0c14,	// (0x0003fa5f) list_double_time_pane_vc_t3_ParamLimits

0x0c14,	// (0x0003fa5f) list_double_time_pane_vc_t3

0x0c26,	// (0x0003fa71) list_double_time_pane_vc_t4_ParamLimits

0x0c26,	// (0x0003fa71) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0004e882) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0004e882) list_double_time_pane_vc_t

0x4c36,	// (0x00043a81) list_double_pane_vc_g1_ParamLimits

0x4c36,	// (0x00043a81) list_double_pane_vc_g1

0x21d5,	// (0x00041020) list_double_pane_vc_g2_ParamLimits

0x21d5,	// (0x00041020) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e41d) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e41d) list_double_pane_vc_g

0x0c3a,	// (0x0003fa85) list_double_pane_vc_t1_ParamLimits

0x0c3a,	// (0x0003fa85) list_double_pane_vc_t1

0x0c4e,	// (0x0003fa99) list_double_pane_vc_t2_ParamLimits

0x0c4e,	// (0x0003fa99) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0004e88b) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0004e88b) list_double_pane_vc_t

0x4c36,	// (0x00043a81) list_double_number_pane_vc_g1_ParamLimits

0x4c36,	// (0x00043a81) list_double_number_pane_vc_g1

0x21d5,	// (0x00041020) list_double_number_pane_vc_g2_ParamLimits

0x21d5,	// (0x00041020) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e41d) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e41d) list_double_number_pane_vc_g

0x0c66,	// (0x0003fab1) list_double_number_pane_vc_t1_ParamLimits

0x0c66,	// (0x0003fab1) list_double_number_pane_vc_t1

0x0c78,	// (0x0003fac3) list_double_number_pane_vc_t2_ParamLimits

0x0c78,	// (0x0003fac3) list_double_number_pane_vc_t2

0x0c8c,	// (0x0003fad7) list_double_number_pane_vc_t3_ParamLimits

0x0c8c,	// (0x0003fad7) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0004e890) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0004e890) list_double_number_pane_vc_t

0x0ca4,	// (0x0003faef) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0ca4,	// (0x0003faef) list_double_large_graphic_pane_vc_g1

0x0cc6,	// (0x0003fb11) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0cc6,	// (0x0003fb11) list_double_large_graphic_pane_vc_g2

0x0cda,	// (0x0003fb25) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0cda,	// (0x0003fb25) list_double_large_graphic_pane_vc_g3

0x0ce9,	// (0x0003fb34) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0ce9,	// (0x0003fb34) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0004e897) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0004e897) list_double_large_graphic_pane_vc_g

0x0cf5,	// (0x0003fb40) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0cf5,	// (0x0003fb40) list_double_large_graphic_pane_vc_t1

0x0d11,	// (0x0003fb5c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0d11,	// (0x0003fb5c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0004e8a0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0004e8a0) list_double_large_graphic_pane_vc_t

0x4c36,	// (0x00043a81) list_double_heading_pane_vc_g1_ParamLimits

0x4c36,	// (0x00043a81) list_double_heading_pane_vc_g1

0x21d5,	// (0x00041020) list_double_heading_pane_vc_g2_ParamLimits

0x21d5,	// (0x00041020) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e41d) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e41d) list_double_heading_pane_vc_g

0x0d33,	// (0x0003fb7e) list_double_heading_pane_vc_t1_ParamLimits

0x0d33,	// (0x0003fb7e) list_double_heading_pane_vc_t1

0x0d47,	// (0x0003fb92) list_double_heading_pane_vc_t2_ParamLimits

0x0d47,	// (0x0003fb92) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0004e8a5) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0004e8a5) list_double_heading_pane_vc_t

0x0d5f,	// (0x0003fbaa) list_double_graphic_pane_vc_g1_ParamLimits

0x0d5f,	// (0x0003fbaa) list_double_graphic_pane_vc_g1

0x2698,	// (0x000414e3) list_double_graphic_pane_vc_g2_ParamLimits

0x2698,	// (0x000414e3) list_double_graphic_pane_vc_g2

0x4c36,	// (0x00043a81) list_double_graphic_pane_vc_g3_ParamLimits

0x4c36,	// (0x00043a81) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0004e8aa) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0004e8aa) list_double_graphic_pane_vc_g

0x0d6b,	// (0x0003fbb6) list_double_graphic_pane_vc_t1_ParamLimits

0x0d6b,	// (0x0003fbb6) list_double_graphic_pane_vc_t1

0x0d95,	// (0x0003fbe0) list_double_graphic_pane_vc_t2_ParamLimits

0x0d95,	// (0x0003fbe0) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0004e8b3) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0004e8b3) list_double_graphic_pane_vc_t

0x10bf,	// (0x0003ff0a) aid_size_cell_fastswap

0xbf15,	// (0x0004ad60) aid_size_cell_touch_ParamLimits

0xbf15,	// (0x0004ad60) aid_size_cell_touch

0x1322,	// (0x0004016d) popup_fast_swap_wide_window_ParamLimits

0x1322,	// (0x0004016d) popup_fast_swap_wide_window

0xc0c5,	// (0x0004af10) touch_pane_ParamLimits

0xc0c5,	// (0x0004af10) touch_pane

0x4060,	// (0x00042eab) button_value_adjust_pane_cp2

0x0581,	// (0x0003f3cc) button_value_adjust_pane_cp4

0x05a5,	// (0x0003f3f0) form_field_data_pane_cp2

0xbb9c,	// (0x0004a9e7) form_field_data_wide_pane_cp2

0x44d4,	// (0x0004331f) bg_scroll_pane_ParamLimits

0x1770,	// (0x000405bb) scroll_handle_pane_ParamLimits

0x1784,	// (0x000405cf) scroll_sc2_down_pane_ParamLimits

0x1784,	// (0x000405cf) scroll_sc2_down_pane

0x4505,	// (0x00043350) scroll_sc2_up_pane_ParamLimits

0x4505,	// (0x00043350) scroll_sc2_up_pane

0xe166,	// (0x0004cfb1) grid_wheel_folder_pane_g1_ParamLimits

0xe166,	// (0x0004cfb1) grid_wheel_folder_pane_g1

0x1965,	// (0x000407b0) clock_nsta_pane_cp2_ParamLimits

0x1965,	// (0x000407b0) clock_nsta_pane_cp2

0xd5e8,	// (0x0004c433) listscroll_midp_pane_ParamLimits

0xd5f4,	// (0x0004c43f) midp_canvas_pane

0x4ff9,	// (0x00043e44) nsta_clock_indic_pane

0x502d,	// (0x00043e78) listscroll_form_pane_vc

0x5035,	// (0x00043e80) listscroll_set_pane_vc_ParamLimits

0x5035,	// (0x00043e80) listscroll_set_pane_vc

0xd879,	// (0x0004c6c4) clock_nsta_pane

0xd8a3,	// (0x0004c6ee) indicator_nsta_pane

0x548f,	// (0x000442da) bg_popup_sub_pane_cp2_ParamLimits

0x54a3,	// (0x000442ee) find_pane_cp2_ParamLimits

0x54a3,	// (0x000442ee) find_pane_cp2

0x54b9,	// (0x00044304) grid_toobar_pane_ParamLimits

0x5599,	// (0x000443e4) list_form_gen_pane_vc_ParamLimits

0x5599,	// (0x000443e4) list_form_gen_pane_vc

0x55af,	// (0x000443fa) scroll_pane_cp8_vc_ParamLimits

0x55af,	// (0x000443fa) scroll_pane_cp8_vc

0x562b,	// (0x00044476) data_form_wide_pane_vc_ParamLimits

0x562b,	// (0x00044476) data_form_wide_pane_vc

0x5637,	// (0x00044482) form_field_data_wide_pane_vc_g1

0x563f,	// (0x0004448a) form_field_data_wide_pane_vc_t1_ParamLimits

0x563f,	// (0x0004448a) form_field_data_wide_pane_vc_t1

0x4074,	// (0x00042ebf) input_focus_pane_cp6_vc_ParamLimits

0x4074,	// (0x00042ebf) input_focus_pane_cp6_vc

0x5985,	// (0x000447d0) list_midp_pane_ParamLimits

0x6c6b,	// (0x00045ab6) scroll_pane_cp16_ParamLimits

0x6c6b,	// (0x00045ab6) scroll_pane_cp16

0x59d3,	// (0x0004481e) button_value_adjust_pane_ParamLimits

0x59d3,	// (0x0004481e) button_value_adjust_pane

0xddaf,	// (0x0004cbfa) button_value_adjust_pane_cp6_ParamLimits

0xddaf,	// (0x0004cbfa) button_value_adjust_pane_cp6

0xdec9,	// (0x0004cd14) settings_code_pane_cp_ParamLimits

0xdec9,	// (0x0004cd14) settings_code_pane_cp

0x36e9,	// (0x00042534) cell_touch_pane_g1

0x36e9,	// (0x00042534) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0004e553) cell_touch_pane_g

0xe054,	// (0x0004ce9f) cell_touch_pane_cp_ParamLimits

0xe054,	// (0x0004ce9f) cell_touch_pane_cp

0xe070,	// (0x0004cebb) cell_touch_pane_ParamLimits

0xe070,	// (0x0004cebb) cell_touch_pane

0x36e9,	// (0x00042534) scroll_sc2_down_pane_g1

0x36e9,	// (0x00042534) scroll_sc2_up_pane_g1

0x36f3,	// (0x0004253e) bg_set_opt_pane_cp4_vc

0x6ffb,	// (0x00045e46) list_set_graphic_pane_vc_g1_ParamLimits

0x6ffb,	// (0x00045e46) list_set_graphic_pane_vc_g1

0x7007,	// (0x00045e52) list_set_graphic_pane_vc_g2_ParamLimits

0x7007,	// (0x00045e52) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0004e843) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0004e843) list_set_graphic_pane_vc_g

0x7013,	// (0x00045e5e) text_primary_small_cp13_vc_ParamLimits

0x7013,	// (0x00045e5e) text_primary_small_cp13_vc

0x702b,	// (0x00045e76) list_set_graphic_pane_vc_ParamLimits

0x702b,	// (0x00045e76) list_set_graphic_pane_vc

0x36f3,	// (0x0004253e) input_focus_pane_cp2_vc

0x36e9,	// (0x00042534) setting_code_pane_vc_g1

0x381e,	// (0x00042669) setting_code_pane_vc_t1

0x703d,	// (0x00045e88) set_text_pane_vc_t1_ParamLimits

0x703d,	// (0x00045e88) set_text_pane_vc_t1

0x36f3,	// (0x0004253e) input_focus_pane_cp1_vc

0x7059,	// (0x00045ea4) list_set_text_pane_vc

0x36e9,	// (0x00042534) setting_text_pane_vc_g1

0x36f3,	// (0x0004253e) bg_set_opt_pane_cp2_vc

0x3815,	// (0x00042660) setting_slider_graphic_pane_vc_g1

0x7063,	// (0x00045eae) setting_slider_graphic_pane_vc_t1

0x7073,	// (0x00045ebe) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0004e848) setting_slider_graphic_pane_vc_t

0x7083,	// (0x00045ece) slider_set_pane_cp_vc

0x708b,	// (0x00045ed6) slider_set_pane_vc_g1

0x7094,	// (0x00045edf) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0004e84d) slider_set_pane_vc_g

0x40c0,	// (0x00042f0b) set_opt_bg_pane_g1_copy1

0x40c8,	// (0x00042f13) set_opt_bg_pane_g2_copy1

0x70c0,	// (0x00045f0b) set_opt_bg_pane_g3_copy1

0x40d8,	// (0x00042f23) set_opt_bg_pane_g4_copy1

0x40e0,	// (0x00042f2b) set_opt_bg_pane_g5_copy1

0x40e8,	// (0x00042f33) set_opt_bg_pane_g6_copy1

0x70ca,	// (0x00045f15) set_opt_bg_pane_g7_copy1

0x70d2,	// (0x00045f1d) set_opt_bg_pane_g8_copy1

0x70dc,	// (0x00045f27) set_opt_bg_pane_g9_copy1

0x36f3,	// (0x0004253e) bg_set_opt_pane_cp_vc

0x70e6,	// (0x00045f31) setting_slider_pane_vc_t1

0x70f5,	// (0x00045f40) setting_slider_pane_vc_t2

0x7105,	// (0x00045f50) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0004e85c) setting_slider_pane_vc_t

0x7115,	// (0x00045f60) slider_set_pane_vc

0x22f5,	// (0x00041140) volume_set_pane_vc_g1

0x22fe,	// (0x00041149) volume_set_pane_vc_g2

0x2307,	// (0x00041152) volume_set_pane_vc_g3

0x2310,	// (0x0004115b) volume_set_pane_vc_g4

0x2319,	// (0x00041164) volume_set_pane_vc_g5

0x2322,	// (0x0004116d) volume_set_pane_vc_g6

0x232b,	// (0x00041176) volume_set_pane_vc_g7

0x2334,	// (0x0004117f) volume_set_pane_vc_g8

0x233d,	// (0x00041188) volume_set_pane_vc_g9

0x2346,	// (0x00041191) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0004e701) volume_set_pane_vc_g

0x711d,	// (0x00045f68) volume_set_pane_vc

0x7125,	// (0x00045f70) button_value_adjust_pane_cp1_vc

0x712f,	// (0x00045f7a) list_highlight_pane_cp2_vc

0x7138,	// (0x00045f83) list_set_pane_vc_ParamLimits

0x7138,	// (0x00045f83) list_set_pane_vc

0x7196,	// (0x00045fe1) main_pane_set_vc_t1_ParamLimits

0x7196,	// (0x00045fe1) main_pane_set_vc_t1

0x71ab,	// (0x00045ff6) main_pane_set_vc_t2_ParamLimits

0x71ab,	// (0x00045ff6) main_pane_set_vc_t2

0x71bd,	// (0x00046008) main_pane_set_vc_t3_ParamLimits

0x71bd,	// (0x00046008) main_pane_set_vc_t3

0x71d1,	// (0x0004601c) main_pane_set_vc_t4_ParamLimits

0x71d1,	// (0x0004601c) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0004e863) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0004e863) main_pane_set_vc_t

0x71e5,	// (0x00046030) setting_code_pane_vc_ParamLimits

0x71e5,	// (0x00046030) setting_code_pane_vc

0x71f6,	// (0x00046041) setting_slider_graphic_pane_vc

0x71f6,	// (0x00046041) setting_slider_pane_vc

0x71f6,	// (0x00046041) setting_text_pane_vc

0x71f6,	// (0x00046041) setting_volume_pane_vc

0x7200,	// (0x0004604b) scroll_pane_cp121_vc

0x404e,	// (0x00042e99) set_content_pane_vc

0x7208,	// (0x00046053) button_value_adjust_pane_g1

0x7211,	// (0x0004605c) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0004e8b8) button_value_adjust_pane_g

0x721a,	// (0x00046065) form_field_slider_wide_pane_vc_t1_ParamLimits

0x721a,	// (0x00046065) form_field_slider_wide_pane_vc_t1

0x722e,	// (0x00046079) form_field_slider_wide_pane_vc_t2_ParamLimits

0x722e,	// (0x00046079) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0004e8bd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0004e8bd) form_field_slider_wide_pane_vc_t

0x3a4e,	// (0x00042899) input_focus_pane_cp10_vc_ParamLimits

0x3a4e,	// (0x00042899) input_focus_pane_cp10_vc

0x725c,	// (0x000460a7) slider_cont_pane_cp1_vc_ParamLimits

0x725c,	// (0x000460a7) slider_cont_pane_cp1_vc

0x726e,	// (0x000460b9) slider_form_pane_g1_cp2

0x7094,	// (0x00045edf) slider_form_pane_g2_cp2

0x729b,	// (0x000460e6) form_field_slider_pane_vc_t3

0x72a9,	// (0x000460f4) form_field_slider_pane_vc_t4

0x72b7,	// (0x00046102) slider_form_pane_vc_ParamLimits

0x72b7,	// (0x00046102) slider_form_pane_vc

0x72c4,	// (0x0004610f) form_field_slider_pane_vc_t1_ParamLimits

0x72c4,	// (0x0004610f) form_field_slider_pane_vc_t1

0x722e,	// (0x00046079) form_field_slider_pane_vc_t2_ParamLimits

0x722e,	// (0x00046079) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0004e8cf) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0004e8cf) form_field_slider_pane_vc_t

0x3a4e,	// (0x00042899) input_focus_pane_cp9_vc_ParamLimits

0x3a4e,	// (0x00042899) input_focus_pane_cp9_vc

0x72e0,	// (0x0004612b) slider_cont_pane_vc_ParamLimits

0x72e0,	// (0x0004612b) slider_cont_pane_vc

0x72f4,	// (0x0004613f) list_form_graphic_pane_cp_vc_ParamLimits

0x72f4,	// (0x0004613f) list_form_graphic_pane_cp_vc

0x5637,	// (0x00044482) form_field_popup_wide_pane_vc_g1

0x7309,	// (0x00046154) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7309,	// (0x00046154) form_field_popup_wide_pane_vc_t1

0x4074,	// (0x00042ebf) input_focus_pane_cp8_vc_ParamLimits

0x4074,	// (0x00042ebf) input_focus_pane_cp8_vc

0x734e,	// (0x00046199) list_form_wide_pane_vc_ParamLimits

0x734e,	// (0x00046199) list_form_wide_pane_vc

0x735a,	// (0x000461a5) list_form_graphic_pane_vc_g1

0x7362,	// (0x000461ad) list_form_graphic_pane_vc_t1_ParamLimits

0x7362,	// (0x000461ad) list_form_graphic_pane_vc_t1

0x37d3,	// (0x0004261e) list_highlight_pane_cp5_vc_ParamLimits

0x37d3,	// (0x0004261e) list_highlight_pane_cp5_vc

0x737e,	// (0x000461c9) list_form_graphic_pane_vc_ParamLimits

0x737e,	// (0x000461c9) list_form_graphic_pane_vc

0x5637,	// (0x00044482) form_field_popup_pane_vc_g1

0x7394,	// (0x000461df) form_field_popup_pane_vc_t1_ParamLimits

0x7394,	// (0x000461df) form_field_popup_pane_vc_t1

0x4074,	// (0x00042ebf) input_focus_pane_cp7_vc_ParamLimits

0x4074,	// (0x00042ebf) input_focus_pane_cp7_vc

0x73ab,	// (0x000461f6) list_form_pane_vc_ParamLimits

0x73ab,	// (0x000461f6) list_form_pane_vc

0x73b7,	// (0x00046202) data_form_pane_vc_t1_ParamLimits

0x73b7,	// (0x00046202) data_form_pane_vc_t1

0x40c0,	// (0x00042f0b) input_focus_pane_vc_g1

0x40c8,	// (0x00042f13) input_focus_pane_vc_g2

0x40d0,	// (0x00042f1b) input_focus_pane_vc_g3

0x40d8,	// (0x00042f23) input_focus_pane_vc_g4

0x40e0,	// (0x00042f2b) input_focus_pane_vc_g5

0x40e8,	// (0x00042f33) input_focus_pane_vc_g6

0x40f0,	// (0x00042f3b) input_focus_pane_vc_g7

0x40f8,	// (0x00042f43) input_focus_pane_vc_g8

0x4100,	// (0x00042f4b) input_focus_pane_vc_g9

0x36e9,	// (0x00042534) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004e4dc) input_focus_pane_vc_g

0x562b,	// (0x00044476) data_form_pane_vc_ParamLimits

0x562b,	// (0x00044476) data_form_pane_vc

0x5637,	// (0x00044482) form_field_data_pane_vc_g1

0x73d2,	// (0x0004621d) form_field_data_pane_vc_t1_ParamLimits

0x73d2,	// (0x0004621d) form_field_data_pane_vc_t1

0x4074,	// (0x00042ebf) input_focus_pane_vc_ParamLimits

0x4074,	// (0x00042ebf) input_focus_pane_vc

0x73ec,	// (0x00046237) button_value_adjust_pane_cp3_vc

0x73f4,	// (0x0004623f) button_value_adjust_pane_cp5_vc

0x73fc,	// (0x00046247) form_field_data_pane_vc_ParamLimits

0x73fc,	// (0x00046247) form_field_data_pane_vc

0x7413,	// (0x0004625e) form_field_data_pane_vc_cp2

0x741b,	// (0x00046266) form_field_data_wide_pane_vc_ParamLimits

0x741b,	// (0x00046266) form_field_data_wide_pane_vc

0x7431,	// (0x0004627c) form_field_data_wide_pane_vc_cp2

0x7439,	// (0x00046284) form_field_popup_pane_vc_ParamLimits

0x7439,	// (0x00046284) form_field_popup_pane_vc

0x7450,	// (0x0004629b) form_field_popup_wide_pane_vc_ParamLimits

0x7450,	// (0x0004629b) form_field_popup_wide_pane_vc

0x7466,	// (0x000462b1) form_field_slider_pane_vc_ParamLimits

0x7466,	// (0x000462b1) form_field_slider_pane_vc

0x7479,	// (0x000462c4) form_field_slider_wide_pane_vc_ParamLimits

0x7479,	// (0x000462c4) form_field_slider_wide_pane_vc

0xe08e,	// (0x0004ced9) grid_touch_1_pane_ParamLimits

0xe08e,	// (0x0004ced9) grid_touch_1_pane

0xe0a2,	// (0x0004ceed) grid_touch_2_pane_ParamLimits

0xe0a2,	// (0x0004ceed) grid_touch_2_pane

0x7547,	// (0x00046392) touch_pane_g1_ParamLimits

0x7547,	// (0x00046392) touch_pane_g1

0x74b0,	// (0x000462fb) cell_app_pane_cp_wide_ParamLimits

0x74b0,	// (0x000462fb) cell_app_pane_cp_wide

0x74c1,	// (0x0004630c) grid_popup_fast_wide_pane_ParamLimits

0x74c1,	// (0x0004630c) grid_popup_fast_wide_pane

0x74d5,	// (0x00046320) scroll_pane_cp19_ParamLimits

0x74d5,	// (0x00046320) scroll_pane_cp19

0x36f3,	// (0x0004253e) bg_popup_window_pane_cp20

0x74e9,	// (0x00046334) listscroll_popup_fast_wide_pane

0x4228,	// (0x00043073) grid_indicator_nsta_pane

0x74f1,	// (0x0004633c) clock_nsta_pane_g1

0x74fa,	// (0x00046345) clock_nsta_pane_t1

0xe0cc,	// (0x0004cf17) cell_indicator_nsta_pane_ParamLimits

0xe0cc,	// (0x0004cf17) cell_indicator_nsta_pane

0x7547,	// (0x00046392) cell_indicator_nsta_pane_g1

0xe0e3,	// (0x0004cf2e) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0004e8e0) cell_indicator_nsta_pane_g

0x7562,	// (0x000463ad) clock_nsta_pane_cp

0x756b,	// (0x000463b6) indicator_nsta_pane_cp

0x7573,	// (0x000463be) nsta_clock_indic_pane_g1

0x389c,	// (0x000426e7) grid_indicator_pane

0x45fa,	// (0x00043445) scroll_pane_cp29

0x18b4,	// (0x000406ff) indicator_nsta_pane_cp2_ParamLimits

0x18b4,	// (0x000406ff) indicator_nsta_pane_cp2

0x37d3,	// (0x0004261e) main_apps_wheel_pane

0x5846,	// (0x00044691) form_midp_field_text_pane_ParamLimits

0x5991,	// (0x000447dc) scroll_bar_cp050_ParamLimits

0x75c3,	// (0x0004640e) cell_indicator_pane_ParamLimits

0x75c3,	// (0x0004640e) cell_indicator_pane

0x75da,	// (0x00046425) cell_indicator_pane_g1

0xe0f0,	// (0x0004cf3b) grid_wheel_folder_pane_ParamLimits

0xe0f0,	// (0x0004cf3b) grid_wheel_folder_pane

0xe0fe,	// (0x0004cf49) list_wheel_apps_pane_ParamLimits

0xe0fe,	// (0x0004cf49) list_wheel_apps_pane

0xe10c,	// (0x0004cf57) main_apps_wheel_pane_g1_ParamLimits

0xe10c,	// (0x0004cf57) main_apps_wheel_pane_g1

0xe118,	// (0x0004cf63) main_apps_wheel_pane_g2_ParamLimits

0xe118,	// (0x0004cf63) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0004e8fc) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0004e8fc) main_apps_wheel_pane_g

0xe126,	// (0x0004cf71) main_apps_wheel_pane_t1_ParamLimits

0xe126,	// (0x0004cf71) main_apps_wheel_pane_t1

0xe13a,	// (0x0004cf85) list_wheel_apps_pane_g1

0xe142,	// (0x0004cf8d) list_wheel_apps_pane_g2

0xe14a,	// (0x0004cf95) list_wheel_apps_pane_g3

0xe152,	// (0x0004cf9d) list_wheel_apps_pane_g4

0xe15c,	// (0x0004cfa7) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0004e901) list_wheel_apps_pane_g

0x4b7d,	// (0x000439c8) navi_icon_text_pane

0xd76d,	// (0x0004c5b8) aid_fill_nsta

0x769f,	// (0x000464ea) navi_icon_text_pane_g1

0x76ab,	// (0x000464f6) navi_icon_text_pane_t1

0x4a10,	// (0x0004385b) list_set_graphic_pane_t1_ParamLimits

0x4a10,	// (0x0004385b) list_set_graphic_pane_t1

0x60f4,	// (0x00044f3f) popup_midp_note_alarm_window_t6_ParamLimits

0x60f4,	// (0x00044f3f) popup_midp_note_alarm_window_t6

0x6106,	// (0x00044f51) popup_midp_note_alarm_window_t7_ParamLimits

0x6106,	// (0x00044f51) popup_midp_note_alarm_window_t7

0x6118,	// (0x00044f63) popup_midp_note_alarm_window_t8_ParamLimits

0x6118,	// (0x00044f63) popup_midp_note_alarm_window_t8

0x612a,	// (0x00044f75) popup_midp_note_alarm_window_t9_ParamLimits

0x612a,	// (0x00044f75) popup_midp_note_alarm_window_t9

0x613c,	// (0x00044f87) popup_midp_note_alarm_window_t10_ParamLimits

0x613c,	// (0x00044f87) popup_midp_note_alarm_window_t10

0x614e,	// (0x00044f99) popup_midp_note_alarm_window_t11_ParamLimits

0x614e,	// (0x00044f99) popup_midp_note_alarm_window_t11

0x6160,	// (0x00044fab) scroll_pane_cp17_ParamLimits

0x6160,	// (0x00044fab) scroll_pane_cp17

0x22f5,	// (0x00041140) volume_small_pane_cp_g1

0x26b5,	// (0x00041500) volume_small_pane_cp_g2

0x26be,	// (0x00041509) volume_small_pane_cp_g3

0x26c7,	// (0x00041512) volume_small_pane_cp_g4

0x26d0,	// (0x0004151b) volume_small_pane_cp_g5

0x26d9,	// (0x00041524) volume_small_pane_cp_g6

0x26e2,	// (0x0004152d) volume_small_pane_cp_g7

0x26eb,	// (0x00041536) volume_small_pane_cp_g8

0x26f4,	// (0x0004153f) volume_small_pane_cp_g9

0x26fd,	// (0x00041548) volume_small_pane_cp_g10

0x4dda,	// (0x00043c25) midp_ticker_pane_g1_ParamLimits

0x4de6,	// (0x00043c31) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0004e5a8) midp_ticker_pane_g_ParamLimits

0x4df2,	// (0x00043c3d) midp_ticker_pane_t1_ParamLimits

0xd791,	// (0x0004c5dc) aid_fill_nsta_2

0x597d,	// (0x000447c8) list_form2_midp_pane

0x6aae,	// (0x000458f9) midp_editing_number_pane_ParamLimits

0x6abd,	// (0x00045908) midp_ticker_pane_ParamLimits

0x76bd,	// (0x00046508) form2_midp_field_pane

0x76e1,	// (0x0004652c) scroll_pane_cp51

0x7701,	// (0x0004654c) form2_midp_button_pane_ParamLimits

0x7701,	// (0x0004654c) form2_midp_button_pane

0x7713,	// (0x0004655e) form2_midp_content_pane_ParamLimits

0x7713,	// (0x0004655e) form2_midp_content_pane

0x772d,	// (0x00046578) form2_midp_field_choice_group_pane

0x7735,	// (0x00046580) form2_midp_field_pane_g1

0x773d,	// (0x00046588) form2_midp_field_pane_g2

0x7745,	// (0x00046590) form2_midp_field_pane_g3

0x774d,	// (0x00046598) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0004e926) form2_midp_field_pane_g

0x7755,	// (0x000465a0) form2_midp_gauge_slider_pane

0x775d,	// (0x000465a8) form2_midp_gauge_wait_pane

0x7765,	// (0x000465b0) form2_midp_image_pane_ParamLimits

0x7765,	// (0x000465b0) form2_midp_image_pane

0x7780,	// (0x000465cb) form2_midp_label_pane_ParamLimits

0x7780,	// (0x000465cb) form2_midp_label_pane

0xe18f,	// (0x0004cfda) form2_midp_label_pane_cp_ParamLimits

0xe18f,	// (0x0004cfda) form2_midp_label_pane_cp

0x77ba,	// (0x00046605) form2_midp_string_pane_ParamLimits

0x77ba,	// (0x00046605) form2_midp_string_pane

0xbdc0,	// (0x0004ac0b) form2_midp_text_pane_ParamLimits

0xbdc0,	// (0x0004ac0b) form2_midp_text_pane

0x77cc,	// (0x00046617) form2_midp_time_pane

0x77dc,	// (0x00046627) input_focus_pane_cp51_ParamLimits

0x77dc,	// (0x00046627) input_focus_pane_cp51

0x77f4,	// (0x0004663f) form2_midp_label_pane_t1_ParamLimits

0x77f4,	// (0x0004663f) form2_midp_label_pane_t1

0xbdd9,	// (0x0004ac24) form2_mdip_text_pane_t1_ParamLimits

0xbdd9,	// (0x0004ac24) form2_mdip_text_pane_t1

0x0dfc,	// (0x0003fc47) form2_midp_time_pane_t1

0x783d,	// (0x00046688) form2_midp_gauge_slider_pane_t1

0xe1ae,	// (0x0004cff9) form2_midp_gauge_slider_pane_t2

0xe1c0,	// (0x0004d00b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0004e92f) form2_midp_gauge_slider_pane_t

0x7873,	// (0x000466be) form2_midp_slider_pane

0x787f,	// (0x000466ca) form2_midp_gauge_wait_pane_t1

0x788d,	// (0x000466d8) form2_midp_wait_pane_ParamLimits

0x788d,	// (0x000466d8) form2_midp_wait_pane

0xe1d2,	// (0x0004d01d) list_single_2graphic_pane_cp4_ParamLimits

0xe1d2,	// (0x0004d01d) list_single_2graphic_pane_cp4

0xdbad,	// (0x0004c9f8) list_single_midp_graphic_pane_cp_ParamLimits

0xdbad,	// (0x0004c9f8) list_single_midp_graphic_pane_cp

0x36f3,	// (0x0004253e) list_highlight_pane_cp20

0x78dc,	// (0x00046727) list_single_2graphic_pane_g1_cp4

0x78e4,	// (0x0004672f) list_single_2graphic_pane_g2_cp4

0x78ec,	// (0x00046737) list_single_2graphic_pane_t1_cp4

0x37d3,	// (0x0004261e) list_highlight_pane_cp21

0x78fb,	// (0x00046746) list_single_midp_graphic_pane_g4_cp

0x790a,	// (0x00046755) list_single_midp_graphic_pane_t1_cp

0xe1e6,	// (0x0004d031) form2_mdip_string_pane_t1_ParamLimits

0xe1e6,	// (0x0004d031) form2_mdip_string_pane_t1

0x36f3,	// (0x0004253e) bg_wml_button_pane_cp2

0x36e9,	// (0x00042534) form2_midp_image_pane_g1

0x15a6,	// (0x000403f1) list_double_large_graphic_pane_g5_ParamLimits

0x15a6,	// (0x000403f1) list_double_large_graphic_pane_g5

0xd5e8,	// (0x0004c433) midp_form_pane_ParamLimits

0x37d3,	// (0x0004261e) main_apps_wheel_pane_ParamLimits

0xc704,	// (0x0004b54f) popup_preview_window_ParamLimits

0xc704,	// (0x0004b54f) popup_preview_window

0x2150,	// (0x00040f9b) popup_touch_info_window_ParamLimits

0x2150,	// (0x00040f9b) popup_touch_info_window

0x216e,	// (0x00040fb9) popup_touch_menu_window_ParamLimits

0x216e,	// (0x00040fb9) popup_touch_menu_window

0x36df,	// (0x0004252a) bg_popup_sub_pane_cp6

0x7a18,	// (0x00046863) list_touch_menu_pane

0x7a20,	// (0x0004686b) list_single_touch_menu_pane_ParamLimits

0x7a20,	// (0x0004686b) list_single_touch_menu_pane

0x7a36,	// (0x00046881) list_single_touch_menu_pane_t1

0x37d3,	// (0x0004261e) bg_popup_sub_pane_cp7_ParamLimits

0x37d3,	// (0x0004261e) bg_popup_sub_pane_cp7

0x7a44,	// (0x0004688f) heading_sub_pane

0x7a4c,	// (0x00046897) list_touch_info_pane_ParamLimits

0x7a4c,	// (0x00046897) list_touch_info_pane

0x7a5b,	// (0x000468a6) list_single_touch_info_pane_ParamLimits

0x7a5b,	// (0x000468a6) list_single_touch_info_pane

0x7a6d,	// (0x000468b8) list_single_touch_info_pane_t1

0x7a7b,	// (0x000468c6) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0004e93d) list_single_touch_info_pane_t

0x4cfd,	// (0x00043b48) bg_popup_heading_pane_cp

0x7a89,	// (0x000468d4) heading_sub_pane_t1

0x55c5,	// (0x00044410) bg_popup_preview_window_pane_cp_ParamLimits

0x55c5,	// (0x00044410) bg_popup_preview_window_pane_cp

0x7a44,	// (0x0004688f) heading_preview_pane

0x7a4c,	// (0x00046897) list_preview_pane_ParamLimits

0x7a4c,	// (0x00046897) list_preview_pane

0x7a97,	// (0x000468e2) popup_preview_window_g1

0x7a5b,	// (0x000468a6) list_single_preview_pane_ParamLimits

0x7a5b,	// (0x000468a6) list_single_preview_pane

0x7a9f,	// (0x000468ea) list_single_preview_pane_g1

0x7aa7,	// (0x000468f2) list_single_preview_pane_t1

0x7a6d,	// (0x000468b8) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0004e942) list_single_preview_pane_t

0x7ab5,	// (0x00046900) bg_popup_heading_pane_cp2_ParamLimits

0x7ab5,	// (0x00046900) bg_popup_heading_pane_cp2

0x7acb,	// (0x00046916) heading_preview_pane_g1

0x7ad3,	// (0x0004691e) heading_preview_pane_t1_ParamLimits

0x7ad3,	// (0x0004691e) heading_preview_pane_t1

0x38bf,	// (0x0004270a) soft_indicator_pane_t1_ParamLimits

0x3fdb,	// (0x00042e26) scroll_pane_ParamLimits

0x44f3,	// (0x0004333e) scroll_sc2_left_pane

0x44fc,	// (0x00043347) scroll_sc2_right_pane

0x451b,	// (0x00043366) scroll_bg_pane_g1_ParamLimits

0x4530,	// (0x0004337b) scroll_bg_pane_g2_ParamLimits

0x4548,	// (0x00043393) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004e533) scroll_bg_pane_g_ParamLimits

0x451b,	// (0x00043366) scroll_handle_pane_g1_ParamLimits

0x456a,	// (0x000433b5) scroll_handle_pane_g2_ParamLimits

0x4548,	// (0x00043393) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0004e53a) scroll_handle_pane_g_ParamLimits

0x1c16,	// (0x00040a61) popup_choice_list_window_ParamLimits

0x1c16,	// (0x00040a61) popup_choice_list_window

0x549b,	// (0x000442e6) choice_list_pane

0x551d,	// (0x00044368) cell_toolbar_pane_t1

0x5545,	// (0x00044390) toolbar_button_pane_ParamLimits

0x661a,	// (0x00045465) ai_gene_pane_1_t2_ParamLimits

0x661a,	// (0x00045465) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0004e75d) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0004e75d) ai_gene_pane_1_t

0x7af0,	// (0x0004693b) scroll_sc2_left_pane_g1

0x7af0,	// (0x0004693b) scroll_sc2_right_pane_g1

0x5021,	// (0x00043e6c) bg_popup_sub_pane_cp10

0x7afa,	// (0x00046945) list_choice_list_pane

0x7b13,	// (0x0004695e) list_single_choice_list_pane_ParamLimits

0x7b13,	// (0x0004695e) list_single_choice_list_pane

0x7b26,	// (0x00046971) list_single_choice_list_pane_g1

0x41f9,	// (0x00043044) list_single_choice_list_pane_t1_ParamLimits

0x41f9,	// (0x00043044) list_single_choice_list_pane_t1

0x7b2e,	// (0x00046979) choice_list_pane_g1

0x7b36,	// (0x00046981) choice_list_pane_t1

0x36df,	// (0x0004252a) input_focus_pane_cp11

0x43d0,	// (0x0004321b) title_pane_stacon_g2_ParamLimits

0x43d0,	// (0x0004321b) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0004e519) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0004e519) title_pane_stacon_g

0x4cfd,	// (0x00043b48) cursor_press_pane

0xc3b1,	// (0x0004b1fc) popup_fep_hwr_window_ParamLimits

0xc3b1,	// (0x0004b1fc) popup_fep_hwr_window

0x1d3c,	// (0x00040b87) popup_fep_vkb_window_ParamLimits

0x1d3c,	// (0x00040b87) popup_fep_vkb_window

0x7b44,	// (0x0004698f) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0004e96b) fep_vkb_side_pane_g_ParamLimits

0x273f,	// (0x0004158a) fep_hwr_candidate_pane_ParamLimits

0x273f,	// (0x0004158a) fep_hwr_candidate_pane

0x2769,	// (0x000415b4) fep_hwr_side_pane_ParamLimits

0x2769,	// (0x000415b4) fep_hwr_side_pane

0x2789,	// (0x000415d4) fep_hwr_top_pane_ParamLimits

0x2789,	// (0x000415d4) fep_hwr_top_pane

0x27a1,	// (0x000415ec) fep_hwr_write_pane_ParamLimits

0x27a1,	// (0x000415ec) fep_hwr_write_pane

0xfb20,	// (0x0004e96b) fep_vkb_side_pane_g

0x7b4c,	// (0x00046997) fep_hwr_top_pane_g1

0x7b5e,	// (0x000469a9) fep_hwr_top_pane_g2

0x27cd,	// (0x00041618) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0004e947) fep_hwr_top_pane_g

0x27e2,	// (0x0004162d) fep_hwr_top_text_pane

0x46ea,	// (0x00043535) fep_hwr_top_text_pane_g1

0x7b94,	// (0x000469df) fep_hwr_top_text_pane_t1

0x28d8,	// (0x00041723) fep_hwr_candidate_pane_g1

0x7de7,	// (0x00046c32) fep_vkb_keypad_pane_g3_ParamLimits

0x7de7,	// (0x00046c32) fep_vkb_keypad_pane_g3

0x7e0f,	// (0x00046c5a) fep_vkb_keypad_pane_g4_ParamLimits

0x7e0f,	// (0x00046c5a) fep_vkb_keypad_pane_g4

0x7e7e,	// (0x00046cc9) fep_vkb_bottom_pane_g2_ParamLimits

0x7e7e,	// (0x00046cc9) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0004e972) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0004e972) fep_vkb_bottom_pane_g

0x7af0,	// (0x0004693b) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0004e97c) cell_vkb_side_pane_g

0x7f09,	// (0x00046d54) cell_vkb_side_pane_t1

0x7f17,	// (0x00046d62) cell_vkb_side_pane_t1_copy1

0x7af0,	// (0x0004693b) bg_fep_vkb_candidate_pane_g2

0x804f,	// (0x00046e9a) cell_vkb_candidate_pane_ParamLimits

0x7ba2,	// (0x000469ed) aid_size_cell_vkb_ParamLimits

0x7ba2,	// (0x000469ed) aid_size_cell_vkb

0x804f,	// (0x00046e9a) cell_vkb_candidate_pane

0x28f2,	// (0x0004173d) bg_popup_fep_shadow_pane_g1

0xe268,	// (0x0004d0b3) fep_vkb_bottom_pane_ParamLimits

0xe268,	// (0x0004d0b3) fep_vkb_bottom_pane

0x7c66,	// (0x00046ab1) fep_vkb_candidate_pane_ParamLimits

0x7c66,	// (0x00046ab1) fep_vkb_candidate_pane

0xe2b5,	// (0x0004d100) fep_vkb_keypad_pane_ParamLimits

0xe2b5,	// (0x0004d100) fep_vkb_keypad_pane

0xe2f1,	// (0x0004d13c) fep_vkb_side_pane_ParamLimits

0xe2f1,	// (0x0004d13c) fep_vkb_side_pane

0xe32d,	// (0x0004d178) fep_vkb_top_pane_ParamLimits

0xe32d,	// (0x0004d178) fep_vkb_top_pane

0x7d40,	// (0x00046b8b) fep_vkb_top_pane_g1_ParamLimits

0x7d40,	// (0x00046b8b) fep_vkb_top_pane_g1

0x7d4f,	// (0x00046b9a) fep_vkb_top_pane_g2_ParamLimits

0x7d4f,	// (0x00046b9a) fep_vkb_top_pane_g2

0x7d5e,	// (0x00046ba9) fep_vkb_top_pane_g3_ParamLimits

0x7d5e,	// (0x00046ba9) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0004e962) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0004e962) fep_vkb_top_pane_g

0x7d7c,	// (0x00046bc7) fep_vkb_top_text_pane_ParamLimits

0x7d7c,	// (0x00046bc7) fep_vkb_top_text_pane

0xe369,	// (0x0004d1b4) fep_vkb_side_pane_g1_ParamLimits

0xe369,	// (0x0004d1b4) fep_vkb_side_pane_g1

0x7dd6,	// (0x00046c21) grid_vkb_side_pane_ParamLimits

0x7dd6,	// (0x00046c21) grid_vkb_side_pane

0x28fa,	// (0x00041745) bg_popup_fep_shadow_pane_g2

0x2903,	// (0x0004174e) bg_popup_fep_shadow_pane_g3

0x290b,	// (0x00041756) bg_popup_fep_shadow_pane_g4

0x2914,	// (0x0004175f) bg_popup_fep_shadow_pane_g5

0x291e,	// (0x00041769) bg_popup_fep_shadow_pane_g6

0x2926,	// (0x00041771) bg_popup_fep_shadow_pane_g7

0x40e0,	// (0x00042f2b) bg_popup_fep_shadow_pane_g8

0x7e2d,	// (0x00046c78) grid_vkb_keypad_number_pane_ParamLimits

0x7e2d,	// (0x00046c78) grid_vkb_keypad_number_pane

0x7e3d,	// (0x00046c88) grid_vkb_keypad_pane_ParamLimits

0x7e3d,	// (0x00046c88) grid_vkb_keypad_pane

0x7e63,	// (0x00046cae) fep_vkb_bottom_pane_g1_ParamLimits

0x7e63,	// (0x00046cae) fep_vkb_bottom_pane_g1

0x7e8c,	// (0x00046cd7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7e8c,	// (0x00046cd7) grid_vkb_keypad_bottom_left_pane

0x7ea1,	// (0x00046cec) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7ea1,	// (0x00046cec) grid_vkb_keypad_bottom_right_pane

0x7eb6,	// (0x00046d01) fep_vkb_top_text_pane_g1

0xe3b0,	// (0x0004d1fb) fep_vkb_top_text_pane_t1

0xe3c2,	// (0x0004d20d) cell_vkb_side_pane_ParamLimits

0xe3c2,	// (0x0004d20d) cell_vkb_side_pane

0x7af0,	// (0x0004693b) cell_vkb_side_pane_g1

0x7f25,	// (0x00046d70) cell_vkb_keypad_pane_ParamLimits

0x7f25,	// (0x00046d70) cell_vkb_keypad_pane

0x7f9a,	// (0x00046de5) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0004e98f) bg_popup_fep_shadow_pane_g

0x7af0,	// (0x0004693b) cell_hwr_side_pane_g1

0x7af0,	// (0x0004693b) cell_hwr_side_pane_g2

0x7fa4,	// (0x00046def) cell_vkb_keypad_pane_t1

0xe3d8,	// (0x0004d223) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe3d8,	// (0x0004d223) cell_vkb_keypad_bottom_left_pane

0xe3ed,	// (0x0004d238) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe3ed,	// (0x0004d238) cell_vkb_keypad_bottom_right_pane

0x7af0,	// (0x0004693b) cell_vkb_keypad_bottom_left_pane_g1

0x7af0,	// (0x0004693b) cell_vkb_keypad_bottom_right_pane_g1

0x8008,	// (0x00046e53) cell_vkb_keypad_number_pane_ParamLimits

0x8008,	// (0x00046e53) cell_vkb_keypad_number_pane

0x8033,	// (0x00046e7e) cell_vkb_keypad_number_pane_g1

0x803d,	// (0x00046e88) cell_vkb_keypad_number_pane_g2

0x8046,	// (0x00046e91) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0004e981) cell_vkb_keypad_number_pane_g

0x7fa4,	// (0x00046def) cell_vkb_keypad_number_pane_t1

0x806a,	// (0x00046eb5) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0004e97c) cell_hwr_side_pane_g

0x8083,	// (0x00046ece) cell_hwr_side_pane_t1

0x2938,	// (0x00041783) cell_hwr_side_pane_t1_copy1

0x7d6e,	// (0x00046bb9) cell_hwr_candidate_pane_g1

0x2946,	// (0x00041791) cell_hwr_candidate_pane_t1

0x7af0,	// (0x0004693b) cell_vkb_candidate_pane_g2

0x8109,	// (0x00046f54) cell_vkb_candidate_pane_t1

0x2706,	// (0x00041551) bg_popup_fep_shadow_pane_ParamLimits

0x2706,	// (0x00041551) bg_popup_fep_shadow_pane

0xe28d,	// (0x0004d0d8) bg_fep_hwr_top_pane_g4

0x7b70,	// (0x000469bb) bg_hwr_side_pane_g1_ParamLimits

0x7b70,	// (0x000469bb) bg_hwr_side_pane_g1

0xca60,	// (0x0004b8ab) cell_hwr_side_pane_ParamLimits

0xca60,	// (0x0004b8ab) cell_hwr_side_pane

0x2859,	// (0x000416a4) fep_hwr_write_pane_g1_ParamLimits

0x2859,	// (0x000416a4) fep_hwr_write_pane_g1

0x2866,	// (0x000416b1) fep_hwr_write_pane_g2_ParamLimits

0x2866,	// (0x000416b1) fep_hwr_write_pane_g2

0x2873,	// (0x000416be) fep_hwr_write_pane_g3_ParamLimits

0x2873,	// (0x000416be) fep_hwr_write_pane_g3

0xca80,	// (0x0004b8cb) fep_hwr_write_pane_g4_ParamLimits

0xca80,	// (0x0004b8cb) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0004e94e) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0004e94e) fep_hwr_write_pane_g

0xe28d,	// (0x0004d0d8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe28d,	// (0x0004d0d8) bg_fep_hwr_candidate_pane_g2

0x2896,	// (0x000416e1) cell_hwr_candidate_pane_ParamLimits

0x2896,	// (0x000416e1) cell_hwr_candidate_pane

0x28d8,	// (0x00041723) fep_hwr_candidate_pane_g1_ParamLimits

0x7bd0,	// (0x00046a1b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7bd0,	// (0x00046a1b) bg_popup_fep_shadow_pane_cp2

0x7d6e,	// (0x00046bb9) fep_vkb_top_pane_g4_ParamLimits

0x7d6e,	// (0x00046bb9) fep_vkb_top_pane_g4

0x7db4,	// (0x00046bff) fep_vkb_side_pane_g2_ParamLimits

0x7db4,	// (0x00046bff) fep_vkb_side_pane_g2

0xbaaa,	// (0x0004a8f5) list_setting_pane_t4_ParamLimits

0xbaaa,	// (0x0004a8f5) list_setting_pane_t4

0xbb44,	// (0x0004a98f) list_setting_number_pane_t5_ParamLimits

0xbb44,	// (0x0004a98f) list_setting_number_pane_t5

0x4721,	// (0x0004356c) list_double_heading_pane_cp2_ParamLimits

0x4721,	// (0x0004356c) list_double_heading_pane_cp2

0x400f,	// (0x00042e5a) list_double_heading_pane_g1_cp2_ParamLimits

0x400f,	// (0x00042e5a) list_double_heading_pane_g1_cp2

0x4082,	// (0x00042ecd) list_double_heading_pane_g2_cp2_ParamLimits

0x4082,	// (0x00042ecd) list_double_heading_pane_g2_cp2

0x8117,	// (0x00046f62) list_double_heading_pane_t1_cp2_ParamLimits

0x8117,	// (0x00046f62) list_double_heading_pane_t1_cp2

0x812d,	// (0x00046f78) list_double_heading_pane_t2_cp2_ParamLimits

0x812d,	// (0x00046f78) list_double_heading_pane_t2_cp2

0x36c7,	// (0x00042512) aid_value_unit2

0x137c,	// (0x000401c7) popup_preview_fixed_window

0x3a5c,	// (0x000428a7) bg_popup_preview_window_pane_cp02

0x813f,	// (0x00046f8a) list_preview_fixed_pane

0x8185,	// (0x00046fd0) list_empty_pane_fp_ParamLimits

0x8185,	// (0x00046fd0) list_empty_pane_fp

0x8185,	// (0x00046fd0) list_single_cale_day_pane_fp_ParamLimits

0x8185,	// (0x00046fd0) list_single_cale_day_pane_fp

0x8185,	// (0x00046fd0) list_single_graphic_heading_pane_fp_ParamLimits

0x8185,	// (0x00046fd0) list_single_graphic_heading_pane_fp

0x8185,	// (0x00046fd0) list_single_graphic_pane_fp_ParamLimits

0x8185,	// (0x00046fd0) list_single_graphic_pane_fp

0x8185,	// (0x00046fd0) list_single_heading_pane_fp_ParamLimits

0x8185,	// (0x00046fd0) list_single_heading_pane_fp

0x8185,	// (0x00046fd0) list_single_pane_fp_ParamLimits

0x8185,	// (0x00046fd0) list_single_pane_fp

0x819a,	// (0x00046fe5) list_single_pane_fp_g1_ParamLimits

0x819a,	// (0x00046fe5) list_single_pane_fp_g1

0x400f,	// (0x00042e5a) list_single_pane_fp_g2_ParamLimits

0x400f,	// (0x00042e5a) list_single_pane_fp_g2

0x4082,	// (0x00042ecd) list_single_pane_fp_g3_ParamLimits

0x4082,	// (0x00042ecd) list_single_pane_fp_g3

0x81a6,	// (0x00046ff1) list_single_pane_fp_g4_ParamLimits

0x81a6,	// (0x00046ff1) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0004e9b0) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0004e9b0) list_single_pane_fp_g

0x0e0f,	// (0x0003fc5a) list_single_pane_fp_t1_ParamLimits

0x0e0f,	// (0x0003fc5a) list_single_pane_fp_t1

0x0e26,	// (0x0003fc71) list_single_graphic_pane_fp_g1_ParamLimits

0x0e26,	// (0x0003fc71) list_single_graphic_pane_fp_g1

0x819a,	// (0x00046fe5) list_single_graphic_pane_fp_g2_ParamLimits

0x819a,	// (0x00046fe5) list_single_graphic_pane_fp_g2

0x400f,	// (0x00042e5a) list_single_graphic_pane_fp_g3_ParamLimits

0x400f,	// (0x00042e5a) list_single_graphic_pane_fp_g3

0x4082,	// (0x00042ecd) list_single_graphic_pane_fp_g4_ParamLimits

0x4082,	// (0x00042ecd) list_single_graphic_pane_fp_g4

0x81a6,	// (0x00046ff1) list_single_graphic_pane_fp_g5_ParamLimits

0x81a6,	// (0x00046ff1) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004e9b9) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004e9b9) list_single_graphic_pane_fp_g

0x0e32,	// (0x0003fc7d) list_single_graphic_pane_fp_t1_ParamLimits

0x0e32,	// (0x0003fc7d) list_single_graphic_pane_fp_t1

0x0e26,	// (0x0003fc71) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0e26,	// (0x0003fc71) list_single_graphic_heading_pane_fp_g1

0x819a,	// (0x00046fe5) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x819a,	// (0x00046fe5) list_single_graphic_heading_pane_fp_g2

0x400f,	// (0x00042e5a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x400f,	// (0x00042e5a) list_single_graphic_heading_pane_fp_g3

0x4082,	// (0x00042ecd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4082,	// (0x00042ecd) list_single_graphic_heading_pane_fp_g4

0x81a6,	// (0x00046ff1) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x81a6,	// (0x00046ff1) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004e9b9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004e9b9) list_single_graphic_heading_pane_fp_g

0x0e48,	// (0x0003fc93) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0e48,	// (0x0003fc93) list_single_graphic_heading_pane_fp_t1

0x0e5e,	// (0x0003fca9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0e5e,	// (0x0003fca9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0004e9c4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0004e9c4) list_single_graphic_heading_pane_fp_t

0x0e70,	// (0x0003fcbb) list_single_cale_day_pane_fp_g1_ParamLimits

0x0e70,	// (0x0003fcbb) list_single_cale_day_pane_fp_g1

0x81b2,	// (0x00046ffd) list_single_cale_day_pane_fp_g2_ParamLimits

0x81b2,	// (0x00046ffd) list_single_cale_day_pane_fp_g2

0x2964,	// (0x000417af) list_single_cale_day_pane_fp_g3_ParamLimits

0x2964,	// (0x000417af) list_single_cale_day_pane_fp_g3

0x298c,	// (0x000417d7) list_single_cale_day_pane_fp_g4_ParamLimits

0x298c,	// (0x000417d7) list_single_cale_day_pane_fp_g4

0x29b0,	// (0x000417fb) list_single_cale_day_pane_fp_g5_ParamLimits

0x29b0,	// (0x000417fb) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e9c9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e9c9) list_single_cale_day_pane_fp_g

0x0ea8,	// (0x0003fcf3) list_single_cale_day_pane_fp_t1_ParamLimits

0x0ea8,	// (0x0003fcf3) list_single_cale_day_pane_fp_t1

0x0ece,	// (0x0003fd19) list_single_cale_day_pane_fp_t2_ParamLimits

0x0ece,	// (0x0003fd19) list_single_cale_day_pane_fp_t2

0x0ee7,	// (0x0003fd32) list_single_cale_day_pane_fp_t3_ParamLimits

0x0ee7,	// (0x0003fd32) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0004e9d4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0004e9d4) list_single_cale_day_pane_fp_t

0x819a,	// (0x00046fe5) list_empty_pane_fp_g1_ParamLimits

0x819a,	// (0x00046fe5) list_empty_pane_fp_g1

0x0f00,	// (0x0003fd4b) list_empty_pane_fp_t1

0x0f0e,	// (0x0003fd59) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0004e9db) list_empty_pane_fp_t

0x819a,	// (0x00046fe5) list_single_heading_pane_fp_g1_ParamLimits

0x819a,	// (0x00046fe5) list_single_heading_pane_fp_g1

0x400f,	// (0x00042e5a) list_single_heading_pane_fp_g2_ParamLimits

0x400f,	// (0x00042e5a) list_single_heading_pane_fp_g2

0x4082,	// (0x00042ecd) list_single_heading_pane_fp_g3_ParamLimits

0x4082,	// (0x00042ecd) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0004e9e0) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0004e9e0) list_single_heading_pane_fp_g

0x0f1c,	// (0x0003fd67) list_single_heading_pane_fp_t1_ParamLimits

0x0f1c,	// (0x0003fd67) list_single_heading_pane_fp_t1

0x0f2e,	// (0x0003fd79) list_single_heading_pane_fp_t2_ParamLimits

0x0f2e,	// (0x0003fd79) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004e9e7) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0004e9e7) list_single_heading_pane_fp_t

0x4267,	// (0x000430b2) aid_size_cell_fast

0x39cc,	// (0x00042817) soft_indicator_pane_cp1_t1

0x42a4,	// (0x000430ef) cell_app_pane_cp2_ParamLimits

0x42a4,	// (0x000430ef) cell_app_pane_cp2

0x2728,	// (0x00041573) fep_hwr_candidate_drop_down_list_pane

0xe29b,	// (0x0004d0e6) fep_hwr_candidate_pane_g3_ParamLimits

0xe29b,	// (0x0004d0e6) fep_hwr_candidate_pane_g3

0xe2a8,	// (0x0004d0f3) fep_hwr_candidate_pane_g4_ParamLimits

0xe2a8,	// (0x0004d0f3) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0004e95b) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0004e95b) fep_hwr_candidate_pane_g

0x7c55,	// (0x00046aa0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7c55,	// (0x00046aa0) fep_vkb_candidate_drop_down_list_pane

0x8072,	// (0x00046ebd) fep_vkb_candidate_pane_g3

0x807a,	// (0x00046ec5) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0004e988) fep_vkb_candidate_pane_g

0x7d6e,	// (0x00046bb9) cell_hwr_candidate_pane_g1_ParamLimits

0x8091,	// (0x00046edc) cell_hwr_candidate_pane_g3_ParamLimits

0x8091,	// (0x00046edc) cell_hwr_candidate_pane_g3

0x80b2,	// (0x00046efd) cell_hwr_candidate_pane_g4_ParamLimits

0x80b2,	// (0x00046efd) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0004e9a2) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0004e9a2) cell_hwr_candidate_pane_g

0x80d3,	// (0x00046f1e) cell_vkb_candidate_pane_g3_ParamLimits

0x80d3,	// (0x00046f1e) cell_vkb_candidate_pane_g3

0x80ee,	// (0x00046f39) cell_vkb_candidate_pane_g4_ParamLimits

0x80ee,	// (0x00046f39) cell_vkb_candidate_pane_g4

0x81be,	// (0x00047009) cell_app_pane_cp2_g1_ParamLimits

0x81be,	// (0x00047009) cell_app_pane_cp2_g1

0x81dc,	// (0x00047027) cell_app_pane_cp2_g2_ParamLimits

0x81dc,	// (0x00047027) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0004e9ec) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0004e9ec) cell_app_pane_cp2_g

0x81e8,	// (0x00047033) cell_app_pane_cp2_t1_ParamLimits

0x81e8,	// (0x00047033) cell_app_pane_cp2_t1

0x4074,	// (0x00042ebf) grid_highlight_pane_cp1_ParamLimits

0x4074,	// (0x00042ebf) grid_highlight_pane_cp1

0x29d4,	// (0x0004181f) cell_hwr_candidate_pane_cp1_ParamLimits

0x29d4,	// (0x0004181f) cell_hwr_candidate_pane_cp1

0x7d6e,	// (0x00046bb9) fep_hwr_candidate_drop_down_list_pane_g1

0x81fa,	// (0x00047045) fep_hwr_candidate_drop_down_list_pane_g2

0x8207,	// (0x00047052) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004e9f1) fep_hwr_candidate_drop_down_list_pane_g

0x29f3,	// (0x0004183e) fep_hwr_candidate_drop_down_list_scroll_pane

0x29fc,	// (0x00041847) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x29fc,	// (0x00041847) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2a09,	// (0x00041854) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2a09,	// (0x00041854) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2a16,	// (0x00041861) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2a16,	// (0x00041861) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x80d3,	// (0x00046f1e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x80d3,	// (0x00046f1e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x80ee,	// (0x00046f39) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x80ee,	// (0x00046f39) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2a23,	// (0x0004186e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2a23,	// (0x0004186e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2a3e,	// (0x00041889) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2a3e,	// (0x00041889) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2a59,	// (0x000418a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2a59,	// (0x000418a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0004e9f8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0004e9f8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8214,	// (0x0004705f) cell_vkb_candidate_pane_cp1_ParamLimits

0x8214,	// (0x0004705f) cell_vkb_candidate_pane_cp1

0x7d6e,	// (0x00046bb9) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7d6e,	// (0x00046bb9) fep_vkb_candidate_drop_down_list_pane_g1

0x81fa,	// (0x00047045) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x81fa,	// (0x00047045) fep_vkb_candidate_drop_down_list_pane_g2

0x8207,	// (0x00047052) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8207,	// (0x00047052) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004e9f1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0004e9f1) fep_vkb_candidate_drop_down_list_pane_g

0x8234,	// (0x0004707f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8234,	// (0x0004707f) fep_vkb_candidate_drop_down_list_scroll_pane

0x8241,	// (0x0004708c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8241,	// (0x0004708c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x824e,	// (0x00047099) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x824e,	// (0x00047099) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x825a,	// (0x000470a5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x825a,	// (0x000470a5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8091,	// (0x00046edc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8091,	// (0x00046edc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x80b2,	// (0x00046efd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x80b2,	// (0x00046efd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8266,	// (0x000470b1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8266,	// (0x000470b1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8287,	// (0x000470d2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8287,	// (0x000470d2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x82a8,	// (0x000470f3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x82a8,	// (0x000470f3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0004ea09) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0004ea09) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd0c6,	// (0x0004bf11) title_pane_g1_ParamLimits

0xd0d9,	// (0x0004bf24) title_pane_g2_ParamLimits

0xf54e,	// (0x0004e399) title_pane_g_ParamLimits

0x46da,	// (0x00043525) aid_call2_pane

0x46e2,	// (0x0004352d) aid_call_pane

0x46ea,	// (0x00043535) popup_clock_analogue_window_g1

0x46ea,	// (0x00043535) popup_clock_analogue_window_g2

0x1799,	// (0x000405e4) popup_clock_analogue_window_g3

0x17a2,	// (0x000405ed) popup_clock_analogue_window_g4

0x36e9,	// (0x00042534) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0004e548) popup_clock_analogue_window_g

0x17aa,	// (0x000405f5) popup_clock_analogue_window_t1

0x17b8,	// (0x00040603) clock_digital_number_pane_ParamLimits

0x17b8,	// (0x00040603) clock_digital_number_pane

0x17c4,	// (0x0004060f) clock_digital_number_pane_cp02_ParamLimits

0x17c4,	// (0x0004060f) clock_digital_number_pane_cp02

0x17d0,	// (0x0004061b) clock_digital_number_pane_cp03_ParamLimits

0x17d0,	// (0x0004061b) clock_digital_number_pane_cp03

0x17dc,	// (0x00040627) clock_digital_number_pane_cp04_ParamLimits

0x17dc,	// (0x00040627) clock_digital_number_pane_cp04

0x17e8,	// (0x00040633) clock_digital_separator_pane_ParamLimits

0x17e8,	// (0x00040633) clock_digital_separator_pane

0x17f4,	// (0x0004063f) popup_clock_digital_window_t1_ParamLimits

0x17f4,	// (0x0004063f) popup_clock_digital_window_t1

0x36e9,	// (0x00042534) clock_digital_number_pane_g1

0x36e9,	// (0x00042534) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0004e553) clock_digital_number_pane_g

0x36e9,	// (0x00042534) clock_digital_separator_pane_g1

0x36e9,	// (0x00042534) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0004e553) clock_digital_separator_pane_g

0xd76d,	// (0x0004c5b8) aid_fill_nsta_ParamLimits

0xd8a3,	// (0x0004c6ee) indicator_nsta_pane_ParamLimits

0x5328,	// (0x00044173) popup_clock_analogue_window

0x5328,	// (0x00044173) popup_clock_digital_window

0x4228,	// (0x00043073) grid_indicator_nsta_pane_ParamLimits

0x7508,	// (0x00046353) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0004e8db) clock_nsta_pane_t

0x175d,	// (0x000405a8) aid_size_max_handle

0xc162,	// (0x0004afad) aid_size_min_handle

0x4cfd,	// (0x00043b48) editor_scroll_pane

0x82c3,	// (0x0004710e) ex_editor_pane

0x41d5,	// (0x00043020) scroll_pane_cp13

0x4007,	// (0x00042e52) scroll_pane_cp14

0x4719,	// (0x00043564) scroll_pane_cp36

0xd550,	// (0x0004c39b) list_single_graphic_hl_pane_cp2_ParamLimits

0xd550,	// (0x0004c39b) list_single_graphic_hl_pane_cp2

0xca26,	// (0x0004b871) list_single_graphic_hl_pane_ParamLimits

0xca26,	// (0x0004b871) list_single_graphic_hl_pane

0x0f44,	// (0x0003fd8f) aid_size_min_hl_cp1

0x82cb,	// (0x00047116) list_highlight_pane_cp34_ParamLimits

0x82cb,	// (0x00047116) list_highlight_pane_cp34

0x82dc,	// (0x00047127) list_single_graphic_hl_pane_g1_ParamLimits

0x82dc,	// (0x00047127) list_single_graphic_hl_pane_g1

0xbdf2,	// (0x0004ac3d) list_single_graphic_hl_pane_g2_ParamLimits

0xbdf2,	// (0x0004ac3d) list_single_graphic_hl_pane_g2

0xbdf2,	// (0x0004ac3d) list_single_graphic_hl_pane_g3_ParamLimits

0xbdf2,	// (0x0004ac3d) list_single_graphic_hl_pane_g3

0x4c6e,	// (0x00043ab9) list_single_graphic_hl_pane_g4_ParamLimits

0x4c6e,	// (0x00043ab9) list_single_graphic_hl_pane_g4

0x2a74,	// (0x000418bf) list_single_graphic_hl_pane_g5_ParamLimits

0x2a74,	// (0x000418bf) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0004ea1a) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0004ea1a) list_single_graphic_hl_pane_g

0xbdfe,	// (0x0004ac49) list_single_graphic_hl_pane_t1_ParamLimits

0xbdfe,	// (0x0004ac49) list_single_graphic_hl_pane_t1

0x82e9,	// (0x00047134) aid_size_min_hl_cp2

0x82f2,	// (0x0004713d) list_highlight_pane_cp34_cp2_ParamLimits

0x82f2,	// (0x0004713d) list_highlight_pane_cp34_cp2

0x82dc,	// (0x00047127) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x82dc,	// (0x00047127) list_single_graphic_hl_pane_g1_cp2

0x82ff,	// (0x0004714a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x82ff,	// (0x0004714a) list_single_graphic_hl_pane_g2_cp2

0x830b,	// (0x00047156) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x830b,	// (0x00047156) list_single_graphic_hl_pane_g3_cp2

0x8027,	// (0x00046e72) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8027,	// (0x00046e72) list_single_graphic_hl_pane_g4_cp2

0x8319,	// (0x00047164) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8319,	// (0x00047164) list_single_graphic_hl_pane_g5_cp2

0xc1cf,	// (0x0004b01a) control_pane_g4_ParamLimits

0xc1cf,	// (0x0004b01a) control_pane_g4

0x5021,	// (0x00043e6c) bg_popup_sub_pane_cp10_ParamLimits

0x7afa,	// (0x00046945) list_choice_list_pane_ParamLimits

0x7b09,	// (0x00046954) scroll_pane_cp23

0x3a5c,	// (0x000428a7) bg_popup_preview_window_pane_cp02_ParamLimits

0x813f,	// (0x00046f8a) list_preview_fixed_pane_ParamLimits

0x8155,	// (0x00046fa0) list_preview_fixed_pane_cp_ParamLimits

0x8155,	// (0x00046fa0) list_preview_fixed_pane_cp

0x8161,	// (0x00046fac) popup_preview_fixed_window_g1_ParamLimits

0x8161,	// (0x00046fac) popup_preview_fixed_window_g1

0x816d,	// (0x00046fb8) popup_preview_fixed_window_g2_ParamLimits

0x816d,	// (0x00046fb8) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0004e9a9) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0004e9a9) popup_preview_fixed_window_g

0x16d1,	// (0x0004051c) aid_navi_side_left_pane_ParamLimits

0x16e6,	// (0x00040531) aid_navi_side_right_pane_ParamLimits

0x16fe,	// (0x00040549) navi_icon_pane_stacon_ParamLimits

0x1712,	// (0x0004055d) navi_navi_pane_stacon_ParamLimits

0x16fe,	// (0x00040549) navi_text_pane_stacon_ParamLimits

0x36df,	// (0x0004252a) main_text_info_pane

0x8343,	// (0x0004718e) listscroll_text_info_pane

0x834b,	// (0x00047196) list_text_info_pane_ParamLimits

0x834b,	// (0x00047196) list_text_info_pane

0x835a,	// (0x000471a5) scroll_pane_cp24_ParamLimits

0x835a,	// (0x000471a5) scroll_pane_cp24

0xe408,	// (0x0004d253) list_text_info_pane_t1_ParamLimits

0xe408,	// (0x0004d253) list_text_info_pane_t1

0xc324,	// (0x0004b16f) popup_fast_swap2_window_ParamLimits

0xc324,	// (0x0004b16f) popup_fast_swap2_window

0x83a9,	// (0x000471f4) aid_size_cell_fast2

0x36df,	// (0x0004252a) bg_popup_window_pane_cp17

0x59b1,	// (0x000447fc) heading_pane_cp2

0x3cd1,	// (0x00042b1c) listscroll_fast2_pane

0x83b3,	// (0x000471fe) grid_fast2_pane

0x83bd,	// (0x00047208) listscroll_fast2_pane_g1

0x83c5,	// (0x00047210) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0004ea25) listscroll_fast2_pane_g

0x41d5,	// (0x00043020) scroll_pane_cp26

0x83cf,	// (0x0004721a) cell_fast2_pane_ParamLimits

0x83cf,	// (0x0004721a) cell_fast2_pane

0x83e4,	// (0x0004722f) cell_fast2_pane_g1

0x83ed,	// (0x00047238) cell_fast2_pane_g2

0x83f6,	// (0x00047241) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0004ea2a) cell_fast2_pane_g

0x3dc4,	// (0x00042c0f) grid_highlight_pane_cp9

0x3dd9,	// (0x00042c24) main_eswt_pane_ParamLimits

0x3dd9,	// (0x00042c24) main_eswt_pane

0x836f,	// (0x000471ba) list_single_text_info_pane

0x83fe,	// (0x00047249) eswt_ctrl_button_pane

0x83fe,	// (0x00047249) eswt_ctrl_canvas_pane

0x8406,	// (0x00047251) eswt_ctrl_combo_pane

0x83fe,	// (0x00047249) eswt_ctrl_default_pane

0x83fe,	// (0x00047249) eswt_ctrl_label_pane

0x840e,	// (0x00047259) eswt_ctrl_wait_pane

0x8416,	// (0x00047261) eswt_shell_pane

0x36df,	// (0x0004252a) listscroll_eswt_app_pane

0x8436,	// (0x00047281) popup_eswt_tasktip_window_ParamLimits

0x8436,	// (0x00047281) popup_eswt_tasktip_window

0x55c5,	// (0x00044410) bg_popup_window_pane_cp18

0x8447,	// (0x00047292) eswt_control_pane_g1_ParamLimits

0x8447,	// (0x00047292) eswt_control_pane_g1

0x8454,	// (0x0004729f) eswt_control_pane_g2_ParamLimits

0x8454,	// (0x0004729f) eswt_control_pane_g2

0x8461,	// (0x000472ac) eswt_control_pane_g3_ParamLimits

0x8461,	// (0x000472ac) eswt_control_pane_g3

0x846e,	// (0x000472b9) eswt_control_pane_g4_ParamLimits

0x846e,	// (0x000472b9) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0004ea31) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0004ea31) eswt_control_pane_g

0x4074,	// (0x00042ebf) bg_button_pane_ParamLimits

0x4074,	// (0x00042ebf) bg_button_pane

0x3dd9,	// (0x00042c24) common_borders_pane_copy2_ParamLimits

0x3dd9,	// (0x00042c24) common_borders_pane_copy2

0x847b,	// (0x000472c6) control_button_pane_g1_ParamLimits

0x847b,	// (0x000472c6) control_button_pane_g1

0x8487,	// (0x000472d2) control_button_pane_g2_ParamLimits

0x8487,	// (0x000472d2) control_button_pane_g2

0x8493,	// (0x000472de) control_button_pane_g3_ParamLimits

0x8493,	// (0x000472de) control_button_pane_g3

0x0002,

0xfbef,	// (0x0004ea3a) control_button_pane_g_ParamLimits

0xfbef,	// (0x0004ea3a) control_button_pane_g

0x84a7,	// (0x000472f2) control_button_pane_t1

0x84b5,	// (0x00047300) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0004ea41) control_button_pane_t

0x5551,	// (0x0004439c) bg_button_pane_g1

0x5559,	// (0x000443a4) bg_button_pane_g2

0x5561,	// (0x000443ac) bg_button_pane_g3

0x5569,	// (0x000443b4) bg_button_pane_g4

0x5571,	// (0x000443bc) bg_button_pane_g5

0x5579,	// (0x000443c4) bg_button_pane_g6

0x5581,	// (0x000443cc) bg_button_pane_g7

0x5589,	// (0x000443d4) bg_button_pane_g8

0x5591,	// (0x000443dc) bg_button_pane_g9

0x0008,

0xf866,	// (0x0004e6b1) bg_button_pane_g

0x7ab5,	// (0x00046900) common_borders_pane_ParamLimits

0x7ab5,	// (0x00046900) common_borders_pane

0x8447,	// (0x00047292) eswt_control_pane_g1_copy1_ParamLimits

0x8447,	// (0x00047292) eswt_control_pane_g1_copy1

0x8454,	// (0x0004729f) eswt_control_pane_g2_copy1_ParamLimits

0x8454,	// (0x0004729f) eswt_control_pane_g2_copy1

0x8461,	// (0x000472ac) eswt_control_pane_g3_copy1_ParamLimits

0x8461,	// (0x000472ac) eswt_control_pane_g3_copy1

0x846e,	// (0x000472b9) eswt_control_pane_g4_copy1_ParamLimits

0x846e,	// (0x000472b9) eswt_control_pane_g4_copy1

0x7af0,	// (0x0004693b) bg_eswt_ctrl_canvas_pane_g1

0x7ab5,	// (0x00046900) common_borders_pane_cp2_ParamLimits

0x7ab5,	// (0x00046900) common_borders_pane_cp2

0x7ab5,	// (0x00046900) common_borders_pane_cp3_ParamLimits

0x7ab5,	// (0x00046900) common_borders_pane_cp3

0x84c3,	// (0x0004730e) separator_horizontal_pane

0x84cb,	// (0x00047316) separator_vertical_pane

0x8447,	// (0x00047292) eswt_control_pane_g1_copy2_ParamLimits

0x8447,	// (0x00047292) eswt_control_pane_g1_copy2

0x8454,	// (0x0004729f) eswt_control_pane_g2_copy2_ParamLimits

0x8454,	// (0x0004729f) eswt_control_pane_g2_copy2

0x8461,	// (0x000472ac) eswt_control_pane_g3_copy2_ParamLimits

0x8461,	// (0x000472ac) eswt_control_pane_g3_copy2

0x846e,	// (0x000472b9) eswt_control_pane_g4_copy2_ParamLimits

0x846e,	// (0x000472b9) eswt_control_pane_g4_copy2

0x36df,	// (0x0004252a) common_borders_pane_cp4

0x84d4,	// (0x0004731f) separator_horizontal_pane_g1

0x84dd,	// (0x00047328) separator_horizontal_pane_g2

0x84e6,	// (0x00047331) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0004ea46) separator_horizontal_pane_g

0x8447,	// (0x00047292) eswt_control_pane_g1_copy3_ParamLimits

0x8447,	// (0x00047292) eswt_control_pane_g1_copy3

0x8454,	// (0x0004729f) eswt_control_pane_g2_copy3_ParamLimits

0x8454,	// (0x0004729f) eswt_control_pane_g2_copy3

0x8461,	// (0x000472ac) eswt_control_pane_g3_copy3_ParamLimits

0x8461,	// (0x000472ac) eswt_control_pane_g3_copy3

0x846e,	// (0x000472b9) eswt_control_pane_g4_copy3_ParamLimits

0x846e,	// (0x000472b9) eswt_control_pane_g4_copy3

0x36df,	// (0x0004252a) common_borders_pane_cp5

0x84ef,	// (0x0004733a) separator_vertical_pane_g1

0x84f8,	// (0x00047343) separator_vertical_pane_g2

0x8501,	// (0x0004734c) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0004ea4d) separator_vertical_pane_g

0x8447,	// (0x00047292) eswt_control_pane_g1_copy4_ParamLimits

0x8447,	// (0x00047292) eswt_control_pane_g1_copy4

0x8454,	// (0x0004729f) eswt_control_pane_g2_copy4_ParamLimits

0x8454,	// (0x0004729f) eswt_control_pane_g2_copy4

0x8461,	// (0x000472ac) eswt_control_pane_g3_copy4_ParamLimits

0x8461,	// (0x000472ac) eswt_control_pane_g3_copy4

0x846e,	// (0x000472b9) eswt_control_pane_g4_copy4_ParamLimits

0x846e,	// (0x000472b9) eswt_control_pane_g4_copy4

0xe423,	// (0x0004d26e) eswt_ctrl_combo_button_pane

0xe42b,	// (0x0004d276) eswt_ctrl_input_pane

0xe433,	// (0x0004d27e) popup_choice_list_window_cp70

0xe43b,	// (0x0004d286) eswt_ctrl_input_pane_t1

0x36df,	// (0x0004252a) input_focus_pane_cp70

0x7ab5,	// (0x00046900) bg_button_pane_cp70_ParamLimits

0x7ab5,	// (0x00046900) bg_button_pane_cp70

0xe449,	// (0x0004d294) eswt_ctrl_combo_button_pane_g1

0x8538,	// (0x00047383) wait_bar_pane_cp70

0x55c5,	// (0x00044410) bg_popup_window_pane_cp70_ParamLimits

0x55c5,	// (0x00044410) bg_popup_window_pane_cp70

0x8540,	// (0x0004738b) popup_eswt_tasktip_window_t1

0x8556,	// (0x000473a1) wait_bar_pane_cp71_ParamLimits

0x8556,	// (0x000473a1) wait_bar_pane_cp71

0x8562,	// (0x000473ad) grid_eswt_app_pane

0x44fc,	// (0x00043347) scroll_pane_cp70

0xe451,	// (0x0004d29c) cell_eswt_app_pane_ParamLimits

0xe451,	// (0x0004d29c) cell_eswt_app_pane

0xe47b,	// (0x0004d2c6) cell_eswt_app_pane_g1_ParamLimits

0xe47b,	// (0x0004d2c6) cell_eswt_app_pane_g1

0xe4aa,	// (0x0004d2f5) cell_eswt_app_pane_g2_ParamLimits

0xe4aa,	// (0x0004d2f5) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0004ea54) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0004ea54) cell_eswt_app_pane_g

0xe4d3,	// (0x0004d31e) cell_eswt_app_pane_t1_ParamLimits

0xe4d3,	// (0x0004d31e) cell_eswt_app_pane_t1

0x8625,	// (0x00047470) grid_highlight_pane_cp70_ParamLimits

0x8625,	// (0x00047470) grid_highlight_pane_cp70

0x4bd2,	// (0x00043a1d) set_content_pane_g1

0xd722,	// (0x0004c56d) status_small_volume_pane

0x2a88,	// (0x000418d3) status_small_volume_pane_g1

0x2a90,	// (0x000418db) volume_small2_pane

0x2a99,	// (0x000418e4) volume_small2_pane_g1

0x2aa2,	// (0x000418ed) volume_small2_pane_g2

0x2aab,	// (0x000418f6) volume_small2_pane_g3

0x2ab4,	// (0x000418ff) volume_small2_pane_g4

0x2abd,	// (0x00041908) volume_small2_pane_g5

0x2ac6,	// (0x00041911) volume_small2_pane_g6

0x2acf,	// (0x0004191a) volume_small2_pane_g7

0x2ad8,	// (0x00041923) volume_small2_pane_g8

0x2ae1,	// (0x0004192c) volume_small2_pane_g9

0x2aea,	// (0x00041935) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0004ea59) volume_small2_pane_g

0x7eb6,	// (0x00046d01) fep_vkb_top_text_pane_g1_ParamLimits

0xe3b0,	// (0x0004d1fb) fep_vkb_top_text_pane_t1_ParamLimits

0x8179,	// (0x00046fc4) popup_preview_fixed_window_g3_ParamLimits

0x8179,	// (0x00046fc4) popup_preview_fixed_window_g3

0xc947,	// (0x0004b792) popup_toolbar_trans_pane

0xdd9e,	// (0x0004cbe9) aid_height_set_list_ParamLimits

0x6927,	// (0x00045772) aid_size_parent_ParamLimits

0x5021,	// (0x00043e6c) list_highlight_pane_cp2_ParamLimits

0x4bd2,	// (0x00043a1d) set_content_pane_g1_ParamLimits

0xca37,	// (0x0004b882) list_single_image_pane_ParamLimits

0xca37,	// (0x0004b882) list_single_image_pane

0xe505,	// (0x0004d350) aid_size_cell_image_ParamLimits

0xe505,	// (0x0004d350) aid_size_cell_image

0xe512,	// (0x0004d35d) grid_single_image_pane_ParamLimits

0xe512,	// (0x0004d35d) grid_single_image_pane

0x52a9,	// (0x000440f4) list_single_image_pane_g1_ParamLimits

0x52a9,	// (0x000440f4) list_single_image_pane_g1

0x864a,	// (0x00047495) list_single_image_pane_g2_ParamLimits

0x864a,	// (0x00047495) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0004ea6e) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0004ea6e) list_single_image_pane_g

0x865e,	// (0x000474a9) list_single_image_pane_t1_ParamLimits

0x865e,	// (0x000474a9) list_single_image_pane_t1

0xe520,	// (0x0004d36b) cell_image_list_pane_ParamLimits

0xe520,	// (0x0004d36b) cell_image_list_pane

0xe536,	// (0x0004d381) cell_image_list_pane_g1

0xe53f,	// (0x0004d38a) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0004ea73) cell_image_list_pane_g

0x869a,	// (0x000474e5) aid_size_cell_tb_trans_pane

0x4074,	// (0x00042ebf) bg_tb_trans_pane

0x86ac,	// (0x000474f7) grid_tb_trans_pane

0x5551,	// (0x0004439c) bg_tb_trans_pane_g1

0x5559,	// (0x000443a4) bg_tb_trans_pane_g2

0x5561,	// (0x000443ac) bg_tb_trans_pane_g3

0x5569,	// (0x000443b4) bg_tb_trans_pane_g4

0x5571,	// (0x000443bc) bg_tb_trans_pane_g5

0x5589,	// (0x000443d4) bg_tb_trans_pane_g6

0x5591,	// (0x000443dc) bg_tb_trans_pane_g7

0x5579,	// (0x000443c4) bg_tb_trans_pane_g8

0x5581,	// (0x000443cc) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0004ea78) bg_tb_trans_pane_g

0x86c0,	// (0x0004750b) cell_toolbar_trans_pane_ParamLimits

0x86c0,	// (0x0004750b) cell_toolbar_trans_pane

0x7af0,	// (0x0004693b) cell_toolbar_trans_pane_g1

0xe173,	// (0x0004cfbe) list_form2_midp_pane_t1

0xe181,	// (0x0004cfcc) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0004e921) list_form2_midp_pane_t

0x76e1,	// (0x0004652c) scroll_pane_cp51_ParamLimits

0x789d,	// (0x000466e8) form2_midp_wait_pane_g1

0x78a6,	// (0x000466f1) form2_midp_wait_pane_g2

0x78af,	// (0x000466fa) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0004e936) form2_midp_wait_pane_g

0x37d3,	// (0x0004261e) list_highlight_pane_cp21_ParamLimits

0x78fb,	// (0x00046746) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x790a,	// (0x00046755) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6adf,	// (0x0004592a) list_single_2graphic_im_pane_ParamLimits

0x6adf,	// (0x0004592a) list_single_2graphic_im_pane

0xe548,	// (0x0004d393) list_single_2graphic_im_pane_g1_ParamLimits

0xe548,	// (0x0004d393) list_single_2graphic_im_pane_g1

0xe559,	// (0x0004d3a4) list_single_2graphic_im_pane_g2_ParamLimits

0xe559,	// (0x0004d3a4) list_single_2graphic_im_pane_g2

0xe565,	// (0x0004d3b0) list_single_2graphic_im_pane_g3_ParamLimits

0xe565,	// (0x0004d3b0) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0004ea8b) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0004ea8b) list_single_2graphic_im_pane_g

0xe579,	// (0x0004d3c4) list_single_2graphic_im_pane_t1_ParamLimits

0xe579,	// (0x0004d3c4) list_single_2graphic_im_pane_t1

0x8185,	// (0x00046fd0) list_single_graphic_2heading_pane_fp_ParamLimits

0x8185,	// (0x00046fd0) list_single_graphic_2heading_pane_fp

0x0e26,	// (0x0003fc71) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0e26,	// (0x0003fc71) list_single_graphic_2heading_pane_fp_g1

0x819a,	// (0x00046fe5) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x819a,	// (0x00046fe5) list_single_graphic_2heading_pane_fp_g2

0x400f,	// (0x00042e5a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x400f,	// (0x00042e5a) list_single_graphic_2heading_pane_fp_g3

0x4082,	// (0x00042ecd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4082,	// (0x00042ecd) list_single_graphic_2heading_pane_fp_g4

0x81a6,	// (0x00046ff1) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x81a6,	// (0x00046ff1) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004e9b9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004e9b9) list_single_graphic_2heading_pane_fp_g

0x0f6f,	// (0x0003fdba) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0f6f,	// (0x0003fdba) list_single_graphic_2heading_pane_fp_t1

0x0e5e,	// (0x0003fca9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0e5e,	// (0x0003fca9) list_single_graphic_2heading_pane_fp_t2

0x0f85,	// (0x0003fdd0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0f85,	// (0x0003fdd0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0004ea94) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0004ea94) list_single_graphic_2heading_pane_fp_t

0x7b7c,	// (0x000469c7) fep_hwr_write_pane_g5_ParamLimits

0x7b7c,	// (0x000469c7) fep_hwr_write_pane_g5

0x7b88,	// (0x000469d3) fep_hwr_write_pane_g6_ParamLimits

0x7b88,	// (0x000469d3) fep_hwr_write_pane_g6

0x8416,	// (0x00047261) eswt_shell_pane_ParamLimits

0x55c5,	// (0x00044410) bg_popup_window_pane_cp18_ParamLimits

0x686f,	// (0x000456ba) heading_pane_cp70

0x8540,	// (0x0004738b) popup_eswt_tasktip_window_t1_ParamLimits

0xd7c8,	// (0x0004c613) aid_touch_tab_arrow_left

0xd7de,	// (0x0004c629) aid_touch_tab_arrow_right

0xd0f1,	// (0x0004bf3c) title_pane_g3_ParamLimits

0xd0f1,	// (0x0004bf3c) title_pane_g3

0x4033,	// (0x00042e7e) set_value_pane_g1

0xc947,	// (0x0004b792) popup_toolbar_trans_pane_ParamLimits

0x869a,	// (0x000474e5) aid_size_cell_tb_trans_pane_ParamLimits

0x4074,	// (0x00042ebf) bg_tb_trans_pane_ParamLimits

0x86ac,	// (0x000474f7) grid_tb_trans_pane_ParamLimits

0x3a5c,	// (0x000428a7) cont_note_pane_ParamLimits

0x3a5c,	// (0x000428a7) cont_note_pane

0x3dd9,	// (0x00042c24) cont_snote2_single_text_pane_ParamLimits

0x3dd9,	// (0x00042c24) cont_snote2_single_text_pane

0x3dd9,	// (0x00042c24) cont_snote2_single_graphic_pane_ParamLimits

0x3dd9,	// (0x00042c24) cont_snote2_single_graphic_pane

0x5bd8,	// (0x00044a23) cont_note_wait_pane_ParamLimits

0x5bd8,	// (0x00044a23) cont_note_wait_pane

0x5bd8,	// (0x00044a23) cont_note_image_pane_ParamLimits

0x5bd8,	// (0x00044a23) cont_note_image_pane

0x8754,	// (0x0004759f) popup_note2_window_g1_ParamLimits

0x8754,	// (0x0004759f) popup_note2_window_g1

0x8785,	// (0x000475d0) popup_note2_window_t1_ParamLimits

0x8785,	// (0x000475d0) popup_note2_window_t1

0x87ca,	// (0x00047615) popup_note2_window_t2_ParamLimits

0x87ca,	// (0x00047615) popup_note2_window_t2

0x880f,	// (0x0004765a) popup_note2_window_t3_ParamLimits

0x880f,	// (0x0004765a) popup_note2_window_t3

0x8854,	// (0x0004769f) popup_note2_window_t4_ParamLimits

0x8854,	// (0x0004769f) popup_note2_window_t4

0x3ae0,	// (0x0004292b) popup_note2_window_t5_ParamLimits

0x3ae0,	// (0x0004292b) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0004eaa0) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0004eaa0) popup_note2_window_t

0x8883,	// (0x000476ce) popup_note2_image_window_g1_ParamLimits

0x8883,	// (0x000476ce) popup_note2_image_window_g1

0x888f,	// (0x000476da) popup_note2_image_window_g2_ParamLimits

0x888f,	// (0x000476da) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0004eaab) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0004eaab) popup_note2_image_window_g

0x88a1,	// (0x000476ec) popup_note2_image_window_t1_ParamLimits

0x88a1,	// (0x000476ec) popup_note2_image_window_t1

0x88b9,	// (0x00047704) popup_note2_image_window_t2_ParamLimits

0x88b9,	// (0x00047704) popup_note2_image_window_t2

0x88d1,	// (0x0004771c) popup_note2_image_window_t3_ParamLimits

0x88d1,	// (0x0004771c) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0004eab0) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0004eab0) popup_note2_image_window_t

0x5be6,	// (0x00044a31) popup_note2_wait_window_g1_ParamLimits

0x5be6,	// (0x00044a31) popup_note2_wait_window_g1

0x88ed,	// (0x00047738) popup_note2_wait_window_g2_ParamLimits

0x88ed,	// (0x00047738) popup_note2_wait_window_g2

0x5bfe,	// (0x00044a49) popup_note2_wait_window_g3_ParamLimits

0x5bfe,	// (0x00044a49) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0004eab7) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0004eab7) popup_note2_wait_window_g

0x88f9,	// (0x00047744) popup_note2_wait_window_t1_ParamLimits

0x88f9,	// (0x00047744) popup_note2_wait_window_t1

0x8917,	// (0x00047762) popup_note2_wait_window_t2_ParamLimits

0x8917,	// (0x00047762) popup_note2_wait_window_t2

0x8935,	// (0x00047780) popup_note2_wait_window_t3_ParamLimits

0x8935,	// (0x00047780) popup_note2_wait_window_t3

0x8947,	// (0x00047792) popup_note2_wait_window_t4_ParamLimits

0x8947,	// (0x00047792) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0004eabe) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0004eabe) popup_note2_wait_window_t

0x8959,	// (0x000477a4) wait_bar2_pane_ParamLimits

0x8959,	// (0x000477a4) wait_bar2_pane

0x8971,	// (0x000477bc) popup_snote2_single_text_window_g1_ParamLimits

0x8971,	// (0x000477bc) popup_snote2_single_text_window_g1

0x8999,	// (0x000477e4) popup_snote2_single_text_window_t1_ParamLimits

0x8999,	// (0x000477e4) popup_snote2_single_text_window_t1

0x89e5,	// (0x00047830) popup_snote2_single_text_window_t2_ParamLimits

0x89e5,	// (0x00047830) popup_snote2_single_text_window_t2

0x8a31,	// (0x0004787c) popup_snote2_single_text_window_t3_ParamLimits

0x8a31,	// (0x0004787c) popup_snote2_single_text_window_t3

0x8a72,	// (0x000478bd) popup_snote2_single_text_window_t4_ParamLimits

0x8a72,	// (0x000478bd) popup_snote2_single_text_window_t4

0x8aa8,	// (0x000478f3) popup_snote2_single_text_window_t5_ParamLimits

0x8aa8,	// (0x000478f3) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0004eac7) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0004eac7) popup_snote2_single_text_window_t

0x8ad3,	// (0x0004791e) popup_snote2_single_graphic_window_g1_ParamLimits

0x8ad3,	// (0x0004791e) popup_snote2_single_graphic_window_g1

0x8afb,	// (0x00047946) popup_snote2_single_graphic_window_g2_ParamLimits

0x8afb,	// (0x00047946) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0004ead2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0004ead2) popup_snote2_single_graphic_window_g

0x8b23,	// (0x0004796e) popup_snote2_single_graphic_window_t1_ParamLimits

0x8b23,	// (0x0004796e) popup_snote2_single_graphic_window_t1

0x8b6f,	// (0x000479ba) popup_snote2_single_graphic_window_t2_ParamLimits

0x8b6f,	// (0x000479ba) popup_snote2_single_graphic_window_t2

0x8a31,	// (0x0004787c) popup_snote2_single_graphic_window_t3_ParamLimits

0x8a31,	// (0x0004787c) popup_snote2_single_graphic_window_t3

0x8a72,	// (0x000478bd) popup_snote2_single_graphic_window_t4_ParamLimits

0x8a72,	// (0x000478bd) popup_snote2_single_graphic_window_t4

0x8aa8,	// (0x000478f3) popup_snote2_single_graphic_window_t5_ParamLimits

0x8aa8,	// (0x000478f3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0004ead7) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0004ead7) popup_snote2_single_graphic_window_t

0x75a2,	// (0x000463ed) clock_nsta_pane_cp2_t1

0x75a2,	// (0x000463ed) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0004e8f7) clock_nsta_pane_cp2_t

0x0668,	// (0x0003f4b3) form_field_data_wide_pane_g1_ParamLimits

0x400f,	// (0x00042e5a) form_field_data_wide_pane_g2_ParamLimits

0x400f,	// (0x00042e5a) form_field_data_wide_pane_g2

0x4082,	// (0x00042ecd) form_field_data_wide_pane_g3_ParamLimits

0x4082,	// (0x00042ecd) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0004e4cb) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0004e4cb) form_field_data_wide_pane_g

0xe0b6,	// (0x0004cf01) grid_touch_3_pane_ParamLimits

0xe0b6,	// (0x0004cf01) grid_touch_3_pane

0xe5aa,	// (0x0004d3f5) cell_touch_3_pane_ParamLimits

0xe5aa,	// (0x0004d3f5) cell_touch_3_pane

0x7af0,	// (0x0004693b) cell_touch_3_pane_g1

0x7af0,	// (0x0004693b) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0004e97c) cell_touch_3_pane_g

0x3b38,	// (0x00042983) cont_query_data_pane

0x3b40,	// (0x0004298b) cont_query_data_pane_cp1

0x8be9,	// (0x00047a34) button_value_adjust_pane_cp7

0x8bf1,	// (0x00047a3c) query_popup_pane_cp3

0x47da,	// (0x00043625) bg_popup_sub_pane_cp22_ParamLimits

0x1813,	// (0x0004065e) navi_navi_volume_pane_cp2

0x182e,	// (0x00040679) popup_side_volume_key_window_g2

0x183d,	// (0x00040688) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0004e561) popup_side_volume_key_window_g

0x185a,	// (0x000406a5) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0004e568) popup_side_volume_key_window_t

0x4a91,	// (0x000438dc) popup_side_volume_key_window_ParamLimits

0xc14a,	// (0x0004af95) list_double_graphic_pane_g4_ParamLimits

0xc14a,	// (0x0004af95) list_double_graphic_pane_g4

0xdf17,	// (0x0004cd62) list_single_2heading_msg_pane_ParamLimits

0xdf17,	// (0x0004cd62) list_single_2heading_msg_pane

0xca95,	// (0x0004b8e0) list_single_2heading_msg_pane_g1_ParamLimits

0xca95,	// (0x0004b8e0) list_single_2heading_msg_pane_g1

0xcaa1,	// (0x0004b8ec) list_single_2heading_msg_pane_g2_ParamLimits

0xcaa1,	// (0x0004b8ec) list_single_2heading_msg_pane_g2

0xcab4,	// (0x0004b8ff) list_single_2heading_msg_pane_g3_ParamLimits

0xcab4,	// (0x0004b8ff) list_single_2heading_msg_pane_g3

0xcac0,	// (0x0004b90b) list_single_2heading_msg_pane_g4_ParamLimits

0xcac0,	// (0x0004b90b) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0004eae2) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0004eae2) list_single_2heading_msg_pane_g

0xbe14,	// (0x0004ac5f) list_single_2heading_msg_pane_t1_ParamLimits

0xbe14,	// (0x0004ac5f) list_single_2heading_msg_pane_t1

0xbe3c,	// (0x0004ac87) list_single_2heading_msg_pane_t2_ParamLimits

0xbe3c,	// (0x0004ac87) list_single_2heading_msg_pane_t2

0xbea7,	// (0x0004acf2) list_single_2heading_msg_pane_t3_ParamLimits

0xbea7,	// (0x0004acf2) list_single_2heading_msg_pane_t3

0x103a,	// (0x0003fe85) list_single_2heading_msg_pane_t4_ParamLimits

0x103a,	// (0x0003fe85) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0004eaeb) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0004eaeb) list_single_2heading_msg_pane_t

0x3727,	// (0x00042572) title_pane_g4_ParamLimits

0x3727,	// (0x00042572) title_pane_g4

0x1622,	// (0x0004046d) title_pane_stacon_g3_ParamLimits

0x1622,	// (0x0004046d) title_pane_stacon_g3

0x8717,	// (0x00047562) list_single_2graphic_im_pane_g4_ParamLimits

0x8717,	// (0x00047562) list_single_2graphic_im_pane_g4

0x6637,	// (0x00045482) popup_side_volume_key_window_cp

0x6df2,	// (0x00045c3d) main_idle_act2_pane_t1

0x21e1,	// (0x0004102c) toolbar_button_pane_g10

0xd3fc,	// (0x0004c247) popup_toolbar_window_cp1

0x7593,	// (0x000463de) clock_nsta_pane_cp_t1

0x7593,	// (0x000463de) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0004e8f2) clock_nsta_pane_cp_t

0x1813,	// (0x0004065e) navi_navi_volume_pane_cp2_ParamLimits

0x1822,	// (0x0004066d) popup_side_volume_key_window_g1_ParamLimits

0x182e,	// (0x00040679) popup_side_volume_key_window_g2_ParamLimits

0x183d,	// (0x00040688) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0004e561) popup_side_volume_key_window_g_ParamLimits

0x2714,	// (0x0004155f) fep_hwr_aid_pane

0xe28d,	// (0x0004d0d8) bg_fep_hwr_top_pane_g4_ParamLimits

0x7b4c,	// (0x00046997) fep_hwr_top_pane_g1_ParamLimits

0x7b5e,	// (0x000469a9) fep_hwr_top_pane_g2_ParamLimits

0x27cd,	// (0x00041618) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0004e947) fep_hwr_top_pane_g_ParamLimits

0x27e2,	// (0x0004162d) fep_hwr_top_text_pane_ParamLimits

0x63fa,	// (0x00045245) aid_touch_tab_arrow_arrow_2

0x6403,	// (0x0004524e) aid_touch_tab_arrow_left_2

0x2728,	// (0x00041573) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x275f,	// (0x000415aa) fep_hwr_prediction_pane

0x7cbe,	// (0x00046b09) fep_vkb_prediction_pane

0xe390,	// (0x0004d1db) fep_vkb_side_pane_g3_ParamLimits

0xe390,	// (0x0004d1db) fep_vkb_side_pane_g3

0x7d6e,	// (0x00046bb9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x81fa,	// (0x00047045) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8207,	// (0x00047052) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0004e9f1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8c16,	// (0x00047a61) fep_hwr_prediction_pane_g1

0x2b17,	// (0x00041962) fep_hwr_prediction_pane_g2

0x2b1f,	// (0x0004196a) fep_hwr_prediction_pane_g3

0x2b27,	// (0x00041972) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0004eaf4) fep_hwr_prediction_pane_g

0x8c16,	// (0x00047a61) fep_vkb_prediction_pane_g1

0x8c20,	// (0x00047a6b) fep_vkb_prediction_pane_g2

0x8c28,	// (0x00047a73) fep_vkb_prediction_pane_g3

0x8c30,	// (0x00047a7b) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0004eafd) fep_vkb_prediction_pane_g

0x24c9,	// (0x00041314) slider_set_pane_g3

0x24dd,	// (0x00041328) slider_set_pane_g4

0x24f5,	// (0x00041340) slider_set_pane_g5

0x24c9,	// (0x00041314) slider_set_pane_g6

0x250b,	// (0x00041356) slider_set_pane_g7

0x6a8c,	// (0x000458d7) slider_form_pane_g3

0x6a95,	// (0x000458e0) slider_form_pane_g4

0x6a9d,	// (0x000458e8) slider_form_pane_g5

0x6a8c,	// (0x000458d7) slider_form_pane_g6

0xdee9,	// (0x0004cd34) slider_form_pane_g7

0x709c,	// (0x00045ee7) slider_set_pane_vc_g3

0x70a5,	// (0x00045ef0) slider_set_pane_vc_g4

0x70ae,	// (0x00045ef9) slider_set_pane_vc_g5

0x709c,	// (0x00045ee7) slider_set_pane_vc_g6

0x70b7,	// (0x00045f02) slider_set_pane_vc_g7

0x7277,	// (0x000460c2) slider_form_pane_vc_g1

0x7280,	// (0x000460cb) slider_form_pane_vc_g2

0x7289,	// (0x000460d4) slider_form_pane_vc_g3

0x7277,	// (0x000460c2) slider_form_pane_vc_g4

0x7292,	// (0x000460dd) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0004e8c4) slider_form_pane_vc_g

0x36df,	// (0x0004252a) main_idle_act3_pane

0x8c38,	// (0x00047a83) ai3_links_pane

0xe5f2,	// (0x0004d43d) popup_ai3_data_window_ParamLimits

0xe5f2,	// (0x0004d43d) popup_ai3_data_window

0x36df,	// (0x0004252a) grid_ai3_links_pane

0xe60c,	// (0x0004d457) cell_ai3_links_pane_ParamLimits

0xe60c,	// (0x0004d457) cell_ai3_links_pane

0x8c73,	// (0x00047abe) bg_popup_sub_pane_cp11

0x8c80,	// (0x00047acb) cell_ai3_links_pane_g1

0x36df,	// (0x0004252a) bg_popup_sub_pane_cp12

0x8ca5,	// (0x00047af0) heading_ai3_data_pane

0x8cad,	// (0x00047af8) list_ai3_gene_pane

0x8cb9,	// (0x00047b04) popup_ai3_data_window_g1

0x8cc1,	// (0x00047b0c) heading_ai3_data_pane_g1

0x8cc9,	// (0x00047b14) heading_ai3_data_pane_t1

0x8cd7,	// (0x00047b22) list_double_ai3_gene_pane_ParamLimits

0x8cd7,	// (0x00047b22) list_double_ai3_gene_pane

0x8ce4,	// (0x00047b2f) list_single_ai3_gene_pane_ParamLimits

0x8ce4,	// (0x00047b2f) list_single_ai3_gene_pane

0x7ab5,	// (0x00046900) list_highlight_pane_cp7_ParamLimits

0x7ab5,	// (0x00046900) list_highlight_pane_cp7

0x8cf1,	// (0x00047b3c) list_single_a13_gene_pane_t1_ParamLimits

0x8cf1,	// (0x00047b3c) list_single_a13_gene_pane_t1

0x8d08,	// (0x00047b53) list_single_ai3_gene_pane_g1

0x8d11,	// (0x00047b5c) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0004eb06) list_single_ai3_gene_pane_g

0x8d19,	// (0x00047b64) list_double_ai3_gene_pane_g1_ParamLimits

0x8d19,	// (0x00047b64) list_double_ai3_gene_pane_g1

0x8d25,	// (0x00047b70) list_double_ai3_gene_pane_t1_ParamLimits

0x8d25,	// (0x00047b70) list_double_ai3_gene_pane_t1

0x8d41,	// (0x00047b8c) list_double_ai3_gene_pane_t2_ParamLimits

0x8d41,	// (0x00047b8c) list_double_ai3_gene_pane_t2

0x8d57,	// (0x00047ba2) list_double_ai3_gene_pane_t3_ParamLimits

0x8d57,	// (0x00047ba2) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0004eb0b) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0004eb0b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f9b,	// (0x0003fde6) aid_size_min_col_2

0xe5dc,	// (0x0004d427) aid_size_min_msg_ParamLimits

0xe5dc,	// (0x0004d427) aid_size_min_msg

0xe3a4,	// (0x0004d1ef) fep_vkb_top_text_pane_g2_ParamLimits

0xe3a4,	// (0x0004d1ef) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0004e977) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0004e977) fep_vkb_top_text_pane_g

0x36df,	// (0x0004252a) main_hc_apps_shell_pane

0x8d74,	// (0x00047bbf) grid_hc_apps_pane_ParamLimits

0x8d74,	// (0x00047bbf) grid_hc_apps_pane

0x8d83,	// (0x00047bce) list_hc_apps_pane

0x8d8b,	// (0x00047bd6) scroll_pane_cp37_ParamLimits

0x8d8b,	// (0x00047bd6) scroll_pane_cp37

0xe626,	// (0x0004d471) cell_hc_apps_pane_ParamLimits

0xe626,	// (0x0004d471) cell_hc_apps_pane

0xe6e4,	// (0x0004d52f) cell_hc_apps_pane_g1_ParamLimits

0xe6e4,	// (0x0004d52f) cell_hc_apps_pane_g1

0x8e76,	// (0x00047cc1) cell_hc_apps_pane_g2_ParamLimits

0x8e76,	// (0x00047cc1) cell_hc_apps_pane_g2

0x8e92,	// (0x00047cdd) cell_hc_apps_pane_g3_ParamLimits

0x8e92,	// (0x00047cdd) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0004eb12) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0004eb12) cell_hc_apps_pane_g

0xe711,	// (0x0004d55c) cell_hc_apps_pane_t1_ParamLimits

0xe711,	// (0x0004d55c) cell_hc_apps_pane_t1

0x3a5c,	// (0x000428a7) grid_highlight_pane_cp10_ParamLimits

0x3a5c,	// (0x000428a7) grid_highlight_pane_cp10

0xe74f,	// (0x0004d59a) list_single_hc_apps_pane_ParamLimits

0xe74f,	// (0x0004d59a) list_single_hc_apps_pane

0xe77c,	// (0x0004d5c7) list_single_hc_apps_pane_g1

0xcad8,	// (0x0004b923) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0004eb19) list_single_hc_apps_pane_g

0xcaf1,	// (0x0004b93c) list_single_hc_apps_pane_g2_copy1

0x105f,	// (0x0003feaa) list_single_hc_apps_pane_t1

0x37d3,	// (0x0004261e) bg_set_opt_pane_cp_ParamLimits

0x149e,	// (0x000402e9) setting_slider_pane_t1_ParamLimits

0x14b7,	// (0x00040302) setting_slider_pane_t2_ParamLimits

0x14d1,	// (0x0004031c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004e3a9) setting_slider_pane_t_ParamLimits

0x14e9,	// (0x00040334) slider_set_pane_ParamLimits

0x1ad8,	// (0x00040923) control_pane_g5_ParamLimits

0x1ad8,	// (0x00040923) control_pane_g5

0x68db,	// (0x00045726) slider_set_pane_g1_ParamLimits

0x24bd,	// (0x00041308) slider_set_pane_g2_ParamLimits

0x24c9,	// (0x00041314) slider_set_pane_g3_ParamLimits

0x24dd,	// (0x00041328) slider_set_pane_g4_ParamLimits

0x24f5,	// (0x00041340) slider_set_pane_g5_ParamLimits

0x24c9,	// (0x00041314) slider_set_pane_g6_ParamLimits

0x250b,	// (0x00041356) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0004e7af) slider_set_pane_g_ParamLimits

0x4b7d,	// (0x000439c8) navi_icon_text_pane_ParamLimits

0xd791,	// (0x0004c5dc) aid_fill_nsta_2_ParamLimits

0xd7c8,	// (0x0004c613) aid_touch_tab_arrow_left_ParamLimits

0xd7de,	// (0x0004c629) aid_touch_tab_arrow_right_ParamLimits

0xd879,	// (0x0004c6c4) clock_nsta_pane_ParamLimits

0x63dc,	// (0x00045227) navi_icon_pane_g1_ParamLimits

0x63e8,	// (0x00045233) navi_text_pane_t1_ParamLimits

0x769f,	// (0x000464ea) navi_icon_text_pane_g1_ParamLimits

0x76ab,	// (0x000464f6) navi_icon_text_pane_t1_ParamLimits

0xe77c,	// (0x0004d5c7) list_single_hc_apps_pane_g1_ParamLimits

0xcad8,	// (0x0004b923) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0004eb19) list_single_hc_apps_pane_g_ParamLimits

0xcaf1,	// (0x0004b93c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x105f,	// (0x0003feaa) list_single_hc_apps_pane_t1_ParamLimits

0xc04b,	// (0x0004ae96) popup_toolbar2_fixed_window_ParamLimits

0xc04b,	// (0x0004ae96) popup_toolbar2_fixed_window

0xc93d,	// (0x0004b788) popup_toolbar2_float_window

0x36df,	// (0x0004252a) bg_popup_sub_pane_cp27

0x8f69,	// (0x00047db4) grid_toolbar2_float_pane

0x36df,	// (0x0004252a) bg_popup_sub_pane_cp26

0x8f69,	// (0x00047db4) grid_toolbar2_fixed_pane

0xe795,	// (0x0004d5e0) cell_toolbar2_fixed_pane_ParamLimits

0xe795,	// (0x0004d5e0) cell_toolbar2_fixed_pane

0xe7af,	// (0x0004d5fa) cell_toolbar2_fixed_pane_g1

0x8f8a,	// (0x00047dd5) toolbar2_fixed_button_pane

0x5551,	// (0x0004439c) toolbar2_fixed_button_pane_g1

0x5559,	// (0x000443a4) toolbar2_fixed_button_pane_g2

0x5561,	// (0x000443ac) toolbar2_fixed_button_pane_g3

0x5569,	// (0x000443b4) toolbar2_fixed_button_pane_g4

0x5571,	// (0x000443bc) toolbar2_fixed_button_pane_g5

0x5579,	// (0x000443c4) toolbar2_fixed_button_pane_g6

0x5581,	// (0x000443cc) toolbar2_fixed_button_pane_g7

0x5589,	// (0x000443d4) toolbar2_fixed_button_pane_g8

0x5591,	// (0x000443dc) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0004e6b1) toolbar2_fixed_button_pane_g

0x8f92,	// (0x00047ddd) cell_toolbar2_float_pane_ParamLimits

0x8f92,	// (0x00047ddd) cell_toolbar2_float_pane

0x8fa3,	// (0x00047dee) cell_toolbar2_float_pane_g1

0x8f8a,	// (0x00047dd5) toolbar2_fixed_button_pane_cp

0xe256,	// (0x0004d0a1) fep_vkb_accented_list_pane_ParamLimits

0xe256,	// (0x0004d0a1) fep_vkb_accented_list_pane

0x2930,	// (0x0004177b) bg_popup_fep_shadow_pane_g9

0x4cfd,	// (0x00043b48) bg_popup_fep_shadow_pane_cp3

0x41bc,	// (0x00043007) list_accented_list_pane

0x8fac,	// (0x00047df7) list_single_accented_list_pane_ParamLimits

0x8fac,	// (0x00047df7) list_single_accented_list_pane

0x4cfd,	// (0x00043b48) list_highlight_pane_cp10

0x8fbd,	// (0x00047e08) list_single_accented_list_pane_t1

0xc867,	// (0x0004b6b2) popup_slider_window_ParamLimits

0xc867,	// (0x0004b6b2) popup_slider_window

0x8bf9,	// (0x00047a44) aid_indentation_list_msg

0xe8a6,	// (0x0004d6f1) bg_popup_window_pane_cp19

0x90e9,	// (0x00047f34) popup_slider_window_g1

0x9105,	// (0x00047f50) popup_slider_window_g2

0x9121,	// (0x00047f6c) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x0004eb1e) popup_slider_window_g

0x9187,	// (0x00047fd2) popup_slider_window_t1

0x91fb,	// (0x00048046) small_volume_slider_vertical_pane

0x7af0,	// (0x0004693b) small_volume_slider_vertical_pane_g1

0x7af0,	// (0x0004693b) small_volume_slider_vertical_pane_g2

0x9217,	// (0x00048062) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x0004eb30) small_volume_slider_vertical_pane_g

0xbfb9,	// (0x0004ae04) area_side_right_pane_ParamLimits

0xbfb9,	// (0x0004ae04) area_side_right_pane

0xcb0d,	// (0x0004b958) aid_size_side_button_ParamLimits

0xcb0d,	// (0x0004b958) aid_size_side_button

0xcb26,	// (0x0004b971) grid_sctrl_middle_pane_ParamLimits

0xcb26,	// (0x0004b971) grid_sctrl_middle_pane

0x2b97,	// (0x000419e2) sctrl_sk_bottom_pane

0x2ba8,	// (0x000419f3) sctrl_sk_top_pane

0x2bba,	// (0x00041a05) aid_touch_sctrl_top

0x3a5c,	// (0x000428a7) bg_sctrl_sk_pane_ParamLimits

0x3a5c,	// (0x000428a7) bg_sctrl_sk_pane

0x2bc7,	// (0x00041a12) sctrl_sk_top_pane_g1

0x2bd4,	// (0x00041a1f) sctrl_sk_top_pane_t1

0x2bba,	// (0x00041a05) aid_touch_sctrl_bottom

0x3a5c,	// (0x000428a7) bg_sctrl_sk_pane_cp_ParamLimits

0x3a5c,	// (0x000428a7) bg_sctrl_sk_pane_cp

0x2bef,	// (0x00041a3a) sctrl_sk_bottom_pane_g1

0x2bd4,	// (0x00041a1f) sctrl_sk_bottom_pane_t1

0xcb40,	// (0x0004b98b) cell_sctrl_middle_pane_ParamLimits

0xcb40,	// (0x0004b98b) cell_sctrl_middle_pane

0xcb51,	// (0x0004b99c) aid_touch_sctrl_middle_ParamLimits

0xcb51,	// (0x0004b99c) aid_touch_sctrl_middle

0xcb5e,	// (0x0004b9a9) bg_sctrl_middle_pane_ParamLimits

0xcb5e,	// (0x0004b9a9) bg_sctrl_middle_pane

0x929f,	// (0x000480ea) cell_sctrl_middle_pane_g1_ParamLimits

0x929f,	// (0x000480ea) cell_sctrl_middle_pane_g1

0xcb6c,	// (0x0004b9b7) cell_sctrl_middle_pane_g2_ParamLimits

0xcb6c,	// (0x0004b9b7) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x0004eb3c) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x0004eb3c) cell_sctrl_middle_pane_g

0x5551,	// (0x0004439c) bg_sctrl_middle_pane_g1

0x5559,	// (0x000443a4) bg_sctrl_middle_pane_g2

0x5561,	// (0x000443ac) bg_sctrl_middle_pane_g3

0x5569,	// (0x000443b4) bg_sctrl_middle_pane_g4

0x5571,	// (0x000443bc) bg_sctrl_middle_pane_g5

0x5579,	// (0x000443c4) bg_sctrl_middle_pane_g6

0x5581,	// (0x000443cc) bg_sctrl_middle_pane_g7

0x5589,	// (0x000443d4) bg_sctrl_middle_pane_g8

0x0007,

0xfcf6,	// (0x0004eb41) bg_sctrl_middle_pane_g

0x5591,	// (0x000443dc) bg_sctrl_middle_pane_g8_copy1

0x5551,	// (0x0004439c) bg_sctrl_sk_pane_g1

0x5559,	// (0x000443a4) bg_sctrl_sk_pane_g2

0x5561,	// (0x000443ac) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0004e6b1) bg_sctrl_sk_pane_g

0x3f97,	// (0x00042de2) aid_size_touch_scroll_bar

0x5569,	// (0x000443b4) bg_sctrl_sk_pane_g4

0x5571,	// (0x000443bc) bg_sctrl_sk_pane_g5

0x5579,	// (0x000443c4) bg_sctrl_sk_pane_g6

0x5581,	// (0x000443cc) bg_sctrl_sk_pane_g7

0x5589,	// (0x000443d4) bg_sctrl_sk_pane_g8

0x5591,	// (0x000443dc) bg_sctrl_sk_pane_g9

0x1c92,	// (0x00040add) popup_fep_china_hwr2_fs_candidate_window

0xc381,	// (0x0004b1cc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc381,	// (0x0004b1cc) popup_fep_china_hwr2_fs_control_window

0x7d6e,	// (0x00046bb9) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x0004eb37) sctrl_sk_top_pane_g

0xe95e,	// (0x0004d7a9) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe95e,	// (0x0004d7a9) aid_fep_china_hwr2_fs_cell

0xe972,	// (0x0004d7bd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe972,	// (0x0004d7bd) bg_popup_fep_shadow_pane_cp4

0xe989,	// (0x0004d7d4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe989,	// (0x0004d7d4) bg_popup_fep_shadow_pane_cp5

0xe99b,	// (0x0004d7e6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe99b,	// (0x0004d7e6) popup_fep_china_hwr2_fs_control_bar_grid

0xe9af,	// (0x0004d7fa) popup_fep_china_hwr2_fs_control_funtion_grid

0x9273,	// (0x000480be) aid_fep_china_hwr2_fs_candi_cell

0x36df,	// (0x0004252a) bg_popup_fep_shadow_pane_cp6

0x927d,	// (0x000480c8) popup_fep_china_hwr2_fs_candidate_grid

0xe9b7,	// (0x0004d802) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9b7,	// (0x0004d802) cell_fep_china_hwr2_fs_funtion_grid

0x7af0,	// (0x0004693b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x929f,	// (0x000480ea) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x929f,	// (0x000480ea) cell_fep_china_hwr2_fs_funtion_grid_g1

0x92ad,	// (0x000480f8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x92ad,	// (0x000480f8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd07,	// (0x0004eb52) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd07,	// (0x0004eb52) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9cf,	// (0x0004d81a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9cf,	// (0x0004d81a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe9e4,	// (0x0004d82f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe9e4,	// (0x0004d82f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0c,	// (0x0004eb57) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0c,	// (0x0004eb57) cell_fep_china_hwr2_fs_funtion_grid_t

0x92f4,	// (0x0004813f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x92fc,	// (0x00048147) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9304,	// (0x0004814f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd11,	// (0x0004eb5c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x930c,	// (0x00048157) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x930c,	// (0x00048157) cell_fep_china_hwr2_fs_candidate_grid

0x9325,	// (0x00048170) popup_fep_china_hwr2_fs_candidate_grid_g20

0x932d,	// (0x00048178) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7af0,	// (0x0004693b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7af0,	// (0x0004693b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0004e97c) cell_fep_china_hwr2_fs_candidate_grid_g

0x9335,	// (0x00048180) cell_fep_china_hwr2_fs_candidate_grid_t1

0x513b,	// (0x00043f86) clock_nsta_pane_cp_24_ParamLimits

0x513b,	// (0x00043f86) clock_nsta_pane_cp_24

0x51b9,	// (0x00044004) indicator_nsta_pane_cp_24_ParamLimits

0x51b9,	// (0x00044004) indicator_nsta_pane_cp_24

0x6258,	// (0x000450a3) heading_pane_g1

0x0001,

0xf8cb,	// (0x0004e716) heading_pane_g

0x6c3b,	// (0x00045a86) grid_sct_catagory_button_pane

0x6c6b,	// (0x00045ab6) scroll_pane_cp5_ParamLimits

0x76ed,	// (0x00046538) button_value_adjust_pane_cp5_ParamLimits

0x76ed,	// (0x00046538) button_value_adjust_pane_cp5

0x77cc,	// (0x00046617) form2_midp_time_pane_ParamLimits

0x9343,	// (0x0004818e) cell_sct_catagory_button_pane_ParamLimits

0x9343,	// (0x0004818e) cell_sct_catagory_button_pane

0x7ab5,	// (0x00046900) bg_button_pane_cp01_ParamLimits

0x7ab5,	// (0x00046900) bg_button_pane_cp01

0x7af0,	// (0x0004693b) cell_sct_catagory_button_pane_g1

0xc8e0,	// (0x0004b72b) popup_tb_extension_window

0xea00,	// (0x0004d84b) aid_size_cell_ext_ParamLimits

0xea00,	// (0x0004d84b) aid_size_cell_ext

0x3dd9,	// (0x00042c24) bg_tb_trans_pane_cp1_ParamLimits

0x3dd9,	// (0x00042c24) bg_tb_trans_pane_cp1

0xea26,	// (0x0004d871) grid_tb_ext_pane_ParamLimits

0xea26,	// (0x0004d871) grid_tb_ext_pane

0xea61,	// (0x0004d8ac) cell_tb_ext_pane_ParamLimits

0xea61,	// (0x0004d8ac) cell_tb_ext_pane

0xea89,	// (0x0004d8d4) cell_tb_ext_pane_g1_ParamLimits

0xea89,	// (0x0004d8d4) cell_tb_ext_pane_g1

0x93d7,	// (0x00048222) cell_tb_ext_pane_t1

0x3a5c,	// (0x000428a7) list_highlight_pane_cp11_ParamLimits

0x3a5c,	// (0x000428a7) list_highlight_pane_cp11

0xc060,	// (0x0004aeab) popup_uni_indicator_window_ParamLimits

0xc060,	// (0x0004aeab) popup_uni_indicator_window

0x4074,	// (0x00042ebf) bg_popup_sub_pane_cp14

0x93f2,	// (0x0004823d) list_uniindi_pane

0x93fe,	// (0x00048249) uniindi_top_pane

0x3a5c,	// (0x000428a7) bg_uniindi_top_pane

0x941d,	// (0x00048268) uniindi_top_pane_g1

0x9433,	// (0x0004827e) uniindi_top_pane_g2

0x0003,

0xfd18,	// (0x0004eb63) uniindi_top_pane_g

0x945d,	// (0x000482a8) uniindi_top_pane_t1

0x9487,	// (0x000482d2) list_single_uniindi_pane_ParamLimits

0x9487,	// (0x000482d2) list_single_uniindi_pane

0x7af0,	// (0x0004693b) bg_uniindi_top_pane_g1

0x949a,	// (0x000482e5) list_single_uniindi_pane_g1

0x94ad,	// (0x000482f8) list_single_uniindi_pane_t1

0x36df,	// (0x0004252a) control_bg_pane

0x94d2,	// (0x0004831d) bg_sctrl_sk_pane_cp1

0x94db,	// (0x00048326) bg_sctrl_sk_pane_cp2

0x94e4,	// (0x0004832f) control_bg_pane_g1

0x94ed,	// (0x00048338) control_bg_pane_g2

0x0001,

0xfd21,	// (0x0004eb6c) control_bg_pane_g

0x7547,	// (0x00046392) cell_indicator_nsta_pane_g1_ParamLimits

0xe0e3,	// (0x0004cf2e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0004e8e0) cell_indicator_nsta_pane_g_ParamLimits

0x0dfc,	// (0x0003fc47) form2_midp_time_pane_t1_ParamLimits

0x2706,	// (0x00041551) main_idle_act4_pane_ParamLimits

0x2706,	// (0x00041551) main_idle_act4_pane

0xc8e0,	// (0x0004b72b) popup_tb_extension_window_ParamLimits

0xea48,	// (0x0004d893) tb_ext_find_pane_ParamLimits

0xea48,	// (0x0004d893) tb_ext_find_pane

0x94f6,	// (0x00048341) ai_gene_pane_1_cp1

0x4e44,	// (0x00043c8f) ai_gene_pane_2_cp1

0x94fe,	// (0x00048349) list_single_idle_plugin_calendar_pane

0x9507,	// (0x00048352) list_single_idle_plugin_notification_pane

0x9510,	// (0x0004835b) list_single_idle_plugin_player_pane

0xeaa6,	// (0x0004d8f1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeaa6,	// (0x0004d8f1) list_single_idle_plugin_shortcut_pane

0xeace,	// (0x0004d919) main_idle_act4_pane_t1

0xeae4,	// (0x0004d92f) main_idle_act4_pane_t2

0x0001,

0xfd26,	// (0x0004eb71) main_idle_act4_pane_t

0xeafa,	// (0x0004d945) middle_sk_idle_act4_pane_ParamLimits

0xeafa,	// (0x0004d945) middle_sk_idle_act4_pane

0xeb16,	// (0x0004d961) popup_clock_digital_analogue_window_cp2

0xeb3e,	// (0x0004d989) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb3e,	// (0x0004d989) shortcut_wheel_idle_act4_pane

0x7af0,	// (0x0004693b) shortcut_wheel_idle_act4_pane_g1

0x7af0,	// (0x0004693b) shortcut_wheel_idle_act4_pane_g2

0x7af0,	// (0x0004693b) shortcut_wheel_idle_act4_pane_g3

0x7af0,	// (0x0004693b) shortcut_wheel_idle_act4_pane_g4

0x7af0,	// (0x0004693b) shortcut_wheel_idle_act4_pane_g5

0x95a3,	// (0x000483ee) shortcut_wheel_idle_act4_pane_g6

0x95ab,	// (0x000483f6) shortcut_wheel_idle_act4_pane_g7

0x95b3,	// (0x000483fe) shortcut_wheel_idle_act4_pane_g8

0x95bb,	// (0x00048406) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0004eb76) shortcut_wheel_idle_act4_pane_g

0xe28d,	// (0x0004d0d8) middle_sk_idle_act4_pane_g1_ParamLimits

0xe28d,	// (0x0004d0d8) middle_sk_idle_act4_pane_g1

0xebbb,	// (0x0004da06) middle_sk_idle_act4_pane_g2_ParamLimits

0xebbb,	// (0x0004da06) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4e,	// (0x0004eb99) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4e,	// (0x0004eb99) middle_sk_idle_act4_pane_g

0xebd3,	// (0x0004da1e) middle_sk_idle_act4_pane_t1_ParamLimits

0xebd3,	// (0x0004da1e) middle_sk_idle_act4_pane_t1

0xec02,	// (0x0004da4d) grid_ai_shortcut_pane_ParamLimits

0xec02,	// (0x0004da4d) grid_ai_shortcut_pane

0xec1f,	// (0x0004da6a) list_highlight_pane_cp16_ParamLimits

0xec1f,	// (0x0004da6a) list_highlight_pane_cp16

0xec2c,	// (0x0004da77) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec2c,	// (0x0004da77) list_single_idle_plugin_shortcut_pane_g1

0xec38,	// (0x0004da83) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec38,	// (0x0004da83) list_single_idle_plugin_shortcut_pane_g2

0xec54,	// (0x0004da9f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec54,	// (0x0004da9f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd53,	// (0x0004eb9e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd53,	// (0x0004eb9e) list_single_idle_plugin_shortcut_pane_g

0xec69,	// (0x0004dab4) cell_ai_shortcut_pane_ParamLimits

0xec69,	// (0x0004dab4) cell_ai_shortcut_pane

0xec7f,	// (0x0004daca) cell_ai_shortcut_pane_g1_ParamLimits

0xec7f,	// (0x0004daca) cell_ai_shortcut_pane_g1

0x94f6,	// (0x00048341) ai_gene_pane_1_cp2

0x96eb,	// (0x00048536) ai_gene_pane_2_cp2

0x96f3,	// (0x0004853e) list_highlight_pane_cp15

0x96fc,	// (0x00048547) list_single_idle_plugin_calendar_pane_g1

0x96f3,	// (0x0004853e) list_highlight_pane_cp17

0x9704,	// (0x0004854f) list_single_idle_plugin_calendar_pane_g1_copy1

0x970c,	// (0x00048557) list_single_idle_plugin_player_pane_g1

0x6e94,	// (0x00045cdf) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0004eba5) list_single_idle_plugin_player_pane_g

0x9714,	// (0x0004855f) list_single_idle_plugin_player_pane_t1

0x9722,	// (0x0004856d) list_single_idle_plugin_player_pane_t2

0x9730,	// (0x0004857b) list_single_idle_plugin_player_pane_t3

0x973e,	// (0x00048589) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5f,	// (0x0004ebaa) list_single_idle_plugin_player_pane_t

0x974c,	// (0x00048597) wait_bar_pane_cp15

0x9754,	// (0x0004859f) grid_ai_notification_pane

0x6e94,	// (0x00045cdf) list_single_idle_plugin_notification_pane_g1

0xeca1,	// (0x0004daec) cell_ai_notification_pane_ParamLimits

0xeca1,	// (0x0004daec) cell_ai_notification_pane

0x976a,	// (0x000485b5) cell_ai_notification_pane_g1

0x9772,	// (0x000485bd) cell_ai_notification_pane_t1

0xecae,	// (0x0004daf9) tb_ext_find_button_pane

0xecb6,	// (0x0004db01) tb_ext_find_pane_g1

0xecbe,	// (0x0004db09) tb_ext_find_pane_t1

0x46ea,	// (0x00043535) tb_ext_find_button_pane_g1

0x979e,	// (0x000485e9) tb_ext_find_button_pane_g2

0x0001,

0xfd68,	// (0x0004ebb3) tb_ext_find_button_pane_g

0xeace,	// (0x0004d919) main_idle_act4_pane_t1_ParamLimits

0xeae4,	// (0x0004d92f) main_idle_act4_pane_t2_ParamLimits

0xfd26,	// (0x0004eb71) main_idle_act4_pane_t_ParamLimits

0xeb16,	// (0x0004d961) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb2e,	// (0x0004d979) sat_plugin_idle_act4_pane_ParamLimits

0xeb2e,	// (0x0004d979) sat_plugin_idle_act4_pane

0xeccc,	// (0x0004db17) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeccc,	// (0x0004db17) sat_plugin_idle_act4_pane_t1

0xece4,	// (0x0004db2f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xece4,	// (0x0004db2f) sat_plugin_idle_act4_pane_t2

0xecfc,	// (0x0004db47) sat_plugin_idle_act4_pane_t3_ParamLimits

0xecfc,	// (0x0004db47) sat_plugin_idle_act4_pane_t3

0xed14,	// (0x0004db5f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed14,	// (0x0004db5f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6d,	// (0x0004ebb8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6d,	// (0x0004ebb8) sat_plugin_idle_act4_pane_t

0x1302,	// (0x0004014d) popup_battery_window_ParamLimits

0x1302,	// (0x0004014d) popup_battery_window

0x3a5c,	// (0x000428a7) bg_popup_sub_pane_cp25_ParamLimits

0x3a5c,	// (0x000428a7) bg_popup_sub_pane_cp25

0x97f3,	// (0x0004863e) popup_battery_window_g1_ParamLimits

0x97f3,	// (0x0004863e) popup_battery_window_g1

0x97ff,	// (0x0004864a) popup_battery_window_t1_ParamLimits

0x97ff,	// (0x0004864a) popup_battery_window_t1

0x9811,	// (0x0004865c) popup_battery_window_t2_ParamLimits

0x9811,	// (0x0004865c) popup_battery_window_t2

0x0001,

0xfd76,	// (0x0004ebc1) popup_battery_window_t_ParamLimits

0xfd76,	// (0x0004ebc1) popup_battery_window_t

0xd5f4,	// (0x0004c43f) midp_canvas_pane_ParamLimits

0xd651,	// (0x0004c49c) midp_keypad_pane_ParamLimits

0xd651,	// (0x0004c49c) midp_keypad_pane

0x5021,	// (0x00043e6c) main_midp_pane_ParamLimits

0x75b1,	// (0x000463fc) signal_pane_g2_cp_ParamLimits

0xed2c,	// (0x0004db77) aid_size_cell_midp_keypad_ParamLimits

0xed2c,	// (0x0004db77) aid_size_cell_midp_keypad

0xed4a,	// (0x0004db95) midp_keyp_game_grid_pane_ParamLimits

0xed4a,	// (0x0004db95) midp_keyp_game_grid_pane

0xed71,	// (0x0004dbbc) midp_keyp_rocker_pane_ParamLimits

0xed71,	// (0x0004dbbc) midp_keyp_rocker_pane

0xedc2,	// (0x0004dc0d) midp_keyp_sk_left_pane_ParamLimits

0xedc2,	// (0x0004dc0d) midp_keyp_sk_left_pane

0xee16,	// (0x0004dc61) midp_keyp_sk_right_pane_ParamLimits

0xee16,	// (0x0004dc61) midp_keyp_sk_right_pane

0x36df,	// (0x0004252a) bg_button_pane_cp03

0xee6a,	// (0x0004dcb5) midp_keyp_sk_left_pane_g1

0x36df,	// (0x0004252a) bg_button_pane_cp04

0xee6a,	// (0x0004dcb5) midp_keyp_sk_right_pane_g1

0x7af0,	// (0x0004693b) midp_keyp_rocker_pane_g1

0xee73,	// (0x0004dcbe) keyp_game_cell_pane_ParamLimits

0xee73,	// (0x0004dcbe) keyp_game_cell_pane

0x36df,	// (0x0004252a) bg_button_pane_cp02

0xee97,	// (0x0004dce2) keyp_game_cell_pane_g1

0xbffb,	// (0x0004ae46) popup_fep_vkb2_window_ParamLimits

0xbffb,	// (0x0004ae46) popup_fep_vkb2_window

0xcb78,	// (0x0004b9c3) aid_size_cell_vkb2_ParamLimits

0xcb78,	// (0x0004b9c3) aid_size_cell_vkb2

0xcbae,	// (0x0004b9f9) popup_fep_vkb2_window_g1_ParamLimits

0xcbae,	// (0x0004b9f9) popup_fep_vkb2_window_g1

0xcbfe,	// (0x0004ba49) vkb2_area_bottom_pane_ParamLimits

0xcbfe,	// (0x0004ba49) vkb2_area_bottom_pane

0xcc52,	// (0x0004ba9d) vkb2_area_keypad_pane_ParamLimits

0xcc52,	// (0x0004ba9d) vkb2_area_keypad_pane

0xcc9a,	// (0x0004bae5) vkb2_area_top_pane_ParamLimits

0xcc9a,	// (0x0004bae5) vkb2_area_top_pane

0xcd20,	// (0x0004bb6b) vkb2_top_entry_pane_ParamLimits

0xcd20,	// (0x0004bb6b) vkb2_top_entry_pane

0xcd4d,	// (0x0004bb98) vkb2_top_grid_left_pane_ParamLimits

0xcd4d,	// (0x0004bb98) vkb2_top_grid_left_pane

0xcd6d,	// (0x0004bbb8) vkb2_top_grid_right_pane_ParamLimits

0xcd6d,	// (0x0004bbb8) vkb2_top_grid_right_pane

0x2e4d,	// (0x00041c98) vkb2_cell_keypad_pane_ParamLimits

0x2e4d,	// (0x00041c98) vkb2_cell_keypad_pane

0xcdb3,	// (0x0004bbfe) vkb2_area_bottom_grid_pane_ParamLimits

0xcdb3,	// (0x0004bbfe) vkb2_area_bottom_grid_pane

0xcddd,	// (0x0004bc28) vkb2_area_bottom_pane_g1_ParamLimits

0xcddd,	// (0x0004bc28) vkb2_area_bottom_pane_g1

0xce03,	// (0x0004bc4e) vkb2_area_bottom_pane_g2_ParamLimits

0xce03,	// (0x0004bc4e) vkb2_area_bottom_pane_g2

0xce34,	// (0x0004bc7f) vkb2_area_bottom_pane_g3_ParamLimits

0xce34,	// (0x0004bc7f) vkb2_area_bottom_pane_g3

0x0002,

0xfd7b,	// (0x0004ebc6) vkb2_area_bottom_pane_g_ParamLimits

0xfd7b,	// (0x0004ebc6) vkb2_area_bottom_pane_g

0x2ff7,	// (0x00041e42) vkb2_top_cell_left_pane_ParamLimits

0x2ff7,	// (0x00041e42) vkb2_top_cell_left_pane

0xeea0,	// (0x0004dceb) vkb2_top_entry_pane_g1_ParamLimits

0xeea0,	// (0x0004dceb) vkb2_top_entry_pane_g1

0xeeae,	// (0x0004dcf9) vkb2_top_entry_pane_t1_ParamLimits

0xeeae,	// (0x0004dcf9) vkb2_top_entry_pane_t1

0x99c2,	// (0x0004880d) vkb2_top_entry_pane_t2_ParamLimits

0x99c2,	// (0x0004880d) vkb2_top_entry_pane_t2

0x99f4,	// (0x0004883f) vkb2_top_entry_pane_t3_ParamLimits

0x99f4,	// (0x0004883f) vkb2_top_entry_pane_t3

0x0002,

0xfd82,	// (0x0004ebcd) vkb2_top_entry_pane_t_ParamLimits

0xfd82,	// (0x0004ebcd) vkb2_top_entry_pane_t

0xce9e,	// (0x0004bce9) vkb2_top_grid_right_pane_g1_ParamLimits

0xce9e,	// (0x0004bce9) vkb2_top_grid_right_pane_g1

0x305a,	// (0x00041ea5) vkb2_top_grid_right_pane_g2_ParamLimits

0x305a,	// (0x00041ea5) vkb2_top_grid_right_pane_g2

0x3072,	// (0x00041ebd) vkb2_top_grid_right_pane_g3_ParamLimits

0x3072,	// (0x00041ebd) vkb2_top_grid_right_pane_g3

0xceb4,	// (0x0004bcff) vkb2_top_grid_right_pane_g4_ParamLimits

0xceb4,	// (0x0004bcff) vkb2_top_grid_right_pane_g4

0x0003,

0xfd89,	// (0x0004ebd4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd89,	// (0x0004ebd4) vkb2_top_grid_right_pane_g

0x30a0,	// (0x00041eeb) vkb2_top_cell_left_pane_g1

0x30b7,	// (0x00041f02) vkb2_cell_keypad_pane_g1_ParamLimits

0x30b7,	// (0x00041f02) vkb2_cell_keypad_pane_g1

0x9a18,	// (0x00048863) vkb2_cell_keypad_pane_t1_ParamLimits

0x9a18,	// (0x00048863) vkb2_cell_keypad_pane_t1

0x30c5,	// (0x00041f10) vkb2_cell_bottom_grid_pane_ParamLimits

0x30c5,	// (0x00041f10) vkb2_cell_bottom_grid_pane

0x30fe,	// (0x00041f49) vkb2_cell_bottom_grid_pane_g1

0xeb5f,	// (0x0004d9aa) aid_call2_pane_cp02

0xeb67,	// (0x0004d9b2) aid_call_pane_cp02

0xeb6f,	// (0x0004d9ba) clock_digital_number_pane_cp10

0xeb77,	// (0x0004d9c2) clock_digital_number_pane_cp11

0xeb7f,	// (0x0004d9ca) clock_digital_number_pane_cp12

0xeb87,	// (0x0004d9d2) clock_digital_number_pane_cp13

0xeb8f,	// (0x0004d9da) clock_digital_separator_pane_cp10

0x46ea,	// (0x00043535) popup_clock_digital_analogue_window_cp2_g1

0x46ea,	// (0x00043535) popup_clock_digital_analogue_window_cp2_g2

0xeb97,	// (0x0004d9e2) popup_clock_digital_analogue_window_cp2_g3

0x46ea,	// (0x00043535) popup_clock_digital_analogue_window_cp2_g4

0xeb97,	// (0x0004d9e2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0004eb89) popup_clock_digital_analogue_window_cp2_g

0xeb9f,	// (0x0004d9ea) popup_clock_digital_analogue_window_cp2_t1

0xebad,	// (0x0004d9f8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd49,	// (0x0004eb94) popup_clock_digital_analogue_window_cp2_t

0x7af0,	// (0x0004693b) clock_digital_number_pane_cp10_g1

0x7af0,	// (0x0004693b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004e97c) clock_digital_number_pane_cp10_g

0x7af0,	// (0x0004693b) clock_digital_separator_pane_cp10_g1

0x7af0,	// (0x0004693b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004e97c) clock_digital_separator_pane_cp10_g

0x943f,	// (0x0004828a) uniindi_top_pane_g3

0x9450,	// (0x0004829b) uniindi_top_pane_g4

0x2ed8,	// (0x00041d23) vkb2_row_keypad_pane_ParamLimits

0x2ed8,	// (0x00041d23) vkb2_row_keypad_pane

0x311a,	// (0x00041f65) vkb2_cell_t_keypad_pane_ParamLimits

0x311a,	// (0x00041f65) vkb2_cell_t_keypad_pane

0x312a,	// (0x00041f75) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x312a,	// (0x00041f75) vkb2_cell_t_keypad_pane_cp08

0x313d,	// (0x00041f88) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x313d,	// (0x00041f88) vkb2_cell_t_keypad_pane_cp09

0x3151,	// (0x00041f9c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x3151,	// (0x00041f9c) vkb2_cell_t_keypad_pane_cp01

0x3162,	// (0x00041fad) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3162,	// (0x00041fad) vkb2_cell_t_keypad_pane_cp02

0x3173,	// (0x00041fbe) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x3173,	// (0x00041fbe) vkb2_cell_t_keypad_pane_cp03

0x3184,	// (0x00041fcf) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3184,	// (0x00041fcf) vkb2_cell_t_keypad_pane_cp04

0x3195,	// (0x00041fe0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3195,	// (0x00041fe0) vkb2_cell_t_keypad_pane_cp05

0x31a6,	// (0x00041ff1) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x31a6,	// (0x00041ff1) vkb2_cell_t_keypad_pane_cp06

0x31b7,	// (0x00042002) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x31b7,	// (0x00042002) vkb2_cell_t_keypad_pane_cp07

0x31c8,	// (0x00042013) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x31c8,	// (0x00042013) vkb2_cell_t_keypad_pane_cp10

0x7d6e,	// (0x00046bb9) vkb2_cell_t_keypad_pane_g1

0x9a2f,	// (0x0004887a) vkb2_cell_t_keypad_pane_t1

0x36df,	// (0x0004252a) popup_grid_graphic2_window

0xeee7,	// (0x0004dd32) aid_size_cell_graphic2_ParamLimits

0xeee7,	// (0x0004dd32) aid_size_cell_graphic2

0xef25,	// (0x0004dd70) bg_popup_window_pane_cp21_ParamLimits

0xef25,	// (0x0004dd70) bg_popup_window_pane_cp21

0xef33,	// (0x0004dd7e) graphic2_pages_pane_ParamLimits

0xef33,	// (0x0004dd7e) graphic2_pages_pane

0xef89,	// (0x0004ddd4) grid_graphic2_control_pane_ParamLimits

0xef89,	// (0x0004ddd4) grid_graphic2_control_pane

0xefd1,	// (0x0004de1c) grid_graphic2_pane_ParamLimits

0xefd1,	// (0x0004de1c) grid_graphic2_pane

0xf058,	// (0x0004dea3) cell_graphic2_pane

0x36df,	// (0x0004252a) main_comp_mode_pane

0x8cad,	// (0x00047af8) list_ai3_gene_pane_ParamLimits

0xe8a6,	// (0x0004d6f1) bg_popup_window_pane_cp19_ParamLimits

0x908d,	// (0x00047ed8) bg_touch_area_indi_pane_ParamLimits

0x908d,	// (0x00047ed8) bg_touch_area_indi_pane

0x90a3,	// (0x00047eee) bg_touch_area_indi_pane_cp01_ParamLimits

0x90a3,	// (0x00047eee) bg_touch_area_indi_pane_cp01

0x90b9,	// (0x00047f04) bg_touch_area_indi_pane_cp02_ParamLimits

0x90b9,	// (0x00047f04) bg_touch_area_indi_pane_cp02

0x90cf,	// (0x00047f1a) bg_touch_area_indi_pane_cp03_ParamLimits

0x90cf,	// (0x00047f1a) bg_touch_area_indi_pane_cp03

0x90e9,	// (0x00047f34) popup_slider_window_g1_ParamLimits

0x9105,	// (0x00047f50) popup_slider_window_g2_ParamLimits

0x9121,	// (0x00047f6c) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x0004eb1e) popup_slider_window_g_ParamLimits

0x9187,	// (0x00047fd2) popup_slider_window_t1_ParamLimits

0x91fb,	// (0x00048046) small_volume_slider_vertical_pane_ParamLimits

0xf058,	// (0x0004dea3) cell_graphic2_pane_ParamLimits

0xf0b3,	// (0x0004defe) bg_button_pane_cp10_ParamLimits

0xf0b3,	// (0x0004defe) bg_button_pane_cp10

0xf0c6,	// (0x0004df11) bg_button_pane_cp11_ParamLimits

0xf0c6,	// (0x0004df11) bg_button_pane_cp11

0xf0d9,	// (0x0004df24) graphic2_pages_pane_g1_ParamLimits

0xf0d9,	// (0x0004df24) graphic2_pages_pane_g1

0xf0f4,	// (0x0004df3f) graphic2_pages_pane_g2_ParamLimits

0xf0f4,	// (0x0004df3f) graphic2_pages_pane_g2

0x0001,

0xfd97,	// (0x0004ebe2) graphic2_pages_pane_g_ParamLimits

0xfd97,	// (0x0004ebe2) graphic2_pages_pane_g

0xf10c,	// (0x0004df57) graphic2_pages_pane_t1_ParamLimits

0xf10c,	// (0x0004df57) graphic2_pages_pane_t1

0xf124,	// (0x0004df6f) cell_graphic2_control_pane_ParamLimits

0xf124,	// (0x0004df6f) cell_graphic2_control_pane

0xf156,	// (0x0004dfa1) cell_graphic2_pane_g1_ParamLimits

0xf156,	// (0x0004dfa1) cell_graphic2_pane_g1

0xe29b,	// (0x0004d0e6) cell_graphic2_pane_g2_ParamLimits

0xe29b,	// (0x0004d0e6) cell_graphic2_pane_g2

0xf163,	// (0x0004dfae) cell_graphic2_pane_g3_ParamLimits

0xf163,	// (0x0004dfae) cell_graphic2_pane_g3

0xe2a8,	// (0x0004d0f3) cell_graphic2_pane_g4_ParamLimits

0xe2a8,	// (0x0004d0f3) cell_graphic2_pane_g4

0xf170,	// (0x0004dfbb) cell_graphic2_pane_g5_ParamLimits

0xf170,	// (0x0004dfbb) cell_graphic2_pane_g5

0x0004,

0xfd9c,	// (0x0004ebe7) cell_graphic2_pane_g_ParamLimits

0xfd9c,	// (0x0004ebe7) cell_graphic2_pane_g

0xf190,	// (0x0004dfdb) cell_graphic2_pane_t1_ParamLimits

0xf190,	// (0x0004dfdb) cell_graphic2_pane_t1

0x624c,	// (0x00045097) grid_highlight_pane_cp11_ParamLimits

0x624c,	// (0x00045097) grid_highlight_pane_cp11

0x3a5c,	// (0x000428a7) bg_button_pane_cp05

0xf1d9,	// (0x0004e024) cell_graphic2_control_pane_g1

0x7af0,	// (0x0004693b) bg_touch_area_indi_pane_g1

0x9d0b,	// (0x00048b56) aid_cmod_rocker_key_size

0x9d15,	// (0x00048b60) aid_cmode_itu_key_size

0x9d1f,	// (0x00048b6a) main_cmode_video_pane

0x9d29,	// (0x00048b74) main_comp_mode_itu_pane

0x9d35,	// (0x00048b80) main_comp_mode_rocker_pane

0x9d41,	// (0x00048b8c) cell_cmode_rocker_pane_ParamLimits

0x9d41,	// (0x00048b8c) cell_cmode_rocker_pane

0x9d53,	// (0x00048b9e) cell_cmode_itu_pane_ParamLimits

0x9d53,	// (0x00048b9e) cell_cmode_itu_pane

0x4074,	// (0x00042ebf) bg_button_pane_cp06_ParamLimits

0x4074,	// (0x00042ebf) bg_button_pane_cp06

0x7d6e,	// (0x00046bb9) cell_cmode_rocker_pane_g1_ParamLimits

0x7d6e,	// (0x00046bb9) cell_cmode_rocker_pane_g1

0x929f,	// (0x000480ea) cell_cmode_rocker_pane_g2_ParamLimits

0x929f,	// (0x000480ea) cell_cmode_rocker_pane_g2

0x0001,

0xfdac,	// (0x0004ebf7) cell_cmode_rocker_pane_g_ParamLimits

0xfdac,	// (0x0004ebf7) cell_cmode_rocker_pane_g

0x36df,	// (0x0004252a) bg_button_pane_cp07

0x9d68,	// (0x00048bb3) cell_cmode_itu_pane_g1

0x9d71,	// (0x00048bbc) cell_cmode_itu_pane_t1

0x9d7f,	// (0x00048bca) cell_cmode_itu_pane_t2

0x0001,

0xfdb1,	// (0x0004ebfc) cell_cmode_itu_pane_t

0x94c2,	// (0x0004830d) aid_touch_ctrl_left

0x94ca,	// (0x00048315) aid_touch_ctrl_right

0x36df,	// (0x0004252a) compa_mode_pane

0xf1fd,	// (0x0004e048) aid_cmod_rocker_key_size_cp

0xf207,	// (0x0004e052) aid_cmode_itu_key_size_cp

0x9da1,	// (0x00048bec) compa_mode_pane_g1

0x9da9,	// (0x00048bf4) compa_mode_pane_g2

0x9db1,	// (0x00048bfc) compa_mode_pane_g3

0x0002,

0xfdb6,	// (0x0004ec01) compa_mode_pane_g

0xf211,	// (0x0004e05c) main_comp_mode_itu_pane_cp

0xf219,	// (0x0004e064) main_comp_mode_rocker_pane_cp

0xf221,	// (0x0004e06c) cell_cmode_itu_pane_cp_ParamLimits

0xf221,	// (0x0004e06c) cell_cmode_itu_pane_cp

0xf236,	// (0x0004e081) cell_cmode_rocker_pane_cp_ParamLimits

0xf236,	// (0x0004e081) cell_cmode_rocker_pane_cp

0x4074,	// (0x00042ebf) bg_button_pane_cp06_cp_ParamLimits

0x4074,	// (0x00042ebf) bg_button_pane_cp06_cp

0x7d6e,	// (0x00046bb9) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7d6e,	// (0x00046bb9) cell_cmode_rocker_pane_g1_cp

0x7af0,	// (0x0004693b) cell_cmode_rocker_pane_g2_cp

0x36df,	// (0x0004252a) bg_button_pane_cp07_cp

0xf248,	// (0x0004e093) cell_cmode_itu_pane_g1_cp

0xf251,	// (0x0004e09c) cell_cmode_itu_pane_t1_cp

0xf251,	// (0x0004e09c) cell_cmode_itu_pane_t2_cp

0xdedf,	// (0x0004cd2a) settings_code_pane_cp2

0x37d3,	// (0x0004261e) bg_popup_window_pane_cp3_ParamLimits

0x3c5c,	// (0x00042aa7) heading_pane_cp3_ParamLimits

0x3c68,	// (0x00042ab3) listscroll_popup_graphic_pane_ParamLimits

0x2714,	// (0x0004155f) fep_hwr_aid_pane_ParamLimits

0x2bba,	// (0x00041a05) aid_touch_sctrl_top_ParamLimits

0x2bc7,	// (0x00041a12) sctrl_sk_top_pane_g1_ParamLimits

0x7d6e,	// (0x00046bb9) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x0004eb37) sctrl_sk_top_pane_g_ParamLimits

0x2bd4,	// (0x00041a1f) sctrl_sk_top_pane_t1_ParamLimits

0x2bba,	// (0x00041a05) aid_touch_sctrl_bottom_ParamLimits

0x2bd4,	// (0x00041a1f) sctrl_sk_bottom_pane_t1_ParamLimits

0x940b,	// (0x00048256) aid_area_touch_clock

0xcce2,	// (0x0004bb2d) aid_vkb2_area_top_pane_cell_ParamLimits

0xcce2,	// (0x0004bb2d) aid_vkb2_area_top_pane_cell

0xcd8d,	// (0x0004bbd8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd8d,	// (0x0004bbd8) aid_vkb2_area_bottom_pane_cell

0x997a,	// (0x000487c5) popup_char_count_window

0x9dfe,	// (0x00048c49) popup_char_count_window_g1

0x9e07,	// (0x00048c52) popup_char_count_window_g2

0x9e10,	// (0x00048c5b) popup_char_count_window_g3

0x0002,

0xfdbd,	// (0x0004ec08) popup_char_count_window_g

0x9e19,	// (0x00048c64) popup_char_count_window_t1

0x2c75,	// (0x00041ac0) popup_fep_char_preview_window_ParamLimits

0x2c75,	// (0x00041ac0) popup_fep_char_preview_window

0xcd02,	// (0x0004bb4d) vkb2_top_candi_pane_ParamLimits

0xcd02,	// (0x0004bb4d) vkb2_top_candi_pane

0xf25f,	// (0x0004e0aa) cell_vkb2_top_candi_pane_ParamLimits

0xf25f,	// (0x0004e0aa) cell_vkb2_top_candi_pane

0x5bd8,	// (0x00044a23) bg_popup_fep_char_preview_window_ParamLimits

0x5bd8,	// (0x00044a23) bg_popup_fep_char_preview_window

0x31dd,	// (0x00042028) popup_fep_char_preview_window_t1_ParamLimits

0x31dd,	// (0x00042028) popup_fep_char_preview_window_t1

0x9e74,	// (0x00048cbf) bg_popup_fep_char_preview_window_g1

0x9e7c,	// (0x00048cc7) bg_popup_fep_char_preview_window_g2

0x9e84,	// (0x00048ccf) bg_popup_fep_char_preview_window_g3

0x9e8c,	// (0x00048cd7) bg_popup_fep_char_preview_window_g4

0x9e94,	// (0x00048cdf) bg_popup_fep_char_preview_window_g5

0x3217,	// (0x00042062) bg_popup_fep_char_preview_window_g6

0x9e9c,	// (0x00048ce7) bg_popup_fep_char_preview_window_g7

0x9ea4,	// (0x00048cef) bg_popup_fep_char_preview_window_g8

0x9eac,	// (0x00048cf7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc4,	// (0x0004ec0f) bg_popup_fep_char_preview_window_g

0x7d6e,	// (0x00046bb9) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7d6e,	// (0x00046bb9) cell_vkb2_top_candi_pane_g1

0x8091,	// (0x00046edc) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8091,	// (0x00046edc) cell_vkb2_top_candi_pane_g2

0x80b2,	// (0x00046efd) cell_vkb2_top_candi_pane_g3_ParamLimits

0x80b2,	// (0x00046efd) cell_vkb2_top_candi_pane_g3

0x321f,	// (0x0004206a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x321f,	// (0x0004206a) cell_vkb2_top_candi_pane_g4

0x9eb4,	// (0x00048cff) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9eb4,	// (0x00048cff) cell_vkb2_top_candi_pane_g5

0x929f,	// (0x000480ea) cell_vkb2_top_candi_pane_g6_ParamLimits

0x929f,	// (0x000480ea) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x0004ec22) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x0004ec22) cell_vkb2_top_candi_pane_g

0x3240,	// (0x0004208b) cell_vkb2_top_candi_pane_t1

0x24a9,	// (0x000412f4) aid_size_touch_slider_mark_ParamLimits

0x24a9,	// (0x000412f4) aid_size_touch_slider_mark

0xef6f,	// (0x0004ddba) grid_graphic2_catg_pane_ParamLimits

0xef6f,	// (0x0004ddba) grid_graphic2_catg_pane

0xf02b,	// (0x0004de76) popup_grid_graphic2_window_t1_ParamLimits

0xf02b,	// (0x0004de76) popup_grid_graphic2_window_t1

0xf041,	// (0x0004de8c) popup_grid_graphic2_window_t2_ParamLimits

0xf041,	// (0x0004de8c) popup_grid_graphic2_window_t2

0x0001,

0xfd92,	// (0x0004ebdd) popup_grid_graphic2_window_t_ParamLimits

0xfd92,	// (0x0004ebdd) popup_grid_graphic2_window_t

0x3a5c,	// (0x000428a7) bg_button_pane_cp05_ParamLimits

0xf1d9,	// (0x0004e024) cell_graphic2_control_pane_g1_ParamLimits

0xf2c5,	// (0x0004e110) cell_graphic2_catg_pane_ParamLimits

0xf2c5,	// (0x0004e110) cell_graphic2_catg_pane

0x36df,	// (0x0004252a) bg_button_pane_cp12

0xf2d7,	// (0x0004e122) cell_graphic2_catg_pane_g1

0x93d7,	// (0x00048222) cell_tb_ext_pane_t1_ParamLimits

0x3017,	// (0x00041e62) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3017,	// (0x00041e62) vkb2_top_cell_right_narrow_pane

0x302f,	// (0x00041e7a) vkb2_top_cell_right_wide_pane_ParamLimits

0x302f,	// (0x00041e7a) vkb2_top_cell_right_wide_pane

0x2706,	// (0x00041551) bg_vkb2_func_pane_ParamLimits

0x2706,	// (0x00041551) bg_vkb2_func_pane

0x30a0,	// (0x00041eeb) vkb2_top_cell_left_pane_g1_ParamLimits

0x2706,	// (0x00041551) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2706,	// (0x00041551) bg_vkb2_fuc_pane_cp03

0x30fe,	// (0x00041f49) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5559,	// (0x000443a4) bg_vkb2_func_pane_g1

0x5561,	// (0x000443ac) bg_vkb2_func_pane_g2

0x5571,	// (0x000443bc) bg_vkb2_func_pane_g3

0x5569,	// (0x000443b4) bg_vkb2_func_pane_g4

0x5579,	// (0x000443c4) bg_vkb2_func_pane_g5

0x5581,	// (0x000443cc) bg_vkb2_func_pane_g6

0x5589,	// (0x000443d4) bg_vkb2_func_pane_g7

0x5591,	// (0x000443dc) bg_vkb2_func_pane_g8

0x5551,	// (0x0004439c) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x0004ec2f) bg_vkb2_func_pane_g

0x2706,	// (0x00041551) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2706,	// (0x00041551) bg_vkb2_fuc_pane_cp01

0x30a0,	// (0x00041eeb) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x30a0,	// (0x00041eeb) vkb2_top_cell_right_wide_pane_g1

0x2706,	// (0x00041551) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2706,	// (0x00041551) bg_vkb2_fuc_pane_cp02

0x30fe,	// (0x00041f49) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x30fe,	// (0x00041f49) vkb2_top_cell_right_narrow_pane_g1

0xe7e8,	// (0x0004d633) aid_touch_area_decrease_ParamLimits

0xe7e8,	// (0x0004d633) aid_touch_area_decrease

0xe822,	// (0x0004d66d) aid_touch_area_increase_ParamLimits

0xe822,	// (0x0004d66d) aid_touch_area_increase

0xe84a,	// (0x0004d695) aid_touch_area_mute_ParamLimits

0xe84a,	// (0x0004d695) aid_touch_area_mute

0xe872,	// (0x0004d6bd) aid_touch_area_slider_ParamLimits

0xe872,	// (0x0004d6bd) aid_touch_area_slider

0xe8b2,	// (0x0004d6fd) popup_slider_window_g4_ParamLimits

0xe8b2,	// (0x0004d6fd) popup_slider_window_g4

0xe8da,	// (0x0004d725) popup_slider_window_g5_ParamLimits

0xe8da,	// (0x0004d725) popup_slider_window_g5

0xe90e,	// (0x0004d759) popup_slider_window_g6_ParamLimits

0xe90e,	// (0x0004d759) popup_slider_window_g6

0x91b5,	// (0x00048000) popup_slider_window_t2_ParamLimits

0x91b5,	// (0x00048000) popup_slider_window_t2

0x0001,

0xfce0,	// (0x0004eb2b) popup_slider_window_t_ParamLimits

0xfce0,	// (0x0004eb2b) popup_slider_window_t

0xe92a,	// (0x0004d775) slider_pane_ParamLimits

0xe92a,	// (0x0004d775) slider_pane

0x9ef0,	// (0x00048d3b) slider_pane_g1_ParamLimits

0x9ef0,	// (0x00048d3b) slider_pane_g1

0x9f04,	// (0x00048d4f) slider_pane_g2_ParamLimits

0x9f04,	// (0x00048d4f) slider_pane_g2

0x9f1a,	// (0x00048d65) slider_pane_g3_ParamLimits

0x9f1a,	// (0x00048d65) slider_pane_g3

0x0003,

0xfdf7,	// (0x0004ec42) slider_pane_g_ParamLimits

0xfdf7,	// (0x0004ec42) slider_pane_g

0xc928,	// (0x0004b773) popup_tb_float_extension_window_ParamLimits

0xc928,	// (0x0004b773) popup_tb_float_extension_window

0x9f46,	// (0x00048d91) aid_size_cell_tb_float_ext

0x36df,	// (0x0004252a) bg_popup_sub_window_cp28

0x9f52,	// (0x00048d9d) grid_tb_float_ext_pane

0x9f5c,	// (0x00048da7) cell_tb_float_ext_pane_ParamLimits

0x9f5c,	// (0x00048da7) cell_tb_float_ext_pane

0x9f76,	// (0x00048dc1) cell_tb_float_ext_pane_g1

0x9f7f,	// (0x00048dca) grid_highlight_pane_cp12

0xca73,	// (0x0004b8be) cell_last_hwr_side_pane_ParamLimits

0xca73,	// (0x0004b8be) cell_last_hwr_side_pane

0x7af0,	// (0x0004693b) cell_last_hwr_side_pane_g1

0x9f88,	// (0x00048dd3) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x0004ec4b) cell_last_hwr_side_pane_g

0xce69,	// (0x0004bcb4) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce69,	// (0x0004bcb4) vkb2_area_bottom_space_btn_pane

0x7d6e,	// (0x00046bb9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9a2f,	// (0x0004887a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3240,	// (0x0004208b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x325f,	// (0x000420aa) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x325f,	// (0x000420aa) vkb2_area_bottom_space_btn_pane_g1

0x3299,	// (0x000420e4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3299,	// (0x000420e4) vkb2_area_bottom_space_btn_pane_g2

0x32cf,	// (0x0004211a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x32cf,	// (0x0004211a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x0004ec50) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x0004ec50) vkb2_area_bottom_space_btn_pane_g

0x27bb,	// (0x00041606) cel_fep_hwr_func_pane_ParamLimits

0x27bb,	// (0x00041606) cel_fep_hwr_func_pane

0xca48,	// (0x0004b893) cell_hwr_side_button_pane_ParamLimits

0xca48,	// (0x0004b893) cell_hwr_side_button_pane

0x940b,	// (0x00048256) aid_area_touch_clock_ParamLimits

0x3a5c,	// (0x000428a7) bg_uniindi_top_pane_ParamLimits

0x941d,	// (0x00048268) uniindi_top_pane_g1_ParamLimits

0x9433,	// (0x0004827e) uniindi_top_pane_g2_ParamLimits

0x943f,	// (0x0004828a) uniindi_top_pane_g3_ParamLimits

0x9450,	// (0x0004829b) uniindi_top_pane_g4_ParamLimits

0xfd18,	// (0x0004eb63) uniindi_top_pane_g_ParamLimits

0x945d,	// (0x000482a8) uniindi_top_pane_t1_ParamLimits

0x3a5c,	// (0x000428a7) bg_vkb2_func_pane_cp01_ParamLimits

0x3a5c,	// (0x000428a7) bg_vkb2_func_pane_cp01

0x9f91,	// (0x00048ddc) cel_fep_hwr_func_pane_g1_ParamLimits

0x9f91,	// (0x00048ddc) cel_fep_hwr_func_pane_g1

0x3a5c,	// (0x000428a7) bg_vkb2_func_pane_cp02_ParamLimits

0x3a5c,	// (0x000428a7) bg_vkb2_func_pane_cp02

0x9f91,	// (0x00048ddc) cell_hwr_side_button_pane_g1_ParamLimits

0x9f91,	// (0x00048ddc) cell_hwr_side_button_pane_g1

0x53d2,	// (0x0004421d) status_pane_g4_ParamLimits

0x53d2,	// (0x0004421d) status_pane_g4

0x53ec,	// (0x00044237) status_pane_t1

0x7835,	// (0x00046680) form2_midp_gauge_slider_cont_pane

0x783d,	// (0x00046688) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe1ae,	// (0x0004cff9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe1c0,	// (0x0004d00b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0004e92f) form2_midp_gauge_slider_pane_t_ParamLimits

0x7873,	// (0x000466be) form2_midp_slider_pane_ParamLimits

0x2c35,	// (0x00041a80) aid_size_cell_func_vkb2_ParamLimits

0x2c35,	// (0x00041a80) aid_size_cell_func_vkb2

0x9f32,	// (0x00048d7d) slider_pane_g4_ParamLimits

0x9f32,	// (0x00048d7d) slider_pane_g4

0xceca,	// (0x0004bd15) form2_midp_gauge_slider_pane_t2_cp01

0xced8,	// (0x0004bd23) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xced8,	// (0x0004bd23) form2_midp_gauge_slider_pane_t3_cp01

0x3344,	// (0x0004218f) form2_midp_slider_pane_cp01

0x36df,	// (0x0004252a) navi_smil_pane

0x9fca,	// (0x00048e15) navi_smil_pane_g1

0x9fd2,	// (0x00048e1d) navi_smil_pane_t1

0x9f9f,	// (0x00048dea) form2_midp_slider_pane_g1

0x9fa8,	// (0x00048df3) form2_midp_slider_pane_g2

0x9fb0,	// (0x00048dfb) form2_midp_slider_pane_g3

0x9f9f,	// (0x00048dea) form2_midp_slider_pane_g4

0xf2e0,	// (0x0004e12b) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x0004ec59) form2_midp_slider_pane_g

0x3309,	// (0x00042154) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3309,	// (0x00042154) vkb2_area_bottom_space_btn_pane_g4

0xd8c4,	// (0x0004c70f) lc0_navi_pane_ParamLimits

0xd8c4,	// (0x0004c70f) lc0_navi_pane

0xd92e,	// (0x0004c779) lc0_stat_indi_pane_ParamLimits

0xd92e,	// (0x0004c779) lc0_stat_indi_pane

0xd943,	// (0x0004c78e) ls0_title_pane_ParamLimits

0xd943,	// (0x0004c78e) ls0_title_pane

0x4074,	// (0x00042ebf) bg_popup_sub_pane_cp14_ParamLimits

0x93f2,	// (0x0004823d) list_uniindi_pane_ParamLimits

0x93fe,	// (0x00048249) uniindi_top_pane_ParamLimits

0x949a,	// (0x000482e5) list_single_uniindi_pane_g1_ParamLimits

0x94ad,	// (0x000482f8) list_single_uniindi_pane_t1_ParamLimits

0xcef5,	// (0x0004bd40) lc0_stat_clock_pane_ParamLimits

0xcef5,	// (0x0004bd40) lc0_stat_clock_pane

0xf2eb,	// (0x0004e136) lc0_stat_indi_pane_g1_ParamLimits

0xf2eb,	// (0x0004e136) lc0_stat_indi_pane_g1

0xf2f8,	// (0x0004e143) lc0_stat_indi_pane_g2_ParamLimits

0xf2f8,	// (0x0004e143) lc0_stat_indi_pane_g2

0x0001,

0x001e,	// (0x0003ee69) lc0_stat_indi_pane_g_ParamLimits

0x001e,	// (0x0003ee69) lc0_stat_indi_pane_g

0xcf02,	// (0x0004bd4d) lc0_uni_indicator_pane_ParamLimits

0xcf02,	// (0x0004bd4d) lc0_uni_indicator_pane

0xf305,	// (0x0004e150) ls0_title_pane_g1_ParamLimits

0xf305,	// (0x0004e150) ls0_title_pane_g1

0xf319,	// (0x0004e164) ls0_title_pane_t1_ParamLimits

0xf319,	// (0x0004e164) ls0_title_pane_t1

0xcf0f,	// (0x0004bd5a) lc0_uni_indicator_pane_g1_ParamLimits

0xcf0f,	// (0x0004bd5a) lc0_uni_indicator_pane_g1

0xa044,	// (0x00048e8f) lc0_stat_clock_pane_t1

0x36df,	// (0x0004252a) main_ai5_pane

0xa052,	// (0x00048e9d) ai5_sk_pane_ParamLimits

0xa052,	// (0x00048e9d) ai5_sk_pane

0xf347,	// (0x0004e192) cell_ai5_widget_pane_ParamLimits

0xf347,	// (0x0004e192) cell_ai5_widget_pane

0xa11a,	// (0x00048f65) aid_size_cell_widget_grid

0xa130,	// (0x00048f7b) bg_ai5_widget_pane_ParamLimits

0xa130,	// (0x00048f7b) bg_ai5_widget_pane

0xa1a8,	// (0x00048ff3) cell_ai5_widget_pane_g2

0xa1bc,	// (0x00049007) cell_ai5_widget_pane_g3

0xa1d6,	// (0x00049021) cell_ai5_widget_pane_g4

0xa1e6,	// (0x00049031) cell_ai5_widget_pane_g5

0xa1f6,	// (0x00049041) cell_ai5_widget_pane_g6

0xa202,	// (0x0004904d) cell_ai5_widget_pane_g7

0xa24a,	// (0x00049095) cell_ai5_widget_pane_t1_ParamLimits

0xa24a,	// (0x00049095) cell_ai5_widget_pane_t1

0xa267,	// (0x000490b2) cell_ai5_widget_pane_t2_ParamLimits

0xa267,	// (0x000490b2) cell_ai5_widget_pane_t2

0xa27f,	// (0x000490ca) cell_ai5_widget_pane_t3_ParamLimits

0xa27f,	// (0x000490ca) cell_ai5_widget_pane_t3

0xa297,	// (0x000490e2) cell_ai5_widget_pane_t4_ParamLimits

0xa297,	// (0x000490e2) cell_ai5_widget_pane_t4

0xa2bd,	// (0x00049108) cell_ai5_widget_pane_t5_ParamLimits

0xa2bd,	// (0x00049108) cell_ai5_widget_pane_t5

0xa2dd,	// (0x00049128) cell_ai5_widget_pane_t6_ParamLimits

0xa2dd,	// (0x00049128) cell_ai5_widget_pane_t6

0xa2ef,	// (0x0004913a) cell_ai5_widget_pane_t7_ParamLimits

0xa2ef,	// (0x0004913a) cell_ai5_widget_pane_t7

0xa308,	// (0x00049153) cell_ai5_widget_pane_t8_ParamLimits

0xa308,	// (0x00049153) cell_ai5_widget_pane_t8

0x0009,

0xfe2e,	// (0x0004ec79) cell_ai5_widget_pane_t_ParamLimits

0xfe2e,	// (0x0004ec79) cell_ai5_widget_pane_t

0xa367,	// (0x000491b2) grid_ai5_widget_pane

0x4074,	// (0x00042ebf) highlight_cell_ai5_widget_pane_ParamLimits

0x4074,	// (0x00042ebf) highlight_cell_ai5_widget_pane

0xf3ad,	// (0x0004e1f8) ai5_sk_left_pane

0xf3b7,	// (0x0004e202) ai5_sk_middle_pane

0xf3c1,	// (0x0004e20c) ai5_sk_right_pane

0xa39c,	// (0x000491e7) bg_ai5_widget_pane_g1_ParamLimits

0xa39c,	// (0x000491e7) bg_ai5_widget_pane_g1

0xa3a8,	// (0x000491f3) bg_ai5_widget_pane_g2_ParamLimits

0xa3a8,	// (0x000491f3) bg_ai5_widget_pane_g2

0xa3b4,	// (0x000491ff) bg_ai5_widget_pane_g3_ParamLimits

0xa3b4,	// (0x000491ff) bg_ai5_widget_pane_g3

0xa3c0,	// (0x0004920b) bg_ai5_widget_pane_g4_ParamLimits

0xa3c0,	// (0x0004920b) bg_ai5_widget_pane_g4

0xa3cc,	// (0x00049217) bg_ai5_widget_pane_g5_ParamLimits

0xa3cc,	// (0x00049217) bg_ai5_widget_pane_g5

0xa3d8,	// (0x00049223) bg_ai5_widget_pane_g6_ParamLimits

0xa3d8,	// (0x00049223) bg_ai5_widget_pane_g6

0xa3e4,	// (0x0004922f) bg_ai5_widget_pane_g7_ParamLimits

0xa3e4,	// (0x0004922f) bg_ai5_widget_pane_g7

0xa3f0,	// (0x0004923b) bg_ai5_widget_pane_g8_ParamLimits

0xa3f0,	// (0x0004923b) bg_ai5_widget_pane_g8

0xa3fc,	// (0x00049247) bg_ai5_widget_pane_g9_ParamLimits

0xa3fc,	// (0x00049247) bg_ai5_widget_pane_g9

0x0008,

0xfe43,	// (0x0004ec8e) bg_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x0004ec8e) bg_ai5_widget_pane_g

0xa42e,	// (0x00049279) cell_shortcut_ai5_widget_pane_ParamLimits

0xa42e,	// (0x00049279) cell_shortcut_ai5_widget_pane

0x4cfd,	// (0x00043b48) bg_cell_shortcut_ai5_widget_pane

0xa43f,	// (0x0004928a) cell_grid_ai5_widget_pane_g1

0x4cfd,	// (0x00043b48) highlight_cell_shortcut_ai5_widget_pane

0x5561,	// (0x000443ac) ai5_sk_left_pane_g1

0xa448,	// (0x00049293) ai5_sk_left_pane_g2

0xa450,	// (0x0004929b) ai5_sk_left_pane_g3

0xa458,	// (0x000492a3) ai5_sk_left_pane_g4

0x0003,

0xfe56,	// (0x0004eca1) ai5_sk_left_pane_g

0xa460,	// (0x000492ab) ai5_sk_left_pane_t1

0x5559,	// (0x000443a4) ai5_sk_right_pane_g1

0xa46e,	// (0x000492b9) ai5_sk_right_pane_g2

0xa476,	// (0x000492c1) ai5_sk_right_pane_g3

0xa47e,	// (0x000492c9) ai5_sk_right_pane_g4

0x0003,

0xfe5f,	// (0x0004ecaa) ai5_sk_right_pane_g

0xa486,	// (0x000492d1) ai5_sk_right_pane_t1

0x5559,	// (0x000443a4) ai5_sk_middle_pane_g1

0x5561,	// (0x000443ac) ai5_sk_middle_pane_g2

0x5579,	// (0x000443c4) ai5_sk_middle_pane_g3

0xa476,	// (0x000492c1) ai5_sk_middle_pane_g4

0xa450,	// (0x0004929b) ai5_sk_middle_pane_g5

0xa494,	// (0x000492df) ai5_sk_middle_pane_g6

0xf3cb,	// (0x0004e216) ai5_sk_middle_pane_g7

0x0006,

0xfe68,	// (0x0004ecb3) ai5_sk_middle_pane_g

0xd7b0,	// (0x0004c5fb) aid_touch_area_size_lc0_ParamLimits

0xd7b0,	// (0x0004c5fb) aid_touch_area_size_lc0

0x2946,	// (0x00041791) cell_hwr_candidate_pane_t1_ParamLimits

0x509d,	// (0x00043ee8) aid_touch_navi_pane

0xda3c,	// (0x0004c887) status_dt_navi_pane_ParamLimits

0xda3c,	// (0x0004c887) status_dt_navi_pane

0xda54,	// (0x0004c89f) status_dt_sta_pane_ParamLimits

0xda54,	// (0x0004c89f) status_dt_sta_pane

0xf3d3,	// (0x0004e21e) dt_sta_controll_pane

0xf3e0,	// (0x0004e22b) dt_sta_indi_pane

0xf3ed,	// (0x0004e238) dt_sta_title_pane

0x3a5c,	// (0x000428a7) bg_dt_sta_indi_pane_ParamLimits

0x3a5c,	// (0x000428a7) bg_dt_sta_indi_pane

0xf3ff,	// (0x0004e24a) dt_sta_battery_pane

0xf407,	// (0x0004e252) dt_sta_indi_pane_g1

0xa4e6,	// (0x00049331) dt_sta_indi_pane_g2

0xa4ef,	// (0x0004933a) dt_sta_indi_pane_g3

0x0002,

0xfe77,	// (0x0004ecc2) dt_sta_indi_pane_g

0xa4f8,	// (0x00049343) dt_sta_signal_pane

0x4074,	// (0x00042ebf) bg_dt_sta_title_pane_ParamLimits

0x4074,	// (0x00042ebf) bg_dt_sta_title_pane

0xa501,	// (0x0004934c) dt_sta_title_pane_g1

0xa509,	// (0x00049354) dt_sta_title_pane_t1_ParamLimits

0xa509,	// (0x00049354) dt_sta_title_pane_t1

0x36df,	// (0x0004252a) bg_dt_sta_control_pane

0xf410,	// (0x0004e25b) dt_sta_controll_pane_g1

0xa527,	// (0x00049372) bg_dt_sta_title_pane_g1

0xa530,	// (0x0004937b) bg_dt_sta_title_pane_g2

0xa539,	// (0x00049384) bg_dt_sta_title_pane_g3

0x0002,

0xfe7e,	// (0x0004ecc9) bg_dt_sta_title_pane_g

0x7af0,	// (0x0004693b) bg_dt_sta_indi_pane_g1

0xa542,	// (0x0004938d) dt_sta_signal_pane_g1

0xa54a,	// (0x00049395) dt_sta_signal_pane_g2

0x0001,

0xfe85,	// (0x0004ecd0) dt_sta_signal_pane_g

0xa552,	// (0x0004939d) dt_sta_battery_pane_g1

0xa55b,	// (0x000493a6) dt_sta_battery_pane_t1

0x7af0,	// (0x0004693b) bg_dt_sta_control_pane_g1

0x47fc,	// (0x00043647) fep_china_uni_eep_pane

0x4804,	// (0x0004364f) fep_china_uni_entry_pane_ParamLimits

0x4814,	// (0x0004365f) popup_fep_china_uni_window_g1_ParamLimits

0x4824,	// (0x0004366f) popup_fep_china_uni_window_g2_ParamLimits

0x4824,	// (0x0004366f) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0004e56d) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0004e56d) popup_fep_china_uni_window_g

0xa56a,	// (0x000493b5) fep_china_uni_eep_pane_g1

0xa572,	// (0x000493bd) fep_china_uni_eep_pane_t1

0x9fc1,	// (0x00048e0c) aid_touch_area_size_smil_player

0x51ed,	// (0x00044038) lc0_clock_pane

0x53e0,	// (0x0004422b) status_pane_g5_ParamLimits

0x53e0,	// (0x0004422b) status_pane_g5

0xc4aa,	// (0x0004b2f5) popup_keymap_window

0x539e,	// (0x000441e9) status_icon_pane

0xa1bc,	// (0x00049007) cell_ai5_widget_pane_g3_ParamLimits

0xa1d6,	// (0x00049021) cell_ai5_widget_pane_g4_ParamLimits

0xa1e6,	// (0x00049031) cell_ai5_widget_pane_g5_ParamLimits

0xa20e,	// (0x00049059) cell_ai5_widget_pane_g8_ParamLimits

0xa20e,	// (0x00049059) cell_ai5_widget_pane_g8

0xa222,	// (0x0004906d) cell_ai5_widget_pane_g9_ParamLimits

0xa222,	// (0x0004906d) cell_ai5_widget_pane_g9

0xa236,	// (0x00049081) cell_ai5_widget_pane_g10_ParamLimits

0xa236,	// (0x00049081) cell_ai5_widget_pane_g10

0xa581,	// (0x000493cc) status_icon_pane_g1

0x36df,	// (0x0004252a) bg_popup_sub_pane_cp13

0xa589,	// (0x000493d4) popup_keymap_window_t1

0xd73e,	// (0x0004c589) control_pane_g6_ParamLimits

0xd73e,	// (0x0004c589) control_pane_g6

0xd74b,	// (0x0004c596) control_pane_g7_ParamLimits

0xd74b,	// (0x0004c596) control_pane_g7

0xd758,	// (0x0004c5a3) control_pane_g8_ParamLimits

0xd758,	// (0x0004c5a3) control_pane_g8

0xf3d3,	// (0x0004e21e) dt_sta_controll_pane_ParamLimits

0xf3e0,	// (0x0004e22b) dt_sta_indi_pane_ParamLimits

0xf3ed,	// (0x0004e238) dt_sta_title_pane_ParamLimits

0x3fa0,	// (0x00042deb) aid_size_touch_scroll_bar_cale

0x1316,	// (0x00040161) popup_discreet_window_ParamLimits

0x1316,	// (0x00040161) popup_discreet_window

0xc041,	// (0x0004ae8c) popup_sk_window

0x5bd8,	// (0x00044a23) bg_popup_sub_pane_cp28_ParamLimits

0x5bd8,	// (0x00044a23) bg_popup_sub_pane_cp28

0xa597,	// (0x000493e2) popup_discreet_window_g1_ParamLimits

0xa597,	// (0x000493e2) popup_discreet_window_g1

0xa5b7,	// (0x00049402) popup_discreet_window_t1_ParamLimits

0xa5b7,	// (0x00049402) popup_discreet_window_t1

0xa5d5,	// (0x00049420) popup_discreet_window_t2_ParamLimits

0xa5d5,	// (0x00049420) popup_discreet_window_t2

0x0002,

0xfe8a,	// (0x0004ecd5) popup_discreet_window_t_ParamLimits

0xfe8a,	// (0x0004ecd5) popup_discreet_window_t

0x337b,	// (0x000421c6) popup_sk_window_g1

0x3385,	// (0x000421d0) popup_sk_window_g2

0x0001,

0xfe91,	// (0x0004ecdc) popup_sk_window_g

0x338d,	// (0x000421d8) popup_sk_window_t1

0x339b,	// (0x000421e6) popup_sk_window_t1_copy1

0xa1a8,	// (0x00048ff3) cell_ai5_widget_pane_g2_ParamLimits

0xa31a,	// (0x00049165) cell_ai5_widget_pane_t9_ParamLimits

0xa31a,	// (0x00049165) cell_ai5_widget_pane_t9

0x36df,	// (0x0004252a) main_fep_fshwr2_pane

0xcf36,	// (0x0004bd81) aid_fshwr2_btn_pane

0xcf47,	// (0x0004bd92) aid_fshwr2_syb_pane

0xcf58,	// (0x0004bda3) aid_fshwr2_txt_pane

0xcf64,	// (0x0004bdaf) fshwr2_func_candi_pane

0xcf83,	// (0x0004bdce) fshwr2_hwr_syb_pane

0xcf9e,	// (0x0004bde9) fshwr2_icf_pane

0x36df,	// (0x0004252a) fshwr2_icf_bg_pane

0x341b,	// (0x00042266) fshwr2_icf_pane_t1_ParamLimits

0x341b,	// (0x00042266) fshwr2_icf_pane_t1

0x46ea,	// (0x00043535) fshwr2_func_candi_pane_g1

0xf419,	// (0x0004e264) fshwr2_func_candi_row_pane_ParamLimits

0xf419,	// (0x0004e264) fshwr2_func_candi_row_pane

0xcfca,	// (0x0004be15) cell_fshwr2_syb_pane_ParamLimits

0xcfca,	// (0x0004be15) cell_fshwr2_syb_pane

0x7d6e,	// (0x00046bb9) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7d6e,	// (0x00046bb9) fshwr2_hwr_syb_pane_g1

0x36df,	// (0x0004252a) bg_popup_call_pane_cp01

0xcfe0,	// (0x0004be2b) fshwr2_func_candi_cell_pane_ParamLimits

0xcfe0,	// (0x0004be2b) fshwr2_func_candi_cell_pane

0xf43c,	// (0x0004e287) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf43c,	// (0x0004e287) fshwr2_func_candi_cell_bg_pane

0xd02b,	// (0x0004be76) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd02b,	// (0x0004be76) fshwr2_func_candi_cell_pane_g1

0xd062,	// (0x0004bead) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd062,	// (0x0004bead) fshwr2_func_candi_cell_pane_t1

0x36df,	// (0x0004252a) bg_button_pane_cp08

0xa643,	// (0x0004948e) cell_fshwr2_syb_bg_pane

0xd07d,	// (0x0004bec8) cell_fshwr2_syb_bg_pane_g1

0xd085,	// (0x0004bed0) cell_fshwr2_syb_bg_pane_t1

0x4074,	// (0x00042ebf) main_tmo_pane

0xdd12,	// (0x0004cb5d) uni_indicator_pane_g1_ParamLimits

0xdd27,	// (0x0004cb72) uni_indicator_pane_g2_ParamLimits

0xdd3d,	// (0x0004cb88) uni_indicator_pane_g3_ParamLimits

0x671b,	// (0x00045566) uni_indicator_pane_g4_ParamLimits

0x671b,	// (0x00045566) uni_indicator_pane_g4

0x672f,	// (0x0004557a) uni_indicator_pane_g5_ParamLimits

0x672f,	// (0x0004557a) uni_indicator_pane_g5

0x672f,	// (0x0004557a) uni_indicator_pane_g6_ParamLimits

0x672f,	// (0x0004557a) uni_indicator_pane_g6

0xf921,	// (0x0004e76c) uni_indicator_pane_g_ParamLimits

0xe7c4,	// (0x0004d60f) popup_tmo_note_window_ParamLimits

0xe7c4,	// (0x0004d60f) popup_tmo_note_window

0x4074,	// (0x00042ebf) fshwr2_bg_pane

0xd053,	// (0x0004be9e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd053,	// (0x0004be9e) fshwr2_func_candi_cell_pane_g2

0x0001,

0x00a0,	// (0x0003eeeb) fshwr2_func_candi_cell_pane_g_ParamLimits

0x00a0,	// (0x0003eeeb) fshwr2_func_candi_cell_pane_g

0x7af0,	// (0x0004693b) bg_popup_window_pane_cp01

0x34e6,	// (0x00042331) bg_popup_window_pane_g1_cp01

0xa64b,	// (0x00049496) bg_popup_window_pane_cp22_ParamLimits

0xa64b,	// (0x00049496) bg_popup_window_pane_cp22

0xa659,	// (0x000494a4) listscroll_tmo_link_pane_ParamLimits

0xa659,	// (0x000494a4) listscroll_tmo_link_pane

0xa699,	// (0x000494e4) popup_tmo_note_window_g1_ParamLimits

0xa699,	// (0x000494e4) popup_tmo_note_window_g1

0xa6a6,	// (0x000494f1) tmo_note_info_pane_ParamLimits

0xa6a6,	// (0x000494f1) tmo_note_info_pane

0xf448,	// (0x0004e293) list_tmo_note_info_pane_g1_ParamLimits

0xf448,	// (0x0004e293) list_tmo_note_info_pane_g1

0xa6d7,	// (0x00049522) list_tmo_note_info_pane_g2_ParamLimits

0xa6d7,	// (0x00049522) list_tmo_note_info_pane_g2

0x0001,

0xfe96,	// (0x0004ece1) list_tmo_note_info_pane_g_ParamLimits

0xfe96,	// (0x0004ece1) list_tmo_note_info_pane_g

0xa6f3,	// (0x0004953e) list_tmo_note_info_text_pane_ParamLimits

0xa6f3,	// (0x0004953e) list_tmo_note_info_text_pane

0xa774,	// (0x000495bf) list_tmo_link_pane

0xa781,	// (0x000495cc) scroll_pane_cp20

0xa78e,	// (0x000495d9) list_single_tmo_link_pane_ParamLimits

0xa78e,	// (0x000495d9) list_single_tmo_link_pane

0xa79e,	// (0x000495e9) list_single_tmo_link_pane_t1

0xa7ac,	// (0x000495f7) list_tmo_note_info_text_pane_t1_ParamLimits

0xa7ac,	// (0x000495f7) list_tmo_note_info_text_pane_t1

0xd406,	// (0x0004c251) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd406,	// (0x0004c251) aid_size_touch_scroll_bar_cp01

0xbc13,	// (0x0004aa5e) aid_size_touch_slider_marker

0xc031,	// (0x0004ae7c) popup_settings_window_ParamLimits

0xc031,	// (0x0004ae7c) popup_settings_window

0x0862,	// (0x0003f6ad) popup_candi_list_indi_window

0x509d,	// (0x00043ee8) aid_touch_navi_pane_ParamLimits

0x2b8e,	// (0x000419d9) rs_clock_indi_pane

0x2b97,	// (0x000419e2) sctrl_sk_bottom_pane_ParamLimits

0x2ba8,	// (0x000419f3) sctrl_sk_top_pane_ParamLimits

0x2c8f,	// (0x00041ada) popup_fep_tooltip_window

0xa11a,	// (0x00048f65) aid_size_cell_widget_grid_ParamLimits

0xa193,	// (0x00048fde) cell_ai5_widget_pane_g1_ParamLimits

0xa193,	// (0x00048fde) cell_ai5_widget_pane_g1

0xa1f6,	// (0x00049041) cell_ai5_widget_pane_g6_ParamLimits

0xa202,	// (0x0004904d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe19,	// (0x0004ec64) cell_ai5_widget_pane_g_ParamLimits

0xfe19,	// (0x0004ec64) cell_ai5_widget_pane_g

0xa349,	// (0x00049194) cell_ai5_widget_pane_t10_ParamLimits

0xa349,	// (0x00049194) cell_ai5_widget_pane_t10

0xa367,	// (0x000491b2) grid_ai5_widget_pane_ParamLimits

0xa408,	// (0x00049253) cell_contacts_ai5_widget_pane_ParamLimits

0xa408,	// (0x00049253) cell_contacts_ai5_widget_pane

0xa5ea,	// (0x00049435) popup_discreet_window_t3_ParamLimits

0xa5ea,	// (0x00049435) popup_discreet_window_t3

0xcfb6,	// (0x0004be01) popup_fshwr2_char_preview_window_ParamLimits

0xcfb6,	// (0x0004be01) popup_fshwr2_char_preview_window

0xf45f,	// (0x0004e2aa) tmo_note_info_pane_t1

0xf474,	// (0x0004e2bf) tmo_note_info_pane_t2

0xf48b,	// (0x0004e2d6) tmo_note_info_pane_t3

0xa750,	// (0x0004959b) tmo_note_info_pane_t4

0xa762,	// (0x000495ad) tmo_note_info_pane_t5

0x0004,

0xfe9b,	// (0x0004ece6) tmo_note_info_pane_t

0xa774,	// (0x000495bf) list_tmo_link_pane_ParamLimits

0xa781,	// (0x000495cc) scroll_pane_cp20_ParamLimits

0x36df,	// (0x0004252a) bg_popup_fep_char_preview_window_cp01

0xa7c5,	// (0x00049610) popup_fshwr2_char_preview_window_t1

0xa7d3,	// (0x0004961e) popup_candi_list_indi_window_g1

0xa7dc,	// (0x00049627) bg_cell_contacts_ai5_widget_pane

0xa7e8,	// (0x00049633) cell_contacts_ai5_widget_pane_g1

0x81dc,	// (0x00047027) cell_contacts_ai5_widget_pane_g2

0xa7fd,	// (0x00049648) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea6,	// (0x0004ecf1) cell_contacts_ai5_widget_pane_g

0xa809,	// (0x00049654) cell_contacts_ai5_widget_pane_t1

0x4074,	// (0x00042ebf) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa880,	// (0x000496cb) settings_container_pane

0x4cfd,	// (0x00043b48) listscroll_set_pane_copy1

0x7200,	// (0x0004604b) scroll_pane_cp121_copy1

0x597d,	// (0x000447c8) set_content_pane_copy1

0xa88c,	// (0x000496d7) aid_height_set_list_copy1_ParamLimits

0xa88c,	// (0x000496d7) aid_height_set_list_copy1

0x6927,	// (0x00045772) aid_size_parent_copy1_ParamLimits

0x6927,	// (0x00045772) aid_size_parent_copy1

0xa898,	// (0x000496e3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa898,	// (0x000496e3) button_value_adjust_pane_cp6_copy1

0x5021,	// (0x00043e6c) list_highlight_pane_cp2_copy1_ParamLimits

0x5021,	// (0x00043e6c) list_highlight_pane_cp2_copy1

0xa8ac,	// (0x000496f7) list_set_pane_copy1_ParamLimits

0xa8ac,	// (0x000496f7) list_set_pane_copy1

0xa81b,	// (0x00049666) main_pane_set_t1_copy1_ParamLimits

0xa81b,	// (0x00049666) main_pane_set_t1_copy1

0xa855,	// (0x000496a0) main_pane_set_t2_copy1_ParamLimits

0xa855,	// (0x000496a0) main_pane_set_t2_copy1

0xa959,	// (0x000497a4) main_pane_set_t3_copy1

0xa967,	// (0x000497b2) main_pane_set_t4_copy1

0xa874,	// (0x000496bf) set_content_pane_g1_copy1_ParamLimits

0xa874,	// (0x000496bf) set_content_pane_g1_copy1

0xa975,	// (0x000497c0) setting_code_pane_copy1

0xa97d,	// (0x000497c8) setting_slider_graphic_pane_copy1

0xa97d,	// (0x000497c8) setting_slider_pane_copy1

0xa97d,	// (0x000497c8) setting_text_pane_copy1

0xa97d,	// (0x000497c8) setting_volume_pane_copy1

0xa975,	// (0x000497c0) settings_code_pane_cp2_copy1

0xa985,	// (0x000497d0) settings_code_pane_cp_copy1_ParamLimits

0xa985,	// (0x000497d0) settings_code_pane_cp_copy1

0x34ef,	// (0x0004233a) volume_set_pane_copy1

0xa999,	// (0x000497e4) volume_set_pane_g10_copy1

0xa9a1,	// (0x000497ec) volume_set_pane_g1_copy1

0xa9a9,	// (0x000497f4) volume_set_pane_g2_copy1

0xa9b1,	// (0x000497fc) volume_set_pane_g3_copy1

0xa9b9,	// (0x00049804) volume_set_pane_g4_copy1

0xa9c1,	// (0x0004980c) volume_set_pane_g5_copy1

0xa9c9,	// (0x00049814) volume_set_pane_g6_copy1

0xa9d1,	// (0x0004981c) volume_set_pane_g7_copy1

0xa9d9,	// (0x00049824) volume_set_pane_g8_copy1

0xa9e1,	// (0x0004982c) volume_set_pane_g9_copy1

0x37d3,	// (0x0004261e) bg_set_opt_pane_cp_copy1_ParamLimits

0x37d3,	// (0x0004261e) bg_set_opt_pane_cp_copy1

0x34f7,	// (0x00042342) setting_slider_pane_t1_copy1_ParamLimits

0x34f7,	// (0x00042342) setting_slider_pane_t1_copy1

0x3515,	// (0x00042360) setting_slider_pane_t2_copy1_ParamLimits

0x3515,	// (0x00042360) setting_slider_pane_t2_copy1

0x352f,	// (0x0004237a) setting_slider_pane_t3_copy1_ParamLimits

0x352f,	// (0x0004237a) setting_slider_pane_t3_copy1

0x3547,	// (0x00042392) slider_set_pane_copy1_ParamLimits

0x3547,	// (0x00042392) slider_set_pane_copy1

0x40c0,	// (0x00042f0b) set_opt_bg_pane_g1_copy2

0x40c8,	// (0x00042f13) set_opt_bg_pane_g2_copy2

0xa9e9,	// (0x00049834) set_opt_bg_pane_g3_copy2

0x40d8,	// (0x00042f23) set_opt_bg_pane_g4_copy2

0x40e0,	// (0x00042f2b) set_opt_bg_pane_g5_copy2

0x40e8,	// (0x00042f33) set_opt_bg_pane_g6_copy2

0xa9f3,	// (0x0004983e) set_opt_bg_pane_g7_copy2

0xa9fb,	// (0x00049846) set_opt_bg_pane_g8_copy2

0xaa05,	// (0x00049850) set_opt_bg_pane_g9_copy2

0x355d,	// (0x000423a8) aid_size_touch_slider_mark_copy1_ParamLimits

0x355d,	// (0x000423a8) aid_size_touch_slider_mark_copy1

0xaa0f,	// (0x0004985a) slider_set_pane_g1_copy1

0x3571,	// (0x000423bc) slider_set_pane_g2_copy1

0x24c9,	// (0x00041314) slider_set_pane_g3_copy1_ParamLimits

0x24c9,	// (0x00041314) slider_set_pane_g3_copy1

0x24dd,	// (0x00041328) slider_set_pane_g4_copy1_ParamLimits

0x24dd,	// (0x00041328) slider_set_pane_g4_copy1

0x24f5,	// (0x00041340) slider_set_pane_g5_copy1_ParamLimits

0x24f5,	// (0x00041340) slider_set_pane_g5_copy1

0x24c9,	// (0x00041314) slider_set_pane_g6_copy1_ParamLimits

0x24c9,	// (0x00041314) slider_set_pane_g6_copy1

0x3579,	// (0x000423c4) slider_set_pane_g7_copy1_ParamLimits

0x3579,	// (0x000423c4) slider_set_pane_g7_copy1

0x36f3,	// (0x0004253e) bg_set_opt_pane_cp2_copy1

0xaa18,	// (0x00049863) setting_slider_graphic_pane_g1_copy1

0xaa21,	// (0x0004986c) setting_slider_graphic_pane_t1_copy1

0xaa31,	// (0x0004987c) setting_slider_graphic_pane_t2_copy1

0xaa41,	// (0x0004988c) slider_set_pane_cp_copy1

0xaa51,	// (0x0004989c) input_focus_pane_cp1_copy1

0xaa5a,	// (0x000498a5) list_set_text_pane_copy1

0xaa62,	// (0x000498ad) setting_text_pane_g1_copy1

0x108d,	// (0x0003fed8) set_text_pane_t1_copy1

0xaa51,	// (0x0004989c) input_focus_pane_cp2_copy1

0xaa62,	// (0x000498ad) setting_code_pane_g1_copy1

0xaa6b,	// (0x000498b6) setting_code_pane_t1_copy1

0xaa79,	// (0x000498c4) list_set_graphic_pane_copy1

0x36f3,	// (0x0004253e) bg_set_opt_pane_cp4_copy1

0x49f8,	// (0x00043843) list_set_graphic_pane_g1_copy1_ParamLimits

0x49f8,	// (0x00043843) list_set_graphic_pane_g1_copy1

0xaa8c,	// (0x000498d7) list_set_graphic_pane_g2_copy1

0x4a10,	// (0x0004385b) list_set_graphic_pane_t1_copy1_ParamLimits

0x4a10,	// (0x0004385b) list_set_graphic_pane_t1_copy1

0x7af0,	// (0x0004693b) rs_clock_indi_pane_g1

0xaa94,	// (0x000498df) rs_clock_indi_pane_t1

0xaaa2,	// (0x000498ed) rs_indi_pane

0xaaaa,	// (0x000498f5) rs_indi_pane_g1

0xaab3,	// (0x000498fe) rs_indi_pane_g2

0xaabc,	// (0x00049907) rs_indi_pane_g3

0x0002,

0xfead,	// (0x0004ecf8) rs_indi_pane_g

0x4cfd,	// (0x00043b48) bg_popup_preview_window_pane_cp03

0xaac5,	// (0x00049910) popup_fep_tooltip_window_t1

0x8778,	// (0x000475c3) popup_note2_window_g2_ParamLimits

0x8778,	// (0x000475c3) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0004ea9b) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0004ea9b) popup_note2_window_g

0x8c73,	// (0x00047abe) bg_popup_sub_pane_cp11_ParamLimits

0x8c80,	// (0x00047acb) cell_ai3_links_pane_g1_ParamLimits

0x8c97,	// (0x00047ae2) cell_ai3_links_pane_t1

0x108d,	// (0x0003fed8) set_text_pane_t1_copy1_ParamLimits

0x4c0e,	// (0x00043a59) cell_graphic_popup_pane_cp2_ParamLimits

0x4c0e,	// (0x00043a59) cell_graphic_popup_pane_cp2

0xaad3,	// (0x0004991e) cell_graphic_popup_pane_g1_cp2

0x3db3,	// (0x00042bfe) cell_graphic_popup_pane_g2_cp2

0xaadb,	// (0x00049926) cell_graphic_popup_pane_g3_cp2

0xaae3,	// (0x0004992e) cell_graphic_popup_pane_t2_cp2

0x3dc4,	// (0x00042c0f) grid_highlight_pane_cp3_cp2

0x4405,	// (0x00043250) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4074,	// (0x00042ebf) main_tmo_pane_ParamLimits

0xe7b8,	// (0x0004d603) popup_tmo_big_image_note_window

0xa182,	// (0x00048fcd) cell_ai5_widget_list_pane

0xa18a,	// (0x00048fd5) cell_ai5_widget_lrg_icon_pane

0xf45f,	// (0x0004e2aa) tmo_note_info_pane_t1_ParamLimits

0xf474,	// (0x0004e2bf) tmo_note_info_pane_t2_ParamLimits

0xf48b,	// (0x0004e2d6) tmo_note_info_pane_t3_ParamLimits

0xa750,	// (0x0004959b) tmo_note_info_pane_t4_ParamLimits

0xa762,	// (0x000495ad) tmo_note_info_pane_t5_ParamLimits

0xfe9b,	// (0x0004ece6) tmo_note_info_pane_t_ParamLimits

0xa880,	// (0x000496cb) settings_container_pane_ParamLimits

0xaa49,	// (0x00049894) indicator_popup_pane_cp5

0xaa49,	// (0x00049894) indicator_popup_pane_cp6

0xaa79,	// (0x000498c4) list_set_graphic_pane_copy1_ParamLimits

0x36df,	// (0x0004252a) bg_popup_window_pane_cp23

0xaaf1,	// (0x0004993c) popup_tmo_big_image_note_window_g1

0xaafb,	// (0x00049946) popup_tmo_big_image_note_window_t1

0xab0b,	// (0x00049956) popup_tmo_big_image_note_window_t2

0xab1b,	// (0x00049966) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb4,	// (0x0004ecff) popup_tmo_big_image_note_window_t

0x7af0,	// (0x0004693b) cell_ai5_widget_lrg_icon_pane_g1

0xab2b,	// (0x00049976) cell_ai5_widget_lrg_icon_pane_t1

0xab39,	// (0x00049984) cell_ai5_widget_list_row_pane_ParamLimits

0xab39,	// (0x00049984) cell_ai5_widget_list_row_pane

0xab50,	// (0x0004999b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab50,	// (0x0004999b) cell_ai5_widget_list_row_pane_g1

0xab5d,	// (0x000499a8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab5d,	// (0x000499a8) cell_ai5_widget_list_row_pane_t1

0xab8e,	// (0x000499d9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xab8e,	// (0x000499d9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebb,	// (0x0004ed06) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebb,	// (0x0004ed06) cell_ai5_widget_list_row_pane_t

0x36df,	// (0x0004252a) main_fep_vtchi_ss_pane

0xabd6,	// (0x00049a21) popup_fep_char_pre_window

0xabde,	// (0x00049a29) popup_fep_ituss_window

0xf4a0,	// (0x0004e2eb) popup_fep_vkbss_window

0xf4ad,	// (0x0004e2f8) grid_vkbss_keypad_pane_ParamLimits

0xf4ad,	// (0x0004e2f8) grid_vkbss_keypad_pane

0xac39,	// (0x00049a84) ituss_keypad_pane

0x359b,	// (0x000423e6) aid_vkbss_key_offset_ParamLimits

0x359b,	// (0x000423e6) aid_vkbss_key_offset

0xd094,	// (0x0004bedf) cell_vkbss_key_pane_ParamLimits

0xd094,	// (0x0004bedf) cell_vkbss_key_pane

0xac48,	// (0x00049a93) bg_cell_vkbss_key_g1_ParamLimits

0xac48,	// (0x00049a93) bg_cell_vkbss_key_g1

0xf4bd,	// (0x0004e308) cell_vkbss_key_3p_pane_ParamLimits

0xf4bd,	// (0x0004e308) cell_vkbss_key_3p_pane

0xf4d7,	// (0x0004e322) cell_vkbss_key_g1_ParamLimits

0xf4d7,	// (0x0004e322) cell_vkbss_key_g1

0xf4f1,	// (0x0004e33c) cell_vkbss_key_t1_ParamLimits

0xf4f1,	// (0x0004e33c) cell_vkbss_key_t1

0x35bd,	// (0x00042408) cell_ituss_key_pane_ParamLimits

0x35bd,	// (0x00042408) cell_ituss_key_pane

0xaca7,	// (0x00049af2) bg_cell_ituss_key_g1_ParamLimits

0xaca7,	// (0x00049af2) bg_cell_ituss_key_g1

0xacb3,	// (0x00049afe) cell_ituss_key_pane_g1_ParamLimits

0xacb3,	// (0x00049afe) cell_ituss_key_pane_g1

0x35ce,	// (0x00042419) cell_ituss_key_pane_g2_ParamLimits

0x35ce,	// (0x00042419) cell_ituss_key_pane_g2

0x0002,

0xfec2,	// (0x0004ed0d) cell_ituss_key_pane_g_ParamLimits

0xfec2,	// (0x0004ed0d) cell_ituss_key_pane_g

0x35fa,	// (0x00042445) cell_ituss_key_t1_ParamLimits

0x35fa,	// (0x00042445) cell_ituss_key_t1

0x3634,	// (0x0004247f) cell_ituss_key_t2_ParamLimits

0x3634,	// (0x0004247f) cell_ituss_key_t2

0x3665,	// (0x000424b0) cell_ituss_key_t3_ParamLimits

0x3665,	// (0x000424b0) cell_ituss_key_t3

0x3634,	// (0x0004247f) cell_ituss_key_t4_ParamLimits

0x3634,	// (0x0004247f) cell_ituss_key_t4

0x0004,

0xfec9,	// (0x0004ed14) cell_ituss_key_t_ParamLimits

0xfec9,	// (0x0004ed14) cell_ituss_key_t

0xacdf,	// (0x00049b2a) cell_vkbss_key_3p_pane_g1

0xace7,	// (0x00049b32) cell_vkbss_key_3p_pane_g2

0xacef,	// (0x00049b3a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed4,	// (0x0004ed1f) cell_vkbss_key_3p_pane_g

0x4cfd,	// (0x00043b48) bg_popup_fep_char_preview_window_cp02

0xacf7,	// (0x00049b42) popup_fep_char_pre_window_t1

0xf3a3,	// (0x0004e1ee) main_ai5_sk_pane

0xa7dc,	// (0x00049627) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa7e8,	// (0x00049633) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x81dc,	// (0x00047027) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa7fd,	// (0x00049648) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea6,	// (0x0004ecf1) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa809,	// (0x00049654) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4074,	// (0x00042ebf) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf51c,	// (0x0004e367) main_ai5_sk_pane_g1

0x5a11,	// (0x0004485c) popup_query_code_window_g1

0xabf4,	// (0x00049a3f) popup_fep_vkb_icf_pane

0xac13,	// (0x00049a5e) popup_fep_vtchi_icf_pane

0xad0e,	// (0x00049b59) bg_icf_pane

0xad1a,	// (0x00049b65) list_vkb_icf_pane

0xad29,	// (0x00049b74) bg_icf_pane_cp01

0xad3c,	// (0x00049b87) vtchi_icf_list_pane

0xad4c,	// (0x00049b97) list_vkb_icf_pane_t1_ParamLimits

0xad4c,	// (0x00049b97) list_vkb_icf_pane_t1

0xad62,	// (0x00049bad) vtchi_icf_list_pane_t1_ParamLimits

0xad62,	// (0x00049bad) vtchi_icf_list_pane_t1

0xabde,	// (0x00049a29) popup_fep_ituss_window_ParamLimits

0xac13,	// (0x00049a5e) popup_fep_vtchi_icf_pane_ParamLimits

0xac39,	// (0x00049a84) ituss_keypad_pane_ParamLimits

0x358f,	// (0x000423da) ituss_sks_pane

0xad0e,	// (0x00049b59) bg_icf_pane_ParamLimits

0xabb6,	// (0x00049a01) icf_edit_indi_pane_ParamLimits

0xabb6,	// (0x00049a01) icf_edit_indi_pane

0xad1a,	// (0x00049b65) list_vkb_icf_pane_ParamLimits

0xad29,	// (0x00049b74) bg_icf_pane_cp01_ParamLimits

0xabc9,	// (0x00049a14) icf_edit_indi_pane_cp01_ParamLimits

0xabc9,	// (0x00049a14) icf_edit_indi_pane_cp01

0xad44,	// (0x00049b8f) vtchi_query_pane

0x9f91,	// (0x00048ddc) icf_edit_indi_pane_g1_ParamLimits

0x9f91,	// (0x00048ddc) icf_edit_indi_pane_g1

0xf525,	// (0x0004e370) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0004e370) icf_edit_indi_pane_g2

0x0001,

0xfeec,	// (0x0004ed37) icf_edit_indi_pane_g_ParamLimits

0xfeec,	// (0x0004ed37) icf_edit_indi_pane_g

0xf537,	// (0x0004e382) icf_edit_indi_pane_t1

0xad7c,	// (0x00049bc7) bg_input_focus_pane_cp042

0x3f97,	// (0x00042de2) vtchi_button_pane

0xad85,	// (0x00049bd0) vtchi_query_pane_t1

0xad93,	// (0x00049bde) vtchi_query_pane_t2

0xada1,	// (0x00049bec) vtchi_query_pane_t3

0x0002,

0xfedb,	// (0x0004ed26) vtchi_query_pane_t

0x36df,	// (0x0004252a) bg_button_pane_cp13

0xadaf,	// (0x00049bfa) vtchi_button_pane_g1

0x36a8,	// (0x000424f3) ituss_sks_pane_g1

0x36b3,	// (0x000424fe) ituss_sks_pane_g2

0x0001,

0xfee2,	// (0x0004ed2d) ituss_sks_pane_g

0xadb7,	// (0x00049c02) ituss_sks_pane_t1

0xadc5,	// (0x00049c10) ituss_sks_pane_t2

0x0001,

0xfee7,	// (0x0004ed32) ituss_sks_pane_t

0x757b,	// (0x000463c6) indicator_nsta_pane_cp_g1

0x7583,	// (0x000463ce) indicator_nsta_pane_cp_g2

0x758b,	// (0x000463d6) indicator_nsta_pane_cp_g3

0x757b,	// (0x000463c6) indicator_nsta_pane_cp_g4

0x7583,	// (0x000463ce) indicator_nsta_pane_cp_g5

0x758b,	// (0x000463d6) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0004e8e5) indicator_nsta_pane_cp_g

0xf1bb,	// (0x0004e006) cell_graphic2_pane_t2_ParamLimits

0xf1bb,	// (0x0004e006) cell_graphic2_pane_t2

0x0001,

0xfda7,	// (0x0004ebf2) cell_graphic2_pane_t_ParamLimits

0xfda7,	// (0x0004ebf2) cell_graphic2_pane_t

0xf1ef,	// (0x0004e03a) cell_graphic2_control_pane_t1

0xd5b1,	// (0x0004c3fc) signal_pane_g3_ParamLimits

0xd5b1,	// (0x0004c3fc) signal_pane_g3

0xd5c5,	// (0x0004c410) signal_pane_g4_ParamLimits

0xd5c5,	// (0x0004c410) signal_pane_g4

0xaba0,	// (0x000499eb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaba0,	// (0x000499eb) cell_ai5_widget_list_row_pane_t3

0xaccd,	// (0x00049b18) cell_ituss_key_pane_t1_ParamLimits

0xaccd,	// (0x00049b18) cell_ituss_key_pane_t1

0x5656,	// (0x000444a1) form_field_data_wide_pane_vc_t2_ParamLimits

0x5656,	// (0x000444a1) form_field_data_wide_pane_vc_t2

0x566a,	// (0x000444b5) form_field_data_wide_pane_vc_t3_ParamLimits

0x566a,	// (0x000444b5) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0004e654) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0004e654) form_field_data_wide_pane_vc_t

0x7242,	// (0x0004608d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7242,	// (0x0004608d) form_field_slider_wide_pane_vc_t3

0x7320,	// (0x0004616b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7320,	// (0x0004616b) form_field_popup_wide_pane_vc_t2

0x7337,	// (0x00046182) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7337,	// (0x00046182) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0004e8d4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0004e8d4) form_field_popup_wide_pane_vc_t

0xcf36,	// (0x0004bd81) aid_fshwr2_btn_pane_ParamLimits

0xcf47,	// (0x0004bd92) aid_fshwr2_syb_pane_ParamLimits

0xcf58,	// (0x0004bda3) aid_fshwr2_txt_pane_ParamLimits

0x4074,	// (0x00042ebf) fshwr2_bg_pane_ParamLimits

0xcf64,	// (0x0004bdaf) fshwr2_func_candi_pane_ParamLimits

0xcf83,	// (0x0004bdce) fshwr2_hwr_syb_pane_ParamLimits

0xcf9e,	// (0x0004bde9) fshwr2_icf_pane_ParamLimits

0x26a9,	// (0x000414f4) list_double_graphic_pane_vc_g4_ParamLimits

0x26a9,	// (0x000414f4) list_double_graphic_pane_vc_g4

0x35ee,	// (0x00042439) cell_ituss_key_pane_g3_ParamLimits

0x35ee,	// (0x00042439) cell_ituss_key_pane_g3

0x3696,	// (0x000424e1) cell_ituss_key_t5_ParamLimits

0x3696,	// (0x000424e1) cell_ituss_key_t5

0xf4a0,	// (0x0004e2eb) popup_fep_vkbss_window_ParamLimits

0xa111,	// (0x00048f5c) aid_cell_ai5_quarter

0xf537,	// (0x0004e382) icf_edit_indi_pane_t1_ParamLimits

0x3b04,	// (0x0004294f) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3b04,	// (0x0004294f) aid_tch_indicator_popup_pane_cp2

0x3b17,	// (0x00042962) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3b17,	// (0x00042962) aid_tch_query_popup_data_pane_cp2

0x59b9,	// (0x00044804) aid_tch_query_popup_pane_ParamLimits

0x59b9,	// (0x00044804) aid_tch_query_popup_pane

0x59b9,	// (0x00044804) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x59b9,	// (0x00044804) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large

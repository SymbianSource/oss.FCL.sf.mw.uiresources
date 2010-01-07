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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001e855 };

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
0x8a30,	// (0x00027285) Screen

0x8a3c,	// (0x00027291) application_window_ParamLimits

0x8a3c,	// (0x00027291) application_window

0x43b4,	// (0x00022c09) screen_g1

0x8a98,	// (0x000272ed) area_bottom_pane_ParamLimits

0x8a98,	// (0x000272ed) area_bottom_pane

0x8b58,	// (0x000273ad) area_top_pane_ParamLimits

0x8b58,	// (0x000273ad) area_top_pane

0x8bf6,	// (0x0002744b) main_pane_ParamLimits

0x8bf6,	// (0x0002744b) main_pane

0x43be,	// (0x00022c13) misc_graphics

0x9f98,	// (0x000287ed) battery_pane_ParamLimits

0x9f98,	// (0x000287ed) battery_pane

0x610e,	// (0x00024963) bg_status_flat_pane_g8

0x6116,	// (0x0002496b) bg_status_flat_pane_g9

0x586f,	// (0x000240c4) context_pane_ParamLimits

0x586f,	// (0x000240c4) context_pane

0xa0cc,	// (0x00028921) navi_pane_ParamLimits

0xa0cc,	// (0x00028921) navi_pane

0xa138,	// (0x0002898d) signal_pane_ParamLimits

0xa138,	// (0x0002898d) signal_pane

0x0008,

0xf8b2,	// (0x0002e107) bg_status_flat_pane_g

0xa19d,	// (0x000289f2) status_pane_g1_ParamLimits

0xa19d,	// (0x000289f2) status_pane_g1

0xa1b1,	// (0x00028a06) status_pane_g2_ParamLimits

0xa1b1,	// (0x00028a06) status_pane_g2

0x58d4,	// (0x00024129) status_pane_g3_ParamLimits

0x58d4,	// (0x00024129) status_pane_g3

0x0004,

0xf7e0,	// (0x0002e035) status_pane_g_ParamLimits

0xf7e0,	// (0x0002e035) status_pane_g

0xa1bd,	// (0x00028a12) title_pane_ParamLimits

0xa1bd,	// (0x00028a12) title_pane

0xa1fa,	// (0x00028a4f) uni_indicator_pane_ParamLimits

0xa1fa,	// (0x00028a4f) uni_indicator_pane

0x5662,	// (0x00023eb7) bg_list_pane_ParamLimits

0x5662,	// (0x00023eb7) bg_list_pane

0xcfd3,	// (0x0002b828) find_pane

0x9aae,	// (0x00028303) listscroll_app_pane_ParamLimits

0x9aae,	// (0x00028303) listscroll_app_pane

0x5682,	// (0x00023ed7) listscroll_form_pane

0xcfdb,	// (0x0002b830) listscroll_gen_pane_ParamLimits

0xcfdb,	// (0x0002b830) listscroll_gen_pane

0x5682,	// (0x00023ed7) listscroll_set_pane

0x9243,	// (0x00027a98) main_idle_act_pane

0x5440,	// (0x00023c95) main_idle_trad_pane

0x5440,	// (0x00023c95) main_list_empty_pane

0x4b73,	// (0x000233c8) main_midp_pane

0x569c,	// (0x00023ef1) main_pane_g1_ParamLimits

0x569c,	// (0x00023ef1) main_pane_g1

0x9aba,	// (0x0002830f) popup_ai_message_window_ParamLimits

0x9aba,	// (0x0002830f) popup_ai_message_window

0x9b38,	// (0x0002838d) popup_fep_china_uni_window_ParamLimits

0x9b38,	// (0x0002838d) popup_fep_china_uni_window

0x56ce,	// (0x00023f23) popup_fep_japan_candidate_window_ParamLimits

0x56ce,	// (0x00023f23) popup_fep_japan_candidate_window

0x56ee,	// (0x00023f43) popup_fep_japan_predictive_window_ParamLimits

0x56ee,	// (0x00023f43) popup_fep_japan_predictive_window

0x9b94,	// (0x000283e9) popup_find_window

0x9ba1,	// (0x000283f6) popup_grid_graphic_window_ParamLimits

0x9ba1,	// (0x000283f6) popup_grid_graphic_window

0x571e,	// (0x00023f73) popup_large_graphic_colour_window

0x9bc9,	// (0x0002841e) popup_menu_window_ParamLimits

0x9bc9,	// (0x0002841e) popup_menu_window

0x9d81,	// (0x000285d6) popup_note_image_window

0x9d6d,	// (0x000285c2) popup_note_wait_window_ParamLimits

0x9d6d,	// (0x000285c2) popup_note_wait_window

0x9d6d,	// (0x000285c2) popup_note_window_ParamLimits

0x9d6d,	// (0x000285c2) popup_note_window

0x9dd7,	// (0x0002862c) popup_query_code_window_ParamLimits

0x9dd7,	// (0x0002862c) popup_query_code_window

0x5744,	// (0x00023f99) popup_query_data_code_window_ParamLimits

0x5744,	// (0x00023f99) popup_query_data_code_window

0x9deb,	// (0x00028640) popup_query_data_window_ParamLimits

0x9deb,	// (0x00028640) popup_query_data_window

0x9e07,	// (0x0002865c) popup_query_sat_info_window_ParamLimits

0x9e07,	// (0x0002865c) popup_query_sat_info_window

0x9e40,	// (0x00028695) popup_snote_single_graphic_window_ParamLimits

0x9e40,	// (0x00028695) popup_snote_single_graphic_window

0x9e40,	// (0x00028695) popup_snote_single_text_window_ParamLimits

0x9e40,	// (0x00028695) popup_snote_single_text_window

0x5761,	// (0x00023fb6) popup_sub_window_general

0x57a9,	// (0x00023ffe) popup_window_general_ParamLimits

0x57a9,	// (0x00023ffe) popup_window_general

0x57be,	// (0x00024013) power_save_pane

0x9928,	// (0x0002817d) control_pane_g1_ParamLimits

0x9928,	// (0x0002817d) control_pane_g1

0x9951,	// (0x000281a6) control_pane_g2_ParamLimits

0x9951,	// (0x000281a6) control_pane_g2

0x563c,	// (0x00023e91) control_pane_g3_ParamLimits

0x563c,	// (0x00023e91) control_pane_g3

0x0007,

0xf7c8,	// (0x0002e01d) control_pane_g_ParamLimits

0xf7c8,	// (0x0002e01d) control_pane_g

0x99bf,	// (0x00028214) control_pane_t1_ParamLimits

0x99bf,	// (0x00028214) control_pane_t1

0x9a11,	// (0x00028266) control_pane_t2_ParamLimits

0x9a11,	// (0x00028266) control_pane_t2

0x0002,

0xf7d9,	// (0x0002e02e) control_pane_t_ParamLimits

0xf7d9,	// (0x0002e02e) control_pane_t

0x555d,	// (0x00023db2) navi_navi_volume_pane_cp1

0x5566,	// (0x00023dbb) status_small_icon_pane

0x556e,	// (0x00023dc3) status_small_pane_g1_ParamLimits

0x556e,	// (0x00023dc3) status_small_pane_g1

0x55a2,	// (0x00023df7) status_small_pane_g2_ParamLimits

0x55a2,	// (0x00023df7) status_small_pane_g2

0x55ae,	// (0x00023e03) status_small_pane_g3_ParamLimits

0x55ae,	// (0x00023e03) status_small_pane_g3

0x55ba,	// (0x00023e0f) status_small_pane_g4_ParamLimits

0x55ba,	// (0x00023e0f) status_small_pane_g4

0x55c6,	// (0x00023e1b) status_small_pane_g5_ParamLimits

0x55c6,	// (0x00023e1b) status_small_pane_g5

0x55d5,	// (0x00023e2a) status_small_pane_g6_ParamLimits

0x55d5,	// (0x00023e2a) status_small_pane_g6

0x0007,

0xf7b7,	// (0x0002e00c) status_small_pane_g_ParamLimits

0xf7b7,	// (0x0002e00c) status_small_pane_g

0x5605,	// (0x00023e5a) status_small_pane_t1

0x5628,	// (0x00023e7d) status_small_wait_pane_ParamLimits

0x5628,	// (0x00023e7d) status_small_wait_pane

0x9551,	// (0x00027da6) aid_levels_signal_ParamLimits

0x9551,	// (0x00027da6) aid_levels_signal

0x9563,	// (0x00027db8) signal_pane_g1_ParamLimits

0x9563,	// (0x00027db8) signal_pane_g1

0x9578,	// (0x00027dcd) signal_pane_g2_ParamLimits

0x9578,	// (0x00027dcd) signal_pane_g2

0x0001,

0xf74c,	// (0x0002dfa1) signal_pane_g_ParamLimits

0xf74c,	// (0x0002dfa1) signal_pane_g

0x4fa6,	// (0x000237fb) context_pane_g1

0x8e3b,	// (0x00027690) title_pane_g1

0x8e65,	// (0x000276ba) title_pane_t1

0x43d4,	// (0x00022c29) title_pane_t2

0x43fa,	// (0x00022c4f) title_pane_t3

0x0002,

0xf59b,	// (0x0002ddf0) title_pane_t

0xa212,	// (0x00028a67) aid_levels_battery_ParamLimits

0xa212,	// (0x00028a67) aid_levels_battery

0xa226,	// (0x00028a7b) battery_pane_g1_ParamLimits

0xa226,	// (0x00028a7b) battery_pane_g1

0xa23c,	// (0x00028a91) battery_pane_g2_ParamLimits

0xa23c,	// (0x00028a91) battery_pane_g2

0x0001,

0xf7eb,	// (0x0002e040) battery_pane_g_ParamLimits

0xf7eb,	// (0x0002e040) battery_pane_g

0xa722,	// (0x00028f77) uni_indicator_pane_g1

0xa737,	// (0x00028f8c) uni_indicator_pane_g2

0xa74d,	// (0x00028fa2) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0002e1af) uni_indicator_pane_g

0x52b2,	// (0x00023b07) navi_icon_pane_ParamLimits

0x52b2,	// (0x00023b07) navi_icon_pane

0x51fb,	// (0x00023a50) navi_midp_pane

0x52ce,	// (0x00023b23) navi_navi_pane

0x52d8,	// (0x00023b2d) navi_text_pane_ParamLimits

0x52d8,	// (0x00023b2d) navi_text_pane

0x43b4,	// (0x00022c09) status_small_wait_pane_g1

0x46e1,	// (0x00022f36) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0002e1aa) status_small_wait_pane_g

0x669f,	// (0x00024ef4) navi_navi_icon_text_pane

0x66b9,	// (0x00024f0e) navi_navi_pane_g1_ParamLimits

0x66b9,	// (0x00024f0e) navi_navi_pane_g1

0x66a7,	// (0x00024efc) navi_navi_pane_g2_ParamLimits

0x66a7,	// (0x00024efc) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0002e178) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0002e178) navi_navi_pane_g

0x66cb,	// (0x00024f20) navi_navi_tabs_pane

0x66d4,	// (0x00024f29) navi_navi_text_pane

0x669f,	// (0x00024ef4) navi_navi_volume_pane

0xa6e6,	// (0x00028f3b) navi_text_pane_t1

0xa6d7,	// (0x00028f2c) navi_icon_pane_g1

0x65e0,	// (0x00024e35) navi_navi_text_pane_t1

0xa6c6,	// (0x00028f1b) navi_navi_volume_pane_g1

0xa6ce,	// (0x00028f23) volume_small_pane

0xa638,	// (0x00028e8d) navi_navi_icon_text_pane_g1

0xa640,	// (0x00028e95) navi_navi_icon_text_pane_t1

0x52ce,	// (0x00023b23) navi_tabs_2_long_pane

0x52ce,	// (0x00023b23) navi_tabs_2_pane

0x52ce,	// (0x00023b23) navi_tabs_3_long_pane

0x52ce,	// (0x00023b23) navi_tabs_3_pane

0x52ce,	// (0x00023b23) navi_tabs_4_pane

0xa618,	// (0x00028e6d) tabs_2_active_pane_ParamLimits

0xa618,	// (0x00028e6d) tabs_2_active_pane

0xa628,	// (0x00028e7d) tabs_2_passive_pane_ParamLimits

0xa628,	// (0x00028e7d) tabs_2_passive_pane

0xa5e6,	// (0x00028e3b) tabs_3_active_pane_ParamLimits

0xa5e6,	// (0x00028e3b) tabs_3_active_pane

0xa5f6,	// (0x00028e4b) tabs_3_passive_pane_ParamLimits

0xa5f6,	// (0x00028e4b) tabs_3_passive_pane

0xa607,	// (0x00028e5c) tabs_3_passive_pane_cp_ParamLimits

0xa607,	// (0x00028e5c) tabs_3_passive_pane_cp

0xa5a2,	// (0x00028df7) tabs_4_active_pane_ParamLimits

0xa5a2,	// (0x00028df7) tabs_4_active_pane

0xa5b3,	// (0x00028e08) tabs_4_passive_pane_ParamLimits

0xa5b3,	// (0x00028e08) tabs_4_passive_pane

0xa5c4,	// (0x00028e19) tabs_4_passive_pane_cp_ParamLimits

0xa5c4,	// (0x00028e19) tabs_4_passive_pane_cp

0xa5d5,	// (0x00028e2a) tabs_4_passive_pane_cp2_ParamLimits

0xa5d5,	// (0x00028e2a) tabs_4_passive_pane_cp2

0xa57e,	// (0x00028dd3) tabs_2_long_active_pane_ParamLimits

0xa57e,	// (0x00028dd3) tabs_2_long_active_pane

0xa590,	// (0x00028de5) tabs_2_long_passive_pane_ParamLimits

0xa590,	// (0x00028de5) tabs_2_long_passive_pane

0xa53f,	// (0x00028d94) tabs_3_long_active_pane_ParamLimits

0xa53f,	// (0x00028d94) tabs_3_long_active_pane

0xa552,	// (0x00028da7) tabs_3_long_passive_pane_ParamLimits

0xa552,	// (0x00028da7) tabs_3_long_passive_pane

0xa56b,	// (0x00028dc0) tabs_3_long_passive_pane_cp_ParamLimits

0xa56b,	// (0x00028dc0) tabs_3_long_passive_pane_cp

0xa4e5,	// (0x00028d3a) volume_small_pane_g1

0xa4ee,	// (0x00028d43) volume_small_pane_g2

0xa4f7,	// (0x00028d4c) volume_small_pane_g3

0xa500,	// (0x00028d55) volume_small_pane_g4

0xa509,	// (0x00028d5e) volume_small_pane_g5

0xa512,	// (0x00028d67) volume_small_pane_g6

0xa51b,	// (0x00028d70) volume_small_pane_g7

0xa524,	// (0x00028d79) volume_small_pane_g8

0xa52d,	// (0x00028d82) volume_small_pane_g9

0xa536,	// (0x00028d8b) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0002e144) volume_small_pane_g

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp2_ParamLimits

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp2

0x8ecd,	// (0x00027722) tabs_3_active_pane_g1

0x8ed5,	// (0x0002772a) tabs_3_active_pane_t1

0x441a,	// (0x00022c6f) bg_passive_tab_pane_cp2_ParamLimits

0x441a,	// (0x00022c6f) bg_passive_tab_pane_cp2

0x8ecd,	// (0x00027722) tabs_3_passive_pane_g1

0x8ed5,	// (0x0002772a) tabs_3_passive_pane_t1

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp3_ParamLimits

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp3

0x8ee7,	// (0x0002773c) tabs_4_active_pane_g1

0x8eef,	// (0x00027744) tabs_4_active_pane_t1

0x441a,	// (0x00022c6f) bg_passive_tab_pane_cp3_ParamLimits

0x441a,	// (0x00022c6f) bg_passive_tab_pane_cp3

0x8ee7,	// (0x0002773c) tabs_4_1_passive_pane_g1

0x8eef,	// (0x00027744) tabs_4_1_passive_pane_t1

0x4b73,	// (0x000233c8) list_highlight_pane_cp2

0xa88c,	// (0x000290e1) list_set_pane_ParamLimits

0xa88c,	// (0x000290e1) list_set_pane

0xa932,	// (0x00029187) main_pane_set_t1_ParamLimits

0xa932,	// (0x00029187) main_pane_set_t1

0xa952,	// (0x000291a7) main_pane_set_t2_ParamLimits

0xa952,	// (0x000291a7) main_pane_set_t2

0xa966,	// (0x000291bb) main_pane_set_t3_ParamLimits

0xa966,	// (0x000291bb) main_pane_set_t3

0xa978,	// (0x000291cd) main_pane_set_t4_ParamLimits

0xa978,	// (0x000291cd) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0002e214) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0002e214) main_pane_set_t

0xa98a,	// (0x000291df) setting_code_pane

0xa996,	// (0x000291eb) setting_slider_graphic_pane

0xa996,	// (0x000291eb) setting_slider_pane

0xa996,	// (0x000291eb) setting_text_pane

0xa996,	// (0x000291eb) setting_volume_pane

0x8f01,	// (0x00027756) volume_set_pane

0x441a,	// (0x00022c6f) bg_set_opt_pane_cp

0x8f09,	// (0x0002775e) setting_slider_pane_t1

0x8f22,	// (0x00027777) setting_slider_pane_t2

0x8f3c,	// (0x00027791) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002ddf7) setting_slider_pane_t

0x8f54,	// (0x000277a9) slider_set_pane

0x43be,	// (0x00022c13) bg_set_opt_pane_cp2

0x4428,	// (0x00022c7d) setting_slider_graphic_pane_g1

0x8f6a,	// (0x000277bf) setting_slider_graphic_pane_t1

0x8f7a,	// (0x000277cf) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002ddfe) setting_slider_graphic_pane_t

0x8f8a,	// (0x000277df) slider_set_pane_cp

0x43be,	// (0x00022c13) input_focus_pane_cp1

0x6b4a,	// (0x0002539f) list_set_text_pane

0x43b4,	// (0x00022c09) setting_text_pane_g1

0x43be,	// (0x00022c13) input_focus_pane_cp2

0x43b4,	// (0x00022c09) setting_code_pane_g1

0x4431,	// (0x00022c86) setting_code_pane_t1

0xc800,	// (0x0002b055) set_text_pane_t1_ParamLimits

0xc800,	// (0x0002b055) set_text_pane_t1

0x4a82,	// (0x000232d7) set_opt_bg_pane_g1

0x4a8a,	// (0x000232df) set_opt_bg_pane_g2

0x6b24,	// (0x00025379) set_opt_bg_pane_g3

0x4a9a,	// (0x000232ef) set_opt_bg_pane_g4

0x4aa2,	// (0x000232f7) set_opt_bg_pane_g5

0x4aaa,	// (0x000232ff) set_opt_bg_pane_g6

0x6b2e,	// (0x00025383) set_opt_bg_pane_g7

0x6b36,	// (0x0002538b) set_opt_bg_pane_g8

0x6b40,	// (0x00025395) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0002e201) set_opt_bg_pane_g

0x6b17,	// (0x0002536c) slider_set_pane_g1

0xa801,	// (0x00029056) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0002e1f2) slider_set_pane_g

0xa778,	// (0x00028fcd) volume_set_pane_g1

0xa780,	// (0x00028fd5) volume_set_pane_g2

0xa788,	// (0x00028fdd) volume_set_pane_g3

0xa790,	// (0x00028fe5) volume_set_pane_g4

0xa798,	// (0x00028fed) volume_set_pane_g5

0xa7a0,	// (0x00028ff5) volume_set_pane_g6

0xa7a8,	// (0x00028ffd) volume_set_pane_g7

0xa7b0,	// (0x00029005) volume_set_pane_g8

0xa7b8,	// (0x0002900d) volume_set_pane_g9

0xa7c0,	// (0x00029015) volume_set_pane_g10

0x0009,

0xf975,	// (0x0002e1ca) volume_set_pane_g

0x8f92,	// (0x000277e7) indicator_pane_ParamLimits

0x8f92,	// (0x000277e7) indicator_pane

0x8f9e,	// (0x000277f3) main_idle_pane_g2_ParamLimits

0x8f9e,	// (0x000277f3) main_idle_pane_g2

0x8fc6,	// (0x0002781b) main_pane_idle_g1_ParamLimits

0x8fc6,	// (0x0002781b) main_pane_idle_g1

0x443f,	// (0x00022c94) popup_clock_digital_analogue_window_ParamLimits

0x443f,	// (0x00022c94) popup_clock_digital_analogue_window

0x8fd3,	// (0x00027828) soft_indicator_pane_ParamLimits

0x8fd3,	// (0x00027828) soft_indicator_pane

0x8fdf,	// (0x00027834) wallpaper_pane_ParamLimits

0x8fdf,	// (0x00027834) wallpaper_pane

0x43b4,	// (0x00022c09) wallpaper_pane_g1

0x8feb,	// (0x00027840) indicator_pane_g1_ParamLimits

0x8feb,	// (0x00027840) indicator_pane_g1

0x6c8c,	// (0x000254e1) navi_navi_icon_text_pane_srt_g1

0x446d,	// (0x00022cc2) soft_indicator_pane_t1

0x4487,	// (0x00022cdc) aid_ps_area_pane

0x8ff7,	// (0x0002784c) aid_ps_clock_pane

0x4498,	// (0x00022ced) aid_ps_indicator_pane

0x44a4,	// (0x00022cf9) indicator_ps_pane_ParamLimits

0x44a4,	// (0x00022cf9) indicator_ps_pane

0x44b3,	// (0x00022d08) power_save_pane_g1_ParamLimits

0x44b3,	// (0x00022d08) power_save_pane_g1

0x44bf,	// (0x00022d14) power_save_pane_g2_ParamLimits

0x44bf,	// (0x00022d14) power_save_pane_g2

0x8a4c,	// (0x000272a1) aid_navinavi_width_pane

0x4487,	// (0x00022cdc) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002de03) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002de03) power_save_pane_g

0x44cd,	// (0x00022d22) power_save_pane_t1_ParamLimits

0x44cd,	// (0x00022d22) power_save_pane_t1

0x8ff7,	// (0x0002784c) aid_ps_clock_pane_ParamLimits

0x4498,	// (0x00022ced) aid_ps_indicator_pane_ParamLimits

0x44df,	// (0x00022d34) power_save_pane_t4_ParamLimits

0x44df,	// (0x00022d34) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002de08) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002de08) power_save_pane_t

0x4509,	// (0x00022d5e) power_save_t3_ParamLimits

0x4509,	// (0x00022d5e) power_save_t3

0x44f4,	// (0x00022d49) power_save_t2_ParamLimits

0x44f4,	// (0x00022d49) power_save_t2

0x451e,	// (0x00022d73) indicator_ps_pane_g1

0x9005,	// (0x0002785a) ai_gene_pane_ParamLimits

0x9005,	// (0x0002785a) ai_gene_pane

0x9011,	// (0x00027866) ai_links_pane_ParamLimits

0x9011,	// (0x00027866) ai_links_pane

0x901d,	// (0x00027872) indicator_pane_cp1_ParamLimits

0x901d,	// (0x00027872) indicator_pane_cp1

0x9029,	// (0x0002787e) main_pane_idle_g1_cp_ParamLimits

0x9029,	// (0x0002787e) main_pane_idle_g1_cp

0x4527,	// (0x00022d7c) popup_ai_links_title_window

0x9035,	// (0x0002788a) soft_indicator_pane_cp1_ParamLimits

0x9035,	// (0x0002788a) soft_indicator_pane_cp1

0x696b,	// (0x000251c0) ai_links_pane_g1

0x6974,	// (0x000251c9) grid_ai_links_pane

0xa717,	// (0x00028f6c) ai_gene_pane_1

0x6959,	// (0x000251ae) ai_gene_pane_2

0x6962,	// (0x000251b7) list_highlight_pane_cp4

0xa6fb,	// (0x00028f50) cell_ai_link_pane_ParamLimits

0xa6fb,	// (0x00028f50) cell_ai_link_pane

0x6951,	// (0x000251a6) cell_ai_link_pane_g1

0x46e1,	// (0x00022f36) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0002e1a5) cell_ai_link_pane_g

0x43be,	// (0x00022c13) grid_highlight_cp2

0x43be,	// (0x00022c13) bg_popup_sub_pane_cp1

0x453e,	// (0x00022d93) popup_ai_links_title_window_t1

0x689f,	// (0x000250f4) ai_gene_pane_1_g1_ParamLimits

0x689f,	// (0x000250f4) ai_gene_pane_1_g1

0x68ab,	// (0x00025100) ai_gene_pane_1_g2_ParamLimits

0x68ab,	// (0x00025100) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0002e19b) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0002e19b) ai_gene_pane_1_g

0x68b8,	// (0x0002510d) ai_gene_pane_1_t1_ParamLimits

0x68b8,	// (0x0002510d) ai_gene_pane_1_t1

0x68ec,	// (0x00025141) grid_ai_soft_ind_pane

0x688a,	// (0x000250df) ai_gene_pane_2_t1_ParamLimits

0x688a,	// (0x000250df) ai_gene_pane_2_t1

0x9041,	// (0x00027896) main_pane_empty_t1_ParamLimits

0x9041,	// (0x00027896) main_pane_empty_t1

0x9059,	// (0x000278ae) main_pane_empty_t2_ParamLimits

0x9059,	// (0x000278ae) main_pane_empty_t2

0x906e,	// (0x000278c3) main_pane_empty_t3_ParamLimits

0x906e,	// (0x000278c3) main_pane_empty_t3

0x9080,	// (0x000278d5) main_pane_empty_t4_ParamLimits

0x9080,	// (0x000278d5) main_pane_empty_t4

0x9092,	// (0x000278e7) main_pane_empty_t5_ParamLimits

0x9092,	// (0x000278e7) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002de0d) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002de0d) main_pane_empty_t

0x4ad3,	// (0x00023328) bg_popup_window_pane_ParamLimits

0x4ad3,	// (0x00023328) bg_popup_window_pane

0x65ee,	// (0x00024e43) find_popup_pane_cp2_ParamLimits

0x65ee,	// (0x00024e43) find_popup_pane_cp2

0x65fa,	// (0x00024e4f) heading_pane_ParamLimits

0x65fa,	// (0x00024e4f) heading_pane

0x43be,	// (0x00022c13) bg_popup_sub_pane

0xa65a,	// (0x00028eaf) bg_popup_window_pane_g1_ParamLimits

0xa65a,	// (0x00028eaf) bg_popup_window_pane_g1

0xa666,	// (0x00028ebb) bg_popup_window_pane_g2_ParamLimits

0xa666,	// (0x00028ebb) bg_popup_window_pane_g2

0xa672,	// (0x00028ec7) bg_popup_window_pane_g3_ParamLimits

0xa672,	// (0x00028ec7) bg_popup_window_pane_g3

0xa67e,	// (0x00028ed3) bg_popup_window_pane_g4_ParamLimits

0xa67e,	// (0x00028ed3) bg_popup_window_pane_g4

0xa68a,	// (0x00028edf) bg_popup_window_pane_g5_ParamLimits

0xa68a,	// (0x00028edf) bg_popup_window_pane_g5

0xa696,	// (0x00028eeb) bg_popup_window_pane_g6_ParamLimits

0xa696,	// (0x00028eeb) bg_popup_window_pane_g6

0xa6a2,	// (0x00028ef7) bg_popup_window_pane_g7_ParamLimits

0xa6a2,	// (0x00028ef7) bg_popup_window_pane_g7

0xa6ae,	// (0x00028f03) bg_popup_window_pane_g8_ParamLimits

0xa6ae,	// (0x00028f03) bg_popup_window_pane_g8

0xa6ba,	// (0x00028f0f) bg_popup_window_pane_g9_ParamLimits

0xa6ba,	// (0x00028f0f) bg_popup_window_pane_g9

0x65d4,	// (0x00024e29) bg_popup_window_pane_g10_ParamLimits

0x65d4,	// (0x00024e29) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0002e163) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0002e163) bg_popup_window_pane_g

0x658b,	// (0x00024de0) bg_popup_heading_pane_ParamLimits

0x658b,	// (0x00024de0) bg_popup_heading_pane

0xaad5,	// (0x0002932a) tabs_4_passive_pane_cp_srt_ParamLimits

0xaad5,	// (0x0002932a) tabs_4_passive_pane_cp_srt

0xaae7,	// (0x0002933c) tabs_4_passive_pane_srt_ParamLimits

0x659f,	// (0x00024df4) heading_pane_g2

0xaae7,	// (0x0002933c) tabs_4_passive_pane_srt

0x4b73,	// (0x000233c8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4b73,	// (0x000233c8) bg_passive_tab_pane_cp3_srt

0x65a7,	// (0x00024dfc) heading_pane_t1_ParamLimits

0x65a7,	// (0x00024dfc) heading_pane_t1

0x65be,	// (0x00024e13) heading_pane_t2_ParamLimits

0x65be,	// (0x00024e13) heading_pane_t2

0x0001,

0xf909,	// (0x0002e15e) heading_pane_t_ParamLimits

0xf909,	// (0x0002e15e) heading_pane_t

0x60d6,	// (0x0002492b) bg_popup_heading_pane_g1

0x6167,	// (0x000249bc) bg_popup_heading_pane_g2

0x6171,	// (0x000249c6) bg_popup_heading_pane_g3

0x617b,	// (0x000249d0) bg_popup_heading_pane_g4

0x6185,	// (0x000249da) bg_popup_heading_pane_g5

0x618f,	// (0x000249e4) bg_popup_heading_pane_g6

0x6197,	// (0x000249ec) bg_popup_heading_pane_g7

0x619f,	// (0x000249f4) bg_popup_heading_pane_g8

0x61a9,	// (0x000249fe) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0002e11a) bg_popup_heading_pane_g

0x59ca,	// (0x0002421f) bg_popup_sub_pane_g1

0x59d2,	// (0x00024227) bg_popup_sub_pane_g2

0x59da,	// (0x0002422f) bg_popup_sub_pane_g3

0x59e2,	// (0x00024237) bg_popup_sub_pane_g4

0x59ea,	// (0x0002423f) bg_popup_sub_pane_g5

0x59f2,	// (0x00024247) bg_popup_sub_pane_g6

0x59fa,	// (0x0002424f) bg_popup_sub_pane_g7

0x5a02,	// (0x00024257) bg_popup_sub_pane_g8

0x5a0a,	// (0x0002425f) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0002e0f4) bg_popup_sub_pane_g

0x440c,	// (0x00022c61) bg_popup_window_pane_cp5_ParamLimits

0x440c,	// (0x00022c61) bg_popup_window_pane_cp5

0x455b,	// (0x00022db0) popup_note_window_g1_ParamLimits

0x455b,	// (0x00022db0) popup_note_window_g1

0x4567,	// (0x00022dbc) popup_note_window_t1_ParamLimits

0x4567,	// (0x00022dbc) popup_note_window_t1

0x457d,	// (0x00022dd2) popup_note_window_t2_ParamLimits

0x457d,	// (0x00022dd2) popup_note_window_t2

0x4593,	// (0x00022de8) popup_note_window_t3_ParamLimits

0x4593,	// (0x00022de8) popup_note_window_t3

0x45a9,	// (0x00022dfe) popup_note_window_t4_ParamLimits

0x45a9,	// (0x00022dfe) popup_note_window_t4

0x45d1,	// (0x00022e26) popup_note_window_t5_ParamLimits

0x45d1,	// (0x00022e26) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002de18) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002de18) popup_note_window_t

0x45f5,	// (0x00022e4a) bg_popup_window_pane_cp6_ParamLimits

0x45f5,	// (0x00022e4a) bg_popup_window_pane_cp6

0x6052,	// (0x000248a7) popup_note_image_window_g1_ParamLimits

0x6052,	// (0x000248a7) popup_note_image_window_g1

0x605e,	// (0x000248b3) popup_note_image_window_g2_ParamLimits

0x605e,	// (0x000248b3) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0002e0e8) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0002e0e8) popup_note_image_window_g

0x6077,	// (0x000248cc) popup_note_image_window_t1_ParamLimits

0x6077,	// (0x000248cc) popup_note_image_window_t1

0x6090,	// (0x000248e5) popup_note_image_window_t2_ParamLimits

0x6090,	// (0x000248e5) popup_note_image_window_t2

0x60a9,	// (0x000248fe) popup_note_image_window_t3_ParamLimits

0x60a9,	// (0x000248fe) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0002e0ed) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0002e0ed) popup_note_image_window_t

0x5f2f,	// (0x00024784) bg_popup_window_pane_cp7_ParamLimits

0x5f2f,	// (0x00024784) bg_popup_window_pane_cp7

0x5f5f,	// (0x000247b4) popup_note_wait_window_g1_ParamLimits

0x5f5f,	// (0x000247b4) popup_note_wait_window_g1

0x5f6b,	// (0x000247c0) popup_note_wait_window_g2_ParamLimits

0x5f6b,	// (0x000247c0) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0002e0d6) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0002e0d6) popup_note_wait_window_g

0x5f83,	// (0x000247d8) popup_note_wait_window_t1_ParamLimits

0x5f83,	// (0x000247d8) popup_note_wait_window_t1

0x5faa,	// (0x000247ff) popup_note_wait_window_t2_ParamLimits

0x5faa,	// (0x000247ff) popup_note_wait_window_t2

0x5fc7,	// (0x0002481c) popup_note_wait_window_t3_ParamLimits

0x5fc7,	// (0x0002481c) popup_note_wait_window_t3

0x5fda,	// (0x0002482f) popup_note_wait_window_t4_ParamLimits

0x5fda,	// (0x0002482f) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0002e0dd) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0002e0dd) popup_note_wait_window_t

0x5fff,	// (0x00024854) wait_bar_pane_ParamLimits

0x5fff,	// (0x00024854) wait_bar_pane

0x43be,	// (0x00022c13) wait_anim_pane

0x43be,	// (0x00022c13) wait_border_pane

0x43b4,	// (0x00022c09) wait_anim_pane_g1

0x43b4,	// (0x00022c09) wait_anim_pane_g2

0x0001,

0xf747,	// (0x0002df9c) wait_anim_pane_g

0x5ed3,	// (0x00024728) wait_border_pane_g1

0x5ede,	// (0x00024733) wait_border_pane_g2

0x5ee7,	// (0x0002473c) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0002e0cf) wait_border_pane_g

0x5e30,	// (0x00024685) bg_popup_window_pane_cp16_ParamLimits

0x5e30,	// (0x00024685) bg_popup_window_pane_cp16

0x5e3e,	// (0x00024693) indicator_popup_pane_cp4_ParamLimits

0x5e3e,	// (0x00024693) indicator_popup_pane_cp4

0x5e52,	// (0x000246a7) popup_query_data_window_t1_ParamLimits

0x5e52,	// (0x000246a7) popup_query_data_window_t1

0x5e64,	// (0x000246b9) popup_query_data_window_t2_ParamLimits

0x5e64,	// (0x000246b9) popup_query_data_window_t2

0x5e7d,	// (0x000246d2) popup_query_data_window_t3_ParamLimits

0x5e7d,	// (0x000246d2) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0002e0c8) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0002e0c8) popup_query_data_window_t

0x5e97,	// (0x000246ec) query_popup_data_pane_ParamLimits

0x5e97,	// (0x000246ec) query_popup_data_pane

0x5eab,	// (0x00024700) query_popup_data_pane_cp1_ParamLimits

0x5eab,	// (0x00024700) query_popup_data_pane_cp1

0x45f5,	// (0x00022e4a) bg_popup_window_pane_cp10_ParamLimits

0x45f5,	// (0x00022e4a) bg_popup_window_pane_cp10

0x5d93,	// (0x000245e8) indicator_popup_pane_ParamLimits

0x5d93,	// (0x000245e8) indicator_popup_pane

0x464c,	// (0x00022ea1) popup_query_code_window_t1_ParamLimits

0x464c,	// (0x00022ea1) popup_query_code_window_t1

0x5dab,	// (0x00024600) popup_query_code_window_t2_ParamLimits

0x5dab,	// (0x00024600) popup_query_code_window_t2

0x5de9,	// (0x0002463e) popup_query_code_window_t3_ParamLimits

0x5de9,	// (0x0002463e) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0002e0c1) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0002e0c1) popup_query_code_window_t

0x5e18,	// (0x0002466d) query_popup_pane_ParamLimits

0x5e18,	// (0x0002466d) query_popup_pane

0x45f5,	// (0x00022e4a) bg_popup_window_pane_cp15_ParamLimits

0x45f5,	// (0x00022e4a) bg_popup_window_pane_cp15

0x4613,	// (0x00022e68) indicator_popup_pane_cp1_ParamLimits

0x4613,	// (0x00022e68) indicator_popup_pane_cp1

0x4626,	// (0x00022e7b) indicator_popup_pane_cp2_ParamLimits

0x4626,	// (0x00022e7b) indicator_popup_pane_cp2

0x4639,	// (0x00022e8e) popup_query_data_code_window_g1_ParamLimits

0x4639,	// (0x00022e8e) popup_query_data_code_window_g1

0x464c,	// (0x00022ea1) popup_query_data_code_window_t1_ParamLimits

0x464c,	// (0x00022ea1) popup_query_data_code_window_t1

0x465e,	// (0x00022eb3) popup_query_data_code_window_t2_ParamLimits

0x465e,	// (0x00022eb3) popup_query_data_code_window_t2

0x4670,	// (0x00022ec5) popup_query_data_code_window_t3_ParamLimits

0x4670,	// (0x00022ec5) popup_query_data_code_window_t3

0x4686,	// (0x00022edb) popup_query_data_code_window_t4_ParamLimits

0x4686,	// (0x00022edb) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002de23) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002de23) popup_query_data_code_window_t

0xa2a7,	// (0x00028afc) list_single_midp_graphic_pane_g3

0x469e,	// (0x00022ef3) query_popup_data_pane_cp2_ParamLimits

0x46b1,	// (0x00022f06) query_popup_pane_cp2_ParamLimits

0x46b1,	// (0x00022f06) query_popup_pane_cp2

0x43be,	// (0x00022c13) bg_popup_window_pane_cp11

0x5d67,	// (0x000245bc) heading_pane_cp5

0x473f,	// (0x00022f94) listscroll_popup_info_pane

0x43be,	// (0x00022c13) input_focus_pane_cp3

0x46c4,	// (0x00022f19) query_popup_pane_t1

0x46d2,	// (0x00022f27) list_popup_info_pane_ParamLimits

0x46d2,	// (0x00022f27) list_popup_info_pane

0x46e1,	// (0x00022f36) listscroll_popup_info_pane_g1

0x46e9,	// (0x00022f3e) scroll_pane_cp7

0x46f3,	// (0x00022f48) popup_info_list_pane_t1_ParamLimits

0x46f3,	// (0x00022f48) popup_info_list_pane_t1

0x470d,	// (0x00022f62) popup_info_list_pane_t2_ParamLimits

0x470d,	// (0x00022f62) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002de2c) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002de2c) popup_info_list_pane_t

0x43be,	// (0x00022c13) bg_popup_window_pane_cp12

0x6ca6,	// (0x000254fb) find_popup_pane

0x441a,	// (0x00022c6f) bg_popup_window_pane_cp3

0x4727,	// (0x00022f7c) heading_pane_cp3

0x4733,	// (0x00022f88) listscroll_popup_graphic_pane

0x43be,	// (0x00022c13) bg_popup_window_pane_cp4

0x90f6,	// (0x0002794b) heading_pane_cp4

0x473f,	// (0x00022f94) listscroll_popup_colour_pane

0x9100,	// (0x00027955) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9100,	// (0x00027955) cell_large_graphic_colour_none_popup_pane

0x9114,	// (0x00027969) grid_large_graphic_colour_popup_pane_ParamLimits

0x9114,	// (0x00027969) grid_large_graphic_colour_popup_pane

0x9140,	// (0x00027995) listscroll_popup_colour_pane_g1_ParamLimits

0x9140,	// (0x00027995) listscroll_popup_colour_pane_g1

0x9157,	// (0x000279ac) listscroll_popup_colour_pane_g2_ParamLimits

0x9157,	// (0x000279ac) listscroll_popup_colour_pane_g2

0x916e,	// (0x000279c3) listscroll_popup_colour_pane_g3_ParamLimits

0x916e,	// (0x000279c3) listscroll_popup_colour_pane_g3

0x917e,	// (0x000279d3) listscroll_popup_colour_pane_g4_ParamLimits

0x917e,	// (0x000279d3) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002de31) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002de31) listscroll_popup_colour_pane_g

0x4747,	// (0x00022f9c) scroll_pane_cp6_ParamLimits

0x4747,	// (0x00022f9c) scroll_pane_cp6

0x9192,	// (0x000279e7) cell_large_graphic_colour_popup_pane_ParamLimits

0x9192,	// (0x000279e7) cell_large_graphic_colour_popup_pane

0x4759,	// (0x00022fae) cell_large_graphic_colour_none_popup_pane_t1

0x43be,	// (0x00022c13) grid_highlight_pane_cp5

0x4768,	// (0x00022fbd) cell_large_graphic_colour_popup_pane_g1

0x4770,	// (0x00022fc5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002de3a) cell_large_graphic_colour_popup_pane_g

0x4778,	// (0x00022fcd) cell_large_graphic_colour_popup_pane_g2_copy1

0x4781,	// (0x00022fd6) grid_highlight_pane_cp4

0x4789,	// (0x00022fde) bg_popup_window_pane_cp8_ParamLimits

0x4789,	// (0x00022fde) bg_popup_window_pane_cp8

0x47a4,	// (0x00022ff9) popup_snote_single_text_window_g1_ParamLimits

0x47a4,	// (0x00022ff9) popup_snote_single_text_window_g1

0x47b6,	// (0x0002300b) popup_snote_single_text_window_t1_ParamLimits

0x47b6,	// (0x0002300b) popup_snote_single_text_window_t1

0x47c9,	// (0x0002301e) popup_snote_single_text_window_t2_ParamLimits

0x47c9,	// (0x0002301e) popup_snote_single_text_window_t2

0x47dc,	// (0x00023031) popup_snote_single_text_window_t3_ParamLimits

0x47dc,	// (0x00023031) popup_snote_single_text_window_t3

0x4815,	// (0x0002306a) popup_snote_single_text_window_t4_ParamLimits

0x4815,	// (0x0002306a) popup_snote_single_text_window_t4

0x4849,	// (0x0002309e) popup_snote_single_text_window_t5_ParamLimits

0x4849,	// (0x0002309e) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002de3f) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002de3f) popup_snote_single_text_window_t

0x4878,	// (0x000230cd) bg_popup_window_pane_cp9_ParamLimits

0x4878,	// (0x000230cd) bg_popup_window_pane_cp9

0x47a4,	// (0x00022ff9) popup_snote_single_graphic_window_g1_ParamLimits

0x47a4,	// (0x00022ff9) popup_snote_single_graphic_window_g1

0x4886,	// (0x000230db) popup_snote_single_graphic_window_g2_ParamLimits

0x4886,	// (0x000230db) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002de4a) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002de4a) popup_snote_single_graphic_window_g

0x4892,	// (0x000230e7) popup_snote_single_graphic_window_t1_ParamLimits

0x4892,	// (0x000230e7) popup_snote_single_graphic_window_t1

0x48a5,	// (0x000230fa) popup_snote_single_graphic_window_t2_ParamLimits

0x48a5,	// (0x000230fa) popup_snote_single_graphic_window_t2

0x48b8,	// (0x0002310d) popup_snote_single_graphic_window_t3_ParamLimits

0x48b8,	// (0x0002310d) popup_snote_single_graphic_window_t3

0x48f1,	// (0x00023146) popup_snote_single_graphic_window_t4_ParamLimits

0x48f1,	// (0x00023146) popup_snote_single_graphic_window_t4

0x4925,	// (0x0002317a) popup_snote_single_graphic_window_t5_ParamLimits

0x4925,	// (0x0002317a) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002de4f) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002de4f) popup_snote_single_graphic_window_t

0x6c2e,	// (0x00025483) grid_graphic_popup_pane_ParamLimits

0x6c2e,	// (0x00025483) grid_graphic_popup_pane

0x6c56,	// (0x000254ab) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c56,	// (0x000254ab) listscroll_popup_graphic_pane_g1

0xaa9d,	// (0x000292f2) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa9d,	// (0x000292f2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0002e23e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0002e23e) listscroll_popup_graphic_pane_g

0x6724,	// (0x00024f79) scroll_pane_cp5

0xaa5c,	// (0x000292b1) cell_graphic_popup_pane_ParamLimits

0xaa5c,	// (0x000292b1) cell_graphic_popup_pane

0x6bf9,	// (0x0002544e) cell_graphic_popup_pane_g1

0x6c01,	// (0x00025456) cell_graphic_popup_pane_g2

0x4778,	// (0x00022fcd) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0002e237) cell_graphic_popup_pane_g

0x6c0a,	// (0x0002545f) cell_graphic_popup_pane_t2

0x4781,	// (0x00022fd6) grid_highlight_pane_cp3

0x4966,	// (0x000231bb) list_gen_pane_ParamLimits

0x4966,	// (0x000231bb) list_gen_pane

0x498e,	// (0x000231e3) scroll_pane

0xaa0f,	// (0x00029264) bg_list_pane_g1_ParamLimits

0xaa0f,	// (0x00029264) bg_list_pane_g1

0x6ba8,	// (0x000253fd) bg_list_pane_g2_ParamLimits

0x6ba8,	// (0x000253fd) bg_list_pane_g2

0x6bbb,	// (0x00025410) bg_list_pane_g3_ParamLimits

0x6bbb,	// (0x00025410) bg_list_pane_g3

0x6bcd,	// (0x00025422) bg_list_pane_g4_ParamLimits

0x6bcd,	// (0x00025422) bg_list_pane_g4

0xaa2a,	// (0x0002927f) bg_list_pane_g5_ParamLimits

0xaa2a,	// (0x0002927f) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0002e22c) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0002e22c) bg_list_pane_g

0xa9d8,	// (0x0002922d) list_double2_graphic_large_graphic_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_double2_graphic_large_graphic_pane

0xa9d8,	// (0x0002922d) list_double2_graphic_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_double2_graphic_pane

0xa9d8,	// (0x0002922d) list_double2_large_graphic_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_double2_large_graphic_pane

0xd120,	// (0x0002b975) list_double2_pane_ParamLimits

0xd120,	// (0x0002b975) list_double2_pane

0xa9d8,	// (0x0002922d) list_double_graphic_heading_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_double_graphic_heading_pane

0xa9d8,	// (0x0002922d) list_double_graphic_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_double_graphic_pane

0xa9d8,	// (0x0002922d) list_double_heading_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_double_heading_pane

0xa9d8,	// (0x0002922d) list_double_large_graphic_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_double_large_graphic_pane

0xa9d8,	// (0x0002922d) list_double_number_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_double_number_pane

0xa9d8,	// (0x0002922d) list_double_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_double_pane

0xa9d8,	// (0x0002922d) list_double_time_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_double_time_pane

0xa9d8,	// (0x0002922d) list_setting_number_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_setting_number_pane

0xa9d8,	// (0x0002922d) list_setting_pane_ParamLimits

0xa9d8,	// (0x0002922d) list_setting_pane

0xd15b,	// (0x0002b9b0) list_single_2graphic_pane_ParamLimits

0xd15b,	// (0x0002b9b0) list_single_2graphic_pane

0xd15b,	// (0x0002b9b0) list_single_graphic_heading_pane_ParamLimits

0xd15b,	// (0x0002b9b0) list_single_graphic_heading_pane

0xd15b,	// (0x0002b9b0) list_single_graphic_pane_ParamLimits

0xd15b,	// (0x0002b9b0) list_single_graphic_pane

0xd15b,	// (0x0002b9b0) list_single_heading_pane_ParamLimits

0xd15b,	// (0x0002b9b0) list_single_heading_pane

0xd1b6,	// (0x0002ba0b) list_single_large_graphic_pane_ParamLimits

0xd1b6,	// (0x0002ba0b) list_single_large_graphic_pane

0xd15b,	// (0x0002b9b0) list_single_number_heading_pane_ParamLimits

0xd15b,	// (0x0002b9b0) list_single_number_heading_pane

0xd15b,	// (0x0002b9b0) list_single_number_pane_ParamLimits

0xd15b,	// (0x0002b9b0) list_single_number_pane

0xd15b,	// (0x0002b9b0) list_single_pane_ParamLimits

0xd15b,	// (0x0002b9b0) list_single_pane

0x43be,	// (0x00022c13) list_highlight_pane_cp1

0xc827,	// (0x0002b07c) list_single_pane_g1_ParamLimits

0xc827,	// (0x0002b07c) list_single_pane_g1

0xc833,	// (0x0002b088) list_single_pane_g2_ParamLimits

0xc833,	// (0x0002b088) list_single_pane_g2

0x0001,

0xf60c,	// (0x0002de61) list_single_pane_g_ParamLimits

0xf60c,	// (0x0002de61) list_single_pane_g

0xd10a,	// (0x0002b95f) list_single_pane_t1_ParamLimits

0xd10a,	// (0x0002b95f) list_single_pane_t1

0xc827,	// (0x0002b07c) list_single_number_pane_g1_ParamLimits

0xc827,	// (0x0002b07c) list_single_number_pane_g1

0xc833,	// (0x0002b088) list_single_number_pane_g2_ParamLimits

0xc833,	// (0x0002b088) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0002de61) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0002de61) list_single_number_pane_g

0xd0b4,	// (0x0002b909) list_single_number_pane_t1_ParamLimits

0xd0b4,	// (0x0002b909) list_single_number_pane_t1

0xd0ca,	// (0x0002b91f) list_single_number_pane_t2_ParamLimits

0xd0ca,	// (0x0002b91f) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0002e1ed) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0002e1ed) list_single_number_pane_t

0xc81b,	// (0x0002b070) list_single_graphic_pane_g1_ParamLimits

0xc81b,	// (0x0002b070) list_single_graphic_pane_g1

0xc827,	// (0x0002b07c) list_single_graphic_pane_g2_ParamLimits

0xc827,	// (0x0002b07c) list_single_graphic_pane_g2

0xc833,	// (0x0002b088) list_single_graphic_pane_g3_ParamLimits

0xc833,	// (0x0002b088) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002de5a) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002de5a) list_single_graphic_pane_g

0xc83f,	// (0x0002b094) list_single_graphic_pane_t1_ParamLimits

0xc83f,	// (0x0002b094) list_single_graphic_pane_t1

0xc827,	// (0x0002b07c) list_single_heading_pane_g1_ParamLimits

0xc827,	// (0x0002b07c) list_single_heading_pane_g1

0xc833,	// (0x0002b088) list_single_heading_pane_g2_ParamLimits

0xc833,	// (0x0002b088) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002de61) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002de61) list_single_heading_pane_g

0xc855,	// (0x0002b0aa) list_single_heading_pane_t1_ParamLimits

0xc855,	// (0x0002b0aa) list_single_heading_pane_t1

0xc86b,	// (0x0002b0c0) list_single_heading_pane_t2_ParamLimits

0xc86b,	// (0x0002b0c0) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002de66) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002de66) list_single_heading_pane_t

0xc827,	// (0x0002b07c) list_single_number_heading_pane_g1_ParamLimits

0xc827,	// (0x0002b07c) list_single_number_heading_pane_g1

0xc833,	// (0x0002b088) list_single_number_heading_pane_g2_ParamLimits

0xc833,	// (0x0002b088) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0002de61) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0002de61) list_single_number_heading_pane_g

0xc855,	// (0x0002b0aa) list_single_number_heading_pane_t1_ParamLimits

0xc855,	// (0x0002b0aa) list_single_number_heading_pane_t1

0xc87d,	// (0x0002b0d2) list_single_number_heading_pane_t2_ParamLimits

0xc87d,	// (0x0002b0d2) list_single_number_heading_pane_t2

0xc88f,	// (0x0002b0e4) list_single_number_heading_pane_t3_ParamLimits

0xc88f,	// (0x0002b0e4) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002de6b) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002de6b) list_single_number_heading_pane_t

0xc8a1,	// (0x0002b0f6) list_single_graphic_heading_pane_g1_ParamLimits

0xc8a1,	// (0x0002b0f6) list_single_graphic_heading_pane_g1

0xc8ad,	// (0x0002b102) list_single_graphic_heading_pane_g4_ParamLimits

0xc8ad,	// (0x0002b102) list_single_graphic_heading_pane_g4

0xc833,	// (0x0002b088) list_single_graphic_heading_pane_g5_ParamLimits

0xc833,	// (0x0002b088) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0002de72) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002de72) list_single_graphic_heading_pane_g

0xc855,	// (0x0002b0aa) list_single_graphic_heading_pane_t1_ParamLimits

0xc855,	// (0x0002b0aa) list_single_graphic_heading_pane_t1

0xc8be,	// (0x0002b113) list_single_graphic_heading_pane_t2_ParamLimits

0xc8be,	// (0x0002b113) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002de79) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002de79) list_single_graphic_heading_pane_t

0xc8d0,	// (0x0002b125) list_single_large_graphic_pane_g1_ParamLimits

0xc8d0,	// (0x0002b125) list_single_large_graphic_pane_g1

0xc8dc,	// (0x0002b131) list_single_large_graphic_pane_g2_ParamLimits

0xc8dc,	// (0x0002b131) list_single_large_graphic_pane_g2

0xc8e8,	// (0x0002b13d) list_single_large_graphic_pane_g3_ParamLimits

0xc8e8,	// (0x0002b13d) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002de7e) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002de7e) list_single_large_graphic_pane_g

0x5ede,	// (0x00024733) wait_border_pane_g2_copy1

0xc8f4,	// (0x0002b149) list_single_large_graphic_pane_g4_cp2

0xc8fc,	// (0x0002b151) list_single_large_graphic_pane_t1_ParamLimits

0xc8fc,	// (0x0002b151) list_single_large_graphic_pane_t1

0xc912,	// (0x0002b167) list_double_pane_g1_ParamLimits

0xc912,	// (0x0002b167) list_double_pane_g1

0xc91e,	// (0x0002b173) list_double_pane_g2_ParamLimits

0xc91e,	// (0x0002b173) list_double_pane_g2

0x0001,

0xf630,	// (0x0002de85) list_double_pane_g_ParamLimits

0xf630,	// (0x0002de85) list_double_pane_g

0xc92a,	// (0x0002b17f) list_double_pane_t1_ParamLimits

0xc92a,	// (0x0002b17f) list_double_pane_t1

0xc940,	// (0x0002b195) list_double_pane_t2_ParamLimits

0xc940,	// (0x0002b195) list_double_pane_t2

0x0001,

0xf635,	// (0x0002de8a) list_double_pane_t_ParamLimits

0xf635,	// (0x0002de8a) list_double_pane_t

0xc952,	// (0x0002b1a7) list_double2_pane_g1_ParamLimits

0xc952,	// (0x0002b1a7) list_double2_pane_g1

0xc963,	// (0x0002b1b8) list_double2_pane_g2_ParamLimits

0xc963,	// (0x0002b1b8) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002de8f) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002de8f) list_double2_pane_g

0xc96f,	// (0x0002b1c4) list_double2_pane_t1_ParamLimits

0xc96f,	// (0x0002b1c4) list_double2_pane_t1

0xc985,	// (0x0002b1da) list_double2_pane_t2_ParamLimits

0xc985,	// (0x0002b1da) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0002de94) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0002de94) list_double2_pane_t

0xc912,	// (0x0002b167) list_double_number_pane_g1_ParamLimits

0xc912,	// (0x0002b167) list_double_number_pane_g1

0xc91e,	// (0x0002b173) list_double_number_pane_g2_ParamLimits

0xc91e,	// (0x0002b173) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0002de85) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0002de85) list_double_number_pane_g

0xc997,	// (0x0002b1ec) list_double_number_pane_t1_ParamLimits

0xc997,	// (0x0002b1ec) list_double_number_pane_t1

0xc9a9,	// (0x0002b1fe) list_double_number_pane_t2_ParamLimits

0xc9a9,	// (0x0002b1fe) list_double_number_pane_t2

0xc9bf,	// (0x0002b214) list_double_number_pane_t3_ParamLimits

0xc9bf,	// (0x0002b214) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002de99) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002de99) list_double_number_pane_t

0xc9d1,	// (0x0002b226) list_double_graphic_pane_g1_ParamLimits

0xc9d1,	// (0x0002b226) list_double_graphic_pane_g1

0xc9dd,	// (0x0002b232) list_double_graphic_pane_g2_ParamLimits

0xc9dd,	// (0x0002b232) list_double_graphic_pane_g2

0xc9ec,	// (0x0002b241) list_double_graphic_pane_g3_ParamLimits

0xc9ec,	// (0x0002b241) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0002dea0) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0002dea0) list_double_graphic_pane_g

0xca04,	// (0x0002b259) list_double_graphic_pane_t1_ParamLimits

0xca04,	// (0x0002b259) list_double_graphic_pane_t1

0xca1a,	// (0x0002b26f) list_double_graphic_pane_t2_ParamLimits

0xca1a,	// (0x0002b26f) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002dea9) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002dea9) list_double_graphic_pane_t

0xca2c,	// (0x0002b281) list_double2_graphic_pane_g1_ParamLimits

0xca2c,	// (0x0002b281) list_double2_graphic_pane_g1

0xca38,	// (0x0002b28d) list_double2_graphic_pane_g2_ParamLimits

0xca38,	// (0x0002b28d) list_double2_graphic_pane_g2

0xca44,	// (0x0002b299) list_double2_graphic_pane_g3_ParamLimits

0xca44,	// (0x0002b299) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002deae) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002deae) list_double2_graphic_pane_g

0xca50,	// (0x0002b2a5) list_double2_graphic_pane_t1_ParamLimits

0xca50,	// (0x0002b2a5) list_double2_graphic_pane_t1

0xca66,	// (0x0002b2bb) list_double2_graphic_pane_t2_ParamLimits

0xca66,	// (0x0002b2bb) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0002deb5) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0002deb5) list_double2_graphic_pane_t

0xca78,	// (0x0002b2cd) list_double_large_graphic_pane_g1_ParamLimits

0xca78,	// (0x0002b2cd) list_double_large_graphic_pane_g1

0xcaa1,	// (0x0002b2f6) list_double_large_graphic_pane_g2_ParamLimits

0xcaa1,	// (0x0002b2f6) list_double_large_graphic_pane_g2

0xc91e,	// (0x0002b173) list_double_large_graphic_pane_g3_ParamLimits

0xc91e,	// (0x0002b173) list_double_large_graphic_pane_g3

0xcab2,	// (0x0002b307) list_double_large_graphic_pane_g4_ParamLimits

0xcab2,	// (0x0002b307) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002deba) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002deba) list_double_large_graphic_pane_g

0xcad7,	// (0x0002b32c) list_double_large_graphic_pane_t1_ParamLimits

0xcad7,	// (0x0002b32c) list_double_large_graphic_pane_t1

0xcaf0,	// (0x0002b345) list_double_large_graphic_pane_t2_ParamLimits

0xcaf0,	// (0x0002b345) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0002dec5) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0002dec5) list_double_large_graphic_pane_t

0xcb02,	// (0x0002b357) list_double2_large_graphic_pane_g1_ParamLimits

0xcb02,	// (0x0002b357) list_double2_large_graphic_pane_g1

0xcb0e,	// (0x0002b363) list_double2_large_graphic_pane_g2_ParamLimits

0xcb0e,	// (0x0002b363) list_double2_large_graphic_pane_g2

0xca44,	// (0x0002b299) list_double2_large_graphic_pane_g3_ParamLimits

0xca44,	// (0x0002b299) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002deca) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002deca) list_double2_large_graphic_pane_g

0xcb1f,	// (0x0002b374) list_double2_large_graphic_pane_t1_ParamLimits

0xcb1f,	// (0x0002b374) list_double2_large_graphic_pane_t1

0xcb35,	// (0x0002b38a) list_double2_large_graphic_pane_t2_ParamLimits

0xcb35,	// (0x0002b38a) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0002ded1) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0002ded1) list_double2_large_graphic_pane_t

0xcb47,	// (0x0002b39c) list_double_heading_pane_g1_ParamLimits

0xcb47,	// (0x0002b39c) list_double_heading_pane_g1

0xcb58,	// (0x0002b3ad) list_double_heading_pane_g2_ParamLimits

0xcb58,	// (0x0002b3ad) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002ded6) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002ded6) list_double_heading_pane_g

0xcb64,	// (0x0002b3b9) list_double_heading_pane_t1_ParamLimits

0xcb64,	// (0x0002b3b9) list_double_heading_pane_t1

0xcb7a,	// (0x0002b3cf) list_double_heading_pane_t2_ParamLimits

0xcb7a,	// (0x0002b3cf) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002dedb) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002dedb) list_double_heading_pane_t

0xca2c,	// (0x0002b281) list_double_graphic_heading_pane_g1_ParamLimits

0xca2c,	// (0x0002b281) list_double_graphic_heading_pane_g1

0xcb47,	// (0x0002b39c) list_double_graphic_heading_pane_g2_ParamLimits

0xcb47,	// (0x0002b39c) list_double_graphic_heading_pane_g2

0xcb58,	// (0x0002b3ad) list_double_graphic_heading_pane_g3_ParamLimits

0xcb58,	// (0x0002b3ad) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0002dee0) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0002dee0) list_double_graphic_heading_pane_g

0xcb8c,	// (0x0002b3e1) list_double_graphic_heading_pane_t1_ParamLimits

0xcb8c,	// (0x0002b3e1) list_double_graphic_heading_pane_t1

0xca66,	// (0x0002b2bb) list_double_graphic_heading_pane_t2_ParamLimits

0xca66,	// (0x0002b2bb) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002dee7) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002dee7) list_double_graphic_heading_pane_t

0xcaa1,	// (0x0002b2f6) list_double_time_pane_g1_ParamLimits

0xcaa1,	// (0x0002b2f6) list_double_time_pane_g1

0xc91e,	// (0x0002b173) list_double_time_pane_g2_ParamLimits

0xc91e,	// (0x0002b173) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0002deec) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0002deec) list_double_time_pane_g

0xcba2,	// (0x0002b3f7) list_double_time_pane_t1_ParamLimits

0xcba2,	// (0x0002b3f7) list_double_time_pane_t1

0xcbb8,	// (0x0002b40d) list_double_time_pane_t2_ParamLimits

0xcbb8,	// (0x0002b40d) list_double_time_pane_t2

0xcbca,	// (0x0002b41f) list_double_time_pane_t3_ParamLimits

0xcbca,	// (0x0002b41f) list_double_time_pane_t3

0xcbdc,	// (0x0002b431) list_double_time_pane_t4_ParamLimits

0xcbdc,	// (0x0002b431) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0002def1) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0002def1) list_double_time_pane_t

0xca38,	// (0x0002b28d) list_setting_pane_g1_ParamLimits

0xca38,	// (0x0002b28d) list_setting_pane_g1

0xca44,	// (0x0002b299) list_setting_pane_g2_ParamLimits

0xca44,	// (0x0002b299) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0002defa) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0002defa) list_setting_pane_g

0xcbee,	// (0x0002b443) list_setting_pane_t1_ParamLimits

0xcbee,	// (0x0002b443) list_setting_pane_t1

0xcc08,	// (0x0002b45d) list_setting_pane_t2_ParamLimits

0xcc08,	// (0x0002b45d) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0002deff) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0002deff) list_setting_pane_t

0xcc47,	// (0x0002b49c) set_value_pane_cp_ParamLimits

0xcc47,	// (0x0002b49c) set_value_pane_cp

0xcc53,	// (0x0002b4a8) list_setting_number_pane_g1_ParamLimits

0xcc53,	// (0x0002b4a8) list_setting_number_pane_g1

0xcc5f,	// (0x0002b4b4) list_setting_number_pane_g2_ParamLimits

0xcc5f,	// (0x0002b4b4) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0002df06) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0002df06) list_setting_number_pane_g

0xcc6b,	// (0x0002b4c0) list_setting_number_pane_t1_ParamLimits

0xcc6b,	// (0x0002b4c0) list_setting_number_pane_t1

0xcc84,	// (0x0002b4d9) list_setting_number_pane_t2_ParamLimits

0xcc84,	// (0x0002b4d9) list_setting_number_pane_t2

0xcc9e,	// (0x0002b4f3) list_setting_number_pane_t3_ParamLimits

0xcc9e,	// (0x0002b4f3) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x0002df0b) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x0002df0b) list_setting_number_pane_t

0xcc47,	// (0x0002b49c) set_value_pane_ParamLimits

0xcc47,	// (0x0002b49c) set_value_pane

0x49c2,	// (0x00023217) bg_set_opt_pane_ParamLimits

0x49c2,	// (0x00023217) bg_set_opt_pane

0xcce1,	// (0x0002b536) set_value_pane_t1

0x49e3,	// (0x00023238) slider_set_pane_cp3

0x49ec,	// (0x00023241) volume_small_pane_cp

0x49f5,	// (0x0002324a) list_form_gen_pane

0x49fe,	// (0x00023253) scroll_pane_cp8

0xccf7,	// (0x0002b54c) form_field_data_pane_ParamLimits

0xccf7,	// (0x0002b54c) form_field_data_pane

0xcd17,	// (0x0002b56c) form_field_data_wide_pane_ParamLimits

0xcd17,	// (0x0002b56c) form_field_data_wide_pane

0xcd38,	// (0x0002b58d) form_field_popup_pane_ParamLimits

0xcd38,	// (0x0002b58d) form_field_popup_pane

0xcd58,	// (0x0002b5ad) form_field_popup_wide_pane_ParamLimits

0xcd58,	// (0x0002b5ad) form_field_popup_wide_pane

0xcd75,	// (0x0002b5ca) form_field_slider_pane_ParamLimits

0xcd75,	// (0x0002b5ca) form_field_slider_pane

0xcd88,	// (0x0002b5dd) form_field_slider_wide_pane_ParamLimits

0xcd88,	// (0x0002b5dd) form_field_slider_wide_pane

0x4a0f,	// (0x00023264) data_form_pane

0xcda5,	// (0x0002b5fa) form_field_data_pane_t1

0x4a1b,	// (0x00023270) input_focus_pane

0x4a29,	// (0x0002327e) data_form_wide_pane

0xcdc9,	// (0x0002b61e) form_field_data_wide_pane_t1

0x4796,	// (0x00022feb) input_focus_pane_cp6

0xcdeb,	// (0x0002b640) form_field_popup_pane_t1

0x4a1b,	// (0x00023270) input_focus_pane_cp7

0x4a55,	// (0x000232aa) list_form_pane

0xce0b,	// (0x0002b660) form_field_popup_wide_pane_t1

0x4a1b,	// (0x00023270) input_focus_pane_cp8

0x4a61,	// (0x000232b6) list_form_wide_pane

0xce28,	// (0x0002b67d) form_field_slider_pane_t1_ParamLimits

0xce28,	// (0x0002b67d) form_field_slider_pane_t1

0xce3e,	// (0x0002b693) form_field_slider_pane_t2_ParamLimits

0xce3e,	// (0x0002b693) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x0002df1b) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x0002df1b) form_field_slider_pane_t

0x440c,	// (0x00022c61) input_focus_pane_cp9_ParamLimits

0x440c,	// (0x00022c61) input_focus_pane_cp9

0xce53,	// (0x0002b6a8) slider_cont_pane_ParamLimits

0xce53,	// (0x0002b6a8) slider_cont_pane

0x4a70,	// (0x000232c5) form_field_slider_wide_pane_t1_ParamLimits

0x4a70,	// (0x000232c5) form_field_slider_wide_pane_t1

0xce67,	// (0x0002b6bc) form_field_slider_wide_pane_t2_ParamLimits

0xce67,	// (0x0002b6bc) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x0002df20) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x0002df20) form_field_slider_wide_pane_t

0x440c,	// (0x00022c61) input_focus_pane_cp10_ParamLimits

0x440c,	// (0x00022c61) input_focus_pane_cp10

0xce79,	// (0x0002b6ce) slider_cont_pane_cp1_ParamLimits

0xce79,	// (0x0002b6ce) slider_cont_pane_cp1

0xce8d,	// (0x0002b6e2) slider_form_pane_cp

0x4a82,	// (0x000232d7) input_focus_pane_g1

0x4a8a,	// (0x000232df) input_focus_pane_g2

0x4a92,	// (0x000232e7) input_focus_pane_g3

0x4a9a,	// (0x000232ef) input_focus_pane_g4

0x4aa2,	// (0x000232f7) input_focus_pane_g5

0x4aaa,	// (0x000232ff) input_focus_pane_g6

0x4ab2,	// (0x00023307) input_focus_pane_g7

0x4aba,	// (0x0002330f) input_focus_pane_g8

0x4ac2,	// (0x00023317) input_focus_pane_g9

0x43b4,	// (0x00022c09) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0002df25) input_focus_pane_g

0x5ee7,	// (0x0002473c) wait_border_pane_g3_copy1

0xce95,	// (0x0002b6ea) data_form_pane_t1

0x43b4,	// (0x00022c09) wait_anim_pane_g1_copy1

0xd0dc,	// (0x0002b931) data_form_wide_pane_t1

0xceb0,	// (0x0002b705) list_form_graphic_pane_cp_ParamLimits

0xceb0,	// (0x0002b705) list_form_graphic_pane_cp

0x6b52,	// (0x000253a7) slider_form_pane_g1

0x6b5b,	// (0x000253b0) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0002e21d) slider_form_pane_g

0xcec9,	// (0x0002b71e) list_form_graphic_pane_ParamLimits

0xcec9,	// (0x0002b71e) list_form_graphic_pane

0xcee5,	// (0x0002b73a) list_form_graphic_pane_g1

0xceed,	// (0x0002b742) list_form_graphic_pane_t1_ParamLimits

0xceed,	// (0x0002b742) list_form_graphic_pane_t1

0x441a,	// (0x00022c6f) list_highlight_pane_cp5_ParamLimits

0x441a,	// (0x00022c6f) list_highlight_pane_cp5

0xcf02,	// (0x0002b757) find_pane_g1

0x4aca,	// (0x0002331f) input_find_pane

0xcf0b,	// (0x0002b760) input_find_pane_g1_ParamLimits

0xcf0b,	// (0x0002b760) input_find_pane_g1

0xcf17,	// (0x0002b76c) input_find_pane_t1_ParamLimits

0xcf17,	// (0x0002b76c) input_find_pane_t1

0xcf2c,	// (0x0002b781) input_find_pane_t2_ParamLimits

0xcf2c,	// (0x0002b781) input_find_pane_t2

0x0001,

0xf6e5,	// (0x0002df3a) input_find_pane_t_ParamLimits

0xf6e5,	// (0x0002df3a) input_find_pane_t

0x4ad3,	// (0x00023328) input_focus_pane_cp5_ParamLimits

0x4ad3,	// (0x00023328) input_focus_pane_cp5

0x91c7,	// (0x00027a1c) bg_popup_window_pane_cp2_ParamLimits

0x91c7,	// (0x00027a1c) bg_popup_window_pane_cp2

0x91d4,	// (0x00027a29) listscroll_menu_pane_ParamLimits

0x91d4,	// (0x00027a29) listscroll_menu_pane

0x91e0,	// (0x00027a35) popup_submenu_window_ParamLimits

0x91e0,	// (0x00027a35) popup_submenu_window

0x4ae1,	// (0x00023336) find_popup_pane_g1

0x4ae9,	// (0x0002333e) input_popup_find_pane_cp

0x4ad3,	// (0x00023328) input_focus_pane_cp4_ParamLimits

0x4ad3,	// (0x00023328) input_focus_pane_cp4

0x4af3,	// (0x00023348) input_popup_find_pane_t1_ParamLimits

0x4af3,	// (0x00023348) input_popup_find_pane_t1

0x43be,	// (0x00022c13) bg_popup_sub_pane_cp

0x4b21,	// (0x00023376) listscroll_popup_sub_pane

0x4b29,	// (0x0002337e) list_submenu_pane_ParamLimits

0x4b29,	// (0x0002337e) list_submenu_pane

0x4b3a,	// (0x0002338f) scroll_pane_cp4

0x4b42,	// (0x00023397) list_single_popup_submenu_pane_ParamLimits

0x4b42,	// (0x00023397) list_single_popup_submenu_pane

0x4b56,	// (0x000233ab) list_single_popup_submenu_pane_g1

0x4b5e,	// (0x000233b3) list_single_popup_submenu_pane_t1_ParamLimits

0x4b5e,	// (0x000233b3) list_single_popup_submenu_pane_t1

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp1_ParamLimits

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp1

0x9216,	// (0x00027a6b) tabs_2_active_pane_g1

0x921e,	// (0x00027a73) tabs_2_active_pane_t1

0x441a,	// (0x00022c6f) bg_passive_tab_pane_cp1_ParamLimits

0x441a,	// (0x00022c6f) bg_passive_tab_pane_cp1

0x9216,	// (0x00027a6b) tabs_2_passive_pane_g1

0x921e,	// (0x00027a73) tabs_2_passive_pane_t1

0x57f3,	// (0x00024048) bg_active_tab_pane_cp4

0x9230,	// (0x00027a85) tabs_2_long_active_pane_t1

0x9243,	// (0x00027a98) bg_passive_tab_pane_cp4

0xa2af,	// (0x00028b04) list_single_midp_graphic_pane_g4_ParamLimits

0x57f3,	// (0x00024048) bg_active_tab_pane_cp5

0x924f,	// (0x00027aa4) tabs_3_long_active_pane_t1

0x9243,	// (0x00027a98) bg_passive_tab_pane_cp5

0xa2af,	// (0x00028b04) list_single_midp_graphic_pane_g4

0x441a,	// (0x00022c6f) bg_popup_window_pane_cp13_ParamLimits

0x441a,	// (0x00022c6f) bg_popup_window_pane_cp13

0x4b88,	// (0x000233dd) listscroll_popup_fast_pane_ParamLimits

0x4b88,	// (0x000233dd) listscroll_popup_fast_pane

0x4b97,	// (0x000233ec) grid_popup_fast_pane_ParamLimits

0x4b97,	// (0x000233ec) grid_popup_fast_pane

0x4ba9,	// (0x000233fe) scroll_pane_cp9_ParamLimits

0x4ba9,	// (0x000233fe) scroll_pane_cp9

0x7de2,	// (0x00026637) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7de2,	// (0x00026637) list_single_graphic_hl_pane_t1_cp2

0x4bcd,	// (0x00023422) input_focus_pane_cp20_ParamLimits

0x4bcd,	// (0x00023422) input_focus_pane_cp20

0x4bdb,	// (0x00023430) query_popup_data_pane_t1_ParamLimits

0x4bdb,	// (0x00023430) query_popup_data_pane_t1

0x4bee,	// (0x00023443) query_popup_data_pane_t2_ParamLimits

0x4bee,	// (0x00023443) query_popup_data_pane_t2

0x4c34,	// (0x00023489) query_popup_data_pane_t3_ParamLimits

0x4c34,	// (0x00023489) query_popup_data_pane_t3

0x4c75,	// (0x000234ca) query_popup_data_pane_t4_ParamLimits

0x4c75,	// (0x000234ca) query_popup_data_pane_t4

0x4cb1,	// (0x00023506) query_popup_data_pane_t5_ParamLimits

0x4cb1,	// (0x00023506) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x0002df3f) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x0002df3f) query_popup_data_pane_t

0x4a82,	// (0x000232d7) bg_set_opt_pane_g1

0x4a8a,	// (0x000232df) bg_set_opt_pane_g2

0x4a92,	// (0x000232e7) bg_set_opt_pane_g3

0x4a9a,	// (0x000232ef) bg_set_opt_pane_g4

0x4aa2,	// (0x000232f7) bg_set_opt_pane_g5

0x4aaa,	// (0x000232ff) bg_set_opt_pane_g6

0x4ab2,	// (0x00023307) bg_set_opt_pane_g7

0x4aba,	// (0x0002330f) bg_set_opt_pane_g8

0x4ac2,	// (0x00023317) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x0002df4a) bg_set_opt_pane_g

0x9624,	// (0x00027e79) control_top_pane_stacon_ParamLimits

0x9624,	// (0x00027e79) control_top_pane_stacon

0x9677,	// (0x00027ecc) signal_pane_stacon_ParamLimits

0x9677,	// (0x00027ecc) signal_pane_stacon

0x5126,	// (0x0002397b) stacon_top_pane_g1_ParamLimits

0x5126,	// (0x0002397b) stacon_top_pane_g1

0x969c,	// (0x00027ef1) title_pane_stacon_ParamLimits

0x969c,	// (0x00027ef1) title_pane_stacon

0x96c6,	// (0x00027f1b) uni_indicator_pane_stacon_ParamLimits

0x96c6,	// (0x00027f1b) uni_indicator_pane_stacon

0x96db,	// (0x00027f30) battery_pane_stacon_ParamLimits

0x96db,	// (0x00027f30) battery_pane_stacon

0x971f,	// (0x00027f74) control_bottom_pane_stacon_ParamLimits

0x971f,	// (0x00027f74) control_bottom_pane_stacon

0x9742,	// (0x00027f97) navi_pane_stacon_ParamLimits

0x9742,	// (0x00027f97) navi_pane_stacon

0x5148,	// (0x0002399d) stacon_bottom_pane_g1_ParamLimits

0x5148,	// (0x0002399d) stacon_bottom_pane_g1

0x9261,	// (0x00027ab6) aid_levels_signal_lsc_ParamLimits

0x9261,	// (0x00027ab6) aid_levels_signal_lsc

0x9278,	// (0x00027acd) signal_pane_stacon_g1_ParamLimits

0x9278,	// (0x00027acd) signal_pane_stacon_g1

0x928c,	// (0x00027ae1) signal_pane_stacon_g2_ParamLimits

0x928c,	// (0x00027ae1) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x0002df5d) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x0002df5d) signal_pane_stacon_g

0x92c1,	// (0x00027b16) title_pane_stacon_t1_ParamLimits

0x92c1,	// (0x00027b16) title_pane_stacon_t1

0x4d09,	// (0x0002355e) uni_indicator_pane_stacon_g1

0x4d13,	// (0x00023568) uni_indicator_pane_stacon_g2

0x4cf5,	// (0x0002354a) uni_indicator_pane_stacon_g3

0x4cff,	// (0x00023554) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x0002df69) uni_indicator_pane_stacon_g

0x92e6,	// (0x00027b3b) control_top_pane_stacon_g1

0x92ee,	// (0x00027b43) control_top_pane_stacon_t1_ParamLimits

0x92ee,	// (0x00027b43) control_top_pane_stacon_t1

0x9325,	// (0x00027b7a) aid_levels_battery_lsc_ParamLimits

0x9325,	// (0x00027b7a) aid_levels_battery_lsc

0x933d,	// (0x00027b92) battery_pane_stacon_g1_ParamLimits

0x933d,	// (0x00027b92) battery_pane_stacon_g1

0x9350,	// (0x00027ba5) battery_pane_stacon_g2_ParamLimits

0x9350,	// (0x00027ba5) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x0002df72) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x0002df72) battery_pane_stacon_g

0x938e,	// (0x00027be3) navi_icon_pane_stacon

0x93a2,	// (0x00027bf7) navi_navi_pane_stacon

0x938e,	// (0x00027be3) navi_text_pane_stacon

0x92e6,	// (0x00027b3b) control_bottom_pane_stacon_g1

0x93b6,	// (0x00027c0b) control_bottom_pane_stacon_t1_ParamLimits

0x93b6,	// (0x00027c0b) control_bottom_pane_stacon_t1

0x93ed,	// (0x00027c42) grid_app_pane_ParamLimits

0x93ed,	// (0x00027c42) grid_app_pane

0x9411,	// (0x00027c66) scroll_pane_cp15_ParamLimits

0x9411,	// (0x00027c66) scroll_pane_cp15

0x9426,	// (0x00027c7b) cell_app_pane_ParamLimits

0x9426,	// (0x00027c7b) cell_app_pane

0x944a,	// (0x00027c9f) cell_app_pane_g1_ParamLimits

0x944a,	// (0x00027c9f) cell_app_pane_g1

0x4d37,	// (0x0002358c) cell_app_pane_g2_ParamLimits

0x4d37,	// (0x0002358c) cell_app_pane_g2

0x0001,

0xf722,	// (0x0002df77) cell_app_pane_g_ParamLimits

0xf722,	// (0x0002df77) cell_app_pane_g

0x4d43,	// (0x00023598) cell_app_pane_t1_ParamLimits

0x4d43,	// (0x00023598) cell_app_pane_t1

0x4d55,	// (0x000235aa) grid_highlight_pane_ParamLimits

0x4d55,	// (0x000235aa) grid_highlight_pane

0x4a82,	// (0x000232d7) cell_highlight_pane_g1

0x4a8a,	// (0x000232df) cell_highlight_pane_g2

0x4a92,	// (0x000232e7) cell_highlight_pane_g3

0x4a9a,	// (0x000232ef) cell_highlight_pane_g4

0x4aa2,	// (0x000232f7) cell_highlight_pane_g5

0x4aaa,	// (0x000232ff) cell_highlight_pane_g6

0x4ab2,	// (0x00023307) cell_highlight_pane_g7

0x4aba,	// (0x0002330f) cell_highlight_pane_g8

0x4ac2,	// (0x00023317) cell_highlight_pane_g9

0x43b4,	// (0x00022c09) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0002df25) cell_highlight_pane_g

0x4d66,	// (0x000235bb) bg_scroll_pane

0x9481,	// (0x00027cd6) scroll_handle_pane

0x4dad,	// (0x00023602) scroll_bg_pane_g1

0x4dc2,	// (0x00023617) scroll_bg_pane_g2

0x4dda,	// (0x0002362f) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x0002df7c) scroll_bg_pane_g

0x4def,	// (0x00023644) scroll_handle_focus_pane_ParamLimits

0x4def,	// (0x00023644) scroll_handle_focus_pane

0x4dad,	// (0x00023602) scroll_handle_pane_g1

0x4dfc,	// (0x00023651) scroll_handle_pane_g2

0x4dda,	// (0x0002362f) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x0002df83) scroll_handle_pane_g

0x4ad3,	// (0x00023328) bg_popup_sub_pane_cp21_ParamLimits

0x4ad3,	// (0x00023328) bg_popup_sub_pane_cp21

0x4e10,	// (0x00023665) popup_fep_japan_predictive_window_t1_ParamLimits

0x4e10,	// (0x00023665) popup_fep_japan_predictive_window_t1

0x4e2a,	// (0x0002367f) popup_fep_japan_predictive_window_t2_ParamLimits

0x4e2a,	// (0x0002367f) popup_fep_japan_predictive_window_t2

0x4e5d,	// (0x000236b2) popup_fep_japan_predictive_window_t3_ParamLimits

0x4e5d,	// (0x000236b2) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x0002df8a) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x0002df8a) popup_fep_japan_predictive_window_t

0x43be,	// (0x00022c13) bg_popup_sub_pane_cp23

0x4e94,	// (0x000236e9) listscroll_japin_cand_pane

0x4e9c,	// (0x000236f1) popup_fep_japan_candidate_window_t1

0x4eaa,	// (0x000236ff) candidate_pane_ParamLimits

0x4eaa,	// (0x000236ff) candidate_pane

0x4ebc,	// (0x00023711) scroll_pane_cp30

0x4ec4,	// (0x00023719) list_single_popup_jap_candidate_pane_ParamLimits

0x4ec4,	// (0x00023719) list_single_popup_jap_candidate_pane

0x43be,	// (0x00022c13) list_highlight_pane_cp30

0x4ed9,	// (0x0002372e) list_single_popup_jap_candidate_pane_t1

0x4ee8,	// (0x0002373d) level_1_signal

0x4ef5,	// (0x0002374a) level_2_signal

0x4f02,	// (0x00023757) level_3_signal

0x4f0f,	// (0x00023764) level_4_signal

0x4f1c,	// (0x00023771) level_5_signal

0x4f29,	// (0x0002377e) level_6_signal

0x4f36,	// (0x0002378b) level_7_signal

0x4ee8,	// (0x0002373d) level_1_battery

0x4ef5,	// (0x0002374a) level_2_battery

0x4f02,	// (0x00023757) level_3_battery

0x4f0f,	// (0x00023764) level_4_battery

0x4f1c,	// (0x00023771) level_5_battery

0x4f29,	// (0x0002377e) level_6_battery

0x4f36,	// (0x0002378b) level_7_battery

0x4f5b,	// (0x000237b0) list_menu_pane_ParamLimits

0x4f5b,	// (0x000237b0) list_menu_pane

0x4f6c,	// (0x000237c1) scroll_pane_cp25_ParamLimits

0x4f6c,	// (0x000237c1) scroll_pane_cp25

0x4f85,	// (0x000237da) list_double2_graphic_pane_cp2_ParamLimits

0x4f85,	// (0x000237da) list_double2_graphic_pane_cp2

0x4f85,	// (0x000237da) list_double2_large_graphic_pane_cp2_ParamLimits

0x4f85,	// (0x000237da) list_double2_large_graphic_pane_cp2

0x4f85,	// (0x000237da) list_double2_pane_cp2_ParamLimits

0x4f85,	// (0x000237da) list_double2_pane_cp2

0x4f85,	// (0x000237da) list_double_graphic_pane_cp2_ParamLimits

0x4f85,	// (0x000237da) list_double_graphic_pane_cp2

0x4f85,	// (0x000237da) list_double_large_graphic_pane_cp2_ParamLimits

0x4f85,	// (0x000237da) list_double_large_graphic_pane_cp2

0x4f85,	// (0x000237da) list_double_number_pane_cp2_ParamLimits

0x4f85,	// (0x000237da) list_double_number_pane_cp2

0x4f85,	// (0x000237da) list_double_pane_cp2_ParamLimits

0x4f85,	// (0x000237da) list_double_pane_cp2

0x94dd,	// (0x00027d32) list_single_2graphic_pane_cp2_ParamLimits

0x94dd,	// (0x00027d32) list_single_2graphic_pane_cp2

0x94dd,	// (0x00027d32) list_single_graphic_heading_pane_cp2_ParamLimits

0x94dd,	// (0x00027d32) list_single_graphic_heading_pane_cp2

0x94dd,	// (0x00027d32) list_single_graphic_pane_cp2_ParamLimits

0x94dd,	// (0x00027d32) list_single_graphic_pane_cp2

0x94dd,	// (0x00027d32) list_single_heading_pane_cp2_ParamLimits

0x94dd,	// (0x00027d32) list_single_heading_pane_cp2

0x4f95,	// (0x000237ea) list_single_large_graphic_pane_cp2_ParamLimits

0x4f95,	// (0x000237ea) list_single_large_graphic_pane_cp2

0x94dd,	// (0x00027d32) list_single_number_heading_pane_cp2_ParamLimits

0x94dd,	// (0x00027d32) list_single_number_heading_pane_cp2

0x94dd,	// (0x00027d32) list_single_number_pane_cp2_ParamLimits

0x94dd,	// (0x00027d32) list_single_number_pane_cp2

0x94dd,	// (0x00027d32) list_single_pane_cp2_ParamLimits

0x94dd,	// (0x00027d32) list_single_pane_cp2

0x4faf,	// (0x00023804) bg_popup_sub_pane_cp22

0x959c,	// (0x00027df1) popup_side_volume_key_window_g1

0x95c6,	// (0x00027e1b) popup_side_volume_key_window_t1

0x95e2,	// (0x00027e37) volume_small_pane_cp1

0x440c,	// (0x00022c61) bg_popup_sub_pane_cp24_ParamLimits

0x440c,	// (0x00022c61) bg_popup_sub_pane_cp24

0x4fc5,	// (0x0002381a) fep_china_uni_candidate_pane_ParamLimits

0x4fc5,	// (0x0002381a) fep_china_uni_candidate_pane

0x4fd9,	// (0x0002382e) fep_china_uni_entry_pane

0x4fe9,	// (0x0002383e) popup_fep_china_uni_window_g1

0x5005,	// (0x0002385a) fep_china_uni_entry_pane_g1

0x500d,	// (0x00023862) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x0002dfb7) fep_china_uni_entry_pane_g

0x5015,	// (0x0002386a) fep_entry_item_pane

0x501f,	// (0x00023874) fep_candidate_item_pane

0x5027,	// (0x0002387c) fep_china_uni_candidate_pane_g1

0x502f,	// (0x00023884) fep_china_uni_candidate_pane_g2

0x5037,	// (0x0002388c) fep_china_uni_candidate_pane_g3

0x503f,	// (0x00023894) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x0002dfbc) fep_china_uni_candidate_pane_g

0x43b4,	// (0x00022c09) fep_entry_item_pane_g1

0x5047,	// (0x0002389c) fep_entry_item_pane_t1_ParamLimits

0x5047,	// (0x0002389c) fep_entry_item_pane_t1

0x505d,	// (0x000238b2) fep_candidate_item_pane_t1_ParamLimits

0x505d,	// (0x000238b2) fep_candidate_item_pane_t1

0x5072,	// (0x000238c7) fep_candidate_item_pane_t2_ParamLimits

0x5072,	// (0x000238c7) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x0002dfc5) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x0002dfc5) fep_candidate_item_pane_t

0x441a,	// (0x00022c6f) list_highlight_pane_cp31_ParamLimits

0x441a,	// (0x00022c6f) list_highlight_pane_cp31

0x5084,	// (0x000238d9) level_1_signal_lsc

0x508d,	// (0x000238e2) level_2_signal_lsc

0x5096,	// (0x000238eb) level_3_signal_lsc

0x509f,	// (0x000238f4) level_4_signal_lsc

0x50a8,	// (0x000238fd) level_5_signal_lsc

0x50b1,	// (0x00023906) level_6_signal_lsc

0x50ba,	// (0x0002390f) level_7_signal_lsc

0x50ba,	// (0x0002390f) level_1_battery_lsc

0x50c3,	// (0x00023918) level_2_battery_lsc

0x50cc,	// (0x00023921) level_3_battery_lsc

0x50d5,	// (0x0002392a) level_4_battery_lsc

0x50de,	// (0x00023933) level_5_battery_lsc

0x50e7,	// (0x0002393c) level_6_battery_lsc

0x5084,	// (0x000238d9) level_7_battery_lsc

0x50f0,	// (0x00023945) scroll_handle_focus_pane_g1

0x50f9,	// (0x0002394e) scroll_handle_focus_pane_g2

0x5102,	// (0x00023957) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x0002dfca) scroll_handle_focus_pane_g

0xcf41,	// (0x0002b796) list_single_2graphic_pane_g1_ParamLimits

0xcf41,	// (0x0002b796) list_single_2graphic_pane_g1

0xc8ad,	// (0x0002b102) list_single_2graphic_pane_g2_ParamLimits

0xc8ad,	// (0x0002b102) list_single_2graphic_pane_g2

0xc833,	// (0x0002b088) list_single_2graphic_pane_g3_ParamLimits

0xc833,	// (0x0002b088) list_single_2graphic_pane_g3

0xcf4d,	// (0x0002b7a2) list_single_2graphic_pane_g4_ParamLimits

0xcf4d,	// (0x0002b7a2) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x0002dfd1) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x0002dfd1) list_single_2graphic_pane_g

0xcf59,	// (0x0002b7ae) list_single_2graphic_pane_t1_ParamLimits

0xcf59,	// (0x0002b7ae) list_single_2graphic_pane_t1

0xcf87,	// (0x0002b7dc) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xcf87,	// (0x0002b7dc) list_double2_graphic_large_graphic_pane_g1

0xcb0e,	// (0x0002b363) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcb0e,	// (0x0002b363) list_double2_graphic_large_graphic_pane_g2

0xca44,	// (0x0002b299) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xca44,	// (0x0002b299) list_double2_graphic_large_graphic_pane_g3

0xcf97,	// (0x0002b7ec) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xcf97,	// (0x0002b7ec) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x0002dfda) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x0002dfda) list_double2_graphic_large_graphic_pane_g

0xcfa3,	// (0x0002b7f8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xcfa3,	// (0x0002b7f8) list_double2_graphic_large_graphic_pane_t1

0xcfb9,	// (0x0002b80e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xcfb9,	// (0x0002b80e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x0002dfe3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x0002dfe3) list_double2_graphic_large_graphic_pane_t

0x51c3,	// (0x00023a18) popup_fast_swap_window_ParamLimits

0x51c3,	// (0x00023a18) popup_fast_swap_window

0x51df,	// (0x00023a34) popup_side_volume_key_window

0x51fb,	// (0x00023a50) stacon_top_pane

0x5205,	// (0x00023a5a) status_pane_ParamLimits

0x5205,	// (0x00023a5a) status_pane

0x51fb,	// (0x00023a50) status_small_pane

0x43be,	// (0x00022c13) control_pane

0x43be,	// (0x00022c13) stacon_bottom_pane

0x49fe,	// (0x00023253) scroll_pane_cp121

0x49f5,	// (0x0002324a) set_content_pane

0x95ea,	// (0x00027e3f) bg_active_tab_pane_g1_cp1

0x5114,	// (0x00023969) bg_active_tab_pane_g2_cp1

0x95f3,	// (0x00027e48) bg_active_tab_pane_g3_cp1

0x95ea,	// (0x00027e3f) bg_passive_tab_pane_g1_cp1

0x5114,	// (0x00023969) bg_passive_tab_pane_g2_cp1

0x95f3,	// (0x00027e48) bg_passive_tab_pane_g3_cp1

0x511d,	// (0x00023972) bg_active_tab_pane_g1_cp2

0x5114,	// (0x00023969) bg_active_tab_pane_g2_cp2

0x510b,	// (0x00023960) bg_active_tab_pane_g3_cp2

0x511d,	// (0x00023972) bg_passive_tab_pane_g1_cp2

0x5114,	// (0x00023969) bg_passive_tab_pane_g2_cp2

0x510b,	// (0x00023960) bg_passive_tab_pane_g3_cp2

0x95fc,	// (0x00027e51) bg_active_tab_pane_g1_cp3

0x5114,	// (0x00023969) bg_active_tab_pane_g2_cp3

0x9605,	// (0x00027e5a) bg_active_tab_pane_g3_cp3

0x95fc,	// (0x00027e51) bg_passive_tab_pane_g1_cp3

0x5114,	// (0x00023969) bg_passive_tab_pane_g2_cp3

0x9605,	// (0x00027e5a) bg_passive_tab_pane_g3_cp3

0x960e,	// (0x00027e63) bg_active_tab_pane_g1_cp4

0x5114,	// (0x00023969) bg_active_tab_pane_g2_cp4

0x9619,	// (0x00027e6e) bg_active_tab_pane_g3_cp4

0x960e,	// (0x00027e63) bg_passive_tab_pane_g1_cp4

0x5114,	// (0x00023969) bg_passive_tab_pane_g2_cp4

0x9619,	// (0x00027e6e) bg_passive_tab_pane_g3_cp4

0x516d,	// (0x000239c2) bg_active_tab_pane_g1_cp5

0x5114,	// (0x00023969) bg_active_tab_pane_g2_cp5

0x5164,	// (0x000239b9) bg_active_tab_pane_g3_cp5

0x516d,	// (0x000239c2) bg_passive_tab_pane_g1_cp5

0x5114,	// (0x00023969) bg_passive_tab_pane_g2_cp5

0x5164,	// (0x000239b9) bg_passive_tab_pane_g3_cp5

0x9765,	// (0x00027fba) list_set_graphic_pane_ParamLimits

0x9765,	// (0x00027fba) list_set_graphic_pane

0x43be,	// (0x00022c13) bg_set_opt_pane_cp4

0x9782,	// (0x00027fd7) list_set_graphic_pane_g1_ParamLimits

0x9782,	// (0x00027fd7) list_set_graphic_pane_g1

0x978e,	// (0x00027fe3) list_set_graphic_pane_g2_ParamLimits

0x978e,	// (0x00027fe3) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x0002dfe8) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x0002dfe8) list_set_graphic_pane_g

0x0009,

0xfaf7,	// (0x0002e34c) volume_small_pane_cp_g

0x5176,	// (0x000239cb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5176,	// (0x000239cb) list_double2_large_graphic_pane_g1_cp2

0x5182,	// (0x000239d7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5182,	// (0x000239d7) list_double2_large_graphic_pane_g2_cp2

0x5193,	// (0x000239e8) list_double2_large_graphic_pane_g3_cp2

0x519b,	// (0x000239f0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x519b,	// (0x000239f0) list_double2_large_graphic_pane_t1_cp2

0x51b1,	// (0x00023a06) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x51b1,	// (0x00023a06) list_double2_large_graphic_pane_t2_cp2

0x68fe,	// (0x00025153) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x68fe,	// (0x00025153) list_double_large_graphic_pane_g1_cp2

0x690f,	// (0x00025164) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x690f,	// (0x00025164) list_double_large_graphic_pane_g2_cp2

0x5321,	// (0x00023b76) list_double_large_graphic_pane_g3_cp2

0x6920,	// (0x00025175) list_double_large_graphic_pane_g4_cp

0x6928,	// (0x0002517d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6928,	// (0x0002517d) list_double_large_graphic_pane_t1_cp2

0x693f,	// (0x00025194) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x693f,	// (0x00025194) list_double_large_graphic_pane_t2_cp2

0x5213,	// (0x00023a68) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5213,	// (0x00023a68) list_double2_graphic_pane_g1_cp2

0x5221,	// (0x00023a76) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5221,	// (0x00023a76) list_double2_graphic_pane_g2_cp2

0x5232,	// (0x00023a87) list_double2_graphic_pane_g3_cp2

0x523c,	// (0x00023a91) list_double2_graphic_pane_t1_cp2_ParamLimits

0x523c,	// (0x00023a91) list_double2_graphic_pane_t1_cp2

0x5252,	// (0x00023aa7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5252,	// (0x00023aa7) list_double2_graphic_pane_t2_cp2

0x5264,	// (0x00023ab9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5264,	// (0x00023ab9) list_single_number_heading_pane_g1_cp2

0x5270,	// (0x00023ac5) list_single_number_heading_pane_g2_cp2

0x5278,	// (0x00023acd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5278,	// (0x00023acd) list_single_number_heading_pane_t1_cp2

0x528e,	// (0x00023ae3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x528e,	// (0x00023ae3) list_single_number_heading_pane_t2_cp2

0x52a0,	// (0x00023af5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x52a0,	// (0x00023af5) list_single_number_heading_pane_t3_cp2

0x5264,	// (0x00023ab9) list_single_heading_pane_g1_cp2_ParamLimits

0x5264,	// (0x00023ab9) list_single_heading_pane_g1_cp2

0x5270,	// (0x00023ac5) list_single_heading_pane_g2_cp2

0x5278,	// (0x00023acd) list_single_heading_pane_t1_cp2_ParamLimits

0x5278,	// (0x00023acd) list_single_heading_pane_t1_cp2

0x66dc,	// (0x00024f31) list_single_heading_pane_t2_cp2_ParamLimits

0x66dc,	// (0x00024f31) list_single_heading_pane_t2_cp2

0x6642,	// (0x00024e97) list_double_graphic_pane_g1_cp2_ParamLimits

0x6642,	// (0x00024e97) list_double_graphic_pane_g1_cp2

0x664e,	// (0x00024ea3) list_double_graphic_pane_g2_cp2_ParamLimits

0x664e,	// (0x00024ea3) list_double_graphic_pane_g2_cp2

0x665d,	// (0x00024eb2) list_double_graphic_pane_g3_cp2

0x6665,	// (0x00024eba) list_double_graphic_pane_t1_cp2_ParamLimits

0x6665,	// (0x00024eba) list_double_graphic_pane_t1_cp2

0x667b,	// (0x00024ed0) list_double_graphic_pane_t2_cp2_ParamLimits

0x667b,	// (0x00024ed0) list_double_graphic_pane_t2_cp2

0x5315,	// (0x00023b6a) list_double_number_pane_g1_cp2_ParamLimits

0x5315,	// (0x00023b6a) list_double_number_pane_g1_cp2

0x5321,	// (0x00023b76) list_double_number_pane_g2_cp2

0x6606,	// (0x00024e5b) list_double_number_pane_t1_cp2_ParamLimits

0x6606,	// (0x00024e5b) list_double_number_pane_t1_cp2

0x661a,	// (0x00024e6f) list_double_number_pane_t2_cp2_ParamLimits

0x661a,	// (0x00024e6f) list_double_number_pane_t2_cp2

0x6630,	// (0x00024e85) list_double_number_pane_t3_cp2_ParamLimits

0x6630,	// (0x00024e85) list_double_number_pane_t3_cp2

0x657d,	// (0x00024dd2) list_single_graphic_pane_g1_cp2_ParamLimits

0x657d,	// (0x00024dd2) list_single_graphic_pane_g1_cp2

0x5379,	// (0x00023bce) list_single_graphic_pane_g2_cp2_ParamLimits

0x5379,	// (0x00023bce) list_single_graphic_pane_g2_cp2

0x5385,	// (0x00023bda) list_single_graphic_pane_g3_cp2

0x6553,	// (0x00024da8) list_single_graphic_pane_t1_cp2_ParamLimits

0x6553,	// (0x00024da8) list_single_graphic_pane_t1_cp2

0x5379,	// (0x00023bce) list_single_number_pane_g1_cp2_ParamLimits

0x5379,	// (0x00023bce) list_single_number_pane_g1_cp2

0x5385,	// (0x00023bda) list_single_number_pane_g2_cp2

0x6553,	// (0x00024da8) list_single_number_pane_t1_cp2_ParamLimits

0x6553,	// (0x00024da8) list_single_number_pane_t1_cp2

0x6569,	// (0x00024dbe) list_single_number_pane_t2_cp2_ParamLimits

0x6569,	// (0x00024dbe) list_single_number_pane_t2_cp2

0x5182,	// (0x000239d7) list_double2_pane_g1_cp2_ParamLimits

0x5182,	// (0x000239d7) list_double2_pane_g1_cp2

0x5193,	// (0x000239e8) list_double2_pane_g2_cp2

0x52ed,	// (0x00023b42) list_double2_pane_t1_cp2_ParamLimits

0x52ed,	// (0x00023b42) list_double2_pane_t1_cp2

0x5303,	// (0x00023b58) list_double2_pane_t2_cp2_ParamLimits

0x5303,	// (0x00023b58) list_double2_pane_t2_cp2

0x5315,	// (0x00023b6a) list_double_pane_g1_cp2_ParamLimits

0x5315,	// (0x00023b6a) list_double_pane_g1_cp2

0x5321,	// (0x00023b76) list_double_pane_g2_cp2

0x5329,	// (0x00023b7e) list_double_pane_t1_cp2_ParamLimits

0x5329,	// (0x00023b7e) list_double_pane_t1_cp2

0x533f,	// (0x00023b94) list_double_pane_t2_cp2_ParamLimits

0x533f,	// (0x00023b94) list_double_pane_t2_cp2

0x5369,	// (0x00023bbe) list_single_pane_cp2_g3

0x5379,	// (0x00023bce) list_single_pane_g1_cp2_ParamLimits

0x5379,	// (0x00023bce) list_single_pane_g1_cp2

0x5385,	// (0x00023bda) list_single_pane_g2_cp2

0x538d,	// (0x00023be2) list_single_pane_t1_cp2_ParamLimits

0x538d,	// (0x00023be2) list_single_pane_t1_cp2

0x53a5,	// (0x00023bfa) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x53a5,	// (0x00023bfa) list_single_large_graphic_pane_g1_cp2

0x53b1,	// (0x00023c06) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x53b1,	// (0x00023c06) list_single_large_graphic_pane_g2_cp2

0x53bd,	// (0x00023c12) list_single_large_graphic_pane_g3_cp2

0x53c5,	// (0x00023c1a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x53c5,	// (0x00023c1a) list_single_large_graphic_pane_g4_cp1

0x53df,	// (0x00023c34) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x53df,	// (0x00023c34) list_single_large_graphic_pane_t1_cp2

0x651f,	// (0x00024d74) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x651f,	// (0x00024d74) list_single_graphic_heading_pane_g1_cp2

0x64ec,	// (0x00024d41) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x64ec,	// (0x00024d41) list_single_graphic_heading_pane_g4_cp2

0x5385,	// (0x00023bda) list_single_graphic_heading_pane_g5_cp2

0x652b,	// (0x00024d80) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x652b,	// (0x00024d80) list_single_graphic_heading_pane_t1_cp2

0x6541,	// (0x00024d96) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6541,	// (0x00024d96) list_single_graphic_heading_pane_t2_cp2

0x64e0,	// (0x00024d35) list_single_2graphic_pane_g1_cp2_ParamLimits

0x64e0,	// (0x00024d35) list_single_2graphic_pane_g1_cp2

0x64ec,	// (0x00024d41) list_single_2graphic_pane_g2_cp2_ParamLimits

0x64ec,	// (0x00024d41) list_single_2graphic_pane_g2_cp2

0x5385,	// (0x00023bda) list_single_2graphic_pane_g3_cp2

0x64fd,	// (0x00024d52) list_single_2graphic_pane_g4_cp2_ParamLimits

0x64fd,	// (0x00024d52) list_single_2graphic_pane_g4_cp2

0x6509,	// (0x00024d5e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6509,	// (0x00024d5e) list_single_2graphic_pane_t1_cp2

0x43b4,	// (0x00022c09) list_highlight_pane_g10_cp1

0x60d6,	// (0x0002492b) list_highlight_pane_g1_cp1

0x60de,	// (0x00024933) list_highlight_pane_g2_cp1

0x60e6,	// (0x0002493b) list_highlight_pane_g3_cp1

0x60ee,	// (0x00024943) list_highlight_pane_g4_cp1

0x60f6,	// (0x0002494b) list_highlight_pane_g5_cp1

0x60fe,	// (0x00024953) list_highlight_pane_g6_cp1

0x6106,	// (0x0002495b) list_highlight_pane_g7_cp1

0x610e,	// (0x00024963) list_highlight_pane_g8_cp1

0x6116,	// (0x0002496b) list_highlight_pane_g9_cp1

0xa4ab,	// (0x00028d00) form_field_slider_pane_t3

0xa4b9,	// (0x00028d0e) form_field_slider_pane_t4

0x6012,	// (0x00024867) slider_form_pane_ParamLimits

0x6012,	// (0x00024867) slider_form_pane

0x43be,	// (0x00022c13) control_abbreviations

0x43be,	// (0x00022c13) control_conventions

0x43be,	// (0x00022c13) control_definitions

0x43be,	// (0x00022c13) format_table_attribute

0x6750,	// (0x00024fa5) bg_popup_preview_window_pane_g9

0x43be,	// (0x00022c13) format_table_data2

0x43be,	// (0x00022c13) format_table_data3

0x43be,	// (0x00022c13) format_table_data_example

0x0008,

0x43be,	// (0x00022c13) intro_purpose

0xf928,	// (0x0002e17d) bg_popup_preview_window_pane_g

0x43be,	// (0x00022c13) texts_category

0x43be,	// (0x00022c13) texts_graphics

0x53f5,	// (0x00023c4a) text_digital

0x5404,	// (0x00023c59) text_primary

0x5413,	// (0x00023c68) text_primary_small

0x5422,	// (0x00023c77) text_secondary

0x5431,	// (0x00023c86) text_title

0x6be8,	// (0x0002543d) bg_passive_tab_pane_g1_cp3_srt

0x5114,	// (0x00023969) bg_passive_tab_pane_g2_cp3_srt

0x6bdf,	// (0x00025434) bg_passive_tab_pane_g3_cp3_srt

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp3_srt_ParamLimits

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp3_srt

0x6bf1,	// (0x00025446) tabs_4_active_pane_srt_g1

0xaa4a,	// (0x0002929f) tabs_4_active_pane_srt_t1_ParamLimits

0xaa4a,	// (0x0002929f) tabs_4_active_pane_srt_t1

0x6be8,	// (0x0002543d) bg_active_tab_pane_g1_cp3_copy1

0x5114,	// (0x00023969) bg_active_tab_pane_g2_cp3_copy1

0x6bdf,	// (0x00025434) bg_active_tab_pane_g3_cp3_copy1

0x441a,	// (0x00022c6f) tabs_2_long_active_pane_srt_ParamLimits

0x441a,	// (0x00022c6f) tabs_2_long_active_pane_srt

0x441a,	// (0x00022c6f) tabs_2_long_passive_pane_srt_ParamLimits

0x441a,	// (0x00022c6f) tabs_2_long_passive_pane_srt

0x9243,	// (0x00027a98) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9243,	// (0x00027a98) bg_passive_tab_pane_cp4_srt

0x6b0e,	// (0x00025363) bg_passive_tab_pane_g1_cp4_srt

0x5114,	// (0x00023969) bg_passive_tab_pane_g2_cp4_srt

0x6b05,	// (0x0002535a) bg_passive_tab_pane_g3_cp4_srt

0x57f3,	// (0x00024048) bg_active_tab_pane_cp4_srt_ParamLimits

0x57f3,	// (0x00024048) bg_active_tab_pane_cp4_srt

0xa7da,	// (0x0002902f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa7da,	// (0x0002902f) tabs_2_long_active_pane_srt_t1

0x6b0e,	// (0x00025363) bg_active_tab_pane_g1_cp4_srt

0x5114,	// (0x00023969) bg_active_tab_pane_g2_cp4_srt

0x6b05,	// (0x0002535a) bg_active_tab_pane_g3_cp4_srt

0x440c,	// (0x00022c61) tabs_3_long_active_pane_srt_ParamLimits

0x440c,	// (0x00022c61) tabs_3_long_active_pane_srt

0x440c,	// (0x00022c61) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x440c,	// (0x00022c61) tabs_3_long_passive_pane_cp_srt

0x440c,	// (0x00022c61) tabs_3_long_passive_pane_srt_ParamLimits

0x440c,	// (0x00022c61) tabs_3_long_passive_pane_srt

0x9243,	// (0x00027a98) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9243,	// (0x00027a98) bg_passive_tab_pane_cp5_srt

0x516d,	// (0x000239c2) bg_passive_tab_pane_g1_cp5_srt

0x5114,	// (0x00023969) bg_passive_tab_pane_g2_cp5_srt

0x5164,	// (0x000239b9) bg_passive_tab_pane_g3_cp5_srt

0x57f3,	// (0x00024048) bg_active_tab_pane_cp5_srt_ParamLimits

0x57f3,	// (0x00024048) bg_active_tab_pane_cp5_srt

0xa7c8,	// (0x0002901d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa7c8,	// (0x0002901d) tabs_3_long_active_pane_srt_t1

0x516d,	// (0x000239c2) bg_active_tab_pane_g1_cp5_srt

0x5114,	// (0x00023969) bg_active_tab_pane_g2_cp5_srt

0x5164,	// (0x000239b9) bg_active_tab_pane_g3_cp5_srt

0x6af7,	// (0x0002534c) navi_text_pane_srt_t1

0x6aef,	// (0x00025344) navi_icon_pane_srt_g1

0x5537,	// (0x00023d8c) midp_editing_number_pane_srt

0x5440,	// (0x00023c95) midp_ticker_pane_srt

0x553f,	// (0x00023d94) midp_ticker_pane_srt_g1

0x5547,	// (0x00023d9c) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0002e007) midp_ticker_pane_srt_g

0x554f,	// (0x00023da4) midp_ticker_pane_srt_t1

0x6ae0,	// (0x00025335) midp_editing_number_pane_t1_copy1

0x97b2,	// (0x00028007) listscroll_midp_pane

0x97b2,	// (0x00028007) midp_form_pane

0x5448,	// (0x00023c9d) midp_info_popup_window_ParamLimits

0x5448,	// (0x00023c9d) midp_info_popup_window

0x4ad3,	// (0x00023328) bg_popup_sub_pane_cp50_ParamLimits

0x4ad3,	// (0x00023328) bg_popup_sub_pane_cp50

0x5d5b,	// (0x000245b0) listscroll_midp_info_pane_ParamLimits

0x5d5b,	// (0x000245b0) listscroll_midp_info_pane

0x5d43,	// (0x00024598) listscroll_form_midp_pane_ParamLimits

0x5d43,	// (0x00024598) listscroll_form_midp_pane

0x5d4f,	// (0x000245a4) scroll_bar_cp050

0xa493,	// (0x00028ce8) list_midp_pane

0x7455,	// (0x00025caa) signal_pane_g2_cp

0x5c75,	// (0x000244ca) listscroll_midp_info_pane_t1_ParamLimits

0x5c75,	// (0x000244ca) listscroll_midp_info_pane_t1

0x5c8d,	// (0x000244e2) listscroll_midp_info_pane_t2_ParamLimits

0x5c8d,	// (0x000244e2) listscroll_midp_info_pane_t2

0x5ccb,	// (0x00024520) listscroll_midp_info_pane_t3_ParamLimits

0x5ccb,	// (0x00024520) listscroll_midp_info_pane_t3

0x5d05,	// (0x0002455a) listscroll_midp_info_pane_t4_ParamLimits

0x5d05,	// (0x0002455a) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0002e0b8) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0002e0b8) listscroll_midp_info_pane_t

0x4b3a,	// (0x0002338f) scroll_pane_cp21

0x5c13,	// (0x00024468) form_midp_field_choice_group_pane

0x5c1c,	// (0x00024471) form_midp_field_text_pane

0x5c5b,	// (0x000244b0) form_midp_field_time_pane

0x5c63,	// (0x000244b8) form_midp_gauge_slider_pane

0x5c6c,	// (0x000244c1) form_midp_gauge_wait_pane

0x43be,	// (0x00022c13) form_midp_image_pane

0xd082,	// (0x0002b8d7) list_single_midp_pane_ParamLimits

0xd082,	// (0x0002b8d7) list_single_midp_pane

0xa45c,	// (0x00028cb1) form_midp_field_text_pane_t1

0x5aba,	// (0x0002430f) input_focus_pane_cp050

0x5c02,	// (0x00024457) list_midp_form_text_pane

0x5bd1,	// (0x00024426) form_midp_field_choice_group_pane_t1

0x5bdf,	// (0x00024434) input_focus_pane_cp051

0x5bf3,	// (0x00024448) list_midp_choice_pane

0x43be,	// (0x00022c13) status_idle_pane

0x5bb5,	// (0x0002440a) form_midp_field_time_pane_t1

0x43b4,	// (0x00022c09) wait_anim_pane_g2_copy1

0x5bc3,	// (0x00024418) form_midp_field_time_pane_t2

0x0001,

0x54a1,	// (0x00023cf6) aid_navinavi_width_2_pane

0xf85e,	// (0x0002e0b3) form_midp_field_time_pane_t

0x43be,	// (0x00022c13) input_focus_pane_cp052

0x43be,	// (0x00022c13) bg_input_focus_pane_cp040

0x5b91,	// (0x000243e6) form_midp_gauge_slider_pane_t1

0x5b9f,	// (0x000243f4) form_midp_gauge_slider_pane_t2

0xa440,	// (0x00028c95) form_midp_gauge_slider_pane_t3

0xa44e,	// (0x00028ca3) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0002e0aa) form_midp_gauge_slider_pane_t

0x5bad,	// (0x00024402) form_midp_slider_pane

0x441a,	// (0x00022c6f) bg_input_focus_pane_cp041_ParamLimits

0x441a,	// (0x00022c6f) bg_input_focus_pane_cp041

0x5b5e,	// (0x000243b3) form_midp_gauge_wait_pane_t1_ParamLimits

0x5b5e,	// (0x000243b3) form_midp_gauge_wait_pane_t1

0x5b70,	// (0x000243c5) form_midp_gauge_wait_pane_t2_ParamLimits

0x5b70,	// (0x000243c5) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0002e0a5) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0002e0a5) form_midp_gauge_wait_pane_t

0x5b82,	// (0x000243d7) form_midp_wait_pane_ParamLimits

0x5b82,	// (0x000243d7) form_midp_wait_pane

0x5b28,	// (0x0002437d) form_midp_image_pane_g1

0x5b31,	// (0x00024386) form_midp_image_pane_t1

0x5b40,	// (0x00024395) form_midp_image_pane_t2

0x5b4f,	// (0x000243a4) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0002e09e) form_midp_image_pane_t

0x5b1f,	// (0x00024374) list_single_midp_pane_g1

0xd073,	// (0x0002b8c8) list_single_midp_pane_t1

0xa418,	// (0x00028c6d) list_midp_form_item_pane_ParamLimits

0xa418,	// (0x00028c6d) list_midp_form_item_pane

0x545b,	// (0x00023cb0) list_midp_form_item_pane_t1

0x546a,	// (0x00023cbf) midp_ticker_pane_g1

0x5476,	// (0x00023ccb) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x0002dfed) midp_ticker_pane_g

0x9863,	// (0x000280b8) midp_ticker_pane_t1

0xa9c9,	// (0x0002921e) midp_editing_number_pane_t1

0x6b74,	// (0x000253c9) midp_editing_number_pane

0x6b83,	// (0x000253d8) midp_ticker_pane

0x6ad0,	// (0x00025325) ai_message_heading_pane

0x43be,	// (0x00022c13) bg_popup_window_pane_cp14

0x6ad8,	// (0x0002532d) listscroll_ai_message_pane

0x6a5a,	// (0x000252af) ai_message_heading_pane_g1_ParamLimits

0x6a5a,	// (0x000252af) ai_message_heading_pane_g1

0x6a66,	// (0x000252bb) ai_message_heading_pane_g2_ParamLimits

0x6a66,	// (0x000252bb) ai_message_heading_pane_g2

0x6a72,	// (0x000252c7) ai_message_heading_pane_g3_ParamLimits

0x6a72,	// (0x000252c7) ai_message_heading_pane_g3

0x6a7e,	// (0x000252d3) ai_message_heading_pane_g4_ParamLimits

0x6a7e,	// (0x000252d3) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0002e1df) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0002e1df) ai_message_heading_pane_g

0x6a8a,	// (0x000252df) ai_message_heading_pane_t1_ParamLimits

0x6a8a,	// (0x000252df) ai_message_heading_pane_t1

0x6aa4,	// (0x000252f9) ai_message_heading_pane_t2_ParamLimits

0x6aa4,	// (0x000252f9) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0002e1e8) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0002e1e8) ai_message_heading_pane_t

0x6ab6,	// (0x0002530b) bg_popup_heading_pane_cp1_ParamLimits

0x6ab6,	// (0x0002530b) bg_popup_heading_pane_cp1

0x6a48,	// (0x0002529d) list_ai_message_pane_ParamLimits

0x6a48,	// (0x0002529d) list_ai_message_pane

0x4b3a,	// (0x0002338f) scroll_pane_cp10

0x69e4,	// (0x00025239) list_ai_message_pane_g1

0x69ec,	// (0x00025241) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0002e1bc) list_ai_message_pane_g

0x69f4,	// (0x00025249) list_ai_message_pane_t1_ParamLimits

0x69f4,	// (0x00025249) list_ai_message_pane_t1

0x6a09,	// (0x0002525e) list_ai_message_pane_t2_ParamLimits

0x6a09,	// (0x0002525e) list_ai_message_pane_t2

0x6a1e,	// (0x00025273) list_ai_message_pane_t3_ParamLimits

0x6a1e,	// (0x00025273) list_ai_message_pane_t3

0x6a33,	// (0x00025288) list_ai_message_pane_t4_ParamLimits

0x6a33,	// (0x00025288) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0002e1c1) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0002e1c1) list_ai_message_pane_t

0xa763,	// (0x00028fb8) cell_ai_soft_ind_pane_ParamLimits

0xa763,	// (0x00028fb8) cell_ai_soft_ind_pane

0x5482,	// (0x00023cd7) cell_ai_soft_ind_pane_g1_ParamLimits

0x5482,	// (0x00023cd7) cell_ai_soft_ind_pane_g1

0x43be,	// (0x00022c13) grid_highlight_cp1

0x548f,	// (0x00023ce4) text_secondary_cp56_ParamLimits

0x548f,	// (0x00023ce4) text_secondary_cp56

0x69b9,	// (0x0002520e) example_general_pane_ParamLimits

0x69b9,	// (0x0002520e) example_general_pane

0x69c5,	// (0x0002521a) example_parent_pane_g1_ParamLimits

0x69c5,	// (0x0002521a) example_parent_pane_g1

0x69d1,	// (0x00025226) example_parent_pane_t1_ParamLimits

0x69d1,	// (0x00025226) example_parent_pane_t1

0x9d8f,	// (0x000285e4) popup_preview_text_window_ParamLimits

0x9d8f,	// (0x000285e4) popup_preview_text_window

0x5371,	// (0x00023bc6) list_single_pane_cp2_g4

0x45f5,	// (0x00022e4a) bg_popup_preview_window_pane_ParamLimits

0x45f5,	// (0x00022e4a) bg_popup_preview_window_pane

0x6758,	// (0x00024fad) popup_preview_text_window_t1_ParamLimits

0x6758,	// (0x00024fad) popup_preview_text_window_t1

0x6776,	// (0x00024fcb) popup_preview_text_window_t2_ParamLimits

0x6776,	// (0x00024fcb) popup_preview_text_window_t2

0x67bf,	// (0x00025014) popup_preview_text_window_t3_ParamLimits

0x67bf,	// (0x00025014) popup_preview_text_window_t3

0x6804,	// (0x00025059) popup_preview_text_window_t4_ParamLimits

0x6804,	// (0x00025059) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0002e190) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0002e190) popup_preview_text_window_t

0x6882,	// (0x000250d7) scroll_pane_cp11

0x59ca,	// (0x0002421f) bg_popup_preview_window_pane_g1

0x66ee,	// (0x00024f43) bg_popup_preview_window_pane_g2

0x66f6,	// (0x00024f4b) bg_popup_preview_window_pane_g3

0x66fe,	// (0x00024f53) bg_popup_preview_window_pane_g4

0x6730,	// (0x00024f85) bg_popup_preview_window_pane_g5

0x6738,	// (0x00024f8d) bg_popup_preview_window_pane_g6

0x6740,	// (0x00024f95) bg_popup_preview_window_pane_g7

0x6748,	// (0x00024f9d) bg_popup_preview_window_pane_g8

0x8a58,	// (0x000272ad) aid_popup_width_pane

0x9d6d,	// (0x000285c2) popup_midp_note_alarm_window_ParamLimits

0x9d6d,	// (0x000285c2) popup_midp_note_alarm_window

0x4a0f,	// (0x00023264) data_form_pane_ParamLimits

0xcd9b,	// (0x0002b5f0) form_field_data_pane_g1

0xcda5,	// (0x0002b5fa) form_field_data_pane_t1_ParamLimits

0x4a1b,	// (0x00023270) input_focus_pane_ParamLimits

0x4a29,	// (0x0002327e) data_form_wide_pane_ParamLimits

0xcdbd,	// (0x0002b612) form_field_data_wide_pane_g1

0xcdc9,	// (0x0002b61e) form_field_data_wide_pane_t1_ParamLimits

0x4796,	// (0x00022feb) input_focus_pane_cp6_ParamLimits

0x920a,	// (0x00027a5f) input_popup_find_pane_g1_ParamLimits

0x920a,	// (0x00027a5f) input_popup_find_pane_g1

0x9361,	// (0x00027bb6) aid_navi_side_left_pane

0x9376,	// (0x00027bcb) aid_navi_side_right_pane

0x61b3,	// (0x00024a08) bg_popup_window_pane_cp30_ParamLimits

0x61b3,	// (0x00024a08) bg_popup_window_pane_cp30

0x622d,	// (0x00024a82) popup_midp_note_alarm_window_g1_ParamLimits

0x622d,	// (0x00024a82) popup_midp_note_alarm_window_g1

0x625d,	// (0x00024ab2) popup_midp_note_alarm_window_t1_ParamLimits

0x625d,	// (0x00024ab2) popup_midp_note_alarm_window_t1

0x62fe,	// (0x00024b53) popup_midp_note_alarm_window_t2_ParamLimits

0x62fe,	// (0x00024b53) popup_midp_note_alarm_window_t2

0x63ac,	// (0x00024c01) popup_midp_note_alarm_window_t3_ParamLimits

0x63ac,	// (0x00024c01) popup_midp_note_alarm_window_t3

0x63de,	// (0x00024c33) popup_midp_note_alarm_window_t4_ParamLimits

0x63de,	// (0x00024c33) popup_midp_note_alarm_window_t4

0x6404,	// (0x00024c59) popup_midp_note_alarm_window_t5_ParamLimits

0x6404,	// (0x00024c59) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0002e12d) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0002e12d) popup_midp_note_alarm_window_t

0x64b0,	// (0x00024d05) wait_bar_pane_cp1_ParamLimits

0x64b0,	// (0x00024d05) wait_bar_pane_cp1

0x43be,	// (0x00022c13) wait_anim_pane_copy1

0x43be,	// (0x00022c13) wait_border_pane_copy1

0x5ed3,	// (0x00024728) wait_border_pane_g1_copy1

0xcde3,	// (0x0002b638) form_field_popup_pane_g1

0xcdeb,	// (0x0002b640) form_field_popup_pane_t1_ParamLimits

0x4a1b,	// (0x00023270) input_focus_pane_cp7_ParamLimits

0x4a55,	// (0x000232aa) list_form_pane_ParamLimits

0xce03,	// (0x0002b658) form_field_popup_wide_pane_g1

0xce0b,	// (0x0002b660) form_field_popup_wide_pane_t1_ParamLimits

0x4a1b,	// (0x00023270) input_focus_pane_cp8_ParamLimits

0x4a61,	// (0x000232b6) list_form_wide_pane_ParamLimits

0x6c18,	// (0x0002546d) aid_size_cell_graphic_pane

0xce95,	// (0x0002b6ea) data_form_pane_t1_ParamLimits

0xd0dc,	// (0x0002b931) data_form_wide_pane_t1_ParamLimits

0x9fd9,	// (0x0002882e) bg_status_flat_pane

0x8e65,	// (0x000276ba) title_pane_t1_ParamLimits

0x43d4,	// (0x00022c29) title_pane_t2_ParamLimits

0x43fa,	// (0x00022c4f) title_pane_t3_ParamLimits

0xf59b,	// (0x0002ddf0) title_pane_t_ParamLimits

0x4ee8,	// (0x0002373d) level_1_signal_ParamLimits

0x4ef5,	// (0x0002374a) level_2_signal_ParamLimits

0x4f02,	// (0x00023757) level_3_signal_ParamLimits

0x4f0f,	// (0x00023764) level_4_signal_ParamLimits

0x4f1c,	// (0x00023771) level_5_signal_ParamLimits

0x4f29,	// (0x0002377e) level_6_signal_ParamLimits

0x4f36,	// (0x0002378b) level_7_signal_ParamLimits

0x4ee8,	// (0x0002373d) level_1_battery_ParamLimits

0x4ef5,	// (0x0002374a) level_2_battery_ParamLimits

0x4f02,	// (0x00023757) level_3_battery_ParamLimits

0x4f0f,	// (0x00023764) level_4_battery_ParamLimits

0x4f1c,	// (0x00023771) level_5_battery_ParamLimits

0x4f29,	// (0x0002377e) level_6_battery_ParamLimits

0x4f36,	// (0x0002378b) level_7_battery_ParamLimits

0x60d6,	// (0x0002492b) bg_status_flat_pane_g1

0x60de,	// (0x00024933) bg_status_flat_pane_g2

0x60e6,	// (0x0002493b) bg_status_flat_pane_g3

0x60ee,	// (0x00024943) bg_status_flat_pane_g4

0x60f6,	// (0x0002494b) bg_status_flat_pane_g5

0x60fe,	// (0x00024953) bg_status_flat_pane_g6

0x6106,	// (0x0002495b) bg_status_flat_pane_g7

0x8ed5,	// (0x0002772a) tabs_3_active_pane_t1_ParamLimits

0x8ed5,	// (0x0002772a) tabs_3_passive_pane_t1_ParamLimits

0x8eef,	// (0x00027744) tabs_4_active_pane_t1_ParamLimits

0x8eef,	// (0x00027744) tabs_4_1_passive_pane_t1_ParamLimits

0x921e,	// (0x00027a73) tabs_2_active_pane_t1_ParamLimits

0x921e,	// (0x00027a73) tabs_2_passive_pane_t1_ParamLimits

0x57f3,	// (0x00024048) bg_active_tab_pane_cp4_ParamLimits

0x9230,	// (0x00027a85) tabs_2_long_active_pane_t1_ParamLimits

0x9243,	// (0x00027a98) bg_passive_tab_pane_cp4_ParamLimits

0xa2e3,	// (0x00028b38) list_single_midp_graphic_pane_t1_ParamLimits

0x57f3,	// (0x00024048) bg_active_tab_pane_cp5_ParamLimits

0x924f,	// (0x00027aa4) tabs_3_long_active_pane_t1_ParamLimits

0x9243,	// (0x00027a98) bg_passive_tab_pane_cp5_ParamLimits

0xa2e3,	// (0x00028b38) list_single_midp_graphic_pane_t1

0x9fd9,	// (0x0002882e) bg_status_flat_pane_ParamLimits

0x589b,	// (0x000240f0) indicator_pane_cp2_ParamLimits

0x589b,	// (0x000240f0) indicator_pane_cp2

0xa11c,	// (0x00028971) navi_pane_srt_ParamLimits

0xa11c,	// (0x00028971) navi_pane_srt

0x58c3,	// (0x00024118) popup_clock_digital_analogue_window_cp1

0x445e,	// (0x00022cb3) indicator_pane_t1

0x5440,	// (0x00023c95) copy_highlight_pane

0x5440,	// (0x00023c95) cursor_graphics_pane

0x5440,	// (0x00023c95) graphic_within_text_pane

0x5440,	// (0x00023c95) link_highlight_pane

0x6845,	// (0x0002509a) popup_preview_text_window_t5_ParamLimits

0x6845,	// (0x0002509a) popup_preview_text_window_t5

0x54a9,	// (0x00023cfe) cursor_digital_pane

0x54a9,	// (0x00023cfe) cursor_primary_pane

0x54ba,	// (0x00023d0f) cursor_primary_small_pane

0x54c2,	// (0x00023d17) cursor_secondary_pane

0x54ca,	// (0x00023d1f) cursor_title_pane

0x54a9,	// (0x00023cfe) link_highlight_digital_pane

0x54b1,	// (0x00023d06) link_highlight_primary_pane

0x54ba,	// (0x00023d0f) link_highlight_primary_small_pane

0x54c2,	// (0x00023d17) link_highlight_secondary_pane

0x54ca,	// (0x00023d1f) link_highlight_title_pane

0x54a9,	// (0x00023cfe) copy_highlight_digital_pane

0x54a9,	// (0x00023cfe) copy_highlight_primary_pane

0x54ba,	// (0x00023d0f) copy_highlight_primary_small_pane

0x54c2,	// (0x00023d17) copy_highlight_secondary_pane

0x54ca,	// (0x00023d1f) copy_highlight_title_pane

0x54c2,	// (0x00023d17) graphic_text_digital_pane

0x6156,	// (0x000249ab) graphic_text_primary_pane

0x615f,	// (0x000249b4) graphic_text_primary_small_pane

0x54ba,	// (0x00023d0f) graphic_text_secondary_pane

0x54a9,	// (0x00023cfe) graphic_text_title_pane

0x9875,	// (0x000280ca) cursor_primary_pane_g1

0x6148,	// (0x0002499d) cursor_text_primary_t1

0xa4db,	// (0x00028d30) cursor_primary_small_pane_g1

0x613a,	// (0x0002498f) cursor_text_primary_small_t1

0xa4d1,	// (0x00028d26) cursor_primary_small_pane_g1_copy1

0x612c,	// (0x00024981) cursor_text_primary_small_t1_copy1

0x611e,	// (0x00024973) cursor_text_title_t1

0xa4c7,	// (0x00028d1c) cursor_title_pane_g1

0x9875,	// (0x000280ca) cursor_digital_pane_g1

0x54d2,	// (0x00023d27) cursor_text_digital_t1

0x54f7,	// (0x00023d4c) link_highlight_primary_pane_g1

0x60c7,	// (0x0002491c) link_highlight_primary_pane_t1

0x54e0,	// (0x00023d35) link_highlight_primary_small_pane_g1

0x54e8,	// (0x00023d3d) link_highlight_primary_small_pane_t1

0x54f7,	// (0x00023d4c) link_highlight_secondary_pane_g1

0x54ff,	// (0x00023d54) link_highlight_secondary_pane_t1

0x603b,	// (0x00024890) link_highlight_title_pane_g1

0x6043,	// (0x00024898) link_highlight_title_pane_t1

0x6024,	// (0x00024879) link_highlight_digital_pane_g1

0x602c,	// (0x00024881) link_highlight_digital_pane_t1

0x5f18,	// (0x0002476d) copy_highlight_primary_pane_g1

0x5f20,	// (0x00024775) copy_highlight_primary_pane_t1

0x5ef2,	// (0x00024747) copy_highlight_primary_small_pane_g1

0x5f09,	// (0x0002475e) copy_highlight_primary_small_pane_t1

0x550e,	// (0x00023d63) copy_highlight_secondary_pane_g1

0x5516,	// (0x00023d6b) copy_highlight_secondary_pane_t1

0x5ef2,	// (0x00024747) copy_highlight_title_pane_g1

0x5efa,	// (0x0002474f) copy_highlight_title_pane_t1

0x5f18,	// (0x0002476d) copy_highlight_digital_pane_g1

0x6d9e,	// (0x000255f3) copy_highlight_digital_pane_t1

0x6cf2,	// (0x00025547) graphic_text_primary_pane_g1

0x6d82,	// (0x000255d7) graphic_text_primary_pane_t1

0x6d90,	// (0x000255e5) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0002e25c) graphic_text_primary_pane_t

0x6d5e,	// (0x000255b3) graphic_text_primary_small_pane_g1

0x6d66,	// (0x000255bb) graphic_text_primary_small_pane_t1

0x6d74,	// (0x000255c9) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0002e257) graphic_text_primary_small_pane_t

0x6d3a,	// (0x0002558f) graphic_text_secondary_pane_g1

0x6d42,	// (0x00025597) graphic_text_secondary_pane_t1

0x6d50,	// (0x000255a5) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0002e252) graphic_text_secondary_pane_t

0x6d16,	// (0x0002556b) graphic_text_title_pane_g1

0x6d1e,	// (0x00025573) graphic_text_title_pane_t1

0x6d2c,	// (0x00025581) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0002e24d) graphic_text_title_pane_t

0x6cf2,	// (0x00025547) graphic_text_digital_pane_g1

0x6cfa,	// (0x0002554f) graphic_text_digital_pane_t1

0x6d08,	// (0x0002555d) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0002e248) graphic_text_digital_pane_t

0x441a,	// (0x00022c6f) navi_icon_pane_srt_ParamLimits

0x441a,	// (0x00022c6f) navi_icon_pane_srt

0x43be,	// (0x00022c13) navi_midp_pane_srt

0x43be,	// (0x00022c13) navi_navi_pane_srt

0x441a,	// (0x00022c6f) navi_text_pane_srt_ParamLimits

0x441a,	// (0x00022c6f) navi_text_pane_srt

0x6cbd,	// (0x00025512) navi_navi_icon_text_pane_srt

0x6cd7,	// (0x0002552c) navi_navi_pane_srt_g1_ParamLimits

0x6cd7,	// (0x0002552c) navi_navi_pane_srt_g1

0x6cc5,	// (0x0002551a) navi_navi_pane_srt_g2_ParamLimits

0x6cc5,	// (0x0002551a) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0002e243) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0002e243) navi_navi_pane_srt_g

0x6ce9,	// (0x0002553e) navi_navi_tabs_pane_srt

0x6cbd,	// (0x00025512) navi_navi_text_pane_srt

0x6cbd,	// (0x00025512) navi_navi_volume_pane_srt

0x6cae,	// (0x00025503) navi_navi_text_pane_srt_t1

0xab70,	// (0x000293c5) navi_navi_volume_pane_srt_g1

0xab78,	// (0x000293cd) volume_small_pane_srt_ParamLimits

0xab78,	// (0x000293cd) volume_small_pane_srt

0x987f,	// (0x000280d4) volume_small_pane_srt_g1_ParamLimits

0x987f,	// (0x000280d4) volume_small_pane_srt_g1

0x988f,	// (0x000280e4) volume_small_pane_srt_g2_ParamLimits

0x988f,	// (0x000280e4) volume_small_pane_srt_g2

0x98a0,	// (0x000280f5) volume_small_pane_srt_g3_ParamLimits

0x98a0,	// (0x000280f5) volume_small_pane_srt_g3

0x98b1,	// (0x00028106) volume_small_pane_srt_g4_ParamLimits

0x98b1,	// (0x00028106) volume_small_pane_srt_g4

0x98c2,	// (0x00028117) volume_small_pane_srt_g5_ParamLimits

0x98c2,	// (0x00028117) volume_small_pane_srt_g5

0x98d3,	// (0x00028128) volume_small_pane_srt_g6_ParamLimits

0x98d3,	// (0x00028128) volume_small_pane_srt_g6

0x98e4,	// (0x00028139) volume_small_pane_srt_g7_ParamLimits

0x98e4,	// (0x00028139) volume_small_pane_srt_g7

0x98f5,	// (0x0002814a) volume_small_pane_srt_g8_ParamLimits

0x98f5,	// (0x0002814a) volume_small_pane_srt_g8

0x9906,	// (0x0002815b) volume_small_pane_srt_g9_ParamLimits

0x9906,	// (0x0002815b) volume_small_pane_srt_g9

0x9917,	// (0x0002816c) volume_small_pane_srt_g10_ParamLimits

0x9917,	// (0x0002816c) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x0002dff2) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x0002dff2) volume_small_pane_srt_g

0x469e,	// (0x00022ef3) query_popup_data_pane_cp2

0x6c94,	// (0x000254e9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6c94,	// (0x000254e9) navi_navi_icon_text_pane_srt_t1

0x6156,	// (0x000249ab) navi_tabs_2_long_pane_srt

0x6156,	// (0x000249ab) navi_tabs_2_pane_srt

0x6156,	// (0x000249ab) navi_tabs_3_long_pane_srt

0x6156,	// (0x000249ab) navi_tabs_3_pane_srt

0x6156,	// (0x000249ab) navi_tabs_4_pane_srt

0xab50,	// (0x000293a5) tabs_2_active_pane_srt_ParamLimits

0xab50,	// (0x000293a5) tabs_2_active_pane_srt

0xab60,	// (0x000293b5) tabs_2_passive_pane_srt_ParamLimits

0xab60,	// (0x000293b5) tabs_2_passive_pane_srt

0x4b73,	// (0x000233c8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4b73,	// (0x000233c8) bg_passive_tab_pane_cp1_srt

0x6c7b,	// (0x000254d0) bg_passive_tab_pane_g1_cp1_srt

0x5114,	// (0x00023969) bg_passive_tab_pane_g2_cp1_srt

0x6c72,	// (0x000254c7) bg_passive_tab_pane_g3_cp1_srt

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp1_srt_ParamLimits

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp1_srt

0x6c84,	// (0x000254d9) tabs_2_active_pane_srt_g1

0xab3e,	// (0x00029393) tabs_2_active_pane_srt_t1_ParamLimits

0xab3e,	// (0x00029393) tabs_2_active_pane_srt_t1

0x6c7b,	// (0x000254d0) bg_active_tab_pane_g1_cp1_srt

0x5114,	// (0x00023969) bg_active_tab_pane_g2_cp1_srt

0x6c72,	// (0x000254c7) bg_active_tab_pane_g3_cp1_srt

0xab0b,	// (0x00029360) tabs_3_active_pane_srt_ParamLimits

0xab0b,	// (0x00029360) tabs_3_active_pane_srt

0xab1c,	// (0x00029371) tabs_3_passive_pane_cp_srt_ParamLimits

0xab1c,	// (0x00029371) tabs_3_passive_pane_cp_srt

0xab2d,	// (0x00029382) tabs_3_passive_pane_srt_ParamLimits

0xab2d,	// (0x00029382) tabs_3_passive_pane_srt

0x4b73,	// (0x000233c8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4b73,	// (0x000233c8) bg_passive_tab_pane_cp2_srt

0x552e,	// (0x00023d83) bg_passive_tab_pane_g1_cp2_srt

0x5114,	// (0x00023969) bg_passive_tab_pane_g2_cp2_srt

0x5525,	// (0x00023d7a) bg_passive_tab_pane_g3_cp2_srt

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp2_srt_ParamLimits

0x441a,	// (0x00022c6f) bg_active_tab_pane_cp2_srt

0x6c6a,	// (0x000254bf) tabs_3_active_pane_srt_g1

0xaaf9,	// (0x0002934e) tabs_3_active_pane_srt_t1_ParamLimits

0xaaf9,	// (0x0002934e) tabs_3_active_pane_srt_t1

0x552e,	// (0x00023d83) bg_active_tab_pane_g1_cp2_srt

0x5114,	// (0x00023969) bg_active_tab_pane_g2_cp2_srt

0x5525,	// (0x00023d7a) bg_active_tab_pane_g3_cp2_srt

0xaab1,	// (0x00029306) tabs_4_active_pane_srt_ParamLimits

0xaab1,	// (0x00029306) tabs_4_active_pane_srt

0xaac3,	// (0x00029318) tabs_4_passive_pane_cp2_srt_ParamLimits

0xaac3,	// (0x00029318) tabs_4_passive_pane_cp2_srt

0x5652,	// (0x00023ea7) aid_size_cell_toolbar

0x9243,	// (0x00027a98) main_idle_act_pane_ParamLimits

0x571e,	// (0x00023f73) popup_large_graphic_colour_window_ParamLimits

0x9ee5,	// (0x0002873a) popup_toolbar_window_ParamLimits

0x9ee5,	// (0x0002873a) popup_toolbar_window

0x6b96,	// (0x000253eb) list_single_graphic_2heading_pane_ParamLimits

0x6b96,	// (0x000253eb) list_single_graphic_2heading_pane

0x4d1d,	// (0x00023572) aid_size_cell_apps_grid_lsc_pane

0x4d2f,	// (0x00023584) aid_size_cell_apps_grid_prt_pane

0x4b73,	// (0x000233c8) bg_wml_button_pane_cp1_ParamLimits

0x4b73,	// (0x000233c8) bg_wml_button_pane_cp1

0xa45c,	// (0x00028cb1) form_midp_field_text_pane_t1_ParamLimits

0x5aba,	// (0x0002430f) input_focus_pane_cp050_ParamLimits

0x5c02,	// (0x00024457) list_midp_form_text_pane_ParamLimits

0x5bdf,	// (0x00024434) input_focus_pane_cp051_ParamLimits

0x5bf3,	// (0x00024448) list_midp_choice_pane_ParamLimits

0xa3c2,	// (0x00028c17) list_single_2graphic_pane_cp3_ParamLimits

0xa3c2,	// (0x00028c17) list_single_2graphic_pane_cp3

0xa3e6,	// (0x00028c3b) list_single_midp_graphic_pane_ParamLimits

0xa3e6,	// (0x00028c3b) list_single_midp_graphic_pane

0x89c4,	// (0x00027219) list_single_graphic_2heading_pane_g1_ParamLimits

0x89c4,	// (0x00027219) list_single_graphic_2heading_pane_g1

0x89d0,	// (0x00027225) list_single_graphic_2heading_pane_g4_ParamLimits

0x89d0,	// (0x00027225) list_single_graphic_2heading_pane_g4

0x89dc,	// (0x00027231) list_single_graphic_2heading_pane_g5_ParamLimits

0x89dc,	// (0x00027231) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x0002e045) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x0002e045) list_single_graphic_2heading_pane_g

0x89e8,	// (0x0002723d) list_single_graphic_2heading_pane_t1_ParamLimits

0x89e8,	// (0x0002723d) list_single_graphic_2heading_pane_t1

0x89fc,	// (0x00027251) list_single_graphic_2heading_pane_t2_ParamLimits

0x89fc,	// (0x00027251) list_single_graphic_2heading_pane_t2

0x8a18,	// (0x0002726d) list_single_graphic_2heading_pane_t3_ParamLimits

0x8a18,	// (0x0002726d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x0002e04c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x0002e04c) list_single_graphic_2heading_pane_t

0x5908,	// (0x0002415d) bg_popup_sub_pane_cp2

0x5932,	// (0x00024187) grid_toobar_pane

0xa252,	// (0x00028aa7) cell_toolbar_pane_ParamLimits

0xa252,	// (0x00028aa7) cell_toolbar_pane

0x596e,	// (0x000241c3) cell_toolbar_pane_g1_ParamLimits

0x596e,	// (0x000241c3) cell_toolbar_pane_g1

0x5982,	// (0x000241d7) cell_toolbar_pane_g2_ParamLimits

0x5982,	// (0x000241d7) cell_toolbar_pane_g2

0x0001,

0xf805,	// (0x0002e05a) cell_toolbar_pane_g_ParamLimits

0xf805,	// (0x0002e05a) cell_toolbar_pane_g

0x59a4,	// (0x000241f9) grid_highlight_pane_cp2_ParamLimits

0x59a4,	// (0x000241f9) grid_highlight_pane_cp2

0x59be,	// (0x00024213) toolbar_button_pane

0x59ca,	// (0x0002421f) toolbar_button_pane_g1

0x59da,	// (0x0002422f) toolbar_button_pane_g2

0x59d2,	// (0x00024227) toolbar_button_pane_g3

0x59ea,	// (0x0002423f) toolbar_button_pane_g4

0x59e2,	// (0x00024237) toolbar_button_pane_g5

0x59f2,	// (0x00024247) toolbar_button_pane_g6

0x59fa,	// (0x0002424f) toolbar_button_pane_g7

0x5a0a,	// (0x0002425f) toolbar_button_pane_g8

0x5a02,	// (0x00024257) toolbar_button_pane_g9

0x0009,

0xf80a,	// (0x0002e05f) toolbar_button_pane_g

0xa28a,	// (0x00028adf) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa28a,	// (0x00028adf) list_single_2graphic_pane_g1_cp3

0xa296,	// (0x00028aeb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa296,	// (0x00028aeb) list_single_2graphic_pane_g2_cp3

0xa2a7,	// (0x00028afc) list_single_2graphic_pane_g3_cp3

0xa2af,	// (0x00028b04) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa2af,	// (0x00028b04) list_single_2graphic_pane_g4_cp3

0xa2bb,	// (0x00028b10) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa2bb,	// (0x00028b10) list_single_2graphic_pane_t1_cp3

0xa2d7,	// (0x00028b2c) list_single_midp_graphic_pane_g2_ParamLimits

0xa2d7,	// (0x00028b2c) list_single_midp_graphic_pane_g2

0x565a,	// (0x00023eaf) aid_zoom_text_primary

0xcfcb,	// (0x0002b820) aid_zoom_text_secondary

0x55e2,	// (0x00023e37) status_small_pane_g7_ParamLimits

0x55e2,	// (0x00023e37) status_small_pane_g7

0x5605,	// (0x00023e5a) status_small_pane_t1_ParamLimits

0x8e48,	// (0x0002769d) title_pane_g2

0x0003,

0xf592,	// (0x0002dde7) title_pane_g

0x90a6,	// (0x000278fb) aid_size_cell_colour_1_pane_ParamLimits

0x90a6,	// (0x000278fb) aid_size_cell_colour_1_pane

0x90ba,	// (0x0002790f) aid_size_cell_colour_2_pane_ParamLimits

0x90ba,	// (0x0002790f) aid_size_cell_colour_2_pane

0x90ce,	// (0x00027923) aid_size_cell_colour_3_pane_ParamLimits

0x90ce,	// (0x00027923) aid_size_cell_colour_3_pane

0x90e2,	// (0x00027937) aid_size_cell_colour_4_pane_ParamLimits

0x90e2,	// (0x00027937) aid_size_cell_colour_4_pane

0x929d,	// (0x00027af2) title_pane_stacon_g1_ParamLimits

0x929d,	// (0x00027af2) title_pane_stacon_g1

0x5f77,	// (0x000247cc) popup_note_wait_window_g3_ParamLimits

0x5f77,	// (0x000247cc) popup_note_wait_window_g3

0x5fed,	// (0x00024842) popup_note_wait_window_t5_ParamLimits

0x5fed,	// (0x00024842) popup_note_wait_window_t5

0x43be,	// (0x00022c13) main_feb_china_hwr_fs_writing_pane

0x9b08,	// (0x0002835d) popup_feb_china_hwr_fs_window_ParamLimits

0x9b08,	// (0x0002835d) popup_feb_china_hwr_fs_window

0xa2f9,	// (0x00028b4e) aid_size_cell_hwr_fs_ParamLimits

0xa2f9,	// (0x00028b4e) aid_size_cell_hwr_fs

0x5aba,	// (0x0002430f) bg_popup_sub_pane_cp3_ParamLimits

0x5aba,	// (0x0002430f) bg_popup_sub_pane_cp3

0xa30e,	// (0x00028b63) grid_hwr_fs_pane_ParamLimits

0xa30e,	// (0x00028b63) grid_hwr_fs_pane

0xa326,	// (0x00028b7b) linegrid_hwr_fs_pane_ParamLimits

0xa326,	// (0x00028b7b) linegrid_hwr_fs_pane

0xa336,	// (0x00028b8b) cell_hwr_fs_pane_ParamLimits

0xa336,	// (0x00028b8b) cell_hwr_fs_pane

0x5ac6,	// (0x0002431b) linegrid_hwr_fs_pane_g1_ParamLimits

0x5ac6,	// (0x0002431b) linegrid_hwr_fs_pane_g1

0xa358,	// (0x00028bad) linegrid_hwr_fs_pane_g2_ParamLimits

0xa358,	// (0x00028bad) linegrid_hwr_fs_pane_g2

0x5ad2,	// (0x00024327) linegrid_hwr_fs_pane_g3_ParamLimits

0x5ad2,	// (0x00024327) linegrid_hwr_fs_pane_g3

0xa36a,	// (0x00028bbf) linegrid_hwr_fs_pane_g4_ParamLimits

0xa36a,	// (0x00028bbf) linegrid_hwr_fs_pane_g4

0xa384,	// (0x00028bd9) linegrid_hwr_fs_pane_g5_ParamLimits

0xa384,	// (0x00028bd9) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0002e08a) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0002e08a) linegrid_hwr_fs_pane_g

0x5ade,	// (0x00024333) cell_hwr_fs_pane_g1_ParamLimits

0x5ade,	// (0x00024333) cell_hwr_fs_pane_g1

0x58d4,	// (0x00024129) cell_hwr_fs_pane_g2_ParamLimits

0x58d4,	// (0x00024129) cell_hwr_fs_pane_g2

0xa39a,	// (0x00028bef) cell_hwr_fs_pane_g3_ParamLimits

0xa39a,	// (0x00028bef) cell_hwr_fs_pane_g3

0xa3a7,	// (0x00028bfc) cell_hwr_fs_pane_g4_ParamLimits

0xa3a7,	// (0x00028bfc) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0002e095) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0002e095) cell_hwr_fs_pane_g

0xa3b4,	// (0x00028c09) cell_hwr_fs_pane_t1

0x43be,	// (0x00022c13) grid_highlight_pane_cp6

0x43be,	// (0x00022c13) main_idle_act2_pane

0x4b21,	// (0x00023376) aid_inside_area_popup_secondary

0xa64e,	// (0x00028ea3) aid_inside_area_window_primary_ParamLimits

0xa64e,	// (0x00028ea3) aid_inside_area_window_primary

0x6dad,	// (0x00025602) ai2_news_ticker_pane

0x6db5,	// (0x0002560a) aid_size_cell_ai1_link_ParamLimits

0x6db5,	// (0x0002560a) aid_size_cell_ai1_link

0xab8d,	// (0x000293e2) popup_ai2_data_window_ParamLimits

0xab8d,	// (0x000293e2) popup_ai2_data_window

0x6dcf,	// (0x00025624) popup_ai2_link_window_ParamLimits

0x6dcf,	// (0x00025624) popup_ai2_link_window

0x5aba,	// (0x0002430f) bg_popup_sub_pane_cp4_ParamLimits

0x5aba,	// (0x0002430f) bg_popup_sub_pane_cp4

0x6de3,	// (0x00025638) grid_ai2_link_pane_ParamLimits

0x6de3,	// (0x00025638) grid_ai2_link_pane

0x6dfa,	// (0x0002564f) popup_ai2_link_window_g1_ParamLimits

0x6dfa,	// (0x0002564f) popup_ai2_link_window_g1

0x6e06,	// (0x0002565b) popup_ai2_link_window_g2_ParamLimits

0x6e06,	// (0x0002565b) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0002e261) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0002e261) popup_ai2_link_window_g

0x6e15,	// (0x0002566a) ai2_mp_button_pane

0x6e1d,	// (0x00025672) ai2_mp_volume_pane

0x5bdf,	// (0x00024434) bg_popup_sub_pane_cp5_ParamLimits

0x5bdf,	// (0x00024434) bg_popup_sub_pane_cp5

0x6e25,	// (0x0002567a) heading_ai2_gene_pane_ParamLimits

0x6e25,	// (0x0002567a) heading_ai2_gene_pane

0x6e31,	// (0x00025686) list_ai2_gene_pane_ParamLimits

0x6e31,	// (0x00025686) list_ai2_gene_pane

0x6e79,	// (0x000256ce) cell_ai2_link_pane_ParamLimits

0x6e79,	// (0x000256ce) cell_ai2_link_pane

0x6e8f,	// (0x000256e4) cell_ai2_link_pane_g1

0x43be,	// (0x00022c13) grid_highlight_pane_cp7

0xabd6,	// (0x0002942b) ai2_mp_volume_pane_g1

0x6f34,	// (0x00025789) ai2_mp_volume_pane_g2

0xabba,	// (0x0002940f) list_ai2_gene_pane_t1

0x6f2c,	// (0x00025781) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0002e27a) ai2_mp_volume_pane_g

0xabde,	// (0x00029433) volume_small_pane_cp3

0x6f3c,	// (0x00025791) aid_size_cell_ai2_button

0x6f44,	// (0x00025799) grid_ai2_button_pane

0x6f4d,	// (0x000257a2) cell_ai2_button_pane_ParamLimits

0x6f4d,	// (0x000257a2) cell_ai2_button_pane

0x43b4,	// (0x00022c09) cell_ai2_button_pane_g1

0x43be,	// (0x00022c13) grid_highlight_pane_cp8

0x6eec,	// (0x00025741) ai2_gene_pane_t1_ParamLimits

0x6eec,	// (0x00025741) ai2_gene_pane_t1

0x9aa4,	// (0x000282f9) aid_height_parent_landscape

0xa865,	// (0x000290ba) aid_height_set_list

0x6712,	// (0x00024f67) aid_size_parent

0x6c18,	// (0x0002546d) aid_size_cell_graphic_pane_ParamLimits

0x6e41,	// (0x00025696) popup_ai2_data_window_g1_ParamLimits

0x6e41,	// (0x00025696) popup_ai2_data_window_g1

0x6e4d,	// (0x000256a2) ai2_news_ticker_pane_g1

0x6e55,	// (0x000256aa) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0002e266) ai2_news_ticker_pane_g

0x6e5d,	// (0x000256b2) ai2_news_ticker_pane_t1

0x6e6b,	// (0x000256c0) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0002e26b) ai2_news_ticker_pane_t

0x6e98,	// (0x000256ed) heading_ai2_gene_pane_g1

0x6ea0,	// (0x000256f5) heading_ai2_gene_pane_t1_ParamLimits

0x6ea0,	// (0x000256f5) heading_ai2_gene_pane_t1

0x6eb5,	// (0x0002570a) list_highlight_pane_cp6

0xaba3,	// (0x000293f8) ai2_gene_pane_ParamLimits

0xaba3,	// (0x000293f8) ai2_gene_pane

0xabc8,	// (0x0002941d) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0002e270) list_ai2_gene_pane_t

0x6ebd,	// (0x00025712) list_highlight_pane_cp8_ParamLimits

0x6ebd,	// (0x00025712) list_highlight_pane_cp8

0x6ece,	// (0x00025723) ai2_gene_pane_g1_ParamLimits

0x6ece,	// (0x00025723) ai2_gene_pane_g1

0x6ee0,	// (0x00025735) ai2_gene_pane_g2_ParamLimits

0x6ee0,	// (0x00025735) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0002e275) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0002e275) ai2_gene_pane_g

0x49b1,	// (0x00023206) scroll_pane_cp12

0x9a63,	// (0x000282b8) control_pane_t3_ParamLimits

0x9a63,	// (0x000282b8) control_pane_t3

0x55f6,	// (0x00023e4b) status_small_pane_g8_ParamLimits

0x55f6,	// (0x00023e4b) status_small_pane_g8

0x9b94,	// (0x000283e9) popup_find_window_ParamLimits

0x9d81,	// (0x000285d6) popup_note_image_window_ParamLimits

0xcff7,	// (0x0002b84c) list_double2_graphic_pane_vc_g1_ParamLimits

0xcff7,	// (0x0002b84c) list_double2_graphic_pane_vc_g1

0xd003,	// (0x0002b858) list_double2_graphic_pane_vc_g2_ParamLimits

0xd003,	// (0x0002b858) list_double2_graphic_pane_vc_g2

0xd00f,	// (0x0002b864) list_double2_graphic_pane_vc_g3_ParamLimits

0xd00f,	// (0x0002b864) list_double2_graphic_pane_vc_g3

0x0002,

0xf7fe,	// (0x0002e053) list_double2_graphic_pane_vc_g_ParamLimits

0xf7fe,	// (0x0002e053) list_double2_graphic_pane_vc_g

0xd01b,	// (0x0002b870) list_double2_graphic_pane_vc_t1_ParamLimits

0xd01b,	// (0x0002b870) list_double2_graphic_pane_vc_t1

0xd031,	// (0x0002b886) list_single_heading_pane_vc_g1_ParamLimits

0xd031,	// (0x0002b886) list_single_heading_pane_vc_g1

0xd03d,	// (0x0002b892) list_single_heading_pane_vc_g2_ParamLimits

0xd03d,	// (0x0002b892) list_single_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e074) list_single_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e074) list_single_heading_pane_vc_g

0xd049,	// (0x0002b89e) list_single_heading_pane_vc_t1_ParamLimits

0xd049,	// (0x0002b89e) list_single_heading_pane_vc_t1

0xd05f,	// (0x0002b8b4) list_single_heading_pane_vc_t2_ParamLimits

0xd05f,	// (0x0002b8b4) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0002e079) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0002e079) list_single_heading_pane_vc_t

0x5a12,	// (0x00024267) list_setting_number_pane_vc_g1_ParamLimits

0x5a12,	// (0x00024267) list_setting_number_pane_vc_g1

0x5a1e,	// (0x00024273) list_setting_number_pane_vc_g2_ParamLimits

0x5a1e,	// (0x00024273) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0002e07e) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0002e07e) list_setting_number_pane_vc_g

0x5a2a,	// (0x0002427f) list_setting_number_pane_vc_t1_ParamLimits

0x5a2a,	// (0x0002427f) list_setting_number_pane_vc_t1

0x5a3e,	// (0x00024293) list_setting_number_pane_vc_t2_ParamLimits

0x5a3e,	// (0x00024293) list_setting_number_pane_vc_t2

0x5a5a,	// (0x000242af) list_setting_number_pane_vc_t3_ParamLimits

0x5a5a,	// (0x000242af) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0002e083) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0002e083) list_setting_number_pane_vc_t

0x5a80,	// (0x000242d5) set_value_pane_vc_ParamLimits

0x5a80,	// (0x000242d5) set_value_pane_vc

0x6b96,	// (0x000253eb) list_double2_graphic_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_double2_graphic_pane_vc

0x6b96,	// (0x000253eb) list_double2_large_graphic_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_double2_large_graphic_pane_vc

0x6b96,	// (0x000253eb) list_double2_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_double2_pane_vc

0x6b96,	// (0x000253eb) list_double_graphic_heading_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_double_graphic_heading_pane_vc

0x6b96,	// (0x000253eb) list_double_graphic_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_double_graphic_pane_vc

0x6b96,	// (0x000253eb) list_double_heading_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_double_heading_pane_vc

0x6b96,	// (0x000253eb) list_double_large_graphic_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_double_large_graphic_pane_vc

0x6b96,	// (0x000253eb) list_double_number_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_double_number_pane_vc

0x6b96,	// (0x000253eb) list_double_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_double_pane_vc

0x6b96,	// (0x000253eb) list_double_time_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_double_time_pane_vc

0x6b96,	// (0x000253eb) list_setting_number_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_setting_number_pane_vc

0x6b96,	// (0x000253eb) list_setting_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_setting_pane_vc

0x6b96,	// (0x000253eb) list_single_graphic_heading_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_single_graphic_heading_pane_vc

0x6b96,	// (0x000253eb) list_single_heading_pane_vc_ParamLimits

0x6b96,	// (0x000253eb) list_single_heading_pane_vc

0xd13c,	// (0x0002b991) list_single_number_heading_pane_vc_ParamLimits

0xd13c,	// (0x0002b991) list_single_number_heading_pane_vc

0xd1d8,	// (0x0002ba2d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd1d8,	// (0x0002ba2d) list_double_graphic_heading_pane_vc_g1

0xd031,	// (0x0002b886) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd031,	// (0x0002b886) list_double_graphic_heading_pane_vc_g2

0xd03d,	// (0x0002b892) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd03d,	// (0x0002b892) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa2c,	// (0x0002e281) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0002e281) list_double_graphic_heading_pane_vc_g

0xd1e4,	// (0x0002ba39) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd1e4,	// (0x0002ba39) list_double_graphic_heading_pane_vc_t1

0xd049,	// (0x0002b89e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd049,	// (0x0002b89e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0002e288) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0002e288) list_double_graphic_heading_pane_vc_t

0x5a12,	// (0x00024267) list_setting_pane_vc_g1_ParamLimits

0x5a12,	// (0x00024267) list_setting_pane_vc_g1

0x5a1e,	// (0x00024273) list_setting_pane_vc_g2_ParamLimits

0x5a1e,	// (0x00024273) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0002e07e) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0002e07e) list_setting_pane_vc_g

0x7163,	// (0x000259b8) list_setting_pane_vc_t1_ParamLimits

0x7163,	// (0x000259b8) list_setting_pane_vc_t1

0x7177,	// (0x000259cc) list_setting_pane_vc_t2_ParamLimits

0x7177,	// (0x000259cc) list_setting_pane_vc_t2

0x0001,

0xfa61,	// (0x0002e2b6) list_setting_pane_vc_t_ParamLimits

0xfa61,	// (0x0002e2b6) list_setting_pane_vc_t

0x5a80,	// (0x000242d5) set_value_pane_cp_vc_ParamLimits

0x5a80,	// (0x000242d5) set_value_pane_cp_vc

0xd031,	// (0x0002b886) list_single_number_heading_pane_vc_g1_ParamLimits

0xd031,	// (0x0002b886) list_single_number_heading_pane_vc_g1

0xd03d,	// (0x0002b892) list_single_number_heading_pane_vc_g2_ParamLimits

0xd03d,	// (0x0002b892) list_single_number_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e074) list_single_number_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e074) list_single_number_heading_pane_vc_g

0xd049,	// (0x0002b89e) list_single_number_heading_pane_vc_t1_ParamLimits

0xd049,	// (0x0002b89e) list_single_number_heading_pane_vc_t1

0xd1f8,	// (0x0002ba4d) list_single_number_heading_pane_vc_t2_ParamLimits

0xd1f8,	// (0x0002ba4d) list_single_number_heading_pane_vc_t2

0xd20c,	// (0x0002ba61) list_single_number_heading_pane_vc_t3_ParamLimits

0xd20c,	// (0x0002ba61) list_single_number_heading_pane_vc_t3

0x0002,

0xfa66,	// (0x0002e2bb) list_single_number_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0002e2bb) list_single_number_heading_pane_vc_t

0xcff7,	// (0x0002b84c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xcff7,	// (0x0002b84c) list_single_graphic_heading_pane_vc_g1

0xd031,	// (0x0002b886) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd031,	// (0x0002b886) list_single_graphic_heading_pane_vc_g4

0xd03d,	// (0x0002b892) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd03d,	// (0x0002b892) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa6d,	// (0x0002e2c2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x0002e2c2) list_single_graphic_heading_pane_vc_g

0xd049,	// (0x0002b89e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd049,	// (0x0002b89e) list_single_graphic_heading_pane_vc_t1

0xe900,	// (0x0002d155) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe900,	// (0x0002d155) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x0002e2c9) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x0002e2c9) list_single_graphic_heading_pane_vc_t

0xd031,	// (0x0002b886) list_double2_pane_vc_g1_ParamLimits

0xd031,	// (0x0002b886) list_double2_pane_vc_g1

0xd03d,	// (0x0002b892) list_double2_pane_vc_g2_ParamLimits

0xd03d,	// (0x0002b892) list_double2_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e074) list_double2_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e074) list_double2_pane_vc_g

0xe914,	// (0x0002d169) list_double2_pane_vc_t1_ParamLimits

0xe914,	// (0x0002d169) list_double2_pane_vc_t1

0xe92a,	// (0x0002d17f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe92a,	// (0x0002d17f) list_double2_large_graphic_pane_vc_g1

0xd031,	// (0x0002b886) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd031,	// (0x0002b886) list_double2_large_graphic_pane_vc_g2

0xd03d,	// (0x0002b892) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd03d,	// (0x0002b892) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa79,	// (0x0002e2ce) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x0002e2ce) list_double2_large_graphic_pane_vc_g

0xe936,	// (0x0002d18b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe936,	// (0x0002d18b) list_double2_large_graphic_pane_vc_t1

0xe94c,	// (0x0002d1a1) list_double_time_pane_vc_g1_ParamLimits

0xe94c,	// (0x0002d1a1) list_double_time_pane_vc_g1

0xe958,	// (0x0002d1ad) list_double_time_pane_vc_g2_ParamLimits

0xe958,	// (0x0002d1ad) list_double_time_pane_vc_g2

0x0001,

0xfa80,	// (0x0002e2d5) list_double_time_pane_vc_g_ParamLimits

0xfa80,	// (0x0002e2d5) list_double_time_pane_vc_g

0xe964,	// (0x0002d1b9) list_double_time_pane_vc_t1_ParamLimits

0xe964,	// (0x0002d1b9) list_double_time_pane_vc_t1

0xe97d,	// (0x0002d1d2) list_double_time_pane_vc_t2_ParamLimits

0xe97d,	// (0x0002d1d2) list_double_time_pane_vc_t2

0xe9b8,	// (0x0002d20d) list_double_time_pane_vc_t3_ParamLimits

0xe9b8,	// (0x0002d20d) list_double_time_pane_vc_t3

0xe9d0,	// (0x0002d225) list_double_time_pane_vc_t4_ParamLimits

0xe9d0,	// (0x0002d225) list_double_time_pane_vc_t4

0x0003,

0xfa85,	// (0x0002e2da) list_double_time_pane_vc_t_ParamLimits

0xfa85,	// (0x0002e2da) list_double_time_pane_vc_t

0xd031,	// (0x0002b886) list_double_pane_vc_g1_ParamLimits

0xd031,	// (0x0002b886) list_double_pane_vc_g1

0xd03d,	// (0x0002b892) list_double_pane_vc_g2_ParamLimits

0xd03d,	// (0x0002b892) list_double_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e074) list_double_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e074) list_double_pane_vc_g

0xe9e4,	// (0x0002d239) list_double_pane_vc_t1_ParamLimits

0xe9e4,	// (0x0002d239) list_double_pane_vc_t1

0xe9f6,	// (0x0002d24b) list_double_pane_vc_t2_ParamLimits

0xe9f6,	// (0x0002d24b) list_double_pane_vc_t2

0x0001,

0xfa8e,	// (0x0002e2e3) list_double_pane_vc_t_ParamLimits

0xfa8e,	// (0x0002e2e3) list_double_pane_vc_t

0xd031,	// (0x0002b886) list_double_number_pane_vc_g1_ParamLimits

0xd031,	// (0x0002b886) list_double_number_pane_vc_g1

0xd03d,	// (0x0002b892) list_double_number_pane_vc_g2_ParamLimits

0xd03d,	// (0x0002b892) list_double_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e074) list_double_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e074) list_double_number_pane_vc_g

0xea0e,	// (0x0002d263) list_double_number_pane_vc_t1_ParamLimits

0xea0e,	// (0x0002d263) list_double_number_pane_vc_t1

0xea22,	// (0x0002d277) list_double_number_pane_vc_t2_ParamLimits

0xea22,	// (0x0002d277) list_double_number_pane_vc_t2

0xe9f6,	// (0x0002d24b) list_double_number_pane_vc_t3_ParamLimits

0xe9f6,	// (0x0002d24b) list_double_number_pane_vc_t3

0x0002,

0xfa93,	// (0x0002e2e8) list_double_number_pane_vc_t_ParamLimits

0xfa93,	// (0x0002e2e8) list_double_number_pane_vc_t

0xea34,	// (0x0002d289) list_double_large_graphic_pane_vc_g1_ParamLimits

0xea34,	// (0x0002d289) list_double_large_graphic_pane_vc_g1

0xea40,	// (0x0002d295) list_double_large_graphic_pane_vc_g2_ParamLimits

0xea40,	// (0x0002d295) list_double_large_graphic_pane_vc_g2

0xd03d,	// (0x0002b892) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd03d,	// (0x0002b892) list_double_large_graphic_pane_vc_g3

0xea4f,	// (0x0002d2a4) list_double_large_graphic_pane_vc_g4_ParamLimits

0xea4f,	// (0x0002d2a4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9a,	// (0x0002e2ef) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9a,	// (0x0002e2ef) list_double_large_graphic_pane_vc_g

0xea5b,	// (0x0002d2b0) list_double_large_graphic_pane_vc_t1_ParamLimits

0xea5b,	// (0x0002d2b0) list_double_large_graphic_pane_vc_t1

0xea6d,	// (0x0002d2c2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xea6d,	// (0x0002d2c2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa3,	// (0x0002e2f8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa3,	// (0x0002e2f8) list_double_large_graphic_pane_vc_t

0xd031,	// (0x0002b886) list_double_heading_pane_vc_g1_ParamLimits

0xd031,	// (0x0002b886) list_double_heading_pane_vc_g1

0xd03d,	// (0x0002b892) list_double_heading_pane_vc_g2_ParamLimits

0xd03d,	// (0x0002b892) list_double_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e074) list_double_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e074) list_double_heading_pane_vc_g

0xea86,	// (0x0002d2db) list_double_heading_pane_vc_t1_ParamLimits

0xea86,	// (0x0002d2db) list_double_heading_pane_vc_t1

0xd049,	// (0x0002b89e) list_double_heading_pane_vc_t2_ParamLimits

0xd049,	// (0x0002b89e) list_double_heading_pane_vc_t2

0x0001,

0xfaa8,	// (0x0002e2fd) list_double_heading_pane_vc_t_ParamLimits

0xfaa8,	// (0x0002e2fd) list_double_heading_pane_vc_t

0xea9a,	// (0x0002d2ef) list_double_graphic_pane_vc_g1_ParamLimits

0xea9a,	// (0x0002d2ef) list_double_graphic_pane_vc_g1

0xeaaa,	// (0x0002d2ff) list_double_graphic_pane_vc_g2_ParamLimits

0xeaaa,	// (0x0002d2ff) list_double_graphic_pane_vc_g2

0xeab9,	// (0x0002d30e) list_double_graphic_pane_vc_g3_ParamLimits

0xeab9,	// (0x0002d30e) list_double_graphic_pane_vc_g3

0x0002,

0xfaad,	// (0x0002e302) list_double_graphic_pane_vc_g_ParamLimits

0xfaad,	// (0x0002e302) list_double_graphic_pane_vc_g

0xeac5,	// (0x0002d31a) list_double_graphic_pane_vc_t1_ParamLimits

0xeac5,	// (0x0002d31a) list_double_graphic_pane_vc_t1

0xe9f6,	// (0x0002d24b) list_double_graphic_pane_vc_t2_ParamLimits

0xe9f6,	// (0x0002d24b) list_double_graphic_pane_vc_t2

0x0001,

0xfab4,	// (0x0002e309) list_double_graphic_pane_vc_t_ParamLimits

0xfab4,	// (0x0002e309) list_double_graphic_pane_vc_t

0x8a64,	// (0x000272b9) aid_size_cell_fastswap

0x8a6c,	// (0x000272c1) aid_size_cell_touch_ParamLimits

0x8a6c,	// (0x000272c1) aid_size_cell_touch

0x8cd1,	// (0x00027526) popup_fast_swap_wide_window_ParamLimits

0x8cd1,	// (0x00027526) popup_fast_swap_wide_window

0x8ddb,	// (0x00027630) touch_pane_ParamLimits

0x8ddb,	// (0x00027630) touch_pane

0x4a07,	// (0x0002325c) button_value_adjust_pane_cp2

0xccef,	// (0x0002b544) button_value_adjust_pane_cp4

0xcd0f,	// (0x0002b564) form_field_data_pane_cp2

0xcd2e,	// (0x0002b583) form_field_data_wide_pane_cp2

0x4d66,	// (0x000235bb) bg_scroll_pane_ParamLimits

0x9481,	// (0x00027cd6) scroll_handle_pane_ParamLimits

0x9495,	// (0x00027cea) scroll_sc2_down_pane_ParamLimits

0x9495,	// (0x00027cea) scroll_sc2_down_pane

0x4d97,	// (0x000235ec) scroll_sc2_up_pane_ParamLimits

0x4d97,	// (0x000235ec) scroll_sc2_up_pane

0xad1b,	// (0x00029570) grid_wheel_folder_pane_g1_ParamLimits

0xad1b,	// (0x00029570) grid_wheel_folder_pane_g1

0x96fd,	// (0x00027f52) clock_nsta_pane_cp2_ParamLimits

0x96fd,	// (0x00027f52) clock_nsta_pane_cp2

0x97b2,	// (0x00028007) listscroll_midp_pane_ParamLimits

0x97be,	// (0x00028013) midp_canvas_pane

0x564a,	// (0x00023e9f) nsta_clock_indic_pane

0x5682,	// (0x00023ed7) listscroll_form_pane_vc

0x568a,	// (0x00023edf) listscroll_set_pane_vc_ParamLimits

0x568a,	// (0x00023edf) listscroll_set_pane_vc

0x9ff5,	// (0x0002884a) clock_nsta_pane

0xa002,	// (0x00028857) indicator_nsta_pane

0x5908,	// (0x0002415d) bg_popup_sub_pane_cp2_ParamLimits

0x591c,	// (0x00024171) find_pane_cp2_ParamLimits

0x591c,	// (0x00024171) find_pane_cp2

0x5932,	// (0x00024187) grid_toobar_pane_ParamLimits

0x5a8e,	// (0x000242e3) list_form_gen_pane_vc_ParamLimits

0x5a8e,	// (0x000242e3) list_form_gen_pane_vc

0x5aa4,	// (0x000242f9) scroll_pane_cp8_vc_ParamLimits

0x5aa4,	// (0x000242f9) scroll_pane_cp8_vc

0x5af4,	// (0x00024349) data_form_wide_pane_vc_ParamLimits

0x5af4,	// (0x00024349) data_form_wide_pane_vc

0x5b00,	// (0x00024355) form_field_data_wide_pane_vc_g1

0x5b08,	// (0x0002435d) form_field_data_wide_pane_vc_t1_ParamLimits

0x5b08,	// (0x0002435d) form_field_data_wide_pane_vc_t1

0x4a1b,	// (0x00023270) input_focus_pane_cp6_vc_ParamLimits

0x4a1b,	// (0x00023270) input_focus_pane_cp6_vc

0xa493,	// (0x00028ce8) list_midp_pane_ParamLimits

0xa49f,	// (0x00028cf4) scroll_pane_cp16_ParamLimits

0xa49f,	// (0x00028cf4) scroll_pane_cp16

0x5d6f,	// (0x000245c4) button_value_adjust_pane_ParamLimits

0x5d6f,	// (0x000245c4) button_value_adjust_pane

0xa876,	// (0x000290cb) button_value_adjust_pane_cp6_ParamLimits

0xa876,	// (0x000290cb) button_value_adjust_pane_cp6

0xa9a0,	// (0x000291f5) settings_code_pane_cp_ParamLimits

0xa9a0,	// (0x000291f5) settings_code_pane_cp

0x43b4,	// (0x00022c09) cell_touch_pane_g1

0x43b4,	// (0x00022c09) cell_touch_pane_g2

0x0001,

0xf747,	// (0x0002df9c) cell_touch_pane_g

0xabe7,	// (0x0002943c) cell_touch_pane_cp_ParamLimits

0xabe7,	// (0x0002943c) cell_touch_pane_cp

0xabf7,	// (0x0002944c) cell_touch_pane_ParamLimits

0xabf7,	// (0x0002944c) cell_touch_pane

0x43b4,	// (0x00022c09) scroll_sc2_down_pane_g1

0x43b4,	// (0x00022c09) scroll_sc2_up_pane_g1

0x43be,	// (0x00022c13) bg_set_opt_pane_cp4_vc

0x6f5f,	// (0x000257b4) list_set_graphic_pane_vc_g1_ParamLimits

0x6f5f,	// (0x000257b4) list_set_graphic_pane_vc_g1

0x6f6b,	// (0x000257c0) list_set_graphic_pane_vc_g2_ParamLimits

0x6f6b,	// (0x000257c0) list_set_graphic_pane_vc_g2

0x0001,

0xfa38,	// (0x0002e28d) list_set_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0002e28d) list_set_graphic_pane_vc_g

0x6f77,	// (0x000257cc) text_primary_small_cp13_vc_ParamLimits

0x6f77,	// (0x000257cc) text_primary_small_cp13_vc

0x6f8f,	// (0x000257e4) list_set_graphic_pane_vc_ParamLimits

0x6f8f,	// (0x000257e4) list_set_graphic_pane_vc

0x43be,	// (0x00022c13) input_focus_pane_cp2_vc

0x43b4,	// (0x00022c09) setting_code_pane_vc_g1

0x6fa3,	// (0x000257f8) setting_code_pane_vc_t1

0x6fb1,	// (0x00025806) set_text_pane_vc_t1_ParamLimits

0x6fb1,	// (0x00025806) set_text_pane_vc_t1

0x43be,	// (0x00022c13) input_focus_pane_cp1_vc

0x6fcc,	// (0x00025821) list_set_text_pane_vc

0x43b4,	// (0x00022c09) setting_text_pane_vc_g1

0x43be,	// (0x00022c13) bg_set_opt_pane_cp2_vc

0x6fd6,	// (0x0002582b) setting_slider_graphic_pane_vc_g1

0x6fde,	// (0x00025833) setting_slider_graphic_pane_vc_t1

0x6fec,	// (0x00025841) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002e292) setting_slider_graphic_pane_vc_t

0x6ffa,	// (0x0002584f) slider_set_pane_cp_vc

0x7002,	// (0x00025857) slider_set_pane_vc_g1

0x700b,	// (0x00025860) slider_set_pane_vc_g2

0x0006,

0xfa42,	// (0x0002e297) slider_set_pane_vc_g

0x4a82,	// (0x000232d7) set_opt_bg_pane_g1_copy1

0x4a8a,	// (0x000232df) set_opt_bg_pane_g2_copy1

0x7037,	// (0x0002588c) set_opt_bg_pane_g3_copy1

0x4a9a,	// (0x000232ef) set_opt_bg_pane_g4_copy1

0x4aa2,	// (0x000232f7) set_opt_bg_pane_g5_copy1

0x4aaa,	// (0x000232ff) set_opt_bg_pane_g6_copy1

0x7041,	// (0x00025896) set_opt_bg_pane_g7_copy1

0x7049,	// (0x0002589e) set_opt_bg_pane_g8_copy1

0x7053,	// (0x000258a8) set_opt_bg_pane_g9_copy1

0x43be,	// (0x00022c13) bg_set_opt_pane_cp_vc

0x705d,	// (0x000258b2) setting_slider_pane_vc_t1

0x6fde,	// (0x00025833) setting_slider_pane_vc_t2

0x6fec,	// (0x00025841) setting_slider_pane_vc_t3

0x0002,

0xfa51,	// (0x0002e2a6) setting_slider_pane_vc_t

0x6ffa,	// (0x0002584f) slider_set_pane_vc

0xa4e5,	// (0x00028d3a) volume_set_pane_vc_g1

0xa4ee,	// (0x00028d43) volume_set_pane_vc_g2

0xa4f7,	// (0x00028d4c) volume_set_pane_vc_g3

0xa500,	// (0x00028d55) volume_set_pane_vc_g4

0xa509,	// (0x00028d5e) volume_set_pane_vc_g5

0xa512,	// (0x00028d67) volume_set_pane_vc_g6

0xa51b,	// (0x00028d70) volume_set_pane_vc_g7

0xa524,	// (0x00028d79) volume_set_pane_vc_g8

0xa52d,	// (0x00028d82) volume_set_pane_vc_g9

0xa536,	// (0x00028d8b) volume_set_pane_vc_g10

0x0009,

0xf8ef,	// (0x0002e144) volume_set_pane_vc_g

0x706c,	// (0x000258c1) volume_set_pane_vc

0x7074,	// (0x000258c9) button_value_adjust_pane_cp1_vc

0x707e,	// (0x000258d3) list_highlight_pane_cp2_vc

0x7087,	// (0x000258dc) list_set_pane_vc_ParamLimits

0x7087,	// (0x000258dc) list_set_pane_vc

0x70f1,	// (0x00025946) main_pane_set_vc_t1_ParamLimits

0x70f1,	// (0x00025946) main_pane_set_vc_t1

0x7106,	// (0x0002595b) main_pane_set_vc_t2_ParamLimits

0x7106,	// (0x0002595b) main_pane_set_vc_t2

0x7118,	// (0x0002596d) main_pane_set_vc_t3_ParamLimits

0x7118,	// (0x0002596d) main_pane_set_vc_t3

0x712c,	// (0x00025981) main_pane_set_vc_t4_ParamLimits

0x712c,	// (0x00025981) main_pane_set_vc_t4

0x0003,

0xfa58,	// (0x0002e2ad) main_pane_set_vc_t_ParamLimits

0xfa58,	// (0x0002e2ad) main_pane_set_vc_t

0x7140,	// (0x00025995) setting_code_pane_vc_ParamLimits

0x7140,	// (0x00025995) setting_code_pane_vc

0x7151,	// (0x000259a6) setting_slider_graphic_pane_vc

0x7151,	// (0x000259a6) setting_slider_pane_vc

0x7151,	// (0x000259a6) setting_text_pane_vc

0x7151,	// (0x000259a6) setting_volume_pane_vc

0x715b,	// (0x000259b0) scroll_pane_cp121_vc

0x49f5,	// (0x0002324a) set_content_pane_vc

0x7199,	// (0x000259ee) button_value_adjust_pane_g1

0x71a2,	// (0x000259f7) button_value_adjust_pane_g2

0x0001,

0xfab9,	// (0x0002e30e) button_value_adjust_pane_g

0x71ab,	// (0x00025a00) form_field_slider_wide_pane_vc_t1_ParamLimits

0x71ab,	// (0x00025a00) form_field_slider_wide_pane_vc_t1

0x71bf,	// (0x00025a14) form_field_slider_wide_pane_vc_t2_ParamLimits

0x71bf,	// (0x00025a14) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabe,	// (0x0002e313) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabe,	// (0x0002e313) form_field_slider_wide_pane_vc_t

0x440c,	// (0x00022c61) input_focus_pane_cp10_vc_ParamLimits

0x440c,	// (0x00022c61) input_focus_pane_cp10_vc

0x71d1,	// (0x00025a26) slider_cont_pane_cp1_vc_ParamLimits

0x71d1,	// (0x00025a26) slider_cont_pane_cp1_vc

0x7002,	// (0x00025857) slider_form_pane_g1_cp2

0x700b,	// (0x00025860) slider_form_pane_g2_cp2

0x71ea,	// (0x00025a3f) form_field_slider_pane_vc_t3

0x71f8,	// (0x00025a4d) form_field_slider_pane_vc_t4

0x7206,	// (0x00025a5b) slider_form_pane_vc_ParamLimits

0x7206,	// (0x00025a5b) slider_form_pane_vc

0x7213,	// (0x00025a68) form_field_slider_pane_vc_t1_ParamLimits

0x7213,	// (0x00025a68) form_field_slider_pane_vc_t1

0x71bf,	// (0x00025a14) form_field_slider_pane_vc_t2_ParamLimits

0x71bf,	// (0x00025a14) form_field_slider_pane_vc_t2

0x0001,

0xface,	// (0x0002e323) form_field_slider_pane_vc_t_ParamLimits

0xface,	// (0x0002e323) form_field_slider_pane_vc_t

0x440c,	// (0x00022c61) input_focus_pane_cp9_vc_ParamLimits

0x440c,	// (0x00022c61) input_focus_pane_cp9_vc

0x722f,	// (0x00025a84) slider_cont_pane_vc_ParamLimits

0x722f,	// (0x00025a84) slider_cont_pane_vc

0x7241,	// (0x00025a96) list_form_graphic_pane_cp_vc_ParamLimits

0x7241,	// (0x00025a96) list_form_graphic_pane_cp_vc

0x5b00,	// (0x00024355) form_field_popup_wide_pane_vc_g1

0x7256,	// (0x00025aab) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7256,	// (0x00025aab) form_field_popup_wide_pane_vc_t1

0x4a1b,	// (0x00023270) input_focus_pane_cp8_vc_ParamLimits

0x4a1b,	// (0x00023270) input_focus_pane_cp8_vc

0x726d,	// (0x00025ac2) list_form_wide_pane_vc_ParamLimits

0x726d,	// (0x00025ac2) list_form_wide_pane_vc

0x7279,	// (0x00025ace) list_form_graphic_pane_vc_g1

0x7281,	// (0x00025ad6) list_form_graphic_pane_vc_t1_ParamLimits

0x7281,	// (0x00025ad6) list_form_graphic_pane_vc_t1

0x441a,	// (0x00022c6f) list_highlight_pane_cp5_vc_ParamLimits

0x441a,	// (0x00022c6f) list_highlight_pane_cp5_vc

0x729d,	// (0x00025af2) list_form_graphic_pane_vc_ParamLimits

0x729d,	// (0x00025af2) list_form_graphic_pane_vc

0x5b00,	// (0x00024355) form_field_popup_pane_vc_g1

0x72b3,	// (0x00025b08) form_field_popup_pane_vc_t1_ParamLimits

0x72b3,	// (0x00025b08) form_field_popup_pane_vc_t1

0x4a1b,	// (0x00023270) input_focus_pane_cp7_vc_ParamLimits

0x4a1b,	// (0x00023270) input_focus_pane_cp7_vc

0x72ca,	// (0x00025b1f) list_form_pane_vc_ParamLimits

0x72ca,	// (0x00025b1f) list_form_pane_vc

0x72d6,	// (0x00025b2b) data_form_pane_vc_t1_ParamLimits

0x72d6,	// (0x00025b2b) data_form_pane_vc_t1

0x4a82,	// (0x000232d7) input_focus_pane_vc_g1

0x4a8a,	// (0x000232df) input_focus_pane_vc_g2

0x4a92,	// (0x000232e7) input_focus_pane_vc_g3

0x4a9a,	// (0x000232ef) input_focus_pane_vc_g4

0x4aa2,	// (0x000232f7) input_focus_pane_vc_g5

0x4aaa,	// (0x000232ff) input_focus_pane_vc_g6

0x4ab2,	// (0x00023307) input_focus_pane_vc_g7

0x4aba,	// (0x0002330f) input_focus_pane_vc_g8

0x4ac2,	// (0x00023317) input_focus_pane_vc_g9

0x43b4,	// (0x00022c09) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0002df25) input_focus_pane_vc_g

0x5af4,	// (0x00024349) data_form_pane_vc_ParamLimits

0x5af4,	// (0x00024349) data_form_pane_vc

0x5b00,	// (0x00024355) form_field_data_pane_vc_g1

0x72f1,	// (0x00025b46) form_field_data_pane_vc_t1_ParamLimits

0x72f1,	// (0x00025b46) form_field_data_pane_vc_t1

0x4a1b,	// (0x00023270) input_focus_pane_vc_ParamLimits

0x4a1b,	// (0x00023270) input_focus_pane_vc

0x730b,	// (0x00025b60) button_value_adjust_pane_cp3_vc

0x7313,	// (0x00025b68) button_value_adjust_pane_cp5_vc

0x731b,	// (0x00025b70) form_field_data_pane_vc_ParamLimits

0x731b,	// (0x00025b70) form_field_data_pane_vc

0x7332,	// (0x00025b87) form_field_data_pane_vc_cp2

0x733a,	// (0x00025b8f) form_field_data_wide_pane_vc_ParamLimits

0x733a,	// (0x00025b8f) form_field_data_wide_pane_vc

0x7350,	// (0x00025ba5) form_field_data_wide_pane_vc_cp2

0x7358,	// (0x00025bad) form_field_popup_pane_vc_ParamLimits

0x7358,	// (0x00025bad) form_field_popup_pane_vc

0x736f,	// (0x00025bc4) form_field_popup_wide_pane_vc_ParamLimits

0x736f,	// (0x00025bc4) form_field_popup_wide_pane_vc

0x7385,	// (0x00025bda) form_field_slider_pane_vc_ParamLimits

0x7385,	// (0x00025bda) form_field_slider_pane_vc

0x7398,	// (0x00025bed) form_field_slider_wide_pane_vc_ParamLimits

0x7398,	// (0x00025bed) form_field_slider_wide_pane_vc

0xac09,	// (0x0002945e) grid_touch_1_pane_ParamLimits

0xac09,	// (0x0002945e) grid_touch_1_pane

0xac15,	// (0x0002946a) grid_touch_2_pane_ParamLimits

0xac15,	// (0x0002946a) grid_touch_2_pane

0x563c,	// (0x00023e91) touch_pane_g1_ParamLimits

0x563c,	// (0x00023e91) touch_pane_g1

0x73b9,	// (0x00025c0e) cell_app_pane_cp_wide_ParamLimits

0x73b9,	// (0x00025c0e) cell_app_pane_cp_wide

0x73ca,	// (0x00025c1f) grid_popup_fast_wide_pane_ParamLimits

0x73ca,	// (0x00025c1f) grid_popup_fast_wide_pane

0x73de,	// (0x00025c33) scroll_pane_cp19_ParamLimits

0x73de,	// (0x00025c33) scroll_pane_cp19

0x43be,	// (0x00022c13) bg_popup_window_pane_cp20

0x73f2,	// (0x00025c47) listscroll_popup_fast_wide_pane

0x441a,	// (0x00022c6f) grid_indicator_nsta_pane

0x73fa,	// (0x00025c4f) clock_nsta_pane_g1

0x7403,	// (0x00025c58) clock_nsta_pane_t1

0xac2d,	// (0x00029482) cell_indicator_nsta_pane_ParamLimits

0xac2d,	// (0x00029482) cell_indicator_nsta_pane

0x73ab,	// (0x00025c00) cell_indicator_nsta_pane_g1

0xac65,	// (0x000294ba) cell_indicator_nsta_pane_g2

0x0001,

0xfad8,	// (0x0002e32d) cell_indicator_nsta_pane_g

0x741f,	// (0x00025c74) clock_nsta_pane_cp

0x7427,	// (0x00025c7c) indicator_nsta_pane_cp

0x742f,	// (0x00025c84) nsta_clock_indic_pane_g1

0x4456,	// (0x00022cab) grid_indicator_pane

0x4e8c,	// (0x000236e1) scroll_pane_cp29

0x964c,	// (0x00027ea1) indicator_nsta_pane_cp2_ParamLimits

0x964c,	// (0x00027ea1) indicator_nsta_pane_cp2

0x441a,	// (0x00022c6f) main_apps_wheel_pane

0x5c1c,	// (0x00024471) form_midp_field_text_pane_ParamLimits

0x5d4f,	// (0x000245a4) scroll_bar_cp050_ParamLimits

0x7467,	// (0x00025cbc) cell_indicator_pane_ParamLimits

0x7467,	// (0x00025cbc) cell_indicator_pane

0x747e,	// (0x00025cd3) cell_indicator_pane_g1

0xac7b,	// (0x000294d0) grid_wheel_folder_pane_ParamLimits

0xac7b,	// (0x000294d0) grid_wheel_folder_pane

0xac8f,	// (0x000294e4) list_wheel_apps_pane_ParamLimits

0xac8f,	// (0x000294e4) list_wheel_apps_pane

0xaca0,	// (0x000294f5) main_apps_wheel_pane_g1_ParamLimits

0xaca0,	// (0x000294f5) main_apps_wheel_pane_g1

0xacb4,	// (0x00029509) main_apps_wheel_pane_g2_ParamLimits

0xacb4,	// (0x00029509) main_apps_wheel_pane_g2

0x0001,

0xfae7,	// (0x0002e33c) main_apps_wheel_pane_g_ParamLimits

0xfae7,	// (0x0002e33c) main_apps_wheel_pane_g

0xaccc,	// (0x00029521) main_apps_wheel_pane_t1_ParamLimits

0xaccc,	// (0x00029521) main_apps_wheel_pane_t1

0xacef,	// (0x00029544) list_wheel_apps_pane_g1

0xacf7,	// (0x0002954c) list_wheel_apps_pane_g2

0xacff,	// (0x00029554) list_wheel_apps_pane_g3

0xad07,	// (0x0002955c) list_wheel_apps_pane_g4

0xad11,	// (0x00029566) list_wheel_apps_pane_g5

0x0004,

0xfaec,	// (0x0002e341) list_wheel_apps_pane_g

0x52c0,	// (0x00023b15) navi_icon_text_pane

0x9f3d,	// (0x00028792) aid_fill_nsta

0xad34,	// (0x00029589) navi_icon_text_pane_g1

0xad43,	// (0x00029598) navi_icon_text_pane_t1

0x979a,	// (0x00027fef) list_set_graphic_pane_t1_ParamLimits

0x979a,	// (0x00027fef) list_set_graphic_pane_t1

0x6433,	// (0x00024c88) popup_midp_note_alarm_window_t6_ParamLimits

0x6433,	// (0x00024c88) popup_midp_note_alarm_window_t6

0x6445,	// (0x00024c9a) popup_midp_note_alarm_window_t7_ParamLimits

0x6445,	// (0x00024c9a) popup_midp_note_alarm_window_t7

0x6457,	// (0x00024cac) popup_midp_note_alarm_window_t8_ParamLimits

0x6457,	// (0x00024cac) popup_midp_note_alarm_window_t8

0x6469,	// (0x00024cbe) popup_midp_note_alarm_window_t9_ParamLimits

0x6469,	// (0x00024cbe) popup_midp_note_alarm_window_t9

0x647b,	// (0x00024cd0) popup_midp_note_alarm_window_t10_ParamLimits

0x647b,	// (0x00024cd0) popup_midp_note_alarm_window_t10

0x648d,	// (0x00024ce2) popup_midp_note_alarm_window_t11_ParamLimits

0x648d,	// (0x00024ce2) popup_midp_note_alarm_window_t11

0x649f,	// (0x00024cf4) scroll_pane_cp17_ParamLimits

0x649f,	// (0x00024cf4) scroll_pane_cp17

0xa4e5,	// (0x00028d3a) volume_small_pane_cp_g1

0xad58,	// (0x000295ad) volume_small_pane_cp_g2

0xad61,	// (0x000295b6) volume_small_pane_cp_g3

0xad6a,	// (0x000295bf) volume_small_pane_cp_g4

0xad73,	// (0x000295c8) volume_small_pane_cp_g5

0xad7c,	// (0x000295d1) volume_small_pane_cp_g6

0xad85,	// (0x000295da) volume_small_pane_cp_g7

0xad8e,	// (0x000295e3) volume_small_pane_cp_g8

0xad97,	// (0x000295ec) volume_small_pane_cp_g9

0xada0,	// (0x000295f5) volume_small_pane_cp_g10

0x546a,	// (0x00023cbf) midp_ticker_pane_g1_ParamLimits

0x5476,	// (0x00023ccb) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x0002dfed) midp_ticker_pane_g_ParamLimits

0x9863,	// (0x000280b8) midp_ticker_pane_t1_ParamLimits

0x9f53,	// (0x000287a8) aid_fill_nsta_2

0x5d3b,	// (0x00024590) list_form2_midp_pane

0x6b74,	// (0x000253c9) midp_editing_number_pane_ParamLimits

0x6b83,	// (0x000253d8) midp_ticker_pane_ParamLimits

0x7488,	// (0x00025cdd) form2_midp_field_pane

0x7490,	// (0x00025ce5) scroll_pane_cp51

0x74b0,	// (0x00025d05) form2_midp_button_pane_ParamLimits

0x74b0,	// (0x00025d05) form2_midp_button_pane

0x74c2,	// (0x00025d17) form2_midp_content_pane_ParamLimits

0x74c2,	// (0x00025d17) form2_midp_content_pane

0x74dc,	// (0x00025d31) form2_midp_field_choice_group_pane

0x74e4,	// (0x00025d39) form2_midp_field_pane_g1

0x74ec,	// (0x00025d41) form2_midp_field_pane_g2

0x74f4,	// (0x00025d49) form2_midp_field_pane_g3

0x74fc,	// (0x00025d51) form2_midp_field_pane_g4

0x0003,

0xfb11,	// (0x0002e366) form2_midp_field_pane_g

0x7504,	// (0x00025d59) form2_midp_gauge_slider_pane

0x750c,	// (0x00025d61) form2_midp_gauge_wait_pane

0x7514,	// (0x00025d69) form2_midp_image_pane_ParamLimits

0x7514,	// (0x00025d69) form2_midp_image_pane

0x752f,	// (0x00025d84) form2_midp_label_pane_ParamLimits

0x752f,	// (0x00025d84) form2_midp_label_pane

0xadc5,	// (0x0002961a) form2_midp_label_pane_cp_ParamLimits

0xadc5,	// (0x0002961a) form2_midp_label_pane_cp

0x7548,	// (0x00025d9d) form2_midp_string_pane_ParamLimits

0x7548,	// (0x00025d9d) form2_midp_string_pane

0xead7,	// (0x0002d32c) form2_midp_text_pane_ParamLimits

0xead7,	// (0x0002d32c) form2_midp_text_pane

0x755a,	// (0x00025daf) form2_midp_time_pane

0x756a,	// (0x00025dbf) input_focus_pane_cp51_ParamLimits

0x756a,	// (0x00025dbf) input_focus_pane_cp51

0x7582,	// (0x00025dd7) form2_midp_label_pane_t1_ParamLimits

0x7582,	// (0x00025dd7) form2_midp_label_pane_t1

0xeaf2,	// (0x0002d347) form2_mdip_text_pane_t1_ParamLimits

0xeaf2,	// (0x0002d347) form2_mdip_text_pane_t1

0xeb10,	// (0x0002d365) form2_midp_time_pane_t1

0x75cb,	// (0x00025e20) form2_midp_gauge_slider_pane_t1

0xade6,	// (0x0002963b) form2_midp_gauge_slider_pane_t2

0xadf8,	// (0x0002964d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1a,	// (0x0002e36f) form2_midp_gauge_slider_pane_t

0x75dd,	// (0x00025e32) form2_midp_slider_pane

0x75e9,	// (0x00025e3e) form2_midp_gauge_wait_pane_t1

0x75f7,	// (0x00025e4c) form2_midp_wait_pane_ParamLimits

0x75f7,	// (0x00025e4c) form2_midp_wait_pane

0xa3c2,	// (0x00028c17) list_single_2graphic_pane_cp4_ParamLimits

0xa3c2,	// (0x00028c17) list_single_2graphic_pane_cp4

0xae0a,	// (0x0002965f) list_single_midp_graphic_pane_cp_ParamLimits

0xae0a,	// (0x0002965f) list_single_midp_graphic_pane_cp

0x43be,	// (0x00022c13) list_highlight_pane_cp20

0x7622,	// (0x00025e77) list_single_2graphic_pane_g1_cp4

0x762a,	// (0x00025e7f) list_single_2graphic_pane_g2_cp4

0x7632,	// (0x00025e87) list_single_2graphic_pane_t1_cp4

0x441a,	// (0x00022c6f) list_highlight_pane_cp21

0x7641,	// (0x00025e96) list_single_midp_graphic_pane_g4_cp

0x7650,	// (0x00025ea5) list_single_midp_graphic_pane_t1_cp

0xae39,	// (0x0002968e) form2_mdip_string_pane_t1_ParamLimits

0xae39,	// (0x0002968e) form2_mdip_string_pane_t1

0x43be,	// (0x00022c13) bg_wml_button_pane_cp2

0x43b4,	// (0x00022c09) form2_midp_image_pane_g1

0xcac2,	// (0x0002b317) list_double_large_graphic_pane_g5_ParamLimits

0xcac2,	// (0x0002b317) list_double_large_graphic_pane_g5

0x97b2,	// (0x00028007) midp_form_pane_ParamLimits

0x441a,	// (0x00022c6f) main_apps_wheel_pane_ParamLimits

0x9da7,	// (0x000285fc) popup_preview_window_ParamLimits

0x9da7,	// (0x000285fc) popup_preview_window

0x5769,	// (0x00023fbe) popup_touch_info_window_ParamLimits

0x5769,	// (0x00023fbe) popup_touch_info_window

0x5787,	// (0x00023fdc) popup_touch_menu_window_ParamLimits

0x5787,	// (0x00023fdc) popup_touch_menu_window

0x43aa,	// (0x00022bff) bg_popup_sub_pane_cp6

0x7665,	// (0x00025eba) list_touch_menu_pane

0x766d,	// (0x00025ec2) list_single_touch_menu_pane_ParamLimits

0x766d,	// (0x00025ec2) list_single_touch_menu_pane

0x7684,	// (0x00025ed9) list_single_touch_menu_pane_t1

0x441a,	// (0x00022c6f) bg_popup_sub_pane_cp7_ParamLimits

0x441a,	// (0x00022c6f) bg_popup_sub_pane_cp7

0x7692,	// (0x00025ee7) heading_sub_pane

0x769a,	// (0x00025eef) list_touch_info_pane_ParamLimits

0x769a,	// (0x00025eef) list_touch_info_pane

0x76a9,	// (0x00025efe) list_single_touch_info_pane_ParamLimits

0x76a9,	// (0x00025efe) list_single_touch_info_pane

0x76bb,	// (0x00025f10) list_single_touch_info_pane_t1

0x76c9,	// (0x00025f1e) list_single_touch_info_pane_t2

0x0001,

0xfb28,	// (0x0002e37d) list_single_touch_info_pane_t

0x5440,	// (0x00023c95) bg_popup_heading_pane_cp

0x76d7,	// (0x00025f2c) heading_sub_pane_t1

0x5aba,	// (0x0002430f) bg_popup_preview_window_pane_cp_ParamLimits

0x5aba,	// (0x0002430f) bg_popup_preview_window_pane_cp

0x7692,	// (0x00025ee7) heading_preview_pane

0x769a,	// (0x00025eef) list_preview_pane_ParamLimits

0x769a,	// (0x00025eef) list_preview_pane

0x76e5,	// (0x00025f3a) popup_preview_window_g1

0x76a9,	// (0x00025efe) list_single_preview_pane_ParamLimits

0x76a9,	// (0x00025efe) list_single_preview_pane

0x76ed,	// (0x00025f42) list_single_preview_pane_g1

0x76f5,	// (0x00025f4a) list_single_preview_pane_t1

0x76bb,	// (0x00025f10) list_single_preview_pane_t2

0x0001,

0xfb2d,	// (0x0002e382) list_single_preview_pane_t

0x7703,	// (0x00025f58) bg_popup_heading_pane_cp2_ParamLimits

0x7703,	// (0x00025f58) bg_popup_heading_pane_cp2

0x7719,	// (0x00025f6e) heading_preview_pane_g1

0x7721,	// (0x00025f76) heading_preview_pane_t1_ParamLimits

0x7721,	// (0x00025f76) heading_preview_pane_t1

0x446d,	// (0x00022cc2) soft_indicator_pane_t1_ParamLimits

0x498e,	// (0x000231e3) scroll_pane_ParamLimits

0x4d8e,	// (0x000235e3) scroll_sc2_left_pane

0x4d85,	// (0x000235da) scroll_sc2_right_pane

0x4dad,	// (0x00023602) scroll_bg_pane_g1_ParamLimits

0x4dc2,	// (0x00023617) scroll_bg_pane_g2_ParamLimits

0x4dda,	// (0x0002362f) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x0002df7c) scroll_bg_pane_g_ParamLimits

0x4dad,	// (0x00023602) scroll_handle_pane_g1_ParamLimits

0x4dfc,	// (0x00023651) scroll_handle_pane_g2_ParamLimits

0x4dda,	// (0x0002362f) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x0002df83) scroll_handle_pane_g_ParamLimits

0x56aa,	// (0x00023eff) popup_choice_list_window_ParamLimits

0x56aa,	// (0x00023eff) popup_choice_list_window

0x5914,	// (0x00024169) choice_list_pane

0x5996,	// (0x000241eb) cell_toolbar_pane_t1

0x59be,	// (0x00024213) toolbar_button_pane_ParamLimits

0x68d7,	// (0x0002512c) ai_gene_pane_1_t2_ParamLimits

0x68d7,	// (0x0002512c) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0002e1a0) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0002e1a0) ai_gene_pane_1_t

0x773e,	// (0x00025f93) scroll_sc2_left_pane_g1

0x773e,	// (0x00025f93) scroll_sc2_right_pane_g1

0x4b73,	// (0x000233c8) bg_popup_sub_pane_cp10

0x7748,	// (0x00025f9d) list_choice_list_pane

0x775f,	// (0x00025fb4) list_single_choice_list_pane_ParamLimits

0x775f,	// (0x00025fb4) list_single_choice_list_pane

0x7773,	// (0x00025fc8) list_single_choice_list_pane_g1

0x777b,	// (0x00025fd0) list_single_choice_list_pane_t1_ParamLimits

0x777b,	// (0x00025fd0) list_single_choice_list_pane_t1

0x7790,	// (0x00025fe5) choice_list_pane_g1

0x7798,	// (0x00025fed) choice_list_pane_t1

0x43aa,	// (0x00022bff) input_focus_pane_cp11

0x4ce8,	// (0x0002353d) title_pane_stacon_g2_ParamLimits

0x4ce8,	// (0x0002353d) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x0002df62) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x0002df62) title_pane_stacon_g

0x5440,	// (0x00023c95) cursor_press_pane

0x9b4c,	// (0x000283a1) popup_fep_hwr_window_ParamLimits

0x9b4c,	// (0x000283a1) popup_fep_hwr_window

0x5700,	// (0x00023f55) popup_fep_vkb_window_ParamLimits

0x5700,	// (0x00023f55) popup_fep_vkb_window

0x77a6,	// (0x00025ffb) cursor_press_pane_g1

0x0002,

0xfb56,	// (0x0002e3ab) fep_vkb_side_pane_g_ParamLimits

0xaf6b,	// (0x000297c0) fep_hwr_candidate_pane_ParamLimits

0xaf6b,	// (0x000297c0) fep_hwr_candidate_pane

0xaf95,	// (0x000297ea) fep_hwr_side_pane_ParamLimits

0xaf95,	// (0x000297ea) fep_hwr_side_pane

0xafb5,	// (0x0002980a) fep_hwr_top_pane_ParamLimits

0xafb5,	// (0x0002980a) fep_hwr_top_pane

0xafcd,	// (0x00029822) fep_hwr_write_pane_ParamLimits

0xafcd,	// (0x00029822) fep_hwr_write_pane

0xfb56,	// (0x0002e3ab) fep_vkb_side_pane_g

0x77c0,	// (0x00026015) fep_hwr_top_pane_g1

0x77ae,	// (0x00026003) fep_hwr_top_pane_g2

0xb007,	// (0x0002985c) fep_hwr_top_pane_g3

0x0002,

0xfb32,	// (0x0002e387) fep_hwr_top_pane_g

0xb01c,	// (0x00029871) fep_hwr_top_text_pane

0x4f53,	// (0x000237a8) fep_hwr_top_text_pane_g1

0x77f6,	// (0x0002604b) fep_hwr_top_text_pane_t1

0xb112,	// (0x00029967) fep_hwr_candidate_pane_g1

0x7923,	// (0x00026178) fep_vkb_keypad_pane_g3_ParamLimits

0x7923,	// (0x00026178) fep_vkb_keypad_pane_g3

0x794b,	// (0x000261a0) fep_vkb_keypad_pane_g4_ParamLimits

0x794b,	// (0x000261a0) fep_vkb_keypad_pane_g4

0x79ba,	// (0x0002620f) fep_vkb_bottom_pane_g2_ParamLimits

0x79ba,	// (0x0002620f) fep_vkb_bottom_pane_g2

0x0001,

0xfb5d,	// (0x0002e3b2) fep_vkb_bottom_pane_g_ParamLimits

0xfb5d,	// (0x0002e3b2) fep_vkb_bottom_pane_g

0x773e,	// (0x00025f93) cell_vkb_side_pane_g2

0x0001,

0xfb67,	// (0x0002e3bc) cell_vkb_side_pane_g

0x79fe,	// (0x00026253) cell_vkb_side_pane_t1

0x7a0c,	// (0x00026261) cell_vkb_side_pane_t1_copy1

0x773e,	// (0x00025f93) bg_fep_vkb_candidate_pane_g2

0x7af0,	// (0x00026345) cell_vkb_candidate_pane_ParamLimits

0x7804,	// (0x00026059) aid_size_cell_vkb_ParamLimits

0x7804,	// (0x00026059) aid_size_cell_vkb

0x7af0,	// (0x00026345) cell_vkb_candidate_pane

0xb2fc,	// (0x00029b51) bg_popup_fep_shadow_pane_g1

0xb14b,	// (0x000299a0) fep_vkb_bottom_pane_ParamLimits

0xb14b,	// (0x000299a0) fep_vkb_bottom_pane

0x7891,	// (0x000260e6) fep_vkb_candidate_pane_ParamLimits

0x7891,	// (0x000260e6) fep_vkb_candidate_pane

0xb170,	// (0x000299c5) fep_vkb_keypad_pane_ParamLimits

0xb170,	// (0x000299c5) fep_vkb_keypad_pane

0xb1ac,	// (0x00029a01) fep_vkb_side_pane_ParamLimits

0xb1ac,	// (0x00029a01) fep_vkb_side_pane

0xb1e8,	// (0x00029a3d) fep_vkb_top_pane_ParamLimits

0xb1e8,	// (0x00029a3d) fep_vkb_top_pane

0x78b7,	// (0x0002610c) fep_vkb_top_pane_g1_ParamLimits

0x78b7,	// (0x0002610c) fep_vkb_top_pane_g1

0x78c6,	// (0x0002611b) fep_vkb_top_pane_g2_ParamLimits

0x78c6,	// (0x0002611b) fep_vkb_top_pane_g2

0x78d5,	// (0x0002612a) fep_vkb_top_pane_g3_ParamLimits

0x78d5,	// (0x0002612a) fep_vkb_top_pane_g3

0x0003,

0xfb4d,	// (0x0002e3a2) fep_vkb_top_pane_g_ParamLimits

0xfb4d,	// (0x0002e3a2) fep_vkb_top_pane_g

0x78f3,	// (0x00026148) fep_vkb_top_text_pane_ParamLimits

0x78f3,	// (0x00026148) fep_vkb_top_text_pane

0xb224,	// (0x00029a79) fep_vkb_side_pane_g1_ParamLimits

0xb224,	// (0x00029a79) fep_vkb_side_pane_g1

0x7912,	// (0x00026167) grid_vkb_side_pane_ParamLimits

0x7912,	// (0x00026167) grid_vkb_side_pane

0xb304,	// (0x00029b59) bg_popup_fep_shadow_pane_g2

0xb30d,	// (0x00029b62) bg_popup_fep_shadow_pane_g3

0xb315,	// (0x00029b6a) bg_popup_fep_shadow_pane_g4

0xb31e,	// (0x00029b73) bg_popup_fep_shadow_pane_g5

0xb328,	// (0x00029b7d) bg_popup_fep_shadow_pane_g6

0xb330,	// (0x00029b85) bg_popup_fep_shadow_pane_g7

0x4a9a,	// (0x000232ef) bg_popup_fep_shadow_pane_g8

0x7969,	// (0x000261be) grid_vkb_keypad_number_pane_ParamLimits

0x7969,	// (0x000261be) grid_vkb_keypad_number_pane

0x7979,	// (0x000261ce) grid_vkb_keypad_pane_ParamLimits

0x7979,	// (0x000261ce) grid_vkb_keypad_pane

0x799f,	// (0x000261f4) fep_vkb_bottom_pane_g1_ParamLimits

0x799f,	// (0x000261f4) fep_vkb_bottom_pane_g1

0x79c8,	// (0x0002621d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x79c8,	// (0x0002621d) grid_vkb_keypad_bottom_left_pane

0x79dd,	// (0x00026232) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x79dd,	// (0x00026232) grid_vkb_keypad_bottom_right_pane

0x79f2,	// (0x00026247) fep_vkb_top_text_pane_g1

0xb26e,	// (0x00029ac3) fep_vkb_top_text_pane_t1

0xb283,	// (0x00029ad8) cell_vkb_side_pane_ParamLimits

0xb283,	// (0x00029ad8) cell_vkb_side_pane

0x773e,	// (0x00025f93) cell_vkb_side_pane_g1

0x7a1a,	// (0x0002626f) cell_vkb_keypad_pane_ParamLimits

0x7a1a,	// (0x0002626f) cell_vkb_keypad_pane

0x7a8f,	// (0x000262e4) cell_vkb_keypad_pane_g1

0x0008,

0xfb7a,	// (0x0002e3cf) bg_popup_fep_shadow_pane_g

0xb342,	// (0x00029b97) cell_hwr_side_pane_g1

0xb342,	// (0x00029b97) cell_hwr_side_pane_g2

0x7a99,	// (0x000262ee) cell_vkb_keypad_pane_t1

0xb2a6,	// (0x00029afb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb2a6,	// (0x00029afb) cell_vkb_keypad_bottom_left_pane

0xb2c3,	// (0x00029b18) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb2c3,	// (0x00029b18) cell_vkb_keypad_bottom_right_pane

0x773e,	// (0x00025f93) cell_vkb_keypad_bottom_left_pane_g1

0x773e,	// (0x00025f93) cell_vkb_keypad_bottom_right_pane_g1

0x7ab5,	// (0x0002630a) cell_vkb_keypad_number_pane_ParamLimits

0x7ab5,	// (0x0002630a) cell_vkb_keypad_number_pane

0x7ad4,	// (0x00026329) cell_vkb_keypad_number_pane_g1

0x7ade,	// (0x00026333) cell_vkb_keypad_number_pane_g2

0x7ae7,	// (0x0002633c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6c,	// (0x0002e3c1) cell_vkb_keypad_number_pane_g

0x7a99,	// (0x000262ee) cell_vkb_keypad_number_pane_t1

0x7b0b,	// (0x00026360) fep_vkb_candidate_pane_g1

0x0001,

0xfb8d,	// (0x0002e3e2) cell_hwr_side_pane_g

0x7b24,	// (0x00026379) cell_hwr_side_pane_t1

0xb34c,	// (0x00029ba1) cell_hwr_side_pane_t1_copy1

0xb35a,	// (0x00029baf) cell_hwr_candidate_pane_g1

0xb389,	// (0x00029bde) cell_hwr_candidate_pane_t1

0x773e,	// (0x00025f93) cell_vkb_candidate_pane_g2

0x7baa,	// (0x000263ff) cell_vkb_candidate_pane_t1

0xaf32,	// (0x00029787) bg_popup_fep_shadow_pane_ParamLimits

0xaf32,	// (0x00029787) bg_popup_fep_shadow_pane

0xafe7,	// (0x0002983c) bg_fep_hwr_top_pane_g4

0x77d2,	// (0x00026027) bg_hwr_side_pane_g1_ParamLimits

0x77d2,	// (0x00026027) bg_hwr_side_pane_g1

0xb058,	// (0x000298ad) cell_hwr_side_pane_ParamLimits

0xb058,	// (0x000298ad) cell_hwr_side_pane

0xb093,	// (0x000298e8) fep_hwr_write_pane_g1_ParamLimits

0xb093,	// (0x000298e8) fep_hwr_write_pane_g1

0xb0a0,	// (0x000298f5) fep_hwr_write_pane_g2_ParamLimits

0xb0a0,	// (0x000298f5) fep_hwr_write_pane_g2

0xb0ad,	// (0x00029902) fep_hwr_write_pane_g3_ParamLimits

0xb0ad,	// (0x00029902) fep_hwr_write_pane_g3

0xb0bb,	// (0x00029910) fep_hwr_write_pane_g4_ParamLimits

0xb0bb,	// (0x00029910) fep_hwr_write_pane_g4

0x0005,

0xfb39,	// (0x0002e38e) fep_hwr_write_pane_g_ParamLimits

0xfb39,	// (0x0002e38e) fep_hwr_write_pane_g

0xafe7,	// (0x0002983c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xafe7,	// (0x0002983c) bg_fep_hwr_candidate_pane_g2

0xb0d0,	// (0x00029925) cell_hwr_candidate_pane_ParamLimits

0xb0d0,	// (0x00029925) cell_hwr_candidate_pane

0xb112,	// (0x00029967) fep_hwr_candidate_pane_g1_ParamLimits

0x7832,	// (0x00026087) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7832,	// (0x00026087) bg_popup_fep_shadow_pane_cp2

0x78e5,	// (0x0002613a) fep_vkb_top_pane_g4_ParamLimits

0x78e5,	// (0x0002613a) fep_vkb_top_pane_g4

0x7904,	// (0x00026159) fep_vkb_side_pane_g2_ParamLimits

0x7904,	// (0x00026159) fep_vkb_side_pane_g2

0xcc1c,	// (0x0002b471) list_setting_pane_t4_ParamLimits

0xcc1c,	// (0x0002b471) list_setting_pane_t4

0xccb6,	// (0x0002b50b) list_setting_number_pane_t5_ParamLimits

0xccb6,	// (0x0002b50b) list_setting_number_pane_t5

0x94c9,	// (0x00027d1e) list_double_heading_pane_cp2_ParamLimits

0x94c9,	// (0x00027d1e) list_double_heading_pane_cp2

0x4a35,	// (0x0002328a) list_double_heading_pane_g1_cp2_ParamLimits

0x4a35,	// (0x0002328a) list_double_heading_pane_g1_cp2

0x4a41,	// (0x00023296) list_double_heading_pane_g2_cp2_ParamLimits

0x4a41,	// (0x00023296) list_double_heading_pane_g2_cp2

0x7bb8,	// (0x0002640d) list_double_heading_pane_t1_cp2_ParamLimits

0x7bb8,	// (0x0002640d) list_double_heading_pane_t1_cp2

0x7bce,	// (0x00026423) list_double_heading_pane_t2_cp2_ParamLimits

0x7bce,	// (0x00026423) list_double_heading_pane_t2_cp2

0x43a2,	// (0x00022bf7) aid_value_unit2

0x8d2b,	// (0x00027580) popup_preview_fixed_window

0x454d,	// (0x00022da2) bg_popup_preview_window_pane_cp02

0x7be0,	// (0x00026435) list_preview_fixed_pane

0x7c26,	// (0x0002647b) list_empty_pane_fp_ParamLimits

0x7c26,	// (0x0002647b) list_empty_pane_fp

0x7c26,	// (0x0002647b) list_single_cale_day_pane_fp_ParamLimits

0x7c26,	// (0x0002647b) list_single_cale_day_pane_fp

0x7c26,	// (0x0002647b) list_single_graphic_heading_pane_fp_ParamLimits

0x7c26,	// (0x0002647b) list_single_graphic_heading_pane_fp

0x7c26,	// (0x0002647b) list_single_graphic_pane_fp_ParamLimits

0x7c26,	// (0x0002647b) list_single_graphic_pane_fp

0x7c26,	// (0x0002647b) list_single_heading_pane_fp_ParamLimits

0x7c26,	// (0x0002647b) list_single_heading_pane_fp

0x7c26,	// (0x0002647b) list_single_pane_fp_ParamLimits

0x7c26,	// (0x0002647b) list_single_pane_fp

0x7c3b,	// (0x00026490) list_single_pane_fp_g1_ParamLimits

0x7c3b,	// (0x00026490) list_single_pane_fp_g1

0xeb23,	// (0x0002d378) list_single_pane_fp_g2_ParamLimits

0xeb23,	// (0x0002d378) list_single_pane_fp_g2

0xeb2f,	// (0x0002d384) list_single_pane_fp_g3_ParamLimits

0xeb2f,	// (0x0002d384) list_single_pane_fp_g3

0x7c47,	// (0x0002649c) list_single_pane_fp_g4_ParamLimits

0x7c47,	// (0x0002649c) list_single_pane_fp_g4

0x0003,

0xfba0,	// (0x0002e3f5) list_single_pane_fp_g_ParamLimits

0xfba0,	// (0x0002e3f5) list_single_pane_fp_g

0xeb43,	// (0x0002d398) list_single_pane_fp_t1_ParamLimits

0xeb43,	// (0x0002d398) list_single_pane_fp_t1

0xeb5a,	// (0x0002d3af) list_single_graphic_pane_fp_g1_ParamLimits

0xeb5a,	// (0x0002d3af) list_single_graphic_pane_fp_g1

0x7c3b,	// (0x00026490) list_single_graphic_pane_fp_g2_ParamLimits

0x7c3b,	// (0x00026490) list_single_graphic_pane_fp_g2

0xeb23,	// (0x0002d378) list_single_graphic_pane_fp_g3_ParamLimits

0xeb23,	// (0x0002d378) list_single_graphic_pane_fp_g3

0xeb2f,	// (0x0002d384) list_single_graphic_pane_fp_g4_ParamLimits

0xeb2f,	// (0x0002d384) list_single_graphic_pane_fp_g4

0x7c47,	// (0x0002649c) list_single_graphic_pane_fp_g5_ParamLimits

0x7c47,	// (0x0002649c) list_single_graphic_pane_fp_g5

0x0004,

0xfba9,	// (0x0002e3fe) list_single_graphic_pane_fp_g_ParamLimits

0xfba9,	// (0x0002e3fe) list_single_graphic_pane_fp_g

0xeb66,	// (0x0002d3bb) list_single_graphic_pane_fp_t1_ParamLimits

0xeb66,	// (0x0002d3bb) list_single_graphic_pane_fp_t1

0xeb5a,	// (0x0002d3af) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeb5a,	// (0x0002d3af) list_single_graphic_heading_pane_fp_g1

0x7c3b,	// (0x00026490) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7c3b,	// (0x00026490) list_single_graphic_heading_pane_fp_g2

0xeb23,	// (0x0002d378) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xeb23,	// (0x0002d378) list_single_graphic_heading_pane_fp_g3

0xeb2f,	// (0x0002d384) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xeb2f,	// (0x0002d384) list_single_graphic_heading_pane_fp_g4

0x7c47,	// (0x0002649c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7c47,	// (0x0002649c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba9,	// (0x0002e3fe) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0002e3fe) list_single_graphic_heading_pane_fp_g

0xeb7c,	// (0x0002d3d1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xeb7c,	// (0x0002d3d1) list_single_graphic_heading_pane_fp_t1

0xeb92,	// (0x0002d3e7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeb92,	// (0x0002d3e7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x0002e409) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x0002e409) list_single_graphic_heading_pane_fp_t

0xeba4,	// (0x0002d3f9) list_single_cale_day_pane_fp_g1_ParamLimits

0xeba4,	// (0x0002d3f9) list_single_cale_day_pane_fp_g1

0x7c53,	// (0x000264a8) list_single_cale_day_pane_fp_g2_ParamLimits

0x7c53,	// (0x000264a8) list_single_cale_day_pane_fp_g2

0xebdc,	// (0x0002d431) list_single_cale_day_pane_fp_g3_ParamLimits

0xebdc,	// (0x0002d431) list_single_cale_day_pane_fp_g3

0xec04,	// (0x0002d459) list_single_cale_day_pane_fp_g4_ParamLimits

0xec04,	// (0x0002d459) list_single_cale_day_pane_fp_g4

0xec28,	// (0x0002d47d) list_single_cale_day_pane_fp_g5_ParamLimits

0xec28,	// (0x0002d47d) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb9,	// (0x0002e40e) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb9,	// (0x0002e40e) list_single_cale_day_pane_fp_g

0xec4c,	// (0x0002d4a1) list_single_cale_day_pane_fp_t1_ParamLimits

0xec4c,	// (0x0002d4a1) list_single_cale_day_pane_fp_t1

0xec72,	// (0x0002d4c7) list_single_cale_day_pane_fp_t2_ParamLimits

0xec72,	// (0x0002d4c7) list_single_cale_day_pane_fp_t2

0xec8b,	// (0x0002d4e0) list_single_cale_day_pane_fp_t3_ParamLimits

0xec8b,	// (0x0002d4e0) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc4,	// (0x0002e419) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc4,	// (0x0002e419) list_single_cale_day_pane_fp_t

0x7c3b,	// (0x00026490) list_empty_pane_fp_g1_ParamLimits

0x7c3b,	// (0x00026490) list_empty_pane_fp_g1

0xeca4,	// (0x0002d4f9) list_empty_pane_fp_t1

0xecb2,	// (0x0002d507) list_empty_pane_fp_t2

0x0001,

0xfbcb,	// (0x0002e420) list_empty_pane_fp_t

0x7c3b,	// (0x00026490) list_single_heading_pane_fp_g1_ParamLimits

0x7c3b,	// (0x00026490) list_single_heading_pane_fp_g1

0xeb23,	// (0x0002d378) list_single_heading_pane_fp_g2_ParamLimits

0xeb23,	// (0x0002d378) list_single_heading_pane_fp_g2

0xeb2f,	// (0x0002d384) list_single_heading_pane_fp_g3_ParamLimits

0xeb2f,	// (0x0002d384) list_single_heading_pane_fp_g3

0x0002,

0xfbd0,	// (0x0002e425) list_single_heading_pane_fp_g_ParamLimits

0xfbd0,	// (0x0002e425) list_single_heading_pane_fp_g

0xecc0,	// (0x0002d515) list_single_heading_pane_fp_t1_ParamLimits

0xecc0,	// (0x0002d515) list_single_heading_pane_fp_t1

0xecd2,	// (0x0002d527) list_single_heading_pane_fp_t2_ParamLimits

0xecd2,	// (0x0002d527) list_single_heading_pane_fp_t2

0x0001,

0xfbd7,	// (0x0002e42c) list_single_heading_pane_fp_t_ParamLimits

0xfbd7,	// (0x0002e42c) list_single_heading_pane_fp_t

0x4b7f,	// (0x000233d4) aid_size_cell_fast

0x4530,	// (0x00022d85) soft_indicator_pane_cp1_t1

0x4bbc,	// (0x00023411) cell_app_pane_cp2_ParamLimits

0x4bbc,	// (0x00023411) cell_app_pane_cp2

0xaf54,	// (0x000297a9) fep_hwr_candidate_drop_down_list_pane

0xb12c,	// (0x00029981) fep_hwr_candidate_pane_g3_ParamLimits

0xb12c,	// (0x00029981) fep_hwr_candidate_pane_g3

0x3b3d,	// (0x00022392) fep_hwr_candidate_pane_g4_ParamLimits

0x3b3d,	// (0x00022392) fep_hwr_candidate_pane_g4

0x0002,

0xfb46,	// (0x0002e39b) fep_hwr_candidate_pane_g_ParamLimits

0xfb46,	// (0x0002e39b) fep_hwr_candidate_pane_g

0x7880,	// (0x000260d5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7880,	// (0x000260d5) fep_vkb_candidate_drop_down_list_pane

0x7b13,	// (0x00026368) fep_vkb_candidate_pane_g3

0x7b1b,	// (0x00026370) fep_vkb_candidate_pane_g4

0x0002,

0xfb73,	// (0x0002e3c8) fep_vkb_candidate_pane_g

0xb35a,	// (0x00029baf) cell_hwr_candidate_pane_g1_ParamLimits

0xb368,	// (0x00029bbd) cell_hwr_candidate_pane_g3_ParamLimits

0xb368,	// (0x00029bbd) cell_hwr_candidate_pane_g3

0xd21e,	// (0x0002ba73) cell_hwr_candidate_pane_g4_ParamLimits

0xd21e,	// (0x0002ba73) cell_hwr_candidate_pane_g4

0x0002,

0xfb92,	// (0x0002e3e7) cell_hwr_candidate_pane_g_ParamLimits

0xfb92,	// (0x0002e3e7) cell_hwr_candidate_pane_g

0x7b74,	// (0x000263c9) cell_vkb_candidate_pane_g3_ParamLimits

0x7b74,	// (0x000263c9) cell_vkb_candidate_pane_g3

0x7b8f,	// (0x000263e4) cell_vkb_candidate_pane_g4_ParamLimits

0x7b8f,	// (0x000263e4) cell_vkb_candidate_pane_g4

0x7c5f,	// (0x000264b4) cell_app_pane_cp2_g1_ParamLimits

0x7c5f,	// (0x000264b4) cell_app_pane_cp2_g1

0x7c7d,	// (0x000264d2) cell_app_pane_cp2_g2_ParamLimits

0x7c7d,	// (0x000264d2) cell_app_pane_cp2_g2

0x0001,

0xfbdc,	// (0x0002e431) cell_app_pane_cp2_g_ParamLimits

0xfbdc,	// (0x0002e431) cell_app_pane_cp2_g

0x7c9d,	// (0x000264f2) cell_app_pane_cp2_t1_ParamLimits

0x7c9d,	// (0x000264f2) cell_app_pane_cp2_t1

0x4a1b,	// (0x00023270) grid_highlight_pane_cp1_ParamLimits

0x4a1b,	// (0x00023270) grid_highlight_pane_cp1

0xb3a7,	// (0x00029bfc) cell_hwr_candidate_pane_cp1_ParamLimits

0xb3a7,	// (0x00029bfc) cell_hwr_candidate_pane_cp1

0xb35a,	// (0x00029baf) fep_hwr_candidate_drop_down_list_pane_g1

0xb3c6,	// (0x00029c1b) fep_hwr_candidate_drop_down_list_pane_g2

0xb3d3,	// (0x00029c28) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe1,	// (0x0002e436) fep_hwr_candidate_drop_down_list_pane_g

0xb3e0,	// (0x00029c35) fep_hwr_candidate_drop_down_list_scroll_pane

0xb3e9,	// (0x00029c3e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb3e9,	// (0x00029c3e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xb3f6,	// (0x00029c4b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb3f6,	// (0x00029c4b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xb403,	// (0x00029c58) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb403,	// (0x00029c58) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xb410,	// (0x00029c65) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb410,	// (0x00029c65) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xb42b,	// (0x00029c80) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb42b,	// (0x00029c80) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xb446,	// (0x00029c9b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb446,	// (0x00029c9b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xb461,	// (0x00029cb6) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb461,	// (0x00029cb6) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb47c,	// (0x00029cd1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb47c,	// (0x00029cd1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x0002e43d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x0002e43d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7cc9,	// (0x0002651e) cell_vkb_candidate_pane_cp1_ParamLimits

0x7cc9,	// (0x0002651e) cell_vkb_candidate_pane_cp1

0x78e5,	// (0x0002613a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x78e5,	// (0x0002613a) fep_vkb_candidate_drop_down_list_pane_g1

0x7caf,	// (0x00026504) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7caf,	// (0x00026504) fep_vkb_candidate_drop_down_list_pane_g2

0x7cbc,	// (0x00026511) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7cbc,	// (0x00026511) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf9,	// (0x0002e44e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf9,	// (0x0002e44e) fep_vkb_candidate_drop_down_list_pane_g

0x7ce9,	// (0x0002653e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7ce9,	// (0x0002653e) fep_vkb_candidate_drop_down_list_scroll_pane

0x7cf6,	// (0x0002654b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7cf6,	// (0x0002654b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7d03,	// (0x00026558) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d03,	// (0x00026558) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7d0f,	// (0x00026564) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7d0f,	// (0x00026564) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7b32,	// (0x00026387) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7b32,	// (0x00026387) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7b53,	// (0x000263a8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b53,	// (0x000263a8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7d1b,	// (0x00026570) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7d1b,	// (0x00026570) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7d3c,	// (0x00026591) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7d3c,	// (0x00026591) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7d5d,	// (0x000265b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d5d,	// (0x000265b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc00,	// (0x0002e455) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc00,	// (0x0002e455) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8e3b,	// (0x00027690) title_pane_g1_ParamLimits

0x8e48,	// (0x0002769d) title_pane_g2_ParamLimits

0xf592,	// (0x0002dde7) title_pane_g_ParamLimits

0x4f4b,	// (0x000237a0) aid_call2_pane

0x4f43,	// (0x00023798) aid_call_pane

0x4f53,	// (0x000237a8) popup_clock_analogue_window_g1

0x4f53,	// (0x000237a8) popup_clock_analogue_window_g2

0x94aa,	// (0x00027cff) popup_clock_analogue_window_g3

0x94b3,	// (0x00027d08) popup_clock_analogue_window_g4

0x43b4,	// (0x00022c09) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x0002df91) popup_clock_analogue_window_g

0x94bb,	// (0x00027d10) popup_clock_analogue_window_t1

0x94f6,	// (0x00027d4b) clock_digital_number_pane_ParamLimits

0x94f6,	// (0x00027d4b) clock_digital_number_pane

0x9502,	// (0x00027d57) clock_digital_number_pane_cp02_ParamLimits

0x9502,	// (0x00027d57) clock_digital_number_pane_cp02

0x950e,	// (0x00027d63) clock_digital_number_pane_cp03_ParamLimits

0x950e,	// (0x00027d63) clock_digital_number_pane_cp03

0x951a,	// (0x00027d6f) clock_digital_number_pane_cp04_ParamLimits

0x951a,	// (0x00027d6f) clock_digital_number_pane_cp04

0x9526,	// (0x00027d7b) clock_digital_separator_pane_ParamLimits

0x9526,	// (0x00027d7b) clock_digital_separator_pane

0x9532,	// (0x00027d87) popup_clock_digital_window_t1_ParamLimits

0x9532,	// (0x00027d87) popup_clock_digital_window_t1

0x43b4,	// (0x00022c09) clock_digital_number_pane_g1

0x43b4,	// (0x00022c09) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x0002df9c) clock_digital_number_pane_g

0x43b4,	// (0x00022c09) clock_digital_separator_pane_g1

0x43b4,	// (0x00022c09) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x0002df9c) clock_digital_separator_pane_g

0x9f3d,	// (0x00028792) aid_fill_nsta_ParamLimits

0xa002,	// (0x00028857) indicator_nsta_pane_ParamLimits

0x58bb,	// (0x00024110) popup_clock_analogue_window

0x58bb,	// (0x00024110) popup_clock_digital_window

0x441a,	// (0x00022c6f) grid_indicator_nsta_pane_ParamLimits

0x7411,	// (0x00025c66) clock_nsta_pane_t2

0x0001,

0xfad3,	// (0x0002e328) clock_nsta_pane_t

0x946e,	// (0x00027cc3) aid_size_max_handle

0x9478,	// (0x00027ccd) aid_size_min_handle

0x5440,	// (0x00023c95) editor_scroll_pane

0x7d78,	// (0x000265cd) ex_editor_pane

0x4b3a,	// (0x0002338f) scroll_pane_cp13

0x49ba,	// (0x0002320f) scroll_pane_cp14

0x4f7d,	// (0x000237d2) scroll_pane_cp36

0x94dd,	// (0x00027d32) list_single_graphic_hl_pane_cp2_ParamLimits

0x94dd,	// (0x00027d32) list_single_graphic_hl_pane_cp2

0xa9f3,	// (0x00029248) list_single_graphic_hl_pane_ParamLimits

0xa9f3,	// (0x00029248) list_single_graphic_hl_pane

0xece8,	// (0x0002d53d) aid_size_min_hl_cp1

0x7d80,	// (0x000265d5) list_highlight_pane_cp34_ParamLimits

0x7d80,	// (0x000265d5) list_highlight_pane_cp34

0x7d91,	// (0x000265e6) list_single_graphic_hl_pane_g1_ParamLimits

0x7d91,	// (0x000265e6) list_single_graphic_hl_pane_g1

0xecf1,	// (0x0002d546) list_single_graphic_hl_pane_g2_ParamLimits

0xecf1,	// (0x0002d546) list_single_graphic_hl_pane_g2

0xecf1,	// (0x0002d546) list_single_graphic_hl_pane_g3_ParamLimits

0xecf1,	// (0x0002d546) list_single_graphic_hl_pane_g3

0xd003,	// (0x0002b858) list_single_graphic_hl_pane_g4_ParamLimits

0xd003,	// (0x0002b858) list_single_graphic_hl_pane_g4

0xecfd,	// (0x0002d552) list_single_graphic_hl_pane_g5_ParamLimits

0xecfd,	// (0x0002d552) list_single_graphic_hl_pane_g5

0x0004,

0xfc11,	// (0x0002e466) list_single_graphic_hl_pane_g_ParamLimits

0xfc11,	// (0x0002e466) list_single_graphic_hl_pane_g

0xed11,	// (0x0002d566) list_single_graphic_hl_pane_t1_ParamLimits

0xed11,	// (0x0002d566) list_single_graphic_hl_pane_t1

0x7d9e,	// (0x000265f3) aid_size_min_hl_cp2

0x7da7,	// (0x000265fc) list_highlight_pane_cp34_cp2_ParamLimits

0x7da7,	// (0x000265fc) list_highlight_pane_cp34_cp2

0x7d91,	// (0x000265e6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7d91,	// (0x000265e6) list_single_graphic_hl_pane_g1_cp2

0x7db4,	// (0x00026609) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7db4,	// (0x00026609) list_single_graphic_hl_pane_g2_cp2

0x7dc0,	// (0x00026615) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7dc0,	// (0x00026615) list_single_graphic_hl_pane_g3_cp2

0x6706,	// (0x00024f5b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6706,	// (0x00024f5b) list_single_graphic_hl_pane_g4_cp2

0x7dce,	// (0x00026623) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7dce,	// (0x00026623) list_single_graphic_hl_pane_g5_cp2

0x9974,	// (0x000281c9) control_pane_g4_ParamLimits

0x9974,	// (0x000281c9) control_pane_g4

0x4b73,	// (0x000233c8) bg_popup_sub_pane_cp10_ParamLimits

0x7748,	// (0x00025f9d) list_choice_list_pane_ParamLimits

0x7757,	// (0x00025fac) scroll_pane_cp23

0x454d,	// (0x00022da2) bg_popup_preview_window_pane_cp02_ParamLimits

0x7be0,	// (0x00026435) list_preview_fixed_pane_ParamLimits

0x7bf6,	// (0x0002644b) list_preview_fixed_pane_cp_ParamLimits

0x7bf6,	// (0x0002644b) list_preview_fixed_pane_cp

0x7c02,	// (0x00026457) popup_preview_fixed_window_g1_ParamLimits

0x7c02,	// (0x00026457) popup_preview_fixed_window_g1

0x7c0e,	// (0x00026463) popup_preview_fixed_window_g2_ParamLimits

0x7c0e,	// (0x00026463) popup_preview_fixed_window_g2

0x0002,

0xfb99,	// (0x0002e3ee) popup_preview_fixed_window_g_ParamLimits

0xfb99,	// (0x0002e3ee) popup_preview_fixed_window_g

0x9361,	// (0x00027bb6) aid_navi_side_left_pane_ParamLimits

0x9376,	// (0x00027bcb) aid_navi_side_right_pane_ParamLimits

0x938e,	// (0x00027be3) navi_icon_pane_stacon_ParamLimits

0x93a2,	// (0x00027bf7) navi_navi_pane_stacon_ParamLimits

0x938e,	// (0x00027be3) navi_text_pane_stacon_ParamLimits

0x43aa,	// (0x00022bff) main_text_info_pane

0x7df8,	// (0x0002664d) listscroll_text_info_pane

0x7e00,	// (0x00026655) list_text_info_pane_ParamLimits

0x7e00,	// (0x00026655) list_text_info_pane

0x7e0f,	// (0x00026664) scroll_pane_cp24_ParamLimits

0x7e0f,	// (0x00026664) scroll_pane_cp24

0xb497,	// (0x00029cec) list_text_info_pane_t1_ParamLimits

0xb497,	// (0x00029cec) list_text_info_pane_t1

0x9ac8,	// (0x0002831d) popup_fast_swap2_window_ParamLimits

0x9ac8,	// (0x0002831d) popup_fast_swap2_window

0x7e2d,	// (0x00026682) aid_size_cell_fast2

0x43aa,	// (0x00022bff) bg_popup_window_pane_cp17

0x5d67,	// (0x000245bc) heading_pane_cp2

0x473f,	// (0x00022f94) listscroll_fast2_pane

0x7e37,	// (0x0002668c) grid_fast2_pane

0x7e41,	// (0x00026696) listscroll_fast2_pane_g1

0x7e49,	// (0x0002669e) listscroll_fast2_pane_g2

0x0001,

0xfc1c,	// (0x0002e471) listscroll_fast2_pane_g

0x4b3a,	// (0x0002338f) scroll_pane_cp26

0x7e53,	// (0x000266a8) cell_fast2_pane_ParamLimits

0x7e53,	// (0x000266a8) cell_fast2_pane

0x7e68,	// (0x000266bd) cell_fast2_pane_g1

0x7e71,	// (0x000266c6) cell_fast2_pane_g2

0x7e7a,	// (0x000266cf) cell_fast2_pane_g3

0x0002,

0xfc21,	// (0x0002e476) cell_fast2_pane_g

0x4781,	// (0x00022fd6) grid_highlight_pane_cp9

0x4796,	// (0x00022feb) main_eswt_pane_ParamLimits

0x4796,	// (0x00022feb) main_eswt_pane

0x7e24,	// (0x00026679) list_single_text_info_pane

0x7e82,	// (0x000266d7) eswt_ctrl_button_pane

0x7e82,	// (0x000266d7) eswt_ctrl_canvas_pane

0x7e8a,	// (0x000266df) eswt_ctrl_combo_pane

0x7e82,	// (0x000266d7) eswt_ctrl_default_pane

0x7e82,	// (0x000266d7) eswt_ctrl_label_pane

0x7e92,	// (0x000266e7) eswt_ctrl_wait_pane

0x7e9a,	// (0x000266ef) eswt_shell_pane

0x43aa,	// (0x00022bff) listscroll_eswt_app_pane

0x7eba,	// (0x0002670f) popup_eswt_tasktip_window_ParamLimits

0x7eba,	// (0x0002670f) popup_eswt_tasktip_window

0x5aba,	// (0x0002430f) bg_popup_window_pane_cp18

0x7ecb,	// (0x00026720) eswt_control_pane_g1_ParamLimits

0x7ecb,	// (0x00026720) eswt_control_pane_g1

0x7ed8,	// (0x0002672d) eswt_control_pane_g2_ParamLimits

0x7ed8,	// (0x0002672d) eswt_control_pane_g2

0x7ee5,	// (0x0002673a) eswt_control_pane_g3_ParamLimits

0x7ee5,	// (0x0002673a) eswt_control_pane_g3

0x7ef2,	// (0x00026747) eswt_control_pane_g4_ParamLimits

0x7ef2,	// (0x00026747) eswt_control_pane_g4

0x0003,

0xfc28,	// (0x0002e47d) eswt_control_pane_g_ParamLimits

0xfc28,	// (0x0002e47d) eswt_control_pane_g

0x4a1b,	// (0x00023270) bg_button_pane_ParamLimits

0x4a1b,	// (0x00023270) bg_button_pane

0x4796,	// (0x00022feb) common_borders_pane_copy2_ParamLimits

0x4796,	// (0x00022feb) common_borders_pane_copy2

0x7eff,	// (0x00026754) control_button_pane_g1_ParamLimits

0x7eff,	// (0x00026754) control_button_pane_g1

0x7f0b,	// (0x00026760) control_button_pane_g2_ParamLimits

0x7f0b,	// (0x00026760) control_button_pane_g2

0x7f17,	// (0x0002676c) control_button_pane_g3_ParamLimits

0x7f17,	// (0x0002676c) control_button_pane_g3

0x0002,

0xfc31,	// (0x0002e486) control_button_pane_g_ParamLimits

0xfc31,	// (0x0002e486) control_button_pane_g

0x7f2b,	// (0x00026780) control_button_pane_t1

0x7f39,	// (0x0002678e) control_button_pane_t2

0x0001,

0xfc38,	// (0x0002e48d) control_button_pane_t

0x59ca,	// (0x0002421f) bg_button_pane_g1

0x59d2,	// (0x00024227) bg_button_pane_g2

0x59da,	// (0x0002422f) bg_button_pane_g3

0x59e2,	// (0x00024237) bg_button_pane_g4

0x59ea,	// (0x0002423f) bg_button_pane_g5

0x59f2,	// (0x00024247) bg_button_pane_g6

0x59fa,	// (0x0002424f) bg_button_pane_g7

0x5a02,	// (0x00024257) bg_button_pane_g8

0x5a0a,	// (0x0002425f) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0002e0f4) bg_button_pane_g

0x7703,	// (0x00025f58) common_borders_pane_ParamLimits

0x7703,	// (0x00025f58) common_borders_pane

0x7ecb,	// (0x00026720) eswt_control_pane_g1_copy1_ParamLimits

0x7ecb,	// (0x00026720) eswt_control_pane_g1_copy1

0x7ed8,	// (0x0002672d) eswt_control_pane_g2_copy1_ParamLimits

0x7ed8,	// (0x0002672d) eswt_control_pane_g2_copy1

0x7ee5,	// (0x0002673a) eswt_control_pane_g3_copy1_ParamLimits

0x7ee5,	// (0x0002673a) eswt_control_pane_g3_copy1

0x7ef2,	// (0x00026747) eswt_control_pane_g4_copy1_ParamLimits

0x7ef2,	// (0x00026747) eswt_control_pane_g4_copy1

0x773e,	// (0x00025f93) bg_eswt_ctrl_canvas_pane_g1

0x7703,	// (0x00025f58) common_borders_pane_cp2_ParamLimits

0x7703,	// (0x00025f58) common_borders_pane_cp2

0x7703,	// (0x00025f58) common_borders_pane_cp3_ParamLimits

0x7703,	// (0x00025f58) common_borders_pane_cp3

0x7f47,	// (0x0002679c) separator_horizontal_pane

0x7f4f,	// (0x000267a4) separator_vertical_pane

0x7ecb,	// (0x00026720) eswt_control_pane_g1_copy2_ParamLimits

0x7ecb,	// (0x00026720) eswt_control_pane_g1_copy2

0x7ed8,	// (0x0002672d) eswt_control_pane_g2_copy2_ParamLimits

0x7ed8,	// (0x0002672d) eswt_control_pane_g2_copy2

0x7ee5,	// (0x0002673a) eswt_control_pane_g3_copy2_ParamLimits

0x7ee5,	// (0x0002673a) eswt_control_pane_g3_copy2

0x7ef2,	// (0x00026747) eswt_control_pane_g4_copy2_ParamLimits

0x7ef2,	// (0x00026747) eswt_control_pane_g4_copy2

0x43aa,	// (0x00022bff) common_borders_pane_cp4

0x7f58,	// (0x000267ad) separator_horizontal_pane_g1

0x7f61,	// (0x000267b6) separator_horizontal_pane_g2

0x7f6a,	// (0x000267bf) separator_horizontal_pane_g3

0x0002,

0xfc3d,	// (0x0002e492) separator_horizontal_pane_g

0x7ecb,	// (0x00026720) eswt_control_pane_g1_copy3_ParamLimits

0x7ecb,	// (0x00026720) eswt_control_pane_g1_copy3

0x7ed8,	// (0x0002672d) eswt_control_pane_g2_copy3_ParamLimits

0x7ed8,	// (0x0002672d) eswt_control_pane_g2_copy3

0x7ee5,	// (0x0002673a) eswt_control_pane_g3_copy3_ParamLimits

0x7ee5,	// (0x0002673a) eswt_control_pane_g3_copy3

0x7ef2,	// (0x00026747) eswt_control_pane_g4_copy3_ParamLimits

0x7ef2,	// (0x00026747) eswt_control_pane_g4_copy3

0x43aa,	// (0x00022bff) common_borders_pane_cp5

0x7f73,	// (0x000267c8) separator_vertical_pane_g1

0x7f7c,	// (0x000267d1) separator_vertical_pane_g2

0x7f85,	// (0x000267da) separator_vertical_pane_g3

0x0002,

0xfc44,	// (0x0002e499) separator_vertical_pane_g

0x7ecb,	// (0x00026720) eswt_control_pane_g1_copy4_ParamLimits

0x7ecb,	// (0x00026720) eswt_control_pane_g1_copy4

0x7ed8,	// (0x0002672d) eswt_control_pane_g2_copy4_ParamLimits

0x7ed8,	// (0x0002672d) eswt_control_pane_g2_copy4

0x7ee5,	// (0x0002673a) eswt_control_pane_g3_copy4_ParamLimits

0x7ee5,	// (0x0002673a) eswt_control_pane_g3_copy4

0x7ef2,	// (0x00026747) eswt_control_pane_g4_copy4_ParamLimits

0x7ef2,	// (0x00026747) eswt_control_pane_g4_copy4

0xb4c8,	// (0x00029d1d) eswt_ctrl_combo_button_pane

0xb4d0,	// (0x00029d25) eswt_ctrl_input_pane

0xb4d8,	// (0x00029d2d) popup_choice_list_window_cp70

0xb4e0,	// (0x00029d35) eswt_ctrl_input_pane_t1

0x43aa,	// (0x00022bff) input_focus_pane_cp70

0x7703,	// (0x00025f58) bg_button_pane_cp70_ParamLimits

0x7703,	// (0x00025f58) bg_button_pane_cp70

0xb4ee,	// (0x00029d43) eswt_ctrl_combo_button_pane_g1

0x7f8e,	// (0x000267e3) wait_bar_pane_cp70

0x5aba,	// (0x0002430f) bg_popup_window_pane_cp70_ParamLimits

0x5aba,	// (0x0002430f) bg_popup_window_pane_cp70

0x7f96,	// (0x000267eb) popup_eswt_tasktip_window_t1

0x7fac,	// (0x00026801) wait_bar_pane_cp71_ParamLimits

0x7fac,	// (0x00026801) wait_bar_pane_cp71

0x7fb8,	// (0x0002680d) grid_eswt_app_pane

0x4d8e,	// (0x000235e3) scroll_pane_cp70

0xb4f6,	// (0x00029d4b) cell_eswt_app_pane_ParamLimits

0xb4f6,	// (0x00029d4b) cell_eswt_app_pane

0xb526,	// (0x00029d7b) cell_eswt_app_pane_g1_ParamLimits

0xb526,	// (0x00029d7b) cell_eswt_app_pane_g1

0xb555,	// (0x00029daa) cell_eswt_app_pane_g2_ParamLimits

0xb555,	// (0x00029daa) cell_eswt_app_pane_g2

0x0001,

0xfc4b,	// (0x0002e4a0) cell_eswt_app_pane_g_ParamLimits

0xfc4b,	// (0x0002e4a0) cell_eswt_app_pane_g

0xb57e,	// (0x00029dd3) cell_eswt_app_pane_t1_ParamLimits

0xb57e,	// (0x00029dd3) cell_eswt_app_pane_t1

0x7fc1,	// (0x00026816) grid_highlight_pane_cp70_ParamLimits

0x7fc1,	// (0x00026816) grid_highlight_pane_cp70

0x5315,	// (0x00023b6a) set_content_pane_g1

0x561f,	// (0x00023e74) status_small_volume_pane

0xb5b0,	// (0x00029e05) status_small_volume_pane_g1

0xb5b8,	// (0x00029e0d) volume_small2_pane

0xb5c1,	// (0x00029e16) volume_small2_pane_g1

0xb5ca,	// (0x00029e1f) volume_small2_pane_g2

0xb5d3,	// (0x00029e28) volume_small2_pane_g3

0xb5dc,	// (0x00029e31) volume_small2_pane_g4

0xb5e5,	// (0x00029e3a) volume_small2_pane_g5

0xb5ee,	// (0x00029e43) volume_small2_pane_g6

0xb5f7,	// (0x00029e4c) volume_small2_pane_g7

0xb600,	// (0x00029e55) volume_small2_pane_g8

0xb609,	// (0x00029e5e) volume_small2_pane_g9

0xb612,	// (0x00029e67) volume_small2_pane_g10

0x0009,

0xfc50,	// (0x0002e4a5) volume_small2_pane_g

0x79f2,	// (0x00026247) fep_vkb_top_text_pane_g1_ParamLimits

0xb26e,	// (0x00029ac3) fep_vkb_top_text_pane_t1_ParamLimits

0x7c1a,	// (0x0002646f) popup_preview_fixed_window_g3_ParamLimits

0x7c1a,	// (0x0002646f) popup_preview_fixed_window_g3

0x9ed0,	// (0x00028725) popup_toolbar_trans_pane

0xa865,	// (0x000290ba) aid_height_set_list_ParamLimits

0x6712,	// (0x00024f67) aid_size_parent_ParamLimits

0x4b73,	// (0x000233c8) list_highlight_pane_cp2_ParamLimits

0x5315,	// (0x00023b6a) set_content_pane_g1_ParamLimits

0xd19b,	// (0x0002b9f0) list_single_image_pane_ParamLimits

0xd19b,	// (0x0002b9f0) list_single_image_pane

0x7fcd,	// (0x00026822) aid_size_cell_image_ParamLimits

0x7fcd,	// (0x00026822) aid_size_cell_image

0xb61b,	// (0x00029e70) grid_single_image_pane_ParamLimits

0xb61b,	// (0x00029e70) grid_single_image_pane

0x57e7,	// (0x0002403c) list_single_image_pane_g1_ParamLimits

0x57e7,	// (0x0002403c) list_single_image_pane_g1

0x7c89,	// (0x000264de) list_single_image_pane_g2_ParamLimits

0x7c89,	// (0x000264de) list_single_image_pane_g2

0x0001,

0xfc65,	// (0x0002e4ba) list_single_image_pane_g_ParamLimits

0xfc65,	// (0x0002e4ba) list_single_image_pane_g

0x5801,	// (0x00024056) list_single_image_pane_t1_ParamLimits

0x5801,	// (0x00024056) list_single_image_pane_t1

0xb629,	// (0x00029e7e) cell_image_list_pane_ParamLimits

0xb629,	// (0x00029e7e) cell_image_list_pane

0x7fda,	// (0x0002682f) cell_image_list_pane_g1

0x7fe3,	// (0x00026838) cell_image_list_pane_g2

0x0001,

0xfc6a,	// (0x0002e4bf) cell_image_list_pane_g

0x7fec,	// (0x00026841) aid_size_cell_tb_trans_pane

0x4a1b,	// (0x00023270) bg_tb_trans_pane

0x7ffe,	// (0x00026853) grid_tb_trans_pane

0x59ca,	// (0x0002421f) bg_tb_trans_pane_g1

0x59d2,	// (0x00024227) bg_tb_trans_pane_g2

0x59da,	// (0x0002422f) bg_tb_trans_pane_g3

0x59e2,	// (0x00024237) bg_tb_trans_pane_g4

0x59ea,	// (0x0002423f) bg_tb_trans_pane_g5

0x5a02,	// (0x00024257) bg_tb_trans_pane_g6

0x5a0a,	// (0x0002425f) bg_tb_trans_pane_g7

0x59f2,	// (0x00024247) bg_tb_trans_pane_g8

0x59fa,	// (0x0002424f) bg_tb_trans_pane_g9

0x0008,

0xfc6f,	// (0x0002e4c4) bg_tb_trans_pane_g

0x8012,	// (0x00026867) cell_toolbar_trans_pane_ParamLimits

0x8012,	// (0x00026867) cell_toolbar_trans_pane

0x773e,	// (0x00025f93) cell_toolbar_trans_pane_g1

0xada9,	// (0x000295fe) list_form2_midp_pane_t1

0xadb7,	// (0x0002960c) list_form2_midp_pane_t2

0x0001,

0xfb0c,	// (0x0002e361) list_form2_midp_pane_t

0x7490,	// (0x00025ce5) scroll_pane_cp51_ParamLimits

0x7607,	// (0x00025e5c) form2_midp_wait_pane_g1

0x7610,	// (0x00025e65) form2_midp_wait_pane_g2

0x7619,	// (0x00025e6e) form2_midp_wait_pane_g3

0x0002,

0xfb21,	// (0x0002e376) form2_midp_wait_pane_g

0x441a,	// (0x00022c6f) list_highlight_pane_cp21_ParamLimits

0x7641,	// (0x00025e96) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7650,	// (0x00025ea5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd13c,	// (0x0002b991) list_single_2graphic_im_pane_ParamLimits

0xd13c,	// (0x0002b991) list_single_2graphic_im_pane

0xb63c,	// (0x00029e91) list_single_2graphic_im_pane_g1_ParamLimits

0xb63c,	// (0x00029e91) list_single_2graphic_im_pane_g1

0xb64d,	// (0x00029ea2) list_single_2graphic_im_pane_g2_ParamLimits

0xb64d,	// (0x00029ea2) list_single_2graphic_im_pane_g2

0xb659,	// (0x00029eae) list_single_2graphic_im_pane_g3_ParamLimits

0xb659,	// (0x00029eae) list_single_2graphic_im_pane_g3

0x0003,

0xfc82,	// (0x0002e4d7) list_single_2graphic_im_pane_g_ParamLimits

0xfc82,	// (0x0002e4d7) list_single_2graphic_im_pane_g

0xb66d,	// (0x00029ec2) list_single_2graphic_im_pane_t1_ParamLimits

0xb66d,	// (0x00029ec2) list_single_2graphic_im_pane_t1

0x7c26,	// (0x0002647b) list_single_graphic_2heading_pane_fp_ParamLimits

0x7c26,	// (0x0002647b) list_single_graphic_2heading_pane_fp

0xeb5a,	// (0x0002d3af) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeb5a,	// (0x0002d3af) list_single_graphic_2heading_pane_fp_g1

0x7c3b,	// (0x00026490) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7c3b,	// (0x00026490) list_single_graphic_2heading_pane_fp_g2

0xeb23,	// (0x0002d378) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xeb23,	// (0x0002d378) list_single_graphic_2heading_pane_fp_g3

0xeb2f,	// (0x0002d384) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xeb2f,	// (0x0002d384) list_single_graphic_2heading_pane_fp_g4

0x7c47,	// (0x0002649c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7c47,	// (0x0002649c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba9,	// (0x0002e3fe) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0002e3fe) list_single_graphic_2heading_pane_fp_g

0xed27,	// (0x0002d57c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xed27,	// (0x0002d57c) list_single_graphic_2heading_pane_fp_t1

0xeb92,	// (0x0002d3e7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeb92,	// (0x0002d3e7) list_single_graphic_2heading_pane_fp_t2

0xed3d,	// (0x0002d592) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xed3d,	// (0x0002d592) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8b,	// (0x0002e4e0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8b,	// (0x0002e4e0) list_single_graphic_2heading_pane_fp_t

0x77de,	// (0x00026033) fep_hwr_write_pane_g5_ParamLimits

0x77de,	// (0x00026033) fep_hwr_write_pane_g5

0x77ea,	// (0x0002603f) fep_hwr_write_pane_g6_ParamLimits

0x77ea,	// (0x0002603f) fep_hwr_write_pane_g6

0x7e9a,	// (0x000266ef) eswt_shell_pane_ParamLimits

0x5aba,	// (0x0002430f) bg_popup_window_pane_cp18_ParamLimits

0x6ad0,	// (0x00025325) heading_pane_cp70

0x7f96,	// (0x000267eb) popup_eswt_tasktip_window_t1_ParamLimits

0x9f7d,	// (0x000287d2) aid_touch_tab_arrow_left

0x9f89,	// (0x000287de) aid_touch_tab_arrow_right

0x8e59,	// (0x000276ae) title_pane_g3_ParamLimits

0x8e59,	// (0x000276ae) title_pane_g3

0x49da,	// (0x0002322f) set_value_pane_g1

0x9ed0,	// (0x00028725) popup_toolbar_trans_pane_ParamLimits

0x7fec,	// (0x00026841) aid_size_cell_tb_trans_pane_ParamLimits

0x4a1b,	// (0x00023270) bg_tb_trans_pane_ParamLimits

0x7ffe,	// (0x00026853) grid_tb_trans_pane_ParamLimits

0x454d,	// (0x00022da2) cont_note_pane_ParamLimits

0x454d,	// (0x00022da2) cont_note_pane

0x4796,	// (0x00022feb) cont_snote2_single_text_pane_ParamLimits

0x4796,	// (0x00022feb) cont_snote2_single_text_pane

0x4796,	// (0x00022feb) cont_snote2_single_graphic_pane_ParamLimits

0x4796,	// (0x00022feb) cont_snote2_single_graphic_pane

0x5f51,	// (0x000247a6) cont_note_wait_pane_ParamLimits

0x5f51,	// (0x000247a6) cont_note_wait_pane

0x5f51,	// (0x000247a6) cont_note_image_pane_ParamLimits

0x5f51,	// (0x000247a6) cont_note_image_pane

0xb69e,	// (0x00029ef3) popup_note2_window_g1_ParamLimits

0xb69e,	// (0x00029ef3) popup_note2_window_g1

0xb6cf,	// (0x00029f24) popup_note2_window_t1_ParamLimits

0xb6cf,	// (0x00029f24) popup_note2_window_t1

0xb714,	// (0x00029f69) popup_note2_window_t2_ParamLimits

0xb714,	// (0x00029f69) popup_note2_window_t2

0xb759,	// (0x00029fae) popup_note2_window_t3_ParamLimits

0xb759,	// (0x00029fae) popup_note2_window_t3

0xb79e,	// (0x00029ff3) popup_note2_window_t4_ParamLimits

0xb79e,	// (0x00029ff3) popup_note2_window_t4

0x45d1,	// (0x00022e26) popup_note2_window_t5_ParamLimits

0x45d1,	// (0x00022e26) popup_note2_window_t5

0x0004,

0xfc97,	// (0x0002e4ec) popup_note2_window_t_ParamLimits

0xfc97,	// (0x0002e4ec) popup_note2_window_t

0xb7cd,	// (0x0002a022) popup_note2_image_window_g1_ParamLimits

0xb7cd,	// (0x0002a022) popup_note2_image_window_g1

0xb7d9,	// (0x0002a02e) popup_note2_image_window_g2_ParamLimits

0xb7d9,	// (0x0002a02e) popup_note2_image_window_g2

0x0001,

0xfca2,	// (0x0002e4f7) popup_note2_image_window_g_ParamLimits

0xfca2,	// (0x0002e4f7) popup_note2_image_window_g

0xb7eb,	// (0x0002a040) popup_note2_image_window_t1_ParamLimits

0xb7eb,	// (0x0002a040) popup_note2_image_window_t1

0xb803,	// (0x0002a058) popup_note2_image_window_t2_ParamLimits

0xb803,	// (0x0002a058) popup_note2_image_window_t2

0xb81b,	// (0x0002a070) popup_note2_image_window_t3_ParamLimits

0xb81b,	// (0x0002a070) popup_note2_image_window_t3

0x0002,

0xfca7,	// (0x0002e4fc) popup_note2_image_window_t_ParamLimits

0xfca7,	// (0x0002e4fc) popup_note2_image_window_t

0x5f5f,	// (0x000247b4) popup_note2_wait_window_g1_ParamLimits

0x5f5f,	// (0x000247b4) popup_note2_wait_window_g1

0xb837,	// (0x0002a08c) popup_note2_wait_window_g2_ParamLimits

0xb837,	// (0x0002a08c) popup_note2_wait_window_g2

0x5f77,	// (0x000247cc) popup_note2_wait_window_g3_ParamLimits

0x5f77,	// (0x000247cc) popup_note2_wait_window_g3

0x0002,

0xfcae,	// (0x0002e503) popup_note2_wait_window_g_ParamLimits

0xfcae,	// (0x0002e503) popup_note2_wait_window_g

0xb843,	// (0x0002a098) popup_note2_wait_window_t1_ParamLimits

0xb843,	// (0x0002a098) popup_note2_wait_window_t1

0xb861,	// (0x0002a0b6) popup_note2_wait_window_t2_ParamLimits

0xb861,	// (0x0002a0b6) popup_note2_wait_window_t2

0xb87f,	// (0x0002a0d4) popup_note2_wait_window_t3_ParamLimits

0xb87f,	// (0x0002a0d4) popup_note2_wait_window_t3

0xb891,	// (0x0002a0e6) popup_note2_wait_window_t4_ParamLimits

0xb891,	// (0x0002a0e6) popup_note2_wait_window_t4

0x0003,

0xfcb5,	// (0x0002e50a) popup_note2_wait_window_t_ParamLimits

0xfcb5,	// (0x0002e50a) popup_note2_wait_window_t

0xb8a3,	// (0x0002a0f8) wait_bar2_pane_ParamLimits

0xb8a3,	// (0x0002a0f8) wait_bar2_pane

0xb8bb,	// (0x0002a110) popup_snote2_single_text_window_g1_ParamLimits

0xb8bb,	// (0x0002a110) popup_snote2_single_text_window_g1

0xb8e3,	// (0x0002a138) popup_snote2_single_text_window_t1_ParamLimits

0xb8e3,	// (0x0002a138) popup_snote2_single_text_window_t1

0xb92f,	// (0x0002a184) popup_snote2_single_text_window_t2_ParamLimits

0xb92f,	// (0x0002a184) popup_snote2_single_text_window_t2

0xb97b,	// (0x0002a1d0) popup_snote2_single_text_window_t3_ParamLimits

0xb97b,	// (0x0002a1d0) popup_snote2_single_text_window_t3

0xb9bc,	// (0x0002a211) popup_snote2_single_text_window_t4_ParamLimits

0xb9bc,	// (0x0002a211) popup_snote2_single_text_window_t4

0xb9f2,	// (0x0002a247) popup_snote2_single_text_window_t5_ParamLimits

0xb9f2,	// (0x0002a247) popup_snote2_single_text_window_t5

0x0004,

0xfcbe,	// (0x0002e513) popup_snote2_single_text_window_t_ParamLimits

0xfcbe,	// (0x0002e513) popup_snote2_single_text_window_t

0xba1d,	// (0x0002a272) popup_snote2_single_graphic_window_g1_ParamLimits

0xba1d,	// (0x0002a272) popup_snote2_single_graphic_window_g1

0xba45,	// (0x0002a29a) popup_snote2_single_graphic_window_g2_ParamLimits

0xba45,	// (0x0002a29a) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc9,	// (0x0002e51e) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc9,	// (0x0002e51e) popup_snote2_single_graphic_window_g

0xba6d,	// (0x0002a2c2) popup_snote2_single_graphic_window_t1_ParamLimits

0xba6d,	// (0x0002a2c2) popup_snote2_single_graphic_window_t1

0xbab9,	// (0x0002a30e) popup_snote2_single_graphic_window_t2_ParamLimits

0xbab9,	// (0x0002a30e) popup_snote2_single_graphic_window_t2

0xb97b,	// (0x0002a1d0) popup_snote2_single_graphic_window_t3_ParamLimits

0xb97b,	// (0x0002a1d0) popup_snote2_single_graphic_window_t3

0xb9bc,	// (0x0002a211) popup_snote2_single_graphic_window_t4_ParamLimits

0xb9bc,	// (0x0002a211) popup_snote2_single_graphic_window_t4

0xb9f2,	// (0x0002a247) popup_snote2_single_graphic_window_t5_ParamLimits

0xb9f2,	// (0x0002a247) popup_snote2_single_graphic_window_t5

0x0004,

0xfcce,	// (0x0002e523) popup_snote2_single_graphic_window_t_ParamLimits

0xfcce,	// (0x0002e523) popup_snote2_single_graphic_window_t

0x7446,	// (0x00025c9b) clock_nsta_pane_cp2_t1

0x7446,	// (0x00025c9b) clock_nsta_pane_cp2_t2

0x0001,

0xfae2,	// (0x0002e337) clock_nsta_pane_cp2_t

0xcdbd,	// (0x0002b612) form_field_data_wide_pane_g1_ParamLimits

0x4a35,	// (0x0002328a) form_field_data_wide_pane_g2_ParamLimits

0x4a35,	// (0x0002328a) form_field_data_wide_pane_g2

0x4a41,	// (0x00023296) form_field_data_wide_pane_g3_ParamLimits

0x4a41,	// (0x00023296) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x0002df14) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x0002df14) form_field_data_wide_pane_g

0xac21,	// (0x00029476) grid_touch_3_pane_ParamLimits

0xac21,	// (0x00029476) grid_touch_3_pane

0xbb05,	// (0x0002a35a) cell_touch_3_pane_ParamLimits

0xbb05,	// (0x0002a35a) cell_touch_3_pane

0x773e,	// (0x00025f93) cell_touch_3_pane_g1

0x773e,	// (0x00025f93) cell_touch_3_pane_g2

0x0001,

0xfb67,	// (0x0002e3bc) cell_touch_3_pane_g

0x4603,	// (0x00022e58) cont_query_data_pane

0x460b,	// (0x00022e60) cont_query_data_pane_cp1

0xbb33,	// (0x0002a388) button_value_adjust_pane_cp7

0xbb3b,	// (0x0002a390) query_popup_pane_cp3

0x4faf,	// (0x00023804) bg_popup_sub_pane_cp22_ParamLimits

0x958d,	// (0x00027de2) navi_navi_volume_pane_cp2

0x95a8,	// (0x00027dfd) popup_side_volume_key_window_g2

0x95b7,	// (0x00027e0c) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x0002dfa6) popup_side_volume_key_window_g

0x95d4,	// (0x00027e29) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x0002dfad) popup_side_volume_key_window_t

0x51df,	// (0x00023a34) popup_side_volume_key_window_ParamLimits

0xc9f8,	// (0x0002b24d) list_double_graphic_pane_g4_ParamLimits

0xc9f8,	// (0x0002b24d) list_double_graphic_pane_g4

0xd17b,	// (0x0002b9d0) list_single_2heading_msg_pane_ParamLimits

0xd17b,	// (0x0002b9d0) list_single_2heading_msg_pane

0xed5d,	// (0x0002d5b2) list_single_2heading_msg_pane_g1_ParamLimits

0xed5d,	// (0x0002d5b2) list_single_2heading_msg_pane_g1

0xc827,	// (0x0002b07c) list_single_2heading_msg_pane_g2_ParamLimits

0xc827,	// (0x0002b07c) list_single_2heading_msg_pane_g2

0xed69,	// (0x0002d5be) list_single_2heading_msg_pane_g3_ParamLimits

0xed69,	// (0x0002d5be) list_single_2heading_msg_pane_g3

0xed75,	// (0x0002d5ca) list_single_2heading_msg_pane_g4_ParamLimits

0xed75,	// (0x0002d5ca) list_single_2heading_msg_pane_g4

0x0003,

0xfcd9,	// (0x0002e52e) list_single_2heading_msg_pane_g_ParamLimits

0xfcd9,	// (0x0002e52e) list_single_2heading_msg_pane_g

0xed8d,	// (0x0002d5e2) list_single_2heading_msg_pane_t1_ParamLimits

0xed8d,	// (0x0002d5e2) list_single_2heading_msg_pane_t1

0xedb5,	// (0x0002d60a) list_single_2heading_msg_pane_t2_ParamLimits

0xedb5,	// (0x0002d60a) list_single_2heading_msg_pane_t2

0xede9,	// (0x0002d63e) list_single_2heading_msg_pane_t3_ParamLimits

0xede9,	// (0x0002d63e) list_single_2heading_msg_pane_t3

0xee22,	// (0x0002d677) list_single_2heading_msg_pane_t4_ParamLimits

0xee22,	// (0x0002d677) list_single_2heading_msg_pane_t4

0x0003,

0xfce2,	// (0x0002e537) list_single_2heading_msg_pane_t_ParamLimits

0xfce2,	// (0x0002e537) list_single_2heading_msg_pane_t

0x43c8,	// (0x00022c1d) title_pane_g4_ParamLimits

0x43c8,	// (0x00022c1d) title_pane_g4

0x92b1,	// (0x00027b06) title_pane_stacon_g3_ParamLimits

0x92b1,	// (0x00027b06) title_pane_stacon_g3

0x8038,	// (0x0002688d) list_single_2graphic_im_pane_g4_ParamLimits

0x8038,	// (0x0002688d) list_single_2graphic_im_pane_g4

0x68f4,	// (0x00025149) popup_side_volume_key_window_cp

0x6dc1,	// (0x00025616) main_idle_act2_pane_t1

0xa282,	// (0x00028ad7) toolbar_button_pane_g10

0x91b1,	// (0x00027a06) popup_toolbar_window_cp1

0x7437,	// (0x00025c8c) clock_nsta_pane_cp_t1

0x7437,	// (0x00025c8c) clock_nsta_pane_cp_t2

0x0001,

0xfadd,	// (0x0002e332) clock_nsta_pane_cp_t

0x958d,	// (0x00027de2) navi_navi_volume_pane_cp2_ParamLimits

0x959c,	// (0x00027df1) popup_side_volume_key_window_g1_ParamLimits

0x95a8,	// (0x00027dfd) popup_side_volume_key_window_g2_ParamLimits

0x95b7,	// (0x00027e0c) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x0002dfa6) popup_side_volume_key_window_g_ParamLimits

0xaf40,	// (0x00029795) fep_hwr_aid_pane

0xafe7,	// (0x0002983c) bg_fep_hwr_top_pane_g4_ParamLimits

0x77c0,	// (0x00026015) fep_hwr_top_pane_g1_ParamLimits

0x77ae,	// (0x00026003) fep_hwr_top_pane_g2_ParamLimits

0xb007,	// (0x0002985c) fep_hwr_top_pane_g3_ParamLimits

0xfb32,	// (0x0002e387) fep_hwr_top_pane_g_ParamLimits

0xb01c,	// (0x00029871) fep_hwr_top_text_pane_ParamLimits

0x6696,	// (0x00024eeb) aid_touch_tab_arrow_arrow_2

0x668d,	// (0x00024ee2) aid_touch_tab_arrow_left_2

0xaf54,	// (0x000297a9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xaf8b,	// (0x000297e0) fep_hwr_prediction_pane

0x78ad,	// (0x00026102) fep_vkb_prediction_pane

0xb24b,	// (0x00029aa0) fep_vkb_side_pane_g3_ParamLimits

0xb24b,	// (0x00029aa0) fep_vkb_side_pane_g3

0xb35a,	// (0x00029baf) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xb3c6,	// (0x00029c1b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xb3d3,	// (0x00029c28) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe1,	// (0x0002e436) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xbb60,	// (0x0002a3b5) fep_hwr_prediction_pane_g1

0xbb6a,	// (0x0002a3bf) fep_hwr_prediction_pane_g2

0xbb72,	// (0x0002a3c7) fep_hwr_prediction_pane_g3

0xbb7a,	// (0x0002a3cf) fep_hwr_prediction_pane_g4

0x0003,

0xfceb,	// (0x0002e540) fep_hwr_prediction_pane_g

0xbb82,	// (0x0002a3d7) fep_vkb_prediction_pane_g1

0xbb8c,	// (0x0002a3e1) fep_vkb_prediction_pane_g2

0xbb94,	// (0x0002a3e9) fep_vkb_prediction_pane_g3

0xbb9c,	// (0x0002a3f1) fep_vkb_prediction_pane_g4

0x0003,

0xfcf4,	// (0x0002e549) fep_vkb_prediction_pane_g

0xa80d,	// (0x00029062) slider_set_pane_g3

0xa821,	// (0x00029076) slider_set_pane_g4

0xa839,	// (0x0002908e) slider_set_pane_g5

0xa80d,	// (0x00029062) slider_set_pane_g6

0xa84f,	// (0x000290a4) slider_set_pane_g7

0x6b5b,	// (0x000253b0) slider_form_pane_g3

0x6b64,	// (0x000253b9) slider_form_pane_g4

0x6b6c,	// (0x000253c1) slider_form_pane_g5

0x6b5b,	// (0x000253b0) slider_form_pane_g6

0xa9c0,	// (0x00029215) slider_form_pane_g7

0x7013,	// (0x00025868) slider_set_pane_vc_g3

0x701c,	// (0x00025871) slider_set_pane_vc_g4

0x7025,	// (0x0002587a) slider_set_pane_vc_g5

0x7013,	// (0x00025868) slider_set_pane_vc_g6

0x702e,	// (0x00025883) slider_set_pane_vc_g7

0x7013,	// (0x00025868) slider_form_pane_vc_g1

0x701c,	// (0x00025871) slider_form_pane_vc_g2

0x7025,	// (0x0002587a) slider_form_pane_vc_g3

0x7013,	// (0x00025868) slider_form_pane_vc_g4

0x71e1,	// (0x00025a36) slider_form_pane_vc_g5

0x0004,

0xfac3,	// (0x0002e318) slider_form_pane_vc_g

0x43aa,	// (0x00022bff) main_idle_act3_pane

0xbba4,	// (0x0002a3f9) ai3_links_pane

0xbbad,	// (0x0002a402) popup_ai3_data_window_ParamLimits

0xbbad,	// (0x0002a402) popup_ai3_data_window

0x43aa,	// (0x00022bff) grid_ai3_links_pane

0xbbc7,	// (0x0002a41c) cell_ai3_links_pane_ParamLimits

0xbbc7,	// (0x0002a41c) cell_ai3_links_pane

0xbbdf,	// (0x0002a434) bg_popup_sub_pane_cp11

0xbbec,	// (0x0002a441) cell_ai3_links_pane_g1

0x43aa,	// (0x00022bff) bg_popup_sub_pane_cp12

0xbc11,	// (0x0002a466) heading_ai3_data_pane

0xbc19,	// (0x0002a46e) list_ai3_gene_pane

0xbc25,	// (0x0002a47a) popup_ai3_data_window_g1

0xbc2d,	// (0x0002a482) heading_ai3_data_pane_g1

0xbc35,	// (0x0002a48a) heading_ai3_data_pane_t1

0xbc43,	// (0x0002a498) list_double_ai3_gene_pane_ParamLimits

0xbc43,	// (0x0002a498) list_double_ai3_gene_pane

0xbc50,	// (0x0002a4a5) list_single_ai3_gene_pane_ParamLimits

0xbc50,	// (0x0002a4a5) list_single_ai3_gene_pane

0x7703,	// (0x00025f58) list_highlight_pane_cp7_ParamLimits

0x7703,	// (0x00025f58) list_highlight_pane_cp7

0xbc5d,	// (0x0002a4b2) list_single_a13_gene_pane_t1_ParamLimits

0xbc5d,	// (0x0002a4b2) list_single_a13_gene_pane_t1

0xbc74,	// (0x0002a4c9) list_single_ai3_gene_pane_g1

0xbc7d,	// (0x0002a4d2) list_single_ai3_gene_pane_g2

0x0001,

0xfcfd,	// (0x0002e552) list_single_ai3_gene_pane_g

0xbc85,	// (0x0002a4da) list_double_ai3_gene_pane_g1_ParamLimits

0xbc85,	// (0x0002a4da) list_double_ai3_gene_pane_g1

0xbc91,	// (0x0002a4e6) list_double_ai3_gene_pane_t1_ParamLimits

0xbc91,	// (0x0002a4e6) list_double_ai3_gene_pane_t1

0xbcad,	// (0x0002a502) list_double_ai3_gene_pane_t2_ParamLimits

0xbcad,	// (0x0002a502) list_double_ai3_gene_pane_t2

0xbcc3,	// (0x0002a518) list_double_ai3_gene_pane_t3_ParamLimits

0xbcc3,	// (0x0002a518) list_double_ai3_gene_pane_t3

0x0002,

0xfd02,	// (0x0002e557) list_double_ai3_gene_pane_t_ParamLimits

0xfd02,	// (0x0002e557) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xed53,	// (0x0002d5a8) aid_size_min_col_2

0xbb4c,	// (0x0002a3a1) aid_size_min_msg_ParamLimits

0xbb4c,	// (0x0002a3a1) aid_size_min_msg

0xb25f,	// (0x00029ab4) fep_vkb_top_text_pane_g2_ParamLimits

0xb25f,	// (0x00029ab4) fep_vkb_top_text_pane_g2

0x0001,

0xfb62,	// (0x0002e3b7) fep_vkb_top_text_pane_g_ParamLimits

0xfb62,	// (0x0002e3b7) fep_vkb_top_text_pane_g

0x43aa,	// (0x00022bff) main_hc_apps_shell_pane

0xbce0,	// (0x0002a535) grid_hc_apps_pane_ParamLimits

0xbce0,	// (0x0002a535) grid_hc_apps_pane

0xbcef,	// (0x0002a544) list_hc_apps_pane

0xbcf7,	// (0x0002a54c) scroll_pane_cp37_ParamLimits

0xbcf7,	// (0x0002a54c) scroll_pane_cp37

0xbd03,	// (0x0002a558) cell_hc_apps_pane_ParamLimits

0xbd03,	// (0x0002a558) cell_hc_apps_pane

0xbdb1,	// (0x0002a606) cell_hc_apps_pane_g1_ParamLimits

0xbdb1,	// (0x0002a606) cell_hc_apps_pane_g1

0xbde2,	// (0x0002a637) cell_hc_apps_pane_g2_ParamLimits

0xbde2,	// (0x0002a637) cell_hc_apps_pane_g2

0xbdfe,	// (0x0002a653) cell_hc_apps_pane_g3_ParamLimits

0xbdfe,	// (0x0002a653) cell_hc_apps_pane_g3

0x0002,

0xfd09,	// (0x0002e55e) cell_hc_apps_pane_g_ParamLimits

0xfd09,	// (0x0002e55e) cell_hc_apps_pane_g

0xbe20,	// (0x0002a675) cell_hc_apps_pane_t1_ParamLimits

0xbe20,	// (0x0002a675) cell_hc_apps_pane_t1

0x454d,	// (0x00022da2) grid_highlight_pane_cp10_ParamLimits

0x454d,	// (0x00022da2) grid_highlight_pane_cp10

0xbe60,	// (0x0002a6b5) list_single_hc_apps_pane_ParamLimits

0xbe60,	// (0x0002a6b5) list_single_hc_apps_pane

0xbebc,	// (0x0002a711) list_single_hc_apps_pane_g1

0xee47,	// (0x0002d69c) list_single_hc_apps_pane_g2

0x0001,

0xfd10,	// (0x0002e565) list_single_hc_apps_pane_g

0xee60,	// (0x0002d6b5) list_single_hc_apps_pane_g2_copy1

0xee7c,	// (0x0002d6d1) list_single_hc_apps_pane_t1

0x441a,	// (0x00022c6f) bg_set_opt_pane_cp_ParamLimits

0x8f09,	// (0x0002775e) setting_slider_pane_t1_ParamLimits

0x8f22,	// (0x00027777) setting_slider_pane_t2_ParamLimits

0x8f3c,	// (0x00027791) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002ddf7) setting_slider_pane_t_ParamLimits

0x8f54,	// (0x000277a9) slider_set_pane_ParamLimits

0x9989,	// (0x000281de) control_pane_g5_ParamLimits

0x9989,	// (0x000281de) control_pane_g5

0x6b17,	// (0x0002536c) slider_set_pane_g1_ParamLimits

0xa801,	// (0x00029056) slider_set_pane_g2_ParamLimits

0xa80d,	// (0x00029062) slider_set_pane_g3_ParamLimits

0xa821,	// (0x00029076) slider_set_pane_g4_ParamLimits

0xa839,	// (0x0002908e) slider_set_pane_g5_ParamLimits

0xa80d,	// (0x00029062) slider_set_pane_g6_ParamLimits

0xa84f,	// (0x000290a4) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0002e1f2) slider_set_pane_g_ParamLimits

0x52c0,	// (0x00023b15) navi_icon_text_pane_ParamLimits

0x9f53,	// (0x000287a8) aid_fill_nsta_2_ParamLimits

0x9f7d,	// (0x000287d2) aid_touch_tab_arrow_left_ParamLimits

0x9f89,	// (0x000287de) aid_touch_tab_arrow_right_ParamLimits

0x9ff5,	// (0x0002884a) clock_nsta_pane_ParamLimits

0xa6d7,	// (0x00028f2c) navi_icon_pane_g1_ParamLimits

0xa6e6,	// (0x00028f3b) navi_text_pane_t1_ParamLimits

0xad34,	// (0x00029589) navi_icon_text_pane_g1_ParamLimits

0xad43,	// (0x00029598) navi_icon_text_pane_t1_ParamLimits

0xbebc,	// (0x0002a711) list_single_hc_apps_pane_g1_ParamLimits

0xee47,	// (0x0002d69c) list_single_hc_apps_pane_g2_ParamLimits

0xfd10,	// (0x0002e565) list_single_hc_apps_pane_g_ParamLimits

0xee60,	// (0x0002d6b5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xee7c,	// (0x0002d6d1) list_single_hc_apps_pane_t1_ParamLimits

0x8d57,	// (0x000275ac) popup_toolbar2_fixed_window_ParamLimits

0x8d57,	// (0x000275ac) popup_toolbar2_fixed_window

0x9ec6,	// (0x0002871b) popup_toolbar2_float_window

0x43aa,	// (0x00022bff) bg_popup_sub_pane_cp27

0xbed5,	// (0x0002a72a) grid_toolbar2_float_pane

0x43aa,	// (0x00022bff) bg_popup_sub_pane_cp26

0xbed5,	// (0x0002a72a) grid_toolbar2_fixed_pane

0xbedd,	// (0x0002a732) cell_toolbar2_fixed_pane_ParamLimits

0xbedd,	// (0x0002a732) cell_toolbar2_fixed_pane

0xbeed,	// (0x0002a742) cell_toolbar2_fixed_pane_g1

0xbef6,	// (0x0002a74b) toolbar2_fixed_button_pane

0x59ca,	// (0x0002421f) toolbar2_fixed_button_pane_g1

0x59d2,	// (0x00024227) toolbar2_fixed_button_pane_g2

0x59da,	// (0x0002422f) toolbar2_fixed_button_pane_g3

0x59e2,	// (0x00024237) toolbar2_fixed_button_pane_g4

0x59ea,	// (0x0002423f) toolbar2_fixed_button_pane_g5

0x59f2,	// (0x00024247) toolbar2_fixed_button_pane_g6

0x59fa,	// (0x0002424f) toolbar2_fixed_button_pane_g7

0x5a02,	// (0x00024257) toolbar2_fixed_button_pane_g8

0x5a0a,	// (0x0002425f) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0002e0f4) toolbar2_fixed_button_pane_g

0xbefe,	// (0x0002a753) cell_toolbar2_float_pane_ParamLimits

0xbefe,	// (0x0002a753) cell_toolbar2_float_pane

0xbf0f,	// (0x0002a764) cell_toolbar2_float_pane_g1

0xbef6,	// (0x0002a74b) toolbar2_fixed_button_pane_cp

0xb139,	// (0x0002998e) fep_vkb_accented_list_pane_ParamLimits

0xb139,	// (0x0002998e) fep_vkb_accented_list_pane

0xb33a,	// (0x00029b8f) bg_popup_fep_shadow_pane_g9

0x5440,	// (0x00023c95) bg_popup_fep_shadow_pane_cp3

0x4b21,	// (0x00023376) list_accented_list_pane

0xbf18,	// (0x0002a76d) list_single_accented_list_pane_ParamLimits

0xbf18,	// (0x0002a76d) list_single_accented_list_pane

0x5440,	// (0x00023c95) list_highlight_pane_cp10

0xbf29,	// (0x0002a77e) list_single_accented_list_pane_t1

0x9e1e,	// (0x00028673) popup_slider_window_ParamLimits

0x9e1e,	// (0x00028673) popup_slider_window

0xbb43,	// (0x0002a398) aid_indentation_list_msg

0xd2bb,	// (0x0002bb10) bg_popup_window_pane_cp19

0xd325,	// (0x0002bb7a) popup_slider_window_g1

0xd341,	// (0x0002bb96) popup_slider_window_g2

0xd35d,	// (0x0002bbb2) popup_slider_window_g3

0x0005,

0xfd15,	// (0x0002e56a) popup_slider_window_g

0xd3b9,	// (0x0002bc0e) popup_slider_window_t1

0xd42d,	// (0x0002bc82) small_volume_slider_vertical_pane

0x773e,	// (0x00025f93) small_volume_slider_vertical_pane_g1

0x773e,	// (0x00025f93) small_volume_slider_vertical_pane_g2

0xd449,	// (0x0002bc9e) small_volume_slider_vertical_pane_g3

0x0002,

0xfd27,	// (0x0002e57c) small_volume_slider_vertical_pane_g

0x8b0f,	// (0x00027364) area_side_right_pane_ParamLimits

0x8b0f,	// (0x00027364) area_side_right_pane

0xbf67,	// (0x0002a7bc) aid_size_side_button_ParamLimits

0xbf67,	// (0x0002a7bc) aid_size_side_button

0xbf7b,	// (0x0002a7d0) grid_sctrl_middle_pane_ParamLimits

0xbf7b,	// (0x0002a7d0) grid_sctrl_middle_pane

0xbf9b,	// (0x0002a7f0) sctrl_sk_bottom_pane

0xbfac,	// (0x0002a801) sctrl_sk_top_pane

0xbfbe,	// (0x0002a813) aid_touch_sctrl_top

0xbfcb,	// (0x0002a820) bg_sctrl_sk_pane_ParamLimits

0xbfcb,	// (0x0002a820) bg_sctrl_sk_pane

0xbfd9,	// (0x0002a82e) sctrl_sk_top_pane_g1

0xbfe6,	// (0x0002a83b) sctrl_sk_top_pane_t1

0xbfbe,	// (0x0002a813) aid_touch_sctrl_bottom

0xbfcb,	// (0x0002a820) bg_sctrl_sk_pane_cp_ParamLimits

0xbfcb,	// (0x0002a820) bg_sctrl_sk_pane_cp

0xc001,	// (0x0002a856) sctrl_sk_bottom_pane_g1

0xbfe6,	// (0x0002a83b) sctrl_sk_bottom_pane_t1

0xc00a,	// (0x0002a85f) cell_sctrl_middle_pane_ParamLimits

0xc00a,	// (0x0002a85f) cell_sctrl_middle_pane

0xc025,	// (0x0002a87a) aid_touch_sctrl_middle_ParamLimits

0xc025,	// (0x0002a87a) aid_touch_sctrl_middle

0xc037,	// (0x0002a88c) bg_sctrl_middle_pane_ParamLimits

0xc037,	// (0x0002a88c) bg_sctrl_middle_pane

0xb35a,	// (0x00029baf) cell_sctrl_middle_pane_g1_ParamLimits

0xb35a,	// (0x00029baf) cell_sctrl_middle_pane_g1

0xc045,	// (0x0002a89a) cell_sctrl_middle_pane_g2_ParamLimits

0xc045,	// (0x0002a89a) cell_sctrl_middle_pane_g2

0x0001,

0xfd33,	// (0x0002e588) cell_sctrl_middle_pane_g_ParamLimits

0xfd33,	// (0x0002e588) cell_sctrl_middle_pane_g

0x59ca,	// (0x0002421f) bg_sctrl_middle_pane_g1

0x59da,	// (0x0002422f) bg_sctrl_middle_pane_g2

0x59d2,	// (0x00024227) bg_sctrl_middle_pane_g3

0x59ea,	// (0x0002423f) bg_sctrl_middle_pane_g4

0x59e2,	// (0x00024237) bg_sctrl_middle_pane_g5

0x59f2,	// (0x00024247) bg_sctrl_middle_pane_g6

0x59fa,	// (0x0002424f) bg_sctrl_middle_pane_g7

0x5a0a,	// (0x0002425f) bg_sctrl_middle_pane_g8

0x0007,

0xfd38,	// (0x0002e58d) bg_sctrl_middle_pane_g

0x5a02,	// (0x00024257) bg_sctrl_middle_pane_g8_copy1

0x59ca,	// (0x0002421f) bg_sctrl_sk_pane_g1

0x59d2,	// (0x00024227) bg_sctrl_sk_pane_g2

0x59da,	// (0x0002422f) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0002e0f4) bg_sctrl_sk_pane_g

0x4954,	// (0x000231a9) aid_size_touch_scroll_bar

0x59e2,	// (0x00024237) bg_sctrl_sk_pane_g4

0x59ea,	// (0x0002423f) bg_sctrl_sk_pane_g5

0x59f2,	// (0x00024247) bg_sctrl_sk_pane_g6

0x59fa,	// (0x0002424f) bg_sctrl_sk_pane_g7

0x5a02,	// (0x00024257) bg_sctrl_sk_pane_g8

0x5a0a,	// (0x0002425f) bg_sctrl_sk_pane_g9

0x56c4,	// (0x00023f19) popup_fep_china_hwr2_fs_candidate_window

0x9b26,	// (0x0002837b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9b26,	// (0x0002837b) popup_fep_china_hwr2_fs_control_window

0xb35a,	// (0x00029baf) sctrl_sk_top_pane_g2

0x0001,

0xfd2e,	// (0x0002e583) sctrl_sk_top_pane_g

0xd452,	// (0x0002bca7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd452,	// (0x0002bca7) aid_fep_china_hwr2_fs_cell

0xd464,	// (0x0002bcb9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd464,	// (0x0002bcb9) bg_popup_fep_shadow_pane_cp4

0xd47b,	// (0x0002bcd0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd47b,	// (0x0002bcd0) bg_popup_fep_shadow_pane_cp5

0xd48d,	// (0x0002bce2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd48d,	// (0x0002bce2) popup_fep_china_hwr2_fs_control_bar_grid

0xd49d,	// (0x0002bcf2) popup_fep_china_hwr2_fs_control_funtion_grid

0xd4a5,	// (0x0002bcfa) aid_fep_china_hwr2_fs_candi_cell

0x43aa,	// (0x00022bff) bg_popup_fep_shadow_pane_cp6

0xd4af,	// (0x0002bd04) popup_fep_china_hwr2_fs_candidate_grid

0xd4b9,	// (0x0002bd0e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4b9,	// (0x0002bd0e) cell_fep_china_hwr2_fs_funtion_grid

0x773e,	// (0x00025f93) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd4d1,	// (0x0002bd26) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd4d1,	// (0x0002bd26) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd4df,	// (0x0002bd34) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd4df,	// (0x0002bd34) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd49,	// (0x0002e59e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd49,	// (0x0002e59e) cell_fep_china_hwr2_fs_funtion_grid_g

0xd4f5,	// (0x0002bd4a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd4f5,	// (0x0002bd4a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd50a,	// (0x0002bd5f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd50a,	// (0x0002bd5f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd4e,	// (0x0002e5a3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd4e,	// (0x0002e5a3) cell_fep_china_hwr2_fs_funtion_grid_t

0xd526,	// (0x0002bd7b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd52e,	// (0x0002bd83) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd536,	// (0x0002bd8b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd53,	// (0x0002e5a8) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd53e,	// (0x0002bd93) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd53e,	// (0x0002bd93) cell_fep_china_hwr2_fs_candidate_grid

0xd557,	// (0x0002bdac) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd55f,	// (0x0002bdb4) popup_fep_china_hwr2_fs_candidate_grid_g21

0x773e,	// (0x00025f93) cell_fep_china_hwr2_fs_candidate_grid_g1

0x773e,	// (0x00025f93) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb67,	// (0x0002e3bc) cell_fep_china_hwr2_fs_candidate_grid_g

0xd567,	// (0x0002bdbc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5817,	// (0x0002406c) clock_nsta_pane_cp_24_ParamLimits

0x5817,	// (0x0002406c) clock_nsta_pane_cp_24

0x587f,	// (0x000240d4) indicator_nsta_pane_cp_24_ParamLimits

0x587f,	// (0x000240d4) indicator_nsta_pane_cp_24

0x6597,	// (0x00024dec) heading_pane_g1

0x0001,

0xf904,	// (0x0002e159) heading_pane_g

0x6c4e,	// (0x000254a3) grid_sct_catagory_button_pane

0x6724,	// (0x00024f79) scroll_pane_cp5_ParamLimits

0x749c,	// (0x00025cf1) button_value_adjust_pane_cp5_ParamLimits

0x749c,	// (0x00025cf1) button_value_adjust_pane_cp5

0x755a,	// (0x00025daf) form2_midp_time_pane_ParamLimits

0xd575,	// (0x0002bdca) cell_sct_catagory_button_pane_ParamLimits

0xd575,	// (0x0002bdca) cell_sct_catagory_button_pane

0x7703,	// (0x00025f58) bg_button_pane_cp01_ParamLimits

0x7703,	// (0x00025f58) bg_button_pane_cp01

0x773e,	// (0x00025f93) cell_sct_catagory_button_pane_g1

0x9e55,	// (0x000286aa) popup_tb_extension_window

0xd587,	// (0x0002bddc) aid_size_cell_ext_ParamLimits

0xd587,	// (0x0002bddc) aid_size_cell_ext

0x454d,	// (0x00022da2) bg_tb_trans_pane_cp1_ParamLimits

0x454d,	// (0x00022da2) bg_tb_trans_pane_cp1

0xd5a7,	// (0x0002bdfc) grid_tb_ext_pane_ParamLimits

0xd5a7,	// (0x0002bdfc) grid_tb_ext_pane

0xd5d5,	// (0x0002be2a) cell_tb_ext_pane_ParamLimits

0xd5d5,	// (0x0002be2a) cell_tb_ext_pane

0xd5ec,	// (0x0002be41) cell_tb_ext_pane_g1_ParamLimits

0xd5ec,	// (0x0002be41) cell_tb_ext_pane_g1

0xd609,	// (0x0002be5e) cell_tb_ext_pane_t1

0x454d,	// (0x00022da2) list_highlight_pane_cp11_ParamLimits

0x454d,	// (0x00022da2) list_highlight_pane_cp11

0x8d76,	// (0x000275cb) popup_uni_indicator_window_ParamLimits

0x8d76,	// (0x000275cb) popup_uni_indicator_window

0x4a1b,	// (0x00023270) bg_popup_sub_pane_cp14

0xd624,	// (0x0002be79) list_uniindi_pane

0xd630,	// (0x0002be85) uniindi_top_pane

0x454d,	// (0x00022da2) bg_uniindi_top_pane

0xd64f,	// (0x0002bea4) uniindi_top_pane_g1

0xd665,	// (0x0002beba) uniindi_top_pane_g2

0x0003,

0xfd5a,	// (0x0002e5af) uniindi_top_pane_g

0xd68f,	// (0x0002bee4) uniindi_top_pane_t1

0xd6b9,	// (0x0002bf0e) list_single_uniindi_pane_ParamLimits

0xd6b9,	// (0x0002bf0e) list_single_uniindi_pane

0x773e,	// (0x00025f93) bg_uniindi_top_pane_g1

0xd6cc,	// (0x0002bf21) list_single_uniindi_pane_g1

0xd6df,	// (0x0002bf34) list_single_uniindi_pane_t1

0x8bec,	// (0x00027441) control_bg_pane

0xd704,	// (0x0002bf59) bg_sctrl_sk_pane_cp1

0xd70d,	// (0x0002bf62) bg_sctrl_sk_pane_cp2

0xd716,	// (0x0002bf6b) control_bg_pane_g1

0xd71f,	// (0x0002bf74) control_bg_pane_g2

0x0001,

0xfd63,	// (0x0002e5b8) control_bg_pane_g

0x73ab,	// (0x00025c00) cell_indicator_nsta_pane_g1_ParamLimits

0xac65,	// (0x000294ba) cell_indicator_nsta_pane_g2_ParamLimits

0xfad8,	// (0x0002e32d) cell_indicator_nsta_pane_g_ParamLimits

0xeb10,	// (0x0002d365) form2_midp_time_pane_t1_ParamLimits

0x4796,	// (0x00022feb) main_idle_act4_pane_ParamLimits

0x4796,	// (0x00022feb) main_idle_act4_pane

0x9e55,	// (0x000286aa) popup_tb_extension_window_ParamLimits

0xd5c5,	// (0x0002be1a) tb_ext_find_pane_ParamLimits

0xd5c5,	// (0x0002be1a) tb_ext_find_pane

0xd728,	// (0x0002bf7d) ai_gene_pane_1_cp1

0x54c2,	// (0x00023d17) ai_gene_pane_2_cp1

0xd730,	// (0x0002bf85) list_single_idle_plugin_calendar_pane

0xd739,	// (0x0002bf8e) list_single_idle_plugin_notification_pane

0xd742,	// (0x0002bf97) list_single_idle_plugin_player_pane

0xd74b,	// (0x0002bfa0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd74b,	// (0x0002bfa0) list_single_idle_plugin_shortcut_pane

0xd76d,	// (0x0002bfc2) main_idle_act4_pane_t1

0xd77f,	// (0x0002bfd4) main_idle_act4_pane_t2

0x0001,

0xfd68,	// (0x0002e5bd) main_idle_act4_pane_t

0xd791,	// (0x0002bfe6) middle_sk_idle_act4_pane_ParamLimits

0xd791,	// (0x0002bfe6) middle_sk_idle_act4_pane

0xd7a7,	// (0x0002bffc) popup_clock_digital_analogue_window_cp2

0xd7c1,	// (0x0002c016) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7c1,	// (0x0002c016) shortcut_wheel_idle_act4_pane

0x773e,	// (0x00025f93) shortcut_wheel_idle_act4_pane_g1

0x773e,	// (0x00025f93) shortcut_wheel_idle_act4_pane_g2

0x773e,	// (0x00025f93) shortcut_wheel_idle_act4_pane_g3

0x773e,	// (0x00025f93) shortcut_wheel_idle_act4_pane_g4

0x773e,	// (0x00025f93) shortcut_wheel_idle_act4_pane_g5

0xd7d5,	// (0x0002c02a) shortcut_wheel_idle_act4_pane_g6

0xd7dd,	// (0x0002c032) shortcut_wheel_idle_act4_pane_g7

0xd7e5,	// (0x0002c03a) shortcut_wheel_idle_act4_pane_g8

0xd7ed,	// (0x0002c042) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6d,	// (0x0002e5c2) shortcut_wheel_idle_act4_pane_g

0x78e5,	// (0x0002613a) middle_sk_idle_act4_pane_g1_ParamLimits

0x78e5,	// (0x0002613a) middle_sk_idle_act4_pane_g1

0xd851,	// (0x0002c0a6) middle_sk_idle_act4_pane_g2_ParamLimits

0xd851,	// (0x0002c0a6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd90,	// (0x0002e5e5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd90,	// (0x0002e5e5) middle_sk_idle_act4_pane_g

0xd85d,	// (0x0002c0b2) middle_sk_idle_act4_pane_t1_ParamLimits

0xd85d,	// (0x0002c0b2) middle_sk_idle_act4_pane_t1

0xd87a,	// (0x0002c0cf) grid_ai_shortcut_pane_ParamLimits

0xd87a,	// (0x0002c0cf) grid_ai_shortcut_pane

0xd893,	// (0x0002c0e8) list_highlight_pane_cp16_ParamLimits

0xd893,	// (0x0002c0e8) list_highlight_pane_cp16

0xd8a0,	// (0x0002c0f5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd8a0,	// (0x0002c0f5) list_single_idle_plugin_shortcut_pane_g1

0xd8ac,	// (0x0002c101) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd8ac,	// (0x0002c101) list_single_idle_plugin_shortcut_pane_g2

0xd8c4,	// (0x0002c119) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd8c4,	// (0x0002c119) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd95,	// (0x0002e5ea) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd95,	// (0x0002e5ea) list_single_idle_plugin_shortcut_pane_g

0xd8d7,	// (0x0002c12c) cell_ai_shortcut_pane_ParamLimits

0xd8d7,	// (0x0002c12c) cell_ai_shortcut_pane

0xd8fb,	// (0x0002c150) cell_ai_shortcut_pane_g1_ParamLimits

0xd8fb,	// (0x0002c150) cell_ai_shortcut_pane_g1

0xd728,	// (0x0002bf7d) ai_gene_pane_1_cp2

0xd91d,	// (0x0002c172) ai_gene_pane_2_cp2

0xd925,	// (0x0002c17a) list_highlight_pane_cp15

0xd92e,	// (0x0002c183) list_single_idle_plugin_calendar_pane_g1

0xd925,	// (0x0002c17a) list_highlight_pane_cp17

0xd936,	// (0x0002c18b) list_single_idle_plugin_calendar_pane_g1_copy1

0xd93e,	// (0x0002c193) list_single_idle_plugin_player_pane_g1

0x6e4d,	// (0x000256a2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd9c,	// (0x0002e5f1) list_single_idle_plugin_player_pane_g

0xd946,	// (0x0002c19b) list_single_idle_plugin_player_pane_t1

0xd954,	// (0x0002c1a9) list_single_idle_plugin_player_pane_t2

0xd962,	// (0x0002c1b7) list_single_idle_plugin_player_pane_t3

0xd970,	// (0x0002c1c5) list_single_idle_plugin_player_pane_t4

0x0003,

0xfda1,	// (0x0002e5f6) list_single_idle_plugin_player_pane_t

0xd97e,	// (0x0002c1d3) wait_bar_pane_cp15

0xd986,	// (0x0002c1db) grid_ai_notification_pane

0x6e4d,	// (0x000256a2) list_single_idle_plugin_notification_pane_g1

0xd98f,	// (0x0002c1e4) cell_ai_notification_pane_ParamLimits

0xd98f,	// (0x0002c1e4) cell_ai_notification_pane

0xd99c,	// (0x0002c1f1) cell_ai_notification_pane_g1

0xd9a4,	// (0x0002c1f9) cell_ai_notification_pane_t1

0xd9b2,	// (0x0002c207) tb_ext_find_button_pane

0xd9ba,	// (0x0002c20f) tb_ext_find_pane_g1

0xd9c2,	// (0x0002c217) tb_ext_find_pane_t1

0x4f53,	// (0x000237a8) tb_ext_find_button_pane_g1

0xd9d0,	// (0x0002c225) tb_ext_find_button_pane_g2

0x0001,

0xfdaa,	// (0x0002e5ff) tb_ext_find_button_pane_g

0xd76d,	// (0x0002bfc2) main_idle_act4_pane_t1_ParamLimits

0xd77f,	// (0x0002bfd4) main_idle_act4_pane_t2_ParamLimits

0xfd68,	// (0x0002e5bd) main_idle_act4_pane_t_ParamLimits

0xd7a7,	// (0x0002bffc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd7b5,	// (0x0002c00a) sat_plugin_idle_act4_pane_ParamLimits

0xd7b5,	// (0x0002c00a) sat_plugin_idle_act4_pane

0xd9d9,	// (0x0002c22e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9d9,	// (0x0002c22e) sat_plugin_idle_act4_pane_t1

0xd9ec,	// (0x0002c241) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9ec,	// (0x0002c241) sat_plugin_idle_act4_pane_t2

0xd9ff,	// (0x0002c254) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd9ff,	// (0x0002c254) sat_plugin_idle_act4_pane_t3

0xda12,	// (0x0002c267) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda12,	// (0x0002c267) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdaf,	// (0x0002e604) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdaf,	// (0x0002e604) sat_plugin_idle_act4_pane_t

0x8cb1,	// (0x00027506) popup_battery_window_ParamLimits

0x8cb1,	// (0x00027506) popup_battery_window

0x454d,	// (0x00022da2) bg_popup_sub_pane_cp25_ParamLimits

0x454d,	// (0x00022da2) bg_popup_sub_pane_cp25

0xda25,	// (0x0002c27a) popup_battery_window_g1_ParamLimits

0xda25,	// (0x0002c27a) popup_battery_window_g1

0xda31,	// (0x0002c286) popup_battery_window_t1_ParamLimits

0xda31,	// (0x0002c286) popup_battery_window_t1

0xda43,	// (0x0002c298) popup_battery_window_t2_ParamLimits

0xda43,	// (0x0002c298) popup_battery_window_t2

0x0001,

0xfdb8,	// (0x0002e60d) popup_battery_window_t_ParamLimits

0xfdb8,	// (0x0002e60d) popup_battery_window_t

0x97be,	// (0x00028013) midp_canvas_pane_ParamLimits

0x9820,	// (0x00028075) midp_keypad_pane_ParamLimits

0x9820,	// (0x00028075) midp_keypad_pane

0x4b73,	// (0x000233c8) main_midp_pane_ParamLimits

0x7455,	// (0x00025caa) signal_pane_g2_cp_ParamLimits

0xda60,	// (0x0002c2b5) aid_size_cell_midp_keypad_ParamLimits

0xda60,	// (0x0002c2b5) aid_size_cell_midp_keypad

0xda7a,	// (0x0002c2cf) midp_keyp_game_grid_pane_ParamLimits

0xda7a,	// (0x0002c2cf) midp_keyp_game_grid_pane

0xda9a,	// (0x0002c2ef) midp_keyp_rocker_pane_ParamLimits

0xda9a,	// (0x0002c2ef) midp_keyp_rocker_pane

0xdad3,	// (0x0002c328) midp_keyp_sk_left_pane_ParamLimits

0xdad3,	// (0x0002c328) midp_keyp_sk_left_pane

0xdb2d,	// (0x0002c382) midp_keyp_sk_right_pane_ParamLimits

0xdb2d,	// (0x0002c382) midp_keyp_sk_right_pane

0x43aa,	// (0x00022bff) bg_button_pane_cp03

0xdb87,	// (0x0002c3dc) midp_keyp_sk_left_pane_g1

0x43aa,	// (0x00022bff) bg_button_pane_cp04

0xdb87,	// (0x0002c3dc) midp_keyp_sk_right_pane_g1

0x773e,	// (0x00025f93) midp_keyp_rocker_pane_g1

0xdb90,	// (0x0002c3e5) keyp_game_cell_pane_ParamLimits

0xdb90,	// (0x0002c3e5) keyp_game_cell_pane

0x43aa,	// (0x00022bff) bg_button_pane_cp02

0xdba3,	// (0x0002c3f8) keyp_game_cell_pane_g1

0x8cf5,	// (0x0002754a) popup_fep_vkb2_window_ParamLimits

0x8cf5,	// (0x0002754a) popup_fep_vkb2_window

0xc066,	// (0x0002a8bb) aid_size_cell_vkb2_ParamLimits

0xc066,	// (0x0002a8bb) aid_size_cell_vkb2

0xc0ba,	// (0x0002a90f) popup_fep_vkb2_window_g1_ParamLimits

0xc0ba,	// (0x0002a90f) popup_fep_vkb2_window_g1

0xc102,	// (0x0002a957) vkb2_area_bottom_pane_ParamLimits

0xc102,	// (0x0002a957) vkb2_area_bottom_pane

0xc14e,	// (0x0002a9a3) vkb2_area_keypad_pane_ParamLimits

0xc14e,	// (0x0002a9a3) vkb2_area_keypad_pane

0xc190,	// (0x0002a9e5) vkb2_area_top_pane_ParamLimits

0xc190,	// (0x0002a9e5) vkb2_area_top_pane

0xc20a,	// (0x0002aa5f) vkb2_top_entry_pane_ParamLimits

0xc20a,	// (0x0002aa5f) vkb2_top_entry_pane

0xc234,	// (0x0002aa89) vkb2_top_grid_left_pane_ParamLimits

0xc234,	// (0x0002aa89) vkb2_top_grid_left_pane

0xc252,	// (0x0002aaa7) vkb2_top_grid_right_pane_ParamLimits

0xc252,	// (0x0002aaa7) vkb2_top_grid_right_pane

0xc270,	// (0x0002aac5) vkb2_cell_keypad_pane_ParamLimits

0xc270,	// (0x0002aac5) vkb2_cell_keypad_pane

0xc341,	// (0x0002ab96) vkb2_area_bottom_grid_pane_ParamLimits

0xc341,	// (0x0002ab96) vkb2_area_bottom_grid_pane

0xc367,	// (0x0002abbc) vkb2_area_bottom_pane_g1_ParamLimits

0xc367,	// (0x0002abbc) vkb2_area_bottom_pane_g1

0xc38b,	// (0x0002abe0) vkb2_area_bottom_pane_g2_ParamLimits

0xc38b,	// (0x0002abe0) vkb2_area_bottom_pane_g2

0xc3b9,	// (0x0002ac0e) vkb2_area_bottom_pane_g3_ParamLimits

0xc3b9,	// (0x0002ac0e) vkb2_area_bottom_pane_g3

0x0002,

0xfdbd,	// (0x0002e612) vkb2_area_bottom_pane_g_ParamLimits

0xfdbd,	// (0x0002e612) vkb2_area_bottom_pane_g

0xc41a,	// (0x0002ac6f) vkb2_top_cell_left_pane_ParamLimits

0xc41a,	// (0x0002ac6f) vkb2_top_cell_left_pane

0xdbb4,	// (0x0002c409) vkb2_top_entry_pane_g1_ParamLimits

0xdbb4,	// (0x0002c409) vkb2_top_entry_pane_g1

0xdbc2,	// (0x0002c417) vkb2_top_entry_pane_t1_ParamLimits

0xdbc2,	// (0x0002c417) vkb2_top_entry_pane_t1

0xdbf4,	// (0x0002c449) vkb2_top_entry_pane_t2_ParamLimits

0xdbf4,	// (0x0002c449) vkb2_top_entry_pane_t2

0xdc26,	// (0x0002c47b) vkb2_top_entry_pane_t3_ParamLimits

0xdc26,	// (0x0002c47b) vkb2_top_entry_pane_t3

0x0002,

0xfdc4,	// (0x0002e619) vkb2_top_entry_pane_t_ParamLimits

0xfdc4,	// (0x0002e619) vkb2_top_entry_pane_t

0xc467,	// (0x0002acbc) vkb2_top_grid_right_pane_g1_ParamLimits

0xc467,	// (0x0002acbc) vkb2_top_grid_right_pane_g1

0xc47d,	// (0x0002acd2) vkb2_top_grid_right_pane_g2_ParamLimits

0xc47d,	// (0x0002acd2) vkb2_top_grid_right_pane_g2

0xc495,	// (0x0002acea) vkb2_top_grid_right_pane_g3_ParamLimits

0xc495,	// (0x0002acea) vkb2_top_grid_right_pane_g3

0xc4ad,	// (0x0002ad02) vkb2_top_grid_right_pane_g4_ParamLimits

0xc4ad,	// (0x0002ad02) vkb2_top_grid_right_pane_g4

0x0003,

0xfdcb,	// (0x0002e620) vkb2_top_grid_right_pane_g_ParamLimits

0xfdcb,	// (0x0002e620) vkb2_top_grid_right_pane_g

0xc4c3,	// (0x0002ad18) vkb2_top_cell_left_pane_g1

0xc4da,	// (0x0002ad2f) vkb2_cell_keypad_pane_g1_ParamLimits

0xc4da,	// (0x0002ad2f) vkb2_cell_keypad_pane_g1

0xdc4a,	// (0x0002c49f) vkb2_cell_keypad_pane_t1_ParamLimits

0xdc4a,	// (0x0002c49f) vkb2_cell_keypad_pane_t1

0xc4e8,	// (0x0002ad3d) vkb2_cell_bottom_grid_pane_ParamLimits

0xc4e8,	// (0x0002ad3d) vkb2_cell_bottom_grid_pane

0xc521,	// (0x0002ad76) vkb2_cell_bottom_grid_pane_g1

0xd7f5,	// (0x0002c04a) aid_call2_pane_cp02

0xd7fd,	// (0x0002c052) aid_call_pane_cp02

0xd805,	// (0x0002c05a) clock_digital_number_pane_cp10

0xd80d,	// (0x0002c062) clock_digital_number_pane_cp11

0xd815,	// (0x0002c06a) clock_digital_number_pane_cp12

0xd81d,	// (0x0002c072) clock_digital_number_pane_cp13

0xd825,	// (0x0002c07a) clock_digital_separator_pane_cp10

0x4f53,	// (0x000237a8) popup_clock_digital_analogue_window_cp2_g1

0x4f53,	// (0x000237a8) popup_clock_digital_analogue_window_cp2_g2

0xd82d,	// (0x0002c082) popup_clock_digital_analogue_window_cp2_g3

0x4f53,	// (0x000237a8) popup_clock_digital_analogue_window_cp2_g4

0xd82d,	// (0x0002c082) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd80,	// (0x0002e5d5) popup_clock_digital_analogue_window_cp2_g

0xd835,	// (0x0002c08a) popup_clock_digital_analogue_window_cp2_t1

0xd843,	// (0x0002c098) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd8b,	// (0x0002e5e0) popup_clock_digital_analogue_window_cp2_t

0x773e,	// (0x00025f93) clock_digital_number_pane_cp10_g1

0x773e,	// (0x00025f93) clock_digital_number_pane_cp10_g2

0x0001,

0xfb67,	// (0x0002e3bc) clock_digital_number_pane_cp10_g

0x773e,	// (0x00025f93) clock_digital_separator_pane_cp10_g1

0x773e,	// (0x00025f93) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb67,	// (0x0002e3bc) clock_digital_separator_pane_cp10_g

0xd671,	// (0x0002bec6) uniindi_top_pane_g3

0xd682,	// (0x0002bed7) uniindi_top_pane_g4

0xc2fb,	// (0x0002ab50) vkb2_row_keypad_pane_ParamLimits

0xc2fb,	// (0x0002ab50) vkb2_row_keypad_pane

0xc53d,	// (0x0002ad92) vkb2_cell_t_keypad_pane_ParamLimits

0xc53d,	// (0x0002ad92) vkb2_cell_t_keypad_pane

0xc54d,	// (0x0002ada2) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xc54d,	// (0x0002ada2) vkb2_cell_t_keypad_pane_cp08

0xc560,	// (0x0002adb5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xc560,	// (0x0002adb5) vkb2_cell_t_keypad_pane_cp09

0xc574,	// (0x0002adc9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xc574,	// (0x0002adc9) vkb2_cell_t_keypad_pane_cp01

0xc585,	// (0x0002adda) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xc585,	// (0x0002adda) vkb2_cell_t_keypad_pane_cp02

0xc596,	// (0x0002adeb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xc596,	// (0x0002adeb) vkb2_cell_t_keypad_pane_cp03

0xc5a7,	// (0x0002adfc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xc5a7,	// (0x0002adfc) vkb2_cell_t_keypad_pane_cp04

0xc5b8,	// (0x0002ae0d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xc5b8,	// (0x0002ae0d) vkb2_cell_t_keypad_pane_cp05

0xc5c9,	// (0x0002ae1e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xc5c9,	// (0x0002ae1e) vkb2_cell_t_keypad_pane_cp06

0xc5da,	// (0x0002ae2f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xc5da,	// (0x0002ae2f) vkb2_cell_t_keypad_pane_cp07

0xc5eb,	// (0x0002ae40) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xc5eb,	// (0x0002ae40) vkb2_cell_t_keypad_pane_cp10

0xb35a,	// (0x00029baf) vkb2_cell_t_keypad_pane_g1

0xdc61,	// (0x0002c4b6) vkb2_cell_t_keypad_pane_t1

0x8bec,	// (0x00027441) popup_grid_graphic2_window

0xdc73,	// (0x0002c4c8) aid_size_cell_graphic2_ParamLimits

0xdc73,	// (0x0002c4c8) aid_size_cell_graphic2

0x7aa7,	// (0x000262fc) bg_popup_window_pane_cp21_ParamLimits

0x7aa7,	// (0x000262fc) bg_popup_window_pane_cp21

0xdc9f,	// (0x0002c4f4) graphic2_pages_pane_ParamLimits

0xdc9f,	// (0x0002c4f4) graphic2_pages_pane

0xdce5,	// (0x0002c53a) grid_graphic2_control_pane_ParamLimits

0xdce5,	// (0x0002c53a) grid_graphic2_control_pane

0xdd13,	// (0x0002c568) grid_graphic2_pane_ParamLimits

0xdd13,	// (0x0002c568) grid_graphic2_pane

0xdd73,	// (0x0002c5c8) cell_graphic2_pane

0x43aa,	// (0x00022bff) main_comp_mode_pane

0xbc19,	// (0x0002a46e) list_ai3_gene_pane_ParamLimits

0xd2bb,	// (0x0002bb10) bg_popup_window_pane_cp19_ParamLimits

0xd2c7,	// (0x0002bb1c) bg_touch_area_indi_pane_ParamLimits

0xd2c7,	// (0x0002bb1c) bg_touch_area_indi_pane

0xd2dd,	// (0x0002bb32) bg_touch_area_indi_pane_cp01_ParamLimits

0xd2dd,	// (0x0002bb32) bg_touch_area_indi_pane_cp01

0xd2f3,	// (0x0002bb48) bg_touch_area_indi_pane_cp02_ParamLimits

0xd2f3,	// (0x0002bb48) bg_touch_area_indi_pane_cp02

0xd30b,	// (0x0002bb60) bg_touch_area_indi_pane_cp03_ParamLimits

0xd30b,	// (0x0002bb60) bg_touch_area_indi_pane_cp03

0xd325,	// (0x0002bb7a) popup_slider_window_g1_ParamLimits

0xd341,	// (0x0002bb96) popup_slider_window_g2_ParamLimits

0xd35d,	// (0x0002bbb2) popup_slider_window_g3_ParamLimits

0xfd15,	// (0x0002e56a) popup_slider_window_g_ParamLimits

0xd3b9,	// (0x0002bc0e) popup_slider_window_t1_ParamLimits

0xd42d,	// (0x0002bc82) small_volume_slider_vertical_pane_ParamLimits

0xdd73,	// (0x0002c5c8) cell_graphic2_pane_ParamLimits

0xddc2,	// (0x0002c617) bg_button_pane_cp10_ParamLimits

0xddc2,	// (0x0002c617) bg_button_pane_cp10

0xddd5,	// (0x0002c62a) bg_button_pane_cp11_ParamLimits

0xddd5,	// (0x0002c62a) bg_button_pane_cp11

0xdde8,	// (0x0002c63d) graphic2_pages_pane_g1_ParamLimits

0xdde8,	// (0x0002c63d) graphic2_pages_pane_g1

0xde03,	// (0x0002c658) graphic2_pages_pane_g2_ParamLimits

0xde03,	// (0x0002c658) graphic2_pages_pane_g2

0x0001,

0xfdd9,	// (0x0002e62e) graphic2_pages_pane_g_ParamLimits

0xfdd9,	// (0x0002e62e) graphic2_pages_pane_g

0xde1b,	// (0x0002c670) graphic2_pages_pane_t1_ParamLimits

0xde1b,	// (0x0002c670) graphic2_pages_pane_t1

0xde33,	// (0x0002c688) cell_graphic2_control_pane_ParamLimits

0xde33,	// (0x0002c688) cell_graphic2_control_pane

0xde4d,	// (0x0002c6a2) cell_graphic2_pane_g1_ParamLimits

0xde4d,	// (0x0002c6a2) cell_graphic2_pane_g1

0xde5a,	// (0x0002c6af) cell_graphic2_pane_g2_ParamLimits

0xde5a,	// (0x0002c6af) cell_graphic2_pane_g2

0xde67,	// (0x0002c6bc) cell_graphic2_pane_g3_ParamLimits

0xde67,	// (0x0002c6bc) cell_graphic2_pane_g3

0xde74,	// (0x0002c6c9) cell_graphic2_pane_g4_ParamLimits

0xde74,	// (0x0002c6c9) cell_graphic2_pane_g4

0xde81,	// (0x0002c6d6) cell_graphic2_pane_g5_ParamLimits

0xde81,	// (0x0002c6d6) cell_graphic2_pane_g5

0x0004,

0xfdde,	// (0x0002e633) cell_graphic2_pane_g_ParamLimits

0xfdde,	// (0x0002e633) cell_graphic2_pane_g

0xde9c,	// (0x0002c6f1) cell_graphic2_pane_t1_ParamLimits

0xde9c,	// (0x0002c6f1) cell_graphic2_pane_t1

0x5aba,	// (0x0002430f) grid_highlight_pane_cp11_ParamLimits

0x5aba,	// (0x0002430f) grid_highlight_pane_cp11

0x4a1b,	// (0x00023270) bg_button_pane_cp05

0xdeb2,	// (0x0002c707) cell_graphic2_control_pane_g1

0x773e,	// (0x00025f93) bg_touch_area_indi_pane_g1

0xdebf,	// (0x0002c714) aid_cmod_rocker_key_size

0xdec9,	// (0x0002c71e) aid_cmode_itu_key_size

0xded3,	// (0x0002c728) main_cmode_video_pane

0xdedd,	// (0x0002c732) main_comp_mode_itu_pane

0xdee9,	// (0x0002c73e) main_comp_mode_rocker_pane

0xdef5,	// (0x0002c74a) cell_cmode_rocker_pane_ParamLimits

0xdef5,	// (0x0002c74a) cell_cmode_rocker_pane

0xdf07,	// (0x0002c75c) cell_cmode_itu_pane_ParamLimits

0xdf07,	// (0x0002c75c) cell_cmode_itu_pane

0x4a1b,	// (0x00023270) bg_button_pane_cp06_ParamLimits

0x4a1b,	// (0x00023270) bg_button_pane_cp06

0x78e5,	// (0x0002613a) cell_cmode_rocker_pane_g1_ParamLimits

0x78e5,	// (0x0002613a) cell_cmode_rocker_pane_g1

0xd4d1,	// (0x0002bd26) cell_cmode_rocker_pane_g2_ParamLimits

0xd4d1,	// (0x0002bd26) cell_cmode_rocker_pane_g2

0x0001,

0xfde9,	// (0x0002e63e) cell_cmode_rocker_pane_g_ParamLimits

0xfde9,	// (0x0002e63e) cell_cmode_rocker_pane_g

0x43aa,	// (0x00022bff) bg_button_pane_cp07

0xdf1c,	// (0x0002c771) cell_cmode_itu_pane_g1

0xdf25,	// (0x0002c77a) cell_cmode_itu_pane_t1

0xdf33,	// (0x0002c788) cell_cmode_itu_pane_t2

0x0001,

0xfdee,	// (0x0002e643) cell_cmode_itu_pane_t

0xd6f4,	// (0x0002bf49) aid_touch_ctrl_left

0xd6fc,	// (0x0002bf51) aid_touch_ctrl_right

0x43aa,	// (0x00022bff) compa_mode_pane

0xdf41,	// (0x0002c796) aid_cmod_rocker_key_size_cp

0xdf4b,	// (0x0002c7a0) aid_cmode_itu_key_size_cp

0xdf55,	// (0x0002c7aa) compa_mode_pane_g1

0xdf5d,	// (0x0002c7b2) compa_mode_pane_g2

0xdf65,	// (0x0002c7ba) compa_mode_pane_g3

0x0002,

0xfdf3,	// (0x0002e648) compa_mode_pane_g

0xdf6d,	// (0x0002c7c2) main_comp_mode_itu_pane_cp

0xdf75,	// (0x0002c7ca) main_comp_mode_rocker_pane_cp

0xdf7d,	// (0x0002c7d2) cell_cmode_itu_pane_cp_ParamLimits

0xdf7d,	// (0x0002c7d2) cell_cmode_itu_pane_cp

0xdf92,	// (0x0002c7e7) cell_cmode_rocker_pane_cp_ParamLimits

0xdf92,	// (0x0002c7e7) cell_cmode_rocker_pane_cp

0x4a1b,	// (0x00023270) bg_button_pane_cp06_cp_ParamLimits

0x4a1b,	// (0x00023270) bg_button_pane_cp06_cp

0x78e5,	// (0x0002613a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x78e5,	// (0x0002613a) cell_cmode_rocker_pane_g1_cp

0x773e,	// (0x00025f93) cell_cmode_rocker_pane_g2_cp

0x43aa,	// (0x00022bff) bg_button_pane_cp07_cp

0x6b5b,	// (0x000253b0) cell_cmode_itu_pane_g1_cp

0xdfa4,	// (0x0002c7f9) cell_cmode_itu_pane_t1_cp

0xdfa4,	// (0x0002c7f9) cell_cmode_itu_pane_t2_cp

0xa9b6,	// (0x0002920b) settings_code_pane_cp2

0x441a,	// (0x00022c6f) bg_popup_window_pane_cp3_ParamLimits

0x4727,	// (0x00022f7c) heading_pane_cp3_ParamLimits

0x4733,	// (0x00022f88) listscroll_popup_graphic_pane_ParamLimits

0xaf40,	// (0x00029795) fep_hwr_aid_pane_ParamLimits

0xbfbe,	// (0x0002a813) aid_touch_sctrl_top_ParamLimits

0xbfd9,	// (0x0002a82e) sctrl_sk_top_pane_g1_ParamLimits

0xb35a,	// (0x00029baf) sctrl_sk_top_pane_g2_ParamLimits

0xfd2e,	// (0x0002e583) sctrl_sk_top_pane_g_ParamLimits

0xbfe6,	// (0x0002a83b) sctrl_sk_top_pane_t1_ParamLimits

0xbfbe,	// (0x0002a813) aid_touch_sctrl_bottom_ParamLimits

0xbfe6,	// (0x0002a83b) sctrl_sk_bottom_pane_t1_ParamLimits

0xd63d,	// (0x0002be92) aid_area_touch_clock

0xc1d2,	// (0x0002aa27) aid_vkb2_area_top_pane_cell_ParamLimits

0xc1d2,	// (0x0002aa27) aid_vkb2_area_top_pane_cell

0xc31d,	// (0x0002ab72) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc31d,	// (0x0002ab72) aid_vkb2_area_bottom_pane_cell

0xdbac,	// (0x0002c401) popup_char_count_window

0xdfb2,	// (0x0002c807) popup_char_count_window_g1

0xdfbb,	// (0x0002c810) popup_char_count_window_g2

0xdfc4,	// (0x0002c819) popup_char_count_window_g3

0x0002,

0xfdfa,	// (0x0002e64f) popup_char_count_window_g

0xdfcd,	// (0x0002c822) popup_char_count_window_t1

0xc098,	// (0x0002a8ed) popup_fep_char_preview_window_ParamLimits

0xc098,	// (0x0002a8ed) popup_fep_char_preview_window

0xc1f0,	// (0x0002aa45) vkb2_top_candi_pane_ParamLimits

0xc1f0,	// (0x0002aa45) vkb2_top_candi_pane

0xdfdb,	// (0x0002c830) cell_vkb2_top_candi_pane_ParamLimits

0xdfdb,	// (0x0002c830) cell_vkb2_top_candi_pane

0xc600,	// (0x0002ae55) bg_popup_fep_char_preview_window_ParamLimits

0xc600,	// (0x0002ae55) bg_popup_fep_char_preview_window

0xc60e,	// (0x0002ae63) popup_fep_char_preview_window_t1_ParamLimits

0xc60e,	// (0x0002ae63) popup_fep_char_preview_window_t1

0xe028,	// (0x0002c87d) bg_popup_fep_char_preview_window_g1

0xe030,	// (0x0002c885) bg_popup_fep_char_preview_window_g2

0xe038,	// (0x0002c88d) bg_popup_fep_char_preview_window_g3

0xe040,	// (0x0002c895) bg_popup_fep_char_preview_window_g4

0xe048,	// (0x0002c89d) bg_popup_fep_char_preview_window_g5

0xc648,	// (0x0002ae9d) bg_popup_fep_char_preview_window_g6

0xe050,	// (0x0002c8a5) bg_popup_fep_char_preview_window_g7

0xe058,	// (0x0002c8ad) bg_popup_fep_char_preview_window_g8

0xe060,	// (0x0002c8b5) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe01,	// (0x0002e656) bg_popup_fep_char_preview_window_g

0xb35a,	// (0x00029baf) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb35a,	// (0x00029baf) cell_vkb2_top_candi_pane_g1

0xb368,	// (0x00029bbd) cell_vkb2_top_candi_pane_g2_ParamLimits

0xb368,	// (0x00029bbd) cell_vkb2_top_candi_pane_g2

0xd21e,	// (0x0002ba73) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd21e,	// (0x0002ba73) cell_vkb2_top_candi_pane_g3

0xc650,	// (0x0002aea5) cell_vkb2_top_candi_pane_g4_ParamLimits

0xc650,	// (0x0002aea5) cell_vkb2_top_candi_pane_g4

0x7b53,	// (0x000263a8) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7b53,	// (0x000263a8) cell_vkb2_top_candi_pane_g5

0xc671,	// (0x0002aec6) cell_vkb2_top_candi_pane_g6_ParamLimits

0xc671,	// (0x0002aec6) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe14,	// (0x0002e669) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe14,	// (0x0002e669) cell_vkb2_top_candi_pane_g

0xc67f,	// (0x0002aed4) cell_vkb2_top_candi_pane_t1

0xa7ed,	// (0x00029042) aid_size_touch_slider_mark_ParamLimits

0xa7ed,	// (0x00029042) aid_size_touch_slider_mark

0xdcd5,	// (0x0002c52a) grid_graphic2_catg_pane_ParamLimits

0xdcd5,	// (0x0002c52a) grid_graphic2_catg_pane

0xdd4f,	// (0x0002c5a4) popup_grid_graphic2_window_t1_ParamLimits

0xdd4f,	// (0x0002c5a4) popup_grid_graphic2_window_t1

0xdd61,	// (0x0002c5b6) popup_grid_graphic2_window_t2_ParamLimits

0xdd61,	// (0x0002c5b6) popup_grid_graphic2_window_t2

0x0001,

0xfdd4,	// (0x0002e629) popup_grid_graphic2_window_t_ParamLimits

0xfdd4,	// (0x0002e629) popup_grid_graphic2_window_t

0x4a1b,	// (0x00023270) bg_button_pane_cp05_ParamLimits

0xdeb2,	// (0x0002c707) cell_graphic2_control_pane_g1_ParamLimits

0xe068,	// (0x0002c8bd) cell_graphic2_catg_pane_ParamLimits

0xe068,	// (0x0002c8bd) cell_graphic2_catg_pane

0x43aa,	// (0x00022bff) bg_button_pane_cp12

0xe07a,	// (0x0002c8cf) cell_graphic2_catg_pane_g1

0xd609,	// (0x0002be5e) cell_tb_ext_pane_t1_ParamLimits

0xc43a,	// (0x0002ac8f) vkb2_top_cell_right_narrow_pane_ParamLimits

0xc43a,	// (0x0002ac8f) vkb2_top_cell_right_narrow_pane

0xc452,	// (0x0002aca7) vkb2_top_cell_right_wide_pane_ParamLimits

0xc452,	// (0x0002aca7) vkb2_top_cell_right_wide_pane

0xaf32,	// (0x00029787) bg_vkb2_func_pane_ParamLimits

0xaf32,	// (0x00029787) bg_vkb2_func_pane

0xc4c3,	// (0x0002ad18) vkb2_top_cell_left_pane_g1_ParamLimits

0xaf32,	// (0x00029787) bg_vkb2_fuc_pane_cp03_ParamLimits

0xaf32,	// (0x00029787) bg_vkb2_fuc_pane_cp03

0xc521,	// (0x0002ad76) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x59da,	// (0x0002422f) bg_vkb2_func_pane_g1

0x59d2,	// (0x00024227) bg_vkb2_func_pane_g2

0x59e2,	// (0x00024237) bg_vkb2_func_pane_g3

0x59ea,	// (0x0002423f) bg_vkb2_func_pane_g4

0x59f2,	// (0x00024247) bg_vkb2_func_pane_g5

0x59fa,	// (0x0002424f) bg_vkb2_func_pane_g6

0x5a0a,	// (0x0002425f) bg_vkb2_func_pane_g7

0x5a02,	// (0x00024257) bg_vkb2_func_pane_g8

0x59ca,	// (0x0002421f) bg_vkb2_func_pane_g9

0x0008,

0xfe21,	// (0x0002e676) bg_vkb2_func_pane_g

0xaf32,	// (0x00029787) bg_vkb2_fuc_pane_cp01_ParamLimits

0xaf32,	// (0x00029787) bg_vkb2_fuc_pane_cp01

0xc4c3,	// (0x0002ad18) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xc4c3,	// (0x0002ad18) vkb2_top_cell_right_wide_pane_g1

0xaf32,	// (0x00029787) bg_vkb2_fuc_pane_cp02_ParamLimits

0xaf32,	// (0x00029787) bg_vkb2_fuc_pane_cp02

0xc521,	// (0x0002ad76) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xc521,	// (0x0002ad76) vkb2_top_cell_right_narrow_pane_g1

0xd23f,	// (0x0002ba94) aid_touch_area_decrease_ParamLimits

0xd23f,	// (0x0002ba94) aid_touch_area_decrease

0xd25d,	// (0x0002bab2) aid_touch_area_increase_ParamLimits

0xd25d,	// (0x0002bab2) aid_touch_area_increase

0xd269,	// (0x0002babe) aid_touch_area_mute_ParamLimits

0xd269,	// (0x0002babe) aid_touch_area_mute

0xd28d,	// (0x0002bae2) aid_touch_area_slider_ParamLimits

0xd28d,	// (0x0002bae2) aid_touch_area_slider

0xd379,	// (0x0002bbce) popup_slider_window_g4_ParamLimits

0xd379,	// (0x0002bbce) popup_slider_window_g4

0xd385,	// (0x0002bbda) popup_slider_window_g5_ParamLimits

0xd385,	// (0x0002bbda) popup_slider_window_g5

0xd3a7,	// (0x0002bbfc) popup_slider_window_g6_ParamLimits

0xd3a7,	// (0x0002bbfc) popup_slider_window_g6

0xd3e7,	// (0x0002bc3c) popup_slider_window_t2_ParamLimits

0xd3e7,	// (0x0002bc3c) popup_slider_window_t2

0x0001,

0xfd22,	// (0x0002e577) popup_slider_window_t_ParamLimits

0xfd22,	// (0x0002e577) popup_slider_window_t

0xd3ff,	// (0x0002bc54) slider_pane_ParamLimits

0xd3ff,	// (0x0002bc54) slider_pane

0xe083,	// (0x0002c8d8) slider_pane_g1_ParamLimits

0xe083,	// (0x0002c8d8) slider_pane_g1

0xe097,	// (0x0002c8ec) slider_pane_g2_ParamLimits

0xe097,	// (0x0002c8ec) slider_pane_g2

0xe0ad,	// (0x0002c902) slider_pane_g3_ParamLimits

0xe0ad,	// (0x0002c902) slider_pane_g3

0x0003,

0xfe34,	// (0x0002e689) slider_pane_g_ParamLimits

0xfe34,	// (0x0002e689) slider_pane_g

0x9eb1,	// (0x00028706) popup_tb_float_extension_window_ParamLimits

0x9eb1,	// (0x00028706) popup_tb_float_extension_window

0xe0d9,	// (0x0002c92e) aid_size_cell_tb_float_ext

0x43aa,	// (0x00022bff) bg_popup_sub_window_cp28

0xe0e5,	// (0x0002c93a) grid_tb_float_ext_pane

0xe0ef,	// (0x0002c944) cell_tb_float_ext_pane_ParamLimits

0xe0ef,	// (0x0002c944) cell_tb_float_ext_pane

0xe109,	// (0x0002c95e) cell_tb_float_ext_pane_g1

0xe112,	// (0x0002c967) grid_highlight_pane_cp12

0xb081,	// (0x000298d6) cell_last_hwr_side_pane_ParamLimits

0xb081,	// (0x000298d6) cell_last_hwr_side_pane

0x773e,	// (0x00025f93) cell_last_hwr_side_pane_g1

0xe11b,	// (0x0002c970) cell_last_hwr_side_pane_g2

0x0001,

0xfe3d,	// (0x0002e692) cell_last_hwr_side_pane_g

0xc3e9,	// (0x0002ac3e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc3e9,	// (0x0002ac3e) vkb2_area_bottom_space_btn_pane

0xb35a,	// (0x00029baf) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdc61,	// (0x0002c4b6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xc67f,	// (0x0002aed4) cell_vkb2_top_candi_pane_t1_ParamLimits

0xc69e,	// (0x0002aef3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xc69e,	// (0x0002aef3) vkb2_area_bottom_space_btn_pane_g1

0xc6d8,	// (0x0002af2d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xc6d8,	// (0x0002af2d) vkb2_area_bottom_space_btn_pane_g2

0xc70e,	// (0x0002af63) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xc70e,	// (0x0002af63) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe42,	// (0x0002e697) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe42,	// (0x0002e697) vkb2_area_bottom_space_btn_pane_g

0xaff5,	// (0x0002984a) cel_fep_hwr_func_pane_ParamLimits

0xaff5,	// (0x0002984a) cel_fep_hwr_func_pane

0xb031,	// (0x00029886) cell_hwr_side_button_pane_ParamLimits

0xb031,	// (0x00029886) cell_hwr_side_button_pane

0xd63d,	// (0x0002be92) aid_area_touch_clock_ParamLimits

0x454d,	// (0x00022da2) bg_uniindi_top_pane_ParamLimits

0xd64f,	// (0x0002bea4) uniindi_top_pane_g1_ParamLimits

0xd665,	// (0x0002beba) uniindi_top_pane_g2_ParamLimits

0xd671,	// (0x0002bec6) uniindi_top_pane_g3_ParamLimits

0xd682,	// (0x0002bed7) uniindi_top_pane_g4_ParamLimits

0xfd5a,	// (0x0002e5af) uniindi_top_pane_g_ParamLimits

0xd68f,	// (0x0002bee4) uniindi_top_pane_t1_ParamLimits

0x454d,	// (0x00022da2) bg_vkb2_func_pane_cp01_ParamLimits

0x454d,	// (0x00022da2) bg_vkb2_func_pane_cp01

0xe124,	// (0x0002c979) cel_fep_hwr_func_pane_g1_ParamLimits

0xe124,	// (0x0002c979) cel_fep_hwr_func_pane_g1

0x454d,	// (0x00022da2) bg_vkb2_func_pane_cp02_ParamLimits

0x454d,	// (0x00022da2) bg_vkb2_func_pane_cp02

0xe124,	// (0x0002c979) cell_hwr_side_button_pane_g1_ParamLimits

0xe124,	// (0x0002c979) cell_hwr_side_button_pane_g1

0x58e0,	// (0x00024135) status_pane_g4_ParamLimits

0x58e0,	// (0x00024135) status_pane_g4

0x58fa,	// (0x0002414f) status_pane_t1

0x75c3,	// (0x00025e18) form2_midp_gauge_slider_cont_pane

0x75cb,	// (0x00025e20) form2_midp_gauge_slider_pane_t1_ParamLimits

0xade6,	// (0x0002963b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xadf8,	// (0x0002964d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1a,	// (0x0002e36f) form2_midp_gauge_slider_pane_t_ParamLimits

0x75dd,	// (0x00025e32) form2_midp_slider_pane_ParamLimits

0xc058,	// (0x0002a8ad) aid_size_cell_func_vkb2_ParamLimits

0xc058,	// (0x0002a8ad) aid_size_cell_func_vkb2

0xe0c5,	// (0x0002c91a) slider_pane_g4_ParamLimits

0xe0c5,	// (0x0002c91a) slider_pane_g4

0xc758,	// (0x0002afad) form2_midp_gauge_slider_pane_t2_cp01

0xc766,	// (0x0002afbb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc766,	// (0x0002afbb) form2_midp_gauge_slider_pane_t3_cp01

0xc783,	// (0x0002afd8) form2_midp_slider_pane_cp01

0x43aa,	// (0x00022bff) navi_smil_pane

0xe154,	// (0x0002c9a9) navi_smil_pane_g1

0xe15c,	// (0x0002c9b1) navi_smil_pane_t1

0xe132,	// (0x0002c987) form2_midp_slider_pane_g1

0xe13b,	// (0x0002c990) form2_midp_slider_pane_g2

0xe143,	// (0x0002c998) form2_midp_slider_pane_g3

0xe132,	// (0x0002c987) form2_midp_slider_pane_g4

0xeeaa,	// (0x0002d6ff) form2_midp_slider_pane_g5

0x0004,

0xfe4b,	// (0x0002e6a0) form2_midp_slider_pane_g

0xc748,	// (0x0002af9d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xc748,	// (0x0002af9d) vkb2_area_bottom_space_btn_pane_g4

0xa018,	// (0x0002886d) lc0_navi_pane_ParamLimits

0xa018,	// (0x0002886d) lc0_navi_pane

0xa08e,	// (0x000288e3) lc0_stat_indi_pane_ParamLimits

0xa08e,	// (0x000288e3) lc0_stat_indi_pane

0xa0a5,	// (0x000288fa) ls0_title_pane_ParamLimits

0xa0a5,	// (0x000288fa) ls0_title_pane

0x4a1b,	// (0x00023270) bg_popup_sub_pane_cp14_ParamLimits

0xd624,	// (0x0002be79) list_uniindi_pane_ParamLimits

0xd630,	// (0x0002be85) uniindi_top_pane_ParamLimits

0xd6cc,	// (0x0002bf21) list_single_uniindi_pane_g1_ParamLimits

0xd6df,	// (0x0002bf34) list_single_uniindi_pane_t1_ParamLimits

0xc78c,	// (0x0002afe1) lc0_stat_clock_pane_ParamLimits

0xc78c,	// (0x0002afe1) lc0_stat_clock_pane

0xeeb3,	// (0x0002d708) lc0_stat_indi_pane_g1_ParamLimits

0xeeb3,	// (0x0002d708) lc0_stat_indi_pane_g1

0xeec0,	// (0x0002d715) lc0_stat_indi_pane_g2_ParamLimits

0xeec0,	// (0x0002d715) lc0_stat_indi_pane_g2

0x0001,

0xfe56,	// (0x0002e6ab) lc0_stat_indi_pane_g_ParamLimits

0xfe56,	// (0x0002e6ab) lc0_stat_indi_pane_g

0xc799,	// (0x0002afee) lc0_uni_indicator_pane_ParamLimits

0xc799,	// (0x0002afee) lc0_uni_indicator_pane

0xe16a,	// (0x0002c9bf) ls0_title_pane_g1_ParamLimits

0xe16a,	// (0x0002c9bf) ls0_title_pane_g1

0xeecd,	// (0x0002d722) ls0_title_pane_t1_ParamLimits

0xeecd,	// (0x0002d722) ls0_title_pane_t1

0xc7a6,	// (0x0002affb) lc0_uni_indicator_pane_g1_ParamLimits

0xc7a6,	// (0x0002affb) lc0_uni_indicator_pane_g1

0xe17e,	// (0x0002c9d3) lc0_stat_clock_pane_t1

0x43aa,	// (0x00022bff) main_ai5_pane

0xe18c,	// (0x0002c9e1) ai5_sk_pane_ParamLimits

0xe18c,	// (0x0002c9e1) ai5_sk_pane

0xef03,	// (0x0002d758) cell_ai5_widget_pane_ParamLimits

0xef03,	// (0x0002d758) cell_ai5_widget_pane

0xe199,	// (0x0002c9ee) aid_size_cell_widget_grid

0xe1ad,	// (0x0002ca02) bg_ai5_widget_pane_ParamLimits

0xe1ad,	// (0x0002ca02) bg_ai5_widget_pane

0xefa1,	// (0x0002d7f6) cell_ai5_widget_pane_g2

0xefb1,	// (0x0002d806) cell_ai5_widget_pane_g3

0xefc5,	// (0x0002d81a) cell_ai5_widget_pane_g4

0xefd1,	// (0x0002d826) cell_ai5_widget_pane_g5

0xefdd,	// (0x0002d832) cell_ai5_widget_pane_g6

0xefe9,	// (0x0002d83e) cell_ai5_widget_pane_g7

0xf031,	// (0x0002d886) cell_ai5_widget_pane_t1_ParamLimits

0xf031,	// (0x0002d886) cell_ai5_widget_pane_t1

0xf04e,	// (0x0002d8a3) cell_ai5_widget_pane_t2_ParamLimits

0xf04e,	// (0x0002d8a3) cell_ai5_widget_pane_t2

0xf066,	// (0x0002d8bb) cell_ai5_widget_pane_t3_ParamLimits

0xf066,	// (0x0002d8bb) cell_ai5_widget_pane_t3

0xf07e,	// (0x0002d8d3) cell_ai5_widget_pane_t4_ParamLimits

0xf07e,	// (0x0002d8d3) cell_ai5_widget_pane_t4

0xf098,	// (0x0002d8ed) cell_ai5_widget_pane_t5_ParamLimits

0xf098,	// (0x0002d8ed) cell_ai5_widget_pane_t5

0xe1b9,	// (0x0002ca0e) cell_ai5_widget_pane_t6_ParamLimits

0xe1b9,	// (0x0002ca0e) cell_ai5_widget_pane_t6

0xe1cb,	// (0x0002ca20) cell_ai5_widget_pane_t7_ParamLimits

0xe1cb,	// (0x0002ca20) cell_ai5_widget_pane_t7

0xf0b7,	// (0x0002d90c) cell_ai5_widget_pane_t8_ParamLimits

0xf0b7,	// (0x0002d90c) cell_ai5_widget_pane_t8

0x0009,

0xfe70,	// (0x0002e6c5) cell_ai5_widget_pane_t_ParamLimits

0xfe70,	// (0x0002e6c5) cell_ai5_widget_pane_t

0xf0ff,	// (0x0002d954) grid_ai5_widget_pane

0x4a1b,	// (0x00023270) highlight_cell_ai5_widget_pane_ParamLimits

0x4a1b,	// (0x00023270) highlight_cell_ai5_widget_pane

0xf117,	// (0x0002d96c) ai5_sk_left_pane

0xf121,	// (0x0002d976) ai5_sk_middle_pane

0xf12b,	// (0x0002d980) ai5_sk_right_pane

0xe1e4,	// (0x0002ca39) bg_ai5_widget_pane_g1_ParamLimits

0xe1e4,	// (0x0002ca39) bg_ai5_widget_pane_g1

0xe1f0,	// (0x0002ca45) bg_ai5_widget_pane_g2_ParamLimits

0xe1f0,	// (0x0002ca45) bg_ai5_widget_pane_g2

0xe1fc,	// (0x0002ca51) bg_ai5_widget_pane_g3_ParamLimits

0xe1fc,	// (0x0002ca51) bg_ai5_widget_pane_g3

0xe208,	// (0x0002ca5d) bg_ai5_widget_pane_g4_ParamLimits

0xe208,	// (0x0002ca5d) bg_ai5_widget_pane_g4

0xe214,	// (0x0002ca69) bg_ai5_widget_pane_g5_ParamLimits

0xe214,	// (0x0002ca69) bg_ai5_widget_pane_g5

0xe220,	// (0x0002ca75) bg_ai5_widget_pane_g6_ParamLimits

0xe220,	// (0x0002ca75) bg_ai5_widget_pane_g6

0xe22c,	// (0x0002ca81) bg_ai5_widget_pane_g7_ParamLimits

0xe22c,	// (0x0002ca81) bg_ai5_widget_pane_g7

0xe238,	// (0x0002ca8d) bg_ai5_widget_pane_g8_ParamLimits

0xe238,	// (0x0002ca8d) bg_ai5_widget_pane_g8

0xe244,	// (0x0002ca99) bg_ai5_widget_pane_g9_ParamLimits

0xe244,	// (0x0002ca99) bg_ai5_widget_pane_g9

0x0008,

0xfe85,	// (0x0002e6da) bg_ai5_widget_pane_g_ParamLimits

0xfe85,	// (0x0002e6da) bg_ai5_widget_pane_g

0xe277,	// (0x0002cacc) cell_shortcut_ai5_widget_pane_ParamLimits

0xe277,	// (0x0002cacc) cell_shortcut_ai5_widget_pane

0x4456,	// (0x00022cab) bg_cell_shortcut_ai5_widget_pane

0xe288,	// (0x0002cadd) cell_grid_ai5_widget_pane_g1

0xe291,	// (0x0002cae6) highlight_cell_shortcut_ai5_widget_pane

0x59da,	// (0x0002422f) ai5_sk_left_pane_g1

0xe299,	// (0x0002caee) ai5_sk_left_pane_g2

0xe2a1,	// (0x0002caf6) ai5_sk_left_pane_g3

0xe2a9,	// (0x0002cafe) ai5_sk_left_pane_g4

0x0003,

0xfe98,	// (0x0002e6ed) ai5_sk_left_pane_g

0xe2b1,	// (0x0002cb06) ai5_sk_left_pane_t1

0x59d2,	// (0x00024227) ai5_sk_right_pane_g1

0xe2bf,	// (0x0002cb14) ai5_sk_right_pane_g2

0xe2c7,	// (0x0002cb1c) ai5_sk_right_pane_g3

0xe2cf,	// (0x0002cb24) ai5_sk_right_pane_g4

0x0003,

0xfea1,	// (0x0002e6f6) ai5_sk_right_pane_g

0xe2d7,	// (0x0002cb2c) ai5_sk_right_pane_t1

0x59d2,	// (0x00024227) ai5_sk_middle_pane_g1

0x59da,	// (0x0002422f) ai5_sk_middle_pane_g2

0x59f2,	// (0x00024247) ai5_sk_middle_pane_g3

0xe2c7,	// (0x0002cb1c) ai5_sk_middle_pane_g4

0xe2a1,	// (0x0002caf6) ai5_sk_middle_pane_g5

0xe2e5,	// (0x0002cb3a) ai5_sk_middle_pane_g6

0xf135,	// (0x0002d98a) ai5_sk_middle_pane_g7

0x0006,

0xfeaa,	// (0x0002e6ff) ai5_sk_middle_pane_g

0x9f61,	// (0x000287b6) aid_touch_area_size_lc0_ParamLimits

0x9f61,	// (0x000287b6) aid_touch_area_size_lc0

0xb389,	// (0x00029bde) cell_hwr_candidate_pane_t1_ParamLimits

0x57c6,	// (0x0002401b) aid_touch_navi_pane

0xa17b,	// (0x000289d0) status_dt_navi_pane_ParamLimits

0xa17b,	// (0x000289d0) status_dt_navi_pane

0xa188,	// (0x000289dd) status_dt_sta_pane_ParamLimits

0xa188,	// (0x000289dd) status_dt_sta_pane

0xf13d,	// (0x0002d992) dt_sta_controll_pane

0xf14a,	// (0x0002d99f) dt_sta_indi_pane

0xf15b,	// (0x0002d9b0) dt_sta_title_pane

0x454d,	// (0x00022da2) bg_dt_sta_indi_pane_ParamLimits

0x454d,	// (0x00022da2) bg_dt_sta_indi_pane

0xe2ed,	// (0x0002cb42) dt_sta_battery_pane

0xf16e,	// (0x0002d9c3) dt_sta_indi_pane_g1

0xf177,	// (0x0002d9cc) dt_sta_indi_pane_g2

0xf180,	// (0x0002d9d5) dt_sta_indi_pane_g3

0x0002,

0xfeb9,	// (0x0002e70e) dt_sta_indi_pane_g

0xf189,	// (0x0002d9de) dt_sta_signal_pane

0x4a1b,	// (0x00023270) bg_dt_sta_title_pane_ParamLimits

0x4a1b,	// (0x00023270) bg_dt_sta_title_pane

0xf192,	// (0x0002d9e7) dt_sta_title_pane_g1

0xf19a,	// (0x0002d9ef) dt_sta_title_pane_t1_ParamLimits

0xf19a,	// (0x0002d9ef) dt_sta_title_pane_t1

0x43aa,	// (0x00022bff) bg_dt_sta_control_pane

0xf1af,	// (0x0002da04) dt_sta_controll_pane_g1

0xf1b8,	// (0x0002da0d) bg_dt_sta_title_pane_g1

0xf1c1,	// (0x0002da16) bg_dt_sta_title_pane_g2

0xf1ca,	// (0x0002da1f) bg_dt_sta_title_pane_g3

0x0002,

0xfec0,	// (0x0002e715) bg_dt_sta_title_pane_g

0x773e,	// (0x00025f93) bg_dt_sta_indi_pane_g1

0xe2f5,	// (0x0002cb4a) dt_sta_signal_pane_g1

0xe2fd,	// (0x0002cb52) dt_sta_signal_pane_g2

0x0001,

0xfec7,	// (0x0002e71c) dt_sta_signal_pane_g

0xe305,	// (0x0002cb5a) dt_sta_battery_pane_g1

0xe30e,	// (0x0002cb63) dt_sta_battery_pane_t1

0x773e,	// (0x00025f93) bg_dt_sta_control_pane_g1

0x4fd1,	// (0x00023826) fep_china_uni_eep_pane

0x4fd9,	// (0x0002382e) fep_china_uni_entry_pane_ParamLimits

0x4fe9,	// (0x0002383e) popup_fep_china_uni_window_g1_ParamLimits

0x4ff9,	// (0x0002384e) popup_fep_china_uni_window_g2_ParamLimits

0x4ff9,	// (0x0002384e) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x0002dfb2) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x0002dfb2) popup_fep_china_uni_window_g

0xe31d,	// (0x0002cb72) fep_china_uni_eep_pane_g1

0xe325,	// (0x0002cb7a) fep_china_uni_eep_pane_t1

0xe14b,	// (0x0002c9a0) aid_touch_area_size_smil_player

0x58b3,	// (0x00024108) lc0_clock_pane

0x58ee,	// (0x00024143) status_pane_g5_ParamLimits

0x58ee,	// (0x00024143) status_pane_g5

0x9bc1,	// (0x00028416) popup_keymap_window

0x58cc,	// (0x00024121) status_icon_pane

0xefb1,	// (0x0002d806) cell_ai5_widget_pane_g3_ParamLimits

0xefc5,	// (0x0002d81a) cell_ai5_widget_pane_g4_ParamLimits

0xefd1,	// (0x0002d826) cell_ai5_widget_pane_g5_ParamLimits

0xeff5,	// (0x0002d84a) cell_ai5_widget_pane_g8_ParamLimits

0xeff5,	// (0x0002d84a) cell_ai5_widget_pane_g8

0xf009,	// (0x0002d85e) cell_ai5_widget_pane_g9_ParamLimits

0xf009,	// (0x0002d85e) cell_ai5_widget_pane_g9

0xf01d,	// (0x0002d872) cell_ai5_widget_pane_g10_ParamLimits

0xf01d,	// (0x0002d872) cell_ai5_widget_pane_g10

0xe334,	// (0x0002cb89) status_icon_pane_g1

0x43aa,	// (0x00022bff) bg_popup_sub_pane_cp13

0xe33c,	// (0x0002cb91) popup_keymap_window_t1

0x9998,	// (0x000281ed) control_pane_g6_ParamLimits

0x9998,	// (0x000281ed) control_pane_g6

0x99a5,	// (0x000281fa) control_pane_g7_ParamLimits

0x99a5,	// (0x000281fa) control_pane_g7

0x99b2,	// (0x00028207) control_pane_g8_ParamLimits

0x99b2,	// (0x00028207) control_pane_g8

0xf13d,	// (0x0002d992) dt_sta_controll_pane_ParamLimits

0xf14a,	// (0x0002d99f) dt_sta_indi_pane_ParamLimits

0xf15b,	// (0x0002d9b0) dt_sta_title_pane_ParamLimits

0x495d,	// (0x000231b2) aid_size_touch_scroll_bar_cale

0x8cc5,	// (0x0002751a) popup_discreet_window_ParamLimits

0x8cc5,	// (0x0002751a) popup_discreet_window

0x8d4d,	// (0x000275a2) popup_sk_window

0x5f51,	// (0x000247a6) bg_popup_sub_pane_cp28_ParamLimits

0x5f51,	// (0x000247a6) bg_popup_sub_pane_cp28

0xe34a,	// (0x0002cb9f) popup_discreet_window_g1_ParamLimits

0xe34a,	// (0x0002cb9f) popup_discreet_window_g1

0xe36a,	// (0x0002cbbf) popup_discreet_window_t1_ParamLimits

0xe36a,	// (0x0002cbbf) popup_discreet_window_t1

0xe388,	// (0x0002cbdd) popup_discreet_window_t2_ParamLimits

0xe388,	// (0x0002cbdd) popup_discreet_window_t2

0x0002,

0xfecc,	// (0x0002e721) popup_discreet_window_t_ParamLimits

0xfecc,	// (0x0002e721) popup_discreet_window_t

0xc7ba,	// (0x0002b00f) popup_sk_window_g1

0xc7c4,	// (0x0002b019) popup_sk_window_g2

0x0001,

0xfed3,	// (0x0002e728) popup_sk_window_g

0xe3da,	// (0x0002cc2f) popup_sk_window_t1

0xe3e8,	// (0x0002cc3d) popup_sk_window_t1_copy1

0xefa1,	// (0x0002d7f6) cell_ai5_widget_pane_g2_ParamLimits

0xf0c9,	// (0x0002d91e) cell_ai5_widget_pane_t9_ParamLimits

0xf0c9,	// (0x0002d91e) cell_ai5_widget_pane_t9

0x43aa,	// (0x00022bff) main_fep_fshwr2_pane

0xf1d3,	// (0x0002da28) aid_fshwr2_btn_pane

0xf1db,	// (0x0002da30) aid_fshwr2_syb_pane

0xf1e3,	// (0x0002da38) aid_fshwr2_txt_pane

0xf1eb,	// (0x0002da40) fshwr2_func_candi_pane

0xf1f7,	// (0x0002da4c) fshwr2_hwr_syb_pane

0xf203,	// (0x0002da58) fshwr2_icf_pane

0x43aa,	// (0x00022bff) fshwr2_icf_bg_pane

0xf20d,	// (0x0002da62) fshwr2_icf_pane_t1_ParamLimits

0xf20d,	// (0x0002da62) fshwr2_icf_pane_t1

0x773e,	// (0x00025f93) fshwr2_func_candi_pane_g1

0xe40a,	// (0x0002cc5f) fshwr2_func_candi_row_pane_ParamLimits

0xe40a,	// (0x0002cc5f) fshwr2_func_candi_row_pane

0xf224,	// (0x0002da79) cell_fshwr2_syb_pane_ParamLimits

0xf224,	// (0x0002da79) cell_fshwr2_syb_pane

0x78e5,	// (0x0002613a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x78e5,	// (0x0002613a) fshwr2_hwr_syb_pane_g1

0x43aa,	// (0x00022bff) bg_popup_call_pane_cp01

0xe41b,	// (0x0002cc70) fshwr2_func_candi_cell_pane_ParamLimits

0xe41b,	// (0x0002cc70) fshwr2_func_candi_cell_pane

0xe44c,	// (0x0002cca1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe44c,	// (0x0002cca1) fshwr2_func_candi_cell_bg_pane

0xe466,	// (0x0002ccbb) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe466,	// (0x0002ccbb) fshwr2_func_candi_cell_pane_g1

0xe48e,	// (0x0002cce3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe48e,	// (0x0002cce3) fshwr2_func_candi_cell_pane_t1

0x43aa,	// (0x00022bff) bg_button_pane_cp08

0x5440,	// (0x00023c95) cell_fshwr2_syb_bg_pane

0xf23e,	// (0x0002da93) cell_fshwr2_syb_bg_pane_g1

0xf246,	// (0x0002da9b) cell_fshwr2_syb_bg_pane_t1

0x4a1b,	// (0x00023270) main_tmo_pane

0xa722,	// (0x00028f77) uni_indicator_pane_g1_ParamLimits

0xa737,	// (0x00028f8c) uni_indicator_pane_g2_ParamLimits

0xa74d,	// (0x00028fa2) uni_indicator_pane_g3_ParamLimits

0x697d,	// (0x000251d2) uni_indicator_pane_g4_ParamLimits

0x697d,	// (0x000251d2) uni_indicator_pane_g4

0x6991,	// (0x000251e6) uni_indicator_pane_g5_ParamLimits

0x6991,	// (0x000251e6) uni_indicator_pane_g5

0x69a5,	// (0x000251fa) uni_indicator_pane_g6_ParamLimits

0x69a5,	// (0x000251fa) uni_indicator_pane_g6

0xf95a,	// (0x0002e1af) uni_indicator_pane_g_ParamLimits

0xbf43,	// (0x0002a798) popup_tmo_note_window_ParamLimits

0xbf43,	// (0x0002a798) popup_tmo_note_window

0x43aa,	// (0x00022bff) fshwr2_bg_pane

0xe47f,	// (0x0002ccd4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe47f,	// (0x0002ccd4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed8,	// (0x0002e72d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed8,	// (0x0002e72d) fshwr2_func_candi_cell_pane_g

0x773e,	// (0x00025f93) bg_popup_window_pane_cp01

0xe4a1,	// (0x0002ccf6) bg_popup_window_pane_g1_cp01

0xe4aa,	// (0x0002ccff) bg_popup_window_pane_cp22_ParamLimits

0xe4aa,	// (0x0002ccff) bg_popup_window_pane_cp22

0xe4b8,	// (0x0002cd0d) listscroll_tmo_link_pane_ParamLimits

0xe4b8,	// (0x0002cd0d) listscroll_tmo_link_pane

0xe4f8,	// (0x0002cd4d) popup_tmo_note_window_g1_ParamLimits

0xe4f8,	// (0x0002cd4d) popup_tmo_note_window_g1

0xe505,	// (0x0002cd5a) tmo_note_info_pane_ParamLimits

0xe505,	// (0x0002cd5a) tmo_note_info_pane

0xf255,	// (0x0002daaa) list_tmo_note_info_pane_g1_ParamLimits

0xf255,	// (0x0002daaa) list_tmo_note_info_pane_g1

0xe51f,	// (0x0002cd74) list_tmo_note_info_pane_g2_ParamLimits

0xe51f,	// (0x0002cd74) list_tmo_note_info_pane_g2

0x0001,

0xfedd,	// (0x0002e732) list_tmo_note_info_pane_g_ParamLimits

0xfedd,	// (0x0002e732) list_tmo_note_info_pane_g

0xe53b,	// (0x0002cd90) list_tmo_note_info_text_pane_ParamLimits

0xe53b,	// (0x0002cd90) list_tmo_note_info_text_pane

0xe57d,	// (0x0002cdd2) list_tmo_link_pane

0xe58a,	// (0x0002cddf) scroll_pane_cp20

0xe597,	// (0x0002cdec) list_single_tmo_link_pane_ParamLimits

0xe597,	// (0x0002cdec) list_single_tmo_link_pane

0xe5a7,	// (0x0002cdfc) list_single_tmo_link_pane_t1

0xe5b5,	// (0x0002ce0a) list_tmo_note_info_text_pane_t1_ParamLimits

0xe5b5,	// (0x0002ce0a) list_tmo_note_info_text_pane_t1

0x91bb,	// (0x00027a10) aid_size_touch_scroll_bar_cp01_ParamLimits

0x91bb,	// (0x00027a10) aid_size_touch_scroll_bar_cp01

0xce20,	// (0x0002b675) aid_size_touch_slider_marker

0x8d35,	// (0x0002758a) popup_settings_window_ParamLimits

0x8d35,	// (0x0002758a) popup_settings_window

0xcfef,	// (0x0002b844) popup_candi_list_indi_window

0x57c6,	// (0x0002401b) aid_touch_navi_pane_ParamLimits

0xbf92,	// (0x0002a7e7) rs_clock_indi_pane

0xbf9b,	// (0x0002a7f0) sctrl_sk_bottom_pane_ParamLimits

0xbfac,	// (0x0002a801) sctrl_sk_top_pane_ParamLimits

0xc0b2,	// (0x0002a907) popup_fep_tooltip_window

0xe199,	// (0x0002c9ee) aid_size_cell_widget_grid_ParamLimits

0xef95,	// (0x0002d7ea) cell_ai5_widget_pane_g1_ParamLimits

0xef95,	// (0x0002d7ea) cell_ai5_widget_pane_g1

0xefdd,	// (0x0002d832) cell_ai5_widget_pane_g6_ParamLimits

0xefe9,	// (0x0002d83e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe5b,	// (0x0002e6b0) cell_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0002e6b0) cell_ai5_widget_pane_g

0xf0ed,	// (0x0002d942) cell_ai5_widget_pane_t10_ParamLimits

0xf0ed,	// (0x0002d942) cell_ai5_widget_pane_t10

0xf0ff,	// (0x0002d954) grid_ai5_widget_pane_ParamLimits

0xe250,	// (0x0002caa5) cell_contacts_ai5_widget_pane_ParamLimits

0xe250,	// (0x0002caa5) cell_contacts_ai5_widget_pane

0xe39d,	// (0x0002cbf2) popup_discreet_window_t3_ParamLimits

0xe39d,	// (0x0002cbf2) popup_discreet_window_t3

0xe3f6,	// (0x0002cc4b) popup_fshwr2_char_preview_window_ParamLimits

0xe3f6,	// (0x0002cc4b) popup_fshwr2_char_preview_window

0xf26c,	// (0x0002dac1) tmo_note_info_pane_t1

0xf281,	// (0x0002dad6) tmo_note_info_pane_t2

0xf296,	// (0x0002daeb) tmo_note_info_pane_t3

0xe559,	// (0x0002cdae) tmo_note_info_pane_t4

0xe56b,	// (0x0002cdc0) tmo_note_info_pane_t5

0x0004,

0xfee2,	// (0x0002e737) tmo_note_info_pane_t

0xe57d,	// (0x0002cdd2) list_tmo_link_pane_ParamLimits

0xe58a,	// (0x0002cddf) scroll_pane_cp20_ParamLimits

0x43aa,	// (0x00022bff) bg_popup_fep_char_preview_window_cp01

0xe5ce,	// (0x0002ce23) popup_fshwr2_char_preview_window_t1

0xe5dc,	// (0x0002ce31) popup_candi_list_indi_window_g1

0xe5e5,	// (0x0002ce3a) bg_cell_contacts_ai5_widget_pane

0xe5f1,	// (0x0002ce46) cell_contacts_ai5_widget_pane_g1

0xe605,	// (0x0002ce5a) cell_contacts_ai5_widget_pane_g2

0xe614,	// (0x0002ce69) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeed,	// (0x0002e742) cell_contacts_ai5_widget_pane_g

0xe627,	// (0x0002ce7c) cell_contacts_ai5_widget_pane_t1

0x4a1b,	// (0x00023270) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf310,	// (0x0002db65) settings_container_pane

0x5440,	// (0x00023c95) listscroll_set_pane_copy1

0x715b,	// (0x000259b0) scroll_pane_cp121_copy1

0xe63c,	// (0x0002ce91) set_content_pane_copy1

0xf31c,	// (0x0002db71) aid_height_set_list_copy1_ParamLimits

0xf31c,	// (0x0002db71) aid_height_set_list_copy1

0x6712,	// (0x00024f67) aid_size_parent_copy1_ParamLimits

0x6712,	// (0x00024f67) aid_size_parent_copy1

0xf328,	// (0x0002db7d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf328,	// (0x0002db7d) button_value_adjust_pane_cp6_copy1

0x4b73,	// (0x000233c8) list_highlight_pane_cp2_copy1_ParamLimits

0x4b73,	// (0x000233c8) list_highlight_pane_cp2_copy1

0xf33c,	// (0x0002db91) list_set_pane_copy1_ParamLimits

0xf33c,	// (0x0002db91) list_set_pane_copy1

0xf2ab,	// (0x0002db00) main_pane_set_t1_copy1_ParamLimits

0xf2ab,	// (0x0002db00) main_pane_set_t1_copy1

0xf2e5,	// (0x0002db3a) main_pane_set_t2_copy1_ParamLimits

0xf2e5,	// (0x0002db3a) main_pane_set_t2_copy1

0xf3e9,	// (0x0002dc3e) main_pane_set_t3_copy1

0xf3f7,	// (0x0002dc4c) main_pane_set_t4_copy1

0xf304,	// (0x0002db59) set_content_pane_g1_copy1_ParamLimits

0xf304,	// (0x0002db59) set_content_pane_g1_copy1

0xf405,	// (0x0002dc5a) setting_code_pane_copy1

0xe644,	// (0x0002ce99) setting_slider_graphic_pane_copy1

0xe644,	// (0x0002ce99) setting_slider_pane_copy1

0xe64e,	// (0x0002cea3) setting_text_pane_copy1

0xe658,	// (0x0002cead) setting_volume_pane_copy1

0xf40f,	// (0x0002dc64) settings_code_pane_cp2_copy1

0xf417,	// (0x0002dc6c) settings_code_pane_cp_copy1_ParamLimits

0xf417,	// (0x0002dc6c) settings_code_pane_cp_copy1

0xf42b,	// (0x0002dc80) volume_set_pane_copy1

0xf433,	// (0x0002dc88) volume_set_pane_g10_copy1

0xf43b,	// (0x0002dc90) volume_set_pane_g1_copy1

0xf443,	// (0x0002dc98) volume_set_pane_g2_copy1

0xf44b,	// (0x0002dca0) volume_set_pane_g3_copy1

0xf453,	// (0x0002dca8) volume_set_pane_g4_copy1

0xf45b,	// (0x0002dcb0) volume_set_pane_g5_copy1

0xf463,	// (0x0002dcb8) volume_set_pane_g6_copy1

0xf46b,	// (0x0002dcc0) volume_set_pane_g7_copy1

0xf473,	// (0x0002dcc8) volume_set_pane_g8_copy1

0xf47b,	// (0x0002dcd0) volume_set_pane_g9_copy1

0x441a,	// (0x00022c6f) bg_set_opt_pane_cp_copy1_ParamLimits

0x441a,	// (0x00022c6f) bg_set_opt_pane_cp_copy1

0xe661,	// (0x0002ceb6) setting_slider_pane_t1_copy1_ParamLimits

0xe661,	// (0x0002ceb6) setting_slider_pane_t1_copy1

0xf483,	// (0x0002dcd8) setting_slider_pane_t2_copy1_ParamLimits

0xf483,	// (0x0002dcd8) setting_slider_pane_t2_copy1

0xf49d,	// (0x0002dcf2) setting_slider_pane_t3_copy1_ParamLimits

0xf49d,	// (0x0002dcf2) setting_slider_pane_t3_copy1

0xf4b5,	// (0x0002dd0a) slider_set_pane_copy1_ParamLimits

0xf4b5,	// (0x0002dd0a) slider_set_pane_copy1

0x4a82,	// (0x000232d7) set_opt_bg_pane_g1_copy2

0x4a8a,	// (0x000232df) set_opt_bg_pane_g2_copy2

0xe67f,	// (0x0002ced4) set_opt_bg_pane_g3_copy2

0x4a9a,	// (0x000232ef) set_opt_bg_pane_g4_copy2

0x4aa2,	// (0x000232f7) set_opt_bg_pane_g5_copy2

0x4aaa,	// (0x000232ff) set_opt_bg_pane_g6_copy2

0xf4cb,	// (0x0002dd20) set_opt_bg_pane_g7_copy2

0xe689,	// (0x0002cede) set_opt_bg_pane_g8_copy2

0xe693,	// (0x0002cee8) set_opt_bg_pane_g9_copy2

0xc7ce,	// (0x0002b023) aid_size_touch_slider_mark_copy1_ParamLimits

0xc7ce,	// (0x0002b023) aid_size_touch_slider_mark_copy1

0xe69d,	// (0x0002cef2) slider_set_pane_g1_copy1

0xc7e2,	// (0x0002b037) slider_set_pane_g2_copy1

0xa80d,	// (0x00029062) slider_set_pane_g3_copy1_ParamLimits

0xa80d,	// (0x00029062) slider_set_pane_g3_copy1

0xa821,	// (0x00029076) slider_set_pane_g4_copy1_ParamLimits

0xa821,	// (0x00029076) slider_set_pane_g4_copy1

0xa839,	// (0x0002908e) slider_set_pane_g5_copy1_ParamLimits

0xa839,	// (0x0002908e) slider_set_pane_g5_copy1

0xa80d,	// (0x00029062) slider_set_pane_g6_copy1_ParamLimits

0xa80d,	// (0x00029062) slider_set_pane_g6_copy1

0xc7ea,	// (0x0002b03f) slider_set_pane_g7_copy1_ParamLimits

0xc7ea,	// (0x0002b03f) slider_set_pane_g7_copy1

0x43be,	// (0x00022c13) bg_set_opt_pane_cp2_copy1

0xe6a6,	// (0x0002cefb) setting_slider_graphic_pane_g1_copy1

0xf4d3,	// (0x0002dd28) setting_slider_graphic_pane_t1_copy1

0xf4e3,	// (0x0002dd38) setting_slider_graphic_pane_t2_copy1

0xf4f3,	// (0x0002dd48) slider_set_pane_cp_copy1

0xe6b7,	// (0x0002cf0c) input_focus_pane_cp1_copy1

0xe6c0,	// (0x0002cf15) list_set_text_pane_copy1

0xe6c8,	// (0x0002cf1d) setting_text_pane_g1_copy1

0xc800,	// (0x0002b055) set_text_pane_t1_copy1

0xe6b7,	// (0x0002cf0c) input_focus_pane_cp2_copy1

0xe6c8,	// (0x0002cf1d) setting_code_pane_g1_copy1

0xf4fb,	// (0x0002dd50) setting_code_pane_t1_copy1

0xf509,	// (0x0002dd5e) list_set_graphic_pane_copy1

0x43be,	// (0x00022c13) bg_set_opt_pane_cp4_copy1

0x9782,	// (0x00027fd7) list_set_graphic_pane_g1_copy1_ParamLimits

0x9782,	// (0x00027fd7) list_set_graphic_pane_g1_copy1

0xf51b,	// (0x0002dd70) list_set_graphic_pane_g2_copy1

0x979a,	// (0x00027fef) list_set_graphic_pane_t1_copy1_ParamLimits

0x979a,	// (0x00027fef) list_set_graphic_pane_t1_copy1

0x773e,	// (0x00025f93) rs_clock_indi_pane_g1

0xe6d1,	// (0x0002cf26) rs_clock_indi_pane_t1

0xe2ed,	// (0x0002cb42) rs_indi_pane

0xe6df,	// (0x0002cf34) rs_indi_pane_g1

0xe6e8,	// (0x0002cf3d) rs_indi_pane_g2

0xe6f1,	// (0x0002cf46) rs_indi_pane_g3

0x0002,

0xfef4,	// (0x0002e749) rs_indi_pane_g

0x5440,	// (0x00023c95) bg_popup_preview_window_pane_cp03

0xe6fa,	// (0x0002cf4f) popup_fep_tooltip_window_t1

0xb6c2,	// (0x00029f17) popup_note2_window_g2_ParamLimits

0xb6c2,	// (0x00029f17) popup_note2_window_g2

0x0001,

0xfc92,	// (0x0002e4e7) popup_note2_window_g_ParamLimits

0xfc92,	// (0x0002e4e7) popup_note2_window_g

0xbbdf,	// (0x0002a434) bg_popup_sub_pane_cp11_ParamLimits

0xbbec,	// (0x0002a441) cell_ai3_links_pane_g1_ParamLimits

0xbc03,	// (0x0002a458) cell_ai3_links_pane_t1

0xc800,	// (0x0002b055) set_text_pane_t1_copy1_ParamLimits

0x5351,	// (0x00023ba6) cell_graphic_popup_pane_cp2_ParamLimits

0x5351,	// (0x00023ba6) cell_graphic_popup_pane_cp2

0xe708,	// (0x0002cf5d) cell_graphic_popup_pane_g1_cp2

0x4770,	// (0x00022fc5) cell_graphic_popup_pane_g2_cp2

0xe710,	// (0x0002cf65) cell_graphic_popup_pane_g3_cp2

0xe718,	// (0x0002cf6d) cell_graphic_popup_pane_t2_cp2

0x4781,	// (0x00022fd6) grid_highlight_pane_cp3_cp2

0x4d1d,	// (0x00023572) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4a1b,	// (0x00023270) main_tmo_pane_ParamLimits

0xbf37,	// (0x0002a78c) popup_tmo_big_image_note_window

0xef85,	// (0x0002d7da) cell_ai5_widget_list_pane

0xef8d,	// (0x0002d7e2) cell_ai5_widget_lrg_icon_pane

0xf26c,	// (0x0002dac1) tmo_note_info_pane_t1_ParamLimits

0xf281,	// (0x0002dad6) tmo_note_info_pane_t2_ParamLimits

0xf296,	// (0x0002daeb) tmo_note_info_pane_t3_ParamLimits

0xe559,	// (0x0002cdae) tmo_note_info_pane_t4_ParamLimits

0xe56b,	// (0x0002cdc0) tmo_note_info_pane_t5_ParamLimits

0xfee2,	// (0x0002e737) tmo_note_info_pane_t_ParamLimits

0xf310,	// (0x0002db65) settings_container_pane_ParamLimits

0xe6af,	// (0x0002cf04) indicator_popup_pane_cp5

0xe6af,	// (0x0002cf04) indicator_popup_pane_cp6

0xf509,	// (0x0002dd5e) list_set_graphic_pane_copy1_ParamLimits

0x43aa,	// (0x00022bff) bg_popup_window_pane_cp23

0xe726,	// (0x0002cf7b) popup_tmo_big_image_note_window_g1

0xe730,	// (0x0002cf85) popup_tmo_big_image_note_window_t1

0xe740,	// (0x0002cf95) popup_tmo_big_image_note_window_t2

0xe750,	// (0x0002cfa5) popup_tmo_big_image_note_window_t3

0x0002,

0xfefb,	// (0x0002e750) popup_tmo_big_image_note_window_t

0xf523,	// (0x0002dd78) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x0002dd80) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x0002dd8e) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x0002dd8e) cell_ai5_widget_list_row_pane

0xf552,	// (0x0002dda7) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x0002dda7) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x0002ddb4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x0002ddb4) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x0002ddcc) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x0002ddcc) cell_ai5_widget_list_row_pane_t2

0x0001,

0x02fe,	// (0x0001eb53) cell_ai5_widget_list_row_pane_t_ParamLimits

0x02fe,	// (0x0001eb53) cell_ai5_widget_list_row_pane_t

0x8bec,	// (0x00027441) main_fep_vtchi_ss_pane

0xe760,	// (0x0002cfb5) popup_fep_char_pre_window

0xe768,	// (0x0002cfbd) popup_fep_ituss_window

0xe773,	// (0x0002cfc8) popup_fep_vkbss_window

0xe77c,	// (0x0002cfd1) grid_vkbss_keypad_pane_ParamLimits

0xe77c,	// (0x0002cfd1) grid_vkbss_keypad_pane

0xe78c,	// (0x0002cfe1) ituss_keypad_pane

0xe794,	// (0x0002cfe9) aid_vkbss_key_offset_ParamLimits

0xe794,	// (0x0002cfe9) aid_vkbss_key_offset

0xe7a3,	// (0x0002cff8) cell_vkbss_key_pane_ParamLimits

0xe7a3,	// (0x0002cff8) cell_vkbss_key_pane

0xe7b9,	// (0x0002d00e) bg_cell_vkbss_key_g1_ParamLimits

0xe7b9,	// (0x0002d00e) bg_cell_vkbss_key_g1

0xe7c5,	// (0x0002d01a) cell_vkbss_key_3p_pane_ParamLimits

0xe7c5,	// (0x0002d01a) cell_vkbss_key_3p_pane

0xe7df,	// (0x0002d034) cell_vkbss_key_g1_ParamLimits

0xe7df,	// (0x0002d034) cell_vkbss_key_g1

0xe7f9,	// (0x0002d04e) cell_vkbss_key_t1_ParamLimits

0xe7f9,	// (0x0002d04e) cell_vkbss_key_t1

0xe824,	// (0x0002d079) cell_ituss_key_pane_ParamLimits

0xe824,	// (0x0002d079) cell_ituss_key_pane

0xe833,	// (0x0002d088) bg_cell_ituss_key_g1_ParamLimits

0xe833,	// (0x0002d088) bg_cell_ituss_key_g1

0xe83f,	// (0x0002d094) cell_ituss_key_pane_g1_ParamLimits

0xe83f,	// (0x0002d094) cell_ituss_key_pane_g1

0xe84b,	// (0x0002d0a0) cell_ituss_key_pane_g2_ParamLimits

0xe84b,	// (0x0002d0a0) cell_ituss_key_pane_g2

0x0001,

0xff02,	// (0x0002e757) cell_ituss_key_pane_g_ParamLimits

0xff02,	// (0x0002e757) cell_ituss_key_pane_g

0xe85e,	// (0x0002d0b3) cell_ituss_key_t1_ParamLimits

0xe85e,	// (0x0002d0b3) cell_ituss_key_t1

0xe87c,	// (0x0002d0d1) cell_ituss_key_t2_ParamLimits

0xe87c,	// (0x0002d0d1) cell_ituss_key_t2

0xe89b,	// (0x0002d0f0) cell_ituss_key_t3_ParamLimits

0xe89b,	// (0x0002d0f0) cell_ituss_key_t3

0xe8ba,	// (0x0002d10f) cell_ituss_key_t4_ParamLimits

0xe8ba,	// (0x0002d10f) cell_ituss_key_t4

0x0003,

0xff07,	// (0x0002e75c) cell_ituss_key_t_ParamLimits

0xff07,	// (0x0002e75c) cell_ituss_key_t

0xe8d9,	// (0x0002d12e) cell_vkbss_key_3p_pane_g1

0xe8e1,	// (0x0002d136) cell_vkbss_key_3p_pane_g2

0xe8e9,	// (0x0002d13e) cell_vkbss_key_3p_pane_g3

0x0002,

0xff10,	// (0x0002e765) cell_vkbss_key_3p_pane_g

0x43aa,	// (0x00022bff) bg_popup_fep_char_preview_window_cp02

0xe8f1,	// (0x0002d146) popup_fep_char_pre_window_t1

0xef7b,	// (0x0002d7d0) main_ai5_sk_pane

0xe5e5,	// (0x0002ce3a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe5f1,	// (0x0002ce46) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe605,	// (0x0002ce5a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe614,	// (0x0002ce69) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeed,	// (0x0002e742) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe627,	// (0x0002ce7c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4a1b,	// (0x00023270) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0002ddde) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00039591 };

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
0x855e,	// (0x00041aef) Screen

0x856a,	// (0x00041afb) application_window_ParamLimits

0x856a,	// (0x00041afb) application_window

0xb572,	// (0x00044b03) screen_g1

0x85a2,	// (0x00041b33) area_bottom_pane_ParamLimits

0x85a2,	// (0x00041b33) area_bottom_pane

0xdc1d,	// (0x000471ae) area_top_pane_ParamLimits

0xdc1d,	// (0x000471ae) area_top_pane

0xdcbb,	// (0x0004724c) main_pane_ParamLimits

0xdcbb,	// (0x0004724c) main_pane

0xb57c,	// (0x00044b0d) misc_graphics

0xa219,	// (0x000437aa) battery_pane_ParamLimits

0xa219,	// (0x000437aa) battery_pane

0x28ca,	// (0x0003be5b) bg_status_flat_pane_g8

0x28d2,	// (0x0003be63) bg_status_flat_pane_g9

0x047f,	// (0x00039a10) context_pane_ParamLimits

0x047f,	// (0x00039a10) context_pane

0xa384,	// (0x00043915) navi_pane_ParamLimits

0xa384,	// (0x00043915) navi_pane

0xa402,	// (0x00043993) signal_pane_ParamLimits

0xa402,	// (0x00043993) signal_pane

0x0008,

0xf840,	// (0x00048dd1) bg_status_flat_pane_g

0xa492,	// (0x00043a23) status_pane_g1_ParamLimits

0xa492,	// (0x00043a23) status_pane_g1

0xa4a8,	// (0x00043a39) status_pane_g2_ParamLimits

0xa4a8,	// (0x00043a39) status_pane_g2

0x1ecb,	// (0x0003b45c) status_pane_g3_ParamLimits

0x1ecb,	// (0x0003b45c) status_pane_g3

0x0004,

0xf76c,	// (0x00048cfd) status_pane_g_ParamLimits

0xf76c,	// (0x00048cfd) status_pane_g

0xa4b4,	// (0x00043a45) title_pane_ParamLimits

0xa4b4,	// (0x00043a45) title_pane

0xa517,	// (0x00043aa8) uni_indicator_pane_ParamLimits

0xa517,	// (0x00043aa8) uni_indicator_pane

0xc396,	// (0x00045927) bg_list_pane_ParamLimits

0xc396,	// (0x00045927) bg_list_pane

0x9a07,	// (0x00042f98) find_pane

0x20df,	// (0x0003b670) listscroll_app_pane_ParamLimits

0x20df,	// (0x0003b670) listscroll_app_pane

0xc3b6,	// (0x00045947) listscroll_form_pane

0x9a0f,	// (0x00042fa0) listscroll_gen_pane_ParamLimits

0x9a0f,	// (0x00042fa0) listscroll_gen_pane

0xf4c5,	// (0x00048a56) listscroll_set_pane

0x342e,	// (0x0003c9bf) main_idle_act_pane

0xc24a,	// (0x000457db) main_idle_trad_pane

0xc24a,	// (0x000457db) main_list_empty_pane

0xbad0,	// (0x00045061) main_midp_pane

0xc3d0,	// (0x00045961) main_pane_g1_ParamLimits

0xc3d0,	// (0x00045961) main_pane_g1

0x9a23,	// (0x00042fb4) popup_ai_message_window_ParamLimits

0x9a23,	// (0x00042fb4) popup_ai_message_window

0x9ad4,	// (0x00043065) popup_fep_china_uni_window_ParamLimits

0x9ad4,	// (0x00043065) popup_fep_china_uni_window

0x9b2e,	// (0x000430bf) popup_fep_japan_candidate_window_ParamLimits

0x9b2e,	// (0x000430bf) popup_fep_japan_candidate_window

0x9b4c,	// (0x000430dd) popup_fep_japan_predictive_window_ParamLimits

0x9b4c,	// (0x000430dd) popup_fep_japan_predictive_window

0x9b5e,	// (0x000430ef) popup_find_window

0x9b7b,	// (0x0004310c) popup_grid_graphic_window_ParamLimits

0x9b7b,	// (0x0004310c) popup_grid_graphic_window

0xf503,	// (0x00048a94) popup_large_graphic_colour_window

0x9c19,	// (0x000431aa) popup_menu_window_ParamLimits

0x9c19,	// (0x000431aa) popup_menu_window

0x9deb,	// (0x0004337c) popup_note_image_window

0x9db1,	// (0x00043342) popup_note_wait_window_ParamLimits

0x9db1,	// (0x00043342) popup_note_wait_window

0x9e03,	// (0x00043394) popup_note_window_ParamLimits

0x9e03,	// (0x00043394) popup_note_window

0x9eb2,	// (0x00043443) popup_query_code_window_ParamLimits

0x9eb2,	// (0x00043443) popup_query_code_window

0x9eec,	// (0x0004347d) popup_query_data_code_window_ParamLimits

0x9eec,	// (0x0004347d) popup_query_data_code_window

0x9f09,	// (0x0004349a) popup_query_data_window_ParamLimits

0x9f09,	// (0x0004349a) popup_query_data_window

0x9f8b,	// (0x0004351c) popup_query_sat_info_window_ParamLimits

0x9f8b,	// (0x0004351c) popup_query_sat_info_window

0xa022,	// (0x000435b3) popup_snote_single_graphic_window_ParamLimits

0xa022,	// (0x000435b3) popup_snote_single_graphic_window

0xa022,	// (0x000435b3) popup_snote_single_text_window_ParamLimits

0xa022,	// (0x000435b3) popup_snote_single_text_window

0x01f6,	// (0x00039787) popup_sub_window_general

0xa17f,	// (0x00043710) popup_window_general_ParamLimits

0xa17f,	// (0x00043710) popup_window_general

0x033b,	// (0x000398cc) power_save_pane

0x9861,	// (0x00042df2) control_pane_g1_ParamLimits

0x9861,	// (0x00042df2) control_pane_g1

0x988a,	// (0x00042e1b) control_pane_g2_ParamLimits

0x988a,	// (0x00042e1b) control_pane_g2

0xc380,	// (0x00045911) control_pane_g3_ParamLimits

0xc380,	// (0x00045911) control_pane_g3

0x0007,

0xf754,	// (0x00048ce5) control_pane_g_ParamLimits

0xf754,	// (0x00048ce5) control_pane_g

0x98f2,	// (0x00042e83) control_pane_t1_ParamLimits

0x98f2,	// (0x00042e83) control_pane_t1

0x995a,	// (0x00042eeb) control_pane_t2_ParamLimits

0x995a,	// (0x00042eeb) control_pane_t2

0x0002,

0xf765,	// (0x00048cf6) control_pane_t_ParamLimits

0xf765,	// (0x00048cf6) control_pane_t

0x97ba,	// (0x00042d4b) navi_navi_volume_pane_cp1

0x97c2,	// (0x00042d53) status_small_icon_pane

0xc34c,	// (0x000458dd) status_small_pane_g1_ParamLimits

0xc34c,	// (0x000458dd) status_small_pane_g1

0x97ca,	// (0x00042d5b) status_small_pane_g2_ParamLimits

0x97ca,	// (0x00042d5b) status_small_pane_g2

0x97d6,	// (0x00042d67) status_small_pane_g3_ParamLimits

0x97d6,	// (0x00042d67) status_small_pane_g3

0x97e2,	// (0x00042d73) status_small_pane_g4_ParamLimits

0x97e2,	// (0x00042d73) status_small_pane_g4

0x97ee,	// (0x00042d7f) status_small_pane_g5_ParamLimits

0x97ee,	// (0x00042d7f) status_small_pane_g5

0x97fc,	// (0x00042d8d) status_small_pane_g6_ParamLimits

0x97fc,	// (0x00042d8d) status_small_pane_g6

0x0007,

0xf743,	// (0x00048cd4) status_small_pane_g_ParamLimits

0xf743,	// (0x00048cd4) status_small_pane_g

0x982b,	// (0x00042dbc) status_small_pane_t1

0x984d,	// (0x00042dde) status_small_wait_pane_ParamLimits

0x984d,	// (0x00042dde) status_small_wait_pane

0x94c5,	// (0x00042a56) aid_levels_signal_ParamLimits

0x94c5,	// (0x00042a56) aid_levels_signal

0x94dd,	// (0x00042a6e) signal_pane_g1_ParamLimits

0x94dd,	// (0x00042a6e) signal_pane_g1

0x94f8,	// (0x00042a89) signal_pane_g2_ParamLimits

0x94f8,	// (0x00042a89) signal_pane_g2

0x0003,

0xf6d4,	// (0x00048c65) signal_pane_g_ParamLimits

0xf6d4,	// (0x00048c65) signal_pane_g

0xbe38,	// (0x000453c9) context_pane_g1

0x87a0,	// (0x00041d31) title_pane_g1

0x87d7,	// (0x00041d68) title_pane_t1

0xb592,	// (0x00044b23) title_pane_t2

0xb5b8,	// (0x00044b49) title_pane_t3

0x0002,

0xf532,	// (0x00048ac3) title_pane_t

0xa53f,	// (0x00043ad0) aid_levels_battery_ParamLimits

0xa53f,	// (0x00043ad0) aid_levels_battery

0xa55b,	// (0x00043aec) battery_pane_g1_ParamLimits

0xa55b,	// (0x00043aec) battery_pane_g1

0xa578,	// (0x00043b09) battery_pane_g2_ParamLimits

0xa578,	// (0x00043b09) battery_pane_g2

0x0001,

0xf777,	// (0x00048d08) battery_pane_g_ParamLimits

0xf777,	// (0x00048d08) battery_pane_g

0xc586,	// (0x00045b17) uni_indicator_pane_g1

0xc59c,	// (0x00045b2d) uni_indicator_pane_g2

0xc5b2,	// (0x00045b43) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x00048e79) uni_indicator_pane_g

0xc0e1,	// (0x00045672) navi_icon_pane_ParamLimits

0xc0e1,	// (0x00045672) navi_icon_pane

0xc02a,	// (0x000455bb) navi_midp_pane

0xc0fd,	// (0x0004568e) navi_navi_pane

0xc107,	// (0x00045698) navi_text_pane_ParamLimits

0xc107,	// (0x00045698) navi_text_pane

0xb572,	// (0x00044b03) status_small_wait_pane_g1

0xb809,	// (0x00044d9a) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x00048e74) status_small_wait_pane_g

0xc4df,	// (0x00045a70) navi_navi_icon_text_pane

0x2f1d,	// (0x0003c4ae) navi_navi_pane_g1_ParamLimits

0x2f1d,	// (0x0003c4ae) navi_navi_pane_g1

0x2f2f,	// (0x0003c4c0) navi_navi_pane_g2_ParamLimits

0x2f2f,	// (0x0003c4c0) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x00048e42) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x00048e42) navi_navi_pane_g

0x2f41,	// (0x0003c4d2) navi_navi_tabs_pane

0x2f4a,	// (0x0003c4db) navi_navi_text_pane

0xc4df,	// (0x00045a70) navi_navi_volume_pane

0x2ef1,	// (0x0003c482) navi_text_pane_t1

0x2ee5,	// (0x0003c476) navi_icon_pane_g1

0x2e38,	// (0x0003c3c9) navi_navi_text_pane_t1

0xaa56,	// (0x00043fe7) navi_navi_volume_pane_g1

0x0941,	// (0x00039ed2) volume_small_pane

0x2d9e,	// (0x0003c32f) navi_navi_icon_text_pane_g1

0xc437,	// (0x000459c8) navi_navi_icon_text_pane_t1

0xc0fd,	// (0x0004568e) navi_tabs_2_long_pane

0xc0fd,	// (0x0004568e) navi_tabs_2_pane

0xc0fd,	// (0x0004568e) navi_tabs_3_long_pane

0xc0fd,	// (0x0004568e) navi_tabs_3_pane

0xc0fd,	// (0x0004568e) navi_tabs_4_pane

0x0919,	// (0x00039eaa) tabs_2_active_pane_ParamLimits

0x0919,	// (0x00039eaa) tabs_2_active_pane

0x0929,	// (0x00039eba) tabs_2_passive_pane_ParamLimits

0x0929,	// (0x00039eba) tabs_2_passive_pane

0x08e7,	// (0x00039e78) tabs_3_active_pane_ParamLimits

0x08e7,	// (0x00039e78) tabs_3_active_pane

0x08f7,	// (0x00039e88) tabs_3_passive_pane_ParamLimits

0x08f7,	// (0x00039e88) tabs_3_passive_pane

0x0908,	// (0x00039e99) tabs_3_passive_pane_cp_ParamLimits

0x0908,	// (0x00039e99) tabs_3_passive_pane_cp

0x08a3,	// (0x00039e34) tabs_4_active_pane_ParamLimits

0x08a3,	// (0x00039e34) tabs_4_active_pane

0x08b4,	// (0x00039e45) tabs_4_passive_pane_ParamLimits

0x08b4,	// (0x00039e45) tabs_4_passive_pane

0x08c5,	// (0x00039e56) tabs_4_passive_pane_cp_ParamLimits

0x08c5,	// (0x00039e56) tabs_4_passive_pane_cp

0x08d6,	// (0x00039e67) tabs_4_passive_pane_cp2_ParamLimits

0x08d6,	// (0x00039e67) tabs_4_passive_pane_cp2

0x087f,	// (0x00039e10) tabs_2_long_active_pane_ParamLimits

0x087f,	// (0x00039e10) tabs_2_long_active_pane

0x0891,	// (0x00039e22) tabs_2_long_passive_pane_ParamLimits

0x0891,	// (0x00039e22) tabs_2_long_passive_pane

0x083a,	// (0x00039dcb) tabs_3_long_active_pane_ParamLimits

0x083a,	// (0x00039dcb) tabs_3_long_active_pane

0x0853,	// (0x00039de4) tabs_3_long_passive_pane_ParamLimits

0x0853,	// (0x00039de4) tabs_3_long_passive_pane

0x0866,	// (0x00039df7) tabs_3_long_passive_pane_cp_ParamLimits

0x0866,	// (0x00039df7) tabs_3_long_passive_pane_cp

0x07e0,	// (0x00039d71) volume_small_pane_g1

0x07e9,	// (0x00039d7a) volume_small_pane_g2

0x07f2,	// (0x00039d83) volume_small_pane_g3

0x07fb,	// (0x00039d8c) volume_small_pane_g4

0x0804,	// (0x00039d95) volume_small_pane_g5

0x080d,	// (0x00039d9e) volume_small_pane_g6

0x0816,	// (0x00039da7) volume_small_pane_g7

0x081f,	// (0x00039db0) volume_small_pane_g8

0x0828,	// (0x00039db9) volume_small_pane_g9

0x0831,	// (0x00039dc2) volume_small_pane_g10

0x0009,

0xf87d,	// (0x00048e0e) volume_small_pane_g

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp2_ParamLimits

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp2

0x8863,	// (0x00041df4) tabs_3_active_pane_g1

0x886b,	// (0x00041dfc) tabs_3_active_pane_t1

0xb5ca,	// (0x00044b5b) bg_passive_tab_pane_cp2_ParamLimits

0xb5ca,	// (0x00044b5b) bg_passive_tab_pane_cp2

0x8863,	// (0x00041df4) tabs_3_passive_pane_g1

0x886b,	// (0x00041dfc) tabs_3_passive_pane_t1

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp3_ParamLimits

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp3

0x887d,	// (0x00041e0e) tabs_4_active_pane_g1

0x8885,	// (0x00041e16) tabs_4_active_pane_t1

0xb5ca,	// (0x00044b5b) bg_passive_tab_pane_cp3_ParamLimits

0xb5ca,	// (0x00044b5b) bg_passive_tab_pane_cp3

0x887d,	// (0x00041e0e) tabs_4_1_passive_pane_g1

0x8885,	// (0x00041e16) tabs_4_1_passive_pane_t1

0xbad0,	// (0x00045061) list_highlight_pane_cp2

0xc6b8,	// (0x00045c49) list_set_pane_ParamLimits

0xc6b8,	// (0x00045c49) list_set_pane

0xc752,	// (0x00045ce3) main_pane_set_t1_ParamLimits

0xc752,	// (0x00045ce3) main_pane_set_t1

0xc772,	// (0x00045d03) main_pane_set_t2_ParamLimits

0xc772,	// (0x00045d03) main_pane_set_t2

0xc786,	// (0x00045d17) main_pane_set_t3_ParamLimits

0xc786,	// (0x00045d17) main_pane_set_t3

0xc798,	// (0x00045d29) main_pane_set_t4_ParamLimits

0xc798,	// (0x00045d29) main_pane_set_t4

0x0003,

0xf94d,	// (0x00048ede) main_pane_set_t_ParamLimits

0xf94d,	// (0x00048ede) main_pane_set_t

0xc7aa,	// (0x00045d3b) setting_code_pane

0xc7b4,	// (0x00045d45) setting_slider_graphic_pane

0xc7b4,	// (0x00045d45) setting_slider_pane

0xc7b4,	// (0x00045d45) setting_text_pane

0xc7b4,	// (0x00045d45) setting_volume_pane

0x8897,	// (0x00041e28) volume_set_pane

0xb5d8,	// (0x00044b69) bg_set_opt_pane_cp

0x889f,	// (0x00041e30) setting_slider_pane_t1

0x88b8,	// (0x00041e49) setting_slider_pane_t2

0x88d2,	// (0x00041e63) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00048aca) setting_slider_pane_t

0x88ea,	// (0x00041e7b) slider_set_pane

0xb57c,	// (0x00044b0d) bg_set_opt_pane_cp2

0xb5e6,	// (0x00044b77) setting_slider_graphic_pane_g1

0x8900,	// (0x00041e91) setting_slider_graphic_pane_t1

0x8910,	// (0x00041ea1) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00048ad1) setting_slider_graphic_pane_t

0x8920,	// (0x00041eb1) slider_set_pane_cp

0xb57c,	// (0x00044b0d) input_focus_pane_cp1

0x3415,	// (0x0003c9a6) list_set_text_pane

0xb572,	// (0x00044b03) setting_text_pane_g1

0xb57c,	// (0x00044b0d) input_focus_pane_cp2

0xb572,	// (0x00044b03) setting_code_pane_g1

0xb5ef,	// (0x00044b80) setting_code_pane_t1

0xdd96,	// (0x00047327) set_text_pane_t1_ParamLimits

0xdd96,	// (0x00047327) set_text_pane_t1

0xb9e6,	// (0x00044f77) set_opt_bg_pane_g1

0xb9ee,	// (0x00044f7f) set_opt_bg_pane_g2

0xc66d,	// (0x00045bfe) set_opt_bg_pane_g3

0xb9fe,	// (0x00044f8f) set_opt_bg_pane_g4

0xba06,	// (0x00044f97) set_opt_bg_pane_g5

0xba0e,	// (0x00044f9f) set_opt_bg_pane_g6

0xc677,	// (0x00045c08) set_opt_bg_pane_g7

0xc67f,	// (0x00045c10) set_opt_bg_pane_g8

0xc689,	// (0x00045c1a) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x00048ecb) set_opt_bg_pane_g

0xc660,	// (0x00045bf1) slider_set_pane_g1

0x09c0,	// (0x00039f51) slider_set_pane_g2

0x0006,

0xf92b,	// (0x00048ebc) slider_set_pane_g

0xaa5e,	// (0x00043fef) volume_set_pane_g1

0xaa66,	// (0x00043ff7) volume_set_pane_g2

0xaa6e,	// (0x00043fff) volume_set_pane_g3

0xaa76,	// (0x00044007) volume_set_pane_g4

0xaa7e,	// (0x0004400f) volume_set_pane_g5

0xaa86,	// (0x00044017) volume_set_pane_g6

0xaa8e,	// (0x0004401f) volume_set_pane_g7

0xaa96,	// (0x00044027) volume_set_pane_g8

0xaa9e,	// (0x0004402f) volume_set_pane_g9

0xaaa6,	// (0x00044037) volume_set_pane_g10

0x0009,

0xf903,	// (0x00048e94) volume_set_pane_g

0x8928,	// (0x00041eb9) indicator_pane_ParamLimits

0x8928,	// (0x00041eb9) indicator_pane

0x8950,	// (0x00041ee1) main_idle_pane_g2_ParamLimits

0x8950,	// (0x00041ee1) main_idle_pane_g2

0x8988,	// (0x00041f19) main_pane_idle_g1_ParamLimits

0x8988,	// (0x00041f19) main_pane_idle_g1

0xb5fd,	// (0x00044b8e) popup_clock_digital_analogue_window_ParamLimits

0xb5fd,	// (0x00044b8e) popup_clock_digital_analogue_window

0x89af,	// (0x00041f40) soft_indicator_pane_ParamLimits

0x89af,	// (0x00041f40) soft_indicator_pane

0x89d3,	// (0x00041f64) wallpaper_pane_ParamLimits

0x89d3,	// (0x00041f64) wallpaper_pane

0xb572,	// (0x00044b03) wallpaper_pane_g1

0x89e5,	// (0x00041f76) indicator_pane_g1_ParamLimits

0x89e5,	// (0x00041f76) indicator_pane_g1

0x3828,	// (0x0003cdb9) navi_navi_icon_text_pane_srt_g1

0xb62b,	// (0x00044bbc) soft_indicator_pane_t1

0xb645,	// (0x00044bd6) aid_ps_area_pane

0x89fb,	// (0x00041f8c) aid_ps_clock_pane

0xb656,	// (0x00044be7) aid_ps_indicator_pane

0xb662,	// (0x00044bf3) indicator_ps_pane_ParamLimits

0xb662,	// (0x00044bf3) indicator_ps_pane

0xb671,	// (0x00044c02) power_save_pane_g1_ParamLimits

0xb671,	// (0x00044c02) power_save_pane_g1

0xb67d,	// (0x00044c0e) power_save_pane_g2_ParamLimits

0xb67d,	// (0x00044c0e) power_save_pane_g2

0xdbfd,	// (0x0004718e) aid_navinavi_width_pane

0xb645,	// (0x00044bd6) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00048ad6) power_save_pane_g_ParamLimits

0xf545,	// (0x00048ad6) power_save_pane_g

0xb68b,	// (0x00044c1c) power_save_pane_t1_ParamLimits

0xb68b,	// (0x00044c1c) power_save_pane_t1

0x89fb,	// (0x00041f8c) aid_ps_clock_pane_ParamLimits

0xb656,	// (0x00044be7) aid_ps_indicator_pane_ParamLimits

0xb69d,	// (0x00044c2e) power_save_pane_t4_ParamLimits

0xb69d,	// (0x00044c2e) power_save_pane_t4

0x0001,

0xf54a,	// (0x00048adb) power_save_pane_t_ParamLimits

0xf54a,	// (0x00048adb) power_save_pane_t

0xb6c7,	// (0x00044c58) power_save_t3_ParamLimits

0xb6c7,	// (0x00044c58) power_save_t3

0xb6b2,	// (0x00044c43) power_save_t2_ParamLimits

0xb6b2,	// (0x00044c43) power_save_t2

0xb6dc,	// (0x00044c6d) indicator_ps_pane_g1

0x8a09,	// (0x00041f9a) ai_gene_pane_ParamLimits

0x8a09,	// (0x00041f9a) ai_gene_pane

0x8a20,	// (0x00041fb1) ai_links_pane_ParamLimits

0x8a20,	// (0x00041fb1) ai_links_pane

0x8a38,	// (0x00041fc9) indicator_pane_cp1_ParamLimits

0x8a38,	// (0x00041fc9) indicator_pane_cp1

0x8a47,	// (0x00041fd8) main_pane_idle_g1_cp_ParamLimits

0x8a47,	// (0x00041fd8) main_pane_idle_g1_cp

0x8a5f,	// (0x00041ff0) popup_ai_links_title_window

0x8a68,	// (0x00041ff9) soft_indicator_pane_cp1_ParamLimits

0x8a68,	// (0x00041ff9) soft_indicator_pane_cp1

0x31dc,	// (0x0003c76d) ai_links_pane_g1

0x31e5,	// (0x0003c776) grid_ai_links_pane

0xc57d,	// (0x00045b0e) ai_gene_pane_1

0x31ca,	// (0x0003c75b) ai_gene_pane_2

0x31d3,	// (0x0003c764) list_highlight_pane_cp4

0xc559,	// (0x00045aea) cell_ai_link_pane_ParamLimits

0xc559,	// (0x00045aea) cell_ai_link_pane

0x319b,	// (0x0003c72c) cell_ai_link_pane_g1

0xb809,	// (0x00044d9a) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x00048e6f) cell_ai_link_pane_g

0xb57c,	// (0x00044b0d) grid_highlight_cp2

0xb57c,	// (0x00044b0d) bg_popup_sub_pane_cp1

0xb6f3,	// (0x00044c84) popup_ai_links_title_window_t1

0x30eb,	// (0x0003c67c) ai_gene_pane_1_g1_ParamLimits

0x30eb,	// (0x0003c67c) ai_gene_pane_1_g1

0x30f7,	// (0x0003c688) ai_gene_pane_1_g2_ParamLimits

0x30f7,	// (0x0003c688) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x00048e65) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x00048e65) ai_gene_pane_1_g

0x3104,	// (0x0003c695) ai_gene_pane_1_t1_ParamLimits

0x3104,	// (0x0003c695) ai_gene_pane_1_t1

0x3138,	// (0x0003c6c9) grid_ai_soft_ind_pane

0x30d6,	// (0x0003c667) ai_gene_pane_2_t1_ParamLimits

0x30d6,	// (0x0003c667) ai_gene_pane_2_t1

0x8a7c,	// (0x0004200d) main_pane_empty_t1_ParamLimits

0x8a7c,	// (0x0004200d) main_pane_empty_t1

0x8a94,	// (0x00042025) main_pane_empty_t2_ParamLimits

0x8a94,	// (0x00042025) main_pane_empty_t2

0x8aa9,	// (0x0004203a) main_pane_empty_t3_ParamLimits

0x8aa9,	// (0x0004203a) main_pane_empty_t3

0x8abb,	// (0x0004204c) main_pane_empty_t4_ParamLimits

0x8abb,	// (0x0004204c) main_pane_empty_t4

0x8acd,	// (0x0004205e) main_pane_empty_t5_ParamLimits

0x8acd,	// (0x0004205e) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00048ae0) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00048ae0) main_pane_empty_t

0xba6b,	// (0x00044ffc) bg_popup_window_pane_ParamLimits

0xba6b,	// (0x00044ffc) bg_popup_window_pane

0xc4d3,	// (0x00045a64) find_popup_pane_cp2_ParamLimits

0xc4d3,	// (0x00045a64) find_popup_pane_cp2

0x2e52,	// (0x0003c3e3) heading_pane_ParamLimits

0x2e52,	// (0x0003c3e3) heading_pane

0xb57c,	// (0x00044b0d) bg_popup_sub_pane

0xc454,	// (0x000459e5) bg_popup_window_pane_g1_ParamLimits

0xc454,	// (0x000459e5) bg_popup_window_pane_g1

0xc463,	// (0x000459f4) bg_popup_window_pane_g2_ParamLimits

0xc463,	// (0x000459f4) bg_popup_window_pane_g2

0xc46f,	// (0x00045a00) bg_popup_window_pane_g3_ParamLimits

0xc46f,	// (0x00045a00) bg_popup_window_pane_g3

0xc47b,	// (0x00045a0c) bg_popup_window_pane_g4_ParamLimits

0xc47b,	// (0x00045a0c) bg_popup_window_pane_g4

0xc48a,	// (0x00045a1b) bg_popup_window_pane_g5_ParamLimits

0xc48a,	// (0x00045a1b) bg_popup_window_pane_g5

0xc49a,	// (0x00045a2b) bg_popup_window_pane_g6_ParamLimits

0xc49a,	// (0x00045a2b) bg_popup_window_pane_g6

0xc4a6,	// (0x00045a37) bg_popup_window_pane_g7_ParamLimits

0xc4a6,	// (0x00045a37) bg_popup_window_pane_g7

0xc4b5,	// (0x00045a46) bg_popup_window_pane_g8_ParamLimits

0xc4b5,	// (0x00045a46) bg_popup_window_pane_g8

0xc4c4,	// (0x00045a55) bg_popup_window_pane_g9_ParamLimits

0xc4c4,	// (0x00045a55) bg_popup_window_pane_g9

0x2e2c,	// (0x0003c3bd) bg_popup_window_pane_g10_ParamLimits

0x2e2c,	// (0x0003c3bd) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x00048e2d) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x00048e2d) bg_popup_window_pane_g

0x2d55,	// (0x0003c2e6) bg_popup_heading_pane_ParamLimits

0x2d55,	// (0x0003c2e6) bg_popup_heading_pane

0x0b11,	// (0x0003a0a2) tabs_4_passive_pane_cp_srt_ParamLimits

0x0b11,	// (0x0003a0a2) tabs_4_passive_pane_cp_srt

0x0b23,	// (0x0003a0b4) tabs_4_passive_pane_srt_ParamLimits

0x2d69,	// (0x0003c2fa) heading_pane_g2

0x0b23,	// (0x0003a0b4) tabs_4_passive_pane_srt

0x20df,	// (0x0003b670) bg_passive_tab_pane_cp3_srt_ParamLimits

0x20df,	// (0x0003b670) bg_passive_tab_pane_cp3_srt

0x2d71,	// (0x0003c302) heading_pane_t1_ParamLimits

0x2d71,	// (0x0003c302) heading_pane_t1

0x2d88,	// (0x0003c319) heading_pane_t2_ParamLimits

0x2d88,	// (0x0003c319) heading_pane_t2

0x0001,

0xf897,	// (0x00048e28) heading_pane_t_ParamLimits

0xf897,	// (0x00048e28) heading_pane_t

0x2892,	// (0x0003be23) bg_popup_heading_pane_g1

0x2941,	// (0x0003bed2) bg_popup_heading_pane_g2

0x294b,	// (0x0003bedc) bg_popup_heading_pane_g3

0x2955,	// (0x0003bee6) bg_popup_heading_pane_g4

0x295f,	// (0x0003bef0) bg_popup_heading_pane_g5

0x2969,	// (0x0003befa) bg_popup_heading_pane_g6

0x2971,	// (0x0003bf02) bg_popup_heading_pane_g7

0x2979,	// (0x0003bf0a) bg_popup_heading_pane_g8

0x2983,	// (0x0003bf14) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x00048de4) bg_popup_heading_pane_g

0x2053,	// (0x0003b5e4) bg_popup_sub_pane_g1

0x2063,	// (0x0003b5f4) bg_popup_sub_pane_g2

0x205b,	// (0x0003b5ec) bg_popup_sub_pane_g3

0x2073,	// (0x0003b604) bg_popup_sub_pane_g4

0x206b,	// (0x0003b5fc) bg_popup_sub_pane_g5

0x207b,	// (0x0003b60c) bg_popup_sub_pane_g6

0x2083,	// (0x0003b614) bg_popup_sub_pane_g7

0x2093,	// (0x0003b624) bg_popup_sub_pane_g8

0x208b,	// (0x0003b61c) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x00048dbe) bg_popup_sub_pane_g

0xb5ca,	// (0x00044b5b) bg_popup_window_pane_cp5_ParamLimits

0xb5ca,	// (0x00044b5b) bg_popup_window_pane_cp5

0xb710,	// (0x00044ca1) popup_note_window_g1_ParamLimits

0xb710,	// (0x00044ca1) popup_note_window_g1

0xb71c,	// (0x00044cad) popup_note_window_t1_ParamLimits

0xb71c,	// (0x00044cad) popup_note_window_t1

0xb732,	// (0x00044cc3) popup_note_window_t2_ParamLimits

0xb732,	// (0x00044cc3) popup_note_window_t2

0xb748,	// (0x00044cd9) popup_note_window_t3_ParamLimits

0xb748,	// (0x00044cd9) popup_note_window_t3

0xb75e,	// (0x00044cef) popup_note_window_t4_ParamLimits

0xb75e,	// (0x00044cef) popup_note_window_t4

0xb786,	// (0x00044d17) popup_note_window_t5_ParamLimits

0xb786,	// (0x00044d17) popup_note_window_t5

0x0004,

0xf55a,	// (0x00048aeb) popup_note_window_t_ParamLimits

0xf55a,	// (0x00048aeb) popup_note_window_t

0xb7aa,	// (0x00044d3b) bg_popup_window_pane_cp6_ParamLimits

0xb7aa,	// (0x00044d3b) bg_popup_window_pane_cp6

0x280e,	// (0x0003bd9f) popup_note_image_window_g1_ParamLimits

0x280e,	// (0x0003bd9f) popup_note_image_window_g1

0xa971,	// (0x00043f02) popup_note_image_window_g2_ParamLimits

0xa971,	// (0x00043f02) popup_note_image_window_g2

0x0001,

0xf821,	// (0x00048db2) popup_note_image_window_g_ParamLimits

0xf821,	// (0x00048db2) popup_note_image_window_g

0x2833,	// (0x0003bdc4) popup_note_image_window_t1_ParamLimits

0x2833,	// (0x0003bdc4) popup_note_image_window_t1

0x284c,	// (0x0003bddd) popup_note_image_window_t2_ParamLimits

0x284c,	// (0x0003bddd) popup_note_image_window_t2

0x2865,	// (0x0003bdf6) popup_note_image_window_t3_ParamLimits

0x2865,	// (0x0003bdf6) popup_note_image_window_t3

0x0002,

0xf826,	// (0x00048db7) popup_note_image_window_t_ParamLimits

0xf826,	// (0x00048db7) popup_note_image_window_t

0x26d7,	// (0x0003bc68) bg_popup_window_pane_cp7_ParamLimits

0x26d7,	// (0x0003bc68) bg_popup_window_pane_cp7

0x2707,	// (0x0003bc98) popup_note_wait_window_g1_ParamLimits

0x2707,	// (0x0003bc98) popup_note_wait_window_g1

0x2713,	// (0x0003bca4) popup_note_wait_window_g2_ParamLimits

0x2713,	// (0x0003bca4) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x00048da0) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x00048da0) popup_note_wait_window_g

0x272b,	// (0x0003bcbc) popup_note_wait_window_t1_ParamLimits

0x272b,	// (0x0003bcbc) popup_note_wait_window_t1

0xa912,	// (0x00043ea3) popup_note_wait_window_t2_ParamLimits

0xa912,	// (0x00043ea3) popup_note_wait_window_t2

0xa92f,	// (0x00043ec0) popup_note_wait_window_t3_ParamLimits

0xa92f,	// (0x00043ec0) popup_note_wait_window_t3

0xa942,	// (0x00043ed3) popup_note_wait_window_t4_ParamLimits

0xa942,	// (0x00043ed3) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x00048da7) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x00048da7) popup_note_wait_window_t

0x27a7,	// (0x0003bd38) wait_bar_pane_ParamLimits

0x27a7,	// (0x0003bd38) wait_bar_pane

0xb57c,	// (0x00044b0d) wait_anim_pane

0xb57c,	// (0x00044b0d) wait_border_pane

0xb572,	// (0x00044b03) wait_anim_pane_g1

0xb572,	// (0x00044b03) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x00048c60) wait_anim_pane_g

0x2683,	// (0x0003bc14) wait_border_pane_g1

0x268e,	// (0x0003bc1f) wait_border_pane_g2

0x2697,	// (0x0003bc28) wait_border_pane_g3

0x0002,

0xf808,	// (0x00048d99) wait_border_pane_g

0x24ee,	// (0x0003ba7f) bg_popup_window_pane_cp16_ParamLimits

0x24ee,	// (0x0003ba7f) bg_popup_window_pane_cp16

0xa8c2,	// (0x00043e53) indicator_popup_pane_cp4_ParamLimits

0xa8c2,	// (0x00043e53) indicator_popup_pane_cp4

0x2602,	// (0x0003bb93) popup_query_data_window_t1_ParamLimits

0x2602,	// (0x0003bb93) popup_query_data_window_t1

0x2614,	// (0x0003bba5) popup_query_data_window_t2_ParamLimits

0x2614,	// (0x0003bba5) popup_query_data_window_t2

0x262d,	// (0x0003bbbe) popup_query_data_window_t3_ParamLimits

0x262d,	// (0x0003bbbe) popup_query_data_window_t3

0x0002,

0xf801,	// (0x00048d92) popup_query_data_window_t_ParamLimits

0xf801,	// (0x00048d92) popup_query_data_window_t

0xa8d6,	// (0x00043e67) query_popup_data_pane_ParamLimits

0xa8d6,	// (0x00043e67) query_popup_data_pane

0xa8ea,	// (0x00043e7b) query_popup_data_pane_cp1_ParamLimits

0xa8ea,	// (0x00043e7b) query_popup_data_pane_cp1

0x24ee,	// (0x0003ba7f) bg_popup_window_pane_cp10_ParamLimits

0x24ee,	// (0x0003ba7f) bg_popup_window_pane_cp10

0xa83d,	// (0x00043dce) indicator_popup_pane_ParamLimits

0xa83d,	// (0x00043dce) indicator_popup_pane

0xa85f,	// (0x00043df0) popup_query_code_window_t1_ParamLimits

0xa85f,	// (0x00043df0) popup_query_code_window_t1

0xa879,	// (0x00043e0a) popup_query_code_window_t2_ParamLimits

0xa879,	// (0x00043e0a) popup_query_code_window_t2

0x25a5,	// (0x0003bb36) popup_query_code_window_t3_ParamLimits

0x25a5,	// (0x0003bb36) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x00048d8b) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x00048d8b) popup_query_code_window_t

0x25d4,	// (0x0003bb65) query_popup_pane_ParamLimits

0x25d4,	// (0x0003bb65) query_popup_pane

0xb7aa,	// (0x00044d3b) bg_popup_window_pane_cp15_ParamLimits

0xb7aa,	// (0x00044d3b) bg_popup_window_pane_cp15

0x8b05,	// (0x00042096) indicator_popup_pane_cp1_ParamLimits

0x8b05,	// (0x00042096) indicator_popup_pane_cp1

0x8b18,	// (0x000420a9) indicator_popup_pane_cp2_ParamLimits

0x8b18,	// (0x000420a9) indicator_popup_pane_cp2

0x8b2b,	// (0x000420bc) popup_query_data_code_window_g1_ParamLimits

0x8b2b,	// (0x000420bc) popup_query_data_code_window_g1

0xb7c8,	// (0x00044d59) popup_query_data_code_window_t1_ParamLimits

0xb7c8,	// (0x00044d59) popup_query_data_code_window_t1

0xb7da,	// (0x00044d6b) popup_query_data_code_window_t2_ParamLimits

0xb7da,	// (0x00044d6b) popup_query_data_code_window_t2

0x8b3e,	// (0x000420cf) popup_query_data_code_window_t3_ParamLimits

0x8b3e,	// (0x000420cf) popup_query_data_code_window_t3

0x8b54,	// (0x000420e5) popup_query_data_code_window_t4_ParamLimits

0x8b54,	// (0x000420e5) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00048af6) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00048af6) popup_query_data_code_window_t

0x06be,	// (0x00039c4f) list_single_midp_graphic_pane_g3

0x8b6c,	// (0x000420fd) query_popup_data_pane_cp2_ParamLimits

0x8b7f,	// (0x00042110) query_popup_pane_cp2_ParamLimits

0x8b7f,	// (0x00042110) query_popup_pane_cp2

0xb57c,	// (0x00044b0d) bg_popup_window_pane_cp11

0x24d2,	// (0x0003ba63) heading_pane_cp5

0x24da,	// (0x0003ba6b) listscroll_popup_info_pane

0xb57c,	// (0x00044b0d) input_focus_pane_cp3

0xb7ec,	// (0x00044d7d) query_popup_pane_t1

0xb7fa,	// (0x00044d8b) list_popup_info_pane_ParamLimits

0xb7fa,	// (0x00044d8b) list_popup_info_pane

0xb809,	// (0x00044d9a) listscroll_popup_info_pane_g1

0xb811,	// (0x00044da2) scroll_pane_cp7

0x8b92,	// (0x00042123) popup_info_list_pane_t1_ParamLimits

0x8b92,	// (0x00042123) popup_info_list_pane_t1

0x8bac,	// (0x0004213d) popup_info_list_pane_t2_ParamLimits

0x8bac,	// (0x0004213d) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00048aff) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00048aff) popup_info_list_pane_t

0xb57c,	// (0x00044b0d) bg_popup_window_pane_cp12

0xc959,	// (0x00045eea) find_popup_pane

0xb5d8,	// (0x00044b69) bg_popup_window_pane_cp3

0xb81b,	// (0x00044dac) heading_pane_cp3

0xb82a,	// (0x00044dbb) listscroll_popup_graphic_pane

0xb57c,	// (0x00044b0d) bg_popup_window_pane_cp4

0x8c16,	// (0x000421a7) heading_pane_cp4

0xb83a,	// (0x00044dcb) listscroll_popup_colour_pane

0x8c20,	// (0x000421b1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8c20,	// (0x000421b1) cell_large_graphic_colour_none_popup_pane

0x8c34,	// (0x000421c5) grid_large_graphic_colour_popup_pane_ParamLimits

0x8c34,	// (0x000421c5) grid_large_graphic_colour_popup_pane

0x8c58,	// (0x000421e9) listscroll_popup_colour_pane_g1_ParamLimits

0x8c58,	// (0x000421e9) listscroll_popup_colour_pane_g1

0x8c6f,	// (0x00042200) listscroll_popup_colour_pane_g2_ParamLimits

0x8c6f,	// (0x00042200) listscroll_popup_colour_pane_g2

0x8c86,	// (0x00042217) listscroll_popup_colour_pane_g3_ParamLimits

0x8c86,	// (0x00042217) listscroll_popup_colour_pane_g3

0x8c96,	// (0x00042227) listscroll_popup_colour_pane_g4_ParamLimits

0x8c96,	// (0x00042227) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00048b04) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00048b04) listscroll_popup_colour_pane_g

0xb842,	// (0x00044dd3) scroll_pane_cp6_ParamLimits

0xb842,	// (0x00044dd3) scroll_pane_cp6

0x8ca6,	// (0x00042237) cell_large_graphic_colour_popup_pane_ParamLimits

0x8ca6,	// (0x00042237) cell_large_graphic_colour_popup_pane

0x8cc5,	// (0x00042256) cell_large_graphic_colour_none_popup_pane_t1

0xb57c,	// (0x00044b0d) grid_highlight_pane_cp5

0xb854,	// (0x00044de5) cell_large_graphic_colour_popup_pane_g1

0xb85c,	// (0x00044ded) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00048b0d) cell_large_graphic_colour_popup_pane_g

0xb864,	// (0x00044df5) cell_large_graphic_colour_popup_pane_g2_copy1

0xb86d,	// (0x00044dfe) grid_highlight_pane_cp4

0xb875,	// (0x00044e06) bg_popup_window_pane_cp8_ParamLimits

0xb875,	// (0x00044e06) bg_popup_window_pane_cp8

0x8cd4,	// (0x00042265) popup_snote_single_text_window_g1_ParamLimits

0x8cd4,	// (0x00042265) popup_snote_single_text_window_g1

0x8ce6,	// (0x00042277) popup_snote_single_text_window_t1_ParamLimits

0x8ce6,	// (0x00042277) popup_snote_single_text_window_t1

0x8cf9,	// (0x0004228a) popup_snote_single_text_window_t2_ParamLimits

0x8cf9,	// (0x0004228a) popup_snote_single_text_window_t2

0x8d0c,	// (0x0004229d) popup_snote_single_text_window_t3_ParamLimits

0x8d0c,	// (0x0004229d) popup_snote_single_text_window_t3

0x8d45,	// (0x000422d6) popup_snote_single_text_window_t4_ParamLimits

0x8d45,	// (0x000422d6) popup_snote_single_text_window_t4

0x8d79,	// (0x0004230a) popup_snote_single_text_window_t5_ParamLimits

0x8d79,	// (0x0004230a) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00048b12) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00048b12) popup_snote_single_text_window_t

0xb890,	// (0x00044e21) bg_popup_window_pane_cp9_ParamLimits

0xb890,	// (0x00044e21) bg_popup_window_pane_cp9

0x8cd4,	// (0x00042265) popup_snote_single_graphic_window_g1_ParamLimits

0x8cd4,	// (0x00042265) popup_snote_single_graphic_window_g1

0xb89e,	// (0x00044e2f) popup_snote_single_graphic_window_g2_ParamLimits

0xb89e,	// (0x00044e2f) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00048b1d) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00048b1d) popup_snote_single_graphic_window_g

0xb8aa,	// (0x00044e3b) popup_snote_single_graphic_window_t1_ParamLimits

0xb8aa,	// (0x00044e3b) popup_snote_single_graphic_window_t1

0xb8bd,	// (0x00044e4e) popup_snote_single_graphic_window_t2_ParamLimits

0xb8bd,	// (0x00044e4e) popup_snote_single_graphic_window_t2

0x8d0c,	// (0x0004229d) popup_snote_single_graphic_window_t3_ParamLimits

0x8d0c,	// (0x0004229d) popup_snote_single_graphic_window_t3

0x8d45,	// (0x000422d6) popup_snote_single_graphic_window_t4_ParamLimits

0x8d45,	// (0x000422d6) popup_snote_single_graphic_window_t4

0x8da8,	// (0x00042339) popup_snote_single_graphic_window_t5_ParamLimits

0x8da8,	// (0x00042339) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00048b22) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00048b22) popup_snote_single_graphic_window_t

0x3784,	// (0x0003cd15) grid_graphic_popup_pane_ParamLimits

0x3784,	// (0x0003cd15) grid_graphic_popup_pane

0x37ae,	// (0x0003cd3f) listscroll_popup_graphic_pane_g1_ParamLimits

0x37ae,	// (0x0003cd3f) listscroll_popup_graphic_pane_g1

0xc8f7,	// (0x00045e88) listscroll_popup_graphic_pane_g2_ParamLimits

0xc8f7,	// (0x00045e88) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x00048f08) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x00048f08) listscroll_popup_graphic_pane_g

0x37d6,	// (0x0003cd67) scroll_pane_cp5

0xc8b6,	// (0x00045e47) cell_graphic_popup_pane_ParamLimits

0xc8b6,	// (0x00045e47) cell_graphic_popup_pane

0x36fb,	// (0x0003cc8c) cell_graphic_popup_pane_g1

0x3703,	// (0x0003cc94) cell_graphic_popup_pane_g2

0xb864,	// (0x00044df5) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x00048f01) cell_graphic_popup_pane_g

0x370c,	// (0x0003cc9d) cell_graphic_popup_pane_t2

0xb86d,	// (0x00044dfe) grid_highlight_pane_cp3

0xb8e2,	// (0x00044e73) list_gen_pane_ParamLimits

0xb8e2,	// (0x00044e73) list_gen_pane

0xb90a,	// (0x00044e9b) scroll_pane

0xc820,	// (0x00045db1) bg_list_pane_g1_ParamLimits

0xc820,	// (0x00045db1) bg_list_pane_g1

0xc83b,	// (0x00045dcc) bg_list_pane_g2_ParamLimits

0xc83b,	// (0x00045dcc) bg_list_pane_g2

0xc84e,	// (0x00045ddf) bg_list_pane_g3_ParamLimits

0xc84e,	// (0x00045ddf) bg_list_pane_g3

0xc860,	// (0x00045df1) bg_list_pane_g4_ParamLimits

0xc860,	// (0x00045df1) bg_list_pane_g4

0xc872,	// (0x00045e03) bg_list_pane_g5_ParamLimits

0xc872,	// (0x00045e03) bg_list_pane_g5

0x0004,

0xf965,	// (0x00048ef6) bg_list_pane_g_ParamLimits

0xf965,	// (0x00048ef6) bg_list_pane_g

0xc7e7,	// (0x00045d78) list_double2_graphic_large_graphic_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_double2_graphic_large_graphic_pane

0xc7e7,	// (0x00045d78) list_double2_graphic_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_double2_graphic_pane

0xc7e7,	// (0x00045d78) list_double2_large_graphic_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_double2_large_graphic_pane

0xc7e7,	// (0x00045d78) list_double2_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_double2_pane

0xc7e7,	// (0x00045d78) list_double_graphic_heading_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_double_graphic_heading_pane

0xc7e7,	// (0x00045d78) list_double_graphic_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_double_graphic_pane

0xc7e7,	// (0x00045d78) list_double_heading_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_double_heading_pane

0xc7e7,	// (0x00045d78) list_double_large_graphic_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_double_large_graphic_pane

0xc7e7,	// (0x00045d78) list_double_number_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_double_number_pane

0xc7e7,	// (0x00045d78) list_double_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_double_pane

0xc7e7,	// (0x00045d78) list_double_time_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_double_time_pane

0xc7e7,	// (0x00045d78) list_setting_number_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_setting_number_pane

0xc7e7,	// (0x00045d78) list_setting_pane_ParamLimits

0xc7e7,	// (0x00045d78) list_setting_pane

0x9288,	// (0x00042819) list_single_2graphic_pane_ParamLimits

0x9288,	// (0x00042819) list_single_2graphic_pane

0x9288,	// (0x00042819) list_single_graphic_heading_pane_ParamLimits

0x9288,	// (0x00042819) list_single_graphic_heading_pane

0x9288,	// (0x00042819) list_single_graphic_pane_ParamLimits

0x9288,	// (0x00042819) list_single_graphic_pane

0x9288,	// (0x00042819) list_single_heading_pane_ParamLimits

0x9288,	// (0x00042819) list_single_heading_pane

0x9288,	// (0x00042819) list_single_large_graphic_pane_ParamLimits

0x9288,	// (0x00042819) list_single_large_graphic_pane

0x9288,	// (0x00042819) list_single_number_heading_pane_ParamLimits

0x9288,	// (0x00042819) list_single_number_heading_pane

0x9288,	// (0x00042819) list_single_number_pane_ParamLimits

0x9288,	// (0x00042819) list_single_number_pane

0x9288,	// (0x00042819) list_single_pane_ParamLimits

0x9288,	// (0x00042819) list_single_pane

0xb57c,	// (0x00044b0d) list_highlight_pane_cp1

0xddbd,	// (0x0004734e) list_single_pane_g1_ParamLimits

0xddbd,	// (0x0004734e) list_single_pane_g1

0xddc9,	// (0x0004735a) list_single_pane_g2_ParamLimits

0xddc9,	// (0x0004735a) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00048b34) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00048b34) list_single_pane_g

0xab58,	// (0x000440e9) list_single_pane_t1_ParamLimits

0xab58,	// (0x000440e9) list_single_pane_t1

0xddbd,	// (0x0004734e) list_single_number_pane_g1_ParamLimits

0xddbd,	// (0x0004734e) list_single_number_pane_g1

0xddc9,	// (0x0004735a) list_single_number_pane_g2_ParamLimits

0xddc9,	// (0x0004735a) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00048b34) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00048b34) list_single_number_pane_g

0xddd5,	// (0x00047366) list_single_number_pane_t1_ParamLimits

0xddd5,	// (0x00047366) list_single_number_pane_t1

0xaaae,	// (0x0004403f) list_single_number_pane_t2_ParamLimits

0xaaae,	// (0x0004403f) list_single_number_pane_t2

0x0001,

0xf926,	// (0x00048eb7) list_single_number_pane_t_ParamLimits

0xf926,	// (0x00048eb7) list_single_number_pane_t

0xddb1,	// (0x00047342) list_single_graphic_pane_g1_ParamLimits

0xddb1,	// (0x00047342) list_single_graphic_pane_g1

0xddbd,	// (0x0004734e) list_single_graphic_pane_g2_ParamLimits

0xddbd,	// (0x0004734e) list_single_graphic_pane_g2

0xddc9,	// (0x0004735a) list_single_graphic_pane_g3_ParamLimits

0xddc9,	// (0x0004735a) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00048b2d) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00048b2d) list_single_graphic_pane_g

0xddd5,	// (0x00047366) list_single_graphic_pane_t1_ParamLimits

0xddd5,	// (0x00047366) list_single_graphic_pane_t1

0xddbd,	// (0x0004734e) list_single_heading_pane_g1_ParamLimits

0xddbd,	// (0x0004734e) list_single_heading_pane_g1

0xddc9,	// (0x0004735a) list_single_heading_pane_g2_ParamLimits

0xddc9,	// (0x0004735a) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00048b34) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00048b34) list_single_heading_pane_g

0xddeb,	// (0x0004737c) list_single_heading_pane_t1_ParamLimits

0xddeb,	// (0x0004737c) list_single_heading_pane_t1

0xde01,	// (0x00047392) list_single_heading_pane_t2_ParamLimits

0xde01,	// (0x00047392) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00048b39) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00048b39) list_single_heading_pane_t

0xddbd,	// (0x0004734e) list_single_number_heading_pane_g1_ParamLimits

0xddbd,	// (0x0004734e) list_single_number_heading_pane_g1

0xddc9,	// (0x0004735a) list_single_number_heading_pane_g2_ParamLimits

0xddc9,	// (0x0004735a) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00048b34) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00048b34) list_single_number_heading_pane_g

0xddeb,	// (0x0004737c) list_single_number_heading_pane_t1_ParamLimits

0xddeb,	// (0x0004737c) list_single_number_heading_pane_t1

0xde13,	// (0x000473a4) list_single_number_heading_pane_t2_ParamLimits

0xde13,	// (0x000473a4) list_single_number_heading_pane_t2

0xde25,	// (0x000473b6) list_single_number_heading_pane_t3_ParamLimits

0xde25,	// (0x000473b6) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00048b3e) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00048b3e) list_single_number_heading_pane_t

0xde37,	// (0x000473c8) list_single_graphic_heading_pane_g1_ParamLimits

0xde37,	// (0x000473c8) list_single_graphic_heading_pane_g1

0x8de1,	// (0x00042372) list_single_graphic_heading_pane_g4_ParamLimits

0x8de1,	// (0x00042372) list_single_graphic_heading_pane_g4

0xddc9,	// (0x0004735a) list_single_graphic_heading_pane_g5_ParamLimits

0xddc9,	// (0x0004735a) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00048b45) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00048b45) list_single_graphic_heading_pane_g

0xddeb,	// (0x0004737c) list_single_graphic_heading_pane_t1_ParamLimits

0xddeb,	// (0x0004737c) list_single_graphic_heading_pane_t1

0x8df2,	// (0x00042383) list_single_graphic_heading_pane_t2_ParamLimits

0x8df2,	// (0x00042383) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00048b4c) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00048b4c) list_single_graphic_heading_pane_t

0xde43,	// (0x000473d4) list_single_large_graphic_pane_g1_ParamLimits

0xde43,	// (0x000473d4) list_single_large_graphic_pane_g1

0xddbd,	// (0x0004734e) list_single_large_graphic_pane_g2_ParamLimits

0xddbd,	// (0x0004734e) list_single_large_graphic_pane_g2

0xddc9,	// (0x0004735a) list_single_large_graphic_pane_g3_ParamLimits

0xddc9,	// (0x0004735a) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00048b51) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00048b51) list_single_large_graphic_pane_g

0x268e,	// (0x0003bc1f) wait_border_pane_g2_copy1

0x8e04,	// (0x00042395) list_single_large_graphic_pane_g4_cp2

0xddd5,	// (0x00047366) list_single_large_graphic_pane_t1_ParamLimits

0xddd5,	// (0x00047366) list_single_large_graphic_pane_t1

0xde4f,	// (0x000473e0) list_double_pane_g1_ParamLimits

0xde4f,	// (0x000473e0) list_double_pane_g1

0xde5b,	// (0x000473ec) list_double_pane_g2_ParamLimits

0xde5b,	// (0x000473ec) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00048b58) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00048b58) list_double_pane_g

0x8e0c,	// (0x0004239d) list_double_pane_t1_ParamLimits

0x8e0c,	// (0x0004239d) list_double_pane_t1

0x8e22,	// (0x000423b3) list_double_pane_t2_ParamLimits

0x8e22,	// (0x000423b3) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00048b5d) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00048b5d) list_double_pane_t

0x8e34,	// (0x000423c5) list_double2_pane_g1_ParamLimits

0x8e34,	// (0x000423c5) list_double2_pane_g1

0xde5b,	// (0x000473ec) list_double2_pane_g2_ParamLimits

0xde5b,	// (0x000473ec) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00048b62) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00048b62) list_double2_pane_g

0x8e0c,	// (0x0004239d) list_double2_pane_t1_ParamLimits

0x8e0c,	// (0x0004239d) list_double2_pane_t1

0x8e45,	// (0x000423d6) list_double2_pane_t2_ParamLimits

0x8e45,	// (0x000423d6) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00048b67) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00048b67) list_double2_pane_t

0xde4f,	// (0x000473e0) list_double_number_pane_g1_ParamLimits

0xde4f,	// (0x000473e0) list_double_number_pane_g1

0xde5b,	// (0x000473ec) list_double_number_pane_g2_ParamLimits

0xde5b,	// (0x000473ec) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00048b58) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00048b58) list_double_number_pane_g

0x8e57,	// (0x000423e8) list_double_number_pane_t1_ParamLimits

0x8e57,	// (0x000423e8) list_double_number_pane_t1

0x8e69,	// (0x000423fa) list_double_number_pane_t2_ParamLimits

0x8e69,	// (0x000423fa) list_double_number_pane_t2

0x8e7f,	// (0x00042410) list_double_number_pane_t3_ParamLimits

0x8e7f,	// (0x00042410) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00048b6c) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00048b6c) list_double_number_pane_t

0x8e91,	// (0x00042422) list_double_graphic_pane_g1_ParamLimits

0x8e91,	// (0x00042422) list_double_graphic_pane_g1

0xde67,	// (0x000473f8) list_double_graphic_pane_g2_ParamLimits

0xde67,	// (0x000473f8) list_double_graphic_pane_g2

0xde76,	// (0x00047407) list_double_graphic_pane_g3_ParamLimits

0xde76,	// (0x00047407) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00048b73) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00048b73) list_double_graphic_pane_g

0x8ea9,	// (0x0004243a) list_double_graphic_pane_t1_ParamLimits

0x8ea9,	// (0x0004243a) list_double_graphic_pane_t1

0x8ebf,	// (0x00042450) list_double_graphic_pane_t2_ParamLimits

0x8ebf,	// (0x00042450) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00048b7c) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00048b7c) list_double_graphic_pane_t

0x8ed1,	// (0x00042462) list_double2_graphic_pane_g1_ParamLimits

0x8ed1,	// (0x00042462) list_double2_graphic_pane_g1

0xde82,	// (0x00047413) list_double2_graphic_pane_g2_ParamLimits

0xde82,	// (0x00047413) list_double2_graphic_pane_g2

0xde8e,	// (0x0004741f) list_double2_graphic_pane_g3_ParamLimits

0xde8e,	// (0x0004741f) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00048b81) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00048b81) list_double2_graphic_pane_g

0x8e69,	// (0x000423fa) list_double2_graphic_pane_t1_ParamLimits

0x8e69,	// (0x000423fa) list_double2_graphic_pane_t1

0x8edd,	// (0x0004246e) list_double2_graphic_pane_t2_ParamLimits

0x8edd,	// (0x0004246e) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00048b88) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00048b88) list_double2_graphic_pane_t

0x8eef,	// (0x00042480) list_double_large_graphic_pane_g1_ParamLimits

0x8eef,	// (0x00042480) list_double_large_graphic_pane_g1

0x8e34,	// (0x000423c5) list_double_large_graphic_pane_g2_ParamLimits

0x8e34,	// (0x000423c5) list_double_large_graphic_pane_g2

0xde5b,	// (0x000473ec) list_double_large_graphic_pane_g3_ParamLimits

0xde5b,	// (0x000473ec) list_double_large_graphic_pane_g3

0x8f02,	// (0x00042493) list_double_large_graphic_pane_g4_ParamLimits

0x8f02,	// (0x00042493) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00048b8d) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00048b8d) list_double_large_graphic_pane_g

0x8f14,	// (0x000424a5) list_double_large_graphic_pane_t1_ParamLimits

0x8f14,	// (0x000424a5) list_double_large_graphic_pane_t1

0x8f2d,	// (0x000424be) list_double_large_graphic_pane_t2_ParamLimits

0x8f2d,	// (0x000424be) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00048b98) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00048b98) list_double_large_graphic_pane_t

0x8f3f,	// (0x000424d0) list_double2_large_graphic_pane_g1_ParamLimits

0x8f3f,	// (0x000424d0) list_double2_large_graphic_pane_g1

0x8e34,	// (0x000423c5) list_double2_large_graphic_pane_g2_ParamLimits

0x8e34,	// (0x000423c5) list_double2_large_graphic_pane_g2

0xde5b,	// (0x000473ec) list_double2_large_graphic_pane_g3_ParamLimits

0xde5b,	// (0x000473ec) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00048b9d) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00048b9d) list_double2_large_graphic_pane_g

0x8e69,	// (0x000423fa) list_double2_large_graphic_pane_t1_ParamLimits

0x8e69,	// (0x000423fa) list_double2_large_graphic_pane_t1

0x8edd,	// (0x0004246e) list_double2_large_graphic_pane_t2_ParamLimits

0x8edd,	// (0x0004246e) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00048b88) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00048b88) list_double2_large_graphic_pane_t

0x8f4b,	// (0x000424dc) list_double_heading_pane_g1_ParamLimits

0x8f4b,	// (0x000424dc) list_double_heading_pane_g1

0xdeaf,	// (0x00047440) list_double_heading_pane_g2_ParamLimits

0xdeaf,	// (0x00047440) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x00048ba4) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x00048ba4) list_double_heading_pane_g

0x8f5c,	// (0x000424ed) list_double_heading_pane_t1_ParamLimits

0x8f5c,	// (0x000424ed) list_double_heading_pane_t1

0x8edd,	// (0x0004246e) list_double_heading_pane_t2_ParamLimits

0x8edd,	// (0x0004246e) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x00048ba9) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x00048ba9) list_double_heading_pane_t

0x8f72,	// (0x00042503) list_double_graphic_heading_pane_g1_ParamLimits

0x8f72,	// (0x00042503) list_double_graphic_heading_pane_g1

0x8f4b,	// (0x000424dc) list_double_graphic_heading_pane_g2_ParamLimits

0x8f4b,	// (0x000424dc) list_double_graphic_heading_pane_g2

0xdeaf,	// (0x00047440) list_double_graphic_heading_pane_g3_ParamLimits

0xdeaf,	// (0x00047440) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x00048bae) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00048bae) list_double_graphic_heading_pane_g

0x8f5c,	// (0x000424ed) list_double_graphic_heading_pane_t1_ParamLimits

0x8f5c,	// (0x000424ed) list_double_graphic_heading_pane_t1

0x8edd,	// (0x0004246e) list_double_graphic_heading_pane_t2_ParamLimits

0x8edd,	// (0x0004246e) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x00048ba9) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x00048ba9) list_double_graphic_heading_pane_t

0x8e34,	// (0x000423c5) list_double_time_pane_g1_ParamLimits

0x8e34,	// (0x000423c5) list_double_time_pane_g1

0xde5b,	// (0x000473ec) list_double_time_pane_g2_ParamLimits

0xde5b,	// (0x000473ec) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x00048b62) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x00048b62) list_double_time_pane_g

0xdebb,	// (0x0004744c) list_double_time_pane_t1_ParamLimits

0xdebb,	// (0x0004744c) list_double_time_pane_t1

0xded1,	// (0x00047462) list_double_time_pane_t2_ParamLimits

0xded1,	// (0x00047462) list_double_time_pane_t2

0xdee3,	// (0x00047474) list_double_time_pane_t3_ParamLimits

0xdee3,	// (0x00047474) list_double_time_pane_t3

0xdef5,	// (0x00047486) list_double_time_pane_t4_ParamLimits

0xdef5,	// (0x00047486) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00048bb5) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00048bb5) list_double_time_pane_t

0xdf07,	// (0x00047498) list_setting_pane_g1_ParamLimits

0xdf07,	// (0x00047498) list_setting_pane_g1

0xdf13,	// (0x000474a4) list_setting_pane_g2_ParamLimits

0xdf13,	// (0x000474a4) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00048bbe) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00048bbe) list_setting_pane_g

0x8f7e,	// (0x0004250f) list_setting_pane_t1_ParamLimits

0x8f7e,	// (0x0004250f) list_setting_pane_t1

0x8f95,	// (0x00042526) list_setting_pane_t2_ParamLimits

0x8f95,	// (0x00042526) list_setting_pane_t2

0x0002,

0xf632,	// (0x00048bc3) list_setting_pane_t_ParamLimits

0xf632,	// (0x00048bc3) list_setting_pane_t

0x8fd4,	// (0x00042565) set_value_pane_cp_ParamLimits

0x8fd4,	// (0x00042565) set_value_pane_cp

0xdf1f,	// (0x000474b0) list_setting_number_pane_g1_ParamLimits

0xdf1f,	// (0x000474b0) list_setting_number_pane_g1

0xdf2b,	// (0x000474bc) list_setting_number_pane_g2_ParamLimits

0xdf2b,	// (0x000474bc) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x00048bca) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x00048bca) list_setting_number_pane_g

0x8fe0,	// (0x00042571) list_setting_number_pane_t1_ParamLimits

0x8fe0,	// (0x00042571) list_setting_number_pane_t1

0xdf37,	// (0x000474c8) list_setting_number_pane_t2_ParamLimits

0xdf37,	// (0x000474c8) list_setting_number_pane_t2

0x8ff4,	// (0x00042585) list_setting_number_pane_t3_ParamLimits

0x8ff4,	// (0x00042585) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x00048bcf) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x00048bcf) list_setting_number_pane_t

0x8fd4,	// (0x00042565) set_value_pane_ParamLimits

0x8fd4,	// (0x00042565) set_value_pane

0xb93e,	// (0x00044ecf) bg_set_opt_pane_ParamLimits

0xb93e,	// (0x00044ecf) bg_set_opt_pane

0x900c,	// (0x0004259d) set_value_pane_t1

0xb95f,	// (0x00044ef0) slider_set_pane_cp3

0x901a,	// (0x000425ab) volume_small_pane_cp

0xb968,	// (0x00044ef9) list_form_gen_pane

0xb971,	// (0x00044f02) scroll_pane_cp8

0x9023,	// (0x000425b4) form_field_data_pane_ParamLimits

0x9023,	// (0x000425b4) form_field_data_pane

0x903a,	// (0x000425cb) form_field_data_wide_pane_ParamLimits

0x903a,	// (0x000425cb) form_field_data_wide_pane

0x905a,	// (0x000425eb) form_field_popup_pane_ParamLimits

0x905a,	// (0x000425eb) form_field_popup_pane

0x9072,	// (0x00042603) form_field_popup_wide_pane_ParamLimits

0x9072,	// (0x00042603) form_field_popup_wide_pane

0xdf89,	// (0x0004751a) form_field_slider_pane_ParamLimits

0xdf89,	// (0x0004751a) form_field_slider_pane

0x908f,	// (0x00042620) form_field_slider_wide_pane_ParamLimits

0x908f,	// (0x00042620) form_field_slider_wide_pane

0xb982,	// (0x00044f13) data_form_pane

0x90ac,	// (0x0004263d) form_field_data_pane_t1

0xb98e,	// (0x00044f1f) input_focus_pane

0x90c6,	// (0x00042657) data_form_wide_pane

0x90e3,	// (0x00042674) form_field_data_wide_pane_t1

0xb882,	// (0x00044e13) input_focus_pane_cp6

0x9105,	// (0x00042696) form_field_popup_pane_t1

0xb98e,	// (0x00044f1f) input_focus_pane_cp7

0xb9bc,	// (0x00044f4d) list_form_pane

0x9127,	// (0x000426b8) form_field_popup_wide_pane_t1

0xb98e,	// (0x00044f1f) input_focus_pane_cp8

0xb9c8,	// (0x00044f59) list_form_wide_pane

0x9144,	// (0x000426d5) form_field_slider_pane_t1_ParamLimits

0x9144,	// (0x000426d5) form_field_slider_pane_t1

0x915c,	// (0x000426ed) form_field_slider_pane_t2_ParamLimits

0x915c,	// (0x000426ed) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x00048bdf) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x00048bdf) form_field_slider_pane_t

0xb5ca,	// (0x00044b5b) input_focus_pane_cp9_ParamLimits

0xb5ca,	// (0x00044b5b) input_focus_pane_cp9

0x9171,	// (0x00042702) slider_cont_pane_ParamLimits

0x9171,	// (0x00042702) slider_cont_pane

0xb9d4,	// (0x00044f65) form_field_slider_wide_pane_t1_ParamLimits

0xb9d4,	// (0x00044f65) form_field_slider_wide_pane_t1

0x9185,	// (0x00042716) form_field_slider_wide_pane_t2_ParamLimits

0x9185,	// (0x00042716) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x00048be4) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x00048be4) form_field_slider_wide_pane_t

0xb5ca,	// (0x00044b5b) input_focus_pane_cp10_ParamLimits

0xb5ca,	// (0x00044b5b) input_focus_pane_cp10

0x9197,	// (0x00042728) slider_cont_pane_cp1_ParamLimits

0x9197,	// (0x00042728) slider_cont_pane_cp1

0x91ab,	// (0x0004273c) slider_form_pane_cp

0xb9e6,	// (0x00044f77) input_focus_pane_g1

0xb9ee,	// (0x00044f7f) input_focus_pane_g2

0xb9f6,	// (0x00044f87) input_focus_pane_g3

0xb9fe,	// (0x00044f8f) input_focus_pane_g4

0xba06,	// (0x00044f97) input_focus_pane_g5

0xba0e,	// (0x00044f9f) input_focus_pane_g6

0xba16,	// (0x00044fa7) input_focus_pane_g7

0xba1e,	// (0x00044faf) input_focus_pane_g8

0xba26,	// (0x00044fb7) input_focus_pane_g9

0xb572,	// (0x00044b03) input_focus_pane_g10

0x0009,

0xf658,	// (0x00048be9) input_focus_pane_g

0x2697,	// (0x0003bc28) wait_border_pane_g3_copy1

0x91b3,	// (0x00042744) data_form_pane_t1

0xb572,	// (0x00044b03) wait_anim_pane_g1_copy1

0xab2c,	// (0x000440bd) data_form_wide_pane_t1

0x91cd,	// (0x0004275e) list_form_graphic_pane_cp_ParamLimits

0x91cd,	// (0x0004275e) list_form_graphic_pane_cp

0x3586,	// (0x0003cb17) slider_form_pane_g1

0x358f,	// (0x0003cb20) slider_form_pane_g2

0x0006,

0xf956,	// (0x00048ee7) slider_form_pane_g

0x91cd,	// (0x0004275e) list_form_graphic_pane_ParamLimits

0x91cd,	// (0x0004275e) list_form_graphic_pane

0x91e0,	// (0x00042771) list_form_graphic_pane_g1

0x91e8,	// (0x00042779) list_form_graphic_pane_t1_ParamLimits

0x91e8,	// (0x00042779) list_form_graphic_pane_t1

0xb5d8,	// (0x00044b69) list_highlight_pane_cp5_ParamLimits

0xb5d8,	// (0x00044b69) list_highlight_pane_cp5

0x91fd,	// (0x0004278e) find_pane_g1

0xba2e,	// (0x00044fbf) input_find_pane

0x9206,	// (0x00042797) input_find_pane_g1_ParamLimits

0x9206,	// (0x00042797) input_find_pane_g1

0x9212,	// (0x000427a3) input_find_pane_t1_ParamLimits

0x9212,	// (0x000427a3) input_find_pane_t1

0x9227,	// (0x000427b8) input_find_pane_t2_ParamLimits

0x9227,	// (0x000427b8) input_find_pane_t2

0x0001,

0xf66d,	// (0x00048bfe) input_find_pane_t_ParamLimits

0xf66d,	// (0x00048bfe) input_find_pane_t

0xba37,	// (0x00044fc8) input_focus_pane_cp5_ParamLimits

0xba37,	// (0x00044fc8) input_focus_pane_cp5

0xba4a,	// (0x00044fdb) bg_popup_window_pane_cp2_ParamLimits

0xba4a,	// (0x00044fdb) bg_popup_window_pane_cp2

0xba57,	// (0x00044fe8) listscroll_menu_pane_ParamLimits

0xba57,	// (0x00044fe8) listscroll_menu_pane

0x9248,	// (0x000427d9) popup_submenu_window_ParamLimits

0x9248,	// (0x000427d9) popup_submenu_window

0xba63,	// (0x00044ff4) find_popup_pane_g1

0x9270,	// (0x00042801) input_popup_find_pane_cp

0xba6b,	// (0x00044ffc) input_focus_pane_cp4_ParamLimits

0xba6b,	// (0x00044ffc) input_focus_pane_cp4

0xba79,	// (0x0004500a) input_popup_find_pane_t1_ParamLimits

0xba79,	// (0x0004500a) input_popup_find_pane_t1

0xb57c,	// (0x00044b0d) bg_popup_sub_pane_cp

0xbaa7,	// (0x00045038) listscroll_popup_sub_pane

0xbaaf,	// (0x00045040) list_submenu_pane_ParamLimits

0xbaaf,	// (0x00045040) list_submenu_pane

0xbac0,	// (0x00045051) scroll_pane_cp4

0x9288,	// (0x00042819) list_single_popup_submenu_pane_ParamLimits

0x9288,	// (0x00042819) list_single_popup_submenu_pane

0x929c,	// (0x0004282d) list_single_popup_submenu_pane_g1

0x92a4,	// (0x00042835) list_single_popup_submenu_pane_t1_ParamLimits

0x92a4,	// (0x00042835) list_single_popup_submenu_pane_t1

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp1_ParamLimits

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp1

0xbac8,	// (0x00045059) tabs_2_active_pane_g1

0x92b9,	// (0x0004284a) tabs_2_active_pane_t1

0xb5ca,	// (0x00044b5b) bg_passive_tab_pane_cp1_ParamLimits

0xb5ca,	// (0x00044b5b) bg_passive_tab_pane_cp1

0xbac8,	// (0x00045059) tabs_2_passive_pane_g1

0x92b9,	// (0x0004284a) tabs_2_passive_pane_t1

0xb5d8,	// (0x00044b69) bg_active_tab_pane_cp4

0x92cb,	// (0x0004285c) tabs_2_long_active_pane_t1

0xbad0,	// (0x00045061) bg_passive_tab_pane_cp4

0x06c6,	// (0x00039c57) list_single_midp_graphic_pane_g4_ParamLimits

0xb5d8,	// (0x00044b69) bg_active_tab_pane_cp5

0x92de,	// (0x0004286f) tabs_3_long_active_pane_t1

0xbad0,	// (0x00045061) bg_passive_tab_pane_cp5

0x06c6,	// (0x00039c57) list_single_midp_graphic_pane_g4

0xb5d8,	// (0x00044b69) bg_popup_window_pane_cp13_ParamLimits

0xb5d8,	// (0x00044b69) bg_popup_window_pane_cp13

0xbadc,	// (0x0004506d) listscroll_popup_fast_pane_ParamLimits

0xbadc,	// (0x0004506d) listscroll_popup_fast_pane

0xbae8,	// (0x00045079) grid_popup_fast_pane_ParamLimits

0xbae8,	// (0x00045079) grid_popup_fast_pane

0xbafa,	// (0x0004508b) scroll_pane_cp9_ParamLimits

0xbafa,	// (0x0004508b) scroll_pane_cp9

0x4ee9,	// (0x0003e47a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4ee9,	// (0x0003e47a) list_single_graphic_hl_pane_t1_cp2

0xbb0d,	// (0x0004509e) input_focus_pane_cp20_ParamLimits

0xbb0d,	// (0x0004509e) input_focus_pane_cp20

0xbb1b,	// (0x000450ac) query_popup_data_pane_t1_ParamLimits

0xbb1b,	// (0x000450ac) query_popup_data_pane_t1

0xbb2e,	// (0x000450bf) query_popup_data_pane_t2_ParamLimits

0xbb2e,	// (0x000450bf) query_popup_data_pane_t2

0xbb74,	// (0x00045105) query_popup_data_pane_t3_ParamLimits

0xbb74,	// (0x00045105) query_popup_data_pane_t3

0xbbb5,	// (0x00045146) query_popup_data_pane_t4_ParamLimits

0xbbb5,	// (0x00045146) query_popup_data_pane_t4

0xbbf1,	// (0x00045182) query_popup_data_pane_t5_ParamLimits

0xbbf1,	// (0x00045182) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x00048c03) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x00048c03) query_popup_data_pane_t

0xb9e6,	// (0x00044f77) bg_set_opt_pane_g1

0xb9ee,	// (0x00044f7f) bg_set_opt_pane_g2

0xb9f6,	// (0x00044f87) bg_set_opt_pane_g3

0xb9fe,	// (0x00044f8f) bg_set_opt_pane_g4

0xba06,	// (0x00044f97) bg_set_opt_pane_g5

0xba0e,	// (0x00044f9f) bg_set_opt_pane_g6

0xba16,	// (0x00044fa7) bg_set_opt_pane_g7

0xba1e,	// (0x00044faf) bg_set_opt_pane_g8

0xba26,	// (0x00044fb7) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x00048c0e) bg_set_opt_pane_g

0xf2bc,	// (0x0004884d) control_top_pane_stacon_ParamLimits

0xf2bc,	// (0x0004884d) control_top_pane_stacon

0xf30f,	// (0x000488a0) signal_pane_stacon_ParamLimits

0xf30f,	// (0x000488a0) signal_pane_stacon

0xbf7d,	// (0x0004550e) stacon_top_pane_g1_ParamLimits

0xbf7d,	// (0x0004550e) stacon_top_pane_g1

0xf334,	// (0x000488c5) title_pane_stacon_ParamLimits

0xf334,	// (0x000488c5) title_pane_stacon

0xf35e,	// (0x000488ef) uni_indicator_pane_stacon_ParamLimits

0xf35e,	// (0x000488ef) uni_indicator_pane_stacon

0xf373,	// (0x00048904) battery_pane_stacon_ParamLimits

0xf373,	// (0x00048904) battery_pane_stacon

0xf3b7,	// (0x00048948) control_bottom_pane_stacon_ParamLimits

0xf3b7,	// (0x00048948) control_bottom_pane_stacon

0xf3da,	// (0x0004896b) navi_pane_stacon_ParamLimits

0xf3da,	// (0x0004896b) navi_pane_stacon

0xbf9f,	// (0x00045530) stacon_bottom_pane_g1_ParamLimits

0xbf9f,	// (0x00045530) stacon_bottom_pane_g1

0xf07f,	// (0x00048610) aid_levels_signal_lsc_ParamLimits

0xf07f,	// (0x00048610) aid_levels_signal_lsc

0xf095,	// (0x00048626) signal_pane_stacon_g1_ParamLimits

0xf095,	// (0x00048626) signal_pane_stacon_g1

0xf0a9,	// (0x0004863a) signal_pane_stacon_g2_ParamLimits

0xf0a9,	// (0x0004863a) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x00048c21) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x00048c21) signal_pane_stacon_g

0xf0de,	// (0x0004866f) title_pane_stacon_t1_ParamLimits

0xf0de,	// (0x0004866f) title_pane_stacon_t1

0xbc35,	// (0x000451c6) uni_indicator_pane_stacon_g1

0xbc3f,	// (0x000451d0) uni_indicator_pane_stacon_g2

0xbc49,	// (0x000451da) uni_indicator_pane_stacon_g3

0xbc53,	// (0x000451e4) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x00048c2d) uni_indicator_pane_stacon_g

0xf103,	// (0x00048694) control_top_pane_stacon_g1

0xf10b,	// (0x0004869c) control_top_pane_stacon_t1_ParamLimits

0xf10b,	// (0x0004869c) control_top_pane_stacon_t1

0xf142,	// (0x000486d3) aid_levels_battery_lsc_ParamLimits

0xf142,	// (0x000486d3) aid_levels_battery_lsc

0xf159,	// (0x000486ea) battery_pane_stacon_g1_ParamLimits

0xf159,	// (0x000486ea) battery_pane_stacon_g1

0xf16c,	// (0x000486fd) battery_pane_stacon_g2_ParamLimits

0xf16c,	// (0x000486fd) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00048c36) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00048c36) battery_pane_stacon_g

0xf1aa,	// (0x0004873b) navi_icon_pane_stacon

0xf1be,	// (0x0004874f) navi_navi_pane_stacon

0xf1aa,	// (0x0004873b) navi_text_pane_stacon

0xf103,	// (0x00048694) control_bottom_pane_stacon_g1

0xf1d2,	// (0x00048763) control_bottom_pane_stacon_t1_ParamLimits

0xf1d2,	// (0x00048763) control_bottom_pane_stacon_t1

0x930a,	// (0x0004289b) grid_app_pane_ParamLimits

0x930a,	// (0x0004289b) grid_app_pane

0x9342,	// (0x000428d3) scroll_pane_cp15_ParamLimits

0x9342,	// (0x000428d3) scroll_pane_cp15

0x9357,	// (0x000428e8) cell_app_pane_ParamLimits

0x9357,	// (0x000428e8) cell_app_pane

0x939c,	// (0x0004292d) cell_app_pane_g1_ParamLimits

0x939c,	// (0x0004292d) cell_app_pane_g1

0xbc77,	// (0x00045208) cell_app_pane_g2_ParamLimits

0xbc77,	// (0x00045208) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x00048c3b) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x00048c3b) cell_app_pane_g

0x93c0,	// (0x00042951) cell_app_pane_t1_ParamLimits

0x93c0,	// (0x00042951) cell_app_pane_t1

0xbc83,	// (0x00045214) grid_highlight_pane_ParamLimits

0xbc83,	// (0x00045214) grid_highlight_pane

0xb9e6,	// (0x00044f77) cell_highlight_pane_g1

0xb9ee,	// (0x00044f7f) cell_highlight_pane_g2

0xb9f6,	// (0x00044f87) cell_highlight_pane_g3

0xb9fe,	// (0x00044f8f) cell_highlight_pane_g4

0xba06,	// (0x00044f97) cell_highlight_pane_g5

0xba0e,	// (0x00044f9f) cell_highlight_pane_g6

0xba16,	// (0x00044fa7) cell_highlight_pane_g7

0xba1e,	// (0x00044faf) cell_highlight_pane_g8

0xba26,	// (0x00044fb7) cell_highlight_pane_g9

0xb572,	// (0x00044b03) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x00048be9) cell_highlight_pane_g

0xbc94,	// (0x00045225) bg_scroll_pane

0x93e0,	// (0x00042971) scroll_handle_pane

0xbcdb,	// (0x0004526c) scroll_bg_pane_g1

0xbcf0,	// (0x00045281) scroll_bg_pane_g2

0xbd08,	// (0x00045299) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00048c40) scroll_bg_pane_g

0x93f4,	// (0x00042985) scroll_handle_focus_pane_ParamLimits

0x93f4,	// (0x00042985) scroll_handle_focus_pane

0xbcdb,	// (0x0004526c) scroll_handle_pane_g1

0xbd1d,	// (0x000452ae) scroll_handle_pane_g2

0xbd08,	// (0x00045299) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x00048c47) scroll_handle_pane_g

0xba6b,	// (0x00044ffc) bg_popup_sub_pane_cp21_ParamLimits

0xba6b,	// (0x00044ffc) bg_popup_sub_pane_cp21

0x9401,	// (0x00042992) popup_fep_japan_predictive_window_t1_ParamLimits

0x9401,	// (0x00042992) popup_fep_japan_predictive_window_t1

0x9418,	// (0x000429a9) popup_fep_japan_predictive_window_t2_ParamLimits

0x9418,	// (0x000429a9) popup_fep_japan_predictive_window_t2

0x944b,	// (0x000429dc) popup_fep_japan_predictive_window_t3_ParamLimits

0x944b,	// (0x000429dc) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x00048c4e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x00048c4e) popup_fep_japan_predictive_window_t

0xb57c,	// (0x00044b0d) bg_popup_sub_pane_cp23

0x9482,	// (0x00042a13) listscroll_japin_cand_pane

0xbd31,	// (0x000452c2) popup_fep_japan_candidate_window_t1

0xbd3f,	// (0x000452d0) candidate_pane_ParamLimits

0xbd3f,	// (0x000452d0) candidate_pane

0x948a,	// (0x00042a1b) scroll_pane_cp30

0xbd51,	// (0x000452e2) list_single_popup_jap_candidate_pane_ParamLimits

0xbd51,	// (0x000452e2) list_single_popup_jap_candidate_pane

0xb57c,	// (0x00044b0d) list_highlight_pane_cp30

0xbd66,	// (0x000452f7) list_single_popup_jap_candidate_pane_t1

0xbd75,	// (0x00045306) level_1_signal

0xbd82,	// (0x00045313) level_2_signal

0xbd8f,	// (0x00045320) level_3_signal

0xbd9c,	// (0x0004532d) level_4_signal

0xbda9,	// (0x0004533a) level_5_signal

0xbdb6,	// (0x00045347) level_6_signal

0xbdc3,	// (0x00045354) level_7_signal

0xbd75,	// (0x00045306) level_1_battery

0xbd82,	// (0x00045313) level_2_battery

0xbd8f,	// (0x00045320) level_3_battery

0xbd9c,	// (0x0004532d) level_4_battery

0xbda9,	// (0x0004533a) level_5_battery

0xbdb6,	// (0x00045347) level_6_battery

0xbdc3,	// (0x00045354) level_7_battery

0xbde8,	// (0x00045379) list_menu_pane_ParamLimits

0xbde8,	// (0x00045379) list_menu_pane

0xbdfe,	// (0x0004538f) scroll_pane_cp25_ParamLimits

0xbdfe,	// (0x0004538f) scroll_pane_cp25

0x9492,	// (0x00042a23) list_double2_graphic_pane_cp2_ParamLimits

0x9492,	// (0x00042a23) list_double2_graphic_pane_cp2

0x9492,	// (0x00042a23) list_double2_large_graphic_pane_cp2_ParamLimits

0x9492,	// (0x00042a23) list_double2_large_graphic_pane_cp2

0x9492,	// (0x00042a23) list_double2_pane_cp2_ParamLimits

0x9492,	// (0x00042a23) list_double2_pane_cp2

0x9492,	// (0x00042a23) list_double_graphic_pane_cp2_ParamLimits

0x9492,	// (0x00042a23) list_double_graphic_pane_cp2

0x9492,	// (0x00042a23) list_double_large_graphic_pane_cp2_ParamLimits

0x9492,	// (0x00042a23) list_double_large_graphic_pane_cp2

0x9492,	// (0x00042a23) list_double_number_pane_cp2_ParamLimits

0x9492,	// (0x00042a23) list_double_number_pane_cp2

0x9492,	// (0x00042a23) list_double_pane_cp2_ParamLimits

0x9492,	// (0x00042a23) list_double_pane_cp2

0x94a1,	// (0x00042a32) list_single_2graphic_pane_cp2_ParamLimits

0x94a1,	// (0x00042a32) list_single_2graphic_pane_cp2

0x94a1,	// (0x00042a32) list_single_graphic_heading_pane_cp2_ParamLimits

0x94a1,	// (0x00042a32) list_single_graphic_heading_pane_cp2

0x94a1,	// (0x00042a32) list_single_graphic_pane_cp2_ParamLimits

0x94a1,	// (0x00042a32) list_single_graphic_pane_cp2

0x94a1,	// (0x00042a32) list_single_heading_pane_cp2_ParamLimits

0x94a1,	// (0x00042a32) list_single_heading_pane_cp2

0xbe27,	// (0x000453b8) list_single_large_graphic_pane_cp2_ParamLimits

0xbe27,	// (0x000453b8) list_single_large_graphic_pane_cp2

0x94a1,	// (0x00042a32) list_single_number_heading_pane_cp2_ParamLimits

0x94a1,	// (0x00042a32) list_single_number_heading_pane_cp2

0x94a1,	// (0x00042a32) list_single_number_pane_cp2_ParamLimits

0x94a1,	// (0x00042a32) list_single_number_pane_cp2

0x94b3,	// (0x00042a44) list_single_pane_cp2_ParamLimits

0x94b3,	// (0x00042a44) list_single_pane_cp2

0xbe41,	// (0x000453d2) bg_popup_sub_pane_cp22

0xf2a2,	// (0x00048833) popup_side_volume_key_window_g1

0xf2ae,	// (0x0004883f) popup_side_volume_key_window_t1

0x957b,	// (0x00042b0c) volume_small_pane_cp1

0xb5ca,	// (0x00044b5b) bg_popup_sub_pane_cp24_ParamLimits

0xb5ca,	// (0x00044b5b) bg_popup_sub_pane_cp24

0xbe57,	// (0x000453e8) fep_china_uni_candidate_pane_ParamLimits

0xbe57,	// (0x000453e8) fep_china_uni_candidate_pane

0xbe6b,	// (0x000453fc) fep_china_uni_entry_pane

0xbe7b,	// (0x0004540c) popup_fep_china_uni_window_g1

0x9583,	// (0x00042b14) fep_china_uni_entry_pane_g1

0x958b,	// (0x00042b1c) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x00048c7f) fep_china_uni_entry_pane_g

0xbe97,	// (0x00045428) fep_entry_item_pane

0xbea1,	// (0x00045432) fep_candidate_item_pane

0x9593,	// (0x00042b24) fep_china_uni_candidate_pane_g1

0xbea9,	// (0x0004543a) fep_china_uni_candidate_pane_g2

0xbeb1,	// (0x00045442) fep_china_uni_candidate_pane_g3

0x959b,	// (0x00042b2c) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x00048c84) fep_china_uni_candidate_pane_g

0xb572,	// (0x00044b03) fep_entry_item_pane_g1

0xbeb9,	// (0x0004544a) fep_entry_item_pane_t1_ParamLimits

0xbeb9,	// (0x0004544a) fep_entry_item_pane_t1

0xbecf,	// (0x00045460) fep_candidate_item_pane_t1_ParamLimits

0xbecf,	// (0x00045460) fep_candidate_item_pane_t1

0xbee4,	// (0x00045475) fep_candidate_item_pane_t2_ParamLimits

0xbee4,	// (0x00045475) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x00048c8d) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x00048c8d) fep_candidate_item_pane_t

0xb5d8,	// (0x00044b69) list_highlight_pane_cp31_ParamLimits

0xb5d8,	// (0x00044b69) list_highlight_pane_cp31

0xbef6,	// (0x00045487) level_1_signal_lsc

0xbeff,	// (0x00045490) level_2_signal_lsc

0xbf08,	// (0x00045499) level_3_signal_lsc

0xbf11,	// (0x000454a2) level_4_signal_lsc

0xbf1a,	// (0x000454ab) level_5_signal_lsc

0xbf23,	// (0x000454b4) level_6_signal_lsc

0xbf2c,	// (0x000454bd) level_7_signal_lsc

0xbf2c,	// (0x000454bd) level_1_battery_lsc

0xbf35,	// (0x000454c6) level_2_battery_lsc

0xbf3e,	// (0x000454cf) level_3_battery_lsc

0xbf47,	// (0x000454d8) level_4_battery_lsc

0xbf50,	// (0x000454e1) level_5_battery_lsc

0xbf59,	// (0x000454ea) level_6_battery_lsc

0xbef6,	// (0x00045487) level_7_battery_lsc

0xbf62,	// (0x000454f3) scroll_handle_focus_pane_g1

0xbf6b,	// (0x000454fc) scroll_handle_focus_pane_g2

0xbf74,	// (0x00045505) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x00048c92) scroll_handle_focus_pane_g

0x95a3,	// (0x00042b34) list_single_2graphic_pane_g1_ParamLimits

0x95a3,	// (0x00042b34) list_single_2graphic_pane_g1

0x8de1,	// (0x00042372) list_single_2graphic_pane_g2_ParamLimits

0x8de1,	// (0x00042372) list_single_2graphic_pane_g2

0xddc9,	// (0x0004735a) list_single_2graphic_pane_g3_ParamLimits

0xddc9,	// (0x0004735a) list_single_2graphic_pane_g3

0x95af,	// (0x00042b40) list_single_2graphic_pane_g4_ParamLimits

0x95af,	// (0x00042b40) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x00048c99) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x00048c99) list_single_2graphic_pane_g

0x95c0,	// (0x00042b51) list_single_2graphic_pane_t1_ParamLimits

0x95c0,	// (0x00042b51) list_single_2graphic_pane_t1

0x95ee,	// (0x00042b7f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x95ee,	// (0x00042b7f) list_double2_graphic_large_graphic_pane_g1

0x8e34,	// (0x000423c5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8e34,	// (0x000423c5) list_double2_graphic_large_graphic_pane_g2

0xde5b,	// (0x000473ec) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xde5b,	// (0x000473ec) list_double2_graphic_large_graphic_pane_g3

0xdf9c,	// (0x0004752d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xdf9c,	// (0x0004752d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x00048ca2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x00048ca2) list_double2_graphic_large_graphic_pane_g

0xdfa8,	// (0x00047539) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xdfa8,	// (0x00047539) list_double2_graphic_large_graphic_pane_t1

0xdfbe,	// (0x0004754f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xdfbe,	// (0x0004754f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x00048cab) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x00048cab) list_double2_graphic_large_graphic_pane_t

0x9673,	// (0x00042c04) popup_fast_swap_window_ParamLimits

0x9673,	// (0x00042c04) popup_fast_swap_window

0x968f,	// (0x00042c20) popup_side_volume_key_window

0xc02a,	// (0x000455bb) stacon_top_pane

0xc034,	// (0x000455c5) status_pane_ParamLimits

0xc034,	// (0x000455c5) status_pane

0x96a9,	// (0x00042c3a) status_small_pane

0xb57c,	// (0x00044b0d) control_pane

0xb57c,	// (0x00044b0d) stacon_bottom_pane

0xb971,	// (0x00044f02) scroll_pane_cp121

0xb968,	// (0x00044ef9) set_content_pane

0x9600,	// (0x00042b91) bg_active_tab_pane_g1_cp1

0x9609,	// (0x00042b9a) bg_active_tab_pane_g2_cp1

0x9612,	// (0x00042ba3) bg_active_tab_pane_g3_cp1

0x9600,	// (0x00042b91) bg_passive_tab_pane_g1_cp1

0x9609,	// (0x00042b9a) bg_passive_tab_pane_g2_cp1

0x9612,	// (0x00042ba3) bg_passive_tab_pane_g3_cp1

0x961b,	// (0x00042bac) bg_active_tab_pane_g1_cp2

0x9609,	// (0x00042b9a) bg_active_tab_pane_g2_cp2

0x9624,	// (0x00042bb5) bg_active_tab_pane_g3_cp2

0x961b,	// (0x00042bac) bg_passive_tab_pane_g1_cp2

0x9609,	// (0x00042b9a) bg_passive_tab_pane_g2_cp2

0x9624,	// (0x00042bb5) bg_passive_tab_pane_g3_cp2

0x962d,	// (0x00042bbe) bg_active_tab_pane_g1_cp3

0x9609,	// (0x00042b9a) bg_active_tab_pane_g2_cp3

0x9636,	// (0x00042bc7) bg_active_tab_pane_g3_cp3

0x962d,	// (0x00042bbe) bg_passive_tab_pane_g1_cp3

0x9609,	// (0x00042b9a) bg_passive_tab_pane_g2_cp3

0x9636,	// (0x00042bc7) bg_passive_tab_pane_g3_cp3

0x963f,	// (0x00042bd0) bg_active_tab_pane_g1_cp4

0x9609,	// (0x00042b9a) bg_active_tab_pane_g2_cp4

0x964a,	// (0x00042bdb) bg_active_tab_pane_g3_cp4

0x963f,	// (0x00042bd0) bg_passive_tab_pane_g1_cp4

0x9609,	// (0x00042b9a) bg_passive_tab_pane_g2_cp4

0x964a,	// (0x00042bdb) bg_passive_tab_pane_g3_cp4

0x9655,	// (0x00042be6) bg_active_tab_pane_g1_cp5

0x9609,	// (0x00042b9a) bg_active_tab_pane_g2_cp5

0x965e,	// (0x00042bef) bg_active_tab_pane_g3_cp5

0x9655,	// (0x00042be6) bg_passive_tab_pane_g1_cp5

0x9609,	// (0x00042b9a) bg_passive_tab_pane_g2_cp5

0x965e,	// (0x00042bef) bg_passive_tab_pane_g3_cp5

0x3b96,	// (0x0003d127) list_set_graphic_pane_ParamLimits

0x3b96,	// (0x0003d127) list_set_graphic_pane

0xb57c,	// (0x00044b0d) bg_set_opt_pane_cp4

0xbfbb,	// (0x0004554c) list_set_graphic_pane_g1_ParamLimits

0xbfbb,	// (0x0004554c) list_set_graphic_pane_g1

0xbfc7,	// (0x00045558) list_set_graphic_pane_g2_ParamLimits

0xbfc7,	// (0x00045558) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x00048cb0) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x00048cb0) list_set_graphic_pane_g

0x0009,

0xfab0,	// (0x00049041) volume_small_pane_cp_g

0x9667,	// (0x00042bf8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9667,	// (0x00042bf8) list_double2_large_graphic_pane_g1_cp2

0xbfe9,	// (0x0004557a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbfe9,	// (0x0004557a) list_double2_large_graphic_pane_g2_cp2

0xbffa,	// (0x0004558b) list_double2_large_graphic_pane_g3_cp2

0xc002,	// (0x00045593) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc002,	// (0x00045593) list_double2_large_graphic_pane_t1_cp2

0xc018,	// (0x000455a9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc018,	// (0x000455a9) list_double2_large_graphic_pane_t2_cp2

0xc548,	// (0x00045ad9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc548,	// (0x00045ad9) list_double_large_graphic_pane_g1_cp2

0x3159,	// (0x0003c6ea) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3159,	// (0x0003c6ea) list_double_large_graphic_pane_g2_cp2

0xc150,	// (0x000456e1) list_double_large_graphic_pane_g3_cp2

0x316a,	// (0x0003c6fb) list_double_large_graphic_pane_g4_cp

0x3172,	// (0x0003c703) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3172,	// (0x0003c703) list_double_large_graphic_pane_t1_cp2

0x3189,	// (0x0003c71a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3189,	// (0x0003c71a) list_double_large_graphic_pane_t2_cp2

0xc042,	// (0x000455d3) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc042,	// (0x000455d3) list_double2_graphic_pane_g1_cp2

0xc050,	// (0x000455e1) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc050,	// (0x000455e1) list_double2_graphic_pane_g2_cp2

0xc061,	// (0x000455f2) list_double2_graphic_pane_g3_cp2

0xc06b,	// (0x000455fc) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc06b,	// (0x000455fc) list_double2_graphic_pane_t1_cp2

0xc081,	// (0x00045612) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc081,	// (0x00045612) list_double2_graphic_pane_t2_cp2

0xc093,	// (0x00045624) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc093,	// (0x00045624) list_single_number_heading_pane_g1_cp2

0xc09f,	// (0x00045630) list_single_number_heading_pane_g2_cp2

0xc0a7,	// (0x00045638) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc0a7,	// (0x00045638) list_single_number_heading_pane_t1_cp2

0xc0bd,	// (0x0004564e) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc0bd,	// (0x0004564e) list_single_number_heading_pane_t2_cp2

0xc0cf,	// (0x00045660) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc0cf,	// (0x00045660) list_single_number_heading_pane_t3_cp2

0xc093,	// (0x00045624) list_single_heading_pane_g1_cp2_ParamLimits

0xc093,	// (0x00045624) list_single_heading_pane_g1_cp2

0xc09f,	// (0x00045630) list_single_heading_pane_g2_cp2

0xc0a7,	// (0x00045638) list_single_heading_pane_t1_cp2_ParamLimits

0xc0a7,	// (0x00045638) list_single_heading_pane_t1_cp2

0x2f52,	// (0x0003c4e3) list_single_heading_pane_t2_cp2_ParamLimits

0x2f52,	// (0x0003c4e3) list_single_heading_pane_t2_cp2

0x2e9a,	// (0x0003c42b) list_double_graphic_pane_g1_cp2_ParamLimits

0x2e9a,	// (0x0003c42b) list_double_graphic_pane_g1_cp2

0x2ea6,	// (0x0003c437) list_double_graphic_pane_g2_cp2_ParamLimits

0x2ea6,	// (0x0003c437) list_double_graphic_pane_g2_cp2

0x2eb5,	// (0x0003c446) list_double_graphic_pane_g3_cp2

0x2ebd,	// (0x0003c44e) list_double_graphic_pane_t1_cp2_ParamLimits

0x2ebd,	// (0x0003c44e) list_double_graphic_pane_t1_cp2

0x2ed3,	// (0x0003c464) list_double_graphic_pane_t2_cp2_ParamLimits

0x2ed3,	// (0x0003c464) list_double_graphic_pane_t2_cp2

0xc144,	// (0x000456d5) list_double_number_pane_g1_cp2_ParamLimits

0xc144,	// (0x000456d5) list_double_number_pane_g1_cp2

0xc150,	// (0x000456e1) list_double_number_pane_g2_cp2

0x2e5e,	// (0x0003c3ef) list_double_number_pane_t1_cp2_ParamLimits

0x2e5e,	// (0x0003c3ef) list_double_number_pane_t1_cp2

0x2e72,	// (0x0003c403) list_double_number_pane_t2_cp2_ParamLimits

0x2e72,	// (0x0003c403) list_double_number_pane_t2_cp2

0x2e88,	// (0x0003c419) list_double_number_pane_t3_cp2_ParamLimits

0x2e88,	// (0x0003c419) list_double_number_pane_t3_cp2

0x2d47,	// (0x0003c2d8) list_single_graphic_pane_g1_cp2_ParamLimits

0x2d47,	// (0x0003c2d8) list_single_graphic_pane_g1_cp2

0xc1a9,	// (0x0004573a) list_single_graphic_pane_g2_cp2_ParamLimits

0xc1a9,	// (0x0004573a) list_single_graphic_pane_g2_cp2

0xc1b5,	// (0x00045746) list_single_graphic_pane_g3_cp2

0x2d1d,	// (0x0003c2ae) list_single_graphic_pane_t1_cp2_ParamLimits

0x2d1d,	// (0x0003c2ae) list_single_graphic_pane_t1_cp2

0xc1a9,	// (0x0004573a) list_single_number_pane_g1_cp2_ParamLimits

0xc1a9,	// (0x0004573a) list_single_number_pane_g1_cp2

0xc1b5,	// (0x00045746) list_single_number_pane_g2_cp2

0x2d1d,	// (0x0003c2ae) list_single_number_pane_t1_cp2_ParamLimits

0x2d1d,	// (0x0003c2ae) list_single_number_pane_t1_cp2

0x2d33,	// (0x0003c2c4) list_single_number_pane_t2_cp2_ParamLimits

0x2d33,	// (0x0003c2c4) list_single_number_pane_t2_cp2

0xbfe9,	// (0x0004557a) list_double2_pane_g1_cp2_ParamLimits

0xbfe9,	// (0x0004557a) list_double2_pane_g1_cp2

0xbffa,	// (0x0004558b) list_double2_pane_g2_cp2

0xc11c,	// (0x000456ad) list_double2_pane_t1_cp2_ParamLimits

0xc11c,	// (0x000456ad) list_double2_pane_t1_cp2

0xc132,	// (0x000456c3) list_double2_pane_t2_cp2_ParamLimits

0xc132,	// (0x000456c3) list_double2_pane_t2_cp2

0xc144,	// (0x000456d5) list_double_pane_g1_cp2_ParamLimits

0xc144,	// (0x000456d5) list_double_pane_g1_cp2

0xc150,	// (0x000456e1) list_double_pane_g2_cp2

0xc158,	// (0x000456e9) list_double_pane_t1_cp2_ParamLimits

0xc158,	// (0x000456e9) list_double_pane_t1_cp2

0xc16e,	// (0x000456ff) list_double_pane_t2_cp2_ParamLimits

0xc16e,	// (0x000456ff) list_double_pane_t2_cp2

0x96b4,	// (0x00042c45) list_single_pane_cp2_g3

0xc1a9,	// (0x0004573a) list_single_pane_g1_cp2_ParamLimits

0xc1a9,	// (0x0004573a) list_single_pane_g1_cp2

0xc1b5,	// (0x00045746) list_single_pane_g2_cp2

0xc1bd,	// (0x0004574e) list_single_pane_t1_cp2_ParamLimits

0xc1bd,	// (0x0004574e) list_single_pane_t1_cp2

0x96bc,	// (0x00042c4d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x96bc,	// (0x00042c4d) list_single_large_graphic_pane_g1_cp2

0xc1d5,	// (0x00045766) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc1d5,	// (0x00045766) list_single_large_graphic_pane_g2_cp2

0xc1e1,	// (0x00045772) list_single_large_graphic_pane_g3_cp2

0x96c8,	// (0x00042c59) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x96c8,	// (0x00042c59) list_single_large_graphic_pane_g4_cp1

0xc1e9,	// (0x0004577a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc1e9,	// (0x0004577a) list_single_large_graphic_pane_t1_cp2

0x2ce9,	// (0x0003c27a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2ce9,	// (0x0003c27a) list_single_graphic_heading_pane_g1_cp2

0x2cb6,	// (0x0003c247) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2cb6,	// (0x0003c247) list_single_graphic_heading_pane_g4_cp2

0xc1b5,	// (0x00045746) list_single_graphic_heading_pane_g5_cp2

0x2cf5,	// (0x0003c286) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2cf5,	// (0x0003c286) list_single_graphic_heading_pane_t1_cp2

0x2d0b,	// (0x0003c29c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2d0b,	// (0x0003c29c) list_single_graphic_heading_pane_t2_cp2

0x2caa,	// (0x0003c23b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2caa,	// (0x0003c23b) list_single_2graphic_pane_g1_cp2

0x2cb6,	// (0x0003c247) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2cb6,	// (0x0003c247) list_single_2graphic_pane_g2_cp2

0xc1b5,	// (0x00045746) list_single_2graphic_pane_g3_cp2

0x2cc7,	// (0x0003c258) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2cc7,	// (0x0003c258) list_single_2graphic_pane_g4_cp2

0x2cd3,	// (0x0003c264) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2cd3,	// (0x0003c264) list_single_2graphic_pane_t1_cp2

0xb572,	// (0x00044b03) list_highlight_pane_g10_cp1

0x2892,	// (0x0003be23) list_highlight_pane_g1_cp1

0x289a,	// (0x0003be2b) list_highlight_pane_g2_cp1

0x28a2,	// (0x0003be33) list_highlight_pane_g3_cp1

0x28aa,	// (0x0003be3b) list_highlight_pane_g4_cp1

0x28b2,	// (0x0003be43) list_highlight_pane_g5_cp1

0x28ba,	// (0x0003be4b) list_highlight_pane_g6_cp1

0x28c2,	// (0x0003be53) list_highlight_pane_g7_cp1

0x28ca,	// (0x0003be5b) list_highlight_pane_g8_cp1

0x28d2,	// (0x0003be63) list_highlight_pane_g9_cp1

0xa955,	// (0x00043ee6) form_field_slider_pane_t3

0xa963,	// (0x00043ef4) form_field_slider_pane_t4

0x27d6,	// (0x0003bd67) slider_form_pane_ParamLimits

0x27d6,	// (0x0003bd67) slider_form_pane

0xb57c,	// (0x00044b0d) control_abbreviations

0xb57c,	// (0x00044b0d) control_conventions

0xb57c,	// (0x00044b0d) control_definitions

0xb57c,	// (0x00044b0d) format_table_attribute

0xc51f,	// (0x00045ab0) bg_popup_preview_window_pane_g9

0xb57c,	// (0x00044b0d) format_table_data2

0xb57c,	// (0x00044b0d) format_table_data3

0xb57c,	// (0x00044b0d) format_table_data_example

0x0008,

0xb57c,	// (0x00044b0d) intro_purpose

0xf8b6,	// (0x00048e47) bg_popup_preview_window_pane_g

0xb57c,	// (0x00044b0d) texts_category

0xb57c,	// (0x00044b0d) texts_graphics

0xc1ff,	// (0x00045790) text_digital

0xc20e,	// (0x0004579f) text_primary

0xc21d,	// (0x000457ae) text_primary_small

0xc22c,	// (0x000457bd) text_secondary

0xc23b,	// (0x000457cc) text_title

0xc886,	// (0x00045e17) bg_passive_tab_pane_g1_cp3_srt

0x9609,	// (0x00042b9a) bg_passive_tab_pane_g2_cp3_srt

0xc88f,	// (0x00045e20) bg_passive_tab_pane_g3_cp3_srt

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp3_srt_ParamLimits

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp3_srt

0xc898,	// (0x00045e29) tabs_4_active_pane_srt_g1

0xc8a0,	// (0x00045e31) tabs_4_active_pane_srt_t1_ParamLimits

0xc8a0,	// (0x00045e31) tabs_4_active_pane_srt_t1

0xc886,	// (0x00045e17) bg_active_tab_pane_g1_cp3_copy1

0x9609,	// (0x00042b9a) bg_active_tab_pane_g2_cp3_copy1

0xc88f,	// (0x00045e20) bg_active_tab_pane_g3_cp3_copy1

0xb5d8,	// (0x00044b69) tabs_2_long_active_pane_srt_ParamLimits

0xb5d8,	// (0x00044b69) tabs_2_long_active_pane_srt

0xb5d8,	// (0x00044b69) tabs_2_long_passive_pane_srt_ParamLimits

0xb5d8,	// (0x00044b69) tabs_2_long_passive_pane_srt

0xbad0,	// (0x00045061) bg_passive_tab_pane_cp4_srt_ParamLimits

0xbad0,	// (0x00045061) bg_passive_tab_pane_cp4_srt

0xc637,	// (0x00045bc8) bg_passive_tab_pane_g1_cp4_srt

0x9609,	// (0x00042b9a) bg_passive_tab_pane_g2_cp4_srt

0xc640,	// (0x00045bd1) bg_passive_tab_pane_g3_cp4_srt

0xb5d8,	// (0x00044b69) bg_active_tab_pane_cp4_srt_ParamLimits

0xb5d8,	// (0x00044b69) bg_active_tab_pane_cp4_srt

0xc649,	// (0x00045bda) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc649,	// (0x00045bda) tabs_2_long_active_pane_srt_t1

0xc637,	// (0x00045bc8) bg_active_tab_pane_g1_cp4_srt

0x9609,	// (0x00042b9a) bg_active_tab_pane_g2_cp4_srt

0xc640,	// (0x00045bd1) bg_active_tab_pane_g3_cp4_srt

0xb5ca,	// (0x00044b5b) tabs_3_long_active_pane_srt_ParamLimits

0xb5ca,	// (0x00044b5b) tabs_3_long_active_pane_srt

0xb5ca,	// (0x00044b5b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb5ca,	// (0x00044b5b) tabs_3_long_passive_pane_cp_srt

0xb5ca,	// (0x00044b5b) tabs_3_long_passive_pane_srt_ParamLimits

0xb5ca,	// (0x00044b5b) tabs_3_long_passive_pane_srt

0xbad0,	// (0x00045061) bg_passive_tab_pane_cp5_srt_ParamLimits

0xbad0,	// (0x00045061) bg_passive_tab_pane_cp5_srt

0x9655,	// (0x00042be6) bg_passive_tab_pane_g1_cp5_srt

0x9609,	// (0x00042b9a) bg_passive_tab_pane_g2_cp5_srt

0x965e,	// (0x00042bef) bg_passive_tab_pane_g3_cp5_srt

0xb5d8,	// (0x00044b69) bg_active_tab_pane_cp5_srt_ParamLimits

0xb5d8,	// (0x00044b69) bg_active_tab_pane_cp5_srt

0xc621,	// (0x00045bb2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc621,	// (0x00045bb2) tabs_3_long_active_pane_srt_t1

0x9655,	// (0x00042be6) bg_active_tab_pane_g1_cp5_srt

0x9609,	// (0x00042b9a) bg_active_tab_pane_g2_cp5_srt

0x965e,	// (0x00042bef) bg_active_tab_pane_g3_cp5_srt

0x339d,	// (0x0003c92e) navi_text_pane_srt_t1

0x3395,	// (0x0003c926) navi_icon_pane_srt_g1

0xc326,	// (0x000458b7) midp_editing_number_pane_srt

0xc24a,	// (0x000457db) midp_ticker_pane_srt

0xc32e,	// (0x000458bf) midp_ticker_pane_srt_g1

0xc336,	// (0x000458c7) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x00048ccf) midp_ticker_pane_srt_g

0xc33e,	// (0x000458cf) midp_ticker_pane_srt_t1

0x3386,	// (0x0003c917) midp_editing_number_pane_t1_copy1

0x96e2,	// (0x00042c73) listscroll_midp_pane

0x96e2,	// (0x00042c73) midp_form_pane

0x974d,	// (0x00042cde) midp_info_popup_window_ParamLimits

0x974d,	// (0x00042cde) midp_info_popup_window

0xba6b,	// (0x00044ffc) bg_popup_sub_pane_cp50_ParamLimits

0xba6b,	// (0x00044ffc) bg_popup_sub_pane_cp50

0x24c6,	// (0x0003ba57) listscroll_midp_info_pane_ParamLimits

0x24c6,	// (0x0003ba57) listscroll_midp_info_pane

0x24a6,	// (0x0003ba37) listscroll_form_midp_pane_ParamLimits

0x24a6,	// (0x0003ba37) listscroll_form_midp_pane

0x24b2,	// (0x0003ba43) scroll_bar_cp050

0x24a6,	// (0x0003ba37) list_midp_pane

0xca2a,	// (0x00045fbb) signal_pane_g2_cp

0x23c0,	// (0x0003b951) listscroll_midp_info_pane_t1_ParamLimits

0x23c0,	// (0x0003b951) listscroll_midp_info_pane_t1

0xa78f,	// (0x00043d20) listscroll_midp_info_pane_t2_ParamLimits

0xa78f,	// (0x00043d20) listscroll_midp_info_pane_t2

0xa7cd,	// (0x00043d5e) listscroll_midp_info_pane_t3_ParamLimits

0xa7cd,	// (0x00043d5e) listscroll_midp_info_pane_t3

0xa807,	// (0x00043d98) listscroll_midp_info_pane_t4_ParamLimits

0xa807,	// (0x00043d98) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x00048d82) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x00048d82) listscroll_midp_info_pane_t

0xbac0,	// (0x00045051) scroll_pane_cp21

0x2360,	// (0x0003b8f1) form_midp_field_choice_group_pane

0xa752,	// (0x00043ce3) form_midp_field_text_pane

0x23a6,	// (0x0003b937) form_midp_field_time_pane

0x23ae,	// (0x0003b93f) form_midp_gauge_slider_pane

0x23b7,	// (0x0003b948) form_midp_gauge_wait_pane

0xb57c,	// (0x00044b0d) form_midp_image_pane

0xa73a,	// (0x00043ccb) list_single_midp_pane_ParamLimits

0xa73a,	// (0x00043ccb) list_single_midp_pane

0xa718,	// (0x00043ca9) form_midp_field_text_pane_t1

0x20df,	// (0x0003b670) input_focus_pane_cp050

0x234f,	// (0x0003b8e0) list_midp_form_text_pane

0x22e4,	// (0x0003b875) form_midp_field_choice_group_pane_t1

0x22f2,	// (0x0003b883) input_focus_pane_cp051

0x2306,	// (0x0003b897) list_midp_choice_pane

0xb57c,	// (0x00044b0d) status_idle_pane

0x22c8,	// (0x0003b859) form_midp_field_time_pane_t1

0xb572,	// (0x00044b03) wait_anim_pane_g2_copy1

0x22d6,	// (0x0003b867) form_midp_field_time_pane_t2

0x0001,

0xc2aa,	// (0x0004583b) aid_navinavi_width_2_pane

0xf7ec,	// (0x00048d7d) form_midp_field_time_pane_t

0xb57c,	// (0x00044b0d) input_focus_pane_cp052

0xb57c,	// (0x00044b0d) bg_input_focus_pane_cp040

0x2288,	// (0x0003b819) form_midp_gauge_slider_pane_t1

0x2296,	// (0x0003b827) form_midp_gauge_slider_pane_t2

0xa6fc,	// (0x00043c8d) form_midp_gauge_slider_pane_t3

0xa70a,	// (0x00043c9b) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x00048d74) form_midp_gauge_slider_pane_t

0x22c0,	// (0x0003b851) form_midp_slider_pane

0xb5d8,	// (0x00044b69) bg_input_focus_pane_cp041_ParamLimits

0xb5d8,	// (0x00044b69) bg_input_focus_pane_cp041

0x2255,	// (0x0003b7e6) form_midp_gauge_wait_pane_t1_ParamLimits

0x2255,	// (0x0003b7e6) form_midp_gauge_wait_pane_t1

0x2267,	// (0x0003b7f8) form_midp_gauge_wait_pane_t2_ParamLimits

0x2267,	// (0x0003b7f8) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x00048d6f) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x00048d6f) form_midp_gauge_wait_pane_t

0x2279,	// (0x0003b80a) form_midp_wait_pane_ParamLimits

0x2279,	// (0x0003b80a) form_midp_wait_pane

0xa6c6,	// (0x00043c57) form_midp_image_pane_g1

0xa6cf,	// (0x00043c60) form_midp_image_pane_t1

0xa6de,	// (0x00043c6f) form_midp_image_pane_t2

0xa6ed,	// (0x00043c7e) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x00048d68) form_midp_image_pane_t

0x2216,	// (0x0003b7a7) list_single_midp_pane_g1

0xe0f4,	// (0x00047685) list_single_midp_pane_t1

0xa6b1,	// (0x00043c42) list_midp_form_item_pane_ParamLimits

0xa6b1,	// (0x00043c42) list_midp_form_item_pane

0xc252,	// (0x000457e3) list_midp_form_item_pane_t1

0xc261,	// (0x000457f2) midp_ticker_pane_g1

0xc26d,	// (0x000457fe) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x00048cb5) midp_ticker_pane_g

0xc279,	// (0x0004580a) midp_ticker_pane_t1

0x35d3,	// (0x0003cb64) midp_editing_number_pane_t1

0x35b1,	// (0x0003cb42) midp_editing_number_pane

0x35c0,	// (0x0003cb51) midp_ticker_pane

0x3376,	// (0x0003c907) ai_message_heading_pane

0xb57c,	// (0x00044b0d) bg_popup_window_pane_cp14

0x337e,	// (0x0003c90f) listscroll_ai_message_pane

0x3300,	// (0x0003c891) ai_message_heading_pane_g1_ParamLimits

0x3300,	// (0x0003c891) ai_message_heading_pane_g1

0xc5e9,	// (0x00045b7a) ai_message_heading_pane_g2_ParamLimits

0xc5e9,	// (0x00045b7a) ai_message_heading_pane_g2

0x3318,	// (0x0003c8a9) ai_message_heading_pane_g3_ParamLimits

0x3318,	// (0x0003c8a9) ai_message_heading_pane_g3

0x3324,	// (0x0003c8b5) ai_message_heading_pane_g4_ParamLimits

0x3324,	// (0x0003c8b5) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x00048ea9) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x00048ea9) ai_message_heading_pane_g

0xc5f5,	// (0x00045b86) ai_message_heading_pane_t1_ParamLimits

0xc5f5,	// (0x00045b86) ai_message_heading_pane_t1

0xc60f,	// (0x00045ba0) ai_message_heading_pane_t2_ParamLimits

0xc60f,	// (0x00045ba0) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x00048eb2) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x00048eb2) ai_message_heading_pane_t

0x335c,	// (0x0003c8ed) bg_popup_heading_pane_cp1_ParamLimits

0x335c,	// (0x0003c8ed) bg_popup_heading_pane_cp1

0x32ee,	// (0x0003c87f) list_ai_message_pane_ParamLimits

0x32ee,	// (0x0003c87f) list_ai_message_pane

0xbac0,	// (0x00045051) scroll_pane_cp10

0x328a,	// (0x0003c81b) list_ai_message_pane_g1

0x3292,	// (0x0003c823) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x00048e86) list_ai_message_pane_g

0x329a,	// (0x0003c82b) list_ai_message_pane_t1_ParamLimits

0x329a,	// (0x0003c82b) list_ai_message_pane_t1

0x32af,	// (0x0003c840) list_ai_message_pane_t2_ParamLimits

0x32af,	// (0x0003c840) list_ai_message_pane_t2

0x32c4,	// (0x0003c855) list_ai_message_pane_t3_ParamLimits

0x32c4,	// (0x0003c855) list_ai_message_pane_t3

0x32d9,	// (0x0003c86a) list_ai_message_pane_t4_ParamLimits

0x32d9,	// (0x0003c86a) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x00048e8b) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x00048e8b) list_ai_message_pane_t

0xc5c5,	// (0x00045b56) cell_ai_soft_ind_pane_ParamLimits

0xc5c5,	// (0x00045b56) cell_ai_soft_ind_pane

0xc28b,	// (0x0004581c) cell_ai_soft_ind_pane_g1_ParamLimits

0xc28b,	// (0x0004581c) cell_ai_soft_ind_pane_g1

0xb57c,	// (0x00044b0d) grid_highlight_cp1

0xc298,	// (0x00045829) text_secondary_cp56_ParamLimits

0xc298,	// (0x00045829) text_secondary_cp56

0x324a,	// (0x0003c7db) example_general_pane_ParamLimits

0x324a,	// (0x0003c7db) example_general_pane

0x3256,	// (0x0003c7e7) example_parent_pane_g1_ParamLimits

0x3256,	// (0x0003c7e7) example_parent_pane_g1

0x3262,	// (0x0003c7f3) example_parent_pane_t1_ParamLimits

0x3262,	// (0x0003c7f3) example_parent_pane_t1

0x9e35,	// (0x000433c6) popup_preview_text_window_ParamLimits

0x9e35,	// (0x000433c6) popup_preview_text_window

0xc1a1,	// (0x00045732) list_single_pane_cp2_g4

0xb7aa,	// (0x00044d3b) bg_popup_preview_window_pane_ParamLimits

0xb7aa,	// (0x00044d3b) bg_popup_preview_window_pane

0xc527,	// (0x00045ab8) popup_preview_text_window_t1_ParamLimits

0xc527,	// (0x00045ab8) popup_preview_text_window_t1

0x2fc2,	// (0x0003c553) popup_preview_text_window_t2_ParamLimits

0x2fc2,	// (0x0003c553) popup_preview_text_window_t2

0x300b,	// (0x0003c59c) popup_preview_text_window_t3_ParamLimits

0x300b,	// (0x0003c59c) popup_preview_text_window_t3

0x3050,	// (0x0003c5e1) popup_preview_text_window_t4_ParamLimits

0x3050,	// (0x0003c5e1) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x00048e5a) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x00048e5a) popup_preview_text_window_t

0x30ce,	// (0x0003c65f) scroll_pane_cp11

0x2053,	// (0x0003b5e4) bg_popup_preview_window_pane_g1

0xc4e7,	// (0x00045a78) bg_popup_preview_window_pane_g2

0xc4ef,	// (0x00045a80) bg_popup_preview_window_pane_g3

0xc4f7,	// (0x00045a88) bg_popup_preview_window_pane_g4

0xc4ff,	// (0x00045a90) bg_popup_preview_window_pane_g5

0xc507,	// (0x00045a98) bg_popup_preview_window_pane_g6

0xc50f,	// (0x00045aa0) bg_popup_preview_window_pane_g7

0xc517,	// (0x00045aa8) bg_popup_preview_window_pane_g8

0xdc09,	// (0x0004719a) aid_popup_width_pane

0x9db1,	// (0x00043342) popup_midp_note_alarm_window_ParamLimits

0x9db1,	// (0x00043342) popup_midp_note_alarm_window

0xb982,	// (0x00044f13) data_form_pane_ParamLimits

0x90a2,	// (0x00042633) form_field_data_pane_g1

0x90ac,	// (0x0004263d) form_field_data_pane_t1_ParamLimits

0xb98e,	// (0x00044f1f) input_focus_pane_ParamLimits

0x90c6,	// (0x00042657) data_form_wide_pane_ParamLimits

0x90d7,	// (0x00042668) form_field_data_wide_pane_g1

0x90e3,	// (0x00042674) form_field_data_wide_pane_t1_ParamLimits

0xb882,	// (0x00044e13) input_focus_pane_cp6_ParamLimits

0x927a,	// (0x0004280b) input_popup_find_pane_g1_ParamLimits

0x927a,	// (0x0004280b) input_popup_find_pane_g1

0xf17d,	// (0x0004870e) aid_navi_side_left_pane

0xf192,	// (0x00048723) aid_navi_side_right_pane

0x298d,	// (0x0003bf1e) bg_popup_window_pane_cp30_ParamLimits

0x298d,	// (0x0003bf1e) bg_popup_window_pane_cp30

0x2a07,	// (0x0003bf98) popup_midp_note_alarm_window_g1_ParamLimits

0x2a07,	// (0x0003bf98) popup_midp_note_alarm_window_g1

0x2a37,	// (0x0003bfc8) popup_midp_note_alarm_window_t1_ParamLimits

0x2a37,	// (0x0003bfc8) popup_midp_note_alarm_window_t1

0xa9a8,	// (0x00043f39) popup_midp_note_alarm_window_t2_ParamLimits

0xa9a8,	// (0x00043f39) popup_midp_note_alarm_window_t2

0xc3de,	// (0x0004596f) popup_midp_note_alarm_window_t3_ParamLimits

0xc3de,	// (0x0004596f) popup_midp_note_alarm_window_t3

0xc406,	// (0x00045997) popup_midp_note_alarm_window_t4_ParamLimits

0xc406,	// (0x00045997) popup_midp_note_alarm_window_t4

0x2bce,	// (0x0003c15f) popup_midp_note_alarm_window_t5_ParamLimits

0x2bce,	// (0x0003c15f) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x00048df7) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x00048df7) popup_midp_note_alarm_window_t

0x2c7a,	// (0x0003c20b) wait_bar_pane_cp1_ParamLimits

0x2c7a,	// (0x0003c20b) wait_bar_pane_cp1

0xb57c,	// (0x00044b0d) wait_anim_pane_copy1

0xb57c,	// (0x00044b0d) wait_border_pane_copy1

0x2683,	// (0x0003bc14) wait_border_pane_g1_copy1

0x90fd,	// (0x0004268e) form_field_popup_pane_g1

0x9105,	// (0x00042696) form_field_popup_pane_t1_ParamLimits

0xb98e,	// (0x00044f1f) input_focus_pane_cp7_ParamLimits

0xb9bc,	// (0x00044f4d) list_form_pane_ParamLimits

0x911f,	// (0x000426b0) form_field_popup_wide_pane_g1

0x9127,	// (0x000426b8) form_field_popup_wide_pane_t1_ParamLimits

0xb98e,	// (0x00044f1f) input_focus_pane_cp8_ParamLimits

0xb9c8,	// (0x00044f59) list_form_wide_pane_ParamLimits

0x376c,	// (0x0003ccfd) aid_size_cell_graphic_pane

0x91b3,	// (0x00042744) data_form_pane_t1_ParamLimits

0xab2c,	// (0x000440bd) data_form_wide_pane_t1_ParamLimits

0xa278,	// (0x00043809) bg_status_flat_pane

0x87d7,	// (0x00041d68) title_pane_t1_ParamLimits

0xb592,	// (0x00044b23) title_pane_t2_ParamLimits

0xb5b8,	// (0x00044b49) title_pane_t3_ParamLimits

0xf532,	// (0x00048ac3) title_pane_t_ParamLimits

0xbd75,	// (0x00045306) level_1_signal_ParamLimits

0xbd82,	// (0x00045313) level_2_signal_ParamLimits

0xbd8f,	// (0x00045320) level_3_signal_ParamLimits

0xbd9c,	// (0x0004532d) level_4_signal_ParamLimits

0xbda9,	// (0x0004533a) level_5_signal_ParamLimits

0xbdb6,	// (0x00045347) level_6_signal_ParamLimits

0xbdc3,	// (0x00045354) level_7_signal_ParamLimits

0xbd75,	// (0x00045306) level_1_battery_ParamLimits

0xbd82,	// (0x00045313) level_2_battery_ParamLimits

0xbd8f,	// (0x00045320) level_3_battery_ParamLimits

0xbd9c,	// (0x0004532d) level_4_battery_ParamLimits

0xbda9,	// (0x0004533a) level_5_battery_ParamLimits

0xbdb6,	// (0x00045347) level_6_battery_ParamLimits

0xbdc3,	// (0x00045354) level_7_battery_ParamLimits

0x2892,	// (0x0003be23) bg_status_flat_pane_g1

0x289a,	// (0x0003be2b) bg_status_flat_pane_g2

0x28a2,	// (0x0003be33) bg_status_flat_pane_g3

0x28aa,	// (0x0003be3b) bg_status_flat_pane_g4

0x28b2,	// (0x0003be43) bg_status_flat_pane_g5

0x28ba,	// (0x0003be4b) bg_status_flat_pane_g6

0x28c2,	// (0x0003be53) bg_status_flat_pane_g7

0x886b,	// (0x00041dfc) tabs_3_active_pane_t1_ParamLimits

0x886b,	// (0x00041dfc) tabs_3_passive_pane_t1_ParamLimits

0x8885,	// (0x00041e16) tabs_4_active_pane_t1_ParamLimits

0x8885,	// (0x00041e16) tabs_4_1_passive_pane_t1_ParamLimits

0x92b9,	// (0x0004284a) tabs_2_active_pane_t1_ParamLimits

0x92b9,	// (0x0004284a) tabs_2_passive_pane_t1_ParamLimits

0xb5d8,	// (0x00044b69) bg_active_tab_pane_cp4_ParamLimits

0x92cb,	// (0x0004285c) tabs_2_long_active_pane_t1_ParamLimits

0xbad0,	// (0x00045061) bg_passive_tab_pane_cp4_ParamLimits

0x06fa,	// (0x00039c8b) list_single_midp_graphic_pane_t1_ParamLimits

0xb5d8,	// (0x00044b69) bg_active_tab_pane_cp5_ParamLimits

0x92de,	// (0x0004286f) tabs_3_long_active_pane_t1_ParamLimits

0xbad0,	// (0x00045061) bg_passive_tab_pane_cp5_ParamLimits

0x06fa,	// (0x00039c8b) list_single_midp_graphic_pane_t1

0xa278,	// (0x00043809) bg_status_flat_pane_ParamLimits

0x04c1,	// (0x00039a52) indicator_pane_cp2_ParamLimits

0x04c1,	// (0x00039a52) indicator_pane_cp2

0xa3f6,	// (0x00043987) navi_pane_srt_ParamLimits

0xa3f6,	// (0x00043987) navi_pane_srt

0x0610,	// (0x00039ba1) popup_clock_digital_analogue_window_cp1

0xb61c,	// (0x00044bad) indicator_pane_t1

0xc24a,	// (0x000457db) copy_highlight_pane

0xc24a,	// (0x000457db) cursor_graphics_pane

0xc24a,	// (0x000457db) graphic_within_text_pane

0xc24a,	// (0x000457db) link_highlight_pane

0x3091,	// (0x0003c622) popup_preview_text_window_t5_ParamLimits

0x3091,	// (0x0003c622) popup_preview_text_window_t5

0xc2b2,	// (0x00045843) cursor_digital_pane

0xc2b2,	// (0x00045843) cursor_primary_pane

0xc2c3,	// (0x00045854) cursor_primary_small_pane

0xc2cb,	// (0x0004585c) cursor_secondary_pane

0xc2d3,	// (0x00045864) cursor_title_pane

0xc2b2,	// (0x00045843) link_highlight_digital_pane

0xc2ba,	// (0x0004584b) link_highlight_primary_pane

0xc2c3,	// (0x00045854) link_highlight_primary_small_pane

0xc2cb,	// (0x0004585c) link_highlight_secondary_pane

0xc2d3,	// (0x00045864) link_highlight_title_pane

0xc2b2,	// (0x00045843) copy_highlight_digital_pane

0xc2b2,	// (0x00045843) copy_highlight_primary_pane

0xc2c3,	// (0x00045854) copy_highlight_primary_small_pane

0xc2cb,	// (0x0004585c) copy_highlight_secondary_pane

0xc2d3,	// (0x00045864) copy_highlight_title_pane

0xc2cb,	// (0x0004585c) graphic_text_digital_pane

0x2930,	// (0x0003bec1) graphic_text_primary_pane

0x2939,	// (0x0003beca) graphic_text_primary_small_pane

0xc2c3,	// (0x00045854) graphic_text_secondary_pane

0xc2b2,	// (0x00045843) graphic_text_title_pane

0x979e,	// (0x00042d2f) cursor_primary_pane_g1

0x2922,	// (0x0003beb3) cursor_text_primary_t1

0xa99e,	// (0x00043f2f) cursor_primary_small_pane_g1

0x2914,	// (0x0003bea5) cursor_text_primary_small_t1

0xa994,	// (0x00043f25) cursor_primary_small_pane_g1_copy1

0x28fc,	// (0x0003be8d) cursor_text_primary_small_t1_copy1

0x28da,	// (0x0003be6b) cursor_text_title_t1

0xa98a,	// (0x00043f1b) cursor_title_pane_g1

0x979e,	// (0x00042d2f) cursor_digital_pane_g1

0xc2db,	// (0x0004586c) cursor_text_digital_t1

0xc2e9,	// (0x0004587a) link_highlight_primary_pane_g1

0x2883,	// (0x0003be14) link_highlight_primary_pane_t1

0xc2e9,	// (0x0004587a) link_highlight_primary_small_pane_g1

0xc2f1,	// (0x00045882) link_highlight_primary_small_pane_t1

0xc2e9,	// (0x0004587a) link_highlight_secondary_pane_g1

0xc300,	// (0x00045891) link_highlight_secondary_pane_t1

0x27e8,	// (0x0003bd79) link_highlight_title_pane_g1

0x27ff,	// (0x0003bd90) link_highlight_title_pane_t1

0x27e8,	// (0x0003bd79) link_highlight_digital_pane_g1

0x27f0,	// (0x0003bd81) link_highlight_digital_pane_t1

0x26a2,	// (0x0003bc33) copy_highlight_primary_pane_g1

0x26c8,	// (0x0003bc59) copy_highlight_primary_pane_t1

0x26a2,	// (0x0003bc33) copy_highlight_primary_small_pane_g1

0x26b9,	// (0x0003bc4a) copy_highlight_primary_small_pane_t1

0xc30f,	// (0x000458a0) copy_highlight_secondary_pane_g1

0xc317,	// (0x000458a8) copy_highlight_secondary_pane_t1

0x26a2,	// (0x0003bc33) copy_highlight_title_pane_g1

0x26aa,	// (0x0003bc3b) copy_highlight_title_pane_t1

0x26a2,	// (0x0003bc33) copy_highlight_digital_pane_g1

0x393a,	// (0x0003cecb) copy_highlight_digital_pane_t1

0x388e,	// (0x0003ce1f) graphic_text_primary_pane_g1

0x391e,	// (0x0003ceaf) graphic_text_primary_pane_t1

0x392c,	// (0x0003cebd) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x00048f26) graphic_text_primary_pane_t

0x38fa,	// (0x0003ce8b) graphic_text_primary_small_pane_g1

0x3902,	// (0x0003ce93) graphic_text_primary_small_pane_t1

0x3910,	// (0x0003cea1) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x00048f21) graphic_text_primary_small_pane_t

0x38d6,	// (0x0003ce67) graphic_text_secondary_pane_g1

0x38de,	// (0x0003ce6f) graphic_text_secondary_pane_t1

0x38ec,	// (0x0003ce7d) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x00048f1c) graphic_text_secondary_pane_t

0x38b2,	// (0x0003ce43) graphic_text_title_pane_g1

0x38ba,	// (0x0003ce4b) graphic_text_title_pane_t1

0x38c8,	// (0x0003ce59) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x00048f17) graphic_text_title_pane_t

0x388e,	// (0x0003ce1f) graphic_text_digital_pane_g1

0x3896,	// (0x0003ce27) graphic_text_digital_pane_t1

0x38a4,	// (0x0003ce35) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x00048f12) graphic_text_digital_pane_t

0xb5d8,	// (0x00044b69) navi_icon_pane_srt_ParamLimits

0xb5d8,	// (0x00044b69) navi_icon_pane_srt

0xb57c,	// (0x00044b0d) navi_midp_pane_srt

0xb57c,	// (0x00044b0d) navi_navi_pane_srt

0xb5d8,	// (0x00044b69) navi_text_pane_srt_ParamLimits

0xb5d8,	// (0x00044b69) navi_text_pane_srt

0x3859,	// (0x0003cdea) navi_navi_icon_text_pane_srt

0x3861,	// (0x0003cdf2) navi_navi_pane_srt_g1_ParamLimits

0x3861,	// (0x0003cdf2) navi_navi_pane_srt_g1

0x3873,	// (0x0003ce04) navi_navi_pane_srt_g2_ParamLimits

0x3873,	// (0x0003ce04) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x00048f0d) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x00048f0d) navi_navi_pane_srt_g

0x3885,	// (0x0003ce16) navi_navi_tabs_pane_srt

0x3859,	// (0x0003cdea) navi_navi_text_pane_srt

0x3859,	// (0x0003cdea) navi_navi_volume_pane_srt

0x384a,	// (0x0003cddb) navi_navi_text_pane_srt_t1

0x0b88,	// (0x0003a119) navi_navi_volume_pane_srt_g1

0x0b90,	// (0x0003a121) volume_small_pane_srt_ParamLimits

0x0b90,	// (0x0003a121) volume_small_pane_srt

0xf3fd,	// (0x0004898e) volume_small_pane_srt_g1_ParamLimits

0xf3fd,	// (0x0004898e) volume_small_pane_srt_g1

0xf40d,	// (0x0004899e) volume_small_pane_srt_g2_ParamLimits

0xf40d,	// (0x0004899e) volume_small_pane_srt_g2

0xf41e,	// (0x000489af) volume_small_pane_srt_g3_ParamLimits

0xf41e,	// (0x000489af) volume_small_pane_srt_g3

0xf42f,	// (0x000489c0) volume_small_pane_srt_g4_ParamLimits

0xf42f,	// (0x000489c0) volume_small_pane_srt_g4

0xf440,	// (0x000489d1) volume_small_pane_srt_g5_ParamLimits

0xf440,	// (0x000489d1) volume_small_pane_srt_g5

0xf451,	// (0x000489e2) volume_small_pane_srt_g6_ParamLimits

0xf451,	// (0x000489e2) volume_small_pane_srt_g6

0xf462,	// (0x000489f3) volume_small_pane_srt_g7_ParamLimits

0xf462,	// (0x000489f3) volume_small_pane_srt_g7

0xf473,	// (0x00048a04) volume_small_pane_srt_g8_ParamLimits

0xf473,	// (0x00048a04) volume_small_pane_srt_g8

0xf484,	// (0x00048a15) volume_small_pane_srt_g9_ParamLimits

0xf484,	// (0x00048a15) volume_small_pane_srt_g9

0xf495,	// (0x00048a26) volume_small_pane_srt_g10_ParamLimits

0xf495,	// (0x00048a26) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x00048cba) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x00048cba) volume_small_pane_srt_g

0x8b6c,	// (0x000420fd) query_popup_data_pane_cp2

0x3830,	// (0x0003cdc1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3830,	// (0x0003cdc1) navi_navi_icon_text_pane_srt_t1

0x2930,	// (0x0003bec1) navi_tabs_2_long_pane_srt

0x2930,	// (0x0003bec1) navi_tabs_2_pane_srt

0x2930,	// (0x0003bec1) navi_tabs_3_long_pane_srt

0x2930,	// (0x0003bec1) navi_tabs_3_pane_srt

0x2930,	// (0x0003bec1) navi_tabs_4_pane_srt

0xabb4,	// (0x00044145) tabs_2_active_pane_srt_ParamLimits

0xabb4,	// (0x00044145) tabs_2_active_pane_srt

0xabc4,	// (0x00044155) tabs_2_passive_pane_srt_ParamLimits

0xabc4,	// (0x00044155) tabs_2_passive_pane_srt

0x20df,	// (0x0003b670) bg_passive_tab_pane_cp1_srt_ParamLimits

0x20df,	// (0x0003b670) bg_passive_tab_pane_cp1_srt

0xc929,	// (0x00045eba) bg_passive_tab_pane_g1_cp1_srt

0x9609,	// (0x00042b9a) bg_passive_tab_pane_g2_cp1_srt

0xc932,	// (0x00045ec3) bg_passive_tab_pane_g3_cp1_srt

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp1_srt_ParamLimits

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp1_srt

0xc93b,	// (0x00045ecc) tabs_2_active_pane_srt_g1

0xc943,	// (0x00045ed4) tabs_2_active_pane_srt_t1_ParamLimits

0xc943,	// (0x00045ed4) tabs_2_active_pane_srt_t1

0xc929,	// (0x00045eba) bg_active_tab_pane_g1_cp1_srt

0x9609,	// (0x00042b9a) bg_active_tab_pane_g2_cp1_srt

0xc932,	// (0x00045ec3) bg_active_tab_pane_g3_cp1_srt

0xab81,	// (0x00044112) tabs_3_active_pane_srt_ParamLimits

0xab81,	// (0x00044112) tabs_3_active_pane_srt

0xab92,	// (0x00044123) tabs_3_passive_pane_cp_srt_ParamLimits

0xab92,	// (0x00044123) tabs_3_passive_pane_cp_srt

0xaba3,	// (0x00044134) tabs_3_passive_pane_srt_ParamLimits

0xaba3,	// (0x00044134) tabs_3_passive_pane_srt

0x20df,	// (0x0003b670) bg_passive_tab_pane_cp2_srt_ParamLimits

0x20df,	// (0x0003b670) bg_passive_tab_pane_cp2_srt

0x97a8,	// (0x00042d39) bg_passive_tab_pane_g1_cp2_srt

0x9609,	// (0x00042b9a) bg_passive_tab_pane_g2_cp2_srt

0x97b1,	// (0x00042d42) bg_passive_tab_pane_g3_cp2_srt

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp2_srt_ParamLimits

0xb5ca,	// (0x00044b5b) bg_active_tab_pane_cp2_srt

0xc90b,	// (0x00045e9c) tabs_3_active_pane_srt_g1

0xc913,	// (0x00045ea4) tabs_3_active_pane_srt_t1_ParamLimits

0xc913,	// (0x00045ea4) tabs_3_active_pane_srt_t1

0x97a8,	// (0x00042d39) bg_active_tab_pane_g1_cp2_srt

0x9609,	// (0x00042b9a) bg_active_tab_pane_g2_cp2_srt

0x97b1,	// (0x00042d42) bg_active_tab_pane_g3_cp2_srt

0x0aed,	// (0x0003a07e) tabs_4_active_pane_srt_ParamLimits

0x0aed,	// (0x0003a07e) tabs_4_active_pane_srt

0x0aff,	// (0x0003a090) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0aff,	// (0x0003a090) tabs_4_passive_pane_cp2_srt

0xf4b5,	// (0x00048a46) aid_size_cell_toolbar

0x342e,	// (0x0003c9bf) main_idle_act_pane_ParamLimits

0xf503,	// (0x00048a94) popup_large_graphic_colour_window_ParamLimits

0xa0e7,	// (0x00043678) popup_toolbar_window_ParamLimits

0xa0e7,	// (0x00043678) popup_toolbar_window

0x35e2,	// (0x0003cb73) list_single_graphic_2heading_pane_ParamLimits

0x35e2,	// (0x0003cb73) list_single_graphic_2heading_pane

0xbc5d,	// (0x000451ee) aid_size_cell_apps_grid_lsc_pane

0xbc6f,	// (0x00045200) aid_size_cell_apps_grid_prt_pane

0xbad0,	// (0x00045061) bg_wml_button_pane_cp1_ParamLimits

0xbad0,	// (0x00045061) bg_wml_button_pane_cp1

0xa718,	// (0x00043ca9) form_midp_field_text_pane_t1_ParamLimits

0x20df,	// (0x0003b670) input_focus_pane_cp050_ParamLimits

0x234f,	// (0x0003b8e0) list_midp_form_text_pane_ParamLimits

0x22f2,	// (0x0003b883) input_focus_pane_cp051_ParamLimits

0x2306,	// (0x0003b897) list_midp_choice_pane_ParamLimits

0xa67d,	// (0x00043c0e) list_single_2graphic_pane_cp3_ParamLimits

0xa67d,	// (0x00043c0e) list_single_2graphic_pane_cp3

0xa691,	// (0x00043c22) list_single_midp_graphic_pane_ParamLimits

0xa691,	// (0x00043c22) list_single_midp_graphic_pane

0xdfe0,	// (0x00047571) list_single_graphic_2heading_pane_g1_ParamLimits

0xdfe0,	// (0x00047571) list_single_graphic_2heading_pane_g1

0xdfec,	// (0x0004757d) list_single_graphic_2heading_pane_g4_ParamLimits

0xdfec,	// (0x0004757d) list_single_graphic_2heading_pane_g4

0xdff8,	// (0x00047589) list_single_graphic_2heading_pane_g5_ParamLimits

0xdff8,	// (0x00047589) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x00048d0d) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x00048d0d) list_single_graphic_2heading_pane_g

0xe004,	// (0x00047595) list_single_graphic_2heading_pane_t1_ParamLimits

0xe004,	// (0x00047595) list_single_graphic_2heading_pane_t1

0xe018,	// (0x000475a9) list_single_graphic_2heading_pane_t2_ParamLimits

0xe018,	// (0x000475a9) list_single_graphic_2heading_pane_t2

0xe032,	// (0x000475c3) list_single_graphic_2heading_pane_t3_ParamLimits

0xe032,	// (0x000475c3) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x00048d14) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x00048d14) list_single_graphic_2heading_pane_t

0x1f91,	// (0x0003b522) bg_popup_sub_pane_cp2

0x1fbb,	// (0x0003b54c) grid_toobar_pane

0x0669,	// (0x00039bfa) cell_toolbar_pane_ParamLimits

0x0669,	// (0x00039bfa) cell_toolbar_pane

0x1ff7,	// (0x0003b588) cell_toolbar_pane_g1_ParamLimits

0x1ff7,	// (0x0003b588) cell_toolbar_pane_g1

0xa595,	// (0x00043b26) cell_toolbar_pane_g2_ParamLimits

0xa595,	// (0x00043b26) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x00048d22) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x00048d22) cell_toolbar_pane_g

0x202d,	// (0x0003b5be) grid_highlight_pane_cp2_ParamLimits

0x202d,	// (0x0003b5be) grid_highlight_pane_cp2

0x2047,	// (0x0003b5d8) toolbar_button_pane

0x2053,	// (0x0003b5e4) toolbar_button_pane_g1

0x205b,	// (0x0003b5ec) toolbar_button_pane_g2

0x2063,	// (0x0003b5f4) toolbar_button_pane_g3

0x206b,	// (0x0003b5fc) toolbar_button_pane_g4

0x2073,	// (0x0003b604) toolbar_button_pane_g5

0x207b,	// (0x0003b60c) toolbar_button_pane_g6

0x2083,	// (0x0003b614) toolbar_button_pane_g7

0x208b,	// (0x0003b61c) toolbar_button_pane_g8

0x2093,	// (0x0003b624) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x00048d27) toolbar_button_pane_g

0x06a1,	// (0x00039c32) list_single_2graphic_pane_g1_cp3_ParamLimits

0x06a1,	// (0x00039c32) list_single_2graphic_pane_g1_cp3

0xa5a9,	// (0x00043b3a) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa5a9,	// (0x00043b3a) list_single_2graphic_pane_g2_cp3

0x06be,	// (0x00039c4f) list_single_2graphic_pane_g3_cp3

0x06c6,	// (0x00039c57) list_single_2graphic_pane_g4_cp3_ParamLimits

0x06c6,	// (0x00039c57) list_single_2graphic_pane_g4_cp3

0xa5ba,	// (0x00043b4b) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa5ba,	// (0x00043b4b) list_single_2graphic_pane_t1_cp3

0x06ee,	// (0x00039c7f) list_single_midp_graphic_pane_g2_ParamLimits

0x06ee,	// (0x00039c7f) list_single_midp_graphic_pane_g2

0xf4bd,	// (0x00048a4e) aid_zoom_text_primary

0xdfd0,	// (0x00047561) aid_zoom_text_secondary

0x9808,	// (0x00042d99) status_small_pane_g7_ParamLimits

0x9808,	// (0x00042d99) status_small_pane_g7

0x982b,	// (0x00042dbc) status_small_pane_t1_ParamLimits

0x87b3,	// (0x00041d44) title_pane_g2

0x0003,

0xf529,	// (0x00048aba) title_pane_g

0x8bc6,	// (0x00042157) aid_size_cell_colour_1_pane_ParamLimits

0x8bc6,	// (0x00042157) aid_size_cell_colour_1_pane

0x8bda,	// (0x0004216b) aid_size_cell_colour_2_pane_ParamLimits

0x8bda,	// (0x0004216b) aid_size_cell_colour_2_pane

0x8bee,	// (0x0004217f) aid_size_cell_colour_3_pane_ParamLimits

0x8bee,	// (0x0004217f) aid_size_cell_colour_3_pane

0x8c02,	// (0x00042193) aid_size_cell_colour_4_pane_ParamLimits

0x8c02,	// (0x00042193) aid_size_cell_colour_4_pane

0xf0ba,	// (0x0004864b) title_pane_stacon_g1_ParamLimits

0xf0ba,	// (0x0004864b) title_pane_stacon_g1

0x271f,	// (0x0003bcb0) popup_note_wait_window_g3_ParamLimits

0x271f,	// (0x0003bcb0) popup_note_wait_window_g3

0x2795,	// (0x0003bd26) popup_note_wait_window_t5_ParamLimits

0x2795,	// (0x0003bd26) popup_note_wait_window_t5

0xb57c,	// (0x00044b0d) main_feb_china_hwr_fs_writing_pane

0x9a9b,	// (0x0004302c) popup_feb_china_hwr_fs_window_ParamLimits

0x9a9b,	// (0x0004302c) popup_feb_china_hwr_fs_window

0xa5d6,	// (0x00043b67) aid_size_cell_hwr_fs_ParamLimits

0xa5d6,	// (0x00043b67) aid_size_cell_hwr_fs

0x20df,	// (0x0003b670) bg_popup_sub_pane_cp3_ParamLimits

0x20df,	// (0x0003b670) bg_popup_sub_pane_cp3

0xa5eb,	// (0x00043b7c) grid_hwr_fs_pane_ParamLimits

0xa5eb,	// (0x00043b7c) grid_hwr_fs_pane

0x073d,	// (0x00039cce) linegrid_hwr_fs_pane_ParamLimits

0x073d,	// (0x00039cce) linegrid_hwr_fs_pane

0xa603,	// (0x00043b94) cell_hwr_fs_pane_ParamLimits

0xa603,	// (0x00043b94) cell_hwr_fs_pane

0x20eb,	// (0x0003b67c) linegrid_hwr_fs_pane_g1_ParamLimits

0x20eb,	// (0x0003b67c) linegrid_hwr_fs_pane_g1

0xa629,	// (0x00043bba) linegrid_hwr_fs_pane_g2_ParamLimits

0xa629,	// (0x00043bba) linegrid_hwr_fs_pane_g2

0x2109,	// (0x0003b69a) linegrid_hwr_fs_pane_g3_ParamLimits

0x2109,	// (0x0003b69a) linegrid_hwr_fs_pane_g3

0xa63b,	// (0x00043bcc) linegrid_hwr_fs_pane_g4_ParamLimits

0xa63b,	// (0x00043bcc) linegrid_hwr_fs_pane_g4

0x0789,	// (0x00039d1a) linegrid_hwr_fs_pane_g5_ParamLimits

0x0789,	// (0x00039d1a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x00048d4d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x00048d4d) linegrid_hwr_fs_pane_g

0x2115,	// (0x0003b6a6) cell_hwr_fs_pane_g1_ParamLimits

0x2115,	// (0x0003b6a6) cell_hwr_fs_pane_g1

0x1ecb,	// (0x0003b45c) cell_hwr_fs_pane_g2_ParamLimits

0x1ecb,	// (0x0003b45c) cell_hwr_fs_pane_g2

0xa655,	// (0x00043be6) cell_hwr_fs_pane_g3_ParamLimits

0xa655,	// (0x00043be6) cell_hwr_fs_pane_g3

0xa662,	// (0x00043bf3) cell_hwr_fs_pane_g4_ParamLimits

0xa662,	// (0x00043bf3) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x00048d58) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x00048d58) cell_hwr_fs_pane_g

0xa66f,	// (0x00043c00) cell_hwr_fs_pane_t1

0xb57c,	// (0x00044b0d) grid_highlight_pane_cp6

0xb57c,	// (0x00044b0d) main_idle_act2_pane

0xbaa7,	// (0x00045038) aid_inside_area_popup_secondary

0xc445,	// (0x000459d6) aid_inside_area_window_primary_ParamLimits

0xc445,	// (0x000459d6) aid_inside_area_window_primary

0xc961,	// (0x00045ef2) ai2_news_ticker_pane

0x3951,	// (0x0003cee2) aid_size_cell_ai1_link_ParamLimits

0x3951,	// (0x0003cee2) aid_size_cell_ai1_link

0xc969,	// (0x00045efa) popup_ai2_data_window_ParamLimits

0xc969,	// (0x00045efa) popup_ai2_data_window

0x3981,	// (0x0003cf12) popup_ai2_link_window_ParamLimits

0x3981,	// (0x0003cf12) popup_ai2_link_window

0x20df,	// (0x0003b670) bg_popup_sub_pane_cp4_ParamLimits

0x20df,	// (0x0003b670) bg_popup_sub_pane_cp4

0x3995,	// (0x0003cf26) grid_ai2_link_pane_ParamLimits

0x3995,	// (0x0003cf26) grid_ai2_link_pane

0x39ac,	// (0x0003cf3d) popup_ai2_link_window_g1_ParamLimits

0x39ac,	// (0x0003cf3d) popup_ai2_link_window_g1

0x39b8,	// (0x0003cf49) popup_ai2_link_window_g2_ParamLimits

0x39b8,	// (0x0003cf49) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x00048f2b) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x00048f2b) popup_ai2_link_window_g

0x39c7,	// (0x0003cf58) ai2_mp_button_pane

0x39cf,	// (0x0003cf60) ai2_mp_volume_pane

0x22f2,	// (0x0003b883) bg_popup_sub_pane_cp5_ParamLimits

0x22f2,	// (0x0003b883) bg_popup_sub_pane_cp5

0x39d7,	// (0x0003cf68) heading_ai2_gene_pane_ParamLimits

0x39d7,	// (0x0003cf68) heading_ai2_gene_pane

0x39e3,	// (0x0003cf74) list_ai2_gene_pane_ParamLimits

0x39e3,	// (0x0003cf74) list_ai2_gene_pane

0x3a2b,	// (0x0003cfbc) cell_ai2_link_pane_ParamLimits

0x3a2b,	// (0x0003cfbc) cell_ai2_link_pane

0x3a41,	// (0x0003cfd2) cell_ai2_link_pane_g1

0xb57c,	// (0x00044b0d) grid_highlight_pane_cp7

0x0ba5,	// (0x0003a136) ai2_mp_volume_pane_g1

0x3b11,	// (0x0003d0a2) ai2_mp_volume_pane_g2

0x3a86,	// (0x0003d017) list_ai2_gene_pane_t1

0x3b19,	// (0x0003d0aa) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x00048f44) ai2_mp_volume_pane_g

0xabd4,	// (0x00044165) volume_small_pane_cp3

0x3b21,	// (0x0003d0b2) aid_size_cell_ai2_button

0x3b29,	// (0x0003d0ba) grid_ai2_button_pane

0x3b32,	// (0x0003d0c3) cell_ai2_button_pane_ParamLimits

0x3b32,	// (0x0003d0c3) cell_ai2_button_pane

0xb572,	// (0x00044b03) cell_ai2_button_pane_g1

0xb57c,	// (0x00044b0d) grid_highlight_pane_cp8

0x3ad1,	// (0x0003d062) ai2_gene_pane_t1_ParamLimits

0x3ad1,	// (0x0003d062) ai2_gene_pane_t1

0x99fd,	// (0x00042f8e) aid_height_parent_landscape

0xc693,	// (0x00045c24) aid_height_set_list

0x342e,	// (0x0003c9bf) aid_size_parent

0x376c,	// (0x0003ccfd) aid_size_cell_graphic_pane_ParamLimits

0x39f3,	// (0x0003cf84) popup_ai2_data_window_g1_ParamLimits

0x39f3,	// (0x0003cf84) popup_ai2_data_window_g1

0x39ff,	// (0x0003cf90) ai2_news_ticker_pane_g1

0x3a07,	// (0x0003cf98) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x00048f30) ai2_news_ticker_pane_g

0x3a0f,	// (0x0003cfa0) ai2_news_ticker_pane_t1

0x3a1d,	// (0x0003cfae) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x00048f35) ai2_news_ticker_pane_t

0x3a4a,	// (0x0003cfdb) heading_ai2_gene_pane_g1

0x3a52,	// (0x0003cfe3) heading_ai2_gene_pane_t1_ParamLimits

0x3a52,	// (0x0003cfe3) heading_ai2_gene_pane_t1

0x3a67,	// (0x0003cff8) list_highlight_pane_cp6

0x3a6f,	// (0x0003d000) ai2_gene_pane_ParamLimits

0x3a6f,	// (0x0003d000) ai2_gene_pane

0x3a94,	// (0x0003d025) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x00048f3a) list_ai2_gene_pane_t

0x3aa2,	// (0x0003d033) list_highlight_pane_cp8_ParamLimits

0x3aa2,	// (0x0003d033) list_highlight_pane_cp8

0x3ab3,	// (0x0003d044) ai2_gene_pane_g1_ParamLimits

0x3ab3,	// (0x0003d044) ai2_gene_pane_g1

0x3ac5,	// (0x0003d056) ai2_gene_pane_g2_ParamLimits

0x3ac5,	// (0x0003d056) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x00048f3f) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x00048f3f) ai2_gene_pane_g

0xb92d,	// (0x00044ebe) scroll_pane_cp12

0x99ba,	// (0x00042f4b) control_pane_t3_ParamLimits

0x99ba,	// (0x00042f4b) control_pane_t3

0x981c,	// (0x00042dad) status_small_pane_g8_ParamLimits

0x981c,	// (0x00042dad) status_small_pane_g8

0x9b5e,	// (0x000430ef) popup_find_window_ParamLimits

0x9deb,	// (0x0004337c) popup_note_image_window_ParamLimits

0xddb1,	// (0x00047342) list_double2_graphic_pane_vc_g1_ParamLimits

0xddb1,	// (0x00047342) list_double2_graphic_pane_vc_g1

0xe04a,	// (0x000475db) list_double2_graphic_pane_vc_g2_ParamLimits

0xe04a,	// (0x000475db) list_double2_graphic_pane_vc_g2

0xe056,	// (0x000475e7) list_double2_graphic_pane_vc_g3_ParamLimits

0xe056,	// (0x000475e7) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x00048d1b) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x00048d1b) list_double2_graphic_pane_vc_g

0xddd5,	// (0x00047366) list_double2_graphic_pane_vc_t1_ParamLimits

0xddd5,	// (0x00047366) list_double2_graphic_pane_vc_t1

0xddbd,	// (0x0004734e) list_single_heading_pane_vc_g1_ParamLimits

0xddbd,	// (0x0004734e) list_single_heading_pane_vc_g1

0xddc9,	// (0x0004735a) list_single_heading_pane_vc_g2_ParamLimits

0xddc9,	// (0x0004735a) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048b34) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048b34) list_single_heading_pane_vc_g

0xe062,	// (0x000475f3) list_single_heading_pane_vc_t1_ParamLimits

0xe062,	// (0x000475f3) list_single_heading_pane_vc_t1

0xe078,	// (0x00047609) list_single_heading_pane_vc_t2_ParamLimits

0xe078,	// (0x00047609) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x00048d3c) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x00048d3c) list_single_heading_pane_vc_t

0x209b,	// (0x0003b62c) list_setting_number_pane_vc_g1_ParamLimits

0x209b,	// (0x0003b62c) list_setting_number_pane_vc_g1

0x20a7,	// (0x0003b638) list_setting_number_pane_vc_g2_ParamLimits

0x20a7,	// (0x0003b638) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x00048d41) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x00048d41) list_setting_number_pane_vc_g

0xe08a,	// (0x0004761b) list_setting_number_pane_vc_t1_ParamLimits

0xe08a,	// (0x0004761b) list_setting_number_pane_vc_t1

0xe09e,	// (0x0004762f) list_setting_number_pane_vc_t2_ParamLimits

0xe09e,	// (0x0004762f) list_setting_number_pane_vc_t2

0xe0ba,	// (0x0004764b) list_setting_number_pane_vc_t3_ParamLimits

0xe0ba,	// (0x0004764b) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x00048d46) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x00048d46) list_setting_number_pane_vc_t

0xe0e4,	// (0x00047675) set_value_pane_vc_ParamLimits

0xe0e4,	// (0x00047675) set_value_pane_vc

0x35e2,	// (0x0003cb73) list_double2_graphic_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_double2_graphic_pane_vc

0x35e2,	// (0x0003cb73) list_double2_large_graphic_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_double2_large_graphic_pane_vc

0x35e2,	// (0x0003cb73) list_double2_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_double2_pane_vc

0x35e2,	// (0x0003cb73) list_double_graphic_heading_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_double_graphic_heading_pane_vc

0x35e2,	// (0x0003cb73) list_double_graphic_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_double_graphic_pane_vc

0x35e2,	// (0x0003cb73) list_double_heading_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_double_heading_pane_vc

0xe103,	// (0x00047694) list_double_large_graphic_pane_vc_ParamLimits

0xe103,	// (0x00047694) list_double_large_graphic_pane_vc

0x35e2,	// (0x0003cb73) list_double_number_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_double_number_pane_vc

0x35e2,	// (0x0003cb73) list_double_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_double_pane_vc

0x35e2,	// (0x0003cb73) list_double_time_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_double_time_pane_vc

0x35e2,	// (0x0003cb73) list_setting_number_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_setting_number_pane_vc

0x35e2,	// (0x0003cb73) list_setting_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_setting_pane_vc

0x35e2,	// (0x0003cb73) list_single_graphic_heading_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_single_graphic_heading_pane_vc

0x35e2,	// (0x0003cb73) list_single_heading_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_single_heading_pane_vc

0x35e2,	// (0x0003cb73) list_single_number_heading_pane_vc_ParamLimits

0x35e2,	// (0x0003cb73) list_single_number_heading_pane_vc

0xde37,	// (0x000473c8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xde37,	// (0x000473c8) list_double_graphic_heading_pane_vc_g1

0xe04a,	// (0x000475db) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe04a,	// (0x000475db) list_double_graphic_heading_pane_vc_g2

0xe056,	// (0x000475e7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe056,	// (0x000475e7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x00048f4b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x00048f4b) list_double_graphic_heading_pane_vc_g

0xe122,	// (0x000476b3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe122,	// (0x000476b3) list_double_graphic_heading_pane_vc_t1

0xe136,	// (0x000476c7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe136,	// (0x000476c7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x00048f52) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x00048f52) list_double_graphic_heading_pane_vc_t

0x209b,	// (0x0003b62c) list_setting_pane_vc_g1_ParamLimits

0x209b,	// (0x0003b62c) list_setting_pane_vc_g1

0x20a7,	// (0x0003b638) list_setting_pane_vc_g2_ParamLimits

0x20a7,	// (0x0003b638) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x00048d41) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x00048d41) list_setting_pane_vc_g

0xe14e,	// (0x000476df) list_setting_pane_vc_t1_ParamLimits

0xe14e,	// (0x000476df) list_setting_pane_vc_t1

0xe16a,	// (0x000476fb) list_setting_pane_vc_t2_ParamLimits

0xe16a,	// (0x000476fb) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x00048f95) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x00048f95) list_setting_pane_vc_t

0xe0e4,	// (0x00047675) set_value_pane_cp_vc_ParamLimits

0xe0e4,	// (0x00047675) set_value_pane_cp_vc

0xddbd,	// (0x0004734e) list_single_number_heading_pane_vc_g1_ParamLimits

0xddbd,	// (0x0004734e) list_single_number_heading_pane_vc_g1

0xddc9,	// (0x0004735a) list_single_number_heading_pane_vc_g2_ParamLimits

0xddc9,	// (0x0004735a) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048b34) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048b34) list_single_number_heading_pane_vc_g

0xe184,	// (0x00047715) list_single_number_heading_pane_vc_t1_ParamLimits

0xe184,	// (0x00047715) list_single_number_heading_pane_vc_t1

0xe19a,	// (0x0004772b) list_single_number_heading_pane_vc_t2_ParamLimits

0xe19a,	// (0x0004772b) list_single_number_heading_pane_vc_t2

0xe1ac,	// (0x0004773d) list_single_number_heading_pane_vc_t3_ParamLimits

0xe1ac,	// (0x0004773d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x00048f9a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x00048f9a) list_single_number_heading_pane_vc_t

0xe1be,	// (0x0004774f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe1be,	// (0x0004774f) list_single_graphic_heading_pane_vc_g1

0xddbd,	// (0x0004734e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xddbd,	// (0x0004734e) list_single_graphic_heading_pane_vc_g4

0xddc9,	// (0x0004735a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xddc9,	// (0x0004735a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x00048fa1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x00048fa1) list_single_graphic_heading_pane_vc_g

0xe1ca,	// (0x0004775b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe1ca,	// (0x0004775b) list_single_graphic_heading_pane_vc_t1

0xe1e0,	// (0x00047771) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe1e0,	// (0x00047771) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x00048fa8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x00048fa8) list_single_graphic_heading_pane_vc_t

0xddbd,	// (0x0004734e) list_double2_pane_vc_g1_ParamLimits

0xddbd,	// (0x0004734e) list_double2_pane_vc_g1

0xddc9,	// (0x0004735a) list_double2_pane_vc_g2_ParamLimits

0xddc9,	// (0x0004735a) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048b34) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048b34) list_double2_pane_vc_g

0xe1f2,	// (0x00047783) list_double2_pane_vc_t1_ParamLimits

0xe1f2,	// (0x00047783) list_double2_pane_vc_t1

0xde43,	// (0x000473d4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xde43,	// (0x000473d4) list_double2_large_graphic_pane_vc_g1

0xddbd,	// (0x0004734e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xddbd,	// (0x0004734e) list_double2_large_graphic_pane_vc_g2

0xddc9,	// (0x0004735a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xddc9,	// (0x0004735a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00048b51) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00048b51) list_double2_large_graphic_pane_vc_g

0xddd5,	// (0x00047366) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xddd5,	// (0x00047366) list_double2_large_graphic_pane_vc_t1

0xe20a,	// (0x0004779b) list_double_time_pane_vc_g1_ParamLimits

0xe20a,	// (0x0004779b) list_double_time_pane_vc_g1

0xe216,	// (0x000477a7) list_double_time_pane_vc_g2_ParamLimits

0xe216,	// (0x000477a7) list_double_time_pane_vc_g2

0x0001,

0xfa1c,	// (0x00048fad) list_double_time_pane_vc_g_ParamLimits

0xfa1c,	// (0x00048fad) list_double_time_pane_vc_g

0xe222,	// (0x000477b3) list_double_time_pane_vc_t1_ParamLimits

0xe222,	// (0x000477b3) list_double_time_pane_vc_t1

0xe246,	// (0x000477d7) list_double_time_pane_vc_t2_ParamLimits

0xe246,	// (0x000477d7) list_double_time_pane_vc_t2

0xe295,	// (0x00047826) list_double_time_pane_vc_t3_ParamLimits

0xe295,	// (0x00047826) list_double_time_pane_vc_t3

0xe2a7,	// (0x00047838) list_double_time_pane_vc_t4_ParamLimits

0xe2a7,	// (0x00047838) list_double_time_pane_vc_t4

0x0003,

0xfa21,	// (0x00048fb2) list_double_time_pane_vc_t_ParamLimits

0xfa21,	// (0x00048fb2) list_double_time_pane_vc_t

0xddbd,	// (0x0004734e) list_double_pane_vc_g1_ParamLimits

0xddbd,	// (0x0004734e) list_double_pane_vc_g1

0xddc9,	// (0x0004735a) list_double_pane_vc_g2_ParamLimits

0xddc9,	// (0x0004735a) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048b34) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048b34) list_double_pane_vc_g

0xe2bb,	// (0x0004784c) list_double_pane_vc_t1_ParamLimits

0xe2bb,	// (0x0004784c) list_double_pane_vc_t1

0xe2cf,	// (0x00047860) list_double_pane_vc_t2_ParamLimits

0xe2cf,	// (0x00047860) list_double_pane_vc_t2

0x0001,

0xfa2a,	// (0x00048fbb) list_double_pane_vc_t_ParamLimits

0xfa2a,	// (0x00048fbb) list_double_pane_vc_t

0xddbd,	// (0x0004734e) list_double_number_pane_vc_g1_ParamLimits

0xddbd,	// (0x0004734e) list_double_number_pane_vc_g1

0xddc9,	// (0x0004735a) list_double_number_pane_vc_g2_ParamLimits

0xddc9,	// (0x0004735a) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048b34) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048b34) list_double_number_pane_vc_g

0xe2e7,	// (0x00047878) list_double_number_pane_vc_t1_ParamLimits

0xe2e7,	// (0x00047878) list_double_number_pane_vc_t1

0xe2bb,	// (0x0004784c) list_double_number_pane_vc_t2_ParamLimits

0xe2bb,	// (0x0004784c) list_double_number_pane_vc_t2

0xe2f9,	// (0x0004788a) list_double_number_pane_vc_t3_ParamLimits

0xe2f9,	// (0x0004788a) list_double_number_pane_vc_t3

0x0002,

0xfa2f,	// (0x00048fc0) list_double_number_pane_vc_t_ParamLimits

0xfa2f,	// (0x00048fc0) list_double_number_pane_vc_t

0xe311,	// (0x000478a2) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe311,	// (0x000478a2) list_double_large_graphic_pane_vc_g1

0xe32d,	// (0x000478be) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe32d,	// (0x000478be) list_double_large_graphic_pane_vc_g2

0xe341,	// (0x000478d2) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe341,	// (0x000478d2) list_double_large_graphic_pane_vc_g3

0xe350,	// (0x000478e1) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe350,	// (0x000478e1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa36,	// (0x00048fc7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x00048fc7) list_double_large_graphic_pane_vc_g

0xe35c,	// (0x000478ed) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe35c,	// (0x000478ed) list_double_large_graphic_pane_vc_t1

0xe378,	// (0x00047909) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe378,	// (0x00047909) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3f,	// (0x00048fd0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3f,	// (0x00048fd0) list_double_large_graphic_pane_vc_t

0xe04a,	// (0x000475db) list_double_heading_pane_vc_g1_ParamLimits

0xe04a,	// (0x000475db) list_double_heading_pane_vc_g1

0xe056,	// (0x000475e7) list_double_heading_pane_vc_g2_ParamLimits

0xe056,	// (0x000475e7) list_double_heading_pane_vc_g2

0x0001,

0xfa44,	// (0x00048fd5) list_double_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x00048fd5) list_double_heading_pane_vc_g

0xe39a,	// (0x0004792b) list_double_heading_pane_vc_t1_ParamLimits

0xe39a,	// (0x0004792b) list_double_heading_pane_vc_t1

0xe3ae,	// (0x0004793f) list_double_heading_pane_vc_t2_ParamLimits

0xe3ae,	// (0x0004793f) list_double_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x00048fda) list_double_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00048fda) list_double_heading_pane_vc_t

0xe3c6,	// (0x00047957) list_double_graphic_pane_vc_g1_ParamLimits

0xe3c6,	// (0x00047957) list_double_graphic_pane_vc_g1

0xe3d9,	// (0x0004796a) list_double_graphic_pane_vc_g2_ParamLimits

0xe3d9,	// (0x0004796a) list_double_graphic_pane_vc_g2

0xddbd,	// (0x0004734e) list_double_graphic_pane_vc_g3_ParamLimits

0xddbd,	// (0x0004734e) list_double_graphic_pane_vc_g3

0x0003,

0xfa4e,	// (0x00048fdf) list_double_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x00048fdf) list_double_graphic_pane_vc_g

0xe3f6,	// (0x00047987) list_double_graphic_pane_vc_t1_ParamLimits

0xe3f6,	// (0x00047987) list_double_graphic_pane_vc_t1

0xe415,	// (0x000479a6) list_double_graphic_pane_vc_t2_ParamLimits

0xe415,	// (0x000479a6) list_double_graphic_pane_vc_t2

0x0001,

0xfa57,	// (0x00048fe8) list_double_graphic_pane_vc_t_ParamLimits

0xfa57,	// (0x00048fe8) list_double_graphic_pane_vc_t

0xdc15,	// (0x000471a6) aid_size_cell_fastswap

0x857a,	// (0x00041b0b) aid_size_cell_touch_ParamLimits

0x857a,	// (0x00041b0b) aid_size_cell_touch

0xdd76,	// (0x00047307) popup_fast_swap_wide_window_ParamLimits

0xdd76,	// (0x00047307) popup_fast_swap_wide_window

0x874a,	// (0x00041cdb) touch_pane_ParamLimits

0x874a,	// (0x00041cdb) touch_pane

0xb97a,	// (0x00044f0b) button_value_adjust_pane_cp2

0xdf79,	// (0x0004750a) button_value_adjust_pane_cp4

0xdf81,	// (0x00047512) form_field_data_pane_cp2

0x9050,	// (0x000425e1) form_field_data_wide_pane_cp2

0xbc94,	// (0x00045225) bg_scroll_pane_ParamLimits

0x93e0,	// (0x00042971) scroll_handle_pane_ParamLimits

0xf213,	// (0x000487a4) scroll_sc2_down_pane_ParamLimits

0xf213,	// (0x000487a4) scroll_sc2_down_pane

0xbcc5,	// (0x00045256) scroll_sc2_up_pane_ParamLimits

0xbcc5,	// (0x00045256) scroll_sc2_up_pane

0xcab2,	// (0x00046043) grid_wheel_folder_pane_g1_ParamLimits

0xcab2,	// (0x00046043) grid_wheel_folder_pane_g1

0xf395,	// (0x00048926) clock_nsta_pane_cp2_ParamLimits

0xf395,	// (0x00048926) clock_nsta_pane_cp2

0x96e2,	// (0x00042c73) listscroll_midp_pane_ParamLimits

0x96ee,	// (0x00042c7f) midp_canvas_pane

0xc38e,	// (0x0004591f) nsta_clock_indic_pane

0xc3b6,	// (0x00045947) listscroll_form_pane_vc

0xc3be,	// (0x0004594f) listscroll_set_pane_vc_ParamLimits

0xc3be,	// (0x0004594f) listscroll_set_pane_vc

0xa2a0,	// (0x00043831) clock_nsta_pane

0xa2ca,	// (0x0004385b) indicator_nsta_pane

0x1f91,	// (0x0003b522) bg_popup_sub_pane_cp2_ParamLimits

0x1fa5,	// (0x0003b536) find_pane_cp2_ParamLimits

0x1fa5,	// (0x0003b536) find_pane_cp2

0x1fbb,	// (0x0003b54c) grid_toobar_pane_ParamLimits

0x20b3,	// (0x0003b644) list_form_gen_pane_vc_ParamLimits

0x20b3,	// (0x0003b644) list_form_gen_pane_vc

0x20c9,	// (0x0003b65a) scroll_pane_cp8_vc_ParamLimits

0x20c9,	// (0x0003b65a) scroll_pane_cp8_vc

0x2145,	// (0x0003b6d6) data_form_wide_pane_vc_ParamLimits

0x2145,	// (0x0003b6d6) data_form_wide_pane_vc

0x2151,	// (0x0003b6e2) form_field_data_wide_pane_vc_g1

0x2159,	// (0x0003b6ea) form_field_data_wide_pane_vc_t1_ParamLimits

0x2159,	// (0x0003b6ea) form_field_data_wide_pane_vc_t1

0xb98e,	// (0x00044f1f) input_focus_pane_cp6_vc_ParamLimits

0xb98e,	// (0x00044f1f) input_focus_pane_cp6_vc

0x24a6,	// (0x0003ba37) list_midp_pane_ParamLimits

0x37d6,	// (0x0003cd67) scroll_pane_cp16_ParamLimits

0x37d6,	// (0x0003cd67) scroll_pane_cp16

0x24fc,	// (0x0003ba8d) button_value_adjust_pane_ParamLimits

0x24fc,	// (0x0003ba8d) button_value_adjust_pane

0xc6a4,	// (0x00045c35) button_value_adjust_pane_cp6_ParamLimits

0xc6a4,	// (0x00045c35) button_value_adjust_pane_cp6

0xc7be,	// (0x00045d4f) settings_code_pane_cp_ParamLimits

0xc7be,	// (0x00045d4f) settings_code_pane_cp

0xb572,	// (0x00044b03) cell_touch_pane_g1

0xb572,	// (0x00044b03) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x00048c60) cell_touch_pane_g

0xc97f,	// (0x00045f10) cell_touch_pane_cp_ParamLimits

0xc97f,	// (0x00045f10) cell_touch_pane_cp

0xc99b,	// (0x00045f2c) cell_touch_pane_ParamLimits

0xc99b,	// (0x00045f2c) cell_touch_pane

0xb572,	// (0x00044b03) scroll_sc2_down_pane_g1

0xb572,	// (0x00044b03) scroll_sc2_up_pane_g1

0xb57c,	// (0x00044b0d) bg_set_opt_pane_cp4_vc

0x3b66,	// (0x0003d0f7) list_set_graphic_pane_vc_g1_ParamLimits

0x3b66,	// (0x0003d0f7) list_set_graphic_pane_vc_g1

0x3b72,	// (0x0003d103) list_set_graphic_pane_vc_g2_ParamLimits

0x3b72,	// (0x0003d103) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x00048f57) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x00048f57) list_set_graphic_pane_vc_g

0x3b7e,	// (0x0003d10f) text_primary_small_cp13_vc_ParamLimits

0x3b7e,	// (0x0003d10f) text_primary_small_cp13_vc

0x3b96,	// (0x0003d127) list_set_graphic_pane_vc_ParamLimits

0x3b96,	// (0x0003d127) list_set_graphic_pane_vc

0xb57c,	// (0x00044b0d) input_focus_pane_cp2_vc

0xb572,	// (0x00044b03) setting_code_pane_vc_g1

0xb5ef,	// (0x00044b80) setting_code_pane_vc_t1

0x3ba9,	// (0x0003d13a) set_text_pane_vc_t1_ParamLimits

0x3ba9,	// (0x0003d13a) set_text_pane_vc_t1

0xb57c,	// (0x00044b0d) input_focus_pane_cp1_vc

0x3bc6,	// (0x0003d157) list_set_text_pane_vc

0xb572,	// (0x00044b03) setting_text_pane_vc_g1

0xb57c,	// (0x00044b0d) bg_set_opt_pane_cp2_vc

0xb5e6,	// (0x00044b77) setting_slider_graphic_pane_vc_g1

0x3bd0,	// (0x0003d161) setting_slider_graphic_pane_vc_t1

0x3be0,	// (0x0003d171) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x00048f5c) setting_slider_graphic_pane_vc_t

0x3bf0,	// (0x0003d181) slider_set_pane_cp_vc

0x3bf8,	// (0x0003d189) slider_set_pane_vc_g1

0x3c01,	// (0x0003d192) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x00048f61) slider_set_pane_vc_g

0xb9e6,	// (0x00044f77) set_opt_bg_pane_g1_copy1

0xb9ee,	// (0x00044f7f) set_opt_bg_pane_g2_copy1

0x3c2d,	// (0x0003d1be) set_opt_bg_pane_g3_copy1

0xb9fe,	// (0x00044f8f) set_opt_bg_pane_g4_copy1

0xba06,	// (0x00044f97) set_opt_bg_pane_g5_copy1

0xba0e,	// (0x00044f9f) set_opt_bg_pane_g6_copy1

0x3c35,	// (0x0003d1c6) set_opt_bg_pane_g7_copy1

0x3c3f,	// (0x0003d1d0) set_opt_bg_pane_g8_copy1

0x3c47,	// (0x0003d1d8) set_opt_bg_pane_g9_copy1

0xb57c,	// (0x00044b0d) bg_set_opt_pane_cp_vc

0x3c4f,	// (0x0003d1e0) setting_slider_pane_vc_t1

0x3c5e,	// (0x0003d1ef) setting_slider_pane_vc_t2

0x3c6e,	// (0x0003d1ff) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x00048f70) setting_slider_pane_vc_t

0x3c7e,	// (0x0003d20f) slider_set_pane_vc

0x07e0,	// (0x00039d71) volume_set_pane_vc_g1

0x0bb6,	// (0x0003a147) volume_set_pane_vc_g2

0x0bbf,	// (0x0003a150) volume_set_pane_vc_g3

0x0bc8,	// (0x0003a159) volume_set_pane_vc_g4

0x0bd1,	// (0x0003a162) volume_set_pane_vc_g5

0x0bda,	// (0x0003a16b) volume_set_pane_vc_g6

0x0be3,	// (0x0003a174) volume_set_pane_vc_g7

0x0bec,	// (0x0003a17d) volume_set_pane_vc_g8

0x0bf5,	// (0x0003a186) volume_set_pane_vc_g9

0x0bfe,	// (0x0003a18f) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x00048f77) volume_set_pane_vc_g

0x3c86,	// (0x0003d217) volume_set_pane_vc

0x3c90,	// (0x0003d221) button_value_adjust_pane_cp1_vc

0x3c9a,	// (0x0003d22b) list_highlight_pane_cp2_vc

0x3ca3,	// (0x0003d234) list_set_pane_vc_ParamLimits

0x3ca3,	// (0x0003d234) list_set_pane_vc

0x3d01,	// (0x0003d292) main_pane_set_vc_t1_ParamLimits

0x3d01,	// (0x0003d292) main_pane_set_vc_t1

0x3d16,	// (0x0003d2a7) main_pane_set_vc_t2_ParamLimits

0x3d16,	// (0x0003d2a7) main_pane_set_vc_t2

0x3d28,	// (0x0003d2b9) main_pane_set_vc_t3_ParamLimits

0x3d28,	// (0x0003d2b9) main_pane_set_vc_t3

0x3d3a,	// (0x0003d2cb) main_pane_set_vc_t4_ParamLimits

0x3d3a,	// (0x0003d2cb) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x00048f8c) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x00048f8c) main_pane_set_vc_t

0x3d4c,	// (0x0003d2dd) setting_code_pane_vc_ParamLimits

0x3d4c,	// (0x0003d2dd) setting_code_pane_vc

0x3d5b,	// (0x0003d2ec) setting_slider_graphic_pane_vc

0x3d5b,	// (0x0003d2ec) setting_slider_pane_vc

0x3d5b,	// (0x0003d2ec) setting_text_pane_vc

0x3d5b,	// (0x0003d2ec) setting_volume_pane_vc

0x3d63,	// (0x0003d2f4) scroll_pane_cp121_vc

0xb968,	// (0x00044ef9) set_content_pane_vc

0x3d6b,	// (0x0003d2fc) button_value_adjust_pane_g1

0x3d74,	// (0x0003d305) button_value_adjust_pane_g2

0x0001,

0xfa5c,	// (0x00048fed) button_value_adjust_pane_g

0x3d7d,	// (0x0003d30e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3d7d,	// (0x0003d30e) form_field_slider_wide_pane_vc_t1

0x3d91,	// (0x0003d322) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3d91,	// (0x0003d322) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa61,	// (0x00048ff2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa61,	// (0x00048ff2) form_field_slider_wide_pane_vc_t

0xb5ca,	// (0x00044b5b) input_focus_pane_cp10_vc_ParamLimits

0xb5ca,	// (0x00044b5b) input_focus_pane_cp10_vc

0x3dbf,	// (0x0003d350) slider_cont_pane_cp1_vc_ParamLimits

0x3dbf,	// (0x0003d350) slider_cont_pane_cp1_vc

0x3dd1,	// (0x0003d362) slider_form_pane_g1_cp2

0x3c01,	// (0x0003d192) slider_form_pane_g2_cp2

0x3dfe,	// (0x0003d38f) form_field_slider_pane_vc_t3

0x3e0c,	// (0x0003d39d) form_field_slider_pane_vc_t4

0x3e1a,	// (0x0003d3ab) slider_form_pane_vc_ParamLimits

0x3e1a,	// (0x0003d3ab) slider_form_pane_vc

0x3e27,	// (0x0003d3b8) form_field_slider_pane_vc_t1_ParamLimits

0x3e27,	// (0x0003d3b8) form_field_slider_pane_vc_t1

0x3d91,	// (0x0003d322) form_field_slider_pane_vc_t2_ParamLimits

0x3d91,	// (0x0003d322) form_field_slider_pane_vc_t2

0x0001,

0xfa73,	// (0x00049004) form_field_slider_pane_vc_t_ParamLimits

0xfa73,	// (0x00049004) form_field_slider_pane_vc_t

0xb5ca,	// (0x00044b5b) input_focus_pane_cp9_vc_ParamLimits

0xb5ca,	// (0x00044b5b) input_focus_pane_cp9_vc

0x3e43,	// (0x0003d3d4) slider_cont_pane_vc_ParamLimits

0x3e43,	// (0x0003d3d4) slider_cont_pane_vc

0x3e57,	// (0x0003d3e8) list_form_graphic_pane_cp_vc_ParamLimits

0x3e57,	// (0x0003d3e8) list_form_graphic_pane_cp_vc

0x2151,	// (0x0003b6e2) form_field_popup_wide_pane_vc_g1

0x3e6c,	// (0x0003d3fd) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3e6c,	// (0x0003d3fd) form_field_popup_wide_pane_vc_t1

0xb98e,	// (0x00044f1f) input_focus_pane_cp8_vc_ParamLimits

0xb98e,	// (0x00044f1f) input_focus_pane_cp8_vc

0x3eb1,	// (0x0003d442) list_form_wide_pane_vc_ParamLimits

0x3eb1,	// (0x0003d442) list_form_wide_pane_vc

0x3ebd,	// (0x0003d44e) list_form_graphic_pane_vc_g1

0x3ec5,	// (0x0003d456) list_form_graphic_pane_vc_t1_ParamLimits

0x3ec5,	// (0x0003d456) list_form_graphic_pane_vc_t1

0xb5d8,	// (0x00044b69) list_highlight_pane_cp5_vc_ParamLimits

0xb5d8,	// (0x00044b69) list_highlight_pane_cp5_vc

0x3ee1,	// (0x0003d472) list_form_graphic_pane_vc_ParamLimits

0x3ee1,	// (0x0003d472) list_form_graphic_pane_vc

0x2151,	// (0x0003b6e2) form_field_popup_pane_vc_g1

0x3ef7,	// (0x0003d488) form_field_popup_pane_vc_t1_ParamLimits

0x3ef7,	// (0x0003d488) form_field_popup_pane_vc_t1

0xb98e,	// (0x00044f1f) input_focus_pane_cp7_vc_ParamLimits

0xb98e,	// (0x00044f1f) input_focus_pane_cp7_vc

0x3f0e,	// (0x0003d49f) list_form_pane_vc_ParamLimits

0x3f0e,	// (0x0003d49f) list_form_pane_vc

0x3f1a,	// (0x0003d4ab) data_form_pane_vc_t1_ParamLimits

0x3f1a,	// (0x0003d4ab) data_form_pane_vc_t1

0xb9e6,	// (0x00044f77) input_focus_pane_vc_g1

0xb9ee,	// (0x00044f7f) input_focus_pane_vc_g2

0xb9f6,	// (0x00044f87) input_focus_pane_vc_g3

0xb9fe,	// (0x00044f8f) input_focus_pane_vc_g4

0xba06,	// (0x00044f97) input_focus_pane_vc_g5

0xba0e,	// (0x00044f9f) input_focus_pane_vc_g6

0xba16,	// (0x00044fa7) input_focus_pane_vc_g7

0xba1e,	// (0x00044faf) input_focus_pane_vc_g8

0xba26,	// (0x00044fb7) input_focus_pane_vc_g9

0xb572,	// (0x00044b03) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x00048be9) input_focus_pane_vc_g

0x2145,	// (0x0003b6d6) data_form_pane_vc_ParamLimits

0x2145,	// (0x0003b6d6) data_form_pane_vc

0x2151,	// (0x0003b6e2) form_field_data_pane_vc_g1

0x3f35,	// (0x0003d4c6) form_field_data_pane_vc_t1_ParamLimits

0x3f35,	// (0x0003d4c6) form_field_data_pane_vc_t1

0xb98e,	// (0x00044f1f) input_focus_pane_vc_ParamLimits

0xb98e,	// (0x00044f1f) input_focus_pane_vc

0x3f4f,	// (0x0003d4e0) button_value_adjust_pane_cp3_vc

0x3f57,	// (0x0003d4e8) button_value_adjust_pane_cp5_vc

0x3f5f,	// (0x0003d4f0) form_field_data_pane_vc_ParamLimits

0x3f5f,	// (0x0003d4f0) form_field_data_pane_vc

0x3f76,	// (0x0003d507) form_field_data_pane_vc_cp2

0x3f7e,	// (0x0003d50f) form_field_data_wide_pane_vc_ParamLimits

0x3f7e,	// (0x0003d50f) form_field_data_wide_pane_vc

0x3f94,	// (0x0003d525) form_field_data_wide_pane_vc_cp2

0x3f9c,	// (0x0003d52d) form_field_popup_pane_vc_ParamLimits

0x3f9c,	// (0x0003d52d) form_field_popup_pane_vc

0x3fb3,	// (0x0003d544) form_field_popup_wide_pane_vc_ParamLimits

0x3fb3,	// (0x0003d544) form_field_popup_wide_pane_vc

0x3fc9,	// (0x0003d55a) form_field_slider_pane_vc_ParamLimits

0x3fc9,	// (0x0003d55a) form_field_slider_pane_vc

0x3fdc,	// (0x0003d56d) form_field_slider_wide_pane_vc_ParamLimits

0x3fdc,	// (0x0003d56d) form_field_slider_wide_pane_vc

0xc9b8,	// (0x00045f49) grid_touch_1_pane_ParamLimits

0xc9b8,	// (0x00045f49) grid_touch_1_pane

0xc9cc,	// (0x00045f5d) grid_touch_2_pane_ParamLimits

0xc9cc,	// (0x00045f5d) grid_touch_2_pane

0x40c0,	// (0x0003d651) touch_pane_g1_ParamLimits

0x40c0,	// (0x0003d651) touch_pane_g1

0x4013,	// (0x0003d5a4) cell_app_pane_cp_wide_ParamLimits

0x4013,	// (0x0003d5a4) cell_app_pane_cp_wide

0x4024,	// (0x0003d5b5) grid_popup_fast_wide_pane_ParamLimits

0x4024,	// (0x0003d5b5) grid_popup_fast_wide_pane

0x4038,	// (0x0003d5c9) scroll_pane_cp19_ParamLimits

0x4038,	// (0x0003d5c9) scroll_pane_cp19

0xb57c,	// (0x00044b0d) bg_popup_window_pane_cp20

0x404c,	// (0x0003d5dd) listscroll_popup_fast_wide_pane

0xc9f6,	// (0x00045f87) grid_indicator_nsta_pane

0x4066,	// (0x0003d5f7) clock_nsta_pane_g1

0x406f,	// (0x0003d600) clock_nsta_pane_t1

0xca02,	// (0x00045f93) cell_indicator_nsta_pane_ParamLimits

0xca02,	// (0x00045f93) cell_indicator_nsta_pane

0x40c0,	// (0x0003d651) cell_indicator_nsta_pane_g1

0xca1d,	// (0x00045fae) cell_indicator_nsta_pane_g2

0x0001,

0xfa84,	// (0x00049015) cell_indicator_nsta_pane_g

0x40e0,	// (0x0003d671) clock_nsta_pane_cp

0x40e9,	// (0x0003d67a) indicator_nsta_pane_cp

0x40f3,	// (0x0003d684) nsta_clock_indic_pane_g1

0xb614,	// (0x00044ba5) grid_indicator_pane

0x947a,	// (0x00042a0b) scroll_pane_cp29

0xf2e4,	// (0x00048875) indicator_nsta_pane_cp2_ParamLimits

0xf2e4,	// (0x00048875) indicator_nsta_pane_cp2

0xb5d8,	// (0x00044b69) main_apps_wheel_pane

0xa752,	// (0x00043ce3) form_midp_field_text_pane_ParamLimits

0x24b2,	// (0x0003ba43) scroll_bar_cp050_ParamLimits

0x414c,	// (0x0003d6dd) cell_indicator_pane_ParamLimits

0x414c,	// (0x0003d6dd) cell_indicator_pane

0x4165,	// (0x0003d6f6) cell_indicator_pane_g1

0xca3c,	// (0x00045fcd) grid_wheel_folder_pane_ParamLimits

0xca3c,	// (0x00045fcd) grid_wheel_folder_pane

0xca4a,	// (0x00045fdb) list_wheel_apps_pane_ParamLimits

0xca4a,	// (0x00045fdb) list_wheel_apps_pane

0xca58,	// (0x00045fe9) main_apps_wheel_pane_g1_ParamLimits

0xca58,	// (0x00045fe9) main_apps_wheel_pane_g1

0xca64,	// (0x00045ff5) main_apps_wheel_pane_g2_ParamLimits

0xca64,	// (0x00045ff5) main_apps_wheel_pane_g2

0x0001,

0xfaa0,	// (0x00049031) main_apps_wheel_pane_g_ParamLimits

0xfaa0,	// (0x00049031) main_apps_wheel_pane_g

0xca72,	// (0x00046003) main_apps_wheel_pane_t1_ParamLimits

0xca72,	// (0x00046003) main_apps_wheel_pane_t1

0xca86,	// (0x00046017) list_wheel_apps_pane_g1

0xca8e,	// (0x0004601f) list_wheel_apps_pane_g2

0xca96,	// (0x00046027) list_wheel_apps_pane_g3

0xca9e,	// (0x0004602f) list_wheel_apps_pane_g4

0xcaa8,	// (0x00046039) list_wheel_apps_pane_g5

0x0004,

0xfaa5,	// (0x00049036) list_wheel_apps_pane_g

0xc0ef,	// (0x00045680) navi_icon_text_pane

0xa194,	// (0x00043725) aid_fill_nsta

0x422c,	// (0x0003d7bd) navi_icon_text_pane_g1

0x4238,	// (0x0003d7c9) navi_icon_text_pane_t1

0xbfd3,	// (0x00045564) list_set_graphic_pane_t1_ParamLimits

0xbfd3,	// (0x00045564) list_set_graphic_pane_t1

0x2bfd,	// (0x0003c18e) popup_midp_note_alarm_window_t6_ParamLimits

0x2bfd,	// (0x0003c18e) popup_midp_note_alarm_window_t6

0x2c0f,	// (0x0003c1a0) popup_midp_note_alarm_window_t7_ParamLimits

0x2c0f,	// (0x0003c1a0) popup_midp_note_alarm_window_t7

0x2c21,	// (0x0003c1b2) popup_midp_note_alarm_window_t8_ParamLimits

0x2c21,	// (0x0003c1b2) popup_midp_note_alarm_window_t8

0x2c33,	// (0x0003c1c4) popup_midp_note_alarm_window_t9_ParamLimits

0x2c33,	// (0x0003c1c4) popup_midp_note_alarm_window_t9

0x2c45,	// (0x0003c1d6) popup_midp_note_alarm_window_t10_ParamLimits

0x2c45,	// (0x0003c1d6) popup_midp_note_alarm_window_t10

0x2c57,	// (0x0003c1e8) popup_midp_note_alarm_window_t11_ParamLimits

0x2c57,	// (0x0003c1e8) popup_midp_note_alarm_window_t11

0xc426,	// (0x000459b7) scroll_pane_cp17_ParamLimits

0xc426,	// (0x000459b7) scroll_pane_cp17

0x07e0,	// (0x00039d71) volume_small_pane_cp_g1

0x0c07,	// (0x0003a198) volume_small_pane_cp_g2

0x0c10,	// (0x0003a1a1) volume_small_pane_cp_g3

0x0c19,	// (0x0003a1aa) volume_small_pane_cp_g4

0x0c22,	// (0x0003a1b3) volume_small_pane_cp_g5

0x0bd1,	// (0x0003a162) volume_small_pane_cp_g6

0x0c2b,	// (0x0003a1bc) volume_small_pane_cp_g7

0x0c34,	// (0x0003a1c5) volume_small_pane_cp_g8

0x0c3d,	// (0x0003a1ce) volume_small_pane_cp_g9

0x0c46,	// (0x0003a1d7) volume_small_pane_cp_g10

0xc261,	// (0x000457f2) midp_ticker_pane_g1_ParamLimits

0xc26d,	// (0x000457fe) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x00048cb5) midp_ticker_pane_g_ParamLimits

0xc279,	// (0x0004580a) midp_ticker_pane_t1_ParamLimits

0xa1b8,	// (0x00043749) aid_fill_nsta_2

0x249e,	// (0x0003ba2f) list_form2_midp_pane

0x35b1,	// (0x0003cb42) midp_editing_number_pane_ParamLimits

0x35c0,	// (0x0003cb51) midp_ticker_pane_ParamLimits

0x424a,	// (0x0003d7db) form2_midp_field_pane

0x426e,	// (0x0003d7ff) scroll_pane_cp51

0x428e,	// (0x0003d81f) form2_midp_button_pane_ParamLimits

0x428e,	// (0x0003d81f) form2_midp_button_pane

0x42a0,	// (0x0003d831) form2_midp_content_pane_ParamLimits

0x42a0,	// (0x0003d831) form2_midp_content_pane

0x42ba,	// (0x0003d84b) form2_midp_field_choice_group_pane

0x42c2,	// (0x0003d853) form2_midp_field_pane_g1

0x42ca,	// (0x0003d85b) form2_midp_field_pane_g2

0x42d2,	// (0x0003d863) form2_midp_field_pane_g3

0x42da,	// (0x0003d86b) form2_midp_field_pane_g4

0x0003,

0xfaca,	// (0x0004905b) form2_midp_field_pane_g

0x42e2,	// (0x0003d873) form2_midp_gauge_slider_pane

0x42ea,	// (0x0003d87b) form2_midp_gauge_wait_pane

0x42f2,	// (0x0003d883) form2_midp_image_pane_ParamLimits

0x42f2,	// (0x0003d883) form2_midp_image_pane

0xcadb,	// (0x0004606c) form2_midp_label_pane_ParamLimits

0xcadb,	// (0x0004606c) form2_midp_label_pane

0xcaf4,	// (0x00046085) form2_midp_label_pane_cp_ParamLimits

0xcaf4,	// (0x00046085) form2_midp_label_pane_cp

0x4347,	// (0x0003d8d8) form2_midp_string_pane_ParamLimits

0x4347,	// (0x0003d8d8) form2_midp_string_pane

0xe43f,	// (0x000479d0) form2_midp_text_pane_ParamLimits

0xe43f,	// (0x000479d0) form2_midp_text_pane

0x4359,	// (0x0003d8ea) form2_midp_time_pane

0x4369,	// (0x0003d8fa) input_focus_pane_cp51_ParamLimits

0x4369,	// (0x0003d8fa) input_focus_pane_cp51

0xcb13,	// (0x000460a4) form2_midp_label_pane_t1_ParamLimits

0xcb13,	// (0x000460a4) form2_midp_label_pane_t1

0xe458,	// (0x000479e9) form2_mdip_text_pane_t1_ParamLimits

0xe458,	// (0x000479e9) form2_mdip_text_pane_t1

0xe476,	// (0x00047a07) form2_midp_time_pane_t1

0x43ca,	// (0x0003d95b) form2_midp_gauge_slider_pane_t1

0xcb53,	// (0x000460e4) form2_midp_gauge_slider_pane_t2

0xcb65,	// (0x000460f6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad3,	// (0x00049064) form2_midp_gauge_slider_pane_t

0x4400,	// (0x0003d991) form2_midp_slider_pane

0x440c,	// (0x0003d99d) form2_midp_gauge_wait_pane_t1

0x441a,	// (0x0003d9ab) form2_midp_wait_pane_ParamLimits

0x441a,	// (0x0003d9ab) form2_midp_wait_pane

0xcb77,	// (0x00046108) list_single_2graphic_pane_cp4_ParamLimits

0xcb77,	// (0x00046108) list_single_2graphic_pane_cp4

0xa691,	// (0x00043c22) list_single_midp_graphic_pane_cp_ParamLimits

0xa691,	// (0x00043c22) list_single_midp_graphic_pane_cp

0xb57c,	// (0x00044b0d) list_highlight_pane_cp20

0x446d,	// (0x0003d9fe) list_single_2graphic_pane_g1_cp4

0x3a4a,	// (0x0003cfdb) list_single_2graphic_pane_g2_cp4

0x4475,	// (0x0003da06) list_single_2graphic_pane_t1_cp4

0xb5d8,	// (0x00044b69) list_highlight_pane_cp21

0x4484,	// (0x0003da15) list_single_midp_graphic_pane_g4_cp

0x4493,	// (0x0003da24) list_single_midp_graphic_pane_t1_cp

0xcb8c,	// (0x0004611d) form2_mdip_string_pane_t1_ParamLimits

0xcb8c,	// (0x0004611d) form2_mdip_string_pane_t1

0xb57c,	// (0x00044b0d) bg_wml_button_pane_cp2

0xb572,	// (0x00044b03) form2_midp_image_pane_g1

0xde9a,	// (0x0004742b) list_double_large_graphic_pane_g5_ParamLimits

0xde9a,	// (0x0004742b) list_double_large_graphic_pane_g5

0x96e2,	// (0x00042c73) midp_form_pane_ParamLimits

0xb5d8,	// (0x00044b69) main_apps_wheel_pane_ParamLimits

0x9e72,	// (0x00043403) popup_preview_window_ParamLimits

0x9e72,	// (0x00043403) popup_preview_window

0xa13f,	// (0x000436d0) popup_touch_info_window_ParamLimits

0xa13f,	// (0x000436d0) popup_touch_info_window

0xa15d,	// (0x000436ee) popup_touch_menu_window_ParamLimits

0xa15d,	// (0x000436ee) popup_touch_menu_window

0xb568,	// (0x00044af9) bg_popup_sub_pane_cp6

0x45af,	// (0x0003db40) list_touch_menu_pane

0xcc02,	// (0x00046193) list_single_touch_menu_pane_ParamLimits

0xcc02,	// (0x00046193) list_single_touch_menu_pane

0xcc16,	// (0x000461a7) list_single_touch_menu_pane_t1

0xb5d8,	// (0x00044b69) bg_popup_sub_pane_cp7_ParamLimits

0xb5d8,	// (0x00044b69) bg_popup_sub_pane_cp7

0x45db,	// (0x0003db6c) heading_sub_pane

0x45e3,	// (0x0003db74) list_touch_info_pane_ParamLimits

0x45e3,	// (0x0003db74) list_touch_info_pane

0x45f2,	// (0x0003db83) list_single_touch_info_pane_ParamLimits

0x45f2,	// (0x0003db83) list_single_touch_info_pane

0x4604,	// (0x0003db95) list_single_touch_info_pane_t1

0x4612,	// (0x0003dba3) list_single_touch_info_pane_t2

0x0001,

0xfae1,	// (0x00049072) list_single_touch_info_pane_t

0xc24a,	// (0x000457db) bg_popup_heading_pane_cp

0x4620,	// (0x0003dbb1) heading_sub_pane_t1

0x20df,	// (0x0003b670) bg_popup_preview_window_pane_cp_ParamLimits

0x20df,	// (0x0003b670) bg_popup_preview_window_pane_cp

0x45db,	// (0x0003db6c) heading_preview_pane

0x45e3,	// (0x0003db74) list_preview_pane_ParamLimits

0x45e3,	// (0x0003db74) list_preview_pane

0x462e,	// (0x0003dbbf) popup_preview_window_g1

0x45f2,	// (0x0003db83) list_single_preview_pane_ParamLimits

0x45f2,	// (0x0003db83) list_single_preview_pane

0x4636,	// (0x0003dbc7) list_single_preview_pane_g1

0x463e,	// (0x0003dbcf) list_single_preview_pane_t1

0x4604,	// (0x0003db95) list_single_preview_pane_t2

0x0001,

0xfae6,	// (0x00049077) list_single_preview_pane_t

0x464c,	// (0x0003dbdd) bg_popup_heading_pane_cp2_ParamLimits

0x464c,	// (0x0003dbdd) bg_popup_heading_pane_cp2

0x4662,	// (0x0003dbf3) heading_preview_pane_g1

0x466a,	// (0x0003dbfb) heading_preview_pane_t1_ParamLimits

0x466a,	// (0x0003dbfb) heading_preview_pane_t1

0xb62b,	// (0x00044bbc) soft_indicator_pane_t1_ParamLimits

0xb90a,	// (0x00044e9b) scroll_pane_ParamLimits

0xbcb3,	// (0x00045244) scroll_sc2_left_pane

0xbcbc,	// (0x0004524d) scroll_sc2_right_pane

0xbcdb,	// (0x0004526c) scroll_bg_pane_g1_ParamLimits

0xbcf0,	// (0x00045281) scroll_bg_pane_g2_ParamLimits

0xbd08,	// (0x00045299) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00048c40) scroll_bg_pane_g_ParamLimits

0xbcdb,	// (0x0004526c) scroll_handle_pane_g1_ParamLimits

0xbd1d,	// (0x000452ae) scroll_handle_pane_g2_ParamLimits

0xbd08,	// (0x00045299) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x00048c47) scroll_handle_pane_g_ParamLimits

0x9a3f,	// (0x00042fd0) popup_choice_list_window_ParamLimits

0x9a3f,	// (0x00042fd0) popup_choice_list_window

0x1f9d,	// (0x0003b52e) choice_list_pane

0x201f,	// (0x0003b5b0) cell_toolbar_pane_t1

0x2047,	// (0x0003b5d8) toolbar_button_pane_ParamLimits

0x3123,	// (0x0003c6b4) ai_gene_pane_1_t2_ParamLimits

0x3123,	// (0x0003c6b4) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x00048e6a) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x00048e6a) ai_gene_pane_1_t

0x4687,	// (0x0003dc18) scroll_sc2_left_pane_g1

0x4687,	// (0x0003dc18) scroll_sc2_right_pane_g1

0xbad0,	// (0x00045061) bg_popup_sub_pane_cp10

0x4691,	// (0x0003dc22) list_choice_list_pane

0xc7fa,	// (0x00045d8b) list_single_choice_list_pane_ParamLimits

0xc7fa,	// (0x00045d8b) list_single_choice_list_pane

0xcc24,	// (0x000461b5) list_single_choice_list_pane_g1

0x92a4,	// (0x00042835) list_single_choice_list_pane_t1_ParamLimits

0x92a4,	// (0x00042835) list_single_choice_list_pane_t1

0x46c5,	// (0x0003dc56) choice_list_pane_g1

0xcc2c,	// (0x000461bd) choice_list_pane_t1

0xb568,	// (0x00044af9) input_focus_pane_cp11

0xbc28,	// (0x000451b9) title_pane_stacon_g2_ParamLimits

0xbc28,	// (0x000451b9) title_pane_stacon_g2

0x0002,

0xf695,	// (0x00048c26) title_pane_stacon_g_ParamLimits

0xf695,	// (0x00048c26) title_pane_stacon_g

0xc24a,	// (0x000457db) cursor_press_pane

0x9ae6,	// (0x00043077) popup_fep_hwr_window_ParamLimits

0x9ae6,	// (0x00043077) popup_fep_hwr_window

0xf4e5,	// (0x00048a76) popup_fep_vkb_window_ParamLimits

0xf4e5,	// (0x00048a76) popup_fep_vkb_window

0xcc3a,	// (0x000461cb) cursor_press_pane_g1

0x0002,

0xfb0f,	// (0x000490a0) fep_vkb_side_pane_g_ParamLimits

0x0c88,	// (0x0003a219) fep_hwr_candidate_pane_ParamLimits

0x0c88,	// (0x0003a219) fep_hwr_candidate_pane

0x0cb2,	// (0x0003a243) fep_hwr_side_pane_ParamLimits

0x0cb2,	// (0x0003a243) fep_hwr_side_pane

0x0cd2,	// (0x0003a263) fep_hwr_top_pane_ParamLimits

0x0cd2,	// (0x0003a263) fep_hwr_top_pane

0x0cea,	// (0x0003a27b) fep_hwr_write_pane_ParamLimits

0x0cea,	// (0x0003a27b) fep_hwr_write_pane

0xfb0f,	// (0x000490a0) fep_vkb_side_pane_g

0x46e3,	// (0x0003dc74) fep_hwr_top_pane_g1

0x46f5,	// (0x0003dc86) fep_hwr_top_pane_g2

0x0d24,	// (0x0003a2b5) fep_hwr_top_pane_g3

0x0002,

0xfaeb,	// (0x0004907c) fep_hwr_top_pane_g

0x0d39,	// (0x0003a2ca) fep_hwr_top_text_pane

0xbde0,	// (0x00045371) fep_hwr_top_text_pane_g1

0x472b,	// (0x0003dcbc) fep_hwr_top_text_pane_t1

0x0e2f,	// (0x0003a3c0) fep_hwr_candidate_pane_g1

0x4970,	// (0x0003df01) fep_vkb_keypad_pane_g3_ParamLimits

0x4970,	// (0x0003df01) fep_vkb_keypad_pane_g3

0x4998,	// (0x0003df29) fep_vkb_keypad_pane_g4_ParamLimits

0x4998,	// (0x0003df29) fep_vkb_keypad_pane_g4

0x4a07,	// (0x0003df98) fep_vkb_bottom_pane_g2_ParamLimits

0x4a07,	// (0x0003df98) fep_vkb_bottom_pane_g2

0x0001,

0xfb16,	// (0x000490a7) fep_vkb_bottom_pane_g_ParamLimits

0xfb16,	// (0x000490a7) fep_vkb_bottom_pane_g

0x4687,	// (0x0003dc18) cell_vkb_side_pane_g2

0x0001,

0xfb20,	// (0x000490b1) cell_vkb_side_pane_g

0x4a92,	// (0x0003e023) cell_vkb_side_pane_t1

0x4aa0,	// (0x0003e031) cell_vkb_side_pane_t1_copy1

0x4687,	// (0x0003dc18) bg_fep_vkb_candidate_pane_g2

0x4bcc,	// (0x0003e15d) cell_vkb_candidate_pane_ParamLimits

0x4739,	// (0x0003dcca) aid_size_cell_vkb_ParamLimits

0x4739,	// (0x0003dcca) aid_size_cell_vkb

0x4bcc,	// (0x0003e15d) cell_vkb_candidate_pane

0x0e56,	// (0x0003a3e7) bg_popup_fep_shadow_pane_g1

0xcc54,	// (0x000461e5) fep_vkb_bottom_pane_ParamLimits

0xcc54,	// (0x000461e5) fep_vkb_bottom_pane

0x47fd,	// (0x0003dd8e) fep_vkb_candidate_pane_ParamLimits

0x47fd,	// (0x0003dd8e) fep_vkb_candidate_pane

0xcc79,	// (0x0004620a) fep_vkb_keypad_pane_ParamLimits

0xcc79,	// (0x0004620a) fep_vkb_keypad_pane

0xccae,	// (0x0004623f) fep_vkb_side_pane_ParamLimits

0xccae,	// (0x0004623f) fep_vkb_side_pane

0xccea,	// (0x0004627b) fep_vkb_top_pane_ParamLimits

0xccea,	// (0x0004627b) fep_vkb_top_pane

0x48c9,	// (0x0003de5a) fep_vkb_top_pane_g1_ParamLimits

0x48c9,	// (0x0003de5a) fep_vkb_top_pane_g1

0x48d8,	// (0x0003de69) fep_vkb_top_pane_g2_ParamLimits

0x48d8,	// (0x0003de69) fep_vkb_top_pane_g2

0x48e7,	// (0x0003de78) fep_vkb_top_pane_g3_ParamLimits

0x48e7,	// (0x0003de78) fep_vkb_top_pane_g3

0x0003,

0xfb06,	// (0x00049097) fep_vkb_top_pane_g_ParamLimits

0xfb06,	// (0x00049097) fep_vkb_top_pane_g

0x4905,	// (0x0003de96) fep_vkb_top_text_pane_ParamLimits

0x4905,	// (0x0003de96) fep_vkb_top_text_pane

0xcd1f,	// (0x000462b0) fep_vkb_side_pane_g1_ParamLimits

0xcd1f,	// (0x000462b0) fep_vkb_side_pane_g1

0x495f,	// (0x0003def0) grid_vkb_side_pane_ParamLimits

0x495f,	// (0x0003def0) grid_vkb_side_pane

0x0e5e,	// (0x0003a3ef) bg_popup_fep_shadow_pane_g2

0x0e67,	// (0x0003a3f8) bg_popup_fep_shadow_pane_g3

0x0e6f,	// (0x0003a400) bg_popup_fep_shadow_pane_g4

0x0e78,	// (0x0003a409) bg_popup_fep_shadow_pane_g5

0x0e82,	// (0x0003a413) bg_popup_fep_shadow_pane_g6

0x0e8a,	// (0x0003a41b) bg_popup_fep_shadow_pane_g7

0xb9fe,	// (0x00044f8f) bg_popup_fep_shadow_pane_g8

0x49b6,	// (0x0003df47) grid_vkb_keypad_number_pane_ParamLimits

0x49b6,	// (0x0003df47) grid_vkb_keypad_number_pane

0x49c6,	// (0x0003df57) grid_vkb_keypad_pane_ParamLimits

0x49c6,	// (0x0003df57) grid_vkb_keypad_pane

0x49ec,	// (0x0003df7d) fep_vkb_bottom_pane_g1_ParamLimits

0x49ec,	// (0x0003df7d) fep_vkb_bottom_pane_g1

0x4a15,	// (0x0003dfa6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4a15,	// (0x0003dfa6) grid_vkb_keypad_bottom_left_pane

0x4a2a,	// (0x0003dfbb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4a2a,	// (0x0003dfbb) grid_vkb_keypad_bottom_right_pane

0x4a3f,	// (0x0003dfd0) fep_vkb_top_text_pane_g1

0xcd66,	// (0x000462f7) fep_vkb_top_text_pane_t1

0xcd78,	// (0x00046309) cell_vkb_side_pane_ParamLimits

0xcd78,	// (0x00046309) cell_vkb_side_pane

0x4687,	// (0x0003dc18) cell_vkb_side_pane_g1

0x4aae,	// (0x0003e03f) cell_vkb_keypad_pane_ParamLimits

0x4aae,	// (0x0003e03f) cell_vkb_keypad_pane

0x4b23,	// (0x0003e0b4) cell_vkb_keypad_pane_g1

0x0008,

0xfb33,	// (0x000490c4) bg_popup_fep_shadow_pane_g

0x0e9c,	// (0x0003a42d) cell_hwr_side_pane_g1

0x0e9c,	// (0x0003a42d) cell_hwr_side_pane_g2

0x4b2d,	// (0x0003e0be) cell_vkb_keypad_pane_t1

0xcd8e,	// (0x0004631f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd8e,	// (0x0004631f) cell_vkb_keypad_bottom_left_pane

0xcda3,	// (0x00046334) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcda3,	// (0x00046334) cell_vkb_keypad_bottom_right_pane

0x4687,	// (0x0003dc18) cell_vkb_keypad_bottom_left_pane_g1

0x4687,	// (0x0003dc18) cell_vkb_keypad_bottom_right_pane_g1

0x4b91,	// (0x0003e122) cell_vkb_keypad_number_pane_ParamLimits

0x4b91,	// (0x0003e122) cell_vkb_keypad_number_pane

0x4bb0,	// (0x0003e141) cell_vkb_keypad_number_pane_g1

0x4bba,	// (0x0003e14b) cell_vkb_keypad_number_pane_g2

0x4bc3,	// (0x0003e154) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb25,	// (0x000490b6) cell_vkb_keypad_number_pane_g

0x4b2d,	// (0x0003e0be) cell_vkb_keypad_number_pane_t1

0x4be7,	// (0x0003e178) fep_vkb_candidate_pane_g1

0x0001,

0xfb46,	// (0x000490d7) cell_hwr_side_pane_g

0x4c00,	// (0x0003e191) cell_hwr_side_pane_t1

0x0ea6,	// (0x0003a437) cell_hwr_side_pane_t1_copy1

0x0eb4,	// (0x0003a445) cell_hwr_candidate_pane_g1

0x0ee3,	// (0x0003a474) cell_hwr_candidate_pane_t1

0x4687,	// (0x0003dc18) cell_vkb_candidate_pane_g2

0x4c65,	// (0x0003e1f6) cell_vkb_candidate_pane_t1

0x0c4f,	// (0x0003a1e0) bg_popup_fep_shadow_pane_ParamLimits

0x0c4f,	// (0x0003a1e0) bg_popup_fep_shadow_pane

0x0d04,	// (0x0003a295) bg_fep_hwr_top_pane_g4

0x4707,	// (0x0003dc98) bg_hwr_side_pane_g1_ParamLimits

0x4707,	// (0x0003dc98) bg_hwr_side_pane_g1

0xabf5,	// (0x00044186) cell_hwr_side_pane_ParamLimits

0xabf5,	// (0x00044186) cell_hwr_side_pane

0x0db0,	// (0x0003a341) fep_hwr_write_pane_g1_ParamLimits

0x0db0,	// (0x0003a341) fep_hwr_write_pane_g1

0x0dbd,	// (0x0003a34e) fep_hwr_write_pane_g2_ParamLimits

0x0dbd,	// (0x0003a34e) fep_hwr_write_pane_g2

0x0dca,	// (0x0003a35b) fep_hwr_write_pane_g3_ParamLimits

0x0dca,	// (0x0003a35b) fep_hwr_write_pane_g3

0xac15,	// (0x000441a6) fep_hwr_write_pane_g4_ParamLimits

0xac15,	// (0x000441a6) fep_hwr_write_pane_g4

0x0005,

0xfaf2,	// (0x00049083) fep_hwr_write_pane_g_ParamLimits

0xfaf2,	// (0x00049083) fep_hwr_write_pane_g

0x0d04,	// (0x0003a295) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0d04,	// (0x0003a295) bg_fep_hwr_candidate_pane_g2

0x0ded,	// (0x0003a37e) cell_hwr_candidate_pane_ParamLimits

0x0ded,	// (0x0003a37e) cell_hwr_candidate_pane

0x0e2f,	// (0x0003a3c0) fep_hwr_candidate_pane_g1_ParamLimits

0x4767,	// (0x0003dcf8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4767,	// (0x0003dcf8) bg_popup_fep_shadow_pane_cp2

0x48f7,	// (0x0003de88) fep_vkb_top_pane_g4_ParamLimits

0x48f7,	// (0x0003de88) fep_vkb_top_pane_g4

0x493d,	// (0x0003dece) fep_vkb_side_pane_g2_ParamLimits

0x493d,	// (0x0003dece) fep_vkb_side_pane_g2

0x8fa9,	// (0x0004253a) list_setting_pane_t4_ParamLimits

0x8fa9,	// (0x0004253a) list_setting_pane_t4

0xdf4e,	// (0x000474df) list_setting_number_pane_t5_ParamLimits

0xdf4e,	// (0x000474df) list_setting_number_pane_t5

0xbe17,	// (0x000453a8) list_double_heading_pane_cp2_ParamLimits

0xbe17,	// (0x000453a8) list_double_heading_pane_cp2

0xcdbe,	// (0x0004634f) list_double_heading_pane_g1_cp2_ParamLimits

0xcdbe,	// (0x0004634f) list_double_heading_pane_g1_cp2

0x4c73,	// (0x0003e204) list_double_heading_pane_g2_cp2_ParamLimits

0x4c73,	// (0x0003e204) list_double_heading_pane_g2_cp2

0x4c87,	// (0x0003e218) list_double_heading_pane_t1_cp2_ParamLimits

0x4c87,	// (0x0003e218) list_double_heading_pane_t1_cp2

0x4c9d,	// (0x0003e22e) list_double_heading_pane_t2_cp2_ParamLimits

0x4c9d,	// (0x0003e22e) list_double_heading_pane_t2_cp2

0xb560,	// (0x00044af1) aid_value_unit2

0xdd8c,	// (0x0004731d) popup_preview_fixed_window

0xb702,	// (0x00044c93) bg_popup_preview_window_pane_cp02

0x4caf,	// (0x0003e240) list_preview_fixed_pane

0x4cf5,	// (0x0003e286) list_empty_pane_fp_ParamLimits

0x4cf5,	// (0x0003e286) list_empty_pane_fp

0x4cf5,	// (0x0003e286) list_single_cale_day_pane_fp_ParamLimits

0x4cf5,	// (0x0003e286) list_single_cale_day_pane_fp

0x4cf5,	// (0x0003e286) list_single_graphic_heading_pane_fp_ParamLimits

0x4cf5,	// (0x0003e286) list_single_graphic_heading_pane_fp

0x4cf5,	// (0x0003e286) list_single_graphic_pane_fp_ParamLimits

0x4cf5,	// (0x0003e286) list_single_graphic_pane_fp

0x4cf5,	// (0x0003e286) list_single_heading_pane_fp_ParamLimits

0x4cf5,	// (0x0003e286) list_single_heading_pane_fp

0x4cf5,	// (0x0003e286) list_single_pane_fp_ParamLimits

0x4cf5,	// (0x0003e286) list_single_pane_fp

0x4d0b,	// (0x0003e29c) list_single_pane_fp_g1_ParamLimits

0x4d0b,	// (0x0003e29c) list_single_pane_fp_g1

0xde82,	// (0x00047413) list_single_pane_fp_g2_ParamLimits

0xde82,	// (0x00047413) list_single_pane_fp_g2

0xe496,	// (0x00047a27) list_single_pane_fp_g3_ParamLimits

0xe496,	// (0x00047a27) list_single_pane_fp_g3

0x4d17,	// (0x0003e2a8) list_single_pane_fp_g4_ParamLimits

0x4d17,	// (0x0003e2a8) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x000490ea) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x000490ea) list_single_pane_fp_g

0xe4aa,	// (0x00047a3b) list_single_pane_fp_t1_ParamLimits

0xe4aa,	// (0x00047a3b) list_single_pane_fp_t1

0xe4c1,	// (0x00047a52) list_single_graphic_pane_fp_g1_ParamLimits

0xe4c1,	// (0x00047a52) list_single_graphic_pane_fp_g1

0x4d0b,	// (0x0003e29c) list_single_graphic_pane_fp_g2_ParamLimits

0x4d0b,	// (0x0003e29c) list_single_graphic_pane_fp_g2

0xde82,	// (0x00047413) list_single_graphic_pane_fp_g3_ParamLimits

0xde82,	// (0x00047413) list_single_graphic_pane_fp_g3

0xe496,	// (0x00047a27) list_single_graphic_pane_fp_g4_ParamLimits

0xe496,	// (0x00047a27) list_single_graphic_pane_fp_g4

0x4d17,	// (0x0003e2a8) list_single_graphic_pane_fp_g5_ParamLimits

0x4d17,	// (0x0003e2a8) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x000490f3) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x000490f3) list_single_graphic_pane_fp_g

0xe4cd,	// (0x00047a5e) list_single_graphic_pane_fp_t1_ParamLimits

0xe4cd,	// (0x00047a5e) list_single_graphic_pane_fp_t1

0xe4c1,	// (0x00047a52) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe4c1,	// (0x00047a52) list_single_graphic_heading_pane_fp_g1

0x4d0b,	// (0x0003e29c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4d0b,	// (0x0003e29c) list_single_graphic_heading_pane_fp_g2

0xde82,	// (0x00047413) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xde82,	// (0x00047413) list_single_graphic_heading_pane_fp_g3

0xe496,	// (0x00047a27) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe496,	// (0x00047a27) list_single_graphic_heading_pane_fp_g4

0x4d17,	// (0x0003e2a8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4d17,	// (0x0003e2a8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x000490f3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x000490f3) list_single_graphic_heading_pane_fp_g

0xe4e3,	// (0x00047a74) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe4e3,	// (0x00047a74) list_single_graphic_heading_pane_fp_t1

0xe4f9,	// (0x00047a8a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe4f9,	// (0x00047a8a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x000490fe) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x000490fe) list_single_graphic_heading_pane_fp_t

0xe50b,	// (0x00047a9c) list_single_cale_day_pane_fp_g1_ParamLimits

0xe50b,	// (0x00047a9c) list_single_cale_day_pane_fp_g1

0x4d23,	// (0x0003e2b4) list_single_cale_day_pane_fp_g2_ParamLimits

0x4d23,	// (0x0003e2b4) list_single_cale_day_pane_fp_g2

0xe543,	// (0x00047ad4) list_single_cale_day_pane_fp_g3_ParamLimits

0xe543,	// (0x00047ad4) list_single_cale_day_pane_fp_g3

0xe56b,	// (0x00047afc) list_single_cale_day_pane_fp_g4_ParamLimits

0xe56b,	// (0x00047afc) list_single_cale_day_pane_fp_g4

0xe58f,	// (0x00047b20) list_single_cale_day_pane_fp_g5_ParamLimits

0xe58f,	// (0x00047b20) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x00049103) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x00049103) list_single_cale_day_pane_fp_g

0xe5b3,	// (0x00047b44) list_single_cale_day_pane_fp_t1_ParamLimits

0xe5b3,	// (0x00047b44) list_single_cale_day_pane_fp_t1

0xe5d9,	// (0x00047b6a) list_single_cale_day_pane_fp_t2_ParamLimits

0xe5d9,	// (0x00047b6a) list_single_cale_day_pane_fp_t2

0xe5f2,	// (0x00047b83) list_single_cale_day_pane_fp_t3_ParamLimits

0xe5f2,	// (0x00047b83) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x0004910e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x0004910e) list_single_cale_day_pane_fp_t

0x4d0b,	// (0x0003e29c) list_empty_pane_fp_g1_ParamLimits

0x4d0b,	// (0x0003e29c) list_empty_pane_fp_g1

0xe60b,	// (0x00047b9c) list_empty_pane_fp_t1

0xe619,	// (0x00047baa) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x00049115) list_empty_pane_fp_t

0x4d0b,	// (0x0003e29c) list_single_heading_pane_fp_g1_ParamLimits

0x4d0b,	// (0x0003e29c) list_single_heading_pane_fp_g1

0xde82,	// (0x00047413) list_single_heading_pane_fp_g2_ParamLimits

0xde82,	// (0x00047413) list_single_heading_pane_fp_g2

0xe496,	// (0x00047a27) list_single_heading_pane_fp_g3_ParamLimits

0xe496,	// (0x00047a27) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x0004911a) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0004911a) list_single_heading_pane_fp_g

0xe627,	// (0x00047bb8) list_single_heading_pane_fp_t1_ParamLimits

0xe627,	// (0x00047bb8) list_single_heading_pane_fp_t1

0xe639,	// (0x00047bca) list_single_heading_pane_fp_t2_ParamLimits

0xe639,	// (0x00047bca) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x00049121) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x00049121) list_single_heading_pane_fp_t

0x92f0,	// (0x00042881) aid_size_cell_fast

0xb6e5,	// (0x00044c76) soft_indicator_pane_cp1_t1

0x92f9,	// (0x0004288a) cell_app_pane_cp2_ParamLimits

0x92f9,	// (0x0004288a) cell_app_pane_cp2

0x0c71,	// (0x0003a202) fep_hwr_candidate_drop_down_list_pane

0x0e49,	// (0x0003a3da) fep_hwr_candidate_pane_g3_ParamLimits

0x0e49,	// (0x0003a3da) fep_hwr_candidate_pane_g3

0xe489,	// (0x00047a1a) fep_hwr_candidate_pane_g4_ParamLimits

0xe489,	// (0x00047a1a) fep_hwr_candidate_pane_g4

0x0002,

0xfaff,	// (0x00049090) fep_hwr_candidate_pane_g_ParamLimits

0xfaff,	// (0x00049090) fep_hwr_candidate_pane_g

0x47ec,	// (0x0003dd7d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x47ec,	// (0x0003dd7d) fep_vkb_candidate_drop_down_list_pane

0x4bef,	// (0x0003e180) fep_vkb_candidate_pane_g3

0x4bf7,	// (0x0003e188) fep_vkb_candidate_pane_g4

0x0002,

0xfb2c,	// (0x000490bd) fep_vkb_candidate_pane_g

0x0eb4,	// (0x0003a445) cell_hwr_candidate_pane_g1_ParamLimits

0x0ec2,	// (0x0003a453) cell_hwr_candidate_pane_g3_ParamLimits

0x0ec2,	// (0x0003a453) cell_hwr_candidate_pane_g3

0x4c0e,	// (0x0003e19f) cell_hwr_candidate_pane_g4_ParamLimits

0x4c0e,	// (0x0003e19f) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x000490dc) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x000490dc) cell_hwr_candidate_pane_g

0x4c2f,	// (0x0003e1c0) cell_vkb_candidate_pane_g3_ParamLimits

0x4c2f,	// (0x0003e1c0) cell_vkb_candidate_pane_g3

0x4c4a,	// (0x0003e1db) cell_vkb_candidate_pane_g4_ParamLimits

0x4c4a,	// (0x0003e1db) cell_vkb_candidate_pane_g4

0xcdca,	// (0x0004635b) cell_app_pane_cp2_g1_ParamLimits

0xcdca,	// (0x0004635b) cell_app_pane_cp2_g1

0x4d4d,	// (0x0003e2de) cell_app_pane_cp2_g2_ParamLimits

0x4d4d,	// (0x0003e2de) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x00049126) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x00049126) cell_app_pane_cp2_g

0x4d59,	// (0x0003e2ea) cell_app_pane_cp2_t1_ParamLimits

0x4d59,	// (0x0003e2ea) cell_app_pane_cp2_t1

0xb98e,	// (0x00044f1f) grid_highlight_pane_cp1_ParamLimits

0xb98e,	// (0x00044f1f) grid_highlight_pane_cp1

0x0f01,	// (0x0003a492) cell_hwr_candidate_pane_cp1_ParamLimits

0x0f01,	// (0x0003a492) cell_hwr_candidate_pane_cp1

0x0eb4,	// (0x0003a445) fep_hwr_candidate_drop_down_list_pane_g1

0x0f20,	// (0x0003a4b1) fep_hwr_candidate_drop_down_list_pane_g2

0x0f2d,	// (0x0003a4be) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0004912b) fep_hwr_candidate_drop_down_list_pane_g

0x0f3a,	// (0x0003a4cb) fep_hwr_candidate_drop_down_list_scroll_pane

0x0f43,	// (0x0003a4d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0f43,	// (0x0003a4d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f50,	// (0x0003a4e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f50,	// (0x0003a4e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0f5d,	// (0x0003a4ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0f5d,	// (0x0003a4ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0f6a,	// (0x0003a4fb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0f6a,	// (0x0003a4fb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0f85,	// (0x0003a516) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0f85,	// (0x0003a516) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0fa0,	// (0x0003a531) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0fa0,	// (0x0003a531) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0fbb,	// (0x0003a54c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0fbb,	// (0x0003a54c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0fd6,	// (0x0003a567) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0fd6,	// (0x0003a567) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x00049132) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x00049132) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4d6b,	// (0x0003e2fc) cell_vkb_candidate_pane_cp1_ParamLimits

0x4d6b,	// (0x0003e2fc) cell_vkb_candidate_pane_cp1

0x48f7,	// (0x0003de88) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x48f7,	// (0x0003de88) fep_vkb_candidate_drop_down_list_pane_g1

0x4d8b,	// (0x0003e31c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4d8b,	// (0x0003e31c) fep_vkb_candidate_drop_down_list_pane_g2

0x4d98,	// (0x0003e329) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4d98,	// (0x0003e329) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x00049143) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x00049143) fep_vkb_candidate_drop_down_list_pane_g

0x4da5,	// (0x0003e336) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4da5,	// (0x0003e336) fep_vkb_candidate_drop_down_list_scroll_pane

0x4db2,	// (0x0003e343) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4db2,	// (0x0003e343) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4dbf,	// (0x0003e350) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4dbf,	// (0x0003e350) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4dcb,	// (0x0003e35c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4dcb,	// (0x0003e35c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4dd7,	// (0x0003e368) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4dd7,	// (0x0003e368) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4df8,	// (0x0003e389) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4df8,	// (0x0003e389) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4e19,	// (0x0003e3aa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4e19,	// (0x0003e3aa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4e3a,	// (0x0003e3cb) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4e3a,	// (0x0003e3cb) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4e5b,	// (0x0003e3ec) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4e5b,	// (0x0003e3ec) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0004914a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0004914a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x87a0,	// (0x00041d31) title_pane_g1_ParamLimits

0x87b3,	// (0x00041d44) title_pane_g2_ParamLimits

0xf529,	// (0x00048aba) title_pane_g_ParamLimits

0xbdd0,	// (0x00045361) aid_call2_pane

0xbdd8,	// (0x00045369) aid_call_pane

0xbde0,	// (0x00045371) popup_clock_analogue_window_g1

0xbde0,	// (0x00045371) popup_clock_analogue_window_g2

0xf228,	// (0x000487b9) popup_clock_analogue_window_g3

0xf231,	// (0x000487c2) popup_clock_analogue_window_g4

0xb572,	// (0x00044b03) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x00048c55) popup_clock_analogue_window_g

0xf239,	// (0x000487ca) popup_clock_analogue_window_t1

0xf247,	// (0x000487d8) clock_digital_number_pane_ParamLimits

0xf247,	// (0x000487d8) clock_digital_number_pane

0xf253,	// (0x000487e4) clock_digital_number_pane_cp02_ParamLimits

0xf253,	// (0x000487e4) clock_digital_number_pane_cp02

0xf25f,	// (0x000487f0) clock_digital_number_pane_cp03_ParamLimits

0xf25f,	// (0x000487f0) clock_digital_number_pane_cp03

0xf26b,	// (0x000487fc) clock_digital_number_pane_cp04_ParamLimits

0xf26b,	// (0x000487fc) clock_digital_number_pane_cp04

0xf277,	// (0x00048808) clock_digital_separator_pane_ParamLimits

0xf277,	// (0x00048808) clock_digital_separator_pane

0xf283,	// (0x00048814) popup_clock_digital_window_t1_ParamLimits

0xf283,	// (0x00048814) popup_clock_digital_window_t1

0xb572,	// (0x00044b03) clock_digital_number_pane_g1

0xb572,	// (0x00044b03) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x00048c60) clock_digital_number_pane_g

0xb572,	// (0x00044b03) clock_digital_separator_pane_g1

0xb572,	// (0x00044b03) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x00048c60) clock_digital_separator_pane_g

0xa194,	// (0x00043725) aid_fill_nsta_ParamLimits

0xa2ca,	// (0x0004385b) indicator_nsta_pane_ParamLimits

0x0608,	// (0x00039b99) popup_clock_analogue_window

0x0608,	// (0x00039b99) popup_clock_digital_window

0xc9f6,	// (0x00045f87) grid_indicator_nsta_pane_ParamLimits

0x407d,	// (0x0003d60e) clock_nsta_pane_t2

0x0001,

0xfa7f,	// (0x00049010) clock_nsta_pane_t

0xf209,	// (0x0004879a) aid_size_max_handle

0x93d7,	// (0x00042968) aid_size_min_handle

0xc24a,	// (0x000457db) editor_scroll_pane

0x4e76,	// (0x0003e407) ex_editor_pane

0xbac0,	// (0x00045051) scroll_pane_cp13

0xb936,	// (0x00044ec7) scroll_pane_cp14

0xbe0f,	// (0x000453a0) scroll_pane_cp36

0x94a1,	// (0x00042a32) list_single_graphic_hl_pane_cp2_ParamLimits

0x94a1,	// (0x00042a32) list_single_graphic_hl_pane_cp2

0xab6e,	// (0x000440ff) list_single_graphic_hl_pane_ParamLimits

0xab6e,	// (0x000440ff) list_single_graphic_hl_pane

0xac2a,	// (0x000441bb) aid_size_min_hl_cp1

0x4e87,	// (0x0003e418) list_highlight_pane_cp34_ParamLimits

0x4e87,	// (0x0003e418) list_highlight_pane_cp34

0x4e98,	// (0x0003e429) list_single_graphic_hl_pane_g1_ParamLimits

0x4e98,	// (0x0003e429) list_single_graphic_hl_pane_g1

0xac33,	// (0x000441c4) list_single_graphic_hl_pane_g2_ParamLimits

0xac33,	// (0x000441c4) list_single_graphic_hl_pane_g2

0xac33,	// (0x000441c4) list_single_graphic_hl_pane_g3_ParamLimits

0xac33,	// (0x000441c4) list_single_graphic_hl_pane_g3

0xac3f,	// (0x000441d0) list_single_graphic_hl_pane_g4_ParamLimits

0xac3f,	// (0x000441d0) list_single_graphic_hl_pane_g4

0xac4b,	// (0x000441dc) list_single_graphic_hl_pane_g5_ParamLimits

0xac4b,	// (0x000441dc) list_single_graphic_hl_pane_g5

0x0004,

0xfbca,	// (0x0004915b) list_single_graphic_hl_pane_g_ParamLimits

0xfbca,	// (0x0004915b) list_single_graphic_hl_pane_g

0xac5f,	// (0x000441f0) list_single_graphic_hl_pane_t1_ParamLimits

0xac5f,	// (0x000441f0) list_single_graphic_hl_pane_t1

0x4ea5,	// (0x0003e436) aid_size_min_hl_cp2

0x4eae,	// (0x0003e43f) list_highlight_pane_cp34_cp2_ParamLimits

0x4eae,	// (0x0003e43f) list_highlight_pane_cp34_cp2

0x4e98,	// (0x0003e429) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4e98,	// (0x0003e429) list_single_graphic_hl_pane_g1_cp2

0x4ebb,	// (0x0003e44c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4ebb,	// (0x0003e44c) list_single_graphic_hl_pane_g2_cp2

0xcde8,	// (0x00046379) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcde8,	// (0x00046379) list_single_graphic_hl_pane_g3_cp2

0xc1a9,	// (0x0004573a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc1a9,	// (0x0004573a) list_single_graphic_hl_pane_g4_cp2

0x4ed5,	// (0x0003e466) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4ed5,	// (0x0003e466) list_single_graphic_hl_pane_g5_cp2

0x98b3,	// (0x00042e44) control_pane_g4_ParamLimits

0x98b3,	// (0x00042e44) control_pane_g4

0xbad0,	// (0x00045061) bg_popup_sub_pane_cp10_ParamLimits

0x4691,	// (0x0003dc22) list_choice_list_pane_ParamLimits

0x46a0,	// (0x0003dc31) scroll_pane_cp23

0xb702,	// (0x00044c93) bg_popup_preview_window_pane_cp02_ParamLimits

0x4caf,	// (0x0003e240) list_preview_fixed_pane_ParamLimits

0x4cc5,	// (0x0003e256) list_preview_fixed_pane_cp_ParamLimits

0x4cc5,	// (0x0003e256) list_preview_fixed_pane_cp

0x4cd1,	// (0x0003e262) popup_preview_fixed_window_g1_ParamLimits

0x4cd1,	// (0x0003e262) popup_preview_fixed_window_g1

0x4cdd,	// (0x0003e26e) popup_preview_fixed_window_g2_ParamLimits

0x4cdd,	// (0x0003e26e) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x000490e3) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x000490e3) popup_preview_fixed_window_g

0xf17d,	// (0x0004870e) aid_navi_side_left_pane_ParamLimits

0xf192,	// (0x00048723) aid_navi_side_right_pane_ParamLimits

0xf1aa,	// (0x0004873b) navi_icon_pane_stacon_ParamLimits

0xf1be,	// (0x0004874f) navi_navi_pane_stacon_ParamLimits

0xf1aa,	// (0x0004873b) navi_text_pane_stacon_ParamLimits

0xdcb1,	// (0x00047242) main_text_info_pane

0x4eff,	// (0x0003e490) listscroll_text_info_pane

0x4f07,	// (0x0003e498) list_text_info_pane_ParamLimits

0x4f07,	// (0x0003e498) list_text_info_pane

0x4f16,	// (0x0003e4a7) scroll_pane_cp24_ParamLimits

0x4f16,	// (0x0003e4a7) scroll_pane_cp24

0xcdf6,	// (0x00046387) list_text_info_pane_t1_ParamLimits

0xcdf6,	// (0x00046387) list_text_info_pane_t1

0x9a5b,	// (0x00042fec) popup_fast_swap2_window_ParamLimits

0x9a5b,	// (0x00042fec) popup_fast_swap2_window

0x4f68,	// (0x0003e4f9) aid_size_cell_fast2

0xb568,	// (0x00044af9) bg_popup_window_pane_cp17

0x24d2,	// (0x0003ba63) heading_pane_cp2

0x24da,	// (0x0003ba6b) listscroll_fast2_pane

0x4f72,	// (0x0003e503) grid_fast2_pane

0x4f7c,	// (0x0003e50d) listscroll_fast2_pane_g1

0x4f84,	// (0x0003e515) listscroll_fast2_pane_g2

0x0001,

0xfbd5,	// (0x00049166) listscroll_fast2_pane_g

0xbac0,	// (0x00045051) scroll_pane_cp26

0x4f8e,	// (0x0003e51f) cell_fast2_pane_ParamLimits

0x4f8e,	// (0x0003e51f) cell_fast2_pane

0x4fa3,	// (0x0003e534) cell_fast2_pane_g1

0x4fac,	// (0x0003e53d) cell_fast2_pane_g2

0x4fb5,	// (0x0003e546) cell_fast2_pane_g3

0x0002,

0xfbda,	// (0x0004916b) cell_fast2_pane_g

0xb86d,	// (0x00044dfe) grid_highlight_pane_cp9

0xf4cd,	// (0x00048a5e) main_eswt_pane_ParamLimits

0xf4cd,	// (0x00048a5e) main_eswt_pane

0x4f2b,	// (0x0003e4bc) list_single_text_info_pane

0x4fbd,	// (0x0003e54e) eswt_ctrl_button_pane

0x4fbd,	// (0x0003e54e) eswt_ctrl_canvas_pane

0xce12,	// (0x000463a3) eswt_ctrl_combo_pane

0x4fbd,	// (0x0003e54e) eswt_ctrl_default_pane

0x4fbd,	// (0x0003e54e) eswt_ctrl_label_pane

0x4fcd,	// (0x0003e55e) eswt_ctrl_wait_pane

0xce1a,	// (0x000463ab) eswt_shell_pane

0xb568,	// (0x00044af9) listscroll_eswt_app_pane

0x4ff5,	// (0x0003e586) popup_eswt_tasktip_window_ParamLimits

0x4ff5,	// (0x0003e586) popup_eswt_tasktip_window

0x20df,	// (0x0003b670) bg_popup_window_pane_cp18

0x5006,	// (0x0003e597) eswt_control_pane_g1_ParamLimits

0x5006,	// (0x0003e597) eswt_control_pane_g1

0x5013,	// (0x0003e5a4) eswt_control_pane_g2_ParamLimits

0x5013,	// (0x0003e5a4) eswt_control_pane_g2

0x5020,	// (0x0003e5b1) eswt_control_pane_g3_ParamLimits

0x5020,	// (0x0003e5b1) eswt_control_pane_g3

0x502d,	// (0x0003e5be) eswt_control_pane_g4_ParamLimits

0x502d,	// (0x0003e5be) eswt_control_pane_g4

0x0003,

0xfbe1,	// (0x00049172) eswt_control_pane_g_ParamLimits

0xfbe1,	// (0x00049172) eswt_control_pane_g

0xb98e,	// (0x00044f1f) bg_button_pane_ParamLimits

0xb98e,	// (0x00044f1f) bg_button_pane

0xb882,	// (0x00044e13) common_borders_pane_copy2_ParamLimits

0xb882,	// (0x00044e13) common_borders_pane_copy2

0x503a,	// (0x0003e5cb) control_button_pane_g1_ParamLimits

0x503a,	// (0x0003e5cb) control_button_pane_g1

0x5046,	// (0x0003e5d7) control_button_pane_g2_ParamLimits

0x5046,	// (0x0003e5d7) control_button_pane_g2

0x5052,	// (0x0003e5e3) control_button_pane_g3_ParamLimits

0x5052,	// (0x0003e5e3) control_button_pane_g3

0x0002,

0xfbea,	// (0x0004917b) control_button_pane_g_ParamLimits

0xfbea,	// (0x0004917b) control_button_pane_g

0x5066,	// (0x0003e5f7) control_button_pane_t1

0x5074,	// (0x0003e605) control_button_pane_t2

0x0001,

0xfbf1,	// (0x00049182) control_button_pane_t

0x2053,	// (0x0003b5e4) bg_button_pane_g1

0x2063,	// (0x0003b5f4) bg_button_pane_g2

0x205b,	// (0x0003b5ec) bg_button_pane_g3

0x2073,	// (0x0003b604) bg_button_pane_g4

0x206b,	// (0x0003b5fc) bg_button_pane_g5

0x207b,	// (0x0003b60c) bg_button_pane_g6

0x2083,	// (0x0003b614) bg_button_pane_g7

0x2093,	// (0x0003b624) bg_button_pane_g8

0x208b,	// (0x0003b61c) bg_button_pane_g9

0x0008,

0xf82d,	// (0x00048dbe) bg_button_pane_g

0x464c,	// (0x0003dbdd) common_borders_pane_ParamLimits

0x464c,	// (0x0003dbdd) common_borders_pane

0x5006,	// (0x0003e597) eswt_control_pane_g1_copy1_ParamLimits

0x5006,	// (0x0003e597) eswt_control_pane_g1_copy1

0x5013,	// (0x0003e5a4) eswt_control_pane_g2_copy1_ParamLimits

0x5013,	// (0x0003e5a4) eswt_control_pane_g2_copy1

0x5020,	// (0x0003e5b1) eswt_control_pane_g3_copy1_ParamLimits

0x5020,	// (0x0003e5b1) eswt_control_pane_g3_copy1

0x502d,	// (0x0003e5be) eswt_control_pane_g4_copy1_ParamLimits

0x502d,	// (0x0003e5be) eswt_control_pane_g4_copy1

0x4687,	// (0x0003dc18) bg_eswt_ctrl_canvas_pane_g1

0x464c,	// (0x0003dbdd) common_borders_pane_cp2_ParamLimits

0x464c,	// (0x0003dbdd) common_borders_pane_cp2

0x464c,	// (0x0003dbdd) common_borders_pane_cp3_ParamLimits

0x464c,	// (0x0003dbdd) common_borders_pane_cp3

0x5082,	// (0x0003e613) separator_horizontal_pane

0x508a,	// (0x0003e61b) separator_vertical_pane

0x5006,	// (0x0003e597) eswt_control_pane_g1_copy2_ParamLimits

0x5006,	// (0x0003e597) eswt_control_pane_g1_copy2

0x5013,	// (0x0003e5a4) eswt_control_pane_g2_copy2_ParamLimits

0x5013,	// (0x0003e5a4) eswt_control_pane_g2_copy2

0x5020,	// (0x0003e5b1) eswt_control_pane_g3_copy2_ParamLimits

0x5020,	// (0x0003e5b1) eswt_control_pane_g3_copy2

0x502d,	// (0x0003e5be) eswt_control_pane_g4_copy2_ParamLimits

0x502d,	// (0x0003e5be) eswt_control_pane_g4_copy2

0xb568,	// (0x00044af9) common_borders_pane_cp4

0x5093,	// (0x0003e624) separator_horizontal_pane_g1

0x509c,	// (0x0003e62d) separator_horizontal_pane_g2

0x50a5,	// (0x0003e636) separator_horizontal_pane_g3

0x0002,

0xfbf6,	// (0x00049187) separator_horizontal_pane_g

0x5006,	// (0x0003e597) eswt_control_pane_g1_copy3_ParamLimits

0x5006,	// (0x0003e597) eswt_control_pane_g1_copy3

0x5013,	// (0x0003e5a4) eswt_control_pane_g2_copy3_ParamLimits

0x5013,	// (0x0003e5a4) eswt_control_pane_g2_copy3

0x5020,	// (0x0003e5b1) eswt_control_pane_g3_copy3_ParamLimits

0x5020,	// (0x0003e5b1) eswt_control_pane_g3_copy3

0x502d,	// (0x0003e5be) eswt_control_pane_g4_copy3_ParamLimits

0x502d,	// (0x0003e5be) eswt_control_pane_g4_copy3

0xb568,	// (0x00044af9) common_borders_pane_cp5

0x50ae,	// (0x0003e63f) separator_vertical_pane_g1

0x50b7,	// (0x0003e648) separator_vertical_pane_g2

0x50c0,	// (0x0003e651) separator_vertical_pane_g3

0x0002,

0xfbfd,	// (0x0004918e) separator_vertical_pane_g

0x5006,	// (0x0003e597) eswt_control_pane_g1_copy4_ParamLimits

0x5006,	// (0x0003e597) eswt_control_pane_g1_copy4

0x5013,	// (0x0003e5a4) eswt_control_pane_g2_copy4_ParamLimits

0x5013,	// (0x0003e5a4) eswt_control_pane_g2_copy4

0x5020,	// (0x0003e5b1) eswt_control_pane_g3_copy4_ParamLimits

0x5020,	// (0x0003e5b1) eswt_control_pane_g3_copy4

0x502d,	// (0x0003e5be) eswt_control_pane_g4_copy4_ParamLimits

0x502d,	// (0x0003e5be) eswt_control_pane_g4_copy4

0xce3a,	// (0x000463cb) eswt_ctrl_combo_button_pane

0xce42,	// (0x000463d3) eswt_ctrl_input_pane

0xce4a,	// (0x000463db) popup_choice_list_window_cp70

0xce52,	// (0x000463e3) eswt_ctrl_input_pane_t1

0xb568,	// (0x00044af9) input_focus_pane_cp70

0x464c,	// (0x0003dbdd) bg_button_pane_cp70_ParamLimits

0x464c,	// (0x0003dbdd) bg_button_pane_cp70

0xce60,	// (0x000463f1) eswt_ctrl_combo_button_pane_g1

0x50f7,	// (0x0003e688) wait_bar_pane_cp70

0x20df,	// (0x0003b670) bg_popup_window_pane_cp70_ParamLimits

0x20df,	// (0x0003b670) bg_popup_window_pane_cp70

0x50ff,	// (0x0003e690) popup_eswt_tasktip_window_t1

0x5115,	// (0x0003e6a6) wait_bar_pane_cp71_ParamLimits

0x5115,	// (0x0003e6a6) wait_bar_pane_cp71

0x5121,	// (0x0003e6b2) grid_eswt_app_pane

0xbcb3,	// (0x00045244) scroll_pane_cp70

0xce68,	// (0x000463f9) cell_eswt_app_pane_ParamLimits

0xce68,	// (0x000463f9) cell_eswt_app_pane

0xce92,	// (0x00046423) cell_eswt_app_pane_g1_ParamLimits

0xce92,	// (0x00046423) cell_eswt_app_pane_g1

0xcec1,	// (0x00046452) cell_eswt_app_pane_g2_ParamLimits

0xcec1,	// (0x00046452) cell_eswt_app_pane_g2

0x0001,

0xfc04,	// (0x00049195) cell_eswt_app_pane_g_ParamLimits

0xfc04,	// (0x00049195) cell_eswt_app_pane_g

0xcee5,	// (0x00046476) cell_eswt_app_pane_t1_ParamLimits

0xcee5,	// (0x00046476) cell_eswt_app_pane_t1

0x51df,	// (0x0003e770) grid_highlight_pane_cp70_ParamLimits

0x51df,	// (0x0003e770) grid_highlight_pane_cp70

0xc144,	// (0x000456d5) set_content_pane_g1

0x9845,	// (0x00042dd6) status_small_volume_pane

0xac75,	// (0x00044206) status_small_volume_pane_g1

0xac7d,	// (0x0004420e) volume_small2_pane

0xac86,	// (0x00044217) volume_small2_pane_g1

0xac8f,	// (0x00044220) volume_small2_pane_g2

0xac98,	// (0x00044229) volume_small2_pane_g3

0xaca1,	// (0x00044232) volume_small2_pane_g4

0xacaa,	// (0x0004423b) volume_small2_pane_g5

0xacb3,	// (0x00044244) volume_small2_pane_g6

0xacbc,	// (0x0004424d) volume_small2_pane_g7

0xacc5,	// (0x00044256) volume_small2_pane_g8

0xacce,	// (0x0004425f) volume_small2_pane_g9

0xacd7,	// (0x00044268) volume_small2_pane_g10

0x0009,

0xfc09,	// (0x0004919a) volume_small2_pane_g

0x4a3f,	// (0x0003dfd0) fep_vkb_top_text_pane_g1_ParamLimits

0xcd66,	// (0x000462f7) fep_vkb_top_text_pane_t1_ParamLimits

0x4ce9,	// (0x0003e27a) popup_preview_fixed_window_g3_ParamLimits

0x4ce9,	// (0x0003e27a) popup_preview_fixed_window_g3

0xa0d2,	// (0x00043663) popup_toolbar_trans_pane

0xc693,	// (0x00045c24) aid_height_set_list_ParamLimits

0x342e,	// (0x0003c9bf) aid_size_parent_ParamLimits

0xbad0,	// (0x00045061) list_highlight_pane_cp2_ParamLimits

0xc144,	// (0x000456d5) set_content_pane_g1_ParamLimits

0xc80e,	// (0x00045d9f) list_single_image_pane_ParamLimits

0xc80e,	// (0x00045d9f) list_single_image_pane

0xcf17,	// (0x000464a8) aid_size_cell_image_ParamLimits

0xcf17,	// (0x000464a8) aid_size_cell_image

0xcf24,	// (0x000464b5) grid_single_image_pane_ParamLimits

0xcf24,	// (0x000464b5) grid_single_image_pane

0xcf30,	// (0x000464c1) list_single_image_pane_g1_ParamLimits

0xcf30,	// (0x000464c1) list_single_image_pane_g1

0x5204,	// (0x0003e795) list_single_image_pane_g2_ParamLimits

0x5204,	// (0x0003e795) list_single_image_pane_g2

0x0001,

0xfc1e,	// (0x000491af) list_single_image_pane_g_ParamLimits

0xfc1e,	// (0x000491af) list_single_image_pane_g

0x5218,	// (0x0003e7a9) list_single_image_pane_t1_ParamLimits

0x5218,	// (0x0003e7a9) list_single_image_pane_t1

0xcf3c,	// (0x000464cd) cell_image_list_pane_ParamLimits

0xcf3c,	// (0x000464cd) cell_image_list_pane

0xcf50,	// (0x000464e1) cell_image_list_pane_g1

0xcf59,	// (0x000464ea) cell_image_list_pane_g2

0x0001,

0xfc23,	// (0x000491b4) cell_image_list_pane_g

0xcf62,	// (0x000464f3) aid_size_cell_tb_trans_pane

0xb98e,	// (0x00044f1f) bg_tb_trans_pane

0xcf74,	// (0x00046505) grid_tb_trans_pane

0x2053,	// (0x0003b5e4) bg_tb_trans_pane_g1

0x2063,	// (0x0003b5f4) bg_tb_trans_pane_g2

0x205b,	// (0x0003b5ec) bg_tb_trans_pane_g3

0x2073,	// (0x0003b604) bg_tb_trans_pane_g4

0x206b,	// (0x0003b5fc) bg_tb_trans_pane_g5

0x2093,	// (0x0003b624) bg_tb_trans_pane_g6

0x208b,	// (0x0003b61c) bg_tb_trans_pane_g7

0x207b,	// (0x0003b60c) bg_tb_trans_pane_g8

0x2083,	// (0x0003b614) bg_tb_trans_pane_g9

0x0008,

0xfc28,	// (0x000491b9) bg_tb_trans_pane_g

0xcf88,	// (0x00046519) cell_toolbar_trans_pane_ParamLimits

0xcf88,	// (0x00046519) cell_toolbar_trans_pane

0x4687,	// (0x0003dc18) cell_toolbar_trans_pane_g1

0xcabf,	// (0x00046050) list_form2_midp_pane_t1

0xcacd,	// (0x0004605e) list_form2_midp_pane_t2

0x0001,

0xfac5,	// (0x00049056) list_form2_midp_pane_t

0x426e,	// (0x0003d7ff) scroll_pane_cp51_ParamLimits

0x442a,	// (0x0003d9bb) form2_midp_wait_pane_g1

0x4433,	// (0x0003d9c4) form2_midp_wait_pane_g2

0x443c,	// (0x0003d9cd) form2_midp_wait_pane_g3

0x0002,

0xfada,	// (0x0004906b) form2_midp_wait_pane_g

0xb5d8,	// (0x00044b69) list_highlight_pane_cp21_ParamLimits

0x4484,	// (0x0003da15) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4493,	// (0x0003da24) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x35e2,	// (0x0003cb73) list_single_2graphic_im_pane_ParamLimits

0x35e2,	// (0x0003cb73) list_single_2graphic_im_pane

0xcfae,	// (0x0004653f) list_single_2graphic_im_pane_g1_ParamLimits

0xcfae,	// (0x0004653f) list_single_2graphic_im_pane_g1

0xcfbf,	// (0x00046550) list_single_2graphic_im_pane_g2_ParamLimits

0xcfbf,	// (0x00046550) list_single_2graphic_im_pane_g2

0xcfcb,	// (0x0004655c) list_single_2graphic_im_pane_g3_ParamLimits

0xcfcb,	// (0x0004655c) list_single_2graphic_im_pane_g3

0x0003,

0xfc3b,	// (0x000491cc) list_single_2graphic_im_pane_g_ParamLimits

0xfc3b,	// (0x000491cc) list_single_2graphic_im_pane_g

0xcfdf,	// (0x00046570) list_single_2graphic_im_pane_t1_ParamLimits

0xcfdf,	// (0x00046570) list_single_2graphic_im_pane_t1

0x4cf5,	// (0x0003e286) list_single_graphic_2heading_pane_fp_ParamLimits

0x4cf5,	// (0x0003e286) list_single_graphic_2heading_pane_fp

0xe4c1,	// (0x00047a52) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe4c1,	// (0x00047a52) list_single_graphic_2heading_pane_fp_g1

0x4d0b,	// (0x0003e29c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4d0b,	// (0x0003e29c) list_single_graphic_2heading_pane_fp_g2

0xde82,	// (0x00047413) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xde82,	// (0x00047413) list_single_graphic_2heading_pane_fp_g3

0xe496,	// (0x00047a27) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe496,	// (0x00047a27) list_single_graphic_2heading_pane_fp_g4

0x4d17,	// (0x0003e2a8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4d17,	// (0x0003e2a8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x000490f3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x000490f3) list_single_graphic_2heading_pane_fp_g

0xe64f,	// (0x00047be0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe64f,	// (0x00047be0) list_single_graphic_2heading_pane_fp_t1

0xe4f9,	// (0x00047a8a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe4f9,	// (0x00047a8a) list_single_graphic_2heading_pane_fp_t2

0xe665,	// (0x00047bf6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe665,	// (0x00047bf6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc44,	// (0x000491d5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc44,	// (0x000491d5) list_single_graphic_2heading_pane_fp_t

0x4713,	// (0x0003dca4) fep_hwr_write_pane_g5_ParamLimits

0x4713,	// (0x0003dca4) fep_hwr_write_pane_g5

0x471f,	// (0x0003dcb0) fep_hwr_write_pane_g6_ParamLimits

0x471f,	// (0x0003dcb0) fep_hwr_write_pane_g6

0xce1a,	// (0x000463ab) eswt_shell_pane_ParamLimits

0x20df,	// (0x0003b670) bg_popup_window_pane_cp18_ParamLimits

0x3376,	// (0x0003c907) heading_pane_cp70

0x50ff,	// (0x0003e690) popup_eswt_tasktip_window_t1_ParamLimits

0xa1ef,	// (0x00043780) aid_touch_tab_arrow_left

0xa205,	// (0x00043796) aid_touch_tab_arrow_right

0x87cb,	// (0x00041d5c) title_pane_g3_ParamLimits

0x87cb,	// (0x00041d5c) title_pane_g3

0xb956,	// (0x00044ee7) set_value_pane_g1

0xa0d2,	// (0x00043663) popup_toolbar_trans_pane_ParamLimits

0xcf62,	// (0x000464f3) aid_size_cell_tb_trans_pane_ParamLimits

0xb98e,	// (0x00044f1f) bg_tb_trans_pane_ParamLimits

0xcf74,	// (0x00046505) grid_tb_trans_pane_ParamLimits

0xb702,	// (0x00044c93) cont_note_pane_ParamLimits

0xb702,	// (0x00044c93) cont_note_pane

0xb882,	// (0x00044e13) cont_snote2_single_text_pane_ParamLimits

0xb882,	// (0x00044e13) cont_snote2_single_text_pane

0xb882,	// (0x00044e13) cont_snote2_single_graphic_pane_ParamLimits

0xb882,	// (0x00044e13) cont_snote2_single_graphic_pane

0x26f9,	// (0x0003bc8a) cont_note_wait_pane_ParamLimits

0x26f9,	// (0x0003bc8a) cont_note_wait_pane

0x26f9,	// (0x0003bc8a) cont_note_image_pane_ParamLimits

0x26f9,	// (0x0003bc8a) cont_note_image_pane

0x530e,	// (0x0003e89f) popup_note2_window_g1_ParamLimits

0x530e,	// (0x0003e89f) popup_note2_window_g1

0xd01d,	// (0x000465ae) popup_note2_window_t1_ParamLimits

0xd01d,	// (0x000465ae) popup_note2_window_t1

0xd062,	// (0x000465f3) popup_note2_window_t2_ParamLimits

0xd062,	// (0x000465f3) popup_note2_window_t2

0xd0a7,	// (0x00046638) popup_note2_window_t3_ParamLimits

0xd0a7,	// (0x00046638) popup_note2_window_t3

0x540e,	// (0x0003e99f) popup_note2_window_t4_ParamLimits

0x540e,	// (0x0003e99f) popup_note2_window_t4

0xb786,	// (0x00044d17) popup_note2_window_t5_ParamLimits

0xb786,	// (0x00044d17) popup_note2_window_t5

0x0004,

0xfc50,	// (0x000491e1) popup_note2_window_t_ParamLimits

0xfc50,	// (0x000491e1) popup_note2_window_t

0x543d,	// (0x0003e9ce) popup_note2_image_window_g1_ParamLimits

0x543d,	// (0x0003e9ce) popup_note2_image_window_g1

0xd0ec,	// (0x0004667d) popup_note2_image_window_g2_ParamLimits

0xd0ec,	// (0x0004667d) popup_note2_image_window_g2

0x0001,

0xfc5b,	// (0x000491ec) popup_note2_image_window_g_ParamLimits

0xfc5b,	// (0x000491ec) popup_note2_image_window_g

0x545b,	// (0x0003e9ec) popup_note2_image_window_t1_ParamLimits

0x545b,	// (0x0003e9ec) popup_note2_image_window_t1

0x5473,	// (0x0003ea04) popup_note2_image_window_t2_ParamLimits

0x5473,	// (0x0003ea04) popup_note2_image_window_t2

0x548b,	// (0x0003ea1c) popup_note2_image_window_t3_ParamLimits

0x548b,	// (0x0003ea1c) popup_note2_image_window_t3

0x0002,

0xfc60,	// (0x000491f1) popup_note2_image_window_t_ParamLimits

0xfc60,	// (0x000491f1) popup_note2_image_window_t

0x2707,	// (0x0003bc98) popup_note2_wait_window_g1_ParamLimits

0x2707,	// (0x0003bc98) popup_note2_wait_window_g1

0x2713,	// (0x0003bca4) popup_note2_wait_window_g2_ParamLimits

0x2713,	// (0x0003bca4) popup_note2_wait_window_g2

0x271f,	// (0x0003bcb0) popup_note2_wait_window_g3_ParamLimits

0x271f,	// (0x0003bcb0) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x00048da0) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x00048da0) popup_note2_wait_window_g

0x54a7,	// (0x0003ea38) popup_note2_wait_window_t1_ParamLimits

0x54a7,	// (0x0003ea38) popup_note2_wait_window_t1

0x54c5,	// (0x0003ea56) popup_note2_wait_window_t2_ParamLimits

0x54c5,	// (0x0003ea56) popup_note2_wait_window_t2

0x54e3,	// (0x0003ea74) popup_note2_wait_window_t3_ParamLimits

0x54e3,	// (0x0003ea74) popup_note2_wait_window_t3

0x54f5,	// (0x0003ea86) popup_note2_wait_window_t4_ParamLimits

0x54f5,	// (0x0003ea86) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x000491f8) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x000491f8) popup_note2_wait_window_t

0x5507,	// (0x0003ea98) wait_bar2_pane_ParamLimits

0x5507,	// (0x0003ea98) wait_bar2_pane

0x551f,	// (0x0003eab0) popup_snote2_single_text_window_g1_ParamLimits

0x551f,	// (0x0003eab0) popup_snote2_single_text_window_g1

0x5547,	// (0x0003ead8) popup_snote2_single_text_window_t1_ParamLimits

0x5547,	// (0x0003ead8) popup_snote2_single_text_window_t1

0x5593,	// (0x0003eb24) popup_snote2_single_text_window_t2_ParamLimits

0x5593,	// (0x0003eb24) popup_snote2_single_text_window_t2

0x55df,	// (0x0003eb70) popup_snote2_single_text_window_t3_ParamLimits

0x55df,	// (0x0003eb70) popup_snote2_single_text_window_t3

0x5620,	// (0x0003ebb1) popup_snote2_single_text_window_t4_ParamLimits

0x5620,	// (0x0003ebb1) popup_snote2_single_text_window_t4

0x5656,	// (0x0003ebe7) popup_snote2_single_text_window_t5_ParamLimits

0x5656,	// (0x0003ebe7) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x00049201) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x00049201) popup_snote2_single_text_window_t

0xd0fe,	// (0x0004668f) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0fe,	// (0x0004668f) popup_snote2_single_graphic_window_g1

0x56a9,	// (0x0003ec3a) popup_snote2_single_graphic_window_g2_ParamLimits

0x56a9,	// (0x0003ec3a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x0004920c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x0004920c) popup_snote2_single_graphic_window_g

0x56d1,	// (0x0003ec62) popup_snote2_single_graphic_window_t1_ParamLimits

0x56d1,	// (0x0003ec62) popup_snote2_single_graphic_window_t1

0x571d,	// (0x0003ecae) popup_snote2_single_graphic_window_t2_ParamLimits

0x571d,	// (0x0003ecae) popup_snote2_single_graphic_window_t2

0x55df,	// (0x0003eb70) popup_snote2_single_graphic_window_t3_ParamLimits

0x55df,	// (0x0003eb70) popup_snote2_single_graphic_window_t3

0x5620,	// (0x0003ebb1) popup_snote2_single_graphic_window_t4_ParamLimits

0x5620,	// (0x0003ebb1) popup_snote2_single_graphic_window_t4

0x5656,	// (0x0003ebe7) popup_snote2_single_graphic_window_t5_ParamLimits

0x5656,	// (0x0003ebe7) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x00049211) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x00049211) popup_snote2_single_graphic_window_t

0x412b,	// (0x0003d6bc) clock_nsta_pane_cp2_t1

0x412b,	// (0x0003d6bc) clock_nsta_pane_cp2_t2

0x0001,

0xfa9b,	// (0x0004902c) clock_nsta_pane_cp2_t

0x90d7,	// (0x00042668) form_field_data_wide_pane_g1_ParamLimits

0xb99c,	// (0x00044f2d) form_field_data_wide_pane_g2_ParamLimits

0xb99c,	// (0x00044f2d) form_field_data_wide_pane_g2

0xb9a8,	// (0x00044f39) form_field_data_wide_pane_g3_ParamLimits

0xb9a8,	// (0x00044f39) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x00048bd8) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x00048bd8) form_field_data_wide_pane_g

0xc9e0,	// (0x00045f71) grid_touch_3_pane_ParamLimits

0xc9e0,	// (0x00045f71) grid_touch_3_pane

0xd126,	// (0x000466b7) cell_touch_3_pane_ParamLimits

0xd126,	// (0x000466b7) cell_touch_3_pane

0x4687,	// (0x0003dc18) cell_touch_3_pane_g1

0x4687,	// (0x0003dc18) cell_touch_3_pane_g2

0x0001,

0xfb20,	// (0x000490b1) cell_touch_3_pane_g

0xb7b8,	// (0x00044d49) cont_query_data_pane

0xb7c0,	// (0x00044d51) cont_query_data_pane_cp1

0x5797,	// (0x0003ed28) button_value_adjust_pane_cp7

0x579f,	// (0x0003ed30) query_popup_pane_cp3

0xbe41,	// (0x000453d2) bg_popup_sub_pane_cp22_ParamLimits

0x9540,	// (0x00042ad1) navi_navi_volume_pane_cp2

0x954f,	// (0x00042ae0) popup_side_volume_key_window_g2

0x955e,	// (0x00042aef) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x00048c6e) popup_side_volume_key_window_g

0x956d,	// (0x00042afe) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x00048c75) popup_side_volume_key_window_t

0x968f,	// (0x00042c20) popup_side_volume_key_window_ParamLimits

0x8e9d,	// (0x0004242e) list_double_graphic_pane_g4_ParamLimits

0x8e9d,	// (0x0004242e) list_double_graphic_pane_g4

0xc7fa,	// (0x00045d8b) list_single_2heading_msg_pane_ParamLimits

0xc7fa,	// (0x00045d8b) list_single_2heading_msg_pane

0xace0,	// (0x00044271) list_single_2heading_msg_pane_g1_ParamLimits

0xace0,	// (0x00044271) list_single_2heading_msg_pane_g1

0xacec,	// (0x0004427d) list_single_2heading_msg_pane_g2_ParamLimits

0xacec,	// (0x0004427d) list_single_2heading_msg_pane_g2

0xacff,	// (0x00044290) list_single_2heading_msg_pane_g3_ParamLimits

0xacff,	// (0x00044290) list_single_2heading_msg_pane_g3

0xe685,	// (0x00047c16) list_single_2heading_msg_pane_g4_ParamLimits

0xe685,	// (0x00047c16) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x0004921c) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x0004921c) list_single_2heading_msg_pane_g

0xad0b,	// (0x0004429c) list_single_2heading_msg_pane_t1_ParamLimits

0xad0b,	// (0x0004429c) list_single_2heading_msg_pane_t1

0xad33,	// (0x000442c4) list_single_2heading_msg_pane_t2_ParamLimits

0xad33,	// (0x000442c4) list_single_2heading_msg_pane_t2

0xad9e,	// (0x0004432f) list_single_2heading_msg_pane_t3_ParamLimits

0xad9e,	// (0x0004432f) list_single_2heading_msg_pane_t3

0xe69d,	// (0x00047c2e) list_single_2heading_msg_pane_t4_ParamLimits

0xe69d,	// (0x00047c2e) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x00049225) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x00049225) list_single_2heading_msg_pane_t

0xb586,	// (0x00044b17) title_pane_g4_ParamLimits

0xb586,	// (0x00044b17) title_pane_g4

0xf0ce,	// (0x0004865f) title_pane_stacon_g3_ParamLimits

0xf0ce,	// (0x0004865f) title_pane_stacon_g3

0x52d1,	// (0x0003e862) list_single_2graphic_im_pane_g4_ParamLimits

0x52d1,	// (0x0003e862) list_single_2graphic_im_pane_g4

0xc540,	// (0x00045ad1) popup_side_volume_key_window_cp

0x395d,	// (0x0003ceee) main_idle_act2_pane_t1

0x0699,	// (0x00039c2a) toolbar_button_pane_g10

0x8dd7,	// (0x00042368) popup_toolbar_window_cp1

0x411c,	// (0x0003d6ad) clock_nsta_pane_cp_t1

0x411c,	// (0x0003d6ad) clock_nsta_pane_cp_t2

0x0001,

0xfa96,	// (0x00049027) clock_nsta_pane_cp_t

0x9540,	// (0x00042ad1) navi_navi_volume_pane_cp2_ParamLimits

0xf2a2,	// (0x00048833) popup_side_volume_key_window_g1_ParamLimits

0x954f,	// (0x00042ae0) popup_side_volume_key_window_g2_ParamLimits

0x955e,	// (0x00042aef) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x00048c6e) popup_side_volume_key_window_g_ParamLimits

0x0c5d,	// (0x0003a1ee) fep_hwr_aid_pane

0x0d04,	// (0x0003a295) bg_fep_hwr_top_pane_g4_ParamLimits

0x46e3,	// (0x0003dc74) fep_hwr_top_pane_g1_ParamLimits

0x46f5,	// (0x0003dc86) fep_hwr_top_pane_g2_ParamLimits

0x0d24,	// (0x0003a2b5) fep_hwr_top_pane_g3_ParamLimits

0xfaeb,	// (0x0004907c) fep_hwr_top_pane_g_ParamLimits

0x0d39,	// (0x0003a2ca) fep_hwr_top_text_pane_ParamLimits

0x2f03,	// (0x0003c494) aid_touch_tab_arrow_arrow_2

0x2f0c,	// (0x0003c49d) aid_touch_tab_arrow_left_2

0x0c71,	// (0x0003a202) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0ca8,	// (0x0003a239) fep_hwr_prediction_pane

0x484e,	// (0x0003dddf) fep_vkb_prediction_pane

0xcd46,	// (0x000462d7) fep_vkb_side_pane_g3_ParamLimits

0xcd46,	// (0x000462d7) fep_vkb_side_pane_g3

0x0eb4,	// (0x0003a445) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0f20,	// (0x0003a4b1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0f2d,	// (0x0003a4be) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x0004912b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1133,	// (0x0003a6c4) fep_hwr_prediction_pane_g1

0x113d,	// (0x0003a6ce) fep_hwr_prediction_pane_g2

0x1145,	// (0x0003a6d6) fep_hwr_prediction_pane_g3

0x114d,	// (0x0003a6de) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0004922e) fep_hwr_prediction_pane_g

0x57c4,	// (0x0003ed55) fep_vkb_prediction_pane_g1

0x57ce,	// (0x0003ed5f) fep_vkb_prediction_pane_g2

0x57d6,	// (0x0003ed67) fep_vkb_prediction_pane_g3

0x57de,	// (0x0003ed6f) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x00049237) fep_vkb_prediction_pane_g

0xaad4,	// (0x00044065) slider_set_pane_g3

0xaae8,	// (0x00044079) slider_set_pane_g4

0xab00,	// (0x00044091) slider_set_pane_g5

0xaad4,	// (0x00044065) slider_set_pane_g6

0xab16,	// (0x000440a7) slider_set_pane_g7

0x358f,	// (0x0003cb20) slider_form_pane_g3

0x3598,	// (0x0003cb29) slider_form_pane_g4

0x35a0,	// (0x0003cb31) slider_form_pane_g5

0x358f,	// (0x0003cb20) slider_form_pane_g6

0xc7de,	// (0x00045d6f) slider_form_pane_g7

0x3c09,	// (0x0003d19a) slider_set_pane_vc_g3

0x3c12,	// (0x0003d1a3) slider_set_pane_vc_g4

0x3c1b,	// (0x0003d1ac) slider_set_pane_vc_g5

0x3c09,	// (0x0003d19a) slider_set_pane_vc_g6

0x3c24,	// (0x0003d1b5) slider_set_pane_vc_g7

0x3dda,	// (0x0003d36b) slider_form_pane_vc_g1

0x3de3,	// (0x0003d374) slider_form_pane_vc_g2

0x3dec,	// (0x0003d37d) slider_form_pane_vc_g3

0x3dda,	// (0x0003d36b) slider_form_pane_vc_g4

0x3df5,	// (0x0003d386) slider_form_pane_vc_g5

0x0004,

0xfa68,	// (0x00048ff9) slider_form_pane_vc_g

0xdcb1,	// (0x00047242) main_idle_act3_pane

0x57e6,	// (0x0003ed77) ai3_links_pane

0xd16f,	// (0x00046700) popup_ai3_data_window_ParamLimits

0xd16f,	// (0x00046700) popup_ai3_data_window

0xb568,	// (0x00044af9) grid_ai3_links_pane

0xd187,	// (0x00046718) cell_ai3_links_pane_ParamLimits

0xd187,	// (0x00046718) cell_ai3_links_pane

0x581f,	// (0x0003edb0) bg_popup_sub_pane_cp11

0x582c,	// (0x0003edbd) cell_ai3_links_pane_g1

0xb568,	// (0x00044af9) bg_popup_sub_pane_cp12

0x5851,	// (0x0003ede2) heading_ai3_data_pane

0x5859,	// (0x0003edea) list_ai3_gene_pane

0x5865,	// (0x0003edf6) popup_ai3_data_window_g1

0x586d,	// (0x0003edfe) heading_ai3_data_pane_g1

0x5875,	// (0x0003ee06) heading_ai3_data_pane_t1

0xd1a1,	// (0x00046732) list_double_ai3_gene_pane_ParamLimits

0xd1a1,	// (0x00046732) list_double_ai3_gene_pane

0x5890,	// (0x0003ee21) list_single_ai3_gene_pane_ParamLimits

0x5890,	// (0x0003ee21) list_single_ai3_gene_pane

0x464c,	// (0x0003dbdd) list_highlight_pane_cp7_ParamLimits

0x464c,	// (0x0003dbdd) list_highlight_pane_cp7

0x589d,	// (0x0003ee2e) list_single_a13_gene_pane_t1_ParamLimits

0x589d,	// (0x0003ee2e) list_single_a13_gene_pane_t1

0x58b4,	// (0x0003ee45) list_single_ai3_gene_pane_g1

0x58bd,	// (0x0003ee4e) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x00049240) list_single_ai3_gene_pane_g

0x58c5,	// (0x0003ee56) list_double_ai3_gene_pane_g1_ParamLimits

0x58c5,	// (0x0003ee56) list_double_ai3_gene_pane_g1

0xd1ae,	// (0x0004673f) list_double_ai3_gene_pane_t1_ParamLimits

0xd1ae,	// (0x0004673f) list_double_ai3_gene_pane_t1

0x58ed,	// (0x0003ee7e) list_double_ai3_gene_pane_t2_ParamLimits

0x58ed,	// (0x0003ee7e) list_double_ai3_gene_pane_t2

0x5902,	// (0x0003ee93) list_double_ai3_gene_pane_t3_ParamLimits

0x5902,	// (0x0003ee93) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x00049245) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x00049245) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe67b,	// (0x00047c0c) aid_size_min_col_2

0xd159,	// (0x000466ea) aid_size_min_msg_ParamLimits

0xd159,	// (0x000466ea) aid_size_min_msg

0xcd5a,	// (0x000462eb) fep_vkb_top_text_pane_g2_ParamLimits

0xcd5a,	// (0x000462eb) fep_vkb_top_text_pane_g2

0x0001,

0xfb1b,	// (0x000490ac) fep_vkb_top_text_pane_g_ParamLimits

0xfb1b,	// (0x000490ac) fep_vkb_top_text_pane_g

0xdcb1,	// (0x00047242) main_hc_apps_shell_pane

0x591f,	// (0x0003eeb0) grid_hc_apps_pane_ParamLimits

0x591f,	// (0x0003eeb0) grid_hc_apps_pane

0x5931,	// (0x0003eec2) list_hc_apps_pane

0x5939,	// (0x0003eeca) scroll_pane_cp37_ParamLimits

0x5939,	// (0x0003eeca) scroll_pane_cp37

0xd1ca,	// (0x0004675b) cell_hc_apps_pane_ParamLimits

0xd1ca,	// (0x0004675b) cell_hc_apps_pane

0xd288,	// (0x00046819) cell_hc_apps_pane_g1_ParamLimits

0xd288,	// (0x00046819) cell_hc_apps_pane_g1

0x5a23,	// (0x0003efb4) cell_hc_apps_pane_g2_ParamLimits

0x5a23,	// (0x0003efb4) cell_hc_apps_pane_g2

0x5a3f,	// (0x0003efd0) cell_hc_apps_pane_g3_ParamLimits

0x5a3f,	// (0x0003efd0) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x0004924c) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x0004924c) cell_hc_apps_pane_g

0xd2b4,	// (0x00046845) cell_hc_apps_pane_t1_ParamLimits

0xd2b4,	// (0x00046845) cell_hc_apps_pane_t1

0xb702,	// (0x00044c93) grid_highlight_pane_cp10_ParamLimits

0xb702,	// (0x00044c93) grid_highlight_pane_cp10

0xd2f2,	// (0x00046883) list_single_hc_apps_pane_ParamLimits

0xd2f2,	// (0x00046883) list_single_hc_apps_pane

0xd322,	// (0x000468b3) list_single_hc_apps_pane_g1

0xae0c,	// (0x0004439d) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x00049253) list_single_hc_apps_pane_g

0xae25,	// (0x000443b6) list_single_hc_apps_pane_g2_copy1

0xae41,	// (0x000443d2) list_single_hc_apps_pane_t1

0xb5d8,	// (0x00044b69) bg_set_opt_pane_cp_ParamLimits

0x889f,	// (0x00041e30) setting_slider_pane_t1_ParamLimits

0x88b8,	// (0x00041e49) setting_slider_pane_t2_ParamLimits

0x88d2,	// (0x00041e63) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00048aca) setting_slider_pane_t_ParamLimits

0x88ea,	// (0x00041e7b) slider_set_pane_ParamLimits

0xf4a6,	// (0x00048a37) control_pane_g5_ParamLimits

0xf4a6,	// (0x00048a37) control_pane_g5

0xc660,	// (0x00045bf1) slider_set_pane_g1_ParamLimits

0x09c0,	// (0x00039f51) slider_set_pane_g2_ParamLimits

0xaad4,	// (0x00044065) slider_set_pane_g3_ParamLimits

0xaae8,	// (0x00044079) slider_set_pane_g4_ParamLimits

0xab00,	// (0x00044091) slider_set_pane_g5_ParamLimits

0xaad4,	// (0x00044065) slider_set_pane_g6_ParamLimits

0xab16,	// (0x000440a7) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x00048ebc) slider_set_pane_g_ParamLimits

0xc0ef,	// (0x00045680) navi_icon_text_pane_ParamLimits

0xa1b8,	// (0x00043749) aid_fill_nsta_2_ParamLimits

0xa1ef,	// (0x00043780) aid_touch_tab_arrow_left_ParamLimits

0xa205,	// (0x00043796) aid_touch_tab_arrow_right_ParamLimits

0xa2a0,	// (0x00043831) clock_nsta_pane_ParamLimits

0x2ee5,	// (0x0003c476) navi_icon_pane_g1_ParamLimits

0x2ef1,	// (0x0003c482) navi_text_pane_t1_ParamLimits

0x422c,	// (0x0003d7bd) navi_icon_text_pane_g1_ParamLimits

0x4238,	// (0x0003d7c9) navi_icon_text_pane_t1_ParamLimits

0xd322,	// (0x000468b3) list_single_hc_apps_pane_g1_ParamLimits

0xae0c,	// (0x0004439d) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x00049253) list_single_hc_apps_pane_g_ParamLimits

0xae25,	// (0x000443b6) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xae41,	// (0x000443d2) list_single_hc_apps_pane_t1_ParamLimits

0x86d0,	// (0x00041c61) popup_toolbar2_fixed_window_ParamLimits

0x86d0,	// (0x00041c61) popup_toolbar2_fixed_window

0xa0c8,	// (0x00043659) popup_toolbar2_float_window

0xb568,	// (0x00044af9) bg_popup_sub_pane_cp27

0x5b1d,	// (0x0003f0ae) grid_toolbar2_float_pane

0xb568,	// (0x00044af9) bg_popup_sub_pane_cp26

0x5b1d,	// (0x0003f0ae) grid_toolbar2_fixed_pane

0xd33b,	// (0x000468cc) cell_toolbar2_fixed_pane_ParamLimits

0xd33b,	// (0x000468cc) cell_toolbar2_fixed_pane

0xd355,	// (0x000468e6) cell_toolbar2_fixed_pane_g1

0x0141,	// (0x000396d2) toolbar2_fixed_button_pane

0x2053,	// (0x0003b5e4) toolbar2_fixed_button_pane_g1

0x2063,	// (0x0003b5f4) toolbar2_fixed_button_pane_g2

0x205b,	// (0x0003b5ec) toolbar2_fixed_button_pane_g3

0x2073,	// (0x0003b604) toolbar2_fixed_button_pane_g4

0x206b,	// (0x0003b5fc) toolbar2_fixed_button_pane_g5

0x207b,	// (0x0003b60c) toolbar2_fixed_button_pane_g6

0x2083,	// (0x0003b614) toolbar2_fixed_button_pane_g7

0x2093,	// (0x0003b624) toolbar2_fixed_button_pane_g8

0x208b,	// (0x0003b61c) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x00048dbe) toolbar2_fixed_button_pane_g

0x5b3e,	// (0x0003f0cf) cell_toolbar2_float_pane_ParamLimits

0x5b3e,	// (0x0003f0cf) cell_toolbar2_float_pane

0x5b4f,	// (0x0003f0e0) cell_toolbar2_float_pane_g1

0x0141,	// (0x000396d2) toolbar2_fixed_button_pane_cp

0xcc42,	// (0x000461d3) fep_vkb_accented_list_pane_ParamLimits

0xcc42,	// (0x000461d3) fep_vkb_accented_list_pane

0x0e94,	// (0x0003a425) bg_popup_fep_shadow_pane_g9

0xc24a,	// (0x000457db) bg_popup_fep_shadow_pane_cp3

0xbaa7,	// (0x00045038) list_accented_list_pane

0x5b58,	// (0x0003f0e9) list_single_accented_list_pane_ParamLimits

0x5b58,	// (0x0003f0e9) list_single_accented_list_pane

0xc24a,	// (0x000457db) list_highlight_pane_cp10

0x5b69,	// (0x0003f0fa) list_single_accented_list_pane_t1

0x9ff2,	// (0x00043583) popup_slider_window_ParamLimits

0x9ff2,	// (0x00043583) popup_slider_window

0x57a7,	// (0x0003ed38) aid_indentation_list_msg

0xd446,	// (0x000469d7) bg_popup_window_pane_cp19

0x5c8f,	// (0x0003f220) popup_slider_window_g1

0x5cab,	// (0x0003f23c) popup_slider_window_g2

0x5cc7,	// (0x0003f258) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x00049258) popup_slider_window_g

0x5d2d,	// (0x0003f2be) popup_slider_window_t1

0x5da1,	// (0x0003f332) small_volume_slider_vertical_pane

0x4687,	// (0x0003dc18) small_volume_slider_vertical_pane_g1

0x4687,	// (0x0003dc18) small_volume_slider_vertical_pane_g2

0x5dbd,	// (0x0003f34e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x0004926a) small_volume_slider_vertical_pane_g

0x861e,	// (0x00041baf) area_side_right_pane_ParamLimits

0x861e,	// (0x00041baf) area_side_right_pane

0xae6f,	// (0x00044400) aid_size_side_button_ParamLimits

0xae6f,	// (0x00044400) aid_size_side_button

0xae88,	// (0x00044419) grid_sctrl_middle_pane_ParamLimits

0xae88,	// (0x00044419) grid_sctrl_middle_pane

0x11eb,	// (0x0003a77c) sctrl_sk_bottom_pane

0x11fc,	// (0x0003a78d) sctrl_sk_top_pane

0x120e,	// (0x0003a79f) aid_touch_sctrl_top

0x121b,	// (0x0003a7ac) bg_sctrl_sk_pane_ParamLimits

0x121b,	// (0x0003a7ac) bg_sctrl_sk_pane

0x1229,	// (0x0003a7ba) sctrl_sk_top_pane_g1

0x1236,	// (0x0003a7c7) sctrl_sk_top_pane_t1

0x120e,	// (0x0003a79f) aid_touch_sctrl_bottom

0x121b,	// (0x0003a7ac) bg_sctrl_sk_pane_cp_ParamLimits

0x121b,	// (0x0003a7ac) bg_sctrl_sk_pane_cp

0x1251,	// (0x0003a7e2) sctrl_sk_bottom_pane_g1

0x1236,	// (0x0003a7c7) sctrl_sk_bottom_pane_t1

0xaea2,	// (0x00044433) cell_sctrl_middle_pane_ParamLimits

0xaea2,	// (0x00044433) cell_sctrl_middle_pane

0xaeb3,	// (0x00044444) aid_touch_sctrl_middle_ParamLimits

0xaeb3,	// (0x00044444) aid_touch_sctrl_middle

0xaec0,	// (0x00044451) bg_sctrl_middle_pane_ParamLimits

0xaec0,	// (0x00044451) bg_sctrl_middle_pane

0x18c1,	// (0x0003ae52) cell_sctrl_middle_pane_g1_ParamLimits

0x18c1,	// (0x0003ae52) cell_sctrl_middle_pane_g1

0xaece,	// (0x0004445f) cell_sctrl_middle_pane_g2_ParamLimits

0xaece,	// (0x0004445f) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x00049276) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x00049276) cell_sctrl_middle_pane_g

0x2053,	// (0x0003b5e4) bg_sctrl_middle_pane_g1

0x205b,	// (0x0003b5ec) bg_sctrl_middle_pane_g2

0x2063,	// (0x0003b5f4) bg_sctrl_middle_pane_g3

0x206b,	// (0x0003b5fc) bg_sctrl_middle_pane_g4

0x2073,	// (0x0003b604) bg_sctrl_middle_pane_g5

0x207b,	// (0x0003b60c) bg_sctrl_middle_pane_g6

0x2083,	// (0x0003b614) bg_sctrl_middle_pane_g7

0x208b,	// (0x0003b61c) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x0004927b) bg_sctrl_middle_pane_g

0x2093,	// (0x0003b624) bg_sctrl_middle_pane_g8_copy1

0x2053,	// (0x0003b5e4) bg_sctrl_sk_pane_g1

0x2063,	// (0x0003b5f4) bg_sctrl_sk_pane_g2

0x205b,	// (0x0003b5ec) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x00048dbe) bg_sctrl_sk_pane_g

0xb8d0,	// (0x00044e61) aid_size_touch_scroll_bar

0x2073,	// (0x0003b604) bg_sctrl_sk_pane_g4

0x206b,	// (0x0003b5fc) bg_sctrl_sk_pane_g5

0x207b,	// (0x0003b60c) bg_sctrl_sk_pane_g6

0x2083,	// (0x0003b614) bg_sctrl_sk_pane_g7

0x2093,	// (0x0003b624) bg_sctrl_sk_pane_g8

0x208b,	// (0x0003b61c) bg_sctrl_sk_pane_g9

0xf4db,	// (0x00048a6c) popup_fep_china_hwr2_fs_candidate_window

0x9ab8,	// (0x00043049) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9ab8,	// (0x00043049) popup_fep_china_hwr2_fs_control_window

0x0eb4,	// (0x0003a445) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x00049271) sctrl_sk_top_pane_g

0xd4fe,	// (0x00046a8f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd4fe,	// (0x00046a8f) aid_fep_china_hwr2_fs_cell

0xd512,	// (0x00046aa3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd512,	// (0x00046aa3) bg_popup_fep_shadow_pane_cp4

0xd529,	// (0x00046aba) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd529,	// (0x00046aba) bg_popup_fep_shadow_pane_cp5

0xd53b,	// (0x00046acc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd53b,	// (0x00046acc) popup_fep_china_hwr2_fs_control_bar_grid

0xd54f,	// (0x00046ae0) popup_fep_china_hwr2_fs_control_funtion_grid

0x5e19,	// (0x0003f3aa) aid_fep_china_hwr2_fs_candi_cell

0xb568,	// (0x00044af9) bg_popup_fep_shadow_pane_cp6

0x5e23,	// (0x0003f3b4) popup_fep_china_hwr2_fs_candidate_grid

0xd557,	// (0x00046ae8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd557,	// (0x00046ae8) cell_fep_china_hwr2_fs_funtion_grid

0x4687,	// (0x0003dc18) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5e45,	// (0x0003f3d6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5e45,	// (0x0003f3d6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5e53,	// (0x0003f3e4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5e53,	// (0x0003f3e4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x0004928c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x0004928c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd56f,	// (0x00046b00) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd56f,	// (0x00046b00) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd584,	// (0x00046b15) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd584,	// (0x00046b15) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd00,	// (0x00049291) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd00,	// (0x00049291) cell_fep_china_hwr2_fs_funtion_grid_t

0x5e9a,	// (0x0003f42b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5ea2,	// (0x0003f433) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5eaa,	// (0x0003f43b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd05,	// (0x00049296) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5eb2,	// (0x0003f443) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5eb2,	// (0x0003f443) cell_fep_china_hwr2_fs_candidate_grid

0x5ecb,	// (0x0003f45c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5ed3,	// (0x0003f464) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4687,	// (0x0003dc18) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4687,	// (0x0003dc18) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb20,	// (0x000490b1) cell_fep_china_hwr2_fs_candidate_grid_g

0x5edb,	// (0x0003f46c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0427,	// (0x000399b8) clock_nsta_pane_cp_24_ParamLimits

0x0427,	// (0x000399b8) clock_nsta_pane_cp_24

0x04a5,	// (0x00039a36) indicator_nsta_pane_cp_24_ParamLimits

0x04a5,	// (0x00039a36) indicator_nsta_pane_cp_24

0x2d61,	// (0x0003c2f2) heading_pane_g1

0x0001,

0xf892,	// (0x00048e23) heading_pane_g

0x37a6,	// (0x0003cd37) grid_sct_catagory_button_pane

0x37d6,	// (0x0003cd67) scroll_pane_cp5_ParamLimits

0x427a,	// (0x0003d80b) button_value_adjust_pane_cp5_ParamLimits

0x427a,	// (0x0003d80b) button_value_adjust_pane_cp5

0x4359,	// (0x0003d8ea) form2_midp_time_pane_ParamLimits

0x5ee9,	// (0x0003f47a) cell_sct_catagory_button_pane_ParamLimits

0x5ee9,	// (0x0003f47a) cell_sct_catagory_button_pane

0x464c,	// (0x0003dbdd) bg_button_pane_cp01_ParamLimits

0x464c,	// (0x0003dbdd) bg_button_pane_cp01

0x4687,	// (0x0003dc18) cell_sct_catagory_button_pane_g1

0xa06b,	// (0x000435fc) popup_tb_extension_window

0xd5a0,	// (0x00046b31) aid_size_cell_ext_ParamLimits

0xd5a0,	// (0x00046b31) aid_size_cell_ext

0xb882,	// (0x00044e13) bg_tb_trans_pane_cp1_ParamLimits

0xb882,	// (0x00044e13) bg_tb_trans_pane_cp1

0xd5c6,	// (0x00046b57) grid_tb_ext_pane_ParamLimits

0xd5c6,	// (0x00046b57) grid_tb_ext_pane

0xd605,	// (0x00046b96) cell_tb_ext_pane_ParamLimits

0xd605,	// (0x00046b96) cell_tb_ext_pane

0xd62d,	// (0x00046bbe) cell_tb_ext_pane_g1_ParamLimits

0xd62d,	// (0x00046bbe) cell_tb_ext_pane_g1

0x5f7f,	// (0x0003f510) cell_tb_ext_pane_t1

0xb702,	// (0x00044c93) list_highlight_pane_cp11_ParamLimits

0xb702,	// (0x00044c93) list_highlight_pane_cp11

0x86e5,	// (0x00041c76) popup_uni_indicator_window_ParamLimits

0x86e5,	// (0x00041c76) popup_uni_indicator_window

0xb98e,	// (0x00044f1f) bg_popup_sub_pane_cp14

0xd64a,	// (0x00046bdb) list_uniindi_pane

0xd656,	// (0x00046be7) uniindi_top_pane

0xb702,	// (0x00044c93) bg_uniindi_top_pane

0xd675,	// (0x00046c06) uniindi_top_pane_g1

0xd68b,	// (0x00046c1c) uniindi_top_pane_g2

0x0003,

0xfd0c,	// (0x0004929d) uniindi_top_pane_g

0xd6a8,	// (0x00046c39) uniindi_top_pane_t1

0x6030,	// (0x0003f5c1) list_single_uniindi_pane_ParamLimits

0x6030,	// (0x0003f5c1) list_single_uniindi_pane

0x4687,	// (0x0003dc18) bg_uniindi_top_pane_g1

0x6043,	// (0x0003f5d4) list_single_uniindi_pane_g1

0x6056,	// (0x0003f5e7) list_single_uniindi_pane_t1

0xdcb1,	// (0x00047242) control_bg_pane

0x607b,	// (0x0003f60c) bg_sctrl_sk_pane_cp1

0x6084,	// (0x0003f615) bg_sctrl_sk_pane_cp2

0x608d,	// (0x0003f61e) control_bg_pane_g1

0x6096,	// (0x0003f627) control_bg_pane_g2

0x0001,

0xfd15,	// (0x000492a6) control_bg_pane_g

0x40c0,	// (0x0003d651) cell_indicator_nsta_pane_g1_ParamLimits

0xca1d,	// (0x00045fae) cell_indicator_nsta_pane_g2_ParamLimits

0xfa84,	// (0x00049015) cell_indicator_nsta_pane_g_ParamLimits

0xe476,	// (0x00047a07) form2_midp_time_pane_t1_ParamLimits

0x0c4f,	// (0x0003a1e0) main_idle_act4_pane_ParamLimits

0x0c4f,	// (0x0003a1e0) main_idle_act4_pane

0xa06b,	// (0x000435fc) popup_tb_extension_window_ParamLimits

0xd5eb,	// (0x00046b7c) tb_ext_find_pane_ParamLimits

0xd5eb,	// (0x00046b7c) tb_ext_find_pane

0x609f,	// (0x0003f630) ai_gene_pane_1_cp1

0xc2cb,	// (0x0004585c) ai_gene_pane_2_cp1

0xd6d2,	// (0x00046c63) list_single_idle_plugin_calendar_pane

0x60b0,	// (0x0003f641) list_single_idle_plugin_notification_pane

0x60b9,	// (0x0003f64a) list_single_idle_plugin_player_pane

0xd6db,	// (0x00046c6c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd6db,	// (0x00046c6c) list_single_idle_plugin_shortcut_pane

0xd703,	// (0x00046c94) main_idle_act4_pane_t1

0xd71a,	// (0x00046cab) main_idle_act4_pane_t2

0x0001,

0xfd1a,	// (0x000492ab) main_idle_act4_pane_t

0xd731,	// (0x00046cc2) middle_sk_idle_act4_pane_ParamLimits

0xd731,	// (0x00046cc2) middle_sk_idle_act4_pane

0xd74d,	// (0x00046cde) popup_clock_digital_analogue_window_cp2

0xd779,	// (0x00046d0a) shortcut_wheel_idle_act4_pane_ParamLimits

0xd779,	// (0x00046d0a) shortcut_wheel_idle_act4_pane

0x4687,	// (0x0003dc18) shortcut_wheel_idle_act4_pane_g1

0x4687,	// (0x0003dc18) shortcut_wheel_idle_act4_pane_g2

0x4687,	// (0x0003dc18) shortcut_wheel_idle_act4_pane_g3

0x4687,	// (0x0003dc18) shortcut_wheel_idle_act4_pane_g4

0x4687,	// (0x0003dc18) shortcut_wheel_idle_act4_pane_g5

0x614c,	// (0x0003f6dd) shortcut_wheel_idle_act4_pane_g6

0x6154,	// (0x0003f6e5) shortcut_wheel_idle_act4_pane_g7

0x615c,	// (0x0003f6ed) shortcut_wheel_idle_act4_pane_g8

0x6164,	// (0x0003f6f5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1f,	// (0x000492b0) shortcut_wheel_idle_act4_pane_g

0xd7f6,	// (0x00046d87) middle_sk_idle_act4_pane_g1_ParamLimits

0xd7f6,	// (0x00046d87) middle_sk_idle_act4_pane_g1

0xd804,	// (0x00046d95) middle_sk_idle_act4_pane_g2_ParamLimits

0xd804,	// (0x00046d95) middle_sk_idle_act4_pane_g2

0x0001,

0xfd42,	// (0x000492d3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd42,	// (0x000492d3) middle_sk_idle_act4_pane_g

0xd81c,	// (0x00046dad) middle_sk_idle_act4_pane_t1_ParamLimits

0xd81c,	// (0x00046dad) middle_sk_idle_act4_pane_t1

0xd84b,	// (0x00046ddc) grid_ai_shortcut_pane_ParamLimits

0xd84b,	// (0x00046ddc) grid_ai_shortcut_pane

0xd868,	// (0x00046df9) list_highlight_pane_cp16_ParamLimits

0xd868,	// (0x00046df9) list_highlight_pane_cp16

0xd875,	// (0x00046e06) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd875,	// (0x00046e06) list_single_idle_plugin_shortcut_pane_g1

0xd881,	// (0x00046e12) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd881,	// (0x00046e12) list_single_idle_plugin_shortcut_pane_g2

0xd89d,	// (0x00046e2e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd89d,	// (0x00046e2e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd47,	// (0x000492d8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd47,	// (0x000492d8) list_single_idle_plugin_shortcut_pane_g

0xd8b2,	// (0x00046e43) cell_ai_shortcut_pane_ParamLimits

0xd8b2,	// (0x00046e43) cell_ai_shortcut_pane

0xd8c8,	// (0x00046e59) cell_ai_shortcut_pane_g1_ParamLimits

0xd8c8,	// (0x00046e59) cell_ai_shortcut_pane_g1

0x609f,	// (0x0003f630) ai_gene_pane_1_cp2

0x6294,	// (0x0003f825) ai_gene_pane_2_cp2

0x629c,	// (0x0003f82d) list_highlight_pane_cp15

0xd8ea,	// (0x00046e7b) list_single_idle_plugin_calendar_pane_g1

0x629c,	// (0x0003f82d) list_highlight_pane_cp17

0x62ad,	// (0x0003f83e) list_single_idle_plugin_calendar_pane_g1_copy1

0x62b5,	// (0x0003f846) list_single_idle_plugin_player_pane_g1

0x39ff,	// (0x0003cf90) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4e,	// (0x000492df) list_single_idle_plugin_player_pane_g

0x62bd,	// (0x0003f84e) list_single_idle_plugin_player_pane_t1

0x62cb,	// (0x0003f85c) list_single_idle_plugin_player_pane_t2

0x62d9,	// (0x0003f86a) list_single_idle_plugin_player_pane_t3

0x62e7,	// (0x0003f878) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd53,	// (0x000492e4) list_single_idle_plugin_player_pane_t

0x62f5,	// (0x0003f886) wait_bar_pane_cp15

0x62fd,	// (0x0003f88e) grid_ai_notification_pane

0x39ff,	// (0x0003cf90) list_single_idle_plugin_notification_pane_g1

0xd8f2,	// (0x00046e83) cell_ai_notification_pane_ParamLimits

0xd8f2,	// (0x00046e83) cell_ai_notification_pane

0x6313,	// (0x0003f8a4) cell_ai_notification_pane_g1

0x631b,	// (0x0003f8ac) cell_ai_notification_pane_t1

0xd8ff,	// (0x00046e90) tb_ext_find_button_pane

0xd907,	// (0x00046e98) tb_ext_find_pane_g1

0xd90f,	// (0x00046ea0) tb_ext_find_pane_t1

0xbde0,	// (0x00045371) tb_ext_find_button_pane_g1

0xd91d,	// (0x00046eae) tb_ext_find_button_pane_g2

0x0001,

0xfd5c,	// (0x000492ed) tb_ext_find_button_pane_g

0xd703,	// (0x00046c94) main_idle_act4_pane_t1_ParamLimits

0xd71a,	// (0x00046cab) main_idle_act4_pane_t2_ParamLimits

0xfd1a,	// (0x000492ab) main_idle_act4_pane_t_ParamLimits

0xd74d,	// (0x00046cde) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd765,	// (0x00046cf6) sat_plugin_idle_act4_pane_ParamLimits

0xd765,	// (0x00046cf6) sat_plugin_idle_act4_pane

0xd926,	// (0x00046eb7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd926,	// (0x00046eb7) sat_plugin_idle_act4_pane_t1

0xd93e,	// (0x00046ecf) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd93e,	// (0x00046ecf) sat_plugin_idle_act4_pane_t2

0xd956,	// (0x00046ee7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd956,	// (0x00046ee7) sat_plugin_idle_act4_pane_t3

0xd96e,	// (0x00046eff) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd96e,	// (0x00046eff) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd61,	// (0x000492f2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd61,	// (0x000492f2) sat_plugin_idle_act4_pane_t

0x8660,	// (0x00041bf1) popup_battery_window_ParamLimits

0x8660,	// (0x00041bf1) popup_battery_window

0xb702,	// (0x00044c93) bg_popup_sub_pane_cp25_ParamLimits

0xb702,	// (0x00044c93) bg_popup_sub_pane_cp25

0x639c,	// (0x0003f92d) popup_battery_window_g1_ParamLimits

0x639c,	// (0x0003f92d) popup_battery_window_g1

0x63a8,	// (0x0003f939) popup_battery_window_t1_ParamLimits

0x63a8,	// (0x0003f939) popup_battery_window_t1

0x63ba,	// (0x0003f94b) popup_battery_window_t2_ParamLimits

0x63ba,	// (0x0003f94b) popup_battery_window_t2

0x0001,

0xfd6a,	// (0x000492fb) popup_battery_window_t_ParamLimits

0xfd6a,	// (0x000492fb) popup_battery_window_t

0x96ee,	// (0x00042c7f) midp_canvas_pane_ParamLimits

0x9760,	// (0x00042cf1) midp_keypad_pane_ParamLimits

0x9760,	// (0x00042cf1) midp_keypad_pane

0xbad0,	// (0x00045061) main_midp_pane_ParamLimits

0xca2a,	// (0x00045fbb) signal_pane_g2_cp_ParamLimits

0xd986,	// (0x00046f17) aid_size_cell_midp_keypad_ParamLimits

0xd986,	// (0x00046f17) aid_size_cell_midp_keypad

0xd9a4,	// (0x00046f35) midp_keyp_game_grid_pane_ParamLimits

0xd9a4,	// (0x00046f35) midp_keyp_game_grid_pane

0xd9cb,	// (0x00046f5c) midp_keyp_rocker_pane_ParamLimits

0xd9cb,	// (0x00046f5c) midp_keyp_rocker_pane

0xda1c,	// (0x00046fad) midp_keyp_sk_left_pane_ParamLimits

0xda1c,	// (0x00046fad) midp_keyp_sk_left_pane

0xda70,	// (0x00047001) midp_keyp_sk_right_pane_ParamLimits

0xda70,	// (0x00047001) midp_keyp_sk_right_pane

0xb568,	// (0x00044af9) bg_button_pane_cp03

0xdac4,	// (0x00047055) midp_keyp_sk_left_pane_g1

0xb568,	// (0x00044af9) bg_button_pane_cp04

0xdac4,	// (0x00047055) midp_keyp_sk_right_pane_g1

0x4687,	// (0x0003dc18) midp_keyp_rocker_pane_g1

0xdacd,	// (0x0004705e) keyp_game_cell_pane_ParamLimits

0xdacd,	// (0x0004705e) keyp_game_cell_pane

0xb568,	// (0x00044af9) bg_button_pane_cp02

0xdaf1,	// (0x00047082) keyp_game_cell_pane_g1

0x8680,	// (0x00041c11) popup_fep_vkb2_window_ParamLimits

0x8680,	// (0x00041c11) popup_fep_vkb2_window

0xaeda,	// (0x0004446b) aid_size_cell_vkb2_ParamLimits

0xaeda,	// (0x0004446b) aid_size_cell_vkb2

0xaf0e,	// (0x0004449f) popup_fep_vkb2_window_g1_ParamLimits

0xaf0e,	// (0x0004449f) popup_fep_vkb2_window_g1

0xaf5e,	// (0x000444ef) vkb2_area_bottom_pane_ParamLimits

0xaf5e,	// (0x000444ef) vkb2_area_bottom_pane

0xafb2,	// (0x00044543) vkb2_area_keypad_pane_ParamLimits

0xafb2,	// (0x00044543) vkb2_area_keypad_pane

0xaffa,	// (0x0004458b) vkb2_area_top_pane_ParamLimits

0xaffa,	// (0x0004458b) vkb2_area_top_pane

0xb086,	// (0x00044617) vkb2_top_entry_pane_ParamLimits

0xb086,	// (0x00044617) vkb2_top_entry_pane

0xb0b3,	// (0x00044644) vkb2_top_grid_left_pane_ParamLimits

0xb0b3,	// (0x00044644) vkb2_top_grid_left_pane

0xb0d4,	// (0x00044665) vkb2_top_grid_right_pane_ParamLimits

0xb0d4,	// (0x00044665) vkb2_top_grid_right_pane

0x14bc,	// (0x0003aa4d) vkb2_cell_keypad_pane_ParamLimits

0x14bc,	// (0x0003aa4d) vkb2_cell_keypad_pane

0xb11c,	// (0x000446ad) vkb2_area_bottom_grid_pane_ParamLimits

0xb11c,	// (0x000446ad) vkb2_area_bottom_grid_pane

0xb146,	// (0x000446d7) vkb2_area_bottom_pane_g1_ParamLimits

0xb146,	// (0x000446d7) vkb2_area_bottom_pane_g1

0xb16c,	// (0x000446fd) vkb2_area_bottom_pane_g2_ParamLimits

0xb16c,	// (0x000446fd) vkb2_area_bottom_pane_g2

0xb19d,	// (0x0004472e) vkb2_area_bottom_pane_g3_ParamLimits

0xb19d,	// (0x0004472e) vkb2_area_bottom_pane_g3

0x0002,

0xfd6f,	// (0x00049300) vkb2_area_bottom_pane_g_ParamLimits

0xfd6f,	// (0x00049300) vkb2_area_bottom_pane_g

0x1666,	// (0x0003abf7) vkb2_top_cell_left_pane_ParamLimits

0x1666,	// (0x0003abf7) vkb2_top_cell_left_pane

0xdafa,	// (0x0004708b) vkb2_top_entry_pane_g1_ParamLimits

0xdafa,	// (0x0004708b) vkb2_top_entry_pane_g1

0xdb08,	// (0x00047099) vkb2_top_entry_pane_t1_ParamLimits

0xdb08,	// (0x00047099) vkb2_top_entry_pane_t1

0x656b,	// (0x0003fafc) vkb2_top_entry_pane_t2_ParamLimits

0x656b,	// (0x0003fafc) vkb2_top_entry_pane_t2

0x659d,	// (0x0003fb2e) vkb2_top_entry_pane_t3_ParamLimits

0x659d,	// (0x0003fb2e) vkb2_top_entry_pane_t3

0x0002,

0xfd76,	// (0x00049307) vkb2_top_entry_pane_t_ParamLimits

0xfd76,	// (0x00049307) vkb2_top_entry_pane_t

0xb207,	// (0x00044798) vkb2_top_grid_right_pane_g1_ParamLimits

0xb207,	// (0x00044798) vkb2_top_grid_right_pane_g1

0x16c9,	// (0x0003ac5a) vkb2_top_grid_right_pane_g2_ParamLimits

0x16c9,	// (0x0003ac5a) vkb2_top_grid_right_pane_g2

0x16e1,	// (0x0003ac72) vkb2_top_grid_right_pane_g3_ParamLimits

0x16e1,	// (0x0003ac72) vkb2_top_grid_right_pane_g3

0xb21d,	// (0x000447ae) vkb2_top_grid_right_pane_g4_ParamLimits

0xb21d,	// (0x000447ae) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7d,	// (0x0004930e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7d,	// (0x0004930e) vkb2_top_grid_right_pane_g

0x170f,	// (0x0003aca0) vkb2_top_cell_left_pane_g1

0x1726,	// (0x0003acb7) vkb2_cell_keypad_pane_g1_ParamLimits

0x1726,	// (0x0003acb7) vkb2_cell_keypad_pane_g1

0x65c1,	// (0x0003fb52) vkb2_cell_keypad_pane_t1_ParamLimits

0x65c1,	// (0x0003fb52) vkb2_cell_keypad_pane_t1

0x1734,	// (0x0003acc5) vkb2_cell_bottom_grid_pane_ParamLimits

0x1734,	// (0x0003acc5) vkb2_cell_bottom_grid_pane

0x176d,	// (0x0003acfe) vkb2_cell_bottom_grid_pane_g1

0xd79a,	// (0x00046d2b) aid_call2_pane_cp02

0xd7a2,	// (0x00046d33) aid_call_pane_cp02

0xd7aa,	// (0x00046d3b) clock_digital_number_pane_cp10

0xd7b2,	// (0x00046d43) clock_digital_number_pane_cp11

0xd7ba,	// (0x00046d4b) clock_digital_number_pane_cp12

0xd7c2,	// (0x00046d53) clock_digital_number_pane_cp13

0xd7ca,	// (0x00046d5b) clock_digital_separator_pane_cp10

0xbde0,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g1

0xbde0,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g2

0xd7d2,	// (0x00046d63) popup_clock_digital_analogue_window_cp2_g3

0xbde0,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g4

0xd7d2,	// (0x00046d63) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd32,	// (0x000492c3) popup_clock_digital_analogue_window_cp2_g

0xd7da,	// (0x00046d6b) popup_clock_digital_analogue_window_cp2_t1

0xd7e8,	// (0x00046d79) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3d,	// (0x000492ce) popup_clock_digital_analogue_window_cp2_t

0x4687,	// (0x0003dc18) clock_digital_number_pane_cp10_g1

0x4687,	// (0x0003dc18) clock_digital_number_pane_cp10_g2

0x0001,

0xfb20,	// (0x000490b1) clock_digital_number_pane_cp10_g

0x4687,	// (0x0003dc18) clock_digital_separator_pane_cp10_g1

0x4687,	// (0x0003dc18) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb20,	// (0x000490b1) clock_digital_separator_pane_cp10_g

0xd697,	// (0x00046c28) uniindi_top_pane_g3

0x5ff9,	// (0x0003f58a) uniindi_top_pane_g4

0x1547,	// (0x0003aad8) vkb2_row_keypad_pane_ParamLimits

0x1547,	// (0x0003aad8) vkb2_row_keypad_pane

0x178d,	// (0x0003ad1e) vkb2_cell_t_keypad_pane_ParamLimits

0x178d,	// (0x0003ad1e) vkb2_cell_t_keypad_pane

0x179d,	// (0x0003ad2e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x179d,	// (0x0003ad2e) vkb2_cell_t_keypad_pane_cp08

0x17b0,	// (0x0003ad41) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x17b0,	// (0x0003ad41) vkb2_cell_t_keypad_pane_cp09

0x17c4,	// (0x0003ad55) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x17c4,	// (0x0003ad55) vkb2_cell_t_keypad_pane_cp01

0x17d5,	// (0x0003ad66) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x17d5,	// (0x0003ad66) vkb2_cell_t_keypad_pane_cp02

0x17e6,	// (0x0003ad77) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x17e6,	// (0x0003ad77) vkb2_cell_t_keypad_pane_cp03

0x17f7,	// (0x0003ad88) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x17f7,	// (0x0003ad88) vkb2_cell_t_keypad_pane_cp04

0x1808,	// (0x0003ad99) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1808,	// (0x0003ad99) vkb2_cell_t_keypad_pane_cp05

0x1819,	// (0x0003adaa) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1819,	// (0x0003adaa) vkb2_cell_t_keypad_pane_cp06

0x182a,	// (0x0003adbb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x182a,	// (0x0003adbb) vkb2_cell_t_keypad_pane_cp07

0x183b,	// (0x0003adcc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x183b,	// (0x0003adcc) vkb2_cell_t_keypad_pane_cp10

0x0eb4,	// (0x0003a445) vkb2_cell_t_keypad_pane_g1

0x65d8,	// (0x0003fb69) vkb2_cell_t_keypad_pane_t1

0xdcb1,	// (0x00047242) popup_grid_graphic2_window

0xdb41,	// (0x000470d2) aid_size_cell_graphic2_ParamLimits

0xdb41,	// (0x000470d2) aid_size_cell_graphic2

0xdb7f,	// (0x00047110) bg_popup_window_pane_cp21_ParamLimits

0xdb7f,	// (0x00047110) bg_popup_window_pane_cp21

0xdb8d,	// (0x0004711e) graphic2_pages_pane_ParamLimits

0xdb8d,	// (0x0004711e) graphic2_pages_pane

0xe6c2,	// (0x00047c53) grid_graphic2_control_pane_ParamLimits

0xe6c2,	// (0x00047c53) grid_graphic2_control_pane

0xe70a,	// (0x00047c9b) grid_graphic2_pane_ParamLimits

0xe70a,	// (0x00047c9b) grid_graphic2_pane

0xe791,	// (0x00047d22) cell_graphic2_pane

0xdcb1,	// (0x00047242) main_comp_mode_pane

0x5859,	// (0x0003edea) list_ai3_gene_pane_ParamLimits

0xd446,	// (0x000469d7) bg_popup_window_pane_cp19_ParamLimits

0x5c33,	// (0x0003f1c4) bg_touch_area_indi_pane_ParamLimits

0x5c33,	// (0x0003f1c4) bg_touch_area_indi_pane

0x5c49,	// (0x0003f1da) bg_touch_area_indi_pane_cp01_ParamLimits

0x5c49,	// (0x0003f1da) bg_touch_area_indi_pane_cp01

0x5c5f,	// (0x0003f1f0) bg_touch_area_indi_pane_cp02_ParamLimits

0x5c5f,	// (0x0003f1f0) bg_touch_area_indi_pane_cp02

0x5c75,	// (0x0003f206) bg_touch_area_indi_pane_cp03_ParamLimits

0x5c75,	// (0x0003f206) bg_touch_area_indi_pane_cp03

0x5c8f,	// (0x0003f220) popup_slider_window_g1_ParamLimits

0x5cab,	// (0x0003f23c) popup_slider_window_g2_ParamLimits

0x5cc7,	// (0x0003f258) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x00049258) popup_slider_window_g_ParamLimits

0x5d2d,	// (0x0003f2be) popup_slider_window_t1_ParamLimits

0x5da1,	// (0x0003f332) small_volume_slider_vertical_pane_ParamLimits

0xe791,	// (0x00047d22) cell_graphic2_pane_ParamLimits

0xe7ec,	// (0x00047d7d) bg_button_pane_cp10_ParamLimits

0xe7ec,	// (0x00047d7d) bg_button_pane_cp10

0xe7ff,	// (0x00047d90) bg_button_pane_cp11_ParamLimits

0xe7ff,	// (0x00047d90) bg_button_pane_cp11

0xe812,	// (0x00047da3) graphic2_pages_pane_g1_ParamLimits

0xe812,	// (0x00047da3) graphic2_pages_pane_g1

0xe82d,	// (0x00047dbe) graphic2_pages_pane_g2_ParamLimits

0xe82d,	// (0x00047dbe) graphic2_pages_pane_g2

0x0001,

0xfd8b,	// (0x0004931c) graphic2_pages_pane_g_ParamLimits

0xfd8b,	// (0x0004931c) graphic2_pages_pane_g

0xe845,	// (0x00047dd6) graphic2_pages_pane_t1_ParamLimits

0xe845,	// (0x00047dd6) graphic2_pages_pane_t1

0xe85d,	// (0x00047dee) cell_graphic2_control_pane_ParamLimits

0xe85d,	// (0x00047dee) cell_graphic2_control_pane

0xe88f,	// (0x00047e20) cell_graphic2_pane_g1_ParamLimits

0xe88f,	// (0x00047e20) cell_graphic2_pane_g1

0xdbe3,	// (0x00047174) cell_graphic2_pane_g2_ParamLimits

0xdbe3,	// (0x00047174) cell_graphic2_pane_g2

0xe489,	// (0x00047a1a) cell_graphic2_pane_g3_ParamLimits

0xe489,	// (0x00047a1a) cell_graphic2_pane_g3

0xdbf0,	// (0x00047181) cell_graphic2_pane_g4_ParamLimits

0xdbf0,	// (0x00047181) cell_graphic2_pane_g4

0xe89c,	// (0x00047e2d) cell_graphic2_pane_g5_ParamLimits

0xe89c,	// (0x00047e2d) cell_graphic2_pane_g5

0x0004,

0xfd90,	// (0x00049321) cell_graphic2_pane_g_ParamLimits

0xfd90,	// (0x00049321) cell_graphic2_pane_g

0xe8b9,	// (0x00047e4a) cell_graphic2_pane_t1_ParamLimits

0xe8b9,	// (0x00047e4a) cell_graphic2_pane_t1

0x2d55,	// (0x0003c2e6) grid_highlight_pane_cp11_ParamLimits

0x2d55,	// (0x0003c2e6) grid_highlight_pane_cp11

0xb702,	// (0x00044c93) bg_button_pane_cp05

0xe903,	// (0x00047e94) cell_graphic2_control_pane_g1

0x4687,	// (0x0003dc18) bg_touch_area_indi_pane_g1

0x68b1,	// (0x0003fe42) aid_cmod_rocker_key_size

0x68bb,	// (0x0003fe4c) aid_cmode_itu_key_size

0x68c5,	// (0x0003fe56) main_cmode_video_pane

0x68cf,	// (0x0003fe60) main_comp_mode_itu_pane

0x68db,	// (0x0003fe6c) main_comp_mode_rocker_pane

0x68e7,	// (0x0003fe78) cell_cmode_rocker_pane_ParamLimits

0x68e7,	// (0x0003fe78) cell_cmode_rocker_pane

0x68f9,	// (0x0003fe8a) cell_cmode_itu_pane_ParamLimits

0x68f9,	// (0x0003fe8a) cell_cmode_itu_pane

0xb98e,	// (0x00044f1f) bg_button_pane_cp06_ParamLimits

0xb98e,	// (0x00044f1f) bg_button_pane_cp06

0x48f7,	// (0x0003de88) cell_cmode_rocker_pane_g1_ParamLimits

0x48f7,	// (0x0003de88) cell_cmode_rocker_pane_g1

0x5e45,	// (0x0003f3d6) cell_cmode_rocker_pane_g2_ParamLimits

0x5e45,	// (0x0003f3d6) cell_cmode_rocker_pane_g2

0x0001,

0xfda0,	// (0x00049331) cell_cmode_rocker_pane_g_ParamLimits

0xfda0,	// (0x00049331) cell_cmode_rocker_pane_g

0xb568,	// (0x00044af9) bg_button_pane_cp07

0x690e,	// (0x0003fe9f) cell_cmode_itu_pane_g1

0x6917,	// (0x0003fea8) cell_cmode_itu_pane_t1

0x6925,	// (0x0003feb6) cell_cmode_itu_pane_t2

0x0001,

0xfda5,	// (0x00049336) cell_cmode_itu_pane_t

0x606b,	// (0x0003f5fc) aid_touch_ctrl_left

0x6073,	// (0x0003f604) aid_touch_ctrl_right

0xb568,	// (0x00044af9) compa_mode_pane

0xe929,	// (0x00047eba) aid_cmod_rocker_key_size_cp

0xe933,	// (0x00047ec4) aid_cmode_itu_key_size_cp

0x6947,	// (0x0003fed8) compa_mode_pane_g1

0x694f,	// (0x0003fee0) compa_mode_pane_g2

0x6957,	// (0x0003fee8) compa_mode_pane_g3

0x0002,

0xfdaa,	// (0x0004933b) compa_mode_pane_g

0xe93d,	// (0x00047ece) main_comp_mode_itu_pane_cp

0xe945,	// (0x00047ed6) main_comp_mode_rocker_pane_cp

0xe94d,	// (0x00047ede) cell_cmode_itu_pane_cp_ParamLimits

0xe94d,	// (0x00047ede) cell_cmode_itu_pane_cp

0xe962,	// (0x00047ef3) cell_cmode_rocker_pane_cp_ParamLimits

0xe962,	// (0x00047ef3) cell_cmode_rocker_pane_cp

0xb98e,	// (0x00044f1f) bg_button_pane_cp06_cp_ParamLimits

0xb98e,	// (0x00044f1f) bg_button_pane_cp06_cp

0x48f7,	// (0x0003de88) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x48f7,	// (0x0003de88) cell_cmode_rocker_pane_g1_cp

0x4687,	// (0x0003dc18) cell_cmode_rocker_pane_g2_cp

0xb568,	// (0x00044af9) bg_button_pane_cp07_cp

0xe974,	// (0x00047f05) cell_cmode_itu_pane_g1_cp

0xe97d,	// (0x00047f0e) cell_cmode_itu_pane_t1_cp

0xe97d,	// (0x00047f0e) cell_cmode_itu_pane_t2_cp

0xc7d4,	// (0x00045d65) settings_code_pane_cp2

0xb5d8,	// (0x00044b69) bg_popup_window_pane_cp3_ParamLimits

0xb81b,	// (0x00044dac) heading_pane_cp3_ParamLimits

0xb82a,	// (0x00044dbb) listscroll_popup_graphic_pane_ParamLimits

0x0c5d,	// (0x0003a1ee) fep_hwr_aid_pane_ParamLimits

0x120e,	// (0x0003a79f) aid_touch_sctrl_top_ParamLimits

0x1229,	// (0x0003a7ba) sctrl_sk_top_pane_g1_ParamLimits

0x0eb4,	// (0x0003a445) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x00049271) sctrl_sk_top_pane_g_ParamLimits

0x1236,	// (0x0003a7c7) sctrl_sk_top_pane_t1_ParamLimits

0x120e,	// (0x0003a79f) aid_touch_sctrl_bottom_ParamLimits

0x1236,	// (0x0003a7c7) sctrl_sk_bottom_pane_t1_ParamLimits

0xd663,	// (0x00046bf4) aid_area_touch_clock

0xb046,	// (0x000445d7) aid_vkb2_area_top_pane_cell_ParamLimits

0xb046,	// (0x000445d7) aid_vkb2_area_top_pane_cell

0xb0f5,	// (0x00044686) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb0f5,	// (0x00044686) aid_vkb2_area_bottom_pane_cell

0x6523,	// (0x0003fab4) popup_char_count_window

0x69ad,	// (0x0003ff3e) popup_char_count_window_g1

0x69b6,	// (0x0003ff47) popup_char_count_window_g2

0x69bf,	// (0x0003ff50) popup_char_count_window_g3

0x0002,

0xfdb1,	// (0x00049342) popup_char_count_window_g

0x69c8,	// (0x0003ff59) popup_char_count_window_t1

0x12dd,	// (0x0003a86e) popup_fep_char_preview_window_ParamLimits

0x12dd,	// (0x0003a86e) popup_fep_char_preview_window

0xb066,	// (0x000445f7) vkb2_top_candi_pane_ParamLimits

0xb066,	// (0x000445f7) vkb2_top_candi_pane

0xe98b,	// (0x00047f1c) cell_vkb2_top_candi_pane_ParamLimits

0xe98b,	// (0x00047f1c) cell_vkb2_top_candi_pane

0x1850,	// (0x0003ade1) bg_popup_fep_char_preview_window_ParamLimits

0x1850,	// (0x0003ade1) bg_popup_fep_char_preview_window

0x185e,	// (0x0003adef) popup_fep_char_preview_window_t1_ParamLimits

0x185e,	// (0x0003adef) popup_fep_char_preview_window_t1

0x6a20,	// (0x0003ffb1) bg_popup_fep_char_preview_window_g1

0x6a28,	// (0x0003ffb9) bg_popup_fep_char_preview_window_g2

0x6a30,	// (0x0003ffc1) bg_popup_fep_char_preview_window_g3

0x6a38,	// (0x0003ffc9) bg_popup_fep_char_preview_window_g4

0x6a40,	// (0x0003ffd1) bg_popup_fep_char_preview_window_g5

0x6a48,	// (0x0003ffd9) bg_popup_fep_char_preview_window_g6

0x6a50,	// (0x0003ffe1) bg_popup_fep_char_preview_window_g7

0x6a58,	// (0x0003ffe9) bg_popup_fep_char_preview_window_g8

0x6a60,	// (0x0003fff1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb8,	// (0x00049349) bg_popup_fep_char_preview_window_g

0x0eb4,	// (0x0003a445) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0eb4,	// (0x0003a445) cell_vkb2_top_candi_pane_g1

0x0ec2,	// (0x0003a453) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0ec2,	// (0x0003a453) cell_vkb2_top_candi_pane_g2

0x4c0e,	// (0x0003e19f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4c0e,	// (0x0003e19f) cell_vkb2_top_candi_pane_g3

0x18a0,	// (0x0003ae31) cell_vkb2_top_candi_pane_g4_ParamLimits

0x18a0,	// (0x0003ae31) cell_vkb2_top_candi_pane_g4

0x4df8,	// (0x0003e389) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4df8,	// (0x0003e389) cell_vkb2_top_candi_pane_g5

0x18c1,	// (0x0003ae52) cell_vkb2_top_candi_pane_g6_ParamLimits

0x18c1,	// (0x0003ae52) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcd,	// (0x0004935e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcd,	// (0x0004935e) cell_vkb2_top_candi_pane_g

0x18cf,	// (0x0003ae60) cell_vkb2_top_candi_pane_t1

0xaac0,	// (0x00044051) aid_size_touch_slider_mark_ParamLimits

0xaac0,	// (0x00044051) aid_size_touch_slider_mark

0xdbc9,	// (0x0004715a) grid_graphic2_catg_pane_ParamLimits

0xdbc9,	// (0x0004715a) grid_graphic2_catg_pane

0xe764,	// (0x00047cf5) popup_grid_graphic2_window_t1_ParamLimits

0xe764,	// (0x00047cf5) popup_grid_graphic2_window_t1

0xe77a,	// (0x00047d0b) popup_grid_graphic2_window_t2_ParamLimits

0xe77a,	// (0x00047d0b) popup_grid_graphic2_window_t2

0x0001,

0xfd86,	// (0x00049317) popup_grid_graphic2_window_t_ParamLimits

0xfd86,	// (0x00049317) popup_grid_graphic2_window_t

0xb702,	// (0x00044c93) bg_button_pane_cp05_ParamLimits

0xe903,	// (0x00047e94) cell_graphic2_control_pane_g1_ParamLimits

0xe9eb,	// (0x00047f7c) cell_graphic2_catg_pane_ParamLimits

0xe9eb,	// (0x00047f7c) cell_graphic2_catg_pane

0xb568,	// (0x00044af9) bg_button_pane_cp12

0xe9fd,	// (0x00047f8e) cell_graphic2_catg_pane_g1

0x5f7f,	// (0x0003f510) cell_tb_ext_pane_t1_ParamLimits

0x1686,	// (0x0003ac17) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1686,	// (0x0003ac17) vkb2_top_cell_right_narrow_pane

0x169e,	// (0x0003ac2f) vkb2_top_cell_right_wide_pane_ParamLimits

0x169e,	// (0x0003ac2f) vkb2_top_cell_right_wide_pane

0x0c4f,	// (0x0003a1e0) bg_vkb2_func_pane_ParamLimits

0x0c4f,	// (0x0003a1e0) bg_vkb2_func_pane

0x170f,	// (0x0003aca0) vkb2_top_cell_left_pane_g1_ParamLimits

0x0c4f,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0c4f,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp03

0x176d,	// (0x0003acfe) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x205b,	// (0x0003b5ec) bg_vkb2_func_pane_g1

0x2063,	// (0x0003b5f4) bg_vkb2_func_pane_g2

0x2073,	// (0x0003b604) bg_vkb2_func_pane_g3

0x206b,	// (0x0003b5fc) bg_vkb2_func_pane_g4

0x207b,	// (0x0003b60c) bg_vkb2_func_pane_g5

0x2083,	// (0x0003b614) bg_vkb2_func_pane_g6

0x208b,	// (0x0003b61c) bg_vkb2_func_pane_g7

0x2093,	// (0x0003b624) bg_vkb2_func_pane_g8

0x2053,	// (0x0003b5e4) bg_vkb2_func_pane_g9

0x0008,

0xfdda,	// (0x0004936b) bg_vkb2_func_pane_g

0x0c4f,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0c4f,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp01

0x170f,	// (0x0003aca0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x170f,	// (0x0003aca0) vkb2_top_cell_right_wide_pane_g1

0x0c4f,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0c4f,	// (0x0003a1e0) bg_vkb2_fuc_pane_cp02

0x18ee,	// (0x0003ae7f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x18ee,	// (0x0003ae7f) vkb2_top_cell_right_narrow_pane_g1

0xd388,	// (0x00046919) aid_touch_area_decrease_ParamLimits

0xd388,	// (0x00046919) aid_touch_area_decrease

0xd3c2,	// (0x00046953) aid_touch_area_increase_ParamLimits

0xd3c2,	// (0x00046953) aid_touch_area_increase

0xd3ea,	// (0x0004697b) aid_touch_area_mute_ParamLimits

0xd3ea,	// (0x0004697b) aid_touch_area_mute

0xd412,	// (0x000469a3) aid_touch_area_slider_ParamLimits

0xd412,	// (0x000469a3) aid_touch_area_slider

0xd452,	// (0x000469e3) popup_slider_window_g4_ParamLimits

0xd452,	// (0x000469e3) popup_slider_window_g4

0xd47a,	// (0x00046a0b) popup_slider_window_g5_ParamLimits

0xd47a,	// (0x00046a0b) popup_slider_window_g5

0xd4ae,	// (0x00046a3f) popup_slider_window_g6_ParamLimits

0xd4ae,	// (0x00046a3f) popup_slider_window_g6

0x5d5b,	// (0x0003f2ec) popup_slider_window_t2_ParamLimits

0x5d5b,	// (0x0003f2ec) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x00049265) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x00049265) popup_slider_window_t

0xd4ca,	// (0x00046a5b) slider_pane_ParamLimits

0xd4ca,	// (0x00046a5b) slider_pane

0x6a83,	// (0x00040014) slider_pane_g1_ParamLimits

0x6a83,	// (0x00040014) slider_pane_g1

0x6a97,	// (0x00040028) slider_pane_g2_ParamLimits

0x6a97,	// (0x00040028) slider_pane_g2

0x6aad,	// (0x0004003e) slider_pane_g3_ParamLimits

0x6aad,	// (0x0004003e) slider_pane_g3

0x0003,

0xfded,	// (0x0004937e) slider_pane_g_ParamLimits

0xfded,	// (0x0004937e) slider_pane_g

0xa0b3,	// (0x00043644) popup_tb_float_extension_window_ParamLimits

0xa0b3,	// (0x00043644) popup_tb_float_extension_window

0x6ad9,	// (0x0004006a) aid_size_cell_tb_float_ext

0xb568,	// (0x00044af9) bg_popup_sub_window_cp28

0xea06,	// (0x00047f97) grid_tb_float_ext_pane

0xea10,	// (0x00047fa1) cell_tb_float_ext_pane_ParamLimits

0xea10,	// (0x00047fa1) cell_tb_float_ext_pane

0xea2a,	// (0x00047fbb) cell_tb_float_ext_pane_g1

0xea33,	// (0x00047fc4) grid_highlight_pane_cp12

0xac08,	// (0x00044199) cell_last_hwr_side_pane_ParamLimits

0xac08,	// (0x00044199) cell_last_hwr_side_pane

0x4687,	// (0x0003dc18) cell_last_hwr_side_pane_g1

0x6b1b,	// (0x000400ac) cell_last_hwr_side_pane_g2

0x0001,

0xfdf6,	// (0x00049387) cell_last_hwr_side_pane_g

0xb1d2,	// (0x00044763) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb1d2,	// (0x00044763) vkb2_area_bottom_space_btn_pane

0x0eb4,	// (0x0003a445) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x65d8,	// (0x0003fb69) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x18cf,	// (0x0003ae60) cell_vkb2_top_candi_pane_t1_ParamLimits

0x190e,	// (0x0003ae9f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x190e,	// (0x0003ae9f) vkb2_area_bottom_space_btn_pane_g1

0x1948,	// (0x0003aed9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1948,	// (0x0003aed9) vkb2_area_bottom_space_btn_pane_g2

0x197e,	// (0x0003af0f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x197e,	// (0x0003af0f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfb,	// (0x0004938c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfb,	// (0x0004938c) vkb2_area_bottom_space_btn_pane_g

0x0d12,	// (0x0003a2a3) cel_fep_hwr_func_pane_ParamLimits

0x0d12,	// (0x0003a2a3) cel_fep_hwr_func_pane

0xabdd,	// (0x0004416e) cell_hwr_side_button_pane_ParamLimits

0xabdd,	// (0x0004416e) cell_hwr_side_button_pane

0xd663,	// (0x00046bf4) aid_area_touch_clock_ParamLimits

0xb702,	// (0x00044c93) bg_uniindi_top_pane_ParamLimits

0xd675,	// (0x00046c06) uniindi_top_pane_g1_ParamLimits

0xd68b,	// (0x00046c1c) uniindi_top_pane_g2_ParamLimits

0xd697,	// (0x00046c28) uniindi_top_pane_g3_ParamLimits

0x5ff9,	// (0x0003f58a) uniindi_top_pane_g4_ParamLimits

0xfd0c,	// (0x0004929d) uniindi_top_pane_g_ParamLimits

0xd6a8,	// (0x00046c39) uniindi_top_pane_t1_ParamLimits

0xb702,	// (0x00044c93) bg_vkb2_func_pane_cp01_ParamLimits

0xb702,	// (0x00044c93) bg_vkb2_func_pane_cp01

0x6b24,	// (0x000400b5) cel_fep_hwr_func_pane_g1_ParamLimits

0x6b24,	// (0x000400b5) cel_fep_hwr_func_pane_g1

0xb702,	// (0x00044c93) bg_vkb2_func_pane_cp02_ParamLimits

0xb702,	// (0x00044c93) bg_vkb2_func_pane_cp02

0x6b24,	// (0x000400b5) cell_hwr_side_button_pane_g1_ParamLimits

0x6b24,	// (0x000400b5) cell_hwr_side_button_pane_g1

0x1ed7,	// (0x0003b468) status_pane_g4_ParamLimits

0x1ed7,	// (0x0003b468) status_pane_g4

0x1ef1,	// (0x0003b482) status_pane_t1

0x43c2,	// (0x0003d953) form2_midp_gauge_slider_cont_pane

0x43ca,	// (0x0003d95b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb53,	// (0x000460e4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb65,	// (0x000460f6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad3,	// (0x00049064) form2_midp_gauge_slider_pane_t_ParamLimits

0x4400,	// (0x0003d991) form2_midp_slider_pane_ParamLimits

0x12a5,	// (0x0003a836) aid_size_cell_func_vkb2_ParamLimits

0x12a5,	// (0x0003a836) aid_size_cell_func_vkb2

0x6ac5,	// (0x00040056) slider_pane_g4_ParamLimits

0x6ac5,	// (0x00040056) slider_pane_g4

0xb23b,	// (0x000447cc) form2_midp_gauge_slider_pane_t2_cp01

0xb249,	// (0x000447da) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb249,	// (0x000447da) form2_midp_gauge_slider_pane_t3_cp01

0x19f3,	// (0x0003af84) form2_midp_slider_pane_cp01

0xb568,	// (0x00044af9) navi_smil_pane

0x6b5d,	// (0x000400ee) navi_smil_pane_g1

0x6b65,	// (0x000400f6) navi_smil_pane_t1

0x6b32,	// (0x000400c3) form2_midp_slider_pane_g1

0x6b3b,	// (0x000400cc) form2_midp_slider_pane_g2

0x6b43,	// (0x000400d4) form2_midp_slider_pane_g3

0x6b32,	// (0x000400c3) form2_midp_slider_pane_g4

0xea3c,	// (0x00047fcd) form2_midp_slider_pane_g5

0x0004,

0xfe04,	// (0x00049395) form2_midp_slider_pane_g

0x19b8,	// (0x0003af49) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x19b8,	// (0x0003af49) vkb2_area_bottom_space_btn_pane_g4

0xa2eb,	// (0x0004387c) lc0_navi_pane_ParamLimits

0xa2eb,	// (0x0004387c) lc0_navi_pane

0xa355,	// (0x000438e6) lc0_stat_indi_pane_ParamLimits

0xa355,	// (0x000438e6) lc0_stat_indi_pane

0xa36a,	// (0x000438fb) ls0_title_pane_ParamLimits

0xa36a,	// (0x000438fb) ls0_title_pane

0xb98e,	// (0x00044f1f) bg_popup_sub_pane_cp14_ParamLimits

0xd64a,	// (0x00046bdb) list_uniindi_pane_ParamLimits

0xd656,	// (0x00046be7) uniindi_top_pane_ParamLimits

0x6043,	// (0x0003f5d4) list_single_uniindi_pane_g1_ParamLimits

0x6056,	// (0x0003f5e7) list_single_uniindi_pane_t1_ParamLimits

0xb266,	// (0x000447f7) lc0_stat_clock_pane_ParamLimits

0xb266,	// (0x000447f7) lc0_stat_clock_pane

0xea47,	// (0x00047fd8) lc0_stat_indi_pane_g1_ParamLimits

0xea47,	// (0x00047fd8) lc0_stat_indi_pane_g1

0xea54,	// (0x00047fe5) lc0_stat_indi_pane_g2_ParamLimits

0xea54,	// (0x00047fe5) lc0_stat_indi_pane_g2

0x0001,

0xfe0f,	// (0x000493a0) lc0_stat_indi_pane_g_ParamLimits

0xfe0f,	// (0x000493a0) lc0_stat_indi_pane_g

0xb276,	// (0x00044807) lc0_uni_indicator_pane_ParamLimits

0xb276,	// (0x00044807) lc0_uni_indicator_pane

0xea61,	// (0x00047ff2) ls0_title_pane_g1_ParamLimits

0xea61,	// (0x00047ff2) ls0_title_pane_g1

0xea75,	// (0x00048006) ls0_title_pane_t1_ParamLimits

0xea75,	// (0x00048006) ls0_title_pane_t1

0xb286,	// (0x00044817) lc0_uni_indicator_pane_g1_ParamLimits

0xb286,	// (0x00044817) lc0_uni_indicator_pane_g1

0x6bd7,	// (0x00040168) lc0_stat_clock_pane_t1

0xdcb1,	// (0x00047242) main_ai5_pane

0x6be5,	// (0x00040176) ai5_sk_pane_ParamLimits

0x6be5,	// (0x00040176) ai5_sk_pane

0xeaa3,	// (0x00048034) cell_ai5_widget_pane_ParamLimits

0xeaa3,	// (0x00048034) cell_ai5_widget_pane

0x6cb2,	// (0x00040243) aid_size_cell_widget_grid

0x6cc0,	// (0x00040251) bg_ai5_widget_pane_ParamLimits

0x6cc0,	// (0x00040251) bg_ai5_widget_pane

0x6d3c,	// (0x000402cd) cell_ai5_widget_pane_g2

0x6d50,	// (0x000402e1) cell_ai5_widget_pane_g3

0x6d6a,	// (0x000402fb) cell_ai5_widget_pane_g4

0x6d7a,	// (0x0004030b) cell_ai5_widget_pane_g5

0x6d8a,	// (0x0004031b) cell_ai5_widget_pane_g6

0x6d96,	// (0x00040327) cell_ai5_widget_pane_g7

0x6e02,	// (0x00040393) cell_ai5_widget_pane_t1_ParamLimits

0x6e02,	// (0x00040393) cell_ai5_widget_pane_t1

0x6e1f,	// (0x000403b0) cell_ai5_widget_pane_t2_ParamLimits

0x6e1f,	// (0x000403b0) cell_ai5_widget_pane_t2

0x6e37,	// (0x000403c8) cell_ai5_widget_pane_t3_ParamLimits

0x6e37,	// (0x000403c8) cell_ai5_widget_pane_t3

0x6e4f,	// (0x000403e0) cell_ai5_widget_pane_t4_ParamLimits

0x6e4f,	// (0x000403e0) cell_ai5_widget_pane_t4

0xeb0f,	// (0x000480a0) cell_ai5_widget_pane_t5_ParamLimits

0xeb0f,	// (0x000480a0) cell_ai5_widget_pane_t5

0x6e94,	// (0x00040425) cell_ai5_widget_pane_t6_ParamLimits

0x6e94,	// (0x00040425) cell_ai5_widget_pane_t6

0x6ea6,	// (0x00040437) cell_ai5_widget_pane_t7_ParamLimits

0x6ea6,	// (0x00040437) cell_ai5_widget_pane_t7

0x6ec5,	// (0x00040456) cell_ai5_widget_pane_t8_ParamLimits

0x6ec5,	// (0x00040456) cell_ai5_widget_pane_t8

0x000b,

0xfe2f,	// (0x000493c0) cell_ai5_widget_pane_t_ParamLimits

0xfe2f,	// (0x000493c0) cell_ai5_widget_pane_t

0x6f49,	// (0x000404da) grid_ai5_widget_pane

0xb98e,	// (0x00044f1f) highlight_cell_ai5_widget_pane_ParamLimits

0xb98e,	// (0x00044f1f) highlight_cell_ai5_widget_pane

0xeb2f,	// (0x000480c0) ai5_sk_left_pane

0xeb39,	// (0x000480ca) ai5_sk_middle_pane

0xeb43,	// (0x000480d4) ai5_sk_right_pane

0x6f75,	// (0x00040506) bg_ai5_widget_pane_g1_ParamLimits

0x6f75,	// (0x00040506) bg_ai5_widget_pane_g1

0x6f81,	// (0x00040512) bg_ai5_widget_pane_g2_ParamLimits

0x6f81,	// (0x00040512) bg_ai5_widget_pane_g2

0x6f8d,	// (0x0004051e) bg_ai5_widget_pane_g3_ParamLimits

0x6f8d,	// (0x0004051e) bg_ai5_widget_pane_g3

0x6f99,	// (0x0004052a) bg_ai5_widget_pane_g4_ParamLimits

0x6f99,	// (0x0004052a) bg_ai5_widget_pane_g4

0x6fa5,	// (0x00040536) bg_ai5_widget_pane_g5_ParamLimits

0x6fa5,	// (0x00040536) bg_ai5_widget_pane_g5

0x6fb1,	// (0x00040542) bg_ai5_widget_pane_g6_ParamLimits

0x6fb1,	// (0x00040542) bg_ai5_widget_pane_g6

0x6fbd,	// (0x0004054e) bg_ai5_widget_pane_g7_ParamLimits

0x6fbd,	// (0x0004054e) bg_ai5_widget_pane_g7

0x6fc9,	// (0x0004055a) bg_ai5_widget_pane_g8_ParamLimits

0x6fc9,	// (0x0004055a) bg_ai5_widget_pane_g8

0x6fd5,	// (0x00040566) bg_ai5_widget_pane_g9_ParamLimits

0x6fd5,	// (0x00040566) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x000493d9) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x000493d9) bg_ai5_widget_pane_g

0x7007,	// (0x00040598) cell_shortcut_ai5_widget_pane_ParamLimits

0x7007,	// (0x00040598) cell_shortcut_ai5_widget_pane

0xc24a,	// (0x000457db) bg_cell_shortcut_ai5_widget_pane

0x7018,	// (0x000405a9) cell_grid_ai5_widget_pane_g1

0xc24a,	// (0x000457db) highlight_cell_shortcut_ai5_widget_pane

0x205b,	// (0x0003b5ec) ai5_sk_left_pane_g1

0x7021,	// (0x000405b2) ai5_sk_left_pane_g2

0x7029,	// (0x000405ba) ai5_sk_left_pane_g3

0x7031,	// (0x000405c2) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x000493ec) ai5_sk_left_pane_g

0x7039,	// (0x000405ca) ai5_sk_left_pane_t1

0x2063,	// (0x0003b5f4) ai5_sk_right_pane_g1

0x7047,	// (0x000405d8) ai5_sk_right_pane_g2

0x704f,	// (0x000405e0) ai5_sk_right_pane_g3

0x7057,	// (0x000405e8) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x000493f5) ai5_sk_right_pane_g

0x705f,	// (0x000405f0) ai5_sk_right_pane_t1

0x2063,	// (0x0003b5f4) ai5_sk_middle_pane_g1

0x205b,	// (0x0003b5ec) ai5_sk_middle_pane_g2

0x207b,	// (0x0003b60c) ai5_sk_middle_pane_g3

0x704f,	// (0x000405e0) ai5_sk_middle_pane_g4

0x7029,	// (0x000405ba) ai5_sk_middle_pane_g5

0x706d,	// (0x000405fe) ai5_sk_middle_pane_g6

0xeb4d,	// (0x000480de) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x000493fe) ai5_sk_middle_pane_g

0xa1d7,	// (0x00043768) aid_touch_area_size_lc0_ParamLimits

0xa1d7,	// (0x00043768) aid_touch_area_size_lc0

0x0ee3,	// (0x0003a474) cell_hwr_candidate_pane_t1_ParamLimits

0x0383,	// (0x00039914) aid_touch_navi_pane

0xa463,	// (0x000439f4) status_dt_navi_pane_ParamLimits

0xa463,	// (0x000439f4) status_dt_navi_pane

0xa47b,	// (0x00043a0c) status_dt_sta_pane_ParamLimits

0xa47b,	// (0x00043a0c) status_dt_sta_pane

0xeb55,	// (0x000480e6) dt_sta_controll_pane

0xeb62,	// (0x000480f3) dt_sta_indi_pane

0xeb6f,	// (0x00048100) dt_sta_title_pane

0xb702,	// (0x00044c93) bg_dt_sta_indi_pane_ParamLimits

0xb702,	// (0x00044c93) bg_dt_sta_indi_pane

0xeb81,	// (0x00048112) dt_sta_battery_pane

0xeb89,	// (0x0004811a) dt_sta_indi_pane_g1

0x70bf,	// (0x00040650) dt_sta_indi_pane_g2

0x70c8,	// (0x00040659) dt_sta_indi_pane_g3

0x0002,

0xfe7c,	// (0x0004940d) dt_sta_indi_pane_g

0x70d1,	// (0x00040662) dt_sta_signal_pane

0xb98e,	// (0x00044f1f) bg_dt_sta_title_pane_ParamLimits

0xb98e,	// (0x00044f1f) bg_dt_sta_title_pane

0x2eb5,	// (0x0003c446) dt_sta_title_pane_g1

0xeb92,	// (0x00048123) dt_sta_title_pane_t1_ParamLimits

0xeb92,	// (0x00048123) dt_sta_title_pane_t1

0xb568,	// (0x00044af9) bg_dt_sta_control_pane

0xeba7,	// (0x00048138) dt_sta_controll_pane_g1

0xebb0,	// (0x00048141) bg_dt_sta_title_pane_g1

0xebb9,	// (0x0004814a) bg_dt_sta_title_pane_g2

0xebc2,	// (0x00048153) bg_dt_sta_title_pane_g3

0x0002,

0xfe83,	// (0x00049414) bg_dt_sta_title_pane_g

0x4687,	// (0x0003dc18) bg_dt_sta_indi_pane_g1

0x7113,	// (0x000406a4) dt_sta_signal_pane_g1

0x711b,	// (0x000406ac) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x0004941b) dt_sta_signal_pane_g

0x7123,	// (0x000406b4) dt_sta_battery_pane_g1

0x712c,	// (0x000406bd) dt_sta_battery_pane_t1

0x4687,	// (0x0003dc18) bg_dt_sta_control_pane_g1

0xbe63,	// (0x000453f4) fep_china_uni_eep_pane

0xbe6b,	// (0x000453fc) fep_china_uni_entry_pane_ParamLimits

0xbe7b,	// (0x0004540c) popup_fep_china_uni_window_g1_ParamLimits

0xbe8b,	// (0x0004541c) popup_fep_china_uni_window_g2_ParamLimits

0xbe8b,	// (0x0004541c) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x00048c7a) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x00048c7a) popup_fep_china_uni_window_g

0x713b,	// (0x000406cc) fep_china_uni_eep_pane_g1

0x7143,	// (0x000406d4) fep_china_uni_eep_pane_t1

0x6b54,	// (0x000400e5) aid_touch_area_size_smil_player

0x04d9,	// (0x00039a6a) lc0_clock_pane

0x1ee5,	// (0x0003b476) status_pane_g5_ParamLimits

0x1ee5,	// (0x0003b476) status_pane_g5

0x9c0f,	// (0x000431a0) popup_keymap_window

0x1ea3,	// (0x0003b434) status_icon_pane

0x6d50,	// (0x000402e1) cell_ai5_widget_pane_g3_ParamLimits

0x6d6a,	// (0x000402fb) cell_ai5_widget_pane_g4_ParamLimits

0x6d7a,	// (0x0004030b) cell_ai5_widget_pane_g5_ParamLimits

0x6da2,	// (0x00040333) cell_ai5_widget_pane_g8_ParamLimits

0x6da2,	// (0x00040333) cell_ai5_widget_pane_g8

0x6db6,	// (0x00040347) cell_ai5_widget_pane_g9_ParamLimits

0x6db6,	// (0x00040347) cell_ai5_widget_pane_g9

0x6dca,	// (0x0004035b) cell_ai5_widget_pane_g10_ParamLimits

0x6dca,	// (0x0004035b) cell_ai5_widget_pane_g10

0x7152,	// (0x000406e3) status_icon_pane_g1

0xb568,	// (0x00044af9) bg_popup_sub_pane_cp13

0x715a,	// (0x000406eb) popup_keymap_window_t1

0x98cb,	// (0x00042e5c) control_pane_g6_ParamLimits

0x98cb,	// (0x00042e5c) control_pane_g6

0x98d8,	// (0x00042e69) control_pane_g7_ParamLimits

0x98d8,	// (0x00042e69) control_pane_g7

0x98e5,	// (0x00042e76) control_pane_g8_ParamLimits

0x98e5,	// (0x00042e76) control_pane_g8

0xeb55,	// (0x000480e6) dt_sta_controll_pane_ParamLimits

0xeb62,	// (0x000480f3) dt_sta_indi_pane_ParamLimits

0xeb6f,	// (0x00048100) dt_sta_title_pane_ParamLimits

0xb8d9,	// (0x00044e6a) aid_size_touch_scroll_bar_cale

0x8674,	// (0x00041c05) popup_discreet_window_ParamLimits

0x8674,	// (0x00041c05) popup_discreet_window

0x86c6,	// (0x00041c57) popup_sk_window

0x26f9,	// (0x0003bc8a) bg_popup_sub_pane_cp28_ParamLimits

0x26f9,	// (0x0003bc8a) bg_popup_sub_pane_cp28

0x7168,	// (0x000406f9) popup_discreet_window_g1_ParamLimits

0x7168,	// (0x000406f9) popup_discreet_window_g1

0xebcb,	// (0x0004815c) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x0004815c) popup_discreet_window_t1

0x71a6,	// (0x00040737) popup_discreet_window_t2_ParamLimits

0x71a6,	// (0x00040737) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x00049420) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x00049420) popup_discreet_window_t

0x1a2a,	// (0x0003afbb) popup_sk_window_g1

0x1a34,	// (0x0003afc5) popup_sk_window_g2

0x0001,

0xfe96,	// (0x00049427) popup_sk_window_g

0xb2b1,	// (0x00044842) popup_sk_window_t1

0xb2bf,	// (0x00044850) popup_sk_window_t1_copy1

0x6d3c,	// (0x000402cd) cell_ai5_widget_pane_g2_ParamLimits

0x6ed7,	// (0x00040468) cell_ai5_widget_pane_t9_ParamLimits

0x6ed7,	// (0x00040468) cell_ai5_widget_pane_t9

0xb568,	// (0x00044af9) main_fep_fshwr2_pane

0xb2cd,	// (0x0004485e) aid_fshwr2_btn_pane

0xb2e1,	// (0x00044872) aid_fshwr2_syb_pane

0xb2f5,	// (0x00044886) aid_fshwr2_txt_pane

0xb305,	// (0x00044896) fshwr2_func_candi_pane

0xb325,	// (0x000448b6) fshwr2_hwr_syb_pane

0xb347,	// (0x000448d8) fshwr2_icf_pane

0xdcb1,	// (0x00047242) fshwr2_icf_bg_pane

0x1afc,	// (0x0003b08d) fshwr2_icf_pane_t1_ParamLimits

0x1afc,	// (0x0003b08d) fshwr2_icf_pane_t1

0xbde0,	// (0x00045371) fshwr2_func_candi_pane_g1

0xebe9,	// (0x0004817a) fshwr2_func_candi_row_pane_ParamLimits

0xebe9,	// (0x0004817a) fshwr2_func_candi_row_pane

0xb377,	// (0x00044908) cell_fshwr2_syb_pane_ParamLimits

0xb377,	// (0x00044908) cell_fshwr2_syb_pane

0x1b38,	// (0x0003b0c9) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1b38,	// (0x0003b0c9) fshwr2_hwr_syb_pane_g1

0xdcb1,	// (0x00047242) bg_popup_call_pane_cp01

0xb39d,	// (0x0004492e) fshwr2_func_candi_cell_pane_ParamLimits

0xb39d,	// (0x0004492e) fshwr2_func_candi_cell_pane

0x24e2,	// (0x0003ba73) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x24e2,	// (0x0003ba73) fshwr2_func_candi_cell_bg_pane

0xb3e8,	// (0x00044979) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb3e8,	// (0x00044979) fshwr2_func_candi_cell_pane_g1

0xb41f,	// (0x000449b0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb41f,	// (0x000449b0) fshwr2_func_candi_cell_pane_t1

0xdcb1,	// (0x00047242) bg_button_pane_cp08

0xbad0,	// (0x00045061) cell_fshwr2_syb_bg_pane

0xb43a,	// (0x000449cb) cell_fshwr2_syb_bg_pane_g1

0xb44d,	// (0x000449de) cell_fshwr2_syb_bg_pane_t1

0xb98e,	// (0x00044f1f) main_tmo_pane

0xc586,	// (0x00045b17) uni_indicator_pane_g1_ParamLimits

0xc59c,	// (0x00045b2d) uni_indicator_pane_g2_ParamLimits

0xc5b2,	// (0x00045b43) uni_indicator_pane_g3_ParamLimits

0x3222,	// (0x0003c7b3) uni_indicator_pane_g4_ParamLimits

0x3222,	// (0x0003c7b3) uni_indicator_pane_g4

0x3236,	// (0x0003c7c7) uni_indicator_pane_g5_ParamLimits

0x3236,	// (0x0003c7c7) uni_indicator_pane_g5

0x3236,	// (0x0003c7c7) uni_indicator_pane_g6_ParamLimits

0x3236,	// (0x0003c7c7) uni_indicator_pane_g6

0xf8e8,	// (0x00048e79) uni_indicator_pane_g_ParamLimits

0xd36a,	// (0x000468fb) popup_tmo_note_window_ParamLimits

0xd36a,	// (0x000468fb) popup_tmo_note_window

0x1287,	// (0x0003a818) fshwr2_bg_pane

0xb410,	// (0x000449a1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb410,	// (0x000449a1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x0004942c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x0004942c) fshwr2_func_candi_cell_pane_g

0x0e9c,	// (0x0003a42d) bg_popup_window_pane_cp01

0x1bee,	// (0x0003b17f) bg_popup_window_pane_g1_cp01

0x721f,	// (0x000407b0) bg_popup_window_pane_cp22_ParamLimits

0x721f,	// (0x000407b0) bg_popup_window_pane_cp22

0xec0c,	// (0x0004819d) listscroll_tmo_link_pane_ParamLimits

0xec0c,	// (0x0004819d) listscroll_tmo_link_pane

0x726d,	// (0x000407fe) popup_tmo_note_window_g1_ParamLimits

0x726d,	// (0x000407fe) popup_tmo_note_window_g1

0xec4c,	// (0x000481dd) tmo_note_info_pane_ParamLimits

0xec4c,	// (0x000481dd) tmo_note_info_pane

0xec66,	// (0x000481f7) list_tmo_note_info_pane_g1_ParamLimits

0xec66,	// (0x000481f7) list_tmo_note_info_pane_g1

0x72ab,	// (0x0004083c) list_tmo_note_info_pane_g2_ParamLimits

0x72ab,	// (0x0004083c) list_tmo_note_info_pane_g2

0x0001,

0xfea0,	// (0x00049431) list_tmo_note_info_pane_g_ParamLimits

0xfea0,	// (0x00049431) list_tmo_note_info_pane_g

0x72c7,	// (0x00040858) list_tmo_note_info_text_pane_ParamLimits

0x72c7,	// (0x00040858) list_tmo_note_info_text_pane

0x7348,	// (0x000408d9) list_tmo_link_pane

0x7355,	// (0x000408e6) scroll_pane_cp20

0x7362,	// (0x000408f3) list_single_tmo_link_pane_ParamLimits

0x7362,	// (0x000408f3) list_single_tmo_link_pane

0x7372,	// (0x00040903) list_single_tmo_link_pane_t1

0x7380,	// (0x00040911) list_tmo_note_info_text_pane_t1_ParamLimits

0x7380,	// (0x00040911) list_tmo_note_info_text_pane_t1

0x923c,	// (0x000427cd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x923c,	// (0x000427cd) aid_size_touch_scroll_bar_cp01

0x913c,	// (0x000426cd) aid_size_touch_slider_marker

0x86b6,	// (0x00041c47) popup_settings_window_ParamLimits

0x86b6,	// (0x00041c47) popup_settings_window

0xdfd8,	// (0x00047569) popup_candi_list_indi_window

0x0383,	// (0x00039914) aid_touch_navi_pane_ParamLimits

0x11e2,	// (0x0003a773) rs_clock_indi_pane

0x11eb,	// (0x0003a77c) sctrl_sk_bottom_pane_ParamLimits

0x11fc,	// (0x0003a78d) sctrl_sk_top_pane_ParamLimits

0xaf06,	// (0x00044497) popup_fep_tooltip_window

0x6cb2,	// (0x00040243) aid_size_cell_widget_grid_ParamLimits

0x6d27,	// (0x000402b8) cell_ai5_widget_pane_g1_ParamLimits

0x6d27,	// (0x000402b8) cell_ai5_widget_pane_g1

0x6d8a,	// (0x0004031b) cell_ai5_widget_pane_g6_ParamLimits

0x6d96,	// (0x00040327) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe14,	// (0x000493a5) cell_ai5_widget_pane_g_ParamLimits

0xfe14,	// (0x000493a5) cell_ai5_widget_pane_g

0x6f06,	// (0x00040497) cell_ai5_widget_pane_t10_ParamLimits

0x6f06,	// (0x00040497) cell_ai5_widget_pane_t10

0x6f49,	// (0x000404da) grid_ai5_widget_pane_ParamLimits

0x6fe1,	// (0x00040572) cell_contacts_ai5_widget_pane_ParamLimits

0x6fe1,	// (0x00040572) cell_contacts_ai5_widget_pane

0x71bb,	// (0x0004074c) popup_discreet_window_t3_ParamLimits

0x71bb,	// (0x0004074c) popup_discreet_window_t3

0xb363,	// (0x000448f4) popup_fshwr2_char_preview_window_ParamLimits

0xb363,	// (0x000448f4) popup_fshwr2_char_preview_window

0xec7d,	// (0x0004820e) tmo_note_info_pane_t1

0xec92,	// (0x00048223) tmo_note_info_pane_t2

0xeca9,	// (0x0004823a) tmo_note_info_pane_t3

0x7324,	// (0x000408b5) tmo_note_info_pane_t4

0x7336,	// (0x000408c7) tmo_note_info_pane_t5

0x0004,

0xfea5,	// (0x00049436) tmo_note_info_pane_t

0x7348,	// (0x000408d9) list_tmo_link_pane_ParamLimits

0x7355,	// (0x000408e6) scroll_pane_cp20_ParamLimits

0xdcb1,	// (0x00047242) bg_popup_fep_char_preview_window_cp01

0xecbe,	// (0x0004824f) popup_fshwr2_char_preview_window_t1

0x73a7,	// (0x00040938) popup_candi_list_indi_window_g1

0x73b0,	// (0x00040941) bg_cell_contacts_ai5_widget_pane

0x73bc,	// (0x0004094d) cell_contacts_ai5_widget_pane_g1

0x4d4d,	// (0x0003e2de) cell_contacts_ai5_widget_pane_g2

0x73d1,	// (0x00040962) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb0,	// (0x00049441) cell_contacts_ai5_widget_pane_g

0x73dd,	// (0x0004096e) cell_contacts_ai5_widget_pane_t1

0xb98e,	// (0x00044f1f) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7454,	// (0x000409e5) settings_container_pane

0xc24a,	// (0x000457db) listscroll_set_pane_copy1

0x3d63,	// (0x0003d2f4) scroll_pane_cp121_copy1

0x249e,	// (0x0003ba2f) set_content_pane_copy1

0xeccc,	// (0x0004825d) aid_height_set_list_copy1_ParamLimits

0xeccc,	// (0x0004825d) aid_height_set_list_copy1

0x342e,	// (0x0003c9bf) aid_size_parent_copy1_ParamLimits

0x342e,	// (0x0003c9bf) aid_size_parent_copy1

0xecd8,	// (0x00048269) button_value_adjust_pane_cp6_copy1_ParamLimits

0xecd8,	// (0x00048269) button_value_adjust_pane_cp6_copy1

0xbad0,	// (0x00045061) list_highlight_pane_cp2_copy1_ParamLimits

0xbad0,	// (0x00045061) list_highlight_pane_cp2_copy1

0xecec,	// (0x0004827d) list_set_pane_copy1_ParamLimits

0xecec,	// (0x0004827d) list_set_pane_copy1

0x73ef,	// (0x00040980) main_pane_set_t1_copy1_ParamLimits

0x73ef,	// (0x00040980) main_pane_set_t1_copy1

0x7429,	// (0x000409ba) main_pane_set_t2_copy1_ParamLimits

0x7429,	// (0x000409ba) main_pane_set_t2_copy1

0xed99,	// (0x0004832a) main_pane_set_t3_copy1

0xeda7,	// (0x00048338) main_pane_set_t4_copy1

0x7448,	// (0x000409d9) set_content_pane_g1_copy1_ParamLimits

0x7448,	// (0x000409d9) set_content_pane_g1_copy1

0xedb5,	// (0x00048346) setting_code_pane_copy1

0x7551,	// (0x00040ae2) setting_slider_graphic_pane_copy1

0x7551,	// (0x00040ae2) setting_slider_pane_copy1

0x7559,	// (0x00040aea) setting_text_pane_copy1

0x7559,	// (0x00040aea) setting_volume_pane_copy1

0xedb5,	// (0x00048346) settings_code_pane_cp2_copy1

0xedbd,	// (0x0004834e) settings_code_pane_cp_copy1_ParamLimits

0xedbd,	// (0x0004834e) settings_code_pane_cp_copy1

0xb463,	// (0x000449f4) volume_set_pane_copy1

0xedd1,	// (0x00048362) volume_set_pane_g10_copy1

0xedd9,	// (0x0004836a) volume_set_pane_g1_copy1

0xede1,	// (0x00048372) volume_set_pane_g2_copy1

0xede9,	// (0x0004837a) volume_set_pane_g3_copy1

0xedf1,	// (0x00048382) volume_set_pane_g4_copy1

0xedf9,	// (0x0004838a) volume_set_pane_g5_copy1

0xee01,	// (0x00048392) volume_set_pane_g6_copy1

0xee09,	// (0x0004839a) volume_set_pane_g7_copy1

0xee11,	// (0x000483a2) volume_set_pane_g8_copy1

0xee19,	// (0x000483aa) volume_set_pane_g9_copy1

0xb5d8,	// (0x00044b69) bg_set_opt_pane_cp_copy1_ParamLimits

0xb5d8,	// (0x00044b69) bg_set_opt_pane_cp_copy1

0xb46b,	// (0x000449fc) setting_slider_pane_t1_copy1_ParamLimits

0xb46b,	// (0x000449fc) setting_slider_pane_t1_copy1

0xb48a,	// (0x00044a1b) setting_slider_pane_t2_copy1_ParamLimits

0xb48a,	// (0x00044a1b) setting_slider_pane_t2_copy1

0xb4a4,	// (0x00044a35) setting_slider_pane_t3_copy1_ParamLimits

0xb4a4,	// (0x00044a35) setting_slider_pane_t3_copy1

0xb4bc,	// (0x00044a4d) slider_set_pane_copy1_ParamLimits

0xb4bc,	// (0x00044a4d) slider_set_pane_copy1

0xb9e6,	// (0x00044f77) set_opt_bg_pane_g1_copy2

0xb9ee,	// (0x00044f7f) set_opt_bg_pane_g2_copy2

0x75c5,	// (0x00040b56) set_opt_bg_pane_g3_copy2

0xb9fe,	// (0x00044f8f) set_opt_bg_pane_g4_copy2

0xba06,	// (0x00044f97) set_opt_bg_pane_g5_copy2

0xba0e,	// (0x00044f9f) set_opt_bg_pane_g6_copy2

0xee21,	// (0x000483b2) set_opt_bg_pane_g7_copy2

0x75d7,	// (0x00040b68) set_opt_bg_pane_g8_copy2

0x75e1,	// (0x00040b72) set_opt_bg_pane_g9_copy2

0xb4d2,	// (0x00044a63) aid_size_touch_slider_mark_copy1_ParamLimits

0xb4d2,	// (0x00044a63) aid_size_touch_slider_mark_copy1

0xee29,	// (0x000483ba) slider_set_pane_g1_copy1

0x1c7a,	// (0x0003b20b) slider_set_pane_g2_copy1

0xaad4,	// (0x00044065) slider_set_pane_g3_copy1_ParamLimits

0xaad4,	// (0x00044065) slider_set_pane_g3_copy1

0xaae8,	// (0x00044079) slider_set_pane_g4_copy1_ParamLimits

0xaae8,	// (0x00044079) slider_set_pane_g4_copy1

0xab00,	// (0x00044091) slider_set_pane_g5_copy1_ParamLimits

0xab00,	// (0x00044091) slider_set_pane_g5_copy1

0xaad4,	// (0x00044065) slider_set_pane_g6_copy1_ParamLimits

0xaad4,	// (0x00044065) slider_set_pane_g6_copy1

0xb4e6,	// (0x00044a77) slider_set_pane_g7_copy1_ParamLimits

0xb4e6,	// (0x00044a77) slider_set_pane_g7_copy1

0xb57c,	// (0x00044b0d) bg_set_opt_pane_cp2_copy1

0xee32,	// (0x000483c3) setting_slider_graphic_pane_g1_copy1

0xee3b,	// (0x000483cc) setting_slider_graphic_pane_t1_copy1

0xee4b,	// (0x000483dc) setting_slider_graphic_pane_t2_copy1

0xee5b,	// (0x000483ec) slider_set_pane_cp_copy1

0x762d,	// (0x00040bbe) input_focus_pane_cp1_copy1

0x7636,	// (0x00040bc7) list_set_text_pane_copy1

0x763e,	// (0x00040bcf) setting_text_pane_g1_copy1

0xee6b,	// (0x000483fc) set_text_pane_t1_copy1

0x762d,	// (0x00040bbe) input_focus_pane_cp2_copy1

0x763e,	// (0x00040bcf) setting_code_pane_g1_copy1

0x7647,	// (0x00040bd8) setting_code_pane_t1_copy1

0x7655,	// (0x00040be6) list_set_graphic_pane_copy1

0xb57c,	// (0x00044b0d) bg_set_opt_pane_cp4_copy1

0xbfbb,	// (0x0004554c) list_set_graphic_pane_g1_copy1_ParamLimits

0xbfbb,	// (0x0004554c) list_set_graphic_pane_g1_copy1

0x7669,	// (0x00040bfa) list_set_graphic_pane_g2_copy1

0xbfd3,	// (0x00045564) list_set_graphic_pane_t1_copy1_ParamLimits

0xbfd3,	// (0x00045564) list_set_graphic_pane_t1_copy1

0x4687,	// (0x0003dc18) rs_clock_indi_pane_g1

0x7671,	// (0x00040c02) rs_clock_indi_pane_t1

0x767f,	// (0x00040c10) rs_indi_pane

0x7687,	// (0x00040c18) rs_indi_pane_g1

0x7690,	// (0x00040c21) rs_indi_pane_g2

0x73a7,	// (0x00040938) rs_indi_pane_g3

0x0002,

0xfeb7,	// (0x00049448) rs_indi_pane_g

0xc24a,	// (0x000457db) bg_popup_preview_window_pane_cp03

0x7699,	// (0x00040c2a) popup_fep_tooltip_window_t1

0xd010,	// (0x000465a1) popup_note2_window_g2_ParamLimits

0xd010,	// (0x000465a1) popup_note2_window_g2

0x0001,

0xfc4b,	// (0x000491dc) popup_note2_window_g_ParamLimits

0xfc4b,	// (0x000491dc) popup_note2_window_g

0x581f,	// (0x0003edb0) bg_popup_sub_pane_cp11_ParamLimits

0x582c,	// (0x0003edbd) cell_ai3_links_pane_g1_ParamLimits

0x5843,	// (0x0003edd4) cell_ai3_links_pane_t1

0xee6b,	// (0x000483fc) set_text_pane_t1_copy1_ParamLimits

0xc180,	// (0x00045711) cell_graphic_popup_pane_cp2_ParamLimits

0xc180,	// (0x00045711) cell_graphic_popup_pane_cp2

0xee87,	// (0x00048418) cell_graphic_popup_pane_g1_cp2

0xb85c,	// (0x00044ded) cell_graphic_popup_pane_g2_cp2

0x76af,	// (0x00040c40) cell_graphic_popup_pane_g3_cp2

0xee8f,	// (0x00048420) cell_graphic_popup_pane_t2_cp2

0xb86d,	// (0x00044dfe) grid_highlight_pane_cp3_cp2

0xbc5d,	// (0x000451ee) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb98e,	// (0x00044f1f) main_tmo_pane_ParamLimits

0xd35e,	// (0x000468ef) popup_tmo_big_image_note_window

0x6d16,	// (0x000402a7) cell_ai5_widget_list_pane

0x6d1e,	// (0x000402af) cell_ai5_widget_lrg_icon_pane

0xec7d,	// (0x0004820e) tmo_note_info_pane_t1_ParamLimits

0xec92,	// (0x00048223) tmo_note_info_pane_t2_ParamLimits

0xeca9,	// (0x0004823a) tmo_note_info_pane_t3_ParamLimits

0x7324,	// (0x000408b5) tmo_note_info_pane_t4_ParamLimits

0x7336,	// (0x000408c7) tmo_note_info_pane_t5_ParamLimits

0xfea5,	// (0x00049436) tmo_note_info_pane_t_ParamLimits

0x7454,	// (0x000409e5) settings_container_pane_ParamLimits

0xee63,	// (0x000483f4) indicator_popup_pane_cp5

0xee63,	// (0x000483f4) indicator_popup_pane_cp6

0x7655,	// (0x00040be6) list_set_graphic_pane_copy1_ParamLimits

0xb568,	// (0x00044af9) bg_popup_window_pane_cp23

0x76c5,	// (0x00040c56) popup_tmo_big_image_note_window_g1

0x76ce,	// (0x00040c5f) popup_tmo_big_image_note_window_t1

0x76de,	// (0x00040c6f) popup_tmo_big_image_note_window_t2

0x76ee,	// (0x00040c7f) popup_tmo_big_image_note_window_t3

0x0002,

0xfebe,	// (0x0004944f) popup_tmo_big_image_note_window_t

0x4687,	// (0x0003dc18) cell_ai5_widget_lrg_icon_pane_g1

0x76fe,	// (0x00040c8f) cell_ai5_widget_lrg_icon_pane_t1

0x770c,	// (0x00040c9d) cell_ai5_widget_list_row_pane_ParamLimits

0x770c,	// (0x00040c9d) cell_ai5_widget_list_row_pane

0x7723,	// (0x00040cb4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7723,	// (0x00040cb4) cell_ai5_widget_list_row_pane_g1

0xee9d,	// (0x0004842e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xee9d,	// (0x0004842e) cell_ai5_widget_list_row_pane_t1

0x775b,	// (0x00040cec) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x775b,	// (0x00040cec) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec5,	// (0x00049456) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec5,	// (0x00049456) cell_ai5_widget_list_row_pane_t

0xdcb1,	// (0x00047242) main_fep_vtchi_ss_pane

0x77ab,	// (0x00040d3c) popup_fep_char_pre_window

0x77b3,	// (0x00040d44) popup_fep_ituss_window

0xeef8,	// (0x00048489) popup_fep_vkbss_window

0xbad0,	// (0x00045061) grid_vkbss_keypad_pane_ParamLimits

0xbad0,	// (0x00045061) grid_vkbss_keypad_pane

0x781f,	// (0x00040db0) ituss_keypad_pane

0x1ca2,	// (0x0003b233) aid_vkbss_key_offset_ParamLimits

0x1ca2,	// (0x0003b233) aid_vkbss_key_offset

0xb4fc,	// (0x00044a8d) cell_vkbss_key_pane_ParamLimits

0xb4fc,	// (0x00044a8d) cell_vkbss_key_pane

0x782f,	// (0x00040dc0) bg_cell_vkbss_key_g1_ParamLimits

0x782f,	// (0x00040dc0) bg_cell_vkbss_key_g1

0xef05,	// (0x00048496) cell_vkbss_key_3p_pane_ParamLimits

0xef05,	// (0x00048496) cell_vkbss_key_3p_pane

0xef3b,	// (0x000484cc) cell_vkbss_key_g1_ParamLimits

0xef3b,	// (0x000484cc) cell_vkbss_key_g1

0xef71,	// (0x00048502) cell_vkbss_key_t1_ParamLimits

0xef71,	// (0x00048502) cell_vkbss_key_t1

0x1d06,	// (0x0003b297) cell_ituss_key_pane_ParamLimits

0x1d06,	// (0x0003b297) cell_ituss_key_pane

0x7903,	// (0x00040e94) bg_cell_ituss_key_g1_ParamLimits

0x7903,	// (0x00040e94) bg_cell_ituss_key_g1

0x790f,	// (0x00040ea0) cell_ituss_key_pane_g1_ParamLimits

0x790f,	// (0x00040ea0) cell_ituss_key_pane_g1

0x1d17,	// (0x0003b2a8) cell_ituss_key_pane_g2_ParamLimits

0x1d17,	// (0x0003b2a8) cell_ituss_key_pane_g2

0x0005,

0xfecc,	// (0x0004945d) cell_ituss_key_pane_g_ParamLimits

0xfecc,	// (0x0004945d) cell_ituss_key_pane_g

0x1d9b,	// (0x0003b32c) cell_ituss_key_t1_ParamLimits

0x1d9b,	// (0x0003b32c) cell_ituss_key_t1

0x1dd5,	// (0x0003b366) cell_ituss_key_t2_ParamLimits

0x1dd5,	// (0x0003b366) cell_ituss_key_t2

0x1e07,	// (0x0003b398) cell_ituss_key_t3_ParamLimits

0x1e07,	// (0x0003b398) cell_ituss_key_t3

0x1e38,	// (0x0003b3c9) cell_ituss_key_t4_ParamLimits

0x1e38,	// (0x0003b3c9) cell_ituss_key_t4

0x0004,

0xfed9,	// (0x0004946a) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x0004946a) cell_ituss_key_t

0xefcd,	// (0x0004855e) cell_vkbss_key_3p_pane_g1

0xefd5,	// (0x00048566) cell_vkbss_key_3p_pane_g2

0xefdd,	// (0x0004856e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee4,	// (0x00049475) cell_vkbss_key_3p_pane_g

0xc24a,	// (0x000457db) bg_popup_fep_char_preview_window_cp02

0x794d,	// (0x00040ede) popup_fep_char_pre_window_t1

0xeb05,	// (0x00048096) main_ai5_sk_pane

0x73b0,	// (0x00040941) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x73bc,	// (0x0004094d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4d4d,	// (0x0003e2de) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x73d1,	// (0x00040962) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb0,	// (0x00049441) cell_contacts_ai5_widget_pane_g_ParamLimits

0x73dd,	// (0x0004096e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb98e,	// (0x00044f1f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xefe5,	// (0x00048576) main_ai5_sk_pane_g1

0xa857,	// (0x00043de8) popup_query_code_window_g1

0xeee9,	// (0x0004847a) popup_fep_vkb_icf_pane

0x77f6,	// (0x00040d87) popup_fep_vtchi_icf_pane

0x7964,	// (0x00040ef5) bg_icf_pane

0x7964,	// (0x00040ef5) list_vkb_icf_pane

0x7970,	// (0x00040f01) bg_icf_pane_cp01

0x7983,	// (0x00040f14) vtchi_icf_list_pane

0xf03a,	// (0x000485cb) list_vkb_icf_pane_t1_ParamLimits

0xf03a,	// (0x000485cb) list_vkb_icf_pane_t1

0x7a05,	// (0x00040f96) vtchi_icf_list_pane_t1_ParamLimits

0x7a05,	// (0x00040f96) vtchi_icf_list_pane_t1

0x77b3,	// (0x00040d44) popup_fep_ituss_window_ParamLimits

0x77f6,	// (0x00040d87) popup_fep_vtchi_icf_pane_ParamLimits

0x781f,	// (0x00040db0) ituss_keypad_pane_ParamLimits

0x1c98,	// (0x0003b229) ituss_sks_pane

0x7964,	// (0x00040ef5) bg_icf_pane_ParamLimits

0xeece,	// (0x0004845f) icf_edit_indi_pane_ParamLimits

0xeece,	// (0x0004845f) icf_edit_indi_pane

0x7964,	// (0x00040ef5) list_vkb_icf_pane_ParamLimits

0x7970,	// (0x00040f01) bg_icf_pane_cp01_ParamLimits

0x779e,	// (0x00040d2f) icf_edit_indi_pane_cp01_ParamLimits

0x779e,	// (0x00040d2f) icf_edit_indi_pane_cp01

0x7983,	// (0x00040f14) vtchi_query_pane

0x6b24,	// (0x000400b5) icf_edit_indi_pane_g1_ParamLimits

0x6b24,	// (0x000400b5) icf_edit_indi_pane_g1

0xf052,	// (0x000485e3) icf_edit_indi_pane_g2_ParamLimits

0xf052,	// (0x000485e3) icf_edit_indi_pane_g2

0x0001,

0xff0f,	// (0x000494a0) icf_edit_indi_pane_g_ParamLimits

0xff0f,	// (0x000494a0) icf_edit_indi_pane_g

0xf066,	// (0x000485f7) icf_edit_indi_pane_t1

0x7a26,	// (0x00040fb7) bg_input_focus_pane_cp042

0xb8d0,	// (0x00044e61) vtchi_button_pane

0x7a2f,	// (0x00040fc0) vtchi_query_pane_t1

0x7a3d,	// (0x00040fce) vtchi_query_pane_t2

0x7a4b,	// (0x00040fdc) vtchi_query_pane_t3

0x0002,

0xfefe,	// (0x0004948f) vtchi_query_pane_t

0xdcb1,	// (0x00047242) bg_button_pane_cp13

0x7a59,	// (0x00040fea) vtchi_button_pane_g1

0x1e7b,	// (0x0003b40c) ituss_sks_pane_g1

0x1e86,	// (0x0003b417) ituss_sks_pane_g2

0x0001,

0xff05,	// (0x00049496) ituss_sks_pane_g

0x7a61,	// (0x00040ff2) ituss_sks_pane_t1

0x7a6f,	// (0x00041000) ituss_sks_pane_t2

0x0001,

0xff0a,	// (0x0004949b) ituss_sks_pane_t

0x40fb,	// (0x0003d68c) indicator_nsta_pane_cp_g1

0x4104,	// (0x0003d695) indicator_nsta_pane_cp_g2

0x410c,	// (0x0003d69d) indicator_nsta_pane_cp_g3

0x4114,	// (0x0003d6a5) indicator_nsta_pane_cp_g4

0x4104,	// (0x0003d695) indicator_nsta_pane_cp_g5

0x410c,	// (0x0003d69d) indicator_nsta_pane_cp_g6

0x0005,

0xfa89,	// (0x0004901a) indicator_nsta_pane_cp_g

0xe8e4,	// (0x00047e75) cell_graphic2_pane_t2_ParamLimits

0xe8e4,	// (0x00047e75) cell_graphic2_pane_t2

0x0001,

0xfd9b,	// (0x0004932c) cell_graphic2_pane_t_ParamLimits

0xfd9b,	// (0x0004932c) cell_graphic2_pane_t

0xe91b,	// (0x00047eac) cell_graphic2_control_pane_t1

0x9514,	// (0x00042aa5) signal_pane_g3_ParamLimits

0x9514,	// (0x00042aa5) signal_pane_g3

0x9528,	// (0x00042ab9) signal_pane_g4_ParamLimits

0x9528,	// (0x00042ab9) signal_pane_g4

0x776d,	// (0x00040cfe) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x776d,	// (0x00040cfe) cell_ai5_widget_list_row_pane_t3

0x7923,	// (0x00040eb4) cell_ituss_key_pane_t1_ParamLimits

0x7923,	// (0x00040eb4) cell_ituss_key_pane_t1

0x216d,	// (0x0003b6fe) form_field_data_wide_pane_vc_t2_ParamLimits

0x216d,	// (0x0003b6fe) form_field_data_wide_pane_vc_t2

0x2181,	// (0x0003b712) form_field_data_wide_pane_vc_t3_ParamLimits

0x2181,	// (0x0003b712) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x00048d61) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x00048d61) form_field_data_wide_pane_vc_t

0x3da5,	// (0x0003d336) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3da5,	// (0x0003d336) form_field_slider_wide_pane_vc_t3

0x3e83,	// (0x0003d414) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3e83,	// (0x0003d414) form_field_popup_wide_pane_vc_t2

0x3e9a,	// (0x0003d42b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3e9a,	// (0x0003d42b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa78,	// (0x00049009) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x00049009) form_field_popup_wide_pane_vc_t

0xb2cd,	// (0x0004485e) aid_fshwr2_btn_pane_ParamLimits

0xb2e1,	// (0x00044872) aid_fshwr2_syb_pane_ParamLimits

0xb2f5,	// (0x00044886) aid_fshwr2_txt_pane_ParamLimits

0x1287,	// (0x0003a818) fshwr2_bg_pane_ParamLimits

0xb305,	// (0x00044896) fshwr2_func_candi_pane_ParamLimits

0xb325,	// (0x000448b6) fshwr2_hwr_syb_pane_ParamLimits

0xb347,	// (0x000448d8) fshwr2_icf_pane_ParamLimits

0xe3ea,	// (0x0004797b) list_double_graphic_pane_vc_g4_ParamLimits

0xe3ea,	// (0x0004797b) list_double_graphic_pane_vc_g4

0x1d37,	// (0x0003b2c8) cell_ituss_key_pane_g3_ParamLimits

0x1d37,	// (0x0003b2c8) cell_ituss_key_pane_g3

0x1e69,	// (0x0003b3fa) cell_ituss_key_t5_ParamLimits

0x1e69,	// (0x0003b3fa) cell_ituss_key_t5

0xeef8,	// (0x00048489) popup_fep_vkbss_window_ParamLimits

0x4e7e,	// (0x0003e40f) aid_cell_ai5_quarter

0xf066,	// (0x000485f7) icf_edit_indi_pane_t1_ParamLimits

0x8adf,	// (0x00042070) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8adf,	// (0x00042070) aid_tch_indicator_popup_pane_cp2

0x8af2,	// (0x00042083) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8af2,	// (0x00042083) aid_tch_query_popup_data_pane_cp2

0x24e2,	// (0x0003ba73) aid_tch_query_popup_pane_ParamLimits

0x24e2,	// (0x0003ba73) aid_tch_query_popup_pane

0x24e2,	// (0x0003ba73) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x24e2,	// (0x0003ba73) aid_tch_query_popup_data_pane_cp1

0xbad0,	// (0x00045061) cell_fshwr2_syb_bg_pane_ParamLimits

0xb43a,	// (0x000449cb) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb44d,	// (0x000449de) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeee9,	// (0x0004847a) popup_fep_vkb_icf_pane_ParamLimits

0xb233,	// (0x000447c4) bg_popup_fep_char_preview_window_g10

0x6dde,	// (0x0004036f) cell_ai5_widget_pane_g11_ParamLimits

0x6dde,	// (0x0004036f) cell_ai5_widget_pane_g11

0x6dea,	// (0x0004037b) cell_ai5_widget_pane_g12_ParamLimits

0x6dea,	// (0x0004037b) cell_ai5_widget_pane_g12

0x6df6,	// (0x00040387) cell_ai5_widget_pane_g13_ParamLimits

0x6df6,	// (0x00040387) cell_ai5_widget_pane_g13

0x6f25,	// (0x000404b6) cell_ai5_widget_pane_t11_ParamLimits

0x6f25,	// (0x000404b6) cell_ai5_widget_pane_t11

0x6f37,	// (0x000404c8) cell_ai5_widget_pane_t12_ParamLimits

0x6f37,	// (0x000404c8) cell_ai5_widget_pane_t12

0x1d43,	// (0x0003b2d4) cell_ituss_key_pane_g4_ParamLimits

0x1d43,	// (0x0003b2d4) cell_ituss_key_pane_g4

0x1d5f,	// (0x0003b2f0) cell_ituss_key_pane_g5_ParamLimits

0x1d5f,	// (0x0003b2f0) cell_ituss_key_pane_g5

0x1d7b,	// (0x0003b30c) cell_ituss_key_pane_g6_ParamLimits

0x1d7b,	// (0x0003b30c) cell_ituss_key_pane_g6

0x2053,	// (0x0003b5e4) bg_icf_pane_g1

0xefee,	// (0x0004857f) bg_icf_pane_g2

0xeff8,	// (0x00048589) bg_icf_pane_g3

0xf000,	// (0x00048591) bg_icf_pane_g4

0xf00a,	// (0x0004859b) bg_icf_pane_g5

0xf014,	// (0x000485a5) bg_icf_pane_g6

0xf01e,	// (0x000485af) bg_icf_pane_g7

0xf026,	// (0x000485b7) bg_icf_pane_g8

0xf030,	// (0x000485c1) bg_icf_pane_g9

0x0008,

0xfeeb,	// (0x0004947c) bg_icf_pane_g

0x780c,	// (0x00040d9d) popup_hyb_candi_window_ParamLimits

0x780c,	// (0x00040d9d) popup_hyb_candi_window

0x20df,	// (0x0003b670) bg_popup_sub_pane_cp01_ParamLimits

0x20df,	// (0x0003b670) bg_popup_sub_pane_cp01

0x7aaa,	// (0x0004103b) entry_hyb_candi_pane_ParamLimits

0x7aaa,	// (0x0004103b) entry_hyb_candi_pane

0x7ab9,	// (0x0004104a) grid_hyb_candi_pane_ParamLimits

0x7ab9,	// (0x0004104a) grid_hyb_candi_pane

0x7ace,	// (0x0004105f) grid_hyb_phrase_pane_ParamLimits

0x7ace,	// (0x0004105f) grid_hyb_phrase_pane

0x7add,	// (0x0004106e) cell_hyb_candi_pane_ParamLimits

0x7add,	// (0x0004106e) cell_hyb_candi_pane

0x7b00,	// (0x00041091) cell_hyb_candi_scroll_pane

0xbde0,	// (0x00045371) cell_hyb_candi_pane_g1

0x7b09,	// (0x0004109a) cell_hyb_candi_pane_t1

0x7b17,	// (0x000410a8) cell_hyb_phrase_pane

0xbde0,	// (0x00045371) cell_hyb_phrase_pane_g1

0x7b20,	// (0x000410b1) cell_hyb_phrase_pane_t1

0x7b2e,	// (0x000410bf) entry_hyb_candi_pane_t1

0xc24a,	// (0x000457db) input_focus_pane_cp06

0x7b3c,	// (0x000410cd) cell_hyb_candi_scroll_pane_g1

0x7b44,	// (0x000410d5) cell_hyb_candi_scroll_pane_g1_aid

0x7b4c,	// (0x000410dd) cell_hyb_candi_scroll_pane_g2

0x7b54,	// (0x000410e5) cell_hyb_candi_scroll_pane_g2_aid

0x7b5c,	// (0x000410ed) cell_hyb_candi_scroll_pane_g3

0x7b64,	// (0x000410f5) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
